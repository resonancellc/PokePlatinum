//----- (022561D4) --------------------------------------------------------
int __fastcall Function_22561d4(int *a1)
{
  int *v1;
  int v2;

  v1 = a1;
  v2 = malloc(8u, 23440);
  if ( v2 )
  {
    if ( Function_2256220() && AddTaskToTaskList1((int)Function_22562b8, v2, 1u) )
    {
      *v1 = v2;
      return 1;
    }
    free(v2);
  }
  return 0;
}

//----- (02256220) --------------------------------------------------------
int __fastcall Function_2256220(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;

  v4 = a1;
  v5 = a2;
  *(uint *)(a1 + 12) = a4;
  *(uchar *)(a1 + 23416) = 0;
  *(uchar *)(a1 + 23417) = 1;
  *(uchar *)(a1 + 23418) = 0;
  if ( !Function_22567b0(a1 + 23420, a1 + 4) )
    return 0;
  *(uchar *)v4 = 0;
  *(uchar *)(v4 + 1) = 0;
  *(uchar *)(v4 + 2) = 0;
  *(uchar *)(v4 + 3) = 0;
  Function_2256790(v4 + 4);
  *(uint *)(v4 + 23428) = ((int (__fastcall *)(int *, int, int (*)(), int, int))dword_2255ACC[0])(
                              dword_2256D68,
                              3,
                              Function_2256300,
                              v4,
                              8);
  *(uint *)(v4 + 23432) = 0;
  *(uint *)(v4 + 23424) = v5;
  return 1;
}

//----- (02256294) --------------------------------------------------------
uint __fastcall Function_2256294(int a1)
{
  int v1;

  v1 = a1;
  ((void (__fastcall *)(uint))dword_2255B34[0])(*(uint *)(a1 + 23428));
  Function_22567f8(*(uint *)(v1 + 23420));
  return free(v1);
}

//----- (022562B8) --------------------------------------------------------
uint __fastcall Function_22562b8(int *a1, uchar *a2)
{
  uchar *v2;
  int *v3;
  uint result;

  v2 = a2;
  v3 = a1;
  result = *a2;
  if ( result < 3 )
  {
    ((void (__fastcall *)(uint, uint))dword_2254518[0])(*((uint *)a2 + 5856), *((uint *)a2 + 5857));
    result = ((int (__fastcall *)(uchar *))dword_2256D68[*v2 + 3])(v2);
    if ( result )
    {
      Function_2256294((int)v2);
      Call_RemoveTaskFromTaskList(v3);
      result = ((int (__fastcall *)(uint))dword_2254260[0])(*((uint *)v2 + 5856));
    }
  }
  return result;
}

//----- (02256300) --------------------------------------------------------
int __fastcall Function_2256300(int result, int a2, int a3, int a4)
{
  *(uint *)(a4 + 23432) = a2;
  *(uint *)(a4 + 23436) = result;
  return result;
}

//----- (02256310) --------------------------------------------------------
int __fastcall Function_2256310(int result)
{
  *(uchar *)(result + 2) = 1;
  return result;
}

//----- (02256318) --------------------------------------------------------
char *__fastcall Function_2256318(char *result, char a2)
{
  if ( result[2] )
    a2 = 2;
  *result = a2;
  result[1] = 0;
  return result;
}

