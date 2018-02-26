//----- (02017E74) --------------------------------------------------------
int *__fastcall AllocateAreasOfMemory(int *a1, uint a2, uint a3, int a4)
{
  uint v4
  int *v5
  uint v6
  uint v7
  int v8
  int v9
  int *result
  int v11
  uint v12
  int v13
  int v14
  int *v15

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v15 = (int *)(a2 + 24);
  if ( a3 < a2 + 24 )
    v6 = a2 + 24;
  if ( a4 )
  {
    for ( ; a4 & 3; ++a4 )
      ;
    OS_AllocFromArenaLo(0, a4, 4);
  }
  dword_21BFAF0 = OS_AllocFromArenaLo(0, v6 + 2 * v6 + 4 * (3 * (uint)v15 + 1), 4);
  dword_21BFAF4 = dword_21BFAF0 + 4 * ((uint)v15 + 1);
  dword_21BFAF8 = dword_21BFAF4 + 4 * (uint)v15;
  dword_21BFAFC = dword_21BFAF8 + 4 * (uint)v15;
  dword_21BFB00 = dword_21BFAFC + 2 * v6;
  word_21BFB04 = v6;
  word_21BFB06 = v4;
  v7 = 0;
  word_21BFB0A = (short)v15;
  word_21BFB08 = (short)v15;
  if ( v4 )
  {
    v14 = 0;
    do
    {
      v8 = v5[1];
      if ( v8 && v8 == 2 )
        v9 = OS_AllocFromArenaHi(2, *v5, 4);
      else
        v9 = OS_AllocFromArenaLo(0, *v5, 4);
      if ( v9 )
      {
        *(uint *)(dword_21BFAF0 + v14) = NNS_FndCreateExpHeapEx(v9, *v5, 0);
        *(uchar *)(dword_21BFB00 + v7) = v7;
      }
      else
      {
        ErrorHandler();
      }
      ++v7;
      v5 += 2;
      v14 += 4;
    }
    while ( v7 < v4 );
  }
  result = v15;
  if ( v4 < (uint)v15 + 1 )
  {
    v11 = 4 * v4;
    result = 0;
    do
    {
      *(uint *)(dword_21BFAF0 + v11) = 0;
      v11 += 4;
      *(uchar *)(dword_21BFB00 + v4++) = word_21BFB0A;
    }
    while ( v4 < (uint)v15 + 1 );
  }
  if ( v4 < v6 )
  {
    result = &dword_21BFAF0;
    do
      *(uchar *)(dword_21BFB00 + v4++) = word_21BFB0A;
    while ( v4 < v6 );
  }
  v12 = 0;
  if ( v6 )
  {
    result = &dword_21BFAF0;
    v13 = 0;
    do
    {
      ++v12;
      *(ushort *)(dword_21BFAFC + v13) = 0;
      v13 += 2;
    }
    while ( v12 < v6 );
  }
  return result;
}

//----- (02017FA0) --------------------------------------------------------
int Function_2017fa0()
{
  int result
  uint *v1

  result = (ushort)word_21BFB06;
  if ( (ushort)word_21BFB06 >= (int)(ushort)word_21BFB08 )
    return -1;
  v1 = (uint *)(dword_21BFAF0 + 4 * (ushort)word_21BFB06);
  while ( *v1 )
  {
    ++result;
    ++v1;
    if ( result >= (ushort)word_21BFB08 )
      return -1;
  }
  return result;
}

//----- (02017FC8) --------------------------------------------------------
int __fastcall Function_2017fc8(int a1, int a2, int a3)
{
  return Function_2017fe0(a1, a2, a3, 4);
}

//----- (02017FD4) --------------------------------------------------------
int __fastcall Function_2017fd4(int a1, int a2, int a3)
{
  return Function_2017fe0(a1, a2, a3, -4);
}

