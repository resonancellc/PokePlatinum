//----- (0222AE60) --------------------------------------------------------
int *__fastcall Function_222ae60(int a1, int a2, int a3, uint a4)
{
  int v4;
  uint v5;
  int v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int *v12;
  int *v13;
  int v14;
  int *v15;
  int **v16;
  int v17;
  int *v18;
  int v20;

  v4 = a2;
  v5 = a4;
  v6 = a1;
  v20 = a3;
  v7 = (int *)malloc(a4, 8860);
  Call_FillMemWithValue(v7, 0, 0x229Cu);
  *v7 = v6;
  v7[1] = v4;
  v7[2213] = (int)LoadFromNARC_8(146, v5, v8, v9);
  v12 = 0;
  v7[2214] = (int)LoadFromNARC_8(153, v5, v10, v11);
  v13 = v7;
  do
  {
    v13[2208] = (int)Function_2009714(152, v12, v5);
    v12 = (int *)((char *)v12 + 1);
    ++v13;
  }
  while ( (int)v12 < 2 );
  v14 = 0;
  v15 = v7;
  do
  {
    v16 = Function_2009714(23, (int *)(v14++ + 2), v5);
    v15[2210] = (int)v16;
    ++v15;
  }
  while ( v14 < 2 );
  v17 = 0;
  do
    Function_222b374(v7, v17++, v5);
  while ( v17 < 3 );
  v7[3] = v20;
  v18 = (int *)malloc(v5, 24 * v20);
  v7[2] = (int)v18;
  Call_FillMemWithValue(v18, 0, 24 * v7[3]);
  return v7;
}

//----- (0222AF14) --------------------------------------------------------
uint __fastcall Function_222af14(int a1)
{
  int v1;
  uint v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  v2 = 0;
  if ( *(uint *)(a1 + 12) )
  {
    v3 = 0;
    do
    {
      if ( !Function_222bc70(*(uint *)(v1 + 8) + v3) )
        Function_222b210(*(uint *)(v1 + 8) + v3);
      ++v2;
      v3 += 24;
    }
    while ( v2 < *(uint *)(v1 + 12) );
  }
  v4 = 0;
  do
    Function_222b404(v1, v4++);
  while ( v4 < 3 );
  Function_222aff8(v1);
  Call_FS_CloseFile(*(int **)(v1 + 8852));
  Call_FS_CloseFile(*(int **)(v1 + 8856));
  v5 = 0;
  v6 = v1;
  do
  {
    Function_2009754(*(int **)(v6 + 8832));
    ++v5;
    v6 += 4;
  }
  while ( v5 < 4 );
  free(*(uint *)(v1 + 8));
  return free(v1);
}

//----- (0222AF94) --------------------------------------------------------
int __fastcall Function_222af94(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v5 = a2;
  v6 = a4;
  v7 = a1;
  v8 = a3;
  if ( !Function_222b47c(a2, a4) )
    ErrorHandler();
  v9 = Function_222b450(v5);
  return Function_222b4cc(v7, v9, v8, v6, a5, 0);
}

//----- (0222AFD0) --------------------------------------------------------
int __fastcall Function_222afd0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = Function_222b450(a2);
  return Function_222b738(v2, v3);
}

//----- (0222AFE4) --------------------------------------------------------
int __fastcall Function_222afe4(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = Function_222b450(a2);
  return Function_222b7d4(v2, v3);
}

//----- (0222AFF8) --------------------------------------------------------
int __fastcall Function_222aff8(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  if ( *(uint *)(a1 + 8848) )
    Function_222b078();
  v2 = 0;
  do
  {
    result = Function_222b7d4(v1, v2);
    if ( result == 1 )
      result = Function_222b738(v1, v2);
    ++v2;
  }
  while ( v2 < 151 );
  return result;
}

//----- (0222B02C) --------------------------------------------------------
int __fastcall Function_222b02c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  char *v6;
  int v7;
  int result;
  int v9;
  int v10;

  v4 = a1;
  v5 = a4;
  v9 = a2;
  v10 = a3;
  if ( !a3 )
    ErrorHandler();
  Function_222b97c(v4, v9, v5);
  Function_222ba20(v4, v5);
  v6 = &byte_222D910;
  v7 = 0;
  do
  {
    result = Function_222b4cc(v4, (uchar)*v6, v9, v10, v5, 1);
    ++v7;
    ++v6;
  }
  while ( v7 < 16 );
  return result;
}

//----- (0222B078) --------------------------------------------------------
int __fastcall Function_222b078(int a1)
{
  int v1;
  char *v2;
  int v3;
  int result;

  v1 = a1;
  Function_222b9ec();
  Function_222bab0(v1);
  v2 = &byte_222D910;
  v3 = 0;
  do
  {
    result = Function_222b738(v1, (uchar)*v2);
    ++v3;
    ++v2;
  }
  while ( v3 < 16 );
  return result;
}

//----- (0222B0A0) --------------------------------------------------------
int __fastcall Function_222b0a0(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int result;

  v3 = a3;
  v4 = a1;
  Function_222b7e8();
  result = 8828;
  *(uint *)(v4 + 8828) = v3;
  return result;
}

//----- (0222B0B8) --------------------------------------------------------
int Function_222b0b8()
{
  return Function_222b914();
}

//----- (0222B0C0) --------------------------------------------------------
int __fastcall Function_222b0c0(int *a1, short *a2, int a3, int a4)
{
  int v4;
  int *v5;
  short *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v15;
  int v16;
  int v17;
  int *v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;

  v4 = a3;
  v5 = a1;
  v6 = a2;
  v15 = a4;
  v7 = Function_222bb00();
  v16 = Function_222b450(v4);
  if ( Function_222b7d4(v5, v16) != 1 )
    ErrorHandler();
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v17 = *v5;
  v8 = 14 * v16;
  v18 = &v5[14 * v16 + 9];
  v19 = *v6 << 12;
  v20 = v6[1] << 12;
  v22 = 4096;
  v23 = 4096;
  v24 = 4096;
  v26 = v6[2];
  v28 = v15;
  v9 = v5[14 * v16 + 7];
  if ( v9 != 3 && v9 != 1 )
    v27 = 2;
  else
    v27 = 1;
  v10 = Function_2021aa0((uint **)&v17);
  *(uint *)(v7 + 4) = v10;
  Function_2021e80(v10, v6[3]);
  v11 = *(uint *)(v7 + 4);
  if ( v5[v8 + 8] == 1 )
    Function_2021d6c(v11, 6u);
  else
    Function_2021d6c(v11, 1u);
  *(uint *)(v7 + 12) = 9;
  *(ushort *)(v7 + 20) = 0;
  *(uint *)(v7 + 16) = 1;
  *(uint *)v7 = &v5[v8 + 4];
  if ( Function_222b96c(v5 + 2194) )
  {
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v17 = *v5;
    v18 = v5 + 2198;
    v19 = *v6 << 12;
    v20 = v6[1] << 12;
    v22 = 4096;
    v23 = 4096;
    v24 = 4096;
    v26 = v5[2207];
    v28 = v15;
    v12 = v5[v8 + 7];
    if ( v12 != 3 && v12 != 1 )
      v27 = 2;
    else
      v27 = 1;
    v13 = Function_2021aa0((uint **)&v17);
    *(uint *)(v7 + 8) = v13;
    Function_2021e80(v13, v6[3]);
  }
  else
  {
    *(uint *)(v7 + 8) = 0;
  }
  return v7;
}

//----- (0222B210) --------------------------------------------------------
int __fastcall Function_222b210(int a1)
{
  uchar *v1;
  int v2;
  int v3;
  int result;

  v1 = (uchar *)a1;
  v2 = *(uint *)(a1 + 8);
  if ( v2 )
    Function_2021bd4(v2);
  Function_2021bd4(*((uint *)v1 + 1));
  v3 = 24;
  result = 0;
  do
  {
    *v1++ = 0;
    --v3;
  }
  while ( v3 );
  return result;
}

//----- (0222B234) --------------------------------------------------------
int __fastcall Function_222b234(int a1)
{
  return *(uint *)(a1 + 4);
}

//----- (0222B238) --------------------------------------------------------
int __fastcall Function_222b238(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;

  v9 = a4;
  v4 = a1;
  v6 = a2 << 12;
  v7 = a3 << 12;
  v8 = 0;
  Function_2021c50(*(uint **)(a1 + 4), &v6);
  result = *(uint *)(v4 + 8);
  if ( result )
  {
    v6 += 0x8000;
    v7 += 57344;
    result = Function_2021c50(*(uint **)(v4 + 8), &v6);
  }
  return result;
}

//----- (0222B278) --------------------------------------------------------
int __fastcall Function_222b278(int a1, short a2)
{
  return Function_2021f58(*(uint *)(a1 + 4), a2);
}

//----- (0222B284) --------------------------------------------------------
int __fastcall Function_222b284(int a1)
{
  return (ushort)Function_2021f74(*(uint *)(a1 + 4));
}

//----- (0222B294) --------------------------------------------------------
uint __fastcall Function_222b294(int a1, int a2)
{
  int v2;
  int v3;
  uint result;

  v2 = a1;
  v3 = a2;
  Function_2021cac(*(uint *)(a1 + 4), a2);
  result = *(uint *)(v2 + 8);
  if ( result )
    result = Function_2021cac(result, v3);
  return result;
}

//----- (0222B2B0) --------------------------------------------------------
int __fastcall Function_222b2b0(int a1)
{
  return Function_2021d34(*(uint *)(a1 + 4));
}

//----- (0222B2BC) --------------------------------------------------------
int __fastcall Function_222b2bc(int a1)
{
  return *(uint *)(*(uint *)a1 + 16);
}

//----- (0222B2C4) --------------------------------------------------------
int __fastcall Function_222b2c4(int a1)
{
  return *(uint *)(a1 + 12);
}

//----- (0222B2C8) --------------------------------------------------------
uint __fastcall Function_222b2c8(int a1, uint a2)
{
  return Function_2021e50(*(uint *)(a1 + 4), a2);
}

//----- (0222B2D4) --------------------------------------------------------
uint __fastcall Function_222b2d4(int a1)
{
  return Function_2021e74(*(uint *)(a1 + 4));
}

//----- (0222B2E0) --------------------------------------------------------
int __fastcall Function_222b2e0(int result, int a2, int a3)
{
  int v3;
  int v4;
  int v5;

  if ( *(uint *)(result + 8) )
  {
    v3 = (a2 + 8) << 12;
    v4 = (a3 + 14) << 12;
    v5 = 0;
    result = Function_2021c50(*(uint **)(result + 8), &v3);
  }
  return result;
}

