//----- (022561D4) --------------------------------------------------------
int __fastcall Function_22561d4(int *a1)
{
  int *v1;
  int v2;

  v1 = a1;
  v2 = malloc(8u, 20);
  if ( v2 )
  {
    if ( Function_225621c() && AddTaskToTaskList1((int)Function_2256280, v2, 1u) )
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

  v4 = a1;
  v5 = a2;
  v6 = a3;
  *(uint *)(a1 + 4) = a4;
  if ( !Function_2099d7c(a4, (uint *)(a1 + 8), 4u) )
    *(uint *)(v4 + 8) = 1;
  if ( !Function_22563d4(v4 + 12, v4 + 8, v6) )
    return 0;
  *(uchar *)v4 = 0;
  *(uchar *)(v4 + 1) = 0;
  *(uchar *)(v4 + 2) = 0;
  *(uint *)(v4 + 16) = v5;
  return 1;
}

//----- (02256260) --------------------------------------------------------
uint __fastcall Function_2256260(int a1)
{
  int v1;

  v1 = a1;
  Function_2099d54(*(uint *)(a1 + 4), (int *)(a1 + 8), 4u);
  Function_225648c(*(uint *)(v1 + 12));
  return free(v1);
}

//----- (02256280) --------------------------------------------------------
int __fastcall Function_2256280(int result, uchar *a2)
{
  int v2;
  uint v3;
  int *v4;

  v2 = (int)a2;
  v3 = *a2;
  v4 = (int *)result;
  if ( v3 < 3 )
  {
    result = ((int (__fastcall *)(int))*(&off_22566A8 + v3))(v2);
    if ( result )
    {
      Function_2256260(v2);
      Call_RemoveTaskFromTaskList(v4);
      result = ((int (__fastcall *)(uint))dword_225423C[9])(*(uint *)(v2 + 16));
    }
  }
  return result;
}

//----- (022562B4) --------------------------------------------------------
int __fastcall Function_22562b4(int result)
{
  *(uchar *)(result + 2) = 1;
  return result;
}

//----- (022562BC) --------------------------------------------------------
char *__fastcall Function_22562bc(char *result, char a2)
{
  if ( result[2] )
    a2 = 2;
  *result = a2;
  result[1] = 0;
  return result;
}

//----- (022562D0) --------------------------------------------------------
int __fastcall Function_22562d0(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_22564c4(*(uint *)(v1 + 12), 0) )
    {
      ((void (__fastcall *)(uint))dword_225423C[4])(*(uint *)(v1 + 16));
      Function_22562bc((char *)v1, 1);
    }
  }
  else
  {
    Function_22564a0(*(uint *)(v1 + 12), 0);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (02256310) --------------------------------------------------------
int __fastcall Function_2256310(char *a1)
{
  char *v1;

  v1 = a1;
  if ( a1[2] )
    Function_22562bc(a1, 2);
  if ( v1[1] )
  {
    if ( v1[1] == 1 && Function_22564c4(*((uint *)v1 + 3), 2) )
      v1[1] = 0;
  }
  else if ( Function_2256398() )
  {
    *((uint *)v1 + 2) = Function_201d35c() & 1;
    Function_22564a0(*((uint *)v1 + 3), 2);
    ++v1[1];
  }
  return 0;
}

//----- (02256364) --------------------------------------------------------
int __fastcall Function_2256364(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_22564d0(*(uint *)(v1 + 12)) )
      return 1;
  }
  else
  {
    Function_22564a0(*(uint *)(v1 + 12), 1);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (02256398) --------------------------------------------------------
BOOL __fastcall Function_2256398(int a1, int a2, int a3, int a4)
{
  uint v4;
  BOOL result;
  int v6;
  int v7;
  int v8;

  v8 = a4;
  result = 0;
  if ( ((int (__fastcall *)(int *, int *))dword_225423C[160])(&v7, &v6) )
  {
    v6 = (144 - v6) * (144 - v6);
    v4 = (112 - v7) * (112 - v7) + v6;
    v7 = (112 - v7) * (112 - v7);
    if ( v4 < 0x240 )
      result = 1;
  }
  return result;
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
  v4 = malloc(8u, 72);
  v5 = (uint *)v4;
  if ( !v4 )
    return 0;
  v6 = ((int (__fastcall *)(int, int))dword_225423C[917])(v4 + 8, 4);
  *v5 = v3;
  v5[1] = ((int (__fastcall *)(int))dword_225423C[270])(v6);
  v5[8] = ((int (*)(void))dword_225423C[266])();
  Function_2256420(v5);
  dword_2256720[0] = -43008;
  dword_2256720[1] = 2816;
  *v2 = v5;
  return 1;
}

//----- (02256420) --------------------------------------------------------
int __fastcall Function_2256420(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_2006ec0(12, 57, 1, 0, 0, 1, 8);
  ((void (__fastcall *)(int, int, int, int, int))dword_225423C[1479])(
    v1 + 40,
    12,
    55,
    56,
    8);
  *(uint *)(v1 + 36) = ((int (__fastcall *)(uint, int *, int))dword_225423C[1397])(
                           *(uint *)(v1 + 32),
                           dword_22566B4,
                           v1 + 40);
  result = **(uint **)v1;
  if ( !result )
    result = ((int (__fastcall *)(uint, int))dword_225423C[1442])(*(uint *)(v1 + 36), 2);
  return result;
}

//----- (02256474) --------------------------------------------------------
int __fastcall Function_2256474(int a1)
{
  int v1;

  v1 = a1;
  ((void (__fastcall *)(uint, uint))dword_225423C[1437])(*(uint *)(a1 + 32), *(uint *)(a1 + 36));
  return ((int (__fastcall *)(int))dword_225423C[1501])(v1 + 40);
}

//----- (0225648C) --------------------------------------------------------
int __fastcall Function_225648c(int result)
{
  int v1;

  v1 = result;
  if ( result )
  {
    Function_2256474(result);
    result = free(v1);
  }
  return result;
}

//----- (022564A0) --------------------------------------------------------
int __fastcall Function_22564a0(int *a1)
{
  int v1;

  v1 = *a1;
  return ((int (__fastcall *)(int *))dword_225423C[976])(&dword_22566E0);
}

//----- (022564C4) --------------------------------------------------------
void Function_22564c4()
{
  JUMPOUT(&dword_225423C[957]);
}

//----- (022564D0) --------------------------------------------------------
void Function_22564d0()
{
  JUMPOUT(&dword_225423C[966]);
}

//----- (022564DC) --------------------------------------------------------
int __fastcall Function_22564dc(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = ((int (*)(void))dword_225423C[1024])();
  return ((int (__fastcall *)(int, int))dword_225423C[1018])(v2 + 8, v1);
}

//----- (022564F0) --------------------------------------------------------
int __fastcall Function_22564f0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  Function_20183c4(*(uint **)(v3 + 4), 6u, dword_22566C4, 0);
  LoadFromNARC_RGCN(12, 54, *(uint **)(v3 + 4), 6u, 0, 0, 1, 8);
  LoadFromNARC_RCSN(12, 53, *(uint **)(v3 + 4), 6u, 0, 0, 1, 8);
  ((void (*)(void))dword_225423C[287])();
  Function_2019448(*(uint **)(v3 + 4), 6u);
  REG_DISPCNT_SUB = REG_DISPCNT_SUB & 0xFFFFE0FF | ((((uint)(REG_DISPCNT_SUB << 19) >> 27) | 4) << 8);
  return Function_22564dc(v2);
}

