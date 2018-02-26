//----- (0221F800) --------------------------------------------------------
int *__fastcall Function_221f800(int a1)
{
  int v1;
  int *result;

  v1 = (a1 << 16) | a1;
  result = dword_2229E20;
  dword_2229E20[0] = v1;
  return result;
}

//----- (0221F810) --------------------------------------------------------
int Function_221f810()
{
  dword_2229E20[0] = (69 * dword_2229E20[0] + 4369) & 0x7FFFFFFF;
  return (dword_2229E20[0] >> 16) & 0xFF;
}

//----- (0221F838) --------------------------------------------------------
int __fastcall Function_221f838(uint a1, int a2, int a3, int a4, int a5)
{
  uint v5;
  int v6;
  int v7;
  uchar *v9;
  int i;
  int v11;
  int v12;
  char v13;
  int v14;
  int v15;
  uint v16;
  int v17;
  int v18;
  int v19;

  v5 = a1;
  v6 = a3;
  v7 = a2;
  v15 = a4;
  v18 = a3 + 8;
  if ( a5 < ((int (*)(void))Function_221f944)() + 1 )
    return 2;
  v9 = (uchar *)((int (__fastcall *)(int, int))dword_21D776C[5])(10, v18);
  if ( !v9 )
    return 1;
  v16 = v5 >> 24;
  v17 = (v5 >> 16) & 0xFF;
  v19 = (v5 >> 24) + v17 + (((ushort)v5 >> 8) & 0xFF) + (uchar)v5;
  for ( i = 0; i < v6; v19 += v11 )
    v11 = *(uchar *)(v7 + i++);
  Function_221f800(v19);
  v9[4] = Function_221f810() ^ v5;
  v9[5] = Function_221f810() ^ BYTE1(v5);
  v9[6] = Function_221f810() ^ v17;
  v12 = 0;
  for ( v9[7] = Function_221f810() ^ v16; v12 < v6; *(uchar *)(v14 + 8) = v13 )
  {
    v13 = *(uchar *)(v7 + v12) ^ Function_221f810();
    v14 = (int)&v9[v12++];
  }
  *v9 = (v19 ^ 0x4A3B2C1Du) >> 24;
  v9[1] = (v19 ^ 0x4A3B2C1Du) >> 16;
  v9[2] = BYTE1(v19) ^ 0x2C;
  v9[3] = v19 ^ 0x1D;
  ((void (__fastcall *)(uchar *, int, int, int))dword_21EAF50[104])(v9, v15, v6 + 8, 2);
  *(uchar *)(v15 + Function_221f944(v18)) = 0;
  ((void (__fastcall *)(int, uchar *))dword_21D776C[22])(10, v9);
  return 0;
}

//----- (0221F944) --------------------------------------------------------
int __fastcall Function_221f944(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  u32_div_f(a1, 3);
  return 4 * (u32_div_f(v1, 3) + (v2 != 0));
}

//----- (0221F968) --------------------------------------------------------
int *__fastcall Function_221f968(char a1)
{
  int *result;

  switch ( a1 + 8 )
  {
    case 0:
      result = &dword_2228E40;
      dword_2228E48 = 0;
      break;
    case 2:
      result = &dword_2228E40;
      dword_2228E48 = 1;
      break;
    case 3:
      result = &dword_2228E40;
      dword_2228E48 = 2;
      break;
    case 4:
      result = &dword_2228E40;
      dword_2228E48 = 3;
      break;
    case 5:
      result = &dword_2228E40;
      dword_2228E48 = 4;
      break;
    case 6:
      result = &dword_2228E40;
      dword_2228E48 = 5;
      break;
    case 7:
      result = &dword_2228E40;
      dword_2228E48 = 6;
      break;
    default:
      result = &dword_2228E40;
      dword_2228E48 = 0;
      break;
  }
  return result;
}

//----- (0221F9D0) --------------------------------------------------------
void Function_221f9d0()
{
  dword_2228E44 = -1;
}

//----- (0221FC84) --------------------------------------------------------
int *Function_221fc84()
{
  int *result;

  dword_2228E40 = 2;
  dword_2228E44 = -1;
  result = (int *)((int (__fastcall *)(uint))dword_21E558C[0])(0);
  if ( !result )
  {
    result = &dword_2228E40;
    dword_2228E40 = 1;
  }
  return result;
}

//----- (0221FCA8) --------------------------------------------------------
int Function_221fca8()
{
  return 1;
}

//----- (0221FD48) --------------------------------------------------------
int Function_221fd48()
{
  switch ( 1 )
  {
    case 3:
      dword_2228E44 = ((int (__fastcall *)(uint, void (*)(), int *))dword_21E56F4[0])(
                        0,
                        Function_221f9d0,
                        &dword_2228E40);
      Function_221f968(dword_2228E44);
      dword_2228E40 = 4;
      break;
    case 4:
      if ( !((int (*)(void))dword_21E55F0[0])() )
        dword_2228E40 = 1;
      break;
    case 5:
      dword_2228E44 = ((int (__fastcall *)(uint, void (*)(), int *))dword_21E56F4[0])(
                        0,
                        Function_221f9d0,
                        &dword_2228E40);
      Function_221f968(dword_2228E44);
      dword_2228E40 = 6;
      break;
    case 6:
      if ( !((int (*)(void))dword_21E55F0[0])() )
        dword_2228E40 = 1;
      break;
    default:
      return 1;
  }
  return 1;
}

//----- (0221FDEC) --------------------------------------------------------
int *Function_221fdec()
{
  int *result;

  ((void (*)(void))dword_21E558C[9])();
  result = &dword_2228E40;
  dword_2228E40 = 1;
  return result;
}

//----- (0221FE14) --------------------------------------------------------
int Function_221fe14()
{
  return 0;
}

//----- (0221FE20) --------------------------------------------------------
int Function_221fe20()
{
  return 0;
}

//----- (0221FE2C) --------------------------------------------------------
int __fastcall Function_221fe2c(int a1, int a2)
{
  int v2;
  int v3;
  int v5;
  int v6;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    Function_20d407c((int)"buffer", (int)"ghttpBuffer.c", (int)"ghiResizeBuffer");
  if ( v3 <= 0 )
    Function_20d407c((int)"sizeIncrement > 0", (int)"ghttpBuffer.c", (int)"ghiResizeBuffer");
  if ( !v2 )
    return 0;
  if ( v3 <= 0 )
    return 0;
  v5 = *(uint *)(v2 + 8) + v3;
  v6 = ((int (__fastcall *)(uint, int))dword_21D788C[2])(*(uint *)(v2 + 4), v5);
  if ( !v6 )
    return 0;
  *(uint *)(v2 + 4) = v6;
  *(uint *)(v2 + 8) = v5;
  return 1;
}

//----- (0221FEB8) --------------------------------------------------------
int __fastcall Function_221feb8(int a1, uint *a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int v6;
  int v7;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( !a1 )
    Function_20d407c((int)"connection", (int)"ghttpBuffer.c", (int)"ghiInitBuffer");
  if ( !v5 )
    Function_20d407c((int)"buffer", (int)"ghttpBuffer.c", (int)"ghiInitBuffer");
  if ( v6 <= 0 )
    Function_20d407c((int)"initialSize > 0", (int)"ghttpBuffer.c", (int)"ghiInitBuffer");
  if ( v7 <= 0 )
    Function_20d407c((int)"sizeIncrement > 0", (int)"ghttpBuffer.c", (int)"ghiInitBuffer");
  if ( !v4 )
    return 0;
  if ( !v5 )
    return 0;
  if ( v6 <= 0 )
    return 0;
  if ( v7 <= 0 )
    return 0;
  *v5 = v4;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  v5[4] = 0;
  v5[5] = v7;
  v5[6] = 0;
  v5[7] = 0;
  v5[8] = 0;
  if ( !Function_221fe2c((int)v5, v6) )
    return 0;
  *(uchar *)v5[1] = 0;
  return 1;
}

//----- (0221FFD4) --------------------------------------------------------
int __fastcall Function_221ffd4(int a1, uint *a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int v6;
  int v7;
  int result;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( !a1 )
    Function_20d407c((int)"connection", (int)"ghttpBuffer.c", (int)"ghiInitFixedBuffer");
  if ( !v5 )
    Function_20d407c((int)"buffer", (int)"ghttpBuffer.c", (int)"ghiInitFixedBuffer");
  if ( !v6 )
    Function_20d407c((int)"userBuffer", (int)"ghttpBuffer.c", (int)"ghiInitFixedBuffer");
  if ( v7 <= 0 )
    Function_20d407c((int)"size > 0", (int)"ghttpBuffer.c", (int)"ghiInitFixedBuffer");
  if ( !v4 )
    return 0;
  if ( !v5 )
    return 0;
  if ( !v6 )
    return 0;
  if ( v7 <= 0 )
    return 0;
  *v5 = v4;
  v5[1] = v6;
  v5[2] = v7;
  v5[3] = 0;
  v5[5] = 0;
  result = 1;
  v5[6] = 1;
  v5[7] = 1;
  v5[8] = 0;
  *(uchar *)v5[1] = 0;
  return result;
}

//----- (022200D0) --------------------------------------------------------
int *__fastcall Function_22200d0(int *result)
{
  int *v1;
  bool v2;

  v1 = result;
  if ( !result )
    result = (int *)Function_20d407c((int)"buffer", (int)"ghttpBuffer.c", (int)"ghiFreeBuffer");
  v2 = v1 == 0;
  if ( v1 )
  {
    result = (int *)v1[1];
    v2 = result == 0;
  }
  if ( !v2 )
  {
    if ( !v1[7] )
      ((void (__fastcall *)(int *))dword_21D788C[9])(result);
    result = Call_FillMemWithValue(v1, 0, 0x24u);
  }
  return result;
}

//----- (02220130) --------------------------------------------------------
int Function_2220130()
{
  return Function_2220134();
}

//----- (02220134) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (022203EC) --------------------------------------------------------
BOOL Function_22203ec()
{
  if ( !Function_2220130() )
    return 0;
  if ( !Function_2220130() )
    return 0;
  if ( Function_2220130() )
    return Function_2220130() != 0;
  return 0;
}

//----- (0222046C) --------------------------------------------------------
int __fastcall Function_222046c(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( !a1 )
    Function_20d407c((int)"buffer", (int)"ghttpBuffer.c", (int)"ghiAppendCharToBuffer");
  if ( v1 )
    result = Function_2220130();
  else
    result = 0;
  return result;
}

//----- (022204CC) --------------------------------------------------------
int Function_22204cc()
{
  char v1;

  Function_20d7510((int)&v1, "%d");
  return Function_2220130();
}

//----- (02220504) --------------------------------------------------------
uchar *__fastcall Function_2220504(uint *a1)
{
  uint *v1;
  uchar *result;

  v1 = a1;
  if ( !a1 )
    Function_20d407c((int)"buffer", (int)"ghttpBuffer.c", (int)"ghiResetBuffer");
  v1[3] = 0;
  v1[4] = 0;
  result = (uchar *)v1[1];
  *result = 0;
  return result;
}

//----- (02220548) --------------------------------------------------------
int __fastcall Function_2220548(uint *a1)
{
  uint *v1;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  do
  {
    if ( ((int (__fastcall *)(uint, uint, int *, int *))dword_21EA714[216])(v1[18], 0, &v6, &v5) == -1 || v5 )
    {
      v1[63] = 1;
      v1[14] = 5;
      v1[19] = ((int (__fastcall *)(uint))dword_21EA714[521])(v1[18]);
      return 0;
    }
    if ( !v6 )
      return 1;
    v3 = Function_2220b90(v1, v1[21] + v1[24], v1[23] - v1[24]);
    if ( v3 == -1 )
      return 0;
    v4 = v1[24] + v3;
    v1[24] = v4;
  }
  while ( v4 < v1[23] );
  return 1;
}

//----- (02220618) --------------------------------------------------------
int __fastcall Function_2220618(uint *a1, uchar *a2, int *a3)
{
  uint *v3;
  uchar *v4;
  int *v5;
  int v6;
  int result;
  int v8;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( !a1 )
    Function_20d407c((int)"bufferIn != NULL", (int)"ghttpBuffer.c", (int)"ghiReadDataFromBuffer");
  if ( !v5 )
    Function_20d407c((int)"len != NULL", (int)"ghttpBuffer.c", (int)"ghiReadDataFromBuffer");
  v6 = *v5;
  if ( !*v5 )
    return 0;
  v8 = v3[4];
  if ( v3[3] - v8 <= 0 )
    return 0;
  if ( v6 >= v3[3] - v8 )
    v6 = v3[3] - v8;
  memcpy(v4, (char *)(v3[1] + v8), v6);
  v4[v6] = 0;
  *v5 = v6;
  result = 1;
  v3[4] += v6;
  return result;
}

//----- (022206D4) --------------------------------------------------------
int __fastcall Function_22206d4(int result)
{
  uint *v1;
  int (__fastcall *v2)(uint, uint, int, int);
  int v3;
  int v4;
  int v5;

  v1 = (uint *)result;
  if ( !result )
    result = Function_20d407c((int)"connection", (int)"ghttpCallbacks.c", (int)"ghiCallCompletedCallback");
  v2 = (int (__fastcall *)(uint, uint, int, int))v1[16];
  if ( v2 )
  {
    if ( v1[3] )
    {
      v3 = 0;
      v4 = 0;
    }
    else
    {
      v3 = v1[48];
      v4 = v1[64];
    }
    v5 = v1[17];
    result = v2(v1[1], v1[14], v3, v4);
    if ( v3 )
    {
      if ( !result )
      {
        result = 1;
        v1[54] = 1;
      }
    }
  }
  return result;
}

//----- (02220754) --------------------------------------------------------
int __fastcall Function_2220754(int result, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  int (__fastcall *v6)(uint, uint, int, int, uint, uint, uint);

  v3 = (uint *)result;
  v4 = a2;
  v5 = a3;
  if ( !result )
    result = Function_20d407c((int)"connection", (int)"ghttpCallbacks.c", (int)"ghiCallProgressCallback");
  v6 = (int (__fastcall *)(uint, uint, int, int, uint, uint, uint))v3[15];
  if ( v6 )
    result = v6(v3[1], v3[4], v4, v5, v3[64], v3[65], v3[17]);
  return result;
}

//----- (022207D0) --------------------------------------------------------
int __fastcall Function_22207d0(uint *a1)
{
  uint *v1;
  int result;
  int v3;

  v1 = a1;
  if ( !a1 )
    Function_20d407c((int)"connection", (int)"ghttpCallbacks.c", (int)"ghiCallPostCallback");
  result = v1[84];
  if ( result )
  {
    v3 = ((int (__fastcall *)(uint))dword_21E9624[358])(v1[80]);
    result = ((int (__fastcall *)(uint, uint, uint, uint, int, uint))v1[84])(
               v1[1],
               v1[82],
               v1[83],
               v1[81],
               v3,
               v1[17]);
  }
  return result;
}

//----- (02220844) --------------------------------------------------------
void Function_2220844()
{
  ;
}

//----- (02220848) --------------------------------------------------------
void Function_2220848()
{
  ;
}

//----- (0222084C) --------------------------------------------------------
void Function_222084c()
{
  ;
}

//----- (02220850) --------------------------------------------------------
void Function_2220850()
{
  ;
}

//----- (02220854) --------------------------------------------------------
int __fastcall Function_2220854(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int result;
  bool v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;

  v17 = a4;
  v4 = a1;
  v16 = 0;
  v15 = 0;
  do
  {
    v5 = *(uint *)(v4 + 168);
    v6 = *(uint *)(v4 + 156);
    v16 = *(uint *)(v4 + 164) - v5;
    v7 = *(uint *)(v4 + 128);
    v8 = *(uint *)(v4 + 120);
    v15 = *(uint *)(v4 + 124) - v7;
    v9 = (*(int (__fastcall **)(int, int, int, int *, int, int *))(v4 + 384))(
           v4,
           v4 + 356,
           v6 + v5,
           &v16,
           v8 + v7,
           &v15);
    if ( v9 == 2 && !Function_221fe2c(v4 + 116, *(uint *)(v4 + 136)) )
      return 0;
    v11 = v9 == 2;
    if ( v9 == 2 )
      v11 = v15 == 0;
  }
  while ( v11 );
  *(uint *)(v4 + 168) += v16;
  *(uint *)(v4 + 128) += v15;
  v12 = *(uint *)(v4 + 168);
  if ( v12 > 255 )
  {
    v13 = *(uint *)(v4 + 164);
    v14 = v13 - v12;
    if ( v13 == v12 )
    {
      Function_2220504((uint *)(v4 + 152));
    }
    else
    {
      Function_20d50d8(*(char **)(v4 + 156), (char *)(*(uint *)(v4 + 156) + v12), v14);
      *(uint *)(v4 + 168) = 0;
      *(uint *)(v4 + 164) = v14;
    }
  }
  result = 1;
  if ( v9 == 3 )
  {
    *(uint *)(v4 + 252) = 1;
    *(uint *)(v4 + 56) = 17;
    result = 0;
  }
  return result;
}

//----- (0222097C) --------------------------------------------------------
int __fastcall Function_222097c(uint *a1, uchar *a2, int *a3, int a4)
{
  uint *v4;
  int *v5;
  int v6;
  uchar *v7;
  int v8;
  uint v9;
  int result;
  int v11;
  int v12;
  bool v13;
  int v14;
  int v15;
  int v16;
  int v17;

  v17 = a4;
  v4 = a1;
  v5 = a3;
  v6 = a1[77];
  v7 = a2;
  v8 = *a3 - 1;
  if ( v6 )
  {
    v9 = ((int (__cdecl *)(int))dword_21EA714[75])(v6);
    if ( v9 < v4[78] + 250 )
      return 1;
    v4[78] = v9;
    if ( v8 >= 125 )
      v8 = 125;
  }
  if ( v4[33] >= v4[32] )
  {
    v11 = ((int (__fastcall *)(uint, uchar *, int, uint, int))dword_21EA714[444])(v4[18], v7, v8, 0, v17);
    v17 = v11;
    if ( v11 == -1 )
    {
      v12 = ((int (__fastcall *)(uint))dword_21EA714[521])(v4[18]);
      v13 = v12 == -6;
      if ( v12 != -6 )
        v13 = v12 == -26;
      if ( !v13 )
        v13 = v12 == -76;
      if ( v13 )
      {
        result = 1;
      }
      else
      {
        v4[63] = 1;
        v4[14] = 5;
        v4[19] = v12;
        v4[76] = 1;
        result = 3;
      }
    }
    else
    {
      if ( !v11 )
      {
        v4[76] = 1;
        return 2;
      }
      if ( !v4[90] )
        goto LABEL_37;
      if ( !Function_2220130() )
        return 3;
      if ( !Function_2220854((int)v4, v14, v15, v16) )
      {
        v4[63] = 1;
        v4[14] = 17;
        return 3;
      }
      if ( v4[32] - v4[33] <= 0 )
      {
        *v7 = 0;
        *v5 = 0;
        return 1;
      }
      v17 = *v5 - 1;
      if ( !Function_2220618(v4 + 29, v7, &v17) )
        return 3;
      if ( v4[33] == v4[32] )
      {
        v4[32] = v4[62];
        v4[33] = v4[62];
      }
      v11 = v17;
      if ( v17 <= 0 )
      {
        result = 1;
      }
      else
      {
LABEL_37:
        result = 0;
        v7[v11] = 0;
        *v5 = v17;
        if ( v17 <= 0 )
          result = 1;
      }
    }
  }
  else
  {
    Function_2220618(v4 + 29, v7, v5);
    if ( v4[33] == v4[32] )
    {
      v4[32] = v4[62];
      v4[33] = v4[62];
    }
    result = 0;
  }
  return result;
}

//----- (02220B90) --------------------------------------------------------
int __fastcall Function_2220b90(uint *a1, int a2, int a3)
{
  uint *v3;
  int result;
  int v5;
  bool v6;

  v3 = a1;
  result = ((int (__fastcall *)(uint, int, int, uint))dword_21EA714[461])(a1[18], a2, a3, 0);
  if ( result == -1 )
  {
    v5 = ((int (__fastcall *)(uint))dword_21EA714[521])(v3[18]);
    v6 = v5 == -6;
    if ( v5 != -6 )
      v6 = v5 == -26;
    if ( !v6 )
      v6 = v5 == -76;
    if ( v6 )
    {
      result = 0;
    }
    else
    {
      v3[63] = 1;
      v3[14] = 5;
      v3[19] = v5;
      result = -1;
    }
  }
  else if ( v3[4] == 4 )
  {
    v3[82] += result;
  }
  return result;
}

//----- (02220C0C) --------------------------------------------------------
int __fastcall Function_2220c0c(uint *a1, int a2, int a3)
{
  int v3;
  int v4;

  v3 = a3;
  if ( a1[23] )
    goto LABEL_11;
  v4 = Function_2220b90(a1, a2, a3);
  if ( v4 == -1 )
    return 0;
  if ( v4 == v3 )
    return 1;
LABEL_11:
  if ( Function_2220130() )
    return 2;
  return 0;
}

//----- (02220C70) --------------------------------------------------------
int Function_2220c70()
{
  int result;
  int v1;
  int v2;
  int v3;
  uint *v4;
  int i;

  result = 0;
  if ( dword_2229E20[6] <= 0 )
  {
LABEL_4:
    if ( dword_2229E20[3] != dword_2229E20[6] )
      Function_20d407c((int)"ghiNumConnections == ghiConnectionsLen", (int)"ghttpConnection.c", (int)"ghiFindFreeSlot");
    v1 = dword_2229E20[6] + 4;
    v2 = ((int (__fastcall *)(int, int))dword_21D788C[2])(dword_2229E20[4], 4 * (dword_2229E20[6] + 4));
    if ( v2 )
    {
      v3 = dword_2229E20[6];
      dword_2229E20[4] = v2;
      if ( dword_2229E20[6] >= v1 )
      {
LABEL_14:
        result = dword_2229E20[6];
        dword_2229E20[6] += 4;
      }
      else
      {
        while ( 1 )
        {
          *(uint *)(dword_2229E20[4] + 4 * v3) = ((int (__fastcall *)(int))dword_21D776C[69])(388);
          v4 = *(uint **)(dword_2229E20[4] + 4 * v3);
          if ( !v4 )
            break;
          ++v3;
          *v4 = 0;
          if ( v3 >= v1 )
            goto LABEL_14;
        }
        for ( i = v3 - 1; i >= dword_2229E20[6]; --i )
          ((void (__fastcall *)(uint))dword_21D788C[9])(*(uint *)(dword_2229E20[4] + 4 * i));
        result = -1;
      }
    }
    else
    {
      result = -1;
    }
  }
  else
  {
    while ( **(uint **)(dword_2229E20[4] + 4 * result) )
    {
      if ( ++result >= dword_2229E20[6] )
        goto LABEL_4;
    }
  }
  return result;
}

//----- (02220D8C) --------------------------------------------------------
int Function_2220d8c()
{
  int v0;
  int result;
  int v2;
  int v3;

  Function_222084c();
  v0 = Function_2220c70();
  if ( v0 == -1 )
  {
    Function_2220850();
    result = 0;
  }
  else
  {
    v2 = *(uint *)(dword_2229E20[4] + 4 * v0);
    Call_FillMemWithValue(*(int **)(dword_2229E20[4] + 4 * v0), 0, 0x184u);
    *(uint *)v2 = 1;
    *(uint *)(v2 + 4) = v0;
    *(uint *)(v2 + 8) = ++dword_2229E20[5];
    *(uint *)(v2 + 12) = 0;
    *(uint *)(v2 + 16) = 0;
    *(uint *)(v2 + 20) = 0;
    *(uint *)(v2 + 24) = 0;
    *(uint *)(v2 + 28) = 0;
    *(ushort *)(v2 + 32) = 0;
    *(uint *)(v2 + 36) = 0;
    *(uint *)(v2 + 40) = 0;
    *(uint *)(v2 + 44) = 0;
    *(uint *)(v2 + 48) = 0;
    *(uint *)(v2 + 52) = 0;
    *(uint *)(v2 + 56) = 0;
    *(uint *)(v2 + 60) = 0;
    *(uint *)(v2 + 64) = 0;
    *(uint *)(v2 + 68) = 0;
    *(uint *)(v2 + 72) = -1;
    *(uint *)(v2 + 76) = 0;
    *(uint *)(v2 + 224) = 0;
    *(uint *)(v2 + 228) = 0;
    *(uint *)(v2 + 232) = 0;
    *(uint *)(v2 + 236) = 0;
    *(uint *)(v2 + 240) = 0;
    *(uint *)(v2 + 244) = 0;
    *(uint *)(v2 + 248) = 0;
    *(uint *)(v2 + 252) = 0;
    *(uint *)(v2 + 256) = 0;
    *(uint *)(v2 + 260) = -1;
    *(uint *)(v2 + 264) = 0;
    *(uint *)(v2 + 268) = 0;
    *(uint *)(v2 + 272) = 0;
    *(uint *)(v2 + 300) = 0;
    *(uint *)(v2 + 308) = 0;
    *(uint *)(v2 + 312) = 0;
    *(uint *)(v2 + 316) = 0;
    *(uint *)(v2 + 344) = 500;
    *(ushort *)(v2 + 352) = 80;
    *(uint *)(v2 + 348) = 0;
    *(uint *)(v2 + 356) = 0;
    v3 = Function_221feb8(v2, (uint *)(v2 + 80), 2048, 4096);
    if ( v3 )
      v3 = Function_221feb8(v2, (uint *)(v2 + 116), 2048, 2048);
    if ( v3 )
      v3 = Function_221feb8(v2, (uint *)(v2 + 152), 2048, 1024);
    if ( v3 )
    {
      ++dword_2229E20[3];
      Function_2220850();
      result = v2;
    }
    else
    {
      Function_2220f24(v2);
      Function_2220850();
      result = 0;
    }
  }
  return result;
}

