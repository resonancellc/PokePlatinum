//----- (022561D4) --------------------------------------------------------
int __fastcall Function_22561d4(int *a1)
{
  int *v1;
  int v2;

  v1 = a1;
  v2 = malloc(8u, 32);
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
int __fastcall Function_225621c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  *(uint *)(a1 + 12) = 1;
  if ( !Function_2099d7c(a4, (uint *)(a1 + 8), 4u) )
    *(uint *)(v4 + 8) = 0;
  *(uint *)(v4 + 4) = v7;
  if ( !Function_2256410(v4 + 16, v4 + 8, v6) )
    return 0;
  *(uchar *)v4 = 0;
  *(uchar *)(v4 + 1) = 0;
  *(uchar *)(v4 + 2) = 0;
  *(uint *)(v4 + 24) = ((int (__fastcall *)(int *, int, int (*)(), int))dword_225423C[1572])(
                           &dword_2256720,
                           1,
                           Function_2256284,
                           v4);
  *(uint *)(v4 + 28) = 0;
  *(uint *)(v4 + 20) = v5;
  return 1;
}

//----- (02256284) --------------------------------------------------------
int __fastcall Function_2256284(int result, int a2, int a3, int a4)
{
  if ( !result )
    *(uint *)(a4 + 28) = a2;
  return result;
}