//----- (0222B308) --------------------------------------------------------
void **__fastcall Function_222b308(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  void **result;
  int (__fastcall *v7)(int, int);

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( a2 >= 10 )
    ErrorHandler();
  if ( v5 >= 4 )
    ErrorHandler();
  *(uint *)(v4 + 12) = v3;
  *(ushort *)(v4 + 20) = 0;
  result = &off_222D920;
  v7 = (int (__fastcall *)(int, int))*(&off_222D920 + v3);
  if ( v7 )
    result = (void **)v7(v4, v5);
  return result;
}

//----- (0222B33C) --------------------------------------------------------
int __fastcall Function_222b33c(int a1)
{
  int v1;
  int v2;
  int result;
  int v4;

  v1 = a1;
  v2 = *(uint *)(a1 + 12);
  result = 0;
  v4 = *((uchar *)dword_222D904 + v2);
  if ( v4 == 255 )
  {
    result = 1;
  }
  else if ( v4 >= *(short *)(v1 + 20) + 1 )
  {
    result = 1;
  }
  if ( result == 1 )
  {
    Function_222bb38(v1);
    result = *(short *)(v1 + 20) + 1;
    *(ushort *)(v1 + 20) = result;
  }
  return result;
}

//----- (0222B374) --------------------------------------------------------
int *__fastcall Function_222b374(int a1, int a2, uint a3)
{
  int v3;
  char *v4;
  uint *v5;
  uint v6;
  int v7;
  uint v8;
  int *result;
  int v10;
  int v11;
  uint v12;

  v10 = a1;
  v3 = 4 * a2;
  v11 = a2;
  v12 = a3;
  if ( *(uint *)(a1 + 16 * a2 + 8472) )
    ErrorHandler();
  v4 = &byte_222D900;
  v5 = (uint *)&dword_222D970[v3];
  v6 = 0;
  v7 = v10 + v3 * 4;
  do
  {
    v8 = (v6 >> 31) + __ROR4__((v6 << 31) - (v6 >> 31), 31) + 2;
    result = Function_2009bc4(
               *(uint *)(v10 + 4 * v8 + 8832),
               *(uint *)(v10 + 8852),
               *v5,
               0,
               (uchar)*v4 + 2 * v11 + 256,
               v8,
               v12);
    ++v6;
    *(uint *)(v7 + 8472) = result;
    ++v4;
    ++v5;
    v7 += 4;
  }
  while ( (int)v6 < 4 );
  return result;
}

//----- (0222B404) --------------------------------------------------------
int __fastcall Function_222b404(int a1, int a2)
{
  int v2;
  int v3;
  uint v4;
  int v5;
  int result;

  v2 = a1;
  v3 = 16 * a2;
  if ( !*(uint *)(a1 + 16 * a2 + 8472) )
    ErrorHandler();
  v4 = 0;
  v5 = v2 + v3;
  do
  {
    Function_2009d68(
      *(int **)(v2 + 4 * ((v4 >> 31) + __ROR4__((v4 << 31) - (v4 >> 31), 31) + 2) + 8832),
      *(uint ***)(v5 + 8472));
    result = 8472;
    ++v4;
    *(uint *)(v5 + 8472) = 0;
    v5 += 4;
  }
  while ( (int)v4 < 4 );
  return result;
}

//----- (0222B450) --------------------------------------------------------
int __fastcall Function_222b450(int a1)
{
  short *v1;
  int v2;

  v1 = &word_222D9A0;
  v2 = 0;
  do
  {
    if ( a1 == (ushort)*v1 )
      return *((ushort *)&unk_222D9A2 + 2 * v2);
    ++v2;
    v1 += 2;
  }
  while ( v2 < 151 );
  ErrorHandler();
  return 0;
}

//----- (0222B47C) --------------------------------------------------------
int __fastcall Function_222b47c(int a1, int a2)
{
  if ( a2 )
    return 1;
  if ( a1 && a1 != 97 && (uint)(a1 - 252) > 1 )
    return 0;
  return 1;
}

//----- (0222B49C) --------------------------------------------------------
int __fastcall Function_222b49c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( a2 != 2 && a2 != 3 )
    ErrorHandler();
  v6 = v3 - 2;
  if ( !v5 )
    v6 = v3;
  return (uchar)byte_222D900[v6] + 2 * v4 + 256;
}

//----- (0222B4CC) --------------------------------------------------------
int __fastcall Function_222b4cc(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int result;

  v6 = a1;
  v7 = a2;
  v8 = a3;
  v9 = a4;
  if ( *(uint *)(a1 + 56 * a2 + 20) )
    ErrorHandler();
  if ( a6 )
    result = Function_222b664(v6, v7, v8, v9);
  else
    result = Function_222b510(v6, v7, v8, v9);
  return result;
}

//----- (0222B510) --------------------------------------------------------
int __fastcall Function_222b510(uint *a1, int a2, int a3, int a4, uint a5)
{
  uint *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint *v11;
  int v12;
  int v13;
  int v15;
  int v16;
  int v17;
  int v18;

  v5 = a1;
  v18 = a2 + 512;
  v6 = 2 * a2;
  v7 = 56 * a2;
  v15 = a3;
  v16 = a4;
  v8 = (int)(a1 + 5);
  *(uint *)(v8 + v7) = Function_2009a4c(a1[2208], a1[2213], 2 * a2 + 14, 0, a2 + 512, a3, a5);
  v9 = (int)(v5 + 6);
  v5[v7 / 4u + 6] = Function_2009b04(v5[2209], v5[2213], v6 + 13, 0, v18, v15, 1, a5);
  v10 = Function_2009e1c(*(uint *)(v8 + v7));
  v17 = *(uint *)(v10 + 16) != 6144;
  if ( v16 == 2 )
  {
    *(uint *)(v10 + 16) = 2048;
  }
  else if ( v16 == 1 )
  {
    if ( *(uint *)(v10 + 16) != 6144 )
      *(uint *)(v10 + 16) = 5120;
    else
      *(uint *)(v10 + 16) = 6144;
  }
  if ( !Function_200a450(*(int **)(v8 + v7)) )
    ErrorHandler();
  if ( !Function_200a640(*(int **)(v9 + v7)) )
    ErrorHandler();
  if ( v5[1] )
    Function_222bc80(v5, *(uint *)(v9 + v7), 1);
  Function_2009d4c(*(int **)(v8 + v7));
  Function_2009d4c(*(int **)(v9 + v7));
  v11 = &v5[v7 / 4u];
  v11[7] = v15;
  v11[8] = v16;
  v11[4] = 0;
  v12 = Function_222b49c(v16, 2, v17);
  v13 = Function_222b49c(v16, 3, v17);
  return Function_20093b4(
           (int)&v5[v7 / 4u + 9],
           v18,
           v18,
           v12,
           v13,
           -1,
           -1,
           0,
           0,
           v5[2208],
           v5[2209],
           v5[2210],
           v5[2211],
           0,
           0);
}

//----- (0222B664) --------------------------------------------------------
int __fastcall Function_222b664(int *a1, int a2, int a3, int a4, uint a5)
{
  int *v5;
  int v6;
  int v7;
  int *v8;
  int v10;
  int v11;
  int v12;
  int v13;

  v5 = a1;
  v13 = a2 - 2;
  v12 = a2 + 512;
  v6 = 56 * a2;
  v10 = a3;
  v11 = a4;
  v7 = (int)(a1 + 5);
  a1[14 * a2 + 5] = (int)Function_2009a4c(a1[2208], a1[2214], a2 - 1, 0, a2 + 512, a3, a5);
  if ( v11 == 2 )
  {
    *(uint *)(Function_2009e1c(*(uint *)(v7 + v6)) + 16) = 2048;
  }
  else if ( v11 == 1 )
  {
    *(uint *)(Function_2009e1c(*(uint *)(v7 + v6)) + 16) = 5120;
  }
  if ( !Function_200a450(*(int **)(v7 + v6)) )
    ErrorHandler();
  Function_2009d4c(*(int **)(v7 + v6));
  v8 = &v5[v6 / 4u];
  v8[6] = 0;
  v8[7] = v10;
  v8[8] = v11;
  v8[4] = 1;
  return Function_20093b4(
           (int)&v5[v6 / 4u + 9],
           v12,
           1026,
           v13 + 384,
           v13 + 384,
           -1,
           -1,
           0,
           0,
           v5[2208],
           v5[2209],
           v5[2210],
           v5[2211],
           0,
           0);
}

//----- (0222B738) --------------------------------------------------------
int __fastcall Function_222b738(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = 56 * a2;
  if ( !*(uint *)(a1 + 56 * a2 + 20) )
    ErrorHandler();
  if ( *(uint *)(v3 + v4 + 16) )
    result = Function_222b7ac(v3, v2);
  else
    result = Function_222b76c(v3, v2);
  return result;
}

//----- (0222B76C) --------------------------------------------------------
int __fastcall Function_222b76c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a1;
  v3 = 56 * a2;
  v4 = a1 + 20;
  Function_200a4e4(*(int **)(a1 + 20 + 56 * a2));
  Function_200a6dc(*(int **)(v2 + 24 + v3));
  Function_2009d68(*(int **)(v2 + 8832), *(uint ***)(v4 + v3));
  Function_2009d68(*(int **)(v2 + 8836), *(uint ***)(v2 + 24 + v3));
  result = 0;
  *(uint *)(v4 + v3) = 0;
  *(uint *)(v2 + 24 + v3) = 0;
  return result;
}

//----- (0222B7AC) --------------------------------------------------------
int __fastcall Function_222b7ac(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a1;
  v3 = a1 + 20;
  v4 = 56 * a2;
  Function_200a4e4(*(int **)(a1 + 20 + 56 * a2));
  Function_2009d68(*(int **)(v2 + 8832), *(uint ***)(v3 + v4));
  result = 0;
  *(uint *)(v3 + v4) = 0;
  return result;
}

//----- (0222B7D4) --------------------------------------------------------
BOOL __fastcall Function_222b7d4(int a1, int a2)
{
  return *(uint *)(a1 + 56 * a2 + 20) != 0;
}

