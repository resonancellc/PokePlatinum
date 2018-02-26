//----- (0223B140) --------------------------------------------------------
int __fastcall Function_223b140(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;

  LoadOverlay(11, 2, a3, a4);
  return LoadOverlay(12, 2, v4, v5);
}

//----- (0223B15C) --------------------------------------------------------
uchar *__fastcall Function_223b15c(uchar *result, char a2, char a3)
{
  *result = a3 - 10;
  result[2] = a2 - 10;
  result[1] = a3 + 10;
  result[3] = a2 + 10;
  return result;
}

//----- (0223B174) --------------------------------------------------------
uchar *__fastcall Function_223b174(uchar *result)
{
  *result = 0;
  result[2] = 0;
  result[1] = -64;
  result[3] = -1;
  return result;
}

//----- (0223B184) --------------------------------------------------------
uchar *__fastcall Function_223b184(uchar *result, int *a2, int a3, int a4)
{
  uchar *v4;
  int *v5;
  int v6;

  v6 = a4;
  v4 = result;
  v5 = a2;
  if ( a2 )
  {
    if ( a3 == 1 )
    {
      Function_200d4c4(a2, word_21BF6D8, word_21BF6DA);
      Function_200d550(v5, (ushort *)&v6 + 1, &v6);
      result = Function_223b174(v4);
    }
    else
    {
      Function_200d550(a2, (ushort *)&v6 + 1, &v6);
      result = Function_223b15c(v4, SBYTE2(v6), v6);
    }
  }
  return result;
}

//----- (0223B1E0) --------------------------------------------------------
uint **__fastcall Function_223b1e0(int a1)
{
  int v1;
  int v2;
  uint **result;

  v1 = 0;
  v2 = a1;
  do
  {
    result = *(uint ***)(v2 + 812);
    if ( result )
      result = (uint **)Function_200d5dc(result, -56, 16);
    ++v1;
    v2 += 16;
  }
  while ( v1 < 8 );
  return result;
}

//----- (0223B208) --------------------------------------------------------
int __fastcall Function_223b208(int a1)
{
  int v1;
  int v2;
  uchar *v3;
  int v4;
  int v5;
  int result;

  v1 = a1;
  v2 = 0;
  v3 = *(uchar **)(a1 + 8 * *(uint *)(a1 + 964) + 8);
  v4 = a1;
  do
  {
    if ( *v3 )
    {
      *(uchar *)(v4 + 808) = *v3;
      *(uchar *)(v4 + 809) = v3[1];
      *(uchar *)(v4 + 810) = v3[2];
      Function_223b52c(v1, (uchar)v2);
      Function_223b184(*(uchar **)(v4 + 816), *(int **)(v4 + 812), 0, v5);
      result = 804;
      *(uint *)(v4 + 804) = 1;
    }
    else
    {
      *(uint *)(v4 + 804) = 0;
      result = 808;
      *(uchar *)(v4 + 808) = 0;
    }
    ++v2;
    v3 += 3;
    v4 += 16;
  }
  while ( v2 < 8 );
  return result;
}

//----- (0223B278) --------------------------------------------------------
int __fastcall Function_223b278(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v7;
  int v8;

  v2 = a1;
  v3 = 0;
  v4 = a1;
  do
  {
    if ( *(uint *)(v4 + 804) != 1 )
    {
      v5 = 16 * v3;
      *(uchar *)(a1 + 16 * v3 + 808) = *(uchar *)(a1 + a2 + 1056);
      *(uchar *)(a1 + 809 + v5) = -66;
      *(uchar *)(a1 + 810 + v5) = 70;
      Function_20227a4(&v8, &v7);
      *(uchar *)(v2 + 809 + v5) = v8;
      *(uchar *)(v2 + 810 + v5) = v7;
      Function_223b52c(v2, (uchar)v3);
      Function_223b314(v2, (uchar)v3);
      *(uint *)(v2 + v5 + 804) = 1;
      return v3;
    }
    ++v3;
    v4 += 16;
  }
  while ( v3 < 8 );
  return 255;
}

//----- (0223B2F8) --------------------------------------------------------
int __fastcall Function_223b2f8(int a1)
{
  int v1;

  v1 = 0;
  do
  {
    if ( *(uint *)(a1 + 804) != 1 )
      return 1;
    ++v1;
    a1 += 16;
  }
  while ( v1 < 8 );
  return 0;
}

//----- (0223B314) --------------------------------------------------------
int __fastcall Function_223b314(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    result = *(uint *)(v2 + 804);
    if ( result == 1 )
    {
      if ( v4 == v3 )
      {
        result = Function_200d474(*(int **)(v2 + 812), 0);
      }
      else
      {
        v6 = Function_200d488(*(int **)(v2 + 812));
        if ( v6 )
          result = Function_200d474(*(int **)(v2 + 812), v6 + 2);
        else
          result = Function_200d474(*(int **)(v2 + 812), 1);
      }
    }
    ++v4;
    v2 += 16;
  }
  while ( v4 < 8 );
  return result;
}

//----- (0223B36C) --------------------------------------------------------
int __fastcall Function_223b36c(uint *a1, uint a2, int a3)
{
  uint v3;
  int *v4;
  int v5;
  int v6;
  int v7;

  v3 = a2;
  v4 = (int *)a1[55];
  v5 = a1[56];
  v6 = a3;
  Function_200cd7c(a1[58], 3u, v4, v5, 91, 293, 0, 1, 2, 21293);
  v7 = Function_2098140(v3);
  Function_200cbdc(v4, v5, 91, v7, 1, 2, v6 + 20000);
  Function_200ce0c(v4, v5, 91, 93, 1, 22093);
  return Function_200ce3c(v4, v5, 91, 1, 1, 23001);
}

//----- (0223B400) --------------------------------------------------------
int *__fastcall Function_223b400(int a1)
{
  int *result;
  int v2;
  char *v3;
  char *v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  char *v9;
  char *v10;
  int v11;
  int v12;
  int v13;
  uchar *v14;
  int v15;
  char *v16;
  char v17;
  char *v18;
  char *v19;
  int v20;
  char v21;
  uchar *v22;
  int v23;
  char *v24;
  int v25;
  char v26[24];
  char v27;
  char v28;
  char v29;
  char v30;
  char v31;

  v25 = a1;
  result = *(int **)(a1 + 608);
  if ( result )
  {
    v2 = 0;
    *(uint *)(v25 + 608) = 0;
    v3 = &v30;
    v4 = &v28;
    v5 = v25;
    do
    {
      *(uint *)v3 = 255;
      *(uint *)v4 = 255;
      v6 = *(int **)(v5 + 812);
      if ( v6 )
      {
        *(uint *)v3 = Function_200d488(v6);
        *(uint *)v4 = v2;
      }
      ++v2;
      v3 += 4;
      v4 += 4;
      v5 += 16;
    }
    while ( v2 < 8 );
    v7 = 0;
    do
    {
      v8 = 7;
      if ( v7 < 7 )
      {
        v9 = &v31;
        v10 = &v29;
        do
        {
          v11 = *(uint *)v9;
          v12 = *((uint *)v9 - 1);
          if ( v12 >= *(uint *)v9 )
          {
            v13 = *(uint *)v10;
            *(uint *)v9 = v12;
            *(uint *)v10 = *((uint *)v10 - 1);
            *((uint *)v9 - 1) = v11;
            *((uint *)v10 - 1) = v13;
          }
          --v8;
          v9 -= 4;
          v10 -= 4;
        }
        while ( v8 > v7 );
      }
      ++v7;
    }
    while ( v7 < 7 );
    v14 = (uchar *)v25;
    v15 = 0;
    v16 = &v27;
    do
    {
      ++v15;
      *v16 = v14[808];
      v16[1] = v14[809];
      v17 = v14[810];
      v14 += 16;
      v16[2] = v17;
      v16 += 3;
    }
    while ( v15 < 8 );
    v18 = &v27;
    v19 = v26;
    v20 = 24;
    do
    {
      v21 = *v18++;
      *v19++ = v21;
      --v20;
    }
    while ( v20 );
    v22 = (uchar *)v25;
    v23 = 0;
    v24 = &v28;
    do
    {
      if ( *(uint *)v24 == 255 )
      {
        v22[808] = 0;
        v22[809] = 0;
        result = (int *)810;
        v22[810] = 0;
      }
      else
      {
        v22[808] = v26[3 * *(uint *)v24];
        v22[809] = v26[3 * *(uint *)v24 + 1];
        v22[810] = v26[3 * *(uint *)v24 + 2];
        result = *(int **)(v25 + 16 * *(uint *)v24 + 812);
        if ( result )
          result = (int *)Function_200d474(result, v23);
      }
      ++v23;
      v24 += 4;
      v22 += 16;
    }
    while ( v23 < 8 );
  }
  return result;
}

//----- (0223B52C) --------------------------------------------------------
int __fastcall Function_223b52c(uint *a1, int a2)
{
  int v2;
  uint *v3;
  int v4;
  int v5;
  int result;
  int *v7;
  short v8;
  short v9;
  short v10;
  short v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;

  v2 = a2;
  v3 = (uint *)a1[55];
  v4 = a1[56];
  v5 = (int)&a1[4 * a2 + 201];
  if ( *(uint *)v5 == 1 )
  {
    ErrorHandler();
    result = 0;
  }
  else
  {
    Function_223b36c(a1, *(uchar *)(v5 + 4), a2);
    v8 = *(uchar *)(v5 + 5);
    v9 = *(uchar *)(v5 + 6);
    v10 = 0;
    v11 = 0;
    v14 = 2;
    v21 = 1;
    v13 = 0;
    v22 = 0;
    v12 = 0;
    v19 = -1;
    v20 = -1;
    Function_2098140(*(uchar *)(v5 + 4));
    v15 = v2 + 20000;
    v16 = 21293;
    v17 = 22093;
    v18 = 23001;
    v7 = Function_200ce6c(v3, v4, &v8);
    *(uint *)(v5 + 8) = v7;
    Function_200d330(v7);
    result = 1;
  }
  return result;
}

//----- (0223B5C4) --------------------------------------------------------
int __fastcall Function_223b5c4(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v9;
  int v10;

  v3 = a3;
  v4 = a1;
  v5 = 16 * a3;
  v6 = a1 + 16 * a3;
  v7 = *(uint *)(v6 + 804);
  if ( !v7 )
    return 1;
  switch ( (uchar)v7 )
  {
    case 0:
      if ( *(uint *)(a1 + 212) == 255 )
      {
        *(uint *)(a1 + 212) = v3;
        Function_223b314(a1, v3);
      }
      break;
    case 1:
    case 3:
      if ( *(uint *)(a1 + 212) == 255 )
      {
        v9 = Function_223b6c4();
        Function_223b184(*(uchar **)(v4 + v5 + 816), *(int **)(v4 + v5 + 812), 0, v10);
        if ( !v9 )
          Function_223b704(v4, v3);
        *(uint *)(v4 + 212) = 255;
      }
      break;
    case 2:
      if ( *(uint *)(a1 + 212) == v3 )
      {
        Function_223b184(*(uchar **)(v6 + 816), *(int **)(v6 + 812), 1, v6);
        Function_223b758(v4, v3);
        Function_223b7d4(v4, v3);
      }
      break;
    default:
      ErrorHandler();
      break;
  }
  return 1;
}

//----- (0223B678) --------------------------------------------------------
int __fastcall Function_223b678(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    result = *(uint *)(v3 + 804);
    if ( result == 1 )
      result = Function_223b704(v1, v2);
    ++v2;
    v3 += 16;
  }
  while ( v2 < 8 );
  return result;
}

//----- (0223B69C) --------------------------------------------------------
uint __fastcall Function_223b69c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint result;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    result = *(uint *)(v2 + 804);
    if ( result == 1 )
      result = Function_200d3f4(*(uint **)(v2 + 812), v3);
    ++v4;
    v2 += 16;
  }
  while ( v4 < 8 );
  return result;
}

//----- (0223B6C4) --------------------------------------------------------
BOOL __fastcall Function_223b6c4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v6;

  v6 = a4;
  v4 = a1 + 16 * a2;
  if ( !*(uint *)(v4 + 804) )
    return 1;
  Function_200d550(*(int **)(v4 + 812), (ushort *)&v6 + 1, &v6);
  return ((int (__fastcall *)(uint, uint, int, int))dword_2237E54[0])(
           SHIWORD(v6),
           (short)v6,
           190,
           70) <= 60;
}

//----- (0223B704) --------------------------------------------------------
uchar *__fastcall Function_223b704(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = 16 * a2;
  v5 = a1 + 808;
  Function_2098140(*(uchar *)(a1 + 808 + 16 * a2));
  Function_200d070(*(uint *)(v2 + 224), v3 + 20000);
  Function_200d0f4(*(uint *)(v2 + 812 + v4));
  *(uint *)(v2 + 812 + v4) = 0;
  v6 = v2 + v4;
  *(uint *)(v6 + 804) = 0;
  *(uchar *)(v5 + v4) = 0;
  *(uchar *)(v6 + 809) = 0;
  *(uchar *)(v6 + 810) = 0;
  return Function_223b15c(*(uchar **)(v2 + v4 + 816), 0, 0);
}