//----- (02220F24) --------------------------------------------------------
int __fastcall Function_2220f24(int *a1)
{
  int *v1;
  int v3;
  void (__fastcall *v4)(int *, int *);

  v1 = a1;
  if ( !a1 )
    Function_20d407c((int)"connection", (int)"ghttpConnection.c", (int)"ghiFreeConnection");
  if ( v1[1] < 0 )
    Function_20d407c((int)"connection->request >= 0", (int)"ghttpConnection.c", (int)"ghiFreeConnection");
  if ( v1[1] >= dword_2229E20[6] )
    Function_20d407c((int)"connection->request < ghiConnectionsLen", (int)"ghttpConnection.c", (int)"ghiFreeConnection");
  if ( !*v1 )
    Function_20d407c((int)"connection->inUse", (int)"ghttpConnection.c", (int)"ghiFreeConnection");
  if ( !v1 )
    return 0;
  if ( !*v1 )
    return 0;
  v3 = v1[1];
  if ( v3 < 0 )
    return 0;
  if ( v3 >= dword_2229E20[6] )
    return 0;
  Function_222084c();
  ((void (__fastcall *)(int))dword_21D788C[9])(v1[5]);
  ((void (__fastcall *)(int))dword_21D788C[9])(v1[6]);
  ((void (__fastcall *)(int))dword_21D788C[9])(v1[9]);
  ((void (__fastcall *)(int))dword_21D788C[9])(v1[10]);
  ((void (__fastcall *)(int))dword_21D788C[9])(v1[66]);
  ((void (__fastcall *)(int))dword_21D788C[9])(v1[87]);
  if ( v1[18] != -1 )
  {
    ((void (*)(void))dword_21EA714[380])();
    ((void (__fastcall *)(int))dword_21EA714[375])(v1[18]);
  }
  Function_22200d0(v1 + 20);
  Function_22200d0(v1 + 29);
  Function_22200d0(v1 + 38);
  Function_22200d0(v1 + 47);
  if ( v1[80] )
    Function_2221edc(v1);
  if ( v1[79] && Function_2221900() )
  {
    Function_2221908(v1[79]);
    v1[79] = 0;
  }
  if ( v1[91] )
  {
    v4 = (void (__fastcall *)(int *, int *))v1[94];
    if ( v4 )
      v4(v1, v1 + 89);
    v1[91] = 0;
  }
  *v1 = 0;
  --dword_2229E20[3];
  Function_2220850();
  return 1;
}

//----- (02221108) --------------------------------------------------------
uint *__fastcall Function_2221108(int a1)
{
  int v1;
  uint *result;
  uint *v3;

  v1 = a1;
  if ( a1 < 0 )
    Function_20d407c((int)"request >= 0", (int)"ghttpConnection.c", (int)"ghiRequestToConnection");
  if ( v1 >= dword_2229E20[6] )
    Function_20d407c((int)"request < ghiConnectionsLen", (int)"ghttpConnection.c", (int)"ghiRequestToConnection");
  Function_222084c();
  if ( v1 >= 0 && v1 < dword_2229E20[6] )
  {
    v3 = *(uint **)(dword_2229E20[4] + 4 * v1);
    if ( !*v3 )
      v3 = 0;
    Function_2220850();
    result = v3;
  }
  else
  {
    Function_2220850();
    result = 0;
  }
  return result;
}

//----- (022211B0) --------------------------------------------------------
void __fastcall Function_22211b0(void (*a1)(void))
{
  void (*v1)(void);
  int i;

  v1 = a1;
  if ( dword_2229E20[3] > 0 )
  {
    Function_222084c();
    for ( i = 0; i < dword_2229E20[6]; ++i )
    {
      if ( **(uint **)(dword_2229E20[4] + 4 * i) )
        v1();
    }
    Function_2220850();
  }
}

//----- (02221214) --------------------------------------------------------
int __fastcall Function_2221214(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( !a1 )
    Function_20d407c((int)"connection", (int)"ghttpConnection.c", (int)"ghiRedirectConnection");
  if ( !*(uint *)(v1 + 264) )
    Function_20d407c((int)"connection->redirectURL", (int)"ghttpConnection.c", (int)"ghiRedirectConnection");
  *(uint *)(v1 + 16) = 0;
  ((void (__fastcall *)(uint))dword_21D788C[9])(*(uint *)(v1 + 20));
  *(uint *)(v1 + 20) = *(uint *)(v1 + 264);
  *(uint *)(v1 + 264) = 0;
  ((void (__fastcall *)(uint))dword_21D788C[9])(*(uint *)(v1 + 24));
  *(uint *)(v1 + 24) = 0;
  *(uint *)(v1 + 28) = 0;
  *(ushort *)(v1 + 32) = 0;
  ((void (__fastcall *)(uint))dword_21D788C[9])(*(uint *)(v1 + 36));
  *(uint *)(v1 + 36) = 0;
  ((void (__fastcall *)(uint, int))dword_21EA714[380])(*(uint *)(v1 + 72), 2);
  ((void (__fastcall *)(uint))dword_21EA714[375])(*(uint *)(v1 + 72));
  *(uint *)(v1 + 72) = -1;
  Function_2220504((uint *)(v1 + 80));
  Function_2220504((uint *)(v1 + 116));
  Function_2220504((uint *)(v1 + 152));
  *(uint *)(v1 + 228) = 0;
  *(uint *)(v1 + 232) = 0;
  *(uint *)(v1 + 236) = 0;
  *(uint *)(v1 + 240) = 0;
  *(uint *)(v1 + 244) = 0;
  *(uint *)(v1 + 248) = 0;
  *(uint *)(v1 + 304) = 0;
  result = *(uint *)(v1 + 268) + 1;
  *(uint *)(v1 + 268) = result;
  return result;
}

//----- (02221318) --------------------------------------------------------
int *Function_2221318()
{
  int *result;
  int i;

  result = (int *)dword_2229E20[4];
  if ( dword_2229E20[4] )
  {
    Function_22211b0((void (*)(void))Function_2220f24);
    for ( i = 0; i < dword_2229E20[6]; ++i )
      ((void (__fastcall *)(uint))dword_21D788C[9])(*(uint *)(dword_2229E20[4] + 4 * i));
    ((void (__fastcall *)(int))dword_21D788C[9])(dword_2229E20[4]);
    result = &dword_2229E20[3];
    dword_2229E20[4] = 0;
    dword_2229E20[6] = 0;
    dword_2229E20[3] = 0;
  }
  return result;
}

//----- (02221390) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x22213B4 for case 0"

//----- (022213B4) --------------------------------------------------------
// jumptable 022213AC case 0
int __fastcall Function_22213b4(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int, int, int, int))
{
  return a6(a1, a2, a3, a5);
}

//----- (022213B8) --------------------------------------------------------
void Function_22213b8()
{
  JUMPOUT(&locret_22213CC);
}

//----- (022213BC) --------------------------------------------------------
void Function_22213bc()
{
  JUMPOUT(&locret_22213CC);
}

//----- (022213C0) --------------------------------------------------------
void Function_22213c0()
{
  JUMPOUT(&locret_22213CC);
}

//----- (022213C4) --------------------------------------------------------
void Function_22213c4()
{
  JUMPOUT(&loc_22213D0);
}

//----- (022213C8) --------------------------------------------------------
void Function_22213c8()
{
  JUMPOUT(&loc_222143C);
}

//----- (022213E4) --------------------------------------------------------
void Function_22213e4()
{
  JUMPOUT(&loc_222140C);
}

//----- (022213E8) --------------------------------------------------------
void Function_22213e8()
{
  JUMPOUT(&loc_2221430);
}

//----- (022213EC) --------------------------------------------------------
void Function_22213ec()
{
  JUMPOUT(&loc_2221418);
}

//----- (022213F0) --------------------------------------------------------
void Function_22213f0()
{
  JUMPOUT(&loc_2221424);
}

//----- (022213F4) --------------------------------------------------------
void Function_22213f4()
{
  JUMPOUT(&loc_2221430);
}

//----- (022213F8) --------------------------------------------------------
void Function_22213f8()
{
  JUMPOUT(&loc_2221430);
}

//----- (022213FC) --------------------------------------------------------
void Function_22213fc()
{
  JUMPOUT(&loc_2221430);
}

//----- (02221400) --------------------------------------------------------
void Function_2221400()
{
  JUMPOUT(&loc_2221430);
}

//----- (02221404) --------------------------------------------------------
void Function_2221404()
{
  JUMPOUT(&loc_2221430);
}

//----- (02221408) --------------------------------------------------------
void __fastcall Function_2221408(int a1)
{
  int v1;

  *(uint *)(a1 + 56) = 11;
  JUMPOUT(__CS__, v1);
}

//----- (0222144C) --------------------------------------------------------
int __fastcall Function_222144c(int *a1)
{
  int *v1;
  int v3;

  v1 = a1;
  if ( !a1 )
    Function_20d407c((int)"connection", (int)"ghttpMain.c", (int)"ghiProcessConnection");
  if ( Function_2221108(v1[1]) != v1 )
    Function_20d407c(
      (int)"ghiRequestToConnection(connection->request) == connection",
      (int)"ghttpMain.c",
      (int)"ghiProcessConnection");
  if ( v1[75] )
    return 0;
  v1[75] = 1;
  if ( !v1[4] )
    Function_22229b0(v1);
  if ( v1[4] == 1 )
    Function_2222a74(v1);
  if ( v1[4] == 2 )
    Function_2222cc4(v1);
  if ( v1[4] == 3 )
    Function_2222e24(v1);
  if ( v1[4] == 4 )
    Function_2223098(v1);
  if ( v1[4] == 5 )
    Function_2223130(v1);
  if ( v1[4] == 6 )
    Function_22232fc(v1);
  if ( v1[4] == 7 )
    Function_2223838(v1);
  if ( v1[4] == 8 )
    Function_2223ca8(v1);
  if ( v1[66] )
    Function_2221214((int)v1);
  v3 = v1[63];
  if ( v3 )
  {
    Function_2221390(v1);
    Function_22206d4((int)v1);
    Function_2220f24(v1);
  }
  else
  {
    v1[75] = 0;
  }
  return v3;
}

//----- (022215B4) --------------------------------------------------------
void Function_60_22215b4()
{
  Function_222084c();
  if ( ++dword_2229E20[7] == 0 )
  {
    Function_2220844();
    dword_222911C = 250;
    dword_2229120 = 125;
  }
  else
  {
    Function_2220850();
  }
}

//----- (02221608) --------------------------------------------------------
void Function_60_2221608()
{
  Function_222084c();
  if ( --dword_2229E20[7] == 1 )
  {
    Function_2221318();
    if ( dword_2229E20[2] )
    {
      ((void (*)(void))dword_21D788C[9])();
      dword_2229E20[2] = 0;
    }
    Function_2220850();
    Function_2220848();
  }
  else
  {
    Function_2220850();
  }
}

//----- (02221664) --------------------------------------------------------
int __fastcall Function_60_2221664(int a1, int a2, int a3, int a4)
{
  return Function_60_22216a0(a1, 0, 0, 0, 0, 0, a2, 0, a3, a4);
}

//----- (022216A0) --------------------------------------------------------
int __fastcall Function_60_22216a0(char *a1, uchar *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  bool v10;
  uchar *v11;
  uchar *v12;
  int v13;
  int v14;
  bool v15;
  int result;
  int *v17;
  int v18;
  bool v19;
  int v20;
  int v21;

  v11 = a1;
  v10 = a1 == 0;
  if ( a1 )
    a1 = (char *)*a1;
  v12 = a2;
  v13 = a3;
  v14 = a4;
  if ( v10 || !a1 )
    Function_20d407c((int)"URL && URL[0]", (int)"ghttpMain.c", (int)"ghttpGetExA");
  if ( v14 < 0 )
    Function_20d407c((int)"bufferSize >= 0", (int)"ghttpMain.c", (int)"ghttpGetExA");
  if ( v13 && !v14 )
    Function_20d407c((int)"!buffer || bufferSize", (int)"ghttpMain.c", (int)"ghttpGetExA");
  v15 = v11 == 0;
  if ( v11 )
    v15 = *v11 == 0;
  if ( v15 )
    return -1;
  if ( v14 < 0 )
    return -1;
  if ( v13 && !v14 )
    return -1;
  if ( !dword_2229E20[7] )
    Function_60_22215b4();
  v17 = (int *)Function_2220d8c();
  if ( !v17 )
    return -1;
  v17[3] = 0;
  v18 = ((int (__fastcall *)(uchar *))dword_21EA714[102])(v11);
  v17[5] = v18;
  if ( v18 )
  {
    v19 = v12 == 0;
    if ( v12 )
      v19 = *v12 == 0;
    if ( v19 || (v20 = ((int (__fastcall *)(uchar *))dword_21EA714[102])(v12), (v17[10] = v20) != 0) )
    {
      v17[79] = a5;
      v17[12] = a7;
      v17[15] = a8;
      v17[16] = a9;
      v17[17] = a10;
      v17[77] = a6;
      v17[56] = v13 != 0;
      if ( v13 != 0 )
        v21 = Function_221ffd4((int)v17, v17 + 47, v13, v14);
      else
        v21 = Function_221feb8((int)v17, v17 + 47, 2048, 2048);
      if ( v21 )
      {
        if ( !a5 || Function_2221d4c(v17) )
        {
          if ( a7 )
          {
            while ( !Function_222144c(v17) )
              ((void (__fastcall *)(int))dword_21EA714[97])(10);
            result = 0;
          }
          else
          {
            result = v17[1];
          }
        }
        else
        {
          Function_2220f24(v17);
          result = -1;
        }
      }
      else
      {
        Function_2220f24(v17);
        result = -1;
      }
    }
    else
    {
      Function_2220f24(v17);
      result = -1;
    }
  }
  else
  {
    Function_2220f24(v17);
    result = -1;
  }
  return result;
}

//----- (022218EC) --------------------------------------------------------
void Function_60_22218ec()
{
  Function_22211b0((void (*)(void))Function_222144c);
}

//----- (02221900) --------------------------------------------------------
int __fastcall Function_2221900(int a1)
{
  return *(uint *)(a1 + 16);
}

//----- (02221908) --------------------------------------------------------
int __fastcall Function_2221908(uint *a1)
{
  uint *v1;

  v1 = a1;
  ((void (__fastcall *)(uint))dword_21E9624[331])(*a1);
  return ((int (__fastcall *)(uint *))dword_21D788C[9])(v1);
}

//----- (02221924) --------------------------------------------------------
const char *__fastcall Function_2221924(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 316);
  if ( !v1 )
    Function_20d407c((int)"post", (int)"ghttpPost.c", (int)"ghiPostGetContentType");
  if ( !v1 )
    return (const char *)&dword_222949C;
  if ( *(uint *)(v1 + 12) )
    return "multipart/form-data; boundary=Qr4G823s23d---<<><><<<>--7d118e0536";
  return "application/x-www-form-urlencoded";
}

//----- (02221984) --------------------------------------------------------
int __fastcall Function_2221984(int a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;
  int v6;
  int v7;

  v1 = *(uint **)(a1 + 316);
  v2 = 0;
  v3 = ((int (__fastcall *)(uint))dword_21E9624[358])(*v1);
  v4 = v3;
  if ( !v3 )
    return 0;
  v6 = 0;
  if ( v3 > 0 )
  {
    do
    {
      v7 = ((int (__fastcall *)(uint, int))dword_21E9624[360])(*v1, v6);
      if ( *(uint *)v7 )
        Function_20d407c((int)"data->type == GHIString", (int)"ghttpPost.c", (int)"ghiPostGetNoFilesContentLength");
      ++v6;
      v2 += strlen(*(char **)(v7 + 4)) + *(uint *)(v7 + 12) + 2 * *(uint *)(v7 + 20) + 1;
    }
    while ( v6 < v4 );
  }
  return v2 + v4 - 1;
}

//----- (02221A30) --------------------------------------------------------
int __fastcall Function_2221a30(int a1)
{
  int v1;
  uint *v2;
  int v3;
  int v4;
  int i;
  char **v6;
  char **v7;
  char *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v1 = a1;
  v2 = *(uint **)(a1 + 316);
  v3 = 0;
  if ( !dword_2229E20[10] )
  {
    dword_2229E20[10] = strlen("--Qr4G823s23d---<<><><<<>--7d118e0536");
    dword_2229E20[9] = dword_2229E20[10] + 47;
    dword_2229E20[11] = dword_2229E20[10] + 76;
    dword_2229E20[8] = dword_2229E20[10] + 4;
  }
  v4 = ((int (__fastcall *)(uint))dword_21E9624[358])(*v2);
  for ( i = 0; i < v4; ++i )
  {
    v6 = (char **)((int (__fastcall *)(uint, int))dword_21E9624[360])(*v2, i);
    v7 = v6;
    v8 = *v6;
    if ( v8 )
    {
      if ( v8 == (char *)1 )
      {
        v9 = v3 + dword_2229E20[11] + strlen(v7[1]);
        v10 = v9 + strlen(v7[3]);
        v11 = v10 + strlen(v7[4]);
        v12 = ((int (__fastcall *)(uint, int))dword_21E9624[360])(*(uint *)(v1 + 320), i);
        if ( !v12 )
          Function_20d407c((int)"state", (int)"ghttpPost.c", (int)"ghiPostGetHasFilesContentLength");
        v3 = v11 + *(uint *)(v12 + 12);
      }
      else
      {
        if ( v8 != (char *)2 )
        {
          Function_20d407c((int)"0", (int)"ghttpPost.c", (int)"ghiPostGetHasFilesContentLength");
          return 0;
        }
        v13 = v3 + dword_2229E20[11] + strlen(v7[1]);
        v14 = v13 + strlen(v7[4]);
        v3 = (int)&v7[3][v14 + strlen(v7[5])];
      }
    }
    else
    {
      v3 += (int)&v7[3][dword_2229E20[9] + strlen(v7[1])];
    }
  }
  return v3 + dword_2229E20[8];
}

//----- (02221BD0) --------------------------------------------------------
int __fastcall Function_2221bd0(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 316);
  if ( !v2 )
    Function_20d407c((int)"post", (int)"ghttpPost.c", (int)"ghiPostGetContentLength");
  if ( !v2 )
    return 0;
  if ( *(uint *)(v2 + 12) )
    return Function_2221a30(v1);
  return Function_2221984(v1);
}

//----- (02221C30) --------------------------------------------------------
int __fastcall Function_2221c30(int **a1)
{
  int **v1;
  int v2;
  int *v3;
  int v5;

  v1 = a1;
  v2 = **a1;
  a1[1] = (int *)-1;
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      v3 = a1[2];
      if ( !v3 )
        return 0;
      if ( Function_20d4de4(v3, 0, 2) )
        return 0;
      v5 = Function_20d4ae0(v1[2]);
      v1[3] = (int *)v5;
      if ( v5 == -1 )
        return 0;
      Function_20d4f10((int)v1[2]);
    }
    else if ( v2 != 2 )
    {
      Function_20d407c((int)"0", (int)"ghttpPost.c", (int)"ghiPostStateInit");
      return 0;
    }
  }
  return 1;
}

//----- (02221CE0) --------------------------------------------------------
int __fastcall Function_2221ce0(int **a1)
{
  int **v1;
  int result;
  int v3;

  v1 = a1;
  result = **a1;
  if ( result )
  {
    if ( result == 1 )
    {
      v3 = (int)v1[2];
      if ( v3 )
        Function_20d4908(v3);
      result = 0;
      v1[2] = 0;
    }
    else if ( result != 2 )
    {
      result = Function_20d407c((int)"0", (int)"ghttpPost.c", (int)"ghiPostStateCleanup");
    }
  }
  return result;
}

//----- (02221D4C) --------------------------------------------------------
int __fastcall Function_2221d4c(uint *a1)
{
  uint *v1;
  int result;
  int v3;
  int v4;
  int v5;
  int v6;
  int i;
  int **v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v1 = a1;
  if ( !a1[79] )
    Function_20d407c((int)"connection->post", (int)"ghttpPost.c", (int)"ghiPostInitState");
  result = 0;
  if ( v1[79] )
  {
    v1[81] = 0;
    v1[82] = 0;
    v1[83] = 0;
    v1[84] = *(uint *)(v1[79] + 4);
    v1[85] = *(uint *)(v1[79] + 8);
    v3 = ((int (__fastcall *)(uint))dword_21E9624[358])(*(uint *)v1[79]);
    v4 = v3;
    v5 = ((int (__fastcall *)(int, int, uint))dword_21E9624[282])(16, v3, 0);
    v1[80] = v5;
    if ( v5 )
    {
      v6 = 0;
      if ( v4 <= 0 )
      {
LABEL_12:
        v9 = ((int (__fastcall *)(uint))dword_21E9624[358])(*(uint *)v1[79]);
        if ( v9 != ((int (__fastcall *)(uint))dword_21E9624[358])(v1[80]) )
          Function_20d407c(
            (int)"ArrayLength(connection->post->data) == ArrayLength(connection->postingState.states)",
            (int)"ghttpPost.c",
            (int)"ghiPostInitState");
        v1[83] = Function_2221bd0((int)v1);
        result = 1;
      }
      else
      {
        while ( 1 )
        {
          v10 = ((int (__fastcall *)(uint, int))dword_21E9624[360])(*(uint *)v1[79], v6);
          v11 = 0;
          v12 = 0;
          v13 = 0;
          if ( !Function_2221c30((int **)&v10) )
            break;
          ((void (__fastcall *)(uint, int *))dword_21E9624[386])(v1[80], &v10);
          if ( ++v6 >= v4 )
            goto LABEL_12;
        }
        for ( i = v6 - 1; i >= 0; --i )
        {
          v8 = (int **)((int (__fastcall *)(uint, int))dword_21E9624[360])(v1[80], i);
          Function_2221ce0(v8);
        }
        ((void (__fastcall *)(uint))dword_21E9624[331])(v1[80]);
        result = 0;
        v1[80] = 0;
      }
    }
    else
    {
      result = 0;
    }
  }
  return result;
}

//----- (02221EDC) --------------------------------------------------------
uint *__fastcall Function_2221edc(int a1)
{
  int v1;
  int v2;
  int i;
  int **v4;
  uint *result;
  bool v6;

  v1 = a1;
  if ( *(uint *)(a1 + 320) )
  {
    v2 = ((int (*)(void))dword_21E9624[358])();
    for ( i = 0; i < v2; ++i )
    {
      v4 = (int **)((int (__fastcall *)(uint, int))dword_21E9624[360])(*(uint *)(v1 + 320), i);
      Function_2221ce0(v4);
    }
    ((void (__fastcall *)(uint))dword_21E9624[331])(*(uint *)(v1 + 320));
    *(uint *)(v1 + 320) = 0;
  }
  result = *(uint **)(v1 + 316);
  v6 = result == 0;
  if ( result )
    v6 = result[4] == 0;
  if ( !v6 )
  {
    Function_2221908(result);
    result = 0;
    *(uint *)(v1 + 316) = 0;
  }
  return result;
}

//----- (02221F54) --------------------------------------------------------
int __fastcall Function_2221f54(uint *a1, uint *a2, int a3, int a4)
{
  uint *v4;
  uint *v5;
  int v6;
  int result;
  uchar *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v13 = a4;
  v4 = a1;
  v5 = a2;
  if ( a1[1] < 0 )
    Function_20d407c((int)"state->pos >= 0", (int)"ghttpPost.c", (int)"ghiPostStringStateDoPosting");
  v6 = *(uint *)(*v4 + 12);
  if ( !v6 )
    return 1;
  if ( v4[1] >= v6 )
    Function_20d407c(
      (int)"state->pos < state->data->data.string.len",
      (int)"ghttpPost.c",
      (int)"ghiPostStringStateDoPosting");
  if ( *(uint *)(v5[79] + 12) || !*(uint *)(*v4 + 16) )
  {
    v11 = *(uint *)(*v4 + 12) - v4[1];
    v12 = Function_2220b90(v5, *(uint *)(*v4 + 8), v11);
    if ( v12 == -1 )
    {
      result = 0;
    }
    else
    {
      v4[1] += v12;
      if ( v12 == v11 )
        result = 1;
      else
        result = 2;
    }
  }
  else
  {
    v8 = *(uchar **)(*v4 + 8);
    strcpy((char *)&v13, "%00");
    v9 = 0;
    v10 = (char)*v8;
    if ( *v8 )
    {
      do
      {
        if ( strchr("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_@-.*", v10) )
        {
          Function_222046c((int)(v5 + 20));
        }
        else if ( v10 == 32 )
        {
          Function_222046c((int)(v5 + 20));
        }
        else
        {
          if ( v10 / 16 >= 16 )
            Function_20d407c((int)"(c / 16) < 16", (int)"ghttpPost.c", (int)"ghiPostStringStateDoPosting");
          BYTE1(v13) = a0123456789abcd_0[v10 / 16];
          BYTE2(v13) = a0123456789abcd_0[((uint)v10 >> 31)
                                       + __ROR4__((v10 << 28) - ((uint)v10 >> 31), 28)];
          Function_2220130();
        }
        v10 = (char)v8[++v9];
      }
      while ( v8[v9] );
    }
    result = 1;
  }
  return result;
}

