//----- (0225C700) --------------------------------------------------------
int __fastcall Function_225c700(uchar *a1, int a2, int a3, char a4, int a5)
{
  uchar *v5;
  uchar *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int result;
  int v12;
  int v13;
  char v14;

  v5 = a1;
  v12 = a2;
  v13 = a3;
  v14 = a4;
  v6 = a1;
  v7 = 16;
  do
  {
    *v6++ = 0;
    --v7;
  }
  while ( v7 );
  a1[8] = Function_2032e64();
  v8 = 0;
  v9 = Function_203608c();
  v10 = 0;
  do
  {
    if ( Function_2032ee8(v10) )
    {
      if ( v9 == v10 )
        v5[9] = v8;
      v5[v8++ + 4] = v10;
    }
    ++v10;
  }
  while ( v10 < 4 );
  if ( v8 != (uchar)v5[8] )
    ErrorHandler();
  if ( !v12 )
    v5[11] = 1;
  *(uint *)v5 = v13;
  v5[10] = v14;
  result = a5;
  *((uint *)v5 + 3) = a5;
  return result;
}

//----- (0225C76C) --------------------------------------------------------
int __fastcall Function_225c76c(int a1, int a2)
{
  int v2;

  v2 = 0;
  if ( (int)*(uchar *)(a1 + 8) <= 0 )
    return 4;
  while ( a2 != *(uchar *)(a1 + v2 + 4) )
  {
    if ( ++v2 >= *(uchar *)(a1 + 8) )
      return 4;
  }
  return v2;
}

//----- (0225C78C) --------------------------------------------------------
int __fastcall Function_225c78c(int a1, uint a2)
{
  int v2;
  uint v3;

  v2 = a1;
  v3 = a2;
  if ( a2 >= *(uchar *)(a1 + 8) )
    ErrorHandler();
  return *(uchar *)(v2 + v3 + 4);
}

//----- (0225C7A4) --------------------------------------------------------
int __fastcall Function_225c7a4(int a1, uint a2)
{
  int result;
  int v3;
  int v4;

  if ( a2 < 4 )
  {
    v3 = *(uint *)(a1 + 12);
    v4 = *(uchar *)(v3 + a2 + 4);
    if ( v4 == -1 )
      result = 0;
    else
      result = *(uchar *)(v3 + v4 + 8);
  }
  else
  {
    if ( a2 >= 4 )
      ErrorHandler();
    result = 0;
  }
  return result;
}

//----- (0225C7CC) --------------------------------------------------------
int __fastcall Function_225c7cc(int a1, uint a2)
{
  int v2;
  int *v3;
  int result;

  v2 = a2;
  v3 = (int *)a1;
  if ( a2 < 4 )
  {
    if ( *(uchar *)(a1 + 11) == 1 )
    {
      if ( Function_225c76c(a1, a2) == *(uchar *)(a1 + 9) )
        result = LoadTrainerDataAdress(*v3);
      else
        result = Function_2032ee8(v2);
    }
    else
    {
      if ( !*(uint *)(a1 + 12) )
        ErrorHandler();
      result = *(uint *)(v3[3] + 4 * v2 + 32);
    }
  }
  else
  {
    if ( a2 >= 4 )
      ErrorHandler();
    result = 0;
  }
  return result;
}

//----- (0225C814) --------------------------------------------------------
int __fastcall Function_225c814(int a1, int a2)
{
  return Function_225d48c(a1, 0, a2);
}

//----- (0225C820) --------------------------------------------------------
int __fastcall Function_225c820(int a1, int a2)
{
  return Function_225d48c(a1, 1, a2);
}

//----- (0225C82C) --------------------------------------------------------
int __fastcall Function_225c82c(int a1, int a2)
{
  return Function_225d48c(a1, 2, a2);
}

//----- (0225C838) --------------------------------------------------------
uint __fastcall Function_225c838(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  Call_RemoveTaskFromTaskList(*(int **)(a1 + 1516));
  Call_RemoveTaskFromTaskList(*(int **)(v1 + 1520));
  Function_225dffc(v1 + 740);
  Function_225e234(v1 + 460);
  v2 = 0;
  if ( (int)*(uchar *)(v1 + 16) > 0 )
  {
    v3 = v1 + 516;
    do
    {
      Function_225dda0(v3);
      ++v2;
      v3 += 56;
    }
    while ( v2 < *(uchar *)(v1 + 16) );
  }
  Function_225d338(v1 + 76);
  Function_225d678(v1);
  Function_225d0d8(v1 + 60);
  Function_225cd10(v1 + 432);
  Function_225d058(v1 + 132);
  Function_225cf84(v1 + 48);
  return free(v1);
}

//----- (0225C8BC) --------------------------------------------------------
BOOL __fastcall Function_225c8bc(uchar *a1)
{
  return *a1 >= 0x10u;
}

//----- (0225C8CC) --------------------------------------------------------
int __fastcall Function_225c8cc(int a1)
{
  int v1;

  v1 = a1;
  if ( *(uchar *)(a1 + 7) != 1 )
    ErrorHandler();
  return *(uchar *)(v1 + 6);
}

//----- (0225C8E0) --------------------------------------------------------
int __fastcall Function_225c8e0(int a1, int a2, int a3)
{
  return Function_225e5a8(a1, a2, 0, a3);
}

//----- (0225C8EC) --------------------------------------------------------
int __fastcall Function_225c8ec(int a1, int a2, int a3)
{
  return Function_225e5a8(a1, a2, 1, a3);
}

//----- (0225C8F8) --------------------------------------------------------
int __fastcall Function_225c8f8(int a1, int a2, int a3)
{
  return Function_225e5a8(a1, a2, 2, a3);
}

//----- (0225C904) --------------------------------------------------------
uint __fastcall Function_225c904(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  Call_RemoveTaskFromTaskList(*(int **)(a1 + 1604));
  Call_RemoveTaskFromTaskList(*(int **)(v1 + 1608));
  Function_225dffc(v1 + 828);
  v2 = 0;
  if ( (int)*(uchar *)(v1 + 20) > 0 )
  {
    v3 = v1 + 604;
    do
    {
      Function_225dda0(v3);
      ++v2;
      v3 += 56;
    }
    while ( v2 < *(uchar *)(v1 + 20) );
  }
  Function_225f270(v1 + 488);
  Function_225e854(v1);
  Function_225d338(v1 + 104);
  Function_225d0d8(v1 + 88);
  Function_225cd10(v1 + 460);
  Function_225d058(v1 + 160);
  Function_225cf84(v1 + 76);
  REG_BLDCNT = 0;
  REG_BLDCNT_SUB = 0;
  Function_201dc3c();
  return free(v1);
}

//----- (0225C9A0) --------------------------------------------------------
int __fastcall Function_225c9a0(int a1)
{
  return *(uchar *)(a1 + 6);
}

//----- (0225C9A4) --------------------------------------------------------
int __fastcall Function_225c9a4(int a1)
{
  return *(uchar *)(a1 + 8);
}

//----- (0225C9A8) --------------------------------------------------------
uint __fastcall Function_225c9a8(uint *a1, uint a2, int a3, int a4)
{
  uint *v4;
  uint v5;
  uint v6;
  uint *v7;
  int v8;
  char *v9;
  int v10;
  uint result;
  uint v12;
  char *v13;
  char v14;
  int v15;
  int v16;
  char v17[4];
  int v18;

  v18 = a4;
  v4 = a1;
  v5 = 0;
  v6 = a2;
  if ( a2 )
  {
    v7 = a1;
    do
    {
      v8 = v5;
      if ( (int)v5 > 0 )
      {
        v9 = &v17[v5];
        do
        {
          v10 = (uchar)*(v9 - 1);
          if ( *v7 <= a1[v10] )
            break;
          --v8;
          *v9-- = v10;
        }
        while ( v8 > 0 );
      }
      v17[v8] = v5++;
      ++v7;
    }
    while ( v5 < v6 );
  }
  result = v6;
  v12 = 0;
  if ( v6 )
  {
    v13 = v17;
    do
    {
      v14 = v12;
      if ( (int)v12 > 0 )
      {
        v15 = (uchar)*(v13 - 1);
        if ( v4[(uchar)*v13] == v4[v15] )
          v14 = *((uchar *)v4 + v15 + 16);
      }
      v16 = (uchar)*v13;
      ++v12;
      ++v13;
      *((uchar *)v4 + v16 + 16) = v14;
      result = v6;
    }
    while ( v12 < v6 );
  }
  return result;
}

//----- (0225CA24) --------------------------------------------------------
int __fastcall Function_225ca24(int result, char a2)
{
  *(uchar *)(result + 6) = a2;
  *(uchar *)(result + 7) = 1;
  return result;
}

//----- (0225CA2C) --------------------------------------------------------
int __fastcall Function_225ca2c(int a1, int a2, int a3)
{
  int v3;
  int result;

  v3 = a1;
  result = *(uchar *)(a1 + 21);
  if ( !result )
    result = Function_225f424(v3 + 488, a2, a3, *(uchar *)(v3 + 20));
  return result;
}

//----- (0225CA44) --------------------------------------------------------
int __fastcall Function_225ca44(int a1)
{
  return Function_225f47c(a1 + 488);
}

//----- (0225CA54) --------------------------------------------------------
int __fastcall Function_225ca54(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = 0;
  if ( *(uint *)(a1 + 12) )
  {
    if ( *(uchar *)(a1 + 8) != Function_2035e18() )
      v2 = 1;
    if ( Function_2038284() == 1 )
      v2 = 1;
    if ( Function_20380e4() >= 2 )
      v2 = 1;
    if ( v2 == 1 )
      *(uint *)(*(uint *)(v1 + 12) + 28) = 1;
    if ( *(uint *)(*(uint *)(v1 + 12) + 28) == 1 )
      v2 = 1;
  }
  return v2;
}

//----- (0225CA98) --------------------------------------------------------
int __fastcall Function_225ca98(int a1)
{
  int v1;

  v1 = a1;
  if ( !*(uint *)(a1 + 12) )
    ErrorHandler();
  if ( *(uint *)(*(uint *)(v1 + 12) + 28) != 1 )
    ErrorHandler();
  if ( Function_2032aac() == 1 )
  {
    Function_2032a70();
    Function_203888c();
  }
  else if ( Function_20382c0() == 1 )
  {
    return 1;
  }
  return 0;
}

//----- (0225CAD4) --------------------------------------------------------
int *__fastcall Function_225cad4(int a1, uint a2)
{
  uint v2;
  int v3;
  int *v4;
  int v5;
  int v6;

  v2 = a2;
  v3 = a1;
  v4 = (int *)malloc(a2, 460);
  Call_FillMemWithValue(v4, 0, 0x1CCu);
  v4[2] = v3;
  v4[3] = (int)LoadFromNARC_8(171, v2, v5, v6);
  Function_225ccd0(v4 + 4, 1, v2);
  v4[10] = Function_225cd54(v4 + 4, v4[3]);
  return v4;
}

//----- (0225CB38) --------------------------------------------------------
uint __fastcall Function_225cb38(int a1)
{
  int v1;
  int *v2;
  int v3;

  v1 = a1;
  v2 = *(int **)(a1 + 44);
  if ( v2 )
  {
    Call_RemoveTaskFromTaskList(v2);
    *(uint *)(v1 + 44) = 0;
  }
  v3 = *(uint *)(v1 + 48);
  if ( v3 )
    Function_2021bd4(v3);
  Function_225fbf0(v1 + 52);
  Function_225cd10(v1 + 16);
  Call_FS_CloseFile(*(int **)(v1 + 12));
  return free(v1);
}

//----- (0225CB74) --------------------------------------------------------
int __fastcall Function_225cb74(int a1)
{
  int *v1;

  v1 = (int *)Function_2009dc8(*(uint *)(a1 + 20), 5000);
  return Function_200a760(v1, 1);
}

//----- (0225CB8C) --------------------------------------------------------
int __fastcall Function_225cb8c(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( *(uint *)(a1 + 44) )
    ErrorHandler();
  *(uint *)(v1 + 44) = AddTaskToTaskList1((int)Function_225fdc8, v1, 0);
  result = 1;
  *(ushort *)(v1 + 4) = 1;
  return result;
}

//----- (0225CBB0) --------------------------------------------------------
int __fastcall Function_225cbb0(int a1)
{
  int v1;

  v1 = a1;
  if ( *(uint *)(a1 + 44) )
    ErrorHandler();
  *(uint *)(v1 + 44) = AddTaskToTaskList1((int)Function_225ff54, v1, 0);
  *(ushort *)(v1 + 4) = 1;
  return Function_2005748(0x5F1u);
}

//----- (0225CBE0) --------------------------------------------------------
BOOL __fastcall Function_225cbe0(int a1)
{
  return *(ushort *)(a1 + 4) == 0;
}

//----- (0225CBF0) --------------------------------------------------------
int __fastcall Function_225cbf0(uint *a1, int a2, int a3, int a4, int a5)
{
  uint *v5;
  int v6;
  long long v7;
  int v8;
  int v9;
  long long v10;
  int result;

  v5 = a1;
  v6 = a3;
  LODWORD(v7) = a4;
  v8 = a2;
  v9 = a4;
  HIDWORD(v7) = a4 >> 31;
  v10 = ll_mul(v7, a5 << 12);
  result = FX_Div(
             (((ll)(int)(v6 - v8 - (ull)((v10 + 2048) >> 12)) << 13) + 2048) >> 12,
             a5 * a5 << 12);
  *v5 = v8;
  v5[1] = v8;
  v5[2] = v9;
  v5[3] = result;
  v5[4] = a5;
  return result;
}

//----- (0225CC4C) --------------------------------------------------------
int __fastcall Function_225cc4c(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  long long v7;

  v2 = a1;
  v3 = a1[4];
  v4 = a2;
  if ( a2 < v3 )
  {
    v5 = 0;
  }
  else
  {
    v4 = v3;
    v5 = 1;
  }
  v6 = (ll_mul((int)v2[2], v4 << 12) + 2048) >> 12;
  v7 = ll_mul((int)v2[3], v4 * v4 << 12);
  *v2 = v2[1] + v6 + FX_Div((v7 + 2048) >> 12, 0x2000);
  return v5;
}

//----- (0225CCB0) --------------------------------------------------------
ushort *__fastcall Function_225ccb0(int a1, short a2)
{
  uint v2;
  ushort *result;
  int i;

  v2 = *(uint *)(a1 + 8);
  result = (ushort *)(a1 + 12);
  for ( i = 0; i < (int)(v2 >> 1); ++result )
  {
    ++i;
    *result += a2;
  }
  return result;
}

