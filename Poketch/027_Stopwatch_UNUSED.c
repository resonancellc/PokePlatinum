//----- (022561D4) --------------------------------------------------------
int __fastcall Function_22561d4(int *a1, int a2)
{
  int *v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = a2;
  v4 = malloc(8u, 104);
  if ( v4 )
  {
    if ( Function_225621c() )
    {
      *(uint *)(v4 + 100) = v3;
      if ( AddTaskToTaskList1((int)Function_22562fc, v4, 1u) )
      {
        *v2 = v4;
        return 1;
      }
    }
    else
    {
      free(v4);
    }
  }
  return 0;
}

//----- (0225621C) --------------------------------------------------------
BOOL __fastcall Function_225621c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  uint *v6;
  int v7;
  uint *v8;
  int v9;
  BOOL result;

  v3 = a1;
  v4 = a2;
  *(uint *)(a1 + 8) = a3;
  if ( Function_2099d7c(a3, (uint *)(a1 + 56), 0x24u) )
  {
    v5 = *(uint *)(v3 + 80);
    v6 = (uint *)(v3 + 12);
    *v6 = *(uint *)(v3 + 76);
    v6[1] = v5;
    v7 = *(uint *)(v3 + 88);
    v8 = (uint *)(v3 + 20);
    *v8 = *(uint *)(v3 + 84);
    v8[1] = v7;
    *(uint *)(v3 + 48) = *(uint *)(v3 + 60);
    *(uint *)(v3 + 44) = *(uint *)(v3 + 64);
    *(uint *)(v3 + 40) = *(uint *)(v3 + 68);
    *(uint *)(v3 + 36) = *(uint *)(v3 + 72);
    v9 = *(uint *)(v3 + 56);
    *(uint *)(v3 + 28) = v9;
    if ( v9 )
      *(uint *)(v3 + 52) = 2;
    else
      *(uint *)(v3 + 52) = 0;
  }
  else
  {
    Function_2256664(v3);
    *(uint *)(v3 + 52) = 0;
  }
  result = 0;
  if ( Function_225680c(v3 + 96, v3 + 28, v4) )
  {
    *(uchar *)v3 = 0;
    *(uchar *)(v3 + 1) = 0;
    *(uchar *)(v3 + 3) = *(uchar *)v3;
    *(uchar *)(v3 + 2) = 0;
    if ( Function_2256608(v3) )
      result = 1;
  }
  return result;
}

//----- (022562AC) --------------------------------------------------------
uint __fastcall Function_22562ac(int *a1)
{
  int *v1;
  int *v2;
  int v3;
  int v4;
  uint *v5;
  int v6;
  uint *v7;

  v1 = a1;
  v2 = a1 + 3;
  v3 = *v2;
  v4 = v2[1];
  v5 = v1 + 19;
  *v5 = v3;
  v5[1] = v4;
  v6 = v1[6];
  v7 = v1 + 21;
  *v7 = v1[5];
  v7[1] = v6;
  v1[15] = v1[12];
  v1[16] = v1[11];
  v1[17] = v1[10];
  v1[18] = v1[9];
  v1[14] = v1[7];
  Function_2099d54(v1[2], v1 + 14, 0x24u);
  Function_2256654(v1);
  Function_2256890(v1[24]);
  return free((int)v1);
}

//----- (022562FC) --------------------------------------------------------
int __fastcall Function_22562fc(int result, uchar *a2)
{
  uchar *v2;
  uint v3;
  int *v4;

  v2 = a2;
  v3 = *a2;
  v4 = (int *)result;
  if ( v3 < 6 )
  {
    if ( v2[2] && v3 != 5 )
    {
      Function_2256360(v2, 5);
      v2[2] = 0;
    }
    ((void (__fastcall *)(uint, uint))dword_2254518[0])(*((uint *)v2 + 25), *((uint *)v2 + 23));
    Function_22566d8(v2, v2 + 28);
    result = ((int (__fastcall *)(uchar *))dword_2256F98[*v2 + 1])(v2);
    if ( result )
    {
      Function_22562ac((int *)v2);
      Call_RemoveTaskFromTaskList(v4);
      result = ((int (__fastcall *)(uint))dword_2254260[0])(*((uint *)v2 + 25));
    }
  }
  return result;
}

//----- (02256358) --------------------------------------------------------
int __fastcall Function_2256358(int result)
{
  *(uchar *)(result + 2) = 1;
  return result;
}

