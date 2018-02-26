//----- (022561D4) --------------------------------------------------------
int __fastcall Function_22561d4(int *a1)
{
  int *v1;
  int v2;

  v1 = a1;
  v2 = malloc(8u, 52);
  if ( v2 )
  {
    if ( Function_225621c() && AddTaskToTaskList1((int)Function_2256318, v2, 1u) )
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
  int v9;
  int v10;
  int v11;

  v11 = a4;
  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = ((int (__fastcall *)(int))dword_225423C[193])(a2);
  *(uint *)(v5 + 16) = v7;
  *(uchar *)(v5 + 3) = Function_20568d8(v7);
  Function_20568e0(*(uint *)(v5 + 16), (uint *)&v10, (uint *)&v9);
  *(uchar *)(v5 + 6) = v10;
  *(uchar *)(v5 + 7) = v9;
  Function_22562c0(v5 + 3);
  if ( !Function_22566ec(v5 + 8, v5 + 3, v6) )
    return 0;
  *(uchar *)v5 = 0;
  *(uchar *)(v5 + 1) = 0;
  *(uchar *)(v5 + 2) = 0;
  *(uint *)(v5 + 20) = ((int (__fastcall *)(int *, int, int (*)(), int, int))dword_225423C[1572])(
                           dword_2256CAC,
                           6,
                           Function_2256310,
                           v5,
                           8);
  *(uint *)(v5 + 28) = 0;
  ((void (__fastcall *)(uint, int, int))dword_225423C[1672])(*(uint *)(v5 + 20), 2, 4);
  ((void (__fastcall *)(uint, int, int))dword_225423C[1672])(*(uint *)(v5 + 20), 3, 4);
  ((void (__fastcall *)(uint))dword_225423C[1672])(*(uint *)(v5 + 20));
  ((void (__fastcall *)(uint, int, int))dword_225423C[1672])(*(uint *)(v5 + 20), 5, 4);
  *(uint *)(v5 + 44) = 0;
  *(uint *)(v5 + 48) = 0;
  *(uint *)(v5 + 12) = v4;
  return 1;
}

//----- (022562C0) --------------------------------------------------------
uint __fastcall Function_22562c0(int a1, int a2, int a3, int a4)
{
  int v4;
  uint v5;
  uint v6;
  uint result;
  uint v8;
  uint v9;
  int v10;

  v10 = a4;
  v4 = a1;
  Function_2013880(&v8);
  if ( v8 >= 0x18 )
  {
    u32_div_f(v8, 24);
    v8 = v5;
  }
  if ( v9 >= 0x3C )
  {
    u32_div_f(v8, 60);
    v8 = v6;
  }
  *(uchar *)(v4 + 1) = v8;
  result = v9;
  *(uchar *)(v4 + 2) = v9;
  return result;
}

//----- (022562F8) --------------------------------------------------------
uint __fastcall Function_22562f8(int a1)
{
  int v1;

  v1 = a1;
  ((void (__fastcall *)(uint))dword_225423C[1598])(*(uint *)(a1 + 20));
  Function_2256728(*(uint *)(v1 + 8));
  return free(v1);
}

//----- (02256310) --------------------------------------------------------
int __fastcall Function_2256310(int result, int a2, int a3, int a4)
{
  *(uint *)(a4 + 24) = result;
  *(uint *)(a4 + 28) = a2;
  return result;
}

//----- (02256318) --------------------------------------------------------
uint __fastcall Function_2256318(int *a1, uchar *a2)
{
  uchar *v2;
  int *v3;
  uint result;

  v2 = a2;
  v3 = a1;
  result = *a2;
  if ( result < 5 )
  {
    ((void (__fastcall *)(uint, uint))dword_225423C[183])(*((uint *)a2 + 3), *((uint *)a2 + 5));
    result = ((int (__fastcall *)(uchar *))*(&off_2256C98 + *v2))(v2);
    if ( result )
    {
      Function_22562f8((int)v2);
      Call_RemoveTaskFromTaskList(v3);
      result = ((int (__fastcall *)(uint))dword_225423C[9])(*((uint *)v2 + 3));
    }
  }
  return result;
}

//----- (02256354) --------------------------------------------------------
int __fastcall Function_2256354(int result)
{
  *(uchar *)(result + 2) = 1;
  return result;
}

//----- (0225635C) --------------------------------------------------------
char *__fastcall Function_225635c(char *result, char a2)
{
  if ( result[2] )
    a2 = 4;
  *result = a2;
  result[1] = 0;
  return result;
}

//----- (02256370) --------------------------------------------------------
int __fastcall Function_2256370(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_225693c(*(uint *)(v1 + 8), 0) )
    {
      ((void (__fastcall *)(uint))dword_225423C[4])(*(uint *)(v1 + 12));
      if ( *(uchar *)(v1 + 3) )
        Function_225635c((char *)v1, 2);
      else
        Function_225635c((char *)v1, 1);
    }
  }
  else
  {
    Function_2256918(*(uint *)(v1 + 8), 0);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (022563C0) --------------------------------------------------------
int __fastcall Function_22563c0(char *a1, int a2, int a3, int a4)
{
  char *v4;
  int result;
  int v6;
  int v7;

  v4 = a1;
  if ( a1[2] )
  {
    Function_225635c(a1, 4);
    result = 0;
  }
  else
  {
    v6 = (uchar)a1[1];
    if ( v4[1] )
    {
      if ( v6 == 1 )
      {
        if ( Function_225693c(*((uint *)v4 + 2), 2) )
          Function_225635c(v4, 2);
      }
    }
    else
    {
      v7 = *((uint *)v4 + 7);
      if ( v7 != 1 || *((uint *)v4 + 6) )
      {
        if ( v7 != 1 || *((uint *)v4 + 6) != 1 )
        {
          if ( v7 == 1 || v7 == 7 )
          {
            switch ( (uchar)*((uint *)v4 + 6) )
            {
              case 2u:
                if ( ++v4[6] > 23 )
                  v4[6] = 0;
                break;
              case 3u:
                if ( --v4[6] < 0 )
                  v4[6] = 23;
                break;
              case 4u:
                if ( ++v4[7] > 59 )
                  v4[7] = 0;
                break;
              case 5u:
                if ( --v4[7] < 0 )
                  v4[7] = 59;
                break;
              default:
                break;
            }
            *((uint *)v4 + 7) = 0;
            Function_2256918(*((uint *)v4 + 2), 4);
          }
        }
        else
        {
          *((uint *)v4 + 7) = 0;
          ((void (__fastcall *)(int))dword_225423C[122])(1646);
        }
      }
      else
      {
        v4[3] = 1;
        Function_22562c0((int)(v4 + 3), 1, a3, a4);
        Function_20568f4(*((uint *)v4 + 4), 1, v4[6], v4[7]);
        Function_2256918(*((uint *)v4 + 2), 2);
        *((uint *)v4 + 7) = 0;
        ++v4[1];
      }
    }
    result = 0;
  }
  return result;
}

//----- (022564D0) --------------------------------------------------------
int __fastcall Function_22564d0(char *a1)
{
  char *v1;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  if ( a1[2] )
  {
    Function_225635c(a1, 4);
    return 0;
  }
  v3 = (uchar)a1[1];
  if ( v1[1] )
  {
    if ( v3 == 1 )
    {
      if ( Function_225693c(*((uint *)v1 + 2), 4) )
        v1[1] = 0;
    }
  }
  else
  {
    if ( Function_22566cc(v1 + 3) )
    {
      Function_225635c(v1, 3);
      return 0;
    }
    v4 = *((uint *)v1 + 7);
    if ( v4 != 1 || *((uint *)v1 + 6) != 1 )
    {
      if ( v4 != 1 || *((uint *)v1 + 6) )
      {
        if ( !Function_2256664(v1) )
          Function_2256668(v1);
        if ( Function_2256680(v1, &v6, &v5) && v5 != v1[5] )
        {
          v1[5] = v5;
          v1[4] = v6;
          Function_2256918(*((uint *)v1 + 2), 4);
          ++v1[1];
        }
      }
      else
      {
        ((void (__fastcall *)(int))dword_225423C[122])(1646);
      }
    }
    else
    {
      v1[3] = 0;
      Function_2256918(*((uint *)v1 + 2), 3);
      *((uint *)v1 + 7) = 0;
      Function_225635c(v1, 1);
    }
  }
  return 0;
}

//----- (0225659C) --------------------------------------------------------
int __fastcall Function_225659c(char *a1)
{
  char *v1;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  if ( a1[2] )
  {
    Function_225635c(a1, 4);
    return 0;
  }
  v3 = (uchar)a1[1];
  if ( v1[1] )
  {
    if ( v3 == 1 )
    {
      if ( !Function_22566cc(v1 + 3) )
      {
        Function_2256c90(*((uint *)v1 + 2));
        Function_2256918(*((uint *)v1 + 2), 2);
        Function_225635c(v1, 2);
        return 0;
      }
      if ( *((uint *)v1 + 7) == 1 && *((uint *)v1 + 6) == 1 )
      {
        v1[3] = 0;
        Function_2256c90(*((uint *)v1 + 2));
        Function_2256918(*((uint *)v1 + 2), 3);
        *((uint *)v1 + 7) = 0;
        Function_225635c(v1, 1);
        return 0;
      }
      if ( !Function_2256664(v1) )
        Function_2256668(v1);
      if ( Function_2256680(v1, &v5, &v4) )
      {
        if ( v4 != v1[5] )
        {
          v1[5] = v4;
          v1[4] = v5;
          Function_2256918(*((uint *)v1 + 2), 4);
        }
      }
    }
  }
  else
  {
    Function_2256918(*((uint *)v1 + 2), 5);
    ++v1[1];
  }
  return 0;
}

//----- (02256664) --------------------------------------------------------
int __fastcall Function_2256664(int a1)
{
  return *(uint *)(a1 + 44);
}

//----- (02256668) --------------------------------------------------------
int __fastcall Function_2256668(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = *(uint *)(a1 + 44);
  if ( !result )
  {
    Function_2013880((uint *)(v1 + 32));
    result = 1;
    *(uint *)(v1 + 48) = 1;
  }
  return result;
}

//----- (02256680) --------------------------------------------------------
int __fastcall Function_2256680(uint *a1, uint *a2, uint *a3)
{
  if ( !a1[12] )
    return 0;
  *a2 = a1[8];
  *a3 = a1[9];
  return 1;
}

//----- (02256698) --------------------------------------------------------
int __fastcall Function_2256698(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_2256948(*(uint *)(v1 + 8)) )
      return 1;
  }
  else
  {
    Function_2256918(*(uint *)(v1 + 8), 1);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (022566CC) --------------------------------------------------------
int __fastcall Function_22566cc(char *a1)
{
  int v1;

  v1 = 1;
  if ( a1[1] != a1[3] || a1[2] != a1[4] )
    v1 = 0;
  return v1;
}

//----- (022566EC) --------------------------------------------------------
int __fastcall Function_22566ec(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  uint *v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = malloc(8u, 156);
  v5 = (uint *)v4;
  if ( !v4 )
    return 0;
  v6 = ((int (__fastcall *)(int, int))dword_225423C[917])(v4 + 8, 8);
  *v5 = v3;
  v5[1] = ((int (__fastcall *)(int))dword_225423C[270])(v6);
  v5[12] = ((int (*)(void))dword_225423C[266])();
  Function_225673c(v5, v3);
  *v2 = v5;
  return 1;
}

//----- (02256728) --------------------------------------------------------
uint __fastcall Function_2256728(uint result)
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

//----- (0225673C) --------------------------------------------------------
int __fastcall Function_225673c(uint *a1, uchar *a2)
{
  uint *v2;
  int *v3;
  int v4;
  uint *v5;
  int v6;
  int result;
  uchar *v8;

  v2 = a1;
  v8 = a2;
  Function_2006ec0(12, 2, 1, 0, 0, 1, 8);
  Function_2006ec0(12, 79, 1, 2560, 0, 1, 8);
  ((void (__fastcall *)(uint *, int, int, int, int))dword_225423C[1479])(
    v2 + 26,
    12,
    77,
    78,
    8);
  ((void (__fastcall *)(uint *, int, int, int, int))dword_225423C[1479])(
    v2 + 31,
    12,
    3,
    4,
    8);
  v3 = dword_2256D34;
  v4 = 0;
  v5 = v2;
  do
  {
    if ( v4 < 9 || v4 > 12 )
    {
      v5[13] = ((int (__fastcall *)(uint, int *, uint *))dword_225423C[1397])(v2[12], v3, v2 + 26);
      ((void (*)(void))dword_225423C[1473])();
    }
    else
    {
      v5[13] = ((int (__fastcall *)(uint, int *, uint *))dword_225423C[1397])(v2[12], v3, v2 + 31);
    }
    ++v4;
    v3 += 4;
    ++v5;
  }
  while ( v4 < 13 );
  v6 = v2[13];
  if ( *v8 )
  {
    ((void (__fastcall *)(int, int))dword_225423C[1442])(v6, 3);
    ((void (__fastcall *)(uint, int))dword_225423C[1442])(v2[16], 5);
    ((void (__fastcall *)(uint, int))dword_225423C[1442])(v2[17], 5);
    ((void (__fastcall *)(uint, int))dword_225423C[1462])(v2[18], 1);
    ((void (__fastcall *)(uint, int))dword_225423C[1462])(v2[19], 1);
    ((void (__fastcall *)(uint, int))dword_225423C[1462])(v2[20], 1);
    ((void (__fastcall *)(uint, int))dword_225423C[1462])(v2[21], 1);
    result = Function_2256894(v2, (char)v8[1], (char)v8[2]);
  }
  else
  {
    ((void (__fastcall *)(int, int))dword_225423C[1442])(v6, 2);
    ((void (__fastcall *)(uint, int))dword_225423C[1442])(v2[16], 5);
    ((void (__fastcall *)(uint, int))dword_225423C[1442])(v2[17], 4);
    result = Function_2256894(v2, (char)v8[3], (char)v8[4]);
  }
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
    if ( *(uint *)(v3 + 52) )
      ((void (__fastcall *)(uint))dword_225423C[1437])(*(uint *)(v1 + 48));
    ++v2;
    v3 += 4;
  }
  while ( v2 < 13 );
  ((void (__fastcall *)(int))dword_225423C[1501])(v1 + 104);
  return ((int (__fastcall *)(int))dword_225423C[1501])(v1 + 124);
}