//----- (0225CCD0) --------------------------------------------------------
int ***__fastcall Function_225ccd0(int ***a1, int a2, uint a3)
{
  int v3;
  uint v4;
  int *v5;
  int ***v6;
  int **v7;
  int *v8;
  int ***result;
  int ***v10;

  v10 = a1;
  v3 = a2;
  v4 = a3;
  v5 = 0;
  v6 = a1;
  do
  {
    v7 = Function_2009714(v3, v5, v4);
    v5 = (int *)((char *)v5 + 1);
    *v6 = v7;
    ++v6;
  }
  while ( (int)v5 < 4 );
  v8 = (int *)malloc(v4, 56 * v3);
  v10[4] = (int **)v8;
  Call_FillMemWithValue(v8, 0, 56 * v3);
  result = v10;
  v10[5] = (int **)v3;
  return result;
}

//----- (0225CD10) --------------------------------------------------------
uint __fastcall Function_225cd10(int a1)
{
  int v1;
  uint v2;
  int v3;
  int v4;
  int v5;
  int **v6;

  v1 = a1;
  v2 = 0;
  if ( *(uint *)(a1 + 20) )
  {
    v3 = 0;
    do
    {
      v4 = *(uint *)(v1 + 16);
      if ( *(uint *)(v4 + v3) == 1 )
        Function_225ceb8(v1, v4 + v3);
      ++v2;
      v3 += 56;
    }
    while ( v2 < *(uint *)(v1 + 20) );
  }
  v5 = 0;
  v6 = (int **)v1;
  do
  {
    Function_2009754(*v6);
    ++v5;
    ++v6;
  }
  while ( v5 < 4 );
  return free(*(uint *)(v1 + 16));
}

//----- (0225CD54) --------------------------------------------------------
int __fastcall Function_225cd54(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9;
  uint v10;
  int v11;
  int v12;
  uint v13;
  uint *v14;
  int v16;
  int v17;

  v9 = a1;
  v10 = *(uint *)(a1 + 20);
  v11 = 0;
  v16 = a2;
  v17 = a3;
  v12 = a4;
  v13 = 0;
  if ( v10 )
  {
    v14 = *(uint **)(a1 + 16);
    while ( *v14 )
    {
      ++v13;
      v14 += 14;
      if ( v13 >= v10 )
        goto LABEL_6;
    }
    v11 = *(uint *)(a1 + 16) + 56 * v13;
  }
LABEL_6:
  if ( !v11 )
    ErrorHandler();
  Function_225cde0(v9, v11, v16, v17, v12, a5, a6, a7, a8, a9);
  return v11;
}

//----- (0225CDB4) --------------------------------------------------------
int __fastcall Function_225cdb4(int a1, int a2, int a3, int a4, ushort a5, int a6)
{
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v14 = a4;
  v8 = a1 + 20;
  v9 = a3 << 12;
  v10 = a4 << 12;
  v7 = a2;
  v11 = a5;
  v12 = 1;
  v13 = a6;
  return Function_2021b90(&v7);
}

//----- (0225CDE0) --------------------------------------------------------
int __fastcall Function_225cde0(int *a1, uint *a2, int a3, uint a4, int a5, uint a6, uint a7, uint a8, int a9, uint a10)
{
  uint *v10;
  int *v11;
  int v13;
  uint v14;

  v10 = a2;
  v11 = a1;
  v13 = a3;
  v14 = a4;
  if ( *a2 )
    ErrorHandler();
  *v10 = 1;
  v10[1] = Function_2009a4c(*v11, v13, a6, 0, a9, 1, a10);
  v10[2] = Function_2009b04(v11[1], v13, v14, 0, a9, 1, a5, a10);
  v10[3] = Function_2009bc4(v11[2], v13, a7, 0, a9, 2u, a10);
  v10[4] = Function_2009bc4(v11[3], v13, a8, 0, a9, 3u, a10);
  if ( !Function_200a3dc((int *)v10[1]) )
    ErrorHandler();
  Function_2009d4c((int *)v10[1]);
  if ( !Function_200a640((int *)v10[2]) )
    ErrorHandler();
  Function_2009d4c((int *)v10[2]);
  return Function_20093b4((int)(v10 + 5), a9, a9, a9, a9, -1, -1, 0, 1, *v11, v11[1], v11[2], v11[3], 0, 0);
}

//----- (0225CEB8) --------------------------------------------------------
int __fastcall Function_225ceb8(int **a1, uint *a2)
{
  uint *v2;
  int **v3;
  int v4;
  int result;

  v2 = a2;
  v3 = a1;
  if ( *a2 != 1 )
    ErrorHandler();
  *v2 = 0;
  Function_200a4e4((int *)v2[1]);
  Function_200a6dc((int *)v2[2]);
  v4 = 0;
  do
  {
    result = Function_2009d68(*v3, (uint **)v2[1]);
    ++v4;
    ++v2;
    ++v3;
  }
  while ( v4 < 4 );
  return result;
}

//----- (0225CEF0) --------------------------------------------------------
uint __fastcall Function_225cef0(int a1, int *a2, uint *a3, uint a4, uint a5)
{
  int v5;
  uint *v6;
  uint result;
  uint v8;
  uint *v9;
  uint v10;

  v5 = a1;
  v6 = a3;
  v10 = a4;
  SetGraphicsModes(a2);
  *(uint *)v5 = Function_2018340(a5);
  *(uint *)(v5 + 4) = v6;
  *(uint *)(v5 + 8) = v10;
  byte_21BF6E1 = 0;
  Function_201ffe8();
  result = v10;
  v8 = 0;
  if ( v10 )
  {
    v9 = v6;
    do
    {
      Function_20183c4(*(uint **)v5, *v9 & 0xFF, v6 + 1, 0);
      Function_2019690(*v9 & 0xFF, 32, 0, a5);
      Function_2019ebc(*(uint **)v5, *v9 & 0xFF);
      Function_2019184(*(uint *)v5, *v9 & 0xFF, 0, 0);
      Function_2019184(*(uint *)v5, *v9 & 0xFF, 3u, 0);
      result = v10;
      ++v8;
      v6 += 8;
      v9 += 8;
    }
    while ( v8 < v10 );
  }
  return result;
}

//----- (0225CF84) --------------------------------------------------------
uint __fastcall Function_225cf84(int *a1)
{
  int *v1;
  uint v2;
  int v3;

  v1 = a1;
  Function_2019184(*a1, 3u, 3u, 0);
  v2 = 0;
  if ( v1[2] )
  {
    v3 = 0;
    do
    {
      Function_2019044(*v1, *(uint *)(v1[1] + v3) & 0xFF);
      ++v2;
      v3 += 32;
    }
    while ( v2 < v1[2] );
  }
  return free(*v1);
}

//----- (0225CFC0) --------------------------------------------------------
int __fastcall Function_225cfc0(int *a1)
{
  return Function_201c2b8(*a1);
}

//----- (0225CFCC) --------------------------------------------------------
uint __fastcall Function_225cfcc(int **a1, int a2, int a3, int a4, int a5)
{
  int **v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v13;
  int v14;
  int v15;
  int v16;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  Function_20a7944();
  Function_200a784(0, 126, 0, 31, 0, 0x7Eu, 0, 0x1Fu, a5);
  v14 = 0x4000;
  v15 = 0x4000;
  v13 = v7;
  v16 = a5;
  Function_201e88c(&v13, 16, 16);
  Function_201f834(v8, a5);
  Function_201e994();
  Function_201f8e4();
  Function_200966c(1, 16, v9, v10);
  Function_2009704(1);
  *v5 = Function_20095c4(v6, (int)(v5 + 1), a5, v11);
  Function_2039734();
  Function_201ff0c(0x10u, 1);
  return Function_201ff74(0x10u, 1);
}

//----- (0225D058) --------------------------------------------------------
int *__fastcall Function_225d058(int **a1)
{
  Function_2021964(*a1);
  Function_201e958();
  Function_201f8b4();
  return Function_200a878();
}

//----- (0225D070) --------------------------------------------------------
int __fastcall Function_225d070(int *a1)
{
  return Function_20219f8(*a1);
}

//----- (0225D07C) --------------------------------------------------------
int Function_225d07c()
{
  return Function_200a858();
}

//----- (0225D084) --------------------------------------------------------
int __fastcall Function_225d084(int *a1, uint a2)
{
  uint v2;
  int *v3;

  v2 = a2;
  v3 = a1;
  *a1 = LoadFromMsgNARC(0, 26, 411, a2);
  v3[1] = (int)Function_200b368(8u, 64, v2);
  v3[2] = Function_2023790(128, v2);
  v3[3] = Function_2023790(128, v2);
  LoadFromNARC_PlFont2(0, 384, v2);
  return LoadFromNARC_PlFont2(4u, 384, v2);
}

//----- (0225D0D8) --------------------------------------------------------
ushort *__fastcall Function_225d0d8(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  Function_20237bc_FreeMsg(*(uint *)(a1 + 12), a2);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 8), v3);
  Function_200b3f0(*(uint **)(v2 + 4), v4);
  return Function_200b190(*(ushort **)v2);
}

//----- (0225D0F8) --------------------------------------------------------
uint __fastcall Function_225d0f8(int a1, int a2)
{
  return Function_200c41c(*(uint **)(a1 + 4), a2);
}

//----- (0225D104) --------------------------------------------------------
uint __fastcall Function_225d104(int a1)
{
  return Function_200b498(*(uint *)(a1 + 4), 0);
}

//----- (0225D114) --------------------------------------------------------
ushort *__fastcall Function_225d114(int a1, uint a2)
{
  return Function_200bdd0(*(uint *)(a1 + 4), 0, a2);
}

//----- (0225D124) --------------------------------------------------------
ushort *__fastcall Function_225d124(int a1, int a2, uint a3)
{
  return Function_200be08(*(uint *)(a1 + 4), 0, a2, a3);
}

//----- (0225D138) --------------------------------------------------------
uint __fastcall Function_225d138(int a1, int a2, int a3)
{
  return Function_200b60c(*(uint *)(a1 + 4), 0, a2, a3, 1, 1);
}

//----- (0225D154) --------------------------------------------------------
uint __fastcall Function_225d154(int a1, int a2)
{
  return Function_200b60c(*(uint *)(a1 + 4), 0, a2, 2, 1, 1);
}

//----- (0225D170) --------------------------------------------------------
ushort *__fastcall Function_225d170(int a1, uint a2)
{
  return Function_200c120(*(uint *)(a1 + 4), 1u, a2);
}

//----- (0225D180) --------------------------------------------------------
ushort *__fastcall Function_225d180(int a1, uint a2)
{
  return Function_200c0b0(*(uint *)(a1 + 4), 0, a2);
}

//----- (0225D190) --------------------------------------------------------
int __fastcall Function_225d190(int a1, int a2, uint a3)
{
  int v3;
  int v4;

  v3 = a1;
  v4 = a2;
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)a1, a3, *(ushort **)(a1 + 12));
  return Function_200c388(*(uint **)(v3 + 4), v4, *(uint *)(v3 + 12));
}

//----- (0225D1AC) --------------------------------------------------------
int __fastcall Function_225d1ac(int a1, int a2)
{
  return Function_225d254(a1, a2);
}

//----- (0225D1C8) --------------------------------------------------------
int __fastcall Function_225d1c8(int a1, uint a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a3;
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)a1, a2, *(ushort **)(a1 + 12));
  Function_200c388(*(uint **)(v3 + 4), *(uint *)(v3 + 8), *(uint *)(v3 + 12));
  Function_2002d7c(0, *(uint *)(v3 + 8), 0);
  v5 = *(uint *)(v3 + 8);
  return Function_201d78c(v4, 0);
}

//----- (0225D218) --------------------------------------------------------
int __fastcall Function_225d218(int a1, uint a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;

  v4 = a1;
  v5 = a3;
  v6 = a4;
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)a1, a2, *(ushort **)(a1 + 12));
  Function_200c388(*(uint **)(v4 + 4), v6, *(uint *)(v4 + 12));
  return Function_201d78c(v5, 1);
}

//----- (0225D254) --------------------------------------------------------
int __fastcall Function_225d254(int a1, uint a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a3;
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)a1, a2, *(ushort **)(a1 + 12));
  Function_200c388(*(uint **)(v3 + 4), *(uint *)(v3 + 8), *(uint *)(v3 + 12));
  v5 = *(uint *)(v3 + 8);
  return Function_201d78c(v4, 0);
}

//----- (0225D290) --------------------------------------------------------
int __fastcall Function_225d290(int a1, uint **a2, int a3, int a4, uint a5)
{
  uint **v5;
  ushort *v6;
  uchar v7;
  int v8;
  int v9;
  int v10;
  uchar v11;
  char v12;
  int result;
  int v14;
  int v15;

  v14 = a1;
  v5 = a2;
  v15 = a4;
  v6 = (ushort *)LoadPlayerDataAdress(a3);
  v7 = Function_2027b50(v6);
  Function_20959f4(1);
  Function_200dd0c(*v5, 2u, 1, 13, v7, a5);
  Function_200dd0c(*v5, 4u, 1, 13, v7, a5);
  v8 = v14;
  v9 = 0;
  v10 = v14;
  do
  {
    if ( v9 )
    {
      v11 = 4;
      v12 = 1;
    }
    else
    {
      v11 = 2;
      v12 = 19;
    }
    Function_201a7e8(*v5, v8, v11, 2, v12, 0x1Bu, 4u, 12, 31);
    Function_201ada4_ClearTextBox(v8, 0);
    *(uint *)(v10 + 36) = Function_2023790(128, a5);
    ++v9;
    v8 += 16;
    v10 += 4;
  }
  while ( v9 < 2 );
  result = v14;
  *(uint *)(v14 + 52) = v15;
  return result;
}

//----- (0225D338) --------------------------------------------------------
int __fastcall Function_225d338(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  v4 = a1;
  do
  {
    Function_225d400(v1, v2);
    Function_20237bc_FreeMsg(*(uint *)(v3 + 36), v5);
    Function_201a8fc(v4);
    ++v2;
    v3 += 4;
    v4 += 16;
  }
  while ( v2 < 2 );
  return Function_2095a24();
}

//----- (0225D368) --------------------------------------------------------
int __fastcall Function_225d368(int a1, int a2, uint a3, int a4)
{
  int v4;
  uint v5;
  int v6;
  short *v7;
  uint v8;
  int v10;
  int v11;
  int v12;

  v4 = a1;
  v10 = a2;
  v5 = a3;
  v6 = a4;
  if ( *(uint *)(a1 + 52) == 1 )
  {
    v7 = &word_2260234;
    v8 = 0;
    do
    {
      if ( v5 == (ushort)*v7 )
        v5 = (ushort)v7[1];
      ++v8;
      v7 += 2;
    }
    while ( v8 < 0x14 );
  }
  v11 = a1 + 32;
  v12 = 2 * a4;
  if ( Function_201d724(*(ushort *)(a1 + 32 + 2 * a4) & 0xFF) )
    Call_RemoveTextInterpreterTaskFromTaskList(*(ushort *)(v11 + v12) & 0xFF);
  Function_225d474(v4, v6);
  Function_201ada4_ClearTextBox(v4 + 16 * v6, 15);
  *(ushort *)(v11 + v12) = Function_225d218(v10, v5, v4 + 16 * v6, *(uint *)(v4 + 4 * v6 + 36));
  Function_200e060(v4 + 16 * v6, 1, 1, 0xDu);
  return Function_201a9a4(v4 + 16 * v6);
}

