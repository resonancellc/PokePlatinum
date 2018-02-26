//----- (022561D4) --------------------------------------------------------
int __fastcall Function_22561d4(int *a1)
{
  int *v1;
  int v2;

  v1 = a1;
  v2 = malloc(8u, 176);
  if ( v2 )
  {
    if ( Function_225621c() && AddTaskToTaskList1((int)Function_22562bc, v2, 1u) )
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
  int v7;
  int v8;
  int v9;
  int v11;

  v3 = a1;
  v4 = a2;
  *(uint *)(a1 + 172) = a2;
  v11 = a3;
  *(uint *)(a1 + 12) = Function_2256408();
  v5 = ((int (__fastcall *)(uint))dword_225423C[192])(*(uint *)(v3 + 172));
  v6 = v5;
  v7 = LoadVariableAreaAdress_6(*(uint *)(v5 + 12));
  v8 = AddVariableAreaAdress_6_MapData4(v7);
  if ( IsMapMatrixEqualZero(**(uint **)(v6 + 28)) )
  {
    *(uint *)(v3 + 4) = *(uint *)(*(uint *)(v6 + 28) + 8);
    v9 = *(uint *)(*(uint *)(v6 + 28) + 12);
  }
  else
  {
    *(uint *)(v3 + 4) = *(uint *)(v8 + 8);
    v9 = *(uint *)(v8 + 12);
  }
  *(uint *)(v3 + 8) = v9;
  *(uint *)(v3 + 4) /= 32;
  *(uint *)(v3 + 8) /= 32;
  Function_22564e0(v3, v4);
  if ( !Function_225650c(v3 + 168, v3 + 4, v11) )
    return 0;
  *(uchar *)v3 = 0;
  *(uchar *)(v3 + 1) = 0;
  *(uchar *)(v3 + 2) = 0;
  return 1;
}

//----- (022562A8) --------------------------------------------------------
uint __fastcall Function_22562a8(int a1)
{
  int v1;

  v1 = a1;
  Function_225654c(*(uint *)(a1 + 168));
  return free(v1);
}

//----- (022562BC) --------------------------------------------------------
int __fastcall Function_22562bc(int result, uchar *a2)
{
  int v2;
  uint v3;
  int *v4;

  v2 = (int)a2;
  v3 = *a2;
  v4 = (int *)result;
  if ( v3 < 3 )
  {
    result = ((int (__fastcall *)(int))*(&off_2256A2C + v3))(v2);
    if ( result )
    {
      Function_22562a8(v2);
      Call_RemoveTaskFromTaskList(v4);
      result = ((int (__fastcall *)(uint))dword_225423C[9])(*(uint *)(v2 + 172));
    }
  }
  return result;
}

//----- (022562F0) --------------------------------------------------------
int __fastcall Function_22562f0(int result)
{
  *(uchar *)(result + 2) = 1;
  return result;
}

//----- (022562F8) --------------------------------------------------------
char *__fastcall Function_22562f8(char *result, char a2)
{
  if ( result[2] )
    a2 = 2;
  *result = a2;
  result[1] = 0;
  return result;
}

//----- (0225630C) --------------------------------------------------------
int __fastcall Function_225630c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_225657c(*(uint *)(v1 + 168), 0) )
    {
      ((void (__fastcall *)(uint))dword_225423C[4])(*(uint *)(v1 + 172));
      Function_22562f8((char *)v1, 1);
    }
  }
  else
  {
    Function_2256558(*(uint *)(v1 + 168), 0);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (02256358) --------------------------------------------------------
int __fastcall Function_2256358(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;

  v1 = a1;
  if ( *(uchar *)(a1 + 2) )
  {
    Function_22562f8((char *)a1, 2);
    result = 0;
  }
  else
  {
    *(uint *)(a1 + 148) = Function_2256478();
    if ( Function_225657c(*(uint *)(v1 + 168), 2) && ((int (__fastcall *)(int *, int *))dword_225423C[160])(&v4, &v3) )
    {
      if ( (uint)(v3 - 16) < 0xC0 && (uint)(v4 - 16) < 0xC0 )
      {
        *(uint *)(v1 + 12) = Function_2256408(v1);
        Function_2256558(*(uint *)(v1 + 168), 2);
      }
    }
    result = 0;
  }
  return result;
}

//----- (022563D0) --------------------------------------------------------
int __fastcall Function_22563d0(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_2256588(*(uint *)(v1 + 168)) )
      return 1;
  }
  else
  {
    Function_2256558(*(uint *)(v1 + 168), 1);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (02256408) --------------------------------------------------------
int __fastcall Function_2256408(int a1)
{
  int v1;
  int v2;
  uint v3;
  int v4;
  int v5;
  char *v6;

  v1 = a1;
  v2 = ((int (__fastcall *)(uint))dword_225423C[194])(*(uint *)(a1 + 172));
  v3 = 0;
  v4 = LoadVariableAreaAdress_a(v2);
  v5 = 0;
  do
  {
    if ( Function_2027d84(v4, v3) == 1 && Function_2027d04(v4, v3) == 5 )
    {
      v6 = (char *)dword_2256A38 + 2 * v3;
      *(uchar *)(v1 + 16) = *((uchar *)dword_2256A38 + 2 * v3);
      *(uchar *)(v1 + 17) = v6[1];
      while ( v3 + 1 < 0x76
           && *(uchar *)(v1 + 16) == (uchar)v6[2]
           && *(uchar *)(v1 + 17) == (uchar)v6[3] )
      {
        v6 += 2;
        ++v3;
      }
      ++v5;
      v1 += 2;
      if ( v5 >= 64 )
        break;
    }
    ++v3;
  }
  while ( v3 < 0x76 );
  return v5;
}

//----- (02256478) --------------------------------------------------------
int __fastcall Function_2256478(uint *a1)
{
  uint *v1;
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

  v1 = a1;
  v2 = 0;
  if ( ((int (__fastcall *)(uint))dword_225423C[190])(a1[43]) )
  {
    v3 = ((int (__fastcall *)(uint))dword_225423C[192])(v1[43]);
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
    if ( v10 != v1[1] || v11 != v1[2] )
    {
      v1[1] = v10;
      v1[2] = v11;
      v2 = 1;
    }
  }
  return v2;
}

//----- (022564E0) --------------------------------------------------------
BOOL __fastcall Function_22564e0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  BOOL result;
  BOOL *v7;

  v2 = a1;
  v3 = ((int (__fastcall *)(int))dword_225423C[194])(a2);
  v4 = LoadFlagAdress(v3);
  v5 = 0;
  do
  {
    result = Function_206b1f0(v4, v5);
    v7 = (BOOL *)(v2 + 152);
    ++v5;
    v2 += 4;
    *v7 = result;
  }
  while ( v5 < 4 );
  return result;
}

