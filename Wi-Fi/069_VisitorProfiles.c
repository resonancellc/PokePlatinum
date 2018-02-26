//----- (0225C700) --------------------------------------------------------
int __fastcall Function_225c700(int a1, int a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int *v6;
  int v7;
  int *v8;
  int v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a1;
  v5 = (uint *)LoadPtrToOverWorldDataIn18(a1);
  Function_2017fc8(3, 105, 327680);
  v6 = (int *)MallocSomeDataAndStorePtrInOverlayData1c(v4, 50980, 0x69u);
  Call_FillMemWithValue(v6, 0, 0xC724u);
  v6[3] = Function_202c878(v5[1]);
  v6[4] = LoadPlayerDataAdress(v5[1]);
  v6[5] = Function_202c8c0(v6[3]);
  v6[6] = Function_202c8c4(v6[3]);
  v6[7] = v5[2];
  Function_225d2a8(v6, v5);
  Function_225d318(v6 + 8, v6[4], 105);
  Function_225d6d8(v6 + 94, v6 + 8, 105);
  Function_225ef1c(v6 + 90, 105);
  v11 = 105;
  v7 = v6[2];
  v8 = &v10 - 1;
  *v8 = v6[1];
  v8[1] = v7;
  Function_225d7a0(v6 + 137, *v5, v6 + 8, *(&v10 - 1));
  Function_225da74(v6 + 12531, v6[1], v6[2], 105);
  Function_225dbb4(v6 + 12536, v6 + 8, v6 + 90, 105);
  v10 = 105;
  Function_225dd60(v6 + 12736, v6 + 8, v6 + 90, v5[1], 105);
  Function_225dec0(v6 + 12547, v6 + 8, v6 + 90, 105);
  Function_225d030(v6, v5);
  SetMainLoopFunctionCall((int)Function_225cf90, (int)v6);
  Function_20177a4();
  return 1;
}

//----- (0225C820) --------------------------------------------------------
int __fastcall Function_225c820(int a1, uint *a2)
{
  int v2;
  uint *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = LoadOverlayData1c(a1);
  v5 = LoadPtrToOverWorldDataIn18(v2);
  switch ( (uchar)*v3 )
  {
    case 0u:
      Function_200f174(0, 1, 1, 0, 6, 1, 105);
      ((void (__fastcall *)(uint, int))dword_222E31C[0])(*(uint *)(v5 + 12), 1);
      ++*v3;
      goto LABEL_14;
    case 1u:
      if ( Function_200f2ac() == 1 )
        ++*v3;
      goto LABEL_14;
    case 2u:
      v6 = Function_225ce64(v4);
      Function_225cf30(v4);
      v7 = ((int (__fastcall *)(uint))dword_222E12C[0])(*(uint *)(v5 + 12));
      if ( v7 == 1 )
      {
        v7 = ((int (__fastcall *)(uint))dword_222E2A4[0])(*(uint *)(v5 + 12));
        v6 = 1;
      }
      if ( ((int (__fastcall *)(int))dword_2231760[0])(v7) == 1 )
        v6 = 1;
      if ( v6 == 1 )
        *v3 = 5;
      goto LABEL_14;
    case 5u:
      Function_200f174(0, 0, 0, 0, 6, 1, 105);
      ++*v3;
      goto LABEL_14;
    case 6u:
      if ( Function_200f2ac() != 1 )
        goto LABEL_14;
      result = 1;
      break;
    default:
LABEL_14:
      Function_225cf50(v4);
      result = 0;
      break;
  }
  return result;
}

//----- (0225C8FC) --------------------------------------------------------
int __fastcall Function_225c8fc(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  LoadPtrToOverWorldDataIn18(v1);
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  Function_225dfbc(v2 + 50188, v2 + 32);
  Function_225ddc8(v2 + 50944);
  Function_225dc48(v2 + 50144);
  Function_225daec(v2 + 50124);
  Function_225d71c(v2 + 376);
  Function_225d838(v2 + 548);
  Function_225ef54(v2 + 360);
  Function_225d35c(v2 + 32);
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(105);
  return 1;
}

//----- (0225C980) --------------------------------------------------------
uint __fastcall Function_225c980(uint *a1, int a2, uint a3, int a4)
{
  uint *v4;
  int *v5;
  int v6;
  int v7;
  ushort *i;
  int v9;
  int v10;
  int v11;
  short *j;
  ushort v13;
  int v15;
  int v16;
  int v17;
  int v18;
  uint *v19;
  uint *v20;
  int *v21;
  uint v22;
  int v23;
  int v24;

  v24 = a4;
  v4 = a1;
  v15 = a2;
  v16 = a3;
  v5 = LoadFromNARC_8(102, a3, a3, a4);
  *v4 = 0;
  v21 = v5;
  v20 = Function_2007250((int)v5, 0x12u, 0, v16, 0, &v23);
  v6 = u32_div_f(v23, 6);
  v7 = 1;
  for ( i = (ushort *)((char *)v20 + 6); v7 < v6; i += 3 )
  {
    if ( *i != 2 )
    {
      Function_225ca7c(v4, *v4, (short)i[1], (short)i[2], (ushort)v7, 0, v15);
      ++*v4;
    }
    ++v7;
  }
  free((int)v20);
  v9 = 1;
  v18 = Function_20996d0();
  if ( v18 > 1 )
  {
    do
    {
      v10 = Function_2099764(v9);
      v19 = Function_2007250((int)v21, v10, 0, v16, 0, (int *)&v22);
      v11 = 1;
      v17 = v22 >> 2;
      for ( j = (short *)(v19 + 1); v11 < v17; j += 2 )
      {
        v13 = Function_2099748(v9);
        Function_225ca7c(v4, *v4, *j, j[1], v13, (ushort)v11++, v15);
        ++*v4;
      }
      free((int)v19);
      ++v9;
    }
    while ( v9 < v18 );
  }
  return Call_FS_CloseFile(v21);
}

//----- (0225CA7C) --------------------------------------------------------
int __fastcall Function_225ca7c(int a1, int a2, int a3, int a4, short a5, ushort a6, int a7)
{
  int *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  char *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  char *v18;
  uint *v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int result;
  int v25;
  int v26;
  int v27;
  char v28;
  int v29;

  v29 = a4;
  v7 = dword_225F09C;
  v8 = a3;
  v9 = a4;
  v10 = a1;
  v11 = a2;
  v12 = &v28;
  v13 = 4;
  do
  {
    v14 = *v7;
    v15 = v7[1];
    v7 += 2;
    *(uint *)v12 = v14;
    *((uint *)v12 + 1) = v15;
    v12 += 8;
    --v13;
  }
  while ( v13 );
  *(uint *)v12 = *v7;
  v16 = 48 * v11;
  v17 = v10 + 48 * v11;
  *(ushort *)(v17 + 4) = v8;
  *(ushort *)(v17 + 6) = v9;
  v27 = 0;
  v25 = v8;
  v26 = v9;
  Function_225cb6c(&v28, &v25);
  v18 = &v28;
  v19 = (uint *)(v10 + v16 + 8);
  v20 = 4;
  do
  {
    v21 = *(uint *)v18;
    v22 = *((uint *)v18 + 1);
    v18 += 8;
    *v19 = v21;
    v19[1] = v22;
    v19 += 2;
    --v20;
  }
  while ( v20 );
  *v19 = *(uint *)v18;
  if ( a7 )
    *(ushort *)(v10 + v16 + 44) = Function_225d91c();
  v23 = v10 + v16;
  *(ushort *)(v23 + 46) = a5;
  result = a6;
  *(ushort *)(v23 + 48) = a6;
  return result;
}

//----- (0225CAF4) --------------------------------------------------------
int __fastcall Function_225caf4(int *a1, uint *a2)
{
  uint *v2;
  int *v3;
  int v4;
  int v5;
  char v7;

  v2 = a2;
  v3 = a1;
  MTX_RotY33_(
    a1,
    SLOWORD(Unknown_20f983c[(a2[1] & 0xFFFF) >> 4]),
    *((short *)Unknown_20f983c + 2 * ((a2[1] & 0xFFFF) >> 4) + 1));
  MTX_RotX33_(
    &v7,
    SLOWORD(Unknown_20f983c[(*v2 & 0xFFFF) >> 4]),
    *((short *)Unknown_20f983c + 2 * ((*v2 & 0xFFFF) >> 4) + 1));
  MTX_Concat33(v3, (int *)&v7, v3, v4);
  MTX_RotZ33_(
    &v7,
    SLOWORD(Unknown_20f983c[(v2[2] & 0xFFFF) >> 4]),
    *((short *)Unknown_20f983c + 2 * ((v2[2] & 0xFFFF) >> 4) + 1));
  return MTX_Concat33(v3, (int *)&v7, v3, v5);
}

//----- (0225CB6C) --------------------------------------------------------
int __fastcall Function_225cb6c(int *a1, uint *a2)
{
  uint *v2;
  int *v3;
  int v4;
  int v5;
  char v7;

  v2 = a2;
  v3 = a1;
  MTX_RotY33_(
    a1,
    SLOWORD(Unknown_20f983c[(*a2 & 0xFFFF) >> 4]),
    *((short *)Unknown_20f983c + 2 * ((*a2 & 0xFFFF) >> 4) + 1));
  MTX_RotX33_(
    &v7,
    SLOWORD(Unknown_20f983c[(0xFFFF * v2[1] & 0xFFFF) >> 4]),
    *((short *)Unknown_20f983c + 2 * ((0xFFFF * v2[1] & 0xFFFF) >> 4) + 1));
  MTX_Concat33(v3, (int *)&v7, v3, v4);
  MTX_RotZ33_(
    &v7,
    *((short *)Unknown_20f983c + 2 * ((v2[2] & 0xFFFF) >> 4) + 1),
    SLOWORD(Unknown_20f983c[(v2[2] & 0xFFFF) >> 4]));
  return MTX_Concat33(v3, (int *)&v7, v3, v5);
}