//----- (0225632C) --------------------------------------------------------
int __fastcall Function_225632c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_22568b0(*(uint *)(v1 + 23420), 0) )
    {
      ((void (__fastcall *)(uint))dword_225424C[0])(*(uint *)(v1 + 23424));
      Function_2256318((char *)v1, 1);
    }
  }
  else
  {
    Function_225688c(*(uint *)(v1 + 23420), 0);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (02256378) --------------------------------------------------------
int __fastcall Function_2256378(char *a1)
{
  char *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  if ( a1[2] )
    Function_2256318(a1, 2);
  switch ( v1[1] )
  {
    case 0:
      if ( !((int (__fastcall *)(uint))dword_225450C[0])(*((uint *)v1 + 5856)) )
      {
        if ( *((uint *)v1 + 5858) == 1 )
        {
          v2 = *((uint *)v1 + 5859);
          if ( v2 )
          {
            if ( v2 == 1 )
            {
              ((void (__fastcall *)(int))dword_2254424[0])(1646);
            }
            else if ( v2 == 2 )
            {
              v1[23418] = 1;
              Function_225688c(*((uint *)v1 + 5855), 5);
              ((void (__fastcall *)(int))dword_2254424[0])(1635);
              v1[1] = 3;
            }
          }
          else
          {
            v1[23416] = 1;
            v1[23417] = 0;
            v1[23418] = 1;
            Function_225688c(*((uint *)v1 + 5855), 5);
            Function_225688c(*((uint *)v1 + 5855), 7);
            ((void (__fastcall *)(int))dword_2254424[0])(1635);
            v1[1] = 1;
          }
          *((uint *)v1 + 5858) = 0;
        }
        else if ( v1[3] )
        {
          v3 = *((uint *)v1 + 1);
          v4 = *((uint *)v1 + 2);
          if ( Function_22565c4(v1) )
            Function_2256610(v1, v3, v4, *((uint *)v1 + 1), *((uint *)v1 + 2));
          else
            v1[3] = 0;
        }
        else if ( Function_2256564(v1) )
        {
          Function_225688c(*((uint *)v1 + 5855), 3);
          v1[3] = 1;
        }
      }
      return 0;
    case 1:
      if ( *((uint *)v1 + 5858) != 1 )
        return 0;
      v5 = *((uint *)v1 + 5859);
      switch ( v5 )
      {
        case 0:
          goto LABEL_24;
        case 1:
          v1[23416] = 1;
          v1[23417] = 1;
          v1[23418] = 1;
          Function_225688c(*((uint *)v1 + 5855), 5);
          Function_225688c(*((uint *)v1 + 5855), 8);
          ((void (__fastcall *)(int))dword_2254424[0])(1635);
          v1[1] = 2;
          break;
        case 2:
LABEL_24:
          ((void (__fastcall *)(int))dword_2254424[0])(1646);
          break;
      }
      *((uint *)v1 + 5858) = 0;
      break;
    case 2:
      if ( Function_22568b0(*((uint *)v1 + 5855), 8) )
      {
        v1[23416] = 0;
        v1[23417] = 1;
        v1[23418] = 0;
        Function_225688c(*((uint *)v1 + 5855), 5);
        v1[1] = 0;
      }
      break;
    case 3:
      v6 = *((uint *)v1 + 5858);
      if ( v6 == 2 )
      {
        v1[23418] = 0;
        Function_225688c(*((uint *)v1 + 5855), 5);
        v1[1] = 0;
      }
      else if ( v6 == 3 )
      {
        v1[23418] = 0;
        Function_2256790(v1 + 4);
        Function_225688c(*((uint *)v1 + 5855), 5);
        Function_225688c(*((uint *)v1 + 5855), 6);
        v1[1] = 0;
      }
      break;
    default:
      return 0;
  }
  return 0;
}

//----- (02256564) --------------------------------------------------------
int __fastcall Function_2256564(int a1)
{
  int v1;
  uint v2;
  int v3;
  int result;
  uint v5;
  uint v6;

  v1 = a1;
  if ( !((int (__fastcall *)(uint *, uint *))dword_225446C[0])(&v6, &v5) )
    return 0;
  if ( v6 - 16 >= 0x9B || v5 - 16 >= 0x95 )
    return 0;
  v2 = (v5 - 16) >> 1;
  v6 = (v6 - 16) >> 1;
  v5 = v2;
  v3 = v1 + 16 + 150 * v6;
  if ( *(uchar *)(v3 + v2) )
    return 0;
  result = 1;
  *(uchar *)(v3 + v2) = 1;
  *(uint *)(v1 + 4) = v6;
  *(uint *)(v1 + 8) = v5;
  return result;
}

//----- (022565C4) --------------------------------------------------------
int __fastcall Function_22565c4(int a1)
{
  int v1;
  uint v2;
  uint v4;
  uint v5;

  v1 = a1;
  if ( !((int (__fastcall *)(uint *, uint *))dword_225446C[0])(&v5, &v4) )
    return 0;
  v2 = v5 - 16;
  if ( v5 - 16 >= 0x9B || v4 - 16 >= 0x95 )
    return 0;
  v5 = v2 >> 1;
  v4 = (v4 - 16) >> 1;
  *(uint *)(v1 + 4) = v2 >> 1;
  *(uint *)(v1 + 8) = v4;
  return 1;
}

//----- (02256610) --------------------------------------------------------
int __fastcall Function_2256610(uint *a1, uint a2, uint a3, uint a4, uint a5)
{
  uint *v5;
  uint v6;
  uint v7;
  int result;
  uint v9;
  uint v10;
  int v11;
  uint v12;
  int v13;
  uint v14;
  int v15;
  int v16;
  uint i;
  uint v18;
  int v19;
  uint v20;
  int v21;
  uint v22;
  uint v23;

  v5 = a1;
  v6 = a3;
  v7 = a2;
  v20 = a4;
  if ( a3 != a5 || (result = a4, a2 != a4) )
  {
    if ( a4 <= a2 )
      v9 = a2 - a4;
    else
      v9 = a4 - a2;
    if ( a5 <= a3 )
      v10 = a3 - a5;
    else
      v10 = a5 - a3;
    if ( v9 <= v10 )
    {
      if ( a5 <= v6 )
        v15 = -1;
      else
        v15 = 1;
      if ( v10 )
        v22 = s32_div_f((a4 - v7) << 12, v10);
      else
        v22 = 0;
      v16 = (v7 << 12) + v22;
      for ( i = v6 + v15; i != a5; v16 += v22 )
      {
        v18 = v16 >> 12;
        if ( i < 0x96 && v18 < 0x9C )
        {
          v19 = (int)v5 + 150 * v18 + i;
          if ( !*(uchar *)(v19 + 16) )
          {
            *(uchar *)(v19 + 16) = 1;
            v5[1] = v18;
            v5[2] = i;
            Function_225688c(v5[5855], 3);
          }
        }
        i += v15;
      }
    }
    else
    {
      if ( a4 <= v7 )
        v21 = -1;
      else
        v21 = 1;
      if ( v9 )
        v23 = s32_div_f((a5 - v6) << 12, v9);
      else
        v23 = 0;
      v11 = (v6 << 12) + v23;
      v12 = v7 + v21;
      if ( v12 != v20 )
      {
        v13 = (int)v5 + 150 * v12;
        do
        {
          v14 = v11 >> 12;
          if ( v12 < 0x9C && v14 < 0x96 && !*(uchar *)(v13 + v14 + 16) )
          {
            *(uchar *)(v13 + v14 + 16) = 0;
            v5[1] = v12;
            v5[2] = v14;
            Function_225688c(v5[5855], 3);
          }
          v13 += 150 * v21;
          v12 += v21;
          v11 += v23;
        }
        while ( v12 != v20 );
      }
    }
    result = a5;
    if ( a5 < 0x96 )
    {
      result = v20;
      if ( v20 < 0x9C )
      {
        v5[1] = v20;
        v5[2] = a5;
        result = Function_225688c(v5[5855], 3);
      }
    }
  }
  return result;
}

//----- (02256754) --------------------------------------------------------
int __fastcall Function_2256754(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_22568bc(*(uint *)(v1 + 23420)) )
      return 1;
  }
  else
  {
    Function_225688c(*(uint *)(v1 + 23420), 1);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (02256790) --------------------------------------------------------
int __fastcall Function_2256790(int result)
{
  int v1;
  int v2;
  int v3;

  v1 = 0;
  do
  {
    v2 = 0;
    do
    {
      v3 = result + v2++;
      *(uchar *)(v3 + 12) = 0;
    }
    while ( v2 < 150 );
    ++v1;
    result += 150;
  }
  while ( v1 < 156 );
  return result;
}

//----- (022567B0) --------------------------------------------------------
int __fastcall Function_22567b0(int *a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = malloc(8u, 112);
  v5 = v4;
  if ( !v4 )
    return 0;
  v6 = ((int (__fastcall *)(int, int))dword_2255090[0])(v4 + 8, 4);
  *(uint *)v5 = v3;
  *(uint *)(v5 + 4) = ((int (__fastcall *)(int))dword_2254674[0])(v6);
  *(uint *)(v5 + 32) = ((int (*)(void))dword_2254664[0])();
  *(ushort *)(v5 + 104) = 0;
  Function_225680c(v5, v3);
  if ( !*(uint *)(v5 + 4) )
    return 0;
  *v2 = v5;
  return 1;
}

//----- (022567F8) --------------------------------------------------------
uint __fastcall Function_22567f8(uint result)
{
  int v1;

  v1 = result;
  if ( result )
  {
    Function_2256864();
    result = free(v1);
  }
  return result;
}

//----- (0225680C) --------------------------------------------------------
int __fastcall Function_225680c(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int result;

  v1 = a1;
  Function_2006ec0(12, 89, 1, 0, 0, 1, 8);
  ((void (__fastcall *)(int, int, int, int, int))dword_2255958[0])(v1 + 52, 12, 87, 88, 8);
  v2 = dword_2256DC0;
  v3 = 0;
  v4 = v1;
  do
  {
    result = ((int (__fastcall *)(uint, int *, int))dword_2255810[0])(*(uint *)(v1 + 32), v2, v1 + 52);
    *(uint *)(v4 + 36) = result;
    ++v3;
    v2 += 4;
    v4 += 4;
  }
  while ( v3 < 4 );
  return result;
}

//----- (02256864) --------------------------------------------------------
int __fastcall Function_2256864(int a1)
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
  while ( v2 < 4 );
  return ((int (__fastcall *)(int))dword_22559B0[0])(v1 + 52);
}