//----- (02256360) --------------------------------------------------------
uchar *__fastcall Function_2256360(uchar *result, char a2)
{
  result[3] = *result;
  if ( result[2] )
  {
    *result = 5;
    result[2] = 0;
  }
  else
  {
    *result = a2;
  }
  result[1] = 0;
  return result;
}

//----- (0225637C) --------------------------------------------------------
int __fastcall Function_225637c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_22569ec(*(uint *)(v1 + 96), 0) )
    {
      ((void (__fastcall *)(uint))dword_225424C[0])(*(uint *)(v1 + 100));
      if ( *(uint *)(v1 + 28) )
        Function_2256360((uchar *)v1, 2);
      else
        Function_2256360((uchar *)v1, 1);
    }
  }
  else
  {
    Function_22569c8(*(uint *)(v1 + 96), 0);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (022563CC) --------------------------------------------------------
int __fastcall Function_22563cc(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      v3 = *(uchar *)(v1 + 4);
      switch ( v3 )
      {
        case 2:
          *(uint *)(v1 + 52) = 0;
          Function_22569c8(*(uint *)(v1 + 96), 1);
          --*(uchar *)(v1 + 1);
          break;
        case 3:
          *(uint *)(v1 + 52) = 2;
          Function_22569c8(*(uint *)(v1 + 96), 1);
          Function_2256680(v1);
          Function_2256360((uchar *)v1, 2);
          break;
        case 5:
          *(uint *)(v1 + 52) = 3;
          Function_22569c8(*(uint *)(v1 + 96), 1);
          Function_2256360((uchar *)v1, 3);
          break;
      }
    }
  }
  else if ( *(uchar *)(v1 + 4) == 1 )
  {
    *(uint *)(v1 + 52) = 1;
    Function_22569c8(*(uint *)(v1 + 96), 1);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (0225644C) --------------------------------------------------------
int __fastcall Function_225644c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  if ( *(uchar *)(a1 + 1) )
  {
    if ( *(uchar *)(a1 + 1) == 1 )
    {
      v2 = *(uchar *)(a1 + 4);
      switch ( v2 )
      {
        case 2:
          *(uint *)(v1 + 52) = 0;
          Function_22569c8(*(uint *)(v1 + 96), 1);
          Function_2256360((uchar *)v1, 1);
          break;
        case 3:
          *(uint *)(v1 + 52) = 0;
          Function_22569c8(*(uint *)(v1 + 96), 1);
          Function_2256360((uchar *)v1, 1);
          break;
        case 5:
          *(uint *)(v1 + 52) = 3;
          Function_22569c8(*(uint *)(v1 + 96), 1);
          Function_2256360((uchar *)v1, 3);
          break;
      }
    }
  }
  else if ( *(uchar *)(a1 + 4) == 1 )
  {
    *(uint *)(a1 + 52) = 1;
    Function_22566c4();
    Function_22569c8(*(uint *)(v1 + 96), 1);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (022564D0) --------------------------------------------------------
int __fastcall Function_22564d0(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 4);
  switch ( v2 )
  {
    case 2:
      goto LABEL_7;
    case 3:
      if ( *(uchar *)(a1 + 3) == 1 )
      {
        Function_2256680(a1);
        *(uint *)(v1 + 52) = 2;
        Function_22569c8(*(uint *)(v1 + 96), 1);
        Function_2256360((uchar *)v1, 2);
        return 0;
      }
LABEL_7:
      *(uint *)(a1 + 52) = 0;
      Function_22569c8(*(uint *)(a1 + 96), 1);
      Function_2256360((uchar *)v1, 1);
      return 0;
    case 6:
      *(uint *)(a1 + 52) = 4;
      Function_22569c8(*(uint *)(a1 + 96), 1);
      Function_2256360((uchar *)v1, 4);
      break;
  }
  return 0;
}

//----- (02256534) --------------------------------------------------------
int __fastcall Function_2256534(int a1)
{
  int v1;

  v1 = a1;
  switch ( *(uchar *)(a1 + 1) )
  {
    case 0:
      *(ushort *)(a1 + 6) = 0;
      ++*(uchar *)(a1 + 1);
      goto LABEL_3;
    case 1:
LABEL_3:
      if ( (ushort)++*(ushort *)(a1 + 6) >= 0x5Au )
      {
        *(uint *)(a1 + 52) = 5;
        Function_22569c8(*(uint *)(a1 + 96), 1);
        *(ushort *)(v1 + 6) = 0;
        ++*(uchar *)(v1 + 1);
      }
      break;
    case 2:
      if ( (ushort)++*(ushort *)(a1 + 6) >= 0x3Cu )
      {
        *(uint *)(a1 + 52) = 6;
        Function_22569c8(*(uint *)(a1 + 96), 1);
        Function_2256664(v1);
        *(ushort *)(v1 + 6) = 0;
        ++*(uchar *)(v1 + 1);
      }
      break;
    case 3:
      if ( Function_22569ec(*(uint *)(a1 + 96), 1) )
      {
        *(uint *)(v1 + 52) = 0;
        Function_22569c8(*(uint *)(v1 + 96), 1);
        Function_2256360((uchar *)v1, 1);
      }
      break;
    default:
      return 0;
  }
  return 0;
}

//----- (022565D0) --------------------------------------------------------
int __fastcall Function_22565d0(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_22569f8(*(uint *)(v1 + 96)) )
      return 1;
  }
  else
  {
    *(uint *)(v1 + 52) = 7;
    Function_22569c8(*(uint *)(v1 + 96), 3);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (02256608) --------------------------------------------------------
int __fastcall Function_2256608(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = ((int (__fastcall *)(int *, int, int (*)(), int, int))dword_2255ACC[0])(
         dword_2256F98,
         1,
         Function_2256660,
         a1,
         8);
  *(uint *)(v1 + 92) = v2;
  if ( !v2 )
    return 0;
  ((void (*)(void))dword_2255C48[0])();
  ((void (__fastcall *)(uint, uint, int, int))dword_2255C48[0])(*(uint *)(v1 + 92), 0, 1, 75);
  *(uchar *)(v1 + 4) = 0;
  return 1;
}

//----- (02256654) --------------------------------------------------------
void __fastcall Function_2256654(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 92);
  JUMPOUT(&byte_2255B34);
}