//----- (02256894) --------------------------------------------------------
int __fastcall Function_2256894(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  uint v5;
  uint v6;
  uint v7;

  v3 = a1;
  REG_DIVCNT = 0;
  REG_DIV_NUMER_L = a2;
  v4 = a3;
  REG_DIV_DENOM_L = 10;
  REG_DIV_DENOM_H = 0;
  v5 = (uint)&REG_DIVCNT >> 11;
  while ( (ushort)REG_DIVCNT & (ushort)v5 )
    ;
  ((void (__fastcall *)(uint, int))dword_225423C[1442])(a1[22], REG_DIV_RESULT_L);
  v6 = (uint)&REG_DIVCNT >> 11;
  while ( (ushort)REG_DIVCNT & (ushort)v6 )
    ;
  ((void (__fastcall *)(uint, int))dword_225423C[1442])(v3[23], REG_DIVREM_RESULT_L);
  REG_DIVCNT = 0;
  REG_DIV_NUMER_L = v4;
  REG_DIV_DENOM_L = 10;
  REG_DIV_DENOM_H = 0;
  v7 = (uint)&REG_DIVCNT >> 11;
  while ( (ushort)REG_DIVCNT & (ushort)v7 )
    ;
  ((void (__fastcall *)(uint, int))dword_225423C[1442])(v3[24], REG_DIV_RESULT_L);
  while ( (ushort)REG_DIVCNT & (ushort)((uint)&REG_DIVCNT >> 11) )
    ;
  return ((int (__fastcall *)(uint, int))dword_225423C[1442])(v3[25], REG_DIVREM_RESULT_L);
}