//----- (02256580) --------------------------------------------------------
void __fastcall Function_2256580(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  v4 = ((int (__fastcall *)(int))dword_225423C[1027])(v2);
  if ( v4 )
  {
    if ( v4 != 1 )
      return;
  }
  else
  {
    *(uint *)(v3 + 68) = 1;
    ((void (__fastcall *)(int))dword_225423C[1028])(v2);
  }
  Function_22564c4();
  if ( v5 )
  {
    Function_2019044(*(uint *)(v3 + 4), 6);
    Function_22564dc(v2);
  }
}

//----- (022565C4) --------------------------------------------------------
int __fastcall Function_22565c4(int a1, int a2)
{
  int v2;
  uint *v3;
  uint *v4;
  int result;
  int v6;
  uint v7;
  int v8;

  v2 = a2;
  v3 = (uint *)((int (__fastcall *)(int))dword_225423C[1024])(a2);
  v4 = (uint *)((int (__fastcall *)(int))dword_225423C[1025])(v2);
  result = ((int (__fastcall *)(int))dword_225423C[1027])(v2);
  if ( result )
  {
    if ( result != 1 )
    {
      if ( result == 2 )
        result = Function_22564dc(v2);
      return result;
    }
  }
  else
  {
    ((void (__fastcall *)(int))dword_225423C[122])(1653);
    ((void (__fastcall *)(uint, uint))dword_225423C[1442])(v3[9], 0);
    v3[15] = 589824;
    v3[16] = dword_2256720[0];
    v3[17] = 0;
    ((void (__fastcall *)(int))dword_225423C[1028])(v2);
  }
  if ( v3[17] )
    return Function_22564dc(v2);
  v3[15] += v3[16];
  v6 = v3[16] + dword_2256720[1];
  v3[16] = v6;
  if ( v6 > 0 && v3[15] >= 589824 )
  {
    v7 = s32_div_f(56 * v6, 100);
    v3[16] = -v7;
    if ( (int)-v7 < -8192 )
    {
      ((void (__fastcall *)(int))dword_225423C[122])(1654);
      v3[15] = 589824;
    }
    else
    {
      ((void (__fastcall *)(int))dword_225423C[122])(1654);
      if ( *v4 )
        v8 = 1;
      else
        v8 = 2;
      ((void (__fastcall *)(uint, int))dword_225423C[1442])(v3[9], v8);
      v3[15] = 589824;
      ((void (__fastcall *)(int))dword_225423C[1028])(v2);
    }
  }
  return ((int (__fastcall *)(uint, int, uint))dword_225423C[1457])(v3[9], 458752, v3[15]);
}

