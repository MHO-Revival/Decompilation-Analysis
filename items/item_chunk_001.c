/* ===== FUN_10c96130 @ 10c96130  size=909 ===== */
// calls: _stricmp
// strings:
//   "GP_moveleft"
//   "GP_moveright"
//   "GP_moveup"
//   "GP_movedown"
//   "GP_moveleft_Quick"
//   "GP_moveright_Quick"
//   "GP_moveup_Quick"
//   "GP_movedown_Quick"
//   "GP_moveleft_Focus"
//   "GP_moveright_Focus"
//   "GP_moveup_Focus"
//   "GP_movedown_Focus"
//   "GP_moveleft_Bullet"
//   "GP_moveright_Bullet"
//   "GP_moveup_Bullet"
//   "GP_movedown_Bullet"
//   "GP_useitem"
//   "GP_useitem1"
//   "GP_useitem2"
//   "ui_unGamePad_start"

/* [RE-AUTO c0]
   calls: _stricmp
   strings:
     ""GP_moveleft""
     ""GP_moveright""
     ""GP_moveup""
     ""GP_movedown""
     ""GP_moveleft_Quick""
     ""GP_moveright_Quick""
     ""GP_moveup_Quick""
     ""GP_movedown_Quick""
     ""GP_moveleft_Focus""
     ""GP_moveright_Focus"" */

undefined4 FUN_10c96130(undefined4 param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 local_10;
  uint local_c;
  undefined4 local_8;
  
  iVar2 = FUN_10bac530();
  if (iVar2 != 3) {
    return 1;
  }
  local_c = 0;
  local_8 = 0xffffffff;
  local_10 = 9999;
  if (param_3 != 1) {
    return 1;
  }
  if ((char *)*param_2 != (char *)0x0) {
    iVar2 = _stricmp((char *)*param_2,"GP_moveleft");
    if (iVar2 == 0) {
      uVar4 = 100;
      goto LAB_10c96496;
    }
    if ((char *)*param_2 != (char *)0x0) {
      iVar2 = _stricmp((char *)*param_2,"GP_moveright");
      if (iVar2 == 0) {
        uVar4 = 0x65;
        goto LAB_10c96496;
      }
      if (((char *)*param_2 != (char *)0x0) &&
         (iVar2 = _stricmp((char *)*param_2,"GP_moveup"), iVar2 == 0)) {
        uVar4 = 0x66;
        goto LAB_10c96496;
      }
    }
  }
  cVar1 = FUN_10b73690("GP_movedown");
  if (cVar1 == '\0') {
    cVar1 = FUN_10b73690("GP_moveleft_Quick");
    if (cVar1 == '\0') {
      cVar1 = FUN_10b73690("GP_moveright_Quick");
      if (cVar1 == '\0') {
        cVar1 = FUN_10b73690("GP_moveup_Quick");
        if (cVar1 == '\0') {
          cVar1 = FUN_10b73690("GP_movedown_Quick");
          if (cVar1 == '\0') {
            cVar1 = FUN_10b73690("GP_moveleft_Focus");
            if (cVar1 == '\0') {
              cVar1 = FUN_10b73690("GP_moveright_Focus");
              if (cVar1 == '\0') {
                cVar1 = FUN_10b73690("GP_moveup_Focus");
                if (cVar1 == '\0') {
                  cVar1 = FUN_10b73690("GP_movedown_Focus");
                  if (cVar1 == '\0') {
                    cVar1 = FUN_10b73690("GP_moveleft_Bullet");
                    if (cVar1 == '\0') {
                      cVar1 = FUN_10b73690("GP_moveright_Bullet");
                      if (cVar1 == '\0') {
                        cVar1 = FUN_10b73690("GP_moveup_Bullet");
                        if (cVar1 == '\0') {
                          cVar1 = FUN_10b73690("GP_movedown_Bullet");
                          if (cVar1 == '\0') {
                            cVar1 = FUN_10b73690(&DAT_11ccddb4);
                            if ((((cVar1 == '\0') &&
                                 (cVar1 = FUN_10b73690("GP_useitem"), cVar1 == '\0')) &&
                                (cVar1 = FUN_10b73690("GP_useitem1"), cVar1 == '\0')) &&
                               (cVar1 = FUN_10b73690("GP_useitem2"), cVar1 == '\0')) {
                              cVar1 = FUN_10b73690(&DAT_11ccddd4);
                              if (cVar1 == '\0') {
                                cVar1 = FUN_10b73690(&DAT_11ccdddc);
                                if (cVar1 == '\0') {
                                  cVar1 = FUN_10b73690(&DAT_11ccdde4);
                                  if (cVar1 == '\0') {
                                    cVar1 = FUN_10b73690("ui_unGamePad_start");
                                    if (cVar1 == '\0') {
                                      cVar1 = FUN_10b73690("ui_unGamePad_back");
                                      if (cVar1 == '\0') {
                                        cVar1 = FUN_10b73690("GP_lb");
                                        if (cVar1 == '\0') {
                                          cVar1 = FUN_10b73690("GP_lt");
                                          if (cVar1 == '\0') {
                                            cVar1 = FUN_10b73690("GP_close");
                                            if (cVar1 == '\0') {
                                              cVar1 = FUN_10b73690("GP_open");
                                              if (cVar1 == '\0') {
                                                cVar1 = FUN_10b73690("GP_rb");
                                                if (cVar1 == '\0') {
                                                  cVar1 = FUN_10b73690("GP_rt");
                                                  uVar4 = -(uint)(cVar1 != '\0') & 0x70;
                                                }
                                                else {
                                                  uVar4 = 0x6f;
                                                }
                                              }
                                              else {
                                                uVar4 = 0x72;
                                              }
                                            }
                                            else {
                                              uVar4 = 0x73;
                                            }
                                          }
                                          else {
                                            uVar4 = 0x6e;
                                          }
                                        }
                                        else {
                                          uVar4 = 0x6d;
                                        }
                                      }
                                      else {
                                        uVar4 = 0x71;
                                      }
                                    }
                                    else {
                                      uVar4 = 0x6c;
                                      FUN_10c95210(0,param_2,0,0);
                                    }
                                  }
                                  else {
                                    uVar4 = 0x6b;
                                  }
                                }
                                else {
                                  uVar4 = 0x6a;
                                }
                              }
                              else {
                                uVar4 = 0x69;
                              }
                            }
                            else {
                              uVar4 = 0x68;
                            }
                          }
                          else {
                            uVar4 = 0x7b;
                          }
                        }
                        else {
                          uVar4 = 0x7a;
                        }
                      }
                      else {
                        uVar4 = 0x79;
                      }
                    }
                    else {
                      uVar4 = 0x78;
                    }
                  }
                  else {
                    uVar4 = 0x7f;
                  }
                }
                else {
                  uVar4 = 0x7e;
                }
              }
              else {
                uVar4 = 0x7d;
              }
            }
            else {
              uVar4 = 0x7c;
            }
          }
          else {
            uVar4 = 0x77;
          }
        }
        else {
          uVar4 = 0x76;
        }
      }
      else {
        uVar4 = 0x75;
      }
    }
    else {
      uVar4 = 0x74;
    }
  }
  else {
    uVar4 = 0x67;
  }
LAB_10c96496:
  local_c = uVar4;
  FUN_10d17440();
  piVar3 = (int *)FUN_10d17870();
  (**(code **)(*piVar3 + 4))(0x33,&local_10);
  return 1;
}



/* ===== FUN_10c978d0 @ 10c978d0  size=348 ===== */
// calls: CInfoRecord::GetModelString, GrantActivityReward
// strings:
//   "Wardrobe"
//   "NORMAL_IDLE_WARDROBE"

/* [RE-AUTO c0]
   strings:
     ""Wardrobe""
     ""NORMAL_IDLE_WARDROBE"" */

undefined1 FUN_10c978d0(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8;
  
  if ((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) {
    cVar1 = (**(code **)(**(int **)(DAT_1202e818 + 0x14) + 0xe8))();
    if (cVar1 == '\0') {
      return 0;
    }
    piVar2 = (int *)FUN_104d0280();
    cVar1 = (**(code **)(*piVar2 + 0x54))("Wardrobe");
    if (cVar1 != '\0') {
      iVar3 = FUN_10bac530();
      if (iVar3 == 3) {
        cVar1 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x168))();
        if (cVar1 == '\0') {
          piVar2 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90);
          if (piVar2 != (int *)0x0) {
            iVar3 = (**(code **)(*piVar2 + 0xb4))();
            if (iVar3 != 0) {
              piVar2 = (int *)(**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))
                                        ();
              piVar2 = (int *)(**(code **)(*piVar2 + 0x18c))();
              if (piVar2 != (int *)0x0) {
                iVar3 = (**(code **)(*piVar2 + 0x790))();
                if (iVar3 != 0) {
                  CInfoRecord__GetModelString("NORMAL_IDLE_WARDROBE",extraout_ECX,0);
                  (**(code **)(*piVar2 + 0x790))();
                  cVar1 = FUN_10fd2467();
                  if (cVar1 == '\0') {
                    GrantActivityReward(0x1376);
                    return 1;
                  }
                }
              }
            }
          }
          local_c = 0;
          local_8 = 0;
          local_14 = 0x10f;
          local_10 = 2;
          FUN_104ef270(&local_14);
          return 1;
        }
        GrantActivityReward(0x1373);
      }
    }
  }
  return 1;
}



/* ===== FUN_10d2d3b0 @ 10d2d3b0  size=687 ===== */
// strings:
//   "m_nOpenWidgetID"
//   "m_nItemColumn"
//   "m_nItemGrid"
//   "m_nSelectItemID"
//   "m_bUpdateProcess"

/* [RE-AUTO c0]
   strings:
     ""m_nOpenWidgetID""
     ""m_nItemColumn""
     ""m_nItemGrid""
     ""m_nSelectItemID""
     ""m_bUpdateProcess"" */

void __thiscall FUN_10d2d3b0(int param_1,int *param_2)

{
  int *piVar1;
  int local_28;
  int *local_24;
  int local_18;
  int *local_14;
  int local_8;
  
  piVar1 = (int *)(*(int *)(param_1 + 0xac) + 0x8e0);
  if (((int *)*piVar1 != piVar1) ||
     (piVar1 = (int *)(*(int *)(param_1 + 0xac) + 0x8e8), (int *)*piVar1 != piVar1)) {
    local_8 = param_1;
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x30))(0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
    local_14 = (int *)(float)*param_2;
    local_18 = 4;
    (**(code **)(*piVar1 + 0x18))("m_nOpenWidgetID",&local_18,0);
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
    (**(code **)(*piVar1 + 0x18))("m_nItemColumn",&local_18,0);
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
    (**(code **)(*piVar1 + 0x18))("m_nItemGrid",&local_18,0);
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
    (**(code **)(*piVar1 + 0x18))("m_nSelectItemID",&local_18,0);
    if (local_18 == 6) {
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 0xc))();
      }
    }
    else if ((local_18 == 7) && (local_14 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_14);
    }
    local_14 = (int *)CONCAT31(local_14._1_3_,(char)param_2[4]);
    local_18 = 2;
    (**(code **)(*piVar1 + 0x18))("m_bUpdateProcess",&local_18,0);
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
    FUN_10d1d220(*(undefined4 *)(local_8 + 0x58),0x51,&local_18,&local_28);
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



/* ===== FUN_10e0f640 @ 10e0f640  size=1226 ===== */
// strings:
//   "Enable"
//   "Disable"
//   "EnterVehicle"
//   "ExitVehicle"
//   "SeatChange"
//   "ItemPickedUp"
//   "ItemDropped"
//   "ItemUsed"
//   "NPCGrabbed"
//   "NPCThrown"
//   "ObjectGrabbed"
//   "ObjectThrown"
//   "StanceChanged"
//   "SpecialMove"
//   "OnDeath"
//   "OnRevive"
//   "OnEnterSpecator"
//   "OnLeaveSpecator"
//   "OnHealthChange"
//   "OnToggleThirdPerson"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""Enable""
     ""Disable""
     ""EnterVehicle""
     ""ExitVehicle""
     ""SeatChange""
     ""ItemPickedUp""
     ""ItemDropped""
     ""ItemUsed""
     ""NPCGrabbed""
     ""NPCThrown"" */

void FUN_10e0f640(undefined4 *param_1)

