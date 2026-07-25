// ===== registrar FUN_103f9710 @ 103f9710 =====

/* [RE-AUTO c0]
   strings:
     ""Times""
     ""CLoopFilter"" */

void FUN_103f9710(void)

{
  char ***pppcStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  char *pcStack_50;
  undefined4 ***pppuStack_4c;
  char *pcStack_48;
  char *pcStack_44;
  undefined1 auStack_40 [12];
  char **ppcStack_34;
  char **ppcStack_30;
  undefined1 local_24 [16];
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_c = DAT_113dd8c0 ^ (uint)auStack_40;
  local_14 = local_24;
  pcStack_44 = "";
  pcStack_48 = "Times";
  pppuStack_4c = (undefined4 ***)0x103f9741;
  local_10 = local_14;
  FUN_1001ea30();
  ppcStack_34 = &pcStack_44;
  pppuStack_4c = (undefined4 ***)0x113bf5e3;
  pcStack_50 = "CLoopFilter";
  uStack_54 = 0x103f975e;
  ppcStack_30 = ppcStack_34;
  FUN_1001ea30();
  pppcStack_60 = &ppcStack_34;
  uStack_54 = 0;
  uStack_58 = 5;
  uStack_5c = 0;
  FUN_103cf810(&pppuStack_4c);
  if (((char ****)pppuStack_4c != &pppcStack_60) && ((char ****)pppuStack_4c != (char ****)0x0)) {
    FUN_10653dc0(pppuStack_4c);
  }
  if ((ppcStack_34 != &pcStack_48) && (ppcStack_34 != (char **)0x0)) {
    FUN_10653dc0(ppcStack_34);
  }
  FUN_112bed8e();
  return;
}


