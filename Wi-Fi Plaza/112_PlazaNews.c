//----- (0225C700) --------------------------------------------------------
int __fastcall Function_225c700(int a1)
{
  int v1;
  int *v2;
  int *v3;

  v1 = a1;
  v2 = (int *)LoadPtrToOverWorldDataIn18(a1);
  Function_2017fc8(3, 107, 327680);
  v3 = (int *)MallocSomeDataAndStorePtrInOverlayData1c(v1, 624, 0x6Bu);
  Call_FillMemWithValue(v3, 0, 0x270u);
  *v3 = *v2;
  v3[1] = v2[1];
  Function_225c9bc(v3 + 2, 107);
  Function_225cc64(v3 + 83, v3 + 2, 107);
  Function_225cda8(v3 + 85, v3 + 2, v3 + 83, *v3, v3[1], v2[2], 107);
  Function_225cfc0(v3 + 88, v3 + 2, v3 + 83, *v3, v2[2], 107);
  Function_225d1ec(v3 + 89, v3 + 2, 107);
  Function_225d57c(v3 + 128, v3 + 2, 107);
  SetMainLoopFunctionCall((int)Function_225c964, (int)v3);
  Function_20177a4();
  return 1;
}

//----- (0225C7C4) --------------------------------------------------------
int __fastcall Function_225c7c4(int a1, int *a2)
{
  int v2;
  int *v3;
  uint *v4;
  int v5;
  int v6;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = (uint *)LoadOverlayData1c(a1);
  v5 = LoadPtrToOverWorldDataIn18(v2);
  v6 = *v3;
  if ( (uint)*v3 <= 4 )
    JUMPOUT(__CS__, *((short *)&off_225C7EE + v6) + 36030448);
  switch ( (uchar)v6 )
  {
    case 0:
      Function_200f174(0, 1, 1, 0, 6, 1, 107);
      ((void (__fastcall *)(uint, int))dword_222E31C[0])(*(uint *)(v5 + 8), 1);
      ++*v3;
      goto LABEL_22;
    case 1:
      if ( Function_200f2ac() == 1 )
        ++*v3;
      goto LABEL_22;
    case 2:
      if ( dword_21BF6C4 & 2
        || ((int (__fastcall *)(uint))dword_222E12C[0])(*(uint *)(v5 + 8)) == 1
        || ((int (*)(void))dword_2231760[0])() == 1 )
      {
        if ( ((int (__fastcall *)(uint))dword_222E12C[0])(*(uint *)(v5 + 8)) == 1 )
          ((void (__fastcall *)(uint))dword_222E2A4[0])(*(uint *)(v5 + 8));
        *v3 = 3;
      }
      else
      {
        if ( Function_225cdfc(v4 + 85, *v4, v4[1]) == 1 )
          Function_225d718(v4 + 128, 1);
        if ( Function_225cfd8(v4 + 88, *v4) == 1 )
          Function_225d718(v4 + 128, 2);
        if ( Function_225d304(v4 + 89, *v4, *(uint *)(v5 + 8), 107) == 1 )
          Function_225d718(v4 + 128, 3);
      }
      goto LABEL_22;
    case 3:
      Function_200f174(0, 0, 0, 0, 6, 1, 107);
      ++*v3;
      goto LABEL_22;
    case 4:
      if ( Function_200f2ac() != 1 )
        goto LABEL_22;
      result = 1;
      break;
    default:
LABEL_22:
      Function_225c970(v4, *(uint *)(v5 + 8));
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
  Function_225d6dc(v2 + 512);
  Function_225cdf8(v2 + 340);
  Function_225cfd4(v2 + 352);
  Function_225d2d0(v2 + 356);
  Function_225cc84(v2 + 332);
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  Function_225c9f4(v2 + 8);
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(107);
  return 1;
}

//----- (0225C964) --------------------------------------------------------
int __fastcall Function_225c964(int a1)
{
  return Function_225ca20(a1 + 8);
}

//----- (0225C970) --------------------------------------------------------
int __fastcall Function_225c970(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_225ce60(a1 + 85, v1 + 83, v1 + 2);
  Function_225d004(v1 + 88, v1 + 83, v1 + 2, *v1);
  Function_225d3e0(v1 + 89);
  Function_225d700(v1 + 128);
  return Function_225ca14(v1 + 2);
}

//----- (0225C9BC) --------------------------------------------------------
int __fastcall Function_225c9bc(int a1, uint a2, int a3, int a4)
{
  int v4;
  uint v5;

  v4 = a1;
  v5 = a2;
  *(uint *)(a1 + 320) = LoadFromNARC_8(169, a2, a3, a4);
  Function_201dbec(48, v5);
  GX_SetBanks(&dword_225D848[4]);
  Function_225ca34(v4, v5);
  return Function_225cb98(v4, v5);
}

//----- (0225C9F4) --------------------------------------------------------
int __fastcall Function_225c9f4(int a1)
{
  int v1;

  v1 = a1;
  Call_FS_CloseFile(*(int **)(a1 + 320));
  Function_201dc3c();
  Function_225cb60(v1);
  return Function_225cc38(v1);
}

//----- (0225CA14) --------------------------------------------------------
int __fastcall Function_225ca14(int a1)
{
  return Function_20219f8(*(uint *)(a1 + 4));
}

//----- (0225CA20) --------------------------------------------------------
int __fastcall Function_225ca20(int *a1)
{
  Function_201c2b8(*a1);
  Function_200a858();
  return Function_201dcac();
}

//----- (0225CA34) --------------------------------------------------------
int __fastcall Function_225ca34(int a1, uint a2)
{
  int v2;
  uint v3;
  int *v4;
  int *v5;
  int v7;

  v2 = a1;
  v3 = a2;
  SetGraphicsModes(&dword_225D818[7]);
  *(uint *)v2 = Function_2018340(v3);
  byte_21BF6E1 = 0;
  Function_201ffe8();
  v4 = &dword_225D890[12];
  v5 = &dword_225D844;
  v7 = 0;
  do
  {
    Function_20183c4(*(uint **)v2, *v5 & 0xFF, v4, 0);
    Function_2019690(*v5 & 0xFF, 32, 0, v3);
    Function_2019ebc(*(uint **)v2, *v5 & 0xFF);
    v4 += 7;
    ++v5;
    ++v7;
  }
  while ( v7 < 5 );
  Function_2007130(*(uint *)(v2 + 320), 0, 0, 0, 0, v3);
  LoadFromNARC_PlFont2(0, 320, v3);
  Function_20070e8(*(uint *)(v2 + 320), 1u, *(uint **)v2, 1u, 0, 0, 0, v3);
  Function_200710c(*(uint *)(v2 + 320), 3u, *(uint **)v2, 1u, 0, 0, 0, v3);
  Function_200710c(*(uint *)(v2 + 320), 4u, *(uint **)v2, 2u, 0, 0, 0, v3);
  Function_2007130(*(uint *)(v2 + 320), 0, 4u, 0, 0, v3);
  Function_20070e8(*(uint *)(v2 + 320), 2u, *(uint **)v2, 4u, 0, 0, 0, v3);
  return Function_200710c(*(uint *)(v2 + 320), 6u, *(uint **)v2, 4u, 0, 0, 0, v3);
}

//----- (0225CB60) --------------------------------------------------------
uint __fastcall Function_225cb60(int *a1)
{
  int *v1;
  int *v2;
  int v3;

  v1 = &dword_225D844;
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

//----- (0225CB98) --------------------------------------------------------
uint __fastcall Function_225cb98(int a1, uint a2)
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
  Function_201e88c(&dword_225D814, 2097168, 16);
  Function_201f834(32, v3);
  Function_201e994();
  Function_201f8e4();
  Function_200966c(1, 2097168, v4, v5);
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

//----- (0225CC38) --------------------------------------------------------
int *__fastcall Function_225cc38(int a1)
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

//----- (0225CC64) --------------------------------------------------------
int __fastcall Function_225cc64(int *a1, int a2, int a3)
{
  int *v3;
  int result;

  v3 = a1;
  result = Function_20071d0(*(uint *)(a2 + 320), 5u, 0, a1 + 1, a3);
  *v3 = result;
  return result;
}

//----- (0225CC84) --------------------------------------------------------
uint __fastcall Function_225cc84(int *a1)
{
  return free(*a1);
}

//----- (0225CC90) --------------------------------------------------------
int __fastcall Function_225cc90(int a1, int *a2, char a3, int a4, uchar a5)
{
  int *v5;

  v5 = a2;
  Function_20198e8(
    *a2,
    3,
    (a4 + 5) & 0xFF,
    (2 * a5 + 4) & 0xFF,
    1u,
    2u,
    *(uint *)(a1 + 4) + 12,
    a3 + 6,
    0,
    (uint)**(ushort **)(a1 + 4) << 21 >> 24,
    (uint)*(ushort *)(*(uint *)(a1 + 4) + 2) << 21 >> 24);
  return Function_201c3c0(*v5, 3);
}

//----- (0225CCE8) --------------------------------------------------------
int __fastcall Function_225cce8(int a1, int *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9;
  int *v10;
  int v11;
  int v12;
  char v13;
  char v14;
  ushort *v15;
  int v16;
  int v17;
  char v19;

  v9 = a1;
  v10 = a2;
  v11 = a3;
  v12 = a4;
  u32_div_f(a5, 3);
  v19 = v13;
  v14 = u32_div_f(a5, 3);
  if ( a8 )
    v14 += 2;
  if ( a6 == 1 )
    ++v14;
  v15 = *(ushort **)(v9 + 4);
  v16 = 2 * v12 + 4;
  v17 = 2 * v11 + 21;
  Function_20198e8(
    *v10,
    3,
    (uchar)v17,
    (uchar)v16,
    2u,
    2u,
    (int)(v15 + 6),
    2 * v19,
    2 * v14,
    (uint)*v15 << 21 >> 24,
    (uint)v15[1] << 21 >> 24);
  if ( a9 )
  {
    Function_2019e2c(*v10, 3, (uchar)v17, (uchar)v16, 2u, 2u, 4u);
  }
  else if ( a7 )
  {
    Function_2019e2c(*v10, 3, (uchar)v17, (uchar)v16, 2u, 2u, 3u);
  }
  return Function_201c3c0(*v10, 3);
}

//----- (0225CDA8) --------------------------------------------------------
int __fastcall Function_225cda8(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v6 = a1;
  v7 = a2;
  v8 = a3;
  v9 = a4;
  v10 = ((int (__fastcall *)(int))dword_222EB48[0])(a6);
  *(uchar *)v6 = 0;
  v11 = v10;
  *(uchar *)(v6 + 1) = u32_div_f(v10, 60) + 1;
  *(uchar *)(v6 + 2) = 0;
  *(uint *)(v6 + 8) = u32_div_f(v11, 40);
  *(uchar *)(v6 + 4) = 1;
  *(ushort *)(v6 + 6) = 0;
  *(uchar *)(v6 + 5) = 0;
  Function_225cdfc(v6, v9, a5);
  return Function_225ce60(v6, v8, v7);
}

//----- (0225CDF8) --------------------------------------------------------
void Function_225cdf8()
{
  ;
}

//----- (0225CDFC) --------------------------------------------------------
int __fastcall Function_225cdfc(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  char v8;
  char v9;
  uchar v10;
  int v11;
  char v12;
  int v13;

  v13 = a4;
  v4 = a1;
  v5 = a3;
  v6 = 0;
  if ( !((int (__fastcall *)(int, char *))dword_2231C10[0])(a2, &v12) )
    return 0;
  if ( *(uchar *)(v4 + 4) == 1 )
  {
    *(uchar *)(v4 + 4) = 0;
    v6 = 1;
    *(uchar *)(v4 + 5) = 1;
  }
  ((void (__fastcall *)(int, char *, int *))dword_223113C[224])(v5, &v12, &v11);
  ((void (__fastcall *)(int *, int, char *))dword_223113C[224])(&v11, v4, &v8);
  if ( (uint)v10 >= *(uint *)(v4 + 8) || v9 || v8 )
  {
    v6 = 1;
    *(uchar *)(v4 + 5) = 1;
    *(uint *)v4 = v11;
  }
  return v6;
}

//----- (0225CE60) --------------------------------------------------------
int __fastcall Function_225ce60(int a1)
{
  int result;

  if ( *(uchar *)(a1 + 4) == 1 )
    result = Function_225ce74();
  else
    result = Function_225ce88();
  return result;
}

//----- (0225CE74) --------------------------------------------------------
int __fastcall Function_225ce74(int result)
{
  if ( (ushort)++*(ushort *)(result + 6) > 0x10u )
    *(ushort *)(result + 6) = 0;
  return result;
}

//----- (0225CE88) --------------------------------------------------------
int __fastcall Function_225ce88(uchar *a1, int a2, int *a3)
{
  uchar *v3;
  int result;
  uint v5;
  int v6;
  uint v7;
  char v8;
  uint v9;
  int v10;
  uchar v11;
  uint v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int *v17;
  uchar v18;
  int v19;

  v3 = a1;
  v16 = a2;
  v17 = a3;
  result = u32_div_f(a1[2] + 60 * a1[1] + 3600 * *a1, *((uint *)a1 + 2));
  v5 = result;
  if ( v3[5] )
  {
    *((ushort *)v3 + 3) = 0;
    v3[5] = 0;
    Function_2019cb8(*v17, 3, 0, 5u, 4u, 0xAu, 8u, 0);
    Function_201c3c0(*v17, 3);
    v19 = 0;
    do
    {
      v6 = 0;
      do
      {
        v7 = 9 - v6 + 10 * (3 - v19);
        if ( v7 >= v5 )
        {
          if ( v7 == v5 )
          {
            v8 = 1;
          }
          else if ( v19 == 0 )
          {
            v8 = 2;
          }
          else
          {
            v8 = 0;
          }
          Function_225cc90(v16, v17, v8, (9 - v6) & 0xFF, 3 - v19);
        }
        ++v6;
      }
      while ( v6 < 10 );
      result = v19 + 1;
      v19 = result;
    }
    while ( result < 4 );
  }
  else if ( (uint)result < 0x28 )
  {
    v9 = (ushort)++*((ushort *)v3 + 3);
    v10 = (v9 >> 31) + __ROR4__((v9 << 27) - (v9 >> 31), 27);
    u32_div_f(result, 10);
    v18 = v11;
    result = u32_div_f(v5, 10);
    if ( v10 )
    {
      if ( (v9 >> 31) + __ROR4__((v9 << 27) - (v9 >> 31), 27) == 16 )
        result = Function_225cc90(v16, v17, 3, v18, result);
    }
    else
    {
      v12 = (uint)(30 * *((uint *)v3 + 2)) >> 2;
      LOBYTE(v13) = 6;
      v14 = 0;
      while ( 1 )
      {
        v15 = v14 + 1;
        if ( v12 * (v14 + 1) > v9 )
          break;
        ++v14;
        if ( v15 >= 4 )
          goto LABEL_20;
      }
      v13 = dword_225D818[v14 + 3];
LABEL_20:
      result = Function_225cc90(v16, v17, v13, v18, result);
    }
  }
  return result;
}

//----- (0225CFC0) --------------------------------------------------------
int __fastcall Function_225cfc0(int a1, int a2, int a3, int a4, int a5)
{
  return Function_225d08c(a3, a2, a4, a5);
}

//----- (0225CFD4) --------------------------------------------------------
void Function_225cfd4()
{
  ;
}

//----- (0225CFD8) --------------------------------------------------------
int __fastcall Function_225cfd8(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = 0;
  v4 = ((int (__fastcall *)(int))dword_2231C54[0])(a2);
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      v3 = 1;
      *(ushort *)(v2 + 2) = 1;
    }
    else if ( v4 == 2 )
    {
      *(ushort *)(v2 + 2) = 3;
      v3 = 1;
    }
  }
  return v3;
}