{
  undefined1 auStack_8 [4];
  
  if ((DAT_120318c0 & 1) == 0) {
    DAT_120318c0 = DAT_120318c0 | 1;
    _DAT_12031860 = &DAT_11ced080;
    _DAT_12031864 = 0;
    _DAT_12031868 = &DAT_11d9d32b;
    _DAT_1203186c = 0;
    _DAT_12031870 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_12031874,auStack_8);
    (*(code *)PTR_FUN_11df772c)(auStack_8);
    _DAT_12031878 = "Enable";
    _DAT_1203187c = 0;
    _DAT_12031880 = &DAT_11d9d32b;
    _DAT_12031884 = 0;
    _DAT_12031888 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_1203188c,auStack_8);
    (*(code *)PTR_FUN_11df772c)(auStack_8);
    _DAT_12031890 = "Disable";
    _DAT_12031894 = 0;
    _DAT_12031898 = &DAT_11d9d32b;
    _DAT_1203189c = 0;
    DAT_120318a0 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_120318a4,auStack_8);
    (*(code *)PTR_FUN_11df772c)(auStack_8);
    DAT_120318b8 = &DAT_11df7728;
    _DAT_120318a8 = 0;
    uRam120318ac = 0;
    uRam120318b0 = 0;
    uRam120318b4 = 0;
    FUN_11a8911f(&LAB_11c8b320);
  }
  if ((DAT_120318c0 & 2) == 0) {
    DAT_120318c0 = DAT_120318c0 | 2;
    _DAT_120318c8 = "EnterVehicle";
    uRam120318cc = 0;
    _DAT_120318d0 = &DAT_11d9d32b;
    uRam120318d4 = 3;
    _DAT_120318d8 = "ExitVehicle";
    uRam120318dc = 0;
    puRam120318e0 = &DAT_11d9d32b;
    uRam120318e4 = 3;
    _DAT_120318e8 = "SeatChange";
    uRam120318ec = 0;
    puRam120318f0 = &DAT_11d9d32b;
    uRam120318f4 = 1;
    _DAT_120318f8 = "ItemPickedUp";
    uRam120318fc = 0;
    puRam12031900 = &DAT_11d9d32b;
    uRam12031904 = 3;
    _DAT_12031908 = "ItemDropped";
    uRam1203190c = 0;
    puRam12031910 = &DAT_11d9d32b;
    uRam12031914 = 3;
    _DAT_12031918 = "ItemUsed";
    uRam1203191c = 0;
    puRam12031920 = &DAT_11d9d32b;
    uRam12031924 = 3;
    _DAT_12031928 = "NPCGrabbed";
    uRam1203192c = 0;
    puRam12031930 = &DAT_11d9d32b;
    uRam12031934 = 3;
    _DAT_12031938 = "NPCThrown";
    uRam1203193c = 0;
    puRam12031940 = &DAT_11d9d32b;
    uRam12031944 = 3;
    _DAT_12031948 = "ObjectGrabbed";
    uRam1203194c = 0;
    puRam12031950 = &DAT_11d9d32b;
    uRam12031954 = 3;
    _DAT_12031958 = "ObjectThrown";
    uRam1203195c = 0;
    puRam12031960 = &DAT_11d9d32b;
    uRam12031964 = 3;
    _DAT_12031968 = "StanceChanged";
    uRam1203196c = 0;
    puRam12031970 = &DAT_11d9d32b;
    uRam12031974 = 1;
    _DAT_12031978 = "SpecialMove";
    uRam1203197c = 0;
    puRam12031980 = &DAT_11d9d32b;
    uRam12031984 = 1;
    _DAT_12031988 = "OnDeath";
    uRam1203198c = 0;
    puRam12031990 = &DAT_11d9d32b;
    uRam12031994 = 1;
    _DAT_12031998 = "OnRevive";
    uRam1203199c = 0;
    puRam120319a0 = &DAT_11d9d32b;
    uRam120319a4 = 1;
    _DAT_120319a8 = "OnEnterSpecator";
    uRam120319ac = 0;
    puRam120319b0 = &DAT_11d9d32b;
    uRam120319b4 = 1;
    _DAT_120319b8 = "OnLeaveSpecator";
    uRam120319bc = 0;
    puRam120319c0 = &DAT_11d9d32b;
    uRam120319c4 = 6;
    _DAT_120319c8 = "OnHealthChange";
    uRam120319cc = 0;
    puRam120319d0 = &DAT_11d9d32b;
    uRam120319d4 = 1;
    _DAT_120319d8 = "OnToggleThirdPerson";
    uRam120319dc = 0;
    puRam120319e0 = &DAT_11d9d32b;
    uRam120319e4 = 6;
    _DAT_120319e8 = 0;
    uRam120319ec = 0;
    uRam120319f0 = 0;
    uRam120319f4 = 0;
  }
  *param_1 = &DAT_12031860;
  param_1[1] = &DAT_120318c8;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x11;
  return;
}



/* ===== FUN_10e5a160 @ 10e5a160  size=695 ===== */
// strings:
//   "enable"
//   "disable"
//   "triggerOnce"
//   "useItem"
//   "OnEvent"
//   "playerNetID"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""enable""
     ""disable""
     ""triggerOnce""
     ""useItem""
     ""OnEvent""
     ""playerNetID"" */

void FUN_10e5a160(undefined4 *param_1)

{
  uint uStack_8;
  
  if ((DAT_120375e8 & 1) == 0) {
    DAT_120375e8 = DAT_120375e8 | 1;
    _DAT_12037570 = "enable";
    _DAT_12037574 = 0;
    _DAT_12037578 = &DAT_11d9d32b;
    _DAT_1203757c = 0;
    _DAT_12037580 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_12037584,&uStack_8);
    (*(code *)PTR_FUN_11df772c)(&uStack_8);
    _DAT_12037588 = "disable";
    _DAT_1203758c = 0;
    _DAT_12037590 = &DAT_11d9d32b;
    _DAT_12037594 = 0;
    _DAT_12037598 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_1203759c,&uStack_8);
    (*(code *)PTR_FUN_11df772c)(&uStack_8);
    _DAT_120375b0 = &DAT_11df7709;
    uStack_8 = uStack_8 & 0xffffff00;
    _DAT_120375a0 = "triggerOnce";
    _DAT_120375a4 = 0;
    _DAT_120375a8 = &DAT_11d9d32b;
    _DAT_120375ac = 0;
    (*(code *)PTR_FUN_11df7714)(&DAT_120375b4,&uStack_8);
    (*(code *)PTR_FUN_11df770c)(&uStack_8);
    uStack_8 = 0;
    _DAT_120375b8 = "useItem";
    DAT_120375c8 = &DAT_11df7669;
    _DAT_120375bc = 0;
    _DAT_120375c0 = &DAT_11d9d32b;
    _DAT_120375c4 = &DAT_11d9d32b;
    (*(code *)PTR_FUN_11df7674)(&DAT_120375cc,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    DAT_120375e0 = &DAT_11df7728;
    _DAT_120375d0 = 0;
    uRam120375d4 = 0;
    uRam120375d8 = 0;
    uRam120375dc = 0;
    FUN_11a8911f(&LAB_11c8e290);
  }
  if ((DAT_120375e8 & 2) == 0) {
    DAT_120375e8 = DAT_120375e8 | 2;
    _DAT_120375ec = "OnEvent";
    uRam120375f0 = 0;
    puRam120375f4 = &DAT_11d9d32b;
    _DAT_120375f8 = 1;
    _DAT_120375fc = "playerNetID";
    uRam12037600 = 0;
    puRam12037604 = &DAT_11d9d32b;
    uRam12037608 = 1;
    _DAT_1203760c = 0;
    uRam12037610 = 0;
    uRam12037614 = 0;
    uRam12037618 = 0;
  }
  *param_1 = &DAT_12037570;
  param_1[1] = &DAT_120375ec;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x10;
  return;
}



/* ===== FUN_10e73e70 @ 10e73e70  size=816 ===== */
// strings:
//   "enable"
//   "disable"
//   "triggerOnce"
//   "logicEntityNetID"
//   "useItem"
//   "OnEvent"
//   "playerNetID"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""enable""
     ""disable""
     ""triggerOnce""
     ""logicEntityNetID""
     ""useItem""
     ""OnEvent""
     ""playerNetID"" */

void FUN_10e73e70(undefined4 *param_1)

{
  uint uStack_8;
  
  if ((DAT_120382b8 & 1) == 0) {
    DAT_120382b8 = DAT_120382b8 | 1;
    _DAT_12038228 = "enable";
    _DAT_1203822c = 0;
    _DAT_12038230 = &DAT_11d9d32b;
    _DAT_12038234 = 0;
    _DAT_12038238 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_1203823c,&uStack_8);
    (*(code *)PTR_FUN_11df772c)(&uStack_8);
    _DAT_12038240 = "disable";
    _DAT_12038244 = 0;
    _DAT_12038248 = &DAT_11d9d32b;
    _DAT_1203824c = 0;
    _DAT_12038250 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_12038254,&uStack_8);
    (*(code *)PTR_FUN_11df772c)(&uStack_8);
    _DAT_12038268 = &DAT_11df7709;
    uStack_8 = uStack_8 & 0xffffff00;
    _DAT_12038258 = "triggerOnce";
    _DAT_1203825c = 0;
    _DAT_12038260 = &DAT_11d9d32b;
    _DAT_12038264 = 0;
    (*(code *)PTR_FUN_11df7714)(&DAT_1203826c,&uStack_8);
    (*(code *)PTR_FUN_11df770c)(&uStack_8);
    uStack_8 = 0;
    _DAT_12038280 = &DAT_11df7669;
    _DAT_12038270 = "logicEntityNetID";
    _DAT_12038274 = 0;
    _DAT_12038278 = &DAT_11d9d32b;
    _DAT_1203827c = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_12038284,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    DAT_12038298 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_12038288 = "useItem";
    _DAT_1203828c = 0;
    _DAT_12038290 = &DAT_11d9d32b;
    _DAT_12038294 = &DAT_11d9d32b;
    (*(code *)PTR_FUN_11df7674)(&DAT_1203829c,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    DAT_120382b0 = &DAT_11df7728;
    _DAT_120382a0 = 0;
    uRam120382a4 = 0;
    uRam120382a8 = 0;
    uRam120382ac = 0;
    FUN_11a8911f(&LAB_11c8e800);
  }
  if ((DAT_120382b8 & 2) == 0) {
    DAT_120382b8 = DAT_120382b8 | 2;
    _DAT_120382bc = "OnEvent";
    uRam120382c0 = 0;
    puRam120382c4 = &DAT_11d9d32b;
    _DAT_120382c8 = 1;
    _DAT_120382cc = "playerNetID";
    uRam120382d0 = 0;
    puRam120382d4 = &DAT_11d9d32b;
    uRam120382d8 = 1;
    _DAT_120382dc = 0;
    uRam120382e0 = 0;
    uRam120382e4 = 0;
    uRam120382e8 = 0;
  }
  *param_1 = &DAT_12038228;
  param_1[1] = &DAT_120382bc;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x10;
  return;
}



/* ===== FUN_10ea7530 @ 10ea7530  size=1090 ===== */
// calls: CCombatActionDef::ReadFromXml
// strings:
//   "Monster"
//   "BeginTeach"
//   "ShortcutSet"
//   "clearShortcut"
//   "itemid"
//   "ItemList"
//   "initInventory"
//   "itemCounts"
//   "Steps"
//   "PresentActions"
//   "EndTeach"

/* [RE-AUTO c0]
   strings:
     ""Monster""
     ""BeginTeach""
     ""ShortcutSet""
     ""clearShortcut""
     ""itemid""
     ""ItemList""
     ""initInventory""
     ""itemCounts""
     ""Steps""
     ""PresentActions"" */

