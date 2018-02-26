//----- (0202440C) --------------------------------------------------------
int __fastcall Function_202440c(int a1)
{
  int v1

  v1 = a1;
  Function_2025c48(27);
  return LoadVariableAreaAdress(v1, 27);
}

//----- (02024420) --------------------------------------------------------
int __fastcall LoadVariableAreaAdress_25(int a1)
{
  return LoadVariableAreaAdress(a1, 37);
}

//----- (0202442C) --------------------------------------------------------
int __fastcall Function_202442c(int a1)
{
  int v1

  v1 = a1;
  Function_2025c48(31);
  return LoadVariableAreaAdress(v1, 31);
}

//----- (02024440) --------------------------------------------------------
int __fastcall LoadVariableAreaAdress_20(int a1)
{
  return LoadVariableAreaAdress(a1, 32);
}

//----- (0202444C) --------------------------------------------------------
uchar *__fastcall Function_202444c(int a1, uint a2, uint *a3)
{
  return Function_2025680(a1, a2, 0, a3);
}

//----- (02024458) --------------------------------------------------------
int __fastcall Function_2024458(int a1, uchar *a2)
{
  return Function_2025428(a1, 0, a2);
}

//----- (02024464) --------------------------------------------------------
uchar *__fastcall Function_2024464(int a1, uint a2, int a3, int a4)
{
  char v5

  return Function_20257e8(a1, a2, a4 + 2, a3, &v5);
}

//----- (0202447C) --------------------------------------------------------
int __fastcall Function_202447c(int a1, uchar *a2, int a3)
{
  return Function_2025574(a1, a3 + 2, a2, (int)Function_2025574);
}

//----- (0202448C) --------------------------------------------------------
uchar *__fastcall Function_202448c(int a1, uint a2, int a3, int a4)
{
  char v5
  int v6

  v6 = a4;
  return Function_20257e8(a1, a2, 1, a3, &v5);
}

//----- (020244A0) --------------------------------------------------------
int __fastcall Function_20244a0(int a1, uchar *a2)
{
  return Function_2025574(a1, 1, a2, (int)Function_2025574);
}

//----- (020244AC) --------------------------------------------------------
BOOL *__fastcall InitVariableAreaAdresses(int a1, int a2, int a3, int a4)
{
  BOOL *v4
  int v5
  int v6
  int v7
  int v8
  char v9
  int v10
  int v12
  int v13
  int v14

  v14 = a4;
  v4 = (BOOL *)malloc(1u, 131788);
  MIi_CpuClearFast(0, v4, 0x202CCu);
  dword_21C0794 = (int)v4;
  *v4 = Function_2025a3c((int)&dword_21C0794);
  v4[1] = 0;
  v4[2] = 1;
  v4[3] = 1;
  InitVariableAreaAdresses_20024((int)(v4 + 32777));
  Function_2025258((int)(v4 + 32929), (int)(v4 + 32777));
  MIi_CpuClearFast(0, v4 + 32774, 8u);
  v8 = Function_2024abc((int)v4, v5, v6, v7);
  v4[4] = 0;
  switch ( v9 )
  {
    case 0:
      goto LABEL_14;
    case 1:
      v4[3] = 0;
      goto LABEL_3;
    case 2:
LABEL_3:
      Function_2024dbc((int)v4);
      v4[1] = 1;
      v4[2] = 0;
      if ( v8 == 2 )
        v4[4] |= 1u;
      Function_2024cd4((int)v4, &v13, &v12, v10);
      if ( v13 == 3 )
      {
        v4[4] |= 8u;
      }
      else if ( v13 == 2 )
      {
        v4[4] |= 4u;
      }
      if ( v12 == 3 )
      {
        v4[4] |= 0x20u;
      }
      else if ( v12 == 2 )
      {
        v4[4] |= 0x10u;
      }
      break;
    case 3:
      v4[4] |= 2u;
LABEL_14:
      Call_ClearAllVariableAreas(v4);
      break;
    default:
      return v4;
  }
  return v4;
}

//----- (020245A4) --------------------------------------------------------
int GetVariableAreaBaseAdress()
{
  if ( !dword_21C0794 )
    ErrorHandler();
  return dword_21C0794;
}

