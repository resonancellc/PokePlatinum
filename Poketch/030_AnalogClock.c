//----- (022561D4) --------------------------------------------------------
int __fastcall Function_22561d4(int *a1)
{
  int *v1;
  int v2;

  v1 = a1;
  v2 = malloc(8u, 44);
  if ( v2 )
  {
    if ( Function_225621c() && AddTaskToTaskList1((int)Function_22562b0, v2, 1u) )
    {
      *v1 = v2;
      return 1;
    }
    free(v2);
  }
  return 0;
}

//----- (0225621C) --------------------------------------------------------
int __fastcall Function_225621c(int a1, int a2)
{
  int v2;
  int v3;
  uint v4;
  int v5;
  int v6;
  int v7;

  v2 = a1;
  v3 = a2;
  if ( !Function_22563ec(a1 + 36, a1 + 20) )
    return 0;
  *(uchar *)v2 = 0;
  *(uchar *)(v2 + 1) = 0;
  *(uchar *)(v2 + 2) = 0;
  *(uchar *)(v2 + 3) = 1;
  *(uchar *)(v2 + 6) = 0;
  *(uint *)(v2 + 32) = 0;
  Function_2013880((uint *)(v2 + 20));
  v4 = *(uint *)(v2 + 20);
  if ( v4 >= 0x18 )
  {
    u32_div_f(v4, 24);
    *(uint *)(v2 + 20) = v5;
  }
  if ( *(uint *)(v2 + 24) >= 0x3Cu )
  {
    u32_div_f(*(uint *)(v2 + 20), 60);
    *(uint *)(v2 + 20) = v6;
  }
  *(uchar *)(v2 + 5) = *(uint *)(v2 + 24);
  v7 = ((int (__fastcall *)(int *, int, int, int))dword_225423C[1572])(dword_2256678, 1, 36004597, v2);
  *(uint *)(v2 + 16) = v7;
  if ( !v7 )
    return 0;
  *(uint *)(v2 + 40) = v3;
  return 1;
}

//----- (02256298) --------------------------------------------------------
uint __fastcall Function_2256298(int a1)
{
  int v1;

  v1 = a1;
  Function_2256444(*(uint *)(a1 + 36));
  ((void (__fastcall *)(uint))dword_225423C[1598])(*(uint *)(v1 + 16));
  return free(v1);
}

//----- (022562B0) --------------------------------------------------------
uint __fastcall Function_22562b0(int *a1, uchar *a2)
{
  uchar *v2;
  int *v3;
  uint result;

  v2 = a2;
  v3 = a1;
  result = *a2;
  if ( result < 3 )
  {
    ((void (__fastcall *)(uint, uint))dword_225423C[183])(*((uint *)a2 + 10), *((uint *)a2 + 4));
    result = ((int (__fastcall *)(uchar *))dword_2256678[*v2 + 1])(v2);
    if ( result )
    {
      Function_2256298((int)v2);
      Call_RemoveTaskFromTaskList(v3);
      result = ((int (__fastcall *)(uint))dword_225423C[9])(*((uint *)v2 + 10));
    }
  }
  return result;
}

//----- (022562EC) --------------------------------------------------------
int __fastcall Function_22562ec(int result)
{
  *(uchar *)(result + 2) = 1;
  return result;
}

//----- (02256310) --------------------------------------------------------
char *__fastcall Function_2256310(char *result, char a2)
{
  if ( result[2] )
    a2 = 2;
  *result = a2;
  result[1] = 0;
  return result;
}

