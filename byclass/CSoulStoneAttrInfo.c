// ===== class CSoulStoneAttrInfo  (6 recovered methods) =====

/* --- CSoulStoneAttrInfo::GetManagers @ 10520a00 --- */
// [RE-AUTO c3]
// id: CSoulStoneAttrInfo::GetManagers
// strings:
//   ""CSoulStoneAttrInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSoulStoneAttrInfo::GetManagers
   strings:
     ""CSoulStoneAttrInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CSoulStoneAttrInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123be598 & 1) == 0) {
    DAT_123be598 = DAT_123be598 | 1;
    _DAT_123be590 = &DAT_123be580;
    DAT_123be594 = &DAT_123be580;
    DAT_123be580 = 0;
    FUN_100d83d0("CSoulStoneAttrInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c6fa90);
  }
  return DAT_123be57c;
}



/* --- CSoulStoneAttrInfo::GetManagers_11410350 @ 11410350 --- */
// [RE-AUTO c3]
// id: CSoulStoneAttrInfo::GetManagers
// strings:
//   ""CSoulStoneAttrInfo::GetManagers""
//   ""CSoulStoneAttrInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSoulStoneAttrInfo::GetManagers
   strings:
     ""CSoulStoneAttrInfo::GetManagers""
     ""CSoulStoneAttrInfo"" */

void __fastcall CSoulStoneAttrInfo__GetManagers_11410350(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined **ppuVar10;
  undefined **local_14;
  int local_10;
  int local_c;
  undefined1 local_5;
  
  iVar8 = param_1 + 0x34;
  local_10 = *(int *)(param_1 + 0x3c);
  local_c = iVar8;
  if (local_10 != iVar8) {
    do {
      iVar6 = local_10;
      iVar9 = *(int *)(local_10 + 0x10);
      local_14 = &PTR_FUN_11dc014c;
      if ((DAT_123be598 & 1) == 0) {
        DAT_123be598 = DAT_123be598 | 1;
        FUN_102500e0("CSoulStoneAttrInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6fa90);
      }
      puVar4 = (undefined *)*DAT_123be57c;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&local_14,"CSoulStoneAttrInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_123be534 & 1) == 0) {
          DAT_123be53c = 0;
          DAT_123be54c = 0;
          DAT_123be550 = 0;
          _DAT_123be554 = 0;
          DAT_123be558 = 0;
          DAT_123be534 = DAT_123be534 | 1;
          _DAT_123be538 = &PTR_FUN_11dc015c;
          DAT_123be55c = _DAT_11de9ae0;
          DAT_123be560 = _UNK_11de9ae4;
          uRam123be564 = _UNK_11de9ae8;
          DAT_123be568 = _UNK_11de9aec;
          DAT_123be56c = 1;
          DAT_123be540 = puVar4;
          _DAT_123be544 = puVar4;
          _DAT_123be548 = puVar4;
          FUN_11a8911f(&LAB_11c9c640);
        }
        puVar4 = &DAT_123be538;
      }
      if (((iVar9 != -1) &&
          (((iVar9 != 0 || (*(int *)(puVar4 + 0x30) == 0)) &&
           (iVar1 = *(int *)(puVar4 + 0x28), iVar8 = local_c, iVar1 != 0)))) &&
         ((iVar9 = iVar9 - *(int *)(puVar4 + 0x30), -1 < iVar9 && (iVar9 < *(int *)(puVar4 + 0x24)))
         )) {
        iVar2 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar9 / iVar1) * 4);
        if ((iVar2 != 0) && (iVar9 = *(int *)(iVar2 + (iVar9 % iVar1) * 4), iVar9 != 0)) {
          puVar7 = *(undefined4 **)(iVar9 + 0x50);
          ppuVar10 = (undefined **)0x0;
          ppuVar5 = (undefined **)
                    ((uint)((int)*(undefined4 **)(iVar9 + 0x54) + (3 - (int)puVar7)) >> 2);
          if (*(undefined4 **)(iVar9 + 0x54) < puVar7) {
            ppuVar5 = (undefined **)0x0;
          }
          local_14 = ppuVar5;
          if (ppuVar5 != (undefined **)0x0) {
            do {
              local_14 = (undefined **)
                         (**(code **)(**(int **)(*(int *)(param_1 + 8) + 0x10) + 0x44))
                                   (0,*puVar7,0,1,0x29);
              if (0 < (int)local_14) {
                puVar3 = *(uint **)(param_1 + 0x68);
                if (puVar3 == *(uint **)(param_1 + 0x6c)) {
                  FUN_10463c40(puVar3,&local_14,&local_5,1,1);
                }
                else {
                  *puVar3 = (uint)local_14;
                  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 4;
                }
              }
              ppuVar10 = (undefined **)((int)ppuVar10 + 1);
              puVar7 = puVar7 + 1;
              iVar8 = local_c;
              iVar6 = local_10;
            } while (ppuVar10 != ppuVar5);
          }
        }
      }
      local_10 = *(int *)(iVar6 + 0xc);
      if (local_10 == 0) {
        iVar9 = *(int *)(iVar6 + 4);
        if (iVar6 == *(int *)(iVar9 + 0xc)) {
          do {
            iVar6 = iVar9;
            iVar9 = *(int *)(iVar6 + 4);
          } while (iVar6 == *(int *)(iVar9 + 0xc));
        }
        local_10 = iVar6;
        if (*(int *)(iVar6 + 0xc) != iVar9) {
          local_10 = iVar9;
        }
      }
      else {
        for (iVar9 = *(int *)(local_10 + 8); iVar9 != 0; iVar9 = *(int *)(iVar9 + 8)) {
          local_10 = iVar9;
        }
      }
    } while (local_10 != iVar8);
  }
  return;
}



