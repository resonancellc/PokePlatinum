//----- (022561D4) --------------------------------------------------------
int __fastcall Function_22561d4(int *a1)
{
  int *v1;
  int v2;

  v1 = a1;
  v2 = malloc(8u, 64);
  if ( v2 )
  {
    if ( Function_225621c() && AddTaskToTaskList1((int)Function_22562d0, v2, 1u) )
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
  int v10;
  int v11;

  v3 = a1;
  v10 = a2;
  v11 = a3;
  v4 = ((int (__fastcall *)(int))dword_225423C[192])(a2);
  v5 = ((int (*)(void))dword_22430B8[34])();
  *(uint *)(v3 + 8) = v5;
  if ( v5 )
    v6 = ((int (__fastcall *)(int))dword_22430B8[36])(v4);
  else
    v6 = 0;
  *(uint *)(v3 + 4) = v6;
  v7 = 0;
  v8 = v3;
  do
  {
    *(uint *)(v8 + 24) = ((int (__fastcall *)(int, uint))dword_22430B8[23])(v4, (uchar)v7);
    *(uint *)(v8 + 12) = ((int (__fastcall *)(int, uint))dword_22430B8[12])(v4, (uchar)v7++);
    v8 += 4;
  }
  while ( v7 < 3 );
  *(uint *)(v3 + 36) = ((int (__fastcall *)(int))dword_22430B8[3])(v4);
  if ( !Function_2256420(v3 + 44, v3 + 4, v11) )
    return 0;
  *(uchar *)v3 = 0;
  *(uchar *)(v3 + 1) = 0;
  *(uchar *)(v3 + 2) = 0;
  *(uint *)(v3 + 52) = ((int (__fastcall *)(int *, int, int (*)(), int, int))dword_225423C[1572])(
                           dword_22568E0,
                           3,
                           Function_2256314,
                           v3,
                           8);
  *(uint *)(v3 + 56) = 0;
  *(uint *)(v3 + 60) = 0;
  *(uint *)(v3 + 48) = v10;
  return 1;
}

//----- (022562B8) --------------------------------------------------------
uint __fastcall Function_22562b8(int a1)
{
  int v1;

  v1 = a1;
  ((void (__fastcall *)(uint))dword_225423C[1598])(*(uint *)(a1 + 52));
  Function_2256454(*(uint *)(v1 + 44));
  return free(v1);
}

//----- (022562D0) --------------------------------------------------------
uint __fastcall Function_22562d0(int *a1, uchar *a2)
{
  uchar *v2;
  int *v3;
  uint result;

  v2 = a2;
  v3 = a1;
  result = *a2;
  if ( result < 3 )
  {
    ((void (__fastcall *)(uint, uint))dword_225423C[183])(*((uint *)a2 + 12), *((uint *)a2 + 13));
    result = ((int (__fastcall *)(uchar *))dword_22568E0[*v2 + 3])(v2);
    if ( result )
    {
      Function_22562b8((int)v2);
      Call_RemoveTaskFromTaskList(v3);
      result = ((int (__fastcall *)(uint))dword_225423C[9])(*((uint *)v2 + 12));
    }
  }
  return result;
}

//----- (0225630C) --------------------------------------------------------
int __fastcall Function_225630c(int result)
{
  *(uchar *)(result + 2) = 1;
  return result;
}

//----- (02256314) --------------------------------------------------------
int __fastcall Function_2256314(int result, int a2, int a3, int a4)
{
  *(uint *)(a4 + 60) = result;
  *(uint *)(a4 + 56) = a2;
  return result;
}

//----- (0225631C) --------------------------------------------------------
char *__fastcall Function_225631c(char *result, char a2)
{
  if ( result[2] )
    a2 = 2;
  *result = a2;
  result[1] = 0;
  return result;
}

//----- (02256330) --------------------------------------------------------
int __fastcall Function_2256330(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_2256484(*(uint *)(v1 + 44), 0) )
    {
      ((void (__fastcall *)(uint))dword_225423C[4])(*(uint *)(v1 + 48));
      Function_225631c((char *)v1, 1);
    }
  }
  else
  {
    Function_2256460(*(uint *)(v1 + 44), 0);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (02256370) --------------------------------------------------------
int __fastcall Function_2256370(int a1)
{
  uint *v1;
  int result;
  int v3;
  int v4;
  int v5;
  uint v6;

  v1 = (uint *)a1;
  if ( *(uchar *)(a1 + 2) )
  {
    Function_225631c((char *)a1, 2);
    result = 0;
  }
  else
  {
    v3 = ((int (__fastcall *)(uint))dword_225423C[192])(*(uint *)(a1 + 48));
    v4 = ((int (*)(void))dword_22430B8[34])();
    v1[2] = v4;
    if ( v4 )
      v5 = ((int (__fastcall *)(int))dword_22430B8[36])(v3);
    else
      v5 = 0;
    if ( v5 == v1[1] )
    {
      if ( Function_2256484(v1[11], 3) && v1[14] == 1 )
      {
        v6 = v1[15];
        if ( v6 < v1[9] )
        {
          if ( v1[v6 + 6] )
          {
            v1[10] = v6;
            Function_2256460(v1[11], 3);
          }
        }
        v1[14] = 0;
      }
      result = 0;
    }
    else
    {
      v1[1] = v5;
      Function_2256460(v1[11], 2);
      result = 0;
    }
  }
  return result;
}

//----- (022563EC) --------------------------------------------------------
int __fastcall Function_22563ec(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_2256490(*(uint *)(v1 + 44)) )
      return 1;
  }
  else
  {
    Function_2256460(*(uint *)(v1 + 44), 1);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (02256420) --------------------------------------------------------
int __fastcall Function_2256420(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  uint *v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = malloc(8u, 176);
  v5 = (uint *)v4;
  if ( !v4 )
    return 0;
  v6 = ((int (__fastcall *)(int, int))dword_225423C[917])(v4 + 8, 4);
  *v5 = v3;
  v5[1] = ((int (__fastcall *)(int))dword_225423C[270])(v6);
  v5[8] = ((int (*)(void))dword_225423C[266])();
  *v2 = v5;
  return 1;
}

//----- (02256454) --------------------------------------------------------
int __fastcall Function_2256454(int result)
{
  if ( result )
    result = free(result);
  return result;
}

//----- (02256460) --------------------------------------------------------
int __fastcall Function_2256460(int *a1)
{
  int v1;

  v1 = *a1;
  return ((int (__fastcall *)(int *))dword_225423C[976])(&dword_2256914);
}

//----- (02256484) --------------------------------------------------------
void Function_2256484()
{
  JUMPOUT(&dword_225423C[957]);
}

//----- (02256490) --------------------------------------------------------
void Function_2256490()
{
  JUMPOUT(&dword_225423C[966]);
}

//----- (0225649C) --------------------------------------------------------
int __fastcall Function_225649c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = ((int (*)(void))dword_225423C[1024])();
  return ((int (__fastcall *)(int, int))dword_225423C[1018])(v2 + 8, v1);
}