//----- (0225D400) --------------------------------------------------------
int __fastcall Function_225d400(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = a2;
  Function_225d474(a1, a2);
  if ( Function_201d724(*(ushort *)(v2 + 32 + 2 * v3) & 0xFF) )
    Call_RemoveTextInterpreterTaskFromTaskList(*(ushort *)(v2 + 32 + 2 * v3) & 0xFF);
  v4 = 16 * v3;
  Function_200e084(v2 + v4, 1);
  return Function_201ad10(v2 + v4);
}

//----- (0225D43C) --------------------------------------------------------
BOOL __fastcall Function_225d43c(int a1, int a2)
{
  return Function_201d724(*(ushort *)(a1 + 2 * a2 + 32) & 0xFF) == 0;
}

//----- (0225D458) --------------------------------------------------------
int __fastcall Function_225d458(int result, int a2)
{
  int v2;
  int v3;

  v2 = result + 44;
  v3 = 4 * a2;
  if ( !*(uint *)(result + 44 + 4 * a2) )
  {
    result = Function_200e7fc((int *)(result + 16 * a2), 1);
    *(uint *)(v2 + v3) = result;
  }
  return result;
}

//----- (0225D474) --------------------------------------------------------
int __fastcall Function_225d474(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = 4 * a2;
  v3 = a1 + 44;
  result = *(uint *)(a1 + 44 + 4 * a2);
  if ( result )
  {
    Function_200ebc8(result);
    result = 0;
    *(uint *)(v3 + v2) = 0;
  }
  return result;
}

//----- (0225D48C) --------------------------------------------------------
int __fastcall Function_225d48c(char *a1, short a2, uint a3)
{
  short v3;
  char *v4;
  uint v5;
  int v6;
  uchar *v7;
  int v8;
  char v9;
  int v10;
  int v11;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  Function_2004550(0x13u, 0x4BBu);
  v6 = malloc(v5, 1524);
  Call_FillMemWithValue((int *)v6, 0, 0x5F4u);
  v7 = (uchar *)(v6 + 8);
  v8 = 16;
  do
  {
    v9 = *v4++;
    *v7++ = v9;
    --v8;
  }
  while ( v8 );
  *(ushort *)(v6 + 4) = v3;
  REG_BLDCNT = 0;
  REG_BLDCNT_SUB = 0;
  REG_DISPCNT &= 0xFFFF1FFF;
  REG_DISPCNT_SUB &= 0xFFFF1FFF;
  GX_SetBanks(dword_22601B4);
  *(ushort *)(v6 + 2) = v5;
  Function_2260060(v6);
  Function_225e0f8(v6 + 24, v6 + 8);
  Function_225cef0(v6 + 48, dword_226018C, &dword_2260238[19], 5u, v5);
  Function_225cfcc((int **)(v6 + 132), 16, 1, 1, v5);
  Function_225ccd0((int ***)(v6 + 432), 1, v5);
  Function_225d084((int *)(v6 + 60), v5);
  Function_225d5bc(v6, v5);
  v10 = Function_225c78c(v6 + 8, *(uchar *)(v6 + 17));
  v11 = Function_225c7a4(v6 + 8, v10);
  Function_225d290(v6 + 76, (uint **)(v6 + 48), *(uint *)(v6 + 8), v11, v5);
  *(uint *)(v6 + 1516) = AddTaskToTaskList1((int)Function_225d688, v6, 0);
  *(uint *)(v6 + 1520) = AddTaskToTaskList3((int)Function_225da0c, v6, 0);
  if ( *(uchar *)(v6 + 18) )
    ((void (__fastcall *)(uint))dword_21D1E74[0])(v5);
  return v6;
}

//----- (0225D5BC) --------------------------------------------------------
uint __fastcall Function_225d5bc(int a1, uint a2, int a3, int a4)
{
  int v4;
  int v5;
  int *v6;

  v4 = a1;
  v5 = a2;
  v6 = LoadFromNARC_8(171, a2, a3, a4);
  Function_2007130((int)v6, 4u, 0, 0, 288, v5);
  Function_20070e8((int)v6, 6u, *(uint **)(v4 + 48), 1u, 0, 0, 0, v5);
  *(uint *)(v4 + 508) = Function_20071d0((int)v6, 9u, 0, (uint *)(v4 + 512), v5);
  Function_200710c((int)v6, 8u, *(uint **)(v4 + 48), 3u, 0, 0, 0, v5);
  Function_225e550(v6, *(ushort *)(v4 + 4), v5);
  *(uint *)(v4 + 456) = Function_225cd54(v4 + 432, (int)v6, 11, 5, 12, 13, 14, 5000, v5);
  Function_225e1a4(v4 + 460, v4 + 48, v4 + 60, *(ushort *)(v4 + 4), v6, v5);
  return Call_FS_CloseFile(v6);
}

//----- (0225D678) --------------------------------------------------------
uint __fastcall Function_225d678(int a1)
{
  return free(*(uint *)(a1 + 508));
}

//----- (0225D688) --------------------------------------------------------
int __fastcall Function_225d688(int a1, uchar *a2)
{
  uchar *v2;
  uint v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  uchar *v23;
  int v24;
  int v25;
  int v26;
  int v27;

  v2 = a2;
  v3 = *a2;
  if ( v3 <= 0x10 )
    JUMPOUT(__CS__, (char *)&off_225D6A2 + *((short *)&off_225D6A2 + v3) + 2);
  switch ( (uchar)a2 )
  {
    case 0:
      Function_200f174(3u, 1, 1, 0xFFFF, 6, 1, *((ushort *)a2 + 1));
      Function_225e244(v2 + 460, v2 + 48, *((ushort *)v2 + 1));
      ++*v2;
      break;
    case 1:
      Function_225e31c(a2 + 460, a2 + 48);
      if ( Function_200f2ac() == 1 )
        ++*v2;
      break;
    case 2:
      if ( Function_225e31c(a2 + 460, a2 + 48) == 1 )
        ++*v2;
      break;
    case 3:
      Function_225d368((int)(a2 + 76), (int)(a2 + 60), 0, 0);
      ++*v2;
      break;
    case 4:
      if ( Function_225d43c((int)(a2 + 76), 0) )
      {
        ++*v2;
        v2[1] = 64;
      }
      break;
    case 5:
      if ( a2[1] )
      {
        if ( !--a2[1] )
        {
          Function_225d400((int)(a2 + 76), 0);
          Function_225e2d4(v2 + 460, v2 + 48);
          ++*v2;
        }
      }
      break;
    case 6:
      if ( Function_225e438(a2 + 460, a2 + 48) == 1 )
        ++*v2;
      break;
    case 7:
      Function_225df7c(a2 + 740, a2 + 48, *((ushort *)a2 + 1));
      v4 = Function_225e14c(v2 + 8, v2 + 24);
      v5 = v2[16];
      v6 = 0;
      v24 = v4;
      if ( v5 > 0 )
      {
        v7 = (int)(v2 + 516);
        v25 = (int)(v2 + 8);
        v23 = v2;
        v8 = 0;
        v26 = (int)(v2 + 60);
        do
        {
          v9 = v2[17];
          v10 = *((uint *)v2 + 114);
          v11 = *((ushort *)v2 + 1);
          v12 = *((ushort *)v2 + 2);
          v13 = *((uint *)v2 + 128);
          Function_225dac0(v7);
          v14 = Function_225c78c(v25, v6);
          v15 = Function_225c7a4(v25, v14);
          Function_225dc44(v7, v26, *((uint *)v23 + 8), 8, 0, v15);
          Function_225dca0(v7, v26, v24, v2[v6 + 24], v2[v6 + 28], 8);
          Function_225ddd4(v7, -8, (short)v8);
          v5 = v2[16];
          ++v6;
          v7 += 56;
          v23 += 4;
          v8 += 3;
        }
        while ( v6 < v5 );
      }
      v16 = 0;
      if ( v5 > 0 )
      {
        v17 = (int)(v2 + 516);
        do
        {
          Function_225dd80(v17, v2 + 48);
          Function_225dd94(v17);
          ++v16;
          v17 += 56;
        }
        while ( v16 < v2[16] );
      }
      v2[1] = 92;
      ++*v2;
      break;
    case 8:
      if ( Function_225da5c(a2) == 1 )
        ++*v2;
      break;
    case 9:
      if ( !--a2[1] )
      {
        ++*a2;
        Function_20364f0(129);
        if ( v2[18] )
          ((void (*)(void))dword_21D1F18[0])();
      }
      break;
    case 0xA:
      if ( Function_2036540(129) )
        ++*v2;
      break;
    case 0xB:
      v18 = 0;
      if ( (int)a2[16] > 0 )
      {
        v19 = 0;
        v20 = (int)(a2 + 516);
        do
        {
          Function_225de38(v20, (short)v19);
          ++v18;
          v19 += 3;
          v20 += 56;
        }
        while ( v18 < v2[16] );
      }
      ++*v2;
      v2[1] = 8;
      break;
    case 0xC:
      --a2[1];
      Function_225da5c(a2);
      if ( !v2[1] )
        ++*v2;
      break;
    case 0xD:
      Function_200f174(3u, 0, 1, 0, 6, 1, *((ushort *)a2 + 1));
      Function_225da5c(v2);
      if ( !v2[17] )
      {
        v21 = *((ushort *)v2 + 2);
        if ( *((ushort *)v2 + 2) )
        {
          if ( v21 == 1 )
          {
            v27 = Function_225da2c(dword_22600C8, 2);
          }
          else if ( v21 == 2 )
          {
            v27 = Function_225da2c(&dword_22600C8[1], 3);
          }
        }
        else
        {
          v27 = Function_225da2c(&dword_22600C8[2], 3);
        }
        Function_20359dc(26, (int)&v27, 4);
      }
      ++*v2;
      break;
    case 0xE:
      Function_225da5c(a2);
      if ( Function_200f2ac() == 1 )
      {
        Function_225dffc(v2 + 740);
        ++*v2;
      }
      break;
    case 0xF:
      if ( a2[7] == 1 )
        *a2 = v3 + 1;
      break;
    default:
      break;
  }
  Function_225d070((int *)v2 + 33);
  Function_201c63c(*((uint *)v2 + 12), 3, 4u, 2);
  return Function_201c63c(*((uint *)v2 + 12), 5, 4u, 2);
}

//----- (0225DA0C) --------------------------------------------------------
int __fastcall Function_225da0c(int a1, int a2)
{
  int v2;

  v2 = a2;
  Function_225cfc0((int *)(a2 + 48));
  Function_225d07c();
  return Function_225e08c(v2 + 740);
}

//----- (0225DA2C) --------------------------------------------------------
int __fastcall Function_225da2c(int a1, uint a2)
{
  int v2;
  uint v3;
  int v4;
  uint v5;
  uint v6;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = Function_201d35c();
  u32_div_f(v4, 100);
  v6 = 0;
  result = 0;
  if ( v3 )
  {
    while ( 1 )
    {
      v6 += *(uchar *)(v2 + result);
      if ( v6 > v5 )
        break;
      if ( ++result >= v3 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    ErrorHandler();
    result = v3 - 1;
  }
  return result;
}

//----- (0225DA5C) --------------------------------------------------------
int __fastcall Function_225da5c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v7;
  int v8;

  v1 = a1;
  v7 = 1;
  v8 = 0;
  if ( (int)*(uchar *)(a1 + 16) > 0 )
  {
    v2 = a1 + 516;
    v3 = a1;
    v4 = a1 + 516;
    do
    {
      if ( *(uint *)(v3 + 532) )
      {
        v5 = Function_225de70(v2);
        Function_225e028(v1 + 740, v4);
        if ( !v5 )
          v7 = 0;
      }
      else
      {
        v7 = 0;
      }
      v3 += 56;
      v2 += 56;
      v4 += 56;
      ++v8;
    }
    while ( v8 < *(uchar *)(v1 + 16) );
  }
  return v7;
}

//----- (0225DAC0) --------------------------------------------------------
int __fastcall Function_225dac0(int a1, int a2, int a3, ushort *a4, uint **a5, uint a6, uint a7, int *a8, int a9, int a10)
{
  int v10;
  ushort *v11;
  int v12;
  int v13;
  uint v14;
  int v15;
  int v16;
  int result;
  int v18;

  v10 = a1;
  v11 = a4;
  v18 = a2;
  if ( !a3 )
  {
LABEL_4:
    v12 = Function_225df44(a2, a6, a7);
    goto LABEL_11;
  }
  if ( a3 != 1 )
  {
    if ( a3 != 2 )
    {
      v12 = a6;
      goto LABEL_11;
    }
    goto LABEL_4;
  }
  if ( a7 <= a6 )
  {
    if ( a7 == a6 )
      v12 = 0;
    else
      v12 = a6;
  }
  else
  {
    v12 = a6 + 1;
  }
LABEL_11:
  Function_2019060(1u, 2);
  Function_2019060(0, 1);
  v13 = *((uchar *)&dword_22601F4[3 * v18 + 1] + v12);
  Function_201a7e8(*a5, v10, 0, 5, v13 + 1, 0x1Au, 4u, 12, 104 * a6 + 513);
  Function_201ada4_ClearTextBox(v10, 0);
  Function_20198e8(
    (int)*a5,
    1,
    0,
    v13,
    0x20u,
    6u,
    (int)(v11 + 6),
    0,
    *((uchar *)&dword_22601F4[3 * v18 + 2] + a6),
    (uint)*v11 << 21 >> 24,
    (uint)v11[1] << 21 >> 24);
  v14 = *((uchar *)&dword_22601F4[3 * v18 + 3] + v12);
  v15 = Function_225cdb4(a9, *a8, dword_226015C[v14] & 0xFF, (SHIWORD(dword_226015C[v14]) + 8 * v13) & 0xFF, 0, a10);
  *(uint *)(v10 + 16) = v15;
  Function_2021d6c(v15, v14);
  Function_2021ef0(*(uint *)(v10 + 16), a6);
  Function_2021cac(*(uint *)(v10 + 16), 0);
  Function_2021cc8(*(uint *)(v10 + 16), 1);
  v16 = Function_225cdb4(a9, *a8, 24, (8 * v13 + 21) & 0xFF, 0, a10);
  *(uint *)(v10 + 20) = v16;
  Function_2021d6c(v16, 0);
  Function_2021cac(*(uint *)(v10 + 20), 0);
  *(uchar *)(v10 + 26) = a6;
  result = v18;
  *(uchar *)(v10 + 27) = v12;
  *(ushort *)(v10 + 24) = v18;
  return result;
}

//----- (0225DC44) --------------------------------------------------------
int __fastcall Function_225dc44(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int v7;
  int result;

  v6 = a2;
  v7 = a1;
  Function_225d104(a2);
  if ( a6 == 1 )
    result = Function_225d254(v6, 0xAu, v7);
  else
    result = Function_225d1ac(v6, 10);
  return result;
}

//----- (0225DCA0) --------------------------------------------------------
int __fastcall Function_225dca0(int a1, int a2, int a3, uint a4, uint a5)
{
  int v5;
  uint v6;
  int result;

  v5 = a2;
  v6 = a4;
  if ( a3 )
  {
    if ( a4 )
    {
      Function_225d0f8(a2, a2);
      Function_225d114(v5, v6);
      result = Function_225d1ac(v5, 11);
    }
  }
  else if ( a4 )
  {
    Function_225d0f8(a2, a2);
    Function_225d124(v5, v6, a5);
    result = Function_225d1ac(v5, 12);
  }
  return result;
}

//----- (0225DD0C) --------------------------------------------------------
uint __fastcall Function_225dd0c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_2021cac(*(uint *)(a1 + 20), 1);
  Function_2021d6c(*(uint *)(v2 + 20), v3 + 4);
  return Function_2021cc8(*(uint *)(v2 + 20), 1);
}