/* --- CSoulStoneAttrInfo::GetManagers_11413660 @ 11413660 --- */
// [RE-AUTO c3]
// id: CSoulStoneAttrInfo::GetManagers
// strings:
//   ""CSoulStoneAttrInfo::GetManagers""
//   ""CSoulStoneAttrInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSoulStoneAttrInfo::GetManagers
   strings:
     ""CSoulStoneAttrInfo::GetManagers""
     ""CSoulStoneAttrInfo"" */

int __fastcall CSoulStoneAttrInfo__GetManagers_11413660(int param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined **local_c;
  int local_8;
  
  local_8 = 0;
  iVar4 = *(int *)(param_1 + 0x3c);
  while (iVar4 != param_1 + 0x34) {
    iVar5 = *(int *)(iVar4 + 0x10);
    local_c = &PTR_FUN_11dc014c;
    if ((DAT_123be598 & 1) == 0) {
      DAT_123be598 = DAT_123be598 | 1;
      FUN_102500e0("CSoulStoneAttrInfo::GetManagers");
      FUN_11a8911f(&LAB_11c6fa90);
    }
    puVar3 = (undefined *)*DAT_123be57c;
    if ((puVar3 == (undefined *)0x0) &&
       (puVar3 = (undefined *)FUN_11679e10(&local_c,"CSoulStoneAttrInfo",0),
       puVar3 == (undefined *)0x0)) {
      if ((DAT_123be534 & 1) == 0) {
        DAT_123be53c = 0;
        DAT_123be54c = 0;
        DAT_123be550 = 0;
        _DAT_123be554 = 0;
        DAT_123be558 = 0;
        DAT_123be534 = DAT_123be534 | 1;
        _DAT_123be538 = &PTR_FUN_11dc015c;
        DAT_123be55c = _DAT_11de9ae0;
        DAT_123be560 = _UNK_11de9ae4;
        uRam123be564 = _UNK_11de9ae8;
        DAT_123be568 = _UNK_11de9aec;
        DAT_123be56c = 1;
        DAT_123be540 = puVar3;
        _DAT_123be544 = puVar3;
        _DAT_123be548 = puVar3;
        FUN_11a8911f(&LAB_11c9c640);
      }
      puVar3 = &DAT_123be538;
    }
    if (((iVar5 != -1) &&
        (((iVar5 != 0 || (*(int *)(puVar3 + 0x30) == 0)) &&
         (iVar1 = *(int *)(puVar3 + 0x28), iVar1 != 0)))) &&
       ((iVar5 = iVar5 - *(int *)(puVar3 + 0x30), -1 < iVar5 && (iVar5 < *(int *)(puVar3 + 0x24)))))
    {
      iVar2 = *(int *)(*(int *)(puVar3 + 0x20) + (iVar5 / iVar1) * 4);
      if ((iVar2 != 0) && (iVar5 = *(int *)(iVar2 + (iVar5 % iVar1) * 4), iVar5 != 0)) {
        local_8 = local_8 + *(int *)(iVar5 + 0x18);
      }
    }
    iVar5 = *(int *)(iVar4 + 0xc);
    if (iVar5 == 0) {
      iVar5 = *(int *)(iVar4 + 4);
      if (iVar4 == *(int *)(iVar5 + 0xc)) {
        do {
          iVar4 = iVar5;
          iVar5 = *(int *)(iVar4 + 4);
        } while (iVar4 == *(int *)(iVar5 + 0xc));
      }
      if (*(int *)(iVar4 + 0xc) != iVar5) {
        iVar4 = iVar5;
      }
    }
    else {
      for (iVar1 = *(int *)(iVar5 + 8); iVar4 = iVar5, iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
        iVar5 = iVar1;
      }
    }
  }
  return local_8;
}



