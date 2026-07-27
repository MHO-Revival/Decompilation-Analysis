
// ===== ScriptBind_BT::SetBlackboardEntityID @ 110367e0 =====

/* [RE-R1]
   strings:
     ""BehaviorTreeBase"" */

void __thiscall ScriptBind_BT__SetBlackboardEntityID(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int local_8;
  
  piVar1 = param_2;
  local_8 = param_1;
  iVar3 = (**(code **)(*param_2 + 8))();
  if ((((iVar3 != 0) &&
       (piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar3),
       piVar4 != (int *)0x0)) &&
      (piVar4 = (int *)(**(code **)(*piVar4 + 0x18))("BehaviorTreeBase"), piVar4 != (int *)0x0)) &&
     (iVar3 = (**(code **)(*piVar1 + 0x18))(1), iVar3 == 1)) {
    local_8 = 0;
    FUN_10c62470(1,&local_8);
    param_2 = (int *)0x0;
    cVar2 = FUN_10d32550(2,&param_2);
    if (cVar2 != '\0') {
      (**(code **)(*piVar4 + 0x70))(local_8,param_2);
    }
  }
  (**(code **)(*piVar1 + 0x2c))();
  return;
}


// ===== ScriptBind_BT::SetBlackboardFloat @ 11036870 =====

/* [RE-R1]
   strings:
     ""BehaviorTreeBase"" */

void __thiscall ScriptBind_BT__SetBlackboardFloat(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int local_8;
  
  piVar1 = param_2;
  local_8 = param_1;
  iVar3 = (**(code **)(*param_2 + 8))();
  if ((((iVar3 != 0) &&
       (piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar3),
       piVar4 != (int *)0x0)) &&
      (piVar4 = (int *)(**(code **)(*piVar4 + 0x18))("BehaviorTreeBase"), piVar4 != (int *)0x0)) &&
     (iVar3 = (**(code **)(*piVar1 + 0x18))(1), iVar3 == 1)) {
    param_2 = (int *)0x0;
    FUN_10c62470(1,&param_2);
    cVar2 = FUN_10c623f0(2,&local_8);
    if (cVar2 != '\0') {
      (**(code **)(*piVar4 + 0x74))(param_2,local_8);
    }
  }
  (**(code **)(*piVar1 + 0x2c))();
  return;
}


// ===== ScriptBind_BT::SetBlackboardVec3 @ 11036900 =====

/* [RE-R1]
   strings:
     ""BehaviorTreeBase"" */

void __thiscall ScriptBind_BT__SetBlackboardVec3(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined8 local_10;
  undefined4 local_8;
  
  piVar1 = param_2;
  iVar3 = (**(code **)(*param_2 + 8))();
  if ((((iVar3 != 0) &&
       (piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar3),
       piVar4 != (int *)0x0)) &&
      (piVar4 = (int *)(**(code **)(*piVar4 + 0x18))("BehaviorTreeBase"), piVar4 != (int *)0x0)) &&
     (iVar3 = (**(code **)(*piVar1 + 0x18))(1), iVar3 == 1)) {
    puVar6 = &param_2;
    param_2 = (int *)0x0;
    uVar5 = 1;
    FUN_10c62470();
    cVar2 = FUN_10b1f370(2,&local_10,uVar5,puVar6);
    if (cVar2 != '\0') {
      (**(code **)(*piVar4 + 0x7c))(param_2,local_10,local_8);
    }
  }
  (**(code **)(*piVar1 + 0x2c))();
  return;
}


// ===== ScriptBind_BT::SetBlackboardBool @ 110369a0 =====

/* [RE-R1]
   strings:
     ""BehaviorTreeBase"" */

void __thiscall ScriptBind_BT__SetBlackboardBool(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int local_8;
  
  piVar1 = param_2;
  local_8 = param_1;
  iVar3 = (**(code **)(*param_2 + 8))();
  if ((((iVar3 != 0) &&
       (piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar3),
       piVar4 != (int *)0x0)) &&
      (piVar4 = (int *)(**(code **)(*piVar4 + 0x18))("BehaviorTreeBase"), piVar4 != (int *)0x0)) &&
     (iVar3 = (**(code **)(*piVar1 + 0x18))(1), iVar3 == 1)) {
    param_2 = (int *)0x0;
    FUN_10c62470(1,&param_2);
    cVar2 = FUN_10b1f4b0(2,&local_8);
    if (cVar2 != '\0') {
      (**(code **)(*piVar4 + 0x80))(param_2,local_8);
    }
  }
  (**(code **)(*piVar1 + 0x2c))();
  return;
}


