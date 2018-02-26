//----- (022561D4) --------------------------------------------------------
int __fastcall Function_22561d4(int *a1)
{
  int *v1;
  int v2;

  v1 = a1;
  v2 = malloc(8u, 156);
  if ( v2 )
  {
    if ( Function_225621c() && AddTaskToTaskList1((int)Function_2256384, v2, 1u) )
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
  uchar *v5;
  uchar *v6;
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
  int v22;
  int v23;
  uchar *v24;
  int v25;

  v3 = a1;
  v22 = a2;
  v23 = a3;
  *(uint *)(a1 + 120) = ((int (__fastcall *)(int))dword_225423C[193])(a2);
  v4 = 0;
  v5 = (uchar *)v3;
  v24 = (uchar *)(v3 + 17);
  v6 = (uchar *)(v3 + 16);
  do
  {
    v5[19] = 1;
    v5[18] = v4;
    Function_20569e8(*(uint *)(v3 + 120), v4, v6, v24);
    v6 += 4;
    v5[16] += 16;
    v5[17] += 16;
    v5[19] = 0;
    *(uchar *)(v3 + v4 + 148) = v4;
    ++v4;
    v5 += 4;
    v24 += 4;
  }
  while ( v4 < 6 );
  *(uint *)(v3 + 40) = 0;
  *(uint *)(v3 + 44) = 0;
  *(uint *)(v3 + 12) = 0;
  v7 = ((int (__fastcall *)(int))dword_225423C[194])(v22);
  v8 = LoadFlagAdress(v7);
  v9 = 0;
  v10 = v3;
  do
  {
    *(uint *)(v10 + 48) = Function_206b1f0(v8, v9++);
    v10 += 4;
  }
  while ( v9 < 4 );
  v11 = ((int (__fastcall *)(int))dword_225423C[194])(v22);
  v25 = LoadVariableAreaAdress_19(v11);
  v12 = 0;
  v13 = v3;
  v14 = v3;
  do
  {
    v15 = Function_202d924(v25, (uchar)v12);
    *(uint *)(v13 + 124) = v15;
    *(uint *)(v14 + 64) = Function_202d93c(v15, 8u);
    ++v12;
    *(uchar *)(v3 + 154) = 0;
    v13 += 4;
    v14 += 8;
  }
  while ( v12 < 6 );
  v16 = ((int (__fastcall *)(int))dword_225423C[192])(v22);
  v17 = v16;
  v18 = LoadVariableAreaAdress_6(*(uint *)(v16 + 12));
  v19 = AddVariableAreaAdress_6_MapData4(v18);
  if ( IsMapMatrixEqualZero(**(uint **)(v17 + 28)) )
  {
    *(uint *)(v3 + 4) = *(uint *)(*(uint *)(v17 + 28) + 8);
    v20 = *(uint *)(*(uint *)(v17 + 28) + 12);
  }
  else
  {
    *(uint *)(v3 + 4) = *(uint *)(v19 + 8);
    v20 = *(uint *)(v19 + 12);
  }
  *(uint *)(v3 + 8) = v20;
  *(uint *)(v3 + 4) /= 32;
  *(uint *)(v3 + 8) /= 32;
  if ( !Function_2256634(v3 + 112, v3 + 4, v23) )
    return 0;
  *(uchar *)v3 = 0;
  *(uchar *)(v3 + 1) = 0;
  *(uchar *)(v3 + 2) = 0;
  *(uint *)(v3 + 116) = v22;
  return 1;
}

//----- (0225634C) --------------------------------------------------------
uint __fastcall Function_225634c(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    Function_20569c4(*(uint *)(v1 + 120), v2++, *(uchar *)(v3 + 16) - 16, *(uchar *)(v3 + 17) - 16);
    v3 += 4;
  }
  while ( v2 < 6 );
  Function_2256670(*(uint *)(v1 + 112));
  return free(v1);
}