//----- (0222B7E8) --------------------------------------------------------
int __fastcall Function_222b7e8(int a1, int a2, uint a3)
{
  int v3;
  uint v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  int v10;
  int v11;

  v3 = a1;
  v10 = a2;
  v4 = a3;
  if ( *(uint *)(a1 + 8776) )
    ErrorHandler();
  v5 = 0;
  if ( Function_222b7d4(v3, 0) == 1 )
  {
    v11 = 0;
    v5 = 1;
  }
  else if ( Function_222b7d4(v3, 1) == 1 )
  {
    v5 = 1;
    v11 = 1;
  }
  else if ( Function_222b7d4(v3, 149) == 1 )
  {
    v11 = 149;
    v5 = 1;
  }
  else if ( Function_222b7d4(v3, 150) == 1 )
  {
    v11 = 150;
    v5 = 1;
  }
  if ( v5 != 1 )
    ErrorHandler();
  v6 = 0;
  v7 = v3;
  do
  {
    v8 = Function_2009bc4(*(uint *)(v7 + 8840), *(uint *)(v3 + 8852), v6, 0, 288, v6 + 2, v4);
    ++v6;
    *(uint *)(v7 + 8784) = v8;
    v7 += 4;
  }
  while ( v6 < 2 );
  *(uint *)(v3 + 8776) = Function_2009a4c(*(uint *)(v3 + 8832), *(uint *)(v3 + 8852), 2u, 0, 288, v10, v4);
  if ( !Function_200a450(*(int **)(v3 + 8776)) )
    ErrorHandler();
  Function_2009d4c(*(int **)(v3 + 8776));
  return Function_20093b4(
           v3 + 8792,
           288,
           v11 + 512,
           288,
           288,
           -1,
           -1,
           0,
           0,
           *(uint *)(v3 + 8832),
           *(uint *)(v3 + 8836),
           *(uint *)(v3 + 8840),
           *(uint *)(v3 + 8844),
           0,
           0);
}

//----- (0222B914) --------------------------------------------------------
int __fastcall Function_222b914(int a1)
{
  int v1;
  int result;
  int v3;

  v1 = a1;
  result = Function_222b96c(a1 + 8776);
  if ( result == 1 )
  {
    Function_200a4e4(*(int **)(v1 + 8776));
    Function_2009d68(*(int **)(v1 + 8832), *(uint ***)(v1 + 8776));
    v3 = 0;
    *(uint *)(v1 + 8776) = 0;
    do
    {
      result = Function_2009d68(*(int **)(v1 + 8840), *(uint ***)(v1 + 8784));
      *(uint *)(v1 + 8784) = 0;
      ++v3;
      v1 += 4;
    }
    while ( v3 < 2 );
  }
  return result;
}

//----- (0222B96C) --------------------------------------------------------
BOOL __fastcall Function_222b96c(uint *a1)
{
  return *a1 != 0;
}

//----- (0222B97C) --------------------------------------------------------
int __fastcall Function_222b97c(int a1, int a2, uint a3)
{
  int v3;
  int v4;
  uint v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( *(uint *)(a1 + 8848) )
    ErrorHandler();
  *(uint *)(v3 + 8848) = Function_2009b04(*(uint *)(v3 + 8836), *(uint *)(v3 + 8856), 0, 0, 1026, v4, 8, v5);
  if ( !Function_200a640(*(int **)(v3 + 8848)) )
    ErrorHandler();
  if ( *(uint *)(v3 + 4) )
    Function_222bc80(v3, *(uint *)(v3 + 8848), 8);
  return Function_2009d4c(*(int **)(v3 + 8848));
}

//----- (0222B9EC) --------------------------------------------------------
int __fastcall Function_222b9ec(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( !*(uint *)(a1 + 8848) )
    ErrorHandler();
  Function_200a6dc(*(int **)(v1 + 8848));
  Function_2009d68(*(int **)(v1 + 8836), *(uint ***)(v1 + 8848));
  result = 8848;
  *(uint *)(v1 + 8848) = 0;
  return result;
}

//----- (0222BA20) --------------------------------------------------------
int __fastcall Function_222ba20(int *a1, uint a2)
{
  int *v2;
  int v3;
  int *v4;
  uint v5;
  int *v6;
  int result;
  uint v8;
  uint v9;

  v2 = a1;
  v8 = a2;
  if ( a1[2130] )
    ErrorHandler();
  v3 = 0;
  v9 = 17;
  v4 = v2;
  v5 = 18;
  do
  {
    v4[2130] = (int)Function_2009bc4(v2[2210], v2[2214], v9, 0, v3 + 384, 2u, v8);
    v6 = Function_2009bc4(v2[2211], v2[2214], v5, 0, v3++ + 384, 3u, v8);
    v4[2131] = (int)v6;
    v4 += 4;
    result = v9 + 2;
    v5 += 2;
    v9 += 2;
  }
  while ( v3 < 16 );
  return result;
}

//----- (0222BAB0) --------------------------------------------------------
int __fastcall Function_222bab0(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  if ( !*(uint *)(a1 + 8520) )
    ErrorHandler();
  v2 = 0;
  v3 = v1;
  do
  {
    Function_2009d68(*(int **)(v1 + 8840), *(uint ***)(v3 + 8520));
    Function_2009d68(*(int **)(v1 + 8844), *(uint ***)(v3 + 8524));
    ++v2;
    *(uint *)(v3 + 8520) = 0;
    result = 8524;
    *(uint *)(v3 + 8524) = 0;
    v3 += 16;
  }
  while ( v2 < 16 );
  return result;
}

//----- (0222BB00) --------------------------------------------------------
int __fastcall Function_222bb00(int a1)
{
  int v1;
  uint v2;
  int v3;
  int result;

  v1 = a1;
  v2 = 0;
  if ( *(uint *)(a1 + 12) )
  {
    v3 = 0;
    while ( Function_222bc70(*(uint *)(v1 + 8) + v3) != 1 )
    {
      ++v2;
      v3 += 24;
      if ( v2 >= *(uint *)(v1 + 12) )
        goto LABEL_6;
    }
    result = *(uint *)(v1 + 8) + 24 * v2;
  }
  else
  {
LABEL_6:
    ErrorHandler();
    result = 0;
  }
  return result;
}

//----- (0222BB38) --------------------------------------------------------
int __fastcall Function_222bb38(int result)
{
  int (*v1)(void);

  v1 = (int (*)(void))dword_222D948[*(uint *)(result + 12)];
  if ( v1 )
    result = v1();
  return result;
}

//----- (0222BB50) --------------------------------------------------------
int __fastcall Function_222bb50(int a1, uint a2)
{
  *(uint *)(a1 + 16) = a2;
  return Function_2021dcc(*(uint *)(a1 + 4), a2);
}

//----- (0222BB5C) --------------------------------------------------------
int __fastcall Function_222bb5c(int a1, int a2)
{
  *(uint *)(a1 + 16) = a2;
  return Function_2021dcc(*(uint *)(a1 + 4), 4u);
}

//----- (0222BB6C) --------------------------------------------------------
int __fastcall Function_222bb6c(int a1, int a2)
{
  *(uint *)(a1 + 16) = a2;
  return Function_2021dcc(*(uint *)(a1 + 4), a2 + 5);
}

//----- (0222BB7C) --------------------------------------------------------
int __fastcall Function_222bb7c(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a1;
  v3 = a2;
  result = Function_2021dcc(*(uint *)(a1 + 4), *(uint *)(a1 + 16) + 5);
  *(uint *)(v2 + 16) = v3;
  return result;
}

//----- (0222BB90) --------------------------------------------------------
int __fastcall Function_222bb90(int a1, int a2)
{
  *(uint *)(a1 + 16) = a2;
  return Function_2021dcc(*(uint *)(a1 + 4), a2 + 9);
}

//----- (0222BBA0) --------------------------------------------------------
int __fastcall Function_222bba0(int a1, int a2)
{
  *(uint *)(a1 + 16) = a2;
  return Function_2021dcc(*(uint *)(a1 + 4), a2 + 5);
}

//----- (0222BBB0) --------------------------------------------------------
int __fastcall Function_222bbb0(int a1, int a2)
{
  *(uint *)(a1 + 16) = a2;
  return Function_2021dcc(*(uint *)(a1 + 4), a2 + 5);
}

//----- (0222BBC0) --------------------------------------------------------
int __fastcall Function_222bbc0(int a1, int a2)
{
  *(uint *)(a1 + 16) = a2;
  return Function_2021dcc(*(uint *)(a1 + 4), a2 + 5);
}

//----- (0222BBD0) --------------------------------------------------------
int __fastcall Function_222bbd0(int a1, int a2)
{
  *(uint *)(a1 + 16) = a2;
  return Function_2021dcc(*(uint *)(a1 + 4), a2 + 5);
}

//----- (0222BBE0) --------------------------------------------------------
uint __fastcall Function_222bbe0(int a1)
{
  return Function_2021e2c(*(uint *)(a1 + 4), 0x2000);
}

//----- (0222BBF0) --------------------------------------------------------
uint __fastcall Function_222bbf0(int a1)
{
  return Function_2021e2c(*(uint *)(a1 + 4), 0x2000);
}

//----- (0222BC00) --------------------------------------------------------
uint __fastcall Function_222bc00(int a1)
{
  int v1;
  bool v2;
  int v3;
  uint result;

  v1 = a1;
  v2 = *(short *)(a1 + 20) == 0;
  v3 = *(uint *)(a1 + 4);
  if ( v2 )
    result = Function_2021e50(v3, 1u);
  else
    result = Function_2021d6c(v3, *(uint *)(v1 + 16) + 5);
  return result;
}

//----- (0222BC20) --------------------------------------------------------
uint __fastcall Function_222bc20(int a1)
{
  return Function_2021e2c(*(uint *)(a1 + 4), 0x2000);
}

//----- (0222BC30) --------------------------------------------------------
uint __fastcall Function_222bc30(int a1)
{
  return Function_2021e2c(*(uint *)(a1 + 4), 4096);
}

//----- (0222BC40) --------------------------------------------------------
uint __fastcall Function_222bc40(int a1)
{
  return Function_2021e2c(*(uint *)(a1 + 4), 4096);
}

//----- (0222BC50) --------------------------------------------------------
uint __fastcall Function_222bc50(int a1)
{
  return Function_2021e2c(*(uint *)(a1 + 4), 0x8000);
}

//----- (0222BC60) --------------------------------------------------------
uint __fastcall Function_222bc60(int a1)
{
  return Function_2021e2c(*(uint *)(a1 + 4), 24576);
}

//----- (0222BC70) --------------------------------------------------------
BOOL __fastcall Function_222bc70(int a1)
{
  return *(uint *)(a1 + 4) == 0;
}

//----- (0222BC80) --------------------------------------------------------
int __fastcall Function_222bc80(int a1, int a2, short a3)
{
  int *v3;
  int v4;
  short v5;
  int v6;
  int v7;
  int result;
  int v9;

  v3 = (int *)a2;
  v4 = a1;
  v5 = a3;
  v9 = Function_2009e34(a2);
  v6 = Function_200a760(v3, 1);
  v7 = Function_200a760(v3, 2);
  if ( v6 != -1 )
    Function_2002fbc(*(uint *)(v4 + 4), *(uint *)(v9 + 12), 2, 16 * v6 & 0xFFFF, 32 * v5);
  result = -1;
  if ( v7 != -1 )
    result = Function_2002fbc(*(uint *)(v4 + 4), *(uint *)(v9 + 12), 3, 16 * v7 & 0xFFFF, 32 * v5);
  return result;
}

