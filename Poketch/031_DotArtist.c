//----- (022561D4) --------------------------------------------------------
int __fastcall Function_22561d4(int *a1)
{
  int *v1;
  int v2;

  v1 = a1;
  v2 = malloc(8u, 620);
  if ( v2 )
  {
    if ( Function_2256228() && AddTaskToTaskList1((int)Function_22563cc, v2, 1u) )
    {
      *v1 = v2;
      ((void (__fastcall *)(int (*)(), int))dword_225423C[14])(Function_22563b0, v2);
      return 1;
    }
    free(v2);
  }
  return 0;
}

//----- (02256228) --------------------------------------------------------
int __fastcall Function_2256228(int a1, int a2, int a3)
{
  int v3;
  int v4;

  v3 = a3;
  v4 = a1;
  *(uint *)(a1 + 496) = a2;
  Function_2256268();
  if ( !Function_2256554(v4 + 492, v4 + 12, v3) )
    return 0;
  *(uchar *)v4 = 0;
  *(uchar *)(v4 + 1) = 0;
  *(uchar *)(v4 + 2) = 0;
  *(uint *)(v4 + 4) = 25;
  *(uint *)(v4 + 8) = 21;
  return 1;
}

//----- (02256268) --------------------------------------------------------
int __fastcall Function_2256268(int a1, int a2)
{
  int v2;
  int v3;
  uchar *v4;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = (uchar *)((int (__fastcall *)(uint))dword_225423C[193])(*(uint *)(a1 + 496));
  if ( Function_2056a10(v4) )
    result = Function_2256298(v2, v3, v4);
  else
    result = Function_225635c(v3);
  return result;
}

//----- (02256298) --------------------------------------------------------
int __fastcall Function_2256298(int a1, int a2, uchar *a3, uint a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int result;
  int v9;
  int v10;
  int v11;

  v4 = a2;
  v5 = a1;
  Function_2056a18(a3, a1 + 500, (int)a3, a4);
  v6 = 0;
  v7 = 0;
  result = 3;
  do
  {
    v9 = 0;
    do
    {
      v10 = *(uchar *)(v5 + v6 / 4 + 500);
      v11 = 2 * v6++ & 7;
      *(uchar *)(v4 + v9++) = ((v10 >> v11) & 3) + 1;
    }
    while ( v9 < 24 );
    v4 += 24;
    ++v7;
  }
  while ( v7 < 20 );
  return result;
}

//----- (022562EC) --------------------------------------------------------
int __fastcall Function_22562ec(int a1, int a2, uchar *a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  char v7;
  uint v8;
  char v9;
  uchar *v11;
  int v12;

  v3 = a2;
  v11 = a3;
  v12 = a1;
  MI_CpuFill8((ushort *)(a1 + 500), 0, 0x78u);
  v4 = 0;
  v5 = 0;
  do
  {
    v6 = 0;
    do
    {
      v7 = v4;
      v8 = v12 + v4 / 4;
      v9 = *(uchar *)(v3 + v6++);
      ++v4;
      *(uchar *)(v8 + 500) |= ((v9 - 1) & 3) << (2 * v7 & 7);
    }
    while ( v6 < 24 );
    v3 += 24;
    ++v5;
  }
  while ( v5 < 20 );
  return Function_2056a2c(v11, v12 + 500, 500, v8);
}

//----- (0225635C) --------------------------------------------------------
int __fastcall Function_225635c(int result)
{
  int v1;
  int *v2;
  int v3;

  v1 = 0;
  v2 = dword_2256770;
  do
  {
    v3 = 0;
    do
    {
      *(uchar *)(result + v3) = *((uchar *)v2 + v3);
      ++v3;
    }
    while ( v3 < 24 );
    ++v1;
    v2 += 6;
    result += 24;
  }
  while ( v1 < 20 );
  return result;
}

