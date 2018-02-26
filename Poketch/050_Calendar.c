//----- (022561D4) --------------------------------------------------------
int __fastcall Function_22561d4(int *a1)
{
  int *v1;
  int v2;

  v1 = a1;
  v2 = malloc(8u, 176);
  if ( v2 )
  {
    if ( Function_225621c() && AddTaskToTaskList1((int)Function_225636c, v2, 1u) )
    {
      *v1 = v2;
      return 1;
    }
    free(v2);
  }
  return 0;
}

//----- (0225621C) --------------------------------------------------------
int __fastcall Function_225621c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  char v8;
  int v9;

  v9 = a4;
  v4 = a1;
  v5 = a2;
  v6 = a3;
  Function_20138a4(&v8);
  *(uint *)(v4 + 152) = ((int (__fastcall *)(int))dword_225423C[193])(v5);
  Function_22562ac(v4 + 4, v4, &v8);
  *(uint *)(v4 + 168) = *(uchar *)(v4 + 18);
  *(uint *)(v4 + 172) = *(uint *)(v4 + 168) + *(uint *)(v4 + 8) - 1;
  if ( !Function_2256510(v4 + 144, v4 + 4, v6) )
    return 0;
  *(uchar *)v4 = 0;
  *(uchar *)(v4 + 1) = 0;
  *(uchar *)(v4 + 2) = 0;
  *(uint *)(v4 + 156) = ((int (__fastcall *)(int *, int, int (*)(), int, int))dword_225423C[1572])(
                            dword_2256998,
                            37,
                            Function_2256360,
                            v4,
                            8);
  *(uint *)(v4 + 160) = 0;
  *(uint *)(v4 + 148) = v5;
  return 1;
}

//----- (022562AC) --------------------------------------------------------
uint __fastcall Function_22562ac(int *a1, int a2, int *a3)
{
  int *v3;
  int *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint v10;
  char v11;
  uint result;
  uint v13;
  int *v14;
  int v15;

  v3 = a3;
  v4 = a1;
  v15 = a2;
  *a1 = a3[1];
  a1[2] = a3[2];
  v4[1] = *(uchar *)(*v4 + 36006443);
  if ( *a1 == 2 )
  {
    v5 = *a3;
    u32_div_f(*a3, 400);
    if ( !v6 || (u32_div_f(v5, 100), v7) && !(v5 & 3) )
      v4[1] = 29;
  }
  u32_div_f(v3[2] - 1, 7);
  v9 = v3[3];
  v10 = v9 + 7 - v8;
  if ( v10 >= 7 )
  {
    u32_div_f(v9 + 7 - v8, 7);
    LOBYTE(v10) = v11;
  }
  result = v4[1];
  v13 = 0;
  if ( result )
  {
    v14 = v4;
    do
    {
      *((ushort *)v14 + 6) = v13 + 1;
      *((uchar *)v14 + 15) = Function_20569a8(*(uint *)(v15 + 152), *v4, v13 + 1);
      *((uchar *)v14 + 14) = v10 + v13;
      result = v4[1];
      ++v13;
      ++v14;
    }
    while ( v13 < result );
  }
  return result;
}

//----- (02256340) --------------------------------------------------------
uint __fastcall Function_2256340(int a1)
{
  int v1;

  v1 = a1;
  ((void (__fastcall *)(uint))dword_225423C[1598])(*(uint *)(a1 + 156));
  Function_225654c(*(uint *)(v1 + 144));
  return free(v1);
}

//----- (02256360) --------------------------------------------------------
int __fastcall Function_2256360(int result, int a2, int a3, int a4)
{
  *(uint *)(a4 + 164) = result;
  *(uint *)(a4 + 160) = a2;
  return result;
}