//----- (02222138) --------------------------------------------------------
int __fastcall Function_2222138(int a1, uint *a2)
{
  int v2;
  uint *v3;
  int v4;
  int v6;
  int v7;
  char v8;

  v2 = a1;
  v3 = a2;
  if ( *(uint *)(a1 + 4) < 0 )
    Function_20d407c((int)"state->pos >= 0", (int)"ghttpPost.c", (int)"ghiPostFileDiskStateDoPosting");
  if ( *(uint *)(v2 + 4) >= *(uint *)(v2 + 12) )
    Function_20d407c(
      (int)"state->pos < state->state.fileDisk.len",
      (int)"ghttpPost.c",
      (int)"ghiPostFileDiskStateDoPosting");
  if ( *(uint *)(v2 + 4) != Function_20d4ae0(*(int **)(v2 + 8)) )
    Function_20d407c(
      (int)"state->pos == (int)ftell(state->state.fileDisk.file)",
      (int)"ghttpPost.c",
      (int)"ghiPostFileDiskStateDoPosting");
  do
  {
    v4 = Function_20d4204(&v8, 1, 4096, *(int **)(v2 + 8));
    if ( v4 <= 0 )
    {
      v3[63] = 1;
      v3[14] = 14;
      return 0;
    }
    v6 = *(uint *)(v2 + 4) + v4;
    *(uint *)(v2 + 4) = v6;
    if ( v6 > *(uint *)(v2 + 12) )
    {
      v3[63] = 1;
      v3[14] = 14;
      return 0;
    }
    v7 = Function_2220c0c(v3, (int)&v8, v4);
    if ( !v7 )
      return 0;
    if ( *(uint *)(v2 + 4) == *(uint *)(v2 + 12) )
      return 1;
  }
  while ( v7 == 1 );
  return 2;
}

//----- (02222294) --------------------------------------------------------
int __fastcall Function_2222294(uint *a1, uint *a2)
{
  uint *v2;
  uint *v3;
  int v4;
  int v6;
  int v7;
  int v8;
  int v9;

  v2 = a1;
  v3 = a2;
  if ( a1[1] < 0 )
    Function_20d407c((int)"state->pos >= 0", (int)"ghttpPost.c", (int)"ghiPostFileMemoryStateDoPosting");
  v4 = *(uint *)(*v2 + 12);
  if ( !v4 )
    return 1;
  if ( v2[1] >= v4 )
    Function_20d407c(
      (int)"state->pos < state->data->data.fileMemory.len",
      (int)"ghttpPost.c",
      (int)"ghiPostFileMemoryStateDoPosting");
  do
  {
    v6 = v2[1];
    v7 = *(uint *)(*v2 + 12) - v6;
    if ( v7 >= 0x8000 )
      v7 = 0x8000;
    v8 = Function_2220b90(v3, *(uint *)(*v2 + 8) + v6, v7);
    if ( v8 == -1 )
      return 0;
    v9 = v2[1] + v8;
    v2[1] = v9;
    if ( *(uint *)(*v2 + 12) == v9 )
      return 1;
  }
  while ( v8 );
  return 2;
}

//----- (02222374) --------------------------------------------------------
int __fastcall Function_2222374(int **a1, uint *a2, int a3)
{
  int **v3;
  int v4;
  uint *v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v19;
  char v20;

  v3 = a1;
  v4 = -1;
  v5 = a2;
  v6 = a3;
  if ( a1[1] != (int *)-1 )
    goto LABEL_29;
  a1[1] = 0;
  if ( *(uint *)(a2[79] + 12) )
  {
    v8 = *a1;
    v9 = **a1;
    if ( v9 )
    {
      if ( (uint)(v9 - 1) > 1 )
      {
        Function_20d407c((int)"0", (int)"ghttpPost.c", (int)"ghiPostStateDoPosting");
      }
      else
      {
        if ( v9 == 1 )
        {
          v11 = v8[3];
          v12 = v8[4];
        }
        else
        {
          v13 = v8[4];
          v14 = v8[5];
        }
        v15 = v8[1];
        Function_20d7510(
          (int)&v20,
          "%sContent-Disposition: form-data; name=\"%s\"; filename=\"%s\"\r\nContent-Type: %s\r\n\r\n");
      }
    }
    else
    {
      v10 = v8[1];
      Function_20d7510((int)&v20, "%sContent-Disposition: form-data; name=\"%s\"\r\n\r\n");
    }
  }
  else
  {
    if ( **a1 )
      Function_20d407c((int)"state->data->type == GHIString", (int)"ghttpPost.c", (int)"ghiPostStateDoPosting");
    v7 = (*v3)[1];
    if ( v6 )
      Function_20d7510((int)&v20, "%s=");
    else
      Function_20d7510((int)&v20, "&%s=");
  }
  v16 = strlen(&v20);
  v17 = Function_2220c0c(v5, (int)&v20, v16);
  if ( !v17 )
    return 0;
  if ( v17 == 2 )
    return 2;
LABEL_29:
  v19 = **v3;
  if ( !v19 )
    return Function_2221f54(v3, v5, a3, v4);
  if ( v19 == 1 )
    return Function_2222138((int)v3, v5);
  if ( v19 != 2 )
    Function_20d407c((int)"state->data->type == GHIFileMemory", (int)"ghttpPost.c", (int)"ghiPostStateDoPosting");
  return Function_2222294(v3, v5);
}

//----- (02222578) --------------------------------------------------------
int __fastcall Function_2222578(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int result;
  int **v5;
  int v6;
  int v7;
  bool v8;
  int v9;
  int v10;

  v1 = a1;
  if ( !a1 )
    Function_20d407c((int)"connection", (int)"ghttpPost.c", (int)"ghiPostDoPosting");
  if ( !v1[79] )
    Function_20d407c((int)"connection->post", (int)"ghttpPost.c", (int)"ghiPostDoPosting");
  if ( !v1[80] )
    Function_20d407c((int)"connection->postingState.states", (int)"ghttpPost.c", (int)"ghiPostDoPosting");
  v2 = ((int (__fastcall *)(uint))dword_21E9624[358])(*(uint *)v1[79]);
  if ( v2 != ((int (__fastcall *)(uint))dword_21E9624[358])(v1[80]) )
    Function_20d407c(
      (int)"ArrayLength(connection->post->data) == ArrayLength(connection->postingState.states)",
      (int)"ghttpPost.c",
      (int)"ghiPostDoPosting");
  if ( v1[81] < 0 )
    Function_20d407c((int)"connection->postingState.index >= 0", (int)"ghttpPost.c", (int)"ghiPostDoPosting");
  if ( v1[81] > ((int (__fastcall *)(uint))dword_21E9624[358])(v1[80]) )
    Function_20d407c(
      (int)"connection->postingState.index <= ArrayLength(connection->postingState.states)",
      (int)"ghttpPost.c",
      (int)"ghiPostDoPosting");
  v3 = ((int (__fastcall *)(uint))dword_21E9624[358])(v1[80]);
  if ( !v1[23] )
    goto LABEL_41;
  if ( !Function_2220548(v1) )
    return 0;
  if ( v1[24] < v1[23] )
    return 2;
  Function_2220504(v1 + 20);
  if ( v1[81] == v3 )
    return 1;
LABEL_41:
  if ( v1[81] >= v3 )
  {
LABEL_33:
    if ( !*(uint *)(v1[79] + 12)
      || (v10 = strlen("\r\n--Qr4G823s23d---<<><><<<>--7d118e0536--\r\n"),
          Function_2220c0c(v1, (int)"\r\n--Qr4G823s23d---<<><><<<>--7d118e0536--\r\n", v10)) )
    {
      if ( v1[23] )
        result = 2;
      else
        result = 1;
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    while ( 1 )
    {
      v5 = (int **)((int (__fastcall *)(uint))dword_21E9624[360])(v1[80]);
      if ( !v5 )
        Function_20d407c((int)"postState", (int)"ghttpPost.c", (int)"ghiPostDoPosting");
      v6 = Function_2222374(v5, v1, v1[81] == 0);
      if ( !v6 )
        break;
      if ( v6 == 2 )
        return 2;
      v9 = v1[81] + 1;
      v1[81] = v9;
      if ( v9 >= v3 )
        goto LABEL_33;
    }
    v7 = v1[63];
    v8 = v7 == 0;
    if ( v7 )
      v8 = v1[14] == 0;
    if ( v8 )
      Function_20d407c((int)"connection->completed && connection->result", (int)"ghttpPost.c", (int)"ghiPostDoPosting");
    result = 0;
  }
  return result;
}

//----- (022227F8) --------------------------------------------------------
BOOL __fastcall Function_22227f8(int a1)
{
  int v1;
  uchar *v3;
  uchar *v4;
  int v5;
  int v6;
  uchar v7;
  int v8;
  int v9;
  int v10;
  int v11;
  const char *v12;
  int v13;
  short v14;
  int v15;
  int v16;
  char *v17;
  char *v18;
  char *i;

  v1 = a1;
  if ( !a1 )
    Function_20d407c((int)"connection", (int)"ghttpProcess.c", (int)"ghiParseURL");
  if ( !v1 )
    return 0;
  if ( !*(uint *)(v1 + 20) )
    Function_20d407c((int)"connection->URL", (int)"ghttpProcess.c", (int)"ghiParseURL");
  v3 = *(uchar **)(v1 + 20);
  if ( !v3 )
    return 0;
  if ( Function_20d8e28(*(uchar **)(v1 + 20), "http://", 7) )
  {
    if ( Function_20d8e28(v3, "https://", 8) )
      return 0;
    v4 = v3 + 8;
    v5 = 1;
  }
  else
  {
    v4 = v3 + 7;
    v5 = 0;
  }
  v6 = Function_20d8e98(v4, ":/");
  v7 = v4[v6];
  v4[v6] = 0;
  v8 = ((int (__fastcall *)(uchar *))dword_21EA714[102])(v4);
  *(uint *)(v1 + 24) = v8;
  if ( !v8 )
    return 0;
  v4[v6] = v7;
  v13 = (char)v4[v6];
  v12 = (const char *)&v4[v6];
  if ( v13 == 58 )
  {
    Function_20dae0c((int)++v12, v9, v10, v11);
    *(ushort *)(v1 + 32) = v14;
    if ( !*(ushort *)(v1 + 32) )
      return 0;
    do
    {
      v16 = (v12++)[1];
      v15 = v16;
    }
    while ( v16 && v15 != 47 );
  }
  else if ( v5 )
  {
    *(ushort *)(v1 + 32) = 443;
  }
  else
  {
    *(ushort *)(v1 + 32) = 80;
  }
  if ( !*v12 )
    v12 = "/";
  v17 = (char *)((int (__fastcall *)(const char *))dword_21EA714[102])(v12);
  v18 = v17;
  *(uint *)(v1 + 36) = v17;
  for ( i = strchr(v17, 32); i; i = strchr(*(char **)(v1 + 36), 32) )
  {
    *i = 43;
    v18 = *(char **)(v1 + 36);
  }
  return v18 != 0;
}

//----- (022229B0) --------------------------------------------------------
int __fastcall Function_22229b0(int a1)
{
  uint *v1;
  int v2;
  int result;
  int v4;
  int v5;
  int v6;

  v1 = (uint *)a1;
  v2 = Function_2220754(a1, 0, 0);
  ((void (__fastcall *)(int))dword_21EA714[100])(v2);
  if ( !Function_22227f8((int)v1) )
  {
    v1[63] = 1;
    result = 3;
    v1[14] = 3;
    return result;
  }
  v4 = v1[87];
  if ( !v4 )
  {
    v4 = dword_2229E20[2];
    if ( !dword_2229E20[2] )
      v4 = v1[6];
  }
  v5 = ((int (__fastcall *)(int))dword_21EA714[514])(v4);
  v1[7] = v5;
  if ( v5 == -1 )
  {
    v6 = ((int (__fastcall *)(int))dword_21FB984[13042])(v4);
    if ( !v6 )
    {
      v1[63] = 1;
      result = 4;
      v1[14] = 4;
      return result;
    }
    v1[7] = ***(uint ***)(v6 + 12);
  }
  v1[4] = 1;
  return Function_2220754((int)v1, 0, 0);
}

//----- (02222A74) --------------------------------------------------------
int __fastcall Function_2222a74(int a1)
{
  int v1;
  int v2;
  int result;
  bool v4;
  BOOL v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v1 = a1;
  if ( *(uint *)(a1 + 72) != -1 )
    goto LABEL_28;
  v2 = ((int (__fastcall *)(int, int, uint))dword_21EA714[370])(2, 1, 0);
  *(uint *)(v1 + 72) = v2;
  if ( v2 == -1 )
  {
    *(uint *)(v1 + 252) = 1;
    *(uint *)(v1 + 56) = 5;
    result = ((int (__fastcall *)(uint))dword_21EA714[521])(*(uint *)(v1 + 72));
    *(uint *)(v1 + 76) = result;
    return result;
  }
  if ( !((int (*)(void))dword_21EA714[132])() )
  {
    *(uint *)(v1 + 252) = 1;
    *(uint *)(v1 + 56) = 5;
    result = ((int (__fastcall *)(uint))dword_21EA714[521])(*(uint *)(v1 + 72));
    *(uint *)(v1 + 76) = result;
    return result;
  }
  if ( *(uint *)(v1 + 308) )
    ((void (__fastcall *)(uint, int))dword_21EA714[148])(*(uint *)(v1 + 72), 125);
  v8 = 0;
  v9 = 0;
  BYTE1(v8) = 2;
  if ( *(uint *)(v1 + 348) )
    HIWORD(v8) = (uchar)(*(ushort *)(v1 + 352) >> 8) | (*(ushort *)(v1 + 352) << 8) & 0xFF00;
  else
    HIWORD(v8) = dword_2229E20[2] ? BYTE1(dword_2229E20[1]) | (LOWORD(dword_2229E20[1]) << 8) & 0xFF00 : (uchar)(*(ushort *)(v1 + 32) >> 8) | (*(ushort *)(v1 + 32) << 8) & 0xFF00;
  v9 = *(uint *)(v1 + 28);
  if ( ((int (__fastcall *)(uint, int *, int))dword_21EA714[409])(*(uint *)(v1 + 72), &v8, 8) != -1 )
    goto LABEL_28;
  result = ((int (__fastcall *)(uint))dword_21EA714[521])(*(uint *)(v1 + 72));
  v4 = result == -6;
  if ( result != -6 )
    v4 = result == -26;
  if ( !v4 )
    v4 = result == -76;
  if ( v4 )
  {
LABEL_28:
    v5 = ((int (__fastcall *)(uint, uint, int *, int *))dword_21EA714[216])(*(uint *)(v1 + 72), 0, &v7, &v6) > 0;
    if ( v5 == -1 || v6 )
    {
      *(uint *)(v1 + 252) = 1;
      result = 6;
      *(uint *)(v1 + 56) = 6;
      if ( !v5 )
      {
        result = ((int (__fastcall *)(uint))dword_21EA714[521])(*(uint *)(v1 + 72));
        *(uint *)(v1 + 76) = result;
      }
    }
    else
    {
      result = v7;
      if ( v7 )
      {
        *(uint *)(v1 + 16) = 2;
        result = Function_2220754(v1, 0, 0);
      }
    }
  }
  else
  {
    *(uint *)(v1 + 252) = 1;
    *(uint *)(v1 + 56) = 6;
    *(uint *)(v1 + 76) = result;
  }
  return result;
}

//----- (02222CC4) --------------------------------------------------------
int __fastcall Function_2222cc4(int a1, int a2, int a3, int a4)
{
  uint *v4;
  int result;
  int v6;
  char v7;
  int v8;

  v8 = a4;
  v4 = (uint *)a1;
  if ( !*(uint *)(a1 + 360) )
  {
    if ( Function_20d8e28(*(uchar **)(a1 + 20), "https://", 8) )
    {
      v4[4] = 3;
      result = Function_2220754((int)v4, 0, 0);
    }
    else
    {
      v4[63] = 1;
      result = 17;
      v4[14] = 17;
    }
    return result;
  }
  if ( *(uint *)(a1 + 368) )
  {
    *(uint *)(a1 + 16) = 3;
    return Function_2220754(a1, 0, 0);
  }
  if ( !*(uint *)(a1 + 364) && (*(int (**)(void))(a1 + 372))() == 3 )
    return Function_20d407c((int)"0", (int)"ghttpProcess.c", (int)"ghiDoSecuringSession");
  if ( v4[24] >= v4[23] )
  {
LABEL_14:
    v6 = 1024;
    return Function_222097c(v4, &v7, &v6, 1024);
  }
  result = Function_2220548(v4);
  if ( result )
  {
    result = v4[23];
    if ( v4[24] >= result )
    {
      Function_2220504(v4 + 20);
      goto LABEL_14;
    }
  }
  return result;
}

//----- (02222E24) --------------------------------------------------------
int __fastcall Function_2222e24(uint *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  bool v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uchar *v13;
  int v14;
  int v15;
  int v16;
  int result;
  int v18;
  char v19;
  int v20;

  v20 = a4;
  v4 = (int)a1;
  if ( !a1[23] )
  {
    if ( !a1[79] )
      a1[3];
    Function_2220130();
    v5 = *(uint *)(v4 + 348);
    v6 = v5 == 0;
    if ( !v5 )
      v6 = dword_2229E20[2] == 0;
    if ( v6 )
      v8 = *(uint *)(v4 + 36);
    else
      v7 = *(uint *)(v4 + 20);
    Function_2220130();
    Function_2220130();
    if ( *(ushort *)(v4 + 32) == 80 )
    {
      v9 = *(uint *)(v4 + 24);
      Function_22203ec();
    }
    else
    {
      Function_2220130();
      v11 = *(uint *)(v4 + 24);
      Function_2220130();
      Function_222046c(v4 + 80);
      v12 = *(ushort *)(v4 + 32);
      Function_22204cc();
      Function_2220130();
    }
    v13 = *(uchar **)(v4 + 40);
    if ( !v13 || !Function_20d90b0(v13, "User-Agent", v10) )
      Function_22203ec();
    Function_22203ec();
    if ( *(uint *)(v4 + 316) )
    {
      v14 = *(uint *)(v4 + 332);
      Function_20d7510((int)&v19, "%d");
      Function_22203ec();
      Function_2221924(v4);
      Function_22203ec();
    }
    if ( *(uint *)(v4 + 40) )
      Function_2220130();
    Function_2220130();
    if ( v4 + 80 != v4 + 80 )
    {
      v15 = *(uint *)(v4 + 84);
      v16 = *(uint *)(v4 + 92);
      Function_2220130();
    }
  }
  result = Function_2220548((uint *)v4);
  if ( result )
  {
    result = *(uint *)(v4 + 92);
    if ( *(uint *)(v4 + 96) >= result )
    {
      Function_2220504((uint *)(v4 + 80));
      if ( *(uint *)(v4 + 316) )
        v18 = 4;
      else
        v18 = 5;
      *(uint *)(v4 + 16) = v18;
      result = Function_2220754(v4, 0, 0);
    }
  }
  return result;
}

//----- (02223098) --------------------------------------------------------
uint *__fastcall Function_2223098(uint *a1)
{
  uint *v1;
  uint *v2;
  int v3;
  int v4;
  bool v5;
  uint *result;

  v1 = a1;
  v2 = (uint *)a1[82];
  v3 = Function_2222578(a1);
  if ( v3 )
  {
    result = (uint *)v1[82];
    if ( v2 != result )
      result = (uint *)Function_22207d0(v1);
    if ( v3 == 1 )
    {
      Function_2221edc((int)v1);
      v1[4] = 5;
      result = (uint *)Function_2220754((int)v1, 0, 0);
    }
  }
  else
  {
    v4 = v1[63];
    v5 = v4 == 0;
    if ( v4 )
      v5 = v1[14] == 0;
    if ( v5 )
      Function_20d407c((int)"connection->completed && connection->result", (int)"ghttpProcess.c", (int)"ghiDoPosting");
    result = Function_2221edc((int)v1);
  }
  return result;
}

//----- (02223130) --------------------------------------------------------
int __fastcall Function_2223130(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int result;
  int v6;
  int v7;

  v7 = a4;
  v4 = a1;
  if ( ((int (__fastcall *)(uint, int *))dword_21EA714[216])(a1[18], &v6) == -1 )
  {
    v4[63] = 1;
    v4[14] = 5;
    result = ((int (__fastcall *)(uint))dword_21EA714[521])(v4[18]);
    v4[19] = result;
  }
  else
  {
    result = v6;
    if ( v6 )
    {
      v4[4] = 6;
      result = Function_2220754((int)v4, 0, 0);
    }
  }
  return result;
}

//----- (022231B0) --------------------------------------------------------
int __fastcall Function_22231b0(uint *a1)
{
  uint *v1;
  int v2;
  int i;
  int v4;
  int v5;
  int v6;
  bool v7;
  uchar v8;
  int result;
  int v10;
  int v11;
  int v12;
  int v13;

  v1 = a1;
  if ( !a1 )
    Function_20d407c((int)"connection", (int)"ghttpProcess.c", (int)"ghiParseStatus");
  if ( v1[32] <= 0 )
    Function_20d407c((int)"connection->recvBuffer.len > 0", (int)"ghttpProcess.c", (int)"ghiParseStatus");
  Function_20d8a08(v1[30], "HTTP/%d.%d %d%n", &v13, &v12, &v11, &v10);
  for ( i = v10; ; v10 = i )
  {
    v4 = *(char *)(v1[30] + i);
    if ( !*(uchar *)(v1[30] + i) )
      break;
    v5 = 1;
    if ( v4 >= 0 && v4 < 128 )
      v5 = 0;
    v6 = v5 ? 0 : *((ushort *)Unknown_20fe864 + v4) & 0x100;
    if ( !v6 )
      break;
    ++i;
  }
  if ( v2 != 3 )
    goto LABEL_24;
  v8 = __OFSUB__(v13, 1);
  v7 = v13 - 1 < 0;
  if ( v13 >= 1 )
  {
    v2 = v11;
    v8 = __OFSUB__(v11, 100);
    v7 = v11 - 100 < 0;
  }
  if ( v7 ^ v8 || v2 >= 600 )
  {
LABEL_24:
    v1[63] = 1;
    v1[14] = 7;
    result = 0;
  }
  else
  {
    v1[57] = v13;
    result = 1;
    v1[58] = v12;
    v1[59] = v11;
    v1[60] = v10;
  }
  return result;
}

//----- (022232FC) --------------------------------------------------------
uchar *__fastcall Function_22232fc(uint *a1)
{
  int v1;
  uchar *result;
  int v3;
  uchar *v4;
  bool v5;
  int v6;
  int v7;
  char v8;

  v1 = (int)a1;
  v7 = 1024;
  result = (uchar *)Function_222097c(a1, &v8, &v7, 1024);
  v4 = result;
  if ( result != (uchar *)3 )
  {
    v5 = result == (uchar *)1;
    if ( result == (uchar *)1 )
    {
      result = *(uchar **)(v1 + 128);
      v5 = *(uint *)(v1 + 132) == (uint)result;
    }
    if ( !v5 )
    {
      if ( v4 || (result = (uchar *)Function_2220130()) != 0 )
      {
        result = Function_20d90b0(*(uchar **)(v1 + 120), "\r\n", v3);
        if ( result )
        {
          *result = 0;
          v6 = (int)&result[-*(uint *)(v1 + 120)];
          *(uint *)(v1 + 248) = v6 + 1;
          result = (uchar *)Function_22231b0((uint *)v1);
          if ( result )
          {
            *(uint *)(v1 + 132) = v6 + 2;
            *(uint *)(v1 + 16) = 7;
            result = (uchar *)Function_2220754(v1, 0, 0);
          }
        }
        else if ( v4 == (uchar *)2 )
        {
          *(uint *)(v1 + 252) = 1;
          *(uint *)(v1 + 56) = 7;
          result = (uchar *)((int (__fastcall *)(uint))dword_21EA714[521])(*(uint *)(v1 + 72));
          *(uint *)(v1 + 76) = result;
        }
      }
    }
  }
  return result;
}

//----- (02223424) --------------------------------------------------------
int __fastcall Function_2223424(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v3 = a1;
  v4 = 0;
  v5 = a1[64] + a3;
  a1[64] = v5;
  v6 = 0;
  if ( v5 == a1[65] || a1[76] )
    a1[63] = 1;
  v7 = a1[3];
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      if ( a3 )
      {
        v3[63] = 1;
        v3[14] = 13;
        return 0;
      }
      v4 = a2;
      v6 = 0;
    }
    else if ( v7 == 2 )
    {
      v4 = a2;
      v6 = a3;
    }
  }
  else
  {
    if ( !Function_2220130() )
      return 0;
    v4 = v3[48];
    v6 = v3[50];
  }
  Function_2220754((int)v3, v4, v6);
  return 1;
}