//----- (0225DD2C) --------------------------------------------------------
int __fastcall Function_225dd2c(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int v7;
  int result;

  v6 = a2;
  v7 = a1;
  Function_225d138(a2, a3, a6);
  if ( a6 == 5 )
    result = Function_225d1c8(v6, 0xEu, v7);
  else
    result = Function_225d1c8(v6, 0xDu, v7);
  return result;
}

//----- (0225DD80) --------------------------------------------------------
int __fastcall Function_225dd80(int a1, int *a2)
{
  int *v2;

  v2 = a2;
  Function_201a9a4(a1);
  return Function_201c3c0(*v2, 1);
}

//----- (0225DD94) --------------------------------------------------------
uint __fastcall Function_225dd94(int a1)
{
  return Function_2021cac(*(uint *)(a1 + 16), 1);
}

//----- (0225DDA0) --------------------------------------------------------
uint __fastcall Function_225dda0(int a1)
{
  int v1;
  int v2;
  int v3;
  uint result;

  v1 = a1;
  v2 = *(uint *)(a1 + 16);
  if ( v2 )
  {
    Function_2021bd4(v2);
    *(uint *)(v1 + 16) = 0;
  }
  v3 = *(uint *)(v1 + 20);
  if ( v3 )
  {
    Function_2021bd4(v3);
    *(uint *)(v1 + 20) = 0;
  }
  result = Function_201a7cc(v1);
  if ( result == 1 )
    result = Function_201a8fc(v1);
  return result;
}

//----- (0225DDD4) --------------------------------------------------------
int __fastcall Function_225ddd4(int a1, int a2, short a3)
{
  int v3;
  short v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v3 = a1;
  v4 = a3;
  if ( a2 <= 0 )
  {
    v7 = fflt(a2 << 12);
    v6 = fsub(v7, 1056964608);
  }
  else
  {
    v5 = fflt(a2 << 12);
    v6 = fadd(0x3F000000u, v5);
  }
  v8 = ffix(v6);
  Function_225cbf0((uint *)(v3 + 28), -1044480, v8, 114688, 8);
  *(ushort *)(v3 + 48) = 0;
  *(ushort *)(v3 + 50) = v4;
  *(uint *)(v3 + 52) = 1382;
  return Function_225debc(v3, -(*(uint *)(v3 + 28) >> 12));
}

//----- (0225DE38) --------------------------------------------------------
int __fastcall Function_225de38(int a1, short a2)
{
  int v2;
  short v3;

  v2 = a1;
  v3 = a2;
  Function_225cbf0((uint *)(a1 + 28), *(uint *)(a1 + 28), -1044480, 0, 8);
  *(ushort *)(v2 + 48) = 0;
  *(ushort *)(v2 + 50) = v3;
  *(uint *)(v2 + 52) = 1383;
  return Function_225debc(v2, -(*(uint *)(v2 + 28) >> 12));
}

//----- (0225DE70) --------------------------------------------------------
int __fastcall Function_225de70(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  v2 = *(short *)(a1 + 50);
  if ( v2 > 0 )
  {
    *(ushort *)(v1 + 50) = v2 - 1;
    result = 0;
  }
  else
  {
    if ( !*(ushort *)(v1 + 48) )
      Function_2005748(*(uint *)(v1 + 52) & 0xFFFF);
    v3 = Function_225cc4c((uint *)(v1 + 28), (short)++*(ushort *)(v1 + 48));
    Function_225debc(v1, -(*(uint *)(v1 + 28) >> 12));
    result = v3;
  }
  return result;
}

//----- (0225DEBC) --------------------------------------------------------
int __fastcall Function_225debc(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v13;
  int v14;
  int v15;

  v15 = a4;
  v4 = a1;
  v5 = a2;
  v6 = *(uchar *)(a1 + 27);
  v7 = 3 * (*(ushort *)(a1 + 24) - 1);
  v8 = *((uchar *)&dword_22601F4[v7 + 6] + v6);
  v9 = v8;
  v10 = SHIWORD(dword_226015C[v8]) + 8 * *((uchar *)&dword_22601F4[v7 + 4] + v6);
  v13 = ((dword_226015C[v9] & 0xFF) + v5) << 12;
  v14 = (uchar)v10 << 12;
  Function_2021c50(*(uint **)(v4 + 16), &v13);
  v11 = (8
       * *((uchar *)&dword_22601F4[3 * (*(ushort *)(v4 + 24) - 1) + 4]
         + *(uchar *)(v4 + 27))
       + 21) & 0xFF;
  v13 = (v5 + 24) << 12;
  v14 = v11 << 12;
  return Function_2021c50(*(uint **)(v4 + 20), &v13);
}

//----- (0225DF44) --------------------------------------------------------
int __fastcall Function_225df44(uint a1, int a2, int a3, uint a4)
{
  uint v4;
  uint v5;
  int *v6;
  int v7;
  int result;

  v4 = a1;
  v5 = 0;
  if ( a1 )
  {
    v6 = &dword_226015C[a1 + 4];
    do
    {
      v7 = *((uchar *)v6 - 4);
      if ( a2 == v7 )
        a4 = v5;
      if ( a3 == v7 )
        a1 = v5;
      ++v5;
      v6 = (int *)((char *)v6 + 1);
    }
    while ( v5 < v4 );
  }
  result = a4 - a1;
  if ( result < 0 )
    result += v4;
  return result;
}

//----- (0225DF7C) --------------------------------------------------------
int __fastcall Function_225df7c(int a1, int *a2, uint a3)
{
  int v3;
  int *v4;
  int v5;
  int v6;
  uint v8;

  v3 = a1;
  v4 = a2;
  v8 = a3;
  if ( *(uint *)(a1 + 772) )
    ErrorHandler();
  *(uint *)v3 = v4;
  Function_2019184(*v4, 0, 0, -255);
  Function_2019184(**(uint **)v3, 1u, 0, -255);
  v5 = 0;
  v6 = v3 + 4;
  do
  {
    MIi_CpuClear16(65281, v6, 384);
    ++v5;
    v6 += 384;
  }
  while ( v5 < 2 );
  *(uint *)(v3 + 772) = Function_2013b10(v8, v3 + 4, v3 + 388);
  Function_2013b80(*(uint *)(v3 + 772), 0);
  return Function_20177bc((int (__fastcall *)(uint))Function_225e0ac, v3);
}

//----- (0225DFFC) --------------------------------------------------------
int __fastcall Function_225dffc(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = *(uint *)(a1 + 772);
  if ( result )
  {
    Function_20177bc(0, 0);
    Function_2013b40(*(uint *)(v1 + 772));
    result = 772;
    *(uint *)(v1 + 772) = 0;
  }
  return result;
}

//----- (0225E028) --------------------------------------------------------
uint __fastcall Function_225e028(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v7;

  v2 = a2;
  v7 = a1;
  if ( !*(uint *)(a1 + 772) )
    ErrorHandler();
  v3 = Function_2013b54(*(uint *)(v7 + 772));
  v4 = 0;
  do
  {
    v5 = v4++
       - 1
       + 8
       * *((uchar *)&dword_22601F4[3 * *(ushort *)(v2 + 24) + 1] + *(uchar *)(v2 + 27));
    *(ushort *)(v3 + 2 * (v5 + (v5 < 0 ? 0xC0 : 0))) = *(uint *)(v2 + 28) >> 12;
  }
  while ( v4 < 48 );
  return Function_2013b80(*(uint *)(v7 + 772), 1);
}

//----- (0225E08C) --------------------------------------------------------
int __fastcall Function_225e08c(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = *(uint *)(a1 + 772);
  if ( result )
  {
    Function_2013b94(result);
    result = Function_2013b80(*(uint *)(v1 + 772), 0);
  }
  return result;
}

//----- (0225E0AC) --------------------------------------------------------
void __fastcall Function_225e0ac(int a1)
{
  int **v1;
  int v2;
  int v3;
  int v4;

  v1 = (int **)a1;
  v2 = (ushort)REG_VCOUNT;
  if ( (int)(ushort)REG_VCOUNT < 192 )
  {
    v3 = Function_2013b68(*(uint *)(a1 + 772));
    if ( REG_DISPSTAT & 2 )
    {
      v4 = 2 * v2;
      Function_2019184(**v1, 0, 0, *(short *)(v3 + v4));
      Function_2019184(**v1, 1u, 0, *(short *)(v3 + v4));
    }
  }
}

//----- (0225E0F8) --------------------------------------------------------
int __fastcall Function_225e0f8(int a1, int a2)
{
  int v2;
  int result;
  int v4;
  int v5;
  int v6;
  int v7;

  v2 = a2;
  v7 = a1;
  result = *(uchar *)(a2 + 8);
  v4 = 0;
  if ( result > 0 )
  {
    v5 = v7;
    do
    {
      v6 = Function_225c7cc(v2, *(uchar *)(v2 + v4 + 4));
      *(uint *)(v5 + 8) = v6;
      if ( !v6 )
        ErrorHandler();
      *(uchar *)(v7 + v4) = Function_2032f78(*(uchar *)(v2 + v4 + 4));
      *(uchar *)(v7 + v4 + 4) = Function_2032f9c(*(uchar *)(v2 + v4 + 4));
      result = *(uchar *)(v2 + 8);
      ++v4;
      v5 += 4;
    }
    while ( v4 < result );
  }
  return result;
}

//----- (0225E14C) --------------------------------------------------------
int __fastcall Function_225e14c(int a1, int a2)
{
  int v2;
  int i;

  v2 = 0;
  for ( i = 0; i < *(uchar *)(a1 + 8) - 1; ++i )
  {
    if ( *(uchar *)(a2 + i) != *(uchar *)(a2 + i + 1)
      || !*(uchar *)(a2 + i)
      || !*(uchar *)(a2 + i + 1) )
    {
      v2 = 1;
    }
  }
  return v2;
}

//----- (0225E180) --------------------------------------------------------
int __fastcall Function_225e180(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  u32_div_f(a1, 3);
  v3 = v2;
  v4 = u32_div_f(v1, 3);
  if ( (uint)(v3 + 1) < 3 )
    ++v3;
  return 3 * v4 + v3;
}

//----- (0225E1A4) --------------------------------------------------------
int __fastcall Function_225e1a4(int a1, uint **a2, int a3, uint a4, int a5, uint a6)
{
  int v6;
  uint **v7;
  int v8;
  uint v9;

  v6 = a1;
  v7 = a2;
  v8 = a3;
  v9 = a4;
  Function_201a7e8(*a2, a1, 1, 6, 11, 0x14u, 0xAu, 8, 513);
  Function_201ada4_ClearTextBox(v6, 0);
  *(uint *)(v6 + 20) = Function_2023790(128, a6);
  Function_225d180(v8, v9);
  Function_225d190(v8, *(uint *)(v6 + 20), 0x10u);
  *(uint *)(v6 + 16) = v9;
  Function_201ff0c(1u, 0);
  Function_20070e8(a5, 7u, *v7, 0, 0, 0, 0, a6);
  return Function_200710c(a5, 0xAu, *v7, 0, 0, 0, 0, a6);
}

//----- (0225E234) --------------------------------------------------------
uint __fastcall Function_225e234(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  Function_201a8fc(a1);
  return Function_20237bc_FreeMsg(*(uint *)(v1 + 20), v2);
}

//----- (0225E244) --------------------------------------------------------
uint __fastcall Function_225e244(int a1, int a2, uint a3)
{
  uint *v3;
  int v4;
  uint v5;
  int v6;
  int v7;

  v3 = (uint *)a1;
  *(ushort *)(a1 + 44) = 0;
  *(ushort *)(a1 + 46) = 0;
  v4 = a2;
  v5 = a3;
  Function_225cbf0(
    (uint *)(a1 + 24),
    dword_2260140[*(uint *)(a1 + 16)],
    dword_22600F8[*(uint *)(a1 + 16) + 6],
    dword_22600F8[*(uint *)(a1 + 16) + 3],
    16);
  Function_225e4b0(v3, v4, v3[6] >> 12);
  Function_2002bb8(2, v5);
  Function_2002d7c(2, v3[5], 0);
  v6 = dword_22600F8[v3[4]];
  v7 = v3[5];
  Function_201d78c((int)v3, 2);
  Function_2002c60(2);
  return Function_201ff0c(1u, 1);
}

//----- (0225E2D4) --------------------------------------------------------
int __fastcall Function_225e2d4(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  *(ushort *)(a1 + 44) = 0;
  *(ushort *)(a1 + 46) = 0;
  v3 = a2;
  Function_225cbf0(
    (uint *)(a1 + 24),
    dword_22600F8[*(uint *)(a1 + 16) + 6],
    dword_22600D8[*(uint *)(a1 + 16) + 2],
    dword_22600D8[*(uint *)(a1 + 16) + 5],
    8);
  return Function_225e500(v2, v3, *(uint *)(v2 + 24) >> 12);
}