//----- (02017FE0) --------------------------------------------------------
int __fastcall Function_2017fe0(int a1, int a2, int a3, int a4)
{
  int v4
  int v5
  int v6
  int v7
  int v8
  int v9
  int v11
  int v12

  v4 = a1;
  v5 = a2;
  v11 = a3;
  v6 = a4;
  if ( OS_GetProcMode() == 18 )
    ErrorHandler();
  if ( word_21BFB0A == *(uchar *)(dword_21BFB00 + v5) )
  {
    v7 = *(uint *)(dword_21BFAF0 + 4 * *(uchar *)(dword_21BFB00 + v4));
    if ( v7 )
    {
      v12 = NNS_FndAllocFromExpHeapEx(v7, v11, v6);
      if ( v12 )
      {
        v8 = Function_2017fa0();
        if ( v8 < 0 )
        {
          ErrorHandler();
        }
        else
        {
          v9 = 4 * v8;
          *(uint *)(dword_21BFAF0 + 4 * v8) = NNS_FndCreateExpHeapEx(v12, v11, 0);
          if ( *(uint *)(dword_21BFAF0 + 4 * v8) )
          {
            *(uint *)(dword_21BFAF4 + v9) = v7;
            *(uint *)(dword_21BFAF8 + v9) = v12;
            *(uchar *)(dword_21BFB00 + v5) = v8;
            return 1;
          }
          ErrorHandler();
        }
      }
      else
      {
        ErrorHandler();
      }
    }
    else
    {
      ErrorHandler();
    }
  }
  else
  {
    ErrorHandler();
  }
  return 0;
}

//----- (0201807C) --------------------------------------------------------
uint __fastcall Function_201807c(int a1)
{
  int v1
  uint result
  int v3
  int v4
  int v5
  int v6

  v1 = a1;
  if ( OS_GetProcMode() == 18 )
    ErrorHandler();
  result = *(uint *)(dword_21BFAF0 + 4 * *(uchar *)(dword_21BFB00 + v1));
  if ( result )
  {
    Function_20a543c(result);
    v4 = 4 * *(uchar *)(dword_21BFB00 + v1);
    v5 = *(uint *)(dword_21BFAF4 + v4);
    v6 = *(uint *)(dword_21BFAF8 + v4);
    if ( v5 && v6 )
      Function_20a55d8(v5, v6, v4, v3);
    else
      ErrorHandler();
    *(uint *)(dword_21BFAF0 + 4 * *(uchar *)(dword_21BFB00 + v1)) = 0;
    *(uint *)(dword_21BFAF4 + 4 * *(uchar *)(dword_21BFB00 + v1)) = 0;
    *(uint *)(dword_21BFAF8 + 4 * *(uchar *)(dword_21BFB00 + v1)) = 0;
    result = dword_21BFB00;
    *(uchar *)(dword_21BFB00 + v1) = word_21BFB0A;
  }
  return result;
}

//----- (020180F0) --------------------------------------------------------
int __fastcall Function_20180f0(int a1, int a2, int a3, uchar a4)
{
  int v4
  int v5
  int v6
  uchar v7
  int v8
  int v9

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( !a1 )
    ErrorHandler();
  v8 = OS_DisableInterrupts();
  v9 = NNS_FndAllocFromExpHeapEx(v4, v5 + 16, v6);
  OS_RestoreInterrupts(v8);
  if ( v9 )
  {
    *(uint *)(v9 + 12) = v7 | *(uint *)(v9 + 12) & 0xFFFFFF00;
    v9 += 16;
  }
  return v9;
}

//----- (02018134) --------------------------------------------------------
int *Function_2018134()
{
  int *result

  result = (int *)Function_2036780();
  if ( result )
    result = Function_209b49c();
  return result;
}

//----- (02018144) --------------------------------------------------------
int __fastcall malloc(uint a1, int a2)
{
  uint v2
  int v3

  v2 = a1;
  v3 = 0;
  if ( a1 < (ushort)word_21BFB04 )
    v3 = Function_20180f0(*(uint *)(dword_21BFAF0 + 4 * *(uchar *)(dword_21BFB00 + a1)), a2, 4, a1);
  if ( v3 )
    ++*(ushort *)(dword_21BFAFC + 2 * v2);
  else
    Function_2018134();
  return v3;
}