//----- (02256660) --------------------------------------------------------
long long __fastcall Function_2256660(long long result, int a2, int a3)
{
  *(uchar *)(a3 + 4) = BYTE4(result);
  return result;
}

//----- (02256664) --------------------------------------------------------
uint *__fastcall Function_2256664(uint *result)
{
  result[7] = 0;
  result[8] = 1;
  result[9] = 0;
  result[10] = 0;
  result[11] = 0;
  result[12] = 0;
  result[3] = 0;
  result[4] = 0;
  result[5] = 0;
  result[6] = 0;
  return result;
}

//----- (02256680) --------------------------------------------------------
int __fastcall Function_2256680(int a1)
{
  int v1;
  long long v2;
  int v3;
  int result;

  v1 = a1;
  if ( *(ull *)(a1 + 12) )
  {
    LODWORD(v2) = Function_202293c();
    *(ull *)(v1 + 12) += v2 - *(ull *)(v1 + 20);
  }
  else
  {
    *(uint *)(a1 + 12) = Function_202293c();
    *(uint *)(v1 + 16) = v3;
  }
  *(uint *)(v1 + 28) = 1;
  result = 0;
  *(uint *)(v1 + 32) = 0;
  return result;
}

//----- (022566C4) --------------------------------------------------------
int __fastcall Function_22566c4(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  *(uint *)(a1 + 20) = Function_202293c();
  *(uint *)(v1 + 24) = v2;
  result = 0;
  *(uint *)(v1 + 28) = 0;
  return result;
}