//----- (0225636C) --------------------------------------------------------
uint __fastcall Function_225636c(int *a1, uchar *a2)
{
  uchar *v2;
  int *v3;
  uint result;

  v2 = a2;
  v3 = a1;
  result = *a2;
  if ( result < 3 )
  {
    ((void (__fastcall *)(uint, uint))dword_225423C[183])(*((uint *)a2 + 37), *((uint *)a2 + 39));
    result = ((int (__fastcall *)(uchar *))*(&off_225698C + *v2))(v2);
    if ( result )
    {
      Function_2256340((int)v2);
      Call_RemoveTaskFromTaskList(v3);
      result = ((int (__fastcall *)(uint))dword_225423C[9])(*((uint *)v2 + 37));
    }
  }
  return result;
}

//----- (022563B0) --------------------------------------------------------
int __fastcall Function_22563b0(int result)
{
  *(uchar *)(result + 2) = 1;
  return result;
}

//----- (022563B8) --------------------------------------------------------
char *__fastcall Function_22563b8(char *result, char a2)
{
  if ( result[2] )
    a2 = 2;
  *result = a2;
  result[1] = 0;
  return result;
}

//----- (022563CC) --------------------------------------------------------
int __fastcall Function_22563cc(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_2256620(*(uint *)(v1 + 144), 0) )
    {
      ((void (__fastcall *)(uint))dword_225423C[4])(*(uint *)(v1 + 148));
      Function_22563b8((char *)v1, 1);
    }
  }
  else
  {
    Function_22565fc(*(uint *)(v1 + 144), 0);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (02256418) --------------------------------------------------------
int __fastcall Function_2256418(char *a1)
{
  char *v1;
  int result;
  int v3;
  uint v4;
  uint v5;
  int v6;

  v1 = a1;
  if ( a1[2] )
  {
    Function_22563b8(a1, 2);
    result = 0;
  }
  else
  {
    v3 = (uchar)a1[1];
    if ( v1[1] )
    {
      if ( v3 == 1 )
      {
        if ( Function_2256620(*((uint *)v1 + 36), 2) )
          v1[1] = 0;
      }
    }
    else if ( *((uint *)v1 + 40) == 1 )
    {
      *((uint *)v1 + 40) = 0;
      v4 = *((uint *)v1 + 42);
      v5 = *((uint *)v1 + 41);
      if ( v5 >= v4 && v5 <= *((uint *)v1 + 43) )
      {
        v6 = v5 - v4;
        if ( Function_20569a8(*((uint *)v1 + 38), *((uint *)v1 + 1), v5 - v4 + 1) )
          Function_2056970(*((uint *)v1 + 38), *((uint *)v1 + 1), v6 + 1);
        else
          Function_2056934(*((uint *)v1 + 38), *((uint *)v1 + 1), v6 + 1);
        v1[4 * v6 + 19] ^= 1u;
        *((uint *)v1 + 35) = v6;
        Function_22565fc(*((uint *)v1 + 36), 2);
        ++v1[1];
      }
    }
    result = 0;
  }
  return result;
}

//----- (022564D8) --------------------------------------------------------
int __fastcall Function_22564d8(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_225662c(*(uint *)(v1 + 144)) )
      return 1;
  }
  else
  {
    Function_22565fc(*(uint *)(v1 + 144), 1);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (02256510) --------------------------------------------------------
int __fastcall Function_2256510(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  uint *v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = malloc(8u, 60);
  v5 = (uint *)v4;
  if ( !v4 )
    return 0;
  v6 = ((int (__fastcall *)(int, int))dword_225423C[917])(v4 + 8, 4);
  *v5 = v3;
  v5[1] = ((int (__fastcall *)(int))dword_225423C[270])(v6);
  v5[8] = ((int (*)(void))dword_225423C[266])();
  Function_2256560(v5, v3);
  *v2 = v5;
  return 1;
}

//----- (0225654C) --------------------------------------------------------
uint __fastcall Function_225654c(uint result)
{
  int v1;

  v1 = result;
  if ( result )
  {
    Function_22565e4();
    result = free(v1);
  }
  return result;
}

//----- (02256560) --------------------------------------------------------
int __fastcall Function_2256560(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = a2;
  Function_2006ec0(12, 114, 1, 0, 0, 1, 8);
  ((void (__fastcall *)(int, int, int, int, int))dword_225423C[1479])(
    v2 + 40,
    12,
    112,
    113,
    8);
  *(uint *)(v2 + 36) = ((int (__fastcall *)(uint, int *, int))dword_225423C[1397])(
                           *(uint *)(v2 + 32),
                           &dword_2256998[40],
                           v2 + 40);
  v4 = *(uchar *)(v3 + 4 * *(uint *)(v3 + 8) + 10);
  return Function_22565b0();
}

//----- (022565B0) --------------------------------------------------------
int __fastcall Function_22565b0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v2 = a2;
  v3 = a1;
  u32_div_f(a2, 7);
  v5 = v4;
  v6 = u32_div_f(v2, 7);
  return ((int (__fastcall *)(int, int, int))dword_225423C[1457])(v3, (3 * v5 + 5) << 15, (3 * v6 + 6) << 15);
}