/* --- CSoulStoneAttrInfo::GetManagers_114138e0 @ 114138e0 --- */
// [RE-AUTO c3]
// id: CSoulStoneAttrInfo::GetManagers
// strings:
//   ""CSoulStoneAttrInfo::GetManagers""
//   ""CSoulStoneAttrInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSoulStoneAttrInfo::GetManagers
   strings:
     ""CSoulStoneAttrInfo::GetManagers""
     ""CSoulStoneAttrInfo"" */

int __thiscall CSoulStoneAttrInfo__GetManagers_114138e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined **local_c;
  int local_8;
  
  local_8 = 0;
  iVar4 = *(int *)(param_1 + 0x3c);
  while (iVar4 != param_1 + 0x34) {
    iVar5 = *(int *)(iVar4 + 0x10);
    local_c = &PTR_FUN_11dc014c;
    if ((DAT_123be598 & 1) == 0) {
      DAT_123be598 = DAT_123be598 | 1;
      FUN_102500e0("CSoulStoneAttrInfo::GetManagers");
      FUN_11a8911f(&LAB_11c6fa90);
    }
    puVar3 = (undefined *)*DAT_123be57c;
    if ((puVar3 == (undefined *)0x0) &&
       (puVar3 = (undefined *)FUN_11679e10(&local_c,"CSoulStoneAttrInfo",0),
       puVar3 == (undefined *)0x0)) {
      if ((DAT_123be534 & 1) == 0) {
        DAT_123be53c = 0;
        DAT_123be54c = 0;
        DAT_123be550 = 0;
        _DAT_123be554 = 0;
        DAT_123be558 = 0;
        DAT_123be534 = DAT_123be534 | 1;
        _DAT_123be538 = &PTR_FUN_11dc015c;
        DAT_123be55c = _DAT_11de9ae0;
        DAT_123be560 = _UNK_11de9ae4;
        uRam123be564 = _UNK_11de9ae8;
        DAT_123be568 = _UNK_11de9aec;
        DAT_123be56c = 1;
        DAT_123be540 = puVar3;
        _DAT_123be544 = puVar3;
        _DAT_123be548 = puVar3;
        FUN_11a8911f(&LAB_11c9c640);
      }
      puVar3 = &DAT_123be538;
    }
    if ((iVar5 != -1) &&
       ((((iVar5 != 0 || (*(int *)(puVar3 + 0x30) == 0)) &&
         (iVar1 = *(int *)(puVar3 + 0x28), iVar1 != 0)) &&
        ((iVar5 = iVar5 - *(int *)(puVar3 + 0x30), -1 < iVar5 && (iVar5 < *(int *)(puVar3 + 0x24))))
        ))) {
      iVar2 = *(int *)(*(int *)(puVar3 + 0x20) + (iVar5 / iVar1) * 4);
      if ((iVar2 != 0) &&
         ((iVar5 = *(int *)(iVar2 + (iVar5 % iVar1) * 4), iVar5 != 0 &&
          (*(int *)(iVar5 + 0x30) == param_2)))) {
        local_8 = local_8 + *(int *)(iVar5 + 0x18);
      }
    }
    iVar5 = *(int *)(iVar4 + 0xc);
    if (iVar5 == 0) {
      iVar5 = *(int *)(iVar4 + 4);
      if (iVar4 == *(int *)(iVar5 + 0xc)) {
        do {
          iVar4 = iVar5;
          iVar5 = *(int *)(iVar4 + 4);
        } while (iVar4 == *(int *)(iVar5 + 0xc));
      }
      if (*(int *)(iVar4 + 0xc) != iVar5) {
        iVar4 = iVar5;
      }
    }
    else {
      for (iVar1 = *(int *)(iVar5 + 8); iVar4 = iVar5, iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
        iVar5 = iVar1;
      }
    }
  }
  return local_8;
}