undefined1 __thiscall FUN_10ea7530(int param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int **extraout_ECX;
  char *extraout_ECX_00;
  undefined1 uVar7;
  char *pcStack_e8;
  int **ppiStack_e4;
  int **ppiStack_e0;
  int **ppiStack_dc;
  int **ppiStack_d8;
  int **ppiStack_d4;
  int *piStack_d0;
  int **ppiStack_cc;
  int *piStack_c8;
  undefined1 *puStack_c4;
  int *local_44;
  int *local_40;
  undefined4 local_3c;
  int local_38;
  int *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  char local_5;
  
  puStack_c4 = &DAT_11da7300;
  piStack_c8 = (int *)0x10ea754e;
  local_18 = param_1;
  piStack_c8 = (int *)(**(code **)(*param_2 + 0x7c))();
  if (piStack_c8 == (int *)0x0) {
    uVar7 = 0;
    goto LAB_10ea7ab4;
  }
  ppiStack_cc = (int **)0x10ea7562;
  FUN_100e52b0();
  piStack_d0 = (int *)0x11cbf310;
  ppiStack_d4 = (int **)0x10ea7575;
  ppiStack_cc = (int **)(param_1 + 8);
  cVar1 = (**(code **)(*param_2 + 0x74))();
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 8) = 0xc379;
  }
  ppiStack_d8 = &local_40;
  ppiStack_d4 = (int **)0x11cf58a0;
  ppiStack_dc = (int **)0x10ea7593;
  piVar2 = (int *)(**(code **)(*param_2 + 0xac))();
  if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
    piStack_c8 = (int *)0x10ea759f;
    (*(code *)**(undefined4 **)*piVar2)();
  }
  piVar2 = (int *)*piVar2;
  local_5 = piVar2 != (int *)0x0;
  if (local_40 != (int *)0x0) {
    piStack_c8 = (int *)0x10ea75b5;
    (**(code **)(*local_40 + 4))();
  }
  if (local_5 == '\0') {
LAB_10ea75de:
    ppiStack_cc = &local_c;
    piStack_c8 = (int *)0x11cf58ac;
    piStack_d0 = (int *)0x10ea75f2;
    piVar3 = (int *)(**(code **)(*param_2 + 0xac))();
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      piStack_d0 = (int *)0x10ea75fe;
      (*(code *)**(undefined4 **)*piVar3)();
    }
    if (piVar2 != (int *)0x0) {
      piStack_d0 = (int *)0x10ea7609;
      (**(code **)(*piVar2 + 4))();
    }
    piVar3 = (int *)*piVar3;
    local_5 = piVar3 != (int *)0x0;
    if (local_c != (int *)0x0) {
      piStack_d0 = (int *)0x10ea761f;
      (**(code **)(*local_c + 4))();
    }
    if (local_5 != '\0') {
      piStack_d0 = &local_10;
      ppiStack_d4 = (int **)0x11cf58b8;
      local_10 = 1;
      ppiStack_d8 = (int **)0x10ea7641;
      (**(code **)(*piVar3 + 0x74))();
      *(bool *)(param_1 + 0x38) = 0 < local_10;
      ppiStack_d8 = (int **)0x10ea7657;
      iVar4 = (**(code **)(*piVar3 + 0xa0))();
      if (0 < iVar4) {
        ppiStack_d4 = &local_1c;
        piStack_d0 = (int *)0x0;
        local_14 = 0;
        ppiStack_d8 = (int **)0x10ea7676;
        puVar5 = (undefined4 *)(**(code **)(*piVar3 + 0xa8))();
        ppiStack_d8 = (int **)&local_14;
        ppiStack_dc = (int **)0x11ddf698;
        ppiStack_e0 = (int **)0x10ea7686;
        (**(code **)(*(int *)*puVar5 + 0x74))();
        if (local_1c != (int *)0x0) {
          ppiStack_e0 = (int **)0x10ea7692;
          (**(code **)(*local_1c + 4))();
        }
        ppiStack_e0 = (int **)0xc;
                    /* WARNING: Subroutine does not return */
        ppiStack_e4 = (int **)&UNK_10ea7699;
        FUN_10c3d580();
      }
    }
    ppiStack_d4 = &local_1c;
    piStack_d0 = (int *)0x11cf58c8;
    ppiStack_d8 = (int **)0x10ea76dd;
    piVar6 = (int *)(**(code **)(*param_2 + 0xac))();
    if ((undefined4 *)*piVar6 != (undefined4 *)0x0) {
      ppiStack_d8 = (int **)0x10ea76e9;
      (*(code *)**(undefined4 **)*piVar6)();
    }
    if (piVar3 != (int *)0x0) {
      ppiStack_d8 = (int **)0x10ea76f4;
      (**(code **)(*piVar3 + 4))();
    }
    piVar6 = (int *)*piVar6;
    local_5 = piVar6 != (int *)0x0;
    if (local_1c != (int *)0x0) {
      ppiStack_d8 = (int **)0x10ea770a;
      (**(code **)(*local_1c + 4))();
    }
    if (local_5 != '\0') {
      ppiStack_d8 = (int **)&local_14;
      ppiStack_dc = (int **)0x11cf58d4;
      local_14 = 0;
      ppiStack_e0 = (int **)0x10ea772c;
      (**(code **)(*piVar6 + 0x74))();
      *(bool *)(param_1 + 0x39) = 0 < local_14;
      ppiStack_e0 = (int **)0x10ea7742;
      iVar4 = (**(code **)(*piVar6 + 0xa0))();
      if (0 < iVar4) {
        local_28 = (int *)(param_1 + 0x30);
        ppiStack_dc = &local_44;
        ppiStack_d8 = (int **)0x0;
        local_c = (int *)0x0;
        local_10 = 0;
        ppiStack_e0 = (int **)0x10ea776d;
        puVar5 = (undefined4 *)(**(code **)(*piVar6 + 0xa8))();
        ppiStack_e0 = &local_c;
        ppiStack_e4 = (int **)0x11ddf698;
        pcStack_e8 = (char *)0x10ea777d;
        (**(code **)(*(int *)*puVar5 + 0x74))();
        if (local_44 != (int *)0x0) {
          pcStack_e8 = (char *)0x10ea7789;
          (**(code **)(*local_44 + 4))();
        }
        pcStack_e8 = (char *)0x0;
        puVar5 = (undefined4 *)(**(code **)(*piVar6 + 0xa8))(&local_24);
        (**(code **)(*(int *)*puVar5 + 0x74))("itemCounts",&local_10);
        if (local_24 != (int *)0x0) {
          (**(code **)(*local_24 + 4))();
        }
        local_20 = local_c;
                    /* WARNING: Subroutine does not return */
        FUN_10c3d580(0x10);
      }
    }
    ppiStack_dc = &local_28;
    ppiStack_d8 = (int **)0x11cf58e4;
    ppiStack_e0 = (int **)0x10ea7811;
    piVar2 = (int *)(**(code **)(*param_2 + 0xac))();
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      ppiStack_e0 = (int **)0x10ea781d;
      (*(code *)**(undefined4 **)*piVar2)();
    }
    if (piVar6 != (int *)0x0) {
      ppiStack_e0 = (int **)0x10ea7828;
      (**(code **)(*piVar6 + 4))();
    }
    piVar2 = (int *)*piVar2;
    if (local_28 != (int *)0x0) {
      ppiStack_e0 = (int **)0x10ea783b;
      (**(code **)(*local_28 + 4))();
    }
    if (piVar2 != (int *)0x0) {
      local_c = (int *)0x0;
      ppiStack_e0 = (int **)0x10ea7852;
      iVar4 = (**(code **)(*piVar2 + 0xa0))();
      if (0 < iVar4) {
        ppiStack_e0 = (int **)0x10ea786b;
        FUN_10ea9bc0();
        pcStack_e8 = (char *)&ppiStack_e0;
        ppiStack_e4 = (int **)0x0;
        ppiStack_e0 = extraout_ECX;
        (**(code **)(*piVar2 + 0xa8))();
        cVar1 = CCombatActionDef__ReadFromXml();
        if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_10c3d580(0x78);
        }
        FUN_10eaa4f0();
        uVar7 = 0;
        goto LAB_10ea7aa9;
      }
    }
    ppiStack_e4 = &local_20;
    ppiStack_e0 = (int **)0x11cf58ec;
    pcStack_e8 = (char *)0x10ea78ff;
    piVar3 = (int *)(**(code **)(*param_2 + 0xac))();
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      pcStack_e8 = (char *)0x10ea790b;
      (*(code *)**(undefined4 **)*piVar3)();
    }
    if (piVar2 != (int *)0x0) {
      pcStack_e8 = (char *)0x10ea7916;
      (**(code **)(*piVar2 + 4))();
    }
    piVar2 = (int *)*piVar3;
    if (local_20 != (int *)0x0) {
      pcStack_e8 = (char *)0x10ea7924;
      (**(code **)(*local_20 + 4))();
    }
    if (piVar2 == (int *)0x0) {
LAB_10ea7a03:
      pcStack_e8 = "EndTeach";
      piVar3 = (int *)(**(code **)(*param_2 + 0xac))(&local_24);
      if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
        piStack_c8 = (int *)0x10ea7a23;
        (*(code *)**(undefined4 **)*piVar3)();
      }
      if (piVar2 != (int *)0x0) {
        piStack_c8 = (int *)0x10ea7a2e;
        (**(code **)(*piVar2 + 4))();
      }
      piVar2 = (int *)*piVar3;
      if (local_24 != (int *)0x0) {
        piStack_c8 = (int *)0x10ea7a3c;
        (**(code **)(*local_24 + 4))();
      }
      if (piVar2 != (int *)0x0) {
        ppiStack_cc = (int **)0x10ea7a4b;
        piStack_c8 = piVar2;
        (**(code **)*piVar2)();
        ppiStack_cc = (int **)0x10ea7a56;
        cVar1 = FUN_10ea7450();
        if (cVar1 == '\0') goto LAB_10ea7a5a;
      }
      uVar7 = 1;
    }
    else {
      pcStack_e8 = (char *)0x10ea7938;
      iVar4 = (**(code **)(*piVar2 + 0xa0))();
      if (iVar4 < 1) goto LAB_10ea7a03;
      local_3c = 0;
      local_38 = 0;
      pcStack_e8 = extraout_ECX_00;
      (**(code **)(*piVar2 + 0xa8))(&pcStack_e8,0);
      cVar1 = FUN_10ea6920();
      if (cVar1 != '\0') {
        piStack_c8 = (int *)0x1c;
                    /* WARNING: Subroutine does not return */
        ppiStack_cc = (int **)&UNK_10ea797a;
        FUN_10c3d580();
      }
      if (local_38 != 0) {
        *(int *)(local_38 + -0xc) = *(int *)(local_38 + -0xc) + -1;
        piStack_c8 = (int *)(local_38 + -0xc);
        if (*piStack_c8 < 1) {
          ppiStack_cc = (int **)0x10ea7aa3;
          (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))();
          uVar7 = 0;
          goto LAB_10ea7aa9;
        }
      }
LAB_10ea7a5a:
      uVar7 = 0;
    }
  }
  else {
    piStack_c8 = piVar2;
    if (piVar2 != (int *)0x0) {
      ppiStack_cc = (int **)0x10ea75cb;
      (**(code **)*piVar2)();
    }
    ppiStack_cc = (int **)0x10ea75d3;
    cVar1 = FUN_10ea7450();
    if (cVar1 != '\0') goto LAB_10ea75de;
    uVar7 = 0;
  }
LAB_10ea7aa9:
  if (piVar2 != (int *)0x0) {
    piStack_c8 = (int *)0x10ea7ab4;
    (**(code **)(*piVar2 + 4))();
  }
LAB_10ea7ab4:
  if (param_2 != (int *)0x0) {
    piStack_c8 = (int *)0x10ea7ac0;
    (**(code **)(*param_2 + 4))();
  }
  return uVar7;
}



/* ===== FUN_10f69ad0 @ 10f69ad0  size=128 ===== */
// calls: strncmp
// strings:
//   "WardrobeView"

/* [RE-AUTO c0]
   calls: strncmp
   strings:
     ""WardrobeView"" */

void __thiscall FUN_10f69ad0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  char *_Str1;
  int *piVar4;
  IActionMapManager *pIVar5;
  int iVar6;
  char *_Str2;
  size_t _MaxCount;
  
  FUN_10f6a5c0(param_2);
  iVar3 = (**(code **)(*param_1 + 0xc))();
  piVar4 = *(int **)(iVar3 + 0x100);
  if (piVar4 == (int *)0x0) {
    return;
  }
  cVar2 = (**(code **)(*piVar4 + 0x228))();
  if (cVar2 == '\0') {
    return;
  }
  _MaxCount = 100;
  _Str2 = "WardrobeView";
  _Str1 = (char *)(**(code **)(*param_1 + 8))();
  iVar3 = strncmp(_Str1,_Str2,_MaxCount);
  switch(param_2) {
  case 0:
    iVar3 = (**(code **)(*param_1 + 0xc))();
    piVar1 = *(int **)(iVar3 + 0x100);
    cVar2 = (**(code **)(*param_1 + 0x10))();
    if (((cVar2 != '\0') && (piVar1 != (int *)0x0)) &&
       ((cVar2 = (**(code **)(*piVar1 + 0x228))(), cVar2 != '\0' &&
        ((int *)piVar1[0x714] != (int *)0x0)))) {
      (**(code **)(*(int *)piVar1[0x714] + 0x50))(1);
      param_1[9] = -0x40800000;
    }
    (**(code **)(*piVar4 + 0x16c))(0);
    *(undefined4 *)(*(int *)(DAT_120286c8 + 0x8c) + 0xa58) = 0;
    if ((byte *)param_1[10] != (byte *)0x0) {
      *(uint *)(DAT_120286b8 + 0xad4) = (uint)*(byte *)param_1[10];
      *(undefined4 *)(DAT_120286b8 + 0x1e0) = *(undefined4 *)(param_1[10] + 4);
      *(undefined4 *)(DAT_120286b8 + 0x1ec) = *(undefined4 *)(param_1[10] + 8);
      *(undefined4 *)(DAT_120286b8 + 0x1e8) = *(undefined4 *)(param_1[10] + 0xc);
      *(undefined4 *)(DAT_120286b8 + 0x98) = *(undefined4 *)(param_1[10] + 0x10);
      *(undefined4 *)(DAT_120286b8 + 0x50c) = *(undefined4 *)(param_1[10] + 0x14);
      if (param_1[10] != 0) {
        FUN_10c3d5d0(param_1[10]);
        param_1[10] = 0;
      }
    }
    if (((int *)piVar4[0x714] != (int *)0x0) &&
       (cVar2 = (**(code **)(*(int *)piVar4[0x714] + 0x58))(), cVar2 != '\0')) {
      (**(code **)(*(int *)piVar4[0x714] + 0x54))
                (0,*(undefined4 *)(DAT_120286b8 + 0x1e0),*(undefined4 *)(DAT_120286b8 + 0x1ec));
    }
    if (piVar4[0x565] != 0) {
      FUN_110fb130(0);
    }
    cVar2 = (**(code **)(*piVar4 + 0x228))();
    if (cVar2 != '\0') {
      return;
    }
    (**(code **)(*(int *)piVar4[3] + 0x2f8))(0,0);
    return;
  case 1:
    if ((*(char *)((int)piVar4 + 0x2405) == '\x01') &&
       (iVar3 = (**(code **)(*piVar4 + 0x790))(), iVar3 != 0)) {
      (**(code **)(*piVar4 + 0x790))();
      cVar2 = FUN_10fdc1a0();
      if (cVar2 != '\x01') {
        return;
      }
    }
    (**(code **)(*piVar4 + 0x16c))(1);
    *(undefined4 *)(DAT_120286b8 + 0xa58) = 1;
    *(undefined4 *)(DAT_120286b8 + 0x1e8) = 0x40333333;
    if (*(char *)((int)param_1 + 0x2d) == '\x01') {
      piVar4 = (int *)FUN_104d0280();
      cVar2 = (**(code **)(*piVar4 + 0x44))();
      if (cVar2 != '\0') {
        piVar4 = (int *)FUN_104d0280();
        (**(code **)(*piVar4 + 0x48))(0);
      }
    }
    if (param_1[10] != 0) {
      FUN_10c3d5d0(param_1[10]);
      param_1[10] = 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x20);
  case 2:
    iVar6 = (**(code **)(*param_1 + 0xc))();
    piVar4 = *(int **)(iVar6 + 0x100);
    cVar2 = (**(code **)(*param_1 + 0x10))();
    if (((cVar2 != '\0') && (piVar4 != (int *)0x0)) &&
       ((cVar2 = (**(code **)(*piVar4 + 0x228))(), cVar2 != '\0' &&
        ((int *)piVar4[0x714] != (int *)0x0)))) {
      (**(code **)(*(int *)piVar4[0x714] + 0x50))(1);
      param_1[9] = -0x40800000;
    }
    if (iVar3 != 0) {
      return;
    }
    iVar3 = FUN_10f19240();
    if (iVar3 != 0) {
      iVar6 = (**(code **)(**(int **)(iVar3 + 0x2cd8) + 0x4c))();
      if ((iVar6 != 0) && (piVar4 = (int *)FUN_113ef730(), piVar4 != (int *)0x0)) {
        (**(code **)(*piVar4 + 0x14))(1);
      }
      if (((*(int *)(iVar3 + 0x2b14) != 0) && (iVar3 = FUN_11413880(), iVar3 != 0)) &&
         (piVar4 = (int *)FUN_11438250(), piVar4 != (int *)0x0)) {
        (**(code **)(*piVar4 + 0x14))(1);
      }
    }
    if (DAT_1202e818 == 0) {
      return;
    }
    if (*(int **)(DAT_1202e818 + 0x2c) == (int *)0x0) {
      return;
    }
    if ((uRam1203cd6c & 1) == 0) {
      uRam1203cd6c = uRam1203cd6c | 1;
      piRam1203cd68 =
           (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("g_hidden_namepad");
    }
    if (piRam1203cd68 != (int *)0x0) {
      (**(code **)(*piRam1203cd68 + 0x14))(1);
    }
    if ((uRam1203cd6c & 2) == 0) {
      uRam1203cd6c = uRam1203cd6c | 2;
      piRam1203cd70 =
           (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("g_hide_other_players");
    }
    if (piRam1203cd70 == (int *)0x0) {
      return;
    }
    iVar3 = (**(code **)(*piRam1203cd70 + 8))();
    param_1[0xc] = iVar3;
    piVar4 = *(int **)(DAT_1202e818 + 0x2c);
    break;
  case 3:
    FUN_10f6a1e0(1);
    if (((int *)piVar4[0x714] != (int *)0x0) && (iVar6 = param_1[10], iVar6 != 0)) {
      (**(code **)(*(int *)piVar4[0x714] + 0x54))
                (0,*(undefined4 *)(iVar6 + 4),*(undefined4 *)(iVar6 + 8));
    }
    if (*(char *)((int)param_1 + 0x2d) == '\x01') {
      piVar4 = (int *)FUN_104d0280();
      cVar2 = (**(code **)(*piVar4 + 0x44))();
      if (cVar2 == '\0') {
        piVar4 = (int *)FUN_104d0280();
        (**(code **)(*piVar4 + 0x48))(1);
      }
      pIVar5 = CCryAction::GetIActionMapManager(*(CCryAction **)m_pThis_exref);
      (**(code **)(*(int *)pIVar5 + 0x74))("UpView",0);
    }
    if (iVar3 != 0) {
      return;
    }
    iVar3 = FUN_10f19240();
    if (iVar3 != 0) {
      iVar6 = (**(code **)(**(int **)(iVar3 + 0x2cd8) + 0x4c))();
      if ((iVar6 != 0) && (piVar4 = (int *)FUN_113ef730(), piVar4 != (int *)0x0)) {
        (**(code **)(*piVar4 + 0x14))(0);
      }
      if (((*(int *)(iVar3 + 0x2b14) != 0) && (iVar3 = FUN_11413880(), iVar3 != 0)) &&
         (piVar4 = (int *)FUN_11438250(), piVar4 != (int *)0x0)) {
        (**(code **)(*piVar4 + 0x14))(0);
      }
    }
    if (DAT_1202e818 == 0) {
      return;
    }
    if (*(int **)(DAT_1202e818 + 0x2c) == (int *)0x0) {
      return;
    }
    if ((uRam1203cd6c & 4) == 0) {
      uRam1203cd6c = uRam1203cd6c | 4;
      piRam1203cd74 =
           (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("g_hidden_namepad");
    }
    if (piRam1203cd74 != (int *)0x0) {
      (**(code **)(*piRam1203cd74 + 0x14))(0);
    }
    if ((uRam1203cd6c & 8) == 0) {
      uRam1203cd6c = uRam1203cd6c | 8;
      iRam1203cd78 = (**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("g_hide_other_players");
    }
    if (iRam1203cd78 == 0) {
      return;
    }
    iVar3 = param_1[0xc];
    if (iVar3 == 0) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x84))("g_hide_other_players 0",0,0);
      return;
    }
    if (iVar3 == 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x84))("g_hide_other_players 1",0,0);
      return;
    }
    if (iVar3 != 2) {
      return;
    }
    piVar4 = *(int **)(DAT_1202e818 + 0x2c);
    break;
  default:
    goto LAB_10f6a19e;
  }
  (**(code **)(*piVar4 + 0x84))("g_hide_other_players 2",0,0);