//----- (0222BCE8) --------------------------------------------------------
ushort *__fastcall Function_222bce8(ushort a1, ushort a2, uint a3)
{
  uint v3;
  ushort v4;
  ushort v5;
  ushort *v6;
  int v7;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = (ushort *)malloc(a3, 8);
  if ( !v6 )
    ErrorHandler();
  *v6 = v4;
  v6[1] = v5;
  v7 = malloc(v3, 4 * v6[1] * *v6);
  *((uint *)v6 + 1) = v7;
  if ( !v7 )
    ErrorHandler();
  Call_FillMemWithValue(*((int **)v6 + 1), 0, 4 * v6[1] * *v6);
  return v6;
}

//----- (0222BD30) --------------------------------------------------------
uint __fastcall Function_222bd30(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  free(*(uint *)(v1 + 4));
  return free(v1);
}

//----- (0222BD48) --------------------------------------------------------
int __fastcall Function_222bd48(ushort *a1)
{
  return *a1;
}

//----- (0222BD4C) --------------------------------------------------------
int __fastcall Function_222bd4c(int a1)
{
  return *(ushort *)(a1 + 2);
}

//----- (0222BD50) --------------------------------------------------------
uchar *__fastcall Function_222bd50(ushort *a1, char *a2)
{
  ushort *v2;
  char *v3;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    ErrorHandler();
  return memcpy(*((uchar **)v2 + 1), v3, 4 * v2[1] * *v2);
}

//----- (0222BD70) --------------------------------------------------------
int __fastcall Function_222bd70(ushort *a1, uint a2, uint a3)
{
  ushort *v3;
  uint v4;
  uint v5;
  uint v6;
  int v8;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v8 = -1;
  if ( !a1 )
    ErrorHandler();
  v6 = *v3;
  if ( v6 > v4 && v3[1] > v5 )
    v8 = *(uint *)(*((uint *)v3 + 1) + 4 * (v4 + v6 * v5));
  return v8;
}

//----- (0222BDAC) --------------------------------------------------------
int __fastcall Function_222bdac(ushort *a1, uint a2, uint a3)
{
  ushort *v3;
  uint v4;
  uint v5;
  int v6;
  int result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( !a1 )
    ErrorHandler();
  v6 = Function_222bd70(v3, v4, v5);
  if ( v6 == -1 )
    result = 1;
  else
    result = v6 & 1;
  return result;
}

//----- (0222BDE4) --------------------------------------------------------
uint __fastcall Function_222bde4(ushort *a1, uint a2, uint a3)
{
  ushort *v3;
  uint v4;
  uint v5;
  uint v6;
  uint result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( !a1 )
    ErrorHandler();
  v6 = Function_222bd70(v3, v4, v5);
  if ( v6 == -1 )
    result = 0;
  else
    result = v6 >> 1;
  return result;
}

//----- (0222BE18) --------------------------------------------------------
int __fastcall Function_222be18(int a1, uint a2)
{
  uint v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = a1;
  v4 = malloc(a2, 8);
  if ( !v4 )
    ErrorHandler();
  *(uint *)(v4 + 4) = v3;
  v5 = malloc(v2, 24 * v3);
  *(uint *)v4 = v5;
  if ( !v5 )
    ErrorHandler();
  Call_FillMemWithValue(*(int **)v4, 0, 24 * *(uint *)(v4 + 4));
  return v4;
}

//----- (0222BE58) --------------------------------------------------------
uint __fastcall Function_222be58(int *a1)
{
  int *v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  free(*v1);
  return free((int)v1);
}

//----- (0222BE70) --------------------------------------------------------
int __fastcall Function_222be70(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = Function_222bf18(a1, *(uchar *)(a2 + 7));
  return Function_222c350(v3, v2);
}

//----- (0222BE84) --------------------------------------------------------
int __fastcall Function_222be84(int a1)
{
  int v1;
  int result;
  uint v3;
  uint v4;

  v1 = a1;
  result = Function_222beb0();
  v3 = result;
  v4 = 0;
  if ( result )
  {
    do
    {
      result = Function_222bf50(v1, (ushort)v4);
      if ( result )
        result = Function_222c37c();
      ++v4;
    }
    while ( v4 < v3 );
  }
  return result;
}

//----- (0222BEB0) --------------------------------------------------------
int __fastcall Function_222beb0(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return *(uint *)(v1 + 4);
}

//----- (0222BEC0) --------------------------------------------------------
int __fastcall Function_222bec0(int a1, ushort *a2)
{
  int v2;
  ushort *v3;
  int result;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    ErrorHandler();
  if ( !v3 )
    ErrorHandler();
  result = Function_222c0b8(v2);
  *(ushort *)(result + 4) = *v3;
  *(ushort *)(result + 6) = v3[1];
  *(ushort *)(result + 8) = *v3;
  *(ushort *)(result + 10) = v3[1];
  *(ushort *)(result + 12) = v3[2];
  *(uchar *)(result + 21) = v3[3];
  *(uchar *)(result + 20) = v3[4];
  *(ushort *)(result + 14) = v3[5];
  *(uint *)result = 1;
  return result;
}

//----- (0222BF08) --------------------------------------------------------
uchar *__fastcall Function_222bf08(uchar *result)
{
  int v1;

  v1 = 24;
  do
  {
    *result++ = 0;
    --v1;
  }
  while ( v1 );
  return result;
}

//----- (0222BF18) --------------------------------------------------------
int __fastcall Function_222bf18(uint *a1, int a2)
{
  uint v2;
  uint v3;
  uint *v4;
  int v5;
  uint *v6;

  v2 = a1[1];
  v3 = 0;
  if ( !v2 )
    return 0;
  v4 = (uint *)*a1;
  v5 = 0;
  v6 = (uint *)*a1;
  while ( *v6 != 1 || a2 != LOWORD(v4[v5 + 3]) )
  {
    ++v3;
    v6 += 6;
    v5 += 6;
    if ( v3 >= v2 )
      return 0;
  }
  return (int)&v4[6 * v3];
}

//----- (0222BF50) --------------------------------------------------------
int __fastcall Function_222bf50(uint *a1, uint a2)
{
  uint *v2;
  uint v3;
  int result;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    ErrorHandler();
  if ( v3 >= v2[1] )
    ErrorHandler();
  if ( *(uint *)(*v2 + 24 * v3) == 1 )
    result = *v2 + 24 * v3;
  else
    result = 0;
  return result;
}

//----- (0222BF80) --------------------------------------------------------
int __fastcall Function_222bf80(uint *a1, int a2)
{
  return Function_222bf18(a1, a2);
}

//----- (0222BF88) --------------------------------------------------------
int __fastcall Function_222bf88(uint *a1, uint a2)
{
  return Function_222bf50(a1, a2);
}

//----- (0222BF90) --------------------------------------------------------
int __fastcall Function_63_222bf90(int a1)
{
  int v1;
  int v2;

  v2 = a1;
  if ( !a1 )
    LOBYTE(a1) = ErrorHandler();
  switch ( (uchar)a1 )
  {
    case 0:
      v1 = *(short *)(v2 + 4);
      break;
    case 1:
      v1 = *(short *)(v2 + 6);
      break;
    case 2:
      v1 = *(short *)(v2 + 8);
      break;
    case 3:
      v1 = *(short *)(v2 + 10);
      break;
    case 4:
      v1 = *(ushort *)(v2 + 12);
      break;
    case 5:
      v1 = *(uchar *)(v2 + 21);
      break;
    case 6:
      v1 = *(uchar *)(v2 + 20);
      break;
    case 7:
      v1 = *(ushort *)(v2 + 14);
      break;
    case 8:
      v1 = *(ushort *)(v2 + 16);
      break;
    case 9:
      v1 = *(ushort *)(v2 + 18);
      break;
    case 0xA:
      v1 = *(ushort *)(v2 + 22);
      break;
    default:
      ErrorHandler();
      break;
  }
  return v1;
}

//----- (0222C000) --------------------------------------------------------
uint __fastcall Function_222c000(uint result, int a2, int a3)
{
  uint v3;
  int v4;

  v3 = result;
  v4 = a3;
  if ( !result )
    result = ErrorHandler();
  switch ( (uchar)result )
  {
    case 0:
      *(ushort *)(v3 + 4) = v4;
      break;
    case 1:
      *(ushort *)(v3 + 6) = v4;
      break;
    case 2:
      *(ushort *)(v3 + 8) = v4;
      break;
    case 3:
      *(ushort *)(v3 + 10) = v4;
      break;
    case 4:
      *(ushort *)(v3 + 12) = v4;
      break;
    case 5:
      if ( v4 >= 12 )
        result = ErrorHandler();
      *(uchar *)(v3 + 21) = v4;
      break;
    case 6:
      if ( v4 >= 4 )
        result = ErrorHandler();
      *(uchar *)(v3 + 20) = v4;
      break;
    case 7:
      *(ushort *)(v3 + 14) = v4;
      break;
    case 8:
      *(ushort *)(v3 + 16) = v4;
      break;
    case 9:
      *(ushort *)(v3 + 18) = v4;
      break;
    case 0xA:
      *(ushort *)(v3 + 22) = v4;
      break;
    default:
      result = ErrorHandler();
      break;
  }
  return result;
}

//----- (0222C078) --------------------------------------------------------
int __fastcall Function_222c078(int a1, int a2)
{
  return (ushort)(a1 + *((char *)dword_222DC04 + 2 * a2)) | ((ushort)(HIWORD(a1)
                                                                                        + *((char *)dword_222DC04
                                                                                          + 2 * a2
                                                                                          + 1)) << 16);
}

//----- (0222C0AC) --------------------------------------------------------
int __fastcall Function_222c0ac(int a1)
{
  return *((uchar *)&dword_222DC00 + a1);
}

//----- (0222C0B8) --------------------------------------------------------
int __fastcall Function_222c0b8(int a1)
{
  uint v1;
  uint v2;
  uint *v3;
  int result;

  v1 = *(uint *)(a1 + 4);
  v2 = 0;
  if ( v1 )
  {
    v3 = *(uint **)a1;
    while ( *v3 )
    {
      ++v2;
      v3 += 6;
      if ( v2 >= v1 )
        goto LABEL_6;
    }
    result = *(uint *)a1 + 24 * v2;
  }
  else
  {
LABEL_6:
    ErrorHandler();
    result = 0;
  }
  return result;
}

//----- (0222C0E4) --------------------------------------------------------
int __fastcall Function_222c0e4(int a1)
{
  return *(ushort *)(a1 + 4) | (*(ushort *)(a1 + 6) << 16);
}

//----- (0222C0F0) --------------------------------------------------------
int __fastcall Function_222c0f0(int a1)
{
  return *(ushort *)(a1 + 8) | (*(ushort *)(a1 + 10) << 16);
}