//----- (022564B0) --------------------------------------------------------
int __fastcall Function_22564b0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  v4 = ((int (__fastcall *)(int))dword_225423C[1025])(v2);
  Function_20183c4(*(uint **)(v3 + 4), 6u, dword_22568F8, 0);
  LoadFromNARC_RGCN(12, 122, *(uint **)(v3 + 4), 6u, 0, 0, 1, 8);
  LoadFromNARC_RCSN(12, 121, *(uint **)(v3 + 4), 6u, 0, 0, 1, 8);
  ((void (*)(void))dword_225423C[287])();
  Function_22566ac(v3, v4);
  REG_DISPCNT_SUB = REG_DISPCNT_SUB & 0xFFFFE0FF | ((((uint)(REG_DISPCNT_SUB << 19) >> 27) | 4) << 8);
  return Function_225649c(v2);
}

//----- (02256548) --------------------------------------------------------
int __fastcall Function_2256548(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  Function_2256840();
  Function_2019044(*(uint *)(v3 + 4), 6);
  return Function_225649c(v2);
}

//----- (02256568) --------------------------------------------------------
int __fastcall Function_2256568(int a1, int a2, int a3, uint a4)
{
  int v4;
  uint *v5;
  uint *v6;
  uint *v7;
  uint v8;
  int v9;
  int v10;
  uint v12;

  v12 = a4;
  v4 = a2;
  v5 = (uint *)((int (__fastcall *)(int))dword_225423C[1024])(a2);
  v6 = (uint *)((int (__fastcall *)(int))dword_225423C[1025])(v4);
  v7 = v6;
  v8 = *v6;
  if ( v8 )
  {
    v12 = Function_2079d8c(v8, 0, 0);
    ((void (__fastcall *)(uint, uint *))dword_225423C[1113])(v5[43], &v12);
    v9 = Function_2079edc(*v7, 0, 0);
    ((void (__fastcall *)(uint, int))dword_225423C[1471])(v5[9], v9 + 1);
    Function_2256874(v5 + 13, v7[1]);
  }
  else
  {
    ((void (__fastcall *)(uint, int))dword_225423C[1462])(v5[9], 1);
    v10 = 0;
    do
    {
      ((void (__fastcall *)(uint, int))dword_225423C[1462])(v5[13], 1);
      ++v10;
      ++v5;
    }
    while ( v10 < 3 );
  }
  return Function_225649c(v4);
}

