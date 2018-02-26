//----- (022561D4) --------------------------------------------------------
int __fastcall Function_22561d4(int *a1)
{
  int *v1;
  int v2;

  v1 = a1;
  v2 = malloc(8u, 32);
  if ( v2 )
  {
    if ( Function_225621c() && AddTaskToTaskList1((int)Function_2256298, v2, 1u) )
    {
      *v1 = v2;
      return 1;
    }
    free(v2);
  }
  return 0;
}

//----- (0225621C) --------------------------------------------------------
int __fastcall Function_225621c(int a1, int a2, int a3)
{
  int v3;
  int v4;

  v3 = a1;
  *(uint *)(a1 + 16) = a2;
  v4 = a3;
  *(uint *)(a1 + 28) = ((int (__fastcall *)(int))dword_225423C[193])(a2);
  *(uint *)(v3 + 8) = 1;
  *(uint *)(v3 + 4) = Function_20568c8(*(uint *)(v3 + 28));
  if ( !Function_2256404(v3 + 12, v3 + 4, v4) )
    return 0;
  *(uchar *)v3 = 0;
  *(uchar *)(v3 + 1) = 0;
  *(uchar *)(v3 + 2) = 0;
  *(uint *)(v3 + 20) = ((int (__fastcall *)(int *, int, int (*)(), int))dword_225423C[1572])(
                           &dword_2256718,
                           1,
                           Function_2256278,
                           v3);
  *(uint *)(v3 + 24) = 0;
  return 1;
}

//----- (02256278) --------------------------------------------------------
int __fastcall Function_2256278(int result, int a2, int a3, int a4)
{
  if ( !result )
    *(uint *)(a4 + 24) = a2;
  return result;
}

//----- (02256280) --------------------------------------------------------
uint __fastcall Function_2256280(int a1)
{
  int v1;

  v1 = a1;
  ((void (__fastcall *)(uint))dword_225423C[1598])(*(uint *)(a1 + 20));
  Function_2256440(*(uint *)(v1 + 12));
  return free(v1);
}

//----- (02256298) --------------------------------------------------------
uint __fastcall Function_2256298(int *a1, uchar *a2)
{
  uchar *v2;
  int *v3;
  uint result;

  v2 = a2;
  v3 = a1;
  result = *a2;
  if ( result < 3 )
  {
    ((void (__fastcall *)(uint, uint))dword_225423C[183])(*((uint *)a2 + 4), *((uint *)a2 + 5));
    result = ((int (__fastcall *)(uchar *))*(&off_225671C + *v2))(v2);
    if ( result )
    {
      Function_2256280((int)v2);
      Call_RemoveTaskFromTaskList(v3);
      result = ((int (__fastcall *)(uint))dword_225423C[9])(*((uint *)v2 + 4));
    }
  }
  return result;
}

//----- (022562D4) --------------------------------------------------------
int __fastcall Function_22562d4(int result)
{
  *(uchar *)(result + 2) = 1;
  return result;
}

//----- (022562DC) --------------------------------------------------------
char *__fastcall Function_22562dc(char *result, char a2)
{
  if ( result[2] )
    a2 = 2;
  *result = a2;
  result[1] = 0;
  return result;
}