//----- (0225D004) --------------------------------------------------------
int __fastcall Function_225d004(short *a1, int a2, int a3, int a4, int a5)
{
  short *v5;
  int result;

  v5 = a1;
  result = (ushort)a1[1];
  switch ( (uchar)result )
  {
    case 1:
      v5[1] = 2;
      result = 0;
      *v5 = 0;
      break;
    case 2:
      Function_225d144(a2, a3, a4, a5, *v5);
      result = 0;
      if ( ++*v5 >= 32 )
        v5[1] = 0;
      break;
    case 3:
      v5[1] = 4;
      result = 0;
      *v5 = 0;
      break;
    case 4:
      Function_225d164(a2, a3, a4, a5, *v5);
      result = 0;
      if ( ++*v5 >= 32 )
        v5[1] = 0;
      break;
    default:
      return result;
  }
  return result;
}

//----- (0225D08C) --------------------------------------------------------
int __fastcall Function_225d08c(int a1, int *a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int result;
  int v11;
  int *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;

  v11 = a1;
  v5 = a3;
  v13 = a4;
  v12 = a2;
  Function_2019cb8(*a2, 3, 0, 0x15u, 4u, 0xAu, 8u, 0);
  v6 = 0;
  v17 = 0;
  do
  {
    v7 = 0;
    do
    {
      if ( ((int (__fastcall *)(int, int))dword_2231C18[0])(v5, v7 + v6) )
      {
        v16 = ((int (__fastcall *)(int, int))dword_2231C24[0])(v5, v7 + v6);
        v15 = ((int (__fastcall *)(int, int))dword_2231C30[0])(v5, v7 + v6);
        v14 = ((int (__fastcall *)(int, int))dword_2231C3C[0])(v5, v7 + v6);
        v18 = ((int (__fastcall *)(int, int))dword_2231C48[0])(v5, v7 + v6);
        v8 = ((int (__fastcall *)(int, int))dword_222E924[0])(v13, v7 + v6);
        if ( a5 != 2 || v18 != 1 )
          v9 = a5;
        else
          v9 = 0;
        Function_225cce8(v11, v12, (uchar)v7, (uchar)v17, v9, v16, v15, v14, v8);
      }
      ++v7;
    }
    while ( v7 < 5 );
    v6 += 5;
    result = v17 + 1;
    v17 = result;
  }
  while ( result < 4 );
  return result;
}

