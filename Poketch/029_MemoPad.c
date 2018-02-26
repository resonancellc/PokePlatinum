//----- (022561D4) --------------------------------------------------------
int __fastcall Function_22561d4(int *a1)
{
  int *v1;
  int v2;

  v1 = a1;
  v2 = malloc(8u, 5888);
  if ( v2 )
  {
    if ( Function_225621c() && AddTaskToTaskList1((int)Function_22562ac, v2, 1u) )
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

  v4 = a3;
  v5 = a1;
  v6 = a2;
  v7 = a4;
  Call_FillMemWithValue((int *)(a1 + 20), 0, 0x16DAu);
  *(uint *)(v5 + 5872) = v7;
  *(uint *)(v5 + 8) = 1;
  if ( !Function_22566c8(v5 + 5876, v5 + 8, v4) )
    return 0;
  *(uchar *)v5 = 0;
  *(uchar *)(v5 + 1) = 0;
  *(uchar *)(v5 + 2) = 0;
  *(uchar *)(v5 + 3) = 0;
  *(uint *)(v5 + 5884) = ((int (__fastcall *)(int *, int, int (*)(), int))dword_225423C[1572])(
                             dword_2256B3C,
                             2,
                             Function_22562f4,
                             v5);
  *(uint *)(v5 + 5880) = v6;
  return 1;
}

//----- (02256288) --------------------------------------------------------
uint __fastcall Function_2256288(int a1)
{
  int v1;

  v1 = a1;
  ((void (__fastcall *)(uint))dword_225423C[1598])(*(uint *)(a1 + 5884));
  Function_2256770(*(uint *)(v1 + 5876));
  return free(v1);
}

//----- (022562AC) --------------------------------------------------------
uint __fastcall Function_22562ac(int *a1, uchar *a2)
{
  uchar *v2;
  int *v3;
  uint result;

  v2 = a2;
  v3 = a1;
  result = *a2;
  if ( result < 3 )
  {
    ((void (__fastcall *)(uint, uint))dword_225423C[183])(*((uint *)a2 + 1470), *((uint *)a2 + 1471));
    result = ((int (__fastcall *)(uchar *))*(&off_2256B44 + *v2))(v2);
    if ( result )
    {
      Function_2256288((int)v2);
      Call_RemoveTaskFromTaskList(v3);
      result = ((int (__fastcall *)(uint))dword_225423C[9])(*((uint *)v2 + 1470));
    }
  }
  return result;
}

//----- (022562F4) --------------------------------------------------------
int __fastcall Function_22562f4(int result, int a2, int a3, int a4)
{
  int v4;

  if ( a3 == 1 )
  {
    if ( (v4 = *(uint *)(a4 + 8), v4 == 1) && !result || !v4 && result == 1 )
    {
      *(uint *)(a4 + 8) ^= 1u;
      result = Function_22567b4(*(uint *)(a4 + 5876));
    }
  }
  return result;
}

//----- (02256324) --------------------------------------------------------
int __fastcall Function_2256324(int result)
{
  *(uchar *)(result + 2) = 1;
  return result;
}

//----- (0225632C) --------------------------------------------------------
char *__fastcall Function_225632c(char *result, char a2)
{
  if ( result[2] )
    a2 = 2;
  *result = a2;
  result[1] = 0;
  return result;
}

//----- (02256340) --------------------------------------------------------
int __fastcall Function_2256340(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_22567d8(*(uint *)(v1 + 5876), 0) )
    {
      ((void (__fastcall *)(uint))dword_225423C[4])(*(uint *)(v1 + 5880));
      Function_225632c((char *)v1, 1);
    }
  }
  else
  {
    Function_22567b4(*(uint *)(v1 + 5876));
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (0225638C) --------------------------------------------------------
int __fastcall Function_225638c(char *a1)
{
  char *v1;
  int v2;
  int v3;

  v1 = a1;
  if ( a1[2] )
    Function_225632c(a1, 2);
  if ( !v1[1] && !((int (__fastcall *)(uint))dword_225423C[180])(*((uint *)v1 + 1470)) )
  {
    if ( v1[3] )
    {
      v2 = *((uint *)v1 + 3);
      v3 = *((uint *)v1 + 4);
      if ( Function_2256460(v1) )
        Function_22564f4(v1, v2, v3, *((uint *)v1 + 3), *((uint *)v1 + 4));
      else
        v1[3] = 0;
    }
    else if ( Function_2256404(v1) )
    {
      Function_22567b4(*((uint *)v1 + 1469));
      v1[3] = 1;
    }
  }
  return 0;
}

//----- (02256404) --------------------------------------------------------
int __fastcall Function_2256404(uint *a1)
{
  uint *v1;
  uint v2;
  uint v4;
  uint v5;

  v1 = a1;
  if ( !((int (__fastcall *)(uint *, uint *))dword_225423C[140])(&v5, &v4) )
    return 0;
  v2 = v5 - 16;
  if ( v5 - 16 >= 0x9C || v4 - 16 >= 0x96 )
    return 0;
  v5 = v2 >> 1;
  v4 = (v4 - 16) >> 1;
  *((uchar *)v1 + 75 * (v2 >> 1) + v4 + 20) = v1[2];
  v1[3] = v5;
  v1[4] = v4;
  return 1;
}

//----- (02256460) --------------------------------------------------------
int __fastcall Function_2256460(int a1)
{
  int v1;
  uint v2;
  uint v4;
  uint v5;

  v1 = a1;
  if ( !((int (__fastcall *)(uint *, uint *))dword_225423C[140])(&v5, &v4) )
    return 0;
  v2 = v5 - 16;
  if ( v5 - 16 >= 0x9C || v4 - 16 >= 0x96 )
    return 0;
  v5 = v2 >> 1;
  v4 = (v4 - 16) >> 1;
  *(uint *)(v1 + 12) = v2 >> 1;
  *(uint *)(v1 + 16) = v4;
  return 1;
}

//----- (022564AC) --------------------------------------------------------
int __fastcall Function_22564ac(int result, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int i;

  v3 = a2 - 2;
  if ( a2 - 2 < 0 )
    v3 = 0;
  v4 = a3 - 2;
  if ( a3 - 2 < 0 )
    v4 = 0;
  v5 = a2 + 2;
  if ( v5 >= 78 )
    v5 = 78;
  v6 = a3 + 2;
  if ( v6 >= 75 )
    v6 = 75;
  if ( v3 < v5 )
  {
    v7 = result + 75 * v3;
    do
    {
      for ( i = v4; i < v6; *(uchar *)(result + 20) = 0 )
        result = v7 + i++;
      ++v3;
      v7 += 75;
    }
    while ( v3 < v5 );
  }
  return result;
}

//----- (022564F4) --------------------------------------------------------
int __fastcall Function_22564f4(uint *a1, uint a2, uint a3, uint a4, uint a5)
{
  uint *v5;
  uint v6;
  uint v7;
  int result;
  uint v9;
  uint v10;
  uint v11;
  int v12;
  uint v13;
  int v14;
  int v15;
  uint i;
  uint v17;
  int v18;
  uint v19;
  int v20;
  int v21;
  uint v22;
  uint v23;
  int v24;

  v5 = a1;
  v6 = a3;
  v7 = a2;
  v19 = a4;
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
        v20 = -1;
      else
        v20 = 1;
      if ( v10 )
        v22 = s32_div_f((a4 - v7) << 12, v10);
      else
        v22 = 0;
      v15 = (v7 << 12) + v22;
      for ( i = v6 + v20; i != a5; v15 += v22 )
      {
        v17 = v15 >> 12;
        if ( i < 0x4B && v17 < 0x4E )
        {
          v18 = v5[2];
          if ( !v18 || v18 != *((uchar *)v5 + 75 * v17 + i + 20) )
          {
            if ( !v18 )
              Function_22564ac((int)v5, v15 >> 12, i);
            *((uchar *)v5 + 75 * v17 + i + 20) = v5[2];
            v5[3] = v17;
            v5[4] = i;
            Function_22567b4(v5[1469]);
          }
        }
        i += v20;
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
      v24 = (v6 << 12) + v23;
      v11 = v7 + v21;
      if ( v11 != v19 )
      {
        v12 = (int)v5 + 75 * v11;
        do
        {
          v13 = v24 >> 12;
          if ( v11 < 0x4E && v13 < 0x4B )
          {
            v14 = v5[2];
            if ( !v14 || v14 != *(uchar *)(v12 + v13 + 20) )
            {
              if ( !v14 )
                Function_22564ac((int)v5, v11, v24 >> 12);
              *(uchar *)(v12 + v13 + 20) = v5[2];
              v5[3] = v11;
              v5[4] = v13;
              Function_22567b4(v5[1469]);
            }
          }
          v12 += 75 * v21;
          v11 += v21;
          v24 += v23;
        }
        while ( v11 != v19 );
      }
    }
    result = a5;
    if ( a5 < 0x4B )
    {
      result = v19;
      if ( v19 < 0x4E )
      {
        if ( !v5[2] )
          Function_22564ac((int)v5, v19, a5);
        v5[3] = v19;
        v5[4] = a5;
        result = Function_22567b4(v5[1469]);
      }
    }
  }
  return result;
}