/* --- CSoulStoneAttrInfo::GetManagers_11414190 @ 11414190 --- */
// [RE-AUTO c3]
// id: CSoulStoneAttrInfo::GetManagers
// strings:
//   ""CSoulStoneAttrInfo::GetManagers""
//   ""CSoulStoneAttrInfo""
//   ""{0}:{1}""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSoulStoneAttrInfo::GetManagers
   strings:
     ""CSoulStoneAttrInfo::GetManagers""
     ""CSoulStoneAttrInfo""
     ""{0}:{1}"" */

void __fastcall CSoulStoneAttrInfo__GetManagers_11414190(int *param_1)

{
  char ****ppppcVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  char ****ppppcVar5;
  int *piVar6;
  char ****ppppcVar7;
  int iVar8;
  int iVar9;
  undefined4 local_74;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 *puStack_5c;
  undefined4 uStack_58;
  int *local_54;
  undefined **local_50;
  int local_4c;
  int local_48;
  int *local_44;
  int *local_40;
  int local_3c;
  char ***local_38 [5];
  uint local_24;
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_10 = local_20;
  local_44 = (int *)param_1[0xf];
  local_40 = param_1 + 0xd;
  local_48 = 0;
  local_4c = 0;
  local_20[0] = 0;
  local_54 = param_1;
  local_c = local_10;
  if (local_44 != local_40) {
    do {
      piVar6 = local_44;
      iVar8 = local_44[4];
      local_50 = &PTR_FUN_11dc014c;
      if ((DAT_123be598 & 1) == 0) {
        DAT_123be598 = DAT_123be598 | 1;
        FUN_102500e0("CSoulStoneAttrInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6fa90);
      }
      puVar2 = (undefined *)*DAT_123be57c;
      if ((puVar2 == (undefined *)0x0) &&
         (puVar2 = (undefined *)FUN_11679e10(&local_50,"CSoulStoneAttrInfo",0),
         puVar2 == (undefined *)0x0)) {
        if ((DAT_123be534 & 1) == 0) {
          DAT_123be53c = 0;
          DAT_123be54c = 0;
          DAT_123be550 = 0;
          _DAT_123be554 = 0;
          DAT_123be558 = 0;
          DAT_123be534 = DAT_123be534 | 1;
          _DAT_123be538 = &PTR_FUN_11dc015c;
          DAT_123be55c = _DAT_11de9ae0;
          DAT_123be560 = _UNK_11de9ae4;
          uRam123be564 = _UNK_11de9ae8;
          DAT_123be568 = _UNK_11de9aec;
          DAT_123be56c = 1;
          DAT_123be540 = puVar2;
          _DAT_123be544 = puVar2;
          _DAT_123be548 = puVar2;
          FUN_11a8911f(&LAB_11c9c640);
        }
        puVar2 = &DAT_123be538;
      }
      local_50 = &PTR_FUN_11da54a8;
      if ((iVar8 != -1) &&
         ((((iVar8 != 0 || (*(int *)(puVar2 + 0x30) == 0)) &&
           (iVar9 = *(int *)(puVar2 + 0x28), iVar9 != 0)) &&
          ((iVar8 = iVar8 - *(int *)(puVar2 + 0x30), -1 < iVar8 && (iVar8 < *(int *)(puVar2 + 0x24))
           ))))) {
        iVar3 = *(int *)(*(int *)(puVar2 + 0x20) + (iVar8 / iVar9) * 4);
        if ((iVar3 != 0) && (piVar4 = *(int **)(iVar3 + (iVar8 % iVar9) * 4), piVar4 != (int *)0x0))
        {
          if (local_c != local_10) {
            FUN_100d9260(&DAT_11dbc798,&DAT_11dbc799);
          }
          iVar8 = piVar4[6];
          local_74 = (**(code **)(*piVar4 + 0x18))();
          local_70 = uStack_60;
          local_68 = uStack_60;
          puStack_5c = &local_74;
          local_64 = 0x22;
          uStack_60 = 0;
          local_6c = iVar8;
          FUN_10a1f270(local_38,"{0}:{1}",0x22,0,puStack_5c,uStack_58);
          ppppcVar1 = local_38;
          ppppcVar7 = local_38;
          if (0xf < local_24) {
            ppppcVar1 = (char ****)local_38[0];
            ppppcVar7 = (char ****)local_38[0];
          }
          do {
            ppppcVar5 = ppppcVar1;
            ppppcVar1 = (char ****)((int)ppppcVar5 + 1);
          } while (*(char *)ppppcVar5 != '\0');
          FUN_100d9260(ppppcVar7,ppppcVar5);
          if (0xf < local_24) {
            FUN_10c3d5d0(local_38[0]);
          }
          iVar8 = piVar4[6];
          iVar9 = 1;
          local_3c = iVar8;
          if (0 < iVar8) {
            do {
              iVar3 = FUN_115342b0(piVar4[5],iVar9);
              if (iVar3 != 0) {
                local_48 = local_48 + *(int *)(iVar3 + 0x38);
                local_4c = local_4c + *(int *)(iVar3 + 0x48);
              }
              iVar9 = iVar9 + 1;
              piVar6 = local_44;
            } while (iVar9 <= iVar8);
          }
        }
      }
      local_44 = (int *)piVar6[3];
      if (local_44 == (int *)0x0) {
        piVar4 = (int *)piVar6[1];
        if (piVar6 == (int *)piVar4[3]) {
          do {
            piVar6 = piVar4;
            piVar4 = (int *)piVar6[1];
          } while (piVar6 == (int *)piVar4[3]);
        }
        local_44 = piVar6;
        if ((int *)piVar6[3] != piVar4) {
          local_44 = piVar4;
        }
      }
      else {
        for (piVar6 = (int *)local_44[2]; piVar6 != (int *)0x0; piVar6 = (int *)piVar6[2]) {
          local_44 = piVar6;
        }
      }
    } while (local_44 != local_40);
  }
  iVar9 = local_48;
  iVar8 = local_4c;
  piVar4 = local_54;
  piVar6 = local_54 + 10;
  *piVar6 = *piVar6 + local_48;
  if (*piVar6 < 0) {
    local_54[10] = 0x7fffffff;
  }
  if (0 < local_4c) {
    (**(code **)(*(int *)local_54[2] + 0x278))(local_4c,0x27,0);
  }
  if (local_40[4] != 0) {
    iVar3 = local_40[1];
    while (iVar3 != 0) {
      FUN_10463ae0(*(undefined4 *)(iVar3 + 0xc));
      iVar8 = *(int *)(iVar3 + 8);
      FUN_10c3d5d0(iVar3);
      iVar3 = iVar8;
      piVar4 = local_54;
      iVar8 = local_4c;
      iVar9 = local_48;
    }
    local_40[2] = (int)local_40;
    local_40[1] = 0;
    local_40[3] = (int)local_40;
    local_40[4] = 0;
  }
  piVar4[0xc] = 0;
  FUN_11412f00();
  local_3c = 0;
  FUN_1138efa0(&local_3c,0,0);
  (**(code **)(*piVar4 + 0xb0))(iVar9,iVar8,local_20);
  if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_c);
  }
  FUN_11a89daa();
  return;
}