//----- (0225D144) --------------------------------------------------------
int __fastcall Function_225d144(int result, int *a2, int a3, int a4, uint a5)
{
  int v5;

  if ( !(a5 & 7) )
  {
    if ( (a5 >> 3) & 1 )
      v5 = 0;
    else
      v5 = 2;
    result = Function_225d08c(result, a2, a3, a4, v5);
  }
  return result;
}

//----- (0225D164) --------------------------------------------------------
int __fastcall Function_225d164(int result, int *a2, int a3, int a4, uint a5)
{
  int v5;

  if ( !(a5 & 7) )
  {
    v5 = 1;
    if ( (a5 >> 3) & 1 )
      v5 = 0;
    result = Function_225d08c(result, a2, a3, a4, v5);
  }
  return result;
}

//----- (0225D180) --------------------------------------------------------
int __fastcall Function_225d180(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int result;
  int v9;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v9 = a4;
  v7 = 0;
  do
  {
    result = ((int (__fastcall *)(int, int, int))dword_2231D00[0])(v5, v6, v7);
    if ( result != 20 )
    {
      if ( ((int (__fastcall *)(int))dword_222E924[0])(v9) == 1 )
      {
        result = 9;
        *(uchar *)(v4 + v7) = 9;
      }
      else
      {
        result = 5;
        *(uchar *)(v4 + v7) = 5;
      }
    }
    ++v7;
  }
  while ( v7 < 4 );
  return result;
}