//----- (0223B758) --------------------------------------------------------
int __fastcall Function_223b758(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int result;

  v4 = a1;
  v5 = a2;
  if ( Function_223b6c4(a1, a2, a3, a4) )
    result = Function_200d810(*(int **)(v4 + 16 * v5 + 812), 0);
  else
    result = Function_200d810(*(int **)(v4 + 16 * v5 + 812), 1);
  return result;
}

//----- (0223B78C) --------------------------------------------------------
int __fastcall Function_223b78c(int a1)
{
  uchar *v1;
  int v2;

  v1 = *(uchar **)(a1 + 8 * *(uint *)(a1 + 964) + 8);
  v2 = 0;
  do
  {
    if ( *(uchar *)(a1 + 808) != *v1
      || *(uchar *)(a1 + 809) != v1[1]
      || *(uchar *)(a1 + 810) != v1[2] )
    {
      return 1;
    }
    ++v2;
    v1 += 3;
    a1 += 16;
  }
  while ( v2 < 8 );
  return 0;
}

//----- (0223B7D4) --------------------------------------------------------
int __fastcall Function_223b7d4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;
  int v8;

  v8 = a4;
  v4 = a1;
  v5 = 16 * a2;
  Function_200d550(*(int **)(a1 + 16 * a2 + 812), (ushort *)&v8 + 1, &v8);
  v6 = v4 + v5;
  *(uchar *)(v6 + 809) = BYTE2(v8);
  result = 810;
  *(uchar *)(v6 + 810) = v8;
  return result;
}

//----- (0223B808) --------------------------------------------------------
int __fastcall Function_223b808(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int *v6;
  char *v7;
  char v8;
  char v10;
  int v11;

  v11 = a4;
  v4 = a1;
  v5 = 0;
  v6 = v4;
  v7 = &v10;
  do
  {
    ++v5;
    *v7 = *((uchar *)v6 + 808);
    v7[1] = *((uchar *)v6 + 809);
    v8 = *((uchar *)v6 + 810);
    v6 += 4;
    v7[2] = v8;
    v7 += 3;
  }
  while ( v5 < 8 );
  return Function_202ca40(*(uint *)(*v4 + 32), (int)&v10, v4[241]);
}

//----- (0223B848) --------------------------------------------------------
uchar *__fastcall Function_223b848(uchar *result, uchar *a2)
{
  int v2;
  char v3;

  v2 = 0;
  do
  {
    ++v2;
    *result = a2[808];
    result[1] = a2[809];
    v3 = a2[810];
    a2 += 16;
    result[2] = v3;
    result += 3;
  }
  while ( v2 < 8 );
  return result;
}

//----- (0223B870) --------------------------------------------------------
int __fastcall Function_223b870(uchar *a1, int *a2, int a3, int a4)
{
  uchar *v4;
  int v5;
  char v6;
  int result;
  char v8;
  short v9;
  int v10;

  v10 = a4;
  v4 = a1;
  v5 = a3;
  v6 = a4;
  Function_200d550(a2, &v9, &v8);
  *v4 = v8 - v6;
  v4[1] = v8 + v6;
  v4[2] = v9 - v5;
  result = v9 + v5;
  v4[3] = result;
  return result;
}

//----- (0223B8A8) --------------------------------------------------------
uint *__fastcall Function_223b8a8(int a1)
{
  *(uint *)(a1 + 564) = Function_2012744(2, 0x35u);
  return Function_2002bb8(2, 0x35u);
}

//----- (0223B8C4) --------------------------------------------------------
uint __fastcall Function_223b8c4(int a1)
{
  int v1;

  v1 = a1;
  Function_2002c60(2);
  Function_2012870(*(int **)(v1 + 568));
  Function_201ee28(v1 + 576);
  Function_2012870(*(int **)(v1 + 572));
  Function_201ee28(v1 + 588);
  return Function_20127bc(*(uint *)(v1 + 564));
}

//----- (0223B904) --------------------------------------------------------
int __fastcall Function_223b904(int a1)
{
  return Function_200cd7c(*(uint *)(a1 + 232), 3u, *(int **)(a1 + 220), *(uint *)(a1 + 224), 14, 7, 0, 1, 2, 30000);
}

//----- (0223B940) --------------------------------------------------------
int __fastcall Function_223b940(int a1)
{
  int v1;

  v1 = a1;
  Function_223b904(a1);
  Function_223b98c(v1);
  return Function_223b98c(v1);
}

//----- (0223B96C) --------------------------------------------------------
int __fastcall Function_223b96c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_20129d0(*(uint **)(a1 + 568), a2);
  return Function_20129d0(*(uint **)(v2 + 572), v3);
}

//----- (0223B98C) --------------------------------------------------------
uint __fastcall Function_223b98c(int a1, int a2, int a3, int a4, char a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  ushort **v9;
  ushort *v10;
  int v11;
  int v12;
  char v14;
  int v15;
  char *v16;
  int v17;
  uchar *v18;
  int v19;
  int v20;
  uint v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  v9 = (ushort **)LoadFromMsgNARC(0, 26, 8, 0x35u);
  v10 = Function_200b1ec_CallMsgDecrypt(v9, v6 + 5);
  Function_201a7a0((int)&v14);
  Function_201a870(*(uint **)(v5 + 228), (int)&v14, 10, 2, 0, 0);
  Function_201d78c((int)&v14, 2);
  v11 = Function_2012898((int)&v14, 2, 0x35u);
  Function_201ed94(v11, 1, 2, v5 + 576 + 12 * v6);
  v15 = *(uint *)(v5 + 564);
  v16 = &v14;
  v17 = Function_200d9b0(*(uint *)(v5 + 224));
  v18 = Function_200d04c(*(uint *)(v5 + 224), 30000);
  v19 = 0;
  v20 = *(uint *)(v5 + 12 * v6 + 580);
  v21 = v7 - ((uint)Function_2002d7c(2, (int)v10, 0) >> 1);
  v23 = 1;
  v24 = 40;
  v25 = 2;
  v26 = 53;
  v5 += 568;
  v22 = v8 + 192;
  v6 *= 4;
  *(uint *)(v5 + v6) = Function_20127e8(&v15);
  Function_2012ac0(*(uint **)(v5 + v6), a5);
  Function_20237bc_FreeMsg((int)v10, v12);
  Function_200b190((ushort *)v9);
  return Function_201a8fc((int)&v14);
}

//----- (0223BA90) --------------------------------------------------------
int __fastcall Function_223ba90(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int result;
  int v9;
  int v10;
  int v11;

  v2 = a1;
  v10 = 0;
  v9 = 0;
  v3 = 0;
  v4 = 0;
  do
  {
    v5 = a1 + v3++;
    *(uchar *)(v5 + 1056) = 0;
  }
  while ( v3 < 8 );
  v11 = 8 * a2;
  do
  {
    v6 = 0;
    v7 = v2;
    do
    {
      result = Function_202ca94(*(uchar **)(v7 + 8), v4);
      if ( result )
        break;
      ++v6;
      v7 += 8;
    }
    while ( v6 < 12 );
    if ( *(uchar *)(v2 + v4 + 128) || result == 1 )
    {
      result = v11;
      if ( ++v9 > v11 )
      {
        *(uchar *)(v2 + v10 + 1056) = v4 + 1;
        result = v10 + 1;
        v10 = result;
        if ( result >= 8 )
          break;
      }
    }
    ++v4;
  }
  while ( v4 < 81 );
  return result;
}

//----- (0223BB04) --------------------------------------------------------
int __fastcall Function_223bb04(uint *a1)
{
  uint *v1;
  int *v2;
  int v3;
  int v4;
  int v5;
  int v7;

  v1 = a1;
  v2 = (int *)a1[55];
  v3 = a1[56];
  v4 = 0;
  v7 = a1[58];
  do
  {
    v5 = Function_2098140(*((uchar *)v1 + v4 + 1056));
    Function_200cbdc(v2, v3, 91, v5, 1, 2, v4++ + 25000);
  }
  while ( v4 < 8 );
  Function_200cd7c(v7, 3u, v2, v3, 91, 293, 0, 1, 2, 26292);
  Function_200ce0c(v2, v3, 91, 180, 1, 27180);
  return Function_200ce3c(v2, v3, 91, 88, 1, 28088);
}

//----- (0223BBAC) --------------------------------------------------------
uint __fastcall Function_223bbac(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int **v7;
  short *v8;
  char *v9;
  int v10;
  short v11;
  int v12;
  char *v13;
  uint result;
  uint *v15;
  char v16;
  short v17;
  short v18;
  short v19;
  short v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;

  v32 = a4;
  v4 = a1;
  v5 = 0;
  v15 = *(uint **)(a1 + 220);
  v6 = *(uint *)(a1 + 224);
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 60;
  v23 = 2;
  v30 = 1;
  v28 = -1;
  v29 = -1;
  v31 = 0;
  v25 = 26292;
  v22 = 0;
  v26 = 27180;
  v27 = 28088;
  v7 = (int **)(a1 + 996);
  do
  {
    v24 = v5++ + 25000;
    *v7 = Function_200ce6c(v15, v6, &v17);
    ++v7;
  }
  while ( v5 < 8 );
  v8 = &word_223ED3C;
  v9 = &v16;
  v10 = 16;
  do
  {
    v11 = *v8;
    ++v8;
    *(ushort *)v9 = v11;
    v9 += 2;
    --v10;
  }
  while ( v10 );
  v12 = 0;
  v13 = &v16;
  do
  {
    Function_200d4c4(*(int **)(v4 + 996), *(short *)v13, (short)(*((ushort *)v13 + 1) - 1));
    Function_200d330(*(int **)(v4 + 996));
    result = Function_200d3cc(*(int **)(v4 + 996), 0);
    ++v12;
    v13 += 4;
    v4 += 4;
  }
  while ( v12 < 8 );
  return result;
}

//----- (0223BC70) --------------------------------------------------------
uint __fastcall Function_223bc70(int a1)
{
  int v1;
  int v2;
  int v3;
  uint result;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    Function_200d070(*(uint *)(v1 + 224), v2 + 25000);
    result = Function_200d0f4(*(uint *)(v3 + 996));
    ++v2;
    v3 += 4;
  }
  while ( v2 < 8 );
  return result;
}

//----- (0223BCA0) --------------------------------------------------------
void __fastcall Function_223bca0(int *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int *v6;
  int v7;

  v2 = 0;
  v6 = a1;
  v7 = a2;
  v3 = 0;
  v4 = a2;
  v5 = a2;
  do
  {
    if ( *(uint *)(v4 + 324) && ((int (__fastcall *)(int))dword_221F800[6420])(v5) == 1 )
      v2 = 1;
    ++v3;
    v4 += 4;
    v5 += 36;
  }
  while ( v3 < 8 );
  if ( ((int (__fastcall *)(int))dword_221F800[6405])(v7 + 288) == 1 )
  {
    v2 = 1;
    Function_2019184(*(uint *)(v7 + 356), 5u, 0, *(short *)(v7 + 288));
    Function_2019184(*(uint *)(v7 + 356), 5u, 3u, *(short *)(v7 + 290));
  }
  if ( !v2 )
  {
    **(uint **)(v7 + 364) = 0;
    free(v7);
    Call_RemoveTaskFromTaskList(v6);
  }
}

//----- (0223BD30) --------------------------------------------------------
uint *__fastcall Function_223bd30(int a1, short a2, ushort a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  short v8;
  short v9;
  int v11;
  short v12;
  ushort v13;
  int v14;
  char v15;
  short v16;
  int v17;

  v17 = a4;
  v12 = a2;
  v11 = a1;
  v13 = a3;
  v14 = malloc(0x35u, 368);
  *(uint *)(v14 + 356) = *(uint *)(v11 + 228);
  v4 = v14;
  v5 = v14;
  v6 = v11;
  v7 = 0;
  do
  {
    if ( *(uint *)(v6 + 804) )
    {
      *(uint *)(v4 + 324) = *(uint *)(v6 + 812);
      Function_200d550(*(int **)(v4 + 324), &v16, &v15);
      ((void (__fastcall *)(int))dword_221F800[6386])(v5);
      ((void (__fastcall *)(int, uint))dword_221F800[6420])(v5, *(uint *)(v4 + 324));
      ((void (__fastcall *)(int, uint))dword_221F800[6420])(v5, *(uint *)(v4 + 324));
    }
    else
    {
      *(uint *)(v4 + 324) = 0;
    }
    ++v7;
    v6 += 16;
    v4 += 4;
    v5 += 36;
  }
  while ( v7 < 8 );
  v8 = Function_20192ec(*(uint *)(v14 + 356), 5);
  v9 = Function_20192f8(*(uint *)(v14 + 356), 5);
  ((void (__fastcall *)(int, uint, uint, uint, uint, uint))dword_221F800[6386])(
    v14 + 288,
    v8,
    (short)(v8 - 56 * v12),
    v9,
    (short)(v9 + 16 * v12),
    v13);
  *(uint *)(v14 + 364) = v11 + 600;
  **(uint **)(v14 + 364) = 1;
  return AddTaskToTaskList1((int)Function_223bca0, v14, 0x1000u);
}

//----- (0223BE6C) --------------------------------------------------------
int Function_223be6c()
{
  return Function_2024220(0x35u, 0, 2, 0, 2, (void (*)(void))Function_223be8c);
}

