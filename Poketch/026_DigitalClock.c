//----- (022561D4) --------------------------------------------------------
int __fastcall Function_22561d4(int *a1)
{
  int *v1;
  int v2;

  v1 = a1;
  v2 = malloc(8u, 44);
  if ( v2 )
  {
    if ( Function_225621c() && AddTaskToTaskList1((int)Function_22562bc, v2, 1u) )
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
  int v8;

  v2 = a1;
  v3 = a2;
  if ( !Function_2256404(a1 + 36, a1 + 20) )
    return 0;
  *(uchar *)v2 = 0;
  *(uchar *)(v2 + 1) = 0;
  *(uchar *)(v2 + 2) = 0;
  *(uchar *)(v2 + 3) = 1;
  *(uchar *)(v2 + 7) = 0;
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
    u32_div_f(*(uint *)(v2 + 24), 60);
    *(uint *)(v2 + 24) = v7;
  }
  *(uchar *)(v2 + 6) = *(uint *)(v2 + 24);
  *(uchar *)(v2 + 5) = *(uint *)(v2 + 20);
  v8 = ((int (__fastcall *)(int *, int, int (*)(), int))dword_225423C[1572])(
         dword_2256718,
         1,
         Function_2256300,
         v2);
  *(uint *)(v2 + 16) = v8;
  if ( !v8 )
    return 0;
  *(uint *)(v2 + 40) = v3;
  return 1;
}

//----- (022562A4) --------------------------------------------------------
uint __fastcall Function_22562a4(int a1)
{
  int v1;

  v1 = a1;
  Function_225649c(*(uint *)(a1 + 36));
  ((void (__fastcall *)(uint))dword_225423C[1598])(*(uint *)(v1 + 16));
  return free(v1);
}

//----- (022562BC) --------------------------------------------------------
uint __fastcall Function_22562bc(int *a1, uchar *a2)
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
    result = ((int (__fastcall *)(uchar *))dword_2256718[*v2 + 1])(v2);
    if ( result )
    {
      Function_22562a4((int)v2);
      Call_RemoveTaskFromTaskList(v3);
      result = ((int (__fastcall *)(uint))dword_225423C[9])(*((uint *)v2 + 10));
    }
  }
  return result;
}

//----- (022562F8) --------------------------------------------------------
int __fastcall Function_22562f8(int result)
{
  *(uchar *)(result + 2) = 1;
  return result;
}

//----- (02256300) --------------------------------------------------------
int __fastcall Function_2256300(int a1, int a2, int a3, int a4)
{
  int result;

  if ( a3 )
  {
    if ( a3 == 1 )
    {
      result = 1;
      *(uint *)(a4 + 32) = 1;
      *(uchar *)(a4 + 7) = 1;
    }
  }
  else
  {
    *(uint *)(a4 + 32) = 0;
    result = 1;
    *(uchar *)(a4 + 7) = 1;
  }
  return result;
}

//----- (0225631C) --------------------------------------------------------
char *__fastcall Function_225631c(char *result, char a2)
{
  if ( result[2] )
    a2 = 2;
  *result = a2;
  result[1] = 0;
  return result;
}

