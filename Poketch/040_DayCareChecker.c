//----- (022561D4) --------------------------------------------------------
int __fastcall Function_22561d4(int *a1)
{
  int *v1;
  int v2;

  v1 = a1;
  v2 = malloc(8u, 52);
  if ( v2 )
  {
    if ( Function_225621c() && AddTaskToTaskList1((int)Function_2256270, v2, 1u) )
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
  int v6;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = ((int (__fastcall *)(int))dword_2254544[0])(a2);
  *(uint *)(v4 + 48) = LoadVariableAreaAdress_8(v6);
  Function_22563d0(v4 + 4, *(uint *)(v4 + 48));
  if ( !Function_225645c(v4 + 40, v4 + 4, v5) )
    return 0;
  *(uchar *)v4 = 0;
  *(uchar *)(v4 + 1) = 0;
  *(uchar *)(v4 + 2) = 0;
  *(uint *)(v4 + 44) = v3;
  return 1;
}

//----- (0225625C) --------------------------------------------------------
uint __fastcall Function_225625c(int a1)
{
  int v1;

  v1 = a1;
  Function_22564b8(*(uint *)(a1 + 40));
  return free(v1);
}

//----- (02256270) --------------------------------------------------------
int __fastcall Function_2256270(int result, uchar *a2)
{
  int v2;
  uint v3;
  int *v4;

  v2 = (int)a2;
  v3 = *a2;
  v4 = (int *)result;
  if ( v3 < 3 )
  {
    result = ((int (__fastcall *)(int))*(&off_2256A38 + v3))(v2);
    if ( result )
    {
      Function_225625c(v2);
      Call_RemoveTaskFromTaskList(v4);
      result = ((int (__fastcall *)(uint))dword_2254260[0])(*(uint *)(v2 + 44));
    }
  }
  return result;
}

//----- (022562A4) --------------------------------------------------------
int __fastcall Function_22562a4(int result)
{
  *(uchar *)(result + 2) = 1;
  return result;
}

//----- (022562AC) --------------------------------------------------------
char *__fastcall Function_22562ac(char *result, char a2)
{
  if ( result[2] )
    a2 = 2;
  *result = a2;
  result[1] = 0;
  return result;
}

//----- (022562C0) --------------------------------------------------------
int __fastcall Function_22562c0(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_22565ec(*(uint *)(v1 + 40), 0) )
    {
      ((void (__fastcall *)(uint))dword_225424C[0])(*(uint *)(v1 + 44));
      Function_22562ac((char *)v1, 1);
    }
  }
  else
  {
    Function_22565c8(*(uint *)(v1 + 40), 0);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (02256300) --------------------------------------------------------
int __fastcall Function_2256300(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( *(uchar *)(a1 + 2) )
  {
    Function_22562ac((char *)a1, 2);
    result = 0;
  }
  else
  {
    if ( *(uchar *)(a1 + 1) )
    {
      if ( *(uchar *)(a1 + 1) == 1 )
      {
        if ( Function_22565ec(*(uint *)(a1 + 40), 2) )
          *(uchar *)(v1 + 1) = 0;
      }
    }
    else if ( Function_2256388() )
    {
      Function_22563d0(v1 + 4, *(uint *)(v1 + 48));
      Function_22565c8(*(uint *)(v1 + 40), 2);
      ++*(uchar *)(v1 + 1);
    }
    result = 0;
  }
  return result;
}

//----- (02256354) --------------------------------------------------------
int __fastcall Function_2256354(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_22565f8(*(uint *)(v1 + 40)) )
      return 1;
  }
  else
  {
    Function_22565c8(*(uint *)(v1 + 40), 1);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (02256388) --------------------------------------------------------
BOOL __fastcall Function_2256388(int a1, int a2, int a3, int a4)
{
  int v5;
  int v6;
  int v7;

  v7 = a4;
  return !((int (__fastcall *)(uint))dword_225450C[0])(*(uint *)(a1 + 44))
      && Function_20227c0(&v6, &v5)
      && (uint)(v5 - 16) < 0x9F
      && (uint)(v6 - 16) < 0xBF;
}

//----- (022563D0) --------------------------------------------------------
int __fastcall Function_22563d0(uchar *a1, int a2)
{
  int v2;
  int result;
  uint *v4;
  uchar *v5;
  int v6;
  int v7;
  ushort *v8;
  int v9;
  uchar *v10;
  int v11;

  v10 = a1;
  v11 = a2;
  *a1 = ((int (__fastcall *)(int))dword_21E2064[4213])(a2);
  v2 = 0;
  v10[1] = Function_2026234(v11);
  result = *v10;
  if ( result > 0 )
  {
    v4 = v10;
    v5 = v10;
    do
    {
      v6 = Function_2026218(v11, v2);
      Function_2026220_Dummy();
      v8 = (ushort *)v7;
      v9 = InitEncryptPkmnData_Part1(v7);
      v4[1] = Function_2079d40((int)v8);
      *((ushort *)v5 + 14) = GetBoxPkmnData((int)v8, 5u, 0);
      *((ushort *)v5 + 16) = GetBoxPkmnData((int)v8, 0x70u, 0);
      v4[3] = ((int (__fastcall *)(int))dword_21E64F8[38])(v6);
      v4[5] = DecidePkmnGender((int)v8);
      InitEncryptPkmnData_Part1Again(v8, v9);
      ++v2;
      result = *v10;
      ++v4;
      v5 += 2;
    }
    while ( v2 < result );
  }
  return result;
}

//----- (0225645C) --------------------------------------------------------
int __fastcall Function_225645c(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  uint *v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = malloc(8u, 144);
  v5 = (uint *)v4;
  if ( !v4 )
    return 0;
  v6 = ((int (__fastcall *)(int, int))dword_2255090[0])(v4 + 8, 4);
  *v5 = v3;
  v5[1] = ((int (__fastcall *)(int))dword_2254674[0])(v6);
  v5[8] = ((int (*)(void))dword_2254664[0])();
  v5[34] = 0;
  v5[35] = AddTaskToTaskList3((int)Function_22567e0, (int)v5, 0);
  Function_22564d4(v5, v3);
  if ( !v5[1] )
    return 0;
  *v2 = v5;
  return 1;
}

//----- (022564B8) --------------------------------------------------------
uint __fastcall Function_22564b8(uint result)
{
  int v1;

  v1 = result;
  if ( result )
  {
    Function_2256598();
    Call_RemoveTaskFromTaskList(*(int **)(v1 + 140));
    result = free(v1);
  }
  return result;
}

//----- (022564D4) --------------------------------------------------------
int __fastcall Function_22564d4(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int *v5;
  int v6;
  int v8;
  int v9;

  v8 = a1;
  v9 = a2;
  ((void (__fastcall *)(int))dword_2255360[0])(1);
  v2 = Function_2006ec0(12, 84, 1, 0, 0, 1, 8);
  *(uint *)(v8 + 120) = u32_div_f(v2, 20);
  Function_2256808();
  ((void (__fastcall *)(int, int, int, int, int))dword_2255958[0])(v8 + 80, 12, 82, 83, 8);
  ((void (__fastcall *)(int, int, int, int, int))dword_2255958[0])(v8 + 100, 12, 5, 6, 8);
  v3 = v8;
  v4 = 0;
  v5 = dword_2256A90;
  v6 = 0;
  do
  {
    if ( v4 < 0 || v4 > 2 )
    {
      *(uint *)(v3 + 36) = ((int (__fastcall *)(uint, int *, int))dword_2255810[0])(
                               *(uint *)(v8 + 32),
                               v5,
                               v8 + 80);
    }
    else
    {
      *(uint *)(v3 + 36) = ((int (__fastcall *)(uint, int *, int))dword_2255810[0])(
                               *(uint *)(v8 + 32),
                               v5,
                               v8 + 100);
      ((void (*)(void))dword_2255940[0])();
    }
    ((void (__fastcall *)(uint, int))dword_2255948[0])(*(uint *)(v3 + 36), 1);
    ++v4;
    v5 += 4;
    v3 += 4;
    v6 += 32;
  }
  while ( v4 < 11 );
  return Function_2256848(v8, v9);
}

//----- (02256598) --------------------------------------------------------
int __fastcall Function_2256598(int a1)
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
      ((void (__fastcall *)(uint))dword_22558B0[0])(*(uint *)(v1 + 32));
    ++v2;
    v3 += 4;
  }
  while ( v2 < 11 );
  ((void (__fastcall *)(int))dword_22559B0[0])(v1 + 100);
  return ((int (__fastcall *)(int))dword_22559B0[0])(v1 + 80);
}