//----- (0222C0FC) --------------------------------------------------------
int __fastcall Function_222c0fc(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  short v6;
  short v7;
  short v9;
  short v10;
  short v11;
  short v12;

  v1 = a1;
  v2 = Function_63_222bf90(a1);
  v3 = Function_63_222bf90(v1);
  v4 = Function_222c0e4(v1);
  v5 = Function_222c0f0(v1);
  v9 = v5;
  v10 = v4 - v5;
  v6 = HIWORD(v5);
  v12 = HIWORD(v4) - HIWORD(v5);
  if ( v2 <= 0 )
  {
    v7 = 0;
    v11 = 0;
  }
  else
  {
    v11 = s32_div_f(v10 * v2, v3);
    v7 = s32_div_f(v12 * v2, v3);
  }
  return (ushort)(v11 + v9) | ((ushort)(v7 + v6) << 16);
}

//----- (0222C1A4) --------------------------------------------------------
int __fastcall Function_222c1a4(int result, int a2)
{
  *(uint *)(result + 4) = a2;
  return result;
}

//----- (0222C1B4) --------------------------------------------------------
int __fastcall Function_222c1b4(int result, int a2)
{
  *(uint *)(result + 8) = a2;
  return result;
}

//----- (0222C1C4) --------------------------------------------------------
int __fastcall Function_222c1c4(int a1, uint *a2, int a3, int a4)
{
  int v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint *v13;
  int v14;
  uint v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;

  v25 = a4;
  v4 = a1;
  v13 = a2;
  v5 = a3;
  v20 = Function_222c0e4(a1);
  v6 = (int *)(&v13 - 1);
  v24 = v20;
  *(ushort *)v6 = v20;
  *((ushort *)v6 + 1) = HIWORD(v24);
  v19 = Function_222c078((int)*(&v13 - 1), v5);
  v22 = v19;
  v14 = Function_63_222bf90(v4);
  v7 = 0;
  v15 = Function_222beb0((int)v13);
  if ( !v15 )
    return 0;
  v8 = SHIWORD(v22);
  v16 = (short)v22;
  while ( 1 )
  {
    v9 = Function_222bf88(v13, (ushort)v7);
    v10 = v9;
    if ( v9 )
    {
      v11 = Function_63_222bf90(v9);
      if ( v11 != v14 )
      {
        v18 = Function_222c0e4(v10);
        v23 = v18;
        if ( (short)v18 == v16 && SHIWORD(v23) == v8 )
          return v10;
        v17 = Function_222c0f0(v10);
        v21 = v17;
        if ( (short)v17 == v16 && SHIWORD(v21) == v8 )
          break;
      }
    }
    if ( ++v7 >= v15 )
      return 0;
  }
  return v10;
}

//----- (0222C2AC) --------------------------------------------------------
int Function_222c2ac()
{
  return Function_222c2ae();
}

//----- (0222C2AE) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0222C350) --------------------------------------------------------
int __fastcall Function_222c350(int a1, ushort *a2, int a3, int a4)
{
  ushort *v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int result;
  int v10;

  v10 = a4;
  v4 = a2;
  v5 = &v10 - 1;
  *(ushort *)v5 = *a2;
  v6 = a1;
  *((ushort *)v5 + 1) = a2[1];
  v7 = *(&v10 - 1);
  v8 = *((uchar *)v4 + 6);
  ((void (__cdecl *)(int))*(&off_222DC0C + (ushort)v4[2]))(a1);
  result = 0;
  *(ushort *)(v6 + 22) = 0;
  return result;
}

//----- (0222C37C) --------------------------------------------------------
int __fastcall Function_222c37c(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = Function_63_222bf90(a1);
  result = ((int (__fastcall *)(int))*(&off_222DC3C + v2))(v1);
  ++*(ushort *)(v1 + 22);
  if ( result == 1 )
  {
    Function_222ca48(v1);
    result = 0;
    *(ushort *)(v1 + 22) = 0;
  }
  return result;
}

//----- (0222C3AC) --------------------------------------------------------
int Function_222c3ac()
{
  return Function_222c3ae();
}

//----- (0222C3AE) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0222C404) --------------------------------------------------------
int Function_222c404()
{
  return Function_222c406();
}

//----- (0222C406) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0222C470) --------------------------------------------------------
int Function_222c470()
{
  return Function_222c472();
}

//----- (0222C472) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0222C508) --------------------------------------------------------
int Function_222c508()
{
  return Function_222c50a();
}

//----- (0222C50A) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0222C5A0) --------------------------------------------------------
int Function_222c5a0()
{
  return Function_222c5a2();
}

//----- (0222C5A2) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0222C5F8) --------------------------------------------------------
int Function_222c5f8()
{
  return Function_222c5fa();
}

//----- (0222C5FA) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0222C664) --------------------------------------------------------
int Function_222c664()
{
  return Function_222c666();
}

//----- (0222C666) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0222C6FC) --------------------------------------------------------
int Function_222c6fc()
{
  return Function_222c6fe();
}

//----- (0222C6FE) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0222C794) --------------------------------------------------------
int Function_222c794()
{
  return Function_222c796();
}

//----- (0222C796) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0222C800) --------------------------------------------------------
int Function_222c800()
{
  return Function_222c802();
}

//----- (0222C802) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0222C86C) --------------------------------------------------------
int Function_222c86c()
{
  return Function_222c86e();
}

//----- (0222C86E) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0222C8D8) --------------------------------------------------------
int Function_222c8d8()
{
  return Function_222c8da();
}

//----- (0222C8DA) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0222C944) --------------------------------------------------------
int Function_222c944()
{
  return 0;
}

//----- (0222C948) --------------------------------------------------------
int Function_222c948()
{
  return Function_222ca14();
}

//----- (0222C950) --------------------------------------------------------
int __fastcall Function_222c950(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int *v6;
  int v8;
  int v9;
  int v10;

  v10 = a4;
  v4 = a1;
  v5 = Function_222ca14();
  if ( v5 == 1 )
  {
    v8 = Function_222c0e4(v4);
    v6 = &v8 - 1;
    v9 = v8;
    *(ushort *)v6 = v8;
    *((ushort *)v6 + 1) = HIWORD(v9);
    Function_222c1b4(v4, *(&v8 - 1));
  }
  return v5;
}

//----- (0222C990) --------------------------------------------------------
int __fastcall Function_222c990(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int *v6;
  int v8;
  int v9;
  int v10;

  v10 = a4;
  v4 = a1;
  v5 = Function_222ca14();
  if ( v5 == 1 )
  {
    v8 = Function_222c0e4(v4);
    v6 = &v8 - 1;
    v9 = v8;
    *(ushort *)v6 = v8;
    *((ushort *)v6 + 1) = HIWORD(v9);
    Function_222c1b4(v4, *(&v8 - 1));
  }
  return v5;
}

//----- (0222C9D0) --------------------------------------------------------
int Function_222c9d0()
{
  return 0;
}

//----- (0222C9D4) --------------------------------------------------------
int Function_222c9d4()
{
  return Function_222ca14();
}

//----- (0222C9DC) --------------------------------------------------------
int Function_222c9dc()
{
  return Function_222ca14();
}

//----- (0222C9E4) --------------------------------------------------------
int Function_222c9e4()
{
  return Function_222c9e6();
}

//----- (0222C9E6) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0222CA14) --------------------------------------------------------
BOOL __fastcall Function_222ca14(int a1)
{
  uint v1;
  int v2;
  int v3;
  BOOL result;

  v1 = a1;
  v2 = Function_63_222bf90(a1);
  v3 = Function_63_222bf90(v1);
  result = 1;
  if ( v2 < v3 )
  {
    Function_222c000(v1, 8, v2 + 1);
    if ( v2 + 1 < v3 )
      result = 0;
  }
  return result;
}

//----- (0222CA48) --------------------------------------------------------
int __fastcall Function_222ca48(int a1)
{
  int v1;
  int v2;
  int v3;
  int v5;
  int v6;

  v1 = a1;
  v2 = Function_222c0e4(a1);
  v5 = v2;
  v6 = v2;
  Function_63_222bf90(v1);
  *(&v5 - 1) = v6;
  v3 = *(&v5 - 1);
  return Function_222c3ac();
}

//----- (0222CA88) --------------------------------------------------------
int __fastcall Function_222ca88(int a1, uint *a2, ushort *a3, int a4)
{
  int v4;
  uint *v5;
  ushort *v6;
  int v7;
  int v9;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( !a1 )
    ErrorHandler();
  if ( !v5 )
    ErrorHandler();
  if ( !v6 )
    ErrorHandler();
  if ( !v7 )
    ErrorHandler();
  v9 = Function_222bf80(v5, *((uchar *)v6 + 3));
  if ( !v9 )
    ErrorHandler();
  return ((int (__fastcall *)(int, int, uint *, ushort *, int))*(&off_222DC6C + *v6))(v9, v4, v5, v6, v7);
}

//----- (0222CAE4) --------------------------------------------------------
int __fastcall Function_222cae4(int a1, int a2, int a3, ushort *a4, int a5)
{
  int v5;
  ushort *v6;
  int v7;
  int v8;

  v5 = a1;
  v6 = a4;
  v7 = Function_63_222bf90(a1);
  if ( v7 && v7 != 4 )
    return 0;
  v8 = *((uchar *)v6 + 2);
  Function_222ccb8(a5, v5, *v6, *((uchar *)v6 + 3));
  return 1;
}

//----- (0222CB10) --------------------------------------------------------
int __fastcall Function_222cb10(int a1, int a2, int a3, ushort *a4, int a5)
{
  int v5;
  ushort *v6;
  int v7;
  int v8;

  v5 = a1;
  v6 = a4;
  v7 = Function_63_222bf90(a1);
  v8 = Function_63_222bf90(v5);
  if ( v7 || v8 == *((uchar *)v6 + 2) )
    return 0;
  Function_222ccb8(a5, v5, *v6, *((uchar *)v6 + 3));
  return 1;
}

//----- (0222CB4C) --------------------------------------------------------
int __fastcall Function_222cb4c(int a1, int a2, int a3, ushort *a4, int a5)
{
  int v5;
  int v6;
  ushort *v7;
  int v8;
  int v9;
  int result;
  int v11;
  int v12;

  v5 = a2;
  v6 = a1;
  v12 = a3;
  v7 = a4;
  v8 = Function_63_222bf90(a1);
  if ( v8
    || Function_222cc3c(v6, v5, *((uchar *)v7 + 2)) == 1
    || Function_222cca4(v6, v12, *((uchar *)v7 + 2)) == 1 )
  {
    if ( v8 || Function_63_222bf90(v6) < 8 )
    {
      result = 0;
    }
    else
    {
      v11 = *((uchar *)v7 + 2);
      Function_222ccb8(a5, v6, 5, *((uchar *)v7 + 3));
      result = 1;
    }
  }
  else
  {
    v9 = *((uchar *)v7 + 2);
    Function_222ccb8(a5, v6, *v7, *((uchar *)v7 + 3));
    result = 1;
  }
  return result;
}