LAB_10f6a19e:
  return;
}



/* ===== FUN_10f78f70 @ 10f78f70  size=456 ===== */
// calls: CInfoRecord::GetModelString, AircraftEntity::AttachAndRelease
// strings:
//   "OnLeave"
//   "Glide_TakeOff"
//   "flyingLoop"
//   "Gliding_Throw_Bomb"
//   "HolsteredFly"
//   "HolsteredFlyLeave"

/* [RE-AUTO c0]
   calls: LAB_12402b6b+1
   strings:
     ""OnLeave""
     ""Glide_TakeOff""
     ""flyingLoop""
     ""Gliding_Throw_Bomb""
     ""HolsteredFly""
     ""HolsteredFlyLeave"" */

void FUN_10f78f70(int param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 extraout_ECX;
  bool bVar9;
  undefined4 local_8;
  
  local_8 = 0x24;
  cVar3 = FUN_10f5c510(&local_8,1);
  if (((cVar3 != '\0') && (*(int *)(param_1 + 0x18) != 0)) &&
     (piVar2 = *(int **)(*(int *)(param_1 + 0x18) + 0x100), piVar2 != (int *)0x0)) {
    piVar4 = (int *)(**(code **)(*piVar2 + 0x10c))();
    pbVar5 = (byte *)(**(code **)(*piVar4 + 0x8c))();
    cVar3 = FUN_10f59630(pbVar5);
    if (cVar3 != '\0') {
      pcVar8 = "OnLeave";
      pbVar6 = *(byte **)(param_2 + 0xc);
      do {
        bVar1 = *pbVar6;
        bVar9 = bVar1 < (byte)*pcVar8;
        if (bVar1 != *pcVar8) {
LAB_10f79000:
          uVar7 = -(uint)bVar9 | 1;
          goto LAB_10f79005;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar9 = bVar1 < (byte)pcVar8[1];
        if (bVar1 != pcVar8[1]) goto LAB_10f79000;
        pbVar6 = pbVar6 + 2;
        pcVar8 = pcVar8 + 2;
      } while (bVar1 != 0);
      uVar7 = 0;
LAB_10f79005:
      if (uVar7 == 0) {
        if (*(int *)(param_1 + 0x234) == 0) {
          pcVar8 = "Glide_TakeOff";
          pbVar6 = pbVar5;
          do {
            bVar1 = *pbVar6;
            bVar9 = bVar1 < (byte)*pcVar8;
            if (bVar1 != *pcVar8) {
LAB_10f79040:
              uVar7 = -(uint)bVar9 | 1;
              goto LAB_10f79045;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar6[1];
            bVar9 = bVar1 < (byte)pcVar8[1];
            if (bVar1 != pcVar8[1]) goto LAB_10f79040;
            pbVar6 = pbVar6 + 2;
            pcVar8 = pcVar8 + 2;
          } while (bVar1 != 0);
          uVar7 = 0;
LAB_10f79045:
          if (uVar7 == 0) {
            func_0x12402b6c(1,1,0);
            *(undefined4 *)(param_1 + 0x234) = 1;
            CInfoRecord__GetModelString("flyingLoop",extraout_ECX,1);
            AircraftEntity__AttachAndRelease(piVar2);
          }
        }
        if (*(int *)(param_1 + 0x234) == 2) {
          pcVar8 = "Gliding_Throw_Bomb";
          pbVar6 = pbVar5;
          do {
            bVar1 = *pbVar6;
            bVar9 = bVar1 < (byte)*pcVar8;
            if (bVar1 != *pcVar8) {
LAB_10f790a7:
              uVar7 = -(uint)bVar9 | 1;
              goto LAB_10f790ac;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar6[1];
            bVar9 = bVar1 < (byte)pcVar8[1];
            if (bVar1 != pcVar8[1]) goto LAB_10f790a7;
            pbVar6 = pbVar6 + 2;
            pcVar8 = pcVar8 + 2;
          } while (bVar1 != 0);
          uVar7 = 0;
LAB_10f790ac:
          if (uVar7 == 0) {
            func_0x12402b6c(1,1,0);
            *(undefined4 *)(param_1 + 0x234) = 1;
          }
        }
      }
      pcVar8 = "HolsteredFly";
      do {
        bVar1 = *pbVar5;
        bVar9 = bVar1 < (byte)*pcVar8;
        if (bVar1 != *pcVar8) {
LAB_10f790f0:
          uVar7 = -(uint)bVar9 | 1;
          goto LAB_10f790f5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar9 = bVar1 < (byte)pcVar8[1];
        if (bVar1 != pcVar8[1]) goto LAB_10f790f0;
        pbVar5 = pbVar5 + 2;
        pcVar8 = pcVar8 + 2;
      } while (bVar1 != 0);
      uVar7 = 0;
LAB_10f790f5:
      if (uVar7 == 0) {
        pcVar8 = "HolsteredFlyLeave";
        pbVar5 = *(byte **)(param_2 + 0xc);
        do {
          bVar1 = *pbVar5;
          bVar9 = bVar1 < (byte)*pcVar8;
          if (bVar1 != *pcVar8) {
LAB_10f79124:
            uVar7 = -(uint)bVar9 | 1;
            goto LAB_10f79129;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar9 = bVar1 < (byte)pcVar8[1];
          if (bVar1 != pcVar8[1]) goto LAB_10f79124;
          pbVar5 = pbVar5 + 2;
          pcVar8 = pcVar8 + 2;
        } while (bVar1 != 0);
        uVar7 = 0;
LAB_10f79129:
        if (uVar7 == 0) {
          *(undefined1 *)(param_1 + 0x238) = 1;
        }
      }
    }
  }
  return;
}



/* ===== FUN_10f79790 @ 10f79790  size=1198 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "NORMAL_FLY"
//   "Glide_TakeOff"
//   "HolsteredFly"
//   "Gliding_Throw_Bomb"
//   "PLLocomotion"
//   "PLBaseSignal"
//   "Glider_Throw_Bomb"
//   "StartFall"
//   "NORMAL_FALL"

/* [RE-AUTO c0]
   strings:
     ""NORMAL_FLY""
     ""Glide_TakeOff""
     ""HolsteredFly""
     ""Gliding_Throw_Bomb""
     ""PLLocomotion""
     ""PLBaseSignal""
     ""Glider_Throw_Bomb""
     ""StartFall""
     ""NORMAL_FALL"" */

void __fastcall FUN_10f79790(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int iVar3;
  undefined4 extraout_ECX_00;
  int local_fc [8];
  int local_dc;
  int local_d0;
  int local_c4 [8];
  int local_a4;
  int local_98;
  int local_8c [8];
  int local_6c;
  int local_60;
  undefined4 *local_5c;
  undefined4 *local_58;
  int local_54 [8];
  int local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  int local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  code *local_1c;
  undefined4 local_18;
  code *local_14;
  undefined4 local_10;
  code *local_c;
  undefined1 local_5;
  
  local_c = FUN_10fad1e0;
  puVar1 = *(undefined4 **)(param_1 + 0xec);
  iVar3 = param_1 + 0xe8;
  if (puVar1 == *(undefined4 **)(param_1 + 0xf0)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
    iVar3 = extraout_ECX;
  }
  else {
    *puVar1 = FUN_10fad1e0;
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 4;
  }
  CInfoRecord__GetModelString("NORMAL_FLY",iVar3);
  FUN_10f58340();
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 0x2011;
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10facfd0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10facfd0;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x44);
  local_c = (code *)0x24;
  if (puVar1 == *(undefined4 **)(param_1 + 0x48)) {
    FUN_10f64460(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = 0x24;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 200);
  local_c = FUN_10fad070;
  if (puVar1 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fad070;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xf8);
  local_c = FUN_10f78f70;
  if (puVar1 == *(undefined4 **)(param_1 + 0xfc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f78f70;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 4;
  }
  FUN_10f56fa0("Glide_TakeOff");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("HolsteredFly");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("Gliding_Throw_Bomb");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredFly");
  FUN_10f573e0();
  FUN_10f5a480(1,0,local_fc);
  FUN_10f574b0();
  FUN_116db560();
  uVar2 = FUN_116db5e0();
  *(undefined4 *)(param_1 + 0x230) = uVar2;
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("Glider_Throw_Bomb");
  FUN_10f573e0();
  FUN_10f56e50();
  local_14 = FUN_10fad240;
  local_c = FUN_10fad3d0;
  if (local_30 == local_2c) {
    FUN_108716d0(local_30,&local_c,&local_5,1,1);
  }
  else {
    *local_30 = FUN_10fad3d0;
    local_30 = local_30 + 1;
  }
  if (local_24 == local_20) {
    FUN_10fb5990(local_24,&local_14,&local_5,1,1);
  }
  else {
    if (local_24 != (undefined4 *)0x0) {
      *local_24 = local_14;
      local_24[1] = local_10;
    }
    local_24 = local_24 + 2;
  }
  FUN_10f5a480(2,1,local_54);
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56e50();
  local_1c = FUN_10fad360;
  if (local_5c == local_58) {
    FUN_10fb5990(local_5c,&local_1c,&local_5,1,1);
  }
  else {
    if (local_5c != (undefined4 *)0x0) {
      *local_5c = FUN_10fad360;
      local_5c[1] = local_18;
    }
    local_5c = local_5c + 2;
  }
  FUN_10f5a480(1,2,local_8c);
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("StartFall");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_FALL",extraout_ECX_00,local_c4);
  FUN_10f593b0();
  *(undefined4 *)(param_1 + 0x234) = 0;
  *(undefined1 *)(param_1 + 0x238) = 0;
  if (local_98 != 0) {
    FUN_10c3d5d0(local_98);
  }
  if (local_a4 != 0) {
    FUN_10c3d5d0(local_a4);
  }
  if (local_c4[0] != 0) {
    FUN_10c3d5d0(local_c4[0]);
  }
  if (local_60 != 0) {
    FUN_10c3d5d0(local_60);
  }
  if (local_6c != 0) {
    FUN_10c3d5d0(local_6c);
  }
  if (local_8c[0] != 0) {
    FUN_10c3d5d0(local_8c[0]);
  }
  if (local_28 != 0) {
    FUN_10c3d5d0(local_28);
  }
  if (local_34 != 0) {
    FUN_10c3d5d0(local_34);
  }
  if (local_54[0] != 0) {
    FUN_10c3d5d0(local_54[0]);
  }
  if (local_d0 != 0) {
    FUN_10c3d5d0(local_d0);
  }
  if (local_dc != 0) {
    FUN_10c3d5d0(local_dc);
  }
  if (local_fc[0] != 0) {
    FUN_10c3d5d0(local_fc[0]);
  }
  return;
}



/* ===== FUN_10f7be10 @ 10f7be10  size=368 ===== */
// calls: CInfoRecord::GetModelString, memmove
// strings:
//   "NORMAL_IDLE_WARDROBE"

/* [RE-AUTO c0]
   calls: memmove
   strings:
     ""NORMAL_IDLE_WARDROBE"" */

void __fastcall FUN_10f7be10(int param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  void *pvVar3;
  void *_Dst;
  size_t _Size;
  code *local_c;
  undefined1 local_5;
  
  *(undefined1 *)(param_1 + 0x250) = 0;
  CInfoRecord__GetModelString("NORMAL_IDLE_WARDROBE",param_1);
  FUN_10f58340();
  puVar2 = *(undefined4 **)(param_1 + 0x44);
  local_c = (code *)0x2d;
  if (puVar2 == *(undefined4 **)(param_1 + 0x48)) {
    FUN_10f64460(puVar2,&local_c,&local_5,1,1);
  }
  else {
    *puVar2 = 0x2d;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 4;
  }
  puVar2 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10fad420;
  if (puVar2 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar2,&local_c,&local_5,1,1);
  }
  else {
    *puVar2 = FUN_10fad420;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  puVar2 = *(undefined4 **)(param_1 + 200);
  local_c = FUN_10fad480;
  if (puVar2 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar2,&local_c,&local_5,1,1);
  }
  else {
    *puVar2 = FUN_10fad480;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  FUN_10f5bd40(6,FUN_10fad510);
  pvVar3 = (void *)FUN_10faefc0(*(undefined4 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xec),
                                FUN_10fa2a80,&local_5);
  pvVar1 = (void *)((int)pvVar3 + 4);
  if ((pvVar1 != *(void **)(param_1 + 0xec)) &&
     (_Size = (int)*(void **)(param_1 + 0xec) - (int)pvVar1, _Size != 0)) {
    memmove(pvVar3,pvVar1,_Size);
  }
  *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + -4;
  pvVar1 = *(void **)(param_1 + 0xec);
  pvVar3 = (void *)FUN_10faefc0(*(undefined4 *)(param_1 + 0xe8),pvVar1,FUN_10f9fc50,&local_5);
  if (pvVar3 != pvVar1) {
    _Dst = (void *)FUN_10faefc0(*(undefined4 *)(param_1 + 0xe8),pvVar1,FUN_10f9fc50,&local_5);
    pvVar3 = (void *)((int)_Dst + 4);
    if ((pvVar3 != pvVar1) && ((int)pvVar1 - (int)pvVar3 != 0)) {
      memmove(_Dst,pvVar3,(int)pvVar1 - (int)pvVar3);
    }
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + -4;
  }
  return;
}



/* ===== FUN_10f7f490 @ 10f7f490  size=228 ===== */
// strings:
//   "PLUseItem"

/* [RE-AUTO c0]
   strings:
     ""PLUseItem"" */

void FUN_10f7f490(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  undefined1 local_1c [16];
  undefined1 *local_c;
  undefined1 *local_8;
  
  pbVar2 = *(byte **)(param_2 + 0xc);
  param_2 = 0x1d;
  cVar3 = FUN_10f5c510(&param_2,1);
  if ((cVar3 != '\0') && (param_1 != 0)) {
    pcVar4 = "PLUseItem";
    pbVar7 = pbVar2;
    do {
      bVar1 = *pbVar7;
      bVar9 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) {
LAB_10f7f4f0:
        uVar5 = -(uint)bVar9 | 1;
        goto LAB_10f7f4f5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar7[1];
      bVar9 = bVar1 < (byte)pcVar4[1];
      if (bVar1 != pcVar4[1]) goto LAB_10f7f4f0;
      pbVar7 = pbVar7 + 2;
      pcVar4 = pcVar4 + 2;
    } while (bVar1 != 0);
    uVar5 = 0;
LAB_10f7f4f5:
    if (uVar5 == 0) {
      iVar6 = (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 800))();
      if (iVar6 != 0) {
        local_c = local_1c;
        pbVar7 = pbVar2;
        do {
          pbVar8 = pbVar7;
          pbVar7 = pbVar8 + 1;
        } while (*pbVar8 != 0);
        local_8 = local_c;
        FUN_100b62c0(pbVar2,pbVar8);
        iVar6 = (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 800))();
        (**(code **)(**(int **)(iVar6 + 0x14) + 0x30))(local_1c,0,0);
        if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
          FUN_10c3d5d0(local_8);
        }
      }
    }
  }
  return;
}



/* ===== FUN_10f7fad0 @ 10f7fad0  size=89 ===== */
// strings:
//   "PLUseItem"
//   "EatSatisfy"
//   "PLBaseSignal"

/* [RE-AUTO c0]
   strings:
     ""PLUseItem""
     ""EatSatisfy""
     ""PLBaseSignal"" */

void FUN_10f7fad0(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  char *pcVar4;
  bool bVar5;
  
  pcVar4 = "PLUseItem";
  pbVar2 = *(byte **)(param_2 + 0xc);
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_10f7fb00:
      uVar3 = -(uint)bVar5 | 1;
      goto LAB_10f7fb05;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_10f7fb00;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_10f7fb05:
  if (uVar3 == 0) {
    (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x600))("PLBaseSignal","EatSatisfy")
    ;
  }
  return;
}



/* ===== FUN_10fad420 @ 10fad420  size=85 ===== */
// strings:
//   "WardrobeView"

/* [RE-AUTO c0]
   strings:
     ""WardrobeView"" */

void FUN_10fad420(int param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = param_1;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) != 0)) {
    FUN_10fd9890("WardrobeView");
    param_1 = 0x2d;
    cVar2 = FUN_10f5c510(&param_1,1);
    if ((cVar2 != '\0') && (*(undefined1 *)(iVar1 + 0x250) = 1, *(int *)(iVar1 + 0x18) != 0)) {
      cVar2 = FUN_10fdc1d0();
      if (cVar2 == '\x01') {
        *(undefined1 *)(iVar1 + 0x250) = 0;
      }
    }
  }
  return;
}