//----- (022565C8) --------------------------------------------------------
int __fastcall Function_22565c8(int *a1)
{
  int v1;

  v1 = *a1;
  return ((int (__fastcall *)(int *))dword_225517C[0])(&dword_2256A54[3]);
}

//----- (022565EC) --------------------------------------------------------
void Function_22565ec()
{
  JUMPOUT(&byte_2255130);
}

//----- (022565F8) --------------------------------------------------------
void Function_22565f8()
{
  JUMPOUT(&byte_2255154);
}

//----- (02256604) --------------------------------------------------------
int __fastcall Function_2256604(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = ((int (*)(void))dword_225523C)();
  return ((int (__fastcall *)(int, int))dword_2255224[0])(v2 + 8, v1);
}

//----- (02256618) --------------------------------------------------------
int __fastcall Function_2256618(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225523C)(a2);
  Function_20183c4(*(uint **)(v3 + 4), 6u, dword_2256A44, 0);
  LoadFromNARC_RGCN(12, 81, *(uint **)(v3 + 4), 6u, 0, 0, 1, 8);
  LoadFromNARC_RCSN(12, 80, *(uint **)(v3 + 4), 6u, 0, 0, 1, 8);
  ((void (*)(void))dword_22546B8[0])();
  Function_2019448(*(uint **)(v3 + 4), 6u);
  REG_MOSAIC_SUB = 0;
  byte_400104D = 0;
  REG_DISPCNT_SUB = REG_DISPCNT_SUB & 0xFFFFE0FF | ((((uint)(REG_DISPCNT_SUB << 19) >> 27) | 4) << 8);
  return Function_2256604(v2);
}