//----- (0225CBE4) --------------------------------------------------------
int *__fastcall Function_225cbe4(int a1, int a2, int *a3, int a4, int *a5, int *a6)
{
  int v6;
  int v7;
  int *v8;
  int *v9;
  int v10;
  int v11;
  int *result;

  v6 = a2;
  v7 = 0;
  v8 = a3;
  v9 = (int *)a4;
  v10 = 0;
  LOBYTE(a4) = 0;
  LOBYTE(v11) = 0;
  if ( (ushort)word_21BF6D8 != 0xFFFF )
  {
    a4 = (ushort)word_21BF6D8 - a1;
    if ( a4 >= 0 )
    {
      if ( a4 > 0 )
        v7 = 32;
    }
    else
    {
      LOBYTE(a4) = ~(uchar)a4;
      v7 = 16;
    }
  }
  *v8 = v7;
  *v9 = a4 & 0x3F;
  if ( (ushort)word_21BF6DA != 0xFFFF )
  {
    v11 = (ushort)word_21BF6DA - v6;
    if ( v11 >= 0 )
    {
      if ( v11 > 0 )
        v10 = 64;
    }
    else
    {
      LOBYTE(v11) = ~(uchar)v11;
      v10 = 128;
    }
  }
  *a5 = v10;
  result = a6;
  *a6 = v11 & 0x3F;
  return result;
}

//----- (0225CC54) --------------------------------------------------------
int __fastcall Function_225cc54(int a1, char a2, char a3, int a4)
{
  int v4;
  char v5;
  char v6;
  char v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int result;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;

  v19 = a4;
  v4 = a1;
  v16 = 0;
  v5 = a2;
  v6 = a3;
  Function_225d780(a1 + 376, &v17);
  v7 = Function_225dd10(v4 + 50144, 0);
  v15 = Function_225dd10(v4 + 50144, 1);
  v8 = Function_225dd10(v4 + 50144, 2);
  v9 = Function_225dbb0(v4 + 50124);
  v10 = (short)v18;
  v11 = (short)v17;
  if ( v5 & 1 || v7 & 1 )
  {
    if ( (*(uint *)(v4 + 4) & 1) == 1 )
      v16 = 1;
    result = v16;
  }
  else
  {
    if ( v9 )
    {
      if ( v15 || v8 )
      {
        v13 = 10 * v15 & 0xFFFF;
        v14 = 10 * v8 & 0xFFFF;
      }
      else
      {
        v13 = 32;
        v14 = 32;
      }
    }
    else if ( v15 || v8 )
    {
      v13 = 85 * v15 & 0xFFFF;
      v14 = 85 * v8 & 0xFFFF;
    }
    else
    {
      v13 = 512;
      v14 = 512;
    }
    if ( v6 & 0x20 || v7 & 0x20 )
    {
      if ( (*(uint *)(v4 + 4) & 1) == 1 )
      {
        v18 += v13;
      }
      else if ( (short)v18 < -10208 )
      {
        v18 += v13;
      }
    }
    if ( v6 & 0x10 || v7 & 0x10 )
    {
      if ( (*(uint *)(v4 + 4) & 1) == 1 )
      {
        v18 -= v13;
      }
      else if ( v10 > -13184 )
      {
        v18 -= v13;
      }
    }
    if ( v6 & 0x40 || v7 & 0x40 )
    {
      if ( (*(uint *)(v4 + 4) & 1) == 1 )
      {
        if ( (short)v17 + v14 >= 15872 )
          v17 = 15872;
        else
          v17 += v14;
      }
      else if ( (short)v17 < 8224 )
      {
        v17 += v14;
      }
    }
    if ( v6 & 0x80 || v7 & 0x80 )
    {
      if ( (*(uint *)(v4 + 4) & 1) == 1 )
      {
        if ( v11 - v14 <= -15872 )
          v17 = -15872;
        else
          v17 -= v14;
      }
      else if ( v11 > 4864 )
      {
        v17 -= v14;
      }
    }
    Function_225d790(v4 + 376, &v17);
    result = 0;
  }
  return result;
}

//----- (0225CE0C) --------------------------------------------------------
uint __fastcall Function_225ce0c(int *a1)
{
  int *v1;
  int v2;
  int v3;
  int v4;
  uint result;
  int v6;

  v1 = a1;
  v2 = *a1;
  if ( v2 < 0 )
  {
    if ( v2 < 0 )
      v2 = -v2;
    *v1 += 0xFFFF * (s32_div_f(v2, 0xFFFF) + 1);
  }
  else
  {
    s32_div_f(v2, 0xFFFF);
    *v1 = v3;
  }
  v4 = v1[1];
  if ( v4 < 0 )
  {
    if ( v4 < 0 )
      v4 = -v4;
    result = v1[1] + 0xFFFF * (s32_div_f(v4, 0xFFFF) + 1);
    v1[1] = result;
  }
  else
  {
    result = s32_div_f(v4, 0xFFFF);
    v1[1] = v6;
  }
  return result;
}

//----- (0225CE64) --------------------------------------------------------
int __fastcall Function_225ce64(ushort *a1)
{
  ushort *v1;
  int v2;
  int v3;

  v1 = a1;
  switch ( (uchar)*a1 )
  {
    case 0u:
      v2 = Function_225cf9c();
      if ( v2 )
      {
        if ( v2 == 1 )
        {
          Function_225db00(v1 + 25062);
          *v1 = 1;
        }
        else if ( v2 == 2 )
        {
          *v1 = 2;
        }
      }
      return 0;
    case 1u:
      if ( Function_225db2c(a1 + 25062, a1 + 274) == 1 )
        *v1 = 0;
      return 0;
    case 2u:
      Function_225ddfc(a1 + 25472);
      Function_225e084(v1 + 25094);
      Function_225dd2c(v1 + 25072);
      ++*v1;
      return 0;
    case 3u:
      v3 = Function_225de40(a1 + 25472);
      if ( !v3 )
        return 0;
      if ( v3 == 1 || v3 != 2 )
        return 1;
      Function_225e0a0(v1 + 25094);
      Function_225dea0(v1 + 25472);
      Function_225dd44(v1 + 25072);
      *v1 = 0;
      return 0;
    default:
      ErrorHandler();
      return 0;
  }
}

//----- (0225CF30) --------------------------------------------------------
int __fastcall Function_225cf30(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = *(ushort *)(a1 + 2);
  if ( !result )
    result = Function_225e00c(v1 + 50188, v1 + 360, v1 + 32);
  return result;
}

//----- (0225CF50) --------------------------------------------------------
int __fastcall Function_225cf50(int a1)
{
  int v1;

  v1 = a1;
  Call_G3X_Reset();
  Function_225daf8(v1 + 50124);
  Function_225d728(v1 + 376);
  Function_225d854(v1 + 548, v1 + 376);
  Function_225d384(v1 + 32);
  return Function_20241bc(0, 1);
}

//----- (0225CF90) --------------------------------------------------------
int __fastcall Function_225cf90(int a1)
{
  return Function_225d390(a1 + 32);
}

//----- (0225CF9C) --------------------------------------------------------
int __fastcall Function_225cf9c(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;
  char v5;
  int v6;
  int v7;

  v2 = a1;
  Function_225dc54(a1 + 50144);
  if ( *(uint *)(v2 + 50144) & 2 )
  {
    Function_2005748(0x5DDu);
    result = 2;
  }
  else
  {
    if ( dword_21BF6C4 & 0x400 )
    {
      if ( Function_225d088(v2, &v5) == 1 && !Function_225e0f8(v2 + 50188, &v5) )
      {
        if ( Function_225e0c0(v2 + 50188, &v5) )
        {
          Function_225d268(v2, (uchar)v6, (uchar)v7);
          Function_2005748(0x5BFu);
        }
      }
    }
    else
    {
      v1 = Function_225cc54(v2, dword_21BF6C4, dword_21BF6C0, v3);
    }
    result = v1;
  }
  return result;
}

//----- (0225D030) --------------------------------------------------------
uint __fastcall Function_225d030(int a1, uint *a2)
{
  int v2;
  uint *v3;
  uint result;
  uchar v5;
  uchar v6;
  uchar v7;

  v2 = a1;
  v3 = a2;
  result = Function_225d268(a1, *(uint *)(a1 + 20) & 0xFF, *(uint *)(a1 + 24) & 0xFF);
  if ( !result )
  {
    result = Function_225efec(*v3);
    v5 = result;
    if ( result != 50 )
    {
      v6 = ((int (__fastcall *)(uint, uint))dword_223113C[295])(*v3, (uchar)result);
      v7 = ((int (__fastcall *)(uint, uint))dword_223113C[304])(*v3, v5);
      result = Function_225d268(v2, v6, v7);
      if ( result != 1 )
        result = ErrorHandler();
    }
  }
  return result;
}

//----- (0225D088) --------------------------------------------------------
int __fastcall Function_225d088(int a1, uint *a2)
{
  int v2;
  uint *v3;
  uint v4;

  v2 = a1;
  v3 = a2;
  v4 = Function_225d0d8();
  if ( v4 >= Function_225da70(v2 + 548) )
    return 0;
  *v3 = Function_225d1e0(v2, v4, *(uint *)(v2 + 28));
  v3[1] = Function_225da38(v2 + 548, v4);
  v3[2] = Function_225da54(v2 + 548, v4);
  return 1;
}

//----- (0225D0D8) --------------------------------------------------------
uint __fastcall Function_225d0d8(int a1, int a2, int a3, int a4)
{
  int v4;
  uint v5;
  uint v6;
  int v7;
  uint v8;
  int v10;
  int v11;
  int v12;
  int v13;
  uint v14;
  uint v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;

  v20 = a4;
  v4 = a1;
  v15 = Function_225da70(a1 + 548);
  Function_225d780(v4 + 376, &v18);
  v13 = (short)(v18 - 128);
  v12 = (short)(v18 + 128);
  v11 = (short)(v19 - 128);
  v10 = (short)(v19 + 128);
  v5 = 256;
  v6 = 0;
  v14 = v15;
  if ( v15 )
  {
    do
    {
      Function_225d9f0(v4 + 548, &v16, v6);
      v7 = Function_225da1c(v4 + 548, v6);
      if ( v16 > v13 && v16 < v12 && v17 > v11 && v17 < v10 && v7 != 3 )
      {
        Function_225ce0c(&v18);
        Function_225ce0c(&v16);
        v8 = Function_225d194(&v18, &v16);
        if ( v8 < v5 )
        {
          v5 = v8;
          v14 = v6;
        }
      }
      ++v6;
    }
    while ( v6 < v15 );
  }
  return v14;
}

//----- (0225D194) --------------------------------------------------------
int __fastcall Function_225d194(uint *a1, uint *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = *a1 - *a2;
  if ( v2 < 0 )
    v2 = *a2 - *a1;
  v3 = a1[1];
  v4 = a2[1];
  v5 = v3 - v4;
  if ( v3 - v4 < 0 )
    v5 = v4 - v3;
  if ( v2 > (int)Function_201d278(0xB4u) )
    v2 = 0xFFFF - v2;
  if ( v5 > (int)Function_201d278(0xB4u) )
    v5 = 0xFFFF - v5;
  return (int)FX_Sqrt((v2 * v2 + v5 * v5) << 12) >> 12;
}