//----- (020245BC) --------------------------------------------------------
int __fastcall LoadVariableAreaAdress(int a1, int a2)
{
  int v2
  int v3

  v2 = a2;
  v3 = a1;
  if ( a2 >= 38 )
    ErrorHandler();
  return v3 + 20 + *(uint *)(v3 + 16 * v2 + 131116);
}

//----- (020245E0) --------------------------------------------------------
int __fastcall Call_LoadVariableAreaAdress(int a1, int a2)
{
  return LoadVariableAreaAdress(a1, a2);
}

//----- (020245E8) --------------------------------------------------------
int __fastcall Function_20245e8(int a1)
{
  uint *v1
  int v2
  int v3
  int v4
  int v5
  int v7

  v7 = a1;
  v1 = (uint *)malloc2(3u, 4096);
  Function_2017b7c(1);
  Function_202516c(v7, 0, *(uchar *)(v7 + 131104) == 0);
  Function_202516c(v7, 1, *(uchar *)(v7 + 131105) == 0);
  Function_202516c(v7, 0, *(uchar *)(v7 + 131104));
  Function_202516c(v7, 1, *(uchar *)(v7 + 131105));
  MIi_CpuClearFast(-1, v1, 0x1000u);
  v3 = 0;
  v4 = 0;
  do
  {
    Function_2025a9c(v4, (int)v1, 4096, v2);
    Function_2025a9c((v3++ + 64) << 12, (int)v1, 4096, v5);
    v4 += 4096;
  }
  while ( v3 < 64 );
  free((int)v1);
  Call_ClearAllVariableAreas((uint *)v7);
  *(uint *)(v7 + 4) = 0;
  Function_2017b8c(1);
  return 1;
}

//----- (020246A8) --------------------------------------------------------
int __fastcall Function_20246a8(uint *a1)
{
  uint *v1
  int v3
  char v4
  char v5

  v1 = a1;
  if ( !*a1 )
    return 0;
  if ( !Function_2024dbc((int)a1) )
    return 0;
  v1[1] = 1;
  v1[2] = 0;
  Function_2024cd4((int)v1, &v5, (int *)&v4, v3);
  return 1;
}

//----- (020246E0) --------------------------------------------------------
int __fastcall Function_20246e0(uint *a1)
{
  uint *v1
  int result

  v1 = a1;
  if ( !*a1 )
    return 3;
  if ( a1[2] )
  {
    Function_2017b7c(1);
    Function_202516c((int)v1, 0, *((uchar *)v1 + 131104) == 0);
    Function_202516c((int)v1, 1, *((uchar *)v1 + 131105) == 0);
    Function_202516c((int)v1, 0, *((uchar *)v1 + 131104));
    Function_202516c((int)v1, 1, *((uchar *)v1 + 131105));
    Function_2017b8c(1);
  }
  result = Function_202513c((int)v1);
  if ( result == 2 )
  {
    v1[1] = 1;
    v1[2] = 0;
  }
  return result;
}

//----- (02024760) --------------------------------------------------------
int __fastcall Function_2024760(int a1, int a2)
{
  int v2
  int v3
  int v4
  int v5
  int v6
  int result

  v2 = a2;
  v3 = a1;
  if ( a2 >= 2 )
    ErrorHandler();
  if ( *(uint *)(v3 + 8) )
    ErrorHandler();
  if ( *(uint *)(v3 + 4) != 1 )
    ErrorHandler();
  Function_2024814(v3, v2);
  do
  {
    do
      result = Function_2024828(v3, v4, v5, v6);
    while ( !result );
  }
  while ( result == 1 );
  return result;
}

//----- (0202479C) --------------------------------------------------------
int __fastcall Call_ClearAllVariableAreas(uint *a1)
{
  a1[2] = 1;
  a1[3] = 1;
  return ClearAllVariableAreas(a1 + 5, (int)(a1 + 32777));
}

//----- (020247B8) --------------------------------------------------------
int __fastcall Function_20247b8(int a1)
{
  return *(uint *)a1;
}

//----- (020247BC) --------------------------------------------------------
int __fastcall Function_20247bc(int a1)
{
  return *(uint *)(a1 + 16);
}

//----- (020247C0) --------------------------------------------------------
int __fastcall Function_20247c0(int a1)
{
  return *(uint *)(a1 + 4);
}

