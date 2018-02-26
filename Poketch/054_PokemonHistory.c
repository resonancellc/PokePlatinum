//----- (022561D4) --------------------------------------------------------
int __fastcall Function_22561d4(int *a1)
{
  int *v1;
  int v2;

  v1 = a1;
  v2 = malloc(8u, 172);
  if ( v2 )
  {
    if ( Function_225621c() && AddTaskToTaskList1((int)Function_22562f4, v2, 1u) )
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
  uint v3;
  uint *v4;
  uint *v5;
  int v6;
  int v8;
  int v9;
  int v10;
  int v11;

  v8 = a1;
  v9 = a2;
  v10 = a3;
  v11 = ((int (__fastcall *)(int))dword_225423C[193])(a2);
  v3 = 0;
  *(uint *)(v8 + 148) = Function_2056aac(v11);
  if ( *(uint *)(v8 + 148) )
  {
    v4 = (uint *)(v8 + 4);
    v5 = (uint *)(v8 + 12);
    v6 = v8;
    do
    {
      Function_2056ac8(v11, v3, v4, v5);
      *(uint *)(v6 + 8) = Function_2056afc(v11, v3++);
      v5 += 3;
      v4 += 3;
      v6 += 12;
    }
    while ( v3 < *(uint *)(v8 + 148) );
  }
  if ( !Function_225642c(v8 + 152, v8 + 4, v10) )
    return 0;
  *(uchar *)v8 = 0;
  *(uchar *)(v8 + 1) = 0;
  *(uchar *)(v8 + 2) = 0;
  *(uint *)(v8 + 160) = ((int (__fastcall *)(int *, int, int (*)(), int, int))dword_225423C[1572])(
                            dword_22566E0,
                            12,
                            Function_2256340,
                            v8,
                            8);
  *(uint *)(v8 + 164) = 0;
  *(uint *)(v8 + 168) = 0;
  *(uint *)(v8 + 156) = v9;
  return 1;
}

//----- (022562D4) --------------------------------------------------------
uint __fastcall Function_22562d4(int a1)
{
  int v1;

  v1 = a1;
  ((void (__fastcall *)(uint))dword_225423C[1598])(*(uint *)(a1 + 160));
  Function_2256460(*(uint *)(v1 + 152));
  return free(v1);
}

//----- (022562F4) --------------------------------------------------------
uint __fastcall Function_22562f4(int *a1, uchar *a2)
{
  uchar *v2;
  int *v3;
  uint result;

  v2 = a2;
  v3 = a1;
  result = *a2;
  if ( result < 3 )
  {
    ((void (__fastcall *)(uint, uint))dword_225423C[183])(*((uint *)a2 + 39), *((uint *)a2 + 40));
    result = ((int (__fastcall *)(uchar *))*(&off_22566D4 + *v2))(v2);
    if ( result )
    {
      Function_22562d4((int)v2);
      Call_RemoveTaskFromTaskList(v3);
      result = ((int (__fastcall *)(uint))dword_225423C[9])(*((uint *)v2 + 39));
    }
  }
  return result;
}

//----- (02256338) --------------------------------------------------------
int __fastcall Function_2256338(int result)
{
  *(uchar *)(result + 2) = 1;
  return result;
}

//----- (02256340) --------------------------------------------------------
int __fastcall Function_2256340(int result, int a2, int a3, int a4)
{
  *(uint *)(a4 + 168) = result;
  *(uint *)(a4 + 164) = a2;
  return result;
}

//----- (0225634C) --------------------------------------------------------
char *__fastcall Function_225634c(char *result, char a2)
{
  if ( result[2] )
    a2 = 2;
  *result = a2;
  result[1] = 0;
  return result;
}

//----- (02256360) --------------------------------------------------------
int __fastcall Function_2256360(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_2256490(*(uint *)(v1 + 152), 0) )
    {
      ((void (__fastcall *)(uint))dword_225423C[4])(*(uint *)(v1 + 156));
      Function_225634c((char *)v1, 1);
    }
  }
  else
  {
    Function_225646c(*(uint *)(v1 + 152), 0);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (022563AC) --------------------------------------------------------
int __fastcall Function_22563ac(int a1)
{
  int v1;
  int result;
  uint v3;

  v1 = a1;
  if ( *(uchar *)(a1 + 2) )
  {
    Function_225634c((char *)a1, 2);
    result = 0;
  }
  else
  {
    if ( *(uint *)(a1 + 164) == 1 )
    {
      v3 = 11 - *(uint *)(a1 + 168);
      if ( v3 < *(uint *)(a1 + 148) )
        ((void (__fastcall *)(uint, uint))dword_225423C[130])(
          *(uint *)(a1 + 12 * v3 + 4),
          *(uint *)(a1 + 12 * v3 + 8));
      *(uint *)(v1 + 164) = 0;
    }
    result = 0;
  }
  return result;
}

//----- (022563F4) --------------------------------------------------------
int __fastcall Function_22563f4(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_225649c(*(uint *)(v1 + 152)) )
      return 1;
  }
  else
  {
    Function_225646c(*(uint *)(v1 + 152), 1);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (0225642C) --------------------------------------------------------
int __fastcall Function_225642c(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  uint *v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = malloc(8u, 152);
  v5 = (uint *)v4;
  if ( !v4 )
    return 0;
  v6 = ((int (__fastcall *)(int, int))dword_225423C[917])(v4 + 8, 4);
  *v5 = v3;
  v5[1] = ((int (__fastcall *)(int))dword_225423C[270])(v6);
  v5[8] = ((int (*)(void))dword_225423C[266])();
  *v2 = v5;
  return 1;
}

//----- (02256460) --------------------------------------------------------
int __fastcall Function_2256460(int result)
{
  if ( result )
    result = free(result);
  return result;
}

//----- (0225646C) --------------------------------------------------------
int __fastcall Function_225646c(int *a1)
{
  int v1;

  v1 = *a1;
  return ((int (__fastcall *)(int *))dword_225423C[976])(&dword_225672C);
}

//----- (02256490) --------------------------------------------------------
void Function_2256490()
{
  JUMPOUT(&dword_225423C[957]);
}

//----- (0225649C) --------------------------------------------------------
void Function_225649c()
{
  JUMPOUT(&dword_225423C[966]);
}

//----- (022564A8) --------------------------------------------------------
int __fastcall Function_22564a8(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = ((int (*)(void))dword_225423C[1024])();
  return ((int (__fastcall *)(int, int))dword_225423C[1018])(v2 + 8, v1);
}

//----- (022564BC) --------------------------------------------------------
int __fastcall Function_22564bc(int a1, int a2)
{
  int v2;
  int v3;
  ushort *v4;
  int v5;
  int v7;
  char v8;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  v7 = ((int (__fastcall *)(int))dword_225423C[1025])(v2);
  Function_20183c4(*(uint **)(v3 + 4), 6u, dword_2256710, 0);
  Function_20196c0(*(uint **)(v3 + 4), 6, 4, 1, 0);
  Function_2019cb8(*(uint *)(v3 + 4), 6, 0, 0, 0, 0x20u, 0x18u, 0);
  ((void (*)(void))dword_225423C[287])();
  Function_201a7e8(*(uint **)(v3 + 4), (int)&v8, 6, 2, 2, 0x18u, 2u, 0, 1);
  Function_201ada4_ClearTextBox((int)&v8, 4);
  Function_201a9f4((int)&v8);
  v4 = Function_200b010_LoadFromNARCCallMsgDecrypt(26, 0x1CAu, 0, 8u);
  if ( v4 )
  {
    Function_2002d7c(0, (int)v4, 0);
    Function_201d78c((int)&v8, 0);
    Function_201accc((int)&v8);
    Function_20237bc_FreeMsg((int)v4, v5);
  }
  Function_201a8fc((int)&v8);
  Function_2019448(*(uint **)(v3 + 4), 6u);
  Function_22565ec(v3, v7);
  REG_DISPCNT_SUB = REG_DISPCNT_SUB & 0xFFFFE0FF | ((((uint)(REG_DISPCNT_SUB << 19) >> 27) | 4) << 8);
  return Function_22564a8(v2);
}

//----- (022565CC) --------------------------------------------------------
int __fastcall Function_22565cc(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  Function_22566a8();
  Function_2019044(*(uint *)(v3 + 4), 6);
  return Function_22564a8(v2);
}

//----- (022565EC) --------------------------------------------------------
int __fastcall Function_22565ec(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v10;
  int v11;
  int v12;

  v10 = a1;
  v11 = a2;
  ((void (__fastcall *)(uint))dword_225423C[1097])(0);
  ((void (__fastcall *)(int, int, int, int, int))dword_225423C[1479])(v10 + 84, 12, 5, 6, 8);
  v2 = 0;
  if ( *(uint *)(v11 + 144) )
  {
    v3 = v10;
    v4 = v11;
    v5 = &dword_2256750;
    v12 = 0;
    do
    {
      *(uint *)(v3 + 104) = Function_2079d8c(*(uint *)v4, 0, *(uint *)(v4 + 8));
      *(uint *)(v3 + 36) = ((int (__fastcall *)(uint, int *, int))dword_225423C[1397])(
                               *(uint *)(v10 + 32),
                               v5,
                               v10 + 84);
      ((void (*)(void))dword_225423C[1473])();
      v6 = Function_2079edc(*(uint *)v4, *(uint *)(v4 + 8), 0);
      ((void (__fastcall *)(uint, int))dword_225423C[1471])(*(uint *)(v3 + 36), v6);
      ++v2;
      v12 += 16;
      v4 += 12;
      v3 += 4;
      v5 += 4;
    }
    while ( (uint)v2 < *(uint *)(v11 + 144) );
  }
  if ( v2 < 12 )
  {
    v7 = v10 + 4 * v2;
    do
    {
      ++v2;
      *(uint *)(v7 + 36) = 0;
      v7 += 4;
    }
    while ( v2 < 12 );
  }
  v8 = *(uint *)(v11 + 144);
  return ((int (*)(void))dword_225423C[1113])();
}

//----- (022566A8) --------------------------------------------------------
int __fastcall Function_22566a8(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    if ( *(uint *)(v3 + 36) )
    {
      ((void (__fastcall *)(uint))dword_225423C[1437])(*(uint *)(v1 + 32));
      *(uint *)(v3 + 36) = 0;
    }
    ++v2;
    v3 += 4;
  }
  while ( v2 < 12 );
  return ((int (__fastcall *)(int))dword_225423C[1501])(v1 + 84);
}

