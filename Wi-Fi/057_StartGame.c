//----- (021D0D80) --------------------------------------------------------
int NewGameInit()
{
  Function_2017fc8(3, 77, 0x20000);
  InitRNG();
  return 1;
}

//----- (021D0D98) --------------------------------------------------------
int __fastcall NewGameLoop(int a1)
{
  int v1;

  v1 = LoadPtrToOverWorldDataIn18(a1);
  InitVariablesForNewGame(77, *(uint *)(v1 + 8));
  return 1;
}

//----- (021D0DAC) --------------------------------------------------------
int NewGameEnd()
{
  Function_201807c(77);
  SetOverlayJumpTableDataToLoad(-1, (int)&dword_20F6820[1]);
  return 1;
}

//----- (021D0DC8) --------------------------------------------------------
int ContinueGameInit()
{
  Function_2017fc8(3, 77, 0x20000);
  InitRNG();
  return 1;
}

//----- (021D0DE0) --------------------------------------------------------
int __fastcall ContinueGameLoop(int a1)
{
  int v1;
  int v2;

  v1 = *(uint *)(LoadPtrToOverWorldDataIn18(a1) + 8);
  Function_21d0eac(77, v1, 1);
  v2 = LoadPlayerDataAdress_26(v1);
  Function_2017434(v2);
  return 1;
}

//----- (021D0E00) --------------------------------------------------------
int ContinueGameEnd()
{
  Function_201807c(77);
  SetOverlayJumpTableDataToLoad(-1, (int)&JumpTable_AfterContinueGameEnd);
  return 1;
}

//----- (021D0E1C) --------------------------------------------------------
int ContinueGameDiaryInit()
{
  Function_2017fc8(3, 77, 0x20000);
  InitRNG();
  return 1;
}

//----- (021D0E34) --------------------------------------------------------
int __fastcall ContinueGameDiaryLoop(int a1)
{
  int v1;
  uint *v2;
  int v3;
  int v4;
  uint v5;
  uint *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v1 = *(uint *)(LoadPtrToOverWorldDataIn18(a1) + 8);
  v2 = (uint *)LoadVariableAreaAdress_0(v1);
  Function_21d0f30(77, v1);
  Function_2027a68(v1, 0);
  if ( !Function_2025d10((int)v2, v3, v4, v5) || !Function_2025d40(v2) )
  {
    v6 = (uint *)Function_2025cd8(v1);
    Function_2025de8(v6);
    Function_2025ce4((int)v2, v7, v8, v9);
    v10 = LoadPokePartyAdress(v1);
    Function_2077b8c(v10);
  }
  v11 = LoadPlayerDataAdress_26(v1);
  Function_2017434(v11);
  return 1;
}

//----- (021D0E90) --------------------------------------------------------
int ContinueGameDiaryEnd()
{
  Function_201807c(77);
  SetOverlayJumpTableDataToLoad(-1, (int)&dword_20EA118[1]);
  return 1;
}

//----- (021D0EAC) --------------------------------------------------------
uint __fastcall Function_21d0eac(uint a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  char v15;
  uchar *v16;
  uint v18;

  v3 = a2;
  v18 = a1;
  v4 = a3;
  v5 = LoadVariableAreaAdress_0(a2);
  Function_2025ce4(v5, v6, v7, v8);
  v9 = (int *)Function_2025cd8(v3);
  Function_2025d84(v9);
  v10 = LoadVariableAreaAdress_11(v3);
  v11 = Function_201d35c();
  Function_202b40c(v10, 1, v11);
  Function_206c008(v3);
  v12 = LoadTrainerDataAdress(v3);
  v13 = Function_201d35c();
  if ( v4 )
    SetTrainerID(v12, v13);
  v14 = GetGender(v12);
  v15 = Function_205c9bc(v13, v14, 0);
  Function_2025f90(v12, v15);
  v16 = (uchar *)LoadVariableAreaAdress_a(v3);
  return Function_2027b90(v16, v18, (int)dword_21D0FA0, 118);
}

//----- (021D0F30) --------------------------------------------------------
int __fastcall Function_21d0f30(int a1, uint *a2)
{
  int result;

  result = Function_20246a8(a2);
  if ( !result )
    result = OS_ResetSystem(0);
  return result;
}

//----- (021D0F44) --------------------------------------------------------
char *__fastcall InitVariablesForNewGame(int a1, uint *a2)
{
  int v2;
  int v3;
  int v4;

  v2 = (int)a2;
  Call_ClearAllVariableAreas(a2);
  Function_203d1a8(v2);
  v3 = LoadTrainerDataAdress(v2);
  SetMoney(v3, 0xBB8u);
  v4 = LoadFlagAdress(v2);
  return SetFlag_Flag960(v4);
}