//----- (022565E4) --------------------------------------------------------
int __fastcall Function_22565e4(int a1)
{
  int v1;

  v1 = a1;
  ((void (__fastcall *)(uint, uint))dword_225423C[1437])(*(uint *)(a1 + 32), *(uint *)(a1 + 36));
  return ((int (__fastcall *)(int))dword_225423C[1501])(v1 + 40);
}

//----- (022565FC) --------------------------------------------------------
int __fastcall Function_22565fc(int *a1)
{
  int v1;

  v1 = *a1;
  return ((int (__fastcall *)(int *))dword_225423C[976])(&dword_2256AC0);
}

//----- (02256620) --------------------------------------------------------
void Function_2256620()
{
  JUMPOUT(&dword_225423C[957]);
}

//----- (0225662C) --------------------------------------------------------
void Function_225662c()
{
  JUMPOUT(&dword_225423C[966]);
}

//----- (02256638) --------------------------------------------------------
int __fastcall Function_2256638(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = ((int (*)(void))dword_225423C[1024])();
  return ((int (__fastcall *)(int, int))dword_225423C[1018])(v2 + 8, v1);
}

//----- (0225664C) --------------------------------------------------------
int __fastcall Function_225664c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  v4 = ((int (__fastcall *)(int))dword_225423C[1025])(v2);
  Function_20183c4(*(uint **)(v3 + 4), 6u, &dword_2256A7C, 0);
  Function_20183c4(*(uint **)(v3 + 4), 7u, dword_2256A60, 0);
  Function_225675c(v3, v4);
  Function_22567f4(v3, v4);
  LoadFromNARC_RGCN(12, 111, *(uint **)(v3 + 4), 7u, 0, 0, 1, 8);
  ((void (*)(void))dword_225423C[287])();
  Function_2019448(*(uint **)(v3 + 4), 6u);
  Function_2019448(*(uint **)(v3 + 4), 7u);
  REG_DISPCNT_SUB = REG_DISPCNT_SUB & 0xFFFFE0FF | ((((uint)(REG_DISPCNT_SUB << 19) >> 27) | 0xC) << 8);
  return Function_2256638(v2);
}

//----- (022566F0) --------------------------------------------------------
int __fastcall Function_22566f0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  Function_2019044(*(uint *)(v3 + 4), 6);
  Function_2019044(*(uint *)(v3 + 4), 7);
  return Function_2256638(v2);
}

//----- (02256714) --------------------------------------------------------
int __fastcall Function_2256714(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  ushort v6;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  v4 = ((int (__fastcall *)(int))dword_225423C[1025])(v2);
  v5 = 4 * *(uint *)(v4 + 136);
  if ( *(uchar *)(v4 + v5 + 15) )
    v6 = 143;
  else
    v6 = 131;
  Function_22567a8(*(uint *)(v3 + 4), v6, *(uchar *)(v4 + v5 + 14));
  Function_2019448(*(uint **)(v3 + 4), 7u);
  return Function_2256638(v2);
}