/* ===== FUN_10fad480 @ 10fad480  size=137 ===== */
// strings:
//   "WardrobeView"

/* [RE-AUTO c0]
   strings:
     ""WardrobeView"" */

void FUN_10fad480(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = param_1;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) != 0)) {
    piVar2 = (int *)FUN_10fd9890("WardrobeView");
    if (piVar2 != (int *)0x0) {
      iVar1 = *(int *)(*(int *)(iVar1 + 0x18) + 0x100);
      if ((iVar1 == 0) || (*(char *)(iVar1 + 0x2405) != '\x01')) {
        (**(code **)(*piVar2 + 0x30))(0);
      }
      FUN_10fdc1b0(1);
      FUN_105ec7c0((int)&param_1 + 3);
    }
  }
  iVar1 = param_2;
  piVar2 = (int *)(param_2 + -0xc);
  if (-1 < *piVar2) {
    iVar3 = FUN_10c3dad0(piVar2);
    if (iVar3 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar1 + -4));
      FUN_10c3d900(piVar2);
    }
  }
  return;
}



/* ===== FUN_10fad510 @ 10fad510  size=84 ===== */
// strings:
//   "WardrobeView"

/* [RE-AUTO c0]
   strings:
     ""WardrobeView"" */

void FUN_10fad510(int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  
  iVar1 = param_1;
  if (param_1 != 0) {
    param_1 = 0x2d;
    cVar2 = FUN_10f5c510(&param_1,1);
    if (((cVar2 != '\0') && (*(char *)(iVar1 + 0x250) != '\0')) &&
       (*(undefined1 *)(iVar1 + 0x250) = 0, *(int *)(iVar1 + 0x18) != 0)) {
      piVar3 = (int *)FUN_10fd9890("WardrobeView");
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x30))(1);
      }
    }
  }
  return;
}



/* ===== FUN_10fb7c30 @ 10fb7c30  size=676 ===== */
// calls: CInfoRecord::GetModelString, memmove
// strings:
//   "NORMAL_IDLE_VIEW"
//   "NORMAL_SIT_DOWN"
//   "WardrobeView"

/* WARNING: Removing unreachable block (ram,0x10fb7eb7) */
/* [RE-AUTO c0]
   calls: memmove
   strings:
     ""NORMAL_IDLE_VIEW""
     ""NORMAL_SIT_DOWN""
     ""WardrobeView"" */

void __thiscall FUN_10fb7c30(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar5;
  int *piVar6;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  if (*(int *)(param_1 + 0xc0) != 0) {
    FUN_10f56fa0("NORMAL_IDLE_VIEW");
    local_c = *(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x50);
    iVar2 = FUN_10f57110();
    iVar3 = FUN_10f57110();
    uVar5 = extraout_ECX;
    if (iVar2 != iVar3) {
      FUN_10f56fa0("NORMAL_SIT_DOWN");
      local_10 = *(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x50);
      iVar2 = FUN_10f57110();
      iVar3 = FUN_10f57110();
      uVar5 = extraout_ECX_00;
      if (iVar2 != iVar3) goto LAB_10fb7cba;
    }
    CInfoRecord__GetModelString(&DAT_11d9d32b,uVar5);
    FUN_10f58fc0();
  }
LAB_10fb7cba:
  if (*(int *)(param_1 + 0xc0) != 0) {
    local_10 = 0x2d;
    cVar1 = FUN_10f5c510(&local_10,0);
    if ((((cVar1 != '\0') &&
         (*(char *)(param_1 + 0x15) = (char)param_2, *(int *)(param_1 + 0xc0) != 0)) &&
        (puVar4 = (undefined4 *)FUN_10fd9890("WardrobeView"), puVar4 != (undefined4 *)0x0)) &&
       (iVar2 = (**(code **)*puVar4)(), iVar2 == 3)) {
      FUN_10f699e0(param_1 + 0x1c);
      *(undefined1 *)(param_1 + 0x14) = 1;
    }
  }
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(int *)(param_1 + 0xe0) != 0) {
    do {
      iVar2 = FUN_10a7eff0(*(undefined4 *)(param_1 + 0xd8),param_1 + 0xd4,param_1 + 0xd8,
                           param_1 + 0xdc);
      puVar4 = *(undefined4 **)(iVar2 + 0x20);
      if (puVar4 != (undefined4 *)0x0) {
        piVar6 = puVar4 + 1;
        *piVar6 = *piVar6 + -1;
        if (*piVar6 == 0) {
          (**(code **)*puVar4)(1);
        }
      }
      if (iVar2 != 0) {
        FUN_10c3d5d0(iVar2);
      }
      *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + -1;
    } while (*(int *)(param_1 + 0xe0) != 0);
  }
  if (*(int *)(param_1 + 0xe0) != 0) {
    FUN_10febc80(*(undefined4 *)(param_1 + 0xd4));
    *(int *)(param_1 + 0xd8) = param_1 + 0xd0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(int *)(param_1 + 0xdc) = param_1 + 0xd0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  iVar2 = *(int *)(param_1 + 400);
  if (iVar2 != 0) {
    FUN_110afb30();
    FUN_10c3d5d0(iVar2);
    *(undefined4 *)(param_1 + 400) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18c);
  if (iVar2 != 0) {
    FUN_10f38ee0();
    FUN_10c3d5d0(iVar2);
    *(undefined4 *)(param_1 + 0x18c) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x224);
  if (iVar2 != *(int *)(param_1 + 0x228)) {
    do {
      if (*(int *)(iVar2 + 8) != 0) {
        FUN_10c3d5d0(*(int *)(iVar2 + 8));
      }
      iVar2 = FUN_10febb90(iVar2,&local_5);
    } while (iVar2 != *(int *)(param_1 + 0x228));
  }
  piVar6 = *(int **)(param_1 + 0xe8);
  if (piVar6 != *(int **)(param_1 + 0xec)) {
    do {
      if ((int *)*piVar6 != (int *)0x0) {
        cVar1 = (**(code **)(*(int *)*piVar6 + 0x10))();
        if ((cVar1 != '\0') &&
           (((cVar1 = (**(code **)(*(int *)*piVar6 + 0x3c))(param_2), cVar1 != '\0' ||
             (*(int *)(param_1 + 0x100) == 0)) ||
            (*(char *)(*(int *)(param_1 + 0x100) + 0x2405) != '\x01')))) {
          (**(code **)(*(int *)*piVar6 + 0x20))();
        }
        if ((int *)*piVar6 != (int *)0x0) {
          (**(code **)(*(int *)*piVar6 + 0x28))(1);
        }
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != *(int **)(param_1 + 0xec));
  }
  if (*(int *)(param_1 + 0xe8) != *(int *)(param_1 + 0xec)) {
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xe8);
  }
  return;
}



/* ===== FUN_10fb8270 @ 10fb8270  size=922 ===== */
// calls: sprintf, CInfoRecord::GetModelString, atoi, strncmp, CStateFactory::CreateStateFromXmlNode
// strings:
//   "Libs\\PlayerFSM\\WE%02dFSMStates.xml"
//   "Weapon"
//   "Extensions"
//   "WardrobeView"
//   "States"

/* [RE-AUTO c0]
   calls: sprintf, atoi, strncmp
   strings:
     ""Libs\\PlayerFSM\\WE%02dFSMStates.xml""
     ""Weapon""
     ""Extensions""
     ""WardrobeView""
     ""States"" */