//----- (0225E31C) --------------------------------------------------------
int __fastcall Function_225e31c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int result;

  v2 = a1;
  v3 = a2;
  switch ( (uchar)*(ushort *)(a1 + 46) )
  {
    case 0u:
      v4 = Function_225cc4c((uint *)(a1 + 24), *(short *)(a1 + 44));
      Function_225e500(v2, v3, *(uint *)(v2 + 24) >> 12);
      ++*(ushort *)(v2 + 44);
      if ( v4 == 1 )
      {
        Function_2005748(0x569u);
        Function_225cbf0(
          (uint *)(v2 + 24),
          dword_22600F8[*(uint *)(v2 + 16) + 6],
          dword_226011C[*(uint *)(v2 + 16)],
          dword_226011C[*(uint *)(v2 + 16) + 3],
          4);
        ++*(ushort *)(v2 + 46);
        *(ushort *)(v2 + 44) = 0;
      }
      goto LABEL_9;
    case 1u:
      v5 = Function_225cc4c((uint *)(a1 + 24), *(short *)(a1 + 44));
      Function_225e500(v2, v3, *(uint *)(v2 + 24) >> 12);
      ++*(ushort *)(v2 + 44);
      if ( v5 == 1 )
      {
        Function_225cbf0(
          (uint *)(v2 + 24),
          dword_226011C[*(uint *)(v2 + 16)],
          dword_22600F8[*(uint *)(v2 + 16) + 6],
          dword_226011C[*(uint *)(v2 + 16) + 6],
          4);
        ++*(ushort *)(v2 + 46);
        *(ushort *)(v2 + 44) = 0;
      }
      goto LABEL_9;
    case 2u:
      v6 = Function_225cc4c((uint *)(a1 + 24), *(short *)(a1 + 44));
      Function_225e500(v2, v3, *(uint *)(v2 + 24) >> 12);
      ++*(ushort *)(v2 + 44);
      if ( v6 == 1 )
        ++*(ushort *)(v2 + 46);
      goto LABEL_9;
    case 3u:
      result = 1;
      break;
    default:
LABEL_9:
      result = 0;
      break;
  }
  return result;
}

//----- (0225E438) --------------------------------------------------------
int __fastcall Function_225e438(int a1, uint **a2)
{
  uint **v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = a1;
  if ( *(ushort *)(a1 + 46) )
  {
    if ( *(ushort *)(a1 + 46) == 1 )
    {
      Function_201acf4(a1);
      Function_201ff0c(1u, 0);
      Function_225e4b0(v3, v2, 0);
      Function_2019ebc(*v2, 0);
      Function_2019ebc(*v2, 1u);
      Function_201ff0c(1u, 1);
      return 1;
    }
  }
  else
  {
    v4 = Function_225cc4c((uint *)(a1 + 24), *(short *)(a1 + 44));
    Function_225e500(v3, v2, *(uint *)(v3 + 24) >> 12);
    ++*(ushort *)(v3 + 44);
    if ( v4 == 1 )
      ++*(ushort *)(v3 + 46);
  }
  return 0;
}

//----- (0225E4B0) --------------------------------------------------------
void __fastcall Function_225e4b0(int a1, int *a2, int a3)
{
  int v3;
  int *v4;
  int v5;

  v3 = *(uint *)(a1 + 16);
  v4 = a2;
  v5 = a3;
  if ( v3 && v3 != 1 )
  {
    if ( v3 == 2 )
    {
      Function_2019184(*a2, 0, 3u, a3);
      Function_2019184(*v4, 1u, 3u, v5);
    }
    else
    {
      ErrorHandler();
    }
  }
  else
  {
    Function_2019184(*a2, 0, 0, a3);
    Function_2019184(*v4, 1u, 0, v5);
  }
}

//----- (0225E500) --------------------------------------------------------
uint __fastcall Function_225e500(int a1, int *a2, int a3)
{
  int v3;
  int *v4;
  int v5;
  uint result;

  v3 = *(uint *)(a1 + 16);
  v4 = a2;
  v5 = a3;
  if ( v3 && v3 != 1 )
  {
    if ( v3 == 2 )
    {
      Function_201c63c(*a2, 0, 3u, a3);
      result = Function_201c63c(*v4, 1, 3u, v5);
    }
    else
    {
      result = ErrorHandler();
    }
  }
  else
  {
    Function_201c63c(*a2, 0, 0, a3);
    result = Function_201c63c(*v4, 1, 0, v5);
  }
  return result;
}

//----- (0225E550) --------------------------------------------------------
int __fastcall Function_225e550(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;

  v3 = a1;
  v4 = a3;
  if ( a2 )
  {
    if ( a2 == 1 )
      v5 = 2;
    else
      v5 = a2 != 2;
  }
  else
  {
    v5 = 1;
  }
  v6 = 32 * v5;
  Function_2007148(v3, 5u, 0, 32 * v5, 160, 32, a3);
  return Function_2007148(v3, 5u, 4u, v6, 160, 32, v4);
}

//----- (0225E5A8) --------------------------------------------------------
int __fastcall Function_225e5a8(char *a1, char *a2, char a3, uint a4)
{
  char *v4;
  uint v5;
  char *v6;
  int v7;
  uchar *v8;
  int v9;
  char v10;
  uchar *v11;
  int v12;
  char v13;
  int v14;
  int v15;
  int v16;
  char v18;

  v4 = a2;
  v5 = a4;
  v6 = a1;
  v18 = a3;
  v7 = malloc(a4, 1636);
  Call_FillMemWithValue((int *)v7, 0, 0x664u);
  v8 = (uchar *)(v7 + 28);
  v9 = 24;
  do
  {
    v10 = *v4++;
    *v8++ = v10;
    --v9;
  }
  while ( v9 );
  v11 = (uchar *)(v7 + 12);
  v12 = 16;
  do
  {
    v13 = *v6++;
    *v11++ = v13;
    --v12;
  }
  while ( v12 );
  *(uchar *)(v7 + 7) = v18;
  Function_2260044(v7);
  REG_BLDCNT = 0;
  REG_BLDCNT_SUB = 0;
  REG_DISPCNT &= 0xFFFF1FFF;
  REG_DISPCNT_SUB &= 0xFFFF1FFF;
  GX_SetBanks(dword_22601DC);
  *(ushort *)(v7 + 2) = v5;
  Function_225e0f8(v7 + 52, v7 + 12);
  Function_201dbec(16, v5);
  Function_225cef0(v7 + 76, &dword_2260140[3], dword_2260324, 6u, v5);
  Function_225cfcc((int **)(v7 + 160), 32, 2, 2, v5);
  Function_225ccd0((int ***)(v7 + 460), 2, v5);
  Function_225d084((int *)(v7 + 88), v5);
  Function_225e744(v7, v5);
  v14 = Function_225c78c(v7 + 12, *(uchar *)(v7 + 21));
  v15 = Function_225c7a4(v7 + 12, v14);
  Function_225d290(v7 + 104, (uint **)(v7 + 76), *(uint *)(v7 + 12), v15, v5);
  Function_225f234(v7 + 488, v7 + 76, *(uchar *)(v7 + 22), v5);
  *(uchar *)(v7 + 5) = Function_225e14c(v7 + 12, v7 + 52);
  v16 = *(uchar *)(v7 + 7);
  if ( *(uchar *)(v7 + 7) && v16 != 1 )
  {
    if ( v16 == 2 )
    {
      *(uint *)(v7 + 1604) = AddTaskToTaskList1((int)Function_225ed40, v7, 0);
    }
    else
    {
      ErrorHandler();
      *(uint *)(v7 + 1604) = AddTaskToTaskList1((int)Function_225e874, v7, 0);
    }
  }
  else
  {
    *(uint *)(v7 + 1604) = AddTaskToTaskList1((int)Function_225e874, v7, 0);
  }
  *(uint *)(v7 + 1608) = AddTaskToTaskList3((int)Function_225f124, v7, 0);
  if ( *(uchar *)(v7 + 22) )
    ((void (__fastcall *)(uint))dword_21D1E74[0])(v5);
  return v7;
}

//----- (0225E744) --------------------------------------------------------
uint __fastcall Function_225e744(int a1, uint a2, int a3, int a4)
{
  int v4;
  int v5;
  int *v6;

  v4 = a1;
  v5 = a2;
  v6 = LoadFromNARC_8(171, a2, a3, a4);
  Function_2007130((int)v6, 4u, 0, 0, 288, v5);
  Function_2007130((int)v6, 4u, 4u, 0, 288, v5);
  Function_20070e8((int)v6, 6u, *(uint **)(v4 + 76), 1u, 0, 0, 0, v5);
  Function_20070e8((int)v6, 6u, *(uint **)(v4 + 76), 5u, 0, 0x4000, 0, v5);
  *(uint *)(v4 + 596) = Function_20071d0((int)v6, 9u, 0, (uint *)(v4 + 600), v5);
  Function_200710c((int)v6, 8u, *(uint **)(v4 + 76), 3u, 0, 0, 0, v5);
  Function_200710c((int)v6, 8u, *(uint **)(v4 + 76), 5u, 0, 0, 0, v5);
  Function_225e550((int)v6, *(uchar *)(v4 + 7), v5);
  *(uint *)(v4 + 484) = Function_225cd54(v4 + 460, (int)v6, 11, 5, 12, 13, 14, 5000, v5);
  Function_225f148(v4, v6, v5);
  Function_225f484(v4 + 520, v4 + 76, v4 + 160, v4 + 460, v6, v5);
  return Call_FS_CloseFile(v6);
}

//----- (0225E854) --------------------------------------------------------
int __fastcall Function_225e854(int a1)
{
  int v1;

  v1 = a1;
  Function_225f578(a1 + 520);
  free(*(uint *)(v1 + 596));
  return Function_225f224(v1);
}

//----- (0225E874) --------------------------------------------------------
int __fastcall Function_225e874(char a1, int a2)
{
  int v2;
  char v3;
  uint v4;
  int v5;
  int v6;
  uint v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int i;
  int j;
  int v15;
  int v16;
  int v17;
  int v18;
  uint v19;
  int v20;
  uint v21;
  int v22;
  int v23;
  int k;

  v2 = a2;
  v3 = *(uchar *)(a2 + 4);
  switch ( a1 )
  {
    case 0:
      *(uint *)(v2 + 1612) = **(uint **)(v2 + 24);
      if ( *(uchar *)(v2 + 23) == 1 )
      {
        *(uchar *)(v2 + 9) = 0;
      }
      else
      {
        v4 = Function_225f8fc(v2);
        v5 = *(uchar *)(v2 + 21);
        if ( *(uchar *)(v2 + v5 + 44) || *(uint *)(v2 + 4 * v5 + 28) <= v4 )
        {
          *(uchar *)(v2 + 9) = 0;
        }
        else
        {
          **(uint **)(v2 + 24) = Function_225e180(**(uint **)(v2 + 24));
          *(uchar *)(v2 + 9) = 1;
        }
        if ( !*(uchar *)(v2 + 21) )
          Function_225f920(v2);
      }
      Function_200f174(3u, 1, 1, 0xFFFF, 6, 1, *(ushort *)(v2 + 2));
      ++*(uchar *)(v2 + 4);
      break;
    case 1:
      if ( Function_200f2ac() )
        ++*(uchar *)(v2 + 4);
      break;
    case 2:
      Function_225d368(v2 + 104, v2 + 88, 1u, 0);
      ++*(uchar *)(v2 + 4);
      break;
    case 3:
      if ( Function_225d43c(v2 + 104, 0) )
      {
        *(ushort *)v2 = 64;
        ++*(uchar *)(v2 + 4);
      }
      break;
    case 4:
      if ( *(ushort *)v2 )
      {
        if ( !--*(ushort *)v2 )
        {
          v6 = 1;
          Function_225d400(v2 + 104, 0);
          Function_225df7c(v2 + 828, (int *)(v2 + 76), *(ushort *)(v2 + 2));
          v7 = Function_225f8fc(v2);
          v8 = *(uchar *)(v2 + 20);
          v9 = 0;
          if ( v8 > 0 )
          {
            v10 = v2;
            do
            {
              if ( *(uint *)(v10 + 28) > v7 )
                v6 = 0;
              ++v9;
              v10 += 4;
            }
            while ( v9 < v8 );
          }
          if ( v6 == 1 )
          {
            *(ushort *)(v2 + 1618) = 16;
            *(uchar *)(v2 + 4) = 22;
          }
          else
          {
            ++*(uchar *)(v2 + 4);
            *(ushort *)(v2 + 1616) = 4;
          }
        }
      }
      break;
    case 5:
      v11 = 0;
      do
      {
        --*(ushort *)(v2 + 1616);
        v12 = *(uchar *)(v2 + 20);
        for ( i = 0; i < v12; ++i )
        {
          if ( *(ushort *)(v2 + 1616) == *(uchar *)(v2 + i + 44) )
            v11 = 1;
        }
      }
      while ( !v11 );
      switch ( (uchar)*(ushort *)(v2 + 1616) )
      {
        case 0u:
        case 1u:
          *(ushort *)(v2 + 1618) = 32;
          break;
        case 2u:
        case 3u:
          *(ushort *)(v2 + 1618) = 16;
          break;
        default:
          ErrorHandler();
          break;
      }
      Function_225f7d8(v2);
      ++*(uchar *)(v2 + 4);
      break;
    case 6:
      --*(ushort *)(v2 + 1618);
      Function_225f7d8(v2);
      if ( !*(ushort *)(v2 + 1618) )
      {
        for ( j = 0; j < *(uchar *)(v2 + 20); ++j )
        {
          v15 = *(uchar *)(v2 + j + 44);
          v16 = *(ushort *)(v2 + 1616);
          v17 = 0;
          if ( v16 == v15 )
          {
            v17 = 1;
          }
          else if ( v16 == 1 && !*(uchar *)(v2 + j + 44) )
          {
            v17 = 1;
          }
          if ( v17 )
            Function_225f6e4(v2, j, v15);
        }
        if ( *(ushort *)(v2 + 1616) <= 1u )
          ++*(uchar *)(v2 + 4);
        else
          *(uchar *)(v2 + 4) = 5;
      }
      break;
    case 7:
      if ( Function_225f7d8(v2) )
        ++*(uchar *)(v2 + 4);
      break;
    case 8:
      *(uchar *)(v2 + 4) = v3 + 1;
      Function_225f168(v2);
      *(ushort *)v2 = 30;
      break;
    case 9:
      if ( *(ushort *)v2 )
        --*(ushort *)v2;
      if ( !*(ushort *)v2 )
      {
        *(uchar *)(v2 + 4) = 10;
        *(ushort *)v2 = 0;
      }
      break;
    case 10:
      v18 = *(uchar *)(v2 + 21);
      if ( *(uchar *)(v2 + v18 + 44) )
        v19 = 18;
      else
        v19 = 17;
      v20 = *(uint *)(v2 + 4 * v18 + 60);
      Function_225d104(v2 + 88);
      Function_225d368(v2 + 104, v2 + 88, v19, 0);
      ++*(uchar *)(v2 + 4);
      break;
    case 11:
      if ( Function_225d43c(v2 + 104, 0) && Function_225f860(v2) == 1 )
      {
        if ( *(uchar *)(v2 + 23) == 1 )
        {
          *(ushort *)v2 = 102;
          *(uchar *)(v2 + 4) = 14;
        }
        else
        {
          *(ushort *)v2 = 102;
          ++*(uchar *)(v2 + 4);
        }
      }
      break;
    case 12:
      if ( *(ushort *)v2 )
      {
        --*(ushort *)v2;
      }
      else
      {
        if ( *(uchar *)(v2 + 9) )
        {
          Function_225d170(v2 + 88, **(uint **)(v2 + 24));
          if ( *(uint *)(v2 + 1612) == **(uint **)(v2 + 24) )
            v21 = 19;
          else
            v21 = 2;
        }
        else
        {
          v21 = 9;
        }
        v22 = *(uint *)(v2 + 4 * *(uchar *)(v2 + 21) + 60);
        Function_225d104(v2 + 88);
        Function_225d368(v2 + 104, v2 + 88, v21, 0);
        *(uchar *)(v2 + 4) = 13;
      }
      break;
    case 13:
      if ( Function_225d43c(v2 + 104, 0) )
      {
        *(ushort *)v2 = 102;
        ++*(uchar *)(v2 + 4);
      }
      break;
    case 14:
      if ( *(ushort *)v2 )
      {
        if ( !--*(ushort *)v2 )
        {
          Function_225d400(v2 + 104, 0);
          *(ushort *)v2 = 30;
          ++*(uchar *)(v2 + 4);
        }
      }
      break;
    case 15:
      if ( *(ushort *)v2 )
      {
        --*(ushort *)v2;
      }
      else
      {
        Function_20364f0(130);
        if ( *(uchar *)(v2 + 22) )
          ((void (*)(void))dword_21D1F18[0])();
        ++*(uchar *)(v2 + 4);
      }
      break;
    case 16:
      if ( Function_2036540(130) )
      {
        if ( *(uchar *)(v2 + 23) )
          *(uchar *)(v2 + 4) = 19;
        else
          ++*(uchar *)(v2 + 4);
      }
      break;
    case 17:
      Function_200f174(3u, 0, 0, 0, 6, 1, *(ushort *)(v2 + 2));
      ++*(uchar *)(v2 + 4);
      break;
    case 18:
      if ( Function_200f2ac() )
        *(uchar *)(v2 + 4) = 21;
      break;
    case 19:
      Function_225f890(v2);
      ++*(uchar *)(v2 + 4);
      break;
    case 20:
      if ( Function_225f27c(v2 + 488, v2 + 104, v2 + 88, *(uchar *)(v2 + 7), *(ushort *)(v2 + 2)) )
      {
        *(uchar *)(v2 + 8) = Function_225f420(v2 + 488);
        ++*(uchar *)(v2 + 4);
      }
      break;
    case 21:
      Function_225dffc(v2 + 828);
      *(uchar *)(v2 + 6) = 1;
      break;
    case 22:
      if ( !--*(ushort *)(v2 + 1618) )
        ++*(uchar *)(v2 + 4);
      break;
    case 23:
      v23 = *(uchar *)(v2 + 20);
      for ( k = 0; k < v23; ++k )
      {
        *(uchar *)(v2 + k + 44) = v23 - 1;
        Function_225f6e4(v2, k, *(uchar *)(v2 + k + 44));
        v23 = *(uchar *)(v2 + 20);
      }
      *(uchar *)(v2 + 4) = 7;
      break;
    default:
      break;
  }
  Function_225f19c(v2);
  Function_225d070((int *)(v2 + 160));
  Function_201c63c(*(uint *)(v2 + 76), 3, 4u, 2);
  return Function_201c63c(*(uint *)(v2 + 76), 5, 4u, 2);
}