//----- (02018184) --------------------------------------------------------
int __fastcall malloc2(uint a1, int a2)
{
  uint v2
  int v3

  v2 = a1;
  v3 = 0;
  if ( a1 < (ushort)word_21BFB04 )
    v3 = Function_20180f0(*(uint *)(dword_21BFAF0 + 4 * *(uchar *)(dword_21BFB00 + a1)), a2, -4, a1);
  if ( v3 )
    ++*(ushort *)(dword_21BFAFC + 2 * v2);
  else
    Function_2018134();
  return v3;
}

//----- (020181C4) --------------------------------------------------------
int __fastcall free(int a1)
{
  int v1
  uint v2
  int v3
  int v4
  int v5
  int v6
  int v7

  v1 = a1;
  v2 = *(uint *)(a1 - 4) & 0xFF;
  if ( v2 >= (ushort)word_21BFB04 )
    return ErrorHandler();
  v3 = *(uint *)(dword_21BFAF0 + 4 * *(uchar *)(dword_21BFB00 + v2));
  if ( !v3 )
    ErrorHandler();
  v4 = 2 * v2;
  if ( !*(ushort *)(dword_21BFAFC + 2 * v2) )
    Function_201833c();
  if ( !*(ushort *)(dword_21BFAFC + v4) )
    ErrorHandler();
  --*(ushort *)(dword_21BFAFC + v4);
  v5 = OS_DisableInterrupts();
  Function_20a55d8(v3, v1 - 16, v6, v7);
  return OS_RestoreInterrupts(v5);
}

//----- (02018238) --------------------------------------------------------
uint __fastcall Function_2018238(uint a1, int a2)
{
  uint v2
  int v3
  int v4
  int v5
  int v6
  int v7
  uint result

  v2 = a1;
  v3 = a2;
  if ( OS_GetProcMode() == 18 )
    ErrorHandler();
  if ( v2 >= (ushort)word_21BFB04 )
    return ErrorHandler();
  v6 = *(uint *)(dword_21BFAF0 + 4 * *(uchar *)(dword_21BFB00 + v2));
  if ( !v6 )
    ErrorHandler();
  if ( (*(uint *)(v3 - 4) & 0xFF) != v2 )
    ErrorHandler();
  Function_20a55d8(v6, v3 - 16, v4, v5);
  v7 = 2 * v2;
  if ( !*(ushort *)(dword_21BFAFC + 2 * v2) )
    ErrorHandler();
  result = *(ushort *)(dword_21BFAFC + v7) - 1;
  *(ushort *)(dword_21BFAFC + v7) = result;
  return result;
}

//----- (020182A4) --------------------------------------------------------
int __fastcall Function_20182a4(uint a1)
{
  if ( a1 < (ushort)word_21BFB04 )
    return Function_20a5614(*(uint *)(dword_21BFAF0 + 4 * *(uchar *)(dword_21BFB00 + a1)));
  ErrorHandler();
  return 0;
}

//----- (020182CC) --------------------------------------------------------
uint __fastcall Function_20182cc(uint *a1, uint a2, int a3)
{
  uint result

  if ( a2 >= (ushort)word_21BFB04 )
    result = ErrorHandler();
  else
    result = (uint)Function_20a5a14(
                             a1,
                             *(uint *)(dword_21BFAF0 + 4 * *(uchar *)(dword_21BFB00 + a2)),
                             a3);
  return result;
}

//----- (020182F0) --------------------------------------------------------
uint __fastcall Function_20182f0(int a1, int a2)
{
  int v2
  int v3
  int v4
  uint v5
  uint result

  v2 = a1;
  v3 = a2;
  if ( OS_GetProcMode() == 18 )
    ErrorHandler();
  v5 = v3 + 16;
  if ( Function_20a564c_LoadSub0xc(v2 - 16) < v5 )
    result = ErrorHandler();
  else
    result = Function_20a5478(
               *(uint *)(dword_21BFAF0 + 4 * *(uchar *)(dword_21BFB00 + (*(uint *)(v2 - 4) & 0xFF))),
               v2 - 16,
               v5,
               v4);
  return result;
}