//----- (0225688C) --------------------------------------------------------
int __fastcall Function_225688c(int *a1)
{
  int v1;

  v1 = *a1;
  return ((int (__fastcall *)(int *))dword_225517C[0])(&dword_2256E00);
}

//----- (022568B0) --------------------------------------------------------
void Function_22568b0()
{
  JUMPOUT(&byte_2255130);
}

//----- (022568BC) --------------------------------------------------------
void Function_22568bc()
{
  JUMPOUT(&dword_2255134[8]);
}

//----- (022568C8) --------------------------------------------------------
int __fastcall Function_22568c8(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = ((int (*)(void))dword_225523C)();
  return ((int (__fastcall *)(int, int))dword_2255224[0])(v2 + 8, v1);
}

//----- (022568DC) --------------------------------------------------------
uint __fastcall Function_22568dc(int a1, int a2)
{
  int v2;
  int v3;
  uint v4;
  uint result;

  v2 = a2;
  if ( !Function_201833c() )
    ErrorHandler();
  v3 = ((int (__fastcall *)(int))dword_225523C)(v2);
  Function_20183c4(*(uint **)(v3 + 4), 6u, dword_2256D88, 0);
  Function_20183c4(*(uint **)(v3 + 4), 7u, dword_2256DA4, 0);
  if ( !Function_201833c() )
    ErrorHandler();
  v4 = LoadFromNARC_RGCN(12, 86, *(uint **)(v3 + 4), 6u, 0, 0, 1, 8);
  LoadFromNARC_RCSN(12, 85, *(uint **)(v3 + 4), 6u, 0, 0, 1, 8);
  ((void (*)(void))dword_2254674[17])();
  if ( !Function_201833c() )
    ErrorHandler();
  Function_22569bc(v3, v4 >> 5);
  Function_2019448(*(uint **)(v3 + 4), 7u);
  REG_DISPCNT_SUB = REG_DISPCNT_SUB & 0xFFFFE0FF | ((((uint)(REG_DISPCNT_SUB << 19) >> 27) | 0x14) << 8);
  Function_22568c8(v2);
  result = Function_201833c();
  if ( !result )
    result = ErrorHandler();
  return result;
}