//----- (0225D1B8) --------------------------------------------------------
uint __fastcall Function_225d1b8(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  uint result;
  int v8;

  v3 = 0;
  v4 = *(uint *)(a2 + 12);
  v8 = a1;
  v5 = 0;
  v6 = 32 * a3 + 10;
  do
  {
    result = Function_201dc68(15, v6 + v5, v4 + 2 * *(uchar *)(v8 + v3) + 224, 4);
    if ( !result )
      result = ErrorHandler();
    ++v3;
    v5 += 4;
  }
  while ( v3 < 4 );
  return result;
}

//----- (0225D1EC) --------------------------------------------------------
uint __fastcall Function_225d1ec(uint *a1, int a2, uint a3)
{
  char *v3;
  int v4;
  short v5;
  int v6;
  uint *v8;
  int v9;
  uint v10;
  uint *v11;

  v3 = &byte_225D804;
  v8 = a1;
  v9 = a2;
  v10 = a3;
  v4 = 0;
  v11 = a1;
  v5 = 768;
  v6 = (int)(a1 + 24);
  do
  {
    Function_225d408(v11, v9, v4, v10);
    Function_201a7e8(*(uint **)v9, v6, 3, 1, *v3, 0x1Eu, 2u, v4 + 7, v5);
    Function_201ada4_ClearTextBox(v6, 0);
    Function_201a9a4(v6);
    ++v4;
    v11 += 8;
    v5 += 60;
    ++v3;
    v6 += 16;
  }
  while ( v4 < 3 );
  v8[36] = Function_2023790(256, v10);
  v8[37] = Function_20071ec(*(uint *)(v9 + 320), 0, v8 + 38, v10);
  Function_201972c(0, *(uint *)(v8[38] + 12) + 238, 4, 250);
  Function_201972c(0, *(uint *)(v8[38] + 12) + 238, 4, 282);
  return Function_201972c(0, *(uint *)(v8[38] + 12) + 238, 4, 314);
}

