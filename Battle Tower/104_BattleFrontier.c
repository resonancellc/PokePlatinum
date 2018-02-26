//----- (0222DCE0) --------------------------------------------------------
int __fastcall Function_222dce0(int a1, uint a2, int a3)
{
  return LoadFromNARC_2(a3, a1, a2);
}

//----- (0222DCF4) --------------------------------------------------------
int __fastcall Function_222dcf4(int a1, int a2, int a3)
{
  return LoadFromNARC(a1, a3, a2);
}

//----- (0222DD04) --------------------------------------------------------
ushort *__fastcall Function_222dd04(int a1, uint a2, uint a3, int a4)
{
  uint v4;
  int v5;
  uint v6;
  int v7;
  ushort **v8;
  ushort *v9;
  ushort *v10;
  ushort *v11;
  int v12;

  v4 = a3;
  v5 = a1;
  v6 = a2;
  v7 = a4;
  v8 = (ushort **)LoadFromMsgNARC(1, 26, 21, a3);
  MI_CpuFill8((ushort *)v5, 0, 0x30u);
  v9 = (ushort *)Function_222dce0((ushort)v6, v4, v7);
  v10 = v9;
  *(uint *)v5 = v6;
  *(ushort *)(v5 + 24) = -1;
  *(ushort *)(v5 + 26) = 3 * v6;
  *(ushort *)(v5 + 4) = *v9;
  v11 = Function_200b1ec_CallMsgDecrypt(v8, v6);
  Function_2023df0((int)v11, (uchar *)(v5 + 8), 8u);
  Function_20237bc_FreeMsg((int)v11, v12);
  Function_200b190((ushort *)v8);
  return v10;
}

//----- (0222DD6C) --------------------------------------------------------
int __fastcall Function_222dd6c(ushort *a1, int a2, int a3, int a4, uchar a5, uint a6, int a7, uint a8, int a9)
{
  int v9;
  int v10;
  ushort *v11;
  int v12;
  int v13;
  int v14;
  char *v15;
  ushort *v16;
  uint v17;
  int v18;
  int v19;
  int v20;
  uchar v21;
  int v22;
  int v23;
  char v24;
  uchar v25;
  uint v26;
  char v28;
  char v29;
  uchar v30;
  uchar v31;
  short v32;
  short v33;
  int v34;

  v34 = a4;
  v9 = a2;
  v10 = a3;
  v11 = a1;
  v12 = a4;
  v13 = a6;
  MI_CpuFill8(a1, 0, 0x38u);
  Function_222dcf4((int)&v29, v9, a9);
  *v11 = *(ushort *)&v29 & 0x7FF | *v11 & 0xF800;
  *v11 = *v11 & 0x7FF | (v33 << 11);
  if ( a7 )
  {
    if ( a6 >= 4 )
      v13 = a6 & 3;
    v11[1] = *((ushort *)dword_223F290 + v13);
  }
  else
  {
    v11[1] = v32;
  }
  v28 = -1;
  v14 = 0;
  v15 = &v29;
  v16 = v11;
  do
  {
    v16[2] = *((ushort *)v15 + 1);
    if ( *((ushort *)v15 + 1) == 218 )
      v28 = 0;
    ++v14;
    v15 += 2;
    ++v16;
  }
  while ( v14 < 4 );
  *((uint *)v11 + 3) = v10;
  if ( v12 )
  {
    *((uint *)v11 + 4) = v12;
  }
  else
  {
    do
    {
      do
      {
        v17 = PRNG();
        v12 = v17 | (PRNG() << 16);
      }
      while ( v31 != PkmnData_DivBy25(v12) );
    }
    while ( CheckIfShinyPkmn(v10, v12) == 1 );
    *((uint *)v11 + 4) = v12;
  }
  v18 = a5;
  v19 = 0;
  v20 = 0;
  *((uint *)v11 + 5) = ((uint)a5 << 27 >> 2) | (((((*((uint *)v11 + 5) & 0xFFFFFFE0 | v18 & 0x1F) & 0xFFFFFC1F | 32 * v18 & 0x3FF) & 0xFFFF83FF | (v18 << 10) & 0x7FFF) & 0xFFF07FFF | (v18 << 15) & 0xFFFFF) & 0xFE0FFFFF | (v18 << 20) & 0x1FFFFFF) & 0xC1FFFFFF;
  do
  {
    v21 = Function_20787cc(v20);
    if ( v21 & v30 )
      ++v19;
    ++v20;
  }
  while ( v20 < 6 );
  v22 = s32_div_f(0x1FEu, v19);
  if ( v22 > 255 )
    LOBYTE(v22) = -1;
  v23 = 0;
  v24 = v22;
  do
  {
    v25 = Function_20787cc(v23);
    if ( v25 & v30 )
      *((uchar *)v11 + v23 + 24) = v24;
    ++v23;
  }
  while ( v23 < 6 );
  *((uchar *)v11 + 30) = 0;
  *((uchar *)v11 + 31) = CountryOfOriginValue;
  v26 = GetPkmnBaseData1(*v11 & 0x7FF, 0x19u);
  if ( v26 )
  {
    if ( *((uint *)v11 + 4) & 1 )
      *((uchar *)v11 + 32) = v26;
    else
      *((uchar *)v11 + 32) = GetPkmnBaseData1(*v11 & 0x7FF, 0x18u);
  }
  else
  {
    *((uchar *)v11 + 32) = GetPkmnBaseData1(*v11 & 0x7FF, 0x18u);
  }
  *((uchar *)v11 + 33) = v28;
  Function_200b274(*v11 & 0x7FF, a8, v11 + 17);
  return v12;
}

//----- (0222DF40) --------------------------------------------------------
int __fastcall Function_222df40(ushort *a1, int *a2, int a3, int a4)
{
  int *v4;
  ushort *v5;
  int v6;
  int v7;
  char v8;
  ushort **v9;
  ushort *v10;
  int v11;
  ushort *v13;
  char v14;
  char v15;
  ushort v16;
  int v17;
  int v18;
  int v19;

  v19 = a4;
  v4 = a2;
  v5 = a1;
  v6 = a3;
  ClearCompletePkmnDataStructure(a2);
  if ( v6 == 120 )
  {
    v6 = 50;
  }
  else if ( v6 == 121 )
  {
    v6 = 100;
  }
  v18 = *((uint *)v5 + 5) & 0x3FFFFFFF;
  InitPkmnData(v4, *v5 & 0x7FF, v6, v18, 1, *((uint *)v5 + 4), 2, 0);
  SetPkmnData((int)v4, 175, (ushort *)&v18);
  Function_207418c(v4);
  v15 = (uint)*v5 << 16 >> 27;
  SetPkmnData((int)v4, 112, (ushort *)&v15);
  SetPkmnData((int)v4, 6, v5 + 1);
  v7 = 0;
  v13 = v5;
  v8 = 0;
  do
  {
    v16 = v13[2];
    SetPkmnData((int)v4, v7 + 54, &v16);
    v15 = ((int)*((uchar *)v5 + 30) >> v8) & 3;
    SetPkmnData((int)v4, v7 + 62, (ushort *)&v15);
    v14 = GetPkmnData(v4, v7 + 66, 0);
    SetPkmnData((int)v4, v7++ + 58, (ushort *)&v14);
    v8 += 2;
    ++v13;
  }
  while ( v7 < 4 );
  v17 = *((uint *)v5 + 3);
  SetPkmnData((int)v4, 7, (ushort *)&v17);
  v15 = *((uchar *)v5 + 24);
  SetPkmnData((int)v4, 13, (ushort *)&v15);
  v15 = *((uchar *)v5 + 25);
  SetPkmnData((int)v4, 14, (ushort *)&v15);
  v15 = *((uchar *)v5 + 26);
  SetPkmnData((int)v4, 15, (ushort *)&v15);
  v15 = *((uchar *)v5 + 27);
  SetPkmnData((int)v4, 16, (ushort *)&v15);
  v15 = *((uchar *)v5 + 28);
  SetPkmnData((int)v4, 17, (ushort *)&v15);
  v15 = *((uchar *)v5 + 29);
  SetPkmnData((int)v4, 18, (ushort *)&v15);
  SetPkmnData((int)v4, 10, v5 + 16);
  SetPkmnData((int)v4, 9, (ushort *)((char *)v5 + 33));
  if ( *((uint *)v5 + 5) & 0x40000000 )
  {
    v9 = (ushort **)LoadFromMsgNARC(1, 26, 412, 4u);
    v10 = Function_200b1ec_CallMsgDecrypt(v9, *v5 & 0x7FF);
    SetPkmnData((int)v4, 119, v10);
    Function_20237bc_FreeMsg((int)v10, v11);
    Function_200b190((ushort *)v9);
  }
  else
  {
    SetPkmnData((int)v4, 117, v5 + 17);
  }
  SetPkmnData((int)v4, 12, (ushort *)((char *)v5 + 31));
  return Function_207418c(v4);
}

//----- (0222E10C) --------------------------------------------------------
int __fastcall Function_222e10c(int a1)
{
  short *v1;
  uint v2;

  v1 = &word_223F298;
  v2 = 0;
  do
  {
    if ( a1 == (ushort)*v1 )
      return (ushort)word_223F29A[2 * v2];
    ++v2;
    v1 += 2;
  }
  while ( v2 < 0x3F );
  return 3;
}

//----- (0222E134) --------------------------------------------------------
ushort *__fastcall Function_222e134(int a1, int *a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  ushort **v9;
  ushort *v10;
  int v11;
  uint v13;
  int v14;

  v14 = a4;
  v4 = a2;
  v5 = a1;
  v6 = LoadTrainerDataAdress(a1);
  v13 = GetPkmnData(v4, 7u, 0);
  v7 = LoadTrainerDataAdress(v5);
  Function_2077ee4((int)v4, v7);
  v8 = GetMapName(0x232u);
  Function_209304c((int)v4, v6, 0, v8, 0xBu);
  v9 = (ushort **)LoadFromMsgNARC(0, 26, 363, 0xBu);
  v10 = Function_200b1ec_CallMsgDecrypt(v9, 0);
  SetPkmnData((int)v4, 145, v10);
  SetPkmnData((int)v4, 7, (ushort *)&v13);
  Function_20237bc_FreeMsg((int)v10, v11);
  return Function_200b190((ushort *)v9);
}

//----- (0222E1C0) --------------------------------------------------------
int __fastcall Function_222e1c0(int a1, uint *a2, int *a3, int a4)
{
  int *v4;
  uint *v5;

  v4 = a3;
  v5 = a2;
  Function_222e134(a1, a3, (int)a3, a4);
  return CopyPkmnDataToParty(v5, v4);
}

//----- (0222E1D8) --------------------------------------------------------
uint __fastcall Function_222e1d8(int a1, uint a2)
{
  int v2;
  uint v3;
  uint result;

  v2 = a1;
  v3 = a2;
  result = Function_2021e24(a1);
  if ( v3 != result )
  {
    Function_2021e50(v2, 0);
    Function_2021d6c(v2, v3);
    result = Function_2021e2c(v2, 4096);
  }
  return result;
}

//----- (0222E204) --------------------------------------------------------
int __fastcall Function_222e204(int a1, int a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int v7;
  int v8;
  int v9;

  v4 = a3;
  v7 = a2 << 12;
  v8 = a3 << 12;
  v5 = (uint *)a1;
  v9 = 0;
  if ( a4 == 1 )
  {
    if ( Function_2021e74(a1) )
      v8 = (v4 + 1) << 12;
    else
      v8 = (v4 - 3) << 12;
  }
  return Function_2021c50(v5, &v7);
}

//----- (0222E240) --------------------------------------------------------
int __fastcall Function_222e240(int a1, int a2)
{
  int result;

  switch ( (uchar)Function_208c104(a1, a2, 48) )
  {
    case 1u:
      result = 4;
      break;
    case 2u:
      result = 3;
      break;
    case 3u:
      result = 2;
      break;
    case 4u:
      result = 1;
      break;
    default:
      result = 1;
      break;
  }
  return result;
}

//----- (0222E278) --------------------------------------------------------
uint __fastcall Function_222e278(int a1, uint a2, uint a3, int a4)
{
  ushort *v4;

  v4 = Function_222dd04(a1, a2, a3, a4);
  return free((int)v4);
}

//----- (0222E284) --------------------------------------------------------
ushort *__fastcall Function_222e284(int a1, ushort *a2, int a3, int a4)
{
  ushort *v4;
  int v5;
  int v6;
  ushort *result;

  v4 = a2;
  v5 = a1;
  *(uint *)(a1 + 4 * a4 + 24) = *(uint *)a2;
  v6 = 52 * a4;
  *(uchar *)(a1 + 52 * a4 + 41) = a2[2];
  Function_20021b0((ushort *)(a1 + 60 + 52 * a4), a2 + 4);
  *(ushort *)(v5 + v6 + 76) = v4[16];
  *(ushort *)(v5 + v6 + 78) = v4[17];
  *(ushort *)(v5 + v6 + 80) = v4[18];
  *(ushort *)(v5 + v6 + 82) = v4[19];
  *(ushort *)(v5 + v6 + 84) = v4[20];
  *(ushort *)(v5 + v6 + 86) = v4[21];
  *(ushort *)(v5 + v6 + 88) = v4[22];
  result = (ushort *)(v5 + v6 + 90);
  *result = v4[23];
  return result;
}

//----- (0222E2F0) --------------------------------------------------------
int __fastcall Function_222e2f0(ushort *a1, int a2, uchar a3, uchar a4, int a5, uint a6, int a7)
{
  ushort *v7;
  int v8;
  uchar v9;
  uchar v10;
  uint v11;
  uint v12;

  v7 = a1;
  v8 = a2;
  v9 = a3;
  v10 = a4;
  v11 = PRNG();
  v12 = PRNG();
  return Function_222dd6c(v7, v8, v11 | (v12 << 16), a5, v10, v9, 0, a6, a7);
}

//----- (0222E330) --------------------------------------------------------
int __fastcall Function_222e330(ushort *a1, ushort *a2, int a3, int *a4, int *a5, int a6, uint a7, int a8)
{
  ushort *v8;
  int v9;
  int result;
  int *v11;
  int *v12;
  uchar v13;
  uchar v14;
  int v15;
  int v16;
  ushort *v17;
  int v18;
  int *v19;

  v17 = a1;
  v8 = a2;
  v18 = a3;
  v19 = a4;
  v9 = 0;
  result = a6;
  if ( a6 > 0 )
  {
    v11 = a5;
    v12 = a4;
    do
    {
      if ( v18 )
        v13 = *(uchar *)(v18 + v9);
      else
        v13 = 0;
      v14 = v13;
      if ( v19 )
        v15 = *v12;
      else
        v15 = 0;
      v16 = Function_222e2f0(v17, *v8, v9, v14, v15, a7, a8);
      if ( a5 )
        *v11 = v16;
      ++v9;
      v17 += 28;
      result = a6;
      ++v12;
      ++v8;
      ++v11;
    }
    while ( v9 < a6 );
  }
  return result;
}

//----- (0222E3A8) --------------------------------------------------------
int __fastcall Function_222e3a8(uint a1)
{
  if ( a1 < 0x64 )
    return 3;
  if ( a1 < 0x78 )
    return 6;
  if ( a1 < 0x8C )
    return 9;
  if ( a1 < 0xA0 )
    return 12;
  if ( a1 < 0xB4 )
    return 15;
  if ( a1 < 0xC8 )
    return 18;
  if ( a1 >= 0xDC )
    return 31;
  return 21;
}

//----- (0222E3E4) --------------------------------------------------------
BOOL __fastcall Function_222e3e4(int a1, ushort *a2, ushort *a3, int a4, int a5, ushort *a6)
{
  int v6;
  int v7;
  uint v8;
  int v9;
  int v10;
  char *v11;
  int v12;
  ushort *v13;
  ushort *v14;
  int v16;
  ushort *v17;
  ushort *v18;
  ushort *v19;
  char *v20;
  int v21;
  short v22;
  char v23;

  v16 = a1;
  v6 = a4;
  v17 = a2;
  v18 = a3;
  if ( a5 > 6 )
    ErrorHandler();
  v7 = 0;
  v21 = 0;
  if ( a5 )
  {
    v20 = &v23;
    v19 = a6;
    do
    {
      v8 = PRNG();
      s32_div_f(v8, *(ushort *)(v16 + 2));
      v22 = *(ushort *)(v16 + 2 * v9 + 4);
      Function_222dcf4((int)v20, *(ushort *)(v16 + 2 * v9 + 4), 179);
      v10 = 0;
      if ( v7 > 0 )
      {
        v11 = &v23;
        do
        {
          if ( *(ushort *)v11 == *(ushort *)v20 )
            break;
          if ( *((ushort *)v11 + 6) == *((ushort *)v20 + 6) )
            break;
          ++v10;
          v11 += 16;
        }
        while ( v10 < v7 );
      }
      if ( v10 == v7 )
      {
        if ( v21 >= 50 )
          goto LABEL_24;
        v12 = 0;
        if ( v6 > 0 )
        {
          v13 = v17;
          v14 = v18;
          do
          {
            if ( *(ushort *)v20 == *v13 )
              break;
            if ( *((ushort *)v20 + 6) == *v14 )
              break;
            ++v12;
            ++v13;
            ++v14;
          }
          while ( v12 < v6 );
        }
        if ( v12 == v6 )
        {
LABEL_24:
          ++v7;
          *v19 = v22;
          v20 += 16;
          ++v19;
        }
        else
        {
          ++v21;
        }
      }
    }
    while ( v7 != a5 );
  }
  return v21 >= 50;
}

//----- (0222E4BC) --------------------------------------------------------
int __fastcall Function_222e4bc(uint a1, uint a2, uint a3, ushort *a4, ushort *a5, int a6, int *a7, char a8)
{
  uint v8;
  int i;
  int v10;
  ushort *v11;
  char *v12;
  char *v13;
  int v14;
  int v15;
  uchar *v16;
  uint v18;
  uint v19;
  ushort *v20;
  ushort *v21;
  char v22;
  char v23;
  char v24;
  short v25;
  char v26;

  v18 = a1;
  v19 = a3;
  v20 = a4;
  v8 = a2;
  v21 = Function_222dd04((int)&v26, a2, 0xBu, 178);
  for ( i = 0; i < (int)v18; ++i )
    *(uchar *)(a6 + i) = Function_222e3a8(v8);
  if ( a8 )
  {
    Function_222e3e4((int)v21, (ushort *)&v23, (ushort *)&v22, 0, v18 >> 1, v20);
    v10 = 0;
    if ( (int)(v18 >> 1) > 0 )
    {
      v11 = v20;
      v12 = &v23;
      v13 = &v22;
      do
      {
        Function_222dcf4((int)&v24, *v11, 179);
        ++v10;
        ++v11;
        *(ushort *)v12 = *(ushort *)&v24;
        v12 += 2;
        *(ushort *)v13 = v25;
        v13 += 2;
      }
      while ( v10 < (int)(v18 >> 1) );
    }
    free((int)v21);
    v21 = Function_222dd04((int)&v26, v19, 0xBu, 178);
    v14 = v18 >> 1;
    Function_222e3e4((int)v21, (ushort *)&v23, (ushort *)&v22, v18 >> 1, v18 >> 1, &v20[v18 >> 1]);
    v15 = 0;
    if ( (int)(v18 >> 1) > 0 )
    {
      v16 = (uchar *)(a6 + v14);
      do
      {
        *v16 = Function_222e3a8(v19);
        ++v15;
        ++v16;
      }
      while ( v15 < v14 );
    }
  }
  else
  {
    Function_222e3e4((int)v21, (ushort *)&v23, (ushort *)&v22, 0, v18, v20);
  }
  free((int)v21);
  return Function_222e330(a5, v20, a6, 0, a7, v18, 0xBu, 179);
}

//----- (0222E5D0) --------------------------------------------------------
uint __fastcall Function_222e5d0(int a1, uint a2)
{
  int v2;
  uint v3;
  int v4;

  v2 = a1;
  v3 = a2;
  v4 = Function_203608c();
  Function_2032ee8(v4 ^ 1);
  return Function_200b498(v2, v3);
}

//----- (0222E5F0) --------------------------------------------------------
int __fastcall Function_222e5f0(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  v2 = GetGender(a1);
  v3 = Function_2025fcc(v1);
  if ( v3 > 0 || v3 )
  {
    if ( v2 )
      result = 97;
    else
      result = 0;
  }
  else if ( v2 )
  {
    result = 253;
  }
  else
  {
    result = 252;
  }
  return result;
}

//----- (0222E630) --------------------------------------------------------
int __fastcall Function_222e630(int a1)
{
  int v1;

  v1 = Function_202c878(a1);
  return Function_2038f8c(v1);
}

//----- (0222E63C) --------------------------------------------------------
int __fastcall Function_104_222e63c(int a1, uint a2, int a3)
{
  uint v3;
  int v4;
  int v5;
  int v6;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = malloc(a2, 188);
  MI_CpuFill8((ushort *)v6, 0, 0xBCu);
  *(uint *)v6 = v4;
  *(uint *)(v6 + 52) = v3;
  *(ushort *)(v6 + 82) = v5;
  Function_222e830(v6 + 64, v6 + 60, v5, v3);
  *(uint *)(v6 + 68) = Function_200b368(8u, 64, v3);
  *(uint *)(v6 + 72) = Function_2023790(1024, v3);
  *(uint *)(v6 + 76) = Function_2023790(1024, v3);
  Function_222e82c(v6, (ushort)v5);
  return v6;
}

//----- (0222E6A8) --------------------------------------------------------
BOOL __fastcall Function_104_222e6a8(int a1)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v5 = a1;
  if ( !*(uchar *)(a1 + 81) )
    return 1;
  if ( !*(uchar *)(a1 + 56) )
  {
    v2 = a1;
    v3 = 0;
    do
    {
      v4 = *(uint *)(v2 + 4);
      if ( v4 )
      {
        if ( !Function_222e988(*(uint *)(v2 + 4)) )
        {
          Function_222e7fc(v5, v4);
          *(uint *)(v2 + 4) = 0;
          --*(uchar *)(v5 + 81);
        }
      }
      ++v3;
      v2 += 4;
    }
    while ( v3 < 8 );
    Function_223d8c4(*(uint *)v5);
  }
  return *(uchar *)(v5 + 81) == 0;
}

//----- (0222E710) --------------------------------------------------------
uint __fastcall Function_104_222e710(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  if ( *(uchar *)(a1 + 81) )
    ErrorHandler();
  Function_200b3f0(*(uint **)(v2 + 68), a2);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 72), v3);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 76), v4);
  free(*(uint *)(v2 + 64));
  Function_200b190(*(ushort **)(v2 + 60));
  return free(v2);
}

//----- (0222E748) --------------------------------------------------------
int __fastcall Function_104_222e748(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = malloc(*(uint *)(a1 + 52), 144);
  MI_CpuFill8((ushort *)v6, 0, 0x90u);
  Function_222e930(v6, &off_223F674, 204);
  *(uint *)v6 = v3;
  if ( v4 != 0xFFFF && *(ushort *)(v3 + 82) != v4 )
  {
    Function_222e830(v6 + 132, v6 + 128, v4, *(uint *)(v3 + 52));
  }
  else
  {
    *(uint *)(v6 + 132) = *(uint *)(v3 + 64);
    *(uint *)(v6 + 128) = *(uint *)(v3 + 60);
  }
  Function_222e968(v6, *(uint *)(v6 + 132));
  Function_222e904(v6, v5);
  return Function_222e7cc(v3, v6);
}

//----- (0222E7CC) --------------------------------------------------------
int __fastcall Function_222e7cc(int a1, int a2)
{
  int v2;
  int v3;

  v2 = 0;
  v3 = a1;
  do
  {
    if ( !*(uint *)(v3 + 4) )
    {
      *(uint *)(a1 + 4 * v2 + 4) = a2;
      ++*(uchar *)(a1 + 81);
      return 1;
    }
    ++v2;
    v3 += 4;
  }
  while ( v2 < 8 );
  ErrorHandler();
  return 0;
}

//----- (0222E7FC) --------------------------------------------------------
uint __fastcall Function_222e7fc(int a1, int a2)
{
  int v2;
  int v3;
  ushort *v4;
  int v5;

  v2 = a2;
  v3 = a1;
  v4 = *(ushort **)(a2 + 128);
  if ( v4 != *(ushort **)(v3 + 60) )
    Function_200b190(v4);
  v5 = *(uint *)(v2 + 132);
  if ( v5 != *(uint *)(v3 + 64) )
    free(v5);
  return free(v2);
}

//----- (0222E82C) --------------------------------------------------------
void Function_222e82c()
{
  ;
}

//----- (0222E830) --------------------------------------------------------
int __fastcall Function_222e830(int *a1, int *a2, int a3, uint a4)
{
  int v4;
  int *v5;
  int *v6;
  uint v7;
  int v8;
  int v9;
  int result;

  v4 = a3;
  v5 = a1;
  v6 = a2;
  v7 = a4;
  v8 = Function_222ea90(a3, 1);
  v9 = Function_222ea90(v4, 2);
  *v5 = LoadFromNARC_2(149, v8, v7);
  result = LoadFromMsgNARC(1, 26, v9, v7);
  *v6 = result;
  return result;
}

//----- (0222E86C) --------------------------------------------------------
ushort *__fastcall Function_104_222e86c(int a1, int a2, uint a3)
{
  int v3;
  int v4;
  uint v5;
  int v6;
  ushort *result;
  int v8;
  int v9;
  int v10;
  int v11;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_222ea90(*(ushort *)(a1 + 82), 2);
  result = (ushort *)Function_222ea90(v4, 2);
  if ( (ushort *)v6 != result )
  {
    v8 = LoadFromMsgNARC(1, 26, (int)result, v5);
    v9 = 0;
    v10 = v3;
    do
    {
      v11 = *(uint *)(v10 + 4);
      if ( v11 )
      {
        if ( *(uint *)(v11 + 128) == *(uint *)(v3 + 60) )
          *(uint *)(v11 + 128) = v8;
      }
      ++v9;
      v10 += 4;
    }
    while ( v9 < 8 );
    result = Function_200b190(*(ushort **)(v3 + 60));
    *(uint *)(v3 + 60) = v8;
  }
  return result;
}

//----- (0222E8C8) --------------------------------------------------------
int __fastcall Function_104_222e8c8(int a1, uint a2)
{
  int v2;
  int result;
  short *v4;
  ushort *v5;
  int v6;
  short v7;

  v2 = a1;
  result = malloc(a2, 16);
  v4 = (short *)(v2 + 36);
  v5 = (ushort *)result;
  v6 = 8;
  do
  {
    v7 = *v4;
    ++v4;
    *v5 = v7;
    ++v5;
    --v6;
  }
  while ( v6 );
  return result;
}

//----- (0222E8E8) --------------------------------------------------------
uint __fastcall Function_104_222e8e8(int a1, int a2)
{
  short *v2;
  ushort *v3;
  int v4;
  short v5;

  v2 = (short *)a2;
  v3 = (ushort *)(a1 + 36);
  v4 = 8;
  do
  {
    v5 = *v2;
    ++v2;
    *v3 = v5;
    ++v3;
    --v4;
  }
  while ( v4 );
  return free(a2);
}

//----- (0222E904) --------------------------------------------------------
int __fastcall Function_222e904(int a1, int a2)
{
  int v2;
  int result;

  v2 = a1;
  *(uint *)(a1 + 28) += 4 * a2;
  result = *(uint *)(a1 + 28) + Function_222ea60();
  *(uint *)(v2 + 28) = result;
  return result;
}

//----- (0222E91C) --------------------------------------------------------
int __fastcall Function_222e91c(int a1, int a2)
{
  return a1 + 36 + 2 * a2;
}

//----- (0222E924) --------------------------------------------------------
int __fastcall Function_222e924(int *a1)
{
  return Function_209b974(*a1);
}

//----- (0222E930) --------------------------------------------------------
int __fastcall Function_222e930(int result, int a2, int a3)
{
  uint v3;
  int v4;
  uint v5;
  ushort *v6;

  v3 = 0;
  *(uchar *)(result + 25) = 0;
  *(uint *)(result + 28) = 0;
  *(uchar *)(result + 24) = 0;
  *(uint *)(result + 136) = 0;
  *(uint *)(result + 112) = a2;
  *(uint *)(result + 116) = a3;
  v4 = result;
  v5 = 0;
  do
  {
    v6 = (ushort *)(v4 + 120);
    ++v3;
    v4 += 2;
    *v6 = 0;
  }
  while ( v3 < 4 );
  do
  {
    ++v5;
    *(uint *)(result + 32) = 0;
    result += 4;
  }
  while ( v5 < 0x14 );
  return result;
}

//----- (0222E968) --------------------------------------------------------
int __fastcall Function_222e968(int a1, int a2)
{
  *(uint *)(a1 + 28) = a2;
  *(uchar *)(a1 + 25) = 1;
  return 1;
}

//----- (0222E974) --------------------------------------------------------
uint *__fastcall Function_222e974(int a1, int a2)
{
  uint *result;

  *(uchar *)(a1 + 25) = 2;
  result = (uint *)(a1 + 136);
  *result = a2;
  return result;
}

//----- (0222E980) --------------------------------------------------------
int __fastcall Function_222e980(int result)
{
  *(uchar *)(result + 25) = 0;
  *(uint *)(result + 28) = 0;
  return result;
}

//----- (0222E988) --------------------------------------------------------
int __fastcall Function_222e988(int a1)
{
  int v1;
  int v2;
  int result;
  int (*v4)(void);
  uint v5;

  v1 = a1;
  v2 = *(uchar *)(a1 + 25);
  if ( !*(uchar *)(a1 + 25) )
    return 0;
  if ( v2 == 1 )
    goto LABEL_11;
  if ( v2 != 2 )
    return 1;
  v4 = *(int (**)(void))(a1 + 136);
  if ( v4 )
  {
    if ( v4() == 1 )
    {
      *(uchar *)(v1 + 25) = 1;
      *(uint *)(v1 + 136) = 0;
    }
    result = 1;
  }
  else
  {
    *(uchar *)(a1 + 25) = 1;
    while ( 1 )
    {
LABEL_11:
      if ( !*(uint *)(v1 + 28) )
      {
        result = 0;
        *(uchar *)(v1 + 25) = 0;
        return result;
      }
      v5 = Function_222ea48(v1);
      if ( v5 >= *(uint *)(v1 + 116) )
        break;
      if ( (*(int (__fastcall **)(int))(*(uint *)(v1 + 112) + 4 * v5))(v1) == 1 )
        return 1;
    }
    ErrorHandler();
    result = 0;
    *(uchar *)(v1 + 25) = 0;
  }
  return result;
}

//----- (0222E9F8) --------------------------------------------------------
int __fastcall Function_222e9f8(int a1, int a2)
{
  int v2;

  v2 = *(uchar *)(a1 + 24);
  if ( v2 + 1 >= 20 )
    return 1;
  *(uint *)(a1 + 4 * v2 + 32) = a2;
  ++*(uchar *)(a1 + 24);
  return 0;
}

//----- (0222EA14) --------------------------------------------------------
int __fastcall Function_222ea14(int a1)
{
  if ( !*(uchar *)(a1 + 24) )
    return 0;
  return *(uint *)(a1 + 4 * (uchar)--*(uchar *)(a1 + 24) + 32);
}

//----- (0222EA2C) --------------------------------------------------------
int __fastcall Function_222ea2c(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a1;
  v3 = a2;
  result = Function_222e9f8(a1, *(uint *)(a1 + 28));
  *(uint *)(v2 + 28) = v3;
  return result;
}

//----- (0222EA3C) --------------------------------------------------------
int __fastcall Function_222ea3c(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = Function_222ea14(a1);
  *(uint *)(v1 + 28) = result;
  return result;
}

//----- (0222EA48) --------------------------------------------------------
int __fastcall Function_222ea48(int a1)
{
  uchar *v1;
  int v2;

  v1 = *(uchar **)(a1 + 28);
  *(uint *)(a1 + 28) = v1 + 1;
  v2 = *v1;
  *(uint *)(a1 + 28) = v1 + 2;
  return (v2 + (v1[1] << 8)) & 0xFFFF;
}

//----- (0222EA60) --------------------------------------------------------
int __fastcall Function_222ea60(int a1)
{
  uchar *v1;
  uchar *v2;
  int v3;
  uchar *v4;
  int v5;
  int v6;
  int v7;

  v1 = *(uchar **)(a1 + 28);
  v2 = v1 + 1;
  *(uint *)(a1 + 28) = v1 + 1;
  v3 = *v1;
  v1 += 2;
  v4 = v1 + 1;
  *(uint *)(a1 + 28) = v1;
  v5 = *v2;
  v6 = (int)(v1 + 2);
  *(uint *)(a1 + 28) = v1 + 1;
  v7 = *v1;
  *(uint *)(a1 + 28) = v6;
  return (((((*v4 << 8) + v7) << 8) + v5) << 8) + v3;
}

//----- (0222EA90) --------------------------------------------------------
int __fastcall Function_222ea90(int a1, char a2)
{
  int result;

  switch ( a2 )
  {
    case 0:
      result = dword_223F394[10 * a1];
      break;
    case 1:
      result = LOWORD(dword_223F3A0[10 * a1]);
      break;
    case 2:
      result = HIWORD(dword_223F3A0[10 * a1]);
      break;
    case 3:
      result = LOWORD(dword_223F3A4[10 * a1]);
      break;
    case 4:
      result = HIWORD(dword_223F3A4[10 * a1]);
      break;
    case 5:
      result = LOWORD(dword_223F3A8[10 * a1]);
      break;
    case 6:
      result = HIWORD(dword_223F3A8[10 * a1]);
      break;
    case 7:
      result = LOWORD(dword_223F3AC[10 * a1]);
      break;
    case 8:
      result = HIWORD(dword_223F3AC[10 * a1]);
      break;
    case 9:
      result = LOWORD(dword_223F3B0[10 * a1]);
      break;
    case 10:
      result = HIWORD(dword_223F3B0[10 * a1]);
      break;
    case 11:
      result = LOWORD(dword_223F3B4[10 * a1]);
      break;
    case 12:
      result = BYTE2(dword_223F3B4[10 * a1]);
      break;
    case 13:
      result = HIBYTE(dword_223F3B4[10 * a1]);
      break;
    default:
      ErrorHandler();
      result = 0;
      break;
  }
  return result;
}

//----- (0222EB8C) --------------------------------------------------------
int __fastcall Function_222eb8c(int a1, int a2, int a3)
{
  int (*v3)(void);
  int result;

  v3 = (int (*)(void))*(&off_223F398 + 10 * a3);
  if ( v3 )
    result = v3();
  return result;
}

//----- (0222EBA4) --------------------------------------------------------
int __fastcall Function_222eba4(int a1, int a2, int a3)
{
  int (*v3)(void);
  int result;

  v3 = (int (*)(void))*(&off_223F39C + 10 * a3);
  if ( v3 )
    result = v3();
  return result;
}

//----- (0222EBBC) --------------------------------------------------------
int __fastcall Function_222ebbc(int a1, int *a2)
{
  int *v2;
  int result;

  v2 = a2;
  result = malloc(0x5Eu, 32);
  *v2 = result;
  return result;
}

//----- (0222EBCC) --------------------------------------------------------
uint __fastcall Function_222ebcc(int a1, int *a2)
{
  return free(*a2);
}

//----- (0222EBD8) --------------------------------------------------------
uint __fastcall Function_222ebd8(uint *a1, uint *a2)
{
  *a2 = Function_223d9e4(*a1, a1[1]);
  Function_2019060(0, 1);
  Function_2019060(2u, 2);
  Function_2019060(3u, 3);
  return Function_201ff0c(4u, 0);
}

//----- (0222EC0C) --------------------------------------------------------
int __fastcall Function_222ec0c(int a1, uint *a2)
{
  return Function_223da28(*a2);
}

//----- (0222EC18) --------------------------------------------------------
void Function_222ec18()
{
  ;
}

//----- (0222EC1C) --------------------------------------------------------
void Function_222ec1c()
{
  ;
}

//----- (0222EC20) --------------------------------------------------------
uint Function_222ec20()
{
  Function_2019060(0, 1);
  Function_2019060(2u, 2);
  Function_2019060(3u, 3);
  G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 1, 60, 20, 20);
  return Function_201ff0c(4u, 0);
}

//----- (0222EC58) --------------------------------------------------------
void Function_222ec58()
{
  ;
}

//----- (0222EC5C) --------------------------------------------------------
uint Function_222ec5c()
{
  Function_2019060(2u, 3);
  return Function_2019060(3u, 2);
}

//----- (0222EC70) --------------------------------------------------------
void Function_222ec70()
{
  ;
}

//----- (0222EC74) --------------------------------------------------------
int *Function_222ec74()
{
  return G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 1, 60, 20, 20);
}

//----- (0222EC8C) --------------------------------------------------------
void Function_222ec8c()
{
  ;
}

//----- (0222EC90) --------------------------------------------------------
int __fastcall Function_222ec90(uint *a1, int *a2)
{
  int *v2;
  int result;

  v2 = a2;
  result = Function_223c164(*a1);
  *v2 = result;
  return result;
}

//----- (0222ECA0) --------------------------------------------------------
int __fastcall Function_222eca0(int a1, uint *a2)
{
  return Function_223c23c(*a2);
}

//----- (0222ECAC) --------------------------------------------------------
int *Function_222ecac()
{
  Function_2019060(1u, 0);
  Function_2019060(0, 2);
  Function_2019060(2u, 2);
  Function_2019060(3u, 3);
  return G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 1, 60, 20, 20);
}

//----- (0222ECE4) --------------------------------------------------------
void Function_222ece4()
{
  ;
}

//----- (0222ECE8) --------------------------------------------------------
int __fastcall Function_104_222ece8(int a1, int a2, int a3, int a4)
{
  ++*(uchar *)(a4 + 3472);
  return Function_203608c();
}

//----- (0222ED00) --------------------------------------------------------
BOOL __fastcall Function_222ed00(int a1)
{
  int v1;

  v1 = a1;
  LoadTrainerDataAdress(*(uint *)(a1 + 1788));
  return Function_20359dc(34, v1 + 1836, 44) == 1;
}

//----- (0222ED2C) --------------------------------------------------------
int __fastcall Function_104_222ed2c(int a1, int a2, int a3, int a4)
{
  ++*(uchar *)(a4 + 3472);
  return Function_203608c();
}

//----- (0222ED44) --------------------------------------------------------
BOOL __fastcall Function_222ed44(int a1)
{
  int v1;
  int v2;
  ushort *v3;
  short v4;

  v1 = 0;
  v2 = a1 + 1836;
  v3 = (ushort *)(a1 + 1836);
  do
  {
    v4 = *(ushort *)(a1 + 24);
    ++v1;
    a1 += 2;
    *v3 = v4;
    ++v3;
  }
  while ( v1 < 20 );
  return Function_20359dc(35, v2, 44) == 1;
}

//----- (0222ED74) --------------------------------------------------------
int __fastcall Function_104_222ed74(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  int v5;
  ushort *v6;
  int result;
  int v8;

  v4 = a1;
  v5 = a4;
  v6 = a3;
  ++*(uchar *)(a4 + 3472);
  result = Function_203608c();
  if ( v4 != result )
  {
    result = Function_203608c();
    if ( result )
    {
      v8 = 0;
      do
      {
        result = *v6;
        ++v8;
        ++v6;
        *(ushort *)(v5 + 24) = result;
        v5 += 2;
      }
      while ( v8 < 20 );
    }
  }
  return result;
}

//----- (0222EDA8) --------------------------------------------------------
BOOL __fastcall Function_222eda8(int a1)
{
  int v1;
  int v2;
  ushort *v3;
  short v4;

  v1 = a1 + 1836;
  v2 = 0;
  v3 = (ushort *)(a1 + 1836);
  do
  {
    v4 = *(ushort *)(a1 + 616);
    ++v2;
    a1 += 2;
    *v3 = v4;
    ++v3;
  }
  while ( v2 < 20 );
  return Function_20359dc(36, v1, 44) == 1;
}

//----- (0222EDDC) --------------------------------------------------------
int __fastcall Function_104_222eddc(int a1, int a2, short *a3, int a4)
{
  int v4;
  int v5;
  short *v6;
  int result;
  int v8;
  short v9;

  v4 = a1;
  v5 = a4;
  v6 = a3;
  ++*(uchar *)(a4 + 3472);
  result = Function_203608c();
  if ( v4 != result )
  {
    result = Function_203608c();
    if ( result )
    {
      v8 = 0;
      result = 616;
      do
      {
        v9 = *v6;
        ++v8;
        ++v6;
        *(ushort *)(v5 + 616) = v9;
        v5 += 2;
      }
      while ( v8 < 20 );
    }
  }
  return result;
}

//----- (0222EE14) --------------------------------------------------------
BOOL __fastcall Function_222ee14(int a1, short a2)
{
  *(ushort *)(a1 + 1836) = a2;
  return Function_20359dc(37, a1 + 1836, 44) == 1;
}

//----- (0222EE38) --------------------------------------------------------
int __fastcall Function_104_222ee38(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  int v5;
  ushort *v6;
  int result;

  v4 = a1;
  v5 = a4;
  v6 = a3;
  ++*(uchar *)(a4 + 3472);
  result = Function_203608c();
  if ( v4 != result )
  {
    result = 3464;
    *(uchar *)(v5 + 3464) = *v6;
  }
  return result;
}

//----- (0222EE60) --------------------------------------------------------
BOOL __fastcall Function_222ee60(int a1)
{
  int v1;
  int v2;
  uint *v3;
  int *v4;
  uint v5;

  v1 = a1;
  v2 = GetPkmnDataSize();
  v3 = (uint *)LoadPokePartyAdress(*(uint *)(v1 + 1788));
  v4 = GetAdrOfPkmnInParty(v3, *(uchar *)(v1 + 608));
  MI_CpuCopy8((int)v4, v1 + 1924, v2, v5);
  return Function_203597c(38, v1 + 1924, 512) == 1;
}

//----- (0222EEA8) --------------------------------------------------------
int __fastcall Function_104_222eea8(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;
  int v8;
  uint v9;

  v4 = a1;
  v5 = a4;
  v6 = a3;
  ++*(uchar *)(a4 + 3472);
  result = Function_203608c();
  if ( v4 != result )
  {
    v8 = GetPkmnDataSize();
    result = MI_CpuCopy8(v6, *(uint *)(v5 + 3468), v8, v9);
  }
  return result;
}

//----- (0222EED8) --------------------------------------------------------
int __fastcall Function_104_222eed8(int a1, int a2, int a3)
{
  int v3;
  int v4;

  v3 = a1;
  v4 = a2;
  if ( a3 > 512 )
    ErrorHandler();
  return v4 + 2436 + (v3 << 9);
}

//----- (0222EEF8) --------------------------------------------------------
BOOL __fastcall Function_222eef8(int a1)
{
  ushort *v1;
  ushort *v2;

  v1 = (ushort *)a1;
  v2 = (ushort *)(a1 + 1284);
  LoadTrainerDataAdress(*(uint *)(a1 + 1272));
  v2[1] = v1[4];
  v2[2] = v1[6];
  v2[3] = v1[7];
  return Function_20359dc(22, (int)v2, 60) == 1;
}

//----- (0222EF30) --------------------------------------------------------
int __fastcall Function_104_222ef30(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  ushort *v5;
  ushort *v6;
  int result;

  v4 = a1;
  v5 = (ushort *)a4;
  v6 = a3;
  ++*(uchar *)(a4 + 1794);
  result = Function_203608c();
  if ( v4 != result )
  {
    v5[704] = v6[1];
    result = 1406;
    v5[705] = v6[2];
    v5[703] = v6[3];
  }
  return result;
}

//----- (0222EF64) --------------------------------------------------------
BOOL __fastcall Function_222ef64(int a1)
{
  int v1;
  int v2;
  ushort *v3;
  short v4;

  v1 = 0;
  v2 = a1 + 1284;
  v3 = (ushort *)(a1 + 1284);
  do
  {
    v4 = *(ushort *)(a1 + 24);
    ++v1;
    a1 += 2;
    *v3 = v4;
    ++v3;
  }
  while ( v1 < 14 );
  return Function_20359dc(23, v2, 60) == 1;
}

//----- (0222EF94) --------------------------------------------------------
int __fastcall Function_104_222ef94(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  int v5;
  ushort *v6;
  int result;
  int v8;

  v4 = a1;
  v5 = a4;
  v6 = a3;
  ++*(uchar *)(a4 + 1794);
  result = Function_203608c();
  if ( v4 != result )
  {
    result = Function_203608c();
    if ( result )
    {
      v8 = 0;
      do
      {
        result = *v6;
        ++v8;
        ++v6;
        *(ushort *)(v5 + 24) = result;
        v5 += 2;
      }
      while ( v8 < 14 );
    }
  }
  return result;
}

//----- (0222EFCC) --------------------------------------------------------
BOOL __fastcall Function_222efcc(int a1)
{
  int v1;
  int v2;
  int v3;
  ushort *v4;
  short v5;
  int v6;
  int v7;
  short v8;
  int v9;
  ushort *v10;
  int v11;

  v1 = a1 + 1284;
  v2 = 0;
  v3 = a1;
  v4 = (ushort *)(a1 + 1284);
  do
  {
    v5 = *(ushort *)(v3 + 1412);
    ++v2;
    v3 += 2;
    *v4 = v5;
    ++v4;
  }
  while ( v2 < 6 );
  v6 = 0;
  v7 = a1 + 1284;
  do
  {
    v8 = *(uchar *)(a1 + v6++ + 1424);
    *(ushort *)(v7 + 12) = v8;
    v7 += 2;
  }
  while ( v6 < 6 );
  v9 = 0;
  v10 = (ushort *)(a1 + 1308);
  do
  {
    ++v9;
    *v10 = *(uint *)(a1 + 1432);
    v11 = *(uint *)(a1 + 1432);
    a1 += 4;
    v10[6] = HIWORD(v11);
    ++v10;
  }
  while ( v9 < 6 );
  return Function_20359dc(24, v1, 60) == 1;
}

//----- (0222F03C) --------------------------------------------------------
int __fastcall Function_104_222f03c(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  int v5;
  ushort *v6;
  int result;
  int v8;
  short *v9;
  int v10;
  short v11;
  int v12;
  ushort *v13;
  short v14;
  int v15;
  int v16;
  ushort *v17;
  int v18;

  v4 = a1;
  v5 = a4;
  v6 = a3;
  ++*(uchar *)(a4 + 1794);
  result = Function_203608c();
  if ( v4 != result )
  {
    result = Function_203608c();
    if ( result )
    {
      v8 = 0;
      v9 = v6;
      v10 = v5;
      do
      {
        v11 = *v9;
        ++v8;
        ++v9;
        *(ushort *)(v10 + 596) = v11;
        v10 += 2;
      }
      while ( v8 < 6 );
      v12 = 0;
      v13 = v6;
      do
      {
        v14 = v13[6];
        v15 = v5 + v12++;
        ++v13;
        *(uchar *)(v15 + 608) = v14;
      }
      while ( v12 < 6 );
      v16 = 0;
      v17 = v6 + 12;
      do
      {
        ++v16;
        *(uint *)(v5 + 616) = *v17;
        v18 = v17[6];
        ++v17;
        result = *(uint *)(v5 + 616) | (v18 << 16);
        *(uint *)(v5 + 616) = result;
        v5 += 4;
      }
      while ( v16 < 6 );
    }
  }
  return result;
}

//----- (0222F0B4) --------------------------------------------------------
BOOL __fastcall Function_222f0b4(int a1)
{
  int v1;
  int v2;
  int v3;
  ushort *v4;
  short v5;
  int v6;
  int v7;
  short v8;
  int v9;
  ushort *v10;
  int v11;

  v1 = a1 + 1284;
  v2 = 0;
  v3 = a1;
  v4 = (ushort *)(a1 + 1284);
  do
  {
    v5 = *(ushort *)(v3 + 978);
    ++v2;
    v3 += 2;
    *v4 = v5;
    ++v4;
  }
  while ( v2 < 4 );
  v6 = 0;
  v7 = a1 + 1284;
  do
  {
    v8 = *(uchar *)(a1 + v6++ + 986);
    *(ushort *)(v7 + 8) = v8;
    v7 += 2;
  }
  while ( v6 < 4 );
  v9 = 0;
  v10 = (ushort *)(a1 + 1300);
  do
  {
    ++v9;
    *v10 = *(uint *)(a1 + 992);
    v11 = *(uint *)(a1 + 992);
    a1 += 4;
    v10[4] = HIWORD(v11);
    ++v10;
  }
  while ( v9 < 4 );
  return Function_20359dc(25, v1, 60) == 1;
}

//----- (0222F124) --------------------------------------------------------
int __fastcall Function_104_222f124(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  int v5;
  ushort *v6;
  int result;
  int v8;
  short *v9;
  int v10;
  short v11;
  int v12;
  ushort *v13;
  short v14;
  int v15;
  int v16;
  ushort *v17;
  int v18;

  v4 = a1;
  v5 = a4;
  v6 = a3;
  ++*(uchar *)(a4 + 1794);
  result = Function_203608c();
  if ( v4 != result )
  {
    result = Function_203608c();
    if ( result )
    {
      v8 = 0;
      v9 = v6;
      v10 = v5;
      do
      {
        v11 = *v9;
        ++v8;
        ++v9;
        *(ushort *)(v10 + 978) = v11;
        v10 += 2;
      }
      while ( v8 < 4 );
      v12 = 0;
      v13 = v6;
      do
      {
        v14 = v13[4];
        v15 = v5 + v12++;
        ++v13;
        *(uchar *)(v15 + 986) = v14;
      }
      while ( v12 < 4 );
      v16 = 0;
      v17 = v6 + 8;
      do
      {
        ++v16;
        *(uint *)(v5 + 992) = *v17;
        v18 = v17[4];
        ++v17;
        result = *(uint *)(v5 + 992) | (v18 << 16);
        *(uint *)(v5 + 992) = result;
        v5 += 4;
      }
      while ( v16 < 4 );
    }
  }
  return result;
}

//----- (0222F1A0) --------------------------------------------------------
BOOL __fastcall Function_222f1a0(int a1, short a2)
{
  *(ushort *)(a1 + 1284) = a2;
  return Function_20359dc(26, a1 + 1284, 60) == 1;
}

//----- (0222F1C4) --------------------------------------------------------
int __fastcall Function_104_222f1c4(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  int v5;
  ushort *v6;
  int result;

  v4 = a1;
  v5 = a4;
  v6 = a3;
  ++*(uchar *)(a4 + 1794);
  result = Function_203608c();
  if ( v4 != result )
  {
    result = 1404;
    *(uchar *)(v5 + 1404) = *v6;
  }
  return result;
}

//----- (0222F1EC) --------------------------------------------------------
BOOL __fastcall Function_222f1ec(int a1, short a2)
{
  *(ushort *)(a1 + 1284) = a2;
  return Function_20359dc(27, a1 + 1284, 60) == 1;
}

//----- (0222F210) --------------------------------------------------------
int __fastcall Function_104_222f210(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  int v5;
  ushort *v6;
  int result;

  v4 = a1;
  v5 = a4;
  v6 = a3;
  ++*(uchar *)(a4 + 1794);
  result = Function_203608c();
  if ( v4 != result )
  {
    result = 1405;
    *(uchar *)(v5 + 1405) = *v6;
  }
  return result;
}

//----- (0222F238) --------------------------------------------------------
BOOL __fastcall Function_222f238(int a1)
{
  int v1;
  int v2;
  char *v3;
  char *v4;
  int *v5;
  int v6;
  ushort *v7;
  short v8;
  int v9;
  char *v10;
  ushort *v11;
  short v12;
  int v13;
  ushort *v14;
  char *v15;
  ushort *v16;
  int v17;
  int v19;
  int v20;
  char v21;
  char v22;

  v1 = a1;
  v19 = a1 + 1284;
  v2 = Function_223aa50(*(uchar *)(a1 + 4));
  v20 = 0;
  if ( v2 > 0 )
  {
    v3 = &v21;
    v4 = &v22;
    do
    {
      v5 = GetAdrOfPkmnInParty(*(uint **)(v1 + 1236), v20);
      *v3 = GetPkmnData(v5, 0x47u, 0);
      *(uint *)v4 = GetPkmnData(v5, 0, 0);
      v4 += 4;
      ++v3;
      ++v20;
    }
    while ( v20 < v2 );
  }
  v6 = 0;
  if ( v2 > 0 )
  {
    v7 = (ushort *)v19;
    do
    {
      v8 = *(ushort *)(v1 + 1256);
      ++v6;
      v1 += 2;
      *v7 = v8;
      ++v7;
    }
    while ( v6 < v2 );
  }
  v9 = 0;
  if ( v2 > 0 )
  {
    v10 = &v21;
    v11 = (ushort *)(v19 + 2 * v2);
    do
    {
      v12 = (uchar)*v10;
      ++v9;
      ++v10;
      *v11 = v12;
      ++v11;
    }
    while ( v9 < v2 );
  }
  v13 = 0;
  if ( v2 > 0 )
  {
    v14 = (ushort *)(v19 + 4 * v2);
    v15 = &v22;
    v16 = (ushort *)(v19 + 2 * v2 + 4 * v2);
    do
    {
      ++v13;
      *v14 = *(uint *)v15;
      v17 = *(uint *)v15;
      v15 += 4;
      *v16 = HIWORD(v17);
      ++v14;
      ++v16;
    }
    while ( v13 < v2 );
  }
  return Function_20359dc(28, v19, 60) == 1;
}

//----- (0222F31C) --------------------------------------------------------
int __fastcall Function_104_222f31c(int a1, int a2, short *a3, int a4)
{
  int v4;
  int v5;
  int result;
  int v7;
  short *v8;
  int v9;
  short v10;
  int v11;
  short *v12;
  int v13;
  int v14;
  ushort *v15;
  ushort *v16;
  short *v17;

  v4 = a1;
  v5 = a4;
  v17 = a3;
  ++*(uchar *)(a4 + 1794);
  result = Function_203608c();
  if ( v4 != result )
  {
    result = Function_223aa50(*(uchar *)(v5 + 4));
    v7 = 0;
    if ( result > 0 )
    {
      v8 = v17;
      v9 = v5;
      do
      {
        v10 = *v8;
        ++v7;
        ++v8;
        *(ushort *)(v9 + 1412) = v10;
        v9 += 2;
      }
      while ( v7 < result );
    }
    v11 = 0;
    if ( result > 0 )
    {
      v12 = &v17[result];
      do
      {
        v13 = v5 + v11++;
        *(uchar *)(v13 + 1424) = *v12;
        ++v12;
      }
      while ( v11 < result );
    }
    v14 = 0;
    if ( result > 0 )
    {
      v15 = (ushort *)&v17[2 * result];
      v16 = (ushort *)&v17[2 * result + result];
      do
      {
        ++v14;
        *(uint *)(v5 + 1432) = *v15;
        ++v15;
        *(uint *)(v5 + 1432) |= *v16 << 16;
        v5 += 4;
        ++v16;
      }
      while ( v14 < result );
    }
  }
  return result;
}

//----- (0222F3B8) --------------------------------------------------------
BOOL __fastcall Function_222f3b8(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  uint v5;
  int v6;

  v1 = a1;
  Function_203041c(*(uint *)(a1 + 4));
  *(ushort *)(v1 + 962) = *(ushort *)(v1 + 20);
  *(ushort *)(v1 + 964) = *(ushort *)(v1 + 22);
  v2 = LoadVariableAreaAdress_17(*(uint *)(v1 + 4));
  Function_205e630(*(uchar *)(v1 + 16));
  v4 = v3;
  Function_205e630(*(uchar *)(v1 + 16));
  v6 = Function_205e6a8(v5);
  *(ushort *)(v1 + 982) = Function_2030698(v2, v4, v6);
  return Function_20359dc(42, v1 + 960, 40) == 1;
}

//----- (0222F418) --------------------------------------------------------
int __fastcall Function_104_222f418(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  ushort *v5;
  ushort *v6;
  int result;

  v4 = a1;
  v5 = (ushort *)a4;
  v6 = a3;
  ++*(uchar *)(a4 + 2586);
  result = Function_203608c();
  if ( v4 != result )
  {
    v5[1291] = v6[1];
    result = 2588;
    v5[1289] = v6[2];
    v5[1294] = v6[11];
  }
  return result;
}

//----- (0222F44C) --------------------------------------------------------
BOOL __fastcall Function_222f44c(int a1)
{
  int v1;
  int v2;

  v1 = 0;
  v2 = a1;
  do
  {
    ++v1;
    *(ushort *)(v2 + 960) = *(ushort *)(v2 + 48);
    v2 += 2;
  }
  while ( v1 < 14 );
  return Function_20359dc(43, a1 + 960, 40) == 1;
}

//----- (0222F480) --------------------------------------------------------
int __fastcall Function_104_222f480(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  int v5;
  ushort *v6;
  int result;
  int v8;

  v4 = a1;
  v5 = a4;
  v6 = a3;
  ++*(uchar *)(a4 + 2586);
  result = Function_203608c();
  if ( v4 != result )
  {
    result = Function_203608c();
    if ( result )
    {
      v8 = 0;
      do
      {
        result = *v6;
        ++v8;
        ++v6;
        *(ushort *)(v5 + 48) = result;
        v5 += 2;
      }
      while ( v8 < 14 );
    }
  }
  return result;
}

//----- (0222F4B8) --------------------------------------------------------
BOOL __fastcall Function_222f4b8(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  *(ushort *)(a1 + 960) = *(uchar *)(a1 + 2584);
  if ( Function_203608c() )
  {
    if ( *(uchar *)(v1 + 2587) == 4 )
    {
      v3 = *(uchar *)(v1 + 2584);
      if ( v3 != 4 )
        *(uchar *)(v1 + 2587) = v3 + 6;
    }
  }
  else if ( *(uchar *)(v1 + 2587) )
  {
    if ( *(uchar *)(v1 + 2587) == 10 )
    {
      v2 = *(uchar *)(v1 + 2584);
      if ( v2 != 4 )
        *(uchar *)(v1 + 2587) = v2;
    }
  }
  else
  {
    *(uchar *)(v1 + 2587) = *(uchar *)(v1 + 2584);
  }
  *(ushort *)(v1 + 962) = *(uchar *)(v1 + 2587);
  return Function_20359dc(44, v1 + 960, 40) == 1;
}

//----- (0222F530) --------------------------------------------------------
int __fastcall Function_104_222f530(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  int v5;
  ushort *v6;
  int result;
  char v8;

  v4 = a1;
  v5 = a4;
  v6 = a3;
  ++*(uchar *)(a4 + 2586);
  result = Function_203608c();
  if ( v4 != result )
  {
    *(uchar *)(v5 + 2585) = *v6;
    if ( Function_203608c() )
    {
      *(uchar *)(v5 + 2587) = v6[1];
      if ( *(uchar *)(v5 + 2587) != 4 )
        **(ushort **)(v5 + 2592) = -4387;
      result = *(uchar *)(v5 + 2585);
      if ( result == 4 )
      {
        result = *(uchar *)(v5 + 2584);
        if ( *(uchar *)(v5 + 2584) )
        {
          if ( result != 4 )
          {
            v8 = result + 6;
            result = 2587;
            *(uchar *)(v5 + 2587) = v8;
          }
        }
      }
    }
    else
    {
      result = *(uchar *)(v5 + 2587);
      if ( *(uchar *)(v5 + 2587) )
      {
        if ( result == 4 )
        {
          result = *(uchar *)(v5 + 2585);
          if ( result != 4 )
          {
            *(uchar *)(v5 + 2584) = result + 6;
            result = *(uchar *)(v5 + 2585) + 6;
            *(uchar *)(v5 + 2587) = result;
          }
        }
      }
      else
      {
        *(uchar *)(v5 + 2587) = *(uchar *)(v5 + 2585) + 6;
        result = *(uchar *)(v5 + 2585);
        if ( result != 4 )
        {
          result = *(uint *)(v5 + 2592);
          *(ushort *)result = -4387;
        }
      }
    }
  }
  return result;
}

//----- (0222F5D4) --------------------------------------------------------
BOOL __fastcall Function_222f5d4(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  short v6;
  int v7;
  int v8;
  int v9;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    ++v2;
    *(ushort *)(v3 + 960) = *(ushort *)(v3 + 620);
    v3 += 2;
  }
  while ( v2 < 4 );
  v4 = 0;
  v5 = a1;
  do
  {
    v6 = *(uchar *)(a1 + v4++ + 628);
    *(ushort *)(v5 + 968) = v6;
    v5 += 2;
  }
  while ( v4 < 4 );
  v7 = 0;
  v8 = a1 + 16;
  do
  {
    ++v7;
    *(ushort *)(v8 + 960) = *(uint *)(a1 + 632);
    v9 = *(uint *)(a1 + 632);
    a1 += 4;
    *(ushort *)(v8 + 968) = HIWORD(v9);
    v8 += 2;
  }
  while ( v7 < 4 );
  return Function_20359dc(45, v1 + 960, 40) == 1;
}

//----- (0222F650) --------------------------------------------------------
int __fastcall Function_104_222f650(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  int v5;
  ushort *v6;
  int result;
  int v8;
  short *v9;
  int v10;
  short v11;
  int v12;
  ushort *v13;
  short v14;
  int v15;
  int v16;
  ushort *v17;
  int v18;

  v4 = a1;
  v5 = a4;
  v6 = a3;
  ++*(uchar *)(a4 + 2586);
  result = Function_203608c();
  if ( v4 != result )
  {
    result = Function_203608c();
    if ( result )
    {
      v8 = 0;
      v9 = v6;
      v10 = v5;
      do
      {
        v11 = *v9;
        ++v8;
        ++v9;
        *(ushort *)(v10 + 620) = v11;
        v10 += 2;
      }
      while ( v8 < 4 );
      v12 = 0;
      v13 = v6;
      do
      {
        v14 = v13[4];
        v15 = v5 + v12++;
        ++v13;
        *(uchar *)(v15 + 628) = v14;
      }
      while ( v12 < 4 );
      v16 = 0;
      v17 = v6 + 8;
      do
      {
        ++v16;
        *(uint *)(v5 + 632) = *v17;
        v18 = v17[4];
        ++v17;
        result = *(uint *)(v5 + 632) | (v18 << 16);
        *(uint *)(v5 + 632) = result;
        v5 += 4;
      }
      while ( v16 < 4 );
    }
  }
  return result;
}

//----- (0222F6C8) --------------------------------------------------------
BOOL __fastcall Function_222f6c8(int a1, short a2)
{
  *(ushort *)(a1 + 960) = a2;
  return Function_20359dc(46, a1 + 960, 40) == 1;
}

//----- (0222F6E8) --------------------------------------------------------
int __fastcall Function_104_222f6e8(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  int v5;
  ushort *v6;
  int result;

  v4 = a1;
  v5 = a4;
  v6 = a3;
  ++*(uchar *)(a4 + 2586);
  result = Function_203608c();
  if ( v4 != result )
  {
    result = 2576;
    *(uchar *)(v5 + 2576) = *v6;
  }
  return result;
}

//----- (0222F710) --------------------------------------------------------
BOOL __fastcall Function_222f710(int a1, short a2)
{
  *(ushort *)(a1 + 960) = a2;
  return Function_20359dc(47, a1 + 960, 40) == 1;
}

//----- (0222F730) --------------------------------------------------------
int __fastcall Function_104_222f730(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  int v5;
  ushort *v6;
  int result;

  v4 = a1;
  v5 = a4;
  v6 = a3;
  ++*(uchar *)(a4 + 2586);
  result = Function_203608c();
  if ( v4 != result )
  {
    result = 2577;
    *(uchar *)(v5 + 2577) = *v6;
  }
  return result;
}

//----- (0222F758) --------------------------------------------------------
BOOL __fastcall Function_222f758(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int *v5;
  uint v6;
  int v8;

  v1 = a1;
  v8 = Function_223b7a8(*(uchar *)(a1 + 16), 0);
  v2 = GetPkmnDataSize();
  v3 = 0;
  if ( v8 > 0 )
  {
    v4 = 0;
    do
    {
      v5 = GetAdrOfPkmnInParty(*(uint **)(v1 + 40), v3);
      MI_CpuCopy8((int)v5, v1 + 1040 + v4, v2, v6);
      ++v3;
      v4 += v2;
    }
    while ( v3 < v8 );
  }
  return Function_203597c(48, v1 + 1040, 512) == 1;
}

//----- (0222F7BC) --------------------------------------------------------
int __fastcall Function_104_222f7bc(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;
  uint v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v4 = a1;
  v11 = a3;
  v12 = a4;
  ++*(uchar *)(a4 + 2586);
  result = Function_203608c();
  if ( v4 != result )
  {
    v13 = Function_223b7a8(*(uchar *)(v12 + 16), 0);
    v6 = GetPkmnDataSize();
    v8 = AllocPkmnData(0xBu);
    v9 = 0;
    if ( v13 > 0 )
    {
      v10 = 0;
      do
      {
        MI_CpuCopy8(v11 + v10, (uint)v8, v6, v7);
        CopyPkmnDataToParty(*(uint **)(v12 + 40), v8);
        ++v9;
        v10 += v6;
      }
      while ( v9 < v13 );
    }
    free((int)v8);
    result = Function_203608c();
    if ( result )
    {
      Function_207a184(*(uint **)(v12 + 40), 0, 2);
      result = Function_207a184(*(uint **)(v12 + 40), 1, 3);
    }
  }
  return result;
}

//----- (0222F84C) --------------------------------------------------------
int __fastcall Function_104_222f84c(int a1, int a2, int a3)
{
  int v3;
  int v4;

  v3 = a1;
  v4 = a2;
  if ( a3 > 512 )
    ErrorHandler();
  return v4 + 1552 + (v3 << 9);
}

//----- (0222F86C) --------------------------------------------------------
BOOL __fastcall Function_222f86c(int a1)
{
  ushort *v1;

  v1 = (ushort *)a1;
  Function_20305b8(*(uint *)(a1 + 4));
  v1[531] = v1[12];
  v1[532] = v1[13];
  return Function_20359dc(65, (int)(v1 + 530), 40) == 1;
}

//----- (0222F8A0) --------------------------------------------------------
int __fastcall Function_104_222f8a0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;

  v4 = a1;
  v5 = a4;
  v6 = a3;
  ++*(uchar *)(a4 + 2684);
  result = Function_203608c();
  if ( v4 != result )
  {
    *(ushort *)(v5 + 2680) = *(ushort *)(v6 + 2);
    result = 2678;
    *(ushort *)(v5 + 2678) = *(ushort *)(v6 + 4);
  }
  return result;
}

//----- (0222F8D0) --------------------------------------------------------
BOOL __fastcall Function_222f8d0(int a1)
{
  int v1;
  int v2;

  v1 = 0;
  v2 = a1;
  do
  {
    ++v1;
    *(ushort *)(v2 + 1060) = *(ushort *)(v2 + 120);
    v2 += 2;
  }
  while ( v1 < 14 );
  return Function_20359dc(66, a1 + 1060, 40) == 1;
}

//----- (0222F908) --------------------------------------------------------
int __fastcall Function_104_222f908(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  int v5;
  ushort *v6;
  int result;
  int v8;

  v4 = a1;
  v5 = a4;
  v6 = a3;
  ++*(uchar *)(a4 + 2684);
  result = Function_203608c();
  if ( v4 != result )
  {
    result = Function_203608c();
    if ( result )
    {
      v8 = 0;
      do
      {
        result = v5 + 120;
        ++v8;
        *(ushort *)(v5 + 120) = *v6;
        ++v6;
        v5 += 2;
      }
      while ( v8 < 14 );
    }
  }
  return result;
}

//----- (0222F944) --------------------------------------------------------
BOOL __fastcall Function_222f944(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  short v6;
  int v7;
  int v8;
  int v9;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    ++v2;
    *(ushort *)(v3 + 1060) = *(ushort *)(v3 + 788);
    v3 += 2;
  }
  while ( v2 < 4 );
  v4 = 0;
  v5 = a1;
  do
  {
    v6 = *(uchar *)(a1 + v4++ + 796);
    *(ushort *)(v5 + 1068) = v6;
    v5 += 2;
  }
  while ( v4 < 4 );
  v7 = 0;
  v8 = a1 + 16;
  do
  {
    ++v7;
    *(ushort *)(v8 + 1060) = *(uint *)(a1 + 800);
    v9 = *(uint *)(a1 + 800);
    a1 += 4;
    *(ushort *)(v8 + 1068) = HIWORD(v9);
    v8 += 2;
  }
  while ( v7 < 4 );
  return Function_20359dc(67, v1 + 1060, 40) == 1;
}

//----- (0222F9C0) --------------------------------------------------------
int __fastcall Function_104_222f9c0(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  int v5;
  ushort *v6;
  int result;
  int v8;
  short *v9;
  int v10;
  short v11;
  int v12;
  ushort *v13;
  short v14;
  int v15;
  int v16;
  ushort *v17;
  int v18;

  v4 = a1;
  v5 = a4;
  v6 = a3;
  ++*(uchar *)(a4 + 2684);
  result = Function_203608c();
  if ( v4 != result )
  {
    result = Function_203608c();
    if ( result )
    {
      v8 = 0;
      v9 = v6;
      v10 = v5;
      do
      {
        v11 = *v9;
        ++v8;
        ++v9;
        *(ushort *)(v10 + 788) = v11;
        v10 += 2;
      }
      while ( v8 < 4 );
      v12 = 0;
      v13 = v6;
      do
      {
        v14 = v13[4];
        v15 = v5 + v12++;
        ++v13;
        *(uchar *)(v15 + 796) = v14;
      }
      while ( v12 < 4 );
      v16 = 0;
      v17 = v6 + 8;
      do
      {
        ++v16;
        *(uint *)(v5 + 800) = *v17;
        v18 = v17[4];
        ++v17;
        result = *(uint *)(v5 + 800) | (v18 << 16);
        *(uint *)(v5 + 800) = result;
        v5 += 4;
      }
      while ( v16 < 4 );
    }
  }
  return result;
}

//----- (0222FA38) --------------------------------------------------------
BOOL __fastcall Function_222fa38(int a1, short a2)
{
  *(ushort *)(a1 + 1060) = a2;
  return Function_20359dc(68, a1 + 1060, 40) == 1;
}

//----- (0222FA5C) --------------------------------------------------------
int __fastcall Function_104_222fa5c(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  int v5;
  ushort *v6;
  int result;

  v4 = a1;
  v5 = a4;
  v6 = a3;
  ++*(uchar *)(a4 + 2684);
  result = Function_203608c();
  if ( v4 != result )
  {
    result = 2676;
    *(uchar *)(v5 + 2676) = *v6;
  }
  return result;
}

//----- (0222FA84) --------------------------------------------------------
BOOL __fastcall Function_222fa84(int a1, short a2)
{
  *(ushort *)(a1 + 1060) = a2;
  return Function_20359dc(69, a1 + 1060, 40) == 1;
}

//----- (0222FAA8) --------------------------------------------------------
int __fastcall Function_104_222faa8(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  int v5;
  ushort *v6;
  int result;

  v4 = a1;
  v5 = a4;
  v6 = a3;
  ++*(uchar *)(a4 + 2684);
  result = Function_203608c();
  if ( v4 != result )
  {
    result = 2677;
    *(uchar *)(v5 + 2677) = *v6;
  }
  return result;
}

//----- (0222FAD0) --------------------------------------------------------
BOOL __fastcall Function_222fad0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int *v5;
  uint v6;
  int v8;

  v1 = a1;
  v8 = Function_223bd70(*(uchar *)(a1 + 16), 0);
  v2 = GetPkmnDataSize();
  v3 = 0;
  if ( v8 > 0 )
  {
    v4 = 0;
    do
    {
      v5 = GetAdrOfPkmnInParty(*(uint **)(v1 + 112), v3);
      MI_CpuCopy8((int)v5, v1 + 1140 + v4, v2, v6);
      ++v3;
      v4 += v2;
    }
    while ( v3 < v8 );
  }
  return Function_203597c(70, v1 + 1140, 512) == 1;
}

//----- (0222FB34) --------------------------------------------------------
int __fastcall Function_104_222fb34(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;
  uint v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v4 = a1;
  v11 = a3;
  v12 = a4;
  ++*(uchar *)(a4 + 2684);
  result = Function_203608c();
  if ( v4 != result )
  {
    v13 = Function_223bd70(*(uchar *)(v12 + 16), 0);
    v6 = GetPkmnDataSize();
    v8 = AllocPkmnData(0xBu);
    v9 = 0;
    if ( v13 > 0 )
    {
      v10 = 0;
      do
      {
        MI_CpuCopy8(v11 + v10, (uint)v8, v6, v7);
        CopyPkmnDataToParty(*(uint **)(v12 + 112), v8);
        ++v9;
        v10 += v6;
      }
      while ( v9 < v13 );
    }
    free((int)v8);
    result = Function_203608c();
    if ( result )
    {
      Function_207a184(*(uint **)(v12 + 112), 0, 2);
      result = Function_207a184(*(uint **)(v12 + 112), 1, 3);
    }
  }
  return result;
}

//----- (0222FBC4) --------------------------------------------------------
int __fastcall Function_104_222fbc4(int a1, int a2, int a3)
{
  int v3;
  int v4;

  v3 = a1;
  v4 = a2;
  if ( a3 > 512 )
    ErrorHandler();
  return v4 + 1652 + (v3 << 9);
}

//----- (0222FBE4) --------------------------------------------------------
int __fastcall Function_222fbe4(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = Function_222ea48(a1);
  v3 = Function_222fc14(v1, v2);
  if ( !v3 )
    ErrorHandler();
  return v3;
}

//----- (0222FC00) --------------------------------------------------------
int __fastcall Function_222fc00(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_222ea48(a1);
  return Function_222fc8c(v1, v2);
}

//----- (0222FC14) --------------------------------------------------------
int __fastcall Function_222fc14(int *a1, uint a2)
{
  if ( a2 < 0x8000 )
    return 0;
  if ( a2 < 0x8008 )
    return (int)a1 + 2 * (a2 - 0x8000) + 8;
  if ( a2 < 0x8010 )
    return Function_222e91c(*a1, a2 - 32776);
  if ( a2 < 0x8014 )
    return (int)a1 + 2 * (a2 - 32784) + 120;
  if ( a2 == 64787 )
    return 0;
  if ( a2 == 61166 )
    return 0;
  if ( a2 != 61167 )
    ErrorHandler();
  return 0;
}

//----- (0222FC8C) --------------------------------------------------------
uint __fastcall Function_222fc8c(int *a1, uint a2)
{
  uint v2;
  ushort *v3;

  v2 = a2;
  v3 = (ushort *)Function_222fc14(a1, a2);
  if ( v3 )
    v2 = *v3;
  return v2;
}

//----- (0222FCA0) --------------------------------------------------------
int Function_222fca0()
{
  return 0;
}

//----- (0222FCA4) --------------------------------------------------------
int __fastcall Function_222fca4(int a1)
{
  Function_222e980(a1);
  return 0;
}

//----- (0222FCB0) --------------------------------------------------------
int __fastcall Function_222fcb0(int a1)
{
  int **v1;

  v1 = (int **)a1;
  Function_222e980(a1);
  Function_209b9b4(**v1);
  return 0;
}

//----- (0222FCC4) --------------------------------------------------------
int __fastcall Function_222fcc4(int **a1)
{
  int v1;
  int *v2;
  char v3;

  v1 = (int)a1;
  v2 = *a1;
  v3 = Function_222fc00((int)a1);
  Function_209b9bc(*v2, v3, 0xFFFF);
  Function_222e974(v1, (int)Function_222fcec);
  return 1;
}

//----- (0222FCEC) --------------------------------------------------------
int Function_222fcec()
{
  return 1;
}

//----- (0222FCF0) --------------------------------------------------------
int __fastcall Function_222fcf0(int **a1)
{
  int v1;
  int *v2;
  char v3;
  short v4;

  v1 = (int)a1;
  v2 = *a1;
  v3 = Function_222fc00((int)a1);
  v4 = Function_222fc00(v1);
  Function_209b9bc(*v2, v3, v4);
  Function_222e980(v1);
  return 0;
}

//----- (0222FD18) --------------------------------------------------------
int __fastcall Function_222fd18(int a1)
{
  int v1;
  short v2;
  int v3;
  short v4;

  v1 = a1;
  v2 = Function_222ea48(a1);
  v3 = Function_222ea48(v1);
  v4 = v3;
  *(ushort *)Function_222fc14((int *)v1, v3) = v2;
  *(ushort *)(v1 + 120) = v4;
  Function_222e974(v1, (int)Function_222fd4c);
  return 1;
}

//----- (0222FD4C) --------------------------------------------------------
BOOL __fastcall Function_222fd4c(int a1)
{
  ushort *v1;

  v1 = (ushort *)Function_222fc14((int *)a1, *(ushort *)(a1 + 120));
  return --*v1 == 0;
}

//----- (0222FD6C) --------------------------------------------------------
int __fastcall Function_222fd6c(int a1)
{
  int v1;
  ushort *v2;

  v1 = a1;
  v2 = (ushort *)Function_222fbe4(a1);
  *v2 = Function_222ea48(v1);
  return 0;
}

//----- (0222FD84) --------------------------------------------------------
int __fastcall Function_222fd84(int a1)
{
  int v1;
  ushort *v2;

  v1 = a1;
  v2 = (ushort *)Function_222fbe4(a1);
  *v2 = *(ushort *)Function_222fbe4(v1);
  return 0;
}

//----- (0222FD9C) --------------------------------------------------------
int __fastcall Function_222fd9c(int a1)
{
  int v1;
  ushort *v2;

  v1 = a1;
  v2 = (ushort *)Function_222fbe4(a1);
  *v2 += Function_222fc00(v1);
  return 0;
}

//----- (0222FDB8) --------------------------------------------------------
int __fastcall Function_222fdb8(int a1)
{
  int v1;
  ushort *v2;

  v1 = a1;
  v2 = (ushort *)Function_222fbe4(a1);
  *v2 -= Function_222fc00(v1);
  return 0;
}

//----- (0222FDD4) --------------------------------------------------------
int __fastcall Function_222fdd4(uint a1, uint a2)
{
  if ( a1 < a2 )
    return 0;
  if ( a1 == a2 )
    return 1;
  return 2;
}

//----- (0222FDE8) --------------------------------------------------------
int __fastcall Function_222fde8(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = Function_222fc00(a1);
  v3 = Function_222ea48(v1);
  *(uchar *)(v1 + 140) = Function_222fdd4(v2, v3);
  return 0;
}

//----- (0222FE08) --------------------------------------------------------
int __fastcall Function_222fe08(int a1)
{
  int v1;
  ushort *v2;
  ushort *v3;

  v1 = a1;
  v2 = (ushort *)Function_222fbe4(a1);
  v3 = (ushort *)Function_222fbe4(v1);
  *(uchar *)(v1 + 140) = Function_222fdd4(*v2, *v3);
  return 0;
}

//----- (0222FE2C) --------------------------------------------------------
int __fastcall Function_222fe2c(int result, int a2)
{
  *(uint *)(result + 28) = a2;
  return result;
}

//----- (0222FE30) --------------------------------------------------------
int __fastcall Function_222fe30(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_222ea60(a1);
  Function_222fe2c(v1, *(uint *)(v1 + 28) + v2);
  return 0;
}

//----- (0222FE48) --------------------------------------------------------
int __fastcall Function_222fe48(int a1)
{
  int v1;
  uchar *v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = *(uchar **)(a1 + 28);
  *(uint *)(a1 + 28) = v2 + 1;
  v3 = *v2;
  v4 = Function_222ea60(a1);
  if ( *((uchar *)dword_223F648 + 3 * v3 + *(uchar *)(v1 + 140)) == 1 )
    Function_222fe2c(v1, *(uint *)(v1 + 28) + v4);
  return 0;
}

//----- (0222FE80) --------------------------------------------------------
int __fastcall Function_222fe80(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_222ea60(a1);
  Function_222ea2c(v1, *(uint *)(v1 + 28) + v2);
  return 0;
}

//----- (0222FE98) --------------------------------------------------------
int __fastcall Function_222fe98(int a1)
{
  Function_222ea3c(a1);
  return 0;
}

//----- (0222FEA4) --------------------------------------------------------
int __fastcall Function_222fea4(int a1)
{
  int v1;
  uchar *v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = *(uchar **)(a1 + 28);
  *(uint *)(a1 + 28) = v2 + 1;
  v3 = *v2;
  v4 = Function_222ea60(a1);
  if ( *((uchar *)dword_223F648 + 3 * v3 + *(uchar *)(v1 + 140)) == 1 )
    Function_222ea2c(v1, *(uint *)(v1 + 28) + v4);
  return 0;
}

//----- (0222FEDC) --------------------------------------------------------
int __fastcall Function_222fedc(int a1)
{
  uint *v1;
  int v2;
  char v4;
  char v5;
  char v6;
  char v7;

  v1 = (uint *)a1;
  v2 = Function_222ea48(a1);
  v4 = 0;
  v5 = 0;
  v6 = 1;
  v7 = 0;
  Function_2231f74(*v1, v1[32], v2);
  return 0;
}

//----- (0222FF0C) --------------------------------------------------------
int __fastcall Function_222ff0c(int a1)
{
  uint *v1;
  int v2;

  v1 = (uint *)a1;
  v2 = Function_222ea48(a1);
  Function_2231f74(*v1, v1[32], v2);
  Function_222e974((int)v1, (int)Function_222ff6c);
  return 1;
}

//----- (0222FF3C) --------------------------------------------------------
int __fastcall Function_222ff3c(int a1)
{
  uint *v1;
  int v2;

  v1 = (uint *)a1;
  v2 = Function_222ea48(a1);
  Function_2231f74(*v1, v1[32], v2);
  Function_222e974((int)v1, (int)Function_222ff6c);
  return 1;
}

//----- (0222FF6C) --------------------------------------------------------
BOOL __fastcall Function_222ff6c(int a1)
{
  return Function_201d724(*(uchar *)(*(uint *)a1 + 80)) == 0;
}

//----- (0222FF84) --------------------------------------------------------
int __fastcall Function_222ff84(uint *a1)
{
  Function_2232088(*a1);
  return 0;
}

//----- (0222FF90) --------------------------------------------------------
int __fastcall Function_222ff90(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = Function_222ea48(a1);
  v3 = Function_222ea48(v1);
  v4 = Function_222ea48(v1);
  v5 = Function_222ea48(v1);
  Function_200f174(0, v4, v4, v5, v2, v3, 11);
  Function_200f32c(0);
  Function_200f32c(1);
  return 0;
}

//----- (0222FFD8) --------------------------------------------------------
int __fastcall Function_222ffd8(int a1)
{
  Function_222e974(a1, (int)Function_222ffe8);
  return 1;
}

//----- (0222FFE8) --------------------------------------------------------
BOOL Function_222ffe8()
{
  return Function_200f2ac() == 1;
}

//----- (0222FFFC) --------------------------------------------------------
int __fastcall Function_222fffc(int *a1)
{
  int *v1;
  uchar *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  short v9;
  int v10;

  v1 = a1;
  v2 = (uchar *)a1[7];
  v3 = *a1;
  a1[7] = (int)(v2 + 1);
  v4 = *v2;
  a1[7] = (int)(v2 + 2);
  v5 = v2[1];
  a1[7] = (int)(v2 + 3);
  v6 = v2[2];
  a1[7] = (int)(v2 + 4);
  v7 = v2[3];
  v8 = Function_222ea48((int)a1);
  v9 = v8;
  v10 = Function_222fc14(v1, v8);
  *(uint *)(v3 + 96) = Function_2232258(v3, v4, v5, v6, v7, v10, *(uint *)(v3 + 68), 0);
  *((ushort *)v1 + 60) = v9;
  return 1;
}

//----- (02230058) --------------------------------------------------------
int __fastcall Function_2230058(int *a1)
{
  int *v1;
  uchar *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  short v9;
  int v10;

  v1 = a1;
  v2 = (uchar *)a1[7];
  v3 = *a1;
  a1[7] = (int)(v2 + 1);
  v4 = *v2;
  a1[7] = (int)(v2 + 2);
  v5 = v2[1];
  a1[7] = (int)(v2 + 3);
  v6 = v2[2];
  a1[7] = (int)(v2 + 4);
  v7 = v2[3];
  v8 = Function_222ea48((int)a1);
  v9 = v8;
  v10 = Function_222fc14(v1, v8);
  *(uint *)(v3 + 96) = Function_2232258(v3, v4, v5, v6, v7, v10, *(uint *)(v3 + 68), v1[32]);
  *((ushort *)v1 + 60) = v9;
  return 1;
}

//----- (022300B8) --------------------------------------------------------
int __fastcall Function_22300b8(int *a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = (int)a1;
  v2 = *a1;
  v3 = Function_222ea48((int)a1);
  v4 = Function_222ea48(v1);
  Function_22322a8(*(uint *)(v2 + 96), v3, 255, v4);
  return 0;
}

//----- (022300DC) --------------------------------------------------------
int __fastcall Function_22300dc(int *a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = (int)a1;
  v2 = *a1;
  v3 = Function_222ea48((int)a1);
  v4 = Function_222ea48(v1);
  v5 = Function_222ea48(v1);
  Function_22322a8(*(uint *)(v2 + 96), v3, v4, v5);
  return 0;
}

//----- (02230108) --------------------------------------------------------
int __fastcall Function_2230108(int a1)
{
  int v1;

  v1 = a1;
  Function_22322b0(*(uint *)(*(uint *)a1 + 96));
  Function_222e974(v1, (int)Function_2230124);
  return 1;
}

//----- (02230124) --------------------------------------------------------
int __fastcall Function_2230124(int a1)
{
  int v1;

  v1 = *(uint *)a1;
  if ( *(ushort *)Function_222fc14((int *)a1, *(ushort *)(a1 + 120)) == 61166 )
    return 0;
  *(uint *)(v1 + 96) = 0;
  return 1;
}

//----- (0223014C) --------------------------------------------------------
int __fastcall Function_223014c(int *a1)
{
  int *v1;
  uchar *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  short v9;
  int v10;

  v1 = a1;
  v2 = (uchar *)a1[7];
  v3 = *a1;
  a1[7] = (int)(v2 + 1);
  v4 = *v2;
  a1[7] = (int)(v2 + 2);
  v5 = v2[1];
  a1[7] = (int)(v2 + 3);
  v6 = v2[2];
  a1[7] = (int)(v2 + 4);
  v7 = v2[3];
  v8 = Function_222ea48((int)a1);
  v9 = v8;
  v10 = Function_222fc14(v1, v8);
  *(uint *)(v3 + 96) = Function_22325fc(v3, v4, v5, v6, v7, v10, *(uint *)(v3 + 68), 0);
  *((ushort *)v1 + 60) = v9;
  return 1;
}

//----- (022301A8) --------------------------------------------------------
int __fastcall Function_22301a8(int *a1)
{
  int *v1;
  uchar *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  short v9;
  int v10;

  v1 = a1;
  v2 = (uchar *)a1[7];
  v3 = *a1;
  a1[7] = (int)(v2 + 1);
  v4 = *v2;
  a1[7] = (int)(v2 + 2);
  v5 = v2[1];
  a1[7] = (int)(v2 + 3);
  v6 = v2[2];
  a1[7] = (int)(v2 + 4);
  v7 = v2[3];
  v8 = Function_222ea48((int)a1);
  v9 = v8;
  v10 = Function_222fc14(v1, v8);
  *(uint *)(v3 + 96) = Function_22325fc(v3, v4, v5, v6, v7, v10, *(uint *)(v3 + 68), v1[32]);
  *((ushort *)v1 + 60) = v9;
  return 1;
}

//----- (02230208) --------------------------------------------------------
int __fastcall Function_2230208(int *a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = (int)a1;
  v2 = *a1;
  v3 = Function_222ea48((int)a1);
  v4 = Function_222ea48(v1);
  v5 = Function_222ea48(v1);
  Function_223261c(*(uint *)(v2 + 96), v3, v4, v5);
  return 0;
}

//----- (02230234) --------------------------------------------------------
int __fastcall Function_2230234(int a1)
{
  int v1;

  v1 = a1;
  Function_2232624(*(uint *)(*(uint *)a1 + 96));
  Function_222e974(v1, (int)Function_2230124);
  return 1;
}

//----- (02230250) --------------------------------------------------------
int __fastcall Function_2230250(int a1)
{
  Function_2232b5c(*(uint *)(*(uint *)a1 + 96));
  return 1;
}

//----- (02230260) --------------------------------------------------------
int __fastcall Function_2230260(int **a1)
{
  int v1;
  int *v2;
  uint **v3;
  short v4;
  char *v5;
  short v6;

  v1 = (int)a1;
  v2 = *a1;
  v3 = (uint **)Function_222e924(*a1);
  v4 = Function_222ea48(v1);
  v5 = *(char **)(v1 + 28);
  v6 = v4;
  *(uint *)(v1 + 28) = v5 + 1;
  v2[29] = Function_2002054(*v3, (uchar *)dword_223F640, 985, 12, *v5, v2[13]);
  *(ushort *)(v1 + 120) = v6;
  Function_222e974(v1, (int)Function_22302b4);
  return 1;
}

//----- (022302B4) --------------------------------------------------------
int __fastcall Function_22302b4(int a1)
{
  int v1;
  ushort *v2;
  int v3;

  v1 = *(uint *)a1;
  v2 = (ushort *)Function_222fc14((int *)a1, *(ushort *)(a1 + 120));
  v3 = Function_2002114(*(uint *)(v1 + 116), *(uint *)(v1 + 52));
  if ( v3 == -1 )
    return 0;
  *v2 = v3 != 0;
  return 1;
}

//----- (022302E8) --------------------------------------------------------
int __fastcall Function_22302e8(int **a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  char *v6;
  int v7;
  int v8;
  int v9;
  int i;
  int v11;
  int v13;
  int v14;
  int *v15;
  ushort v16;
  char v17;
  int v18;

  v18 = a4;
  v13 = (int)a1;
  v15 = *a1;
  v4 = Function_209b974(**a1);
  v5 = Function_222ea60(v13);
  v14 = *(uint *)(v13 + 28);
  *(uint *)(v13 + 28) = v14 + v5;
  while ( 1 )
  {
    v16 = Function_222fc00(v13);
    if ( v16 == 64787 )
      break;
    v6 = *(char **)(v13 + 28);
    *(uint *)(v13 + 28) = v6 + 1;
    v17 = *v6;
    if ( v16 == 61166 )
    {
      v7 = Function_209b970(*v15);
      v8 = LoadTrainerDataAdress(*(uint *)(v7 + 8));
      v16 = Function_222e5f0(v8);
      Function_223d0ec(v4, &v16);
    }
    else if ( v16 == 61167 )
    {
      if ( Function_2035e38() == 1 )
      {
        v9 = Function_2035e18();
        for ( i = 0; i < v9; ++i )
        {
          v11 = Function_2032ee8(i);
          v16 = Function_222e5f0(v11);
          Function_223d0ec(v4, &v16);
        }
      }
    }
    else
    {
      Function_223d0ec(v4, &v16);
    }
  }
  *(uint *)(v13 + 28) = v14;
  return 0;
}

//----- (022303A8) --------------------------------------------------------
int __fastcall Function_22303a8(int **a1)
{
  int v1;
  int v2;
  int v3;

  v1 = (int)a1;
  v2 = Function_209b974(**a1);
  v3 = Function_222fc00(v1);
  Function_223d148(v2, v3);
  return 0;
}

//----- (022303C8) --------------------------------------------------------
int __fastcall Function_22303c8(int **a1)
{
  int v1;
  int v2;
  uint *v3;
  int v4;
  char *v5;
  char *v6;
  char *v7;
  int v8;
  int v9;
  uchar *v10;
  int v11;
  int v13;
  int v14;
  int *v15;
  ushort v16;
  short v17;
  ushort v18;
  short v19;
  short v20;
  char v21;
  char v22;
  char v23;

  v1 = (int)a1;
  v15 = *a1;
  v14 = Function_209b974(**a1);
  v2 = Function_222ea60(v1);
  v13 = *(uint *)(v1 + 28);
  *(uint *)(v1 + 28) = v13 + v2;
  v3 = (uint *)(v1 + 28);
  while ( 1 )
  {
    v4 = -1;
    v18 = Function_222fc00(v1);
    if ( v18 == 64787 )
      break;
    v16 = Function_222fc00(v1);
    v5 = *(char **)(v1 + 28);
    ++*v3;
    v21 = *v5;
    v19 = Function_222ea48(v1) - 8;
    v20 = Function_222ea48(v1) - 16;
    v6 = *(char **)(v1 + 28);
    ++*v3;
    v22 = *v6;
    v7 = *(char **)(v1 + 28);
    ++*v3;
    v23 = *v7;
    v17 = 0;
    if ( v16 == 61166 )
    {
      v8 = Function_209b970(*v15);
      v9 = LoadTrainerDataAdress(*(uint *)(v8 + 8));
      v16 = Function_222e5f0(v9);
      v4 = 31;
    }
    else if ( v16 == 61167 )
    {
      v10 = *(uchar **)(v1 + 28);
      ++*v3;
      v11 = Function_2032ee8(*v10);
      v16 = Function_222e5f0(v11);
    }
    Function_223d180(v14, &v16, v4);
  }
  *(uint *)(v1 + 28) = v13;
  return 0;
}

//----- (022304A0) --------------------------------------------------------
int __fastcall Function_22304a0(int **a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = (int)a1;
  v2 = Function_209b974(**a1);
  v3 = Function_222fc00(v1);
  v4 = ((int (__fastcall *)(uint, int))dword_222BF18[0])(*(uint *)(v2 + 20), v3);
  Function_223d200(v2, v4);
  return 0;
}

//----- (022304C8) --------------------------------------------------------
int __fastcall Function_22304c8(int **a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uchar *v7;
  int v8;
  int v10;

  v10 = a4;
  v4 = (int)a1;
  v5 = Function_209b974(**a1);
  v6 = Function_222fc00(v4);
  v7 = *(uchar **)(v4 + 28);
  *(uint *)(v4 + 28) = v7 + 1;
  v8 = *v7;
  v10 = 0;
  Function_223d258(v5, v6);
  if ( !v10 )
    ErrorHandler();
  ((void (__fastcall *)(int, int))dword_222D008[0])(v10, v8);
  return 0;
}

//----- (02230508) --------------------------------------------------------
int Function_2230508()
{
  return 0;
}

//----- (0223050C) --------------------------------------------------------
int __fastcall Function_223050c(int **a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int v6;
  int v7;

  v1 = (int)a1;
  v2 = *a1;
  v7 = Function_209b974(**a1);
  v3 = Function_222fc00(v1);
  v4 = Function_222ea60(v1);
  v6 = Function_223d5a8(*v2, v3);
  if ( !v6 )
    ErrorHandler();
  Function_223056c(v3, v6, *(uint *)(v1 + 28) + v4, *(uint *)(v7 + 48), (char *)v2 + 89, v2[13]);
  ++*((uchar *)v2 + 89);
  return 0;
}

//----- (0223056C) --------------------------------------------------------
uint *__fastcall Function_223056c(short a1, int a2, int a3, int a4, int a5, uint a6)
{
  short v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint *result;

  v6 = a1;
  v7 = a2;
  v8 = a3;
  v9 = a4;
  v10 = malloc(a6, 24);
  MI_CpuFill8((ushort *)v10, 0, 0x18u);
  *(uint *)(v10 + 20) = v7;
  *(uint *)(v10 + 12) = v8;
  *(uint *)(v10 + 16) = v9;
  *(ushort *)(v10 + 4) = v6;
  *(uint *)(v10 + 8) = a5;
  if ( *(uint *)(v7 + 56) )
    ErrorHandler();
  result = AddTaskToTaskList1((int)Function_2232b78, v10, 0xEAC4u);
  *(uint *)(v7 + 56) = result;
  return result;
}

//----- (022305B8) --------------------------------------------------------
int __fastcall Function_22305b8(int a1)
{
  Function_222e974(a1, (int)Function_22305c8);
  return 1;
}

//----- (022305C8) --------------------------------------------------------
BOOL __fastcall Function_22305c8(int a1)
{
  return *(uchar *)(*(uint *)a1 + 89) == 0;
}

//----- (022305DC) --------------------------------------------------------
int __fastcall Function_22305dc(int **a1)
{
  int v1;
  int *v2;
  uint *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  int v11;

  v1 = (int)a1;
  v2 = *a1;
  v3 = (uint *)Function_209b974(**a1);
  v4 = Function_222ea60(v1);
  v5 = *(uint *)(v1 + 28);
  *(uint *)(v1 + 28) = v5 + v4;
  v11 = v5;
  v8 = LoadFromNARC_8(151, v2[13], v6, v7);
  while ( 1 )
  {
    v9 = Function_222fc00(v1);
    if ( v9 == 64787 )
      break;
    Function_223d768(v3[13], v3[14], v8, v3[1], v9);
    Function_223d29c(v3, v9);
  }
  Call_FS_CloseFile(v8);
  *(uint *)(v1 + 28) = v11;
  return 0;
}

//----- (02230640) --------------------------------------------------------
int __fastcall Function_2230640(int **a1)
{
  int v1;
  int v2;
  int v3;

  v1 = (int)a1;
  v2 = Function_209b974(**a1);
  v3 = Function_222fc00(v1);
  Function_223d7ec(*(uint *)(v2 + 56), v3);
  Function_223d2cc(v2, v3);
  return 0;
}

//----- (0223066C) --------------------------------------------------------
int __fastcall Function_223066c(int **a1)
{
  int v1;
  int v2;
  int v3;
  int *v4;
  int v5;
  short v6;
  short v7;
  int v8;
  uchar *v9;
  int v10;
  int v11;
  uchar *v12;
  int v13;
  int *v14;
  int v16;

  v1 = (int)a1;
  v2 = Function_209b974(**a1);
  v3 = Function_222ea60(v1);
  v16 = *(uint *)(v1 + 28);
  *(uint *)(v1 + 28) += v3;
  v4 = (int *)(v1 + 28);
  while ( 1 )
  {
    v5 = Function_222fc00(v1);
    if ( v5 == 64787 )
      break;
    v6 = Function_222fc00(v1);
    v7 = Function_222fc00(v1);
    v8 = Function_222fc00(v1);
    v9 = *(uchar **)(v1 + 28);
    v10 = *v4 + 1;
    *v4 = v10;
    v11 = *v9;
    v12 = *(uchar **)(v1 + 28);
    *v4 = v10 + 1;
    v13 = *v12;
    v14 = (int *)Function_223d2fc(v2, v13, v5);
    Function_200d4c4(v14, v6, v7);
    Function_200d3f4((uint *)v14, v8);
    Function_223d378(v2, v13, v11);
  }
  *(uint *)(v1 + 28) = v16;
  return 0;
}

//----- (02230708) --------------------------------------------------------
int __fastcall Function_2230708(int **a1)
{
  int v1;
  int v2;
  int v3;

  v1 = (int)a1;
  v2 = Function_209b974(**a1);
  v3 = Function_222fc00(v1);
  Function_223d348(v2, v3);
  return 0;
}

//----- (02230728) --------------------------------------------------------
int __fastcall Function_2230728(int **a1)
{
  int v1;
  int v2;
  int v3;
  uchar *v4;
  int v5;
  uint *v6;

  v1 = (int)a1;
  v2 = Function_209b974(**a1);
  v3 = Function_222fc00(v1);
  v4 = *(uchar **)(v1 + 28);
  *(uint *)(v1 + 28) = v4 + 1;
  v5 = *v4;
  v6 = (uint *)Function_223d370(v2, v3);
  if ( !v6 )
    ErrorHandler();
  Function_200d3f4(v6, v5);
  return 0;
}

//----- (02230760) --------------------------------------------------------
int __fastcall Function_2230760(int **a1)
{
  int v1;
  int v2;
  int v3;
  int *v4;

  v1 = (int)a1;
  v2 = Function_209b974(**a1);
  v3 = Function_222fc00(v1);
  v4 = (int *)Function_223d370(v2, v3);
  if ( !v4 )
    ErrorHandler();
  Function_200d7cc(*v4, 1);
  return 0;
}

//----- (02230790) --------------------------------------------------------
int __fastcall Function_2230790(int **a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int *v5;
  int v6;

  v1 = (int)a1;
  v2 = Function_209b974(**a1);
  v3 = Function_222fc00(v1);
  v4 = Function_222fc00(v1);
  v5 = (int *)Function_223d370(v2, v3);
  if ( !v5 )
    ErrorHandler();
  v6 = *v5;
  if ( v4 )
    Function_200d808(v6, 1);
  else
    Function_200d808(v6, 0);
  return 0;
}

//----- (022307D8) --------------------------------------------------------
int __fastcall Function_22307d8(int a1)
{
  int **v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int *v6;

  v1 = (int **)a1;
  v2 = Function_222fc00(a1);
  v3 = Function_222fc00((int)v1);
  v4 = Function_209b974(**v1);
  v5 = v4;
  v6 = (int *)Function_223d370(v4, v2);
  Function_200d364(v6, v3);
  Function_223d378(v5, v2, 1);
  return 0;
}

//----- (02230810) --------------------------------------------------------
int __fastcall Function_2230810(int a1)
{
  int **v1;
  int v2;
  int v3;

  v1 = (int **)a1;
  v2 = Function_222fc00(a1);
  v3 = Function_209b974(**v1);
  Function_223d378(v3, v2, 0);
  return 0;
}

//----- (02230830) --------------------------------------------------------
int __fastcall Function_2230830(int a1)
{
  int v1;

  v1 = a1;
  *(ushort *)(a1 + 120) = Function_222fc00(a1);
  Function_222e974(v1, (int)Function_2230850);
  return 1;
}

//----- (02230850) --------------------------------------------------------
BOOL __fastcall Function_2230850(int **a1)
{
  int **v1;
  int v2;
  int *v3;

  v1 = a1;
  v2 = Function_209b974(**a1);
  v3 = (int *)Function_223d370(v2, *((ushort *)v1 + 60));
  return !Function_223d3a4(v2, *((ushort *)v1 + 60)) || !Function_200d3b8(v3);
}

//----- (0223088C) --------------------------------------------------------
uint __fastcall Function_223088c(uint *a1, int a2, int a3)
{
  int v3;
  int v4;
  uint *v5;
  ushort *v6;
  int v7;
  int v9;
  int v10;

  v3 = (int)a1;
  v4 = a3;
  v5 = (uint *)*a1;
  if ( a3 > 7 )
    ErrorHandler();
  v10 = malloc(v5[13], 2 * v4);
  v6 = (ushort *)v10;
  v9 = Function_222fc00(v3);
  v7 = 0;
  do
  {
    *v6 = Function_222fc00(v3);
    ++v7;
    ++v6;
  }
  while ( v7 < 3 );
  Function_223d860(*v5, v9, 1, v10, 3);
  return free(v10);
}

//----- (022308E0) --------------------------------------------------------
int __fastcall Function_22308e0(int a1)
{
  uint **v1;
  int v2;

  v1 = (uint **)a1;
  v2 = Function_222fc00(a1);
  Function_223d860(**v1, v2, 0, 0, 0);
  return 0;
}

//----- (02230900) --------------------------------------------------------
int __fastcall Function_2230900(uint *a1)
{
  Function_223088c(a1, 1, 3);
  return 0;
}

//----- (02230910) --------------------------------------------------------
int __fastcall Function_2230910(int **a1)
{
  int **v1;
  int v2;
  uint *v3;

  v1 = a1;
  v2 = Function_209b970(**a1);
  v3 = Function_208712c(0xBu, 0, 0, 8, *(uint *)(v2 + 4));
  Function_209b988(**v1, (int *)&JumpTable_20f2dac, (int)v3, 0, (int)Function_2230950);
  return 1;
}

//----- (02230950) --------------------------------------------------------
uint __fastcall Function_2230950(int a1, int a2)
{
  return Function_208716c(a1, a2);
}

//----- (02230958) --------------------------------------------------------
int __fastcall Function_2230958(int **a1, int a2, int a3, int a4)
{
  int v4;
  int v6;

  v6 = a4;
  v4 = Function_209b970(**a1);
  Function_202f1f8(*(uint *)(v4 + 8), 0xBu, (int)&v6);
  return 0;
}

//----- (02230970) --------------------------------------------------------
int __fastcall Function_2230970(int *a1)
{
  int v1;
  int v2;
  uint v3;
  int v4;
  int v6;
  int v7;

  v1 = (int)a1;
  v2 = *a1;
  v7 = Function_222ea48((int)a1);
  v6 = Function_222fc00(v1);
  v3 = Function_222fc00(v1);
  v4 = Function_222fbe4(v1);
  if ( v3 > 0x270F )
    LOWORD(v3) = 9999;
  *(ushort *)(v2 + 176) = 0;
  *(ushort *)(v2 + 178) = 0;
  *(ushort *)(v2 + 180) = Function_2230a2c(v7, v6);
  *(ushort *)(v2 + 182) = v3;
  *(uint *)(v2 + 184) = v4;
  Function_222e974(v1, (int)Function_22309dc);
  return 1;
}

//----- (022309DC) --------------------------------------------------------
int __fastcall Function_22309dc(int **a1)
{
  int *v1;
  int v2;
  int v3;

  v1 = *a1;
  v2 = Function_209b970(**a1);
  v3 = Function_202f41c(
         *(uint *)(v2 + 8),
         *((ushort *)v1 + 90),
         *((ushort *)v1 + 91),
         0,
         (ushort *)v1 + 88,
         (ushort *)v1 + 89);
  if ( (uint)(v3 - 2) > 1 )
    return 0;
  *(ushort *)v1[46] = v3 == 2;
  return 1;
}

//----- (02230A2C) --------------------------------------------------------
int __fastcall Function_2230a2c(char a1)
{
  int v1;

  v1 = 15;
  switch ( a1 )
  {
    case 0:
      return v1;
    case 1:
      switch ( a1 )
      {
        case 0:
        case 4:
        case 5:
          return v1;
        case 1:
          v1 = 16;
          break;
        case 2:
        case 3:
        case 6:
          v1 = 17;
          break;
        default:
          ErrorHandler();
          break;
      }
      break;
    case 2:
      switch ( a1 )
      {
        case 0:
          v1 = 18;
          break;
        case 1:
          v1 = 19;
          break;
        case 2:
        case 3:
          v1 = 20;
          break;
        default:
          ErrorHandler();
          break;
      }
      break;
    case 3:
      switch ( a1 )
      {
        case 0:
          v1 = 21;
          break;
        case 1:
          v1 = 22;
          break;
        case 2:
        case 3:
          v1 = 23;
          break;
        default:
          ErrorHandler();
          break;
      }
      break;
    case 4:
      switch ( a1 )
      {
        case 0:
          v1 = 27;
          break;
        case 1:
          v1 = 28;
          break;
        case 2:
        case 3:
          v1 = 29;
          break;
        default:
          ErrorHandler();
          break;
      }
      break;
    case 5:
      switch ( a1 )
      {
        case 0:
          v1 = 24;
          break;
        case 1:
          v1 = 25;
          break;
        case 2:
        case 3:
          v1 = 26;
          break;
        default:
          ErrorHandler();
          break;
      }
      break;
    case 6:
      switch ( a1 )
      {
        case 0:
          v1 = 30;
          break;
        case 1:
          v1 = 31;
          break;
        case 2:
        case 3:
          v1 = 32;
          break;
        default:
          ErrorHandler();
          break;
      }
      break;
  }
  return v1;
}

//----- (02230B50) --------------------------------------------------------
int __fastcall Function_2230b50(int **a1)
{
  int **v1;
  int v2;
  ushort *v3;
  char v5;

  v1 = a1;
  v2 = Function_209b970(**a1);
  v3 = (ushort *)malloc(0xBu, 456);
  MI_CpuFill8(v3, 0, 0x1C8u);
  Function_202f298(*(uint *)(v2 + 8), 0xBu, &v5, (int)v3, 0);
  Function_2004550(5u, 0x45Fu);
  Function_209b988(**v1, (int *)&JumpTable_BattleScreen, (int)v3, 1, 0);
  return 1;
}

//----- (02230BB0) --------------------------------------------------------
int Function_2230bb0()
{
  Function_202f22c();
  return 0;
}

//----- (02230BBC) --------------------------------------------------------
int __fastcall Function_2230bbc(int **a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  ushort *v6;
  int v8;

  v8 = a4;
  v4 = (int)a1;
  v5 = Function_209b970(**a1);
  v6 = (ushort *)Function_222fbe4(v4);
  *v6 = Function_202f330(*(uint *)(v5 + 8), 0xBu, (int)&v8, 0);
  return 0;
}

//----- (02230BE4) --------------------------------------------------------
int __fastcall Function_2230be4(int **a1)
{
  int v1;
  int v2;

  v1 = (int)a1;
  v2 = Function_209b970(**a1);
  Function_222fbe4(v1);
  Function_20246e0(*(uint **)(v2 + 8));
  return 0;
}

//----- (02230C04) --------------------------------------------------------
int __fastcall Function_2230c04(int **a1)
{
  int v1;
  int *v2;
  int v3;

  v1 = (int)a1;
  v2 = *a1;
  v3 = Function_209b970(**a1);
  Function_222fbe4(v1);
  Function_2017de0(4);
  Function_2017e00(v2[13]);
  Function_2024814(*(uint *)(v3 + 8), 2);
  Function_222e974(v1, (int)Function_2230c3c);
  return 1;
}

//----- (02230C3C) --------------------------------------------------------
int __fastcall Function_2230c3c(int **a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int result;

  v1 = Function_209b970(**a1);
  v5 = Function_2024828(*(uint *)(v1 + 8), v2, v3, v4);
  if ( v5 == 2 )
  {
    Function_2017e2c();
    Function_2017df0(4);
    result = 1;
  }
  else if ( v5 == 3 )
  {
    Function_2017e2c();
    Function_2017df0(4);
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}

//----- (02230C74) --------------------------------------------------------
int __fastcall Function_2230c74(int **a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = Function_209b970(**a1);
  Function_2025340(*(uint *)(v1 + 8), v2, v3, v4);
  return 0;
}

//----- (02230C88) --------------------------------------------------------
int __fastcall Function_2230c88(int **a1)
{
  int v1;
  int v2;
  ushort *v3;

  v1 = (int)a1;
  v2 = Function_209b970(**a1);
  v3 = (ushort *)Function_222fbe4(v1);
  *v3 = Function_20247c8(*(uint *)(v2 + 8));
  return 0;
}

//----- (02230CAC) --------------------------------------------------------
int __fastcall Function_2230cac(int *a1)
{
  int v1;

  v1 = *a1;
  *(uint *)(v1 + 124) = Function_200e7fc((int *)(*a1 + 100), 994);
  return 0;
}

//----- (02230CC4) --------------------------------------------------------
int __fastcall Function_2230cc4(int a1)
{
  Function_200eba0(*(uint *)(*(uint *)a1 + 124));
  return 0;
}

//----- (02230CD4) --------------------------------------------------------
int __fastcall Function_2230cd4(int a1)
{
  int v1;
  uchar *v2;
  uint v3;
  int v4;

  v1 = a1;
  v2 = *(uchar **)(a1 + 28);
  *(uint *)(a1 + 28) = v2 + 1;
  v3 = *v2;
  v4 = Function_222fc00(a1);
  Function_200b70c(*(uint *)(*(uint *)v1 + 68), v3, v4);
  return 0;
}

//----- (02230CF4) --------------------------------------------------------
int __fastcall Function_2230cf4(int a1)
{
  int v1;
  uchar *v2;
  uint v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = *(uchar **)(a1 + 28);
  *(uint *)(a1 + 28) = v2 + 1;
  v3 = *v2;
  v4 = Function_222fc00(a1);
  v5 = Function_2230d28();
  Function_200b60c(*(uint *)(*(uint *)v1 + 68), v3, v4, v5, 1, 1);
  return 0;
}

//----- (02230D28) --------------------------------------------------------
int __fastcall Function_2230d28(int a1)
{
  int v1;

  v1 = a1;
  if ( !u32_div_f(a1, 10) )
    return 1;
  if ( !u32_div_f(v1, 100) )
    return 2;
  if ( !u32_div_f(v1, 1000) )
    return 3;
  if ( !u32_div_f(v1, 10000) )
    return 4;
  if ( !u32_div_f(v1, 100000) )
    return 5;
  if ( !u32_div_f(v1, 1000000) )
    return 6;
  if ( !u32_div_f(v1, 10000000) )
    return 7;
  if ( u32_div_f(v1, 100000000) )
    return 1;
  return 8;
}

//----- (02230DC4) --------------------------------------------------------
int __fastcall Function_2230dc4(int **a1)
{
  int **v1;
  int v2;
  int *v3;
  uint v4;

  v1 = a1;
  v2 = Function_209b970(**a1);
  v3 = v1[7];
  v1[7] = (int *)((char *)v3 + 1);
  v4 = *(uchar *)v3;
  LoadTrainerDataAdress(*(uint *)(v2 + 8));
  Function_200b498((*v1)[17], v4);
  return 0;
}

//----- (02230DF0) --------------------------------------------------------
int __fastcall Function_2230df0(int **a1)
{
  int **v1;
  int *v2;
  uint v3;
  int v4;

  v1 = a1;
  Function_209b970(**a1);
  v2 = v1[7];
  v1[7] = (int *)((char *)v2 + 1);
  v3 = *(uchar *)v2;
  v4 = Function_203608c();
  Function_2032ee8(v4 ^ 1);
  Function_200b498((*v1)[17], v3);
  return 0;
}

//----- (02230E20) --------------------------------------------------------
int __fastcall Function_2230e20(int a1)
{
  int v1;
  uchar *v2;
  uint v3;
  int v4;

  v1 = a1;
  v2 = *(uchar **)(a1 + 28);
  *(uint *)(a1 + 28) = v2 + 1;
  v3 = *v2;
  v4 = Function_222fc00(a1);
  Function_200b630(*(uint *)(*(uint *)v1 + 68), v3, v4);
  return 0;
}

//----- (02230E40) --------------------------------------------------------
int __fastcall Function_2230e40(int a1)
{
  uint *v1;
  uchar *v2;
  uint v3;
  int v4;
  uchar *v5;
  int v6;
  int v7;
  int v8;

  v1 = (uint *)a1;
  v2 = *(uchar **)(a1 + 28);
  *(uint *)(a1 + 28) = v2 + 1;
  v3 = *v2;
  v4 = Function_222fc00(a1);
  Function_222ea48((int)v1);
  v5 = (uchar *)v1[7];
  v1[7] = v5 + 1;
  v6 = *v5;
  v7 = Function_2230e90(v4, 11);
  Function_200b48c(*(int **)(*v1 + 68), v3, v7);
  Function_20237bc_FreeMsg(v7, v8);
  return 0;
}

//----- (02230E90) --------------------------------------------------------
ushort *__fastcall Function_2230e90(uint a1, uint a2)
{
  uint v2;
  ushort **v3;
  ushort *v4;

  v2 = a1;
  v3 = (ushort **)LoadFromMsgNARC(1, 26, 412, a2);
  v4 = Function_200b1ec_CallMsgDecrypt(v3, v2);
  Function_200b190((ushort *)v3);
  return v4;
}

//----- (02230EB8) --------------------------------------------------------
int __fastcall Function_2230eb8(int a1)
{
  int v1;
  uchar *v2;
  uint v3;
  int v4;

  v1 = a1;
  v2 = *(uchar **)(a1 + 28);
  *(uint *)(a1 + 28) = v2 + 1;
  v3 = *v2;
  v4 = Function_222fc00(a1);
  Function_200b7ec(*(uint *)(*(uint *)v1 + 68), v3, v4);
  return 0;
}

//----- (02230ED8) --------------------------------------------------------
int __fastcall Function_2230ed8(int **a1)
{
  int **v1;
  int v2;
  int *v3;

  v1 = a1;
  v2 = Function_209b970(**a1);
  v3 = v1[7];
  v1[7] = (int *)((char *)v3 + 1);
  Function_200b4bc((*v1)[17], *(uchar *)v3, *(uint *)(v2 + 8));
  return 0;
}

//----- (02230EFC) --------------------------------------------------------
int __fastcall Function_2230efc(int **a1)
{
  int v1;
  int v2;
  ushort *v3;
  ushort *v4;

  v1 = (int)a1;
  v2 = Function_209b970(**a1);
  v3 = (ushort *)Function_222fbe4(v1);
  v4 = (ushort *)Function_202d750(*(uint *)(v2 + 8));
  *v3 = Function_202d230(v4, 0, 0);
  return 0;
}

//----- (02230F28) --------------------------------------------------------
int __fastcall Function_2230f28(int **a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  ushort *v6;

  v1 = (int)a1;
  v2 = Function_209b970(**a1);
  v3 = Function_222fc00(v1);
  v4 = Function_202440c(*(uint *)(v2 + 8));
  Function_206d0c8(v4, v3);
  v5 = LoadVariableAreaAdress_14(*(uint *)(v2 + 8));
  Function_202cf70(v5, 68, v3);
  v6 = (ushort *)Function_202d750(*(uint *)(v2 + 8));
  Function_202d230(v6, v3, 5u);
  return 0;
}

//----- (02230F6C) --------------------------------------------------------
int __fastcall Function_2230f6c(int **a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  ushort *v5;

  v1 = (int)a1;
  v2 = Function_209b970(**a1);
  v3 = Function_222fc00(v1);
  v4 = LoadVariableAreaAdress_14(*(uint *)(v2 + 8));
  Function_202cf70(v4, 69, v3);
  v5 = (ushort *)Function_202d750(*(uint *)(v2 + 8));
  Function_202d230(v5, v3, 6u);
  return 0;
}

//----- (02230FA4) --------------------------------------------------------
int __fastcall Function_2230fa4(int a1)
{
  int v1;
  short v2;

  v1 = a1;
  v2 = Function_222fc00(a1);
  *(ushort *)(v1 + 120) = v2;
  Function_20364f0(v2);
  Function_222e974(v1, (int)Function_2230fcc);
  return 1;
}

//----- (02230FCC) --------------------------------------------------------
BOOL __fastcall Function_2230fcc(int a1)
{
  int v1;
  BOOL result;

  v1 = a1;
  if ( Function_2035e18() >= 2 )
    result = Function_2036540(*(ushort *)(v1 + 120) & 0xFF);
  else
    result = 1;
  return result;
}

//----- (02230FEC) --------------------------------------------------------
int Function_2230fec()
{
  Function_20365f4();
  return 0;
}

//----- (02230FF8) --------------------------------------------------------
int __fastcall Function_2230ff8(int a1)
{
  int v1;

  v1 = a1;
  Function_205987c();
  Function_222e974(v1, (int)Function_2231010);
  return 1;
}

//----- (02231010) --------------------------------------------------------
BOOL Function_2231010()
{
  return Function_2036780() != 1 && Function_2033e1c() != 1;
}

//----- (0223102C) --------------------------------------------------------
int __fastcall Function_223102c(int a1)
{
  int v1;
  ushort *v2;
  int v3;
  uint v4;
  short v5;

  v1 = a1;
  v2 = (ushort *)Function_222fbe4(a1);
  v3 = Function_222fc00(v1);
  v4 = PRNG();
  s32_div_f(v4, v3);
  *v2 = v5;
  return 1;
}

//----- (02231050) --------------------------------------------------------
int __fastcall Function_2231050(int **a1)
{
  int v1;
  int v2;

  v1 = Function_209b970(**a1);
  v2 = LoadPokePartyAdress(*(uint *)(v1 + 8));
  HealPokemon(v2);
  return 0;
}

//----- (02231068) --------------------------------------------------------
int __fastcall Function_2231068(int a1)
{
  Function_222e974(a1, (int)Function_2231078);
  return 1;
}

//----- (02231078) --------------------------------------------------------
BOOL Function_2231078()
{
  return (dword_21BF6C4 & 3) != 0;
}

//----- (02231090) --------------------------------------------------------
int __fastcall Function_2231090(int a1)
{
  int v1;

  v1 = a1;
  *(ushort *)(a1 + 120) = Function_222fc00(a1);
  Function_222e974(v1, (int)Function_22310b0);
  return 1;
}

//----- (022310B0) --------------------------------------------------------
BOOL __fastcall Function_22310b0(int a1)
{
  if ( dword_21BF6C4 & 3 )
    return 1;
  return --*(ushort *)(a1 + 120) == 0;
}

//----- (022310E0) --------------------------------------------------------
int __fastcall Function_22310e0(int a1)
{
  Function_222fbe4(a1);
  return 1;
}

//----- (022310EC) --------------------------------------------------------
int __fastcall Function_22310ec(int a1)
{
  int **v1;
  int v2;
  short v3;
  int v4;
  int v5;

  v1 = (int **)a1;
  v2 = Function_222ea48(a1);
  v3 = Function_222fc00((int)v1);
  v4 = Function_209b970(**v1);
  v5 = LoadFlagAdress(*(uint *)(v4 + 8));
  *(ushort *)Function_20508b8(v5, v2) = v3;
  return 0;
}

//----- (02231118) --------------------------------------------------------
int __fastcall Function_2231118(int a1)
{
  int **v1;
  int v2;
  ushort *v3;
  int v4;
  int v5;

  v1 = (int **)a1;
  v2 = Function_222ea48(a1);
  v3 = (ushort *)Function_222fbe4((int)v1);
  v4 = Function_209b970(**v1);
  v5 = LoadFlagAdress(*(uint *)(v4 + 8));
  *v3 = *(ushort *)Function_20508b8(v5, v2);
  return 0;
}

//----- (02231148) --------------------------------------------------------
int __fastcall Function_2231148(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 4);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      if ( *(uint *)(v1 + 12) )
      {
        Function_200f32c(0);
        Function_200f32c(1);
        Function_200f174(0, 32, 32, 0, 12, 1, 11);
        ++*(uint *)(v1 + 4);
      }
    }
    else if ( Function_200f2ac() == 1 )
    {
      return 0;
    }
  }
  else
  {
    Function_223e894(1);
    ++*(uint *)(v1 + 4);
  }
  return 1;
}

//----- (022311BC) --------------------------------------------------------
int __fastcall Function_22311bc(uint ***a1)
{
  uint ***v1;
  uint **v2;
  int v3;

  v1 = a1;
  switch ( (uchar)a1[1] )
  {
    case 0u:
      Function_223e894(1);
      v1[1] = (uint **)((char *)v1[1] + 1);
      return 1;
    case 1u:
      if ( !a1[3] )
        return 1;
      a1[10] = (uint **)Function_201a778(0xBu, 1);
      Function_201a7e8(**v1, (int)v1[10], 1, 0, 0, 0x20u, 0x20u, 0, 0);
      Function_20038b0((int)(*v1)[1], 0, 2, 0, 0, 0x10u);
      Function_201ada4_ClearTextBox((int)v1[10], 0);
      Function_201a9a4((int)v1[10]);
      v1[11] = (uint **)Function_223eba0(11);
      v1[1] = (uint **)((char *)v1[1] + 1);
      goto LABEL_5;
    case 2u:
LABEL_5:
      v2 = v1[10];
      Function_223ebf0(v1[11]);
      v1[1] = (uint **)((char *)v1[1] + 1);
      return 1;
    case 3u:
      v3 = Function_223ec34(a1[11]);
      Function_201a9a4((int)v1[10]);
      if ( v3 )
        v1[1] = (uint **)((char *)v1[1] + 1);
      return 1;
    default:
      if ( Function_200f2ac() != 1 )
        return 1;
      Function_223ebd0(v1[11]);
      Function_201acf4((int)v1[10]);
      Function_201a8fc((int)v1[10]);
      Function_201a928((int)v1[10], 1);
      SetBrightnessWithValue(0, 0);
      SetBrightnessWithValue(1, 0);
      Function_2019690(1u, 32, 0, 0xBu);
      Function_2019ebc(**v1, 1u);
      return 0;
  }
}

//----- (022312D8) --------------------------------------------------------
int __fastcall Function_22312d8(uint ***a1)
{
  uint ***v1;
  uint **v2;
  int v3;

  v1 = a1;
  switch ( (uchar)a1[1] )
  {
    case 0u:
      Function_223e894(1);
      v1[1] = (uint **)((char *)v1[1] + 1);
      return 1;
    case 1u:
      if ( !a1[3] )
        return 1;
      a1[10] = (uint **)Function_201a778(0xBu, 1);
      Function_201a7e8(**v1, (int)v1[10], 1, 0, 0, 0x20u, 0x20u, 0, 0);
      Function_20038b0((int)(*v1)[1], 0, 2, 0, 0, 0x10u);
      Function_201ada4_ClearTextBox((int)v1[10], 0);
      Function_201a9a4((int)v1[10]);
      v1[11] = (uint **)Function_223eba0(11);
      v1[1] = (uint **)((char *)v1[1] + 1);
      goto LABEL_5;
    case 2u:
LABEL_5:
      v2 = v1[10];
      Function_223ebf0(v1[11]);
      v1[1] = (uint **)((char *)v1[1] + 1);
      return 1;
    case 3u:
      v3 = Function_223ee44(a1[11]);
      Function_201a9a4((int)v1[10]);
      if ( v3 )
        v1[1] = (uint **)((char *)v1[1] + 1);
      return 1;
    default:
      if ( Function_200f2ac() != 1 )
        return 1;
      Function_223ebd0(v1[11]);
      Function_201acf4((int)v1[10]);
      Function_201a8fc((int)v1[10]);
      Function_201a928((int)v1[10], 1);
      SetBrightnessWithValue(0, 0);
      SetBrightnessWithValue(1, 0);
      Function_2019690(1u, 32, 0, 0xBu);
      Function_2019ebc(**v1, 1u);
      return 0;
  }
}

//----- (022313F4) --------------------------------------------------------
int __fastcall Function_22313f4(int a1, int a2)
{
  return a1 | (a2 << 16);
}

//----- (022313FC) --------------------------------------------------------
int __fastcall Function_22313fc(int *a1, int a2)
{
  int v2;
  int v3;
  short *v4;
  int v5;
  int *v6;
  int v7;
  uint v8;
  uint v9;
  int v10;
  uint v11;
  uint v12;
  int result;
  short *v14;
  int v15;
  int *v16;
  int v17;
  uint v18;
  uint v19;
  int v20;
  uint v21;
  uint v22;
  int *v23;
  int v24;
  int v25;
  short v26;
  short v27;
  short v28;
  short v29;
  int v30;
  int v31;
  char v32;

  v2 = a2;
  v23 = a1;
  v3 = *(uint *)(a2 + 36);
  v29 = Function_2019ff0(**(uint **)a2, 2);
  v28 = Function_2019ff0(**(uint **)v2, 2);
  v27 = Function_2019ff0(**(uint **)v2, 3);
  v26 = Function_2019ff0(**(uint **)v2, 3);
  if ( *(uint *)(v2 + 16) == 1 )
  {
    v30 = Function_223f27c(*(uint *)(v3 + 1536));
    v31 = 0;
    v4 = (short *)v3;
    do
    {
      v4[4] = 0;
      v4[5] = 0;
      v5 = *v4;
      if ( v5 < v4[1] )
      {
        v6 = (int *)(v30 + 32 * v5);
        do
        {
          Function_201d470((int *)&v32, 0, 4096, 4096, 0);
          v7 = *(uint *)(v3 + 1540);
          v8 = (short)(v29 + v4[4]);
          v9 = (short)(v28 + v4[5]);
          if ( v7 == 2 )
          {
            v8 = (short)((v8 >> 31) + __ROR4__((v8 << 24) - (v8 >> 31), 24));
            v9 = (short)((v9 >> 31) + __ROR4__((v9 << 24) - (v9 >> 31), 24));
          }
          else if ( v7 == 1 )
          {
            if ( (v8 & 0x80000000) != 0 )
              v8 = (short)(v8 + 256);
            if ( (v9 & 0x80000000) != 0 )
              v9 = -(short)v9;
            v8 = (short)((v8 >> 31) + __ROR4__((v8 << 24) - (v8 >> 31), 24));
          }
          G2x_SetBGyAffine_(v6, &v32, 0, 0, v8, v9);
          v10 = *(uint *)(v3 + 1540);
          v11 = (short)(v27 + v4[4]);
          v12 = (short)(v26 + v4[5]);
          if ( v10 == 2 )
          {
            v11 = (short)((v11 >> 31) + __ROR4__((v11 << 24) - (v11 >> 31), 24));
            v12 = (short)((v12 >> 31) + __ROR4__((v12 << 24) - (v12 >> 31), 24));
          }
          else if ( v10 == 1 )
          {
            if ( (v11 & 0x80000000) != 0 )
              v11 = (short)(v11 + 256);
            if ( (v12 & 0x80000000) != 0 )
              v12 = -(short)v12;
            v11 = (short)((v11 >> 31) + __ROR4__((v11 << 24) - (v11 >> 31), 24));
          }
          G2x_SetBGyAffine_(v6 + 4, &v32, 0, 0, v11, v12);
          ++v5;
          v6 += 8;
        }
        while ( v5 < v4[1] );
      }
      v4 += 8;
      ++v31;
    }
    while ( v31 < 96 );
    Function_223f258(*(uint *)(v3 + 1536));
    free(v3);
    result = Call_RemoveTaskFromTaskList(v23);
  }
  else
  {
    v25 = Function_223f27c(*(uint *)(v3 + 1536));
    v24 = 0;
    v14 = (short *)v3;
    do
    {
      v14[4] += v14[2];
      v14[5] += v14[3];
      v15 = *v14;
      if ( v15 < v14[1] )
      {
        v16 = (int *)(v25 + 32 * v15);
        do
        {
          Function_201d470((int *)&v32, 0, 4096, 4096, 0);
          v17 = *(uint *)(v3 + 1540);
          v18 = (short)(v29 + v14[4]);
          v19 = (short)(v28 + v14[5]);
          if ( v17 == 2 )
          {
            v18 = (short)((v18 >> 31) + __ROR4__((v18 << 24) - (v18 >> 31), 24));
            v19 = (short)((v19 >> 31) + __ROR4__((v19 << 24) - (v19 >> 31), 24));
          }
          else if ( v17 == 1 )
          {
            if ( (v18 & 0x80000000) != 0 )
              v18 = (short)(v18 + 256);
            if ( (v19 & 0x80000000) != 0 )
              v19 = -(short)v19;
            v18 = (short)((v18 >> 31) + __ROR4__((v18 << 24) - (v18 >> 31), 24));
          }
          G2x_SetBGyAffine_(v16, &v32, 0, 0, v18, v19);
          v20 = *(uint *)(v3 + 1540);
          v21 = (short)(v27 + v14[4]);
          v22 = (short)(v26 + v14[5]);
          if ( v20 == 2 )
          {
            v21 = (short)((v21 >> 31) + __ROR4__((v21 << 24) - (v21 >> 31), 24));
            v22 = (short)((v22 >> 31) + __ROR4__((v22 << 24) - (v22 >> 31), 24));
          }
          else if ( v20 == 1 )
          {
            if ( (v21 & 0x80000000) != 0 )
              v21 = (short)(v21 + 256);
            if ( (v22 & 0x80000000) != 0 )
              v22 = -(short)v22;
            v21 = (short)((v21 >> 31) + __ROR4__((v21 << 24) - (v21 >> 31), 24));
          }
          G2x_SetBGyAffine_(v16 + 4, &v32, 0, 0, v21, v22);
          ++v15;
          v16 += 8;
        }
        while ( v15 < v14[1] );
      }
      v14 += 8;
      result = v24 + 1;
      v24 = result;
    }
    while ( result < 96 );
  }
  return result;
}

//----- (02231720) --------------------------------------------------------
int __fastcall Function_2231720(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  short v5;
  int v6;
  char v8;

  v1 = a1;
  v2 = *(uint *)(a1 + 4);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      if ( *(uint *)(v1 + 12) )
      {
        MI_CpuFill8(&v8, 0, 0x20u);
        *(uint *)(v1 + 16) = 0;
        v3 = malloc(0x5Eu, 1544);
        *(uint *)(v1 + 36) = v3;
        *(uint *)(v3 + 1540) = 1;
        v4 = 0;
        *(uint *)(*(uint *)(v1 + 36) + 1536) = Function_223f1b4(&REG_BG2PA, &v8, 94);
        v5 = 0;
        v6 = 0;
        do
        {
          *(ushort *)(*(uint *)(v1 + 36) + v6) = v5;
          *(ushort *)(*(uint *)(v1 + 36) + v6 + 2) = *(ushort *)(*(uint *)(v1 + 36) + v6) + 2;
          *(ushort *)(*(uint *)(v1 + 36) + v6 + 4) = ((uint)(49 - v4) >> 31)
                                                    + __ROR4__(((49 - v4) << 29) - ((uint)(49 - v4) >> 31), 29);
          *(ushort *)(*(uint *)(v1 + 36) + v6 + 6) = (49 - v4) / 4;
          *(ushort *)(*(uint *)(v1 + 36) + v6 + 8) = 0;
          *(ushort *)(*(uint *)(v1 + 36) + v6 + 10) = 0;
          ++v4;
          *(uint *)(*(uint *)(v1 + 36) + v6 + 12) = Function_22313f4(0, 0);
          v5 += 2;
          v6 += 16;
        }
        while ( v4 < 96 );
        Function_200aae0(40, -16, 0, 30, 1);
        AddTaskToTaskList1((int)Function_22313fc, v1, 0x1000u);
        ++*(uint *)(v1 + 4);
      }
    }
    else
    {
      if ( v2 != 2 )
        return 0;
      if ( Function_200ac1c(1) )
      {
        *(uint *)(v1 + 16) = 1;
        Function_2019120(3u, 0);
        Function_2019184(**(uint **)v1, 3u, 0, 0);
        Function_2019184(**(uint **)v1, 3u, 3u, 0);
        ++*(uint *)(v1 + 4);
      }
    }
  }
  else
  {
    Function_223e894(1);
    ++*(uint *)(v1 + 4);
  }
  return 1;
}

//----- (02231864) --------------------------------------------------------
int __fastcall Function_2231864(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  short v5;
  int v6;
  char v8;

  v1 = a1;
  v2 = *(uint *)(a1 + 4);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      if ( *(uint *)(v1 + 12) )
      {
        MI_CpuFill8(&v8, 0, 0x20u);
        *(uint *)(v1 + 16) = 0;
        v3 = malloc(0x5Eu, 1544);
        *(uint *)(v1 + 36) = v3;
        *(uint *)(v3 + 1540) = 2;
        v4 = 0;
        *(uint *)(*(uint *)(v1 + 36) + 1536) = Function_223f1b4(&REG_BG2PA, &v8, 94);
        v5 = 0;
        v6 = 0;
        do
        {
          *(ushort *)(*(uint *)(v1 + 36) + v6) = v5;
          *(ushort *)(*(uint *)(v1 + 36) + v6 + 2) = *(ushort *)(*(uint *)(v1 + 36) + v6) + 2;
          *(ushort *)(*(uint *)(v1 + 36) + v6 + 4) = (48 - v4) / 8 + 1;
          if ( ((uint)v4 >> 31) + __ROR4__((v4 << 31) - ((uint)v4 >> 31), 31) )
            *(ushort *)(*(uint *)(v1 + 36) + v6 + 4) = -*(ushort *)(*(uint *)(v1 + 36) + v6 + 4);
          if ( v4 >= 48 )
            *(ushort *)(*(uint *)(v1 + 36) + v6 + 6) = 96 - v4;
          else
            *(ushort *)(*(uint *)(v1 + 36) + v6 + 6) = v4;
          *(ushort *)(*(uint *)(v1 + 36) + v6 + 8) = 0;
          *(ushort *)(*(uint *)(v1 + 36) + v6 + 10) = 0;
          ++v4;
          *(uint *)(*(uint *)(v1 + 36) + v6 + 12) = Function_22313f4(0, 0);
          v5 += 2;
          v6 += 16;
        }
        while ( v4 < 96 );
        Function_200aae0(40, -16, 0, 28, 1);
        AddTaskToTaskList1((int)Function_22313fc, v1, 0x1000u);
        ++*(uint *)(v1 + 4);
      }
    }
    else
    {
      if ( v2 != 2 )
        return 0;
      if ( Function_200ac1c(1) )
      {
        *(uint *)(v1 + 16) = 1;
        Function_2019120(3u, 0);
        Function_2019184(**(uint **)v1, 3u, 0, 0);
        Function_2019184(**(uint **)v1, 3u, 3u, 0);
        ++*(uint *)(v1 + 4);
      }
    }
  }
  else
  {
    Function_223e894(1);
    ++*(uint *)(v1 + 4);
  }
  return 1;
}

//----- (022319CC) --------------------------------------------------------
int __fastcall Function_22319cc(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 4);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      Function_223f0b0(v1 + 24);
      ++*(uint *)(v1 + 4);
    }
  }
  else
  {
    Function_223f094(v1 + 24, 94);
    ++*(uint *)(v1 + 4);
  }
  return 1;
}

//----- (02231A28) --------------------------------------------------------
int __fastcall Function_2231a28(int **a1)
{
  int **v1;
  int *v2;

  v1 = a1;
  Function_209b970(**a1);
  *((ushort *)v1 + 60) = Function_222fc00((int)v1);
  Function_2004550(5u, 0x45Fu);
  v2 = (int *)malloc(0xBu, 48);
  v2[5] = Function_209b978(**v1);
  v2[1] = 0;
  v2[2] = *((ushort *)v1 + 60);
  *v2 = Function_222e924(*v1);
  Function_209b980((uint **)**v1, (int)v2);
  Function_222e974((int)v1, (int)Function_2231aa8);
  Function_20038b0(*(uint *)(*v2 + 4), 0, 2, 0, 0, 1u);
  return 1;
}

//----- (02231AA8) --------------------------------------------------------
BOOL __fastcall Function_2231aa8(int **a1)
{
  int **v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = Function_209b978(**a1);
  v3 = ((int (*)(void))*(&off_223F65C + *(uint *)(v2 + 8)))();
  if ( !v3 )
  {
    SetBrightnessWithValue(0, 0);
    SetBrightnessWithValue(1, 0);
    Function_209b980((uint **)**v1, *(uint *)(v2 + 20));
    free(v2);
  }
  return v3 == 0;
}

//----- (02231AF4) --------------------------------------------------------
int __fastcall Function_2231af4(int a1)
{
  int **v1;
  short *v2;
  int v3;
  int v4;
  short v5;

  v1 = (int **)a1;
  v2 = (short *)Function_222fbe4(a1);
  v3 = Function_209b970(**v1);
  v4 = LoadTrainerDataAdress(*(uint *)(v3 + 8));
  if ( GetGender(v4) )
    v5 = 97;
  else
    v5 = 0;
  *v2 = v5;
  return 0;
}

//----- (02231B20) --------------------------------------------------------
int __fastcall Function_2231b20(int **a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = (int)a1;
  v2 = Function_209b974(**a1);
  v3 = Function_222fc00(v1);
  v4 = Function_222fc00(v1);
  v5 = Function_222fc00(v1);
  Function_223d614(*(uint *)(v2 + 16), v3, v4, v5);
  return 0;
}

//----- (02231B54) --------------------------------------------------------
int __fastcall Function_2231b54(int **a1)
{
  int v1;
  int v2;
  int v3;

  v1 = (int)a1;
  v2 = Function_209b974(**a1);
  v3 = Function_222fc00(v1);
  Function_223d68c(*(uint *)(v2 + 16), v3);
  return 0;
}

//----- (02231B74) --------------------------------------------------------
int __fastcall Function_2231b74(int **a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int *v5;

  v1 = (int)a1;
  v2 = Function_209b974(**a1);
  v3 = Function_222fc00(v1);
  v4 = Function_222fc00(v1);
  v5 = (int *)Function_223d6d0(*(uint *)(v2 + 16), v3);
  Function_20146f4(v5, v4, 0, 0);
  return 0;
}

//----- (02231BA8) --------------------------------------------------------
int __fastcall Function_2231ba8(int a1)
{
  Function_222e974(a1, (int)Function_2231bb8);
  return 1;
}

//----- (02231BB8) --------------------------------------------------------
BOOL __fastcall Function_2231bb8(int **a1)
{
  int v1;

  v1 = Function_209b974(**a1);
  return Function_223d6e4(*(uint *)(v1 + 16)) == 1;
}

//----- (02231BD4) --------------------------------------------------------
int __fastcall Function_2231bd4(int **a1)
{
  int v1;
  int v2;
  short v3;
  short v4;
  char v5;
  char v6;

  v1 = (int)a1;
  v2 = Function_209b974(**a1) + 164;
  if ( *(uint *)v2 )
  {
    ErrorHandler();
    Call_RemoveTaskFromTaskList(*(int **)v2);
  }
  v3 = Function_222fc00(v1);
  v4 = Function_222fc00(v1);
  v5 = Function_222fc00(v1);
  v6 = Function_222fc00(v1);
  MI_CpuFill8((ushort *)v2, 0, 0xCu);
  *(ushort *)(v2 + 4) = v3;
  *(ushort *)(v2 + 6) = v4;
  *(uchar *)(v2 + 9) = v5;
  *(uchar *)(v2 + 10) = v6;
  *(uint *)v2 = AddTaskToTaskList1((int)Function_223319c, v2, 0x11170u);
  return 0;
}

//----- (02231C44) --------------------------------------------------------
int __fastcall Function_2231c44(int a1)
{
  Function_222e974(a1, (int)Function_2231c54);
  return 1;
}

//----- (02231C54) --------------------------------------------------------
BOOL __fastcall Function_2231c54(int **a1)
{
  return *(uint *)(Function_209b974(**a1) + 164) == 0;
}

//----- (02231C70) --------------------------------------------------------
int __fastcall Function_2231c70(int **a1)
{
  int v1;
  int v2;

  v1 = (int)a1;
  v2 = Function_209b974(**a1) + 176;
  if ( *(uint *)v2 )
  {
    ErrorHandler();
    Call_RemoveTaskFromTaskList(*(int **)v2);
  }
  MI_CpuFill8((ushort *)v2, 0, 0xCu);
  *(uchar *)(v2 + 4) = Function_222fc00(v1);
  *(uchar *)(v2 + 5) = Function_222fc00(v1);
  *(uchar *)(v2 + 6) = Function_222fc00(v1);
  *(uchar *)(v2 + 7) = Function_222fc00(v1);
  *(ushort *)(v2 + 8) = Function_222fc00(v1);
  *(uchar *)(v2 + 10) = Function_222fc00(v1);
  *(uint *)v2 = AddTaskToTaskList1((int)Function_22331e8, v2, 0x12Cu);
  return 0;
}

//----- (02231CE4) --------------------------------------------------------
int __fastcall Function_2231ce4(int a1)
{
  Function_222e974(a1, (int)Function_2231cf4);
  return 1;
}

//----- (02231CF4) --------------------------------------------------------
BOOL __fastcall Function_2231cf4(int **a1)
{
  return *(uint *)(Function_209b974(**a1) + 176) == 0;
}

//----- (02231D10) --------------------------------------------------------
int __fastcall Function_2231d10(int a1)
{
  Function_222ea48(a1);
  return 0;
}

//----- (02231D1C) --------------------------------------------------------
int __fastcall Function_2231d1c(int **a1)
{
  int **v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint *v8;
  int *v9;

  v1 = a1;
  v2 = Function_222e924(*a1);
  v3 = Function_222fc00((int)v1);
  v4 = Function_222fc00((int)v1);
  v5 = Function_222fc00((int)v1);
  v6 = Function_222ea48((int)v1);
  Function_222ea48((int)v1);
  Function_222ea48((int)v1);
  v7 = Function_209b970(**v1);
  v8 = (uint *)LoadPokePartyAdress(*(uint *)(v7 + 8));
  v9 = GetAdrOfPkmnInParty(v8, v3);
  Function_2232ce0(v2, v9, 11, v6, v4, v5, 0, 0, 8, 0);
  return 0;
}

//----- (02231D8C) --------------------------------------------------------
int __fastcall Function_2231d8c(int **a1)
{
  int v1;
  int v2;
  int v3;

  v1 = (int)a1;
  v2 = Function_222e924(*a1);
  v3 = Function_222ea48(v1);
  Function_2232e80(v2, v3);
  return 0;
}

//----- (02231DAC) --------------------------------------------------------
int __fastcall Function_2231dac(int **a1, int a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int v6;
  char v8;
  short v9;
  int v10;

  v10 = a4;
  v4 = (int)a1;
  v5 = (uint *)Function_222e924(*a1);
  v6 = Function_222ea48(v4);
  Function_223d554(v5, &v9, &v8);
  Function_223dc7c(v6, *v5, v5[13], v5[14], v5[1], v4 + 120, v9, *(short *)&v8);
  Function_2004550(5u, 0x4B2u);
  Function_222e974(v4, (int)Function_2231e14);
  return 1;
}

//----- (02231E14) --------------------------------------------------------
BOOL __fastcall Function_2231e14(int **a1)
{
  int **v1;

  v1 = a1;
  Function_209b974(**a1);
  return *((ushort *)v1 + 60) == 1;
}

//----- (02231E30) --------------------------------------------------------
int __fastcall Function_2231e30(int a1)
{
  int **v1;
  int v2;
  int v3;
  int v4;

  v1 = (int **)a1;
  v2 = Function_222ea48(a1);
  v3 = Function_209b970(**v1);
  v4 = LoadVariableAreaAdress_14(*(uint *)(v3 + 8));
  Function_202cf28(v4, v2);
  return 0;
}

//----- (02231E54) --------------------------------------------------------
int __fastcall Function_2231e54(int a1)
{
  int **v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = (int **)a1;
  v2 = Function_222ea48(a1);
  v3 = Function_222fc00((int)v1);
  v4 = Function_209b970(**v1);
  v5 = LoadVariableAreaAdress_14(*(uint *)(v4 + 8));
  Function_202cf70(v5, v2, v3);
  return 0;
}

//----- (02231E80) --------------------------------------------------------
int __fastcall Function_2231e80(int a1)
{
  int **v1;
  int v2;
  int v3;
  int v4;

  v1 = (int **)a1;
  v2 = Function_222ea48(a1);
  v3 = Function_209b970(**v1);
  v4 = LoadVariableAreaAdress_14(*(uint *)(v3 + 8));
  Function_202cfec(v4, v2);
  return 0;
}

//----- (02231EA4) --------------------------------------------------------
int __fastcall Function_2231ea4(int a1)
{
  int **v1;
  ushort *v2;
  int v3;

  v1 = (int **)a1;
  v2 = (ushort *)Function_222fbe4(a1);
  v3 = Function_209b970(**v1);
  *v2 = Function_205e6d8(*(uint *)(v3 + 8));
  return 0;
}

//----- (02231EC4) --------------------------------------------------------
int __fastcall Function_2231ec4(int a1)
{
  ushort *v1;

  v1 = (ushort *)Function_222fbe4(a1);
  *v1 = Function_202fac0();
  return 0;
}

//----- (02231ED8) --------------------------------------------------------
int __fastcall Function_2231ed8(int **a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = Function_209b970(**a1);
  v2 = LoadVariableAreaAdress_1d(*(uint *)(v1 + 8));
  v3 = ((int (*)(void))dword_21D2388[0])();
  Function_202b13c(v2, v3, v4, v5);
  return 0;
}

//----- (02231EFC) --------------------------------------------------------
int __fastcall Function_2231efc(int **a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = (int)a1;
  v2 = Function_209b970(**a1);
  v3 = Function_202440c(*(uint *)(v2 + 8));
  LOBYTE(v1) = Function_222fc00(v1);
  v4 = Function_203608c();
  v5 = Function_2032ee8(1 - v4);
  Function_206d088(v3, v1, v5);
  return 0;
}

//----- (02231F34) --------------------------------------------------------
int __fastcall Function_2231f34(int a1)
{
  int v1;

  v1 = Function_222fc00(a1);
  Function_203632c(v1);
  return 0;
}

//----- (02231F44) --------------------------------------------------------
int __fastcall Function_2231f44(int *a1)
{
  uchar *v1;
  int v2;

  v1 = (uchar *)a1[7];
  v2 = *a1;
  a1[7] = (int)(v1 + 1);
  Function_223327c(*(uint *)(v2 + 96), *v1);
  return 1;
}

//----- (02231F5C) --------------------------------------------------------
int __fastcall Function_2231f5c(int *a1)
{
  uchar *v1;
  int v2;

  v1 = (uchar *)a1[7];
  v2 = *a1;
  a1[7] = (int)(v1 + 1);
  Function_2233298(*(uint *)(v2 + 96), *v1);
  return 1;
}

//----- (02231F74) --------------------------------------------------------
int __fastcall Function_2231f74(int *a1, int a2, int a3, int a4, uchar *a5)
{
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v14;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v14 = a4;
  Function_2231fc4();
  Function_2232034(v5, v6, v7);
  if ( a5 )
  {
    v10 = *a5;
    v11 = a5[1];
    v12 = a5[2];
  }
  else
  {
    v8 = Function_222e924(v5);
    v9 = Function_209b970(*(uint *)(v8 + 8));
    v10 = Function_2027ac0(*(ushort **)(v9 + 4));
    v11 = 0;
    v12 = 1;
  }
  return Function_2232050(v5, v12, v10, v14, v11);
}

//----- (02231FC4) --------------------------------------------------------
int __fastcall Function_2231fc4(int *a1)
{
  int *v1;
  uint **v2;
  int result;

  v1 = a1;
  v2 = (uint **)Function_222e924(a1);
  if ( *((uchar *)v1 + 90) )
    return Function_201ada4_ClearTextBox((int)(v1 + 25), 15);
  Function_201a7e8(*v2, (int)(v1 + 25), 1, 2, 19, 0x1Bu, 4u, 13, 877);
  Function_201ada4_ClearTextBox((int)(v1 + 25), 15);
  Function_200e060((int)(v1 + 25), 0, 994, 0xBu);
  result = 1;
  *((uchar *)v1 + 90) = 1;
  return result;
}

//----- (02232034) --------------------------------------------------------
int __fastcall Function_2232034(int a1, ushort **a2, uint a3)
{
  int v3;

  v3 = a1;
  Function_200b1b8_CallMsgDecrypt(a2, a3, *(ushort **)(a1 + 76));
  return Function_200c388(*(uint **)(v3 + 68), *(uint *)(v3 + 72), *(uint *)(v3 + 76));
}

//----- (02232050) --------------------------------------------------------
int __fastcall Function_2232050(int a1, int a2, int a3, char a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int result;

  v5 = a1;
  v6 = a2;
  Function_2002ac8(a4);
  Function_2002ae4(a5);
  Function_2002b20(0);
  v7 = *(uint *)(v5 + 72);
  result = Function_201d738_CallInitTextInterpreter(v5 + 100, v6);
  *(uchar *)(v5 + 80) = result;
  return result;
}

//----- (02232088) --------------------------------------------------------
int __fastcall Function_2232088(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( *(uchar *)(a1 + 90) != 1 )
    ErrorHandler();
  Function_200e084(v1 + 100, 0);
  Function_201a8fc(v1 + 100);
  result = 0;
  *(uchar *)(v1 + 90) = 0;
  return result;
}

//----- (022320B4) --------------------------------------------------------
int __fastcall Function_22320b4(int *a1, int a2, int a3, int a4, ushort a5, ushort a6, uchar a7)
{
  int v7;
  int v8;
  int v9;
  int v10;
  int result;

  v7 = (int)a1;
  v8 = a2;
  v9 = a3;
  v10 = a4;
  Function_2231fc4(a1);
  Function_22320fc(*(uint *)(v7 + 72), v9, v10, a5, a6);
  if ( a7 == 255 )
    result = Function_2232050(v7, 1, 0, 255, 0);
  else
    result = Function_2232050(v7, 1, v8, a7, 0);
  return result;
}

//----- (022320FC) --------------------------------------------------------
uint __fastcall Function_22320fc(ushort *a1, uint a2, short a3, int a4, short a5)
{
  ushort *v5;
  uint v6;
  short v7;
  short v8;
  ushort *v9;
  int v10;
  ushort v12[4];
  int v13;

  v13 = a4;
  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  Function_2014a84(v12);
  Function_2014ce0((uint)v12, v6, v7);
  Function_2014cf8((int)v12, 0, v8);
  Function_2014cf8((int)v12, 1u, a5);
  v9 = Function_2014b34(v12, 0x20u);
  Function_2023810(v5, (int)v9);
  return Function_20237bc_FreeMsg((int)v9, v10);
}

//----- (0223214C) --------------------------------------------------------
ushort *__fastcall Function_223214c(int a1, int a2, char a3, char a4, uchar a5, char a6, int a7, int a8, int a9)
{
  int v9;
  int v10;
  char v11;
  char v12;
  char v13;
  int v14;
  int v15;
  int v16;
  uint *v17;
  int v18;
  int v19;
  int v20;
  int v21;
  uint *v22;
  ushort *result;

  v9 = a2;
  v10 = a1;
  v11 = a3;
  v12 = a4;
  if ( a9 )
  {
    *(uint *)(a2 + 140) = a9;
    v13 = *(uchar *)(a2 + 151) & 0xFD;
  }
  else
  {
    *(uint *)(a2 + 140) = LoadFromMsgNARC(1, 26, 361, *(uint *)(a1 + 52));
    v13 = *(uchar *)(v9 + 151) | 2;
  }
  *(uchar *)(v9 + 151) = v13;
  *(uint *)(v9 + 144) = a8;
  *(uint *)v9 = v10;
  *(uint *)(v9 + 160) = a7;
  v14 = 0;
  **(ushort **)(v9 + 160) = 0;
  *(uchar *)(v9 + 151) = *(uchar *)(v9 + 151) & 0xFE | a6 & 1;
  *(uchar *)(v9 + 150) = a5;
  *(uchar *)(v9 + 152) = v11;
  *(uchar *)(v9 + 153) = v12;
  *(uchar *)(v9 + 155) = 0;
  *(uint *)(v9 + 24) = v10 + 100;
  *(uchar *)(v9 + 148) = 3;
  *(ushort *)(v9 + 724) = a5;
  v15 = v9;
  v16 = 0;
  do
  {
    *(uint *)(v15 + 180) = 0;
    v17 = (uint *)(v15 + 184);
    ++v14;
    v15 += 8;
    *v17 = 0;
  }
  while ( v14 < 28 );
  v18 = v9;
  v19 = v9;
  v20 = 0;
  do
  {
    *(uint *)(v18 + 444) = 0;
    *(uint *)(v18 + 448) = 0;
    *(ushort *)(v19 + 668) = 255;
    ++v16;
    v18 += 8;
    v19 += 2;
  }
  while ( v16 < 28 );
  v21 = v9;
  do
  {
    *(uint *)(v21 + 28) = Function_2023790(80, *(uint *)(v10 + 52));
    ++v20;
    v21 += 4;
  }
  while ( v20 < 28 );
  v22 = (uint *)(v9 + 160);
  result = (ushort *)*v22;
  *(ushort *)*v22 = -4370;
  return result;
}

//----- (02232258) --------------------------------------------------------
int __fastcall Function_2232258(int a1, char a2, char a3, uchar a4, char a5, int a6, int a7, int a8)
{
  int v8;
  char v9;
  uchar v10;
  int *v11;
  int v12;
  char v14;

  v8 = a1;
  v14 = a3;
  v9 = a2;
  v10 = a4;
  v11 = (int *)malloc(*(uint *)(a1 + 52), 728);
  v12 = (int)v11;
  if ( !v11 )
    return 0;
  Call_FillMemWithValue(v11, 0, 0x2D8u);
  Function_223214c(v8, v12, v9, v14, v10, a5, a6, a7, a8);
  return v12;
}

//----- (022322A8) --------------------------------------------------------
int Function_22322a8()
{
  return Function_2232390();
}

//----- (022322B0) --------------------------------------------------------
uint *__fastcall Function_22322b0(int **a1)
{
  int v1;
  uint **v2;
  uint v3;
  uint *result;

  v1 = (int)a1;
  v2 = (uint **)Function_222e924(*a1);
  v3 = Function_2232414(v1);
  if ( v3 & 7 )
    LOBYTE(v3) = (v3 >> 3) + 1;
  else
    v3 >>= 3;
  if ( *(uchar *)(v1 + 151) & 0x40 )
    *(uchar *)(v1 + 152) -= v3;
  if ( *(uchar *)(v1 + 151) & 0x80 )
    *(uchar *)(v1 + 153) -= 2 * *(uchar *)(v1 + 155);
  Function_201a7e8(*v2, v1 + 8, 1, *(uchar *)(v1 + 152), *(uchar *)(v1 + 153), v3, 2 * *(uchar *)(v1 + 155), 14, 1);
  Function_200dc48(v1 + 8, 1, 985, 0xCu);
  Function_2232454(v1);
  *(uint *)(v1 + 176) = Function_2001b9c(v1 + 164, *(uchar *)(v1 + 150), *(uint *)(*(uint *)v1 + 52));
  Function_22325d8(v1);
  result = AddTaskToTaskList1((int)Function_22324c8, v1, 0);
  *(uint *)(v1 + 4) = result;
  return result;
}

//----- (02232390) --------------------------------------------------------
int __fastcall Function_2232390(int a1, uint a2, short a3, int a4)
{
  int v4;
  uint v5;
  short v6;
  int v7;
  ushort *v8;
  int v9;
  int v10;
  uint *v11;
  int result;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = (ushort *)Function_2023790(80, *(uint *)(*(uint *)a1 + 52));
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v4 + 140), v5, v8);
  Function_200c388(*(uint **)(v4 + 144), *(uint *)(v4 + 4 * *(uchar *)(v4 + 155) + 28), (int)v8);
  v9 = *(uchar *)(v4 + 155);
  v10 = v4 + 4 * v9;
  v11 = (uint *)(v4 + 8 * v9 + 180);
  *v11 = *(uint *)(v10 + 28);
  Function_20237bc_FreeMsg((int)v8, (int)v11);
  *(ushort *)(v4 + 2 * *(uchar *)(v4 + 155) + 668) = v6;
  *(uint *)(v4 + 8 * *(uchar *)(v4 + 155) + 184) = v7;
  result = *(uchar *)(v4 + 155) + 1;
  *(uchar *)(v4 + 155) = result;
  return result;
}

//----- (02232414) --------------------------------------------------------
int __fastcall Function_2232414(int a1)
{
  int v1;
  uint v2;
  int v3;
  int v4;
  int v5;
  uint v6;

  v1 = a1;
  v2 = 0;
  v3 = 0;
  if ( (int)*(uchar *)(a1 + 155) > 0 )
  {
    v4 = a1;
    do
    {
      v5 = *(uint *)(v4 + 180);
      if ( !v5 )
        break;
      v6 = Function_2002d7c(0, v5, 0);
      if ( v2 < v6 )
        v2 = v6;
      ++v3;
      v4 += 8;
    }
    while ( v3 < *(uchar *)(v1 + 155) );
  }
  return v2 + 12;
}

//----- (02232454) --------------------------------------------------------
int __fastcall Function_2232454(int a1)
{
  uchar *v1;
  int v2;
  uint v3;
  int result;

  *(uint *)(a1 + 164) = a1 + 180;
  *(uint *)(a1 + 168) = a1 + 8;
  *(uchar *)(a1 + 172) = 0;
  *(uchar *)(a1 + 173) = 1;
  *(uchar *)(a1 + 174) = *(uchar *)(a1 + 155);
  *(uchar *)(a1 + 175) &= 0xF0u;
  v1 = (uchar *)(a1 + 175);
  *(uchar *)(a1 + 175) &= 0xCFu;
  v2 = *(uchar *)(a1 + 175);
  if ( *(uchar *)(a1 + 155) < 4u )
  {
    result = 192;
    *v1 = v2 & 0x3F;
  }
  else
  {
    v3 = v2 & 0xFFFFFF3F;
    result = v3 | 0x40;
    *v1 = v3 | 0x40;
  }
  return result;
}

//----- (022324C8) --------------------------------------------------------
ushort *__fastcall Function_22324c8(int a1, int a2)
{
  int v2;
  ushort *result;
  int v4;

  v2 = a2;
  if ( *(uchar *)(a2 + 148) )
  {
    result = (ushort *)(*(uchar *)(a2 + 148) - 1);
    *(uchar *)(a2 + 148) = (uchar)result;
  }
  else
  {
    result = (ushort *)Function_200f2ac();
    if ( result )
    {
      v4 = Function_2001be0(*(uint *)(v2 + 176));
      if ( dword_21BF6C8 & 0x40 || dword_21BF6C8 & 0x80 || dword_21BF6C8 & 0x20 || dword_21BF6C8 & 0x10 )
        Function_22325d8(v2);
      result = *(ushort **)(v2 + 160);
      if ( (ushort)*result == 61149 )
      {
        result = (ushort *)Function_2232570(v2);
      }
      else if ( v4 == -2 )
      {
        if ( (*(uchar *)(v2 + 151) & 1) == 1 )
        {
          *result = -2;
          result = (ushort *)Function_2232570(v2);
        }
      }
      else if ( v4 != -1 )
      {
        *result = v4;
        result = (ushort *)Function_2232570(v2);
      }
    }
  }
  return result;
}

//----- (02232570) --------------------------------------------------------
uint __fastcall Function_2232570(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  Function_2005748(0x5DCu);
  Function_2001bc4(*(uint *)(v1 + 176), 0);
  Function_200dc9c(*(uint *)(v1 + 168), 0);
  Function_201a8fc(*(uint *)(v1 + 168));
  v3 = 0;
  v4 = v1;
  do
  {
    Function_20237bc_FreeMsg(*(uint *)(v4 + 28), v2);
    ++v3;
    v4 += 4;
  }
  while ( v3 < 28 );
  if ( (uint)*(uchar *)(v1 + 151) << 30 >> 31 == 1 )
    Function_200b190(*(ushort **)(v1 + 140));
  Call_RemoveTaskFromTaskList(*(int **)(v1 + 4));
  return free(v1);
}

//----- (022325D8) --------------------------------------------------------
int __fastcall Function_22325d8(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = a1 + 2 * Function_2001dc4(*(uint *)(a1 + 176));
  result = 668;
  if ( *(ushort *)(v2 + 668) != 255 )
    result = Function_2232ac4(v1);
  return result;
}

//----- (022325FC) --------------------------------------------------------
int __fastcall Function_22325fc(int a1, char a2, char a3, uchar a4, char a5, int a6, int a7, int a8)
{
  return Function_2232258(a1, a2, a3, a4, a5, a6, a7, a8);
}

//----- (0223261C) --------------------------------------------------------
int Function_223261c()
{
  return Function_2232750();
}

//----- (02232624) --------------------------------------------------------
uint *__fastcall Function_2232624(int **a1)
{
  int v1;
  uint **v2;
  uint v3;
  uint v4;
  uint v5;
  uint *result;

  v1 = (int)a1;
  v2 = (uint **)Function_222e924(*a1);
  v3 = Function_22327f0(v1);
  if ( v3 & 7 )
    LOBYTE(v4) = (v3 >> 3) + 1;
  else
    v4 = v3 >> 3;
  if ( *(uchar *)(v1 + 151) & 0x40 )
    *(uchar *)(v1 + 152) -= v4;
  v5 = *(uchar *)(v1 + 155);
  if ( v5 <= 8 )
  {
    if ( *(uchar *)(v1 + 151) & 0x80 )
      *(uchar *)(v1 + 153) -= 2 * v5;
    Function_201a7e8(*v2, v1 + 8, 1, *(uchar *)(v1 + 152), *(uchar *)(v1 + 153), v4, 2 * *(uchar *)(v1 + 155), 14, 1);
  }
  else
  {
    if ( *(uchar *)(v1 + 151) & 0x80 )
      *(uchar *)(v1 + 153) -= 16;
    Function_201a7e8(*v2, v1 + 8, 1, *(uchar *)(v1 + 152), *(uchar *)(v1 + 153), v4, 0x10u, 14, 1);
  }
  Function_200dc48(v1 + 8, 1, 985, 0xCu);
  Function_2232830(v1);
  *(uint *)(v1 + 436) = Function_200112c(
                            (uint *)(v1 + 404),
                            0,
                            *(uchar *)(v1 + 150),
                            *(uint *)(*(uint *)v1 + 52) & 0xFF);
  Function_2232b2c(v1);
  result = AddTaskToTaskList1((int)Function_223296c, v1, 0);
  *(uint *)(v1 + 4) = result;
  return result;
}

//----- (02232750) --------------------------------------------------------
int __fastcall Function_2232750(int a1, uint a2, short a3, int a4)
{
  int v4;
  uint v5;
  short v6;
  int v7;
  ushort *v8;
  int result;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = (ushort *)Function_2023790(80, *(uint *)(*(uint *)a1 + 52));
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v4 + 140), v5, v8);
  Function_200c388(*(uint **)(v4 + 144), *(uint *)(v4 + 4 * *(uchar *)(v4 + 155) + 28), (int)v8);
  *(uint *)(v4 + 8 * *(uchar *)(v4 + 155) + 444) = *(uint *)(v4 + 4 * *(uchar *)(v4 + 155) + 28);
  Function_20237bc_FreeMsg((int)v8, 444);
  if ( v7 == 250 )
    *(uint *)(v4 + 8 * *(uchar *)(v4 + 155) + 448) = -3;
  else
    *(uint *)(v4 + 8 * *(uchar *)(v4 + 155) + 448) = v7;
  *(ushort *)(v4 + 2 * *(uchar *)(v4 + 155) + 668) = v6;
  result = *(uchar *)(v4 + 155) + 1;
  *(uchar *)(v4 + 155) = result;
  return result;
}

//----- (022327F0) --------------------------------------------------------
int __fastcall Function_22327f0(int a1)
{
  int v1;
  uint v2;
  int v3;
  int v4;
  int v5;
  uint v6;

  v1 = a1;
  v2 = 0;
  v3 = 0;
  if ( (int)*(uchar *)(a1 + 155) > 0 )
  {
    v4 = a1;
    do
    {
      v5 = *(uint *)(v4 + 444);
      if ( !v5 )
        break;
      v6 = Function_2002d7c(0, v5, 0);
      if ( v2 < v6 )
        v2 = v6;
      ++v3;
      v4 += 8;
    }
    while ( v3 < *(uchar *)(v1 + 155) );
  }
  return v2 + 12;
}

//----- (02232830) --------------------------------------------------------
int __fastcall Function_2232830(int result)
{
  *(uint *)(result + 404) = result + 444;
  *(uint *)(result + 408) = Function_2232960;
  *(uint *)(result + 412) = Function_223293c;
  *(uint *)(result + 416) = result + 8;
  *(ushort *)(result + 420) = *(uchar *)(result + 155);
  *(ushort *)(result + 422) = 8;
  *(uchar *)(result + 424) = 1;
  *(uchar *)(result + 425) = 12;
  *(uchar *)(result + 426) = 2;
  *(uchar *)(result + 427) = *(uchar *)(result + 427) & 0xF0 | 1;
  *(uchar *)(result + 427) = *(uchar *)(result + 427) & 0xF | 0x10;
  *(uchar *)(result + 428) = *(uchar *)(result + 428) & 0xF0 | 0xF;
  *(uchar *)(result + 428) = *(uchar *)(result + 428) & 0xF | 0x20;
  *(ushort *)(result + 430) &= 0xFFF8u;
  *(ushort *)(result + 430) &= 0xFF87u;
  *(ushort *)(result + 430) &= 0xFE7Fu;
  *(ushort *)(result + 430) &= 0x81FFu;
  *(ushort *)(result + 430) &= 0x7FFFu;
  *(uint *)(result + 432) = result;
  return result;
}

//----- (0223293C) --------------------------------------------------------
uchar *__fastcall Function_223293c(uchar *a1, int a2)
{
  uchar *result;

  if ( a2 == -3 )
    result = Function_200147c(a1, 3, 15, 4);
  else
    result = Function_200147c(a1, 1, 15, 2);
  return result;
}

//----- (02232960) --------------------------------------------------------
uint __fastcall Function_2232960(int a1)
{
  return Function_2001504(a1, 0x13u);
}

//----- (0223296C) --------------------------------------------------------
int __fastcall Function_223296c(int a1, int a2)
{
  int v2;
  int result;
  int v4;
  int v5;

  v2 = a2;
  if ( *(uchar *)(a2 + 148) )
  {
    result = *(uchar *)(a2 + 148) - 1;
    *(uchar *)(a2 + 148) = result;
  }
  else
  {
    result = Function_200f2ac();
    if ( result )
    {
      v4 = Function_2001288(*(uint *)(v2 + 436));
      v5 = *(ushort *)(v2 + 724);
      Function_20014d0(*(uint *)(v2 + 436), (ushort *)(v2 + 724));
      if ( v5 != *(ushort *)(v2 + 724) )
        Function_2005748(0x5DCu);
      if ( dword_21BF6C8 & 0x40 || dword_21BF6C8 & 0x80 || dword_21BF6C8 & 0x20 || dword_21BF6C8 & 0x10 )
        Function_2232b2c(v2);
      if ( **(ushort **)(v2 + 160) == 61149 )
      {
        result = Function_2232a58(v2, 0);
      }
      else if ( v4 == -2 )
      {
        result = *(uchar *)(v2 + 151) & 1;
        if ( result == 1 )
        {
          Function_2005748(0x5DCu);
          **(ushort **)(v2 + 160) = -2;
          result = Function_2232a58(v2, 1);
        }
      }
      else
      {
        result = -1;
        if ( v4 != -1 )
        {
          Function_2005748(0x5DCu);
          **(ushort **)(v2 + 160) = v4;
          result = Function_2232a58(v2, 1);
        }
      }
    }
  }
  return result;
}

//----- (02232A58) --------------------------------------------------------
uint __fastcall Function_2232a58(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a1;
  if ( a2 == 1 )
    Function_2005748(0x5DCu);
  Function_2001384(*(uint *)(v2 + 436), 0, 0);
  Function_200dc9c(*(uint *)(v2 + 416), 0);
  Function_201a8fc(v2 + 8);
  v4 = 0;
  v5 = v2;
  do
  {
    Function_20237bc_FreeMsg(*(uint *)(v5 + 28), v3);
    ++v4;
    v5 += 4;
  }
  while ( v4 < 28 );
  if ( (uint)*(uchar *)(v2 + 151) << 30 >> 31 == 1 )
    Function_200b190(*(ushort **)(v2 + 140));
  Call_RemoveTaskFromTaskList(*(int **)(v2 + 4));
  return free(v2);
}

//----- (02232AC4) --------------------------------------------------------
uint __fastcall Function_2232ac4(int a1, uint a2)
{
  int v2;
  uint v3;
  ushort *v4;
  int v5;
  int v6;
  int v7;

  v2 = a1;
  v3 = a2;
  v4 = (ushort *)Function_2023790(80, *(uint *)(*(uint *)a1 + 52));
  v5 = Function_2023790(80, *(uint *)(*(uint *)v2 + 52));
  Function_201ada4_ClearTextBox(*(uint *)(v2 + 24), 15);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v2 + 140), v3, v4);
  Function_200c388(*(uint **)(v2 + 144), v5, (int)v4);
  Function_201d738_CallInitTextInterpreter(*(uint *)(v2 + 24), 1);
  Function_20237bc_FreeMsg((int)v4, v6);
  return Function_20237bc_FreeMsg(v5, v7);
}

//----- (02232B2C) --------------------------------------------------------
uint __fastcall Function_2232b2c(int a1)
{
  int v1;
  uint result;
  uint v3;

  v1 = a1;
  Function_20014d0(*(uint *)(a1 + 436), (ushort *)(a1 + 442));
  result = 668;
  v3 = *(ushort *)(v1 + 2 * *(ushort *)(v1 + 442) + 668);
  if ( v3 != 255 )
    result = Function_2232ac4(v1, v3);
  return result;
}

//----- (02232B5C) --------------------------------------------------------
int __fastcall Function_2232b5c(int result)
{
  if ( result )
  {
    **(ushort **)(result + 160) = -2;
    result = Function_2232a58(result, 0);
  }
  return result;
}

//----- (02232B78) --------------------------------------------------------
int __fastcall Function_2232b78(int *a1, uchar *a2, int a3, int a4)
{
  int v4;
  int *v5;
  ushort *v6;
  uint v7;
  int v8;
  int result;
  char v10;
  int v11;

  v11 = a4;
  v4 = (int)a2;
  v5 = a1;
  v6 = (ushort *)*((uint *)a2 + 3);
  v7 = *v6;
  v8 = v6[1];
  result = *a2;
  if ( *a2 )
  {
    if ( result != 1 )
    {
      if ( result == 2 )
      {
        result = ((int (__fastcall *)(uint, int))dword_222BF90[0])(**((uint **)a2 + 5), 5);
        if ( !result )
        {
          --**(uchar **)(v4 + 8);
          *(uint *)(*(uint *)(v4 + 20) + 56) = 0;
          free(v4);
          result = Call_RemoveTaskFromTaskList(v5);
        }
      }
      return result;
    }
  }
  else if ( v7 == 64787 )
  {
    result = 2;
    *a2 = 2;
    return result;
  }
  result = ((int (__fastcall *)(uint, int))dword_222BF90[0])(**((uint **)a2 + 5), 5);
  if ( !result )
  {
    if ( v7 < 0x20 || v7 > 0x26 )
    {
      if ( v7 < 0x27 || v7 >= 0x29 )
      {
        Function_2232c80(&v10, **(uint **)(v4 + 20), *(ushort *)(v4 + 4), v7);
        ((void (__fastcall *)(uint, char *))dword_222D7C8[0])(*(uint *)(v4 + 16), &v10);
        if ( (uchar)++*(uchar *)(v4 + 1) >= v8 )
        {
          *(uchar *)(v4 + 1) = 0;
          *(uint *)(v4 + 12) += 4;
        }
        result = 0;
        *(uchar *)v4 = 0;
      }
      else
      {
        if ( v7 == 39 )
        {
          ((void (__fastcall *)(uint, int))dword_222D008[0])(*(uint *)(*(uint *)(v4 + 20) + 4), 1);
        }
        else if ( v7 == 40 )
        {
          ((void (__fastcall *)(uint, uint))dword_222D008[0])(*(uint *)(*(uint *)(v4 + 20) + 4), 0);
        }
        else
        {
          ErrorHandler();
        }
        result = *(uint *)(v4 + 12) + 4;
        *(uint *)(v4 + 12) = result;
      }
    }
    else
    {
      ++*(ushort *)(v4 + 2);
      result = *((uchar *)&dword_223F9A4[-8] + v7);
      if ( *(short *)(v4 + 2) >= result )
      {
        *(ushort *)(v4 + 2) = 0;
        result = *(uint *)(v4 + 12) + 4;
        *(uint *)(v4 + 12) = result;
      }
    }
  }
  return result;
}

//----- (02232C80) --------------------------------------------------------
int __fastcall Function_2232c80(int a1, int a2, char a3, int a4)
{
  ushort *v4;
  int v5;
  int v6;
  int result;
  int v8;
  ushort v9;
  int v10;

  v4 = (ushort *)a1;
  *(uchar *)(a1 + 7) = a3;
  *(uchar *)(a1 + 6) = HIWORD(dword_22419A0[a4]);
  v5 = LOWORD(dword_22419A0[a4]);
  v4[2] = v5;
  if ( v5 != 2 && v5 != 3 && v5 != 6 )
  {
    v8 = ((int (__fastcall *)(int))dword_222C0E4[0])(a2);
    v9 = HIWORD(v8);
    *v4 = v8;
    result = v9;
    v4[1] = v9;
  }
  else
  {
    v6 = ((int (__fastcall *)(int))dword_222C0F0[0])(a2);
    v10 = v6;
    *v4 = v6;
    result = HIWORD(v10);
    v4[1] = HIWORD(v10);
  }
  return result;
}

//----- (02232CE0) --------------------------------------------------------
uint __fastcall Function_2232ce0(uint *a1, int *a2, uint a3, int a4, short a5, short a6, int a7, int a8, int a9, ushort a10)
{
  uint *v10;
  uint *v11;
  int v12;
  int v13;
  int *v14;
  int v15;
  char *v16;
  int *v17;
  uint v18;
  int v19;
  int v20;
  uint *v21;
  ushort v22;
  int v23;
  int v24;
  uint result;
  int *v26;
  uint v27;
  int *v28;
  int v29;
  short v30;
  short v31;
  short v32;
  short v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  char v39;
  ushort v40;
  ushort v41;

  v10 = a1;
  v26 = a2;
  v29 = a1[1];
  v11 = (uint *)a1[13];
  v12 = a1[14];
  v27 = a3;
  v13 = a4;
  v14 = LoadFromNARC_8(27, a3, a3, a4);
  Function_200cc3c(v11, v12, (int)v14, 0x70u, 0, 1, v13);
  Function_200cdc4(v29, 2u, v11, v12, (int)v14, 0x6Fu, 0, 1, 1, v13);
  Function_200ce24(v11, v12, (int)v14, 0x71u, 0, v13);
  Function_200ce54(v11, v12, (int)v14, 0x72u, 0, v13);
  Call_FS_CloseFile(v14);
  MI_CpuFill8(&v30, 0, 0x34u);
  v30 = a5;
  v31 = a6;
  v15 = 0;
  v32 = 0;
  v33 = 0;
  v35 = 0;
  v34 = a7;
  v36 = 1;
  v38 = 0;
  v37 = a8;
  v16 = (char *)&v30;
  do
  {
    ++v15;
    *((uint *)v16 + 5) = v13;
    v16 += 4;
  }
  while ( v15 < 6 );
  v17 = Function_200ce6c(v11, v12, &v30);
  Function_200d330(v17);
  v28 = (int *)malloc(v27, 3200);
  v18 = GetPkmnData(v26, 0, 0);
  v19 = GetPkmnData(v26, 5u, 0);
  Function_2075ef4((int)&v39, (int)v26, 2u);
  Function_20136a4(*(ushort *)&v39, v40, v27, 0, 0, 10, 10, (int)v28, v18, 0, 2, v19);
  v20 = Function_2021f98(*v17);
  DC_FlushRange((int)v28, 4);
  GX_LoadOBJ(v28, *(uint *)(v20 + 4), 0xC80u);
  v21 = (uint *)Function_2021f9c(*v17);
  v22 = 16 * Function_201fab4(v21, 1);
  Function_2003050(v29, *(ushort *)&v39, v41, v27, 2, 32, v22);
  if ( a9 > 0 )
    Function_20039b0(v29, 2, v22, 0x10u, a9, a10);
  free((int)v28);
  v23 = (int)(v10 + 32);
  v24 = 4 * (v13 - 50000);
  result = *(uint *)(v23 + v24);
  if ( result )
    result = ErrorHandler();
  *(uint *)(v23 + v24) = v17;
  return result;
}

//----- (02232E80) --------------------------------------------------------
int __fastcall Function_2232e80(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = a2;
  v4 = a1 + 128;
  v5 = 4 * (a2 - 50000);
  Function_200d0f4(*(uint *)(a1 + 128 + v5));
  *(uint *)(v4 + v5) = 0;
  Function_200d070(*(uint *)(v2 + 56), v3);
  Function_200d080(*(uint *)(v2 + 56), v3);
  Function_200d090(*(uint *)(v2 + 56), v3);
  return Function_200d0a0(*(uint *)(v2 + 56), v3);
}

//----- (02232EC0) --------------------------------------------------------
int __fastcall Function_2232ec0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = Function_2079fd0();
  Function_200cd7c(*(uint *)(v1 + 4), 2u, *(int **)(v1 + 52), *(uint *)(v1 + 56), 19, v2, 0, 3, 1, 2000);
  v3 = Function_2079fd8();
  Function_200ce0c(*(int **)(v1 + 52), *(uint *)(v1 + 56), 19, v3, 0, 2000);
  v4 = Function_2079fe4();
  return Function_200ce3c(*(int **)(v1 + 52), *(uint *)(v1 + 56), 19, v4, 0, 2000);
}

//----- (02232F28) --------------------------------------------------------
int __fastcall Function_2232f28(int a1)
{
  int v1;

  v1 = a1;
  Function_200d090(*(uint *)(a1 + 56), 2000);
  Function_200d0a0(*(uint *)(v1 + 56), 2000);
  return Function_200d080(*(uint *)(v1 + 56), 2000);
}

//----- (02232F4C) --------------------------------------------------------
int *__fastcall Function_2232f4c(int a1, int a2, int a3, short a4, short a5)
{
  int v5;
  int v6;
  int v7;
  int *v8;
  char *v9;
  int v10;
  int v11;
  int v12;
  int *v13;
  char v14;
  short v16;
  short v17;
  short v18;
  int v19;
  int v20;

  v5 = a3;
  v6 = a1;
  v16 = a4;
  if ( a3 >= 8 )
    ErrorHandler();
  v7 = Function_2079d80();
  Function_200d888(*(int **)(v6 + 52), *(uint *)(v6 + 56), 19, v7, 0, 1, v5 + 2000);
  v8 = dword_223F9E0;
  v9 = (char *)&v17;
  v10 = 6;
  do
  {
    v11 = *v8;
    v12 = v8[1];
    v8 += 2;
    *(uint *)v9 = v11;
    *((uint *)v9 + 1) = v12;
    v9 += 8;
    --v10;
  }
  while ( v10 );
  *(uint *)v9 = *v8;
  v20 += v5;
  v17 = v16;
  v18 = a5;
  v19 = 200;
  v13 = Function_200ce6c(*(uint **)(v6 + 52), *(uint *)(v6 + 56), &v17);
  v14 = Function_2079fc4();
  Function_2021f24(*v13, v14);
  Function_200d330(v13);
  return v13;
}

//----- (02232FD4) --------------------------------------------------------
uint __fastcall Function_2232fd4(int a1, int a2, int a3)
{
  int v3;

  v3 = a2;
  Function_200d070(*(uint *)(a1 + 56), a3 + 2000);
  return Function_200d0f4(v3);
}

//----- (02232FEC) --------------------------------------------------------
uint __fastcall Function_2232fec(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v4 = a1;
  v5 = LoadFromNARC_8(20, 0x5Eu, a3, a4);
  v6 = Function_2081934();
  Function_200cdc4(
    *(uint *)(v4 + 4),
    2u,
    *(uint **)(v4 + 52),
    *(uint *)(v4 + 56),
    (int)v5,
    v6,
    0,
    1,
    1,
    2001);
  v7 = Function_2081938();
  Function_200ce24(*(uint **)(v4 + 52), *(uint *)(v4 + 56), (int)v5, v7, 0, 2001);
  v8 = Function_208193c();
  Function_200ce54(*(uint **)(v4 + 52), *(uint *)(v4 + 56), (int)v5, v8, 0, 2001);
  v9 = Function_2081930();
  Function_200d888(*(int **)(v4 + 52), *(uint *)(v4 + 56), 20, v9, 0, 1, 2009);
  return Call_FS_CloseFile(v5);
}

//----- (0223307C) --------------------------------------------------------
int __fastcall Function_223307c(int a1)
{
  int v1;

  v1 = a1;
  Function_200d070(*(uint *)(a1 + 56), 2009);
  Function_200d090(*(uint *)(v1 + 56), 2001);
  Function_200d0a0(*(uint *)(v1 + 56), 2001);
  return Function_200d080(*(uint *)(v1 + 56), 2001);
}

//----- (022330AC) --------------------------------------------------------
int *__fastcall Function_22330ac(int a1, short a2, short a3)
{
  int *v3;
  short v4;
  int v5;
  short v6;
  short *v7;
  int v8;
  int v9;
  int v10;
  int *v11;
  short v13;
  short v14;
  int v15;

  v3 = dword_223F9AC;
  v4 = a3;
  v5 = a1;
  v6 = a2;
  v7 = &v13;
  v8 = 6;
  do
  {
    v9 = *v3;
    v10 = v3[1];
    v3 += 2;
    *(uint *)v7 = v9;
    *((uint *)v7 + 1) = v10;
    v7 += 4;
    --v8;
  }
  while ( v8 );
  *(uint *)v7 = *v3;
  v13 = v6;
  v14 = v4;
  v15 = 300;
  v11 = Function_200ce6c(*(uint **)(v5 + 52), *(uint *)(v5 + 56), &v13);
  Function_200d330(v11);
  return v11;
}

//----- (022330F0) --------------------------------------------------------
uint __fastcall Function_22330f0(int a1, int a2)
{
  return Function_200d0f4(a2);
}

//----- (022330FC) --------------------------------------------------------
int __fastcall Function_22330fc(int a1, int a2)
{
  return Function_223310c(a1, a2, 614);
}

//----- (0223310C) --------------------------------------------------------
uint *__fastcall Function_223310c(int **a1, ushort *a2, int a3)
{
  int **v3;
  ushort *v4;
  int v5;
  int v6;
  ushort *v7;
  ushort *v8;
  int v9;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_209b970(**a1);
  if ( *v4 == 0xFFFF )
  {
    v7 = (ushort *)LoadFromMsgNARC(1, 26, v5, 0x20u);
    Function_2231f74(*v3, (int)v7, v4[1], 1, 0);
    Function_200b190(v7);
  }
  else
  {
    v8 = (ushort *)LoadPlayerDataAdress(*(uint *)(v6 + 8));
    v9 = Function_2027ac0(v8);
    Function_22320b4(*v3, v9, *v4, v4[1], v4[2], v4[3], 1u);
  }
  return Function_222e974((int)v3, (int)Function_2233184);
}

//----- (02233184) --------------------------------------------------------
BOOL __fastcall Function_2233184(int a1)
{
  return Function_201d724(*(uchar *)(*(uint *)a1 + 80)) == 0;
}

//----- (0223319C) --------------------------------------------------------
int *__fastcall Function_223319c(int *result, int a2)
{
  int v2;

  v2 = a2;
  ++*(uchar *)(v2 + 8);
  if ( *(char *)(a2 + 8) > *(char *)(a2 + 9) )
  {
    *(uchar *)(a2 + 8) = 0;
    if ( (char)--*(uchar *)(a2 + 10) >= 0 )
    {
      *(ushort *)(a2 + 4) = -*(ushort *)(a2 + 4);
      result = (int *)-*(short *)(a2 + 6);
      *(ushort *)(a2 + 6) = (ushort)result;
    }
    else
    {
      Call_RemoveTaskFromTaskList(result);
      result = (int *)MI_CpuFill8((ushort *)v2, 0, 0xCu);
    }
  }
  return result;
}

//----- (022331E8) --------------------------------------------------------
ushort *__fastcall Function_22331e8(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  short v5;
  short v6;
  ushort *result;

  v2 = a2;
  v3 = a1;
  v4 = *(short *)(a2 + 8);
  if ( v4 > 0 )
  {
    result = (ushort *)(v4 - 1);
    *(ushort *)(a2 + 8) = (ushort)result;
  }
  else
  {
    if ( *(uchar *)(a2 + 10) == 1 )
    {
      WIN_IN = WIN_IN & 0xFFC0 | 0x2F;
      WIN_OUT = WIN_OUT & 0xFFC0 | 0x3F;
      v5 = *(uchar *)(a2 + 7);
      v6 = *(uchar *)(v2 + 5);
      WIN0_X1 = (*(uchar *)(v2 + 4) << 8) & 0xFF00 | *(uchar *)(v2 + 6);
      WIN0_Y1 = v5 | (v6 << 8) & 0xFF00;
      REG_DISPCNT = REG_DISPCNT & 0xFFFF1FFF | 0x2000;
    }
    else
    {
      REG_DISPCNT &= 0xFFFF1FFF;
    }
    Call_RemoveTaskFromTaskList(v3);
    result = MI_CpuFill8((ushort *)v2, 0, 0xCu);
  }
  return result;
}

//----- (0223327C) --------------------------------------------------------
uchar *__fastcall Function_223327c(int a1, uchar a2)
{
  int v2;
  uchar *result;

  v2 = (a2 << 6) & 0x7F | (uchar)(*(uchar *)(a1 + 151) & 0xBF);
  result = (uchar *)(a1 + 151);
  *result = v2;
  return result;
}

//----- (02233298) --------------------------------------------------------
uchar *__fastcall Function_2233298(int a1, uchar a2)
{
  int v2;
  uchar *result;

  v2 = (a2 << 7) & 0xFF | *(uchar *)(a1 + 151) & 0x7F;
  result = (uchar *)(a1 + 151);
  *result = v2;
  return result;
}

//----- (022332B4) --------------------------------------------------------
int __fastcall Function_22332b4(int a1)
{
  int **v1;
  int v2;
  uchar v3;
  uchar v4;
  int v5;
  int v6;

  v1 = (int **)a1;
  v2 = Function_222fc00(a1);
  v3 = Function_222fc00((int)v1);
  v4 = Function_222fc00((int)v1);
  v5 = Function_209b970(**v1);
  v6 = Function_22339b4(*(uint *)(v5 + 8), v2, v3, v4);
  Function_209b980((uint **)**v1, v6);
  return 0;
}

//----- (022332F4) --------------------------------------------------------
int __fastcall Function_22332f4(int a1)
{
  int **v1;
  int v2;
  int v3;

  v1 = (int **)a1;
  v2 = Function_222fc00(a1);
  v3 = Function_209b978(**v1);
  Function_2233b98(v3, v2);
  return 0;
}

//----- (02233310) --------------------------------------------------------
int __fastcall Function_2233310(int **a1)
{
  int v1;

  v1 = Function_209b978(**a1);
  Function_22340d0(v1);
  return 0;
}

//----- (02233324) --------------------------------------------------------
int __fastcall Function_2233324(int **a1)
{
  int **v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = Function_209b970(**a1);
  v3 = Function_209b978(**v1);
  v4 = malloc(0xBu, 36);
  MI_CpuFill8((ushort *)v4, 0, 0x24u);
  *(uint *)v4 = *(uint *)(v2 + 8);
  *(uchar *)(v4 + 4) = *(uchar *)(v3 + 4);
  *(uchar *)(v4 + 5) = *(uchar *)(v3 + 5);
  *(uchar *)(v4 + 6) = 0;
  *(uint *)(v4 + 8) = *(uint *)(v3 + 1236);
  *(uint *)(v4 + 12) = *(uint *)(v3 + 1240);
  *(uint *)(v4 + 28) = v3;
  Function_209b988(**v1, dword_223FA14, v4, 0, (int)Function_2233478);
  return 1;
}

//----- (0223338C) --------------------------------------------------------
int __fastcall Function_223338c(int **a1)
{
  int v1;
  int *v2;

  v1 = Function_209b978(**a1);
  v2 = *(int **)(v1 + 1276);
  *(uint *)(v1 + 20) = Function_2052868(v2[5]);
  Function_20520a4(v2);
  return 0;
}

//----- (022333B4) --------------------------------------------------------
int __fastcall Function_22333b4(int **a1)
{
  int **v1;
  int v2;
  int v3;

  v1 = a1;
  Function_209b970(**a1);
  v2 = Function_209b978(**v1);
  v3 = Function_223aba0();
  *(uint *)(v2 + 1276) = v3;
  Function_209b988(**v1, (int *)&JumpTable_BattleScreen, v3, 0, 0);
  return 1;
}

//----- (022333F8) --------------------------------------------------------
int __fastcall Function_22333f8(int **a1)
{
  int **v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  v2 = Function_209b970(**a1);
  v3 = Function_209b978(**v1);
  v4 = 0;
  v5 = v3;
  do
  {
    ++v4;
    *(ushort *)(v5 + 1244) = 0;
    v5 += 2;
  }
  while ( v4 < 6 );
  v6 = malloc(0xBu, 36);
  MI_CpuFill8((ushort *)v6, 0, 0x24u);
  *(uint *)v6 = *(uint *)(v2 + 8);
  *(uchar *)(v6 + 4) = *(uchar *)(v3 + 4);
  *(uchar *)(v6 + 5) = *(uchar *)(v3 + 5);
  *(uchar *)(v6 + 6) = 1;
  *(uint *)(v6 + 8) = *(uint *)(v3 + 1236);
  *(uint *)(v6 + 12) = *(uint *)(v3 + 1240);
  *(uint *)(v6 + 28) = v3;
  Function_209b988(**v1, dword_223FA24, v6, 0, (int)Function_2233478);
  return 1;
}

//----- (02233478) --------------------------------------------------------
uint __fastcall Function_2233478(int a1)
{
  int v1;

  v1 = a1;
  Function_223410c(*(uint *)(a1 + 28), a1);
  return free(v1);
}

//----- (0223348C) --------------------------------------------------------
int __fastcall Function_223348c(int **a1)
{
  int v1;

  v1 = Function_209b978(**a1);
  Function_223449c(v1);
  return 0;
}

//----- (022334A0) --------------------------------------------------------
int __fastcall Function_22334a0(int **a1)
{
  int v1;

  v1 = Function_209b978(**a1);
  Function_2234570(v1);
  return 0;
}

//----- (022334B4) --------------------------------------------------------
int __fastcall Function_22334b4(int **a1)
{
  int v1;

  v1 = Function_209b978(**a1);
  Function_22346a4(v1);
  return 0;
}

//----- (022334C8) --------------------------------------------------------
int __fastcall Function_22334c8(int **a1)
{
  int v1;

  v1 = Function_209b978(**a1);
  Function_223470c(v1);
  return 0;
}

//----- (022334DC) --------------------------------------------------------
int __fastcall Function_22334dc(int a1)
{
  int **v1;
  uchar *v2;
  uchar *v3;
  int v4;
  int v5;
  int v6;
  uint v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  char *v13;
  int *v14;
  ushort *v15;
  int v16;
  int v17;
  uint v18;
  uint v19;
  int v20;
  char *v21;
  int v22;
  int v23;
  int *v24;
  int v25;
  int i;
  int v27;
  int v28;
  int v30;
  int v31;
  ushort *v32;
  int v33;
  int *v34;
  uint v35[1];

  v1 = (int **)a1;
  v2 = *(uchar **)(a1 + 28);
  v3 = v2 + 1;
  *(uint *)(a1 + 28) = v2 + 1;
  v4 = *v2;
  v2 += 2;
  *(uint *)(a1 + 28) = v2;
  v5 = *v3;
  *(uint *)(a1 + 28) = v2 + 1;
  v33 = *v2;
  v32 = (ushort *)Function_222fbe4(a1);
  v6 = Function_209b978(**v1);
  v34 = (int *)Function_222e924(*v1);
  switch ( (uchar)v34 )
  {
    case 0:
      *(uchar *)(v6 + 7) = v5;
      break;
    case 1:
      *(uchar *)(v6 + 5) = v5;
      break;
    case 2:
      *(uchar *)(v6 + 4) = v5;
      break;
    case 3:
      *v32 = *(ushort *)(v6 + 2 * v5 + 1244);
      break;
    case 4:
      *v32 = *(ushort *)(v6 + 12);
      break;
    case 5:
      v7 = *(ushort *)(v6 + 12);
      if ( v7 < 0x270F )
        *(ushort *)(v6 + 12) = v7 + 1;
      break;
    case 6:
    case 8:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0x19:
      return 0;
    case 7:
      OS_ResetSystem(0);
      break;
    case 9:
      *v32 = Function_202ff68(*(uchar **)(v6 + 1268));
      break;
    case 0xA:
      Function_2234148(v6, 2);
      break;
    case 0xE:
      *v32 = Function_2234430(v6);
      break;
    case 0xF:
      *v32 = *(ushort *)(v6 + 56 * v5 + 1008) & 0x7FF;
      break;
    case 0x10:
      *v32 = *(ushort *)(v6 + 56 * v5 + 2 * v33 + 1012);
      break;
    case 0x11:
      v8 = AllocPkmnData(0xBu);
      v9 = Function_223ada0(v6);
      Function_222df40((ushort *)(v6 + 1008 + 56 * v5), v8, v9, v10);
      *v32 = GetPkmnData(v8, 0xB1u, 0);
      free((int)v8);
      break;
    case 0x12:
      v11 = Function_223aa74(*(uchar *)(v6 + 4), 1);
      v12 = 0;
      v31 = v11;
      v13 = (char *)v35;
      do
      {
        ++v12;
        *(uint *)v13 = 0;
        v13 += 4;
      }
      while ( v12 < 18 );
      v14 = AllocPkmnData(0xBu);
      v30 = 0;
      if ( v31 > 0 )
      {
        v15 = (ushort *)(v6 + 1008);
        do
        {
          v16 = Function_223ada0(v6);
          Function_222df40(v15, v14, v16, v17);
          v18 = GetPkmnData(v14, 0xB1u, 0);
          v19 = GetPkmnData(v14, 0xB2u, 0);
          if ( v18 == v19 )
            v19 = 255;
          ++v35[v18];
          if ( v19 != 255 )
            ++v35[v19];
          v15 += 28;
          ++v30;
        }
        while ( v30 < v31 );
      }
      free((int)v14);
      v20 = 0;
      v21 = (char *)v35;
      v22 = 0;
      do
      {
        if ( v35[v20] < *(uint *)v21 )
          v20 = v22;
        ++v22;
        v21 += 4;
      }
      while ( v22 < 18 );
      if ( v35[v20] > 1 )
        *v32 = v20;
      else
        *v32 = 255;
      break;
    case 0x13:
      *v32 = Function_223af34(v6);
      break;
    case 0x14:
      *v32 = Function_2234440(v6, v5);
      break;
    case 0x15:
      Function_2234474(v6);
      break;
    case 0x16:
      Function_2234480(v6);
      break;
    case 0x17:
      *v32 = Function_223443c(v6);
      break;
    case 0x18:
      *v32 = *(uchar *)(v6 + 1404);
      break;
    case 0x1A:
      *v32 = *(uchar *)(v6 + 1405);
      break;
    case 0x1B:
      Function_209ba80(v6);
      break;
    case 0x1C:
      *v32 = Function_223aed4(*(uchar *)(v6 + 4));
      break;
    case 0x1D:
      *v32 = *(uchar *)(v6 + 4);
      break;
    case 0x1E:
      Function_2019e2c(*v34, 3, 3u, 10, 0x1Au, 0xBu, v5);
      Function_201c3c0(*v34, 3);
      break;
    case 0x1F:
      v23 = Function_222e924(*v1);
      *(uint *)(v6 + 1280) = AddTaskToTaskList1((int)Function_22338b4, v23, 5u);
      break;
    case 0x20:
      v24 = *(int **)(v6 + 1280);
      if ( v24 )
      {
        Call_RemoveTaskFromTaskList(v24);
        *(uint *)(v6 + 1280) = 0;
      }
      break;
    case 0x21:
      Function_222e278(v6 + 52, *(ushort *)(v6 + 2 * *(uchar *)(v6 + 6) + 24), 0xBu, 178);
      Function_222e278(v6 + 324, *(ushort *)(v6 + 2 * (*(uchar *)(v6 + 6) + 7) + 24), 0xBu, 178);
      break;
    case 0x22:
      v25 = Function_223aa50(*(uchar *)(v6 + 4));
      for ( i = 0; i < v25; ++i )
      {
        GetAdrOfPkmnInParty(*(uint **)(v6 + 1236), i);
        Function_2076b10_Dummy();
        Function_200b538((*v1)[17], i, v27);
      }
      break;
    case 0x23:
      *v32 = Function_22347f8(v6);
      break;
    case 0x24:
      Function_2234790(v6);
      break;
    case 0x25:
      *v32 = 0;
      if ( !*(uchar *)(v6 + 4) )
      {
        v28 = *(ushort *)(v6 + 12) + 1;
        if ( v28 == 21 )
        {
          *v32 = 1;
        }
        else if ( v28 == 49 )
        {
          *v32 = 2;
        }
      }
      break;
    case 0x26:
      Function_223ae30(v6);
      break;
    case 0x27:
      Function_222e330(
        (ushort *)(v6 + 1008),
        (ushort *)(v6 + 978),
        v6 + 986,
        (int *)(v6 + 992),
        0,
        4,
        0xBu,
        179);
      break;
    case 0x28:
      Function_223adb0(v6);
      break;
    case 0x29:
      *v32 = *(uchar *)(v6 + 11);
      *(uchar *)(v6 + 11) = 1;
      break;
  }
  return 0;
}

//----- (022338B4) --------------------------------------------------------
int __fastcall Function_22338b4(int a1, int *a2)
{
  int *v2;
  int v3;
  bool v4;
  uchar v5;
  int v6;
  int result;

  v2 = a2;
  v3 = Function_20192f8(*a2, 2);
  v5 = __OFSUB__(v3, 255);
  v4 = v3 - 255 < 0;
  v6 = *v2;
  if ( v4 ^ v5 )
    result = Function_201c63c(v6, 2, 4u, 1);
  else
    result = Function_201c63c(v6, 2, 3u, 0);
  return result;
}

//----- (022338E0) --------------------------------------------------------
int __fastcall Function_22338e0(int a1)
{
  int **v1;
  ushort *v2;

  v1 = (int **)a1;
  v2 = (ushort *)Function_222fbe4(a1);
  *v2 = *(uint *)(Function_209b978(**v1) + 20);
  return 0;
}

//----- (022338FC) --------------------------------------------------------
int __fastcall Function_22338fc(int a1)
{
  int **v1;
  int v2;
  int v3;
  ushort *v4;
  int v5;

  v1 = (int **)a1;
  v2 = Function_222fc00(a1);
  v3 = Function_222fc00((int)v1);
  v4 = (ushort *)Function_222fbe4((int)v1);
  v5 = Function_209b978(**v1);
  *v4 = Function_22347a4(v5, v2, v3);
  return 1;
}

//----- (0223392C) --------------------------------------------------------
int __fastcall Function_223392c(int a1)
{
  int v1;

  v1 = a1;
  *(ushort *)(a1 + 120) = Function_222ea48(a1);
  Function_222e974(v1, (int)Function_223394c);
  return 1;
}

//----- (0223394C) --------------------------------------------------------
int __fastcall Function_223394c(int a1)
{
  int **v1;
  int v2;

  v1 = (int **)a1;
  Function_222fc8c((int *)a1, *(ushort *)(a1 + 120));
  v2 = Function_209b978(**v1);
  if ( *(uchar *)(v2 + 1794) < 2u )
    return 0;
  *(uchar *)(v2 + 1794) = 0;
  return 1;
}

//----- (0223397C) --------------------------------------------------------
int __fastcall Function_223397c(int **a1)
{
  int v1;
  uchar *v2;
  int v3;
  int v4;

  v1 = (int)a1;
  Function_209b970(**a1);
  v2 = *(uchar **)(v1 + 28);
  *(uint *)(v1 + 28) = v2 + 1;
  v3 = *v2;
  v4 = Function_209b978(**(uint **)v1);
  if ( !v4 )
    return 0;
  Function_22330fc(v1, v4 + 76 + 272 * v3);
  return 1;
}

//----- (022339B4) --------------------------------------------------------
int __fastcall Function_22339b4(int a1, int a2, char a3, char a4)
{
  int v4;
  int v5;
  char v6;
  ushort *v7;
  uchar *v8;
  int v9;
  int v10;
  char v11;
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
  short v25;
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
  char v39;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v39 = a4;
  dword_2241AC0[0] = malloc(0xBu, 1800);
  MI_CpuFill8((ushort *)dword_2241AC0[0], 0, 0x708u);
  *(uint *)(dword_2241AC0[0] + 1268) = Function_202ff58(v5);
  *(uint *)(dword_2241AC0[0] + 1272) = v5;
  *(uint *)dword_2241AC0[0] = 11;
  *(uint *)(dword_2241AC0[0] + 1236) = AllocPkmnParty(0xBu);
  *(uint *)(dword_2241AC0[0] + 1240) = AllocPkmnParty(0xBu);
  v7 = *(ushort **)(dword_2241AC0[0] + 1268);
  v8 = (uchar *)Function_20300f4(v5);
  if ( v4 )
  {
    *(uchar *)(dword_2241AC0[0] + 4) = Function_2030030((int)v7, 1u, 0);
    *(uchar *)(dword_2241AC0[0] + 5) = Function_2030030((int)v7, 0, 0);
    *(uchar *)(dword_2241AC0[0] + 6) = Function_2030030((int)v7, 2u, 0);
    v26 = LoadVariableAreaAdress_17(*(uint *)(dword_2241AC0[0] + 1272));
    v28 = Function_205e430(*(uchar *)(dword_2241AC0[0] + 5), *(uchar *)(dword_2241AC0[0] + 4), v27);
    v30 = Function_205e430(*(uchar *)(dword_2241AC0[0] + 5), *(uchar *)(dword_2241AC0[0] + 4), v29);
    v31 = Function_205e6a8(v30);
    *(ushort *)(dword_2241AC0[0] + 12) = Function_2030698(v26, v28, v31);
    v32 = LoadVariableAreaAdress_17(*(uint *)(dword_2241AC0[0] + 1272));
    v34 = Function_205e488(*(uchar *)(dword_2241AC0[0] + 5), *(uchar *)(dword_2241AC0[0] + 4), v33);
    v36 = Function_205e488(*(uchar *)(dword_2241AC0[0] + 5), *(uchar *)(dword_2241AC0[0] + 4), v35);
    v37 = Function_205e6a8(v36);
    *(ushort *)(dword_2241AC0[0] + 8) = Function_2030698(v32, v34, v37);
  }
  else
  {
    *(uchar *)(dword_2241AC0[0] + 4) = v6;
    *(uchar *)(dword_2241AC0[0] + 5) = v39;
    *(uchar *)(dword_2241AC0[0] + 6) = 0;
    Function_202ff4c(v7);
    v9 = *(uchar *)(dword_2241AC0[0] + 4);
    if ( v9 == 3 )
    {
      v10 = LoadFlagAdress(*(uint *)(dword_2241AC0[0] + 1272));
      v11 = Function_206b6fc(v10);
    }
    else
    {
      v11 = Function_20300e0(v8, 10, v9 + 4 * *(uchar *)(dword_2241AC0[0] + 5));
    }
    if ( v11 == 1 )
    {
      v12 = LoadVariableAreaAdress_17(*(uint *)(dword_2241AC0[0] + 1272));
      v14 = Function_205e430(
              *(uchar *)(dword_2241AC0[0] + 5),
              *(uchar *)(dword_2241AC0[0] + 4),
              v13);
      v16 = Function_205e430(
              *(uchar *)(dword_2241AC0[0] + 5),
              *(uchar *)(dword_2241AC0[0] + 4),
              v15);
      v17 = Function_205e6a8(v16);
      *(ushort *)(dword_2241AC0[0] + 12) = Function_2030698(v12, v14, v17);
      v18 = dword_2241AC0[0];
      v19 = LoadVariableAreaAdress_17(*(uint *)(dword_2241AC0[0] + 1272));
      v21 = Function_205e488(
              *(uchar *)(dword_2241AC0[0] + 5),
              *(uchar *)(dword_2241AC0[0] + 4),
              v20);
      v23 = Function_205e488(
              *(uchar *)(dword_2241AC0[0] + 5),
              *(uchar *)(dword_2241AC0[0] + 4),
              v22);
      v24 = Function_205e6a8(v23);
      v25 = Function_2030698(v19, v21, v24);
    }
    else
    {
      v18 = dword_2241AC0[0];
      v25 = 0;
      *(ushort *)(dword_2241AC0[0] + 12) = 0;
    }
    *(ushort *)(v18 + 8) = v25;
    *(uint *)(v18 + 16) = 0;
  }
  *(ushort *)(dword_2241AC0[0] + 14) = s32_div_f(*(ushort *)(dword_2241AC0[0] + 12), 7);
  if ( Function_223aed4(*(uchar *)(dword_2241AC0[0] + 4)) == 1 )
    Function_222e630(*(uint *)(dword_2241AC0[0] + 1272));
  return dword_2241AC0[0];
}

//----- (02233B98) --------------------------------------------------------
int __fastcall Function_2233b98(int a1, int a2)
{
  int result;

  if ( a2 )
    result = Function_2233f1c();
  else
    result = Function_2233bac();
  return result;
}

//----- (02233BAC) --------------------------------------------------------
int *__fastcall Function_2233bac(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  char *v6;
  int *v7;
  char *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  short *v13;
  char *v14;
  int v15;
  char *v16;
  short v17;
  short v18;
  int v19;
  int v20;
  char *v21;
  int *v22;
  uint *v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  ushort *v29;
  int *v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int *result;
  int v36;
  int v37;
  char v38;
  char v39;
  char v40;

  v1 = a1;
  v2 = Function_223af34(a1);
  Function_223a860(*(uchar *)(v1 + 4), v2, v1 + 24, 14);
  v3 = Function_223af34(v1);
  Function_223aaa0(
    v3,
    *(uchar *)(v1 + 5),
    v1 + 596,
    v1 + 640,
    v1 + 608,
    v1 + 616,
    *(ushort *)(v1 + 8),
    0,
    0);
  Function_2233d80(v1, 4, 0);
  Function_2233d80(v1, 5, 0);
  v37 = 6;
  v4 = 0;
  v5 = v1;
  v6 = &v40;
  do
  {
    v7 = (int *)(v5 + 640);
    v8 = v6;
    v9 = 7;
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
    v5 += 56;
    v6 += 56;
    ++v4;
  }
  while ( v4 < 6 );
  if ( Function_223aed4(*(uchar *)(v1 + 4)) == 1 )
  {
    v12 = 0;
    v13 = (short *)(v1 + 640);
    v14 = &v39;
    v15 = v1;
    v16 = &v38;
    do
    {
      v17 = *v13;
      ++v12;
      v13 += 28;
      *(ushort *)v14 = v17 & 0x7FF;
      v18 = *(ushort *)(v15 + 642);
      v14 += 2;
      v15 += 56;
      *(ushort *)v16 = v18;
      v16 += 2;
    }
    while ( v12 < 6 );
    v19 = Function_223af34(v1);
    Function_223aaa0(
      v19,
      *(uchar *)(v1 + 5),
      v1 + 1412,
      v1 + 1456,
      v1 + 1424,
      v1 + 1432,
      *(ushort *)(v1 + 1408),
      &v39,
      &v38);
    Function_2233d80(v1, 4, 1);
    Function_2233d80(v1, 5, 1);
    v37 = 12;
    v36 = 0;
    v20 = v1;
    v21 = &v40;
    do
    {
      v22 = (int *)(v20 + 1456);
      v23 = v21 + 336;
      v24 = 7;
      do
      {
        v25 = *v22;
        v26 = v22[1];
        v22 += 2;
        *v23 = v25;
        v23[1] = v26;
        v23 += 2;
        --v24;
      }
      while ( v24 );
      v20 += 56;
      v21 += 56;
      ++v36;
    }
    while ( v36 < 6 );
  }
  v27 = Function_223aa74(*(uchar *)(v1 + 4), 1);
  Function_223ab0c(
    v27,
    *(ushort *)(v1 + 2 * *(uchar *)(v1 + 6) + 24),
    *(uchar *)(v1 + 5),
    &v40,
    v1 + 978,
    v1 + 1008,
    v1 + 986,
    v1 + 992,
    v37);
  v28 = 0;
  v29 = (ushort *)(v1 + 640);
  do
  {
    v30 = AllocPkmnData(0xBu);
    v31 = Function_223ada0(v1);
    Function_222df40(v29, v30, v31, v32);
    Function_222e1c0(*(uint *)(v1 + 1272), *(uint **)(v1 + 1236), v30, v33);
    free((int)v30);
    ++v28;
    v29 += 28;
  }
  while ( v28 < 6 );
  v34 = 0;
  do
    result = GetAdrOfPkmnInParty(*(uint **)(v1 + 1236), v34++);
  while ( v34 < 6 );
  return result;
}

//----- (02233D80) --------------------------------------------------------
int __fastcall Function_2233d80(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  uint v6;
  ushort v7;
  int v8;
  char *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  uint *v14;
  int *v15;
  int v16;
  int v17;
  int v18;
  char *v19;
  int v20;
  int result;
  int v22;
  char *v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  uint *v29;
  int *v30;
  int v31;
  int v32;
  int v33;
  char *v34;
  int v35;
  int v36;
  int v37;
  char v38;
  short v39;
  uint *v40;
  uint *v41;
  int v42;
  char v43;
  short v44;
  int *v45;
  int v46;
  int v47;
  int *v48;
  int v49;
  int v50;
  char v51;
  char v52;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = PRNG();
  s32_div_f(v6, 6);
  v8 = v7;
  if ( v5 )
  {
    v23 = &v51;
    v39 = *(ushort *)(v3 + 1412 + 2 * v4);
    v24 = 7;
    v38 = *(uchar *)(v3 + 1424 + v4);
    v37 = *(uint *)(v3 + 1432 + 4 * v4);
    v40 = (uint *)(v3 + 1456 + 56 * v4);
    v48 = (int *)(v3 + 1456 + 56 * v4);
    do
    {
      --v24;
      v25 = *v48;
      v26 = v48[1];
      v48 += 2;
      *(uint *)v23 = v25;
      *((uint *)v23 + 1) = v26;
      v23 += 8;
    }
    while ( v24 );
    v49 = v3 + 1412;
    *(ushort *)(v3 + 1412 + 2 * v4) = *(ushort *)(v3 + 1412 + 2 * v8);
    v27 = v3 + 1424;
    *(uchar *)(v3 + 1424 + v4) = *(uchar *)(v3 + 1424 + v8);
    v28 = v3 + 1432;
    *(uint *)(v3 + 1432 + 4 * v4) = *(uint *)(v3 + 1432 + 4 * v8);
    v29 = (uint *)(v3 + 1456 + 56 * v8);
    v30 = (int *)(v3 + 1456 + 56 * v8);
    v31 = 7;
    do
    {
      v32 = *v30;
      v33 = v30[1];
      v30 += 2;
      *v40 = v32;
      v40[1] = v33;
      v40 += 2;
      --v31;
    }
    while ( v31 );
    *(ushort *)(v49 + 2 * v8) = v39;
    *(uchar *)(v27 + v8) = v38;
    v34 = &v51;
    *(uint *)(v28 + 4 * v8) = v37;
    v35 = 7;
    do
    {
      result = *(uint *)v34;
      v36 = *((uint *)v34 + 1);
      v34 += 8;
      *v29 = result;
      v29[1] = v36;
      v29 += 2;
      --v35;
    }
    while ( v35 );
  }
  else
  {
    v9 = &v52;
    v44 = *(ushort *)(v3 + 596 + 2 * v4);
    v10 = 7;
    v43 = *(uchar *)(v3 + 608 + v4);
    v42 = *(uint *)(v3 + 616 + 4 * v4);
    v41 = (uint *)(v3 + 640 + 56 * v4);
    v45 = (int *)(v3 + 640 + 56 * v4);
    do
    {
      --v10;
      v11 = *v45;
      v12 = v45[1];
      v45 += 2;
      *(uint *)v9 = v11;
      *((uint *)v9 + 1) = v12;
      v9 += 8;
    }
    while ( v10 );
    v46 = v3 + 596;
    *(ushort *)(v3 + 596 + 2 * v4) = *(ushort *)(v3 + 596 + 2 * v8);
    v47 = v3 + 608;
    *(uchar *)(v3 + 608 + v4) = *(uchar *)(v3 + 608 + v8);
    v13 = v3 + 616;
    v50 = 4 * v8;
    *(uint *)(v3 + 616 + 4 * v4) = *(uint *)(v3 + 616 + 4 * v8);
    v14 = (uint *)(v3 + 640 + 56 * v8);
    v15 = (int *)(v3 + 640 + 56 * v8);
    v16 = 7;
    do
    {
      v17 = *v15;
      v18 = v15[1];
      v15 += 2;
      *v41 = v17;
      v41[1] = v18;
      v41 += 2;
      --v16;
    }
    while ( v16 );
    *(ushort *)(v46 + 2 * v8) = v44;
    v19 = &v52;
    *(uchar *)(v47 + v8) = v43;
    v20 = 7;
    *(uint *)(v13 + v50) = v42;
    do
    {
      result = *(uint *)v19;
      v22 = *((uint *)v19 + 1);
      v19 += 8;
      *v14 = result;
      v14[1] = v22;
      v14 += 2;
      --v20;
    }
    while ( v20 );
  }
  return result;
}

//----- (02233F1C) --------------------------------------------------------
uint __fastcall Function_2233f1c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  char *v5;
  char *v6;
  int *v7;
  int v8;
  ushort *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  char *v14;
  char *v15;
  int *v16;
  int v17;
  ushort *v18;
  int v19;
  int v20;
  int v21;
  int v23;
  char *v24;
  int v25;
  char *v26;
  char v27;
  char v28;
  char v29;
  char v30;

  v1 = a1;
  Function_223aa50(*(uchar *)(a1 + 4));
  v2 = 0;
  v3 = v1;
  do
  {
    *(ushort *)(v3 + 24) = Function_2030030(*(uint *)(v1 + 1268), 3u, (uchar)v2++);
    v3 += 2;
  }
  while ( v2 < 14 );
  v4 = 0;
  v5 = &v29;
  v24 = &v28;
  v6 = &v27;
  v23 = v1;
  do
  {
    *(ushort *)v5 = Function_2030030(*(uint *)(v1 + 1268), 4u, (uchar)v4);
    *(uint *)v24 = Function_2030030(*(uint *)(v1 + 1268), 6u, (uchar)v4);
    *v6 = Function_2030030(*(uint *)(v1 + 1268), 5u, (uchar)v4++);
    *(ushort *)(v23 + 1256) = *(ushort *)v5;
    v5 += 2;
    v24 += 4;
    ++v6;
    v23 += 2;
  }
  while ( v4 < 4 );
  Function_222e330(&v30, (ushort *)&v29, (int)&v27, (int *)&v28, 0, 4, 0xBu, 179);
  v7 = AllocPkmnData(0xBu);
  v8 = 0;
  v9 = (ushort *)&v30;
  do
  {
    v10 = Function_223ada0(v1);
    Function_222df40(v9, v7, v10, v11);
    Function_222e1c0(*(uint *)(v1 + 1272), *(uint **)(v1 + 1236), v7, v12);
    ++v8;
    v9 += 28;
  }
  while ( v8 < 4 );
  free((int)v7);
  v13 = 0;
  v14 = &v29;
  v26 = &v28;
  v15 = &v27;
  v25 = v1;
  do
  {
    *(ushort *)v14 = Function_2030030(*(uint *)(v1 + 1268), 7u, (uchar)v13);
    *(uint *)v26 = Function_2030030(*(uint *)(v1 + 1268), 9u, (uchar)v13);
    *v15 = Function_2030030(*(uint *)(v1 + 1268), 8u, (uchar)v13++);
    *(ushort *)(v25 + 978) = *(ushort *)v14;
    v14 += 2;
    v26 += 4;
    ++v15;
    v25 += 2;
  }
  while ( v13 < 4 );
  Function_222e330(&v30, (ushort *)&v29, (int)&v27, (int *)&v28, 0, 4, 0xBu, 179);
  v16 = AllocPkmnData(0xBu);
  v17 = 0;
  v18 = (ushort *)&v30;
  do
  {
    v19 = Function_223ada0(v1);
    Function_222df40(v18, v16, v19, v20);
    Function_222e1c0(*(uint *)(v1 + 1272), *(uint **)(v1 + 1240), v16, v21);
    ++v17;
    v18 += 28;
  }
  while ( v17 < 4 );
  return free((int)v16);
}

//----- (022340D0) --------------------------------------------------------
uint __fastcall Function_22340d0(uint result)
{
  int v1;
  int v2;
  int v3;

  v1 = result;
  if ( result )
  {
    v2 = *(uint *)(result + 1236);
    if ( v2 )
      free(v2);
    v3 = *(uint *)(v1 + 1240);
    if ( v3 )
      free(v3);
    MI_CpuFill8((ushort *)v1, 0, 0x708u);
    result = free(v1);
  }
  return result;
}

//----- (0223410C) --------------------------------------------------------
int __fastcall Function_223410c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    result = Function_2234130(v3, (uchar)v4);
    *(ushort *)(v2 + 1244) = result;
    ++v4;
    v2 += 2;
  }
  while ( v4 < 6 );
  return result;
}

//----- (02234130) --------------------------------------------------------
int __fastcall Function_2234130(int a1, uint a2)
{
  if ( a2 < 6 )
    return *(ushort *)(a1 + 2 * a2 + 16);
  ErrorHandler();
  return 0;
}

//----- (02234148) --------------------------------------------------------
int __fastcall Function_2234148(int a1, int a2, int a3, int a4)
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
  int v21;
  uint v22;
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
  uint v33;
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
  int v44;
  uint v45;
  uint v46;
  uint v47;
  int *v48;
  int result;
  uint v50;
  uint v51;
  int *v52;
  uchar *v53;
  short v54;
  char v55;
  uint v56;
  int v57;

  v57 = a4;
  v4 = a1;
  v5 = a2;
  v53 = (uchar *)Function_20300f4(*(uint *)(a1 + 1272));
  v6 = LoadVariableAreaAdress_17(*(uint *)(v4 + 1272));
  Function_223aa50(*(uchar *)(v4 + 4));
  Function_223aa74(*(uchar *)(v4 + 4), 1);
  v55 = *(uchar *)(v4 + 5);
  Function_202ff84(*(uint *)(v4 + 1268), 0, 0, &v55);
  v55 = *(uchar *)(v4 + 4);
  Function_202ff84(*(uint *)(v4 + 1268), 1u, 0, &v55);
  Function_202ff70(*(uchar **)(v4 + 1268), 1);
  v55 = *(uchar *)(v4 + 6);
  Function_202ff84(*(uint *)(v4 + 1268), 2u, 0, &v55);
  v8 = Function_205e488(*(uchar *)(v4 + 5), *(uchar *)(v4 + 4), v7);
  v10 = Function_205e488(*(uchar *)(v4 + 5), *(uchar *)(v4 + 4), v9);
  v11 = Function_205e6a8(v10);
  Function_20306e4(v6, v8, v11, *(ushort *)(v4 + 8));
  v13 = Function_205e430(*(uchar *)(v4 + 5), *(uchar *)(v4 + 4), v12);
  v15 = Function_205e430(*(uchar *)(v4 + 5), *(uchar *)(v4 + 4), v14);
  v16 = Function_205e6a8(v15);
  Function_20306e4(v6, v13, v16, *(ushort *)(v4 + 12));
  if ( v5 != 2 )
  {
    v18 = Function_205e45c(*(uchar *)(v4 + 5), *(uchar *)(v4 + 4), v17);
    v20 = Function_205e45c(*(uchar *)(v4 + 5), *(uchar *)(v4 + 4), v19);
    v21 = Function_205e6a8(v20);
    v22 = Function_2030698(v6, v18, v21);
    v24 = Function_205e45c(*(uchar *)(v4 + 5), *(uchar *)(v4 + 4), v23);
    v26 = Function_205e45c(*(uchar *)(v4 + 5), *(uchar *)(v4 + 4), v25);
    v27 = Function_205e6a8(v26);
    Function_2030848(v6, v24, v27, *(ushort *)(v4 + 12));
    v29 = Function_205e45c(*(uchar *)(v4 + 5), *(uchar *)(v4 + 4), v28);
    v31 = Function_205e45c(*(uchar *)(v4 + 5), *(uchar *)(v4 + 4), v30);
    v32 = Function_205e6a8(v31);
    v33 = Function_2030698(v6, v29, v32);
    if ( *(ushort *)(v4 + 12) == v22 )
    {
      v35 = Function_205e4b4(*(uchar *)(v4 + 5), *(uchar *)(v4 + 4), v34);
      v37 = Function_205e4b4(*(uchar *)(v4 + 5), *(uchar *)(v4 + 4), v36);
      v38 = Function_205e6a8(v37);
      Function_2030848(v6, v35, v38, *(ushort *)(v4 + 8));
    }
    else if ( v22 < v33 )
    {
      v39 = Function_205e4b4(*(uchar *)(v4 + 5), *(uchar *)(v4 + 4), v34);
      v41 = Function_205e4b4(*(uchar *)(v4 + 5), *(uchar *)(v4 + 4), v40);
      v42 = Function_205e6a8(v41);
      Function_20306e4(v6, v39, v42, *(ushort *)(v4 + 8));
    }
    v55 = *(uchar *)(v4 + 10);
    Function_20300b0(v53, 10, *(uchar *)(v4 + 4) + 4 * *(uchar *)(v4 + 5), (uchar *)&v55);
    if ( *(uchar *)(v4 + 4) == 3 )
    {
      if ( *(uchar *)(v4 + 5) )
        v43 = 104;
      else
        v43 = 102;
      v44 = Function_205e6a8(v43);
      Function_20306e4(v6, v43, v44, *(uchar *)(v4 + 10));
    }
  }
  v45 = 0;
  do
  {
    v54 = *(ushort *)(v4 + 2 * v45 + 24);
    Function_202ff84(*(uint *)(v4 + 1268), 3u, (uchar)v45, &v54);
    v45 = (v45 + 1) & 0xFFFF;
  }
  while ( v45 < 0xE );
  v46 = GetNrOfPkmnInParty(*(uint *)(v4 + 1236));
  v47 = 0;
  if ( v46 )
  {
    do
    {
      v48 = GetAdrOfPkmnInParty(*(uint **)(v4 + 1236), v47);
      v54 = *(ushort *)(v4 + 2 * v47 + 1256);
      Function_202ff84(*(uint *)(v4 + 1268), 4u, (uchar)v47, &v54);
      v55 = GetPkmnData(v48, 0x47u, 0);
      Function_202ff84(*(uint *)(v4 + 1268), 5u, (uchar)v47, &v55);
      v56 = GetPkmnData(v48, 0, 0);
      Function_202ff84(*(uint *)(v4 + 1268), 6u, (uchar)v47, &v56);
      v47 = (v47 + 1) & 0xFFFF;
    }
    while ( v47 < v46 );
  }
  result = GetNrOfPkmnInParty(*(uint *)(v4 + 1240));
  v50 = result;
  v51 = 0;
  if ( result )
  {
    do
    {
      v52 = GetAdrOfPkmnInParty(*(uint **)(v4 + 1240), v51);
      v54 = *(ushort *)(v4 + 2 * v51 + 978);
      Function_202ff84(*(uint *)(v4 + 1268), 7u, (uchar)v51, &v54);
      v55 = GetPkmnData(v52, 0x47u, 0);
      Function_202ff84(*(uint *)(v4 + 1268), 8u, (uchar)v51, &v55);
      v56 = GetPkmnData(v52, 0, 0);
      Function_202ff84(*(uint *)(v4 + 1268), 9u, (uchar)v51, &v56);
      result = (v51 + 1) << 16;
      v51 = (v51 + 1) & 0xFFFF;
    }
    while ( v51 < v50 );
  }
  return result;
}

//----- (02234430) --------------------------------------------------------
int __fastcall Function_2234430(int a1)
{
  return (uchar)++*(uchar *)(a1 + 6);
}

//----- (0223443C) --------------------------------------------------------
int __fastcall Function_223443c(int a1)
{
  return *(uchar *)(a1 + 6);
}

//----- (02234440) --------------------------------------------------------
int __fastcall Function_2234440(int a1, int a2)
{
  ushort *v2;
  char v4;
  short v5;

  v2 = Function_222dd04(
         (int)&v4,
         *(ushort *)(a1 + (2 * (*(uchar *)(a1 + 6) + 7 * a2) & 0x1FF) + 24),
         0xBu,
         178);
  free((int)v2);
  return Function_222e10c((uchar)v5);
}

//----- (02234474) --------------------------------------------------------
int __fastcall Function_2234474(int a1, int a2, int a3)
{
  return Function_2234148(a1, 1, a3, (int)Function_2234148);
}

//----- (02234480) --------------------------------------------------------
int __fastcall Function_2234480(int a1, int a2, int a3)
{
  uint v3;

  *(uchar *)(a1 + 10) = 1;
  v3 = *(ushort *)(a1 + 14);
  if ( v3 < 8 )
    *(ushort *)(a1 + 14) = v3 + 1;
  *(uchar *)(a1 + 6) = 0;
  return Function_2234148(a1, 0, a3, (int)Function_2234148);
}

//----- (0223449C) --------------------------------------------------------
uint __fastcall Function_223449c(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  ushort *v9;
  int v10;
  int v11;
  int v12;
  int v14;
  int v15;

  v1 = a1;
  v15 = Function_223aa50(*(uchar *)(a1 + 4));
  v14 = Function_223aa74(*(uchar *)(v1 + 4), 1);
  ZeroFillPkmnPartyStructure_6(*(int **)(v1 + 1236));
  v2 = AllocPkmnData(0xBu);
  v3 = 0;
  if ( v15 > 0 )
  {
    v4 = v1;
    do
    {
      v5 = Function_223ada0(v1);
      Function_222df40((ushort *)(v1 + 640 + 56 * *(ushort *)(v4 + 1244)), v2, v5, v6);
      Function_222e1c0(*(uint *)(v1 + 1272), *(uint **)(v1 + 1236), v2, v7);
      ++v3;
      *(ushort *)(v4 + 1256) = *(ushort *)(v1 + 2 * *(ushort *)(v4 + 1244) + 596);
      v4 += 2;
    }
    while ( v3 < v15 );
  }
  v8 = 0;
  if ( v14 > 0 )
  {
    v9 = (ushort *)(v1 + 1008);
    do
    {
      v10 = Function_223ada0(v1);
      Function_222df40(v9, v2, v10, v11);
      Function_222e1c0(*(uint *)(v1 + 1272), *(uint **)(v1 + 1240), v2, v12);
      ++v8;
      v9 += 28;
    }
    while ( v8 < v14 );
  }
  return free((int)v2);
}

//----- (02234570) --------------------------------------------------------
int __fastcall Function_2234570(int a1)
{
  int v1;
  int v2;
  char *v3;
  char *v4;
  int v5;
  char *v6;
  char *v7;
  int *v8;
  int v9;
  char *v10;
  char *v11;
  int *v12;
  int v13;
  int v15;
  int v16;
  int v17;
  int v18;
  char v19[16];
  char v20;

  v1 = 0;
  v2 = a1;
  v3 = &v20;
  v4 = v19;
  do
  {
    ++v1;
    *(ushort *)v3 = 0;
    *(ushort *)v4 = 0;
    v3 += 2;
    v4 += 2;
  }
  while ( v1 < 8 );
  v17 = Function_223aa74(*(uchar *)(a1 + 4), 1);
  v5 = 0;
  v18 = GetNrOfPkmnInParty(*(uint *)(v2 + 1236));
  if ( v18 > 0 )
  {
    v6 = &v20;
    v7 = v19;
    do
    {
      v8 = GetAdrOfPkmnInParty(*(uint **)(v2 + 1236), v5);
      *(ushort *)v6 = GetPkmnData(v8, 5u, 0);
      *(ushort *)v7 = GetPkmnData(v8, 6u, 0);
      ++v5;
      v6 += 2;
      v7 += 2;
    }
    while ( v5 < v18 );
  }
  v9 = 0;
  v15 = GetNrOfPkmnInParty(*(uint *)(v2 + 1240));
  if ( v15 > 0 )
  {
    v16 = v2;
    v10 = &v20 + 2 * v18;
    v11 = &v19[2 * v18];
    do
    {
      v12 = GetAdrOfPkmnInParty(*(uint **)(v2 + 1240), v9);
      *(ushort *)v10 = GetPkmnData(v12, 5u, 0);
      *(ushort *)v11 = GetPkmnData(v12, 6u, 0);
      ++v9;
      *(ushort *)(v16 + 596) = *(ushort *)(v16 + 978);
      v16 += 2;
      v10 += 2;
      v11 += 2;
    }
    while ( v9 < v15 );
  }
  v13 = Function_223a8a8(
          *(ushort *)(v2 + 2 * *(uchar *)(v2 + 6) + 24),
          *(uchar *)(v2 + 5));
  Function_223a918(&v20, v19, v18 + v15, v17, v2 + 978, 11, v13, 0, v2 + 986);
  return Function_222e330(
           (ushort *)(v2 + 1008),
           (ushort *)(v2 + 978),
           v2 + 986,
           0,
           (int *)(v2 + 992),
           v17,
           0xBu,
           179);
}

//----- (022346A4) --------------------------------------------------------
int __fastcall Function_22346a4(int a1)
{
  int v1;
  int result;
  int *v3;
  int v4;

  v1 = a1;
  result = *(ushort *)(a1 + 1244);
  if ( result != 255 )
  {
    v3 = GetAdrOfPkmnInParty(*(uint **)(v1 + 1240), *(ushort *)(v1 + 1246));
    Function_207a128(*(uint **)(v1 + 1236), *(ushort *)(v1 + 1244), v3);
    *(ushort *)(v1 + 2 * *(ushort *)(v1 + 1244) + 1256) = *(ushort *)(v1
                                                                            + 2 * *(ushort *)(v1 + 1246)
                                                                            + 596);
    Function_2234790(v1);
    v4 = LoadVariableAreaAdress_14(*(uint *)(v1 + 1272));
    result = Function_202cf28(v4, 64);
  }
  return result;
}

//----- (0223470C) --------------------------------------------------------
uint __fastcall Function_223470c(int a1)
{
  int v1;
  int v2;
  int *v3;
  ushort *v4;
  int v5;
  int v6;
  int v7;
  uint result;
  int i;
  int v10;

  v1 = a1;
  Function_223aa50(*(uchar *)(a1 + 4));
  v2 = Function_223aa74(*(uchar *)(v1 + 4), 1);
  ZeroFillPkmnPartyStructure_6(*(int **)(v1 + 1240));
  v3 = AllocPkmnData(0xBu);
  v10 = 0;
  if ( v2 > 0 )
  {
    v4 = (ushort *)(v1 + 1008);
    do
    {
      v5 = Function_223ada0(v1);
      Function_222df40(v4, v3, v5, v6);
      Function_222e1c0(*(uint *)(v1 + 1272), *(uint **)(v1 + 1240), v3, v7);
      v4 += 28;
      ++v10;
    }
    while ( v10 < v2 );
  }
  result = free((int)v3);
  for ( i = 0; i < v2; ++i )
    result = (uint)GetAdrOfPkmnInParty(*(uint **)(v1 + 1240), i);
  return result;
}

//----- (02234790) --------------------------------------------------------
int __fastcall Function_2234790(int result)
{
  uint v1;

  v1 = *(ushort *)(result + 8);
  if ( v1 < 0x270F )
    *(ushort *)(result + 8) = v1 + 1;
  return result;
}

//----- (022347A4) --------------------------------------------------------
int __fastcall Function_22347a4(int result, char a2, uchar a3)
{
  switch ( a2 )
  {
    case 0:
      result = Function_222eef8(result);
      break;
    case 1:
      result = Function_222ef64(result);
      break;
    case 2:
      result = Function_222efcc(result);
      break;
    case 3:
      result = Function_222f0b4(result);
      break;
    case 4:
      result = Function_222f1a0(result, a3);
      break;
    case 5:
      result = Function_222f1ec(result, a3);
      break;
    case 6:
      result = Function_222f238(result);
      break;
    default:
      return result;
  }
  return result;
}

//----- (022347F8) --------------------------------------------------------
int __fastcall Function_22347f8(int a1)
{
  uint v1;
  int v2;
  int v3;

  v1 = *(ushort *)(a1 + 14);
  if ( *(uchar *)(a1 + 4) > 1u )
  {
    if ( v1 < 8 )
      v2 = *((uchar *)dword_223FA40 + v1);
    else
      v2 = 21;
  }
  else if ( v1 < 8 )
  {
    v2 = *((uchar *)dword_223FA34 + v1);
  }
  else
  {
    v2 = 9;
  }
  if ( !*(uchar *)(a1 + 4) )
  {
    v3 = *(ushort *)(a1 + 12);
    if ( v3 == 21 || v3 == 49 )
      v2 = 20;
  }
  return v2;
}

//----- (02234838) --------------------------------------------------------
int __fastcall Function_2234838(int a1)
{
  int **v1;
  int v2;
  uchar v3;
  uchar v4;
  uchar v5;
  int v6;
  int v7;

  v1 = (int **)a1;
  v2 = Function_222fc00(a1);
  v3 = Function_222fc00((int)v1);
  v4 = Function_222fc00((int)v1);
  v5 = Function_222fc00((int)v1);
  v6 = Function_209b970(**v1);
  v7 = Function_2234db4(*(uint *)(v6 + 8), v2, v3, v4, v5);
  Function_209b980((uint **)**v1, v7);
  return 0;
}

//----- (0223488C) --------------------------------------------------------
int __fastcall Function_223488c(int a1)
{
  int **v1;
  int v2;
  int v3;

  v1 = (int **)a1;
  v2 = Function_222fc00(a1);
  v3 = Function_209b978(**v1);
  Function_22350b0(v3, v2);
  return 0;
}

//----- (022348A8) --------------------------------------------------------
int __fastcall Function_22348a8(int **a1)
{
  int v1;

  v1 = Function_209b978(**a1);
  Function_2235190(v1);
  return 0;
}

//----- (022348BC) --------------------------------------------------------
int __fastcall Function_22348bc(int **a1)
{
  int **v1;
  int v2;
  int v3;
  int v4;
  uint *v5;
  uint *v6;
  int *v7;
  int v8;
  int *v9;

  v1 = a1;
  v2 = Function_209b970(**a1);
  v3 = Function_209b978(**v1);
  v4 = malloc(0xBu, 32);
  MI_CpuFill8((ushort *)v4, 0, 0x20u);
  *(uint *)v4 = *(uint *)(v2 + 8);
  *(uchar *)(v4 + 4) = *(uchar *)(v3 + 4);
  *(uint *)(v4 + 16) = v3;
  *(uint *)(v4 + 8) = v3 + 1796 + 9 * *(uchar *)(v3 + 4);
  *(uint *)(v4 + 12) = *(uint *)(v3 + 612);
  *(ushort *)(v4 + 24) = *(ushort *)(v3 + 8);
  *(uchar *)(v4 + 5) = *(uchar *)(v3 + 1781);
  *(uint *)(v4 + 20) = v3 + 3460;
  ZeroFillPkmnPartyStructure_6(*(int **)(v4 + 12));
  v5 = (uint *)LoadPokePartyAdress(*(uint *)(v2 + 8));
  v6 = v5;
  v7 = GetAdrOfPkmnInParty(v5, *(uchar *)(v3 + 608));
  CopyPkmnDataToParty(*(uint **)(v4 + 12), v7);
  v8 = *(uchar *)(v4 + 4);
  if ( v8 == 1 )
  {
    v9 = GetAdrOfPkmnInParty(v6, *(uchar *)(v3 + 609));
    CopyPkmnDataToParty(*(uint **)(v4 + 12), v9);
  }
  else if ( ((v8 + 254) & 0xFFu) <= 1 )
  {
    CopyPkmnDataToParty(*(uint **)(v4 + 12), *(int **)(v3 + 3468));
  }
  Function_209b988(**v1, dword_223FA4C, v4, 0, (int)Function_2234a08);
  return 1;
}

//----- (02234994) --------------------------------------------------------
int __fastcall Function_2234994(int **a1)
{
  int v1;
  int *v2;

  v1 = Function_209b978(**a1);
  v2 = *(int **)(v1 + 1792);
  *(uint *)(v1 + 20) = Function_2052868(v2[5]);
  Function_20520a4(v2);
  return 0;
}

//----- (022349B8) --------------------------------------------------------
int __fastcall Function_22349b8(int **a1)
{
  int **v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  Function_209b970(**a1);
  v2 = Function_209b978(**v1);
  v3 = Function_223b250();
  v4 = v3;
  *(uint *)(v2 + 1792) = v3;
  Function_2004550(5u, 0x45Fu);
  Function_209b988(**v1, (int *)&JumpTable_BattleScreen, v4, 0, 0);
  return 1;
}

//----- (02234A08) --------------------------------------------------------
uint __fastcall Function_2234a08(int a1)
{
  int v1;

  v1 = a1;
  Function_22351cc(*(uint *)(a1 + 16), a1);
  return free(v1);
}

//----- (02234A1C) --------------------------------------------------------
int __fastcall Function_2234a1c(int a1)
{
  int **v1;
  uchar *v2;
  uchar *v3;
  uint v4;
  int v5;
  ushort *v6;
  int v7;
  char v8;
  uchar *v9;
  uint v10;
  int v11;
  int v12;
  ushort *v13;
  int *v14;
  uint v15;
  uint *v16;
  int *v17;
  int v18;
  uint *v20;
  int v21;

  v1 = (int **)a1;
  v2 = *(uchar **)(a1 + 28);
  v3 = v2 + 1;
  *(uint *)(a1 + 28) = v2 + 1;
  v4 = *v2;
  v2 += 2;
  *(uint *)(a1 + 28) = v2;
  v5 = *v3;
  *(uint *)(a1 + 28) = v2 + 1;
  v6 = (ushort *)Function_222fbe4(a1);
  v21 = Function_209b970(**v1);
  v7 = Function_209b978(**v1);
  v9 = (uchar *)v7;
  if ( v4 <= 0x26 )
    JUMPOUT(__CS__, (char *)&off_2234A60 + *((short *)&off_2234A60 + v4) + 2);
  switch ( v8 )
  {
    case 2:
      *(uchar *)(v7 + 4) = v5;
      break;
    case 3:
      *v6 = *(ushort *)(v7 + 1778);
      break;
    case 4:
      *v6 = *(ushort *)(v7 + 8);
      break;
    case 5:
      v10 = *(ushort *)(v7 + 8);
      if ( v10 < 0x270F )
        *(ushort *)(v7 + 8) = v10 + 1;
      break;
    case 7:
      OS_ResetSystem(0);
      break;
    case 9:
      *v6 = Function_2030124(*(uchar **)(v7 + 1784));
      break;
    case 10:
      Function_223526c();
      break;
    case 14:
      *v6 = Function_22354b0();
      break;
    case 15:
      v16 = (uint *)LoadPokePartyAdress(*(uint *)(v21 + 8));
      v17 = GetAdrOfPkmnInParty(v16, v9[608]);
      *v6 = GetPkmnData(v17, 5u, 0);
      break;
    case 17:
      *v6 = *(uchar *)(v7 + 4);
      break;
    case 19:
      if ( *(uchar *)(v7 + 4) == 2 )
        *v6 = 10;
      else
        *v6 = *(ushort *)(v7 + 10);
      break;
    case 20:
      *v6 = Function_22354c0();
      break;
    case 21:
      Function_22354f4();
      break;
    case 22:
      Function_2235518();
      break;
    case 23:
      *v6 = Function_22354bc();
      break;
    case 24:
      *v6 = *(uchar *)(v7 + 3464);
      break;
    case 27:
      v20 = (uint *)LoadPokePartyAdress(*(uint *)(v21 + 8));
      v11 = Function_223b500(v9[4]);
      v12 = 0;
      if ( v11 > 0 )
      {
        v13 = (ushort *)(v9 + 1832);
        do
        {
          v14 = GetAdrOfPkmnInParty(v20, v9[v12 + 608]);
          SetPkmnData((int)v14, 6, v13);
          ++v12;
          ++v13;
        }
        while ( v12 < v11 );
      }
      break;
    case 28:
      v15 = Function_20301e0(*(uchar *)(v7 + 1781), v7 + 1796 + 9 * *(uchar *)(v7 + 4));
      if ( v15 < 0xA )
        Function_2030204(v9[1781], (int)&v9[9 * v9[4] + 1796], (v15 + 1) & 0xFF);
      break;
    case 29:
      Function_209ba80(v7);
      break;
    case 30:
      *v6 = Function_223b5b0(*(uchar *)(v7 + 4));
      break;
    case 31:
      if ( v5 )
        Function_201ff0c(4u, 0);
      else
        Function_201ff0c(4u, 1);
      break;
    case 32:
      Function_222e278(v7 + 64, *(ushort *)(v7 + 4 * *(uchar *)(v7 + 5) + 24), 0xBu, 178);
      Function_222e278((int)(v9 + 336), *(ushort *)&v9[2 * (2 * v9[5] + 1) + 24], 0xBu, 178);
      break;
    case 33:
      *v6 = Function_20301e0(*(uchar *)(v7 + 1781), v7 + 1796 + 9 * *(uchar *)(v7 + 4));
      break;
    case 34:
      *v6 = Function_2235578();
      break;
    case 35:
      Function_22356a0();
      break;
    case 36:
      Function_22356f4();
      break;
    case 37:
      *v6 = 0;
      if ( !*(uchar *)(v7 + 4) )
      {
        v18 = *(ushort *)(v7 + 8) + 1;
        if ( v18 == 50 )
        {
          *v6 = 1;
        }
        else if ( v18 == 170 )
        {
          *v6 = 2;
        }
      }
      break;
    default:
      return 0;
  }
  return 0;
}

//----- (02234C80) --------------------------------------------------------
int __fastcall Function_2234c80(int a1)
{
  int **v1;
  ushort *v2;

  v1 = (int **)a1;
  v2 = (ushort *)Function_222fbe4(a1);
  *v2 = *(uint *)(Function_209b978(**v1) + 20);
  return 0;
}

//----- (02234C9C) --------------------------------------------------------
int __fastcall Function_2234c9c(int a1)
{
  int **v1;
  int v2;
  int v3;
  ushort *v4;
  int v5;

  v1 = (int **)a1;
  v2 = Function_222fc00(a1);
  v3 = Function_222fc00((int)v1);
  v4 = (ushort *)Function_222fbe4((int)v1);
  v5 = Function_209b978(**v1);
  *v4 = Function_2235534(v5, v2, v3);
  return 1;
}

//----- (02234CCC) --------------------------------------------------------
int __fastcall Function_2234ccc(int a1)
{
  int v1;

  v1 = a1;
  *(ushort *)(a1 + 120) = Function_222ea48(a1);
  Function_222e974(v1, (int)Function_2234cec);
  return 1;
}

//----- (02234CEC) --------------------------------------------------------
int __fastcall Function_2234cec(int a1)
{
  int **v1;
  int v2;

  v1 = (int **)a1;
  Function_222fc8c((int *)a1, *(ushort *)(a1 + 120));
  v2 = Function_209b978(**v1);
  if ( *(uchar *)(v2 + 3472) < 2u )
    return 0;
  *(uchar *)(v2 + 3472) = 0;
  return 1;
}

//----- (02234D18) --------------------------------------------------------
int __fastcall Function_2234d18(int **a1)
{
  int v1;
  uchar *v2;
  int v3;
  int v4;

  v1 = (int)a1;
  Function_209b970(**a1);
  v2 = *(uchar **)(v1 + 28);
  *(uint *)(v1 + 28) = v2 + 1;
  v3 = *v2;
  v4 = Function_209b978(**(uint **)v1);
  if ( !v4 )
    return 0;
  Function_22330fc(v1, v4 + 88 + 272 * v3);
  return 1;
}

//----- (02234D50) --------------------------------------------------------
int __fastcall Function_2234d50(int a1)
{
  int **v1;
  int v2;
  int v3;

  v1 = (int **)a1;
  v2 = Function_222fbe4(a1);
  v3 = Function_209b978(**v1);
  Function_223520c(v3, v2);
  return 1;
}

//----- (02234D6C) --------------------------------------------------------
int __fastcall Function_2234d6c(int **a1)
{
  int **v1;
  int v2;
  int v3;
  uint *v4;
  int *v5;
  int v6;

  v1 = a1;
  v2 = Function_209b970(**a1);
  v3 = Function_209b978(**v1);
  v4 = (uint *)LoadPokePartyAdress(*(uint *)(v2 + 8));
  v5 = GetAdrOfPkmnInParty(v4, *(uchar *)(v3 + 608));
  GetPkmnData(v5, 5u, 0);
  if ( !*(uchar *)(v3 + 4) )
  {
    v6 = Function_202440c(*(uint *)(v2 + 8));
    Function_206d048(v6, v5);
  }
  return 0;
}

//----- (02234DB4) --------------------------------------------------------
int __fastcall Function_2234db4(int a1, int a2, char a3, int a4, char a5)
{
  int v5;
  char v6;
  ushort *v7;
  int v8;
  int v9;
  int v10;
  char v11;
  int v12;
  int v13;
  int v14;
  uint v15;
  int v16;
  uint v17;
  int v18;
  int v19;
  int v20;
  uint v21;
  int v22;
  int v23;
  uint v24;
  uint v25;
  int i;
  uint *v27;
  int *v28;
  uint v29;
  uint v30;
  uchar v31;
  int v33;
  int v34;
  char v35;
  uchar *v36;
  char v37;
  short v38;
  int v39;

  v39 = a4;
  v5 = a2;
  v34 = a1;
  v6 = a3;
  v35 = a4;
  dword_2241AC0[1] = malloc(0xBu, 3480);
  MI_CpuFill8((ushort *)dword_2241AC0[1], 0, 0xD98u);
  *(uint *)(dword_2241AC0[1] + 1784) = Function_2030114(v34);
  *(uint *)(dword_2241AC0[1] + 1788) = v34;
  *(uint *)dword_2241AC0[1] = 11;
  *(uint *)(dword_2241AC0[1] + 612) = AllocPkmnParty(0xBu);
  *(uint *)(dword_2241AC0[1] + 3468) = AllocPkmnData(0xBu);
  v7 = *(ushort **)(dword_2241AC0[1] + 1784);
  v36 = (uchar *)Function_203026c(v34);
  if ( v5 )
  {
    *(uchar *)(dword_2241AC0[1] + 4) = Function_2030198((int)v7, 0, 0);
    v8 = Function_223b500(*(uchar *)(dword_2241AC0[1] + 4));
    *(uchar *)(dword_2241AC0[1] + 5) = Function_2030198((int)v7, 1u, 0);
    v18 = LoadVariableAreaAdress_17(*(uint *)(dword_2241AC0[1] + 1788));
    Function_205e50c(*(uchar *)(dword_2241AC0[1] + 4));
    v20 = v19;
    Function_205e50c(*(uchar *)(dword_2241AC0[1] + 4));
    v22 = Function_205e6a8(v21);
    v23 = 0;
    for ( *(ushort *)(dword_2241AC0[1] + 8) = Function_2030698(v18, v20, v22); v23 < v8; v23 = (v23 + 1) & 0xFFFF )
      *(uchar *)(dword_2241AC0[1] + v23 + 608) = Function_2030198((int)v7, 3u, (uchar)v23);
    v24 = 0;
    do
    {
      *(ushort *)(dword_2241AC0[1] + 2 * v24 + 24) = Function_2030198((int)v7, 2u, (uchar)v24);
      v24 = (v24 + 1) & 0xFFFF;
    }
    while ( v24 < 0x14 );
    v25 = 0;
    do
    {
      *(ushort *)(dword_2241AC0[1] + 2 * v25 + 616) = (uchar)Function_2030198(
                                                                        (int)v7,
                                                                        4u,
                                                                        (uchar)v25);
      v25 = (v25 + 1) & 0xFFFF;
    }
    while ( v25 < 0x14 );
  }
  else
  {
    *(uchar *)(dword_2241AC0[1] + 4) = v6;
    v8 = Function_223b500(*(uchar *)(dword_2241AC0[1] + 4));
    *(uchar *)(dword_2241AC0[1] + 5) = 0;
    Function_2030108(v7);
    v9 = *(uchar *)(dword_2241AC0[1] + 4);
    if ( v9 == 3 )
    {
      v10 = LoadFlagAdress(*(uint *)(dword_2241AC0[1] + 1788));
      v11 = Function_206b6fc(v10);
    }
    else
    {
      v33 = 0;
      v11 = Function_20302b4(v36, 5, v9);
    }
    if ( v11 == 1 )
    {
      v12 = LoadVariableAreaAdress_17(*(uint *)(dword_2241AC0[1] + 1788));
      Function_205e50c(*(uchar *)(dword_2241AC0[1] + 4));
      v14 = v13;
      Function_205e50c(*(uchar *)(dword_2241AC0[1] + 4));
      v16 = Function_205e6a8(v15);
      *(ushort *)(dword_2241AC0[1] + 8) = Function_2030698(v12, v14, v16);
    }
    else
    {
      v17 = 0;
      *(ushort *)(dword_2241AC0[1] + 8) = 0;
      do
      {
        Function_2235620(
          *(uint *)(dword_2241AC0[1] + 1788),
          *(uchar *)(dword_2241AC0[1] + 4),
          (uchar)v17,
          0,
          v33);
        v17 = (v17 + 1) & 0xFFFF;
      }
      while ( v17 < 0x12 );
    }
    *(uchar *)(dword_2241AC0[1] + 608) = v35;
    *(uchar *)(dword_2241AC0[1] + 609) = a5;
  }
  for ( i = 0; i < v8; i = (i + 1) & 0xFFFF )
  {
    v27 = (uint *)LoadPokePartyAdress(*(uint *)(dword_2241AC0[1] + 1788));
    v28 = GetAdrOfPkmnInParty(v27, *(uchar *)(dword_2241AC0[1] + i + 608));
    *(ushort *)(dword_2241AC0[1] + 2 * i + 1832) = GetPkmnData(v28, 6u, 0);
  }
  *(uint *)(dword_2241AC0[1] + 16) = 0;
  *(ushort *)(dword_2241AC0[1] + 10) = s32_div_f(*(ushort *)(dword_2241AC0[1] + 8), 10);
  if ( *(uchar *)(dword_2241AC0[1] + 4) == 2 )
  {
    v29 = 0;
    do
    {
      Function_2030204((uchar)v29, dword_2241AC0[1] + 1814, 9);
      v29 = (v29 + 1) & 0xFFFF;
    }
    while ( v29 < 0x12 );
  }
  else
  {
    v30 = 0;
    do
    {
      v31 = Function_22355c0(v34, *(uchar *)(dword_2241AC0[1] + 4), (uchar)v30, &v38, &v37);
      Function_2030204(
        (uchar)v30,
        dword_2241AC0[1] + 1796 + 9 * *(uchar *)(dword_2241AC0[1] + 4),
        v31);
      v30 = (v30 + 1) & 0xFFFF;
    }
    while ( v30 < 0x12 );
  }
  if ( Function_223b5b0(*(uchar *)(dword_2241AC0[1] + 4)) == 1 )
    Function_222e630(*(uint *)(dword_2241AC0[1] + 1788));
  return dword_2241AC0[1];
}

//----- (022350B0) --------------------------------------------------------
int Function_22350b0()
{
  return Function_22350b8();
}

//----- (022350B8) --------------------------------------------------------
int __fastcall Function_22350b8(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int *v6;
  ushort v7;
  int v9;

  v1 = a1;
  v2 = 0;
  v3 = 1;
  if ( *(uchar *)(a1 + 4) )
    v3 = 2;
  v4 = Function_20301e0(*(uchar *)(a1 + 1781), a1 + 1796 + 9 * *(uchar *)(a1 + 4));
  *(uchar *)(v1 + 7) = Function_2235704(v1);
  Function_223af58(*(uchar *)(v1 + 1781), v3, v4, *(uchar *)(v1 + 5), v1 + 24);
  Function_223afb4(
    *(uchar *)(v1 + 4),
    v3,
    *(ushort *)(v1 + 10),
    v4,
    *(uchar *)(v1 + 5),
    v1 + 24);
  v9 = 4 * *(uchar *)(v1 + 5) & 0x1FF;
  if ( ((*(ushort *)(v1 + 24 + v9) + 65229) & 0xFFFFu) <= 1 )
    v4 = Function_223b5c0(v1) & 0xFF;
  v5 = *(ushort *)(v1 + 24 + v9);
  if ( v5 == 307 )
    v2 = 1;
  if ( v5 == 308 )
    v2 = 2;
  v6 = GetAdrOfPkmnInParty(*(uint **)(v1 + 612), 0);
  v7 = GetPkmnData(v6, 5u, 0);
  return Function_223b0c8(1, *(uchar *)(v1 + 1780), v4, *(uchar *)(v1 + 5), v7, v1 + 616, v2);
}

//----- (02235190) --------------------------------------------------------
uint __fastcall Function_2235190(uint result)
{
  int v1;
  int v2;
  int v3;

  v1 = result;
  if ( result )
  {
    v2 = *(uint *)(result + 612);
    if ( v2 )
      free(v2);
    v3 = *(uint *)(v1 + 3468);
    if ( v3 )
      free(v3);
    MI_CpuFill8((ushort *)v1, 0, 0xD98u);
    result = free(v1);
  }
  return result;
}

//----- (022351CC) --------------------------------------------------------
uint __fastcall Function_22351cc(int a1, int a2)
{
  int v2;
  uint result;

  v2 = a1;
  *(ushort *)(a1 + 1778) = Function_2235208(a2, 0);
  *(uchar *)(v2 + 1781) = *(ushort *)(v2 + 1778);
  *(uchar *)(v2 + 1780) = Function_223b5a4(*(ushort *)(v2 + 1778) & 0xFF);
  result = *(uchar *)(v2 + 1781);
  if ( result >= 0x11 )
  {
    result = 1781;
    *(uchar *)(v2 + 1781) = 17;
  }
  return result;
}

//----- (02235208) --------------------------------------------------------
int __fastcall Function_2235208(int a1)
{
  return *(ushort *)(a1 + 6);
}

//----- (0223520C) --------------------------------------------------------
int __fastcall Function_223520c(int a1, ushort *a2, int a3, int a4)
{
  int v4;
  uint v5;
  ushort *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint v11;
  int v12;
  int v13;
  int result;
  char v15;
  char v16;
  int v17;

  v17 = a4;
  v4 = a1;
  v5 = *(uchar *)(a1 + 4);
  v6 = a2;
  if ( v5 == 3 )
  {
    result = 0;
    *a2 = 0;
  }
  else
  {
    Function_205e534(*(uchar *)(a1 + 4));
    v8 = v7;
    Function_205e55c(*(uchar *)(v4 + 4));
    v10 = v9;
    Function_205e534(*(uchar *)(v4 + 4));
    v12 = Function_205e6a8(v11);
    v13 = Function_205e584(v5);
    result = Function_20309a0(*(uint *)(v4 + 1788), v8, v10, v12, v13, 0xBu, &v16, (int *)&v15);
    *v6 = result;
  }
  return result;
}

//----- (0223526C) --------------------------------------------------------
uint __fastcall Function_223526c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint *v6;
  int v7;
  int v8;
  int v9;
  uint v10;
  int v11;
  int v12;
  int v13;
  int v14;
  uint v15;
  int v16;
  uint v17;
  int v18;
  int v19;
  uint v20;
  int v21;
  int v22;
  int v23;
  uint v24;
  int v25;
  int v26;
  int v27;
  uint v28;
  int v29;
  int v30;
  uint v31;
  uint v32;
  uint v33;
  uint v34;
  int v35;
  int v36;
  uint v37;
  int v38;
  ushort v39;
  int v41;
  uchar *v42;
  int *v43;
  int v44;
  short v45;
  uchar v46;
  int v47;

  v47 = a4;
  v4 = a1;
  v5 = a2;
  v42 = (uchar *)Function_203026c(*(uint *)(a1 + 1788));
  v44 = LoadVariableAreaAdress_17(*(uint *)(v4 + 1788));
  v46 = *(uchar *)(v4 + 4);
  Function_2030140(*(uint *)(v4 + 1784), 0, 0, 0, &v46);
  Function_203012c(*(uchar **)(v4 + 1784), 1);
  v6 = (uint *)LoadPokePartyAdress(*(uint *)(v4 + 1788));
  v43 = GetAdrOfPkmnInParty(v6, *(uchar *)(v4 + 608));
  v7 = (ushort)GetPkmnData(v43, 5u, 0);
  Function_205e55c(*(uchar *)(v4 + 4));
  v9 = v8;
  Function_205e55c(*(uchar *)(v4 + 4));
  v11 = Function_205e6a8(v10);
  v12 = Function_2030698(v44, v9, v11);
  v46 = *(uchar *)(v4 + 5);
  Function_2030140(*(uint *)(v4 + 1784), 1u, 0, 0, &v46);
  Function_205e50c(*(uchar *)(v4 + 4));
  v14 = v13;
  Function_205e50c(*(uchar *)(v4 + 4));
  v16 = Function_205e6a8(v15);
  Function_20306e4(v44, v14, v16, *(ushort *)(v4 + 8));
  if ( v5 != 2 )
  {
    v17 = *(uchar *)(v4 + 4);
    if ( v17 == 3 )
    {
      if ( v12 == v7 )
      {
        Function_205e534(*(uchar *)(v4 + 4));
        v27 = v26;
        Function_205e534(3u);
        v29 = Function_205e6a8(v28);
        Function_2030848(v44, v27, v29, *(ushort *)(v4 + 8));
      }
      else
      {
        Function_205e534(*(uchar *)(v4 + 4));
        v23 = v22;
        Function_205e534(3u);
        v25 = Function_205e6a8(v24);
        Function_20306e4(v44, v23, v25, *(ushort *)(v4 + 8));
      }
    }
    else
    {
      Function_205e534(*(uchar *)(v4 + 4));
      v19 = v18;
      Function_205e534(v17);
      v21 = Function_205e6a8(v20);
      Function_20306e4(v44, v19, v21, *(ushort *)(v4 + 8));
    }
    v46 = *(uchar *)(v4 + 6);
    Function_2030280(v42, 5, *(uchar *)(v4 + 4), 0, &v46);
    if ( *(uchar *)(v4 + 4) == 3 )
    {
      v30 = Function_205e6a8(0x6Au);
      Function_20306e4(v44, 106, v30, *(uchar *)(v4 + 6));
    }
  }
  v31 = 0;
  do
  {
    v45 = *(ushort *)(v4 + 2 * v31 + 24);
    Function_2030140(*(uint *)(v4 + 1784), 2u, (uchar)v31, 0, &v45);
    v31 = (v31 + 1) & 0xFFFF;
  }
  while ( v31 < 0x14 );
  v32 = 0;
  do
  {
    v46 = *(uchar *)(v4 + v32 + 608);
    Function_2030140(*(uint *)(v4 + 1784), 3u, (uchar)v32, 0, &v46);
    v32 = (v32 + 1) & 0xFFFF;
  }
  while ( v32 < 2 );
  v33 = 0;
  do
  {
    v46 = Function_20301e0((uchar)v33, v4 + 1796 + 9 * *(uchar *)(v4 + 4));
    Function_2235620(*(uint *)(v4 + 1788), *(uchar *)(v4 + 4), (uchar)v33, v46, v41);
    v33 = (v33 + 1) & 0xFFFF;
  }
  while ( v33 < 0x12 );
  v34 = 0;
  do
  {
    v45 = *(ushort *)(v4 + 2 * v34 + 616);
    Function_2030140(*(uint *)(v4 + 1784), 4u, (uchar)v34, 0, &v45);
    v34 = (v34 + 1) & 0xFFFF;
  }
  while ( v34 < 0x14 );
  Function_205e55c(*(uchar *)(v4 + 4));
  v36 = v35;
  Function_205e55c(*(uchar *)(v4 + 4));
  v38 = Function_205e6a8(v37);
  v39 = GetPkmnData(v43, 5u, 0);
  return Function_20306e4(v44, v36, v38, v39);
}

//----- (022354B0) --------------------------------------------------------
int __fastcall Function_22354b0(int a1)
{
  return (uchar)++*(uchar *)(a1 + 5);
}

//----- (022354BC) --------------------------------------------------------
int __fastcall Function_22354bc(int a1)
{
  return *(uchar *)(a1 + 5);
}

//----- (022354C0) --------------------------------------------------------
int __fastcall Function_22354c0(int a1, int a2, int a3, int a4)
{
  ushort *v4;
  char v6;
  short v7;
  int v8;

  v8 = a4;
  v4 = Function_222dd04(
         (int)&v6,
         *(ushort *)(a1 + (2 * (a2 + 2 * *(uchar *)(a1 + 5)) & 0x1FF) + 24),
         0xBu,
         178);
  free((int)v4);
  return Function_222e10c((uchar)v7);
}

//----- (022354F4) --------------------------------------------------------
uint __fastcall Function_22354f4(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  Function_2030244(a1 + 1796 + 9 * *(uchar *)(a1 + 4));
  return Function_223526c(v1, 1, v2, v3);
}

//----- (02235518) --------------------------------------------------------
uint __fastcall Function_2235518(int a1, int a2, int a3)
{
  uint v3;

  *(uchar *)(a1 + 6) = 1;
  v3 = *(ushort *)(a1 + 10);
  if ( v3 < 0x12 )
    *(ushort *)(a1 + 10) = v3 + 1;
  *(uchar *)(a1 + 5) = 0;
  return Function_223526c(a1, 0, a3, (int)Function_223526c);
}

//----- (02235534) --------------------------------------------------------
int __fastcall Function_2235534(int result, char a2, uchar a3)
{
  switch ( a2 )
  {
    case 0:
      result = Function_222ed00(result);
      break;
    case 1:
      result = Function_222ed44(result);
      break;
    case 2:
      result = Function_222eda8(result);
      break;
    case 3:
      result = Function_222ee14(result, a3);
      break;
    case 7:
      result = Function_222ee60(result);
      break;
    default:
      return result;
  }
  return result;
}

//----- (02235578) --------------------------------------------------------
int __fastcall Function_2235578(int a1)
{
  uint v1;
  uint v2;
  int v3;
  int v4;

  v1 = *(uchar *)(a1 + 4);
  v2 = *(ushort *)(a1 + 10);
  if ( v1 > 1 )
  {
    if ( v2 < 0x12 )
      v3 = *((uchar *)dword_223FA70 + v2);
    else
      v3 = 23;
  }
  else if ( v2 < 0x12 )
  {
    v3 = *((uchar *)dword_223FA5C + v2);
  }
  else
  {
    v3 = 12;
  }
  if ( *(uchar *)(a1 + 4) )
  {
    if ( v1 == 2 )
      v3 = 12;
  }
  else
  {
    v4 = *(ushort *)(a1 + 8);
    if ( v4 == 50 || v4 == 170 )
      v3 = 20;
  }
  return v3;
}

//----- (022355C0) --------------------------------------------------------
int __fastcall Function_22355c0(int a1, uint a2, uint a3, ushort *a4, ushort *a5)
{
  uint v5;
  uint v6;
  ushort *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint v12;
  int v13;
  uchar v14;
  int result;

  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = LoadVariableAreaAdress_17(a1);
  v10 = Function_205e4e0(v5, v6, v9);
  v12 = Function_205e4e0(v5, v6, v11);
  v13 = Function_205e6a8(v12);
  v14 = Function_2030698(v8, v10, v13);
  *v7 = v14 & 0xF;
  *a5 = (int)v14 >> 4;
  if ( (v6 >> 31) + __ROR4__((v6 << 31) - (v6 >> 31), 31) )
    result = (ushort)*a5;
  else
    result = (ushort)*v7;
  return result;
}

//----- (02235620) --------------------------------------------------------
uint __fastcall Function_2235620(int a1, uint a2, uint a3, int a4)
{
  int v4;
  uint v5;
  uint v6;
  int v7;
  char v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  uint v14;
  int v15;
  int v17;
  ushort v18[2];
  ushort v19[2];
  int v20;

  v20 = a4;
  v4 = a4;
  v17 = a1;
  v5 = a2;
  v6 = a3;
  Function_22355c0(a1, a2, a3, v19, v18);
  v7 = ((v6 >> 31) + __ROR4__((v6 << 31) - (v6 >> 31), 31)) & 0xFF;
  if ( v7 )
    v8 = 15;
  else
    v8 = -16;
  v9 = (v19[0] | 16 * v18[0]) & 0xFF & *(uint *)&v8 & 0xFF | (v4 << 4
                                                                    * (((v6 & 0x80000000) != 0)
                                                                     + __ROR4__((v6 << 31) - (v6 >> 31), 31))) & 0xFF;
  v10 = LoadVariableAreaAdress_17(v17);
  v12 = Function_205e4e0(v5, v6, v11);
  v14 = Function_205e4e0(v5, v6, v13);
  v15 = Function_205e6a8(v14);
  return Function_20306e4(v10, v12, v15, v9);
}

//----- (022356A0) --------------------------------------------------------
uint __fastcall Function_22356a0(int a1)
{
  int v1;
  uint result;
  int v3;
  int v4;

  v1 = a1;
  result = *(uchar *)(a1 + 4);
  if ( result != 2 )
  {
    v3 = 0;
    do
    {
      result = Function_20301e0((uchar)v3, v1 + 1796 + 9 * *(uchar *)(v1 + 4));
      if ( result < 0xA )
        break;
      ++v3;
    }
    while ( v3 < 17 );
    if ( v3 == 17 )
    {
      v4 = 0;
      do
        result = Function_2030204((uchar)v4++, v1 + 1796 + 9 * *(uchar *)(v1 + 4), 9);
      while ( v4 < 17 );
    }
  }
  return result;
}

//----- (022356F4) --------------------------------------------------------
int __fastcall Function_22356f4(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = Function_223b64c();
  result = Function_223b6c4(v2);
  *(uint *)(v1 + 12) = result;
  return result;
}

//----- (02235704) --------------------------------------------------------
int __fastcall Function_2235704(int a1)
{
  int v1;
  int v2;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  long long v10;
  int v11;
  uint v12;
  uint v13;
  int v14;
  int v15;
  ull v16;
  char v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  uint v24;
  int v25;
  long long v26;
  int v27;
  uint v28;
  long long v29;
  int v30;
  uint v31;
  long long v32;
  long long v33;
  char v34;
  long long v35;
  int v36;
  uint v37;
  long long v38;
  int v39;
  uint v40;
  uint v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;

  v1 = a1;
  v2 = Function_20301e0(*(uchar *)(a1 + 1781), a1 + 1796 + 9 * *(uchar *)(a1 + 4));
  v50 = Function_223b64c(v1);
  if ( *(uchar *)(v1 + 4) == 2 )
    return (ushort)v50;
  if ( v50 <= 0 )
  {
    v6 = fflt(v50 << 12);
    v5 = fsub(v6, 1056964608);
  }
  else
  {
    v4 = fflt(v50 << 12);
    v5 = fadd(0x3F000000u, v4);
  }
  v7 = *(uint *)(v1 + 12);
  v51 = ffix(v5) - 3 * v7;
  v8 = fflt(v7);
  v9 = f_div(v8, 0x45800000u);
  LODWORD(v10) = f2d(v9);
  v11 = dmul(4617315517961601024LL, v10);
  v13 = d2f(v11, v12);
  v14 = fflt(v50);
  v15 = f_div(v14, v13);
  LODWORD(v16) = f2d(v15);
  dls(v16, 0x3FF0000000000000uLL);
  if ( v17 )
  {
    if ( v50 * v2 <= 0 )
    {
      v20 = fflt(v50 * v2 << 12);
      v19 = fsub(v20, 1056964608);
    }
    else
    {
      v18 = fflt(v50 * v2 << 12);
      v19 = fadd(0x3F000000u, v18);
    }
    v21 = ffix(v19);
    v22 = fflt(v21);
    v23 = f_div(v22, 0x45800000u);
    v49 = f_div(v23, v13);
  }
  else
  {
    v49 = fflt(v2);
  }
  v24 = 0;
  v25 = 0;
  do
  {
    if ( v25 == *(uchar *)(v1 + 1781) )
    {
      LODWORD(v26) = f2d(v24);
      v27 = dadd(v26, 4607182418800017408LL);
      v24 = d2f(v27, v28);
    }
    else if ( Function_20301e0((uchar)v25, v1 + 1796 + 9 * *(uchar *)(v1 + 4)) )
    {
      LODWORD(v29) = f2d(v24);
      v30 = dadd(v29, 4607182418800017408LL);
      v24 = d2f(v30, v31);
    }
    ++v25;
  }
  while ( v25 < 18 );
  LODWORD(v32) = f2d(v24);
  v33 = v32;
  LODWORD(v32) = 0;
  dneq(v32, v33);
  if ( !v34 )
  {
    LODWORD(v35) = f2d(v24);
    v36 = dsub(v35, 4607182418800017408LL);
    v24 = d2f(v36, v37);
  }
  LODWORD(v38) = f2d(v24);
  v39 = dmul(v38, 4602678819172646912LL);
  v41 = d2f(v39, v40);
  v42 = fflt(v51);
  v43 = f_div(v42, 0x45800000u);
  v44 = fadd(v43, v49);
  v45 = fadd(v41, v44);
  v46 = ffix(v45);
  v47 = ffix(v45);
  v48 = fflt(v47);
  Function_20e1290(v45, v48);
  if ( !v34 )
    ++v46;
  if ( v46 > v50 )
    v46 = v50;
  if ( v46 > 100 )
    LOWORD(v46) = 100;
  return (ushort)v46;
}

//----- (022358E8) --------------------------------------------------------
int __fastcall Function_22358e8(int a1)
{
  int **v1;
  int v2;
  uchar v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v1 = (int **)a1;
  v2 = Function_222fc00(a1);
  v3 = Function_222fc00((int)v1);
  v4 = Function_222fc00((int)v1);
  v5 = Function_222fc00((int)v1);
  v6 = Function_222fc00((int)v1);
  v7 = Function_222fbe4((int)v1);
  v8 = Function_209b970(**v1);
  v9 = Function_22361b4(*(uint *)(v8 + 8), v2, v3, v4, v5, v6, v7);
  Function_209b980((uint **)**v1, v9);
  return 0;
}

//----- (0223594C) --------------------------------------------------------
int __fastcall Function_223594c(int a1)
{
  int **v1;
  int v2;
  int v3;

  v1 = (int **)a1;
  v2 = Function_222fc00(a1);
  v3 = Function_209b978(**v1);
  Function_2236514(v3, v2);
  return 0;
}

//----- (02235968) --------------------------------------------------------
int __fastcall Function_2235968(int **a1)
{
  int v1;

  v1 = Function_209b978(**a1);
  Function_22367ac(v1);
  return 0;
}

//----- (0223597C) --------------------------------------------------------
int __fastcall Function_223597c(int **a1)
{
  int **v1;
  int v2;
  int v3;
  ushort *v4;

  v1 = a1;
  v2 = Function_209b970(**a1);
  v3 = Function_209b978(**v1);
  v4 = (ushort *)malloc(0xBu, 48);
  MI_CpuFill8(v4, 0, 0x30u);
  *(uint *)v4 = *(uint *)(v2 + 8);
  Function_2235b3c(v4, v3);
  Function_209b988(**v1, dword_223FA94, (int)v4, 0, (int)Function_2235b84);
  return 1;
}

//----- (022359D0) --------------------------------------------------------
int __fastcall Function_22359d0(int **a1)
{
  int **v1;
  int v2;
  int v3;
  ushort *v4;

  v1 = a1;
  v2 = Function_209b970(**a1);
  v3 = Function_209b978(**v1);
  v4 = (ushort *)malloc(0xBu, 48);
  MI_CpuFill8(v4, 0, 0x30u);
  *(uint *)v4 = *(uint *)(v2 + 8);
  Function_2235b3c(v4, v3);
  Function_209b988(**v1, dword_223FA84, (int)v4, 0, (int)Function_2235b84);
  return 1;
}

//----- (02235A24) --------------------------------------------------------
int __fastcall Function_2235a24(int **a1)
{
  int v1;
  int v2;
  int *v3;
  int *v4;
  int *v5;
  int *v6;
  int *v7;

  v1 = Function_209b978(**a1);
  v2 = *(uint *)(v1 + 12);
  v3 = GetAdrOfPkmnInParty(*(uint **)(v2 + 4), 0);
  Function_207a128(*(uint **)(v1 + 40), 0, v3);
  v4 = GetAdrOfPkmnInParty(*(uint **)(v2 + 4), 1);
  Function_207a128(*(uint **)(v1 + 40), 1, v4);
  if ( Function_223ba14(*(uchar *)(v1 + 16)) )
  {
    v6 = GetAdrOfPkmnInParty(*(uint **)(v2 + 12), 0);
    Function_207a128(*(uint **)(v1 + 40), 2, v6);
    v7 = GetAdrOfPkmnInParty(*(uint **)(v2 + 12), 1);
    Function_207a128(*(uint **)(v1 + 40), 3, v7);
  }
  else
  {
    v5 = GetAdrOfPkmnInParty(*(uint **)(v2 + 4), 2);
    Function_207a128(*(uint **)(v1 + 40), 2, v5);
  }
  *(uint *)(v1 + 28) = Function_2052868(*(uint *)(v2 + 20));
  Function_20520a4((int *)v2);
  return 0;
}

//----- (02235AAC) --------------------------------------------------------
int __fastcall Function_2235aac(int **a1)
{
  int **v1;
  int v2;
  int v3;

  v1 = a1;
  Function_209b970(**a1);
  v2 = Function_209b978(**v1);
  v3 = Function_223b810();
  *(uint *)(v2 + 12) = v3;
  Function_209b988(**v1, (int *)&JumpTable_BattleScreen, v3, 0, 0);
  return 1;
}

//----- (02235AE8) --------------------------------------------------------
int __fastcall Function_2235ae8(int **a1)
{
  int **v1;
  int v2;
  int v3;
  ushort *v4;

  v1 = a1;
  v2 = Function_209b970(**a1);
  v3 = Function_209b978(**v1);
  v4 = (ushort *)malloc(0xBu, 48);
  MI_CpuFill8(v4, 0, 0x30u);
  *(uint *)v4 = *(uint *)(v2 + 8);
  Function_2235b3c(v4, v3);
  Function_209b988(**v1, dword_223FAA4, (int)v4, 0, (int)Function_2235b84);
  return 1;
}

//----- (02235B3C) --------------------------------------------------------
int __fastcall Function_2235b3c(int result, int a2)
{
  int v2;
  uchar *v3;
  char v4;
  uchar *v5;

  v2 = 0;
  *(uchar *)(result + 4) = *(uchar *)(a2 + 16);
  *(uint *)(result + 24) = *(uint *)(a2 + 40);
  *(uint *)(result + 28) = *(uint *)(a2 + 44);
  *(uint *)(result + 36) = a2;
  *(ushort *)(result + 40) = *(ushort *)(a2 + 2588);
  do
  {
    v3 = (uchar *)(a2 + v2);
    v4 = *(uchar *)(a2 + v2 + 880);
    v5 = (uchar *)(result + v2++);
    v5[8] = v4;
    v5[12] = v3[884];
    v5[16] = v3[888];
    v5[20] = v3[892];
  }
  while ( v2 < 4 );
  return result;
}

//----- (02235B84) --------------------------------------------------------
uint __fastcall Function_2235b84(int a1)
{
  int v1;

  v1 = a1;
  Function_22367dc(*(uint *)(a1 + 36), a1);
  return free(v1);
}

//----- (02235B98) --------------------------------------------------------
int __fastcall Function_2235b98(int **a1)
{
  int v1;

  v1 = Function_209b978(**a1);
  Function_2236bf0(v1);
  return 0;
}

//----- (02235BAC) --------------------------------------------------------
int __fastcall Function_2235bac(int **a1)
{
  int v1;

  v1 = Function_209b978(**a1);
  Function_2236bf8(v1);
  return 0;
}

//----- (02235BC0) --------------------------------------------------------
int __fastcall Function_2235bc0(int a1)
{
  uchar *v1;
  uchar *v2;
  uint v3;
  int v4;
  ushort *v5;
  int v6;
  int v7;
  uint v8;
  uint *v9;
  int v10;
  ushort *v11;
  int *v12;
  uint v13;
  int v14;
  int v15;
  uint *v16;
  uchar *v17;
  uchar *v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  uint v24;
  int v25;
  int v26;
  int v27;
  int v28;
  uint v29;
  int v30;
  int v31;
  int v32;
  int v33;
  uint v34;
  int v35;
  int **v37;
  int v38;
  uint v39;
  char v40;

  v1 = *(uchar **)(a1 + 28);
  v2 = v1 + 1;
  *(uint *)(a1 + 28) = v1 + 1;
  v3 = *v1;
  v1 += 2;
  v37 = (int **)a1;
  v39 = v3;
  *(uint *)(a1 + 28) = v1;
  v4 = *v2;
  *(uint *)(a1 + 28) = v1 + 1;
  v38 = *v1;
  v5 = (ushort *)Function_222fbe4(a1);
  v6 = Function_209b978(**v37);
  v7 = Function_209b970(**v37);
  if ( v39 <= 0x2C )
    JUMPOUT(__CS__, *((short *)&off_2235C14 + v39) + 35871766);
  switch ( (uchar)v39 )
  {
    case 2:
      *(uchar *)(v6 + 16) = v4;
      break;
    case 3:
      *v5 = *(ushort *)(v6 + 2 * v4 + 896);
      break;
    case 4:
      *v5 = *(ushort *)(v6 + 20);
      break;
    case 5:
      v8 = *(ushort *)(v6 + 20);
      if ( v8 < 0x270F )
        *(ushort *)(v6 + 20) = v8 + 1;
      break;
    case 7:
      OS_ResetSystem(0);
      break;
    case 9:
      *v5 = Function_20302ec(*(uchar **)(v6 + 8));
      break;
    case 0xA:
      Function_2236848(v6, 2);
      break;
    case 0xE:
      *v5 = Function_2236b48(v6);
      break;
    case 0xF:
      *v5 = *(ushort *)(v6 + 56 * v4 + 648) & 0x7FF;
      break;
    case 0x10:
      *v5 = *(ushort *)(v6 + 56 * v4 + 2 * v38 + 652);
      break;
    case 0x11:
      *v5 = *(uchar *)(v6 + 16);
      break;
    case 0x12:
      v9 = (uint *)LoadPokePartyAdress(*(uint *)(v7 + 8));
      v10 = 0;
      v11 = (ushort *)(v6 + 874);
      do
      {
        v12 = GetAdrOfPkmnInParty(v9, *(uchar *)(v6 + v10 + 36));
        SetPkmnData((int)v12, 6, v11);
        ++v10;
        ++v11;
      }
      while ( v10 < 3 );
      break;
    case 0x13:
      *v5 = Function_223bb60(v6);
      break;
    case 0x14:
      *v5 = Function_2236b58(v6, v4);
      break;
    case 0x15:
      Function_2236b8c(v6);
      break;
    case 0x16:
      Function_2236bd0(v6);
      break;
    case 0x17:
      *v5 = Function_2236b54(v6);
      break;
    case 0x18:
      *v5 = *(uchar *)(v6 + 2576);
      break;
    case 0x19:
      *v5 = *(uchar *)(v6 + 18);
      break;
    case 0x1A:
      *v5 = *(uchar *)(v6 + 2577);
      break;
    case 0x1B:
      *v5 = Function_2236d10(v6);
      Function_2236ed8(*(uint *)(v6 + 4), *(uchar *)(v6 + 16), (ushort)*v5);
      break;
    case 0x1C:
      Function_2236c50(v6);
      break;
    case 0x1D:
      Function_209ba80(v6);
      break;
    case 0x1E:
      v13 = *(uchar *)(v6 + 2587);
      if ( v13 < 6 )
        *v5 = v13;
      else
        *v5 = v13 - 6;
      break;
    case 0x1F:
      *(uchar *)(v6 + 2587) = 0;
      *(uchar *)(v6 + 2585) = 0;
      *(uchar *)(v6 + 2584) = 0;
      break;
    case 0x20:
      *(uchar *)(v6 + 2584) = v4;
      break;
    case 0x21:
      v14 = 0;
      if ( *(uchar *)(v6 + 2587) < 6u )
      {
        if ( !Function_203608c() )
          v14 = 1;
      }
      else if ( Function_203608c() )
      {
        v14 = 1;
      }
      if ( v14 == 1 )
      {
        v15 = LoadVariableAreaAdress_17(*(uint *)(v7 + 8));
        Function_223bc2c(v15, *(uchar *)(v6 + 16), 50);
      }
      else
      {
        *(ushort *)(v6 + 2588) -= 50;
      }
      break;
    case 0x22:
      *v5 = 0;
      if ( Function_223ba14(*(uchar *)(v6 + 16)) == 1 )
      {
        if ( *(uchar *)(v6 + 2587) < 6u )
        {
          if ( Function_203608c() )
            *v5 = 1;
        }
        else if ( !Function_203608c() )
        {
          *v5 = 1;
        }
      }
      break;
    case 0x23:
      *v5 = Function_223ba14(*(uchar *)(v6 + 16));
      break;
    case 0x24:
      v16 = (uint *)Function_222e924(*v37);
      Function_223bb84(*v16, v6, 3);
      break;
    case 0x25:
      Function_222e278(v6 + 76, *(ushort *)(v6 + 2 * *(uchar *)(v6 + 17) + 48), 0xBu, 178);
      Function_222e278(v6 + 348, *(ushort *)(v6 + 2 * (*(uchar *)(v6 + 17) + 7) + 48), 0xBu, 178);
      break;
    case 0x26:
      *v5 = Function_2237338(v6);
      break;
    case 0x27:
      v17 = (uchar *)Function_203041c(*(uint *)(v7 + 8));
      *v5 = Function_2030470(v17, 10, 0);
      v40 = 1;
      v18 = (uchar *)Function_203041c(*(uint *)(v7 + 8));
      Function_2030430(v18, 10, 0, 0, (uchar *)&v40);
      break;
    case 0x28:
      *v5 = 0;
      if ( !*(uchar *)(v6 + 16) )
      {
        v19 = *(ushort *)(v6 + 20) + 1;
        if ( v19 == 21 )
        {
          *v5 = 1;
        }
        else if ( v19 == 49 )
        {
          *v5 = 2;
        }
      }
      break;
    case 0x29:
      Function_222e330(
        (ushort *)(v6 + 648),
        (ushort *)(v6 + 620),
        v6 + 628,
        (int *)(v6 + 632),
        0,
        4,
        0xBu,
        179);
      break;
    case 0x2A:
      Function_223bab8(v6);
      break;
    case 0x2B:
      *v5 = *(uchar *)(v6 + 19);
      *(uchar *)(v6 + 19) = 1;
      break;
    case 0x2C:
      if ( *(uchar *)(v6 + 16) == 3 )
      {
        v20 = *(uint *)(v7 + 8);
        if ( v4 )
        {
          v31 = LoadVariableAreaAdress_17(v20);
          Function_205e630(*(uchar *)(v6 + 16));
          v33 = v32;
          Function_205e630(3u);
          v35 = Function_205e6a8(v34);
          Function_20306e4(v31, v33, v35, *(ushort *)(v6 + 34));
        }
        else
        {
          v21 = LoadVariableAreaAdress_17(v20);
          Function_205e630(*(uchar *)(v6 + 16));
          v23 = v22;
          Function_205e630(3u);
          v25 = Function_205e6a8(v24);
          *(ushort *)(v6 + 34) = Function_2030698(v21, v23, v25);
          v26 = LoadVariableAreaAdress_17(*(uint *)(v7 + 8));
          Function_205e630(*(uchar *)(v6 + 16));
          v28 = v27;
          Function_205e630(*(uchar *)(v6 + 16));
          v30 = Function_205e6a8(v29);
          Function_20306e4(v26, v28, v30, *(ushort *)(v6 + 32));
        }
      }
      break;
    default:
      return 0;
  }
  return 0;
}

//----- (02235F9C) --------------------------------------------------------
int __fastcall Function_2235f9c(int a1)
{
  int **v1;
  ushort *v2;

  v1 = (int **)a1;
  v2 = (ushort *)Function_222fbe4(a1);
  *v2 = *(uint *)(Function_209b978(**v1) + 28);
  return 0;
}

//----- (02235FB8) --------------------------------------------------------
int __fastcall Function_2235fb8(int a1)
{
  int **v1;
  int v2;
  int v3;
  ushort *v4;
  int v5;

  v1 = (int **)a1;
  v2 = Function_222fc00(a1);
  v3 = Function_222fc00((int)v1);
  v4 = (ushort *)Function_222fbe4((int)v1);
  v5 = Function_209b978(**v1);
  *v4 = Function_2236f70(v5, v2, v3);
  return 1;
}

//----- (02235FE8) --------------------------------------------------------
int __fastcall Function_2235fe8(int a1)
{
  int v1;

  v1 = a1;
  *(ushort *)(a1 + 120) = Function_222ea48(a1);
  Function_222e974(v1, (int)Function_2236008);
  return 1;
}

//----- (02236008) --------------------------------------------------------
int __fastcall Function_2236008(int a1)
{
  int **v1;
  int v2;

  v1 = (int **)a1;
  Function_222fc8c((int *)a1, *(ushort *)(a1 + 120));
  v2 = Function_209b978(**v1);
  if ( *(uchar *)(v2 + 2586) < 2u )
    return 0;
  *(uchar *)(v2 + 2586) = 0;
  return 1;
}

//----- (02236038) --------------------------------------------------------
int __fastcall Function_2236038(int a1)
{
  int v1;

  v1 = a1;
  *(ushort *)(a1 + 120) = Function_222ea48(a1);
  Function_222e974(v1, (int)Function_2236058);
  return 1;
}

//----- (02236058) --------------------------------------------------------
int __fastcall Function_2236058(int a1)
{
  int **v1;
  ushort *v2;
  int v3;

  v1 = (int **)a1;
  v2 = (ushort *)Function_222fc14((int *)a1, *(ushort *)(a1 + 120));
  v3 = Function_209b978(**v1);
  if ( !*(uchar *)(v3 + 2587) )
    return 0;
  *(uchar *)(v3 + 2586) = 0;
  *v2 = *(uchar *)(v3 + 2587);
  return 1;
}

//----- (02236090) --------------------------------------------------------
int __fastcall Function_2236090(int **a1)
{
  int **v1;
  int v2;

  v1 = a1;
  v2 = Function_209b978(**a1);
  Function_2236fc0(*v1, v2);
  return 0;
}

//----- (022360A8) --------------------------------------------------------
int __fastcall Function_22360a8(int **a1)
{
  int **v1;
  int v2;

  v1 = a1;
  v2 = Function_209b978(**a1);
  Function_22370e0(*v1, v2);
  return 0;
}

//----- (022360C0) --------------------------------------------------------
int __fastcall Function_22360c0(int **a1)
{
  int **v1;
  int v2;

  v1 = a1;
  v2 = Function_209b978(**a1);
  Function_2237180(*v1, v2);
  return 0;
}

//----- (022360D8) --------------------------------------------------------
int __fastcall Function_22360d8(int a1)
{
  int **v1;
  uchar v2;
  ushort *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint v8;
  int v9;

  v1 = (int **)a1;
  v2 = Function_222fc00(a1);
  v3 = (ushort *)Function_222fbe4((int)v1);
  v4 = Function_209b970(**v1);
  v5 = LoadVariableAreaAdress_17(*(uint *)(v4 + 8));
  Function_205e630(v2);
  v7 = v6;
  Function_205e630(v2);
  v9 = Function_205e6a8(v8);
  *v3 = Function_2030698(v5, v7, v9);
  return 0;
}

//----- (02236120) --------------------------------------------------------
int __fastcall Function_2236120(int a1)
{
  int **v1;
  uchar v2;
  int v3;
  int v4;
  int v5;

  v1 = (int **)a1;
  v2 = Function_222fc00(a1);
  v3 = Function_222fc00((int)v1);
  v4 = Function_209b970(**v1);
  v5 = LoadVariableAreaAdress_17(*(uint *)(v4 + 8));
  Function_223bc2c(v5, v2, v3);
  return 0;
}

//----- (02236150) --------------------------------------------------------
int __fastcall Function_2236150(int a1)
{
  int **v1;
  uchar v2;
  int v3;
  int v4;

  v1 = (int **)a1;
  v2 = Function_222fc00(a1);
  v3 = Function_222fc00((int)v1);
  v4 = Function_209b970(**v1);
  Function_2236ed8(*(uint *)(v4 + 8), v2, v3);
  return 0;
}

//----- (0223617C) --------------------------------------------------------
int __fastcall Function_223617c(int **a1)
{
  int v1;
  uchar *v2;
  int v3;
  int v4;

  v1 = (int)a1;
  Function_209b970(**a1);
  v2 = *(uchar **)(v1 + 28);
  *(uint *)(v1 + 28) = v2 + 1;
  v3 = *v2;
  v4 = Function_209b978(**(uint **)v1);
  if ( !v4 )
    return 0;
  Function_22330fc(v1, v4 + 100 + 272 * v3);
  return 1;
}

//----- (022361B4) --------------------------------------------------------
int __fastcall Function_22361b4(int a1, int a2, uint a3, int a4, char a5, char a6, int a7)
{
  int v7;
  int v8;
  uint v9;
  ushort *v10;
  uchar *v11;
  int v12;
  int v13;
  char v14;
  int v15;
  int v16;
  int v17;
  uint v18;
  int v19;
  int v20;
  int v21;
  int v22;
  uint v23;
  int v24;
  int v25;
  int v26;
  int v27;
  uint v28;
  int v29;
  uint v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  uint v40;
  int v41;
  int v42;
  int v43;
  int v44;
  uint v45;
  int v46;
  int v47;
  int v48;
  int v49;
  uint v50;
  int v51;
  uint v52;
  uint v53;
  uint *v54;
  int *v55;
  int v56;
  int i;
  int *v58;
  int *v59;
  int *v60;
  int v61;
  char v63;
  uint *v64;
  int v65;
  int v66;
  int v67;

  v67 = a4;
  v7 = a2;
  v8 = a1;
  v9 = a3;
  v63 = a4;
  dword_2241AC0[2] = malloc(0xBu, 2600);
  MI_CpuFill8((ushort *)dword_2241AC0[2], 0, 0xA28u);
  *(uint *)(dword_2241AC0[2] + 8) = Function_20302dc(v8);
  *(uint *)(dword_2241AC0[2] + 4) = v8;
  *(uint *)dword_2241AC0[2] = 11;
  *(uint *)(dword_2241AC0[2] + 40) = AllocPkmnParty(0xBu);
  *(uint *)(dword_2241AC0[2] + 44) = AllocPkmnParty(0xBu);
  *(uint *)(dword_2241AC0[2] + 2592) = a7;
  v10 = *(ushort **)(dword_2241AC0[2] + 8);
  v11 = (uchar *)Function_203041c(v8);
  if ( v7 )
  {
    *(uchar *)(dword_2241AC0[2] + 16) = Function_2030398((int)v10, 0, 0, 0);
    *(uchar *)(dword_2241AC0[2] + 17) = Function_2030398((int)v10, 1u, 0, 0);
    v47 = LoadVariableAreaAdress_17(*(uint *)(dword_2241AC0[2] + 4));
    Function_205e5e0(*(uchar *)(dword_2241AC0[2] + 16));
    v49 = v48;
    Function_205e5e0(*(uchar *)(dword_2241AC0[2] + 16));
    v51 = Function_205e6a8(v50);
    *(ushort *)(dword_2241AC0[2] + 20) = Function_2030698(v47, v49, v51);
    v52 = 0;
    *(ushort *)(dword_2241AC0[2] + 22) = s32_div_f(*(ushort *)(dword_2241AC0[2] + 20), 7);
    do
    {
      *(uchar *)(dword_2241AC0[2] + v52 + 36) = Function_2030398((int)v10, 7u, (uchar)v52, 0);
      v52 = (v52 + 1) & 0xFFFF;
    }
    while ( v52 < 3 );
  }
  else
  {
    *(uchar *)(dword_2241AC0[2] + 16) = v9;
    *(uchar *)(dword_2241AC0[2] + 17) = 0;
    Function_20302d0(v10);
    v12 = *(uchar *)(dword_2241AC0[2] + 16);
    if ( v12 == 3 )
    {
      v13 = LoadFlagAdress(*(uint *)(dword_2241AC0[2] + 4));
      v14 = Function_206b6fc(v13);
    }
    else
    {
      v14 = Function_2030470(v11, 9, v12);
    }
    if ( v14 == 1 )
    {
      v15 = LoadVariableAreaAdress_17(*(uint *)(dword_2241AC0[2] + 4));
      Function_205e5e0(*(uchar *)(dword_2241AC0[2] + 16));
      v17 = v16;
      Function_205e5e0(*(uchar *)(dword_2241AC0[2] + 16));
      v19 = Function_205e6a8(v18);
      *(ushort *)(dword_2241AC0[2] + 20) = Function_2030698(v15, v17, v19);
    }
    else
    {
      *(ushort *)(dword_2241AC0[2] + 20) = 0;
      v20 = LoadVariableAreaAdress_17(*(uint *)(dword_2241AC0[2] + 4));
      Function_205e630(*(uchar *)(dword_2241AC0[2] + 16));
      v22 = v21;
      Function_205e630(*(uchar *)(dword_2241AC0[2] + 16));
      v24 = Function_205e6a8(v23);
      Function_20306e4(v20, v22, v24, 0);
      v25 = LoadVariableAreaAdress_17(*(uint *)(dword_2241AC0[2] + 4));
      Function_205e658(v9);
      v27 = v26;
      Function_205e658(v9);
      v29 = Function_205e6a8(v28);
      Function_20306e4(v25, v27, v29, 0);
      v30 = 0;
      do
      {
        v31 = LoadVariableAreaAdress_17(*(uint *)(dword_2241AC0[2] + 4));
        v33 = Function_205e5b4(*(uchar *)(dword_2241AC0[2] + 16), (uchar)v30, v32);
        v35 = Function_205e5b4(*(uchar *)(dword_2241AC0[2] + 16), (uchar)v30, v34);
        v36 = Function_205e6a8(v35);
        Function_20306e4(v31, v33, v36, 1u);
        v30 = (v30 + 1) & 0xFFFF;
      }
      while ( v30 < 3 );
    }
    *(ushort *)(dword_2241AC0[2] + 22) = s32_div_f(*(ushort *)(dword_2241AC0[2] + 20), 7);
    *(uint *)(dword_2241AC0[2] + 24) = 0;
    *(uchar *)(dword_2241AC0[2] + 36) = v63;
    *(uchar *)(dword_2241AC0[2] + 37) = a5;
    *(uchar *)(dword_2241AC0[2] + 38) = a6;
    v37 = LoadVariableAreaAdress_17(*(uint *)(dword_2241AC0[2] + 4));
    Function_205e630(*(uchar *)(dword_2241AC0[2] + 16));
    v39 = v38;
    Function_205e630(*(uchar *)(dword_2241AC0[2] + 16));
    v41 = Function_205e6a8(v40);
    *(ushort *)(dword_2241AC0[2] + 32) = Function_2030698(v37, v39, v41);
    v42 = LoadVariableAreaAdress_17(*(uint *)(dword_2241AC0[2] + 4));
    Function_205e630(*(uchar *)(dword_2241AC0[2] + 16));
    v44 = v43;
    Function_205e630(*(uchar *)(dword_2241AC0[2] + 16));
    v46 = Function_205e6a8(v45);
    Function_2030804(v42, v44, v46, 10);
  }
  v53 = 0;
  do
  {
    v54 = (uint *)LoadPokePartyAdress(*(uint *)(dword_2241AC0[2] + 4));
    v55 = GetAdrOfPkmnInParty(v54, *(uchar *)(dword_2241AC0[2] + v53 + 36));
    *(ushort *)(dword_2241AC0[2] + 2 * v53 + 874) = GetPkmnData(v55, 6u, 0);
    v53 = (v53 + 1) & 0xFFFF;
  }
  while ( v53 < 3 );
  v64 = (uint *)LoadPokePartyAdress(*(uint *)(dword_2241AC0[2] + 4));
  v56 = Function_223b7a8(*(uchar *)(dword_2241AC0[2] + 16), 0);
  for ( i = 0; i < v56; i = (i + 1) & 0xFFFF )
  {
    v58 = GetAdrOfPkmnInParty(v64, *(uchar *)(dword_2241AC0[2] + i + 36));
    CopyPkmnDataToParty(*(uint **)(dword_2241AC0[2] + 40), v58);
    v59 = GetAdrOfPkmnInParty(*(uint **)(dword_2241AC0[2] + 40), i);
    v66 = 0;
    v60 = v59;
    SetPkmnData((int)v59, 6, (ushort *)&v66);
    if ( GetPkmnData(v60, 0xA1u, 0) > 0x32 )
    {
      v61 = GetPkmnData(v60, 5u, 0);
      v65 = GetBaseExpPts(v61, 50);
      SetPkmnData((int)v60, 8, (ushort *)&v65);
      Function_207418c(v60);
    }
  }
  if ( Function_223ba14(*(uchar *)(dword_2241AC0[2] + 16)) == 1 )
    Function_222e630(*(uint *)(dword_2241AC0[2] + 4));
  return dword_2241AC0[2];
}

//----- (02236514) --------------------------------------------------------
int __fastcall Function_2236514(int a1, int a2)
{
  int result;

  if ( a2 )
    result = Function_22365f8();
  else
    result = Function_2236528();
  return result;
}

//----- (02236528) --------------------------------------------------------
int __fastcall Function_2236528(int a1)
{
  int v1;
  int v2;
  ushort *v3;
  int *v4;
  int v5;
  int v6;
  uint v7;
  char v8;
  int v10;

  v1 = a1;
  v2 = 0;
  v10 = (uchar)GetNrOfPkmnInParty(*(uint *)(a1 + 40));
  if ( v10 > 0 )
  {
    v3 = (ushort *)v1;
    do
    {
      v4 = GetAdrOfPkmnInParty(*(uint **)(v1 + 40), v2);
      v3[458] = GetPkmnData(v4, 0x3Au, 0);
      v3[459] = GetPkmnData(v4, 0x3Bu, 0);
      v3[460] = GetPkmnData(v4, 0x3Cu, 0);
      ++v2;
      v3[461] = GetPkmnData(v4, 0x3Du, 0);
      v3 += 4;
    }
    while ( v2 < v10 );
  }
  v5 = Function_223bb60(v1);
  Function_223b760(*(uchar *)(v1 + 16), v5, v1 + 48, 14);
  v6 = *(uchar *)(v1 + 17);
  v7 = Function_223b7dc(*(uchar *)(v1 + 16), 1);
  v8 = Function_223ba14(*(uchar *)(v1 + 16));
  return Function_222e4bc(
           v7,
           *(ushort *)(v1 + 2 * v6 + 48),
           *(ushort *)(v1 + 2 * (v6 + 7) + 48),
           (ushort *)(v1 + 620),
           (ushort *)(v1 + 648),
           v1 + 628,
           (int *)(v1 + 632),
           v8);
}

//----- (022365F8) --------------------------------------------------------
uint __fastcall Function_22365f8(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  char *v5;
  int v6;
  int *v7;
  int v8;
  ushort *v9;
  int v10;
  int v11;
  char v13;
  char v14;
  char v15;
  char v16;

  v1 = a1;
  Function_22366a4();
  v2 = 0;
  v3 = v1;
  do
  {
    *(ushort *)(v3 + 48) = Function_2030398(*(uint *)(v1 + 8), 6u, (uchar)v2++, 0);
    v3 += 2;
  }
  while ( v2 < 14 );
  v4 = 0;
  v5 = &v15;
  v6 = v1;
  do
  {
    *(ushort *)v5 = Function_2030398(*(uint *)(v1 + 8), 8u, (uchar)v4, 0);
    *(ushort *)(v6 + 620) = *(ushort *)v5;
    ++v4;
    v5 += 2;
    v6 += 2;
  }
  while ( v4 < 4 );
  Function_222e330(&v16, (ushort *)&v15, (int)&v13, 0, (int *)&v14, 4, 0xBu, 179);
  v7 = AllocPkmnData(0xBu);
  v8 = 0;
  v9 = (ushort *)&v16;
  do
  {
    v10 = Function_223ba10(v1);
    Function_222df40(v9, v7, v10, v11);
    Function_223baa0(v1, *(uint *)(v1 + 44), v7);
    ++v8;
    v9 += 28;
  }
  while ( v8 < 4 );
  return free((int)v7);
}

//----- (022366A4) --------------------------------------------------------
int __fastcall Function_22366a4(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;
  int *v7;
  int i;
  ushort v9;
  short v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a1;
  result = (uchar)GetNrOfPkmnInParty(*(uint *)(a1 + 40));
  v6 = 0;
  for ( i = result; v6 < i; ++v6 )
  {
    v7 = GetAdrOfPkmnInParty(*(uint **)(v4 + 40), v6);
    v10 = Function_2030398(*(uint *)(v4 + 8), 2u, (uchar)v6, 0);
    SetPkmnData((int)v7, 163, (ushort *)&v10);
    LOBYTE(v9) = Function_2030398(*(uint *)(v4 + 8), 3u, (uchar)v6, 0);
    SetPkmnData((int)v7, 58, &v9);
    LOBYTE(v9) = Function_2030398(*(uint *)(v4 + 8), 3u, (uchar)v6, 1);
    SetPkmnData((int)v7, 59, &v9);
    LOBYTE(v9) = Function_2030398(*(uint *)(v4 + 8), 3u, (uchar)v6, 2);
    SetPkmnData((int)v7, 60, &v9);
    LOBYTE(v9) = Function_2030398(*(uint *)(v4 + 8), 3u, (uchar)v6, 3);
    SetPkmnData((int)v7, 61, &v9);
    v11 = Function_2030398(*(uint *)(v4 + 8), 4u, (uchar)v6, 0);
    SetPkmnData((int)v7, 160, (ushort *)&v11);
    v10 = Function_2030398(*(uint *)(v4 + 8), 5u, (uchar)v6, 0);
    SetPkmnData((int)v7, 6, (ushort *)&v10);
    result = i;
  }
  return result;
}

//----- (022367AC) --------------------------------------------------------
uint __fastcall Function_22367ac(uint result)
{
  int v1;
  int v2;
  int v3;

  v1 = result;
  if ( result )
  {
    v2 = *(uint *)(result + 40);
    if ( v2 )
      free(v2);
    v3 = *(uint *)(v1 + 44);
    if ( v3 )
      free(v3);
    MI_CpuFill8((ushort *)v1, 0, 0xA28u);
    result = free(v1);
  }
  return result;
}

//----- (022367DC) --------------------------------------------------------
int __fastcall Function_22367dc(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uchar *v8;
  char v9;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  v5 = a1;
  do
  {
    *(ushort *)(v5 + 896) = Function_2236834(v3, (uchar)v4++);
    v5 += 2;
  }
  while ( v4 < 6 );
  v6 = 0;
  do
  {
    v7 = v3 + v6;
    v8 = (uchar *)(v2 + v6);
    v8[880] = *(uchar *)(v3 + v6 + 8);
    v9 = *(uchar *)(v3 + v6++ + 12);
    v8[884] = v9;
    v8[888] = *(uchar *)(v7 + 16);
    v8[892] = *(uchar *)(v7 + 20);
  }
  while ( v6 < 4 );
  result = 2588;
  *(ushort *)(v2 + 2588) = *(ushort *)(v3 + 40);
  return result;
}

//----- (02236834) --------------------------------------------------------
int __fastcall Function_2236834(int a1, uint a2)
{
  if ( a2 < 6 )
    return *(ushort *)(a1 + 32);
  ErrorHandler();
  return 0;
}

//----- (02236848) --------------------------------------------------------
int __fastcall Function_2236848(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint v7;
  int v8;
  int v9;
  int v10;
  uint v11;
  int v12;
  uint v13;
  int v14;
  int v15;
  uint v16;
  int v17;
  int v18;
  int v19;
  uint v20;
  int v21;
  int v22;
  int v23;
  uint v24;
  int v25;
  ushort v26;
  int v27;
  int v28;
  uint v29;
  int v30;
  int v31;
  int v32;
  uint v33;
  int v34;
  int v35;
  uint v36;
  uint v37;
  uint v38;
  int *v39;
  int result;
  uint v41;
  uint v42;
  uchar *v43;
  uint v44;
  uint v45;
  short v46;
  char v47;
  uint v48;

  v2 = a1;
  v3 = a2;
  v43 = (uchar *)Function_203041c(*(uint *)(a1 + 4));
  v4 = LoadVariableAreaAdress_17(*(uint *)(v2 + 4));
  Function_223b7dc(*(uchar *)(v2 + 16), 1);
  v47 = *(uchar *)(v2 + 16);
  Function_2030308(*(uint *)(v2 + 8), 0, 0, 0, &v47);
  Function_20302f4(*(uchar **)(v2 + 8), 1);
  v47 = *(uchar *)(v2 + 17);
  Function_2030308(*(uint *)(v2 + 8), 1u, 0, 0, &v47);
  Function_205e5e0(*(uchar *)(v2 + 16));
  v6 = v5;
  Function_205e5e0(*(uchar *)(v2 + 16));
  v8 = Function_205e6a8(v7);
  Function_20306e4(v4, v6, v8, *(ushort *)(v2 + 20));
  if ( v3 != 2 )
  {
    Function_205e608(*(uchar *)(v2 + 16));
    v10 = v9;
    Function_205e608(*(uchar *)(v2 + 16));
    v12 = Function_205e6a8(v11);
    v13 = Function_2030698(v4, v10, v12);
    Function_205e608(*(uchar *)(v2 + 16));
    v15 = v14;
    Function_205e608(*(uchar *)(v2 + 16));
    v17 = Function_205e6a8(v16);
    Function_2030848(v4, v15, v17, *(ushort *)(v2 + 20));
    Function_205e608(*(uchar *)(v2 + 16));
    v19 = v18;
    Function_205e608(*(uchar *)(v2 + 16));
    v21 = Function_205e6a8(v20);
    v45 = Function_2030698(v4, v19, v21);
    Function_205e630(*(uchar *)(v2 + 16));
    v23 = v22;
    Function_205e630(*(uchar *)(v2 + 16));
    v25 = Function_205e6a8(v24);
    v26 = Function_2030698(v4, v23, v25);
    if ( *(ushort *)(v2 + 20) == v13 )
    {
      Function_205e680(*(uchar *)(v2 + 16));
      v28 = v27;
      Function_205e680(*(uchar *)(v2 + 16));
      v30 = Function_205e6a8(v29);
      Function_2030848(v4, v28, v30, v26);
    }
    else if ( v13 < v45 )
    {
      Function_205e680(*(uchar *)(v2 + 16));
      v32 = v31;
      Function_205e680(*(uchar *)(v2 + 16));
      v34 = Function_205e6a8(v33);
      Function_20306e4(v4, v32, v34, v26);
    }
    v47 = *(uchar *)(v2 + 39);
    Function_2030430(v43, 9, *(uchar *)(v2 + 16), 0, (uchar *)&v47);
    if ( *(uchar *)(v2 + 16) == 3 )
    {
      v35 = Function_205e6a8(0x6Cu);
      Function_20306e4(v4, 108, v35, *(uchar *)(v2 + 39));
    }
  }
  v36 = 0;
  do
  {
    v46 = *(ushort *)(v2 + 2 * v36 + 48);
    Function_2030308(*(uint *)(v2 + 8), 6u, (uchar)v36, 0, &v46);
    v36 = (v36 + 1) & 0xFFFF;
  }
  while ( v36 < 0xE );
  v37 = 0;
  do
  {
    v47 = *(uchar *)(v2 + v37 + 36);
    Function_2030308(*(uint *)(v2 + 8), 7u, (uchar)v37, 0, &v47);
    v37 = (v37 + 1) & 0xFFFF;
  }
  while ( v37 < 3 );
  v38 = 0;
  v44 = GetNrOfPkmnInParty(*(uint *)(v2 + 40));
  if ( v44 )
  {
    do
    {
      v39 = GetAdrOfPkmnInParty(*(uint **)(v2 + 40), v38);
      v46 = GetPkmnData(v39, 0xA3u, 0);
      Function_2030308(*(uint *)(v2 + 8), 2u, (uchar)v38, 0, &v46);
      v47 = GetPkmnData(v39, 0x3Au, 0);
      Function_2030308(*(uint *)(v2 + 8), 3u, (uchar)v38, 0, &v47);
      v47 = GetPkmnData(v39, 0x3Bu, 0);
      Function_2030308(*(uint *)(v2 + 8), 3u, (uchar)v38, 1, &v47);
      v47 = GetPkmnData(v39, 0x3Cu, 0);
      Function_2030308(*(uint *)(v2 + 8), 3u, (uchar)v38, 2, &v47);
      v47 = GetPkmnData(v39, 0x3Du, 0);
      Function_2030308(*(uint *)(v2 + 8), 3u, (uchar)v38, 3, &v47);
      v48 = GetPkmnData(v39, 0xA0u, 0);
      Function_2030308(*(uint *)(v2 + 8), 4u, (uchar)v38, 0, &v48);
      v46 = GetPkmnData(v39, 6u, 0);
      Function_2030308(*(uint *)(v2 + 8), 5u, (uchar)v38, 0, &v46);
      v38 = (v38 + 1) & 0xFFFF;
    }
    while ( v38 < v44 );
  }
  result = GetNrOfPkmnInParty(*(uint *)(v2 + 44));
  v41 = result;
  v42 = 0;
  if ( result )
  {
    do
    {
      GetAdrOfPkmnInParty(*(uint **)(v2 + 44), v42);
      v46 = *(ushort *)(v2 + 2 * v42 + 620);
      Function_2030308(*(uint *)(v2 + 8), 8u, (uchar)v42, 0, &v46);
      result = (v42 + 1) << 16;
      v42 = (v42 + 1) & 0xFFFF;
    }
    while ( v42 < v41 );
  }
  return result;
}

//----- (02236B48) --------------------------------------------------------
int __fastcall Function_2236b48(int a1)
{
  return (uchar)++*(uchar *)(a1 + 17);
}

//----- (02236B54) --------------------------------------------------------
int __fastcall Function_2236b54(int a1)
{
  return *(uchar *)(a1 + 17);
}

//----- (02236B58) --------------------------------------------------------
int __fastcall Function_2236b58(int a1, int a2)
{
  ushort *v2;
  char v4;
  short v5;

  v2 = Function_222dd04(
         (int)&v4,
         *(ushort *)(a1 + (2 * (*(uchar *)(a1 + 17) + 7 * a2) & 0x1FF) + 48),
         0xBu,
         178);
  free((int)v2);
  return Function_222e10c((uchar)v5);
}

//----- (02236B8C) --------------------------------------------------------
int __fastcall Function_2236b8c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v1 = a1;
  v2 = 0;
  do
  {
    v3 = LoadVariableAreaAdress_17(*(uint *)(v1 + 4));
    v5 = Function_205e5b4(*(uchar *)(v1 + 16), (uchar)v2, v4);
    v7 = Function_205e5b4(*(uchar *)(v1 + 16), (uchar)v2, v6);
    v8 = Function_205e6a8(v7);
    Function_20306e4(v3, v5, v8, 1u);
    ++v2;
  }
  while ( v2 < 3 );
  return Function_2236848(v1, 1);
}

//----- (02236BD0) --------------------------------------------------------
int __fastcall Function_2236bd0(int a1)
{
  uint v1;

  *(uchar *)(a1 + 39) = 1;
  v1 = *(ushort *)(a1 + 22);
  if ( v1 < 8 )
    *(ushort *)(a1 + 22) = v1 + 1;
  *(uchar *)(a1 + 17) = 0;
  return Function_2236848(a1, 0);
}

//----- (02236BF0) --------------------------------------------------------
int __fastcall Function_2236bf0(int a1)
{
  return Function_223bab8(a1);
}

//----- (02236BF8) --------------------------------------------------------
int __fastcall Function_2236bf8(int a1)
{
  int v1;
  int v2;
  uint v3;
  char v4;

  v1 = a1;
  v2 = *(uchar *)(a1 + 17);
  v3 = Function_223b7dc(*(uchar *)(a1 + 16), 1);
  v4 = Function_223ba14(*(uchar *)(v1 + 16));
  Function_222e4bc(
    v3,
    *(ushort *)(v1 + 2 * v2 + 48),
    *(ushort *)(v1 + 2 * (v2 + 7) + 48),
    (ushort *)(v1 + 620),
    (ushort *)(v1 + 648),
    v1 + 628,
    (int *)(v1 + 632),
    v4);
  return Function_223bab8(v1);
}

//----- (02236C50) --------------------------------------------------------
ll __fastcall Function_2236c50(int a1)
{
  int v1;
  int v2;
  int v3;
  ushort *v4;
  int *v5;
  ll result;
  int v7;
  uchar *v8;
  int v9;
  int i;

  v1 = a1;
  if ( Function_203608c() )
    v9 = 2;
  else
    v9 = 0;
  v2 = Function_223b7a8(*(uchar *)(v1 + 16), 0);
  GetNrOfPkmnInParty(*(uint *)(v1 + 40));
  v3 = v9;
  for ( i = v2 + v9; v3 < i; v4[461] = GetPkmnData(v5, 0x3Du, 0) )
  {
    v4 = (ushort *)(v1 + 8 * (v3 - v9));
    v5 = GetAdrOfPkmnInParty(*(uint **)(v1 + 40), v3);
    v4[458] = GetPkmnData(v5, 0x3Au, 0);
    v4[459] = GetPkmnData(v5, 0x3Bu, 0);
    v4[460] = GetPkmnData(v5, 0x3Cu, 0);
    ++v3;
  }
  Function_223ba24(*(uint *)(v1 + 40));
  result = 3796751090544LL;
  v7 = 0;
  do
  {
    v8 = (uchar *)(v1 + v7);
    v8[880] = 0;
    v8[884] = 0;
    v8[888] = 0;
    ++v7;
    v8[892] = 0;
  }
  while ( v7 < 4 );
  return result;
}

//----- (02236D10) --------------------------------------------------------
int __fastcall Function_2236d10(int a1)
{
  int v1;
  int v2;
  uchar *v3;
  uint v4;
  int *v5;
  uint v6;
  uint v7;
  uint v8;
  uint v9;
  int j;
  int v11;
  int k;
  int v13;
  int v14;
  int v15;
  int v16;
  int v18;
  int v19;
  int v20;
  int i;
  int v22;
  uint v23;
  uchar v24;
  uchar v25;
  uchar v26;
  uchar v27;
  uchar v28;
  uchar v29;
  uchar v30;
  uchar v31;
  uchar v32;

  v1 = a1;
  v2 = 0;
  v3 = &v24;
  v4 = 0;
  do
  {
    ++v2;
    *v3++ = 0;
  }
  while ( v2 < 20 );
  *(uchar *)(v1 + 18) = 0;
  if ( Function_203608c() )
    v18 = 2;
  else
    v18 = 0;
  v20 = Function_223b7a8(*(uchar *)(v1 + 16), 0);
  v19 = Function_223b7dc(*(uchar *)(v1 + 16), 1);
  for ( i = v20 + v18; v18 < i; ++v18 )
  {
    v5 = GetAdrOfPkmnInParty(*(uint **)(v1 + 40), v18);
    if ( GetPkmnData(v5, 0xACu, 0) )
    {
      v23 = GetPkmnData(v5, 0xA3u, 0);
      v6 = GetPkmnData(v5, 0xA4u, 0);
      if ( v23 )
      {
        ++v24;
        if ( v23 == v6 )
        {
          ++v25;
        }
        else if ( v23 < v6 >> 1 )
        {
          ++v27;
        }
        else
        {
          ++v26;
        }
        if ( !GetPkmnData(v5, 0xA0u, 0) )
          ++v28;
      }
      else
      {
        *(uchar *)(v1 + 18) = 1;
      }
      v7 = v4 + GetPkmnData(v5, 0x3Au, 0);
      v8 = v7 + GetPkmnData(v5, 0x3Bu, 0);
      v9 = v8 + GetPkmnData(v5, 0x3Cu, 0);
      v4 = v9 + GetPkmnData(v5, 0x3Du, 0);
    }
  }
  for ( j = 0; j < v19; ++j )
  {
    if ( *(uchar *)(v1 + j + 884) == 1 )
      ++v32;
  }
  v11 = 0;
  for ( k = 0; k < v20; v1 += 8 )
  {
    v13 = 0;
    v14 = v1;
    do
    {
      v15 = *(ushort *)(v14 + 916);
      ++v13;
      v14 += 2;
      v11 += v15;
    }
    while ( v13 < 4 );
    ++k;
  }
  v16 = v11 - v4;
  if ( (int)(v11 - v4) > 5 )
  {
    if ( v16 > 10 )
    {
      if ( v16 <= 15 )
        ++v31;
    }
    else
    {
      ++v30;
    }
  }
  else
  {
    ++v29;
  }
  v22 = 3 * v24 + 3 * v25 + 2 * v26 + v27 + v28 + 8 * v29 + 6 * v30 + 4 * v31 + 7 * v32;
  if ( v22 <= 0 )
    v22 = 1;
  return v22;
}

//----- (02236ED8) --------------------------------------------------------
int __fastcall Function_2236ed8(int a1, uint a2, int a3)
{
  uint v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint v9;
  int v10;
  int v11;
  int v12;
  int v13;
  uint v14;
  int v15;
  int v16;
  int v17;
  int v18;
  uint v19;
  int v20;
  int v21;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = LoadVariableAreaAdress_17(a1);
  Function_205e630(v3);
  v8 = v7;
  Function_205e630(v3);
  v10 = Function_205e6a8(v9);
  if ( Function_2030698(v6, v8, v10) + v5 <= 9999 )
  {
    v16 = LoadVariableAreaAdress_17(v4);
    Function_205e630(v3);
    v18 = v17;
    Function_205e630(v3);
    v20 = Function_205e6a8(v19);
    Function_2030804(v16, v18, v20, v5);
  }
  else
  {
    v11 = LoadVariableAreaAdress_17(v4);
    Function_205e630(v3);
    v13 = v12;
    Function_205e630(v3);
    v15 = Function_205e6a8(v14);
    Function_20306e4(v11, v13, v15, 0x270Fu);
  }
  v21 = LoadVariableAreaAdress_14(v4);
  return Function_202cf70(v21, 65, v5);
}

//----- (02236F70) --------------------------------------------------------
int __fastcall Function_2236f70(int result, char a2, short a3)
{
  switch ( a2 )
  {
    case 0:
      result = Function_222f3b8(result);
      break;
    case 1:
      result = Function_222f44c(result);
      break;
    case 2:
      result = Function_222f4b8(result);
      break;
    case 3:
      result = Function_222f5d4(result);
      break;
    case 4:
      result = Function_222f6c8(result, a3);
      break;
    case 5:
      result = Function_222f710(result, a3);
      break;
    case 6:
      result = Function_222f758(result);
      break;
    default:
      return result;
  }
  return result;
}

//----- (02236FC0) --------------------------------------------------------
int __fastcall Function_2236fc0(int *a1, int a2)
{
  int *v2;
  int v3;
  uint **v4;

  v2 = a1;
  v3 = a2;
  v4 = (uint **)Function_222e924(a1);
  if ( v2[42] )
    ErrorHandler();
  if ( v2[43] )
    ErrorHandler();
  if ( Function_223ba14(*(uchar *)(v3 + 16)) )
  {
    v2[42] = Function_201a778(0xBu, 1);
    v2[43] = Function_201a778(0xBu, 1);
    Function_201a7e8(*v4, v2[42], 1, 1, 1, 0xAu, 4u, 14, 595);
    Function_201a7e8(*v4, v2[43], 1, 21, 1, 0xAu, 4u, 14, 555);
    Function_22370c0(*v4, v2[42]);
    Function_22370c0(*v4, v2[43]);
  }
  else
  {
    v2[42] = Function_201a778(0xBu, 1);
    Function_201a7e8(*v4, v2[42], 1, 1, 1, 0xAu, 4u, 14, 595);
    Function_22370c0(*v4, v2[42]);
  }
  return Function_2237180(v2, v3);
}

//----- (022370C0) --------------------------------------------------------
int __fastcall Function_22370c0(int a1, int a2)
{
  int v2;

  v2 = a2;
  Function_200dc48(a2, 1, 985, 0xCu);
  return Function_201ada4_ClearTextBox(v2, 15);
}

//----- (022370E0) --------------------------------------------------------
int __fastcall Function_22370e0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int *v5;
  int v6;
  int result;

  v2 = a1;
  if ( Function_223ba14(*(uchar *)(a2 + 16)) )
  {
    if ( !*(uint *)(v2 + 168) )
      ErrorHandler();
    if ( !*(uint *)(v2 + 172) )
      ErrorHandler();
    if ( Function_203608c() )
    {
      v4 = *(uint *)(v2 + 172);
      v5 = (int *)(v2 + 168);
    }
    else
    {
      v4 = *(uint *)(v2 + 168);
      v5 = (int *)(v2 + 172);
    }
    v6 = *v5;
    Function_200dc9c(v4, 0);
    Function_201a928(v4, 1);
    Function_200dc9c(v6, 0);
    Function_201a928(v6, 1);
  }
  else
  {
    if ( !*(uint *)(v2 + 168) )
      ErrorHandler();
    v3 = *(uint *)(v2 + 168);
    Function_200dc9c(*(uint *)(v2 + 168), 0);
    Function_201a928(v3, 1);
  }
  result = v2 + 168;
  *(uint *)(v2 + 168) = 0;
  *(uint *)(v2 + 172) = 0;
  return result;
}

//----- (02237180) --------------------------------------------------------
int __fastcall Function_2237180(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint v7;
  int v8;
  int v9;
  int v10;
  int result;
  int v12;
  int v13;
  int v14;
  uint v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  uint v22;
  int v23;
  int v24;
  int v25;

  v2 = a2;
  v3 = a1;
  if ( Function_223ba14(*(uchar *)(a2 + 16)) )
  {
    if ( !*(uint *)(v3 + 168) )
      ErrorHandler();
    if ( !*(uint *)(v3 + 172) )
      ErrorHandler();
    if ( Function_203608c() )
    {
      v17 = *(ushort *)(v2 + 2588);
      v19 = LoadVariableAreaAdress_17(*(uint *)(v2 + 4));
      Function_205e630(*(uchar *)(v2 + 16));
      v21 = v20;
      Function_205e630(*(uchar *)(v2 + 16));
      v23 = Function_205e6a8(v22);
      v18 = Function_2030698(v19, v21, v23);
    }
    else
    {
      v12 = LoadVariableAreaAdress_17(*(uint *)(v2 + 4));
      Function_205e630(*(uchar *)(v2 + 16));
      v14 = v13;
      Function_205e630(*(uchar *)(v2 + 16));
      v16 = Function_205e6a8(v15);
      v17 = Function_2030698(v12, v14, v16);
      v18 = *(ushort *)(v2 + 2588);
    }
    v24 = Function_2032ee8(0);
    Function_2237284(v3, *(uint *)(v3 + 168), v24, v17);
    v25 = Function_2032ee8(1);
    result = Function_2237284(v3, *(uint *)(v3 + 172), v25, v18);
  }
  else
  {
    if ( !*(uint *)(v3 + 168) )
      ErrorHandler();
    v4 = LoadVariableAreaAdress_17(*(uint *)(v2 + 4));
    Function_205e630(*(uchar *)(v2 + 16));
    v6 = v5;
    Function_205e630(*(uchar *)(v2 + 16));
    v8 = Function_205e6a8(v7);
    v9 = Function_2030698(v4, v6, v8);
    v10 = LoadTrainerDataAdress(*(uint *)(v2 + 4));
    result = Function_2237284(v3, *(uint *)(v3 + 168), v10, v9);
  }
  return result;
}

//----- (02237284) --------------------------------------------------------
int __fastcall Function_2237284(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  ushort *v7;
  int v8;
  ushort **v9;
  int v10;
  int v11;
  int v12;

  v4 = a1;
  v5 = a4;
  v6 = a2;
  v7 = (ushort *)Function_2023790(20, *(uint *)(a1 + 52));
  v8 = Function_2023790(20, *(uint *)(v4 + 52));
  v9 = (ushort **)LoadFromMsgNARC(0, 26, 199, 0xBu);
  Function_200b60c(*(uint *)(v4 + 68), 0, v5, 4, 1, 1);
  Function_200b1b8_CallMsgDecrypt(v9, 2u, v7);
  Function_200c388(*(uint **)(v4 + 68), v8, (int)v7);
  Function_201d738_CallInitTextInterpreter(v6, 0);
  Function_200b498(*(uint *)(v4 + 68), 0);
  Function_200b1b8_CallMsgDecrypt(v9, 0, v7);
  Function_200c388(*(uint **)(v4 + 68), v8, (int)v7);
  Function_201d738_CallInitTextInterpreter(v6, 0);
  Function_20237bc_FreeMsg((int)v7, v10);
  Function_20237bc_FreeMsg(v8, v11);
  Function_200b190((ushort *)v9);
  return Function_201a954(v6, v12);
}

//----- (02237338) --------------------------------------------------------
int __fastcall Function_2237338(int a1)
{
  uint v1;
  int v2;
  int v3;

  v1 = *(ushort *)(a1 + 22);
  if ( *(uchar *)(a1 + 16) > 1u )
  {
    if ( v1 < 8 )
      v2 = *((uchar *)dword_223FAC0 + v1);
    else
      v2 = 18;
  }
  else if ( v1 < 8 )
  {
    v2 = *((uchar *)dword_223FAB4 + v1);
  }
  else
  {
    v2 = 7;
  }
  if ( !*(uchar *)(a1 + 16) )
  {
    v3 = *(ushort *)(a1 + 20);
    if ( v3 == 21 || v3 == 49 )
      v2 = 20;
  }
  return v2;
}

//----- (02237378) --------------------------------------------------------
int __fastcall Function_2237378(int a1)
{
  int **v1;
  int v2;
  uchar v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v1 = (int **)a1;
  v2 = Function_222fc00(a1);
  v3 = Function_222fc00((int)v1);
  v4 = Function_222fc00((int)v1);
  v5 = Function_222fc00((int)v1);
  v6 = Function_222fc00((int)v1);
  v7 = Function_222fbe4((int)v1);
  v8 = Function_209b970(**v1);
  v9 = Function_2237dd8(*(uint *)(v8 + 8), v2, v3, v4, v5, v6, v7);
  Function_209b980((uint **)**v1, v9);
  return 0;
}

//----- (022373DC) --------------------------------------------------------
int __fastcall Function_22373dc(int a1)
{
  int **v1;
  int v2;
  int v3;

  v1 = (int **)a1;
  v2 = Function_222fc00(a1);
  v3 = Function_209b978(**v1);
  Function_223806c(v3, v2);
  return 0;
}

//----- (022373F8) --------------------------------------------------------
int __fastcall Function_22373f8(int **a1)
{
  int v1;

  v1 = Function_209b978(**a1);
  Function_2238210(v1);
  return 0;
}

//----- (0223740C) --------------------------------------------------------
int __fastcall Function_223740c(int **a1)
{
  int **v1;
  int v2;
  int v3;
  ushort *v4;

  v1 = a1;
  v2 = Function_209b970(**a1);
  v3 = Function_209b978(**v1);
  v4 = (ushort *)malloc(0xBu, 72);
  MI_CpuFill8(v4, 0, 0x48u);
  *(uint *)v4 = *(uint *)(v2 + 8);
  Function_2237634(v4, v3);
  Function_209b988(**v1, dword_223FAD8, (int)v4, 0, (int)Function_223770c);
  return 1;
}

//----- (02237460) --------------------------------------------------------
int __fastcall Function_2237460(int **a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int *v12;
  uint v13;
  int v14;
  uint *v15;
  int *v16;
  int v18;
  int v19;
  int *v20;
  int v21;
  int v22;
  int v23;
  int v24;

  v24 = a4;
  v4 = Function_209b978(**a1);
  v20 = *(int **)(v4 + 12);
  v5 = v20[1];
  v6 = v20[3];
  v7 = *(uint *)(*(uint *)(v4 + 12) + 436);
  *(uchar *)(v4 + 29) = Function_2238538();
  *(uint *)(v4 + 40) = Function_2052868(v20[5]);
  if ( *(uchar *)(v4 + 19) == 27 )
  {
    v8 = 1;
    v9 = 3;
  }
  else
  {
    v8 = 0;
    v9 = 2;
  }
  v10 = v8;
  Function_2239054(v20[v8 + 1], *(uint *)(v4 + 112));
  Function_2239054(v20[v10 + 1], *(uint *)(v4 + 112));
  if ( Function_223ba14(*(uchar *)(v4 + 16)) )
  {
    Function_2239054(v20[v9 + 1], *(uint *)(v4 + 112));
    Function_2239054(v20[v9 + 1], *(uint *)(v4 + 112));
  }
  else
  {
    Function_2239054(v20[v10 + 1], *(uint *)(v4 + 112));
  }
  if ( *(uchar *)(v4 + 19) == 17 )
  {
    v11 = 0;
    v19 = Function_223bd70(*(uchar *)(v4 + 16), 1);
    if ( v19 > 0 )
    {
      do
      {
        v12 = GetAdrOfPkmnInParty(*(uint **)(v4 + 112), v11);
        v13 = GetPkmnData(v12, 0xA1u, 0);
        v14 = GetPkmnData(v12, 5u, 0);
        v22 = GetBaseExpPts(v14, v13 - 3);
        SetPkmnData((int)v12, 8, (ushort *)&v22);
        Function_207418c(v12);
        ++v11;
      }
      while ( v11 < v19 );
    }
  }
  v21 = GetNrOfPkmnInParty(*(uint *)(v4 + 112));
  v18 = 0;
  if ( v21 > 0 )
  {
    v15 = (uint *)v4;
    do
    {
      v16 = GetAdrOfPkmnInParty(*(uint **)(v4 + 112), v18);
      v23 = v15[37];
      SetPkmnData((int)v16, 164, (ushort *)&v23);
      SetPkmnData((int)v16, 163, (ushort *)&v23);
      v23 = v15[41];
      SetPkmnData((int)v16, 165, (ushort *)&v23);
      v23 = v15[45];
      SetPkmnData((int)v16, 166, (ushort *)&v23);
      v23 = v15[49];
      SetPkmnData((int)v16, 167, (ushort *)&v23);
      v23 = v15[53];
      SetPkmnData((int)v16, 168, (ushort *)&v23);
      v23 = v15[57];
      SetPkmnData((int)v16, 169, (ushort *)&v23);
      ++v15;
      ++v18;
    }
    while ( v18 < v21 );
  }
  Function_20520a4(v20);
  return 0;
}

//----- (022375F8) --------------------------------------------------------
int __fastcall Function_22375f8(int **a1)
{
  int **v1;
  int v2;
  int v3;

  v1 = a1;
  Function_209b970(**a1);
  v2 = Function_209b978(**v1);
  v3 = Function_223bdd8();
  *(uint *)(v2 + 12) = v3;
  Function_209b988(**v1, (int *)&JumpTable_BattleScreen, v3, 0, 0);
  return 1;
}

//----- (02237634) --------------------------------------------------------
int __fastcall Function_2237634(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  uint *v6;
  int *v7;
  int v8;

  v2 = a2;
  v3 = a1;
  *(uchar *)(a1 + 4) = *(uchar *)(a2 + 16);
  *(ushort *)(a1 + 30) = Function_223c124(a2);
  *(uint *)(v3 + 20) = v2 + 32;
  *(uint *)(v3 + 16) = v2 + 19;
  *(uchar *)(v3 + 7) = *(uchar *)(v2 + 29);
  *(ushort *)(v3 + 28) = *(ushort *)(v2 + 24);
  *(ushort *)(v3 + 24) = *(ushort *)(v2 + 2680);
  *(uint *)(v3 + 12) = v2 + 28;
  *(uint *)(v3 + 48) = *(uint *)(v2 + 112);
  *(uint *)(v3 + 52) = *(uint *)(v2 + 116);
  *(uint *)(v3 + 60) = v2;
  *(uint *)(v2 + 20) = 0;
  *(uint *)(v3 + 8) = v2 + 20;
  *(uchar *)(v3 + 66) = *(uchar *)(v2 + 18);
  *(uchar *)(v2 + 18) = 0;
  *(uchar *)(v2 + 31) = 0;
  result = GetNrOfPkmnInParty(*(uint *)(v2 + 112));
  v5 = 0;
  v8 = result;
  if ( result > 0 )
  {
    v6 = (uint *)v2;
    do
    {
      v7 = GetAdrOfPkmnInParty(*(uint **)(v2 + 112), v5);
      v6[37] = GetPkmnData(v7, 0xA4u, 0);
      v6[41] = GetPkmnData(v7, 0xA5u, 0);
      v6[45] = GetPkmnData(v7, 0xA6u, 0);
      v6[49] = GetPkmnData(v7, 0xA7u, 0);
      v6[53] = GetPkmnData(v7, 0xA8u, 0);
      v6[57] = GetPkmnData(v7, 0xA9u, 0);
      result = v8;
      ++v5;
      ++v6;
    }
    while ( v5 < v8 );
  }
  return result;
}

//----- (0223770C) --------------------------------------------------------
uint __fastcall Function_223770c(int a1)
{
  int v1;

  v1 = a1;
  Function_2238240(*(uint *)(a1 + 60), a1);
  return free(v1);
}

//----- (02237720) --------------------------------------------------------
int __fastcall Function_2237720(int **a1)
{
  int v1;

  v1 = Function_209b978(**a1);
  Function_22384d4(v1);
  return 0;
}

//----- (02237734) --------------------------------------------------------
int __fastcall Function_2237734(int **a1)
{
  int v1;

  v1 = Function_209b978(**a1);
  Function_22384dc(v1);
  return 0;
}

//----- (02237748) --------------------------------------------------------
int __fastcall Function_2237748(int a1)
{
  int **v1;
  uchar *v2;
  uint v3;
  ushort *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint v9;
  int *v10;
  uint *v11;
  int v12;
  ushort *v13;
  int *v14;
  uint *v15;
  int *v16;
  int v17;
  uint *v18;
  int *v19;
  int v20;
  uint *v21;
  int *v22;
  int v23;
  uint *v24;
  int *v25;
  int v26;
  int v27;
  int v28;
  int j;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int i;
  int v37;
  int v38;
  int v39;
  uint v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;

  v1 = (int **)a1;
  v2 = *(uchar **)(a1 + 28);
  *(uint *)(a1 + 28) = v2 + 1;
  v40 = *v2;
  v3 = (uchar)Function_222fc00(a1);
  v39 = (uchar)Function_222fc00((int)v1);
  v4 = (ushort *)Function_222fbe4((int)v1);
  v5 = Function_209b978(**v1);
  v41 = Function_209b970(**v1);
  v6 = Function_222e924(*v1);
  v42 = v6;
  if ( v40 <= 0x34 )
    JUMPOUT(__CS__, *((short *)&off_22377A4 + v40) + 35878822);
  switch ( (uchar)v40 )
  {
    case 2:
      *(uchar *)(v5 + 16) = v3;
      break;
    case 3:
      *v4 = *(ushort *)(v5 + 2 * v3 + 1048);
      break;
    case 4:
      *v4 = *(ushort *)(v5 + 24);
      break;
    case 5:
      v9 = *(ushort *)(v5 + 24);
      if ( v9 < 0x270F )
        *(ushort *)(v5 + 24) = v9 + 1;
      break;
    case 6:
      Function_209ba80(v5);
      break;
    case 7:
      OS_ResetSystem(0);
      break;
    case 9:
      *v4 = Function_20304b0(*(uchar **)(v5 + 8));
      break;
    case 0xA:
      Function_2238278(v5, 2);
      break;
    case 0xB:
      Function_2238658(v5, v6);
      break;
    case 0xC:
      *v4 = Function_223c0bc(v5, *(uchar *)(v5 + 19));
      break;
    case 0xE:
      *v4 = Function_2238454(v5);
      break;
    case 0xF:
      if ( v3 )
        v10 = GetAdrOfPkmnInParty(*(uint **)(v5 + 116), 0);
      else
        v10 = GetAdrOfPkmnInParty(*(uint **)(v5 + 112), 0);
      *v4 = GetPkmnData(v10, 6u, 0);
      break;
    case 0x10:
      *v4 = *(uchar *)(v5 + 19);
      break;
    case 0x11:
      *v4 = *(uchar *)(v5 + 16);
      break;
    case 0x12:
      v11 = (uint *)LoadPokePartyAdress(*(uint *)(v41 + 8));
      v12 = 0;
      v13 = (ushort *)(v5 + 1042);
      do
      {
        v14 = GetAdrOfPkmnInParty(v11, *(uchar *)(v5 + v12 + 44));
        SetPkmnData((int)v14, 6, v13);
        ++v12;
        ++v13;
      }
      while ( v12 < 3 );
      break;
    case 0x13:
      *v4 = Function_223c124(v5);
      break;
    case 0x14:
      *v4 = Function_2238464(v5, v3);
      break;
    case 0x15:
      Function_22384a8(v5);
      break;
    case 0x16:
      Function_22384b4(v5);
      break;
    case 0x17:
      *v4 = Function_2238460(v5);
      break;
    case 0x18:
      *v4 = *(uchar *)(v5 + 2676);
      break;
    case 0x19:
      if ( *(uchar *)(v5 + 19) == 27 )
      {
        v38 = Function_223bd70(*(uchar *)(v5 + 16), 1);
        Function_223bda4(*(uchar *)(v5 + 16), 1);
        for ( i = 0; i < v38; ++i )
        {
          v15 = **(uint ***)(v5 + 48);
          Function_2021d28();
          v17 = v16[1];
          v46 = *v16;
          v47 = v17;
          v48 = v16[2];
          v18 = **(uint ***)(v5 + 64);
          Function_2021d28();
          v20 = v19[1];
          v43 = *v19;
          v44 = v20;
          v45 = v19[2];
          Function_2021c50(v15, &v43);
          Function_2021c50(v18, &v46);
          v21 = **(uint ***)(v5 + 80);
          Function_2021d28();
          v23 = v22[1];
          v46 = *v22;
          v47 = v23;
          v48 = v22[2];
          v24 = **(uint ***)(v5 + 96);
          Function_2021d28();
          v26 = v25[1];
          v43 = *v25;
          v44 = v26;
          v45 = v25[2];
          Function_2021c50(v21, &v43);
          Function_2021c50(v24, &v46);
          v5 += 4;
        }
      }
      break;
    case 0x1C:
      *v4 = Function_223c000(*(uchar *)(v5 + 16));
      break;
    case 0x1D:
      Function_2232ec0(v6);
      break;
    case 0x1E:
      Function_2232f28(v6);
      break;
    case 0x1F:
      Function_2238764(v5, v6, v3);
      v37 = Function_223bd70(*(uchar *)(v5 + 16), 1);
      v27 = Function_223bda4(*(uchar *)(v5 + 16), 1);
      v28 = v27;
      if ( v3 )
      {
        v30 = 0;
        if ( v27 > 0 )
        {
          do
          {
            Function_2021e80(**(uint **)(v5 + 64), 2);
            ++v30;
            v5 += 4;
          }
          while ( v30 < v28 );
        }
      }
      else
      {
        for ( j = 0; j < v37; v5 += 4 )
        {
          Function_2021e80(**(uint **)(v5 + 48), 2);
          ++j;
        }
      }
      break;
    case 0x20:
      Function_2238814(v5, v6, v3);
      break;
    case 0x21:
      Function_2232fec(v6, v40, v7, v8);
      break;
    case 0x22:
      Function_223307c(v6);
      break;
    case 0x23:
      Function_22388dc(v5, v6, v3);
      break;
    case 0x24:
      Function_22389a0(v5, v6, v3);
      break;
    case 0x25:
      if ( Function_223c000(*(uchar *)(v5 + 16)) == 1 )
        Function_2238728(v5, v42);
      break;
    case 0x26:
      if ( Function_223c148(*(uchar *)(v5 + 19)) )
      {
        if ( Function_223c000(*(uchar *)(v5 + 16)) )
          Function_2032ee8(v39);
        else
          LoadTrainerDataAdress(*(uint *)(v41 + 8));
        Function_200b498((*v1)[17], v3);
      }
      else
      {
        v31 = Function_2238498(v5, v39);
        Function_200ba40((*v1)[17], v3, *(ushort *)(v5 + 2 * v31 + 120));
      }
      break;
    case 0x27:
      *(uchar *)(v5 + 2682) = v39;
      Function_2237c0c(v1, v5, v3);
      break;
    case 0x28:
      Function_222e278(v5 + 244, *(ushort *)(v5 + 2 * *(uchar *)(v5 + 17) + 120), 0xBu, 178);
      Function_222e278(v5 + 516, *(ushort *)(v5 + 2 * (*(uchar *)(v5 + 17) + 7) + 120), 0xBu, 178);
      break;
    case 0x29:
      Function_223886c(v5, v6, v3, v39);
      break;
    case 0x2A:
      Function_22388a4(v5, v6, v3, v39);
      break;
    case 0x2B:
      Function_2238ab4(v3, v39);
      break;
    case 0x2C:
      if ( v3 )
      {
        v32 = Function_223d5a8(**v1, v39);
        v33 = ((int (__fastcall *)(uint))dword_222D050[0])(*(uint *)(v32 + 4));
        Function_20039b0(*(uint *)(v42 + 4), 2, 16 * v33 & 0xFFFF, 0x10u, v3, 0);
      }
      else
      {
        Function_20039b0(*(uint *)(v6 + 4), 2, 0, 0x100u, 0, 0);
      }
      break;
    case 0x2D:
      *v4 = Function_2239014(v5);
      break;
    case 0x2E:
      Function_201ff0c(4u, 0);
      break;
    case 0x2F:
      *v4 = *(uchar *)(v5 + 31);
      break;
    case 0x30:
      *v4 = 0;
      if ( !*(uchar *)(v5 + 16) )
      {
        v34 = *(ushort *)(v5 + 24) + 1;
        if ( v34 == 21 )
        {
          *v4 = 1;
        }
        else if ( v34 == 49 )
        {
          *v4 = 2;
        }
      }
      break;
    case 0x31:
      Function_222e330(
        (ushort *)(v5 + 816),
        (ushort *)(v5 + 788),
        v5 + 796,
        (int *)(v5 + 800),
        0,
        4,
        0xBu,
        179);
      break;
    case 0x32:
      Function_223c04c(v5);
      break;
    case 0x33:
      *v4 = *(uchar *)(v5 + 30);
      *(uchar *)(v5 + 30) = 1;
      break;
    case 0x34:
      *(uchar *)(v5 + 2684) = 0;
      break;
    default:
      return 0;
  }
  return 0;
}

//----- (02237C0C) --------------------------------------------------------
int __fastcall Function_2237c0c(int **a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int *v6;

  v3 = a2;
  v4 = a3;
  v5 = Function_222e924(*a1);
  v6 = (int *)Function_223d6d0(*(uint *)(v5 + 16), 0);
  return Function_20146f4(v6, v4, (void (__fastcall *)(int))Function_2237c30, v3);
}

//----- (02237C30) --------------------------------------------------------
int __fastcall Function_2237c30(int a1)
{
  int v1;
  int result;
  short v3;
  short v4;
  short v5;
  int v6;
  int v7;
  int v8;

  v1 = a1;
  v6 = -4096;
  v7 = 0;
  v8 = 0;
  result = *(uchar *)(Function_2014764() + 2682);
  if ( result == 1 )
  {
    Function_2014798((ushort *)v1, &v3);
    v3 = -v3;
    *(ushort *)(v1 + 80) = v3;
    *(ushort *)(v1 + 82) = v4;
    *(ushort *)(v1 + 84) = v5;
    *(uint *)(v1 + 40) = v6 + *(uint *)(**(uint **)(v1 + 32) + 4);
    *(uint *)(v1 + 44) = v7 + *(uint *)(**(uint **)(v1 + 32) + 8);
    result = v8 + *(uint *)(**(uint **)(v1 + 32) + 12);
    *(uint *)(v1 + 48) = result;
  }
  return result;
}

//----- (02237CAC) --------------------------------------------------------
int __fastcall Function_2237cac(int a1)
{
  int **v1;
  ushort *v2;

  v1 = (int **)a1;
  v2 = (ushort *)Function_222fbe4(a1);
  *v2 = *(uint *)(Function_209b978(**v1) + 40);
  return 0;
}

//----- (02237CC8) --------------------------------------------------------
int __fastcall Function_2237cc8(int a1)
{
  int **v1;
  int v2;
  int v3;
  ushort *v4;
  int v5;

  v1 = (int **)a1;
  v2 = Function_222fc00(a1);
  v3 = Function_222fc00((int)v1);
  v4 = (ushort *)Function_222fbe4((int)v1);
  v5 = Function_209b978(**v1);
  *v4 = Function_2238b40(v5, v2, v3);
  return 1;
}

//----- (02237CF8) --------------------------------------------------------
int __fastcall Function_2237cf8(int a1)
{
  int v1;

  v1 = a1;
  *(ushort *)(a1 + 120) = Function_222ea48(a1);
  Function_222e974(v1, (int)Function_2237d18);
  return 1;
}

//----- (02237D18) --------------------------------------------------------
int __fastcall Function_2237d18(int a1)
{
  int **v1;
  int v2;

  v1 = (int **)a1;
  Function_222fc8c((int *)a1, *(ushort *)(a1 + 120));
  v2 = Function_209b978(**v1);
  if ( *(uchar *)(v2 + 2684) < 2u )
    return 0;
  *(uchar *)(v2 + 2684) = 0;
  return 1;
}

//----- (02237D48) --------------------------------------------------------
int __fastcall Function_2237d48(int **a1)
{
  int v1;
  uchar *v2;
  int v3;
  int v4;

  v1 = (int)a1;
  Function_209b970(**a1);
  v2 = *(uchar **)(v1 + 28);
  *(uint *)(v1 + 28) = v2 + 1;
  v3 = *v2;
  v4 = Function_209b978(**(uint **)v1);
  if ( !v4 )
    return 0;
  Function_22330fc(v1, v4 + 268 + 272 * v3);
  return 1;
}

//----- (02237D84) --------------------------------------------------------
int __fastcall Function_2237d84(int **a1)
{
  int v1;

  v1 = *(uchar *)(Function_209b978(**a1) + 19);
  Function_2238b88();
  return 1;
}

//----- (02237D98) --------------------------------------------------------
int __fastcall Function_2237d98(int **a1)
{
  int **v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  v2 = Function_222e924(*a1);
  v3 = Function_222fc00((int)v1);
  v4 = Function_222fc00((int)v1);
  v5 = Function_222fc00((int)v1);
  v6 = Function_209b978(**v1);
  Function_22389f4(v6, v2, v3, v4, v5);
  return 0;
}

//----- (02237DD8) --------------------------------------------------------
int __fastcall Function_2237dd8(int a1, int a2, char a3, char a4, char a5, char a6, int a7)
{
  int v7;
  int v8;
  ushort *v9;
  uchar *v10;
  int v11;
  int v12;
  char v13;
  int v14;
  int v15;
  int v16;
  uint v17;
  int v18;
  int v19;
  int v20;
  int v21;
  uint v22;
  int v23;
  uint v24;
  uint v25;
  uint *v26;
  int *v27;
  int v28;
  int i;
  int *v30;
  int *v31;
  int *v32;
  int v33;
  char v35;
  char v36;
  uint *v37;
  int v38;
  int v39;

  v7 = a2;
  v8 = a1;
  v35 = a3;
  v36 = a4;
  dword_2241AC0[3] = malloc(0xBu, 2696);
  MI_CpuFill8((ushort *)dword_2241AC0[3], 0, 0xA88u);
  *(uint *)(dword_2241AC0[3] + 8) = Function_20304a0(v8);
  *(uint *)(dword_2241AC0[3] + 4) = v8;
  *(uint *)dword_2241AC0[3] = 11;
  *(uint *)(dword_2241AC0[3] + 112) = AllocPkmnParty(0xBu);
  *(uint *)(dword_2241AC0[3] + 116) = AllocPkmnParty(0xBu);
  *(uint *)(dword_2241AC0[3] + 2688) = a7;
  *(uchar *)(dword_2241AC0[3] + 19) = 32;
  v9 = *(ushort **)(dword_2241AC0[3] + 8);
  v10 = (uchar *)Function_20305b8(v8);
  if ( v7 )
  {
    *(uchar *)(dword_2241AC0[3] + 16) = Function_203054c((int)v9, 0, 0);
    *(uchar *)(dword_2241AC0[3] + 17) = Function_203054c((int)v9, 2u, 0);
    *(uchar *)(dword_2241AC0[3] + 28) = Function_203054c((int)v9, 3u, 0);
    *(uchar *)(dword_2241AC0[3] + 18) = Function_203054c((int)v9, 1u, 0);
    v19 = LoadVariableAreaAdress_17(*(uint *)(dword_2241AC0[3] + 4));
    Function_205e700(*(uchar *)(dword_2241AC0[3] + 16));
    v21 = v20;
    Function_205e700(*(uchar *)(dword_2241AC0[3] + 16));
    v23 = Function_205e6a8(v22);
    *(ushort *)(dword_2241AC0[3] + 24) = Function_2030698(v19, v21, v23);
    v24 = 0;
    *(ushort *)(dword_2241AC0[3] + 26) = s32_div_f(*(ushort *)(dword_2241AC0[3] + 24), 7);
    do
    {
      *(uchar *)(dword_2241AC0[3] + v24 + 44) = Function_203054c((int)v9, 6u, (uchar)v24);
      v24 = (v24 + 1) & 0xFFFF;
    }
    while ( v24 < 3 );
  }
  else
  {
    *(uchar *)(dword_2241AC0[3] + 16) = v35;
    *(uchar *)(dword_2241AC0[3] + 17) = 0;
    *(uchar *)(dword_2241AC0[3] + 28) = 3;
    *(uchar *)(dword_2241AC0[3] + 18) = 0;
    Function_2030494(v9);
    v11 = *(uchar *)(dword_2241AC0[3] + 16);
    if ( v11 == 3 )
    {
      v12 = LoadFlagAdress(*(uint *)(dword_2241AC0[3] + 4));
      v13 = Function_206b6fc(v12);
    }
    else
    {
      v13 = Function_2030600(v10, 8, v11);
    }
    if ( v13 == 1 )
    {
      v14 = LoadVariableAreaAdress_17(*(uint *)(dword_2241AC0[3] + 4));
      Function_205e700(*(uchar *)(dword_2241AC0[3] + 16));
      v16 = v15;
      Function_205e700(*(uchar *)(dword_2241AC0[3] + 16));
      v18 = Function_205e6a8(v17);
      *(ushort *)(dword_2241AC0[3] + 24) = Function_2030698(v14, v16, v18);
    }
    else
    {
      *(ushort *)(dword_2241AC0[3] + 24) = 0;
    }
    *(ushort *)(dword_2241AC0[3] + 26) = s32_div_f(*(ushort *)(dword_2241AC0[3] + 24), 7);
    *(uint *)(dword_2241AC0[3] + 36) = 0;
    *(uchar *)(dword_2241AC0[3] + 44) = v36;
    *(uchar *)(dword_2241AC0[3] + 45) = a5;
    *(uchar *)(dword_2241AC0[3] + 46) = a6;
  }
  v25 = 0;
  do
  {
    v26 = (uint *)LoadPokePartyAdress(*(uint *)(dword_2241AC0[3] + 4));
    v27 = GetAdrOfPkmnInParty(v26, *(uchar *)(dword_2241AC0[3] + v25 + 44));
    *(ushort *)(dword_2241AC0[3] + 2 * v25 + 1042) = GetPkmnData(v27, 6u, 0);
    v25 = (v25 + 1) & 0xFFFF;
  }
  while ( v25 < 3 );
  v37 = (uint *)LoadPokePartyAdress(*(uint *)(dword_2241AC0[3] + 4));
  v28 = Function_223bd70(*(uchar *)(dword_2241AC0[3] + 16), 0);
  for ( i = 0; i < v28; i = (i + 1) & 0xFFFF )
  {
    v30 = GetAdrOfPkmnInParty(v37, *(uchar *)(dword_2241AC0[3] + i + 44));
    CopyPkmnDataToParty(*(uint **)(dword_2241AC0[3] + 112), v30);
    v31 = GetAdrOfPkmnInParty(*(uint **)(dword_2241AC0[3] + 112), i);
    v39 = 0;
    v32 = v31;
    SetPkmnData((int)v31, 6, (ushort *)&v39);
    if ( GetPkmnData(v32, 0xA1u, 0) > 0x32 )
    {
      v33 = GetPkmnData(v32, 5u, 0);
      v38 = GetBaseExpPts(v33, 50);
      SetPkmnData((int)v32, 8, (ushort *)&v38);
      Function_207418c(v32);
    }
  }
  if ( Function_223c000(*(uchar *)(dword_2241AC0[3] + 16)) == 1 )
    Function_222e630(*(uint *)(dword_2241AC0[3] + 4));
  return dword_2241AC0[3];
}

//----- (0223806C) --------------------------------------------------------
int __fastcall Function_223806c(int a1, int a2)
{
  int result;

  if ( a2 )
    result = Function_2238114();
  else
    result = Function_2238080();
  return result;
}

//----- (02238080) --------------------------------------------------------
int __fastcall Function_2238080(int a1)
{
  int v1;
  int v2;
  int v3;
  uint v4;
  char v5;
  int result;
  char *v7;
  uint v8;

  v1 = a1;
  v2 = Function_223c124(a1);
  Function_223bd28(*(uchar *)(v1 + 16), v2, v1 + 120, 14);
  v3 = *(uchar *)(v1 + 17);
  v4 = Function_223bda4(*(uchar *)(v1 + 16), 1);
  v5 = Function_223c000(*(uchar *)(v1 + 16));
  Function_222e4bc(
    v4,
    *(ushort *)(v1 + 2 * v3 + 120),
    *(ushort *)(v1 + 2 * (v3 + 7) + 120),
    (ushort *)(v1 + 788),
    (ushort *)(v1 + 816),
    v1 + 796,
    (int *)(v1 + 800),
    v5);
  result = Function_223c124(v1);
  v7 = &byte_223FAF8;
  v8 = 0;
  while ( result < (uchar)*v7 )
  {
    ++v8;
    v7 += 2;
    if ( v8 >= 3 )
      return result;
  }
  result = (uchar)byte_223FAF9[2 * v8];
  *(uchar *)(v1 + 28) = result;
  return result;
}

//----- (02238114) --------------------------------------------------------
uint __fastcall Function_2238114(int a1)
{
  int v1;
  int v2;
  int v3;
  short v4;
  ushort *v5;
  int v6;
  char *v7;
  int v8;
  int *v9;
  int v10;
  ushort *v11;
  int v12;
  int v13;
  char v15;
  char v16;
  char v17;
  char v18;

  v1 = a1;
  Function_22381c4();
  v2 = 0;
  v3 = v1;
  do
  {
    v4 = Function_203054c(*(uint *)(v1 + 8), 5u, (uchar)v2);
    v5 = (ushort *)(v3 + 120);
    ++v2;
    v3 += 2;
    *v5 = v4;
  }
  while ( v2 < 14 );
  v6 = 0;
  v7 = &v17;
  v8 = v1;
  do
  {
    *(ushort *)v7 = Function_203054c(*(uint *)(v1 + 8), 7u, (uchar)v6);
    *(ushort *)(v8 + 788) = *(ushort *)v7;
    ++v6;
    v7 += 2;
    v8 += 2;
  }
  while ( v6 < 4 );
  Function_222e330(&v18, (ushort *)&v17, (int)&v15, 0, (int *)&v16, 4, 0xBu, 179);
  v9 = AllocPkmnData(0xBu);
  v10 = 0;
  v11 = (ushort *)&v18;
  do
  {
    v12 = Function_223bffc(v1);
    Function_222df40(v11, v9, v12, v13);
    Function_223c034(v1, *(uint *)(v1 + 116), v9);
    ++v10;
    v11 += 28;
  }
  while ( v10 < 4 );
  return free((int)v9);
}

//----- (022381C4) --------------------------------------------------------
uint __fastcall Function_22381c4(int a1, int a2, int a3, int a4)
{
  int v4;
  uint result;
  int v6;
  int i;
  int *v8;
  short v9;
  int v10;

  v10 = a4;
  v4 = a1;
  result = GetNrOfPkmnInParty(*(uint *)(a1 + 112)) << 24;
  v6 = result >> 24;
  for ( i = 0; i < v6; ++i )
  {
    v8 = GetAdrOfPkmnInParty(*(uint **)(v4 + 112), i);
    v9 = Function_203054c(*(uint *)(v4 + 8), 4u, (uchar)i);
    result = SetPkmnData((int)v8, 6, (ushort *)&v9);
  }
  return result;
}

//----- (02238210) --------------------------------------------------------
uint __fastcall Function_2238210(uint result)
{
  int v1;
  int v2;
  int v3;

  v1 = result;
  if ( result )
  {
    v2 = *(uint *)(result + 112);
    if ( v2 )
      free(v2);
    v3 = *(uint *)(v1 + 116);
    if ( v3 )
      free(v3);
    MI_CpuFill8((ushort *)v1, 0, 0xA88u);
    result = free(v1);
  }
  return result;
}

//----- (02238240) --------------------------------------------------------
int __fastcall Function_2238240(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    result = Function_2238264(v3, (uchar)v4);
    *(ushort *)(v2 + 1048) = result;
    ++v4;
    v2 += 2;
  }
  while ( v4 < 6 );
  return result;
}

//----- (02238264) --------------------------------------------------------
int __fastcall Function_2238264(int a1, uint a2)
{
  if ( a2 < 6 )
    return *(ushort *)(a1 + 56);
  ErrorHandler();
  return 0;
}

//----- (02238278) --------------------------------------------------------
int __fastcall Function_2238278(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint v12;
  int v13;
  int v14;
  int v15;
  uint v16;
  uint v17;
  uint v18;
  uint v19;
  int *v20;
  int result;
  uint v22;
  uint v23;
  uchar *v24;
  short v25;
  char v26;

  v2 = a1;
  v3 = a2;
  v24 = (uchar *)Function_20305b8(*(uint *)(a1 + 4));
  Function_223bda4(*(uchar *)(v2 + 16), 1);
  v26 = *(uchar *)(v2 + 16);
  Function_20304cc(*(uint *)(v2 + 8), 0, 0, 0, &v26);
  Function_20304b8(*(uchar **)(v2 + 8), 1);
  v26 = *(uchar *)(v2 + 17);
  Function_20304cc(*(uint *)(v2 + 8), 2u, 0, 0, &v26);
  v26 = *(uchar *)(v2 + 28);
  Function_20304cc(*(uint *)(v2 + 8), 3u, 0, 0, &v26);
  v26 = *(uchar *)(v2 + 18);
  Function_20304cc(*(uint *)(v2 + 8), 1u, 0, 0, &v26);
  v4 = LoadVariableAreaAdress_17(*(uint *)(v2 + 4));
  Function_205e700(*(uchar *)(v2 + 16));
  v6 = v5;
  Function_205e700(*(uchar *)(v2 + 16));
  v8 = Function_205e6a8(v7);
  Function_20306e4(v4, v6, v8, *(ushort *)(v2 + 24));
  if ( v3 != 2 )
  {
    v9 = LoadVariableAreaAdress_17(*(uint *)(v2 + 4));
    Function_205e728(*(uchar *)(v2 + 16));
    v11 = v10;
    Function_205e728(*(uchar *)(v2 + 16));
    v13 = Function_205e6a8(v12);
    Function_2030848(v9, v11, v13, *(ushort *)(v2 + 24));
    v26 = *(uchar *)(v2 + 47);
    Function_20305cc(v24, 8, *(uchar *)(v2 + 16), 0, (uchar *)&v26);
    if ( *(uchar *)(v2 + 16) == 3 )
    {
      v14 = LoadVariableAreaAdress_17(*(uint *)(v2 + 4));
      v15 = Function_205e6a8(0x6Eu);
      Function_20306e4(v14, 110, v15, *(uchar *)(v2 + 47));
    }
  }
  v16 = 0;
  do
  {
    v25 = *(ushort *)(v2 + 2 * v16 + 120);
    Function_20304cc(*(uint *)(v2 + 8), 5u, (uchar)v16, 0, &v25);
    v16 = (v16 + 1) & 0xFFFF;
  }
  while ( v16 < 0xE );
  v17 = 0;
  do
  {
    v26 = *(uchar *)(v2 + v17 + 44);
    Function_20304cc(*(uint *)(v2 + 8), 6u, (uchar)v17, 0, &v26);
    v17 = (v17 + 1) & 0xFFFF;
  }
  while ( v17 < 3 );
  v18 = GetNrOfPkmnInParty(*(uint *)(v2 + 112));
  v19 = 0;
  if ( v18 )
  {
    do
    {
      v20 = GetAdrOfPkmnInParty(*(uint **)(v2 + 112), v19);
      v25 = GetPkmnData(v20, 6u, 0);
      Function_20304cc(*(uint *)(v2 + 8), 4u, (uchar)v19, 0, &v25);
      v19 = (v19 + 1) & 0xFFFF;
    }
    while ( v19 < v18 );
  }
  result = GetNrOfPkmnInParty(*(uint *)(v2 + 116));
  v22 = result;
  v23 = 0;
  if ( result )
  {
    do
    {
      GetAdrOfPkmnInParty(*(uint **)(v2 + 116), v23);
      v25 = *(ushort *)(v2 + 2 * v23 + 788);
      Function_20304cc(*(uint *)(v2 + 8), 7u, (uchar)v23, 0, &v25);
      result = (v23 + 1) << 16;
      v23 = (v23 + 1) & 0xFFFF;
    }
    while ( v23 < v22 );
  }
  return result;
}

//----- (02238454) --------------------------------------------------------
int __fastcall Function_2238454(int a1)
{
  return (uchar)++*(uchar *)(a1 + 17);
}

//----- (02238460) --------------------------------------------------------
int __fastcall Function_2238460(int a1)
{
  return *(uchar *)(a1 + 17);
}

//----- (02238464) --------------------------------------------------------
int __fastcall Function_2238464(int a1, int a2)
{
  int v2;
  int v3;
  ushort *v4;
  char v6;
  short v7;

  v2 = a1;
  v3 = Function_2238498(a1, a2);
  v4 = Function_222dd04((int)&v6, *(ushort *)(v2 + (2 * v3 & 0x1FF) + 120), 0xBu, 178);
  free((int)v4);
  return Function_222e10c((uchar)v7);
}

//----- (02238498) --------------------------------------------------------
int __fastcall Function_2238498(int a1, int a2)
{
  return (*(uchar *)(a1 + 17) + 7 * a2) & 0xFFFF;
}

//----- (022384A8) --------------------------------------------------------
int __fastcall Function_22384a8(int a1)
{
  return Function_2238278(a1, 1);
}

//----- (022384B4) --------------------------------------------------------
int __fastcall Function_22384b4(int a1)
{
  uint v1;

  *(uchar *)(a1 + 47) = 1;
  v1 = *(ushort *)(a1 + 26);
  if ( v1 < 8 )
    *(ushort *)(a1 + 26) = v1 + 1;
  *(uchar *)(a1 + 17) = 0;
  return Function_2238278(a1, 0);
}

//----- (022384D4) --------------------------------------------------------
int __fastcall Function_22384d4(int a1)
{
  return Function_223c04c(a1);
}

//----- (022384DC) --------------------------------------------------------
int __fastcall Function_22384dc(int a1)
{
  int v1;
  int v2;
  uint v3;
  char v4;

  v1 = a1;
  v2 = *(uchar *)(a1 + 17);
  v3 = Function_223bda4(*(uchar *)(a1 + 16), 1);
  v4 = Function_223c000(*(uchar *)(v1 + 16));
  Function_222e4bc(
    v3,
    *(ushort *)(v1 + 2 * v2 + 120),
    *(ushort *)(v1 + 2 * (v2 + 7) + 120),
    (ushort *)(v1 + 788),
    (ushort *)(v1 + 816),
    v1 + 796,
    (int *)(v1 + 800),
    v4);
  return Function_223c04c(v1);
}

//----- (02238538) --------------------------------------------------------
int __fastcall Function_2238538(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  char *v10;
  int v11;
  int v12;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = Function_223bd70(*(uchar *)(a1 + 16), 0);
  v9 = Function_2238584(v4, v5, v6, v8);
  v10 = &byte_223FAFE;
  v11 = v9;
  v12 = 0;
  while ( v7 >= (uchar)*v10 )
  {
    ++v12;
    v10 += 2;
    if ( v12 >= 5 )
      return v11;
  }
  return v9 + (uchar)byte_223FAFF[2 * v12];
}

//----- (02238584) --------------------------------------------------------
int __fastcall Function_2238584(int a1, uint *a2, uint *a3, int a4)
{
  int v4;
  int v5;
  int i;
  int *v7;
  int j;
  int *v9;
  int v11;
  uint *v12;
  uint *v13;
  int v14;

  v14 = a4;
  v11 = a1;
  v4 = 0;
  v12 = a2;
  v13 = a3;
  v5 = 0;
  for ( i = 0; i < v14; ++i )
  {
    v7 = GetAdrOfPkmnInParty(v12, i);
    if ( GetPkmnData(v7, 0xACu, 0) )
    {
      if ( !GetPkmnData(v7, 0xA3u, 0) )
        v4 = (v4 + 1) & 0xFF;
      if ( GetPkmnData(v7, 0xA0u, 0) )
        v5 = (v5 + 1) & 0xFF;
    }
  }
  if ( Function_223c000(*(uchar *)(v11 + 16)) == 1 )
  {
    for ( j = 0; j < v14; ++j )
    {
      v9 = GetAdrOfPkmnInParty(v13, j);
      if ( GetPkmnData(v9, 0xACu, 0) )
      {
        if ( !GetPkmnData(v9, 0xA3u, 0) )
          v4 = (v4 + 1) & 0xFF;
        if ( GetPkmnData(v9, 0xA0u, 0) )
          v5 = (v5 + 1) & 0xFF;
      }
    }
  }
  return *((uchar *)dword_223FAF0 + v5) + *((uchar *)dword_223FAE8 + v4);
}

//----- (02238658) --------------------------------------------------------
uint __fastcall Function_2238658(int a1, uint **a2, int a3, int a4)
{
  int v4;
  uint **v5;
  int *v6;
  int v7;
  int v9;
  int v10;

  v10 = a4;
  v4 = a1;
  v5 = a2;
  if ( *(uchar *)(a1 + 19) == 32 )
    return Function_201ff0c(4u, 0);
  v6 = LoadFromNARC_8(150, 0x5Eu, a3, a4);
  Function_20070e8(
    (int)v6,
    *((ushort *)&dword_223FB2C[35] + 3 * *(uchar *)(v4 + 19) + 1),
    *v5,
    2u,
    0,
    0,
    1,
    94);
  Function_200710c(
    (int)v6,
    *((ushort *)dword_223FBBC + 3 * *(uchar *)(v4 + 19)),
    *v5,
    2u,
    0,
    0,
    1,
    94);
  v7 = Function_20071ec((int)v6, *((ushort *)dword_223FBBC + 3 * *(uchar *)(v4 + 19) + 1), &v9, 94);
  DC_FlushRange(*(uint *)(v9 + 12), *(uint *)(v9 + 8));
  GX_BeginLoadBGExtPltt();
  GX_LoadBGExtPltt(*(uint *)(v9 + 12), 0x4000, 0x2000);
  GX_EndLoadBGExtPltt();
  free(v7);
  Function_201ff0c(4u, 1);
  Function_201c3c0((int)*v5, 2);
  return Call_FS_CloseFile(v6);
}

//----- (02238728) --------------------------------------------------------
uint __fastcall Function_2238728(int a1, uint **a2, int a3, int a4)
{
  uint **v4;
  int *v5;

  v4 = a2;
  v5 = LoadFromNARC_8(150, 0x5Eu, a3, a4);
  Function_200710c((int)v5, 0x35u, *v4, 3u, 0, 0, 1, 94);
  Function_201c3c0((int)*v4, 3);
  return Call_FS_CloseFile(v5);
}

//----- (02238764) --------------------------------------------------------
int __fastcall Function_2238764(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int result;
  int v6;
  short *v7;
  int v8;
  int *v9;
  int *v10;
  int v11;
  short *v12;
  int v13;
  int *v14;
  int *v15;
  int v16;
  int v17;
  int v18;

  v16 = a1;
  v17 = a2;
  v3 = a3;
  v4 = Function_223bd70(*(uchar *)(a1 + 16), 1);
  result = Function_223bda4(*(uchar *)(v16 + 16), 1);
  v18 = result;
  if ( v3 )
  {
    v11 = 0;
    if ( result > 0 )
    {
      v12 = &word_223FB28;
      v13 = v16;
      do
      {
        v14 = GetAdrOfPkmnInParty(*(uint **)(v16 + 116), v11);
        v15 = Function_2232f4c(v17, (int)v14, v4, *v12, v12[1]);
        *(uint *)(v13 + 64) = v15;
        Function_2021cc8(*v15, 0);
        result = v18;
        ++v11;
        v12 += 2;
        ++v4;
        v13 += 4;
      }
      while ( v11 < v18 );
    }
  }
  else
  {
    v6 = 0;
    if ( v4 > 0 )
    {
      v7 = &word_223FB18;
      v8 = v16;
      do
      {
        v9 = GetAdrOfPkmnInParty(*(uint **)(v16 + 112), v6);
        v10 = Function_2232f4c(v17, (int)v9, v6, *v7, v7[1]);
        *(uint *)(v8 + 48) = v10;
        result = Function_2021cc8(*v10, 0);
        ++v6;
        v7 += 2;
        v8 += 4;
      }
      while ( v6 < v4 );
    }
  }
  return result;
}

//----- (02238814) --------------------------------------------------------
int __fastcall Function_2238814(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int result;
  int i;
  int v9;
  int v10;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_223bd70(*(uchar *)(a1 + 16), 1);
  result = Function_223bda4(*(uchar *)(v3 + 16), 1);
  v10 = result;
  if ( v5 )
  {
    v9 = 0;
    if ( result > 0 )
    {
      do
      {
        Function_2232fd4(v4, *(uint *)(v3 + 64), v6);
        result = v10;
        ++v9;
        ++v6;
        v3 += 4;
      }
      while ( v9 < v10 );
    }
  }
  else
  {
    for ( i = 0; i < v6; v3 += 4 )
      result = Function_2232fd4(v4, *(uint *)(v3 + 48), i++);
  }
  return result;
}

//----- (0223886C) --------------------------------------------------------
int __fastcall Function_223886c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;

  v4 = a1;
  v5 = a3;
  v6 = a4;
  result = Function_223bd70(*(uchar *)(a1 + 16), 1);
  if ( v6 < result )
  {
    if ( v5 == 1 )
      result = Function_2021cac(**(uint **)(v4 + 4 * v6 + 48), 1);
    else
      result = Function_2021cac(**(uint **)(v4 + 4 * v6 + 48), 0);
  }
  return result;
}

//----- (022388A4) --------------------------------------------------------
int __fastcall Function_22388a4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;

  v4 = a1;
  v5 = a3;
  v6 = a4;
  result = Function_223bda4(*(uchar *)(a1 + 16), 1);
  if ( v6 < result )
  {
    if ( v5 == 1 )
      result = Function_2021cac(**(uint **)(v4 + 4 * v6 + 64), 1);
    else
      result = Function_2021cac(**(uint **)(v4 + 4 * v6 + 64), 0);
  }
  return result;
}

//----- (022388DC) --------------------------------------------------------
int __fastcall Function_22388dc(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int result;
  int v6;
  short *v7;
  int v8;
  int *v9;
  int v10;
  short *v11;
  int v12;
  int *v13;
  int v14;
  int v15;
  int v16;

  v3 = a1;
  v14 = a2;
  v4 = a3;
  v16 = Function_223bd70(*(uchar *)(a1 + 16), 1);
  result = Function_223bda4(*(uchar *)(v3 + 16), 1);
  v15 = result;
  if ( v4 )
  {
    v10 = 0;
    if ( result > 0 )
    {
      v11 = &word_223FB28;
      v12 = v3;
      do
      {
        *(uint *)(v12 + 96) = Function_22330ac(v14, *v11 + 8, v11[1] + 4);
        v13 = GetAdrOfPkmnInParty(*(uint **)(v3 + 116), v10);
        if ( !GetPkmnData(v13, 6u, 0) )
          Function_2021cac(**(uint **)(v12 + 96), 0);
        result = v15;
        ++v10;
        v11 += 2;
        v12 += 4;
      }
      while ( v10 < v15 );
    }
  }
  else
  {
    result = v16;
    v6 = 0;
    if ( v16 > 0 )
    {
      v7 = &word_223FB18;
      v8 = v3;
      do
      {
        *(uint *)(v8 + 80) = Function_22330ac(v14, *v7 + 8, v7[1] + 4);
        v9 = GetAdrOfPkmnInParty(*(uint **)(v3 + 112), v6);
        if ( !GetPkmnData(v9, 6u, 0) )
          Function_2021cac(**(uint **)(v8 + 80), 0);
        result = v16;
        ++v6;
        v7 += 2;
        v8 += 4;
      }
      while ( v6 < v16 );
    }
  }
  return result;
}

//----- (022389A0) --------------------------------------------------------
int __fastcall Function_22389a0(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;
  int v7;
  int i;
  int v9;
  int v10;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v10 = Function_223bd70(*(uchar *)(a1 + 16), 1);
  result = Function_223bda4(*(uchar *)(v3 + 16), 1);
  v7 = result;
  if ( v5 )
  {
    v9 = 0;
    if ( result > 0 )
    {
      do
      {
        result = Function_22330f0(v4, *(uint *)(v3 + 96));
        ++v9;
        v3 += 4;
      }
      while ( v9 < v7 );
    }
  }
  else
  {
    result = v10;
    for ( i = 0; i < v10; v3 += 4 )
    {
      Function_22330f0(v4, *(uint *)(v3 + 80));
      result = v10;
      ++i;
    }
  }
  return result;
}

//----- (022389F4) --------------------------------------------------------
int __fastcall Function_22389f4(int a1, int a2, int a3, int a4, short a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int result;
  int *v10;
  uint v11;
  int *v12;
  uint v13;

  v5 = a1;
  v6 = a3;
  v7 = a4;
  v8 = Function_223bd70(*(uchar *)(a1 + 16), 1);
  result = Function_223bda4(*(uchar *)(v5 + 16), 1);
  if ( v6 )
  {
    if ( v7 < result )
    {
      v12 = GetAdrOfPkmnInParty(*(uint **)(v5 + 116), v7);
      v13 = GetPkmnData(v12, 6u, 0);
      if ( a5 == 1 )
      {
        if ( v13 )
          result = Function_2021cac(**(uint **)(v5 + 4 * v7 + 96), 1);
        else
          result = Function_2021cac(**(uint **)(v5 + 4 * v7 + 96), 0);
      }
      else
      {
        result = Function_2021cac(**(uint **)(v5 + 4 * v7 + 96), 0);
      }
    }
  }
  else if ( v7 < v8 )
  {
    v10 = GetAdrOfPkmnInParty(*(uint **)(v5 + 112), v7);
    v11 = GetPkmnData(v10, 6u, 0);
    if ( a5 == 1 )
    {
      if ( v11 )
        result = Function_2021cac(**(uint **)(v5 + 4 * v7 + 80), 1);
      else
        result = Function_2021cac(**(uint **)(v5 + 4 * v7 + 80), 0);
    }
    else
    {
      result = Function_2021cac(**(uint **)(v5 + 4 * v7 + 80), 0);
    }
  }
  return result;
}

//----- (02238AB4) --------------------------------------------------------
uint __fastcall Function_2238ab4(int a1, int a2)
{
  int v2;
  uint v3;
  int v4;
  int *v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  int v11;

  v2 = a1;
  if ( a2 )
  {
    v3 = 142;
    v4 = 288;
  }
  else
  {
    v3 = 143;
    v4 = 480;
  }
  v5 = (int *)malloc(0x5Eu, 0x2000);
  Call_FillMemWithValue(v5, 0, 0x2000u);
  v8 = LoadFromNARC_8(150, 0x5Eu, v6, v7);
  v9 = Function_20071ec((int)v8, v3, &v11, 94);
  Function_200393c(*(uint *)(v11 + 12), (int)v5, 0x1000u, v2, 0);
  DC_FlushRange((int)v5, 0x2000);
  GX_BeginLoadBGExtPltt();
  GX_LoadBGExtPltt((int)v5, 24576, v4);
  GX_EndLoadBGExtPltt();
  Call_FS_CloseFile(v8);
  free((int)v5);
  return free(v9);
}

//----- (02238B40) --------------------------------------------------------
int __fastcall Function_2238b40(int result, char a2, short a3)
{
  switch ( a2 )
  {
    case 0:
      result = Function_222f86c(result);
      break;
    case 1:
      result = Function_222f8d0(result);
      break;
    case 2:
      result = Function_222f944(result);
      break;
    case 3:
      result = Function_222fa38(result, a3);
      break;
    case 4:
      result = Function_222fa84(result, a3);
      break;
    case 5:
      result = Function_222fad0(result);
      break;
    default:
      return result;
  }
  return result;
}

//----- (02238B88) --------------------------------------------------------
int __fastcall Function_2238b88(int a1, uint a2)
{
  uint v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 9 )
  {
    v4 = *(uint *)(a1 + 112);
    v5 = Function_223bd70(*(uchar *)(a1 + 16), 1);
  }
  else
  {
    v4 = *(uint *)(a1 + 116);
    v5 = Function_223bda4(*(uchar *)(a1 + 16), 1);
  }
  return ((int (__fastcall *)(int, int, int))*(&off_2241A38 + v2))(v3, v4, v5);
}

//----- (02238BBC) --------------------------------------------------------
void __fastcall Function_2238bbc(int a1, uint *a2, int a3, int a4)
{
  int v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  long long v10;
  int v11;
  uint v12;
  uint *i;
  uint v14;
  int v15;

  v15 = a4;
  v4 = a3;
  v5 = 0;
  for ( i = a2; v5 < v4; ++v5 )
  {
    v6 = GetAdrOfPkmnInParty(i, v5);
    v7 = (int)v6;
    v8 = GetPkmnData(v6, 0xA4u, 0);
    v9 = v8;
    LODWORD(v10) = dfltu(v8);
    v11 = dmul(4608083138725491507LL, v10);
    v14 = v9 - (dfixu(v11, v12) - v9);
    SetPkmnData(v7, 163, (ushort *)&v14);
  }
}

//----- (02238C18) --------------------------------------------------------
void __fastcall __spoils<R1,R2,R3,R12> Function_2238c18(int a1, uint *a2, int a3)
{
  int v3;
  int *v4;
  uint v5;
  uint v6;
  uint v7;
  int v8;
  uint *v9;
  int v10;
  int i;
  int v12;

  v10 = a3;
  v3 = 0;
  v9 = a2;
  for ( i = 0; v3 < v10; ++v3 )
  {
    v4 = GetAdrOfPkmnInParty(v9, v3);
    v5 = GetPkmnData(v4, 0xB1u, 0);
    v6 = GetPkmnData(v4, 0xB2u, 0);
    v7 = GetPkmnData(v4, 0xAu, 0);
    if ( v5 != 3 && v6 != 3 && v5 != 8 && v6 != 8 && v7 != 17 )
    {
      v12 = 8;
      SetPkmnData((int)v4, 160, (ushort *)&v12);
    }
    else
    {
      ++i;
    }
  }
  if ( i >= v10 )
    *(uchar *)(v8 + 31) = 1;
}

//----- (02238C9C) --------------------------------------------------------
void __fastcall __spoils<R1,R2,R3,R12> Function_2238c9c(int a1, uint *a2, int a3)
{
  int v3;
  int v4;
  int *v5;
  uint v6;
  uint v7;
  int v8;
  uint *i;
  int v10;
  uint v11;
  int v12;

  v10 = a3;
  v3 = 0;
  v4 = 0;
  for ( i = a2; v4 < v10; ++v4 )
  {
    v5 = GetAdrOfPkmnInParty(i, v4);
    v6 = GetPkmnData(v5, 0xB1u, 0);
    v11 = GetPkmnData(v5, 0xB2u, 0);
    v7 = GetPkmnData(v5, 0xAu, 0);
    if ( v6 != 4 && v11 != 4 && v7 != 7 )
    {
      v12 = 64;
      SetPkmnData((int)v5, 160, (ushort *)&v12);
    }
    else
    {
      ++v3;
    }
  }
  if ( v3 >= v10 )
    *(uchar *)(v8 + 31) = 1;
}

//----- (02238D14) --------------------------------------------------------
void __fastcall __spoils<R1,R2,R3,R12> Function_2238d14(int a1, uint *a2, int a3)
{
  int v3;
  int v4;
  int *v5;
  uint v6;
  uint v7;
  int v8;
  uint *i;
  int v10;
  uint v11;
  int v12;

  v10 = a3;
  v3 = 0;
  v4 = 0;
  for ( i = a2; v4 < v10; ++v4 )
  {
    v5 = GetAdrOfPkmnInParty(i, v4);
    v6 = GetPkmnData(v5, 0xB1u, 0);
    v11 = GetPkmnData(v5, 0xB2u, 0);
    v7 = GetPkmnData(v5, 0xAu, 0);
    if ( v6 != 10 && v11 != 10 && v7 != 41 )
    {
      v12 = 16;
      SetPkmnData((int)v5, 160, (ushort *)&v12);
    }
    else
    {
      ++v3;
    }
  }
  if ( v3 >= v10 )
    *(uchar *)(v8 + 31) = 1;
}

//----- (02238D8C) --------------------------------------------------------
int __fastcall Function_2238d8c(int a1, uint *a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;
  uint v8;
  int v9;
  int *v10;
  uint v11;
  uint v12;
  int v13;
  uint *v14;
  int v15;
  uint v16;
  int v17;

  v17 = a4;
  v13 = a1;
  v4 = a3;
  v14 = a2;
  v5 = 0;
  s32_div_f(*(ushort *)(a1 + 32), a3);
  result = v6 << 24;
  v8 = (uchar)v6;
  v9 = 0;
  if ( v4 > 0 )
  {
    while ( 1 )
    {
      v10 = GetAdrOfPkmnInParty(v14, v8);
      v15 = (int)v10;
      v11 = GetPkmnData(v10, 0xAu, 0);
      if ( v11 != 15 && v11 != 72 )
        break;
      result = (v8 + 1) << 24;
      v8 = (v8 + 1) & 0xFF;
      ++v5;
      if ( v8 >= v4 )
        v8 = 0;
      if ( ++v9 >= v4 )
        goto LABEL_8;
    }
    v12 = PRNG();
    v16 = (v12 >> 31) + __ROR4__((v12 << 30) - (v12 >> 31), 30) + 2;
    result = SetPkmnData(v15, 160, (ushort *)&v16);
  }
LABEL_8:
  if ( v5 >= v4 )
  {
    result = v13;
    *(uchar *)(v13 + 31) = 1;
  }
  return result;
}

//----- (02238E08) --------------------------------------------------------
int __fastcall Function_2238e08(int a1, uint *a2, int a3, int a4)
{
  int v4;
  int v5;
  uchar v6;
  uint v7;
  int result;
  int *v9;
  uint v10;
  uint v11;
  int v12;
  uint *v13;
  int v14;
  uint v15;
  int v16;
  int v17;

  v17 = a4;
  v12 = a1;
  v4 = a3;
  v13 = a2;
  v5 = 0;
  s32_div_f(*(ushort *)(a1 + 32), a3);
  v7 = v6;
  result = 0;
  v14 = 0;
  if ( v4 > 0 )
  {
    while ( 1 )
    {
      v9 = GetAdrOfPkmnInParty(v13, v7);
      v10 = GetPkmnData(v9, 0xB1u, 0);
      v15 = GetPkmnData(v9, 0xB2u, 0);
      v11 = GetPkmnData(v9, 0xAu, 0);
      if ( v10 != 15 && v15 != 15 && v11 != 40 )
        break;
      v7 = (v7 + 1) & 0xFF;
      ++v5;
      if ( v7 >= v4 )
        v7 = 0;
      result = v14 + 1;
      v14 = result;
      if ( result >= v4 )
        goto LABEL_9;
    }
    v16 = 32;
    result = SetPkmnData((int)v9, 160, (ushort *)&v16);
  }
LABEL_9:
  if ( v5 >= v4 )
  {
    result = v12;
    *(uchar *)(v12 + 31) = 1;
  }
  return result;
}

//----- (02238E9C) --------------------------------------------------------
int *__fastcall Function_2238e9c(int a1, uint *a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int v6;
  uint v7;
  int v8;
  int v9;
  int v10;
  int *result;
  int v12;
  int *v13;
  int v14;

  v14 = a4;
  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = Function_223c124(a1);
  if ( v7 >= 3 )
  {
    if ( v7 >= 6 )
    {
      v8 = 10;
      v9 = 35912504;
    }
    else
    {
      v8 = 20;
      v9 = 35912594;
    }
  }
  else
  {
    v8 = 8;
    v9 = 35912456;
  }
  s32_div_f(*(ushort *)(v4 + 32), v8);
  LOWORD(v10) = *(ushort *)(v9 + 2 * v10);
  result = &v14;
  v12 = 0;
  for ( LOWORD(v14) = v10; v12 < v6; ++v12 )
  {
    v13 = GetAdrOfPkmnInParty(v5, v12);
    result = (int *)SetPkmnData((int)v13, 6, (ushort *)&v14);
  }
  return result;
}

//----- (02238EF8) --------------------------------------------------------
int *__fastcall Function_2238ef8(int a1, uint *a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int v6;
  uint v7;
  int v8;
  int v9;
  int v10;
  int *result;
  int v12;
  int *v13;
  int v14;

  v14 = a4;
  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = Function_223c124(a1);
  if ( v7 >= 3 )
  {
    if ( v7 >= 6 )
    {
      v8 = 11;
      v9 = 35912546;
    }
    else
    {
      v8 = 13;
      v9 = 35912568;
    }
  }
  else
  {
    v8 = 11;
    v9 = 35912524;
  }
  s32_div_f(*(ushort *)(v4 + 32), v8);
  LOWORD(v10) = *(ushort *)(v9 + 2 * v10);
  result = &v14;
  v12 = 0;
  for ( LOWORD(v14) = v10; v12 < v6; ++v12 )
  {
    v13 = GetAdrOfPkmnInParty(v5, v12);
    result = (int *)SetPkmnData((int)v13, 6, (ushort *)&v14);
  }
  return result;
}

//----- (02238F54) --------------------------------------------------------
void __fastcall Function_2238f54(int a1, uint *a2, int a3, int a4)
{
  int v4;
  int v5;
  int *v6;
  uint v7;
  int v8;
  uint *i;
  int v10;
  int v11;

  v11 = a4;
  v4 = a3;
  v5 = 0;
  for ( i = a2; v5 < v4; ++v5 )
  {
    v6 = GetAdrOfPkmnInParty(i, v5);
    v7 = GetPkmnData(v6, 0xA1u, 0) + 3;
    if ( v7 > 0x64 )
    {
      ErrorHandler();
      v7 = 100;
    }
    v8 = GetPkmnData(v6, 5u, 0);
    v10 = GetBaseExpPts(v8, v7);
    SetPkmnData((int)v6, 8, (ushort *)&v10);
    Function_207418c(v6);
  }
}

//----- (02238FAC) --------------------------------------------------------
int __fastcall Function_2238fac(int result)
{
  *(uint *)(result + 20) = 1001;
  return result;
}

//----- (02238FB8) --------------------------------------------------------
int __fastcall Function_2238fb8(int result)
{
  *(uint *)(result + 20) = 2;
  return result;
}

//----- (02238FC0) --------------------------------------------------------
int __fastcall Function_2238fc0(int result)
{
  *(uint *)(result + 20) = 10;
  return result;
}

//----- (02238FC8) --------------------------------------------------------
int __fastcall Function_2238fc8(int result)
{
  *(uint *)(result + 20) = 5;
  return result;
}

//----- (02238FD0) --------------------------------------------------------
int __fastcall Function_2238fd0(int result)
{
  *(uint *)(result + 20) = 14;
  return result;
}

//----- (02238FD8) --------------------------------------------------------
int __fastcall Function_2238fd8(int result)
{
  *(uint *)(result + 20) = 1002;
  return result;
}

//----- (02238FE4) --------------------------------------------------------
int __fastcall Function_2238fe4(int result)
{
  uint v1;

  v1 = *(uchar *)(result + 28);
  if ( v1 < 7 )
    *(uchar *)(result + 28) = v1 + 1;
  return result;
}

//----- (02238FF0) --------------------------------------------------------
int __fastcall Function_2238ff0(int result)
{
  if ( *(uchar *)(result + 28) )
    --*(uchar *)(result + 28);
  return result;
}

//----- (02238FFC) --------------------------------------------------------
int __fastcall Function_2238ffc(int result)
{
  *(uchar *)(result + 18) = 1;
  return result;
}

//----- (02239004) --------------------------------------------------------
void Function_2239004()
{
  ;
}

//----- (02239008) --------------------------------------------------------
void Function_2239008()
{
  ;
}

//----- (0223900C) --------------------------------------------------------
void Function_223900c()
{
  ;
}

//----- (02239010) --------------------------------------------------------
void Function_2239010()
{
  ;
}

//----- (02239014) --------------------------------------------------------
int __fastcall Function_2239014(int a1)
{
  uint v1;
  int v2;
  int v3;

  v1 = *(ushort *)(a1 + 26);
  if ( *(uchar *)(a1 + 16) > 1u )
  {
    if ( v1 < 8 )
      v2 = *((uchar *)dword_223FC88 + v1);
    else
      v2 = 17;
  }
  else if ( v1 < 8 )
  {
    v2 = *((uchar *)dword_223FC7C + v1);
  }
  else
  {
    v2 = 6;
  }
  if ( !*(uchar *)(a1 + 16) )
  {
    v3 = *(ushort *)(a1 + 24);
    if ( v3 == 21 || v3 == 49 )
      v2 = 20;
  }
  return v2;
}

//----- (02239054) --------------------------------------------------------
int __fastcall Function_2239054(uint *a1, uint *a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int *v6;
  int *v7;
  int v9;

  v9 = a4;
  v4 = a2;
  v5 = a4;
  v6 = GetAdrOfPkmnInParty(a1, a3);
  LOWORD(v9) = GetPkmnData(v6, 6u, 0);
  v7 = GetAdrOfPkmnInParty(v4, v5);
  return SetPkmnData((int)v7, 6, (ushort *)&v9);
}

//----- (02239080) --------------------------------------------------------
int __fastcall Function_2239080(int a1)
{
  int v1;

  v1 = Function_222fc00(a1);
  Function_2005748(v1);
  return 0;
}

//----- (02239090) --------------------------------------------------------
int __fastcall Function_2239090(int a1)
{
  int v1;

  v1 = Function_222fc00(a1);
  Function_20057a4(v1, 0);
  return 0;
}

//----- (022390A0) --------------------------------------------------------
int __fastcall Function_22390a0(int a1)
{
  int v1;

  v1 = a1;
  *(ushort *)(a1 + 120) = Function_222fc00(a1);
  Function_222e974(v1, (int)Function_22390c0);
  return 1;
}

//----- (022390C0) --------------------------------------------------------
BOOL __fastcall Function_22390c0(int a1)
{
  return Function_20057d4(*(ushort *)(a1 + 120)) == 0;
}

//----- (022390D8) --------------------------------------------------------
int __fastcall Function_22390d8(int a1)
{
  int v1;

  v1 = Function_222ea48(a1);
  Function_2006150(v1);
  return 0;
}

//----- (022390E8) --------------------------------------------------------
int __fastcall Function_22390e8(int a1)
{
  Function_222e974(a1, (int)Function_22390f8);
  return 1;
}

//----- (022390F8) --------------------------------------------------------
BOOL Function_22390f8()
{
  return Function_20061e4() == 0;
}

//----- (0223910C) --------------------------------------------------------
int __fastcall Function_223910c(int a1)
{
  int v1;

  v1 = Function_222ea48(a1);
  Function_200549c(v1);
  return 0;
}

//----- (0223911C) --------------------------------------------------------
int __fastcall Function_223911c(int a1)
{
  int v1;

  Function_222ea48(a1);
  v1 = Function_20041fc();
  Function_20055d0(v1, 0);
  return 0;
}

//----- (02239130) --------------------------------------------------------
void __fastcall Function_2239130(int **a1)
{
  int **v1;
  int v2;

  v1 = a1;
  Function_209b970(**a1);
  v2 = Function_222ea48((int)v1);
  Function_222fc00((int)v1);
  Function_222fbe4((int)v1);
  Function_209b978(**v1);
  if ( v2 > 59 )
    JUMPOUT((char *)&off_2239174 + 60);
  if ( v2 - 33 < 0 )
    JUMPOUT((char *)&off_2239174 + 54);
  JUMPOUT(__CS__, *((short *)&off_2239174 + v2 - 33) + 35885430);
}

//----- (0223927C) --------------------------------------------------------
uint __fastcall Function_223927c(uchar *a1, int a2)
{
  uint result;

  if ( a2 == 2 )
    return (uint)(uchar)a1[16] << 24 >> 29;
  if ( a2 == 1 )
  {
    if ( a1[15] == 2 )
    {
      result = *((ushort *)dword_223FC94 + ((uint)(uchar)a1[16] << 24 >> 29));
    }
    else if ( a1[18] )
    {
      result = 97;
    }
    else
    {
      result = 0;
    }
  }
  else if ( a1[17] )
  {
    result = 97;
  }
  else
  {
    result = 0;
  }
  return result;
}

//----- (022392C0) --------------------------------------------------------
int __fastcall Function_22392c0(int **a1)
{
  int **v1;
  int *v2;
  int v3;
  int v4;
  int v5;
  int v7;

  v1 = a1;
  Function_209b970(**a1);
  v2 = v1[7];
  v1[7] = (int *)((char *)v2 + 1);
  v3 = *(uchar *)v2;
  v4 = Function_209b978(**v1);
  v5 = v4;
  if ( !v4 )
    return 0;
  v7 = Function_223a790(*(uchar *)(v4 + 15));
  Function_223310c(v1, (ushort *)(v5 + 144 + 272 * v3), v7);
  return 1;
}

//----- (02239300) --------------------------------------------------------
int __fastcall Function_2239300(int **a1)
{
  uint *v1;

  v1 = (uint *)Function_209b978(**a1);
  Function_204a32c(v1);
  return 0;
}

//----- (02239314) --------------------------------------------------------
int __fastcall Function_2239314(int **a1)
{
  int **v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  Function_209b970(**a1);
  v2 = Function_209b978(**v1);
  v3 = Function_223a580();
  v4 = v3;
  *(uint *)(v2 + 2256) = v3;
  Function_2004550(5u, 0x45Fu);
  Function_209b988(**v1, (int *)&JumpTable_BattleScreen, v4, 0, 0);
  return 1;
}

//----- (02239364) --------------------------------------------------------
int __fastcall Function_2239364(int **a1)
{
  int v1;
  int v2;
  ushort *v3;
  int *v4;

  v1 = (int)a1;
  v2 = Function_209b978(**a1);
  v3 = (ushort *)Function_222fbe4(v1);
  v4 = *(int **)(v2 + 2256);
  *(uint *)(v2 + 2252) = Function_2052868(v4[5]);
  *v3 = *(uint *)(v2 + 2252);
  Function_20520a4(v4);
  return 0;
}

//----- (0223939C) --------------------------------------------------------
int __fastcall Function_223939c(int **a1)
{
  int **v1;
  int v2;
  ushort *v3;
  int v4;
  int v5;
  int result;

  v1 = a1;
  Function_209b970(**a1);
  v2 = Function_222fc00((int)v1);
  Function_222fc00((int)v1);
  v3 = (ushort *)Function_222fbe4((int)v1);
  v4 = Function_209b978(**v1);
  if ( v2 == 2 )
    Function_223a734();
  else
    ErrorHandler();
  v5 = Function_203608c();
  if ( Function_2036614(v5, v4 + 2110) == 1 )
  {
    *v3 = 1;
    result = 0;
  }
  else
  {
    *v3 = 0;
    result = 1;
  }
  return result;
}

//----- (02239400) --------------------------------------------------------
int __fastcall Function_2239400(int a1)
{
  int v1;
  short v2;
  short v3;

  v1 = a1;
  v2 = Function_222ea48(a1);
  v3 = Function_222ea48(v1);
  *(ushort *)(v1 + 120) = v2;
  *(ushort *)(v1 + 122) = v3;
  Function_222e974(v1, (int)Function_223942c);
  return 1;
}

//----- (0223942C) --------------------------------------------------------
BOOL __fastcall Function_223942c(int **a1)
{
  int **v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = Function_209b970(**a1);
  v3 = Function_209b978(**v1);
  v4 = *((ushort *)v1 + 61);
  return Function_2239464(v1, v3, *(uint *)(v2 + 8), *((ushort *)v1 + 60)) == 1;
}

//----- (02239464) --------------------------------------------------------
int __fastcall Function_2239464(int *a1, int a2, int a3, int a4, ushort a5)
{
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  ushort *v11;

  v5 = a1;
  v6 = a2;
  v7 = a4;
  v8 = Function_203608c();
  v9 = Function_203664c(1 - v8);
  if ( !v9 )
    return 0;
  v11 = (ushort *)Function_222fc14(v5, a5);
  if ( v7 == 2 )
    *v11 = Function_223a750(v6, v9);
  else
    ErrorHandler();
  return 1;
}

//----- (022394A4) --------------------------------------------------------
int __fastcall Function_22394a4(int a1, int a2)
{
  int v2;
  int result;
  int v4;
  int v5;
  int v6;
  short *v7;
  int *v8;
  int v9;
  int *v10;
  short v11;
  short v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v2 = a1;
  switch ( *(uchar *)(a1 + 15) )
  {
    case 2:
    case 3:
    case 6:
      v4 = *(uint *)(a1 + 4);
      Function_223a0c4(
        a1,
        a1 + 120,
        *(ushort *)(a1 + 4 * (*(uchar *)(a1 + 12) - 1) + 62),
        *(uchar *)(a1 + 14));
      v5 = *(uchar *)(v2 + 14);
      v6 = 0;
      if ( v5 > 0 )
      {
        v7 = (short *)(v2 + 168);
        v8 = &v16;
        v9 = v2;
        v10 = &v15;
        do
        {
          v11 = *v7;
          ++v6;
          v7 += 28;
          *(ushort *)v8 = v11 & 0x7FF;
          v12 = *(ushort *)(v9 + 170);
          v8 = (int *)((char *)v8 + 2);
          v9 += 56;
          *(ushort *)v10 = v12;
          v5 = *(uchar *)(v2 + 14);
          v10 = (int *)((char *)v10 + 2);
        }
        while ( v6 < v5 );
      }
      v13 = *(uint *)(v2 + 4);
      result = Function_223a0c4(
                 v2,
                 v2 + 392,
                 *(ushort *)(v2 + 2 * (2 * (*(uchar *)(v2 + 12) - 1) + 1) + 62),
                 v5);
      break;
    case 4:
    case 5:
      result = Function_223a30c(a2, a1 + 120, (*(uchar *)(a1 + 12) - 1) & 0xFF);
      break;
    default:
      v14 = *(uint *)(a1 + 4);
      result = Function_223a0c4(
                 a1,
                 a1 + 120,
                 *(ushort *)(a1 + 2 * (*(uchar *)(a1 + 12) - 1) + 62),
                 *(uchar *)(a1 + 14));
      break;
  }
  return result;
}

//----- (02239588) --------------------------------------------------------
int __fastcall Function_2239588(int a1, int a2)
{
  return Function_222e10c(*(ushort *)(a1 + 272 * a2 + 124) & 0xFF);
}

//----- (022395A0) --------------------------------------------------------
int __fastcall Function_22395a0(int result, char a2)
{
  *(uchar *)(result + 16) = 2 * a2 & 7 | *(uchar *)(result + 16) & 0xF9;
  return result;
}

//----- (022395B4) --------------------------------------------------------
int __fastcall Function_22395b4(int a1)
{
  int v1;

  v1 = a1;
  ++*(uchar *)(a1 + 13);
  if ( *(uchar *)(a1 + 15) != 6 )
    *(uint *)(a1 + 8) = Function_206bff0(*(uint *)(a1 + 8));
  return (uchar)++*(uchar *)(v1 + 12);
}

//----- (022395D8) --------------------------------------------------------
int __fastcall Function_22395d8(int a1)
{
  uint v1;
  int result;

  v1 = *(ushort *)(a1 + 26) + *(uchar *)(a1 + 13);
  result = 0xFFFF;
  if ( v1 <= 0xFFFF )
    result = (ushort)v1;
  return result;
}

//----- (022395F0) --------------------------------------------------------
int __fastcall Function_22395f0(int **a1)
{
  int **v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = Function_209b970(**a1);
  v3 = Function_2239c58(*(uint *)(v2 + 8));
  Function_209b980((uint **)**v1, v3);
  return 0;
}

//----- (02239610) --------------------------------------------------------
int __fastcall Function_2239610(int **a1)
{
  int v1;

  v1 = Function_209b978(**a1);
  Function_2239c7c(v1);
  return 0;
}

//----- (02239624) --------------------------------------------------------
int __fastcall Function_2239624(int a1)
{
  int **v1;
  int v2;
  int v3;
  int v4;
  ushort *v5;
  int v6;

  v1 = (int **)a1;
  v2 = Function_222fc00(a1);
  v3 = Function_222fc00((int)v1);
  v4 = Function_222fc00((int)v1);
  v5 = (ushort *)Function_222fbe4((int)v1);
  v6 = Function_209b978(**v1);
  *v5 = Function_2239c88(v6, v2, v3, v4);
  return 1;
}

//----- (02239660) --------------------------------------------------------
int __fastcall Function_2239660(int a1)
{
  int v1;

  v1 = a1;
  *(ushort *)(a1 + 120) = Function_222ea48(a1);
  Function_222e974(v1, (int)Function_2239680);
  return 1;
}

//----- (02239680) --------------------------------------------------------
int __fastcall Function_2239680(int **a1)
{
  int v1;

  v1 = Function_209b978(**a1);
  if ( *(uchar *)(v1 + 111) < 2u )
    return 0;
  *(uchar *)(v1 + 111) = 0;
  return 1;
}

//----- (022396A4) --------------------------------------------------------
int __fastcall Function_22396a4(int a1)
{
  int **v1;
  int v2;
  ushort *v3;

  v1 = (int **)a1;
  v2 = Function_222fc00(a1);
  v3 = (ushort *)Function_222fbe4((int)v1);
  *v3 = v2 == *(uchar *)(Function_209b978(**v1) + 110);
  return 0;
}

//----- (022396D4) --------------------------------------------------------
int __fastcall Function_22396d4(int a1)
{
  int **v1;
  int v2;
  int v3;
  int v4;

  v1 = (int **)a1;
  Function_222fc00(a1);
  v2 = Function_222fc00((int)v1);
  v3 = Function_222fbe4((int)v1);
  v4 = Function_209b978(**v1);
  *(uint *)(v4 + 152) = *(uint *)(Function_209b970(**v1) + 40);
  *(uint *)(v4 + 176) = v3;
  Function_2239cd0(**v1, v4, v2);
  return 1;
}

//----- (0223971C) --------------------------------------------------------
int __fastcall Function_223971c(int a1)
{
  int **v1;
  ushort *v2;
  ushort *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uchar *v9;
  int result;

  v1 = (int **)a1;
  v2 = (ushort *)Function_222fbe4(a1);
  v3 = (ushort *)Function_222fbe4((int)v1);
  v4 = Function_209b978(**v1);
  v5 = v4;
  v6 = *(uint *)(v4 + 168);
  v7 = *(uchar *)(*(uint *)(v4 + 168) + 34);
  if ( v7 == 7 )
  {
    v8 = 0;
    *v2 = 255;
    do
    {
      v9 = (uchar *)(v5 + v8++ + 161);
      *v9 = 0;
    }
    while ( v8 < 2 );
  }
  else if ( v7 == 6 )
  {
    *v2 = *(uchar *)(v6 + 44);
    --*v2;
    *v3 = *(uchar *)(*(uint *)(v5 + 168) + 45);
    if ( *v3 )
      --*v3;
  }
  free(*(uint *)(v5 + 168));
  result = 0;
  *(uint *)(v5 + 168) = 0;
  return result;
}

//----- (02239794) --------------------------------------------------------
int __fastcall Function_2239794(int a1)
{
  int **v1;
  ushort *v2;

  v1 = (int **)a1;
  v2 = (ushort *)Function_222fbe4(a1);
  *v2 = *(uchar *)(Function_209b978(**v1) + 89);
  return 0;
}

//----- (022397B0) --------------------------------------------------------
int __fastcall Function_22397b0(int a1)
{
  int **v1;
  uchar *v2;
  uchar *v3;
  char v4;
  int v5;
  ushort *v6;
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
  uint v18;
  int v19;
  uchar *v20;
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
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  uchar *v55;

  v1 = (int **)a1;
  v2 = *(uchar **)(a1 + 28);
  v3 = v2 + 1;
  *(uint *)(a1 + 28) = v2 + 1;
  v4 = *v2;
  v2 += 2;
  *(uint *)(a1 + 28) = v2;
  v5 = *v3;
  *(uint *)(a1 + 28) = v2 + 1;
  v6 = (ushort *)Function_222fbe4(a1);
  v7 = Function_209b978(**v1);
  v8 = Function_209b970(**v1);
  switch ( v4 )
  {
    case 0:
      Function_209ba80(v7);
      break;
    case 1:
      *v6 = *(ushort *)(v7 + 134);
      break;
    case 2:
      switch ( v5 )
      {
        case 1:
          *v6 = 0;
          v9 = *(ushort *)(v7 + 118);
          if ( v9 == *(ushort *)(v7 + 134) || v9 == *(ushort *)(v7 + 136) )
            ++*v6;
          v10 = *(ushort *)(v7 + 120);
          if ( v10 == *(ushort *)(v7 + 134) || v10 == *(ushort *)(v7 + 136) )
            *v6 += 2;
          break;
        case 5:
          *v6 = *(ushort *)(v7 + 118) != *(ushort *)(v7 + 134);
          break;
        case 4:
        case 6:
          *v6 = 0;
          v11 = *(ushort *)(v7 + 118);
          if ( v11 == *(ushort *)(v7 + 134) || v11 == *(ushort *)(v7 + 136) )
            ++*v6;
          v12 = *(ushort *)(v7 + 120);
          if ( v12 == *(ushort *)(v7 + 134) || v12 == *(ushort *)(v7 + 136) )
            *v6 += 2;
          break;
      }
      break;
    case 3:
      v13 = LoadVariableAreaAdress_17(*(uint *)(v8 + 8));
      v14 = Function_205e6a8(0x6Au);
      *v6 = Function_2030698(v13, 106, v14);
      break;
    case 4:
      v15 = LoadVariableAreaAdress_17(*(uint *)(v8 + 8));
      Function_205e55c(3u);
      v17 = v16;
      Function_205e55c(3u);
      v19 = Function_205e6a8(v18);
      *v6 = Function_2030698(v15, v17, v19);
      break;
    case 5:
      *v6 = *(ushort *)(v7 + 2 * v5 + 118);
      break;
    case 6:
      v20 = (uchar *)Function_203026c(*(uint *)(v8 + 8));
      Function_204fa50(*(uint *)(v8 + 8), v20, 3u);
      break;
    case 7:
      *(uchar *)(v7 + 160) = v5;
      break;
    case 8:
      *v6 = *(ushort *)(v7 + 116);
      break;
    case 9:
      *v6 = *(uchar *)(v7 + 160);
      break;
    case 10:
      *v6 = *(uchar *)(v7 + 113);
      break;
    case 11:
      *v6 = 1;
      v21 = Function_223c264(*(uchar *)(v7 + 160));
      v22 = LoadVariableAreaAdress_17(*(uint *)v7);
      v23 = Function_205e6a8(v21);
      if ( Function_2030698(v22, v21, v23) != *(ushort *)(v7 + 114) )
      {
        v24 = LoadVariableAreaAdress_17(*(uint *)v7);
        v25 = Function_205e6a8(v21);
        Function_20306e4(v24, v21, v25, 0);
        v26 = Function_223c29c(*(uchar *)(v7 + 160));
        v27 = LoadVariableAreaAdress_17(*(uint *)v7);
        v28 = Function_205e6a8(v26);
        Function_20306e4(v27, v26, v28, 0);
        *v6 = 0;
      }
      break;
    case 12:
      v29 = Function_223c29c(*(uchar *)(v7 + 160));
      v30 = LoadVariableAreaAdress_17(*(uint *)v7);
      v31 = Function_205e6a8(v29);
      *v6 = Function_2030698(v30, v29, v31);
      if ( *v6 )
      {
        v52 = LoadVariableAreaAdress_17(*(uint *)v7);
        v53 = Function_205e6a8(v29);
        Function_20306e4(v52, v29, v53, 0);
      }
      else
      {
        v32 = Function_223c264(*(uchar *)(v7 + 160));
        v33 = LoadVariableAreaAdress_17(*(uint *)v7);
        v34 = Function_205e6a8(v32);
        Function_20306e4(v33, v32, v34, 0);
        if ( *(uchar *)(v7 + 160) == 1 )
        {
          v35 = Function_202d750(*(uint *)v7);
          Function_202d3b4(v35, 6, 2);
        }
        if ( *(uchar *)(v7 + 160) == 4 )
        {
          v36 = LoadVariableAreaAdress_17(*(uint *)v7);
          v37 = Function_205e6a8(v32);
          Function_20306e4(v36, 136, v37, 0);
          v38 = LoadVariableAreaAdress_17(*(uint *)v7);
          v39 = Function_205e6a8(v32);
          Function_20306e4(v38, 137, v39, 0);
        }
        if ( *(uchar *)(v7 + 160) == 2 )
        {
          v40 = LoadVariableAreaAdress_17(*(uint *)v7);
          v42 = Function_205e488(0, 3u, v41);
          v44 = Function_205e488(0, 3u, v43);
          v45 = Function_205e6a8(v44);
          Function_20306e4(v40, v42, v45, 0);
        }
        if ( *(uchar *)(v7 + 160) == 3 )
        {
          v46 = LoadVariableAreaAdress_17(*(uint *)v7);
          v48 = Function_205e488(1, 3u, v47);
          v50 = Function_205e488(1, 3u, v49);
          v51 = Function_205e6a8(v50);
          Function_20306e4(v46, v48, v51, 0);
        }
      }
      break;
    case 13:
      v54 = 0;
      do
      {
        v55 = (uchar *)(v7 + v54++ + 161);
        *v55 = 0;
      }
      while ( v54 < 2 );
      *(uchar *)(v7 + 159) = 0;
      break;
    default:
      return 0;
  }
  return 0;
}

//----- (02239B14) --------------------------------------------------------
int __fastcall Function_2239b14(int **a1)
{
  int **v1;
  int v2;
  int v3;
  int *v4;
  char *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  char *v11;
  char *v12;
  int v13;
  short v14;
  char v15;
  int v16;
  int v17;
  int result;
  char v19;
  char v20;
  short v21;
  short v22;

  v1 = a1;
  v2 = Function_209b970(**a1);
  v3 = Function_209b978(**v1);
  v4 = (int *)v3;
  v5 = &v19;
  v6 = 22;
  do
  {
    v7 = *v4;
    v8 = v4[1];
    v4 += 2;
    *(uint *)v5 = v7;
    *((uint *)v5 + 1) = v8;
    v5 += 8;
    --v6;
  }
  while ( v6 );
  *(uint *)v5 = *v4;
  Function_2239c7c(v3);
  v9 = Function_204a124(*(uint *)(v2 + 8), 0, 6);
  Function_209b980((uint **)**v1, v9);
  if ( *(uchar *)(v9 + 15) == 6 )
    Function_222e630(*(uint *)(v2 + 8));
  v10 = 0;
  if ( (int)*(uchar *)(v9 + 14) > 0 )
  {
    v11 = &v19;
    v12 = &v19;
    v13 = v9;
    do
    {
      *(uchar *)(v9 + v10++ + 42) = (v11++)[106];
      *(ushort *)(v13 + 46) = *((ushort *)v12 + 59);
      v14 = *((ushort *)v12 + 63);
      v12 += 2;
      *(ushort *)(v13 + 54) = v14;
      v13 += 2;
    }
    while ( v10 < *(uchar *)(v9 + 14) );
  }
  *(ushort *)(v9 + 22) = v21;
  *(ushort *)(v9 + 24) = v22;
  v15 = v20;
  *(uchar *)(v9 + 18) = v20;
  *(uchar *)(v9 + 16) = *(uchar *)(v9 + 16) & 0x1F | 32 * (v15 + 5);
  if ( !Function_203608c() )
  {
    v16 = *(uint *)(v2 + 8);
    Function_204a4c8(v9);
  }
  v17 = LoadPokePartyAdress(*(uint *)(v2 + 8));
  HealPokemon(v17);
  Function_209ba80(v9);
  result = 0;
  *(uchar *)(v9 + 2260) = 0;
  return result;
}

//----- (02239BF4) --------------------------------------------------------
int __fastcall Function_2239bf4(int a1)
{
  int **v1;
  ushort *v2;
  int v3;
  int v4;
  int v5;
  uint v6;

  v1 = (int **)a1;
  v2 = (ushort *)Function_222fbe4(a1);
  v3 = Function_209b978(**v1);
  *v2 = Function_209bb08(v3, v4, v5, v6);
  return 1;
}

//----- (02239C10) --------------------------------------------------------
int __fastcall Function_2239c10(int a1)
{
  Function_222e974(a1, (int)Function_2239c20);
  return 1;
}

//----- (02239C20) --------------------------------------------------------
int __fastcall Function_2239c20(int **a1)
{
  int v1;

  v1 = Function_209b978(**a1);
  if ( *(uchar *)(v1 + 2260) < 2u )
    return 0;
  *(uchar *)(v1 + 2260) = 0;
  return 1;
}

//----- (02239C44) --------------------------------------------------------
int __fastcall Function_2239c44(int **a1)
{
  uint *v1;

  v1 = (uint *)Function_209b978(**a1);
  Function_204a32c(v1);
  return 0;
}

//----- (02239C58) --------------------------------------------------------
int __fastcall Function_2239c58(int a1)
{
  int v1;
  int result;

  v1 = a1;
  dword_2241AC0[4] = malloc(0xBu, 180);
  MI_CpuFill8((ushort *)dword_2241AC0[4], 0, 0xB4u);
  result = dword_2241AC0[4];
  *(uint *)dword_2241AC0[4] = v1;
  return result;
}

//----- (02239C7C) --------------------------------------------------------
int __fastcall Function_2239c7c(int result)
{
  if ( result )
    result = free(result);
  return result;
}

//----- (02239C88) --------------------------------------------------------
int *__fastcall Function_2239c88(int *result, char a2, short a3, int a4)
{
  switch ( a2 )
  {
    case 0:
      result = (int *)Function_209bba4((int)result);
      break;
    case 1:
      result = (int *)Function_209bc1c((int)result, a3);
      break;
    case 2:
      result = (int *)Function_209bc64(result, a3, a4);
      break;
    case 4:
      result = (int *)Function_209bd68((int)result, a3);
      break;
    case 5:
      result = (int *)Function_209bdb0((int)result, a3);
      break;
    default:
      return result;
  }
  return result;
}

//----- (02239CD0) --------------------------------------------------------
int __fastcall Function_2239cd0(int result, int a2, char a3)
{
  switch ( a3 )
  {
    case 0:
      result = Function_2239d1c(result, a2, *(uint *)(a2 + 152), 11);
      break;
    case 1:
      result = Function_2239f38(result, a2, *(uint *)(a2 + 152), 11);
      break;
    case 2:
      result = Function_2239fb0(result, a2, *(uint *)(a2 + 152), 11);
      break;
    case 3:
      result = Function_223a090(result, a2, *(uint *)(a2 + 152), 11);
      break;
    default:
      return result;
  }
  return result;
}

//----- (02239D1C) --------------------------------------------------------
int __fastcall Function_2239d1c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  uint v7;
  char v8;
  uchar *v9;
  int v10;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  *(uint *)(a2 + 168) = malloc(0xBu, 64);
  MIi_CpuClearFast(0, *(uint **)(v4 + 168), 0x40u);
  **(uint **)(v4 + 168) = LoadPokePartyAdress(*(uint *)v4);
  *(uint *)(*(uint *)(v4 + 168) + 4) = LoadVariableAreaAdressItemList(*(uint *)v4);
  *(uint *)(*(uint *)(v4 + 168) + 8) = LoadVariableAreaAdress_f(*(uint *)v4);
  *(uint *)(*(uint *)(v4 + 168) + 12) = LoadPlayerDataAdress(*(uint *)v4);
  *(uchar *)(*(uint *)(v4 + 168) + 33) = 0;
  v6 = *(uchar *)(v4 + 160);
  switch ( v6 )
  {
    case 1:
      *(uchar *)(*(uint *)(v4 + 168) + 32) = 17;
      break;
    case 5:
      *(uchar *)(*(uint *)(v4 + 168) + 32) = 22;
      break;
    case 4:
      *(uchar *)(*(uint *)(v4 + 168) + 32) = 23;
      break;
    case 6:
      *(uchar *)(*(uint *)(v4 + 168) + 32) = 23;
      break;
    default:
      ErrorHandler();
      break;
  }
  *(uint *)(*(uint *)(v4 + 168) + 28) = v5;
  *(uchar *)(*(uint *)(v4 + 168) + 34) = *(uchar *)(v4 + 159);
  v7 = 0;
  do
  {
    v8 = *(uchar *)(v4 + v7 + 161);
    v9 = (uchar *)(*(uint *)(v4 + 168) + v7 + 44);
    v7 = (v7 + 1) & 0xFF;
    *v9 = v8;
  }
  while ( v7 < 2 );
  v10 = *(uchar *)(v4 + 160);
  switch ( v10 )
  {
    case 1:
      *(uchar *)(*(uint *)(v4 + 168) + 50) = *(uchar *)(*(uint *)(v4 + 168) + 50) & 0xF0 | 2;
      *(uchar *)(*(uint *)(v4 + 168) + 50) = *(uchar *)(*(uint *)(v4 + 168) + 50) & 0xF | 0x20;
      *(uchar *)(*(uint *)(v4 + 168) + 51) = 100;
      break;
    case 5:
      *(uchar *)(*(uint *)(v4 + 168) + 50) = *(uchar *)(*(uint *)(v4 + 168) + 50) & 0xF0 | 1;
      *(uchar *)(*(uint *)(v4 + 168) + 50) = *(uchar *)(*(uint *)(v4 + 168) + 50) & 0xF | 0x10;
      *(uchar *)(*(uint *)(v4 + 168) + 51) = 30;
      break;
    case 4:
      *(uchar *)(*(uint *)(v4 + 168) + 50) = *(uchar *)(*(uint *)(v4 + 168) + 50) & 0xF0 | 2;
      *(uchar *)(*(uint *)(v4 + 168) + 50) = *(uchar *)(*(uint *)(v4 + 168) + 50) & 0xF | 0x20;
      *(uchar *)(*(uint *)(v4 + 168) + 51) = 100;
      break;
    case 6:
      *(uchar *)(*(uint *)(v4 + 168) + 50) = *(uchar *)(*(uint *)(v4 + 168) + 50) & 0xF0 | 2;
      *(uchar *)(*(uint *)(v4 + 168) + 50) = *(uchar *)(*(uint *)(v4 + 168) + 50) & 0xF | 0x20;
      *(uchar *)(*(uint *)(v4 + 168) + 51) = 100;
      break;
    default:
      ErrorHandler();
      break;
  }
  return Function_209b988(v3, (int *)&Unknown_20f1e88, *(uint *)(v4 + 168), 0, 0);
}

//----- (02239F38) --------------------------------------------------------
ushort *__fastcall Function_2239f38(int a1, int a2, int a3, uint a4)
{
  int v4;
  int v5;
  int v6;
  ushort *result;

  v4 = a2;
  v5 = *(uint *)(a2 + 168);
  v6 = *(uchar *)(*(uint *)(a2 + 168) + 34);
  if ( v6 == 6 )
  {
    result = *(ushort **)(v4 + 176);
    *result = 4;
    *(uchar *)(v4 + 157) = 4;
  }
  else if ( v6 == 7 )
  {
    result = *(ushort **)(v4 + 176);
    *result = 4;
    *(uchar *)(v4 + 157) = 4;
  }
  else
  {
    MI_CpuCopy8(v5 + 44, v4 + 161, 2u, a4);
    *(uchar *)(v4 + 159) = *(uchar *)(*(uint *)(v4 + 168) + 34);
    free(*(uint *)(v4 + 168));
    *(uint *)(v4 + 168) = 0;
    result = *(ushort **)(v4 + 176);
    *result = 2;
    *(uchar *)(v4 + 157) = 2;
  }
  return result;
}

//----- (02239FB0) --------------------------------------------------------
int __fastcall Function_2239fb0(int a1, int a2, int a3, uint a4)
{
  int v4;
  int v5;
  int v6;

  v4 = a1;
  v5 = a2;
  *(uint *)(a2 + 172) = malloc2(a4, 48);
  MI_CpuFill8(*(ushort **)(v5 + 172), 0, 0x30u);
  *(uint *)(*(uint *)(v5 + 172) + 4) = LoadPlayerDataAdress(*(uint *)v5);
  **(uint **)(v5 + 172) = LoadPokePartyAdress(*(uint *)v5);
  *(uint *)(*(uint *)(v5 + 172) + 28) = Function_207a274(*(uint *)v5);
  *(uint *)(*(uint *)(v5 + 172) + 44) = Function_208c324(*(uint *)v5);
  *(uchar *)(*(uint *)(v5 + 172) + 17) = 1;
  *(uchar *)(*(uint *)(v5 + 172) + 20) = *(uchar *)(v5 + 159);
  *(uchar *)(*(uint *)(v5 + 172) + 19) = GetNrOfPkmnInParty(**(uint **)(v5 + 172));
  *(ushort *)(*(uint *)(v5 + 172) + 24) = 0;
  *(uchar *)(*(uint *)(v5 + 172) + 18) = 0;
  *(uint *)(*(uint *)(v5 + 172) + 32) = LoadVariableAreaAdress_18(*(uint *)v5);
  Function_208d720(*(uint *)(v5 + 172), (int)dword_223FCA0);
  v6 = LoadTrainerDataAdress(*(uint *)v5);
  Function_208e9c0(*(uint *)(v5 + 172), v6);
  return Function_209b988(v4, (int *)&Unknown_20f410c, *(uint *)(v5 + 172), 0, 0);
}

//----- (0223A090) --------------------------------------------------------
ushort *__fastcall Function_223a090(int a1, int a2)
{
  int v2;
  ushort *result;

  v2 = a2;
  *(uchar *)(a2 + 159) = *(uchar *)(*(uint *)(a2 + 172) + 20);
  free(*(uint *)(a2 + 172));
  *(uint *)(v2 + 172) = 0;
  result = *(ushort **)(v2 + 176);
  *result = 0;
  *(uchar *)(v2 + 157) = 0;
  return result;
}

//----- (0223A0C4) --------------------------------------------------------
int __fastcall Function_223a0c4(int a1, int a2, uint a3, uchar a4, int a5, int a6, int a7, uint a8)
{
  int v8;
  int v9;
  uint v10;
  uchar v11;
  int v12;
  ushort *v13;
  int v14;

  v8 = a1;
  v9 = a2;
  v10 = a3;
  v11 = a4;
  v12 = Function_223a77c(*(uchar *)(a1 + 15));
  v13 = Function_222dd04(v9, v10, a8, v12);
  v14 = Function_223a118(v8, v13, v10, v9 + 48, v11, a5, a6, a7, a8);
  free((int)v13);
  return v14;
}

//----- (0223A118) --------------------------------------------------------
int __fastcall Function_223a118(int a1, int a2, uint a3, int a4, uchar a5, ushort *a6, ushort *a7, int a8, int a9)
{
  int v9;
  int v10;
  uint v11;
  int v12;
  int v13;
  int *v14;
  int v15;
  int v16;
  ushort *v17;
  int *v18;
  int v19;
  int v20;
  ushort *v21;
  uint v22;
  int v23;
  char *v24;
  int v26;
  int v27;
  char *v28;
  char *v29;
  int v30;
  uint v31;
  int v32;
  int v33;
  char *v34;
  char *v35;
  int v36;
  int v37;
  int v38;
  uint v39;
  int v40;
  int v41;
  char v42;
  short v43;
  char v44;
  short v45;
  char v46;
  char v47;

  v9 = a1;
  v31 = a3;
  v30 = a2;
  v32 = a4;
  v36 = 0;
  if ( a5 > 4u )
    ErrorHandler();
  v10 = 0;
  v37 = 0;
  if ( a5 )
  {
    v34 = &v47;
    while ( 1 )
    {
      v11 = Function_204aec0(v9);
      s32_div_f(v11, *(ushort *)(v30 + 2));
      v38 = *(ushort *)(v30 + (2 * v12 & 0x1FF) + 4);
      v13 = Function_223a768(*(uchar *)(v9 + 15));
      Function_222dcf4((int)&v42, v38, v13);
      v41 = 0;
      if ( v10 > 0 )
      {
        v14 = (int *)&v47;
        do
        {
          v15 = Function_223a768(*(uchar *)(v9 + 15));
          Function_222dcf4((int)&v44, *v14, v15);
          if ( *(ushort *)&v44 == *(ushort *)&v42 )
            break;
          ++v14;
          ++v41;
        }
        while ( v41 < v10 );
      }
      if ( v41 != v10 )
        goto LABEL_33;
      if ( a6 )
      {
        v16 = 0;
        if ( (int)a5 > 0 )
        {
          v17 = a6;
          do
          {
            if ( *(ushort *)&v42 == *v17 )
              break;
            ++v16;
            ++v17;
          }
          while ( v16 < a5 );
        }
        if ( v16 != a5 )
          goto LABEL_33;
      }
      if ( v37 >= 50 )
        break;
      v33 = 0;
      if ( v10 > 0 )
      {
        v18 = (int *)&v47;
        do
        {
          v19 = Function_223a768(*(uchar *)(v9 + 15));
          Function_222dcf4((int)&v44, *v18, v19);
          if ( v45 && v45 == v43 )
            break;
          ++v18;
          ++v33;
        }
        while ( v33 < v10 );
      }
      if ( v33 == v10 )
      {
        if ( !a7 )
          break;
        v20 = 0;
        if ( (int)a5 > 0 )
        {
          v21 = a7;
          do
          {
            if ( v43 == *v21 && *v21 )
              break;
            ++v20;
            ++v21;
          }
          while ( v20 < a5 );
        }
        if ( v20 == a5 )
          break;
        ++v37;
      }
      else
      {
        ++v37;
      }
LABEL_33:
      if ( v10 == a5 )
        goto LABEL_34;
    }
    ++v10;
    *(uint *)v34 = v38;
    v34 += 4;
    goto LABEL_33;
  }
LABEL_34:
  v40 = Function_204ae84(v31);
  v22 = Function_204aec0(v9);
  v39 = (Function_204aec0(v9) << 16) | v22;
  if ( v37 >= 50 )
    v36 = 1;
  v23 = 0;
  if ( v10 > 0 )
  {
    v35 = &v47;
    v24 = &v46;
    do
    {
      *(uint *)v24 = Function_223a3a8(v9, v32, *(uint *)v35 & 0xFFFF, v39, 0, v40, (uchar)v23, v36, a9);
      v24 += 4;
      ++v23;
      v35 += 4;
      v32 += 56;
    }
    while ( v23 < v10 );
  }
  if ( !a8 )
    return v36;
  v26 = a8;
  *(uint *)a8 = v39;
  v27 = 0;
  v28 = &v47;
  v29 = &v46;
  do
  {
    ++v27;
    *(ushort *)(a8 + 4) = *(uint *)v28;
    v28 += 4;
    *(uint *)(v26 + 8) = *(uint *)v29;
    v29 += 4;
    v26 += 4;
    a8 += 2;
  }
  while ( v27 < 2 );
  return v36;
}

//----- (0223A30C) --------------------------------------------------------
int __fastcall Function_223a30c(int a1, ushort *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  uint v7;
  int result;

  v3 = (int)a2;
  v4 = a3;
  v5 = a1;
  MI_CpuFill8(a2, 0, 0x110u);
  v6 = Function_202d764(v5);
  if ( Function_202d5e8(v6) )
    result = Function_202d63c(v6, v3, v4, v7);
  else
    result = Function_223a348(v3, v4);
  return result;
}

//----- (0223A348) --------------------------------------------------------
int __fastcall Function_223a348(ushort *a1, int a2)
{
  int v2;
  uint v3;
  int v4;
  char *v5;
  uint v6;
  uint v7;
  int v8;
  uint v9;
  int result;

  v2 = a2;
  v3 = (uint)a1;
  MI_CpuFill8(a1, 0, 0x110u);
  v4 = 6 * v2;
  v5 = (char *)dword_223FCB4 + 6 * v2;
  MI_CpuCopy8((int)&dword_223FCE0[12 * v2], v3, 0x30u, v6);
  v8 = 0;
  *(ushort *)(v3 + 6) = *(ushort *)((char *)dword_223FCB4 + v4);
  v9 = v3 + 48;
  do
  {
    result = MI_CpuCopy8((int)&dword_223FE30[14 * (uchar)v5[v8++ + 2]], v9, 0x38u, v7);
    v9 += 56;
  }
  while ( v8 < 4 );
  return result;
}

//----- (0223A3A8) --------------------------------------------------------
int __fastcall Function_223a3a8(int a1, ushort *a2, int a3, int a4, int a5, uchar a6, uchar a7, int a8, uint a9)
{
  ushort *v9;
  int v10;
  int v11;
  int v12;
  short v13;
  int v14;
  char *v15;
  ushort *v16;
  int v17;
  uint v18;
  int v19;
  int v20;
  int v21;
  uchar v22;
  int v23;
  int v24;
  char v25;
  uchar v26;
  uint v27;
  int v29;
  char v30;
  char v31;
  uchar v32;
  uchar v33;
  short v34;
  short v35;
  int v36;

  v36 = a4;
  v9 = a2;
  v10 = a1;
  v11 = a3;
  v29 = a4;
  MI_CpuFill8(a2, 0, 0x38u);
  v12 = Function_223a768(*(uchar *)(v10 + 15));
  Function_222dcf4((int)&v31, v11, v12);
  *v9 = *v9 & 0xF800 | *(ushort *)&v31 & 0x7FF;
  *v9 = (v35 << 11) | *v9 & 0x7FF;
  if ( a8 )
    v13 = *((ushort *)dword_223FCAC + a7);
  else
    v13 = v34;
  v9[1] = v13;
  v30 = -1;
  v14 = 0;
  v15 = &v31;
  v16 = v9;
  do
  {
    v16[2] = *((ushort *)v15 + 1);
    if ( *((ushort *)v15 + 1) == 218 )
      v30 = 0;
    ++v14;
    v15 += 2;
    ++v16;
  }
  while ( v14 < 4 );
  v17 = a5;
  *((uint *)v9 + 3) = v29;
  if ( a5 )
  {
    *((uint *)v9 + 4) = a5;
  }
  else
  {
    do
    {
      do
      {
        v18 = Function_204aec0(v10);
        v17 = v18 | (Function_204aec0(v10) << 16);
      }
      while ( v33 != PkmnData_DivBy25(v17) );
    }
    while ( CheckIfShinyPkmn(v29, v17) == 1 );
    *((uint *)v9 + 4) = v17;
  }
  v19 = a6;
  v20 = 0;
  v21 = 0;
  *((uint *)v9 + 5) = ((uint)a6 << 27 >> 2) | (((((*((uint *)v9 + 5) & 0xFFFFFFE0 | v19 & 0x1F) & 0xFFFFFC1F | 32 * v19 & 0x3FF) & 0xFFFF83FF | (v19 << 10) & 0x7FFF) & 0xFFF07FFF | (v19 << 15) & 0xFFFFF) & 0xFE0FFFFF | (v19 << 20) & 0x1FFFFFF) & 0xC1FFFFFF;
  do
  {
    v22 = Function_20787cc(v21);
    if ( v22 & v32 )
      ++v20;
    ++v21;
  }
  while ( v21 < 6 );
  v23 = s32_div_f(0x1FEu, v20);
  if ( v23 > 255 )
    LOBYTE(v23) = -1;
  v24 = 0;
  v25 = v23;
  do
  {
    v26 = Function_20787cc(v24);
    if ( v26 & v32 )
      *((uchar *)v9 + v24 + 24) = v25;
    ++v24;
  }
  while ( v24 < 6 );
  *((uchar *)v9 + 30) = 0;
  *((uchar *)v9 + 31) = CountryOfOriginValue;
  v27 = GetPkmnBaseData1(*v9 & 0x7FF, 0x19u);
  if ( v27 )
  {
    if ( *((uint *)v9 + 4) & 1 )
      *((uchar *)v9 + 32) = v27;
    else
      *((uchar *)v9 + 32) = GetPkmnBaseData1(*v9 & 0x7FF, 0x18u);
  }
  else
  {
    *((uchar *)v9 + 32) = GetPkmnBaseData1(*v9 & 0x7FF, 0x18u);
  }
  *((uchar *)v9 + 33) = v30;
  Function_200b274(*v9 & 0x7FF, a9, v9 + 17);
  return v17;
}

//----- (0223A580) --------------------------------------------------------
int __fastcall Function_223a580(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  int i;
  int *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  uint *v16;
  int v17;

  v2 = a1;
  v3 = a2;
  v4 = Function_223a700(*(uchar *)(a1 + 15));
  v7 = AllocMainGameData(*(uint *)(v2 + 4), v4, v5, v6);
  v16 = (uint *)LoadPokePartyAdress(*(uint *)(v3 + 8));
  Function_20521b8(
    (uint *)v7,
    0,
    *(uint *)(v3 + 8),
    *(uint *)(v3 + 28),
    *(uint *)(v3 + 12),
    *(uint *)(v3 + 16),
    *(uint *)(v3 + 32));
  *(uint *)(v7 + 336) = 18;
  *(uint *)(v7 + 340) = 18;
  v8 = AllocPkmnData(*(uint *)(v2 + 4));
  ZeroFillPkmnPartyStructure(*(int **)(v7 + 4), *(uchar *)(v2 + 14));
  for ( i = 0; i < *(uchar *)(v2 + 14); ++i )
  {
    v10 = GetAdrOfPkmnInParty(v16, *(uchar *)(v2 + i + 42));
    Function_20775ec(v10, v8);
    if ( GetPkmnData(v8, 0xA1u, 0) > 0x32 )
    {
      v11 = GetPkmnData(v8, 5u, 0);
      v17 = GetBaseExpPts(v11, 50);
      SetPkmnData((int)v8, 8, (ushort *)&v17);
      Function_207418c(v8);
    }
    Function_205213c(v7, v8, 0);
  }
  free((int)v8);
  Function_2052894(v7);
  Function_223a6ac(v7, v2 + 120, *(uchar *)(v2 + 14), 1, *(uint *)(v2 + 4));
  v12 = 0;
  v13 = v7;
  do
  {
    ++v12;
    *(uint *)(v13 + 52) = 7;
    v13 += 52;
  }
  while ( v12 < 4 );
  v14 = *(uchar *)(v2 + 15);
  if ( v14 == 2 )
  {
    Function_223a6ac(
      v7,
      v2 + 664 + 272 * ((uint)*(uchar *)(v2 + 16) << 24 >> 29),
      *(uchar *)(v2 + 14),
      2,
      *(uint *)(v2 + 4));
LABEL_12:
    Function_223a6ac(v7, v2 + 392, *(uchar *)(v2 + 14), 3, *(uint *)(v2 + 4));
    return v7;
  }
  if ( v14 == 3 || v14 == 6 )
    goto LABEL_12;
  return v7;
}

//----- (0223A6AC) --------------------------------------------------------
uint __fastcall Function_223a6ac(int a1, ushort *a2, int a3, int a4, uint a5)
{
  ushort *v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  ushort *v10;
  int v12;
  int v13;

  v12 = a1;
  v5 = a2;
  v6 = a3;
  v13 = a4;
  Function_222e284(a1, a2, a3, a4);
  v8 = AllocPkmnData(a5);
  v9 = 0;
  if ( v6 > 0 )
  {
    v10 = v5 + 24;
    do
    {
      Function_222df40(v10, v8, 120, v7);
      CopyPkmnDataToParty(*(uint **)(v12 + 4 * v13 + 4), v8);
      ++v9;
      v10 += 28;
    }
    while ( v9 < v6 );
  }
  return free((int)v8);
}

//----- (0223A700) --------------------------------------------------------
int __fastcall Function_223a700(char a1)
{
  int result;

  switch ( a1 )
  {
    case 0:
    case 4:
      result = 129;
      break;
    case 1:
      result = 131;
      break;
    case 2:
      result = 203;
      break;
    case 3:
    case 6:
      result = 143;
      break;
    default:
      result = 129;
      break;
  }
  return result;
}

//----- (0223A734) --------------------------------------------------------
int __fastcall Function_223a734(int result, short a2)
{
  *(uchar *)(result + 16) = 8 * a2 & 0xF | *(uchar *)(result + 16) & 0xF7;
  *(ushort *)(result + 2110) = a2;
  return result;
}

//----- (0223A750) --------------------------------------------------------
BOOL __fastcall Function_223a750(int a1, ushort *a2)
{
  return *(uchar *)(a1 + 16) & 8 || *a2;
}

//----- (0223A768) --------------------------------------------------------
int Function_223a768()
{
  int result;

  if ( Function_223a7ac() )
    result = 179;
  else
    result = 135;
  return result;
}

//----- (0223A77C) --------------------------------------------------------
int Function_223a77c()
{
  int result;

  if ( Function_223a7ac() )
    result = 178;
  else
    result = 134;
  return result;
}

//----- (0223A790) --------------------------------------------------------
int Function_223a790()
{
  int result;

  if ( Function_223a7ac() )
    result = 614;
  else
    result = 613;
  return result;
}

//----- (0223A7AC) --------------------------------------------------------
BOOL __fastcall Function_223a7ac(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  if ( a1 != 3 && a1 != 6 )
    return 1;
  v1 = Function_2032ee8(0);
  if ( !v1 )
    ErrorHandler();
  v2 = Function_2032ee8(1);
  if ( !v2 )
    ErrorHandler();
  v3 = Function_2025fcc(v1);
  v4 = Function_2025fcc(v2);
  return v3 && v4;
}

//----- (0223A7F4) --------------------------------------------------------
int __fastcall Function_223a7f4(int a1, uint a2, int a3)
{
  int v3;
  int v5;
  int v6;
  int v7;
  int v8;
  uint v9;
  int v10;

  if ( a2 >= 8 )
    a2 = 7;
  if ( a1 )
    goto LABEL_15;
  v3 = a3 + 1 + 7 * a2;
  if ( v3 == 21 )
    return 309;
  if ( v3 == 49 )
    return 310;
LABEL_15:
  if ( a3 != 6 && a3 != 13 )
  {
    v8 = 2 * a2;
    v6 = LOWORD(dword_22401FC[v8]);
    v7 = *(ushort *)(v8 * 4 + 35914238) - v6;
  }
  else
  {
    v5 = 4 * a2;
    v6 = (ushort)aDwpwx[v5];
    v7 = *(ushort *)(v5 * 2 + 35914242) - v6;
  }
  v9 = PRNG();
  s32_div_f(v9, v7);
  return v6 + v10;
}

//----- (0223A860) --------------------------------------------------------
int __fastcall Function_223a860(int a1, uint a2, ushort *a3, int a4)
{
  ushort *v4;
  int v5;
  int v6;
  ushort *v7;
  int result;
  int v9;
  ushort *v10;
  int v11;
  uint v12;

  v4 = a3;
  v11 = a1;
  v12 = a2;
  v5 = a4;
  v6 = 0;
  v7 = a3;
  do
  {
    result = Function_223a7f4(v11, v12, v6);
    v9 = 0;
    *v7 = result;
    if ( v6 > 0 )
    {
      v10 = v4;
      do
      {
        result = *v10;
        if ( result == v4[v6] )
          break;
        ++v9;
        ++v10;
      }
      while ( v9 < v6 );
    }
    if ( v9 == v6 )
    {
      ++v7;
      ++v6;
    }
  }
  while ( v6 < v5 );
  return result;
}

//----- (0223A8A8) --------------------------------------------------------
int __fastcall Function_223a8a8(int a1, int a2)
{
  int *v2;
  int v3;
  ushort *v4;

  if ( a2 )
    v2 = dword_22402DC;
  else
    v2 = dword_224028C;
  off_2241AB8 = v2;
  v3 = 0;
  v4 = 0;
  do
  {
    if ( a1 < *v4 )
      break;
    ++v3;
    v4 += 4;
  }
  while ( v3 < 10 );
  if ( v3 >= 10 )
  {
    ErrorHandler();
    v3 = 9;
  }
  return 8 * v3;
}

//----- (0223A8F4) --------------------------------------------------------
int *__fastcall Function_223a8f4(int a1, int a2)
{
  int *result;

  if ( a1 >= 8 )
    a1 = 7;
  if ( a2 )
    result = &dword_224023C[2 * a1];
  else
    result = &dword_224028C[2 * a1];
  return result;
}

//----- (0223A918) --------------------------------------------------------
int __fastcall Function_223a918(ushort *a1, ushort *a2, int a3, int a4, ushort *a5, int a6, int a7, ushort a8, int a9)
{
  int v9;
  int v10;
  int v11;
  int *v12;
  uint v13;
  uint v14;
  int v15;
  uint v16;
  int v17;
  int v18;
  char *v19;
  int v20;
  ushort *v21;
  ushort *v22;
  ushort *v24;
  ushort *v25;
  int v26;
  int v27;
  ushort *v28;
  char *v29;
  int v30;
  int v31;
  char v32;
  char v33;

  v24 = a1;
  v25 = a2;
  v9 = a3;
  v26 = a4;
  if ( a4 > 6 )
    ErrorHandler();
  v10 = 0;
  v31 = *(ushort *)(a7 + 4) - *(ushort *)(a7 + 2);
  v11 = 0;
  if ( a8 )
  {
    v12 = &dword_22401E8;
    v11 = 5;
    v13 = 0;
    while ( a8 > *v12 )
    {
      ++v13;
      ++v12;
      if ( v13 >= 5 )
        goto LABEL_8;
    }
    v11 = v13;
  }
LABEL_8:
  if ( v26 )
  {
    v29 = &v33;
    v28 = a5;
    v27 = v26 - v11;
    do
    {
      if ( v10 < v27 || *(uchar *)(a7 + 7) != 1 )
      {
        v16 = PRNG();
        s32_div_f(v16, v31 + 1);
        v30 = *(ushort *)(a7 + 4) - v17;
        v32 = *(uchar *)(a7 + 6);
        Function_222dcf4((int)v29, v30, 179);
      }
      else
      {
        v31 = *(ushort *)(a7 + 12) - *(ushort *)(a7 + 10);
        v14 = PRNG();
        s32_div_f(v14, v31 + 1);
        v30 = *(ushort *)(a7 + 12) - v15;
        v32 = *(uchar *)(a7 + 14);
        Function_222dcf4((int)v29, v30, 179);
      }
      v18 = 0;
      if ( v10 > 0 )
      {
        v19 = &v33;
        do
        {
          if ( *(ushort *)v19 == *(ushort *)v29 )
            break;
          if ( *((ushort *)v19 + 6) == *((ushort *)v29 + 6) )
            break;
          ++v18;
          v19 += 16;
        }
        while ( v18 < v10 );
      }
      if ( v18 == v10 )
      {
        v20 = 0;
        if ( v9 > 0 )
        {
          v21 = v24;
          v22 = v25;
          do
          {
            if ( *(ushort *)v29 == *v21 )
              break;
            if ( *((ushort *)v29 + 6) == *v22 )
              break;
            ++v20;
            ++v21;
            ++v22;
          }
          while ( v20 < v9 );
        }
        if ( v20 == v9 )
        {
          *v28 = v30;
          *(uchar *)(a9 + v10++) = v32;
          v29 += 16;
          ++v28;
        }
      }
    }
    while ( v10 != v26 );
  }
  return 0;
}

//----- (0223AA50) --------------------------------------------------------
int __fastcall Function_223aa50(char a1)
{
  int result;

  switch ( a1 )
  {
    case 0:
    case 1:
      result = 3;
      break;
    case 2:
    case 3:
      result = 2;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

//----- (0223AA74) --------------------------------------------------------
int __fastcall Function_223aa74(char a1, int a2)
{
  int result;

  switch ( a1 )
  {
    case 0:
    case 1:
      result = 3;
      break;
    case 2:
    case 3:
      if ( a2 )
        result = 4;
      else
        result = 2;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

//----- (0223AAA0) --------------------------------------------------------
int __fastcall Function_223aaa0(int a1, int a2, ushort *a3, ushort *a4, int a5, int *a6, ushort a7, ushort *a8)
{
  ushort *v8;
  ushort *v9;
  int *v10;

  v8 = a3;
  v9 = a4;
  v10 = Function_223a8f4(a1, a2);
  if ( a8 )
    Function_223a918(a8, a8, 6, 6, v8, 11, (int)v10, a7, a5);
  else
    Function_223a918(0, 0, 0, 6, v8, 11, (int)v10, a7, a5);
  return Function_222e330(v9, v8, a5, 0, a6, 6, 0xBu, 179);
}

//----- (0223AB0C) --------------------------------------------------------
int __fastcall Function_223ab0c(int a1, int a2, int a3, int *a4, ushort *a5, ushort *a6, int a7, int *a8, int a9)
{
  int *v9;
  int v10;
  char *v11;
  char *v12;
  int *v13;
  char *v14;
  int v15;
  int v16;
  int v17;
  int v19;
  int v20;
  char v21;
  char v22;
  char v23;
  short v24;

  v19 = a1;
  v9 = a4;
  v20 = Function_223a8a8(a2, a3);
  v10 = 0;
  if ( a9 > 0 )
  {
    v11 = &v22;
    v12 = &v21;
    do
    {
      v13 = v9;
      v14 = &v23;
      v15 = 7;
      do
      {
        v16 = *v13;
        v17 = v13[1];
        v13 += 2;
        *(uint *)v14 = v16;
        *((uint *)v14 + 1) = v17;
        v14 += 8;
        --v15;
      }
      while ( v15 );
      v9 += 14;
      *(ushort *)v11 = *(ushort *)&v23 & 0x7FF;
      v11 += 2;
      *(ushort *)v12 = v24;
      v12 += 2;
      ++v10;
    }
    while ( v10 < a9 );
  }
  Function_223a918((ushort *)&v22, (ushort *)&v21, a9, v19, a5, 11, v20, 0, a7);
  return Function_222e330(a6, a5, a7, 0, a8, v19, 0xBu, 179);
}

//----- (0223ABA0) --------------------------------------------------------
int __fastcall Function_223aba0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int *v10;
  int i;
  int *v12;
  ushort *v13;
  int v14;
  int v15;
  int v16;
  int *v17;
  int j;
  int *v19;
  int v20;
  int v21;
  int v22;
  ushort *v23;
  int v24;
  int *v25;
  int v26;
  int *v27;
  int v29;
  int v30;
  int v31;
  char v32;
  int v33;

  v33 = a4;
  v4 = a1;
  v5 = a2;
  v31 = Function_223aa50(*(uchar *)(a1 + 4));
  v30 = Function_223aa74(*(uchar *)(v4 + 4), 0);
  HealPokemon(*(uint *)(v4 + 1236));
  HealPokemon(*(uint *)(v4 + 1240));
  v6 = Function_223ad74(*(uchar *)(v4 + 4));
  v9 = AllocMainGameData(0xBu, v6, v7, v8);
  Function_20521b8(
    (uint *)v9,
    0,
    *(uint *)(v5 + 8),
    *(uint *)(v5 + 28),
    *(uint *)(v5 + 12),
    *(uint *)(v5 + 16),
    *(uint *)(v5 + 32));
  *(uint *)(v9 + 336) = 19;
  *(uint *)(v9 + 340) = 19;
  ZeroFillPkmnPartyStructure(*(int **)(v9 + 4), v31);
  v10 = AllocPkmnData(0xBu);
  for ( i = 0; i < v31; ++i )
  {
    v12 = GetAdrOfPkmnInParty(*(uint **)(v4 + 1236), i);
    Function_20775ec(v12, v10);
    Function_205213c(v9, v10, 0);
  }
  free((int)v10);
  Function_2052894(v9);
  v13 = Function_222dd04((int)&v32, *(ushort *)(v4 + 2 * *(uchar *)(v4 + 6) + 24), 0xBu, 178);
  free((int)v13);
  Function_222e284(v9, &v32, v30, 1);
  v14 = Function_223aa74(*(uchar *)(v4 + 4), 0);
  ZeroFillPkmnPartyStructure(*(int **)(v9 + 8), v14);
  v15 = 0;
  v16 = v9;
  do
  {
    *(uint *)(v16 + 52) = Function_223aee4(v4);
    ++v15;
    v16 += 52;
  }
  while ( v15 < 4 );
  v17 = AllocPkmnData(0xBu);
  for ( j = 0; j < v30; ++j )
  {
    v19 = GetAdrOfPkmnInParty(*(uint **)(v4 + 1240), j);
    Function_20775ec(v19, v17);
    Function_205213c(v9, v17, 1);
  }
  free((int)v17);
  v20 = *(uchar *)(v4 + 4);
  if ( v20 == 2 || v20 == 3 )
  {
    Function_2052894(v9);
    v21 = Function_203608c();
    v22 = Function_2032ee8(1 - v21);
    CopyTrainerData(v22, *(uint *)(v9 + 256));
    v23 = Function_222dd04(
            (int)&v32,
            *(ushort *)(v4 + 2 * (*(uchar *)(v4 + 6) + 7) + 24),
            0xBu,
            178);
    free((int)v23);
    Function_222e284(v9, &v32, v30, 3);
    v24 = Function_223aa74(*(uchar *)(v4 + 4), 0);
    ZeroFillPkmnPartyStructure(*(int **)(v9 + 16), v24);
    v25 = AllocPkmnData(0xBu);
    v29 = 0;
    if ( v30 > 0 )
    {
      v26 = v30;
      do
      {
        v27 = GetAdrOfPkmnInParty(*(uint **)(v4 + 1240), v26);
        Function_20775ec(v27, v25);
        Function_205213c(v9, v25, 3);
        ++v26;
        ++v29;
      }
      while ( v29 < v30 );
    }
    free((int)v25);
  }
  return v9;
}

//----- (0223AD74) --------------------------------------------------------
int __fastcall Function_223ad74(char a1)
{
  int result;

  switch ( a1 )
  {
    case 0:
      result = 129;
      break;
    case 1:
      result = 131;
      break;
    case 2:
      result = 143;
      break;
    case 3:
      result = 143;
      break;
    default:
      result = 129;
      break;
  }
  return result;
}

//----- (0223ADA0) --------------------------------------------------------
int __fastcall Function_223ada0(int a1)
{
  int result;

  if ( *(uchar *)(a1 + 5) )
    result = 100;
  else
    result = 50;
  return result;
}

//----- (0223ADB0) --------------------------------------------------------
uint __fastcall Function_223adb0(int a1)
{
  int v1;
  int *v2;
  int v3;
  ushort *v4;
  int v5;
  int v6;
  int v7;

  v1 = a1;
  Function_222e330((ushort *)(a1 + 640), (ushort *)(v1 + 596), v1 + 608, (int *)(v1 + 616), 0, 6, 0xBu, 179);
  ZeroFillPkmnPartyStructure_6(*(int **)(v1 + 1236));
  v2 = AllocPkmnData(0xBu);
  v3 = 0;
  v4 = (ushort *)(v1 + 640);
  do
  {
    v5 = Function_223ada0(v1);
    Function_222df40(v4, v2, v5, v6);
    Function_222e1c0(*(uint *)(v1 + 1272), *(uint **)(v1 + 1236), v2, v7);
    ++v3;
    v4 += 28;
  }
  while ( v3 < 6 );
  return free((int)v2);
}

//----- (0223AE30) --------------------------------------------------------
uint __fastcall Function_223ae30(int a1)
{
  int v1;
  int i;
  int *v3;
  ushort *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v10;
  char v11;

  v1 = a1;
  for ( i = GetNrOfPkmnInParty(*(uint *)(a1 + 1236)); i > 2; --i )
    Function_207a080(*(int **)(v1 + 1236), i - 1);
  Function_222e330(&v11, (ushort *)(v1 + 1412), v1 + 1424, (int *)(v1 + 1432), 0, 2, 0xBu, 179);
  v3 = AllocPkmnData(0xBu);
  v10 = 0;
  v4 = (ushort *)&v11;
  v5 = v1;
  do
  {
    v6 = Function_223ada0(v1);
    Function_222df40(v4, v3, v6, v7);
    Function_222e1c0(*(uint *)(v1 + 1272), *(uint **)(v1 + 1236), v3, v8);
    v4 += 28;
    *(ushort *)(v5 + 1260) = *(ushort *)(v5 + 1412);
    v5 += 2;
    ++v10;
  }
  while ( v10 < 2 );
  return free((int)v3);
}

//----- (0223AED4) --------------------------------------------------------
BOOL __fastcall Function_223aed4(int a1)
{
  return a1 == 2 || a1 == 3;
}

//----- (0223AEE4) --------------------------------------------------------
int __fastcall Function_223aee4(int a1)
{
  char v2;
  int v3;

  if ( !*(uchar *)(a1 + 4)
    && ((*(ushort *)(a1 + 2 * *(uchar *)(a1 + 6) + 24) + 65227) & 0xFFFFu) <= 1 )
  {
    return 7;
  }
  v2 = Function_223af34(a1);
  v3 = 7;
  switch ( v2 + 1 )
  {
    case 1:
    case 2:
      v3 = 0;
      break;
    case 3:
    case 4:
      v3 = 1;
      break;
    default:
      return v3;
  }
  return v3;
}

//----- (0223AF34) --------------------------------------------------------
int __fastcall Function_223af34(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(ushort *)(a1 + 14);
  if ( Function_223aed4(*(uchar *)(a1 + 4)) == 1
    && *(ushort *)(v1 + 1406) > (uint)*(ushort *)(v1 + 14) )
  {
    v2 = *(ushort *)(v1 + 1406);
  }
  return v2;
}

//----- (0223AF58) --------------------------------------------------------
int __fastcall Function_223af58(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  ushort *v7;
  char *v8;
  int *v9;
  uint v10;
  ushort v11;
  short v12;
  int result;
  int v14;

  v5 = a1;
  v14 = a2;
  v6 = 0;
  v7 = (ushort *)(a5 + (4 * a4 & 0x1FF));
  v8 = (char *)dword_224041C + (16 * Function_223b644(a3) & 0xFFF);
  v9 = &dword_224038C[2 * v5];
  do
  {
    v10 = PRNG();
    s32_div_f(v10, 12);
    if ( v11 >= 8u )
      v12 = *((ushort *)v9 + v11 - 8);
    else
      v12 = *(ushort *)&v8[2 * v11];
    *v7 = v12;
    result = v14;
    ++v6;
    ++v7;
  }
  while ( v6 < v14 );
  return result;
}

//----- (0223AFB4) --------------------------------------------------------
ushort *__fastcall Function_223afb4(int a1, int a2, int a3, int a4, uchar a5, ushort *a6)
{
  int v6;
  int v7;
  int v8;
  ushort *result;
  int v10;
  ushort v11;
  uint v12;
  int v13;
  int v14;
  int v15;
  ushort *v16;
  int v17;
  uint v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  ushort *v24;
  int v25;
  int v26;
  int v27;

  v6 = a1;
  v21 = a2;
  v25 = 0;
  v7 = a3;
  v23 = 2 * a5 & 0xFF;
  v22 = (uchar)Function_223b644(a4);
  if ( v6 )
    goto LABEL_23;
  v8 = a5 + 1 + 10 * v7;
  if ( v8 == 50 )
  {
    result = a6;
    a6[v23] = 307;
    return result;
  }
  if ( v8 != 170 )
  {
LABEL_23:
    v24 = &a6[v23];
    do
    {
      v10 = PRNG();
      u32_div_f(v10, 300);
      v12 = v11;
      v26 = v11;
      v13 = v23 + v25;
      v27 = v23 + v25;
      while ( 1 )
      {
        v14 = a6[v27];
        if ( v14 == *((ushort *)dword_22404BC + v12) )
        {
          v15 = 0;
          if ( v13 > 0 )
          {
            v16 = a6;
            do
            {
              if ( v12 == *v16 )
                break;
              ++v15;
              ++v16;
            }
            while ( v15 < v13 );
          }
          if ( v15 == v13 )
            break;
        }
        v12 = (v12 + 1) & 0xFFFF;
        if ( v12 >= 0x12C )
          v12 = 0;
        if ( v12 == v26 )
        {
          do
          {
            v18 = PRNG();
            v19 = *(ushort *)((char *)&dword_224041C[4 * v22]
                                      + (2 * ((v18 >> 31) + __ROR4__((v18 << 29) - (v18 >> 31), 29)) & 0x1FFFF));
          }
          while ( v14 == v19 );
          a6[v27] = *(ushort *)((char *)&dword_224041C[4 * v22]
                             + (2 * ((v18 >> 31) + __ROR4__((v18 << 29) - (v18 >> 31), 29)) & 0x1FFFF));
        }
      }
      *v24 = v12;
      ++v24;
      v17 = v25++ + 1;
      v20 = v17;
      result = (ushort *)v21;
    }
    while ( v20 < v21 );
  }
  else
  {
    result = a6;
    a6[v23] = 308;
  }
  return result;
}

//----- (0223B0C8) --------------------------------------------------------
int __fastcall Function_223b0c8(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  uint v7;
  int v8;
  int v9;
  int v10;
  uint v11;
  uint v12;
  int v13;
  uint v14;
  int v15;
  int v16;
  int result;
  int v18;
  int i;
  int v20;
  int v21;
  int v22;
  int v23;
  int *v24;

  v20 = a1;
  v21 = a2;
  v8 = 0;
  v9 = 2 * a4 & 0xFF;
  v23 = 0;
  v10 = (uchar)Function_223b644(a3);
  if ( a7 )
  {
    v11 = 0;
    while ( a5 != *((ushort *)dword_2240714 + v11) )
    {
      v11 = (v11 + 1) & 0xFFFF;
      if ( v11 >= 0x1DD )
        goto LABEL_6;
    }
    v7 = v11;
LABEL_6:
    if ( v11 == 477 )
      v7 = 376;
    v12 = 0;
    do
    {
      if ( v7 < HIWORD(dword_224032C[v12]) )
        break;
      v12 = (v12 + 1) & 0xFFFF;
    }
    while ( v12 < 4 );
    if ( v12 == 4 )
      v12 = 3;
    if ( a7 == 2 )
      v24 = dword_2240338;
    else
      v24 = &dword_224032C[v12];
  }
  else
  {
    v24 = &dword_2240364[v10];
  }
  v13 = (*((ushort *)v24 + 1) - *(ushort *)v24 + 1) & 0xFFFF;
  v14 = PRNG();
  s32_div_f(v14, v13);
  v16 = (((*(ushort *)v24 + v15) & 0xFFFF) - 1) & 0xFFFF;
  v22 = (((*(ushort *)v24 + v15) & 0xFFFF) - 1) & 0xFFFF;
  result = v20;
  if ( v20 > 0 )
  {
    v18 = a6 + 2 * v9;
    do
    {
      if ( v23 )
      {
        if ( v16 + 1 == *(ushort *)(a6 + 2 * (v9 - 2)) )
          i = 0;
        else
          i = v9;
      }
      else
      {
        for ( i = 0; i < v9; i = (i + 1) & 0xFFFF )
        {
          if ( v16 + 1 == *(ushort *)(a6 + 2 * i) )
            break;
        }
      }
      if ( i == v9 )
      {
        if ( a7 )
        {
          if ( a5 != *((ushort *)dword_2240714 + v16) )
            *(ushort *)(v18 + 2 * v8++) = v16 + 1;
        }
        else if ( (v21 == HIWORD(dword_2240714[v16 + 238]) || v21 == LOWORD(dword_2240714[v16 + 239]))
               && a5 != *((ushort *)dword_2240714 + v16) )
        {
          *(ushort *)(v18 + 2 * v8++) = v16 + 1;
        }
      }
      v16 = (v16 + 1) & 0xFFFF;
      if ( v16 + 1 >= *((ushort *)v24 + 1) )
        v16 = (*(ushort *)v24 - 1) & 0xFFFF;
      if ( v16 == v22 )
        v23 = 1;
      result = v20;
    }
    while ( v8 < v20 );
  }
  return result;
}

//----- (0223B250) --------------------------------------------------------
int __fastcall Function_223b250(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int i;
  int *v10;
  ushort *v11;
  int v12;
  int v13;
  int v14;
  int *v15;
  uchar v16;
  int v17;
  int v18;
  int v19;
  int v20;
  ushort *v21;
  int *v22;
  uchar v23;
  int v24;
  int j;
  int v27;
  int v28;
  uint *v29;
  int *v30;
  int v31;
  char v32;

  v2 = a1;
  v3 = a2;
  v4 = 2 * *(uchar *)(a1 + 5) & 0xFF;
  v28 = Function_223b500(*(uchar *)(a1 + 4));
  v27 = Function_223b50c(*(uchar *)(v2 + 4));
  v29 = (uint *)LoadPokePartyAdress(*(uint *)(v2 + 1788));
  HealPokemon((int)v29);
  v5 = Function_223b4d4(*(uchar *)(v2 + 4));
  v8 = AllocMainGameData(0xBu, v5, v6, v7);
  Function_20521b8(
    (uint *)v8,
    0,
    *(uint *)(v3 + 8),
    *(uint *)(v3 + 28),
    *(uint *)(v3 + 12),
    *(uint *)(v3 + 16),
    *(uint *)(v3 + 32));
  *(uint *)(v8 + 336) = 22;
  *(uint *)(v8 + 340) = 22;
  ZeroFillPkmnPartyStructure(*(int **)(v8 + 4), v28);
  v30 = AllocPkmnData(0xBu);
  for ( i = 0; i < v28; ++i )
  {
    v10 = GetAdrOfPkmnInParty(v29, *(uchar *)(v2 + i + 608));
    Function_20775ec(v10, v30);
    Function_205213c(v8, v30, 0);
  }
  free((int)v30);
  Function_2052894(v8);
  v11 = Function_222dd04((int)&v32, *(ushort *)(v2 + 24 + 2 * v4), 0xBu, 178);
  free((int)v11);
  Function_222e284(v8, &v32, v27, 1);
  ZeroFillPkmnPartyStructure(*(int **)(v8 + 8), v27);
  v31 = Function_20301e0(*(uchar *)(v2 + 1781), v2 + 1796 + 9 * *(uchar *)(v2 + 4));
  if ( *(uchar *)(v2 + 4) == 2 )
    v31 = 9;
  v12 = Function_223b604(v2, v4, v31);
  v13 = 0;
  v14 = v8;
  do
  {
    ++v13;
    *(uint *)(v14 + 52) = v12;
    v14 += 52;
  }
  while ( v13 < 4 );
  Function_223b518(v2 + 656 + 56 * v4, v31, *(ushort *)(v2 + 24 + 2 * v4), v2 + 616 + 2 * v4, v27, 11, 180);
  v15 = AllocPkmnData(0xBu);
  for ( j = 0; j < v27; ++j )
  {
    while ( Function_223b4a4(v2, v4) )
      ;
    v16 = Function_223b57c(v2, v31);
    Function_222df40((ushort *)(v2 + 656 + 56 * v4), v15, v16, v17);
    Call_SetPkmnAbility((int)v15);
    Function_205213c(v8, v15, 1);
  }
  free((int)v15);
  v18 = *(uchar *)(v2 + 4);
  if ( v18 == 2 || v18 == 3 )
  {
    Function_2052894(v8);
    v19 = Function_203608c();
    v20 = Function_2032ee8(1 - v19);
    CopyTrainerData(v20, *(uint *)(v8 + 256));
    v21 = Function_222dd04((int)&v32, *(ushort *)(v2 + 2 * (v4 + 1) + 24), 0xBu, 178);
    free((int)v21);
    Function_222e284(v8, &v32, v27, 3);
    ZeroFillPkmnPartyStructure(*(int **)(v8 + 16), v27);
    v22 = AllocPkmnData(0xBu);
    while ( Function_223b4a4(v2, v4) )
      ;
    v23 = Function_223b57c(v2, v31);
    Function_222df40((ushort *)(v2 + 656 + 56 * v4), v22, v23, v24);
    Call_SetPkmnAbility((int)v22);
    Function_205213c(v8, v22, 3);
    free((int)v22);
  }
  return v8;
}

//----- (0223B4A4) --------------------------------------------------------
int __fastcall Function_223b4a4(int a1, int a2)
{
  int v2;
  int v3;
  uint v4;
  int v5;

  v2 = 56 * a2;
  v3 = a1 + 672;
  v4 = *(uint *)(a1 + 672 + v2);
  if ( v4 <= 0x3D0A9 )
    v5 = v4 + 250025;
  else
    v5 = v4 - 250025;
  *(uint *)(v3 + v2) = v5;
  return CheckIfShinyPkmn(*(uint *)(a1 + v2 + 668), *(uint *)(v3 + v2));
}

//----- (0223B4D4) --------------------------------------------------------
int __fastcall Function_223b4d4(char a1)
{
  int result;

  switch ( a1 )
  {
    case 0:
      result = 129;
      break;
    case 1:
      result = 131;
      break;
    case 2:
      result = 143;
      break;
    case 3:
      result = 143;
      break;
    default:
      result = 129;
      break;
  }
  return result;
}

//----- (0223B500) --------------------------------------------------------
int __fastcall Function_223b500(int a1)
{
  int result;

  if ( a1 == 1 )
    result = 2;
  else
    result = 1;
  return result;
}

//----- (0223B50C) --------------------------------------------------------
int __fastcall Function_223b50c(int a1)
{
  int result;

  if ( a1 == 1 )
    result = 2;
  else
    result = 1;
  return result;
}

//----- (0223B518) --------------------------------------------------------
int __fastcall Function_223b518(ushort *a1, int a2, int a3, ushort *a4, int a5, uint a6, int a7)
{
  ushort *v7;
  ushort *v8;
  int result;
  int v10;
  uchar v11;

  v7 = a1;
  v8 = a4;
  if ( a3 == 307 )
  {
    result = 31;
  }
  else if ( a3 == 308 )
  {
    result = 31;
  }
  else
  {
    result = Function_223b5f0(a2);
  }
  v10 = 0;
  if ( a5 > 0 )
  {
    v11 = result;
    do
    {
      result = Function_222e2f0(v7, *v8, v10++, v11, 0, a6, a7);
      ++v8;
      v7 += 28;
    }
    while ( v10 < a5 );
  }
  return result;
}

//----- (0223B57C) --------------------------------------------------------
int __fastcall Function_223b57c(int a1)
{
  int result;

  if ( ((*(ushort *)(a1 + (4 * *(uchar *)(a1 + 5) & 0x1FF) + 24) + 65229) & 0xFFFFu) > 1 )
    result = *(uchar *)(a1 + 7);
  else
    result = Function_223b64c(a1);
  return result;
}

//----- (0223B5A4) --------------------------------------------------------
int __fastcall Function_223b5a4(int a1)
{
  return *((uchar *)dword_2241244 + a1);
}

//----- (0223B5B0) --------------------------------------------------------
BOOL __fastcall Function_223b5b0(int a1)
{
  return a1 == 2 || a1 == 3;
}

//----- (0223B5C0) --------------------------------------------------------
int __fastcall Function_223b5c0(int a1)
{
  int v1;
  uint *v2;
  int *v3;
  uint v4;

  v1 = a1;
  v2 = (uint *)LoadPokePartyAdress(*(uint *)(a1 + 1788));
  v3 = GetAdrOfPkmnInParty(v2, *(uchar *)(v1 + 608));
  v4 = GetPkmnData(v3, 0xA1u, 0);
  return (uchar)s32_div_f(v4, 10);
}

//----- (0223B5F0) --------------------------------------------------------
int __fastcall Function_223b5f0(int a1)
{
  return BYTE1(dword_2240338[Function_223b644(a1) + 1]);
}

//----- (0223B604) --------------------------------------------------------
int __fastcall Function_223b604(int a1, int a2, int a3)
{
  int v3;
  int v4;

  v3 = a3 + 1;
  if ( v3 < 8 )
    v4 = v3 >= 4;
  else
    v4 = 7;
  if ( !*(uchar *)(a1 + 4) && ((*(ushort *)(a1 + (4 * a2 & 0x1FF) + 24) + 65229) & 0xFFFFu) <= 1 )
    v4 = 7;
  if ( *(uchar *)(a1 + 4) == 2 )
    v4 = 7;
  return v4;
}

//----- (0223B644) --------------------------------------------------------
uint __fastcall Function_223b644(uint result)
{
  if ( result >= 0xA )
    result = 9;
  return result;
}

//----- (0223B64C) --------------------------------------------------------
uint __fastcall Function_223b64c(int a1)
{
  int v1;
  uint *v2;
  uint *v3;
  int *v4;
  uint v5;
  int *v6;
  uint v7;
  uint result;

  v1 = a1;
  v2 = (uint *)LoadPokePartyAdress(*(uint *)(a1 + 1788));
  v3 = v2;
  v4 = GetAdrOfPkmnInParty(v2, *(uchar *)(v1 + 608));
  v5 = (ushort)GetPkmnData(v4, 0xA1u, 0);
  if ( Function_223b500(*(uchar *)(v1 + 4)) == 2 )
  {
    v6 = GetAdrOfPkmnInParty(v3, *(uchar *)(v1 + 609));
    v7 = (ushort)GetPkmnData(v6, 0xA1u, 0);
    if ( v5 <= v7 )
      v5 = v7;
    result = v5;
  }
  else if ( Function_223b5b0(*(uchar *)(v1 + 4)) == 1 )
  {
    if ( v5 <= *(ushort *)(v1 + 3460) )
      v5 = *(ushort *)(v1 + 3460);
    result = v5;
  }
  else
  {
    result = v5;
  }
  return result;
}

//----- (0223B6C4) --------------------------------------------------------
uint __fastcall Function_223b6c4(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  if ( a1 )
  {
    v1 = ffltu(a1 << 12);
    v2 = fadd(0x3F000000u, v1);
  }
  else
  {
    v3 = ffltu(0);
    v2 = fsub(v3, 1056964608);
  }
  v4 = ffix(v2);
  return FX_Sqrt(v4);
}

//----- (0223B6F4) --------------------------------------------------------
int __fastcall Function_223b6f4(int a1, uint a2, int a3)
{
  int v3;
  int v5;
  int v6;
  int v7;
  int v8;
  uint v9;
  int v10;

  if ( a1 )
    goto LABEL_15;
  v3 = a3 + 1 + 7 * a2;
  if ( v3 == 21 )
    return 313;
  if ( v3 == 49 )
    return 314;
LABEL_15:
  if ( a2 >= 8 )
    a2 = 7;
  if ( a3 != 6 && a3 != 13 )
  {
    v8 = 2 * a2;
    v6 = LOWORD(dword_2241258[v8]);
    v7 = *(ushort *)(v8 * 4 + 35918426) - v6;
  }
  else
  {
    v5 = 4 * a2;
    v6 = (ushort)aDwpwx_0[v5];
    v7 = *(ushort *)(v5 * 2 + 35918430) - v6;
  }
  v9 = PRNG();
  s32_div_f(v9, v7);
  return v6 + v10;
}

//----- (0223B760) --------------------------------------------------------
int __fastcall Function_223b760(int a1, uint a2, ushort *a3, int a4)
{
  ushort *v4;
  int v5;
  int v6;
  ushort *v7;
  int result;
  int v9;
  ushort *v10;
  int v11;
  uint v12;

  v4 = a3;
  v11 = a1;
  v12 = a2;
  v5 = a4;
  v6 = 0;
  v7 = a3;
  do
  {
    result = Function_223b6f4(v11, v12, v6);
    v9 = 0;
    *v7 = result;
    if ( v6 > 0 )
    {
      v10 = v4;
      do
      {
        result = *v10;
        if ( result == v4[v6] )
          break;
        ++v9;
        ++v10;
      }
      while ( v9 < v6 );
    }
    if ( v9 == v6 )
    {
      ++v7;
      ++v6;
    }
  }
  while ( v6 < v5 );
  return result;
}

//----- (0223B7A8) --------------------------------------------------------
int __fastcall Function_223b7a8(char a1, int a2)
{
  int result;

  switch ( a1 )
  {
    case 0:
    case 1:
      result = 3;
      break;
    case 2:
    case 3:
      if ( a2 )
        result = 4;
      else
        result = 2;
      break;
    default:
      ErrorHandler();
      result = 3;
      break;
  }
  return result;
}

//----- (0223B7DC) --------------------------------------------------------
int __fastcall Function_223b7dc(char a1, int a2)
{
  int result;

  switch ( a1 )
  {
    case 0:
    case 1:
      result = 3;
      break;
    case 2:
    case 3:
      if ( a2 )
        result = 4;
      else
        result = 2;
      break;
    default:
      ErrorHandler();
      result = 3;
      break;
  }
  return result;
}

//----- (0223B810) --------------------------------------------------------
int __fastcall Function_223b810(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int *v9;
  int *v10;
  ushort *v11;
  int v12;
  int v13;
  int v14;
  int *v15;
  int j;
  int *v17;
  int v18;
  int v19;
  int v20;
  ushort *v21;
  int v22;
  int *v23;
  int v24;
  int *v25;
  int v27;
  int v28;
  int v29;
  int i;
  char v31;

  v2 = a1;
  v3 = a2;
  v29 = Function_223b7a8(*(uchar *)(a1 + 16), 0);
  v28 = Function_223b7dc(*(uchar *)(v2 + 16), 0);
  HealPokemon(*(uint *)(v2 + 44));
  v4 = Function_223b9e4(*(uchar *)(v2 + 16));
  v7 = AllocMainGameData(0xBu, v4, v5, v6);
  Function_20521b8(
    (uint *)v7,
    0,
    *(uint *)(v3 + 8),
    *(uint *)(v3 + 28),
    *(uint *)(v3 + 12),
    *(uint *)(v3 + 16),
    *(uint *)(v3 + 32));
  *(uint *)(v7 + 336) = 21;
  *(uint *)(v7 + 340) = 21;
  ZeroFillPkmnPartyStructure(*(int **)(v7 + 4), v29);
  if ( Function_203608c() )
    v8 = 2;
  else
    v8 = 0;
  v9 = AllocPkmnData(0xBu);
  for ( i = 0; i < v29; ++i )
  {
    v10 = GetAdrOfPkmnInParty(*(uint **)(v2 + 40), v8);
    Function_20775ec(v10, v9);
    Function_205213c(v7, v9, 0);
    ++v8;
  }
  free((int)v9);
  Function_2052894(v7);
  v11 = Function_222dd04((int)&v31, *(ushort *)(v2 + 2 * *(uchar *)(v2 + 17) + 48), 0xBu, 178);
  free((int)v11);
  Function_222e284(v7, &v31, v28, 1);
  v12 = Function_223b7dc(*(uchar *)(v2 + 16), 0);
  ZeroFillPkmnPartyStructure(*(int **)(v7 + 8), v12);
  v13 = 0;
  v14 = v7;
  do
  {
    *(uint *)(v14 + 52) = Function_223bb10(v2);
    ++v13;
    v14 += 52;
  }
  while ( v13 < 4 );
  v15 = AllocPkmnData(0xBu);
  for ( j = 0; j < v28; ++j )
  {
    v17 = GetAdrOfPkmnInParty(*(uint **)(v2 + 44), j);
    Function_20775ec(v17, v15);
    Function_205213c(v7, v15, 1);
  }
  free((int)v15);
  v18 = *(uchar *)(v2 + 16);
  if ( v18 == 2 || v18 == 3 )
  {
    Function_2052894(v7);
    v19 = Function_203608c();
    v20 = Function_2032ee8(1 - v19);
    CopyTrainerData(v20, *(uint *)(v7 + 256));
    v21 = Function_222dd04(
            (int)&v31,
            *(ushort *)(v2 + 2 * (*(uchar *)(v2 + 17) + 7) + 48),
            0xBu,
            178);
    free((int)v21);
    Function_222e284(v7, &v31, v28, 3);
    v22 = Function_223b7dc(*(uchar *)(v2 + 16), 0);
    ZeroFillPkmnPartyStructure(*(int **)(v7 + 16), v22);
    v23 = AllocPkmnData(0xBu);
    v27 = 0;
    if ( v28 > 0 )
    {
      v24 = v28;
      do
      {
        v25 = GetAdrOfPkmnInParty(*(uint **)(v2 + 44), v24);
        Function_20775ec(v25, v23);
        Function_205213c(v7, v23, 3);
        ++v24;
        ++v27;
      }
      while ( v27 < v28 );
    }
    free((int)v23);
  }
  return v7;
}

//----- (0223B9E4) --------------------------------------------------------
int __fastcall Function_223b9e4(char a1)
{
  int result;

  switch ( a1 )
  {
    case 0:
      result = 129;
      break;
    case 1:
      result = 131;
      break;
    case 2:
      result = 143;
      break;
    case 3:
      result = 143;
      break;
    default:
      result = 129;
      break;
  }
  return result;
}

//----- (0223BA10) --------------------------------------------------------
int Function_223ba10()
{
  return 50;
}

//----- (0223BA14) --------------------------------------------------------
BOOL __fastcall Function_223ba14(int a1)
{
  return a1 == 2 || a1 == 3;
}

//----- (0223BA24) --------------------------------------------------------
uint __fastcall Function_223ba24(int a1, int a2, int a3, int a4)
{
  uint *v4;
  uint result;
  int v6;
  int i;
  int *v8;
  int *v9;
  int v10;

  v10 = a4;
  v4 = (uint *)a1;
  result = GetNrOfPkmnInParty(a1);
  v6 = result;
  for ( i = 0; i < v6; ++i )
  {
    v8 = GetAdrOfPkmnInParty(v4, i);
    v9 = v8;
    result = GetPkmnData(v8, 0xACu, 0);
    if ( result )
    {
      if ( !GetPkmnData(v9, 0xA3u, 0) )
      {
        v10 = 1;
        SetPkmnData((int)v9, 163, (ushort *)&v10);
      }
      v10 = 0;
      result = SetPkmnData((int)v9, 160, (ushort *)&v10);
    }
  }
  return result;
}

//----- (0223BA7C) --------------------------------------------------------
uint __fastcall Function_223ba7c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = LoadTrainerDataAdress(*(uint *)(a1 + 4));
  return Function_2077ee4(v2, v3);
}

//----- (0223BAA0) --------------------------------------------------------
int __fastcall Function_223baa0(int a1, uint *a2, int a3)
{
  int *v3;
  uint *v4;

  v3 = (int *)a3;
  v4 = a2;
  Function_223ba7c(a1, a3);
  return CopyPkmnDataToParty(v4, v3);
}

//----- (0223BAB8) --------------------------------------------------------
uint __fastcall Function_223bab8(int a1)
{
  int v1;
  int *v2;
  int v3;
  ushort *v4;
  int v5;
  int v6;
  int v8;

  v1 = a1;
  ZeroFillPkmnPartyStructure_6(*(int **)(a1 + 44));
  v8 = Function_223b7dc(*(uchar *)(v1 + 16), 1);
  v2 = AllocPkmnData(0xBu);
  v3 = 0;
  if ( v8 > 0 )
  {
    v4 = (ushort *)(v1 + 648);
    do
    {
      v5 = Function_223ba10();
      Function_222df40(v4, v2, v5, v6);
      Function_223baa0(v1, *(uint **)(v1 + 44), (int)v2);
      ++v3;
      v4 += 28;
    }
    while ( v3 < v8 );
  }
  return free((int)v2);
}

//----- (0223BB10) --------------------------------------------------------
int __fastcall Function_223bb10(int a1)
{
  char v2;
  int v3;

  if ( !*(uchar *)(a1 + 16)
    && ((*(ushort *)(a1 + 2 * *(uchar *)(a1 + 17) + 48) + 65223) & 0xFFFFu) <= 1 )
  {
    return 7;
  }
  v2 = Function_223bb60(a1);
  v3 = 7;
  switch ( v2 + 1 )
  {
    case 1:
    case 2:
      v3 = 0;
      break;
    case 3:
    case 4:
      v3 = 1;
      break;
    default:
      return v3;
  }
  return v3;
}

//----- (0223BB60) --------------------------------------------------------
int __fastcall Function_223bb60(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(ushort *)(a1 + 22);
  if ( Function_223ba14(*(uchar *)(a1 + 16)) == 1
    && *(ushort *)(v1 + 2578) > (uint)*(ushort *)(v1 + 22) )
  {
    v2 = *(ushort *)(v1 + 2578);
  }
  return v2;
}

//----- (0223BB84) --------------------------------------------------------
int __fastcall Function_223bb84(int a1, int a2, uchar a3, int a4)
{
  int v4;
  uchar v5;
  int v6;
  char v8;
  int v9;

  v9 = a4;
  v4 = a1;
  v5 = a3;
  v6 = Function_223bb60(a2);
  Function_223bbc4(&v8, v6);
  Function_20198c0(v4, v5, (int)&v8, 11, 6u, 0xAu, 3u);
  return Function_201c3c0(v4, v5);
}

//----- (0223BBC4) --------------------------------------------------------
uint __fastcall Function_223bbc4(int a1, int a2, int a3, int a4)
{
  int v4;
  uint v5;
  char *v6;
  uint v7;
  int v8;
  int v9;
  uint result;
  char *v11;
  ushort *v12;
  int v13;
  char v14;
  int v15;

  v15 = a4;
  v13 = a1;
  v4 = Function_223bc24(a2);
  v5 = 0;
  v6 = &v14;
  do
  {
    *v6 = v5;
    (v6++)[5] = 4 - v5++;
  }
  while ( v5 < 5 );
  v7 = 0;
  v8 = 96 * v4 + 16;
  v9 = 0;
  do
  {
    result = 0;
    v11 = &v14;
    v12 = (ushort *)(v13 + 2 * v9);
    do
    {
      *v12 = (uchar)*v11 + (ushort)v8;
      if ( result >= 5 )
        *v12 |= 0x400u;
      ++result;
      ++v11;
      ++v12;
    }
    while ( result < 0xA );
    ++v7;
    LOWORD(v8) = v8 + 32;
    v9 += 10;
  }
  while ( v7 < 3 );
  return result;
}

//----- (0223BC24) --------------------------------------------------------
uint __fastcall Function_223bc24(uint result)
{
  if ( result >= 8 )
    result = 7;
  return result;
}

//----- (0223BC2C) --------------------------------------------------------
uint __fastcall Function_223bc2c(int a1, uint a2, int a3)
{
  uint v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint v8;
  int v9;
  int v10;
  int v11;
  uint v12;
  int v13;
  int v14;
  int v15;
  uint v16;
  int v17;
  uint result;
  int v19;
  int v20;
  uint v21;
  int v22;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  Function_205e630(a2);
  v7 = v6;
  Function_205e630(v3);
  v9 = Function_205e6a8(v8);
  Function_2030824(v4, v7, v9, v5);
  Function_205e658(v3);
  v11 = v10;
  Function_205e658(v3);
  v13 = Function_205e6a8(v12);
  if ( Function_2030698(v4, v11, v13) + v5 <= 9999 )
  {
    Function_205e658(v3);
    v20 = v19;
    Function_205e658(v3);
    v22 = Function_205e6a8(v21);
    result = Function_2030804(v4, v20, v22, v5);
  }
  else
  {
    Function_205e658(v3);
    v15 = v14;
    Function_205e658(v3);
    v17 = Function_205e6a8(v16);
    result = Function_20306e4(v4, v15, v17, 0x270Fu);
  }
  return result;
}

//----- (0223BCBC) --------------------------------------------------------
int __fastcall Function_223bcbc(int a1, uint a2, int a3)
{
  int v3;
  int v5;
  int v6;
  int v7;
  int v8;
  uint v9;
  int v10;

  if ( a1 )
    goto LABEL_15;
  v3 = a3 + 1 + 7 * a2;
  if ( v3 == 21 )
    return 311;
  if ( v3 == 49 )
    return 312;
LABEL_15:
  if ( a2 >= 8 )
    a2 = 7;
  if ( a3 != 6 && a3 != 13 )
  {
    v8 = 2 * a2;
    v6 = LOWORD(dword_2241298[v8]);
    v7 = *(ushort *)(v8 * 4 + 35918490) - v6;
  }
  else
  {
    v5 = 4 * a2;
    v6 = (ushort)aDwpwx_1[v5];
    v7 = *(ushort *)(v5 * 2 + 35918494) - v6;
  }
  v9 = PRNG();
  s32_div_f(v9, v7);
  return v6 + v10;
}

//----- (0223BD28) --------------------------------------------------------
int __fastcall Function_223bd28(int a1, uint a2, ushort *a3, int a4)
{
  ushort *v4;
  int v5;
  int v6;
  ushort *v7;
  int result;
  int v9;
  ushort *v10;
  int v11;
  uint v12;

  v4 = a3;
  v11 = a1;
  v12 = a2;
  v5 = a4;
  v6 = 0;
  v7 = a3;
  do
  {
    result = Function_223bcbc(v11, v12, v6);
    v9 = 0;
    *v7 = result;
    if ( v6 > 0 )
    {
      v10 = v4;
      do
      {
        result = *v10;
        if ( result == v4[v6] )
          break;
        ++v9;
        ++v10;
      }
      while ( v9 < v6 );
    }
    if ( v9 == v6 )
    {
      ++v7;
      ++v6;
    }
  }
  while ( v6 < v5 );
  return result;
}

//----- (0223BD70) --------------------------------------------------------
int __fastcall Function_223bd70(char a1, int a2)
{
  int result;

  switch ( a1 )
  {
    case 0:
    case 1:
      result = 3;
      break;
    case 2:
    case 3:
      if ( a2 )
        result = 4;
      else
        result = 2;
      break;
    default:
      ErrorHandler();
      result = 3;
      break;
  }
  return result;
}

//----- (0223BDA4) --------------------------------------------------------
int __fastcall Function_223bda4(char a1, int a2)
{
  int result;

  switch ( a1 )
  {
    case 0:
    case 1:
      result = 3;
      break;
    case 2:
    case 3:
      if ( a2 )
        result = 4;
      else
        result = 2;
      break;
    default:
      ErrorHandler();
      result = 3;
      break;
  }
  return result;
}

//----- (0223BDD8) --------------------------------------------------------
int __fastcall Function_223bdd8(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int *v9;
  int *v10;
  ushort *v11;
  int v12;
  int v13;
  int v14;
  int *v15;
  int j;
  int *v17;
  int v18;
  int v19;
  int v20;
  ushort *v21;
  int v22;
  int *v23;
  int v24;
  int *v25;
  int v27;
  int v28;
  int v29;
  uint *v30;
  uint *v31;
  int i;
  char v33;

  v2 = a1;
  v3 = a2;
  v29 = Function_223bd70(*(uchar *)(a1 + 16), 0);
  v28 = Function_223bda4(*(uchar *)(v2 + 16), 0);
  v4 = Function_223bfd0(*(uchar *)(v2 + 16));
  v7 = AllocMainGameData(0xBu, v4, v5, v6);
  Function_20521b8(
    (uint *)v7,
    0,
    *(uint *)(v3 + 8),
    *(uint *)(v3 + 28),
    *(uint *)(v3 + 12),
    *(uint *)(v3 + 16),
    *(uint *)(v3 + 32));
  *(uint *)(v7 + 336) = 20;
  *(uint *)(v7 + 340) = 20;
  *(uint *)(v7 + 372) = *(uint *)(v2 + 20);
  v30 = *(uint **)(v2 + 116);
  v31 = *(uint **)(v2 + 112);
  if ( *(uchar *)(v2 + 19) == 27 )
  {
    v31 = *(uint **)(v2 + 116);
    v30 = *(uint **)(v2 + 112);
  }
  ZeroFillPkmnPartyStructure(*(int **)(v7 + 4), v29);
  if ( Function_203608c() )
    v8 = 2;
  else
    v8 = 0;
  v9 = AllocPkmnData(0xBu);
  for ( i = 0; i < v29; ++i )
  {
    v10 = GetAdrOfPkmnInParty(v31, v8);
    Function_20775ec(v10, v9);
    Function_205213c(v7, v9, 0);
    ++v8;
  }
  free((int)v9);
  Function_2052894(v7);
  v11 = Function_222dd04((int)&v33, *(ushort *)(v2 + 2 * *(uchar *)(v2 + 17) + 120), 0xBu, 178);
  free((int)v11);
  Function_222e284(v7, &v33, v28, 1);
  v12 = Function_223bda4(*(uchar *)(v2 + 16), 0);
  ZeroFillPkmnPartyStructure(*(int **)(v7 + 8), v12);
  v13 = 0;
  v14 = v7;
  do
  {
    *(uint *)(v14 + 52) = Function_223c0d0(v2);
    ++v13;
    v14 += 52;
  }
  while ( v13 < 4 );
  v15 = AllocPkmnData(0xBu);
  for ( j = 0; j < v28; ++j )
  {
    v17 = GetAdrOfPkmnInParty(v30, j);
    Function_20775ec(v17, v15);
    Function_205213c(v7, v15, 1);
  }
  free((int)v15);
  v18 = *(uchar *)(v2 + 16);
  if ( v18 == 2 || v18 == 3 )
  {
    Function_2052894(v7);
    v19 = Function_203608c();
    v20 = Function_2032ee8(1 - v19);
    CopyTrainerData(v20, *(uint *)(v7 + 256));
    v21 = Function_222dd04(
            (int)&v33,
            *(ushort *)(v2 + 2 * (*(uchar *)(v2 + 17) + 7) + 120),
            0xBu,
            178);
    free((int)v21);
    Function_222e284(v7, &v33, v28, 3);
    v22 = Function_223bda4(*(uchar *)(v2 + 16), 0);
    ZeroFillPkmnPartyStructure(*(int **)(v7 + 16), v22);
    v23 = AllocPkmnData(0xBu);
    v27 = 0;
    if ( v28 > 0 )
    {
      v24 = v28;
      do
      {
        v25 = GetAdrOfPkmnInParty(v30, v24);
        Function_20775ec(v25, v23);
        Function_205213c(v7, v23, 3);
        ++v24;
        ++v27;
      }
      while ( v27 < v28 );
    }
    free((int)v23);
  }
  HealPokemon(*(uint *)(v2 + 112));
  HealPokemon(*(uint *)(v2 + 116));
  return v7;
}

//----- (0223BFD0) --------------------------------------------------------
int __fastcall Function_223bfd0(char a1)
{
  int result;

  switch ( a1 )
  {
    case 0:
      result = 129;
      break;
    case 1:
      result = 131;
      break;
    case 2:
      result = 143;
      break;
    case 3:
      result = 143;
      break;
    default:
      result = 129;
      break;
  }
  return result;
}

//----- (0223BFFC) --------------------------------------------------------
int Function_223bffc()
{
  return 50;
}

//----- (0223C000) --------------------------------------------------------
BOOL __fastcall Function_223c000(int a1)
{
  return a1 == 2 || a1 == 3;
}

//----- (0223C010) --------------------------------------------------------
uint __fastcall Function_223c010(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = LoadTrainerDataAdress(*(uint *)(a1 + 4));
  return Function_2077ee4(v2, v3);
}

//----- (0223C034) --------------------------------------------------------
int __fastcall Function_223c034(int a1, uint *a2, int a3)
{
  int *v3;
  uint *v4;

  v3 = (int *)a3;
  v4 = a2;
  Function_223c010(a1, a3);
  return CopyPkmnDataToParty(v4, v3);
}

//----- (0223C04C) --------------------------------------------------------
uint __fastcall Function_223c04c(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  ushort *v7;
  int v8;
  int v9;
  int *v10;
  int v12;
  int v13;
  int v14;

  v14 = a4;
  v4 = a1;
  ZeroFillPkmnPartyStructure_6(*(int **)(a1 + 116));
  v12 = Function_223bda4(*(uchar *)(v4 + 16), 1);
  v5 = AllocPkmnData(0xBu);
  v6 = 0;
  if ( v12 > 0 )
  {
    v7 = (ushort *)(v4 + 816);
    do
    {
      v8 = Function_223bffc();
      Function_222df40(v7, v5, v8, v9);
      Function_223c034(v4, *(uint **)(v4 + 116), (int)v5);
      v10 = GetAdrOfPkmnInParty(*(uint **)(v4 + 116), v6);
      v13 = 0;
      SetPkmnData((int)v10, 6, (ushort *)&v13);
      ++v6;
      v7 += 28;
    }
    while ( v6 < v12 );
  }
  return free((int)v5);
}

//----- (0223C0BC) --------------------------------------------------------
int __fastcall Function_223c0bc(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  Function_223c124(a1);
  if ( v2 == 28 )
    result = 1;
  else
    result = 3;
  return result;
}

//----- (0223C0D0) --------------------------------------------------------
int __fastcall Function_223c0d0(int a1)
{
  char v2;
  int v3;

  if ( !*(uchar *)(a1 + 16)
    && ((*(ushort *)(a1 + 2 * *(uchar *)(a1 + 17) + 120) + 65225) & 0xFFFFu) <= 1 )
  {
    return 7;
  }
  v2 = Function_223c124(a1);
  v3 = 7;
  switch ( v2 + 1 )
  {
    case 1:
    case 2:
      v3 = 0;
      break;
    case 3:
    case 4:
      v3 = 1;
      break;
    default:
      return v3;
  }
  return v3;
}

//----- (0223C124) --------------------------------------------------------
int __fastcall Function_223c124(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(ushort *)(a1 + 26);
  if ( Function_223c000(*(uchar *)(a1 + 16)) == 1
    && *(ushort *)(v1 + 2678) > (uint)*(ushort *)(v1 + 26) )
  {
    v2 = *(ushort *)(v1 + 2678);
  }
  return v2;
}

//----- (0223C148) --------------------------------------------------------
int __fastcall Function_223c148(uint a1)
{
  if ( a1 < 9 )
    return 0;
  if ( a1 < 0x12 )
    return 1;
  if ( a1 >= 0x1B )
    return 3;
  return 2;
}

//----- (0223C164) --------------------------------------------------------
int __fastcall Function_223c164(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = malloc(0x5Eu, 8);
  MI_CpuFill8((ushort *)v2, 0, 8u);
  *(uint *)(v2 + 4) = Function_223c188(v1);
  return v2;
}

//----- (0223C188) --------------------------------------------------------
int __fastcall Function_223c188(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = malloc(0x5Eu, 12);
  MI_CpuFill8((ushort *)v2, 0, 0xCu);
  *(uint *)(v2 + 4) = v1;
  *(ushort *)(v2 + 8) = 0;
  *(uint *)v2 = AddTaskToTaskList1((int)Function_223c1bc, v2, 0x1368Cu);
  return v2;
}

//----- (0223C1BC) --------------------------------------------------------
int __fastcall Function_223c1bc(int a1, int a2, int a3, int a4)
{
  int v4;
  uint v5;
  int result;
  char v7;
  int v8;

  v8 = a4;
  v4 = a2;
  v5 = *(ushort *)(a2 + 10);
  if ( v5 >= 2 )
  {
    *(ushort *)(a2 + 10) = 0;
    *(ushort *)(a2 + 8) ^= 1u;
    Function_223c208(&v7, *(ushort *)(a2 + 8) & 0xFF);
    Function_20198c0(*(uint *)(v4 + 4), 3, (int)&v7, 14, 2u, 2u, 2u);
    result = Function_201c3c0(*(uint *)(v4 + 4), 3);
  }
  else
  {
    result = v5 + 1;
    *(ushort *)(a2 + 10) = result;
  }
  return result;
}

//----- (0223C208) --------------------------------------------------------
int __fastcall Function_223c208(int result, int a2)
{
  short v2;
  uint v3;
  short v4;
  int v5;
  uint v6;
  ushort *v7;

  if ( a2 )
    v2 = 14;
  else
    v2 = 12;
  v3 = 0;
  v4 = 96;
  v5 = 0;
  do
  {
    v6 = 0;
    v7 = (ushort *)(result + 2 * v5);
    do
    {
      *v7 = v4 + v2 + v6++;
      ++v7;
    }
    while ( v6 < 2 );
    ++v3;
    v4 += 16;
    v5 += 2;
  }
  while ( v3 < 2 );
  return result;
}

//----- (0223C23C) --------------------------------------------------------
uint __fastcall Function_223c23c(int a1)
{
  int v1;

  v1 = a1;
  Function_223c250(*(uint *)(a1 + 4));
  return free(v1);
}

//----- (0223C250) --------------------------------------------------------
uint __fastcall Function_223c250(int **a1)
{
  int v1;

  v1 = (int)a1;
  Call_RemoveTaskFromTaskList(*a1);
  return free(v1);
}

//----- (0223C264) --------------------------------------------------------
void Function_223c264()
{
  ;
}

//----- (0223C29C) --------------------------------------------------------
void Function_223c29c()
{
  ;
}

//----- (0223C2D4) --------------------------------------------------------
int *__fastcall Function_223c2d4(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int *v5;
  int v6;
  int *v7;
  ushort *v8;
  ushort *v9;
  ushort v10;

  v1 = a1;
  v2 = Function_209b970(a1);
  v3 = LoadTrainerDataAdress(*(uint *)(v2 + 8));
  v4 = *(uchar *)(v2 + 36);
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  Function_201ff00();
  Function_201ff68();
  REG_DISPCNT &= 0xFFFFE0FF;
  REG_DISPCNT_SUB &= 0xFFFFE0FF;
  REG_DISPCNT &= 0xFFFF1FFF;
  REG_DISPCNT_SUB &= 0xFFFF1FFF;
  REG_BLDCNT = 0;
  REG_BLDCNT_SUB = 0;
  Function_2017fc8(3, 94, 589824);
  v5 = (int *)malloc(0x5Eu, 196);
  MI_CpuFill8(v5, 0, 0xC4u);
  v5[2] = v1;
  *((uchar *)v5 + 193) = v4;
  v6 = 0;
  v7 = v5;
  do
  {
    v8 = v7 + 28;
    ++v6;
    v7 = (int *)((char *)v7 + 2);
    *v8 = -1;
  }
  while ( v6 < 8 );
  v5[3] = Function_223cf4c(94, 0xFFFF);
  v9 = MallocFill120(0x5Eu);
  v5[1] = (int)v9;
  Function_2003858((int)v9, 1);
  Function_2002f70(v5[1], 0, 512, 0x5Eu);
  Function_2002f70(v5[1], 1, 512, 0x5Eu);
  Function_2002f70(v5[1], 2, 448, 0x5Eu);
  Function_2002f70(v5[1], 3, 512, 0x5Eu);
  *v5 = Function_2018340(0x5Eu);
  Function_201dbec(64, 0x5Eu);
  Function_2017dd4(4, 8);
  Function_223c948(*v5, v4);
  Function_223cb80(v5);
  Function_223cc10(v5);
  Function_201e3d8();
  Function_201e450(4u);
  Function_223cff4(v5);
  v5[4] = Function_223d5d0(94);
  Function_223cc74(v5, v4, v3);
  v5[37] = (int)AddTaskToTaskList1((int)Function_223c720 + 1, (int)v5, 0xEA60u);
  v5[38] = (int)AddTaskToTaskList1((int)Function_223c72c, (int)v5, 0xEE48u);
  v5[39] = (int)AddTaskToTaskList1((int)Function_223c738, (int)v5, 0x13880u);
  Function_201ffd0();
  Function_201ff0c(0x10u, 1);
  Function_201ff74(0x10u, 1);
  v10 = Function_222ea90(v4, 3);
  Function_2004550(4u, v10);
  Function_2002ae4(1);
  Function_2002ac8(0);
  Function_2002b20(0);
  SetMainLoopFunctionCall((int)Function_223c6ec, (int)v5);
  v5[40] = (int)AddTaskToTaskList2((int)Function_223c71c, (int)v5, 0xAu);
  Function_222eb8c((int)v5, (int)(v5 + 36), *((uchar *)v5 + 193));
  Function_2039734();
  return v5;
}

//----- (0223C4CC) --------------------------------------------------------
short *__fastcall Function_104_223c4cc(int a1)
{
  int v1;
  short *result;

  v1 = a1;
  Function_209b970(*(uint *)(a1 + 8));
  Function_222eba4(v1, v1 + 144, *(uchar *)(v1 + 193));
  Function_223ceec(v1);
  Function_201ff0c(1u, 0);
  Function_201ff0c(2u, 0);
  Function_2019044(*(uint *)v1, 1);
  Function_2019044(*(uint *)v1, 2);
  Function_2019044(*(uint *)v1, 3);
  Function_2019120(4u, 0);
  Function_2019044(*(uint *)v1, 4);
  Function_223d058(v1);
  Function_223d5f0(*(uint *)(v1 + 16));
  Function_201dc3c();
  Function_2002fa0(*(uint *)(v1 + 4), 0);
  Function_2002fa0(*(uint *)(v1 + 4), 1);
  Function_2002fa0(*(uint *)(v1 + 4), 2);
  Function_2002fa0(*(uint *)(v1 + 4), 3);
  Call_free1(*(uint *)(v1 + 4));
  free(*(uint *)v1);
  Call_RemoveTaskFromTaskList(*(int **)(v1 + 148));
  Call_RemoveTaskFromTaskList(*(int **)(v1 + 152));
  Call_RemoveTaskFromTaskList(*(int **)(v1 + 156));
  Call_RemoveTaskFromTaskList(*(int **)(v1 + 160));
  Function_223cfec(*(uint *)(v1 + 12));
  Function_201e530();
  free(v1);
  REG_DISPCNT &= 0xFFFF1FFF;
  REG_DISPCNT_SUB &= 0xFFFF1FFF;
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  Function_201807c(94);
  Function_2002ac8(0);
  Function_2002ae4(0);
  Function_2002b20(0);
  Function_2039794();
  MIi_CpuClear16(0x7FFF, 83886080, 512);
  MIi_CpuClear16(0x7FFF, 83886592, 512);
  MIi_CpuClear16(0x7FFF, 83887104, 512);
  MIi_CpuClear16(0x7FFF, 83887616, 512);
  REG_BLDCNT = 0;
  result = &REG_BLDCNT_SUB;
  REG_BLDCNT_SUB = 0;
  return result;
}

//----- (0223C634) --------------------------------------------------------
int __fastcall Function_223c634(int a1)
{
  int v1;
  int v2;
  uint *v3;

  v1 = a1;
  v2 = 0;
  do
  {
    v3 = (uint *)Function_209b9d4(*(uint *)(v1 + 8), v2);
    if ( *v3 )
    {
      *((uchar *)v3 + 18) = ((int (*)(void))dword_222BF90[0])();
      *((ushort *)v3 + 5) = ((int (__fastcall *)(uint, int))dword_222BF90[0])(*v3, 5);
      *((ushort *)v3 + 7) = ((int (__fastcall *)(uint, uint))dword_222BF90[0])(*v3, 0);
      *((ushort *)v3 + 8) = ((int (__fastcall *)(uint, int))dword_222BF90[0])(*v3, 1);
      *((uchar *)v3 + 19) = ((int (__fastcall *)(uint))dword_222CECC[76])(v3[1]);
    }
    ++v2;
  }
  while ( v2 < 32 );
  return Function_223d3b0(v1);
}

//----- (0223C688) --------------------------------------------------------
int __fastcall Function_223c688(int a1, int a2, int a3, int a4)
{
  int v4;
  ushort *v5;
  int v6;
  int v7;
  int v8;
  char v10;
  int v11;

  v11 = a4;
  v4 = a1;
  v5 = (ushort *)Function_209b9cc(*(uint *)(a1 + 8));
  v6 = 0;
  do
  {
    if ( *v5 != 0xFFFF )
    {
      v7 = *((uchar *)v5 + 2);
      ((void (__fastcall *)(uint))dword_222CDE8[0])(*(uint *)(v4 + 32));
    }
    ++v6;
    v5 += 2;
  }
  while ( v6 < 24 );
  v8 = 0;
  do
  {
    if ( *(ushort *)(Function_209b9d4(*(uint *)(v4 + 8), v8) + 12) != 0xFFFF )
    {
      Function_223d570();
      Function_223d180(v4, &v10, v8);
    }
    ++v8;
  }
  while ( v8 < 32 );
  return Function_223d498(v4);
}

//----- (0223C6EC) --------------------------------------------------------
int __fastcall Function_223c6ec(int *a1)
{
  int *v1;
  int result;

  v1 = a1;
  Function_201dcac();
  Function_200c800();
  Function_2003694(v1[1]);
  Function_201c2b8(*v1);
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (0223C71C) --------------------------------------------------------
void Function_223c71c()
{
  ;
}

//----- (0223C72C) --------------------------------------------------------
int __fastcall Function_223c72c(int a1, int a2)
{
  return Function_223c8e8(a2);
}

//----- (0223C738) --------------------------------------------------------
int __fastcall Function_223c738(int a1, int a2)
{
  int v2;
  uint v3;
  int v4;
  int v5;
  int *v6;
  uint v7;

  v2 = a2;
  if ( *(uint *)Function_209b9d4(*(uint *)(a2 + 8), 31) )
    ((void (__fastcall *)(int))dword_222D050[68])(v2 + 28);
  Function_223c798(v2);
  ((void (__fastcall *)(uint))dword_222CECC[6])(*(uint *)(v2 + 32));
  v3 = *(uint *)(v2 + 108);
  v4 = 0;
  v5 = v2;
  do
  {
    v6 = *(int **)(v5 + 60);
    if ( v6 && v3 & 1 )
      Function_200d330(v6);
    ++v4;
    v3 >>= 1;
    v5 += 4;
  }
  while ( v4 < 8 );
  Function_200c7ec(*(int **)(v2 + 56));
  v7 = Function_200c808();
  Function_223d6a8(v7);
  return Function_20241bc(1, 0);
}

//----- (0223C798) --------------------------------------------------------
int __fastcall Function_223c798(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;

  v1 = a1;
  v2 = Function_209b970(*(uint *)(a1 + 8));
  v3 = v2;
  v4 = Function_222ea90(*(uchar *)(v2 + 36), 12);
  if ( v4 && v4 == 1 )
    return Function_223c7ec(v1);
  if ( *(uint *)(v1 + 36) )
    ((void (*)(void))dword_222D1B8[28])();
  result = *(uint *)(v1 + 40);
  if ( result )
  {
    result = Function_222ea90(*(uchar *)(v3 + 36), 13);
    if ( result == 1 )
      result = ((int (__fastcall *)(uint, int))dword_222D1B8[28])(*(uint *)(v1 + 40), v1 + 28);
  }
  return result;
}

//----- (0223C7EC) --------------------------------------------------------
int __fastcall Function_223c7ec(int a1)
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
  int result;
  int v14;
  int v15;

  v1 = a1;
  v2 = Function_209b970(*(uint *)(a1 + 8));
  v3 = (short)(*(ushort *)(v1 + 170) + ((int (__fastcall *)(int))dword_222D1B0[0])(v1 + 28));
  v4 = (short)(*(ushort *)(v1 + 168) + ((int (__fastcall *)(int))dword_222D1B8[0])(v1 + 28));
  if ( v3 <= 0 )
  {
    v6 = fflt(v3 << 12);
    v15 = fsub(v6, 1056964608);
  }
  else
  {
    v5 = fflt(v3 << 12);
    v15 = fadd(0x3F000000u, v5);
  }
  if ( v4 <= 0 )
  {
    v8 = fflt(v4 << 12);
    v14 = fsub(v8, 1056964608);
  }
  else
  {
    v7 = fflt(v4 << 12);
    v14 = fadd(0x3F000000u, v7);
  }
  v9 = Function_200c738(*(uint *)(v1 + 52));
  v10 = ffix(v14);
  v11 = ffix(v15);
  Function_200962c(v9, v10, v11, v12);
  Function_201c63c(*(uint *)v1, 3, 0, v4);
  Function_201c63c(*(uint *)v1, 3, 3u, v3);
  result = Function_222ea90(*(uchar *)(v2 + 36), 9);
  if ( result != 0xFFFF )
  {
    result = Function_222ea90(*(uchar *)(v2 + 36), 13);
    if ( result == 1 )
    {
      Function_201c63c(*(uint *)v1, 2, 0, v4);
      result = Function_201c63c(*(uint *)v1, 2, 3u, v3);
    }
  }
  return result;
}

//----- (0223C8E8) --------------------------------------------------------
int __fastcall Function_223c8e8(uint *a1, int a2, int a3, int a4)
{
  uint *i;
  int result;
  char v6;
  char v7;
  int v8;

  v8 = a4;
  for ( i = a1;
        ((int (__fastcall *)(uint, char *))dword_222D810[0])(i[12], &v6) == 1;
        ((void (__fastcall *)(uint, char *))dword_222BE70[0])(i[5], &v6) )
  {
    ;
  }
  for ( result = ((int (__fastcall *)(uint, char *))dword_222D8D0[0])(i[11], &v7);
        result == 1;
        result = ((int (__fastcall *)(uint, char *))dword_222D8D0[0])(i[11], &v7) )
  {
    if ( ((int (__fastcall *)(uint, uint, char *, char *))dword_222CA88[0])(i[6], i[5], &v7, &v6) == 1 )
      ((void (__fastcall *)(uint, char *))dword_222BE70[0])(i[5], &v6);
  }
  return result;
}

//----- (0223C948) --------------------------------------------------------
void __fastcall Function_223c948(uint *a1, int a2, int a3, int a4)
{
  int v4;
  uint *v5;
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
  uint v17;
  uint v18;
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
  char v30;
  char v31;
  char v32;
  char v33;
  char v34;
  char v35;
  char v36;
  char v37;
  char v38;
  char v39;
  int v40;

  v40 = a4;
  v4 = a2;
  v5 = a1;
  v6 = Function_222ea90(a2, 0);
  Function_201ff00();
  v7 = dword_224135C;
  v8 = &v30;
  v9 = 5;
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
  GX_SetBanks((int *)&v30);
  MIi_CpuClear32(0, (uint *)0x6000000, 0x80000);
  MIi_CpuClear32(0, (uint *)0x6200000, 0x20000);
  MIi_CpuClear32(0, (uint *)0x6400000, 0x40000);
  MIi_CpuClear32(0, (uint *)0x6600000, 0x20000);
  v26 = 1;
  v28 = 0;
  v29 = 1;
  v27 = v6;
  SetGraphicsModes(&v26);
  v12 = dword_2241384;
  v13 = &v31;
  v14 = 10;
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
  *(uint *)v13 = *v12;
  if ( !v6 )
  {
    v34 = 0;
    v38 = 0;
    v35 = 0;
    v39 = 0;
  }
  v17 = Function_222ea90(v4, 4) << 16;
  v18 = v17 >> 16;
  v37 = BYTE2(v17);
  if ( Function_222ea90(v4, 9) != 0xFFFF )
    v33 = v18;
  if ( v6 )
  {
    Function_20183c4(v5, 1u, (int *)&v31, 0);
    Function_2019ebc(v5, 1u);
    Function_2019184((int)v5, 1u, 0, 0);
    Function_2019184((int)v5, 1u, 3u, 0);
    Function_20183c4(v5, 2u, (int *)&v32, 2);
    Function_2019ebc(v5, 2u);
    Function_2019184((int)v5, 2u, 0, 0);
    Function_2019184((int)v5, 2u, 3u, 0);
    Function_20183c4(v5, 3u, (int *)&v36, 2);
  }
  else
  {
    Function_20183c4(v5, 1u, (int *)&v31, 0);
    Function_2019ebc(v5, 1u);
    Function_2019184((int)v5, 1u, 0, 0);
    Function_2019184((int)v5, 1u, 3u, 0);
    Function_20183c4(v5, 2u, (int *)&v32, 0);
    Function_2019ebc(v5, 2u);
    Function_2019184((int)v5, 2u, 0, 0);
    Function_2019184((int)v5, 2u, 3u, 0);
    Function_20183c4(v5, 3u, (int *)&v36, 0);
  }
  Function_2019ebc(v5, 3u);
  Function_2019184((int)v5, 3u, 0, 0);
  Function_2019184((int)v5, 3u, 3u, 0);
  REG_BG0CNT &= 0xFFFCu;
  Function_201ff0c(1u, 1);
  v19 = 0;
  v20 = 0;
  v21 = 2048;
  v22 = 0;
  v23 = 983041;
  v24 = 768;
  v25 = 0;
  Function_20183c4(v5, 4u, &v19, 0);
  Function_2019ebc(v5, 4u);
  Function_2019184((int)v5, 4u, 0, 0);
  Function_2019184((int)v5, 4u, 3u, 0);
}

//----- (0223CB80) --------------------------------------------------------
uint __fastcall Function_223cb80(int a1)
{
  int v1;
  int v2;
  uchar v3;

  v1 = a1;
  Function_2003050(*(uint *)(a1 + 4), 14, 6, 94, 0, 32, 0xE0u);
  Function_2003050(*(uint *)(v1 + 4), 14, 7, 94, 0, 32, 0xD0u);
  v2 = Function_209b970(*(uint *)(v1 + 8));
  v3 = Function_2027b50(*(ushort **)(v2 + 4));
  Function_200dd0c(*(uint **)v1, 1u, 994, 11, v3, 94);
  GetPaletteAdresses(*(uint *)(v1 + 4), 0, 176, 32);
  Function_200daa4(*(uint **)v1, 1u, 985, 12, 0, 94);
  return GetPaletteAdresses(*(uint *)(v1 + 4), 0, 192, 32);
}

//----- (0223CC10) --------------------------------------------------------
uint __fastcall Function_223cc10(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;

  v4 = a1;
  v5 = LoadFromNARC_8(150, 0x5Eu, a3, a4);
  Function_20070e8((int)v5, 0x7Du, *(uint **)v4, 4u, 0, 0, 1, 94);
  Function_200710c((int)v5, 0x7Eu, *(uint **)v4, 4u, 0, 0, 1, 94);
  Function_2003050(*(uint *)(v4 + 4), 150, 171, 94, 1, 32, 0);
  return Call_FS_CloseFile(v5);
}

//----- (0223CC74) --------------------------------------------------------
uint __fastcall Function_223cc74(int *a1, int a2, int a3)
{
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  char *v9;
  char *v10;
  int v11;
  char v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int *v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v30;
  int v31;
  int v32;
  char v33;
  char v34;
  char v35;
  char v36;
  char v37;
  char v38;
  char v39;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  a1[5] = ((int (__fastcall *)(int, int))dword_222BE18[0])(32, 94);
  v3[6] = ((int (*)(void))dword_222BCE8[0])();
  ((void (__fastcall *)(int *))dword_222D050[83])(v3 + 7);
  v6 = Function_200d9b0(v3[14]);
  v7 = Function_222e5f0(v5);
  v8 = ((int (__fastcall *)(int, int, int, int, uint, int, int))dword_222CD2C[0])(
         v6,
         v3[1],
         32,
         v7,
         0,
         1,
         94);
  v9 = &byte_22412D8;
  v3[8] = v8;
  v10 = &v33;
  v11 = 11;
  do
  {
    v12 = *v9++;
    *v10++ = v12;
    --v11;
  }
  while ( v11 );
  v38 = Function_222ea90(v4, 5);
  v39 = Function_222ea90(v4, 6);
  v13 = Function_222ea90(v4, 12);
  if ( !v13 )
  {
    v14 = Function_200c738(v3[13]);
    v3[9] = ((int (__fastcall *)(int, int, char *, int))dword_222D1B8[2])(v14, *v3, &v33, 94);
  }
  if ( Function_222ea90(v4, 9) != 0xFFFF )
  {
    v39 = Function_222ea90(v4, 9);
    v34 = 2;
    v35 = 1;
    v36 = 8;
    v37 = 1;
    if ( !v13 )
    {
      v15 = Function_200c738(v3[13]);
      v3[10] = ((int (__fastcall *)(int, int, char *, int))dword_222D1B8[2])(v15, *v3, &v33, 94);
    }
  }
  v3[11] = ((int (__fastcall *)(int, int))dword_222D848[0])(128, 94);
  v3[12] = ((int (__fastcall *)(int, int))dword_222D1B8[369])(128, 94);
  ((void (__fastcall *)(int, int *))dword_222BD50[0])(v3[6], dword_22413D8);
  v16 = Function_222ea90(v4, 0);
  v30 = Function_222ea90(v4, 5);
  v19 = LoadFromNARC_8(v30, 0x5Eu, v17, v18);
  v20 = Function_222ea90(v4, 7);
  Function_20070e8((int)v19, v20, (uint *)*v3, 3u, 0, 0, 1, 94);
  if ( v16 )
  {
    v22 = Function_222ea90(v4, 8);
    v23 = Function_20071ec((int)v19, v22, &v32, 94);
    DC_FlushRange(*(uint *)(v32 + 12), *(uint *)(v32 + 8));
    GX_BeginLoadBGExtPltt();
    GX_LoadBGExtPltt(*(uint *)(v32 + 12), 24576, 0x2000);
    GX_EndLoadBGExtPltt();
    free(v23);
  }
  else
  {
    v21 = Function_222ea90(v4, 8);
    Function_2003050(v3[1], v30, v21, 94, 0, 352, 0);
  }
  Function_20038b0(v3[1], 0, 2, 0, 0, 1u);
  v24 = Function_222ea90(v4, 6);
  Function_200710c((int)v19, v24, (uint *)*v3, 3u, 0, 0, 1, 94);
  if ( Function_222ea90(v4, 9) != 0xFFFF )
  {
    v25 = Function_222ea90(v4, 10);
    Function_20070e8((int)v19, v25, (uint *)*v3, 2u, 0, 0, 1, 94);
    v26 = Function_222ea90(v4, 9);
    Function_200710c((int)v19, v26, (uint *)*v3, 2u, 0, 0, 1, 94);
    if ( v16 )
    {
      v27 = Function_222ea90(v4, 11);
      v28 = Function_20071ec((int)v19, v27, &v31, 94);
      DC_FlushRange(*(uint *)(v31 + 12), *(uint *)(v31 + 8));
      GX_BeginLoadBGExtPltt();
      GX_LoadBGExtPltt(*(uint *)(v31 + 12), 0x4000, 0x2000);
      GX_EndLoadBGExtPltt();
      free(v28);
    }
  }
  Function_201c3c0(*v3, 3);
  return Call_FS_CloseFile(v19);
}

//----- (0223CEEC) --------------------------------------------------------
int __fastcall Function_223ceec(uint *a1)
{
  uint *v1;
  uint *v2;
  int v3;

  v1 = a1;
  v2 = (uint *)Function_209b9d0(a1[2]);
  v3 = 0;
  do
  {
    if ( *v2 )
    {
      ((void (*)(void))dword_222BF08[0])();
      if ( v2[14] )
        ErrorHandler();
    }
    ++v3;
    v2 += 15;
  }
  while ( v3 < 32 );
  ((void (__fastcall *)(uint))dword_222BE58[0])(v1[5]);
  ((void (__fastcall *)(uint))dword_222BD30[0])(v1[6]);
  ((void (__fastcall *)(uint))dword_222CD9C[0])(v1[8]);
  if ( v1[9] )
    ((void (*)(void))dword_222D1B8[23])();
  if ( v1[10] )
    ((void (*)(void))dword_222D1B8[23])();
  ((void (__fastcall *)(uint))dword_222D880[0])(v1[11]);
  return ((int (__fastcall *)(uint))dword_222D1B8[383])(v1[12]);
}

//----- (0223CF4C) --------------------------------------------------------
int __fastcall Function_223cf4c(uint a1)
{
  return Function_2024220(a1, 0, 1, 0, 1, (void (*)(void))Function_223cf68);
}

//----- (0223CF68) --------------------------------------------------------
int *Function_223cf68()
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

//----- (0223CFEC) --------------------------------------------------------
uint __fastcall Function_223cfec(int a1)
{
  return Function_20242c4(a1);
}

//----- (0223CFF4) --------------------------------------------------------
int __fastcall Function_223cff4(int a1)
{
  int v1;
  uint *v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  v2 = Function_200c6e4(0x5Eu);
  *(uint *)(v1 + 52) = v2;
  Function_200c73c(v2, &dword_224133C, dword_22412F4, 32);
  Function_200966c(1, 2097168, v3, v4);
  Function_2009704(1);
  *(uint *)(v1 + 56) = Function_200c704(*(uint **)(v1 + 52));
  Function_200c7c0(*(int **)(v1 + 52), *(int ***)(v1 + 56), 128);
  Function_200cb30(*(uint **)(v1 + 52), *(uint *)(v1 + 56), dword_2241308);
  v5 = Function_200c738(*(uint *)(v1 + 52));
  return Function_200964c(v5, 0, 0x200000, v6);
}

//----- (0223D058) --------------------------------------------------------
uint __fastcall Function_223d058(int a1)
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

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    if ( *(uint *)(v3 + 60) )
      return Function_223d858();
    ++v2;
    v3 += 4;
  }
  while ( v2 < 8 );
  v5 = 0;
  v6 = a1;
  do
  {
    v7 = *(ushort *)(v6 + 112);
    if ( v7 != 0xFFFF )
      Function_223d7ec(*(uint *)(v1 + 56), v7);
    ++v5;
    v6 += 2;
  }
  while ( v5 < 8 );
  v8 = 0;
  v9 = v1;
  do
  {
    v10 = *(uint *)(v9 + 128);
    if ( v10 )
    {
      Function_200d0f4(v10);
      Function_200d070(*(uint *)(v1 + 56), v8 + 50000);
      Function_200d080(*(uint *)(v1 + 56), v8 + 50000);
      Function_200d090(*(uint *)(v1 + 56), v8 + 50000);
      Function_200d0a0(*(uint *)(v1 + 56), v8 + 50000);
    }
    ++v8;
    v9 += 4;
  }
  while ( v8 < 4 );
  Function_200d0b0(*(uint *)(v1 + 52), *(int ***)(v1 + 56));
  return Function_200c8d4(*(uint *)(v1 + 52));
}

//----- (0223D0EC) --------------------------------------------------------
int __fastcall Function_223d0ec(int a1, ushort *a2)
{
  int v2;
  ushort *v3;
  int v4;
  int v5;
  ushort *v6;
  int result;
  int v8;
  ushort *v9;
  int v10;

  v2 = a1;
  v3 = a2;
  v4 = Function_209b9cc(*(uint *)(a1 + 8));
  v5 = 0;
  v6 = (ushort *)v4;
  while ( 1 )
  {
    result = *v6;
    if ( *v3 == result )
      break;
    ++v5;
    v6 += 2;
    if ( v5 >= 24 )
    {
      v8 = 0;
      v9 = (ushort *)v4;
      do
      {
        if ( *v9 == 0xFFFF )
          break;
        ++v8;
        v9 += 2;
      }
      while ( v8 < 24 );
      if ( v8 == 24 )
        ErrorHandler();
      v10 = 4 * v8;
      *(ushort *)(v4 + v10) = *v3;
      *(ushort *)(v4 + v10 + 2) = v3[1];
      return ((int (__fastcall *)(uint, uint, uint, int))dword_222CDE8[0])(
               *(uint *)(v2 + 32),
               *v3,
               *((uchar *)v3 + 2),
               94);
    }
  }
  return result;
}

//----- (0223D148) --------------------------------------------------------
int __fastcall Function_223d148(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  ushort *v6;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = Function_209b9cc(*(uint *)(a1 + 8));
  v5 = 0;
  v6 = (ushort *)v4;
  while ( 1 )
  {
    result = *v6;
    if ( v3 == result )
      break;
    ++v5;
    v6 += 2;
    if ( v5 >= 24 )
      return result;
  }
  ((void (__fastcall *)(uint, int))dword_222CE0C[0])(*(uint *)(v2 + 32), v3);
  result = 4 * v5;
  *(ushort *)(v4 + 4 * v5) = -1;
  return result;
}

//----- (0223D180) --------------------------------------------------------
int __fastcall Function_223d180(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  uint *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  short v13;
  short v14;
  short v15;
  short v16;
  short v17;
  short v18;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = (uint *)Function_209b9d0(a1[2]);
  if ( v5 == -1 )
  {
    v5 = 0;
    do
    {
      if ( !*v6 )
        break;
      ++v5;
      v6 += 15;
    }
    while ( v5 < 32 );
    if ( v5 == 32 )
      ErrorHandler();
  }
  v13 = *(ushort *)(v4 + 6);
  v14 = *(ushort *)(v4 + 8);
  v15 = *(ushort *)(v4 + 4);
  v16 = *(ushort *)(v4 + 2);
  v17 = *(uchar *)(v4 + 10);
  v18 = *(ushort *)v4;
  v7 = ((int (__fastcall *)(uint, short *))dword_222BEC0[0])(v3[5], &v13);
  v8 = v7;
  v9 = ((int (__fastcall *)(uint, int, uint, int))dword_222CE44[0])(v3[8], v7, 0, 94);
  v10 = *(uchar *)(v4 + 11);
  v11 = v9;
  ((void (*)(void))dword_222D008[0])();
  Function_223d584(v3[2], v5, v8, v11, v4);
  return v8;
}

//----- (0223D200) --------------------------------------------------------
int __fastcall Function_223d200(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int *v5;
  int result;
  int v7;

  v2 = a2;
  v3 = Function_209b9d0(*(uint *)(a1 + 8));
  v4 = 0;
  v5 = (int *)v3;
  while ( 1 )
  {
    result = *v5;
    if ( *v5 == v2 )
      break;
    ++v4;
    v5 += 15;
    if ( v4 >= 32 )
      return result;
  }
  v7 = 60 * v4;
  ((void (__fastcall *)(uint))dword_222BF08[0])(*(uint *)(v3 + 60 * v4));
  ((void (__fastcall *)(uint))dword_222CECC[0])(*(uint *)(v3 + v7 + 4));
  if ( *(uint *)(v3 + v7 + 56) )
    ErrorHandler();
  MI_CpuFill8((ushort *)(v3 + v7), 0, 0x3Cu);
  result = v3 + v7;
  *(ushort *)(v3 + v7 + 12) = -1;
  return result;
}

//----- (0223D258) --------------------------------------------------------
int __fastcall Function_223d258(int a1, int a2, uint *a3, int *a4)
{
  int v4;
  uint *v5;
  int *v6;
  int result;
  int v8;
  int v9;

  v4 = a2;
  v5 = a3;
  v6 = a4;
  result = Function_209b9d0(*(uint *)(a1 + 8));
  v8 = 0;
  v9 = result;
  while ( v4 != *(ushort *)(v9 + 12) )
  {
    ++v8;
    v9 += 60;
    if ( v8 >= 32 )
      return ErrorHandler();
  }
  if ( v5 )
    *v5 = *(uint *)(result + 60 * v8);
  if ( v6 )
  {
    result = *(uint *)(result + 60 * v8 + 4);
    *v6 = result;
  }
  return result;
}

//----- (0223D29C) --------------------------------------------------------
ushort *__fastcall Function_223d29c(int a1, short a2)
{
  int v2;
  int v3;
  ushort *result;

  v2 = 0;
  v3 = a1;
  do
  {
    if ( *(ushort *)(v3 + 112) == 0xFFFF )
    {
      result = (ushort *)(a1 + 2 * v2 + 112);
      *result = a2;
      return result;
    }
    ++v2;
    v3 += 2;
  }
  while ( v2 < 8 );
  return (ushort *)ErrorHandler();
}

//----- (0223D2CC) --------------------------------------------------------
ushort *__fastcall Function_223d2cc(ushort *result, int a2)
{
  int v2;
  ushort *v3;

  v2 = 0;
  v3 = result;
  while ( a2 != (ushort)v3[56] )
  {
    ++v2;
    ++v3;
    if ( v2 >= 8 )
      return result;
  }
  result += v2 + 56;
  *result = -1;
  return result;
}

//----- (0223D2FC) --------------------------------------------------------
int __fastcall Function_223d2fc(int a1, uint a2, int a3)
{
  uint v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( a2 >= 8 )
    ErrorHandler();
  if ( *(uint *)(v4 + 60 + 4 * v3) )
    ErrorHandler();
  v6 = Function_223d828(*(uint *)(v4 + 52), *(uint *)(v4 + 56), v5);
  v7 = v6;
  *(uint *)(v4 + 60 + 4 * v3) = v6;
  *(ushort *)(v4 + 2 * v3 + 92) = v5;
  Function_223d378(v4, v3, 0);
  return v7;
}

//----- (0223D348) --------------------------------------------------------
int __fastcall Function_223d348(int a1, uint a2)
{
  uint v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 8 )
    ErrorHandler();
  v4 = 4 * v2;
  v5 = v3 + 60;
  if ( !*(uint *)(v5 + v4) )
    ErrorHandler();
  return Function_223d858(*(uint *)(v5 + v4));
}

//----- (0223D370) --------------------------------------------------------
int __fastcall Function_223d370(int a1, int a2)
{
  return *(uint *)(a1 + 4 * a2 + 60);
}

//----- (0223D378) --------------------------------------------------------
int __fastcall Function_223d378(int result, char a2, int a3)
{
  if ( a3 == 1 )
    *(uint *)(result + 108) |= 1 << a2;
  else
    *(uint *)(result + 108) &= ~(1 << a2);
  return result;
}

//----- (0223D3A4) --------------------------------------------------------
int __fastcall Function_223d3a4(int a1, char a2)
{
  return (*(uint *)(a1 + 108) >> a2) & 1;
}

//----- (0223D3B0) --------------------------------------------------------
int __fastcall Function_223d3b0(int a1)
{
  int v1;
  int **v2;
  int v3;
  int v4;
  int v5;
  ushort *v6;
  int result;
  int v8;
  ushort *v9;
  ushort *v10;
  int v11;

  v8 = a1;
  v1 = Function_209b9e0(*(uint *)(a1 + 8));
  v2 = (int **)(v8 + 60);
  v3 = 0;
  do
  {
    v4 = *((ushort *)v2 + v3 + 26);
    if ( v4 != 0xFFFF )
      *(ushort *)(v1 + 2 * v3++) = v4;
    ++v3;
  }
  while ( v3 < 8 );
  v10 = (ushort *)(v1 + 18);
  v5 = 0;
  v6 = (ushort *)(v1 + 22);
  v11 = v8 + 60;
  v9 = (ushort *)(v1 + 16);
  do
  {
    if ( *v2 )
    {
      *(uchar *)(v1 + 21) = Function_200d37c(*v2);
      *v6 = Function_200d3e0(*v2) & 0x1FFF | *v6 & 0xE000;
      *v6 = ((ushort)Function_223d3a4(v8, v5) << 13) & 0x3FFF | *v6 & 0xDFFF;
      *v6 = ((ushort)Function_200d408(*v2) << 14) & 0x7FFF | *v6 & 0xBFFF;
      *(uchar *)(v1 + 20) = *(ushort *)(v11 + 32);
      Function_200d550(*v2, v9, v10);
      *v6 |= 0x8000u;
    }
    ++v5;
    v11 += 2;
    ++v2;
    v10 += 4;
    v1 += 8;
    result = (int)(v9 + 4);
    v6 += 4;
    v9 += 4;
  }
  while ( v5 < 8 );
  return result;
}

//----- (0223D498) --------------------------------------------------------
ll __fastcall Function_223d498(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  short *v6;
  int v7;
  ushort *v8;
  int *v9;
  int *v11;

  v1 = a1;
  v2 = Function_209b9e0(a1[2]);
  v11 = LoadFromNARC_8(151, 0x5Eu, v3, v4);
  v5 = 0;
  v6 = (short *)v2;
  do
  {
    if ( (ushort)*v6 != 0xFFFF )
    {
      Function_223d768(v1[13], v1[14], v11, v1[1], (ushort)*v6);
      Function_223d29c((int)v1, *v6);
    }
    ++v5;
    ++v6;
  }
  while ( v5 < 8 );
  v7 = 0;
  v8 = (ushort *)(v2 + 22);
  do
  {
    if ( (uint)(ushort)*v8 << 16 >> 31 == 1 )
    {
      v9 = (int *)Function_223d2fc((int)v1, (ushort)v7, *(uchar *)(v2 + 20));
      Function_200d4c4(v9, *(short *)(v2 + 16), *(short *)(v2 + 18));
      Function_200d3f4((uint *)v9, (uint)(ushort)*v8 << 17 >> 31);
      Function_223d378((int)v1, v7, (uint)(ushort)*v8 << 18 >> 31);
      Function_200d364(v9, *(uchar *)(v2 + 21));
      Function_200d3cc(v9, *v8 & 0x1FFF);
    }
    ++v7;
    v8 += 4;
    v2 += 8;
  }
  while ( v7 < 8 );
  Call_FS_CloseFile(v11);
  return Function_209b9ec(v1[2]);
}

//----- (0223D554) --------------------------------------------------------
int __fastcall Function_223d554(int a1, ushort *a2, ushort *a3)
{
  int v3;
  ushort *v4;
  int result;

  v3 = a1;
  v4 = a2;
  *a3 = ((int (__fastcall *)(int))dword_222D1B0[0])(a1 + 28);
  result = ((int (__fastcall *)(int))dword_222D1B8[0])(v3 + 28);
  *v4 = result;
  return result;
}

//----- (0223D570) --------------------------------------------------------
short *__fastcall Function_223d570(int a1, ushort *a2)
{
  short *result;
  int v3;
  short v4;

  result = (short *)(a1 + 8);
  v3 = 15;
  do
  {
    v4 = *result;
    ++result;
    *a2 = v4;
    ++a2;
    --v3;
  }
  while ( v3 );
  return result;
}

//----- (0223D584) --------------------------------------------------------
ushort *__fastcall Function_223d584(int a1, int a2, int a3, int a4, short *a5)
{
  int v5;
  int v6;
  uint *v7;
  short *v8;
  ushort *result;
  int v10;
  short v11;

  v5 = a3;
  v6 = a4;
  v7 = (uint *)Function_209b9d4(a1, a2);
  *v7 = v5;
  v7[1] = v6;
  v8 = a5;
  result = v7 + 2;
  v10 = 15;
  do
  {
    v11 = *v8;
    ++v8;
    *result = v11;
    ++result;
    --v10;
  }
  while ( v10 );
  return result;
}

//----- (0223D5A8) --------------------------------------------------------
int __fastcall Function_223d5a8(int a1, int a2)
{
  int v2;
  int result;
  int v4;

  v2 = a2;
  result = Function_209b9d0(a1);
  v4 = 0;
  while ( !*(uint *)result || *(ushort *)(result + 12) != v2 )
  {
    ++v4;
    result += 60;
    if ( v4 >= 32 )
    {
      ErrorHandler();
      return 0;
    }
  }
  return result;
}

//----- (0223D5D0) --------------------------------------------------------
ushort *__fastcall Function_223d5d0(uint a1)
{
  short v1;
  ushort *v2;

  v1 = a1;
  v2 = (ushort *)malloc(a1, 36);
  MI_CpuFill8(v2, 0, 0x24u);
  v2[16] = v1;
  Function_2014000();
  return v2;
}

//----- (0223D5F0) --------------------------------------------------------
uint __fastcall Function_223d5f0(uint *a1)
{
  int v1;
  int v2;
  uint *v3;

  v1 = (int)a1;
  v2 = 0;
  v3 = a1;
  do
  {
    if ( *v3 )
      Function_223d708();
    ++v2;
    ++v3;
  }
  while ( v2 < 8 );
  return free(v1);
}

//----- (0223D614) --------------------------------------------------------
uint *__fastcall Function_223d614(int a1, int a2, int a3, char a4)
{
  int v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  uint *v9;
  int v10;
  int v11;
  char v13;

  v4 = a1;
  v5 = 4 * a2;
  v6 = a3;
  v13 = a4;
  if ( *(uint *)(a1 + 4 * a2) )
    ErrorHandler();
  v7 = (int *)malloc(*(ushort *)(v4 + 32), 18432);
  v8 = Function_2014014((int)Function_223d720, (int)Function_223d744, v7, 0x4800u, 1, *(ushort *)(v4 + 32));
  v9 = (uint *)v8;
  v10 = Function_2014784(v8);
  Function_20206bc(4096, 3686400, v10);
  Function_2014788((int)v9, v13);
  v11 = Call2_LoadFromNARC_2(157, v6, *(ushort *)(v4 + 32));
  Function_20144cc(v9, v11, 10, 1);
  *(uint *)(v4 + v5) = v9;
  return v9;
}

//----- (0223D68C) --------------------------------------------------------
int __fastcall Function_223d68c(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a1;
  v3 = 4 * a2;
  if ( !*(uint *)(a1 + 4 * a2) )
    ErrorHandler();
  Function_223d708(*(uint *)(v2 + v3));
  result = 0;
  *(uint *)(v2 + v3) = 0;
  return result;
}

//----- (0223D6A8) --------------------------------------------------------
int Function_223d6a8()
{
  Call_G3X_Reset();
  if ( !Function_2014680() )
    return 0;
  if ( Function_201469c() > 0 )
    Call_G3X_Reset();
  Function_20146c0();
  return 1;
}

//----- (0223D6D0) --------------------------------------------------------
int __fastcall Function_223d6d0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = 4 * a2;
  if ( !*(uint *)(a1 + 4 * a2) )
    ErrorHandler();
  return *(uint *)(v2 + v3);
}

//----- (0223D6E4) --------------------------------------------------------
int __fastcall Function_223d6e4(int *a1)
{
  int *v1;
  int v2;

  v1 = a1;
  v2 = 0;
  do
  {
    if ( *v1 && Function_2014710(*v1) > 0 )
      return 0;
    ++v2;
    ++v1;
  }
  while ( v2 < 8 );
  return 1;
}

//----- (0223D708) --------------------------------------------------------
uint __fastcall Function_223d708(int a1)
{
  uint **v1;
  int v2;

  v1 = (uint **)a1;
  v2 = Function_2014730(a1);
  Function_201411c(v1);
  return free(v2);
}

//----- (0223D720) --------------------------------------------------------
int Function_223d720()
{
  int v0;

  v0 = Function_20a5a2c();
  if ( !v0 )
    ErrorHandler();
  Function_20145b4(v0);
  return 8 * v0 & 0x7FFFF;
}

//----- (0223D744) --------------------------------------------------------
int Function_223d744()
{
  int v0;

  v0 = Function_20a5a3c();
  if ( !v0 )
    ErrorHandler();
  Function_20145f4(v0);
  return 8 * v0 & 0x7FFFF;
}

//----- (0223D768) --------------------------------------------------------
int __fastcall Function_223d768(uint *a1, int a2, int a3, int a4, ushort a5)
{
  uint *v5;
  int v6;
  int v7;
  uint *v8;
  int v10;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v10 = a4;
  if ( a5 >= 4u )
    ErrorHandler();
  v8 = (uint *)&dword_22417D8[13 * a5];
  Function_200cc3c(v5, v6, v7, v8[5], 1, 1, v8[5]);
  Function_200cdc4(v10, 2u, v5, v6, v7, v8[6], 0, 1, 1, v8[6]);
  Function_200ce24(v5, v6, v7, v8[7], 1, v8[7]);
  return Function_200ce54(v5, v6, v7, v8[8], 1, v8[8]);
}

//----- (0223D7EC) --------------------------------------------------------
int __fastcall Function_223d7ec(int a1, uint a2)
{
  uint v2;
  int v3;
  int *v4;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 4 )
    ErrorHandler();
  v4 = &dword_22417D8[13 * v2];
  Function_200d070(v3, v4[5]);
  Function_200d080(v3, v4[6]);
  Function_200d090(v3, v4[7]);
  return Function_200d0a0(v3, v4[8]);
}

//----- (0223D828) --------------------------------------------------------
int *__fastcall Function_223d828(uint *a1, int a2, uint a3)
{
  uint v3;
  uint *v4;
  int v5;
  int *v6;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  if ( a3 >= 4 )
    ErrorHandler();
  v6 = Function_200ce6c(v4, v5, (short *)&dword_22417D8[13 * v3]);
  Function_200d324(*v6);
  return v6;
}

//----- (0223D858) --------------------------------------------------------
uint __fastcall Function_223d858(int a1)
{
  return Function_200d0f4(a1);
}

//----- (0223D860) --------------------------------------------------------
int __fastcall Function_223d860(int a1, int a2, char a3, short *a4, int a5)
{
  char v5;
  short *v6;
  int v7;
  int result;
  int v9;
  short v10;

  v5 = a3;
  v6 = a4;
  v7 = Function_223d5a8(a1, a2);
  MI_CpuFill8((ushort *)(v7 + 38), 0, 0x10u);
  result = v7 + 38;
  v9 = 0;
  *(uchar *)(v7 + 38) = v5;
  if ( a5 > 0 )
  {
    result = 0;
    do
    {
      v10 = *v6;
      ++v9;
      ++v6;
      *(ushort *)(v7 + 40) = v10;
      v7 += 2;
    }
    while ( v9 < a5 );
  }
  return result;
}

//----- (0223D898) --------------------------------------------------------
void __fastcall Function_223d898(int a1, int a2)
{
  int v2;
  int (*v3)(void);

  v2 = a2;
  v3 = (int (*)(void))dword_22418A8[*(uchar *)(a2 + 38)];
  if ( v3 )
  {
    if ( v3() == 1 )
      MI_CpuFill8((ushort *)(v2 + 38), 0, 0x10u);
  }
}

//----- (0223D8C4) --------------------------------------------------------
void __fastcall Function_223d8c4(int a1)
{
  int v1;
  uint *v2;
  int v3;

  v1 = a1;
  v2 = (uint *)Function_209b9d0(a1);
  v3 = 0;
  do
  {
    if ( *v2 )
    {
      if ( !v2[14] )
        Function_223d898(v1, (int)v2);
    }
    ++v3;
    v2 += 15;
  }
  while ( v3 < 32 );
}

//----- (0223D8F0) --------------------------------------------------------
int __fastcall Function_223d8f0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;
  char v7;
  int v8;

  v2 = a2;
  v3 = a2 + 38;
  v4 = Function_209b974(a1);
  v5 = *(short *)(v3 + 6);
  if ( v5 <= 0 )
  {
    switch ( *(uchar *)(v3 + 1) )
    {
      case 0:
        switch ( (uchar)*(ushort *)(v3 + 2) )
        {
          case 0u:
          case 1u:
            if ( *(ushort *)(v3 + 4) )
            {
              *(ushort *)(v3 + 8) = 3;
              *(ushort *)(v3 + 10) = 2;
            }
            else
            {
              *(ushort *)(v3 + 8) = 2;
              *(ushort *)(v3 + 10) = 3;
            }
            goto LABEL_12;
          case 2u:
          case 3u:
            if ( *(ushort *)(v3 + 4) )
            {
              *(ushort *)(v3 + 8) = 1;
              *(ushort *)(v3 + 10) = 0;
            }
            else
            {
              *(ushort *)(v3 + 8) = 0;
              *(ushort *)(v3 + 10) = 1;
            }
LABEL_12:
            *(ushort *)(v3 + 12) = *(ushort *)(v3 + 2);
            ++*(uchar *)(v3 + 1);
            goto LABEL_13;
          default:
            ErrorHandler();
            result = 1;
            break;
        }
        break;
      case 1:
      case 2:
      case 3:
LABEL_13:
        Function_2232c80(
          (int)&v8,
          *(uint *)v2,
          *(ushort *)(v2 + 12),
          *(short *)(v3 + 2 * (*(uchar *)(v3 + 1) + 2) + 2));
        ((void (__fastcall *)(uint, int *))dword_222D7C8[0])(*(uint *)(v4 + 48), &v8);
        if ( *(short *)(v3 + 2) == *(short *)(v3 + 2 * (*(uchar *)(v3 + 1) + 2) + 2) )
        {
          *(ushort *)(v3 + 6) = 45;
          v7 = 1;
        }
        else
        {
          *(ushort *)(v3 + 6) = 30;
          v7 = *(uchar *)(v3 + 1) + 1;
        }
        *(uchar *)(v3 + 1) = v7;
        result = 0;
        break;
      default:
        result = 1;
        break;
    }
  }
  else
  {
    *(ushort *)(v3 + 6) = v5 - 1;
    result = 0;
  }
  return result;
}

//----- (0223D9E4) --------------------------------------------------------
int __fastcall Function_223d9e4(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = a2;
  v4 = malloc(0x5Eu, 12);
  MI_CpuFill8((ushort *)v4, 0, 0xCu);
  *(uint *)v4 = Function_223da40(v2);
  *(uint *)(v4 + 4) = Function_223dbb8(v3);
  G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 4, 31, 8, 9);
  return v4;
}

//----- (0223DA28) --------------------------------------------------------
uint __fastcall Function_223da28(uint *a1)
{
  int v1;

  v1 = (int)a1;
  Function_223db34(*a1);
  Function_223dc04(*(uint *)(v1 + 4));
  return free(v1);
}

//----- (0223DA40) --------------------------------------------------------
int __fastcall Function_223da40(int a1)
{
  int v1;
  int v2;
  int v3;
  short *v4;
  int v5;
  uint *v6;
  int v7;
  int v8;
  int v9;
  int *v10;
  int v11;
  int v12;
  int *v14;
  int v15;
  int v16;
  int v17;

  v1 = a1;
  v15 = malloc(0x5Eu, 139276);
  MI_CpuFill8((ushort *)v15, 0, 0x2200Cu);
  *(uint *)(v15 + 4) = v1;
  v4 = &word_22418B0;
  v14 = LoadFromNARC_8(150, 0x5Eu, v2, v3);
  v5 = 0;
  v6 = (uint *)(v15 + 8);
  do
  {
    v7 = Function_20071d0((int)v14, (ushort)*v4, 1, &v17, 94);
    MI_CpuCopy32((int *)(v17 + 12), v6, 4096);
    free(v7);
    ++v5;
    ++v4;
    v6 += 1024;
  }
  while ( v5 < 2 );
  Call_FS_CloseFile(v14);
  v10 = LoadFromNARC_8(150, 0x5Eu, v8, v9);
  v11 = Function_20071b4((int)v10, 0xEu, 1, &v16, 94);
  MI_CpuCopy32(*(int **)(v16 + 20), (uint *)(v15 + 8200), *(uint *)(v16 + 16));
  free(v11);
  v12 = Function_20071b4((int)v10, 0xFu, 1, &v16, 94);
  MI_CpuCopy32(*(int **)(v16 + 20), (uint *)(v15 + 73736), *(uint *)(v16 + 16));
  free(v12);
  Call_FS_CloseFile(v10);
  *(uint *)v15 = AddTaskToTaskList1((int)Function_223db48, v15, 0x1368Cu);
  return v15;
}

//----- (0223DB34) --------------------------------------------------------
uint __fastcall Function_223db34(int **a1)
{
  int v1;

  v1 = (int)a1;
  Call_RemoveTaskFromTaskList(*a1);
  return free(v1);
}

//----- (0223DB48) --------------------------------------------------------
int __fastcall Function_223db48(int a1, int a2)
{
  int v2;
  uint v3;
  int result;
  int v5;

  v2 = a2;
  v3 = *(uchar *)(a2 + 139272);
  if ( v3 >= 0xC )
  {
    *(uchar *)(a2 + 139272) = 0;
    Function_201958c(
      *(uint **)(a2 + 4),
      3u,
      (int *)(a2 + 8200 + (*(uchar *)(a2 + 139273) << 16)),
      0x10000,
      0);
    Function_2019574(*(uint *)(v2 + 4), 3, (int *)(v2 + 8 + (*(uchar *)(v2 + 139273) << 12)), 4096);
    Function_201c3c0(*(uint *)(v2 + 4), 3);
    v5 = *(uchar *)(v2 + 139273);
    result = v5 ^ 1;
    *(uchar *)(v2 + 139273) = v5 ^ 1;
  }
  else
  {
    result = v3 + 1;
    *(uchar *)(a2 + 139272) = result;
  }
  return result;
}

//----- (0223DBB8) --------------------------------------------------------
int __fastcall Function_223dbb8(int a1)
{
  int v1;
  int v2;
  int v3;
  short v4;

  v1 = a1;
  v2 = malloc(0x5Eu, 108);
  MI_CpuFill8((ushort *)v2, 0, 0x6Cu);
  *(uint *)(v2 + 4) = v1;
  *(uchar *)(v2 + 104) = 2;
  v3 = Function_2003164(v1, 0);
  MIi_CpuCopy16(v3 + 160, v2 + 8, 96, v4);
  *(uint *)v2 = AddTaskToTaskList1((int)Function_223dc18, v2, 0x1368Du);
  return v2;
}

//----- (0223DC04) --------------------------------------------------------
uint __fastcall Function_223dc04(int **a1)
{
  int v1;

  v1 = (int)a1;
  Call_RemoveTaskFromTaskList(*a1);
  return free(v1);
}

//----- (0223DC18) --------------------------------------------------------
uint __fastcall Function_223dc18(int a1, int a2)
{
  int v2;
  uint result;

  v2 = a2;
  if ( *(uchar *)(a2 + 105) >= 8u )
  {
    *(uchar *)(a2 + 105) = 0;
    Function_2002fbc(*(uint *)(a2 + 4), a2 + 8 + 32 * *(uchar *)(a2 + 104), 0, 96, 0x20u);
    result = (uchar)++*(uchar *)(v2 + 104);
    if ( result >= 3 )
    {
      result = 0;
      *(uchar *)(v2 + 104) = 0;
    }
  }
  else
  {
    result = *(uchar *)(a2 + 105) + 1;
    *(uchar *)(a2 + 105) = result;
  }
  return result;
}

//----- (0223DC7C) --------------------------------------------------------
uint *__fastcall Function_223dc7c(char a1, int a2, int a3, int a4, int a5, int a6, short a7, short a8)
{
  char v8;
  int v9;
  int v10;
  int v11;
  uint *v12;
  int v13;
  int v14;
  int v15;
  ushort *v16;
  uint *v17;
  uint *result;

  v8 = a1;
  v9 = a2;
  v10 = a3;
  v11 = a4;
  v12 = Function_200679c((int)Function_223ddb4, 360, 0x3E8u, 0x5Eu);
  v13 = Function_201ced0((int)v12);
  *(uint *)(v13 + 16) = v9;
  *(uint *)(v13 + 20) = v10;
  *(uint *)(v13 + 24) = v11;
  *(uint *)(v13 + 28) = a5;
  *(uint *)(v13 + 32) = a6;
  *(ushort *)(v13 + 40) = a7;
  *(ushort *)(v13 + 42) = a8;
  *(uint *)(v13 + 36) = LoadFromNARC_8(112, 0x5Eu, v14, v15);
  v16 = *(ushort **)(v13 + 32);
  if ( v16 )
    *v16 = 0;
  *(uchar *)(v13 + 44) = v8 - 1;
  v17 = (uint *)Function_2019f28(1u);
  MIi_CpuClear32(0, v17, 0x8000);
  Function_201c63c(v9, 1, 0, 0);
  Function_201c63c(v9, 1, 3u, 0);
  Function_223e5a8(v13, &dword_224191C[3 * *(uchar *)(v13 + 44)]);
  result = AddTaskToTaskList3((int)Function_223dd5c, v13, 1u);
  *(uint *)(v13 + 52) = result;
  return result;
}

//----- (0223DD30) --------------------------------------------------------
int __fastcall Function_223dd30(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Call_RemoveTaskFromTaskList(*(int **)(a1 + 320));
  Call_RemoveTaskFromTaskList(*(int **)(v2 + 52));
  Call_FS_CloseFile(*(int **)(v2 + 36));
  Function_2018238(0x5Eu, *(uint *)(v2 + 12));
  return Function_20067d0(v3);
}

//----- (0223DD5C) --------------------------------------------------------
int __fastcall Function_223dd5c(int a1, uchar *a2)
{
  uchar *v2;
  short v3;
  int v4;
  int v5;
  int result;

  v2 = a2;
  v3 = (v2[335] << 8) & 0xFF00 | v2[337];
  WIN0_X1 = v2[336] | (v2[334] << 8) & 0xFF00;
  WIN0_Y1 = v3;
  v4 = a2[341];
  v5 = a2[339];
  WIN1_X1 = v2[340] | (v2[338] << 8) & 0xFF00;
  result = (v5 << 8) & 0xFF00 | v4;
  WIN1_Y1 = ((ushort)v5 << 8) & 0xFF00 | v4;
  return result;
}

//----- (0223DDB4) --------------------------------------------------------
int __fastcall Function_223ddb4(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a1;
  result = Function_223dde4(a2, 94, &dword_224191C[3 * *(uchar *)(a2 + 44)]);
  if ( result == 1 )
    result = Function_223dd30(v2, v3);
  return result;
}

//----- (0223DDE4) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223E29C) --------------------------------------------------------
int __fastcall Function_223e29c(uint *a1, int **a2, int a3, int a4, int a5, char a6, int a7, int a8, int a9, int a10, int a11)
{
  int **v11;
  uint *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int *v17;
  int v18;
  int v19;
  uint *v20;
  int result;
  int v22;
  int v23;
  int v24;
  uint *v25;
  int v26;
  int v27;
  char v28;
  int v29;
  int *v30;
  char v31;
  int v32;
  int v33;
  int v34;
  int v35;
  char *v36;
  int v37;
  uchar *v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;

  v11 = a2;
  v12 = a1;
  v22 = a3;
  v23 = a4;
  v13 = a8;
  if ( *a2 )
    ErrorHandler();
  v25 = (uint *)v12[4];
  v24 = v12[6];
  if ( a11 )
  {
    v27 = *(ushort *)(a11 + 18);
    v26 = *(ushort *)(a11 + 16);
  }
  else
  {
    Function_223e3cc(v22, v23, &v27, &v26);
  }
  if ( a11 )
  {
    v14 = *(uint *)(a11 + 4);
    *(uint *)&v31 = *(uint *)a11;
    v32 = v14;
    v15 = *(uint *)(a11 + 12);
    v33 = *(uint *)(a11 + 8);
    v34 = v15;
  }
  else
  {
    Function_201a7a0((int)&v31);
    Function_201a870(v25, (int)&v31, (uchar)v26, 2, 0, 0);
    Function_201d7e0((int)&v31, v23);
  }
  v16 = Function_2012898((int)&v31, 1, 0x5Eu);
  Function_201ed94(v16, 1, 1, (int)&v28);
  if ( a10 == 1 )
    v13 = a8 - v27 / 2;
  v35 = v12[12];
  v36 = &v31;
  v37 = Function_200d9b0(v24);
  v38 = Function_200d04c(v24, a7);
  v39 = 0;
  v40 = v29;
  v41 = v13;
  v42 = a9 - 8;
  v44 = 11;
  v45 = 1;
  v46 = 94;
  v43 = 0;
  v17 = Function_20127e8(&v35);
  Function_2012ac0(v17, a6);
  Function_20128c4(v17, v13, a9 - 8, v18);
  if ( !a11 )
    Function_201a8fc((int)&v31);
  *v11 = v17;
  v19 = v29;
  v20 = v11 + 1;
  *v20 = *(uint *)&v28;
  v20[1] = v19;
  v11[3] = v30;
  result = v27;
  *((ushort *)v11 + 8) = v27;
  return result;
}

//----- (0223E3B8) --------------------------------------------------------
uint __fastcall Function_223e3b8(int **a1)
{
  int **v1;

  v1 = a1;
  Function_2012870(*a1);
  return Function_201ee28((int)(v1 + 1));
}

//----- (0223E3CC) --------------------------------------------------------
int __fastcall Function_223e3cc(int a1, int a2, int *a3, int *a4)
{
  int *v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int result;

  v4 = a3;
  v5 = a4;
  v6 = Function_2002d7c(a2, a1, 0);
  v7 = v6;
  v8 = v6 / 8;
  result = Function_20bd140(v6, 8);
  if ( result )
    ++v8;
  *v4 = v7;
  *v5 = v8;
  return result;
}

//----- (0223E3FC) --------------------------------------------------------
int __fastcall Function_223e3fc(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  short *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int *v15;
  int result;
  short v17;
  short v18;

  v4 = a4;
  v5 = a3;
  v6 = dword_22418E8;
  v7 = a1;
  v8 = a2;
  v9 = &v17;
  v10 = 6;
  do
  {
    v11 = *v6;
    v12 = v6[1];
    v6 += 2;
    *(uint *)v9 = v11;
    *((uint *)v9 + 1) = v12;
    v9 += 4;
    --v10;
  }
  while ( v10 );
  *(uint *)v9 = *v6;
  v17 = v5 >> 12;
  v18 = v4 >> 12;
  v13 = 0;
  *(ushort *)v8 = 0;
  *(ushort *)(v8 + 2) = 0;
  v14 = v8 + 20;
  do
  {
    v15 = Function_200ce6c(*(uint **)(v7 + 20), *(uint *)(v7 + 24), &v17);
    *(uint *)(v8 + 4) = v15;
    Function_200d3f4((uint *)v15, 0);
    if ( v13 != 3 )
    {
      Function_2021cf8(**(uint **)(v8 + 4), 2);
      Function_2021d6c(**(uint **)(v8 + 4), 1u);
    }
    result = Function_223e534(v14);
    ++v13;
    v8 += 4;
    v14 += 20;
  }
  while ( v13 < 4 );
  return result;
}

//----- (0223E48C) --------------------------------------------------------
uint __fastcall Function_223e48c(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = a1;
  v2 = 0;
  do
  {
    result = Function_200d0f4(*(uint *)(v1 + 4));
    ++v2;
    v1 += 4;
  }
  while ( v2 < 4 );
  return result;
}

//----- (0223E4A4) --------------------------------------------------------
int __fastcall Function_223e4a4(ushort *a1, int a2, int a3, int a4)
{
  ushort *v4;
  int v5;
  ushort *v6;
  ushort *v7;
  int v8;
  int v9;
  int v10;
  int v12;
  int v13;
  char v14;
  int v15;

  v15 = a4;
  v4 = a1;
  v12 = 1;
  if ( (short)a1[1] < 4 )
  {
    v12 = 0;
    if ( (short)--*a1 <= 0 )
    {
      *a1 = 3;
      ++a1[1];
    }
  }
  v13 = 0;
  if ( (short)a1[1] > 0 )
  {
    v5 = (int)(a1 + 10);
    v6 = a1;
    v7 = a1;
    do
    {
      v8 = Function_223e544(v5);
      v9 = *((uint *)v6 + 5);
      v10 = v8;
      Function_223e58c(&v14);
      Function_2021c70(**((uint ***)v7 + 1), (int *)&v14);
      Function_2021cac(**((uint **)v7 + 1), 1);
      if ( !v10 )
        v12 = 0;
      v5 += 20;
      ++v13;
      v6 += 10;
      v7 += 2;
    }
    while ( v13 < (short)v4[1] );
  }
  return v12;
}

//----- (0223E534) --------------------------------------------------------
uint *__fastcall Function_223e534(uint *result, int a2, int a3, int a4)
{
  *result = a2;
  result[1] = a2;
  result[2] = a3 - a2;
  result[4] = a4;
  result[3] = 0;
  return result;
}

//----- (0223E544) --------------------------------------------------------
int __fastcall Function_223e544(uint *a1)
{
  uint *v1;
  long long v2;
  int v3;
  int v4;
  int result;

  v1 = a1;
  v2 = ll_mul((int)a1[2], (int)(a1[3] << 12));
  *v1 = FX_Div((v2 + 2048) >> 12, v1[4] << 12) + v1[1];
  v3 = v1[4];
  v4 = v1[3] + 1;
  if ( v4 > v3 )
  {
    v1[3] = v3;
    result = 1;
  }
  else
  {
    v1[3] = v4;
    result = 0;
  }
  return result;
}

//----- (0223E58C) --------------------------------------------------------
int __fastcall Function_223e58c(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int result;

  *a1 = a2;
  a1[1] = a3;
  v4 = a1 + 2;
  result = a4;
  *v4 = a4;
  return result;
}

//----- (0223E5A8) --------------------------------------------------------
uint *__fastcall Function_223e5a8(int a1, uchar *a2)
{
  int v2;
  uchar *v3;
  int v4;
  short v5;
  uint *result;
  int v7;

  v2 = a1;
  v3 = a2;
  REG_DISPCNT = REG_DISPCNT & 0xFFFF1FFF | 0x6000;
  WIN_IN = WIN_IN & 0xFFC0 | 0x3F;
  WIN_IN = WIN_IN & 0xC0FF | 0x3F00;
  WIN_OUT = WIN_OUT & 0xFFC0 | 0x3D;
  WIN0_X1 = 0;
  WIN0_Y1 = 0;
  WIN1_X1 = 0;
  WIN1_Y1 = 0;
  Function_2003050(*(uint *)(a1 + 28), 112, a2[8], 94, 0, 32, 0xC0u);
  Function_20070e8(*(uint *)(v2 + 36), v3[9], *(uint **)(v2 + 16), 1u, 0, 0, 0, 94);
  Function_200710c(*(uint *)(v2 + 36), v3[10], *(uint **)(v2 + 16), 1u, 0, 0, 0, 94);
  Function_2019e2c(*(uint *)(v2 + 16), 1, 0, 0, 0x20u, 0x20u, 0xCu);
  Function_201c3c0(*(uint *)(v2 + 16), 1);
  v4 = Function_2006f88(112, v3[8], &v7, 94);
  MIi_CpuCopy16(*(uint *)(v7 + 12), v2 + 64, 256, v5);
  free(v4);
  result = AddTaskToTaskList1((int)Function_223e6bc, v2, 0x44Cu);
  *(uint *)(v2 + 320) = result;
  return result;
}

//----- (0223E6BC) --------------------------------------------------------
int __fastcall Function_223e6bc(int a1, int *a2)
{
  int result;
  int v3;

  result = a2[14] + 1;
  a2[14] = result;
  if ( result >= 0 )
  {
    a2[14] = 0;
    v3 = a2[15] + 1;
    a2[15] = v3;
    if ( v3 >= 8 )
      a2[15] = 0;
    result = Function_2002fbc(a2[7], (int)&a2[8 * a2[15] + 16], 0, 192, 0x20u);
  }
  return result;
}

//----- (0223E6F0) --------------------------------------------------------
uint *__fastcall Function_223e6f0(int a1, int a2)
{
  int v2;
  uint *v3;
  uint *result;

  v2 = a2;
  v3 = (uint *)(a1 + 324);
  MI_CpuFill8((ushort *)(a1 + 324), 0, 0x14u);
  if ( v2 )
  {
    *v3 = 11776;
    v3[1] = 29184;
    result = AddTaskToTaskList1((int)Function_223e7a4, (int)v3, 0x3E8u);
  }
  else
  {
    *v3 = 20480;
    v3[1] = 20480;
    result = AddTaskToTaskList1((int)Function_223e740, (int)v3, 0x3E8u);
  }
  return result;
}

//----- (0223E740) --------------------------------------------------------
int __fastcall Function_223e740(int *a1, int a2)
{
  int result;

  if ( *(uchar *)(a2 + 9) )
  {
    *(uchar *)(a2 + 8) = 1;
    result = Call_RemoveTaskFromTaskList(a1);
  }
  else
  {
    *(uint *)a2 -= 2048;
    *(uint *)(a2 + 4) += 2048;
    if ( *(uint *)a2 <= 11776 )
    {
      *(uint *)a2 = 11776;
      *(uint *)(a2 + 4) = 29184;
      ++*(uchar *)(a2 + 9);
    }
    *(uchar *)(a2 + 10) = 0;
    *(uchar *)(a2 + 11) = *(ushort *)a2 >> 8;
    *(uchar *)(a2 + 12) = -1;
    *(uchar *)(a2 + 13) = *(ushort *)(a2 + 4) >> 8;
    *(uchar *)(a2 + 14) = 1;
    *(ushort *)(a2 + 15) = (uchar)(*(ushort *)a2 >> 8);
    result = *(uint *)(a2 + 4) >> 8;
    *(uchar *)(a2 + 17) = result;
  }
  return result;
}

//----- (0223E7A4) --------------------------------------------------------
int __fastcall Function_223e7a4(int *a1, int a2)
{
  int result;

  if ( *(uchar *)(a2 + 9) )
  {
    *(uchar *)(a2 + 8) = 1;
    result = Call_RemoveTaskFromTaskList(a1);
  }
  else
  {
    *(uint *)a2 += 2048;
    *(uint *)(a2 + 4) -= 2048;
    if ( *(uint *)a2 >= 20480 )
    {
      *(uint *)a2 = 20480;
      *(uint *)(a2 + 4) = 20480;
      ++*(uchar *)(a2 + 9);
    }
    *(uchar *)(a2 + 10) = 0;
    *(uchar *)(a2 + 11) = *(ushort *)a2 >> 8;
    *(uchar *)(a2 + 12) = -1;
    *(uchar *)(a2 + 13) = *(ushort *)(a2 + 4) >> 8;
    *(uchar *)(a2 + 14) = 1;
    *(ushort *)(a2 + 15) = (uchar)(*(ushort *)a2 >> 8);
    result = *(uint *)(a2 + 4) >> 8;
    *(uchar *)(a2 + 17) = result;
  }
  return result;
}

//----- (0223E804) --------------------------------------------------------
int __fastcall Function_223e804(int a1, int a2, int *a3)
{
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v3 = a3;
  v4 = a1;
  v5 = a3[1];
  v6 = a2;
  if ( v5 )
  {
    if ( v5 != 1 )
      return 1;
    v7 = *a3 - 3840;
    *a3 = v7;
    if ( v7 <= 53248 )
    {
      *a3 = 53248;
      ++a3[1];
    }
    Function_200d500(*(int **)(v6 + 144), *a3 << 8 >> 16, (short)(*(ushort *)(v4 + 42) + 80), 0x200000);
  }
  else
  {
    Function_200d500(
      *(int **)(a2 + 144),
      (short)(*(ushort *)(v4 + 40) + 256),
      (short)(*(ushort *)(v4 + 42) + 80),
      0x200000);
    Function_200d3f4(*(uint **)(v6 + 144), 1);
    *v3 = 0x10000;
    ++v3[1];
  }
  return 0;
}

//----- (0223E894) --------------------------------------------------------
int __fastcall Function_223e894(int a1, int a2, int a3, uint *a4, int a5)
{
  int v5;
  int v6;
  uint *v7;
  int *v8;
  int result;
  int v10;

  v5 = a1;
  v6 = a2;
  v10 = a3;
  v7 = a4;
  v8 = (int *)malloc(0xBu, 76);
  Call_FillMemWithValue(v8, 0, 0x4Cu);
  AddTaskToTaskList1((int)Function_223e8d8, (int)v8, 5u);
  v8[18] = (int)v7;
  if ( v7 )
    *v7 = 0;
  v8[3] = v5;
  v8[4] = v6;
  v8[5] = v10;
  result = a5;
  v8[1] = a5;
  return result;
}

//----- (0223E8D8) --------------------------------------------------------
uint __fastcall Function_223e8d8(int *a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  uint *v5;
  uint result;

  v2 = a2;
  switch ( (uchar)*a2 )
  {
    case 0u:
      v3 = a2[3];
      if ( v3 == 1 )
      {
        Function_223e9ec(a2 + 12, 0, a2[5], 2, 8);
      }
      else if ( v3 == 2 )
      {
        Function_223e9ec(a2 + 12, 0, a2[5], 1, 8);
      }
      ++*v2;
      goto LABEL_18;
    case 1u:
      Function_223e9ec(a2 + 6, 0, a2[4], a2[3], 3);
      ++*v2;
      goto LABEL_18;
    case 2u:
      if ( Function_223e9f8(a2 + 6) )
        ++*v2;
      goto LABEL_18;
    case 3u:
      Function_223e9ec(a2 + 6, a2[4], 0, a2[3], 3);
      ++*v2;
      goto LABEL_18;
    case 4u:
      if ( Function_223e9f8(a2 + 6) )
      {
        v4 = v2[2] + 1;
        v2[2] = v4;
        if ( v4 == v2[1] )
          *v2 = 5;
        else
          *v2 = 1;
      }
      goto LABEL_18;
    case 5u:
      *a2 = 0;
      a2[2] = 0;
      v5 = (uint *)a2[18];
      if ( v5 )
        *v5 = 1;
      Call_RemoveTaskFromTaskList(a1);
      result = free((int)v2);
      break;
    default:
LABEL_18:
      result = Function_223e9f8(v2 + 12);
      break;
  }
  return result;
}

//----- (0223E9CC) --------------------------------------------------------
ushort *__fastcall Function_223e9cc(int a1, int a2)
{
  ushort *result;

  if ( a1 == 1 )
    result = GXx_SetMasterBrightness_(&REG_MASTER_BRIGHT, a2);
  else
    result = GXx_SetMasterBrightness_(&REG_MASTER_BRIGHT_SUB, a2);
  return result;
}

//----- (0223E9EC) --------------------------------------------------------
int __fastcall Function_223e9ec(int a1, int a2, int a3, int a4)
{
  *(uint *)(a1 + 20) = a4;
  return Function_223ea28();
}

//----- (0223E9F8) --------------------------------------------------------
int __fastcall Function_223e9f8(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_223ea38();
  AddTaskToTaskList3((int)Function_223ea14, v1, 0xAu);
  return v2;
}

//----- (0223EA14) --------------------------------------------------------
int __fastcall Function_223ea14(int *a1, int *a2)
{
  int *v2;

  v2 = a1;
  Function_223e9cc(a2[5], *a2);
  return Call_RemoveTaskFromTaskList(v2);
}

//----- (0223EA28) --------------------------------------------------------
uint *__fastcall Function_223ea28(uint *result, int a2, int a3, int a4)
{
  *result = a2;
  result[1] = a2;
  result[2] = a3 - a2;
  result[4] = a4;
  result[3] = 0;
  return result;
}

//----- (0223EA38) --------------------------------------------------------
int __fastcall Function_223ea38(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  *v1 = s32_div_f(a1[3] * a1[2], a1[4]) + v1[1];
  v2 = v1[4];
  v3 = v1[3] + 1;
  if ( v3 > v2 )
  {
    v1[3] = v2;
    result = 1;
  }
  else
  {
    v1[3] = v3;
    result = 0;
  }
  return result;
}

//----- (0223EA64) --------------------------------------------------------
int *__fastcall Function_223ea64(uint a1)
{
  int *v1;

  v1 = (int *)malloc(a1, 48);
  Call_FillMemWithValue(v1, 0, 0x30u);
  return v1;
}

//----- (0223EA7C) --------------------------------------------------------
uint __fastcall Function_223ea7c(int a1)
{
  return free(a1);
}

//----- (0223EA84) --------------------------------------------------------
int __fastcall Function_223ea84(int a1, int a2, int a3, int a4, int a5, int a6, int a7, char a8, char a9, char a10)
{
  int v10;
  int v11;
  int v12;
  int v13;
  int result;

  v10 = a1;
  v11 = a2;
  v12 = a3;
  v13 = a4;
  if ( *(uchar *)(a1 + 46) )
    ErrorHandler();
  Function_223ea28((uint *)v10, v11, v12, a6);
  Function_223ea28((uint *)(v10 + 20), v13, a5, a6);
  *(uint *)(v10 + 40) = a7;
  *(uchar *)(v10 + 44) = a8;
  *(uchar *)(v10 + 45) = a9;
  *(uchar *)(v10 + 47) = a10;
  result = 1;
  *(uchar *)(v10 + 46) = 1;
  return result;
}

//----- (0223EADC) --------------------------------------------------------
int __fastcall Function_223eadc(int a1)
{
  int v1;
  int v3;
  int v4;
  uint v5;
  int v6;
  int v7;

  v1 = a1;
  if ( !*(uchar *)(a1 + 46) )
    return 1;
  v3 = Function_223ea38((uint *)a1);
  Function_223ea38((uint *)(v1 + 20));
  v4 = *(uint *)(v1 + 20);
  v5 = (uint)*(uchar *)(v1 + 45) >> 1;
  v6 = (short)(*(ushort *)v1 - ((uint)*(uchar *)(v1 + 44) >> 1) + *(uchar *)(v1 + 44));
  v7 = *(uchar *)(v1 + 47);
  Function_223eb44(*(uint *)(v1 + 40));
  return v3;
}

//----- (0223EB44) --------------------------------------------------------
int __fastcall Function_223eb44(int result, int a2, int a3, int a4, int a5, char a6)
{
  short v6;
  ushort v7;

  v6 = a5;
  v7 = a2;
  if ( a5 > 0 && a3 > 0 && a4 != a5 && a2 != a3 )
  {
    if ( a4 < 0 )
      LOWORD(a4) = 0;
    if ( a5 > 256 )
      v6 = 256;
    if ( a2 < 0 )
      v7 = 0;
    if ( a3 > 256 )
      LOWORD(a3) = 256;
    result = Function_201ae78(result, a6, (ushort)a4, v7, v6 - a4, a3 - v7);
  }
  return result;
}

//----- (0223EBA0) --------------------------------------------------------
int *__fastcall Function_223eba0(uint a1)
{
  uint v1;
  int *v2;
  int v3;
  int *v4;

  v1 = a1;
  v2 = (int *)malloc(a1, 400);
  Call_FillMemWithValue(v2, 0, 0x190u);
  v3 = 0;
  v4 = v2;
  do
  {
    v4[1] = (int)Function_223ea64(v1);
    ++v3;
    ++v4;
  }
  while ( v3 < 96 );
  return v2;
}

//----- (0223EBD0) --------------------------------------------------------
uint __fastcall Function_223ebd0(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    Function_223ea7c(*(uint *)(v3 + 4));
    ++v2;
    v3 += 4;
  }
  while ( v2 < 96 );
  return free(v1);
}

//----- (0223EBF0) --------------------------------------------------------
int __fastcall Function_223ebf0(int result, char a2, char a3, int a4, char a5)
{
  *(uint *)result = a4;
  *(uchar *)(result + 396) = a5;
  *(uchar *)(result + 393) = a2;
  *(uchar *)(result + 394) = a3;
  *(uchar *)(result + 388) = 0;
  *(uchar *)(result + 389) = 0;
  *(uchar *)(result + 390) = 0;
  *(uchar *)(result + 391) = 0;
  *(uchar *)(result + 392) = 0;
  *(uchar *)(result + 395) = 0;
  *(uchar *)(result + 397) = 1;
  return result;
}

//----- (0223EC34) --------------------------------------------------------
int __fastcall Function_223ec34(int a1)
{
  int v1;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v1 = a1;
  if ( !*(uchar *)(a1 + 397) )
    return 1;
  if ( *(uchar *)(a1 + 388) < 0x60u && (char)--*(uchar *)(a1 + 395) <= 0 )
  {
    *(uchar *)(a1 + 395) = *(uchar *)(a1 + 394);
    v3 = 32 * *((uchar *)&dword_2241970[4 * *(uchar *)(a1 + 391)] + *(uchar *)(a1 + 389));
    Function_223ea84(
      *(uint *)(a1 + 4 * *(uchar *)(a1 + 388) + 4),
      v3,
      v3 + 32,
      16 * *(uchar *)(a1 + 390) + 8,
      16 * *(uchar *)(a1 + 390) + 8,
      *(uchar *)(a1 + 393),
      *(uint *)a1,
      32,
      16,
      *(uchar *)(a1 + 396));
    v4 = 32
       * *((uchar *)&dword_2241970[4 * (*(uchar *)(v1 + 391) ^ 1)] + *(uchar *)(v1 + 389));
    Function_223ea84(
      *(uint *)(v1 + 4 * (*(uchar *)(v1 + 388) + 1) + 4),
      v4,
      v4 + 32,
      16 * (5 - *(uchar *)(v1 + 390)) + 8,
      16 * (5 - *(uchar *)(v1 + 390)) + 8,
      *(uchar *)(v1 + 393),
      *(uint *)v1,
      32,
      16,
      *(uchar *)(v1 + 396));
    v5 = 32 * *((uchar *)&dword_2241970[4 * *(uchar *)(v1 + 391)] + *(uchar *)(v1 + 389));
    Function_223ea84(
      *(uint *)(v1 + 4 * (*(uchar *)(v1 + 388) + 2) + 4),
      v5,
      v5 + 32,
      16 * (*(uchar *)(v1 + 390) + 6) + 8,
      16 * (*(uchar *)(v1 + 390) + 6) + 8,
      *(uchar *)(v1 + 393),
      *(uint *)v1,
      32,
      16,
      *(uchar *)(v1 + 396));
    v6 = 32
       * *((uchar *)&dword_2241970[4 * (*(uchar *)(v1 + 391) ^ 1)] + *(uchar *)(v1 + 389));
    Function_223ea84(
      *(uint *)(v1 + 4 * (*(uchar *)(v1 + 388) + 3) + 4),
      v6,
      v6 + 32,
      16 * (11 - *(uchar *)(v1 + 390)) + 8,
      16 * (11 - *(uchar *)(v1 + 390)) + 8,
      *(uchar *)(v1 + 393),
      *(uint *)v1,
      32,
      16,
      *(uchar *)(v1 + 396));
    *(uchar *)(v1 + 388) += 4;
    ++*(uchar *)(v1 + 389);
    if ( !(((uint)*(uchar *)(v1 + 389) >> 31)
         + __ROR4__((*(uchar *)(v1 + 389) << 29) - ((uint)*(uchar *)(v1 + 389) >> 31), 29)) )
    {
      *(uchar *)(v1 + 391) ^= 1u;
      ++*(uchar *)(v1 + 390);
      *(uchar *)(v1 + 389) = 0;
    }
  }
  v7 = *(uchar *)(v1 + 392);
  if ( v7 < *(uchar *)(v1 + 388) )
  {
    v8 = v1 + 4 * v7;
    do
    {
      v9 = Function_223eadc(*(uint *)(v8 + 4));
      if ( v9 == 1 )
        ++*(uchar *)(v1 + 392);
      ++v7;
      v8 += 4;
    }
    while ( v7 < *(uchar *)(v1 + 388) );
  }
  if ( *(uchar *)(v1 + 392) < 0x60u || v9 != 1 )
    return 0;
  *(uchar *)(v1 + 397) = 0;
  return 1;
}

//----- (0223EE44) --------------------------------------------------------
int __fastcall Function_223ee44(int a1)
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

  v1 = a1;
  if ( !*(uchar *)(a1 + 397) )
    return 1;
  if ( *(uchar *)(a1 + 388) < 0x60u && (char)--*(uchar *)(a1 + 395) <= 0 )
  {
    *(uchar *)(a1 + 395) = *(uchar *)(a1 + 394);
    v3 = 16 * *(uchar *)(a1 + 389) + 8;
    Function_223ea84(
      *(uint *)(a1 + 4 * *(uchar *)(a1 + 388) + 4),
      v3,
      v3,
      32 * *((uchar *)dword_2241964 + 6 * *(uchar *)(a1 + 391) + *(uchar *)(a1 + 390)),
      32 * *((uchar *)dword_2241964 + 6 * *(uchar *)(a1 + 391) + *(uchar *)(a1 + 390))
    + 32,
      *(uchar *)(a1 + 393),
      *(uint *)a1,
      16,
      32,
      *(uchar *)(a1 + 396));
    v4 = 16 * (7 - *(uchar *)(v1 + 389)) + 8;
    Function_223ea84(
      *(uint *)(v1 + 4 * (*(uchar *)(v1 + 388) + 1) + 4),
      v4,
      v4,
      32
    * *((uchar *)dword_2241964 + 6 * (*(uchar *)(v1 + 391) ^ 1) + *(uchar *)(v1 + 390)),
      32
    * *((uchar *)dword_2241964 + 6 * (*(uchar *)(v1 + 391) ^ 1) + *(uchar *)(v1 + 390))
    + 32,
      *(uchar *)(v1 + 393),
      *(uint *)v1,
      16,
      32,
      *(uchar *)(v1 + 396));
    v5 = 16 * (*(uchar *)(v1 + 389) + 8) + 8;
    Function_223ea84(
      *(uint *)(v1 + 4 * (*(uchar *)(v1 + 388) + 2) + 4),
      v5,
      v5,
      32 * *((uchar *)dword_2241964 + 6 * *(uchar *)(v1 + 391) + *(uchar *)(v1 + 390)),
      32 * *((uchar *)dword_2241964 + 6 * *(uchar *)(v1 + 391) + *(uchar *)(v1 + 390))
    + 32,
      *(uchar *)(v1 + 393),
      *(uint *)v1,
      16,
      32,
      *(uchar *)(v1 + 396));
    v6 = 16 * (15 - *(uchar *)(v1 + 389)) + 8;
    Function_223ea84(
      *(uint *)(v1 + 4 * (*(uchar *)(v1 + 388) + 3) + 4),
      v6,
      v6,
      32
    * *((uchar *)dword_2241964 + 6 * (*(uchar *)(v1 + 391) ^ 1) + *(uchar *)(v1 + 390)),
      32
    * *((uchar *)dword_2241964 + 6 * (*(uchar *)(v1 + 391) ^ 1) + *(uchar *)(v1 + 390))
    + 32,
      *(uchar *)(v1 + 393),
      *(uint *)v1,
      16,
      32,
      *(uchar *)(v1 + 396));
    *(uchar *)(v1 + 388) += 4;
    s32_div_f((uchar)++*(uchar *)(v1 + 390), 6);
    if ( !v7 )
    {
      *(uchar *)(v1 + 391) ^= 1u;
      ++*(uchar *)(v1 + 389);
      *(uchar *)(v1 + 390) = 0;
    }
  }
  v8 = *(uchar *)(v1 + 392);
  if ( v8 < *(uchar *)(v1 + 388) )
  {
    v9 = v1 + 4 * v8;
    do
    {
      v10 = Function_223eadc(*(uint *)(v9 + 4));
      if ( v10 == 1 )
        ++*(uchar *)(v1 + 392);
      ++v8;
      v9 += 4;
    }
    while ( v8 < *(uchar *)(v1 + 388) );
  }
  if ( *(uchar *)(v1 + 392) < 0x60u || v10 != 1 )
    return 0;
  *(uchar *)(v1 + 397) = 0;
  return 1;
}

//----- (0223F05C) --------------------------------------------------------
uint *__fastcall Function_223f05c(int a1)
{
  return AddTaskToTaskList2((int)Function_223f070, a1, 0x400u);
}

//----- (0223F070) --------------------------------------------------------
int __fastcall Function_223f070(int a1, int *a2)
{
  uint *v2;
  int result;

  v2 = (uint *)a2;
  if ( (uint)a2[2] >= 2 )
  {
    Function_2013da4(*a2);
    v2[2] = 0;
  }
  Function_2013ddc(*v2);
  result = v2[2] + 1;
  v2[2] = result;
  return result;
}

//----- (0223F094) --------------------------------------------------------
uint *__fastcall Function_223f094(int **a1, uint a2)
{
  int v2;
  uint *result;

  v2 = (int)a1;
  *a1 = Function_2013be0(a2);
  *(uint *)(v2 + 8) = 0;
  result = Function_223f05c(v2);
  *(uint *)(v2 + 4) = result;
  return result;
}

//----- (0223F0B0) --------------------------------------------------------
int __fastcall Function_223f0b0(int *a1, char a2, char a3, int a4, int a5, short a6, int a7, int a8, uint a9)
{
  return Function_2013c10(*a1, a2, a3, a4, a5, a6, a7, a8, a9);
}

//----- (0223F0D8) --------------------------------------------------------
uint __fastcall Function_223f0d8(int a1, int a2)
{
  if ( !*(uint *)(a2 + 8) )
    return Function_2013ba8();
  *(uint *)(a2 + 12) = 1;
  return (*(int (__fastcall **)(uint))(a2 + 16))(*(uint *)(a2 + 24));
}

//----- (0223F0F4) --------------------------------------------------------
int __fastcall Function_223f0f4(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  result = *(uint *)(a2 + 8);
  if ( result )
  {
    result = *(uint *)(a2 + 12);
    if ( result )
    {
      (*(void (__fastcall **)(uint))(a2 + 20))(*(uint *)(a2 + 24));
      result = 0;
      *(uint *)(v2 + 12) = 0;
    }
  }
  return result;
}

//----- (0223F110) --------------------------------------------------------
uint *__fastcall Function_223f110(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  uint *result;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( !a1 )
    ErrorHandler();
  v4[2] = 1;
  v4[3] = 0;
  v4[6] = v5;
  v4[4] = v6;
  v4[5] = v7;
  v4[1] = AddTaskToTaskList3((int)Function_223f0d8, (int)v4, 0);
  result = AddTaskToTaskList2((int)Function_223f0f4, (int)v4, 0);
  *v4 = result;
  return result;
}

//----- (0223F150) --------------------------------------------------------
uint __fastcall Function_223f150(int **a1)
{
  int **v1;
  int *v2;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  v2 = v1[1];
  if ( v2 )
    Call_RemoveTaskFromTaskList(v2);
  if ( *v1 )
    Call_RemoveTaskFromTaskList(*v1);
  return Function_2013ba8();
}

//----- (0223F174) --------------------------------------------------------
uint __fastcall Function_223f174(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_2013b68(*(uint *)(a1 + 28));
  Function_2013ba8();
  return Function_2013bb8(v2, *(uint *)(v1 + 12320), 0x20u, 1);
}

//----- (0223F198) --------------------------------------------------------
uint __fastcall Function_223f198(int a1)
{
  int v1;

  v1 = a1;
  Function_2013b94(*(uint *)(a1 + 28));
  return Function_223f174(v1);
}

//----- (0223F1AC) --------------------------------------------------------
uint __fastcall Function_223f1ac(int a1)
{
  return Function_223f174(a1);
}

//----- (0223F1B4) --------------------------------------------------------
int *__fastcall Function_223f1b4(int a1, uint *a2, uint a3)
{
  uint *v3;
  uint v4;
  int v5;
  uchar *v6;
  int v7;
  int *v8;
  uint *v9;
  int v10;
  uint *v11;
  int v12;
  uint *v13;
  int v14;
  uint *v15;
  int v16;
  uint *v17;
  int v18;
  uint *v19;
  int v20;
  uint *v21;
  int v22;
  uint *v23;
  int v24;
  int *v26;

  v3 = a2;
  v4 = a3;
  v5 = a1;
  v26 = (int *)malloc(a3, 12324);
  Call_FillMemWithValue(v26, 0, 0x3024u);
  if ( !v26 )
    ErrorHandler();
  v6 = Function_2013b10(v4, (int)(v26 + 8), (int)(v26 + 1544));
  v26[7] = (int)v6;
  if ( !v6 )
    ErrorHandler();
  v7 = 0;
  v26[3080] = v5;
  v8 = v26;
  do
  {
    v9 = v8 + 8;
    v10 = v3[1];
    *v9 = *v3;
    v9[1] = v10;
    v11 = v8 + 10;
    v12 = v3[3];
    *v11 = v3[2];
    v11[1] = v12;
    v13 = v8 + 12;
    v14 = v3[5];
    *v13 = v3[4];
    v13[1] = v14;
    v15 = v8 + 14;
    v16 = v3[7];
    *v15 = v3[6];
    v15[1] = v16;
    v17 = v8 + 1544;
    v18 = v3[1];
    *v17 = *v3;
    v17[1] = v18;
    v19 = v8 + 1546;
    v20 = v3[3];
    *v19 = v3[2];
    v19[1] = v20;
    v21 = v8 + 1548;
    v22 = v3[5];
    *v21 = v3[4];
    v21[1] = v22;
    v23 = v8 + 1550;
    v24 = v3[7];
    ++v7;
    v8 += 8;
    *v23 = v3[6];
    v23[1] = v24;
  }
  while ( v7 < 192 );
  Function_223f110(v26, (int)v26, (int)Function_223f198, (int)Function_223f1ac);
  return v26;
}

//----- (0223F258) --------------------------------------------------------
uint __fastcall Function_223f258(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  Function_223f150((int **)v1);
  v2 = *(uint *)(v1 + 28);
  if ( v2 )
    Function_2013b40(v2);
  return free(v1);
}

//----- (0223F27C) --------------------------------------------------------
int __fastcall Function_223f27c(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return Function_2013b54(*(uint *)(v1 + 28));
}