/* --- CSoulStoneAttrInfo::GetManagers_11a7c100 @ 11a7c100 --- */
// [RE-AUTO c3]
// id: CSoulStoneAttrInfo::GetManagers
// strings:
//   ""CSoulStoneAttrInfo""
//   ""CSoulStoneAttrInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSoulStoneAttrInfo::GetManagers
   strings:
     ""CSoulStoneAttrInfo""
     ""CSoulStoneAttrInfo::GetManagers"" */

void CSoulStoneAttrInfo__GetManagers_11a7c100(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined *local_14;
  int *local_10;
  undefined **local_c;
  undefined1 local_5;
  
  piVar1 = (int *)FUN_10529ba0(0,"CSoulStoneAttrInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar6 = 0;
  if (0 < iVar2) {
    do {
      local_c = &PTR_FUN_11dc014c;
      if ((DAT_123be598 & 1) == 0) {
        DAT_123be598 = DAT_123be598 | 1;
        FUN_102500e0("CSoulStoneAttrInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6fa90);
      }
      puVar3 = (undefined *)*DAT_123be57c;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_c,"CSoulStoneAttrInfo",0),
         puVar3 == (undefined *)0x0)) {
        if ((DAT_123be534 & 1) == 0) {
          DAT_123be53c = 0;
          DAT_123be54c = 0;
          DAT_123be550 = 0;
          _DAT_123be554 = 0;
          DAT_123be558 = 0;
          DAT_123be534 = DAT_123be534 | 1;
          _DAT_123be538 = &PTR_FUN_11dc015c;
          DAT_123be55c = _DAT_11de9ae0;
          DAT_123be560 = _UNK_11de9ae4;
          uRam123be564 = _UNK_11de9ae8;
          DAT_123be568 = _UNK_11de9aec;
          DAT_123be56c = 1;
          DAT_123be540 = puVar3;
          _DAT_123be544 = puVar3;
          _DAT_123be548 = puVar3;
          FUN_11a8911f(&LAB_11cb7a90);
        }
        puVar3 = &DAT_123be538;
      }
      if ((iVar6 < 0) || (*(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2 <= iVar6)) {
        ppuVar7 = (undefined **)0x0;
      }
      else {
        ppuVar7 = *(undefined ***)(*(int *)(puVar3 + 0x14) + iVar6 * 4);
      }
      if ((ppuVar7 != (undefined **)0x0) &&
         (puVar3 = ppuVar7[0xc], local_c = ppuVar7,
         puVar4 = (undefined *)(**(code **)(*local_10 + 0x18))(), puVar3 == puVar4)) {
        piVar1 = (int *)local_10[0x11];
        if (piVar1 == (int *)local_10[0x12]) {
          FUN_119bee80(piVar1,&local_c,&local_5,1,1);
        }
        else {
          *piVar1 = (int)ppuVar7;
          local_10[0x11] = local_10[0x11] + 4;
        }
        local_14 = ppuVar7[5];
        iVar5 = FUN_11a7b9c0(&local_14);
        piVar1 = *(int **)(iVar5 + 4);
        if (piVar1 == *(int **)(iVar5 + 8)) {
          FUN_119bee80(piVar1,&local_c,&local_5,1,1);
        }
        else {
          *piVar1 = (int)ppuVar7;
          *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 4;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
  }
  return;
}