//----- (022565E0) --------------------------------------------------------
int __fastcall Function_22565e0(int a1, int a2)
{
  int v2;
  uint *v3;
  int v4;
  int v5;
  int v6;
  uint v7;

  v2 = a2;
  v3 = (uint *)((int (__fastcall *)(int))dword_225423C[1024])(a2);
  v4 = ((int (__fastcall *)(int))dword_225423C[1025])(v2);
  v5 = ((int (__fastcall *)(int))dword_225423C[1027])(v2);
  v6 = v5;
  if ( !v5 )
  {
    v3[39] = v3[*(uint *)(v4 + 36) + 10];
    ((void (__fastcall *)(uint, uint *, uint *))dword_225423C[1459])(v3[39], v3 + 41, v3 + 40);
    ((void (__fastcall *)(uint, uint))dword_225423C[130])(*(uint *)(v4 + 4 * *(uint *)(v4 + 36) + 8), 0);
    ((void (__fastcall *)(uint, int))dword_225423C[1442])(v3[39], 6);
    ((void (__fastcall *)(int))dword_225423C[1028])(v2);
    ++v6;
LABEL_5:
    v7 = Function_201d15c((uint)(16 * (46080 * v6 + 2048)) >> 16);
    ((void (__fastcall *)(uint, uint, uint))dword_225423C[1457])(v3[39], v3[41], v3[40] - 24 * v7);
    return ((int (__fastcall *)(int))dword_225423C[1028])(v2);
  }
  if ( v5 != 16 )
    goto LABEL_5;
  ((void (__fastcall *)(uint, uint, uint))dword_225423C[1457])(v3[39], v3[41], v3[40]);
  ((void (__fastcall *)(uint, int))dword_225423C[1442])(v3[39], 4);
  return Function_225649c(v2);
}