//----- (022234E4) --------------------------------------------------------
int __fastcall Function_22234e4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int result;
  int v7;
  int v8;

  v8 = a4;
  v4 = a1;
  if ( !*(uint *)(a1 + 288) )
    Function_20d407c((int)"len", (int)"ghttpProcess.c", (int)"ghiParseChunkSize");
  Function_20d8a08(v4 + 276, "%x", &v7);
  if ( v5 == 1 )
    result = v7;
  else
    result = -1;
  return result;
}

//----- (02223548) --------------------------------------------------------
int __fastcall Function_2223548(int result, char *a2, int a3)
{
  int v3;
  char *v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v3 = result;
  v4 = a2;
  v5 = a3;
  if ( !result )
    result = Function_20d407c((int)"connection", (int)"ghttpProcess.c", (int)"ghiAppendToChunkHeaderBuffer");
  if ( !v4 )
    result = Function_20d407c((int)"data", (int)"ghttpProcess.c", (int)"ghiAppendToChunkHeaderBuffer");
  if ( v5 < 0 )
    result = Function_20d407c((int)"len >= 0", (int)"ghttpProcess.c", (int)"ghiAppendToChunkHeaderBuffer");
  if ( v5 )
  {
    v6 = *(uint *)(v3 + 288);
    if ( v6 < 10 )
    {
      v7 = 10 - v6;
      if ( 10 - v6 >= v5 )
        v7 = v5;
      memcpy((uchar *)(v3 + 276 + v6), v4, v7);
      v8 = *(uint *)(v3 + 288) + v7;
      *(uint *)(v3 + 288) = v8;
      result = v3 + v8;
      *(uchar *)(result + 276) = 0;
    }
  }
  return result;
}

//----- (02223614) --------------------------------------------------------
int __fastcall Function_2223614(int a1, char *a2, int a3)
{
  int v3;
  char *v4;
  int v5;
  int v6;
  char *v7;
  int v8;
  int v9;
  int v10;
  int result;
  int v12;
  bool v13;
  int v14;
  char *v15;
  int v16;
  int v17;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( !a1 )
    Function_20d407c((int)"connection", (int)"ghttpProcess.c", (int)"ghiProcessIncomingFileData");
  if ( !v4 )
    Function_20d407c((int)"data", (int)"ghttpProcess.c", (int)"ghiProcessIncomingFileData");
  if ( v5 <= 0 )
    Function_20d407c((int)"len > 0", (int)"ghttpProcess.c", (int)"ghiProcessIncomingFileData");
  if ( !*(uint *)(v3 + 272) )
    return Function_2223424((uint *)v3, (int)v4, v5);
  if ( v5 <= 0 )
    return 1;
  while ( 1 )
  {
    v6 = *(uint *)(v3 + 296);
    if ( !v6 )
    {
      v7 = strchr(v4, 10);
      if ( !v7 )
      {
        Function_2223548(v3, v4, v5);
        return 1;
      }
      Function_2223548(v3, v4, v7 - v4);
      v8 = v7 + 1 - v4;
      v5 -= v8;
      v4 = v7 + 1;
      v10 = Function_22234e4(v3, (int)(v7 + 1), v8, v9);
      *(uint *)(v3 + 292) = v10;
      if ( v10 == -1 )
      {
        *(uint *)(v3 + 252) = 1;
        *(uint *)(v3 + 56) = 7;
        return 0;
      }
      if ( v10 )
        *(uint *)(v3 + 296) = 1;
      else
        *(uint *)(v3 + 296) = 3;
      goto LABEL_36;
    }
    if ( v6 == 1 )
    {
      v12 = *(uint *)(v3 + 292);
      if ( v12 >= v5 )
        v12 = v5;
      if ( !Function_2223424((uint *)v3, (int)v4, v12) )
        return 0;
      v4 += v12;
      v14 = *(uint *)(v3 + 292) - v12;
      v13 = *(uint *)(v3 + 292) == v12;
      *(uint *)(v3 + 292) = v14;
      if ( !v14 )
        v14 = 2;
      v5 -= v12;
      if ( v13 )
        *(uint *)(v3 + 296) = v14;
      goto LABEL_36;
    }
    if ( v6 != 2 )
      break;
    v15 = strchr(v4, 10);
    if ( !v15 )
      return 1;
    *(uchar *)(v3 + 276) = 0;
    *(uint *)(v3 + 288) = 0;
    v16 = (int)(v15 + 1);
    v17 = v16 - (uint)v4;
    *(uint *)(v3 + 292) = 0;
    v4 = (char *)v16;
    *(uint *)(v3 + 296) = 0;
    v5 -= v17;
LABEL_36:
    if ( v5 <= 0 )
      return 1;
  }
  if ( v6 == 3 )
  {
    result = 1;
    *(uint *)(v3 + 252) = 1;
  }
  else
  {
    Function_20d407c((int)"0", (int)"ghttpProcess.c", (int)"ghiProcessIncomingFileData");
    result = 0;
  }
  return result;
}

//----- (02223838) --------------------------------------------------------
int __fastcall Function_2223838(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  bool v9;
  int v10;
  int v11;
  uchar *v12;
  int v13;
  int v14;
  int v15;
  char *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  uchar *v21;
  char *i;
  int v23;
  int v24;
  char *j;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  uchar *v35;
  const char *v36;
  char *v37;
  int v38;
  char v39;
  char v40;
  char v41;
  int v42;
  char *v43;
  int v44;
  int v45;
  int v46;
  bool v47;
  int v48;
  int v49;
  BOOL v50;
  uchar *v51;
  int v52;
  char v53;
  int v54;

  v54 = a4;
  v4 = a1;
  v51 = (uchar *)((int (__fastcall *)(int))dword_21D776C[69])(4096);
  if ( !v51 )
  {
    result = 1;
    *(uint *)(v4 + 252) = 1;
    *(uint *)(v4 + 56) = 1;
    return result;
  }
  v52 = 4096;
  v6 = Function_222097c((uint *)v4, v51, &v52, 4096);
  v8 = v6;
  if ( v6 != 3 )
  {
    v9 = v6 == 1;
    if ( v6 == 1 )
      v9 = *(uint *)(v4 + 132) == *(uint *)(v4 + 128);
    if ( !v9 && (v6 || Function_2220130()) )
    {
      v10 = *(uint *)(v4 + 132);
      v11 = *(uint *)(v4 + 120);
      *(uint *)(v4 + 244) = v10;
      v12 = Function_20d90b0((uchar *)(v11 + v10), "\r\n\r\n", v7);
      if ( !v12 )
        v12 = Function_20d90b0((uchar *)(v11 + v10), "\n\n", v13);
      if ( !v12 )
      {
        if ( v8 == 2 )
        {
          *(uint *)(v4 + 252) = 1;
          *(uint *)(v4 + 56) = 7;
          *(uint *)(v4 + 76) = ((int (__fastcall *)(uint))dword_21EA714[521])(*(uint *)(v4 + 72));
        }
        return ((int (__fastcall *)(uchar *))dword_21D788C[9])(v51);
      }
      v12[2] = 0;
      v14 = *(uint *)(v4 + 120);
      v15 = *(uint *)(v4 + 128);
      *(uint *)(v4 + 128) = &v12[-v14 + 2];
      v16 = (char *)(v12 + 4);
      v17 = (int)&v12[-v14 + 4];
      v18 = (int)&v12[-*(uint *)(v4 + 120) + 2];
      *(uint *)(v4 + 248) = v18;
      *(uint *)(v4 + 132) = v18;
      v19 = *(uint *)(v4 + 236) / 100;
      v20 = v15 - v17;
      if ( v19 == 1 )
      {
        if ( v15 == v17 )
        {
          Function_2220504((uint *)(v4 + 116));
        }
        else
        {
          Function_20d50d8(*(char **)(v4 + 120), v16, v20 + 1);
          *(uint *)(v4 + 128) = v20;
          *(uint *)(v4 + 132) = 0;
        }
        *(uint *)(v4 + 16) = 6;
        Function_2220754(v4, 0, 0);
        return ((int (__fastcall *)(uchar *))dword_21D788C[9])(v51);
      }
      if ( v19 == 3 )
      {
        if ( *(uint *)(v4 + 268) > 10 )
        {
          *(uint *)(v4 + 252) = 1;
          *(uint *)(v4 + 56) = 11;
          return ((int (__fastcall *)(uint))dword_21D788C[9])(v51);
        }
        v21 = Function_20d90b0((uchar *)(v11 + v10), "Location:", v17);
        if ( v21 )
        {
          for ( i = (char *)(v21 + 9); ; ++i )
          {
            v23 = *i;
            if ( v23 >= 0 && v23 < 128 )
              v24 = *((ushort *)Unknown_20fe864 + v23) & 0x100;
            else
              v24 = 0;
            if ( !v24 )
              break;
          }
          for ( j = i; ; ++j )
          {
            v26 = *j;
            if ( !*j )
              break;
            v27 = v26 >= 0 && v26 < 128 ? *((ushort *)Unknown_20fe864 + v26) & 0x100 : 0;
            if ( v27 )
              break;
          }
          *j = 0;
          if ( *i == 47 )
          {
            v28 = strlen(*(char **)(v4 + 24));
            v29 = strlen(i);
            v30 = ((int (__fastcall *)(int))dword_21D776C[69])(v28 + 14 + v29);
            *(uint *)(v4 + 264) = v30;
            if ( !v30 )
            {
              *(uint *)(v4 + 252) = 1;
              *(uint *)(v4 + 56) = 1;
            }
            v31 = *(ushort *)(v4 + 32);
            v32 = *(uint *)(v4 + 24);
            Function_20d7510(*(uint *)(v4 + 264), "http://%s:%d%s");
          }
          else
          {
            v33 = ((int (__fastcall *)(char *, int *, uint))dword_21EA714[102])(i, Unknown_20fe864, 0);
            *(uint *)(v4 + 264) = v33;
            if ( !v33 )
            {
              *(uint *)(v4 + 252) = 1;
              *(uint *)(v4 + 56) = 1;
            }
          }
          return ((int (__fastcall *)(uint))dword_21D788C[9])(v51);
        }
      }
      v35 = Function_20d90b0((uchar *)(v11 + v10), "Content-Length:", v17);
      if ( v35 )
      {
        v36 = "2147483647";
        v37 = &v53;
        v38 = 5;
        do
        {
          v39 = *v36;
          v40 = v36[1];
          v36 += 2;
          *v37 = v39;
          v37[1] = v40;
          v37 += 2;
          --v38;
        }
        while ( v38 );
        v41 = *v36;
        v42 = (int)(v35 + 16);
        v43 = (char *)(v35 + 16);
        *v37 = v41;
        v44 = strlen(&v53);
        while ( 1 )
        {
          v47 = v43 == 0;
          if ( v43 )
          {
            v45 = *v43;
            v47 = v45 == 0;
          }
          if ( v47 || v45 == 10 || v45 == 13 || v45 == 32 )
            break;
          ++v43;
        }
        v48 = (int)&v43[-v42];
        if ( (int)&v43[-v42] > v44 )
        {
          *(uint *)(v4 + 252) = 1;
          *(uint *)(v4 + 56) = 16;
          return ((int (__fastcall *)(uint))dword_21D788C[9])(v51);
        }
        if ( v44 == v48 && Function_20d8e28(v35 + 16, (uchar *)&v53, v48) >= 0 )
        {
          *(uint *)(v4 + 252) = 1;
          *(uint *)(v4 + 56) = 16;
          return ((int (__fastcall *)(uint))dword_21D788C[9])(v51);
        }
        Function_20dae0c((int)(v35 + 16), v45, v48, v46);
        *(uint *)(v4 + 260) = v49;
      }
      v50 = Function_20d90b0((uchar *)(v11 + v10), "Transfer-Encoding: chunked", v34) != 0;
      *(uint *)(v4 + 272) = v50;
      if ( v50 )
      {
        *(uchar *)(v4 + 276) = 0;
        *(uint *)(v4 + 288) = 0;
        *(uint *)(v4 + 292) = 0;
        *(uint *)(v4 + 296) = 0;
      }
      if ( (uint)(*(uint *)(v4 + 12) - 3) > 1 )
      {
        *(uint *)(v4 + 16) = 8;
        if ( !v35 || *(uint *)(v4 + 260) )
        {
          if ( v20 > 0 )
            Function_2223614(v4, v16, v20);
        }
        else
        {
          *(uint *)(v4 + 252) = 1;
        }
      }
      else
      {
        *(uint *)(v4 + 252) = 1;
      }
      return ((int (__fastcall *)(uint))dword_21D788C[9])(v51);
    }
  }
  return ((int (__fastcall *)(uint))dword_21D788C[9])(v51);
}

//----- (02223CA8) --------------------------------------------------------
int __fastcall Function_2223ca8(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  uint v6;
  int v7;
  char *v8;
  int result;
  int v10;
  bool v11;
  int v12;
  int v13;

  v13 = a4;
  v4 = a1;
  v5 = ((int (__cdecl *)(uint *))dword_21EA714[75])(a1);
  v6 = 0;
  v8 = (char *)((int (__fastcall *)(int))dword_21D776C[69])(0x2000);
  if ( v8 )
  {
    while ( !v4[63] && v6 < v4[86] )
    {
      v13 = 0x2000;
      v10 = Function_222097c(v4, v8, &v13, v7);
      v11 = v10 == 3;
      if ( v10 != 3 )
        v11 = v10 == 1;
      if ( v11 )
        break;
      if ( v10 == 2 )
      {
        v4[63] = 1;
        v12 = v4[65];
        if ( v12 > 0 && v4[64] < v12 )
          v4[14] = 15;
        break;
      }
      if ( !Function_2223614((int)v4, v8, v13) )
        break;
      v6 = ((int (*)(void))dword_21EA714[75])() - v5;
    }
    result = ((int (__fastcall *)(char *))dword_21D788C[9])(v8);
  }
  else
  {
    result = 1;
    v4[63] = 1;
    v4[14] = 1;
  }
  return result;
}

//----- (02223D7C) --------------------------------------------------------
int Function_2223d7c()
{
  int v0;
  int result;

  v0 = 0;
  do
  {
    result = dword_2229E20[v0 + 22];
    if ( result )
    {
      result = ((int (*)(void))dword_2229E20[20])();
      dword_2229E20[v0 + 22] = 0;
    }
    ++v0;
  }
  while ( v0 < 3 );
  return result;
}

//----- (02223DC0) --------------------------------------------------------
int __fastcall Function_2223dc0(int a1, uchar *a2)
{
  uchar *v2;
  int v3;
  int v5;
  int v6;

  v2 = a2;
  v3 = a1;
  if ( *a2 )
  {
    if ( Function_2225670(a2) > 10 )
    {
      dword_2229E20[19] = 7;
      return 0;
    }
    if ( Function_2225670(v2) > 10 )
    {
      dword_2229E20[19] = 7;
      return 0;
    }
    v5 = Function_2223fac();
    v6 = ((int (__fastcall *)(int, int))dword_2229E20[15])(v5 + 1, 4);
    dword_2229E20[v3 + 22] = v6;
    if ( !v6 )
    {
      dword_2229E20[19] = 1;
      return 0;
    }
    *(uchar *)(dword_2229E20[v3 + 22] + Function_2223fc8()) = 0;
  }
  return 1;
}

//----- (02223E90) --------------------------------------------------------
int __fastcall Function_60_2223e90(uchar *a1, uchar *a2, uchar *a3)
{
  uchar *v3;
  uchar *v4;
  uchar *v5;
  int v6;
  int result;
  int v8;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_2225534();
  Function_2223d7c();
  if ( Function_2223dc0(0, v3) && Function_2223dc0(1, v4) && (v6 = Function_2223dc0(2, v5)) != 0 )
  {
    Function_2225548(v6);
    result = 1;
  }
  else
  {
    v8 = Function_2223d7c();
    Function_2225548(v8);
    result = 0;
  }
  return result;
}

//----- (02223F00) --------------------------------------------------------
int __fastcall Function_2223f00(uchar *a1, char *a2, int a3)
{
  int v3;
  int i;
  char v5;

  v3 = 0;
  for ( i = 0; i < a3; ++i )
  {
    v5 = *a2;
    if ( *a2 )
    {
      ++v3;
      ++a2;
      *a1++ = v5;
    }
    else
    {
      *a1++ = 0;
    }
  }
  return v3;
}

//----- (02223F48) --------------------------------------------------------
int __fastcall Function_2223f48(uint a1)
{
  if ( a1 >= 0x41 && a1 <= 0x5A )
    return a1 - 65;
  if ( a1 >= 0x61 && a1 <= 0x7A )
    return a1 - 71;
  if ( a1 >= 0x30 && a1 <= 0x39 )
    return a1 + 4;
  if ( a1 == 46 )
    return 62;
  if ( a1 == 45 )
    return 63;
  return -1;
}

//----- (02223FA0) --------------------------------------------------------
int __fastcall Function_2223fa0(int a1)
{
  return 3 * (a1 >> 2);
}

//----- (02223FAC) --------------------------------------------------------
int __fastcall Function_2223fac(int a1)
{
  return 4 * ((a1 + 2) / 3);
}

//----- (02223FC8) --------------------------------------------------------
int __fastcall Function_2223fc8(uchar *a1, char *a2, int a3, int a4)
{
  int v4;
  char *v5;
  uchar *v6;
  int v7;
  int i;
  char v9;
  int v10;
  char v11;
  int v12;
  int v13;
  int result;
  int v15;

  v15 = a4;
  v4 = a3;
  v5 = a2;
  v6 = a1;
  if ( a3 > 3 )
    a3 = 3;
  v7 = 0;
  for ( i = Function_2223f00(&v15, a2, a3); i > 0; i = Function_2223f00(&v15, v5, v13) )
  {
    if ( v4 < 3 )
      BYTE2(v15) = 0;
    if ( v4 < 2 )
      BYTE1(v15) = 0;
    v9 = BYTE2(v15);
    v10 = ((int)BYTE2(v15) >> 6) | 4 * BYTE1(v15);
    v11 = aAbcdefghijklmn_0[((uchar)((int)BYTE1(v15) >> 4) | (uchar)(16 * v15)) & 0x3F];
    *v6 = aAbcdefghijklmn_0[(uchar)((int)(uchar)v15 >> 2)];
    v6[1] = v11;
    if ( i > 1 )
      v11 = aAbcdefghijklmn_0[v10 & 0x3F];
    v12 = v9 & 0x3F;
    v5 += i;
    if ( i <= 1 )
      v11 = 42;
    if ( i > 2 )
      LOBYTE(v12) = aAbcdefghijklmn_0[v12];
    v6[2] = v11;
    v7 += 4;
    if ( i <= 2 )
      LOBYTE(v12) = 42;
    v6[3] = v12;
    v6 += 4;
    v4 -= i;
    if ( !v4 )
      break;
    v13 = v4 <= 3 ? v4 : 3;
  }
  result = v7;
  *v6 = 0;
  return result;
}

//----- (022240C0) --------------------------------------------------------
int __fastcall Function_22240c0(uchar *a1, char *a2, int a3, int a4)
{
  uchar *v4;
  int v5;
  int v6;
  char *v7;
  int v8;
  int v9;
  int v10;
  char *v11;
  char v12;
  char v14;
  char v15;
  char v16;
  uchar v17;
  uchar v18;
  uchar v19;
  uchar v20;
  int v21;

  v21 = a4;
  v4 = a1;
  v5 = a3;
  v6 = 0;
  v7 = a2;
  v8 = Function_2223f00(&v17, a2, 4);
  v9 = 0;
  while ( v8 > 0 && v9 >= 0 )
  {
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v9 = Function_2223f48(v17);
    if ( v9 >= 0 )
    {
      v14 = 4 * v9;
      v9 = Function_2223f48(v18);
      if ( v9 >= 0 )
      {
        v14 |= v9 >> 4;
        v15 = 16 * v9;
        v9 = Function_2223f48(v19);
        if ( v9 >= 0 )
        {
          v16 = (uchar)v9 << 6;
          v15 |= v9 >> 2;
          v9 = Function_2223f48(v20);
          if ( v9 >= 0 )
            v16 |= v9;
        }
      }
    }
    v10 = 0;
    if ( v8 - 1 > 0 )
    {
      v11 = &v14;
      do
      {
        v12 = *v11++;
        ++v10;
        *v4++ = v12;
      }
      while ( v10 < v8 - 1 );
    }
    v5 -= 4;
    v7 += v8;
    v6 += v8 - 1;
    if ( v5 <= 0 )
      break;
    v8 = Function_2223f00(&v17, v7, 4);
  }
  return v6;
}

//----- (022241E8) --------------------------------------------------------
int __fastcall Function_22241e8(int a1)
{
  int v1;
  int v2;

  v1 = Function_2225670(a1);
  v2 = ((int (__fastcall *)(int, int))dword_2229E20[15])(v1 + 1, 4);
  if ( v2 )
  {
    Function_222569c();
    *(uchar *)(v2 + v1) = 0;
  }
  return v2;
}

//----- (02224234) --------------------------------------------------------
int __fastcall Function_60_2224234(int a1, int a2, int a3, int a4, char *a5, char *a6, int a7)
{
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int result;

  v7 = a1;
  v8 = a2;
  dword_2229E20[15] = a1;
  dword_2229E20[20] = a2;
  dword_2229E20[18] = a7;
  dword_2229E20[19] = 0;
  dword_2229E20[22] = 0;
  dword_2229E20[23] = 0;
  dword_2229E20[24] = 0;
  dword_2229E20[13] = 0;
  dword_2229E20[21] = -1;
  dword_2229E20[14] = 0;
  v9 = a3;
  v10 = a4;
  dword_2229E20[16] = 0;
  Function_2225610(&dword_2229E20[28]);
  Function_2224610(&dword_2229E20[46]);
  dword_2229E20[16] = Function_22241e8(v9);
  if ( dword_2229E20[16] && (dword_2229E20[14] = Function_22241e8(v10)) != 0 )
  {
    *((uchar *)&dword_2229E20[25] + Function_2223fc8(&dword_2229E20[25], a5, 4, v11)) = 0;
    *((uchar *)&dword_2229E20[39] + Function_2223fc8(&dword_2229E20[39], a6, 16, v12)) = 0;
    if ( Function_222555c() && Function_2225518() )
    {
      if ( Function_22257fc(v7, v8, 10) )
      {
        dword_2229E20[13] = Function_2224484(&dword_2229E20[33]);
        result = 1;
        dword_2229E20[17] = 1;
        return result;
      }
      Function_2225530();
    }
    ((void (__fastcall *)(int))dword_2229E20[20])(dword_2229E20[14]);
    ((void (__fastcall *)(int))dword_2229E20[20])(dword_2229E20[16]);
    dword_2229E20[19] = 8;
    result = 0;
  }
  else
  {
    if ( dword_2229E20[14] )
      ((void (*)(void))dword_2229E20[20])();
    if ( dword_2229E20[16] )
      ((void (*)(void))dword_2229E20[20])();
    dword_2229E20[19] = 1;
    result = 0;
  }
  return result;
}

//----- (022243DC) --------------------------------------------------------
int Function_22243dc()
{
  int v0;
  int v1;

  v0 = Function_2223d7c();
  v1 = Function_2225530(v0);
  Function_2225584(v1);
  ((void (__fastcall *)(int))dword_2229E20[20])(dword_2229E20[14]);
  ((void (__fastcall *)(int))dword_2229E20[20])(dword_2229E20[16]);
  return ((int (*)(void))dword_2229E20[12])();
}

//----- (02224420) --------------------------------------------------------
int __fastcall Function_60_2224420(int a1)
{
  dword_2229E20[17] = 0;
  dword_2229E20[12] = a1;
  return Function_22258c4(Function_22243dc);
}

//----- (02224448) --------------------------------------------------------
int Function_60_2224448()
{
  int result;

  if ( Function_2225588() )
  {
    Function_22255d0();
    result = 0;
  }
  else
  {
    Function_2225534();
    Function_2225548(&dword_2229E20[21]);
    result = Function_2226a9c(dword_2229E20[21]);
  }
  return result;
}