//----- (0225675C) --------------------------------------------------------
uint __fastcall Function_225675c(int a1, int a2)
{
  int v2;
  int v3;
  uint result;
  uint v5;
  int v6;

  v2 = a1;
  v3 = a2;
  LoadFromNARC_RCSN(12, 110, *(uint **)(a1 + 4), 7u, 0, 0, 1, 8);
  result = *(uint *)(v3 + 4);
  v5 = 0;
  if ( result )
  {
    v6 = v3;
    do
    {
      if ( *(uchar *)(v6 + 15) )
        Function_22567a8(*(uint *)(v2 + 4), 143, *(uchar *)(v6 + 14));
      result = *(uint *)(v3 + 4);
      ++v5;
      v6 += 4;
    }
    while ( v5 < result );
  }
  return result;
}

//----- (022567A8) --------------------------------------------------------
char *__fastcall Function_22567a8(int a1, short a2, int a3)
{
  int v3;
  int v4;
  short v5;
  int v6;
  int v7;
  char v8;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  u32_div_f(a3, 7);
  v7 = v6;
  v8 = u32_div_f(v3, 7);
  return Function_2019cb8(v4, 7, v5, (3 * v7 + 4) & 0xFF, 3 * v8 + 5, 2u, 2u, 0);
}

//----- (022567F4) --------------------------------------------------------
uint __fastcall Function_22567f4(int a1, uint *a2)
{
  int v2;
  uint *v3;
  uint result;
  uint v5;
  uint *v6;

  v2 = a1;
  v3 = a2;
  Function_2019cb8(*(uint *)(a1 + 4), 6, 130, 0, 0, 0x20u, 0x20u, 0);
  Function_225683c(*(uint *)(v2 + 4), *v3);
  result = v3[1];
  v5 = 0;
  if ( result )
  {
    v6 = v3;
    do
    {
      Function_2256894(*(uint *)(v2 + 4), v5 + 1, *((uchar *)v6 + 14));
      result = v3[1];
      ++v5;
      ++v6;
    }
    while ( v5 < result );
  }
  return result;
}

//----- (0225683C) --------------------------------------------------------
int __fastcall Function_225683c(int a1, int a2)
{
  int v2;
  short v3;
  int v4;
  int v5;
  int result;
  int v7;

  v2 = a1;
  v3 = *(ushort *)&algn_2256A44[2 * a2 + 2];
  v7 = 0;
  do
  {
    v4 = 0;
    v5 = (v7 + 2) & 0xFF;
    do
    {
      Function_2019cb8(v2, 6, v3 + v4, (v4 + 12) & 0xFF, v5, 1u, 1u, 0);
      ++v4;
    }
    while ( v4 < 4 );
    v3 += 12;
    result = v7 + 1;
    v7 = result;
  }
  while ( result < 2 );
  return result;
}

//----- (02256894) --------------------------------------------------------
char *__fastcall Function_2256894(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  BOOL v9;
  int v10;
  int v11;
  short v12;
  short v13;
  int v15;
  int v16;

  v3 = a3;
  v15 = a1;
  v4 = a2;
  u32_div_f(a3, 7);
  v6 = v5;
  v7 = 3 * v5 + 4;
  v8 = 3 * u32_div_f(v3, 7) + 5;
  v9 = v6 == 0;
  v10 = u32_div_f(v4, 10);
  u32_div_f(v4, 10);
  v16 = v11;
  if ( v10 )
  {
    v12 = aAbcdefghixyz[10 * v9 + v10];
    Function_2019cb8(v15, 6, v12, (uchar)v7, v8, 1u, 1u, 0);
    Function_2019cb8(v15, 6, v12 + 12, (uchar)v7, v8 + 1, 1u, 1u, 0);
  }
  v13 = aAbcdefghixyz[10 * v9 + v16];
  Function_2019cb8(v15, 6, v13, (v7 + 1) & 0xFF, v8, 1u, 1u, 0);
  return Function_2019cb8(v15, 6, v13 + 12, (v7 + 1) & 0xFF, v8 + 1, 1u, 1u, 0);
}