//----- (022566D8) --------------------------------------------------------
int *__fastcall Function_22566d8(int a1, int **a2)
{
  int **v2;
  int v3;
  int *result;
  int v5;
  int v6;
  int v7;
  int v8;
  uint v9;
  int v10;
  int v11;
  uint v12;
  uint v13;
  uint v14;
  int v15;
  int v16;
  uint v17;
  uint v18;
  int v19;
  int v20;
  uint v21;

  v2 = a2;
  v3 = a1;
  result = *a2;
  if ( *a2 )
  {
    Function_202293c();
    v5 = *(uint *)(v3 + 12);
    v6 = *(uint *)(v3 + 16);
    Function_2022944();
    REG_DIVCNT = 1;
    REG_DIV_NUMER_L = v7;
    REG_DIV_NUMER_H = v8;
    REG_DIV_DENOM_L = 1000;
    REG_DIV_DENOM_H = 0;
    v9 = (uint)&REG_DIVCNT >> 11;
    while ( (ushort)REG_DIVCNT & (ushort)v9 )
      ;
    v10 = REG_DIV_RESULT_L;
    v11 = REG_DIV_RESULT_H;
    v12 = (uint)&REG_DIV_RESULT_L >> 11;
    while ( (ushort)REG_DIVCNT & (ushort)v12 )
      ;
    REG_DIVCNT = 1;
    REG_DIV_NUMER_L = REG_DIVREM_RESULT_L;
    REG_DIV_NUMER_H = REG_DIVREM_RESULT_H;
    REG_DIV_DENOM_L = 10;
    REG_DIV_DENOM_H = 0;
    v13 = (uint)&REG_DIVCNT >> 11;
    while ( (ushort)REG_DIVCNT & (ushort)v13 )
      ;
    v2[2] = (int *)REG_DIV_RESULT_L;
    REG_DIVCNT = 1;
    REG_DIV_NUMER_L = v10;
    REG_DIV_NUMER_H = v11;
    REG_DIV_DENOM_L = 60;
    REG_DIV_DENOM_H = 0;
    v14 = (uint)&REG_DIVCNT >> 11;
    while ( (ushort)REG_DIVCNT & (ushort)v14 )
      ;
    v15 = REG_DIV_RESULT_L;
    v16 = REG_DIV_RESULT_H;
    v17 = (uint)&REG_DIV_RESULT_L >> 11;
    while ( (ushort)REG_DIVCNT & (ushort)v17 )
      ;
    v2[3] = (int *)REG_DIVREM_RESULT_L;
    REG_DIVCNT = 1;
    REG_DIV_NUMER_L = v15;
    REG_DIV_NUMER_H = v16;
    REG_DIV_DENOM_L = 60;
    REG_DIV_DENOM_H = 0;
    v18 = (uint)&REG_DIVCNT >> 11;
    while ( (ushort)REG_DIVCNT & (ushort)v18 )
      ;
    v19 = REG_DIV_RESULT_L;
    v20 = REG_DIV_RESULT_H;
    v21 = (uint)&REG_DIV_RESULT_L >> 11;
    while ( (ushort)REG_DIVCNT & (ushort)v21 )
      ;
    v2[4] = (int *)REG_DIVREM_RESULT_L;
    result = 0;
    if ( __PAIR__((uint)v20, v19) >= 0x18 )
    {
      REG_DIVCNT = 1;
      REG_DIV_NUMER_L = v19;
      REG_DIV_NUMER_H = v20;
      REG_DIV_DENOM_L = 24;
      REG_DIV_DENOM_H = 0;
      while ( (ushort)REG_DIVCNT & (ushort)((uint)&REG_DIVCNT >> 11) )
        ;
      result = &REG_DIVREM_RESULT_L;
      v19 = REG_DIVREM_RESULT_L;
    }
    v2[5] = (int *)v19;
  }
  return result;
}

//----- (0225680C) --------------------------------------------------------
int __fastcall Function_225680c(uint *a1, int a2)
{
  uint *v2;
  int v3;
  uint *v4;
  uint *v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = (uint *)malloc(8u, 136);
  v5 = v4;
  if ( v4 )
  {
    *v4 = v3;
    v4[23] = ((int (*)(void))dword_2254664[0])();
    v6 = Function_2018340(8u);
    v5[1] = v6;
    if ( !v6 )
      return 0;
    if ( ((int (__fastcall *)(uint *, int, int, int, int))dword_2255958[0])(
           v5 + 13,
           12,
           18,
           19,
           8) )
    {
      if ( ((int (__fastcall *)(uint *, int, int, int, int))dword_2255958[0])(
             v5 + 18,
             12,
             3,
             4,
             8) )
      {
        ((void (__fastcall *)(uint *, int))dword_2255090[0])(v5 + 2, 8);
        v5[33] = 0;
        *v2 = v5;
        return 1;
      }
      ((void (__fastcall *)(uint *))dword_22559B0[0])(v5 + 13);
    }
  }
  return 0;
}

//----- (02256890) --------------------------------------------------------
uint __fastcall Function_2256890(uint result)
{
  int v1;
  int v2;

  v1 = result;
  if ( result )
  {
    v2 = *(uint *)(result + 4);
    if ( v2 )
      free(v2);
    result = free(v1);
  }
  return result;
}