//----- (02224484) --------------------------------------------------------
int __fastcall Function_2224484(uchar *a1)
{
  const char *v1;
  char *v2;
  uchar *v3;
  int v4;
  char v5;
  char v6;
  int v7;
  bool v8;
  char v10;
  char v11;
  char v12;
  char v13;

  v1 = "00:0000000-00";
  v2 = &v10;
  v3 = a1;
  v4 = 6;
  do
  {
    v5 = *v1;
    v6 = v1[1];
    v1 += 2;
    *v2 = v5;
    v2[1] = v6;
    v2 += 2;
    --v4;
  }
  while ( v4 );
  *v2 = *v1;
  if ( !((int (__fastcall *)(int *))dword_21D7EAC[3])(&dword_2229E20[55]) )
    return 0;
  if ( dword_2229E20[55] < 0 || dword_2229E20[55] >= 10 )
  {
    if ( dword_2229E20[55] >= 10 && dword_2229E20[55] < 100 )
      Function_22256c0(&v10);
  }
  else
  {
    v11 = LOBYTE(dword_2229E20[55]) + 48;
  }
  v8 = dword_2229E20[55] == 4;
  if ( dword_2229E20[55] != 4 )
    v8 = dword_2229E20[55] == 8;
  if ( v8 )
  {
    if ( dword_2229E20[56] >= 0 && dword_2229E20[56] < 10 )
      v12 = LOBYTE(dword_2229E20[56]) + 48;
    Function_222569c(&v13, &dword_2229E20[57], 9);
  }
  Function_2223fc8(v3, &v10, 13, v7);
  return 1;
}

//----- (02224584) --------------------------------------------------------
int __fastcall Function_2224584(uchar *a1, uchar *a2)
{
  uchar *v2;
  uchar *v3;
  int v4;
  int v5;
  uint v6;
  int result;
  int v8;
  int v9;
  char v10;
  long long v11;

  v2 = a1;
  v3 = a2;
  Function_2225688(&v11, 20);
  Function_20a283c((uint)&v11, v4, v5, v6);
  result = 0;
  if ( v11 )
  {
    if ( Function_22256cc(&v10) >= 0 )
    {
      Function_2223fc8(v3, &v10, 13, v8);
      Function_2223fc8(v2, (char *)&dword_27FFE00[3], 4, v9);
      result = 1;
    }
    else
    {
      result = 0;
    }
  }
  return result;
}

//----- (02224610) --------------------------------------------------------
int __fastcall Function_2224610(uchar *a1)
{
  return OS_SNPrintf(a1, 33, "Nitro WiFi SDK/%d.%d");
}

//----- (02224630) --------------------------------------------------------
int __fastcall Function_2224630(int a1, int a2, uint *a3, int a4)
{
  int v4;
  uint *v5;
  int v6;
  int v7;
  BOOL v8;
  int v9;
  int v10;
  int v11;
  uchar *v12;
  int v13;
  int v14;
  char *v15;
  int v16;
  bool v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int result;
  int v24;
  int v25;
  void (__fastcall *v26)(int, int, int);
  char v27[4];
  int v28;
  int v29;
  int v30;

  v30 = a4;
  v5 = a3;
  v6 = a2;
  v26 = (void (__fastcall *)(int, int, int))a3[2];
  v7 = a3[1];
  v25 = a3[3];
  v24 = -1;
  if ( a1 )
  {
    if ( a1 == 6 )
    {
      v4 = 4;
    }
    else if ( a1 == 8 )
    {
      v4 = 6;
    }
    else
    {
      v4 = 3;
    }
  }
  else
  {
    a1 = Function_2226d88(a2, "HTTPSTATUSCODE", &v29);
    if ( a1 == 3 )
    {
      a1 = Function_22256b4(v29, 3);
      if ( a1 == 302 )
      {
        v8 = 0;
        a1 = Function_2226e8c(v6, &v28);
        v9 = a1;
        if ( a1 >= 0 )
        {
          v10 = 0;
          if ( a1 > 0 )
          {
            while ( 1 )
            {
              v11 = v10;
              v12 = (uchar *)(v28 + v10);
              while ( *v12 != 61 && v10 < v9 )
              {
                ++v12;
                ++v10;
              }
              v17 = v10 - v11 == 8;
              v13 = v10 + 1;
              if ( v17 )
                v8 = Function_222567c(v28 + v11, "returncd", 8) == 0;
              v14 = v13;
              v15 = (char *)(v28 + v13);
              while ( 1 )
              {
                v16 = *v15;
                v17 = v16 == 38;
                if ( v16 != 38 )
                  v17 = v16 == 13;
                if ( !v17 )
                  v17 = v16 == 0;
                if ( v17 || v13 >= v9 )
                  break;
                ++v15;
                ++v13;
              }
              v18 = v13 - v14;
              v10 = v13 + 1;
              if ( v8 )
                break;
              if ( v10 >= v9 )
                goto LABEL_30;
            }
            if ( v18 == 4 )
            {
              v19 = Function_22240c0(v27, (char *)(v28 + v14), 4, v14);
              v27[v19] = 0;
              v24 = Function_22256b4(v27, v19);
            }
          }
LABEL_30:
          a1 = v24;
          if ( v24 >= 0 )
            v4 = 5;
          else
            v4 = 3;
        }
        else
        {
          v4 = 3;
        }
      }
      else if ( a1 > 0 && a1 == 200 )
      {
        switch ( v7 )
        {
          case 1:
            a1 = Function_2225214(v6, v5);
            if ( a1 )
              v4 = 0;
            else
              v4 = 3;
            break;
          case 2:
            a1 = Function_2225294(v6, v5);
            if ( a1 )
              v4 = 0;
            else
              v4 = 3;
            break;
          case 3:
            a1 = Function_2225268(v6, v5);
            if ( a1 )
              v4 = 0;
            else
              v4 = 3;
            break;
        }
      }
      else
      {
        v4 = 3;
      }
    }
    else
    {
      v4 = 3;
    }
  }
  if ( v7 != 1 )
  {
    if ( v7 == 2 )
    {
      v20 = v5[8];
      if ( v20 )
        ((void (__fastcall *)(int))dword_2229E20[20])(v20);
      v21 = v5[7];
      if ( v21 )
        ((void (__fastcall *)(int))dword_2229E20[20])(v21);
      a1 = ((int (__fastcall *)(uint))dword_2229E20[20])(v5[6]);
    }
    else if ( v7 == 3 )
    {
      a1 = ((int (__fastcall *)(uint))dword_2229E20[20])(v5[4]);
    }
  }
  Function_2225534(a1);
  dword_2229E20[21] = -1;
  Function_2225548(&dword_2229E20[21]);
  Function_2226c04(v6);
  v22 = ((int (__fastcall *)(uint *))dword_2229E20[20])(v5);
  Function_22255d0(v22);
  if ( v4 )
    dword_2229E20[19] = v4;
  if ( v26 )
    v26(v7, v4, v24);
  result = v25;
  if ( v25 )
    result = Function_22255fc();
  return result;
}

//----- (02224960) --------------------------------------------------------
int __fastcall Function_2224960(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = Function_222691c(a2);
  Function_22255d0(v3);
  return ((int (__fastcall *)(int))dword_2229E20[20])(v2);
}

//----- (0222498C) --------------------------------------------------------
int __fastcall Function_222498c(int *a1, int *a2, int a3, int a4, int a5)
{
  int *v5;
  int *v6;
  int v7;
  int v8;
  int result;
  int v10;
  int v11;
  int v12;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  if ( Function_2224584(&dword_2229E20[70], &dword_2229E20[73]) )
  {
    v10 = ((int (__fastcall *)(int, int))dword_2229E20[15])(36, 4);
    if ( v10 )
    {
      *(uint *)(v10 + 8) = dword_2229E20[18];
      *(uint *)(v10 + 12) = 0;
      if ( Function_2225588() )
      {
        v11 = Function_22263b8(dword_2229E20[16], 1, v8, a5, Function_2224630, v10);
        v12 = v11;
        if ( v11 )
        {
          *v5 = v10;
          *v6 = v11;
          if ( Function_2225c10()
            && Function_2225b78(v12, "User-Agent", &dword_2229E20[46])
            && Function_2225b9c(v12, "gamecd", &dword_2229E20[25])
            && Function_2225b9c(v12, "rhgamecd", &dword_2229E20[70])
            && Function_2225b9c(v12, "passwd", &dword_2229E20[39])
            && Function_2225b9c(v12, "token", dword_2229E20[14])
            && Function_2225b9c(v12, "userid", &dword_2229E20[73])
            && Function_2225b9c(v12, "macadr", &dword_2229E20[28])
            && Function_2225b9c(v12, "action", v7)
            && (!dword_2229E20[22] || Function_2225b9c(v12, "attr1", dword_2229E20[22]))
            && (!dword_2229E20[23] || Function_2225b9c(v12, "attr2", dword_2229E20[23]))
            && (!dword_2229E20[24] || Function_2225b9c(v12, "attr3", dword_2229E20[24]))
            && (!dword_2229E20[13] || Function_2225b9c(v12, "apinfo", &dword_2229E20[33])) )
          {
            result = 1;
          }
          else
          {
            Function_2224960(v10, v12);
            dword_2229E20[19] = 1;
            result = 0;
          }
        }
        else
        {
          Function_22255d0(0);
          ((void (__fastcall *)(int))dword_2229E20[20])(v10);
          dword_2229E20[19] = 3;
          result = 0;
        }
      }
      else
      {
        ((void (__fastcall *)(int))dword_2229E20[20])(v10);
        dword_2229E20[19] = 2;
        result = 0;
      }
    }
    else
    {
      dword_2229E20[19] = 1;
      result = 0;
    }
  }
  else
  {
    dword_2229E20[19] = 8;
    result = 0;
  }
  return result;
}

//----- (02224CB8) --------------------------------------------------------
int __fastcall Function_2224cb8(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;

  v2 = a2;
  v3 = a1;
  Function_2225534(a1);
  v4 = Function_2226a10(v2);
  *v3 = v4;
  dword_2229E20[21] = v4;
  Function_2225548(v4);
  if ( *v3 >= 0 )
    return 1;
  Function_2224960((int)v3, v2);
  dword_2229E20[19] = 3;
  return 0;
}

//----- (02224D18) --------------------------------------------------------
BOOL __fastcall Function_60_2224d18(int a1, int a2, int a3, int a4)
{
  int v4;
  int v6;
  int *v7;
  int v8;

  v8 = a4;
  v4 = a1;
  if ( !Function_222498c((int *)&v7, &v6, (int)"Y291bnQ*", (int)&dword_2229E20[79], 128) )
    return 0;
  v7[1] = 1;
  v7[4] = v4;
  return Function_2224cb8(v7, v6) != 0;
}

//----- (02224D8C) --------------------------------------------------------
int __fastcall Function_60_2224d8c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int result;
  int v8;
  int v9;
  int v10;
  uchar *v11;
  int v12;
  uchar *v13;
  int v14;
  int v15;
  int v16;
  uchar *v17;
  int v18;
  uchar *v19;
  int v20;
  int *v21;
  char v22;

  v3 = a3;
  v4 = a3 << 8;
  if ( a3 << 8 < 128 )
    v4 = 128;
  v5 = a1;
  v6 = ((int (__fastcall *)(int, int))dword_2229E20[15])(v4, 4);
  if ( v6 )
  {
    v8 = Function_22256c0(&v22);
    v9 = v8;
    v10 = Function_2223fac(v8);
    v11 = (uchar *)((int (__fastcall *)(int, int))dword_2229E20[15])(v10 + 1, 4);
    v13 = v11;
    if ( v11 )
    {
      v11[Function_2223fc8(v11, &v22, v9, v12)] = 0;
      v14 = Function_22256c0(&v22);
      v15 = v14;
      v16 = Function_2223fac(v14);
      v17 = (uchar *)((int (__fastcall *)(int, int))dword_2229E20[15])(v16 + 1, 4);
      v19 = v17;
      if ( v17 )
      {
        v17[Function_2223fc8(v17, &v22, v15, v18)] = 0;
        if ( Function_222498c((int *)&v21, &v20, (int)"bGlzdA**", v6, v4) )
        {
          if ( Function_2225b9c(v20, "offset", v13) && Function_2225b9c(v20, "num", v19) )
          {
            v21[1] = 2;
            v21[4] = v5;
            v21[7] = (int)v13;
            v21[8] = (int)v19;
            v21[5] = v3;
            v21[6] = v6;
            if ( Function_2224cb8(v21, v20) )
            {
              result = 1;
            }
            else
            {
              ((void (__fastcall *)(uchar *))dword_2229E20[20])(v19);
              ((void (__fastcall *)(uchar *))dword_2229E20[20])(v13);
              ((void (__fastcall *)(int))dword_2229E20[20])(v6);
              result = 0;
            }
          }
          else
          {
            ((void (__fastcall *)(uchar *))dword_2229E20[20])(v19);
            ((void (__fastcall *)(uchar *))dword_2229E20[20])(v13);
            ((void (__fastcall *)(int))dword_2229E20[20])(v6);
            Function_2224960((int)v21, v20);
            dword_2229E20[19] = 1;
            result = 0;
          }
        }
        else
        {
          ((void (__fastcall *)(uchar *))dword_2229E20[20])(v19);
          ((void (__fastcall *)(uchar *))dword_2229E20[20])(v13);
          ((void (__fastcall *)(int))dword_2229E20[20])(v6);
          result = 0;
        }
      }
      else
      {
        ((void (__fastcall *)(uchar *))dword_2229E20[20])(v13);
        ((void (__fastcall *)(int))dword_2229E20[20])(v6);
        dword_2229E20[19] = 1;
        result = 0;
      }
    }
    else
    {
      ((void (__fastcall *)(int))dword_2229E20[20])(v6);
      dword_2229E20[19] = 1;
      result = 0;
    }
  }
  else
  {
    dword_2229E20[19] = 1;
    result = 0;
  }
  return result;
}

//----- (0222504C) --------------------------------------------------------
int __fastcall Function_60_222504c(int a1, int a2, uint a3, int a4)
{
  int v4;
  int v5;
  int result;
  int v7;
  int v8;
  int v9;
  uchar *v10;
  int v11;
  int v12;
  int *v13;
  int v14;

  v14 = a4;
  v4 = a1;
  v5 = a2;
  if ( a3 >= *(uint *)(a1 + 172) )
  {
    v7 = Function_2225670(a1);
    v8 = v7;
    if ( v7 <= 32 )
    {
      if ( v7 > 0 )
        v9 = Function_2223fac(v7);
      else
        v9 = 0;
      v10 = (uchar *)((int (__fastcall *)(int, int))dword_2229E20[15])(v9 + 1, 4);
      if ( v10 )
      {
        if ( Function_222498c((int *)&v13, &v12, (int)"Y29udGVudHM*", v5, *(uint *)(v4 + 172)) )
        {
          if ( v9 <= 0 || (v10[Function_2223fc8(v10, (char *)v4, v8, v11)] = 0, Function_2225b9c(v12, "contents", v10)) )
          {
            v13[1] = 3;
            v13[4] = (int)v10;
            v13[5] = *(uint *)(v4 + 172);
            if ( Function_2224cb8(v13, v12) )
            {
              result = 1;
            }
            else
            {
              ((void (__fastcall *)(uchar *))dword_2229E20[20])(v10);
              result = 0;
            }
          }
          else
          {
            Function_2224960((int)v13, v12);
            ((void (__fastcall *)(uchar *))dword_2229E20[20])(v10);
            dword_2229E20[19] = 1;
            result = 0;
          }
        }
        else
        {
          ((void (__fastcall *)(uchar *))dword_2229E20[20])(v10);
          result = 0;
        }
      }
      else
      {
        dword_2229E20[19] = 1;
        result = 0;
      }
    }
    else
    {
      dword_2229E20[19] = 7;
      result = 0;
    }
  }
  else
  {
    dword_2229E20[19] = 7;
    result = 0;
  }
  return result;
}

//----- (02225208) --------------------------------------------------------
int Function_60_2225208()
{
  return Function_2227184();
}

//----- (02225214) --------------------------------------------------------
BOOL __fastcall Function_2225214(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v7;
  int v8;

  v8 = a4;
  v4 = a2;
  v5 = Function_2226e8c(a1, &v7);
  if ( v5 < 0 )
    return 0;
  **(uint **)(v4 + 16) = Function_22256b4(v7, v5);
  return **(uint **)(v4 + 16) >= 0;
}

//----- (02225268) --------------------------------------------------------
BOOL __fastcall Function_2225268(int a1, int a2, int a3, int a4)
{
  char v5;
  int v6;

  v6 = a4;
  return Function_2226e8c(a1, &v5) == *(uint *)(a2 + 20);
}

//----- (02225294) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x2225408 for case 0"

//----- (022253F0) --------------------------------------------------------
void Function_22253f0()
{
  JUMPOUT(&loc_2225408);
}

//----- (022253F4) --------------------------------------------------------
void Function_22253f4()
{
  JUMPOUT(&loc_2225424);
}

//----- (022253F8) --------------------------------------------------------
void Function_22253f8()
{
  JUMPOUT(&loc_2225454);
}

//----- (022253FC) --------------------------------------------------------
void Function_22253fc()
{
  JUMPOUT(&loc_2225470);
}

//----- (02225400) --------------------------------------------------------
void Function_2225400()
{
  JUMPOUT(&loc_222548C);
}

//----- (02225404) --------------------------------------------------------
void __fastcall Function_2225404(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  if ( v5 - v6 <= 8 )
  {
    v8 = Function_22256b4(a4 + v6, v5 - v6);
    if ( v8 >= 0 )
    {
      *(uint *)(v7 + 172) = v8;
      if ( v5 + 1 < v4 )
        JUMPOUT(&loc_2225370);
      if ( v10 + 1 < *(uint *)(v9 + 20) )
        JUMPOUT(&loc_2225330);
    }
  }
  JUMPOUT(__CS__, v11);
}

//----- (02225518) --------------------------------------------------------
int Function_2225518()
{
  OS_InitMutex(&dword_2229E20[118]);
  return 1;
}

//----- (02225530) --------------------------------------------------------
void Function_2225530()
{
  ;
}

//----- (02225534) --------------------------------------------------------
uint Function_2225534()
{
  return OS_LockMutex(&dword_2229E20[118]);
}

//----- (02225548) --------------------------------------------------------
uint Function_2225548()
{
  return OS_UnlockMutex(&dword_2229E20[118]);
}

//----- (0222555C) --------------------------------------------------------
int Function_222555c()
{
  OS_InitMutex(&dword_2229E20[112]);
  dword_2229E20[111] = 0;
  return 1;
}

//----- (02225584) --------------------------------------------------------
void Function_2225584()
{
  ;
}

//----- (02225588) --------------------------------------------------------
BOOL Function_2225588()
{
  OS_LockMutex(&dword_2229E20[112]);
  if ( dword_2229E20[111] == 0 )
    dword_2229E20[111] = 1;
  OS_UnlockMutex(&dword_2229E20[112]);
  return dword_2229E20[111] == 0;
}

//----- (022255D0) --------------------------------------------------------
uint Function_22255d0()
{
  OS_LockMutex(&dword_2229E20[112]);
  dword_2229E20[111] = 0;
  return OS_UnlockMutex(&dword_2229E20[112]);
}

//----- (022255FC) --------------------------------------------------------
int __fastcall Function_22255fc(uint *a1)
{
  return OS_SendMessage(a1, 0, 0);
}

//----- (02225610) --------------------------------------------------------
int __fastcall Function_2225610(uchar *a1, int a2, int a3, uint a4)
{
  uchar *v4;
  int v5;
  char *v6;
  int v7;
  int v8;
  int v9;
  char v11;
  char v12;

  v4 = a1;
  OS_GetMacAddress((uint)&v11, a2, a3, a4);
  v5 = 0;
  v6 = &v11;
  v7 = 0;
  do
  {
    v8 = (uchar)*v6++;
    Function_22257a4(&v12 + v7, v8, 2);
    ++v5;
    v7 += 2;
  }
  while ( v5 < 6 );
  return Function_2223fc8(v4, &v12, 12, v9);
}

//----- (02225670) --------------------------------------------------------
int __fastcall Function_2225670(uchar *a1)
{
  return Function_20d33b4(a1);
}

//----- (0222567C) --------------------------------------------------------
int __fastcall Function_222567c(int a1, int a2, int a3)
{
  return Function_20d3408(a1, a2, a3);
}

//----- (02225688) --------------------------------------------------------
ushort *__fastcall Function_2225688(ushort *a1, uint a2)
{
  return MI_CpuFill8(a1, 0, a2);
}

//----- (0222569C) --------------------------------------------------------
int __fastcall Function_222569c(uint a1, int a2, uint a3)
{
  return MI_CpuCopy8(a2, a1, a3, a1);
}

//----- (022256B4) --------------------------------------------------------
int Function_22256b4()
{
  return Function_2228980();
}

//----- (022256C0) --------------------------------------------------------
int Function_22256c0()
{
  return Function_2228a18();
}

//----- (022256CC) --------------------------------------------------------
int __fastcall Function_22256cc(int a1, uint a2, uint a3, int a4)
{
  uint v4;
  uint v5;
  bool v6;
  int v7;
  int v8;
  int v9;
  int v11;
  int v12;
  uint v13;
  bool v14;
  uint v15;
  uint v16;
  ull v17;

  v4 = a3;
  v5 = a2;
  v6 = a3 >= 0x1634578;
  v7 = a1;
  v8 = a4;
  v9 = 0;
  if ( a3 == 23283064 )
    v6 = a2 >= 0x5D8A0000;
  if ( v6 )
    return -1;
  v11 = 0;
  v12 = 0;
  do
  {
    v13 = dword_2228CF4[2 * v11 + 1];
    v14 = v4 >= v13;
    v15 = dword_2228CF4[2 * v11];
    if ( v4 == v13 )
      v14 = v5 >= v15;
    if ( v14 )
    {
      ll_udiv();
      *(uchar *)(v7 + v9) = v16 + 48;
      v17 = __PAIR__(v4, v5) - __PAIR__(v13, v15) * v16;
      v4 = (__PAIR__(v4, v5) - __PAIR__(v13, v15) * v16) >> 32;
      v5 = v17;
      v12 = 1;
      ++v9;
    }
    else if ( v12 || 17 - v11 <= v8 )
    {
      *(uchar *)(v7 + v9++) = 48;
    }
    ++v11;
  }
  while ( v11 < 16 );
  *(uchar *)(v7 + v9) = v5 + 48;
  return v9 + 1;
}

//----- (022257A4) --------------------------------------------------------
int __fastcall Function_22257a4(int a1, uint a2, int a3)
{
  int v3;
  int i;
  uint v6;
  char v7;

  v3 = 0;
  if ( a3 > 8 )
    return -1;
  for ( i = 1; i <= a3; ++v3 )
  {
    v6 = (a2 >> 4 * (a3 - i)) & 0xF;
    if ( v6 >= 0xA )
      v7 = v6 + 87;
    else
      v7 = v6 + 48;
    ++i;
    *(uchar *)(a1 + v3) = v7;
  }
  return v3;
}

//----- (022257FC) --------------------------------------------------------
int __fastcall Function_22257fc(int a1, int a2, int a3)
{
  int v3;
  int result;
  int v5;

  dword_2229E20[126] = a1;
  dword_2229E20[127] = a2;
  dword_2229E20[125] = 0;
  dword_2229E20[131] = 0;
  dword_2229E20[132] = 0;
  dword_2229E20[128] = 0;
  v3 = a3;
  dword_2229E20[129] = 0;
  if ( Function_2225e1c() )
  {
    dword_2229E20[130] = ((int (__fastcall *)(int, int))dword_2229E20[126])(0x2000, 8);
    if ( dword_2229E20[130] )
    {
      if ( Function_2225e60(v3) )
      {
        result = 1;
        dword_2229E20[124] = 1;
      }
      else
      {
        dword_2229E20[125] = 9;
        v5 = ((int (__fastcall *)(int))dword_2229E20[127])(dword_2229E20[130]);
        Function_2225e34(v5);
        result = 0;
      }
    }
    else
    {
      dword_2229E20[125] = 1;
      ((void (*)(void))Function_2225e34)();
      result = 0;
    }
  }
  else
  {
    dword_2229E20[125] = 9;
    result = 0;
  }
  return result;
}

//----- (022258C4) --------------------------------------------------------
uint __fastcall Function_22258c4(int a1)
{
  OS_CreateThread(&dword_2229E20[133], (int)Function_222590c, a1, (int)&dword_2229E20[693], 2048, 16);
  return OS_WakeupThreadDirect((int)&dword_2229E20[133]);
}

//----- (0222590C) --------------------------------------------------------
int __fastcall Function_222590c(int (*a1)(void))
{
  int (*v1)(void);
  int v2;
  int v3;

  v1 = a1;
  v2 = Function_2226b18();
  Function_2225ed8(v2);
  v3 = ((int (__fastcall *)(int))dword_2229E20[127])(dword_2229E20[130]);
  Function_2225e34(v3);
  dword_2229E20[124] = 0;
  return v1();
}

