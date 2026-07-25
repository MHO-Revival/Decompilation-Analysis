// NewOperationActivityService::BuildActivityRewardDataList @ 109d8fc0  (2808 bytes)
// CAnimSequencePlay param indices referenced: [0, 1, 2, 4, 5, 7, 12, 15, 16, 20, 22, 23, 24, 25, 27, 28]


/* [RE-R1]
   calls: atoi
   strings:
     ""RewardDatas""
     ""mh.view.NewOperationActivity.Data.ActivityRewardData""
     ""ItemId""
     ""ItemCount""
     ""FetchCount""
     ""MaxFetchCount""
     ""EntryId""
     ""ConditionType""
     ""nCondParam1""
     ""nCondParam2"" */

void NewOperationActivityService__BuildActivityRewardDataList
               (undefined4 param_1,undefined4 *param_2,int param_3,char *param_4)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_EBX;
  int iVar6;
  char *unaff_EDI;
  undefined8 uVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uStack_13c;
  char *pcStack_138;
  undefined4 uStack_12c;
  uint uStack_114;
  int local_110;
  undefined4 *puStack_10c;
  int *piStack_108;
  int iStack_104;
  int *piStack_100;
  uint uStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  uint uStack_e8;
  char *local_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d4;
  undefined4 local_cc [4];
  undefined4 uStack_bc;
  int *piStack_b8;
  int *piStack_b4;
  char *pcStack_b0;
  undefined4 uStack_ac;
  int *piStack_a8;
  uint uStack_a4;
  int iStack_98;
  int iStack_94;
  int *piStack_90;
  uint uStack_8c;
  undefined4 auStack_88 [3];
  undefined2 *puStack_7c;
  undefined2 auStack_78 [2];
  undefined4 *puStack_74;
  undefined2 auStack_70 [2];
  undefined2 **ppuStack_6c;
  ushort auStack_68 [8];
  undefined2 **ppuStack_58;
  undefined2 **ppuStack_54;
  undefined4 **ppuStack_50;
  undefined4 **ppuStack_4c;
  undefined2 ***pppuStack_48;
  undefined2 ***pppuStack_44;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_114;
  local_110 = param_3;
  local_cc[0] = param_1;
  local_e4 = param_4;
  if ((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
      (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) &&
     (iStack_e0 = (**(code **)(*piVar1 + 0xb4))(), iStack_e0 != 0)) {
    piStack_a8 = (int *)0x0;
    uStack_a4 = 0;
    FUN_11a98a70();
    iStack_e0 = CONCAT31(iStack_e0._1_3_,((byte)param_2[1] & 0x8f) == 10);
    pcStack_138 = (char *)0x109d9078;
    (**(code **)(*(int *)*param_2 + 0x14))();
    iStack_dc = 0;
    if (param_4[0xad2] != '\0') {
LAB_109d9090:
      iVar6 = iStack_dc * 0x423;
      iStack_d4 = iVar6;
      if (((param_4[iVar6 + 0xad4] != '0') || (param_4[iVar6 + 0xae3] == '\x10')) ||
         ((*param_4 == '|' && (param_4[iVar6 + 0xae3] != '\n')))) goto LAB_109d9e19;
      piStack_100 = (int *)0x0;
      uStack_fc = 0;
      FUN_11a98de0();
      pcStack_138 = pcStack_b0;
      uStack_13c = (char *)0x109d90fe;
      (**(code **)(*piStack_b8 + 0x3c))();
      uStack_13c = *(char **)(param_4 + iVar6 + 0xad6);
      FUN_104d1440();
      FUN_104d1550("ItemCount",(int)*(short *)(param_4 + iVar6 + 0xada));
      uStack_13c = (char *)(uint)(byte)param_4[iVar6 + 0xad3];
      uVar3 = FUN_109d8f20();
      FUN_104d1550("FetchCount",uVar3);
      FUN_104d1550("MaxFetchCount",(int)*(short *)(param_4 + iVar6 + 0xb0d));
      FUN_104d1550("EntryId",param_4[iVar6 + 0xad3]);
      CPet__SetName(param_4 + iVar6 + 0xb0f);
      ppuStack_50 = (undefined4 **)auStack_70;
      auStack_70[0] = 0;
      ppuStack_4c = ppuStack_50;
      FUN_100e5b60(auStack_70);
      FUN_104d1700(&DAT_11dbe644,ppuStack_50);
      if ((ppuStack_50 != &puStack_74) && (ppuStack_50 != (undefined4 **)0x0)) {
        FUN_10c3d5d0(ppuStack_50);
      }
      FUN_10c3da30("mh.view.NewOperationActivity.Data.ActivityRewardData");
      FUN_104d1550("ConditionType",param_4[iVar6 + 0xae3]);
      FUN_104d1550("nCondParam1",*(undefined4 *)(param_4 + iVar6 + 0xae5));
      FUN_104d1550("nCondParam2",*(undefined4 *)(param_4 + iVar6 + 0xae9));
      uVar3 = *(undefined4 *)(param_4 + iVar6 + 0xae9);
      uStack_12c = 0;
      switch(param_4[iVar6 + 0xae3]) {
      case '\x02':
        uVar9 = *(undefined4 *)(param_4 + iVar6 + 0xae5);
        pcVar8 = "LoginDayTime";
        goto code_r0x109d92ec;
      case '\x03':
        uVar9 = *(undefined4 *)(param_4 + iVar6 + 0xae5);
        pcVar8 = "NeedOnlineTime";
code_r0x109d92ec:
        FUN_104d1550(pcVar8,uVar9);
      case '\x04':
      case '\x05':
      case '\x06':
      case '\a':
      case '\f':
      case '\x0f':
      case '\x10':
code_r0x109d92fa:
        break;
      case '\b':
        uStack_12c = FUN_109d8f20(pcStack_138,param_4[iVar6 + 0xae4]);
        uVar3 = *(undefined4 *)(param_4 + iVar6 + 0xae5);
        break;
      case '\t':
        (**(code **)(*piStack_108 + 0x46c))(*(undefined2 *)(param_4 + iVar6 + 0xae5));
        uStack_12c = FUN_114e00a0();
        break;
      case '\n':
      case '\x0e':
        goto DAT_109d92cc;
      case '\v':
        piStack_90 = (int *)0x0;
        uStack_8c = 0;
        FUN_11a98a70(&piStack_90);
        FUN_104d12b0("ExchangeSourceItemDataArray",&iStack_94);
        iStack_f4 = 0;
        iStack_f0 = 0;
        iStack_ec = 0;
        FUN_100b5f70(param_4 + iVar6 + 0xb8f,&stack0xfffffecf);
        FUN_100e4b30(&ppuStack_58,&uStack_fc,0x2c);
        if ((pppuStack_44 != &ppuStack_58) && (pppuStack_44 != (undefined2 ***)0x0)) {
          FUN_10c3d5d0(pppuStack_44);
        }
        iStack_f0 = 0;
        iStack_ec = 0;
        uStack_e8 = 0;
        FUN_100b5f70(param_4 + iVar6 + 0xc0f,(int)&uStack_13c + 3);
        FUN_100e4b30(auStack_88,&iStack_f8,0x2c);
        if ((puStack_74 != auStack_88) && (puStack_74 != (undefined4 *)0x0)) {
          FUN_10c3d5d0(puStack_74);
        }
        uStack_114 = 0;
        uStack_e8 = ((int)piStack_100 - iStack_104) / 0x18;
        if (uStack_e8 != 0) {
          iVar4 = iStack_f4 - iStack_f8;
          puStack_10c = (undefined4 *)(iStack_f8 + 0x14);
          iStack_ec = iStack_104 - iStack_f8;
          do {
            iVar6 = local_110;
            param_4 = unaff_EDI;
            if ((uint)(iVar4 / 0x18) <= uStack_114) break;
            iVar6 = atoi(*(char **)(iStack_ec + (int)puStack_10c));
            iVar5 = atoi((char *)*puStack_10c);
            uStack_bc = 0;
            piStack_b8 = (int *)0x0;
            FUN_11a98de0(&uStack_bc,"mh.view.NewOperationActivity.Data.ActivitySimpleItemData",0,0);
            FUN_104d1550("ItemId",iVar6);
            FUN_104d1550("ItemCount",iVar5);
            (**(code **)(*piStack_b4 + 0x3c))(uStack_ac,local_cc);
            FUN_104d7c10();
            uStack_114 = uStack_114 + 1;
            puStack_10c = puStack_10c + 6;
            iVar6 = local_110;
          } while (uStack_114 < uStack_e8);
        }
        FUN_100e4590(iStack_f4,iStack_f8,0,&stack0xfffffebf);
        if (iStack_f8 != 0) {
          FUN_10c3d5d0(iStack_f8);
        }
        FUN_100e4590(piStack_100,iStack_104,0,&stack0xfffffebf);
        if (iStack_f0 != 0) {
          FUN_10c3d5d0(iStack_f0);
        }
        if ((uStack_8c >> 6 & 1) != 0) {
          (**(code **)(*piStack_90 + 8))(&piStack_90,auStack_88[0]);
        }
        goto code_r0x109d92fa;
      case '\r':
        uVar3 = 1;
        iVar4 = FUN_107ca5b0(*(undefined4 *)(param_4 + iVar6 + 0xae5));
        if ((((iVar4 == 0) ||
             (iVar4 = FUN_116b8a70(*(undefined4 *)(param_4 + iVar6 + 0xae9)), iVar4 == 0)) ||
            (piStack_108[0xae2] == 0)) ||
           (cVar2 = FUN_114cdd70(*(undefined4 *)(iVar4 + 0x28)), cVar2 == '\0'))
        goto code_r0x109d92fa;
        uStack_12c = 1;
        break;
      case '\x11':
        FUN_109d8f20(pcStack_138,param_4[iVar6 + 0xae5]);
        goto DAT_109d92cc;
      default:
        uStack_12c = 0;
      }
      goto LAB_109d92fe;
    }
LAB_109d9e50:
    if ((uStack_a4 >> 6 & 1) != 0) {
      (**(code **)(*piStack_a8 + 8))();
    }
  }
  FUN_11a89daa();
  return;
DAT_109d92cc:
  uStack_12c = FUN_109d8f20(pcStack_138,param_4[iVar6 + 0xae5]);
LAB_109d92fe:
  FUN_104d1550("CurrentAchieveCount",uStack_12c);
  FUN_104d1550("NeedAchieveCount",uVar3);
  cVar2 = *param_4;
  if ((((cVar2 == '\x7f') || (cVar2 == '\f')) || (cVar2 == '\x10')) ||
     (((cVar2 == '\x16' || (cVar2 == '\x1c')) ||
      ((cVar2 == '\x1b' || ((cVar2 == '\x1f' || (cVar2 == '\"')))))))) {
    FUN_109d8f20();
    FUN_104d1550();
    pcStack_138 = "needItemCount";
    uStack_13c = (char *)0x109d9383;
    FUN_104d1550();
    param_4 = local_e4;
  }
  if (*param_4 == '\x18') {
    FUN_109d8f20();
    FUN_104d1550();
    pcStack_138 = "needItemCount";
    uStack_13c = (char *)0x109d93ca;
    FUN_104d1550();
    param_4 = local_e4;
  }
  if (*param_4 == '\x19') {
    FUN_109d8f20();
    FUN_104d1550();
    pcStack_138 = "needItemCount";
    uStack_13c = (char *)0x109d9411;
    FUN_104d1550();
    param_4 = local_e4;
  }
  if (((*param_4 == '|') && (param_4[iVar6 + 0xae3] == '\n')) &&
     (puStack_10c = (undefined4 *)FUN_109dbcd0(), puStack_10c != (undefined4 *)0x0)) {
    iVar4 = FUN_109d8f20();
    if (iVar4 == 0) {
      iVar4 = *(int *)(uStack_114 + 0xb);
    }
    uVar7 = FUN_111f8d20();
    piStack_90 = (int *)((uint)uVar7 - 0x2a30);
    iStack_98 = iVar4 + -0x2a30;
    uStack_8c = (int)((ulonglong)uVar7 >> 0x20) - (uint)((uint)uVar7 < 0x2a30);
    iStack_94 = iStack_98 >> 0x1f;
    pcStack_138 = (char *)0x109d94a2;
    FUN_10a13c30();
    FUN_109d8f20();
    pcStack_138 = "ItemCount";
    uStack_13c = (char *)0x109d94fb;
    FUN_104d1550();
    param_4 = local_e4;
  }
  if ((*param_4 == '\n') && (param_4[iVar6 + 0xae3] == '\n')) {
    if ((*(int *)(param_4 + iVar6 + 0xadf) == 4) && (*(int *)(iStack_e0 + 0x2d1c) != 0)) {
      iStack_d4 = FUN_113fa0d0();
      iStack_d4 = *(int *)(param_4 + iVar6 + 0xae9) - iStack_d4;
      if (0 < iStack_d4) {
        FUN_109d8f20();
        FUN_104d1550();
      }
    }
    if ((*(int *)(param_4 + iVar6 + 0xadf) == 2) && (*(int *)(iStack_e0 + 0x2d1c) != 0)) {
      FUN_113fa380();
      FUN_104d1440();
      pcStack_138 = (char *)0x109d9964;
      FUN_104d1550();
    }
  }
  if ((*param_4 == '\x17') && (param_4[iVar6 + 0xae3] == '\n')) {
    if (*(int *)(param_4 + iVar6 + 0xadf) == 4) {
      FUN_104d1550();
      FUN_104d1550();
    }
    if (*(int *)(param_4 + iVar6 + 0xadf) == 2) {
      FUN_104d1550();
      FUN_104d1550();
    }
  }
  if (*param_4 == '%') {
    FUN_109d8f20();
    FUN_104d1550();
  }
  if (*param_4 == '*') {
    FUN_109d8f20();
    FUN_104d1550();
    cVar2 = param_4[iVar6 + 0xae5];
    FUN_109d8f20();
    pcStack_138 = "NeedAchieveCount";
    uStack_13c = (char *)0x109d9a79;
    FUN_104d1550();
    uStack_13c = (char *)0x109d9a8e;
    pcStack_138 = unaff_EDI;
    uStack_13c = (char *)FUN_109d8f20();
    FUN_104d1550();
    FUN_104d1550("MaxFetchCount",(int)*(short *)(param_4 + iVar6 + 0xb0d));
    uStack_13c = param_4 + iVar6 + 0xb0f;
    CPet__SetName();
    pppuStack_48 = (undefined2 ***)auStack_68;
    auStack_68[0] = 0;
    pppuStack_44 = pppuStack_48;
    FUN_100e5b60();
    FUN_104d1700(&DAT_11dbe644,pppuStack_48);
    if ((pppuStack_48 != &ppuStack_6c) && (pppuStack_48 != (undefined2 ***)0x0)) {
      FUN_10c3d5d0(pppuStack_48);
    }
    if (cVar2 != '\0') {
      FUN_10c3da30(cVar2);
    }
    iVar4 = FUN_109d8f20(unaff_EBX,param_4[iVar6 + 0xae5]);
    CPet__SetName(param_4 + iVar4 * 0x423 + 0x6c3);
    ppuStack_58 = (undefined2 **)auStack_78;
    auStack_78[0] = 0;
    ppuStack_54 = ppuStack_58;
    FUN_100e5b60(auStack_78);
    FUN_104d1700("strParam5",ppuStack_58);
    if ((ppuStack_58 != &puStack_7c) && (ppuStack_58 != (undefined2 **)0x0)) {
      FUN_10c3d5d0(ppuStack_58);
    }
    if (uStack_13c != (char *)0x0) {
      FUN_10c3da30(uStack_13c);
    }
    iVar4 = FUN_10254130(*(undefined4 *)(param_4 + iVar6 + 0xad6));
    if (iVar4 != 0) {
      ppuStack_58 = (undefined2 **)auStack_68;
      auStack_68[0] = auStack_68[0] & 0xff00;
      ppuStack_54 = ppuStack_58;
      FUN_100e5aa0();
      FUN_104d1670();
      if ((ppuStack_54 != (undefined2 **)auStack_68) && (ppuStack_54 != (undefined2 **)0x0)) {
        FUN_10c3d5d0();
      }
      goto LAB_109d9c70;
    }
LAB_109d9e33:
    if ((uStack_fc >> 6 & 1) != 0) {
      (**(code **)(*piStack_100 + 8))();
    }
    goto LAB_109d9e50;
  }
LAB_109d9c70:
  if (*param_4 == '+') {
    FUN_109d8f20();
    FUN_104d1550();
    pcStack_138 = (char *)0x109d9cab;
    atoi(param_4 + iVar6 + 0xc0f);
    FUN_104d1550();
    pcStack_138 = (char *)0x109d9ccb;
    iVar4 = FUN_10254130();
    if (iVar4 == 0) goto LAB_109d9e33;
    ppuStack_58 = (undefined2 **)auStack_68;
    auStack_68[0] = auStack_68[0] & 0xff00;
    ppuStack_54 = ppuStack_58;
    FUN_100e5aa0();
    FUN_104d1670();
    if ((ppuStack_54 != (undefined2 **)auStack_68) && (ppuStack_54 != (undefined2 **)0x0)) {
      FUN_10c3d5d0();
    }
  }
  if (*param_4 == ',') {
    FUN_109d8f20();
    FUN_104d1550();
    pcStack_138 = "NeedAchieveCount";
    uStack_13c = (char *)0x109d9d77;
    FUN_104d1550();
    FUN_109d8f20();
    pcStack_138 = "FetchCount";
    uStack_13c = (char *)0x109d9d9d;
    FUN_104d1550();
    uStack_13c = (char *)(int)*(short *)(param_4 + iVar6 + 0xb0d);
    FUN_104d1550();
    pcStack_138 = (char *)0x109d9dd3;
    CPet__SetName();
    pcStack_138 = &stack0xfffffee0;
    uStack_13c = "Desc";
    FUN_104d1790();
    if (puStack_10c != (undefined4 *)0x0) {
      FUN_10c3da30();
    }
  }
  if ((uStack_fc >> 6 & 1) != 0) {
    (**(code **)(*piStack_100 + 8))();
  }
LAB_109d9e19:
  iStack_dc = iStack_dc + 1;
  if ((int)(uint)(byte)param_4[0xad2] <= iStack_dc) goto LAB_109d9e50;
  goto LAB_109d9090;
}