//----- (02256918) --------------------------------------------------------
int __fastcall Function_2256918(int *a1)
{
  int v1;

  v1 = *a1;
  return ((int (__fastcall *)(int *))dword_225423C[976])(&dword_2256CE0);
}

//----- (0225693C) --------------------------------------------------------
void Function_225693c()
{
  JUMPOUT(&dword_225423C[957]);
}

//----- (02256948) --------------------------------------------------------
void Function_2256948()
{
  JUMPOUT(&dword_225423C[966]);
}

//----- (02256954) --------------------------------------------------------
int __fastcall Function_2256954(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = ((int (*)(void))dword_225423C[1024])();
  return ((int (__fastcall *)(int, int))dword_225423C[1018])(v2 + 8, v1);
}

//----- (02256968) --------------------------------------------------------
int __fastcall Function_2256968(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  Function_20183c4(*(uint **)(v3 + 4), 6u, &dword_2256CAC[6], 0);
  LoadFromNARC_RGCN(12, 76, *(uint **)(v3 + 4), 6u, 0, 0, 1, 8);
  LoadFromNARC_RCSN(12, 75, *(uint **)(v3 + 4), 6u, 0, 0, 1, 8);
  ((void (*)(void))dword_225423C[287])();
  Function_2019448(*(uint **)(v3 + 4), 6u);
  REG_DISPCNT_SUB = REG_DISPCNT_SUB & 0xFFFFE0FF | ((((uint)(REG_DISPCNT_SUB << 19) >> 27) | 4) << 8);
  return Function_2256954(v2);
}