//----- (022569BC) --------------------------------------------------------
int *__fastcall Function_22569bc(int a1, int a2, int a3, int a4)
{
  uint **v4;
  short v6;
  short v7;
  short v8;
  short v9;
  int v10;

  v10 = a4;
  v4 = (uint **)a1;
  v6 = 519;
  v7 = 5122;
  v8 = 19;
  *(uint *)(a1 + 88) = a2;
  v9 = a2;
  Function_201a8d4(*(uint **)(a1 + 4), a1 + 72, (uchar *)&v6);
  if ( !Function_2099dd0((*v4)[2], v4[21], 0x2F80u) )
    Function_201ada4_ClearTextBox((int)(v4 + 18), 4);
  Function_201a9f4((int)(v4 + 18));
  return Function_201accc((int)(v4 + 18));
}

//----- (02256A1C) --------------------------------------------------------
int __fastcall Function_2256a1c(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  uint v5;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225523C)(a2);
  result = ((int (__fastcall *)(int))dword_2255248)(v2);
  if ( result )
  {
    if ( result == 1 )
    {
      Function_2099da8(*(uint *)(*(uint *)v3 + 8), *(uint **)(v3 + 84), 0x2F80u, v5);
      Function_201a8fc(v3 + 72);
      Function_2019044(*(uint *)(v3 + 4), 6);
      Function_2019044(*(uint *)(v3 + 4), 7);
      result = Function_22568c8(v2);
    }
  }
  else
  {
    *(uint *)(v3 + 92) = 1;
    result = ((int (__fastcall *)(int))dword_225524C[0])(v2);
  }
  return result;
}