//----- (022562F0) --------------------------------------------------------
int __fastcall Function_22562f0(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_2256560(*(uint *)(v1 + 12), 0) )
    {
      ((void (__fastcall *)(uint))dword_225423C[4])(*(uint *)(v1 + 16));
      Function_22562dc((char *)v1, 1);
    }
  }
  else
  {
    Function_225653c(*(uint *)(v1 + 12), 0);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (02256330) --------------------------------------------------------
int __fastcall Function_2256330(char *a1)
{
  char *v1;
  int result;
  int v3;
  int v4;

  v1 = a1;
  if ( a1[2] )
  {
    Function_22562dc(a1, 2);
    result = 0;
  }
  else
  {
    v3 = (uchar)a1[1];
    if ( v1[1] )
    {
      if ( v3 == 1 )
      {
        v4 = *((uint *)v1 + 6);
        if ( v4 == 2 )
        {
          *((uint *)v1 + 2) = 1;
          Function_225653c(*((uint *)v1 + 3), 2);
          *((uint *)v1 + 6) = 0;
          v1[1] = 0;
        }
        else if ( v4 == 3 )
        {
          *((uint *)v1 + 2) = 1;
          *((uint *)v1 + 1) = 0;
          Function_20568cc(*((uint *)v1 + 7), 0);
          Function_225653c(*((uint *)v1 + 3), 2);
          Function_225653c(*((uint *)v1 + 3), 3);
          *((uint *)v1 + 6) = 0;
          v1[1] = 0;
        }
      }
    }
    else if ( *((uint *)v1 + 6) == 1 )
    {
      *((uint *)v1 + 2) = 0;
      Function_225653c(*((uint *)v1 + 3), 2);
      *((uint *)v1 + 6) = 0;
      ++v1[1];
    }
    else if ( ((int (__fastcall *)(uint))dword_225423C[191])(*((uint *)v1 + 4)) )
    {
      *((uint *)v1 + 1) = Function_20568c8(*((uint *)v1 + 7));
      Function_225653c(*((uint *)v1 + 3), 3);
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
    if ( v2 == 1 && Function_225656c(*(uint *)(v1 + 12)) )
      return 1;
  }
  else
  {
    Function_225653c(*(uint *)(v1 + 12), 1);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (02256404) --------------------------------------------------------
int __fastcall Function_2256404(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  uint *v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = malloc(8u, 100);
  v5 = (uint *)v4;
  if ( !v4 )
    return 0;
  v6 = ((int (__fastcall *)(int, int))dword_225423C[917])(v4 + 8, 4);
  *v5 = v3;
  v5[1] = ((int (__fastcall *)(int))dword_225423C[270])(v6);
  v5[8] = ((int (*)(void))dword_225423C[266])();
  Function_2256454(v5, v3);
  *v2 = v5;
  return 1;
}

//----- (02256440) --------------------------------------------------------
uint __fastcall Function_2256440(uint result)
{
  int v1;

  v1 = result;
  if ( result )
  {
    Function_2256508();
    result = free(v1);
  }
  return result;
}

//----- (02256454) --------------------------------------------------------
int __fastcall Function_2256454(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v7;

  v2 = a1;
  v7 = a2;
  Function_2006ec0(12, 2, 1, 0, 0, 1, 8);
  Function_2006ec0(12, 52, 1, 2560, 0, 1, 8);
  ((void (__fastcall *)(int, int, int, int, int))dword_225423C[1479])(
    v2 + 60,
    12,
    50,
    51,
    8);
  ((void (__fastcall *)(int, int, int, int, int))dword_225423C[1479])(v2 + 80, 12, 3, 4, 8);
  *(uint *)(v2 + 36) = ((int (__fastcall *)(uint, int *, int))dword_225423C[1397])(
                           *(uint *)(v2 + 32),
                           dword_2256728,
                           v2 + 60);
  ((void (*)(void))dword_225423C[1473])();
  v3 = 0;
  v4 = v2;
  v5 = 327680;
  do
  {
    *(uint *)(v4 + 40) = ((int (__fastcall *)(uint, int *, int))dword_225423C[1397])(
                             *(uint *)(v2 + 32),
                             dword_2256738,
                             v2 + 80);
    ((void (*)(void))dword_225423C[1457])();
    ++v3;
    v4 += 4;
    v5 += 0x10000;
  }
  while ( v3 < 5 );
  return Function_225669c(v2, v7);
}

//----- (02256508) --------------------------------------------------------
int __fastcall Function_2256508(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  ((void (__fastcall *)(uint, uint))dword_225423C[1437])(*(uint *)(a1 + 32), *(uint *)(a1 + 36));
  v2 = 0;
  v3 = v1;
  do
  {
    ((void (__fastcall *)(uint, uint))dword_225423C[1437])(*(uint *)(v1 + 32), *(uint *)(v3 + 40));
    ++v2;
    v3 += 4;
  }
  while ( v2 < 5 );
  ((void (__fastcall *)(int))dword_225423C[1501])(v1 + 60);
  return ((int (__fastcall *)(int))dword_225423C[1501])(v1 + 80);
}

//----- (0225653C) --------------------------------------------------------
int __fastcall Function_225653c(int *a1)
{
  int v1;

  v1 = *a1;
  return ((int (__fastcall *)(int *))dword_225423C[976])(&dword_2256764);
}

//----- (02256560) --------------------------------------------------------
void Function_2256560()
{
  JUMPOUT(&dword_225423C[957]);
}

//----- (0225656C) --------------------------------------------------------
void Function_225656c()
{
  JUMPOUT(&dword_225423C[966]);
}

//----- (02256578) --------------------------------------------------------
int __fastcall Function_2256578(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = ((int (*)(void))dword_225423C[1024])();
  return ((int (__fastcall *)(int, int))dword_225423C[1018])(v2 + 8, v1);
}

//----- (0225658C) --------------------------------------------------------
int __fastcall Function_225658c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  Function_20183c4(*(uint **)(v3 + 4), 6u, dword_2256748, 0);
  LoadFromNARC_RGCN(12, 49, *(uint **)(v3 + 4), 6u, 0, 0, 1, 8);
  LoadFromNARC_RCSN(12, 48, *(uint **)(v3 + 4), 6u, 0, 0, 1, 8);
  ((void (*)(void))dword_225423C[287])();
  Function_2019448(*(uint **)(v3 + 4), 6u);
  REG_DISPCNT_SUB = REG_DISPCNT_SUB & 0xFFFFE0FF | ((((uint)(REG_DISPCNT_SUB << 19) >> 27) | 4) << 8);
  return Function_2256578(v2);
}

//----- (0225661C) --------------------------------------------------------
int __fastcall Function_225661c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  Function_2019044(*(uint *)(v3 + 4), 6);
  return Function_2256578(v2);
}

//----- (02256638) --------------------------------------------------------
int __fastcall Function_2256638(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  v4 = v3;
  v5 = *(uint *)(*(uint *)v3 + 4);
  if ( v5 )
  {
    if ( v5 == 1 )
      ((void (__fastcall *)(uint, uint))dword_225423C[1442])(*(uint *)(v4 + 36), 0);
  }
  else
  {
    ((void (__fastcall *)(int))dword_225423C[122])(1641);
    ((void (__fastcall *)(uint, int))dword_225423C[1442])(*(uint *)(v4 + 36), 1);
  }
  return Function_2256578(v2);
}

//----- (02256678) --------------------------------------------------------
int __fastcall Function_2256678(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  v4 = ((int (__fastcall *)(int))dword_225423C[1025])(v2);
  Function_225669c(v3, v4);
  return Function_2256578(v2);
}

//----- (0225669C) --------------------------------------------------------
int __fastcall Function_225669c(int a1, int *a2)
{
  int v2;
  uint v3;
  int result;
  int v5;
  int v6;
  int v7;

  v2 = a1;
  v6 = *a2;
  v3 = (uint)&REG_DIVCNT >> 11;
  v5 = 10000;
  v7 = 0;
  do
  {
    REG_DIVCNT = 0;
    REG_DIV_NUMER_L = v6;
    REG_DIV_DENOM_L = v5;
    REG_DIV_DENOM_H = 0;
    while ( (ushort)REG_DIVCNT & (ushort)v3 )
      ;
    ((void (__fastcall *)(uint, int))dword_225423C[1442])(*(uint *)(v2 + 40), REG_DIV_RESULT_L);
    while ( (ushort)REG_DIVCNT & (ushort)((uint)&REG_DIVCNT >> 11) )
      ;
    v6 = REG_DIVREM_RESULT_L;
    v5 = u32_div_f(v5, 10);
    v2 += 4;
    result = v7 + 1;
    v7 = result;
  }
  while ( result < 5 );
  return result;
}