//----- (02225948) --------------------------------------------------------
int __fastcall Function_2225948(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  uint **v5;
  uint *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint *v11;

  v5 = (uint **)a1;
  v6 = (uint *)*a1;
  v7 = a2;
  v8 = a3;
  v9 = a4;
  v10 = 0;
  if ( *a1 )
  {
    v4 = (uint *)*a1;
    if ( Function_2228ad4(a2, v6[2]) )
    {
      v4 = (uint *)v6[1];
      if ( v4 != *v5 )
      {
        while ( Function_2228ad4(v7, v4[2]) )
        {
          v4 = (uint *)v4[1];
          if ( v4 == *v5 )
            goto LABEL_9;
        }
        v10 = 1;
      }
    }
    else
    {
      v10 = 1;
    }
  }
LABEL_9:
  if ( v10 )
  {
    v4[3] = v8;
  }
  else
  {
    v11 = (uint *)((int (__fastcall *)(int, int))dword_2229E20[126])(v9, 4);
    if ( !v11 )
    {
      dword_2229E20[125] = 1;
      return 0;
    }
    v11[2] = v7;
    v11[3] = v8;
    v11[4] = 0;
    v11[5] = 0;
    if ( *v5 )
    {
      *v11 = **v5;
      v11[1] = *v5;
      *(uint *)(**v5 + 4) = v11;
      **v5 = v11;
    }
    else
    {
      v11[1] = v11;
      *v11 = v11;
      *v5 = v11;
    }
  }
  return 1;
}

//----- (02225A60) --------------------------------------------------------
uint *__fastcall Function_2225a60(uint **a1)
{
  uint *v1;

  v1 = *a1;
  if ( *a1 )
  {
    if ( v1 == (uint *)*v1 )
    {
      *a1 = 0;
    }
    else
    {
      *(uint *)(*v1 + 4) = v1[1];
      *(uint *)v1[1] = *v1;
      *a1 = (uint *)v1[1];
    }
  }
  return v1;
}

//----- (02225AA4) --------------------------------------------------------
int __fastcall Function_2225aa4(char a1)
{
  int result;

  result = (uchar)(a1 + 1);
  switch ( result )
  {
    case 123:
      LOBYTE(result) = 48;
      break;
    case 91:
      LOBYTE(result) = 97;
      break;
    case 58:
      LOBYTE(result) = 65;
      break;
  }
  return (char)result;
}

//----- (02225AD8) --------------------------------------------------------
int __fastcall Function_2225ad8(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  char *v7;
  int v8;
  int v9;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( Function_2228bc8(a2, a3, a1 + 70, 18) < 0 )
    return 1;
  v7 = &byte_2228D87;
  v8 = 19;
  do
  {
    LOBYTE(v9) = *(uchar *)(v3 + v8 + 68);
    while ( 1 )
    {
      v9 = Function_2225aa4(v9);
      *(uchar *)(v3 + v8 + 68) = v9;
      if ( v9 == *v7 )
        break;
      if ( Function_2228bc8(v4, v5, v3 + 70, 18) < 0 )
        return 1;
    }
    --v8;
    --v7;
  }
  while ( v8 >= 2 );
  return 0;
}

//----- (02225B78) --------------------------------------------------------
int __fastcall Function_2225b78(uint *a1, int a2, int a3)
{
  int result;

  if ( *a1 )
    result = 0;
  else
    result = Function_2225948(a1 + 13, a2, a3, 24);
  return result;
}

//----- (02225B9C) --------------------------------------------------------
int __fastcall Function_2225b9c(uint *a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v8;

  v3 = (int)a1;
  v4 = a2;
  v5 = a3;
  v6 = 0;
  if ( *a1 )
    return 0;
  v8 = Function_222714c(a3);
  if ( Function_2225ad8(v3, v5, v8) )
  {
    v6 = Function_2225948((uint *)(v3 + 56), v4, v5, 24);
    if ( v6 )
      *(uint *)(**(uint **)(v3 + 56) + 16) = v8;
  }
  return v6;
}

//----- (02225C10) --------------------------------------------------------
int __fastcall Function_2225c10(uint *a1, int a2, int a3)
{
  if ( *a1 )
    return 0;
  a1[7] = a2;
  a1[6] = a3;
  return 1;
}

//----- (02225C2C) --------------------------------------------------------
int __fastcall Function_2225c2c(int a1)
{
  int v1;
  int v2;
  uint *v3;

  v1 = a1;
  v2 = -1;
  v3 = (uint *)((int (__fastcall *)(int, int))dword_2229E20[126])(20, 4);
  if ( v3 )
  {
    if ( dword_2229E20[132] )
    {
      *v3 = *(uint *)dword_2229E20[132];
      v3[1] = dword_2229E20[132];
      *(uint *)(*(uint *)dword_2229E20[132] + 4) = v3;
      *(uint *)dword_2229E20[132] = v3;
    }
    else
    {
      *v3 = v3;
      v3[1] = v3;
      dword_2229E20[132] = (int)v3;
    }
    v3[2] = ++dword_2229E20[131];
    v3[3] = v1;
    v3[4] = -1;
    v2 = v3[2];
    if ( dword_2229E20[131] < 0 )
      dword_2229E20[131] = 0;
  }
  return v2;
}

//----- (02225CE0) --------------------------------------------------------
int __fastcall Function_2225ce0(int a1)
{
  int v1;
  int v2;

  v1 = 0;
  if ( dword_2229E20[132] )
  {
    if ( *(uint *)(dword_2229E20[132] + 8) == a1 )
    {
      v1 = dword_2229E20[132];
    }
    else
    {
      v2 = *(uint *)(dword_2229E20[132] + 4);
      if ( v2 != dword_2229E20[132] )
      {
        while ( *(uint *)(v2 + 8) != a1 )
        {
          v2 = *(uint *)(v2 + 4);
          if ( v2 == dword_2229E20[132] )
            return v1;
        }
        v1 = v2;
      }
    }
  }
  return v1;
}

//----- (02225D38) --------------------------------------------------------
int __fastcall Function_2225d38(int a1)
{
  int v1;
  uint *v2;
  uint *v3;
  void (__fastcall *v4)(int, int, int);
  int v5;
  int v6;

  v1 = 0;
  v2 = (uint *)Function_2225ce0(a1);
  if ( v2 )
  {
    if ( dword_2229E20[132] == *(uint *)dword_2229E20[132] )
    {
      dword_2229E20[132] = 0;
    }
    else
    {
      *(uint *)(*v2 + 4) = v2[1];
      *(uint *)v2[1] = *v2;
      if ( (uint *)dword_2229E20[132] == v2 )
        dword_2229E20[132] = v2[1];
    }
    v3 = (uint *)v2[3];
    v4 = (void (__fastcall *)(int, int, int))v3[15];
    v5 = v3[12];
    v6 = v3[11];
    Function_2226998();
    ((void (__fastcall *)(uint *))dword_2229E20[127])(v2);
    v4(8, v5, v6);
    v1 = 1;
  }
  return v1;
}

//----- (02225DD8) --------------------------------------------------------
int Function_2225dd8()
{
  int result;

  for ( result = dword_2229E20[132]; dword_2229E20[132]; result = dword_2229E20[132] )
    Function_2225d38(*(uint *)(result + 8));
  return result;
}

//----- (02225E08) --------------------------------------------------------
uint *Function_2225e08()
{
  return Function_2225a60((uint **)&dword_2229E20[132]);
}

//----- (02225E1C) --------------------------------------------------------
int Function_2225e1c()
{
  OS_InitMutex(&dword_2229E20[694]);
  return 1;
}

//----- (02225E34) --------------------------------------------------------
void Function_2225e34()
{
  ;
}

//----- (02225E38) --------------------------------------------------------
uint Function_2225e38()
{
  return OS_LockMutex(&dword_2229E20[694]);
}

//----- (02225E4C) --------------------------------------------------------
uint Function_2225e4c()
{
  return OS_UnlockMutex(&dword_2229E20[694]);
}

//----- (02225E60) --------------------------------------------------------
int __fastcall Function_2225e60(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( !Function_20c1f24() )
    return 0;
  OS_InitMessageQueue(&dword_2229E20[700], (int)&dword_2229E20[693], 1);
  OS_CreateThread(&dword_2229E20[708], (int)Function_22274a0, 0, v3 + 0x2000, 0x2000, v2);
  OS_WakeupThreadDirect((int)&dword_2229E20[708]);
  return 1;
}

//----- (02225ED8) --------------------------------------------------------
uint Function_2225ed8()
{
  dword_2229E20[129] = 1;
  Function_2225f1c();
  return Function_20c21d4((int)&dword_2229E20[708]);
}

//----- (02225F00) --------------------------------------------------------
int __fastcall Function_2225f00(int a1, int a2, int a3, int a4)
{
  int v5;

  v5 = a4;
  return OS_ReceiveMessage(&dword_2229E20[700], &v5, 1);
}

//----- (02225F1C) --------------------------------------------------------
int Function_2225f1c()
{
  return OS_SendMessage(&dword_2229E20[700], 0, 0);
}

//----- (02225F38) --------------------------------------------------------
int __fastcall Function_2225f38(int a1, int a2, uint *a3, int *a4)
{
  int result;
  int v5;
  uint *v6;
  bool v7;

  if ( a2 >= 1024 )
  {
    v5 = ((a2 - 1024) >> 9) - 1;
    v6 = *(uint **)(a1 + 28);
    if ( (a2 - 1024) >> 9 )
    {
      do
      {
        v7 = v5-- == 0;
        v6 = (uint *)*v6;
      }
      while ( !v7 );
    }
    *a3 = v6;
    result = (a2 - 1024) & 0x1FF;
    *a4 = result;
  }
  else
  {
    result = 0;
    *a3 = 0;
    *a4 = a2;
  }
  return result;
}

//----- (02225F94) --------------------------------------------------------
int __fastcall Function_2225f94(int a1, uint **a2, int *a3)
{
  int v3;
  int v5;

  if ( *a2 )
  {
    if ( *a3 == 512 )
    {
      *a3 = 0;
      *a2 = (uint *)**a2;
    }
  }
  else
  {
    v3 = *a3;
    if ( *a3 < 1024 )
    {
      *a3 = v3 + 1;
      return *(char *)(a1 + v3 + 32);
    }
    *a3 = 0;
    *a2 = *(uint **)(a1 + 28);
  }
  v5 = (*a3)++;
  return *((char *)*a2 + v5 + 4);
}

//----- (02226010) --------------------------------------------------------
int __fastcall Function_2226010(int a1, int a2, int a3, int *a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int result;
  char v11;
  uint *v12;
  int *v13;

  v13 = a4;
  v4 = 0;
  v5 = a4;
  v6 = a1;
  if ( a4 )
    a1 = -1;
  v7 = a2;
  v8 = a3;
  if ( a4 )
    *a4 = a1;
  if ( a2 >= a3 )
    return -1;
  Function_2225f38(v6, a2, &v12, (int *)&v11);
  if ( v7 >= v8 )
    return -1;
  while ( 1 )
  {
    v9 = Function_2225f94(v6, &v12, (int *)&v11);
    if ( v9 == 58 && v5 && *v5 < 0 )
      *v5 = v7;
    if ( !v4 )
    {
      if ( v9 == 13 )
        v4 = 1;
      goto LABEL_22;
    }
    if ( v9 == 10 )
      break;
    v4 = 0;
LABEL_22:
    if ( ++v7 >= v8 )
      return -1;
  }
  result = v8 - 1;
  if ( v7 == v8 - 1 )
    result = 0;
  if ( v7 != v8 - 1 )
    result = v7 + 1;
  return result;
}

//----- (022260E0) --------------------------------------------------------
int __fastcall Function_22260e0(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  char v7;
  char v8;

  v3 = a2;
  v4 = a3;
  v5 = a1;
  if ( a2 >= a3 )
    return -1;
  Function_2225f38(a1, a2, &v8, (int *)&v7);
  if ( v3 >= v4 )
    return -1;
  while ( Function_2225f94(v5, (uint **)&v8, (int *)&v7) == 32 )
  {
    if ( ++v3 >= v4 )
      return -1;
  }
  return v3;
}

//----- (02226150) --------------------------------------------------------
int __fastcall Function_2226150(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  uchar *v8;
  int v9;
  bool v10;
  int v12;
  int v13;
  int v14;
  char v15;
  uint *v16;
  int v17;

  v17 = a4;
  v5 = a2;
  v6 = a3;
  v7 = a1;
  v8 = (uchar *)a4;
  if ( a2 < a3 )
  {
    Function_2225f38(a1, a2, &v16, (int *)&v15);
    v9 = Function_2225f94(v7, &v16, (int *)&v15);
    while ( 1 )
    {
      v12 = (char)*v8;
      v13 = 0;
      if ( v12 >= 65 && v12 <= 90 )
        v13 = 1;
      if ( v13 )
        v14 = v12 + 32;
      else
        v14 = (char)*v8;
      if ( v9 >= 65 && v9 <= 90 )
        v9 += 32;
      if ( v9 != v14 )
        break;
      v10 = v12 == 0;
      if ( *v8 )
        v10 = v12 == 32;
      if ( !v10 )
      {
        v10 = v12 == a5;
        if ( v12 != a5 )
          v10 = v5 == v6 - 1;
      }
      if ( v10 )
        return 0;
      v9 = Function_2225f94(v7, &v16, (int *)&v15);
      ++v5;
      ++v8;
    }
  }
  return -1;
}

//----- (02226220) --------------------------------------------------------
int __fastcall Function_2226220(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint *v12;
  bool v13;
  int v14;

  v4 = a1;
  v5 = a3;
  v6 = a4;
  v7 = a2;
  if ( a3 + a4 > *a1 )
    return 0;
  if ( a4 )
  {
    if ( a3 < 1024 )
    {
      v8 = 1024 - a3;
      if ( a4 <= 1024 - a3 )
        v8 = a4;
      Function_222716c(a2, (char *)a1 + a3 + 32, v8);
      v5 += v8;
      v6 -= v8;
      v7 += v8;
    }
    if ( v6 )
    {
      v9 = (v5 - 1024) >> 9;
      v10 = (v5 - 1024) & 0x1FF;
      v11 = v9 - 1;
      v12 = (uint *)v4[7];
      if ( v9 )
      {
        do
        {
          v13 = v11-- == 0;
          v12 = (uint *)*v12;
        }
        while ( !v13 );
      }
      for ( ; v6; v12 = (uint *)*v12 )
      {
        v14 = 512 - v10;
        if ( v6 <= 512 - v10 )
          v14 = v6;
        Function_222716c(v7, (char *)v12 + v10 + 4, v14);
        v10 = (v10 + v14) & 0x1FF;
        v6 -= v14;
        v7 += v14;
      }
    }
  }
  return 1;
}

//----- (0222630C) --------------------------------------------------------
BOOL __fastcall Function_222630c(int a1, uint a2)
{
  return *(uint *)(a1 + 12) <= a2;
}

//----- (02226320) --------------------------------------------------------
int __fastcall Function_2226320(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;

  v3 = *(uint *)(a1 + 48);
  v4 = a3;
  v5 = *(uint *)(v3 + 24) + a3;
  v6 = *(uint *)(v3 + 12) - v4;
  return Function_2227024();
}

//----- (02226348) --------------------------------------------------------
int __fastcall Function_2226348(int a1, int a2, uint a3, int a4, int a5)
{
  int v5;
  int v6;
  uint v7;
  int v8;
  int v9;
  int v11;

  v5 = a1;
  v6 = *(uint *)(a1 + 48);
  v7 = a3;
  v8 = a2;
  v9 = a4;
  if ( Function_222630c(*(uint *)(a1 + 48), a3) )
    return -1003;
  v11 = *(uint *)(v6 + 12) - v7;
  if ( v9 <= v11 )
    v11 = v9;
  return Function_2227024(v5, v8, *(uint *)(v6 + 24) + v7, v11, a5);
}

//----- (022263B8) --------------------------------------------------------
uint *__fastcall Function_22263b8(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6;
  bool v7;
  int v8;
  int v9;
  uint *v10;
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
  int v22;
  int v23;
  int v24;
  int v25;
  int i;
  int v27;
  int v28;
  bool v29;
  int v30;
  int v31;
  int v32;
  bool v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  uint *result;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;

  v6 = a1;
  v7 = a2 == 0;
  if ( a2 )
    v7 = a2 == 1;
  v44 = a2;
  v8 = a3;
  v9 = a4;
  v10 = 0;
  if ( !v7 )
    v7 = a2 == 2;
  if ( v7 )
  {
    if ( a4 )
    {
      v10 = (uint *)((int (__fastcall *)(int, int))dword_2229E20[126])(88, 4);
      if ( v10 )
      {
        Function_2227158();
        v11 = ((int (__fastcall *)(int, int))dword_2229E20[126])(1056, 4);
        v10[12] = v11;
        if ( v11 )
        {
          Function_2227158();
          *(uint *)(v10[12] + 24) = v8;
          *(uint *)(v10[12] + 12) = v9;
          v12 = Function_222714c(v6);
          if ( v12 > 7 )
          {
            v13 = 7;
            v10[10] = 80;
            if ( Function_22270e4(v6, "http://", 7) )
            {
              if ( Function_22270e4(v6, "https://", 8) )
              {
                dword_2229E20[125] = 4;
                goto LABEL_85;
              }
              v10[2] = 1;
              v10[10] = 443;
              v13 = 8;
            }
            v14 = v12 - v13;
            v15 = v6 + v13;
            if ( v14 > 0 )
            {
              v16 = 0;
              v17 = 0;
              v18 = 0;
              while ( v16 < v14 )
              {
                v20 = *(char *)(v15 + v16);
                if ( v20 == 47 )
                  break;
                if ( v18 == 2 )
                {
                  v18 = 1;
                }
                else if ( v18 == 1 )
                {
                  v19 = (char)Function_2228898(v15 + v16 - 1, 2);
                  v18 = 0;
                  if ( (v19 & 0x80u) != 0 )
                  {
                    dword_2229E20[125] = 4;
                    goto LABEL_85;
                  }
                  if ( v19 == 47 )
                  {
                    --v17;
                    break;
                  }
                }
                else if ( v20 == 37 )
                {
                  v18 = 2;
                  ++v17;
                }
                ++v16;
              }
              if ( v18 )
              {
                dword_2229E20[125] = 4;
              }
              else
              {
                v21 = ((int (__fastcall *)(int, int))dword_2229E20[126])(v13 + v14 - 2 * v17 + 1, 4);
                v10[9] = v21;
                if ( v21 )
                {
                  v22 = Function_222716c(v21, v6, v13);
                  v23 = 0;
                  v24 = 0;
                  v25 = 0;
                  for ( i = 0; v23 < v14; ++v23 )
                  {
                    if ( v25 == 2 )
                    {
                      v25 = 1;
                    }
                    else if ( v25 == 1 )
                    {
                      v27 = (char)Function_2228898(v15 + v23 - 1, 2);
                      v22 = v24 + v13 + v10[9];
                      v25 = 0;
                      *(uchar *)(v22 - 1) = v27;
                      if ( v27 == 47 )
                        i = 1;
                    }
                    else
                    {
                      v28 = *(char *)(v15 + v23);
                      if ( v28 == 47 )
                        i = 1;
                      v29 = i == 0;
                      if ( !i )
                        v29 = v28 == 37;
                      if ( v29 )
                        v25 = 2;
                      else
                        v22 = v10[9];
                      if ( !v29 )
                      {
                        v22 += v13;
                        *(uchar *)(v24 + v22) = v28;
                      }
                      ++v24;
                    }
                  }
                  v30 = 0;
                  *(uchar *)(v10[9] + v13 + v24) = 0;
                  v31 = v10[9] + v13;
                  if ( v24 > 0 )
                  {
                    while ( 1 )
                    {
                      v32 = *(char *)(v31 + v30);
                      v33 = v32 == 47;
                      if ( v32 != 47 )
                        v33 = v32 == 58;
                      if ( v33 )
                        break;
                      if ( ++v30 >= v24 )
                        goto LABEL_62;
                    }
                    v10[3] = v30 + v13;
                  }
LABEL_62:
                  if ( v30 == v24 )
                  {
                    v10[3] = v30 + v13;
                    v10[4] = v30 + v13;
                  }
                  else
                  {
                    v34 = *(char *)(v31 + v30);
                    if ( v34 == 47 )
                    {
                      v10[4] = v10[3];
                    }
                    else if ( v34 == 58 )
                    {
                      if ( v30 < v24 )
                      {
                        while ( *(uchar *)(v31 + v30) != 47 )
                        {
                          if ( ++v30 >= v24 )
                            goto LABEL_71;
                        }
                        v10[4] = v30 + v13;
                      }
LABEL_71:
                      if ( v30 == v24 )
                      {
                        v10[4] = v30 + v13;
                      }
                      else
                      {
                        v35 = Function_2228b58(v10[9] + v10[3] + 1, v10[4] - (v10[3] + 1));
                        if ( v35 >= 0 )
                        {
                          if ( v35 > 0xFFFF )
                          {
                            dword_2229E20[125] = 4;
                            goto LABEL_85;
                          }
                        }
                        else
                        {
                          v35 = v10[10];
                        }
                        v10[10] = (ushort)v35;
                      }
                    }
                  }
                  if ( v10[2] )
                  {
                    v36 = v10[3] - v13;
                    v37 = ((int (__fastcall *)(int, int))dword_2229E20[126])(2096, 4);
                    v10[8] = v37;
                    if ( !v37 )
                    {
                      dword_2229E20[125] = 1;
                      goto LABEL_85;
                    }
                    Function_2227158();
                    *(uint *)(v10[8] + 2048) = ((int (__fastcall *)(int, int))dword_2229E20[126])(v36 + 1, 4);
                    v38 = *(uint *)(v10[8] + 2048);
                    if ( !v38 )
                    {
                      dword_2229E20[125] = 1;
                      goto LABEL_85;
                    }
                    Function_222716c(v38, v10[9] + v13, v36);
                    *(uchar *)(*(uint *)(v10[8] + 2048) + v36) = 0;
                  }
                  Function_222716c(v10 + 17, dword_2228D74, 20);
                  v10[11] = a6;
                  v10[16] = v44;
                  result = v10;
                  v10[15] = a5;
                  return result;
                }
                dword_2229E20[125] = 1;
              }
            }
            else
            {
              dword_2229E20[125] = 4;
            }
          }
          else
          {
            dword_2229E20[125] = 4;
          }
        }
        else
        {
          dword_2229E20[125] = 1;
        }
      }
      else
      {
        dword_2229E20[125] = 1;
      }
    }
    else
    {
      dword_2229E20[125] = 11;
    }
  }
  else
  {
    dword_2229E20[125] = 11;
  }
LABEL_85:
  if ( v10 )
  {
    v40 = v10[8];
    if ( v40 )
    {
      v41 = *(uint *)(v40 + 2048);
      if ( v41 )
        ((void (__fastcall *)(int))dword_2229E20[127])(v41);
      ((void (__fastcall *)(uint))dword_2229E20[127])(v10[8]);
    }
    v42 = v10[9];
    if ( v42 )
      ((void (__fastcall *)(int))dword_2229E20[127])(v42);
    v43 = v10[12];
    if ( v43 )
      ((void (__fastcall *)(int))dword_2229E20[127])(v43);
    ((void (__fastcall *)(uint *))dword_2229E20[127])(v10);
  }
  return 0;
}

//----- (0222691C) --------------------------------------------------------
int __fastcall Function_222691c(int a1)
{
  int v1;

  v1 = a1;
  ((void (__fastcall *)(uint))dword_2229E20[127])(*(uint *)(a1 + 48));
  return Function_2226998(v1);
}

//----- (02226944) --------------------------------------------------------
int __fastcall Function_2226944(int result)
{
  uint **v1;
  uint *v2;
  uint *v3;

  v1 = (uint **)result;
  if ( result )
  {
    do
    {
      v2 = *v1;
      if ( v1 == *v1 )
      {
        result = ((int (__fastcall *)(uint **))dword_2229E20[127])(v1);
        v1 = 0;
      }
      else
      {
        v3 = (uint *)*v2;
        result = ((int (__fastcall *)(uint *))dword_2229E20[127])(v2);
        *v1 = v3;
      }
    }
    while ( v1 );
  }
  return result;
}

//----- (02226998) --------------------------------------------------------
int __fastcall Function_2226998(uint *a1)
{
  uint *v1;
  int v2;
  int v3;

  v1 = a1;
  Function_2226944(a1[13]);
  Function_2226944(v1[14]);
  v2 = v1[8];
  if ( v2 )
  {
    v3 = *(uint *)(v2 + 2048);
    if ( v3 )
      ((void (__fastcall *)(int))dword_2229E20[127])(v3);
    ((void (__fastcall *)(uint))dword_2229E20[127])(v1[8]);
  }
  ((void (__fastcall *)(uint))dword_2229E20[127])(v1[9]);
  ((void (__fastcall *)(uint *))dword_2229E20[127])(v1);
  return 1;
}