//----- (02256384) --------------------------------------------------------
uint __fastcall Function_2256384(int a1)
{
  int v1;
  uchar *v2;

  v1 = a1;
  v2 = (uchar *)((int (__fastcall *)(uint))dword_225423C[193])(*(uint *)(a1 + 496));
  Function_22562ec(v1, v1 + 12, v2);
  Function_2256584(*(uint *)(v1 + 492));
  return free(v1);
}

//----- (022563B0) --------------------------------------------------------
int __fastcall Function_22563b0(int a1)
{
  int v1;
  uchar *v2;

  v1 = a1;
  v2 = (uchar *)((int (__fastcall *)(uint))dword_225423C[193])(*(uint *)(a1 + 496));
  return Function_22562ec(v1, v1 + 12, v2);
}

//----- (022563CC) --------------------------------------------------------
int __fastcall Function_22563cc(int result, uchar *a2)
{
  int v2;
  uint v3;
  int *v4;

  v2 = (int)a2;
  v3 = *a2;
  v4 = (int *)result;
  if ( v3 < 3 )
  {
    result = ((int (__fastcall *)(int))*(&off_2256764 + v3))(v2);
    if ( result )
    {
      Function_2256384(v2);
      Call_RemoveTaskFromTaskList(v4);
      result = ((int (__fastcall *)(uint))dword_225423C[9])(*(uint *)(v2 + 496));
    }
  }
  return result;
}

//----- (02256404) --------------------------------------------------------
int __fastcall Function_2256404(int result)
{
  *(uchar *)(result + 2) = 1;
  return result;
}

//----- (0225640C) --------------------------------------------------------
char *__fastcall Function_225640c(char *result, char a2)
{
  if ( result[2] )
    a2 = 2;
  *result = a2;
  result[1] = 0;
  return result;
}

//----- (02256420) --------------------------------------------------------
int __fastcall Function_2256420(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_22565b4(*(uint *)(v1 + 492), 0) )
    {
      ((void (__fastcall *)(uint))dword_225423C[4])(*(uint *)(v1 + 496));
      Function_225640c((char *)v1, 1);
    }
  }
  else
  {
    Function_2256590(*(uint *)(v1 + 492), 0);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (0225646C) --------------------------------------------------------
int __fastcall Function_225646c(int a1, int a2, int a3, int a4)
{
  uint *v4;
  int result;
  uint v6;
  uint v7;
  int v8;
  uint v9;
  uint v10;
  int v11;

  v11 = a4;
  v4 = (uint *)a1;
  if ( *(uchar *)(a1 + 2) )
  {
    Function_225640c((char *)a1, 2);
    result = 0;
  }
  else
  {
    if ( Function_22565b4(*(uint *)(a1 + 492), 1) )
    {
      if ( ((int (__fastcall *)(uint *, uint *))dword_225423C[140])(&v10, &v9) )
      {
        if ( v10 >= 0x10 && v9 >= 0x10 )
        {
          v6 = (v10 - 16) >> 3;
          v7 = (v9 - 16) >> 3;
          v10 = v6;
          v9 = (v9 - 16) >> 3;
          if ( v6 < 0x18 && v7 < 0x14 && (v4[1] != v6 || v4[2] != v7 || Function_2022798() == 1) )
          {
            ++*((uchar *)&v4[6 * v9 + 3] + v10);
            v8 = (int)&v4[6 * v9 + 3];
            if ( *(uchar *)(v8 + v10) > 4u )
              *(uchar *)(v8 + v10) = 1;
            v4[1] = v10;
            v4[2] = v9;
            Function_2256590(v4[123], 1);
          }
        }
      }
    }
    result = 0;
  }
  return result;
}

//----- (02256518) --------------------------------------------------------
int __fastcall Function_2256518(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_22565c0(*(uint *)(v1 + 492)) )
      return 1;
  }
  else
  {
    Function_2256590(*(uint *)(v1 + 492), 2);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (02256554) --------------------------------------------------------
int __fastcall Function_2256554(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  uint *v5;
  int v6;
  int v7;

  v2 = a1;
  v3 = a2;
  v4 = malloc(8u, 48);
  v5 = (uint *)v4;
  if ( !v4 )
    return 0;
  v6 = ((int (__fastcall *)(int, int))dword_225423C[917])(v4 + 8, 8);
  *v5 = v3;
  v7 = ((int (__fastcall *)(int))dword_225423C[270])(v6);
  v5[1] = v7;
  if ( !v7 )
    return 0;
  *v2 = v5;
  return 1;
}

//----- (02256584) --------------------------------------------------------
int __fastcall Function_2256584(int result)
{
  if ( result )
    result = free(result);
  return result;
}

//----- (02256590) --------------------------------------------------------
int __fastcall Function_2256590(int *a1)
{
  int v1;

  v1 = *a1;
  return ((int (__fastcall *)(int *))dword_225423C[976])(&dword_2256970);
}

//----- (022565B4) --------------------------------------------------------
void Function_22565b4()
{
  JUMPOUT(&dword_225423C[957]);
}

//----- (022565C0) --------------------------------------------------------
void Function_22565c0()
{
  JUMPOUT(&dword_225423C[966]);
}

//----- (022565CC) --------------------------------------------------------
int __fastcall Function_22565cc(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = ((int (*)(void))dword_225423C[1024])();
  return ((int (__fastcall *)(int, int))dword_225423C[1018])(v2 + 8, v1);
}

//----- (022565E0) --------------------------------------------------------
int __fastcall Function_22565e0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  Function_20183c4(*(uint **)(v3 + 4), 6u, dword_2256954, 0);
  Function_2256644(*(uint *)(v3 + 4));
  Function_225672c(*(uint *)(v3 + 4), *(uint *)v3);
  ((void (*)(void))dword_225423C[287])();
  Function_2019448(*(uint **)(v3 + 4), 6u);
  REG_DISPCNT_SUB = REG_DISPCNT_SUB & 0xFFFFE0FF | ((((uint)(REG_DISPCNT_SUB << 19) >> 27) | 4) << 8);
  return Function_22565cc(v2);
}