undefined1 __thiscall FUN_10fb8270(int param_1,int param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  size_t _MaxCount;
  int **extraout_ECX;
  undefined1 uVar10;
  byte *pbVar11;
  bool bVar12;
  char *_Str2;
  int **ppiStack_98;
  char local_68 [48];
  int **local_38;
  int local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  char *local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  byte *local_14;
  int *local_10;
  int local_c;
  undefined1 local_6;
  undefined1 local_5;
  
  local_20 = param_1;
  sprintf(local_68,"Libs\\PlayerFSM\\WE%02dFSMStates.xml");
  CInfoRecord__GetModelString();
  if ((int *)DAT_1202e818[0x22] == (int *)0x0) {
    piVar3 = (int *)(**(code **)(*(int *)*DAT_1202e818 + 0x1c4))();
    piVar3 = (int *)(**(code **)(*piVar3 + 0x40))();
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar3)();
    }
  }
  else {
    piVar3 = (int *)(**(code **)(*(int *)DAT_1202e818[0x22] + 4))();
    local_2c = local_28;
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar3)();
      local_2c = local_28;
    }
  }
  piVar3 = (int *)*piVar3;
  local_18 = piVar3;
  if (local_2c != (int *)0x0) {
    (**(code **)(*local_2c + 4))();
  }
  (**(code **)(*piVar3 + 0x3c))();
  CInfoRecord__GetModelString();
  iVar8 = *(int *)(param_1 + 0x1b0);
  if (*(int *)(param_1 + 0x1ac) != iVar8) {
    ppiStack_98 = (int **)((int)&param_2 + 3);
    uVar4 = FUN_10aefb20(iVar8,iVar8);
    FUN_10aefe10(uVar4,*(undefined4 *)(param_1 + 0x1b0),0,&local_5);
    *(undefined4 *)(param_1 + 0x1b0) = uVar4;
  }
  ppiStack_98 = (int **)0x10fb8362;
  uVar5 = atoi(local_24);
  if (uVar5 < 0xd) {
    (**(code **)(*piVar3 + 0x20))();
    ppiStack_98 = (int **)0x10fb837e;
    CInfoRecord__GetModelString();
    pbVar11 = local_14;
    pcVar9 = "Weapon";
    pbVar6 = local_14;
    do {
      bVar1 = *pbVar6;
      bVar12 = bVar1 < (byte)*pcVar9;
      if (bVar1 != *pcVar9) {
LAB_10fb83a8:
        uVar5 = -(uint)bVar12 | 1;
        goto LAB_10fb83ad;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar6[1];
      bVar12 = bVar1 < (byte)pcVar9[1];
      if (bVar1 != pcVar9[1]) goto LAB_10fb83a8;
      pbVar6 = pbVar6 + 2;
      pcVar9 = pcVar9 + 2;
    } while (bVar1 != 0);
    uVar5 = 0;
LAB_10fb83ad:
    if (uVar5 == 0) {
      ppiStack_98 = &local_1c;
      (**(code **)(*piVar3 + 0xac))();
      if ((local_1c != (int *)0x0) && (param_2 = (**(code **)(*local_1c + 0xa0))(), 0 < param_2)) {
        iVar8 = 0;
        do {
          (**(code **)(*local_1c + 0xa8))(&stack0xffffff64,iVar8);
          piVar3 = (int *)FUN_10fba960();
          local_30 = piVar3;
          if (piVar3 != (int *)0x0) {
            _MaxCount = *(int *)(param_1 + 0xec) - *(int *)(param_1 + 0xe8) >> 2;
            (**(code **)(*piVar3 + 0x38))();
            _Str2 = (char *)0x64;
            pcVar9 = (char *)(**(code **)(*piVar3 + 8))("WardrobeView");
            iVar7 = strncmp(pcVar9,_Str2,_MaxCount);
            if (((iVar7 == 0) && (iVar7 = (**(code **)*piVar3)(), iVar7 == 3)) &&
               (*(char *)(param_1 + 0x15) == '\x01')) {
              FUN_10f69a40();
              FUN_10f6a5b0(*(undefined1 *)(param_1 + 0x38));
            }
            puVar2 = *(undefined4 **)(param_1 + 0xec);
            if (puVar2 == *(undefined4 **)(param_1 + 0xf0)) {
              FUN_108716d0(puVar2,&local_30,&local_6,1);
            }
            else {
              *puVar2 = piVar3;
              *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 4;
            }
          }
          iVar8 = iVar8 + 1;
          pbVar11 = local_14;
          piVar3 = local_18;
        } while (iVar8 < param_2);
      }
      (**(code **)(*piVar3 + 0xac))(&local_10);
      if ((local_10 != (int *)0x0) && (local_34 = (**(code **)(*local_10 + 0xa0))(), 0 < local_34))
      {
        local_38 = (int **)(local_c + -0xc);
        iVar8 = 0;
        do {
          piVar3 = local_10;
          ppiStack_98 = (int **)&stack0xffffff6c;
          if (-1 < (int)*local_38) {
            ppiStack_98 = local_38;
            FUN_10c3dab0();
            ppiStack_98 = extraout_ECX;
          }
          (**(code **)(*piVar3 + 0xa8))(&ppiStack_98);
          CStateFactory__CreateStateFromXmlNode(&local_20);
          if (local_20 != 0) {
            *(int *)(local_20 + 4) = *(int *)(local_20 + 4) + 1;
                    /* WARNING: Subroutine does not return */
            ppiStack_98 = (int **)&UNK_10fb8541;
            FUN_10fd1df0();
          }
          iVar8 = iVar8 + 1;
          pbVar11 = local_14;
          piVar3 = local_18;
        } while (iVar8 < local_34);
      }
      uVar10 = 1;
      if (local_10 != (int *)0x0) {
        (**(code **)(*local_10 + 4))();
      }
      if (local_1c != (int *)0x0) {
        (**(code **)(*local_1c + 4))();
      }
    }
    else {
      uVar10 = 0;
    }
    if (-1 < *(int *)(pbVar11 + -0xc)) {
      ppiStack_98 = (int **)0x10fb8591;
      iVar8 = FUN_10c3dad0();
      if (iVar8 < 1) {
        DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pbVar11 + -4));
        ppiStack_98 = (int **)0x10fb85ac;
        FUN_10c3d900();
      }
    }
  }
  else {
    uVar10 = 0;
  }
  if (-1 < *(int *)(local_24 + -0xc)) {
    ppiStack_98 = (int **)0x10fb85c4;
    iVar8 = FUN_10c3dad0();
    if (iVar8 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_24 + -4));
      ppiStack_98 = (int **)0x10fb85df;
      FUN_10c3d900();
    }
  }
  (**(code **)(*piVar3 + 4))();
  if (-1 < *(int *)(local_c + -0xc)) {
    ppiStack_98 = (int **)0x10fb85fa;
    iVar8 = FUN_10c3dad0();
    if (iVar8 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_c + -4));
      ppiStack_98 = (int **)0x10fb8615;
      FUN_10c3d900();
    }
  }
  return uVar10;
}



/* ===== FUN_10fd1b60 @ 10fd1b60  size=646 ===== */
// calls: CInfoRecord::GetModelString, memmove
// strings:
//   "NORMAL_IDLE_WARDROBE"

/* [RE-AUTO c0]
   calls: memmove
   strings:
     ""NORMAL_IDLE_WARDROBE"" */

void __fastcall FUN_10fd1b60(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  size_t _Size;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint uVar5;
  float *_Src;
  uint uVar6;
  float *_Dst;
  undefined4 *puVar7;
  float10 fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 local_5;
  
  auVar10 = ZEXT416((uint)*(float *)(param_1 + 0x18));
  if (*(float *)(param_1 + 0x18) <= DAT_11de9890) {
    cVar1 = FUN_123ea354();
    if (cVar1 == '\0') {
      if (*(char *)(param_1 + 0x109) != '\0') {
        FUN_10fd5d60(0);
        return;
      }
      iVar2 = *(int *)(param_1 + 0x224);
      if ((iVar2 != *(int *)(param_1 + 0x228)) && (iVar2 != *(int *)(param_1 + 0x228))) {
        do {
          if (*(int *)(iVar2 + 4) != 0) {
            uVar4 = *(undefined4 *)(param_1 + 0xc0);
            uVar3 = FUN_10f57110();
            cVar1 = (**(code **)(iVar2 + 4))(uVar4,2,0,uVar3);
            if (cVar1 != '\0') {
              uVar4 = FUN_10f57110(0,1,0,0);
              CInfoRecord__GetModelString(uVar4,extraout_ECX_00);
              cVar1 = FUN_10fd7800();
              if (cVar1 != '\0') {
                if (*(int *)(iVar2 + 8) != 0) {
                  FUN_10c3d5d0(*(int *)(iVar2 + 8));
                }
                FUN_10febb90(iVar2,&local_5);
                break;
              }
            }
          }
          iVar2 = iVar2 + 0xc;
        } while (iVar2 != *(int *)(param_1 + 0x228));
      }
      fVar8 = (float10)(**(code **)(**(int **)(DAT_1202e818 + 0x28) + 0x1c))(0);
      _Dst = *(float **)(param_1 + 0xf4);
      if (_Dst != *(float **)(param_1 + 0xf8)) {
        _Src = _Dst + 3;
        do {
          fVar9 = *_Dst - (float)fVar8;
          *_Dst = fVar9;
          if (0.0 < fVar9) {
            _Dst = _Dst + 3;
            _Src = _Src + 3;
          }
          else {
            (*(code *)_Src[-2])(0);
            if ((_Src != *(float **)(param_1 + 0xf8)) &&
               (_Size = (int)*(float **)(param_1 + 0xf8) - (int)_Src, _Size != 0)) {
              memmove(_Dst,_Src,_Size);
            }
            *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + -0xc;
          }
        } while (_Dst != *(float **)(param_1 + 0xf8));
      }
      puVar7 = *(undefined4 **)(param_1 + 0x10c);
      if (puVar7 != *(undefined4 **)(param_1 + 0x110)) {
        do {
          (*(code *)*puVar7)(param_1);
          puVar7 = puVar7 + 1;
        } while (puVar7 != *(undefined4 **)(param_1 + 0x110));
      }
      puVar7 = *(undefined4 **)(param_1 + 0xe8);
      uVar6 = 0;
      uVar5 = (uint)((int)*(undefined4 **)(param_1 + 0xec) + (3 - (int)puVar7)) >> 2;
      if (*(undefined4 **)(param_1 + 0xec) < puVar7) {
        uVar5 = 0;
      }
      if (uVar5 != 0) {
        do {
          cVar1 = (**(code **)(*(int *)*puVar7 + 0x10))();
          if (cVar1 != '\0') {
            (**(code **)(*(int *)*puVar7 + 0x2c))((float)fVar8);
          }
          uVar6 = uVar6 + 1;
          puVar7 = puVar7 + 1;
        } while (uVar6 != uVar5);
      }
      if ((*(int *)(param_1 + 0xc0) != 0) && (*(char *)(*(int *)(param_1 + 0xc0) + 0x4c) != '\0')) {
        FUN_10f588d0();
      }
    }
  }
  else {
    (**(code **)(**(int **)(DAT_1202e818 + 0x28) + 0x10))(0);
    FUN_11a894ef();
    if (DAT_11de9890 < (float)auVar10._0_8_ * DAT_11de98b0 - *(float *)(param_1 + 0x18)) {
      CInfoRecord__GetModelString("NORMAL_IDLE_WARDROBE",extraout_ECX);
      iVar2 = FUN_10fb8080();
      if (iVar2 != 0) {
        if ((((*(int *)(iVar2 + 0x20) == *(int *)(param_1 + 0xb0)) &&
             (*(int *)(iVar2 + 0x24) == *(int *)(param_1 + 0xb4))) &&
            (*(int *)(iVar2 + 0x28) == *(int *)(param_1 + 0xb8))) &&
           (*(int *)(iVar2 + 0x2c) == *(int *)(param_1 + 0xbc))) {
          FUN_10fc3a60(iVar2);
        }
      }
      *(undefined4 *)(param_1 + 0x18) = 0;
      return;
    }
  }
  return;
}



/* ===== FUN_10fd5d60 @ 10fd5d60  size=640 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "CHANGE_WEAPON"
//   "NORMAL_IDLE"
//   "NORMAL_IDLE_WARDROBE"
//   "HolsteredIdleCreate"
//   "PLLocomotion"
//   "PLBaseAction"
//   "WardrobeView"

/* [RE-AUTO c0]
   strings:
     ""CHANGE_WEAPON""
     ""NORMAL_IDLE""
     ""NORMAL_IDLE_WARDROBE""
     ""HolsteredIdleCreate""
     ""PLLocomotion""
     ""PLBaseAction""
     ""WardrobeView"" */