//----- (02256A74) --------------------------------------------------------
int __fastcall Function_2256a74(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225523C)(a2);
  Function_201accc(v3 + 72);
  return Function_22568c8(v2);
}

//----- (02256A8C) --------------------------------------------------------
int __fastcall Function_2256a8c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225523C)(a2);
  v4 = v3;
  v5 = 2 * **(uint **)v3;
  v6 = (v5 >> 3) + 20 * (2 * *(uint *)(*(uint *)v3 + 4) >> 3);
  Function_201ae78(v3 + 72, 1, (ushort)v5, 2 * *(uint *)(*(uint *)v3 + 4) & 0xFFFF, 2u, 2u);
  GXS_LoadBG3Char((int *)(*(uint *)(v4 + 84) + 32 * v6), 32 * (*(uint *)(v4 + 88) + v6), 0x20u);
  return Function_22568c8(v2);
}

//----- (02256AE4) --------------------------------------------------------
int __fastcall Function_2256ae4(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225523C)(a2);
  Function_201accc(v3 + 72);
  return Function_22568c8(v2);
}

//----- (02256AFC) --------------------------------------------------------
int __fastcall Function_2256afc(int a1, int a2)
{
  int v2;
  uint *v3;
  uchar *v4;
  int v5;
  int v6;
  int v7;

  v2 = a2;
  v3 = (uint *)((int (__fastcall *)(int))dword_225523C)(a2);
  v4 = (uchar *)((int (__fastcall *)(int))dword_2255240[0])(v2);
  if ( v4[23412] )
    v5 = 2;
  else
    v5 = 1;
  ((void (__fastcall *)(uint, int))dword_22558C4[0])(v3[10], v5);
  if ( v4[23413] )
    v6 = 4;
  else
    v6 = 3;
  ((void (__fastcall *)(uint, int))dword_22558C4[0])(v3[11], v6);
  if ( v4[23414] )
    v7 = 6;
  else
    v7 = 5;
  ((void (__fastcall *)(uint, int))dword_22558C4[0])(v3[12], v7);
  return Function_22568c8(v2);
}

//----- (02256B60) --------------------------------------------------------
int __fastcall Function_2256b60(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225523C)(a2);
  ((void (__fastcall *)(int))dword_2255240[0])(v2);
  Function_201ada4_ClearTextBox(v3 + 72, 4);
  Function_201accc(v3 + 72);
  return Function_22568c8(v2);
}