//----- (02256644) --------------------------------------------------------
uint __fastcall Function_2256644(uint *a1)
{
  uint result;
  int v2;
  int v3;
  int v4;
  int v5;
  uint *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int *v12;

  v6 = a1;
  result = malloc(8u, 512);
  v12 = (int *)result;
  if ( result )
  {
    v11 = 0;
    v10 = 0;
    v9 = 0;
    v8 = 0;
    v7 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = 0;
    do
    {
      MIi_CpuClearFast(v11 | v5 | v7 | v8 | v9 | v2 | v3 | v4, &v12[v10], 0x20u);
      v10 += 8;
      v9 += 0x1000000;
      v8 += 0x10000000;
      v7 += 0x100000;
      v2 += 0x10000;
      v3 += 4096;
      v4 += 256;
      v5 += 16;
      ++v11;
    }
    while ( v11 < 16 );
    Function_201958c(v6, 6u, v12, 512, 0);
    result = free((int)v12);
  }
  return result;
}

//----- (022566EC) --------------------------------------------------------
int __fastcall Function_22566ec(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  Function_225672c(*(uint *)(v3 + 4), *(uint *)v3);
  Function_2019448(*(uint **)(v3 + 4), 6u);
  return Function_22565cc(v2);
}

//----- (02256710) --------------------------------------------------------
int __fastcall Function_2256710(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  Function_2019044(*(uint *)(v3 + 4), 6);
  return Function_22565cc(v2);
}

//----- (0225672C) --------------------------------------------------------
int __fastcall Function_225672c(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  ushort *v6;
  int v7;

  v2 = a2;
  v3 = 0;
  result = Function_2019fe4(a1, 6) + 132;
  do
  {
    v5 = 0;
    v6 = (ushort *)result;
    do
    {
      v7 = *(uchar *)(v2 + v5++);
      *v6 = *((uchar *)&dword_2256950 + v7 - 1);
      ++v6;
    }
    while ( v5 < 24 );
    ++v3;
    result += 64;
    v2 += 24;
  }
  while ( v3 < 20 );
  return result;
}