// ===== ScriptBind_BT::SetBlackboardString @ 11036a30 =====

/* [RE-R1]
   strings:
     ""BehaviorTreeBase"" */

void __thiscall ScriptBind_BT__SetBlackboardString(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int local_8;
  
  piVar1 = param_2;
  local_8 = param_1;
  iVar3 = (**(code **)(*param_2 + 8))();
  if ((((iVar3 != 0) &&
       (piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar3),
       piVar4 != (int *)0x0)) &&
      (piVar4 = (int *)(**(code **)(*piVar4 + 0x18))("BehaviorTreeBase"), piVar4 != (int *)0x0)) &&
     (iVar3 = (**(code **)(*piVar1 + 0x18))(1), iVar3 == 1)) {
    param_2 = (int *)0x0;
    FUN_10c62470(1,&param_2);
    cVar2 = FUN_10c62470(2,&local_8);
    if (cVar2 != '\0') {
      iVar3 = *piVar4;
      puVar5 = (undefined4 *)FUN_113168d0(local_8);
      (**(code **)(iVar3 + 0x78))(param_2,*puVar5);
    }
  }
  (**(code **)(*piVar1 + 0x2c))();
  return;
}


// ===== ScriptBind_BT::SetBlackboardUint @ 11036ad0 =====

/* [RE-R1]
   strings:
     ""BehaviorTreeBase"" */

void __thiscall
ScriptBind_BT__SetBlackboardUint(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1);
    if (piVar2 != (int *)0x0) {
      piVar2 = (int *)(**(code **)(*piVar2 + 0x18))("BehaviorTreeBase");
      if ((piVar2 != (int *)0x0) && (param_3 != 0)) {
        (**(code **)(*piVar2 + 0x70))(param_3,param_4);
      }
    }
  }
  (**(code **)(*param_2 + 0x2c))();
  return;
}


// ===== ScriptBind_BT::SetBlackboardStringString @ 11036b30 =====

/* [RE-R1]
   strings:
     ""BehaviorTreeBase"" */

undefined4 __thiscall
ScriptBind_BT__SetBlackboardStringString(int param_1,int *param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined1 local_2c [16];
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined1 local_8 [4];
  
  local_1c = local_2c;
  pcVar1 = param_3;
  do {
    pcVar5 = pcVar1;
    pcVar1 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  local_18 = local_1c;
  FUN_100b62c0(param_3,pcVar5);
  iVar2 = (**(code **)(*param_2 + 8))();
  if (iVar2 != 0) {
    piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar2);
    if (piVar3 != (int *)0x0) {
      piVar3 = (int *)(**(code **)(*piVar3 + 0x18))("BehaviorTreeBase");
      if (piVar3 != (int *)0x0) {
        FUN_11316810(local_2c);
        (**(code **)(*piVar3 + 0x98))(local_8,&param_3);
        FUN_1046dc90();
        (**(code **)(*piVar3 + 0x98))();
        FUN_1046e900(param_3);
                    /* WARNING: Subroutine does not return */
        FUN_10c3d580(0x54);
      }
    }
  }
  uVar4 = (**(code **)(*param_2 + 0x2c))();
  if ((local_18 != local_2c) && (local_18 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_18);
  }
  return uVar4;
}


// ===== ScriptBind_BT::GetBlackboardFloat @ 11036e50 =====

/* [RE-R1]
   strings:
     ""BehaviorTreeBase"" */

undefined4 __thiscall ScriptBind_BT__GetBlackboardFloat(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int local_18;
  int *local_14;
  undefined4 local_8;
  
  piVar1 = param_2;
  local_18 = 0;
  local_14 = (int *)0x0;
  iVar2 = (**(code **)(*param_2 + 8))();
  if (iVar2 != 0) {
    piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar2);
    if (piVar3 != (int *)0x0) {
      piVar3 = (int *)(**(code **)(*piVar3 + 0x18))("BehaviorTreeBase");
      if (piVar3 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar1 + 0x18))(1);
        if (iVar2 == 1) {
          param_2 = (int *)0x0;
          FUN_10c62470(1,&param_2);
          local_8 = 0;
          (**(code **)(*piVar3 + 0x88))(param_2,&local_8);
          uVar4 = FUN_10d1c5b0(&local_8);
          goto LAB_11036eea;
        }
      }
    }
  }
  uVar4 = (**(code **)(*piVar1 + 0x28))(&local_18);
LAB_11036eea:
  if (local_18 == 6) {
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 0xc))();
      return uVar4;
    }
  }
  else if ((local_18 == 7) && (local_14 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_14);
  }
  return uVar4;
}