//----- (0225668C) --------------------------------------------------------
int __fastcall Function_225668c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_22567e4(*(uint *)(v1 + 5876)) )
      return 1;
  }
  else
  {
    Function_22567b4(*(uint *)(v1 + 5876));
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (022566C8) --------------------------------------------------------
int __fastcall Function_22566c8(uint *a1, int a2)
{
  uint *v2;
  int v3;
  uint *v4;
  uint v5;

  v2 = a1;
  v3 = a2;
  v4 = (uint *)malloc(8u, 116);
  if ( !v4 )
    return 0;
  if ( !Function_201833c() )
    ErrorHandler();
  ((void (__fastcall *)(uint *, int))dword_225423C[917])(v4 + 2, 16);
  v5 = Function_201833c();
  if ( !v5 )
    v5 = ErrorHandler();
  *v4 = v3;
  v4[1] = ((int (__fastcall *)(uint))dword_225423C[270])(v5);
  v4[20] = ((int (*)(void))dword_225423C[266])();
  if ( !Function_201833c() )
    ErrorHandler();
  *v2 = v4;
  return 1;
}

//----- (02256728) --------------------------------------------------------
int __fastcall Function_2256728(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_201a778(8u, 1);
  *(uint *)(v1 + 112) = v2;
  if ( !v2 )
    return 0;
  Function_201a8d4(*(uint **)(v1 + 4), v2, (uchar *)dword_2256B50);
  if ( !Function_2099dd0(*(uint *)(*(uint *)v1 + 5864), *(uint **)(*(uint *)(v1 + 112) + 12), 0x2F80u) )
    Function_201ada4_ClearTextBox(*(uint *)(v1 + 112), 4);
  return 1;
}

//----- (02256770) --------------------------------------------------------
uint __fastcall Function_2256770(uint result)
{
  int *v1;
  uint v2;
  int v3;

  v1 = (int *)result;
  if ( result )
  {
    if ( !Function_201833c() )
      ErrorHandler();
    v3 = v1[28];
    if ( v3 )
    {
      Function_2099da8(*(uint *)(*v1 + 5864), *(uint **)(v3 + 12), 0x2F80u, v2);
      Function_201a8fc(v1[28]);
      free(v1[28]);
    }
    result = free((int)v1);
  }
  return result;
}

//----- (022567B4) --------------------------------------------------------
int __fastcall Function_22567b4(int *a1)
{
  int v1;

  v1 = *a1;
  return ((int (__fastcall *)(int *))dword_225423C[976])(&dword_2256BB0);
}

//----- (022567D8) --------------------------------------------------------
void Function_22567d8()
{
  JUMPOUT(&dword_225423C[957]);
}

//----- (022567E4) --------------------------------------------------------
void Function_22567e4()
{
  JUMPOUT(&dword_225423C[966]);
}

//----- (022567F0) --------------------------------------------------------
int __fastcall Function_22567f0(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = ((int (*)(void))dword_225423C[1024])();
  return ((int (__fastcall *)(int, int))dword_225423C[1018])(v2 + 8, v1);
}

//----- (02256804) --------------------------------------------------------
uint __fastcall Function_2256804(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint result;

  v2 = a2;
  if ( !Function_201833c() )
    ErrorHandler();
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(v2);
  Function_20183c4(*(uint **)(v3 + 4), 6u, dword_2256B58, 0);
  Function_20183c4(*(uint **)(v3 + 4), 7u, dword_2256B74, 0);
  if ( !Function_201833c() )
    ErrorHandler();
  LoadFromNARC_RGCN(12, 30, *(uint **)(v3 + 4), 6u, 0, 0, 1, 8);
  LoadFromNARC_RCSN(12, 31, *(uint **)(v3 + 4), 6u, 0, 0, 1, 8);
  ((void (*)(void))dword_225423C[287])();
  if ( !Function_201833c() )
    ErrorHandler();
  Function_2256728(v3);
  Function_201a954(*(uint *)(v3 + 112), v4);
  if ( !Function_201833c() )
    ErrorHandler();
  Function_2256abc(v3);
  if ( !Function_201833c() )
    ErrorHandler();
  Function_2019448(*(uint **)(v3 + 4), 7u);
  REG_DISPCNT_SUB = REG_DISPCNT_SUB & 0xFFFFE0FF | ((((uint)(REG_DISPCNT_SUB << 19) >> 27) | 0x14) << 8);
  Function_22567f0(v2);
  result = Function_201833c();
  if ( !result )
    result = ErrorHandler();
  return result;
}

//----- (02256908) --------------------------------------------------------
int __fastcall Function_2256908(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  bool v5;
  int v6;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  v4 = v3;
  v5 = **(uint **)v3 == 1;
  v6 = *(uint *)(v3 + 104);
  if ( v5 )
  {
    ((void (__fastcall *)(int, uint))dword_225423C[1442])(v6, 0);
    ((void (__fastcall *)(uint, int))dword_225423C[1442])(*(uint *)(v4 + 108), 3);
  }
  else
  {
    ((void (__fastcall *)(int, int))dword_225423C[1442])(v6, 1);
    ((void (__fastcall *)(uint, int))dword_225423C[1442])(*(uint *)(v4 + 108), 2);
  }
  ((void (__fastcall *)(int))dword_225423C[122])(1635);
  return Function_22567f0(v2);
}

//----- (02256950) --------------------------------------------------------
int __fastcall Function_2256950(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  Function_201accc(*(uint *)(v3 + 112));
  return Function_22567f0(v2);
}

//----- (02256968) --------------------------------------------------------
int __fastcall Function_2256968(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int result;
  int v8;
  int v9;
  int v10;
  int v11;

  v5 = a1;
  v6 = a2 / 8 + 20 * (a3 / 8);
  result = (a2 + a4 - 1) / 8 - a2 / 8 + 1;
  v11 = (a3 + a5 - 1) / 8 - a3 / 8;
  if ( v11 != -1 )
  {
    v8 = 32 * v6;
    v9 = 32 * result;
    do
    {
      DC_FlushRange(v5 + v8, v9);
      GXS_LoadBG3Char((int *)(v5 + v8), 32 * (v6 + 12), v9);
      v10 = v11;
      v8 += 640;
      result = v11 - 1;
      v6 += 20;
      --v11;
    }
    while ( v10 );
  }
  return result;
}

//----- (022569DC) --------------------------------------------------------
int __fastcall Function_22569dc(int a1, int a2)
{
  uint **v2;
  uint **v3;
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v12;
  int v13;

  v12 = a2;
  v2 = (uint **)((int (__fastcall *)(int))dword_225423C[1024])(a2);
  v3 = v2;
  v4 = *v2;
  if ( *v4 )
  {
    v9 = 2 * v4[1];
    v10 = 2 * v4[2];
    Function_201ae78((int)v3[28], 1, (ushort)v9, (ushort)v10, 2u, 2u);
    Function_2256968(v3[28][3], v9, v10, 2, 2);
  }
  else
  {
    v5 = 2 * v4[1];
    v6 = 8;
    v7 = v5 - 4;
    v8 = 2 * v4[2] - 4;
    v13 = 8;
    if ( v5 - 4 < 0 )
    {
      v13 = v5 + 4;
      v7 = 0;
    }
    if ( v8 < 0 )
    {
      v6 = 2 * v4[2] + 4;
      v8 = 0;
    }
    Function_201ae78((int)v3[28], 4, (ushort)v7, (ushort)v8, v13, v6);
    Function_2256968(v3[28][3], v7, v8, v13, v6);
  }
  return Function_22567f0(v12);
}

//----- (02256A7C) --------------------------------------------------------
int __fastcall Function_2256a7c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  Function_201accc(*(uint *)(v3 + 112));
  return Function_22567f0(v2);
}