//----- (022568A8) --------------------------------------------------------
int __fastcall Function_22568a8(int a1, int a2)
{
  return Function_22568b4(a2);
}

//----- (022568B4) --------------------------------------------------------
int __fastcall Function_22568b4(uint *a1)
{
  uint *v1;
  int v2;
  uint v3;
  uint v4;
  int v5;
  int v6;
  uint v7;
  uint v8;
  int v9;
  int v10;
  uint v11;
  uint v12;
  int v13;
  int v14;
  uint v15;
  int v16;

  v1 = a1;
  v2 = *(uint *)(*a1 + 20);
  REG_DIVCNT = 0;
  REG_DIV_NUMER_L = v2;
  REG_DIV_DENOM_L = 10;
  REG_DIV_DENOM_H = 0;
  v3 = (uint)&REG_DIVCNT >> 11;
  while ( (ushort)REG_DIVCNT & (ushort)v3 )
    ;
  v4 = (uint)&REG_DIV_RESULT_L >> 11;
  while ( (ushort)REG_DIVCNT & (ushort)v4 )
    ;
  v5 = REG_DIVREM_RESULT_L;
  ((void (__fastcall *)(uint, int))dword_22558C4[0])(v1[24], REG_DIV_RESULT_L);
  ((void (__fastcall *)(uint, int))dword_22558C4[0])(v1[25], v5);
  v6 = *(uint *)(*v1 + 16);
  REG_DIVCNT = 0;
  REG_DIV_NUMER_L = v6;
  REG_DIV_DENOM_L = 10;
  REG_DIV_DENOM_H = 0;
  v7 = (uint)&REG_DIVCNT >> 11;
  while ( (ushort)REG_DIVCNT & (ushort)v7 )
    ;
  v8 = (uint)&REG_DIV_RESULT_L >> 11;
  while ( (ushort)REG_DIVCNT & (ushort)v8 )
    ;
  v9 = REG_DIVREM_RESULT_L;
  ((void (__fastcall *)(uint, int))dword_22558C4[0])(v1[26], REG_DIV_RESULT_L);
  ((void (__fastcall *)(uint, int))dword_22558C4[0])(v1[27], v9);
  v10 = *(uint *)(*v1 + 12);
  REG_DIVCNT = 0;
  REG_DIV_NUMER_L = v10;
  REG_DIV_DENOM_L = 10;
  REG_DIV_DENOM_H = 0;
  v11 = (uint)&REG_DIVCNT >> 11;
  while ( (ushort)REG_DIVCNT & (ushort)v11 )
    ;
  v12 = (uint)&REG_DIV_RESULT_L >> 11;
  while ( (ushort)REG_DIVCNT & (ushort)v12 )
    ;
  v13 = REG_DIVREM_RESULT_L;
  ((void (__fastcall *)(uint, int))dword_22558C4[0])(v1[28], REG_DIV_RESULT_L);
  ((void (__fastcall *)(uint, int))dword_22558C4[0])(v1[29], v13);
  v14 = *(uint *)(*v1 + 8);
  REG_DIVCNT = 0;
  REG_DIV_NUMER_L = v14;
  REG_DIV_DENOM_L = 10;
  REG_DIV_DENOM_H = 0;
  v15 = (uint)&REG_DIVCNT >> 11;
  while ( (ushort)REG_DIVCNT & (ushort)v15 )
    ;
  while ( (ushort)REG_DIVCNT & (ushort)((uint)&REG_DIV_RESULT_L >> 11) )
    ;
  v16 = REG_DIVREM_RESULT_L;
  ((void (__fastcall *)(uint, int))dword_22558C4[0])(v1[30], REG_DIV_RESULT_L);
  return ((int (__fastcall *)(uint, int))dword_22558C4[0])(v1[31], v16);
}

//----- (022569C8) --------------------------------------------------------
int __fastcall Function_22569c8(int *a1)
{
  int v1;

  v1 = *a1;
  return ((int (__fastcall *)(int *))dword_225517C[0])(&dword_2256FF0);
}

//----- (022569EC) --------------------------------------------------------
void Function_22569ec()
{
  JUMPOUT(&byte_2255130);
}

//----- (022569F8) --------------------------------------------------------
void Function_22569f8()
{
  JUMPOUT(&byte_2255154);
}