//----- (02256384) --------------------------------------------------------
int __fastcall Function_2256384(int result, uchar *a2)
{
  int v2;
  uint v3;
  int *v4;

  v2 = (int)a2;
  v3 = *a2;
  v4 = (int *)result;
  if ( v3 < 4 )
  {
    result = ((int (__fastcall *)(int))*(&off_2256A4C + v3))(v2);
    if ( result )
    {
      Function_225634c(v2);
      Call_RemoveTaskFromTaskList(v4);
      result = ((int (__fastcall *)(uint))dword_225423C[9])(*(uint *)(v2 + 116));
    }
  }
  return result;
}

//----- (022563B8) --------------------------------------------------------
int __fastcall Function_22563b8(int result)
{
  *(uchar *)(result + 2) = 1;
  return result;
}

//----- (022563C0) --------------------------------------------------------
char *__fastcall Function_22563c0(char *result, char a2)
{
  if ( result[2] )
    a2 = 3;
  *result = a2;
  result[1] = 0;
  return result;
}

//----- (022563D4) --------------------------------------------------------
int __fastcall Function_22563d4(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_2256890(*(uint *)(v1 + 112), 0) )
    {
      ((void (__fastcall *)(uint))dword_225423C[4])(*(uint *)(v1 + 116));
      Function_22563c0((char *)v1, 1);
    }
  }
  else
  {
    Function_225686c(*(uint *)(v1 + 112), 0);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (02256414) --------------------------------------------------------
int __fastcall Function_2256414(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uchar *v8;
  int v9;
  int v10;

  v1 = a1;
  if ( *(uchar *)(a1 + 2) )
  {
    Function_22563c0((char *)a1, 3);
    result = 0;
  }
  else
  {
    *(uint *)(a1 + 12) = Function_2256584();
    *(uint *)(v1 + 44) = 0;
    if ( ((int (__fastcall *)(int *, int *))dword_225423C[160])(&v10, &v9) )
    {
      v3 = 0;
      while ( 1 )
      {
        v4 = *(uchar *)(v1 + v3 + 148);
        v5 = v1 + 4 * v4;
        v6 = *(uchar *)(v5 + 16) - v10;
        if ( v6 >= -8 && v6 <= 8 )
        {
          v7 = *(uchar *)(v5 + 17) - v9;
          if ( v7 >= -8 && v7 <= 8 )
            break;
        }
        if ( ++v3 >= 6 )
          goto LABEL_11;
      }
      Function_2256534(v1, v4);
      v8 = (uchar *)(v1 + 4 * v4);
      v8[16] = v10;
      v8[17] = v9;
      v8[19] = 1;
      *(uint *)(v1 + 40) = v4;
      *(uint *)(v1 + 44) = 1;
      Function_22563c0((char *)v1, 2);
    }
LABEL_11:
    result = 0;
  }
  return result;
}

//----- (022564A8) --------------------------------------------------------
int __fastcall Function_22564a8(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;

  v1 = a1;
  if ( *(uchar *)(a1 + 2) )
  {
    Function_22563c0((char *)a1, 3);
    result = 0;
  }
  else
  {
    *(uint *)(a1 + 12) = Function_2256584();
    if ( ((int (__fastcall *)(int *, int *))dword_225423C[140])(&v4, &v3) )
    {
      *(uchar *)(v1 + 4 * *(uint *)(v1 + 40) + 16) = v4;
      *(uchar *)(v1 + 4 * *(uint *)(v1 + 40) + 17) = v3;
    }
    else
    {
      *(uchar *)(v1 + 4 * *(uint *)(v1 + 40) + 19) = 0;
      Function_22563c0((char *)v1, 1);
    }
    result = 0;
  }
  return result;
}

//----- (02256500) --------------------------------------------------------
int __fastcall Function_2256500(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_225689c(*(uint *)(v1 + 112)) )
      return 1;
  }
  else
  {
    Function_225686c(*(uint *)(v1 + 112), 1);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (02256534) --------------------------------------------------------
int __fastcall Function_2256534(int result, int a2)
{
  int v2;
  int v3;

  if ( *(uchar *)(result + 148) != a2 )
  {
    v2 = 0;
    do
    {
      if ( a2 == *(uchar *)(result + v2 + 148) )
        break;
      ++v2;
    }
    while ( v2 < 6 );
    for ( ; v2; --v2 )
      *(uchar *)(result + v2 + 148) = *(uchar *)(result + v2 + 147);
    *(uchar *)(result + 148) = a2;
    v3 = 0;
    do
    {
      *(uchar *)(result + 4 * *(uchar *)(result + v3 + 148) + 18) = v3;
      ++v3;
    }
    while ( v3 < 6 );
  }
  return result;
}

//----- (02256584) --------------------------------------------------------
int __fastcall Function_2256584(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v1 = a1;
  v2 = 0;
  if ( ((int (__fastcall *)(uint))dword_225423C[190])(*(uint *)(a1 + 116)) )
  {
    v3 = ((int (__fastcall *)(uint))dword_225423C[192])(*(uint *)(v1 + 116));
    v4 = v3;
    v5 = LoadVariableAreaAdress_6(*(uint *)(v3 + 12));
    v6 = AddVariableAreaAdress_6_MapData4(v5);
    if ( IsMapMatrixEqualZero(**(uint **)(v4 + 28)) )
    {
      v7 = *(uint *)(v4 + 28);
      v8 = *(uint *)(v7 + 8);
      v9 = *(uint *)(v7 + 12);
    }
    else
    {
      v8 = *(uint *)(v6 + 8);
      v9 = *(uint *)(v6 + 12);
    }
    v10 = v8 / 32;
    v11 = v9 / 32;
    if ( v10 != *(uint *)(v1 + 4) || v11 != *(uint *)(v1 + 8) )
    {
      *(uint *)(v1 + 4) = v10;
      *(uint *)(v1 + 8) = v11;
      v2 = 1;
    }
    if ( (uchar)++*(uchar *)(v1 + 154) >= 5u )
    {
      v12 = 0;
      v13 = v1;
      do
      {
        v14 = *(uint *)(v1 + 64);
        if ( !v14 )
        {
          v14 = Function_202d93c(*(uint *)(v13 + 124), 8u);
          *(uint *)(v1 + 64) = v14;
          if ( v14 )
            v2 = 1;
        }
        if ( v14 )
        {
          *(uint *)(v1 + 68) = Function_202d93c(*(uint *)(v13 + 124), 1u);
          v2 = 1;
        }
        ++v12;
        v1 += 8;
        v13 += 4;
      }
      while ( v12 < 6 );
    }
  }
  return v2;
}

//----- (02256634) --------------------------------------------------------
int __fastcall Function_2256634(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  uint *v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = malloc(8u, 128);
  v5 = (uint *)v4;
  if ( !v4 )
    return 0;
  v6 = ((int (__fastcall *)(int, int))dword_225423C[917])(v4 + 8, 4);
  *v5 = v3;
  v5[1] = ((int (__fastcall *)(int))dword_225423C[270])(v6);
  v5[8] = ((int (*)(void))dword_225423C[266])();
  Function_2256684(v5, v3);
  *v2 = v5;
  return 1;
}

//----- (02256670) --------------------------------------------------------
uint __fastcall Function_2256670(uint result)
{
  int v1;

  v1 = result;
  if ( result )
  {
    Function_22567fc();
    result = free(v1);
  }
  return result;
}

//----- (02256684) --------------------------------------------------------
uint *__fastcall Function_2256684(uint *a1, uchar *a2)
{
  uint *v2;
  uchar *v3;
  int v4;
  uchar *v5;
  int v6;
  uint *v7;
  int v8;
  uint *v9;
  uint *result;
  uint *v11;
  uchar *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  short v18;
  char v19;
  char v20;
  char v21;
  char v22;

  v2 = a1;
  v3 = a2;
  Function_2006ec0(12, 120, 1, 0, 0, 1, 8);
  ((void (__fastcall *)(uint *, int, int, int, int))dword_225423C[1479])(
    v2 + 26,
    12,
    118,
    119,
    8);
  v19 = 0;
  v20 = 2;
  v22 = 0;
  ((void (__fastcall *)(uint, uint, int *, int *))dword_225423C[1760])(
    *(uint *)v3,
    *((uint *)v3 + 1),
    &v15,
    &v14);
  v16 = v15 << 12;
  v17 = v14 << 12;
  v21 = 1;
  v18 = 0;
  v2[25] = ((int (__fastcall *)(uint, int *, uint *))dword_225423C[1397])(v2[8], &v16, v2 + 26);
  v22 = 1;
  v4 = 0;
  v5 = v3;
  v11 = v2;
  do
  {
    v16 = v5[12] << 12;
    v17 = v5[13] << 12;
    v21 = v5[14] + 2;
    v18 = v4++ + 1;
    v11[9] = ((int (__fastcall *)(uint, int *, uint *))dword_225423C[1397])(v2[8], &v16, v2 + 26);
    v5 += 4;
    ++v11;
  }
  while ( v4 < 6 );
  v6 = 0;
  v7 = v2;
  v12 = v3;
  do
  {
    ((void (__fastcall *)(int, int *, int *))dword_225423C[1776])(v6, &v15, &v14);
    v16 = v15 << 12;
    v17 = v14 << 12;
    v21 = 9;
    v18 = v6 + 14;
    v7[15] = ((int (__fastcall *)(uint, int *, uint *))dword_225423C[1397])(v2[8], &v16, v2 + 26);
    if ( !*((uint *)v12 + 11) )
      ((void (__fastcall *)(uint, int))dword_225423C[1462])(v7[15], 1);
    ++v6;
    ++v7;
    v12 += 4;
  }
  while ( v6 < 4 );
  v8 = 0;
  v9 = v2;
  do
  {
    v13 = ((int (__fastcall *)(uint, int *, int *))dword_225423C[1786])(*((uint *)v3 + 16), &v15, &v14);
    v16 = v15 << 12;
    v17 = v14 << 12;
    v21 = 8;
    v18 = 18;
    v9[19] = ((int (__fastcall *)(uint, int *, uint *))dword_225423C[1397])(v2[8], &v16, v2 + 26);
    if ( !*((uint *)v3 + 15) || !v13 )
      ((void (__fastcall *)(uint, int))dword_225423C[1462])(v9[19], 1);
    ++v8;
    v3 += 8;
    ++v9;
  }
  while ( v8 < 6 );
  result = AddTaskToTaskList1((int)Function_2256968, (int)v2, 3u);
  v2[31] = result;
  return result;
}

//----- (022567FC) --------------------------------------------------------
int __fastcall Function_22567fc(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = a1;
  Call_RemoveTaskFromTaskList(*(int **)(a1 + 124));
  v2 = 0;
  v3 = v1;
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
  while ( v2 < 6 );
  v4 = 0;
  v5 = v1;
  do
  {
    if ( *(uint *)(v5 + 60) )
    {
      ((void (__fastcall *)(uint))dword_225423C[1437])(*(uint *)(v1 + 32));
      *(uint *)(v5 + 60) = 0;
    }
    ++v4;
    v5 += 4;
  }
  while ( v4 < 4 );
  v6 = 0;
  v7 = v1;
  do
  {
    if ( *(uint *)(v7 + 76) )
    {
      ((void (__fastcall *)(uint))dword_225423C[1437])(*(uint *)(v1 + 32));
      *(uint *)(v7 + 76) = 0;
    }
    ++v6;
    v7 += 4;
  }
  while ( v6 < 6 );
  ((void (__fastcall *)(uint, uint))dword_225423C[1437])(*(uint *)(v1 + 32), *(uint *)(v1 + 100));
  return ((int (__fastcall *)(int))dword_225423C[1501])(v1 + 104);
}

//----- (0225686C) --------------------------------------------------------
int __fastcall Function_225686c(int *a1)
{
  int v1;

  v1 = *a1;
  return ((int (__fastcall *)(int *))dword_225423C[976])(&dword_2256A78);
}

//----- (02256890) --------------------------------------------------------
void Function_2256890()
{
  JUMPOUT(&dword_225423C[957]);
}

//----- (0225689C) --------------------------------------------------------
void Function_225689c()
{
  JUMPOUT(&dword_225423C[966]);
}

//----- (022568A8) --------------------------------------------------------
int __fastcall Function_22568a8(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = ((int (*)(void))dword_225423C[1024])();
  return ((int (__fastcall *)(int, int))dword_225423C[1018])(v2 + 8, v1);
}

//----- (022568BC) --------------------------------------------------------
int __fastcall Function_22568bc(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  Function_20183c4(*(uint **)(v3 + 4), 6u, dword_2256A5C, 0);
  LoadFromNARC_RGCN(12, 117, *(uint **)(v3 + 4), 6u, 0, 0, 1, 8);
  LoadFromNARC_RCSN(12, 115, *(uint **)(v3 + 4), 6u, 0, 0, 1, 8);
  ((void (*)(void))dword_225423C[287])();
  Function_2019448(*(uint **)(v3 + 4), 6u);
  REG_DISPCNT_SUB = REG_DISPCNT_SUB & 0xFFFFE0FF | ((((uint)(REG_DISPCNT_SUB << 19) >> 27) | 4) << 8);
  return Function_22568a8(v2);
}

//----- (0225694C) --------------------------------------------------------
int __fastcall Function_225694c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  Function_2019044(*(uint *)(v3 + 4), 6);
  return Function_22568a8(v2);
}