//----- (0223BE8C) --------------------------------------------------------
int *Function_223be8c()
{
  int *result;

  Function_201ff0c(1u, 1);
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 1;
  GFX_CONTROL &= 0xCFFDu;
  GFX_CONTROL = GFX_CONTROL & 0xCFFF | 0x10;
  GFX_CONTROL &= 0xCFFBu;
  GFX_CONTROL = GFX_CONTROL & 0xCFFF | 8;
  GFX_CONTROL &= 0xCFDFu;
  G3X_SetFog(0, 0, 0, 0);
  G3X_SetClearColor(0, 0, 0x7FFF, 63, 0);
  result = &GFX_VIEWPORT;
  GFX_VIEWPORT = -1073807360;
  return result;
}

//----- (0223BF10) --------------------------------------------------------
int Function_223bf10()
{
  int v0;
  int v1;

  v0 = Function_20a5a2c();
  v1 = Function_20a5a3c();
  if ( !v0 )
    ErrorHandler();
  if ( !v1 )
    ErrorHandler();
  return Function_2014000();
}

//----- (0223BF50) --------------------------------------------------------
int Function_223bf50()
{
  int v0;
  int v1;
  int v2;
  int v3;

  Call_G3X_Reset();
  if ( Function_201469c() > 0 )
  {
    v0 = Call_G3X_Reset();
    Function_20a73c0(v0, v1, v2, v3);
  }
  Function_20146c0();
  return Function_20241bc(1, 0);
}

//----- (0223BF74) --------------------------------------------------------
int __fastcall Function_223bf74(uint *a1, int a2, uchar a3, int a4, int a5)
{
  int v5;
  char v6;
  uchar v7;
  int v8;
  int v9;
  int *v10;
  ushort *v11;
  int v12;
  int result;
  uint *v14;
  int v15;
  int v16;
  ushort **v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  char v24;
  char v25;
  char v26;
  char v27;
  int v28;

  v28 = a4;
  v15 = a2;
  v14 = a1;
  v7 = a3;
  v16 = a4;
  switch ( (uchar)Function_223d45c(a4, a5) )
  {
    case 0u:
      v18 = 0;
      v19 = 4;
      v6 = 13;
      v5 = 6;
      v20 = 1;
      break;
    case 1u:
      v18 = 2;
      v19 = 0;
      v20 = 4;
      v6 = 11;
      v5 = 8;
      v21 = 1;
      break;
    case 2u:
      v18 = 3;
      v19 = 0;
      v20 = 4;
      v6 = 11;
      v5 = 8;
      v21 = 1;
      break;
    case 3u:
      v18 = 2;
      v19 = 0;
      v20 = 4;
      v6 = 11;
      v5 = 8;
      v21 = 1;
      break;
    default:
      break;
  }
  v8 = v5 / 2;
  Function_201a7a0(v15);
  Function_201a7e8(v14, v15, v7, 21, v6, 9u, v5, 14, 166);
  *(uint *)(v16 + 412) = Function_2013a04(v5 / 2, 0x35u);
  v9 = 0;
  v17 = (ushort **)LoadFromMsgNARC(0, 26, 8, 0x35u);
  if ( v5 / 2 > 0 )
  {
    v10 = &v18;
    do
    {
      v11 = Function_200b1ec_CallMsgDecrypt(v17, dword_223EF3C[2 * *v10]);
      Function_2013a6c(*(uint **)(v16 + 412), (int)v11, dword_223EF3C[2 * *v10 + 1], 8 * *v10);
      Function_20237bc_FreeMsg((int)v11, v12);
      ++v9;
      ++v10;
    }
    while ( v9 < v8 );
  }
  Function_200b190((ushort *)v17);
  v22 = *(uint *)(v16 + 412);
  v24 = 0;
  v23 = v15;
  v25 = 1;
  v26 = v8;
  v27 &= 0xF0u;
  v27 &= 0xCFu;
  v27 = v27 & 0x3F | 0x40;
  Function_200dc48(v15, 1, 31, 0xDu);
  result = Function_2001b7c(&v22, 8, 0, 0, 0x35u, 2);
  *(uint *)(v16 + 416) = result;
  return result;
}

//----- (0223C0EC) --------------------------------------------------------
int __fastcall Function_223c0ec(uint a1, ushort *a2, ushort *a3)
{
  int result;

  *a2 = 56 * ((a1 >> 31) + __ROR4__((a1 << 30) - (a1 >> 31), 30)) + 40;
  result = 53 * ((int)a1 >> 2) + 27;
  *a3 = result;
  return result;
}

//----- (0223C110) --------------------------------------------------------
int __fastcall Function_223c110(uint *a1)
{
  int *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = (int *)a1[55];
  v2 = a1[56];
  v3 = a1[58];
  v4 = Function_2079fd0();
  Function_200cd7c(v3, 2u, v1, v2, 19, v4, 0, 3, 1, 16000);
  v5 = Function_2079fdc();
  Function_200ce0c(v1, v2, 19, v5, 0, 17000);
  v6 = Function_2079fe8();
  return Function_200ce3c(v1, v2, 19, v6, 0, 18000);
}

//----- (0223C188) --------------------------------------------------------
int __fastcall Function_223c188(int **a1)
{
  int **v1;
  int *v2;
  int v3;
  int result;
  int **v5;
  int *v6;
  int v7;
  uint v8;
  int v9;
  int v10;
  char v11;
  int v12;
  short v13;
  short v14;
  short v15;
  short v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;

  v1 = a1;
  v2 = *a1;
  v3 = 0;
  result = **a1;
  if ( result > 0 )
  {
    v12 = 0;
    v5 = v1;
    do
    {
      v6 = (int *)v2[v12 + 1];
      v7 = Function_2079d80();
      Function_200d888(v1[55], (int)v1[56], 19, v7, 0, 1, v3 + 15000);
      v13 = 0;
      v14 = 0;
      v15 = 0;
      v16 = 0;
      v17 = 10;
      v18 = 0;
      v19 = 1;
      v26 = 2;
      v27 = 0;
      v20 = v3 + 15000;
      v21 = 16000;
      v22 = 17000;
      v23 = 18000;
      v24 = -1;
      v25 = -1;
      v5[191] = Function_200ce6c((uint *)v1[55], (int)v1[56], &v13);
      v8 = GetPkmnData(v6, 5u, 0);
      v9 = GetPkmnData(v6, 0x4Cu, 0);
      v10 = GetPkmnData(v6, 0x70u, 0);
      v11 = Function_2079edc(v8, v10, v9);
      Function_2021f24(*v5[191], v11);
      Function_200d364(v5[191], 1u);
      v2 = *v1;
      ++v12;
      result = **v1;
      ++v3;
      ++v5;
    }
    while ( v3 < **v1 );
  }
  return result;
}

//----- (0223C288) --------------------------------------------------------
int __fastcall Function_223c288(int **a1, int a2, int a3, int a4)
{
  int **v4;
  int v5;
  int result;
  int **v7;
  int v8;
  int **v9;
  int *v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a1;
  v5 = 0;
  result = **a1;
  if ( result > 0 )
  {
    v7 = v4;
    do
    {
      Function_200d3f4((uint *)v7[191], 0);
      ++v5;
      result = **v4;
      ++v7;
    }
    while ( v5 < result );
  }
  v8 = 0;
  v9 = v4;
  do
  {
    v10 = v9[1];
    if ( v10 != (int *)255 )
    {
      Function_223c0ec(v8, (ushort *)&v12 + 1, &v12);
      v11 = (int)&v4[(uint)v10];
      Function_200d4c4(*(int **)(v11 + 764), (short)(HIWORD(v12) - 16), (short)(v12 + 12));
      result = Function_200d3f4(*(uint **)(v11 + 764), 1);
    }
    ++v8;
    v9 += 2;
  }
  while ( v8 < 12 );
  return result;
}

//----- (0223C304) --------------------------------------------------------
int __fastcall Function_223c304(int **a1)
{
  int **v1;
  int v2;
  int result;
  int **v4;

  v1 = a1;
  v2 = 0;
  result = **a1;
  if ( result > 0 )
  {
    v4 = v1;
    do
    {
      Function_200d330(v4[191]);
      ++v2;
      result = **v1;
      ++v4;
    }
    while ( v2 < result );
  }
  return result;
}

//----- (0223C32C) --------------------------------------------------------
int __fastcall Function_223c32c(int **a1)
{
  int **v1;
  int v2;
  int result;
  int **v4;

  v1 = a1;
  v2 = 0;
  result = **a1;
  if ( result > 0 )
  {
    v4 = v1;
    do
    {
      Function_200d0f4((int)v4[191]);
      ++v2;
      result = **v1;
      ++v4;
    }
    while ( v2 < result );
  }
  return result;
}

//----- (0223C354) --------------------------------------------------------
int __fastcall Function_223c354(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  v4 = a1;
  do
  {
    *(uint *)(v4 + 616) = Function_223d430(*(uint *)(v3 + 8));
    *(uint *)(v4 + 612) = *(uint *)(v3 + 4);
    result = *(uint *)(v4 + 616);
    if ( !result )
    {
      result = *(uint *)(v4 + 612);
      if ( result != 255 )
        result = Function_223e91c(v1, v2);
    }
    ++v2;
    v3 += 8;
    v4 += 12;
  }
  while ( v2 < 12 );
  return result;
}

//----- (0223C398) --------------------------------------------------------
uint __fastcall Function_223c398(int a1, int a2, int a3, int a4)
{
  int v4;
  uint result;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;

  v25 = a4;
  v4 = a1;
  *(uint *)(a1 + 8) = Function_200c6e4(0x35u);
  v17 = 0;
  v18 = 128;
  v19 = 0;
  v20 = 32;
  v21 = 0;
  v22 = 128;
  v23 = 0;
  v24 = 32;
  v12 = 96;
  v13 = 0x10000;
  v14 = 0x4000;
  v15 = 1048592;
  v16 = 16;
  Function_200c73c(*(uint **)(v4 + 8), &v17, &v12, 32);
  v6 = 96;
  v7 = 32;
  v8 = 64;
  v9 = 64;
  v10 = 16;
  v11 = 16;
  *(uint *)(v4 + 12) = Function_200c704(*(uint **)(v4 + 8));
  if ( !Function_200c7c0(*(int **)(v4 + 8), *(int ***)(v4 + 12), 128) )
    ErrorHandler();
  result = Function_200cb30(*(uint **)(v4 + 8), *(uint *)(v4 + 12), &v6);
  if ( !result )
    result = ErrorHandler();
  return result;
}

//----- (0223C424) --------------------------------------------------------
uint __fastcall Function_223c424(int a1)
{
  int v1;

  v1 = a1;
  Function_200d0b0(*(uint *)(a1 + 8), *(int ***)(a1 + 12));
  return Function_200c8d4(*(uint *)(v1 + 8));
}

//----- (0223C438) --------------------------------------------------------
int __fastcall Function_223c438(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_200cc3c(*(uint **)(a1 + 220), *(uint *)(a1 + 224), a2, 0x109u, 1, 2, 45000);
  Function_200ce24(*(uint **)(v2 + 220), *(uint *)(v2 + 224), v3, 0xADu, 1, 47000);
  return Function_200ce54(*(uint **)(v2 + 220), *(uint *)(v2 + 224), v3, 0x51u, 1, 48000);
}

//----- (0223C4AC) --------------------------------------------------------
int __fastcall Function_223c4ac(int a1)
{
  int *v1;
  int v2;
  char *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  char *v8;
  int v9;
  int result;
  char v11;
  short v12;
  short v13;
  short v14;
  short v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;

  v1 = dword_223ED5C;
  v2 = a1;
  v3 = &v11;
  v4 = 6;
  do
  {
    v5 = *v1;
    v6 = v1[1];
    v1 += 2;
    *(uint *)v3 = v5;
    *((uint *)v3 + 1) = v6;
    v3 += 8;
    --v4;
  }
  while ( v4 );
  v7 = 0;
  v8 = &v11;
  v9 = v2;
  do
  {
    v12 = *(uint *)v8;
    v13 = *((uint *)v8 + 1);
    v14 = 0;
    v15 = 0;
    v16 = 40;
    v17 = 2;
    v18 = 2;
    v25 = 1;
    v26 = 0;
    v19 = 45000;
    v20 = 26290;
    v21 = 47000;
    v22 = 48000;
    v23 = -1;
    v24 = -1;
    *(uint *)(v9 + 788) = Function_200ce6c(*(uint **)(v2 + 220), *(uint *)(v2 + 224), &v12);
    result = Function_200d7d4(*(int **)(v9 + 788), *((uint *)v8 + 2));
    ++v7;
    v8 += 12;
    v9 += 4;
  }
  while ( v7 < 4 );
  return result;
}

//----- (0223C544) --------------------------------------------------------
uint __fastcall Function_223c544(int a1)
{
  int v1;
  uint result;
  int v3;

  v1 = a1;
  result = *(uint *)(a1 + 216);
  if ( result )
  {
    v3 = 0;
    do
    {
      result = Function_200d330(*(int **)(v1 + 788));
      ++v3;
      v1 += 4;
    }
    while ( v3 < 4 );
  }
  return result;
}

//----- (0223C568) --------------------------------------------------------
uint __fastcall Function_223c568(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint result;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    result = Function_200d3f4(*(uint **)(v2 + 788), v3);
    ++v4;
    v2 += 4;
  }
  while ( v4 < 4 );
  return result;
}

//----- (0223C588) --------------------------------------------------------
uint __fastcall Function_223c588(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = a1;
  v2 = 0;
  do
  {
    result = Function_200d0f4(*(uint *)(v1 + 788));
    ++v2;
    v1 += 4;
  }
  while ( v2 < 4 );
  return result;
}