//----- (0222CBC0) --------------------------------------------------------
int __fastcall Function_222cbc0(int a1, int a2, int a3, ushort *a4, int a5)
{
  return Function_222cb4c(a1, a2, a3, a4, a5);
}

//----- (0222CBD0) --------------------------------------------------------
int __fastcall Function_222cbd0(int a1, int a2, int a3, ushort *a4, int a5)
{
  int v5;
  ushort *v6;
  int v7;

  v5 = a1;
  v6 = a4;
  if ( Function_63_222bf90(a1) )
    return 0;
  v7 = *((uchar *)v6 + 2);
  Function_222ccb8(a5, v5, *v6, *((uchar *)v6 + 3));
  return 1;
}

//----- (0222CBF8) --------------------------------------------------------
int Function_222cbf8()
{
  ErrorHandler();
  return 0;
}

//----- (0222CC04) --------------------------------------------------------
int __fastcall Function_222cc04(int a1, int a2, int a3, ushort *a4, int a5)
{
  return Function_222cb4c(a1, a2, a3, a4, a5);
}

//----- (0222CC14) --------------------------------------------------------
int __fastcall Function_222cc14(int a1, int a2, int a3, ushort *a4, int a5)
{
  int v5;
  ushort *v6;
  int v7;

  v5 = a1;
  v6 = a4;
  if ( Function_63_222bf90(a1) )
    return 0;
  v7 = *((uchar *)v6 + 2);
  Function_222ccb8(a5, v5, *v6, *((uchar *)v6 + 3));
  return 1;
}

//----- (0222CC3C) --------------------------------------------------------
int __fastcall Function_222cc3c(int a1, ushort *a2, int a3, int a4)
{
  ushort *v4;
  int v5;
  int v6;
  short *v7;
  int v8;
  short v10;
  int v11;
  int v12;
  int v13;

  v13 = a4;
  v4 = a2;
  v5 = a3;
  v6 = Function_222c0e4(a1);
  v11 = v6;
  v7 = &v10 - 2;
  v12 = v6;
  *v7 = v6;
  v7[1] = HIWORD(v12);
  v8 = Function_222c078(*((uint *)&v10 - 1), v5);
  return Function_222bdac(
           v4,
           ((short)v8 + ((uint)((short)v8 >> 3) >> 28)) << 12 >> 16,
           (SHIWORD(v8) + ((uint)(SHIWORD(v8) >> 3) >> 28)) << 12 >> 16);
}

//----- (0222CCA4) --------------------------------------------------------
BOOL __fastcall Function_222cca4(int a1, uint *a2, int a3, int a4)
{
  return Function_222c1c4(a1, a2, a3, a4) != 0;
}

//----- (0222CCB8) --------------------------------------------------------
int __fastcall Function_222ccb8(int a1, int a2, short a3, char a4, int a5)
{
  int v5;
  short v6;
  char v7;
  int v8;
  int result;
  short v10;

  v5 = a1;
  v6 = a3;
  v7 = a4;
  v8 = Function_222c0e4(a2);
  v10 = HIWORD(v8);
  *(ushort *)v5 = v8;
  *(ushort *)(v5 + 2) = v10;
  *(ushort *)(v5 + 4) = v6;
  result = a5;
  *(uchar *)(v5 + 7) = v7;
  *(uchar *)(v5 + 6) = a5;
  return result;
}

//----- (0222CCE4) --------------------------------------------------------
int __fastcall Function_222cce4(int a1, int a2, int a3, char a4, uint a5)
{
  int v5;
  int v6;
  int v7;
  char v8;
  int v9;
  int *v10;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  v9 = malloc(a5, 12);
  *(uint *)v9 = Function_222ae60(v5, v6, v7, a5);
  *(ushort *)(v9 + 8) = v7;
  v10 = (int *)malloc(a5, 20 * *(ushort *)(v9 + 8));
  *(uint *)(v9 + 4) = v10;
  Call_FillMemWithValue(v10, 0, 20 * *(ushort *)(v9 + 8));
  *(uchar *)(v9 + 10) = 2;
  *(uchar *)(v9 + 11) = v8;
  return v9;
}

//----- (0222CD2C) --------------------------------------------------------
int __fastcall Function_222cd2c(int a1, int a2, int a3, int a4, int a5, char a6, uint a7)
{
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int *v12;

  v7 = a1;
  v8 = a2;
  v9 = a3;
  v10 = a4;
  v11 = malloc(a7, 12);
  *(uint *)v11 = Function_222ae60(v7, v8, v9, a7);
  *(ushort *)(v11 + 8) = v9;
  v12 = (int *)malloc(a7, 20 * *(ushort *)(v11 + 8));
  *(uint *)(v11 + 4) = v12;
  Call_FillMemWithValue(v12, 0, 20 * *(ushort *)(v11 + 8));
  *(uchar *)(v11 + 10) = 2;
  *(uchar *)(v11 + 11) = a6;
  Function_222af94(*(uint *)v11, v10, *(uchar *)(v11 + 11), a5, a7);
  Function_222b0a0(*(uint *)v11, *(uchar *)(v11 + 11), 40001);
  return v11;
}

//----- (0222CD9C) --------------------------------------------------------
uint __fastcall Function_222cd9c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = 0;
  if ( (int)*(ushort *)(a1 + 8) > 0 )
  {
    v3 = 0;
    do
    {
      if ( !Function_222d07c(*(uint *)(v1 + 4) + v3) )
        Function_222cecc(*(uint *)(v1 + 4) + v3);
      ++v2;
      v3 += 20;
    }
    while ( v2 < *(ushort *)(v1 + 8) );
  }
  v4 = *(uint *)v1;
  Function_222b0b8();
  Function_222ce24(v1);
  Function_222af14(*(uint *)v1);
  free(*(uint *)(v1 + 4));
  return free(v1);
}

//----- (0222CDE8) --------------------------------------------------------
int __fastcall Function_222cde8(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int v7;
  int result;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  result = Function_222afe4(*a1, a2);
  if ( !result )
    result = Function_222af94(*v4, v5, *((uchar *)v4 + 11), v6, v7);
  return result;
}

//----- (0222CE0C) --------------------------------------------------------
int __fastcall Function_222ce0c(int *a1, int a2)
{
  return Function_222afd0(*a1, a2);
}

//----- (0222CE18) --------------------------------------------------------
int __fastcall Function_222ce18(int *a1, int a2)
{
  return Function_222afe4(*a1, a2);
}

//----- (0222CE24) --------------------------------------------------------
int __fastcall Function_222ce24(int *a1)
{
  return Function_222aff8(*a1);
}

//----- (0222CE30) --------------------------------------------------------
int __fastcall Function_222ce30(int a1, int a2, int a3)
{
  return Function_222b02c(*(uint *)a1, *(uchar *)(a1 + 11), a2, a3);
}

//----- (0222CE44) --------------------------------------------------------
int __fastcall Function_222ce44(int a1, int a2, char a3, int a4)
{
  int v4;
  int v5;
  char v6;
  int v7;
  int v8;
  int v9;
  short v11;
  short v12;
  short v13;
  short v14;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  v8 = Function_222d08c();
  *(ushort *)(v8 + 8) = Function_63_222bf90(v4);
  *(ushort *)(v8 + 10) = Function_63_222bf90(v4);
  *(ushort *)(v8 + 12) = Function_63_222bf90(v4);
  *(uint *)v8 = v4;
  *(uchar *)(v8 + 18) = v6;
  *(uchar *)(v8 + 19) = 1;
  *(ushort *)(v8 + 14) = 0;
  *(ushort *)(v8 + 16) = 0;
  v11 = Function_63_222bf90(v4);
  v12 = Function_63_222bf90(v4);
  v13 = Function_222d034(v12, *(uchar *)(v8 + 18));
  v14 = *(uchar *)(v5 + 10);
  v9 = Function_63_222bf90(v4);
  *(uint *)(v8 + 4) = Function_222b0c0(*(int **)v5, &v11, v9, v7);
  Function_222cf14(v8);
  return v8;
}

//----- (0222CECC) --------------------------------------------------------
int __fastcall Function_222cecc(int a1)
{
  uchar *v1;
  int v2;
  int result;

  v1 = (uchar *)a1;
  Function_222b210(*(uint *)(a1 + 4));
  v2 = 20;
  result = 0;
  do
  {
    *v1++ = 0;
    --v2;
  }
  while ( v2 );
  return result;
}

//----- (0222CEE4) --------------------------------------------------------
int __fastcall Function_222cee4(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;

  v1 = a1;
  result = *(ushort *)(a1 + 8);
  v3 = 0;
  if ( result > 0 )
  {
    v4 = 0;
    do
    {
      if ( !Function_222d07c(*(uint *)(v1 + 4) + v4) )
        Function_222cf14(*(uint *)(v1 + 4) + v4);
      result = *(ushort *)(v1 + 8);
      ++v3;
      v4 += 20;
    }
    while ( v3 < result );
  }
  return result;
}

//----- (0222CF14) --------------------------------------------------------
int __fastcall Function_222cf14(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;
  short v10;
  char v11;
  int v12;
  int v13;

  v13 = a4;
  v4 = a1;
  result = *(uchar *)(a1 + 19);
  if ( result )
  {
    v6 = Function_63_222bf90(*(uint *)v4);
    v7 = Function_63_222bf90(*(uint *)v4);
    v8 = (short)Function_63_222bf90(*(uint *)v4);
    if ( *(ushort *)(v4 + 8) != v6 || *(ushort *)(v4 + 10) != v7 || !v8 )
    {
      *(ushort *)(v4 + 8) = v6;
      *(ushort *)(v4 + 10) = v7;
      v9 = Function_222d0c4(*(uint *)(v4 + 4), v6);
      Function_222d110(v4, v9, v7);
    }
    Function_222d0e0(v4, &v12, &v11);
    Function_222b238(*(uint *)(v4 + 4), (short)v12, *(short *)&v11, (int)&v11);
    v10 = Function_222d034(*(short *)&v11, *(uchar *)(v4 + 18));
    Function_222b278(*(uint *)(v4 + 4), v10);
    result = Function_222b33c(*(uint *)(v4 + 4));
  }
  return result;
}

//----- (0222CFA4) --------------------------------------------------------
int __fastcall Function_222cfa4(int result, char a2)
{
  *(uchar *)(result + 19) = a2;
  return result;
}