//----- (022569F8) --------------------------------------------------------
void __fastcall Function_22569f8(int a1, int a2)
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
      Function_225693c();
      if ( v5 )
      {
        Function_2019044(*(uint *)(v3 + 4), 6);
        Function_2256954(v2);
      }
    }
  }
  else
  {
    Function_2256c90(v3);
    ((void (__fastcall *)(int))dword_225423C[1028])(v2);
  }
}

//----- (02256A40) --------------------------------------------------------
int __fastcall Function_2256a40(int a1, int a2)
{
  int v2;
  uint *v3;
  int v4;

  v2 = a2;
  v3 = (uint *)((int (__fastcall *)(int))dword_225423C[1024])(a2);
  v4 = ((int (__fastcall *)(int))dword_225423C[1025])(v2);
  ((void (__fastcall *)(int))dword_225423C[122])(1635);
  ((void (__fastcall *)(uint, int))dword_225423C[1442])(v3[13], 3);
  ((void (__fastcall *)(uint, int))dword_225423C[1442])(v3[16], 5);
  ((void (__fastcall *)(uint, int))dword_225423C[1442])(v3[17], 5);
  ((void (__fastcall *)(uint, uint))dword_225423C[1442])(v3[14], 0);
  ((void (__fastcall *)(uint, uint))dword_225423C[1442])(v3[15], 0);
  ((void (__fastcall *)(uint, int))dword_225423C[1462])(v3[18], 1);
  ((void (__fastcall *)(uint, int))dword_225423C[1462])(v3[19], 1);
  ((void (__fastcall *)(uint, int))dword_225423C[1462])(v3[20], 1);
  ((void (__fastcall *)(uint, int))dword_225423C[1462])(v3[21], 1);
  Function_2256894(v3, *(char *)(v4 + 1), *(char *)(v4 + 2));
  return Function_2256954(v2);
}