//----- (0225D2D0) --------------------------------------------------------
int __fastcall Function_225d2d0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;

  v1 = a1;
  free(*(uint *)(a1 + 148));
  Function_20237bc_FreeMsg(*(uint *)(v1 + 144), v2);
  v3 = 0;
  v4 = v1 + 96;
  do
  {
    Function_201a8fc(v4);
    result = Function_225d44c(v1);
    ++v3;
    v4 += 16;
    v1 += 32;
  }
  while ( v3 < 3 );
  return result;
}

//----- (0225D304) --------------------------------------------------------
int __fastcall Function_225d304(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  int v10;
  int v11;
  int v12;
  char v13;
  char v14;
  int v15;

  v15 = a4;
  v4 = a1;
  v5 = a2;
  v10 = a3;
  v11 = a4;
  ((void (__fastcall *)(int, char *))dword_222E934[0])(a3, &v14);
  v6 = &dword_225D810;
  v12 = 2;
  v7 = v4 + 64;
  do
  {
    if ( *(uchar *)v7 && Function_225d4e4(v7) == 1 )
    {
      if ( v12 + 1 < 3 )
        Function_225d460(v4 + 32 * (v12 + 1), *(uint *)(v7 + 8), v6[1], v7 + 28, *(uint *)(v4 + 152));
      Function_225d4dc(v7);
    }
    v7 -= 32;
    --v6;
    --v12;
  }
  while ( v12 >= 0 );
  if ( *(uchar *)v4 || ((int (__fastcall *)(int))dword_2231C60[0])(v5) != 1 )
    return 0;
  while ( 1 )
  {
    v8 = ((int (__fastcall *)(int))dword_2231C78[0])(v5);
    if ( ((int (__fastcall *)(int, char *, int, uint, int))dword_2231C94[0])(v5, &v14, v8, *(uint *)(v4 + 144), v11) == 1 )
      break;
    ((void (__fastcall *)(int))dword_2231C04[0])(v5);
    if ( ((int (__fastcall *)(int))dword_2231C60[0])(v5) != 1 )
      return 0;
  }
  Function_225d180((int)&v13, v5, v8, v10);
  Function_225d460(v4, *(uint *)(v4 + 144), 336, &v13, *(uint *)(v4 + 152));
  ((void (__fastcall *)(int))dword_2231C04[0])(v5);
  return 1;
}