//----- (0225D1E0) --------------------------------------------------------
int Function_225d1e0()
{
  return Function_225d1e2();
}

//----- (0225D1E2) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0225D268) --------------------------------------------------------
int __fastcall Function_225d268(int a1, int a2, int a3)
{
  int v3;
  char v5;
  int v6;
  char v7;
  int v8;

  v3 = a1;
  if ( Function_225d984(a1 + 548, a2, a3, &v7) == 3 )
    return 0;
  Function_225d780(v3 + 376, &v5);
  v8 = v6;
  Function_225d790(v3 + 376, &v7);
  return 1;
}

//----- (0225D2A8) --------------------------------------------------------
int __fastcall Function_225d2a8(int result, uint *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  *(uint *)(result + 4) &= 0xFFFFFFFC;
  v2 = *(uint *)(result + 4);
  if ( CountryOfOriginValue == 1 )
    *(uint *)(result + 4) = v2 | 2;
  else
    *(uint *)(result + 4) = v2 & 0xFFFFFFFD;
  v3 = *(uint *)(result + 4);
  if ( (uint)(v3 << 30) >> 31 == 1 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      if ( (uint)*(uchar *)(*a2 + v5 + 3) << 24 >> 28 == 1 && *(ushort *)(*a2 + v5) != 103 )
        *(uint *)(result + 4) = *(uint *)(result + 4) & 0xFFFFFFFE | 1;
      ++v4;
      v5 += 4;
    }
    while ( v4 < 50 );
  }
  else
  {
    *(uint *)(result + 4) = v3 & 0xFFFFFFFE | 1;
  }
  return result;
}

//----- (0225D318) --------------------------------------------------------
int __fastcall Function_225d318(int a1, int a2, uint a3, int a4)
{
  uint v4;
  int v5;
  int v6;

  v4 = a3;
  v5 = a1;
  v6 = a2;
  *(uint *)(a1 + 324) = LoadFromNARC_8(163, a3, a3, a4);
  Function_201dbec(64, v4);
  GX_SetBanks(&dword_225F0BC[1]);
  Function_225d3a4(v5, v6, v4);
  Function_225d53c(v5, v4);
  return Function_225d604(v5, v4);
}

//----- (0225D35C) --------------------------------------------------------
int __fastcall Function_225d35c(int a1)
{
  int v1;

  v1 = a1;
  Call_FS_CloseFile(*(int **)(a1 + 324));
  Function_201dc3c();
  Function_225d504(v1);
  Function_225d5d8(v1);
  return Function_225d63c(v1);
}

//----- (0225D384) --------------------------------------------------------
int __fastcall Function_225d384(int a1)
{
  return Function_20219f8(*(uint *)(a1 + 4));
}

//----- (0225D390) --------------------------------------------------------
int __fastcall Function_225d390(int *a1)
{
  Function_201c2b8(*a1);
  Function_200a858();
  return Function_201dcac();
}

//----- (0225D3A4) --------------------------------------------------------
uint __fastcall Function_225d3a4(int a1, ushort *a2, uint a3)
{
  int v3;
  uint v4;
  int *v5;
  int *v6;
  uint v7;
  uint v8;
  ushort *v10;
  int v11;

  v3 = a1;
  v4 = a3;
  v10 = a2;
  SetGraphicsModes(dword_225F040);
  *(uint *)v3 = Function_2018340(v4);
  byte_21BF6E1 = 1;
  Function_201ffe8();
  v5 = &dword_225F118[15];
  v6 = &dword_225F060;
  v11 = 0;
  do
  {
    Function_20183c4(*(uint **)v3, *v6 & 0xFF, v5, 0);
    Function_2019690(*v6 & 0xFF, 32, 0, v4);
    Function_2019ebc(*(uint **)v3, *v6 & 0xFF);
    v5 += 7;
    ++v6;
    ++v11;
  }
  while ( v11 < 5 );
  Function_2007130(*(uint *)(v3 + 324), 5u, 4u, 0, 0, v4);
  Function_20070e8(*(uint *)(v3 + 324), 0xBu, *(uint **)v3, 4u, 0, 0, 0, v4);
  Function_200710c(*(uint *)(v3 + 324), 0xCu, *(uint **)v3, 4u, 0, 0, 0, v4);
  Function_20070e8(*(uint *)(v3 + 324), 4u, *(uint **)v3, 6u, 0, 0, 0, v4);
  Function_200710c(*(uint *)(v3 + 324), 0x12u, *(uint **)v3, 7u, 0, 0, 0, v4);
  LoadFromNARC_PlFont2(0, 32, v4);
  LoadFromNARC_PlFont2(4u, 352, v4);
  Function_200daa4(*(uint **)v3, 1u, 31, 0, 0, v4);
  Function_200daa4(*(uint **)v3, 1u, 31, 0, 0, v4);
  v7 = Function_2027b50(v10) << 24;
  v8 = v7 >> 24;
  Function_200dd0c(*(uint **)v3, 4u, 10, 10, HIBYTE(v7), v4);
  Function_200dd0c(*(uint **)v3, 1u, 1, 2, v8, v4);
  return Function_201975c(0, 29386);
}

//----- (0225D504) --------------------------------------------------------
uint __fastcall Function_225d504(int *a1)
{
  int *v1;
  int *v2;
  int v3;

  v1 = &dword_225F060;
  v2 = a1;
  v3 = 0;
  do
  {
    Function_2019044(*v2, *v1 & 0xFF);
    ++v3;
    ++v1;
  }
  while ( v3 < 5 );
  free(*v2);
  byte_21BF6E1 = 0;
  return Function_201ffe8();
}

//----- (0225D53C) --------------------------------------------------------
uint __fastcall Function_225d53c(int a1, uint a2)
{
  int v2;
  uint v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int *v8;

  v2 = a1;
  v3 = a2;
  Function_20a7944();
  Function_200a784(0, 126, 0, 31, 0, 0x7Eu, 0, 0x1Fu, v3);
  Function_201e88c(&dword_225F04C[1], 16, 16);
  Function_201f834(32, v3);
  Function_201e994();
  Function_201f8e4();
  Function_200966c(1, 16, v4, v5);
  Function_2009704(1);
  *(uint *)(v2 + 4) = Function_20095c4(32, v2 + 8, v3, v6);
  Function_200964c(v2 + 8, 0, 0x100000, v7);
  v8 = 0;
  do
  {
    *(uint *)(v2 + 304) = Function_2009714(32, v8, v3);
    v8 = (int *)((char *)v8 + 1);
    v2 += 4;
  }
  while ( (int)v8 < 4 );
  Function_2039734();
  Function_201ff0c(0x10u, 1);
  return Function_201ff74(0x10u, 1);
}

//----- (0225D5D8) --------------------------------------------------------
int *__fastcall Function_225d5d8(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  Function_2021964(*(int **)(a1 + 4));
  v2 = 0;
  do
  {
    Function_2009754(*(int **)(v1 + 304));
    ++v2;
    v1 += 4;
  }
  while ( v2 < 4 );
  Function_201e958();
  Function_201f8b4();
  return Function_200a878();
}

//----- (0225D604) --------------------------------------------------------
int __fastcall Function_225d604(int a1, uint a2)
{
  *(uint *)(a1 + 320) = Function_2024220(a2, 0, 2, 0, 4, (void (*)(void))Function_225d64c);
  return Function_20af51c(0, 0, 0, -4095);
}

//----- (0225D63C) --------------------------------------------------------
uint __fastcall Function_225d63c(int a1)
{
  return Function_20242c4(*(uint *)(a1 + 320));
}

//----- (0225D64C) --------------------------------------------------------
int *Function_225d64c()
{
  int *result;

  Function_201ff0c(1u, 1);
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 1;
  GFX_CONTROL &= 0xCFFDu;
  GFX_CONTROL = GFX_CONTROL & 0xCFFF | 0x10;
  GFX_CONTROL &= 0xCFFBu;
  GFX_CONTROL = GFX_CONTROL & 0xCFFF | 8;
  GFX_CONTROL = GFX_CONTROL & 0xCFFF | 0x20;
  G3X_SetFog(0, 0, 0, 0);
  G3X_SetClearColor(27482, 0, 0x7FFF, 63, 0);
  result = &GFX_VIEWPORT;
  GFX_VIEWPORT = -1073807360;
  return result;
}

//----- (0225D6D8) --------------------------------------------------------
int __fastcall Function_225d6d8(uint *a1, int a2, int a3)
{
  uint *v3;

  v3 = a1;
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 4096;
  a1[4] = 4096;
  a1[5] = 4096;
  a1[6] = 6720;
  a1[7] = 31744;
  a1[8] = 0;
  Function_20170d8(a1 + 39, *(uint *)(a2 + 324), 3u, a3);
  return Function_2017258(v3 + 9, (int)(v3 + 39));
}

//----- (0225D71C) --------------------------------------------------------
int __fastcall Function_225d71c(int a1)
{
  return Function_2017110((int *)(a1 + 156));
}

//----- (0225D728) --------------------------------------------------------
int *__fastcall Function_225d728(int *a1, int a2, int a3, int a4)
{
  int *v4;
  char v6;
  int v7;

  v7 = a4;
  v4 = a1;
  Function_225d770();
  Function_2017350(v4 + 9, *v4, v4[1], v4[2]);
  Function_201736c(v4 + 9, v4[3], v4[4], v4[5]);
  return Function_2017330(v4 + 9, (int *)&v6);
}

//----- (0225D760) --------------------------------------------------------
int __fastcall Function_225d760(uint *a1, uint *a2)
{
  uint *v2;
  uint *v3;
  int v4;
  int result;

  v2 = a2;
  v4 = a1[1];
  v3 = a1 + 2;
  *v2 = *a1;
  v2[1] = v4;
  result = a1[2];
  v2[2] = *v3;
  return result;
}

//----- (0225D770) --------------------------------------------------------
int __fastcall Function_225d770(int a1, int *a2)
{
  return Function_225caf4(a2, (uint *)(a1 + 24));
}

//----- (0225D780) --------------------------------------------------------
int __fastcall Function_225d780(uint *a1, uint *a2)
{
  uint *v2;
  uint *v3;
  int v4;
  int result;

  v2 = a2;
  v4 = a1[7];
  v3 = a1 + 8;
  *v2 = a1[6];
  v2[1] = v4;
  result = a1[8];
  v2[2] = *v3;
  return result;
}