//----- (0223C5A4) --------------------------------------------------------
int __fastcall Function_223c5a4(uint *a1, int a2, int a3, uint a4, uint a5, uint a6, uint a7, int a8, uint a9, int a10, int a11)
{
  int v11;
  uint *v12;
  int v13;

  v11 = a3;
  v12 = a1;
  v13 = a2;
  Function_200cc3c(a1, a2, a11, a4, 1, a8, a4 + 11000);
  Function_200cdc4(v11, a9, v12, v13, a11, a5, 0, a10, a8, a5 + 11000);
  Function_200ce24(v12, v13, a11, a6, 1, a6 + 11000);
  return Function_200ce54(v12, v13, a11, a7, 1, a7 + 11000);
}

//----- (0223C61C) --------------------------------------------------------
int __fastcall Function_223c61c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  short v9[2];
  short v10[2];
  short v11[2];
  short v12[2];
  short v13;
  short v14;
  short v15;
  short v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;

  v28 = a4;
  v4 = a1;
  v5 = a2;
  Function_223c5a4(
    *(uint **)(v4 + 220),
    *(uint *)(v4 + 224),
    *(uint *)(v4 + 232),
    0x10Au,
    0x11Eu,
    0xAEu,
    0x52u,
    1,
    2u,
    1,
    a2);
  Function_223c5a4(
    *(uint **)(v4 + 220),
    *(uint *)(v4 + 224),
    *(uint *)(v4 + 232),
    0x113u,
    0x123u,
    0xB3u,
    0x57u,
    1,
    2u,
    1,
    v5);
  v6 = 0;
  v7 = v4;
  do
  {
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = *(uint *)(v7 + 616);
    v17 = 40 - v6;
    v18 = 0;
    v19 = 1;
    v26 = 2;
    v27 = 0;
    v20 = 11266;
    v21 = 11286;
    v22 = 11174;
    v23 = 11082;
    v24 = -1;
    v25 = -1;
    *(uint *)(v7 + 620) = Function_200ce6c(*(uint **)(v4 + 220), *(uint *)(v4 + 224), &v13);
    Function_223c0ec(v6, v12, v11);
    Function_200d4c4(*(int **)(v7 + 620), v12[0], v11[0]);
    ++v6;
    v7 += 12;
  }
  while ( v6 < 12 );
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 20;
  v18 = 0;
  v27 = 0;
  v19 = 1;
  v21 = 11291;
  v20 = 11275;
  v22 = 11179;
  v23 = 11087;
  v26 = 2;
  v24 = -1;
  v25 = -1;
  *(uint *)(v4 + 756) = Function_200ce6c(*(uint **)(v4 + 220), *(uint *)(v4 + 224), &v13);
  *(uint *)(v4 + 760) = Function_200ce6c(*(uint **)(v4 + 220), *(uint *)(v4 + 224), &v13);
  Function_223c0ec(*(uint *)(v4 + 964), v10, v9);
  Function_200d4c4(*(int **)(v4 + 756), v10[0], v9[0]);
  Function_200d4c4(*(int **)(v4 + 760), v10[0], v9[0]);
  Function_200d474(*(int **)(v4 + 760), 25);
  Function_200d364(*(int **)(v4 + 756), 0);
  return Function_200d364(*(int **)(v4 + 760), 0);
}

//----- (0223C7E0) --------------------------------------------------------
int *__fastcall Function_223c7e0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int *result;

  v1 = a1;
  Function_223c354(a1);
  Function_223c288((int **)v1, v2, v3, v4);
  v5 = 0;
  do
  {
    result = *(int **)(v1 + 620);
    if ( result )
      result = (int *)Function_200d364(result, *(uint *)(v1 + 616));
    ++v5;
    v1 += 12;
  }
  while ( v5 < 12 );
  return result;
}

//----- (0223C80C) --------------------------------------------------------
int *__fastcall Function_223c80c(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v12;
  int v13;
  int v14;
  char v15;
  int v16;

  v16 = a4;
  v4 = a1;
  v5 = 2 * a2;
  v6 = a1[2 * a2 + 1];
  v7 = 2 * a3;
  v12 = a2;
  v8 = v4[2 * a3 + 1];
  if ( v6 != 255 )
  {
    v14 = a3 + 1;
    SetPkmnData(*(uint *)(*v4 + 4 * v6 + 4), 162, (ushort *)&v14);
  }
  if ( v8 != 255 )
  {
    v13 = v12 + 1;
    SetPkmnData(*(uint *)(*v4 + 4 * v8 + 4), 162, (ushort *)&v13);
  }
  v9 = (int)(v4 + 1);
  v10 = v4[v5 + 1];
  *(uint *)(v9 + v5 * 4) = v4[v7 + 1];
  *(uint *)(v9 + v7 * 4) = v10;
  Function_202ca10(v4[v5 + 2], (uint)&v15);
  Function_202ca10(v4[v7 + 2], v4[v5 + 2]);
  Function_202ca10((int)&v15, v4[v7 + 2]);
  return Function_223c7e0((int)v4);
}

//----- (0223C88C) --------------------------------------------------------
uint __fastcall Function_223c88c(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    Function_200d330(*(int **)(v3 + 620));
    ++v2;
    v3 += 12;
  }
  while ( v2 < 12 );
  Function_200d330(*(int **)(v1 + 756));
  return Function_200d330(*(int **)(v1 + 760));
}

//----- (0223C8BC) --------------------------------------------------------
uint __fastcall Function_223c8bc(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    Function_200d0f4(*(uint *)(v3 + 620));
    ++v2;
    v3 += 12;
  }
  while ( v2 < 12 );
  Function_200d0f4(*(uint *)(v1 + 756));
  return Function_200d0f4(*(uint *)(v1 + 760));
}

//----- (0223C8EC) --------------------------------------------------------
uint __fastcall Function_223c8ec(uint *a1, int a2, int a3)
{
  int v3;
  int v4;
  uint *v5;
  int v6;
  int v7;

  v3 = a3;
  v4 = a2;
  v5 = a1;
  Function_200dd0c(a1, 1u, 1, 15, a3, 53);
  v6 = Function_200dd08(v3);
  Function_2003050(v4, 38, v6, 53, 0, 32, 0xC0u);
  Function_200daa4(v5, 1u, 31, 13, 0, 53);
  v7 = Function_200daa0();
  Function_2003050(v4, 38, v7, 53, 0, 32, 0xD0u);
  return Function_2003050(v4, 14, 7, 53, 0, 32, 0xE0u);
}

//----- (0223C974) --------------------------------------------------------
uint __fastcall Function_223c974(uint *a1, int a2, int a3)
{
  int v3;
  int v4;
  uint *v5;
  int v6;
  int v7;

  v3 = a3;
  v4 = a2;
  v5 = a1;
  Function_200dd0c(a1, 4u, 1, 15, a3, 53);
  v6 = Function_200dd08(v3);
  Function_2003050(v4, 38, v6, 53, 1, 32, 0xC0u);
  Function_200daa4(v5, 4u, 31, 13, 0, 53);
  v7 = Function_200daa0();
  Function_2003050(v4, 38, v7, 53, 1, 32, 0xD0u);
  Function_2003050(v4, 14, 7, 53, 1, 32, 0xE0u);
  Function_2003050(v4, 14, 7, 53, 1, 32, 0x30u);
  return Function_2003050(v4, 91, 294, 53, 1, 32, 0xB0u);
}

//----- (0223CA30) --------------------------------------------------------
ushort *__fastcall Function_223ca30(int a1, uint a2)
{
  uint v2;
  int v3;
  int v4;
  ushort *result;
  ushort **v6;
  ushort *v7;
  int v8;
  int v9;

  v2 = a2;
  v3 = a1;
  if ( a2 == 0xFFFF )
  {
    Function_201ada4_ClearTextBox(a1, 15);
    result = (ushort *)Function_201a954(v3, v4);
  }
  else
  {
    v6 = (ushort **)LoadFromMsgNARC(0, 26, 8, 0x35u);
    v7 = Function_200b1ec_CallMsgDecrypt(v6, v2);
    Function_201ada4_ClearTextBox(v3, 15);
    Function_201d738_CallInitTextInterpreter(v3, 1);
    Function_201a954(v3, v8);
    Function_20237bc_FreeMsg((int)v7, v9);
    result = Function_200b190((ushort *)v6);
  }
  return result;
}

//----- (0223CA98) --------------------------------------------------------
int __fastcall Function_223ca98(uint *a1, int a2, uchar a3, char a4, char a5, uchar a6, uchar a7, short a8)
{
  int v8;
  uint *v9;
  uchar v10;
  char v11;
  int v12;

  v8 = a2;
  v9 = a1;
  v10 = a3;
  v11 = a4;
  Function_201a7a0(a2);
  Function_201a7e8(v9, v8, v10, v11, a5, a6, a7, 14, a8);
  Function_200e060(v8, 1, 1, 0xCu);
  Function_201ada4_ClearTextBox(v8, 15);
  return Function_201a954(v8, v12);
}

//----- (0223CAFC) --------------------------------------------------------
int __fastcall Function_223cafc(uint *a1, int a2, uchar a3, char a4, char a5, uchar a6, uchar a7, short a8, char a9)
{
  int v9;
  uint *v10;
  uchar v11;
  char v12;
  int v13;

  v9 = a2;
  v10 = a1;
  v11 = a3;
  v12 = a4;
  Function_201a7a0(a2);
  Function_201a7e8(v10, v9, v11, v12, a5, a6, a7, a9, a8);
  Function_201ada4_ClearTextBox(v9, 15);
  return Function_201a954(v9, v13);
}

//----- (0223CB58) --------------------------------------------------------
int __fastcall Function_223cb58(int a1)
{
  int v1;

  v1 = a1;
  Function_223cafc(*(uint **)(a1 + 228), a1 + 284, 6u, 3, 2, 4u, 2u, 148, 11);
  Function_223cafc(*(uint **)(v1 + 228), v1 + 300, 6u, 10, 2, 4u, 2u, 156, 11);
  Function_223cafc(*(uint **)(v1 + 228), v1 + 316, 6u, 3, 5, 4u, 2u, 164, 11);
  Function_223cafc(*(uint **)(v1 + 228), v1 + 332, 6u, 10, 5, 4u, 2u, 172, 11);
  Function_223cafc(*(uint **)(v1 + 228), v1 + 348, 6u, 3, 8, 4u, 2u, 180, 11);
  Function_223cafc(*(uint **)(v1 + 228), v1 + 364, 6u, 10, 8, 4u, 2u, 188, 11);
  Function_223cafc(*(uint **)(v1 + 228), v1 + 380, 6u, 3, 11, 4u, 2u, 196, 11);
  return Function_223cafc(*(uint **)(v1 + 228), v1 + 396, 6u, 10, 11, 4u, 2u, 204, 11);
}

//----- (0223CC8C) --------------------------------------------------------
uint __fastcall Function_223cc8c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  uint result;
  ushort *v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v1 = a1;
  v2 = 3;
  v3 = a1 + 284;
  do
  {
    v10 = *(uchar *)(v1 + v2 + 1053);
    if ( *(uchar *)(v1 + v2 + 1053) )
    {
      Function_201ada4_ClearTextBox(v3, 0);
      v6 = (ushort *)Function_2023790(100, 0x35u);
      v7 = Function_202ca90(*(uint *)(v1 + 100), v10 - 1);
      Function_20238a0(v6, v7, 3, 1, 1);
      Function_201d78c(v3, 0);
      Function_201a954(v3, v8);
      result = Function_20237bc_FreeMsg((int)v6, v9);
    }
    else
    {
      Function_201ada4_ClearTextBox(v3, 238);
      result = Function_201a954(v3, v4);
    }
    ++v2;
    v3 += 16;
  }
  while ( v2 < 11 );
  return result;
}

//----- (0223CD20) --------------------------------------------------------
uint __fastcall Function_223cd20(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint result;
  ushort *v9;
  int v10;
  int v11;
  int v12;

  v2 = a1;
  v3 = 16 * (a2 + 3);
  v4 = a1 + a2;
  v5 = *(uchar *)(v4 + 1056);
  v6 = a1 + 236;
  if ( *(uchar *)(v4 + 1056) )
  {
    Function_201ada4_ClearTextBox(v6 + v3, 0);
    v9 = (ushort *)Function_2023790(100, 0x35u);
    v10 = Function_202ca90(*(uint *)(v2 + 100), v5 - 1);
    Function_20238a0(v9, v10, 3, 1, 1);
    Function_201d78c(v6 + v3, 1);
    Function_201a954(v6 + v3, v11);
    result = Function_20237bc_FreeMsg((int)v9, v12);
  }
  else
  {
    Function_201ada4_ClearTextBox(v6 + v3, 238);
    result = Function_201a954(v6 + v3, v7);
  }
  return result;
}

//----- (0223CDA4) --------------------------------------------------------
uint __fastcall Function_223cda4(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = 3;
  v2 = a1 + 284;
  do
  {
    Function_201acf4(v2);
    result = Function_201a8fc(v2);
    ++v1;
    v2 += 16;
  }
  while ( v1 < 11 );
  return result;
}

