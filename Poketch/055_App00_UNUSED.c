//----- (022561D4) --------------------------------------------------------
int __fastcall Function_22561d4(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;

  v4 = a1;
  v5 = a4;
  v6 = malloc(8u, 16);
  if ( v6 )
  {
    if ( Function_225621c() && AddTaskToTaskList1((int)Function_2256254, v6, 1u) )
    {
      *v4 = v6;
      *(uint *)(v6 + 4) = v5;
      return 1;
    }
    free(v6);
  }
  return 0;
}

//----- (0225621C) --------------------------------------------------------
int __fastcall Function_225621c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( !Function_225632c(a1 + 8, a1 + 4) )
    return 0;
  *(uchar *)v2 = 0;
  *(uchar *)(v2 + 1) = 0;
  *(uchar *)(v2 + 2) = 0;
  *(uint *)(v2 + 12) = v3;
  return 1;
}

//----- (02256240) --------------------------------------------------------
uint __fastcall Function_2256240(int a1)
{
  int v1;

  v1 = a1;
  Function_2256360(*(uint *)(a1 + 8));
  return free(v1);
}

//----- (02256254) --------------------------------------------------------
int __fastcall Function_2256254(int result, uchar *a2)
{
  int v2;
  uint v3;
  int *v4;

  v2 = (int)a2;
  v3 = *a2;
  v4 = (int *)result;
  if ( v3 < 3 )
  {
    result = ((int (__fastcall *)(int))*(&off_2256484 + v3))(v2);
    if ( result )
    {
      Function_2256240(v2);
      Call_RemoveTaskFromTaskList(v4);
      result = ((int (__fastcall *)(uint))dword_225423C[9])(*(uint *)(v2 + 12));
    }
  }
  return result;
}

//----- (02256288) --------------------------------------------------------
int __fastcall Function_2256288(int result)
{
  *(uchar *)(result + 2) = 1;
  return result;
}

//----- (02256290) --------------------------------------------------------
char *__fastcall Function_2256290(char *result, char a2)
{
  if ( result[2] )
    a2 = 2;
  *result = a2;
  result[1] = 0;
  return result;
}

//----- (022562A4) --------------------------------------------------------
int __fastcall Function_22562a4(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_225639c(*(uint *)(v1 + 8), 0) )
    {
      ((void (__fastcall *)(uint))dword_225423C[4])(*(uint *)(v1 + 12));
      Function_2256290((char *)v1, 1);
    }
  }
  else
  {
    Function_2256378(*(uint *)(v1 + 8), 0);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (022562E4) --------------------------------------------------------
int __fastcall Function_22562e4(char *a1)
{
  if ( a1[2] )
    Function_2256290(a1, 2);
  return 0;
}

//----- (022562F8) --------------------------------------------------------
int __fastcall Function_22562f8(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_22563a8(*(uint *)(v1 + 8)) )
      return 1;
  }
  else
  {
    Function_2256378(*(uint *)(v1 + 8), 1);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (0225632C) --------------------------------------------------------
int __fastcall Function_225632c(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  uint *v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = malloc(8u, 48);
  v5 = (uint *)v4;
  if ( !v4 )
    return 0;
  ((void (__fastcall *)(int, int))dword_225423C[917])(v4 + 8, 8);
  *v5 = v3;
  v6 = Function_2018340(8u);
  v5[1] = v6;
  if ( !v6 )
    return 0;
  *v2 = v5;
  return 1;
}

//----- (02256360) --------------------------------------------------------
uint __fastcall Function_2256360(uint result)
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

//----- (02256378) --------------------------------------------------------
int __fastcall Function_2256378(int *a1)
{
  int v1;

  v1 = *a1;
  return ((int (__fastcall *)(int *))dword_225423C[976])(&dword_22564AC);
}

//----- (0225639C) --------------------------------------------------------
void Function_225639c()
{
  JUMPOUT(&dword_225423C[957]);
}

//----- (022563A8) --------------------------------------------------------
void Function_22563a8()
{
  JUMPOUT(&dword_225423C[966]);
}

//----- (022563B4) --------------------------------------------------------
int __fastcall Function_22563b4(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = ((int (*)(void))dword_225423C[1024])();
  return ((int (__fastcall *)(int, int))dword_225423C[1018])(v2 + 8, v1);
}

//----- (022563C8) --------------------------------------------------------
int __fastcall Function_22563c8(int a1, int a2)
{
  int v2;
  uint **v3;

  v2 = a2;
  v3 = (uint **)((int (__fastcall *)(int))dword_225423C[1024])(a2);
  Function_20183c4(v3[1], 6u, dword_2256490, 0);
  LoadFromNARC_RGCN(12, 8, v3[1], 6u, 0, 0, 0, 8);
  Function_2019cb8((int)v3[1], 6, 0, 0, 0, 0x20u, 0x18u, 0);
  Call_LoadFromNARC_RLCN(12, 9, 4u, 0, 32, 8);
  ((void (__fastcall *)(uint *, uint, int))dword_225423C[1153])(v3[1], **v3, 6);
  Function_2019448(v3[1], 6u);
  REG_DISPCNT_SUB = REG_DISPCNT_SUB & 0xFFFFE0FF | ((((uint)(REG_DISPCNT_SUB << 19) >> 27) | 4) << 8);
  return Function_22563b4(v2);
}

//----- (02256468) --------------------------------------------------------
int __fastcall Function_2256468(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  Function_2019044(*(uint *)(v3 + 4), 6);
  return Function_22563b4(v2);
}