//----- (020247C4) --------------------------------------------------------
int __fastcall Function_20247c4(int a1)
{
  return *(uint *)(a1 + 8);
}

//----- (020247C8) --------------------------------------------------------
int __fastcall Function_20247c8(int a1)
{
  int v1

  v1 = LoadVariableAreaAdress_a_3(a1);
  return Function_20278cc(v1);
}

//----- (020247D4) --------------------------------------------------------
int __fastcall Function_20247d4(int a1)
{
  int v1

  v1 = LoadVariableAreaAdress_a_3(a1);
  return Function_20278b8(v1);
}

//----- (020247E0) --------------------------------------------------------
BOOL __fastcall Function_20247e0(int a1)
{
  int v1

  v1 = a1;
  return Function_20247c4(a1) && Function_20247c0(v1);
}

//----- (02024800) --------------------------------------------------------
int __fastcall Function_2024800(int a1)
{
  return *(uint *)(a1 + 12);
}

//----- (02024804) --------------------------------------------------------
int Function_2024804()
{
  int result

  result = dword_21C0794;
  *(uint *)(dword_21C0794 + 12) = 1;
  return result;
}

//----- (02024814) --------------------------------------------------------
int __fastcall Function_2024814(int a1, int a2)
{
  return Function_2024ec8(a1, (uint *)(a1 + 131740), a2);
}

//----- (02024828) --------------------------------------------------------
int __fastcall Function_2024828(int a1, int a2, int a3, int a4)
{
  uint *v4
  int v5
  int v6

  v4 = (uint *)a1;
  v5 = Function_2024f44(a1, a1 + 131740, a3, a4);
  v6 = v5;
  if ( v5 && v5 != 1 )
    Function_202506c(v4, v4 + 32935, v5);
  return v6;
}

//----- (02024850) --------------------------------------------------------
int __fastcall Function_2024850(int a1)
{
  return Function_20250dc(a1, (uint *)(a1 + 131740));
}

//----- (02024860) --------------------------------------------------------
uint *__fastcall Function_2024860(uint *result)
{
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  return result;
}

//----- (0202486C) --------------------------------------------------------
int __fastcall Function_202486c(int a1, uchar *a2, uint a3)
{
  return Function_201d628(a2, a3);
}

//----- (02024878) --------------------------------------------------------
int __fastcall Function_2024878(int a1, uchar *a2, int a3)
{
  return Function_201d628(a2, a3 - 20);
}

//----- (02024888) --------------------------------------------------------
int __fastcall Function_2024888(int a1, int a2)
{
  int v2

  if ( a1 )
    v2 = 0x40000;
  else
    v2 = 0;
  return v2 + *(uint *)(a2 + 4);
}

//----- (0202489C) --------------------------------------------------------
int __fastcall Function_202489c(int a1, int a2, int a3)
{
  int v3
  int v4

  v3 = a1 + 131716 + 12 * a3;
  v4 = a2 + *(uint *)(v3 + 4);
  if ( !*(uint *)(v3 + 8) )
    ErrorHandler();
  return v4 + *(uint *)(v3 + 8) - 20;
}

//----- (020248C4) --------------------------------------------------------
BOOL __fastcall Function_20248c4(int a1, int a2, int a3)
{
  int v3
  int v4
  int v5
  int v6
  int v7
  int v9

  v3 = a3;
  v9 = a1;
  v4 = a2;
  v5 = a1 + 131716 + 12 * a3;
  v6 = Function_202489c(a1, a2, a3);
  v7 = *(uint *)(v5 + 8);
  if ( *(uint *)(v6 + 8) != v7 )
    return 0;
  if ( *(uint *)(v6 + 12) != 537265699 )
    return 0;
  if ( *(uchar *)(v6 + 16) == v3 )
    return *(ushort *)(v6 + 18) == Function_2024878(v9, (uchar *)(v4 + *(uint *)(v5 + 4)), v7);
  return 0;
}

//----- (02024920) --------------------------------------------------------
BOOL __fastcall Function_2024920(BOOL *a1, int a2, int a3, int a4)
{
  int v4
  int v5
  BOOL *v6
  int v7
  BOOL *v8
  BOOL result

  v4 = a3;
  v5 = a2;
  v6 = a1;
  v7 = a4;
  v8 = (BOOL *)Function_202489c(a2, a3, a4);
  *v6 = Function_20248c4(v5, v4, v7);
  v6[1] = *v8;
  result = v8[1];
  v6[2] = result;
  return result;
}

