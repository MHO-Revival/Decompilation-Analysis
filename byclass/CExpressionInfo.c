// ===== class CExpressionInfo  (6 recovered methods) =====

/* --- CExpressionInfo::GetManagers @ 109b0ae0 --- */
// [RE-AUTO c3]
// id: CExpressionInfo::GetManagers
// strings:
//   ""CExpressionInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CExpressionInfo::GetManagers
   strings:
     ""CExpressionInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CExpressionInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c8c60 & 1) == 0) {
    DAT_123c8c60 = DAT_123c8c60 | 1;
    _DAT_123c8c78 = &DAT_123c8c68;
    DAT_123c8c7c = &DAT_123c8c68;
    DAT_123c8c68 = 0;
    FUN_100d83d0("CExpressionInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c7b8e0);
  }
  return DAT_123c8c64;
}



/* --- CExpressionInfo::GetManagers_1152b570 @ 1152b570 --- */
// [RE-AUTO c3]
// id: CExpressionInfo::GetManagers
// strings:
//   ""CExpressionInfo::GetManagers""
//   ""CExpressionInfo""

/* [RE-AUTO c3]
   id: CExpressionInfo::GetManagers
   strings:
     ""CExpressionInfo::GetManagers""
     ""CExpressionInfo"" */