//----- (022566B0) --------------------------------------------------------
void __fastcall Function_22566b0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225523C)(a2);
  v4 = ((int (__fastcall *)(int))dword_2255248)(v2);
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      Function_22565ec();
      if ( v5 )
      {
        REG_MOSAIC_SUB = 0;
        byte_400104D = 0;
        Function_2019044(*(uint *)(v3 + 4), 6);
        Function_2256604(v2);
      }
    }
  }
  else
  {
    *(uint *)(v3 + 132) = 1;
    ((void (__fastcall *)(int))dword_225524C[0])(v2);
  }
}

//----- (02256704) --------------------------------------------------------
uint __fastcall Function_2256704(int a1, int a2)
{
  int v2;
  uint *v3;
  int v4;
  uint result;

  v2 = a2;
  v3 = (uint *)((int (__fastcall *)(int))dword_225523C)(a2);
  v4 = ((int (__fastcall *)(int))dword_2255240[0])(v2);
  result = ((int (__fastcall *)(int))dword_2255248)(v2);
  switch ( (uchar)result )
  {
    case 0:
      v3[33] = 0;
      v3[32] = 0;
      v3[31] = 10;
      Function_22567d8(v3);
      ((void (__fastcall *)(int))dword_2254424[0])(1656);
      result = ((int (__fastcall *)(int))dword_225524C[0])(v2);
      break;
    case 1:
      Function_2256808(v3[30], v4);
      Function_2256848(v3, v4);
      result = ((int (__fastcall *)(int))dword_225524C[0])(v2);
      break;
    case 2:
      if ( v3[33] )
      {
        v3[31] = 0;
        Function_22567d8(v3);
        result = ((int (__fastcall *)(int))dword_225524C[0])(v2);
      }
      else
      {
        result = ++v3[32];
        if ( result >= 4 )
        {
          v3[32] = 0;
          --v3[31];
          Function_22567d8(v3);
          result = v3[31];
          if ( !result )
            result = ((int (__fastcall *)(int))dword_225524C[0])(v2);
        }
      }
      break;
    case 3:
      result = Function_2256604(v2);
      break;
    default:
      return result;
  }
  return result;
}