//----- (0223CDC4) --------------------------------------------------------
ushort *__fastcall Function_223cdc4(int a1, uint a2)
{
  uint v2;
  int v3;
  int v4;
  ushort *result;
  ushort **v6;
  ushort *v7;
  int v8;
  int v9;

  v2 = a2;
  v3 = a1;
  if ( a2 == 0xFFFF )
  {
    Function_201ada4_ClearTextBox(a1, 15);
    result = (ushort *)Function_201a954(v3, v4);
  }
  else
  {
    v6 = (ushort **)LoadFromMsgNARC(0, 26, 12, 0x35u);
    v7 = Function_200b1ec_CallMsgDecrypt(v6, v2);
    Function_201ada4_ClearTextBox(v3, 15);
    Function_201d738_CallInitTextInterpreter(v3, 1);
    Function_201a954(v3, v8);
    Function_20237bc_FreeMsg((int)v7, v9);
    result = Function_200b190((ushort *)v6);
  }
  return result;
}

//----- (0223CE2C) --------------------------------------------------------
uint Function_223ce2c()
{
  Function_201ffd0();
  Function_201ff0c(0x10u, 1);
  return Function_201ff74(0x10u, 1);
}

//----- (0223CE44) --------------------------------------------------------
int *Function_223ce44()
{
  return Function_200f174(0, 1, 1, 0, 6, 1, 53);
}

//----- (0223CE64) --------------------------------------------------------
int *Function_223ce64()
{
  return Function_200f174(0, 0, 0, 0, 6, 1, 53);
}

//----- (0223CE84) --------------------------------------------------------
int __fastcall Function_223ce84(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_20070e8(a2, 0x10Cu, *(uint **)(a1 + 228), 2u, 0, 0, 1, 53);
  Function_200710c(v3, 0x11Cu, *(uint **)(v2 + 228), 2u, 0, 0, 1, 53);
  Function_2003050(*(uint *)(v2 + 232), 91, 288, 53, 0, 64, 0);
  Function_20070e8(v3, 0x10Du, *(uint **)(v2 + 228), 3u, 0, 0, 1, 53);
  return Function_200710c(v3, 0x11Du, *(uint **)(v2 + 228), 3u, 0, 0, 1, 53);
}

//----- (0223CF24) --------------------------------------------------------
uint __fastcall Function_223cf24(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_20070e8(a2, 0x10Bu, *(uint **)(a1 + 228), 5u, 0, 0, 1, 53);
  Function_200710c(v3, 0x11Bu, *(uint **)(v2 + 228), 5u, 0, 0, 1, 53);
  return Function_2003050(*(uint *)(v2 + 232), 91, 287, 53, 1, 64, 0);
}

//----- (0223CF88) --------------------------------------------------------
uint __fastcall Function_223cf88(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_20070e8(a2, 0x10Bu, *(uint **)(a1 + 228), 7u, 0, 0, 1, 53);
  Function_200710c(v3, 0x11Au, *(uint **)(v2 + 228), 7u, 0, 0, 1, 53);
  return Function_2003050(*(uint *)(v2 + 232), 91, 287, 53, 1, 64, 0);
}

//----- (0223CFEC) --------------------------------------------------------
int __fastcall Function_223cfec(uint *a1, int a2)
{
  int v2;
  uint *v3;
  int v4;

  v2 = a2;
  v3 = (uint *)a1[55];
  v4 = a1[56];
  Function_200cdc4(a1[58], 3u, v3, v4, a2, 0x122u, 0, 3, 2, 26290);
  Function_200cc3c(v3, v4, v2, 0x111u, 1, 2, 25273);
  Function_200ce24(v3, v4, v2, 0xB1u, 1, 27177);
  Function_200ce54(v3, v4, v2, 0x55u, 1, 28085);
  Function_200cc3c(v3, v4, v2, 0x112u, 1, 2, 25274);
  Function_200ce24(v3, v4, v2, 0xB2u, 1, 27178);
  Function_200ce54(v3, v4, v2, 0x56u, 1, 28086);
  Function_200cc3c(v3, v4, v2, 0x10Eu, 1, 2, 25270);
  Function_200ce24(v3, v4, v2, 0xAFu, 1, 27175);
  Function_200ce54(v3, v4, v2, 0x53u, 1, 28083);
  Function_200cc3c(v3, v4, v2, 0x110u, 1, 2, 35272);
  Function_200ce24(v3, v4, v2, 0xB0u, 1, 27176);
  return Function_200ce54(v3, v4, v2, 0x54u, 1, 28084);
}

//----- (0223D16C) --------------------------------------------------------
int __fastcall Function_223d16c(int a1, int a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int v6;
  uint *v7;
  int *v8;
  short *v9;
  char *v10;
  int v11;
  short v12;
  short *v13;
  char *v14;
  int v15;
  short v16;
  char *v17;
  int v18;
  char *v19;
  uchar *v20;
  int result;
  int v22;
  char v23;
  char v24;
  char v25;
  char v26;
  short v27;
  short v28;
  short v29;
  short v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;

  v42 = a4;
  v4 = a1;
  v5 = *(uint **)(a1 + 220);
  v6 = *(uint *)(a1 + 224);
  v7 = (uint *)(a1 + 996);
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 60;
  v33 = 2;
  v41 = 0;
  v40 = 1;
  v32 = 1;
  v38 = -1;
  v34 = 25273;
  v39 = -1;
  v35 = 26290;
  v36 = 27177;
  v37 = 28085;
  v7[8] = Function_200ce6c(v5, v6, &v27);
  v34 = 25274;
  v35 = 26290;
  v36 = 27178;
  v37 = 28086;
  v7[9] = Function_200ce6c(v5, v6, &v27);
  v40 = 1;
  v32 = 1;
  v34 = 35272;
  v35 = 26290;
  v36 = 27176;
  v37 = 28084;
  v7[10] = Function_200ce6c(v5, v6, &v27);
  v40 = 1;
  v32 = 0;
  v34 = 25270;
  v35 = 26290;
  v36 = 27175;
  v37 = 28083;
  v7[11] = Function_200ce6c(v5, v6, &v27);
  v8 = Function_200ce6c(v5, v6, &v27);
  v9 = &word_223ED8C;
  v7[12] = v8;
  v10 = &v25;
  v11 = 26;
  do
  {
    v12 = *v9;
    ++v9;
    *(ushort *)v10 = v12;
    v10 += 2;
    --v11;
  }
  while ( v11 );
  v13 = &word_223EDC0;
  v14 = &v23;
  v15 = 26;
  do
  {
    v16 = *v13;
    ++v13;
    *(ushort *)v14 = v16;
    v14 += 2;
    --v15;
  }
  while ( v15 );
  v22 = 8;
  v17 = &v26;
  v18 = v4 + 32;
  v19 = &v24;
  v20 = (uchar *)(v4 + 496);
  do
  {
    Function_200d4c4(*(int **)(v18 + 996), *(short *)v17, *((short *)v17 + 1));
    Function_200d330(*(int **)(v18 + 996));
    Function_200d3cc(*(int **)(v18 + 996), 0);
    Function_223b870(v20, *(int **)(v18 + 996), *(short *)v19, *((short *)v19 + 1));
    v17 += 4;
    result = v22 + 1;
    v18 += 4;
    v19 += 4;
    v20 += 4;
    v22 = result;
  }
  while ( result < 13 );
  return result;
}

//----- (0223D2F4) --------------------------------------------------------
uint *__fastcall Function_223d2f4(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint *result;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    result = *(uint **)(v2 + 996);
    if ( result )
      result = (uint *)Function_200d3f4(result, v3);
    ++v4;
    v2 += 4;
  }
  while ( v4 < 13 );
  return result;
}

//----- (0223D318) --------------------------------------------------------
void Function_223d318()
{
  ;
}

//----- (0223D31C) --------------------------------------------------------
uint __fastcall Function_223d31c(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = 8;
  v2 = a1 + 32;
  do
  {
    result = Function_200d0f4(*(uint *)(v2 + 996));
    ++v1;
    v2 += 4;
  }
  while ( v1 < 13 );
  return result;
}

//----- (0223D338) --------------------------------------------------------
int __fastcall Function_223d338(int a1)
{
  return Function_202ca10(*(uint *)(a1 + 8 * *(uint *)(a1 + 964) + 8), a1 + 104);
}

//----- (0223D350) --------------------------------------------------------
int __fastcall Function_223d350(int a1)
{
  return Function_202ca10(a1 + 104, *(uint *)(a1 + 8 * *(uint *)(a1 + 964) + 8));
}

//----- (0223D368) --------------------------------------------------------
int __fastcall Function_223d368(int a1)
{
  int v1;
  int v2;
  int result;
  uchar *v4;

  v1 = a1;
  v2 = 0;
  do
  {
    result = Function_202ca90(*(uint *)(v1 + 100), v2);
    v4 = (uchar *)(v1 + v2++ + 128);
    *v4 = result;
  }
  while ( v2 < 81 );
  return result;
}

//----- (0223D384) --------------------------------------------------------
int __fastcall Function_223d384(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = 0;
  do
  {
    result = Function_202cadc(*(uint *)(v1 + 100), v2, *(uchar *)(v1 + v2 + 128));
    ++v2;
  }
  while ( v2 < 81 );
  return result;
}

//----- (0223D3A0) --------------------------------------------------------
int *Function_223d3a0()
{
  G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 0, 6, 11, 7);
  return G2x_SetBlendAlpha_((int *)&REG_BLDCNT_SUB, 0, 14, 7, 8);
}

//----- (0223D3CC) --------------------------------------------------------
int __fastcall Function_223d3cc(int a1)
{
  int **v1;
  int v2;
  int result;
  int *v4;
  int v5;
  int v6;
  int *v7;

  v1 = (int **)a1;
  v2 = *(uint *)(a1 + 8 * *(uint *)(a1 + 964) + 4);
  if ( v2 != 255 )
    return Function_20775ec((int *)(*v1)[v2 + 1], v1[266]);
  v4 = *v1;
  v5 = 0;
  result = **v1;
  if ( result > 0 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = (int *)v4[v6 + 1];
      if ( !GetPkmnData(v7, 0x4Cu, 0) )
        break;
      v4 = *v1;
      ++v5;
      result = **v1;
      ++v6;
      if ( v5 >= result )
        return result;
    }
    result = Function_20775ec(v7, v1[266]);
  }
  return result;
}

//----- (0223D430) --------------------------------------------------------
int __fastcall Function_223d430(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  uchar *v5;

  v1 = 0;
  v2 = a1;
  v3 = 0;
  v4 = 0;
  do
  {
    v5 = (uchar *)Function_202ca64(v2, v4);
    if ( Function_202ca7c(v5) )
      ++v3;
    ++v4;
  }
  while ( v4 < 8 );
  if ( v3 )
    v1 = 1;
  return v1;
}

//----- (0223D45C) --------------------------------------------------------
int __fastcall Function_223d45c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1 + 12 * a2;
  v3 = *(uint *)(v2 + 612);
  v4 = *(uint *)(v2 + 616);
  if ( v3 == 255 && !v4 )
    return 0;
  if ( v3 == 255 && v4 == 1 )
    return 1;
  if ( v3 == 255 || v4 != 1 )
    return 3;
  return 2;
}

//----- (0223D494) --------------------------------------------------------
uint *__fastcall Function_223d494(uint *result, int a2, int a3, int a4)
{
  if ( a3 == 255 )
    result[245] = result[246];
  else
    result[245] = a3;
  result[243] = a2;
  result[246] = a4;
  result[247] = 0;
  return result;
}

//----- (0223D4C4) --------------------------------------------------------
int __fastcall Function_223d4c4(int a1)
{
  int v1;

  v1 = a1;
  Function_200dc9c(a1 + 252, 1);
  Function_201acf4(v1 + 252);
  Function_2001bc4(*(uint *)(v1 + 416), 0);
  Function_2013a3c(*(int **)(v1 + 412));
  Function_201a8fc(v1 + 252);
  return 1;
}

//----- (0223D4FC) --------------------------------------------------------
int __fastcall Function_223d4fc(uint *a1)
{
  Function_223d494(a1, 1, 0, 3);
  return 0;
}

//----- (0223D50C) --------------------------------------------------------
int __fastcall Function_223d50c(int a1)
{
  int *v1;
  int v2;
  int v3;
  int v4;

  v1 = (int *)a1;
  Function_223b400(a1);
  Function_223b808(v1, v2, v3, v4);
  Function_223c7e0((int)v1);
  Function_223d494(v1, 2, 0, 0);
  return 0;
}

//----- (0223D530) --------------------------------------------------------
int __fastcall Function_223d530(uint *a1)
{
  Function_223d494(a1, 3, 0, 3);
  return 0;
}

//----- (0223D540) --------------------------------------------------------
int __fastcall Function_223d540(uint *a1)
{
  Function_223d494(a1, 4, 0, 3);
  return 0;
}

//----- (0223D550) --------------------------------------------------------
int __fastcall Function_223d550(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = ((int (*)(void))*(&off_223EE04 + *(uint *)(a1 + 972)))();
  Function_200c7ec(*(int **)(v1 + 224));
  return v2;
}