//----- (0225650C) --------------------------------------------------------
int __fastcall Function_225650c(uint *a1, int a2)
{
  int v2;
  uint *v3;
  int v4;
  uint *v5;
  int v6;

  v2 = a2;
  v3 = a1;
  v4 = malloc(8u, 352);
  v5 = (uint *)v4;
  if ( !v4 )
    return 0;
  v6 = ((int (__fastcall *)(int, int))dword_225423C[917])(v4 + 8, 4);
  *v5 = v2;
  v5[1] = ((int (__fastcall *)(int))dword_225423C[270])(v6);
  v5[8] = ((int (*)(void))dword_225423C[266])();
  v5[84] = *(uint *)(v2 + 140);
  *v3 = v5;
  return 1;
}

//----- (0225654C) --------------------------------------------------------
int __fastcall Function_225654c(int result)
{
  if ( result )
    result = free(result);
  return result;
}

//----- (02256558) --------------------------------------------------------
int __fastcall Function_2256558(int *a1)
{
  int v1;

  v1 = *a1;
  return ((int (__fastcall *)(int *))dword_225423C[976])(&dword_2256B40);
}

//----- (0225657C) --------------------------------------------------------
void Function_225657c()
{
  JUMPOUT(&dword_225423C[957]);
}

//----- (02256588) --------------------------------------------------------
void Function_2256588()
{
  JUMPOUT(&dword_225423C[966]);
}

//----- (02256594) --------------------------------------------------------
int __fastcall Function_2256594(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = ((int (*)(void))dword_225423C[1024])();
  return ((int (__fastcall *)(int, int))dword_225423C[1018])(v2 + 8, v1);
}

//----- (022565A8) --------------------------------------------------------
int __fastcall Function_22565a8(int a1, int a2)
{
  int v2;
  int v3;
  uint v4;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  REG_MOSAIC_SUB = 0;
  byte_400104D = 0;
  Function_20183c4(*(uint **)(v3 + 4), 6u, &dword_2256A38[59], 0);
  v4 = LoadFromNARC_RGCN(12, 117, *(uint **)(v3 + 4), 6u, 0, 0, 1, 8);
  LoadFromNARC_RCSN(12, 116, *(uint **)(v3 + 4), 6u, 0, 0, 1, 8);
  ((void (*)(void))dword_225423C[287])();
  Function_2256650(v3, v4 >> 5);
  Function_2019448(*(uint **)(v3 + 4), 6u);
  REG_DISPCNT_SUB = REG_DISPCNT_SUB & 0xFFFFE0FF | ((((uint)(REG_DISPCNT_SUB << 19) >> 27) | 4) << 8);
  Function_22567fc(v3);
  return Function_2256594(v2);
}

