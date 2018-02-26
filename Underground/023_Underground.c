//----- (0223E140) --------------------------------------------------------
int Function_223e140()
{
  int v0;
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  uint v6;
  int v7;
  int result;

  v0 = 0;
  do
  {
    *(uchar *)(dword_2257740[0] + v0 + 2252) = -1;
    v1 = dword_2257740[0] + v0++;
    *(uchar *)(v1 + 2260) = -1;
  }
  while ( v0 < 8 );
  *(uchar *)(dword_2257740[0] + 2532) = 1;
  v2 = 0;
  *(uchar *)(dword_2257740[0] + 2533) = 0;
  *(uchar *)(dword_2257740[0] + 2535) = -60;
  v3 = 0;
  v4 = 0;
  do
  {
    ++v2;
    *(uint *)(dword_2257740[0] + v3 + 2064) = 0;
    v5 = dword_2257740[0] + v3;
    v3 += 12;
    *(uchar *)(v5 + 2072) = 0;
  }
  while ( v2 < 8 );
  do
  {
    v6 = 13 * s32_div_f(v4, 13);
    s32_div_f(v4++, 13);
    *(uchar *)(v7 + dword_2257740[0] + v6 + 2268) = 0;
    result = 2398;
    *(uchar *)(v7 + dword_2257740[0] + v6 + 2398) = 2;
  }
  while ( v4 < 130 );
  return result;
}

//----- (0223E1E4) --------------------------------------------------------
ushort *__fastcall Function_223e1e4(ushort *result, int a2, int a3, int a4)
{
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
  uint v14;
  int v15;
  int i;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;

  v21 = a4;
  v4 = a2;
  if ( !dword_2257740[0] )
  {
    dword_2257740[0] = (int)result;
    MI_CpuFill8(result, 0, 0x9F0u);
    Function_20361bc((uint *)(dword_2257740[0] + 8), v5, v6, v7);
    v8 = 0;
    *(uint *)dword_2257740[0] = v4;
    v9 = 0;
    do
    {
      ++v8;
      *(uchar *)(dword_2257740[0] + v9 + 524) = -1;
      *(ushort *)(dword_2257740[0] + v9 + 520) = -1;
      v10 = dword_2257740[0] + v9;
      v9 += 6;
      *(ushort *)(v10 + 522) = -1;
    }
    while ( v8 < 250 );
    Function_223e140();
    *(uint *)(dword_2257740[0] + 2528) = -1;
    v11 = LoadVariableAreaAdress_c(*(uint *)(*(uint *)dword_2257740[0] + 12));
    if ( Function_2029234(v11) )
    {
      v18 = Function_2028930(v11);
      v12 = 0;
      v19 = 1566083941;
      v20 = 2531011;
      do
        Function_20291a4(v11, v12++);
      while ( v12 < 255 );
      v13 = 0;
      do
        Function_2028ef8(v11, 0, v13++, 0, 0);
      while ( v13 < 64 );
      v14 = Function_2241df8(&v18);
      v15 = 24 - s32_div_f(v14, 10);
      for ( i = 0; i < v15; ++i )
        Function_223e434(&v18, i);
      result = (ushort *)Function_2029240(v11);
    }
    else
    {
      v17 = Function_223e834();
      result = (ushort *)Function_2243ce8(v17);
    }
  }
  return result;
}

//----- (0223E2E8) --------------------------------------------------------
int Function_223e2e8()
{
  return 2544;
}

//----- (0223E2F0) --------------------------------------------------------
void Function_223e2f0()
{
  ;
}

//----- (0223E2F4) --------------------------------------------------------
void Function_223e2f4()
{
  ;
}

//----- (0223E2F8) --------------------------------------------------------
int *Function_223e2f8()
{
  int *result;
  int *v1;
  int v2;
  int v3;

  result = dword_2257740;
  if ( dword_2257740[0] )
  {
    v1 = *(int **)(dword_2257740[0] + 2172);
    if ( v1 )
    {
      Call_RemoveTaskFromTaskList(v1);
      *(uint *)(dword_2257740[0] + 2172) = 0;
      v2 = Function_224219c();
      Function_2254044(v2);
      v3 = *(uint *)(dword_2257740[0] + 2020);
      if ( v3 )
        Function_2002154(v3, 4u);
      Function_2059514();
    }
    free(dword_2257740[0]);
    result = dword_2257740;
    dword_2257740[0] = 0;
  }
  return result;
}

//----- (0223E354) --------------------------------------------------------
int __fastcall Function_223e354(int a1, ushort *a2, int a3, int a4)
{
  int v4;
  int v5;
  int v7;

  v7 = a4;
  v4 = a1;
  v5 = Function_223e88c(*a2, a2[1]);
  LOBYTE(v7) = v4;
  if ( !v5 || *(uchar *)(v5 + 4) != 255 )
    return 0;
  if ( !Function_224a6b8(v4) )
  {
    Function_2035ac4(64, (int)&v7, 1);
    Function_2059058(v4, 0);
    *(uint *)(dword_2257740[0] + 4 * v4 + 2024) = v5;
  }
  return 1;
}

//----- (0223E3AC) --------------------------------------------------------
int __fastcall Function_223e3ac(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int result;
  int v8;
  int v9;
  int v10;
  int v11;

  v3 = a2;
  v4 = a3;
  v5 = a1;
  if ( Function_2242e58(a2, a3) )
    return 0;
  if ( v4 > 478 )
    return 0;
  if ( v3 > 478 )
    return 0;
  if ( !Function_2054f68(v5, v3, v4, v6) )
    goto LABEL_19;
  if ( !Function_2054f68(v5, v3, v4 + 1, v8) )
    return 1;
  if ( !Function_2054f68(v5, v3, v4 - 1, v9) )
    return 1;
  if ( !Function_2054f68(v5, v3 + 1, v4, v10) )
    return 1;
  if ( Function_2054f68(v5, v3 - 1, v4, v11) )
LABEL_19:
    result = 0;
  else
    result = 1;
  return result;
}

//----- (0223E434) --------------------------------------------------------
int __fastcall Function_223e434(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  uint v4;
  uint v5;
  uint v6;
  uint v7;
  int v8;
  int v9;
  uint v10;
  uint v11;
  int v12;
  uint v13;
  int v14;
  int v15;
  uint v16;
  int result;
  uint v18;
  int v19;
  uint v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  uchar *v26;
  int v27;
  int v28;
  int i;
  int v30;

  v1 = a1;
  v26 = (uchar *)LoadVariableAreaAdress_c(*(uint *)(*(uint *)dword_2257740[0] + 12));
  v2 = 32 * (Function_2039e10(*(uchar **)(*(uint *)dword_2257740[0] + 44)) - 2) & 0xFFFF;
  v3 = 32 * (Function_2039e20(*(uint *)(*(uint *)dword_2257740[0] + 44)) - 2) & 0xFFFF;
  do
  {
    *v1 = v1[2] + *v1 * v1[1];
    v4 = *v1;
    if ( v2 )
      v5 = (v4 >> 16) * v2 >> 16;
    else
      v5 = v4 >> 16;
    v25 = ((ushort)v5 + 32) & 0xFFFF;
    *v1 = v1[2] + v4 * v1[1];
    v6 = *v1;
    if ( v3 )
      v7 = (v6 >> 16) * v3 >> 16;
    else
      v7 = v6 >> 16;
    v8 = ((ushort)v7 + 64) & 0xFFFF;
  }
  while ( !Function_223e3ac(*(uint *)dword_2257740[0], v25, v8) );
  v10 = v1[2] + *v1 * v1[1];
  *v1 = v10;
  v30 = ((ushort)(6 * (v10 >> 16) >> 16) >> 8) + 6;
  for ( i = 0; i < v30; ++i )
  {
    v27 = 0;
    v28 = 0;
    while ( 1 )
    {
      v11 = v1[2] + *v1 * v1[1];
      *v1 = v11;
      v12 = (v25 + ((ushort)(20 * (v11 >> 16) >> 16) >> 8) - 10) & 0xFFFF;
      v13 = v1[2] + v11 * v1[1];
      *v1 = v13;
      v14 = (v8 + ((ushort)(20 * (v13 >> 16) >> 16) >> 8) - 10) & 0xFFFF;
      if ( Function_223e3ac(*(uint *)dword_2257740[0], v12, v14) )
        break;
      if ( ++v28 >= 100 )
        goto LABEL_14;
    }
    v27 = 1;
LABEL_14:
    if ( v27 )
    {
      if ( !Function_223e6f8() )
        break;
      v15 = Function_223e740(v12, v14);
      *(uchar *)(v15 + 5) = Function_2029140(v26, v12, v14);
    }
  }
  v16 = v1[2] + *v1 * v1[1];
  *v1 = v16;
  v24 = (ushort)(6 * (v16 >> 16) >> 16) >> 8;
  v23 = 0;
  result = (ushort)(6 * (v16 >> 16) >> 16) >> 8;
  if ( result > 0 )
  {
    do
    {
      v22 = 0;
      while ( 1 )
      {
        v18 = v1[2] + *v1 * v1[1];
        *v1 = v18;
        v19 = (v25 + ((ushort)(20 * (v18 >> 16) >> 16) >> 8) - 10) & 0xFFFF;
        v20 = v1[2] + v18 * v1[1];
        *v1 = v20;
        v21 = (v8 + ((ushort)(20 * (v20 >> 16) >> 16) >> 8) - 10) & 0xFFFF;
        if ( !Function_2054f68(*(uint *)dword_2257740[0], v19, v21, v9) )
        {
          if ( Function_2243c3c(v19, v21, v1, *(uchar *)(dword_2257740[0] + 2540)) )
            break;
        }
        if ( ++v22 >= 100 )
          goto LABEL_24;
      }
      ++*(uchar *)(dword_2257740[0] + 2540);
LABEL_24:
      result = v24;
      ++v23;
    }
    while ( v23 < v24 );
  }
  return result;
}

//----- (0223E650) --------------------------------------------------------
int __fastcall Function_223e650(int a1, int a2, uint *a3)
{
  uint *v3;
  int v4;
  uint v5;
  int v6;
  uint v7;
  int v8;
  int result;
  int v10;
  int v11;
  int v12;
  uchar *v13;
  int v14;

  v11 = a1;
  v12 = a2;
  v3 = a3;
  v4 = 0;
  v13 = (uchar *)LoadVariableAreaAdress_c(*(uint *)(*(uint *)dword_2257740[0] + 12));
  v14 = 0;
  while ( 1 )
  {
    v5 = v3[2] + *v3 * v3[1];
    *v3 = v5;
    v6 = (v11 + ((ushort)(20 * (v5 >> 16) >> 16) >> 8) - 10) & 0xFFFF;
    v7 = v3[2] + v5 * v3[1];
    *v3 = v7;
    v8 = (v12 + ((ushort)(20 * (v7 >> 16) >> 16) >> 8) - 10) & 0xFFFF;
    if ( Function_223e3ac(*(uint *)dword_2257740[0], v6, v8) )
      break;
    if ( ++v4 >= 100 )
      goto LABEL_5;
  }
  v14 = 1;
LABEL_5:
  result = v14;
  if ( v14 )
  {
    result = Function_223e6f8();
    if ( result )
    {
      v10 = Function_223e740(v6, v8);
      result = Function_2029140(v13, v6, v8);
      *(uchar *)(v10 + 5) = result;
    }
  }
  return result;
}

//----- (0223E6F8) --------------------------------------------------------
int Function_223e6f8()
{
  int v0;
  int v1;

  v0 = 0;
  v1 = dword_2257740[0];
  do
  {
    if ( *(ushort *)(v1 + 520) == 0xFFFF && *(ushort *)(v1 + 522) == 0xFFFF )
      return dword_2257740[0] + 520 + 6 * v0;
    ++v0;
    v1 += 6;
  }
  while ( v0 < 250 );
  return 0;
}

//----- (0223E740) --------------------------------------------------------
int __fastcall Function_223e740(int a1, int a2)
{
  short v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v10;
  int v11;
  int v12;
  short v13;

  v2 = a2;
  v13 = a1;
  v3 = a1 + 960 * a2;
  v4 = -1;
  v5 = dword_2257740[0];
  v6 = 0;
  while ( 1 )
  {
    v7 = *(ushort *)(v5 + 520);
    if ( v7 == 0xFFFF || (v8 = *(ushort *)(v5 + 522), v8 == 0xFFFF) )
    {
      *(ushort *)(dword_2257740[0] + 6 * v6 + 520) = v13;
      *(ushort *)(dword_2257740[0] + 6 * v6 + 522) = v2;
      return dword_2257740[0] + 520 + 6 * v6;
    }
    if ( v3 < v7 + 960 * v8 )
      break;
    ++v6;
    v5 += 6;
    if ( v6 >= 250 )
      goto LABEL_8;
  }
  v4 = v6;
LABEL_8:
  if ( v4 != -1 )
  {
    v10 = 248;
    if ( v4 <= 248 )
    {
      v11 = 1488;
      do
      {
        --v10;
        *(ushort *)(dword_2257740[0] + v11 + 526) = *(ushort *)(dword_2257740[0] + v11 + 520);
        *(ushort *)(dword_2257740[0] + v11 + 528) = *(ushort *)(dword_2257740[0] + v11 + 522);
        v12 = dword_2257740[0] + v11;
        v11 -= 6;
        *(uchar *)(v12 + 531) = *(uchar *)(v12 + 525);
      }
      while ( v10 >= v4 );
    }
    *(ushort *)(dword_2257740[0] + 6 * v4 + 520) = v13;
    *(ushort *)(dword_2257740[0] + 6 * v4 + 522) = v2;
  }
  return dword_2257740[0] + 520 + 6 * v4;
}

//----- (0223E834) --------------------------------------------------------
int Function_223e834()
{
  int v0;
  int v1;
  int v2;
  int result;

  v0 = LoadVariableAreaAdress_c(*(uint *)(*(uint *)dword_2257740[0] + 12));
  v1 = 0;
  do
  {
    v2 = Function_20291cc(v0, v1);
    result = Function_20291ec(v0, v1);
    if ( v2 )
    {
      if ( result )
      {
        result = Function_223e740(v2, result);
        *(uchar *)(result + 5) = v1;
      }
    }
    ++v1;
  }
  while ( v1 < 255 );
  return result;
}

//----- (0223E878) --------------------------------------------------------
int Function_223e878()
{
  int result;
  int v1;

  result = Function_203608c();
  if ( !result )
  {
    v1 = Function_22414d4();
    result = Function_22413b4(v1);
  }
  return result;
}

//----- (0223E88C) --------------------------------------------------------
int __fastcall Function_223e88c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = 0;
  v3 = dword_2257740[0];
  do
  {
    if ( a1 == *(ushort *)(v3 + 520) && a2 == *(ushort *)(v3 + 522) )
      return dword_2257740[0] + 520 + 6 * v2;
    ++v2;
    v3 += 6;
  }
  while ( v2 < 250 );
  return 0;
}

//----- (0223E8CC) --------------------------------------------------------
int __fastcall Function_223e8cc(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v7;
  int v8;
  int v9;
  int v10;
  uint v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;

  v2 = a2 - 80;
  v19 = a2 + 80;
  v3 = a1 - 80;
  v4 = a1 + 80;
  v5 = 0;
  if ( Function_2242e58(a1, a2) )
    return -1;
  if ( v3 < 64 )
    v3 = 64;
  if ( v4 > 512 )
    v4 = 512;
  if ( v2 < 32 )
    v2 = 32;
  if ( v19 > 480 )
    v19 = 480;
  v7 = 0;
  v8 = dword_2257740[0];
  do
  {
    v9 = *(ushort *)(v8 + 522);
    if ( v9 >= v2 && v9 <= v19 )
    {
      v10 = *(ushort *)(v8 + 520);
      if ( v10 > v3 && v10 < v4 )
        ++v5;
    }
    ++v7;
    v8 += 6;
  }
  while ( v7 < 250 );
  if ( !v5 )
    return -1;
  v11 = PRNG();
  s32_div_f(v11, v5);
  v12 = 0;
  v13 = dword_2257740[0];
  v15 = v14;
  v16 = 0;
  do
  {
    v17 = *(ushort *)(v13 + 522);
    if ( v17 >= v2 && v17 <= v19 )
    {
      v18 = *(ushort *)(v13 + 520);
      if ( v18 > v3 && v18 < v4 )
      {
        if ( v12 == v15 )
          return v16;
        ++v12;
      }
    }
    ++v16;
    v13 += 6;
  }
  while ( v16 < 250 );
  return -1;
}

//----- (0223E99C) --------------------------------------------------------
int __fastcall Function_223e99c(int *a1)
{
  int *v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(dword_2257740[0] + 2020);
  if ( v2 )
    Function_2002154(v2, 4u);
  *(uint *)(dword_2257740[0] + 2020) = 0;
  *(uint *)(dword_2257740[0] + 2172) = 0;
  return Call_RemoveTaskFromTaskList(v1);
}

//----- (0223E9D4) --------------------------------------------------------
int __fastcall Function_223e9d4(int a1, int a2, uchar *a3)
{
  uchar *v3;
  int result;
  int v5;

  v3 = a3;
  result = Function_203608c();
  if ( *v3 == result )
  {
    result = Function_2035ee0();
    if ( result )
    {
      v5 = Function_224219c();
      *(uint *)(dword_2257740[0] + 2528) = Function_2253f40(v5, 19);
      *(uint *)(dword_2257740[0] + 2172) = AddTaskToTaskList1((int)Function_223ea38, dword_2257740[0], 0);
      Function_22431ec(0, *(uint *)(dword_2257740[0] + 2172), Function_223e99c);
      result = Function_20594fc();
    }
  }
  return result;
}

//----- (0223EA38) --------------------------------------------------------
int __fastcall Function_223ea38(int *a1)
{
  int *v1;
  int v2;
  int result;
  int v4;
  int v5;
  char v6;

  v1 = a1;
  v2 = *(uint *)(dword_2257740[0] + 2528);
  if ( v2 == -1 )
  {
    result = Function_2002114(*(uint *)(dword_2257740[0] + 2020), 4u);
    if ( result != -1 )
    {
      if ( result )
      {
        v6 = 0;
        Function_2059514();
      }
      else
      {
        v6 = 1;
      }
      Function_20360d0(65, (int)&v6);
      *(uint *)(dword_2257740[0] + 2020) = 0;
      v4 = Function_224219c();
      Function_2254044(v4);
      v5 = Call_RemoveTaskFromTaskList(v1);
      Function_2243204(v5);
      result = 2172;
      *(uint *)(dword_2257740[0] + 2172) = 0;
    }
  }
  else
  {
    result = Function_201d724((uchar)v2);
    if ( !result )
    {
      *(uint *)(dword_2257740[0] + 2020) = Function_2002100(
                                               *(uint **)(*(uint *)dword_2257740[0] + 8),
                                               (uchar *)dword_225630C + 2,
                                               985,
                                               11,
                                               4u);
      result = 2528;
      *(uint *)(dword_2257740[0] + 2528) = -1;
    }
  }
  return result;
}

//----- (0223EAF8) --------------------------------------------------------
int __fastcall Function_223eaf8(int a1, int a2, uchar *a3, int a4)
{
  int v4;
  uchar *v5;
  int v6;
  int v7;
  int result;
  int v9;
  char v10;
  int v11;

  v11 = a4;
  v4 = a1;
  v5 = a3;
  v9 = LoadVariableAreaAdress_c(*(uint *)(*(uint *)dword_2257740[0] + 12));
  v6 = 4 * v4;
  v7 = *(uint *)(dword_2257740[0] + 4 * v4 + 2024);
  v10 = v4;
  if ( *v5 && v7 )
  {
    result = *(uchar *)(v7 + 4);
    if ( result == 255 )
    {
      Function_2035ac4(66, (int)&v10, 1);
      *(uchar *)(v7 + 4) = -1;
      *(ushort *)v7 = -1;
      *(ushort *)(v7 + 2) = -1;
      Function_20291a4(v9, *(uchar *)(v7 + 5));
      *(uchar *)(dword_2257740[0] + v4 + 2056) = 1;
      result = 2024;
      *(uint *)(dword_2257740[0] + v6 + 2024) = 0;
    }
  }
  else
  {
    result = 0;
    *(uchar *)(dword_2257740[0] + v4 + 2056) = 0;
    *(uint *)(dword_2257740[0] + v6 + 2024) = 0;
  }
  return result;
}

//----- (0223EB8C) --------------------------------------------------------
int __fastcall Function_223eb8c(int a1, int a2, uchar *a3)
{
  uchar *v3;
  int result;

  v3 = a3;
  if ( *a3 == Function_203608c() )
  {
    Function_20594fc();
    Function_223f70c(*(uint *)dword_2257740[0]);
  }
  result = 2244;
  *(uchar *)(dword_2257740[0] + *v3 + 2244) = 1;
  return result;
}

//----- (0223EBC0) --------------------------------------------------------
int __fastcall Function_223ebc0(int a1)
{
  int result;

  *(uchar *)(dword_2257740[0] + a1 + 2056) = 0;
  result = dword_2257740[0] + a1;
  *(uchar *)(result + 2232) = 0;
  return result;
}

//----- (0223EBE4) --------------------------------------------------------
int __fastcall Function_223ebe4(char a1, int a2, ushort *a3, int a4)
{
  int v5;

  v5 = a4;
  LOBYTE(v5) = a1;
  *(ushort *)((char *)&v5 + 1) = *a3;
  return Function_2035b48(69, (int)&v5);
}

//----- (0223EBFC) --------------------------------------------------------
int Function_223ebfc()
{
  return 2;
}

//----- (0223EC00) --------------------------------------------------------
int __fastcall Function_223ec00(int a1, int a2, uchar *a3)
{
  uchar *v3;
  int v4;
  int result;

  v3 = a3;
  v4 = *a3;
  result = Function_203608c();
  if ( v4 != result )
  {
    *(uchar *)(dword_2257740[0] + v4 + 2252) = v3[1];
    result = 2260;
    *(uchar *)(dword_2257740[0] + *v3 + 2260) = v3[2];
  }
  return result;
}

//----- (0223EC30) --------------------------------------------------------
int Function_223ec30()
{
  return 3;
}

//----- (0223EC34) --------------------------------------------------------
uint __fastcall Function_223ec34(uint *a1, int a2, int a3, int a4)
{
  int *v4;
  uint *v5;
  char *v6;
  int v7;
  int v8;
  int v9;
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
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
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
  char v43;
  int v44;

  v44 = a4;
  v4 = dword_22563A8;
  v5 = a1;
  v6 = &v43;
  v7 = 5;
  do
  {
    v8 = *v4;
    v9 = v4[1];
    v4 += 2;
    *(uint *)v6 = v8;
    *((uint *)v6 + 1) = v9;
    v6 += 8;
    --v7;
  }
  while ( v7 );
  GX_SetBanks((int *)&v43);
  v39 = 1;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  SetGraphicsModes(&v39);
  v32 = 0;
  v33 = 0;
  v34 = 4096;
  v35 = 0;
  v36 = 18350083;
  v37 = 0;
  v38 = 0;
  Function_20183c4(v5, 0, &v32, 0);
  Function_2019690(0, 32, 0, 0x1Du);
  Function_2019ebc(v5, 0);
  v25 = 0;
  v26 = 0;
  v27 = 4096;
  v28 = 0;
  v29 = 18481155;
  v30 = 256;
  v31 = 0;
  Function_20183c4(v5, 1u, &v25, 0);
  Function_2019690(1u, 32, 0, 0x1Du);
  Function_2019ebc(v5, 1u);
  v18 = 0;
  v19 = 0;
  v20 = 4096;
  v21 = 0;
  v22 = 35389443;
  v23 = 513;
  v24 = 0;
  Function_20183c4(v5, 2u, &v18, 0);
  Function_2019690(2u, 32, 0, 0x1Du);
  Function_2019ebc(v5, 2u);
  v11 = 0;
  v12 = 0;
  v13 = 2048;
  v14 = 0;
  v15 = 2031617;
  v16 = 769;
  v17 = 0;
  Function_20183c4(v5, 3u, &v11, 0);
  Function_2019690(3u, 32, 0, 0x1Du);
  Function_2019ebc(v5, 3u);
  Function_2019690(4u, 32, 0, 0x1Du);
  return Function_2019690(0, 32, 0, 0x1Du);
}

//----- (0223ED68) --------------------------------------------------------
int __fastcall Function_223ed68(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int result;
  int v10;
  int v11;

  v5 = a3;
  v6 = a1;
  v7 = a2;
  v8 = a4;
  if ( a3 )
    Function_2021d6c(*(uint *)(dword_2257740[0] + 488), 0);
  else
    Function_2021d6c(*(uint *)(dword_2257740[0] + 488), 1u);
  if ( v8 )
  {
    Function_2021d6c(*(uint *)(dword_2257740[0] + 500), 2u);
    Function_2005748(0x6A4u);
  }
  else if ( v5 )
  {
    Function_2021d6c(*(uint *)(dword_2257740[0] + 500), 3u);
    Function_2005748(0x6A2u);
  }
  else
  {
    Function_2021d6c(*(uint *)(dword_2257740[0] + 500), 4u);
    Function_2005748(0x6A3u);
  }
  Function_2021cc8(*(uint *)(dword_2257740[0] + 488), 1);
  Function_2021cc8(*(uint *)(dword_2257740[0] + 500), 1);
  v10 = (v6 + 8) << 12;
  v11 = (v7 + 8) << 12;
  Function_2021c50(*(uint **)(dword_2257740[0] + 488), &v10);
  Function_2021c50(*(uint **)(dword_2257740[0] + 500), &v10);
  result = a5;
  if ( a5 )
  {
    Function_2021d6c(*(uint *)(dword_2257740[0] + 504), 5u);
    Function_2021cc8(*(uint *)(dword_2257740[0] + 504), 1);
    result = Function_2021c50(*(uint **)(dword_2257740[0] + 504), &v10);
  }
  return result;
}

//----- (0223EE80) --------------------------------------------------------
int __fastcall Function_223ee80(int a1)
{
  int v1;
  int v2;
  uint *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int *v11;
  int v12;

  v1 = a1;
  Function_2004550(0x3Au, 0);
  Function_223e140();
  Function_201ff0c(1u, 0);
  Function_201ff0c(2u, 0);
  Function_201ff0c(4u, 0);
  Function_201ff0c(8u, 0);
  Function_2017fc8(3, 29, 327680);
  v2 = Function_2018340(0x1Du);
  v3 = (uint *)v2;
  *(uint *)(dword_2257740[0] + 4) = v2;
  v4 = SetMainLoopFunctionCall((int)Function_22411e8, v2);
  v5 = Function_224219c(v4);
  Function_2253e2c(v5, v3);
  Function_223ec34(v3, v6, v7, v8);
  Function_2019ebc(v3, 0);
  Function_2019ebc(v3, 1u);
  Function_2019ebc(v3, 2u);
  Function_200dd0c(v3, 3u, 482, 10, 0, 29);
  v11 = LoadFromNARC_8(52, 0x1Du, v9, v10);
  Function_2007130((int)v11, 1u, 0, 0, 96, 29);
  v12 = Function_20070e8((int)v11, 0, v3, 0, 0, 0, 0, 29);
  Function_200710c((int)v11, 2u, v3, 0, 0, 0, 0, 29);
  Call_FS_CloseFile(v11);
  Call_LoadFromNARC_RLCN(50, 52, 0, 320, 128, 29);
  return Function_223fa3c(v3, v12, v1);
}

//----- (0223EF98) --------------------------------------------------------
int Function_223ef98()
{
  uint v0;
  int v1;

  Function_22404c8(*(uint *)(dword_2257740[0] + 4));
  Function_2019448(*(uint **)(dword_2257740[0] + 4), 1u);
  Function_223ff8c(*(uint *)(dword_2257740[0] + 4));
  LoadFromNARC_RGCN(55, 9, *(uint **)(dword_2257740[0] + 4), 2u, 1, 0, 0, 29);
  Function_22401b0(*(uint *)(dword_2257740[0] + 4));
  Function_2019060(0, 3);
  Function_2019060(1u, 2);
  Function_2019060(2u, 1);
  v0 = Function_2019060(3u, 0);
  v1 = Function_2240e88(v0);
  Function_224108c(v1);
  return Function_2240688(*(uint *)(dword_2257740[0] + 4));
}

//----- (0223F020) --------------------------------------------------------
int __fastcall Function_223f020(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  uint v6;
  int v7;

  v1 = a1;
  Function_2019044(*(uint *)(dword_2257740[0] + 4), 0);
  Function_2019044(*(uint *)(dword_2257740[0] + 4), 1);
  Function_2019044(*(uint *)(dword_2257740[0] + 4), 2);
  Function_2019044(*(uint *)(dword_2257740[0] + 4), 3);
  Function_200a4e4(*(int **)(dword_2257740[0] + 348));
  Function_200a4e4(*(int **)(dword_2257740[0] + 364));
  Function_200a6dc(*(int **)(dword_2257740[0] + 352));
  Function_200a6dc(*(int **)(dword_2257740[0] + 368));
  v2 = 0;
  v3 = 0;
  do
  {
    Function_2009754(*(int **)(dword_2257740[0] + v3 + 332));
    ++v2;
    v3 += 4;
  }
  while ( v2 < 4 );
  v4 = 0;
  do
  {
    v5 = *(uint *)(v1 + 24);
    if ( v5 )
    {
      free(v5);
      *(uint *)(v1 + 24) = 0;
    }
    ++v4;
    v1 += 4;
  }
  while ( v4 < 4 );
  Function_2021964(*(int **)(dword_2257740[0] + 32));
  Function_200a878();
  Function_201e958();
  Function_201f8b4();
  SetMainLoopFunctionCall(0, 0);
  free(*(uint *)(dword_2257740[0] + 4));
  *(uint *)(dword_2257740[0] + 4) = 0;
  v6 = Function_201807c(29);
  v7 = Function_224219c(v6);
  return Function_2253e2c(v7, *(uint *)(*(uint *)dword_2257740[0] + 8));
}

//----- (0223F118) --------------------------------------------------------
int __fastcall Function_223f118(int *a1, int *a2)
{
  int *v2;
  int *v3;
  int result;
  uint *v5;
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
  int v26;
  int v27;
  ushort *v28;
  int v29;
  int v30;

  v2 = a2;
  v3 = a1;
  result = *a2;
  v5 = (uint *)a2[4];
  if ( (uint)*a2 <= 0x1B )
    JUMPOUT(__CS__, *((short *)&off_223F136 + result) + 35909944);
  switch ( (uchar)result )
  {
    case 0:
      v6 = Function_23_224dbf4(0);
      Function_22417cc(v6);
      v7 = Function_205764c();
      Function_224b430(v7);
      result = *v2 + 1;
      *v2 = result;
      break;
    case 1:
      Function_23_224942c(v5[27]);
      Function_200f174(2u, 16, 18, 0, 6, 1, 4);
      result = *v2 + 1;
      *v2 = result;
      break;
    case 2:
      result = Function_200f2ac();
      if ( result )
      {
        result = v5[27];
        if ( !result )
        {
          Function_203cd44((int)v5);
          result = *v2 + 1;
          *v2 = result;
        }
      }
      break;
    case 3:
      result = Function_203cd4c((uint **)a2[4]);
      if ( !result )
      {
        Function_2039794();
        result = *v2 + 1;
        *v2 = result;
      }
      break;
    case 4:
      Function_223ee80((int)a2);
      result = *v2 + 1;
      *v2 = result;
      break;
    case 5:
      Function_223ef98();
      result = *v2 + 1;
      *v2 = result;
      break;
    case 6:
      Function_2039734();
      Function_200f174(3u, 17, 17, 0, 6, 1, 29);
      Function_201ff0c(1u, 1);
      Function_201ff0c(2u, 1);
      Function_201ff0c(4u, 1);
      Function_201ff0c(8u, 1);
      result = *v2 + 1;
      *v2 = result;
      break;
    case 7:
      result = Function_200f2ac();
      if ( result )
      {
        v2[2] = 0;
        Function_2005748(0x54Au);
        result = 8;
        *v2 = 8;
      }
      break;
    case 8:
      result = a2[2] + 1;
      a2[2] = result;
      if ( result > 20 )
      {
        result = 9;
        *a2 = 9;
      }
      break;
    case 9:
      v8 = Function_224219c(result);
      v9 = Function_225410c(v8, 0, v2[3]);
      v10 = Function_224219c(v9);
      *(uint *)(dword_2257740[0] + 2528) = Function_2253f60(v10, 62);
      v2[2] = 0;
      result = *v2 + 1;
      *v2 = result;
      break;
    case 0xA:
      result = a2[2] + 1;
      a2[2] = result;
      if ( result > 80 )
      {
        v11 = GetOverWorldData_VariableAreaAdresses(*(uint *)dword_2257740[0]);
        v12 = LoadVariableAreaAdress_c(v11);
        v13 = v12;
        v14 = Function_224219c(v12);
        Function_2254044(v14);
        if ( Function_202920c(v13) )
        {
          result = *v2 + 1;
          *v2 = result;
        }
        else
        {
          result = 13;
          *v2 = 13;
        }
      }
      break;
    case 0xB:
      v15 = Function_224219c(result);
      *(uint *)(dword_2257740[0] + 2528) = Function_2253f40(v15, 85);
      v2[2] = 0;
      result = *v2 + 1;
      *v2 = result;
      break;
    case 0xC:
      result = Function_201d724(*(uint *)(dword_2257740[0] + 2528) & 0xFF);
      if ( !result )
      {
        result = (ushort)word_21BF6DC;
        if ( word_21BF6DC || (result = 1, dword_21BF6C4 & 1) )
        {
          v16 = Function_224219c(result);
          Function_2254044(v16);
          result = *v2 + 1;
          *v2 = result;
        }
      }
      break;
    case 0xD:
      Function_2240cfc(a2);
      Function_2240b84(*(uint *)(dword_2257740[0] + 4));
      Function_223fde0(v2);
      result = Function_20219f8(*(uint *)(dword_2257740[0] + 32));
      break;
    case 0xE:
      Function_223fde0(a2);
      Function_20219f8(*(uint *)(dword_2257740[0] + 32));
      result = v2[2] - 1;
      v2[2] = result;
      if ( !result )
      {
        v17 = Function_224219c(0);
        *(uint *)(dword_2257740[0] + 2528) = Function_2253f40(v17, 64);
        Function_2005748(0x5E3u);
        v2[19] = 60;
        result = 15;
        *v2 = 15;
      }
      break;
    case 0xF:
      Function_20219f8(*(uint *)(dword_2257740[0] + 32));
      result = Function_201d724(*(uint *)(dword_2257740[0] + 2528) & 0xFF);
      if ( !result )
      {
        --v2[19];
        result = (ushort)word_21BF6DC;
        if ( word_21BF6DC || (result = 1, dword_21BF6C4 & 1) || (result = v2[19]) == 0 )
        {
          v18 = Function_224219c(result);
          Function_2254044(v18);
          result = 16;
          *v2 = 16;
        }
      }
      break;
    case 0x10:
      Function_20219f8(*(uint *)(dword_2257740[0] + 32));
      if ( Function_22409f0(v2) )
      {
        *v2 = 17;
        result = 60;
        v2[19] = 60;
      }
      else
      {
        result = 18;
        *v2 = 18;
      }
      break;
    case 0x11:
      Function_20219f8(*(uint *)(dword_2257740[0] + 32));
      result = Function_201d724(*(uint *)(dword_2257740[0] + 2528) & 0xFF);
      if ( !result )
      {
        --v2[19];
        if ( word_21BF6DC || dword_21BF6C4 & 1 || (result = v2[19]) == 0 )
        {
          if ( Function_2240a90(v2) )
          {
            v2[19] = 60;
            result = 15;
            *v2 = 15;
          }
          else
          {
            result = 16;
            *v2 = 16;
          }
        }
      }
      break;
    case 0x12:
      v19 = Function_20219f8(*(uint *)(dword_2257740[0] + 32));
      v20 = Function_224219c(v19);
      Function_2254044(v20);
      Function_200f174(3u, 16, 16, 0, 6, 1, 29);
      result = *v2 + 1;
      *v2 = result;
      break;
    case 0x13:
      Function_20219f8(*(uint *)(dword_2257740[0] + 32));
      result = Function_200f2ac();
      if ( result )
      {
        Function_2039794();
        Function_223f020((int)v2);
        Function_20509d4(v5, v21, v22);
        result = *v2 + 1;
        *v2 = result;
      }
      break;
    case 0x14:
      result = Function_20509dc(a2[4]);
      if ( result )
      {
        v5[27] = Function_23_2249404(v5);
        Function_2039734();
        Function_20594fc();
        ((void (__fastcall *)(uint))dword_21EF3FC[0])(*(uint *)(*(uint *)(v2[4] + 4) + 28));
        Function_200f174(1u, 17, 19, 0, 6, 1, 4);
        result = *v2 + 1;
        *v2 = result;
      }
      break;
    case 0x15:
      Function_200f338(0);
      result = Function_200f2ac();
      if ( result )
      {
        ((void (__fastcall *)(uint))dword_21EF3FC[0])(*(uint *)(*(uint *)(v2[4] + 4) + 28));
        ((void (__fastcall *)(uint))dword_21EF3DC[0])(*(uint *)(*(uint *)(v2[4] + 4) + 28));
        Call_LoadFromNARC_RLCN(50, 52, 0, 320, 128, 4);
        Function_200daa4(*(uint **)(v2[4] + 8), 3u, 985, 11, 2, 4);
        v23 = Function_20576a0();
        v24 = Function_224b460(v23);
        Function_22417e0(v24);
        Function_20360d0(67, (int)(v2 + 20));
        Function_2059514();
        *(uint *)(dword_2257740[0] + 2176) = 0;
        free((int)v2);
        Call_RemoveTaskFromTaskList(v3);
        result = Function_23_224dbf4(1);
      }
      break;
    case 0x16:
      *(uchar *)(dword_2257740[0] + 2536) = 1;
      v25 = a2[2] - 1;
      a2[2] = v25;
      if ( !v25 )
      {
        *(uchar *)(dword_2257740[0] + 2536) = 100;
        *a2 = 23;
      }
      Function_2240b84(*(uint *)(dword_2257740[0] + 4));
      result = Function_20219f8(*(uint *)(dword_2257740[0] + 32));
      break;
    case 0x17:
      Function_20219f8(*(uint *)(dword_2257740[0] + 32));
      Function_200f174(3u, 2, 2, 0, 15, 1, 29);
      Function_2005748(0x6A1u);
      result = 24;
      *v2 = 24;
      break;
    case 0x18:
      if ( Function_200f2ac() )
      {
        v26 = 0;
        v27 = 0;
        do
        {
          Function_2021cac(*(uint *)(dword_2257740[0] + v27 + 488), 0);
          ++v26;
          v27 += 4;
        }
        while ( v26 < 8 );
        result = 25;
        *v2 = 25;
      }
      else
      {
        result = Function_20219f8(*(uint *)(dword_2257740[0] + 32));
      }
      break;
    case 0x19:
      Function_200aae0(1, -16, -16, 7, 1);
      result = 26;
      *v2 = 26;
      break;
    case 0x1A:
      Function_200f32c(0);
      v28 = Function_200f338(0);
      v29 = Function_224219c(v28);
      *(uint *)(dword_2257740[0] + 2528) = Function_2253f40(v29, 63);
      v2[19] = 60;
      result = 15;
      *v2 = 15;
      break;
    case 0x1B:
      result = Function_201d724(*(uint *)(dword_2257740[0] + 2528) & 0xFF);
      if ( !result )
      {
        --v2[19];
        result = (ushort)word_21BF6DC;
        if ( word_21BF6DC || (result = 1, dword_21BF6C4 & 1) || (result = v2[19]) == 0 )
        {
          v30 = Function_224219c(result);
          Function_2254044(v30);
          result = 19;
          *v2 = 19;
        }
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (0223F70C) --------------------------------------------------------
uint *__fastcall Function_223f70c(uint *a1)
{
  uint *v1;
  uchar *v2;
  int v3;
  int v4;
  uint *result;

  v1 = a1;
  v2 = Function_202be14(0xBu);
  Function_202b758(v1[39], (int)v2, 1u);
  v3 = malloc2(0xBu, 84);
  MI_CpuFill8((ushort *)v3, 0, 0x54u);
  *(uint *)(v3 + 16) = v1;
  ((void (__fastcall *)(uint))dword_21EF3FC[0])(*(uint *)(v1[1] + 28));
  v4 = LoadFlagAdress(v1[3]);
  Function_206aa04(v4);
  result = AddTaskToTaskList1((int)Function_223f118, v3, 0x64u);
  *(uint *)(dword_2257740[0] + 2176) = result;
  return result;
}

//----- (0223F768) --------------------------------------------------------
int Function_223f768()
{
  int v0;
  int v1;

  v0 = 0;
  v1 = dword_2257740[0];
  do
  {
    if ( !*(uint *)(v1 + 2064) )
      return 1;
    ++v0;
    v1 += 12;
  }
  while ( v0 < 8 );
  return 0;
}

//----- (0223F78C) --------------------------------------------------------
int __fastcall Function_223f78c(int a1, char a2, char a3)
{
  char v3;
  int v4;
  int v5;

  v3 = a2;
  v4 = 0;
  v5 = dword_2257740[0];
  do
  {
    if ( !*(uint *)(v5 + 2064) )
    {
      *(uint *)(dword_2257740[0] + 12 * v4 + 2064) = &dword_2256EB0[5 * a1];
      *(uchar *)(dword_2257740[0] + 12 * v4 + 2068) = byte_2256EBE[20 * a1];
      *(uchar *)(dword_2257740[0] + 12 * v4 + 2069) = v3;
      *(uchar *)(dword_2257740[0] + 12 * v4 + 2070) = a3;
      *(uchar *)(dword_2257740[0] + 12 * v4 + 2072) = 0;
      return v4 + 1;
    }
    ++v4;
    v5 += 12;
  }
  while ( v4 < 8 );
  ErrorHandler();
  return 0;
}

//----- (0223F804) --------------------------------------------------------
BOOL __fastcall Function_223f804(int a1, int a2, int a3)
{
  BOOL result;

  if ( *(uint *)a1 )
    result = *(uchar *)(*(uint *)a1 + a2 / 2 + ((uint)*(uchar *)(a1 + 12) >> 1) * (a3 / 2)) != 111;
  else
    result = 1;
  return result;
}

//----- (0223F838) --------------------------------------------------------
int __fastcall Function_223f838(int a1, int a2, int a3)
{
  int v3;
  int result;
  int v5;
  int v6;
  int v7;
  char v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  char v17;

  v11 = a1;
  v12 = a2;
  v3 = a3;
  if ( !Function_223f768() )
    return 0;
  v14 = 5 * v11;
  v16 = v12 + ((uint)(uchar)byte_2256EBC[20 * v11] >> 1);
  v5 = v3 + ((uint)(uchar)byte_2256EBC[20 * v11 + 1] >> 1);
  if ( v16 > 13 )
    return 0;
  if ( v5 > 10 )
    return 0;
  v15 = v12;
  if ( v12 >= v16 )
  {
LABEL_15:
    v8 = Function_223f78c(v11, v12, v3);
    v13 = v12;
    if ( v12 < v16 )
    {
      v17 = v8;
      do
      {
        v9 = v3;
        if ( v3 < v5 )
        {
          v10 = 13 * v3;
          do
          {
            if ( Function_223f804((int)&dword_2256EB0[v14], 2 * (v13 - v12), 2 * (v9 - v3)) )
              *(uchar *)(v10 + v13 + dword_2257740[0] + 2268) = v17;
            ++v9;
            v10 += 13;
          }
          while ( v9 < v5 );
        }
        ++v13;
      }
      while ( v13 < v16 );
    }
    result = 1;
  }
  else
  {
    while ( 1 )
    {
      v6 = v3;
      if ( v3 < v5 )
        break;
LABEL_14:
      if ( ++v15 >= v16 )
        goto LABEL_15;
    }
    v7 = 13 * v3;
    while ( !Function_223f804((int)&dword_2256EB0[v14], 2 * (v15 - v12), 2 * (v6 - v3))
         || !*(uchar *)(v7 + v15 + dword_2257740[0] + 2268) )
    {
      ++v6;
      v7 += 13;
      if ( v6 >= v5 )
        goto LABEL_14;
    }
    result = 0;
  }
  return result;
}

//----- (0223F970) --------------------------------------------------------
int __fastcall Function_223f970(ushort *a1)
{
  ushort *v1;
  int v2;
  int v3;
  int v4;
  uint *v5;
  int result;

  v1 = a1;
  v2 = GetOverWorldData_VariableAreaAdresses(*(uint *)dword_2257740[0]);
  LoadVariableAreaAdress_c(v2);
  v3 = LoadTrainerDataAdress(v2);
  v4 = GetTrainerID(v3) & 1;
  v5 = (uint *)LoadPokedexDataAdress(v2);
  if ( Function_2027474(v5) )
  {
    if ( v4 )
      result = v1[4];
    else
      result = v1[5];
  }
  else if ( v4 )
  {
    result = v1[2];
  }
  else
  {
    result = v1[3];
  }
  return result;
}

//----- (0223F9C8) --------------------------------------------------------
int Function_223f9c8()
{
  int v0;
  int *v1;
  uint v2;

  v0 = 0;
  v1 = dword_2256EB0;
  v2 = 0;
  do
  {
    if ( *((uchar *)v1 + 14) == 60 )
      break;
    ++v2;
    v0 += Function_223f970((ushort *)v1);
    v1 += 5;
  }
  while ( v2 < 0x55 );
  return v0;
}

//----- (0223F9F0) --------------------------------------------------------
uint __fastcall Function_223f9f0(int a1)
{
  int *v1;
  int v2;
  uint v3;

  v1 = dword_2256EB0;
  v2 = a1;
  v3 = 0;
  do
  {
    if ( *((uchar *)v1 + 14) == 60 )
      break;
    v2 -= Function_223f970((ushort *)v1);
    if ( v2 < 0 )
      return v3;
    ++v3;
    v1 += 5;
  }
  while ( v3 < 0x55 );
  ErrorHandler();
  return 0;
}

//----- (0223FA20) --------------------------------------------------------
int Function_223fa20()
{
  int result;
  int *v1;
  uint v2;

  result = 0;
  v1 = dword_2256EB0;
  v2 = 0;
  do
  {
    if ( *((uchar *)v1 + 14) >= 0x3Cu )
      ++result;
    ++v2;
    v1 += 5;
  }
  while ( v2 < 0x55 );
  return result;
}

//----- (0223FA3C) --------------------------------------------------------
int __fastcall Function_223fa3c(int a1, int a2, int a3, int a4)
{
  int v4;
  long long v5;
  int v6;
  char *v7;
  long long v8;
  int v9;
  int v10;
  int v11;
  char *v12;
  long long v13;
  uint v14;
  ull v15;
  int v16;
  long long v17;
  uint v18;
  ull v19;
  long long v20;
  long long v21;
  int v22;
  long long v23;
  long long v24;
  int v26;
  int v27;
  int v28;
  int v29;
  long long v30;
  long long v31;
  int v32;
  int v33;
  int v34;
  char v35;
  int v36;

  v36 = a4;
  v26 = a1;
  v27 = a2;
  v28 = a3;
  v4 = GetOverWorldData_VariableAreaAdresses(*(uint *)dword_2257740[0]);
  v34 = LoadVariableAreaAdress_c(v4);
  LODWORD(v30) = Function_223f9c8();
  LODWORD(v31) = Function_223fa20();
  v5 = *(ull *)(dword_2257740[0] + 24)
     + ll_mul(*(ull *)(dword_2257740[0] + 16), *(ull *)(dword_2257740[0] + 8));
  *(ull *)(dword_2257740[0] + 8) = v5;
  *(uint *)(v28 + 12) = ((ull)ll_mul(HIDWORD(v5), 3LL) >> 32) + 2;
  if ( Function_202920c(v34) )
    *(uint *)(v28 + 12) = 3;
  v6 = 0;
  if ( *(uint *)(v28 + 12) > 0 )
  {
    v7 = &v35;
    HIDWORD(v30) = 0;
    do
    {
      *(ull *)(dword_2257740[0] + 8) = *(ull *)(dword_2257740[0] + 24)
                                        + ll_mul(*(ull *)(dword_2257740[0] + 16), *(ull *)(dword_2257740[0] + 8));
      if ( (uint)v30 )
        v8 = ll_mul(*(uint *)(dword_2257740[0] + 12), v30);
      else
        HIDWORD(v8) = *(uint *)(dword_2257740[0] + 12);
      v32 = Function_223f9f0(SHIDWORD(v8));
      v9 = BYTE2(dword_2256EB0[5 * v32 + 3]);
      if ( Function_2029274(v34, v9) )
      {
        if ( v9 < 44 || v9 > 59 )
        {
          *(uint *)v7 = 28;
        }
        else
        {
          v10 = 0;
          v11 = 0;
          *(uint *)v7 = v9;
          if ( v6 > 0 )
          {
            v12 = &v35;
            do
            {
              if ( v9 == *(uint *)v12 )
                v10 = 1;
              ++v11;
              v12 += 4;
            }
            while ( v11 < v6 );
          }
          if ( v10 )
            continue;
        }
        v13 = ll_mul(*(ull *)(dword_2257740[0] + 16), *(ull *)(dword_2257740[0] + 8));
        v14 = v13;
        LODWORD(v13) = *(uint *)(dword_2257740[0] + 24);
        v15 = v13 + __PAIR__(*(uint *)(dword_2257740[0] + 28), v14);
        *(ull *)(dword_2257740[0] + 8) = v13 + __PAIR__(*(uint *)(dword_2257740[0] + 28), v14);
        v16 = (ull)ll_mul(HIDWORD(v15), 13LL) >> 32;
        v17 = ll_mul(*(ull *)(dword_2257740[0] + 16), *(ull *)(dword_2257740[0] + 8));
        v18 = v17;
        LODWORD(v17) = *(uint *)(dword_2257740[0] + 24);
        v19 = v17 + __PAIR__(*(uint *)(dword_2257740[0] + 28), v18);
        *(ull *)(dword_2257740[0] + 8) = v17 + __PAIR__(*(uint *)(dword_2257740[0] + 28), v18);
        v20 = ll_mul(HIDWORD(v19), 10LL);
        if ( Function_223f838(v32, v16, SHIDWORD(v20)) )
        {
          v7 += 4;
          ++v6;
        }
      }
    }
    while ( v6 < *(uint *)(v28 + 12) );
  }
  if ( !Function_202920c(v34) )
  {
    v33 = 0;
    HIDWORD(v31) = 0;
    do
    {
      *(ull *)(dword_2257740[0] + 8) = *(ull *)(dword_2257740[0] + 24)
                                        + ll_mul(*(ull *)(dword_2257740[0] + 16), *(ull *)(dword_2257740[0] + 8));
      if ( (uint)v31 )
        v29 = (ull)ll_mul(*(uint *)(dword_2257740[0] + 12), v31) >> 32;
      else
        v29 = *(uint *)(dword_2257740[0] + 12);
      v21 = *(ull *)(dword_2257740[0] + 24)
          + ll_mul(*(ull *)(dword_2257740[0] + 16), *(ull *)(dword_2257740[0] + 8));
      *(ull *)(dword_2257740[0] + 8) = v21;
      v22 = (ull)ll_mul(HIDWORD(v21), 13LL) >> 32;
      v23 = *(ull *)(dword_2257740[0] + 24)
          + ll_mul(*(ull *)(dword_2257740[0] + 16), *(ull *)(dword_2257740[0] + 8));
      *(ull *)(dword_2257740[0] + 8) = v23;
      v24 = ll_mul(HIDWORD(v23), 10LL);
      if ( Function_223f838(v29 + 85 - v31, v22, SHIDWORD(v24)) )
        ++v6;
      if ( v6 > 12 )
        break;
      ++v33;
    }
    while ( v33 < 100 );
  }
  return Function_223ff60(v6, v26, v27, v28);
}

//----- (0223FC9C) --------------------------------------------------------
int __fastcall Function_223fc9c(int a1, int a2, int a3, int a4)
{
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
  ushort *v15;
  uint *v17;
  int v18;
  int v19;
  int *v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  uchar *v27;

  v4 = a1;
  v17 = (uint *)a2;
  v5 = 12 * a1;
  v27 = (uchar *)(dword_2257740[0] + 2064 + 12 * a1);
  v18 = a3;
  v19 = a4;
  v26 = Function_2019fe4(a2, 1);
  v6 = *(uint *)(dword_2257740[0] + 2064 + v5);
  v7 = v4;
  v8 = 2 * v27[5];
  v25 = 2 * v27[6];
  v24 = v8 + *(uchar *)(v6 + 12);
  v23 = v25 + *(uchar *)(v6 + 13);
  v20 = LoadFromNARC_8(55, 0x1Du, v9, v10);
  v11 = *(uint *)(v19 + 12);
  if ( v4 >= v11 )
    v7 = 4;
  if ( v4 < v11 )
  {
    v12 = 4 * v4;
    *(uint *)(v19 + v12 + 24) = Function_20071ec(
                                    (int)v20,
                                    *(ushort *)(*(uint *)v27 + 18),
                                    (uint *)(v19 + 40 + v12),
                                    29);
    DC_FlushRange(*(uint *)(*(uint *)(v19 + 40 + v12) + 12), 32);
    GX_LoadBGPltt(*(uint *)(*(uint *)(v19 + 40 + v12) + 12), 32 * (v7 + 3), 0x20u);
  }
  else
  {
    Function_2007130((int)v20, *(ushort *)(*(uint *)v27 + 18), 0, 32 * (v7 + 3), 32, 29);
  }
  v21 = Function_20070e8((int)v20, *(ushort *)(*(uint *)v27 + 16), v17, 1u, v18, 0, 0, 29);
  Call_FS_CloseFile(v20);
  v22 = v25;
  if ( v25 < v23 )
  {
    v13 = v18 + ((v7 + 3) << 12);
    do
    {
      v14 = v8;
      if ( v8 < v24 )
      {
        v15 = (ushort *)(v26 + ((v22 + 4) << 6) + 2 * v8);
        do
        {
          LOWORD(v13) = v13 + 1;
          if ( Function_223f804(*(uint *)v27, v14 - v8, v22 - v25) )
            *v15 = v13 - 1;
          ++v14;
          ++v15;
        }
        while ( v14 < v24 );
      }
      ++v22;
    }
    while ( v22 < v23 );
  }
  return v21;
}

//----- (0223FDE0) --------------------------------------------------------
int __fastcall Function_223fde0(int a1)
{
  int v1;
  long long v2;
  int v3;
  long long v4;
  int v5;
  long long v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int result;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;

  v13 = a1;
  v19 = 0;
  v17 = a1;
  v16 = 0;
  do
  {
    if ( *(uint *)(v17 + 56) == 1 )
    {
      Function_2005748(0x6A7u);
      v1 = 0;
      v18 = 0;
      do
      {
        v15 = v16 + dword_2257740[0];
        HIDWORD(v2) = *(uint *)(dword_2257740[0] + 20);
        v3 = 8 * *(uchar *)(*(uint *)(v16 + dword_2257740[0] + 2064) + 12);
        LODWORD(v2) = *(uint *)(dword_2257740[0] + 16);
        *(ull *)(dword_2257740[0] + 8) = *(ull *)(dword_2257740[0] + 24)
                                          + ll_mul(v2, *(ull *)(dword_2257740[0] + 8));
        if ( v3 )
          v14 = (ull)ll_mul(*(uint *)(dword_2257740[0] + 12), (uint)v3) >> 32;
        else
          v14 = *(uint *)(dword_2257740[0] + 12);
        HIDWORD(v4) = *(uint *)(dword_2257740[0] + 20);
        v5 = 8 * *(uchar *)(*(uint *)(v15 + 2064) + 13);
        LODWORD(v4) = *(uint *)(dword_2257740[0] + 16);
        *(ull *)(dword_2257740[0] + 8) = *(ull *)(dword_2257740[0] + 24)
                                          + ll_mul(v4, *(ull *)(dword_2257740[0] + 8));
        if ( v5 )
          v6 = ll_mul(*(uint *)(dword_2257740[0] + 12), (uint)v5);
        else
          HIDWORD(v6) = *(uint *)(dword_2257740[0] + 12);
        v7 = 16 * *(uchar *)(v15 + 2070);
        v20 = (v14 + 16 * *(uchar *)(v15 + 2069)) << 12;
        v21 = (HIDWORD(v6) + v7 + 32) << 12;
        Function_2021d6c(*(uint *)(dword_2257740[0] + v1 + 508), v18 + 8);
        Function_2021c50(*(uint **)(dword_2257740[0] + v1 + 508), &v20);
        v1 += 4;
        ++v18;
      }
      while ( v18 < 3 );
    }
    v17 += 4;
    v16 += 12;
    ++v19;
  }
  while ( v19 < 4 );
  v8 = 0;
  do
  {
    v9 = *(uint *)(v13 + 56);
    if ( v9 )
    {
      v10 = *(uint *)(*(uint *)(v13 + 40) + 12);
      v11 = *((uchar *)dword_2257570 + v9 - 1);
      if ( v11 == 255 )
      {
        *(uint *)(v13 + 56) = 0;
      }
      else
      {
        *(uint *)(v13 + 56) = v9 + 1;
        if ( v11 != 254 )
          GX_LoadBGPltt(v10 + 2 * v11, 32 * (v8 + 3), 0x20u);
      }
    }
    ++v8;
    result = v13 + 4;
    v13 += 4;
  }
  while ( v8 < 4 );
  return result;
}

//----- (0223FF60) --------------------------------------------------------
uint __fastcall Function_223ff60(uint result, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int i;
  int v8;

  v4 = result;
  v5 = a2;
  v6 = 0;
  v8 = a4;
  for ( i = 617; v6 < v4; i += result )
    result = (uint)Function_223fc9c(v6++, v5, i, v8) >> 5;
  return result;
}

//----- (0223FF8C) --------------------------------------------------------
int Function_223ff8c()
{
  long long v0;
  long long v1;
  long long v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int *v7;
  long long v8;
  int v9;
  long long v10;
  long long v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int result;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;

  v24 = 0;
  do
  {
    v0 = *(ull *)(dword_2257740[0] + 24)
       + ll_mul(*(ull *)(dword_2257740[0] + 16), *(ull *)(dword_2257740[0] + 8));
    *(ull *)(dword_2257740[0] + 8) = v0;
    v27 = ((ull)ll_mul(HIDWORD(v0), 21LL) >> 32) - 8;
    v1 = *(ull *)(dword_2257740[0] + 24)
       + ll_mul(*(ull *)(dword_2257740[0] + 16), *(ull *)(dword_2257740[0] + 8));
    *(ull *)(dword_2257740[0] + 8) = v1;
    v2 = ll_mul(HIDWORD(v1), 18LL);
    v3 = HIDWORD(v2) - 5;
    if ( HIDWORD(v2) - 5 < HIDWORD(v2) + 3 )
    {
      v4 = 13 * v3;
      v5 = v27 + 8;
      do
      {
        if ( v3 < 10 && v3 >= 0 )
        {
          v6 = v27;
          if ( v27 < v5 )
          {
            v7 = &dword_2256E70[2 * (v3 - (HIDWORD(v2) - 5))];
            do
            {
              if ( v6 < 13 && v6 >= 0 && *((uchar *)v7 + v6 - v27) )
                *(uchar *)(v6 + v4 + dword_2257740[0] + 2398) = *((uchar *)v7 + v6 - v27);
              ++v6;
            }
            while ( v6 < v5 );
          }
        }
        ++v3;
        v4 += 13;
      }
      while ( v3 < HIDWORD(v2) + 3 );
    }
    ++v24;
  }
  while ( v24 < 10 );
  v22 = 0;
  do
  {
    v8 = *(ull *)(dword_2257740[0] + 24)
       + ll_mul(*(ull *)(dword_2257740[0] + 16), *(ull *)(dword_2257740[0] + 8));
    *(ull *)(dword_2257740[0] + 8) = v8;
    v9 = ((ull)ll_mul(HIDWORD(v8), 18LL) >> 32) - 5;
    v10 = *(ull *)(dword_2257740[0] + 24)
        + ll_mul(*(ull *)(dword_2257740[0] + 16), *(ull *)(dword_2257740[0] + 8));
    *(ull *)(dword_2257740[0] + 8) = v10;
    v11 = ll_mul(HIDWORD(v10), 15LL);
    v21 = HIDWORD(v11) - 5;
    v12 = HIDWORD(v11) - 5;
    v23 = 1;
    v25 = HIDWORD(v11);
    if ( HIDWORD(v11) - 5 < SHIDWORD(v11) )
    {
      v13 = dword_2257740[0] + 13 * v12;
      v14 = v9 + 5;
      do
      {
        if ( v12 < 10 && v12 >= 0 )
        {
          v15 = v9;
          if ( v9 < v14 )
          {
            while ( v15 >= 13
                 || v15 < 0
                 || !*((uchar *)&dword_2256E70[2 * (v12 - v21)] + v15 - v9)
                 || *(uchar *)(v13 + v15 + 2398) >= 4u )
            {
              if ( ++v15 >= v14 )
                goto LABEL_27;
            }
            v23 = 0;
          }
LABEL_27:
          if ( !v23 )
            break;
        }
        ++v12;
        v13 += 13;
      }
      while ( v12 < v25 );
    }
    if ( v23 )
    {
      v26 = v21;
      if ( __OFSUB__(v21, v21 + 5) ^ 1 )
      {
        v16 = 13 * v21;
        v17 = v9 + 5;
        do
        {
          if ( v26 < 10 && v26 >= 0 )
          {
            v18 = v9;
            if ( v9 < v17 )
            {
              v19 = 5 * (v26 - v21) + 36007482;
              do
              {
                if ( v18 < 13 && v18 >= 0 )
                {
                  if ( *(uchar *)(v19 + v18 - v9) )
                    *(uchar *)(v18 + v16 + dword_2257740[0] + 2398) = *(uchar *)(v19 + v18 - v9);
                }
                ++v18;
              }
              while ( v18 < v17 );
            }
          }
          v16 += 13;
          ++v26;
        }
        while ( v26 < v21 + 5 );
      }
    }
    result = v22 + 1;
    v22 = result;
  }
  while ( result < 15 );
  return result;
}

//----- (022401B0) --------------------------------------------------------
int __fastcall Function_22401b0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uchar *v7;
  ushort *v8;
  uint *v10;
  int v11;
  int v12;

  v10 = (uint *)a1;
  v12 = Function_2019fe4(a1, 2);
  v1 = 0;
  v2 = 0;
  v11 = 4;
  do
  {
    v3 = 0;
    v4 = 32 * v11;
    do
    {
      v5 = 2 * v4;
      v6 = v3++ + v1 + dword_2257740[0];
      v4 += 2;
      v7 = (uchar *)*(&off_2256E54 + *(uchar *)(v6 + 2398));
      v8 = (ushort *)(v12 + v5);
      *(ushort *)(v12 + v5) = *v7 + 8193;
      v8[1] = v7[1] + 8193;
      v8[32] = v7[2] + 8193;
      v8[33] = v7[3] + 8193;
    }
    while ( v3 < 13 );
    v1 += 13;
    v11 += 2;
    ++v2;
  }
  while ( v2 < 10 );
  return Function_2019448(v10, 2u);
}

//----- (02240244) --------------------------------------------------------
BOOL __fastcall Function_2240244(int a1, int a2)
{
  int v2;
  int v4;

  v2 = *(uchar *)(dword_2257740[0] + 13 * a2 + a1 + 2268);
  if ( !v2 )
    return 0;
  v4 = *(uchar *)(dword_2257740[0] + 12 * (v2 - 1) + 2068);
  return v4 && v4 < 60;
}

//----- (02240280) --------------------------------------------------------
BOOL __fastcall Function_2240280(int a1, int a2)
{
  int v2;
  BOOL result;

  v2 = *(uchar *)(dword_2257740[0] + 13 * a2 + a1 + 2268);
  if ( v2 )
    result = *(uchar *)(dword_2257740[0] + 12 * (v2 - 1) + 2068) >= 0x3Cu;
  else
    result = 0;
  return result;
}

//----- (022402B8) --------------------------------------------------------
int __fastcall Function_22402b8(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int result;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  char *v12;
  char *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  char *v18;
  char *v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;

  v25 = a3;
  v4 = a1;
  v5 = 0;
  result = a2 / 16 - 2;
  v7 = v4 / 16;
  v8 = 0;
  v26 = a4;
  v27 = a2 / 16 - 2;
  if ( v4 / 16 >= 0 && v7 < 13 && result >= 0 && result < 10 )
  {
    v9 = 13 * result;
    v10 = dword_2257740[0] + 2398 + 13 * result;
    if ( *(uchar *)(v10 + v7) )
      --*(uchar *)(v10 + v7);
    v11 = dword_2257740[0] + 2398 + v9;
    if ( *(uchar *)(v11 + v7) )
      --*(uchar *)(v11 + v7);
    if ( Function_2240280(v4 / 16, v27) && !*(uchar *)(dword_2257740[0] + v9 + v7 + 2398) )
      v5 = 1;
    if ( Function_2240244(v4 / 16, v27) && !*(uchar *)(dword_2257740[0] + v9 + v7 + 2398) )
    {
      v8 = 1;
      *(uint *)(v26 + 20) = 15;
    }
    result = Function_223ed68(16 * v7, 16 * (v27 + 2), v25, v5, v8);
    if ( !v5 )
    {
      if ( !v25 )
      {
        v12 = &byte_2257554;
        v13 = &byte_2256BE0;
        v14 = 0;
        do
        {
          v15 = v27 + *v12;
          v16 = v7 + *v13;
          if ( v15 >= 0 && v15 < 10 && v16 >= 0 && v16 < 13 )
          {
            v17 = dword_2257740[0] + 13 * v15 + v16;
            if ( *(uchar *)(v17 + 2398) )
              --*(uchar *)(v17 + 2398);
          }
          ++v14;
          ++v12;
          ++v13;
        }
        while ( v14 < 4 );
      }
      v18 = &byte_225756C;
      v19 = &byte_2257558;
      v20 = 0;
      do
      {
        v21 = v27 + *v18;
        v22 = v7 + *v19;
        if ( v21 >= 0 && v21 < 10 && v22 >= 0 && v22 < 13 )
        {
          v23 = dword_2257740[0] + 13 * v21 + v22;
          if ( *(uchar *)(v23 + 2398) )
            --*(uchar *)(v23 + 2398);
          if ( !v25 )
          {
            v24 = dword_2257740[0] + 13 * v21 + v22;
            if ( *(uchar *)(v24 + 2398) )
              --*(uchar *)(v24 + 2398);
          }
        }
        result = v20 + 1;
        ++v18;
        ++v19;
        v20 = result;
      }
      while ( result < 4 );
    }
  }
  return result;
}

//----- (02240454) --------------------------------------------------------
int __fastcall Function_2240454(int result, uchar *a2, int a3, int a4)
{
  uchar *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int i;
  int v11;
  int v12;
  int v13;
  int v14;

  v4 = a2;
  v5 = a2[1];
  v12 = a3;
  v6 = v5;
  v7 = 0;
  v13 = a4;
  if ( v5 < v4[3] )
  {
    v14 = 0;
    v8 = 32 * v5;
    do
    {
      v9 = v12 + v14;
      for ( i = *v4; i < v4[2]; ++v9 )
      {
        v11 = 2 * (i++ + v8);
        *(ushort *)(result + v11) = v9 + (*(ushort *)(result + v11) & 0xFC00);
      }
      ++v6;
      v8 += 32;
      v14 += v13;
      ++v7;
    }
    while ( v6 < v4[3] );
  }
  return result;
}

//----- (022404C8) --------------------------------------------------------
int __fastcall Function_22404c8(int a1)
{
  int v1;

  *(uchar *)(dword_2257740[0] + 2534) = 1;
  *(uchar *)(dword_2257740[0] + 2532) = 1;
  v1 = Function_2019fe4(a1, 1);
  return Function_2240454(v1, (uchar *)&dword_2256BF4, 48, 54);
}

//----- (022404F8) --------------------------------------------------------
int __fastcall Function_22404f8(int result, int a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v10 = a4;
  v4 = a4;
  v5 = (uint *)result;
  if ( a4 >= 2 )
  {
    if ( a4 == 2 )
    {
      if ( a2 <= 214 || a2 >= 252 )
        return result;
      if ( a3 <= 43 || a3 >= 110 )
      {
        if ( a3 <= 114 || a3 >= 174 )
          return result;
        *(uchar *)(dword_2257740[0] + 2534) = 1;
        *(uchar *)(dword_2257740[0] + 2532) = 1;
      }
      else
      {
        *(uchar *)(dword_2257740[0] + 2534) = 0;
        *(uchar *)(dword_2257740[0] + 2532) = 0;
      }
    }
    v6 = Function_2019fe4(result, 1);
    v7 = v6;
    if ( *(uchar *)(dword_2257740[0] + 2534) )
    {
      if ( *(uchar *)(dword_2257740[0] + 2534) == 1 )
      {
        if ( v4 == 2 )
        {
          Function_2240454(v6, (uchar *)&dword_2256BF8, 18, 54);
          Function_2240454(v7, (uchar *)&dword_2256BF4, 42, 54);
          Function_2005748(0x5DCu);
        }
        else if ( v4 == 3 )
        {
          Function_2240454(v6, (uchar *)&dword_2256BF4, 48, 54);
        }
        if ( v4 == 2 )
        {
          Function_2021d6c(*(uint *)(dword_2257740[0] + 496), 7u);
          Function_2021cc8(*(uint *)(dword_2257740[0] + 496), 1);
          v8 = 950272;
          v9 = 622592;
          Function_2021c50(*(uint **)(dword_2257740[0] + 496), &v8);
        }
      }
    }
    else
    {
      if ( v4 == 2 )
      {
        Function_2240454(v6, (uchar *)&dword_2256BF8, 24, 54);
        Function_2240454(v7, (uchar *)&dword_2256BF4, 36, 54);
        Function_2005748(0x5DCu);
      }
      else if ( v4 == 3 )
      {
        Function_2240454(v6, (uchar *)&dword_2256BF8, 30, 54);
      }
      if ( v4 == 2 )
      {
        Function_2021d6c(*(uint *)(dword_2257740[0] + 496), 6u);
        Function_2021cc8(*(uint *)(dword_2257740[0] + 496), 1);
        v8 = 950272;
        v9 = 327680;
        Function_2021c50(*(uint **)(dword_2257740[0] + 496), &v8);
      }
    }
    result = Function_2019448(v5, 1u);
  }
  return result;
}

//----- (02240660) --------------------------------------------------------
uint *__fastcall Function_2240660(uint *result)
{
  *result = (4 * (*(uchar *)(dword_2257740[0] + 2535) / 4) + 16) << 12;
  result[1] = 0x10000;
  return result;
}

//----- (02240688) --------------------------------------------------------
int __fastcall Function_2240688(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint v6;
  int v7;
  int v8;
  int i;
  short v10;
  short v11;
  int v12;
  uint *v14;
  char v15;
  int v16;

  v16 = a4;
  v14 = (uint *)a1;
  v4 = *(uchar *)(dword_2257740[0] + 2535);
  v5 = Function_2019fe4(a1, 0);
  v6 = 4 * (v4 / 4);
  Function_2240660(&v15);
  s32_div_f(v6, 24);
  Function_2021d6c(*(uint *)(dword_2257740[0] + 492), 6 - v7 / 4);
  v8 = (int)(200 - v6) / 8;
  for ( i = 0; i < v8; *(ushort *)(v5 + v12) = (*(ushort *)(v5 + v12) & 0xFC00) + 173 - v11 )
  {
    s32_div_f(i, 3);
    v11 = v10;
    *(ushort *)(v5 + 2 * (25 - i)) = (*(ushort *)(v5 + 2 * (25 - i)) & 0xFC00) + 11 - v10;
    *(ushort *)(v5 + 2 * (57 - i)) = (*(ushort *)(v5 + 2 * (57 - i)) & 0xFC00) + 65 - v10;
    *(ushort *)(v5 + 2 * (89 - i)) = (*(ushort *)(v5 + 2 * (89 - i)) & 0xFC00) + 119 - v10;
    v12 = 2 * (121 - i++);
  }
  return Function_2019448(v14, 0);
}

//----- (02240758) --------------------------------------------------------
int __fastcall Function_2240758(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int result;
  int v9;
  int v10;

  v1 = 0;
  v9 = a1;
  v10 = 0;
  do
  {
    if ( *(uchar *)(dword_2257740[0] + v1 + 2252) != 255
      && *(uchar *)(dword_2257740[0] + v1 + 2260) != 255 )
    {
      v2 = Function_203608c();
      v3 = Function_2058ca0(v2);
      v4 = Function_203608c();
      v5 = Function_2058cf4(v4);
      v6 = Function_224ad04(v1);
      v7 = Function_224ad40(v1);
      if ( v6 > v3 - 10 && v6 < v3 + 10 && v7 > v5 - 10 && v7 < v5 + 10 )
      {
        Function_22402b8(
          *(uchar *)(dword_2257740[0] + v1 + 2252),
          *(uchar *)(dword_2257740[0] + v1 + 2260),
          1,
          v9);
        v10 = 1;
        *(uchar *)(dword_2257740[0] + v1 + 2252) = -1;
        *(uchar *)(dword_2257740[0] + v1 + 2260) = -1;
      }
    }
    ++v1;
  }
  while ( v1 < 8 );
  result = v10;
  if ( v10 )
    result = Function_22401b0(*(uint *)(dword_2257740[0] + 4));
  return result;
}

//----- (0224080C) --------------------------------------------------------
uint __fastcall Function_224080c(int a1)
{
  int v1;
  uint v2;
  int v3;
  int v4;
  long long v5;
  uint v6;

  v1 = a1;
  v2 = 0;
  if ( Function_2241cf4() )
  {
    if ( v1 != 6 && v1 != 7 && (uint)(v1 - 1) > 1 )
    {
      v3 = dword_2257740[0];
      v5 = *(ull *)(dword_2257740[0] + 24)
         + ll_mul(*(ull *)(dword_2257740[0] + 16), *(ull *)(dword_2257740[0] + 8));
      *(ull *)(dword_2257740[0] + 8) = v5;
      v4 = (HIDWORD(v5) >> 30) + 1;
    }
    else
    {
      v3 = dword_2257740[0];
      *(ull *)(dword_2257740[0] + 8) = *(ull *)(dword_2257740[0] + 24)
                                        + ll_mul(*(ull *)(dword_2257740[0] + 16), *(ull *)(dword_2257740[0] + 8));
      v4 = 1;
    }
    if ( (uint)(v1 - 6) <= 4 )
      v4 += 10;
    v6 = *(uchar *)(v3 + 2535);
    v2 = v4 + s32_div_f(v6, 39);
    if ( v6 )
      v2 += 5;
  }
  return v2;
}

//----- (022408A0) --------------------------------------------------------
int __fastcall Function_22408a0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = GetOverWorldData_VariableAreaAdresses(*(uint *)dword_2257740[0]);
  Function_20298a0(v4);
  v5 = GetOverWorldData_VariableAreaAdresses(*(uint *)dword_2257740[0]);
  v6 = LoadVariableAreaAdress_c(v5);
  if ( Function_2241cf4(v2) )
    return Function_224f6e0(v2, v3);
  Function_224f710(v2);
  return Function_2029250(v6, v2);
}

//----- (022408EC) --------------------------------------------------------
BOOL __fastcall Function_22408ec(int a1)
{
  int v1;
  int v2;
  int v3;
  BOOL result;

  v1 = a1;
  v2 = GetOverWorldData_VariableAreaAdresses(*(uint *)dword_2257740[0]);
  v3 = LoadVariableAreaAdress_c(v2);
  if ( Function_2241cf4(v1) )
    result = Function_2028c3c(v3) != 40;
  else
    result = Function_2028d58(v3) != 40;
  return result;
}

//----- (02240934) --------------------------------------------------------
int __fastcall Function_2240934(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  char *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  char *v13;
  int v14;
  int v15;
  char v17[16];
  int v18;

  v18 = a4;
  v4 = a1;
  v5 = 1;
  v6 = 0;
  if ( *(uint *)(a1 + 12) > 0 )
  {
    v7 = v17;
    do
    {
      *(uint *)v7 = 1;
      v7 += 4;
      ++v6;
    }
    while ( v6 < *(uint *)(a1 + 12) );
  }
  v8 = 0;
  v9 = dword_2257740[0];
  do
  {
    v10 = 0;
    do
    {
      v11 = *(uchar *)(v9 + v10 + 2268);
      if ( v11 <= *(uint *)(v4 + 12) && *(uchar *)(v9 + v10 + 2268) && *(uchar *)(v9 + v10 + 2398) )
        *(uint *)&v17[4 * v11 - 4] = 0;
      ++v10;
    }
    while ( v10 < 13 );
    v9 += 13;
    ++v8;
  }
  while ( v8 < 10 );
  v12 = 0;
  if ( *(uint *)(v4 + 12) > 0 )
  {
    v13 = v17;
    v14 = 0;
    v15 = v4;
    do
    {
      if ( *(uint *)v13 )
      {
        if ( !*(uchar *)(dword_2257740[0] + v14 + 2072) )
        {
          *(uint *)(v15 + 56) = 1;
          *(uchar *)(dword_2257740[0] + v14 + 2072) = 1;
        }
      }
      else
      {
        v5 = 0;
      }
      ++v12;
      v13 += 4;
      v14 += 12;
      v15 += 4;
    }
    while ( v12 < *(uint *)(v4 + 12) );
  }
  return v5;
}

//----- (022409F0) --------------------------------------------------------
int __fastcall Function_22409f0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  uint v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v1 = a1;
  v2 = *(uint *)(a1 + 12);
  v3 = 0;
  if ( v2 <= 0 )
    return 0;
  v4 = dword_2257740[0];
  while ( *(uchar *)(v4 + 2072) != 1 )
  {
    ++v3;
    v4 += 12;
    if ( v3 >= v2 )
      return 0;
  }
  v5 = 12 * v3;
  v6 = Function_224080c(*(uchar *)(dword_2257740[0] + 12 * v3 + 2068));
  *(uint *)(v1 + 72) = v6;
  v7 = Function_224219c(v6);
  Function_2254080(v7, *(uchar *)(dword_2257740[0] + v5 + 2068));
  v8 = Function_2241cf4(*(uchar *)(dword_2257740[0] + v5 + 2068));
  if ( v8 )
  {
    v9 = 69;
    v10 = Function_224219c(v8);
    v11 = Function_2254154(v10, 1, *(uint *)(v1 + 72));
  }
  else
  {
    v9 = 17;
    v12 = Function_224219c(0);
    v11 = Function_2254204(v12, 2);
  }
  v13 = Function_224219c(v11);
  *(uint *)(dword_2257740[0] + 2528) = Function_2253f40(v13, v9);
  return 1;
}

//----- (02240A90) --------------------------------------------------------
int __fastcall Function_2240a90(int a1)
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
  short v10;
  int v11;

  v1 = a1;
  v2 = Function_20298a0(*(uint *)(*(uint *)dword_2257740[0] + 12));
  LoadVariableAreaAdress_c(*(uint *)(*(uint *)dword_2257740[0] + 12));
  v3 = *(uint *)(v1 + 12);
  v4 = 0;
  if ( v3 > 0 )
  {
    v5 = dword_2257740[0];
    while ( *(uchar *)(v5 + 2072) != 1 )
    {
      ++v4;
      v5 += 12;
      if ( v4 >= v3 )
        return 0;
    }
    *(uchar *)(dword_2257740[0] + 12 * v4 + 2072) = 0;
    v6 = *(uchar *)(dword_2257740[0] + 12 * v4 + 2068);
    if ( Function_2241cf4(v6) )
    {
      Function_20295f8(v2, 1);
    }
    else
    {
      Function_206d6c8(*(uint *)dword_2257740[0], v6, 1, v7);
      if ( (v6 < 23 || v6 >= 29) && (uint)(v6 - 36) > 1 )
      {
        Function_2029688(v2, 1);
      }
      else
      {
        Function_2029644(v2, 1);
        v8 = LoadFlagAdress(*(uint *)(*(uint *)dword_2257740[0] + 12));
        v9 = v8;
        v10 = Function_206b40c(v8);
        Function_206b41c(v9, v10 + 1);
      }
    }
    if ( !Function_22408ec(v6) )
    {
      v11 = Function_224219c(0);
      *(uint *)(dword_2257740[0] + 2528) = Function_2253f40(v11, 65);
      return 1;
    }
    Function_22408a0(v6, *(uint *)(v1 + 72));
  }
  return 0;
}

//----- (02240B84) --------------------------------------------------------
int Function_2240b84()
{
  int result;
  uint v1;
  uint v2;
  int v3;
  long long v4;
  int v5;
  long long v6;
  int v7;
  int v8;

  result = 2536;
  if ( *(uchar *)(dword_2257740[0] + 2536) )
  {
    v1 = 196 - *(uchar *)(dword_2257740[0] + 2535);
    v2 = s32_div_f(v1, 50);
    if ( (uchar)++*(uchar *)(dword_2257740[0] + 2536) <= (int)s32_div_f(v1, 15) )
    {
      *(ull *)(dword_2257740[0] + 8) = *(ull *)(dword_2257740[0] + 24)
                                        + ll_mul(*(ull *)(dword_2257740[0] + 16), *(ull *)(dword_2257740[0] + 8));
      v3 = v2 + 3;
      if ( v2 == -3 )
        HIDWORD(v4) = *(uint *)(dword_2257740[0] + 12);
      else
        v4 = ll_mul(*(uint *)(dword_2257740[0] + 12), v2 + 3);
      v5 = (int)(v2 + 3) / 2;
      *(uchar *)(dword_2257740[0] + 2537) = BYTE4(v4) - v5;
      *(ull *)(dword_2257740[0] + 8) = *(ull *)(dword_2257740[0] + 24)
                                        + ll_mul(*(ull *)(dword_2257740[0] + 16), *(ull *)(dword_2257740[0] + 8));
      if ( v3 )
        v6 = ll_mul(*(uint *)(dword_2257740[0] + 12), (uint)v3);
      else
        HIDWORD(v6) = *(uint *)(dword_2257740[0] + 12);
      *(uchar *)(dword_2257740[0] + 2538) = BYTE4(v6) - v5;
    }
    else
    {
      *(uchar *)(dword_2257740[0] + 2538) = 0;
      *(uchar *)(dword_2257740[0] + 2537) = *(uchar *)(dword_2257740[0] + 2538);
    }
    Function_2240660(&v7);
    v7 -= *(char *)(dword_2257740[0] + 2537) << 12;
    v8 -= *(char *)(dword_2257740[0] + 2538) << 12;
    result = Function_2021c50(*(uint **)(dword_2257740[0] + 492), &v7);
  }
  return result;
}

//----- (02240C94) --------------------------------------------------------
void __fastcall Function_2240c94(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  if ( *(uchar *)(dword_2257740[0] + 2536) )
  {
    v2 = *(uchar *)(dword_2257740[0] + 2536);
    if ( v2 > (int)s32_div_f(196 - *(uchar *)(dword_2257740[0] + 2535), 10) )
      *(uchar *)(dword_2257740[0] + 2536) = 0;
    v3 = 0;
    do
    {
      Function_2019184(v1, (uchar)v3, 0, *(char *)(dword_2257740[0] + 2537));
      Function_2019184(v1, (uchar)v3++, 3u, *(char *)(dword_2257740[0] + 2538));
    }
    while ( v3 < 3 );
  }
}

//----- (02240CFC) --------------------------------------------------------
int __fastcall Function_2240cfc(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  char v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  uint v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int result;
  char v21;
  char v22;
  int v23;

  v23 = a4;
  v4 = a1;
  v5 = GetOverWorldData_VariableAreaAdresses(*(uint *)dword_2257740[0]);
  v6 = LoadVariableAreaAdress_c(v5);
  if ( *(uchar *)(dword_2257740[0] + 2533) == 1 )
    *(uchar *)(dword_2257740[0] + 2533) = 0;
  if ( word_21BF6DC )
  {
    if ( (ushort)word_21BF6D8 >= 0xD0u || (ushort)word_21BF6DA < 0x20u )
    {
      if ( (ushort)word_21BF6D8 >= 0xD0u )
        *(uchar *)(dword_2257740[0] + 2533) = 2;
    }
    else
    {
      v21 = word_21BF6D8;
      v22 = word_21BF6DA;
      Function_22402b8(
        (ushort)word_21BF6D8,
        (ushort)word_21BF6DA,
        *(uchar *)(dword_2257740[0] + 2532),
        v4);
      if ( *(uchar *)(dword_2257740[0] + 2532) )
        v7 = 4;
      else
        v7 = 8;
      Function_20360d0(68, (int)&v21);
      v8 = *(uchar *)(dword_2257740[0] + 2535);
      if ( v8 <= v7 )
        v9 = 0;
      else
        v9 = v8 - v7;
      *(uchar *)(dword_2257740[0] + 2535) = v9;
      Function_22401b0(*(uint *)(dword_2257740[0] + 4));
      Function_2240688(*(uint *)(dword_2257740[0] + 4), v10, v11, v12);
      *(uchar *)(dword_2257740[0] + 2536) = 1;
    }
  }
  v13 = *(uint *)(v4 + 20);
  if ( v13 )
  {
    v14 = v13 - 1;
    *(uint *)(v4 + 20) = v14;
    if ( !v14 )
      Function_2005748(0x6A5u);
  }
  Function_22404f8(
    *(uint *)(dword_2257740[0] + 4),
    (ushort)word_21BF6D8,
    (ushort)word_21BF6DA,
    *(uchar *)(dword_2257740[0] + 2533));
  v15 = *(uchar *)(dword_2257740[0] + 2533);
  if ( v15 >= 2 )
    *(uchar *)(dword_2257740[0] + 2533) = v15 + 1;
  Function_2240758(v4);
  if ( Function_2240934(v4, v16, v17, v18) )
  {
    Function_2029220(v6);
    v19 = LoadVariableAreaAdress_14(*(uint *)(*(uint *)dword_2257740[0] + 12));
    Function_202cfec(v19, 30);
    *(uint *)v4 = 14;
    *(uint *)(v4 + 8) = 25;
    result = 1;
    *(uchar *)(v4 + 80) = 1;
  }
  else if ( *(uchar *)(dword_2257740[0] + 2535) )
  {
    result = 0;
  }
  else
  {
    Function_2029220(v6);
    *(uchar *)(v4 + 80) = 0;
    *(uint *)(v4 + 8) = 45;
    *(uint *)v4 = 22;
    result = 1;
  }
  return result;
}

//----- (02240E60) --------------------------------------------------------
int __fastcall Function_2240e60(int a1)
{
  int result;

  *(uint *)(dword_2257740[0] + 4 * *(uchar *)(dword_2257740[0] + 2539) + 348) = a1;
  result = *(uchar *)(dword_2257740[0] + 2539) + 1;
  *(uchar *)(dword_2257740[0] + 2539) = result;
  return result;
}

//----- (02240E88) --------------------------------------------------------
uint Function_2240e88()
{
  uint v0;
  int v1;
  int v2;
  int *v3;
  int v4;
  int **v5;
  int v6;
  int v7;
  int v8;
  int *v9;
  int *v10;
  int *v11;
  int *v12;
  int *v13;
  int *v14;
  int *v15;
  int *v16;
  int *v17;
  int *v18;

  *(uchar *)(dword_2257740[0] + 2539) = 0;
  Function_20a7944();
  v0 = Function_200a784(0, 124, 0, 31, 0, 0x7Cu, 0, 0x1Fu, 0x1Du);
  Function_224119c(v0);
  *(uint *)(dword_2257740[0] + 32) = Function_20095c4(26, dword_2257740[0] + 36, 29, v1);
  Function_200964c(dword_2257740[0] + 36, 0, 1572864, v2);
  v3 = 0;
  v4 = 0;
  do
  {
    v5 = Function_2009714(2, v3, 0x1Du);
    v3 = (int *)((char *)v3 + 1);
    v8 = dword_2257740[0] + v4;
    v4 += 4;
    *(uint *)(v8 + 332) = v5;
  }
  while ( (int)v3 < 4 );
  v9 = LoadFromNARC_8(64, 0x1Du, v6, v7);
  v10 = v9;
  v11 = Function_2009a4c(*(uint *)(dword_2257740[0] + 332), (int)v9, 6u, 0, 0, 1, 0x1Du);
  Function_2240e60((int)v11);
  Function_200a328(*(int **)(dword_2257740[0] + 4 * (*(uchar *)(dword_2257740[0] + 2539) - 1) + 348));
  v12 = Function_2009b04(*(uint *)(dword_2257740[0] + 336), (int)v10, 7u, 0, 0, 1, 1, 0x1Du);
  Function_2240e60((int)v12);
  Function_200a640(*(int **)(dword_2257740[0] + 4 * (*(uchar *)(dword_2257740[0] + 2539) - 1) + 348));
  v13 = Function_2009bc4(*(uint *)(dword_2257740[0] + 340), (int)v10, 5u, 0, 0, 2u, 0x1Du);
  Function_2240e60((int)v13);
  v14 = Function_2009bc4(*(uint *)(dword_2257740[0] + 344), (int)v10, 4u, 0, 0, 3u, 0x1Du);
  Function_2240e60((int)v14);
  v15 = Function_2009a4c(*(uint *)(dword_2257740[0] + 332), (int)v10, 3u, 0, 1, 1, 0x1Du);
  Function_2240e60((int)v15);
  Function_200a328(*(int **)(dword_2257740[0] + 4 * (*(uchar *)(dword_2257740[0] + 2539) - 1) + 348));
  v16 = Function_20098b8(*(uint *)(dword_2257740[0] + 336), 52, 1, 0, 1, 1, 3, 29);
  Function_2240e60((int)v16);
  Function_200a640(*(int **)(dword_2257740[0] + 4 * (*(uchar *)(dword_2257740[0] + 2539) - 1) + 348));
  v17 = Function_2009bc4(*(uint *)(dword_2257740[0] + 340), (int)v10, 2u, 0, 1, 2u, 0x1Du);
  Function_2240e60((int)v17);
  v18 = Function_2009bc4(*(uint *)(dword_2257740[0] + 344), (int)v10, 1u, 0, 1, 3u, 0x1Du);
  Function_2240e60((int)v18);
  return Call_FS_CloseFile(v10);
}

//----- (0224108C) --------------------------------------------------------
uint Function_224108c()
{
  int v0;
  int v1;
  int v2;
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
  short v14;
  int v15;
  int v16;
  int v17;

  v0 = 0;
  v5 = 0;
  v4 = 0;
  do
  {
    Function_20093b4(
      dword_2257740[0] + 416 + v5,
      v0,
      v0,
      v0,
      v0,
      -1,
      -1,
      0,
      0,
      *(uint *)(dword_2257740[0] + 332),
      *(uint *)(dword_2257740[0] + 336),
      *(uint *)(dword_2257740[0] + 340),
      *(uint *)(dword_2257740[0] + 344),
      0,
      0);
    v6 = *(uint *)(dword_2257740[0] + 32);
    v7 = dword_2257740[0] + 416 + v5;
    v10 = 0;
    v11 = 4096;
    v12 = 4096;
    v13 = 4096;
    v14 = 0;
    v16 = 1;
    v17 = 29;
    v15 = 0;
    v8 = 0;
    v9 = 983040;
    if ( !v0 )
    {
      v1 = 2;
      v2 = 8;
      do
      {
        *(uint *)(dword_2257740[0] + v2 + 488) = Function_2021aa0((uint **)&v6);
        Function_2021cc8(*(uint *)(dword_2257740[0] + v2 + 488), 1);
        ++v1;
        v2 += 4;
      }
      while ( v1 <= 7 );
    }
    *(uint *)(dword_2257740[0] + v4 + 488) = Function_2021aa0((uint **)&v6);
    Function_2021cc8(*(uint *)(dword_2257740[0] + v4 + 488), 1);
    ++v0;
    v5 += 36;
    v4 += 4;
  }
  while ( v0 < 2 );
  Function_201ff0c(0x10u, 1);
  return Function_201ff74(0x10u, 1);
}

//----- (0224119C) --------------------------------------------------------
int Function_224119c()
{
  int v0;
  int v1;
  int v3;
  int v4;
  int v5;
  int v6;

  v3 = 20;
  v4 = 4096;
  v5 = 4096;
  v6 = 29;
  Function_201e88c(&v3, 2097168, 2097168);
  Function_201f834(20, 0x1Du);
  Function_201e994();
  Function_201f8e4();
  Function_200966c(1, 1048592, v0, v1);
  return Function_2009704(1);
}

//----- (022411E8) --------------------------------------------------------
int __fastcall Function_22411e8(int a1)
{
  int v1;

  v1 = a1;
  Function_2240c94(a1);
  Function_201c2b8(v1);
  Function_201dcac();
  return Function_200a858();
}

//----- (02241200) --------------------------------------------------------
BOOL __fastcall Function_2241200(ushort a1, ushort a2)
{
  return Function_223e88c(a1, a2) != 0;
}

//----- (0224121C) --------------------------------------------------------
int __fastcall Function_224121c(int a1)
{
  int result;

  if ( dword_2257740[0] )
    result = *(ushort *)(dword_2257740[0] + 6 * a1 + 2184);
  else
    result = 0;
  return result;
}

//----- (0224123C) --------------------------------------------------------
int __fastcall Function_224123c(int a1)
{
  int result;

  if ( dword_2257740[0] )
    result = *(ushort *)(dword_2257740[0] + 6 * a1 + 2186);
  else
    result = 0;
  return result;
}

//----- (0224125C) --------------------------------------------------------
int __fastcall Function_224125c(int a1)
{
  int v1;
  int v2;

  if ( !dword_2257740[0] )
    return 0;
  v1 = *(uint *)(dword_2257740[0] + 2180);
  if ( !v1 )
    return 0;
  s32_div_f(*(ushort *)(v1 + 1502) + a1, 83);
  return *(ushort *)(v1 + 6 * v2);
}

//----- (02241294) --------------------------------------------------------
int __fastcall Function_2241294(int a1)
{
  int v1;
  int v2;

  if ( !dword_2257740[0] )
    return 0;
  v1 = *(uint *)(dword_2257740[0] + 2180);
  if ( !v1 )
    return 0;
  s32_div_f(*(ushort *)(v1 + 1502) + a1, 83);
  return *(ushort *)(v1 + 6 * v2 + 2);
}

//----- (022412CC) --------------------------------------------------------
int __fastcall Function_22412cc(int a1, int a2)
{
  int result;
  int v3;

  result = 1502;
  v3 = a2;
  if ( (ushort)++*(ushort *)(a2 + 1502) > 0x53u )
  {
    Function_2005748(0x54Au);
    result = 1502;
    *(ushort *)(v3 + 1502) = 0;
  }
  return result;
}

//----- (022412F0) --------------------------------------------------------
uint *Function_22412f0()
{
  ushort *v0;
  uint *result;

  if ( *(uint *)(dword_2257740[0] + 2180) )
    ErrorHandler();
  if ( *(uint *)(dword_2257740[0] + 2168) )
    ErrorHandler();
  v0 = (ushort *)malloc2(0xBu, 1504);
  MI_CpuFill8(v0, 0, 0x5E0u);
  Function_20360dc(71);
  v0[751] = 73;
  *(uint *)(dword_2257740[0] + 2180) = v0;
  result = AddTaskToTaskList1((int)Function_22412cc, (int)v0, 0x64u);
  *(uint *)(dword_2257740[0] + 2168) = result;
  return result;
}

//----- (02241364) --------------------------------------------------------
int *Function_2241364()
{
  int *result;

  result = *(int **)(dword_2257740[0] + 2168);
  if ( result )
  {
    Call_RemoveTaskFromTaskList(result);
    free(*(uint *)(dword_2257740[0] + 2180));
    *(uint *)(dword_2257740[0] + 2168) = 0;
    result = (int *)2180;
    *(uint *)(dword_2257740[0] + 2180) = 0;
  }
  return result;
}

//----- (022413A0) --------------------------------------------------------
int __fastcall Function_22413a0(int a1)
{
  int v1;
  int result;

  v1 = dword_2257740[0] + a1;
  result = 2160;
  *(uchar *)(v1 + 2160) = 1;
  return result;
}

//----- (022413B4) --------------------------------------------------------
int __fastcall Function_22413b4(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;
  short *v7;
  short v8;
  short v9;
  char v10;
  int v11;

  v11 = a4;
  v4 = 0;
  do
  {
    result = *(uchar *)(dword_2257740[0] + v4 + 2160);
    v6 = result - 1;
    if ( *(uchar *)(dword_2257740[0] + v4 + 2160) )
    {
      v7 = (short *)(dword_2257740[0] + 520 + 6 * v6);
      do
      {
        if ( (ushort)*v7 != 0xFFFF && (ushort)v7[1] != 0xFFFF )
        {
          v8 = *v7;
          v9 = v7[1];
          v10 = v4;
          Function_2035b48(72, (int)&v8);
          result = 2160;
          *(uchar *)(dword_2257740[0] + v4 + 2160) = v6 + 3;
          goto LABEL_9;
        }
        v6 += 3;
        v7 += 9;
      }
      while ( v6 < 250 );
      result = 0;
      *(uchar *)(dword_2257740[0] + v4 + 2160) = 0;
    }
LABEL_9:
    ++v4;
  }
  while ( v4 < 8 );
  return result;
}

//----- (0224142C) --------------------------------------------------------
uint __fastcall Function_224142c(int a1, int a2, int a3)
{
  uint result;
  int v4;
  int v5;
  int v6;
  int v7;

  result = (uint)dword_2257740;
  v4 = a3;
  if ( dword_2257740[0] )
  {
    v5 = *(uchar *)(a3 + 4) & 0xF;
    if ( *(uint *)(dword_2257740[0] + 2180) )
    {
      result = Function_203608c();
      if ( v5 == result )
      {
        MI_CpuCopy8(
          v4,
          *(uint *)(dword_2257740[0] + 2180) + 6 * *(uchar *)(*(uint *)(dword_2257740[0] + 2180) + 1500),
          6u,
          6 * *(uchar *)(*(uint *)(dword_2257740[0] + 2180) + 1500));
        ++*(uchar *)(*(uint *)(dword_2257740[0] + 2180) + 1500);
        v7 = *(uint *)(dword_2257740[0] + 2180);
        result = *(uchar *)(v7 + 1500);
        if ( result >= 0xFA )
        {
          result = 0;
          *(uchar *)(v7 + 1500) = 0;
        }
      }
    }
    else
    {
      result = Function_203608c();
      if ( v5 == result )
      {
        result = 15;
        v6 = ((int)*(uchar *)(v4 + 4) >> 4) & 0xF;
        if ( v6 > 0 && v6 <= 8 )
          result = MI_CpuCopy8(v4, dword_2257740[0] + 2184 + 6 * (v6 - 1), 6u, 6 * (v6 - 1));
      }
    }
  }
  return result;
}

//----- (022414D0) --------------------------------------------------------
int Function_22414d0()
{
  return 6;
}

//----- (022414D4) --------------------------------------------------------
uint Function_22414d4()
{
  int v0;
  uint result;
  ushort v2;
  ushort v3;
  int v4;
  short v5;
  short v6;
  char v7;
  short v8;
  short v9;
  char v10;

  v0 = 0;
  do
  {
    result = Function_2035d78((ushort)v0);
    if ( result )
    {
      if ( Function_20593cc(v0) )
      {
        result = 2232;
        *(uchar *)(dword_2257740[0] + v0 + 2232) = 0;
      }
      else
      {
        result = dword_2257740[0] + v0;
        if ( *(uchar *)(dword_2257740[0] + v0 + 2232) < 0x1Cu )
        {
          ++*(uchar *)(result + 2232);
          result = *(uchar *)(dword_2257740[0] + v0 + 2232);
          if ( result >= 0x14 )
          {
            v2 = Function_2058df8(v0);
            v3 = Function_2058e4c(v0);
            v4 = Function_223e8cc(v2, v3);
            if ( v4 == -1 )
            {
              v7 = v0 + 16 * (*(uchar *)(dword_2257740[0] + v0 + 2232) - 19);
              v5 = 0;
              v6 = 0;
              result = Function_2035b48(72, (int)&v5);
            }
            else
            {
              result = dword_2257740[0] + 520 + 6 * v4;
              if ( *(ushort *)result != 0xFFFF && *(ushort *)(result + 2) != 0xFFFF )
              {
                v10 = v0 + 16 * (*(uchar *)(dword_2257740[0] + v0 + 2232) - 19);
                v8 = *(ushort *)result;
                v9 = *(ushort *)(result + 2);
                result = Function_2035b48(72, (int)&v8);
              }
            }
          }
        }
      }
    }
    ++v0;
  }
  while ( v0 < 8 );
  return result;
}

//----- (022415B8) --------------------------------------------------------
int __fastcall Function_22415b8(int a1)
{
  int v1;
  int v3;
  int v4;

  v1 = a1;
  if ( !dword_2257740[0] )
    return 0;
  v3 = 0;
  do
  {
    if ( *(uchar *)(dword_2257740[0] + v3 + 2244) )
    {
      v4 = Function_2032ee8(v3);
      *(uchar *)(dword_2257740[0] + v3 + 2244) = 0;
      if ( Function_22422a8(v4, 0, 105, v1) )
        return 1;
    }
    ++v3;
  }
  while ( v3 < 8 );
  return 0;
}

//----- (0224160C) --------------------------------------------------------
int *Function_224160c()
{
  int *result;

  result = dword_2257740;
  if ( dword_2257740[0] )
    result = (int *)MI_CpuFill8((ushort *)(dword_2257740[0] + 2244), 0, 8u);
  return result;
}

//----- (0224162C) --------------------------------------------------------
int __fastcall Function_224162c(int a1)
{
  int result;

  if ( dword_2257740[0] )
    result = *(uchar *)(dword_2257740[0] + a1 + 2056);
  else
    result = 0;
  return result;
}

//----- (02241648) --------------------------------------------------------
int __fastcall Function_2241648(int result)
{
  if ( dword_2257740[0] )
  {
    *(uchar *)(dword_2257740[0] + result + 2056) = 0;
    result += dword_2257740[0];
    *(uchar *)(result + 2232) = 0;
  }
  return result;
}

//----- (02241670) --------------------------------------------------------
BOOL Function_2241670()
{
  return dword_2257740[0] && *(uint *)(dword_2257740[0] + 2176);
}

//----- (02241690) --------------------------------------------------------
int __fastcall Function_2241690(int result, char a2)
{
  int v2;

  if ( dword_2257740[0] )
  {
    v2 = dword_2257740[0] + result;
    result = 2056;
    *(uchar *)(v2 + 2056) = a2;
  }
  return result;
}

//----- (022416A8) --------------------------------------------------------
int Function_22416a8()
{
  return Function_2059514();
}

//----- (022416B0) --------------------------------------------------------
int __fastcall Function_22416b0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  if ( a1 <= 0 )
    return Function_22416a8();
  v2 = Function_224219c(a1);
  v3 = Function_2254154(v2, 0, v1);
  v4 = Function_224219c(v3);
  return Function_2253f40(v4, 75);
}

//----- (022416E0) --------------------------------------------------------
ushort *__fastcall Function_22416e0(ushort *result, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v2 = a2;
  if ( !dword_2257740[1] )
  {
    dword_2257740[1] = (int)result;
    MI_CpuFill8(result, 0, 0x4DCu);
    *(uint *)(dword_2257740[1] + 1224) = v2;
    v3 = GetOverWorldData_VariableAreaAdresses(v2);
    v4 = 0;
    v5 = LoadVariableAreaAdress_c(v3);
    v6 = 0;
    do
    {
      *(uchar *)(dword_2257740[1] + v6 + 6) = Function_20290dc(v5, v4);
      *(ushort *)(dword_2257740[1] + v6) = Function_20290e8(v5, v4);
      *(ushort *)(dword_2257740[1] + v6 + 2) = Function_2029108(v5, v4);
      *(uchar *)(dword_2257740[1] + v6 + 4) = Function_2029128(v5, v4);
      *(uchar *)(dword_2257740[1] + v6 + 5) = Function_2029134(v5, v4);
      result = (ushort *)(dword_2257740[1] + v6);
      if ( *(uchar *)(dword_2257740[1] + v6 + 6) )
        result = (ushort *)Function_22418c0();
      ++v4;
      v6 += 8;
    }
    while ( v4 < 100 );
  }
  return result;
}

//----- (02241778) --------------------------------------------------------
uchar *Function_2241778()
{
  int v0;
  int v1;
  int v2;
  int v3;
  uchar *result;

  v0 = GetOverWorldData_VariableAreaAdresses(*(uint *)(dword_2257740[1] + 1224));
  v1 = 0;
  v2 = LoadVariableAreaAdress_c(v0);
  v3 = 0;
  do
  {
    result = Function_2029088(
               v2,
               *(uchar *)(dword_2257740[1] + v3 + 6),
               v1++,
               *(ushort *)(dword_2257740[1] + v3),
               *(ushort *)(dword_2257740[1] + v3 + 2),
               *(uchar *)(dword_2257740[1] + v3 + 4),
               *(uchar *)(dword_2257740[1] + v3 + 5));
    v3 += 8;
  }
  while ( v1 < 100 );
  return result;
}

//----- (022417C4) --------------------------------------------------------
int Function_22417c4()
{
  return 1244;
}

//----- (022417CC) --------------------------------------------------------
int Function_22417cc()
{
  int result;

  result = 1242;
  *(uchar *)(dword_2257740[1] + 1242) = 1;
  return result;
}

//----- (022417E0) --------------------------------------------------------
int Function_22417e0()
{
  int result;

  result = 1242;
  *(uchar *)(dword_2257740[1] + 1242) = 0;
  return result;
}

//----- (022417F4) --------------------------------------------------------
int *Function_22417f4()
{
  int *result;

  result = (int *)dword_2257740[1];
  if ( dword_2257740[1] )
  {
    free(dword_2257740[1]);
    result = &dword_2257740[1];
    dword_2257740[1] = 0;
  }
  return result;
}

//----- (02241810) --------------------------------------------------------
uint Function_2241810()
{
  uint result;
  uint v1;
  int v2;
  uint v3;
  int v4;

  result = dword_2257740[1];
  if ( !*(uchar *)(dword_2257740[1] + 1242) )
  {
    if ( ++*(uint *)(dword_2257740[1] + 1236) >= 2000 )
      *(uint *)(dword_2257740[1] + 1236) = 0;
    v1 = *(uint *)(dword_2257740[1] + 1236);
    result = s32_div_f(*(uint *)(dword_2257740[1] + 1236), 20);
    if ( v2 == 10 )
    {
      v3 = s32_div_f(v1, 20);
      v4 = Function_2241d18();
      result = Function_2241d38(v3);
      if ( v4 )
      {
        if ( result )
          result = ((int (__fastcall *)(uint, int, uint))dword_21F57C8[0])(
                     *(uint *)(dword_2257740[1] + 1224),
                     v4,
                     result);
      }
    }
  }
  return result;
}

//----- (02241890) --------------------------------------------------------
ushort *__fastcall Function_2241890(ushort *result, int a2)
{
  int v2;
  ushort *v3;

  v2 = 4 * a2;
  v3 = *(ushort **)(dword_2257740[1] + v2 + 800);
  if ( !v3 )
    return 0;
  *result = *v3;
  result[1] = *(ushort *)(*(uint *)(dword_2257740[1] + v2 + 800) + 2);
  return result;
}

//----- (022418C0) --------------------------------------------------------
void __fastcall __spoils<R1,R2,R3,R12> Function_22418c0(short *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  short v9;
  short v10;
  int v11;

  v11 = a4;
  v9 = *a1;
  v10 = a1[1];
  Function_22427dc(100, Function_2241890);
  v4 = Function_2242788(&v9);
  if ( v4 >= 100 )
    ErrorHandler();
  v5 = 99;
  if ( v4 < 99 )
  {
    v6 = 396;
    do
    {
      --v5;
      v7 = dword_2257740[1] + v6;
      v6 -= 4;
      *(uint *)(v7 + 800) = *(uint *)(v7 + 796);
    }
    while ( v5 > v4 );
  }
  *(uint *)(dword_2257740[1] + 4 * v4 + 800) = v8;
}

//----- (02241928) --------------------------------------------------------
short *Function_2241928()
{
  int v0;
  int v1;
  int v2;
  int v3;
  short *result;

  MI_CpuFill8((ushort *)(dword_2257740[1] + 800), 0, 0x190u);
  v2 = 0;
  v3 = 0;
  do
  {
    result = (short *)(dword_2257740[1] + v3);
    if ( *(uchar *)(dword_2257740[1] + v3 + 6) )
      Function_22418c0(result, *(uchar *)(dword_2257740[1] + v3 + 6), v0, v1);
    ++v2;
    v3 += 8;
  }
  while ( v2 < 100 );
  return result;
}

//----- (02241960) --------------------------------------------------------
int __fastcall Function_2241960(int result)
{
  int v1;

  v1 = 0;
  while ( *(uchar *)(result + 6) )
  {
    ++v1;
    result += 8;
    if ( v1 >= 100 )
      return 0;
  }
  return result;
}

//----- (02241974) --------------------------------------------------------
void Function_2241974()
{
  ;
}

//----- (02241978) --------------------------------------------------------
int __fastcall Function_2241978(short a1, short a2)
{
  int v2;
  int result;
  short v4;
  short v5;

  v4 = a1;
  v5 = a2;
  Function_22427dc(100, Function_2241890);
  v2 = Function_224271c(&v4);
  if ( v2 == -1 )
    result = 0;
  else
    result = *(uint *)(dword_2257740[1] + 4 * v2 + 800);
  return result;
}

//----- (022419B4) --------------------------------------------------------
uchar *__fastcall Function_22419b4(int a1, int a2, uchar *a3)
{
  uchar *v3;
  uchar *result;
  int v5;
  short v6;
  short v7;
  uchar *v8;
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

  v3 = a3;
  result = (uchar *)Function_203608c();
  v5 = (int)result;
  if ( (uchar *)*v3 == result )
  {
    v6 = Function_2058d88((int)result);
    v7 = Function_2058dc0(v5);
    result = (uchar *)Function_2241978(v6, v7);
    v8 = result;
    if ( result )
    {
      Function_20594fc();
      if ( Function_224f6e0(v8[6], v8[4] + v8[5]) )
      {
        *(uchar *)(dword_2257740[1] + v5 + 1228) = v8[6];
        Function_2005748(0x5E3u);
        v9 = v8[4];
        v10 = 99;
        v11 = v9 + v8[5];
        if ( v11 < 99 )
          v10 = v9 + v8[5];
        v12 = Function_224219c(v11);
        v13 = Function_2254154(v12, 1, v10);
        v14 = Function_224219c(v13);
        Function_22541dc(v14, 2, v8[6]);
        v15 = v8[5] + v8[4];
        if ( v15 > 99 )
          v15 = 99;
        v16 = Function_224219c(v15);
        v17 = Function_2253f78(v16, 69, 1, Function_22416b0);
        v18 = Function_224219c(v17);
        Function_2253f98(v18);
        Function_2241c48(v8);
        result = Function_2241778();
      }
      else
      {
        v19 = Function_224219c(0);
        result = (uchar *)Function_2253f40(v19, 83);
      }
    }
  }
  return result;
}

//----- (02241A80) --------------------------------------------------------
ushort *__fastcall Function_2241a80(ushort *result, short a2)
{
  result[1] = a2;
  *result = 0;
  return result;
}

//----- (02241A88) --------------------------------------------------------
int __fastcall Function_2241a88(ushort *a1, ushort *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = 0;
  v3 = *a1;
  v4 = 0;
  while ( v3 - v4 > 0 )
  {
    v3 -= v4;
    ++v2;
    v4 += 4;
    if ( v2 > a1[1] )
      return 0;
  }
  if ( v3 )
    --v3;
  if ( v3 >= 2 * v2 )
    v5 = v3 - 3 * v2;
  else
    LOWORD(v5) = v2 - v3;
  if ( v3 >= v2 )
  {
    if ( v3 >= 3 * v2 )
      LOWORD(v3) = -4 * v2 + v3;
    else
      LOWORD(v3) = 2 * v2 - v3;
  }
  *a2 = v3;
  a2[1] = v5;
  ++*a1;
  return 1;
}

//----- (02241AE8) --------------------------------------------------------
int __fastcall Function_2241ae8(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int result;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  char v17;
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
  short v28;
  short v29;
  char v30;
  char v31;
  uchar v32;

  v4 = a2;
  v26 = a1;
  v27 = 0;
  v5 = a3;
  v6 = a4;
  v28 = a3;
  v29 = a4;
  v30 = a2;
  v32 = a1;
  v31 = 0;
  v7 = Function_2242e58(a3, a4);
  if ( v7 )
  {
    v8 = Function_224219c(v7);
    result = Function_2253f40(v8, 84);
  }
  else
  {
    v10 = Function_2058108(v5, v6);
    if ( v10 )
    {
      v12 = Function_224219c(v10);
      result = Function_2253f40(v12, 55);
    }
    else
    {
      v13 = Function_2054f68(*(uint *)(dword_2257740[1] + 1224), v5, v6, v11);
      if ( v13 )
      {
        v14 = Function_224219c(v13);
        result = Function_2253f40(v14, 60);
      }
      else
      {
        v15 = Function_2241978(v5, v6);
        if ( v15 )
        {
          if ( *(uchar *)(v15 + 6) == v32 )
          {
            v16 = *(uchar *)(v15 + 4);
            if ( v16 <= v4 )
              v17 = v4 + s32_div_f(v16, 5);
            else
              v17 = v16 + s32_div_f(v4, 5);
            *(uchar *)(v15 + 4) = v17 + 1;
            if ( *(uchar *)(v15 + 4) > 0x63u )
              *(uchar *)(v15 + 4) = 99;
            v27 = 1;
          }
          else
          {
            v18 = Function_224219c(v32);
            Function_2253f40(v18, 59);
          }
        }
        else
        {
          Function_2241cac(&v28);
          v27 = 1;
        }
        result = v27;
        if ( v27 )
        {
          v19 = Function_224219c(v27);
          v20 = Function_22541a0(v19, 0, v26);
          v21 = Function_224219c(v20);
          v22 = Function_2254154(v21, 1, v4);
          v23 = Function_224219c(v22);
          Function_2253f40(v23, 58);
          Function_2250128(v26);
          Function_2005748(0x631u);
          v24 = LoadFlagAdress(*(uint *)(*(uint *)(dword_2257740[1] + 1224) + 12));
          Function_206aa14(v24);
          v25 = LoadVariableAreaAdress_14(*(uint *)(*(uint *)(dword_2257740[1] + 1224) + 12));
          Function_202cf28(v25, 47);
          result = ((int (__fastcall *)(uint, int, int))dword_21F57C8[0])(
                     *(uint *)(dword_2257740[1] + 1224),
                     v5,
                     v6);
        }
      }
    }
  }
  return result;
}

//----- (02241C48) --------------------------------------------------------
short *__fastcall Function_2241c48(int a1, int a2, int a3, uint a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v4 = a1;
  v5 = dword_2257740[1];
  v6 = -1;
  v7 = 0;
  while ( v5 != v4 )
  {
    ++v7;
    v5 += 8;
    if ( v7 >= 100 )
      goto LABEL_5;
  }
  v6 = v7;
LABEL_5:
  if ( v6 == -1 )
    ErrorHandler();
  if ( v7 < 99 )
  {
    v8 = 8 * v7;
    do
    {
      MI_CpuCopy8(dword_2257740[1] + 8 * (v7++ + 1), dword_2257740[1] + v8, 8u, a4);
      v8 += 8;
    }
    while ( v7 < 99 );
  }
  *(uchar *)(dword_2257740[1] + 798) = 0;
  return Function_2241928();
}

//----- (02241CAC) --------------------------------------------------------
uchar *__fastcall Function_2241cac(int a1)
{
  int v1;
  uint v2;
  short *v3;
  int v4;
  int v5;
  int v6;
  uint v7;
  int v8;
  int v9;
  int v10;

  v1 = a1;
  v3 = (short *)Function_2241960(dword_2257740[1]);
  if ( !v3 )
  {
    Function_2241974();
    Function_2241c48(v4, v5, v6, v7);
    v3 = (short *)Function_2241960(dword_2257740[1]);
    if ( !v3 )
      ErrorHandler();
  }
  MI_CpuCopy8(v1, (uint)v3, 8u, v2);
  Function_22418c0(v3, v8, v9, v10);
  return Function_2241778();
}

//----- (02241CF4) --------------------------------------------------------
BOOL __fastcall Function_2241cf4(int a1)
{
  return a1 && a1 < 11;
}

//----- (02241D04) --------------------------------------------------------
BOOL __fastcall Function_2241d04(short a1, short a2)
{
  return Function_2241978(a1, a2) != 0;
}

//----- (02241D18) --------------------------------------------------------
int __fastcall Function_2241d18(int a1)
{
  int result;

  if ( dword_2257740[1] && *(uchar *)(dword_2257740[1] + 8 * a1 + 6) )
    result = *(ushort *)(dword_2257740[1] + 8 * a1);
  else
    result = 0;
  return result;
}

//----- (02241D38) --------------------------------------------------------
int __fastcall Function_2241d38(int a1)
{
  int v1;
  int result;

  if ( dword_2257740[1] && (v1 = dword_2257740[1] + 8 * a1, *(uchar *)(v1 + 6)) )
    result = *(ushort *)(v1 + 2);
  else
    result = 0;
  return result;
}

//----- (02241D58) --------------------------------------------------------
int __fastcall Function_2241d58(int a1)
{
  uint *v1;
  int v2;
  ushort *v3;
  int v4;
  int v6;
  int v7;
  int v8;
  int v9;
  ushort **v10;
  int v11;

  v11 = a1;
  v1 = 0;
  v2 = dword_2257740[1];
  v3 = 0;
  v4 = 0;
  if ( !dword_2257740[1] )
    return 0;
  v6 = 0;
  while ( 1 )
  {
    v7 = *(uchar *)(v2 + 1228);
    if ( *(uchar *)(v2 + 1228) )
      break;
    ++v6;
    ++v2;
    if ( v6 >= 8 )
      goto LABEL_7;
  }
  v1 = Function_200b358(4u);
  v3 = (ushort *)Function_2023790(100, 4u);
  Function_200bacc((int)v1, 2u, *(uchar *)(dword_2257740[1] + v6 + 1228));
  v8 = Function_200c324((int)v1, 2);
  v9 = Function_224219c(v8);
  v10 = (ushort **)Function_2253e3c(v9);
  Function_200b1b8_CallMsgDecrypt(v10, 0x5Fu, v3);
  Function_200c388(v1, v11, (int)v3);
  v4 = 1;
  v7 = 1228;
  *(uchar *)(dword_2257740[1] + v6 + 1228) = 0;
LABEL_7:
  if ( v3 )
    Function_20237bc_FreeMsg((int)v3, v7);
  if ( v1 )
    Function_200b3f0(v1, v7);
  return v4;
}

//----- (02241DF8) --------------------------------------------------------
int __fastcall Function_2241df8(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  v2 = GetOverWorldData_VariableAreaAdresses(*(uint *)(dword_2257740[1] + 1224));
  v3 = LoadVariableAreaAdress_c(v2);
  v4 = 0;
  do
  {
    if ( Function_20290dc(v3, v4) )
    {
      v5 = Function_20290e8(v3, v4);
      v6 = Function_2029108(v3, v4);
      Function_223e650(v5, v6, v1);
    }
    ++v4;
  }
  while ( v4 < 100 );
  return v4;
}

//----- (02241E4C) --------------------------------------------------------
uint __fastcall Function_2241e4c(int a1, int a2)
{
  int v2;
  uint result;

  v2 = a2;
  result = (ushort)++*(ushort *)(a2 + 2);
  if ( result > 0x64 )
  {
    Function_2005748(0x54Au);
    result = 0;
    *(ushort *)(v2 + 2) = 0;
  }
  return result;
}

//----- (02241E6C) --------------------------------------------------------
uint *Function_2241e6c()
{
  ushort *v0;
  uint *result;

  if ( *(uint *)(dword_2257740[1] + 1220) )
    ErrorHandler();
  if ( *(uint *)(dword_2257740[1] + 1216) )
    ErrorHandler();
  v0 = (ushort *)malloc2(0xBu, 4);
  MI_CpuFill8(v0, 0, 4u);
  v0[1] = 100;
  *(uint *)(dword_2257740[1] + 1220) = v0;
  result = AddTaskToTaskList1((int)Function_2241e4c, (int)v0, 0x64u);
  *(uint *)(dword_2257740[1] + 1216) = result;
  return result;
}

//----- (02241ED0) --------------------------------------------------------
int *Function_2241ed0()
{
  int *result;

  result = *(int **)(dword_2257740[1] + 1216);
  if ( result )
  {
    Call_RemoveTaskFromTaskList(result);
    free(*(uint *)(dword_2257740[1] + 1220));
    *(uint *)(dword_2257740[1] + 1216) = 0;
    result = (int *)1220;
    *(uint *)(dword_2257740[1] + 1220) = 0;
  }
  return result;
}

//----- (02241F0C) --------------------------------------------------------
int __fastcall Function_2241f0c(int a1)
{
  int v1;
  int v2;

  if ( !dword_2257740[1] )
    return 0;
  v1 = *(uint *)(dword_2257740[1] + 1220);
  if ( !v1 )
    return 0;
  s32_div_f(((uint)*(ushort *)(v1 + 2) >> 1) + a1, 100);
  return Function_2241d18(v2);
}

//----- (02241F40) --------------------------------------------------------
int __fastcall Function_2241f40(int a1)
{
  int v1;
  int v2;

  if ( !dword_2257740[1] )
    return 0;
  v1 = *(uint *)(dword_2257740[1] + 1220);
  if ( !v1 )
    return 0;
  s32_div_f(((uint)*(ushort *)(v1 + 2) >> 1) + a1, 100);
  return Function_2241d38(v2);
}

//----- (02241F74) --------------------------------------------------------
int __fastcall Function_2241f74(ushort *a1, int a2)
{
  int v2;
  ushort *v3;
  ushort *v4;
  int v5;
  int v6;
  int v7;
  uint *v8;
  int v9;

  v2 = a2;
  v3 = a1;
  v4 = (ushort *)LoadPlayerDataAdress(*(uint *)(a2 + 12));
  v5 = Function_2027ac0(v4);
  dword_2257740[2] = (int)v3;
  MI_CpuFill8(v3, 0, 0x150u);
  *(uint *)(dword_2257740[2] + 12) = v2;
  *(uchar *)(dword_2257740[2] + 308) = 0;
  *(ushort *)(dword_2257740[2] + 28) = 0;
  *(ushort *)(dword_2257740[2] + 30) = 0;
  *(uchar *)(dword_2257740[2] + 331) = 0;
  *(uchar *)(dword_2257740[2] + 327) = 1;
  *(uint *)(dword_2257740[2] + 280) = Function_2253d48(634, 33, *(uint *)(v2 + 8), v5, 500);
  *(uint *)(dword_2257740[2] + 284) = Function_2253d48(638, 33, *(uint *)(v2 + 8), v5, 0);
  *(uint *)(dword_2257740[2] + 288) = Function_2253d48(636, 33, *(uint *)(v2 + 8), v5, 1000);
  *(uint *)(dword_2257740[2] + 292) = Function_2253d48(637, 33, *(uint *)(v2 + 8), v5, 0);
  *(uint *)(dword_2257740[2] + 296) = Function_2253d48(630, 33, *(uint *)(v2 + 8), v5, 0);
  Function_200dd0c(*(uint **)(*(uint *)(dword_2257740[2] + 12) + 8), 3u, 994, 10, 0, 4);
  Call_LoadFromNARC_RLCN(50, 52, 0, 320, 128, 4);
  Function_200daa4(*(uint **)(*(uint *)(dword_2257740[2] + 12) + 8), 3u, 985, 11, 2, 4);
  v6 = 0;
  v7 = 0;
  do
  {
    *(uchar *)(dword_2257740[2] + v6 + 194) = -1;
    *(uchar *)(dword_2257740[2] + v6++ + 210) = -1;
    v8 = (uint *)(dword_2257740[2] + v7 + 220);
    v7 += 4;
    *v8 = 0;
  }
  while ( v6 < 8 );
  v9 = LoadFlagAdress(*(uint *)(*(uint *)(dword_2257740[2] + 12) + 12));
  Function_206a9f4(v9);
  *(uint *)(dword_2257740[2] + 20) = AddTaskToTaskList1((int)Function_2243310, 0, 0);
  return Function_2032110((int)Function_22433f4);
}

//----- (02242108) --------------------------------------------------------
int *__fastcall Function_2242108(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int *result;

  v2 = 0;
  v3 = 0;
  do
  {
    v4 = *(uint *)(dword_2257740[2] + v3 + 220);
    if ( v4 )
      Function_20237bc_FreeMsg(v4, a2);
    ++v2;
    v3 += 4;
  }
  while ( v2 < 8 );
  Function_2032110(0);
  Call_RemoveTaskFromTaskList(*(int **)(dword_2257740[2] + 20));
  Function_2253dd8(*(uint *)(dword_2257740[2] + 280));
  Function_2253dd8(*(uint *)(dword_2257740[2] + 284));
  Function_2253dd8(*(uint *)(dword_2257740[2] + 288));
  Function_2253dd8(*(uint *)(dword_2257740[2] + 292));
  Function_2253dd8(*(uint *)(dword_2257740[2] + 296));
  *(uint *)(*(uint *)(dword_2257740[2] + 12) + 144) = 0;
  free(dword_2257740[2]);
  result = &dword_2257740[2];
  dword_2257740[2] = 0;
  return result;
}

//----- (0224219C) --------------------------------------------------------
int Function_224219c()
{
  return *(uint *)(dword_2257740[2] + 280);
}

//----- (022421AC) --------------------------------------------------------
int Function_22421ac()
{
  return *(uint *)(dword_2257740[2] + 284);
}

//----- (022421BC) --------------------------------------------------------
int Function_22421bc()
{
  return *(uint *)(dword_2257740[2] + 288);
}

//----- (022421CC) --------------------------------------------------------
int Function_22421cc()
{
  return *(uint *)(dword_2257740[2] + 292);
}

//----- (022421DC) --------------------------------------------------------
int Function_22421dc()
{
  return *(uint *)(dword_2257740[2] + 296);
}

//----- (022421EC) --------------------------------------------------------
int Function_22421ec()
{
  Function_2254210(*(uint *)(dword_2257740[2] + 280));
  Function_2254210(*(uint *)(dword_2257740[2] + 284));
  Function_2254210(*(uint *)(dword_2257740[2] + 288));
  Function_2254210(*(uint *)(dword_2257740[2] + 292));
  return Function_2254210(*(uint *)(dword_2257740[2] + 296));
}

//----- (0224223C) --------------------------------------------------------
int __fastcall Function_224223c(int a1, int a2, uint a3, int a4)
{
  uint *v4;
  ushort *v5;
  int v6;
  ushort **v7;
  int v8;
  int v9;
  uint v11;
  int v12;

  v11 = a3;
  v12 = a4;
  if ( !a1 || !a2 )
    return 0;
  v4 = Function_200b358(4u);
  v5 = (ushort *)Function_2023790(100, 4u);
  Function_200b498((int)v4, 0);
  Function_200b498((int)v4, 1u);
  v6 = Function_224219c();
  v7 = (ushort **)Function_2253e3c(v6);
  Function_200b1b8_CallMsgDecrypt(v7, v11, v5);
  Function_200c388(v4, v12, (int)v5);
  Function_20237bc_FreeMsg((int)v5, v8);
  Function_200b3f0(v4, v9);
  return 1;
}

//----- (022422A8) --------------------------------------------------------
int __fastcall Function_22422a8(int a1, uint a2, uint a3, int a4)
{
  uint v4;
  uint *v5;
  ushort *v6;
  int v7;
  ushort **v8;
  int v9;
  int v10;
  uint v12;
  int v13;

  v4 = a2;
  v12 = a3;
  v13 = a4;
  if ( !a1 )
    return 0;
  v5 = Function_200b358(4u);
  v6 = (ushort *)Function_2023790(100, 4u);
  Function_200b498((int)v5, v4);
  v7 = Function_224219c();
  v8 = (ushort **)Function_2253e3c(v7);
  Function_200b1b8_CallMsgDecrypt(v8, v12, v6);
  Function_200c388(v5, v13, (int)v6);
  Function_20237bc_FreeMsg((int)v6, v9);
  Function_200b3f0(v5, v10);
  return 1;
}

//----- (02242308) --------------------------------------------------------
int __fastcall Function_2242308(ushort *a1)
{
  ushort *v1;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v1 = a1;
  if ( !dword_2257740[2] )
    return 0;
  v3 = 0;
  while ( 1 )
  {
    if ( Function_2032de0(v3) )
    {
      v4 = Function_2032ee8(v3);
      Function_2032e30(v3);
      if ( Function_22422a8(v4, 1u, 0x5Bu, (int)v1) )
        return 1;
    }
    if ( *(uchar *)(dword_2257740[2] + v3 + 194) != 255 )
    {
      v5 = Function_2032ee8(v3);
      v6 = Function_2032ee8(*(uchar *)(dword_2257740[2] + v3 + 194));
      *(uchar *)(dword_2257740[2] + v3 + 194) = -1;
      if ( Function_224223c(v5, v6, 0x6Fu, (int)v1) )
        return 1;
    }
    if ( *(uchar *)(dword_2257740[2] + v3 + 210) != 255 )
    {
      v7 = Function_2032ee8(v3);
      *(uchar *)(dword_2257740[2] + v3 + 210) = -1;
      if ( Function_22422a8(v7, 0, 0x70u, (int)v1) )
        return 1;
    }
    if ( *(uchar *)(dword_2257740[2] + v3 + 317) == 1 )
      break;
    if ( ++v3 >= 8 )
      return 0;
  }
  v8 = 4 * v3;
  v9 = *(uint *)(dword_2257740[2] + 4 * v3 + 220);
  if ( v9 )
  {
    Function_2023810(v1, v9);
    Function_20237bc_FreeMsg(*(uint *)(dword_2257740[2] + v8 + 220), v10);
    *(uint *)(dword_2257740[2] + v8 + 220) = 0;
  }
  *(uchar *)(dword_2257740[2] + v3 + 317) = 0;
  return 1;
}

//----- (0224240C) --------------------------------------------------------
BOOL __fastcall Function_224240c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  short v7;
  short v8;

  v4 = a1;
  v5 = a2;
  v7 = a1;
  v8 = a2;
  if ( Function_2054f68(*(uint *)(dword_2257740[2] + 12), a1, a2, a4) )
    return 1;
  if ( Function_22442d8(v4, v5) )
    return 1;
  return Function_22512d4(&v7, -1) != 255;
}

//----- (02242458) --------------------------------------------------------
int Function_23_2242458()
{
  int result;
  int v1;
  int v2;
  short v3;
  short v4;
  int v5;
  int v6;
  int v7;
  int v8;

  if ( *(uchar *)(dword_2257740[2] + 326) || *(uchar *)(dword_2257740[2] + 308) )
  {
    if ( *(uchar *)(dword_2257740[2] + 308) )
      --*(uchar *)(dword_2257740[2] + 308);
    result = 0;
  }
  else if ( !word_21BF6DC
         || (*(uchar *)(dword_2257740[2] + 308) = 30, *(uchar *)(dword_2257740[2] + 331))
         || !Function_2057fac()
         || (v1 = Function_203608c(), Function_224acc0(v1)) )
  {
    result = 0;
  }
  else if ( Function_20360f0() )
  {
    result = 0;
  }
  else
  {
    v2 = Function_203608c();
    if ( Function_20593cc(v2) )
    {
      result = 0;
    }
    else
    {
      ((void (__fastcall *)(int *, uint, uint, uint))dword_21EAFA4[0])(
        &v7,
        (ushort)word_21BF6D8,
        (ushort)word_21BF6DA,
        *(uint *)(*(uint *)(dword_2257740[2] + 12) + 140));
      ((void (__fastcall *)(int, int, int *, int *))dword_21E771C[1733])(v7, v8, &v6, &v5);
      v3 = v6;
      v4 = v5;
      *(ushort *)(dword_2257740[2] + 24) = word_21BF6D8;
      *(ushort *)(dword_2257740[2] + 26) = word_21BF6DA;
      *(ushort *)(dword_2257740[2] + 28) = v6;
      *(ushort *)(dword_2257740[2] + 30) = v5;
      Function_20359dc(48, (int)&v3, 4);
      result = 1;
    }
  }
  return result;
}

//----- (02242540) --------------------------------------------------------
int __fastcall Function_2242540(int a1, int (__fastcall *a2)(int, int), ushort *a3, int a4)
{
  ushort *v4;
  int v5;
  short v6;
  short v7;
  int v9;
  int (__fastcall *v10)(int, int);
  short v11;
  short v12;
  short v13;
  short v14;
  ushort v15[2];
  int v16;

  v16 = a4;
  v4 = a3;
  v9 = a1;
  v10 = a2;
  v12 = *a3 - 6;
  v5 = 1;
  v11 = a3[1] - 6;
  Function_2241a80(v15, 6);
  while ( Function_2241a88(v15, &v13) )
  {
    v6 = *v4 + v13;
    v7 = v4[1] + v14;
    if ( v10(*v4 + v13, v4[1] + v14) )
    {
      *(uchar *)(v9 + v5) = v6 - v12 + 16 * (v7 - v11);
      if ( v5 == 8 )
        return 9;
      ++v5;
    }
  }
  return v5;
}

//----- (022425B8) --------------------------------------------------------
int __fastcall Function_22425b8(char a1, ushort *a2, int a3, int a4)
{
  ushort *v4;
  int v5;
  int v6;
  int v7;
  char v9;
  int v10;

  v10 = a4;
  v4 = a2;
  v9 = a1;
  v5 = Function_2242540((int)&v9, Function_22442d8, a2, a4);
  Function_2035ac4(49, (int)&v9, v5);
  v7 = Function_2242540((int)&v9, (int (__fastcall *)(int, int))Function_2241200, v4, v6);
  return Function_2035ac4(50, (int)&v9, v7);
}

//----- (022425F8) --------------------------------------------------------
int __fastcall Function_22425f8(int a1, int a2, ushort *a3)
{
  int v3;
  ushort *v4;
  int result;
  int v6;
  int v7;

  v3 = a1;
  v4 = a3;
  result = Function_2059094(a1);
  if ( result )
  {
    result = Function_224acc0(v3);
    if ( !result )
    {
      Function_2059058(v3, 0);
      result = Function_22425b8(v3, v4, v6, v7);
    }
  }
  return result;
}

//----- (02242624) --------------------------------------------------------
int __fastcall Function_2242624(int a1, int a2, uchar *a3)
{
  uchar *v3;
  int v4;
  int result;
  uint v6;

  v3 = a3;
  v4 = a2;
  result = Function_203608c();
  if ( *v3 == result )
  {
    MI_CpuCopy8((int)(v3 + 1), dword_2257740[2] + 252, v4 - 1, v6);
    result = 328;
    *(uchar *)(dword_2257740[2] + 328) = v4 - 1;
  }
  return result;
}

//----- (02242654) --------------------------------------------------------
int __fastcall Function_2242654(int a1, int a2, uchar *a3, int a4)
{
  uchar *v4;
  int v5;
  int result;
  uint v7;
  char v8;
  uchar v9[3];
  int v10;

  v10 = a4;
  v4 = a3;
  v5 = a2;
  result = Function_203608c();
  if ( *v4 == result )
  {
    MI_CpuCopy8((int)(v4 + 1), dword_2257740[2] + 260, v5 - 1, v7);
    *(uchar *)(dword_2257740[2] + 329) = v5 - 1;
    *(uchar *)(dword_2257740[2] + 330) = Function_2242540(
                                           (int)&v8,
                                           (int (__fastcall *)(int, int))Function_2241d04,
                                           (ushort *)(dword_2257740[2] + 28),
                                           v5 - 1);
    MI_CpuCopy8(
      (int)v9,
      dword_2257740[2] + 268,
      (uchar)--*(uchar *)(dword_2257740[2] + 330),
      dword_2257740[2]);
    result = Function_22489f8(
               *(uint *)(dword_2257740[2] + 12),
               *(ushort *)(dword_2257740[2] + 28),
               *(ushort *)(dword_2257740[2] + 30),
               *(ushort *)(dword_2257740[2] + 24),
               *(ushort *)(dword_2257740[2] + 26),
               dword_2257740[2] + 252,
               *(uchar *)(dword_2257740[2] + 328),
               dword_2257740[2] + 260,
               *(uchar *)(dword_2257740[2] + 329),
               dword_2257740[2] + 268,
               *(uchar *)(dword_2257740[2] + 330));
  }
  return result;
}

//----- (02242704) --------------------------------------------------------
int __fastcall Function_2242704(ushort *a1)
{
  int result;

  if ( a1 )
    result = *a1 + 960 * a1[1];
  else
    result = 921600;
  return result;
}

//----- (0224271C) --------------------------------------------------------
int __fastcall Function_224271c(ushort *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int (__fastcall *v6)(char *, int);
  ushort *v7;
  ushort *v8;
  int result;
  int v10;
  char v11;
  int v12;

  v12 = a4;
  v4 = 0;
  v5 = *(uint *)(dword_2257740[2] + 300) - 1;
  v10 = Function_2242704(a1);
  v6 = *(int (__fastcall **)(char *, int))(dword_2257740[2] + 276);
  if ( v5 > 0 )
  {
    do
    {
      v7 = (ushort *)v6(&v11, (v4 + v5) / 2);
      if ( Function_2242704(v7) >= v10 )
        v5 = (v4 + v5) / 2;
      else
        v4 = (v4 + v5) / 2 + 1;
    }
    while ( v4 < v5 );
  }
  v8 = (ushort *)v6(&v11, v4);
  if ( v10 == Function_2242704(v8) )
    result = v4;
  else
    result = -1;
  return result;
}

//----- (02242788) --------------------------------------------------------
int __fastcall Function_2242788(ushort *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int (__fastcall *v7)(char *, int);
  ushort *v8;
  int v10;
  char v11;
  int v12;

  v12 = a4;
  v4 = 0;
  v5 = *(uint *)(dword_2257740[2] + 300) - 2;
  v10 = Function_2242704(a1);
  v6 = v5 + 1;
  v7 = *(int (__fastcall **)(char *, int))(dword_2257740[2] + 276);
  if ( v6 > 0 )
  {
    do
    {
      v8 = (ushort *)v7(&v11, (v4 + v6) / 2);
      if ( Function_2242704(v8) >= v10 )
        v6 = (v4 + v6) / 2;
      else
        v4 = (v4 + v6) / 2 + 1;
    }
    while ( v4 < v6 );
  }
  return v4;
}

//----- (022427DC) --------------------------------------------------------
int __fastcall Function_22427dc(int result, int a2)
{
  *(uint *)(dword_2257740[2] + 276) = a2;
  *(uint *)(dword_2257740[2] + 300) = result;
  return result;
}

//----- (022427F8) --------------------------------------------------------
void Function_23_22427f8()
{
  int v0;

  v0 = Function_203608c();
  if ( !Function_20593cc(v0) )
  {
    Function_20360dc(27);
    Function_203572c();
  }
}

//----- (02242814) --------------------------------------------------------
int Function_23_2242814()
{
  int result;

  result = 326;
  if ( *(uchar *)(dword_2257740[2] + 326) )
    --*(uchar *)(dword_2257740[2] + 326);
  return result;
}

//----- (02242830) --------------------------------------------------------
int __fastcall Function_23_2242830(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int result;
  int v7;
  int v8;
  short v9;
  int v10;
  short v11;
  char v12;
  char v13;
  char v14;
  int v15;

  v15 = a4;
  v4 = a1;
  v5 = LoadVariableAreaAdress_c(*(uint *)(*(uint *)(dword_2257740[2] + 12) + 12));
  if ( !*(uchar *)(dword_2257740[2] + 326)
    || (result = *(uchar *)(dword_2257740[2] + 308), !*(uchar *)(dword_2257740[2] + 308)) )
  {
    v7 = Function_203608c();
    result = Function_20593cc(v7);
    if ( !result )
    {
      if ( Function_2028e28(v5) == 40 )
        v4 = (v4 | 0x10) & 0xFF;
      v8 = Function_203608c();
      v9 = Function_2058d88(v8);
      v10 = Function_203608c();
      v11 = Function_2058dc0(v10);
      v12 = v11;
      if ( Function_2241d04(v9, v11) )
        v4 = (v4 | 0x20) & 0xFF;
      v13 = v4;
      v14 = (v12 & 0xF) + 16 * v9;
      Function_20360d0(28, (int)&v13);
      Function_203572c();
      result = 326;
      *(uchar *)(dword_2257740[2] + 326) = 8;
    }
  }
  return result;
}

//----- (022428D4) --------------------------------------------------------
int Function_22428d4()
{
  return 2;
}

//----- (022428D8) --------------------------------------------------------
int __fastcall Function_22428d8(int a1, int a2, uchar *a3, int a4)
{
  int v4;
  uchar *v5;
  int result;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  char v12;
  ushort v13;
  ushort v14;
  char v15;
  char v16;
  char v17;
  int v18;

  v18 = a4;
  v4 = a1;
  v5 = a3;
  v12 = a1;
  v13 = Function_2058ee0(a1);
  v14 = Function_2058f18(v4);
  if ( Function_2058df8(v4) != 0xFFFF || (result = Function_2058e4c(v4), result != 0xFFFF) )
  {
    result = Function_2059094(v4);
    if ( result )
    {
      result = Function_224acc0(v4);
      if ( !result )
      {
        v7 = Function_205900c(v13, v14);
        v8 = v7;
        if ( v7 == 255 )
        {
          v9 = Function_2244080(v4, &v13, *v5);
          if ( v9 )
          {
            result = Function_2059058(v4, 0);
          }
          else if ( Function_223e354(v4, &v13, v10, v11) )
          {
            result = Function_2059058(v4, 0);
          }
          else if ( Function_2251324(v4, &v13) )
          {
            result = Function_2059058(v4, 0);
          }
          else if ( Function_224d454(v4, &v13) )
          {
            result = Function_2059058(v4, 0);
          }
          else if ( Function_2058108(v13, v14) )
          {
            result = Function_224a658(v4, 255, 0);
            if ( !result )
            {
              Function_2035b48(24, (int)&v12);
              result = Function_2059058(v4, 0);
            }
          }
          else
          {
            result = 32;
            if ( *v5 & 0x20 )
            {
              result = Function_224a6b8(v4);
              if ( !result )
              {
                result = v5[1];
                if ( result == (v14 & 0xF) + (16 * v13 & 0xFF) )
                {
                  Function_2035b48(63, (int)&v12);
                  result = Function_2059058(v4, 0);
                }
              }
            }
          }
        }
        else
        {
          result = Function_224c1c8(v7);
          if ( !result )
          {
            if ( Function_224162c(v8) )
            {
              v15 = 4;
              v17 = v8;
              v16 = v4;
              Function_2035ac4(30, (int)&v15, 3);
              result = Function_2059058(v4, 0);
            }
            else
            {
              result = Function_224a658(v4, v8, 0);
              if ( !result )
              {
                if ( Function_224acc0(v8) )
                {
                  if ( Function_2244470(v8) )
                  {
                    v15 = 2;
                    v17 = v8;
                    v16 = v4;
                    Function_2035ac4(30, (int)&v15, 3);
                    result = Function_2059058(v4, 0);
                  }
                  else
                  {
                    result = Function_2245560(v4, v8);
                  }
                }
                else
                {
                  result = Function_2059094(v4);
                  if ( result )
                  {
                    if ( Function_2059094(v8) && !Function_20593e0(v8) )
                    {
                      v15 = 1;
                      v17 = v8;
                      v16 = v4;
                      result = Function_2059094(v8);
                      if ( result )
                      {
                        result = Function_2035ac4(30, (int)&v15, 3);
                        if ( result )
                        {
                          Function_2059058(v4, 0);
                          Function_2059058(v8, 0);
                          result = Function_2058fb0(v4, v8);
                        }
                      }
                    }
                    else
                    {
                      v15 = 2;
                      v17 = v8;
                      v16 = v4;
                      Function_2035ac4(30, (int)&v15, 3);
                      result = Function_2059058(v4, 0);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}

//----- (02242B14) --------------------------------------------------------
int Function_2242b14()
{
  int v0;
  int v1;
  uint v2;
  int result;

  if ( !Function_203608c() )
  {
    v0 = 0;
    do
    {
      if ( Function_2032ee8(v0) && !*(uchar *)(dword_2257740[2] + v0 + 309) )
        Function_224b5cc(v0);
      if ( Function_2032ee8(v0) )
        *(uchar *)(dword_2257740[2] + v0 + 309) = 1;
      else
        *(uchar *)(dword_2257740[2] + v0 + 309) = 0;
      ++v0;
    }
    while ( v0 < 8 );
    v1 = Function_22433d0();
    Function_2037b58(v1 + 2);
  }
  ++*(uchar *)(dword_2257740[2] + 325);
  if ( !Function_203608c() && Function_2032ce8() )
    Function_2057ae4(1);
  v2 = Function_2241810();
  Function_2243ae8(v2);
  Function_223e878();
  result = *(uchar *)(dword_2257740[2] + 331);
  if ( !*(uchar *)(dword_2257740[2] + 331) )
    result = Function_22468a8(*(uint *)(*(uint *)(dword_2257740[2] + 12) + 8));
  return result;
}

//----- (02242BC0) --------------------------------------------------------
int __fastcall Function_2242bc0(int a1)
{
  int v1;
  int result;
  ushort *v3;
  int v4;
  ushort *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  ushort *v13;
  int v14;
  ushort *v15;
  int v16;
  int v17;
  ushort *v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;

  v1 = a1;
  result = dword_2257740[2];
  if ( !dword_2257740[2] )
  {
    v3 = (ushort *)malloc(0xFu, 336);
    Function_2241f74(v3, v1);
    v4 = Function_2057c84();
    v5 = (ushort *)malloc(0xFu, v4);
    v6 = Function_2057524(v5, v1, 1);
    v7 = Function_2243858(v6);
    v8 = malloc(0xFu, v7);
    v9 = Function_22434bc(v8, v1);
    v10 = Function_224b5c4(v9);
    v11 = malloc(0xFu, v10);
    Function_224b144(v11, v1);
    v12 = Function_22417c4();
    v13 = (ushort *)malloc(0xFu, v12);
    Function_22416e0(v13, v1);
    v14 = Function_223e2e8();
    v15 = (ushort *)malloc(0xFu, v14);
    v18 = Function_223e1e4(v15, v1, v16, v17);
    v19 = Function_2253608(v18);
    v20 = malloc(0xFu, v19);
    v21 = GetOverWorldData_VariableAreaAdresses(v1);
    v22 = Function_20298a0(v21);
    v23 = GetOverWorldData_VariableAreaAdresses(v1);
    Function_2253598(v20, v22, v23);
    v24 = GetOverWorldData_VariableAreaAdresses(v1);
    v25 = LoadVariableAreaAdress_c(v24);
    result = Function_224f588(v25);
  }
  return result;
}

//----- (02242C78) --------------------------------------------------------
int Function_2242c78()
{
  int result;
  int v1;
  int v2;

  result = dword_2257740[2];
  if ( dword_2257740[2] )
  {
    Function_22535ec();
    v1 = Function_22417cc();
    v2 = Function_224b430(v1);
    Function_2243520(v2);
    Function_205764c();
    Function_223e2f0();
    Function_22421ec();
    result = 331;
    *(uchar *)(dword_2257740[2] + 331) = 1;
  }
  return result;
}

//----- (02242CB4) --------------------------------------------------------
int Function_2242cb4()
{
  int result;
  int v1;
  int v2;
  int v3;

  result = dword_2257740[2];
  if ( dword_2257740[2] )
  {
    v1 = Function_20576a0();
    Function_2253604(v1);
    v2 = Function_22417e0();
    v3 = Function_224b460(v2);
    Function_22435a8(v3);
    Function_223e2f4();
    *(uchar *)(dword_2257740[2] + 331) = 0;
    result = Function_200dd0c(*(uint **)(*(uint *)(dword_2257740[2] + 12) + 8), 3u, 994, 10, 0, 4);
  }
  return result;
}

//----- (02242D08) --------------------------------------------------------
int *Function_2242d08()
{
  int *result;
  uchar *v1;
  int v2;
  int *v3;
  int v4;
  int v5;
  int v6;

  result = (int *)dword_2257740[2];
  if ( dword_2257740[2] )
  {
    v1 = Function_20287f8(*(uint *)(*(uint *)(dword_2257740[2] + 12) + 12));
    v2 = Function_224b4e4(v1);
    Function_22435dc(v2);
    Function_20576cc(1);
    Function_22417f4();
    v3 = Function_223e2f8();
    v4 = Function_224f5b8(v3);
    v5 = Function_22535cc(v4);
    result = Function_2242108(v5, v6);
  }
  return result;
}

//----- (02242D44) --------------------------------------------------------
void Function_2242d44()
{
  uint *v0;

  if ( dword_2257740[2] )
  {
    Function_2243670();
    v0 = Function_2057764();
    Function_224b518(v0);
  }
}

//----- (02242D60) --------------------------------------------------------
int __fastcall Function_2242d60(ushort *a1)
{
  int v1;
  int result;

  v1 = (int)a1;
  if ( *(uchar *)(dword_2257740[2] + 332) )
  {
    result = 0;
    *(uchar *)(dword_2257740[2] + 332) = 0;
  }
  else if ( Function_2242308(a1) )
  {
    result = 1;
    *(uchar *)(dword_2257740[2] + 332) = 1;
  }
  else if ( Function_22446b0(v1) )
  {
    result = 1;
    *(uchar *)(dword_2257740[2] + 332) = 1;
  }
  else if ( Function_2244784(v1) )
  {
    result = 1;
    *(uchar *)(dword_2257740[2] + 332) = 1;
  }
  else if ( Function_224d020(v1) )
  {
    result = 1;
    *(uchar *)(dword_2257740[2] + 332) = 1;
  }
  else if ( Function_22415b8(v1) )
  {
    result = 1;
    *(uchar *)(dword_2257740[2] + 332) = 1;
  }
  else if ( Function_2241d58(v1) )
  {
    result = 1;
    *(uchar *)(dword_2257740[2] + 332) = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}

//----- (02242E10) --------------------------------------------------------
int Function_2242e10()
{
  int result;

  if ( dword_2257740[2] )
    result = Function_224d130();
  else
    result = 0;
  return result;
}

//----- (02242E28) --------------------------------------------------------
int Function_23_2242e28()
{
  int result;

  if ( dword_2257740[2] )
    result = Function_224d150();
  else
    result = 0;
  return result;
}

//----- (02242E40) --------------------------------------------------------
int Function_23_2242e40()
{
  int result;

  if ( dword_2257740[2] )
    result = Function_224d178();
  else
    result = 0;
  return result;
}

//----- (02242E58) --------------------------------------------------------
BOOL __fastcall Function_2242e58(int a1, int a2)
{
  return a1 <= 32 || a2 <= 64 || a1 >= 479 || a2 >= 479;
}

//----- (02242E78) --------------------------------------------------------
int __fastcall Function_2242e78(int a1)
{
  int result;
  int v2;

  if ( !dword_2257740[2] )
    return 0;
  if ( a1 >= 16 )
  {
    v2 = LoadVariableAreaAdress_c_2(*(uint *)(*(uint *)(dword_2257740[2] + 12) + 12));
    result = Function_2029874(v2);
  }
  else
  {
    switch ( *(uchar *)(dword_2257740[2] + 327) )
    {
      case 0:
        return 0;
      case 1:
        if ( a1 >= 8 )
          goto LABEL_7;
        result = Function_224121c(a1);
        break;
      case 2:
LABEL_7:
        result = Function_2241f0c(a1);
        break;
      case 3:
        result = Function_224125c(a1);
        break;
      case 4:
        result = Function_2245698();
        break;
      default:
        return 0;
    }
  }
  return result;
}

//----- (02242EE0) --------------------------------------------------------
int __fastcall Function_2242ee0(int a1)
{
  int result;
  int v2;

  if ( !dword_2257740[2] )
    return 0;
  if ( a1 >= 16 )
  {
    v2 = LoadVariableAreaAdress_c_2(*(uint *)(*(uint *)(dword_2257740[2] + 12) + 12));
    result = Function_202987c(v2);
  }
  else
  {
    switch ( *(uchar *)(dword_2257740[2] + 327) )
    {
      case 0:
        return 0;
      case 1:
        if ( a1 >= 8 )
          goto LABEL_7;
        result = Function_224123c(a1);
        break;
      case 2:
LABEL_7:
        result = Function_2241f40(a1);
        break;
      case 3:
        result = Function_2241294(a1);
        break;
      case 4:
        result = Function_22456cc();
        break;
      default:
        return 0;
    }
  }
  return result;
}

//----- (02242F48) --------------------------------------------------------
int __fastcall Function_2242f48(int a1)
{
  int result;
  int v2;

  if ( !dword_2257740[2] )
    return 0;
  if ( a1 >= 16 )
  {
    v2 = LoadVariableAreaAdress_c_2(*(uint *)(*(uint *)(dword_2257740[2] + 12) + 12));
    if ( Function_202988c(v2) )
      return 3;
    return 0;
  }
  switch ( *(uchar *)(dword_2257740[2] + 327) )
  {
    case 1:
      if ( a1 >= 8 )
        goto LABEL_6;
      result = 12;
      break;
    case 2:
LABEL_6:
      result = 9;
      break;
    case 3:
      result = 12;
      break;
    case 4:
      result = 11;
      break;
    default:
      return 0;
  }
  return result;
}

//----- (02242FA8) --------------------------------------------------------
int Function_2242fa8()
{
  int result;

  result = 327;
  *(uchar *)(dword_2257740[2] + 327) = 0;
  return result;
}

//----- (02242FBC) --------------------------------------------------------
int Function_2242fbc()
{
  int result;

  result = 327;
  *(uchar *)(dword_2257740[2] + 327) = 1;
  return result;
}

//----- (02242FD0) --------------------------------------------------------
int Function_2242fd0()
{
  int result;

  result = 327;
  *(uchar *)(dword_2257740[2] + 327) = 2;
  return result;
}

//----- (02242FE4) --------------------------------------------------------
int Function_2242fe4()
{
  int result;

  result = 327;
  *(uchar *)(dword_2257740[2] + 327) = 4;
  return result;
}

//----- (02242FF8) --------------------------------------------------------
int Function_2242ff8()
{
  int result;

  result = 327;
  *(uchar *)(dword_2257740[2] + 327) = 3;
  return result;
}

//----- (0224300C) --------------------------------------------------------
uchar *__fastcall Function_224300c(uchar *result, char a2)
{
  if ( dword_2257740[2] )
  {
    result += dword_2257740[2] + 194;
    *result = a2;
  }
  return result;
}

//----- (02243020) --------------------------------------------------------
uchar *__fastcall Function_2243020(uchar *result)
{
  if ( dword_2257740[2] )
  {
    result += dword_2257740[2] + 210;
    *result = 1;
  }
  return result;
}

//----- (02243038) --------------------------------------------------------
uint __fastcall Function_23_2243038(int a1)
{
  int v1;
  uint result;
  int v3;
  uint *v4;
  ushort *v5;
  int v6;
  ushort **v7;
  int v8;
  int v9;

  v1 = a1;
  result = dword_2257740[2];
  if ( dword_2257740[2] )
  {
    v3 = 4 * v1;
    result = *(uint *)(dword_2257740[2] + 4 * v1 + 220);
    if ( !result )
    {
      *(uint *)(dword_2257740[2] + v3 + 220) = Function_2023790(100, 0xFu);
      v4 = Function_200b358(0xBu);
      v5 = (ushort *)Function_2023790(100, 0xBu);
      Function_2032ee8(v1);
      Function_200b498((int)v4, 0);
      v6 = Function_224219c();
      v7 = (ushort **)Function_2253e3c(v6);
      Function_200b1b8_CallMsgDecrypt(v7, 0x73u, v5);
      Function_200c388(v4, *(uint *)(dword_2257740[2] + v3 + 220), (int)v5);
      Function_20237bc_FreeMsg((int)v5, v8);
      result = Function_200b3f0(v4, v9);
    }
  }
  return result;
}

//----- (022430B8) --------------------------------------------------------
int __fastcall Function_22430b8(int a1)
{
  int v1;
  int result;

  v1 = dword_2257740[2] + a1;
  result = 317;
  *(uchar *)(v1 + 317) = 1;
  return result;
}

//----- (022430D0) --------------------------------------------------------
short __fastcall Function_22430d0(short result)
{
  *(ushort *)(dword_2257740[2] + 192) = result;
  return result;
}

//----- (022430E0) --------------------------------------------------------
uint __fastcall Function_22430e0(uint result, short a2, short a3)
{
  short v3;
  short v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v3 = a2;
  v4 = a3;
  v5 = *(ushort *)(dword_2257740[2] + 192);
  if ( *(ushort *)(dword_2257740[2] + 192) )
  {
    v6 = 0;
    v7 = dword_2257740[2];
    do
    {
      if ( v5 == *(ushort *)(v7 + 32) && result == *(ushort *)(v7 + 34) )
      {
        v8 = 8 * v6;
        *(ushort *)(dword_2257740[2] + v8 + 36) = v3;
        result = dword_2257740[2] + v8;
        *(ushort *)(dword_2257740[2] + v8 + 38) = v4;
        return result;
      }
      ++v6;
      v7 += 8;
    }
    while ( v6 < 20 );
    v9 = 0;
    v10 = dword_2257740[2];
    do
    {
      if ( !*(ushort *)(v10 + 32) )
      {
        *(ushort *)(dword_2257740[2] + 8 * v9 + 32) = v5;
        *(ushort *)(dword_2257740[2] + 8 * v9 + 34) = result;
        *(ushort *)(dword_2257740[2] + 8 * v9 + 36) = v3;
        result = dword_2257740[2] + 8 * v9;
        *(ushort *)(result + 38) = v4;
        return result;
      }
      ++v9;
      v10 += 8;
    }
    while ( v9 < 20 );
    result = ErrorHandler();
  }
  return result;
}

//----- (02243154) --------------------------------------------------------
int __fastcall Function_2243154(int a1)
{
  int v1;
  int v2;

  v1 = 0;
  v2 = dword_2257740[2];
  do
  {
    if ( *(ushort *)(dword_2257740[2] + 192) == *(ushort *)(v2 + 32)
      && a1 == *(ushort *)(v2 + 34) )
    {
      return *(ushort *)(dword_2257740[2] + 8 * v1 + 38);
    }
    ++v1;
    v2 += 8;
  }
  while ( v1 < 20 );
  return 0;
}

//----- (0224318C) --------------------------------------------------------
int __fastcall Function_224318c(int a1)
{
  int v1;
  int v2;

  v1 = 0;
  v2 = dword_2257740[2];
  do
  {
    if ( *(ushort *)(dword_2257740[2] + 192) == *(ushort *)(v2 + 32)
      && a1 == *(ushort *)(v2 + 34) )
    {
      return *(ushort *)(dword_2257740[2] + 8 * v1 + 36);
    }
    ++v1;
    v2 += 8;
  }
  while ( v1 < 20 );
  return 0;
}

//----- (022431C4) --------------------------------------------------------
int __fastcall Function_22431c4(int a1, int a2, uchar *a3)
{
  int v3;
  int result;

  v3 = *a3;
  result = Function_203608c();
  if ( v3 == result )
  {
    Function_22534a0(*(uint *)(dword_2257740[2] + 12));
    Function_20360dc(25);
    result = Function_20594fc();
  }
  return result;
}

//----- (022431EC) --------------------------------------------------------
int __fastcall Function_22431ec(int a1, int a2, int a3)
{
  int result;

  *(uint *)dword_2257740[2] = a1;
  *(uint *)(dword_2257740[2] + 4) = a2;
  result = dword_2257740[2];
  *(uint *)(dword_2257740[2] + 8) = a3;
  return result;
}

//----- (02243204) --------------------------------------------------------
int Function_2243204()
{
  int result;

  *(uint *)dword_2257740[2] = 0;
  *(uint *)(dword_2257740[2] + 4) = 0;
  result = dword_2257740[2];
  *(uint *)(dword_2257740[2] + 8) = 0;
  return result;
}

//----- (0224321C) --------------------------------------------------------
int Function_224321c()
{
  int v0;
  int v1;

  v0 = 0;
  if ( *(uint *)(dword_2257740[2] + 4) )
  {
    v1 = *(uint *)dword_2257740[2];
    (*(void (**)(void))(dword_2257740[2] + 8))();
    Function_2243204();
    v0 = 1;
  }
  Function_22421ec();
  Function_2254044(*(uint *)(dword_2257740[2] + 280));
  Function_2254044(*(uint *)(dword_2257740[2] + 284));
  Function_2254044(*(uint *)(dword_2257740[2] + 288));
  Function_2254044(*(uint *)(dword_2257740[2] + 292));
  Function_2254044(*(uint *)(dword_2257740[2] + 296));
  Function_2254044(*(uint *)(dword_2257740[2] + 280));
  return v0;
}

//----- (02243298) --------------------------------------------------------
int __fastcall Function_2243298(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;

  v1 = a1;
  if ( *(uint *)(dword_2257740[2] + 4) )
    return 0;
  if ( *(uint *)(*(uint *)(dword_2257740[2] + 12) + 16) )
  {
    if ( ++*(uint *)(dword_2257740[2] + 304) > 100 )
      ErrorHandler();
    result = 0;
  }
  else if ( Function_224acc0(a1) )
  {
    result = 0;
  }
  else
  {
    v3 = Function_2058d48(v1);
    v4 = Function_2058d68(v1);
    if ( Function_2242e58(v3, v4) && v1 )
    {
      result = 0;
    }
    else
    {
      *(uint *)(dword_2257740[2] + 304) = 0;
      result = 1;
    }
  }
  return result;
}

//----- (02243310) --------------------------------------------------------
int Function_2243310()
{
  Function_2254250(*(uint *)(dword_2257740[2] + 280));
  Function_2254250(*(uint *)(dword_2257740[2] + 284));
  Function_2254250(*(uint *)(dword_2257740[2] + 288));
  Function_2254250(*(uint *)(dword_2257740[2] + 292));
  return Function_2254250(*(uint *)(dword_2257740[2] + 296));
}

//----- (02243360) --------------------------------------------------------
int __fastcall Function_2243360(int a1, int a2, int a3, int a4)
{
  int v4;
  short v6;
  short v7;
  char v8;
  bool v9;
  int v10;

  v10 = a4;
  v4 = Function_224db48();
  v6 = v4;
  v7 = Function_224db64(v4);
  v8 = Function_224db84();
  v9 = Function_2241670();
  return Function_20360d0(70, (int)&v6);
}

//----- (02243390) --------------------------------------------------------
int __fastcall Function_2243390(int a1, int a2, ushort *a3)
{
  ushort *v3;
  int v4;
  int v5;

  v3 = a3;
  v4 = *a3;
  v5 = a1;
  Function_224dba0();
  Function_224dbbc(v5, v3[1]);
  Function_224dbd8(v5, *((uchar *)v3 + 4));
  return Function_2241690(v5, *((uchar *)v3 + 5));
}

//----- (022433B8) --------------------------------------------------------
int Function_22433b8()
{
  return 6;
}

//----- (022433BC) --------------------------------------------------------
uchar *__fastcall Function_22433bc(int a1)
{
  uchar *result;

  result = (uchar *)(dword_2257740[2] + a1 + 202);
  *result = 1;
  return result;
}

//----- (022433D0) --------------------------------------------------------
int Function_22433d0()
{
  int result;
  int v1;
  int v2;

  result = 0;
  v1 = dword_2257740[2];
  v2 = 0;
  do
  {
    if ( *(uchar *)(v1 + 202) )
      ++result;
    ++v2;
    ++v1;
  }
  while ( v2 < 8 );
  return result;
}

//----- (022433F4) --------------------------------------------------------
int __fastcall Function_22433f4(int a1)
{
  *(uchar *)(dword_2257740[2] + a1 + 202) = 0;
  return Function_224b5cc(a1);
}

//----- (0224340C) --------------------------------------------------------
int Function_224340c()
{
  int v0;
  int v1;
  int v2;
  int v3;
  int result;
  int v5;

  v0 = GetOverWorldData_VariableAreaAdresses(*(uint *)(dword_2257740[9] + 64));
  v1 = 0;
  v2 = LoadVariableAreaAdress_c(v0);
  v3 = 0;
  v5 = 0;
  do
  {
    *(uchar *)(dword_2257740[9] + v3 + 680) = Function_2029030(v2, v1);
    *(ushort *)(dword_2257740[9] + v3 + 676) = Function_202903c(v2, v1);
    *(ushort *)(dword_2257740[9] + v3 + 678) = Function_202905c(v2, v1);
    *(uchar *)(dword_2257740[9] + v3 + 681) = Function_202907c(v2, v1);
    if ( !*(uchar *)(dword_2257740[9] + 2886) )
    {
      if ( *(uchar *)(dword_2257740[9] + v3 + 680) )
        *(uint *)(dword_2257740[9] + v5 + 772) = Function_2244e68(
                                                     *(ushort *)(dword_2257740[9] + v3 + 676),
                                                     *(ushort *)(dword_2257740[9] + v3 + 678),
                                                     1);
    }
    ++v1;
    result = v5 + 4;
    v3 += 6;
    v5 += 4;
  }
  while ( v1 < 16 );
  return result;
}

//----- (022434BC) --------------------------------------------------------
ushort *__fastcall Function_22434bc(ushort *result, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  if ( !dword_2257740[9] )
  {
    dword_2257740[9] = (int)result;
    MI_CpuFill8(result, 0, 0xB48u);
    *(uint *)(dword_2257740[9] + 64) = v2;
    v3 = GetOverWorldData_VariableAreaAdresses(v2);
    LoadVariableAreaAdress_c(v3);
    v4 = 0;
    *(uint *)(dword_2257740[9] + 652) = 0;
    do
    {
      v5 = dword_2257740[9] + v4++;
      *(uchar *)(v5 + 2820) = -1;
    }
    while ( v4 < 8 );
    *(uint *)(v2 + 140) = ((int (__fastcall *)(uint, int))dword_21EB0C8[0])(*(uint *)(v2 + 36), 2820);
    Function_2243754();
    result = (ushort *)Function_224340c();
  }
  return result;
}

//----- (02243520) --------------------------------------------------------
int Function_2243520()
{
  int v0;
  int v1;
  int v2;
  int v3;
  int *v4;
  int v5;
  int result;

  v0 = ((int (__fastcall *)(int))dword_21EB184[0])(*(uint *)(dword_2257740[9] + 64) + 140);
  v1 = Function_224382c(v0);
  Function_2248bd0(v1);
  v2 = 0;
  v3 = 0;
  do
  {
    if ( *(uint *)(dword_2257740[9] + v3 + 772) )
      *(uint *)(dword_2257740[9] + v3 + 772) = 0;
    ++v2;
    v3 += 4;
  }
  while ( v2 < 16 );
  v4 = *(int **)(dword_2257740[9] + 652);
  if ( v4 )
  {
    Call_RemoveTaskFromTaskList(v4);
    *(uint *)(dword_2257740[9] + 652) = 0;
  }
  v5 = *(uint *)(dword_2257740[9] + 668);
  if ( v5 )
  {
    free(v5);
    *(uint *)(dword_2257740[9] + 668) = 0;
  }
  result = 2886;
  *(uchar *)(dword_2257740[9] + 2886) = 1;
  return result;
}

//----- (022435A8) --------------------------------------------------------
int Function_22435a8()
{
  int v0;

  *(uint *)(*(uint *)(dword_2257740[9] + 64) + 140) = ((int (__fastcall *)(uint))dword_21EB0C8[0])(*(uint *)(*(uint *)(dword_2257740[9] + 64) + 36));
  *(uchar *)(dword_2257740[9] + 2886) = 0;
  v0 = Function_224340c();
  return Function_2243754(v0);
}

//----- (022435DC) --------------------------------------------------------
int *Function_22435dc()
{
  int v0;
  int v1;
  int *v2;
  int v3;
  uint v4;
  int *v5;
  int v6;
  int *result;

  v0 = 0;
  v1 = 0;
  do
  {
    v2 = *(int **)(dword_2257740[9] + v1 + 772);
    if ( v2 )
    {
      Function_207136c(v2);
      v2 = (int *)772;
      *(uint *)(dword_2257740[9] + v1 + 772) = 0;
    }
    ++v0;
    v1 += 4;
  }
  while ( v0 < 16 );
  v3 = Function_2248bd0(v2);
  Function_224382c(v3);
  ((void (__fastcall *)(int))dword_21EB184[0])(*(uint *)(dword_2257740[9] + 64) + 140);
  v4 = *(ushort *)(dword_2257740[9] + 2868);
  if ( v4 >= 0xA )
    Function_206deec(*(uint *)(dword_2257740[9] + 64), *(uchar *)(dword_2257740[9] + 2870), v4);
  v5 = *(int **)(dword_2257740[9] + 652);
  if ( v5 )
    Call_RemoveTaskFromTaskList(v5);
  v6 = *(uint *)(dword_2257740[9] + 668);
  if ( v6 )
    free(v6);
  free(dword_2257740[9]);
  result = &dword_2257740[8];
  dword_2257740[9] = 0;
  return result;
}

//----- (02243670) --------------------------------------------------------
int Function_2243670()
{
  int v0;
  int v1;
  int *v2;
  int v3;
  int v4;
  ushort *v5;

  v0 = 0;
  v1 = 0;
  do
  {
    v2 = *(int **)(dword_2257740[9] + v1 + 772);
    if ( v2 )
    {
      Function_207136c(v2);
      v2 = (int *)772;
      *(uint *)(dword_2257740[9] + v1 + 772) = 0;
    }
    ++v0;
    v1 += 4;
  }
  while ( v0 < 16 );
  Function_2248bd0(v2);
  Function_224340c();
  v3 = 0;
  do
  {
    v4 = dword_2257740[9] + v3++;
    *(uchar *)(v4 + 2876) = 0;
  }
  while ( v3 < 8 );
  MI_CpuFill8((ushort *)(dword_2257740[9] + 836), 0, 0x480u);
  v5 = MI_CpuFill8((ushort *)(dword_2257740[9] + 1988), 0, 0x300u);
  return Function_2243ce8(v5);
}

//----- (022436F0) --------------------------------------------------------
int __fastcall Function_22436f0(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  v2 = dword_2257740[9] + 836 + 96 * a1;
  v3 = 0;
  do
  {
    ++v3;
    *(uchar *)(v2 + 4) = 0;
    v2 += 6;
  }
  while ( v3 < 16 );
  Function_2243970(a1, v2);
  result = *(uchar *)(dword_2257740[9] + v1 + 2876);
  if ( *(uchar *)(dword_2257740[9] + v1 + 2876) )
  {
    Function_23_224ad98(v1);
    Function_2244844(v1, *(uchar *)(dword_2257740[9] + v1 + 2876));
    result = 2876;
    *(uchar *)(dword_2257740[9] + v1 + 2876) = 0;
  }
  return result;
}

//----- (02243754) --------------------------------------------------------
uint Function_2243754()
{
  int *v0;
  int v1;
  int **v2;
  int v3;
  int v4;
  int v5;
  int *v6;

  v0 = 0;
  v1 = 0;
  do
  {
    v2 = Function_2009714(1, v0, 4u);
    v0 = (int *)((char *)v0 + 1);
    v5 = dword_2257740[9] + v1;
    v1 += 4;
    *(uint *)(v5 + 384) = v2;
  }
  while ( (int)v0 < 4 );
  v6 = LoadFromNARC_8(50, 4u, v3, v4);
  *(uint *)(dword_2257740[9] + 416) = Function_2009a4c(
                                          *(uint *)(dword_2257740[9] + 384),
                                          (int)v6,
                                          0x11u,
                                          0,
                                          0,
                                          1,
                                          4u);
  *(uint *)(dword_2257740[9] + 420) = Function_2009b04(
                                          *(uint *)(dword_2257740[9] + 388),
                                          (int)v6,
                                          0x12u,
                                          0,
                                          0,
                                          1,
                                          7,
                                          4u);
  *(uint *)(dword_2257740[9] + 424) = Function_2009bc4(
                                          *(uint *)(dword_2257740[9] + 392),
                                          (int)v6,
                                          0x10u,
                                          0,
                                          0,
                                          2u,
                                          4u);
  *(uint *)(dword_2257740[9] + 428) = Function_2009bc4(
                                          *(uint *)(dword_2257740[9] + 396),
                                          (int)v6,
                                          0xFu,
                                          0,
                                          0,
                                          3u,
                                          4u);
  return Call_FS_CloseFile(v6);
}

//----- (0224382C) --------------------------------------------------------
uint Function_224382c()
{
  int v0;
  int v1;
  uint result;

  v0 = 0;
  v1 = 0;
  do
  {
    result = Function_2009754(*(int **)(dword_2257740[9] + v1 + 384));
    ++v0;
    v1 += 4;
  }
  while ( v0 < 4 );
  return result;
}

//----- (02243850) --------------------------------------------------------
int Function_2243850()
{
  return Function_2059514();
}

//----- (02243858) --------------------------------------------------------
int Function_2243858()
{
  return 2888;
}

//----- (02243860) --------------------------------------------------------
int Function_2243860()
{
  return 96;
}

//----- (02243864) --------------------------------------------------------
ushort *__fastcall Function_2243864(ushort *result, int a2)
{
  int v2;
  ushort *v3;

  v2 = 4 * a2;
  v3 = *(ushort **)(dword_2257740[9] + v2 + 1988);
  if ( !v3 )
    return 0;
  *result = *v3;
  result[1] = *(ushort *)(*(uint *)(dword_2257740[9] + v2 + 1988) + 2);
  return result;
}

//----- (02243898) --------------------------------------------------------
int __fastcall Function_2243898(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int v7;
  int result;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v15 = a4;
  v4 = a1;
  v15 = *a1;
  Function_22427dc(192, (int)Function_2243864);
  result = Function_2242788((ushort *)&v15, v5, v6, v7);
  if ( result < 192 )
  {
    v9 = 0;
    v10 = dword_2257740[9];
    while ( *(int **)(v10 + 1988) != v4 )
    {
      ++v9;
      v10 += 4;
      if ( v9 >= 192 )
      {
        v11 = 190;
        if ( result <= 190 )
        {
          v12 = 760;
          do
          {
            --v11;
            *(uint *)(dword_2257740[9] + v12 + 1992) = *(uint *)(dword_2257740[9] + v12 + 1988);
            v12 -= 4;
          }
          while ( v11 >= result );
        }
        v13 = 4 * result;
        v14 = dword_2257740[9] + 4 * result;
        result = 1988;
        *(uint *)(v14 + 1988) = v4;
        *(uint *)(dword_2257740[9] + v13 + 1988) = v4;
        return result;
      }
    }
  }
  return result;
}

//----- (02243910) --------------------------------------------------------
int __fastcall Function_2243910(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;
  int v5;
  int v6;

  v1 = dword_2257740[9];
  v2 = -1;
  v3 = 0;
  while ( *(uint *)(v1 + 1988) != a1 )
  {
    ++v3;
    v1 += 4;
    if ( v3 >= 192 )
      goto LABEL_5;
  }
  v2 = v3;
LABEL_5:
  result = -1;
  if ( v2 != -1 )
  {
    if ( v2 < 191 )
    {
      v5 = 4 * v2;
      do
      {
        ++v2;
        v6 = dword_2257740[9] + v5;
        v5 += 4;
        *(uint *)(v6 + 1988) = *(uint *)(v6 + 1992);
      }
      while ( v2 < 191 );
    }
    result = 2752;
    *(uint *)(dword_2257740[9] + 2752) = 0;
  }
  return result;
}

//----- (02243970) --------------------------------------------------------
int __fastcall Function_2243970(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int result;
  int v9;

  v1 = 16 * a1;
  v2 = 0;
  v3 = 16 * a1;
  do
  {
    Function_2243910(dword_2257740[9] + 836 + 6 * v3);
    ++v2;
    ++v3;
  }
  while ( v2 < 16 );
  v5 = 0;
  v6 = 0;
  v7 = 6 * v1;
  do
  {
    result = dword_2257740[9];
    v9 = v6 + v7 + dword_2257740[9];
    if ( *(uchar *)(v9 + 840) )
      result = Function_2243898((int *)(dword_2257740[9] + 836 + 6 * v1), dword_2257740[9] + 836, v9, v4);
    ++v5;
    v6 += 6;
    ++v1;
  }
  while ( v5 < 16 );
  return result;
}

//----- (022439D0) --------------------------------------------------------
int __fastcall Function_22439d0(int result)
{
  int v1;

  v1 = 0;
  while ( *(uchar *)(result + 4) )
  {
    ++v1;
    result += 6;
    if ( v1 >= 16 )
      return 0;
  }
  return result;
}

//----- (022439E4) --------------------------------------------------------
int __fastcall Function_22439e4(int a1)
{
  int v1;

  v1 = 0;
  do
  {
    if ( !*(uchar *)(a1 + 4) )
      return v1;
    ++v1;
    a1 += 6;
  }
  while ( v1 < 16 );
  return -1;
}

//----- (02243A00) --------------------------------------------------------
int __fastcall Function_2243a00(int a1)
{
  uint v1;
  uint v2;
  int v3;
  int v5;
  int v6;

  v2 = u32_div_f(a1 - (dword_2257740[9] + 836), 6);
  v6 = v2 >> 4;
  v5 = 16 * ((v2 >> 4) + 1);
  v3 = 6 * v2;
  for ( *(uchar *)(dword_2257740[9] + 6 * v2 + 840) = 0; v2 < v5 - 1; v3 += 6 )
    MI_CpuCopy8(dword_2257740[9] + 836 + 6 * (v2++ + 1), dword_2257740[9] + 836 + v3, 6u, v1);
  *(uchar *)(dword_2257740[9] + 6 * v5 + 834) = 0;
  return Function_2243970(v6);
}

//----- (02243A80) --------------------------------------------------------
int __fastcall Function_2243a80(int a1, int a2, int a3, int a4)
{
  short v4;
  short v5;
  int v6;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  char v13;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v13 = a4;
  if ( Function_2054f68(*(uint *)(dword_2257740[9] + 64), a1, a2, a4) )
    return 0;
  v11 = Function_22439d0(v6);
  if ( !v11 )
  {
    v12 = Function_2244ea0(v6);
    Function_2243a00(v12);
    v11 = Function_22439d0(v12);
  }
  *(ushort *)v11 = v4;
  *(ushort *)(v11 + 2) = v5;
  *(uchar *)(v11 + 4) = v13;
  Function_2243898((int *)v11, v8, v9, v10);
  return v11;
}

//----- (02243AD4) --------------------------------------------------------
int Function_2243ad4()
{
  return Function_2243ad6();
}

//----- (02243AD6) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02243AE8) --------------------------------------------------------
int Function_2243ae8()
{
  return Function_22457fc();
}

//----- (02243AF0) --------------------------------------------------------
int Function_2243af0()
{
  return Function_2035f58(35, dword_2257740[9] + 676, 96);
}

//----- (02243B0C) --------------------------------------------------------
int __fastcall Function_2243b0c(int result, int a2, uchar *a3, int a4)
{
  int v4;
  uchar *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint v12;
  char v13;
  char v14;
  char v15;
  int v16;

  v16 = a4;
  v4 = result;
  v5 = a3;
  if ( dword_2257740[9] )
  {
    v14 = result;
    v15 = 3;
    v6 = Function_2058ee0(result);
    v7 = Function_2058f18(v4);
    if ( Function_2058df8(v4) != 0xFFFF || Function_2058e4c(v4) != 0xFFFF )
    {
      if ( Function_205900c(v6, v7) == 255 )
      {
        if ( Function_2058108(v6, v7) )
        {
          v15 = 5;
          result = Function_2035ac4(34, (int)&v13, 8);
        }
        else if ( Function_2242e58(v6, v7) )
        {
          v15 = 4;
          result = Function_2035ac4(34, (int)&v13, 8);
        }
        else if ( Function_2054f68(*(uint *)(dword_2257740[9] + 64), v6, v7, v8) )
        {
          v15 = 6;
          result = Function_2035ac4(34, (int)&v13, 8);
        }
        else
        {
          if ( !Function_224240c(v6, v7, v9, v10) )
          {
            v11 = Function_2243a80(v6, v7, dword_2257740[9] + 836 + 96 * v4, *v5);
            if ( v11 )
            {
              v15 = 1;
              MI_CpuCopy8(v11, (uint)&v13, 6u, v12);
            }
          }
          result = Function_2035ac4(34, (int)&v13, 8);
        }
      }
      else
      {
        v15 = 5;
        result = Function_2035ac4(34, (int)&v13, 8);
      }
    }
    else
    {
      v15 = 7;
      result = Function_2035ac4(34, (int)&v13, 8);
    }
  }
  return result;
}

//----- (02243C38) --------------------------------------------------------
int Function_2243c38()
{
  return 8;
}

//----- (02243C3C) --------------------------------------------------------
int __fastcall Function_2243c3c(int a1, int a2, uint *a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v8;
  int v9;
  int v10;
  uint v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v14 = a1;
  v15 = a2;
  v4 = a3;
  v5 = a4;
  v16 = LoadVariableAreaAdress_c(*(uint *)(*(uint *)(dword_2257740[9] + 64) + 12));
  if ( v5 >= 64 )
    return 0;
  v8 = v4[1];
  v9 = dword_2257740[9] + 836;
  v10 = 96 * (v5 / 16 + 8);
  v11 = v4[2] + *v4 * v8;
  *v4 = v11;
  v12 = *((uchar *)dword_2256788 + (26 * (v11 >> 16) >> 16) / 0x100);
  if ( Function_224240c(v14, v15, v8, v6) )
    return 0;
  if ( !Function_22439d0(v9 + v10) )
    return 0;
  v13 = Function_2243a80(v14, v15, v9 + v10, v12);
  if ( !v13 )
    return 0;
  *(uchar *)(v13 + 5) = v5;
  Function_2028ef8(v16, v12, v5, v14, v15);
  return v12;
}

//----- (02243CE8) --------------------------------------------------------
int Function_2243ce8()
{
  int v0;
  int v1;
  int result;
  int v3;
  int v4;
  int v5;

  v0 = LoadVariableAreaAdress_c(*(uint *)(*(uint *)(dword_2257740[9] + 64) + 12));
  v1 = 0;
  do
  {
    result = Function_2028f40(v0, v1);
    v3 = result;
    if ( result )
    {
      v4 = Function_2028f5c(v0, v1);
      v5 = Function_2028f88(v0, v1);
      result = Function_2243a80(v4, v5, dword_2257740[9] + 836 + 96 * (v1 / 16 + 8), v3);
      if ( result )
        *(uchar *)(result + 5) = v1;
    }
    ++v1;
  }
  while ( v1 < 64 );
  return result;
}

//----- (02243D50) --------------------------------------------------------
int Function_2243d50()
{
  int v0;
  int v1;
  int v2;
  int v3;
  int result;

  v0 = GetOverWorldData_VariableAreaAdresses(*(uint *)(dword_2257740[9] + 64));
  v1 = 0;
  v2 = LoadVariableAreaAdress_c(v0);
  v3 = 0;
  do
  {
    result = Function_2028fe0(
               v2,
               *(uchar *)(dword_2257740[9] + v3 + 680),
               v1++,
               *(ushort *)(dword_2257740[9] + v3 + 676),
               *(ushort *)(dword_2257740[9] + v3 + 678),
               *(uchar *)(dword_2257740[9] + v3 + 681));
    v3 += 6;
  }
  while ( v1 < 16 );
  return result;
}

//----- (02243DA8) --------------------------------------------------------
int __fastcall Function_2243da8(int a1)
{
  int v1;
  ushort *v2;
  int v3;
  int v4;
  uint v5;
  int v6;
  int result;

  v1 = a1;
  v2 = (ushort *)Function_22439d0(dword_2257740[9] + 676);
  if ( !v2 )
  {
    v3 = Function_2244ea0(dword_2257740[9] + 676);
    Function_2243e20(v3);
    v2 = (ushort *)Function_22439d0(dword_2257740[9] + 676);
  }
  v4 = Function_22439e4(dword_2257740[9] + 676);
  MI_CpuCopy8(v1, (uint)v2, 6u, v5);
  Function_2243d50();
  v6 = *((uchar *)v2 + 4);
  result = Function_2244e68(*v2, v2[1], 1);
  *(uint *)(dword_2257740[9] + 4 * v4 + 772) = result;
  return result;
}

//----- (02243E20) --------------------------------------------------------
int __fastcall Function_2243e20(ushort *a1)
{
  ushort *v1;
  uint v2;
  int v3;
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  int *v9;
  int v10;

  v1 = (ushort *)(dword_2257740[9] + 676);
  v2 = *a1;
  v3 = -1;
  v4 = 0;
  while ( v2 != *v1 || a1[1] != v1[1] )
  {
    ++v4;
    v1 += 3;
    if ( v4 >= 16 )
      goto LABEL_6;
  }
  v3 = v4;
LABEL_6:
  result = -1;
  if ( v3 != -1 )
  {
    v6 = v3;
    if ( v3 < 15 )
    {
      v7 = 6 * v3;
      do
      {
        MI_CpuCopy8(dword_2257740[9] + 676 + 6 * (v6++ + 1), dword_2257740[9] + 676 + v7, 6u, v2);
        v7 += 6;
      }
      while ( v6 < 15 );
    }
    *(uchar *)(dword_2257740[9] + 770) = 0;
    v8 = 4 * v3;
    v9 = *(int **)(dword_2257740[9] + 4 * v3 + 772);
    if ( v9 )
      Function_207136c(v9);
    for ( ; v3 < 15; *(uint *)(v10 + 772) = *(uint *)(v10 + 776) )
    {
      ++v3;
      v10 = dword_2257740[9] + v8;
      v8 += 4;
    }
    result = 832;
    *(uint *)(dword_2257740[9] + 832) = 0;
  }
  return result;
}

//----- (02243ED4) --------------------------------------------------------
int __fastcall Function_2243ed4(int a1, int a2, uchar *a3)
{
  uchar *v3;
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v3 = a3;
  result = Function_203608c();
  if ( v3[6] == result )
  {
    Function_20594fc();
    v5 = v3[7];
    switch ( v5 )
    {
      case 1:
        Function_2243da8((int)v3);
        Function_224fd68(v3[4]);
        v6 = Function_224219c();
        Function_2254098(v6, v3[4]);
        v7 = Function_224219c();
        Function_2253f40(v7, 131);
        result = Function_2005748(0x623u);
        break;
      case 4:
        v8 = Function_224219c();
        result = Function_2253f40(v8, 73);
        break;
      case 5:
        v9 = Function_224219c();
        result = Function_2253f40(v9, 55);
        break;
      case 6:
        v10 = Function_224219c();
        result = Function_2253f40(v10, 60);
        break;
      case 7:
        result = Function_2243850();
        break;
      default:
        v11 = Function_224219c();
        result = Function_2253f40(v11, 59);
        break;
    }
  }
  return result;
}

//----- (02243F78) --------------------------------------------------------
int __fastcall Function_2243f78(int a1, int a2, ushort *a3)
{
  return Function_2243a00(dword_2257740[9] + 836 + 6 * *a3);
}

//----- (02243F98) --------------------------------------------------------
int Function_2243f98()
{
  return 2;
}

//----- (02243F9C) --------------------------------------------------------
int __fastcall Function_2243f9c(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int result;
  int v9;
  int v10;
  int v11;
  char v12;
  char v13;
  char v14;
  int v15;

  v15 = a4;
  v4 = a2;
  v12 = a1;
  v5 = 96 * a1;
  v6 = a3;
  v7 = dword_2257740[9] + 836 + 96 * a1;
  result = Function_203608c();
  if ( !result )
  {
    if ( v4 != 96 )
      ErrorHandler();
    v9 = 0;
    v10 = 0;
    do
    {
      ++v9;
      *(uchar *)(v7 + 4) = 0;
      v7 += 6;
    }
    while ( v9 < 16 );
    do
    {
      if ( *((uchar *)v6 + 4) )
        Function_2243a80(*v6, v6[1], dword_2257740[9] + 836 + v5, *((uchar *)v6 + 4));
      ++v10;
      v6 += 3;
    }
    while ( v10 < 16 );
    v13 = v12;
    v14 = 1;
    v11 = Function_2035ac4(36, (int)&v13, 2);
    result = Function_2244638(v11);
  }
  return result;
}

//----- (0224401C) --------------------------------------------------------
int __fastcall Function_224401c(int a1, int a2, uchar *a3)
{
  uchar *v3;
  int result;

  v3 = a3;
  result = dword_2257740[9];
  if ( dword_2257740[9] )
  {
    result = Function_203608c();
    if ( *v3 == result )
    {
      result = 2885;
      *(uchar *)(dword_2257740[9] + 2885) = v3[1];
    }
  }
  return result;
}

//----- (02244048) --------------------------------------------------------
int Function_2244048()
{
  return 2;
}

//----- (0224404C) --------------------------------------------------------
BOOL Function_224404c()
{
  return *(uchar *)(dword_2257740[9] + 2885) == 1;
}

//----- (02244068) --------------------------------------------------------
int Function_2244068()
{
  int result;

  result = 2885;
  *(uchar *)(dword_2257740[9] + 2885) = 0;
  return result;
}

//----- (0224407C) --------------------------------------------------------
int Function_224407c()
{
  return 4;
}

//----- (02244080) --------------------------------------------------------
int __fastcall Function_2244080(int a1, int a2, char a3, int a4)
{
  int v4;
  char v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint v12;
  char v13;
  uchar v14;
  uchar v15;
  char v16;
  int v17;

  v17 = a4;
  v4 = a1;
  v5 = a3;
  v6 = GetOverWorldData_VariableAreaAdresses(*(uint *)(dword_2257740[9] + 64));
  v7 = LoadVariableAreaAdress_c(v6);
  v8 = Function_2058ee0(v4);
  v9 = Function_2058f18(v4);
  v10 = Function_224429c(v8, v9);
  if ( !v10 )
    return 0;
  if ( Function_224a6b8(v4) )
    return 1;
  v16 = v4 & 0xF | v16 & 0xF0;
  v15 = Function_224426c(v10);
  MI_CpuCopy8(v10, (uint)&v13, 6u, v12);
  if ( v5 & 0x10 )
  {
    v16 |= 0x40u;
  }
  else
  {
    v16 &= 0xBFu;
    Function_2243a00(v10);
  }
  if ( v15 >= 8u )
    Function_2028fb4(v7, v14);
  Function_2059058(v4, 0);
  Function_2035ac4(51, (int)&v13, 8);
  return 1;
}

//----- (0224413C) --------------------------------------------------------
int Function_224413c()
{
  return 8;
}

//----- (02244140) --------------------------------------------------------
int __fastcall Function_2244140(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int result;
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

  v3 = a3;
  if ( (*(uchar *)(a3 + 7) & 0xFu) >= 8 )
    ErrorHandler();
  v4 = *(uchar *)(v3 + 7);
  if ( (uint)(v4 << 25) >> 31 == 1 )
  {
    result = Function_203608c();
    if ( (*(uchar *)(v3 + 7) & 0xF) == result )
    {
      v6 = Function_224219c();
      Function_2253f40(v6, 78);
      result = Function_20594fc();
    }
  }
  else
  {
    *(uchar *)(dword_2257740[9] + (v4 & 0xF) + 2860) = 1;
    if ( *(uchar *)(v3 + 6) == Function_203608c() )
    {
      Function_2243e20((ushort *)v3);
      Function_2243d50();
    }
    result = Function_203608c();
    if ( (*(uchar *)(v3 + 7) & 0xF) == result )
    {
      if ( Function_224f730(*(uchar *)(v3 + 4)) )
      {
        if ( *(uchar *)(v3 + 6) != Function_203608c() )
        {
          if ( !*(ushort *)(dword_2257740[9] + 2868) )
            *(uchar *)(dword_2257740[9] + 2870) = *(uchar *)(v3 + 4);
          v7 = *(ushort *)(dword_2257740[9] + 2868);
          if ( v7 != 0xFFFF )
            *(ushort *)(dword_2257740[9] + 2868) = v7 + 1;
        }
        Function_2005748(0x5E3u);
        v8 = Function_224219c();
        v9 = Function_2032ee8(*(uchar *)(v3 + 7) & 0xF);
        Function_2254050(v8, v9);
        v10 = Function_224219c();
        Function_22541f0(v10, 2, *(uchar *)(v3 + 4));
        v11 = Function_224219c();
        Function_2254204(v11, 2);
        v12 = Function_224219c();
        Function_2254098(v12, *(uchar *)(v3 + 4));
        v13 = Function_224219c();
        Function_2253f40(v13, 18);
        v14 = Function_224219c();
        Function_2253f98(v14);
      }
      else
      {
        v15 = Function_224219c();
        Function_2253f40(v15, 78);
      }
      result = Function_20594fc();
    }
  }
  return result;
}

//----- (0224426C) --------------------------------------------------------
int __fastcall Function_224426c(int a1)
{
  int v1;
  int v2;

  v1 = 0;
  v2 = dword_2257740[9] + 836;
  do
  {
    if ( v2 == a1 )
      return v1 / 16;
    ++v1;
    v2 += 6;
  }
  while ( v1 < 192 );
  ErrorHandler();
  return 0;
}

//----- (0224429C) --------------------------------------------------------
int __fastcall Function_224429c(short a1, short a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;
  short v7;
  short v8;

  v7 = a1;
  v8 = a2;
  Function_22427dc(192, (int)Function_2243864);
  v5 = Function_224271c((ushort *)&v7, v2, v3, v4);
  if ( v5 == -1 )
    result = 0;
  else
    result = *(uint *)(dword_2257740[9] + 4 * v5 + 1988);
  return result;
}

//----- (022442D8) --------------------------------------------------------
BOOL __fastcall Function_22442d8(short a1, short a2)
{
  return Function_224429c(a1, a2) != 0;
}

//----- (022442EC) --------------------------------------------------------
int Function_22442ec()
{
  return 8;
}

//----- (022442F0) --------------------------------------------------------
int __fastcall Function_22442f0(int a1)
{
  int v1;
  int v2;
  short v4;
  short v5;
  int v6;
  uint v7;
  char v8;
  uchar v9;
  uchar v10;
  char v11;

  v1 = a1;
  v2 = LoadVariableAreaAdress_c(*(uint *)(*(uint *)(dword_2257740[9] + 64) + 12));
  if ( Function_224162c(v1) )
    return 0;
  v4 = Function_2058df8(v1);
  v5 = Function_2058e4c(v1);
  v6 = Function_224429c(v4, v5);
  if ( !v6 )
    return 0;
  if ( *(uchar *)(dword_2257740[9] + v1 + 2876) )
  {
    Function_23_224ad98(v1);
    Function_2244844(v1, *(uchar *)(dword_2257740[9] + v1 + 2876));
  }
  Function_2244830(v1, *(uchar *)(v6 + 4));
  v11 = v11 & 0x70 | v1 & 0xF;
  v10 = Function_224426c(v6);
  MI_CpuCopy8(v6, (uint)&v8, 6u, v7);
  if ( v10 >= 8u )
    Function_2028fb4(v2, v9);
  Function_2035ac4(37, (int)&v8, 8);
  *(uchar *)(dword_2257740[9] + v1 + 2876) = *(uchar *)(v6 + 4);
  Function_2243a00(v6);
  return 1;
}

//----- (022443CC) --------------------------------------------------------
int __fastcall Function_22443cc(int a1, char a2, int a3, int a4, short a5, char a6)
{
  char v6;
  int v7;
  int v8;
  short v9;
  int result;
  short v11;
  short v12;
  char v13;
  char v14;
  char v15;
  int v16;

  v16 = a4;
  v6 = a2;
  v7 = a1;
  v8 = a3;
  v9 = a4;
  if ( *(uchar *)(dword_2257740[9] + a1 + 2876) )
    Function_2244844(a1, *(uchar *)(dword_2257740[9] + a1 + 2876));
  Function_2244830(v7, v8);
  v15 = v7 & 0xF | v15 & 0xF0;
  v14 = v6;
  v15 |= 0x80u;
  v13 = v8;
  v11 = v9;
  v12 = a5;
  v15 = v15 & 0xCF | 16 * a6 & 0x3F;
  Function_2035ac4(37, (int)&v11, 8);
  result = 2876;
  *(uchar *)(dword_2257740[9] + v7 + 2876) = v8;
  return result;
}

//----- (0224444C) --------------------------------------------------------
int __fastcall Function_224444c(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( dword_2257740[9] && Function_2059094(a1) )
    result = Function_22442f0(v1);
  else
    result = 0;
  return result;
}

//----- (02244470) --------------------------------------------------------
uint __fastcall Function_2244470(int a1)
{
  return (uint)*(uchar *)(dword_2257740[9] + 8 * a1 + 2763) << 24 >> 31;
}

//----- (0224448C) --------------------------------------------------------
int __fastcall Function_224448c(int a1, int a2, int a3)
{
  int v3;
  int result;
  int v5;
  int v6;
  uint v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  short v13;

  v3 = a3;
  result = dword_2257740[9];
  if ( dword_2257740[9] )
  {
    v5 = GetOverWorldData_VariableAreaAdresses(*(uint *)(dword_2257740[9] + 64));
    v6 = Function_20298a0(v5);
    Function_2005748(0x622u);
    MI_CpuCopy8(v3, dword_2257740[9] + 2756 + (8 * *(uchar *)(v3 + 7) & 0x7F), 8u, v7);
    switch ( *(uchar *)(v3 + 4) )
    {
      case 0x18:
        *(uchar *)(dword_2257740[9] + (*(uchar *)(v3 + 7) & 0xF) + 2852) = 117;
        break;
      case 0x19:
        *(uchar *)(dword_2257740[9] + (*(uchar *)(v3 + 7) & 0xF) + 2852) = 118;
        break;
      case 0x1A:
        *(uchar *)(dword_2257740[9] + (*(uchar *)(v3 + 7) & 0xF) + 2852) = 119;
        break;
      case 0x1B:
        *(uchar *)(dword_2257740[9] + (*(uchar *)(v3 + 7) & 0xF) + 2852) = 120;
        break;
      default:
        v8 = 8 * *(uchar *)(v3 + 7) & 0x7F;
        *(uchar *)(dword_2257740[9] + 2763 + v8) |= 0x40u;
        break;
    }
    v9 = *(uchar *)(v3 + 7) & 0xF;
    if ( v9 == Function_203608c() )
      Function_22448c4(
        v9,
        *(uchar *)(v3 + 4),
        (uint)*(uchar *)(v3 + 7) << 24 >> 31,
        (uint)*(uchar *)(v3 + 7) << 26 >> 30);
    else
      Function_2248b3c(v9, *(uchar *)(v3 + 4));
    Function_224b00c(*(uchar *)(v3 + 7) & 0xF);
    if ( (*(uchar *)(v3 + 7) & 0xF) == Function_203608c() )
      Function_202970c(v6);
    v10 = *(uchar *)(v3 + 6);
    result = Function_203608c();
    if ( v10 == result )
    {
      if ( v10 != (*(uchar *)(v3 + 7) & 0xF) )
        Function_20296d4(v6);
      v11 = LoadFlagAdress(*(uint *)(*(uint *)(dword_2257740[9] + 64) + 12));
      v12 = v11;
      v13 = Function_206b42c(v11);
      Function_206b43c(v12, v13 + 1);
      Function_2243e20((ushort *)v3);
      result = Function_2243d50();
    }
  }
  return result;
}

//----- (022445E8) --------------------------------------------------------
int __fastcall Function_22445e8(int result, int a2, uchar *a3)
{
  int v3;
  int (*v4)(void);

  v3 = *a3;
  v4 = (int (*)(void))dword_2256558[v3];
  if ( v3 != *(uchar *)(dword_2257740[9] + result + 2876) )
    return Function_20389c4(1);
  if ( v4 )
    result = v4();
  return result;
}

//----- (0224461C) --------------------------------------------------------
int __fastcall Function_224461c(int a1, int a2, uchar *a3)
{
  uchar *v3;
  int v4;
  int result;
  int v6;

  v3 = a3;
  v4 = *a3;
  result = Function_203608c();
  if ( v4 != result )
  {
    v6 = v3[2];
    result = Function_2058ba8(v4, v3[1]);
  }
  return result;
}

//----- (02244638) --------------------------------------------------------
int __fastcall Function_2244638(int a1, int a2, int a3, int a4)
{
  int result;
  int v5;
  char v6;
  int v7;

  v7 = a4;
  result = 0;
  v6 = 0;
  v5 = dword_2257740[9];
  if ( dword_2257740[9] )
  {
    do
    {
      if ( *(uchar *)(v5 + 2876) )
        v6 |= 1 << result;
      ++result;
      ++v5;
    }
    while ( result < 8 );
    result = Function_2035b48(45, (int)&v6);
  }
  return result;
}

//----- (0224467C) --------------------------------------------------------
int __fastcall Function_224467c(int a1, int a2, uchar *a3)
{
  int v3;
  int result;
  int v5;

  v3 = *a3;
  result = *(uchar *)(dword_2257740[9] + 2875);
  if ( !*(uchar *)(dword_2257740[9] + 2875) )
  {
    v5 = 0;
    do
    {
      result = 1 << v5;
      if ( (1 << v5) & v3 )
        result = Function_224b00c(v5);
      ++v5;
    }
    while ( v5 < 8 );
  }
  return result;
}

//----- (022446B0) --------------------------------------------------------
int __fastcall Function_22446b0(int a1)
{
  int v1;
  int v3;
  int v4;
  int v5;
  uint v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v1 = a1;
  if ( !dword_2257740[9] )
    return 0;
  v3 = 0;
  v4 = 0;
  do
  {
    v5 = *(uchar *)(dword_2257740[9] + 2763 + v4);
    if ( (uint)(v5 << 25) >> 31 == 1 )
    {
      *(uchar *)(dword_2257740[9] + 2763 + v4) = v5 & 0xBF;
      v6 = *(uchar *)(dword_2257740[9] + v4 + 2762);
      if ( v6 < 8 )
      {
        v8 = Function_2032ee8(v6);
        v9 = Function_2032ee8(v3);
        if ( Function_224223c(v9, v8, 0x64u, v1) )
          return 1;
      }
      else
      {
        v7 = Function_2032ee8(v3);
        if ( Function_22422a8(v7, 0, 0x63u, v1) )
          return 1;
      }
    }
    if ( *(uchar *)(dword_2257740[9] + v3 + 2820) != 255 )
    {
      v10 = Function_2032ee8(v3);
      v11 = Function_2032ee8(*(uchar *)(dword_2257740[9] + v3 + 2820));
      *(uchar *)(dword_2257740[9] + v3 + 2820) = -1;
      if ( Function_224223c(v10, v11, 0x74u, v1) )
        return 1;
    }
    ++v3;
    v4 += 8;
  }
  while ( v3 < 8 );
  return 0;
}

//----- (02244784) --------------------------------------------------------
int __fastcall Function_2244784(int a1)
{
  int v1;
  int v3;
  uint v4;
  int v5;
  int v6;
  int v7;

  v1 = a1;
  if ( !dword_2257740[9] )
    return 0;
  v3 = 0;
  do
  {
    v4 = *(uchar *)(dword_2257740[9] + v3 + 2852);
    if ( *(uchar *)(dword_2257740[9] + v3 + 2852) )
    {
      *(uchar *)(dword_2257740[9] + v3 + 2852) = 0;
      v5 = Function_2032ee8(v3);
      if ( Function_22422a8(v5, 0, v4, v1) )
        return 1;
    }
    if ( *(uchar *)(dword_2257740[9] + v3 + 2860) == 1 )
    {
      *(uchar *)(dword_2257740[9] + v3 + 2860) = 0;
      v6 = Function_2032ee8(v3);
      if ( Function_22422a8(v6, 0, 0x5Au, v1) )
        return 1;
    }
    if ( *(uchar *)(dword_2257740[9] + v3 + 2844) == 1 )
    {
      v7 = Function_2032ee8(v3);
      *(uchar *)(dword_2257740[9] + v3 + 2844) = 0;
      if ( Function_22422a8(v7, 0, 0x62u, v1) )
        return 1;
    }
    ++v3;
  }
  while ( v3 < 8 );
  return 0;
}

//----- (02244830) --------------------------------------------------------
int __fastcall Function_2244830(int a1, int a2)
{
  int (*v2)(void);
  int result;

  v2 = (int (*)(void))dword_22564CC[a2];
  if ( v2 )
    result = v2();
  return result;
}

//----- (02244844) --------------------------------------------------------
int __fastcall Function_2244844(int a1, int a2)
{
  int (*v2)(void);
  int result;

  v2 = (int (*)(void))dword_22565E4[a2];
  if ( v2 )
    result = v2();
  return result;
}

//----- (02244858) --------------------------------------------------------
int __fastcall Function_2244858(int result)
{
  int v1;
  void (*v2)(void);
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = result;
  if ( *(uchar *)(dword_2257740[9] + 2875) )
  {
    v2 = (void (*)(void))dword_22566FC[*(uchar *)(dword_2257740[9] + 2875)];
    if ( v2 )
      v2();
    if ( Function_203608c() )
      Function_23_224ad98(v1);
    Function_205948c(16, v3, v4, v5);
    Function_2005748(0x609u);
    *(uint *)(dword_2257740[9] + 672) = 0;
    Function_224b040(v1);
    v6 = Function_224219c();
    Function_2254044(v6);
    result = 2875;
    *(uchar *)(dword_2257740[9] + 2875) = 0;
  }
  return result;
}

//----- (022448C4) --------------------------------------------------------
int *__fastcall Function_22448c4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int *result;
  int (__fastcall *v9)(int, int, int);

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  Function_2244858(a1);
  *(uchar *)(dword_2257740[9] + 2875) = v4;
  result = dword_2256440;
  v9 = (int (__fastcall *)(int, int, int))dword_2256440[v4];
  if ( v9 )
    result = (int *)v9(v5, v6, v7);
  return result;
}

//----- (022448FC) --------------------------------------------------------
int __fastcall Function_22448fc(int a1)
{
  int v1;
  short v2;
  short v3;
  short v4;
  short v5;

  v1 = Function_2059328(a1);
  Function_205ea84(*(uint *)(*(uint *)(dword_2257740[9] + 64) + 60), v1);
  v2 = *(ushort *)(dword_2257740[9] + 8 * Function_203608c() + 2756);
  v3 = *(ushort *)(dword_2257740[9] + 8 * Function_203608c() + 2758);
  v4 = GetWalkPositionXChange(v1);
  v5 = GetWalkPositionYChange(v1);
  return Function_2057a94(0, v2 + v4, v3 + v5);
}

//----- (0224495C) --------------------------------------------------------
BOOL __fastcall Function_224495c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v8;
  int v9;

  v2 = a1;
  v3 = a2;
  v8 = GetSpritePositionX(*(uint *)(*(uint *)(dword_2257740[9] + 64) + 60));
  v4 = GetSpritePositionY(*(uint *)(*(uint *)(dword_2257740[9] + 64) + 60));
  v9 = Function_2059328(v2);
  v5 = *(ushort *)(dword_2257740[9] + 8 * Function_203608c() + 2756);
  v6 = *(ushort *)(dword_2257740[9] + 8 * Function_203608c() + 2758);
  if ( !v3 )
  {
    v5 += GetWalkPositionXChange(v9);
    v6 += GetWalkPositionYChange(v9);
  }
  return v8 == v5 && v4 == v6;
}

//----- (022449E0) --------------------------------------------------------
int __fastcall Function_22449e0(int a1)
{
  int v1;

  v1 = a1;
  Function_224ad7c();
  return Function_2059354(v1, 30);
}

//----- (022449F4) --------------------------------------------------------
int __fastcall Function_22449f4(int a1)
{
  int v1;

  v1 = a1;
  Function_224ad7c();
  return Function_2059354(v1, 30);
}

//----- (02244A08) --------------------------------------------------------
int __fastcall Function_2244a08(int a1)
{
  int v1;

  v1 = a1;
  Function_224ad7c();
  return Function_2059378(v1);
}

//----- (02244A1C) --------------------------------------------------------
int __fastcall Function_2244a1c(int a1)
{
  return Function_224ad7c(a1, 2);
}

//----- (02244A28) --------------------------------------------------------
int __fastcall Function_2244a28(int a1)
{
  return Function_224ad7c(a1, 2);
}

//----- (02244A34) --------------------------------------------------------
int __fastcall Function_2244a34(int a1)
{
  int v1;

  v1 = a1;
  Function_224ad7c(a1, 3);
  return Function_2058b94(v1);
}

//----- (02244A48) --------------------------------------------------------
int __fastcall Function_2244a48(int a1)
{
  return Function_2058b0c(a1, 0, 0);
}

//----- (02244A54) --------------------------------------------------------
int __fastcall Function_2244a54(int a1)
{
  return Function_2058b0c(a1, 1, 0);
}

//----- (02244A60) --------------------------------------------------------
int __fastcall Function_2244a60(int a1)
{
  return Function_2058b0c(a1, 2, 0);
}

//----- (02244A6C) --------------------------------------------------------
int __fastcall Function_2244a6c(int a1)
{
  return Function_2058b0c(a1, 3, 0);
}

//----- (02244A78) --------------------------------------------------------
int __fastcall Function_2244a78(int a1)
{
  return Function_2058b0c(a1, 0, 1);
}

//----- (02244A84) --------------------------------------------------------
int __fastcall Function_2244a84(int a1)
{
  return Function_2058b0c(a1, 1, 1);
}

//----- (02244A90) --------------------------------------------------------
int __fastcall Function_2244a90(int a1)
{
  return Function_2058b0c(a1, 2, 1);
}

//----- (02244A9C) --------------------------------------------------------
int __fastcall Function_2244a9c(int a1)
{
  return Function_2058b0c(a1, 3, 1);
}

//----- (02244AA8) --------------------------------------------------------
int __fastcall Function_2244aa8(int a1)
{
  int v1;

  v1 = a1;
  Function_224ad7c(a1, 0);
  return Function_2058b7c(v1);
}

//----- (02244ABC) --------------------------------------------------------
void Function_2244abc()
{
  ;
}

//----- (02244AC0) --------------------------------------------------------
int __fastcall Function_2244ac0(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_224ad7c(a1, 1);
  result = Function_203608c();
  if ( v1 == result )
    result = Function_2245a58(1);
  return result;
}

//----- (02244ADC) --------------------------------------------------------
int __fastcall Function_2244adc(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_224ad7c(a1, 1);
  result = Function_203608c();
  if ( v1 == result )
    result = Function_2245a58(0);
  return result;
}

//----- (02244AF8) --------------------------------------------------------
int __fastcall Function_2244af8(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  Function_224ad7c(a1, 2);
  result = Function_203608c();
  if ( v4 == result )
    result = Function_2244ea4(*(uint *)(dword_2257740[9] + 64), v3, v5);
  return result;
}

//----- (02244B24) --------------------------------------------------------
int __fastcall Function_2244b24(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  Function_224ad7c(a1, 2);
  result = Function_203608c();
  if ( v4 == result )
    result = Function_22462a8(*(uint *)(dword_2257740[9] + 64), v3, v5);
  return result;
}

//----- (02244B50) --------------------------------------------------------
int __fastcall Function_2244b50(int a1)
{
  return Function_2244d80(*(uint *)(dword_2257740[9] + 64), a1);
}

//----- (02244B68) --------------------------------------------------------
int __fastcall Function_2244b68(int a1)
{
  return Function_2244d80(*(uint *)(dword_2257740[9] + 64), a1);
}

//----- (02244B80) --------------------------------------------------------
int __fastcall Function_2244b80(int a1)
{
  return Function_2244d80(*(uint *)(dword_2257740[9] + 64), a1);
}

//----- (02244B98) --------------------------------------------------------
int __fastcall Function_2244b98(int a1)
{
  return Function_2244d80(*(uint *)(dword_2257740[9] + 64), a1);
}

//----- (02244BB0) --------------------------------------------------------
int __fastcall Function_2244bb0(int a1)
{
  return Function_2244d80(*(uint *)(dword_2257740[9] + 64), a1);
}

//----- (02244BC8) --------------------------------------------------------
int __fastcall Function_2244bc8(int a1)
{
  return Function_2244d80(*(uint *)(dword_2257740[9] + 64), a1);
}

//----- (02244BE0) --------------------------------------------------------
int __fastcall Function_2244be0(int a1)
{
  return Function_2244d80(*(uint *)(dword_2257740[9] + 64), a1);
}

//----- (02244BF8) --------------------------------------------------------
int __fastcall Function_2244bf8(int a1)
{
  return Function_2244d80(*(uint *)(dword_2257740[9] + 64), a1);
}

//----- (02244C10) --------------------------------------------------------
int Function_2244c10()
{
  int v0;
  int v1;
  int v2;
  int v3;
  int v4;

  v0 = GetSpritePositionX(*(uint *)(*(uint *)(dword_2257740[9] + 64) + 60));
  v1 = GetSpritePositionY(*(uint *)(*(uint *)(dword_2257740[9] + 64) + 60));
  ((void (__fastcall *)(uint, int, uint, int))dword_21F5634[0])(*(uint *)(dword_2257740[9] + 64), v0, 0, v1);
  v2 = Function_224219c();
  Function_22541b4(v2, 0, *(uchar *)(dword_2257740[9] + 2875));
  v3 = Function_224219c();
  v4 = Function_2253f60(v3, 70);
  Function_2059464(16);
  return v4;
}

//----- (02244C70) --------------------------------------------------------
int __fastcall Function_2244c70(int *a1, int *a2, int a3, int a4)
{
  int *v4;
  int *v5;
  int result;
  int v7;
  int v8;
  int v9;
  char v10;
  int v11;

  v11 = a4;
  v4 = a2;
  v5 = a1;
  result = *a2;
  switch ( (uchar)a2 )
  {
    case 0:
      a2[1] = Function_2244c10();
      result = *v4 + 1;
      *v4 = result;
      break;
    case 1:
      Function_200aae0(1, 10, 0, 1, 1);
      result = *v4 + 1;
      *v4 = result;
      break;
    case 2:
      *a2 = ++result;
      break;
    case 3:
      Function_200aae0(1, 0, 10, 1, 1);
      result = *v4 + 1;
      *v4 = result;
      break;
    case 4:
      v7 = a2[5] + 1;
      a2[5] = v7;
      if ( v7 == 28 )
      {
        v10 = *(uchar *)(dword_2257740[9] + 2875);
        Function_20360d0(38, (int)&v10);
      }
      result = v4[5];
      if ( result > 30 )
      {
        Function_205948c(16, (int)a2, a3, a4);
        Function_200aae0(1, -4, 0, 1, 1);
        v8 = Function_224219c();
        Function_2254044(v8);
        v9 = v4[6];
        Function_2058ba8(v4[3], v4[4]);
        Function_2005748(0x65Fu);
        result = 5;
        *v4 = 5;
      }
      break;
    case 5:
      result = 6;
      *a2 = 6;
      break;
    case 7:
      Function_200ab4c(0, 1, 1);
      free((int)v4);
      Call_RemoveTaskFromTaskList(v5);
      *(uint *)(dword_2257740[9] + 652) = 0;
      *(uint *)(dword_2257740[9] + 668) = 0;
      result = Function_20057a4(1631, 0);
      break;
    default:
      return result;
  }
  return result;
}

//----- (02244D80) --------------------------------------------------------
uint *__fastcall Function_2244d80(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  uint *result;
  int v9;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v9 = a4;
  v7 = malloc2(4u, 28);
  MI_CpuFill8((ushort *)v7, 0, 0x1Cu);
  if ( *(uint *)(dword_2257740[9] + 668) )
    ErrorHandler();
  *(uint *)(dword_2257740[9] + 668) = v7;
  *(uint *)(v7 + 8) = v4;
  *(uint *)(v7 + 12) = v5;
  *(uint *)(v7 + 16) = v6;
  *(uint *)(v7 + 24) = v9;
  result = AddTaskToTaskList1((int)Function_2244c70, v7, 0x64u);
  *(uint *)(dword_2257740[9] + 652) = result;
  return result;
}

//----- (02244DE0) --------------------------------------------------------
int __fastcall Function_2244de0(int a1)
{
  int result;
  uint *v2;

  Function_2058be8(a1);
  result = 668;
  v2 = *(uint **)(dword_2257740[9] + 668);
  if ( v2 )
  {
    *v2 = 7;
    *(uint *)(dword_2257740[9] + 668) = 0;
    result = Function_20057a4(1631, 0);
  }
  return result;
}

//----- (02244E10) --------------------------------------------------------
int __fastcall Function_2244e10(int a1)
{
  int result;
  int v2;

  Function_2058be8(a1);
  result = 668;
  v2 = *(uint *)(dword_2257740[9] + 668);
  if ( v2 )
  {
    Function_200ab4c(0, 1, 1);
    free(v2);
    Call_RemoveTaskFromTaskList(*(int **)(dword_2257740[9] + 652));
    *(uint *)(dword_2257740[9] + 652) = 0;
    *(uint *)(dword_2257740[9] + 668) = 0;
    result = Function_20057a4(1631, 0);
  }
  return result;
}

//----- (02244E64) --------------------------------------------------------
void Function_2244e64()
{
  ;
}

//----- (02244E68) --------------------------------------------------------
int __fastcall Function_2244e68(int a1, int a2, int a3, int a4)
{
  int result;

  if ( *(uchar *)(dword_2257740[9] + 2886) )
    result = 0;
  else
    result = ((int (__fastcall *)(uint, int, int, int, int))dword_21F4EAC[0])(
               *(uint *)(dword_2257740[9] + 64),
               a1,
               a2,
               a3,
               a4 - 1);
  return result;
}

//----- (02244EA0) --------------------------------------------------------
void Function_2244ea0()
{
  ;
}

//----- (02244EA4) --------------------------------------------------------
uint *__fastcall Function_2244ea4(int a1, char a2, char a3)
{
  int v3;
  char v4;
  char v5;
  int v6;
  uint *result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = malloc2(4u, 32);
  MI_CpuFill8((ushort *)v6, 0, 0x20u);
  *(uint *)(dword_2257740[9] + 668) = v6;
  Function_22451bc(v6);
  *(uint *)(v6 + 16) = *(uint *)(v3 + 8);
  *(uint *)(v6 + 20) = v3;
  *(uchar *)(v6 + 25) = v4;
  *(uchar *)(v6 + 24) = v5;
  result = AddTaskToTaskList1((int)Function_22451c8, v6, 0x64u);
  *(uint *)(dword_2257740[9] + 652) = result;
  return result;
}

//----- (02244EF8) --------------------------------------------------------
int __fastcall Function_2244ef8(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int result;
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

  v5 = a1;
  v12 = a4;
  v6 = a2;
  v11 = a3;
  v17 = abs(a1 - a3);
  result = abs(v12 - v6);
  v8 = 0;
  if ( v5 >= v11 )
    v16 = -1;
  else
    v16 = 1;
  if ( v6 >= v12 )
    v15 = -1;
  else
    v15 = 1;
  if ( v17 < result )
  {
    v10 = -result;
    if ( v6 != v12 )
    {
      v14 = 2 * result;
      do
      {
        v8 += Function_22450d4(v5, v6, a5);
        v6 += v15;
        v10 += 2 * v17;
        if ( v10 >= 0 )
        {
          v10 -= v14;
          v5 += v16;
        }
        result = v12;
      }
      while ( v6 != v12 );
    }
  }
  else
  {
    v9 = -v17;
    if ( v5 != v11 )
    {
      v13 = 2 * result;
      do
      {
        v8 += Function_22450d4(v5, v6, a5);
        v5 += v16;
        v9 += v13;
        if ( v9 >= 0 )
        {
          v9 -= 2 * v17;
          v6 += v15;
        }
        result = v11;
      }
      while ( v5 != v11 );
    }
  }
  if ( v8 )
  {
    result = Function_20057d4(0x629u);
    if ( !result )
      result = Function_2005748(0x629u);
  }
  return result;
}

//----- (02244FD0) --------------------------------------------------------
int __fastcall Function_2244fd0(int a1, int a2)
{
  int result;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  result = 668;
  v3 = *(uint *)(dword_2257740[9] + 668);
  if ( v3 )
  {
    if ( *(uchar *)(v3 + 25) && a2 )
      Function_22448fc(*(uchar *)(v3 + 24));
    REG_BLDCNT = 0;
    Function_200ab4c(0, 1, 1);
    v4 = Function_2019fe4(*(uint *)(*(uint *)(dword_2257740[9] + 64) + 8), 2);
    v5 = 0;
    do
    {
      *(uchar *)(v4 + v5) = 0;
      v5 += 2;
    }
    while ( v5 < 2048 );
    Function_2019060(2u, 3);
    Function_201ff0c(4u, 0);
    Function_205948c(16, v6, v7, v8);
    Call_RemoveTaskFromTaskList(*(int **)(dword_2257740[9] + 652));
    free(v3);
    *(uint *)(dword_2257740[9] + 652) = 0;
    result = 668;
    *(uint *)(dword_2257740[9] + 668) = 0;
  }
  return result;
}

//----- (02245064) --------------------------------------------------------
BOOL __fastcall Function_2245064(ushort *a1, int a2, int a3)
{
  ushort *v3;
  int v4;
  int v5;
  int v6;
  int v8;
  int v9;
  int v10;
  uint *v11;

  v3 = a1;
  v11 = (uint *)a2;
  v4 = a3;
  v5 = 0;
  v6 = Function_2019fe4(a2, 2);
  if ( !v6 )
    return 0;
  v8 = *(ushort *)(v4 + 8);
  if ( v8 != 0xFFFF )
  {
    v9 = *(ushort *)(v4 + 10);
    if ( v9 != 0xFFFF )
    {
      Function_2244ef8(*v3, v3[1], v8, v9, v6);
      Function_2019448(v11, 2u);
    }
  }
  v10 = 0;
  *(ushort *)(v4 + 8) = *v3;
  *(ushort *)(v4 + 10) = v3[1];
  do
  {
    if ( *(uchar *)(v6 + v10) )
      ++v5;
    v10 += 2;
  }
  while ( v10 < 2048 );
  return v5 < 13;
}

//----- (022450D4) --------------------------------------------------------
int __fastcall Function_22450d4(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  char *v6;
  int v7;
  int v8;
  int v9;
  uint v11;
  char *v12;
  int v13;
  int v14;
  int v15;
  char v16;
  int v17;
  uint v18;
  int v19;
  char v20;
  int v21;

  v21 = a4;
  v4 = a3;
  v5 = dword_225641C;
  v18 = 2 * (a1 / 8 + 32 * (a2 / 8)) & 0xFFFF;
  v6 = &v20;
  v7 = 4;
  do
  {
    v8 = *v5;
    v9 = v5[1];
    v5 += 2;
    *(uint *)v6 = v8;
    *((uint *)v6 + 1) = v9;
    v6 += 8;
    --v7;
  }
  while ( v7 );
  *(uint *)v6 = *v5;
  v19 = 0;
  if ( v18 > 0x800 )
    return 0;
  v11 = 0;
  v12 = &v20;
  v17 = (v18 >> 31) + __ROR4__((v18 << 26) - (v18 >> 31), 26);
  do
  {
    v13 = v18 + *(uint *)v12;
    if ( v17 != 62 || (s32_div_f(v11, 3), v14 != 2) )
    {
      if ( v17 || (s32_div_f(v11, 3), v15) )
      {
        if ( v13 < 2048 && v13 >= 0 )
        {
          v16 = *(uchar *)(v4 + v13);
          if ( *(uchar *)(v4 + v13) )
          {
            v19 = 1;
            switch ( 1 )
            {
              case 1:
              case 3:
              case 5:
              case 7:
                *(uchar *)(v4 + v13) = v16 + 2;
                break;
              case 4:
                *(uchar *)(v4 + v13) = v16 + 3;
                break;
              default:
                *(uchar *)(v4 + v13) = v16 + 1;
                break;
            }
            if ( *(uchar *)(v4 + v13) > 5u )
              *(uchar *)(v4 + v13) = 0;
          }
        }
      }
    }
    ++v11;
    v12 += 4;
  }
  while ( v11 < 9 );
  return v19;
}

//----- (022451BC) --------------------------------------------------------
int __fastcall Function_22451bc(int result)
{
  *(ushort *)(result + 8) = -1;
  *(ushort *)(result + 10) = -1;
  return result;
}

//----- (022451C8) --------------------------------------------------------
int __fastcall Function_22451c8(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  uint v6;
  int v7;
  int v8;
  int v9;
  int v10;
  short v11;
  short v12;
  short v13;
  short v14;
  short v15;
  short v16;
  int v17;

  v17 = a4;
  v4 = a2;
  result = *(uint *)a2;
  if ( *(uint *)a2 <= 0xCu )
    JUMPOUT(__CS__, *((short *)&off_22451E2 + result) + 35934692);
  switch ( (uchar)result )
  {
    case 0:
      Function_201ff0c(4u, 0);
      *(uint *)(v4 + 4) = Function_2244c10();
      result = *(uint *)v4 + 1;
      *(uint *)v4 = result;
      break;
    case 1:
      Function_200aae0(1, 10, 0, 1, 1);
      LoadFromNARC_RGCN(50, 9, *(uint **)(v4 + 16), 2u, 0, 288, 0, 4);
      result = *(uint *)v4 + 1;
      *(uint *)v4 = result;
      break;
    case 2:
      Call_LoadFromNARC_RLCN(50, 10, 0, 0, 32, 4);
      result = *(uint *)v4 + 1;
      *(uint *)v4 = result;
      break;
    case 3:
      Function_200aae0(1, 0, 10, 1, 1);
      if ( *(uchar *)(dword_2257740[9] + 2875) == 19 )
      {
        LoadFromNARC_RCSN(50, 8, *(uint **)(v4 + 16), 2u, 0, 1536, 0, 4);
      }
      else
      {
        v13 = 11;
        v14 = 12;
        v15 = 13;
        v16 = 14;
        v6 = PRNG();
        LoadFromNARC_RCSN(
          50,
          *(ushort *)((char *)&v13 + (2 * ((v6 >> 31) + __ROR4__((v6 << 30) - (v6 >> 31), 30)) & 0x1FFFF)),
          *(uint **)(v4 + 16),
          2u,
          0,
          1536,
          0,
          4);
      }
      Function_2019060(0, 3);
      Function_2019060(1u, 2);
      Function_2019060(2u, 1);
      Function_2019060(3u, 0);
      result = *(uint *)v4 + 1;
      *(uint *)v4 = result;
      break;
    case 4:
    case 5:
    case 6:
      result = *(uint *)(a2 + 12) + 1;
      *(uint *)(a2 + 12) = result;
      if ( result > 30 )
      {
        Function_200aae0(1, -4, 0, 1, 1);
        Function_201ff0c(4u, 1);
        *(uint *)v4 = 7;
        v7 = Function_224219c();
        Function_2253f60(v7, 77);
        *(uint *)(v4 + 28) = 0;
        result = Function_2005748(0x661u);
      }
      break;
    case 7:
      if ( word_21BF6DE )
      {
        v11 = word_21BF6D8;
        v12 = word_21BF6DA;
        if ( Function_2245064((ushort *)&v11, *(uint *)(a2 + 16), a2) )
        {
          if ( *(uchar *)(v4 + 25) )
          {
            *(uint *)v4 = 11;
          }
          else
          {
            Function_20360dc(41);
            *(uint *)v4 = 8;
          }
        }
      }
      else
      {
        Function_22451bc(a2);
      }
      result = *(uint *)(v4 + 28);
      if ( result < 60 )
      {
        *(uint *)(v4 + 28) = ++result;
        if ( result == 60 )
        {
          v8 = Function_224219c();
          result = Function_2254044(v8);
        }
      }
      break;
    case 8:
      v9 = Function_224219c();
      result = Function_2254044(v9);
      break;
    case 9:
      v10 = Function_203608c();
      result = Function_2244fd0(v10, *(uchar *)(v4 + 25));
      break;
    case 0xB:
      *(uchar *)(a2 + 25) = 0;
      Function_205948c(16, a2, a3, a4);
      Function_22448fc(*(uchar *)(v4 + 24));
      *(uint *)(v4 + 12) = 0;
      result = 12;
      *(uint *)v4 = 12;
      break;
    case 0xC:
      result = *(uint *)(a2 + 12) + 1;
      *(uint *)(a2 + 12) = result;
      if ( result > 8 )
      {
        Function_20360dc(41);
        result = 8;
        *(uint *)v4 = 8;
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (02245408) --------------------------------------------------------
int Function_2245408()
{
  return 4;
}

//----- (0224540C) --------------------------------------------------------
int __fastcall Function_224540c(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  char v6;
  char v7;
  char v8;
  char v9;
  int v10;

  v10 = a4;
  v4 = a1;
  if ( Function_224acc0(a1) )
  {
    Function_23_224ad98(v4);
    Function_2244844(v4, *(uchar *)(dword_2257740[9] + v4 + 2876));
    v9 = Function_224d87c(v4);
    v6 = *(uchar *)(dword_2257740[9] + v4 + 2876);
    v7 = v4;
    v8 = 1;
    Function_2035b48(42, (int)&v6);
  }
  result = 2876;
  *(uchar *)(dword_2257740[9] + v4 + 2876) = 0;
  return result;
}

//----- (0224546C) --------------------------------------------------------
int __fastcall Function_224546c(int a1)
{
  int v1;

  v1 = a1;
  Function_23_224ad98(a1);
  if ( *(uchar *)(dword_2257740[9] + v1 + 2876) )
    Function_2244844(v1, *(uchar *)(dword_2257740[9] + v1 + 2876));
  *(uchar *)(dword_2257740[9] + v1 + 2876) = 0;
  *(uchar *)(dword_2257740[9] + 2763 + 8 * v1) &= 0x7Fu;
  return Function_224d87c(v1);
}

//----- (022454B4) --------------------------------------------------------
int __fastcall Function_22454b4(int a1, int a2, uchar *a3)
{
  uchar *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  void (__fastcall *v8)(int, uint);
  int result;

  v3 = a3;
  v4 = *a3;
  v5 = a3[1];
  if ( a3[2] )
    Function_224b024(v5);
  else
    Function_224b040(v5);
  Function_2248b98(v3[1]);
  v6 = v3[1];
  v7 = Function_203608c();
  if ( v6 == v7 )
  {
    v8 = (void (__fastcall *)(int, uint))dword_2256670[v4];
    if ( v8 )
      v8(v6, v3[3]);
    LOBYTE(v7) = 59;
    *(uchar *)(dword_2257740[9] + 2875) = 0;
  }
  switch ( (uchar)v7 )
  {
    case 0:
    case 1:
    case 2:
    case 3:
      break;
    default:
      *(uchar *)(dword_2257740[9] + v3[1] + 2844) = 1;
      break;
  }
  result = Function_203608c();
  if ( result )
    result = Function_23_224ad98(v3[1]);
  return result;
}

//----- (02245540) --------------------------------------------------------
uint __fastcall Function_2245540(int a1, int a2, uchar *a3)
{
  uint result;

  result = *(uchar *)(dword_2257740[9] + 2875) - 11;
  if ( result <= 1 )
    result = Function_2245b78(*a3);
  return result;
}

//----- (02245560) --------------------------------------------------------
int __fastcall Function_2245560(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v7;

  v7 = a4;
  v4 = a2;
  v5 = a1;
  Function_23_224ad98(a2);
  Function_2244844(v4, *(uchar *)(dword_2257740[9] + v4 + 2876));
  BYTE1(v7) = v4;
  LOBYTE(v7) = v5;
  BYTE2(v7) = *(uchar *)(dword_2257740[9] + v4 + 2876);
  Function_2035b48(44, (int)&v7);
  *(uchar *)(dword_2257740[9] + v4 + 2876) = 0;
  return Function_2059058(v5, 0);
}

//----- (022455B4) --------------------------------------------------------
int __fastcall Function_22455b4(int a1, int a2, uchar *a3)
{
  uchar *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  void (__fastcall *v11)(int, uint);
  int v12;
  int result;

  v3 = a3;
  v4 = GetOverWorldData_VariableAreaAdresses(*(uint *)(dword_2257740[9] + 64));
  v5 = Function_20298a0(v4);
  Function_224b024(v3[1]);
  if ( *v3 == Function_203608c() )
  {
    Function_2029744(v5);
    v6 = LoadVariableAreaAdress_14(*(uint *)(*(uint *)(dword_2257740[9] + 64) + 12));
    Function_202cfec(v6, 34);
    Function_20594fc();
    v7 = Function_224219c();
    v8 = Function_2032ee8(v3[1]);
    Function_2254068(v7, v8);
    v9 = Function_224219c();
    Function_2253f40(v9, 71);
  }
  Function_2248b98(v3[1]);
  v10 = v3[1];
  if ( v10 == Function_203608c() && *(uchar *)(dword_2257740[9] + 2875) )
  {
    v11 = (void (__fastcall *)(int, uint))dword_22566FC[*(uchar *)(dword_2257740[9] + 2875)];
    if ( v11 )
      v11(v10, 0);
    *(uint *)(dword_2257740[9] + 672) = 0;
    *(uchar *)(dword_2257740[9] + 2875) = 0;
    Function_205948c(16, dword_2257740[9], dword_2257740[9], 0);
    v12 = Function_224219c();
    Function_2254044(v12);
  }
  if ( Function_203608c() )
    Function_23_224ad98(v3[1]);
  result = 2820;
  *(uchar *)(dword_2257740[9] + *v3 + 2820) = v3[1];
  return result;
}

//----- (02245694) --------------------------------------------------------
int Function_2245694()
{
  return 3;
}

//----- (02245698) --------------------------------------------------------
int __fastcall Function_2245698(int a1)
{
  int v1;
  int v2;

  if ( !dword_2257740[9] )
    return 0;
  v1 = *(uint *)(dword_2257740[9] + 664);
  if ( !v1 )
    return 0;
  s32_div_f(((uint)*(ushort *)(v1 + 482) >> 1) + a1, 80);
  return *(ushort *)(v1 + 6 * v2);
}

//----- (022456CC) --------------------------------------------------------
int __fastcall Function_22456cc(int a1)
{
  int v1;
  int v2;

  if ( !dword_2257740[9] )
    return 0;
  v1 = *(uint *)(dword_2257740[9] + 664);
  if ( !v1 )
    return 0;
  s32_div_f(((uint)*(ushort *)(v1 + 482) >> 1) + a1, 80);
  return *(ushort *)(v1 + 6 * v2 + 2);
}

//----- (02245700) --------------------------------------------------------
uint __fastcall Function_2245700(int a1, int a2)
{
  int v2;
  uint result;

  v2 = a2;
  result = (ushort)++*(ushort *)(a2 + 482);
  if ( result > 0xA0 )
  {
    Function_2005748(0x54Au);
    result = 482;
    *(ushort *)(v2 + 482) = 0;
  }
  return result;
}

//----- (02245728) --------------------------------------------------------
uint *Function_2245728()
{
  uint *result;
  ushort *v1;

  result = *(uint **)(dword_2257740[9] + 664);
  if ( !result )
  {
    result = *(uint **)(dword_2257740[9] + 660);
    if ( !result )
    {
      v1 = (ushort *)malloc2(4u, 484);
      MI_CpuFill8(v1, 0, 0x1E4u);
      Function_20360dc(46);
      *(uint *)(dword_2257740[9] + 664) = v1;
      result = AddTaskToTaskList1((int)Function_2245700, (int)v1, 0x64u);
      *(uint *)(dword_2257740[9] + 660) = result;
    }
  }
  return result;
}

//----- (02245784) --------------------------------------------------------
int Function_2245784()
{
  int result;

  result = *(uint *)(dword_2257740[9] + 660);
  if ( result )
  {
    Function_200ab4c(0, 1, 1);
    REG_BLDCNT = 0;
    GXx_SetMasterBrightness_(&REG_MASTER_BRIGHT, 0);
    Call_RemoveTaskFromTaskList(*(int **)(dword_2257740[9] + 660));
    free(*(uint *)(dword_2257740[9] + 664));
    *(uint *)(dword_2257740[9] + 660) = 0;
    result = 664;
    *(uint *)(dword_2257740[9] + 664) = 0;
  }
  return result;
}

//----- (022457E4) --------------------------------------------------------
int __fastcall Function_22457e4(int a1)
{
  int v1;
  int result;

  v1 = dword_2257740[9] + 2 * a1;
  result = 2828;
  *(ushort *)(v1 + 2828) = 1;
  return result;
}

//----- (022457FC) --------------------------------------------------------
int Function_22457fc()
{
  int v0;
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int result;
  int v7;
  short v8;
  short v9;
  char v10;

  v0 = 0;
  v7 = 0;
  do
  {
    v1 = dword_2257740[9];
    v2 = *(ushort *)(dword_2257740[9] + v0 + 2828) - 1;
    if ( *(ushort *)(dword_2257740[9] + v0 + 2828) )
    {
      v3 = 4 * v2;
      while ( 1 )
      {
        v4 = *(uint *)(v1 + v3 + 1988);
        if ( v4 )
        {
          if ( *(uchar *)(v4 + 4) )
          {
            v5 = Function_224426c(*(uint *)(v1 + v3 + 1988));
            if ( v5 == v7 || v5 >= 8 )
            {
              v8 = *(ushort *)v4;
              v9 = *(ushort *)(v4 + 2);
              v10 = v7;
              Function_2035b48(47, (int)&v8);
              *(ushort *)(dword_2257740[9] + v0 + 2828) = v2 + 2;
              goto LABEL_12;
            }
          }
        }
        ++v2;
        v3 += 4;
        if ( v2 >= 192 )
          break;
        v1 = dword_2257740[9];
        if ( v2 == *(ushort *)(v0 + dword_2257740[9] + 2828) - 1 )
          goto LABEL_12;
      }
      *(ushort *)(dword_2257740[9] + v0 + 2828) = 0;
    }
LABEL_12:
    v0 += 2;
    result = v7 + 1;
    v7 = result;
  }
  while ( result < 8 );
  return result;
}

//----- (0224589C) --------------------------------------------------------
uint __fastcall Function_224589c(int a1, int a2, int a3)
{
  int v3;
  uint result;
  int v5;

  v3 = a3;
  result = *(uint *)(dword_2257740[9] + 664);
  if ( result )
  {
    result = Function_203608c();
    if ( *(uchar *)(v3 + 4) == result )
    {
      MI_CpuCopy8(
        v3,
        *(uint *)(dword_2257740[9] + 664) + 6 * *(uchar *)(*(uint *)(dword_2257740[9] + 664) + 480),
        6u,
        6 * *(uchar *)(*(uint *)(dword_2257740[9] + 664) + 480));
      ++*(uchar *)(*(uint *)(dword_2257740[9] + 664) + 480);
      v5 = *(uint *)(dword_2257740[9] + 664);
      result = *(uchar *)(v5 + 480);
      if ( result >= 0x50 )
      {
        result = 0;
        *(uchar *)(v5 + 480) = 0;
      }
    }
  }
  return result;
}

//----- (02245908) --------------------------------------------------------
int Function_2245908()
{
  return 6;
}

//----- (0224590C) --------------------------------------------------------
int __fastcall Function_224590c(int a1)
{
  int v1;
  int result;
  uint *v3;

  v1 = a1;
  result = Function_203608c();
  if ( v1 == result )
  {
    result = 668;
    v3 = *(uint **)(dword_2257740[9] + 668);
    if ( v3 )
    {
      *v3 = 2;
      *(uint *)(dword_2257740[9] + 668) = 0;
    }
  }
  return result;
}

//----- (02245938) --------------------------------------------------------
int Function_2245938()
{
  int result;

  result = *(uint *)(dword_2257740[9] + 668);
  if ( result )
  {
    Function_200ab4c(0, 1, 1);
    REG_BLDCNT = 0;
    GXx_SetMasterBrightness_(&REG_MASTER_BRIGHT, 0);
    Function_203568c();
    Call_RemoveTaskFromTaskList(*(int **)(dword_2257740[9] + 652));
    free(*(uint *)(dword_2257740[9] + 668));
    *(uint *)(dword_2257740[9] + 652) = 0;
    result = 668;
    *(uint *)(dword_2257740[9] + 668) = 0;
  }
  return result;
}

//----- (0224599C) --------------------------------------------------------
int __fastcall Function_224599c(int *a1, uint *a2)
{
  uint *v2;
  int *v3;
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v2 = a2;
  v3 = a1;
  result = *a2;
  if ( *a2 )
  {
    if ( result != 1 && result == 2 )
    {
      Function_200ab4c(0, 1, 1);
      REG_BLDCNT = 0;
      GXx_SetMasterBrightness_(&REG_MASTER_BRIGHT, 0);
      Function_203568c();
      free((int)v2);
      Call_RemoveTaskFromTaskList(v3);
      *(uint *)(dword_2257740[9] + 652) = 0;
      result = 668;
      *(uint *)(dword_2257740[9] + 668) = 0;
    }
  }
  else
  {
    v5 = a2[4] + 1;
    a2[4] = v5;
    switch ( v5 )
    {
      case 1:
        a2[1] = Function_2244c10();
        break;
      case 2:
        Function_200aae0(1, 10, 0, 1, 1);
        break;
      case 4:
        Function_200aae0(1, 0, 10, 1, 1);
        break;
    }
    result = v2[4];
    if ( result > 30 )
    {
      v6 = Function_224219c();
      Function_2254044(v6);
      *v2 = 1;
      if ( v2[2] )
        Function_2035678();
      else
        Function_2035664();
      result = Function_205948c(16, v7, v8, v9);
    }
  }
  return result;
}

//----- (02245A58) --------------------------------------------------------
int __fastcall Function_2245a58(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = malloc2(4u, 20);
  MI_CpuFill8((ushort *)v2, 0, 0x14u);
  *(uint *)v2 = 0;
  *(uint *)(v2 + 8) = v1;
  *(uint *)(v2 + 16) = 0;
  *(uint *)(dword_2257740[9] + 668) = v2;
  *(uint *)(dword_2257740[9] + 652) = AddTaskToTaskList1((int)Function_224599c, v2, 0x64u);
  return Function_2059464(16);
}

//----- (02245AA4) --------------------------------------------------------
int __fastcall Function_2245aa4(int a1)
{
  int v1;
  int result;
  int v3;

  v1 = a1;
  result = Function_203608c();
  if ( v1 == result )
  {
    result = 668;
    v3 = *(uint *)(dword_2257740[9] + 668);
    if ( v3 )
    {
      Function_205ed0c(*(uint *)(*(uint *)(dword_2257740[9] + 64) + 60), 0);
      Call_RemoveTaskFromTaskList(*(int **)(dword_2257740[9] + 652));
      free(v3);
      *(uint *)(dword_2257740[9] + 652) = 0;
      result = 668;
      *(uint *)(dword_2257740[9] + 668) = 0;
    }
  }
  return result;
}

//----- (02245AF4) --------------------------------------------------------
int __fastcall Function_2245af4(int a1, int a2)
{
  int v2;
  int result;
  int v4;
  int *v5;

  v2 = a2;
  result = 668;
  v4 = *(uint *)(dword_2257740[9] + 668);
  if ( v4 )
  {
    v5 = *(int **)(v4 + 20);
    if ( v5 )
    {
      Function_207136c(v5);
      *(uint *)(v4 + 20) = 0;
    }
    if ( *(uchar *)(v4 + 13) )
    {
      if ( v2 )
        Function_22448fc(*(uchar *)(v4 + 12));
    }
    Function_200ab4c(0, 1, 1);
    REG_BLDCNT = 0;
    GXx_SetMasterBrightness_(&REG_MASTER_BRIGHT, 0);
    Function_205ed0c(*(uint *)(*(uint *)(dword_2257740[9] + 64) + 60), 0);
    Call_RemoveTaskFromTaskList(*(int **)(dword_2257740[9] + 652));
    free(v4);
    *(uint *)(dword_2257740[9] + 652) = 0;
    result = 668;
    *(uint *)(dword_2257740[9] + 668) = 0;
  }
  return result;
}

//----- (02245B78) --------------------------------------------------------
int __fastcall Function_2245b78(int a1)
{
  int v1;
  int result;
  uint *v3;

  v1 = a1;
  result = Function_203608c();
  if ( v1 == result )
  {
    result = 668;
    v3 = *(uint **)(dword_2257740[9] + 668);
    if ( v3 )
    {
      *v3 = 14;
      result = Function_2005748(0x60Bu);
    }
  }
  return result;
}

//----- (02245BA8) --------------------------------------------------------
int __fastcall Function_2245ba8(int *a1, int a2)
{
  char *v2;
  int v3;
  int *v4;
  char *v5;
  int v6;
  char v7;
  int result;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int *v15;
  char v16[28];

  v2 = &byte_22563F4;
  v3 = a2;
  v4 = a1;
  v5 = v16;
  v6 = 15;
  do
  {
    v7 = *v2++;
    *v5++ = v7;
    --v6;
  }
  while ( v6 );
  result = *(uint *)v3;
  switch ( 0 )
  {
    case 0:
      *(uint *)(v3 + 4) = Function_2244c10();
      *(uint *)(v3 + 28) = 0;
      result = *(uint *)v3 + 1;
      *(uint *)v3 = result;
      break;
    case 1:
      Function_200aae0(1, 10, 0, 1, 1);
      result = *(uint *)v3 + 1;
      *(uint *)v3 = result;
      break;
    case 2:
      *(uint *)v3 = ++result;
      break;
    case 3:
      Function_200aae0(1, 0, 10, 1, 1);
      result = *(uint *)v3 + 1;
      *(uint *)v3 = result;
      break;
    case 4:
      v9 = *(uint *)(v3 + 28) + 1;
      *(uint *)(v3 + 28) = v9;
      if ( v9 <= 60 )
      {
        result = Function_224495c(*(uchar *)(v3 + 12), 1);
        if ( result )
        {
          ++*(uint *)v3;
          result = 0;
          *(uint *)(v3 + 28) = 0;
        }
      }
      else
      {
        ++*(uint *)v3;
        result = 0;
        *(uint *)(v3 + 28) = 0;
      }
      break;
    case 5:
    case 6:
      result = *(uint *)(v3 + 28) + 1;
      *(uint *)(v3 + 28) = result;
      if ( result > 30 )
      {
        Function_205948c(16, 0, (int)v5, (int)v2);
        v10 = Function_224219c();
        Function_2254044(v10);
        *(uint *)v3 = 7;
        v11 = GetSpritePositionX(*(uint *)(*(uint *)(dword_2257740[9] + 64) + 60));
        v12 = GetSpritePositionY(*(uint *)(*(uint *)(dword_2257740[9] + 64) + 60));
        if ( *(uint *)(v3 + 8) )
        {
          *(uint *)(v3 + 20) = ((int (__fastcall *)(uint, int, int, int, int))dword_21F4EAC[0])(
                                   *(uint *)(dword_2257740[9] + 64),
                                   v11,
                                   v12,
                                   3,
                                   32);
          result = Function_205ed0c(*(uint *)(*(uint *)(dword_2257740[9] + 64) + 60), -12288);
        }
        else
        {
          *(uint *)(v3 + 20) = ((int (__fastcall *)(uint, int, int, int, int))dword_21F4EAC[0])(
                                   *(uint *)(dword_2257740[9] + 64),
                                   v11,
                                   v12,
                                   2,
                                   32);
          result = Function_205ed0c(*(uint *)(*(uint *)(dword_2257740[9] + 64) + 60), -8192);
        }
      }
      break;
    case 7:
      v13 = GetSpriteFaceDirection(*(uint *)(*(uint *)(dword_2257740[9] + 64) + 60));
      if ( *(uint *)(v3 + 24) != v13 )
        Function_2005748(0x5EBu);
      *(uint *)(v3 + 24) = v13;
      result = 0;
      *(uint *)(v3 + 16) = 0;
      break;
    case 8:
    case 10:
    case 13:
      return result;
    case 9:
      Function_205ed0c(*(uint *)(*(uint *)(dword_2257740[9] + 64) + 60), 0);
      free(v3);
      Call_RemoveTaskFromTaskList(v4);
      *(uint *)(dword_2257740[9] + 652) = 0;
      result = 668;
      *(uint *)(dword_2257740[9] + 668) = 0;
      break;
    case 11:
      *(uchar *)(v3 + 13) = 0;
      Function_205948c(16, 0, (int)v5, (int)v2);
      Function_22448fc(*(uchar *)(v3 + 12));
      *(uint *)(v3 + 28) = 0;
      result = 12;
      *(uint *)v3 = 12;
      break;
    case 12:
      ++*(uint *)(v3 + 28);
      if ( Function_224495c(*(uchar *)(v3 + 12), 0) || (result = *(uint *)(v3 + 28), result > 60) )
      {
        Function_20360dc(41);
        result = 8;
        *(uint *)v3 = 8;
      }
      break;
    case 14:
      v14 = v16[*(uint *)(v3 + 16)];
      result = -10;
      if ( v14 != -10 )
      {
        Function_205ed0c(*(uint *)(*(uint *)(dword_2257740[9] + 64) + 60), v14 << 12);
        result = *(uint *)(v3 + 16) + 1;
        *(uint *)(v3 + 16) = result;
        if ( result == 5 )
        {
          v15 = *(int **)(v3 + 20);
          if ( v15 )
          {
            Function_207136c(v15);
            *(uint *)(v3 + 20) = 0;
          }
          if ( *(uchar *)(v3 + 13) )
          {
            result = 11;
            *(uint *)v3 = 11;
          }
          else
          {
            Function_20360dc(41);
            result = 9;
            *(uint *)v3 = 9;
          }
        }
      }
      break;
  }
  return result;
}

//----- (02245DF8) --------------------------------------------------------
uint *__fastcall Function_2245df8(int a1, char a2, char a3)
{
  int v3;
  char v4;
  char v5;
  int v6;
  uint *result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = malloc(4u, 36);
  MI_CpuFill8((ushort *)v6, 0, 0x24u);
  *(uint *)v6 = 0;
  *(uint *)(v6 + 8) = v3;
  *(uint *)(v6 + 16) = 0;
  *(uchar *)(v6 + 13) = v4;
  *(uint *)(v6 + 24) = GetSpriteFaceDirection(*(uint *)(*(uint *)(dword_2257740[9] + 64) + 60));
  *(uchar *)(v6 + 12) = v5;
  *(uint *)(dword_2257740[9] + 668) = v6;
  result = AddTaskToTaskList1((int)Function_2245ba8, v6, 0x64u);
  *(uint *)(dword_2257740[9] + 652) = result;
  return result;
}

//----- (02245E54) --------------------------------------------------------
uint *__fastcall Function_2245e54(uint *a1, char a2, char a3)
{
  char v3;
  uint *v4;
  char v5;
  uint *result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  Function_224ad7c(a1, 4);
  result = (uint *)Function_203608c();
  if ( v4 == result )
    result = Function_2245df8(0, v3, v5);
  return result;
}

//----- (02245E78) --------------------------------------------------------
uint *__fastcall Function_2245e78(uint *a1, char a2, char a3)
{
  char v3;
  uint *v4;
  char v5;
  uint *result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  Function_224ad7c(a1, 4);
  result = (uint *)Function_203608c();
  if ( v4 == result )
    result = Function_2245df8(1, v3, v5);
  return result;
}

//----- (02245E9C) --------------------------------------------------------
int __fastcall Function_2245e9c(int a1)
{
  int v1;

  v1 = a1;
  Function_23_224ad98(a1);
  return Function_20593b4(v1);
}

//----- (02245EAC) --------------------------------------------------------
int __fastcall Function_2245eac(int a1)
{
  int v1;

  v1 = a1;
  Function_224ad7c(a1, 4);
  return Function_2059390(v1, 10);
}

//----- (02245EC0) --------------------------------------------------------
int __fastcall Function_2245ec0(int a1)
{
  int v1;

  v1 = a1;
  Function_224ad7c(a1, 4);
  return Function_2059390(v1, 20);
}

//----- (02245ED4) --------------------------------------------------------
int __fastcall Function_2245ed4(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  long long v9;
  long long v10;
  long long v11;
  long long v12;
  long long v13;
  long long v14;

  v4 = a1;
  Function_20361bc(&v12, a2, a3, a4);
  result = *(uchar *)(v4 + 276);
  v6 = 0;
  if ( result > 0 )
  {
    v7 = v4;
    v8 = v4;
    do
    {
      v9 = ll_mul(v13, v12);
      v12 = v14 + v9;
      *(ushort *)(v7 + 72) = (uint)((ull)(v14 + v9) >> 32) >> 24;
      v10 = ll_mul(v13, v12);
      v12 = v14 + v10;
      *(ushort *)(v7 + 74) = (ull)ll_mul((ull)(v14 + v10) >> 32, 192LL) >> 32;
      v11 = ll_mul(v13, v12);
      v12 = v14 + v11;
      *(ushort *)(v8 + 8) = (ull)ll_mul((ull)(v14 + v11) >> 32, 0xFFFFLL) >> 32;
      result = *(uchar *)(v4 + 276);
      ++v6;
      v7 += 4;
      v8 += 2;
    }
    while ( v6 < result );
  }
  return result;
}

//----- (02245F94) --------------------------------------------------------
uint __fastcall Function_2245f94(int a1, int a2, int a3, int a4)
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

  v4 = a2;
  result = *(uint *)a2;
  if ( *(uint *)a2 <= 0xCu )
    JUMPOUT(__CS__, *((short *)&off_2245FAE + result) + 35938224);
  switch ( (uchar)result )
  {
    case 0:
      *(uint *)(a2 + 4) = Function_2244c10();
      *(uchar *)(v4 + 273) = 0;
      Function_2246324();
      result = *(uint *)v4 + 1;
      *(uint *)v4 = result;
      break;
    case 1:
      Function_200aae0(1, 10, 0, 1, 1);
      if ( *(uchar *)(dword_2257740[9] + 2875) == 29 )
        v6 = 2;
      else
        v6 = 28;
      *(uint *)(dword_2257740[9] + 400) = Function_200985c(*(uint *)(dword_2257740[9] + 368), 50, v6, 0, 0, 1, 4);
      result = *(uint *)v4 + 1;
      *(uint *)v4 = result;
      break;
    case 2:
      if ( *(uchar *)(dword_2257740[9] + 2875) == 29 )
        v7 = 3;
      else
        v7 = 29;
      *(uint *)(dword_2257740[9] + 404) = Function_20098b8(*(uint *)(dword_2257740[9] + 372), 50, v7, 0, 0, 1, 7, 4);
      result = *(uint *)v4 + 1;
      *(uint *)v4 = result;
      break;
    case 3:
      Function_200aae0(1, 0, 10, 1, 1);
      if ( *(uchar *)(dword_2257740[9] + 2875) == 29 )
        v8 = 1;
      else
        v8 = 27;
      *(uint *)(dword_2257740[9] + 408) = Function_2009918(*(uint *)(dword_2257740[9] + 376), 50, v8, 0, 0, 2u, 4);
      result = *(uint *)v4 + 1;
      *(uint *)v4 = result;
      break;
    case 4:
      if ( *(uchar *)(dword_2257740[9] + 2875) == 29 )
        v9 = 0;
      else
        v9 = 26;
      *(uint *)(dword_2257740[9] + 412) = Function_2009918(*(uint *)(dword_2257740[9] + 380), 50, v9, 0, 0, 3u, 4);
      result = *(uint *)v4 + 1;
      *(uint *)v4 = result;
      break;
    case 5:
      Function_200a450(*(int **)(dword_2257740[9] + 400));
      Function_200a640(*(int **)(dword_2257740[9] + 404));
      Function_224644c(*(uchar *)(v4 + 276));
      Function_2245ed4(v4, v10, v11, v12);
      result = *(uint *)v4 + 1;
      *(uint *)v4 = result;
      break;
    case 6:
      result = (uchar)++*(uchar *)(a2 + 273);
      if ( result > 0x1E )
      {
        Function_200aae0(1, -4, 0, 1, 1);
        v13 = Function_224219c();
        Function_2253f60(v13, 76);
        *(uint *)v4 = 7;
        result = 280;
        *(uint *)(v4 + 280) = 0;
      }
      break;
    case 7:
      if ( Function_2246640(*(uint *)(*(uint *)(dword_2257740[9] + 64) + 8)) )
      {
        if ( *(uchar *)(v4 + 275) )
        {
          *(uint *)v4 = 11;
        }
        else
        {
          Function_20360dc(41);
          *(uint *)v4 = 8;
        }
      }
      result = 280;
      v14 = *(uint *)(v4 + 280);
      if ( v14 < 60 )
      {
        *(uint *)(v4 + 280) = v14 + 1;
        result = *(uint *)(v4 + 280);
        if ( result == 60 )
        {
          v15 = Function_224219c();
          result = Function_2254044(v15);
        }
      }
      break;
    case 8:
      v16 = Function_224219c();
      result = Function_2254044(v16);
      break;
    case 9:
      v17 = Function_203608c();
      result = Function_2246220(v17, *(uchar *)(v4 + 275));
      break;
    case 0xB:
      *(uchar *)(a2 + 275) = 0;
      Function_205948c(16, 0, a3, a4);
      Function_22448fc(*(uchar *)(v4 + 274));
      *(uchar *)(v4 + 273) = 0;
      result = 12;
      *(uint *)v4 = 12;
      break;
    case 0xC:
      result = (uchar)++*(uchar *)(a2 + 273);
      if ( result > 8 )
      {
        Function_20360dc(41);
        result = 8;
        *(uint *)v4 = 8;
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (02246220) --------------------------------------------------------
int __fastcall Function_2246220(int a1, int a2)
{
  int result;
  uchar *v3;
  int v4;
  int v5;
  int v6;

  result = 668;
  v3 = *(uchar **)(dword_2257740[9] + 668);
  if ( v3 )
  {
    if ( v3[275] )
    {
      if ( a2 )
        Function_22448fc(v3[274]);
    }
    Function_200ab4c(0, 1, 1);
    Function_200aae0(1, 0, -4, 1, 1);
    Function_2246370(v3[276]);
    Function_205948c(16, v4, v5, v6);
    Call_RemoveTaskFromTaskList(*(int **)(dword_2257740[9] + 652));
    free(*(uint *)(dword_2257740[9] + 668));
    *(uint *)(dword_2257740[9] + 652) = 0;
    result = 668;
    *(uint *)(dword_2257740[9] + 668) = 0;
  }
  return result;
}

//----- (022462A8) --------------------------------------------------------
uint *__fastcall Function_22462a8(int a1, char a2, char a3)
{
  char v3;
  int v4;
  char v5;
  int v6;
  char v7;
  uint *result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = malloc(4u, 288);
  MI_CpuFill8((ushort *)v6, 0, 0x120u);
  *(uchar *)(v6 + 275) = v3;
  *(uint *)(v6 + 284) = v4;
  if ( *(uchar *)(dword_2257740[9] + 2875) == 29 )
    v7 = 32;
  else
    v7 = 16;
  *(uchar *)(v6 + 276) = v7;
  *(uchar *)(v6 + 274) = v5;
  *(uint *)(dword_2257740[9] + 668) = v6;
  result = AddTaskToTaskList1((int)Function_2245f94, v6, 0x64u);
  *(uint *)(dword_2257740[9] + 652) = result;
  return result;
}

//----- (02246324) --------------------------------------------------------
int **__fastcall Function_2246324(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int **result;
  int v8;

  *(uint *)(dword_2257740[9] + 68) = Function_20095c4(32, dword_2257740[9] + 72, 4, a4);
  Function_200964c(dword_2257740[9] + 72, 0, 1572864, v4);
  v5 = 0;
  v6 = 0;
  do
  {
    result = Function_2009714(2, v5, 4u);
    v5 = (int *)((char *)v5 + 1);
    v8 = dword_2257740[9] + v6;
    v6 += 4;
    *(uint *)(v8 + 368) = result;
  }
  while ( (int)v5 < 4 );
  return result;
}

//----- (02246370) --------------------------------------------------------
int __fastcall Function_2246370(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int *v5;
  int v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  int *v11;
  int v12;
  int *v13;
  int result;

  v1 = a1;
  v2 = 0;
  if ( a1 > 0 )
  {
    v3 = 0;
    do
    {
      v4 = *(uint *)(dword_2257740[9] + v3 + 504);
      if ( v4 )
      {
        Function_2021bd4(v4);
        *(uint *)(dword_2257740[9] + v3 + 504) = 0;
      }
      ++v2;
      v3 += 4;
    }
    while ( v2 < v1 );
  }
  v5 = *(int **)(dword_2257740[9] + 400);
  if ( v5 )
  {
    v6 = Function_2009e08(v5);
    if ( Function_201ead8(v6) )
      Function_200a4e4(*(int **)(dword_2257740[9] + 400));
  }
  *(uint *)(dword_2257740[9] + 400) = 0;
  v7 = *(int **)(dword_2257740[9] + 404);
  if ( v7 )
  {
    v8 = Function_2009e08(v7);
    if ( Function_201f9dc(v8) )
      Function_200a6dc(*(int **)(dword_2257740[9] + 404));
  }
  v9 = 0;
  *(uint *)(dword_2257740[9] + 404) = 0;
  v10 = 0;
  do
  {
    v11 = *(int **)(dword_2257740[9] + v10 + 368);
    if ( v11 )
      Function_2009754(v11);
    ++v9;
    v12 = dword_2257740[9] + v10;
    v10 += 4;
    *(uint *)(v12 + 368) = 0;
  }
  while ( v9 < 4 );
  v13 = *(int **)(dword_2257740[9] + 68);
  if ( v13 )
    Function_2021964(v13);
  result = dword_2257740[9];
  *(uint *)(dword_2257740[9] + 68) = 0;
  return result;
}

//----- (0224644C) --------------------------------------------------------
uint __fastcall Function_224644c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  short v13;
  int v14;
  int v15;
  int v16;

  v1 = a1;
  Function_20093b4(
    dword_2257740[9] + 468,
    0,
    0,
    0,
    0,
    -1,
    -1,
    0,
    0,
    *(uint *)(dword_2257740[9] + 368),
    *(uint *)(dword_2257740[9] + 372),
    *(uint *)(dword_2257740[9] + 376),
    *(uint *)(dword_2257740[9] + 380),
    0,
    0);
  v2 = 0;
  v5 = *(uint *)(dword_2257740[9] + 68);
  v6 = dword_2257740[9] + 468;
  v8 = 393216;
  v7 = 0x20000;
  v9 = 0;
  v10 = 4096;
  v11 = 4096;
  v12 = 4096;
  v13 = 0;
  v15 = 1;
  v14 = 0;
  v16 = 4;
  if ( v1 > 0 )
  {
    v3 = 0;
    do
    {
      v7 = 1228800;
      v8 = 1228800;
      *(uint *)(dword_2257740[9] + v3 + 504) = Function_2021aa0((uint **)&v5);
      Function_2021d6c(*(uint *)(dword_2257740[9] + v3 + 504), 0);
      Function_2021cc8(*(uint *)(dword_2257740[9] + v3 + 504), 0);
      Function_2021e50(*(uint *)(dword_2257740[9] + v3 + 504), 0);
      Function_2021e80(*(uint *)(dword_2257740[9] + v3 + 504), 1);
      ++v2;
      v3 += 4;
    }
    while ( v2 < v1 );
  }
  Function_201ff0c(0x10u, 1);
  return Function_201ff74(0x10u, 1);
}

//----- (02246548) --------------------------------------------------------
int __fastcall Function_2246548(int a1)
{
  int v1;
  int result;

  v1 = 4 * a1;
  result = *(uint *)(dword_2257740[9] + 4 * a1 + 504);
  if ( result )
  {
    Function_2021bd4(result);
    result = 504;
    *(uint *)(dword_2257740[9] + v1 + 504) = 0;
  }
  return result;
}

//----- (02246574) --------------------------------------------------------
int __fastcall Function_2246574(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int result;
  int v10;
  int v11;
  int v12;
  int v13;

  v13 = a4;
  v4 = 4 * a1;
  v10 = *(ushort *)(a2 + 4 * a1 + 72);
  v5 = *(ushort *)(a2 + 4 * a1 + 74);
  if ( !a3 )
    *(ushort *)(a2 + 8 + 2 * a1) += 1024;
  v6 = 2 * ((int)*(ushort *)(a2 + 2 * a1 + 8) >> 4);
  v7 = (ll_mul(SLOWORD(Unknown_20f983c[(int)*(ushort *)(a2 + 2 * a1 + 8) >> 4]), 18432LL) + 2048) >> 12;
  v8 = (ll_mul(*((short *)Unknown_20f983c + v6 + 1), 10240LL) + 2048) >> 12;
  if ( v8 < 0 )
    v8 = -v8;
  result = dword_2257740[9] + 504;
  if ( *(uint *)(dword_2257740[9] + 504 + v4) )
  {
    v11 = v7 + (v10 << 12);
    v12 = v8 + (v5 << 12);
    result = Function_2021c50(*(uint **)(result + v4), &v11);
  }
  return result;
}

//----- (02246624) --------------------------------------------------------
int __fastcall Function_2246624(int result)
{
  if ( !result )
  {
    result = 2874;
    *(uchar *)(dword_2257740[9] + 2874) = dword_2257740[8];
  }
  return result;
}

//----- (02246640) --------------------------------------------------------
int __fastcall Function_2246640(int a1, int a2)
{
  int v2;
  int v3;
  char v4;
  int v5;
  int i;
  int v8;
  int v9;
  int v10;
  ushort *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  long long v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  short v24;
  int v25;
  int v26;
  int v27;

  v2 = a2;
  Function_2004b70(2, (int)&dword_2257740[8], (int (__fastcall *)(uint, uint))Function_2246624, 0);
  if ( *(uchar *)(dword_2257740[9] + 2875) == 29 )
  {
    v3 = abs(*(char *)(dword_2257740[9] + 2874));
    v4 = s32_div_f(v3, 33);
  }
  else
  {
    v5 = abs(*(char *)(dword_2257740[9] + 2874));
    v4 = s32_div_f(v5, 25);
  }
  *(uchar *)(v2 + *(uchar *)(v2 + 272) + 200) = v4;
  for ( i = 0; i < *(uchar *)(v2 + 276) && !*(uint *)(dword_2257740[9] + 4 * i + 504); ++i )
    ;
  if ( i == *(uchar *)(v2 + 276) )
    return 1;
  v8 = 0;
  v27 = v2 + 74;
  v9 = v2 + 72;
  while ( v8 < *(uchar *)(v2 + 276) )
  {
    v10 = 4 * v8;
    v11 = (ushort *)(v2 + 4 * v8 + 72);
    if ( *v11
      && (ushort)*v11 < 0x100u
      && *(ushort *)(v2 + v10 + 74)
      && *(ushort *)(v2 + v10 + 74) < 0xC0u )
    {
      v12 = *(uchar *)(v2 + 272) - *(uchar *)(v2 + v8 + 240);
      v13 = *(uchar *)(v2 + v12 + (v12 < 0 ? 0x28 : 0) + 200);
      v14 = (*(ushort *)(v2 + 4 * v8 + 72) - 128) << 12;
      v15 = (*(ushort *)(v2 + 4 * v8 + 74) - 96) << 12;
      v16 = (ll_mul(v15, v15) + 2048) >> 12;
      v17 = ll_mul(v14, v14);
      v18 = FX_Sqrt((ull)((v17 + 2048) >> 12) + v16);
      v26 = v18;
      if ( v13 )
      {
        v21 = 4 * v8;
        v22 = *(ushort *)(v2 + 4 * v8 + 72) - 128;
        v23 = *(ushort *)(v2 + 4 * v8 + 74) - 96;
        if ( *(ushort *)(v2 + 4 * v8 + 74) == 96 )
        {
          v24 = *(ushort *)(v9 + v21);
          if ( v22 >= 0 )
            *(ushort *)(v9 + v21) = v24 + v13;
          else
            *(ushort *)(v9 + v21) = v24 - v13;
        }
        else if ( *(ushort *)(v2 + 4 * v8 + 72) == 128 )
        {
          if ( v23 >= 0 )
            *(ushort *)(v27 + v21) += v13;
          else
            *(ushort *)(v27 + v21) -= v13;
        }
        else
        {
          v25 = FX_Atan2Idx(v23, v22);
          *(ushort *)(v2 + 4 * v8 + 74) = ((int)((ll_mul(SLOWORD(Unknown_20f983c[v25 >> 4]), v26 + (v13 << 12))
                                                      + 2048) >> 12) >> 12)
                                       + 96;
          *(ushort *)(v2 + 4 * v8 + 72) = ((int)((ll_mul(
                                                          *((short *)Unknown_20f983c + 2 * (v25 >> 4) + 1),
                                                          v26 + (v13 << 12))
                                                      + 2048) >> 12) >> 12)
                                       + 128;
        }
      }
      else
      {
        v20 = FX_Div(v18, 655360);
        *(uchar *)(v2 + v8 + 240) = (int)((ll_mul(v20, 155648LL) + 2048) >> 12) >> 12;
      }
      Function_2246574(v8, v2, v13, v19);
    }
    else
    {
      Function_2246548(v8);
    }
    ++v8;
  }
  if ( (uchar)++*(uchar *)(v2 + 272) >= 0x28u )
    *(uchar *)(v2 + 272) = 0;
  Function_20219f8(*(uint *)(dword_2257740[9] + 68));
  return 0;
}

//----- (022468A8) --------------------------------------------------------
int Function_22468a8()
{
  int (*v0)(void);
  int result;

  v0 = *(int (**)(void))(dword_2257740[9] + 672);
  if ( v0 )
    result = v0();
  return result;
}

//----- (022468C0) --------------------------------------------------------
int Function_22468c0()
{
  int result;

  if ( *(uchar *)(dword_2257740[9] + 2875) == 23 )
    result = 20;
  else
    result = 7;
  return result;
}

//----- (022468DC) --------------------------------------------------------
int __fastcall Function_22468dc(int a1, int a2, int a3, int a4)
{
  int v4;
  long long v5;
  long long v6;
  int v7;
  int result;
  int v9;
  int v10;
  int v11;
  int v12;
  long long v13;
  uint v14;
  int v15;
  long long v16;
  uint v17;
  long long v18;
  int v19;
  long long v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  long long v26;
  long long v27;
  long long v28;

  v4 = a1;
  v24 = 0;
  Function_20361bc(&v26, a2, a3, a4);
  v22 = Function_22468c0();
  if ( *(uchar *)(dword_2257740[9] + 2875) == 23 )
  {
    v5 = ll_mul(v27, v26);
    v26 = v28 + v5;
    v24 = ((uint)((ull)(v28 + v5) >> 32) >> 31) + 1;
  }
  v6 = ll_mul(v27, v26);
  v26 = v28 + v6;
  v7 = 0;
  v23 = v24 + ((ull)ll_mul((ull)(v28 + v6) >> 32, 3LL) >> 32) + 5;
  for ( result = v22; v7 < v22; ++v7 )
  {
    v9 = v22 - v7 - 1;
    if ( v7 >= v24 )
    {
      if ( v7 >= v23 )
      {
        v10 = v4 + v9;
        *(uchar *)(v4 + v9 + 8) = 2;
      }
      else
      {
        v10 = v4 + v9;
        *(uchar *)(v4 + v9 + 8) = 1;
      }
    }
    else
    {
      v10 = v4 + v9;
      *(uchar *)(v4 + v9 + 8) = 0;
    }
    v11 = dword_22563E8[*(uchar *)(v10 + 8)];
    v21 = v11;
    v12 = 2 * v11;
    v25 = 192 - 2 * v11;
    v13 = ll_mul(v27, v26);
    v14 = v28 + v13;
    LODWORD(v13) = (ull)(v28 + v13) >> 32;
    v26 = __PAIR__(v13, v14);
    if ( v12 != 256 )
    {
      HIDWORD(v13) = 0;
      LODWORD(v13) = ll_mul(v13, (uint)(256 - v12));
    }
    v15 = v4 + 8 * v9;
    *(uint *)(v15 + 68) = (v21 + (uint)v13) << 12;
    v16 = ll_mul(v27, v26);
    v26 = v28 + v16;
    v17 = (ull)(v28 + v16) >> 32;
    if ( v25 )
      v17 = (ull)ll_mul(v17, (uint)v25) >> 32;
    *(uint *)(v15 + 72) = (v21 + v17) << 12;
    v18 = ll_mul(v27, v26);
    v26 = v28 + v18;
    v19 = v4 + 2 * v9;
    *(ushort *)(v19 + 28) = (ull)ll_mul((ull)(v28 + v18) >> 32, 0xFFFFLL) >> 32;
    v20 = ll_mul(v27, v26);
    v26 = v28 + v20;
    *(ushort *)(v19 + 308) = (ull)ll_mul((ull)(v28 + v20) >> 32, 0xFFFFLL) >> 32;
    result = v22;
  }
  return result;
}

//----- (02246A80) --------------------------------------------------------
uint __fastcall Function_2246a80(int a1, int a2, int a3, int a4)
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

  v4 = a2;
  result = *(uint *)a2;
  if ( *(uint *)a2 <= 0xCu )
    JUMPOUT(__CS__, *((short *)&off_2246A9A + result) + 35941020);
  switch ( (uchar)result )
  {
    case 0:
      *(uint *)(a2 + 4) = Function_2244c10();
      *(uchar *)(v4 + 348) = 0;
      Function_2246324(348, 0, v6, v7);
      result = *(uint *)v4 + 1;
      *(uint *)v4 = result;
      break;
    case 1:
      *(uint *)(dword_2257740[9] + 400) = Function_200985c(*(uint *)(dword_2257740[9] + 368), 50, 6, 0, 0, 1, 4);
      Function_200aae0(1, 10, 0, 1, 1);
      result = *(uint *)v4 + 1;
      *(uint *)v4 = result;
      break;
    case 2:
      *(uint *)(dword_2257740[9] + 404) = Function_20098b8(*(uint *)(dword_2257740[9] + 372), 50, 7, 0, 0, 1, 7, 4);
      result = *(uint *)v4 + 1;
      *(uint *)v4 = result;
      break;
    case 3:
      Function_200aae0(1, 0, 10, 1, 1);
      *(uint *)(dword_2257740[9] + 408) = Function_2009918(*(uint *)(dword_2257740[9] + 376), 50, 5, 0, 0, 2u, 4);
      result = *(uint *)v4 + 1;
      *(uint *)v4 = result;
      break;
    case 4:
      *(uint *)(dword_2257740[9] + 412) = Function_2009918(*(uint *)(dword_2257740[9] + 380), 50, 4, 0, 0, 3u, 4);
      result = *(uint *)v4 + 1;
      *(uint *)v4 = result;
      break;
    case 5:
      Function_22468dc(a2, a2, a3, a4);
      Function_2246d44(v4);
      result = *(uint *)v4 + 1;
      *(uint *)v4 = result;
      break;
    case 6:
      result = (uchar)++*(uchar *)(a2 + 348);
      if ( result > 0x1E )
      {
        GXx_SetMasterBrightness_(&REG_MASTER_BRIGHT, -4);
        *(uint *)v4 = 7;
        v8 = Function_224219c();
        Function_2253f60(v8, 77);
        *(uint *)(v4 + 352) = 0;
        result = Function_2005748(0x660u);
      }
      break;
    case 7:
      G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 16, 1, 14, 7);
      if ( Function_2246f20(*(uint *)(*(uint *)(dword_2257740[9] + 64) + 8), v4) )
      {
        Function_20057a4(1632, 0);
        if ( *(uchar *)(v4 + 350) )
        {
          *(uint *)v4 = 11;
        }
        else
        {
          Function_20360dc(41);
          *(uint *)v4 = 8;
        }
      }
      result = 352;
      v9 = *(uint *)(v4 + 352);
      if ( v9 < 60 )
      {
        *(uint *)(v4 + 352) = v9 + 1;
        result = *(uint *)(v4 + 352);
        if ( result == 60 )
        {
          v10 = Function_224219c();
          result = Function_2254044(v10);
        }
      }
      break;
    case 8:
      Function_20057a4(1632, 0);
      v11 = Function_224219c();
      result = Function_2254044(v11);
      break;
    case 9:
      *(uint *)a2 = 10;
      v12 = Function_203608c();
      result = Function_2247144(v12, *(uchar *)(v4 + 350));
      break;
    case 0xB:
      *(uchar *)(a2 + 350) = 0;
      Function_205948c(16, 0, a3, a4);
      Function_22448fc(*(uchar *)(v4 + 349));
      *(uchar *)(v4 + 348) = 0;
      result = 12;
      *(uint *)v4 = 12;
      break;
    case 0xC:
      result = (uchar)++*(uchar *)(a2 + 348);
      if ( result > 8 )
      {
        Function_20360dc(41);
        result = 8;
        *(uint *)v4 = 8;
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (02246CF0) --------------------------------------------------------
int __fastcall Function_2246cf0(int a1, char a2, char a3)
{
  char v3;
  char v4;
  int v5;
  int result;

  v3 = a2;
  v4 = a3;
  v5 = malloc2(4u, 356);
  MI_CpuFill8((ushort *)v5, 0, 0x164u);
  *(uchar *)(v5 + 350) = v3;
  *(uint *)(dword_2257740[9] + 668) = v5;
  *(uint *)(dword_2257740[9] + 652) = AddTaskToTaskList1((int)Function_2246a80, v5, 0x64u);
  result = 349;
  *(uchar *)(v5 + 349) = v4;
  return result;
}

//----- (02246D44) --------------------------------------------------------
uint __fastcall Function_2246d44(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  ushort v6;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  short v17;
  int v18;
  int v19;
  int v20;
  int v21;

  v21 = a4;
  v8 = a1;
  Function_200a450(*(int **)(dword_2257740[9] + 400));
  Function_200a640(*(int **)(dword_2257740[9] + 404));
  Function_20093b4(
    dword_2257740[9] + 468,
    0,
    0,
    0,
    0,
    -1,
    -1,
    0,
    0,
    *(uint *)(dword_2257740[9] + 368),
    *(uint *)(dword_2257740[9] + 372),
    *(uint *)(dword_2257740[9] + 376),
    *(uint *)(dword_2257740[9] + 380),
    0,
    0);
  v4 = 0;
  v9 = *(uint *)(dword_2257740[9] + 68);
  v10 = dword_2257740[9] + 468;
  v12 = 393216;
  v11 = 0x20000;
  v13 = 0;
  v14 = 4096;
  v15 = 4096;
  v16 = 4096;
  v17 = 0;
  v19 = 1;
  v18 = 0;
  v20 = 4;
  if ( Function_22468c0() > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v11 = 1228800;
      v12 = 1228800;
      *(uint *)(dword_2257740[9] + v5 + 504) = Function_2021aa0((uint **)&v9);
      Function_2021cf8(*(uint *)(dword_2257740[9] + v5 + 504), 1);
      Function_2021d6c(*(uint *)(dword_2257740[9] + v5 + 504), 2 * *(uchar *)(v8 + v4 + 8));
      Function_2021cc8(*(uint *)(dword_2257740[9] + v5 + 504), 1);
      Function_2021e50(*(uint *)(dword_2257740[9] + v5 + 504), v6);
      Function_2021fe0(*(uint *)(dword_2257740[9] + v5 + 504), 1);
      Function_2021e80(*(uint *)(dword_2257740[9] + v5 + 504), 1);
      v5 += 4;
      v6 += 4;
      ++v4;
    }
    while ( v4 < Function_22468c0() );
  }
  Function_201ff0c(0x10u, 1);
  return Function_201ff74(0x10u, 1);
}

//----- (02246E90) --------------------------------------------------------
int __fastcall Function_2246e90(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v2 = a1;
  v3 = a2;
  result = 4 * a1;
  if ( *(uint *)(dword_2257740[9] + 504 + result) )
  {
    v5 = a2 + 8 * v2;
    v7 = *(uint *)(v5 + 68);
    v8 = *(uint *)(v5 + 72);
    Function_2021c50(*(uint **)(dword_2257740[9] + 504 + result), &v7);
    *(ushort *)(v3 + 308 + 2 * v2) += 100 * v2 + 592;
    v6 = FX_Div(
           (short)(LOWORD(Unknown_20f983c[(int)*(ushort *)(v3 + 308 + 2 * v2) >> 4]) + 4096),
           81920);
    v7 = 4096 - v6;
    v8 = 4096 - v6;
    v9 = 4096 - v6;
    result = Function_2021c70(*(uint **)(dword_2257740[9] + 4 * v2 + 504), &v7);
  }
  return result;
}

//----- (02246F20) --------------------------------------------------------
int __fastcall Function_2246f20(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  long long v11;
  int v12;
  int v13;
  long long v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;

  v2 = 0;
  v22 = a2;
  v3 = 0;
  if ( Function_22468c0() > 0 )
  {
    v4 = v22;
    do
    {
      if ( *(uint *)(v4 + 228) )
        ++v2;
      else
        Function_2246e90(v3, v22);
      v4 += 4;
      ++v3;
    }
    while ( v3 < Function_22468c0() );
  }
  if ( v2 == Function_22468c0() )
    return 1;
  if ( word_21BF6DC )
  {
    v6 = 0;
    if ( Function_22468c0() > 0 )
    {
      v7 = v22;
      v8 = v22;
      while ( 1 )
      {
        if ( !*(uint *)(v7 + 228) )
        {
          v9 = ((ushort)word_21BF6DA << 12) - *(uint *)(v8 + 72);
          v10 = ((ushort)word_21BF6D8 << 12) - *(uint *)(v8 + 68);
          v11 = ll_mul(v10, v10);
          v12 = v11;
          LODWORD(v11) = v9;
          v13 = HIDWORD(v11);
          HIDWORD(v11) = v9 >> 31;
          v14 = ll_mul(v11, v9);
          if ( dword_22563E8[*(uchar *)(v22 + v6 + 8)] << 12 > (int)FX_Sqrt(
                                                                                       (((uint)(v12 + 2048) >> 12) | ((__CFADD__(v12, 2048) + v13) << 20))
                                                                                     + (((uint)(v14 + 2048) >> 12) | ((__CFADD__((uint)v14, 2048) + HIDWORD(v14)) << 20))) )
            break;
        }
        v7 += 4;
        v8 += 8;
        if ( ++v6 >= Function_22468c0() )
          goto LABEL_16;
      }
      Function_2005748(0x626u);
      Function_2021d6c(*(uint *)(dword_2257740[9] + 4 * v6 + 504), 2 * *(uchar *)(v22 + v6 + 8) + 1);
      *(uint *)(v22 + 4 * v6 + 228) = 1;
    }
  }
LABEL_16:
  v15 = 0;
  if ( Function_22468c0() > 0 )
  {
    v16 = v22;
    v17 = v22;
    v18 = v22;
    do
    {
      if ( !*(uint *)(v16 + 228) )
      {
        *(uint *)(v18 + 72) -= SLOWORD(Unknown_20f983c[(int)*(ushort *)(v17 + 28) >> 4]);
        *(uint *)(v18 + 68) += SHIWORD(Unknown_20f983c[(int)*(ushort *)(v17 + 28) >> 4]);
        v19 = dword_22563E8[*(uchar *)(v22 + v15 + 8)];
        v20 = *(uint *)(v18 + 72);
        if ( v20 >= v19 << 12 )
        {
          if ( v20 >= (192 - v19) << 12 )
            *(ushort *)(v17 + 28) = -1 - *(ushort *)(v17 + 28);
        }
        else
        {
          *(ushort *)(v17 + 28) = -1 - *(ushort *)(v17 + 28);
        }
        v21 = *(uint *)(v18 + 68);
        if ( v21 >= v19 << 12 )
        {
          if ( v21 >= (256 - v19) << 12 )
            *(ushort *)(v17 + 28) = 0x7FFF - *(ushort *)(v17 + 28);
        }
        else
        {
          *(ushort *)(v17 + 28) = 0x7FFF - *(ushort *)(v17 + 28);
        }
      }
      v16 += 4;
      v17 += 2;
      v18 += 8;
      ++v15;
    }
    while ( v15 < Function_22468c0() );
  }
  Function_20219f8(*(uint *)(dword_2257740[9] + 68));
  return 0;
}

//----- (0224710C) --------------------------------------------------------
int __fastcall Function_224710c(int a1, char a2, char a3)
{
  char v3;
  int v4;
  char v5;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  Function_224ad7c(a1, 2);
  result = Function_203608c();
  if ( v4 == result )
    result = Function_2246cf0(*(uint *)(*(uint *)(dword_2257740[9] + 64) + 8), v3, v5);
  return result;
}

//----- (02247138) --------------------------------------------------------
int __fastcall Function_2247138(int a1)
{
  return Function_224ad7c(a1, 2);
}

//----- (02247144) --------------------------------------------------------
int __fastcall Function_2247144(int a1, int a2)
{
  int v2;
  int result;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v2 = a2;
  result = 668;
  v4 = *(uint *)(dword_2257740[9] + 668);
  if ( v4 )
  {
    Function_20057a4(1632, 0);
    if ( *(uchar *)(v4 + 350) )
    {
      if ( v2 )
        Function_22448fc(*(uchar *)(v4 + 349));
    }
    REG_BLDCNT = 0;
    Function_200ab4c(0, 1, 1);
    GXx_SetMasterBrightness_(&REG_MASTER_BRIGHT, 0);
    v5 = Function_22468c0();
    Function_2246370(v5);
    Function_205948c(16, v6, v7, v8);
    Call_RemoveTaskFromTaskList(*(int **)(dword_2257740[9] + 652));
    free(*(uint *)(dword_2257740[9] + 668));
    *(uint *)(dword_2257740[9] + 652) = 0;
    result = 668;
    *(uint *)(dword_2257740[9] + 668) = 0;
  }
  return result;
}

//----- (022471D8) --------------------------------------------------------
uint Function_22471d8()
{
  int v0;
  int v1;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  short v11;
  int v12;
  int v13;
  int v14;

  Function_200a450(*(int **)(dword_2257740[9] + 400));
  Function_200a640(*(int **)(dword_2257740[9] + 404));
  Function_20093b4(
    dword_2257740[9] + 468,
    0,
    0,
    0,
    0,
    -1,
    -1,
    0,
    0,
    *(uint *)(dword_2257740[9] + 368),
    *(uint *)(dword_2257740[9] + 372),
    *(uint *)(dword_2257740[9] + 376),
    *(uint *)(dword_2257740[9] + 380),
    0,
    0);
  v0 = 0;
  v1 = 0;
  v3 = *(uint *)(dword_2257740[9] + 68);
  v4 = dword_2257740[9] + 468;
  v6 = 393216;
  v5 = 0x20000;
  v7 = 0;
  v8 = 4096;
  v9 = 4096;
  v10 = 4096;
  v11 = 0;
  v13 = 1;
  v12 = 0;
  v14 = 4;
  do
  {
    v5 = 409600;
    v6 = 409600;
    *(uint *)(dword_2257740[9] + v1 + 504) = Function_2021aa0((uint **)&v3);
    Function_2021d6c(*(uint *)(dword_2257740[9] + v1 + 504), 2u);
    Function_2021cc8(*(uint *)(dword_2257740[9] + v1 + 504), 1);
    Function_2021cac(*(uint *)(dword_2257740[9] + v1 + 504), 0);
    Function_2021e50(*(uint *)(dword_2257740[9] + v1 + 504), 0);
    Function_2021f58(*(uint *)(dword_2257740[9] + v1 + 504), 15 - v0);
    Function_2021e80(*(uint *)(dword_2257740[9] + v1 + 504), 1);
    ++v0;
    v1 += 4;
  }
  while ( v0 < 15 );
  Function_201ff0c(0x10u, 1);
  return Function_201ff74(0x10u, 1);
}

//----- (0224730C) --------------------------------------------------------
uint __fastcall Function_224730c(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int v7;

  v6 = 4 * a2;
  v7 = a1 + v6;
  *(uint *)(v7 + 8) = a3;
  *(uint *)(a1 + v6 + 128) = a5;
  *(uint *)(v7 + 68) = a4;
  *(uint *)(a1 + v6 + 188) = a6;
  return Function_2021cac(*(uint *)(dword_2257740[9] + v6 + 504), 1);
}

//----- (0224733C) --------------------------------------------------------
uint __fastcall Function_224733c(int a1)
{
  int v1;

  v1 = a1;
  switch ( (uchar)a1 )
  {
    case 0:
      return Function_224730c(v1, 1, 128, *(uint *)(v1 + 288) - 30, 2, -3);
    case 1:
      goto LABEL_5;
    case 2:
      goto LABEL_4;
    case 3:
      break;
    default:
      Function_224730c(a1, 11, 105, *(uint *)(a1 + 288) - 5, 2, -4);
      Function_224730c(v1, 12, 140, *(uint *)(v1 + 288) - 15, -2, -4);
      Function_224730c(v1, 13, 135, *(uint *)(v1 + 288) - 20, -2, -2);
      Function_224730c(v1, 14, 120, *(uint *)(v1 + 288) - 11, 2, 0);
      break;
  }
  Function_224730c(v1, 7, 128, *(uint *)(v1 + 288) - 5, 3, -4);
  Function_224730c(v1, 8, 132, *(uint *)(v1 + 288) - 15, -3, -4);
  Function_224730c(v1, 9, 112, *(uint *)(v1 + 288), 1, -2);
  Function_224730c(v1, 10, 115, *(uint *)(v1 + 288) + 2, 1, -2);
LABEL_4:
  Function_224730c(v1, 4, 140, *(uint *)(v1 + 288) - 10, 2, -3);
  Function_224730c(v1, 5, 140, *(uint *)(v1 + 288) - 20, -2, -3);
  Function_224730c(v1, 6, 110, *(uint *)(v1 + 288), -1, -2);
LABEL_5:
  Function_224730c(v1, 2, 120, *(uint *)(v1 + 288) - 30, -2, -3);
  Function_224730c(v1, 3, 100, *(uint *)(v1 + 288) - 10, -2, -3);
  return Function_224730c(v1, 1, 128, *(uint *)(v1 + 288) - 30, 2, -3);
}

//----- (022474D4) --------------------------------------------------------
int __fastcall Function_22474d4(uint *a1)
{
  uint *v1;
  int v2;
  uint *v3;
  int v4;
  int result;
  int v6;
  int v7;
  int v8;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  v4 = 0;
  do
  {
    result = (int)(v3 + 32);
    v6 = v3[32];
    if ( v6 )
    {
      v3[2] += v6;
      v3[17] += v3[47];
      v3[47] += *((uchar *)v1 + 292);
      v7 = v3[2] << 12;
      v8 = v3[17] << 12;
      Function_2021c50(*(uint **)(dword_2257740[9] + v4 + 504), &v7);
      result = v1[72] + 35;
      if ( v3[17] > result )
      {
        Function_2021cac(*(uint *)(dword_2257740[9] + v4 + 504), 0);
        result = 0;
        v3[32] = 0;
      }
    }
    ++v2;
    ++v3;
    v4 += 4;
  }
  while ( v2 < 15 );
  return result;
}

//----- (02247568) --------------------------------------------------------
int __fastcall Function_2247568(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  long long v9;
  uint v10;
  uint v11;
  long long v12;
  uint v13;
  int v14;
  uint v15;
  int v16;
  int v17;
  uint v18;
  int v19;
  int v20;
  uint v21;
  int v22;
  uint v23;
  int *v24;
  int result;
  int v26;
  int v27;

  v2 = a2;
  switch ( *(uchar *)(a2 + 293) )
  {
    case 0:
      *(uchar *)(a2 + 292) = 0;
      v3 = GetSpritePositionX(*(uint *)(*(uint *)(dword_2257740[9] + 64) + 60));
      v4 = GetSpritePositionY(*(uint *)(*(uint *)(dword_2257740[9] + 64) + 60));
      *(uint *)(v2 + 276) = ((int (__fastcall *)(uint, int, int, int, int))dword_21F4F18[0])(
                                *(uint *)(dword_2257740[9] + 64),
                                v3,
                                v4,
                                5,
                                32);
      *(uchar *)(v2 + 293) = 1;
      Function_2005748(0x65Eu);
      goto LABEL_44;
    case 1:
      if ( (uchar)++*(uchar *)(a2 + 292) > 0x14u )
      {
        *(uchar *)(a2 + 293) = 2;
        *(uint *)(a2 + 288) = 0;
        *(uint *)(a2 + 284) = 5;
        Function_2021d6c(*(uint *)(dword_2257740[9] + 504), 0);
      }
      goto LABEL_44;
    case 2:
      v26 = 0x80000;
      v27 = *(uint *)(a2 + 288) << 12;
      Function_2021c50(*(uint **)(dword_2257740[9] + 504), &v26);
      Function_2021cac(*(uint *)(dword_2257740[9] + 504), 1);
      v5 = *(uint *)(v2 + 288);
      if ( v5 <= 65 )
      {
        *(uint *)(v2 + 288) = v5 + *(uint *)(v2 + 284);
        *(uint *)(v2 + 284) += 3;
      }
      else
      {
        *(uchar *)(v2 + 293) = 3;
        Function_2005748(0x65Du);
        if ( *(uchar *)(dword_2257740[9] + 2875) == 21 )
          v6 = -1;
        else
          v6 = 5;
        *(uint *)(v2 + 280) = v6;
        v7 = *(int **)(v2 + 276);
        if ( v7 )
        {
          Function_207136c(v7);
          *(uint *)(v2 + 276) = 0;
        }
      }
      goto LABEL_44;
    case 3:
      if ( word_21BF6DC )
      {
        v8 = ((ushort)word_21BF6DA - *(uint *)(a2 + 288)) << 12;
        v9 = ll_mul(((ushort)word_21BF6D8 - 128) << 12, ((ushort)word_21BF6D8 - 128) << 12);
        v10 = v9;
        LODWORD(v9) = v8;
        v11 = HIDWORD(v9);
        HIDWORD(v9) = v8 >> 31;
        v12 = ll_mul(v9, v8);
        if ( (int)FX_Sqrt(((ll)(__PAIR__(v11, v10) + 2048) >> 12) + ((v12 + 2048) >> 12)) < 196608 )
        {
          *(uint *)(v2 + 300) = 3;
          Function_2005748(0x627u);
          v13 = ++*(uint *)(v2 + 280);
          s32_div_f(*(uint *)(v2 + 280), 3);
          if ( v14 == 2 )
          {
            v15 = s32_div_f(v13, 3);
            Function_200a490(*(int **)(v2 + 248), *(uint *)(v2 + 4 * (v15 + 1) + 248));
            *(uchar *)(v2 + 292) = 0;
            *(uchar *)(v2 + 293) = 4;
          }
        }
      }
      if ( *(uint *)(v2 + 280) > 15 )
      {
        *(uchar *)(v2 + 292) = 0;
        *(uchar *)(v2 + 293) = 5;
        *(uint *)(v2 + 300) = 0;
      }
      v16 = *(uint *)(v2 + 300);
      if ( v16 )
      {
        if ( v16 < 0 )
          *(uint *)(v2 + 300) = v16 + 1;
        *(uint *)(v2 + 300) = -*(uint *)(v2 + 300);
      }
      v26 = (*(uint *)(v2 + 300) + 128) << 12;
      v27 = *(uint *)(v2 + 288) << 12;
      Function_2021c50(*(uint **)(dword_2257740[9] + 504), &v26);
      goto LABEL_44;
    case 4:
      if ( !*(uchar *)(a2 + 292) )
      {
        s32_div_f(*(uint *)(a2 + 280), 3);
        Function_224733c(v2);
      }
      ++*(uchar *)(v2 + 292);
      Function_22474d4((uint *)v2);
      if ( *(uchar *)(v2 + 292) == 20 )
        *(uchar *)(v2 + 293) = 3;
      v17 = *(uint *)(v2 + 300);
      if ( v17 )
      {
        if ( v17 < 0 )
          *(uint *)(v2 + 300) = v17 + 1;
        *(uint *)(v2 + 300) = -*(uint *)(v2 + 300);
      }
      v26 = (*(uint *)(v2 + 300) + 128) << 12;
      v27 = *(uint *)(v2 + 288) << 12;
      Function_2021c50(*(uint **)(dword_2257740[9] + 504), &v26);
      goto LABEL_44;
    case 5:
      if ( !*(uchar *)(a2 + 292) )
      {
        Function_2005748(0x62Au);
        Function_200a490(*(int **)(v2 + 248), *(uint *)(v2 + 272));
        v18 = 1;
        v19 = 4;
        v20 = 82;
        do
        {
          Function_2021d6c(*(uint *)(dword_2257740[9] + v19 + 504), 1u);
          v26 = v20 << 12;
          v27 = (*(uint *)(v2 + 288) + 39 + (v18 >> 31) + __ROR4__((v18 << 31) - (v18 >> 31), 31)) << 12;
          Function_2021c50(*(uint **)(dword_2257740[9] + v19 + 504), &v26);
          Function_2021cac(*(uint *)(dword_2257740[9] + v19 + 504), 1);
          ++v18;
          v19 += 4;
          v20 += 12;
        }
        while ( (int)v18 < 9 );
        Function_2021d6c(*(uint *)(dword_2257740[9] + 544), 1u);
        v26 = 409600;
        v27 = (*(uint *)(v2 + 288) + 21) << 12;
        Function_2021c50(*(uint **)(dword_2257740[9] + 544), &v26);
        Function_2021cac(*(uint *)(dword_2257740[9] + 544), 1);
        Function_2021d6c(*(uint *)(dword_2257740[9] + 548), 1u);
        v26 = 499712;
        v27 = *(uint *)(v2 + 288) << 12;
        Function_2021c50(*(uint **)(dword_2257740[9] + 548), &v26);
        Function_2021cac(*(uint *)(dword_2257740[9] + 548), 1);
      }
      ++*(uchar *)(v2 + 292);
      v21 = PRNG();
      s32_div_f(v21, 10);
      v26 = (v22 + 123) << 12;
      v27 = *(uint *)(v2 + 288) << 12;
      Function_2021c50(*(uint **)(dword_2257740[9] + 504), &v26);
      ++*(uint *)(v2 + 288);
      v23 = *(uchar *)(v2 + 292);
      if ( (v23 >> 31) + __ROR4__((v23 << 29) - (v23 >> 31), 29) )
        Function_2021d6c(*(uint *)(dword_2257740[9] + 504), (v23 >> 3) + 3);
      if ( *(uchar *)(v2 + 292) == 75 )
        *(uchar *)(v2 + 293) = 6;
      goto LABEL_44;
    case 6:
      v24 = *(int **)(a2 + 276);
      if ( v24 )
      {
        Function_207136c(v24);
        *(uint *)(v2 + 276) = 0;
      }
      Function_2021cac(*(uint *)(dword_2257740[9] + 504), 0);
      result = 1;
      break;
    default:
LABEL_44:
      Function_20219f8(*(uint *)(dword_2257740[9] + 68));
      result = 0;
      break;
  }
  return result;
}

//----- (022479F4) --------------------------------------------------------
uint __fastcall Function_22479f4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int *v6;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v14 = a4;
  v4 = a1;
  v8 = 35;
  v9 = 38;
  v10 = 41;
  v11 = 44;
  v12 = 47;
  v13 = 50;
  v5 = *(uchar *)(a1 + 292) - 1;
  v6 = LoadFromNARC_8(50, 4u, (int)&v14, (int)dword_225641C);
  if ( v5 < 6 )
    *(uint *)(v4 + 4 * (v5 + 1) + 248) = Function_2009a4c(
                                             *(uint *)(dword_2257740[9] + 368),
                                             (int)v6,
                                             *(&v8 + v5),
                                             0,
                                             v5 + 1,
                                             1,
                                             4u);
  return Call_FS_CloseFile(v6);
}

//----- (02247A60) --------------------------------------------------------
int __fastcall Function_2247a60(int a1)
{
  int v1;
  int v2;
  int result;
  uint **v4;

  v1 = 1;
  v2 = a1 + 4;
  do
  {
    result = v2 + 248;
    v4 = *(uint ***)(v2 + 248);
    if ( v4 )
      result = Function_2009d68(*(int **)(dword_2257740[9] + 368), v4);
    ++v1;
    v2 += 4;
  }
  while ( v1 < 7 );
  return result;
}

//----- (02247A8C) --------------------------------------------------------
uint __fastcall Function_2247a8c(int a1, int a2, int a3, int a4)
{
  int v4;
  uint result;
  int v6;
  int v7;
  int *v8;
  int v9;
  int **v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;

  v4 = a2;
  result = *(uint *)a2;
  if ( *(uint *)a2 <= 0xCu )
    JUMPOUT(__CS__, *((short *)&off_2247AA6 + result) + 35945128);
  switch ( (uchar)result )
  {
    case 0:
      *(uint *)(a2 + 4) = Function_2244c10();
      *(uchar *)(v4 + 292) = 0;
      *(uint *)(dword_2257740[9] + 68) = Function_20095c4(32, dword_2257740[9] + 72, 4, v6);
      Function_200964c(dword_2257740[9] + 72, 0, 1572864, v7);
      v8 = 0;
      v9 = 0;
      do
      {
        v10 = Function_2009714(8, v8, 4u);
        v8 = (int *)((char *)v8 + 1);
        v11 = dword_2257740[9] + v9;
        v9 += 4;
        *(uint *)(v11 + 368) = v10;
      }
      while ( (int)v8 < 4 );
      result = *(uint *)v4 + 1;
      *(uint *)v4 = result;
      break;
    case 1:
      Function_200aae0(1, 10, 0, 1, 1);
      *(uint *)(dword_2257740[9] + 400) = Function_200985c(*(uint *)(dword_2257740[9] + 368), 50, 32, 0, 0, 1, 4);
      *(uint *)(v4 + 248) = *(uint *)(dword_2257740[9] + 400);
      result = *(uint *)v4 + 1;
      *(uint *)v4 = result;
      break;
    case 2:
      *(uint *)(dword_2257740[9] + 404) = Function_20098b8(*(uint *)(dword_2257740[9] + 372), 50, 51, 0, 0, 1, 7, 4);
      result = *(uint *)v4 + 1;
      *(uint *)v4 = result;
      break;
    case 3:
      Function_200aae0(1, 0, 10, 1, 1);
      *(uint *)(dword_2257740[9] + 408) = Function_2009918(*(uint *)(dword_2257740[9] + 376), 50, 31, 0, 0, 2u, 4);
      result = *(uint *)v4 + 1;
      *(uint *)v4 = result;
      break;
    case 4:
      *(uint *)(dword_2257740[9] + 412) = Function_2009918(*(uint *)(dword_2257740[9] + 380), 50, 30, 0, 0, 3u, 4);
      result = *(uint *)v4 + 1;
      *(uint *)v4 = result;
      break;
    case 5:
      Function_22471d8();
      result = *(uint *)v4 + 1;
      *(uint *)v4 = result;
      break;
    case 6:
      v12 = *(uchar *)(a2 + 292) + 1;
      *(uchar *)(v4 + 292) = v12;
      Function_22479f4(v4, v12, a3, a4);
      result = *(uchar *)(v4 + 292);
      if ( result > 0x1E )
      {
        if ( *(uchar *)(dword_2257740[9] + 2875) == 20 )
          Function_200a490(*(int **)(v4 + 248), *(uint *)(v4 + 256));
        v13 = Function_224219c();
        Function_2253f60(v13, 77);
        *(uint *)(v4 + 296) = 0;
        result = 7;
        *(uint *)v4 = 7;
      }
      break;
    case 7:
      if ( Function_2247568(*(uint *)(*(uint *)(dword_2257740[9] + 64) + 8), a2) )
      {
        if ( *(uchar *)(v4 + 295) )
        {
          *(uint *)v4 = 11;
        }
        else
        {
          Function_20360dc(41);
          *(uint *)v4 = 8;
        }
      }
      result = 296;
      v14 = *(uint *)(v4 + 296);
      if ( v14 < 60 )
      {
        *(uint *)(v4 + 296) = v14 + 1;
        result = *(uint *)(v4 + 296);
        if ( result == 60 )
        {
          v15 = Function_224219c();
          result = Function_2254044(v15);
        }
      }
      break;
    case 8:
      v16 = Function_224219c();
      result = Function_2254044(v16);
      break;
    case 9:
      v17 = Function_203608c();
      result = Function_2247db0(v17, *(uchar *)(v4 + 295));
      break;
    case 0xB:
      *(uchar *)(a2 + 295) = 0;
      Function_205948c(16, 0, a3, a4);
      Function_22448fc(*(uchar *)(v4 + 294));
      *(uchar *)(v4 + 292) = 0;
      result = 12;
      *(uint *)v4 = 12;
      break;
    case 0xC:
      result = (uchar)++*(uchar *)(a2 + 292);
      if ( result > 8 )
      {
        Function_20360dc(41);
        result = 8;
        *(uint *)v4 = 8;
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (02247D28) --------------------------------------------------------
uint *__fastcall Function_2247d28(int a1, char a2, char a3)
{
  char v3;
  char v4;
  int v5;
  uint *result;

  v3 = a2;
  v4 = a3;
  v5 = malloc2(4u, 304);
  MI_CpuFill8((ushort *)v5, 0, 0x130u);
  *(uchar *)(v5 + 295) = v3;
  *(uchar *)(v5 + 294) = v4;
  *(uint *)(dword_2257740[9] + 668) = v5;
  result = AddTaskToTaskList1((int)Function_2247a8c, v5, 0x64u);
  *(uint *)(dword_2257740[9] + 652) = result;
  return result;
}

//----- (02247D78) --------------------------------------------------------
uint *__fastcall Function_2247d78(uint *a1, char a2, char a3)
{
  char v3;
  uint *v4;
  char v5;
  uint *result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  Function_224ad7c(a1, 2);
  result = (uint *)Function_203608c();
  if ( v4 == result )
    result = Function_2247d28(*(uint *)(*(uint *)(dword_2257740[9] + 64) + 8), v3, v5);
  return result;
}

//----- (02247DA4) --------------------------------------------------------
int __fastcall Function_2247da4(int a1)
{
  return Function_224ad7c(a1, 2);
}

//----- (02247DB0) --------------------------------------------------------
int __fastcall Function_2247db0(int a1, int a2)
{
  int v2;
  int result;
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;

  v2 = a2;
  result = 668;
  v4 = *(uint *)(dword_2257740[9] + 668);
  if ( v4 )
  {
    v5 = *(int **)(v4 + 276);
    if ( v5 )
    {
      Function_207136c(v5);
      *(uint *)(v4 + 276) = 0;
    }
    if ( *(uchar *)(v4 + 295) )
    {
      if ( v2 )
        Function_22448fc(*(uchar *)(v4 + 294));
    }
    Function_2247a60(v4);
    Function_2246370(15);
    Function_200ab4c(0, 1, 1);
    Function_205948c(16, v6, v7, v8);
    Call_RemoveTaskFromTaskList(*(int **)(dword_2257740[9] + 652));
    free(v4);
    *(uint *)(dword_2257740[9] + 652) = 0;
    result = 668;
    *(uint *)(dword_2257740[9] + 668) = 0;
  }
  return result;
}

//----- (02247E38) --------------------------------------------------------
uint Function_2247e38()
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  short v9;
  int v10;
  int v11;
  int v12;

  Function_200a450(*(int **)(dword_2257740[9] + 400));
  Function_200a640(*(int **)(dword_2257740[9] + 404));
  Function_20093b4(
    dword_2257740[9] + 468,
    0,
    0,
    0,
    0,
    -1,
    -1,
    0,
    0,
    *(uint *)(dword_2257740[9] + 368),
    *(uint *)(dword_2257740[9] + 372),
    *(uint *)(dword_2257740[9] + 376),
    *(uint *)(dword_2257740[9] + 380),
    0,
    0);
  v1 = *(uint *)(dword_2257740[9] + 68);
  v2 = dword_2257740[9] + 468;
  v5 = 0;
  v6 = 4096;
  v7 = 4096;
  v8 = 4096;
  v9 = 0;
  v11 = 1;
  v12 = 4;
  v3 = 0x80000;
  v4 = 344064;
  v10 = 0;
  *(uint *)(dword_2257740[9] + 504) = Function_2021aa0((uint **)&v1);
  Function_2021cf8(*(uint *)(dword_2257740[9] + 504), 2);
  Function_2021d6c(*(uint *)(dword_2257740[9] + 504), 0);
  Function_2021cc8(*(uint *)(dword_2257740[9] + 504), 1);
  Function_2021e50(*(uint *)(dword_2257740[9] + 504), 0);
  Function_2021e80(*(uint *)(dword_2257740[9] + 504), 1);
  Function_201ff0c(0x10u, 1);
  return Function_201ff74(0x10u, 1);
}

//----- (02247F4C) --------------------------------------------------------
int __fastcall Function_2247f4c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  char v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint v14;
  uint v15;
  int v16;
  int v17;
  int v18;
  uint v19;
  uint v20;
  uint v21;
  int v22;

  v22 = a4;
  v4 = a2;
  v5 = 0;
  if ( *(uchar *)(a2 + 40) )
  {
    if ( *(uchar *)(a2 + 40) != 1 )
      goto LABEL_32;
  }
  else
  {
    if ( *(uchar *)(dword_2257740[9] + 2875) == 31 )
      v6 = 4;
    else
      v6 = 2;
    *(uint *)(a2 + 32) = v6;
    *(uint *)(a2 + 36) = 0;
    *(uchar *)(a2 + 40) = 1;
  }
  Function_2004b70(2, (int)&dword_2257740[8], (int (__fastcall *)(uint, uint))Function_2246624, 0);
  ++*(uint *)(v4 + 20);
  v7 = abs(*(char *)(dword_2257740[9] + 2874));
  s32_div_f(*(uint *)(v4 + 20), 10);
  *(uchar *)(v4 + v8 + 8) = v7;
  v9 = 0;
  while ( v9 < 10 )
  {
    v10 = *(uchar *)(v4 + v9++ + 8);
    v5 += v10;
  }
  if ( v5 <= 500 )
  {
    *(uchar *)(v4 + 40) = 0;
  }
  else
  {
    ++*(uint *)(v4 + 36);
    Function_2005748(0x628u);
  }
  s32_div_f(*(uint *)(v4 + 36), 10);
  if ( v11 == 9 )
    --*(uint *)(v4 + 32);
  v12 = *(uint *)(v4 + 32);
  if ( !v12 )
  {
    *(uchar *)(v4 + 40) = 2;
    return 1;
  }
  if ( *(uchar *)(dword_2257740[9] + 2875) == 31 )
  {
    switch ( v12 )
    {
      case 2:
        v14 = 1065353216;
        break;
      case 3:
        v14 = 1069547520;
        break;
      case 4:
        v14 = 0x40000000;
        break;
      default:
        v14 = 1056964608;
        break;
    }
  }
  else if ( v12 == 2 )
  {
    v14 = 0x40000000;
  }
  else
  {
    v14 = 1069547520;
  }
  v15 = 0;
  if ( *(uint *)(v4 + 36) )
    v15 = 1;
  v16 = fmul(0x45800000u, v14);
  v19 = ffix(v16);
  v17 = fmul(0x45800000u, v14);
  v20 = ffix(v17);
  v18 = fmul(0x45800000u, v14);
  v21 = ffix(v18);
  Function_2021c70(*(uint **)(dword_2257740[9] + 504), (int *)&v19);
  Function_2021dcc(*(uint *)(dword_2257740[9] + 504), v15);
LABEL_32:
  Function_20219f8(*(uint *)(dword_2257740[9] + 68));
  return 0;
}

//----- (022480C4) --------------------------------------------------------
int __fastcall Function_22480c4(int a1, int *a2, int a3, int a4)
{
  int v4;
  int result;
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

  v4 = (int)a2;
  result = *a2;
  if ( (uint)*a2 <= 0xC )
    JUMPOUT(__CS__, *((short *)&off_22480DE + result) + 35946720);
  switch ( (uchar)result )
  {
    case 0:
      a2[1] = Function_2244c10();
      *(uint *)(v4 + 36) = 0;
      Function_2246324(0, v6, v7, v8);
      result = *(uint *)v4 + 1;
      *(uint *)v4 = result;
      break;
    case 1:
      Function_200aae0(1, 10, 0, 1, 1);
      if ( *(uchar *)(dword_2257740[9] + 2875) == 31 )
        v9 = 22;
      else
        v9 = 25;
      *(uint *)(dword_2257740[9] + 400) = Function_200985c(*(uint *)(dword_2257740[9] + 368), 50, v9, 0, 0, 1, 4);
      result = *(uint *)v4 + 1;
      *(uint *)v4 = result;
      break;
    case 2:
      *(uint *)(dword_2257740[9] + 404) = Function_20098b8(*(uint *)(dword_2257740[9] + 372), 50, 19, 0, 0, 1, 7, 4);
      result = *(uint *)v4 + 1;
      *(uint *)v4 = result;
      break;
    case 3:
      Function_200aae0(1, 0, 10, 1, 1);
      if ( *(uchar *)(dword_2257740[9] + 2875) == 31 )
        v10 = 21;
      else
        v10 = 24;
      *(uint *)(dword_2257740[9] + 408) = Function_2009918(*(uint *)(dword_2257740[9] + 376), 50, v10, 0, 0, 2u, 4);
      result = *(uint *)v4 + 1;
      *(uint *)v4 = result;
      break;
    case 4:
      if ( *(uchar *)(dword_2257740[9] + 2875) == 31 )
        v11 = 20;
      else
        v11 = 23;
      *(uint *)(dword_2257740[9] + 412) = Function_2009918(*(uint *)(dword_2257740[9] + 380), 50, v11, 0, 0, 3u, 4);
      result = *(uint *)v4 + 1;
      *(uint *)v4 = result;
      break;
    case 5:
      Function_2247e38();
      result = *(uint *)v4 + 1;
      *(uint *)v4 = result;
      break;
    case 6:
      result = a2[9] + 1;
      a2[9] = result;
      if ( result > 30 )
      {
        v12 = Function_224219c();
        Function_2253f60(v12, 76);
        GXx_SetMasterBrightness_(&REG_MASTER_BRIGHT, -4);
        *(uint *)v4 = 7;
        result = 0;
        *(uint *)(v4 + 44) = 0;
      }
      break;
    case 7:
      G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 16, 1, 14, 7);
      if ( Function_2247f4c(*(uint *)(*(uint *)(dword_2257740[9] + 64) + 8), v4, v13, v14) )
      {
        if ( *(uchar *)(v4 + 42) )
        {
          *(uint *)v4 = 11;
        }
        else
        {
          Function_20360dc(41);
          *(uint *)v4 = 8;
        }
      }
      result = *(uint *)(v4 + 44);
      if ( result < 60 )
      {
        *(uint *)(v4 + 44) = ++result;
        if ( result == 60 )
        {
          v15 = Function_224219c();
          result = Function_2254044(v15);
        }
      }
      break;
    case 8:
      v16 = Function_224219c();
      result = Function_2254044(v16);
      break;
    case 9:
      v17 = Function_203608c();
      result = Function_224839c(v17, *(uchar *)(v4 + 42));
      break;
    case 0xB:
      Function_205948c(16, (int)a2, a3, a4);
      *(uchar *)(v4 + 42) = 0;
      Function_22448fc(*(uchar *)(v4 + 41));
      *(uint *)(v4 + 36) = 0;
      result = 12;
      *(uint *)v4 = 12;
      break;
    case 0xC:
      result = a2[9] + 1;
      a2[9] = result;
      if ( result > 8 )
      {
        Function_20360dc(41);
        result = 8;
        *(uint *)v4 = 8;
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (02248318) --------------------------------------------------------
uint *__fastcall Function_2248318(int a1, char a2, char a3)
{
  char v3;
  char v4;
  int v5;
  uint *result;

  v3 = a2;
  v4 = a3;
  v5 = malloc2(4u, 48);
  MI_CpuFill8((ushort *)v5, 0, 0x30u);
  *(uchar *)(v5 + 42) = v3;
  *(uchar *)(v5 + 41) = v4;
  *(uint *)(dword_2257740[9] + 668) = v5;
  result = AddTaskToTaskList1((int)Function_22480c4, v5, 0x64u);
  *(uint *)(dword_2257740[9] + 652) = result;
  return result;
}

//----- (02248364) --------------------------------------------------------
uint *__fastcall Function_2248364(uint *a1, char a2, char a3)
{
  char v3;
  uint *v4;
  char v5;
  uint *result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  Function_224ad7c(a1, 2);
  result = (uint *)Function_203608c();
  if ( v4 == result )
    result = Function_2248318(*(uint *)(*(uint *)(dword_2257740[9] + 64) + 8), v3, v5);
  return result;
}

//----- (02248390) --------------------------------------------------------
int __fastcall Function_2248390(int a1)
{
  return Function_224ad7c(a1, 2);
}

//----- (0224839C) --------------------------------------------------------
int __fastcall Function_224839c(int a1, int a2)
{
  int result;
  int v3;
  int v4;
  int v5;
  int v6;

  result = 668;
  v3 = *(uint *)(dword_2257740[9] + 668);
  if ( v3 )
  {
    if ( *(uchar *)(v3 + 42) )
    {
      if ( a2 )
        Function_22448fc(*(uchar *)(v3 + 41));
    }
    Function_200ab4c(0, 1, 1);
    REG_BLDCNT = 0;
    GXx_SetMasterBrightness_(&REG_MASTER_BRIGHT, 0);
    Function_2246370(1);
    Function_205948c(16, v4, v5, v6);
    Call_RemoveTaskFromTaskList(*(int **)(dword_2257740[9] + 652));
    free(v3);
    *(uint *)(dword_2257740[9] + 652) = 0;
    result = 668;
    *(uint *)(dword_2257740[9] + 668) = 0;
  }
  return result;
}

//----- (02248418) --------------------------------------------------------
int __fastcall Function_2248418(int result, int *a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int v7;

  v4 = a2;
  v5 = *a2;
  switch ( (uchar)result )
  {
    case 0:
      v4[1] = Function_2244c10();
      v4[3] = 0;
      result = *v4 + 1;
      *v4 = result;
      break;
    case 1:
      Function_200aae0(1, 10, 0, 1, 1);
      result = *v4 + 1;
      *v4 = result;
      break;
    case 2:
      result = v5 + 1;
      *v4 = v5 + 1;
      break;
    case 3:
      Function_200aae0(1, 0, 10, 1, 1);
      result = *v4 + 1;
      *v4 = result;
      break;
    case 4:
      result = v5 + 1;
      *v4 = v5 + 1;
      break;
    case 5:
      result = v5 + 1;
      *v4 = v5 + 1;
      break;
    case 6:
      result = v4[3] + 1;
      v4[3] = result;
      if ( result > 30 )
      {
        v6 = Function_224219c();
        Function_2254044(v6);
        GXx_SetMasterBrightness_(&REG_MASTER_BRIGHT, -4);
        result = 7;
        *v4 = 7;
      }
      break;
    case 7:
      if ( *((uchar *)v4 + 17) )
      {
        result = 11;
        *v4 = 11;
      }
      else
      {
        Function_20360dc(41);
        result = 8;
        *v4 = 8;
      }
      break;
    case 9:
      v7 = Function_203608c();
      result = Function_22485a8(v7, *((uchar *)v4 + 17));
      break;
    case 0xB:
      Function_205948c(16, v5, a3, a4);
      *((uchar *)v4 + 17) = 0;
      Function_22448fc(*((uchar *)v4 + 16));
      v4[3] = 0;
      result = 12;
      *v4 = 12;
      break;
    case 0xC:
      result = v4[3] + 1;
      v4[3] = result;
      if ( result > 8 )
      {
        Function_20360dc(41);
        result = 8;
        *v4 = 8;
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (0224852C) --------------------------------------------------------
uint *__fastcall Function_224852c(int a1, char a2, char a3)
{
  char v3;
  char v4;
  int v5;
  uint *result;

  v3 = a2;
  v4 = a3;
  v5 = malloc2(4u, 20);
  MI_CpuFill8((ushort *)v5, 0, 0x14u);
  *(uchar *)(v5 + 17) = v3;
  *(uchar *)(v5 + 16) = v4;
  *(uint *)(dword_2257740[9] + 668) = v5;
  result = AddTaskToTaskList1((int)Function_2248418, v5, 0x64u);
  *(uint *)(dword_2257740[9] + 652) = result;
  return result;
}

//----- (02248570) --------------------------------------------------------
uint *__fastcall Function_2248570(uint *a1, char a2, char a3)
{
  char v3;
  uint *v4;
  char v5;
  uint *result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  Function_224ad7c(a1, 2);
  result = (uint *)Function_203608c();
  if ( v4 == result )
    result = Function_224852c(*(uint *)(*(uint *)(dword_2257740[9] + 64) + 8), v3, v5);
  return result;
}

//----- (0224859C) --------------------------------------------------------
int __fastcall Function_224859c(int a1)
{
  return Function_224ad7c(a1, 2);
}

//----- (022485A8) --------------------------------------------------------
int __fastcall Function_22485a8(int a1, int a2)
{
  int result;
  int v3;
  int v4;
  int v5;
  int v6;

  result = 668;
  v3 = *(uint *)(dword_2257740[9] + 668);
  if ( v3 )
  {
    if ( *(uchar *)(v3 + 17) )
    {
      if ( a2 )
        Function_22448fc(*(uchar *)(v3 + 16));
    }
    Function_200ab4c(0, 1, 1);
    REG_BLDCNT = 0;
    GXx_SetMasterBrightness_(&REG_MASTER_BRIGHT, 0);
    Function_205948c(16, v4, v5, v6);
    Call_RemoveTaskFromTaskList(*(int **)(dword_2257740[9] + 652));
    free(v3);
    *(uint *)(dword_2257740[9] + 652) = 0;
    result = 668;
    *(uint *)(dword_2257740[9] + 668) = 0;
  }
  return result;
}

//----- (02248614) --------------------------------------------------------
int __fastcall Function_2248614(int a1, uint *a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  uint v7;
  int v8;
  bool v9;
  int v11;
  int v12;
  uint *v13;
  int v14;
  int v15;
  uint v16;
  uint v17;
  uint v18;
  int v19;

  v19 = a4;
  v13 = a2;
  v16 = a2[10] << 12;
  v17 = a2[11] << 12;
  Function_2021c50(*(uint **)(dword_2257740[9] + 504), (int *)&v16);
  v16 = s32_div_f(v13[12] << 12, 10);
  v18 = v16;
  v17 = v16;
  Function_2021c70(*(uint **)(dword_2257740[9] + 504), (int *)&v16);
  Function_2021fe0(*(uint *)(dword_2257740[9] + 504), 1);
  G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 16, 1, 16 - v13[12] / 2, 16);
  v4 = v13;
  v12 = 0;
  v11 = 0;
  do
  {
    v5 = 0;
    if ( v4[5] > 0 )
    {
      v6 = 0;
      do
      {
        v7 = *(uchar *)(v4[2] + v5);
        v16 = ((v13[8] - 6 + (v7 >> 31) + __ROR4__((v7 << 28) - (v7 >> 31), 28)) << 16) + 0x8000;
        v17 = 0;
        v18 = ((v13[9] - 6 + (v7 >> 4)) << 16) + 0x8000;
        Function_20b2b2c((int *)&v16, &v15, &v14);
        v16 = v15 << 12;
        v17 = v14 << 12;
        Function_2021c50(*(uint **)(v6 + 4 * v11 + dword_2257740[9] + 508), (int *)&v16);
        ++v5;
        v6 += 4;
      }
      while ( v5 < v4[5] );
    }
    ++v4;
    v11 += 8;
    ++v12;
  }
  while ( v12 < 3 );
  v8 = v13[12] + 1;
  v9 = v13[12] - 19 < 0;
  v13[12] = v8;
  if ( !((uchar)(v9 ^ __OFSUB__(v8, 20)) | (v8 == 20)) )
    return 1;
  Function_20219f8(*(uint *)(dword_2257740[9] + 68));
  return 0;
}

//----- (02248748) --------------------------------------------------------
uint Function_2248748()
{
  int v0;
  int v1;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  short v11;
  int v12;
  int v13;
  int v14;

  Function_200a450(*(int **)(dword_2257740[9] + 416));
  Function_200a640(*(int **)(dword_2257740[9] + 420));
  Function_20093b4(
    dword_2257740[9] + 468,
    0,
    0,
    0,
    0,
    -1,
    -1,
    0,
    0,
    *(uint *)(dword_2257740[9] + 384),
    *(uint *)(dword_2257740[9] + 388),
    *(uint *)(dword_2257740[9] + 392),
    *(uint *)(dword_2257740[9] + 396),
    0,
    0);
  v0 = 0;
  v1 = 0;
  v3 = *(uint *)(dword_2257740[9] + 68);
  v4 = dword_2257740[9] + 468;
  v6 = 393216;
  v5 = 0x20000;
  v7 = 0;
  v8 = 4096;
  v9 = 4096;
  v10 = 4096;
  v11 = 0;
  v13 = 1;
  v12 = 0;
  v14 = 4;
  do
  {
    v5 = 1228800;
    v6 = 1228800;
    *(uint *)(dword_2257740[9] + v1 + 504) = Function_2021aa0((uint **)&v3);
    if ( v0 )
    {
      if ( v0 >= 9 )
        Function_2021d6c(*(uint *)(dword_2257740[9] + v1 + 504), 2u);
      else
        Function_2021d6c(*(uint *)(dword_2257740[9] + v1 + 504), 1u);
    }
    else
    {
      Function_2021cf8(*(uint *)(dword_2257740[9] + v1 + 504), 2);
      Function_2021d6c(*(uint *)(dword_2257740[9] + v1 + 504), 0);
    }
    Function_2021cc8(*(uint *)(dword_2257740[9] + v1 + 504), 1);
    Function_2021e50(*(uint *)(dword_2257740[9] + v1 + 504), 0);
    ++v0;
    v1 += 4;
  }
  while ( v0 < 25 );
  Function_201ff0c(0x10u, 1);
  return Function_201ff74(0x10u, 1);
}

//----- (02248884) --------------------------------------------------------
int __fastcall Function_2248884(int *a1, uint *a2, int a3, int a4)
{
  uint *v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int *v13;

  v4 = a2;
  v13 = a1;
  result = *a2;
  if ( *a2 <= 9u )
    JUMPOUT(__CS__, *((short *)&off_22488A0 + result) + 35948706);
  switch ( (uchar)result )
  {
    case 0:
      G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 16, 1, 14, 7);
      WIN0_X1 = -4352;
      WIN0_Y1 = 16;
      WIN_IN = WIN_IN & 0xFFC0 | 0x1F;
      WIN_OUT = WIN_OUT & 0xFFC0 | 0x3F;
      REG_DISPCNT = REG_DISPCNT & 0xFFFF1FFF | 0x2000;
      Function_20594fc();
      Function_2005748(0x54Au);
      *(uint *)(dword_2257740[9] + 68) = Function_20095c4(32, dword_2257740[9] + 72, 4, v6);
      Function_200964c(dword_2257740[9] + 72, 0, 1572864, v7);
      result = 5;
      *v4 = 5;
      break;
    case 5:
      Function_2248748();
      result = 7;
      *v4 = 7;
      break;
    case 7:
      result = Function_2248614(*(uint *)(*(uint *)(dword_2257740[9] + 64) + 8), a2, a3, a4);
      if ( result )
      {
        result = 9;
        *v4 = 9;
      }
      break;
    case 9:
      REG_DISPCNT &= 0xFFFF1FFF;
      REG_BLDCNT = 0;
      GXx_SetMasterBrightness_(&REG_MASTER_BRIGHT, 0);
      Function_200a4e4(*(int **)(dword_2257740[9] + 416));
      Function_200a6dc(*(int **)(dword_2257740[9] + 420));
      v8 = 0;
      v9 = 0;
      do
      {
        v10 = *(uint *)(dword_2257740[9] + v9 + 504);
        if ( v10 )
          Function_2021bd4(v10);
        v11 = dword_2257740[9] + v9;
        ++v8;
        v9 += 4;
        *(uint *)(v11 + 504) = 0;
      }
      while ( v8 < 25 );
      Function_2021964(*(int **)(dword_2257740[9] + 68));
      Call_RemoveTaskFromTaskList(v13);
      free((int)v4);
      *(uint *)(dword_2257740[9] + 656) = 0;
      result = Function_205948c(128, dword_2257740[9], 0, v12);
      break;
    default:
      return result;
  }
  return result;
}

//----- (022489F8) --------------------------------------------------------
int __fastcall Function_22489f8(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
  int v11;
  int result;
  int v13;
  int v14;
  int v15;

  v11 = a2;
  result = *(uint *)(dword_2257740[9] + 656);
  v13 = a3;
  v14 = a4;
  if ( !result )
  {
    v15 = malloc2(4u, 52);
    MI_CpuFill8((ushort *)v15, 0, 0x34u);
    *(uint *)v15 = 0;
    *(uint *)(v15 + 48) = 0;
    *(uint *)(v15 + 32) = v11;
    *(uint *)(v15 + 36) = v13;
    *(uint *)(v15 + 40) = v14;
    *(uint *)(v15 + 44) = a5;
    *(uint *)(v15 + 8) = a6;
    *(uint *)(v15 + 12) = a8;
    *(uint *)(v15 + 16) = a10;
    *(uint *)(v15 + 20) = a7;
    *(uint *)(v15 + 24) = a9;
    *(uint *)(v15 + 28) = a11;
    *(uint *)(dword_2257740[9] + 656) = AddTaskToTaskList1((int)Function_2248884, v15, 0x64u);
    result = Function_2059464(128);
  }
  return result;
}

//----- (02248A6C) --------------------------------------------------------
int __fastcall Function_2248a6c(int *a1, uint *a2)
{
  uint *v2;
  int *v3;
  int result;
  int v5;
  int v6;
  uint v7;

  v2 = a2;
  v3 = a1;
  if ( dword_2257740[9] )
  {
    v5 = a2[2];
    v6 = Function_2059444(a2[2]);
    if ( *v2 != 1 && v6 != -1 )
    {
      result = v2[3];
      switch ( (uchar)result )
      {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 0xD:
        case 0xE:
          return result;
        default:
          v7 = v2[1] + 1;
          v2[1] = v7;
          result = (v7 >> 31) + __ROR4__((v7 << 29) - (v7 >> 31), 29);
          if ( !result )
          {
            switch ( 0 )
            {
              case 0:
                v6 = 3;
                break;
              case 1:
                v6 = 2;
                break;
              case 2:
                v6 = 0;
                break;
              case 3:
                v6 = 1;
                break;
              default:
                break;
            }
            result = Function_2059424(v5, v6);
          }
          break;
      }
    }
    else
    {
      *(uint *)(dword_2257740[9] + 4 * v5) = 0;
      *(uint *)(dword_2257740[9] + 4 * v5 + 32) = 0;
      Call_RemoveTaskFromTaskList(v3);
      free((int)v2);
      result = Function_2058be8(v5);
    }
  }
  else
  {
    Call_RemoveTaskFromTaskList(a1);
    result = free((int)v2);
  }
  return result;
}

//----- (02248B3C) --------------------------------------------------------
int *__fastcall Function_2248b3c(int a1, int a2)
{
  int v2;
  int *result;
  int v4;
  int v5;
  int v6;

  v2 = a1;
  result = &dword_2257740[8];
  v4 = a2;
  if ( dword_2257740[9] )
  {
    result = (int *)*(uchar *)(dword_2257740[9] + 2886);
    if ( !*(uchar *)(dword_2257740[9] + 2886) )
    {
      v5 = 4 * v2;
      v6 = *(uint *)(dword_2257740[9] + 4 * v2);
      if ( !v6 )
      {
        v6 = malloc2(4u, 16);
        MI_CpuFill8((ushort *)v6, 0, 0x10u);
        *(uint *)(dword_2257740[9] + v5) = v6;
        result = AddTaskToTaskList1((int)Function_2248a6c, v6, 0x64u);
        *(uint *)(dword_2257740[9] + v5 + 32) = result;
      }
      *(uint *)(v6 + 8) = v2;
      *(uint *)(v6 + 12) = v4;
    }
  }
  return result;
}

//----- (02248B98) --------------------------------------------------------
int __fastcall Function_2248b98(int result)
{
  int v1;
  int v2;

  v1 = result;
  v2 = 4 * result;
  if ( *(uint *)(dword_2257740[9] + 4 * result) )
  {
    Function_224b040(result);
    **(uint **)(dword_2257740[9] + v2) = 1;
    *(uint *)(dword_2257740[9] + v2) = 0;
    *(uint *)(dword_2257740[9] + v2 + 32) = 0;
    result = Function_2058be8(v1);
  }
  return result;
}

//----- (02248BD0) --------------------------------------------------------
int *Function_2248bd0()
{
  int v0;
  int v1;
  int *result;

  v0 = 0;
  v1 = 0;
  do
  {
    result = *(int **)(dword_2257740[9] + v1 + 32);
    if ( result )
    {
      Call_RemoveTaskFromTaskList(result);
      free(*(uint *)(dword_2257740[9] + v1));
      *(uint *)(dword_2257740[9] + v1 + 32) = 0;
      result = (int *)dword_2257740[9];
      *(uint *)(dword_2257740[9] + v1) = 0;
    }
    ++v0;
    v1 += 4;
  }
  while ( v0 < 8 );
  return result;
}

//----- (02248C08) --------------------------------------------------------
int __fastcall Function_2248c08(int a1, short a2, short a3, uint a4, int a5, int a6, char a7)
{
  int v7;
  uint *v8;
  int v9;
  int v10;
  uint *v11;
  int v12;
  int v13;
  short v15;
  short v16;
  uint v17;
  int v18;

  v15 = a2;
  v7 = a1;
  v16 = a3;
  v17 = a4;
  v18 = malloc(a4, 36);
  MI_CpuFill8((ushort *)v18, 0, 0x24u);
  *(uint *)v18 = a5;
  if ( a5 )
  {
    *(uint *)(v18 + 4) = a6;
    *(uchar *)(v18 + 30) = a7;
    v8 = Function_20149f0(v17);
    *(uint *)(v18 + 16) = v8;
    Function_2014a40((uint)v8, 526607);
    *(uchar *)(v18 + 29) = v17;
    v11 = Function_2013a04(*(ushort *)(v7 + 16), *(uchar *)(v18 + 29));
    v12 = 0;
    if ( (int)*(ushort *)(v7 + 16) > 0 )
    {
      v13 = 0;
      do
      {
        Function_2013a90(v11, (uint *)(*(uint *)v7 + v13), v9, v10);
        ++v12;
        v13 += 8;
      }
      while ( v12 < *(ushort *)(v7 + 16) );
    }
    *(uint *)v7 = v11;
    *(uint *)(v18 + 8) = v11;
  }
  *(ushort *)(v18 + 32) = v15 + v16;
  *(uint *)(v18 + 12) = Function_200112c((uint *)v7, v15, v16, v17);
  return v18;
}

//----- (02248CA4) --------------------------------------------------------
int *__fastcall Function_2248ca4(uint a1, int *a2, int a3)
{
  int v3;
  uint v4;
  int *v5;
  int v6;
  int v7;
  int *result;
  int v9;
  int v10;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = (*(ushort *)(a3 + 20) + *(ushort *)(a3 + 22)) & 0xFFFF;
  v7 = (ushort)Function_2001504(*(uint *)(a3 + 12), 3u);
  if ( *(ushort *)(v3 + 24) != v4 || (result = (int *)*(ushort *)(v3 + 26), result != v5) )
  {
    *(ushort *)(v3 + 24) = v4;
    result = (int *)(v4 + v7);
    *(ushort *)(v3 + 26) = (ushort)v5;
    if ( (int)(v4 + v7) >= v6 && v4 <= v6 )
    {
      Function_2001504(*(uint *)(v3 + 12), 7u);
      v9 = (uchar)Function_2001504(*(uint *)(v3 + 12), 9u);
      Function_2001504(*(uint *)(v3 + 12), 8u);
      v10 = Function_2001504(*(uint *)(v3 + 12), 0x12u);
      result = Function_2014a58(*(int **)(v3 + 16), v10);
    }
  }
  return result;
}

//----- (02248D20) --------------------------------------------------------
int __fastcall Function_2248d20(uint *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;
  int v8;
  int v9;
  int v10;
  int v11;
  uint *v12;
  int v13;
  int v14;
  uint *v15;
  int v16;
  int v17;
  uint *i;
  uint *v19;
  int v20;
  ushort v21[2];
  ushort v22[2];
  int v23;

  v23 = a4;
  v4 = (int)a1;
  v19 = (uint *)a1[3];
  if ( !*a1 )
    goto LABEL_29;
  v5 = Function_2001504((int)v19, 2u);
  Function_20014dc((int)v19, v22, v21);
  if ( *(uchar *)(v4 + 28) )
  {
    Function_2248ca4(v22[0], (int *)v21[0], v4);
    if ( !(dword_21BF6C4 & 1) && !(dword_21BF6C4 & 4) )
      goto LABEL_29;
    Function_2005748(0x5DCu);
    v6 = v22[0] + v21[0];
    if ( v5 - 1 == v6 )
    {
      result = -1;
    }
    else if ( v6 == *(ushort *)(v4 + 20) + *(ushort *)(v4 + 22) )
    {
      result = -1;
    }
    else
    {
      (*(void (__fastcall **)(uint))v4)(*(uint *)(v4 + 4));
      v8 = 0;
      v9 = 0;
      for ( i = Function_2013a04(v5, *(uchar *)(v4 + 29)); v9 < v5; ++v9 )
      {
        if ( v9 != *(ushort *)(v4 + 20) + *(ushort *)(v4 + 22) )
          Function_2013a90(i, (uint *)(*(uint *)(v4 + 8) + 8 * v8), *(uint *)(v4 + 8), v10);
        ++v8;
        if ( v9 == v22[0] + v21[0] )
          Function_2013a90(
            i,
            (uint *)(*(uint *)(v4 + 8) + 8 * (*(ushort *)(v4 + 20) + *(ushort *)(v4 + 22))),
            *(ushort *)(v4 + 20),
            *(uint *)(v4 + 8));
      }
      if ( *(uchar *)(v4 + 30) )
      {
        v11 = 0;
        v20 = v5 - 1;
        if ( v5 - 1 > 0 )
        {
          v12 = i;
          v13 = 0;
          do
          {
            v12[1] = v13 + (Function_2028afc(*(uint *)(v4 + 4), v11++) == 0);
            v13 += 2;
            v12 += 2;
          }
          while ( v11 < v20 );
        }
        i[2 * v11 + 1] = 2 * v11 + 1;
      }
      else
      {
        v14 = 0;
        if ( v5 - 1 > 0 )
        {
          v15 = i;
          do
          {
            v15[1] = v14++;
            v15 += 2;
          }
          while ( v14 < v5 - 1 );
        }
      }
      free(*(uint *)(v4 + 8));
      *(uint *)(v4 + 8) = i;
      Function_20015cc(v19, (int)i);
      *(uchar *)(v4 + 28) = 0;
      Function_20013ac((int)v19);
      result = -1;
    }
  }
  else
  {
    if ( !(dword_21BF6C4 & 4) )
    {
LABEL_29:
      v16 = Function_2001288((int)v19);
      v17 = *(ushort *)(v4 + 32);
      Function_20014d0((int)v19, (ushort *)(v4 + 32));
      if ( v17 != *(ushort *)(v4 + 32) )
        Function_2005748(0x5DCu);
      if ( v16 == -2 )
      {
        Function_2005748(0x5DCu);
      }
      else if ( v16 != -1 )
      {
        Function_2005748(0x5DCu);
      }
      return v16;
    }
    Function_2005748(0x5DCu);
    if ( v5 - 1 != v22[0] + v21[0] )
    {
      *(ushort *)(v4 + 20) = v22[0];
      *(ushort *)(v4 + 22) = v21[0];
      *(ushort *)(v4 + 24) = v22[0];
      *(ushort *)(v4 + 26) = v21[0];
      *(uchar *)(v4 + 28) = 1;
    }
    result = -1;
  }
  return result;
}

//----- (02248EF8) --------------------------------------------------------
uint __fastcall Function_2248ef8(uint *a1, ushort *a2, ushort *a3)
{
  uint *v3;
  int v4;

  v3 = a1;
  Function_2001384(a1[3], a2, a3);
  if ( *v3 )
  {
    Function_2014a20(v3[4], v4);
    free(v3[2]);
  }
  return free((int)v3);
}

//----- (02248F1C) --------------------------------------------------------
int __fastcall Function_2248f1c(int result, int a2, int a3, int a4)
{
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
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  short v21;
  int v22;
  int v23;
  int v24;
  int v25;

  v25 = a4;
  v4 = a2;
  v12 = *(uint *)(a2 + 440);
  dword_2257740[10] = a2;
  v5 = *(uint *)dword_2257740[10];
  if ( *(uint *)dword_2257740[10] <= 8u )
    JUMPOUT(__CS__, (char *)&off_2248F42 + *((short *)&off_2248F42 + v5) + 2);
  switch ( (uchar)a4 )
  {
    case 0:
      Function_224944c(v12, a2 + 912);
      Function_22491cc(v4 + 4, v4 + 68);
      Function_2249724(v4 + 940);
      result = *(uint *)v4 + 1;
      *(uint *)v4 = result;
      break;
    case 1:
      Function_2249584(a2);
      Function_20093b4(
        v4 + 776,
        1000,
        1000,
        1000,
        1000,
        -1,
        -1,
        0,
        0,
        *(uint *)(v4 + 744),
        *(uint *)(v4 + 748),
        *(uint *)(v4 + 752),
        *(uint *)(v4 + 756),
        0,
        0);
      v13 = *(uint *)(v4 + 444);
      v14 = v4 + 776;
      v16 = 1179648;
      v6 = 0;
      v15 = 0x20000;
      v17 = 0;
      v18 = 4096;
      v19 = 4096;
      v20 = 4096;
      v21 = 0;
      v23 = 2;
      v22 = 0;
      v24 = 4;
      v7 = v4;
      do
      {
        *(uint *)(v7 + 812) = Function_2021aa0((uint **)&v13);
        Function_2021cc8(*(uint *)(v7 + 812), 1);
        Function_2021cac(*(uint *)(v7 + 812), 0);
        if ( !v6 )
          Function_2021d6c(*(uint *)(v7 + 812), 1u);
        ++v6;
        v7 += 4;
      }
      while ( v6 < 8 );
      v8 = 0;
      v9 = v4;
      do
      {
        *(uint *)(v9 + 844) = Function_2021aa0((uint **)&v13);
        Function_2021cc8(*(uint *)(v9 + 844), 1);
        Function_2021cac(*(uint *)(v9 + 844), 0);
        Function_2021d6c(*(uint *)(v9 + 844), 2u);
        ++v8;
        v9 += 4;
      }
      while ( v8 < 17 );
      Function_201ff74(0x10u, 1);
      result = *(uint *)v4 + 1;
      *(uint *)v4 = result;
      break;
    case 2:
      result = v5 + 1;
      *(uint *)a2 = v5 + 1;
      break;
    case 3:
      Function_201ff74(8u, 1);
      Function_201ff74(4u, 0);
      Function_201ff74(2u, 0);
      Function_201ff74(1u, 1);
      Function_201975c(4u, 0);
      result = *(uint *)v4 + 1;
      *(uint *)v4 = result;
      break;
    case 4:
      result = v5 + 1;
      *(uint *)a2 = v5 + 1;
      break;
    case 5:
      Function_2249214(*(uint *)(*(uint *)(a2 + 436) + 60), a2 + 4, a2 + 68);
      Function_22492c8(v4 + 68, v4 + 812);
      Function_2249334(v4 + 164);
      Function_224937c(v4 + 164, v4 + 844);
      Function_224966c(*(uint *)(v4 + 440), v4 + 912, v4 + 928, v4 + 932, v4 + 936, v4 + 940);
      result = Function_20219f8(*(uint *)(v4 + 444));
      break;
    case 6:
      result = Function_205da04(*(uint *)(a2 + 928) & 0xFF);
      if ( result )
      {
        result = *(uint *)v4 + 1;
        *(uint *)v4 = result;
      }
      break;
    case 7:
      Function_200a4e4(*(int **)(a2 + 760));
      Function_200a6dc(*(int **)(v4 + 764));
      v10 = 0;
      v11 = v4;
      do
      {
        Function_2009754(*(int **)(v11 + 744));
        ++v10;
        v11 += 4;
      }
      while ( v10 < 4 );
      Function_2021964(*(int **)(v4 + 444));
      Function_200e084(v4 + 912, 0);
      Function_201a8fc(v4 + 912);
      Function_2019044(v12, 7);
      Function_2249438(v12);
      Function_2249778(v4 + 940);
      result = *(uint *)v4 + 1;
      *(uint *)v4 = result;
      break;
    case 8:
      *(uint *)(*(uint *)(a2 + 436) + 108) = 0;
      result = Function_20067d0(result);
      break;
    default:
      return result;
  }
  return result;
}

//----- (022491CC) --------------------------------------------------------
uint __fastcall Function_22491cc(uint *a1, uint *a2)
{
  int *v2;
  uint *v3;
  uint *v4;
  int v5;
  uint v6;
  int v7;
  uint v8;
  uint result;
  int v10;

  v2 = &dword_2257740[11];
  v3 = a1;
  v4 = a2;
  v5 = 0;
  do
  {
    *v3 = 0;
    v3[1] = 0;
    *v4 = 0;
    v4[1] = 0;
    v4[2] = 0;
    v6 = PRNG();
    s32_div_f(v6, 500);
    *v2 = v7 + 50;
    v8 = PRNG();
    result = s32_div_f(v8, 500);
    v2[1] = v10 + 50;
    ++v5;
    v3 += 2;
    v4 += 3;
    v2 += 2;
  }
  while ( v5 < 8 );
  return result;
}

//----- (02249214) --------------------------------------------------------
int __fastcall Function_2249214(int a1, int *a2, int *a3)
{
  int *v3;
  int *v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int result;
  int v12;
  int v13;

  v3 = a2;
  v13 = a1;
  v4 = a3;
  v5 = 0;
  v6 = a2;
  do
  {
    *v6 = Function_2058ca0(v5);
    v6[1] = Function_2058cf4(v5++);
    v6 += 2;
  }
  while ( v5 < 8 );
  if ( Function_2035e38() )
  {
    v7 = Function_203608c();
    if ( Function_2035d78(v7) )
    {
      v8 = *v3;
      v9 = v3[1];
      *v3 = v3[2 * Function_203608c()];
      v3[1] = v3[2 * Function_203608c() + 1];
      v3[2 * Function_203608c()] = v8;
      v3[2 * Function_203608c() + 1] = v9;
    }
    else
    {
      *v3 = GetSpritePositionX(v13);
      v3[1] = GetSpritePositionY(v13);
    }
  }
  v10 = 0;
  do
  {
    result = Function_2242e58(*v3, v3[1]);
    if ( result )
    {
      v12 = v4[2];
      if ( v12 )
      {
        result = *v4;
        if ( *v4 >= 0 )
        {
          result = v12 - 1;
          v4[2] = v12 - 1;
        }
      }
    }
    else
    {
      *v4 = *v3 - 32;
      result = v3[1] - 64;
      v4[1] = result;
      v4[2] = 60;
    }
    ++v10;
    v3 += 2;
    v4 += 3;
  }
  while ( v10 < 8 );
  return result;
}

//----- (022492C8) --------------------------------------------------------
uint __fastcall Function_22492c8(uint *a1, uint *a2)
{
  uint *v2;
  uint *v3;
  int v4;
  uint v5;
  uint result;
  uint v7;
  uint v8;
  int v9;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    if ( v2[2] )
    {
      v7 = (s32_div_f(138 * *v2, 448) + 60) << 12;
      v5 = s32_div_f(v2[1] << 7, 416);
      v9 = 4096;
      v8 = ((v5 + 9) << 12) + 786432;
      Function_2021c50((uint *)*v3, (int *)&v7);
      result = Function_2021cac(*v3, 1);
    }
    else
    {
      result = Function_2021cac(*v3, 0);
    }
    ++v4;
    v2 += 3;
    ++v3;
  }
  while ( v4 < 8 );
  return result;
}

//----- (02249334) --------------------------------------------------------
int __fastcall Function_2249334(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;
  int result;
  int v6;

  v1 = a1;
  v2 = 0;
  do
  {
    v3 = Function_2242e78(v2);
    v4 = Function_2242ee0(v2);
    v6 = Function_2242f48(v2);
    if ( Function_2242e58(v3, v4) )
    {
      result = 0;
      *v1 = 0;
      v1[1] = 0;
    }
    else
    {
      *v1 = v3 - 32;
      v1[1] = v4 - 64;
      result = v6;
    }
    ++v2;
    v1[2] = result;
    v1 += 4;
  }
  while ( v2 < 17 );
  return result;
}

//----- (0224937C) --------------------------------------------------------
int __fastcall Function_224937c(uint *a1, uint *a2)
{
  uint *v2;
  uint *v3;
  int v4;
  uint v5;
  uint v6;
  uint v7;
  int result;
  uint v9;
  uint v10;
  int v11;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    if ( *v2 )
    {
      v9 = (s32_div_f(138 * *v2, 448) + 60) << 12;
      v5 = s32_div_f(v2[1] << 7, 416);
      v11 = 4096;
      v10 = ((v5 + 9) << 12) + 786432;
      Function_2021c50((uint *)*v3, (int *)&v9);
      v6 = v2[2];
      if ( v6 != v2[3] )
      {
        v7 = *v3;
        if ( v6 )
        {
          Function_2021d6c(v7, v6);
          Function_2021cac(*v3, 1);
        }
        else
        {
          Function_2021cac(v7, 0);
        }
      }
    }
    else
    {
      Function_2021cac(*v3, 0);
    }
    result = v2[2];
    ++v4;
    v2[3] = result;
    v2 += 4;
    ++v3;
  }
  while ( v4 < 17 );
  return result;
}

//----- (02249404) --------------------------------------------------------
int __fastcall Function_23_2249404(int a1)
{
  int v1;
  uint *v2;
  int result;

  v1 = a1;
  v2 = Function_200679c((int)Function_2248f1c, 1248, 4u, 4u);
  result = Function_201ced0((int)v2);
  *(uint *)(result + 436) = v1;
  *(uint *)(result + 440) = *(uint *)(v1 + 8);
  return result;
}

//----- (0224942C) --------------------------------------------------------
uint *__fastcall Function_23_224942c(uint *result)
{
  if ( *result == 5 )
    *result = 6;
  return result;
}

//----- (02249438) --------------------------------------------------------
int __fastcall Function_2249438(int a1)
{
  int v1;

  v1 = a1;
  Function_2019044(a1, 4);
  return Function_2019044(v1, 5);
}

//----- (0224944C) --------------------------------------------------------
ushort *__fastcall Function_224944c(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  int *v8;
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
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;

  v31 = a4;
  v4 = a1;
  v5 = a2;
  SetBrightnessWithValue(1, 0);
  Function_2249438((int)v4);
  v24 = 0;
  v25 = 0;
  v26 = 2048;
  v27 = 0;
  v28 = 17694721;
  v29 = 256;
  v30 = 0;
  Function_20183c4(v4, 4u, &v24, 0);
  Function_201ff74(1u, 0);
  v17 = 0;
  v18 = 0;
  v19 = 2048;
  v20 = 0;
  v21 = 17760257;
  v22 = 512;
  v23 = 0;
  Function_20183c4(v4, 5u, &v17, 0);
  Function_201ff74(2u, 0);
  v10 = 0;
  v11 = 0;
  v12 = 2048;
  v13 = 0;
  v14 = 851969;
  v15 = 0;
  v16 = 0;
  Function_20183c4(v4, 7u, &v10, 0);
  Function_201ff74(8u, 0);
  Function_2019ebc(v4, 7u);
  v8 = LoadFromNARC_8(28, 4u, v6, v7);
  Function_2007130((int)v8, 0, 4u, 0, 64, 4);
  Function_20070e8((int)v8, 1u, v4, 4u, 0, 5120, 0, 4);
  Function_200710c((int)v8, 2u, v4, 4u, 0, 1536, 0, 4);
  Call_FS_CloseFile(v8);
  Function_205d8cc(4u, 0);
  Function_2019690(7u, 32, 0, 4u);
  Function_205d8f4(v4, v5, 7);
  Function_201ada4_ClearTextBox(v5, 0);
  Call_LoadFromNARC_RLCN(50, 52, 4u, 320, 128, 4);
  return Function_200f338(1);
}

//----- (02249584) --------------------------------------------------------
int __fastcall Function_2249584(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int *v9;

  v4 = a1;
  *(uint *)(a1 + 444) = Function_20095c4(25, a1 + 448, 4, a4);
  v5 = 0;
  v6 = v4;
  do
  {
    *(uint *)(v6 + 744) = Function_2009714(1, v5, 4u);
    v5 = (int *)((char *)v5 + 1);
    v6 += 4;
  }
  while ( (int)v5 < 4 );
  v9 = LoadFromNARC_8(28, 4u, v7, v8);
  *(uint *)(v4 + 760) = Function_2009a4c(*(uint *)(v4 + 744), (int)v9, 4u, 0, 1000, 2, 4u);
  *(uint *)(v4 + 764) = Function_2009b04(*(uint *)(v4 + 748), (int)v9, 3u, 0, 1000, 2, 2, 4u);
  *(uint *)(v4 + 768) = Function_2009bc4(*(uint *)(v4 + 752), (int)v9, 5u, 0, 1000, 2u, 4u);
  *(uint *)(v4 + 772) = Function_2009bc4(*(uint *)(v4 + 756), (int)v9, 6u, 0, 1000, 3u, 4u);
  Call_FS_CloseFile(v9);
  Function_200a3dc(*(int **)(v4 + 760));
  return Function_200a640(*(int **)(v4 + 764));
}

//----- (0224966C) --------------------------------------------------------
int __fastcall Function_224966c(int a1, int a2, int *a3, int *a4, int *a5, int a6)
{
  int *v6;
  int *v7;
  int result;
  int v9;
  int v10;

  v10 = a2;
  v6 = a3;
  v7 = a4;
  while ( Function_2242d60(*(ushort **)(a6 + 128)) )
    Function_2249844(a6, *(uint *)(a6 + 128));
  result = *v7;
  if ( *v7 )
  {
    if ( result == 1 )
    {
      result = Function_205da04(*v6 & 0xFF);
      if ( result )
      {
        *v7 = 2;
        result = 0;
        *a5 = 0;
      }
    }
    else if ( result == 2 )
    {
      result = Function_2249900(a6);
      if ( !result )
      {
        Function_201c04c(v10, 0, 2, 0);
        Function_201a954(v10, v9);
        result = *a5 + 1;
        *a5 = result;
        if ( result >= 8 )
        {
          result = 0;
          *a5 = 0;
          *v7 = 0;
        }
      }
    }
  }
  else
  {
    result = Function_22498c4(a6);
    if ( result )
    {
      *v6 = Function_201d738_CallInitTextInterpreter(v10, 1);
      result = 1;
      *v7 = 1;
    }
  }
  return result;
}

//----- (02249724) --------------------------------------------------------
int __fastcall Function_2249724(uint *a1)
{
  uint *v1;
  int v2;
  int *v3;
  int v4;
  int result;
  int *v6;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    ++v2;
    *v3 = Function_2023790(100, 4u);
    ++v3;
  }
  while ( v2 < 32 );
  v1[35] = 0;
  v1[36] = 0;
  v1[32] = Function_2023790(100, 4u);
  v4 = 0;
  do
  {
    result = Function_2023790(80, 4u);
    v6 = v1 + 33;
    ++v4;
    ++v1;
    *v6 = result;
  }
  while ( v4 < 2 );
  return result;
}

//----- (02249778) --------------------------------------------------------
uint __fastcall Function_2249778(int *a1, int a2)
{
  int *v2;
  int v3;
  int *v4;
  int v5;
  int v6;
  uint result;

  v2 = a1;
  v3 = 0;
  v4 = a1;
  do
  {
    Function_20237bc_FreeMsg(*v4, a2);
    ++v3;
    ++v4;
  }
  while ( v3 < 32 );
  Function_20237bc_FreeMsg(v2[32], a2);
  v6 = 0;
  do
  {
    result = Function_20237bc_FreeMsg(v2[33], v5);
    ++v6;
    ++v2;
  }
  while ( v6 < 2 );
  return result;
}

//----- (022497B0) --------------------------------------------------------
int __fastcall Function_22497b0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int result;
  int v8;

  v3 = a1;
  v8 = a2;
  Function_2023df0(a2, (uchar *)(a1 + 148), 0x50u);
  v4 = 0;
  v5 = 0;
  if ( *(ushort *)(v3 + 148) != 0xFFFF )
  {
    v6 = v3;
    do
    {
      if ( *(ushort *)(v6 + 148) == 57344 )
      {
        ++v4;
        v2 = v5;
      }
      v6 += 2;
      ++v5;
    }
    while ( *(ushort *)(v6 + 148) != 0xFFFF );
  }
  if ( v4 >= 2 )
    ErrorHandler();
  if ( v4 )
  {
    *(ushort *)(v3 + 2 * v2 + 148) = -1;
    Function_2023d28(*(ushort **)(v3 + 132), (ushort *)(v3 + 148));
    Function_2023d28(*(ushort **)(v3 + 136), (ushort *)(v3 + 148 + 2 * (v2 + 1)));
    result = 2;
  }
  else
  {
    Function_2023810(*(ushort **)(v3 + 132), v8);
    result = 1;
  }
  return result;
}

//----- (02249844) --------------------------------------------------------
int __fastcall Function_2249844(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;
  int v7;
  int v8;

  v2 = a1;
  v3 = Function_22497b0(a1, a2);
  v4 = 0;
  v5 = *(uint *)(v2 + 140);
  if ( v3 <= 0 )
  {
LABEL_7:
    v8 = 0;
    if ( v3 > 0 )
    {
      v7 = v2;
      do
      {
        Function_2023810(*(ushort **)(v2 + 4 * *(uint *)(v2 + 140)), *(uint *)(v7 + 132));
        if ( ++*(uint *)(v2 + 140) == 32 )
          *(uint *)(v2 + 140) = 0;
        v7 += 4;
        ++v8;
      }
      while ( v8 < v3 );
    }
    result = 1;
  }
  else
  {
    while ( 1 )
    {
      if ( ++v5 == 32 )
        v5 = 0;
      if ( v5 == *(uint *)(v2 + 144) )
        break;
      if ( ++v4 >= v3 )
        goto LABEL_7;
    }
    result = 0;
  }
  return result;
}

//----- (022498C4) --------------------------------------------------------
int __fastcall Function_22498c4(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 144);
  if ( *(uint *)(a1 + 140) == v1 )
    return 0;
  if ( ++*(uint *)(a1 + 144) == 32 )
    *(uint *)(a1 + 144) = 0;
  return *(uint *)(a1 + 4 * v1);
}

//----- (02249900) --------------------------------------------------------
BOOL __fastcall Function_2249900(int a1)
{
  return *(uint *)(a1 + 140) == *(uint *)(a1 + 144);
}

//----- (02249918) --------------------------------------------------------
int Function_23_2249918()
{
  return 120;
}

//----- (0224991C) --------------------------------------------------------
int __fastcall Function_23_224991c(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int result;

  v4 = a1;
  Function_20361bc(a1, a2, a3, a4);
  v5 = 0;
  v6 = (int)(v4 + 6);
  result = 0;
  do
  {
    *(uchar *)(v6 + 10) = 0;
    *(uint *)(v6 + 4) = 0;
    ++v5;
    v6 += 12;
  }
  while ( v5 < 8 );
  return result;
}

//----- (02249938) --------------------------------------------------------
void Function_23_2249938()
{
  ;
}

//----- (0224993C) --------------------------------------------------------
int __fastcall Function_224993c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 8 )
    ErrorHandler();
  return v3 + 24 + 12 * v2;
}

//----- (02249954) --------------------------------------------------------
int __fastcall Function_2249954(int a1)
{
  int v1;
  int result;
  int v3;

  v1 = 0;
  result = a1 + 24;
  do
  {
    v3 = *(uint *)(result + 4);
    if ( v3 > 0 )
      *(uint *)(result + 4) = v3 - 1;
    if ( !*(uint *)(result + 4) )
      *(uchar *)(result + 10) = 0;
    ++v1;
    result += 12;
  }
  while ( v1 < 8 );
  return result;
}

//----- (02249978) --------------------------------------------------------
int __fastcall Function_2249978(int result, int a2)
{
  *(uchar *)(result + 10) = a2;
  *(uint *)(result + 4) = dword_2257580[a2];
  *(uint *)result = dword_225759C[a2];
  return result;
}

//----- (02249994) --------------------------------------------------------
int __fastcall Function_2249994(int result, int a2)
{
  return Function_2249978(result, a2);
}

//----- (0224999C) --------------------------------------------------------
BOOL __fastcall Function_224999c(int a1)
{
  return *(uchar *)(a1 + 10) == 0;
}

//----- (022499AC) --------------------------------------------------------
BOOL __fastcall Function_22499ac(int a1)
{
  int v1;

  v1 = *(uchar *)(a1 + 10);
  switch ( v1 )
  {
    case 2:
      return 0;
    case 5:
      return 0;
    case 3:
      return 1;
    case 1:
      return 1;
    case 4:
      return 1;
  }
  return v1 == 0;
}

//----- (022499E4) --------------------------------------------------------
void Function_22499e4()
{
  ;
}

//----- (022499E8) --------------------------------------------------------
int __fastcall Function_23_22499e8(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  result = Function_205964c();
  if ( !result )
  {
    v3 = GetOverWorldData_VariableAreaAdresses(v1);
    Function_2036794(v3);
    Function_205965c(v1);
    v4 = Function_205964c();
    Function_2017fc8(3, 33, 59392);
    v5 = LoadFlagAdress(*(uint *)(*(uint *)(v4 + 24) + 12));
    result = Function_206addc(v5);
    if ( !result )
      result = Function_2036894();
  }
  return result;
}

//----- (02249A2C) --------------------------------------------------------
int Function_23_2249a2c()
{
  int v0;
  int v1;
  int v2;

  v0 = Function_205964c();
  v1 = v0;
  *(uchar *)(v0 + 65) = 1;
  v2 = LoadVariableAreaAdress_14(*(uint *)(*(uint *)(v0 + 24) + 12));
  Function_202cfec(v2, 36);
  Function_2242bc0(*(uint *)(v1 + 24));
  return Function_2249c24(Function_2249c34, 0);
}

//----- (02249A5C) --------------------------------------------------------
int Function_23_2249a5c()
{
  int result;

  result = Function_205964c();
  if ( result )
    result = Function_2249c24(Function_224a1a0, 3);
  return result;
}

//----- (02249A74) --------------------------------------------------------
int Function_2249a74()
{
  Function_2036884();
  return Function_2249c24(Function_224a02c, 0);
}

//----- (02249A88) --------------------------------------------------------
int Function_2249a88()
{
  int result;

  result = Function_2033dfc();
  if ( !result )
  {
    Function_224c198();
    result = Function_2249c24(Function_2249c34, 0);
  }
  return result;
}

//----- (02249AA4) --------------------------------------------------------
int Function_2249aa4()
{
  Function_20368a4();
  return Function_2249c24(Function_2249a88, 0);
}

//----- (02249AB8) --------------------------------------------------------
int __fastcall Function_2249ab8(int a1, int a2, int a3, int a4)
{
  int (*v4)();
  char *v5;
  int result;
  uint v7;
  char v8;
  int (*v9)();
  int (*v10)();
  int (*v11)();
  int v12;

  v12 = a4;
  v4 = *(int (**)())(Function_205964c() + 52);
  v5 = &v8;
  *(uint *)&v8 = Function_2249e84;
  v9 = Function_224a0cc;
  v10 = Function_224a138;
  v11 = Function_224a16c;
  if ( v4 == Function_2249e18 )
  {
    Function_2249c24(Function_2249e84, 0);
    result = 1;
  }
  else if ( Function_224a09c == v4 )
  {
    Function_2249c24(Function_224a0cc, 0);
    result = 1;
  }
  else if ( Function_2249ce4 == v4 )
  {
    Function_2249c24(Function_224a138, 0);
    result = 1;
  }
  else if ( Function_224a024 == v4 )
  {
    Function_2249c24(Function_224a16c, 0);
    result = 1;
  }
  else
  {
    v7 = 0;
    do
    {
      if ( v4 == *(int (**)())v5 )
        return 1;
      ++v7;
      v5 += 4;
    }
    while ( v7 < 4 );
    result = 0;
  }
  return result;
}

//----- (02249B60) --------------------------------------------------------
int Function_2249b60()
{
  int (*v0)();
  int result;

  v0 = *(int (**)())(Function_205964c() + 52);
  if ( v0 == Function_2249e98 )
  {
    Function_2249c24(Function_2249ea0, 0);
    result = 1;
  }
  else if ( Function_224a0e0 == v0 )
  {
    Function_2249c24(Function_224a0e8, 0);
    result = 1;
  }
  else if ( Function_224a14c == v0 )
  {
    Function_2249c24(Function_224a150, 0);
    result = 1;
  }
  else if ( Function_224a180 == v0 )
  {
    Function_2249c24(Function_224a184, 0);
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}

//----- (02249BD4) --------------------------------------------------------
int Function_2249bd4()
{
  void **v0;
  int v1;
  int *v2;
  int v3;
  void *v4;
  void *v5;
  int *v7;
  int v8;

  v0 = &off_2256808;
  v1 = Function_205964c();
  v2 = &v8;
  v3 = 6;
  do
  {
    v4 = *v0;
    v5 = v0[1];
    v0 += 2;
    *v2 = (int)v4;
    v2[1] = (int)v5;
    v2 += 2;
    --v3;
  }
  while ( v3 );
  *v2 = (int)*v0;
  if ( !v1 )
    return 0;
  if ( !v8 )
    return 0;
  v7 = &v8;
  while ( *(uint *)(v1 + 52) != *v7 )
  {
    ++v7;
    if ( !*v7 )
      return 0;
  }
  return 1;
}

//----- (02249C24) --------------------------------------------------------
int __fastcall Function_2249c24(int a1, short a2)
{
  int v2;
  short v3;
  int result;

  v2 = a1;
  v3 = a2;
  result = Function_205964c();
  *(uint *)(result + 52) = v2;
  *(ushort *)(result + 60) = v3;
  return result;
}

//----- (02249C34) --------------------------------------------------------
int Function_2249c34()
{
  int v0;
  int v1;
  int v2;
  int result;
  int v4;
  int v5;
  int v6;

  v0 = Function_205964c();
  v1 = v0;
  v2 = *(ushort *)(v0 + 60);
  if ( v2 )
  {
    result = v2 - 1;
    *(ushort *)(v1 + 60) = result;
  }
  else
  {
    result = Function_2035e38();
    if ( result )
    {
      v4 = *(uint *)(v1 + 24);
      Function_2242d44();
      Function_2032ac0();
      Function_2057ae4(0);
      v5 = Function_2243af0();
      Function_224c21c(v5);
      v6 = LoadFlagAdress(*(uint *)(*(uint *)(v1 + 24) + 12));
      if ( Function_206addc(v6) )
      {
        Function_2059524();
        result = Function_2249c24((int)Function_2249cc4, 24);
      }
      else
      {
        result = Function_2249c24((int)Function_2249c98, 0);
      }
    }
  }
  return result;
}

//----- (02249C98) --------------------------------------------------------
int Function_2249c98()
{
  int v0;
  int v1;
  int result;

  v0 = Function_205964c();
  v1 = LoadFlagAdress(*(uint *)(*(uint *)(v0 + 24) + 12));
  result = Function_206addc(v1);
  if ( result )
  {
    Function_20367f0();
    Function_2059524();
    result = Function_2249c24((int)Function_2249ce4, 24);
  }
  return result;
}

//----- (02249CC4) --------------------------------------------------------
int Function_2249cc4()
{
  int result;

  result = Function_205964c();
  if ( !*(ushort *)(result + 60) )
    return Function_2249c24((int)Function_2249ce4, 24);
  --*(ushort *)(result + 60);
  return result;
}

//----- (02249CE4) --------------------------------------------------------
int Function_2249ce4()
{
  int result;

  Function_2242b14();
  Function_2059524();
  result = Function_2036834();
  if ( result )
  {
    if ( Function_203608c() )
    {
      result = Function_2249c24((int)Function_2249d20, 120);
    }
    else
    {
      Function_224b598();
      result = Function_2249c24((int)Function_2249dbc, 60);
    }
  }
  return result;
}

//----- (02249D20) --------------------------------------------------------
int Function_2249d20()
{
  int v0;
  int v1;
  int v2;
  int result;
  int v4;

  v0 = Function_205964c();
  v1 = v0;
  v2 = *(ushort *)(v0 + 60);
  if ( v2 )
    *(ushort *)(v1 + 60) = v2 - 1;
  if ( Function_2033e68() || Function_20360f0() || !*(ushort *)(v1 + 60) )
  {
    Function_20367f0();
    result = Function_2249c24((int)Function_2249ffc, 0);
  }
  else
  {
    v4 = Function_203608c();
    result = Function_2035d78(v4);
    if ( result )
    {
      if ( !*(ushort *)(v1 + 60) || (--*(ushort *)(v1 + 60), result = Function_2035b54(), result == 264) )
      {
        Function_224321c();
        Function_20579bc(0);
        Function_224546c(0);
        Function_2244858(0);
        Function_2032d98(0);
        Function_2057db8(0, 0, 0);
        Function_2059570();
        result = Function_2249c24((int)Function_2249ebc, 10);
      }
    }
  }
  return result;
}

//----- (02249DBC) --------------------------------------------------------
int Function_2249dbc()
{
  int v0;
  int result;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v0 = Function_205964c();
  Function_2242b14();
  if ( *(ushort *)(v0 + 60) )
    --*(ushort *)(v0 + 60);
  if ( Function_20360e8() || (result = *(ushort *)(v0 + 60), !*(ushort *)(v0 + 60)) )
  {
    if ( Function_224321c() )
      Function_2059514();
    Function_22499e4();
    v2 = Function_2057ae4(0);
    v3 = Function_224aab0(v2);
    v4 = Function_224c21c(v3);
    Function_2243360(v4, v5, v6, v7);
    result = Function_2249c24((int)Function_2249e18, 0);
  }
  return result;
}

//----- (02249E18) --------------------------------------------------------
int Function_2249e18()
{
  int v0;
  int result;
  int v2;
  int v3;
  int v4;
  int v5;

  v0 = Function_205964c();
  Function_2242b14();
  result = *(uint *)(*(uint *)(v0 + 24) + 16);
  if ( !result )
  {
    if ( Function_20360f0()
      || !Function_2033e48()
      || (v2 = Function_203608c(), (result = Function_2035d78(v2)) == 0) && (result = Function_2036180()) == 0 )
    {
      v3 = Function_224b5cc(0);
      v4 = Function_224aa84(v3);
      Function_224da8c(v4);
      Function_20360dc(43);
      v5 = Function_203608c();
      Function_2244858(v5);
      Function_224321c();
      Function_2036824();
      result = Function_2249c24((int)Function_2249fb4, 0);
    }
  }
  return result;
}

//----- (02249E84) --------------------------------------------------------
int Function_2249e84()
{
  Function_205764c();
  return Function_2249c24((int)Function_2249e98, 0);
}

//----- (02249E98) --------------------------------------------------------
int Function_2249e98()
{
  return Function_2242b14();
}

//----- (02249EA0) --------------------------------------------------------
int Function_2249ea0()
{
  int v0;

  v0 = Function_205964c();
  Function_224c198(v0);
  Function_20576a0();
  return Function_2249c24((int)Function_2249e18, 0);
}

//----- (02249EBC) --------------------------------------------------------
int Function_2249ebc()
{
  int v0;
  int v1;
  int v2;
  int v3;
  int v4;
  int result;
  int v6;

  v0 = Function_205964c();
  if ( *(ushort *)(v0 + 60) == 9 )
  {
    v1 = Function_2032ac0();
    Function_2243360(v1, v2, v3, v4);
  }
  if ( *(ushort *)(v0 + 60) == 1 )
    Function_2057b14(0);
  if ( *(ushort *)(v0 + 60) )
  {
    result = *(ushort *)(v0 + 60) - 1;
    *(ushort *)(v0 + 60) = result;
  }
  else if ( Function_2032bdc() )
  {
    Function_22499e4();
    Function_224aab0(v6);
    result = Function_2249c24((int)Function_2249f14, 200);
  }
  else
  {
    result = Function_224a09c();
  }
  return result;
}

//----- (02249F14) --------------------------------------------------------
int Function_2249f14()
{
  int v0;
  int result;

  v0 = Function_205964c();
  if ( Function_224ac3c() )
  {
    Function_2243af0();
    result = Function_2249c24((int)Function_2249f4c, 0);
  }
  else
  {
    Function_224a09c();
    if ( *(ushort *)(v0 + 60) )
    {
      result = *(ushort *)(v0 + 60) - 1;
      *(ushort *)(v0 + 60) = result;
    }
    else
    {
      result = Function_224a064();
    }
  }
  return result;
}

//----- (02249F4C) --------------------------------------------------------
int Function_2249f4c()
{
  int v0;

  if ( !Function_224404c() )
    return Function_224a09c();
  Function_22499e4();
  v0 = Function_2244068();
  Function_224c21c(v0);
  return Function_2249c24((int)Function_2249f7c, 0);
}

//----- (02249F7C) --------------------------------------------------------
int Function_2249f7c()
{
  if ( !Function_224c420() )
    return Function_224a09c();
  Function_22499e4();
  Function_224c434();
  Function_2057ae4(1);
  Function_20360dc(31);
  return Function_2249c24((int)Function_224a09c, 0);
}

//----- (02249FB4) --------------------------------------------------------
int Function_2249fb4()
{
  int result;

  result = Function_2036180();
  if ( result )
  {
    Function_2059058(0, 0);
    result = Function_2249c24((int)Function_2249fd4, 30);
  }
  return result;
}

//----- (02249FD4) --------------------------------------------------------
int Function_2249fd4()
{
  int result;

  result = Function_205964c();
  if ( *(ushort *)(result + 60) )
  {
    --*(ushort *)(result + 60);
  }
  else
  {
    result = Function_203608c();
    if ( !result )
      result = Function_2249c24((int)Function_2249c34, 0);
  }
  return result;
}

//----- (02249FFC) --------------------------------------------------------
int Function_2249ffc()
{
  int result;

  result = Function_205964c();
  if ( *(ushort *)(result + 60) )
  {
    --*(ushort *)(result + 60);
  }
  else
  {
    result = Function_203608c();
    if ( !result )
      result = Function_2249c24((int)Function_2249c34, 0);
  }
  return result;
}

//----- (0224A024) --------------------------------------------------------
int Function_224a024()
{
  return Function_2242b14();
}

//----- (0224A02C) --------------------------------------------------------
int Function_224a02c()
{
  int v0;
  int result;
  int v2;
  int v3;

  v0 = Function_205964c();
  result = Function_203608c();
  if ( !result )
  {
    v2 = *(uint *)(v0 + 24);
    Function_2242d44();
    Function_2032ac0();
    Function_2057ae4(0);
    v3 = Function_2243af0();
    Function_224c21c(v3);
    result = Function_2249c24((int)Function_224a024, 0);
  }
  return result;
}

//----- (0224A064) --------------------------------------------------------
int Function_224a064()
{
  int v0;
  int v1;
  int v2;

  v0 = Function_203608c();
  Function_2244858(v0);
  v1 = Function_203608c();
  Function_224d9ac(v1, 1);
  Function_224160c();
  Function_20578b0();
  Function_224321c();
  v2 = Function_20367f0();
  Function_224ac4c(v2);
  return Function_2249c24((int)Function_2249ffc, 0);
}

//----- (0224A09C) --------------------------------------------------------
int Function_224a09c()
{
  int v0;
  int result;

  v0 = Function_205964c();
  Function_2242b14();
  Function_2059524();
  result = *(uint *)(*(uint *)(v0 + 24) + 16);
  if ( !result )
  {
    if ( Function_2033e68() || (result = Function_20360f0()) != 0 )
      result = Function_224a064();
  }
  return result;
}

//----- (0224A0CC) --------------------------------------------------------
int Function_224a0cc()
{
  Function_205764c();
  return Function_2249c24((int)Function_224a0e0, 0);
}

//----- (0224A0E0) --------------------------------------------------------
int Function_224a0e0()
{
  return Function_224dab4();
}

//----- (0224A0E8) --------------------------------------------------------
int Function_224a0e8()
{
  int v0;
  BOOL v1;
  int v2;

  v0 = Function_205964c();
  Function_224c198(v0);
  Function_20576a0();
  v1 = Function_2033e68();
  if ( !v1 )
  {
    v1 = Function_20360f0();
    if ( !v1 )
      return Function_2249c24((int)Function_224a09c, 0);
  }
  Function_224b518(v1);
  Function_20578b0();
  Function_224321c();
  v2 = Function_20367f0();
  Function_224ac4c(v2);
  return Function_2249c24((int)Function_2249ffc, 0);
}

//----- (0224A138) --------------------------------------------------------
int Function_224a138()
{
  Function_205764c();
  return Function_2249c24((int)Function_224a14c, 0);
}

//----- (0224A14C) --------------------------------------------------------
void Function_224a14c()
{
  ;
}

//----- (0224A150) --------------------------------------------------------
int Function_224a150()
{
  int v0;

  v0 = Function_205964c();
  Function_224c198(v0);
  Function_20576a0();
  return Function_2249c24((int)Function_2249ce4, 0);
}

//----- (0224A16C) --------------------------------------------------------
int Function_224a16c()
{
  Function_224a1d0();
  return Function_2249c24((int)Function_224a180, 0);
}

//----- (0224A180) --------------------------------------------------------
void Function_224a180()
{
  ;
}

//----- (0224A184) --------------------------------------------------------
int Function_224a184()
{
  int v0;

  v0 = Function_205964c();
  Function_224c198(v0);
  Function_20576a0();
  return Function_2249c24((int)Function_224a024, 0);
}

//----- (0224A1A0) --------------------------------------------------------
int *Function_224a1a0()
{
  int v0;
  int v1;
  int v2;
  int *result;

  v0 = Function_205964c();
  v1 = v0;
  v2 = *(ushort *)(v0 + 60);
  if ( v2 )
  {
    result = (int *)(v2 - 1);
    *(ushort *)(v1 + 60) = (ushort)result;
  }
  else
  {
    Function_2242d08();
    Function_20367d0();
    Function_201807c(33);
    *(uchar *)(v1 + 65) = 0;
    result = Function_20596bc();
  }
  return result;
}

//----- (0224A1D0) --------------------------------------------------------
int Function_224a1d0()
{
  int result;
  int v1;
  int v2;

  result = Function_2057518();
  v1 = result;
  if ( result )
  {
    v2 = 0;
    do
    {
      Function_2057db8((uchar)v2, 0, 0);
      Function_20593b4(v2++);
    }
    while ( v2 < 8 );
    result = 701;
    *(uchar *)(v1 + 701) = 1;
  }
  return result;
}

//----- (0224A204) --------------------------------------------------------
int __fastcall Function_224a204(int a1)
{
  int v1;
  int *v2;
  int result;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v1 = a1;
  v2 = (int *)Function_2057518();
  if ( v1 != Function_203608c() )
    return Function_23_224ae60(v1);
  result = v2[v1 + 164];
  if ( result )
  {
    v4 = LoadVariableAreaAdress_14(*(uint *)(v2[21] + 12));
    Function_202cfec(v4, 28);
    v5 = v2[163];
    if ( v5 )
      free(v5);
    v6 = 4;
    v7 = (int)(v2 + 4);
    do
    {
      --v6;
      *(uint *)(v7 + 636) = *(uint *)(v7 + 632);
      v7 -= 4;
    }
    while ( v6 >= 1 );
    v2[159] = v2[v1 + 164];
    v8 = GetOverWorldData_VariableAreaAdresses(v2[21]);
    v9 = LoadVariableAreaAdress_c(v8);
    Function_2028830(v9, v2[v1 + 164]);
    v2[v1 + 164] = 0;
    result = 362;
    *((ushort *)v2 + 17 * v1 + 181) = 255;
  }
  return result;
}

//----- (0224A294) --------------------------------------------------------
int __fastcall Function_224a294(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v2 = a1;
  v3 = a2;
  v4 = Function_2057518();
  v5 = 4 * v2;
  if ( *(uint *)(v4 + 4 * v2 + 656) )
    return 0;
  v6 = v4 + 4 * v3;
  v7 = *(uint *)(v6 + 656);
  if ( !v7 )
    return 0;
  *(uint *)(v4 + 656 + v5) = v7;
  *(uint *)(v6 + 656) = 0;
  *(uchar *)(v4 + v2 + 250) = 1;
  *(uchar *)(v4 + v3 + 250) = 0;
  *(ushort *)(v4 + 34 * v2 + 362) = v2;
  *(ushort *)(v4 + 34 * v3 + 362) = 255;
  CopyTrainerData(*(uint *)(v4 + 656 + v5), v4 + 330 + 34 * v2);
  return 1;
}

//----- (0224A300) --------------------------------------------------------
int Function_224a300()
{
  return Function_2059514();
}

//----- (0224A308) --------------------------------------------------------
int Function_224a308()
{
  return Function_2059514();
}

//----- (0224A310) --------------------------------------------------------
int __fastcall Function_224a310(int a1, int a2, int a3)
{
  return Function_205948c(2, a2, a3, (int)Function_205948c);
}

//----- (0224A31C) --------------------------------------------------------
int __fastcall Function_224a31c(int a1, int a2, int a3)
{
  return Function_205948c(32, a2, a3, (int)Function_205948c);
}

//----- (0224A328) --------------------------------------------------------
int __fastcall Function_224a328(int a1, int a2, int a3)
{
  return Function_205948c(1, a2, a3, (int)Function_205948c);
}

//----- (0224A334) --------------------------------------------------------
int Function_224a334()
{
  int result;

  result = Function_2057518();
  if ( result )
    *(uchar *)(result + 696) = 0;
  return result;
}

//----- (0224A348) --------------------------------------------------------
int __fastcall Function_224a348(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  uchar v6;
  char v7;
  int v8;

  v8 = a4;
  v4 = a1;
  v6 = 2;
  v7 = a1;
  if ( *(uchar *)(Function_2057518() + a1 + 226) && !Function_224acc0(v4) )
  {
    if ( Function_224aea4(v4) )
      v6 = 3;
    else
      v6 = 1;
  }
  result = Function_2035ac4(29, (int)&v6, 2);
  if ( result )
  {
    result = v6;
    if ( v6 != 2 )
      result = Function_2059058(v4, 0);
  }
  return result;
}

//----- (0224A3A8) --------------------------------------------------------
int __fastcall Function_224a3a8(int a1, int a2, uchar *a3)
{
  uchar *v3;
  int v4;
  int result;

  v3 = a3;
  v4 = Function_2057518();
  result = Function_2035ee0();
  if ( result )
  {
    if ( *v3 != 1 || v3[1] != Function_203608c() )
    {
      result = *v3;
      if ( result == 3 )
      {
        result = Function_203608c();
        if ( v3[1] == result )
        {
          result = 696;
          if ( !*(uchar *)(v4 + 696) )
          {
            *(uchar *)(v4 + 696) = 1;
            result = Function_2250a50(Function_224a334, *(uint *)(v4 + 84));
          }
        }
      }
    }
    else
    {
      result = 696;
      if ( !*(uchar *)(v4 + 696) )
      {
        *(uchar *)(v4 + 696) = 1;
        result = Function_224f758(Function_224a334, *(uint *)(v4 + 84));
      }
    }
  }
  return result;
}

//----- (0224A410) --------------------------------------------------------
uchar *__fastcall Function_224a410(int a1, int a2, uchar *a3)
{
  uchar *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  short v9;
  short v10;
  int v11;
  int v12;
  uchar *result;

  v3 = a3;
  v4 = Function_2057518();
  v5 = LoadFlagAdress(*(uint *)(*(uint *)(v4 + 84) + 12));
  if ( v3[1] >= 8u )
    ErrorHandler();
  if ( *v3 == 4 && v3[1] == Function_203608c() )
  {
    Function_20594fc();
    v6 = Function_224219c();
    Function_2253f40(v6, 72);
  }
  if ( *v3 == 1 )
    Function_2058fe4(v3[1], v3[2]);
  if ( *v3 == 1 && v3[1] == Function_203608c() )
  {
    Function_224dcb8(v3[2], Function_224a334, *(uint *)(v4 + 84));
    *(uchar *)(v4 + 88) = v3[1] & 0xF | *(uchar *)(v4 + 88) & 0xF0;
    *(uchar *)(v4 + 88) = 16 * v3[2] | *(uchar *)(v4 + 88) & 0xF;
    *(uchar *)(v4 + 89) &= 0xFEu;
    *(uchar *)(v4 + 89) &= 0xFDu;
    if ( !*(uchar *)(v4 + v3[2] + 90) )
    {
      v7 = GetOverWorldData_VariableAreaAdresses(*(uint *)(v4 + 84));
      v8 = Function_20298a0(v7);
      Function_20294f4(v8);
      v9 = Function_206b354(v5);
      Function_206b364(v5, v9 + 1);
      v10 = Function_206b374(v5);
      Function_206b384(v5, v10 + 1);
      ++*(uchar *)(v4 + 90 + v3[2]);
    }
  }
  if ( *v3 == 1 )
  {
    v11 = v3[2];
    if ( v11 == Function_203608c() )
      Function_224f07c(v11, v3[1], *(uint *)(v4 + 84));
  }
  if ( *v3 == 2 && v3[1] == Function_203608c() )
  {
    Function_20594fc();
    v12 = Function_224219c();
    Function_2253f40(v12, 2);
  }
  result = (uchar *)*v3;
  if ( result == (uchar *)1 )
    result = Function_224300c((uchar *)v3[1], v3[2]);
  return result;
}

//----- (0224A56C) --------------------------------------------------------
int Function_224a56c()
{
  return 3;
}

//----- (0224A570) --------------------------------------------------------
char *__fastcall Function_224a570(int a1, int a2, uchar *a3, int a4)
{
  int v4;
  char *result;
  char v6;
  char v7;
  int v8;

  v8 = a4;
  v4 = a1;
  result = &v6;
  v7 = v4;
  if ( *a3 )
  {
    if ( *a3 == 3 )
    {
      v6 = 3;
      Function_2035b48(85, (int)&v6);
      result = (char *)Function_2059058(v4, 0);
    }
  }
  else
  {
    v6 = 0;
    result = (char *)Function_2035b48(85, (int)&v6);
  }
  return result;
}

//----- (0224A5B0) --------------------------------------------------------
int Function_224a5b0()
{
  int v0;
  int v1;
  int v2;
  int v3;
  int v4;

  v0 = Function_203608c();
  Function_224b040(v0);
  v1 = Function_22421ac();
  Function_2254044(v1);
  return Function_205948c(4, v2, v3, v4);
}

//----- (0224A5CC) --------------------------------------------------------
int __fastcall Function_224a5cc(int *a1, int *a2)
{
  int *v2;
  int *v3;
  int v4;
  int v5;
  int result;
  int v7;

  v2 = a2;
  v3 = a1;
  v7 = Function_2057518();
  v4 = 0;
  v5 = v2[1] & 0xFF;
  if ( Function_2035d78(v5) )
  {
    result = *v2 + 1;
    *v2 = result;
    if ( result > 60 )
      v4 = 1;
    if ( v4 )
    {
      *(uchar *)(v7 + v5 + 234) = 1;
      free((int)v2);
      result = Call_RemoveTaskFromTaskList(v3);
    }
  }
  else
  {
    free((int)v2);
    result = Call_RemoveTaskFromTaskList(v3);
  }
  return result;
}

//----- (0224A620) --------------------------------------------------------
int __fastcall Function_224a620(int a1)
{
  int v1;
  int v2;
  uint *v3;

  v1 = a1;
  v2 = Function_2057518();
  v3 = (uint *)malloc(0xBu, 8);
  *v3 = 0;
  v3[1] = v1;
  *(uchar *)(v2 + v1 + 234) = 0;
  AddTaskToTaskList1((int)Function_224a5cc, (int)v3, 0x64u);
  return Function_2059058(v1, 0);
}

//----- (0224A658) --------------------------------------------------------
int __fastcall Function_224a658(int a1, int a2, char a3, int a4)
{
  int v4;
  int v5;
  int v7;

  v7 = a4;
  v4 = a2;
  v5 = a1;
  if ( a3 & 1 )
  {
    LOBYTE(v7) = 11;
  }
  else if ( Function_224aea4(a1) )
  {
    LOBYTE(v7) = 11;
  }
  else
  {
    if ( v4 == 255 )
      return 0;
    if ( !Function_224aea4(v4) )
      return 0;
    LOBYTE(v7) = 5;
    Function_224a620(v4);
  }
  BYTE1(v7) = v5;
  BYTE2(v7) = v4;
  Function_2059058(v5, 0);
  Function_2035b48(85, (int)&v7);
  return 1;
}

//----- (0224A6B8) --------------------------------------------------------
int __fastcall Function_224a6b8(int a1, int a2, int a3, int a4)
{
  char v4;
  char v6;
  char v7;
  int v8;

  v8 = a4;
  v4 = a1;
  if ( !Function_224aea4(a1) )
    return 0;
  v6 = 12;
  v7 = v4;
  Function_2035b48(85, (int)&v6);
  return 1;
}

//----- (0224A6E4) --------------------------------------------------------
int __fastcall Function_224a6e4(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v2 = a1;
  v3 = a2;
  v4 = Function_2057518();
  Function_224321c();
  Function_2057fc4(0);
  Function_2059464(4);
  v5 = Function_22421ac();
  v6 = Function_2032ee8(*(uchar *)(v2 + 1));
  Function_2254068(v5, v6);
  if ( v3 )
  {
    *(uchar *)(v4 + Function_203608c() + 250) = 0;
    v7 = Function_203608c();
    Function_224b040(v7);
    v8 = Function_203608c();
    Function_224b00c(v8);
    v9 = Function_22421ac();
    Function_2253f40(v9, 10);
  }
  else
  {
    v10 = Function_22421ac();
    Function_2253f40(v10, 11);
  }
  Function_200502c(4, 0x424u, 60, 0, 255);
  return Function_2005748(0x5F6u);
}

//----- (0224A77C) --------------------------------------------------------
int __fastcall Function_224a77c(int a1, int a2, uchar *a3, int a4)
{
  uchar *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int result;
  int v10;
  bool v11;
  int v12;
  ushort *v13;
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
  int v26;
  ushort *v27;
  int v28;
  uchar v29;
  int v30;

  v30 = a4;
  v4 = a3;
  v5 = Function_2057518();
  v6 = v5;
  v7 = GetOverWorldData_VariableAreaAdresses(*(uint *)(v5 + 84));
  v8 = Function_20298a0(v7);
  result = *v4;
  if ( result > 5 )
  {
    if ( result <= 12 && result >= 11 )
    {
      if ( result == 11 )
      {
        result = Function_203608c();
        if ( v4[1] == result )
        {
          Function_2059464(2);
          v18 = Function_22421ac();
          result = Function_2253f40(v18, 6);
        }
      }
      else if ( result == 12 )
      {
        result = Function_203608c();
        if ( v4[1] == result )
        {
          Function_2059464(32);
          v19 = Function_22421ac();
          result = Function_2253f40(v19, 5);
        }
      }
    }
  }
  else if ( *v4 )
  {
    if ( result == 3 )
    {
      *(uchar *)(v6 + v4[1] + 250) = 0;
      Function_224b040(v4[1]);
      if ( v4[1] == Function_203608c() )
      {
        v20 = GetOverWorldData_VariableAreaAdresses(*(uint *)(v6 + 84));
        v21 = Function_20298a0(v20);
        v29 = Function_202958c(v21);
        Function_20295c0(v21);
        v22 = LoadFlagAdress(*(uint *)(*(uint *)(v6 + 84) + 12));
        Function_206aa40(v22);
        v23 = *(uint *)(v6 + 4 * v4[1] + 656);
        if ( v23 )
        {
          Function_206dab8(*(uint *)(v6 + 84), v23);
          v24 = *(ushort *)(v6 + 690);
          if ( v24 != 0xFFFF )
            *(ushort *)(v6 + 690) = v24 + 1;
        }
        Function_20594fc();
        Function_2005748(0x62Bu);
        if ( v29 == Function_202958c(v21) )
        {
          v25 = Function_22421ac();
          Function_2253f40(v25, 7);
        }
        else
        {
          Function_20360d0(96, (int)&v29);
        }
        Function_200502c(4, 0x424u, 60, 0, 255);
      }
      if ( *(uint *)(v6 + 4 * v4[1] + 656) )
      {
        v26 = Function_203608c();
        v27 = (ushort *)Function_2032ee8(v26);
        if ( Function_202600c(*(ushort **)(v6 + 4 * v4[1] + 656), v27) == 1 )
        {
          v28 = Function_2032ee8(v4[1]);
          Function_206dad4(*(uint *)(v6 + 84), v28);
        }
      }
      result = Function_224a204(v4[1]);
    }
    else if ( result == 5 )
    {
      v11 = Function_2032ee8(v4[1]) == 0;
      v12 = v4[2];
      if ( v11 )
      {
        result = Function_23_224ae60(v12);
      }
      else if ( *(uint *)(v6 + 4 * v12 + 656) )
      {
        v13 = (ushort *)Function_2032ee8(v4[1]);
        if ( Function_202600c(*(ushort **)(v6 + 4 * v4[2] + 656), v13) == 1 )
        {
          Function_23_224ae60(v4[2]);
          if ( v4[1] == Function_203608c() )
          {
            Function_20297ec(v8);
            Function_20594fc();
            v14 = Function_22421ac();
            Function_2253f40(v14, 13);
            Function_2005748(0x625u);
          }
          else if ( v4[2] == Function_203608c() )
          {
            Function_224a6e4((int)v4, 0);
          }
          result = Function_224d530(v4[1]);
        }
        else
        {
          result = Function_224a294(v4[1], v4[2]);
          if ( result )
          {
            if ( v4[1] == Function_203608c() )
            {
              Function_202955c(v8);
              Function_2059464(1);
              v15 = Function_22421ac();
              v16 = Function_2032ee8(v4[2]);
              Function_2254068(v15, v16);
              v17 = Function_22421ac();
              Function_2253f40(v17, 12);
              Function_200549c(0x425u);
              Function_2005748(0x625u);
            }
            else if ( v4[2] == Function_203608c() )
            {
              Function_224a6e4((int)v4, 1);
            }
            result = Function_224d518(v4[1], v4[2]);
          }
        }
      }
      else
      {
        result = Function_203608c();
        if ( v4[1] == result )
          result = Function_2059514();
      }
    }
  }
  else
  {
    result = v4[1];
    if ( *(uint *)(v6 + 4 * result + 656) )
    {
      Function_23_224ae60(result);
      Function_224b040(v4[1]);
      result = Function_203608c();
      if ( v4[1] == result )
      {
        Function_20594fc();
        v10 = Function_22421ac();
        Function_2253f40(v10, 2);
        result = Function_200502c(4, 0x424u, 60, 0, 255);
      }
    }
  }
  return result;
}

//----- (0224AA84) --------------------------------------------------------
int Function_224aa84()
{
  int result;
  int v1;

  result = Function_2057518();
  v1 = 0;
  do
  {
    ++v1;
    *(ushort *)(result + 362) = 255;
    result += 34;
  }
  while ( v1 < 8 );
  return result;
}

//----- (0224AAA0) --------------------------------------------------------
int Function_224aaa0()
{
  return Function_2057518() + 602;
}

//----- (0224AAB0) --------------------------------------------------------
uint Function_224aab0()
{
  int v0;
  int v1;
  uint result;
  int *v3;
  int v4;
  int v5;

  v0 = Function_2057518();
  *(uchar *)(v0 + 697) = 0;
  if ( *(uint *)(v0 + 4 * Function_203608c() + 656) )
  {
    v1 = Function_203608c();
    result = Function_20360d0(91, *(uint *)(v0 + 4 * v1 + 656));
  }
  else
  {
    v3 = AllocTrainerData(0xFu);
    v4 = Function_2023790(20, 0xFu);
    if ( !v3 )
      ErrorHandler();
    if ( !v4 )
      ErrorHandler();
    Function_2025ee0(v3, v4);
    Function_20360d0(91, (int)v3);
    Function_20237bc_FreeMsg(v4, v5);
    result = free((int)v3);
  }
  return result;
}

//----- (0224AB2C) --------------------------------------------------------
int Function_23_224ab2c()
{
  return 32;
}

//----- (0224AB30) --------------------------------------------------------
uint __fastcall Function_23_224ab30(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  ushort *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint result;
  ushort *v12;
  char v13;
  int v14;

  v14 = a4;
  v4 = a1;
  v5 = a3;
  v6 = Function_2057518();
  v13 = v4;
  if ( !v6 )
    return ErrorHandler();
  CopyTrainerData((int)v5, v6 + 330 + 34 * v4);
  v12 = Function_2025f04(v5, 0xFu);
  if ( Function_2023c3c((int)v12) )
    *(ushort *)(v6 + 34 * v4 + 362) = v4;
  v7 = 0;
  v8 = v6;
  v9 = v6 + 330;
  do
  {
    if ( *(ushort *)(v8 + 362) != 255 )
    {
      *(ushort *)(v8 + 362) = v7;
      Function_2035a3c(92, v9, 34);
    }
    ++v7;
    v8 += 34;
    v9 += 34;
  }
  while ( v7 < 8 );
  Function_2035ac4(93, (int)&v13, 1);
  Function_20237bc_FreeMsg((int)v12, v10);
  result = 706;
  *(uchar *)(v6 + 706) = 1;
  return result;
}

//----- (0224ABC4) --------------------------------------------------------
uchar *__fastcall Function_224abc4(int a1, int a2, int a3)
{
  int v3;
  uchar *result;
  uchar *v5;
  int v6;
  int v7;

  v3 = a3;
  result = (uchar *)Function_2057518();
  v5 = result;
  if ( result )
  {
    v6 = *(ushort *)(v3 + 32);
    v7 = *(uint *)&result[4 * v6 + 656];
    if ( v7 )
      free(v7);
    *(uint *)&v5[4 * v6 + 656] = AllocTrainerData(0xFu);
    CopyTrainerData(v3, *(uint *)&v5[4 * v6 + 656]);
    result = &v5[v6 + 250];
    *result = 1;
  }
  return result;
}

//----- (0224AC0C) --------------------------------------------------------
int Function_224ac0c()
{
  return 34;
}

//----- (0224AC10) --------------------------------------------------------
int __fastcall Function_224ac10(int a1, int a2, uchar *a3)
{
  uchar *v3;
  int v4;
  int result;

  v3 = a3;
  v4 = Function_2057518();
  if ( *v3 == Function_203608c() )
    *(uchar *)(v4 + 697) = 1;
  result = 706;
  *(uchar *)(v4 + 706) = 0;
  return result;
}

//----- (0224AC3C) --------------------------------------------------------
int Function_224ac3c()
{
  return *(uchar *)(Function_2057518() + 697);
}

//----- (0224AC4C) --------------------------------------------------------
int Function_224ac4c()
{
  int v0;
  int v1;
  int v2;
  int v3;
  int v4;
  int result;

  v0 = 0;
  v1 = Function_203608c();
  v2 = Function_2057518();
  v3 = v2 + 4 * v1;
  if ( *(uint *)(v3 + 656) )
  {
    v0 = *(uint *)(v3 + 656);
    *(uint *)(v3 + 656) = 0;
    *(uchar *)(v2 + v1 + 250) = 0;
    *(ushort *)(v2 + 34 * v1 + 362) = 255;
  }
  v4 = 0;
  do
    result = Function_23_224ae60(v4++);
  while ( v4 < 8 );
  if ( v0 )
  {
    *(uint *)(v2 + 656) = v0;
    *(uchar *)(v2 + 250) = 1;
    CopyTrainerData(v0, v2 + 330);
    result = 362;
    *(ushort *)(v2 + 362) = 0;
  }
  return result;
}

//----- (0224ACC0) --------------------------------------------------------
BOOL __fastcall Function_224acc0(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = *(uint *)(Function_2057518() + 4);
  if ( !v2 )
    return 0;
  v3 = Function_224993c(v2, v1);
  return Function_224999c(v3) == 0;
}

//----- (0224ACE8) --------------------------------------------------------
int __fastcall Function_224ace8(char a1, int a2, int a3, int a4)
{
  int v5;

  v5 = a4;
  LOBYTE(v5) = a1;
  return Function_2035b48(26, (int)&v5);
}

//----- (0224ACF8) --------------------------------------------------------
uchar *__fastcall Function_224acf8(int a1, int a2, uchar *a3)
{
  return Function_2243020((uchar *)*a3);
}

//----- (0224AD04) --------------------------------------------------------
int __fastcall Function_224ad04(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_2057518();
  if ( !v2 )
    return 0xFFFF;
  if ( v1 == Function_203608c() )
    return *(ushort *)(v2 + 8 * v1 + 162);
  if ( Function_2058c40() )
    return *(ushort *)(v2 + 8 * v1 + 162);
  return 0xFFFF;
}

//----- (0224AD40) --------------------------------------------------------
int __fastcall Function_224ad40(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_2057518();
  if ( !v2 )
    return 0xFFFF;
  if ( v1 == Function_203608c() )
    return *(ushort *)(v2 + 8 * v1 + 164);
  if ( Function_2058c40() )
    return *(ushort *)(v2 + 8 * v1 + 164);
  return 0xFFFF;
}

//----- (0224AD7C) --------------------------------------------------------
int __fastcall Function_224ad7c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = a2;
  v4 = Function_2057518();
  v5 = Function_224993c(*(uint *)(v4 + 4), v2);
  return Function_2249994(v5, v3);
}

//----- (0224AD98) --------------------------------------------------------
int __fastcall Function_23_224ad98(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = Function_2057518();
  v3 = Function_224993c(*(uint *)(v2 + 4), v1);
  return Function_2249994(v3, 0);
}

//----- (0224ADB0) --------------------------------------------------------
int __fastcall Function_224adb0(int a1, short a2, int a3, int a4)
{
  int v4;
  short v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int result;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = Function_2057518();
  v9 = 8 * v4;
  v10 = v8 + 98 + 8 * v4;
  *(ushort *)(v8 + 98 + v9) = v5 + GetWalkPositionXChange(v7);
  result = v6 + GetWalkPositionYChange(v7);
  *(ushort *)(v10 + 2) = result;
  *(uchar *)(v10 + 4) = v7;
  return result;
}

//----- (0224ADE8) --------------------------------------------------------
int __fastcall Function_224ade8(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int result;
  int v7;
  ushort *v8;
  int v9;
  int v10;
  int v11;

  v4 = a1;
  v5 = a2;
  v10 = a3;
  v11 = a4;
  result = Function_2057518();
  v7 = result;
  if ( result )
  {
    v8 = (ushort *)(result + 162 + 8 * v4);
    if ( !*(uchar *)(result + 701) )
      ((void (__fastcall *)(uint, uint, uint, uint))dword_21F5634[0])(*(uint *)(result + 84), *v8, 0, v8[1]);
    *v8 = v5;
    v8[1] = v10;
    *((uchar *)v8 + 4) = v11;
    v9 = *(uint *)(v7 + 4 * v4 + 8);
    if ( v9 )
      Function_205ece0(v9, v5, v10, v11);
    if ( !*(uchar *)(v7 + 701) )
      ((void (__fastcall *)(uint, uint, uint, uint))dword_21F5634[0])(*(uint *)(v7 + 84), *v8, 0, v8[1]);
    result = *(uchar *)(v7 + 701);
    if ( !*(uchar *)(v7 + 701) )
      result = Function_224b040(v4);
  }
  return result;
}

//----- (0224AE60) --------------------------------------------------------
int __fastcall Function_23_224ae60(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = Function_2057518();
  v3 = v2;
  v4 = *(uint *)(v2 + 4 * v1 + 656);
  if ( !v4 )
    return 0;
  free(v4);
  *(uint *)(v3 + 4 * v1 + 656) = 0;
  *(uchar *)(v3 + v1 + 250) = 0;
  *(ushort *)(v3 + 34 * v1 + 362) = 255;
  return 1;
}

//----- (0224AEA4) --------------------------------------------------------
BOOL __fastcall Function_224aea4(int a1)
{
  return *(uint *)(Function_2057518() + 4 * a1 + 656) != 0;
}

//----- (0224AEC4) --------------------------------------------------------
int __fastcall Function_224aec4(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v7;

  v2 = a1;
  v3 = a2;
  v4 = Function_2057518();
  if ( *(uint *)(v4 + 4 * v2 + 656) )
    return 0;
  v7 = Function_2032ee8(v3);
  if ( !v7 )
    return 0;
  *(uint *)(v4 + 656 + 4 * v2) = AllocTrainerData(0xFu);
  CopyTrainerData(v7, *(uint *)(v4 + 656 + 4 * v2));
  *(uchar *)(v4 + v2 + 250) = 1;
  *(ushort *)(v4 + 34 * v2 + 362) = v2;
  CopyTrainerData(v7, v4 + 330 + 34 * v2);
  if ( v3 == Function_203608c() )
  {
    v5 = Function_20298a0(*(uint *)(*(uint *)(v4 + 84) + 12));
    Function_20297b4(v5);
  }
  return 1;
}

//----- (0224AF4C) --------------------------------------------------------
int *__fastcall Function_23_224af4c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int *result;

  v1 = a1;
  v2 = Function_2057518();
  v3 = v2 + 40;
  v4 = 4 * v1;
  result = *(int **)(v2 + 40 + v4);
  if ( result )
  {
    if ( Function_20714f0(result) )
      Function_207136c(*(int **)(v3 + v4));
    else
      ErrorHandler();
    result = 0;
    *(uint *)(v3 + v4) = 0;
  }
  return result;
}

//----- (0224AF7C) --------------------------------------------------------
int *__fastcall Function_23_224af7c(int a1)
{
  int v1;
  int *result;
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
  result = (int *)Function_2057518();
  if ( !*((uchar *)result + 701) )
  {
    v3 = v1;
    v4 = result[v1 + 2];
    if ( v4 )
    {
      v5 = (int)result + 250;
      switch ( *((uchar *)result + v1 + 250) )
      {
        case 0:
          result = Function_23_224af4c(v1);
          break;
        case 1:
          v10 = (int)(result + 10);
          result = (int *)result[v3 + 10];
          if ( !result )
          {
            v11 = Function_205eb3c(v4);
            result = (int *)((int (__fastcall *)(int))dword_21F511C[0])(v11);
            *(uint *)(v10 + v3 * 4) = result;
          }
          break;
        case 2:
          v8 = (int)(result + 10);
          result = (int *)result[v3 + 10];
          if ( !result )
          {
            v9 = Function_205eb3c(v4);
            result = (int *)((int (__fastcall *)(int))dword_21F52E4[0])(v9);
            *(uint *)(v8 + v3 * 4) = result;
          }
          break;
        case 3:
          v6 = (int)(result + 10);
          if ( !result[v3 + 10] )
          {
            v7 = Function_205eb3c(v4);
            *(uint *)(v6 + v3 * 4) = ((int (__fastcall *)(int))dword_21F5488[0])(v7);
          }
          result = 0;
          *(uchar *)(v5 + v1) = 0;
          break;
        default:
          return result;
      }
    }
  }
  return result;
}

//----- (0224B00C) --------------------------------------------------------
int __fastcall Function_224b00c(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = Function_2057518() + 250;
  if ( *(uchar *)(result + v1) != 1 )
    *(uchar *)(result + v1) = 2;
  return result;
}

//----- (0224B024) --------------------------------------------------------
int *__fastcall Function_224b024(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_2057518() + 250;
  if ( *(uchar *)(v2 + v1) != 1 )
    *(uchar *)(v2 + v1) = 3;
  return Function_23_224af4c(v1);
}

//----- (0224B040) --------------------------------------------------------
int *__fastcall Function_224b040(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_2057518() + 250;
  if ( *(uchar *)(v2 + v1) != 1 )
    *(uchar *)(v2 + v1) = 0;
  return Function_23_224af4c(v1);
}

//----- (0224B05C) --------------------------------------------------------
int __fastcall Function_224b05c(int a1, int a2)
{
  char *v2;
  char *v3;
  int v4;
  int result;

  v2 = &byte_225760C;
  v3 = &byte_2257620;
  v4 = a1 / 32;
  result = 0;
  while ( v4 != (uchar)*v2 || a2 / 32 != (uchar)*v3 )
  {
    ++result;
    ++v2;
    ++v3;
    if ( result >= 17 )
      return 16;
  }
  return result;
}

//----- (0224B098) --------------------------------------------------------
int __fastcall Function_224b098(int a1, int a2)
{
  int v2;
  int v3;

  v2 = 15;
  v3 = 0;
  do
  {
    if ( a1 == v2 + 32 && a2 == 24 )
      return 1;
    ++v3;
    v2 += 32;
  }
  while ( v3 < 8 );
  return 0;
}

//----- (0224B0DC) --------------------------------------------------------
int __fastcall Function_224b0dc(int a1, ushort *a2)
{
  ushort *v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a1;
  if ( Function_2033dfc() )
  {
    *v2 = 15;
    result = 24;
    v2[1] = 24;
  }
  else
  {
    if ( v3 == 16 )
      LOWORD(v3) = 0;
    *v2 = 32 * v3 + 47;
    result = 24;
    v2[1] = 24;
  }
  return result;
}

//----- (0224B128) --------------------------------------------------------
int __fastcall Function_224b128(int a1, ushort *a2)
{
  int v2;
  ushort *v3;

  v2 = a1;
  v3 = a2;
  if ( Function_2036180() )
    v2 = 16;
  return Function_224b0dc(v2, v3);
}

//----- (0224B144) --------------------------------------------------------
uint *__fastcall Function_224b144(ushort *a1, int a2)
{
  ushort *v2;
  uint *result;
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

  v2 = a1;
  v13 = a2;
  result = (uint *)dword_2257740[27];
  if ( !dword_2257740[27] )
  {
    if ( Function_2028554() != 148 )
      ErrorHandler();
    dword_2257740[27] = (int)v2;
    MI_CpuFill8(v2, 0, 0x13E8u);
    *(uint *)dword_2257740[27] = v13;
    v4 = 0;
    v5 = 0;
    v6 = 0;
    do
    {
      *(ushort *)(dword_2257740[27] + v5 + 4740) = 4095;
      *(ushort *)(dword_2257740[27] + v5 + 4742) = 4095;
      *(ushort *)(dword_2257740[27] + v5 + 4788) = 4095;
      v7 = dword_2257740[27] + v5;
      v5 += 6;
      *(ushort *)(v7 + 4790) = 4095;
      *(uchar *)(dword_2257740[27] + v4 + 4971) = -1;
      *(uchar *)(dword_2257740[27] + v4 + 4979) = -1;
      *(uchar *)(dword_2257740[27] + v4 + 4963) = -1;
      *(uchar *)(dword_2257740[27] + v4 + 4987) = -1;
      *(uchar *)(dword_2257740[27] + v4 + 4939) = -1;
      *(uchar *)(dword_2257740[27] + v4 + 4947) = -1;
      v8 = dword_2257740[27] + v4++;
      *(uchar *)(v8 + 4955) = -1;
      *(ushort *)(dword_2257740[27] + v6 + 5036) = 72;
      *(ushort *)(dword_2257740[27] + v6 + 5052) = 437;
      v9 = dword_2257740[27] + v6;
      v6 += 2;
      *(ushort *)(v9 + 5068) = 1;
    }
    while ( v4 < 8 );
    v10 = 0;
    v11 = 0;
    do
    {
      Function_20292c0((ushort *)(dword_2257740[27] + 10 + v11));
      v11 += 150;
      *(uchar *)(dword_2257740[27] + v10 + 4837) = -1;
      v12 = dword_2257740[27] + v10++;
      *(uchar *)(v12 + 4922) = -1;
    }
    while ( v10 < 17 );
    MI_CpuFill8((ushort *)(dword_2257740[27] + 2564), 255, 0x880u);
    Function_224b2c8(v13);
    *(ushort *)(dword_2257740[27] + 5084) = 72;
    *(ushort *)(dword_2257740[27] + 5086) = 437;
    *(uchar *)(dword_2257740[27] + 5088) = 1;
    result = AddTaskToTaskList1((int)Function_224c5b4, 0, 0x64u);
    *(uint *)(dword_2257740[27] + 4) = result;
  }
  return result;
}

//----- (0224B2C8) --------------------------------------------------------
int __fastcall Function_224b2c8(int a1)
{
  int v1;
  int v2;
  int v3;
  uint *v4;
  int v5;
  int v6;
  uint v7;
  uint v8;

  v1 = a1;
  v2 = GetOverWorldData_VariableAreaAdresses(a1);
  v3 = LoadVariableAreaAdress_c_2(v2);
  v4 = (uint *)Function_20298ac(v3);
  v5 = LoadVariableAreaAdress_14(*(uint *)(v1 + 12));
  v6 = Function_202d034(v5);
  Function_20294d4(v4, v6);
  MI_CpuCopy8(v3, dword_2257740[27] + 2410, 0x94u, v7);
  Function_224b39c(v3, dword_2257740[27] + 4612);
  MI_CpuCopy8(v3, dword_2257740[27] + 10, 0x94u, v8);
  return Function_224b39c(v3, dword_2257740[27] + 2564);
}

//----- (0224B33C) --------------------------------------------------------
int __fastcall Function_224b33c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint *v7;
  int v8;
  uchar *v9;
  int result;
  int v11;

  v4 = a1;
  v5 = 0;
  v6 = 0;
  v11 = a3;
  v7 = (uint *)(a4 + 4 * a2);
  do
  {
    if ( a2 + v5 < 32 )
    {
      v8 = 0;
      v9 = (uchar *)(v11 + v6);
      do
      {
        if ( *v9 )
        {
          if ( v4 + v8 < 32 )
            *v7 &= ~(1 << (v4 + v8));
        }
        ++v8;
        ++v9;
      }
      while ( v8 < 3 );
    }
    v6 += 3;
    result = v5 + 1;
    ++v7;
    v5 = result;
  }
  while ( result < 3 );
  return result;
}

//----- (0224B39C) --------------------------------------------------------
int __fastcall Function_224b39c(int a1, ushort *a2)
{
  char *v2;
  int v3;
  uchar *v4;
  int v5;
  char v6;
  char *v7;
  char *v8;
  int v9;
  char v10;
  int v11;
  int result;
  int v13;
  int v14;
  char *v15;
  ushort *v16;
  int v17;
  char v18;
  uchar v19[3];

  v16 = a2;
  v2 = &byte_2256874;
  v3 = a1;
  v4 = v19;
  v5 = 9;
  do
  {
    v6 = *v2++;
    *v4++ = v6;
    --v5;
  }
  while ( v5 );
  v7 = &byte_225687D;
  v8 = &v18;
  v9 = 9;
  do
  {
    v10 = *v7++;
    *v8++ = v10;
    --v9;
  }
  while ( v9 );
  MI_CpuFill8(v16, 255, 0x80u);
  v11 = 0;
  do
  {
    result = Function_20293b0(v3, v11);
    v17 = result;
    if ( result )
    {
      v13 = Function_20293fc(v3, v11);
      v14 = Function_202942c(v3, v11);
      if ( v11 )
      {
        if ( v11 >= 16 )
          v15 = &v18;
        else
          v15 = Function_205741c(v17);
      }
      else
      {
        v15 = v19;
      }
      result = Function_224b33c(v13, v14, (int)v15, (int)v16);
    }
    ++v11;
  }
  while ( v11 < 32 );
  return result;
}

//----- (0224B430) --------------------------------------------------------
int Function_224b430()
{
  int *v0;
  int result;

  Function_224c6e8();
  v0 = *(int **)(dword_2257740[27] + 4);
  if ( v0 )
  {
    Call_RemoveTaskFromTaskList(v0);
    *(uint *)(dword_2257740[27] + 4) = 0;
  }
  result = 5092;
  *(uchar *)(dword_2257740[27] + 5092) = 1;
  return result;
}

//----- (0224B460) --------------------------------------------------------
uint *Function_224b460()
{
  int v0;
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  uint *result;

  v0 = 0;
  *(uchar *)(dword_2257740[27] + 5092) = 0;
  if ( !*(uchar *)(dword_2257740[27] + 5094) )
  {
    do
      Function_224c6ac(v0++);
    while ( v0 < 8 );
    v1 = 0;
    v2 = 0;
    do
    {
      v3 = *(ushort *)(dword_2257740[27] + 4740 + v2);
      v4 = dword_2257740[27] + 4740 + v2;
      if ( v3 != 4095 && *(ushort *)(v4 + 2) != 4095 )
      {
        v5 = *(uchar *)(v4 + 4);
        Function_224c588(v3);
      }
      ++v1;
      v2 += 6;
    }
    while ( v1 < 8 );
  }
  result = *(uint **)(dword_2257740[27] + 4);
  if ( !result )
  {
    result = AddTaskToTaskList1((int)Function_224c5b4, 0, 0x64u);
    *(uint *)(dword_2257740[27] + 4) = result;
  }
  return result;
}

//----- (0224B4E4) --------------------------------------------------------
int *Function_224b4e4()
{
  int *v0;
  int *result;

  v0 = *(int **)(dword_2257740[27] + 4);
  if ( v0 )
  {
    Call_RemoveTaskFromTaskList(v0);
    *(uint *)(dword_2257740[27] + 4) = 0;
  }
  Function_224c6e8();
  if ( dword_2257740[27] )
    free(dword_2257740[27]);
  result = &dword_2257740[27];
  dword_2257740[27] = 0;
  return result;
}

//----- (0224B518) --------------------------------------------------------
int Function_224b518()
{
  int v0;
  int v1;
  int v2;
  int v4;

  v0 = 0;
  v4 = 0;
  v1 = 0;
  do
  {
    Function_2029300(dword_2257740[27] + 10 + v0);
    v0 += 150;
    *(ushort *)(dword_2257740[27] + v1 + 4740) = 4095;
    *(ushort *)(dword_2257740[27] + v1 + 4742) = 4095;
    *(ushort *)(dword_2257740[27] + v1 + 4788) = 4095;
    v2 = dword_2257740[27] + v1;
    v1 += 6;
    *(ushort *)(v2 + 4790) = 4095;
    ++v4;
  }
  while ( v4 < 8 );
  MI_CpuFill8((ushort *)(dword_2257740[27] + 2564), 255, 0x880u);
  return Function_224b2c8(*(uint *)dword_2257740[27]);
}

//----- (0224B598) --------------------------------------------------------
int Function_224b598()
{
  int v0;
  int v1;

  v0 = 0;
  v1 = 0;
  do
  {
    Function_20292c0((ushort *)(dword_2257740[27] + 10 + v1));
    ++v0;
    v1 += 150;
  }
  while ( v0 < 17 );
  return Function_224b2c8(*(uint *)dword_2257740[27]);
}

//----- (0224B5C4) --------------------------------------------------------
int Function_224b5c4()
{
  return 5096;
}

//----- (0224B5CC) --------------------------------------------------------
int __fastcall Function_224b5cc(int result)
{
  int v1;

  if ( dword_2257740[27] )
  {
    *(uchar *)(dword_2257740[27] + result + 4963) = -1;
    *(uchar *)(dword_2257740[27] + result + 4971) = -1;
    *(uchar *)(dword_2257740[27] + result + 4979) = -1;
    v1 = 6 * result;
    result = 4095;
    *(ushort *)(dword_2257740[27] + v1 + 4788) = 4095;
    *(ushort *)(dword_2257740[27] + v1 + 4790) = 4095;
  }
  return result;
}

//----- (0224B61C) --------------------------------------------------------
int __fastcall Function_224b61c(int result)
{
  int v1;

  v1 = result;
  if ( dword_2257740[27] )
  {
    Function_224c6ac(result);
    *(ushort *)(dword_2257740[27] + 6 * v1 + 4740) = 4095;
    result = 4742;
    *(ushort *)(dword_2257740[27] + 6 * v1 + 4742) = 4095;
  }
  return result;
}

//----- (0224B654) --------------------------------------------------------
int Function_224b654()
{
  return Function_2059514();
}

//----- (0224B65C) --------------------------------------------------------
int __fastcall Function_224b65c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v7;

  v2 = 0;
  v3 = a1;
  v7 = a2;
  v4 = 0;
  do
  {
    v5 = dword_2257740[27] + 10;
    if ( Function_202988c(dword_2257740[27] + 10 + v4)
      && Function_2058c90(v2)
      && v3 == Function_2029874(v5 + v4)
      && v7 == Function_202987c(v5 + v4) )
    {
      return v2;
    }
    ++v2;
    v4 += 150;
  }
  while ( v2 < 8 );
  return 255;
}

//----- (0224B6AC) --------------------------------------------------------
int __fastcall Function_224b6ac(int a1, int a2, ushort *a3)
{
  ushort *v3;
  int v4;
  int result;

  v3 = a3;
  v4 = *((uchar *)a3 + 4);
  result = Function_203608c();
  if ( v4 == result )
  {
    result = dword_2257740[27];
    if ( !*(uchar *)(dword_2257740[27] + 5092) )
    {
      if ( *((uchar *)v3 + 7) )
        result = Function_224c090(*(uint *)dword_2257740[27], *v3, v3[1], 0, v4, *((uchar *)v3 + 5));
      else
        result = Function_224bc5c(
                   *(uint *)dword_2257740[27],
                   *v3,
                   v3[1],
                   *((uchar *)v3 + 6),
                   v4,
                   *((uchar *)v3 + 5));
    }
  }
  return result;
}

//----- (0224B700) --------------------------------------------------------
int __fastcall Function_224b700(int a1, int a2, uchar *a3)
{
  uchar *v3;
  int result;
  int v5;
  int v6;

  v3 = a3;
  result = Function_203608c();
  if ( *v3 == result )
  {
    Function_20594fc();
    v5 = Function_224219c();
    v6 = Function_2253f40(v5, 88);
    result = Function_224dc24(v6);
  }
  return result;
}

//----- (0224B72C) --------------------------------------------------------
int Function_224b72c()
{
  return 8;
}

//----- (0224B730) --------------------------------------------------------
int __fastcall Function_224b730(int a1, int a2, uchar *a3, int a4)
{
  int v4;
  uchar *v5;
  int result;
  int v7;
  int v8;

  v8 = a4;
  v4 = a1;
  v5 = a3;
  LOBYTE(v8) = a1;
  if ( Function_203608c() )
    return ErrorHandler();
  if ( v5[1] )
  {
    v7 = *v5;
    if ( v5[2] )
    {
      result = Function_224b79c(v7, v4);
      if ( !result )
      {
        *(uchar *)(dword_2257740[27] + v4 + 4971) = -1;
        result = Function_2035b48(61, (int)&v8);
      }
    }
    else
    {
      result = Function_224b844(v7, v4, 0);
    }
  }
  else
  {
    result = 4971;
    *(uchar *)(dword_2257740[27] + v4 + 4971) = -1;
  }
  return result;
}

//----- (0224B798) --------------------------------------------------------
int Function_224b798()
{
  return 3;
}

//----- (0224B79C) --------------------------------------------------------
int __fastcall Function_224b79c(int a1, int a2)
{
  int v2;
  int v3;
  int v5;
  int v6;
  short v7;
  ushort v8;

  v2 = a1;
  v3 = a2;
  v6 = dword_2257740[27] + 8 + 150 * a1;
  if ( !Function_202988c(v6 + 2) )
    return 0;
  if ( Function_2036254(54) )
    return 0;
  v5 = 0;
  do
  {
    if ( Function_2035d78((ushort)v5) && v2 == *(uchar *)(dword_2257740[27] + v5 + 4979) )
      return 0;
    ++v5;
  }
  while ( v5 < 8 );
  Function_224b128(v2, &v7);
  *(uchar *)(v6 + 1) = v3;
  Function_224c23c(v2);
  *(uchar *)(dword_2257740[27] + v3 + 4971) = v2;
  *(uchar *)(dword_2257740[27] + v3 + 4979) = v2;
  Function_224adb0(v3, v7, v8, 0);
  return 1;
}

//----- (0224B844) --------------------------------------------------------
int __fastcall Function_224b844(int a1, int a2, char a3)
{
  int v3;
  char v4;
  short v5;
  int v6;
  int v7;
  ushort *v8;
  short v9;
  short v10;
  char v12;
  char v13;
  short v14;
  short v15;
  char v16;
  char v17;
  char v18;

  v3 = a2;
  v4 = a1;
  v12 = a3;
  Function_224b0dc(a1, &v13);
  *(uchar *)(dword_2257740[27] + v3 + 4971) = v4;
  if ( Function_2036180() )
  {
    v5 = *(ushort *)(dword_2257740[27] + 5084);
    v6 = *(ushort *)(dword_2257740[27] + 5086);
    v7 = *(uchar *)(dword_2257740[27] + 5088);
  }
  else
  {
    v8 = (ushort *)(dword_2257740[27] + 2 * v3);
    v5 = v8[2518];
    v6 = (ushort)v8[2526];
    v7 = (ushort)v8[2534];
  }
  Function_224adb0(v3, v5, v6, v7);
  v9 = v5 + GetWalkPositionXChange(v7);
  v10 = GetWalkPositionYChange(v7);
  v14 = v9;
  v15 = v6 + v10;
  v16 = v3;
  v17 = v7;
  v18 = v12;
  Function_2035b48(57, (int)&v14);
  return Function_2059058(v3, 0);
}

//----- (0224B8E0) --------------------------------------------------------
int __fastcall Function_224b8e0(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  ushort *v9;
  int v10;
  short v11;
  short v12;
  char v13;
  char v14;
  char v15;
  char v16;
  ushort v17;
  ushort v18;
  short v19;
  ushort v20;
  char v21;
  uchar v22;
  char v23;

  v3 = a1;
  v4 = a2;
  v10 = a3;
  if ( !dword_2257740[27] )
    return 0;
  if ( a1 && !Function_2035d78((ushort)a1) )
    return 0;
  if ( Function_224acc0(v3) )
    return 0;
  if ( *(uchar *)(dword_2257740[27] + v3 + 4971) != 255 )
    return 1;
  v6 = Function_224b65c(v4, v10);
  if ( v6 == 255 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      if ( Function_202988c(dword_2257740[27] + 10 + v8) )
      {
        Function_224b0dc(v7, &v17);
        if ( v4 == v17 && v10 == v18 )
        {
          *(uchar *)(dword_2257740[27] + v3 + 4971) = v7;
          v16 = 0;
          v11 = v4;
          v12 = v10;
          v15 = 0;
          v13 = v3;
          v14 = v7;
          Function_2035b48(58, (int)&v11);
          Function_2059058(v3, 0);
          return 1;
        }
      }
      ++v7;
      v8 += 150;
    }
    while ( v7 <= 8 );
    if ( Function_224b098(v4, v10) )
    {
      v9 = (ushort *)(dword_2257740[27] + 2 * v3);
      v19 = v9[2518];
      v20 = v9[2526];
      v21 = v3;
      v22 = v9[2534];
      v23 = 0;
      *(uchar *)(dword_2257740[27] + v3 + 4971) = 0;
      Function_224adb0(v3, v19, v20, v22);
      Function_2035b48(57, (int)&v19);
      result = 1;
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    *(uchar *)(dword_2257740[27] + v3 + 4971) = v6;
    v16 = 1;
    v11 = v4;
    v12 = v10;
    v15 = 0;
    v13 = v3;
    v14 = v6;
    Function_2035b48(58, (int)&v11);
    Function_2059058(v3, 0);
    result = 1;
  }
  return result;
}

//----- (0224BA48) --------------------------------------------------------
int __fastcall Function_224ba48(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;

  v2 = a2;
  v3 = a1;
  v4 = *(uint *)(a2 + 4);
  if ( v4 )
    Function_2002154(v4, 4u);
  Call_RemoveTaskFromTaskList(v3);
  free(v2);
  return Function_2243204();
}

//----- (0224BA6C) --------------------------------------------------------
int __fastcall Function_224ba6c(int *a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  int v9;

  v9 = a4;
  v4 = a2;
  v5 = a1;
  v6 = *(uint *)(a2 + 4);
  if ( v6 )
    Function_2002154(v6, 4u);
  LOWORD(v9) = *(uchar *)(v4 + 44);
  BYTE2(v9) = 0;
  Function_20360d0(59, (int)&v9);
  Call_RemoveTaskFromTaskList(v5);
  free(v4);
  v7 = Function_2243204();
  return Function_224dc24(v7);
}

//----- (0224BAAC) --------------------------------------------------------
uint __fastcall Function_224baac(int *a1, int *a2, int a3, int a4)
{
  int v4;
  int *v5;
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
  uint result;
  int v20;
  int v21;
  int v22;
  char v23;
  char v24;
  char v25;
  int v26;

  v26 = a4;
  v4 = (int)a2;
  v5 = a1;
  v6 = 0;
  v7 = *a2;
  switch ( (uchar)a2[3] )
  {
    case 0u:
      if ( Function_2033dfc() )
      {
        v8 = 47;
        v9 = 3;
      }
      else
      {
        v8 = 50;
        v9 = 1;
      }
      *(uint *)(v4 + 12) = v9;
      v10 = Function_224219c();
      Function_2253f40(v10, v8);
      goto LABEL_25;
    case 1u:
      v11 = Function_224219c();
      if ( !Function_2254238(v11) )
      {
        *(uint *)(v4 + 4) = Function_2002100(
                                *(uint **)(v7 + 8),
                                (uchar *)dword_2256864,
                                985,
                                11,
                                4u);
        *(uint *)(v4 + 12) = 2;
      }
      goto LABEL_25;
    case 2u:
      v12 = Function_2002114(a2[1], 4u);
      if ( v12 )
      {
        if ( v12 != -1 )
        {
          *(uint *)(v4 + 4) = 0;
          v6 = 1;
        }
      }
      else
      {
        *(uint *)(v4 + 4) = 0;
        *(uint *)(v4 + 12) = 7;
      }
      goto LABEL_25;
    case 3u:
      v13 = Function_224219c();
      if ( !Function_2254238(v13) )
      {
        *(uint *)(v4 + 4) = Function_2002100(
                                *(uint **)(v7 + 8),
                                (uchar *)dword_2256864,
                                985,
                                11,
                                4u);
        *(uint *)(v4 + 12) = 4;
      }
      goto LABEL_25;
    case 4u:
      v14 = Function_2002114(a2[1], 4u);
      if ( v14 )
      {
        if ( v14 != -1 )
        {
          *(uint *)(v4 + 4) = 0;
          v6 = 1;
        }
      }
      else
      {
        *(uint *)(v4 + 4) = 0;
        v15 = Function_224219c();
        Function_2253f40(v15, 48);
        *(uint *)(v4 + 12) = 5;
      }
      goto LABEL_25;
    case 5u:
      v16 = Function_224219c();
      if ( !Function_2254238(v16) )
      {
        *(uint *)(v4 + 4) = Function_2002100(
                                *(uint **)(v7 + 8),
                                (uchar *)dword_2256864,
                                985,
                                11,
                                4u);
        *(uint *)(v4 + 12) = 6;
      }
      goto LABEL_25;
    case 6u:
      v17 = Function_2002114(a2[1], 4u);
      if ( v17 )
      {
        if ( v17 != -1 )
        {
          *(uint *)(v4 + 4) = 0;
          v6 = 1;
        }
      }
      else
      {
        *(uint *)(v4 + 4) = 0;
        *(uint *)(v4 + 12) = 7;
      }
      goto LABEL_25;
    case 7u:
      v18 = Function_224219c();
      Function_2254044(v18);
      v24 = 1;
      v23 = *(uchar *)(v4 + 44);
      v25 = 0;
      Function_20360d0(59, (int)&v23);
      result = Function_224ba48(v5, v4);
      break;
    default:
LABEL_25:
      result = Function_2033dfc();
      if ( !result )
      {
        result = *(uchar *)(v4 + 44);
        if ( result < 8 )
        {
          result = Function_2035d78(result);
          if ( !result )
          {
            result = Function_203608c();
            if ( result )
              v6 = 1;
          }
        }
      }
      if ( v6 )
      {
        v20 = Function_224219c();
        Function_2254044(v20);
        Function_224ba6c(v5, v4, v21, v22);
        result = Function_2059514();
      }
      break;
  }
  return result;
}

//----- (0224BC5C) --------------------------------------------------------
int __fastcall Function_224bc5c(int a1, int a2, int a3, int a4, char a5, char a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v6 = a1;
  v7 = a2;
  v8 = a3;
  v9 = a4;
  Function_224dc08();
  v10 = malloc2(4u, 48);
  MI_CpuFill8((ushort *)v10, 0, 0x30u);
  *(uint *)(v10 + 24) = -1;
  *(uint *)(v10 + 28) = v7;
  *(uint *)(v10 + 32) = v8;
  *(uchar *)(v10 + 43) = a5;
  *(uchar *)(v10 + 44) = a6;
  *(uint *)(v10 + 20) = 2;
  *(uint *)(v10 + 36) = v9;
  *(uint *)v10 = v6;
  *(uint *)(v10 + 8) = AddTaskToTaskList1((int)Function_224baac, v10, 0x64u);
  Function_22431ec(v10, *(uint *)(v10 + 8), (int)Function_224ba6c);
  return Function_20594fc();
}

//----- (0224BCC4) --------------------------------------------------------
int __fastcall Function_224bcc4(int a1, int a2, int a3, int a4, char a5, char a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v11;

  v6 = a1;
  v7 = a2;
  v8 = a3;
  v9 = 0;
  v11 = a4;
  if ( !*(uint *)(a1 + 16) )
  {
    v9 = malloc2(0xBu, 48);
    MI_CpuFill8((ushort *)v9, 0, 0x30u);
    *(uint *)(v9 + 24) = -1;
    *(uint *)(v9 + 28) = v7;
    *(uint *)(v9 + 32) = v8;
    *(uchar *)(v9 + 43) = a5;
    *(uchar *)(v9 + 44) = a6;
    if ( **(uint **)(v6 + 28) != 2 )
      ErrorHandler();
    *(uint *)(v9 + 20) = 2;
    *(uint *)(v9 + 36) = v11;
  }
  return v9;
}

//----- (0224BD1C) --------------------------------------------------------
int __fastcall Function_224bd1c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v8;
  int v9;

  v2 = 0;
  v8 = a1;
  v9 = a2;
  v3 = 0;
  do
  {
    if ( Function_2035d78((ushort)v3) )
    {
      if ( v9 )
      {
        v4 = Function_2058df8(v3);
        v5 = Function_2058e4c(v3);
      }
      else
      {
        v4 = Function_2058ca0(v3);
        v5 = Function_2058cf4(v3);
      }
      v6 = v5;
      if ( (v4 != 0xFFFF || v5 != 0xFFFF) && Function_2242e58(v4, v5) && Function_224b05c(v4, v6) == v8 )
        ++v2;
    }
    ++v3;
  }
  while ( v3 < 8 );
  return v2;
}

//----- (0224BD90) --------------------------------------------------------
int __fastcall Function_224bd90(uint *a1, uchar *a2, short a3, uchar a4, uint a5)
{
  short v5;
  uint *v6;
  uchar *v7;
  uchar v8;
  int v9;
  ushort **v10;
  uint *v11;
  uint *v13;
  int v14;
  char v15;
  char v16;
  char v17;
  char v18;

  v5 = a3;
  v6 = a1;
  v7 = a2;
  v8 = a4;
  v9 = Function_224219c();
  v10 = (ushort **)Function_2253e3c(v9);
  v11 = Function_2013a04(2u, a5);
  Function_2013a4c(v11, v10, 0x26u, 0);
  Function_2013a4c(v11, v10, 0x27u, 1);
  v13 = v11;
  v14 = Function_201a778(a5, 1);
  v15 = 0;
  v16 = 1;
  v17 = 2;
  v18 &= 0xC0u;
  Function_201a8d4(v6, v14, v7);
  Function_200dc48(v14, 1, v5, v8);
  return Function_2001b7c(&v13, 8, 0, 0, a5, 2);
}

//----- (0224BE28) --------------------------------------------------------
int __fastcall Function_224be28(int *a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
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
  int result;
  int v23;
  int v24;
  int v25;
  int v26;
  char v27;
  char v28;
  char v29;
  char v30;
  int v31;

  v31 = a4;
  v4 = a2;
  v5 = a1;
  v6 = 0;
  v7 = *(uint *)a2;
  switch ( (uchar)*(uint *)(a2 + 12) )
  {
    case 0u:
      if ( *(uchar *)(a2 + 44) == *(uchar *)(a2 + 43) )
      {
        v8 = 41;
        v9 = 4;
      }
      else
      {
        v8 = 45;
        v9 = 1;
      }
      *(uint *)(a2 + 12) = v9;
      v10 = Function_224219c();
      Function_2253f40(v10, v8);
      goto LABEL_38;
    case 1u:
      v11 = Function_224219c();
      if ( !Function_2254238(v11) )
      {
        *(uint *)(v4 + 4) = Function_2002100(
                                *(uint **)(v7 + 8),
                                (uchar *)dword_2256864,
                                985,
                                11,
                                4u);
        *(uint *)(v4 + 12) = 2;
      }
      goto LABEL_38;
    case 2u:
      v12 = Function_2002114(*(uint *)(a2 + 4), 4u);
      if ( v12 )
      {
        if ( v12 != -1 )
        {
          *(uint *)(v4 + 4) = 0;
          v6 = 1;
        }
      }
      else
      {
        *(uint *)(v4 + 4) = 0;
        *(uint *)(v4 + 12) = 3;
      }
      goto LABEL_38;
    case 3u:
      v13 = Function_224219c();
      if ( !Function_2254238(v13) )
        *(uint *)(v4 + 12) = 10;
      goto LABEL_38;
    case 4u:
      v14 = Function_224219c();
      if ( !Function_2254238(v14) )
      {
        *(uint *)(v4 + 4) = Function_2002100(
                                *(uint **)(v7 + 8),
                                (uchar *)dword_2256864,
                                985,
                                11,
                                4u);
        *(uint *)(v4 + 12) = 5;
      }
      goto LABEL_38;
    case 5u:
      v15 = Function_2002114(*(uint *)(a2 + 4), 4u);
      if ( v15 )
      {
        if ( v15 != -1 )
        {
          *(uint *)(v4 + 4) = 0;
          v6 = 1;
        }
      }
      else
      {
        *(uint *)(v4 + 4) = 0;
        if ( Function_224aea4(*(uchar *)(v4 + 44)) || Function_224bd1c(*(uchar *)(v4 + 44), 0) > 0 )
        {
          v16 = Function_224219c();
          Function_2253f40(v16, 44);
          *(uint *)(v4 + 12) = 3;
        }
        else
        {
          v17 = Function_224219c();
          Function_2253f40(v17, 37);
          *(uint *)(v4 + 12) = 6;
        }
      }
      goto LABEL_38;
    case 6u:
      v18 = Function_224219c();
      if ( !Function_2254238(v18) )
      {
        *(uint *)(v4 + 4) = Function_224bd90(
                                *(uint **)(v7 + 8),
                                (uchar *)dword_225686C,
                                985,
                                0xBu,
                                4u);
        *(uint *)(v4 + 12) = 7;
      }
      goto LABEL_38;
    case 7u:
      v19 = Function_2002114(*(uint *)(a2 + 4), 4u);
      if ( v19 )
      {
        if ( v19 == 1 )
        {
          *(uint *)(v4 + 4) = 0;
          *(uint *)(v4 + 12) = 8;
        }
        else if ( v19 != -1 )
        {
          *(uint *)(v4 + 4) = 0;
          v6 = 1;
        }
      }
      else
      {
        *(uint *)(v4 + 4) = 0;
        *(uint *)(v4 + 12) = 3;
      }
      goto LABEL_38;
    case 8u:
      v20 = Function_224219c();
      if ( !Function_2254238(v20) )
      {
        v21 = Function_224219c();
        Function_2254044(v21);
        Function_2249a74();
        *(uint *)(v4 + 12) = 9;
      }
      goto LABEL_38;
    case 9u:
      if ( !Function_2033dfc() || Function_203608c() )
        goto LABEL_38;
      v27 = 1;
      Function_20360d0(86, (int)&v27);
      result = Function_224ba48(v5, v4);
      break;
    case 0xAu:
      v23 = Function_224219c();
      Function_2254044(v23);
      v29 = 1;
      v28 = *(uchar *)(v4 + 44);
      v30 = 1;
      Function_20360d0(59, (int)&v28);
      Function_224ba48(v5, v4);
      result = 4836;
      *(uchar *)(dword_2257740[27] + 4836) = 1;
      break;
    default:
LABEL_38:
      result = *(uchar *)(v4 + 44);
      if ( result != 16 )
      {
        result = Function_2058c90(result);
        if ( !result )
        {
          result = *(uint *)(v4 + 12);
          if ( result != 8 && result != 9 )
            v6 = 1;
        }
      }
      if ( v6 )
      {
        v24 = Function_224219c();
        Function_2254044(v24);
        Function_224ba6c(v5, v4, v25, v26);
        result = Function_2059514();
      }
      break;
  }
  return result;
}

//----- (0224C090) --------------------------------------------------------
int __fastcall Function_224c090(int a1, int a2, int a3, int a4, char a5, char a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v6 = a1;
  v7 = a2;
  v8 = a3;
  v9 = a4;
  v10 = malloc2(4u, 48);
  MI_CpuFill8((ushort *)v10, 0, 0x30u);
  *(uint *)(v10 + 24) = -1;
  *(uint *)(v10 + 28) = v7;
  *(uint *)(v10 + 32) = v8;
  *(uchar *)(v10 + 43) = a5;
  *(uchar *)(v10 + 44) = a6;
  *(uint *)(v10 + 20) = 2;
  *(uint *)(v10 + 36) = v9;
  *(uint *)v10 = v6;
  *(uchar *)(v10 + 41) = 0;
  Function_224dc08();
  *(uint *)(v10 + 8) = AddTaskToTaskList1((int)Function_224be28, v10, 0x64u);
  Function_22431ec(v10, *(uint *)(v10 + 8), (int)Function_224ba6c);
  return Function_20594fc();
}

//----- (0224C100) --------------------------------------------------------
int Function_224c100()
{
  return 8;
}

//----- (0224C104) --------------------------------------------------------
int __fastcall Function_224c104(int a1, int a2, ushort *a3)
{
  ushort *v3;
  int v4;
  int v5;
  int v6;
  int result;

  v3 = a3;
  *(uchar *)(dword_2257740[27] + *((uchar *)a3 + 4) + 4963) = -1;
  v4 = *((uchar *)a3 + 4);
  if ( v4 == Function_203608c() )
  {
    v5 = Function_22535ec();
    Function_224f24c(v5);
    Function_224321c();
    v6 = Function_203608c();
    Function_2244858(v6);
    Function_20360dc(43);
    *(uchar *)(dword_2257740[27] + 5094) = 0;
    Function_2059638(1);
    Function_224caf0(
      *(uint *)dword_2257740[27],
      *v3,
      v3[1],
      *((uchar *)v3 + 5),
      *((uchar *)v3 + 4),
      *((uchar *)v3 + 6));
    result = 2560;
    *(uint *)(dword_2257740[27] + 2560) = 0;
  }
  else
  {
    Function_2248b98(v4);
    result = Function_224ade8(*((uchar *)v3 + 4), *v3, v3[1], *((uchar *)v3 + 5));
  }
  return result;
}

//----- (0224C198) --------------------------------------------------------
int Function_224c198()
{
  return Function_20360dc(56);
}

//----- (0224C1A4) --------------------------------------------------------
int __fastcall Function_224c1a4(int a1)
{
  int result;

  *(uchar *)(dword_2257740[27] + a1 + 4971) = -1;
  result = dword_2257740[27] + a1;
  *(uchar *)(result + 4979) = -1;
  return result;
}

//----- (0224C1C8) --------------------------------------------------------
BOOL __fastcall Function_224c1c8(int a1)
{
  return dword_2257740[27] && *(uchar *)(dword_2257740[27] + a1 + 4971) != 255;
}

//----- (0224C1EC) --------------------------------------------------------
int __fastcall Function_224c1ec(short a1, short a2, int a3, int a4)
{
  short v4;
  short v5;
  char v6;
  int result;
  uchar *v8;
  char v9;

  v4 = a1;
  v5 = a2;
  v6 = a4;
  result = 150 * a4;
  v8 = (uchar *)(dword_2257740[27] + 8 + 150 * a4);
  if ( v8 )
  {
    v9 = Function_2059328(a3);
    result = (int)Function_2029854((int)(v8 + 2), v4, v5, v9);
    *v8 = v6;
  }
  return result;
}

//----- (0224C21C) --------------------------------------------------------
int Function_224c21c()
{
  Function_203608c();
  return Function_2035f58(53, dword_2257740[27] + 2408, 150);
}

//----- (0224C23C) --------------------------------------------------------
int __fastcall Function_224c23c(int a1)
{
  return Function_2035f00(54, dword_2257740[27] + 8 + 150 * a1, 150);
}

//----- (0224C25C) --------------------------------------------------------
int __fastcall Function_224c25c(int a1, int a2, uchar *a3, int a4)
{
  uchar *v4;
  int result;
  uint v6;
  int v7;
  int v8;
  int v9;
  uchar *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  ushort v15;
  ushort v16;
  int v17;

  v17 = a4;
  v4 = a3;
  result = dword_2257740[27];
  if ( dword_2257740[27] )
  {
    if ( a3[1] != Function_203608c() || *(uchar *)(dword_2257740[27] + 4836) != 2 )
    {
      *(uchar *)(dword_2257740[27] + 4836) = 5;
      v8 = *v4;
      if ( v8 >= 17 )
        ErrorHandler();
      v9 = 150 * v8;
      v10 = (uchar *)(dword_2257740[27] + 8 + 150 * v8);
      MI_CpuCopy8((int)v4, (uint)v10, 0x96u, v6);
      *(uchar *)(dword_2257740[27] + v10[1] + 4963) = *(uchar *)(dword_2257740[27] + 8 + v9);
      v11 = *(uchar *)(dword_2257740[27] + 8 + v9);
      if ( v11 != 16 )
        *(uchar *)(dword_2257740[27] + v10[1] + 4987) = v11;
      Function_224b128(*v10, &v15);
      v12 = v10[1];
      if ( v12 == Function_203608c() )
      {
        *(uchar *)(dword_2257740[27] + 5094) = 1;
        Function_224caf0(*(uint *)dword_2257740[27], v15, v16 - 1, 0, v10[1], 0);
        *(uint *)(dword_2257740[27] + 2560) = v10;
        *(ushort *)(dword_2257740[27] + 5084) = Function_2029874((int)(v10 + 2));
        *(ushort *)(dword_2257740[27] + 5086) = Function_202987c((int)(v10 + 2));
        v13 = Function_2029884((int)(v10 + 2));
        *(uchar *)(dword_2257740[27] + 5088) = v13;
        result = Function_2243360(v13, 5088, dword_2257740[27], v14);
      }
      else
      {
        result = Function_224ade8(v12, v15, v16, 0);
      }
    }
    else
    {
      *(uchar *)(dword_2257740[27] + 4836) = 0;
      Function_2059514();
      Function_20360dc(56);
      v7 = Function_2057ae4(0);
      result = Function_224dc24(v7);
    }
  }
  return result;
}

//----- (0224C384) --------------------------------------------------------
int *__fastcall Function_224c384(int a1, int a2, int a3)
{
  int v3;
  int *result;
  uchar *v5;
  int v6;

  v3 = a1;
  result = &dword_2257740[27];
  if ( dword_2257740[27] )
  {
    v5 = (uchar *)(dword_2257740[27] + 8 + 150 * v3);
    MI_CpuCopy8(a3, (uint)v5, 0x96u, 0x96u);
    *v5 = v3;
    *(uchar *)(dword_2257740[27] + 5090) = 1;
    v6 = 6 * v3;
    *(ushort *)(dword_2257740[27] + v6 + 4788) = Function_2029874((int)(v5 + 2));
    *(ushort *)(dword_2257740[27] + v6 + 4790) = Function_202987c((int)(v5 + 2));
    *(uchar *)(dword_2257740[27] + v6 + 4792) = Function_2029884((int)(v5 + 2));
    Function_224c448();
    Function_224b39c((int)(v5 + 2), (ushort *)(dword_2257740[27] + 2564 + (v3 << 7)));
    result = (int *)Function_224dad0(v3);
  }
  return result;
}

//----- (0224C41C) --------------------------------------------------------
int Function_224c41c()
{
  return 150;
}

//----- (0224C420) --------------------------------------------------------
int Function_224c420()
{
  return *(uchar *)(dword_2257740[27] + 5091);
}

//----- (0224C434) --------------------------------------------------------
int Function_224c434()
{
  int result;

  result = 5091;
  *(uchar *)(dword_2257740[27] + 5091) = 0;
  return result;
}

//----- (0224C448) --------------------------------------------------------
int Function_224c448()
{
  int v0;
  int v1;
  int v2;
  int v3;
  int v4;

  v0 = 0;
  v1 = 0;
  v2 = 0;
  do
  {
    v3 = dword_2257740[27] + 4788 + v2;
    *(uchar *)(dword_2257740[27] + v0 + 5003) = *(ushort *)v3;
    v2 += 6;
    *(uchar *)(dword_2257740[27] + v0 + 5004) = ((*(ushort *)v3 >> 8) & 0xF)
                                              + (((int)*(ushort *)(v3 + 2) >> 4) & 0xF0);
    *(uchar *)(dword_2257740[27] + v0 + 5005) = *(ushort *)(v3 + 2);
    v4 = dword_2257740[27] + v0;
    v0 += 4;
    *(uchar *)(v4 + 5006) = *(uchar *)(v3 + 4);
    ++v1;
  }
  while ( v1 < 8 );
  return Function_2035f00(55, dword_2257740[27] + 5003, 32);
}

//----- (0224C4CC) --------------------------------------------------------
int __fastcall Function_224c4cc(int a1, int a2, int a3)
{
  int result;
  int v4;
  int v5;
  int v6;
  int v7;
  uchar *v8;
  ushort v9;
  int v10;
  ushort v11;
  short v12;
  uchar v13;

  v10 = a3;
  result = dword_2257740[27];
  if ( dword_2257740[27] )
  {
    v4 = 0;
    do
      Function_224c6ac(v4++);
    while ( v4 < 8 );
    v5 = 0;
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = (uchar *)(v10 + v5);
      v9 = *(uchar *)(v10 + v5);
      v5 += 4;
      v11 = v9;
      v11 = v9 + ((v8[1] << 8) & 0xF00);
      v12 = 16 * v8[1] & 0xF00;
      v12 += v8[2];
      v13 = v8[3];
      if ( v11 != 4095 && v12 != 4095 )
      {
        MI_CpuCopy8((int)&v11, dword_2257740[27] + 4740 + v7, 6u, v9);
        Function_224c588(v11);
      }
      ++v6;
      v7 += 6;
    }
    while ( v6 < 8 );
    result = 5091;
    *(uchar *)(dword_2257740[27] + 5091) = 1;
  }
  return result;
}

//----- (0224C584) --------------------------------------------------------
int Function_224c584()
{
  return 32;
}

//----- (0224C588) --------------------------------------------------------
int __fastcall Function_224c588(short a1, short a2, char a3, int a4)
{
  int result;

  *(uchar *)(dword_2257740[27] + a4 + 4922) = a3;
  *(ushort *)(dword_2257740[27] + 2 * a4 + 4854) = a1;
  result = dword_2257740[27] + 2 * a4;
  *(ushort *)(result + 4888) = a2;
  return result;
}

//----- (0224C5B4) --------------------------------------------------------
int __fastcall Function_224c5b4(int a1, int a2, int a3, int a4)
{
  int result;
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
  int v15;
  int v16;

  v16 = a4;
  result = 5092;
  if ( !*(uchar *)(dword_2257740[27] + 5092) )
  {
    result = *(uchar *)(dword_2257740[27] + 5093);
    if ( *(uchar *)(dword_2257740[27] + 5093) )
    {
      result = *(uint *)(*(uint *)dword_2257740[27] + 60);
      if ( result )
      {
        v5 = GetSpritePositionX(result);
        v6 = GetSpritePositionY(*(uint *)(*(uint *)dword_2257740[27] + 60));
        result = Function_2242e58(v5, v6);
        if ( !result )
        {
          v7 = 0;
          v8 = 0;
          do
          {
            if ( v7 < 8 && !Function_2032ee8(v7) )
            {
              Function_224b61c(v7);
              Function_224d87c(v7);
            }
            result = 4922;
            v9 = *(uchar *)(dword_2257740[27] + v7 + 4922);
            if ( v9 != 255 )
            {
              v12 = *(ushort *)(dword_2257740[27] + v8 + 4854);
              v10 = *(ushort *)(dword_2257740[27] + v8 + 4888);
              if ( *(uchar *)(dword_2257740[27] + v7 + 4837) != 255 )
              {
                v11 = *(uint *)(*(uint *)dword_2257740[27] + 164);
                ((void (*)(void))dword_21E1674[0])();
              }
              v13 = (v12 << 16) + 0x8000;
              v14 = 0;
              v15 = (v10 << 16) + 0x8000;
              result = ((int (__fastcall *)(uint, uint, int, int *, uint, uint))dword_21E19CC[0])(
                         *(uint *)(*(uint *)dword_2257740[27] + 164),
                         *(uint *)(*(uint *)dword_2257740[27] + 48),
                         v9 + 429,
                         &v13,
                         0,
                         *(uint *)(*(uint *)dword_2257740[27] + 80));
              *(uchar *)(dword_2257740[27] + v7 + 4837) = result;
            }
            ++v7;
            v8 += 2;
          }
          while ( v7 < 17 );
        }
      }
    }
  }
  return result;
}

//----- (0224C6AC) --------------------------------------------------------
int __fastcall Function_224c6ac(int a1)
{
  int v1;
  int result;
  int v3;

  v1 = a1;
  result = *(uchar *)(dword_2257740[27] + a1 + 4837);
  if ( result != 255 )
  {
    v3 = *(uint *)(*(uint *)dword_2257740[27] + 164);
    ((void (*)(void))dword_21E1674[0])();
    *(uchar *)(dword_2257740[27] + v1 + 4837) = -1;
    result = 4922;
    *(uchar *)(dword_2257740[27] + v1 + 4922) = -1;
  }
  return result;
}

//----- (0224C6E8) --------------------------------------------------------
int Function_224c6e8()
{
  int result;
  int v1;

  result = dword_2257740[27];
  if ( dword_2257740[27] )
  {
    v1 = 0;
    do
      result = Function_224c6ac(v1++);
    while ( v1 < 17 );
  }
  return result;
}

//----- (0224C708) --------------------------------------------------------
int __fastcall Function_224c708(int a1)
{
  int v1;
  uint **v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = (uint **)LoadOverWorldDataAdress(a1);
  v3 = GetUnknownStruct01_c(v1);
  v4 = v3;
  v5 = *(uint *)(v3 + 16);
  if ( v5 )
  {
    if ( v5 == 1 && !Function_203cd4c(v2) )
    {
      *(uint *)(v4 + 16) = 0;
      return 1;
    }
  }
  else
  {
    Function_203cd44((int)v2);
    ++*(uint *)(v4 + 16);
  }
  return 0;
}

//----- (0224C74C) --------------------------------------------------------
int __fastcall Function_224c74c(int a1)
{
  int v1;
  uint *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v1 = a1;
  v2 = (uint *)LoadOverWorldDataAdress(a1);
  v3 = GetUnknownStruct01_c(v1);
  v7 = v3;
  v8 = *(uint *)(v3 + 16);
  if ( v8 )
  {
    if ( v8 == 1 && Function_20509dc((int)v2) )
    {
      *(uint *)(v7 + 16) = 0;
      return 1;
    }
  }
  else
  {
    Function_203cd00(v2, v4, v5, v6);
    ++*(uint *)(v7 + 16);
  }
  return 0;
}

//----- (0224C790) --------------------------------------------------------
int __fastcall Function_224c790(int a1)
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
  int result;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;

  v1 = a1;
  v2 = LoadOverWorldDataAdress(a1);
  v3 = GetUnknownStruct01_c(v1);
  switch ( (uchar)*(uint *)(v3 + 12) )
  {
    case 0u:
      v4 = Function_23_224dbf4(0);
      Function_224dc08(v4);
      *(uchar *)(v3 + 40) = Function_2035e18();
      Function_2035ec8();
      v5 = Function_22417cc();
      if ( Function_2249ab8(v5, v6, v7, v8) )
        *(uint *)(v3 + 12) = 1;
      goto LABEL_55;
    case 1u:
      Function_200f2c0();
      Function_200f174(2u, 16, 18, 0, 6, 1, 4);
      Function_23_224942c(*(uint **)(v2 + 108));
      Function_2005748(0x603u);
      ++*(uint *)(v3 + 12);
      goto LABEL_55;
    case 2u:
      if ( Function_200f2ac() && !*(uint *)(v2 + 108) )
        ++*(uint *)(v3 + 12);
      goto LABEL_55;
    case 3u:
      if ( Function_224c708(v1) )
        ++*(uint *)(v3 + 12);
      goto LABEL_55;
    case 4u:
      v18 = *(uint *)(v3 + 20);
      v19 = *(uint *)(v3 + 24);
      v20 = *(uint *)(v3 + 28);
      v21 = *(uint *)(v3 + 32);
      v22 = *(uint *)(v3 + 36);
      Function_20544f0(v1, &v18);
      ++*(uint *)(v3 + 12);
      goto LABEL_55;
    case 5u:
      if ( Function_224c74c(v1) )
        ++*(uint *)(v3 + 12);
      goto LABEL_55;
    case 6u:
      *(uint *)(v2 + 108) = Function_23_2249404(v2);
      Function_200f2c0();
      Function_200f174(1u, 17, 19, 0, 6, 1, 4);
      ++*(uint *)(v3 + 12);
      goto LABEL_55;
    case 7u:
      if ( Function_200f2ac() )
      {
        *(uchar *)(v3 + 46) = !Function_2033dfc() || Function_2242e58(*(uint *)(v3 + 28), *(uint *)(v3 + 32));
        Function_2035ea8();
        Function_20594fc();
        Call_LoadFromNARC_RLCN(50, 52, 0, 320, 128, 4);
        Function_200daa4(*(uint **)(v2 + 8), 3u, 985, 11, 2, 4);
        if ( *(uchar *)(v3 + 45) )
        {
          Function_20594ec();
          v9 = Function_224219c();
          Function_2253f40(v9, 51);
          *(uint *)(v3 + 12) = 8;
        }
        else if ( *(uchar *)(dword_2257740[27] + 5094) )
        {
          *(uchar *)(v3 + 41) = 0;
          *(uint *)(v3 + 12) = 9;
        }
        else
        {
          *(uint *)(v3 + 12) = 13;
        }
      }
      goto LABEL_55;
    case 8u:
      v15 = Function_224219c();
      if ( Function_2254238(v15) || !(dword_21BF6C4 & 3) )
      {
        if ( Function_2035e18() > 1 && !*(uchar *)(v3 + 40) )
        {
          *(uint *)(v3 + 12) = 13;
          v17 = Function_224219c();
          Function_2254044(v17);
        }
LABEL_55:
        result = 0;
      }
      else
      {
        *(uint *)(v3 + 12) = 13;
        v16 = Function_224219c();
        Function_2254044(v16);
        result = 0;
      }
      return result;
    case 9u:
      ++*(uchar *)(v3 + 41);
      *(uchar *)(v3 + 41) = 0;
      *(uint *)(v3 + 12) = 10;
      goto LABEL_55;
    case 0xAu:
      if ( (uchar)++*(uchar *)(v3 + 41) > 0xAu )
      {
        if ( Function_2033dfc() && *(uchar *)(v3 + 46) )
          *(uint *)(v3 + 12) = 11;
        else
          *(uint *)(v3 + 12) = 13;
      }
      goto LABEL_55;
    case 0xBu:
      Function_2059624();
      v10 = Function_2065838(1, 36);
      Function_2061550(*(uint *)(v2 + 60), v10, 1);
      Function_20593f4(1);
      v11 = Function_224219c();
      Function_2253f40(v11, 68);
      Function_2005748(0x604u);
      *(uint *)(v3 + 12) = 12;
      goto LABEL_55;
    case 0xCu:
      v12 = Function_224219c();
      if ( !Function_2254238(v12) && dword_21BF6C4 & 3 )
      {
        *(uint *)(v3 + 12) = 13;
        v13 = Function_224219c();
        Function_2254044(v13);
        Function_20593f4(0);
      }
      goto LABEL_55;
    case 0xDu:
      if ( !Function_2033dfc() || Function_2242e58(*(uint *)(v3 + 28), *(uint *)(v3 + 32)) )
        Function_2249b60();
      else
        Function_2249aa4();
      Function_2059638(0);
      Function_2059514();
      free(v3);
      if ( Function_2033dfc() && Function_2242e58(*(uint *)(v3 + 28), *(uint *)(v3 + 32)) )
        Function_2242fa8();
      else
        Function_2242fbc();
      if ( *(uchar *)(dword_2257740[27] + 4836) == 4 && *(uchar *)(dword_2257740[27] + 5094) )
        *(uchar *)(dword_2257740[27] + 4836) = 6;
      else
        *(uchar *)(dword_2257740[27] + 4836) = 0;
      Function_224dc24(dword_2257740[27]);
      Function_23_224dbf4(1);
      return 1;
    default:
      goto LABEL_55;
  }
}

//----- (0224CAF0) --------------------------------------------------------
uint *__fastcall Function_224caf0(int a1, int a2, int a3, int a4, char a5, char a6)
{
  int v6;
  uint *result;

  v6 = a1;
  result = (uint *)Function_224bcc4(a1, a2, a3, a4, a5, a5);
  if ( result )
  {
    *((uchar *)result + 45) = a6;
    result = OverWorldData_InitUnknownStruct01(v6, (int)Function_224c790, (int)result);
  }
  return result;
}

//----- (0224CB1C) --------------------------------------------------------
uint __fastcall Function_224cb1c(int *a1, int *a2)
{
  int v2;
  uint result;
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
  int v15;
  char v16;
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
  int v29;
  int v30;
  int *v31;
  char v32;

  v2 = (int)a2;
  v31 = a1;
  result = a2[3];
  v4 = 0;
  v5 = *a2;
  switch ( (uchar)result )
  {
    case 0:
      v6 = LoadVariableAreaAdress_c_2(*(uint *)(v5 + 12));
      *(uchar *)(v2 + 18) = Function_202988c(v6);
      Function_20594fc();
      v7 = Function_224219c();
      Function_2254098(v7, 33);
      Function_2005748(0x61Eu);
      v8 = Function_205eb3c(*(uint *)(v5 + 60));
      ((void (__fastcall *)(int))dword_21F58FC[0])(v8);
      v9 = Function_224219c();
      Function_2253f40(v9, 33);
      *(uint *)(v2 + 12) = 1;
      result = 0;
      *(uchar *)(v2 + 17) = 0;
      goto LABEL_31;
    case 1:
      v10 = Function_224219c();
      result = Function_2254238(v10);
      if ( !result )
      {
        result = (uchar)++*(uchar *)(v2 + 17);
        if ( result > 0x1E )
        {
          result = 2;
          *(uint *)(v2 + 12) = 2;
        }
      }
      goto LABEL_31;
    case 2:
      v11 = Function_203608c();
      v12 = Function_2058d88(v11);
      v13 = Function_203608c();
      v14 = Function_2058dc0(v13);
      v15 = GetSpriteFaceDirection(*(uint *)(v5 + 60));
      v16 = Function_2059328(v15);
      v17 = Function_224219c();
      Function_2253f40(v17, 34);
      Function_224c588(v12, v14, v16, 16);
      ((void (__fastcall *)(int, int, uint, int))dword_21F5634[0])(v5, v12, 0, v14);
      result = 3;
      *(uint *)(v2 + 12) = 3;
      goto LABEL_31;
    case 3:
      v18 = Function_224219c();
      result = Function_2254238(v18);
      if ( !result )
      {
        v19 = Function_203608c();
        if ( Function_224bd1c(v19, 0) )
        {
          v20 = 57;
          *(uint *)(v2 + 12) = 4;
        }
        else
        {
          if ( *(uchar *)(v2 + 18) )
            v20 = 36;
          else
            v20 = 35;
          *(uint *)(v2 + 12) = 5;
        }
        v21 = Function_224219c();
        result = Function_2253f40(v21, v20);
      }
      goto LABEL_31;
    case 4:
      v22 = Function_224219c();
      result = Function_2254238(v22);
      if ( !result )
      {
        result = 1;
        if ( dword_21BF6C4 & 1 )
          v4 = 1;
      }
      goto LABEL_31;
    case 5:
      v23 = Function_224219c();
      result = Function_2254238(v23);
      if ( !result )
      {
        *(uint *)(v2 + 8) = Function_2002100(
                                *(uint **)(v5 + 8),
                                (uchar *)dword_2256864,
                                985,
                                11,
                                4u);
        result = 6;
        *(uint *)(v2 + 12) = 6;
      }
      goto LABEL_31;
    case 6:
      result = Function_2002114(a2[2], 4u);
      if ( result )
      {
        if ( result != -1 )
        {
          result = 0;
          v4 = 1;
          *(uint *)(v2 + 8) = 0;
        }
      }
      else
      {
        *(uint *)(v2 + 12) = 9;
        result = 0;
        *(uint *)(v2 + 8) = 0;
      }
      goto LABEL_31;
    case 7:
    case 8:
      goto LABEL_31;
    case 9:
      Function_224fd68(33);
      v24 = Function_224219c();
      Function_2254044(v24);
      Function_2249a74();
      result = 10;
      *(uint *)(v2 + 12) = 10;
      goto LABEL_31;
    case 0xA:
      result = Function_2033dfc();
      if ( !result || (result = Function_203608c()) != 0 )
      {
LABEL_31:
        if ( v4 )
        {
          v25 = Function_224219c();
          Function_2253f40(v25, 56);
          Function_224c6ac(16);
          v26 = Function_203608c();
          v27 = Function_2058d88(v26);
          v28 = Function_203608c();
          v29 = Function_2058dc0(v28);
          ((void (__fastcall *)(int, int, uint, int))dword_21F5634[0])(v5, v27, 0, v29);
          Call_RemoveTaskFromTaskList(v31);
          free(v2);
          v30 = Function_2243204();
          result = Function_224dc24(v30);
        }
      }
      else
      {
        v32 = 2;
        if ( *(uchar *)(v2 + 18) )
          v32 = 3;
        Function_224d238();
        Function_20360d0(86, (int)&v32);
        Call_RemoveTaskFromTaskList(v31);
        free(v2);
        result = Function_2243204();
      }
      return result;
  }
}

//----- (0224CD68) --------------------------------------------------------
int __fastcall Function_224cd68(int a1, int a2, int a3, int a4)
{
  int v5;

  v5 = a4;
  LOBYTE(v5) = 0;
  return Function_20360d0(86, (int)&v5);
}

//----- (0224CD7C) --------------------------------------------------------
int Function_224cd7c()
{
  return 2;
}

//----- (0224CD80) --------------------------------------------------------
int __fastcall Function_224cd80(int a1, int a2, uchar *a3, int a4)
{
  int v4;
  uchar *v5;
  int v6;
  int v7;
  char v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  char v20;
  char v21;
  int v22;

  v22 = a4;
  v4 = a1;
  v5 = a3;
  v6 = Function_2058ee0(a1);
  v7 = Function_2058f18(v4);
  v16 = Function_2058f80(v4);
  Function_2058df8(v4);
  if ( v7 == Function_2058e4c(v4) )
  {
    v18 = v7 + 1;
    v15 = v7 - 1;
    v19 = v6;
    v17 = v6;
  }
  else
  {
    v19 = v6 + 1;
    v17 = v6 - 1;
    v18 = v7;
    v15 = v7;
  }
  v20 = v4;
  if ( *v5 )
    v8 = 5;
  else
    v8 = 0;
  v21 = v8;
  v9 = Function_224b65c(v6, v7);
  if ( *v5 || v9 == 255 )
  {
    if ( Function_2242e58(v6, v7) )
    {
      v21 = 6;
    }
    else if ( Function_2054f68(*(uint *)dword_2257740[27], v6, v7, v10)
           && Function_2054f68(*(uint *)dword_2257740[27], v19, v18, v11)
           && Function_2054f68(*(uint *)dword_2257740[27], v17, v15, v12) )
    {
      if ( *v5 )
      {
        Function_224c1ec(v6, v7, v16, 16);
        if ( Function_224b79c(16, v4) )
        {
          v13 = (uchar)*v5;
          switch ( v13 )
          {
            case 1:
              v21 = 2;
              break;
            case 2:
              v21 = 4;
              break;
            case 3:
              v21 = 3;
              break;
          }
        }
      }
      else
      {
        v21 = 1;
      }
    }
  }
  return Function_2035b48(87, (int)&v20);
}

//----- (0224CE94) --------------------------------------------------------
int __fastcall Function_224ce94(int *a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = a2;
  Function_224c6ac(16);
  v4 = *(uint *)(v3 + 8);
  if ( v4 )
    Function_2002154(v4, 4u);
  Call_RemoveTaskFromTaskList(v2);
  free(v3);
  Function_2243204();
  v5 = Function_2059514();
  return Function_224dc24(v5);
}

//----- (0224CEC8) --------------------------------------------------------
int __fastcall Function_224cec8(int a1)
{
  int v1;

  Function_224dc08(a1);
  v1 = malloc2(4u, 20);
  MI_CpuFill8((ushort *)v1, 0, 0x14u);
  *(uint *)(v1 + 12) = 0;
  *(uchar *)(v1 + 16) = Function_203608c();
  *(uint *)v1 = *(uint *)dword_2257740[27];
  *(uint *)(v1 + 4) = AddTaskToTaskList1((int)Function_224cb1c, v1, 0x64u);
  return Function_22431ec(v1, *(uint *)(v1 + 4), (int)Function_224ce94);
}

//----- (0224CF18) --------------------------------------------------------
uint __fastcall Function_224cf18(int a1, int a2, uchar *a3)
{
  uchar *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint result;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  short v16;
  short v17;
  int v18;
  uchar *v19;
  int v20;

  v3 = a3;
  v4 = GetOverWorldData_VariableAreaAdresses(*(uint *)dword_2257740[27]);
  v5 = Function_20298a0(v4);
  v6 = *v3;
  v7 = v5;
  result = Function_203608c();
  if ( v6 == result )
  {
    v9 = v3[1];
    if ( v3[1] )
    {
      switch ( v9 )
      {
        case 1:
          result = Function_224cec8(1);
          break;
        case 6:
          Function_20594fc();
          v12 = Function_224219c();
          v13 = Function_2253f40(v12, 74);
          result = Function_224dc24(v13);
          break;
        case 5:
          Function_20594fc();
          v14 = Function_224219c();
          Function_2253f40(v14, 88);
          v15 = Function_2249aa4();
          result = Function_224dc24(v15);
          break;
        default:
          result = (v9 + 254) & 0xFF;
          if ( result <= 2 )
          {
            v16 = Function_2058d88(v6);
            v17 = Function_2058dc0(*v3);
            v18 = Function_2058f50(*v3);
            Function_224c1ec(v16, v17, v18, *v3);
            Function_224c1ec(v16, v17, v18, 16);
            if ( v3[1] == 3 )
              Function_2029824(v7);
            result = (v3[1] + 253) & 0xFF;
            if ( result <= 1 )
            {
              v19 = Function_202be20(0xBu);
              Function_202b758(*(uint *)(*(uint *)dword_2257740[27] + 156), (int)v19, 1u);
              v20 = LoadVariableAreaAdress_14(*(uint *)(*(uint *)dword_2257740[27] + 12));
              result = Function_202cfec(v20, 35);
            }
          }
          break;
      }
    }
    else
    {
      Function_20594fc();
      v10 = Function_224219c();
      v11 = Function_2253f40(v10, 54);
      result = Function_224dc24(v11);
    }
  }
  return result;
}

//----- (0224D020) --------------------------------------------------------
int __fastcall Function_224d020(int a1)
{
  int v1;
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
  if ( !dword_2257740[27] )
    return 0;
  v3 = 0;
  while ( 1 )
  {
    v4 = *(uchar *)(dword_2257740[27] + v3 + 4987);
    if ( v4 != 255 )
    {
      *(uchar *)(dword_2257740[27] + v3 + 4987) = -1;
      if ( v3 != v4 )
      {
        v5 = Function_2032ee8(v3);
        v6 = Function_2032ee8(v4);
        if ( Function_224223c(v5, v6, 0x68u, v1) )
          return 1;
      }
    }
    if ( *(uchar *)(dword_2257740[27] + v3 + 4939) != 255 )
    {
      v7 = Function_2032ee8(v3);
      v8 = Function_2032ee8(*(uchar *)(dword_2257740[27] + v3 + 4939));
      *(uchar *)(dword_2257740[27] + v3 + 4939) = -1;
      if ( Function_224223c(v7, v8, 0x6Cu, v1) )
        return 1;
    }
    if ( *(uchar *)(dword_2257740[27] + v3 + 4955) != 255 )
      break;
    if ( *(uchar *)(dword_2257740[27] + v3 + 4947) != 255 )
    {
      v10 = Function_2032ee8(v3);
      v11 = Function_2032ee8(*(uchar *)(dword_2257740[27] + v3 + 4947));
      *(uchar *)(dword_2257740[27] + v3 + 4947) = -1;
      if ( Function_224223c(v10, v11, 0x6Eu, v1) )
        return 1;
    }
    if ( ++v3 >= 8 )
      return 0;
  }
  v9 = Function_2032ee8(v3);
  *(uchar *)(dword_2257740[27] + v3 + 4955) = -1;
  if ( Function_22422a8(v9, 0, 0x6Du, v1) )
    return 1;
  return 0;
}

//----- (0224D130) --------------------------------------------------------
int Function_224d130()
{
  int v0;
  int result;

  if ( dword_2257740[27] && (v0 = *(uint *)(dword_2257740[27] + 2560)) != 0 )
    result = v0 + 2;
  else
    result = 0;
  return result;
}

//----- (0224D150) --------------------------------------------------------
int Function_224d150()
{
  uchar *v0;
  int result;

  if ( dword_2257740[27] && (v0 = *(uchar **)(dword_2257740[27] + 2560)) != 0 )
    result = (uchar)byte_225760C[*v0];
  else
    result = 0;
  return result;
}

//----- (0224D178) --------------------------------------------------------
int Function_224d178()
{
  uchar *v0;
  int result;

  if ( dword_2257740[27] && (v0 = *(uchar **)(dword_2257740[27] + 2560)) != 0 )
    result = (uchar)byte_2257620[*v0];
  else
    result = 0;
  return result;
}

//----- (0224D1A0) --------------------------------------------------------
int __fastcall Function_23_224d1a0(int a1, int a2)
{
  uint v2;
  uint v3;
  int result;
  char *v5;
  char *v6;
  int v7;
  int v8;

  v2 = a1;
  v3 = a2;
  if ( !dword_2257740[27] )
    return 1;
  if ( a2 >= 64 )
    return 1;
  v5 = byte_225760C;
  v6 = byte_2257620;
  v7 = a2 / 32;
  v8 = 0;
  while ( a1 / 32 != (uchar)*v5 || v7 != (uchar)*v6 )
  {
    ++v8;
    ++v5;
    ++v6;
    if ( v8 >= 17 )
      return 1;
  }
  result = 1;
  if ( !(*(uint *)(dword_2257740[27] + (v8 << 7) + 4 * ((v3 >> 31) + __ROR4__((v3 << 27) - (v3 >> 31), 27)) + 2564) & (1 << (((v2 & 0x80000000) != 0) + __ROR4__((v2 << 27) - (v2 >> 31), 27)))) )
    result = 0;
  return result;
}

//----- (0224D238) --------------------------------------------------------
int __fastcall Function_224d238(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  long long v12;
  long long v13;
  long long v14;
  int v15;
  long long v16;
  int v17;
  int v18;
  int v19;
  int *v20;
  int *v21;
  char v22;
  uint v23;
  int v25;
  short v26;
  short v27;
  ushort *v28;
  long long v29;
  long long v30;
  long long v31;
  int v32;
  int v33;
  int v34;

  v34 = a4;
  v4 = GetOverWorldData_VariableAreaAdresses(*(uint *)dword_2257740[27]);
  v28 = (ushort *)LoadVariableAreaAdress_c_2(v4);
  v5 = GetOverWorldData_VariableAreaAdresses(*(uint *)dword_2257740[27]);
  v6 = LoadVariableAreaAdress_c(v5);
  v27 = Function_2058ee0(0);
  v26 = Function_2058f18(0);
  v25 = Function_2058f80(0);
  v32 = 16;
  v33 = 12;
  v7 = LoadFlagAdress(*(uint *)(*(uint *)dword_2257740[27] + 12));
  Function_206aa20(v7);
  Function_20292cc(v28);
  Function_2028b34(v6);
  Function_20361bc(&v29, v8, v9, v10);
  v11 = 0;
  do
  {
    v12 = ll_mul(v30, v29);
    v13 = v31 + v12;
    v29 = v31 + v12;
    v14 = ll_mul((ull)(v31 + v12) >> 32, 5LL);
    if ( SHIDWORD(v14) >= 2 )
      v15 = 2 * (HIDWORD(v14) - 3) + 18;
    else
      v15 = 2 * HIDWORD(v14) + 10;
    v16 = ll_mul(v30, v13);
    v29 = v31 + v16;
    v17 = 2 * ((ull)ll_mul((ull)(v31 + v16) >> 32, 6LL) >> 32) + 12;
    v18 = 1;
    v19 = 0;
    if ( v11 >= 0 )
    {
      v20 = &v32;
      while ( v15 != *v20 || v17 != v20[1] )
      {
        ++v19;
        v20 += 2;
        if ( v19 > v11 )
          goto LABEL_11;
      }
      v18 = 0;
    }
LABEL_11:
    if ( v18 )
    {
      Function_2029364((int)v28, v11 + 16, v15, v17);
      v21 = &v32 + 2 * v11;
      v21[2] = v15;
      v21[3] = v17;
    }
    else
    {
      --v11;
    }
    ++v11;
  }
  while ( v11 < 16 );
  MI_CpuFill8((ushort *)(dword_2257740[27] + 2564), 255, 0x880u);
  v22 = Function_2059328(v25);
  Function_2029854((int)v28, v27, v26, v22);
  MI_CpuCopy8((int)v28, dword_2257740[27] + 2410, 0x94u, v23);
  return Function_224b39c((int)v28, (ushort *)(dword_2257740[27] + 4612));
}

//----- (0224D39C) --------------------------------------------------------
int __fastcall Function_224d39c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_22421cc();
  return Function_2253f40(v2, v1);
}

//----- (0224D3B0) --------------------------------------------------------
int Function_224d3b0()
{
  int v0;

  v0 = Function_22421cc();
  return Function_2254044(v0);
}

//----- (0224D3BC) --------------------------------------------------------
int __fastcall Function_224d3bc(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_22421cc();
  return Function_22541c8(v2, 0, v1);
}

//----- (0224D3D0) --------------------------------------------------------
int __fastcall Function_224d3d0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = a2;
  v4 = Function_22421cc();
  return Function_2254154(v4, v3, v2);
}

//----- (0224D3E4) --------------------------------------------------------
int __fastcall Function_224d3e4(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  char *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v12;
  int v13;
  int v14;

  v3 = a1;
  v12 = a2;
  v13 = a3;
  v4 = 0;
  do
  {
    v5 = Function_20293b0(v3, v4);
    v14 = v5;
    if ( v5 )
    {
      if ( v4 )
      {
        if ( v4 < 16 )
        {
          v6 = Function_205741c(v5);
          v7 = Function_20293fc(v3, v4);
          v8 = Function_202942c(v3, v4);
          v9 = v12 - v7;
          v10 = v13 - v8;
          if ( v12 - v7 >= 0 && v9 <= 2 && v10 >= 0 && v10 <= 2 && v6[3 * v10 + v9] )
            return v14;
        }
      }
    }
    ++v4;
  }
  while ( v4 < 32 );
  return 0;
}

//----- (0224D454) --------------------------------------------------------
int __fastcall Function_224d454(int a1, ushort *a2, int a3, int a4)
{
  uint v4;
  uint v5;
  int v6;
  int v7;
  int v8;
  char v10;
  char v11;
  int v12;

  v12 = a4;
  v4 = *a2;
  v5 = a2[1];
  v6 = a1;
  if ( Function_23_224d1a0(v4, v5) )
    return 0;
  v10 = v6;
  v7 = Function_224b05c(v4, v5);
  v8 = Function_224d3e4(
         dword_2257740[27] + 10 + 150 * v7,
         (v4 >> 31) + __ROR4__((v4 << 27) - (v4 >> 31), 27),
         (v5 >> 31) + __ROR4__((v5 << 27) - (v5 >> 31), 27));
  v11 = Function_205746c(v8);
  if ( !v11 )
    return 0;
  Function_2059058(v6, 0);
  Function_2035b48(60, (int)&v10);
  return 1;
}

//----- (0224D4CC) --------------------------------------------------------
int __fastcall Function_224d4cc(int a1, int a2, uchar *a3)
{
  uchar *v3;
  int v4;
  int result;

  v3 = a3;
  v4 = Function_20298ac(*(uint *)(dword_2257740[27] + 2560) + 2);
  result = Function_203608c();
  if ( *v3 == result )
    result = Function_2253a00(v4, v3[1]);
  return result;
}

//----- (0224D4FC) --------------------------------------------------------
int Function_224d4fc()
{
  return 2;
}

//----- (0224D500) --------------------------------------------------------
int __fastcall Function_224d500(int result, char a2)
{
  int v2;

  if ( dword_2257740[27] )
  {
    v2 = dword_2257740[27] + result;
    result = 4939;
    *(uchar *)(v2 + 4939) = a2;
  }
  return result;
}

//----- (0224D518) --------------------------------------------------------
int __fastcall Function_224d518(int result, char a2)
{
  int v2;

  if ( dword_2257740[27] )
  {
    v2 = dword_2257740[27] + result;
    result = 4947;
    *(uchar *)(v2 + 4947) = a2;
  }
  return result;
}

//----- (0224D530) --------------------------------------------------------
int __fastcall Function_224d530(int result)
{
  int v1;

  if ( dword_2257740[27] )
  {
    v1 = dword_2257740[27] + result;
    result = 4955;
    *(uchar *)(v1 + 4955) = 1;
  }
  return result;
}

//----- (0224D54C) --------------------------------------------------------
int __fastcall Function_224d54c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  char v7;
  int v8;

  v8 = a4;
  v4 = a1;
  v5 = ((int (__fastcall *)(uint, uint))dword_21E18C4[0])(*(uint *)(*(uint *)dword_2257740[27] + 164), 0);
  ((void (__fastcall *)(char *, int))dword_21E1894[0])(&v7, v5);
  ((void (__fastcall *)(uint, uint))dword_21E1674[0])(0, *(uint *)(*(uint *)dword_2257740[27] + 164));
  return ((int (__fastcall *)(uint, uint, int, char *, uint, uint))dword_21E19CC[0])(
           *(uint *)(*(uint *)dword_2257740[27] + 164),
           *(uint *)(*(uint *)dword_2257740[27] + 48),
           *(uchar *)(v4 + 5) + 317,
           &v7,
           0,
           *(uint *)(*(uint *)dword_2257740[27] + 80));
}

//----- (0224D5A8) --------------------------------------------------------
int __fastcall Function_224d5a8(int *a1, int a2)
{
  int *v2;

  v2 = a1;
  free(a2);
  return Call_RemoveTaskFromTaskList(v2);
}

//----- (0224D5BC) --------------------------------------------------------
int *__fastcall Function_224d5bc(int *a1, int **a2)
{
  int v2;
  int *v3;
  int *result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v2 = (int)a2;
  v3 = a1;
  result = *a2;
  switch ( (uchar)*a2 )
  {
    case 0u:
      Function_20594fc();
      v5 = Function_22421ac();
      Function_2253f40(v5, 7);
      Function_2005748(0x5E3u);
      result = (int *)1;
      *(uint *)v2 = 1;
      break;
    case 1u:
      v6 = Function_22421ac();
      result = (int *)Function_2254238(v6);
      if ( !result )
      {
        result = (int *)3;
        if ( dword_21BF6C4 & 3 )
        {
          v7 = Function_22421ac();
          Function_2253f40(v7, *(uchar *)(v2 + 5) + 14);
          result = (int *)2;
          *(uint *)v2 = 2;
        }
      }
      break;
    case 2u:
      v8 = Function_22421ac();
      result = (int *)Function_2254238(v8);
      if ( !result )
      {
        result = (int *)3;
        if ( dword_21BF6C4 & 3 )
        {
          Function_224d54c(v2, dword_21BF6C4, v9, v10);
          *(uint *)v2 = 4;
          v11 = Function_22421ac();
          Function_2254044(v11);
          result = (int *)Function_2059514();
        }
      }
      break;
    case 3u:
      result = Function_200f174(2u, 0, 0, 0, 6, 1, 4);
      break;
    case 4u:
      free((int)a2);
      Call_RemoveTaskFromTaskList(v3);
      result = (int *)Function_2243204();
      break;
    default:
      return result;
  }
  return result;
}

//----- (0224D698) --------------------------------------------------------
int __fastcall Function_23_224d698(char a1, int a2, uchar *a3, int a4)
{
  int v5;

  v5 = a4;
  LOBYTE(v5) = a1;
  BYTE1(v5) = *a3;
  return Function_2035b48(97, (int)&v5);
}

//----- (0224D6AC) --------------------------------------------------------
int __fastcall Function_23_224d6ac(int a1, int a2, uchar *a3)
{
  uchar *v3;
  int result;
  int v5;
  uint *v6;

  v3 = a3;
  result = Function_203608c();
  if ( *v3 == result )
  {
    v5 = malloc(0xBu, 8);
    MI_CpuFill8((ushort *)v5, 0, 4u);
    *(uint *)v5 = 0;
    *(uchar *)(v5 + 5) = v3[1];
    v6 = AddTaskToTaskList1((int)Function_224d5bc, v5, 0x64u);
    result = Function_22431ec(v5, (int)v6, (int)Function_224d5a8);
  }
  return result;
}

//----- (0224D6F4) --------------------------------------------------------
int Function_23_224d6f4()
{
  return 2;
}

//----- (0224D6F8) --------------------------------------------------------
int __fastcall Function_224d6f8(int a1, int a2, int a3)
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
  v4 = a2;
  v10 = a3;
  v5 = 0;
  do
  {
    v6 = Function_20293b0(v3, v5);
    v11 = v6;
    if ( v6 )
    {
      if ( v5 )
      {
        if ( v5 < 16 )
        {
          Function_205741c(v6);
          v7 = Function_20293fc(v3, v5);
          v8 = v10 - Function_202942c(v3, v5);
          if ( v4 == v7 && !v8 )
            return v11;
        }
      }
    }
    ++v5;
  }
  while ( v5 < 32 );
  return 0;
}

//----- (0224D750) --------------------------------------------------------
int __fastcall Function_224d750(char a1)
{
  int result;

  switch ( a1 )
  {
    case 56:
      result = 11;
      break;
    case 57:
      result = 12;
      break;
    case 58:
      result = 18;
      break;
    case 59:
      result = 19;
      break;
    case 60:
      result = 20;
      break;
    case 61:
      result = 21;
      break;
    case 62:
      result = 22;
      break;
    case 63:
      result = 23;
      break;
    case 64:
      result = 24;
      break;
    case 65:
      result = 25;
      break;
    case 66:
      result = 26;
      break;
    case 67:
      result = 27;
      break;
    case 68:
      result = 28;
      break;
    case 69:
      result = 29;
      break;
    case 70:
      result = 30;
      break;
    case 71:
      result = 31;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

//----- (0224D7C8) --------------------------------------------------------
int __fastcall Function_224d7c8(int a1)
{
  int v1;
  uint v2;
  uint v3;
  int v5;
  char v6;
  int v7;
  char v8;

  v1 = a1;
  v2 = Function_2058df8(a1);
  v3 = Function_2058e4c(v1);
  v8 = Function_2058f80(v1);
  if ( !Function_2242e58(v2, v3) )
    return 0;
  if ( Function_23_224d1a0(v2, v3) != 1 )
    return 0;
  if ( *(uchar *)(dword_2257740[27] + v1 + 4995) )
    return 0;
  v5 = Function_224b05c(v2, v3);
  v6 = Function_224d6f8(
         dword_2257740[27] + 10 + 150 * v5,
         (v2 >> 31) + __ROR4__((v2 << 27) - (v2 >> 31), 27),
         (v3 >> 31) + __ROR4__((v3 << 27) - (v3 >> 31), 27));
  v7 = Function_224d750(v6);
  if ( !v7 )
    return 0;
  *(uchar *)(dword_2257740[27] + v1 + 4995) = 1;
  Function_22443cc(v1, 255, v7, v2, v3, v8);
  return 1;
}

//----- (0224D87C) --------------------------------------------------------
int __fastcall Function_224d87c(int a1)
{
  if ( dword_2257740[27] )
    *(uchar *)(dword_2257740[27] + a1 + 4995) = 0;
  return 0;
}

//----- (0224D898) --------------------------------------------------------
int Function_224d898()
{
  int v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  char v11;

  MI_CpuFill8(&v11, 0, 8u);
  v0 = 0;
  v1 = &v11;
  do
  {
    if ( Function_2035d78((ushort)v0) )
    {
      v10 = Function_2058df8(v0);
      v2 = Function_2058e4c(v0);
      if ( v10 != 0xFFFF || v2 != 0xFFFF )
      {
        v3 = Function_224b05c(v10, v2);
        v4 = v3;
        if ( v0 != v3
          && v3 != 16
          && !Function_2035d78((ushort)v3)
          && *(uchar *)(dword_2257740[27] + v0 + 4971) == 255
          && *(uchar *)(dword_2257740[27] + v0 + 4979) == 255
          && Function_2242e58(v10, v2)
          && !*v1 )
        {
          Function_224b844(v4, v0, 1);
          *v1 = 1;
        }
      }
    }
    ++v0;
    ++v1;
  }
  while ( v0 < 8 );
  result = Function_203608c();
  v6 = result;
  if ( *(uchar *)(dword_2257740[27] + 4836) == 6 )
  {
    v7 = Function_2058df8(result);
    v8 = Function_2058e4c(v6);
    if ( v7 != 0xFFFF || v8 != 0xFFFF )
    {
      if ( Function_2242e58(v7, v8) )
      {
        v9 = Function_224b05c(v7, v8);
        if ( !*(&v11 + v6) )
        {
          Function_224b844(v9, v6, 1);
          *(&v11 + v6) = 1;
        }
      }
    }
    result = (uchar)*(&v11 + v6);
    if ( *(&v11 + v6) )
    {
      result = 4836;
      *(uchar *)(dword_2257740[27] + 4836) = 0;
    }
  }
  return result;
}

//----- (0224D9AC) --------------------------------------------------------
int __fastcall Function_224d9ac(int a1, char a2)
{
  int v2;
  int result;
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
  uint *v15;
  int v16;
  int v17;
  int v18;
  char v19;

  v2 = a1;
  v19 = a2;
  if ( *(uchar *)(dword_2257740[27] + a1 + 4963) == 255 )
    return 0;
  v4 = Function_203608c();
  v5 = Function_2058ca0(v4);
  v6 = Function_203608c();
  v7 = Function_2058cf4(v6);
  if ( Function_2242e58(v5, v7) )
  {
    v8 = Function_22535ec();
    Function_224f24c(v8);
    Function_224321c();
    v9 = Function_203608c();
    Function_2244858(v9);
    v10 = *(ushort *)(dword_2257740[27] + 5084);
    v11 = *(ushort *)(dword_2257740[27] + 5086);
    v12 = *(uchar *)(dword_2257740[27] + 5088);
    if ( !*(ushort *)(dword_2257740[27] + 5084) || !*(ushort *)(dword_2257740[27] + 5086) )
      ErrorHandler();
    v13 = GetWalkPositionXChange(v12);
    v14 = GetWalkPositionYChange(v12);
    *(uchar *)(dword_2257740[27] + 5094) = 0;
    v15 = Function_224caf0(*(uint *)dword_2257740[27], v10 + v13, v11 + v14, v12, v2, v19);
    Function_2249ab8((int)v15, v16, v17, v18);
    *(uint *)(dword_2257740[27] + 2560) = 0;
    *(uchar *)(dword_2257740[27] + v2 + 4963) = -1;
    result = 1;
  }
  else
  {
    *(uchar *)(dword_2257740[27] + v2 + 4963) = -1;
    result = 0;
  }
  return result;
}

//----- (0224DA8C) --------------------------------------------------------
int Function_224da8c()
{
  int result;

  result = 4836;
  if ( *(uchar *)(dword_2257740[27] + 4836) == 1 )
  {
    *(uchar *)(dword_2257740[27] + 4836) = 2;
    Function_20578dc();
    result = Function_224b5cc(0);
  }
  return result;
}

//----- (0224DAB4) --------------------------------------------------------
int Function_224dab4()
{
  int result;

  result = 4836;
  if ( *(uchar *)(dword_2257740[27] + 4836) == 5 )
    *(uchar *)(dword_2257740[27] + 4836) = 4;
  return result;
}

//----- (0224DAD0) --------------------------------------------------------
int __fastcall Function_224dad0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int result;
  int v7;

  v1 = a1;
  v2 = Function_2058ea0(a1);
  v3 = Function_2058ec0(v1);
  v4 = v3;
  result = Function_2054f68(*(uint *)dword_2257740[27], v2, v3, v5);
  if ( result || v1 && (result = Function_2033dfc()) == 0 )
  {
    if ( v2 != 0xFFFF || v4 != 0xFFFF )
    {
      if ( Function_2242e58(v2, v4) || (result = Function_2054f68(*(uint *)dword_2257740[27], v2, v4, v7)) != 0 )
        result = Function_224b844(v1, v1, 1);
    }
    else
    {
      result = Function_224b844(v1, v1, 1);
    }
  }
  return result;
}

//----- (0224DB48) --------------------------------------------------------
int Function_224db48()
{
  int result;

  if ( dword_2257740[27] )
    result = *(ushort *)(dword_2257740[27] + 5084);
  else
    result = 72;
  return result;
}

//----- (0224DB64) --------------------------------------------------------
int Function_224db64()
{
  int result;

  if ( dword_2257740[27] )
    result = *(ushort *)(dword_2257740[27] + 5086);
  else
    result = 437;
  return result;
}

//----- (0224DB84) --------------------------------------------------------
int Function_224db84()
{
  int result;

  if ( dword_2257740[27] )
    result = *(uchar *)(dword_2257740[27] + 5088);
  else
    result = 1;
  return result;
}

//----- (0224DBA0) --------------------------------------------------------
int __fastcall Function_224dba0(int result, short a2)
{
  int v2;

  if ( dword_2257740[27] )
  {
    v2 = dword_2257740[27] + 2 * result;
    result = 5036;
    *(ushort *)(v2 + 5036) = a2;
  }
  return result;
}

//----- (0224DBBC) --------------------------------------------------------
int __fastcall Function_224dbbc(int result, short a2)
{
  int v2;

  if ( dword_2257740[27] )
  {
    v2 = dword_2257740[27] + 2 * result;
    result = 5052;
    *(ushort *)(v2 + 5052) = a2;
  }
  return result;
}

//----- (0224DBD8) --------------------------------------------------------
int __fastcall Function_224dbd8(int result, short a2)
{
  int v2;

  if ( dword_2257740[27] )
  {
    v2 = dword_2257740[27] + 2 * result;
    result = 5068;
    *(ushort *)(v2 + 5068) = a2;
  }
  return result;
}

//----- (0224DBF4) --------------------------------------------------------
char __fastcall Function_23_224dbf4(char result)
{
  *(uchar *)(dword_2257740[27] + 5093) = result;
  return result;
}

//----- (0224DC08) --------------------------------------------------------
int Function_224dc08()
{
  Function_2032174(1);
  Function_2032138(1);
  Function_2036814(1);
  return Function_20340fc();
}

//----- (0224DC24) --------------------------------------------------------
int Function_224dc24()
{
  Function_2032174(0);
  Function_2032138(0);
  Function_2036814(0);
  return Function_20340fc();
}

//----- (0224DC40) --------------------------------------------------------
int __fastcall Function_224dc40(int a1, char a2, int a3, int a4)
{
  int v5;

  v5 = a4;
  LOBYTE(v5) = *(ushort *)(a1 + 44);
  BYTE1(v5) = a2;
  return Function_20360d0(74, (int)&v5);
}

//----- (0224DC54) --------------------------------------------------------
int __fastcall Function_224dc54(int a1, char a2, int a3, int a4)
{
  int v5;

  v5 = a4;
  LOBYTE(v5) = *(ushort *)(a1 + 48);
  BYTE1(v5) = a2;
  return Function_20360d0(73, (int)&v5);
}

//----- (0224DC68) --------------------------------------------------------
int __fastcall Function_224dc68(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  if ( a2 >= 136 )
  {
    v3 = Function_2032ee8(*(ushort *)(a1 + 48));
    if ( GetGender(v3) == 1 )
      v2 += 19;
  }
  v4 = Function_224219c();
  return Function_2253f40(v4, v2);
}

//----- (0224DC90) --------------------------------------------------------
int __fastcall Function_224dc90(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  if ( a2 >= 136 )
  {
    v3 = Function_2032ee8(*(ushort *)(a1 + 44));
    if ( GetGender(v3) == 1 )
      v2 += 19;
  }
  v4 = Function_224219c();
  return Function_2253f40(v4, v2);
}

//----- (0224DCB8) --------------------------------------------------------
uint *__fastcall Function_224dcb8(short a1, int a2, int a3)
{
  short v3;
  int v4;
  int v5;
  int v6;
  uint *result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = malloc(0x21u, 60);
  MI_CpuFill8((ushort *)v6, 0, 0x3Cu);
  dword_2257740[29] = v6;
  *(uint *)(v6 + 8) = v5;
  *(uint *)(v6 + 44) = v4;
  *(ushort *)(v6 + 48) = v3;
  *(uchar *)(v6 + 55) = 1;
  *(uchar *)(v6 + 56) = 0;
  *(uchar *)(v6 + 41) = 0;
  *(uchar *)(v6 + 42) = 0;
  *(uchar *)(v6 + 40) = *(ushort *)(v6 + 48);
  Function_2005748(0x5DCu);
  Function_224dc68(v6, 0);
  result = AddTaskToTaskList1((int)Function_224e2d8, v6, 0x2710u);
  *(uint *)v6 = result;
  return result;
}

//----- (0224DD2C) --------------------------------------------------------
int __fastcall Function_224dd2c(int a1)
{
  int v1;
  int *v2;
  ushort **v3;
  uint v4;
  ushort *v5;
  int v6;
  uint v7;
  int v8;
  int v10;
  int v11;
  short v12;
  short v13;

  v1 = a1;
  *(uint *)(a1 + 28) = Function_2013a04(4u, 4u);
  Function_201a7e8(*(uint **)(*(uint *)(v1 + 8) + 8), v1 + 12, 3, 1, 1, 0xAu, 8u, 13, 487);
  Function_200dc48(v1 + 12, 1, 985, 0xBu);
  v2 = &dword_22568B4;
  v3 = (ushort **)LoadFromMsgNARC(0, 26, 634, 4u);
  v4 = 0;
  do
  {
    Function_2013a4c(*(uint **)(v1 + 28), v3, *v2, v2[1]);
    ++v4;
    v2 += 2;
  }
  while ( v4 < 4 );
  v5 = Function_200b190((ushort *)v3);
  v6 = Function_2253d40(v5);
  MI_CpuCopy8(v6, (uint)&v10, 0x20u, v7);
  v10 = *(uint *)(v1 + 28);
  v11 = v1 + 12;
  v12 = 4;
  v13 = 4;
  *(ushort *)(v1 + 58) = 0;
  *(uint *)(v1 + 32) = Function_200112c(&v10, 0, 0, 4u);
  Function_201a954(v1 + 12, v8);
  return Function_20594fc();
}

//----- (0224DDE4) --------------------------------------------------------
int *__fastcall Function_224dde4(int *a1, uint *a2)
{
  uint *v2;
  int *v3;
  int v4;
  void (__fastcall *v5)(uint);
  int *result;

  v2 = a2;
  v3 = a1;
  v4 = a2[9];
  if ( v4 )
  {
    Function_2002154(v4, 4u);
    v2[9] = 0;
  }
  if ( v2[1] )
  {
    Function_2251044();
    Function_2243204();
  }
  Function_224e244(v3, v2);
  v5 = (void (__fastcall *)(uint))v2[11];
  if ( v5 )
    v5(0);
  free((int)v2);
  Function_2059514();
  Call_RemoveTaskFromTaskList(v3);
  result = &dword_2257740[28];
  dword_2257740[29] = 0;
  return result;
}

//----- (0224DE3C) --------------------------------------------------------
int __fastcall Function_224de3c(int a1, int a2, int a3, int a4)
{
  int v4;
  ushort **v5;
  int v6;
  int v7;
  uint v8;
  uint v9;
  int v10;
  char *v11;
  int v12;
  char v14[4];
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;

  v23 = a4;
  v4 = a1;
  *(uint *)(a1 + 28) = Function_2013a04(4u, 4u);
  Function_201a7e8(*(uint **)(*(uint *)(v4 + 8) + 8), v4 + 12, 3, 1, 1, 0x10u, 8u, 13, 439);
  Function_200dc48(v4 + 12, 1, 985, 0xBu);
  v5 = (ushort **)LoadFromMsgNARC(0, 26, 633, 4u);
  v6 = 0;
  do
  {
    v7 = Function_201d35c();
    u32_div_f(v7, 12);
    v9 = v8;
    v10 = 0;
    if ( v6 > 0 )
    {
      v11 = v14;
      do
      {
        if ( (uchar)*v11 == v9 )
          break;
        ++v10;
        ++v11;
      }
      while ( v10 < v6 );
    }
    if ( v10 == v6 )
    {
      v14[v6] = v9;
      Function_2013a4c(*(uint **)(v4 + 28), v5, v9, v9);
    }
    else
    {
      --v6;
    }
    ++v6;
  }
  while ( v6 < 4 );
  Function_200b190((ushort *)v5);
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 262148;
  v20 = 268437504;
  v21 = 8388655;
  v22 = 0;
  v15 = *(uint *)(v4 + 28);
  v18 = v4 + 12;
  *(ushort *)(v4 + 58) = 0;
  *(uint *)(v4 + 32) = Function_200112c(&v15, 0, 0, 4u);
  return Function_201a954(v4 + 12, v12);
}

//----- (0224DF1C) --------------------------------------------------------
int __fastcall Function_224df1c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;
  char v8;
  char v9;
  char v10;
  int v11;

  v11 = a4;
  v4 = a2;
  v5 = a1;
  v6 = Function_2001288(*(uint *)(a2 + 32));
  Function_224f270(v4);
  if ( Function_20360f0() )
  {
    *(uchar *)(v4 + 55) = 3;
    Function_224e244(v5, v4);
    result = 1;
  }
  else if ( v6 != -2 && v6 != -1 )
  {
    Function_2005748(0x5DCu);
    v8 = v6;
    v9 = *(ushort *)(v4 + 48);
    v10 = 0;
    Function_20360d0(79, (int)&v8);
    *(uchar *)(v4 + 50) = v6;
    *(uchar *)(v4 + 55) = 30;
    Function_224e244(v5, v4);
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}

//----- (0224DFA0) --------------------------------------------------------
int __fastcall Function_224dfa0(int a1, int a2, int a3, int a4)
{
  int v4;
  ushort **v5;
  int v6;
  int v7;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;

  v17 = a4;
  v4 = a1;
  *(uint *)(a1 + 28) = Function_2013a04(4u, 4u);
  Function_201a7e8(*(uint **)(*(uint *)(v4 + 8) + 8), v4 + 12, 3, 1, 1, 0x10u, 8u, 13, 439);
  Function_200dc48(v4 + 12, 1, 985, 0xBu);
  v5 = (ushort **)LoadFromMsgNARC(0, 26, 632, 4u);
  v6 = 0;
  do
  {
    Function_2013a4c(*(uint **)(v4 + 28), v5, v6 + 4 * *(uchar *)(v4 + 50), v6);
    ++v6;
  }
  while ( v6 < 4 );
  Function_200b190((ushort *)v5);
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 262148;
  v14 = 268437504;
  v15 = 8388655;
  v16 = 0;
  v9 = *(uint *)(v4 + 28);
  v12 = v4 + 12;
  *(ushort *)(v4 + 58) = 0;
  *(uint *)(v4 + 32) = Function_200112c(&v9, 0, 0, 4u);
  return Function_201a954(v4 + 12, v7);
}

//----- (0224E05C) --------------------------------------------------------
int __fastcall Function_224e05c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;
  int v8;
  int v9;
  int v10;
  int v11;
  uchar v12;
  char v13;
  char v14;
  int v15;

  v15 = a4;
  v4 = a2;
  v5 = a1;
  v6 = Function_2001288(*(uint *)(a2 + 32));
  Function_224f270(v4);
  if ( Function_20360f0() )
  {
    Function_224e244(v5, v4);
    *(uchar *)(v4 + 55) = 3;
    result = 1;
  }
  else if ( v6 != -2 && v6 != -1 )
  {
    Function_2005748(0x5DCu);
    Function_224e244(v5, v4);
    v12 = v6 + 4 * *(uchar *)(v4 + 50);
    v13 = *(ushort *)(v4 + 48);
    v14 = 2;
    Function_20360d0(79, (int)&v12);
    v8 = Function_224219c();
    Function_22540c8(v8, v12);
    v9 = Function_224219c();
    Function_22540e0(v9, 6, *(uchar *)(v4 + 51));
    if ( *(uchar *)(v4 + 51) == v12 )
      Function_224dc68(v4, 141);
    else
      Function_224dc68(v4, 140);
    *(uchar *)(v4 + 55) = 36;
    Function_224dc54(v4, 27, v10, v11);
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}

//----- (0224E124) --------------------------------------------------------
int __fastcall Function_224e124(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = a1;
  v2 = Function_224219c();
  v3 = Function_2032ee8(*(ushort *)(v1 + 48));
  Function_2254068(v2, v3);
  v4 = Function_224219c();
  Function_22540f4(v4, *(uchar *)(v1 + 42));
  v5 = Function_224219c();
  Function_2253f40(v5, 14);
  v6 = GetOverWorldData_VariableAreaAdresses(*(uint *)(v1 + 8));
  v7 = Function_20298a0(v6);
  Function_202952c(v7);
  Function_224f634(*(uchar *)(v1 + 42));
  return Function_2005748(0x5E3u);
}

//----- (0224E17C) --------------------------------------------------------
int __fastcall Function_224e17c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = Function_224219c();
  Function_22540f4(v3, v2);
  v4 = Function_224219c();
  return Function_2253f40(v4, 12);
}

//----- (0224E19C) --------------------------------------------------------
int __fastcall Function_224e19c(int a1, int a2)
{
  int v2;
  int result;
  char v4;

  v2 = a2;
  result = Function_2002114(*(uint *)(a2 + 36), 4u);
  if ( result != -1 )
  {
    if ( result )
    {
      Function_224dc68(v2, 11);
      v4 = 15;
    }
    else
    {
      *(uchar *)(v2 + 40) = *(ushort *)(v2 + 48);
      Function_20360d0(77, v2 + 40);
      v4 = 21;
    }
    *(uchar *)(v2 + 55) = v4;
    result = 0;
    *(uint *)(v2 + 36) = 0;
  }
  return result;
}

//----- (0224E1E0) --------------------------------------------------------
int __fastcall Function_224e1e0(int a1, int a2)
{
  int v2;
  int v3;
  void (__fastcall *v4)(int);

  v2 = a2;
  v3 = a1;
  v4 = (void (__fastcall *)(int))Function_2001288(*(uint *)(a2 + 32));
  Function_224f270(v2);
  if ( Function_20360f0() )
    v4 = (void (__fastcall *)(int))-2;
  if ( v4 == (void (__fastcall *)(int))-2 )
  {
    Function_2005748(0x5DCu);
    Function_224e8e0(v2);
    Function_224e244(v3, v2);
  }
  else
  {
    if ( v4 == (void (__fastcall *)(int))-1 )
      return 0;
    Function_2005748(0x5DCu);
    v4(v2);
    Function_224e244(v3, v2);
  }
  return 1;
}

//----- (0224E244) --------------------------------------------------------
int __fastcall Function_224e244(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  result = *(uint *)(a2 + 28);
  if ( result )
  {
    Function_200dc9c(a2 + 12, 1);
    Function_2001384(*(uint *)(v2 + 32), 0, 0);
    Function_201acf4(v2 + 12);
    Function_201a8fc(v2 + 12);
    Function_2013a3c(*(int **)(v2 + 28));
    result = 0;
    *(uint *)(v2 + 28) = 0;
  }
  return result;
}

//----- (0224E280) --------------------------------------------------------
int __fastcall Function_224e280(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;

  v4 = a1;
  Function_224dc54(a1, 5, a3, a4);
  Function_224dc68(v4, 7);
  result = 5;
  *(uchar *)(v4 + 55) = 5;
  return result;
}

//----- (0224E29C) --------------------------------------------------------
int __fastcall Function_224e29c(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;

  v4 = a1;
  Function_224dc54(a1, 22, a3, a4);
  result = 27;
  *(uchar *)(v4 + 55) = 27;
  return result;
}

//----- (0224E2B0) --------------------------------------------------------
uchar *__fastcall Function_224e2b0(int a1)
{
  uchar *result;

  result = (uchar *)(a1 + 55);
  *result = 16;
  return result;
}

//----- (0224E2B8) --------------------------------------------------------
int __fastcall Function_224e2b8(char a1)
{
  int result;

  *(uchar *)(dword_2257740[29] + 42) = a1;
  result = dword_2257740[29] + 55;
  *(uchar *)(dword_2257740[29] + 55) = 18;
  return result;
}

//----- (0224E2D0) --------------------------------------------------------
uchar *__fastcall Function_224e2d0(int a1)
{
  uchar *result;

  result = (uchar *)(a1 + 55);
  *result = 11;
  return result;
}

//----- (0224E2D8) --------------------------------------------------------
int __fastcall Function_224e2d8(int *a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
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
  short v22;
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
  int v43;
  int result;
  int v45;
  int v46;

  v4 = a2;
  v5 = a1;
  if ( *(uchar *)(a2 + 55) != 17 && !Function_2035d78(*(ushort *)(a2 + 48)) )
  {
    *(uint *)(v4 + 4) = 0;
    Function_22535ec();
    *(uchar *)(v4 + 55) = 4;
  }
  switch ( *(uchar *)(v4 + 55) )
  {
    case 0:
    case 0xA:
    case 0x11:
      break;
    case 1:
      v6 = Function_224219c();
      if ( !Function_2254238(v6) )
      {
        Function_224dd2c(v4);
        ++*(uchar *)(v4 + 55);
      }
      break;
    case 2:
      Function_224e1e0((int)v5, v4);
      break;
    case 3:
    case 4:
      v7 = Function_224219c();
      Function_2254044(v7);
      Function_224dde4(v5, (uint *)v4);
      break;
    case 5:
      v8 = Function_224219c();
      if ( !Function_2254238(v8) )
      {
        if ( *(uchar *)(v4 + 56) == 9 )
        {
          *(uchar *)(v4 + 55) = 9;
          Function_22538fc(*(ushort *)(v4 + 48));
        }
        if ( *(uchar *)(v4 + 56) == 6 )
          *(uchar *)(v4 + 55) = 6;
      }
      break;
    case 6:
      Function_224dc68(v4, 8);
      *(uchar *)(v4 + 55) = 7;
      break;
    case 7:
      v9 = Function_224219c();
      if ( !Function_2254238(v9) && dword_21BF6C4 & 1 )
        *(uchar *)(v4 + 55) = 4;
      break;
    case 8:
      Function_224dc68(v4, 15);
      *(uchar *)(v4 + 55) = 7;
      break;
    case 9:
      if ( Function_22539d8() )
      {
        v10 = Function_224219c();
        Function_2254044(v10);
        v11 = Function_2032ee8(*(ushort *)(v4 + 48));
        Function_2253834(*(uint *)(*(uint *)(v4 + 8) + 8), v11, Function_224e2d0, v4, 0);
        *(uchar *)(v4 + 55) = 10;
      }
      break;
    case 0xB:
      v12 = LoadVariableAreaAdress_14(*(uint *)(*(uint *)(v4 + 8) + 12));
      v13 = Function_202cfec(v12, 32);
      Function_22539e8(v13);
      Function_224dc68(v4, 9);
      *(uchar *)(v4 + 55) = 12;
      break;
    case 0xC:
      v14 = Function_224219c();
      if ( !Function_2254238(v14) )
      {
        Function_224dc54(v4, 14, v15, v16);
        *(uchar *)(v4 + 55) = 13;
      }
      break;
    case 0xD:
      if ( *(uchar *)(v4 + 56) == 13 )
        *(uchar *)(v4 + 55) = 14;
      break;
    case 0xE:
      Function_224dc68(v4, 10);
      *(uchar *)(v4 + 55) = 1;
      break;
    case 0xF:
      v17 = Function_224219c();
      if ( !Function_2254238(v17) && dword_21BF6C4 & 1 )
        *(uchar *)(v4 + 55) = 14;
      break;
    case 0x10:
      *(uint *)(v4 + 4) = Function_22511b0(Function_224e2b8, *(uint *)(v4 + 8));
      *(uchar *)(v4 + 55) = 17;
      break;
    case 0x12:
      *(uint *)(v4 + 4) = 0;
      if ( *(uchar *)(dword_2257740[29] + 42) )
      {
        if ( Function_2032fc0(*(ushort *)(v4 + 48)) )
        {
          Function_224dc68(v4, 87);
          *(uchar *)(v4 + 55) = 15;
        }
        else if ( Function_2028810(*(uint *)(*(uint *)(v4 + 8) + 12)) )
        {
          if ( Function_205748c(*(uchar *)(dword_2257740[29] + 42)) )
          {
            Function_224dc68(v4, 86);
            *(uchar *)(v4 + 55) = 15;
          }
          else
          {
            Function_224e17c(v4, *(uchar *)(dword_2257740[29] + 42));
            *(uchar *)(v4 + 55) = 19;
          }
        }
        else
        {
          Function_224dc68(v4, 87);
          *(uchar *)(v4 + 55) = 15;
        }
      }
      else
      {
        Function_224dc68(v4, 11);
        *(uchar *)(v4 + 55) = 15;
      }
      break;
    case 0x13:
      v18 = Function_224219c();
      if ( !Function_2254238(v18) )
      {
        *(uint *)(v4 + 36) = Function_2002100(
                                 *(uint **)(*(uint *)(v4 + 8) + 8),
                                 (uchar *)dword_225688C,
                                 985,
                                 11,
                                 4u);
        *(uchar *)(v4 + 55) = 20;
        if ( *(uchar *)(v4 + 56) != 8 )
          *(uchar *)(v4 + 56) = 1;
      }
      break;
    case 0x14:
      Function_224e19c((int)v5, v4);
      break;
    case 0x15:
      v19 = Function_224219c();
      if ( !Function_2254238(v19) )
      {
        if ( *(uchar *)(v4 + 56) == 22 )
          *(uchar *)(v4 + 55) = 22;
        if ( *(uchar *)(v4 + 56) == 24 )
          *(uchar *)(v4 + 55) = 24;
        if ( *(uchar *)(v4 + 56) == 23 )
          *(uchar *)(v4 + 55) = 23;
      }
      break;
    case 0x16:
      Function_224e124(v4);
      v20 = LoadFlagAdress(*(uint *)(*(uint *)(v4 + 8) + 12));
      v21 = v20;
      v22 = Function_206b3ec(v20);
      Function_206b3fc(v21, v22 + 1);
      v23 = LoadVariableAreaAdress_14(*(uint *)(*(uint *)(v4 + 8) + 12));
      Function_202cfec(v23, 31);
      *(uchar *)(v4 + 55) = 25;
      break;
    case 0x17:
      Function_224dc68(v4, 30);
      *(uchar *)(v4 + 55) = 26;
      break;
    case 0x18:
      Function_224dc68(v4, 13);
      *(uchar *)(v4 + 55) = 26;
      break;
    case 0x19:
      *(uchar *)(v4 + 55) = 26;
      break;
    case 0x1A:
      v24 = Function_224219c();
      if ( !Function_2254238(v24) && *(uchar *)(v4 + 56) == 15 )
        *(uchar *)(v4 + 55) = 14;
      break;
    case 0x1B:
      Function_224dc68(v4, 136);
      *(uchar *)(v4 + 55) = 28;
      break;
    case 0x1C:
      v25 = Function_224219c();
      if ( !Function_2254238(v25) )
      {
        Function_224de3c(v4, v26, v27, v28);
        *(uchar *)(v4 + 55) = 29;
      }
      break;
    case 0x1D:
      Function_224df1c((int)v5, v4, a3, a4);
      break;
    case 0x1E:
      v29 = Function_224219c();
      Function_22540b0(v29, *(uchar *)(v4 + 50));
      Function_224dc68(v4, 137);
      *(uchar *)(v4 + 55) = 31;
      break;
    case 0x1F:
      v30 = Function_224219c();
      if ( !Function_2254238(v30) && *(uchar *)(v4 + 56) == 32 )
        *(uchar *)(v4 + 55) = 32;
      break;
    case 0x20:
      v31 = *(uchar *)(v4 + 51);
      if ( v31 == 51 )
      {
        Function_224dc68(v4, 139);
        *(uchar *)(v4 + 56) = 0;
        *(uchar *)(v4 + 55) = 33;
      }
      else
      {
        v32 = Function_224219c();
        Function_22540c8(v32, v31);
        Function_224dc68(v4, 138);
        *(uchar *)(v4 + 55) = 34;
      }
      break;
    case 0x21:
      v33 = Function_224219c();
      if ( !Function_2254238(v33) && *(uchar *)(v4 + 56) == 42 )
      {
        *(uchar *)(v4 + 56) = 0;
        *(uchar *)(v4 + 55) = 14;
      }
      break;
    case 0x22:
      v34 = Function_224219c();
      if ( !Function_2254238(v34) )
      {
        Function_224dfa0(v4, v35, v36, v37);
        *(uchar *)(v4 + 55) = 35;
      }
      break;
    case 0x23:
      Function_224e05c((int)v5, v4, a3, a4);
      break;
    case 0x24:
      v38 = Function_224219c();
      if ( !Function_2254238(v38) )
      {
        v39 = LoadVariableAreaAdress_14(*(uint *)(*(uint *)(v4 + 8) + 12));
        Function_202cfec(v39, 33);
        Function_224dc68(v4, 142);
        *(uchar *)(v4 + 55) = 37;
      }
      break;
    case 0x25:
      v40 = Function_224219c();
      if ( !Function_2254238(v40) && dword_21BF6C4 & 1 )
        *(uchar *)(v4 + 55) = 38;
      break;
    case 0x26:
      if ( *(uchar *)(v4 + 56) == 37 )
      {
        Function_224dc54(v4, 100, a3, a4);
        *(uchar *)(v4 + 55) = 39;
      }
      break;
    case 0x27:
      if ( *(uchar *)(v4 + 56) == 100 )
      {
        Function_224dc68(v4, 150);
        *(uchar *)(v4 + 55) = 40;
      }
      break;
    case 0x28:
      v41 = Function_224219c();
      if ( !Function_2254238(v41) )
      {
        Function_224dc54(v4, 101, v42, v43);
        *(uchar *)(v4 + 55) = 41;
      }
      break;
    case 0x29:
      if ( *(uchar *)(v4 + 56) == 101 )
        *(uchar *)(v4 + 55) = 14;
      break;
  }
  result = *(uchar *)(v4 + 56);
  if ( result == 8 )
  {
    result = *(uchar *)(v4 + 55);
    if ( result != 4 && result != 7 )
    {
      v45 = *(uint *)(v4 + 36);
      if ( v45 )
      {
        Function_2002154(v45, 4u);
        *(uint *)(v4 + 36) = 0;
      }
      if ( *(uint *)(v4 + 4) )
      {
        Function_2251044();
        Function_2243204();
        v46 = Function_22421dc();
        Function_2254044(v46);
        *(uint *)(v4 + 4) = 0;
      }
      Function_224e244((int)v5, v4);
      *(uchar *)(v4 + 55) = 8;
      result = 0;
      *(uchar *)(v4 + 56) = 0;
    }
  }
  return result;
}

//----- (0224E8E0) --------------------------------------------------------
int __fastcall Function_224e8e0(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  Function_224dc68(a1, 15);
  Function_224dc54(v1, 8, v2, v3);
  result = 7;
  *(uchar *)(v1 + 55) = 7;
  return result;
}

//----- (0224E8FC) --------------------------------------------------------
int __fastcall Function_224e8fc(int a1, int a2)
{
  int v2;
  int result;
  int v4;
  int v5;
  char v6;

  v2 = a2;
  result = Function_2002114(*(uint *)(a2 + 32), 4u);
  if ( result != -1 )
  {
    if ( result )
    {
      Function_224dc40(v2, 6, v4, v5);
      v6 = 8;
    }
    else
    {
      Function_224dc40(v2, 9, v4, v5);
      Function_22538fc(*(ushort *)(v2 + 44));
      v6 = 10;
    }
    *(uchar *)(v2 + 52) = v6;
    result = 0;
    *(uint *)(v2 + 32) = 0;
  }
  return result;
}

//----- (0224E93C) --------------------------------------------------------
int __fastcall Function_224e93c(int a1, int a2)
{
  int v2;
  int result;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v2 = a2;
  result = Function_2002114(*(uint *)(a2 + 32), 4u);
  if ( result != -1 )
  {
    if ( result )
    {
      Function_224dc40(v2, 24, v4, v5);
      Function_224dc90(v2, 29);
      *(uchar *)(v2 + 52) = 21;
    }
    else if ( Function_224f744(*(uchar *)(v2 + 38)) )
    {
      v8 = GetOverWorldData_VariableAreaAdresses(*(uint *)(v2 + 4));
      v9 = Function_20298a0(v8);
      Function_202977c(v9);
      Function_2005748(0x5E3u);
      Function_224dc40(v2, 22, v10, v11);
      *(uchar *)(v2 + 52) = 19;
    }
    else
    {
      Function_224dc40(v2, 23, v6, v7);
      Function_224dc90(v2, 21);
      *(uchar *)(v2 + 52) = 21;
    }
    result = 0;
    *(uint *)(v2 + 32) = 0;
  }
  return result;
}

//----- (0224E9C4) --------------------------------------------------------
int *__fastcall Function_224e9c4(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  void (__fastcall *v5)(uint);
  int *result;

  v2 = a2;
  v3 = a1;
  v4 = *(uint *)(a2 + 32);
  if ( v4 )
  {
    Function_2002154(v4, 4u);
    *(uint *)(v2 + 32) = 0;
  }
  v5 = *(void (__fastcall **)(uint))(v2 + 40);
  if ( v5 )
    v5(0);
  Function_224ea08(v3, v2);
  free(v2);
  Function_2059514();
  Call_RemoveTaskFromTaskList(v3);
  result = &dword_2257740[28];
  dword_2257740[28] = 0;
  return result;
}

//----- (0224EA08) --------------------------------------------------------
int __fastcall Function_224ea08(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  result = *(uint *)(a2 + 24);
  if ( result )
  {
    Function_200dc9c(a2 + 8, 1);
    Function_2001384(*(uint *)(v2 + 28), 0, 0);
    Function_201acf4(v2 + 8);
    Function_201a8fc(v2 + 8);
    Function_2013a3c(*(int **)(v2 + 24));
    result = 0;
    *(uint *)(v2 + 24) = 0;
  }
  return result;
}

//----- (0224EA44) --------------------------------------------------------
int __fastcall Function_224ea44(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v3 = a2;
  v4 = a3;
  v5 = Function_224219c();
  v6 = Function_2032ee8(v3);
  Function_2254068(v5, v6);
  v7 = Function_224219c();
  return Function_2253f40(v7, v4);
}

//----- (0224EA70) --------------------------------------------------------
int __fastcall Function_224ea70(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = Function_224219c();
  v3 = Function_2032ee8(*(ushort *)(v1 + 44));
  Function_2254068(v2, v3);
  v4 = Function_224219c();
  Function_22540f4(v4, *(uchar *)(v1 + 38));
  v5 = Function_224219c();
  return Function_2253f40(v5, 31);
}

//----- (0224EAA4) --------------------------------------------------------
int __fastcall Function_224eaa4(int a1, int a2, int a3, int a4)
{
  int v4;
  ushort **v5;
  int v6;
  int v7;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;

  v17 = a4;
  v4 = a1;
  *(uint *)(a1 + 24) = Function_2013a04(5u, 4u);
  Function_201a7e8(*(uint **)(*(uint *)(v4 + 4) + 8), v4 + 8, 3, 1, 1, 0x10u, 0xAu, 13, 407);
  Function_200dc48(v4 + 8, 1, 985, 0xBu);
  v5 = (ushort **)LoadFromMsgNARC(0, 26, 632, 4u);
  v6 = 0;
  do
  {
    Function_2013a4c(*(uint **)(v4 + 24), v5, v6 + 4 * *(uchar *)(v4 + 46), v6);
    ++v6;
  }
  while ( v6 < 4 );
  Function_2013a4c(*(uint **)(v4 + 24), v5, 0x30u, 51);
  Function_200b190((ushort *)v5);
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 262148;
  v14 = 268437504;
  v15 = 8388655;
  v16 = 0;
  v9 = *(uint *)(v4 + 24);
  v12 = v4 + 8;
  v13 = 327685;
  *(ushort *)(v4 + 54) = 0;
  *(uint *)(v4 + 28) = Function_200112c(&v9, 0, 0, 4u);
  return Function_201a954(v4 + 8, v7);
}

//----- (0224EB74) --------------------------------------------------------
int __fastcall Function_224eb74(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v9;
  int v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a2;
  v5 = a1;
  v6 = Function_2001288(*(uint *)(a2 + 28));
  v7 = *(ushort *)(v4 + 54);
  Function_20014d0(*(uint *)(v4 + 28), (ushort *)(v4 + 54));
  if ( v7 != *(ushort *)(v4 + 54) )
    Function_2005748(0x5DCu);
  if ( Function_20360f0() )
    v6 = -2;
  if ( v6 == -2 )
  {
    v6 = 51;
  }
  else if ( v6 == -1 )
  {
    return 0;
  }
  Function_2005748(0x5DCu);
  Function_224ea08(v5, v4);
  if ( v6 == 51 )
  {
    *(uchar *)(v4 + 47) = 51;
    *(uchar *)(v4 + 52) = 16;
    *(uchar *)(v4 + 53) = 0;
    Function_224dc90(v4, 145);
  }
  else
  {
    *(uchar *)(v4 + 47) = v6 + 4 * *(uchar *)(v4 + 46);
    *(uchar *)(v4 + 52) = 26;
    v9 = Function_224219c();
    Function_22540c8(v9, *(uchar *)(v4 + 47));
    Function_224dc90(v4, 146);
  }
  LOBYTE(v12) = *(uchar *)(v4 + 47);
  BYTE1(v12) = *(ushort *)(v4 + 44);
  BYTE2(v12) = 1;
  Function_20360d0(79, (int)&v12);
  Function_224dc40(v4, 32, v10, v11);
  return 1;
}

//----- (0224EC48) --------------------------------------------------------
uchar *__fastcall Function_224ec48(int a1)
{
  uchar *result;

  result = (uchar *)(a1 + 52);
  *result = 12;
  return result;
}

//----- (0224EC50) --------------------------------------------------------
int __fastcall Function_224ec50(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  uint v6;
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
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int result;
  int v39;

  v2 = a2;
  v3 = a1;
  if ( !Function_2035d78(*(ushort *)(a2 + 44)) )
  {
    Function_22535ec();
    *(uchar *)(v2 + 52) = 4;
  }
  v6 = *(uchar *)(v2 + 52);
  if ( v6 <= 0x20 )
    JUMPOUT(__CS__, *((short *)&off_224EC86 + v6) + 35974280);
  switch ( (uchar)v6 )
  {
    case 2:
      *(uchar *)(v2 + 46) = 12;
      if ( dword_21BF6C4 & 2 )
      {
        Function_224dc40(v2, 8, v4, v5);
        *(uchar *)(v2 + 52) = 8;
      }
      else
      {
        v8 = *(uchar *)(v2 + 53);
        if ( v8 == 5 )
        {
          *(uchar *)(v2 + 52) = 5;
        }
        else if ( v8 == 22 )
        {
          *(uchar *)(v2 + 52) = 22;
        }
      }
      break;
    case 4:
      v7 = Function_224219c();
      Function_2254044(v7);
      Function_224e9c4(v3, v2);
      break;
    case 5:
      Function_224dc90(v2, 24);
      *(uchar *)(v2 + 52) = 6;
      break;
    case 6:
      v9 = Function_224219c();
      if ( !Function_2254238(v9) )
      {
        *(uchar *)(v2 + 52) = 7;
        *(uint *)(v2 + 32) = Function_2002100(
                                 *(uint **)(*(uint *)(v2 + 4) + 8),
                                 (uchar *)dword_225688C,
                                 985,
                                 11,
                                 4u);
      }
      break;
    case 7:
      Function_224e8fc((int)v3, v2);
      break;
    case 8:
      Function_224dc90(v2, 15);
      *(uchar *)(v2 + 52) = 9;
      break;
    case 9:
      v10 = Function_224219c();
      if ( !Function_2254238(v10) && dword_21BF6C4 & 1 )
        *(uchar *)(v2 + 52) = 4;
      break;
    case 0xA:
      if ( Function_22539d8() )
      {
        v11 = Function_224219c();
        Function_2254044(v11);
        v12 = Function_2032ee8(*(ushort *)(v2 + 44));
        Function_2253834(*(uint *)(*(uint *)(v2 + 4) + 8), v12, Function_224ec48, v2, 0);
        *(uchar *)(v2 + 52) = 11;
      }
      break;
    case 0xC:
      Function_22539e8(v6);
      Function_224ea44(v2, *(ushort *)(v2 + 44), 26);
      *(uchar *)(v2 + 52) = 13;
      break;
    case 0xD:
      v13 = Function_224219c();
      if ( !Function_2254238(v13) )
      {
        Function_224dc40(v2, 13, v14, v15);
        *(uchar *)(v2 + 52) = 14;
      }
      break;
    case 0xE:
      if ( *(uchar *)(v2 + 53) == 14 )
        *(uchar *)(v2 + 52) = 15;
      break;
    case 0xF:
      Function_224dc90(v2, 27);
      *(uchar *)(v2 + 52) = 2;
      break;
    case 0x10:
      v16 = Function_224219c();
      if ( !Function_2254238(v16) )
      {
        *(uchar *)(v2 + 52) = 15;
        Function_224dc40(v2, 42, v17, v18);
      }
      break;
    case 0x11:
      v19 = Function_224219c();
      if ( !Function_2254238(v19) )
      {
        *(uchar *)(v2 + 52) = 18;
        *(uint *)(v2 + 32) = Function_2002100(
                                 *(uint **)(*(uint *)(v2 + 4) + 8),
                                 (uchar *)dword_225688C,
                                 985,
                                 11,
                                 4u);
      }
      break;
    case 0x12:
      Function_224e93c((int)v3, v2);
      break;
    case 0x13:
      Function_224ea70(v2);
      *(uchar *)(v2 + 52) = 20;
      break;
    case 0x14:
      *(uchar *)(v2 + 52) = 21;
      break;
    case 0x15:
      v20 = Function_224219c();
      if ( !Function_2254238(v20) && dword_21BF6C4 & 1 )
      {
        Function_224dc40(v2, 15, v21, v22);
        *(uchar *)(v2 + 52) = 15;
      }
      break;
    case 0x16:
      Function_224dc90(v2, 143);
      ++*(uchar *)(v2 + 52);
      break;
    case 0x17:
      v23 = Function_224219c();
      if ( !Function_2254238(v23) )
      {
        v24 = *(uchar *)(v2 + 46);
        if ( v24 != 12 )
        {
          v25 = Function_224219c();
          Function_22540b0(v25, v24);
          Function_224dc90(v2, 144);
          *(uchar *)(v2 + 52) = 24;
        }
      }
      break;
    case 0x18:
      v26 = Function_224219c();
      if ( !Function_2254238(v26) )
      {
        Function_224eaa4(v2, v27, v28, v29);
        *(uchar *)(v2 + 52) = 25;
      }
      break;
    case 0x19:
      Function_224eb74((int)v3, v2, v4, v5);
      break;
    case 0x1A:
      v30 = Function_224219c();
      if ( !Function_2254238(v30) && *(uchar *)(v2 + 53) == 27 )
      {
        Function_224dc40(v2, 37, v31, v32);
        *(uchar *)(v2 + 52) = 27;
      }
      break;
    case 0x1B:
      v33 = Function_224219c();
      Function_22540c8(v33, *(uchar *)(v2 + 48));
      v34 = Function_224219c();
      Function_22540e0(v34, 6, *(uchar *)(v2 + 47));
      if ( *(uchar *)(v2 + 47) == *(uchar *)(v2 + 48) )
        Function_224dc90(v2, 148);
      else
        Function_224dc90(v2, 147);
      *(uchar *)(v2 + 52) = 28;
      break;
    case 0x1C:
      v35 = Function_224219c();
      if ( !Function_2254238(v35) )
      {
        Function_224dc90(v2, 149);
        *(uchar *)(v2 + 52) = 29;
      }
      break;
    case 0x1D:
      v36 = Function_224219c();
      if ( !Function_2254238(v36) )
        *(uchar *)(v2 + 52) = 30;
      break;
    case 0x1E:
      if ( *(uchar *)(v2 + 53) == 100 )
      {
        Function_224dc40(v2, 100, v4, v5);
        Function_224dc90(v2, 150);
        *(uchar *)(v2 + 52) = 31;
      }
      break;
    case 0x1F:
      v37 = Function_224219c();
      if ( !Function_2254238(v37) )
        *(uchar *)(v2 + 52) = 32;
      break;
    case 0x20:
      if ( *(uchar *)(v2 + 53) == 101 )
      {
        Function_224dc40(v2, 101, v4, v5);
        *(uchar *)(v2 + 52) = 15;
      }
      break;
    default:
      break;
  }
  result = *(uchar *)(v2 + 53);
  if ( result == 8 )
  {
    result = *(uchar *)(v2 + 52);
    if ( result != 4 && result != 9 )
    {
      v39 = *(uint *)(v2 + 32);
      if ( v39 )
      {
        Function_2002154(v39, 4u);
        *(uint *)(v2 + 32) = 0;
      }
      Function_224ea08((int)v3, v2);
      *(uchar *)(v2 + 52) = 8;
      result = 0;
      *(uchar *)(v2 + 53) = 0;
    }
  }
  return result;
}

//----- (0224F07C) --------------------------------------------------------
uint *__fastcall Function_224f07c(int a1, short a2, int a3)
{
  short v3;
  int v4;
  uint *result;
  int v6;
  int v7;

  v3 = a2;
  v4 = a3;
  if ( dword_2257740[28] )
    return (uint *)ErrorHandler();
  v6 = malloc(0x21u, 56);
  MI_CpuFill8((ushort *)v6, 0, 0x38u);
  dword_2257740[28] = v6;
  *(uint *)(v6 + 4) = v4;
  *(ushort *)(v6 + 44) = v3;
  *(uchar *)(v6 + 52) = 2;
  *(uchar *)(v6 + 53) = 0;
  *(uchar *)(v6 + 46) = 12;
  v7 = Function_224219c();
  Function_2253f40(v7, 22);
  Function_2059624();
  result = AddTaskToTaskList1((int)Function_224ec50, v6, 0x2710u);
  *(uint *)v6 = result;
  return result;
}

//----- (0224F0F0) --------------------------------------------------------
int __fastcall Function_224f0f0(int a1, int a2, int a3)
{
  return Function_2035b48(75, a3);
}

//----- (0224F0FC) --------------------------------------------------------
int __fastcall Function_224f0fc(int a1, int a2, int a3)
{
  return Function_2035b48(76, a3);
}

//----- (0224F108) --------------------------------------------------------
int __fastcall Function_224f108(int a1, int a2, uchar *a3)
{
  uchar *v3;
  int v4;
  int result;

  v3 = a3;
  v4 = a2;
  result = Function_203608c();
  if ( *v3 == result )
  {
    result = dword_2257740[28];
    if ( dword_2257740[28] )
    {
      if ( v4 != 2 )
        ErrorHandler();
      result = dword_2257740[28] + 53;
      *(uchar *)(dword_2257740[28] + 53) = v3[1];
    }
  }
  return result;
}

//----- (0224F138) --------------------------------------------------------
int __fastcall Function_224f138(int a1, int a2, uchar *a3)
{
  uchar *v3;
  int v4;
  int result;

  v3 = a3;
  v4 = a2;
  result = Function_203608c();
  if ( *v3 == result )
  {
    result = dword_2257740[29];
    if ( dword_2257740[29] )
    {
      if ( v4 != 2 )
        ErrorHandler();
      if ( !dword_2257740[29] )
        ErrorHandler();
      result = dword_2257740[29] + 56;
      *(uchar *)(dword_2257740[29] + 56) = v3[1];
    }
  }
  return result;
}

//----- (0224F174) --------------------------------------------------------
int Function_224f174()
{
  return 2;
}

//----- (0224F178) --------------------------------------------------------
int __fastcall Function_224f178(int a1, int a2, int a3)
{
  return Function_2035b48(78, a3);
}

//----- (0224F184) --------------------------------------------------------
int __fastcall Function_224f184(int a1, int a2, uchar *a3)
{
  uchar *v3;
  int result;
  int v5;
  int v6;
  int v7;
  int v8;

  v3 = a3;
  result = Function_203608c();
  if ( *v3 == result )
  {
    if ( !dword_2257740[28] )
      ErrorHandler();
    if ( *(uchar *)(dword_2257740[28] + 52) == 2 )
    {
      *(uchar *)(dword_2257740[28] + 36) = *v3;
      *(uchar *)(dword_2257740[28] + 37) = v3[1];
      *(uchar *)(dword_2257740[28] + 38) = v3[2];
      *(uchar *)(dword_2257740[28] + 52) = 17;
      v7 = Function_224219c();
      Function_22540f4(v7, v3[2]);
      v8 = Function_224219c();
      result = Function_2253f40(v8, 28);
    }
    else
    {
      Function_224dc40(dword_2257740[28], 8, v5, v6);
      result = 8;
      *(uchar *)(dword_2257740[28] + 52) = 8;
    }
  }
  return result;
}

//----- (0224F1F8) --------------------------------------------------------
int Function_224f1f8()
{
  return 3;
}

//----- (0224F1FC) --------------------------------------------------------
int __fastcall Function_224f1fc(int a1, int a2, int a3)
{
  return Function_2035b48(80, a3);
}

//----- (0224F208) --------------------------------------------------------
int __fastcall Function_224f208(int a1, int a2, uchar *a3)
{
  uchar *v3;
  int result;

  v3 = a3;
  result = Function_203608c();
  if ( v3[1] == result )
  {
    result = v3[2];
    if ( v3[2] )
    {
      if ( result == 1 )
      {
        result = *v3;
        *(uchar *)(dword_2257740[29] + 51) = result;
      }
      else if ( result == 2 )
      {
        result = *v3;
        *(uchar *)(dword_2257740[28] + 48) = result;
      }
    }
    else
    {
      result = *v3;
      *(uchar *)(dword_2257740[28] + 46) = result;
    }
  }
  return result;
}

//----- (0224F248) --------------------------------------------------------
int Function_224f248()
{
  return 3;
}

//----- (0224F24C) --------------------------------------------------------
int *Function_224f24c()
{
  int *result;

  if ( dword_2257740[29] )
    Function_224dde4(*(int **)dword_2257740[29], (uint *)dword_2257740[29]);
  result = &dword_2257740[28];
  if ( dword_2257740[28] )
    result = Function_224e9c4(*(int **)dword_2257740[28], dword_2257740[28]);
  return result;
}

//----- (0224F270) --------------------------------------------------------
int __fastcall Function_224f270(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = *(ushort *)(a1 + 58);
  Function_20014d0(*(uint *)(a1 + 32), (ushort *)(a1 + 58));
  result = *(ushort *)(v1 + 58);
  if ( v2 != result )
    result = Function_2005748(0x5DCu);
  return result;
}

//----- (0224F294) --------------------------------------------------------
uint __fastcall Function_224f294(int a1, int a2, uint a3)
{
  int *v3;
  uint v4;
  int v5;
  int *v6;
  short v7;
  char *v8;
  int v9;
  int v10;
  int v11;
  char *v12;
  char *v13;
  int v14;
  int v15;
  int v16;
  int v18;
  int v19;
  uint v20;
  char v21;
  int v22;
  int v23;
  int v24;
  char v25;
  short v26;
  short v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;

  v20 = a3;
  v18 = a1;
  v19 = a2;
  v28 = 8;
  v29 = 1;
  v30 = 2;
  v31 = 2;
  v32 = 0;
  v33 = 0;
  v3 = LoadFromNARC_8(66, 0xBu, (int)&v34, (int)dword_2256904);
  ((void (__fastcall *)(int, int *, int, int))dword_21D3190[0])(v18 + 116, &v28, 8, 11);
  ((void (__fastcall *)(int, int *, int, uint, int, int, int))dword_21D32E8[0])(
    v18 + 116,
    v3,
    9,
    0,
    2,
    1,
    14528);
  ((void (__fastcall *)(int, int *, int, uint, int))dword_21D3374[0])(v18 + 116, v3, 1, 0, 14528);
  ((void (__fastcall *)(int, int *))dword_21D339C[0])(v18 + 116, v3);
  ((void (__fastcall *)(int, int *, int, uint, int, int))dword_21D3414[0])(
    v18 + 116,
    v3,
    2,
    0,
    1,
    14528);
  *(uint *)(v18 + 472) = ((int (__fastcall *)(int, int *))dword_21D3584[0])(v18 + 116, dword_225695C);
  Function_224f4d0(**(uint **)(v18 + 472), *(ushort *)(v18 + 568));
  ((void (__fastcall *)(int, int *, int, uint, int))dword_21D3374[0])(v18 + 116, v3, 8, 0, 14529);
  ((void (__fastcall *)(int, int *, int, uint, int))dword_21D339C[0])(v18 + 116, v3, 7, 0, 14529);
  ((void (__fastcall *)(int, int *, int, uint, int, int))dword_21D3414[0])(
    v18 + 116,
    v3,
    10,
    0,
    1,
    14529);
  Call_FS_CloseFile(v3);
  v4 = 0;
  if ( v20 )
  {
    v5 = v18;
    v6 = dword_2256990;
    v7 = 0;
    v8 = &v21;
    v9 = 6;
    do
    {
      v10 = *v6;
      v11 = v6[1];
      v6 += 2;
      *(uint *)v8 = v10;
      *((uint *)v8 + 1) = v11;
      v8 += 8;
      --v9;
    }
    while ( v9 );
    *(uint *)v8 = *v6;
    do
    {
      v12 = &v21;
      v13 = &v25;
      v14 = 6;
      do
      {
        v15 = *(uint *)v12;
        v16 = *((uint *)v12 + 1);
        v12 += 8;
        *(uint *)v13 = v15;
        *((uint *)v13 + 1) = v16;
        v13 += 8;
        --v14;
      }
      while ( v14 );
      *(uint *)v13 = *(uint *)v12;
      v26 += v7;
      v27 = 3 * *(uchar *)(v19 + v4);
      *(uint *)(v5 + 476) = ((int (__fastcall *)(int, char *))dword_21D3584[0])(v18 + 116, &v25);
      v22 = 4096;
      v23 = 4096;
      v24 = 4096;
      Function_2021c80(**(uint ***)(v5 + 476), &v22, 1);
      ++v4;
      v7 += 24;
      v5 += 4;
    }
    while ( v4 < v20 );
  }
  Function_224f500(**(uint **)(v18 + 4 * (*(ushort *)(v18 + 568) + 1) + 472), 2, 1);
  *(uint *)(v18 + 504) = v20 + 1;
  return Function_201ff0c(0x10u, 1);
}

//----- (0224F460) --------------------------------------------------------
int __fastcall Function_224f460(int a1)
{
  int v1;
  uint v2;

  v1 = a1;
  v2 = 0;
  if ( *(uint *)(a1 + 504) )
  {
    do
    {
      Function_200d0f4(*(uint *)(v1 + 4 * v2 + 472));
      v2 = (v2 + 1) & 0xFFFF;
    }
    while ( v2 < *(uint *)(v1 + 504) );
  }
  return ((int (__fastcall *)(int))dword_21D375C[0])(v1 + 116);
}

//----- (0224F498) --------------------------------------------------------
uint __fastcall Function_224f498(int a1)
{
  int v1;
  uint result;
  uint v3;

  v1 = a1;
  result = *(uint *)(a1 + 504);
  v3 = 0;
  if ( result )
  {
    do
    {
      Function_2021e2c(**(uint **)(v1 + 4 * v3 + 472), 4096);
      v3 = (v3 + 1) & 0xFFFF;
      result = *(uint *)(v1 + 504);
    }
    while ( v3 < result );
  }
  return result;
}

//----- (0224F4D0) --------------------------------------------------------
int __fastcall Function_224f4d0(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int *v6;
  int v7;
  int v9;
  int v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a1;
  v5 = a2;
  Function_2021d28();
  v7 = v6[1];
  v9 = *v6;
  v10 = v7;
  v11 = v6[2];
  v10 = (24 * v5 + 20) << 12;
  return Function_2021c50(v4, &v9);
}

//----- (0224F500) --------------------------------------------------------
int __fastcall Function_224f500(int a1, int a2, char a3)
{
  int v3;
  int v4;
  char v5;
  int v6;
  int v7;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_2021e24(a1);
  v7 = u32_div_f(v6, 3);
  Function_2021d6c(v3, v4 + 3 * v7);
  return Function_2021ec4(v3, v5);
}

//----- (0224F52C) --------------------------------------------------------
int __fastcall Function_224f52c(int a1, int a2, int a3)
{
  int v3;
  int v4;

  v3 = a1;
  v4 = a3;
  Function_224f500(**(uint **)(a1 + 4 * (a2 + 1) + 472), 0, 0);
  return Function_224f500(**(uint **)(v3 + 4 * (v4 + 1) + 472), 1, 1);
}

//----- (0224F560) --------------------------------------------------------
int __fastcall Function_224f560(int a1)
{
  int v1;
  int v2;
  int result;
  int v4;

  v1 = a1;
  v2 = Function_2021e24(a1);
  result = u32_div_f(v2, 3);
  if ( v4 == 1 )
  {
    result = Function_2021fd0(v1);
    if ( !result )
      result = Function_224f500(v1, 2, 1);
  }
  return result;
}

//----- (0224F588) --------------------------------------------------------
int __fastcall Function_224f588(int a1)
{
  int v1;
  int result;

  v1 = a1;
  dword_2257740[30] = malloc(0xFu, 8);
  MI_CpuFill8((ushort *)dword_2257740[30], 0, 8u);
  *(uchar *)(dword_2257740[30] + 4) = 0;
  *(uchar *)(dword_2257740[30] + 5) = 0;
  result = dword_2257740[30];
  *(uint *)dword_2257740[30] = v1;
  return result;
}

//----- (0224F5B8) --------------------------------------------------------
uint Function_224f5b8()
{
  return free(dword_2257740[30]);
}

//----- (0224F5C8) --------------------------------------------------------
int __fastcall Function_224f5c8(int a1)
{
  int v1;
  int v2;

  v1 = GetOverWorldData_VariableAreaAdresses(*(uint *)(a1 + 12));
  v2 = LoadVariableAreaAdress_c(v1);
  return Function_2028e28(v2);
}

//----- (0224F5DC) --------------------------------------------------------
int __fastcall Function_224f5dc(int a1)
{
  int v1;
  int v2;

  v1 = GetOverWorldData_VariableAreaAdresses(*(uint *)(a1 + 12));
  v2 = LoadVariableAreaAdress_c(v1);
  return Function_20289a0(v2);
}

//----- (0224F5F0) --------------------------------------------------------
int __fastcall Function_224f5f0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = GetOverWorldData_VariableAreaAdresses(*(uint *)(a2 + 12));
  v4 = LoadVariableAreaAdress_c(v3);
  return Function_20289b8(v4, v2);
}

//----- (0224F608) --------------------------------------------------------
int __fastcall Function_224f608(int a1)
{
  int v1;
  int v2;

  v1 = GetOverWorldData_VariableAreaAdresses(*(uint *)(a1 + 12));
  v2 = LoadVariableAreaAdress_c(v1);
  return Function_2028b70(v2);
}

//----- (0224F61C) --------------------------------------------------------
int __fastcall Function_224f61c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = GetOverWorldData_VariableAreaAdresses(*(uint *)(a2 + 12));
  v4 = LoadVariableAreaAdress_c(v3);
  return Function_2028b88(v4, v2);
}

//----- (0224F634) --------------------------------------------------------
int __fastcall Function_224f634(int a1)
{
  if ( *(uchar *)(dword_2257740[30] + 5) != a1 )
    ErrorHandler();
  return Function_2028b94(*(uint *)dword_2257740[30], *(uchar *)(dword_2257740[30] + 4));
}

//----- (0224F658) --------------------------------------------------------
int __fastcall Function_224f658(int a1)
{
  int v1;
  int v2;

  v1 = GetOverWorldData_VariableAreaAdresses(*(uint *)(a1 + 12));
  v2 = LoadVariableAreaAdress_c(v1);
  return Function_2028c3c(v2);
}

//----- (0224F66C) --------------------------------------------------------
int __fastcall Function_224f66c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = GetOverWorldData_VariableAreaAdresses(*(uint *)(a2 + 12));
  v4 = LoadVariableAreaAdress_c(v3);
  return Function_2028e44(v4, v2);
}

//----- (0224F684) --------------------------------------------------------
int __fastcall Function_224f684(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = GetOverWorldData_VariableAreaAdresses(*(uint *)(a2 + 12));
  v4 = LoadVariableAreaAdress_c(v3);
  return Function_2028c54(v4, v2);
}

//----- (0224F69C) --------------------------------------------------------
int __fastcall Function_224f69c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = GetOverWorldData_VariableAreaAdresses(*(uint *)(a2 + 12));
  v4 = LoadVariableAreaAdress_c(v3);
  return Function_2028c60(v4, v2);
}

//----- (0224F6B4) --------------------------------------------------------
int __fastcall Function_224f6b4(int a1)
{
  int v1;
  int v2;

  v1 = GetOverWorldData_VariableAreaAdresses(*(uint *)(a1 + 12));
  v2 = LoadVariableAreaAdress_c(v1);
  return Function_2028d58(v2);
}

//----- (0224F6C8) --------------------------------------------------------
int __fastcall Function_224f6c8(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = GetOverWorldData_VariableAreaAdresses(*(uint *)(a2 + 12));
  v4 = LoadVariableAreaAdress_c(v3);
  return Function_2028d74(v4, v2);
}

//----- (0224F6E0) --------------------------------------------------------
int __fastcall Function_224f6e0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( a1 >= 11 )
    ErrorHandler();
  if ( v2 >= 6 )
    LOBYTE(v2) = v2 - 5;
  if ( v3 > 99 )
    LOBYTE(v3) = 99;
  return Function_2028cb0(*(uint *)dword_2257740[30], v2, v3);
}

//----- (0224F710) --------------------------------------------------------
int __fastcall Function_224f710(int a1)
{
  char v1;

  v1 = a1;
  if ( a1 >= 60 )
    ErrorHandler();
  return Function_2028db4(*(uint *)dword_2257740[30], v1);
}

//----- (0224F730) --------------------------------------------------------
int __fastcall Function_224f730(char a1)
{
  return Function_2028e84(*(uint *)dword_2257740[30], a1);
}

//----- (0224F744) --------------------------------------------------------
int __fastcall Function_224f744(char a1)
{
  return Function_2028bc8(*(uint *)dword_2257740[30], a1);
}

//----- (0224F758) --------------------------------------------------------
int __fastcall Function_224f758(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = a2;
  Function_2005748(0x5FDu);
  Function_22430d0(2);
  v4 = malloc(4u, 592);
  MI_CpuFill8((ushort *)v4, 0, 0x250u);
  *(uint *)(v4 + 12) = v3;
  *(uint *)(v4 + 508) = v2;
  *(uchar *)(v4 + 582) = 0;
  *(uint *)(v4 + 104) = Function_2023790(100, 4u);
  *(uint *)(v4 + 108) = Function_2023790(100, 4u);
  *(uint *)(v4 + 112) = Function_200b358(4u);
  *(uint *)(v4 + 4) = AddTaskToTaskList1((int)Function_224f914, v4, 0x2710u);
  return Function_22431ec(v4, *(uint *)(v4 + 4), (int)Function_2251270);
}

//----- (0224F7D4) --------------------------------------------------------
int __fastcall Function_224f7d4(uchar *a1)
{
  *a1 = 0;
  a1[1] = 1;
  a1[2] = 2;
  a1[3] = 3;
  a1[4] = 4;
  a1[5] = 5;
  a1[6] = 6;
  return 7;
}

//----- (0224F7F4) --------------------------------------------------------
int __fastcall Function_224f7f4(int a1)
{
  int v1;
  int v2;
  int *v3;
  uint v4;
  int v5;
  ushort *v6;
  ushort *v7;
  int v8;
  int v9;
  ushort **v11;
  char v12;
  int v13;
  int v14;
  char v15;
  char v16;
  char v17;
  char v18;

  v1 = a1;
  Function_224f7d4(&v12);
  *(uint *)(v1 + 64) = Function_2013a04(7u, 4u);
  Function_201a7e8(*(uint **)(*(uint *)(v1 + 12) + 8), v1 + 16, 3, 20, 1, 0xBu, 0x15u, 13, 743);
  Function_200dc48(v1 + 16, 1, 985, 0xBu);
  v2 = Function_224219c();
  v3 = &dword_2256924;
  v11 = (ushort **)Function_2253e3c(v2);
  v4 = 0;
  do
  {
    if ( v4 == 4 )
    {
      v5 = GetOverWorldData_VariableAreaAdresses(*(uint *)(v1 + 12));
      v6 = (ushort *)LoadTrainerDataAdress(v5);
      v7 = Function_2025f04(v6, 4u);
      Function_2013a6c(*(uint **)(v1 + 64), (int)v7, v3[1], v8);
      Function_20237bc_FreeMsg((int)v7, v9);
    }
    else
    {
      Function_2013a4c(*(uint **)(v1 + 64), v11, *v3, v3[1]);
    }
    ++v4;
    v3 += 2;
  }
  while ( v4 < 7 );
  *(ushort *)(v1 + 568) = *(uint *)(*(uint *)(v1 + 12) + 144);
  v13 = *(uint *)(v1 + 64);
  v14 = v1 + 16;
  v15 = 1;
  v16 = 1;
  v17 = 7;
  v18 = v18 & 0xF0 | 8;
  v18 = v18 & 0xCF | 0x10;
  v18 = v18 & 0x3F | 0x40;
  *(uint *)(v1 + 84) = Function_2001af4(&v13, 28, 4, *(ushort *)(v1 + 568), 0xBu, 1026);
  *(uint *)(v1 + 72) = 0;
  Function_201a9a4(v1 + 16);
  Function_224f294(v1, (int)&v12, 7u);
  return Function_20594fc();
}

//----- (0224F914) --------------------------------------------------------
uint *__fastcall Function_224f914(uint *result, int a2, int a3, int a4)
{
  int v4;
  uint v5;
  uint *v6;
  int v7;
  int v8;
  int v9;

  v4 = a2;
  v5 = *(uchar *)(a2 + 582);
  v6 = result;
  if ( v5 <= 0x13 )
    JUMPOUT(__CS__, *((short *)&off_224F930 + v5) + 35977522);
  switch ( (uchar)v5 )
  {
    case 0:
      Function_224f7f4(a2);
      result = (uint *)582;
      ++*(uchar *)(v4 + 582);
      break;
    case 1:
      result = (uint *)Function_224fa58(result, a2, v5, a4);
      break;
    case 2:
      Function_224fb7c(a2);
      Function_2243204();
      result = (uint *)Function_2250b34(v6, v4, 0);
      break;
    case 3:
      Function_224fb7c(a2);
      Function_2243204();
      result = (uint *)Function_2250b34(v6, v4, 1);
      break;
    case 5:
      result = (uint *)Function_224ff58();
      break;
    case 6:
      result = (uint *)Function_2250378();
      break;
    case 7:
      result = (uint *)Function_2250704();
      break;
    case 8:
      result = (uint *)Function_2250eac();
      break;
    case 9:
      result = (uint *)Function_22510f0();
      break;
    case 0xB:
      result = (uint *)Function_2250998();
      break;
    case 0xC:
      result = (uint *)Function_22509d4();
      break;
    case 0xD:
      v7 = Function_224219c();
      result = (uint *)Function_2254238(v7);
      if ( !result )
      {
        result = (uint *)1;
        if ( dword_21BF6C4 & 1 )
        {
          v8 = Function_224219c();
          Function_2254044(v8);
          Function_2250b34(v6, v4, 0);
          result = (uint *)Function_2243204();
        }
      }
      break;
    case 0xE:
      v9 = Function_224219c();
      result = (uint *)Function_2254238(v9);
      if ( !result )
      {
        result = (uint *)1;
        if ( dword_21BF6C4 & 1 )
        {
          (*(void (__fastcall **)(int))v4)(v4);
          result = (uint *)582;
          *(uchar *)(v4 + 582) = *(uchar *)(v4 + 581);
        }
      }
      break;
    case 0xF:
      Function_224fb7c(a2);
      Function_2250b34(v6, v4, 1);
      Function_2243204();
      result = Function_2054064(*(uint *)(v4 + 12));
      break;
    case 0x10:
      result = (uint *)Function_225044c();
      break;
    case 0x11:
      result = (uint *)Function_22507d8();
      break;
    case 0x12:
      result = (uint *)Function_2250048();
      break;
    case 0x13:
      result = (uint *)Function_2250f8c();
      break;
    default:
      return result;
  }
  return result;
}

//----- (0224FA58) --------------------------------------------------------
int __fastcall Function_224fa58(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int (*v7)();
  int (*v9)();
  ushort *v10;

  v2 = a2;
  v3 = Function_2001dc4(*(uint *)(a2 + 84));
  *(uint *)(v2 + 572) = Function_2001c94(*(uint *)(v2 + 84), 0x5E0u);
  *(ushort *)(v2 + 568) = Function_2001dc4(*(uint *)(v2 + 84));
  v5 = *(ushort *)(v2 + 568);
  if ( v3 != v5 )
  {
    Function_224f4d0(**(uint ***)(v2 + 472), v5, 472, v4);
    Function_224f52c(v2, v3, *(ushort *)(v2 + 568));
    *(uint *)(*(uint *)(v2 + 12) + 144) = *(ushort *)(v2 + 568);
  }
  Function_224f560(**(uint **)(v2 + 4 * (*(ushort *)(v2 + 568) + 1) + 472));
  if ( Function_20360f0() )
    *(uint *)(v2 + 572) = -2;
  v7 = *(int (**)())(v2 + 572);
  if ( v7 == (int (*)())-2 )
  {
    *(uchar *)(v2 + 582) = 2;
  }
  else
  {
    if ( v7 == (int (*)())-1 )
    {
      Function_224f498(v2);
      Function_20219f8(*(uint *)(v2 + 116));
      return 0;
    }
    v9 = Function_224fde0;
    if ( v7 == Function_224fde0
      || (v9 = Function_22501bc, v7 == Function_22501bc)
      || (v9 = Function_2250cd4, v7 == Function_2250cd4)
      || (v9 = Function_2250598, v7 == Function_2250598) )
    {
      v10 = Function_206a780(4u, (int)v9, -2, v6);
      *(uint *)(v2 + 8) = v10;
      Function_206a8a0((int)v10, 200, 20, 122);
      Function_206a8c4(*(uint *)(v2 + 8), 0, 0);
      Function_206a8c4(*(uint *)(v2 + 8), 1u, 0);
    }
    if ( *(uint *)(v2 + 504) )
    {
      Function_224f460(v2);
      Function_2001bc4(*(uint *)(v2 + 84), 0);
      *(uint *)(v2 + 504) = 0;
    }
    (*(void (__fastcall **)(int))(v2 + 572))(v2);
  }
  return 1;
}

//----- (0224FB7C) --------------------------------------------------------
int __fastcall Function_224fb7c(int a1)
{
  int v1;
  uint *v2;
  int v3;
  int result;

  v1 = a1;
  v2 = *(uint **)(a1 + 76);
  if ( v2 )
  {
    Function_2248ef8(v2, 0, 0);
    *(uint *)(v1 + 76) = 0;
  }
  v3 = *(uint *)(v1 + 72);
  if ( v3 )
  {
    Function_2001384(v3, 0, 0);
    *(uint *)(v1 + 72) = 0;
  }
  else if ( *(uint *)(v1 + 504) )
  {
    Function_224f460(v1);
    Function_2001bc4(*(uint *)(v1 + 84), 0);
    *(uint *)(v1 + 504) = 0;
  }
  result = Function_201a7cc(v1 + 16);
  if ( result )
  {
    Function_200dc9c(v1 + 16, 1);
    Function_201c3c0(*(uint *)(v1 + 16), *(uchar *)(v1 + 20));
    Function_201a8fc(v1 + 16);
    Function_2013a3c(*(int **)(v1 + 64));
    result = Function_2252df4(v1);
  }
  return result;
}

//----- (0224FBFC) --------------------------------------------------------
int __fastcall Function_224fbfc(int a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  char v7;
  int v8;
  int v9;
  int result;
  ushort **i;
  char v12;
  uchar v13;
  int v14;
  int v15;
  int v16;
  int v17;
  short v18;
  short v19;
  int v20;
  int v21;
  int v22;
  int v23;

  v23 = a4;
  v6 = a1;
  v13 = 6;
  v7 = 11;
  v12 = 25;
  switch ( a2 )
  {
    case 1:
      v5 = 3;
      v4 = &dword_2257644;
      break;
    case 2:
      v5 = 2;
      v7 = 13;
      v4 = &dword_2257634;
      break;
    case 3:
      v4 = &dword_225765C;
      v5 = 3;
      v13 = 11;
      v12 = 20;
      break;
  }
  *(uint *)(a1 + 68) = Function_2013a04(v5, 4u);
  Function_201a7e8(*(uint **)(*(uint *)(v6 + 12) + 8), v6 + 32, 3, v12, v7, v13, 2 * v5, 13, 743);
  Function_200dc48(v6 + 32, 1, 985, 0xBu);
  v8 = Function_224219c();
  v9 = 0;
  for ( i = (ushort **)Function_2253e3c(v8); v9 < v5; v4 += 2 )
  {
    Function_2013a4c(*(uint **)(v6 + 68), i, *v4, v4[1]);
    ++v9;
  }
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v20 = 268437504;
  v21 = 8388655;
  v22 = 0;
  v18 = v5;
  v19 = v5;
  v14 = *(uint *)(v6 + 68);
  v17 = v6 + 32;
  v22 = v6;
  result = Function_200112c(&v14, 0, 0, 4u);
  *(uint *)(v6 + 80) = result;
  return result;
}

//----- (0224FCF4) --------------------------------------------------------
uint __fastcall Function_224fcf4(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = a1;
  v2 = *(uint *)(a1 + 80);
  if ( v2 )
  {
    Function_2001384(v2, 0, 0);
    Function_201c3c0(*(uint *)(v1 + 32), *(uchar *)(v1 + 36));
    Function_2013a3c(*(int **)(v1 + 68));
    *(uint *)(v1 + 80) = 0;
  }
  result = Function_201a7cc(v1 + 32);
  if ( result )
  {
    Function_200dc9c(v1 + 32, 1);
    result = Function_201a8fc(v1 + 32);
  }
  return result;
}

//----- (0224FD3C) --------------------------------------------------------
int __fastcall Function_224fd3c(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  Function_224fb7c(a1);
  v2 = *(uint *)(v1 + 8);
  if ( v2 )
  {
    Function_206a844(v2);
    *(uint *)(v1 + 8) = 0;
  }
  *(uchar *)(v1 + 582) = 0;
  v3 = Function_22421dc();
  return Function_2254044(v3);
}

//----- (0224FD68) --------------------------------------------------------
int __fastcall Function_224fd68(int result)
{
  if ( *(uchar *)(dword_2257740[30] + 5) == result )
    result = Function_2028e50(*(uint *)dword_2257740[30], *(uchar *)(dword_2257740[30] + 4));
  return result;
}

//----- (0224FD84) --------------------------------------------------------
int __fastcall Function_224fd84(int a1, int a2)
{
  int v2;
  uint v3;
  int v4;
  int v5;
  int v6;

  v2 = a2;
  v3 = Function_2001504(a1, 0x13u);
  v4 = (*(int (__fastcall **)(int))(v3 + 516))(v2);
  if ( v2 == -2 )
    v5 = 68;
  else
    v5 = v4 + 34;
  v6 = Function_22421dc();
  return Function_2253f60(v6, v5);
}

//----- (0224FDBC) --------------------------------------------------------
int __fastcall Function_224fdbc(uint *a1)
{
  a1[128] = Function_224f5c8;
  a1[129] = Function_224f66c;
  a1[25] = 0;
  return Function_224fe38();
}

//----- (0224FDE0) --------------------------------------------------------
int __fastcall Function_224fde0(int a1)
{
  int v1;

  v1 = a1;
  *(uint *)(a1 + 556) = Function_224318c(8);
  *(uint *)(v1 + 560) = Function_2243154(8);
  *(uint *)(v1 + 512) = Function_224f5c8;
  *(uint *)(v1 + 516) = Function_224f66c;
  *(uint *)(v1 + 96) = Function_224fd84;
  *(uint *)(v1 + 100) = 0;
  *(ushort *)(v1 + 588) = *(uint *)(v1 + 556);
  return Function_224fe38(v1, Function_2028ea8);
}

//----- (0224FE38) --------------------------------------------------------
int __fastcall Function_224fe38(int a1, int a2)
{
  int v2;
  int (__fastcall *v3)(int, int);
  int v4;
  int v5;
  int v6;
  int v7;
  uint v8;
  int result;
  int v10;
  ushort **i;
  int v12;
  int v13;
  int v14;
  int v15;
  short v16;
  short v17;
  int v18;
  int v19;
  int v20;

  v10 = a2;
  v2 = a1;
  v3 = *(int (__fastcall **)(int, int))(a1 + 516);
  v4 = (*(int (**)(void))(a1 + 512))();
  Function_224fb7c(v2);
  v5 = Function_22421dc();
  Function_2253dfc(v5, 630, 0);
  *(uint *)(v2 + 64) = Function_2013a04(v4 + 1, 4u);
  Function_201a7e8(*(uint **)(*(uint *)(v2 + 12) + 8), v2 + 16, 3, 19, 3, 0xCu, 0xCu, 13, 599);
  Function_200dc48(v2 + 16, 1, 985, 0xBu);
  v6 = Function_22421dc();
  v7 = 0;
  for ( i = (ushort **)Function_2253e3c(v6); v7 < v4; ++v7 )
  {
    v8 = v3(v7, v2);
    Function_2013a4c(*(uint **)(v2 + 64), i, v8, v7);
  }
  Function_2013a4c(*(uint **)(v2 + 64), i, 0x22u, -2);
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v18 = 268437504;
  v19 = 8388655;
  v20 = 0;
  v16 = v4 + 1;
  v17 = 6;
  v12 = *(uint *)(v2 + 64);
  v15 = v2 + 16;
  v13 = *(uint *)(v2 + 96);
  v14 = *(uint *)(v2 + 100);
  v20 = v2;
  Function_2251238(v2);
  *(uint *)(v2 + 76) = Function_2248c08(
                           (int)&v12,
                           *(uint *)(v2 + 560),
                           *(uint *)(v2 + 556),
                           4u,
                           v10,
                           *(uint *)dword_2257740[30],
                           0);
  result = 582;
  *(uchar *)(v2 + 582) = 5;
  return result;
}

//----- (0224FF58) --------------------------------------------------------
int __fastcall Function_224ff58(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint v6;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v14 = a4;
  v4 = a2;
  v5 = Function_2248d20(*(uint **)(a2 + 76), a2, a3, a4);
  Function_20014dc(*(uint *)(*(uint *)(v4 + 76) + 12), (ushort *)&v14 + 1, &v14);
  Function_22430e0(8u, v14, SHIWORD(v14));
  if ( Function_20360f0() )
    v5 = -2;
  if ( v5 == -2 )
    v5 = -2;
  if ( v5 == -2 )
  {
    Function_224fd3c(v4);
  }
  else
  {
    if ( v5 == -1 )
    {
      v6 = Function_2001504(*(uint *)(*(uint *)(v4 + 76) + 12), 2u);
      Function_225128c(v4, HIWORD(v14), v6, 6);
      return 0;
    }
    v8 = Function_22421dc();
    Function_2254044(v8);
    *(uchar *)(dword_2257740[30] + 4) = v5;
    *(uchar *)(dword_2257740[30] + 5) = Function_224f66c(v5, v4);
    if ( *(uchar *)(dword_2257740[30] + 5) == 33 )
    {
      Function_224cd68(33, (int)&dword_2257740[30], dword_2257740[30], v9);
      *(uchar *)(v4 + 582) = 3;
    }
    else
    {
      Function_224fb7c(v4);
      Function_224fbfc(v4, 1, v10, v11);
      *(uchar *)(v4 + 582) = 18;
      v12 = Function_224219c();
      Function_22541b4(v12, 2, *(uchar *)(dword_2257740[30] + 5));
      v13 = Function_224219c();
      Function_2253f60(v13, 129);
    }
    Function_206a8c4(*(uint *)(v4 + 8), 0, 0);
    Function_206a8c4(*(uint *)(v4 + 8), 1u, 0);
  }
  return 1;
}

//----- (02250048) --------------------------------------------------------
int __fastcall Function_2250048(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v6;
  int v7;

  v2 = a2;
  v3 = Function_2001288(*(uint *)(a2 + 80));
  v4 = *(ushort *)(v2 + 588);
  Function_20014d0(*(uint *)(v2 + 80), (ushort *)(v2 + 588));
  if ( v4 != *(ushort *)(v2 + 588) )
    Function_2005748(0x5DCu);
  if ( v3 == -2 )
  {
    Function_2005748(0x5DCu);
    Function_224fcf4(v2);
    Function_224fde0(v2);
    *(uchar *)(v2 + 582) = 5;
  }
  else
  {
    if ( v3 == -1 )
      return 0;
    Function_224fcf4(v2);
    if ( v3 == 1 )
    {
      Function_224f66c(*(uchar *)(dword_2257740[30] + 4), v2);
      Function_2243ad4();
      Function_2005748(0x631u);
      *(uchar *)(v2 + 582) = 3;
    }
    else if ( v3 == 2 )
    {
      Function_2005748(0x5DCu);
      Function_224fd68(*(uchar *)(dword_2257740[30] + 5));
      v6 = Function_224219c();
      Function_22541b4(v6, 2, *(uchar *)(dword_2257740[30] + 5));
      v7 = Function_224219c();
      Function_2253f40(v7, 130);
      *(uint *)v2 = Function_224fde0;
      *(uchar *)(v2 + 581) = 5;
      *(uchar *)(v2 + 582) = 14;
    }
  }
  return 1;
}

//----- (02250128) --------------------------------------------------------
int __fastcall Function_2250128(int a1)
{
  if ( *(uchar *)(dword_2257740[30] + 5) != a1 )
    ErrorHandler();
  return Function_2028c6c(*(uint *)dword_2257740[30], *(uchar *)(dword_2257740[30] + 4));
}

//----- (0225014C) --------------------------------------------------------
int __fastcall Function_225014c(int a1, int a2)
{
  int v2;
  uint v3;
  int v4;
  int v5;
  int v6;

  v2 = a2;
  v3 = Function_2001504(a1, 0x13u);
  v4 = (*(int (__fastcall **)(int))(v3 + 516))(v2);
  if ( v2 == -2 )
    v5 = 61;
  else
    v5 = v4 + 62;
  v6 = Function_22421dc();
  return Function_2253f60(v6, v5);
}

//----- (02250184) --------------------------------------------------------
int __fastcall Function_2250184(uint *a1)
{
  a1[128] = Function_224f658;
  a1[129] = Function_224f684;
  a1[130] = Function_224f69c;
  a1[24] = Function_225014c;
  return Function_225021c();
}

//----- (022501BC) --------------------------------------------------------
int __fastcall Function_22501bc(int a1)
{
  int v1;

  v1 = a1;
  *(uint *)(a1 + 556) = Function_224318c(9);
  *(uint *)(v1 + 560) = Function_2243154(9);
  *(uint *)(v1 + 512) = Function_224f658;
  *(uint *)(v1 + 516) = Function_224f684;
  *(uint *)(v1 + 520) = Function_224f69c;
  *(uint *)(v1 + 96) = Function_225014c;
  *(ushort *)(v1 + 588) = *(uint *)(v1 + 556);
  return Function_225021c(v1, Function_2028cd8);
}

//----- (0225021C) --------------------------------------------------------
int __fastcall Function_225021c(int a1, int a2, int a3, int a4)
{
  int v4;
  int (__fastcall *v5)(int, int);
  int v6;
  int v7;
  int v8;
  int v9;
  uint v10;
  int v11;
  int v12;
  ushort **v13;
  int v14;
  int result;
  int v16;
  ushort **i;
  int (__fastcall *v18)(int, int);
  int v19;
  int v20;
  int v21;
  int v22;
  short v23;
  short v24;
  int v25;
  int v26;
  int v27;
  int v28;

  v28 = a4;
  v4 = a1;
  v16 = a2;
  v18 = *(int (__fastcall **)(int, int))(a1 + 516);
  v5 = *(int (__fastcall **)(int, int))(a1 + 520);
  v6 = (*(int (**)(void))(a1 + 512))();
  Function_224fb7c(v4);
  v7 = Function_22421dc();
  Function_2253dfc(v7, 628, 0);
  *(uint *)(v4 + 64) = Function_2013a04(v6 + 1, 4u);
  Function_201a7e8(*(uint **)(*(uint *)(v4 + 12) + 8), v4 + 16, 3, 19, 3, 0xCu, 0xCu, 13, 599);
  Function_200dc48(v4 + 16, 1, 985, 0xBu);
  v8 = Function_22421dc();
  v9 = 0;
  for ( i = (ushort **)Function_2253e3c(v8); v9 < v6; ++v9 )
  {
    v10 = v18(v9, v4);
    Function_200ba94(*(uint *)(v4 + 112), 2u, v10);
    v11 = v5(v9, v4);
    Function_200b60c(*(uint *)(v4 + 112), 6u, v11, 2, 2, 1);
    v12 = Function_224219c();
    v13 = (ushort **)Function_2253e3c(v12);
    Function_200b1b8_CallMsgDecrypt(v13, 0x80u, *(ushort **)(v4 + 108));
    Function_200c388(*(uint **)(v4 + 112), *(uint *)(v4 + 104), *(uint *)(v4 + 108));
    Function_2013a6c(*(uint **)(v4 + 64), *(uint *)(v4 + 104), v9, v14);
  }
  Function_2013a4c(*(uint **)(v4 + 64), i, 0x3Cu, -2);
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v25 = 268437504;
  v26 = 8388655;
  v27 = 0;
  v23 = v6 + 1;
  v24 = 6;
  v19 = *(uint *)(v4 + 64);
  v22 = v4 + 16;
  v20 = *(uint *)(v4 + 96);
  v27 = v4;
  Function_2251238(v4);
  *(uint *)(v4 + 76) = Function_2248c08(
                           (int)&v19,
                           *(uint *)(v4 + 560),
                           *(uint *)(v4 + 556),
                           4u,
                           v16,
                           *(uint *)dword_2257740[30],
                           0);
  result = 582;
  *(uchar *)(v4 + 582) = 6;
  return result;
}

//----- (02250378) --------------------------------------------------------
int __fastcall Function_2250378(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint v6;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a2;
  v5 = Function_2248d20(*(uint **)(a2 + 76), a2, a3, a4);
  Function_20014dc(*(uint *)(*(uint *)(v4 + 76) + 12), (ushort *)&v12 + 1, &v12);
  Function_22430e0(9u, v12, SHIWORD(v12));
  if ( Function_20360f0() )
    v5 = -2;
  if ( v5 == -2 )
    v5 = -2;
  if ( v5 == -2 )
  {
    Function_224fd3c(v4);
  }
  else
  {
    if ( v5 == -1 )
    {
      v6 = Function_2001504(*(uint *)(*(uint *)(v4 + 76) + 12), 2u);
      Function_225128c(v4, HIWORD(v12), v6, 6);
      return 0;
    }
    Function_224fb7c(v4);
    *(uchar *)(dword_2257740[30] + 4) = v5;
    *(uchar *)(dword_2257740[30] + 5) = Function_224f684(v5, v4);
    Function_224fbfc(v4, 1, v8, v9);
    *(uchar *)(v4 + 582) = 16;
    v10 = Function_224219c();
    Function_22541a0(v10, 2, *(uchar *)(dword_2257740[30] + 5));
    v11 = Function_224219c();
    Function_2253f60(v11, 129);
    Function_206a8c4(*(uint *)(v4 + 8), 0, 0);
    Function_206a8c4(*(uint *)(v4 + 8), 1u, 0);
  }
  return 1;
}

//----- (0225044C) --------------------------------------------------------
int __fastcall Function_225044c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v2 = a2;
  v3 = Function_2001288(*(uint *)(a2 + 80));
  v4 = *(ushort *)(v2 + 588);
  Function_20014d0(*(uint *)(v2 + 80), (ushort *)(v2 + 588));
  if ( v4 != *(ushort *)(v2 + 588) )
    Function_2005748(0x5DCu);
  if ( v3 == -2 )
  {
    Function_2005748(0x5DCu);
    Function_224fcf4(v2);
    Function_22501bc(v2);
    *(uchar *)(v2 + 582) = 6;
  }
  else
  {
    if ( v3 == -1 )
      return 0;
    Function_224fcf4(v2);
    if ( v3 == 1 )
    {
      v6 = Function_203608c();
      v7 = Function_2058d88(v6);
      v8 = Function_2058dc0(v6);
      v9 = Function_22421dc();
      Function_2254044(v9);
      v10 = Function_224f69c(*(uchar *)(dword_2257740[30] + 4), v2);
      Function_2241ae8(*(uchar *)(dword_2257740[30] + 5), v10, v7, v8);
    }
    else if ( v3 == 2 )
    {
      Function_2005748(0x5DCu);
      Function_2250128(*(uchar *)(dword_2257740[30] + 5));
      v11 = Function_224219c();
      Function_22541a0(v11, 2, *(uchar *)(dword_2257740[30] + 5));
      v12 = Function_224219c();
      Function_2253f40(v12, 130);
    }
    *(uint *)v2 = Function_22501bc;
    *(uchar *)(v2 + 581) = 6;
    *(uchar *)(v2 + 582) = 14;
  }
  return 1;
}

//----- (02250540) --------------------------------------------------------
int __fastcall Function_2250540(int a1, int a2)
{
  int v2;
  uint v3;
  int v4;
  int v5;
  int v6;

  v2 = a2;
  v3 = Function_2001504(a1, 0x13u);
  v4 = (*(int (__fastcall **)(int))(v3 + 516))(v2);
  if ( v2 == -2 )
    v5 = 61;
  else
    v5 = v4 + 62;
  v6 = Function_22421dc();
  return Function_2253f60(v6, v5);
}

//----- (02250578) --------------------------------------------------------
int __fastcall Function_2250578(int a1)
{
  *(uint *)(a1 + 512) = Function_224f6b4;
  *(uint *)(a1 + 516) = Function_224f6c8;
  return Function_22505ec();
}

//----- (02250598) --------------------------------------------------------
int __fastcall Function_2250598(int a1)
{
  int v1;

  v1 = a1;
  *(uint *)(a1 + 556) = Function_224318c(11);
  *(uint *)(v1 + 560) = Function_2243154(11);
  *(uint *)(v1 + 512) = Function_224f6b4;
  *(uint *)(v1 + 516) = Function_224f6c8;
  *(uint *)(v1 + 96) = Function_2250540;
  *(ushort *)(v1 + 588) = *(uint *)(v1 + 556);
  return Function_22505ec(v1, Function_2028dd8);
}

//----- (022505EC) --------------------------------------------------------
int __fastcall Function_22505ec(int a1, int a2)
{
  int v2;
  int (__fastcall *v3)(int, int);
  int v4;
  int v5;
  int v6;
  int v7;
  uint v8;
  int result;
  int v10;
  ushort **i;
  int v12;
  int v13;
  int v14;
  int v15;
  short v16;
  short v17;
  int v18;
  int v19;
  int v20;

  v10 = a2;
  v2 = a1;
  v3 = *(int (__fastcall **)(int, int))(a1 + 516);
  v4 = (*(int (**)(void))(a1 + 512))();
  Function_224fb7c(v2);
  v5 = Function_22421dc();
  Function_2253dfc(v5, 628, 0);
  *(uint *)(v2 + 64) = Function_2013a04(v4 + 1, 4u);
  Function_201a7e8(*(uint **)(*(uint *)(v2 + 12) + 8), v2 + 16, 3, 19, 3, 0xCu, 0xCu, 13, 599);
  Function_200dc48(v2 + 16, 1, 985, 0xBu);
  v6 = Function_22421dc();
  v7 = 0;
  for ( i = (ushort **)Function_2253e3c(v6); v7 < v4; ++v7 )
  {
    v8 = v3(v7, v2);
    Function_2013a4c(*(uint **)(v2 + 64), i, v8, v7);
  }
  Function_2013a4c(*(uint **)(v2 + 64), i, 0x3Cu, -2);
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v18 = 268437504;
  v19 = 8388655;
  v20 = 0;
  v16 = v4 + 1;
  v17 = 6;
  v12 = *(uint *)(v2 + 64);
  v15 = v2 + 16;
  v13 = *(uint *)(v2 + 96);
  v20 = v2;
  Function_2251238(v2);
  *(uint *)(v2 + 76) = Function_2248c08(
                           (int)&v12,
                           *(uint *)(v2 + 560),
                           *(uint *)(v2 + 556),
                           4u,
                           v10,
                           *(uint *)dword_2257740[30],
                           0);
  result = 582;
  *(uchar *)(v2 + 582) = 7;
  return result;
}

//----- (02250704) --------------------------------------------------------
int __fastcall Function_2250704(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint v6;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a2;
  v5 = Function_2248d20(*(uint **)(a2 + 76), a2, a3, a4);
  Function_20014dc(*(uint *)(*(uint *)(v4 + 76) + 12), (ushort *)&v12 + 1, &v12);
  Function_22430e0(0xBu, v12, SHIWORD(v12));
  if ( Function_20360f0() )
    v5 = -2;
  if ( v5 == -2 )
    v5 = -2;
  if ( v5 == -2 )
  {
    Function_224fd3c(v4);
  }
  else
  {
    if ( v5 == -1 )
    {
      v6 = Function_2001504(*(uint *)(*(uint *)(v4 + 76) + 12), 2u);
      Function_225128c(v4, HIWORD(v12), v6, 6);
      return 0;
    }
    Function_224fb7c(v4);
    *(uchar *)(dword_2257740[30] + 4) = v5;
    *(uchar *)(dword_2257740[30] + 5) = Function_224f6c8(v5, v4);
    Function_224fbfc(v4, 3, v8, v9);
    v10 = Function_224219c();
    Function_22541a0(v10, 2, *(uchar *)(dword_2257740[30] + 5));
    v11 = Function_224219c();
    Function_2253f60(v11, 129);
    *(uchar *)(v4 + 582) = 17;
    Function_206a8c4(*(uint *)(v4 + 8), 0, 0);
    Function_206a8c4(*(uint *)(v4 + 8), 1u, 0);
  }
  return 1;
}

//----- (022507D8) --------------------------------------------------------
int __fastcall Function_22507d8(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  ushort v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v2 = a2;
  v3 = Function_2001288(*(uint *)(a2 + 80));
  v4 = *(ushort *)(v2 + 588);
  Function_20014d0(*(uint *)(v2 + 80), (ushort *)(v2 + 588));
  if ( v4 != *(ushort *)(v2 + 588) )
    Function_2005748(0x5DCu);
  if ( v3 == -2 )
  {
    Function_2005748(0x5DCu);
    Function_224fcf4(v2);
    Function_2250598(v2);
    *(uchar *)(v2 + 582) = 7;
  }
  else
  {
    if ( v3 == -1 )
      return 0;
    Function_224fcf4(v2);
    if ( v3 == 3 )
    {
      v6 = Function_2028938(*(uchar *)(dword_2257740[30] + 5));
      v7 = LoadVariableAreaAdressItemList(*(uint *)(*(uint *)(v2 + 12) + 12));
      Function_2005748(0x5DCu);
      if ( TakeItem(v7, v6, 1, 4u) )
      {
        Function_2028d80(*(uint *)dword_2257740[30], *(uchar *)(dword_2257740[30] + 4));
        v8 = Function_224219c();
        Function_22541a0(v8, 0, *(uchar *)(dword_2257740[30] + 5));
        if ( ((*(uchar *)(dword_2257740[30] + 5) + 227) & 0xFFu) > 1 )
        {
          v10 = Function_224219c();
          Function_2253f40(v10, 79);
        }
        else
        {
          v9 = Function_224219c();
          Function_2253f40(v9, 81);
        }
      }
      else
      {
        v11 = Function_224219c();
        Function_22541a0(v11, 0, *(uchar *)(dword_2257740[30] + 5));
        v12 = Function_224219c();
        Function_2253f40(v12, 80);
      }
    }
    else if ( v3 == 2 )
    {
      Function_2005748(0x5DCu);
      Function_2028d80(*(uint *)dword_2257740[30], *(uchar *)(dword_2257740[30] + 4));
      v13 = Function_224219c();
      Function_22541a0(v13, 2, *(uchar *)(dword_2257740[30] + 5));
      v14 = Function_224219c();
      Function_2253f40(v14, 130);
    }
    *(uint *)v2 = Function_2250598;
    *(uchar *)(v2 + 581) = 7;
    *(uchar *)(v2 + 582) = 14;
  }
  return 1;
}

//----- (02250930) --------------------------------------------------------
int __fastcall Function_2250930(int result)
{
  *(uchar *)(result + 582) = 2;
  return result;
}

//----- (0225093C) --------------------------------------------------------
int __fastcall Function_225093c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;
  int v6;

  v1 = a1;
  Function_224fb7c(a1);
  v2 = GetSpritePositionX(*(uint *)(*(uint *)(v1 + 12) + 60));
  v3 = GetSpritePositionY(*(uint *)(*(uint *)(v1 + 12) + 60));
  if ( Function_2242e58(v2, v3) )
  {
    v4 = Function_224219c();
    Function_2253f40(v4, 66);
    result = 582;
    *(uchar *)(v1 + 582) = 13;
  }
  else
  {
    v6 = Function_224219c();
    *(uint *)(v1 + 552) = Function_2253f40(v6, 52);
    result = 11;
    *(uchar *)(v1 + 582) = 11;
  }
  return result;
}

//----- (02250998) --------------------------------------------------------
int __fastcall Function_2250998(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a2;
  v3 = Function_224219c();
  result = Function_2254238(v3);
  if ( !result )
  {
    *(uint *)(v2 + 92) = Function_2002100(
                             *(uint **)(*(uint *)(v2 + 12) + 8),
                             (uchar *)dword_22568D8,
                             985,
                             11,
                             4u);
    result = 582;
    *(uchar *)(v2 + 582) = 12;
  }
  return result;
}

//----- (022509D4) --------------------------------------------------------
int __fastcall Function_22509d4(int a1, int a2)
{
  int v2;
  int result;
  int v4;

  v2 = a2;
  result = Function_2002114(*(uint *)(a2 + 92), 4u);
  if ( result != -1 )
  {
    if ( result )
    {
      v4 = Function_224219c();
      Function_2254044(v4);
      Function_224fd3c(v2);
    }
    else
    {
      *(uchar *)(v2 + 582) = 15;
    }
    result = 0;
    *(uint *)(v2 + 92) = 0;
  }
  return result;
}

//----- (02250A0C) --------------------------------------------------------
int __fastcall Function_2250a0c(int a1)
{
  return Function_224fd3c(a1);
}

//----- (02250A14) --------------------------------------------------------
int __fastcall Function_2250a14(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;

  v1 = a1;
  v2 = Function_224fb7c(a1);
  Function_2253968(v2);
  v3 = GetOverWorldData_VariableAreaAdresses(*(uint *)(v1 + 12));
  v4 = LoadTrainerDataAdress(v3);
  Function_2253834(*(uint *)(*(uint *)(v1 + 12) + 8), v4, Function_2250a0c, v1, 1);
  result = 582;
  *(uchar *)(v1 + 582) = 10;
  return result;
}

//----- (02250A50) --------------------------------------------------------
int __fastcall Function_2250a50(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = a1;
  v4 = malloc(4u, 592);
  MI_CpuFill8((ushort *)v4, 0, 0x250u);
  *(uint *)(v4 + 12) = v2;
  *(uint *)(v4 + 508) = v3;
  *(uchar *)(v4 + 582) = 0;
  *(uint *)(v4 + 104) = Function_2023790(100, 4u);
  *(uint *)(v4 + 108) = Function_2023790(100, 4u);
  *(uint *)(v4 + 112) = Function_200b358(4u);
  Function_20594fc();
  v5 = Function_22421ac();
  Function_2253f40(v5, 0);
  *(uint *)(v4 + 4) = AddTaskToTaskList1((int)Function_2250b9c, v4, 0x2710u);
  return Function_22431ec(v4, *(uint *)(v4 + 4), (int)Function_2251270);
}

//----- (02250ACC) --------------------------------------------------------
int __fastcall Function_2250acc(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = Function_22421ac();
  result = Function_2254238(v2);
  if ( !result )
  {
    *(uint *)(v1 + 92) = Function_2002100(
                             *(uint **)(*(uint *)(v1 + 12) + 8),
                             (uchar *)dword_22568D8,
                             985,
                             11,
                             4u);
    result = 582;
    *(uchar *)(v1 + 582) = 1;
  }
  return result;
}

//----- (02250B08) --------------------------------------------------------
int __fastcall Function_2250b08(int a1)
{
  int v1;
  int result;
  char v3;

  v1 = a1;
  result = Function_2002114(*(uint *)(a1 + 92), 4u);
  if ( result != -1 )
  {
    if ( result )
      v3 = 2;
    else
      v3 = 3;
    *(uchar *)(v1 + 582) = v3;
    result = 0;
    *(uint *)(v1 + 92) = 0;
  }
  return result;
}

//----- (02250B34) --------------------------------------------------------
int __fastcall Function_2250b34(int *a1, int a2, int a3)
{
  int v3;
  int *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  void (__fastcall *v11)(uint);
  int v12;

  v3 = a2;
  v4 = a1;
  v5 = *(uint *)(a2 + 92);
  v6 = a3;
  if ( v5 )
    Function_2002154(v5, 4u);
  Function_20237bc_FreeMsg(*(uint *)(v3 + 104), a2);
  Function_20237bc_FreeMsg(*(uint *)(v3 + 108), v7);
  Function_200b3f0(*(uint **)(v3 + 112), v8);
  v9 = Function_22421ac();
  Function_2254044(v9);
  v10 = Function_224219c();
  Function_2254044(v10);
  v11 = *(void (__fastcall **)(uint))(v3 + 508);
  if ( v11 )
    v11(0);
  *(uint *)(v3 + 4) = 0;
  v12 = *(uint *)(v3 + 8);
  if ( v12 )
    Function_206a844(v12);
  free(v3);
  if ( !v6 )
    Function_2059514();
  return Call_RemoveTaskFromTaskList(v4);
}

//----- (02250B9C) --------------------------------------------------------
int __fastcall Function_2250b9c(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int result;
  int v8;
  int v9;

  v9 = a4;
  v4 = a1;
  v5 = a2;
  v6 = Function_203608c();
  if ( !Function_224aea4(v6) && *(uchar *)(v5 + 582) <= 1u )
    *(uchar *)(v5 + 582) = 2;
  result = *(uchar *)(v5 + 582);
  switch ( (uchar)result )
  {
    case 0:
      result = Function_2250acc(v5);
      break;
    case 1:
      result = Function_2250b08(v5);
      break;
    case 2:
      Function_2243204();
      result = Function_2250b34(v4, v5, 0);
      break;
    case 3:
      Function_2243204();
      Function_2250b34(v4, v5, 1);
      LOBYTE(v9) = 0;
      result = Function_20360d0(84, (int)&v9);
      break;
    case 4:
      v8 = Function_22421ac();
      result = Function_2254238(v8);
      if ( !result )
      {
        result = 1;
        if ( dword_21BF6C4 & 1 )
        {
          result = 582;
          *(uchar *)(v5 + 582) = 2;
        }
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (02250C3C) --------------------------------------------------------
int __fastcall Function_2250c3c(int a1, int a2)
{
  int v2;
  uint v3;
  int v4;
  int v5;
  int v6;

  v2 = a2;
  v3 = Function_2001504(a1, 0x13u);
  v4 = (*(int (__fastcall **)(int))(v3 + 516))(v2);
  if ( v2 == -2 )
    v5 = 139;
  else
    v5 = v4 + 138;
  v6 = Function_22421dc();
  return Function_2253f60(v6, v5);
}

//----- (02250C74) --------------------------------------------------------
uchar *__fastcall Function_2250c74(int a1, int a2)
{
  int v2;
  uchar *v3;
  uint v4;
  int v5;
  int v6;
  uchar *result;

  v2 = a2;
  v3 = (uchar *)a1;
  v4 = Function_2001504(a1, 0x13u);
  v5 = GetOverWorldData_VariableAreaAdresses(*(uint *)(v4 + 12));
  v6 = LoadVariableAreaAdress_c(v5);
  if ( Function_2028afc(v6, v2) )
    result = Function_200147c(v3, 2, 15, 2);
  else
    result = Function_200147c(v3, 1, 15, 2);
  return result;
}

//----- (02250CB0) --------------------------------------------------------
int __fastcall Function_2250cb0(uint *a1)
{
  a1[128] = Function_224f608;
  a1[129] = Function_224f61c;
  a1[25] = 0;
  return Function_2250d90();
}

//----- (02250CD4) --------------------------------------------------------
int __fastcall Function_2250cd4(int a1)
{
  int v1;

  v1 = a1;
  *(uint *)(a1 + 556) = Function_224318c(10);
  *(uint *)(v1 + 560) = Function_2243154(10);
  *(uint *)(v1 + 512) = Function_224f608;
  *(uint *)(v1 + 516) = Function_224f61c;
  *(uint *)(v1 + 96) = Function_2250c3c;
  *(uint *)(v1 + 100) = 0;
  *(ushort *)(v1 + 588) = *(uint *)(v1 + 556);
  return Function_2250d90(v1, Function_2028be8);
}

//----- (02250D2C) --------------------------------------------------------
int __fastcall Function_2250d2c(uint *a1)
{
  a1[128] = Function_224f608;
  a1[129] = Function_224f61c;
  a1[24] = Function_2250c3c;
  a1[25] = 0;
  return Function_2250d90(a1, Function_2028be8);
}

//----- (02250D5C) --------------------------------------------------------
int __fastcall Function_2250d5c(uint *a1)
{
  a1[128] = Function_224f5dc;
  a1[129] = Function_224f5f0;
  a1[24] = Function_2250c3c;
  a1[25] = Function_2250c74;
  return Function_2250d90(a1, Function_2028a10);
}

//----- (02250D90) --------------------------------------------------------
int __fastcall Function_2250d90(int a1, int a2)
{
  int v2;
  int (__fastcall *v3)(int, int);
  int v4;
  int v5;
  int v6;
  int v7;
  uint v8;
  int result;
  int v10;
  ushort **i;
  int v12;
  int v13;
  int v14;
  int v15;
  short v16;
  short v17;
  int v18;
  int v19;
  int v20;

  v10 = a2;
  v2 = a1;
  v3 = *(int (__fastcall **)(int, int))(a1 + 516);
  v4 = (*(int (**)(void))(a1 + 512))();
  Function_224fb7c(v2);
  v5 = Function_22421dc();
  Function_2253dfc(v5, 626, 0);
  *(uint *)(v2 + 64) = Function_2013a04(v4 + 1, 4u);
  Function_201a7e8(*(uint **)(*(uint *)(v2 + 12) + 8), v2 + 16, 3, 19, 3, 0xCu, 0xCu, 13, 599);
  Function_200dc48(v2 + 16, 1, 985, 0xBu);
  v6 = Function_22421dc();
  v7 = 0;
  for ( i = (ushort **)Function_2253e3c(v6); v7 < v4; ++v7 )
  {
    v8 = v3(v7, v2);
    Function_2013a4c(*(uint **)(v2 + 64), i, v8, v7);
  }
  Function_2013a4c(*(uint **)(v2 + 64), i, 0, -2);
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v18 = 268437504;
  v19 = 8388655;
  v20 = 0;
  v16 = v4 + 1;
  v17 = 6;
  v14 = *(uint *)(v2 + 100);
  v12 = *(uint *)(v2 + 64);
  v15 = v2 + 16;
  v13 = *(uint *)(v2 + 96);
  v20 = v2;
  Function_2251238(v2);
  *(uint *)(v2 + 76) = Function_2248c08(
                           (int)&v12,
                           *(uint *)(v2 + 560),
                           *(uint *)(v2 + 556),
                           4u,
                           v10,
                           *(uint *)dword_2257740[30],
                           0);
  result = 582;
  *(uchar *)(v2 + 582) = 8;
  return result;
}

//----- (02250EAC) --------------------------------------------------------
int __fastcall Function_2250eac(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint v6;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a2;
  v5 = Function_2248d20(*(uint **)(a2 + 76), a2, a3, a4);
  Function_20014dc(*(uint *)(*(uint *)(v4 + 76) + 12), (ushort *)&v12 + 1, &v12);
  Function_22430e0(0xAu, v12, SHIWORD(v12));
  if ( Function_20360f0() )
    v5 = -2;
  if ( v5 == -2 )
    v5 = -2;
  if ( v5 == -2 )
  {
    Function_2005748(0x5DCu);
    Function_224fd3c(v4);
  }
  else
  {
    if ( v5 == -1 )
    {
      v6 = Function_2001504(*(uint *)(*(uint *)(v4 + 76) + 12), 2u);
      Function_225128c(v4, HIWORD(v12), v6, 6);
      return 0;
    }
    Function_224fb7c(v4);
    *(uchar *)(dword_2257740[30] + 4) = v5;
    *(uchar *)(dword_2257740[30] + 5) = Function_224f61c(v5, v4);
    Function_224fbfc(v4, 2, v8, v9);
    v10 = Function_224219c();
    Function_22541c8(v10, 2, *(uchar *)(dword_2257740[30] + 5));
    v11 = Function_224219c();
    Function_2253f60(v11, 129);
    *(uchar *)(v4 + 582) = 19;
    Function_206a8c4(*(uint *)(v4 + 8), 0, 0);
    Function_206a8c4(*(uint *)(v4 + 8), 1u, 0);
  }
  return 1;
}

//----- (02250F8C) --------------------------------------------------------
int __fastcall Function_2250f8c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v6;
  int v7;

  v2 = a2;
  v3 = Function_2001288(*(uint *)(a2 + 80));
  v4 = *(ushort *)(v2 + 588);
  Function_20014d0(*(uint *)(v2 + 80), (ushort *)(v2 + 588));
  if ( v4 != *(ushort *)(v2 + 588) )
    Function_2005748(0x5DCu);
  if ( v3 == -2 )
  {
    Function_2005748(0x5DCu);
    Function_224fcf4(v2);
    Function_2250cd4(v2);
    *(uchar *)(v2 + 582) = 8;
  }
  else
  {
    if ( v3 == -1 )
      return 0;
    Function_224fcf4(v2);
    if ( v3 == 2 )
    {
      Function_2005748(0x5DCu);
      Function_2028b94(*(uint *)dword_2257740[30], *(uchar *)(dword_2257740[30] + 4));
      v6 = Function_224219c();
      Function_22541c8(v6, 2, *(uchar *)(dword_2257740[30] + 5));
      v7 = Function_224219c();
      Function_2253f40(v7, 130);
    }
    *(uint *)v2 = Function_2250cd4;
    *(uchar *)(v2 + 581) = 8;
    *(uchar *)(v2 + 582) = 14;
  }
  return 1;
}

//----- (02251044) --------------------------------------------------------
uint __fastcall Function_2251044(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint *v10;
  int *v11;

  v2 = a1;
  v3 = a2;
  Function_224fb7c(a1);
  v4 = Function_2242fbc();
  Function_22535ec(v4);
  Function_2245784();
  Function_2241364();
  Function_2241ed0();
  if ( *(uint *)(v2 + 524) )
    Function_2253d10();
  v5 = *(uint *)(v2 + 92);
  if ( v5 )
    Function_2002154(v5, 4u);
  Function_224fcf4(v2);
  v7 = *(uint *)(v2 + 8);
  if ( v7 )
    Function_206a844(v7);
  if ( *(uint *)(v2 + 508) )
  {
    *(uchar *)(dword_2257740[30] + 4) = v3;
    *(uchar *)(dword_2257740[30] + 5) = Function_224f61c(v3, v2);
    (*(void (__fastcall **)(uint))(v2 + 508))(0);
    v6 = 0;
    *(uint *)(v2 + 508) = 0;
  }
  v8 = *(uint *)(v2 + 104);
  if ( v8 )
    Function_20237bc_FreeMsg(v8, v6);
  v9 = *(uint *)(v2 + 108);
  if ( v9 )
    Function_20237bc_FreeMsg(v9, v6);
  v10 = *(uint **)(v2 + 112);
  if ( v10 )
    Function_200b3f0(v10, v6);
  v11 = *(int **)(v2 + 4);
  if ( v11 )
    Call_RemoveTaskFromTaskList(v11);
  return free(v2);
}

//----- (022510F0) --------------------------------------------------------
int __fastcall Function_22510f0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int result;
  int v7;
  int v8;

  v4 = a2;
  v5 = Function_2248d20(*(uint **)(a2 + 76), a2, a3, a4);
  if ( Function_20360f0() )
    v5 = -2;
  if ( v5 == -2 )
    v5 = -2;
  if ( v5 == -2 )
  {
    if ( *(uint *)(v4 + 508) )
    {
      *(ushort *)(dword_2257740[30] + 4) = (uchar)v5;
      (*(void (__fastcall **)(uint))(v4 + 508))(*(uchar *)(dword_2257740[30] + 5));
      *(uint *)(v4 + 508) = 0;
    }
    v7 = Function_22421dc();
    Function_2254044(v7);
    Function_2251044(v4, -2);
    Function_2243204();
    result = 1;
  }
  else if ( v5 == -1 )
  {
    result = 0;
  }
  else
  {
    if ( *(uint *)(v4 + 508) )
    {
      *(uchar *)(dword_2257740[30] + 4) = v5;
      *(uchar *)(dword_2257740[30] + 5) = Function_224f61c(v5, v4);
      (*(void (__fastcall **)(uint))(v4 + 508))(*(uchar *)(dword_2257740[30] + 5));
      *(uint *)(v4 + 508) = 0;
    }
    v8 = Function_22421dc();
    Function_2254044(v8);
    Function_2251044(v4, v5);
    Function_2243204();
    result = 1;
  }
  return result;
}

//----- (022511B0) --------------------------------------------------------
int __fastcall Function_22511b0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = a1;
  v4 = malloc(4u, 592);
  MI_CpuFill8((ushort *)v4, 0, 0x250u);
  *(uint *)(v4 + 12) = v2;
  *(uint *)(v4 + 508) = v3;
  *(uchar *)(v4 + 582) = 0;
  *(uint *)(v4 + 504) = 0;
  *(uint *)(v4 + 72) = 0;
  *(uint *)(v4 + 96) = 0;
  *(uint *)(v4 + 104) = Function_2023790(100, 4u);
  *(uint *)(v4 + 108) = Function_2023790(100, 4u);
  *(uint *)(v4 + 112) = Function_200b358(4u);
  Function_2250cd4(v4);
  *(uchar *)(v4 + 582) = 9;
  *(uint *)(v4 + 4) = AddTaskToTaskList1((int)Function_224f914, v4, 0x2710u);
  Function_22431ec(v4, *(uint *)(v4 + 4), (int)Function_2251270);
  return v4;
}

//----- (02251238) --------------------------------------------------------
int __fastcall Function_2251238(int result, int a2, int a3)
{
  int v3;

  if ( *(uint *)(result + 560) + a2 >= a3 )
  {
    *(uint *)(result + 560) = a3 - a2;
    if ( *(uint *)(result + 560) < 0 )
      *(uint *)(result + 560) = 0;
  }
  v3 = a3 - 1;
  if ( *(uint *)(result + 556) >= v3 )
  {
    *(uint *)(result + 556) = v3;
    if ( *(uint *)(result + 556) < 0 )
      *(uint *)(result + 556) = 0;
  }
  return result;
}

//----- (02251270) --------------------------------------------------------
uint __fastcall Function_2251270(int a1, int a2)
{
  int v2;

  v2 = a2;
  Function_200ab4c(0, 1, 1);
  return Function_2251044(v2, -2);
}

//----- (0225128C) --------------------------------------------------------
int __fastcall Function_225128c(int result, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  uint v8;
  uint v9;

  v4 = a3;
  v5 = a4;
  v6 = result;
  v7 = a2;
  if ( a3 > a4 )
  {
    v8 = *(uint *)(result + 8);
    if ( a2 )
      Function_206a8c4(v8, 0, 1);
    else
      Function_206a8c4(v8, 0, 0);
    v9 = *(uint *)(v6 + 8);
    if ( v4 == v7 + v5 )
      Function_206a8c4(v9, 1u, 0);
    else
      Function_206a8c4(v9, 1u, 1);
    result = Function_206a870(*(int **)(v6 + 8));
  }
  return result;
}

//----- (022512D4) --------------------------------------------------------
int __fastcall Function_22512d4(ushort *a1, int a2)
{
  int v2;
  int v3;
  int v5;
  int v6;

  v2 = *a1;
  v3 = a1[1];
  if ( a2 != -1 && a2 )
    return 255;
  if ( v3 == 12 )
  {
    v5 = 0;
  }
  else
  {
    if ( v3 != 44 )
      return 255;
    v5 = 8;
  }
  if ( (uint)(v2 - 15) <= 1 )
    return 0;
  v6 = 0;
  do
  {
    if ( (uint)(v2 - 47) <= 1 )
      return v6 + v5;
    ++v6;
    v2 -= 32;
  }
  while ( v6 < 8 );
  return 255;
}

//----- (02251324) --------------------------------------------------------
int __fastcall Function_2251324(int a1, ushort *a2, int a3, int a4)
{
  ushort *v4;
  int v5;
  int v6;
  int v7;
  int v9;

  v9 = a4;
  v4 = a2;
  v5 = a1;
  v6 = Function_2058f80(a1);
  v7 = Function_22512d4(v4, v6);
  if ( Function_2058f50(v7) == -1 )
    v7 = 255;
  if ( v7 == 255 )
    return 0;
  Function_2059058(v5, 0);
  HIWORD(v9) = (uchar)v7;
  BYTE1(v9) = v5;
  if ( v7 == v5 )
  {
    if ( Function_224aea4(v5) )
    {
      LOBYTE(v9) = 3;
      Function_224a570(v5, 1, &v9, 0);
      return 1;
    }
  }
  else if ( !Function_224aea4(v5) )
  {
    HIBYTE(v9) = 1;
  }
  Function_2035b48(83, (int)&v9 + 1);
  return 1;
}

//----- (022513A4) --------------------------------------------------------
int __fastcall Function_22513a4(int a1, int a2, int a3)
{
  return Function_205948c(64, a2, a3, (int)Function_205948c);
}

//----- (022513B0) --------------------------------------------------------
int __fastcall Function_22513b0(int a1, int a2, uchar *a3, int a4)
{
  uchar *v4;
  int v5;
  int result;
  int v7;

  v4 = a3;
  v5 = a4;
  result = Function_2035ee0();
  if ( result )
  {
    result = Function_203608c();
    if ( *v4 == result )
    {
      if ( v4[1] == Function_203608c() )
      {
        Function_2005748(0x60Cu);
        Function_20594fc();
        result = Function_2251f94(v5);
      }
      else
      {
        Function_2059464(64);
        if ( v4[2] )
        {
          result = Function_22520e8(v5, v4);
        }
        else
        {
          v7 = Function_22421ac();
          result = Function_2253f40(v7, 9);
        }
      }
    }
  }
  return result;
}

//----- (02251414) --------------------------------------------------------
int Function_23_2251414()
{
  return 3;
}

//----- (02251418) --------------------------------------------------------
int __fastcall Function_2251418(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  char v6;

  v2 = a1;
  v3 = GetOverWorldData_VariableAreaAdresses(*(uint *)(a2 + 12));
  v4 = LoadVariableAreaAdress_c(v3);
  v5 = v4;
  v6 = Function_2028b88(v4, v2);
  if ( !Function_202895c(v5, v6) )
    return 0;
  Function_2028b94(v5, v2);
  return 1;
}

//----- (0225144C) --------------------------------------------------------
int __fastcall Function_225144c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  char v6;

  v2 = a1;
  v3 = GetOverWorldData_VariableAreaAdresses(*(uint *)(a2 + 12));
  v4 = LoadVariableAreaAdress_c(v3);
  if ( Function_2028afc(v4, v2) )
    return -1;
  v6 = Function_20289b8(v4, v2);
  if ( !Function_224f744(v6) )
    return 0;
  Function_20289c4(v4, v2);
  return 1;
}

//----- (0225148C) --------------------------------------------------------
int __fastcall Function_225148c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  Function_2001504(a1, 0x13u);
  if ( v2 == -2 )
    v2 = 5;
  v3 = Function_22421bc();
  return Function_2253f60(v3, v2 + 6);
}

//----- (022514B0) --------------------------------------------------------
int __fastcall Function_22514b0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  Function_2001504(a1, 0x13u);
  if ( v2 == -2 )
    v2 = 3;
  v3 = Function_22421bc();
  return Function_2253f60(v3, v2 + 44);
}

//----- (022514D8) --------------------------------------------------------
int __fastcall Function_22514d8(int a1, int a2, int a3, int a4)
{
  int v4;
  uint v5;
  int v7;
  int v8;
  int v9;
  int v10;

  v10 = a4;
  v4 = a2;
  v5 = Function_2001288(*(uint *)(a2 + 72));
  Function_20014dc(*(uint *)(v4 + 72), (ushort *)&v10 + 1, &v10);
  Function_22430e0(0x17u, v10, SHIWORD(v10));
  Function_22521c8(v4);
  if ( v5 > 0xFFFFFFFE )
  {
    if ( v5 == -1 )
      return 0;
  }
  else if ( v5 >= 0xFFFFFFFE )
  {
    Function_2005748(0x60Eu);
    *(uchar *)(v4 + 582) = 2;
  }
  else
  {
    switch ( -2 )
    {
      case 0:
        v7 = LoadVariableAreaAdress_c(*(uint *)(*(uint *)(v4 + 12) + 12));
        if ( Function_20289a0(v7) )
        {
          if ( Function_2033dfc() )
          {
            Function_2243204();
            *(uchar *)(v4 + 582) = 3;
          }
          else
          {
            v9 = Function_22421bc();
            Function_2253f40(v9, 56);
            *(uchar *)(v4 + 582) = 23;
          }
        }
        else
        {
          v8 = Function_22421bc();
          Function_2253f40(v8, 60);
          *(uchar *)(v4 + 582) = 23;
        }
        break;
      case 1:
        Function_2005748(0x5DCu);
        *(uchar *)(v4 + 582) = 17;
        break;
      case 2:
        Function_2005748(0x5DCu);
        *(uchar *)(v4 + 582) = 20;
        break;
      case 3:
        Function_2005748(0x5DCu);
        *(uchar *)(v4 + 582) = 6;
        break;
      case 4:
        Function_2005748(0x5DCu);
        *(uchar *)(v4 + 582) = 8;
        break;
      default:
        return 1;
    }
  }
  return 1;
}

//----- (022515D8) --------------------------------------------------------
int __fastcall Function_22515d8(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  ushort **v7;
  int i;
  uint *v9;
  ushort *v10;
  int v11;
  uint v12;
  int result;
  int v14;
  int v15;
  int v16;
  int v17;
  uint *v18;
  ushort v19;
  short v20;
  uint *v21;
  int v22;

  v22 = a4;
  v4 = a1;
  v15 = a3 + 1;
  v5 = a2;
  v14 = a4;
  v6 = Function_20298a0(*(uint *)(a1[3] + 12));
  if ( Function_202958c(v6) < 3 )
    --v15;
  Function_224fb7c((int)v4);
  v4[16] = Function_2013a04(v15, 4u);
  Function_201a7e8(*(uint **)(v4[3] + 8), (int)(v4 + 4), 3, 17, 3, 0xEu, 2 * v15, 13, 2);
  Function_200dc48((int)(v4 + 4), 1, 985, 0xBu);
  v7 = (ushort **)LoadFromMsgNARC(0, 26, 639, 4u);
  for ( i = 0; i < v15; ++i )
  {
    v9 = (uint *)v4[16];
    if ( i == v15 - 1 )
      Function_2013a4c(v9, v7, v5 + 5, -2);
    else
      Function_2013a4c(v9, v7, v5 + i, i);
  }
  v10 = Function_200b190((ushort *)v7);
  v11 = Function_2253d40(v10);
  MI_CpuCopy8(v11, (uint)&v16, 0x20u, v12);
  v19 = v15;
  v20 = v15;
  v16 = v4[16];
  v18 = v4 + 4;
  if ( v14 )
    v17 = v14;
  v21 = v4;
  Function_2251238((int)v4, v15, v19);
  result = Function_200112c(&v16, v4[140], v4[139], 4u);
  v4[18] = result;
  return result;
}

//----- (022516E8) --------------------------------------------------------
int __fastcall Function_22516e8(int a1, int a2, int a3, int a4)
{
  int v4;
  uint *v5;
  ushort **v6;
  int i;
  uint *v8;
  ushort *v9;
  int v10;
  uint v11;
  int result;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  uint *v18;
  ushort v19;
  short v20;
  uint *v21;
  int v22;

  v22 = a4;
  v4 = a2;
  v15 = a3 + 1;
  v5 = (uint *)a1;
  v13 = a3;
  v14 = a4;
  Function_224fb7c(a1);
  v5[16] = Function_2013a04(v15, 4u);
  Function_201a7e8(*(uint **)(v5[3] + 8), (int)(v5 + 4), 3, 17, 3, 0xEu, 2 * v15, 13, 226);
  Function_200dc48((int)(v5 + 4), 1, 985, 0xBu);
  v6 = (ushort **)LoadFromMsgNARC(0, 26, 639, 4u);
  for ( i = 0; i < v15; ++i )
  {
    v8 = (uint *)v5[16];
    if ( i == v13 )
      Function_2013a4c(v8, v6, v4 + i, -2);
    else
      Function_2013a4c(v8, v6, v4 + i, i);
  }
  v9 = Function_200b190((ushort *)v6);
  v10 = Function_2253d40(v9);
  MI_CpuCopy8(v10, (uint)&v16, 0x20u, v11);
  v19 = v13 + 1;
  v20 = v15;
  v16 = v5[16];
  v18 = v5 + 4;
  if ( v14 )
    v17 = v14;
  v21 = v5;
  Function_2251238((int)v5, v15, v19);
  result = Function_200112c(&v16, v5[140], v5[139], 4u);
  v5[18] = result;
  return result;
}

//----- (022517E0) --------------------------------------------------------
int __fastcall Function_22517e0(int a1, int a2, int a3, int a4)
{
  int v4;
  uint v5;
  int v7;

  v7 = a4;
  v4 = a2;
  v5 = Function_2001288(*(uint *)(a2 + 72));
  Function_20014dc(*(uint *)(v4 + 72), (ushort *)&v7 + 1, &v7);
  Function_22430e0(0x16u, v7, SHIWORD(v7));
  Function_22521c8(v4);
  if ( v5 > 0xFFFFFFFE )
  {
    if ( v5 == -1 )
      return 0;
LABEL_20:
    *(uchar *)(v4 + 582) = 2;
    return 1;
  }
  if ( v5 < 0xFFFFFFFE )
  {
    if ( v5 <= 2 )
    {
      switch ( v5 )
      {
        case 0u:
          if ( Function_2033dfc() )
            *(uchar *)(v4 + 582) = 11;
          else
            *(uchar *)(v4 + 582) = 10;
          return 1;
        case 1u:
          if ( Function_2033dfc() )
            *(uchar *)(v4 + 582) = 13;
          else
            *(uchar *)(v4 + 582) = 12;
          return 1;
        case 2u:
          if ( Function_2033dfc() )
            *(uchar *)(v4 + 582) = 15;
          else
            *(uchar *)(v4 + 582) = 14;
          return 1;
      }
    }
    goto LABEL_20;
  }
  Function_2005748(0x5DCu);
  *(uchar *)(v4 + 582) = 0;
  return 1;
}

//----- (02251894) --------------------------------------------------------
int __fastcall Function_2251894(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  short v14;
  ushort v15;
  int v16;

  v16 = a4;
  v4 = a2;
  v5 = Function_2248d20(*(uint **)(a2 + 76), a2, a3, a4);
  Function_20014dc(*(uint *)(*(uint *)(v4 + 76) + 12), &v15, &v14);
  Function_22430e0(2u, v14, v15);
  if ( v5 == -2 )
    v5 = -2;
  if ( v5 == -2 )
  {
    v8 = Function_22421dc();
    Function_2254044(v8);
    *(uchar *)(v4 + 582) = 0;
  }
  else
  {
    if ( v5 == -1 )
    {
      v6 = Function_2001504(*(uint *)(*(uint *)(v4 + 76) + 12), 2u);
      Function_225128c(v4, v15, v6, 6);
      return 0;
    }
    v9 = Function_22421dc();
    Function_2254044(v9);
    v10 = Function_224f61c(v5, v4);
    if ( Function_2251418(v5, v4) )
    {
      v11 = Function_22421bc();
      Function_22540f4(v11, v10);
      v12 = Function_22421bc();
      Function_2253f40(v12, 37);
    }
    else
    {
      v13 = Function_22421bc();
      Function_2253f40(v13, 38);
    }
    *(uchar *)(v4 + 582) = 19;
    Function_224fb7c(v4);
  }
  return 1;
}

//----- (02251960) --------------------------------------------------------
int __fastcall Function_2251960(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  short v16;
  ushort v17;
  int v18;

  v18 = a4;
  v4 = a2;
  v5 = Function_2248d20(*(uint **)(a2 + 76), a2, a3, a4);
  Function_20014dc(*(uint *)(*(uint *)(v4 + 76) + 12), &v17, &v16);
  Function_22430e0(6u, v16, v17);
  if ( v5 == -2 )
    v5 = -2;
  if ( v5 == -2 )
  {
    v8 = Function_22421dc();
    Function_2254044(v8);
    *(uchar *)(v4 + 582) = 0;
  }
  else
  {
    if ( v5 == -1 )
    {
      v6 = Function_2001504(*(uint *)(*(uint *)(v4 + 76) + 12), 2u);
      Function_225128c(v4, v17, v6, 6);
      return 0;
    }
    v9 = Function_22421dc();
    Function_2254044(v9);
    v10 = Function_224f5f0(v5, v4);
    v11 = Function_225144c(v5, v4);
    if ( v11 == 1 )
    {
      v12 = Function_22421bc();
      Function_22540f4(v12, v10);
      v13 = Function_22421bc();
      Function_2253f40(v13, 36);
    }
    else if ( v11 == -1 )
    {
      v14 = Function_22421bc();
      Function_2253f40(v14, 55);
    }
    else
    {
      v15 = Function_22421bc();
      Function_2253f40(v15, 39);
    }
    *(uchar *)(v4 + 582) = 22;
    Function_224fb7c(v4);
  }
  Function_206a8c4(*(uint *)(v4 + 8), 0, 0);
  Function_206a8c4(*(uint *)(v4 + 8), 1u, 0);
  return 1;
}

//----- (02251A58) --------------------------------------------------------
int Function_2251a58()
{
  int v0;
  int v1;

  v0 = Function_22421bc();
  if ( Function_2254238(v0) || !(dword_21BF6C4 & 3) )
    return 0;
  v1 = Function_22421bc();
  Function_2254044(v1);
  return 1;
}

//----- (02251A84) --------------------------------------------------------
int __fastcall Function_2251a84(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v6;
  int v7;
  int v8;

  v2 = a1;
  v3 = a2;
  v7 = 0;
  v6 = 983040 - (GetSpritePositionX(*(uint *)(a2 + 60)) << 16);
  v4 = GetSpritePositionY(*(uint *)(v3 + 60));
  v8 = 1114112 - (v4 << 16);
  if ( !v2 )
  {
    v6 = -v6;
    v8 = (v4 << 16) - 1114112;
  }
  return Function_2020990(&v6, *(uint *)(v3 + 36));
}

//----- (02251ACC) --------------------------------------------------------
int __fastcall Function_2251acc(int a1)
{
  int v1;
  int v2;
  uint *v3;
  int v4;
  int result;

  v1 = a1;
  v2 = LoadOverWorldDataAdress(a1);
  v3 = (uint *)GetUnknownStruct01_c(v1);
  switch ( (uchar)*v3 )
  {
    case 0u:
      Function_2005748(0x60Du);
      Function_200f174(2u, 0, 0, 0, 6, 1, 4);
      *v3 = 1;
      goto LABEL_10;
    case 1u:
      if ( Function_200f2ac() )
      {
        Function_205eb18(*(uint *)(v2 + 60), 0);
        Function_2251a84(1, v2);
        *v3 = 2;
      }
      goto LABEL_10;
    case 2u:
      Function_2254d98(v2, v1);
      *v3 = 3;
      goto LABEL_10;
    case 3u:
      *v3 = 4;
      goto LABEL_10;
    case 4u:
      Function_205eb18(*(uint *)(v2 + 60), 1);
      Function_2251a84(0, v2);
      Function_200f174(1u, 1, 1, 0, 6, 1, 4);
      *v3 = 5;
      goto LABEL_10;
    case 5u:
      if ( !Function_200f2ac() )
        goto LABEL_10;
      Function_224b2c8(v2);
      v4 = LoadFlagAdress(*(uint *)(v2 + 12));
      Function_206aa30(v4);
      Function_2251f94(v2);
      free((int)v3);
      result = 1;
      break;
    default:
LABEL_10:
      result = 0;
      break;
  }
  return result;
}

//----- (02251BB4) --------------------------------------------------------
uint __fastcall Function_2251bb4(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  void (__fastcall *v6)(uint);
  int v7;
  int v8;

  v2 = a2;
  v3 = a1;
  Function_20237bc_FreeMsg(*(uint *)(a2 + 104), a2);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 108), v4);
  Function_200b3f0(*(uint **)(v2 + 112), v5);
  v6 = *(void (__fastcall **)(uint))(v2 + 508);
  if ( v6 )
    v6(0);
  v7 = *(uint *)(v2 + 8);
  if ( v7 )
  {
    Function_206a844(v7);
    *(uint *)(v2 + 8) = 0;
  }
  Function_224fb7c(v2);
  v8 = Function_22421bc();
  Function_2254044(v8);
  Call_RemoveTaskFromTaskList(v3);
  return free(v2);
}

//----- (02251C04) --------------------------------------------------------
int __fastcall Function_2251c04(int result, int a2)
{
  int v2;
  int v3;
  int *v4;
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
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;

  v2 = a2;
  v3 = *(uchar *)(a2 + 582);
  v4 = (int *)result;
  switch ( (uchar)v3 )
  {
    case 0:
      Function_2252e18(a2);
      *(uint *)(v2 + 556) = Function_224318c(23);
      *(uint *)(v2 + 560) = Function_2243154(23);
      *(ushort *)(v2 + 586) = *(uint *)(v2 + 556);
      Function_22515d8((uint *)v2, 0, 5, (int)Function_225148c);
      result = 582;
      *(uchar *)(v2 + 582) = 1;
      break;
    case 1:
      result = Function_22514d8(result, a2, 582, v3);
      break;
    case 2:
      Function_2059514();
      Function_2243204();
      result = Function_2251bb4(v4, v2);
      break;
    case 3:
      if ( !*(uint *)(*(uint *)(a2 + 12) + 16) )
      {
        v19 = malloc2(0xBu, 12);
        MI_CpuFill8((ushort *)v19, 0, 0xCu);
        *(uint *)v19 = 0;
        *(uint *)(v19 + 4) = 0;
        OverWorldData_InitUnknownStruct01(*(uint *)(v2 + 12), (int)Function_2251acc, v19);
      }
      result = Function_2251bb4(v4, v2);
      break;
    case 4:
    case 5:
      return result;
    case 6:
      Function_224fb7c(a2);
      v5 = Function_22421bc();
      Function_2254044(v5);
      v6 = GetOverWorldData_VariableAreaAdresses(*(uint *)(v2 + 12));
      v7 = LoadTrainerDataAdress(v6);
      v8 = GetOverWorldData_VariableAreaAdresses(*(uint *)(v2 + 12));
      v9 = LoadVariableAreaAdress_c(v8);
      *(uint *)(v2 + 524) = Function_2253c64(*(uint *)(*(uint *)(v2 + 12) + 8), v7, v9);
      result = 7;
      *(uchar *)(v2 + 582) = 7;
      break;
    case 7:
      result = 3;
      if ( dword_21BF6C4 & 3 )
      {
        Function_2253d10(*(uint *)(a2 + 524));
        *(uint *)(v2 + 524) = 0;
        result = 582;
        *(uchar *)(v2 + 582) = 0;
      }
      break;
    case 8:
      v10 = Function_22421bc();
      Function_2254044(v10);
      *(uint *)(v2 + 556) = Function_224318c(22);
      *(uint *)(v2 + 560) = Function_2243154(22);
      *(ushort *)(v2 + 586) = *(uint *)(v2 + 556);
      Function_22516e8(v2, 40, 3, (int)Function_22514b0);
      result = 582;
      *(uchar *)(v2 + 582) = 9;
      break;
    case 9:
      result = Function_22517e0(result, a2, 582, v3);
      break;
    case 0xA:
      Function_224fb7c(a2);
      Function_2242ff8();
      Function_22412f0();
      Function_200aae0(1, -6, 0, 1, 1);
      v11 = Function_22421bc();
      Function_2253f40(v11, 48);
      result = 582;
      *(uchar *)(v2 + 582) = 16;
      break;
    case 0xB:
      v12 = Function_22421bc();
      Function_2253f40(v12, 57);
      result = 582;
      *(uchar *)(v2 + 582) = 16;
      break;
    case 0xC:
      Function_224fb7c(a2);
      Function_2242fd0();
      Function_2241e6c();
      Function_200aae0(1, -6, 0, 1, 1);
      v13 = Function_22421bc();
      Function_2253f40(v13, 49);
      result = 582;
      *(uchar *)(v2 + 582) = 16;
      break;
    case 0xD:
      v14 = Function_22421bc();
      Function_2253f40(v14, 58);
      result = 582;
      *(uchar *)(v2 + 582) = 16;
      break;
    case 0xE:
      Function_224fb7c(a2);
      Function_2242fe4();
      Function_2245728();
      Function_200aae0(1, -6, 0, 1, 1);
      v15 = Function_22421bc();
      Function_2253f40(v15, 50);
      result = 582;
      *(uchar *)(v2 + 582) = 16;
      break;
    case 0xF:
      v16 = Function_22421bc();
      Function_2253f40(v16, 59);
      result = 582;
      *(uchar *)(v2 + 582) = 16;
      break;
    case 0x10:
      v17 = Function_22421bc();
      result = Function_2254238(v17);
      if ( !result )
      {
        result = 3;
        if ( dword_21BF6C4 & 3 )
        {
          if ( !Function_2033dfc() )
            Function_200aae0(1, 0, -6, 1, 1);
          v18 = Function_22421bc();
          Function_2254044(v18);
          if ( Function_2033dfc() )
            Function_2242fa8();
          else
            Function_2242fbc();
          Function_2245784();
          Function_2241364();
          Function_2241ed0();
          result = 582;
          *(uchar *)(v2 + 582) = 8;
        }
      }
      break;
    case 0x11:
      *(uint *)(a2 + 556) = Function_224318c(2);
      *(uint *)(v2 + 560) = Function_2243154(2);
      Function_2250d2c((uint *)v2);
      Function_2252d74(v2, 28);
      result = 582;
      *(uchar *)(v2 + 582) = 18;
      break;
    case 0x12:
      result = Function_2251894(result, a2, 582, v3);
      break;
    case 0x13:
      result = Function_2251a58();
      if ( result )
      {
        result = 582;
        *(uchar *)(v2 + 582) = 17;
      }
      break;
    case 0x14:
      *(uint *)(a2 + 556) = Function_224318c(6);
      *(uint *)(v2 + 560) = Function_2243154(6);
      Function_2250d5c((uint *)v2);
      Function_2252d74(v2, 32);
      result = 582;
      *(uchar *)(v2 + 582) = 21;
      break;
    case 0x15:
      result = Function_2251960(result, a2, 582, v3);
      break;
    case 0x16:
      result = Function_2251a58();
      if ( result )
      {
        result = 582;
        *(uchar *)(v2 + 582) = 20;
      }
      break;
    case 0x17:
      result = Function_2251a58();
      if ( result )
      {
        result = 582;
        *(uchar *)(v2 + 582) = 0;
      }
      break;
  }
  return result;
}

//----- (02251F94) --------------------------------------------------------
int __fastcall Function_2251f94(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  ushort *v7;

  v1 = a1;
  Function_22430d0(1);
  v2 = malloc(4u, 592);
  MI_CpuFill8((ushort *)v2, 0, 0x250u);
  *(uint *)(v2 + 12) = v1;
  v3 = Function_22421bc();
  Function_2253dfc(v3, 639, 1);
  *(uchar *)(v2 + 582) = 0;
  *(uint *)(v2 + 104) = Function_2023790(100, 4u);
  *(uint *)(v2 + 108) = Function_2023790(100, 4u);
  *(uint *)(v2 + 112) = Function_200b358(4u);
  v7 = Function_206a780(4u, v4, v5, v6);
  *(uint *)(v2 + 8) = v7;
  Function_206a8a0((int)v7, 200, 20, 122);
  Function_206a8c4(*(uint *)(v2 + 8), 0, 0);
  Function_206a8c4(*(uint *)(v2 + 8), 1u, 0);
  *(uint *)(v2 + 4) = AddTaskToTaskList1((int)Function_2251c04, v2, 0x2710u);
  return Function_22431ec(v2, *(uint *)(v2 + 4), (int)Function_2251270);
}

//----- (02252038) --------------------------------------------------------
int __fastcall Function_2252038(int *a1, uint *a2)
{
  uint *v2;
  int *v3;
  int result;
  int v5;
  int v6;
  int v7;
  int v8;

  v2 = a2;
  v3 = a1;
  result = *a2;
  if ( *a2 )
  {
    if ( result == 1 )
    {
      result = Function_2002114(a2[2], 4u);
      if ( result != -1 )
      {
        if ( result )
        {
          Function_205948c(64, -1, v6, v7);
          v8 = Function_224219c();
          Function_2254044(v8);
        }
        else
        {
          Function_20360d0(89, (int)(v2 + 3));
        }
        *v2 = 2;
        result = 0;
        v2[2] = 0;
      }
    }
    else if ( result == 2 )
    {
      free((int)a2);
      Function_2243204();
      result = Call_RemoveTaskFromTaskList(v3);
    }
  }
  else
  {
    v5 = Function_224219c();
    result = Function_2254238(v5);
    if ( !result )
    {
      v2[2] = Function_2002100(*(uint **)(v2[1] + 8), (uchar *)dword_22569C8, 985, 11, 4u);
      result = 1;
      *v2 = 1;
    }
  }
  return result;
}

//----- (022520C8) --------------------------------------------------------
int __fastcall Function_22520c8(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;

  v2 = a2;
  v3 = a1;
  v4 = *(uint *)(a2 + 8);
  if ( v4 )
    Function_2002154(v4, 4u);
  free(v2);
  return Call_RemoveTaskFromTaskList(v3);
}

//----- (022520E8) --------------------------------------------------------
int __fastcall Function_22520e8(int a1, uchar *a2)
{
  uchar *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v2 = a2;
  v3 = a1;
  v4 = malloc(4u, 592);
  MI_CpuFill8((ushort *)v4, 0, 0x14u);
  *(uint *)v4 = 0;
  *(uint *)(v4 + 4) = v3;
  *(uint *)(v4 + 16) = AddTaskToTaskList1((int)Function_2252038, v4, 0x2710u);
  v5 = Function_224219c();
  v6 = Function_2032ee8((uchar)v2[1]);
  Function_2254068(v5, v6);
  v7 = Function_224219c();
  Function_2253f40(v7, 67);
  *(uchar *)(v4 + 12) = *v2;
  *(uchar *)(v4 + 13) = v2[1];
  *(uchar *)(v4 + 14) = v2[2];
  return Function_22431ec(v4, *(uint *)(v4 + 16), (int)Function_22520c8);
}

//----- (0225215C) --------------------------------------------------------
int __fastcall Function_23_225215c(int a1, int a2, uchar *a3)
{
  int v3;
  int result;

  v3 = (int)a3;
  result = Function_224aec4(*a3, a3[1]);
  if ( result )
    result = Function_2035b48(90, v3);
  return result;
}

//----- (02252178) --------------------------------------------------------
int __fastcall Function_23_2252178(int a1, int a2, uchar *a3)
{
  uchar *v3;
  int v4;
  int v5;
  int v6;

  v3 = a3;
  if ( *a3 == Function_203608c() )
  {
    v4 = Function_22421ac();
    v5 = Function_2032ee8(v3[1]);
    Function_2254068(v4, v5);
    v6 = Function_22421ac();
    Function_2253f40(v6, 8);
    Function_200549c(0x425u);
  }
  Function_224aec4(*v3, v3[1]);
  return Function_224d500(*v3, v3[1]);
}

//----- (022521C8) --------------------------------------------------------
int __fastcall Function_22521c8(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = *(ushort *)(a1 + 586);
  Function_20014d0(*(uint *)(a1 + 72), (ushort *)(a1 + 586));
  result = *(ushort *)(v1 + 586);
  if ( v2 != result )
    result = Function_2005748(0x5DCu);
  return result;
}

//----- (022521F0) --------------------------------------------------------
int __fastcall Function_22521f0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  uint v6;
  int v7;
  int v8;
  int result;
  uint v10;
  char v11;
  uchar *v12;
  int v13;
  int v14;

  v2 = a1;
  v3 = a2;
  v4 = GetOverWorldData_VariableAreaAdresses(*(uint *)(a1 + 12));
  v5 = LoadVariableAreaAdress_c(v4);
  v6 = v3 + Function_2028930(v5);
  v7 = 0;
  do
  {
    if ( v7 )
    {
      v6 = 1566083941 * v6 + 2531011;
      v8 = ((ushort)(33 * (v6 >> 16) >> 16) >> 8) + 1;
    }
    else
    {
      v8 = 33;
    }
    for ( result = 0; result < v7; ++result )
    {
      if ( v8 == *(uchar *)(v2 + result + 528) )
        v8 = 0;
    }
    if ( v8 )
    {
      v13 = Function_22542ac(v8);
      v14 = Function_22542bc(v8);
      if ( v13 || (result = v14) != 0 )
      {
        v12 = (uchar *)(v2 + v7);
        v12[528] = v8;
        v12[533] = Function_225429c(v8);
        if ( *(uchar *)(v2 + v7 + 533) == 6 )
        {
          v6 = 1566083941 * v6 + 2531011;
          v12[533] = (5 * (v6 >> 16) >> 24) + 1;
        }
        v6 = 1566083941 * v6 + 2531011;
        if ( (v14 - v13) & 0xFFFF )
          v10 = ((v14 - v13) & 0xFFFF) * (v6 >> 16) >> 16;
        else
          v10 = v6 >> 16;
        v11 = v13 + v10;
        result = v2 + v7;
        v12[538] = v11;
      }
      else
      {
        --v7;
      }
    }
    else
    {
      --v7;
    }
    ++v7;
  }
  while ( v7 < 5 );
  return result;
}

//----- (022522F0) --------------------------------------------------------
int __fastcall Function_22522f0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  uint *v6;
  uint v7;
  int v8;
  int v9;
  int result;
  uint v11;
  uint v12;
  char v13;
  uchar *v14;
  int v15;
  int v16;

  v2 = a1;
  v3 = a2;
  v4 = GetOverWorldData_VariableAreaAdresses(*(uint *)(a1 + 12));
  v5 = LoadVariableAreaAdress_c(v4);
  v6 = (uint *)LoadPokedexDataAdress(v4);
  v15 = Function_2027474(v6);
  v7 = v3 + Function_2028930(v5);
  v8 = 0;
  do
  {
    v7 = 1566083941 * v7 + 2531011;
    v9 = ((ushort)(138 * (v7 >> 16) >> 16) >> 8) + 1;
    for ( result = 0; result < v8; ++result )
    {
      if ( v9 == *(uchar *)(v2 + result + 528) )
        v9 = 0;
    }
    if ( v9 )
    {
      v14 = (uchar *)(v2 + v8);
      v14[528] = v9;
      v14[533] = Function_205742c(v9);
      if ( v15 || (result = Function_205747c(v9), result != 1) )
      {
        result = 533;
        if ( v14[533] )
        {
          if ( v14[533] == 6 )
          {
            v7 = 1566083941 * v7 + 2531011;
            v14[533] = (5 * (v7 >> 16) >> 24) + 1;
          }
          v16 = Function_205743c(v9);
          v7 = 1566083941 * v7 + 2531011;
          v11 = (Function_205744c(v9) - v16) << 16;
          if ( v11 >> 16 )
            v12 = (v11 >> 16) * (v7 >> 16) >> 16;
          else
            v12 = v7 >> 16;
          v13 = v16 + v12;
          result = v2 + v8;
          v14[538] = v13;
        }
        else
        {
          --v8;
        }
      }
      else
      {
        --v8;
      }
    }
    else
    {
      --v8;
    }
    ++v8;
  }
  while ( v8 < 5 );
  return result;
}

//----- (02252404) --------------------------------------------------------
int __fastcall Function_2252404(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v9;
  int v10;
  int v11;
  int v12;

  v3 = a1;
  v12 = 0;
  v4 = a3;
  v5 = a2;
  v6 = GetOverWorldData_VariableAreaAdresses(*(uint *)(a1 + 12));
  v7 = LoadVariableAreaAdress_c(v6);
  if ( *(uchar *)(v3 + v5 + 533) != Function_224f684(v4, v3) )
    return 65533;
  v9 = Function_224f69c(v4, v3);
  v10 = v3 + v5;
  if ( *(uchar *)(v3 + v5 + 538) > v9 )
    return 65531;
  v11 = *(uchar *)(v3 + 584);
  if ( v11 == 1 )
  {
    v12 = Function_2028e84(v7, *(uchar *)(v10 + 528));
  }
  else if ( *(uchar *)(v3 + 584) )
  {
    if ( v11 == 2 )
      v12 = Function_2028db4(v7, *(uchar *)(v10 + 528));
  }
  else
  {
    v12 = Function_2028bc8(v7, *(uchar *)(v10 + 528));
  }
  if ( !v12 )
    return 65532;
  Function_2028c6c(v7, v4);
  return *(uchar *)(v3 + v5 + 528);
}

//----- (022524B8) --------------------------------------------------------
int __fastcall Function_22524b8(int a1)
{
  int v1;
  uint v2;
  int v3;
  ushort **v4;
  int v5;
  ushort **v6;
  int v7;
  ushort **v8;
  uint *v9;
  int v10;
  ushort **v11;
  int v12;
  ushort **v13;
  int v14;
  ushort **v15;
  int v16;
  ushort **v17;
  int v18;
  ushort **v19;
  int v20;
  uint v21;
  int v22;
  int v24;
  int v25;
  ushort v26;
  ushort v27;

  v1 = a1;
  v2 = 3;
  if ( *(uchar *)(a1 + 584) == 2 )
    v2 = 2;
  Function_224fb7c(a1);
  *(uint *)(v1 + 64) = Function_2013a04(v2, 4u);
  Function_201a7e8(*(uint **)(*(uint *)(v1 + 12) + 8), v1 + 16, 3, 19, 3, 0xCu, 2 * v2, 13, 495);
  Function_200dc48(v1 + 16, 1, 985, 0xBu);
  if ( *(uchar *)(v1 + 584) == 1 )
  {
    Function_22521f0(v1, *(uint *)(v1 + 548));
    v3 = Function_22421bc();
    v4 = (ushort **)Function_2253e3c(v3);
    Function_2013a4c(*(uint **)(v1 + 64), v4, 0xDu, 0);
    v5 = Function_22421bc();
    v6 = (ushort **)Function_2253e3c(v5);
    Function_2013a4c(*(uint **)(v1 + 64), v6, 0xEu, 1);
    v7 = Function_22421bc();
    v8 = (ushort **)Function_2253e3c(v7);
    v9 = Function_2013a4c(*(uint **)(v1 + 64), v8, 0xFu, -2);
  }
  else if ( *(uchar *)(v1 + 584) )
  {
    v16 = Function_22421bc();
    v17 = (ushort **)Function_2253e3c(v16);
    Function_2013a4c(*(uint **)(v1 + 64), v17, 0x1Cu, 0);
    v18 = Function_22421bc();
    v19 = (ushort **)Function_2253e3c(v18);
    v9 = Function_2013a4c(*(uint **)(v1 + 64), v19, 0x16u, -2);
  }
  else
  {
    Function_22522f0(v1, *(uint *)(v1 + 548));
    v10 = Function_22421bc();
    v11 = (ushort **)Function_2253e3c(v10);
    Function_2013a4c(*(uint **)(v1 + 64), v11, 0x10u, 0);
    v12 = Function_22421bc();
    v13 = (ushort **)Function_2253e3c(v12);
    Function_2013a4c(*(uint **)(v1 + 64), v13, 0x11u, 1);
    v14 = Function_22421bc();
    v15 = (ushort **)Function_2253e3c(v14);
    v9 = Function_2013a4c(*(uint **)(v1 + 64), v15, 0x12u, -2);
  }
  v20 = Function_2253d40(v9);
  MI_CpuCopy8(v20, (uint)&v24, 0x20u, v21);
  v24 = *(uint *)(v1 + 64);
  v25 = v1 + 16;
  v26 = v2;
  v27 = v2;
  *(uint *)(v1 + 560) = Function_2243154(19);
  *(uint *)(v1 + 556) = Function_224318c(19);
  Function_2251238(v1, v27, v26);
  *(uint *)(v1 + 72) = Function_200112c(&v24, *(uint *)(v1 + 560), *(uint *)(v1 + 556), 4u);
  v22 = *(uint *)(v1 + 556);
  *(ushort *)(v1 + 586) = v22;
  Function_201a954(v1 + 16, v22);
  return v1;
}

//----- (0225265C) --------------------------------------------------------
int __fastcall Function_225265c(int a1, int a2)
{
  int v2;
  int v3;
  uint v4;
  int v5;
  ushort **v6;
  int v7;
  int v8;
  ushort **v9;
  int v10;

  v2 = a2;
  v3 = a1;
  v4 = Function_2001504(a1, 0x13u);
  Function_201ada4_ClearTextBox(v4 + 32, 15);
  v5 = Function_22421bc();
  v6 = (ushort **)Function_2253e3c(v5);
  Function_200b1b8_CallMsgDecrypt(v6, *(uchar *)(v4 + 583) + 23, *(ushort **)(v4 + 104));
  v7 = *(uint *)(v4 + 104);
  Function_201d738_CallInitTextInterpreter(v4 + 32, 0);
  if ( v2 != -2 )
  {
    Function_200ba94(*(uint *)(v4 + 112), 2u, *(uchar *)(v4 + v2 + 533));
    Function_200b60c(*(uint *)(v4 + 112), 6u, *(uchar *)(v4 + v2 + 538), 2, 1, 1);
    v8 = Function_22421bc();
    v9 = (ushort **)Function_2253e3c(v8);
    Function_200b1b8_CallMsgDecrypt(v9, 0x19u, *(ushort **)(v4 + 104));
    Function_200c388(*(uint **)(v4 + 112), *(uint *)(v4 + 108), *(uint *)(v4 + 104));
    v10 = *(uint *)(v4 + 108);
    Function_201d738_CallInitTextInterpreter(v4 + 32, 0);
  }
  Function_201a9a4(v4 + 32);
  if ( v2 == -2 )
    v2 = -2;
  if ( *(uchar *)(v4 + 584) == 1 )
    return Function_224fd84(v3, v2);
  if ( *(uchar *)(v4 + 584) )
    return Function_2250540(v3, v2);
  return Function_2250c3c(v3, v2);
}

//----- (02252754) --------------------------------------------------------
int __fastcall Function_2252754(int a1, int a2)
{
  int v2;
  int v3;
  uint v4;
  int v5;
  int v6;
  int v7;
  uint v8;
  int v9;
  uint v10;
  int v11;
  uint v12;
  int v13;
  uint v14;
  int v15;
  uint v16;
  int v17;
  uint v18;
  int v19;
  int v20;
  ushort **v21;
  int v22;
  int v23;
  ushort **v24;
  int v25;
  int v26;
  ushort **v27;
  int v28;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;

  v3 = a2;
  v30 = a1;
  v4 = Function_2001504(a1, 0x13u);
  v5 = v4;
  v6 = GetOverWorldData_VariableAreaAdresses(*(uint *)(v4 + 12));
  v37 = LoadVariableAreaAdress_c(v6);
  v7 = 0;
  Function_201ada4_ClearTextBox(v5 + 32, 15);
  if ( v3 != -2 )
  {
    if ( *(uchar *)(v5 + 584) == 1 )
    {
      v35 = Function_224f66c(v3, v5);
      v8 = v35 + *(uint *)(v5 + 548) + Function_2028930(v37);
      v7 = Function_225429c(v35);
      if ( v7 == 6 )
      {
        v8 = 1566083941 * v8 + 2531011;
        v7 = ((ushort)(5 * (v8 >> 16) >> 16) >> 8) + 1;
      }
      v36 = Function_22542ac(v35);
      v9 = Function_22542bc(v35);
      v10 = 1566083941 * v8 + 2531011;
      v11 = (v9 - v36) & 0xFFFF;
      if ( v11 )
        v10 = (v10 >> 16) * v11;
      v2 = (int)(v36 + (v10 >> 16)) / 2;
    }
    else if ( *(uchar *)(v5 + 584) )
    {
      v33 = Function_224f6c8(v3, v5);
      v16 = v33 + *(uint *)(v5 + 548) + Function_2028930(v37);
      v7 = Function_225426c();
      if ( v7 == 6 )
      {
        v16 = 1566083941 * v16 + 2531011;
        v7 = ((ushort)(5 * (v16 >> 16) >> 16) >> 8) + 1;
      }
      v32 = Function_225427c(v33);
      v17 = Function_225428c(v33);
      v18 = 1566083941 * v16 + 2531011;
      v19 = (v17 - v32) & 0xFFFF;
      if ( v19 )
        v18 = (v18 >> 16) * v19;
      v2 = v32 + (v18 >> 16);
    }
    else
    {
      v34 = Function_224f61c(v3, v5);
      v12 = v34 + *(uint *)(v5 + 548) + Function_2028930(v37);
      v7 = Function_205742c(v34);
      if ( v7 == 6 )
      {
        v12 = 1566083941 * v12 + 2531011;
        v7 = ((ushort)(5 * (v12 >> 16) >> 16) >> 8) + 1;
      }
      v31 = Function_205743c(v34);
      v13 = Function_205744c(v34);
      v14 = 1566083941 * v12 + 2531011;
      v15 = (v13 - v31) & 0xFFFF;
      if ( v15 )
        v14 = (v14 >> 16) * v15;
      v2 = (int)(v31 + (v14 >> 16)) / 2;
    }
  }
  v20 = Function_22421bc();
  v21 = (ushort **)Function_2253e3c(v20);
  Function_200b1b8_CallMsgDecrypt(v21, *(uchar *)(v5 + 583) + 23, *(ushort **)(v5 + 104));
  v22 = *(uint *)(v5 + 104);
  Function_201d738_CallInitTextInterpreter(v5 + 32, 0);
  if ( v3 != -2 )
  {
    if ( v7 )
    {
      Function_200ba94(*(uint *)(v5 + 112), 2u, v7);
      Function_200b60c(*(uint *)(v5 + 112), 6u, v2, 2, 1, 1);
      v23 = Function_22421bc();
      v24 = (ushort **)Function_2253e3c(v23);
      Function_200b1b8_CallMsgDecrypt(v24, 0x19u, *(ushort **)(v5 + 104));
      Function_200c388(*(uint **)(v5 + 112), *(uint *)(v5 + 108), *(uint *)(v5 + 104));
      v25 = *(uint *)(v5 + 108);
      Function_201d738_CallInitTextInterpreter(v5 + 32, 0);
      *(uchar *)(v5 + 533) = v7;
      *(uchar *)(v5 + 538) = v2;
    }
    else
    {
      *(uchar *)(v5 + 533) = 0;
      v26 = Function_22421bc();
      v27 = (ushort **)Function_2253e3c(v26);
      Function_200b1b8_CallMsgDecrypt(v27, 0x1Au, *(ushort **)(v5 + 104));
      v28 = *(uint *)(v5 + 104);
      Function_201d738_CallInitTextInterpreter(v5 + 32, 0);
    }
  }
  Function_201a9a4(v5 + 32);
  if ( *(uchar *)(v5 + 584) == 1 )
    return Function_224fd84(v30, v3);
  if ( *(uchar *)(v5 + 584) )
    return Function_2250540(v30, v3);
  return Function_2250c3c(v30, v3);
}

//----- (02252A04) --------------------------------------------------------
int __fastcall Function_2252a04(int a1, int a2)
{
  int result;

  if ( a1 < 5 )
    result = *(uchar *)(a2 + a1 + 528);
  else
    result = 0;
  return result;
}

//----- (02252A18) --------------------------------------------------------
int __fastcall Function_2252a18(int a1)
{
  int v1;
  ushort **v2;
  int v3;
  int v4;
  int v5;
  int v6;
  ushort *v7;
  int v8;
  uint v9;
  int v10;
  int v12;
  int (__fastcall *v13)(int, int);
  int v14;
  ushort v15;
  ushort v16;
  int v17;

  v1 = a1;
  Function_224fb7c(a1);
  *(uint *)(v1 + 64) = Function_2013a04(6u, 4u);
  Function_201a7e8(*(uint **)(*(uint *)(v1 + 12) + 8), v1 + 16, 3, 19, 3, 0xCu, 0xCu, 13, 351);
  Function_200dc48(v1 + 16, 1, 985, 0xBu);
  if ( *(uchar *)(v1 + 584) == 1 )
  {
    v2 = (ushort **)LoadFromMsgNARC(0, 26, 630, 4u);
    v3 = Function_22421dc();
    Function_2253dfc(v3, 630, 0);
  }
  else if ( *(uchar *)(v1 + 584) )
  {
    v2 = (ushort **)LoadFromMsgNARC(0, 26, 628, 4u);
    v5 = Function_22421dc();
    Function_2253dfc(v5, 628, 0);
  }
  else
  {
    v2 = (ushort **)LoadFromMsgNARC(0, 26, 626, 4u);
    v4 = Function_22421dc();
    Function_2253dfc(v4, 626, 0);
  }
  v6 = 0;
  do
  {
    Function_2013a4c(*(uint **)(v1 + 64), v2, *(uchar *)(v1 + v6 + 528), v6);
    ++v6;
  }
  while ( v6 < 5 );
  Function_2013a4c(*(uint **)(v1 + 64), v2, 0, -2);
  v7 = Function_200b190((ushort *)v2);
  v8 = Function_2253d40(v7);
  MI_CpuCopy8(v8, (uint)&v12, 0x20u, v9);
  v12 = *(uint *)(v1 + 64);
  v14 = v1 + 16;
  v15 = 6;
  v16 = 6;
  v13 = Function_225265c;
  v17 = v1;
  *(uint *)(v1 + 516) = Function_2252a04;
  *(uint *)(v1 + 560) = Function_2243154((*(uchar *)(v1 + 584) + 13) & 0xFFFF);
  *(uint *)(v1 + 556) = Function_224318c((*(uchar *)(v1 + 584) + 13) & 0xFFFF);
  *(ushort *)(v1 + 586) = *(uint *)(v1 + 556);
  Function_2251238(v1, v16, v15);
  *(uint *)(v1 + 72) = Function_200112c(&v12, *(uint *)(v1 + 560), *(uint *)(v1 + 556), 4u);
  return Function_201a954(v1 + 16, v10);
}

//----- (02252B90) --------------------------------------------------------
int __fastcall Function_2252b90(int a1)
{
  int v1;

  v1 = a1;
  if ( Function_201a7cc(a1 + 32) )
  {
    Function_200dc9c(v1 + 32, 1);
    Function_201a8fc(v1 + 32);
  }
  return Function_224fb7c(v1);
}

//----- (02252BB8) --------------------------------------------------------
int __fastcall Function_2252bb8(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  if ( *(uchar *)(a2 + 584) == 1 )
  {
    v3 = Function_224f66c(a1, a2);
    Function_23_2252cf4(2, v3);
  }
  else if ( *(uchar *)(a2 + 584) )
  {
    v5 = Function_224f6c8(a1, a2);
    Function_23_2252ce0(2, v5);
  }
  else
  {
    v4 = Function_224f61c(a1, a2);
    Function_2252d08(2, v4);
  }
  Function_23_2252ce0(4, *(uchar *)(v2 + 533));
  return Function_23_2252c9c(10);
}

//----- (02252C08) --------------------------------------------------------
int __fastcall Function_2252c08(int a1)
{
  uchar *v1;
  int v2;
  int v3;
  int v4;

  v1 = (uchar *)a1;
  v2 = GetOverWorldData_VariableAreaAdresses(*(uint *)(a1 + 12));
  v3 = LoadVariableAreaAdress_c(v2);
  if ( !Function_224f6e0(v1[533], v1[538]) )
    return 65532;
  v4 = v1[584];
  if ( v4 == 1 )
  {
    Function_2028e50(v3, v1[580]);
  }
  else if ( v1[584] )
  {
    if ( v4 == 2 )
      Function_2028d80(v3, v1[580]);
  }
  else
  {
    Function_2028b94(v3, v1[580]);
  }
  return v1[533];
}

//----- (02252C70) --------------------------------------------------------
int Function_23_2252c70()
{
  return 65534;
}

//----- (02252C78) --------------------------------------------------------
uint __fastcall Function_2252c78(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  Function_20237bc_FreeMsg(*(uint *)(a1 + 104), a2);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 108), v3);
  Function_200b3f0(*(uint **)(v2 + 112), v4);
  return free(v2);
}

//----- (02252C98) --------------------------------------------------------
int Function_23_2252c98()
{
  return 0;
}

//----- (02252C9C) --------------------------------------------------------
int __fastcall Function_23_2252c9c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  v2 = Function_22421bc();
  Function_2253dfc(v2, 636, 1);
  v3 = Function_22421bc();
  v4 = Function_203608c();
  v5 = Function_2032ee8(v4);
  Function_2254068(v3, v5);
  v6 = Function_22421bc();
  return Function_2253f40(v6, v1);
}

//----- (02252CD4) --------------------------------------------------------
int Function_23_2252cd4()
{
  int v0;

  v0 = Function_22421bc();
  return Function_2254044(v0);
}

//----- (02252CE0) --------------------------------------------------------
int __fastcall Function_23_2252ce0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = a2;
  v4 = Function_22421bc();
  return Function_22541a0(v4, v2, v3);
}

//----- (02252CF4) --------------------------------------------------------
int __fastcall Function_23_2252cf4(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = a2;
  v4 = Function_22421bc();
  return Function_22541b4(v4, v2, v3);
}

//----- (02252D08) --------------------------------------------------------
int __fastcall Function_2252d08(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = a2;
  v4 = Function_22421bc();
  return Function_22541c8(v4, v2, v3);
}

//----- (02252D1C) --------------------------------------------------------
int __fastcall Function_2252d1c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  if ( !Function_201a7cc(a1 + 32) )
  {
    Function_201a7e8(*(uint **)(*(uint *)(v1 + 12) + 8), v1 + 32, 3, 1, 12, 0xCu, 4u, 13, 1);
    Function_200dc48(v1 + 32, 1, 985, 0xBu);
  }
  Function_201ada4_ClearTextBox(v1 + 32, 15);
  return Function_201a954(v1 + 32, v2);
}

//----- (02252D74) --------------------------------------------------------
int __fastcall Function_2252d74(int a1, uint a2)
{
  int v2;
  uint v3;
  int v4;
  int v5;
  ushort **v6;
  int v7;

  v2 = a1;
  v3 = a2;
  Function_201a7e8(*(uint **)(*(uint *)(a1 + 12) + 8), a1 + 48, 3, 1, 1, 7u, 4u, 13, 51);
  Function_200dc48(v2 + 48, 1, 985, 0xBu);
  Function_201ada4_ClearTextBox(v2 + 48, 15);
  Function_201a954(v2 + 48, v4);
  v5 = Function_22421bc();
  v6 = (ushort **)Function_2253e3c(v5);
  Function_200b1b8_CallMsgDecrypt(v6, v3, *(ushort **)(v2 + 104));
  v7 = *(uint *)(v2 + 104);
  Function_201d738_CallInitTextInterpreter(v2 + 48, 0);
  return Function_201a9a4(v2 + 48);
}

//----- (02252DF4) --------------------------------------------------------
uint __fastcall Function_2252df4(int a1)
{
  int v1;
  uint result;

  v1 = a1;
  result = Function_201a7cc(a1 + 48);
  if ( result )
  {
    Function_200dc9c(v1 + 48, 1);
    result = Function_201a8fc(v1 + 48);
  }
  return result;
}

//----- (02252E18) --------------------------------------------------------
uint __fastcall Function_2252e18(int a1)
{
  int v1;
  uint result;

  v1 = a1;
  result = Function_201a7cc(a1 + 48);
  if ( result )
  {
    Function_200dc9c(v1 + 48, 0);
    result = Function_201a8fc(v1 + 48);
  }
  return result;
}

//----- (02252E3C) --------------------------------------------------------
int __fastcall Function_2252e3c(int a1, int a2, int *a3)
{
  char *v3;
  int v4;

  v3 = byte_2257674;
  v4 = 0;
  do
  {
    if ( a1 == *((ushort *)v3 + 1) && a2 == *((ushort *)v3 + 2) )
    {
      *a3 = v4;
      return *(ushort *)&byte_2257674[6 * v4];
    }
    ++v4;
    v3 += 6;
  }
  while ( v4 < 20 );
  ErrorHandler();
  return 0;
}

//----- (02252E70) --------------------------------------------------------
int __fastcall Function_2252e70(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int result;
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
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  short v32;
  short v33;

  v4 = a1;
  result = 582;
  v6 = a2;
  v7 = *(uchar *)(a2 + 582);
  switch ( (uchar)v7 )
  {
    case 0:
      if ( *(uchar *)(v6 + 584) == 2 )
        Function_23_2252c9c(27);
      else
        Function_23_2252c9c(0);
      result = 582;
      *(uchar *)(v6 + 582) = 1;
      break;
    case 1:
      v8 = Function_22421bc();
      result = Function_2254238(v8);
      if ( !result )
      {
        result = 582;
        *(uchar *)(v6 + 582) = 2;
      }
      break;
    case 2:
      Function_22524b8(v6);
      result = 582;
      *(uchar *)(v6 + 582) = 3;
      break;
    case 3:
      v9 = Function_2001288(*(uint *)(v6 + 72));
      Function_20014dc(*(uint *)(v6 + 72), &v33, &v32);
      Function_22430e0(0x13u, v32, v33);
      v10 = *(ushort *)(v6 + 586);
      Function_20014d0(*(uint *)(v6 + 72), (ushort *)(v6 + 586));
      if ( v10 != *(ushort *)(v6 + 586) )
        Function_2005748(0x5DCu);
      if ( v9 == -2 )
      {
        Function_2005748(0x5DCu);
        Function_2252b90(v6);
        result = 582;
        *(uchar *)(v6 + 582) = 17;
      }
      else
      {
        result = -1;
        if ( v9 != -1 )
        {
          if ( *(uchar *)(v6 + 584) == 2 )
          {
            *(uchar *)(v6 + 583) = 1;
            result = 582;
            *(uchar *)(v6 + 582) = 12;
          }
          else
          {
            *(uchar *)(v6 + 583) = v9;
            if ( v9 )
            {
              Function_2005748(0x5DCu);
              result = 582;
              *(uchar *)(v6 + 582) = 12;
            }
            else
            {
              Function_2005748(0x5DCu);
              result = 582;
              *(uchar *)(v6 + 582) = 4;
            }
          }
        }
      }
      break;
    case 4:
      Function_2252d1c(v6);
      Function_2252a18(v6);
      result = 582;
      *(uchar *)(v6 + 582) = 5;
      break;
    case 5:
      v11 = Function_2001288(*(uint *)(v6 + 72));
      Function_20014dc(*(uint *)(v6 + 72), &v33, &v32);
      Function_22430e0((*(uchar *)(v6 + 584) + 13) & 0xFFFF, v32, v33);
      v12 = *(ushort *)(v6 + 586);
      Function_20014d0(*(uint *)(v6 + 72), (ushort *)(v6 + 586));
      if ( v12 != *(ushort *)(v6 + 586) )
        Function_2005748(0x5DCu);
      if ( v11 == -2 )
        v11 = -2;
      if ( v11 != -1 )
      {
        v13 = Function_22421dc();
        Function_2254044(v13);
      }
      if ( v11 == -2 )
      {
        Function_2005748(0x5DCu);
        Function_2252b90(v6);
        result = 582;
        *(uchar *)(v6 + 582) = 2;
      }
      else
      {
        result = -1;
        if ( v11 != -1 )
        {
          Function_2005748(0x5DCu);
          *(uchar *)(v6 + 580) = v11;
          if ( *(uchar *)(v6 + 584) == 1 )
          {
            Function_23_2252cf4(2, *(uchar *)(v6 + *(uchar *)(v6 + 580) + 528));
          }
          else if ( !*(uchar *)(v6 + 584) )
          {
            Function_2252d08(2, *(uchar *)(v6 + *(uchar *)(v6 + 580) + 528));
          }
          Function_23_2252c9c(1);
          result = 582;
          *(uchar *)(v6 + 582) = 6;
        }
      }
      break;
    case 6:
      v14 = Function_22421bc();
      result = Function_2254238(v14);
      if ( !result )
      {
        result = 1;
        if ( dword_21BF6C4 & 1 )
        {
          result = 582;
          *(uchar *)(v6 + 582) = 7;
        }
      }
      break;
    case 7:
      Function_224fb7c(v6);
      *(uint *)(v6 + 556) = Function_224318c(12);
      *(uint *)(v6 + 560) = Function_2243154(12);
      Function_2250184((uint *)v6);
      Function_2252d74(v6, 0x13u);
      if ( *(uchar *)(v6 + 584) == 1 )
      {
        Function_23_2252cf4(2, *(uchar *)(v6 + *(uchar *)(v6 + 580) + 528));
      }
      else if ( !*(uchar *)(v6 + 584) )
      {
        Function_2252d08(2, *(uchar *)(v6 + *(uchar *)(v6 + 580) + 528));
      }
      result = 582;
      *(uchar *)(v6 + 582) = 8;
      break;
    case 8:
      v15 = Function_22421bc();
      result = Function_2254238(v15);
      if ( !result )
      {
        v19 = Function_2248d20(*(uint **)(v6 + 76), v16, v17, v18);
        Function_20014dc(*(uint *)(*(uint *)(v6 + 76) + 12), &v33, &v32);
        Function_22430e0(0xCu, v32, v33);
        if ( v19 != -1 )
        {
          v20 = Function_22421dc();
          Function_2254044(v20);
        }
        if ( v19 == -2 )
        {
          Function_2252df4(v6);
          result = 582;
          *(uchar *)(v6 + 582) = 4;
        }
        else
        {
          result = -1;
          if ( v19 != -1 )
          {
            v21 = Function_2252404(v6, *(uchar *)(v6 + 580), v19);
            Function_2252b90(v6);
            Function_2252df4(v6);
            switch ( v21 )
            {
              case 65532:
                Function_23_2252c9c(3);
                result = 582;
                *(uchar *)(v6 + 582) = 10;
                break;
              case 65533:
                Function_23_2252c9c(4);
                result = 582;
                *(uchar *)(v6 + 582) = 10;
                break;
              case 65531:
                Function_23_2252c9c(5);
                result = 582;
                *(uchar *)(v6 + 582) = 10;
                break;
              default:
                *(uchar *)(v6 + 580) = v21;
                Function_23_2252c9c(2);
                result = 582;
                *(uchar *)(v6 + 582) = 9;
                break;
            }
          }
        }
      }
      break;
    case 9:
      v22 = Function_22421bc();
      result = Function_2254238(v22);
      if ( !result )
      {
        result = 1;
        if ( dword_21BF6C4 & 1 )
        {
          if ( *(uchar *)(v6 + 584) == 1 )
          {
            Function_23_2252cf4(2, *(uchar *)(v6 + 580));
          }
          else if ( !*(uchar *)(v6 + 584) )
          {
            Function_2252d08(2, *(uchar *)(v6 + 580));
          }
          Function_23_2252c9c(6);
          Function_2005748(0x5E3u);
          result = 582;
          *(uchar *)(v6 + 582) = 10;
        }
      }
      break;
    case 0xA:
      v23 = Function_22421bc();
      result = Function_2254238(v23);
      if ( !result )
      {
        result = 1;
        if ( dword_21BF6C4 & 1 )
        {
          Function_23_2252c9c(8);
          result = 582;
          *(uchar *)(v6 + 582) = 2;
        }
      }
      break;
    case 0xB:
      Function_23_2252c9c(3);
      result = 582;
      *(uchar *)(v6 + 582) = 10;
      break;
    case 0xC:
      Function_2252d1c(v6);
      *(uint *)(v6 + 556) = Function_224318c((*(uchar *)(v6 + 584) + 16) & 0xFFFF);
      *(uint *)(v6 + 560) = Function_2243154((*(uchar *)(v6 + 584) + 16) & 0xFFFF);
      *(uint *)(v6 + 96) = Function_2252754;
      if ( *(uchar *)(v6 + 584) == 1 )
      {
        Function_224fdbc((uint *)v6);
        Function_2252d74(v6, 0x14u);
      }
      else if ( *(uchar *)(v6 + 584) )
      {
        Function_2250578(v6);
        Function_2252d74(v6, 0x1Du);
      }
      else
      {
        Function_2250cb0((uint *)v6);
        Function_2252d74(v6, 0x15u);
      }
      result = 582;
      *(uchar *)(v6 + 582) = 13;
      break;
    case 0xD:
      v24 = Function_2248d20(*(uint **)(v6 + 76), v7, a3, a4);
      Function_20014dc(*(uint *)(*(uint *)(v6 + 76) + 12), &v33, &v32);
      Function_22430e0((*(uchar *)(v6 + 584) + 16) & 0xFFFF, v32, v33);
      if ( v24 == -2 )
      {
        v25 = Function_22421dc();
        Function_2254044(v25);
        Function_2252b90(v6);
        Function_2252df4(v6);
        result = 582;
        *(uchar *)(v6 + 582) = 2;
      }
      else
      {
        result = -1;
        if ( v24 != -1 )
        {
          result = *(uchar *)(v6 + 533);
          if ( *(uchar *)(v6 + 533) )
          {
            v26 = Function_22421dc();
            Function_2254044(v26);
            *(uchar *)(v6 + 580) = v24;
            Function_2252b90(v6);
            Function_2252df4(v6);
            Function_2252bb8(v24, v6);
            result = 582;
            *(uchar *)(v6 + 582) = 14;
          }
        }
      }
      break;
    case 0xE:
      v27 = Function_22421bc();
      result = Function_2254238(v27);
      if ( !result )
      {
        *(uint *)(v6 + 92) = Function_2002100(
                                 *(uint **)(*(uint *)(v6 + 12) + 8),
                                 (uchar *)dword_22569D8,
                                 985,
                                 11,
                                 4u);
        result = 582;
        *(uchar *)(v6 + 582) = 15;
      }
      break;
    case 0xF:
      result = Function_2002114(*(uint *)(v6 + 92), 4u);
      if ( result != -1 )
      {
        if ( result )
        {
          *(uchar *)(v6 + 582) = 17;
        }
        else if ( Function_2252c08(v6) == 65532 )
        {
          Function_23_2252c9c(3);
          *(uchar *)(v6 + 582) = 10;
        }
        else
        {
          Function_23_2252c9c(11);
          *(uchar *)(v6 + 582) = 16;
        }
        result = 0;
        *(uint *)(v6 + 92) = 0;
      }
      break;
    case 0x10:
      v28 = Function_22421bc();
      result = Function_2254238(v28);
      if ( !result )
      {
        result = 1;
        if ( dword_21BF6C4 & 1 )
        {
          v29 = Function_22421bc();
          Function_225412c(v29, *(uchar *)(v6 + 538));
          Function_23_2252ce0(2, *(uchar *)(v6 + 533));
          Function_23_2252c9c(7);
          Function_2005748(0x5E3u);
          result = 582;
          *(uchar *)(v6 + 582) = 10;
        }
      }
      break;
    case 0x11:
      Function_23_2252c9c(9);
      result = 582;
      *(uchar *)(v6 + 582) = 18;
      break;
    case 0x12:
      v30 = Function_22421bc();
      result = Function_2254238(v30);
      if ( !result )
      {
        result = 3;
        if ( dword_21BF6C4 & 3 )
        {
          Function_23_2252cd4();
          Function_2252c78(v6, v31);
          Function_2243204();
          Call_RemoveTaskFromTaskList(v4);
          result = Function_2059514();
        }
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (022534A0) --------------------------------------------------------
int __fastcall Function_22534a0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  short v9;
  char v10;
  int v11;
  int v12;
  int result;
  int v14;
  int i;
  uint *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;

  v21 = a4;
  v4 = a1;
  v5 = Function_203608c();
  v19 = Function_2058d88(v5);
  v6 = Function_203608c();
  v18 = Function_2058dc0(v6);
  v7 = Function_203608c();
  v8 = Function_2058f50(v7);
  v17 = Function_2059328(v8);
  v9 = Function_2252e3c(v19, v18, &v20);
  v10 = v9;
  Function_22430d0(v9 + 3);
  v11 = malloc(4u, 592);
  MI_CpuFill8((ushort *)v11, 0, 0x250u);
  *(uint *)(v11 + 12) = v4;
  *(uchar *)(v11 + 584) = v10;
  *(uint *)(v11 + 548) = v20;
  *(uint *)(v11 + 104) = Function_2023790(100, 4u);
  *(uint *)(v11 + 108) = Function_2023790(100, 4u);
  *(uint *)(v11 + 112) = Function_200b358(4u);
  *(uchar *)(v11 + 582) = 0;
  Function_2005748(0x5DCu);
  *(uint *)(v11 + 4) = AddTaskToTaskList1((int)Function_2252e70, v11, 0x2710u);
  Function_22431ec(v11, *(uint *)(v11 + 4), (int)Function_2251270);
  v12 = Function_203a4b4(*(uint *)(v11 + 12));
  result = Function_203a4bc(*(uint *)(v11 + 12));
  v14 = result;
  for ( i = 0; i < v12; v14 += 32 )
  {
    result = v19;
    if ( v19 == *(ushort *)(v14 + 24) )
    {
      result = v18;
      if ( v18 == *(ushort *)(v14 + 26) )
      {
        v16 = GetAdressOfSpriteID(*(uint *)(*(uint *)(v11 + 12) + 56), i);
        result = ChangeSpriteFaceDirection_WithCheck(v16, v17);
      }
    }
    ++i;
  }
  return result;
}

//----- (02253598) --------------------------------------------------------
int __fastcall Function_2253598(ushort *a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;

  v3 = a2;
  v4 = a3;
  v5 = (int)a1;
  MI_CpuFill8(a1, 0, 0x30u);
  dword_2257740[31] = v5;
  *(uint *)(v5 + 8) = v4;
  *(uint *)(dword_2257740[31] + 12) = v3;
  *(uint *)(dword_2257740[31] + 16) = Function_202855c(0xFu);
  return Function_20361bc((uint *)(dword_2257740[31] + 20), (int)&dword_2257740[31], dword_2257740[31], v6);
}

//----- (022535CC) --------------------------------------------------------
int *Function_22535cc()
{
  int *result;

  free(*(uint *)(dword_2257740[31] + 16));
  free(dword_2257740[31]);
  result = &dword_2257740[31];
  dword_2257740[31] = 0;
  return result;
}

//----- (022535EC) --------------------------------------------------------
int Function_22535ec()
{
  int result;
  int v1;

  result = *(uint *)(dword_2257740[31] + 4);
  if ( result )
  {
    v1 = *(uint *)dword_2257740[31];
    result = Function_22537d4();
  }
  return result;
}

//----- (02253604) --------------------------------------------------------
void Function_2253604()
{
  ;
}

//----- (02253608) --------------------------------------------------------
int Function_2253608()
{
  return 48;
}

//----- (0225360C) --------------------------------------------------------
uint __fastcall Function_225360c(int a1, ushort **a2, int a3, uint *a4)
{
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  ushort **v18;
  uint *v19;
  int v20;
  int v21;
  uint *v22;

  v4 = a1;
  v18 = a2;
  v5 = a3;
  v19 = a4;
  v22 = Function_200b358(4u);
  v6 = (ushort *)Function_2023790(30, 4u);
  v21 = Function_2023790(30, 4u);
  Function_200b1b8_CallMsgDecrypt(v18, 0, v6);
  Function_201d738_CallInitTextInterpreter(v4, 0);
  Function_200b1b8_CallMsgDecrypt(v18, 1u, v6);
  Function_201d738_CallInitTextInterpreter(v4, 0);
  Function_200b1b8_CallMsgDecrypt(v18, 2u, v6);
  Function_201d738_CallInitTextInterpreter(v4, 0);
  v7 = GetSecretTrainerID(v5);
  Function_200b60c((int)v22, 6u, v7, 5, 2, 1);
  Function_200b1b8_CallMsgDecrypt(v18, 5u, v6);
  Function_200c388(v22, v21, (int)v6);
  Function_201d738_CallInitTextInterpreter(v4, 0);
  Function_200b498((int)v22, 0);
  Function_200b1b8_CallMsgDecrypt(v18, 4u, v6);
  Function_200c388(v22, v21, (int)v6);
  Function_201d738_CallInitTextInterpreter(v4, 0);
  v8 = Function_202958c((int)v19);
  Function_200b1b8_CallMsgDecrypt(v18, v8 + 20, v6);
  Function_201d738_CallInitTextInterpreter(v4, 0);
  v9 = 0;
  v10 = 39;
  do
  {
    Function_200b1b8_CallMsgDecrypt(v18, v9 + 6, v6);
    Function_201d738_CallInitTextInterpreter(v4, 0);
    ++v9;
    v10 += 16;
  }
  while ( v9 < 7 );
  v11 = &dword_22576EC;
  v20 = 0;
  v12 = 39;
  do
  {
    v13 = ((int (__fastcall *)(uint *))*v11)(v19);
    Function_200b60c((int)v22, 6u, v13, 6, 1, 1);
    Function_200b1b8_CallMsgDecrypt(v18, 0xDu, v6);
    Function_200c388(v22, v21, (int)v6);
    Function_201d738_CallInitTextInterpreter(v4, 0);
    ++v11;
    v12 += 16;
    ++v20;
  }
  while ( v20 < 7 );
  Function_20237bc_FreeMsg((int)v6, v14);
  Function_20237bc_FreeMsg(v21, v15);
  return Function_200b3f0(v22, v16);
}

//----- (022537D4) --------------------------------------------------------
int __fastcall Function_22537d4(int *a1, int a2)
{
  int v2;
  int *v3;
  int result;

  v2 = a2;
  v3 = a1;
  Function_200dc9c(a2 + 8, 0);
  Function_201acf4(v2 + 8);
  Function_201a8fc(v2 + 8);
  if ( *(uint *)v2 )
    (*(void (__fastcall **)(uint))v2)(*(uint *)(v2 + 4));
  free(v2);
  Call_RemoveTaskFromTaskList(v3);
  *(uint *)(dword_2257740[31] + 4) = 0;
  result = dword_2257740[31];
  *(uint *)dword_2257740[31] = 0;
  return result;
}

//----- (0225381C) --------------------------------------------------------
int *__fastcall Function_225381c(int *result, int a2)
{
  if ( dword_21BF6C4 & 3 )
    result = (int *)Function_22537d4(result, a2);
  return result;
}

//----- (02253834) --------------------------------------------------------
ushort *__fastcall Function_2253834(uint *a1, int a2, int a3, int a4, int a5)
{
  uint *v5;
  int v6;
  int v7;
  int v8;
  ushort **v9;
  uint *v10;
  int v12;

  v5 = a1;
  v12 = a2;
  v6 = a3;
  v7 = a4;
  v8 = malloc(4u, 44);
  MI_CpuFill8((ushort *)v8, 0, 0x2Cu);
  *(uint *)v8 = v6;
  *(uint *)(v8 + 4) = v7;
  Function_201a7e8(v5, v8 + 8, 3, 4, 2, 0x18u, 0x13u, 13, 1);
  Function_200dc48(v8 + 8, 1, 985, 0xBu);
  v9 = (ushort **)LoadFromMsgNARC(0, 26, 640, 4u);
  Function_201ada4_ClearTextBox(v8 + 8, 15);
  if ( a5 )
    v10 = *(uint **)(dword_2257740[31] + 12);
  else
    v10 = *(uint **)(dword_2257740[31] + 16);
  Function_225360c(v8 + 8, v9, v12, v10);
  Function_201a9a4(v8 + 8);
  Function_2005748(0x5FDu);
  *(uint *)(dword_2257740[31] + 4) = AddTaskToTaskList1((int)Function_225381c, v8, 0xAu);
  *(uint *)dword_2257740[31] = v8;
  return Function_200b190((ushort *)v9);
}

//----- (022538FC) --------------------------------------------------------
uint __fastcall Function_22538fc(char a1)
{
  char v1;
  int v2;
  int v3;
  int v4;
  ushort *v5;
  uint v6;

  v1 = a1;
  v2 = Function_2028558();
  v3 = LoadVariableAreaAdress_14(*(uint *)(dword_2257740[31] + 8));
  v4 = Function_202d034(v3);
  v5 = (ushort *)malloc(4u, v2 + 1);
  MI_CpuFill8(v5, 0, v2 + 1);
  *(uchar *)v5 = v1;
  if ( v4 >= 999999 )
    v4 = 999999;
  Function_20294d4(*(uint **)(dword_2257740[31] + 12), v4);
  MI_CpuCopy8(*(uint *)(dword_2257740[31] + 12), (uint)v5 + 1, v2, v6);
  Function_20359dc(81, (int)v5, v2 + 1);
  return free((int)v5);
}

//----- (02253968) --------------------------------------------------------
uint *Function_2253968()
{
  int v0;
  int v1;

  v0 = LoadVariableAreaAdress_14(*(uint *)(dword_2257740[31] + 8));
  v1 = Function_202d034(v0);
  if ( v1 >= 999999 )
    v1 = 999999;
  return Function_20294d4(*(uint **)(dword_2257740[31] + 12), v1);
}

//----- (02253998) --------------------------------------------------------
int __fastcall Function_2253998(int a1, int a2, int a3)
{
  return Function_2035ac4(82, a3, a2);
}

//----- (022539A8) --------------------------------------------------------
int __fastcall Function_22539a8(int a1, int a2, uchar *a3)
{
  uchar *v3;
  int v4;
  int result;
  uint v6;

  v3 = a3;
  v4 = a2;
  result = Function_203608c();
  if ( *v3 == result )
  {
    MI_CpuCopy8((int)(v3 + 1), *(uint *)(dword_2257740[31] + 16), v4 - 1, v6);
    result = dword_2257740[31] + 44;
    *(uchar *)(dword_2257740[31] + 44) = 1;
  }
  return result;
}

//----- (022539D8) --------------------------------------------------------
int Function_22539d8()
{
  return *(uchar *)(dword_2257740[31] + 44);
}

//----- (022539E8) --------------------------------------------------------
int Function_22539e8()
{
  int result;

  result = dword_2257740[31] + 44;
  *(uchar *)(dword_2257740[31] + 44) = 0;
  return result;
}

//----- (022539F8) --------------------------------------------------------
int Function_22539f8()
{
  return Function_2059514();
}

//----- (02253A00) --------------------------------------------------------
int __fastcall Function_2253a00(int a1, int a2)
{
  int v2;
  int v3;
  int (__fastcall *v4)(ushort *);
  int v5;
  ushort *v6;
  int v7;
  uint v8;
  int v9;
  int v10;
  int v11;

  v2 = a2;
  v3 = a1;
  v4 = (int (__fastcall *)(ushort *))dword_22576EC[a2 - 32];
  if ( a2 < 32 )
    ErrorHandler();
  if ( v2 > 45 )
    ErrorHandler();
  Function_20594fc();
  v5 = Function_22421bc();
  Function_2253dfc(v5, 640, 1);
  v6 = Function_202855c(4u);
  v7 = Function_2028558();
  MI_CpuCopy8(v3, (uint)v6, v7, v8);
  v9 = v4(v6);
  free((int)v6);
  v10 = Function_22421bc();
  Function_2254178(v10, v9);
  v11 = Function_22421bc();
  return Function_2253f40(v11, v2);
}

//----- (02253A78) --------------------------------------------------------
uint __fastcall Function_2253a78(int a1, ushort **a2, int a3, int a4, int a5)
{
  int v5;
  uint *v6;
  ushort *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v16;
  ushort **v17;
  int v18;
  int *v19;

  v16 = a1;
  v17 = a2;
  v5 = a4;
  v6 = Function_200b358(4u);
  v7 = (ushort *)Function_2023790(40, 4u);
  v8 = Function_2023790(40, 4u);
  Function_200b498((int)v6, 1u);
  Function_200b1b8_CallMsgDecrypt(v17, 0xCu, v7);
  Function_200c388(v6, v8, (int)v7);
  Function_201d738_CallInitTextInterpreter(v16, 0);
  Function_200b1b8_CallMsgDecrypt(v17, 0xDu, v7);
  Function_201d738_CallInitTextInterpreter(v16, 0);
  v9 = Function_20295b8(v5);
  Function_200b60c((int)v6, 6u, v9, 6, 1, 1);
  Function_200b1b8_CallMsgDecrypt(v17, 0xEu, v7);
  Function_200c388(v6, v8, (int)v7);
  Function_201d738_CallInitTextInterpreter(v16, 0);
  Function_200b1b8_CallMsgDecrypt(v17, 0xFu, v7);
  Function_201d738_CallInitTextInterpreter(v16, 0);
  v10 = 0;
  v18 = 0;
  do
  {
    v19 = Function_20288c8(a5, 4u, v18);
    if ( v19 )
    {
      Function_200b498((int)v6, 0);
      Function_200b1b8_CallMsgDecrypt(v17, 0x10u, v7);
      Function_200c388(v6, v8, (int)v7);
      Function_201d738_CallInitTextInterpreter(v16, 0);
      v11 = GetSecretTrainerID((int)v19);
      Function_200b60c((int)v6, 5u, v11, 5, 2, 1);
      Function_200b1b8_CallMsgDecrypt(v17, 0x11u, v7);
      Function_200c388(v6, v8, (int)v7);
      Function_201d738_CallInitTextInterpreter(v16, 0);
      free((int)v19);
    }
    else
    {
      Function_200b1b8_CallMsgDecrypt(v17, 0x33u, v7);
      Function_201d738_CallInitTextInterpreter(v16, 0);
      Function_200b1b8_CallMsgDecrypt(v17, 0x34u, v7);
      Function_201d738_CallInitTextInterpreter(v16, 0);
    }
    v10 += 17;
    ++v18;
  }
  while ( v18 < 5 );
  Function_20237bc_FreeMsg((int)v7, v12);
  Function_20237bc_FreeMsg(v8, v13);
  return Function_200b3f0(v6, v14);
}

//----- (02253C64) --------------------------------------------------------
int __fastcall Function_2253c64(uint *a1, int a2, int a3, int a4, int a5)
{
  uint *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  ushort **v10;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  v9 = malloc(4u, 44);
  MI_CpuFill8((ushort *)v9, 0, 0x2Cu);
  *(uint *)v9 = v8;
  *(uint *)(v9 + 4) = a5;
  Function_201a7e8(v5, v9 + 8, 3, 4, 2, 0x18u, 0x13u, 13, 1);
  Function_200dc48(v9 + 8, 1, 985, 0xBu);
  v10 = (ushort **)LoadFromMsgNARC(0, 26, 639, 4u);
  Function_201ada4_ClearTextBox(v9 + 8, 15);
  Function_2253a78(v9 + 8, v10, v6, *(uint *)(dword_2257740[31] + 12), v7);
  Function_2005748(0x5FDu);
  Function_201a9a4(v9 + 8);
  Function_200b190((ushort *)v10);
  return v9;
}

//----- (02253D10) --------------------------------------------------------
uint __fastcall Function_2253d10(int a1)
{
  int v1;

  v1 = a1;
  Function_200dc9c(a1 + 8, 0);
  Function_201acf4(v1 + 8);
  Function_201a8fc(v1 + 8);
  if ( *(uint *)v1 )
    (*(void (__fastcall **)(uint))v1)(*(uint *)(v1 + 4));
  return free(v1);
}

//----- (02253D40) --------------------------------------------------------
int *Function_2253d40()
{
  return dword_22569E0;
}

//----- (02253D48) --------------------------------------------------------
int __fastcall Function_2253d48(int a1, uint a2, int a3, int a4, int a5)
{
  uint v5;
  int v6;
  int v7;
  int v8;
  int v10;
  int v11;

  v5 = a2;
  v10 = a1;
  v6 = a3;
  v11 = a4;
  v7 = a5;
  v8 = malloc(a2, 72);
  MI_CpuFill8((ushort *)v8, 0, 0x48u);
  if ( !a5 )
    v7 = 230;
  *(uint *)v8 = Function_2023790(v7, v5);
  *(uint *)(v8 + 4) = Function_2023790(v7, v5);
  *(uint *)(v8 + 40) = Function_200b358(v5);
  *(uint *)(v8 + 44) = v10;
  *(uint *)(v8 + 36) = LoadFromMsgNARC(1, 26, v10, v5);
  *(uint *)(v8 + 52) = v5;
  *(uint *)(v8 + 24) = v6;
  Function_201a7a0(v8 + 8);
  *(uint *)(v8 + 68) &= 0xFFFFFFFC;
  *(uint *)(v8 + 32) = 0;
  *(uint *)(v8 + 56) = v11;
  *(ushort *)(v8 + 64) = 813;
  *(ushort *)(v8 + 66) = 994;
  return v8;
}

//----- (02253DD8) --------------------------------------------------------
uint __fastcall Function_2253dd8(int *a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = (int)a1;
  Function_20237bc_FreeMsg(*a1, a2);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 4), v3);
  Function_200b3f0(*(uint **)(v2 + 40), v4);
  Function_200b190(*(ushort **)(v2 + 36));
  return free(v2);
}

//----- (02253DFC) --------------------------------------------------------
uint __fastcall Function_2253dfc(int a1, int a2, int a3)
{
  int v3;
  uint result;
  int v5;
  int v6;

  v3 = a1;
  result = *(uint *)(a1 + 44);
  v5 = a2;
  v6 = a3;
  if ( result != a2 )
  {
    *(uint *)(v3 + 44) = a2;
    Function_200b190(*(ushort **)(v3 + 36));
    result = LoadFromMsgNARC(v6, 26, v5, *(uint *)(v3 + 52));
    *(uint *)(v3 + 36) = result;
    if ( !result )
      result = ErrorHandler();
  }
  return result;
}

//----- (02253E2C) --------------------------------------------------------
ushort *__fastcall Function_2253e2c(int a1, int a2, short a3, short a4)
{
  ushort *result;

  *(uint *)(a1 + 24) = a2;
  *(ushort *)(a1 + 66) = a3;
  result = (ushort *)(a1 + 64);
  *result = a4;
  return result;
}

//----- (02253E3C) --------------------------------------------------------
int __fastcall Function_2253e3c(int a1)
{
  return *(uint *)(a1 + 36);
}

//----- (02253E40) --------------------------------------------------------
int __fastcall Function_2253e40(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a2;
  v3 = *(uint *)(a2 + 48);
  if ( v3 >= 8 || (result = Function_201d724((uchar)v3)) == 0 )
  {
    result = 1;
    if ( dword_21BF6C4 & 1 )
      result = Function_2254044(v2);
  }
  return result;
}

//----- (02253E6C) --------------------------------------------------------
int __fastcall Function_2253e6c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)a1;
  if ( *(uint *)(a1 + 68) & 2 )
  {
    Function_200c388(*(uint **)(a1 + 40), *(uint *)(a1 + 4), v2);
    v2 = *(uint *)(v1 + 4);
    *(uint *)(v1 + 68) &= 0xFFFFFFFD;
  }
  return v2;
}

//----- (02253E90) --------------------------------------------------------
int __fastcall Function_2253e90(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  Function_2253fa4();
  Function_22421ec();
  if ( !Function_201a7cc(v5 + 8) )
    Function_201a7e8(*(uint **)(v5 + 24), v5 + 8, 3, 2, 19, 0x1Bu, 4u, 12, *(ushort *)(v5 + 64));
  Function_201ada4_ClearTextBox(v5 + 8, 15);
  Function_200e060(v5 + 8, 1, *(ushort *)(v5 + 66), 0xAu);
  if ( v4 )
    *(uint *)(v5 + 32) = AddTaskToTaskList1((int)Function_2253e40, v5, 0x64u);
  *(uint *)(v5 + 68) = (*(uint *)(v5 + 68) & 0xFFFFFFFE | 1) & 0xFFFFFFFB;
  Function_2253e6c(v5);
  v8 = *(uint *)(v5 + 56);
  *(uint *)(v5 + 48) = Function_201d738_CallInitTextInterpreter(v5 + 8, 1);
  *(uint *)(v5 + 28) = v6;
  *(uint *)(v5 + 60) = v7;
  return *(uint *)(v5 + 48);
}

//----- (02253F40) --------------------------------------------------------
int __fastcall Function_2253f40(int a1, uint a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;

  v4 = a1;
  v5 = a3;
  v6 = a4;
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(a1 + 36), a2, *(ushort **)a1);
  return Function_2253e90(v4, v5, v6, 0);
}

//----- (02253F60) --------------------------------------------------------
int __fastcall Function_2253f60(int a1, uint a2, int a3, int a4)
{
  int v4;
  int v5;
  int result;

  v4 = a1;
  v5 = *(uint *)(a1 + 56);
  *(uint *)(a1 + 56) = 0;
  result = Function_2253f40(a1, a2, a3, a4);
  *(uint *)(v4 + 48) = 8;
  *(uint *)(v4 + 56) = v5;
  return result;
}

//----- (02253F78) --------------------------------------------------------
int __fastcall Function_2253f78(int a1, uint a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;

  v5 = a1;
  v6 = a3;
  v7 = a4;
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(a1 + 36), a2, *(ushort **)a1);
  return Function_2253e90(v5, v6, v7, a5);
}

//----- (02253F98) --------------------------------------------------------
int __fastcall Function_2253f98(int result)
{
  *(uint *)(result + 68) |= 4u;
  return result;
}

//----- (02253FA4) --------------------------------------------------------
int __fastcall Function_2253fa4(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  int result;
  int v6;
  int (__fastcall *v7)(uint);

  v2 = a1;
  v3 = a2;
  v4 = a1[17];
  result = v4 << 31 >> 31;
  if ( v4 & 1 )
  {
    v2[17] = v4 & 0xFFFFFFFE;
    v6 = v2[12];
    if ( v6 < 8 && Function_201d724((uchar)v6) )
      Call_RemoveTextInterpreterTaskFromTaskList(v2[12] & 0xFF);
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        Function_200e084((int)(v2 + 2), 1);
        Function_201acf4((int)(v2 + 2));
        Function_201a8fc((int)(v2 + 2));
      }
      else if ( v3 == 2 )
      {
        Function_200e084((int)(v2 + 2), 1);
        Function_201ad10((int)(v2 + 2));
        Function_201a8fc((int)(v2 + 2));
      }
    }
    else
    {
      Function_200e084((int)(v2 + 2), 1);
    }
    v2[12] = 8;
    result = v2[8];
    if ( result )
    {
      Call_RemoveTaskFromTaskList((int *)result);
      result = 0;
      v2[8] = 0;
    }
    v7 = (int (__fastcall *)(uint))v2[7];
    if ( v7 )
      result = v7(v2[15]);
  }
  return result;
}

//----- (02254044) --------------------------------------------------------
int __fastcall Function_2254044(uint *a1)
{
  return Function_2253fa4(a1, 2);
}

//----- (02254050) --------------------------------------------------------
int __fastcall Function_2254050(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_200b498(*(uint *)(a1 + 40), 1u);
  result = *(uint *)(v1 + 68) | 2;
  *(uint *)(v1 + 68) = result;
  return result;
}

//----- (02254068) --------------------------------------------------------
int __fastcall Function_2254068(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_200b498(*(uint *)(a1 + 40), 0);
  result = *(uint *)(v1 + 68) | 2;
  *(uint *)(v1 + 68) = result;
  return result;
}

//----- (02254080) --------------------------------------------------------
int __fastcall Function_2254080(int a1, uint a2)
{
  int v2;
  int result;

  v2 = a1;
  Function_200bacc(*(uint *)(a1 + 40), 2u, a2);
  result = *(uint *)(v2 + 68) | 2;
  *(uint *)(v2 + 68) = result;
  return result;
}

//----- (02254098) --------------------------------------------------------
int __fastcall Function_2254098(int a1, uint a2)
{
  int v2;
  int result;

  v2 = a1;
  Function_200bb04(*(uint *)(a1 + 40), 3u, a2);
  result = *(uint *)(v2 + 68) | 2;
  *(uint *)(v2 + 68) = result;
  return result;
}

//----- (022540B0) --------------------------------------------------------
int __fastcall Function_22540b0(int a1, uint a2)
{
  int v2;
  int result;

  v2 = a1;
  Function_200bc10(*(uint *)(a1 + 40), 5u, a2);
  result = *(uint *)(v2 + 68) | 2;
  *(uint *)(v2 + 68) = result;
  return result;
}

//----- (022540C8) --------------------------------------------------------
int __fastcall Function_22540c8(int a1, uint a2)
{
  int v2;
  int result;

  v2 = a1;
  Function_200bc48(*(uint *)(a1 + 40), 5u, a2);
  result = *(uint *)(v2 + 68) | 2;
  *(uint *)(v2 + 68) = result;
  return result;
}

//----- (022540E0) --------------------------------------------------------
int __fastcall Function_22540e0(int a1, uint a2, uint a3)
{
  int v3;
  int result;

  v3 = a1;
  Function_200bc48(*(uint *)(a1 + 40), a2, a3);
  result = *(uint *)(v3 + 68) | 2;
  *(uint *)(v3 + 68) = result;
  return result;
}

//----- (022540F4) --------------------------------------------------------
int __fastcall Function_22540f4(int a1, uint a2)
{
  int v2;
  int result;

  v2 = a1;
  Function_200bc80(*(uint *)(a1 + 40), 2u, a2);
  result = *(uint *)(v2 + 68) | 2;
  *(uint *)(v2 + 68) = result;
  return result;
}

//----- (0225410C) --------------------------------------------------------
int __fastcall Function_225410c(int a1, uint a2, int a3)
{
  int v3;
  int result;

  v3 = a1;
  Function_200b60c(*(uint *)(a1 + 40), a2, a3, 1, 0, 1);
  result = *(uint *)(v3 + 68) | 2;
  *(uint *)(v3 + 68) = result;
  return result;
}

//----- (0225412C) --------------------------------------------------------
int __fastcall Function_225412c(int a1, int a2)
{
  int v2;
  int result;

  v2 = a1;
  Function_200b60c(*(uint *)(a1 + 40), 6u, a2, 2, 0, 1);
  result = *(uint *)(v2 + 68) | 2;
  *(uint *)(v2 + 68) = result;
  return result;
}

//----- (02254154) --------------------------------------------------------
int __fastcall Function_2254154(int a1, uint a2, int a3)
{
  int v3;
  int result;

  v3 = a1;
  Function_200b60c(*(uint *)(a1 + 40), a2, a3, 2, 0, 1);
  result = *(uint *)(v3 + 68) | 2;
  *(uint *)(v3 + 68) = result;
  return result;
}

//----- (02254178) --------------------------------------------------------
int __fastcall Function_2254178(int a1, int a2)
{
  int v2;
  int result;

  v2 = a1;
  Function_200b60c(*(uint *)(a1 + 40), 6u, a2, 6, 0, 1);
  result = *(uint *)(v2 + 68) | 2;
  *(uint *)(v2 + 68) = result;
  return result;
}

//----- (022541A0) --------------------------------------------------------
int __fastcall Function_22541a0(int a1, uint a2, uint a3)
{
  int v3;
  int result;

  v3 = a1;
  Function_200ba94(*(uint *)(a1 + 40), a2, a3);
  result = *(uint *)(v3 + 68) | 2;
  *(uint *)(v3 + 68) = result;
  return result;
}

//----- (022541B4) --------------------------------------------------------
int __fastcall Function_22541b4(int a1, uint a2, uint a3)
{
  int v3;
  int result;

  v3 = a1;
  Function_200bb04(*(uint *)(a1 + 40), a2, a3);
  result = *(uint *)(v3 + 68) | 2;
  *(uint *)(v3 + 68) = result;
  return result;
}

//----- (022541C8) --------------------------------------------------------
int __fastcall Function_22541c8(int a1, uint a2, uint a3)
{
  int v3;
  int result;

  v3 = a1;
  Function_200bc80(*(uint *)(a1 + 40), a2, a3);
  result = *(uint *)(v3 + 68) | 2;
  *(uint *)(v3 + 68) = result;
  return result;
}

//----- (022541DC) --------------------------------------------------------
int __fastcall Function_22541dc(int a1, uint a2, uint a3)
{
  int v3;
  int result;

  v3 = a1;
  Function_200bacc(*(uint *)(a1 + 40), a2, a3);
  result = *(uint *)(v3 + 68) | 2;
  *(uint *)(v3 + 68) = result;
  return result;
}

//----- (022541F0) --------------------------------------------------------
int __fastcall Function_22541f0(int a1, uint a2, uint a3)
{
  int v3;
  int result;

  v3 = a1;
  Function_200bb3c(*(uint *)(a1 + 40), a2, a3);
  result = *(uint *)(v3 + 68) | 2;
  *(uint *)(v3 + 68) = result;
  return result;
}

//----- (02254204) --------------------------------------------------------
int __fastcall Function_2254204(int a1, int a2)
{
  return Function_200c324(*(uint *)(a1 + 40), a2);
}

//----- (02254210) --------------------------------------------------------
int __fastcall Function_2254210(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = *(uint *)(a1 + 48);
  if ( result < 8 )
  {
    result = Function_201d724((uchar)result);
    if ( result )
    {
      Call_RemoveTextInterpreterTaskFromTaskList(*(uint *)(v1 + 48) & 0xFF);
      result = 8;
      *(uint *)(v1 + 48) = 8;
    }
  }
  return result;
}

//----- (02254238) --------------------------------------------------------
int __fastcall Function_2254238(int a1)
{
  int v1;
  int result;

  v1 = *(uint *)(a1 + 48);
  if ( v1 == 8 )
    result = 0;
  else
    result = Function_201d724((uchar)v1);
  return result;
}

//----- (02254250) --------------------------------------------------------
int __fastcall Function_2254250(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = *(uint *)(a1 + 48);
  if ( result < 8 )
  {
    result = Function_201d724((uchar)result);
    if ( !result )
    {
      result = 8;
      *(uint *)(v1 + 48) = 8;
    }
  }
  return result;
}

//----- (0225426C) --------------------------------------------------------
int __fastcall Function_225426c(int a1)
{
  return *((uchar *)dword_2256A00 + 3 * a1);
}

//----- (0225427C) --------------------------------------------------------
int __fastcall Function_225427c(int a1)
{
  return *((uchar *)dword_2256A00 + 3 * a1 + 1);
}

//----- (0225428C) --------------------------------------------------------
int __fastcall Function_225428c(int a1)
{
  return *((uchar *)dword_2256A00 + 3 * a1 + 2);
}

//----- (0225429C) --------------------------------------------------------
int __fastcall Function_225429c(int a1)
{
  return *((uchar *)&off_2256AB4 + 3 * a1);
}

//----- (022542AC) --------------------------------------------------------
int __fastcall Function_22542ac(int a1)
{
  return *((uchar *)&off_2256AB4 + 3 * a1 + 1);
}

//----- (022542BC) --------------------------------------------------------
int __fastcall Function_22542bc(int a1)
{
  return *((uchar *)&off_2256AB4 + 3 * a1 + 2);
}

//----- (022542CC) --------------------------------------------------------
int Function_22542cc()
{
  return malloc(4u, 68);
}

//----- (022542D8) --------------------------------------------------------
int __fastcall Function_22542d8(int a1, int a2, int a3, int a4)
{
  *(uint *)a1 = a2;
  *(uchar *)(a1 + 56) = 0;
  *(uint *)(a1 + 48) = a3;
  *(uint *)(a1 + 52) = a4;
  *(ushort *)(a1 + 64) = 0;
  return Function_200daa4(*(uint **)(a2 + 8), 3u, 985, 11, 2, 4);
}

//----- (0225430C) --------------------------------------------------------
uint __fastcall Function_225430c(int a1)
{
  return free(a1);
}

//----- (02254314) --------------------------------------------------------
int __fastcall Function_2254314(int a1)
{
  return *(uint *)(a1 + 60);
}

//----- (02254318) --------------------------------------------------------
int __fastcall Function_2254318(int a1)
{
  int v1;

  v1 = *(uchar *)(a1 + 56);
  if ( *(uchar *)(a1 + 56) )
  {
    if ( v1 == 1 )
    {
      Function_22544c0();
    }
    else if ( v1 == 2 )
    {
      *(uchar *)(a1 + 56) = 0;
      Function_225451c();
      return 1;
    }
  }
  else
  {
    Function_225437c();
  }
  return 0;
}

//----- (02254350) --------------------------------------------------------
int __fastcall Function_2254350(int a1, int a2)
{
  int v2;
  int v3;
  int v5;
  int v6;
  int v7;
  int v8;

  v2 = a2;
  v5 = 5;
  v6 = 6;
  v7 = 7;
  v8 = 8;
  v3 = Function_22421cc();
  return Function_2253f60(v3, *(&v5 + v2), 0, 0);
}

//----- (0225437C) --------------------------------------------------------
int __fastcall Function_225437c(int a1)
{
  int v1;
  ushort **v2;
  ushort *v3;
  int v4;
  int v5;
  uint *v6;
  int v7;
  int v8;
  int result;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int (__fastcall *v15)(int, int);
  int v16;
  int v17;
  short v18;
  short v19;
  int v20;
  int v21;
  int v22;

  v1 = a1;
  *(uint *)(a1 + 36) = Function_2013a04(4u, 4u);
  Function_201a7e8(*(uint **)(*(uint *)v1 + 8), v1 + 4, 3, 19, 3, 0xCu, 8u, 13, 471);
  Function_201a7e8(*(uint **)(*(uint *)v1 + 8), v1 + 20, 3, 1, 1, 7u, 2u, 13, 457);
  Function_200dc48(v1 + 4, 1, 985, 0xBu);
  Function_200dc48(v1 + 20, 1, 985, 0xBu);
  v10 = 1;
  v11 = 2;
  v12 = 3;
  v13 = 4;
  v2 = (ushort **)LoadFromMsgNARC(0, 26, 637, 4u);
  Function_201ada4_ClearTextBox(v1 + 20, 15);
  v3 = Function_200b1ec_CallMsgDecrypt(v2, 0);
  Function_201d738_CallInitTextInterpreter(v1 + 20, 0);
  Function_20237bc_FreeMsg((int)v3, v4);
  v5 = 0;
  v6 = (uint *)&v10;
  do
  {
    Function_2013a4c(*(uint **)(v1 + 36), v2, *v6, v5++);
    ++v6;
  }
  while ( v5 < 4 );
  Function_200b190((ushort *)v2);
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v20 = 268437504;
  v21 = 8388655;
  v22 = 0;
  v18 = 4;
  v19 = 4;
  v14 = *(uint *)(v1 + 36);
  v17 = v1 + 4;
  v15 = Function_2254350;
  *(uint *)(v1 + 40) = Function_200112c(&v14, **(ushort **)(v1 + 48), **(ushort **)(v1 + 52), 4u);
  Function_201a954(v1 + 4, v7);
  Function_201a954(v1 + 20, v8);
  result = 1;
  *(uchar *)(v1 + 56) = 1;
  return result;
}

//----- (022544C0) --------------------------------------------------------
int __fastcall Function_22544c0(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = Function_2001288(*(uint *)(a1 + 40));
  Function_22549ec(v1);
  if ( v2 == 3 )
    v2 = -2;
  if ( v2 == -2 )
  {
    Function_2005748(0x5DCu);
    *(uint *)(v1 + 60) = -2;
    *(uchar *)(v1 + 56) = 2;
    result = Function_2005748(0x5DCu);
  }
  else
  {
    result = -1;
    if ( v2 != -1 )
    {
      Function_2005748(0x5DCu);
      *(uint *)(v1 + 60) = v2;
      *(uchar *)(v1 + 56) = 2;
      result = Function_2005748(0x5DCu);
    }
  }
  return result;
}

//----- (0225451C) --------------------------------------------------------
uint __fastcall Function_225451c(int a1)
{
  int v1;
  uint *v2;

  v1 = a1;
  v2 = (uint *)Function_22421cc();
  Function_2254044(v2);
  Function_200dc9c(v1 + 20, 1);
  Function_2001384(*(uint *)(v1 + 40), *(ushort **)(v1 + 48), *(ushort **)(v1 + 52));
  Function_200dc9c(v1 + 4, 1);
  Function_201c3c0(*(uint *)(v1 + 4), *(uchar *)(v1 + 8));
  Function_201a8fc(v1 + 4);
  Function_201a8fc(v1 + 20);
  return Function_2013a3c(*(int **)(v1 + 36));
}

//----- (02254564) --------------------------------------------------------
uchar *__fastcall Function_2254564(uchar *a1, char a2)
{
  uchar *result;

  if ( a2 & 1 )
    result = Function_200147c(a1, 1, 15, 2);
  else
    result = Function_200147c(a1, 2, 15, 2);
  return result;
}

//----- (02254588) --------------------------------------------------------
int Function_2254588()
{
  return malloc(4u, 76);
}

//----- (02254594) --------------------------------------------------------
int __fastcall Function_2254594(int a1, int a2, int a3, int a4)
{
  *(uint *)a1 = a2;
  *(uchar *)(a1 + 66) = 0;
  *(uint *)(a1 + 4) = 0;
  *(uint *)(a1 + 56) = a3;
  *(uint *)(a1 + 60) = a4;
  return Function_200daa4(*(uint **)(a2 + 8), 3u, 985, 11, 2, 4);
}

//----- (022545C4) --------------------------------------------------------
uchar *__fastcall Function_22545c4(int a1, char a2, char a3)
{
  uchar *result;

  *(uchar *)(a1 + 64) = a2;
  result = (uchar *)(a1 + 65);
  *result = a3;
  return result;
}

//----- (022545D0) --------------------------------------------------------
uint __fastcall Function_22545d0(int a1)
{
  return free(a1);
}

//----- (022545D8) --------------------------------------------------------
int __fastcall Function_22545d8(int a1)
{
  return *(uint *)(a1 + 68);
}

//----- (022545DC) --------------------------------------------------------
int __fastcall Function_22545dc(int a1)
{
  int v1;
  int v2;
  int *v4;

  v1 = a1;
  v2 = *(uchar *)(a1 + 66);
  if ( *(uchar *)(a1 + 66) )
  {
    if ( v2 == 1 )
    {
      Function_225461c();
    }
    else if ( v2 == 2 )
    {
      *(uchar *)(a1 + 66) = 0;
      Function_2254958();
      return 1;
    }
  }
  else
  {
    Function_22546e0();
  }
  v4 = *(int **)(v1 + 4);
  if ( v4 )
    Function_206a870(v4);
  return 0;
}

//----- (0225461C) --------------------------------------------------------
int __fastcall Function_225461c(int a1, int a2, int a3, int a4)
{
  int v4;
  uint v5;
  int v6;
  ushort v7;
  ushort v8;
  int result;
  int v10;

  v10 = a4;
  v4 = a1;
  v5 = Function_2248d20(*(uint **)(a1 + 44), a2, a3, a4);
  v6 = v5 >> 1;
  if ( *(uint *)(v4 + 72) == v5 >> 1 )
    v6 = -2;
  Function_20014dc(*(uint *)(*(uint *)(v4 + 44) + 12), (ushort *)&v10 + 1, &v10);
  v7 = Function_2001504(*(uint *)(*(uint *)(v4 + 44) + 12), 2u);
  v8 = Function_2001504(*(uint *)(*(uint *)(v4 + 44) + 12), 3u);
  Function_22549a8(*(uint *)(v4 + 4), HIWORD(v10), v7, v8, v10);
  if ( v5 == -2 )
  {
    *(uint *)(v4 + 68) = -2;
    *(uchar *)(v4 + 66) = 2;
    result = Function_2005748(0x5DCu);
  }
  else
  {
    result = -1;
    if ( v5 != -1 )
    {
      *(uint *)(v4 + 68) = v6;
      *(uchar *)(v4 + 66) = 2;
      result = Function_2005748(0x5DCu);
    }
  }
  return result;
}

//----- (022546A0) --------------------------------------------------------
int __fastcall Function_22546a0(int a1, uint a2)
{
  uint v2;
  int v3;
  int v4;
  uint v5;
  int v6;

  v2 = a2;
  v3 = a1;
  v4 = Function_2001504(a1, 0x13u);
  if ( v2 >> 1 == Function_2001504(v3, 2u) - 1 )
    v5 = 278;
  else
    v5 = Function_20289b8(v4, v2 >> 1) + 138;
  v6 = Function_22421dc();
  return Function_2253f60(v6, v5, 0, 0);
}

//----- (022546E0) --------------------------------------------------------
int __fastcall Function_22546e0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  ushort **v6;
  ushort *v7;
  ushort *v8;
  int v9;
  uint *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  bool v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  ushort *v25;
  int result;
  ushort **v27;
  short v28;
  int v29;
  int v30;
  int (__fastcall *v31)(int, uint);
  uchar *(__fastcall *v32)(uchar *, char);
  int v33;
  short v34;
  short v35;
  int v36;
  int v37;
  int v38;
  int v39;

  v39 = a4;
  v4 = a1;
  v5 = LoadVariableAreaAdress_c(*(uint *)(*(uint *)a1 + 12));
  v29 = Function_20289a0(v5);
  *(uint *)(v4 + 72) = v29;
  v28 = v29 + 1;
  if ( v29 + 1 > 7 )
    v28 = 7;
  *(uint *)(v4 + 40) = Function_2013a04(v29 + 1, 4u);
  Function_201a7e8(*(uint **)(*(uint *)v4 + 8), v4 + 8, 3, 19, 3, 0xCu, 2 * v28, 13, 399);
  Function_201a7e8(*(uint **)(*(uint *)v4 + 8), v4 + 24, 3, 1, 1, 8u, 4u, 13, 367);
  Function_200dc48(v4 + 8, 1, 985, 0xBu);
  Function_200dc48(v4 + 24, 1, 985, 0xBu);
  v27 = (ushort **)LoadFromMsgNARC(0, 26, 626, 4u);
  v6 = (ushort **)LoadFromMsgNARC(0, 26, 637, 4u);
  Function_201ada4_ClearTextBox(v4 + 24, 15);
  v7 = Function_200b1ec_CallMsgDecrypt(v6, 9u);
  v8 = Function_200b1ec_CallMsgDecrypt(v6, 0xAu);
  v9 = Function_2023790(6, 4u);
  Function_201d738_CallInitTextInterpreter(v4 + 24, 0);
  v10 = Function_200b358(4u);
  Function_200b60c((int)v10, 0, *(uchar *)(v4 + 64), 2, 1, 1);
  Function_200b60c((int)v10, 1u, *(uchar *)(v4 + 65), 2, 1, 1);
  Function_200c388(v10, v9, (int)v8);
  Function_201d738_CallInitTextInterpreter(v4 + 24, 0);
  Function_200b3f0(v10, v11);
  Function_20237bc_FreeMsg((int)v7, v12);
  Function_20237bc_FreeMsg((int)v8, v13);
  Function_20237bc_FreeMsg(v9, v14);
  Function_200b190((ushort *)v6);
  v15 = 0;
  if ( v29 > 0 )
  {
    v16 = 0;
    do
    {
      v17 = Function_20289b8(v5, v15);
      v18 = Function_2028afc(v5, v15) == 0;
      Function_2013a4c(*(uint **)(v4 + 40), v27, v17, v16 + v18);
      ++v15;
      v16 += 2;
    }
    while ( v15 < v29 );
  }
  Function_2013a4c(*(uint **)(v4 + 40), v27, 0x115u, 2 * v15 + 1);
  Function_200b190((ushort *)v27);
  v19 = Function_22421dc();
  Function_2253dfc(v19, 626, 0);
  v30 = 0;
  v31 = 0;
  v33 = 0;
  v36 = 268437504;
  v37 = 8388655;
  v38 = 0;
  v32 = Function_2254564;
  v34 = v29 + 1;
  v35 = v28;
  v30 = *(uint *)(v4 + 40);
  v33 = v4 + 8;
  v38 = v5;
  v31 = Function_22546a0;
  *(uint *)(v4 + 44) = Function_2248c08(
                           (int)&v30,
                           **(ushort **)(v4 + 56),
                           **(ushort **)(v4 + 60),
                           4u,
                           (int)Function_2028a10,
                           v5,
                           1);
  Function_201a954(v4 + 8, v20);
  Function_201a954(v4 + 24, v21);
  v25 = Function_206a780(4u, v22, v23, v24);
  *(uint *)(v4 + 4) = v25;
  Function_206a8a0((int)v25, 200, 26, 134);
  Function_206a8c4(*(uint *)(v4 + 4), 0, 0);
  Function_206a8c4(*(uint *)(v4 + 4), 1u, 0);
  result = 1;
  *(uchar *)(v4 + 66) = 1;
  return result;
}

//----- (02254958) --------------------------------------------------------
uint __fastcall Function_2254958(int a1)
{
  int v1;
  uint *v2;

  v1 = a1;
  v2 = (uint *)Function_22421dc();
  Function_2254044(v2);
  Function_200dc9c(v1 + 24, 1);
  Function_2248ef8(*(uint **)(v1 + 44), *(ushort **)(v1 + 56), *(ushort **)(v1 + 60));
  Function_200dc9c(v1 + 8, 1);
  Function_201c3c0(*(uint *)(v1 + 8), *(uchar *)(v1 + 12));
  Function_201a8fc(v1 + 8);
  Function_201a8fc(v1 + 24);
  Function_2013a3c(*(int **)(v1 + 40));
  return Function_206a844(*(uint *)(v1 + 4));
}

//----- (022549A8) --------------------------------------------------------
uint __fastcall Function_22549a8(uint result, int a2, uint a3, uint a4)
{
  uint v4;
  uint v5;
  uint v6;
  int v7;

  v4 = a3;
  v5 = a4;
  v6 = result;
  v7 = a2;
  if ( a3 > a4 )
  {
    if ( a2 )
      Function_206a8c4(result, 0, 1);
    else
      Function_206a8c4(result, 0, 0);
    if ( v4 == v7 + v5 )
      result = Function_206a8c4(v6, 1u, 0);
    else
      result = Function_206a8c4(v6, 1u, 1);
  }
  return result;
}

//----- (022549EC) --------------------------------------------------------
int __fastcall Function_22549ec(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = *(ushort *)(a1 + 64);
  Function_20014d0(*(uint *)(a1 + 40), (ushort *)(a1 + 64));
  result = *(ushort *)(v1 + 64);
  if ( v2 != result )
    result = Function_2005748(0x5DCu);
  return result;
}

//----- (02254A14) --------------------------------------------------------
int __fastcall Function_2254a14(uint *a1, int a2, uint *a3)
{
  int v3;
  uint *v4;
  uint *v5;
  int v6;
  int result;
  int v8;
  int v9;
  int v10;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( !a2 )
    ErrorHandler();
  v5[21] = Function_20573fc(v3);
  v5[22] = Function_205740c(v3);
  v8 = (v5[21] << 15) + 0x100000;
  v9 = 4096;
  v10 = (v5[22] << 15) + 851968;
  v6 = Function_2255e14(v4, v3);
  v5[19] = ((int (__fastcall *)(uint, uint, int, int *, uint, uint))dword_21E19CC[0])(
             v4[41],
             v4[12],
             v6,
             &v8,
             0,
             v4[20]);
  v5[15] = 16;
  v5[16] = 13;
  v5[17] = v5[21] + 15;
  result = v5[22] + 12;
  v5[18] = result;
  v5[20] = v3;
  return result;
}

//----- (02254AA4) --------------------------------------------------------
int __fastcall Function_2254aa4(int a1, int a2)
{
  int v2;
  int v3;
  int *v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int result;
  int v13;

  v2 = a2;
  v3 = 36 * a1;
  if ( !*(uint *)(a2 + 36 * a1 + 92) )
    ErrorHandler();
  v4 = (int *)(v2 + v3 + 96);
  v5 = (int *)(v2 + 60);
  v6 = *v4;
  v7 = v4[1];
  v4 += 2;
  *v5 = v6;
  v5[1] = v7;
  v5 += 2;
  v8 = *v4;
  v9 = v4[1];
  v4 += 2;
  *v5 = v8;
  v5[1] = v9;
  v5 += 2;
  v10 = *v4;
  v11 = v4[1];
  v4 += 2;
  *v5 = v10;
  v5[1] = v11;
  v5 += 2;
  result = *v4;
  v13 = v4[1];
  *v5 = *v4;
  v5[1] = v13;
  return result;
}

//----- (02254AD4) --------------------------------------------------------
int __fastcall Function_2254ad4(int a1)
{
  int v1;
  int v2;
  uint *v3;
  int v4;
  uint v5;
  uint v6;
  int result;

  v1 = a1;
  v2 = LoadOverWorldDataAdress(a1);
  v3 = (uint *)GetUnknownStruct01_c(v1);
  v4 = (int)v3;
  v5 = *v3;
  if ( v5 <= 0xA )
    JUMPOUT(__CS__, *((short *)&off_2254AFC + v5) + 35998462);
  switch ( (uchar)v5 )
  {
    case 0:
      Function_2017dd4(4, 8);
      *(uint *)(v4 + 1284) = Function_22542cc();
      Function_22542d8(*(uint *)(v4 + 1284), v2, v4 + 1304, v4 + 1308);
      *(uint *)(v4 + 1288) = Function_2254588();
      Function_2254594(*(uint *)(v4 + 1288), v2, v4 + 1306, v4 + 1310);
      Function_2255c78(v2, v4, v4 + 92);
      Function_2255d78(v2, v4 + 92);
      Function_2255ebc(1, v4);
      goto LABEL_19;
    case 1:
      Function_200f174(1u, 41, 41, 0, 6, 1, 4);
      Function_2255ebc(2, v4);
      goto LABEL_19;
    case 2:
      if ( Function_200f2ac() )
        Function_2255ebc(3, v4);
      goto LABEL_19;
    case 3:
      Function_2050944(v1, (int)Function_2254c84, v4);
      goto LABEL_19;
    case 4:
      Function_2050944(v1, (int)Function_2254df8, v4);
      goto LABEL_19;
    case 5:
      Function_2050944(v1, (int)Function_2255100, v4);
      goto LABEL_19;
    case 6:
      Function_2050944(v1, (int)Function_2255580, v4);
      goto LABEL_19;
    case 7:
      Function_2050944(v1, (int)Function_2255850, v4);
      goto LABEL_19;
    case 8:
      if ( !Function_201d724(*(uint *)(v4 + 8) & 0xFF) )
      {
        v6 = *(uchar *)(v4 + 1312);
        *(uchar *)(v4 + 1312) = v6 + 1;
        if ( v6 >= 0x1E )
        {
          Function_224d3b0();
          Function_2255ebc(3, v4);
        }
      }
      goto LABEL_19;
    case 9:
      Function_2005748(0x60Eu);
      Function_200f174(2u, 40, 40, 0, 6, 1, 4);
      Function_2255ebc(10, v4);
      goto LABEL_19;
    case 0xA:
      if ( !Function_200f2ac() )
        goto LABEL_19;
      Function_22545d0(*(uint *)(v4 + 1288));
      Function_225430c(*(uint *)(v4 + 1284));
      ((void (__fastcall *)(uint))dword_21D1BEC[0])(*(uint *)(v4 + 1292));
      free(v4);
      result = 1;
      break;
    default:
LABEL_19:
      result = 0;
      break;
  }
  return result;
}

//----- (02254C84) --------------------------------------------------------
int __fastcall Function_2254c84(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  uint v6;
  int v7;
  int result;

  v1 = a1;
  v2 = LoadOverWorldDataAdress(a1);
  v3 = GetUnknownStruct01_c(v1);
  if ( !Function_2254318(*(uint *)(v3 + 1284)) )
    return 0;
  v4 = Function_2254314(*(uint *)(v3 + 1284));
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      Function_2255f04(16, 13, *(uint *)(v3 + 1276));
      Function_2255ebc(5, v3);
      result = 1;
    }
    else
    {
      if ( v4 == 2 )
      {
        Function_2255f04(16, 13, *(uint *)(v3 + 1276));
        Function_2255ebc(6, v3);
      }
      else
      {
        Function_2255ddc(v2, v3 + 92);
        Function_2255ebc(9, v3);
      }
      result = 1;
    }
  }
  else
  {
    v5 = LoadVariableAreaAdress_c(*(uint *)(v2 + 12));
    if ( Function_20289a0(v5) )
    {
      v6 = *(uchar *)(v3 + 1313);
      if ( v6 <= 0xF )
      {
        v7 = *(uchar *)(v3 + 1316);
        if ( (int)(v6 + 1) <= v7 )
        {
          Function_22545c4(*(uint *)(v3 + 1288), v6, v7);
          Function_2255ebc(4, v3);
        }
        else
        {
          *(uint *)(v3 + 8) = Function_224d39c(20);
          *(uchar *)(v3 + 1312) = 0;
          Function_2255ebc(8, v3);
        }
        result = 1;
      }
      else
      {
        *(uint *)(v3 + 8) = Function_224d39c(20);
        *(uchar *)(v3 + 1312) = 0;
        Function_2255ebc(8, v3);
        result = 1;
      }
    }
    else
    {
      *(uint *)(v3 + 8) = Function_224d39c(19);
      *(uchar *)(v3 + 1312) = 0;
      Function_2255ebc(8, v3);
      result = 1;
    }
  }
  return result;
}

//----- (02254D98) --------------------------------------------------------
uint *__fastcall Function_2254d98(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = a1;
  v4 = malloc2(0xBu, 1320);
  MI_CpuFill8((ushort *)v4, 0, 0x528u);
  Function_2255ebc(0, v4);
  *(uint *)(v4 + 1280) = v3;
  *(uint *)(v4 + 1292) = ((int (__fastcall *)(uint, int *))dword_21D1B6C[0])(
                             *(uint *)(*(uint *)(v3 + 4) + 4),
                             &dword_2256B88);
  *(uint *)(v4 + 1276) = ((int (__fastcall *)(uint))dword_21D1C2C[0])(*(uint *)(v4 + 1292));
  return Function_2050944(v2, (int)Function_2254ad4, v4);
}

//----- (02254DF8) --------------------------------------------------------
int __fastcall Function_2254df8(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint *v6;
  int v7;
  int v8;
  int v9;
  int result;
  int v11;
  int v12;
  int v13;
  uint *v14;
  int v15;
  uint *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  uint v22;
  uint v23;
  uint v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;

  v35 = a4;
  v5 = a1;
  v6 = (uint *)LoadOverWorldDataAdress(a1);
  v7 = GetUnknownStruct01_c(v5);
  switch ( (uchar)*(uint *)(v7 + 4) )
  {
    case 0u:
      if ( !Function_22545dc(*(uint *)(v7 + 1288)) )
        return 0;
      v8 = LoadVariableAreaAdress_c(*(uint *)(*(uint *)(v7 + 1280) + 12));
      v9 = Function_22545d8(*(uint *)(v7 + 1288));
      if ( v9 != -2 )
      {
        v26 = Function_20289b8(v8, v9);
        if ( v26 )
        {
          if ( Function_2028afc(v8, v9) )
          {
            *(uint *)(v7 + 8) = Function_224d39c(21);
            *(uchar *)(v7 + 1312) = 0;
            *(uint *)(v7 + 4) = 5;
          }
          else
          {
            Function_2254a14(v6, v26, (uint *)v7);
            *(uint *)(v7 + 4) = 1;
          }
        }
        else
        {
          ErrorHandler();
        }
        return 0;
      }
      Function_2255ebc(3, v7);
      return 1;
    case 1u:
      Function_2256228(v7 + 1244);
      Function_225623c(*(uint *)(v7 + 76), 4, v7 + 1244);
      *(uint *)(v7 + 4) = 2;
      return 0;
    case 2u:
      Function_225624c(v6, v7 + 1244);
      if ( Function_2256098(v7, v6, &v27) )
        goto LABEL_28;
      v11 = *(uint *)(v7 + 64);
      v31 = *(uint *)(v7 + 60);
      v32 = v11;
      v12 = *(uint *)(v7 + 72);
      v33 = *(uint *)(v7 + 68);
      v34 = v12;
      v13 = 1;
      if ( dword_21BF6C8 & 0x20 )
      {
        v4 = 0;
        v25 = -65536;
        --v31;
        --v33;
      }
      else if ( dword_21BF6C8 & 0x10 )
      {
        v25 = 0x10000;
        v4 = 0;
        ++v31;
        ++v33;
      }
      else if ( dword_21BF6C8 & 0x40 )
      {
        v25 = 0;
        v4 = -65536;
        --v32;
        --v34;
      }
      else if ( dword_21BF6C8 & 0x80 )
      {
        v25 = 0;
        v4 = 0x10000;
        ++v32;
        ++v34;
      }
      else
      {
        v13 = 0;
      }
      if ( v13 && !Function_2255b58(&v31) )
      {
        v14 = (uint *)(v7 + 60);
        v15 = v32;
        *v14 = v31;
        v14[1] = v15;
        v16 = (uint *)(v7 + 68);
        v17 = v34;
        *v16 = v33;
        v16[1] = v17;
        v18 = ((int (__fastcall *)(uint, uint, int, int *))dword_21E18E0[0])(
                v6[41],
                *(uint *)(v7 + 76),
                v7 + 76,
                &v35);
        ((void (__fastcall *)(int *, int))dword_21E1894[0])(&v28, v18);
        v28 += v25;
        v30 += v4;
        v29 = 4096;
        ((void (__fastcall *)(int, int *))dword_21E18A4[0])(v18, &v28);
      }
      if ( dword_21BF6C4 & 1 )
      {
        v27 = 1;
      }
      else if ( dword_21BF6C4 & 2 )
      {
        ((void (__fastcall *)(uint *, uint))Function_2254a94[0])(v6, *(uint *)(v7 + 76));
        result = 0;
        *(uint *)(v7 + 4) = 0;
        return result;
      }
LABEL_28:
      if ( v27 )
      {
        if ( Function_2255a98(v7 + 60, v7 + 92) )
        {
          v19 = LoadVariableAreaAdress_c(*(uint *)(*(uint *)(v7 + 1280) + 12));
          v20 = Function_2255b78(v7 + 60, v7 + 92);
          v21 = Function_22545d8(*(uint *)(v7 + 1288));
          Function_2028acc(v19, v21, v20);
          Function_2005748(0x5FEu);
          Function_224d3bc(*(uint *)(v7 + 80));
          *(uint *)(v7 + 8) = Function_224d39c(11);
          Function_225628c(v6, v7 + 1244);
          ++*(uchar *)(v7 + 1313);
          *(uchar *)(v7 + 1312) = 0;
          *(uint *)(v7 + 4) = 4;
        }
        else
        {
          Function_2005748(0x602u);
          *(uint *)(v7 + 8) = Function_224d39c(12);
          *(uchar *)(v7 + 1312) = 0;
          *(uint *)(v7 + 4) = 3;
        }
      }
      return 0;
    case 3u:
      if ( !Function_201d724(*(uint *)(v7 + 8) & 0xFF) )
      {
        v22 = *(uchar *)(v7 + 1312);
        *(uchar *)(v7 + 1312) = v22 + 1;
        if ( v22 >= 0x1E )
        {
          Function_224d3b0();
          *(uint *)(v7 + 4) = 2;
        }
      }
      return 0;
    case 4u:
      if ( Function_201d724(*(uint *)(v7 + 8) & 0xFF) )
        return 0;
      v23 = *(uchar *)(v7 + 1312);
      *(uchar *)(v7 + 1312) = v23 + 1;
      if ( v23 < 0x1E )
        return 0;
      Function_224d3b0();
      Function_2255ebc(3, v7);
      return 1;
    case 5u:
      if ( !Function_201d724(*(uint *)(v7 + 8) & 0xFF) )
      {
        v24 = *(uchar *)(v7 + 1312);
        *(uchar *)(v7 + 1312) = v24 + 1;
        if ( v24 >= 0x1E )
        {
          Function_224d3b0();
          *(uint *)(v7 + 4) = 0;
        }
      }
      return 0;
    default:
      return 0;
  }
}

//----- (02255100) --------------------------------------------------------
int __fastcall Function_2255100(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  uint v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int result;
  int v11;
  int v12;
  int v13;
  uint v14;
  int v15;
  uint v16;
  uint v17;
  uint v18;
  int v19;
  int v20;
  uint v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;

  v1 = a1;
  v2 = LoadOverWorldDataAdress(a1);
  v3 = GetUnknownStruct01_c(v1);
  v4 = v3;
  v5 = *(uint *)(v3 + 4);
  if ( v5 <= 6 )
    JUMPOUT(__CS__, *((short *)&off_2255128 + v5) + 36000042);
  switch ( (uchar)v5 )
  {
    case 0:
      Function_2256228(v4 + 1244);
      Function_2255efc(*(uint *)(v4 + 1276));
      if ( Function_2255b14(
             *(uint *)(*(uint *)(v4 + 1276) + 100),
             *(uint *)(*(uint *)(v4 + 1276) + 104),
             v4 + 92,
             &v25) )
      {
        Function_225623c(*(uint *)(v4 + 36 * v25 + 112), 8, v4 + 1244);
      }
      *(uint *)(v4 + 4) = 1;
      goto LABEL_68;
    case 1:
      Function_225624c(v2, v4 + 1244);
      v6 = Function_2256104(v4, v2, &v26);
      v27 = *(uint *)(*(uint *)(v4 + 1276) + 100);
      v29 = *(uint *)(*(uint *)(v4 + 1276) + 100);
      v28 = *(uint *)(*(uint *)(v4 + 1276) + 104);
      v30 = *(uint *)(*(uint *)(v4 + 1276) + 104);
      v7 = *(uint *)(v4 + 1276);
      v8 = *(uint *)(v7 + 88);
      v9 = *(uint *)(v7 + 96);
      if ( v6 )
        goto LABEL_20;
      if ( dword_21BF6C8 & 0x20 )
      {
        Function_2005748(0x5E5u);
        v8 -= 0x10000;
        --v27;
        --v29;
      }
      else if ( dword_21BF6C8 & 0x10 )
      {
        Function_2005748(0x5E5u);
        v8 += 0x10000;
        ++v27;
        ++v29;
      }
      else if ( dword_21BF6C8 & 0x40 )
      {
        Function_2005748(0x5E5u);
        v9 -= 0x10000;
        --v28;
        --v30;
      }
      else if ( dword_21BF6C8 & 0x80 )
      {
        Function_2005748(0x5E5u);
        v9 += 0x10000;
        ++v28;
        ++v30;
      }
      if ( dword_21BF6C4 & 1 )
      {
        v26 = 1;
      }
      else if ( dword_21BF6C4 & 2 )
      {
        Function_2255f20(*(uint *)(v4 + 1276));
        Function_225628c(v2, v4 + 1244);
        Function_2255ebc(3, v4);
        return 1;
      }
LABEL_20:
      if ( v22 && !Function_2255b58(&v27) )
      {
        *(uint *)(*(uint *)(v4 + 1276) + 88) = v8;
        *(uint *)(*(uint *)(v4 + 1276) + 96) = v9;
        *(uint *)(*(uint *)(v4 + 1276) + 100) = v27;
        *(uint *)(*(uint *)(v4 + 1276) + 104) = v28;
        if ( Function_2255b14(
               *(uint *)(*(uint *)(v4 + 1276) + 100),
               *(uint *)(*(uint *)(v4 + 1276) + 104),
               v4 + 92,
               &v24) )
        {
          v11 = Function_22562a8(v4 + 1244);
          if ( v11 != *(uint *)(v4 + 36 * v24 + 112) )
          {
            Function_225628c(v2, v4 + 1244);
            Function_225623c(*(uint *)(v4 + 36 * v24 + 112), 8, v4 + 1244);
          }
        }
        else
        {
          Function_225628c(v2, v4 + 1244);
          Function_2256228(v4 + 1244);
        }
      }
      if ( !v26 )
        goto LABEL_68;
      if ( *(uint *)(*(uint *)(v4 + 1276) + 100) >= 32 )
        ErrorHandler();
      if ( *(uint *)(*(uint *)(v4 + 1276) + 104) >= 32 )
        ErrorHandler();
      if ( !Function_2255b14(
              *(uint *)(*(uint *)(v4 + 1276) + 100),
              *(uint *)(*(uint *)(v4 + 1276) + 104),
              v4 + 92,
              &v23) )
        goto LABEL_68;
      if ( v23 )
      {
        Function_224d3bc(*(uint *)(v4 + 36 * v23 + 116));
        if ( *(uint *)(v4 + 36 * v23 + 116) == 6 )
        {
          v12 = *(uchar *)(v4 + 1315);
          if ( v12 == 16 )
          {
            *(uint *)(v4 + 8) = Function_224d39c(15);
            *(uchar *)(v4 + 1312) = 0;
            *(uint *)(v4 + 4) = 4;
            goto LABEL_68;
          }
          if ( *(uchar *)(v4 + 1314) - 1 < v12 )
          {
            *(uint *)(v4 + 8) = Function_224d39c(18);
            *(uchar *)(v4 + 1312) = 0;
            *(uint *)(v4 + 4) = 4;
            goto LABEL_68;
          }
          Function_2005748(0x640u);
          *(uint *)(v4 + 8) = Function_224d39c(14);
          if ( !*(uchar *)(v4 + 1314) )
            ErrorHandler();
          --*(uchar *)(v4 + 1314);
          *(uchar *)(v4 + 1312) = 0;
          *(uint *)(v4 + 4) = 2;
        }
        else
        {
          v13 = LoadVariableAreaAdress_c(*(uint *)(*(uint *)(v4 + 1280) + 12));
          Function_2005748(0x5EBu);
          Function_2028b20(v13, v23);
          *(uint *)(v4 + 8) = Function_224d39c(13);
          if ( !*(uchar *)(v4 + 1313) )
            ErrorHandler();
          --*(uchar *)(v4 + 1313);
          *(uchar *)(v4 + 1312) = 0;
          *(uint *)(v4 + 4) = 3;
        }
        ((void (__fastcall *)(int, uint))Function_2254a94[0])(v2, *(uint *)(v4 + 36 * v23 + 112));
        Function_2255bf4(v23, v4 + 92);
        Function_2255f20(*(uint *)(v4 + 1276));
        *(uchar *)(v4 + 1312) = 0;
      }
      else
      {
        *(uint *)(v4 + 8) = Function_224d39c(22);
        *(uchar *)(v4 + 1312) = 0;
        *(uint *)(v4 + 4) = 4;
      }
      goto LABEL_68;
    case 2:
      if ( Function_201d724(*(uint *)(v4 + 8) & 0xFF) )
        goto LABEL_68;
      v14 = *(uchar *)(v4 + 1312);
      *(uchar *)(v4 + 1312) = v14 + 1;
      if ( v14 < 0x1E )
        goto LABEL_68;
      Function_224d3b0();
      v15 = *(uchar *)(v4 + 1314) - *(uchar *)(v4 + 1315);
      if ( v15 < 0 )
        ErrorHandler();
      if ( v15 )
      {
        *(uchar *)(v4 + 1312) = 0;
        *(uint *)(v4 + 4) = 5;
LABEL_68:
        result = 0;
      }
      else
      {
        Function_2255ebc(3, v4);
        result = 1;
      }
      return result;
    case 3:
      if ( Function_201d724(*(uint *)(v4 + 8) & 0xFF) )
        goto LABEL_68;
      v16 = *(uchar *)(v4 + 1312);
      *(uchar *)(v4 + 1312) = v16 + 1;
      if ( v16 < 0x1E )
        goto LABEL_68;
      Function_224d3b0();
      *(uint *)(v4 + 4) = 0;
      return 1;
    case 4:
      if ( !Function_201d724(*(uint *)(v4 + 8) & 0xFF) )
      {
        v17 = *(uchar *)(v4 + 1312);
        *(uchar *)(v4 + 1312) = v17 + 1;
        if ( v17 >= 0x1E )
        {
          Function_224d3b0();
          *(uint *)(v4 + 4) = 1;
        }
      }
      goto LABEL_68;
    case 5:
      v18 = *(uchar *)(v4 + 1312);
      *(uchar *)(v4 + 1312) = v18 + 1;
      if ( v18 >= 0xA )
      {
        v19 = *(uchar *)(v4 + 1314) - *(uchar *)(v4 + 1315);
        Function_224d3d0(v19, 0);
        if ( v19 == 1 )
          v20 = Function_224d39c(17);
        else
          v20 = Function_224d39c(25);
        *(uint *)(v4 + 8) = v20;
        *(uchar *)(v4 + 1312) = 0;
        *(uint *)(v4 + 4) = 6;
      }
      goto LABEL_68;
    case 6:
      if ( Function_201d724(*(uint *)(v4 + 8) & 0xFF) )
        goto LABEL_68;
      v21 = *(uchar *)(v4 + 1312);
      *(uchar *)(v4 + 1312) = v21 + 1;
      if ( v21 < 0x1E )
        goto LABEL_68;
      Function_224d3b0();
      Function_2255ebc(3, v4);
      return 1;
    default:
      goto LABEL_68;
  }
}

//----- (02255580) --------------------------------------------------------
int __fastcall Function_2255580(int a1)
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

  v1 = a1;
  v2 = LoadOverWorldDataAdress(a1);
  v3 = GetUnknownStruct01_c(v1);
  v4 = v3;
  v5 = *(uint *)(v3 + 4);
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      v13 = 1;
      Function_225624c(v2, v4 + 1244);
      v6 = Function_2256174(v4, v2, &v17);
      v18 = *(uint *)(*(uint *)(v4 + 1276) + 100);
      v20 = *(uint *)(*(uint *)(v4 + 1276) + 100);
      v19 = *(uint *)(*(uint *)(v4 + 1276) + 104);
      v21 = *(uint *)(*(uint *)(v4 + 1276) + 104);
      v7 = *(uint *)(v4 + 1276);
      v8 = *(uint *)(v7 + 88);
      v9 = *(uint *)(v7 + 96);
      if ( !v6 )
      {
        if ( dword_21BF6C8 & 0x20 )
        {
          Function_2005748(0x5E5u);
          v8 -= 0x10000;
          --v18;
          --v20;
        }
        else if ( dword_21BF6C8 & 0x10 )
        {
          Function_2005748(0x5E5u);
          v8 += 0x10000;
          ++v18;
          ++v20;
        }
        else if ( dword_21BF6C8 & 0x40 )
        {
          Function_2005748(0x5E5u);
          v9 -= 0x10000;
          --v19;
          --v21;
        }
        else if ( dword_21BF6C8 & 0x80 )
        {
          Function_2005748(0x5E5u);
          v9 += 0x10000;
          ++v19;
          ++v21;
        }
        else
        {
          v13 = 0;
        }
        if ( dword_21BF6C4 & 1 )
        {
          v17 = 1;
        }
        else if ( dword_21BF6C4 & 2 )
        {
          Function_2255f20(*(uint *)(v4 + 1276));
          Function_225628c(v2, v4 + 1244);
          Function_2255ebc(3, v4);
          return 1;
        }
      }
      if ( v13 && !Function_2255b58(&v18) )
      {
        *(uint *)(*(uint *)(v4 + 1276) + 88) = v8;
        *(uint *)(*(uint *)(v4 + 1276) + 96) = v9;
        *(uint *)(*(uint *)(v4 + 1276) + 100) = v18;
        *(uint *)(*(uint *)(v4 + 1276) + 104) = v19;
        if ( Function_2255b14(
               *(uint *)(*(uint *)(v4 + 1276) + 100),
               *(uint *)(*(uint *)(v4 + 1276) + 104),
               v4 + 92,
               &v15) )
        {
          v11 = Function_22562a8(v4 + 1244);
          if ( v11 != *(uint *)(v4 + 36 * v15 + 112) )
          {
            Function_225628c(v2, v4 + 1244);
            Function_225623c(*(uint *)(v4 + 36 * v15 + 112), 8, v4 + 1244);
          }
        }
        else
        {
          Function_225628c(v2, v4 + 1244);
          Function_2256228(v4 + 1244);
        }
      }
      if ( v17 )
      {
        if ( *(uint *)(*(uint *)(v4 + 1276) + 100) >= 32 )
          ErrorHandler();
        if ( *(uint *)(*(uint *)(v4 + 1276) + 104) >= 32 )
          ErrorHandler();
        if ( Function_2255b14(
               *(uint *)(*(uint *)(v4 + 1276) + 100),
               *(uint *)(*(uint *)(v4 + 1276) + 104),
               v4 + 92,
               &v14) )
        {
          if ( v14 )
          {
            if ( *(uint *)(v4 + 36 * v14 + 116) != 6 )
            {
              Function_2254aa4(v14, v4);
              Function_2255e2c(v14, v4);
              Function_2255bf4(v14, v4 + 92);
              Function_2005748(0x5EBu);
              Function_2255f20(*(uint *)(v4 + 1276));
              Function_2255ebc(7, v4);
              return 1;
            }
            *(uint *)(v4 + 8) = Function_224d39c(16);
            *(uchar *)(v4 + 1312) = 0;
            *(uint *)(v4 + 4) = 2;
          }
          else
          {
            *(uint *)(v4 + 8) = Function_224d39c(23);
            *(uchar *)(v4 + 1312) = 0;
            *(uint *)(v4 + 4) = 2;
          }
        }
      }
    }
    else if ( v5 == 2 && !Function_201d724(*(uint *)(v4 + 8) & 0xFF) )
    {
      v12 = *(uchar *)(v4 + 1312);
      *(uchar *)(v4 + 1312) = v12 + 1;
      if ( v12 >= 0x1E )
      {
        Function_224d3b0();
        *(uint *)(v4 + 4) = 1;
      }
    }
  }
  else
  {
    Function_2256228(v4 + 1244);
    Function_2255efc(*(uint *)(v4 + 1276));
    if ( Function_2255b14(
           *(uint *)(*(uint *)(v4 + 1276) + 100),
           *(uint *)(*(uint *)(v4 + 1276) + 104),
           v4 + 92,
           &v16) )
    {
      Function_225623c(*(uint *)(v4 + 36 * v16 + 112), 8, v4 + 1244);
    }
    *(uint *)(v4 + 4) = 1;
  }
  return 0;
}

//----- (02255850) --------------------------------------------------------
int __fastcall Function_2255850(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  uint v6;
  int v7;
  int v8;
  int v9;
  uint *v10;
  int v11;
  uint *v12;
  int v13;
  int v14;
  uint v16;
  uint v17;
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

  v3 = a1;
  v19 = LoadOverWorldDataAdress(a1);
  v4 = GetUnknownStruct01_c(v3);
  v5 = v4;
  v6 = *(uint *)(v4 + 4);
  if ( v6 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_2255878 + v6) + 36001914);
  switch ( (uchar)v6 )
  {
    case 0:
      Function_2256228(v5 + 1244);
      Function_225623c(*(uint *)(v5 + 76), 4, v5 + 1244);
      *(uint *)(v5 + 4) = 1;
      return 0;
    case 1:
      Function_225624c(v19, v5 + 1244);
      if ( Function_22561bc(v5, v19, &v20) )
        goto LABEL_22;
      v7 = *(uint *)(v5 + 64);
      v24 = *(uint *)(v5 + 60);
      v25 = v7;
      v8 = *(uint *)(v5 + 72);
      v26 = *(uint *)(v5 + 68);
      v27 = v8;
      v9 = 1;
      if ( dword_21BF6C8 & 0x20 )
      {
        v2 = -65536;
        --v24;
        v1 = 0;
        --v26;
      }
      else if ( dword_21BF6C8 & 0x10 )
      {
        v2 = 0x10000;
        ++v24;
        v1 = 0;
        ++v26;
      }
      else if ( dword_21BF6C8 & 0x40 )
      {
        v2 = 0;
        --v25;
        v1 = -65536;
        --v27;
      }
      else if ( dword_21BF6C8 & 0x80 )
      {
        v2 = 0;
        ++v25;
        v1 = 0x10000;
        ++v27;
      }
      else
      {
        v9 = 0;
      }
      if ( v9 && !Function_2255b58(&v24) )
      {
        v10 = (uint *)(v5 + 60);
        v11 = v25;
        *v10 = v24;
        v10[1] = v11;
        v12 = (uint *)(v5 + 68);
        v13 = v27;
        *v12 = v26;
        v12[1] = v13;
        v14 = ((int (__fastcall *)(uint, uint, int, int *))dword_21E18E0[0])(
                *(uint *)(v19 + 164),
                *(uint *)(v5 + 76),
                v5 + 76,
                &v28);
        ((void (__fastcall *)(int *, int))dword_21E1894[0])(&v21, v14);
        v21 += v2;
        v23 += v1;
        v22 = 4096;
        ((void (__fastcall *)(int, int *))dword_21E18A4[0])(v14, &v21);
      }
      if ( dword_21BF6C4 & 1 )
      {
        v20 = 1;
      }
      else if ( dword_21BF6C4 & 2 )
      {
        Function_2255bb8(v5 + 28, *(uint *)(v5 + 12), v5 + 92);
        Function_2255e8c(v5);
        Function_225628c(v19, v5 + 1244);
        Function_2255ebc(6, v5);
        return 1;
      }
LABEL_22:
      if ( v18 )
      {
        if ( Function_2255a98(v5 + 60, v5 + 92) )
        {
          Function_2255bb8(v5 + 60, *(uint *)(v5 + 12), v5 + 92);
          Function_2005748(0x5FEu);
          Function_2255f04(*(uint *)(v5 + 60), *(uint *)(v5 + 64), *(uint *)(v5 + 1276));
          Function_225628c(v19, v5 + 1244);
          *(uchar *)(v5 + 1312) = 0;
          *(uint *)(v5 + 4) = 3;
        }
        else
        {
          Function_2005748(0x602u);
          *(uint *)(v5 + 8) = Function_224d39c(12);
          *(uchar *)(v5 + 1312) = 0;
          *(uint *)(v5 + 4) = 2;
        }
      }
      return 0;
    case 2:
      if ( !Function_201d724(*(uint *)(v5 + 8) & 0xFF) )
      {
        v16 = *(uchar *)(v5 + 1312);
        *(uchar *)(v5 + 1312) = v16 + 1;
        if ( v16 >= 0x1E )
        {
          Function_224d3b0();
          *(uint *)(v5 + 4) = 1;
        }
      }
      return 0;
    case 3:
      if ( Function_201d724(*(uint *)(v5 + 8) & 0xFF) )
        return 0;
      v17 = *(uchar *)(v5 + 1312);
      *(uchar *)(v5 + 1312) = v17 + 1;
      if ( v17 < 0x1E )
        return 0;
      Function_224d3b0();
      Function_2255ebc(6, v5);
      return 1;
    default:
      return 0;
  }
}

//----- (02255A98) --------------------------------------------------------
BOOL __fastcall Function_2255a98(int a1, uint *a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  uint *v7;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;

  v17 = a4;
  v4 = a2;
  v5 = a1;
  v6 = 0;
  v7 = a2;
  do
  {
    if ( *v4 == 1 && Function_2255c30(v7 + 1, v5) )
      return 0;
    ++v6;
    v4 += 9;
    v7 += 9;
  }
  while ( v6 < 32 );
  v13 = 15;
  v14 = 13;
  v15 = 16;
  v16 = 13;
  if ( Function_2255c30(v5, &v13) )
    return 0;
  v9 = 15;
  v10 = 23;
  v11 = 15;
  v12 = 23;
  return Function_2255c30(v5, &v9) == 0;
}

//----- (02255B14) --------------------------------------------------------
int __fastcall Function_2255b14(int a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v9;
  int *v10;

  v4 = (uint *)a3;
  v5 = a1;
  v9 = a2;
  v10 = (int *)a4;
  v6 = 0;
  v7 = a3;
  do
  {
    if ( *v4 == 1 && Function_2255c58(v7 + 4, v5, v9) )
    {
      *v10 = v6;
      return 1;
    }
    ++v6;
    v4 += 9;
    v7 += 36;
  }
  while ( v6 < 32 );
  *v10 = 32;
  return 0;
}

//----- (02255B58) --------------------------------------------------------
BOOL __fastcall Function_2255b58(uint *a1)
{
  return *a1 < 10 || a1[2] > 21 || a1[1] < 12 || a1[3] > 23;
}

//----- (02255B78) --------------------------------------------------------
int __fastcall Function_2255b78(uint *a1, uint *a2)
{
  int v2;
  uint *v3;
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v2 = 0;
  v3 = a2;
  do
  {
    if ( !*v3 )
    {
      a2[9 * v2] = 1;
      v4 = &a2[9 * v2 + 1];
      v5 = a1[1];
      *v4 = *a1;
      v4[1] = v5;
      v4 += 2;
      v6 = a1[3];
      *v4 = a1[2];
      v4[1] = v6;
      v4 += 2;
      v7 = a1[5];
      *v4 = a1[4];
      v4[1] = v7;
      v4 += 2;
      v8 = a1[7];
      *v4 = a1[6];
      v4[1] = v8;
      return v2;
    }
    ++v2;
    v3 += 9;
  }
  while ( v2 < 32 );
  ErrorHandler();
  return 0;
}

//----- (02255BB8) --------------------------------------------------------
int __fastcall Function_2255bb8(int *a1, int a2, int a3)
{
  int v3;
  int *v4;
  int v5;
  int v6;
  uint *v7;
  int v8;
  int *v9;
  int v10;
  uint *v11;
  int v12;
  int v13;
  uint *v14;
  int v15;
  int v16;
  int *v17;
  int result;
  int v19;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( a2 >= 32 )
    ErrorHandler();
  v6 = 36 * v3;
  if ( *(uint *)(v5 + 36 * v3) )
    ErrorHandler();
  *(uint *)(v5 + v6) = 1;
  v7 = (uint *)(v5 + v6 + 4);
  v8 = *v4;
  v10 = v4[1];
  v9 = v4 + 2;
  *v7 = v8;
  v7[1] = v10;
  v11 = (uint *)(v5 + v6 + 12);
  v12 = *v9;
  v13 = v9[1];
  v9 += 2;
  *v11 = v12;
  v11[1] = v13;
  v14 = (uint *)(v5 + v6 + 20);
  v15 = *v9;
  v16 = v9[1];
  v9 += 2;
  *v14 = v15;
  v14[1] = v16;
  v17 = (int *)(v5 + v6 + 28);
  result = *v9;
  v19 = v9[1];
  *v17 = *v9;
  v17[1] = v19;
  return result;
}

//----- (02255BF4) --------------------------------------------------------
uint *__fastcall Function_2255bf4(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint *result;

  v2 = a1;
  v3 = a2;
  if ( a1 >= 32 )
    ErrorHandler();
  if ( !v2 )
    ErrorHandler();
  v4 = 36 * v2;
  if ( !*(uint *)(v3 + 36 * v2) )
    ErrorHandler();
  result = (uint *)(v3 + v4);
  result[5] = 0;
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  result[6] = 0;
  *(uint *)(v3 + v4) = 0;
  return result;
}

//----- (02255C30) --------------------------------------------------------
BOOL __fastcall Function_2255c30(uint *a1, uint *a2)
{
  return *a1 <= a2[2] && *a2 <= a1[2] && a1[1] <= a2[3] && a2[1] <= a1[3];
}

//----- (02255C58) --------------------------------------------------------
BOOL __fastcall Function_2255c58(uint *a1, int a2, int a3)
{
  return *a1 <= a2 && a2 <= a1[2] && a1[1] <= a3 && a3 <= a1[3];
}

//----- (02255C78) --------------------------------------------------------
int __fastcall Function_2255c78(int a1, uchar *a2, int a3)
{
  uchar *v3;
  int v4;
  int v5;
  int v6;
  int result;
  int v8;
  int v9;
  int v10;
  int v11;

  v3 = a2;
  v11 = a3;
  v4 = LoadVariableAreaAdress_c_2(*(uint *)(a1 + 12));
  v3[1313] = 0;
  v5 = v4;
  v3[1314] = 0;
  v3[1315] = Function_2029460(v4);
  v6 = 0;
  v3[1316] = Function_202948c(v5);
  do
  {
    result = Function_20293b0(v5, v6);
    v8 = result;
    if ( result )
    {
      if ( result == 6 )
      {
        ++v3[1314];
      }
      else if ( result != 1 && result != 2 && result != 3 && result != 4 && result != 5 )
      {
        ++v3[1313];
      }
      v9 = Function_20293fc(v5, v6);
      v10 = Function_202942c(v5, v6);
      result = Function_2255d1c(v6, v8, v9, v10, v11);
    }
    ++v6;
  }
  while ( v6 < 32 );
  return result;
}

//----- (02255D1C) --------------------------------------------------------
int __fastcall Function_2255d1c(int a1, int a2, int a3, int a4, int a5)
{
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
  int v15;
  int v16;
  uint *v17;
  uint *v18;
  uint *v19;
  int *v20;
  int result;

  v5 = a1;
  v6 = a3;
  v7 = a4;
  v8 = a2;
  v9 = a2;
  v10 = a3;
  v11 = a4;
  v12 = Function_20573fc(a2);
  v13 = Function_205740c(v8);
  v14 = v13;
  v15 = v7 + v13 - 1;
  v16 = a5 + 36 * v5;
  v17 = (uint *)(v16 + 4);
  *v17 = v10;
  v17[1] = v11;
  v18 = (uint *)(v16 + 12);
  *v18 = v6 + v12 - 1;
  v18[1] = v15;
  v19 = (uint *)(v16 + 20);
  *v19 = 0;
  v19[1] = v9;
  v20 = (int *)(v16 + 28);
  *v20 = v12;
  v20[1] = v14;
  result = 1;
  *(uint *)(a5 + 36 * v5) = 1;
  return result;
}

//----- (02255D78) --------------------------------------------------------
int __fastcall Function_2255d78(uint *a1, int *a2)
{
  uint *v2;
  int *v3;
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v2 = a1;
  v3 = a2;
  ((void (__fastcall *)(uint))dword_21E1610[0])(a1[41]);
  v4 = 0;
  do
  {
    result = *v3;
    if ( *v3 )
    {
      v6 = Function_2255e14(v2, v3[6]);
      v7 = v3[8];
      v8 = (v3[1] << 16) + (v3[7] << 15);
      v10 = (v3[2] << 16) + (v7 << 15);
      v9 = 4096;
      result = ((int (__fastcall *)(uint, uint, int, int *, uint, uint, int, int, int))dword_21E19CC[0])(
                 v2[41],
                 v2[12],
                 v6,
                 &v8,
                 0,
                 v2[20],
                 v8,
                 4096,
                 v10);
      v3[5] = result;
    }
    ++v4;
    v3 += 9;
  }
  while ( v4 < 32 );
  return result;
}

//----- (02255DDC) --------------------------------------------------------
uchar *__fastcall Function_2255ddc(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uchar *result;

  v2 = a2;
  v3 = 0;
  v4 = LoadVariableAreaAdress_c_2(*(uint *)(a1 + 12));
  do
  {
    if ( *v2 == 1 )
    {
      v5 = v2[6];
      v6 = v2[1];
      v7 = v2[2];
    }
    else
    {
      LOBYTE(v5) = 0;
      v6 = 0;
      v7 = 0;
    }
    result = Function_2029308(v4, v3++, v5, v6, v7);
    v2 += 9;
  }
  while ( v3 < 32 );
  return result;
}

//----- (02255E14) --------------------------------------------------------
int __fastcall Function_2255e14(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( !a2 )
    ErrorHandler();
  return ((int (__fastcall *)(uint, int))dword_21EFAA0[18])(*(uint *)(v2 + 48), v3);
}

//----- (02255E2C) --------------------------------------------------------
int __fastcall Function_2255e2c(int a1, uint *a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int v6;
  int *v7;
  int v8;
  int v9;
  uint *v10;
  int *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int result;
  int v19;
  char v20;
  int v21;
  int v22;
  int v23;

  v23 = a4;
  v4 = a1;
  v5 = a2;
  v6 = 9 * a1;
  if ( !a2[9 * a1 + 23] )
    ErrorHandler();
  v7 = &v5[v6 + 24];
  v8 = ((int (__fastcall *)(uint, int))dword_21E18E0[0])(*(uint *)(v5[320] + 164), v7[4]);
  ((void (__fastcall *)(char *, int))dword_21E1894[0])(&v20, v8);
  v9 = v21;
  v10 = v5 + 4;
  *v10 = *(uint *)&v20;
  v10[1] = v9;
  v5[6] = v22;
  v5[3] = v4;
  v11 = v5 + 7;
  v12 = *v7;
  v13 = v7[1];
  v7 += 2;
  *v11 = v12;
  v11[1] = v13;
  v11 += 2;
  v14 = *v7;
  v15 = v7[1];
  v7 += 2;
  *v11 = v14;
  v11[1] = v15;
  v11 += 2;
  v16 = *v7;
  v17 = v7[1];
  v7 += 2;
  *v11 = v16;
  v11[1] = v17;
  v11 += 2;
  result = *v7;
  v19 = v7[1];
  *v11 = *v7;
  v11[1] = v19;
  return result;
}

//----- (02255E8C) --------------------------------------------------------
int __fastcall Function_2255e8c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  if ( !*(uint *)(a1 + 36 * *(uint *)(a1 + 12) + 92) )
    ErrorHandler();
  v2 = ((int (__fastcall *)(uint, uint))dword_21E18E0[0])(
         *(uint *)(*(uint *)(v1 + 1280) + 164),
         *(uint *)(v1 + 44));
  return ((int (__fastcall *)(int, int))dword_21E18A4[0])(v2, v1 + 16);
}

//----- (02255EBC) --------------------------------------------------------
int __fastcall Function_2255ebc(int a1, uint *a2)
{
  int result;

  *a2 = a1;
  result = 0;
  a2[1] = 0;
  return result;
}

//----- (02255EC4) --------------------------------------------------------
int __fastcall Function_2255ec4(uint *a1)
{
  uint *v1;
  int result;
  char v3;

  v1 = a1;
  Function_201ca24(4u, "data/ug_base_cur.nsbmd", a1, (int *)&v3, a1 + 21);
  result = 0;
  v1[22] = 0;
  v1[23] = 0;
  v1[24] = 0;
  v1[25] = 0;
  v1[26] = 0;
  v1[27] = 0;
  return result;
}

//----- (02255EF0) --------------------------------------------------------
uint __fastcall Function_2255ef0(int a1)
{
  return free(*(uint *)(a1 + 84));
}

//----- (02255EFC) --------------------------------------------------------
int __fastcall Function_2255efc(int result)
{
  *(uint *)(result + 108) = 1;
  return result;
}

//----- (02255F04) --------------------------------------------------------
int __fastcall Function_2255f04(int a1, int a2, uint *a3)
{
  int result;

  a3[25] = a1;
  a3[26] = a2;
  a3[22] = (a1 << 16) + 0x8000;
  a3[23] = 4096;
  result = (a2 << 16) + 0x8000;
  a3[24] = result;
  return result;
}

//----- (02255F20) --------------------------------------------------------
int __fastcall Function_2255f20(int result)
{
  *(uint *)(result + 108) = 0;
  return result;
}

//----- (02255F28) --------------------------------------------------------
int __fastcall Function_2255f28(int a1, int a2, uint *a3)
{
  int result;

  if ( a1 != 0xFFFF )
    *a3 = a1;
  result = 0xFFFF;
  if ( a2 != 0xFFFF )
    a3[1] = a2;
  return result;
}

//----- (02255F40) --------------------------------------------------------
int __fastcall Function_2255f40(int a1, uint *a2, uint *a3)
{
  uint *v3;
  int v4;
  uint *v5;
  int v6;
  uint v7;
  uint v8;
  uint v9;
  int result;
  int v11;
  uint *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  uint v20;
  int v21;
  uint v22;
  int v23;

  v3 = a2;
  v15 = a1;
  v4 = *(uint *)(a1 + 140);
  v5 = a3;
  Function_2255f28((ushort)word_21BF6D8, (ushort)word_21BF6DA, a3);
  ((void (__fastcall *)(int *, int, int, int))dword_21EAFA4[0])(&v17, *v5 & 0xFFFF, v5[1] & 0xFFFF, v4);
  v16 = v17 / 0x10000;
  v6 = v19 / 0x10000;
  v7 = v3[6];
  v8 = v3[7];
  v9 = ((uint)(v19 / 0x10000) >> 31)
     + __ROR4__((v19 / 0x10000 << 27) - ((uint)(v19 / 0x10000) >> 31), 27);
  v22 = ((uint)(v17 / 0x10000) >> 31)
      + __ROR4__((v17 / 0x10000 << 27) - ((uint)(v17 / 0x10000) >> 31), 27)
      + v7
      - 1;
  v21 = v9;
  v23 = v9 + v8 - 1;
  v20 = ((uint)(v17 / 0x10000) >> 31)
      + __ROR4__((v17 / 0x10000 << 27) - ((uint)(v17 / 0x10000) >> 31), 27);
  result = Function_2255b58(&v20);
  if ( !result )
  {
    v11 = v21;
    *v3 = v20;
    v3[1] = v11;
    v12 = v3 + 2;
    v13 = v23;
    *v12 = v22;
    v12[1] = v13;
    v17 = (v16 << 16) + (v7 << 15);
    v19 = (v6 << 16) + (v8 << 15);
    v18 = 4096;
    v14 = ((int (__fastcall *)(uint, uint))dword_21E18E0[0])(*(uint *)(v15 + 164), v3[4]);
    result = ((int (__fastcall *)(int, int *))dword_21E18A4[0])(v14, &v17);
  }
  return result;
}

//----- (02256000) --------------------------------------------------------
int __fastcall Function_2256000(int a1, uint *a2, uint *a3, int a4)
{
  uint *v4;
  int v5;
  uint *v6;
  int v7;
  int v8;
  int result;
  uint *v10;
  int v11;
  int v12;
  uint v13;
  uint v14;
  uint v15;
  uint v16;
  int v17;

  v17 = a4;
  v4 = a2;
  v5 = *(uint *)(a1 + 140);
  v6 = a3;
  Function_2255f28((ushort)word_21BF6D8, (ushort)word_21BF6DA, a2);
  ((void (__fastcall *)(int *, int, int, int))dword_21EAFA4[0])(&v11, *v4 & 0xFFFF, v4[1] & 0xFFFF, v5);
  v7 = v11 / 0x10000;
  v8 = v12 / 0x10000;
  v13 = ((uint)(v11 / 0x10000) >> 31)
      + __ROR4__((v11 / 0x10000 << 27) - ((uint)(v11 / 0x10000) >> 31), 27);
  v15 = ((uint)(v11 / 0x10000) >> 31)
      + __ROR4__((v11 / 0x10000 << 27) - ((uint)(v11 / 0x10000) >> 31), 27);
  v14 = ((uint)(v12 / 0x10000) >> 31)
      + __ROR4__((v12 / 0x10000 << 27) - ((uint)(v12 / 0x10000) >> 31), 27);
  v16 = ((uint)(v12 / 0x10000) >> 31)
      + __ROR4__((v12 / 0x10000 << 27) - ((uint)(v12 / 0x10000) >> 31), 27);
  result = Function_2255b58(&v13);
  if ( !result )
  {
    v12 = (v8 << 16) + 0x8000;
    v10 = v6 + 22;
    *v10 = (v7 << 16) + 0x8000;
    v10[1] = 4096;
    result = v12;
    v6[24] = v12;
    v6[25] = v7;
    v6[26] = v8;
  }
  return result;
}

//----- (02256098) --------------------------------------------------------
int __fastcall Function_2256098(uint *a1, int a2, uint *a3)
{
  uint *v3;
  int result;

  v3 = a1;
  result = 0;
  *a3 = 0;
  if ( word_21BF6DC )
  {
    if ( !dword_21BF6C0 )
    {
      v3[318] = 1;
      Function_2255f40(a2, v3 + 15, v3 + 316);
    }
    result = 1;
  }
  else if ( word_21BF6DE )
  {
    if ( v3[318] )
      Function_2255f40(a2, v3 + 15, v3 + 316);
    result = 1;
  }
  else if ( v3[318] )
  {
    v3[318] = 0;
    *a3 = 1;
  }
  return result;
}

//----- (02256104) --------------------------------------------------------
int __fastcall Function_2256104(int a1, int a2, uint *a3)
{
  int v3;
  int result;

  v3 = a1;
  result = 0;
  *a3 = 0;
  if ( word_21BF6DC )
  {
    if ( !dword_21BF6C0 )
    {
      *(uint *)(v3 + 1272) = 1;
      Function_2256000(a2, (uint *)(v3 + 1264), *(uint **)(v3 + 1276), v3);
    }
    result = 1;
  }
  else if ( word_21BF6DE )
  {
    if ( *(uint *)(v3 + 1272) )
      Function_2256000(a2, (uint *)(v3 + 1264), *(uint **)(v3 + 1276), v3);
    result = 1;
  }
  else if ( *(uint *)(v3 + 1272) )
  {
    *(uint *)(v3 + 1272) = 0;
    *a3 = 1;
  }
  return result;
}

//----- (02256174) --------------------------------------------------------
int __fastcall Function_2256174(int a1, int a2, uint *a3)
{
  int v3;
  int result;

  v3 = a1;
  result = 0;
  *a3 = 0;
  if ( word_21BF6DC )
  {
    if ( !dword_21BF6C0 )
    {
      *(uint *)(v3 + 1272) = 1;
      *a3 = 1;
      Function_2256000(a2, (uint *)(v3 + 1264), *(uint **)(v3 + 1276), v3);
    }
    result = 1;
  }
  else
  {
    *(uint *)(v3 + 1272) = 0;
  }
  return result;
}

//----- (022561BC) --------------------------------------------------------
int __fastcall Function_22561bc(uint *a1, int a2, uint *a3)
{
  uint *v3;
  int result;

  v3 = a1;
  result = 0;
  *a3 = 0;
  if ( word_21BF6DC )
  {
    if ( !dword_21BF6C0 )
    {
      v3[318] = 1;
      Function_2255f40(a2, v3 + 15, v3 + 316);
    }
    result = 1;
  }
  else if ( word_21BF6DE )
  {
    if ( v3[318] )
      Function_2255f40(a2, v3 + 15, v3 + 316);
    result = 1;
  }
  else if ( v3[318] )
  {
    v3[318] = 0;
    *a3 = 1;
  }
  return result;
}

//----- (02256228) --------------------------------------------------------
uint *__fastcall Function_2256228(uint *result)
{
  result[1] = 0;
  result[2] = 0;
  *result = 0xFFFF;
  result[3] = 0;
  result[4] = 0;
  return result;
}

//----- (0225623C) --------------------------------------------------------
int __fastcall Function_225623c(int a1, int a2, uint *a3)
{
  int result;

  a3[1] = 0;
  a3[2] = a2;
  *a3 = a1;
  a3[3] = 0;
  result = 1;
  a3[4] = 1;
  return result;
}

//----- (0225624C) --------------------------------------------------------
int __fastcall Function_225624c(int result, uint *a2)
{
  uint *v2;
  int v3;
  int v4;

  v2 = a2;
  if ( a2[4] )
  {
    v3 = a2[1] + 1;
    a2[1] = v3;
    if ( v3 >= a2[2] )
    {
      a2[1] = 0;
      a2[3] = ((uint)(a2[3] + 1) >> 31) + __ROR4__(((a2[3] + 1) << 31) - ((uint)(a2[3] + 1) >> 31), 31);
      v4 = ((int (__fastcall *)(uint, uint))dword_21E18E0[0])(*(uint *)(result + 164), *a2);
      result = ((int (__fastcall *)(int, uint))dword_21E18A4[4])(v4, v2[3]);
    }
  }
  return result;
}

//----- (0225628C) --------------------------------------------------------
int __fastcall Function_225628c(int result, uint *a2)
{
  int v2;

  if ( a2[4] )
  {
    v2 = ((int (__fastcall *)(uint, uint))dword_21E18E0[0])(*(uint *)(result + 164), *a2);
    result = ((int (__fastcall *)(int, uint))dword_21E18A4[4])(v2, 0);
  }
  return result;
}

//----- (022562A8) --------------------------------------------------------
int __fastcall Function_22562a8(int a1)
{
  return *(uint *)a1;
}