//----- (0223D574) --------------------------------------------------------
int __fastcall Function_223d574(uint *a1)
{
  uint *v1;
  uint v2;
  uint v3;
  uint v4;
  uint v5;
  uint v7;
  uint v8;

  v1 = a1;
  if ( dword_21BF6C8 & 0x10 )
  {
    v2 = *a1 + 1;
    *v1 = v2;
    s32_div_f(v2, 12);
    *v1 = v3;
  }
  else if ( dword_21BF6C8 & 0x20 )
  {
    if ( (int)*a1 <= 0 )
      *a1 = 11;
    else
      --*a1;
  }
  else if ( dword_21BF6C8 & 0x40 )
  {
    v4 = *a1;
    if ( !((int)*a1 / 4) )
      return 0;
    *a1 = v4 - 4;
    s32_div_f(v4 - 4, 12);
    *v1 = v5;
  }
  else
  {
    if ( !(dword_21BF6C8 & 0x80) )
      return 0;
    v7 = *a1;
    if ( (int)*a1 / 4 == 2 )
      return 0;
    *a1 = v7 + 4;
    s32_div_f(v7 + 4, 12);
    *v1 = v8;
  }
  return 1;
}

//----- (0223D600) --------------------------------------------------------
int __fastcall Function_223d600(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;
  int v8;
  int v9;
  short v10[2];
  int v11;
  int v12;

  v12 = a4;
  v4 = a1;
  v5 = 0;
  v9 = a3;
  if ( !a2 )
    v5 = 1;
  v6 = 4 * a2;
  Function_223c0ec(*(uint *)(a1 + 964 + 4 * a2), &v11, v10);
  Function_200d4c4(*(int **)(v4 + v6 + 756), (short)v11, v10[0]);
  result = v9;
  if ( v9 == 1 )
  {
    v8 = 4 * v5;
    *(uint *)(v4 + 964 + v8) = *(uint *)(v4 + 964 + v6);
    Function_223c0ec(*(uint *)(v4 + 964 + v8), &v11, v10);
    result = Function_200d4c4(*(int **)(v4 + v8 + 756), (short)v11, v10[0]);
  }
  return result;
}

//----- (0223D674) --------------------------------------------------------
int __fastcall Function_223d674(int a1, int a2, int a3, int a4)
{
  int v4;
  uint v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int (__fastcall *v25)(int);
  int result;

  v4 = a1;
  v5 = *(uint *)(a1 + 980);
  if ( v5 <= 6 )
    JUMPOUT(__CS__, *((short *)&off_223D692 + v5) + 35903124);
  switch ( (uchar)v5 )
  {
    case 0:
      v6 = LoadFromNARC_8(91, 0x35u, a3, a4);
      Function_223c110((uint *)v4);
      Function_223c188((int **)v4);
      Function_223c288((int **)v4, v7, v8, v9);
      Function_223ce84(v4, (int)v6);
      Function_223cf24(v4, (int)v6);
      Function_223cf88(v4, (int)v6);
      Function_223c354(v4);
      Function_223c61c(v4, (int)v6, v10, v11);
      Function_223ca98(*(uint **)(v4 + 228), v4 + 236, 1u, 2, 21, 0x1Bu, 2u, 40);
      Function_223b208(v4);
      Function_223b69c(v4, 1);
      Function_223b1e0(v4);
      Function_223cfec((uint *)v4, (int)v6);
      Function_223d16c(v4, v12, v13, v14);
      Function_223c438(v4, (int)v6);
      Function_223c4ac(v4);
      Function_223d338(v4);
      Function_223d368(v4);
      Function_223ba90(v4, *(uint *)(v4 + 1048));
      Function_223bb04((uint *)v4);
      Function_223bbac(v4, v15, v16, v17);
      Function_223d2f4(v4, 0);
      Function_223c568(v4, 0);
      Function_223b940(v4);
      Function_223b96c(v4, 0);
      Function_223ca30(v4 + 236, 7u);
      Function_223ce2c();
      Function_223dcb8(v4, 0);
      Call_FS_CloseFile(v6);
      ++*(uint *)(v4 + 980);
      goto LABEL_27;
    case 1:
      Function_223ce44();
      ++*(uint *)(v4 + 980);
      goto LABEL_27;
    case 2:
      if ( Function_200f2ac() != 1 )
        goto LABEL_27;
      ++*(uint *)(v4 + 980);
      goto LABEL_8;
    case 3:
LABEL_8:
      if ( Function_2022798() == 1 )
      {
        Function_223d4fc((uint *)v4);
      }
      else
      {
        v18 = *(uint *)(v4 + 964);
        v19 = Function_223d574((uint *)(v4 + 964));
        v20 = *(uint *)(v4 + 964);
        *(uint *)(v4 + 964) = v18;
        if ( v19 == 1 )
        {
          Function_223b400(v4);
          Function_223b808((int *)v4, v21, v22, v23);
          Function_223c7e0(v4);
          *(uint *)(v4 + 964) = v20;
          Function_223d600(v4, 0, 1, v24);
          Function_223b678(v4);
          Function_223b208(v4);
          Function_223b69c(v4, 1);
          Function_223b1e0(v4);
          Function_2005748(0x5DCu);
        }
        else if ( dword_21BF6C4 & 1 )
        {
          ++*(uint *)(v4 + 980);
          Function_223ca30(v4 + 236, 8u);
          Function_223bf74(*(uint **)(v4 + 228), v4 + 252, 1u, v4, *(uint *)(v4 + 964));
          Function_2005748(0x5DCu);
        }
        else if ( dword_21BF6C4 & 2 )
        {
          *(uint *)(v4 + 980) = 5;
          Function_2005748(0x5DDu);
        }
      }
      goto LABEL_27;
    case 4:
      v25 = (int (__fastcall *)(int))Function_2001be0(*(uint *)(v4 + 416));
      if ( v25 == (int (__fastcall *)(int))-2 )
      {
        Function_223d4c4(v4);
        Function_223ca30(v4 + 236, 7u);
        *(uint *)(v4 + 980) = 3;
      }
      else if ( v25 != (int (__fastcall *)(int))-1 && v25 )
      {
        if ( v25(v4) == 1 )
        {
          Function_223ca30(v4 + 236, 7u);
          *(uint *)(v4 + 980) = 3;
        }
        else
        {
          Function_223d4c4(v4);
        }
      }
      goto LABEL_27;
    case 5:
      Function_223ce64();
      ++*(uint *)(v4 + 980);
      goto LABEL_27;
    case 6:
      if ( Function_200f2ac() != 1 )
        goto LABEL_27;
      Function_201a8fc(v4 + 236);
      Function_223c8bc(v4);
      Function_223c32c((int **)v4);
      Function_223d31c(v4);
      Function_223c588(v4);
      Function_223bc70(v4);
      Function_2097f30(*(uint *)v4, 0);
      result = 0;
      break;
    default:
LABEL_27:
      Function_223c304((int **)v4);
      Function_223c88c(v4);
      result = 1;
      break;
  }
  return result;
}

//----- (0223D94C) --------------------------------------------------------
uint __fastcall Function_223d94c(int *a1, char a2)
{
  uint result;

  switch ( a2 )
  {
    case 0:
      result = Function_200d3cc(a1, 1u);
      break;
    case 1:
    case 3:
      result = Function_200d3cc(a1, 0);
      break;
    case 2:
      result = Function_200d3cc(a1, 2u);
      break;
    default:
      result = ErrorHandler();
      break;
  }
  return result;
}

//----- (0223D984) --------------------------------------------------------
int __fastcall Function_223d984(int result, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v3 = (uint *)result;
  v4 = a2;
  v5 = a3;
  if ( result )
  {
    Function_20129a4(result, &v8, &v7);
    result = Function_20128c4(v3, v8 + v4, v7 + v5, v6);
  }
  return result;
}

//----- (0223D9AC) --------------------------------------------------------
uint __fastcall Function_223d9ac(int *a1, uint *a2)
{
  int v2;
  int *v3;
  uint v4;
  uint result;

  v2 = (int)a2;
  v3 = a1;
  v4 = *a2;
  if ( *a2 == 3 )
  {
    Function_223d984(a2[2], 0, -1);
    Function_200d3cc(*(int **)(v2 + 4), 2u);
    result = *(uint *)v2 + 1;
    *(uint *)v2 = result;
  }
  else if ( v4 == 6 )
  {
    Function_223d984(a2[2], 0, 2);
    Function_200d3cc(*(int **)(v2 + 4), 0);
    Call_RemoveTaskFromTaskList(v3);
    result = free(v2);
  }
  else
  {
    result = v4 + 1;
    *a2 = result;
  }
  return result;
}

//----- (0223DA00) --------------------------------------------------------
uint *__fastcall Function_223da00(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;
  int v5;

  v2 = a1;
  v3 = a2;
  v4 = (uint *)malloc(0x35u, 12);
  v5 = (int)v4;
  *v4 = 1;
  v4[1] = v2;
  v4[2] = v3;
  Function_223d984(v3, 0, -1);
  return AddTaskToTaskList1((int)Function_223d9ac, v5, 0x3E8u);
}

//----- (0223DA34) --------------------------------------------------------
ushort *__fastcall Function_223da34(uint a1, int a2, int *a3)
{
  int *v3;
  uint v4;
  ushort *result;
  char v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;

  v3 = a3;
  v4 = a1;
  result = (ushort *)a3[54];
  v6 = a2;
  if ( result )
  {
    if ( v4 <= 0x14 )
      JUMPOUT(__CS__, (char *)&off_223DA5A + *((short *)&off_223DA5A + v4) + 2);
    switch ( (uchar)result )
    {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
        if ( !a2 )
        {
          if ( Function_223b2f8((int)a3) )
          {
            v15 = (int)(v3 + 264);
            if ( *((uchar *)v3 + v4 + 1056) && Function_202ca90(v3[25], *((uchar *)v3 + v4 + 1056) - 1) )
            {
              v3[53] = Function_223b278((int)v3, (uchar)v4);
              v16 = Function_2098164(*(uchar *)(v15 + v4));
              Function_223cdc4((int)(v3 + 59), v16);
              Function_202cae0(*(uchar **)(*v3 + 32), *(uchar *)(v15 + v4), -1);
              Function_223cd20((int)v3, v4);
              result = (ushort *)Function_2005748(0x5EBu);
            }
            else
            {
              result = (ushort *)*(uchar *)(v15 + v4);
              if ( *(uchar *)(v15 + v4) )
              {
                Function_2005748(0x5F2u);
                result = Function_223ca30((int)(v3 + 59), 0x10u);
              }
            }
          }
          else
          {
            Function_2005748(0x5F2u);
            result = Function_223ca30((int)(v3 + 59), 0xFu);
          }
        }
        break;
      case 8:
        if ( !a2 )
        {
          v7 = a3[262];
          if ( v7 <= 0 )
            v7 = a3[263];
          a3[262] = v7 - 1;
          Function_223bc70((int)a3);
          Function_223ba90((int)v3, v3[262]);
          Function_223bb04(v3);
          Function_223bbac((int)v3, v8, v9, v10);
          Function_223cc8c((int)v3);
          Function_2005748(0x6C5u);
        }
        result = (ushort *)Function_223d94c((int *)v3[257], v6);
        break;
      case 9:
        if ( !a2 )
        {
          s32_div_f(++a3[262], a3[263]);
          v3[262] = v11;
          Function_223bc70((int)v3);
          Function_223ba90((int)v3, v3[262]);
          Function_223bb04(v3);
          Function_223bbac((int)v3, v12, v13, v14);
          Function_223cc8c((int)v3);
          Function_2005748(0x6C5u);
        }
        result = (ushort *)Function_223d94c((int *)v3[258], v6);
        break;
      case 0xA:
        if ( !a2 )
        {
          if ( a3[245] != 5 )
          {
            a3[245] = 5;
            Function_2005748(0x5DDu);
          }
          Function_223da00(v3[259], 0);
        }
        result = (ushort *)Function_223d94c((int *)v3[259], v6);
        break;
      case 0xB:
        if ( !a2 )
        {
          if ( a3[245] != 6 )
          {
            a3[245] = 6;
            Function_223dcb8(a3, 0);
            Function_2005748(0x5E2u);
          }
          Function_223da00(v3[260], v3[142]);
        }
        result = (ushort *)Function_223d94c((int *)v3[260], v6);
        break;
      case 0xC:
        if ( !a2 )
        {
          if ( a3[245] != 7 )
          {
            a3[245] = 7;
            Function_223dcb8(a3, 0);
            Function_2005748(0x5DDu);
          }
          Function_223da00(v3[261], v3[143]);
        }
        result = (ushort *)Function_223d94c((int *)v3[261], v6);
        break;
      case 0xD:
      case 0xE:
      case 0xF:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
        if ( !a2 )
        {
          v17 = v4 - 13;
          Function_223b5c4((int)a3, 0, (uchar)v17);
          v18 = Function_2098164(LOBYTE(v3[4 * v17 + 202]));
          Function_223cdc4((int)(v3 + 59), v18);
          result = (ushort *)Function_2005748(0x5EBu);
        }
        break;
      default:
        result = (ushort *)ErrorHandler();
        break;
    }
  }
  return result;
}

//----- (0223DCB0) --------------------------------------------------------
int __fastcall Function_223dcb0(int a1)
{
  return *(uint *)(a1 + 600);
}

//----- (0223DCB8) --------------------------------------------------------
uint *__fastcall Function_223dcb8(int a1, int a2)
{
  uint *result;

  result = (uint *)(a1 + 216);
  *result = a2;
  return result;
}