//----- (0225D790) --------------------------------------------------------
int __fastcall Function_225d790(uint *a1, int *a2)
{
  int *v2;
  uint *v3;
  int v4;
  int v5;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  v5 = a2[1];
  v2 += 2;
  v3 += 6;
  *v3 = v4;
  v3[1] = v5;
  result = *v2;
  v3[2] = *v2;
  return result;
}

//----- (0225D7A0) --------------------------------------------------------
int Function_225d7a0()
{
  return Function_225d7a2();
}

//----- (0225D7A2) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0225D838) --------------------------------------------------------
int __fastcall Function_225d838(int a1)
{
  int v1;
  int *v2;
  int result;

  v1 = 0;
  v2 = (int *)(a1 + 49528);
  do
  {
    result = Function_2017110(v2);
    ++v1;
    v2 += 4;
  }
  while ( v1 < 3 );
  return result;
}

//----- (0225D854) --------------------------------------------------------
uint __fastcall Function_225d854(uint *a1, uint *a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int v6;
  uint *v7;
  int v8;
  uint result;
  uint v10;
  int *v11;
  uint *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17[9];
  int v18[9];
  int v19;

  v19 = a4;
  v4 = (int)a2;
  v5 = a1;
  Function_225d760(a2, &v14);
  Function_225d770(v4, v17);
  v6 = 0;
  v7 = v5 + 12292;
  do
  {
    Function_2017350(v7, v14, v15, v16);
    if ( v6 == 2 )
      Function_201736c(v7, v5[12289], v5[12290], v5[12291] + 410);
    else
      Function_201736c(v7, v5[12289], v5[12290], v5[12291]);
    ++v6;
    v7 += 30;
  }
  while ( v6 < 3 );
  MTX_Identity33_(v18);
  Function_2017330((int *)v5 + 12352, v18);
  result = *v5;
  v10 = 0;
  if ( *v5 )
  {
    v11 = (int *)(v5 + 2);
    v12 = v5;
    do
    {
      MTX_Concat33(v11, v17, v18, v8);
      v13 = *((ushort *)v12 + 22);
      if ( v13 != 3 )
        Function_2017330((int *)&v5[30 * v13 + 12292], v18);
      result = *v5;
      ++v10;
      v11 += 12;
      v12 += 12;
    }
    while ( v10 < *v5 );
  }
  return result;
}

//----- (0225D91C) --------------------------------------------------------
int __fastcall Function_225d91c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v9;
  int v10;

  v3 = a1;
  v4 = a2;
  v9 = a3;
  v5 = 0;
  do
  {
    if ( ((int (__fastcall *)(int, uint))dword_223113C[324])(v3, (uchar)v5) )
    {
      v10 = ((int (__fastcall *)(int, uint))dword_223113C[314])(v3, (uchar)v5);
      v6 = ((uchar (__fastcall *)(int, uint))dword_223113C[295])(v3, (uchar)v5);
      v7 = ((int (__fastcall *)(int, uint))dword_223113C[304])(v3, (uchar)v5);
      if ( v6 == v4 && v7 == v9 )
        return v10 == 1;
    }
    ++v5;
  }
  while ( v5 < 50 );
  return 3;
}

//----- (0225D984) --------------------------------------------------------
int __fastcall Function_225d984(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v11;

  v4 = a3;
  v5 = a1;
  v6 = a2;
  v11 = a4;
  v7 = 3;
  v8 = Function_225da70(a1);
  v9 = Function_225d9c4(v5, v6, v4);
  if ( v9 < v8 )
  {
    v7 = Function_225da1c(v5, v9);
    Function_225d9f0(v5, v11, v9);
  }
  return v7;
}

//----- (0225D9C4) --------------------------------------------------------
uint __fastcall Function_225d9c4(uint *a1, int a2, int a3)
{
  uint v3;
  uint v4;

  v3 = *a1;
  v4 = 0;
  if ( !*a1 )
    return v3;
  while ( a2 != *((ushort *)a1 + 23) || a3 != *((ushort *)a1 + 24) )
  {
    ++v4;
    a1 += 12;
    if ( v4 >= v3 )
      return v3;
  }
  return v4;
}

//----- (0225D9F0) --------------------------------------------------------
int __fastcall Function_225d9f0(uint *a1, uint *a2, uint a3)
{
  uint *v3;
  uint v4;
  uint *v5;
  int v6;
  int result;

  v3 = a1;
  v4 = a3;
  v5 = a2;
  if ( a3 >= *a1 )
    ErrorHandler();
  v6 = (int)&v3[12 * v4];
  *v5 = *(short *)(v6 + 4);
  v5[1] = *(short *)(v6 + 6);
  result = 0;
  v5[2] = 0;
  return result;
}

//----- (0225DA1C) --------------------------------------------------------
int __fastcall Function_225da1c(uint *a1, uint a2)
{
  uint *v2;
  uint v3;

  v2 = a1;
  v3 = a2;
  if ( a2 >= *a1 )
    ErrorHandler();
  return LOWORD(v2[12 * v3 + 11]);
}

//----- (0225DA38) --------------------------------------------------------
int __fastcall Function_225da38(uint *a1, uint a2)
{
  uint *v2;
  uint v3;

  v2 = a1;
  v3 = a2;
  if ( a2 >= *a1 )
    ErrorHandler();
  return HIWORD(v2[12 * v3 + 11]);
}

//----- (0225DA54) --------------------------------------------------------
int __fastcall Function_225da54(uint *a1, uint a2)
{
  uint *v2;
  uint v3;

  v2 = a1;
  v3 = a2;
  if ( a2 >= *a1 )
    ErrorHandler();
  return LOWORD(v2[12 * v3 + 12]);
}

//----- (0225DA70) --------------------------------------------------------
int __fastcall Function_225da70(int a1)
{
  return *(uint *)a1;
}

//----- (0225DA74) --------------------------------------------------------
int Function_225da74()
{
  return Function_225da76();
}

//----- (0225DA76) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0225DAEC) --------------------------------------------------------
uint __fastcall Function_225daec(int *a1)
{
  return Call_free5(*a1);
}

//----- (0225DAF8) --------------------------------------------------------
int *Function_225daf8()
{
  return Function_20203ec();
}

//----- (0225DB00) --------------------------------------------------------
int __fastcall Function_225db00(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( *(ushort *)(a1 + 16) )
    *(ushort *)(a1 + 16) = 0;
  else
    *(ushort *)(a1 + 16) = 1;
  Function_2005748(0x5BEu);
  result = 1;
  *(ushort *)(v1 + 18) = 1;
  return result;
}

//----- (0225DB2C) --------------------------------------------------------
int __fastcall Function_225db2c(int a1, int a2)
{
  int v2;
  int v4;
  int v5;
  int v6;

  v2 = a1;
  if ( !*(ushort *)(a1 + 18) )
    return 1;
  v4 = *(ushort *)(a1 + 16);
  if ( *(ushort *)(v2 + 16) )
  {
    if ( v4 == 1 )
    {
      v5 = *(uint *)(v2 + 12);
      if ( v5 <= 360448 )
      {
        *(uint *)(v2 + 12) = 327680;
        *(ushort *)(v2 + 18) = 0;
      }
      else
      {
        *(uint *)(v2 + 12) = v5 - 0x8000;
        *(uint *)(a2 + 49156) -= 128;
        *(uint *)(a2 + 49160) = *(uint *)(a2 + 49156);
      }
    }
  }
  else
  {
    v6 = *(uint *)(v2 + 12);
    if ( v6 >= 1179648 )
    {
      *(uint *)(v2 + 12) = 1212416;
      *(ushort *)(v2 + 18) = 0;
    }
    else
    {
      *(uint *)(v2 + 12) = v6 + 0x8000;
      *(uint *)(a2 + 49156) += 128;
      *(uint *)(a2 + 49160) = *(uint *)(a2 + 49156);
    }
  }
  Function_2020a50(*(uint *)(v2 + 12), *(uint *)v2);
  return 0;
}

//----- (0225DBB0) --------------------------------------------------------
int __fastcall Function_225dbb0(int a1)
{
  return *(ushort *)(a1 + 16);
}

//----- (0225DBB4) --------------------------------------------------------
char *__fastcall Function_225dbb4(int *a1, uint **a2, int a3, uint a4)
{
  uint **v4;
  int v5;
  int *v6;
  uint v7;
  int v8;

  v4 = a2;
  v5 = a3;
  v6 = a1;
  v7 = a4;
  Call_FillMemWithValue(a1, 0, 0x2Cu);
  Function_201a7e8(*v4, (int)(v6 + 7), 1, 25, 21, 6u, 2u, 1, 40);
  Function_201ada4_ClearTextBox((int)(v6 + 7), 15);
  v8 = Function_225ef74(v5, 1);
  Function_2002bb8(2, v7);
  Function_2002eec(2, v8, 0, 0x30u);
  Function_201d78c((int)(v6 + 7), 2);
  Function_2002c60(2);
  return Function_200dc48((int)(v6 + 7), 0, 31, 0);
}

//----- (0225DC48) --------------------------------------------------------
uint __fastcall Function_225dc48(int a1)
{
  return Function_201a8fc(a1 + 28);
}

//----- (0225DC54) --------------------------------------------------------
int __fastcall Function_225dc54(int *a1)
{
  int *v1;
  int result;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v1 = a1;
  *a1 = 0;
  if ( word_21BF6DC )
  {
    if ( (ushort)word_21BF6D8 >= 0xC8u
      && (ushort)word_21BF6D8 <= 0xF8u
      && (ushort)word_21BF6DA >= 0xA8u
      && (ushort)word_21BF6DA <= 0xB8u )
    {
      result = 2;
      *v1 = 2;
      return result;
    }
    a1[1] = 0;
    a1[4] = 0;
    a1[5] = 0;
    a1[6] = 0;
    *a1 = 0;
    a1[2] = (ushort)word_21BF6D8;
    a1[3] = (ushort)word_21BF6DA;
    a1[6] = 4;
  }
  result = (ushort)word_21BF6DE;
  if ( word_21BF6DE )
  {
    v3 = v1[1];
    if ( v3 )
    {
      if ( v3 != 1 )
        return result;
    }
    else
    {
      v4 = v1[6];
      if ( v4 )
        v1[6] = v4 - 1;
      else
        v1[1] = 1;
    }
    Function_225cbe4(v1[2], v1[3], &v8, (int)&v7, &v6, &v5);
    *v1 = v6 | v8;
    v1[4] = v7;
    v1[5] = v5;
    v1[2] = (ushort)word_21BF6D8;
    result = (ushort)word_21BF6DA;
    v1[3] = (ushort)word_21BF6DA;
    return result;
  }
  if ( v1[6] )
    *v1 = 1;
  result = 0;
  v1[1] = 0;
  v1[4] = 0;
  v1[5] = 0;
  v1[6] = 0;
  return result;
}