//----- (0225D3E0) --------------------------------------------------------
int __fastcall Function_225d3e0(uchar *a1)
{
  uchar *v1;
  int v2;
  int v3;
  uchar *v4;
  int result;

  v1 = a1;
  v2 = 0;
  v3 = (int)(a1 + 96);
  v4 = a1;
  do
  {
    result = *v1;
    if ( result == 1 )
      result = Function_225d4f8(v4, v3);
    ++v2;
    v1 += 32;
    v3 += 16;
    v4 += 32;
  }
  while ( v2 < 3 );
  return result;
}

//----- (0225D408) --------------------------------------------------------
int __fastcall Function_225d408(int a1, uint **a2, char a3, uint a4)
{
  int v4;
  uint **v5;
  char v6;

  v4 = a1;
  *(uchar *)a1 = 0;
  *(ushort *)(a1 + 2) = 0;
  v5 = a2;
  v6 = a3;
  *(uint *)(a1 + 8) = Function_2023790(256, a4);
  *(uchar *)(v4 + 1) = v6 + 7;
  return Function_201a7e8(*v5, v4 + 12, 3, 0, 0, 0xB4u, 2u, 7, 0);
}

//----- (0225D44C) --------------------------------------------------------
uint __fastcall Function_225d44c(int a1, int a2)
{
  int v2;

  v2 = a1;
  Function_20237bc_FreeMsg(*(uint *)(a1 + 8), a2);
  return Function_201a8fc(v2 + 12);
}