//----- (0223DCC0) --------------------------------------------------------
int __fastcall Function_223dcc0(int a1)
{
  int v1;
  char *v2;
  uchar *v3;
  char v4;
  uchar *v5;
  int v6;
  int v7;
  int result;
  int v9;

  v9 = a1;
  v1 = 0;
  v2 = &byte_223EE44;
  v3 = (uchar *)v9;
  do
  {
    ++v1;
    v3[464] = *v2;
    v3[465] = v2[1];
    v3[466] = v2[2];
    v4 = v2[3];
    v2 += 4;
    v3[467] = v4;
    v3 += 4;
  }
  while ( v1 < 13 );
  if ( v1 < 21 )
  {
    v5 = (uchar *)(v9 + 4 * v1);
    v6 = v9 + 464 + 4 * v1;
    v7 = v9 + 16 * v1;
    do
    {
      v5[464] = 0;
      v5[465] = 0;
      ++v1;
      v5[466] = 0;
      v5[467] = 0;
      *(uint *)(v7 + 608) = v6;
      v5 += 4;
      v6 += 4;
      v7 += 16;
    }
    while ( v1 < 21 );
  }
  result = Function_2023fcc(v9 + 464, 0x15u, (int)Function_223da34, v9, 0x35u);
  *(uint *)(v9 + 460) = result;
  return result;
}

//----- (0223DD88) --------------------------------------------------------
int __fastcall Function_223dd88(int a1)
{
  int v1;
  ushort v2;
  int v3;
  short v4;
  int result;
  char v6;
  char v7;

  v1 = a1;
  Function_2075ef4((int)&v7, *(uint *)(a1 + 1064), 2u);
  v2 = GetPkmnData(*(int **)(v1 + 1064), 5u, 0);
  v3 = Function_20765ac(*(uint *)(v1 + 1064), 2u);
  v4 = v3;
  *(uint *)(v1 + 428) = v3;
  Function_20789bc(*(uint *)(v1 + 1068), (uint)&v6, v2, 1);
  result = Function_2007c34(*(uint **)(v1 + 420), &v7, 192, v4 + 48, -640, 0, (int)&v6, 0);
  *(uint *)(v1 + 424) = result;
  return result;
}

//----- (0223DE00) --------------------------------------------------------
int __fastcall Function_223de00(int a1)
{
  int *v1;
  ushort v2;

  v1 = (int *)a1;
  v2 = GetPkmnData(*(int **)(a1 + 1064), 5u, 0);
  Function_2075bcc(v1[266]);
  Function_2007b98(v1[106]);
  return Function_20789f4(v1[267], v1[151], v1[106], v2, 2, 0, 0);
}

//----- (0223DE54) --------------------------------------------------------
int __fastcall Function_223de54(int a1)
{
  int v1;

  v1 = a1;
  Function_2007dec(*(uint *)(a1 + 424), 0xCu, 0);
  return Function_2007dec(*(uint *)(v1 + 424), 0xDu, 0);
}

//----- (0223DE78) --------------------------------------------------------
int __fastcall Function_223de78(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( Function_20080c0(*(uint *)(a1 + 424), 0xCu) == 256 )
    return 0;
  if ( Function_20080c0(*(uint *)(v1 + 424), 0xCu) < 256 )
  {
    Function_2008274(*(uint *)(v1 + 424), 0xCu, 32);
    Function_2008274(*(uint *)(v1 + 424), 0xDu, 32);
    Function_20087c8(*(uint *)(v1 + 424), *(uint *)(v1 + 428));
    result = 1;
  }
  else
  {
    Function_2007dec(*(uint *)(v1 + 424), 0xCu, 256);
    Function_2007dec(*(uint *)(v1 + 424), 0xDu, 256);
    result = 0;
  }
  return result;
}

//----- (0223DEF4) --------------------------------------------------------
int __fastcall Function_223def4(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( !Function_20080c0(*(uint *)(a1 + 424), 0xCu) )
    return 0;
  if ( Function_20080c0(*(uint *)(v1 + 424), 0xCu) > 0 )
  {
    Function_2008274(*(uint *)(v1 + 424), 0xCu, -32);
    Function_2008274(*(uint *)(v1 + 424), 0xDu, -32);
    Function_20087c8(*(uint *)(v1 + 424), *(uint *)(v1 + 428));
    result = 1;
  }
  else
  {
    Function_2007dec(*(uint *)(v1 + 424), 0xCu, 0);
    Function_2007dec(*(uint *)(v1 + 424), 0xDu, 0);
    result = 0;
  }
  return result;
}

//----- (0223DF70) --------------------------------------------------------
int __fastcall Function_223df70(int a1, int a2)
{
  return Function_2007dec(*(uint *)(a1 + 424), 6u, a2);
}

//----- (0223DF84) --------------------------------------------------------
uint *__fastcall Function_223df84(int a1)
{
  return Function_2007dc8(*(uint **)(a1 + 424));
}

//----- (0223DF94) --------------------------------------------------------
int __fastcall Function_223df94(int a1)
{
  int v1;
  int v2;
  uint v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  ushort *v13;
  int v14;
  int v15;
  int v16;
  int result;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  BOOL v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  char v35;
  char v36;
  int v37;
  int v38;
  int v39;
  int v40;
  uint v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  ushort v49[12];
  int v50;
  int v51;
  int v52;
  int v53;
  uint v54;
  int v55;
  int v56;
  int v57;
  int v58;

  v1 = a1;
  switch ( (uchar)*(uint *)(a1 + 980) )
  {
    case 0u:
      Function_223dcb8(a1, 0);
      Function_223ca30(v1 + 236, 0xFFFFu);
      Function_223cb58(v1);
      Function_223cc8c(v1);
      Function_223bd30(v1, 1, 4u, v2);
      Function_223d338(v1);
      Function_223d368(v1);
      *(uint *)(v1 + 608) = 0;
      ++*(uint *)(v1 + 980);
      goto LABEL_68;
    case 1u:
      if ( Function_223dcb0(a1) != 1 )
      {
        Function_2003178(*(uint *)(v1 + 232), 1, 3);
        Function_2003178(*(uint *)(v1 + 232), 4, 0xFFFF);
        Function_201ff0c(0x10u, 0);
        Function_201ff74(4u, 1);
        Function_2019060(7u, 1);
        Function_223d2f4(v1, 1);
        Function_223c568(v1, 1);
        Function_223b96c(v1, 1);
        ++*(uint *)(v1 + 980);
      }
      goto LABEL_68;
    case 2u:
      if ( !Function_200384c(*(uint *)(a1 + 232)) )
      {
        Function_2019060(3u, 1);
        Function_2003178(*(uint *)(v1 + 232), 1, 2);
        ++*(uint *)(v1 + 980);
      }
      goto LABEL_68;
    case 3u:
      if ( !Function_200384c(*(uint *)(a1 + 232)) )
      {
        Function_223dcb8(v1, 1);
        ++*(uint *)(v1 + 980);
      }
      goto LABEL_68;
    case 4u:
      goto LABEL_68;
    case 5u:
      v3 = *(uint *)(a1 + 988);
      if ( v3 <= 7 )
        JUMPOUT(__CS__, *((short *)&off_223E0F2 + v3) + 35905780);
      switch ( (uchar)v3 )
      {
        case 0:
          Function_201ff0c(0x10u, 1);
          Function_2003178(*(uint *)(v1 + 232), 2, 2059);
          Function_2003178(*(uint *)(v1 + 232), 8, 0xFFFF);
          Function_223dcb8(v1, 0);
          *(uint *)(v1 + 992) = 0;
          Function_223d3cc(v1);
          Function_223dd88(v1);
          Function_223df70(v1, 1);
          Function_223ca30(v1 + 236, 0xDu);
          ++*(uint *)(v1 + 988);
          break;
        case 1:
          if ( !Function_200384c(*(uint *)(a1 + 232)) )
          {
            v51 = 53;
            v53 = 255;
            v50 = 1;
            v56 = 1;
            v52 = 0;
            v55 = 0;
            v57 = *(uint *)(v1 + 220);
            v58 = *(uint *)(v1 + 232);
            v54 = GetPkmnData(*(int **)(v1 + 1064), 0x9Bu, 0);
            *(uint *)(v1 + 556) = ((int (__fastcall *)(int *))dword_2237728[0])(&v50);
            ++*(uint *)(v1 + 988);
          }
          break;
        case 2:
          v47 = 0;
          v48 = 0;
          v46 = 1;
          v48 = *(uint *)(a1 + 1064);
          v30 = *(uint *)(a1 + 964) + 1;
          Function_223b848(v49, (uchar *)a1);
          SetPkmnData(*(uint *)(v1 + 1064), 162, (ushort *)&v30);
          SetPkmnData(*(uint *)(v1 + 1064), 171, v49);
          *(uint *)(v1 + 552) = ((int (__fastcall *)(int, int *))dword_2236004[0])(53, &v46);
          ((void (__fastcall *)(uint))dword_2236320[0])(*(uint *)(v1 + 552));
          ++*(uint *)(v1 + 988);
          *(uint *)(v1 + 992) = 0;
          break;
        case 3:
          if ( ((int (__fastcall *)(uint))dword_2236374[0])(*(uint *)(a1 + 552)) == 1
            && ((int (__fastcall *)(uint))dword_2237810[0])(*(uint *)(v1 + 556)) == 1 )
          {
            Function_223de78(v1);
            ((void (__fastcall *)(uint))dword_22363B4[0])(*(uint *)(v1 + 552));
            Function_223df70(v1, 0);
            Function_223de54(v1);
            Function_2005748(0x6C6u);
            ++*(uint *)(v1 + 988);
          }
          break;
        case 4:
          v4 = Function_223de78(a1);
          if ( !((int (__fastcall *)(uint))dword_22377F8[0])(*(uint *)(v1 + 556)) && !v4 )
          {
            ((void (__fastcall *)(uint))dword_223783C[0])(*(uint *)(v1 + 556));
            Function_201ff0c(0x10u, 0);
            Function_223de00(v1);
            *(uint *)(v1 + 992) = 0;
            ++*(uint *)(v1 + 988);
          }
          break;
        case 5:
          if ( !((int (__fastcall *)(uint))dword_22363C4[0])(*(uint *)(a1 + 552))
            && Function_20160f4(*(uint *)(v1 + 604), 0) == 1
            && !Function_2007c24(*(uint *)(v1 + 424)) )
          {
            ((void (__fastcall *)(uint))dword_2236428[0])(*(uint *)(v1 + 552));
            ++*(uint *)(v1 + 988);
          }
          break;
        case 6:
          if ( ++*(uint *)(a1 + 992) >= 30 )
          {
            *(uint *)(a1 + 992) = 0;
            v38 = 53;
            v39 = 5;
            v40 = 255;
            v37 = 1;
            v42 = 0;
            v43 = 1;
            v44 = *(uint *)(a1 + 220);
            v45 = *(uint *)(a1 + 232);
            v41 = GetPkmnData(*(int **)(a1 + 1064), 0x9Bu, 0);
            *(uint *)(v1 + 556) = ((int (__fastcall *)(int *))dword_2237728[0])(&v37);
            Function_223d3a0();
            Function_201ff0c(0x10u, 1);
            ++*(uint *)(v1 + 988);
          }
          break;
        case 7:
          v5 = Function_223def4(a1);
          if ( !((int (__fastcall *)(uint))dword_22377F8[0])(*(uint *)(v1 + 556)) && !v5 )
          {
            Function_2003178(*(uint *)(v1 + 232), 2, 2059);
            Function_2003178(*(uint *)(v1 + 232), 8, 0xFFFF);
            Function_223df70(v1, 1);
            Function_223df84(v1);
            ((void (__fastcall *)(uint))dword_223783C[0])(*(uint *)(v1 + 556));
            ++*(uint *)(v1 + 988);
          }
          break;
        default:
          if ( !Function_200384c(*(uint *)(a1 + 232)) )
          {
            Function_201ff0c(0x10u, 0);
            Function_223dcb8(v1, 1);
            *(uint *)(v1 + 988) = 0;
            *(uint *)(v1 + 980) = 4;
            Function_223ca30(v1 + 236, 0xFFFFu);
          }
          break;
      }
      goto LABEL_68;
    case 6u:
      Function_223ca30(a1 + 236, 0xCu);
      if ( Function_223b78c(v1) == 1 )
      {
        v6 = 1;
        *(uint *)(v1 + 608) = 1;
      }
      Function_223b808((int *)v1, v6, v7, v8);
      Function_223c7e0(v1);
      v9 = LoadVariableAreaAdress_14(*(uint *)(*(uint *)v1 + 40));
      Function_202cfec(v9, 6);
      v10 = *(uint *)(v1 + 964);
      v11 = *(uint *)(v1 + 12 * v10 + 612);
      if ( v11 != 255 )
      {
        v12 = *(uint *)(*(uint *)v1 + 4 * v11 + 4);
        v13 = (ushort *)Function_202ca28(*(uint *)(*(uint *)v1 + 32), v10);
        SetPkmnData(v12, 171, v13);
      }
      *(uint *)(v1 + 980) = 8;
      goto LABEL_68;
    case 7u:
      switch ( (uchar)*(uint *)(a1 + 988) )
      {
        case 0u:
          if ( Function_223b78c(a1) )
          {
            Function_2003178(*(uint *)(v1 + 232), 2, 2059);
            Function_2003178(*(uint *)(v1 + 232), 8, 0xFFFF);
            Function_223dcb8(v1, 0);
            Function_201ff74(1u, 0);
            ++*(uint *)(v1 + 988);
          }
          else
          {
            *(uint *)(v1 + 980) = 8;
          }
          break;
        case 1u:
          if ( !Function_200384c(*(uint *)(a1 + 232)) )
          {
            Function_2003858(*(uint *)(v1 + 232), 0);
            Function_223ca98(*(uint **)(v1 + 228), v1 + 268, 4u, 2, 1, 0x1Bu, 4u, 40);
            v31 = *(uint *)(v1 + 228);
            v32 = 4;
            v33 = 212;
            v34 = 5;
            v35 = 25;
            v36 = 6;
            *(uint *)(v1 + 548) = Function_2015920(0x35u);
            Function_2015958(*(uint *)(v1 + 548), (int)&v31);
            Function_223ca30(v1 + 268, 0xEu);
            ++*(uint *)(v1 + 988);
          }
          break;
        case 2u:
          Function_201ff74(1u, 1);
          ++*(uint *)(v1 + 988);
          goto LABEL_48;
        case 3u:
LABEL_48:
          v14 = Function_20159fc(*(uint *)(v1 + 548));
          if ( v14 && (v14 == 1 || v14 == 2) )
          {
            *(uint *)(v1 + 992) = v14;
            Function_2003858(*(uint *)(v1 + 232), 1);
            Function_2015a54(*(int **)(v1 + 548));
            Function_2015938(*(uint *)(v1 + 548));
            Function_200e084(v1 + 268, 1);
            Function_201acf4(v1 + 268);
            Function_201a8fc(v1 + 268);
            ++*(uint *)(v1 + 988);
          }
          break;
        case 4u:
          Function_2003178(*(uint *)(a1 + 232), 2, 2059);
          Function_2003178(*(uint *)(v1 + 232), 8, 0xFFFF);
          ++*(uint *)(v1 + 988);
          break;
        case 5u:
          if ( !Function_200384c(*(uint *)(a1 + 232)) )
          {
            v15 = *(uint *)(v1 + 992);
            if ( v15 )
            {
              if ( v15 == 1 )
              {
                Function_223d350(v1);
                Function_223d384(v1);
                Function_223cc8c(v1);
                Function_223b678(v1);
                Function_223b208(v1);
                Function_223b69c(v1, 1);
                *(uint *)(v1 + 980) = 6;
              }
              else if ( v15 == 2 )
              {
                *(uint *)(v1 + 980) = 4;
              }
            }
            Function_223dcb8(v1, 1);
            *(uint *)(v1 + 988) = 0;
          }
          break;
        default:
          goto LABEL_68;
      }
      goto LABEL_68;
    case 8u:
      Function_201ff0c(0x10u, 1);
      Function_2003178(*(uint *)(v1 + 232), 1, 2);
      ++*(uint *)(v1 + 980);
      goto LABEL_68;
    case 9u:
      if ( !Function_200384c(*(uint *)(a1 + 232)) )
      {
        Function_2003178(*(uint *)(v1 + 232), 1, 1);
        Function_2003178(*(uint *)(v1 + 232), 4, 0xFFFF);
        Function_2019060(3u, 3);
        Function_2019060(7u, 3);
        Function_201ff74(4u, 0);
        Function_223d2f4(v1, 0);
        Function_223c568(v1, 0);
        Function_223b96c(v1, 0);
        Function_223bd30(v1, -1, 4u, v16);
        Function_223dcb8(v1, 0);
        ++*(uint *)(v1 + 980);
      }
      goto LABEL_68;
    case 0xAu:
      if ( Function_200384c(*(uint *)(a1 + 232)) || Function_223dcb0(v1) == 1 )
      {
LABEL_68:
        v18 = *(uint *)(v1 + 212);
        if ( v18 == 255 )
        {
          Function_202404c(*(int **)(v1 + 460));
        }
        else if ( Function_20227a4(&v29, &v28) )
        {
          v21 = Function_2098164(*(uchar *)(v1 + 16 * v18 + 808));
          Function_223cdc4(v1 + 236, v21);
          Function_200d4c4(*(int **)(v1 + 16 * v18 + 812), (short)v29, (short)v28);
          Function_223b758(v1, v18, v22, v23);
          Function_223b7d4(v1, v18, v24, v25);
        }
        else
        {
          v26 = Function_223b6c4(v1, v18, v19, v20);
          Function_223b184(*(uchar **)(v1 + 16 * v18 + 816), *(int **)(v1 + 16 * v18 + 812), 0, v27);
          if ( !v26 )
          {
            Function_202cb20(*(uchar **)(*(uint *)v1 + 32), *(uchar *)(v1 + 16 * v18 + 808), 1);
            Function_223cc8c(v1);
            Function_223b704(v1, v18);
          }
          Function_2005748(0x5EAu);
          *(uint *)(v1 + 212) = 255;
          Function_223cdc4(v1 + 236, 0xFFFFu);
        }
        Function_223d318();
        Function_223c544(v1);
        Function_223c304((int **)v1);
        Function_223c88c(v1);
        result = 1;
      }
      else
      {
        Function_200d3f4(*(uint **)(v1 + 760), 0);
        Function_223d494((uint *)v1, 0, 255, 0);
        Function_223ca30(v1 + 236, 7u);
        Function_223cda4(v1);
        result = 1;
      }
      return result;
  }
}