//----- (02256A04) --------------------------------------------------------
int __fastcall Function_2256a04(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = ((int (*)(void))dword_225517C[48])();
  return ((int (__fastcall *)(int, int))dword_225517C[42])(v2 + 8, v1);
}

//----- (02256A18) --------------------------------------------------------
int __fastcall Function_2256a18(int a1, int a2)
{
  int v2;
  int v3;
  int *v4;
  uint *v5;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225517C[48])(a2);
  Function_20183c4(*(uint **)(v3 + 4), 6u, dword_2256FD4, 0);
  LoadFromNARC_RGCN(12, 21, *(uint **)(v3 + 4), 6u, 0, 0, 1, 8);
  LoadFromNARC_RCSN(12, 20, *(uint **)(v3 + 4), 6u, 0, 0, 1, 8);
  ((void (*)(void))dword_2254664[21])();
  Function_2019448(*(uint **)(v3 + 4), 6u);
  v4 = (int *)((int (__fastcall *)(int))dword_225517C[48])(v2);
  v5 = (uint *)((int (__fastcall *)(int))dword_225517C[49])(v2);
  Function_2256aec(v4);
  Function_2256b24(v4, v5);
  *(uint *)(v3 + 132) = AddTaskToTaskList1((int)Function_22568a8, v3, 3u);
  Function_22568b4(v4);
  if ( *v5 )
    Function_22569c8(v4);
  REG_DISPCNT_SUB = REG_DISPCNT_SUB & 0xFFFFE0FF | ((((uint)(REG_DISPCNT_SUB << 19) >> 27) | 0x14) << 8);
  return Function_2256a04(v2);
}

//----- (02256AEC) --------------------------------------------------------
int Function_2256aec()
{
  Function_2006ec0(12, 2, 1, 0, 0, 1, 8);
  Function_2006ec0(12, 22, 1, 2560, 0, 1, 8);
  return 1;
}

//----- (02256B24) --------------------------------------------------------
int __fastcall Function_2256b24(int a1, int *a2)
{
  int v2;
  int *v3;
  uint v4;
  int v5;
  int result;
  int *v7;
  int v8;

  v2 = a1;
  v3 = dword_2257020;
  v7 = a2;
  v4 = 0;
  v5 = a1;
  v8 = a1 + 72;
  do
  {
    *(uint *)(v5 + 96) = ((int (__fastcall *)(uint, int *, int))dword_225517C[421])(*(uint *)(v2 + 92), v3, v8);
    ++v4;
    v3 += 4;
    v5 += 4;
  }
  while ( v4 <= 7 );
  *(uint *)(v2 + 128) = ((int (__fastcall *)(uint, int *, int))dword_225517C[421])(
                            *(uint *)(v2 + 92),
                            &dword_2257020[4 * v4],
                            v2 + 52);
  result = *v7;
  if ( !*v7 )
    result = ((int (__fastcall *)(uint, int))dword_22558C4[20])(*(uint *)(v2 + 128), 1);
  return result;
}

//----- (02256B80) --------------------------------------------------------
int __fastcall Function_2256b80(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = a1;
  v4 = ((int (__fastcall *)(int))dword_225517C[49])(a2);
  Function_201cecc(v3, (int)*(&off_2256FB8 + *(uint *)(v4 + 24)));
  return ((int (__fastcall *)(int, int))*(&off_2256FB8 + *(uint *)(v4 + 24)))(v3, v2);
}

//----- (02256BB0) --------------------------------------------------------
int __fastcall Function_2256bb0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225517C[48])(a2);
  ((void (__fastcall *)(int))dword_225517C[49])(v2);
  ((void (__fastcall *)(uint, int))dword_22558C4[20])(*(uint *)(v3 + 128), 1);
  Function_2256ec4(*(uint *)(v3 + 4), 0);
  Function_2019448(*(uint **)(v3 + 4), 6u);
  return Function_2256a04(v2);
}

//----- (02256BE8) --------------------------------------------------------
int __fastcall Function_2256be8(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225517C[48])(a2);
  ((void (__fastcall *)(uint, uint))dword_22558C4[20])(*(uint *)(v3 + 128), 0);
  ((void (__fastcall *)(uint, int))dword_22558C4[0])(*(uint *)(v3 + 128), 11);
  Function_2256ec4(*(uint *)(v3 + 4), 1);
  Function_2019448(*(uint **)(v3 + 4), 6u);
  ((void (__fastcall *)(int))dword_2254260[113])(1641);
  return Function_2256a04(v2);
}

