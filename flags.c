//----- (020507CC) --------------------------------------------------------
int GetSizeOfFlagMemory()
{
  return 940;
}

//----- (020507D4) --------------------------------------------------------
int *__fastcall ClearFlagMemory(int *a1)
{
  return Call_FillMemWithValue(a1, 0, 0x3ACu);
}

//----- (020507E4) --------------------------------------------------------
int __fastcall LoadFlagAdress(int a1)
{
  return LoadVariableAreaAdress(a1, 4);
}

//----- (020507F0) --------------------------------------------------------
int __fastcall CheckFlag(int a1, uint a2)
{
  uint v2
  char *v3
  int v4
  int result

  v2 = a2;
  v3 = CalculateFlagByteAddress(a1, a2);
  if ( !v3
    || (v4 = (uchar)*v3,
        result = 1,
        !(v4 & (1 << (((v2 & 0x80000000) != 0) + __ROR4__((v2 << 29) - (v2 >> 31), 29))))) )
  {
    result = 0;
  }
  return result;
}

//----- (0205081C) --------------------------------------------------------
char *__fastcall SetFlag(int a1, uint a2)
{
  uint v2
  char *result

  v2 = a2;
  result = CalculateFlagByteAddress(a1, a2);
  if ( result )
    *result |= 1 << (((v2 & 0x80000000) != 0) + __ROR4__((v2 << 29) - (v2 >> 31), 29));
  return result;
}

//----- (02050844) --------------------------------------------------------
char *__fastcall ClearFlag(int a1, uint a2)
{
  uint v2
  char *result

  v2 = a2;
  result = CalculateFlagByteAddress(a1, a2);
  if ( result )
    *result &= ~(1 << (((v2 & 0x80000000) != 0) + __ROR4__((v2 << 29) - (v2 >> 31), 29)));
  return result;
}

//----- (02050870) --------------------------------------------------------
char *__fastcall CalculateFlagByteAddress(int a1, uint a2)
{
  int v2
  char *result
  uint v4
  int v5

  v2 = a1;
  if ( !a2 )
    return 0;
  if ( a2 >= 0x4000 )
  {
    v5 = (int)(a2 - 0x4000) / 8;
    if ( v5 >= 8 )
      ErrorHandler();
    result = (char *)dword_21C07F4 + v5;
  }
  else
  {
    v4 = a2 >> 3;
    if ( (int)(a2 >> 3) >= 364 )
      ErrorHandler();
    result = (char *)(v2 + 576 + v4);
  }
  return result;
}