//----- (02256B8C) --------------------------------------------------------
uint __fastcall Function_2256b8c(int a1, int a2)
{
  int v2;
  int v3;
  uint result;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225523C)(a2);
  ((void (__fastcall *)(int))dword_2255240[0])(v2);
  result = ((int (__fastcall *)(int))dword_2255248)(v2);
  if ( result && *(uint *)(v3 + 92) )
    return Function_22568c8(v2);
  if ( result <= 4 )
    JUMPOUT(__CS__, *((short *)&off_2256BC8 + result) + 36006858);
  switch ( (uchar)result )
  {
    case 0:
      *(ushort *)(v3 + 104) += 336;
      *(ushort *)(v3 + 106) = 336;
      ((void (__fastcall *)(uint, uint))dword_2255950[0])(*(uint *)(v3 + 36), *(ushort *)(v3 + 104));
      *(uint *)(v3 + 100) = 0;
      *(uint *)(v3 + 96) = 0;
      *(uint *)(v3 + 92) = 0;
      result = ((int (__fastcall *)(int))dword_225524C[0])(v2);
      break;
    case 1:
      *(ushort *)(v3 + 104) += *(ushort *)(v3 + 106);
      ((void (__fastcall *)(uint, uint))dword_2255950[0])(*(uint *)(v3 + 36), *(ushort *)(v3 + 104));
      *(ushort *)(v3 + 106) += 336;
      result = *(ushort *)(v3 + 106);
      if ( result >= 0x3000 )
      {
        *(ushort *)(v3 + 106) = 12288;
        *(uint *)(v3 + 100) = 1;
        result = ((int (__fastcall *)(int))dword_225524C[0])(v2);
      }
      break;
    case 2:
      *(ushort *)(v3 + 104) += *(ushort *)(v3 + 106);
      ((void (__fastcall *)(uint, uint))dword_2255950[0])(*(uint *)(v3 + 36), *(ushort *)(v3 + 104));
      result = *(uint *)(v3 + 96);
      if ( result )
      {
        *(uint *)(v3 + 108) = Function_201d35c() & 7;
        if ( *(ushort *)(v3 + 106) > 0x1A00u )
          *(ushort *)(v3 + 106) = 6656;
        result = ((int (__fastcall *)(int))dword_225524C[0])(v2);
      }
      break;
    case 3:
      *(ushort *)(v3 + 104) += *(ushort *)(v3 + 106);
      ((void (__fastcall *)(uint, uint))dword_2255950[0])(*(uint *)(v3 + 36), *(ushort *)(v3 + 104));
      if ( *(uint *)(v3 + 108) )
      {
        result = ((int (__fastcall *)(int))dword_225524C[0])(v2);
      }
      else
      {
        result = -1;
        *(uint *)(v3 + 108) = -1;
      }
      break;
    case 4:
      if ( *(ushort *)(v3 + 106) <= 0x50u )
      {
        *(ushort *)(v3 + 106) = 0;
        result = Function_22568c8(v2);
      }
      else
      {
        *(ushort *)(v3 + 106) -= 80;
        *(ushort *)(v3 + 104) += *(ushort *)(v3 + 106);
        result = ((int (__fastcall *)(uint, uint))dword_2255950[0])(
                   *(uint *)(v3 + 36),
                   *(ushort *)(v3 + 104));
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (02256D1C) --------------------------------------------------------
void __fastcall Function_2256d1c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225523C)(a2);
  ((void (__fastcall *)(int))dword_2255240[0])(v2);
  v4 = ((int (__fastcall *)(int))dword_2255248)(v2);
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      Function_22568b0();
      if ( v5 )
      {
        ((void (__fastcall *)(int))dword_2254424[0])(1642);
        Function_22568c8(v2);
      }
    }
  }
  else
  {
    *(uint *)(v3 + 96) = 1;
    ((void (__fastcall *)(int))dword_225524C[0])(v2);
  }
}