void __thiscall FUN_10fd5d60(int param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 extraout_ECX;
  undefined4 uVar9;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  double dVar10;
  char *pcVar11;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  *(undefined2 *)(param_1 + 0x108) = 0;
  if (*(int *)(param_1 + 400) != 0) {
    FUN_110b1ad0();
  }
  uVar9 = 0;
  if (*(int *)(param_1 + 0x18c) != 0) {
    FUN_10f3a2b0();
    uVar9 = extraout_ECX;
  }
  *(undefined4 *)(param_1 + 0x288) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28c) = 0xffffffff;
  if (param_2 == '\0') {
    pcVar11 = "NORMAL_IDLE";
  }
  else {
    pcVar11 = "CHANGE_WEAPON";
  }
  CInfoRecord__GetModelString(pcVar11,uVar9);
  iVar4 = FUN_10fb8080();
  bVar3 = true;
  iVar8 = *(int *)(param_1 + 0x100);
  iVar6 = extraout_ECX_00;
  if (iVar8 != 0) {
    if (*(char *)(iVar8 + 0x2405) == '\x01') {
      CInfoRecord__GetModelString("NORMAL_IDLE_WARDROBE",extraout_ECX_00);
      iVar4 = FUN_10fb8080();
      bVar3 = false;
      iVar6 = extraout_ECX_01;
      if (iVar4 != 0) {
        uVar9 = *(undefined4 *)(iVar4 + 0x24);
        uVar1 = *(undefined4 *)(iVar4 + 0x28);
        uVar2 = *(undefined4 *)(iVar4 + 0x2c);
        *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(iVar4 + 0x20);
        *(undefined4 *)(param_1 + 0xb4) = uVar9;
        *(undefined4 *)(param_1 + 0xb8) = uVar1;
        *(undefined4 *)(param_1 + 0xbc) = uVar2;
      }
    }
    else {
      CInfoRecord__GetModelString("NORMAL_IDLE_WARDROBE",extraout_ECX_00);
      iVar6 = FUN_10fb8080();
      if (iVar6 != 0) {
        dVar10 = *(double *)(iVar6 + 0x20);
        if ((((SUB84(dVar10,0) == *(int *)(param_1 + 0xb0)) &&
             (iStack_10 = (int)((ulonglong)dVar10 >> 0x20), iStack_10 == *(int *)(param_1 + 0xb4)))
            && (iStack_c = (int)*(undefined8 *)(iVar6 + 0x28), iStack_c == *(int *)(param_1 + 0xb8))
            ) && (iStack_8 = (int)((ulonglong)*(undefined8 *)(iVar6 + 0x28) >> 0x20),
                 iStack_8 == *(int *)(param_1 + 0xbc))) {
          if (*(int *)(param_1 + 0xc0) == 0) {
            *(int *)(param_1 + 0xc0) = iVar6;
          }
          FUN_10f595c0("PLLocomotion","HolsteredIdleCreate");
          FUN_10f595c0("PLBaseAction",&DAT_11ce5cac);
          (**(code **)(**(int **)(DAT_1202e818 + 0x28) + 0x10))(0);
          FUN_11a894ef();
          *(float *)(param_1 + 0x18) = (float)dVar10 * DAT_11de98b0;
          if (*(int **)(iVar8 + 0x1c50) == (int *)0x0) {
            return;
          }
          (**(code **)(**(int **)(iVar8 + 0x1c50) + 0x44))(1);
          return;
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x106) = 1;
  if (*(int *)(param_1 + 0xc0) != 0) {
    if (bVar3) {
      if (iVar4 == 0) {
        puVar5 = &DAT_11d9d32b;
      }
      else {
        puVar5 = (undefined1 *)FUN_10f57110();
        iVar6 = extraout_ECX_02;
      }
      CInfoRecord__GetModelString(puVar5,iVar6);
      FUN_10f58fc0();
      goto LAB_10fd5f85;
    }
    *(undefined1 *)(param_1 + 0x230) = 0;
  }
  if (!bVar3) {
    FUN_10f595c0("PLLocomotion","HolsteredIdleCreate");
    FUN_10f595c0("PLBaseAction",&DAT_11ce5cac);
  }
LAB_10fd5f85:
  *(int *)(param_1 + 0xc0) = iVar4;
  *(int *)(param_1 + 0xc4) = iVar4;
  if (iVar4 != 0) {
    FUN_10f58d40();
    puVar7 = (undefined4 *)FUN_10fd9890("WardrobeView");
    if (((puVar7 != (undefined4 *)0x0) && (iVar8 = (**(code **)*puVar7)(), iVar8 == 3)) &&
       ((!bVar3 && (*(char *)(param_1 + 0x14) != '\0')))) {
      FUN_10f69a40(param_1 + 0x1c);
      *(undefined1 *)(param_1 + 0x14) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x10a) = 1;
  return;
}



/* ===== FUN_11230460 @ 11230460  size=78 ===== */
// calls: CItemColumnInfo::GetInfoManager
// strings:
//   "CItemColumnInfo"

/* [RE-AUTO c0]
   calls: CItemColumnInfo::GetManagers
   strings:
     ""CItemColumnInfo"" */

undefined4 FUN_11230460(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CItemColumnInfo__GetInfoManager(0,"CItemColumnInfo",0);
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



/* ===== FUN_11231b60 @ 11231b60  size=305 ===== */
// calls: CItemColumnInfo::GetInfoManager, GetClientMessageChannel
// strings:
//   "CItemColumnInfo"

/* [RE-AUTO c0]
   calls: CItemColumnInfo::GetManagers
   strings:
     ""CItemColumnInfo"" */

void FUN_11231b60(byte *param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c [2];
  
  uVar1 = *(undefined2 *)(param_1 + 1);
  uVar6 = (uint)*param_1;
  iVar3 = CItemColumnInfo__GetInfoManager(0,"CItemColumnInfo",0);
  if ((uVar6 != 0xffffffff) &&
     ((((uVar6 != 0 || (*(int *)(iVar3 + 0x30) == 0)) &&
       (iVar2 = *(int *)(iVar3 + 0x28), iVar2 != 0)) &&
      ((iVar4 = uVar6 - *(int *)(iVar3 + 0x30), -1 < iVar4 && (iVar4 < *(int *)(iVar3 + 0x24)))))))
  {
    iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + (iVar4 / iVar2) * 4);
    if ((iVar3 != 0) &&
       ((*(int *)(iVar3 + (iVar4 % iVar2) * 4) != 0 &&
        (piVar5 = (int *)FUN_113ffac0(uVar6), piVar5 != (int *)0x0)))) {
      if (param_1[3] == 1) {
        FUN_11460dc0(uVar1);
      }
      local_14 = 0;
      local_24 = 0;
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_18 = 0;
      local_10 = 0;
      local_28 = uVar6;
      local_24 = (**(code **)(*piVar5 + 0x38))();
      uStack_20 = (**(code **)(*piVar5 + 0x34))();
      (**(code **)(*piVar5 + 0x3c))(&uStack_1c,&uStack_18);
      iVar3 = GetClientMessageChannel();
      if (iVar3 != 0) {
        piVar5 = (int *)GetClientMessageChannel();
        (**(code **)(*piVar5 + 4))(0x78,&local_28);
      }
      local_c[0] = uVar6;
      iVar3 = GetClientMessageChannel();
      if (iVar3 != 0) {
        piVar5 = (int *)GetClientMessageChannel();
        (**(code **)(*piVar5 + 4))(0x20a,local_c);
      }
    }
  }
  return;
}



/* ===== FUN_113ffb00 @ 113ffb00  size=151 ===== */
// strings:
//   "CExpandStoreHouseSlotInfo"

/* [RE-AUTO c0]
   strings:
     ""CExpandStoreHouseSlotInfo"" */

int FUN_113ffb00(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 2) {
    iVar3 = param_2 / 10 + 1;
    iVar2 = FUN_108ad7c0(0,"CExpandStoreHouseSlotInfo",0);
    if (((iVar3 != -1) &&
        (((iVar3 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
       ((iVar3 = iVar3 - *(int *)(iVar2 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar2 + 0x24))))) {
      iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / *(int *)(iVar2 + 0x28)) * 4);
      if ((iVar1 != 0) &&
         (iVar2 = *(int *)(iVar1 + (iVar3 % *(int *)(iVar2 + 0x28)) * 4), iVar2 != 0)) {
        return iVar2 + 0x10;
      }
    }
  }
  else if (param_1 == 10) {
    iVar2 = FUN_108aca50(param_2 / 10 + 1);
    if (iVar2 != 0) {
      return iVar2 + 0x18;
    }
  }
  return 0;
}



/* ===== FUN_115226e0 @ 115226e0  size=144 ===== */
// strings:
//   "CExpandStoreHouseSlotInfo"

/* [RE-AUTO c0]
   strings:
     ""CExpandStoreHouseSlotInfo"" */

undefined4 FUN_115226e0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 2) {
    iVar3 = param_2 / 10 + 1;
    iVar2 = FUN_108ad7c0(0,"CExpandStoreHouseSlotInfo",0);
    if (((iVar3 != -1) &&
        (((iVar3 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
       ((iVar3 = iVar3 - *(int *)(iVar2 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar2 + 0x24))))) {
      iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / *(int *)(iVar2 + 0x28)) * 4);
      if ((iVar1 != 0) &&
         (iVar2 = *(int *)(iVar1 + (iVar3 % *(int *)(iVar2 + 0x28)) * 4), iVar2 != 0)) {
        return *(undefined4 *)(iVar2 + 0x20);
      }
    }
  }
  else if (param_1 == 0) {
    iVar2 = FUN_108aca50(param_2 / 10 + 1);
    if (iVar2 != 0) {
      return *(undefined4 *)(iVar2 + 0x14);
    }
  }
  return 0;
}



/* ===== FUN_1153d200 @ 1153d200  size=114 ===== */
// calls: CSRLItemBoxDescriptionInfo::FindInfoByKey
// strings:
//   "CSRLItemBoxDescriptionInfo"

/* [RE-AUTO c0]
   calls: CSRLItemBoxDescriptionInfo::GetManagers
   strings:
     ""CSRLItemBoxDescriptionInfo"" */

int * __thiscall FUN_1153d200(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  *param_1 = param_3;
  param_1[4] = param_2;
  iVar2 = CSRLItemBoxDescriptionInfo__FindInfoByKey(0,"CSRLItemBoxDescriptionInfo",0);
  if (((param_3 != -1) &&
      (((param_3 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_3 = param_3 - *(int *)(iVar2 + 0x30), -1 < param_3 &&
      (param_3 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_3 / *(int *)(iVar2 + 0x28)) * 4);
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + (param_3 % *(int *)(iVar2 + 0x28)) * 4);
      goto LAB_1153d25a;
    }
  }
  iVar2 = 0;
LAB_1153d25a:
  param_1[0x25] = iVar2;
  param_1[0x26] = 0;
  return param_1;
}



/* ===== FUN_1153ebd0 @ 1153ebd0  size=78 ===== */
// calls: CSRLItemBoxDescriptionInfo::FindInfoByKey
// strings:
//   "CSRLItemBoxDescriptionInfo"

/* [RE-AUTO c0]
   calls: CSRLItemBoxDescriptionInfo::GetManagers
   strings:
     ""CSRLItemBoxDescriptionInfo"" */

undefined4 FUN_1153ebd0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CSRLItemBoxDescriptionInfo__FindInfoByKey(0,"CSRLItemBoxDescriptionInfo",0);
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



/* ===== CFGModuleOnUseItem::GetManagers @ 116ffe40  size=146 ===== */
// calls: StcMbrNameSvr_CInfoManager::RegisterAndGetSingleton, CInfoManager::FindByName
// strings:
//   "CFGModuleOnUseItem::GetManagers"

/* [RE-AUTO c3]
   id: CFGModuleOnUseItem::GetManagers
   strings:
     ""CFGModuleOnUseItem::GetManagers"" */

undefined * CFGModuleOnUseItem__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d427f4;
  if (param_3 == 0) {
    if ((DAT_1238eca8 & 1) == 0) {
      DAT_1238eca8 = DAT_1238eca8 | 1;
      StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CFGModuleOnUseItem::GetManagers");
      FUN_11a8911f(&LAB_11ca86a0);
    }
    if ((undefined *)*DAT_1238ec8c != (undefined *)0x0) {
      return (undefined *)*DAT_1238ec8c;
    }
  }
  puVar1 = (undefined *)CInfoManager__FindByName(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1238ee44 & 1) == 0) {
      DAT_1238ee44 = DAT_1238ee44 | 1;
      FUN_11701240();
      FUN_11a8911f(&LAB_11ca84c0);
    }
    puVar1 = &DAT_1238ee0c;
  }
  return puVar1;
}



/* ===== FUN_117045f0 @ 117045f0  size=78 ===== */
// calls: CFGModuleOnUseItem::GetManagers
// strings:
//   "CFGModuleOnUseItem"

/* [RE-AUTO c0]
   calls: CFGModuleOnUseItem::GetManagers
   strings:
     ""CFGModuleOnUseItem"" */

undefined4 FUN_117045f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CFGModuleOnUseItem__GetManagers(0,"CFGModuleOnUseItem",0);
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



/* ===== CFGModuleOnUseItem::GetManagers_11704bb0 @ 11704bb0  size=72 ===== */
// calls: StcMbrNameSvr_CInfoManager::RegisterAndGetSingleton
// strings:
//   "CFGModuleOnUseItem::GetManagers"

/* [RE-AUTO c3]
   id: CFGModuleOnUseItem::GetManagers
   strings:
     ""CFGModuleOnUseItem::GetManagers"" */

undefined4 CFGModuleOnUseItem__GetManagers_11704bb0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1238eca8 & 1) == 0) {
      DAT_1238eca8 = DAT_1238eca8 | 1;
      StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CFGModuleOnUseItem::GetManagers");
      FUN_11a8911f(&LAB_11ca86a0);
    }
    return *DAT_1238ec8c;
  }
  return 0;
}



/* ===== FUN_1177f5e0 @ 1177f5e0  size=37 ===== */
// strings:
//   "SpeakUseItemContentDef"

/* [RE-AUTO c0]
   strings:
     ""SpeakUseItemContentDef"" */

int FUN_1177f5e0(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("SpeakUseItemContentDef","");
  return param_1;
}



/* ===== FUN_1177f610 @ 1177f610  size=37 ===== */
// strings:
//   "SpeakUseItemGroupContentDef"

/* [RE-AUTO c0]
   strings:
     ""SpeakUseItemGroupContentDef"" */

int FUN_1177f610(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("SpeakUseItemGroupContentDef","");
  return param_1;
}



/* ===== FUN_117805a0 @ 117805a0  size=37 ===== */
// strings:
//   "TaskUseItemContentDef"

/* [RE-AUTO c0]
   strings:
     ""TaskUseItemContentDef"" */

int FUN_117805a0(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("TaskUseItemContentDef","");
  return param_1;
}



/* ===== FUN_117812c0 @ 117812c0  size=37 ===== */
// strings:
//   "SpeakUseItemContentDef"

/* [RE-AUTO c0]
   strings:
     ""SpeakUseItemContentDef"" */

int FUN_117812c0(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("SpeakUseItemContentDef","");
  return param_1;
}



/* ===== FUN_117812f0 @ 117812f0  size=37 ===== */
// strings:
//   "SpeakUseItemGroupContentDef"

/* [RE-AUTO c0]
   strings:
     ""SpeakUseItemGroupContentDef"" */

int FUN_117812f0(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("SpeakUseItemGroupContentDef","");
  return param_1;
}