//----- (02256ABC) --------------------------------------------------------
int __fastcall Function_2256abc(int a1, int a2)
{
  int v2;
  uint *v3;
  int v4;

  v2 = a2;
  v3 = (uint *)((int (__fastcall *)(int))dword_225423C[1024])(a2);
  v4 = ((int (__fastcall *)(int))dword_225423C[1025])(v2);
  ((void (__fastcall *)(int))dword_225423C[122])(1635);
  ((void (__fastcall *)(uint, int))dword_225423C[1442])(v3[13], 2);
  ((void (__fastcall *)(uint, int))dword_225423C[1442])(v3[16], 5);
  ((void (__fastcall *)(uint, int))dword_225423C[1442])(v3[17], 4);
  ((void (__fastcall *)(uint, uint))dword_225423C[1442])(v3[14], 0);
  ((void (__fastcall *)(uint, uint))dword_225423C[1442])(v3[15], 0);
  ((void (__fastcall *)(uint, uint))dword_225423C[1462])(v3[18], 0);
  ((void (__fastcall *)(uint, uint))dword_225423C[1462])(v3[19], 0);
  ((void (__fastcall *)(uint, uint))dword_225423C[1462])(v3[20], 0);
  ((void (__fastcall *)(uint, uint))dword_225423C[1462])(v3[21], 0);
  Function_2256894(v3, *(char *)(v4 + 3), *(char *)(v4 + 4));
  return Function_2256954(v2);
}