// ===== ScriptBind_BT::LoadBlackboard @ 11037510 =====

/* [RE-R1]
   strings:
     ""BehaviorTreeBase"" */

undefined4 __thiscall ScriptBind_BT__LoadBlackboard(int param_1,int *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  int local_20;
  int *local_1c;
  int local_10;
  undefined1 *local_c;
  char *local_8;
  
  piVar7 = param_2;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_10 = param_1;
  iVar3 = (**(code **)(*param_2 + 8))();
  if (iVar3 == 0) {
LAB_1103755c:
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar3);
    if (piVar4 == (int *)0x0) goto LAB_1103755c;
    piVar4 = (int *)(**(code **)(*piVar4 + 0x18))("BehaviorTreeBase");
    if (piVar4 == (int *)0x0) goto LAB_1103755c;
  }
  param_2 = (int *)&DAT_1201fc98;
  if (piVar4 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar7 + 0x18))(1);
    if (iVar3 != 1) {
      uVar5 = (**(code **)(*piVar7 + 0x28))(&local_20);
      goto LAB_11037612;
    }
    local_8 = (char *)0x0;
    FUN_10c62470(1,&local_8);
    if (local_8 == (char *)0x0) {
      iVar3 = 0;
    }
    else {
      pcVar6 = local_8;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      iVar3 = (int)pcVar6 - (int)(local_8 + 1);
    }
    FUN_1083ab70(local_8,iVar3);
    local_c = &DAT_1201fc98;
    cVar2 = BehaviorTree__StripScriptPathPrefix(&param_2,&local_c);
    puVar1 = local_c;
    if (cVar2 != '\0') {
      (**(code **)(*piVar4 + 0xa0))(local_c);
    }
    piVar4 = (int *)(puVar1 + -0xc);
    if (-1 < *piVar4) {
      iVar3 = FUN_10c3dad0(piVar4);
      if (iVar3 < 1) {
        DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar1 + -4));
        FUN_10c3d900(piVar4);
      }
    }
  }
  uVar5 = (**(code **)(*piVar7 + 0x2c))();
LAB_11037612:
  puVar1 = (undefined1 *)param_2;
  piVar7 = (int *)((int)param_2 + -0xc);
  if (-1 < *piVar7) {
    iVar3 = FUN_10c3dad0(piVar7);
    if (iVar3 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar1 + -4));
      FUN_10c3d900(piVar7);
    }
  }
  if (local_20 == 6) {
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 0xc))();
      return uVar5;
    }
  }
  else if ((local_20 == 7) && (local_1c != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_1c);
  }
  return uVar5;
}


// ===== CBTActor::GetBlackboardInt @ 1025b730 =====

/* [RE-R1]
   src: BTAttributeInfoType.h
   calls: _wassert
   strings:
     
   "u"d:\\mhfc\\oprelease\\code\\common\\behaviortree\\interface\\../CEShare/BTAttributeInfoType.h""
     "u"E_Type_Int == m_eValueType"" */

void __thiscall CBTActor__GetBlackboardInt(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [12];
  undefined4 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [16];
  undefined4 *puStack_1c;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_50;
  if ((*(char *)(param_1 + 0x60) != '\0') && (*(int **)(param_1 + 0x1c) != (int *)0x0)) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x1c) + 8))(*(undefined4 *)(param_1 + 0x5c));
    if (piVar2 != (int *)0x0) {
      piVar2 = (int *)(**(code **)(*piVar2 + 4))();
      if (piVar2 != (int *)0x0) {
        puStack_38 = auStack_48;
        auStack_48[0] = 0;
        uStack_30 = 0;
        uStack_4c = 0;
        puStack_34 = puStack_38;
        puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(auStack_2c,param_2);
        uVar1 = *puVar3;
        if (puVar3 + 1 != &uStack_50) {
          FUN_100d83d0(puVar3[6],puVar3[5]);
        }
        puStack_38 = (undefined1 *)puVar3[7];
        if ((puStack_1c != &uStack_30) && (puStack_1c != (undefined4 *)0x0)) {
          FUN_10c3d5d0(puStack_1c);
        }
        if (puStack_38 != (undefined1 *)0x1) {
          _wassert(L"E_Type_Int == m_eValueType",
                   L"d:\\mhfc\\oprelease\\code\\common\\behaviortree\\interface\\../CEShare/BTAttributeInfoType.h"
                   ,0x65);
        }
        *param_3 = uVar1;
        if ((puStack_3c != &uStack_50) && (puStack_3c != (undefined4 *)0x0)) {
          FUN_10c3d5d0(puStack_3c);
        }
        FUN_11a89daa();
        return;
      }
    }
  }
  FUN_11a89daa();
  return;
}