/* ===== FUN_11782280 @ 11782280  size=37 ===== */
// strings:
//   "TaskUseItemContentDef"

/* [RE-AUTO c0]
   strings:
     ""TaskUseItemContentDef"" */

int FUN_11782280(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("TaskUseItemContentDef","");
  return param_1;
}



/* ===== FUN_118ba760 @ 118ba760  size=132 ===== */
// strings:
//   u"ItemColumn"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     "u"ItemColumn"" */

undefined * __thiscall FUN_118ba760(undefined4 param_1,undefined4 *param_2)

{
  if ((DAT_1239cae8 & 1) == 0) {
    DAT_1239cae8 = DAT_1239cae8 | 1;
    FUN_100f67b0(L"ItemColumn");
    _DAT_1239cac8 = 0xd;
    _DAT_1239cad0 = 0;
    _DAT_1239cad4 = 0;
    _DAT_1239cad8 = 0;
    _DAT_1239cadc = 0;
    _DAT_1239cae0 = 0;
    _DAT_1239cae4 = 0;
    _DAT_1239cacc = param_1;
  }
  *param_2 = 1;
  return &DAT_1239cac8;
}



/* ===== FUN_11923ca0 @ 11923ca0  size=52 ===== */
// strings:
//   "CItemBoxGroupInfo"

/* [RE-AUTO c0]
   strings:
     ""CItemBoxGroupInfo"" */

undefined4 FUN_11923ca0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_1053b200(0,"CItemBoxGroupInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_11924470 @ 11924470  size=52 ===== */
// calls: CItemBoxInfo::GetInfoManager_1053b0a0
// strings:
//   "CItemBoxInfo"

/* [RE-AUTO c0]
   strings:
     ""CItemBoxInfo"" */

undefined4 FUN_11924470(int param_1)

{
  int iVar1;
  
  iVar1 = CItemBoxInfo__GetInfoManager_1053b0a0(0,"CItemBoxInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_11935c70 @ 11935c70  size=132 ===== */
// strings:
//   u"OnUseItem"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     "u"OnUseItem"" */

undefined * __thiscall FUN_11935c70(undefined4 param_1,undefined4 *param_2)

{
  if ((DAT_1239fb10 & 1) == 0) {
    DAT_1239fb10 = DAT_1239fb10 | 1;
    FUN_100f67b0(L"OnUseItem");
    _DAT_1239faf0 = 0xe1;
    _DAT_1239faf8 = 1;
    _DAT_1239fafc = 0;
    _DAT_1239fb00 = 0;
    _DAT_1239fb04 = 0;
    _DAT_1239fb08 = 0;
    _DAT_1239fb0c = 0;
    _DAT_1239faf4 = param_1;
  }
  *param_2 = 1;
  return &DAT_1239faf0;
}



/* ===== FUN_11a088c0 @ 11a088c0  size=3888 ===== */
// calls: memset
// strings:
//   u"name"
//   u"path"
//   u"CacheType"
//   u"xPos"
//   u"yPos"
//   u"layer"
//   u"layoutModel"
//   u"isLockPos"
//   u"CallMouseTyp"
//   u"winModel"
//   u"togetherOpenWin"
//   u"togetherCloseWin"
//   u"escLevel"
//   u"uiModelElement"
//   u"inventoryShowMode"
//   u"weaponType"
//   u"canCloseByEsc"
//   u"openDenyOther"
//   u"WontDenyByOther"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"name""
     "u"path""
     "u"CacheType""
     "u"xPos""
     "u"yPos""
     "u"layer""
     "u"layoutModel""
     "u"isLockPos""
     "u"CallMouseTyp""
     "u"winModel"" */

void __thiscall FUN_11a088c0(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_123a6af0 & 1) == 0) {
    DAT_123a6af0 = DAT_123a6af0 | 1;
    FUN_100f67b0(&DAT_11d6b740);
  }
  if ((DAT_123a6af0 & 2) == 0) {
    DAT_123a6af0 = DAT_123a6af0 | 2;
    iVar2 = FUN_100e1cb0(DAT_123a6aec);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a6af4);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a6aec);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a6af4);
    *(undefined4 *)(param_1 + 0x10) = uVar3;
  }
  if ((DAT_123a6af0 & 4) == 0) {
    DAT_123a6af0 = DAT_123a6af0 | 4;
    FUN_100f67b0(L"name");
  }
  if ((DAT_123a6af0 & 8) == 0) {
    DAT_123a6af0 = DAT_123a6af0 | 8;
    iVar2 = FUN_100e1cb0(DAT_123a6b04);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a6b08);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a6b04);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(param_1 + 0x14,&DAT_123a6b08);
  }
  if ((DAT_123a6af0 & 0x10) == 0) {
    DAT_123a6af0 = DAT_123a6af0 | 0x10;
    FUN_100f67b0(L"path");
  }
  if ((DAT_123a6af0 & 0x20) == 0) {
    DAT_123a6af0 = DAT_123a6af0 | 0x20;
    iVar2 = FUN_100e1cb0(DAT_123a6b18);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a6b1c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a6b18);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(param_1 + 0x2c,&DAT_123a6b1c);
  }
  if ((DAT_123a6af0 & 0x40) == 0) {
    DAT_123a6af0 = DAT_123a6af0 | 0x40;
    FUN_100f67b0(L"CacheType");
  }
  if (-1 < (char)DAT_123a6af0) {
    DAT_123a6af0 = DAT_123a6af0 | 0x80;
    iVar2 = FUN_100e1cb0(DAT_123a6b2c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a6b30);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a6b2c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a6b30);
    *(undefined4 *)(param_1 + 0x44) = uVar3;
  }
  if ((DAT_123a6af0 & 0x100) == 0) {
    DAT_123a6af0 = DAT_123a6af0 | 0x100;
    FUN_100f67b0(L"xPos");
  }
  if ((DAT_123a6af0 & 0x200) == 0) {
    DAT_123a6af0 = DAT_123a6af0 | 0x200;
    iVar2 = FUN_100e1cb0(DAT_123a6b40);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a6b44);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a6b40);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a6b44);
    *(undefined4 *)(param_1 + 0x48) = uVar3;
  }
  if ((DAT_123a6af0 & 0x400) == 0) {
    DAT_123a6af0 = DAT_123a6af0 | 0x400;
    FUN_100f67b0(L"yPos");
  }
  if ((DAT_123a6af0 & 0x800) == 0) {
    DAT_123a6af0 = DAT_123a6af0 | 0x800;
    iVar2 = FUN_100e1cb0(DAT_123a6b54);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a6b58);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a6b54);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a6b58);
    *(undefined4 *)(param_1 + 0x4c) = uVar3;
  }
  if ((DAT_123a6af0 & 0x1000) == 0) {
    DAT_123a6af0 = DAT_123a6af0 | 0x1000;
    FUN_100f67b0(L"layer");
  }
  if ((DAT_123a6af0 & 0x2000) == 0) {
    DAT_123a6af0 = DAT_123a6af0 | 0x2000;
    iVar2 = FUN_100e1cb0(DAT_123a6b68);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a6b6c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a6b68);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a6b6c);
    *(undefined4 *)(param_1 + 0x50) = uVar3;
  }
  if ((DAT_123a6af0 & 0x4000) == 0) {
    DAT_123a6af0 = DAT_123a6af0 | 0x4000;
    FUN_100f67b0(L"layoutModel");
  }
  if ((DAT_123a6af0 & 0x8000) == 0) {
    DAT_123a6af0 = DAT_123a6af0 | 0x8000;
    iVar2 = FUN_100e1cb0(DAT_123a6b7c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a6b80);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a6b7c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a6b80);
    *(undefined4 *)(param_1 + 0x54) = uVar3;
  }
  if ((DAT_123a6af0 & 0x10000) == 0) {
    DAT_123a6af0 = DAT_123a6af0 | 0x10000;
    FUN_100f67b0(L"isLockPos");
  }
  if ((DAT_123a6af0 & 0x20000) == 0) {
    DAT_123a6af0 = DAT_123a6af0 | 0x20000;
    iVar2 = FUN_100e1cb0(DAT_123a6b90);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a6b94);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a6b90);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_123a6b94);
    *(bool *)(param_1 + 0x58) = iVar2 != 0;
  }
  if ((DAT_123a6af0 & 0x40000) == 0) {
    DAT_123a6af0 = DAT_123a6af0 | 0x40000;
    FUN_100f67b0(L"CallMouseTyp");
  }
  if ((DAT_123a6af0 & 0x80000) == 0) {
    DAT_123a6af0 = DAT_123a6af0 | 0x80000;
    iVar2 = FUN_100e1cb0(DAT_123a6ba4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a6ba8);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a6ba4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a6ba8);
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
  }
  if ((DAT_123a6af0 & 0x100000) == 0) {
    DAT_123a6af0 = DAT_123a6af0 | 0x100000;
    FUN_100f67b0(L"winModel");
  }
  if ((DAT_123a6af0 & 0x200000) == 0) {
    DAT_123a6af0 = DAT_123a6af0 | 0x200000;
    iVar2 = FUN_100e1cb0(DAT_123a6bb8);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a6bbc);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a6bb8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a6bbc);
    *(undefined4 *)(param_1 + 0x60) = uVar3;
  }
  if ((DAT_123a6af0 & 0x400000) == 0) {
    DAT_123a6af0 = DAT_123a6af0 | 0x400000;
    FUN_100f67b0(L"togetherOpenWin");
  }
  if ((DAT_123a6af0 & 0x800000) == 0) {
    DAT_123a6af0 = DAT_123a6af0 | 0x800000;
    iVar2 = FUN_100e1cb0(DAT_123a6bcc);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a6bd0);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a6bcc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a6bd0);
    *(undefined4 *)(param_1 + 100) = uVar3;
  }
  if ((DAT_123a6af0 & 0x1000000) == 0) {
    DAT_123a6af0 = DAT_123a6af0 | 0x1000000;
    FUN_100f67b0(L"togetherCloseWin");
  }
  if ((DAT_123a6af0 & 0x2000000) == 0) {
    DAT_123a6af0 = DAT_123a6af0 | 0x2000000;
    iVar2 = FUN_100e1cb0(DAT_123a6be0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a6be4);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a6be0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a6be4);
    *(undefined4 *)(param_1 + 0x68) = uVar3;
  }
  if ((DAT_123a6af0 & 0x4000000) == 0) {
    DAT_123a6af0 = DAT_123a6af0 | 0x4000000;
    FUN_100f67b0(L"escLevel");
  }
  if ((DAT_123a6af0 & 0x8000000) == 0) {
    DAT_123a6af0 = DAT_123a6af0 | 0x8000000;
    iVar2 = FUN_100e1cb0(DAT_123a6bf4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a6bf8);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a6bf4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a6bf8);
    *(undefined4 *)(param_1 + 0x6c) = uVar3;
  }
  if ((DAT_123a6af0 & 0x10000000) == 0) {
    DAT_123a6af0 = DAT_123a6af0 | 0x10000000;
    FUN_100f67b0(L"uiModelElement");
  }
  if ((DAT_123a6af0 & 0x20000000) == 0) {
    DAT_123a6af0 = DAT_123a6af0 | 0x20000000;
    iVar2 = FUN_100e1cb0(DAT_123a6c08);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a6c0c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a6c08);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_123a6c0c);
    *(bool *)(param_1 + 0x70) = iVar2 != 0;
  }
  if ((DAT_123a6af0 & 0x40000000) == 0) {
    DAT_123a6af0 = DAT_123a6af0 | 0x40000000;
    FUN_100f67b0(L"inventoryShowMode");
  }
  if (-1 < (int)DAT_123a6af0) {
    DAT_123a6af0 = DAT_123a6af0 | 0x80000000;
    iVar2 = FUN_100e1cb0(DAT_123a6c1c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a6c20);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a6c1c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a6c20);
    *(undefined4 *)(param_1 + 0x74) = uVar3;
  }
  if ((DAT_123a6c34 & 1) == 0) {
    DAT_123a6c34 = DAT_123a6c34 | 1;
    FUN_100f67b0(L"weaponType");
  }
  if ((DAT_123a6c34 & 2) == 0) {
    DAT_123a6c34 = DAT_123a6c34 | 2;
    iVar2 = FUN_100e1cb0(DAT_123a6c30);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a6c38);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a6c30);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a6c38);
    *(undefined4 *)(param_1 + 0x78) = uVar3;
  }
  if ((DAT_123a6c34 & 4) == 0) {
    DAT_123a6c34 = DAT_123a6c34 | 4;
    FUN_100f67b0(L"canCloseByEsc");
  }
  if ((DAT_123a6c34 & 8) == 0) {
    DAT_123a6c34 = DAT_123a6c34 | 8;
    iVar2 = FUN_100e1cb0(DAT_123a6c48);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a6c4c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a6c48);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_123a6c4c);
    *(bool *)(param_1 + 0x7c) = iVar2 != 0;
  }
  if ((DAT_123a6c34 & 0x10) == 0) {
    DAT_123a6c34 = DAT_123a6c34 | 0x10;
    FUN_100f67b0(L"openDenyOther");
  }
  if ((DAT_123a6c34 & 0x20) == 0) {
    DAT_123a6c34 = DAT_123a6c34 | 0x20;
    iVar2 = FUN_100e1cb0(DAT_123a6c5c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a6c60);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a6c5c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_123a6c60);
    *(bool *)(param_1 + 0x7d) = iVar2 != 0;
  }
  if ((DAT_123a6c34 & 0x40) == 0) {
    DAT_123a6c34 = DAT_123a6c34 | 0x40;
    FUN_100f67b0(L"WontDenyByOther");
  }
  if (-1 < (char)DAT_123a6c34) {
    DAT_123a6c34 = DAT_123a6c34 | 0x80;
    iVar2 = FUN_100e1cb0(DAT_123a6c70);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a6c74);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a6c70);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
    FUN_11a89daa();
    return;
  }
  iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_123a6c74);
  *(bool *)(param_1 + 0x7e) = iVar2 != 0;
  FUN_11a89daa();
  return;
}