//----- (02256B38) --------------------------------------------------------
int __fastcall Function_2256b38(int a1, int a2)
{
  int v2;
  uint *v3;
  uchar *v4;

  v2 = a2;
  v3 = (uint *)((int (__fastcall *)(int))dword_225423C[1024])(a2);
  v4 = (uchar *)((int (__fastcall *)(int))dword_225423C[1025])(v2);
  if ( *v4 )
    Function_2256894(v3, (char)v4[1], (char)v4[2]);
  else
    Function_2256894(v3, (char)v4[3], (char)v4[4]);
  return Function_2256954(v2);
}

//----- (02256B78) --------------------------------------------------------
uint __fastcall Function_2256b78(int a1, int a2)
{
  int v2;
  uint *v3;
  uint result;

  v2 = a2;
  v3 = (uint *)((int (__fastcall *)(int))dword_225423C[1024])(a2);
  ((void (__fastcall *)(int))dword_225423C[1025])(v2);
  result = ((int (__fastcall *)(int))dword_225423C[1027])(v2);
  if ( result )
  {
    if ( result == 1 )
    {
      if ( v3[36] )
      {
        ((void (__fastcall *)(uint, uint))dword_225423C[1462])(v3[22], 0);
        ((void (__fastcall *)(uint, uint))dword_225423C[1462])(v3[23], 0);
        ((void (__fastcall *)(uint, uint))dword_225423C[1462])(v3[24], 0);
        ((void (__fastcall *)(uint, uint))dword_225423C[1462])(v3[25], 0);
        result = Function_2256954(v2);
      }
      else
      {
        if ( !Function_200598c() )
          ((void (__fastcall *)(int, uint))dword_225423C[130])(294, 0);
        result = ++v3[37];
        if ( result >= 0xF )
        {
          v3[37] = 0;
          v3[38] ^= 1u;
          ((void (__fastcall *)(uint, uint))dword_225423C[1462])(v3[22], v3[38]);
          ((void (__fastcall *)(uint, uint))dword_225423C[1462])(v3[23], v3[38]);
          ((void (__fastcall *)(uint, uint))dword_225423C[1462])(v3[24], v3[38]);
          result = ((int (__fastcall *)(uint, uint))dword_225423C[1462])(v3[25], v3[38]);
        }
      }
    }
  }
  else
  {
    v3[36] = 0;
    ((void (__fastcall *)(uint, int))dword_225423C[1442])(v3[16], 4);
    ((void (__fastcall *)(uint, int))dword_225423C[1442])(v3[17], 4);
    ((void (__fastcall *)(uint, int))dword_225423C[1442])(v3[14], 1);
    ((void (__fastcall *)(uint, int))dword_225423C[1442])(v3[15], 1);
    ((void (__fastcall *)(int))dword_225423C[122])(1635);
    ((void (__fastcall *)(int, uint))dword_225423C[130])(294, 0);
    v3[37] = 0;
    v3[38] = 0;
    result = ((int (__fastcall *)(int))dword_225423C[1028])(v2);
  }
  return result;
}

//----- (02256C90) --------------------------------------------------------
uint *__fastcall Function_2256c90(int a1)
{
  uint *result;

  result = (uint *)(a1 + 144);
  *result = 1;
  return result;
}