//----- (02256324) --------------------------------------------------------
int __fastcall Function_2256324(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_2256488(*(uint *)(v1 + 36), 0) )
    {
      ((void (__fastcall *)(uint))dword_225423C[4])(*(uint *)(v1 + 40));
      Function_2256310((char *)v1, 1);
    }
  }
  else
  {
    Function_2256464(*(uint *)(v1 + 36), 0);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (02256364) --------------------------------------------------------
int __fastcall Function_2256364(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( *(uchar *)(a1 + 2) )
  {
    Function_2256310((char *)a1, 2);
    result = 0;
  }
  else
  {
    if ( *(uchar *)(a1 + 6) )
    {
      *(uchar *)(a1 + 6) = 0;
      Function_2256464(*(uint *)(a1 + 36), 2);
    }
    if ( Function_2256488(*(uint *)(v1 + 36), 1) )
    {
      *(uchar *)(v1 + 5) = *(uint *)(v1 + 24);
      Function_2013880((uint *)(v1 + 20));
      if ( *(uchar *)(v1 + 5) != *(uint *)(v1 + 24) )
        Function_2256464(*(uint *)(v1 + 36), 1);
    }
    result = 0;
  }
  return result;
}

//----- (022563B8) --------------------------------------------------------
int __fastcall Function_22563b8(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_2256494(*(uint *)(v1 + 36)) )
      return 1;
  }
  else
  {
    Function_2256464(*(uint *)(v1 + 36), 3);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (022563EC) --------------------------------------------------------
int __fastcall Function_22563ec(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  uint *v5;
  int v6;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = malloc(8u, 84);
  v5 = (uint *)v4;
  if ( !v4 )
    return 0;
  v6 = ((int (__fastcall *)(int, int))dword_225423C[917])(v4 + 8, 8);
  *v5 = v3;
  v5[1] = ((int (__fastcall *)(int))dword_225423C[270])(v6);
  v5[18] = ((int (*)(void))dword_225423C[266])();
  if ( Function_22565f4(v5) )
  {
    v5[12] = AddTaskToTaskList1((int)Function_2256460, (int)v5, 3u);
    *v2 = v5;
    result = 1;
  }
  else
  {
    free((int)v5);
    result = 0;
  }
  return result;
}

//----- (02256444) --------------------------------------------------------
uint __fastcall Function_2256444(uint result)
{
  int v1;
  int *v2;

  v1 = result;
  if ( result )
  {
    Function_2256658();
    v2 = *(int **)(v1 + 48);
    if ( v2 )
      Call_RemoveTaskFromTaskList(v2);
    result = free(v1);
  }
  return result;
}

//----- (02256460) --------------------------------------------------------
void Function_2256460()
{
  ;
}

//----- (02256464) --------------------------------------------------------
int __fastcall Function_2256464(int *a1)
{
  int v1;

  v1 = *a1;
  return ((int (__fastcall *)(int *))dword_225423C[976])(&dword_22566A4[8]);
}

//----- (02256488) --------------------------------------------------------
void Function_2256488()
{
  JUMPOUT(&dword_225423C[957]);
}

//----- (02256494) --------------------------------------------------------
void Function_2256494()
{
  JUMPOUT(&dword_225423C[966]);
}

//----- (022564A0) --------------------------------------------------------
int __fastcall Function_22564a0(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = ((int (*)(void))dword_225423C[1024])();
  return ((int (__fastcall *)(int, int))dword_225423C[1018])(v2 + 8, v1);
}

//----- (022564B4) --------------------------------------------------------
int __fastcall Function_22564b4(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  Function_20183c4(*(uint **)(v3 + 4), 6u, &dword_2256678[4], 0);
  LoadFromNARC_RGCN(12, 23, *(uint **)(v3 + 4), 6u, 0, 0, 1, 8);
  LoadFromNARC_RCSN(12, 26, *(uint **)(v3 + 4), 6u, 0, 0, 1, 8);
  ((void (*)(void))dword_225423C[287])();
  Function_22565b0(v3);
  Function_2019448(*(uint **)(v3 + 4), 6u);
  REG_DISPCNT_SUB = REG_DISPCNT_SUB & 0xFFFFE0FF | ((((uint)(REG_DISPCNT_SUB << 19) >> 27) | 0x14) << 8);
  return Function_22564a0(v2);
}

//----- (02256548) --------------------------------------------------------
int __fastcall Function_2256548(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  Function_22565b0(v3);
  Function_2019448(*(uint **)(v3 + 4), 6u);
  return Function_22564a0(v2);
}

//----- (02256568) --------------------------------------------------------
int __fastcall Function_2256568(int a1, int a2)
{
  int v2;

  v2 = a2;
  if ( *(uint *)(*(uint *)((int (__fastcall *)(int))dword_225423C[1024])(a2) + 12) )
    ((void (*)(void))dword_225423C[301])();
  else
    ((void (*)(void))dword_225423C[287])();
  return Function_22564a0(v2);
}

//----- (02256594) --------------------------------------------------------
int __fastcall Function_2256594(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  Function_2019044(*(uint *)(v3 + 4), 6);
  return Function_22564a0(v2);
}

//----- (022565B0) --------------------------------------------------------
int __fastcall Function_22565b0(int **a1)
{
  int **v1;
  int v2;
  int *v3;
  int v4;

  v1 = a1;
  v2 = **a1;
  REG_DIVCNT = 0;
  REG_DIV_NUMER_L = v2;
  REG_DIV_DENOM_L = 10;
  REG_DIV_DENOM_H = 0;
  v3 = *v1;
  u32_div_f(**v1, 12);
  ((void (__fastcall *)(int *, uint))dword_225423C[1442])(v1[19], ((uint)v3[1] >> 1) + 30 * v4 + 60);
  return ((int (__fastcall *)(int *, int))dword_225423C[1442])(v1[20], (*v1)[1]);
}

//----- (022565F4) --------------------------------------------------------
int __fastcall Function_22565f4(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;

  v1 = a1;
  Function_2006ec0(12, 29, 1, 0, 0, 1, 8);
  if ( !((int (__fastcall *)(int, int, int, int, int))dword_225423C[1479])(
          v1 + 52,
          12,
          27,
          28,
          8) )
    return 0;
  v2 = dword_22566A4;
  v3 = 0;
  v4 = v1;
  do
  {
    *(uint *)(v4 + 76) = ((int (__fastcall *)(uint, int *, int))dword_225423C[1397])(
                             *(uint *)(v1 + 72),
                             v2,
                             v1 + 52);
    ++v3;
    v2 += 4;
    v4 += 4;
  }
  while ( v3 < 2 );
  return 1;
}

//----- (02256658) --------------------------------------------------------
int __fastcall Function_2256658(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  ((void (__fastcall *)(int))dword_225423C[1501])(a1 + 52);
  v2 = 0;
  v3 = v1;
  do
  {
    result = ((int (__fastcall *)(uint, uint))dword_225423C[1437])(*(uint *)(v1 + 72), *(uint *)(v3 + 76));
    ++v2;
    v3 += 4;
  }
  while ( v2 < 2 );
  return result;
}