//----- (02256968) --------------------------------------------------------
int __fastcall Function_2256968(int a1, uint *a2)
{
  uint *v2;
  uint *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int result;
  uint v10;
  bool v11;
  int v12;
  uint *v13;
  int v14;
  int v15;

  v2 = a2;
  v3 = (uint *)*a2;
  if ( *(uint *)(*a2 + 40) )
  {
    v4 = v3[9];
    v5 = v4;
    v6 = (int)&v3[v4];
    if ( *(uchar *)(v6 + 15) )
    {
      v7 = (int)(a2 + 9);
      v13 = &a2[v5 + 9];
      ((void (__fastcall *)(uint, uint, uint))dword_225423C[1464])(a2[8], *v13, 0);
      ((void (__fastcall *)(uint, int))dword_225423C[1442])(*(uint *)(v7 + v5 * 4), v4 + 8);
    }
    else
    {
      v8 = (int)(a2 + 9);
      v13 = &a2[v5 + 9];
      ((void (__fastcall *)(uint, uint, int))dword_225423C[1464])(a2[8], *v13, *(uchar *)(v6 + 14) + 2);
      ((void (__fastcall *)(uint, int))dword_225423C[1442])(*(uint *)(v8 + v5 * 4), v4 + 1);
    }
    ((void (__fastcall *)(uint, int, int))dword_225423C[1457])(
      *v13,
      LOBYTE(v3[v5 + 3]) << 12,
      BYTE1(v3[v5 + 3]) << 12);
  }
  result = v3[2];
  if ( result )
  {
    ((void (__fastcall *)(uint, uint, int *, int *))dword_225423C[1760])(*v3, v3[1], &v15, &v14);
    ((void (__fastcall *)(uint, int, int))dword_225423C[1457])(v2[25], v15 << 12, v14 << 12);
    v10 = 0;
    do
    {
      if ( v3[15] )
      {
        v11 = ((int (__fastcall *)(uint, int *, int *))dword_225423C[1786])(v3[16], &v15, &v14) == 0;
        v12 = v2[19];
        if ( v11 )
        {
          result = ((int (__fastcall *)(int, int))dword_225423C[1462])(v12, 1);
        }
        else
        {
          ((void (__fastcall *)(int, int, int))dword_225423C[1457])(v12, v15 << 12, v14 << 12);
          result = ((int (__fastcall *)(uint, uint))dword_225423C[1462])(v2[19], 0);
        }
      }
      else
      {
        result = ((int (__fastcall *)(uint, int))dword_225423C[1462])(v2[19], 1);
      }
      ++v10;
      v3 += 2;
      ++v2;
    }
    while ( v10 < 6 );
  }
  return result;
}