//----- (0225D460) --------------------------------------------------------
uint __fastcall Function_225d460(int a1, int a2, short a3, uchar *a4, int a5)
{
  int v5;
  int v6;
  short v7;
  uchar *v8;
  int v9;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  Function_2023810(*(ushort **)(a1 + 8), a2);
  *(uchar *)v5 = 1;
  *(ushort *)(v5 + 2) = 0;
  *(ushort *)(v5 + 4) = v7;
  *(ushort *)(v5 + 6) = Function_2002d7c(1, v6, 0);
  *(ushort *)(v5 + 6) += 256;
  if ( *(ushort *)(v5 + 6) > 0x5A0u )
    ErrorHandler();
  Function_201ada4_ClearTextBox(v5 + 12, 0);
  v9 = *(uint *)(v5 + 8);
  Function_201d738_CallInitTextInterpreter(v5 + 12, 1);
  *(uchar *)(v5 + 28) = *v8;
  *(uchar *)(v5 + 29) = v8[1];
  *(uchar *)(v5 + 30) = v8[2];
  *(uchar *)(v5 + 31) = v8[3];
  return Function_225d1b8(v5 + 28, a5, *(uchar *)(v5 + 1));
}

//----- (0225D4DC) --------------------------------------------------------
uchar *__fastcall Function_225d4dc(uchar *result)
{
  *result = 0;
  return result;
}

//----- (0225D4E4) --------------------------------------------------------
int __fastcall Function_225d4e4(int a1)
{
  int v1;
  int v2;

  v1 = 1;
  v2 = *(ushort *)(a1 + 2) + 1;
  if ( v2 <= *(ushort *)(a1 + 4) )
  {
    *(ushort *)(a1 + 2) = v2;
    v1 = 0;
  }
  return v1;
}

//----- (0225D4F8) --------------------------------------------------------
int __fastcall Function_225d4f8(int a1, int a2)
{
  int v2;
  int v3;
  ushort v4;
  ushort v5;
  int v7;
  int v8;

  v2 = a1;
  v7 = a2;
  v8 = *(ushort *)(a1 + 6);
  v3 = s32_div_f(v8 * *(ushort *)(v2 + 2), *(ushort *)(v2 + 4));
  if ( v3 >= 256 )
  {
    v5 = v3 - 256;
    v4 = 0;
    v3 = v8 - v3;
    if ( v3 > 255 )
      LOWORD(v3) = 255;
  }
  else
  {
    v4 = 255 - v3;
    v5 = 0;
  }
  Function_201ae78(v7, 0, 0, 0, 0xFFu, 0x10u);
  Function_201ae08(v7, *(uint *)(v2 + 24), v5, 0, 1440, 16, v4, 0, v3, 0x10u, 0xFu);
  return Function_201a9a4(v7);
}