//----- (022567D8) --------------------------------------------------------
uint *__fastcall Function_22567d8(int a1)
{
  uint *result;

  result = (uint *)(a1 + 136);
  *result = 1;
  return result;
}

//----- (022567E0) --------------------------------------------------------
int __fastcall Function_22567e0(int a1, int a2)
{
  int result;

  result = *(uint *)(a2 + 136);
  if ( result )
  {
    REG_MOSAIC_SUB = 16 * *(uint *)(a2 + 124) | *(uint *)(a2 + 124);
    byte_400104D = 16 * *(uint *)(a2 + 124) | *(uint *)(a2 + 124);
    result = 0;
    *(uint *)(a2 + 136) = 0;
  }
  return result;
}

//----- (02256808) --------------------------------------------------------
int __fastcall Function_2256808(int a1, uchar *a2)
{
  int v2;
  uchar *v3;
  uint v4;
  int v5;
  uint v6;
  int v8;

  v2 = a1;
  v3 = a2;
  v4 = Function_2079d8c(1u, 1, 0);
  if ( *v3 )
    v5 = *((uint *)v3 + 1);
  else
    v5 = v4;
  v8 = v5;
  if ( *v3 <= 1u )
    v6 = v4;
  else
    v6 = *((uint *)v3 + 2);
  return ((int (__fastcall *)(int, int *, int, int, int, uint, uint))dword_22553A0[0])(
           v2,
           &v8,
           3,
           1,
           v8,
           v6,
           v4);
}

//----- (02256848) --------------------------------------------------------
int __fastcall Function_2256848(uint *a1, uchar *a2)
{
  uint *v2;
  uchar *v3;
  uchar *v4;
  uint *v5;
  int v6;
  int v7;
  bool v8;
  int v9;
  BOOL v10;
  BOOL v11;
  int v13;

  v2 = a1;
  v3 = a2;
  v13 = 0;
  if ( (int)*a2 > 0 )
  {
    v4 = a2;
    v5 = a1;
    do
    {
      v6 = Function_2079edc(*((ushort *)v4 + 14), *((ushort *)v4 + 16), 0);
      ((void (__fastcall *)(uint, int))dword_2255938[0])(v5[9], v6 + 1);
      v4 += 2;
      ++v5;
      ++v13;
    }
    while ( v13 < *v3 );
  }
  v7 = Function_2079edc(1u, 0, 1);
  ((void (__fastcall *)(uint, int))dword_2255938[0])(v2[11], v7 + 1);
  if ( *v3 )
  {
    v8 = GetPkmnBaseData2(*((ushort *)v3 + 14), *((ushort *)v3 + 16), 0x1Cu) == 0;
    v9 = v2[9];
    if ( v8 )
      ((void (__fastcall *)(int, int))dword_22558C4[0])(v9, 7);
    else
      ((void (__fastcall *)(int, int))dword_22558C4[0])(v9, 6);
  }
  Function_2256958(v2 + 12, *((uint *)v3 + 3));
  Function_2256958(v2 + 15, *((uint *)v3 + 4));
  Function_2256a14(v2[18], *((uint *)v3 + 5));
  Function_2256a14(v2[19], *((uint *)v3 + 6));
  v10 = *v3 == 0;
  ((void (__fastcall *)(uint, BOOL))dword_2255914[0])(v2[9], v10);
  ((void (__fastcall *)(uint, BOOL))dword_2255914[0])(v2[12], v10);
  ((void (__fastcall *)(uint, BOOL))dword_2255914[0])(v2[13], v10);
  ((void (__fastcall *)(uint, BOOL))dword_2255914[0])(v2[14], v10);
  ((void (__fastcall *)(uint, BOOL))dword_2255914[0])(v2[18], v10);
  v11 = *v3 <= 1u;
  ((void (__fastcall *)(uint, BOOL))dword_2255914[0])(v2[10], v11);
  ((void (__fastcall *)(uint, BOOL))dword_2255914[0])(v2[15], v11);
  ((void (__fastcall *)(uint, BOOL))dword_2255914[0])(v2[16], v11);
  ((void (__fastcall *)(uint, BOOL))dword_2255914[0])(v2[17], v11);
  ((void (__fastcall *)(uint, BOOL))dword_2255914[0])(v2[19], v11);
  return ((int (__fastcall *)(uint, bool))dword_2255914[0])(v2[11], v3[1] == 0);
}