//----- (02256C2C) --------------------------------------------------------
int __fastcall Function_2256c2c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225517C[49])(a2);
  v4 = ((int (__fastcall *)(int))dword_225517C[48])(v2);
  if ( *(uint *)(v3 + 24) != 2 )
    return Function_2256a04(v2);
  result = ((int (__fastcall *)(int))dword_225517C[51])(v2);
  if ( !result )
  {
    ((void (__fastcall *)(uint, int))dword_22558C4[0])(*(uint *)(v4 + 128), 12);
    Function_2256ec4(*(uint *)(v4 + 4), 0);
    Function_2019448(*(uint **)(v4 + 4), 6u);
    result = ((int (__fastcall *)(int))dword_225517C[52])(v2);
  }
  return result;
}

//----- (02256C80) --------------------------------------------------------
int __fastcall Function_2256c80(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225517C[49])(a2);
  v4 = ((int (__fastcall *)(int))dword_225517C[48])(v2);
  v5 = ((int (__fastcall *)(int))dword_225517C[50])(v2);
  if ( *(uint *)(v3 + 24) != 3 )
    return Function_2256a04(v2);
  result = ((int (__fastcall *)(int))dword_225517C[51])(v2);
  if ( result )
  {
    if ( result != 1 )
      return result;
  }
  else
  {
    *(ushort *)v5 = 6;
    *(uchar *)(v5 + 3) = 2;
    *(uchar *)(v5 + 2) = 0;
    ((void (__fastcall *)(uint, int))dword_22558C4[0])(*(uint *)(v4 + 128), 13);
    ((void (__fastcall *)(int))dword_225517C[52])(v2);
  }
  result = Function_2256e90(v5, 6);
  if ( result )
  {
    ((void (__fastcall *)(int))dword_2254260[113])(1641);
    Function_2256ec4(*(uint *)(v4 + 4), *(uchar *)(v5 + 3));
    result = Function_2019448(*(uint **)(v4 + 4), 6u);
  }
  return result;
}

//----- (02256D00) --------------------------------------------------------
int __fastcall Function_2256d00(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225517C[49])(a2);
  v4 = ((int (__fastcall *)(int))dword_225517C[48])(v2);
  v5 = ((int (__fastcall *)(int))dword_225517C[50])(v2);
  if ( *(uint *)(v3 + 24) != 4 )
    return Function_2256a04(v2);
  result = ((int (__fastcall *)(int))dword_225517C[51])(v2);
  if ( result )
  {
    if ( result != 1 )
      return result;
  }
  else
  {
    *(ushort *)v5 = 3;
    *(uchar *)(v5 + 3) = 2;
    *(uchar *)(v5 + 2) = 0;
    ((void (__fastcall *)(uint, int))dword_22558C4[0])(*(uint *)(v4 + 128), 14);
    ((void (__fastcall *)(int))dword_225517C[52])(v2);
  }
  result = Function_2256e90(v5, 3);
  if ( result )
  {
    ((void (__fastcall *)(int))dword_2254260[113])(1641);
    Function_2256ec4(*(uint *)(v4 + 4), *(uchar *)(v5 + 3));
    result = Function_2019448(*(uint **)(v4 + 4), 6u);
  }
  return result;
}

//----- (02256D80) --------------------------------------------------------
uint __fastcall Function_2256d80(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  uint result;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225517C[49])(a2);
  v4 = ((int (__fastcall *)(int))dword_225517C[48])(v2);
  v5 = ((int (__fastcall *)(int))dword_225517C[50])(v2);
  if ( *(uint *)(v3 + 24) != 5 )
    return Function_2256a04(v2);
  result = ((int (__fastcall *)(int))dword_225517C[51])(v2);
  if ( result )
  {
    if ( result != 1 )
      return result;
  }
  else
  {
    *(ushort *)v5 = 0;
    *(uchar *)(v5 + 2) = 0;
    ((void (__fastcall *)(uint, int))dword_22558C4[0])(*(uint *)(v4 + 128), 15);
    Function_2256ec4(*(uint *)(v4 + 4), 5);
    Function_2019448(*(uint **)(v4 + 4), 6u);
    ((void (__fastcall *)(int))dword_2254260[113])(1638);
    ((void (__fastcall *)(int))dword_225517C[52])(v2);
  }
  result = (ushort)++*(ushort *)v5;
  if ( result > 2 )
  {
    *(ushort *)v5 = 0;
    *(uchar *)(v5 + 2) ^= 1u;
    *(uchar *)(v5 + 3) = *(uchar *)(v5 + 2) + 5;
    Function_2256ec4(*(uint *)(v4 + 4), *(uchar *)(v5 + 3));
    result = Function_2019448(*(uint **)(v4 + 4), 6u);
  }
  return result;
}

