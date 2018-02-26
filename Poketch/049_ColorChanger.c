//----- (022561D4) --------------------------------------------------------
int __fastcall Function_22561d4(int *a1)
{
  int *v1;
  int v2;

  v1 = a1;
  v2 = malloc(8u, 20);
  if ( v2 )
  {
    if ( Function_225621c() && AddTaskToTaskList1((int)Function_225626c, v2, 1u) )
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
  int v5;
  uchar *v6;
  uint v7;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = (uchar *)((int (__fastcall *)(int))dword_225423C[193])(a2);
  *(uint *)(v4 + 16) = v6;
  v7 = Function_2056888(v6);
  *(uint *)(v4 + 4) = v7;
  *(uchar *)(v4 + 3) = v7;
  if ( !Function_22563d4(v4 + 8, v4 + 4, v5) )
    return 0;
  *(uchar *)v4 = 0;
  *(uchar *)(v4 + 1) = 0;
  *(uchar *)(v4 + 2) = 0;
  *(uint *)(v4 + 12) = v3;
  return 1;
}

//----- (02256258) --------------------------------------------------------
uint __fastcall Function_2256258(int a1)
{
  int v1;

  v1 = a1;
  Function_2256480(*(uint *)(a1 + 8));
  return free(v1);
}

//----- (0225626C) --------------------------------------------------------
int __fastcall Function_225626c(int result, uchar *a2)
{
  int v2;
  uint v3;
  int *v4;

  v2 = (int)a2;
  v3 = *a2;
  v4 = (int *)result;
  if ( v3 < 3 )
  {
    result = ((int (__fastcall *)(int))*(&off_22565D4 + v3))(v2);
    if ( result )
    {
      Function_2256258(v2);
      Call_RemoveTaskFromTaskList(v4);
      result = ((int (__fastcall *)(uint))dword_225423C[9])(*(uint *)(v2 + 12));
    }
  }
  return result;
}

//----- (022562A0) --------------------------------------------------------
int __fastcall Function_22562a0(int result)
{
  *(uchar *)(result + 2) = 1;
  return result;
}

//----- (022562A8) --------------------------------------------------------
char *__fastcall Function_22562a8(char *result, char a2)
{
  if ( result[2] )
    a2 = 2;
  *result = a2;
  result[1] = 0;
  return result;
}

//----- (022562BC) --------------------------------------------------------
int __fastcall Function_22562bc(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_22564b8(*(uint *)(v1 + 8), 0) )
    {
      ((void (__fastcall *)(uint))dword_225423C[4])(*(uint *)(v1 + 12));
      Function_22562a8((char *)v1, 1);
    }
  }
  else
  {
    Function_2256494(*(uint *)(v1 + 8), 0);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (022562FC) --------------------------------------------------------
int __fastcall Function_22562fc(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( *(uchar *)(a1 + 2) )
  {
    Function_22562a8((char *)a1, 2);
    result = 0;
  }
  else
  {
    if ( *(uchar *)(a1 + 1) )
    {
      if ( *(uchar *)(a1 + 1) == 1 )
      {
        if ( Function_22564b8(*(uint *)(a1 + 8), 2) )
          *(uchar *)(v1 + 1) = 0;
      }
    }
    else if ( Function_2256348() )
    {
      Function_2256494(*(uint *)(v1 + 8), 2);
      ++*(uchar *)(v1 + 1);
    }
    result = 0;
  }
  return result;
}

//----- (02256348) --------------------------------------------------------
int __fastcall Function_2256348(int a1)
{
  int v1;
  uint v2;
  uint v4;
  uint v5;

  v1 = a1;
  if ( ((int (__fastcall *)(uint))dword_225423C[180])(*(uint *)(a1 + 12))
    || !Function_20227a4(&v5, &v4)
    || v4 < 0x88
    || v4 >= 0xA0
    || v5 < 0x30
    || v5 >= 0xB8 )
  {
    return 0;
  }
  v2 = (v5 - 48) >> 4;
  if ( v2 >= 8 )
    v2 = 7;
  if ( v2 == *(uchar *)(v1 + 3) )
    return 0;
  *(uint *)(v1 + 4) = v2;
  *(uchar *)(v1 + 3) = v2;
  Function_205689c(*(uchar **)(v1 + 16), v2);
  return 1;
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
    if ( v2 == 1 && Function_22564c4(*(uint *)(v1 + 8)) )
      return 1;
  }
  else
  {
    Function_2256494(*(uint *)(v1 + 8), 1);
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
  Function_2256410(v5, v3);
  *v2 = v5;
  return 1;
}

//----- (02256410) --------------------------------------------------------
int __fastcall Function_2256410(int a1, uint *a2)
{
  int v2;
  uint *v3;
  int v4;

  v2 = a1;
  v3 = a2;
  Function_2006ec0(12, 69, 1, 0, 0, 1, 8);
  ((void (__fastcall *)(int, int, int, int, int))dword_225423C[1479])(
    v2 + 40,
    12,
    67,
    68,
    8);
  *(uint *)(v2 + 36) = ((int (__fastcall *)(uint, int *, int))dword_225423C[1397])(
                           *(uint *)(v2 + 32),
                           dword_22565E0,
                           v2 + 40);
  v4 = 16 * *v3;
  return ((int (*)(void))dword_225423C[1457])();
}

//----- (02256464) --------------------------------------------------------
int __fastcall Function_2256464(int a1)
{
  int v1;

  v1 = a1;
  if ( *(uint *)(a1 + 36) )
    ((void (__fastcall *)(uint))dword_225423C[1437])(*(uint *)(a1 + 32));
  return ((int (__fastcall *)(int))dword_225423C[1501])(v1 + 40);
}

//----- (02256480) --------------------------------------------------------
int __fastcall Function_2256480(int result)
{
  int v1;

  v1 = result;
  if ( result )
  {
    Function_2256464(result);
    result = free(v1);
  }
  return result;
}

//----- (02256494) --------------------------------------------------------
int __fastcall Function_2256494(int *a1)
{
  int v1;

  v1 = *a1;
  return ((int (__fastcall *)(int *))dword_225423C[976])(&dword_225660C);
}

//----- (022564B8) --------------------------------------------------------
void Function_22564b8()
{
  JUMPOUT(&dword_225423C[957]);
}

//----- (022564C4) --------------------------------------------------------
void Function_22564c4()
{
  JUMPOUT(&dword_225423C[966]);
}

//----- (022564D0) --------------------------------------------------------
int __fastcall Function_22564d0(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = ((int (*)(void))dword_225423C[1024])();
  return ((int (__fastcall *)(int, int))dword_225423C[1018])(v2 + 8, v1);
}

//----- (022564E4) --------------------------------------------------------
int __fastcall Function_22564e4(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  ((void (__fastcall *)(int))dword_225423C[1025])(v2);
  Function_20183c4(*(uint **)(v3 + 4), 6u, dword_22565F0, 0);
  LoadFromNARC_RGCN(12, 66, *(uint **)(v3 + 4), 6u, 0, 0, 1, 8);
  LoadFromNARC_RCSN(12, 65, *(uint **)(v3 + 4), 6u, 0, 0, 1, 8);
  ((void (*)(void))dword_225423C[287])();
  Function_2019448(*(uint **)(v3 + 4), 6u);
  REG_DISPCNT_SUB = REG_DISPCNT_SUB & 0xFFFFE0FF | ((((uint)(REG_DISPCNT_SUB << 19) >> 27) | 4) << 8);
  return Function_22564d0(v2);
}

//----- (02256578) --------------------------------------------------------
int __fastcall Function_2256578(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  Function_2019044(*(uint *)(v3 + 4), 6);
  return Function_22564d0(v2);
}

//----- (02256594) --------------------------------------------------------
int __fastcall Function_2256594(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  v4 = (uint *)((int (__fastcall *)(int))dword_225423C[1025])(v2);
  ((void (__fastcall *)(int))dword_225423C[122])(1635);
  ((void (*)(void))dword_225423C[287])();
  ((void (__fastcall *)(uint, int, int))dword_225423C[1457])(
    *(uint *)(v3 + 36),
    (16 * *v4 + 56) << 12,
    606208);
  return Function_22564d0(v2);
}