//----- (0225DD10) --------------------------------------------------------
uint *__fastcall Function_225dd10(uint *result, int a2)
{
  switch ( a2 )
  {
    case 0:
      return (uint *)*result;
    case 1:
      return (uint *)result[4];
    case 2:
      result = (uint *)result[5];
      break;
  }
  return result;
}

//----- (0225DD2C) --------------------------------------------------------
int __fastcall Function_225dd2c(int a1)
{
  int v1;

  v1 = a1;
  Function_200dc9c(a1 + 28, 1);
  return Function_201ad10(v1 + 28);
}

//----- (0225DD44) --------------------------------------------------------
char *__fastcall Function_225dd44(int a1)
{
  int v1;

  v1 = a1;
  Function_201a9a4(a1 + 28);
  return Function_200dc48(v1 + 28, 0, 31, 0);
}

//----- (0225DD60) --------------------------------------------------------
int *__fastcall Function_225dd60(int *a1, uint **a2, int a3, int a4, uint a5)
{
  uint **v5;
  int v6;
  int v7;
  int *v8;
  ushort *v9;
  int *result;

  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = a1;
  Call_FillMemWithValue(a1, 0, 0x2Cu);
  v9 = (ushort *)LoadPlayerDataAdress(v7);
  v8[2] = Function_2027ac0(v9);
  v8[3] = Function_2023790(128, a5);
  Function_201a7e8(*v5, (int)(v8 + 4), 1, 2, 1, 0x1Bu, 4u, 1, 52);
  Function_201ada4_ClearTextBox((int)(v8 + 4), 15);
  Function_225ef84(v6, 5, v8[3]);
  result = Function_2015920(a5);
  v8[8] = (int)result;
  return result;
}

//----- (0225DDC8) --------------------------------------------------------
uint __fastcall Function_225ddc8(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  if ( Function_201d724(a1[1] & 0xFF) )
    Call_RemoveTextInterpreterTaskFromTaskList(v1[1] & 0xFF);
  Function_20237bc_FreeMsg(v1[3], v2);
  Function_2015938(v1[8]);
  return Function_201a8fc((int)(v1 + 4));
}

//----- (0225DDFC) --------------------------------------------------------
int __fastcall Function_225ddfc(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  Function_201ada4_ClearTextBox((int)(a1 + 4), 15);
  Function_200e060((int)(v1 + 4), 1, 1, 2u);
  Function_201a9a4((int)(v1 + 4));
  v2 = v1[2];
  v3 = v1[3];
  v1[1] = Function_201d738_CallInitTextInterpreter((int)(v1 + 4), 1);
  result = 0;
  *v1 = 0;
  return result;
}

//----- (0225DE40) --------------------------------------------------------
int __fastcall Function_225de40(uint *a1)
{
  int v1;
  uint *v2;
  int v3;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v2 = a1;
  v3 = *a1;
  if ( v3 )
  {
    if ( v3 == 1 )
      v1 = Function_20159fc(v2[8]);
  }
  else
  {
    v1 = 0;
    if ( !Function_201d724(v2[1] & 0xFF) )
    {
      v6 = 1;
      v7 = 160;
      v8 = 3;
      v9 = 1561;
      v5 = Function_201c28c((int)(v2 + 4));
      Function_2015958(v2[8], (int)&v5);
      ++*v2;
    }
  }
  return v1;
}

//----- (0225DEA0) --------------------------------------------------------
int __fastcall Function_225dea0(int a1)
{
  int v1;

  v1 = a1;
  Function_2015a54(*(int **)(a1 + 32));
  Function_200e084(v1 + 16, 1);
  return Function_201ad10(v1 + 16);
}

//----- (0225DEC0) --------------------------------------------------------
int __fastcall Function_225dec0(uint *a1, int a2, int a3, int a4)
{
  char *v4;
  int *v5;
  int v6;
  int v7;
  uint *v9;
  int v10;
  int v11;
  int v12;

  v10 = a2;
  v11 = a3;
  v9 = a1;
  v12 = a4;
  *a1 = 0;
  Function_225e13c();
  v4 = &byte_225F014;
  v5 = dword_225F118;
  v6 = 0;
  v7 = (int)(v9 + 40);
  do
  {
    Function_225e748(v7, v10, v5, (uchar)*v4, v12);
    ++v6;
    ++v4;
    v5 += 3;
    v7 += 40;
  }
  while ( v6 < 5 );
  Function_201a7e8(*(uint **)v10, (int)(v9 + 106), 4, 2, 19, 0x1Bu, 4u, 11, 40);
  Function_201ada4_ClearTextBox((int)(v9 + 106), 15);
  Function_225ef74(v11, 0);
  Function_201d738_CallInitTextInterpreter((int)(v9 + 106), 1);
  Function_200e060((int)(v9 + 106), 0, 10, 0xAu);
  Function_225e590(v9, v10, v12);
  v9[37] = Function_20071d0(*(uint *)(v10 + 324), 0x13u, 0, v9 + 38, v12);
  Function_225e960(v9 + 110, v10, v9 + 185, v12);
  return Function_225e478(v9 + 185);
}

//----- (0225DFBC) --------------------------------------------------------
int __fastcall Function_225dfbc(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;

  v2 = a1;
  v3 = a2;
  Function_225e4e8(a1 + 740);
  Function_225eae8(v2 + 440, v3);
  free(*(uint *)(v2 + 148));
  Function_225e61c(v2);
  Function_201a8fc(v2 + 424);
  Function_225e148(v2);
  v4 = 0;
  v5 = v2 + 160;
  do
  {
    result = Function_225e7dc(v5);
    ++v4;
    v5 += 40;
  }
  while ( v4 < 5 );
  return result;
}