//----- (02226A10) --------------------------------------------------------
int __fastcall Function_2226a10(uint *a1)
{
  uint *v1;
  int result;
  int v3;
  bool v4;
  int v5;
  int v6;

  v1 = a1;
  if ( *a1 )
  {
    dword_2229E20[125] = 11;
    result = -1;
  }
  else
  {
    v3 = a1[16];
    v4 = v3 == 1;
    if ( v3 == 1 )
      v4 = v1[14] == 0;
    if ( v4 )
    {
      dword_2229E20[125] = 11;
      result = -1;
    }
    else
    {
      Function_2225e38();
      v5 = Function_2225c2c((int)v1);
      v6 = v5;
      if ( v5 >= 0 )
      {
        *v1 = 1;
        Function_2225f1c();
      }
      else
      {
        dword_2229E20[125] = 1;
      }
      Function_2225e4c();
      result = v6;
    }
  }
  return result;
}

//----- (02226A9C) --------------------------------------------------------
int __fastcall Function_2226a9c(int a1)
{
  int v1;
  int v2;
  int v3;
  bool v4;

  v1 = a1;
  v2 = 0;
  Function_2225e38();
  if ( dword_2229E20[128] )
  {
    v3 = *(uint *)(dword_2229E20[128] + 8);
    v4 = v3 == v1;
    if ( v3 == v1 )
      v4 = *(uint *)(*(uint *)(dword_2229E20[128] + 12) + 4) == 0;
    if ( v4 )
    {
      *(uint *)(*(uint *)(dword_2229E20[128] + 12) + 4) = 1;
      Function_22270bc(*(uint *)(dword_2229E20[128] + 12), *(uint *)(dword_2229E20[128] + 16));
      v2 = 1;
    }
  }
  if ( !v2 )
    v2 = Function_2225d38(v1);
  Function_2225e4c();
  return v2;
}

//----- (02226B18) --------------------------------------------------------
uint Function_2226b18()
{
  Function_2225e38();
  if ( dword_2229E20[128] && !*(uint *)(*(uint *)(dword_2229E20[128] + 12) + 4) )
  {
    *(uint *)(*(uint *)(dword_2229E20[128] + 12) + 4) = 1;
    Function_22270bc(*(uint *)(dword_2229E20[128] + 12), *(uint *)(dword_2229E20[128] + 16));
  }
  Function_2225dd8();
  return Function_2225e4c();
}

//----- (02226B6C) --------------------------------------------------------
uint __fastcall Function_2226b6c(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  char v7;
  int v8;
  int v9;
  uint result;
  uint v11;
  int v12;

  v12 = a4;
  v4 = a1;
  v5 = a1[9];
  v6 = a1[3];
  v7 = *(uchar *)(v5 + v6);
  *(uchar *)(v5 + v6) = 0;
  v8 = a1[9];
  if ( a1[2] )
    v9 = 8;
  else
    v9 = 7;
  if ( ((int (__fastcall *)(int, int *))dword_21FB984[13352])(v8 + v9, &v12) )
  {
    result = v12;
  }
  else
  {
    v11 = ((int (__fastcall *)(int))dword_21FB984[12661])(v8 + v9);
    if ( !v11 )
      return 0;
    result = (v11 << 24) & 0xFF000000 | (v11 << 8) & 0xFF0000 | HIBYTE(v11) | (v11 >> 8) & 0xFF00;
  }
  *(uchar *)(v4[9] + v4[3]) = v7;
  return result;
}

//----- (02226C04) --------------------------------------------------------
int __fastcall Function_2226c04(uint *a1)
{
  uint *v1;
  uint *v2;
  uint *v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = (uint *)a1[7];
  if ( v2 )
  {
    do
    {
      v3 = (uint *)*v2;
      ((void (__fastcall *)(uint *))dword_2229E20[127])(v2);
      v2 = v3;
      v1[7] = v3;
    }
    while ( v3 );
  }
  v4 = v1[4];
  if ( v4 )
    ((void (__fastcall *)(int))dword_2229E20[127])(v4);
  v5 = v1[5];
  if ( v5 )
    ((void (__fastcall *)(int))dword_2229E20[127])(v5);
  return ((int (__fastcall *)(uint *))dword_2229E20[127])(v1);
}

//----- (02226C7C) --------------------------------------------------------
int __fastcall Function_2226c7c(int *a1, int a2, int *a3)
{
  int *v3;
  int *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v11;
  int v12;

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Function_2226010((int)a1, 12, *a1, &v12);
  if ( v6 <= 0 )
    return -1;
  while ( 1 )
  {
    v7 = Function_2226010((int)v3, v6, *v3, &v12);
    if ( v12 > 0 && !Function_2226150((int)v3, v6, v12, v5, 0) )
      break;
    v6 = v7;
    if ( v7 <= 0 )
      return -1;
  }
  if ( v12 + 1 >= *v3 )
    return 0;
  v8 = Function_2226010((int)v3, v12 + 1, *v3, 0);
  if ( v8 > 0 )
  {
    if ( v8 < 2 )
      return -1;
    v9 = v8 - 2;
  }
  else
  {
    v9 = *v3;
  }
  v11 = Function_22260e0((int)v3, v12 + 1, v9);
  if ( v11 < 0 )
    v11 = v9;
  *v4 = v11;
  return v9 - v11;
}

//----- (02226D88) --------------------------------------------------------
int __fastcall Function_2226d88(int *a1, int a2, uint *a3, int a4)
{
  int *v4;
  int v5;
  uint *v6;
  int result;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v13 = a4;
  v4 = a1;
  v5 = a2;
  v6 = a3;
  if ( !a1[2] )
    return -1;
  v8 = a1[5];
  if ( v8 )
  {
    ((void (__fastcall *)(int))dword_2229E20[127])(v8);
    v4[5] = 0;
  }
  v9 = Function_2226c7c(v4, v5, &v13);
  v10 = v9;
  if ( v9 < 0 )
  {
    if ( Function_22270d8("HTTPSTATUSCODE", v5) )
    {
      result = -1;
    }
    else
    {
      v12 = ((int (__fastcall *)(int, int))dword_2229E20[126])(4, 4);
      v4[5] = v12;
      *(uchar *)(v12 + 3) = 0;
      Function_2226220(v4, v4[5], 9, 3);
      result = 3;
      *v6 = v4[5];
    }
  }
  else
  {
    v11 = ((int (__fastcall *)(int, int))dword_2229E20[126])(v9 + 1, 4);
    v4[5] = v11;
    *(uchar *)(v11 + v10) = 0;
    Function_2226220(v4, v4[5], v13, v10);
    result = v10;
    *v6 = v4[5];
  }
  return result;
}

//----- (02226E8C) --------------------------------------------------------
int __fastcall Function_2226e8c(uint *a1, uint *a2)
{
  int v2;
  bool v3;

  v2 = a1[2];
  v3 = v2 == 0;
  if ( v2 )
    v3 = a1[1] == 0;
  if ( v3 )
    return -1;
  *a2 = a1[6];
  return a1[1];
}

//----- (02226EB0) --------------------------------------------------------
int __fastcall Function_2226eb0(int result)
{
  if ( result & 0x8000 )
    result &= 0xFFFF7FFF;
  return result;
}

//----- (02226EBC) --------------------------------------------------------
int Function_2226ebc()
{
  OS_GetLowEntropyData(&dword_2229E20[756]);
  return ((int (__fastcall *)(int *, int))dword_21FB984[20777])(&dword_2229E20[756], 32);
}

//----- (02226EDC) --------------------------------------------------------
int __fastcall Function_2226edc(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  v2 = ((int (__fastcall *)(int, int, uint))dword_21FB984[12904])(2, 1, 0);
  if ( v2 >= 0 )
  {
    if ( v1[2] )
    {
      Function_2226ebc();
      *(uint *)(v1[8] + 2068) = v1[7];
      *(uint *)(v1[8] + 2072) = v1[6];
      *(uint *)(v1[8] + 2064) = Function_2226eb0;
      if ( ((int (__fastcall *)(int, uint))dword_21FB984[13458])(v2, v1[8]) < 0 )
      {
        ((void (__fastcall *)(int))dword_21FB984[13039])(v2);
        v2 = -1;
      }
    }
  }
  return v2;
}

//----- (02226F5C) --------------------------------------------------------
void Function_2226f5c()
{
  JUMPOUT(&dword_21FB984[13039]);
}

//----- (02226F6C) --------------------------------------------------------
int __fastcall Function_2226f6c(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  for ( result = ((int (__fastcall *)(int))dword_21FB984[13039])(a2);
        result == -26;
        result = ((int (__fastcall *)(int))dword_21FB984[13039])(v2) )
  {
    OS_Sleep(0x1F4u);
  }
  return result;
}

//----- (02226FA8) --------------------------------------------------------
int __fastcall Function_2226fa8(int a1, int a2, int a3, int a4)
{
  int v4;
  char v6;
  char v7;
  short v8;
  int v9;
  int v10;

  v10 = a4;
  v4 = a1;
  v6 = 8;
  v7 = 2;
  v8 = BYTE1(a4) | ((ushort)a4 << 8) & 0xFF00;
  v9 = a3;
  if ( ((int (__fastcall *)(int, char *))dword_21FB984[12926])(a2, &v6) >= 0 )
    return 0;
  if ( *(uint *)(v4 + 4) )
    return -1002;
  return -1001;
}

//----- (02227024) --------------------------------------------------------
int __fastcall Function_2227024(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int result;

  v5 = a1;
  result = ((int (__fastcall *)(int, int, int, int))dword_21FB984[12949])(a2, a3, a4, a5);
  if ( result < 0 )
  {
    if ( *(uint *)(v5 + 4) )
    {
      result = -1002;
    }
    else if ( result == -56 )
    {
      result = 0;
    }
    else
    {
      result = -1001;
    }
  }
  return result;
}

//----- (02227070) --------------------------------------------------------
int __fastcall Function_2227070(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int result;

  v5 = a1;
  result = ((int (__fastcall *)(int, int, int, int))dword_21FB984[12994])(a2, a3, a4, a5);
  if ( result < 0 )
  {
    if ( *(uint *)(v5 + 4) )
    {
      result = -1002;
    }
    else if ( result == -56 )
    {
      result = 0;
    }
    else
    {
      result = -1001;
    }
  }
  return result;
}

//----- (022270BC) --------------------------------------------------------
int __fastcall Function_22270bc(int a1, int a2)
{
  int result;

  if ( a2 >= 0 )
    result = ((int (__fastcall *)(int, int))dword_21FB984[13036])(a2, 2);
  return result;
}

//----- (022270D8) --------------------------------------------------------
int __fastcall Function_22270d8(uchar *a1, char *a2)
{
  return Function_20d33dc(a1, a2);
}

//----- (022270E4) --------------------------------------------------------
int __fastcall Function_22270e4(char *a1, char *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  bool v7;
  bool v8;

  if ( a3 > 0 )
  {
    while ( 1 )
    {
      v4 = *a1++;
      v3 = v4;
      v6 = *a2++;
      v5 = v6;
      v7 = v3 == 0;
      if ( v3 )
        v7 = v5 == 0;
      if ( v7 )
        break;
      if ( v5 >= 65 && v5 <= 90 )
        v5 += 32;
      if ( v3 >= 65 && v3 <= 90 )
        v3 += 32;
      if ( v3 == v5 && --a3 > 0 )
        continue;
      return a3;
    }
    v8 = v3 == 0;
    if ( !v3 )
      v8 = v5 == 0;
    if ( v8 )
      a3 = 0;
  }
  return a3;
}

//----- (0222714C) --------------------------------------------------------
int __fastcall Function_222714c(uchar *a1)
{
  return Function_20d33b4(a1);
}

//----- (02227158) --------------------------------------------------------
ushort *__fastcall Function_2227158(ushort *a1, uint a2)
{
  return MI_CpuFill8(a1, 0, a2);
}

//----- (0222716C) --------------------------------------------------------
int __fastcall Function_222716c(uint a1, int a2, uint a3)
{
  return MI_CpuCopy8(a2, a1, a3, a1);
}

//----- (02227184) --------------------------------------------------------
BOOL __fastcall Function_2227184(uint *a1, uint *a2)
{
  uint *v2;
  uint *v3;
  int v4;
  BOOL v5;

  v2 = a1;
  v3 = a2;
  *a1 = 0;
  *a2 = 0;
  Function_2225e38();
  if ( dword_2229E20[128] )
  {
    if ( *(uint *)(*(uint *)(dword_2229E20[128] + 12) + 20) )
    {
      *v2 = *(uint *)(*(uint *)(*(uint *)(dword_2229E20[128] + 12) + 48) + 4);
      if ( *(uint *)(*(uint *)(dword_2229E20[128] + 12) + 20) == -1 )
        v4 = 0;
      else
        v4 = *(uint *)(*(uint *)(dword_2229E20[128] + 12) + 20);
      *v3 = v4;
    }
    v5 = 1;
  }
  else
  {
    v5 = dword_2229E20[132] != 0;
  }
  Function_2225e4c();
  return v5;
}

//----- (02227224) --------------------------------------------------------
int __fastcall Function_2227224(int a1, int a2, int *a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  int result;
  int v11;
  int v12;

  v5 = a5;
  v6 = a1;
  v7 = a2;
  v8 = a3;
  v9 = a4;
  if ( a5 <= 0 )
    return a5;
  while ( !*(uint *)(v6 + 4) )
  {
    v11 = 1024 - *v8;
    if ( v5 <= v11 )
      v11 = v5;
    Function_222716c((uint)&dword_2229E20[782] + *v8, v9, v11);
    v9 += v11;
    v12 = *v8 + v11;
    *v8 = v12;
    v5 -= v11;
    if ( v12 == 1024 )
    {
      result = Function_2227070(v6, v7, (int)&dword_2229E20[782], 1024, 0);
      if ( result <= 0 )
        return result;
      *v8 -= result;
    }
    if ( v5 <= 0 )
      return a5;
  }
  return -1;
}

//----- (022272D8) --------------------------------------------------------
int __fastcall Function_22272d8(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  char v5;
  int result;
  char v7;
  char v8;

  v2 = 0;
  v3 = a1;
  v4 = a2;
  v5 = 0;
  v7 = 0;
  v8 = 0;
  while ( *(&v7 + (v5 & 1)) != 13 || *(&v7 + ((v5 - 1) & 1)) != 10 )
  {
    result = Function_2227024(v3, v4, (int)(&v7 + (v5 & 1)), 1, 0);
    if ( result <= 0 )
      return result;
    v2 += result;
    ++v5;
  }
  return v2;
}

//----- (02227364) --------------------------------------------------------
int __fastcall Function_2227364(int result)
{
  int v1;
  int v2;

  v1 = result;
  if ( result )
  {
    v2 = *(uint *)(result + 2048);
    if ( v2 )
      ((void (__fastcall *)(int))dword_2229E20[127])(v2);
    result = ((int (__fastcall *)(int))dword_2229E20[127])(v1);
  }
  return result;
}

//----- (022273A0) --------------------------------------------------------
int *__fastcall Function_22273a0(int a1, int **a2)
{
  int v2;
  int **v3;
  int *result;

  v2 = a1;
  v3 = a2;
  if ( ((dword_2229E20[764] + 1) & 7) == dword_2229E20[765] )
  {
    Function_2226f6c(0, dword_2229E20[2 * dword_2229E20[765] + 766]);
    Function_2227364(dword_2229E20[2 * dword_2229E20[765] + 767]);
    dword_2229E20[765] = (LOBYTE(dword_2229E20[765]) + 1) & 7;
  }
  result = *v3;
  if ( *v3 )
  {
    result = &dword_2229E20[764];
    dword_2229E20[2 * dword_2229E20[764] + 766] = v2;
    dword_2229E20[2 * dword_2229E20[764] + 767] = (int)*v3;
    *v3 = 0;
    dword_2229E20[764] = (dword_2229E20[764] + 1) & 7;
  }
  return result;
}

//----- (02227440) --------------------------------------------------------
int Function_2227440()
{
  int result;
  int i;

  result = dword_2229E20[764];
  for ( i = dword_2229E20[765]; dword_2229E20[764] != i; result = dword_2229E20[764] )
  {
    Function_2226f6c(0, dword_2229E20[2 * i + 766]);
    Function_2227364(dword_2229E20[2 * dword_2229E20[765] + 767]);
    i = (LOBYTE(dword_2229E20[765]) + 1) & 7;
    dword_2229E20[765] = i;
  }
  return result;
}

//----- (022274A0) --------------------------------------------------------
int Function_22274a0()
{
  int v0;
  int v1;
  int v2;
  uint *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int *v9;
  uint v10;
  uint v11;
  int v12;
  int v13;
  bool v14;
  int v15;
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
  int v26;
  int v27;
  int v28;
  uint *v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  bool v39;
  int v40;
  int v41;
  int v42;
  bool v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  bool v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  uint *v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  uint *v67;
  bool v68;
  int v69;
  int v70;
  uint *v71;
  uchar *v72;
  int v73;
  int v74;
  int v75;
  int v76;
  uchar *v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int *v84;
  int v85;
  int v86;
  int v87;
  int v88;
  bool v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  int v102;
  int v103;
  void (__fastcall *v104)(int, int *, int);
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  int v112;
  char v113;
  char v114;
  char v115;
  int v116;
  short v117;
  short v118;
  char v119;
  int v120;
  int v121;
  int v122;
  char v123;
  char v124;
  char v125;
  char v126;

  v122 = 0;
  dword_2229E20[764] = 0;
  v2 = -1;
  dword_2229E20[765] = 0;
  v109 = 0;
  v111 = -1;
  v110 = -1;
  v107 = 0;
  v108 = 0;
  if ( dword_2229E20[129] )
    goto LABEL_283;
  do
  {
    Function_2225e38();
    v3 = Function_2225e08();
    if ( v3 )
    {
      v4 = v3[2];
      v0 = v3[3];
      dword_2229E20[128] = (int)v3;
    }
    else
    {
      v4 = -1;
    }
    v5 = Function_2225e4c();
    if ( v4 < 0 )
    {
      Function_2225f00(v5, v6, v7, v8);
      continue;
    }
    v9 = *(int **)(v0 + 48);
    if ( *(uint *)(v0 + 4) )
      goto LABEL_270;
    v10 = Function_2226b6c((uint *)v0, v6, v7, v8);
    v112 = v10;
    if ( !v10 )
    {
      v106 = 4;
      goto LABEL_270;
    }
    v11 = v10;
    v12 = v111;
    v13 = 0;
    v14 = v11 == v111;
    if ( v11 == v111 )
    {
      v11 = *(uint *)(v0 + 40);
      v12 = v110;
    }
    if ( v14 )
    {
      v14 = v11 == v12;
      if ( v11 == v12 )
      {
        v11 = *(uint *)(v0 + 8);
        v12 = v108;
      }
    }
    if ( v14 )
      v14 = v11 == v12;
    if ( v14 )
      v13 = 1;
    v110 = *(uint *)(v0 + 40);
    v108 = *(uint *)(v0 + 8);
    v111 = v112;
    v107 &= v13;
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          while ( 1 )
          {
            do
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  while ( 1 )
                  {
                    do
                    {
                      while ( 1 )
                      {
                        do
                        {
                          while ( 1 )
                          {
                            while ( 1 )
                            {
LABEL_20:
                              v106 = 0;
                              if ( v2 >= 0 )
                              {
                                v117 = 9;
                                v116 = v2;
                                if ( ((int (__fastcall *)(int *, int, int, uint))dword_21FB984[13413])(
                                       &v116,
                                       1,
                                       52365,
                                       0) > 0 )
                                {
                                  if ( v118 & 0xE0 )
                                    v107 = 0;
                                }
                                else
                                {
                                  v107 = 0;
                                }
                              }
                              if ( v107 )
                              {
                                if ( *(uint *)(v0 + 8) )
                                {
                                  Function_2227364(*(uint *)(v0 + 32));
                                  *(uint *)(v0 + 32) = 0;
                                }
                                Function_2226ebc();
                                Function_2225e38();
                                *(uint *)(dword_2229E20[128] + 16) = v2;
                                Function_2225e4c();
                              }
                              else
                              {
                                if ( v2 >= 0 )
                                {
                                  Function_2226f5c();
                                  if ( v15 < 0 )
                                    v106 = 10;
                                  Function_22273a0(v2, (int **)&v122);
                                  v2 = -1;
                                  if ( v106 )
                                    goto LABEL_270;
                                }
                                v2 = Function_2226edc((uint *)v0);
                                if ( v2 < 0 )
                                {
                                  v106 = 3;
                                  goto LABEL_270;
                                }
                                if ( *(uint *)(v0 + 8) )
                                {
                                  v122 = *(uint *)(v0 + 32);
                                  *(uint *)(v0 + 32) = 0;
                                }
                                Function_2225e38();
                                *(uint *)(dword_2229E20[128] + 16) = v2;
                                Function_2225e4c();
                                if ( *(uint *)(v0 + 4) )
                                  goto LABEL_270;
                                v107 = Function_2226fa8(v0, v2, v112, *(uint *)(v0 + 40)) >= 0;
                              }
                              if ( *(uint *)(v0 + 4) )
                                goto LABEL_270;
                              if ( !v107 )
                              {
                                v106 = 5;
                                goto LABEL_270;
                              }
                              v121 = 0;
                              v107 = 0;
                              v16 = Function_222714c(*(uchar **)(v0 + 36));
                              v106 = 10;
                              v17 = *(uint *)(v0 + 64);
                              if ( v17 )
                                break;
                              v18 = Function_2227224(v0, v2, &v121, (int)"GET ", 4);
                              if ( v18 < 0 )
                                goto LABEL_270;
                              if ( v18 )
                                goto LABEL_54;
                            }
                            if ( v17 != 1 )
                              break;
                            v19 = Function_2227224(v0, v2, &v121, (int)"POST ", 5);
                            if ( v19 < 0 )
                              goto LABEL_270;
                            if ( v19 )
                              goto LABEL_54;
                          }
                          if ( v17 != 2 )
                            break;
                          v20 = Function_2227224(v0, v2, &v121, (int)"HEAD ", 5);
                          if ( v20 < 0 )
                            goto LABEL_270;
                        }
                        while ( !v20 );
LABEL_54:
                        v21 = *(uint *)(v0 + 16);
                        if ( v16 > v21 )
                          break;
                        v23 = Function_2227224(v0, v2, &v121, (int)"/", 1);
                        if ( v23 < 0 )
                          goto LABEL_270;
                        if ( v23 )
                          goto LABEL_61;
                      }
                      if ( v16 == v21 )
                        break;
                      v22 = Function_2227224(v0, v2, &v121, *(uint *)(v0 + 36) + v21, v16 - v21);
                      if ( v22 < 0 )
                        goto LABEL_270;
                    }
                    while ( !v22 );
LABEL_61:
                    v24 = Function_2227224(v0, v2, &v121, (int)" HTTP/1.1\r\n", 11);
                    if ( v24 < 0 )
                      goto LABEL_270;
                    if ( v24 )
                    {
                      if ( *(uint *)(v0 + 8) )
                        v25 = 8;
                      else
                        v25 = 7;
                      v120 = v25;
                      v26 = Function_2227224(v0, v2, &v121, (int)"Host: ", 6);
                      if ( v26 < 0 )
                        goto LABEL_270;
                      if ( v26 )
                      {
                        if ( *(uint *)(v0 + 12) == v120 )
                          goto LABEL_288;
                        v27 = Function_2227224(v0, v2, &v121, *(uint *)(v0 + 36) + v120, *(uint *)(v0 + 12) - v120);
                        if ( v27 < 0 )
                          goto LABEL_270;
                        if ( v27 )
                        {
LABEL_288:
                          v28 = Function_2227224(v0, v2, &v121, (int)"\r\n", 2);
                          if ( v28 < 0 )
                            goto LABEL_270;
                          if ( v28 )
                            break;
                        }
                      }
                    }
                  }
                  v29 = Function_2225a60((uint **)(v0 + 52));
                  if ( !v29 )
                    break;
                  while ( 1 )
                  {
                    v30 = Function_222714c((uchar *)v29[2]);
                    if ( v30 )
                    {
                      v31 = Function_2227224(v0, v2, &v121, v29[2], v30);
                      if ( v31 < 0 )
                        goto LABEL_270;
                      if ( !v31 )
                        break;
                    }
                    v32 = Function_2227224(v0, v2, &v121, (int)": ", 2);
                    if ( v32 < 0 )
                      goto LABEL_270;
                    if ( !v32 )
                      break;
                    v33 = Function_222714c((uchar *)v29[3]);
                    if ( v33 )
                    {
                      v34 = Function_2227224(v0, v2, &v121, v29[3], v33);
                      if ( v34 < 0 )
                        goto LABEL_270;
                      if ( !v34 )
                        break;
                    }
                    v35 = Function_2227224(v0, v2, &v121, (int)"\r\n", 2);
                    if ( v35 < 0 )
                      goto LABEL_270;
                    if ( !v35 )
                      break;
                    ((void (__fastcall *)(uint *))dword_2229E20[127])(v29);
                    v29 = Function_2225a60((uint **)(v0 + 52));
                    if ( !v29 )
                      goto LABEL_85;
                  }
                }
LABEL_85:
                if ( *(uint *)(v0 + 64) != 1 )
                  goto LABEL_122;
                v36 = *(uint *)(v0 + 56);
                v37 = 0;
                v109 = 0;
                v38 = *(uint *)(v0 + 56);
                if ( v36 )
                {
                  while ( !*(uint *)(v38 + 20) )
                  {
                    v39 = v38 == *(uint *)v36;
                    if ( v38 != *(uint *)v36 )
                    {
                      v38 = *(uint *)(v38 + 4);
                      v39 = v38 == 0;
                    }
                    if ( v39 )
                      goto LABEL_93;
                  }
                  v109 = 1;
                }
LABEL_93:
                if ( !v109 )
                  break;
                if ( v36 )
                {
                  do
                  {
                    v40 = v37 + 22 + Function_222714c(*(uchar **)(v36 + 8)) + 41;
                    v41 = *(uint *)(v36 + 16);
                    if ( *(uint *)(v36 + 20) )
                      v40 += 75;
                    v42 = **(uint **)(v0 + 56);
                    v43 = v36 == v42;
                    if ( v36 != v42 )
                      v36 = *(uint *)(v36 + 4);
                    v37 = v40 + 2 + v41 + 2;
                  }
                  while ( !v43 && v36 );
                }
                v37 += 24;
                v44 = Function_2227224(v0, v2, &v121, (int)"Content-Type: multipart/form-data; boundary=", 44);
                if ( v44 < 0 )
                  goto LABEL_270;
                if ( v44 )
                {
                  v45 = Function_2227224(v0, v2, &v121, v0 + 70, 18);
                  if ( v45 < 0 )
                    goto LABEL_270;
                  if ( v45 )
                  {
                    v46 = Function_2227224(v0, v2, &v121, (int)"\r\n", 2);
                    if ( v46 < 0 )
                      goto LABEL_270;
                    if ( v46 )
                      goto LABEL_115;
                  }
                }
              }
              if ( v36 )
              {
                do
                {
                  v47 = v37 + Function_22287a0(*(uint *)(v36 + 8)) + 1;
                  v37 = v47 + Function_22287a0(*(uint *)(v36 + 12));
                  v48 = **(uint **)(v0 + 56);
                  v49 = v36 == v48;
                  if ( v36 != v48 )
                  {
                    v36 = *(uint *)(v36 + 4);
                    ++v37;
                    v49 = v36 == 0;
                  }
                }
                while ( !v49 );
              }
              v50 = Function_2227224(v0, v2, &v121, (int)"Content-Type: application/x-www-form-urlencoded\r\n", 49);
              if ( v50 < 0 )
                goto LABEL_270;
            }
            while ( !v50 );