//----- (02256E1C) --------------------------------------------------------
uint __fastcall Function_2256e1c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  ushort *v5;
  uint result;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225517C[49])(a2);
  v4 = ((int (__fastcall *)(int))dword_225517C[48])(v2);
  v5 = (ushort *)((int (__fastcall *)(int))dword_225517C[50])(v2);
  if ( *(uint *)(v3 + 24) != 6 )
    return Function_2256a04(v2);
  result = ((int (__fastcall *)(int))dword_225517C[51])(v2);
  if ( result )
  {
    if ( result != 1 )
      return result;
  }
  else
  {
    ((void (__fastcall *)(uint, int))dword_22558C4[0])(*(uint *)(v4 + 128), 16);
    Function_2256ec4(*(uint *)(v4 + 4), 6);
    Function_2019448(*(uint **)(v4 + 4), 6u);
    ((void (__fastcall *)(int))dword_225517C[52])(v2);
    *v5 = 0;
  }
  result = (ushort)++*v5;
  if ( result > 0x50 )
    result = Function_2256a04(v2);
  return result;
}

//----- (02256E90) --------------------------------------------------------
int __fastcall Function_2256e90(int a1, uint a2)
{
  if ( (ushort)++*(ushort *)a1 <= a2 )
    return 0;
  *(ushort *)a1 = 0;
  if ( (uchar)++*(uchar *)(a1 + 2) >= 3u )
    *(uchar *)(a1 + 2) = 0;
  *(uchar *)(a1 + 3) = *((uchar *)&dword_2256FB4 + *(uchar *)(a1 + 2));
  return 1;
}

//----- (02256EC4) --------------------------------------------------------
uint __fastcall Function_2256ec4(int a1, int a2)
{
  int v2;
  int v3;
  uint v4;
  int v5;
  uint v6;
  ushort *v7;
  int v8;
  uint result;
  int v10;

  v2 = a2;
  v3 = Function_2019fe4(a1, 6) + 594;
  v10 = (5 * v2 + 2) & 0xFFFF;
  v4 = 0;
  do
  {
    v5 = v10;
    v6 = 0;
    v7 = (ushort *)v3;
    do
    {
      *v7 = v5;
      v8 = 2 * (9 - v6++);
      *(ushort *)(v3 + v8) = v5++ | 0x400;
      ++v7;
    }
    while ( v6 < 5 );
    v3 += 64;
    v10 = (v10 + 37) & 0xFFFF;
    result = v4 + 1;
    v4 = result;
  }
  while ( result < 0xB );
  return result;
}

//----- (02256F24) --------------------------------------------------------
int __fastcall Function_2256f24(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225517C[48])(a2);
  result = ((int (__fastcall *)(int))dword_225517C[51])(v2);
  if ( !result )
  {
    Function_2256f7c(v3);
    ((void (__fastcall *)(int))dword_225517C[52])(v2);
    goto LABEL_5;
  }
  if ( result == 1 )
  {
LABEL_5:
    ((void (__fastcall *)(int))dword_22559B0[0])(v3 + 52);
    ((void (__fastcall *)(int))dword_22559B0[0])(v3 + 72);
    Function_2019044(*(uint *)(v3 + 4), 6);
    Call_RemoveTaskFromTaskList(*(int **)(v3 + 132));
    *(uint *)(v3 + 132) = 0;
    result = Function_2256a04(v2);
  }
  return result;
}

//----- (02256F7C) --------------------------------------------------------
int __fastcall Function_2256f7c(int a1)
{
  int v1;
  uint v2;
  int v3;
  int result;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    result = ((int (__fastcall *)(uint, uint))dword_225517C[461])(*(uint *)(v1 + 92), *(uint *)(v3 + 96));
    ++v2;
    v3 += 4;
  }
  while ( v2 < 9 );
  return result;
}