//----- (0225628C) --------------------------------------------------------
uint __fastcall Function_225628c(int a1)
{
  int v1;

  v1 = a1;
  Function_2099d54(*(uint *)(a1 + 4), (int *)(a1 + 8), 4u);
  ((void (__fastcall *)(uint))dword_225423C[1598])(*(uint *)(v1 + 24));
  Function_225644c(*(uint *)(v1 + 16));
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
    ((void (__fastcall *)(uint, uint))dword_225423C[183])(*((uint *)a2 + 5), *((uint *)a2 + 6));
    result = ((int (__fastcall *)(uchar *))*(&off_2256724 + *v2))(v2);
    if ( result )
    {
      Function_225628c((int)v2);
      Call_RemoveTaskFromTaskList(v3);
      result = ((int (__fastcall *)(uint))dword_225423C[9])(*((uint *)v2 + 5));
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

//----- (022562F4) --------------------------------------------------------
char *__fastcall Function_22562f4(char *result, char a2)
{
  if ( result[2] )
    a2 = 2;
  *result = a2;
  result[1] = 0;
  return result;
}

//----- (02256308) --------------------------------------------------------
int __fastcall Function_2256308(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_225656c(*(uint *)(v1 + 16), 0) )
    {
      ((void (__fastcall *)(uint))dword_225423C[4])(*(uint *)(v1 + 20));
      Function_22562f4((char *)v1, 1);
    }
  }
  else
  {
    Function_2256548(*(uint *)(v1 + 16), 0);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (02256348) --------------------------------------------------------
int __fastcall Function_2256348(uchar *a1)
{
  uchar *v1;
  uint *v2;
  int result;
  int v4;
  int v5;
  uint v6;

  v1 = a1;
  v2 = (uint *)(a1 + 8);
  if ( a1[2] )
  {
    Function_22562f4(a1, 2);
    result = 0;
  }
  else
  {
    v4 = (uchar)a1[1];
    if ( v1[1] )
    {
      if ( v4 == 1 )
      {
        v5 = *((uint *)v1 + 7);
        if ( v5 == 2 )
        {
          v2[1] = 1;
          Function_2256548(*((uint *)v1 + 4), 2);
          *((uint *)v1 + 7) = 0;
          v1[1] = 0;
        }
        else if ( v5 == 3 )
        {
          v2[1] = 1;
          v6 = *v2 + 1;
          *v2 = v6;
          if ( v6 > 0x270F )
            *v2 = 0;
          Function_2256548(*((uint *)v1 + 4), 2);
          Function_2256548(*((uint *)v1 + 4), 3);
          *((uint *)v1 + 7) = 0;
          v1[1] = 0;
        }
      }
    }
    else if ( *((uint *)v1 + 7) == 1 )
    {
      v2[1] = 0;
      Function_2256548(*((uint *)v1 + 4), 2);
      *((uint *)v1 + 7) = 0;
      ++v1[1];
    }
    result = 0;
  }
  return result;
}

//----- (022563DC) --------------------------------------------------------
int __fastcall Function_22563dc(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_2256578(*(uint *)(v1 + 16)) )
      return 1;
  }
  else
  {
    Function_2256548(*(uint *)(v1 + 16), 1);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (02256410) --------------------------------------------------------
int __fastcall Function_2256410(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  uint *v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = malloc(8u, 96);
  v5 = (uint *)v4;
  if ( !v4 )
    return 0;
  v6 = ((int (__fastcall *)(int, int))dword_225423C[917])(v4 + 8, 4);
  *v5 = v3;
  v5[1] = ((int (__fastcall *)(int))dword_225423C[270])(v6);
  v5[8] = ((int (*)(void))dword_225423C[266])();
  Function_2256460(v5, v3);
  *v2 = v5;
  return 1;
}

//----- (0225644C) --------------------------------------------------------
uint __fastcall Function_225644c(uint result)
{
  int v1;

  v1 = result;
  if ( result )
  {
    Function_2256514();
    result = free(v1);
  }
  return result;
}

//----- (02256460) --------------------------------------------------------
int __fastcall Function_2256460(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v7;

  v2 = a1;
  v7 = a2;
  Function_2006ec0(12, 2, 1, 0, 0, 1, 8);
  Function_2006ec0(12, 47, 1, 2560, 0, 1, 8);
  ((void (__fastcall *)(int, int, int, int, int))dword_225423C[1479])(
    v2 + 56,
    12,
    45,
    46,
    8);
  ((void (__fastcall *)(int, int, int, int, int))dword_225423C[1479])(v2 + 76, 12, 3, 4, 8);
  *(uint *)(v2 + 36) = ((int (__fastcall *)(uint, int *, int))dword_225423C[1397])(
                           *(uint *)(v2 + 32),
                           dword_2256730,
                           v2 + 56);
  ((void (*)(void))dword_225423C[1473])();
  v3 = 0;
  v4 = v2;
  v5 = 360448;
  do
  {
    *(uint *)(v4 + 40) = ((int (__fastcall *)(uint, int *, int))dword_225423C[1397])(
                             *(uint *)(v2 + 32),
                             dword_2256740,
                             v2 + 76);
    ((void (*)(void))dword_225423C[1457])();
    ++v3;
    v4 += 4;
    v5 += 0x10000;
  }
  while ( v3 < 4 );
  return Function_22566a8(v2, v7);
}

//----- (02256514) --------------------------------------------------------
int __fastcall Function_2256514(int a1)
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
  while ( v2 < 4 );
  ((void (__fastcall *)(int))dword_225423C[1501])(v1 + 56);
  return ((int (__fastcall *)(int))dword_225423C[1501])(v1 + 76);
}

//----- (02256548) --------------------------------------------------------
int __fastcall Function_2256548(int *a1)
{
  int v1;

  v1 = *a1;
  return ((int (__fastcall *)(int *))dword_225423C[976])(&dword_225676C);
}

//----- (0225656C) --------------------------------------------------------
void Function_225656c()
{
  JUMPOUT(&dword_225423C[957]);
}

//----- (02256578) --------------------------------------------------------
void Function_2256578()
{
  JUMPOUT(&dword_225423C[966]);
}

//----- (02256584) --------------------------------------------------------
int __fastcall Function_2256584(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = ((int (*)(void))dword_225423C[1024])();
  return ((int (__fastcall *)(int, int))dword_225423C[1018])(v2 + 8, v1);
}

//----- (02256598) --------------------------------------------------------
int __fastcall Function_2256598(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  Function_20183c4(*(uint **)(v3 + 4), 6u, dword_2256750, 0);
  LoadFromNARC_RGCN(12, 44, *(uint **)(v3 + 4), 6u, 0, 0, 1, 8);
  LoadFromNARC_RCSN(12, 43, *(uint **)(v3 + 4), 6u, 0, 0, 1, 8);
  ((void (*)(void))dword_225423C[287])();
  Function_2019448(*(uint **)(v3 + 4), 6u);
  REG_DISPCNT_SUB = REG_DISPCNT_SUB & 0xFFFFE0FF | ((((uint)(REG_DISPCNT_SUB << 19) >> 27) | 4) << 8);
  return Function_2256584(v2);
}

//----- (02256628) --------------------------------------------------------
int __fastcall Function_2256628(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  Function_2019044(*(uint *)(v3 + 4), 6);
  return Function_2256584(v2);
}

//----- (02256644) --------------------------------------------------------
int __fastcall Function_2256644(int a1, int a2)
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
  return Function_2256584(v2);
}

//----- (02256684) --------------------------------------------------------
int __fastcall Function_2256684(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  v4 = ((int (__fastcall *)(int))dword_225423C[1025])(v2);
  Function_22566a8(v3, v4);
  return Function_2256584(v2);
}

//----- (022566A8) --------------------------------------------------------
int __fastcall Function_22566a8(int a1, int *a2)
{
  int v2;
  uint v3;
  int result;
  int v5;
  int v6;
  int v7;

  v2 = a1;
  v6 = *a2;
  v5 = 1000;
  v7 = 0;
  v3 = (uint)&REG_DIVCNT >> 11;
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
  while ( result < 4 );
  return result;
}