//----- (0225D57C) --------------------------------------------------------
ushort *__fastcall Function_225d57c(int *a1, uint **a2, uint a3)
{
  char *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint v8;
  int v9;
  int v10;
  uint v11;
  uint v12;
  int v13;
  int v14;
  int v16;
  uint **v17;
  uint v18;
  int v19;
  int *v20;
  int *v21;
  uint v22;
  ushort *v23;
  ushort **v24;
  int v25;

  v17 = a2;
  v18 = a3;
  v16 = (int)a1;
  Call_FillMemWithValue(a1, 0, 0x70u);
  v24 = (ushort **)LoadFromMsgNARC(0, 26, 653, v18);
  v23 = (ushort *)Function_2023790(128, v18);
  v25 = 0;
  v3 = &byte_225D880;
  v21 = &dword_225D968;
  v20 = dword_225D960;
  v19 = v16 + 64;
  do
  {
    Function_225d73c(v19, *(ushort *)v20, *v21);
    Function_201a7e8(*v17, v16, 0, *v3, v3[1], v3[2], v3[3], v3[6], *((ushort *)v3 + 2));
    Function_201ada4_ClearTextBox(v16, 0);
    Function_200b1b8_CallMsgDecrypt(v24, v25, v23);
    v22 = Function_2023c5c((int)v23);
    v4 = (uchar)v3[8];
    v5 = Function_2023c3c((int)v23);
    v7 = Function_2023790(v5 + 1, v18);
    v8 = 0;
    if ( v22 )
    {
      do
      {
        Function_2023c9c(v7, (int)v23, v8);
        v9 = (uchar)v3[9];
        if ( v3[9] )
        {
          if ( v9 == 1 )
          {
            v11 = (uchar)v3[7] - ((Function_2002eb4(0, v7, 0) + 1) >> 1);
          }
          else if ( v9 == 2 )
          {
            v12 = (uchar)v3[7] - Function_2002eb4(0, v7, 0);
          }
        }
        else
        {
          v10 = (uchar)v3[7];
        }
        v13 = *((uint *)v3 + 3);
        Function_201d78c(v16, 0);
        ++v8;
        v4 += 16;
      }
      while ( v8 < v22 );
    }
    Function_20237bc_FreeMsg(v7, v6);
    Function_201a9a4(v16);
    v3 += 16;
    ++v21;
    v20 = (int *)((char *)v20 + 2);
    v19 += 12;
    v16 += 16;
    ++v25;
  }
  while ( v25 < 4 );
  Function_20237bc_FreeMsg((int)v23, v14);
  return Function_200b190((ushort *)v24);
}

//----- (0225D6DC) --------------------------------------------------------
int __fastcall Function_225d6dc(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  v2 = 0;
  v3 = a1 + 64;
  do
  {
    Function_201a8fc(v1);
    result = Function_225d75c(v3);
    ++v2;
    v1 += 16;
    v3 += 12;
  }
  while ( v2 < 4 );
  return result;
}

//----- (0225D700) --------------------------------------------------------
int __fastcall Function_225d700(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = 0;
  v2 = a1 + 64;
  do
  {
    result = Function_225d784(v2);
    ++v1;
    v2 += 12;
  }
  while ( v1 < 4 );
  return result;
}

//----- (0225D718) --------------------------------------------------------
int __fastcall Function_225d718(int a1, uint a2)
{
  uint v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 4 )
    ErrorHandler();
  if ( !v2 )
    ErrorHandler();
  return Function_225d778(v3 + 64 + 12 * v2);
}

//----- (0225D73C) --------------------------------------------------------
uchar *__fastcall Function_225d73c(uchar *result, short a2, int a3)
{
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  result[5] = 0;
  result[6] = 0;
  result[7] = 0;
  result[8] = 0;
  result[9] = 0;
  result[10] = 0;
  result[11] = 0;
  *((ushort *)result + 3) = a2;
  *((uint *)result + 2) = a3;
  return result;
}

//----- (0225D75C) --------------------------------------------------------
uchar *__fastcall Function_225d75c(uchar *result)
{
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  result[5] = 0;
  result[6] = 0;
  result[7] = 0;
  result[8] = 0;
  result[9] = 0;
  result[10] = 0;
  result[11] = 0;
  return result;
}

//----- (0225D778) --------------------------------------------------------
ushort *__fastcall Function_225d778(ushort *result)
{
  *result = 1;
  result[1] = 0;
  return result;
}

//----- (0225D784) --------------------------------------------------------
int __fastcall Function_225d784(ushort *a1)
{
  ushort *v1;
  int result;
  uint v3;
  int v4;
  short v5;

  v1 = a1;
  if ( a1[1] > 0x1Cu )
    *a1 = 0;
  result = *a1;
  if ( *v1 )
  {
    if ( !v1[1] )
      Function_2005748(*((uint *)v1 + 2) & 0xFFFF);
    v3 = v1[1];
    if ( v3 >= 2 )
    {
      if ( v3 >= 0xE )
        LOBYTE(v4) = 16 - s32_div_f(16 * (v3 - 14), 14);
      else
        LOBYTE(v4) = 16;
    }
    else
    {
      v4 = (int)(16 * v3) / 2;
    }
    v5 = 14;
    Function_200393c((int)&v5, (int)(v1 + 2), 1u, (uchar)v4, 0x19u);
    DC_FlushRange((int)(v1 + 2), 2);
    GX_LoadBGPltt((int)(v1 + 2), v1[3], 2u);
    result = v1[1] + 1;
    v1[1] = result;
  }
  return result;
}