//----- (0202494C) --------------------------------------------------------
int __fastcall Function_202494c(int a1, int a2, int a3)
{
  int v3
  int v4
  int v5
  int v6
  int v7
  int v8
  int v9
  int result

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = a1 + 131716 + 12 * a3;
  v7 = Function_202489c(a1, a2, a3);
  v8 = v7;
  v9 = *(uint *)(v6 + 4);
  *(uint *)v7 = *(uint *)(v3 + 131092);
  *(uint *)(v7 + 4) = *(uint *)(v3 + 4 * v4 + 131096);
  *(uint *)(v7 + 8) = *(uint *)(v6 + 8);
  *(uint *)(v7 + 12) = 537265699;
  *(uchar *)(v7 + 16) = v4;
  result = Function_2024878(v3, (uchar *)(v5 + v9), *(uint *)(v6 + 8));
  *(ushort *)(v8 + 18) = result;
  return result;
}

//----- (0202499C) --------------------------------------------------------
int __fastcall Function_202499c(uint a1, uint a2)
{
  if ( a1 == -1 && !a2 )
    return -1;
  if ( !a1 && a2 == -1 )
    return 1;
  if ( a1 <= a2 )
    return -(a1 < a2);
  return 1;
}

//----- (020249D4) --------------------------------------------------------
int __fastcall Function_20249d4(int *a1, uint *a2, uint *a3, uint *a4)
{
  int *v4
  uint *v5
  uint *v6
  uint *v7
  int v8
  int v9
  int result
  int v11

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v11 = Function_202499c(a1[1], a2[1]);
  v8 = Function_202499c(v4[2], v5[2]);
  v9 = *v4;
  if ( *v4 && *v5 )
  {
    if ( v11 <= 0 )
    {
      if ( v11 >= 0 )
      {
        if ( v8 <= 0 )
        {
          if ( v8 < 0 )
          {
            *v6 = 1;
            *v7 = 0;
          }
          else
          {
            *v6 = 0;
            *v7 = 1;
          }
        }
        else
        {
          *v6 = 0;
          *v7 = 1;
        }
      }
      else
      {
        if ( v8 >= 0 )
          ErrorHandler();
        *v6 = 1;
        *v7 = 0;
      }
    }
    else
    {
      if ( v8 <= 0 )
        ErrorHandler();
      *v6 = 0;
      *v7 = 1;
    }
    result = 2;
  }
  else if ( !v9 || *v5 )
  {
    if ( v9 || !*v5 )
    {
      *v6 = 2;
      *v7 = 2;
      result = 0;
    }
    else
    {
      result = 1;
      *v6 = 1;
      *v7 = 2;
    }
  }
  else
  {
    *v6 = 0;
    *v7 = 2;
    result = 1;
  }
  return result;
}

//----- (02024A84) --------------------------------------------------------
int __fastcall Function_2024a84(int result, int a2, int a3, int a4, int a5)
{
  int v5

  v5 = a2 + 12 * a4;
  *(uint *)(result + 131092) = *(uint *)(v5 + 4);
  *(uint *)(result + 131096) = *(uint *)(v5 + 8);
  *(uint *)(result + 131100) = *(uint *)(a3 + 12 * a5 + 8);
  *(uchar *)(result + 131104) = a4;
  *(uchar *)(result + 131105) = a5;
  return result;
}