//----- (0222CFA8) --------------------------------------------------------
int __fastcall Function_222cfa8(int a1)
{
  return Function_222d110(a1, 1, *(ushort *)(a1 + 10));
}

//----- (0222CFB4) --------------------------------------------------------
int __fastcall Function_222cfb4(int a1)
{
  return Function_222b33c(*(uint *)(a1 + 4));
}

//----- (0222CFC0) --------------------------------------------------------
int __fastcall Function_222cfc0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = Function_222d0c4(*(uint *)(a1 + 4), *(ushort *)(a1 + 8));
  Function_222d110(v1, v2, *(ushort *)(v1 + 10));
  return Function_222cf14(v1, v3, v4, v5);
}

//----- (0222CFE0) --------------------------------------------------------
int Function_222cfe0()
{
  return Function_222cfe2();
}

//----- (0222CFE2) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0222CFFC) --------------------------------------------------------
int __fastcall Function_222cffc(int a1)
{
  return Function_222b2b0(*(uint *)(a1 + 4));
}

//----- (0222D008) --------------------------------------------------------
uint __fastcall Function_222d008(int a1, int a2)
{
  return Function_222b294(*(uint *)(a1 + 4), a2);
}

//----- (0222D014) --------------------------------------------------------
int __fastcall Function_222d014(int a1)
{
  return Function_222b284(*(uint *)(a1 + 4));
}

//----- (0222D020) --------------------------------------------------------
int __fastcall Function_222d020(int a1, int a2)
{
  int v2;

  v2 = a1;
  Function_222d110(a1, 0, a2);
  return Function_222b33c(*(uint *)(v2 + 4));
}

//----- (0222D034) --------------------------------------------------------
int __fastcall Function_222d034(int a1, int a2)
{
  int result;

  if ( a2 == 1 )
    result = 40000 - 2 * a1;
  else
    result = 40001 - 2 * a1;
  return result;
}

//----- (0222D050) --------------------------------------------------------
int __fastcall Function_222d050(int a1)
{
  int v1;

  v1 = Function_222b234(*(uint *)(a1 + 4));
  return Function_2021f48(v1);
}

//----- (0222D060) --------------------------------------------------------
int Function_222d060()
{
  return Function_222d062();
}

//----- (0222D062) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0222D07C) --------------------------------------------------------
BOOL __fastcall Function_222d07c(int a1)
{
  return *(uint *)(a1 + 4) == 0;
}

//----- (0222D08C) --------------------------------------------------------
int __fastcall Function_222d08c(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  v2 = 0;
  if ( (int)*(ushort *)(a1 + 8) <= 0 )
  {
LABEL_6:
    ErrorHandler();
    result = 0;
  }
  else
  {
    v3 = 0;
    while ( Function_222d07c(*(uint *)(v1 + 4) + v3) != 1 )
    {
      ++v2;
      v3 += 20;
      if ( v2 >= *(ushort *)(v1 + 8) )
        goto LABEL_6;
    }
    result = *(uint *)(v1 + 4) + 20 * v2;
  }
  return result;
}

//----- (0222D0C4) --------------------------------------------------------
int __fastcall Function_222d0c4(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  if ( Function_222b2bc(a1) == 2 )
    result = 0;
  else
    result = *((uchar *)dword_222DCA8 + v2);
  return result;
}

//----- (0222D0E0) --------------------------------------------------------
int __fastcall Function_222d0e0(int *a1, ushort *a2, ushort *a3, int a4)
{
  ushort *v4;
  ushort *v5;
  int v6;
  int result;
  short v8;
  int v9;

  v9 = a4;
  v4 = a2;
  v5 = a3;
  v6 = Function_222c0fc(*a1);
  v8 = HIWORD(v6);
  *v4 = v6;
  result = v8;
  *v5 = v8;
  return result;
}

//----- (0222D110) --------------------------------------------------------
void **__fastcall Function_222d110(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  short v6;
  int v7;
  void **result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_222b2d4(*(uint *)(a1 + 4));
  v7 = (ushort)Function_222b2c4(*(uint *)(v3 + 4));
  result = Function_222b308(*(uint *)(v3 + 4), v4, v5);
  if ( v7 != v4 )
  {
    if ( *((uchar *)dword_222DC9C + v4) == 1 && *(ushort *)(v3 + 16) == v4 )
      Function_222b2c8(*(uint *)(v3 + 4), *(ushort *)(v3 + 14));
    result = (void **)*((uchar *)dword_222DC9C + v7);
    if ( result == (void **)1 )
    {
      *(ushort *)(v3 + 16) = v7;
      *(ushort *)(v3 + 14) = v6;
    }
  }
  return result;
}

//----- (0222D160) --------------------------------------------------------
int __fastcall Function_222d160(int a1, int a2)
{
  int v2;
  int v3;
  int v5;
  int v6;

  v2 = a1;
  v3 = Function_222c0fc(a2);
  v5 = v3;
  v6 = v3;
  return Function_222d1a8(v2, (short)(HIWORD(v3) - 96), (short)(v3 - 112));
}

//----- (0222D19C) --------------------------------------------------------
uchar *__fastcall Function_222d19c(uchar *result)
{
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  return result;
}

//----- (0222D1A8) --------------------------------------------------------
ushort *__fastcall Function_222d1a8(ushort *result, short a2, short a3)
{
  *result = a2;
  result[1] = a3;
  return result;
}

//----- (0222D1B0) --------------------------------------------------------
int __fastcall Function_222d1b0(short *a1)
{
  return *a1;
}

//----- (0222D1B8) --------------------------------------------------------
int __fastcall Function_222d1b8(int a1)
{
  return *(short *)(a1 + 2);
}

//----- (0222D1C0) --------------------------------------------------------
uint *__fastcall Function_222d1c0(int a1, int a2, uchar *a3, uint a4)
{
  int v4;
  int v5;
  uchar *v6;
  uint *v7;
  uchar *v8;
  int v9;
  int v11;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v11 = a4;
  v7 = (uint *)malloc(a4, 28);
  v8 = v7;
  v9 = 28;
  do
  {
    *v8++ = 0;
    --v9;
  }
  while ( v9 );
  *v7 = v4;
  v7[1] = v5;
  v7[4] = *v6;
  v7[5] = v6[1];
  Function_222d31c(v7[1]);
  v7[2] = Function_2006f6c(v6[8], v6[9], v6[10], v7 + 3, v11);
  return v7;
}

//----- (0222D214) --------------------------------------------------------
uint __fastcall Function_222d214(int a1)
{
  int v1;

  v1 = a1;
  free(*(uint *)(a1 + 8));
  return free(v1);
}

//----- (0222D228) --------------------------------------------------------
int __fastcall Function_222d228(int *a1, short *a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  uint v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  uint v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;

  v2 = (int)a2;
  v3 = a1;
  v4 = Function_222d1b0(a2);
  v5 = Function_222d1b8(v2);
  if ( v3[4] )
  {
    if ( v4 <= 0 )
    {
      v18 = fflt(v4 << 12);
      v17 = fsub(v18, 1056964608);
    }
    else
    {
      v16 = fflt(v4 << 12);
      v17 = fadd(0x3F000000u, v16);
    }
    v19 = v17;
    if ( v5 <= 0 )
    {
      v22 = fflt(v5 << 12);
      v21 = fsub(v22, 1056964608);
    }
    else
    {
      v20 = fflt(v5 << 12);
      v21 = fadd(0x3F000000u, v20);
    }
    v23 = ffix(v21);
    v24 = ffix(v19);
    Function_200964c(*v3, v23, v24 + 786432, v24);
  }
  else
  {
    if ( v4 <= 0 )
    {
      v8 = fflt(v4 << 12);
      v7 = fsub(v8, 1056964608);
    }
    else
    {
      v6 = fflt(v4 << 12);
      v7 = fadd(0x3F000000u, v6);
    }
    v9 = v7;
    if ( v5 <= 0 )
    {
      v12 = fflt(v5 << 12);
      v11 = fsub(v12, 1056964608);
    }
    else
    {
      v10 = fflt(v5 << 12);
      v11 = fadd(0x3F000000u, v10);
    }
    v13 = ffix(v11);
    v14 = ffix(v9);
    Function_200962c(*v3, v13, v14, v15);
  }
  return Function_222d378(v3, v5, v4);
}

//----- (0222D31C) --------------------------------------------------------
void __fastcall Function_222d31c(int a1, uchar a2, uchar *a3, int a4)
{
  uint *v4;
  uchar v5;
  int v6;
  int v7;
  int v8;
  int v9;
  long long v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = (uint *)a1;
  v5 = a2;
  v6 = 0;
  v7 = 0;
  v8 = 4096;
  v9 = 0;
  v10 = 3LL;
  v11 = 0;
  *(uint *)((char *)&v10 + 1) = a3[2];
  WORD1(v10) = a3[3];
  *(uint *)((char *)&v10 + 3) = a3[4];
  WORD2(v10) = a3[5];
  *(ushort *)((char *)&v10 + 5) = a3[6];
  v11 = a3[7];
  Function_2019044(a1, a2);
  Function_20183c4(v4, v5, &v6, 0);
}

//----- (0222D378) --------------------------------------------------------
int __fastcall Function_222d378(int a1, uint a2, uint a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v3 = a1;
  v4 = (int)((a2 + ((uint)((int)a2 >> 2) >> 29)) << 13) >> 16;
  v5 = (short)((a2 >> 31) + __ROR4__((a2 << 29) - (a2 >> 31), 29));
  v6 = (short)((a3 >> 31) + __ROR4__((a3 << 29) - (a3 >> 31), 29));
  v7 = *(ushort *)(a1 + 24);
  v8 = (int)((a3 + ((uint)((int)a3 >> 2) >> 29)) << 13) >> 16;
  if ( v4 != v7 || v8 != *(ushort *)(v3 + 26) )
  {
    *(ushort *)(v3 + 24) = v4;
    *(ushort *)(v3 + 26) = v8;
    Function_222d408(
      *(uint *)(v3 + 4),
      *(uint *)(v3 + 20),
      *(uint *)(v3 + 12),
      -(short)v4,
      -(short)v8);
    Function_201c3c0(*(uint *)(v3 + 4), *(uint *)(v3 + 20));
  }
  Function_201c63c(*(uint *)(v3 + 4), *(uint *)(v3 + 20) & 0xFF, 0, v5);
  return Function_201c63c(*(uint *)(v3 + 4), *(uint *)(v3 + 20) & 0xFF, 3u, v6);
}