//----- (02256650) --------------------------------------------------------
ushort *__fastcall Function_2256650(int a1, short a2, int a3, int a4)
{
  short v4;
  int v5;
  ushort *result;
  int v7;
  int v8;
  char v9;
  int v10;

  v10 = a4;
  v4 = a2;
  v5 = a1;
  result = Function_200b010_LoadFromNARCCallMsgDecrypt(26, 0x1CBu, 0, 8u);
  v7 = (int)result;
  if ( result )
  {
    Function_201a7e8(*(uint **)(v5 + 4), (int)&v9, 6, 18, 20, 8u, 2u, 0, v4);
    Function_201ada4_ClearTextBox((int)&v9, 4);
    Function_201d78c((int)&v9, 0);
    Function_201a9f4((int)&v9);
    Function_201accc((int)&v9);
    Function_201a8fc((int)&v9);
    result = (ushort *)Function_20237bc_FreeMsg(v7, v8);
  }
  return result;
}

//----- (022566D0) --------------------------------------------------------
void __fastcall Function_22566d0(int a1, int a2)
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
    if ( v4 == 1 )
    {
      Function_225657c();
      if ( v5 )
      {
        Function_2256984(v3);
        REG_MOSAIC_SUB = 0;
        byte_400104D = 0;
        Function_2019044(*(uint *)(v3 + 4), 6);
        Function_2256594(v2);
      }
    }
  }
  else
  {
    *(uint *)(v3 + 348) = 1;
    ((void (__fastcall *)(int))dword_225423C[1028])(v2);
  }
}

//----- (0225672C) --------------------------------------------------------
int __fastcall Function_225672c(int a1, int a2)
{
  int v2;
  uint *v3;
  int result;

  v2 = a2;
  v3 = (uint *)((int (__fastcall *)(int))dword_225423C[1024])(a2);
  ((void (__fastcall *)(int))dword_225423C[1025])(v2);
  result = ((int (__fastcall *)(int))dword_225423C[1027])(v2);
  if ( result )
  {
    if ( result == 1 )
    {
      Function_2256920(v3);
      result = ((int (__fastcall *)(int))dword_225423C[1028])(v2);
    }
    else if ( result == 2 )
    {
      result = 348;
      if ( v3[87] )
      {
        result = Function_2256594(v2);
      }
      else if ( ++v3[86] >= 3 )
      {
        v3[86] = 0;
        --v3[85];
        REG_MOSAIC_SUB = v3[85] | 16 * v3[85];
        byte_400104D = 16 * v3[85] | v3[85];
        result = v3[85];
        if ( !result )
          result = Function_2256594(v2);
      }
    }
  }
  else
  {
    v3[85] = 6;
    v3[86] = 0;
    v3[87] = 0;
    REG_MOSAIC_SUB = 16 * v3[85] | v3[85];
    byte_400104D = 16 * v3[85] | v3[85];
    ((void (__fastcall *)(int))dword_225423C[122])(1656);
    result = ((int (__fastcall *)(int))dword_225423C[1028])(v2);
  }
  return result;
}