//----- (0225E00C) --------------------------------------------------------
uint *__fastcall Function_225e00c(uint *result, int a2, int a3)
{
  uint *v3;
  int v4;

  v3 = result;
  v4 = a3;
  switch ( (uchar)*result )
  {
    case 0u:
      Function_225e1ec();
      result = (uint *)Function_225ec08(v3 + 110, v3 + 185);
      break;
    case 1u:
      Function_225e208(result, a2, a3, *result);
      result = (uint *)2;
      *v3 = 2;
      break;
    case 2u:
      result = (uint *)Function_225e2d0();
      if ( result == (uint *)1 )
      {
        result = 0;
        *v3 = 0;
      }
      break;
    case 3u:
      Function_225e2dc();
      Function_225e2e4(v3, v4);
      result = (uint *)4;
      *v3 = 4;
      break;
    case 4u:
      result = (uint *)((int (*)(void))Function_225e2e4)();
      if ( result == (uint *)1 )
      {
        result = 0;
        *v3 = 0;
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (0225E084) --------------------------------------------------------
int __fastcall Function_225e084(int a1)
{
  int v1;

  v1 = a1;
  Function_200e084(a1 + 424, 1);
  return Function_201ad10(v1 + 424);
}

//----- (0225E0A0) --------------------------------------------------------
uint __fastcall Function_225e0a0(int a1)
{
  int v1;

  v1 = a1;
  Function_201a9a4(a1 + 424);
  return Function_200e060(v1 + 424, 1, 10, 0xAu);
}

//----- (0225E0C0) --------------------------------------------------------
int __fastcall Function_225e0c0(uint *a1)
{
  int result;

  switch ( (uchar)*a1 )
  {
    case 0u:
      *a1 = 1;
      goto LABEL_5;
    case 1u:
    case 3u:
    case 4u:
      result = 0;
      break;
    case 2u:
      *a1 = 3;
      result = 0;
      break;
    default:
LABEL_5:
      Function_225e154();
      result = 1;
      break;
  }
  return result;
}

//----- (0225E0F8) --------------------------------------------------------
int __fastcall Function_225e0f8(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v6;
  int v7;
  int v8;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    if ( !Function_225e1c0(v2, &v6, v4) )
      return 0;
    if ( v7 == *(uint *)(v3 + 4) && v8 == *(uint *)(v3 + 8) )
      return 1;
    ++v4;
  }
  while ( v4 < 3 );
  return 0;
}

//----- (0225E13C) --------------------------------------------------------
int __fastcall Function_225e13c(int result)
{
  *(ushort *)(result + 52) = 0;
  *(ushort *)(result + 54) = 0;
  *(uint *)(result + 56) = 0;
  return result;
}

//----- (0225E148) --------------------------------------------------------
int __fastcall Function_225e148(int result)
{
  *(ushort *)(result + 52) = 0;
  *(ushort *)(result + 54) = 0;
  *(uint *)(result + 56) = 0;
  return result;
}

//----- (0225E154) --------------------------------------------------------
int __fastcall Function_225e154(int a1, uint *a2)
{
  int v2;
  uint *v3;
  uint *v4;
  int v5;
  int result;

  v2 = a1;
  v3 = a2;
  if ( (((uint)*(ushort *)(a1 + 54) + 1) >> 31)
     + __ROR4__(
         ((*(ushort *)(a1 + 54) + 1) << 30) - (((uint)*(ushort *)(a1 + 54) + 1) >> 31),
         30) == *(ushort *)(a1 + 52) )
    Function_225e1a0();
  v4 = (uint *)(v2 + 12 * *(ushort *)(v2 + 54) + 4);
  v5 = v3[1];
  *v4 = *v3;
  v4[1] = v5;
  v4[2] = v3[2];
  *(ushort *)(v2 + 54) = (((uint)*(ushort *)(v2 + 54) + 1) >> 31)
                      + __ROR4__(
                          ((*(ushort *)(v2 + 54) + 1) << 30)
                        - (((uint)*(ushort *)(v2 + 54) + 1) >> 31),
                          30);
  result = *(uint *)(v2 + 56) + 1;
  *(uint *)(v2 + 56) = result;
  return result;
}

//----- (0225E1A0) --------------------------------------------------------
int __fastcall Function_225e1a0(int result)
{
  int v1;

  v1 = *(ushort *)(result + 52);
  if ( *(ushort *)(result + 54) != v1 )
  {
    *(ushort *)(result + 52) = ((uint)(v1 + 1) >> 31)
                            + __ROR4__(((v1 + 1) << 30) - ((uint)(v1 + 1) >> 31), 30);
    --*(uint *)(result + 56);
  }
  return result;
}

//----- (0225E1C0) --------------------------------------------------------
int __fastcall Function_225e1c0(int a1, uint *a2, uint a3)
{
  uint *v3;
  int v5;
  uint *v6;
  int v7;

  v3 = a2;
  if ( a3 >= *(uint *)(a1 + 56) )
    return 0;
  v5 = *(ushort *)(a1 + 54) - 1 - a3;
  v6 = (uint *)(a1 + 12 * (v5 + (v5 < 0 ? 4 : 0)));
  v7 = v6[2];
  *v3 = v6[1];
  v3[1] = v7;
  v3[2] = v6[3];
  return 1;
}

//----- (0225E1EC) --------------------------------------------------------
int __fastcall Function_225e1ec(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a2;
  v3 = 0;
  v4 = a1 + 160;
  do
  {
    result = Function_225e810(v4, v2);
    ++v3;
    v4 += 40;
  }
  while ( v3 < 5 );
  return result;
}

//----- (0225E208) --------------------------------------------------------
int __fastcall Function_225e208(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uchar v7;
  int v8;
  int v9;
  int v10;
  int result;
  int v12;
  int v13;
  int v14;

  v14 = a4;
  v4 = a1;
  v12 = a2;
  Call_FillMemWithValue((int *)(a1 + 64), 0, 0x48u);
  v5 = 0;
  *(ushort *)(v4 + 60) = 0;
  *(ushort *)(v4 + 62) = 0;
  v6 = v4 + 160;
  do
  {
    Function_225e904(v6);
    ++v5;
    v6 += 40;
  }
  while ( v5 < 5 );
  Function_225eb60(v4 + 440);
  v7 = -1;
  v8 = 0;
  do
  {
    v9 = 2 - v8;
    if ( Function_225e1c0(v4, &v13, v8) == 1 )
    {
      v10 = Function_225eeec(v13);
      Function_225e8ec(v4 + 160 + 40 * v10, 2 - v8, 1);
      Function_225e644(v4, 2 - v8, &v13, v12);
      *(uint *)(v4 + 4 * v9 + 136) = v10;
      Function_225eb8c(v4 + 440, (uchar)v9, (uchar)v13, v7);
      result = v4 + 62;
      *(ushort *)(v4 + 62) += 6;
      v7 = v13;
    }
    else
    {
      result = 5;
      v7 = -1;
      *(uint *)(v4 + 4 * v9 + 136) = 5;
    }
    ++v8;
  }
  while ( v8 < 3 );
  return result;
}

//----- (0225E2D0) --------------------------------------------------------
int __fastcall Function_225e2d0(int a1, int a2)
{
  return Function_225e2f0(a1, a2, 2);
}

//----- (0225E2DC) --------------------------------------------------------
int __fastcall Function_225e2dc(int result)
{
  *(ushort *)(result + 60) >>= 1;
  return result;
}

//----- (0225E2E4) --------------------------------------------------------
int __fastcall Function_225e2e4(int a1, int a2)
{
  return Function_225e2f0(a1, a2, 1);
}

//----- (0225E2F0) --------------------------------------------------------
int __fastcall Function_225e2f0(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint v8;
  int v9;
  int i;
  uint v12;

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = 1;
  v12 = *(ushort *)(a1 + 60);
  s32_div_f(v12, a3);
  if ( !v7 )
  {
    v8 = s32_div_f(v12, v4);
    Function_225e368(v3, v8);
  }
  v9 = *(ushort *)(v3 + 60) + 1;
  if ( v9 < 18 * v4 )
    *(ushort *)(v3 + 60) = v9;
  for ( i = 0; i < *(ushort *)(v3 + 62); ++i )
  {
    if ( !Function_225e374(v3, i, v5) )
      v6 = 0;
  }
  if ( v6 == 1 )
  {
    Function_225ebec(v3 + 440);
    Function_225e51c(v3 + 740);
  }
  return v6;
}

//----- (0225E368) --------------------------------------------------------
uchar *__fastcall Function_225e368(int a1, int a2)
{
  uchar *result;

  result = (uchar *)(a1 + 4 * a2 + 64);
  *result = 1;
  return result;
}

//----- (0225E374) --------------------------------------------------------
int __fastcall Function_225e374(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int result;
  int v6;
  uchar *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v12 = a3;
  v3 = a1;
  v4 = 4 * a2;
  if ( !*(uchar *)(a1 + 4 * a2 + 64) )
    return 0;
  v6 = *(char *)(a1 + 65 + v4);
  v7 = (uchar *)(a1 + 65 + v4);
  if ( v6 >= 2 )
    return 1;
  v8 = 17 - a2;
  v15 = u32_div_f(17 - a2, 6);
  u32_div_f(v8, 6);
  v13 = v9;
  v14 = *(uint *)(v3 + 4 * v15 + 136);
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      v11 = Function_225e6e8(v3, v15, v9);
      Function_225e71c(v3, v15, v13, v11);
      Function_225e910(v3 + 160 + 40 * v14, v8, v12);
    }
  }
  else
  {
    v10 = Function_225e70c(v3);
    Function_225e71c(v3, v15, v13, v10);
    Function_225e430(v3, v8, v12);
    Function_225e51c(v3 + 740);
  }
  result = 0;
  ++*v7;
  return result;
}

//----- (0225E430) --------------------------------------------------------
int __fastcall Function_225e430(int a1, uchar a2, int *a3)
{
  int *v3;

  v3 = a3;
  Function_20198e8(
    *a3,
    6,
    0,
    a2,
    0x20u,
    1u,
    *(uint *)(a1 + 152) + 12,
    0,
    a2,
    (uint)**(ushort **)(a1 + 152) << 21 >> 24,
    (uint)*(ushort *)(*(uint *)(a1 + 152) + 2) << 21 >> 24);
  return Function_201c3c0(*v3, 6);
}

//----- (0225E478) --------------------------------------------------------
uint *__fastcall Function_225e478(int a1)
{
  int v1;
  uint *result;

  REG_DISPCNT_SUB = REG_DISPCNT_SUB & 0xFFFF1FFF | 0x6000;
  SUB_WIN_OUT = SUB_WIN_OUT & 0xFFC0 | 0x1F;
  v1 = a1;
  SUB_WIN_IN = SUB_WIN_IN & 0xFFC0 | 0xF;
  SUB_WIN_IN = SUB_WIN_IN & 0xC0FF | 0xF00;
  Function_225e504();
  Function_225e51c(v1);
  result = AddTaskToTaskList3((int)Function_225e534, v1, 0);
  *(uint *)(v1 + 12) = result;
  return result;
}

//----- (0225E4E8) --------------------------------------------------------
uint __fastcall Function_225e4e8(int a1)
{
  uint result;

  Call_RemoveTaskFromTaskList(*(int **)(a1 + 12));
  result = REG_DISPCNT_SUB & 0xFFFF1FFF;
  REG_DISPCNT_SUB &= 0xFFFF1FFF;
  return result;
}

//----- (0225E504) --------------------------------------------------------
ushort *__fastcall Function_225e504(ushort *result, int a2, int a3)
{
  if ( a2 < 0 )
    LOWORD(a2) = 0;
  if ( a3 < 0 )
    LOWORD(a3) = 0;
  *result = 1;
  result[2] = a2;
  result[3] = a3;
  return result;
}

//----- (0225E51C) --------------------------------------------------------
ushort *__fastcall Function_225e51c(ushort *result, int a2, int a3)
{
  if ( a2 < 0 )
    LOWORD(a2) = 0;
  if ( a3 < 0 )
    LOWORD(a3) = 0;
  result[1] = 1;
  result[4] = a2;
  result[5] = a3;
  return result;
}

//----- (0225E534) --------------------------------------------------------
int __fastcall Function_225e534(int a1, ushort *a2)
{
  short v2;
  short v3;
  int result;
  short v5;
  short v6;

  if ( *a2 )
  {
    v2 = a2[3];
    v3 = a2[2];
    SUB_WIN0_X1 = 255;
    SUB_WIN0_Y1 = (uchar)v2 | (v3 << 8) & 0xFF00;
    *a2 = 0;
  }
  result = (short)a2[1];
  if ( a2[1] )
  {
    v5 = a2[5];
    v6 = a2[4];
    SUB_WIN1_X1 = 255;
    SUB_WIN1_Y1 = (uchar)v5 | (v6 << 8) & 0xFF00;
    result = 0;
    a2[1] = 0;
  }
  return result;
}

//----- (0225E590) --------------------------------------------------------
int __fastcall Function_225e590(int a1, uint **a2)
{
  short v2;
  int v3;
  char v4;
  int v5;
  int v6;
  int v8;
  uint **v9;

  v2 = 148;
  v9 = a2;
  v3 = 0;
  v8 = a1;
  v4 = 0;
  v5 = a1 + 360;
  do
  {
    Function_201a7e8(*v9, v5, 5, 0, v4, 0x1Bu, 6u, 14, v2);
    v2 += 162;
    Function_201ada4_ClearTextBox(v5, 0);
    Function_201a954(v5, v6);
    ++v3;
    v4 += 6;
    v5 += 16;
  }
  while ( v3 < 3 );
  Function_201a7e8(*v9, v8 + 408, 5, 0, 0, 0x1Bu, 6u, 14, 148);
  return Function_201ada4_ClearTextBox(v8 + 408, 0);
}

//----- (0225E61C) --------------------------------------------------------
uint __fastcall Function_225e61c(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = 0;
  v3 = a1 + 360;
  do
  {
    Function_201a8fc(v3);
    ++v2;
    v3 += 16;
  }
  while ( v2 < 3 );
  return Function_201a8fc(v1 + 408);
}

//----- (0225E644) --------------------------------------------------------
int __fastcall Function_225e644(int a1, uint a2, uint *a3, int a4)
{
  uint v4;
  int v5;
  uint *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  if ( a2 >= 3 )
    ErrorHandler();
  v8 = v5 + 360;
  v9 = 16 * v4;
  Function_201ada4_ClearTextBox(v8 + v9, 0);
  v10 = Function_225eeec(*v6);
  Function_225ef74(v7, 2);
  v11 = dword_225F088[v10];
  Function_201d78c(v8 + v9, 1);
  Function_225ef90(v7, v6[1]);
  Function_201d78c(v8 + v9, 1);
  Function_225efb8(v7, v6[1], v6[2]);
  return Function_201d78c(v8 + v9, 1);
}

//----- (0225E6E8) --------------------------------------------------------
int __fastcall Function_225e6e8(int a1, uint a2, int a3)
{
  uint v3;
  int v4;
  int v5;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( a2 >= 3 )
    ErrorHandler();
  return *(uint *)(v4 + 16 * v3 + 372) + 864 * v5;
}