//----- (0222D408) --------------------------------------------------------
int __fastcall Function_222d408(int a1, uchar a2, ushort *a3, int a4, int a5)
{
  short v5;
  short v6;
  int v7;
  int v8;
  int v10;
  uchar v11;
  ushort *v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v10 = a1;
  v5 = a5;
  v6 = a4;
  v16 = *a3 << 13 >> 16;
  v11 = a2;
  v12 = a3;
  v15 = a3[1] << 13 >> 16;
  if ( a4 >= 0 )
    v14 = 0;
  else
    v14 = -(short)a4;
  if ( a5 >= 0 )
    v13 = 0;
  else
    v13 = -(short)a5;
  if ( a4 <= 0 )
    v6 = 0;
  if ( a5 <= 0 )
    v5 = 0;
  v7 = (short)(33 - v6);
  v8 = (short)(25 - v5);
  if ( *a3 << 13 >> 16 < v14 + v7 )
    LOBYTE(v7) = ((uint)*a3 >> 3) - v14;
  if ( a3[1] << 13 >> 16 < v13 + v8 )
    LOBYTE(v8) = ((uint)a3[1] >> 3) - v13;
  Function_2019cb8(a1, a2, 0, 0, 0, 0x21u, 0x19u, 0x11u);
  return Function_222d4f8(
           v10,
           v11,
           (uchar)v6,
           (uchar)v5,
           (uchar)v7,
           (uchar)v8,
           v12 + 6,
           (uchar)v14,
           (uchar)v13,
           (uchar)v16,
           (uchar)v15);
}

//----- (0222D4F8) --------------------------------------------------------
int __fastcall Function_222d4f8(int a1, int a2, int a3, int a4, char a5, char a6, int a7, char a8, uint a9, int a10, int a11)
{
  int v11;
  int result;
  int v13;
  int v14;
  uint v15;
  uchar i;
  uchar v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  uchar v23;
  int v24;
  int v25;
  int v26;
  uchar v27;
  uchar v28;

  v19 = a1;
  v20 = a2;
  v21 = a4;
  v11 = a3;
  v24 = Function_222d688(a10, a11);
  if ( !v24 )
    return Function_20198e8(v19, v20, v11, v21, a5, a6, a7, a8, a9, a10, a11);
  result = a6;
  v26 = a6;
  if ( a6 > 0 )
  {
    v23 = v11;
    do
    {
      v13 = (a9 >> 31) + __ROR4__((a9 << 27) - (a9 >> 31), 27);
      if ( v13 + v26 > 32 )
      {
        v25 = (char)(32 - v13);
        v26 = (char)(v26 - v25);
      }
      else
      {
        v25 = v26;
        v26 = 0;
      }
      v14 = a5;
      v15 = a8;
      for ( i = v23; v14 > 0; i += v17 )
      {
        v22 = (v15 >> 31) + __ROR4__((v15 << 27) - (v15 >> 31), 27);
        if ( v22 + v14 > 32 )
        {
          v17 = 32 - v22;
          v14 = (char)(v14 - (32 - v22));
        }
        else
        {
          v17 = v14;
          v14 = 0;
        }
        v18 = Function_222d6bc(
                a7,
                ((int)((v15 + ((uint)((int)v15 >> 4) >> 27)) << 19) >> 24) & 0xFF,
                ((int)(a9 << 19) >> 24) & 0xFF,
                v24,
                a10,
                a11,
                &v27);
        Function_20198e8(
          v19,
          v20,
          i,
          v21,
          v17,
          v25,
          v18,
          v22,
          ((a9 & 0x80000000) != 0) + __ROR4__((a9 << 27) - (a9 >> 31), 27),
          v27,
          v28);
        v15 = (char)(v15 + v17);
      }
      a9 = (a9 + v25) & 0xFF;
      v21 = (v21 + v25) & 0xFF;
      result = v26;
    }
    while ( v26 > 0 );
  }
  return result;
}

//----- (0222D688) --------------------------------------------------------
int __fastcall Function_222d688(uint a1, uint a2)
{
  uint v2;
  uint v3;
  int result;

  v2 = a1;
  v3 = a2;
  if ( a1 > 0x40 )
    ErrorHandler();
  if ( v3 > 0x40 )
    ErrorHandler();
  if ( v2 > 0x20 )
  {
    if ( v3 > 0x20 )
      result = 3;
    else
      result = 1;
  }
  else if ( v3 > 0x20 )
  {
    result = 2;
  }
  else
  {
    result = 0;
  }
  return result;
}

//----- (0222D6BC) --------------------------------------------------------
int __fastcall Function_222d6bc(int result, int a2, int a3, char a4, int a5, int a6, ushort *a7)
{
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  switch ( a4 )
  {
    case 0:
      *a7 = a5;
      a7[1] = a6;
      break;
    case 1:
      if ( 32 * (a2 + 1) > a5 )
        v7 = a5 - 32 * a2;
      else
        LOWORD(v7) = 32;
      *a7 = v7;
      a7[1] = a6;
      result += (short)((ushort)a6 << 6) * a2;
      break;
    case 2:
      *a7 = a5;
      if ( 32 * (a3 + 1) > a6 )
        v8 = a6 - 32 * a3;
      else
        LOWORD(v8) = 32;
      a7[1] = v8;
      result += (short)((ushort)a5 << 6) * a3;
      break;
    case 3:
      if ( 32 * (a2 + 1) > a5 )
        v9 = a5 - 32 * a2;
      else
        LOWORD(v9) = 32;
      *a7 = v9;
      if ( 32 * (a3 + 1) > a6 )
        v10 = a6 - 32 * a3;
      else
        LOWORD(v10) = 32;
      a7[1] = v10;
      if ( a3 )
      {
        v11 = (a5 << 6) & 0xFFFF;
        if ( a2 )
          v11 = (v11 + (a6 << 6)) & 0xFFFF;
      }
      else
      {
        v11 = 0;
        if ( a2 )
          v11 = 2048;
      }
      result += v11;
      break;
    default:
      ErrorHandler();
      ErrorHandler();
      result = 0;
      break;
  }
  return result;
}

//----- (0222D77C) --------------------------------------------------------
int __fastcall Function_222d77c(int a1, uint a2)
{
  uint v2;
  int v3;
  int v4;
  int *v5;

  v2 = a2;
  v3 = a1;
  v4 = malloc(a2, 12);
  if ( !v4 )
    ErrorHandler();
  *(uint *)(v4 + 4) = v3 + 1;
  v5 = (int *)malloc(v2, 8 * (v3 + 1));
  *(uint *)v4 = v5;
  Call_FillMemWithValue(v5, 0, 8 * *(uint *)(v4 + 4));
  *(ushort *)(v4 + 8) = 0;
  *(ushort *)(v4 + 10) = 0;
  return v4;
}

//----- (0222D7B4) --------------------------------------------------------
uint __fastcall Function_222d7b4(int *a1)
{
  int v1;

  v1 = (int)a1;
  free(*a1);
  return free(v1);
}

//----- (0222D7C8) --------------------------------------------------------
int __fastcall Function_222d7c8(int a1, ushort *a2, int a3, int a4)
{
  int v4;
  ushort *v5;
  int v6;
  ushort *v7;
  int result;
  short v9;
  char v10;
  int v11;

  v11 = a4;
  v4 = a1;
  v5 = a2;
  u32_div_f(*(ushort *)(a1 + 10) + 1, *(uint *)(a1 + 4));
  if ( *(ushort *)(v4 + 8) == v6 )
    Function_222d810(v4, &v10);
  v7 = (ushort *)(*(uint *)v4 + 8 * *(ushort *)(v4 + 10));
  *v7 = *v5;
  v7[1] = v5[1];
  v7[2] = v5[2];
  v7[3] = v5[3];
  result = u32_div_f(*(ushort *)(v4 + 10) + 1, *(uint *)(v4 + 4));
  *(ushort *)(v4 + 10) = v9;
  return result;
}

//----- (0222D810) --------------------------------------------------------
int __fastcall Function_222d810(int *a1, ushort *a2)
{
  int *v2;
  int v3;
  int v5;
  short v6;

  v2 = a1;
  v3 = *((ushort *)a1 + 4);
  if ( *((ushort *)a1 + 5) == v3 )
    return 0;
  v5 = *a1;
  *a2 = *(ushort *)(*a1 + 8 * v3);
  a2[1] = *(ushort *)(v5 + 8 * v3 + 2);
  a2[2] = *(ushort *)(v5 + 8 * v3 + 4);
  a2[3] = *(ushort *)(v5 + 8 * v3 + 6);
  u32_div_f(*((ushort *)a1 + 4) + 1, a1[1]);
  *((ushort *)v2 + 4) = v6;
  return 1;
}

//----- (0222D848) --------------------------------------------------------
int __fastcall Function_222d848(int a1, uint a2)
{
  uint v2;
  int v3;
  int v4;
  int *v5;

  v2 = a2;
  v3 = a1;
  v4 = malloc(a2, 12);
  if ( !v4 )
    ErrorHandler();
  *(uint *)(v4 + 4) = v3 + 1;
  v5 = (int *)malloc(v2, 4 * (v3 + 1));
  *(uint *)v4 = v5;
  Call_FillMemWithValue(v5, 0, 4 * *(uint *)(v4 + 4));
  *(ushort *)(v4 + 8) = 0;
  *(ushort *)(v4 + 10) = 0;
  return v4;
}

//----- (0222D880) --------------------------------------------------------
uint __fastcall Function_222d880(int *a1)
{
  int v1;

  v1 = (int)a1;
  free(*a1);
  return free(v1);
}

//----- (0222D894) --------------------------------------------------------
int __fastcall Function_222d894(int *a1, ushort *a2, int a3, int a4)
{
  int *v4;
  ushort *v5;
  int v6;
  int v7;
  int v8;
  int result;
  short v10;
  int v11;

  v11 = a4;
  v4 = a1;
  v5 = a2;
  u32_div_f(*((ushort *)a1 + 5) + 1, a1[1]);
  if ( *((ushort *)v4 + 4) == v6 )
    Function_222d8d0(v4, &v11);
  v7 = *v4;
  v8 = 4 * *((ushort *)v4 + 5);
  *(ushort *)(v7 + v8) = *v5;
  *(ushort *)(v7 + v8 + 2) = v5[1];
  result = u32_div_f(*((ushort *)v4 + 5) + 1, v4[1]);
  *((ushort *)v4 + 5) = v10;
  return result;
}

//----- (0222D8D0) --------------------------------------------------------
int __fastcall Function_222d8d0(int *a1, ushort *a2)
{
  int *v2;
  int v3;
  int v5;
  short v6;

  v2 = a1;
  v3 = *((ushort *)a1 + 4);
  if ( *((ushort *)a1 + 5) == v3 )
    return 0;
  v5 = *a1;
  *a2 = *(ushort *)(*a1 + 4 * v3);
  a2[1] = *(ushort *)(v5 + 4 * v3 + 2);
  u32_div_f(*((ushort *)a1 + 4) + 1, a1[1]);
  *((ushort *)v2 + 4) = v6;
  return 1;
}