//----- (022566AC) --------------------------------------------------------
int __fastcall Function_22566ac(int a1, int *a2, int a3, int a4)
{
  int v4;
  uint v5;
  int *v6;
  int v7;
  int *v8;
  int v9;
  uint *v10;
  int v11;
  uint v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int result;
  int *v23;
  int v24;
  int *v25;
  uint *v26;
  int v27;
  int v28;
  int *v29;
  uint v30;
  int v31;
  int v32;

  v32 = a4;
  v4 = a1;
  v23 = a2;
  ((void (__fastcall *)(int, int, int, int, int))dword_225423C[1479])(a1 + 120, 12, 5, 6, 8);
  ((void (__fastcall *)(int, int, int, int, int))dword_225423C[1479])(
    v4 + 100,
    12,
    123,
    124,
    8);
  v5 = (uint)Function_2006ec0(12, 125, 1, 0, 0, 1, 8) >> 5;
  *(uint *)(v4 + 172) = v5;
  v30 = v5;
  v6 = v23;
  v7 = 0;
  v31 = *v23;
  v8 = &v31;
  do
  {
    ++v7;
    v8[1] = v6[2];
    ++v6;
    ++v8;
  }
  while ( v7 < 3 );
  v9 = 0;
  v10 = (uint *)&v31;
  v11 = v4;
  do
  {
    v12 = *v10;
    if ( !*v10 )
      v12 = 1;
    ++v9;
    *(uint *)(v11 + 140) = Function_2079d8c(v12, 0, 0);
    ++v10;
    v11 += 4;
  }
  while ( v9 < 4 );
  ((void (__fastcall *)(uint, int, int, int))dword_225423C[1113])(v30, v4 + 140, 4, 1);
  ((void (__fastcall *)(int))dword_225423C[1097])(1);
  v13 = 0;
  v14 = v4;
  v24 = 0;
  do
  {
    ++v13;
    *(uint *)(v14 + 36) = 0;
    v14 += 4;
  }
  while ( v13 < 16 );
  v28 = v4;
  v29 = dword_2256950;
  v15 = 4;
  v27 = 0;
  v26 = (uint *)&v31;
  v25 = v23;
  do
  {
    *(uint *)(v28 + 36) = ((int (__fastcall *)(uint, int *, int))dword_225423C[1397])(
                              *(uint *)(v4 + 32),
                              v29,
                              v4 + 120);
    ((void (*)(void))dword_225423C[1473])();
    v16 = 0;
    do
    {
      v17 = v16 + v15;
      v18 = ((int (__fastcall *)(uint, int *, int))dword_225423C[1397])(
              *(uint *)(v4 + 32),
              &dword_2256950[4 * (v16++ + v15)],
              v4 + 100);
      *(uint *)(v4 + 4 * v17 + 36) = v18;
    }
    while ( v16 < 3 );
    if ( *v26 )
    {
      v20 = Function_2079edc(*v26, 0, 0);
      ((void (__fastcall *)(uint, int))dword_225423C[1471])(*(uint *)(v28 + 36), v20 + 1);
      if ( v24 )
        v21 = v25[4];
      else
        v21 = v23[1];
      Function_2256874(v4 + 36 + 4 * v15, v21);
    }
    else
    {
      ((void (__fastcall *)(uint, int))dword_225423C[1462])(*(uint *)(v28 + 36), 1);
      v19 = 0;
      do
        ((void (__fastcall *)(uint, int))dword_225423C[1462])(*(uint *)(v4 + 4 * (v19++ + v15) + 36), 1);
      while ( v19 < 3 );
    }
    v15 += 3;
    v29 += 4;
    v28 += 4;
    v27 += 32;
    ++v26;
    ++v25;
    result = v24 + 1;
    v24 = result;
  }
  while ( result < 4 );
  return result;
}

//----- (02256840) --------------------------------------------------------
int __fastcall Function_2256840(int a1)
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
    {
      ((void (__fastcall *)(uint))dword_225423C[1437])(*(uint *)(v1 + 32));
      *(uint *)(v3 + 36) = 0;
    }
    ++v2;
    v3 += 4;
  }
  while ( v2 < 16 );
  ((void (__fastcall *)(int))dword_225423C[1501])(v1 + 120);
  return ((int (__fastcall *)(int))dword_225423C[1501])(v1 + 100);
}

//----- (02256874) --------------------------------------------------------
uint __fastcall Function_2256874(uint *a1, uint a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  uint result;
  int v7;
  int v8;

  v2 = a1;
  v7 = a2;
  v8 = 0;
  if ( a2 > 0x3E7 )
    v7 = 999;
  v3 = 0;
  v4 = 100;
  do
  {
    v5 = u32_div_f(v7, v4);
    if ( v8 == 1 || v5 || v3 == 2 )
    {
      ((void (__fastcall *)(uint, int))dword_225423C[1442])(*v2, v5);
      v8 = 1;
    }
    else
    {
      ((void (__fastcall *)(uint, int))dword_225423C[1462])(*v2, 1);
    }
    v7 -= v5 * v4;
    ++v2;
    ++v3;
    result = s32_div_f(v4, 10);
    v4 = result;
  }
  while ( v3 < 3 );
  return result;
}