//----- (02024ABC) --------------------------------------------------------
int __fastcall Function_2024abc(int a1, int a2, int a3, int a4)
{
  int v4
  int v5
  int v6
  int v7
  int v8
  int result
  int v10
  int v11
  int v12
  int v13
  int v14
  BOOL v15
  char v16[8]
  BOOL v17[3]
  BOOL v18
  char v19[8]
  BOOL v20[3]
  int v21

  v21 = a4;
  v4 = a1;
  v5 = malloc2(3u, 0x20000);
  v6 = malloc2(3u, 0x20000);
  if ( Function_2025ac0(0, v5, 0x20000) )
  {
    Function_2024920(&v18, v4, v5, 0);
    Function_2024920(&v15, v4, v5, 1);
  }
  else
  {
    Function_2024860(&v18);
    Function_2024860(&v15);
  }
  if ( Function_2025ac0(0x40000, v6, 0x20000) )
  {
    Function_2024920(v20, v4, v6, 0);
    Function_2024920(v17, v4, v6, 1);
  }
  else
  {
    Function_2024860(v20);
    Function_2024860(v17);
  }
  free(v5);
  free(v6);
  v7 = Function_20249d4(&v18, v20, &v14, &v12);
  v8 = Function_20249d4(&v15, v17, &v13, &v11);
  if ( !v7 && !v8 )
    return 0;
  if ( !v7 || !v8 )
    return 3;
  if ( v7 != 2 || v8 != 2 )
  {
    if ( v7 != 1 || v8 != 2 )
    {
      if ( v7 != 2 || v8 != 1 )
      {
        if ( v7 != 1 || v8 != 1 || v14 != v13 )
        {
          if ( *(uint *)&v19[12 * v14] != *(uint *)&v16[12 * v13] )
            ErrorHandler();
          Function_2024a84(v4, (int)&v18, (int)&v15, v14, v13);
          result = 2;
        }
        else
        {
          if ( *(uint *)&v19[12 * v14] != *(uint *)&v16[12 * v13] )
            ErrorHandler();
          Function_2024a84(v4, (int)&v18, (int)&v15, v14, v13);
          result = 1;
        }
      }
      else if ( *(uint *)&v19[12 * v14] == *(uint *)&v16[12 * v13] )
      {
        Function_2024a84(v4, (int)&v18, (int)&v15, v14, v13);
        result = 1;
      }
      else
      {
        Function_2024a84(v4, (int)&v18, (int)&v15, v12, v13);
        result = 2;
      }
    }
    else
    {
      v10 = *(uint *)&v19[12 * v14];
      if ( v10 == *(uint *)&v16[12 * v13] )
      {
        Function_2024a84(v4, (int)&v18, (int)&v15, v14, v13);
        result = 2;
      }
      else if ( v10 == *(uint *)&v16[12 * v11] )
      {
        Function_2024a84(v4, (int)&v18, (int)&v15, v14, v11);
        result = 2;
      }
      else
      {
        result = 3;
      }
    }
  }
  else if ( *(uint *)&v19[12 * v14] == *(uint *)&v16[12 * v13] )
  {
    Function_2024a84(v4, (int)&v18, (int)&v15, v14, v13);
    result = 1;
  }
  else
  {
    Function_2024a84(v4, (int)&v18, (int)&v15, v12, v13);
    result = 2;
  }
  return result;
}

//----- (02024CD4) --------------------------------------------------------
int __fastcall Function_2024cd4(int a1, uint *a2, int *a3, int a4)
{
  int v4
  uint *v5
  int *v6
  int v7
  int result
  uchar *v9
  int v10
  uchar *v11
  char v12
  int v13
  int v14
  int v15
  int v16
  int v17

  v17 = a4;
  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = LoadVariableAreaAdress_a_3(a1);
  *v5 = 1;
  *v6 = 1;
  result = Function_20247c8(v4);
  if ( result )
  {
    Function_20279a8(v7, 1, &v14, &v13, &v12);
    if ( v14 != -1 || v13 != -1 )
    {
      v9 = Function_20257e8(v4, 3u, 1, (int)&v16, &v15);
      free((int)v9);
      if ( v16 == 2 )
      {
        *v5 = 3;
      }
      else if ( v16 == 1 && v15 == 1 )
      {
        *v5 = 2;
      }
    }
    v10 = 2;
    do
    {
      Function_20279a8(v7, v10, &v14, &v13, &v12);
      result = -1;
      if ( v14 != -1 || v13 != -1 )
      {
        v11 = Function_20257e8(v4, 3u, v10, (int)&v16, &v15);
        free((int)v11);
        result = v16;
        if ( v16 == 2 )
        {
          result = 3;
          *v6 = 3;
        }
        else if ( v16 == 1 )
        {
          result = v15;
          if ( v15 == 1 )
          {
            result = *v6;
            if ( *v6 != 3 )
            {
              result = 2;
              *v6 = 2;
            }
          }
        }
      }
      ++v10;
    }
    while ( v10 <= 5 );
  }
  return result;
}