// ===== CBTActor::GetBlackboardBool @ 1025b860 =====

/* [RE-R1]
   src: BTAttributeInfoType.h
   calls: _wassert
   strings:
     
   "u"d:\\mhfc\\oprelease\\code\\common\\behaviortree\\interface\\../CEShare/BTAttributeInfoType.h""
     "u"E_Type_Bool == m_eValueType"" */

void __thiscall CBTActor__GetBlackboardBool(int param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [12];
  undefined4 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [16];
  undefined4 *puStack_1c;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_50;
  if ((*(char *)(param_1 + 0x60) != '\0') && (*(int **)(param_1 + 0x1c) != (int *)0x0)) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x1c) + 8))(*(undefined4 *)(param_1 + 0x5c));
    if (piVar2 != (int *)0x0) {
      piVar2 = (int *)(**(code **)(*piVar2 + 4))();
      if (piVar2 != (int *)0x0) {
        puStack_38 = auStack_48;
        auStack_48[0] = 0;
        uStack_30 = 0;
        uStack_4c = 0;
        puStack_34 = puStack_38;
        puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(auStack_2c,param_2);
        uVar1 = *puVar3;
        if (puVar3 + 1 != &uStack_50) {
          FUN_100d83d0(puVar3[6],puVar3[5]);
        }
        puStack_38 = (undefined1 *)puVar3[7];
        if ((puStack_1c != &uStack_30) && (puStack_1c != (undefined4 *)0x0)) {
          FUN_10c3d5d0(puStack_1c);
        }
        if (puStack_38 != (undefined1 *)0x3) {
          _wassert(L"E_Type_Bool == m_eValueType",
                   L"d:\\mhfc\\oprelease\\code\\common\\behaviortree\\interface\\../CEShare/BTAttributeInfoType.h"
                   ,0x75);
        }
        *param_3 = (char)uVar1;
        if ((puStack_3c != &uStack_50) && (puStack_3c != (undefined4 *)0x0)) {
          FUN_10c3d5d0(puStack_3c);
        }
        FUN_11a89daa();
        return;
      }
    }
  }
  FUN_11a89daa();
  return;
}


// ===== CMonsterEntity::LoadAISettingsFromBlackboard @ 104a2af0 =====

/* [RE-R1]
   strings:
     ""BlackBoardFile""
     ""Properties.""
     "".AISetting.""
     ""PropertyCustom""
     "".AISetting""
     ""Health""
     ""RageDec""
     ""TailFire""
     ""mh_sharemem_addrinfo"" */