int CExpressionInfo__GetManagers_1152b570(undefined **param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_8;
  
  if (-1 < param_2) {
    iVar6 = 0;
    local_8 = 0;
    iVar8 = 1;
    if (0 < param_2) {
      iVar3 = (int)param_1 * 100;
      iVar7 = iVar3;
      do {
        iVar7 = iVar7 + 1;
        param_1 = &PTR_FUN_11de1fec;
        if ((DAT_123c8c60 & 1) == 0) {
          DAT_123c8c60 = DAT_123c8c60 | 1;
          FUN_102500e0("CExpressionInfo::GetManagers");
          FUN_11a8911f(&LAB_11c7b8e0);
        }
        puVar4 = (undefined4 *)*DAT_123c8c64;
        if ((puVar4 == (undefined4 *)0x0) &&
           (puVar4 = (undefined4 *)FUN_11679e10(&param_1,"CExpressionInfo",0),
           puVar4 == (undefined4 *)0x0)) {
          if ((DAT_123c8ccc & 1) == 0) {
            DAT_123c8ccc = DAT_123c8ccc | 1;
            FUN_109b4370();
            FUN_11a8911f(&LAB_11ca0e50);
          }
          puVar4 = &DAT_123c8cd0;
        }
        if (((iVar7 != -1) &&
            (((iVar7 != 0 || (puVar4[0xc] == 0)) &&
             (iVar1 = puVar4[10], iVar6 = local_8, iVar1 != 0)))) &&
           ((iVar5 = (iVar3 - puVar4[0xc]) + iVar8, -1 < iVar5 && (iVar5 < (int)puVar4[9])))) {
          iVar2 = *(int *)(puVar4[8] + (iVar5 / iVar1) * 4);
          if ((iVar2 != 0) && (iVar1 = *(int *)(iVar2 + (iVar5 % iVar1) * 4), iVar1 != 0)) {
            local_8 = local_8 + *(int *)(iVar1 + 0x20);
            iVar6 = local_8;
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 <= param_2);
    }
    return iVar6;
  }
  return 0;
}



/* --- CExpressionInfo::GetManagers_1152b6a0 @ 1152b6a0 --- */
// [RE-AUTO c3]
// id: CExpressionInfo::GetManagers
// strings:
//   ""CExpressionInfo""
//   ""CExpressionInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CExpressionInfo::GetManagers
   strings:
     ""CExpressionInfo""
     ""CExpressionInfo::GetManagers"" */

undefined1 CExpressionInfo__GetManagers_1152b6a0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 uVar8;
  int iVar9;
  undefined1 *in_stack_00000018;
  undefined4 *in_stack_0000001c;
  undefined4 *in_stack_00000020;
  undefined **local_8;
  
  puVar3 = in_stack_00000020;
  puVar2 = in_stack_0000001c;
  piVar5 = (int *)FUN_109b3f50(0,"CExpressionInfo",0);
  iVar6 = (**(code **)(*piVar5 + 0x28))();
  iVar9 = 0;
  if (0 < iVar6) {
    do {
      local_8 = &PTR_FUN_11de1fec;
      if ((DAT_123c8c60 & 1) == 0) {
        DAT_123c8c60 = DAT_123c8c60 | 1;
        FUN_102500e0("CExpressionInfo::GetManagers");
        FUN_11a8911f(&LAB_11c7b8e0);
      }
      puVar7 = (undefined4 *)*DAT_123c8c64;
      if ((puVar7 == (undefined4 *)0x0) &&
         (puVar7 = (undefined4 *)FUN_11679e10(&local_8,"CExpressionInfo",0),
         puVar7 == (undefined4 *)0x0)) {
        if ((DAT_123c8ccc & 1) == 0) {
          DAT_123c8cd4 = 0;
          DAT_123c8ce4 = 0;
          DAT_123c8ce8 = 0;
          _DAT_123c8cec = 0;
          DAT_123c8cf0 = 0;
          DAT_123c8ccc = DAT_123c8ccc | 1;
          DAT_123c8cd0 = &PTR_FUN_11de2048;
          DAT_123c8cf4 = _DAT_11de9ae0;
          DAT_123c8cf8 = _UNK_11de9ae4;
          uRam123c8cfc = _UNK_11de9ae8;
          DAT_123c8d00 = _UNK_11de9aec;
          DAT_123c8d04 = 1;
          DAT_123c8cd8 = puVar7;
          _DAT_123c8cdc = puVar7;
          _DAT_123c8ce0 = puVar7;
          FUN_11a8911f(&LAB_11ca0e50);
        }
        puVar7 = &DAT_123c8cd0;
      }
      local_8 = &PTR_FUN_11da54a8;
      if ((((-1 < iVar9) && (iVar9 < (int)(puVar7[6] - puVar7[5]) >> 2)) &&
          (iVar1 = *(int *)(puVar7[5] + iVar9 * 4), iVar1 != 0)) &&
         (cVar4 = FUN_100e5770(in_stack_00000018), cVar4 != '\0')) {
        uVar8 = 1;
        *puVar2 = *(undefined4 *)(iVar1 + 0x14);
        *puVar3 = *(undefined4 *)(iVar1 + 0x1c);
        goto LAB_1152b7dd;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar6);
  }
  uVar8 = 0;
LAB_1152b7dd:
  if ((in_stack_00000018 != &stack0x00000004) && (in_stack_00000018 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(in_stack_00000018);
  }
  return uVar8;
}



/* --- CExpressionInfo::GetManagers_1152ba60 @ 1152ba60 --- */
// [RE-AUTO c3]
// id: CExpressionInfo::GetManagers
// strings:
//   ""CExpressionInfo::GetManagers""
//   ""CExpressionInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CExpressionInfo::GetManagers
   strings:
     ""CExpressionInfo::GetManagers""
     ""CExpressionInfo"" */

int __fastcall CExpressionInfo__GetManagers_1152ba60(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined **local_10;
  int local_c;
  int local_8;
  
  iVar7 = param_1 + 8;
  iVar5 = 0;
  iVar4 = *(int *)(param_1 + 0x10);
  local_8 = 0;
  local_c = iVar7;
  if (iVar4 != iVar7) {
    do {
      if ((*(int *)(iVar4 + 0x14) != 0) || (*(int *)(iVar4 + 0x18) != 0)) {
        local_10 = &PTR_FUN_11de1fec;
        iVar6 = *(int *)(iVar4 + 0x10) * 100 + *(int *)(iVar4 + 0x14);
        if ((DAT_123c8c60 & 1) == 0) {
          DAT_123c8c60 = DAT_123c8c60 | 1;
          FUN_102500e0("CExpressionInfo::GetManagers");
          FUN_11a8911f(&LAB_11c7b8e0);
        }
        puVar3 = (undefined4 *)*DAT_123c8c64;
        if ((puVar3 == (undefined4 *)0x0) &&
           (puVar3 = (undefined4 *)FUN_11679e10(&local_10,"CExpressionInfo",0),
           puVar3 == (undefined4 *)0x0)) {
          if ((DAT_123c8ccc & 1) == 0) {
            DAT_123c8cd4 = 0;
            DAT_123c8ce4 = 0;
            DAT_123c8ce8 = 0;
            _DAT_123c8cec = 0;
            DAT_123c8cf0 = 0;
            DAT_123c8ccc = DAT_123c8ccc | 1;
            DAT_123c8cd0 = &PTR_FUN_11de2048;
            DAT_123c8cf4 = _DAT_11de9ae0;
            DAT_123c8cf8 = _UNK_11de9ae4;
            uRam123c8cfc = _UNK_11de9ae8;
            DAT_123c8d00 = _UNK_11de9aec;
            DAT_123c8d04 = 1;
            DAT_123c8cd8 = puVar3;
            _DAT_123c8cdc = puVar3;
            _DAT_123c8ce0 = puVar3;
            FUN_11a8911f(&LAB_11ca0e50);
          }
          puVar3 = &DAT_123c8cd0;
        }
        iVar5 = local_8;
        iVar7 = local_c;
        if ((iVar6 != -1) &&
           ((((iVar6 != 0 || (puVar3[0xc] == 0)) && (iVar1 = puVar3[10], iVar1 != 0)) &&
            ((iVar6 = iVar6 - puVar3[0xc], -1 < iVar6 && (iVar6 < (int)puVar3[9])))))) {
          iVar2 = *(int *)(puVar3[8] + (iVar6 / iVar1) * 4);
          if (((iVar2 != 0) && (iVar6 = *(int *)(iVar2 + (iVar6 % iVar1) * 4), iVar6 != 0)) &&
             (((*(int *)(iVar4 + 0x14) != 1 || (*(int *)(iVar4 + 0x18) != 0)) ||
              (*(int *)(iVar6 + 0x20) != 0)))) {
            local_8 = local_8 + 1;
            iVar5 = local_8;
          }
        }
      }
      iVar6 = *(int *)(iVar4 + 0xc);
      if (iVar6 == 0) {
        iVar6 = *(int *)(iVar4 + 4);
        if (iVar4 == *(int *)(iVar6 + 0xc)) {
          do {
            iVar4 = iVar6;
            iVar6 = *(int *)(iVar4 + 4);
          } while (iVar4 == *(int *)(iVar6 + 0xc));
        }
        if (*(int *)(iVar4 + 0xc) != iVar6) {
          iVar4 = iVar6;
        }
      }
      else {
        for (iVar1 = *(int *)(iVar6 + 8); iVar4 = iVar6, iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
          iVar6 = iVar1;
        }
      }
    } while (iVar4 != iVar7);
  }
  return iVar5;
}



/* --- CExpressionInfo::GetManagers_1152bea0 @ 1152bea0 --- */
// [RE-AUTO c3]
// id: CExpressionInfo::GetManagers
// strings:
//   ""CExpressionInfo""
//   ""CExpressionInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CExpressionInfo::GetManagers
   strings:
     ""CExpressionInfo""
     ""CExpressionInfo::GetManagers"" */

undefined4 __fastcall CExpressionInfo__GetManagers_1152bea0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined **local_8;
  
  piVar2 = (int *)FUN_109b3f50(0,"CExpressionInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      local_8 = &PTR_FUN_11de1fec;
      if ((DAT_123c8c60 & 1) == 0) {
        DAT_123c8c60 = DAT_123c8c60 | 1;
        FUN_102500e0("CExpressionInfo::GetManagers");
        FUN_11a8911f(&LAB_11c7b8e0);
      }
      puVar4 = (undefined4 *)*DAT_123c8c64;
      if ((puVar4 == (undefined4 *)0x0) &&
         (puVar4 = (undefined4 *)FUN_11679e10(&local_8,"CExpressionInfo",0),
         puVar4 == (undefined4 *)0x0)) {
        if ((DAT_123c8ccc & 1) == 0) {
          DAT_123c8cd4 = 0;
          DAT_123c8ce4 = 0;
          DAT_123c8ce8 = 0;
          _DAT_123c8cec = 0;
          DAT_123c8cf0 = 0;
          DAT_123c8ccc = DAT_123c8ccc | 1;
          DAT_123c8cd8 = 0;
          _DAT_123c8cdc = 0;
          _DAT_123c8ce0 = 0;
          DAT_123c8cd0 = &PTR_FUN_11de2048;
          DAT_123c8cf4 = _DAT_11de9ae0;
          DAT_123c8cf8 = _UNK_11de9ae4;
          uRam123c8cfc = _UNK_11de9ae8;
          DAT_123c8d00 = _UNK_11de9aec;
          DAT_123c8d04 = 1;
          FUN_11a8911f(&LAB_11ca0e50);
        }
        puVar4 = &DAT_123c8cd0;
      }
      local_8 = &PTR_FUN_11da54a8;
      if ((-1 < iVar5) && (iVar5 < (int)(puVar4[6] - puVar4[5]) >> 2)) {
        iVar1 = *(int *)(puVar4[5] + iVar5 * 4);
        if (iVar1 != 0) {
          (**(code **)(*param_1 + 0xc))(*(int *)(iVar1 + 0x10) / 100,0);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return 1;
}



/* --- CExpressionInfo::GetManagers_1152c000 @ 1152c000 --- */
// [RE-AUTO c3]
// id: CExpressionInfo::GetManagers
// strings:
//   ""CExpressionInfo""
//   ""CExpressionInfo::GetManagers""

/* [RE-AUTO c3]
   id: CExpressionInfo::GetManagers
   strings:
     ""CExpressionInfo""
     ""CExpressionInfo::GetManagers"" */

void __thiscall CExpressionInfo__GetManagers_1152c000(int *param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined **local_c;
  int *local_8;
  
  iVar10 = param_2;
  *param_3 = 0;
  cVar3 = (**(code **)(*param_1 + 4))(param_2);
  if (cVar3 != '\0') {
    local_8 = param_1 + 2;
    piVar4 = (int *)FUN_1152abb0(&param_2);
    iVar1 = *piVar4;
    iVar9 = iVar1 + 1;
    FUN_1152abb0(&param_2);
    local_c = (undefined **)(iVar10 * 100);
    iVar10 = (int)local_c + 1;
    iVar5 = FUN_109b3f50(0,"CExpressionInfo",0);
    if ((iVar10 != -1) &&
       ((((iVar10 != 0 || (*(int *)(iVar5 + 0x30) == 0)) && (*(int *)(iVar5 + 0x28) != 0)) &&
        ((iVar10 = iVar10 - *(int *)(iVar5 + 0x30), -1 < iVar10 && (iVar10 < *(int *)(iVar5 + 0x24))
         ))))) {
      iVar8 = *(int *)(*(int *)(iVar5 + 0x20) + (iVar10 / *(int *)(iVar5 + 0x28)) * 4);
      if ((iVar8 != 0) &&
         (iVar10 = *(int *)(iVar8 + (iVar10 % *(int *)(iVar5 + 0x28)) * 4), iVar10 != 0)) {
        iVar10 = *(int *)(iVar10 + 0x3c);
        if (iVar9 <= iVar10) {
          iVar5 = (int)local_c + iVar9;
          while( true ) {
            local_c = &PTR_FUN_11de1fec;
            if ((DAT_123c8c60 & 1) == 0) {
              DAT_123c8c60 = DAT_123c8c60 | 1;
              FUN_102500e0("CExpressionInfo::GetManagers");
              FUN_11a8911f(&LAB_11c7b8e0);
            }
            puVar6 = (undefined4 *)*DAT_123c8c64;
            if ((puVar6 == (undefined4 *)0x0) &&
               (puVar6 = (undefined4 *)FUN_11679e10(&local_c,"CExpressionInfo",0),
               puVar6 == (undefined4 *)0x0)) {
              if ((DAT_123c8ccc & 1) == 0) {
                DAT_123c8ccc = DAT_123c8ccc | 1;
                FUN_109b4370();
                FUN_11a8911f(&LAB_11ca0e50);
              }
              puVar6 = &DAT_123c8cd0;
            }
            local_c = &PTR_FUN_11da54a8;
            if (((iVar5 == -1) ||
                (((iVar5 == 0 && (puVar6[0xc] != 0)) || (iVar8 = puVar6[10], iVar8 == 0)))) ||
               ((iVar7 = iVar5 - puVar6[0xc], iVar7 < 0 || ((int)puVar6[9] <= iVar7)))) break;
            iVar2 = *(int *)(puVar6[8] + (iVar7 / iVar8) * 4);
            if ((iVar2 == 0) ||
               ((iVar8 = *(int *)(iVar2 + (iVar7 % iVar8) * 4), iVar8 == 0 ||
                (iVar7 = FUN_1152abb0(&param_2), *(int *)(iVar7 + 4) < *(int *)(iVar8 + 0x20)))))
            break;
            iVar7 = FUN_1152abb0(&param_2);
            *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) - *(int *)(iVar8 + 0x20);
            piVar4 = (int *)FUN_1152abb0(&param_2);
            *piVar4 = *piVar4 + 1;
            iVar8 = FUN_1152abb0(&param_2);
            if (*(int *)(iVar8 + 8) < 1) {
              iVar8 = FUN_1152abb0(&param_2);
              *(undefined4 *)(iVar8 + 8) = 1;
            }
            iVar9 = iVar9 + 1;
            iVar5 = iVar5 + 1;
            if (iVar10 < iVar9) break;
          }
        }
        piVar4 = (int *)FUN_1152abb0(&param_2);
        if (iVar1 < *piVar4) {
          *param_3 = 1;
        }
      }
    }
  }
  return;
}