//----- (02024DA4) --------------------------------------------------------
BOOL __fastcall Function_2024da4(int a1, int a2, int a3)
{
  int v3
  int v4
  int v5

  v3 = a2;
  v4 = a3;
  v5 = Function_2024888(a1, a2);
  return Function_2025ac0(v5, v4 + *(uint *)(v3 + 4), *(uint *)(v3 + 8));
}

//----- (02024DBC) --------------------------------------------------------
int __fastcall Function_2024dbc(int a1)
{
  int v1
  int v2
  int v3
  int v5
  int v6
  uchar *v7

  v1 = a1;
  v2 = 0;
  v3 = a1 + 131716;
  do
  {
    if ( !Function_2024da4(*(uchar *)(v1 + v2 + 131104), v3, v1 + 20) )
      return 0;
    if ( !Function_20248c4(v1, v1 + 20, v2) )
      return 0;
    ++v2;
    v3 += 12;
  }
  while ( v2 < 2 );
  v5 = 0;
  v6 = v1;
  do
  {
    v7 = (uchar *)LoadVariableAreaAdress(v1, v5);
    *(ushort *)(v6 + 131120) = Function_201d628(v7, *(uint *)(v6 + 131112));
    ++v5;
    v6 += 16;
  }
  while ( v5 < 38 );
  return 1;
}

//----- (02024E30) --------------------------------------------------------
int __fastcall Function_2024e30(int a1, int a2, int a3)
{
  int v3
  int v4
  int v5
  int v6
  int v7

  v3 = a1;
  v4 = a3;
  v5 = a1 + 131716 + 12 * a2;
  Function_202494c(a1, a1 + 20, a2);
  v6 = Function_2024888(v4, v5);
  return Function_2025b3c(v6, v3 + 20 + *(uint *)(v5 + 4), *(uint *)(v5 + 8) - 20, v7);
}

//----- (02024E68) --------------------------------------------------------
int __fastcall Function_2024e68(int a1, int a2, int a3)
{
  int v3
  int v4
  int v5
  int v6
  int v7

  v3 = a1;
  v4 = a1 + 131716 + 12 * a2;
  v5 = *(uint *)(v4 + 8);
  v6 = Function_2024888(a3, v4);
  return Function_2025b3c(v5 + v6 - 20, v3 + *(uint *)(v4 + 4) + v5, 20, v7);
}

//----- (02024E98) --------------------------------------------------------
int __fastcall Function_2024e98(int a1, int a2, int a3)
{
  int v3
  int v4
  int v5
  int v6
  int v7

  v3 = a1;
  v4 = a1 + 131716 + 12 * a2;
  v5 = *(uint *)(v4 + 8);
  v6 = Function_2024888(a3, v4);
  return Function_2025b3c(v5 + v6 - 12, v3 + 8 + *(uint *)(v4 + 4) + v5, 8, v7);
}

//----- (02024EC8) --------------------------------------------------------
int __fastcall Function_2024ec8(int a1, uint *a2, int a3)
{
  uint *v3
  int v4
  int v5
  int v6
  uint *v7

  v3 = a2;
  v4 = a3;
  v5 = 0;
  v6 = a1;
  v7 = v3;
  do
  {
    ++v5;
    v7[7] = *(uint *)(v6 + 131096);
    ++v7;
    ++*(uint *)(v6 + 131096);
    v6 += 4;
  }
  while ( v5 < 2 );
  v3[5] = 0;
  *v3 = 0;
  v3[9] = 0;
  if ( v4 == 2 )
  {
    if ( *(uint *)(a1 + 12) )
    {
      *v3 = 1;
      v3[6] = (*(uint *)(a1 + 131092))++;
      v3[1] = 0;
      v3[2] = 0;
      v3[3] = 2;
    }
    else
    {
      v3[1] = 0;
      v3[2] = 0;
      v3[3] = 1;
    }
  }
  else
  {
    v3[1] = v4;
    v3[2] = v4;
    v3[3] = v4 + 1;
  }
  return Function_2017b7c(1);
}