//----- (02256958) --------------------------------------------------------
int __fastcall Function_2256958(uint *a1, uint a2, int a3, int a4)
{
  uint v4;
  uint v5;
  uint v6;
  uint v7;
  uint *v8;
  int v9;
  int *v10;
  uint *v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v16 = a4;
  v4 = a2;
  v12 = a1;
  if ( a2 > 0x64 )
    v4 = 100;
  REG_DIVCNT = 0;
  REG_DIV_NUMER_L = v4;
  REG_DIV_DENOM_L = 100;
  REG_DIV_DENOM_H = 0;
  v5 = (uint)&REG_DIVCNT >> 11;
  while ( (ushort)REG_DIVCNT & (ushort)v5 )
    ;
  v13 = REG_DIV_RESULT_L;
  v6 = (uint)&REG_DIVCNT >> 11;
  while ( (ushort)REG_DIVCNT & (ushort)v6 )
    ;
  REG_DIVCNT = 0;
  REG_DIV_NUMER_L = REG_DIVREM_RESULT_L;
  REG_DIV_DENOM_L = 10;
  REG_DIV_DENOM_H = 0;
  v7 = (uint)&REG_DIVCNT >> 11;
  while ( (ushort)REG_DIVCNT & (ushort)v7 )
    ;
  v14 = REG_DIV_RESULT_L;
  while ( (ushort)REG_DIVCNT & (ushort)((uint)&REG_DIVCNT >> 11) )
    ;
  v8 = v12;
  v9 = 0;
  v15 = REG_DIVREM_RESULT_L;
  v10 = &v13;
  do
  {
    ((void (__fastcall *)(uint, int))dword_22558C4[0])(*v8, *v10);
    ++v9;
    ++v10;
    ++v8;
  }
  while ( v9 < 3 );
  ((void (__fastcall *)(uint, bool))dword_2255914[0])(*v12, v4 < 0x64);
  return ((int (__fastcall *)(uint, bool))dword_2255914[0])(v12[1], v4 < 0xA);
}

//----- (02256A14) --------------------------------------------------------
int __fastcall Function_2256a14(int a1, int a2)
{
  if ( !a2 )
    return ((int (__fastcall *)(int, int))dword_22558C4[0])(a1, 10);
  if ( a2 == 1 )
    return ((int (__fastcall *)(int, int))dword_22558C4[0])(a1, 11);
  return ((int (__fastcall *)(int, int))dword_22558C4[0])(a1, 12);
}