//----- (0223E8A4) --------------------------------------------------------
int __fastcall Function_223e8a4(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 980);
  if ( !v2 )
  {
    *(uint *)(a1 + 980) = 1;
    goto LABEL_6;
  }
  if ( v2 == 1 )
  {
LABEL_6:
    Function_223ce64();
    ++*(uint *)(v1 + 980);
    goto LABEL_9;
  }
  if ( v2 == 2 && Function_200f2ac() == 1 )
  {
    Function_201a8fc(v1 + 236);
    Function_223c8bc(v1);
    Function_223c32c((int **)v1);
    Function_223d31c(v1);
    Function_223c588(v1);
    Function_223bc70(v1);
    Function_2097f30(*(uint *)v1, 1);
    return 0;
  }
LABEL_9:
  Function_223c304((int **)v1);
  Function_223c88c(v1);
  return 1;
}

//----- (0223E91C) --------------------------------------------------------
int *__fastcall Function_223e91c(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v9;
  int v10;

  v10 = a4;
  v4 = a1;
  v5 = (int)(a1 + 1);
  v6 = 8 * a2;
  v9 = 0;
  v7 = a1[2 * a2 + 1];
  if ( v7 != 255 )
    SetPkmnData(*(uint *)(*v4 + 4 * v7 + 4), 162, (ushort *)&v9);
  *(uint *)(v5 + v6) = 255;
  return Function_223c7e0((int)v4);
}

//----- (0223E950) --------------------------------------------------------
int __fastcall Function_223e950(uint *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;

  v4 = (int)a1;
  v5 = a1[245];
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      if ( dword_21BF6C4 & 0xCF3 )
        a1[245] = 2;
    }
    else if ( v5 == 2 )
    {
      Function_223d494(a1, 0, 255, 0);
      Function_223ca30(v4 + 236, 7u);
    }
  }
  else
  {
    Function_223e91c(a1, a1[241], 964, a4);
    Function_223ca30(v4 + 236, 9u);
    ++*(uint *)(v4 + 980);
  }
  Function_223c304((int **)v4);
  Function_223c88c(v4);
  return 1;
}

//----- (0223E9C4) --------------------------------------------------------
int __fastcall Function_223e9c4(int a1)
{
  int v1;
  uint v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = *(uint *)(a1 + 980);
  if ( v2 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_223E9E0 + v2) + 35908066);
  switch ( (uchar)v2 )
  {
    case 0:
      Function_200d474(*(int **)(a1 + 756), 25);
      Function_200d474(*(int **)(v1 + 760), 20);
      Function_200d364(*(int **)(v1 + 756), 1u);
      Function_223ca30(v1 + 236, 0xAu);
      Function_200d3f4(*(uint **)(v1 + 760), 1);
      ++*(uint *)(v1 + 980);
      goto LABEL_5;
    case 1:
LABEL_5:
      if ( Function_223d574((uint *)(v1 + 968)) == 1 )
      {
        Function_223d600(v1, 1, 0, v3);
        Function_2005748(0x5DCu);
      }
      else if ( dword_21BF6C4 & 1 )
      {
        Function_223c80c((uint *)v1, *(uint *)(v1 + 964), *(uint *)(v1 + 968), v3);
        Function_223d600(v1, 1, 1, v4);
        Function_223ca30(v1 + 236, 0xBu);
        *(uint *)(v1 + 980) = 2;
        Function_2005748(0x5DCu);
      }
      else if ( dword_21BF6C4 & 2 )
      {
        Function_200d3f4(*(uint **)(v1 + 760), 0);
        Function_223d600(v1, 0, 1, v5);
        *(uint *)(v1 + 980) = 3;
        Function_2005748(0x5DDu);
      }
      break;
    case 2:
      if ( dword_21BF6C4 & 0xCF3 )
        *(uint *)(a1 + 980) = 3;
      break;
    case 3:
      Function_200d474(*(int **)(a1 + 756), 20);
      Function_200d474(*(int **)(v1 + 760), 25);
      Function_223d494((uint *)v1, 0, 255, 0);
      Function_200d364(*(int **)(v1 + 756), 0);
      Function_223ca30(v1 + 236, 7u);
      break;
    default:
      break;
  }
  Function_223c304((int **)v1);
  Function_223c88c(v1);
  return 1;
}

//----- (0223EB1C) --------------------------------------------------------
int Function_223eb1c()
{
  return 0;
}

//----- (0223EB20) --------------------------------------------------------
uint Function_223eb20()
{
  uint result;

  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  Function_201ff00();
  Function_201ff68();
  REG_DISPCNT &= 0xFFFFE0FF;
  result = REG_DISPCNT_SUB & 0xFFFFE0FF;
  REG_DISPCNT_SUB &= 0xFFFFE0FF;
  return result;
}

//----- (0223EB54) --------------------------------------------------------
int *Function_223eb54()
{
  SetMainLoopFunctionCall(0, 0);
  return Function_20177a4();
}

//----- (0223EB64) --------------------------------------------------------
uint __fastcall Function_223eb64(uint *a1)
{
  uint *v1;
  int *v2;
  char *v3;
  int v4;
  int v5;
  int v6;
  int *v7;
  char *v8;
  int v9;
  int v10;
  int v11;
  int *v12;
  char *v13;
  int v14;
  int v15;
  int v16;
  int v18;
  int v19;
  int v20;
  int v21;
  char v22;
  char v23;
  char v24;
  char v25;
  char v26;
  char v27;
  char v28;
  char v29;

  v1 = a1;
  Function_201ff00();
  v2 = dword_223EE1C;
  v3 = &v22;
  v4 = 5;
  do
  {
    v5 = *v2;
    v6 = v2[1];
    v2 += 2;
    *(uint *)v3 = v5;
    *((uint *)v3 + 1) = v6;
    v3 += 8;
    --v4;
  }
  while ( v4 );
  GX_SetBanks((int *)&v22);
  MIi_CpuClear32(0, (uint *)0x6000000, 0x80000);
  MIi_CpuClear32(0, (uint *)0x6200000, 0x20000);
  MIi_CpuClear32(0, (uint *)0x6400000, 0x40000);
  MIi_CpuClear32(0, (uint *)0x6600000, 0x20000);
  v18 = 1;
  v19 = 0;
  v20 = 0;
  v21 = 1;
  SetGraphicsModes(&v18);
  v7 = dword_223EE78;
  v8 = &v27;
  v9 = 10;
  do
  {
    v10 = *v7;
    v11 = v7[1];
    v7 += 2;
    *(uint *)v8 = v10;
    *((uint *)v8 + 1) = v11;
    v8 += 8;
    --v9;
  }
  while ( v9 );
  *(uint *)v8 = *v7;
  Function_20183c4(v1, 1u, (int *)&v27, 0);
  Function_20183c4(v1, 2u, (int *)&v28, 0);
  Function_20183c4(v1, 3u, (int *)&v29, 0);
  Function_2019ebc(v1, 1u);
  Function_2019ebc(v1, 2u);
  Function_2019ebc(v1, 3u);
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 1;
  Function_201ff0c(1u, 1);
  v12 = dword_223EECC;
  v13 = &v23;
  v14 = 14;
  do
  {
    v15 = *v12;
    v16 = v12[1];
    v12 += 2;
    *(uint *)v13 = v15;
    *((uint *)v13 + 1) = v16;
    v13 += 8;
    --v14;
  }
  while ( v14 );
  Function_20183c4(v1, 4u, (int *)&v23, 0);
  Function_20183c4(v1, 5u, (int *)&v24, 0);
  Function_20183c4(v1, 6u, (int *)&v25, 0);
  Function_20183c4(v1, 7u, (int *)&v26, 0);
  Function_2019ebc(v1, 4u);
  Function_2019ebc(v1, 5u);
  Function_2019ebc(v1, 6u);
  Function_2019ebc(v1, 7u);
  return Function_201ff74(4u, 0);
}

//----- (0223ECB0) --------------------------------------------------------
int __fastcall Function_223ecb0(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_2008a94(*(uint *)(a1 + 420));
  Function_201dcac();
  Function_200c800();
  Function_2003694(*(uint *)(v1 + 232));
  Function_201c2b8(*(uint *)(v1 + 228));
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