//----- (02024F44) --------------------------------------------------------
int __fastcall Function_2024f44(int a1, int a2, int a3, int a4)
{
  int *v4
  int v5
  uint v6
  int v8
  int v9

  v9 = a4;
  v4 = (int *)a2;
  v5 = a1;
  v6 = *(uint *)(a2 + 20);
  if ( v6 <= 5 )
    JUMPOUT(__CS__, *((short *)&off_2024F5E + v6) + 33705824);
  switch ( (uchar)v6 )
  {
    case 0:
      *(uint *)(a2 + 16) = Function_2024e30(
                               v5,
                               *(uint *)(a2 + 8),
                               *(uchar *)(v5 + *(uint *)(a2 + 8) + 131104) == 0);
      v4[9] = 1;
      ++v4[5];
      goto LABEL_5;
    case 1:
LABEL_5:
      if ( !Function_2025bb8(v4[4], v4[9], &v9) )
        return 0;
      v4[9] = 0;
      if ( !v9 )
        return 3;
      ++v4[5];
LABEL_9:
      v4[4] = Function_2024e98(v5, v4[2], *(uchar *)(v5 + v4[2] + 131104) == 0);
      v4[9] = 1;
      ++v4[5];
LABEL_10:
      if ( !Function_2025bb8(v4[4], v4[9], &v9) )
        return 0;
      v4[9] = 0;
      if ( !v9 )
        return 3;
      ++v4[5];
      if ( v4[2] + 1 == v4[3] )
        return 1;
LABEL_15:
      v4[4] = Function_2024e68(v5, v4[2], *(uchar *)(v5 + v4[2] + 131104) == 0);
      v4[9] = 1;
      ++v4[5];
LABEL_16:
      if ( !Function_2025bb8(v4[4], v4[9], &v9) )
        return 0;
      v4[9] = 0;
      if ( !v9 )
        return 3;
      v8 = v4[2] + 1;
      v4[2] = v8;
      if ( v8 == v4[3] )
        return 2;
      v4[5] = 0;
      return 0;
    case 2:
      goto LABEL_9;
    case 3:
      goto LABEL_10;
    case 4:
      goto LABEL_15;
    case 5:
      goto LABEL_16;
    default:
      return 0;
  }
}

//----- (0202506C) --------------------------------------------------------
int __fastcall Function_202506c(uint *a1, uint *a2, int a3)
{
  uint *v3
  uint *v4
  int v5
  int i

  v3 = a1;
  v4 = a2;
  if ( a3 == 3 )
  {
    if ( *a2 )
      v3[32773] = a2[6];
    v5 = 0;
    do
    {
      ++v5;
      v3[32774] = v4[7];
      ++v4;
      ++v3;
    }
    while ( v5 < 2 );
  }
  else
  {
    for ( i = a2[1]; i < a2[3]; ++i )
      *((uchar *)v3 + i + 131104) = *((uchar *)v3 + i + 131104) == 0;
    v3[1] = 1;
    v3[2] = 0;
    v3[3] = 0;
  }
  return Function_2017b8c(1);
}

//----- (020250DC) --------------------------------------------------------
int __fastcall Function_20250dc(int a1, uint *a2)
{
  uint *v2
  int v3
  uint *v4

  v2 = a2;
  if ( *a2 )
    *(uint *)(a1 + 131092) = a2[6];
  v3 = 0;
  v4 = a2;
  do
  {
    ++v3;
    *(uint *)(a1 + 131096) = v4[7];
    ++v4;
    a1 += 4;
  }
  while ( v3 < 2 );
  if ( !Function_20cd050() )
    CARD_CancelBackupAsync();
  if ( v2[9] )
  {
    CARD_UnlockBackup(v2[4] & 0xFFFF);
    OS_ReleaseLockID(v2[4] & 0xFFFF);
    v2[9] = 0;
  }
  return Function_2017b8c(1);
}

//----- (0202513C) --------------------------------------------------------
int __fastcall Function_202513c(int a1)
{
  uint *v1
  int v2
  int v3
  int v4
  int v5
  char v7

  v1 = (uint *)a1;
  Function_2024ec8(a1, &v7, 2);
  do
  {
    do
    {
      v4 = Function_2024f44((int)v1, (int)&v7, v2, v3);
      v5 = v4;
    }
    while ( !v4 );
  }
  while ( v4 == 1 );
  Function_202506c(v1, &v7, v4);
  return v5;
}