LABEL_115:
            v51 = Function_2227224(v0, v2, &v121, (int)"Content-Length: ", 16);
            if ( v51 < 0 )
              goto LABEL_270;
            if ( v51 )
            {
              v52 = Function_2228a18(&v123, v37);
              v120 = v52;
              if ( !v52 )
                goto LABEL_289;
              v53 = Function_2227224(v0, v2, &v121, (int)&v123, v52);
              if ( v53 < 0 )
                goto LABEL_270;
              if ( v53 )
              {
LABEL_289:
                v54 = Function_2227224(v0, v2, &v121, (int)"\r\n", 2);
                if ( v54 < 0 )
                  goto LABEL_270;
                if ( v54 )
                  break;
              }
            }
          }
LABEL_122:
          v55 = Function_2227224(v0, v2, &v121, (int)"\r\n", 2);
          if ( v55 < 0 )
            goto LABEL_270;
        }
        while ( !v55 );
        if ( *(uint *)(v0 + 64) != 1 )
          goto LABEL_174;
        if ( v109 )
          break;
        v71 = *(uint **)(v0 + 56);
        if ( !v71 )
          goto LABEL_174;
        while ( 1 )
        {
          v72 = (uchar *)v71[2];
          v73 = 0;
          if ( *v72 )
            break;
LABEL_163:
          v76 = Function_2227224(v0, v2, &v121, (int)"=", 1);
          if ( v76 < 0 )
            goto LABEL_270;
          if ( !v76 )
            goto LABEL_20;
          v77 = (uchar *)v71[3];
          v78 = 0;
          if ( *v77 )
          {
            do
            {
              v79 = Function_2228808(&v123, (char)v77[v78]);
              v120 = v79;
              if ( v79 )
              {
                v80 = Function_2227224(v0, v2, &v121, (int)&v123, v79);
                if ( v80 < 0 )
                  goto LABEL_270;
                if ( !v80 )
                  goto LABEL_20;
              }
              ++v78;
              v77 = (uchar *)v71[3];
            }
            while ( v77[v78] );
          }
          if ( v71 == **(uint ***)(v0 + 56) )
            goto LABEL_174;
          v81 = Function_2227224(v0, v2, &v121, (int)"&", 1);
          if ( v81 < 0 )
            goto LABEL_270;
          if ( !v81 )
            goto LABEL_20;
          v71 = (uint *)v71[1];
          if ( !v71 )
            goto LABEL_174;
        }
        while ( 1 )
        {
          v74 = Function_2228808(&v123, (char)v72[v73]);
          v120 = v74;
          if ( v74 )
          {
            v75 = Function_2227224(v0, v2, &v121, (int)&v123, v74);
            if ( v75 < 0 )
              goto LABEL_270;
            if ( !v75 )
              break;
          }
          ++v73;
          v72 = (uchar *)v71[2];
          if ( !v72[v73] )
            goto LABEL_163;
        }
      }
      v56 = *(uint **)(v0 + 56);
      if ( v56 )
        break;
LABEL_152:
      v69 = Function_2227224(v0, v2, &v121, v0 + 68, 20);
      if ( v69 < 0 )
        goto LABEL_270;
      if ( v69 )
      {
        v70 = Function_2227224(v0, v2, &v121, (int)"--\r\n", 4);
        if ( v70 < 0 )
          goto LABEL_270;
        if ( v70 )
        {
LABEL_174:
          if ( v121 <= 0 )
            goto LABEL_290;
          v82 = Function_2227070(v0, v2, (int)&dword_2229E20[782], v121, 0);
          if ( v82 < 0 )
            goto LABEL_270;
          if ( v82 )
          {
LABEL_290:
            v83 = 0;
            *v9 = 0;
            v123 = 0;
            v124 = 0;
            v125 = 0;
            v126 = 0;
            v84 = (int *)v9[7];
            v106 = 7;
            v121 = 0;
            while ( !*(uint *)(v0 + 4) )
            {
              if ( v83 >= 1024 )
              {
                v86 = v83 & 0x1FF;
                if ( !(v83 & 0x1FF) )
                {
                  if ( v84 )
                  {
                    v87 = ((int (__fastcall *)(int, int))dword_2229E20[126])(516, 4);
                    *v84 = v87;
                    v84 = (int *)v87;
                  }
                  else
                  {
                    v84 = (int *)((int (__fastcall *)(int, int))dword_2229E20[126])(516, 4);
                    v9[7] = (int)v84;
                  }
                  if ( !v84 )
                  {
                    v106 = 1;
                    goto LABEL_270;
                  }
                  *v84 = 0;
                }
                v85 = Function_2227024(v0, v2, (int)v84 + v86 + 4, 1, 0);
                *(&v123 + (v121 & 3)) = *((uchar *)v84 + v86 + 4);
              }
              else
              {
                v85 = Function_2227024(v0, v2, (int)v9 + v83 + 32, 1, 0);
                *(&v123 + (v121 & 3)) = *((uchar *)v9 + v121 + 32);
              }
              if ( v85 <= 0 )
              {
                v106 = 10;
                goto LABEL_270;
              }
              v83 = v121 + v85;
              v121 = v83;
              if ( *(&v123 + (((uchar)v83 - 4) & 3)) == 13
                && *(&v123 + (((uchar)v83 - 3) & 3)) == 10
                && *(&v123 + (((uchar)v83 - 2) & 3)) == 13
                && *(&v123 + (((uchar)v83 - 1) & 3)) == 10 )
              {
                *v9 = v83;
                if ( *v9 && Function_2226220(v9, (int)&dword_2229E20[782], 0, 14) )
                {
                  v88 = Function_22270e4((char *)&dword_2229E20[782], "HTTP/", 5);
                  v89 = v88 == 0;
                  if ( !v88 )
                    v89 = SLOBYTE(dword_2229E20[784]) == 32;
                  if ( v89
                    && Function_2228980(35826273, 3) >= 0
                    && Function_2226010((int)v9, 12, *v9, (int *)&v119) >= 0 )
                  {
                    v90 = Function_2226c7c(v9, (int)"Content-Length", &v120);
                    v91 = v90;
                    if ( !v90 )
                    {
                      v106 = 0;
                      goto LABEL_270;
                    }
                    if ( v90 <= 1024 )
                    {
                      if ( v90 <= 0 )
                      {
                        *(uint *)(v0 + 20) = -1;
                      }
                      else
                      {
                        if ( !Function_2226220(v9, (int)&dword_2229E20[782], v120, v90) )
                          goto LABEL_270;
                        v92 = Function_2228980(&dword_2229E20[782], v91);
                        v91 = v92;
                        if ( v92 < 0 )
                          goto LABEL_270;
                        *(uint *)(v0 + 20) = v92;
                      }
                      v93 = Function_2226c7c(v9, (int)"Connection", &v120);
                      v107 = v93;
                      if ( v93 )
                      {
                        if ( v93 >= 0 )
                        {
                          v107 = v93 <= 1024 ? (uchar)(Function_2226150(
                                                                   (int)v9,
                                                                   v120,
                                                                   v120 + v93,
                                                                   (int)"Keep-Alive",
                                                                   0) == 0) : 0;
                        }
                        else
                        {
                          v113 = BYTE1(dword_2229E20[783]);
                          v114 = HIBYTE(dword_2229E20[783]);
                          v115 = 0;
                          v107 = Function_2228980(&v113, 2) >= 11;
                        }
                        v94 = Function_2226c7c(v9, (int)"Transfer-Encoding", &v120);
                        if ( v94 )
                        {
                          if ( v94 <= 1024 )
                            v95 = v94 <= 0 ? 0 : Function_2226150((int)v9, v120, v120 + v94, (int)"chunked", 59) == 0;
                          else
                            v95 = 0;
                          if ( *(uint *)(v0 + 64) != 2 )
                          {
                            if ( v91 < 0 )
                            {
                              v106 = 10;
                              if ( v95 )
                              {
LABEL_238:
                                v123 = 0;
                                v124 = 0;
                                v121 = 0;
                                while ( Function_2227024(v0, v2, (int)&dword_2229E20[782] + v121, 1, 0) >= 0 )
                                {
                                  v97 = v121;
                                  v98 = *((char *)&dword_2229E20[782] + v121);
                                  *(&v123 + (v121 & 1)) = v98;
                                  if ( v98 == 59 || v98 == 10 && *(&v123 + (((uchar)v97 - 1) & 1)) == 13 )
                                  {
                                    if ( v98 == 10 )
                                    {
                                      v120 = v97 - 1;
                                    }
                                    else
                                    {
                                      v120 = v97;
                                      if ( Function_22272d8(v0, v2) <= 0 )
                                        goto LABEL_270;
                                    }
                                    if ( !v120 )
                                      goto LABEL_270;
                                    v1 = Function_2228898(&dword_2229E20[782], v120);
                                    if ( v1 < 0 )
                                      goto LABEL_270;
LABEL_250:
                                    if ( v121 == 1024 )
                                    {
                                      v106 = 7;
                                      goto LABEL_270;
                                    }
                                    if ( v1 <= 0 )
                                    {
                                      Function_22272d8(v0, v2);
                                      v106 = 0;
                                    }
                                    else
                                    {
                                      if ( v1 <= 0 )
                                        goto LABEL_238;
                                      while ( 1 )
                                      {
                                        v99 = Function_2226348(v0, v2, v9[1], v1, 0);
                                        if ( v99 <= 0 )
                                          break;
                                        v1 -= v99;
                                        v9[1] += v99;
                                        if ( !v1
                                          && (Function_2227024(v0, v2, (int)&dword_2229E20[782], 1, 0) <= 0
                                           || Function_2227024(v0, v2, (int)&dword_2229E20[782], 1, 0) <= 0) )
                                        {
                                          break;
                                        }
                                        if ( v1 <= 0 )
                                          goto LABEL_238;
                                      }
                                    }
                                    goto LABEL_270;
                                  }
                                  if ( ++v121 >= 1024 )
                                    goto LABEL_250;
                                }
                              }
                              else if ( !Function_222630c((int)v9, v9[1]) )
                              {
                                while ( 1 )
                                {
                                  v100 = Function_2226320(v0, v2, v9[1]);
                                  if ( v100 < 0 )
                                    break;
                                  if ( !v100 )
                                  {
                                    v106 = 0;
                                    goto LABEL_270;
                                  }
                                  v9[1] += v100;
                                  if ( Function_222630c((int)v9, v9[1]) )
                                  {
                                    v101 = Function_2227024(v0, v2, (int)&dword_2229E20[782], 1, 0);
                                    if ( v101 < 0 )
                                      goto LABEL_270;
                                    if ( v101 )
                                    {
                                      v106 = 6;
                                      goto LABEL_270;
                                    }
                                  }
                                  if ( Function_222630c((int)v9, v9[1]) )
                                    goto LABEL_270;
                                }
                              }
                            }
                            else
                            {
                              while ( v91 > 0 && !Function_222630c((int)v9, v9[1]) )
                              {
                                v96 = Function_2226348(v0, v2, v9[1], v91, 0);
                                if ( v96 < 0 )
                                  goto LABEL_270;
                                if ( !v96 )
                                  break;
                                v91 -= v96;
                                v9[1] += v96;
                              }
                              if ( v91 )
                              {
                                if ( Function_222630c((int)v9, v9[1]) )
                                  v106 = 6;
                                else
                                  v106 = 10;
                              }
                              else
                              {
                                v106 = 0;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                goto LABEL_270;
              }
            }
            goto LABEL_270;
          }
        }
      }
    }
    while ( 1 )
    {
      v57 = Function_2227224(v0, v2, &v121, v0 + 68, 20);
      if ( v57 < 0 )
        break;
      if ( !v57 )
        goto LABEL_20;
      v58 = Function_2227224(v0, v2, &v121, (int)"\r\n", 2);
      if ( v58 < 0 )
        break;
      if ( !v58 )
        goto LABEL_20;
      v59 = Function_2227224(v0, v2, &v121, (int)"Content-Disposition: form-data; name=\"", 38);
      if ( v59 < 0 )
        break;
      if ( !v59 )
        goto LABEL_20;
      v60 = Function_222714c((uchar *)v56[2]);
      if ( v60 )
      {
        v61 = Function_2227224(v0, v2, &v121, v56[2], v60);
        if ( v61 < 0 )
          break;
        if ( !v61 )
          goto LABEL_20;
      }
      v62 = Function_2227224(v0, v2, &v121, (int)"\"\r\n", 3);
      if ( v62 < 0 )
        break;
      if ( !v62 )
        goto LABEL_20;
      if ( v56[5] )
      {
        v63 = Function_2227224(
                v0,
                v2,
                &v121,
                (int)"Content-Type: application/octet-stream\r\nContent-Transfer-Encoding: binary\r\n",
                75);
        if ( v63 < 0 )
          break;
        if ( !v63 )
          goto LABEL_20;
      }
      v64 = Function_2227224(v0, v2, &v121, (int)"\r\n", 2);
      if ( v64 < 0 )
        break;
      if ( !v64 )
        goto LABEL_20;
      if ( v56[4] )
      {
        v65 = Function_2227224(v0, v2, &v121, v56[3], v56[4]);
        if ( v65 < 0 )
          break;
        if ( !v65 )
          goto LABEL_20;
      }
      v66 = Function_2227224(v0, v2, &v121, (int)"\r\n", 2);
      if ( v66 < 0 )
        break;
      if ( !v66 )
        goto LABEL_20;
      v67 = **(uint ***)(v0 + 56);
      v68 = v56 == v67;
      if ( v56 != v67 )
      {
        v56 = (uint *)v56[1];
        v68 = v56 == 0;
      }
      if ( v68 )
        goto LABEL_152;
    }
LABEL_270:
    Function_2225e38();
    ((void (__fastcall *)(int))dword_2229E20[127])(dword_2229E20[128]);
    dword_2229E20[128] = 0;
    Function_2225e4c();
    if ( *(uint *)(v0 + 4) )
      v106 = 8;
    if ( v2 >= 0 && (!v107 || v106) )
    {
      Function_2226f5c();
      if ( v102 < 0 )
        v106 = 10;
      Function_22273a0(v2, (int **)&v122);
      v2 = -1;
      v107 = 0;
    }
    if ( v106 )
    {
      v9[2] = 0;
      dword_2229E20[125] = v106;
    }
    else
    {
      v9[2] = 1;
    }
    v103 = *(uint *)(v0 + 44);
    v104 = *(void (__fastcall **)(int, int *, int))(v0 + 60);
    Function_2226998((uint *)v0);
    v104(v106, v9, v103);
  }
  while ( !dword_2229E20[129] );
LABEL_283:
  if ( v2 >= 0 )
  {
    Function_2226f5c();
    Function_22273a0(v2, (int **)&v122);
  }
  return Function_2227440();
}

//----- (022287A0) --------------------------------------------------------
int __fastcall Function_22287a0(char *a1)
{
  char *v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v3 = *a1;
  v1 = a1 + 1;
  v2 = v3;
  v4 = 0;
  if ( v3 )
  {
    do
    {
      if ( (v2 < 48 || v2 > 57) && (v2 < 65 || v2 > 90) && (v2 < 97 || v2 > 122) && v2 != 32 )
        v4 += 3;
      else
        ++v4;
      v5 = *v1++;
      v2 = v5;
    }
    while ( v5 );
  }
  return v4;
}

//----- (02228808) --------------------------------------------------------
int __fastcall Function_2228808(uchar *a1, int a2)
{
  int result;
  int v3;
  char v4;
  int v5;
  bool v6;
  uchar v7;

  if ( a2 == 32 )
  {
    *a1 = 43;
    result = 1;
  }
  else if ( (a2 < 48 || a2 > 57) && (a2 < 65 || a2 > 90) && (a2 < 97 || a2 > 122) )
  {
    v3 = (a2 >> 4) & 0xF;
    *a1 = 37;
    if ( v3 >= 10 )
      v4 = v3 + 55;
    else
      v4 = v3 + 48;
    v5 = a2 & 0xF;
    v7 = __OFSUB__(v5, 10);
    v6 = v5 - 10 < 0;
    if ( v5 < 10 )
      LOBYTE(v5) = v5 + 48;
    a1[1] = v4;
    if ( !(v6 ^ v7) )
      LOBYTE(v5) = v5 + 55;
    a1[2] = v5;
    result = 3;
  }
  else
  {
    *a1 = a2;
    result = 1;
  }
  return result;
}

//----- (02228898) --------------------------------------------------------
int __fastcall Function_2228898(char *a1, int a2)
{
  int v3;
  int v4;
  int i;
  int v6;
  int v7;
  bool v8;
  bool v9;

  if ( a2 > 8 )
    return -1;
  if ( a2 == 8 && *a1 > 55 )
    return -1;
  v3 = 0;
  v4 = 0;
  for ( i = 0; v3 < a2; ++v3 )
  {
    v6 = a1[v3];
    v7 = 0;
    if ( v6 >= 65 && v6 <= 90 )
      v7 = 1;
    if ( v7 )
      LOBYTE(v6) = v6 + 32;
    if ( (char)v6 < 48 || (char)v6 > 57 )
    {
      if ( (char)v6 < 97 || (char)v6 > 102 )
      {
        if ( i )
        {
          v8 = (char)v6 == 32;
          if ( (char)v6 != 32 )
            v8 = (char)v6 == 0;
          if ( v8 )
            return v4;
        }
        v9 = i == 0;
        if ( !i )
          v9 = (char)v6 == 32;
        if ( !v9 )
          return -1;
      }
      else
      {
        i = 1;
        v4 = (char)v6 + 16 * v4 - 87;
      }
    }
    else
    {
      i = 1;
      v4 = (char)v6 + 16 * v4 - 48;
    }
  }
  return v4;
}

//----- (02228980) --------------------------------------------------------
int __fastcall Function_2228980(int a1, int a2)
{
  int v3;
  int v4;
  int i;
  int v6;
  bool v7;
  bool v8;
  int v9;
  int v10;
  bool v11;
  uchar v12;

  if ( a2 > 10 )
    return -1;
  v3 = 0;
  v4 = 0;
  for ( i = 0; v3 < a2; ++v3 )
  {
    v6 = *(char *)(a1 + v3);
    if ( i )
    {
      v7 = v6 == 32;
      if ( v6 != 32 )
        v7 = v6 == 0;
      if ( v7 )
        break;
    }
    v8 = i == 0;
    if ( !i )
      v8 = v6 == 32;
    if ( !v8 )
    {
      if ( v6 < 48 || v6 > 57 )
        return -1;
      v9 = v6 + 10 * v4;
      v10 = v4;
      v4 = v9 - 48;
      v12 = __OFSUB__(v10, v9 - 48);
      v7 = v10 == v9 - 48;
      v11 = v10 - (v9 - 48) < 0;
      i = 1;
      if ( !((uchar)(v11 ^ v12) | v7) )
        return -1;
    }
  }
  return v4;
}

//----- (02228A18) --------------------------------------------------------
int __fastcall Function_2228a18(int a1, uint a2)
{
  int v2;
  uint v3;
  int v4;
  int v5;
  int v6;
  uint v7;
  int v8;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;

  v2 = a1;
  v3 = a2;
  v10 = 1000000000;
  v11 = 100000000;
  v12 = 10000000;
  v13 = 1000000;
  v14 = 100000;
  v15 = 10000;
  v16 = 1000;
  v17 = 100;
  v4 = 0;
  v18 = 10;
  v5 = 0;
  v6 = 0;
  do
  {
    v7 = *(&v10 + v5);
    if ( v3 < v7 )
    {
      if ( v6 )
      {
        if ( v2 )
          *(uchar *)(v2 + v4) = 48;
        ++v4;
      }
    }
    else
    {
      v8 = u32_div_f(v3, *(&v10 + v5));
      if ( v2 )
        *(uchar *)(v2 + v4) = v8 + 48;
      v6 = 1;
      v3 -= v8 * v7;
      ++v4;
    }
    ++v5;
  }
  while ( v5 < 9 );
  if ( v2 )
    *(uchar *)(v2 + v4) = v3 + 48;
  return v4 + 1;
}

//----- (02228AD4) --------------------------------------------------------
int __fastcall Function_2228ad4(uchar *a1, char *a2)
{
  bool v2;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  while ( 1 )
  {
    v4 = *a2;
    v5 = 0;
    if ( v4 >= 65 && v4 <= 90 )
      v5 = 1;
    v6 = (char)*a1;
    if ( v5 )
      v4 += 32;
    v7 = 0;
    if ( v6 >= 65 && v6 <= 90 )
      v7 = 1;
    v8 = v7 ? v6 + 32 : (char)*a1;
    if ( v8 != v4 )
      break;
    v2 = v6 == 0;
    if ( *a1 )
      v2 = v6 == 32;
    if ( v2 )
      return 0;
    ++a1;
    ++a2;
  }
  return -1;
}

//----- (02228B58) --------------------------------------------------------
int __fastcall Function_2228b58(char *a1, int a2)
{
  int v2;
  bool v3;
  int v4;
  int v5;
  int v6;
  int result;

  v2 = 0;
  v3 = a2 == 0;
  v4 = 0;
  v5 = a2 - 1;
  if ( v3 )
  {
LABEL_9:
    if ( !v2 )
      v4 = -1;
    result = v4;
  }
  else
  {
    while ( 1 )
    {
      v6 = *a1;
      if ( v6 != 32 && v6 >= 48 && v6 <= 57 )
      {
        ++v2;
        v4 = v6 + 10 * v4 - 48;
        if ( v2 > 9 )
          break;
      }
      v3 = v5 == 0;
      ++a1;
      --v5;
      if ( v3 )
        goto LABEL_9;
    }
    result = -1;
  }
  return result;
}

//----- (02228BC8) --------------------------------------------------------
int __fastcall Function_2228bc8(int a1, int a2, char *a3, int a4)
{
  int v5;
  int v6;
  int i;

  if ( a2 < a4 )
    return -1;
  v5 = a2 - a4 + 1;
  v6 = 0;
  if ( v5 <= 0 )
    return -1;
  while ( 1 )
  {
    if ( *a3 == *(char *)(a1 + v6) )
    {
      for ( i = 1; i < a4; ++i )
      {
        if ( *(char *)(a1 + v6 + i) != a3[i] )
          break;
      }
      if ( i == a4 )
        break;
    }
    if ( ++v6 >= v5 )
      return -1;
  }
  return 0;
}