//----- (0225E70C) --------------------------------------------------------
int __fastcall Function_225e70c(int a1, int a2)
{
  return *(uint *)(a1 + 420) + 864 * a2;
}

//----- (0225E71C) --------------------------------------------------------
int __fastcall Function_225e71c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;

  v4 = a3;
  v5 = a4;
  v6 = Function_201c2a4(a1 + 360 + 16 * a2);
  return Function_201dc68(21, 32 * (v6 + 27 * v4) & 0x1FFFFF, v5, 864);
}

//----- (0225E748) --------------------------------------------------------
int __fastcall Function_225e748(int *a1, int a2, ushort *a3, short a4, int a5)
{
  int *v5;
  short v6;
  ushort *v7;
  uint *v8;
  int *v9;
  int result;
  ushort v11;
  int v12;
  ushort *v13;
  int v14;

  v12 = a2;
  v13 = a3;
  v5 = a1;
  v6 = a4;
  Call_FillMemWithValue(a1, 0, 0x28u);
  *((ushort *)v5 + 1) = v6;
  if ( v13[2] )
  {
    *((ushort *)v5 + 12) = v13[2];
    v14 = 0;
    if ( (int)*((ushort *)v5 + 12) > 0 )
    {
      v7 = v13;
      v8 = v5 + 4;
      v9 = v5;
      do
      {
        v9[2] = Function_20071d0(*(uint *)(v12 + 324), *v7, 0, v8, a5);
        ++v8;
        ++v7;
        ++v9;
        ++v14;
      }
      while ( v14 < *((ushort *)v5 + 12) );
    }
  }
  result = (int)v13;
  v11 = v13[4];
  if ( v13[4] )
  {
    *((uchar *)v5 + 36) = v11;
    *((uchar *)v5 + 38) = v13[5];
    result = Function_20071ec(*(uint *)(v12 + 324), v13[3], v5 + 8, a5);
    v5[7] = result;
  }
  return result;
}

//----- (0225E7DC) --------------------------------------------------------
uint __fastcall Function_225e7dc(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  uint result;

  v1 = a1;
  v2 = *(ushort *)(a1 + 24);
  if ( v2 )
  {
    v3 = 0;
    if ( v2 > 0 )
    {
      v4 = v1;
      do
      {
        free(*(uint *)(v4 + 8));
        ++v3;
        v4 += 4;
      }
      while ( v3 < *(ushort *)(v1 + 24) );
    }
  }
  result = *(uchar *)(v1 + 36);
  if ( *(uchar *)(v1 + 36) )
    result = free(*(uint *)(v1 + 28));
  return result;
}

//----- (0225E810) --------------------------------------------------------
uint __fastcall Function_225e810(ushort *a1, int *a2)
{
  ushort *v2;
  int v3;
  int v4;
  int *v5;
  ushort v6;
  int v7;
  uchar v8;
  ushort *v9;
  uint result;
  uint v11;
  uint v12;

  v2 = a1;
  v3 = *a1;
  v4 = a1[1];
  v5 = a2;
  v12 = s32_div_f(a1[12] * v3, v4);
  v11 = s32_div_f(*((uchar *)v2 + 36) * v3, v4);
  s32_div_f(v3 + 1, v4);
  *v2 = v6;
  if ( v2[12] && v12 != v2[13] )
  {
    v7 = 0;
    v2[13] = v12;
    v8 = 0;
    do
    {
      if ( *((uchar *)v2 + v7 + 4) == 1 )
      {
        v9 = *(ushort **)&v2[2 * v2[13] + 8];
        Function_20198e8(
          *v5,
          6,
          0,
          v8,
          0x20u,
          6u,
          (int)(v9 + 6),
          0,
          v8,
          (uint)*v9 << 21 >> 24,
          (uint)v9[1] << 21 >> 24);
        Function_201c3c0(*v5, 6);
      }
      ++v7;
      v8 += 6;
    }
    while ( v7 < 3 );
  }
  result = *((uchar *)v2 + 36);
  if ( *((uchar *)v2 + 36) )
  {
    result = v11;
    if ( v11 != *((uchar *)v2 + 37) )
    {
      *((uchar *)v2 + 37) = v11;
      result = Function_201dc68(
                 31,
                 32 * *((uchar *)v2 + 38),
                 *(uint *)(*((uint *)v2 + 8) + 12) + 32 * *((uchar *)v2 + 37),
                 32);
      if ( !result )
        result = ErrorHandler();
    }
  }
  return result;
}

//----- (0225E8EC) --------------------------------------------------------
int __fastcall Function_225e8ec(int a1, uint a2, char a3)
{
  uint v3;
  int v4;
  char v5;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( a2 >= 3 )
    ErrorHandler();
  result = v4 + v3;
  *(uchar *)(v4 + v3 + 4) = v5;
  return result;
}

//----- (0225E904) --------------------------------------------------------
uchar *__fastcall Function_225e904(uchar *result)
{
  result[4] = 0;
  result[5] = 0;
  result[6] = 0;
  result[7] = 0;
  return result;
}

//----- (0225E910) --------------------------------------------------------
int __fastcall Function_225e910(int result, uchar a2, int *a3)
{
  int *v3;
  ushort *v4;

  v3 = a3;
  if ( *(ushort *)(result + 24) )
  {
    v4 = *(ushort **)(result + 4 * *(ushort *)(result + 26) + 16);
    Function_20198e8(
      *a3,
      6,
      0,
      a2,
      0x20u,
      1u,
      (int)(v4 + 6),
      0,
      a2,
      (uint)*v4 << 21 >> 24,
      (uint)v4[1] << 21 >> 24);
    result = Function_201c3c0(*v3, 6);
  }
  return result;
}

//----- (0225E960) --------------------------------------------------------
ushort *__fastcall Function_225e960(int *a1, uint *a2, ushort *a3, int a4)
{
  uint *v4;
  int *v5;
  int *v6;
  int v7;
  int *v8;
  int v9;
  int *v11;
  ushort *v12;
  uint v13;
  uint v14;
  uint v15;
  uint v16;
  int v17;
  char *v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  uint v24;
  char v25;
  int v26;

  v26 = a4;
  v11 = a1;
  v12 = a3;
  v4 = a2;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v13 = a4;
  Call_FillMemWithValue(a1, 0, 0x12Cu);
  *((ushort *)v11 + 24) = 2;
  *((ushort *)v11 + 25) = 128;
  v17 = v4[1];
  v18 = &v25;
  v22 = 64;
  v24 = v13;
  v23 = 2;
  v5 = Function_2009b04(v4[77], v4[81], 0x14u, 0, 0, 2, 12, v13);
  v11[28] = (int)v5;
  if ( !Function_200a640(v5) )
    ErrorHandler();
  Function_2009d4c((int *)v11[28]);
  v16 = 21;
  v6 = v11;
  v15 = 22;
  v7 = 0;
  v14 = 23;
  v8 = v11;
  do
  {
    v6[27] = (int)Function_2009a4c(v4[76], v4[81], v16, 0, v7, 2, v13);
    v6[29] = (int)Function_2009bc4(v4[78], v4[81], v15, 0, v7, 2u, v13);
    v6[30] = (int)Function_2009bc4(v4[79], v4[81], v14, 0, v7, 3u, v13);
    if ( !Function_200a3dc((int *)v6[27]) )
      ErrorHandler();
    Function_2009d4c((int *)v6[27]);
    Function_20093b4((int)&v25, v7, 0, v7, v7, -1, -1, 0, 1, v4[76], v4[77], v4[78], v4[79], 0, 0);
    v9 = Function_2021b90(&v17);
    v8[15] = v9;
    Function_2021cc8(v9, 1);
    Function_2021ce4(v8[15], 4096);
    ++v7;
    v16 += 3;
    v6 += 4;
    v15 += 3;
    ++v8;
    v14 += 3;
  }
  while ( v7 < 12 );
  Function_225ebec(v11);
  return Function_225e51c(v12, 0, 0);
}

//----- (0225EAE8) --------------------------------------------------------
int __fastcall Function_225eae8(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;
  int v7;
  int v8;
  int v9;

  v7 = a1;
  v8 = a2;
  Function_20057a4(1473, 0);
  v2 = v7;
  v9 = 0;
  do
  {
    Function_2021bd4(*(uint *)(v7 + 60));
    Function_200a4e4(*(int **)(v2 + 108));
    if ( !v9 )
    {
      Function_200a6dc(*(int **)(v2 + 112));
      Function_2009d68(*(int **)(v8 + 308), *(uint ***)(v2 + 112));
    }
    v3 = v8;
    v4 = 0;
    v5 = v2;
    do
    {
      if ( v4 != 1 )
        Function_2009d68(*(int **)(v3 + 304), *(uint ***)(v5 + 108));
      ++v4;
      v5 += 4;
      v3 += 4;
    }
    while ( v4 < 4 );
    v2 += 16;
    v7 += 4;
    result = v9 + 1;
    v9 = result;
  }
  while ( result < 12 );
  return result;
}

//----- (0225EB60) --------------------------------------------------------
int __fastcall Function_225eb60(int result)
{
  uchar *v1;
  uchar *v2;

  *(uchar *)(result + 52) = 0;
  v1 = (uchar *)(result + 52);
  v1[1] = 0;
  v1[2] = 0;
  v1[3] = 0;
  *(uchar *)(result + 56) = 0;
  v2 = (uchar *)(result + 56);
  v2[1] = 0;
  v2[2] = 0;
  v2[3] = 0;
  *(ushort *)(result + 48) = 2;
  *(ushort *)(result + 50) = 128;
  return result;
}

//----- (0225EB8C) --------------------------------------------------------
int __fastcall Function_225eb8c(int a1, uint a2, int a3, uint a4)
{
  int v4;
  uint v5;
  int v6;
  int result;
  uint v8;

  v4 = a1;
  v5 = a2;
  v8 = a4;
  *(uchar *)(a1 + a2 + 52) = 1;
  v6 = a1 + 56;
  *(uchar *)(v6 + a2) = Function_225ef04(a3);
  Function_225ecf0(v4 + 16 * v5, &dword_225F1E0[12 * *(uchar *)(v6 + v5) + 4 * v5]);
  result = v8;
  if ( v8 < 0x18 )
  {
    result = Function_225ef04(v8);
    if ( result == *(uchar *)(v6 + v5) && v5 < 2 )
    {
      Function_225ed10(v4 + 16 * (v5 + 1), 1);
      result = Function_225ed0c(v4 + 16 * v5, 1);
    }
  }
  return result;
}