//----- (02256A94) --------------------------------------------------------
int __fastcall Function_2256a94(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  Function_2256b18();
  Function_2019044(*(uint *)(v3 + 4), 6);
  Function_2019044(*(uint *)(v3 + 4), 7);
  return Function_22567f0(v2);
}

//----- (02256ABC) --------------------------------------------------------
int __fastcall Function_2256abc(int a1)
{
  int v1;
  int result;
  int *v3;
  int v4;
  int v5;

  v1 = a1;
  Function_2006ec0(12, 32, 1, 0, 0, 1, 8);
  result = ((int (__fastcall *)(int, int, int, int, int))dword_225423C[1479])(
             v1 + 84,
             12,
             33,
             34,
             8);
  if ( result )
  {
    v3 = dword_2256B90;
    v4 = 0;
    v5 = v1;
    do
    {
      result = ((int (__fastcall *)(uint, int *, int))dword_225423C[1397])(*(uint *)(v1 + 80), v3, v1 + 84);
      *(uint *)(v5 + 104) = result;
      ++v4;
      v3 += 4;
      v5 += 4;
    }
    while ( v4 < 2 );
  }
  return result;
}

//----- (02256B18) --------------------------------------------------------
int __fastcall Function_2256b18(int a1)
{
  int v1;
  uint v2;
  int v3;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    ((void (__fastcall *)(uint, uint))dword_225423C[1437])(*(uint *)(v1 + 80), *(uint *)(v3 + 104));
    ++v2;
    v3 += 4;
  }
  while ( v2 < 2 );
  return ((int (__fastcall *)(int))dword_225423C[1501])(v1 + 84);
}