//----- (0225ED40) --------------------------------------------------------
int __fastcall Function_225ed40(int a1, int a2)
{
  int v2;
  char v3;
  int v4;
  int v5;
  int v6;
  short v7;
  int v8;
  int v9;
  uint v10;
  int v12;
  uint **v13;
  int v14;
  int v15;

  v2 = a2;
  switch ( *(uchar *)(a2 + 4) )
  {
    case 0:
      if ( *(uchar *)(a2 + 23) == 1 )
      {
        *(uchar *)(a2 + 9) = 0;
      }
      else
      {
        if ( *(uint *)(a2 + 48) < 0xAu )
        {
          v3 = 0;
        }
        else
        {
          **(uint **)(a2 + 24) = Function_225e180(**(uint **)(a2 + 24));
          v3 = 1;
        }
        *(uchar *)(v2 + 9) = v3;
        if ( !*(uchar *)(v2 + 21) )
          Function_225f988(v2);
      }
      Function_200f174(3u, 1, 1, 0xFFFF, 6, 1, *(ushort *)(v2 + 2));
      ++*(uchar *)(v2 + 4);
      break;
    case 1:
      if ( Function_200f2ac() )
      {
        ++*(uchar *)(v2 + 4);
        *(ushort *)(v2 + 1616) = 4;
      }
      break;
    case 2:
      Function_225d368(a2 + 104, a2 + 88, 1u, 0);
      ++*(uchar *)(v2 + 4);
      break;
    case 3:
      if ( Function_225d43c(a2 + 104, 0) )
      {
        *(ushort *)v2 = 102;
        ++*(uchar *)(v2 + 4);
      }
      break;
    case 4:
      if ( *(ushort *)a2 )
      {
        if ( !--*(ushort *)a2 )
        {
          Function_225d400(a2 + 104, 0);
          ++*(uchar *)(v2 + 4);
        }
      }
      break;
    case 5:
      Function_225df7c(a2 + 828, (int *)(a2 + 76), *(ushort *)(a2 + 2));
      v4 = *(uchar *)(v2 + 20);
      v5 = 0;
      if ( v4 > 0 )
      {
        v6 = v2 + 604;
        v13 = (uint **)(v2 + 76);
        v14 = v2 + 12;
        v12 = v2;
        v7 = 0;
        v15 = v2 + 88;
        do
        {
          Function_225dac0(
            v6,
            v4,
            *(uchar *)(v2 + 7),
            *(ushort **)(v2 + 600),
            v13,
            v5,
            *(uchar *)(v2 + 21),
            (int *)(v2 + 160),
            *(uint *)(v2 + 484),
            *(ushort *)(v2 + 2));
          v8 = Function_225c78c(v14, v5);
          v9 = Function_225c7a4(v14, v8);
          Function_225dc44(v6, v15, *(uint *)(v12 + 60), 8, 0, v9);
          Function_225dca0(
            v6,
            v15,
            *(uchar *)(v2 + 5),
            *(uchar *)(v2 + v5 + 52),
            *(uchar *)(v2 + v5 + 56));
          Function_225dd80(v6, (int *)v13);
          Function_225dd94(v6);
          Function_225ddd4(v6, -8, v7);
          v4 = *(uchar *)(v2 + 20);
          ++v5;
          v6 += 56;
          v12 += 4;
          v7 += 3;
        }
        while ( v5 < v4 );
      }
      ++*(uchar *)(v2 + 4);
      *(ushort *)v2 = 16;
      break;
    case 6:
      if ( Function_225f7d8(a2) == 1 && !--*(ushort *)v2 )
      {
        Function_225f598(v2 + 520, *(uint *)(v2 + 48));
        ++*(uchar *)(v2 + 4);
      }
      break;
    case 7:
      if ( Function_225f5ac(a2 + 520, a2 + 76) == 1 )
      {
        if ( *(uchar *)(v2 + 9) == 1 )
          Function_225f83c(v2);
        ++*(uchar *)(v2 + 4);
      }
      break;
    case 8:
      Function_225d154(a2 + 88, *(uint *)(a2 + 48));
      Function_225d368(v2 + 104, v2 + 88, 7u, 0);
      *(ushort *)v2 = 102;
      ++*(uchar *)(v2 + 4);
      break;
    case 9:
      if ( Function_225d43c(a2 + 104, 0) == 1 )
      {
        if ( *(ushort *)v2 )
        {
          --*(ushort *)v2;
        }
        else if ( Function_225f860(v2) == 1 )
        {
          if ( *(uchar *)(v2 + 23) == 1 )
          {
            *(ushort *)v2 = 102;
            *(uchar *)(v2 + 4) = 12;
          }
          else
          {
            ++*(uchar *)(v2 + 4);
          }
        }
      }
      break;
    case 0xA:
      if ( *(uchar *)(a2 + 9) )
        v10 = 8;
      else
        v10 = 9;
      Function_225d368(a2 + 104, a2 + 88, v10, 0);
      ++*(uchar *)(v2 + 4);
      break;
    case 0xB:
      if ( Function_225d43c(a2 + 104, 0) )
      {
        *(ushort *)v2 = 102;
        if ( *(uchar *)(v2 + 9) )
          *(uchar *)(v2 + 4) = 13;
        else
          ++*(uchar *)(v2 + 4);
      }
      break;
    case 0xC:
      if ( *(ushort *)a2 )
      {
        if ( !--*(ushort *)a2 )
          *(uchar *)(a2 + 4) = 14;
      }
      break;
    case 0xD:
      if ( *(ushort *)a2 )
        --*(ushort *)a2;
      if ( !*(ushort *)a2 )
        *(uchar *)(a2 + 4) = 14;
      break;
    case 0xE:
      if ( *(uchar *)(a2 + 22) )
        ((void (*)(void))dword_21D1F18[0])();
      Function_20364f0(130);
      ++*(uchar *)(v2 + 4);
      break;
    case 0xF:
      if ( Function_2036540(130) )
      {
        if ( *(uchar *)(v2 + 23) )
          *(uchar *)(v2 + 4) = 18;
        else
          ++*(uchar *)(v2 + 4);
      }
      break;
    case 0x10:
      Function_200f174(3u, 0, 0, 0, 6, 1, *(ushort *)(a2 + 2));
      ++*(uchar *)(v2 + 4);
      break;
    case 0x11:
      if ( Function_200f2ac() )
        *(uchar *)(v2 + 4) = 20;
      break;
    case 0x12:
      Function_225f890(a2);
      ++*(uchar *)(v2 + 4);
      break;
    case 0x13:
      if ( Function_225f27c(a2 + 488, a2 + 104, a2 + 88, *(uchar *)(a2 + 7), *(ushort *)(a2 + 2)) )
      {
        *(uchar *)(v2 + 8) = Function_225f420(v2 + 488);
        ++*(uchar *)(v2 + 4);
      }
      break;
    case 0x14:
      Function_225dffc(a2 + 828);
      *(uchar *)(v2 + 6) = 1;
      break;
    default:
      break;
  }
  Function_225f19c(v2);
  Function_225d070((int *)(v2 + 160));
  Function_201c63c(*(uint *)(v2 + 76), 3, 4u, 2);
  return Function_201c63c(*(uint *)(v2 + 76), 5, 4u, 2);
}

//----- (0225F124) --------------------------------------------------------
int __fastcall Function_225f124(int a1, int a2)
{
  int v2;

  v2 = a2;
  Function_201dcac();
  Function_225cfc0((int *)(v2 + 76));
  Function_225d07c();
  return Function_225e08c(v2 + 828);
}

//----- (0225F148) --------------------------------------------------------
int __fastcall Function_225f148(int a1, int a2, int a3)
{
  int v3;
  int result;

  v3 = a1;
  result = Function_20071ec(a2, 5u, (uint *)(a1 + 1624), a3);
  *(uint *)(v3 + 1620) = result;
  return result;
}

//----- (0225F168) --------------------------------------------------------
int __fastcall Function_225f168(int result)
{
  int v1;
  int v2;

  *(ushort *)(result + 1630) = 1;
  v1 = *(uchar *)(result + 20);
  v2 = 0;
  if ( v1 > 0 )
  {
    while ( *(uchar *)(result + v2 + 44) || *(uchar *)(result + 21) != v2 )
    {
      if ( ++v2 >= v1 )
        return result;
    }
    result = Function_225f83c(result);
  }
  return result;
}

//----- (0225F19C) --------------------------------------------------------
uint __fastcall Function_225f19c(int a1)
{
  int v1;
  uint result;
  int v3;
  char *v4;
  int v5;
  int v6;

  v1 = a1;
  result = 1630;
  if ( *(ushort *)(v1 + 1630) )
  {
    if ( !*(ushort *)(v1 + 1628) || *(ushort *)(v1 + 1628) == 8 )
    {
      v3 = 0;
      if ( (int)*(uchar *)(v1 + 20) > 0 )
      {
        v4 = &byte_22600D4;
        do
        {
          if ( !*(uchar *)(v1 + v3 + 44) )
          {
            v5 = (uchar)*v4;
            if ( *(ushort *)(v1 + 1628) )
              v6 = v5 + 7;
            else
              v6 = v5 + 3;
            if ( !Function_201dc68(15, 32 * v5, *(uint *)(*(uint *)(v1 + 1624) + 12) + 32 * v6, 32) )
              ErrorHandler();
          }
          ++v3;
          ++v4;
        }
        while ( v3 < *(uchar *)(v1 + 20) );
      }
    }
    result = (((uint)*(ushort *)(v1 + 1628) + 1) >> 31)
           + __ROR4__(
               ((*(ushort *)(v1 + 1628) + 1) << 28)
             - (((uint)*(ushort *)(v1 + 1628) + 1) >> 31),
               28);
    *(ushort *)(v1 + 1628) = result;
  }
  return result;
}

//----- (0225F224) --------------------------------------------------------
uint __fastcall Function_225f224(int a1)
{
  return free(*(uint *)(a1 + 1620));
}

//----- (0225F234) --------------------------------------------------------
int __fastcall Function_225f234(int *a1, int *a2, char a3, uint a4)
{
  int *v4;
  char v5;
  int *v6;
  uint v7;
  int result;

  v4 = a2;
  v5 = a3;
  v6 = a1;
  v7 = a4;
  Call_FillMemWithValue(a1, 0, 0x20u);
  v6[2] = *v4;
  v6[3] = 4;
  v6[4] = 139;
  v6[5] = 2;
  *((uchar *)v6 + 24) = 24;
  *((uchar *)v6 + 25) = 8;
  v6[1] = (int)Function_2015920(v7);
  *((uchar *)v6 + 1) = v5;
  result = 1;
  *((uchar *)v6 + 29) = 1;
  return result;
}

//----- (0225F270) --------------------------------------------------------
uint __fastcall Function_225f270(int a1)
{
  return Function_2015938(*(uint *)(a1 + 4));
}