//----- (0225EBEC) --------------------------------------------------------
uint __fastcall Function_225ebec(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = 0;
  v2 = a1;
  do
  {
    result = Function_2021cac(*(uint *)(v2 + 60), 0);
    ++v1;
    v2 += 4;
  }
  while ( v1 < 12 );
  return result;
}

//----- (0225EC08) --------------------------------------------------------
int __fastcall Function_225ec08(int result, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v2 = a2;
  v3 = result;
  v4 = *(short *)(result + 50);
  if ( v4 <= 0 )
  {
    v5 = *(short *)(result + 48);
    result = Function_225ecac();
    if ( result == 1 )
    {
      v6 = *(short *)(v3 + 48) - 1;
      if ( v6 < 0 )
      {
        Function_20057a4(1473, 0);
        *(ushort *)(v3 + 48) = 2;
        result = 128;
        *(ushort *)(v3 + 50) = 128;
      }
      else
      {
        *(ushort *)(v3 + 48) = v6;
        result = Function_225ec70(v3, *(short *)(v3 + 48), v2);
      }
    }
  }
  else
  {
    *(ushort *)(result + 50) = v4 - 1;
    if ( !*(ushort *)(result + 50) )
    {
      result = Function_225ec70(result, *(short *)(result + 48), a2);
      if ( result == 1 )
        result = Function_2005748(0x5C1u);
    }
  }
  return result;
}

//----- (0225EC70) --------------------------------------------------------
int __fastcall Function_225ec70(int a1, int a2, int a3)
{
  int v3;
  int v4;

  v3 = a1;
  v4 = a2;
  if ( !*(uchar *)(a1 + a2 + 52) )
    return 0;
  Function_225ed5c(a1 + 16 * a2, a3);
  Function_2021cac(*(uint *)(v3 + 4 * *(uchar *)(v3 + v4 + 56) + 60), 1);
  Function_225eec4(v3, v4);
  return 1;
}

//----- (0225ECAC) --------------------------------------------------------
int __fastcall Function_225ecac(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v6;

  v3 = a1;
  v4 = a2;
  if ( !*(uchar *)(a1 + a2 + 52) )
    return 1;
  v6 = Function_225ed14(a1 + 16 * a2, a3);
  Function_225eec4(v3, v4);
  if ( v6 == 1 )
    Function_2021cac(*(uint *)(v3 + 4 * *(uchar *)(v3 + v4 + 56) + 60), 0);
  return v6;
}

//----- (0225ECF0) --------------------------------------------------------
int __fastcall Function_225ecf0(int result, ushort *a2)
{
  *(uint *)(result + 12) = a2;
  *(ushort *)result = *a2;
  *(uint *)(result + 2) = (ushort)(a2[1] + 16);
  *(ushort *)(result + 6) = 0;
  *(ushort *)(result + 8) = 0;
  *(ushort *)(result + 10) = 0;
  return result;
}

//----- (0225ED0C) --------------------------------------------------------
int __fastcall Function_225ed0c(int result, short a2)
{
  *(ushort *)(result + 8) = a2;
  return result;
}

//----- (0225ED10) --------------------------------------------------------
int __fastcall Function_225ed10(int result, short a2)
{
  *(ushort *)(result + 10) = a2;
  return result;
}

//----- (0225ED14) --------------------------------------------------------
int __fastcall Function_225ed14(int a1, int a2)
{
  int v2;
  int v3;
  int v5;

  v2 = a1;
  v3 = a2;
  if ( *(short *)(a1 + 4) > *(short *)(*(uint *)(a1 + 12) + 8) )
    return 1;
  Function_225ed90();
  ++*(ushort *)(v2 + 4);
  v5 = *(short *)(v2 + 6) + 1;
  if ( v5 <= *(short *)(*(uint *)(v2 + 12) + 12) )
    *(ushort *)(v2 + 6) = v5;
  else
    *(ushort *)(v2 + 6) = 0;
  Function_225ee68(v2, v3);
  return 0;
}

//----- (0225ED5C) --------------------------------------------------------
int __fastcall Function_225ed5c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  *(ushort *)(a1 + 4) = 0;
  *(ushort *)(a1 + 6) = 0;
  Function_225ed90();
  return Function_225ee68(v3, v2);
}

//----- (0225ED78) --------------------------------------------------------
int __fastcall Function_225ed78(short *a1, uint *a2)
{
  int result;

  *a2 = *a1 << 12;
  result = (a1[1] << 12) + 0x100000;
  a2[1] = result;
  return result;
}

//----- (0225ED90) --------------------------------------------------------
int __fastcall Function_225ed90(short *a1)
{
  short *v1;
  short *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int result;

  v1 = a1;
  v2 = (short *)*((uint *)a1 + 3);
  if ( a1[5] )
    v3 = v2[3];
  else
    v3 = (short)(v2[3] - 16);
  if ( a1[4] )
    v4 = v2[1];
  else
    v4 = (short)(v2[1] + 16);
  v5 = *v2;
  *a1 = v5 + s32_div_f((v2[2] - v5) * a1[2], v2[4]);
  v1[1] = v4 + s32_div_f((v3 - v4) * v1[2], *(short *)(*((uint *)v1 + 3) + 8));
  v6 = *((uint *)v1 + 3);
  v7 = SLOWORD(Unknown_20f983c[(int)(ushort)s32_div_f(0xFFFF * v1[3], *(short *)(v6 + 12)) >> 4]);
  v8 = *(short *)(v6 + 10);
  if ( v8 <= 0 )
  {
    v11 = fflt(v8 << 12);
    v10 = fsub(v11, 1056964608);
  }
  else
  {
    v9 = fflt(v8 << 12);
    v10 = fadd(0x3F000000u, v9);
  }
  v12 = ffix(v10);
  result = *v1 + ((int)((ll_mul(v12, v7) + 2048) >> 12) >> 12);
  *v1 = result;
  return result;
}

//----- (0225EE68) --------------------------------------------------------
int __fastcall Function_225ee68(int a1, ushort *a2)
{
  ushort *v2;
  int v3;
  int v4;
  int result;
  int v6;

  v2 = a2;
  v3 = a1;
  Function_225e504(a2, 0, 0);
  if ( !*(ushort *)(v3 + 8) && *(short *)(v3 + 2) > *(short *)(*(uint *)(v3 + 12) + 2) - 16 )
  {
    v4 = *(short *)(*(uint *)(v3 + 12) + 2);
    Function_225e504(v2, v4, (short)(v4 + 32));
  }
  result = *(ushort *)(v3 + 10);
  if ( !*(ushort *)(v3 + 10) )
  {
    v6 = *(short *)(*(uint *)(v3 + 12) + 6);
    result = *(short *)(v3 + 2) - 16;
    if ( result <= v6 )
      result = (int)Function_225e504(v2, (short)(v6 - 32), v6);
  }
  return result;
}

//----- (0225EEC4) --------------------------------------------------------
int __fastcall Function_225eec4(int a1, int a2)
{
  int v2;
  int v3;
  char v5;

  v2 = a2;
  v3 = a1;
  Function_225ed78((short *)(a1 + 16 * a2), &v5);
  return Function_2021c50(*(uint **)(v3 + 4 * *(uchar *)(v3 + v2 + 56) + 60), (int *)&v5);
}

//----- (0225EEEC) --------------------------------------------------------
int __fastcall Function_225eeec(uint a1)
{
  uint v1;

  v1 = a1;
  if ( a1 >= 0x18 )
    ErrorHandler();
  return *((uchar *)&dword_225F0E8 + 2 * v1);
}

//----- (0225EF04) --------------------------------------------------------
int __fastcall Function_225ef04(uint a1)
{
  uint v1;

  v1 = a1;
  if ( a1 >= 0x18 )
    ErrorHandler();
  return *((uchar *)&dword_225F0E8 + 2 * v1 + 1);
}

//----- (0225EF1C) --------------------------------------------------------
int __fastcall Function_225ef1c(int *a1, uint a2)
{
  uint v2;
  int *v3;
  int result;

  v2 = a2;
  v3 = a1;
  *a1 = LoadFromMsgNARC(0, 26, 696, a2);
  v3[1] = (int)Function_200b368(8u, 64, v2);
  v3[2] = Function_2023790(128, v2);
  result = Function_2023790(128, v2);
  v3[3] = result;
  return result;
}

//----- (0225EF54) --------------------------------------------------------
uint __fastcall Function_225ef54(ushort **a1)
{
  ushort **v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  Function_200b190(*a1);
  Function_200b3f0((uint *)v1[1], v2);
  Function_20237bc_FreeMsg((int)v1[2], v3);
  return Function_20237bc_FreeMsg((int)v1[3], v4);
}

//----- (0225EF74) --------------------------------------------------------
int __fastcall Function_225ef74(int a1, uint a2)
{
  int v2;

  v2 = a1;
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)a1, a2, *(ushort **)(a1 + 8));
  return *(uint *)(v2 + 8);
}

//----- (0225EF84) --------------------------------------------------------
char *__fastcall Function_225ef84(ushort ***a1, uint a2, ushort *a3)
{
  return Function_200b1b8_CallMsgDecrypt(*a1, a2, a3);
}

//----- (0225EF90) --------------------------------------------------------
int __fastcall Function_225ef90(int a1, uint a2)
{
  int *v2;
  uint v3;

  v2 = (int *)a1;
  v3 = a2;
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)a1, 3u, *(ushort **)(a1 + 12));
  Function_200bdd0(v2[1], 0, v3);
  Function_200c388((uint *)v2[1], v2[2], v2[3]);
  return v2[2];
}

//----- (0225EFB8) --------------------------------------------------------
int __fastcall Function_225efb8(int a1, int a2, uint a3)
{
  int v3;
  int v4;
  uint v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_200c41c(*(uint **)(a1 + 4), a2);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)v3, 3u, *(ushort **)(v3 + 12));
  Function_200be08(*(uint *)(v3 + 4), 0, v4, v5);
  Function_200c388(*(uint **)(v3 + 4), *(uint *)(v3 + 8), *(uint *)(v3 + 12));
  return *(uint *)(v3 + 8);
}

//----- (0225EFEC) --------------------------------------------------------
int __fastcall Function_225efec(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = 0;
  do
  {
    if ( (((int (__fastcall *)(int, uint))dword_223113C[324])(v1, (uchar)v2) & 0xFF) == 1 )
      return v2;
    ++v2;
  }
  while ( v2 < 50 );
  return 50;
}

