//----- (022561D4) --------------------------------------------------------
int __fastcall Function_22561d4(int *a1)
{
  int *v1;
  int v2;

  v1 = a1;
  v2 = malloc(8u, 28);
  if ( v2 )
  {
    if ( Function_225621c() && AddTaskToTaskList1((int)Function_22562a0, v2, 1u) )
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
  int v8;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  PM_GetBackLight(0, &v8, a3, a4);
  *(uint *)(v4 + 4) = v8 == 1;
  if ( !Function_22563d4(v4 + 8, v4 + 4, v6) )
    return 0;
  *(uchar *)v4 = 0;
  *(uchar *)(v4 + 1) = 0;
  *(uchar *)(v4 + 2) = 0;
  *(uint *)(v4 + 16) = ((int (__fastcall *)(int *, int, int (*)(), int, int))dword_225423C[1572])(
                           dword_22565D4,
                           2,
                           Function_2256298,
                           v4,
                           8);
  *(uint *)(v4 + 20) = 0;
  *(uint *)(v4 + 12) = v5;
  return 1;
}

//----- (02256280) --------------------------------------------------------
uint __fastcall Function_2256280(int a1)
{
  int v1;

  v1 = a1;
  ((void (__fastcall *)(uint))dword_225423C[1598])(*(uint *)(a1 + 16));
  Function_2256410(*(uint *)(v1 + 8));
  return free(v1);
}

//----- (02256298) --------------------------------------------------------
int __fastcall Function_2256298(int result, int a2, int a3, int a4)
{
  *(uint *)(a4 + 24) = result;
  *(uint *)(a4 + 20) = a2;
  return result;
}

//----- (022562A0) --------------------------------------------------------
uint __fastcall Function_22562a0(int *a1, uchar *a2)
{
  uchar *v2;
  int *v3;
  uint result;

  v2 = a2;
  v3 = a1;
  result = *a2;
  if ( result < 3 )
  {
    ((void (__fastcall *)(uint, uint))dword_225423C[183])(*((uint *)a2 + 3), *((uint *)a2 + 4));
    result = ((int (__fastcall *)(uchar *))*(&off_22565DC + *v2))(v2);
    if ( result )
    {
      Function_2256280((int)v2);
      Call_RemoveTaskFromTaskList(v3);
      result = ((int (__fastcall *)(uint))dword_225423C[9])(*((uint *)v2 + 3));
    }
  }
  return result;
}

//----- (022562DC) --------------------------------------------------------
int __fastcall Function_22562dc(int result)
{
  *(uchar *)(result + 2) = 1;
  return result;
}

//----- (022562E4) --------------------------------------------------------
char *__fastcall Function_22562e4(char *result, char a2)
{
  if ( result[2] )
    a2 = 2;
  *result = a2;
  result[1] = 0;
  return result;
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
    if ( v2 == 1 && Function_22564ac(*(uint *)(v1 + 8), 0) )
    {
      ((void (__fastcall *)(uint))dword_225423C[4])(*(uint *)(v1 + 12));
      Function_22562e4((char *)v1, 1);
    }
  }
  else
  {
    Function_2256488(*(uint *)(v1 + 8), 0);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (02256338) --------------------------------------------------------
int __fastcall Function_2256338(char *a1)
{
  char *v1;
  int result;
  int v3;
  int v4;

  v1 = a1;
  if ( a1[2] )
  {
    Function_22562e4(a1, 2);
    result = 0;
  }
  else
  {
    v3 = (uchar)a1[1];
    if ( v1[1] )
    {
      if ( v3 == 1 )
      {
        if ( Function_22564ac(*((uint *)v1 + 2), 2) )
          v1[1] = 0;
      }
    }
    else if ( *((uint *)v1 + 5) == 1 )
    {
      v4 = *((uint *)v1 + 6);
      if ( !v4 && !*((uint *)v1 + 1) || v4 == 1 && *((uint *)v1 + 1) == 1 )
      {
        *((uint *)v1 + 1) ^= 1u;
        Function_2256488(*((uint *)v1 + 2), 2);
      }
      ++v1[1];
    }
    result = 0;
  }
  return result;
}

//----- (022563A0) --------------------------------------------------------
int __fastcall Function_22563a0(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_22564b8(*(uint *)(v1 + 8)) )
      return 1;
  }
  else
  {
    Function_2256488(*(uint *)(v1 + 8), 1);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (022563D4) --------------------------------------------------------
int __fastcall Function_22563d4(uint *a1, int a2)
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
  Function_225641c(v5, v3);
  *v2 = v5;
  return 1;
}

//----- (02256410) --------------------------------------------------------
int __fastcall Function_2256410(int result)
{
  if ( result )
    result = free(result);
  return result;
}

//----- (0225641C) --------------------------------------------------------
int __fastcall Function_225641c(int a1, int *a2)
{
  int v2;
  int *v3;
  int result;

  v2 = a1;
  v3 = a2;
  Function_2006ec0(12, 104, 1, 0, 0, 1, 8);
  ((void (__fastcall *)(int, int, int, int, int))dword_225423C[1479])(
    v2 + 40,
    12,
    102,
    103,
    8);
  *(uint *)(v2 + 36) = ((int (__fastcall *)(uint, int *, int))dword_225423C[1397])(
                           *(uint *)(v2 + 32),
                           dword_22565E8,
                           v2 + 40);
  result = *v3;
  if ( !*v3 )
    result = ((int (__fastcall *)(uint, int))dword_225423C[1442])(*(uint *)(v2 + 36), 1);
  return result;
}

//----- (02256470) --------------------------------------------------------
int __fastcall Function_2256470(int a1)
{
  int v1;

  v1 = a1;
  ((void (__fastcall *)(uint, uint))dword_225423C[1437])(*(uint *)(a1 + 32), *(uint *)(a1 + 36));
  return ((int (__fastcall *)(int))dword_225423C[1501])(v1 + 40);
}

//----- (02256488) --------------------------------------------------------
int __fastcall Function_2256488(int *a1)
{
  int v1;

  v1 = *a1;
  return ((int (__fastcall *)(int *))dword_225423C[976])(&dword_2256614);
}

//----- (022564AC) --------------------------------------------------------
void Function_22564ac()
{
  JUMPOUT(&dword_225423C[957]);
}

//----- (022564B8) --------------------------------------------------------
void Function_22564b8()
{
  JUMPOUT(&dword_225423C[966]);
}

//----- (022564C4) --------------------------------------------------------
int __fastcall Function_22564c4(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = ((int (*)(void))dword_225423C[1024])();
  return ((int (__fastcall *)(int, int))dword_225423C[1018])(v2 + 8, v1);
}

//----- (022564D8) --------------------------------------------------------
int __fastcall Function_22564d8(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  Function_20183c4(*(uint **)(v3 + 4), 6u, dword_22565F8, 0);
  LoadFromNARC_RGCN(12, 101, *(uint **)(v3 + 4), 6u, 0, 0, 1, 8);
  LoadFromNARC_RCSN(12, 100, *(uint **)(v3 + 4), 6u, 0, 0, 1, 8);
  ((void (*)(void))dword_225423C[287])();
  Function_2019448(*(uint **)(v3 + 4), 6u);
  REG_DISPCNT_SUB = REG_DISPCNT_SUB & 0xFFFFE0FF | ((((uint)(REG_DISPCNT_SUB << 19) >> 27) | 4) << 8);
  return Function_22564c4(v2);
}

//----- (02256568) --------------------------------------------------------
int __fastcall Function_2256568(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  Function_2256470(v3);
  Function_2019044(*(uint *)(v3 + 4), 6);
  return Function_22564c4(v2);
}

//----- (02256588) --------------------------------------------------------
int __fastcall Function_2256588(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  v4 = (uint *)((int (__fastcall *)(int))dword_225423C[1025])(v2);
  ((void (__fastcall *)(int))dword_225423C[122])(1635);
  v5 = *(uint *)(v3 + 36);
  if ( *v4 )
  {
    ((void (__fastcall *)(int, uint))dword_225423C[1442])(v5, 0);
    PM_SetBackLight(1, 1, v6, v7);
  }
  else
  {
    ((void (__fastcall *)(int, int))dword_225423C[1442])(v5, 1);
    PM_SetBackLight(1, 0, v8, v9);
  }
  return Function_22564c4(v2);
}