//----- (0202516C) --------------------------------------------------------
int __fastcall Function_202516c(int a1, int a2, int a3)
{
  int v3
  int v4
  int v5
  int v6
  char v8

  v3 = a3;
  v4 = a1 + 131716 + 12 * a2;
  MI_CpuFill8(&v8, 255, 0x14u);
  v5 = Function_2024888(v3, v4);
  return Function_2025a9c(*(uint *)(v4 + 8) + v5 - 20, (int)&v8, 20, v6);
}

//----- (020251A4) --------------------------------------------------------
int __fastcall GetSomeSizeOfVariableAreas(int a1)
{
  int v1
  uint v2

  v1 = a1;
  if ( a1 >= 38 )
    ErrorHandler();
  v2 = ((int (*)(void))TableForVariableAreas[4 * v1 + 2])();
  return v2 + 4 - ((v2 >> 31) + __ROR4__((v2 << 30) - (v2 >> 31), 30)) + 4;
}

//----- (020251DC) --------------------------------------------------------
uint __fastcall InitVariableAreaAdresses_20024(int a1)
{
  int v1
  int *v2
  int v3
  int v4
  uint result

  v1 = a1;
  v2 = TableForVariableAreas;
  v3 = 0;
  v4 = 0;
  do
  {
    if ( v4 != *v2 )
      ErrorHandler();
    *(uint *)v1 = *v2;
    *(uint *)(v1 + 4) = GetSomeSizeOfVariableAreas(v4);
    *(uint *)(v1 + 8) = v3;
    *(ushort *)(v1 + 12) = 0;
    *(ushort *)(v1 + 14) = v2[1];
    v3 += *(uint *)(v1 + 4);
    if ( v4 == 37 || v2[1] != v2[5] )
      v3 += 20;
    ++v4;
    v2 += 4;
    v1 += 16;
  }
  while ( v4 < 38 );
  result = 0x20000;
  if ( v3 > 0x20000 )
    result = ErrorHandler();
  return result;
}

//----- (02025258) --------------------------------------------------------
uint __fastcall Function_2025258(int a1, int a2)
{
  int v2
  int v3
  int v4
  int v5
  int v6
  int v7
  int v8
  uint result
  int v10
  int v11

  v10 = a1;
  v11 = 0;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = a1;
  v6 = a2;
  do
  {
    *(uchar *)v5 = v4;
    *(uint *)(v5 + 8) = 0;
    while ( v4 == *(ushort *)(v6 + 14) && v3 < 38 )
    {
      v7 = *(uint *)(v6 + 4);
      v6 += 16;
      *(uint *)(v5 + 8) += v7;
      ++v3;
    }
    ++v4;
    *(uint *)(v5 + 8) += 20;
    *(uchar *)(v5 + 1) = v11;
    *(uint *)(v5 + 4) = v2;
    *(uchar *)(v5 + 2) = (uint)(*(uint *)(v5 + 8) + 4095) >> 12;
    v11 += *(uchar *)(v5 + 2);
    v8 = v2 + *(uint *)(v5 + 8);
    v5 += 12;
    v2 = v8;
  }
  while ( v4 < 2 );
  if ( v11 != *(uchar *)(v10 + 13) + *(uchar *)(v10 + 14) )
    ErrorHandler();
  result = v11;
  if ( v11 > 32 )
    result = ErrorHandler();
  return result;
}

//----- (020252EC) --------------------------------------------------------
int __fastcall ClearAllVariableAreas(uint *a1, int a2)
{
  uint *v2
  int v3
  int *v4
  int v5
  int v6
  int result

  v2 = a1;
  v3 = a2;
  v4 = TableForVariableAreas;
  MIi_CpuClearFast(0, a1, 0x20000u);
  v5 = 0;
  do
  {
    v6 = *(uint *)(v3 + 8);
    MIi_CpuClearFast(0, (uint *)((char *)v2 + v6), *(uint *)(v3 + 4));
    ((void (__fastcall *)(int))v4[3])((int)v2 + v6);
    result = 38;
    ++v5;
    v3 += 16;
    v4 += 4;
  }
  while ( v5 < 38 );
  return result;
}