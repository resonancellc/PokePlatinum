//----- (022561D4) --------------------------------------------------------
int __fastcall Function_22561d4(int *a1)
{
  int *v1;
  int v2;

  v1 = a1;
  v2 = malloc(8u, 56);
  if ( v2 )
  {
    if ( Function_225621c() && AddTaskToTaskList1((int)Function_225628c, v2, 1u) )
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
  int v4;
  int result;

  v2 = a1;
  v3 = a2;
  if ( !Function_22563dc(a1 + 36, a1 + 4) )
    return 0;
  *(uchar *)v2 = 0;
  *(uchar *)(v2 + 1) = 0;
  *(uchar *)(v2 + 2) = 0;
  *(uint *)(v2 + 40) = v3;
  *(uint *)(v2 + 44) = ((int (__fastcall *)(int *, int, int (*)(), int))dword_225423C[1572])(
                           dword_22565FC,
                           6,
                           Function_2256284,
                           v2);
  v4 = 0;
  *(uint *)(v2 + 48) = 0;
  result = 1;
  do
  {
    ++v4;
    *(uint *)(v2 + 8) = 1;
    v2 += 4;
  }
  while ( v4 < 6 );
  return result;
}

//----- (02256268) --------------------------------------------------------
uint __fastcall Function_2256268(int a1)
{
  int v1;

  v1 = a1;
  if ( *(uint *)(a1 + 44) )
    ((void (*)(void))dword_225423C[1598])();
  Function_225640c(*(uint *)(v1 + 36));
  return free(v1);
}

//----- (02256284) --------------------------------------------------------
int __fastcall Function_2256284(int result, int a2, int a3, int a4)
{
  *(uint *)(a4 + 48) = a2;
  *(uint *)(a4 + 52) = result;
  return result;
}

//----- (0225628C) --------------------------------------------------------
uint __fastcall Function_225628c(int *a1, uchar *a2)
{
  uchar *v2;
  int *v3;
  uint result;

  v2 = a2;
  v3 = a1;
  result = *a2;
  if ( result < 3 )
  {
    ((void (__fastcall *)(uint, uint))dword_225423C[183])(*((uint *)a2 + 10), *((uint *)a2 + 11));
    result = ((int (__fastcall *)(uchar *))*(&off_22565F0 + *v2))(v2);
    if ( result )
    {
      Function_2256268((int)v2);
      Call_RemoveTaskFromTaskList(v3);
      result = ((int (__fastcall *)(uint))dword_225423C[9])(*((uint *)v2 + 10));
    }
  }
  return result;
}

//----- (022562C8) --------------------------------------------------------
int __fastcall Function_22562c8(int result)
{
  *(uchar *)(result + 2) = 1;
  return result;
}

//----- (022562D0) --------------------------------------------------------
char *__fastcall Function_22562d0(char *result, char a2)
{
  if ( result[2] )
    a2 = 2;
  *result = a2;
  result[1] = 0;
  return result;
}

//----- (022562E4) --------------------------------------------------------
int __fastcall Function_22562e4(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_225643c(*(uint *)(v1 + 36), 0) )
    {
      ((void (__fastcall *)(uint))dword_225423C[4])(*(uint *)(v1 + 40));
      Function_22562d0((char *)v1, 1);
    }
  }
  else
  {
    Function_2256418(*(uint *)(v1 + 36), 0);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (02256324) --------------------------------------------------------
int __fastcall Function_2256324(char *a1)
{
  char *v1;
  int result;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  if ( a1[2] )
  {
    Function_22562d0(a1, 2);
    result = 0;
  }
  else
  {
    v3 = (uchar)a1[1];
    if ( v1[1] )
    {
      if ( v3 == 1 )
      {
        v5 = *((uint *)v1 + 12);
        if ( v5 == 2 )
        {
          Function_2256418(*((uint *)v1 + 9), 3);
          v1[1] = 0;
        }
        else if ( v5 == 3 )
        {
          Function_2256418(*((uint *)v1 + 9), 3);
          v1[1] = 0;
        }
      }
    }
    else if ( *((uint *)v1 + 12) == 1 )
    {
      v4 = *((uint *)v1 + 13);
      if ( *(uint *)&v1[4 * v4 + 8] )
      {
        *((ushort *)v1 + 16) = v4;
        Function_2256418(*((uint *)v1 + 9), 2);
        ((void (__fastcall *)(int))dword_225423C[122])(1635);
        ++v1[1];
      }
      else
      {
        ((void (__fastcall *)(int))dword_225423C[122])(1646);
      }
    }
    result = 0;
  }
  return result;
}

//----- (022563A8) --------------------------------------------------------
int __fastcall Function_22563a8(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_2256448(*(uint *)(v1 + 36)) )
      return 1;
  }
  else
  {
    Function_2256418(*(uint *)(v1 + 36), 1);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (022563DC) --------------------------------------------------------
int __fastcall Function_22563dc(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  uint *v5;
  int v6;
  int v7;

  v2 = a1;
  v3 = a2;
  v4 = malloc(8u, 32);
  v5 = (uint *)v4;
  if ( !v4 )
    return 0;
  v6 = ((int (__fastcall *)(int, int))dword_225423C[917])(v4 + 8, 4);
  *v5 = v3;
  v7 = ((int (__fastcall *)(int))dword_225423C[270])(v6);
  v5[1] = v7;
  if ( !v7 )
    return 0;
  *v2 = v5;
  return 1;
}

//----- (0225640C) --------------------------------------------------------
int __fastcall Function_225640c(int result)
{
  if ( result )
    result = free(result);
  return result;
}

//----- (02256418) --------------------------------------------------------
int __fastcall Function_2256418(int *a1)
{
  int v1;

  v1 = *a1;
  return ((int (__fastcall *)(int *))dword_225423C[976])(&dword_225663C);
}

//----- (0225643C) --------------------------------------------------------
void Function_225643c()
{
  JUMPOUT(&dword_225423C[957]);
}

//----- (02256448) --------------------------------------------------------
void Function_2256448()
{
  JUMPOUT(&dword_225423C[966]);
}

//----- (02256454) --------------------------------------------------------
int __fastcall Function_2256454(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = ((int (*)(void))dword_225423C[1024])();
  return ((int (__fastcall *)(int, int))dword_225423C[1018])(v2 + 8, v1);
}

//----- (02256468) --------------------------------------------------------
int __fastcall Function_2256468(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v6;

  v6 = a2;
  v2 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  v3 = ((int (__fastcall *)(int))dword_225423C[1025])(v6);
  Function_20183c4(*(uint **)(v2 + 4), 6u, dword_2256620, 0);
  LoadFromNARC_RGCN(12, 59, *(uint **)(v2 + 4), 6u, 0, 0, 1, 8);
  LoadFromNARC_RCSN(12, 58, *(uint **)(v2 + 4), 6u, 0, 0, 1, 8);
  ((void (*)(void))dword_225423C[287])();
  v4 = 0;
  do
  {
    Function_225659c(v2, v4++, *(uint *)(v3 + 4), 0);
    v3 += 4;
  }
  while ( v4 < 6 );
  Function_2019448(*(uint **)(v2 + 4), 6u);
  REG_DISPCNT_SUB = ((((uint)(REG_DISPCNT_SUB << 19) >> 27) | 4) << 8) | REG_DISPCNT_SUB & 0xFFFFE0FF;
  return Function_2256454(v6);
}

//----- (02256518) --------------------------------------------------------
int __fastcall Function_2256518(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  Function_2019044(*(uint *)(v3 + 4), 6);
  return Function_2256454(v2);
}

//----- (02256534) --------------------------------------------------------
int __fastcall Function_2256534(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  v4 = ((int (__fastcall *)(int))dword_225423C[1025])(v2);
  Function_225659c(v3, *(ushort *)(v4 + 28), *(uint *)(v4 + 4 * *(ushort *)(v4 + 28) + 4), 1);
  Function_2019448(*(uint **)(v3 + 4), 6u);
  return Function_2256454(v2);
}

//----- (02256568) --------------------------------------------------------
int __fastcall Function_2256568(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  v4 = ((int (__fastcall *)(int))dword_225423C[1025])(v2);
  Function_225659c(v3, *(ushort *)(v4 + 28), *(uint *)(v4 + 4 * *(ushort *)(v4 + 28) + 4), 0);
  Function_2019448(*(uint **)(v3 + 4), 6u);
  return Function_2256454(v2);
}

//----- (0225659C) --------------------------------------------------------
int __fastcall Function_225659c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int result;
  int v11;
  ushort *v12;

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = Function_2019fe4(*(uint *)(a1 + 4), 6) + 2 * *((ushort *)dword_2256614 + a2);
  if ( v5 )
    v8 = 72 * (v4 + 1);
  else
    v8 = 0;
  if ( v6 )
    v8 += 36;
  v9 = 0;
  result = 0;
  do
  {
    v11 = 0;
    v12 = (ushort *)v7;
    do
    {
      ++v11;
      *v12 = v8++;
      ++v12;
    }
    while ( v11 < 6 );
    ++v9;
    v7 += 64;
  }
  while ( v9 < 6 );
  return result;
}