//----- (0225F27C) --------------------------------------------------------
int __fastcall Function_225f27c(uchar *a1, int a2, int a3, uint a4, uint a5)
{
  uchar *v5;
  char v6;
  int v7;
  int v8;
  int v9;
  int result;

  v5 = a1;
  v6 = *a1;
  v7 = a2;
  v8 = a3;
  switch ( (uchar)a2 )
  {
    case 0:
      Function_200f174(0, 0, 1, 0, 6, 1, a5);
      Function_20397c8(0, a5);
      if ( v5[1] )
        ((void (__fastcall *)(uint))dword_21D1E74[0])(a5);
      ++*v5;
      goto LABEL_32;
    case 1:
      if ( Function_200f2ac() )
        ++*v5;
      goto LABEL_32;
    case 2:
      Function_225d180(a3, a4);
      Function_225d368(v7, v8, 3u, 1);
      ++*v5;
      goto LABEL_32;
    case 3:
      if ( Function_225d43c(a2, 1) == 1 )
        ++*v5;
      goto LABEL_32;
    case 4:
      Function_2015958(*((uint *)v5 + 1), (int)(v5 + 8));
      ++*v5;
      goto LABEL_32;
    case 5:
      v9 = Function_20159fc(*((uint *)v5 + 1));
      if ( (uint)(v9 - 1) <= 1 )
      {
        if ( v9 == 1 )
        {
          Function_20359dc(22, 0, 0);
        }
        else if ( v9 == 2 )
        {
          Function_20359dc(23, 0, 0);
        }
        Function_225d368(v7, v8, 0xFu, 1);
        Function_225d458(v7, 1);
        ++*v5;
      }
      goto LABEL_32;
    case 6:
      if ( v5[30] )
      {
        if ( v5[31] )
          *v5 = 10;
        else
          *v5 = v6 + 1;
      }
      goto LABEL_32;
    case 7:
      Function_225d368(a2, a3, 6u, 1);
      ++*v5;
      goto LABEL_32;
    case 8:
      if ( Function_225d43c(a2, 1) == 1 )
      {
        ++*v5;
        *((ushort *)v5 + 1) = 102;
      }
      goto LABEL_32;
    case 9:
      if ( !--*((ushort *)v5 + 1) )
        ++*v5;
      goto LABEL_32;
    case 0xA:
      Function_200f174(4u, 0, 0, 0, 6, 1, a5);
      ++*v5;
      goto LABEL_32;
    case 0xB:
      if ( Function_200f2ac() )
      {
        Function_2039794();
        if ( v5[1] )
          ((void (*)(void))dword_21D1F18[0])();
        ++*v5;
      }
      goto LABEL_32;
    case 0xC:
      result = 1;
      break;
    default:
LABEL_32:
      result = 0;
      break;
  }
  return result;
}

//----- (0225F420) --------------------------------------------------------
int __fastcall Function_225f420(int a1)
{
  return *(uchar *)(a1 + 31);
}

//----- (0225F424) --------------------------------------------------------
int __fastcall Function_225f424(int a1, char a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;

  v4 = a1;
  result = a4;
  if ( !(*(uchar *)(v4 + 28) & (1 << a2)) )
  {
    if ( !a3 )
      *(uchar *)(v4 + 29) = 0;
    *(uchar *)(v4 + 28) |= 1 << a2;
  }
  v6 = 0;
  v7 = 0;
  do
  {
    if ( (1 << v7) & *(uchar *)(v4 + 28) )
      ++v6;
    ++v7;
  }
  while ( v7 < 4 );
  if ( v6 == a4 )
  {
    if ( *(uchar *)(v4 + 29) )
      result = Function_20359dc(24, 0, 0);
    else
      result = Function_20359dc(25, 0, 0);
  }
  return result;
}

//----- (0225F47C) --------------------------------------------------------
int __fastcall Function_225f47c(int result, char a2)
{
  *(uchar *)(result + 30) = 1;
  *(uchar *)(result + 31) = a2;
  return result;
}

//----- (0225F484) --------------------------------------------------------
int __fastcall Function_225f484(int *a1, uint **a2, int *a3, int a4, int a5, int a6)
{
  uint **v6;
  int *v7;
  int v8;
  short v9;
  int v10;
  int v11;
  int v12;
  int result;
  int *v14;
  uint v15;
  int v16;
  short v17;

  v6 = a2;
  v14 = a3;
  v7 = a1;
  v8 = a4;
  Call_FillMemWithValue(a1, 0, 0x4Cu);
  Function_2007130(a5, 0x18u, 0, 448, 32, a6);
  Function_20070e8(a5, 0x19u, *v6, 2u, 139, 0, 0, a6);
  *v7 = Function_20071d0(a5, 0x1Au, 0, v7 + 1, a6);
  v7[17] = Function_225cd54(v8, a5, 15, 1, 16, 17, 18, 5001, a6);
  v17 = 40;
  v15 = 0;
  v16 = 0;
  do
  {
    v9 = 74;
    v10 = 0;
    do
    {
      v11 = (int)&v7[v10 + v16];
      v12 = Function_225cdb4(v7[17], *v14, v9, v17, 0, a6);
      *(uint *)(v11 + 8) = v12;
      Function_2021cac(v12, 0);
      Function_2021d6c(*(uint *)(v11 + 8), v15);
      Function_2021e80(*(uint *)(v11 + 8), 0);
      ++v10;
      v9 += 24;
    }
    while ( v10 < 5 );
    v17 += 36;
    v16 += 5;
    result = v15 + 1;
    v15 = result;
  }
  while ( result < 3 );
  return result;
}

//----- (0225F578) --------------------------------------------------------
uint __fastcall Function_225f578(int *a1)
{
  int *v1;
  int v2;
  int *v3;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    Function_2021bd4(v3[2]);
    ++v2;
    ++v3;
  }
  while ( v2 < 15 );
  return free(*v1);
}

//----- (0225F598) --------------------------------------------------------
uchar *__fastcall Function_225f598(uchar *a1, char a2)
{
  uchar *result;

  a1[75] = a2;
  a1[72] = 0;
  result = a1 + 74;
  *result = 0;
  return result;
}

//----- (0225F5AC) --------------------------------------------------------
int __fastcall Function_225f5ac(int a1, int *a2)
{
  int v2;
  uint v3;
  int *v4;
  int v5;
  uint v6;
  int v7;
  int v8;
  int v9;
  int result;

  v2 = a1;
  v3 = *(uchar *)(a1 + 72);
  v4 = a2;
  if ( v3 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_225F5CA + v3) + 36042188);
  switch ( (uchar)v3 )
  {
    case 0:
      Function_225ccb0(*(uint *)(v2 + 4), 139);
      Function_20198c0(*v4, 2, *(uint *)(v2 + 4) + 12, 0, 0, 0x20u, 0x14u);
      Function_2019e2c(*v4, 2, 0, 0, 0x20u, 0x14u, 0xEu);
      Function_201c3c0(*v4, 2);
      ++*(uchar *)(v2 + 72);
      goto LABEL_15;
    case 1:
      if ( *(uchar *)(v2 + 74) == *(uchar *)(v2 + 75) )
      {
        *(uchar *)(v2 + 72) = 3;
      }
      else
      {
        Function_2005748(0x57Cu);
        s32_div_f(*(uchar *)(v2 + 74), 15);
        Function_2021cac(*(uint *)(v2 + 4 * v5 + 8), 1);
        *(uchar *)(v2 + 73) = 8;
        ++*(uchar *)(v2 + 72);
      }
      goto LABEL_15;
    case 2:
      if ( !--*(uchar *)(v2 + 73) )
      {
        v6 = (uchar)++*(uchar *)(v2 + 74);
        s32_div_f(v6, 15);
        if ( !v7 && v6 != *(uchar *)(v2 + 75) )
        {
          v8 = 0;
          v9 = v2;
          do
          {
            Function_2021cac(*(uint *)(v9 + 8), 0);
            Function_2021d6c(*(uint *)(v9 + 8), 2u);
            ++v8;
            v9 += 4;
          }
          while ( v8 < 15 );
        }
        *(uchar *)(v2 + 72) = 1;
      }
      goto LABEL_15;
    case 3:
      result = 1;
      break;
    default:
LABEL_15:
      result = 0;
      break;
  }
  return result;
}

//----- (0225F6E4) --------------------------------------------------------
int __fastcall Function_225f6e4(int a1, uint a2, int a3)
{
  uint v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v11;

  v3 = a2;
  v4 = a1;
  v5 = 56 * a2;
  v6 = a1 + 604;
  v11 = a3;
  Function_225dac0(
    a1 + 604 + 56 * a2,
    *(uchar *)(a1 + 20),
    *(uchar *)(a1 + 7),
    *(ushort **)(a1 + 600),
    (uint **)(a1 + 76),
    a2,
    *(uchar *)(a1 + 21),
    (int *)(a1 + 160),
    *(uint *)(a1 + 484),
    *(ushort *)(a1 + 2));
  v7 = Function_225c78c(v4 + 12, v3);
  v8 = Function_225c7a4(v4 + 12, v7);
  Function_225dc44(v6 + v5, v4 + 88, *(uint *)(v4 + 4 * v3 + 60), 8, 0, v8);
  Function_225dca0(
    v6 + v5,
    v4 + 88,
    *(uchar *)(v4 + 5),
    *(uchar *)(v4 + v3 + 52),
    *(uchar *)(v4 + v3 + 56));
  if ( *(uchar *)(v4 + 7) )
    v9 = 6;
  else
    v9 = 5;
  Function_225dd2c(
    v6 + v5,
    v4 + 88,
    *(uint *)(v4 + 4 * v3 + 28),
    (short)(176 - *((ushort *)dword_22600D8 + 3 - v11)),
    0,
    v9);
  Function_225dd80(v6 + v5, (int *)(v4 + 76));
  Function_225dd0c(v6 + v5, v11);
  return Function_225ddd4(v6 + v5, *((short *)dword_22600D8 + v11), 0);
}

//----- (0225F7D8) --------------------------------------------------------
int __fastcall Function_225f7d8(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v7;
  int v8;

  v1 = a1;
  v7 = 1;
  v8 = 0;
  if ( (int)*(uchar *)(a1 + 20) > 0 )
  {
    v2 = a1 + 604;
    v3 = a1;
    v4 = a1 + 604;
    do
    {
      if ( *(uint *)(v3 + 620) )
      {
        v5 = Function_225de70(v2);
        Function_225e028(v1 + 828, v4);
        if ( !v5 )
          v7 = 0;
      }
      else
      {
        v7 = 0;
      }
      v3 += 56;
      v2 += 56;
      v4 += 56;
      ++v8;
    }
    while ( v8 < *(uchar *)(v1 + 20) );
  }
  return v7;
}

//----- (0225F83C) --------------------------------------------------------
int __fastcall Function_225f83c(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = *(uint *)(a1 + 1632);
  if ( !result )
  {
    Function_2006150(0x4C6u);
    result = 1632;
    *(uint *)(v1 + 1632) = 1;
  }
  return result;
}

//----- (0225F860) --------------------------------------------------------
BOOL __fastcall Function_225f860(int a1)
{
  int v1;

  v1 = a1;
  if ( *(uint *)(a1 + 1632) == 1 && !Function_20061e4() )
    *(uint *)(v1 + 1632) = 0;
  return *(uint *)(v1 + 1632) != 1;
}

//----- (0225F890) --------------------------------------------------------
int __fastcall Function_225f890(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int result;
  int i;
  int *v8;
  int v9;
  int v10;
  int v11;

  v11 = a4;
  v4 = a1;
  v5 = LoadVariableAreaAdress_1d(*(uint *)(a1 + 12));
  result = *(uchar *)(v4 + 20);
  for ( i = 0; i < result; ++i )
  {
    v8 = (int *)Function_2032f1c(*(uchar *)(v4 + i + 16));
    v9 = Function_203909c(*(uint *)(v4 + 12), v8, &v11);
    if ( !v9 || v9 == 1 )
    {
      v10 = *(uchar *)(v4 + 7);
      if ( *(uchar *)(v4 + 7) )
      {
        if ( v10 == 1 )
        {
          Function_202b220(v5, v11, 1);
        }
        else if ( v10 == 2 )
        {
          Function_202b248(v5, v11, 1);
        }
      }
      else
      {
        Function_202b1f8(v5, v11, 1);
      }
    }
    result = *(uchar *)(v4 + 20);
  }
  return result;
}

//----- (0225F8FC) --------------------------------------------------------
int __fastcall Function_225f8fc(int result)
{
  int v1;

  v1 = *(uchar *)(result + 7);
  if ( !*(uchar *)(result + 7) )
    return 0;
  if ( v1 == 1 )
    return 0;
  if ( v1 == 2 )
  {
    ErrorHandler();
    result = 0;
  }
  return result;
}

//----- (0225F920) --------------------------------------------------------
int __fastcall Function_225f920(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int result;
  int v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v14 = a4;
  v4 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v5 = a1;
  v13 = 0;
  result = Function_225f8fc(a1);
  v7 = 0;
  if ( (int)*(uchar *)(v5 + 20) > 0 )
  {
    v8 = v5;
    v9 = &v10;
    do
    {
      if ( !*(uchar *)(v5 + v7 + 44) && result != *(uint *)(v8 + 28) )
      {
        ++v4;
        *v9 = *(uchar *)(*(uint *)(v5 + 24) + v7 + 4);
        ++v9;
      }
      ++v7;
      v8 += 4;
    }
    while ( v7 < *(uchar *)(v5 + 20) );
  }
  if ( v4 )
    result = ((int (__fastcall *)(uint, uint, int, int, int, int, int))dword_222EAB4[0])(
               *(uint *)(*(uint *)(v5 + 24) + 48),
               *(uchar *)(v5 + 7),
               v4,
               v10,
               v11,
               v12,
               v13);
  return result;
}

//----- (0225F988) --------------------------------------------------------
uint __fastcall Function_225f988(uint result)
{
  uint v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = result;
  if ( *(uchar *)(result + 20) )
  {
    result = *(uint *)(result + 48);
    if ( result >= 0xA )
    {
      v2 = *(uint *)(v1 + 24);
      v3 = *(uchar *)(v2 + 5);
      v4 = *(uchar *)(v2 + 6);
      v5 = *(uchar *)(v2 + 7);
      v6 = *(uint *)(v2 + 48);
      v7 = *(uchar *)(v2 + 4);
      result = ((int (__fastcall *)(int, uint))dword_222EAB4[0])(v6, *(uchar *)(v1 + 7));
    }
  }
  return result;
}

//----- (0225F9B8) --------------------------------------------------------
int __fastcall Function_225f9b8(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int *v6;
  int *v7;
  int v8;
  int v10;
  int v11;
  int v12;

  v4 = a1;
  v10 = a2;
  v11 = a3;
  v12 = a4;
  Call_FillMemWithValue((int *)(a1 + 12), 0, 0xC0u);
  Call_FillMemWithValue((int *)(v4 + 204), 0, 0xC0u);
  v5 = 0;
  *(ushort *)(v4 + 8) = 0;
  *(ushort *)(v4 + 10) = 0;
  v6 = &dword_226019C;
  *(uint *)(v4 + 396) = 0;
  v7 = (int *)v4;
  do
  {
    v8 = Function_225cdb4(v10, v11, 16 * *v6 >> 16, 16 * v6[1] >> 16, 0, v12);
    *v7 = v8;
    Function_2021d6c(v8, 5u);
    Function_2021e80(*v7, 0);
    ++v5;
    v6 += 3;
    ++v7;
  }
  while ( v5 < 2 );
  REG_DISPCNT = ((((REG_DISPCNT & 0xE000u) >> 13) & 0xFFFFFFFE) << 13) | REG_DISPCNT & 0xFFFF1FFF;
  WIN_IN = WIN_IN & 0xFFC0 | 0x3F;
  WIN0_X1 = 0;
  WIN0_Y1 = 0;
  *(uchar *)(v4 + 400) = WIN_OUT;
  *(uint *)(v4 + 404) = ((REG_DISPCNT & 0xE000u) >> 13) & 2;
  *(uchar *)(v4 + 401) = *(uchar *)(v4 + 401) & 0xE0 | 0xF;
  *(uchar *)(v4 + 401) |= 0x20u;
  Function_20177bc((int (__fastcall *)(uint))Function_225fcf0, v4);
  Function_2021d0c(*(uint *)(v4 + 4), 2);
  return Function_225fc6c(v4);
}