void __fastcall CMonsterEntity__LoadAISettingsFromBlackboard(int *param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int *piVar6;
  int **ppiVar7;
  int ***pppiVar8;
  char cVar9;
  byte *pbVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  uint uVar14;
  byte *pbVar15;
  bool bVar16;
  char *pcVar17;
  char *pcVar18;
  undefined1 auStack_134 [36];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  int *piStack_108;
  float fStack_104;
  int *piStack_100;
  undefined4 uStack_fc;
  int *piStack_f8;
  byte *local_f4;
  int *piStack_f0;
  int *local_ec;
  int *piStack_e8;
  int *piStack_e4;
  float fStack_e0;
  int **ppiStack_dc;
  int **ppiStack_d8;
  int **ppiStack_d4;
  int **ppiStack_d0;
  int ***pppiStack_cc;
  int ***pppiStack_c8;
  int ***pppiStack_c4;
  int ***pppiStack_c0;
  undefined1 auStack_bc [12];
  int ****ppppiStack_b0;
  int ****ppppiStack_ac;
  undefined1 *puStack_a8;
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [4];
  undefined1 *puStack_90;
  undefined1 auStack_8c [20];
  undefined1 *puStack_78;
  undefined1 auStack_74 [20];
  undefined1 *puStack_60;
  undefined1 auStack_5c [20];
  undefined1 *puStack_48;
  uint local_44;
  
  local_44 = DAT_11e11390 ^ (uint)auStack_134;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar16 = false;
  local_f4 = (byte *)0x0;
  local_ec = param_1;
  if (((param_1[0x4d] != 0) || (param_1[5] == 0)) ||
     (pbVar10 = (byte *)(**(code **)(**(int **)(DAT_123bb90c + 0x10) + 4))(param_1[0x4b]),
     local_f4 = pbVar10, pbVar10 == (byte *)0x0)) goto LAB_104a3164;
  iVar11 = (**(code **)(*(int *)pbVar10 + 0x24))();
  param_1[0x3f] = iVar11;
  (**(code **)(*(int *)pbVar10 + 0x14))(&piStack_e8);
  ppppiStack_b0 = &pppiStack_c0;
  ppppiStack_ac = ppppiStack_b0;
  FUN_100b62c0();
  piVar6 = piStack_e8;
  piStack_e4 = (int *)0x0;
  if (piStack_e8 == (int *)0x0) {
LAB_104a2c67:
    uStack_fc = uStack_fc & 0xffffff;
  }
  else {
    pppiStack_c4 = &ppiStack_d4;
    bVar3 = false;
    bVar2 = false;
    bVar16 = false;
    pppiStack_c0 = pppiStack_c4;
    FUN_100b62c0("Properties.","");
    iVar11 = FUN_100f21e0();
    cVar9 = (**(code **)(*piVar6 + 0x34))(*(undefined4 *)(iVar11 + 0x14),&local_ec);
    piVar6 = piStack_e8;
    if (cVar9 == '\0') {
      bVar5 = true;
      bVar4 = true;
      bVar3 = true;
      bVar2 = true;
      bVar16 = true;
      uVar12 = FUN_100b5f70("PropertyCustom",(int)&uStack_fc + 3,".AISetting.",auStack_bc);
      FUN_100f2140(auStack_94,uVar12);
      iVar11 = FUN_100f21e0();
      cVar9 = (**(code **)(*piVar6 + 0x34))(*(undefined4 *)(iVar11 + 0x14),&local_ec);
      if (cVar9 == '\0') goto LAB_104a2c67;
    }
    bVar5 = true;
    bVar4 = true;
    uStack_fc = CONCAT13(1,(undefined3)uStack_fc);
    if (piStack_e4 == (int *)0x0) goto LAB_104a2c67;
  }
  if (((bVar16) && (puStack_48 != auStack_5c)) && (puStack_48 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(puStack_48);
  }
  if (((bVar2) && (puStack_78 != auStack_8c)) && (puStack_78 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(puStack_78);
  }
  if (((bVar3) && (puStack_60 != auStack_74)) && (puStack_60 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(puStack_60);
  }
  if (((bVar4) && (puStack_90 != auStack_a4)) && (puStack_90 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(puStack_90);
  }
  if (((bVar5) && (pppiStack_c0 != &ppiStack_d4)) && (pppiStack_c0 != (int ***)0x0)) {
    FUN_10c3d5d0(pppiStack_c0);
  }
  if (uStack_fc._3_1_ != '\0') {
    (**(code **)(*param_1 + 0x18))(piStack_e4);
    piStack_f8 = (int *)(**(code **)(*piStack_f8 + 4))();
    if (0 < (int)(param_1[0x21] - param_1[0x20] & 0xfffffff8U)) {
      puVar13 = (undefined4 *)FUN_10478dc0(&piStack_f8);
      *puVar13 = param_1 + 0x18;
    }
    piVar6 = local_ec;
    pppiStack_c8 = &ppiStack_d8;
    pcVar18 = "";
    local_f4 = (byte *)0x0;
    pcVar17 = "PropertyCustom";
    pppiStack_c4 = pppiStack_c8;
    FUN_100b62c0();
    FUN_100f2140(&ppppiStack_b0,&fStack_e0,".AISetting",pcVar17,pcVar18);
    cVar9 = (**(code **)(*piVar6 + 0x30))();
    if ((puStack_90 != auStack_a4) && (puStack_90 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(puStack_90);
    }
    if ((pppiStack_c0 != &ppiStack_d4) && (pppiStack_c0 != (int ***)0x0)) {
      FUN_10c3d5d0(pppiStack_c0);
    }
    if (cVar9 != '\0') {
      ppiStack_dc = (int **)0x0;
      cVar9 = (**(code **)(*piStack_f0 + 0x38))("Health",&ppiStack_dc);
      if ((cVar9 != '\0') && (0.0 < (float)piStack_e4)) {
        ppiStack_dc = (int **)((uint)ppiStack_dc & 0xffffff00);
        pppiStack_cc = &ppiStack_dc;
        pppiStack_c8 = pppiStack_cc;
        FUN_104a1b30(pppiStack_cc,&DAT_11da0cf4,(double)(float)piStack_e4);
        pppiVar8 = pppiStack_c8;
        piStack_100 = (int *)0xffffffff;
        FUN_113168d0("Health",&piStack_100);
        cVar9 = FUN_1046dc90();
        if (cVar9 != '\0') {
          FUN_1046d130(piStack_100,pppiVar8);
        }
        if ((pppiStack_c8 != &ppiStack_dc) && (pppiStack_c8 != (int ***)0x0)) {
          FUN_10c3d5d0();
        }
      }
      fStack_e0 = 0.0;
      cVar9 = (**(code **)(*piStack_f8 + 0x38))(&DAT_11dbc56c,&fStack_e0);
      if ((cVar9 != '\0') && (0.0 < (float)piStack_e8)) {
        piStack_e4 = (int *)((uint)piStack_e4 & 0xffffff00);
        ppiStack_d4 = &piStack_e4;
        ppiStack_d0 = ppiStack_d4;
        FUN_104a1b30(ppiStack_d4,&DAT_11da0cf4,(double)(float)piStack_e8);
        ppiVar7 = ppiStack_d0;
        piStack_108 = (int *)0xffffffff;
        FUN_113168d0(&DAT_11dbc56c,&piStack_108);
        cVar9 = FUN_1046dc90();
        if (cVar9 != '\0') {
          FUN_1046d130(piStack_108,ppiVar7);
        }
        if ((ppiStack_d0 != &piStack_e4) && (ppiStack_d0 != (int **)0x0)) {
          FUN_10c3d5d0();
        }
      }
      uStack_fc = 0;
      cVar9 = (**(code **)(*piStack_100 + 0x38))("RageDec",&uStack_fc);
      if ((cVar9 != '\0') && (0.0 < fStack_104)) {
        local_ec = (int *)((uint)local_ec & 0xffffff00);
        ppiStack_dc = &local_ec;
        ppiStack_d8 = ppiStack_dc;
        FUN_104a1b30(ppiStack_dc,&DAT_11da0cf4,(double)fStack_104);
        ppiVar7 = ppiStack_d8;
        uStack_110 = 0xffffffff;
        uVar12 = FUN_113168d0("RageDec",&uStack_110);
        cVar9 = FUN_1046dc90(uVar12);
        if (cVar9 != '\0') {
          FUN_1046d130(uStack_110,ppiVar7);
        }
        if ((ppiStack_d8 != &local_ec) && (ppiStack_d8 != (int **)0x0)) {
          FUN_10c3d5d0();
        }
      }
      uStack_10c = 0;
      cVar9 = (**(code **)(*piStack_108 + 0x3c))("TailFire",&uStack_10c);
      if (cVar9 != '\0') {
        pbVar15 = &DAT_11d9d32b;
        pbVar10 = local_f4;
        do {
          bVar1 = *pbVar10;
          bVar16 = bVar1 < *pbVar15;
          if (bVar1 != *pbVar15) {
LAB_104a30a0:
            uVar14 = -(uint)bVar16 | 1;
            goto LAB_104a30a5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar10[1];
          bVar16 = bVar1 < pbVar15[1];
          if (bVar1 != pbVar15[1]) goto LAB_104a30a0;
          pbVar10 = pbVar10 + 2;
          pbVar15 = pbVar15 + 2;
        } while (bVar1 != 0);
        uVar14 = 0;
LAB_104a30a5:
        if (uVar14 != 0) {
          pppiStack_c4 = &ppiStack_d4;
          ppiStack_d4 = (int **)((uint)ppiStack_d4 & 0xffffff00);
          pppiStack_c0 = pppiStack_c4;
          FUN_104a1b30();
          pppiVar8 = pppiStack_c0;
          piStack_f8 = (int *)0xffffffff;
          FUN_113168d0("TailFire",&piStack_f8);
          cVar9 = FUN_1046dc90();
          if (cVar9 != '\0') {
            FUN_1046d130(piStack_f8,pppiVar8);
          }
          if ((pppiStack_c0 != &ppiStack_d4) && (pppiStack_c0 != (int ***)0x0)) {
            FUN_10c3d5d0(pppiStack_c0);
          }
        }
      }
    }
    if (piStack_f0 != (int *)0x0) {
      (**(code **)(*piStack_f0 + 8))();
    }
  }
  if ((puStack_a8 != auStack_bc) && (puStack_a8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(puStack_a8);
  }
  if (piStack_e8 != (int *)0x0) {
    (**(code **)(*piStack_e8 + 8))();
  }
LAB_104a3164:
  FUN_11a89daa();
  return;
}


// ===== BehaviorTree::RegisterBlackboardKeys @ 10258da0 =====

/* [RE-R1]
   strings:
     ""HitPart""
     ""HitDamageHealth""
     ""EnemyDamage""
     ""Health""
     ""HitSkillId""
     ""HitAttrDmgType""
     ""HitDamageType""
     ""HitPos""
     ""HitDirSim""
     ""ShooterId"" */

void __fastcall BehaviorTree__RegisterBlackboardKeys(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  uVar3 = FUN_113168d0("HitPart");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x228) = uVar3;
  uVar3 = FUN_113168d0("HitDamageHealth");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x230) = uVar3;
  uVar3 = FUN_113168d0("EnemyDamage");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x234) = uVar3;
  uVar3 = FUN_113168d0("Health",&local_c);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 != '\0') {
    FUN_1025bfc0(local_c,param_1 + 0x280);
  }
  uVar3 = FUN_113168d0("HitSkillId");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x22c) = uVar3;
  uVar3 = FUN_113168d0("HitAttrDmgType",param_1 + 0x23c);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x23c) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("HitDamageType",param_1 + 0x238);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x238) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("HitPos",param_1 + 0x240);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x240) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("HitDirSim",param_1 + 0x244);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x244) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("ShooterId",param_1 + 0x248);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x248) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("ShooterSrvId",param_1 + 0x24c);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x24c) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("ShooterMonsterInfoId",param_1 + 0x250);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x250) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("Stimuli_Dead");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 600) = uVar3;
  uVar3 = FUN_113168d0("AbnormalCauserId");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x278) = uVar3;
  uVar3 = FUN_113168d0("LastAbnormalCauserId");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x274) = uVar3;
  uVar3 = FUN_113168d0("Input_AbnormalType",param_1 + 0x260);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x260) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("PartBrokenLevel",param_1 + 0x26c);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x26c) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("DamageCauserId",param_1 + 0x270);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x270) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("Flag_Invulnerability",param_1 + 0x25c);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x25c) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("Sense_MasterAbnormalType",param_1 + 0x264);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x264) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("Sense_TargetAbnormalType",param_1 + 0x268);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x268) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("EventParam1");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x284) = uVar3;
  uVar3 = FUN_113168d0("EventParam2");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x288) = uVar3;
  uVar3 = FUN_113168d0("EventParam3");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x28c) = uVar3;
  uVar3 = FUN_113168d0("EventParam4");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x290) = uVar3;
  uVar3 = FUN_113168d0("EventParamFloat");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x294) = uVar3;
  uVar3 = FUN_113168d0("EventParamVec");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x298) = uVar3;
  uVar3 = FUN_113168d0("EventParamVec2");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x29c) = uVar3;
  uVar3 = FUN_113168d0("EventParamStr");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2a0) = uVar3;
  uVar3 = FUN_113168d0("SelfFSMState");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2a4) = uVar3;
  uVar3 = FUN_113168d0("ClimbStartPos");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2a8) = uVar3;
  uVar3 = FUN_113168d0("ClimbEndPos");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2ac) = uVar3;
  uVar3 = FUN_113168d0("ClimbEndDir");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2b0) = uVar3;
  uVar3 = FUN_113168d0("KeepTarget");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2b4) = uVar3;
  uVar3 = FUN_113168d0("KeepTargetID");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2b8) = uVar3;
  uVar3 = FUN_113168d0("CommondMoveTargetPos");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 700) = uVar3;
  uVar3 = FUN_113168d0("CommondMove");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2c0) = uVar3;
  uVar3 = FUN_113168d0("HitSkillResID");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2c4) = uVar3;
  uVar3 = FUN_113168d0("HitSkillID");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2c8) = uVar3;
  uVar3 = FUN_113168d0("HitSkillLevel");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2cc) = uVar3;
  uVar3 = FUN_113168d0("DamageFireAttr");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2d4) = uVar3;
  uVar3 = FUN_113168d0("DamageWaterAttr");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2d8) = uVar3;
  uVar3 = FUN_113168d0("DamageElectricAttr");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2dc) = uVar3;
  uVar3 = FUN_113168d0("DamageDragonAttr");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2e0) = uVar3;
  uVar3 = FUN_113168d0("DamageIceAttr");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2e4) = uVar3;
  uVar3 = FUN_113168d0("Cooperation_Attack_TargetId");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  iVar1 = DAT_123bb90c;
  *(undefined4 *)(param_1 + 0x2e8) = uVar3;
  piVar4 = (int *)(**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(undefined4 *)(param_1 + 300));
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x14))(&local_8);
    if (local_8 != (int *)0x0) {
      cVar2 = (**(code **)(*local_8 + 0x34))("PropertiesInstance.NpcAnimationName1",&local_10);
      if (cVar2 != '\0') {
        if ((DAT_123c2b10 & 1) == 0) {
          DAT_123c2b10 = DAT_123c2b10 | 1;
          FUN_113168d0("NpcAnimationName1");
        }
        local_c = 0xffffffff;
        cVar2 = FUN_1046dc90(&DAT_123c2b14,&local_c);
        if (cVar2 != '\0') {
          uVar3 = FUN_113168d0(local_10);
          FUN_1025bc60(local_c,uVar3);
        }
      }
      cVar2 = (**(code **)(*local_8 + 0x34))("PropertiesInstance.NpcAnimationName2",&local_10);
      if (cVar2 != '\0') {
        if ((DAT_123c2b10 & 2) == 0) {
          DAT_123c2b10 = DAT_123c2b10 | 2;
          FUN_113168d0("NpcAnimationName2");
        }
        local_c = 0xffffffff;
        cVar2 = FUN_1046dc90(&DAT_123c2b18,&local_c);
        if (cVar2 != '\0') {
          uVar3 = FUN_113168d0(local_10);
          FUN_1025bc60(local_c,uVar3);
        }
      }
      cVar2 = (**(code **)(*local_8 + 0x34))("PropertiesInstance.NpcAnimationName3",&local_10);
      if (cVar2 != '\0') {
        if ((DAT_123c2b10 & 4) == 0) {
          DAT_123c2b10 = DAT_123c2b10 | 4;
          FUN_113168d0("NpcAnimationName3");
        }
        local_c = 0xffffffff;
        cVar2 = FUN_1046dc90(&DAT_123c2b1c,&local_c);
        if (cVar2 != '\0') {
          uVar3 = FUN_113168d0(local_10);
          FUN_1025bc60(local_c,uVar3);
        }
      }
      cVar2 = (**(code **)(*local_8 + 0x34))("PropertiesInstance.NpcAnimationName4",&local_10);
      if (cVar2 != '\0') {
        if ((DAT_123c2b10 & 8) == 0) {
          DAT_123c2b10 = DAT_123c2b10 | 8;
          FUN_113168d0("NpcAnimationName4");
        }
        local_c = 0xffffffff;
        cVar2 = FUN_1046dc90(&DAT_123c2b20,&local_c);
        if (cVar2 != '\0') {
          uVar3 = FUN_113168d0(local_10);
          FUN_1025bc60(local_c,uVar3);
        }
      }
      cVar2 = (**(code **)(*local_8 + 0x34))("PropertiesInstance.NpcAnimationName5",&local_10);
      if (cVar2 != '\0') {
        if ((DAT_123c2b10 & 0x10) == 0) {
          DAT_123c2b10 = DAT_123c2b10 | 0x10;
          FUN_113168d0("NpcAnimationName5");
        }
        local_c = 0xffffffff;
        cVar2 = FUN_1046dc90(&DAT_123c2b24,&local_c);
        if (cVar2 != '\0') {
          uVar3 = FUN_113168d0(local_10);
          FUN_1025bc60(local_c,uVar3);
        }
      }
      cVar2 = (**(code **)(*local_8 + 0x34))("PropertiesInstance.NpcAnimationName6",&local_10);
      if (cVar2 != '\0') {
        if ((DAT_123c2b10 & 0x20) == 0) {
          DAT_123c2b10 = DAT_123c2b10 | 0x20;
          FUN_113168d0("NpcAnimationName6");
        }
        local_c = 0xffffffff;
        cVar2 = FUN_1046dc90(&DAT_123c2b28,&local_c);
        if (cVar2 != '\0') {
          uVar3 = FUN_113168d0(local_10);
          FUN_1025bc60(local_c,uVar3);
        }
      }
      cVar2 = (**(code **)(*local_8 + 0x34))("PropertiesInstance.NpcAnimationName7",&local_10);
      if (cVar2 != '\0') {
        if ((DAT_123c2b10 & 0x40) == 0) {
          DAT_123c2b10 = DAT_123c2b10 | 0x40;
          FUN_113168d0("NpcAnimationName7");
        }
        local_c = 0xffffffff;
        cVar2 = FUN_1046dc90(&DAT_123c2b2c,&local_c);
        if (cVar2 != '\0') {
          uVar3 = FUN_113168d0(local_10);
          FUN_1025bc60(local_c,uVar3);
        }
      }
      cVar2 = (**(code **)(*local_8 + 0x34))("PropertiesInstance.NpcAnimationName8",&local_10);
      if (cVar2 != '\0') {
        if (-1 < (char)DAT_123c2b10) {
          DAT_123c2b10 = DAT_123c2b10 | 0x80;
          FUN_113168d0("NpcAnimationName8");
        }
        local_c = 0xffffffff;
        cVar2 = FUN_1046dc90(&DAT_123c2b30,&local_c);
        if (cVar2 != '\0') {
          uVar3 = FUN_113168d0(local_10);
          FUN_1025bc60(local_c,uVar3);
        }
      }
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 8))();
      }
    }
  }
  return;
}