//----- (02256330) --------------------------------------------------------
int __fastcall Function_2256330(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_22564cc(*(uint *)(v1 + 36), 0) )
    {
      ((void (__fastcall *)(uint))dword_225423C[4])(*(uint *)(v1 + 40));
      Function_225631c((char *)v1, 1);
    }
  }
  else
  {
    Function_22564a8(*(uint *)(v1 + 36), 0);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (02256370) --------------------------------------------------------
int __fastcall Function_2256370(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( *(uchar *)(a1 + 2) )
  {
    Function_225631c((char *)a1, 2);
    result = 0;
  }
  else
  {
    if ( *(uchar *)(a1 + 7) )
    {
      *(uchar *)(a1 + 7) = 0;
      Function_22564a8(*(uint *)(a1 + 36), 2);
    }
    if ( Function_22564cc(*(uint *)(v1 + 36), 1) )
    {
      *(uchar *)(v1 + 6) = *(uint *)(v1 + 24);
      *(uchar *)(v1 + 5) = *(uint *)(v1 + 20);
      Function_2013880((uint *)(v1 + 20));
      if ( *(uchar *)(v1 + 6) != *(uint *)(v1 + 24) || *(uchar *)(v1 + 5) != *(uint *)(v1 + 20) )
        Function_22564a8(*(uint *)(v1 + 36), 1);
    }
    result = 0;
  }
  return result;
}

//----- (022563D0) --------------------------------------------------------
int __fastcall Function_22563d0(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_22564d8(*(uint *)(v1 + 36)) )
      return 1;
  }
  else
  {
    Function_22564a8(*(uint *)(v1 + 36), 3);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (02256404) --------------------------------------------------------
int __fastcall Function_2256404(uint *a1, int a2)
{
  int v2;
  uint *v3;
  int v4;
  uint *v5;
  int v6;
  int v7;
  int result;
  int v9;

  v2 = a2;
  v3 = a1;
  v4 = malloc(8u, 768);
  v5 = (uint *)v4;
  if ( !v4 )
    return 0;
  v6 = ((int (__fastcall *)(int, int))dword_225423C[917])(v4 + 8, 8);
  *v5 = v2;
  v5[1] = ((int (__fastcall *)(int))dword_225423C[270])(v6);
  v7 = Function_2006f6c(12, 25, 1, &v9, 8);
  if ( v7 )
  {
    Function_225646c(v9 + 12, v5 + 12);
    free(v7);
    *v3 = v5;
    result = 1;
  }
  else
  {
    free((int)v5);
    result = 0;
  }
  return result;
}

//----- (0225646C) --------------------------------------------------------
int __fastcall Function_225646c(int a1, int a2, int a3, short a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  short v8;
  int result;

  v4 = a1;
  v5 = a2;
  v6 = 0;
  v7 = 576;
  do
  {
    MIi_CpuCopy16(v4, v5, 64, a4);
    result = MIi_CpuCopy16(v4 + v7, v5 + 64, 16, v8);
    ++v6;
    v4 += 64;
    v5 += 80;
    v7 -= 48;
  }
  while ( v6 < 9 );
  return result;
}

//----- (0225649C) --------------------------------------------------------
int __fastcall Function_225649c(int result)
{
  if ( result )
    result = free(result);
  return result;
}

//----- (022564A8) --------------------------------------------------------
int __fastcall Function_22564a8(int *a1)
{
  int v1;

  v1 = *a1;
  return ((int (__fastcall *)(int *))dword_225423C[976])(&dword_2256744);
}

//----- (022564CC) --------------------------------------------------------
void Function_22564cc()
{
  JUMPOUT(&dword_225423C[957]);
}

//----- (022564D8) --------------------------------------------------------
void Function_22564d8()
{
  JUMPOUT(&dword_225423C[966]);
}

//----- (022564E4) --------------------------------------------------------
int __fastcall Function_22564e4(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = ((int (*)(void))dword_225423C[1024])();
  return ((int (__fastcall *)(int, int))dword_225423C[1018])(v2 + 8, v1);
}

//----- (022564F8) --------------------------------------------------------
int __fastcall Function_22564f8(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  Function_20183c4(*(uint **)(v3 + 4), 6u, dword_2256728, 0);
  LoadFromNARC_RGCN(12, 23, *(uint **)(v3 + 4), 6u, 0, 0, 1, 8);
  LoadFromNARC_RCSN(12, 24, *(uint **)(v3 + 4), 6u, 0, 0, 1, 8);
  ((void (*)(void))dword_225423C[287])();
  Function_22565f4(v3);
  Function_2019448(*(uint **)(v3 + 4), 6u);
  REG_DISPCNT_SUB = REG_DISPCNT_SUB & 0xFFFFE0FF | ((((uint)(REG_DISPCNT_SUB << 19) >> 27) | 4) << 8);
  return Function_22564e4(v2);
}

//----- (0225658C) --------------------------------------------------------
int __fastcall Function_225658c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  Function_22565f4(v3);
  Function_2019448(*(uint **)(v3 + 4), 6u);
  return Function_22564e4(v2);
}

//----- (022565AC) --------------------------------------------------------
int __fastcall Function_22565ac(int a1, int a2)
{
  int v2;

  v2 = a2;
  if ( *(uint *)(*(uint *)((int (__fastcall *)(int))dword_225423C[1024])(a2) + 12) )
    ((void (*)(void))dword_225423C[301])();
  else
    ((void (*)(void))dword_225423C[287])();
  return Function_22564e4(v2);
}

//----- (022565D8) --------------------------------------------------------
int __fastcall Function_22565d8(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  Function_2019044(*(uint *)(v3 + 4), 6);
  return Function_22564e4(v2);
}

//----- (022565F4) --------------------------------------------------------
int __fastcall Function_22565f4(int *a1)
{
  int *v1;
  int v2;
  uint v3;
  uint v4;
  char v5;
  int v6;
  uint v7;
  char v8;

  v1 = a1;
  v2 = *(uint *)*a1;
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
  Function_20198e8(v1[1], 6, 3, 7, 4u, 9u, (int)(v1 + 12), 4 * REG_DIV_RESULT_L, 0, 0x28u, 9u);
  Function_20198e8(v1[1], 6, 8, 7, 4u, 9u, (int)(v1 + 12), 4 * v5, 0, 0x28u, 9u);
  v6 = *(uint *)(*v1 + 4);
  REG_DIVCNT = 0;
  REG_DIV_NUMER_L = v6;
  REG_DIV_DENOM_L = 10;
  REG_DIV_DENOM_H = 0;
  v7 = (uint)&REG_DIVCNT >> 11;
  while ( (ushort)REG_DIVCNT & (ushort)v7 )
    ;
  while ( (ushort)REG_DIVCNT & (ushort)((uint)&REG_DIV_RESULT_L >> 11) )
    ;
  v8 = REG_DIVREM_RESULT_L;
  Function_20198e8(v1[1], 6, 15, 7, 4u, 9u, (int)(v1 + 12), 4 * REG_DIV_RESULT_L, 0, 0x28u, 9u);
  return Function_20198e8(v1[1], 6, 20, 7, 4u, 9u, (int)(v1 + 12), 4 * v8, 0, 0x28u, 9u);
}