//----- (022567FC) --------------------------------------------------------
uint *__fastcall Function_22567fc(uint *a1)
{
  uint *v1;
  uint *v2;
  int v3;
  uint *v4;
  int v5;
  uint *v6;
  uint *result;
  int v8;
  int v9;
  int v10;
  int v11;
  short v12;
  char v13;
  char v14;
  char v15;
  char v16;

  v1 = a1;
  v2 = (uint *)*a1;
  Function_2006ec0(12, 120, 1, 0, 0, 1, 8);
  ((void (__fastcall *)(uint *, int, int, int, int))dword_225423C[1479])(
    v1 + 78,
    12,
    118,
    119,
    8);
  v13 = 0;
  v14 = 2;
  v16 = 0;
  ((void (__fastcall *)(uint, uint, int *, int *))dword_225423C[1760])(*v2, v2[1], &v9, &v8);
  v10 = v9 << 12;
  v11 = v8 << 12;
  v15 = 0;
  v12 = 0;
  v1[9] = ((int (__fastcall *)(uint, int *, uint *))dword_225423C[1397])(v1[8], &v10, v1 + 78);
  ((void (*)(void))dword_225423C[1475])();
  v15 = 1;
  v12 = 7;
  v3 = 0;
  v10 = 0;
  v11 = 0;
  v4 = v1;
  do
  {
    v4[10] = ((int (__fastcall *)(uint, int *, uint *))dword_225423C[1397])(v1[8], &v10, v1 + 78);
    ((void (*)(void))dword_225423C[1475])();
    ++v3;
    ++v4;
  }
  while ( v3 < 64 );
  Function_2256920(v1);
  v5 = 0;
  v6 = v1;
  do
  {
    ((void (__fastcall *)(int, int *, int *))dword_225423C[1776])(v5, &v9, &v8);
    v10 = v9 << 12;
    v11 = v8 << 12;
    v15 = 2;
    v12 = v5 + 14;
    v6[74] = ((int (__fastcall *)(uint, int *, uint *))dword_225423C[1397])(v1[8], &v10, v1 + 78);
    ((void (__fastcall *)(uint, int))dword_225423C[1475])(v6[74], 1);
    if ( !v2[37] )
      ((void (__fastcall *)(uint, int))dword_225423C[1462])(v6[74], 1);
    ++v5;
    ++v6;
    ++v2;
  }
  while ( v5 < 4 );
  result = AddTaskToTaskList1((int)Function_22569fc, (int)v1, 3u);
  v1[83] = result;
  return result;
}

//----- (02256920) --------------------------------------------------------
int __fastcall Function_2256920(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int result;
  int v8;
  int *v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v13 = a4;
  v4 = a1;
  v5 = *a1;
  v6 = 0;
  result = *(uint *)(*a1 + 8);
  if ( result > 0 )
  {
    v8 = 0;
    v9 = v4;
    do
    {
      ((void (__fastcall *)(uint, uint, int *, int *))dword_225423C[1760])(
        *(uchar *)(v5 + v8 + 12),
        *(uchar *)(v5 + v8 + 13),
        &v12,
        &v11);
      ((void (__fastcall *)(int, int, int))dword_225423C[1457])(v9[10], v12 << 12, v11 << 12);
      ((void (__fastcall *)(int, uint))dword_225423C[1462])(v9[10], 0);
      v5 = *v4;
      ++v6;
      result = *(uint *)(*v4 + 8);
      v8 += 2;
      ++v9;
    }
    while ( v6 < result );
  }
  if ( v6 < 64 )
  {
    v10 = (int)&v4[v6];
    do
    {
      result = ((int (__fastcall *)(uint, int))dword_225423C[1462])(*(uint *)(v10 + 40), 1);
      ++v6;
      v10 += 4;
    }
    while ( v6 < 64 );
  }
  return result;
}

//----- (02256984) --------------------------------------------------------
int __fastcall Function_2256984(int a1)
{
  uint *v1;
  int *v2;
  int v3;
  uint *v4;
  int v5;
  uint *v6;

  v1 = (uint *)a1;
  v2 = *(int **)(a1 + 332);
  if ( v2 )
  {
    Call_RemoveTaskFromTaskList(v2);
    v1[83] = 0;
  }
  v3 = 0;
  v4 = v1;
  do
  {
    if ( v4[74] )
    {
      ((void (__fastcall *)(uint))dword_225423C[1437])(v1[8]);
      v4[74] = 0;
    }
    ++v3;
    ++v4;
  }
  while ( v3 < 4 );
  v5 = 0;
  v6 = v1;
  do
  {
    if ( v6[10] )
    {
      ((void (__fastcall *)(uint))dword_225423C[1437])(v1[8]);
      v6[10] = 0;
    }
    ++v5;
    ++v6;
  }
  while ( v5 < 64 );
  if ( v1[9] )
  {
    ((void (__fastcall *)(uint))dword_225423C[1437])(v1[8]);
    v1[9] = 0;
  }
  return ((int (__fastcall *)(uint *))dword_225423C[1501])(v1 + 78);
}

//----- (022569FC) --------------------------------------------------------
int __fastcall Function_22569fc(int a1, uint *a2)
{
  uint *v2;
  uint *v3;
  int result;
  int v5;
  int v6;

  v2 = a2;
  v3 = (uint *)*a2;
  result = v3[36];
  if ( result )
  {
    ((void (__fastcall *)(uint, uint, int *, int *))dword_225423C[1760])(*v3, v3[1], &v6, &v5);
    result = ((int (__fastcall *)(uint, int, int))dword_225423C[1457])(v2[9], v6 << 12, v5 << 12);
  }
  return result;
}