//----- (0225FAB8) --------------------------------------------------------
int __fastcall Function_225fab8(int a1)
{
  int v1;

  v1 = 0;
  if ( (short)++*(ushort *)(a1 + 8) >= 8 )
  {
    *(ushort *)(a1 + 8) = 8;
    v1 = 1;
  }
  Function_225fb10();
  return v1;
}

//----- (0225FAD8) --------------------------------------------------------
int __fastcall Function_225fad8(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = 0;
  if ( (short)--*(ushort *)(a1 + 8) <= 0 )
  {
    v2 = 1;
    *(ushort *)(a1 + 8) = 1;
    Function_2021cac(*(uint *)a1, 0);
    Function_2021cac(*(uint *)(v1 + 4), 0);
  }
  Function_225fb10(v1, -1);
  return v2;
}

//----- (0225FB10) --------------------------------------------------------
int __fastcall Function_225fb10(int a1, int a2)
{
  int v2;
  int *v3;
  uint **v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint v11;
  int v12;
  int v13;
  int v14;
  uint v15;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;

  v17 = a1;
  *(ushort *)(a1 + 10) = 23 * *(short *)(a1 + 8) / 8;
  v2 = *(short *)(a1 + 8) + a2;
  if ( v2 > 8 || v2 < 0 )
    v18 = *(short *)(v17 + 10);
  else
    v18 = 23 * v2 / 8;
  v3 = &dword_226019C;
  v4 = (uint **)v17;
  v5 = 0;
  v6 = v18 << 12;
  do
  {
    v7 = v3[1];
    v19 = *v3;
    v20 = v7;
    v21 = v3[2];
    if ( v5 )
    {
      if ( v18 <= 0 )
      {
        v14 = fflt(v6);
        v13 = fsub(v14, 1056964608);
      }
      else
      {
        v12 = fflt(v6);
        v13 = fadd(0x3F000000u, v12);
      }
      v15 = ffix(v13);
      v20 += v15;
    }
    else
    {
      if ( v18 <= 0 )
      {
        v10 = fflt(v6);
        v9 = fsub(v10, 1056964608);
      }
      else
      {
        v8 = fflt(v6);
        v9 = fadd(0x3F000000u, v8);
      }
      v11 = ffix(v9);
      v20 -= v11;
    }
    Function_2021c50(*v4, &v19);
    ++v5;
    v3 += 3;
    ++v4;
  }
  while ( v5 < 2 );
  return Function_225fc6c(v17);
}

//----- (0225FBF0) --------------------------------------------------------
short *__fastcall Function_225fbf0(int a1)
{
  int v1;
  int *v2;
  int v3;
  int *v4;
  short v5;
  short *result;

  v1 = a1;
  v2 = *(int **)(a1 + 396);
  if ( v2 )
  {
    Call_RemoveTaskFromTaskList(v2);
    *(uint *)(v1 + 396) = 0;
  }
  v3 = 0;
  v4 = (int *)v1;
  do
  {
    if ( *v4 )
    {
      Function_2021bd4(*v4);
      *v4 = 0;
    }
    ++v3;
    ++v4;
  }
  while ( v3 < 2 );
  Function_20177a4();
  REG_DISPCNT = (*(uint *)(v1 + 404) << 13) | REG_DISPCNT & 0xFFFF1FFF;
  v5 = *(uchar *)(v1 + 400) & 0x1F | WIN_OUT & 0xFFC0;
  if ( *(uchar *)(v1 + 400) & 0x20 )
    v5 |= 0x20u;
  result = &WIN_OUT;
  WIN_OUT = v5;
  return result;
}

//----- (0225FC6C) --------------------------------------------------------
uint *__fastcall Function_225fc6c(int a1)
{
  int v1;
  int i;
  uint *result;

  v1 = a1;
  Call_FillMemWithValue((int *)(a1 + 204), 0, 0xC0u);
  for ( i = 0; i < 23 - *(short *)(v1 + 10); ++i )
  {
    *(uchar *)(v1 + i + 277) = 1;
    *(uchar *)(v1 + 121 - i + 204) = 1;
  }
  result = *(uint **)(v1 + 396);
  if ( !result )
  {
    result = AddTaskToTaskList3((int)Function_225fccc, v1, 0);
    *(uint *)(v1 + 396) = result;
  }
  return result;
}

//----- (0225FCCC) --------------------------------------------------------
int __fastcall Function_225fccc(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  memcpy((uchar *)(a2 + 12), (char *)(a2 + 204), 192);
  Call_RemoveTaskFromTaskList(*(int **)(v2 + 396));
  result = 396;
  *(uint *)(v2 + 396) = 0;
  return result;
}

//----- (0225FCF0) --------------------------------------------------------
uint __fastcall Function_225fcf0(uint result)
{
  int v1;
  uint v2;
  short v3;
  int v4;
  short v5;
  uint v6;

  v1 = (((uint)(ushort)REG_VCOUNT + 1) >> 31)
     + __ROR4__(
         (((ushort)REG_VCOUNT + 1) << 24) - (((uint)(ushort)REG_VCOUNT + 1) >> 31),
         24);
  if ( v1 < 192 )
  {
    v2 = (REG_DISPCNT & 0xE000u) >> 13;
    if ( REG_DISPSTAT & 2 )
    {
      if ( (int)((((uint)(ushort)REG_VCOUNT + 1) >> 31)
                      + __ROR4__(
                          (((ushort)REG_VCOUNT + 1) << 24)
                        - (((uint)(ushort)REG_VCOUNT + 1) >> 31),
                          24)) >= 73
        && (int)((((uint)(ushort)REG_VCOUNT + 1) >> 31)
                      + __ROR4__(
                          (((ushort)REG_VCOUNT + 1) << 24)
                        - (((uint)(ushort)REG_VCOUNT + 1) >> 31),
                          24)) <= 121 )
      {
        v5 = WIN_OUT & 0xFFC0 | *(uchar *)(result + 401) & 0x1F;
        if ( *(uchar *)(result + 401) & 0x20 )
          v5 |= 0x20u;
        WIN_OUT = v5;
        v4 = v2 & ~(*(uint *)(result + 404) | 2);
      }
      else
      {
        v3 = WIN_OUT & 0xFFC0 | *(uchar *)(result + 400) & 0x1F;
        if ( *(uchar *)(result + 400) & 0x20 )
          v3 |= 0x20u;
        WIN_OUT = v3;
        v4 = v2 | *(uint *)(result + 404);
      }
      if ( *(uchar *)(result
                    + (((uint)(ushort)REG_VCOUNT + 1) >> 31)
                    + __ROR4__(
                        (((ushort)REG_VCOUNT + 1) << 24)
                      - (((uint)(ushort)REG_VCOUNT + 1) >> 31),
                        24)
                    + 12) == 1 )
      {
        result = ((v4 | 1) << 13) | REG_DISPCNT & 0xFFFF1FFF;
        REG_DISPCNT = ((v4 | 1) << 13) | REG_DISPCNT & 0xFFFF1FFF;
      }
      else
      {
        v6 = v4 & 0xFFFFFFFE;
        result = (v6 << 13) | REG_DISPCNT & 0xFFFF1FFF;
        REG_DISPCNT = (v6 << 13) | REG_DISPCNT & 0xFFFF1FFF;
      }
    }
  }
  return result;
}

//----- (0225FDC8) --------------------------------------------------------
int __fastcall Function_225fdc8(int a1, int a2)
{
  int v2;
  int result;
  int v4;
  uint v5;
  uint v6;
  uint v7;

  v2 = a2;
  result = *(ushort *)(a2 + 4);
  switch ( (uchar)result )
  {
    case 0:
      return result;
    case 1:
      Function_225f9b8(a2 + 52, *(uint *)(a2 + 40), *(uint *)(a2 + 8), *(uint *)a2);
      v4 = Function_225cdb4(*(uint *)(v2 + 40), *(uint *)(v2 + 8), 128, 97, 0x40u, *(uint *)v2);
      *(uint *)(v2 + 48) = v4;
      Function_2021e80(v4, 0);
      result = *(ushort *)(v2 + 4) + 1;
      *(ushort *)(v2 + 4) = result;
      break;
    case 2:
      result = Function_225fab8(a2 + 52);
      if ( result == 1 )
      {
        ++*(ushort *)(v2 + 4);
        result = 0;
        *(ushort *)(v2 + 6) = 0;
      }
      break;
    case 3:
      v5 = Function_2021e74(*(uint *)(a2 + 48));
      Function_2021e2c(*(uint *)(v2 + 48), 0x2000);
      v6 = Function_2021e74(*(uint *)(v2 + 48));
      v7 = v6;
      if ( v5 != v6 )
      {
        switch ( (uchar)v6 )
        {
          case 7:
            Function_2005748(0x5DDu);
            break;
          case 9:
            Function_2005748(0x5DDu);
            break;
          case 0xB:
            Function_2005748(0x5DDu);
            break;
          case 0xD:
            Function_2005748(0x5DDu);
            break;
          case 0xF:
            Function_2005748(0x643u);
            break;
          default:
            break;
        }
      }
      if ( v7 == 15 )
      {
        if ( *(ushort *)(v2 + 6) )
        {
          if ( *(ushort *)(v2 + 6) == 4 )
            Function_2021f24(*(uint *)(v2 + 48), 1);
        }
        else
        {
          Function_2021f24(*(uint *)(v2 + 48), 0);
        }
        if ( (short)++*(ushort *)(v2 + 6) >= 8 )
          *(ushort *)(v2 + 6) = 0;
      }
      result = Function_2021fd0(*(uint *)(v2 + 48));
      if ( !result )
      {
        ++*(ushort *)(v2 + 4);
        result = Function_2021f24(*(uint *)(v2 + 48), 0);
      }
      break;
    case 4:
      result = Function_225fad8(a2 + 52);
      if ( result == 1 )
      {
        Function_2021bd4(*(uint *)(v2 + 48));
        *(uint *)(v2 + 48) = 0;
        result = *(ushort *)(v2 + 4) + 1;
        *(uint *)(v2 + 4) = (ushort)result;
      }
      break;
    case 5:
      result = (short)++*(ushort *)(a2 + 6);
      if ( result >= 2 )
      {
        *(ushort *)(a2 + 4) = 0;
        Function_225fbf0(a2 + 52);
        Call_RemoveTaskFromTaskList(*(int **)(v2 + 44));
        result = 0;
        *(uint *)(v2 + 44) = 0;
      }
      break;
  }
  return result;
}

//----- (0225FF54) --------------------------------------------------------
int __fastcall Function_225ff54(int a1, int a2)
{
  int v2;
  int result;
  int v4;

  v2 = a2;
  result = *(ushort *)(a2 + 4);
  switch ( (uchar)result )
  {
    case 1:
      Function_225f9b8(a2 + 52, *(uint *)(a2 + 40), *(uint *)(a2 + 8), *(uint *)a2);
      v4 = Function_225cdb4(*(uint *)(v2 + 40), *(uint *)(v2 + 8), 128, 97, 0x40u, *(uint *)v2);
      *(uint *)(v2 + 48) = v4;
      Function_2021d6c(v4, 1u);
      Function_2021e80(*(uint *)(v2 + 48), 0);
      result = *(ushort *)(v2 + 4) + 1;
      *(ushort *)(v2 + 4) = result;
      break;
    case 2:
      result = Function_225fab8(a2 + 52);
      if ( result == 1 )
      {
        Function_2021cc8(*(uint *)(v2 + 48), 1);
        ++*(ushort *)(v2 + 4);
        result = 0;
        *(ushort *)(v2 + 6) = 0;
      }
      break;
    case 3:
      result = (short)++*(ushort *)(a2 + 6);
      if ( result >= 50 )
      {
        result = *(ushort *)(a2 + 4) + 1;
        *(ushort *)(a2 + 4) = result;
      }
      break;
    case 4:
      result = Function_225fad8(a2 + 52);
      if ( result == 1 )
      {
        Function_2021bd4(*(uint *)(v2 + 48));
        *(uint *)(v2 + 48) = 0;
        *(ushort *)(v2 + 6) = 0;
        result = *(ushort *)(v2 + 4) + 1;
        *(ushort *)(v2 + 4) = result;
      }
      break;
    case 5:
      result = (short)++*(ushort *)(a2 + 6);
      if ( result >= 2 )
      {
        *(ushort *)(a2 + 4) = 0;
        Function_225fbf0(a2 + 52);
        Call_RemoveTaskFromTaskList(*(int **)(v2 + 44));
        result = 0;
        *(uint *)(v2 + 44) = 0;
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (02260038) --------------------------------------------------------
void **Function_2260038()
{
  return &off_22603E4;
}

//----- (02260040) --------------------------------------------------------
int Function_2260040()
{
  return 5;
}

//----- (02260044) --------------------------------------------------------
int __fastcall Function_2260044(int a1)
{
  int v1;
  void **v2;
  int v3;

  v1 = a1;
  v2 = Function_2260038();
  v3 = Function_2260040();
  return Function_2032798((int)v2, v3, v1);
}

//----- (02260060) --------------------------------------------------------
int __fastcall Function_2260060(int a1)
{
  int v1;
  void **v2;
  int v3;

  v1 = a1;
  v2 = Function_2260038();
  v3 = Function_2260040();
  return Function_2032798((int)v2, v3, v1);
}

//----- (0226007C) --------------------------------------------------------
int Function_226007c()
{
  return 0;
}

//----- (02260080) --------------------------------------------------------
int Function_2260080()
{
  return 4;
}

//----- (02260084) --------------------------------------------------------
int __fastcall Function_2260084(int a1, int a2, uint *a3, int a4)
{
  return Function_225ca24(a4, *a3);
}

//----- (02260090) --------------------------------------------------------
int __fastcall Function_2260090(int a1, int a2, int a3, int a4)
{
  return Function_225ca2c(a4, a1, 1);
}

//----- (022600A0) --------------------------------------------------------
int __fastcall Function_22600a0(int a1, int a2, int a3, int a4)
{
  return Function_225ca2c(a4, a1, 0);
}

//----- (022600B0) --------------------------------------------------------
int __fastcall Function_22600b0(int a1, int a2, int a3, int a4)
{
  return Function_225ca44(a4);
}

//----- (022600BC) --------------------------------------------------------
int __fastcall Function_22600bc(int a1, int a2, int a3, int a4)
{
  return Function_225ca44(a4);
}

