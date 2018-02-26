//----- (0222AE60) --------------------------------------------------------
int Function_222ae60()
{
  return 0;
}

//----- (0222AE64) --------------------------------------------------------
int __fastcall Function_222ae64(uint *a1)
{
  uint *v1;
  int v2;
  uint *v3;
  int v4;
  int *v5;
  int v6;
  int result;
  char v8;

  v1 = a1;
  if ( Function_201a7cc((int)(a1 + 86)) )
  {
    if ( dword_21BF6C4 & 3 )
    {
      Function_2005748(0x5DCu);
      Function_200dc9c((int)(v1 + 86), 0);
      Function_201a8fc((int)(v1 + 86));
    }
    result = 1;
  }
  else
  {
    v2 = 0;
    v3 = v1;
    do
    {
      if ( v3[85] == 1 )
      {
        v1[v2 + 85] = 0;
        v4 = 7 * v2;
        v5 = &dword_223DF54[7 * v2];
        v6 = v5[4];
        Function_2237808(&v8, v1 + 86);
        Function_2237858(&v8, v5[2], v5[3], 19);
        Function_223795c(*v1, &v8, dword_223DF54[v4], v5[1], v5[5]);
        return 1;
      }
      ++v2;
      ++v3;
    }
    while ( v2 < 1 );
    result = 0;
  }
  return result;
}

//----- (0222AF1C) --------------------------------------------------------
int __fastcall Function_222af1c(int a1)
{
  int v1;
  int result;
  int v3;

  v1 = a1;
  result = Function_2235d2c(0);
  v3 = 0;
  *(uint *)(v1 + 36) = 0;
  if ( !result )
  {
    switch ( (uchar)Function_2235db0() )
    {
      case 0u:
        v3 = 2;
        break;
      case 1u:
        v3 = 1;
        break;
      case 2u:
        v3 = 5;
        break;
      case 3u:
        v3 = 4;
        break;
      case 4u:
        v3 = 3;
        break;
      default:
        break;
    }
    Function_2017b70(v3);
    result = Function_2027474(*(uint **)(v1 + 8));
    if ( result )
    {
      result = Function_2235dbc();
      if ( (uchar)CountryOfOriginValue == result )
      {
        *(uint *)(v1 + 36) = Function_2235db0() + 1;
        result = Function_2238440();
      }
    }
  }
  return result;
}

//----- (0222AF8C) --------------------------------------------------------
int __fastcall Function_222af8c(int *a1)
{
  int *v1;
  int result;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  result = a1[73] - 10;
  switch ( (uchar)result )
  {
    case 0:
      result = 11;
      v1[73] = 11;
      break;
    case 1:
      Function_2037d48(v1[1]);
      v1[74] = 120;
      v1[73] = 13;
      v1[16] = 0;
      result = Function_202dec4(v1[5]);
      if ( result == 1 )
      {
        v1[16] |= 1u;
        result = v1[17] | 1;
        v1[17] = result;
      }
      break;
    case 3:
      result = v1[76];
      if ( !result )
      {
        v3 = Function_2037da0();
        v4 = v1[16];
        v5 = v3 & ~v4;
        if ( v5 && v1[75] == 15 && !v1[76] && v4 != v5 )
        {
          v1[18] = 1;
          if ( v5 & 1 )
          {
            v1[13] = 1;
            v5 = 1;
          }
          if ( v5 & 2 )
          {
            v1[11] = 1;
            v5 = 2;
          }
          if ( v5 & 4 )
          {
            v1[12] = 1;
            v5 = 4;
          }
          if ( v5 & 3 )
            v1[84] = 1;
          v1[16] |= v5;
        }
        result = --v1[74];
        if ( !result )
        {
          Function_2037d84();
          result = 292;
          v1[73] = 12;
        }
      }
      break;
    case 4:
      Function_2037d84();
      result = 292;
      v1[73] = 12;
      break;
    default:
      return result;
  }
  return result;
}

//----- (0222B07C) --------------------------------------------------------
int __fastcall Function_222b07c(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int *v5;
  uint v6;
  int v8;
  int v9;
  int v10;
  uchar v11;
  uchar v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v16 = a4;
  v5 = a1;
  v6 = a1[75] - 15;
  if ( v6 <= 4 )
    JUMPOUT(__CS__, *((short *)&off_222B09C + v6) + 35827870);
  switch ( (uchar)v6 )
  {
    case 0:
      if ( !v5[76] )
        return 0;
      if ( !--v5[76] )
        v5[75] = 16;
      return 1;
    case 1:
      Function_200daa4((uint *)*v5, 1u, 1, 2, 0, 81);
      Function_2019ebc((uint *)*v5, 1u);
      MEMORY[0x5000042] = 27482;
      v5[75] = 17;
      return 1;
    case 2:
      Function_2237808(&v13, v5 + 79);
      v8 = ~v5[17] & v5[16];
      if ( v8 & 1 )
      {
        if ( v5[14] & 1 )
          v4 = &dword_223DFB0;
        else
          v4 = &dword_223DFC4;
      }
      else if ( v8 & 2 )
      {
        if ( v5[14] & 2 )
          v4 = &dword_223DFD8;
        else
          v4 = &dword_223DFEC;
      }
      else if ( v8 & 0x80 )
      {
        v4 = &dword_223E000;
        v8 = 0;
      }
      v5[17] |= v8;
      Function_2237858(&v13, v4[2], v4[3], 19);
      v15 = 1;
      Function_223795c(*v5, &v13, *v4, v4[1], v4[4]);
      v9 = Function_201c29c(v14);
      v10 = Function_201c2a0(v14);
      v11 = Function_201c294(v14);
      v12 = Function_201c298(v14);
      Function_2019e2c(*v5, 1, v9, v10, v11, v12, 0);
      Function_201ff0c(1u, 0);
      Function_201ff0c(4u, 0);
      Function_201ff0c(2u, 1);
      v5[77] = 30;
      v5[75] = 18;
      break;
    case 3:
      if ( v5[77] )
      {
        --v5[77];
      }
      else if ( dword_21BF6C4 & 3 )
      {
        Function_201a8fc((int)(v5 + 79));
        v5[75] = 19;
        v5[78] = dword_21BF6C4;
        Function_2005748(0x5DCu);
      }
      break;
    case 4:
      Function_201ff0c(1u, 1);
      Function_201ff0c(4u, 1);
      Function_201ff0c(2u, 0);
      v5[75] = 15;
      break;
    default:
      return 1;
  }
  return 1;
}

//----- (0222B25C) --------------------------------------------------------
int __fastcall Function_222b25c(int *a1)
{
  int *v1;
  int v2;
  int result;
  int v4;
  int v5;

  v1 = a1;
  v2 = a1[72];
  result = a1[71];
  if ( result != v2 )
  {
    v4 = (v2 - result) / 4;
    if ( abs(v4) > 49152 )
    {
      if ( v4 <= 0 )
        v4 = -49152;
      else
        v4 = 49152;
    }
    v1[71] += v4;
    v5 = v1[72];
    if ( abs(v5 - v1[71]) < 512 )
      v1[71] = v5;
    Function_201c63c(*v1, 0, 3u, v1[71] / 4096);
    result = Function_201c63c(*v1, 2, 3u, v1[71] / 4096);
  }
  return result;
}

//----- (0222B2EC) --------------------------------------------------------
int __fastcall Function_222b2ec(uint **a1, int a2, int a3, int a4)
{
  int *v4;
  uint **v5;
  char *v6;
  int v7;
  int v8;
  int v9;
  int result;
  int v11;
  int v12;
  int v13;
  int v14;
  char v15;
  int v16;

  v16 = a4;
  v4 = dword_223D694;
  v5 = a1;
  v6 = &v15;
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
  v11 = 1;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  GX_SetBanks((int *)&v15);
  SetGraphicsModes(&v11);
  Function_22376fc(*v5);
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 2;
  Function_2019690(0, 32, 0, 0x51u);
  Function_22376fc(*v5);
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 1;
  Function_2019690(1u, 32, 0, 0x51u);
  Function_22376fc(*v5);
  REG_BG2CNT &= 0xFFFCu;
  Function_2019690(2u, 32, 0, 0x51u);
  Function_201d710();
  LoadFromNARC_PlFont1(0, 32, 81);
  LoadFromNARC_PlFont1(0, 0, 81);
  MEMORY[0x5000000] = 0;
  MEMORY[0x500003E] = 27482;
  Function_200daa4(*v5, 0, 1, 2, 0, 81);
  Function_200daa4(*v5, 0, 10, 3, 1, 81);
  result = 83886146;
  MEMORY[0x5000042] = 27482;
  return result;
}

//----- (0222B404) --------------------------------------------------------
uint __fastcall Function_222b404(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = Function_2237a20();
  Function_2237a74(v2);
  Function_2237b0c(116, 43, 40, 42, 41, 0);
  v3 = *(uint *)(v1 + 360);
  *(uint *)(v1 + 360) = Function_2237d14(0);
  Function_2021cac(*(uint *)(v1 + 360), 0);
  v4 = *(uint *)(v1 + 364);
  *(uint *)(v1 + 364) = Function_2237d14(0);
  return Function_2021cac(*(uint *)(v1 + 364), 0);
}

//----- (0222B46C) --------------------------------------------------------
int __fastcall Function_222b46c(uint **a1)
{
  uint **v1;

  v1 = a1;
  Call_LoadFromNARC_RLCN(116, 45, 0, 128, 32, 81);
  return LoadFromNARC_RGCN(116, 44, *v1, 2u, 896, 2048, 0, 81);
}

//----- (0222B4AC) --------------------------------------------------------
int __fastcall Function_222b4ac(int *a1, int a2, int a3, int a4)
{
  uint **v4;
  int v5;
  int v6;
  int v7;
  int v8;
  short v9;
  int v10;
  int v11;

  v4 = (uint **)a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = Function_2019fe4(*a1, 2);
  v9 = 17280;
  if ( v7 == 2 )
    v9 = 17282;
  v10 = v5 + 32 * v6;
  *(ushort *)(v8 + 2 * v10) = v9;
  *(ushort *)(v8 + 2 * (v10 + 1)) = v9 + 1;
  v11 = v5 + 32 * (v6 + 1);
  *(ushort *)(v8 + 2 * v11) = v9 + 8;
  *(ushort *)(v8 + 2 * (v11 + 1)) = v9 + 9;
  return Function_2019448(*v4, 2u);
}

//----- (0222B4FC) --------------------------------------------------------
int __fastcall Function_222b4fc(int *a1, int a2, int a3)
{
  uint **v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v3 = (uint **)a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_2019fe4(*a1, 2);
  v7 = v4 + 32 * v5;
  *(ushort *)(v6 + 2 * v7) = 17284;
  *(ushort *)(v6 + 2 * (v7 + 1)) = 17284;
  v8 = v4 + 32 * (v5 + 1);
  *(ushort *)(v6 + 2 * v8) = 17284;
  *(ushort *)(v6 + 2 * (v8 + 1)) = 17284;
  return Function_2019448(*v3, 2u);
}

//----- (0222B53C) --------------------------------------------------------
uint __fastcall Function_222b53c(int a1, ushort **a2, uint *a3, int a4, uint a5)
{
  int v5;
  ushort *v6;
  int v7;
  int v8;

  v5 = a1;
  v6 = Function_200b29c(a3, a2, a5, 0x51u);
  v7 = Function_2002df8_GetLineHeight(0, 2u);
  Function_2002d7c(0, (int)v6, v7);
  Function_201c294(v5);
  Function_201d78c(v5, 0);
  return Function_20237bc_FreeMsg((int)v6, v8);
}

//----- (0222B590) --------------------------------------------------------
uint __fastcall Function_222b590(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  if ( a2 < 100 )
  {
    if ( a2 < 10 )
      v3 = 2;
    else
      v3 = 3;
    v4 = 1;
  }
  else
  {
    v3 = 3;
    v4 = 0;
  }
  return Function_200b60c(a1, 0, v2, v3, v4, 1);
}

//----- (0222B5C0) --------------------------------------------------------
int __fastcall Function_222b5c0(int a1, int a2, int *a3, int a4)
{
  int v4;
  uint *v5;
  uint v6;
  int v7;
  ushort *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v15;
  int v16;
  int *v17;
  int v18;
  ushort **v19;
  uint *v20;

  v17 = a3;
  v15 = a1;
  v16 = a2;
  v4 = a4;
  v19 = (ushort **)LoadFromMsgNARC(1, 26, 550, 0x51u);
  v20 = Function_200b358(0x51u);
  if ( GetGender(*(uint *)(v15 + 12)) == 1 )
    v18 = 197647;
  else
    v18 = 460815;
  Function_223795c(*(uint *)v15, v17, 3, v4, dword_223E01C[4 * v16]);
  v5 = (uint *)&dword_223DF44;
  v6 = 1;
  v7 = 16;
  do
  {
    if ( v6 != 4 || *(uint *)(v15 + 76) )
    {
      v8 = Function_200b29c(v20, v19, *v5, 0x51u);
      Function_201d78c(v17[4], 0);
      Function_20237bc_FreeMsg((int)v8, v9);
    }
    ++v6;
    ++v5;
    v7 += 16;
  }
  while ( v6 < 5 );
  v10 = *(uint *)(v15 + 12);
  Function_200b498((int)v20, 0);
  Function_222b53c(v17[4], v19, v20, v18, 0x10u);
  v11 = Function_202cc58(*(ushort **)(v15 + 16));
  Function_222b590((int)v20, v11);
  v12 = Function_202cc5c(*(uint *)(v15 + 16));
  Function_200b60c((int)v20, 1u, v12, 2, 2, 1);
  Function_222b53c(v17[4], v19, v20, v18, 0x11u);
  Function_200b60c((int)v20, 0, *(uint *)(v15 + 80), 1, 0, 1);
  Function_222b53c(v17[4], v19, v20, v18, 0x13u);
  if ( *(uint *)(v15 + 76) )
  {
    v13 = Function_2026e48(*(uint **)(v15 + 8));
    Function_222b590((int)v20, v13);
    Function_222b53c(v17[4], v19, v20, v18, 0x12u);
  }
  Function_200dc48(v17[4], 0, v17[14], v17[15]);
  *(uint *)(v15 + 4 * v16 + 220) = dword_223E014[4 * v16];
  Function_200b3f0(v20, 4 * v16);
  Function_200b190((ushort *)v19);
  return 1;
}

//----- (0222B768) --------------------------------------------------------
int __fastcall Function_222b768(int a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v4 = (int *)a1;
  v5 = a2;
  v6 = a3;
  v7 = *(uint *)(a1 + 36);
  v8 = a4;
  if ( !v7 )
    return 0;
  switch ( (uchar)v7 )
  {
    case 1:
      a1 = 4;
      break;
    case 2:
      a1 = 5;
      break;
    case 3:
      a1 = 6;
      break;
    case 4:
      a1 = 7;
      break;
    case 5:
      a1 = 8;
      break;
    default:
      break;
  }
  Function_223795c(*v4, v6, 3, a4, a1);
  Function_222b4fc(v4, 26, v8);
  v4[v5 + 55] = dword_223E014[4 * v5];
  return 1;
}

//----- (0222B7DC) --------------------------------------------------------
int __fastcall Function_222b7dc(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v10;

  v4 = a1;
  v5 = a2;
  v6 = a4;
  v10 = a3;
  if ( !a1[13] )
  {
    if ( Function_202dec4(a1[5]) == 1 )
      v4[13] = 1;
    v7 = LoadVariableAreaAdress_0(v4[1]);
    if ( Function_2025d64(v7) == 1 )
      v4[13] = 1;
    v8 = Function_2237520(81);
    if ( Function_2237624(v8) )
    {
      v4[13] = 1;
      Function_2238400();
    }
  }
  if ( v4[13] == 1 && !v4[19] )
    v4[13] = 0;
  if ( v4[13] != 1 )
    return 0;
  Function_223795c(*v4, v10, 3, v6, dword_223E01C[4 * v5]);
  Function_222b4fc(v4, 26, v6);
  v4[v5 + 55] = dword_223E014[4 * v5];
  v4[14] |= 1u;
  Function_202ded4(v4[5]);
  return 1;
}

//----- (0222B888) --------------------------------------------------------
int __fastcall Function_222b888(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int result;

  v4 = a1;
  v5 = a2;
  v6 = a4;
  if ( a1[11] != 1 || a1[19] != 1 )
    return 0;
  Function_223795c(*a1, a3, 3, a4, dword_223E01C[4 * a2]);
  Function_222b4ac(v4, 26, v6, 1);
  result = 1;
  v4[v5 + 63] = 1;
  v4[v5 + 55] = dword_223E014[4 * v5];
  v4[14] |= 2u;
  return result;
}

//----- (0222B8E4) --------------------------------------------------------
int __fastcall Function_222b8e4(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v4 = a1;
  v5 = a2;
  v6 = a4;
  if ( a1[12] != 1 )
    return 0;
  v7 = 4 * a2;
  Function_223795c(*a1, a3, 3, a4, dword_223E01C[4 * a2]);
  v8 = v5;
  v4[v8 + 63] = 1;
  Function_222b4ac(v4, 26, v6, 1);
  v4[v8 + 55] = dword_223E014[v7];
  return 1;
}

//----- (0222B934) --------------------------------------------------------
int __fastcall Function_222b934(int *a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;

  v4 = a2;
  v5 = a1;
  v6 = 4 * a2;
  v7 = a4;
  Function_223795c(*a1, a3, 3, a4, dword_223E01C[4 * a2]);
  v4 *= 4;
  *(int *)((char *)v5 + v4 + 252) = 2;
  Function_222b4ac(v5, 26, v7, 2);
  *(int *)((char *)v5 + v4 + 220) = dword_223E014[v6];
  return 1;
}

//----- (0222B978) --------------------------------------------------------
int __fastcall Function_222b978(int *a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;

  v4 = a2;
  v5 = a1;
  v6 = 4 * a2;
  v7 = a4;
  Function_223795c(*a1, a3, 3, a4, dword_223E01C[4 * a2]);
  v4 *= 4;
  *(int *)((char *)v5 + v4 + 252) = 0;
  Function_222b4fc(v5, 26, v7);
  *(int *)((char *)v5 + v4 + 220) = dword_223E014[v6];
  return 1;
}

//----- (0222B9BC) --------------------------------------------------------
int __fastcall Function_222b9bc(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int *v5;
  int v6;
  int (__fastcall *v7)(int *, uint, char *, int, int, int);
  int v8;
  int v9;
  int v11;
  int v12;
  uint v13;
  int *v14;
  int *v15;
  char v16;
  int v17;
  int v18;
  int v19;
  int v20;

  v20 = a4;
  v4 = a1;
  v12 = 0;
  a1[8] = 19;
  v5 = dword_223E014;
  v13 = 0;
  v11 = (int)(a1 + 23);
  v6 = 1;
  v15 = a1;
  v14 = a1 + 8;
  do
  {
    Function_2237808(&v16, v11);
    Function_2237858(&v16, 26, v5[1], v4[8]);
    v7 = (int (__fastcall *)(int *, uint, char *, int, int, int))v5[3];
    if ( v7 )
    {
      if ( v15[55] )
      {
        Function_201c2ac(v17, 3);
        Function_201c2b0(v17, v6);
        Function_200dc48(v17, 0, v18, v19);
        v8 = v15[63];
        if ( v8 )
          Function_222b4ac(v4, 26, v6, v8);
        else
          Function_222b4fc(v4, 26, v6);
        v6 += v5[1] + 2;
        v12 = 1;
      }
      else if ( v7(v4, v13, &v16, v6, 1, 2) == 1 )
      {
        v6 += v5[1] + 2;
        v12 = 1;
      }
    }
    else
    {
      Function_223795c(*v4, &v16, 3, v6, v5[2]);
      v15[55] = *v5;
      v6 += v5[1] + 2;
    }
    v9 = *v14 + 26 * v5[1];
    v5 += 4;
    *v14 = v9;
    v11 += 16;
    ++v15;
    ++v13;
  }
  while ( v13 < 8 );
  return v12;
}

//----- (0222BAD8) --------------------------------------------------------
int __fastcall Function_222bad8(int *a1, int a2)
{
  int *v2;
  uint v3;
  int v4;
  int v5;
  int v6;
  uchar v7;
  uchar v8;
  int v9;
  int v10;
  uchar v11;
  uchar v12;
  int v14;

  v2 = a1;
  v14 = a2;
  v3 = 0;
  v4 = (int)(a1 + 23);
  do
  {
    if ( Function_201a7cc(v4) )
    {
      if ( v3 == v14 )
      {
        Function_200dc48(v4, 1, 10, 3u);
        v5 = Function_201c29c(v4);
        v6 = Function_201c2a0(v4);
        v7 = Function_201c294(v4);
        v8 = Function_201c298(v4);
        Function_2019e2c(*v2, 0, v5, v6, v7, v8, 0);
      }
      else
      {
        Function_200dc48(v4, 1, 1, 2u);
        v9 = Function_201c29c(v4);
        v10 = Function_201c2a0(v4);
        v11 = Function_201c294(v4);
        v12 = Function_201c298(v4);
        Function_2019e2c(*v2, 0, v9, v10, v11, v12, 1u);
      }
    }
    ++v3;
    v4 += 16;
  }
  while ( v3 < 8 );
  return Function_2019448((uint *)*v2, 0);
}

//----- (0222BB88) --------------------------------------------------------
int __fastcall Function_222bb88(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = *(uint *)(a1 + 84);
  v5 = *(uint *)(a1 + 84);
  result = 0;
  while ( 1 )
  {
    v5 += v3;
    if ( v5 == -1 )
      v5 = 0;
    if ( v5 == 8 )
      v5 = 7;
    if ( v5 == v4 )
      break;
    if ( *(uint *)(v2 + 4 * v5 + 220) )
    {
      result = Function_2005748(0x5DCu);
      break;
    }
  }
  *(uint *)(v2 + 84) = v5;
  return result;
}

//----- (0222BBC8) --------------------------------------------------------
int __fastcall Function_222bbc8(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;
  int v5;

  v1 = a1;
  v2 = 8 * (Function_201c2a0(a1 + 92 + 16 * *(uint *)(a1 + 84)) - 1);
  v3 = 8 * (Function_201c298(v1 + 92 + 16 * *(uint *)(v1 + 84)) + 2);
  result = 288;
  v5 = *(uint *)(v1 + 288) / 4096;
  if ( v5 > v2 )
    *(uint *)(v1 + 288) = v2 << 12;
  if ( v5 + 192 <= v2 )
  {
    result = 288;
    *(uint *)(v1 + 288) = (v2 + v3 - 192) << 12;
  }
  return result;
}

//----- (0222BC1C) --------------------------------------------------------
uint __fastcall Function_222bc1c(int a1)
{
  int v1;
  uint v2;
  int v3;
  int v4;
  int v6;
  int v7;
  int v8;

  v6 = a1;
  v7 = 0;
  v8 = 0;
  v1 = *(uint *)(a1 + 288) / 4096;
  v2 = 0;
  v3 = a1 + 92;
  do
  {
    if ( Function_201a7cc(v3) )
    {
      v4 = 8 * (Function_201c2a0(v3) - 1);
      Function_201c298(v3);
      if ( v1 > v4 )
        v8 = 1;
      if ( v1 + 192 <= v4 )
        v7 = 1;
    }
    ++v2;
    v3 += 16;
  }
  while ( v2 < 8 );
  Function_2021cac(*(uint *)(v6 + 360), v8);
  return Function_2021cac(*(uint *)(v6 + 364), v7);
}

//----- (0222BC9C) --------------------------------------------------------
int __fastcall Function_222bc9c(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  uint v5;
  int *v6;
  int v7;

  v1 = LoadOverlayData1c(a1);
  v2 = (int *)v1;
  v3 = *(uint *)(v1 + 360);
  if ( v3 || v2[91] )
  {
    Function_2021bd4(v3);
    v4 = Function_2021bd4(v2[91]);
    Function_2237da0(v4);
  }
  v5 = 0;
  v6 = v2;
  v7 = (int)(v2 + 23);
  do
  {
    if ( v6[23] )
    {
      Function_201acf4(v7);
      Function_201a8fc(v7);
    }
    ++v5;
    v6 += 4;
    v7 += 16;
  }
  while ( v5 < 8 );
  Function_2019044(*v2, 0);
  Function_2019044(*v2, 1);
  Function_2019044(*v2, 2);
  free(*v2);
  return SetMainLoopFunctionCall(0, 0);
}

//----- (0222BD14) --------------------------------------------------------
int __fastcall Function_222bd14(int a1)
{
  int v1;
  int result;

  if ( !*((ushort *)dword_223DF70 + *(uint *)(a1 + 368)) )
    *(uint *)(a1 + 368) = 0;
  v1 = *(uint *)(a1 + 368);
  *(uint *)(a1 + 368) = v1 + 1;
  result = 83886188;
  MEMORY[0x500006C] = *((ushort *)dword_223DF70 + v1);
  return result;
}

//----- (0222BD48) --------------------------------------------------------
int __fastcall Function_222bd48(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_201dcac();
  Function_200a858();
  Function_201c2b8(v1);
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (0222BD70) --------------------------------------------------------
int __fastcall MainMenuInit(int a1)
{
  int v1;
  int *v2;
  int v3;

  v1 = a1;
  Function_2017fc8(3, 81, 0x40000);
  v2 = (int *)MallocSomeDataAndStorePtrInOverlayData1c(v1, 372, 0x51u);
  Call_FillMemWithValue(v2, 0, 0x174u);
  *v2 = Function_2018340(0x51u);
  SetBrightnessWithValue(0, 0);
  SetBrightnessWithValue(1, 0);
  v3 = *(uint *)(LoadPtrToOverWorldDataIn18(v1) + 8);
  v2[1] = v3;
  v2[5] = Function_202442c(v3);
  v2[71] = 0;
  v2[72] = 0;
  v2[3] = LoadTrainerDataAdress(v2[1]);
  v2[2] = LoadPokedexDataAdress(v2[1]);
  v2[4] = LoadPlayerDataAdress_26(v2[1]);
  v2[19] = CheckActPokedex((uint *)v2[2]);
  v2[20] = CountBadges(v2[3]);
  v2[75] = 15;
  Function_2237694(81);
  if ( !Function_20247c0(v2[1]) )
    v2[83] = 1;
  Function_20053cc(0);
  Function_2004234(0);
  return 1;
}

//----- (0222BE24) --------------------------------------------------------
int __fastcall MainMenuLoop(int a1, uint *a2)
{
  int v2;
  uint *v3;
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
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;

  v2 = a1;
  v3 = a2;
  v4 = (int *)LoadOverlayData1c(a1);
  ++v4[6];
  CTRDG_IsExisting();
  if ( Function_222b07c(v4, v5, v6, v7) == 1 )
  {
    Function_222af8c(v4);
    Function_222b25c(v4);
    result = 0;
  }
  else
  {
    Function_222bd14((int)v4);
    switch ( (uchar)*v3 )
    {
      case 0u:
        Function_222b2ec((uint **)v4, v9, v10, v11);
        *v3 = 1;
        goto LABEL_45;
      case 1u:
        if ( Function_222ae60() )
        {
          Function_2237790(1, 2, v3, 8);
          MEMORY[0x5000000] = 32140;
        }
        else
        {
          *v3 = 3;
        }
        goto LABEL_45;
      case 2u:
        if ( !Function_222ae64(v4) )
          Function_2237790(0, 3, v3, 8);
        goto LABEL_45;
      case 3u:
        v4[73] = 12;
        if ( v4[83] == 1 )
        {
          v4[22] = 2;
          Function_2237790(0, 7, v3, 8);
        }
        else
        {
          Function_222af1c((int)v4);
          *v3 = 4;
        }
        goto LABEL_45;
      case 4u:
        Function_222b404((int)v4);
        Function_222b46c((uint **)v4);
        SetMainLoopFunctionCall((int)Function_222bd48, *v4);
        Function_222b9bc(v4, v12, v13, v14);
        Function_222bad8(v4, v4[21]);
        Function_2237790(1, 5, v3, 8);
        MEMORY[0x5000000] = 32140;
        v4[73] = 10;
        goto LABEL_45;
      case 5u:
        if ( dword_21BF6C4 & 3 )
        {
          if ( dword_21BF6C4 & 1 )
          {
            Function_2005748(0x5DCu);
            v15 = v4[v4[21] + 55];
            v4[22] = v15;
            if ( v15 == 5 && CTRDG_IsPulledOut() == 1 )
            {
              if ( v4[73] != 12 )
                Function_2037d84();
              Function_209a8e0(0x51u, v16, v17, v18);
            }
          }
          else
          {
            Function_2005748(0x5DCu);
            v4[22] = 0;
            Function_2237784(1);
          }
          v19 = v4[22];
          if ( v19 == 2 )
          {
            v4[16] |= 0x80u;
            v4[76] = 1;
            *v3 = 6;
          }
          else
          {
            if ( (uint)(v19 - 6) <= 1 )
              Function_2237784(1);
            Function_2237790(0, 7, v3, 8);
          }
          if ( v4[73] == 13 )
            v4[73] = 14;
        }
        else if ( v4[18] == 1 )
        {
          Function_222b9bc(v4, 1, v10, v11);
          v4[18] = 0;
        }
        else
        {
          if ( dword_21BF6C4 & 0x40 )
            Function_222bb88((int)v4, -1);
          if ( dword_21BF6C4 & 0x80 )
            Function_222bb88((int)v4, 1);
          Function_222bad8(v4, v4[21]);
          Function_222bbc8((int)v4);
          Function_222bc1c((int)v4);
          if ( *v3 == 5 && v4[84] == 1 )
          {
            v4[84] = 0;
            v4[76] = 1;
          }
        }
        goto LABEL_45;
      case 6u:
        if ( v4[75] == 15 )
        {
          if ( v4[78] & 2 )
            *v3 = 5;
          else
            Function_2237790(0, 7, v3, 8);
        }
        goto LABEL_45;
      case 7u:
        Function_222bc9c(v2);
        return 1;
      case 8u:
        Function_22377f0(v3);
        goto LABEL_45;
      case 9u:
        result = 1;
        break;
      default:
LABEL_45:
        Function_222af8c(v4);
        v20 = Function_222b25c(v4);
        Function_2237ca0(v20);
        result = 0;
        break;
    }
  }
  return result;
}

//----- (0222C094) --------------------------------------------------------
int *__fastcall LoadMainMenuOption(int a1)
{
  int *result;

  result = *(int **)(a1 + 88);
  switch ( (uchar)result )
  {
    case 0:
      result = SetOverlayJumpTableDataToLoad(77, (int)dword_21D742C);
      break;
    case 1:
      result = SetOverlayJumpTableDataToLoad(57, (int)dword_21D0F70);
      break;
    case 2:
      result = SetOverlayJumpTableDataToLoad(57, (int)&dword_21D0F70[8]);
      break;
    case 3:
      result = SetOverlayJumpTableDataToLoad(97, (int)&off_223D71C);
      break;
    case 4:
      result = SetOverlayJumpTableDataToLoad(97, (int)&off_223D6BC);
      break;
    case 5:
      result = SetOverlayJumpTableDataToLoad(97, (int)&off_223D864);
      break;
    case 6:
      result = (int *)Function_20243e0("data/eoo.dat");
      break;
    case 7:
      Function_200569c();
      result = SetOverlayJumpTableDataToLoad(-1, (int)&Unknown_20f6df0);
      break;
    case 8:
      Function_200569c();
      result = SetOverlayJumpTableDataToLoad(98, (int)&dword_2249A5C[84]);
      break;
    default:
      return result;
  }
  return result;
}

//----- (0222C150) --------------------------------------------------------
int __fastcall MainMenuEnd(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  LoadMainMenuOption(v2);
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(81);
  Function_2238400(0);
  return 1;
}

//----- (0222C174) --------------------------------------------------------
int __fastcall Function_222c174(int a1)
{
  char *v1;
  uint v2;

  v1 = byte_223E0B0;
  v2 = 0;
  do
  {
    if ( a1 == *((ushort *)v1 + 1) )
      return *(ushort *)&byte_223E0B0[4 * v2];
    ++v2;
    v1 += 4;
  }
  while ( v2 < 0x123 );
  return 63;
}

//----- (0222C1A4) --------------------------------------------------------
uint __fastcall Function_222c1a4(ushort *a1, uint a2)
{
  uint v2;
  ushort *v3;
  uint v4;
  uint v5;
  uint v6;
  uint v7;
  uint v8;
  uint v9;
  uint result;
  short v11;

  v2 = a2;
  v3 = a1;
  *a1 = s32_div_f(a2, 10000) + 48;
  s32_div_f(v2, 10000);
  v5 = v4;
  v3[1] = s32_div_f(v4, 1000) + 48;
  s32_div_f(v5, 1000);
  v7 = v6;
  v3[2] = s32_div_f(v6, 100) + 48;
  s32_div_f(v7, 100);
  v9 = v8;
  v3[3] = s32_div_f(v8, 10) + 48;
  result = s32_div_f(v9, 10);
  v3[4] = v11 + 48;
  return result;
}

//----- (0222C210) --------------------------------------------------------
int *__fastcall Function_222c210(int a1)
{
  int v1;
  int v2;
  int *v3;
  ushort *v4;
  ushort *v5;
  int v6;
  int v7;
  int *result;

  v1 = a1;
  v2 = *(uint *)(a1 + 16);
  Function_2025ef0_Dummy();
  v3 = dword_223F180;
  v5 = v4;
  v6 = 0;
  do
  {
    *(ushort *)v3 = Function_222c174(*v5);
    ++v6;
    ++v5;
    v3 = (int *)((char *)v3 + 2);
  }
  while ( v6 < 8 );
  v7 = GetSecretTrainerID(*(uint *)(v1 + 16));
  Function_222c1a4(&dword_223F180[4], v7);
  result = dword_223F180;
  HIWORD(dword_223F180[6]) = 0;
  return result;
}

//----- (0222C254) --------------------------------------------------------
int __fastcall Function_222c254(int a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  char *v6;
  int v7;
  int v8;
  int v9;
  uchar v10;
  int v12;
  int v13;
  int v14;
  int v15;
  char v16;
  int v17;

  v17 = a4;
  v4 = dword_223D6DC;
  v5 = a1;
  v6 = &v16;
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
  v12 = 1;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  GX_SetBanks((int *)&v16);
  SetGraphicsModes(&v12);
  Function_22376fc(*(uint *)(v5 + 4));
  Function_22376fc(*(uint *)(v5 + 4));
  Function_22376fc(*(uint *)(v5 + 4));
  Function_22376fc(*(uint *)(v5 + 4));
  Function_201d710();
  LoadFromNARC_PlFont1(0, 0, *(uint *)v5);
  Function_200daa4(*(uint **)(v5 + 4), 0, 1, 1, 0, *(uint *)v5);
  v10 = Function_2027b50(*(ushort **)(v5 + 20));
  Function_200dd0c(*(uint **)(v5 + 4), 0, 10, 2, v10, *(uint *)v5);
  Call_LoadFromNARC_RLCN(116, 0, 0, 256, 32, *(uint *)v5);
  LoadFromNARC_RGCN(116, 1, *(uint **)(v5 + 4), 1u, 0, 5120, 1, *(uint *)v5);
  LoadFromNARC_RCSN(116, 2, *(uint **)(v5 + 4), 1u, 0, 1536, 1, *(uint *)v5);
  Function_2019e2c(*(uint *)(v5 + 4), 1, 0, 0, 0x20u, 0x18u, 8u);
  Function_2019448(*(uint **)(v5 + 4), 1u);
  return Function_222c388(v5);
}

//----- (0222C388) --------------------------------------------------------
int __fastcall Function_222c388(int *a1)
{
  int *v1;

  v1 = a1;
  Call_LoadFromNARC_RLCN(116, 0, 4u, 256, 32, *a1);
  LoadFromNARC_RGCN(116, 1, (uint *)v1[1], 4u, 0, 5120, 1, *v1);
  LoadFromNARC_RCSN(116, 2, (uint *)v1[1], 4u, 0, 1536, 1, *v1);
  Function_2019e2c(v1[1], 4, 0, 0, 0x20u, 0x18u, 8u);
  return Function_2019448((uint *)v1[1], 4u);
}

//----- (0222C404) --------------------------------------------------------
int __fastcall Function_222c404(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  char v6;
  int v7;

  v7 = a4;
  v4 = a1;
  if ( Function_201a7cc(a1 + 24) )
  {
    if ( dword_21BF6C4 & 3 )
    {
      Function_200dc9c(v4 + 24, 0);
      Function_201a8fc(v4 + 24);
      result = 0;
    }
    else
    {
      result = 1;
    }
  }
  else
  {
    Function_2237808(&v6, v4 + 24);
    Function_2237858(&v6, 22, 16, *(uint *)(v4 + 324));
    Function_223795c(*(uint *)(v4 + 4), &v6, 5, 4, 2);
    result = 1;
  }
  return result;
}

//----- (0222C47C) --------------------------------------------------------
int __fastcall Function_222c47c(uint *a1)
{
  uint *v1;
  int v2;
  int v3;

  v1 = a1;
  Function_2237808(a1 + 18, a1 + 10);
  Function_2237858(v1 + 18, 27, 4, v1[81]);
  Function_2237860(v1 + 18);
  Function_223795c(v1[1], v1 + 18, 2, 19, 70);
  v1[81] += Function_2237a18(v1 + 18);
  Function_2237808(v1 + 39, v1 + 6);
  Function_2237858(v1 + 39, 30, 4, v1[81]);
  Function_2237860(v1 + 39);
  Function_223795c(v1[1], v1 + 39, 1, 1, 11);
  v1[81] += Function_2237a18(v1 + 39);
  v2 = Function_2237a20();
  Function_2237a74(v2);
  Function_2237b0c(116, 10, 7, 9, 8, 0);
  v3 = v1[3164];
  v1[3164] = Function_2237d14(0);
  return Function_222c578(v1);
}

//----- (0222C578) --------------------------------------------------------
uint __fastcall Function_222c578(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  uint *v5;
  uint v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint v11;
  int v12;
  char v14;
  int v15;
  int v16;
  int v17;

  v17 = a4;
  v4 = a1;
  v5 = Function_200b358(*a1);
  Function_2237808(v4 + 60, v4 + 14);
  Function_2237858(v4 + 60, 26, 4, v4[81]);
  Function_2237860(v4 + 60);
  v4[65] = (uint)v5;
  v6 = v4[4];
  Function_200b498((int)v5, 0);
  v7 = GetSecretTrainerID(v4[4]);
  Function_200b60c((int)v5, 1u, v7, 5, 2, 1);
  Function_223795c(v4[1], v4 + 60, 3, 13, 66);
  v4[62] = 0;
  v8 = Function_2002df8_GetLineHeight(0, 1u);
  Function_2237868(v4 + 60, 0, v8);
  Function_223795c(v4[1], v4 + 60, -1, -1, 68);
  OS_GetMacAddress((uint)&v14, v9, v10, v11);
  Function_22335a8(&v14);
  Function_22335ec();
  Function_200b60c((int)v5, 0, v16, 4, 2, 1);
  Function_200b60c((int)v5, 1u, v15, 4, 2, 1);
  v4[63] = 1;
  Function_223795c(v4[1], v4 + 60, -1, -1, 69);
  return Function_200b3f0(v5, v12);
}

//----- (0222C688) --------------------------------------------------------
uint __fastcall Function_222c688(int a1)
{
  int v1;

  v1 = LoadOverlayData1c(a1);
  Function_2237da0(v1);
  if ( Function_201a7cc(v1 + 24) == 1 )
  {
    Function_201acf4(v1 + 24);
    Function_201a8fc(v1 + 24);
    Function_201acf4(v1 + 40);
    Function_201a8fc(v1 + 40);
    Function_201acf4(v1 + 56);
    Function_201a8fc(v1 + 56);
  }
  Function_2019044(*(uint *)(v1 + 4), 0);
  Function_2019044(*(uint *)(v1 + 4), 1);
  Function_2019044(*(uint *)(v1 + 4), 4);
  Function_2019044(*(uint *)(v1 + 4), 5);
  return free(*(uint *)(v1 + 4));
}

//----- (0222C6F8) --------------------------------------------------------
int __fastcall Function_222c6f8(int a1)
{
  int v1;
  uint *v2;
  uint *v3;
  int v4;

  v1 = a1;
  v2 = (uint *)Function_22376c4();
  v3 = v2;
  *v2 = 85;
  v2[1] = Function_2018340(0x55u);
  v4 = *(uint *)(LoadPtrToOverWorldDataIn18(v1) + 8);
  v3[2] = v4;
  v3[4] = LoadTrainerDataAdress(v4);
  v3[3] = LoadPokedexDataAdress(v3[2]);
  v3[5] = LoadPlayerDataAdress(v3[2]);
  Function_2237694(*v3);
  v3[3165] = Function_202442c(v3[2]);
  v3[83] = 9;
  v3[81] = 40;
  v3[85] = 0;
  v3[87] = 0;
  v3[86] = 0;
  Function_2017fc8(0, 91, 768);
  Function_2004550(9u, 0x496u);
  return 1;
}

//----- (0222C78C) --------------------------------------------------------
int __fastcall Function_222c78c(int a1, int *a2)
{
  int *v2;
  int v3;
  int *v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = (int *)LoadOverlayData1c(a1);
  v7 = *v2;
  v8 = v4;
  switch ( (uchar)*v2 )
  {
    case 0u:
      Function_222c254((int)v4, v7, v5, v6);
      if ( CheckActPokedex((uint *)v8[3]) )
      {
        v4 = (int *)2;
        *v2 = 2;
      }
      else
      {
        v4 = (int *)Function_2237790(1, 1, v2, 13);
      }
      goto LABEL_23;
    case 1u:
      v4 = (int *)Function_222c404((int)v4, v7, v5, v6);
      if ( !v4 )
      {
        Function_2237784(1);
        v4 = (int *)Function_2237790(0, 12, v2, 13);
      }
      goto LABEL_23;
    case 2u:
      Function_222c47c(v4);
      if ( Function_202dce0(v8[3165]) )
      {
        v8[83] = 7;
        v4 = (int *)Function_2237790(1, 4, v2, 13);
      }
      else
      {
        v8[38] = 1;
        v8[3167] = Function_223795c(v8[1], v8 + 18, 2, 19, 21);
        v4 = (int *)Function_2237790(1, 3, v2, 13);
      }
      goto LABEL_23;
    case 3u:
      v4 = (int *)Function_201d724(v4[3167] & 0xFF);
      if ( !v4 )
      {
        v4 = (int *)1;
        if ( dword_21BF6C4 & 1 )
        {
          Function_2237784(1);
          v4 = (int *)Function_2237790(0, 12, v2, 13);
        }
      }
      goto LABEL_23;
    case 4u:
      v4[84] = Function_222cb10();
      v4 = (int *)v8[84];
      if ( v4 == (int *)5 )
      {
        Function_2237784(1);
        v4 = (int *)Function_2237790(0, 12, v2, 13);
      }
      else if ( v4 == (int *)4 )
      {
        Function_2237784(1);
        v4 = (int *)Function_2237790(0, 12, v2, 13);
      }
      goto LABEL_23;
    case 5u:
      Function_222c388(v4);
      Function_201ff74(1u, 1);
      Function_201ff74(2u, 0);
      Function_2231ffc(v8[1], v8 + 3168, 85);
      Function_2237790(1, 6, v2, 13);
      v4 = (int *)4;
      *((uchar *)v8 + 13010) &= 0xFBu;
      goto LABEL_23;
    case 6u:
      v4 = (int *)dword_21BF6C4;
      if ( dword_21BF6C4 )
        v4 = (int *)Function_2237790(0, 11, v2, 13);
      goto LABEL_23;
    case 7u:
    case 8u:
    case 9u:
    case 0xAu:
      goto LABEL_23;
    case 0xBu:
      v4 = (int *)OS_ResetSystem(0);
      goto LABEL_23;
    case 0xCu:
      Function_222c688(v3);
      result = 1;
      break;
    case 0xDu:
      v4 = (int *)Function_22377f0(v2);
LABEL_23:
      Function_2237ca0(v4);
      result = 0;
      break;
  }
  return result;
}

//----- (0222C948) --------------------------------------------------------
int __fastcall Function_222c948(int a1)
{
  int v1;

  v1 = a1;
  Function_201807c(91);
  SetOverlayJumpTableDataToLoad(77, (int)dword_21D742C);
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(85);
  return 1;
}

//----- (0222C974) --------------------------------------------------------
int __fastcall Function_222c974(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  ushort **v6;
  uint *v7;
  uint *v8;
  ushort *v9;
  int v10;
  int v11;
  int v12;
  ushort *v13;
  int v14;
  int v16[4];
  int v17;

  v17 = a4;
  v4 = a1;
  v5 = a1 + 12672;
  MI_CpuFill8((ushort *)(a1 + 12672), 0, 0x358u);
  v6 = (ushort **)LoadFromMsgNARC(1, 26, 421, *(uint *)v4);
  v7 = Function_200b358(*(uint *)v4);
  *(ushort *)(v4 + 12672) = 7;
  v8 = v7;
  v9 = Function_200b29c(v7, v6, 0x4Cu, *(uint *)v4);
  Function_2023df0((int)v9, (uchar *)(v5 + 260), 0x24u);
  Function_20237bc_FreeMsg((int)v9, v10);
  v11 = Function_2237e4c(12);
  v12 = Function_2237e4c(10);
  *(uint *)(v5 + 332) = v12 | Function_2237e4c(11) | v11;
  *(ushort *)(v5 + 336) = 1;
  *(uchar *)(v5 + 338) &= 0xFEu;
  *(uchar *)(v5 + 338) &= 0xFDu;
  *(uchar *)(v5 + 338) |= 4u;
  *(uchar *)(v5 + 338) |= 8u;
  *(uchar *)(v5 + 338) &= 0xDFu;
  v13 = Function_200b29c(v8, v6, 0x4Bu, *(uint *)v4);
  Function_2023df0((int)v13, (uchar *)(v5 + 340), 0xFAu);
  Function_20237bc_FreeMsg((int)v13, v14);
  *(uchar *)(v5 + 840) = 0;
  *(ushort *)(v5 + 842) = 490;
  *(ushort *)(v5 + 844) = 0;
  *(ushort *)(v5 + 846) = 0;
  *(uchar *)(v5 + 848) = 0;
  Function_20138a4(v16);
  *(uint *)(v5 + 852) = RTC_ConvertDateToDay(v16);
  Function_200b3f0(v8, 852);
  Function_200b190((ushort *)v6);
  Function_202db2c(*(uint *)(v4 + 12660), v5, 3);
  Function_201ff74(1u, 0);
  return Function_2238194(*(uint *)(v4 + 4), v5);
}

//----- (0222CAAC) --------------------------------------------------------
int __fastcall Function_222caac(int result, int a2)
{
  *(uint *)(result + 352) = a2;
  return result;
}

//----- (0222CAB4) --------------------------------------------------------
int __fastcall Function_222cab4(int a1, uint *a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int result;

  v4 = a2;
  v5 = a4;
  if ( --*(uint *)(a1 + 352) )
  {
    if ( !a3 || Function_2233388() )
    {
      if ( v5 && dword_21BF6C4 & v5 )
      {
        Function_22333bc();
        *v4 = 26;
        result = 1;
      }
      else
      {
        result = 0;
      }
    }
    else
    {
      Function_22333bc();
      *v4 = 22;
      result = 0;
    }
  }
  else
  {
    Function_22333bc();
    *v4 = 23;
    result = 0;
  }
  return result;
}

//----- (0222CB10) --------------------------------------------------------
int __fastcall Function_222cb10(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  uint v4;
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
  int v16;

  v1 = a1;
  if ( a1[86] == 1 )
  {
    v2 = Function_2233230();
    v3 = Function_20397b0(3 - v2);
    Function_22330dc(v3);
    Function_223346c(1);
  }
  v4 = v1[87];
  if ( v4 <= 0x1E )
    JUMPOUT(__CS__, *((short *)&off_222CB4A + v4) + 35834700);
  switch ( (uchar)v4 )
  {
    case 0:
      Function_222c210((int)v1);
      Function_2033478();
      v1[82] = 1;
      v1[87] = 1;
      return 0;
    case 1:
      if ( Function_20334a4() )
      {
        Function_2232e38(dword_223E0A4, v1 + 91);
        v1[86] = 1;
        Function_2039734();
        v1[87] = 2;
      }
      return 0;
    case 2:
      Function_2233120();
      Function_222caac((int)v1, 1600);
      v1[3382] = Function_200e7fc(v1 + 10, 10);
      v1[87] = 3;
      return 0;
    case 3:
      v5 = Function_2233248();
      if ( v5 )
      {
        v1[89] = v5 - 1;
        Function_222caac((int)v1, 1800);
        v1[87] = 4;
      }
      Function_222cab4((int)v1, v1 + 87, 0, 2);
      return 0;
    case 4:
      if ( Function_223316c(v1[89]) )
      {
        Function_22331a8(v1[89]);
        v1[87] = 7;
        v1[88] = 1800;
      }
      Function_222cab4((int)v1, v1 + 87, 0, 2);
      return 0;
    case 7:
      v6 = Function_222cab4((int)v1, v1 + 87, 0, 2);
      if ( Function_2233388(v6) )
        v1[87] = 29;
      return 0;
    case 8:
      Function_2233268();
      v1[87] = 9;
      v1[88] = 1800;
      Function_222cab4((int)v1, v1 + 87, 1, 2);
      return 0;
    case 9:
      if ( Function_22332f4() )
      {
        Function_223329c();
        v1[87] = 10;
        v1[88] = 3200;
        Function_223795c(v1[1], v1 + 18, 2, 19, 34);
        Function_2005748(0x5DCu);
        v1[3382] = 0;
        return 1;
      }
      Function_222cab4((int)v1, v1 + 87, 1, 2);
      return 0;
    case 0xA:
      if ( Function_22332f4() )
      {
        Function_223795c(v1[1], v1 + 18, 2, 19, 71);
        Function_2021cac(v1[3164], 1);
        Function_222c578(v1, v8, v9, v10);
        v1[87] = 11;
      }
      Function_222cab4((int)v1, v1 + 87, 1, 2);
      return 0;
    case 0xB:
      Function_22332c8(dword_223E53C, 42, 1);
      v1[87] = 12;
      v1[88] = 3200;
      return 0;
    case 0xC:
      if ( Function_2233320() )
      {
        v1[87] = 13;
        v1[88] = 60;
        Function_223795c(v1[1], v1 + 18, 2, 19, 71);
      }
      Function_222cab4((int)v1, v1 + 87, 1, 2);
      return 0;
    case 0xD:
      if ( !--v1[88] )
      {
        Function_223795c(v1[1], v1 + 18, 2, 19, 72);
        v1[3382] = Function_200e7fc(v1 + 10, 10);
        Function_222c974((int)v1, 13528, v11, v12);
        Function_223846c(v1[2]);
        v1[87] = 14;
      }
      return 0;
    case 0xE:
      if ( Function_223847c() == 1 )
      {
        v1[87] = 15;
        v13 = OS_GetTickLo();
        s32_div_f(v13, 54);
        v1[88] = v14 + 6;
      }
      return 0;
    case 0xF:
      if ( !--v1[88] )
        v1[87] = 16;
      return 0;
    case 0x10:
      Function_22332c8(dword_223E53C, 42, 2);
      v1[87] = 17;
      v1[88] = 1200;
      return 0;
    case 0x11:
      if ( Function_223334c() )
      {
        Function_22384f4();
        v1[87] = 18;
        v1[88] = 800;
      }
      else
      {
        if ( !--v1[88] )
        {
          Function_22333bc();
          v1[87] = 23;
          v1[88] = 120;
        }
        if ( !((int (*)(void))Function_2233388)() )
        {
          Function_22333bc();
          v1[87] = 22;
          v1[88] = 120;
        }
      }
      return 0;
    case 0x12:
      if ( Function_2238528() == 3 )
      {
        Function_22333bc();
        v1[87] = 22;
        v1[88] = 120;
      }
      else if ( Function_2238528() == 2 )
      {
        if ( Function_2233320() || !((int (*)(void))Function_2233388)() )
        {
          v1[87] = 19;
          v1[88] = 1;
          Function_22333bc();
          return 0;
        }
      }
      else
      {
        Function_223847c();
      }
      if ( !--v1[88] )
      {
        Function_22333bc();
        v1[87] = 23;
        v1[88] = 10;
      }
LABEL_57:
      if ( !--v1[88] )
      {
        v1[87] = 20;
        Function_223795c(v1[1], v1 + 18, 2, 19, 73);
        Function_2021cac(v1[3164], 0);
        Function_200eba0(v1[3382]);
        Function_2005748(0x5DCu);
        v1[3382] = 0;
      }
      return 0;
    case 0x13:
      goto LABEL_57;
    case 0x14:
      if ( !Function_22333fc() )
        return 0;
      if ( v1[82] == 1 )
      {
        Function_20334cc();
        Function_2039794();
        v1[82] = 0;
      }
      if ( !(dword_21BF6C4 & 1) )
        return 0;
      v1[87] = 27;
      return 4;
    case 0x16:
      v1[87] = 23;
      goto LABEL_66;
    case 0x17:
LABEL_66:
      Function_223795c(v1[1], v1 + 18, 2, 19, 74);
      Function_2021cac(v1[3164], 0);
      v15 = v1[3382];
      if ( v15 )
        Function_200eba0(v15);
      v1[3382] = 0;
      v1[87] = 28;
      return 0;
    case 0x1A:
      if ( !Function_22333fc() || v1[82] != 1 )
        return 0;
      Function_20334cc();
      Function_2039794();
      v1[82] = 0;
      v16 = v1[3382];
      if ( v16 )
        Function_200eba0(v16);
      return 5;
    case 0x1C:
      if ( Function_22333fc() )
      {
        if ( v1[82] == 1 )
        {
          Function_20334cc();
          Function_2039794();
          v1[82] = 0;
        }
        if ( dword_21BF6C4 & 1 )
          OS_ResetSystem(0);
      }
      return 0;
    case 0x1D:
      Function_223795c(v1[1], v1 + 18, 2, 19, 30);
      Function_2021cac(v1[3164], 0);
      Function_200eba0(v1[3382]);
      v1[3382] = 0;
      Function_2005748(0x5DCu);
      v1[88] = 1800;
      v1[87] = 30;
      return 0;
    case 0x1E:
      if ( dword_21BF6C4 & 1 )
        v1[87] = 8;
      Function_222cab4((int)v1, v1 + 87, 1, 2);
      return 0;
    default:
      return 0;
  }
}

//----- (0222D04C) --------------------------------------------------------
int __fastcall Function_222d04c(int result)
{
  int v1;
  int v2;

  v1 = result;
  if ( !dword_223F180[9] )
  {
    Function_222d2f8();
    dword_223F180[9] = malloc(0xFu, 980);
    MI_CpuFill8((ushort *)dword_223F180[9], 0, 0x3D4u);
    *(ushort *)(dword_223F180[9] + 36) = 50;
    *(uint *)(dword_223F180[9] + 28) = AddTaskToTaskList1((int)Function_222d19c, 0, 0xAu);
    *(uint *)dword_223F180[9] = v1;
    result = Function_20361bc((uint *)(dword_223F180[9] + 4), (int)&dword_223F180[9], dword_223F180[9], v2);
  }
  return result;
}

//----- (0222D0A4) --------------------------------------------------------
int __fastcall Function_222d0a4(int a1, short a2)
{
  int result;

  *(uint *)(dword_223F180[9] + 32) = a1;
  result = dword_223F180[9];
  *(ushort *)(dword_223F180[9] + 36) = a2;
  return result;
}

//----- (0222D0B4) --------------------------------------------------------
int Function_222d0b4()
{
  int v0;
  int result;
  int v2;
  int v3;

  v0 = Function_203608c();
  result = Function_2035d78(v0);
  if ( result )
  {
    v2 = 0;
    do
    {
      v3 = dword_223F180[9] + v2++;
      *(uchar *)(v3 + 961) = 0;
    }
    while ( v2 < 16 );
    Function_2032ac0();
    result = Function_222d0a4((int)Function_222d0f0, 0);
  }
  return result;
}

//----- (0222D0F0) --------------------------------------------------------
int Function_222d0f0()
{
  int v0;
  int v1;
  int result;

  v0 = 0;
  v1 = 0;
  do
  {
    result = *(uint *)(dword_223F180[9] + v1 + 40);
    if ( !result )
    {
      result = Function_2035d78((ushort)v0);
      if ( result == 1 )
      {
        result = Function_2032ee8(v0);
        *(uint *)(dword_223F180[9] + v1 + 40) = result;
      }
    }
    ++v0;
    v1 += 4;
  }
  while ( v0 < 16 );
  return result;
}

//----- (0222D128) --------------------------------------------------------
int Function_222d128()
{
  int result;

  result = Function_20334a4();
  if ( result )
    result = Function_222d0a4((int)Function_222d140, 0);
  return result;
}

//----- (0222D140) --------------------------------------------------------
void Function_222d140()
{
  ;
}

//----- (0222D144) --------------------------------------------------------
int Function_222d144()
{
  Function_2036948(*(uchar *)(dword_223F180[9] + 39));
  return Function_222d0a4((int)Function_222d164, 0);
}

//----- (0222D164) --------------------------------------------------------
int Function_222d164()
{
  int result;

  result = Function_203699c();
  if ( result )
  {
    *(uchar *)(dword_223F180[9] + 960) = 0;
    Function_2032ac0();
    Function_20364f0(171);
    result = Function_222d0a4((int)Function_222d198, 0);
  }
  return result;
}

//----- (0222D198) --------------------------------------------------------
void Function_222d198()
{
  ;
}

//----- (0222D19C) --------------------------------------------------------
int __fastcall Function_222d19c(int result)
{
  int (*v1)(void);

  if ( !dword_223F180[9] )
    return Call_RemoveTaskFromTaskList((int *)result);
  v1 = *(int (**)(void))(dword_223F180[9] + 32);
  if ( v1 )
  {
    result = *(uchar *)(dword_223F180[9] + 38);
    if ( !*(uchar *)(dword_223F180[9] + 38) )
      result = v1();
  }
  return result;
}

//----- (0222D1C4) --------------------------------------------------------
int __fastcall Function_222d1c4(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  result = Function_2035e38();
  if ( !result )
  {
    Function_2036be8(v4, v5);
    Function_222d04c(v3);
    result = Function_222d0a4((int)Function_222d0b4, 0);
  }
  return result;
}

//----- (0222D1F0) --------------------------------------------------------
int __fastcall Function_222d1f0(int a1, int a2)
{
  return Function_2035a3c(22, a1, a2);
}

//----- (0222D200) --------------------------------------------------------
int __fastcall Function_222d200(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  int v6;

  v2 = a1;
  v3 = a2;
  result = Function_2035e38();
  if ( !result )
  {
    v5 = Function_22301a4();
    v6 = LoadPtrToOverWorldDataIn18(v5);
    Function_2036c1c(*(uint *)(v6 + 8), v3);
    Function_222d04c(v2);
    result = Function_222d0a4((int)Function_222d128, 0);
  }
  return result;
}

//----- (0222D234) --------------------------------------------------------
int __fastcall Function_222d234(char a1)
{
  *(uchar *)(dword_223F180[9] + 39) = a1;
  return Function_222d0a4((int)Function_222d144, 0);
}

//----- (0222D250) --------------------------------------------------------
int __fastcall Function_222d250(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = 0;
  do
  {
    v3 = Function_2034168(v2);
    if ( v3 && *(ushort *)(v3 + 76) )
    {
      memcpy((uchar *)(v1 + 140), (char *)v3, 80);
      return v2;
    }
    ++v2;
  }
  while ( v2 < 16 );
  return -1;
}

//----- (0222D284) --------------------------------------------------------
int __fastcall Function_222d284(int result)
{
  if ( *(uchar *)(dword_223F180[9] + 39) == result )
  {
    result = 960;
    *(uchar *)(dword_223F180[9] + 960) = 1;
  }
  return result;
}

//----- (0222D2A0) --------------------------------------------------------
int Function_222d2a0()
{
  return *(uchar *)(dword_223F180[9] + 960);
}

//----- (0222D2B0) --------------------------------------------------------
int Function_222d2b0()
{
  return 856;
}

//----- (0222D2B8) --------------------------------------------------------
int Function_222d2b8()
{
  return dword_223F180[9] + 104;
}

//----- (0222D2C4) --------------------------------------------------------
int __fastcall Function_222d2c4(int a1)
{
  int v1;
  int result;

  v1 = dword_223F180[9] + a1;
  result = 961;
  *(uchar *)(v1 + 961) = 1;
  return result;
}

//----- (0222D2DC) --------------------------------------------------------
int Function_222d2dc()
{
  Function_2018238(0xFu, dword_223F180[9]);
  dword_223F180[9] = 0;
  return Function_2036978();
}

//----- (0222D2F8) --------------------------------------------------------
int __fastcall Function_222d2f8(int a1)
{
  return Function_2032798((int)&off_223D704, 2, a1);
}

//----- (0222D30C) --------------------------------------------------------
int __fastcall Function_222d30c(int a1, int a2)
{
  int v2;
  int result;
  int v4;

  v2 = a1;
  if ( a2 == 1 )
  {
    result = *(uint *)(a1 + 10736);
    if ( !result )
    {
      result = Function_200e7fc((int *)(v2 + 24), 1);
      *(uint *)(v2 + 10736) = result;
    }
  }
  else
  {
    v4 = *(uint *)(a1 + 10736);
    if ( v4 )
      Function_200eba0(v4);
    result = 10736;
    *(uint *)(v2 + 10736) = 0;
  }
  return result;
}

//----- (0222D344) --------------------------------------------------------
int __fastcall Function_222d344(int a1, int a2)
{
  return Function_222d30c(a1, a2);
}

//----- (0222D34C) --------------------------------------------------------
uint __fastcall Function_222d34c(int a1)
{
  int *v1;
  int *v2;
  int v3;
  int v4;
  int *v5;
  int v6;

  v1 = (int *)LoadOverlayData1c(a1);
  Function_2237da0(v1);
  v2 = (int *)v1[31];
  if ( v2 )
    Function_2013a3c(v2);
  v3 = v1[30];
  if ( v3 )
    Function_2001384(v3, 0, 0);
  Function_201acf4((int)(v1 + 6));
  Function_201a8fc((int)(v1 + 6));
  if ( Function_201a7cc((int)(v1 + 22)) )
  {
    Function_201acf4((int)(v1 + 22));
    Function_201a8fc((int)(v1 + 22));
  }
  v4 = 0;
  v5 = v1;
  v6 = (int)(v1 + 10);
  do
  {
    if ( v5[10] )
    {
      Function_201acf4(v6);
      Function_201a8fc(v6);
    }
    ++v4;
    v5 += 4;
    v6 += 16;
  }
  while ( v4 < 3 );
  Function_2019044(*v1, 0);
  Function_2019044(*v1, 1);
  Function_2019044(*v1, 4);
  Function_2019044(*v1, 5);
  return free(*v1);
}

//----- (0222D3E8) --------------------------------------------------------
int Function_222d3e8()
{
  int v0;

  v0 = Function_2237a20();
  Function_2237a74(v0);
  return Function_2237b0c(116, 10, 7, 9, 8, 0);
}

//----- (0222D40C) --------------------------------------------------------
uint __fastcall Function_222d40c(int a1, int a2)
{
  int v2;
  int v3;
  uint result;

  v2 = a1;
  if ( a2 == -1 )
    return Function_2021cac(*(uint *)(a1 + 1476), 0);
  v3 = *(uint *)(a1 + 1476);
  result = Function_2237d14(0);
  *(uint *)(v2 + 1476) = result;
  return result;
}

//----- (0222D444) --------------------------------------------------------
char *__fastcall Function_222d444(int a1, int a2)
{
  int v2;
  int v3;
  char *result;

  v2 = a1;
  v3 = a2;
  result = (char *)Function_201a7cc(a1);
  if ( result == (char *)1 )
    result = Function_200dc9c(v2, v3);
  return result;
}

//----- (0222D45C) --------------------------------------------------------
char *__fastcall Function_222d45c(int a1, int a2)
{
  int v2;
  int v3;
  char *result;

  v2 = a1;
  v3 = a2;
  result = (char *)Function_201a7cc(a1);
  if ( result == (char *)1 )
    result = Function_200e084(v2, v3);
  return result;
}

//----- (0222D474) --------------------------------------------------------
int __fastcall Function_222d474(int a1)
{
  int v1;
  uint *v2;
  int result;

  v1 = a1;
  v2 = (uint *)LoadOverlayData1c(a1);
  if ( v2[1397] != 2 )
    Function_222de78(v1, v2 + 6, 3);
  Function_222d444((int)(v2 + 18), 0);
  if ( v2[1397] == 2 )
  {
    result = 19;
    v2[33] = 19;
  }
  else
  {
    Function_222d200((int)v2, 15);
    v2[269] = 7200;
    Function_2039734();
    Function_222d30c((int)v2, 1);
    result = 7;
  }
  return result;
}

//----- (0222D4D8) --------------------------------------------------------
int __fastcall Function_222d4d8(int a1)
{
  int v1;
  uint *v2;
  int v3;

  v1 = a1;
  v2 = (uint *)LoadOverlayData1c(a1);
  v3 = v2[32];
  if ( v3 == 1 )
    return 49;
  if ( (uint)(v3 - 2) <= 2 )
    return 49;
  if ( v3 == 5 )
    return 49;
  if ( v2[1397] == 1 )
    Function_222d234(v2[270]);
  Function_222de78(v1, v2 + 6, 6);
  Function_222d444((int)(v2 + 18), 0);
  if ( v2[1397] == 1 )
  {
    Function_222d40c((int)v2, 0);
    Function_222d30c((int)v2, 1);
  }
  if ( v2[1397] != 1 )
    return 21;
  Function_20364f0(171);
  return 9;
}

//----- (0222D55C) --------------------------------------------------------
int __fastcall Function_222d55c(int a1)
{
  int v1;
  uchar *v2;
  int v3;
  char *v4;

  v1 = LoadOverlayData1c(a1);
  v2 = (uchar *)v1;
  v3 = *(uint *)(v1 + 5588);
  if ( v3 == 1 )
  {
    v4 = (char *)Function_222d2b8();
    memcpy(v2 + 220, v4, 856);
    Function_2238324(v2 + 140, v2 + 220, 86);
  }
  else if ( v3 == 3 )
  {
    memcpy(v2 + 220, v2 + 1572, 856);
    memcpy(v2 + 140, v2 + 1492, 80);
  }
  return (int)(v2 + 220);
}

//----- (0222D5C8) --------------------------------------------------------
int __fastcall Function_222d5c8(int *a1)
{
  int v1;
  int v3;

  v1 = *(ushort *)a1;
  if ( v1 > 3 )
  {
    if ( v1 == 13 )
      return 1;
  }
  else if ( v1 >= 1 )
  {
    if ( v1 == 1 || v1 == 2 )
    {
      v3 = GetPkmnData(a1 + 2, 0x98u, 0);
      if ( v3 >= 3 && v3 <= 14 || v3 >= 64 && v3 <= 71 )
        return 1;
    }
    else if ( v1 == 3 && a1[2] == 1 )
    {
      return 1;
    }
  }
  return 0;
}

//----- (0222D614) --------------------------------------------------------
uint __fastcall Function_222d614(int a1)
{
  int v1;
  uint result;

  v1 = a1;
  if ( *(uint *)(a1 + 10732) == 1 )
    *(uint *)(a1 + 10728) = 0;
  result = Function_223847c() - 2;
  if ( result <= 1 )
  {
    if ( Function_222d5c8((int *)(v1 + 220)) != 1 )
      Function_2005748(0x61Bu);
    result = 10728;
    *(uint *)(v1 + 10728) = 0;
  }
  return result;
}

//----- (0222D658) --------------------------------------------------------
int __fastcall Function_222d658(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int result;
  int v9;
  int v10;
  int v11[4];
  int v12;

  v12 = a4;
  v4 = a1;
  v9 = LoadOverlayData1c(a1);
  v5 = v9 + 220;
  v6 = *(uint *)(LoadPtrToOverWorldDataIn18(v4) + 8);
  if ( *(uchar *)(v9 + 218) & 4 )
  {
    *(uchar *)(v9 + 1068) = 0;
    v7 = 1;
    if ( !(*(uchar *)(v9 + 218) & 0x10) )
      *(uchar *)(v9 + 1060) = 0;
    Function_20138a4(v11);
    *(uint *)(v9 + 1072) = RTC_ConvertDateToDay(v11);
  }
  else
  {
    v7 = 0;
  }
  v10 = Function_202442c(v6);
  Function_202de5c(v10, *(ushort *)(v9 + 216));
  if ( v7 )
    Function_202dbac(v10, v5);
  else
    Function_202db2c(v10, v5, 3);
  Function_223846c(v6);
  result = v9;
  *(uint *)(v9 + 10732) = 0;
  *(uint *)(v9 + 10728) = Function_222d614;
  return result;
}

//----- (0222D6F8) --------------------------------------------------------
int __fastcall Function_222d6f8(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = LoadOverlayData1c(a1);
  if ( v3 )
    v5 = -1;
  else
    v5 = 4;
  v6 = v4 + 72;
  if ( !*(uint *)(v4 + 72) )
    Function_201a7e8(*(uint **)v4, v6, 0, 23, 10, 6u, 4u, 0, 428);
  Function_200dc48(v6, 1, 31, 3u);
  return Function_222dd1c(v2, dword_223E5A8, 2, v6, v5);
}

//----- (0222D75C) --------------------------------------------------------
int __fastcall Function_222d75c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  Function_222d444(v2 + 72, 0);
  Function_222d444(v2 + 88, 0);
  if ( *(uint *)(v2 + 5588) == 1 )
    Function_222d30c(v2, 0);
  Function_2039794();
  return Function_222da84(v1);
}

//----- (0222D798) --------------------------------------------------------
int __fastcall Function_222d798(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  if ( Function_2237624(v2) )
    v3 = 2;
  else
    v3 = 1;
  *(uint *)(v2 + 5588) = v3;
  Function_222d444(v2 + 56, 0);
  if ( !*(uint *)(v2 + 72) )
    Function_201a7e8(*(uint **)v2, v2 + 72, 0, 23, 10, 6u, 4u, 0, 428);
  Function_200dc48(v2 + 72, 1, 31, 3u);
  Function_222dd1c(v1, dword_223E598, 2, v2 + 72, 2);
  return 5;
}

//----- (0222D814) --------------------------------------------------------
int __fastcall Function_222d814(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  *(uint *)(v2 + 5588) = 4;
  Function_222d444(v2 + 56, 0);
  if ( !*(uint *)(v2 + 72) )
    Function_201a7e8(*(uint **)v2, v2 + 72, 0, 23, 10, 6u, 4u, 0, 428);
  Function_200dc48(v2 + 72, 1, 31, 3u);
  Function_222dd1c(v1, dword_223E568, 2, v2 + 72, 78);
  return 5;
}

//----- (0222D884) --------------------------------------------------------
int __fastcall Function_222d884(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  *(uint *)(v2 + 5588) = 3;
  Function_222d444(v2 + 56, 0);
  if ( !*(uint *)(v2 + 72) )
    Function_201a7e8(*(uint **)v2, v2 + 72, 0, 23, 10, 6u, 4u, 0, 428);
  Function_200dc48(v2 + 72, 1, 31, 3u);
  Function_222dd1c(v1, dword_223E578, 2, v2 + 72, 77);
  return 5;
}

//----- (0222D8F4) --------------------------------------------------------
int __fastcall Function_222d8f4(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  v3 = v2 + 72;
  if ( !*(uint *)(v2 + 72) )
    Function_201a7e8(*(uint **)v2, v3, 0, 23, 10, 6u, 4u, 0, 428);
  Function_200dc48(v3, 1, 31, 3u);
  return Function_222dd1c(v1, dword_223E588, 2, v3, 4);
}

//----- (0222D94C) --------------------------------------------------------
int __fastcall Function_222d94c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  Function_222d444(v2 + 72, 0);
  Function_222d444(v2 + 88, 0);
  Function_2039794();
  if ( *(uint *)(v2 + 5588) == 1 )
    Function_222d2dc();
  return Function_222da84(v1);
}

//----- (0222D984) --------------------------------------------------------
int __fastcall Function_222d984(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  Function_222de78(v1, v2 + 24, 3);
  Function_222d444(v2 + 72, 0);
  Function_222d30c(v2, 1);
  dword_223F180[10] = 37;
  return 32;
}

//----- (0222D9BC) --------------------------------------------------------
int __fastcall Function_222d9bc(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  if ( (uint)(*(uint *)(v2 + 128) - 2) <= 2 )
    return 49;
  Function_222d444(v2 + 72, 0);
  Function_222de78(v1, v2 + 24, 7);
  return 33;
}

//----- (0222D9F0) --------------------------------------------------------
int Function_222d9f0()
{
  if ( dword_223F180[10] == 40 || dword_223F180[10] == 41 || dword_223F180[10] == 48 )
  {
    if ( Function_22389c8() )
      dword_223F180[10] = 43;
  }
  return 36;
}

//----- (0222DA18) --------------------------------------------------------
int __fastcall Function_222da18(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  Function_222de78(v1, v2 + 24, 3);
  Function_222d30c(v2, 1);
  Function_222d444(v2 + 72, 0);
  Function_222d30c(v2, 1);
  *(uint *)(v2 + 5600) = 4096;
  *(uint *)(v2 + 9852) = 0;
  return 27;
}

//----- (0222DA64) --------------------------------------------------------
int __fastcall Function_222da64(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  Function_222d444(v2 + 56, 0);
  Function_222ddd0(v1, 196, 0);
  return 3;
}

//----- (0222DA84) --------------------------------------------------------
int __fastcall Function_222da84(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  Function_202442c(*(uint *)(v2 + 4));
  if ( *(uint *)(v2 + 1480) == 30 )
  {
    *(uint *)(v2 + 1484) = 1;
    Function_2230224(v2);
  }
  Function_222d444(v2 + 40, 0);
  if ( !*(uint *)(v2 + 56) )
    Function_201a7e8(*(uint **)v2, v2 + 56, 0, 15, 9, 0x10u, 8u, 0, 292);
  Function_200dc48(v2 + 56, 1, 31, 3u);
  Function_222dd1c(v1, dword_223E5F0, 4, v2 + 56, 1);
  return 4;
}

//----- (0222DB08) --------------------------------------------------------
int __fastcall Function_222db08(int a1)
{
  int v1;
  int v2;

  v1 = LoadOverlayData1c(a1);
  v2 = v1;
  if ( *(uint *)(v1 + 1480) == 30 )
  {
    *(uint *)(v1 + 1484) = 1;
    Function_2230224(v1);
  }
  Function_2237790(0, 54, *(uint *)(v2 + 5592), 2);
  return -1;
}

//----- (0222DB40) --------------------------------------------------------
int __fastcall Function_222db40(int a1)
{
  uint *v1;

  v1 = (uint *)LoadOverlayData1c(a1);
  if ( v1[370] == 30 )
    v1[371] = 1;
  Function_2237784(1);
  Function_2237790(0, 53, v1[1398], 2);
  return -1;
}

//----- (0222DB78) --------------------------------------------------------
int __fastcall Function_222db78(uint *a1, uchar a2, uint a3, uint a4)
{
  uint *v4;
  uchar v5;
  int v7;
  int v8;
  int v9;
  int v10;
  long long v11;
  int v12;

  v4 = a1;
  v5 = a2;
  v7 = 0;
  v8 = 0;
  v9 = 2048;
  v10 = 0;
  v11 = 1835009LL;
  v12 = 0;
  *(uint *)((char *)&v11 + 2) = (uchar)(a3 >> 11);
  *(uint *)((char *)&v11 + 3) = (uchar)(a4 >> 14);
  Function_20183c4(a1, a2, &v7, 0);
  return Function_2019ebc(v4, v5);
}

//----- (0222DBC4) --------------------------------------------------------
int __fastcall Function_222dbc4(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v10 = a4;
  v4 = a1;
  v6 = 1;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  SetGraphicsModes(&v6);
  Function_222db78(v4, 0, 0xF000u, 0);
  Function_222db78(v4, 1u, 0xF800u, 0x8000u);
  Function_222db78(v4, 4u, 0x3800u, 0);
  return Function_222db78(v4, 5u, 0x7800u, 0x4000u);
}

//----- (0222DC20) --------------------------------------------------------
int __fastcall Function_222dc20(uint *a1)
{
  uint *v1;

  v1 = a1;
  Call_LoadFromNARC_RLCN(116, 0, 4u, 256, 32, 86);
  LoadFromNARC_RGCN(116, 1, v1, 5u, 0, 5120, 1, 86);
  LoadFromNARC_RCSN(116, 2, v1, 5u, 0, 1536, 1, 86);
  Function_2019e2c((int)v1, 5, 0, 0, 0x20u, 0x18u, 8u);
  return Function_2019448(v1, 5u);
}

//----- (0222DC9C) --------------------------------------------------------
int __fastcall Function_222dc9c(uint *a1)
{
  uint *v1;

  v1 = a1;
  Call_LoadFromNARC_RLCN(116, 0, 0, 256, 32, 86);
  LoadFromNARC_RGCN(116, 1, v1, 1u, 0, 5120, 1, 86);
  LoadFromNARC_RCSN(116, 2, v1, 1u, 0, 1536, 1, 86);
  Function_2019e2c((int)v1, 1, 0, 0, 0x20u, 0x18u, 8u);
  Function_2019448(v1, 1u);
  return Function_222dc20(v1);
}

//----- (0222DD1C) --------------------------------------------------------
int __fastcall Function_222dd1c(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  int result;
  int v13;
  int v14;
  int v15;
  int (*v16)();
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;

  v23 = a4;
  v13 = a1;
  v5 = a2;
  v6 = a3;
  v14 = a4;
  v7 = LoadOverlayData1c(a1);
  v8 = v7;
  v9 = *(int **)(v7 + 124);
  if ( v9 )
    Function_2013a3c(v9);
  *(uint *)(v8 + 124) = Function_2013a04(v6, 0x56u);
  v10 = 0;
  for ( *(uint *)(v8 + 16) = LoadFromMsgNARC(0, 26, 421, 0x56u); v10 < v6; v5 += 8 )
  {
    Function_2013a4c(*(uint **)(v8 + 124), *(ushort ***)(v8 + 16), *(uint *)v5, *(uint *)(v5 + 4));
    ++v10;
  }
  Function_200b190(*(ushort **)(v8 + 16));
  v15 = 0;
  v16 = Function_22383c4;
  v17 = 0;
  v18 = 0;
  v19 = 196608;
  v20 = 268438528;
  v21 = 8388655;
  v22 = 0;
  v15 = *(uint *)(v8 + 124);
  HIWORD(v19) = v6;
  LOWORD(v19) = 3;
  v18 = v14;
  v11 = *(uint *)(v8 + 120);
  if ( v11 )
    Function_2001384(v11, 0, 0);
  *(uint *)(v8 + 120) = Function_200112c(&v15, 0, 0, 0x56u);
  result = -1;
  if ( a5 != -1 )
    result = Function_222de78(v13, v8 + 24, a5);
  return result;
}

//----- (0222DDD0) --------------------------------------------------------
int __fastcall Function_222ddd0(int a1, short a2, int a3, int a4)
{
  short v4;
  int v5;
  int v6;
  uint *v7;
  int v8;
  int v10;
  uint **v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;

  v17 = a4;
  v10 = a1;
  v4 = a2;
  v12 = a3;
  v5 = LoadOverlayData1c(a1);
  v11 = (uint **)v5;
  v6 = Function_202442c(*(uint *)(v5 + 4));
  v7 = v11 + 10;
  v8 = 1;
  v13 = 12;
  v14 = 35838597;
  if ( Function_202dd88(v6) )
  {
    v8 = 2;
    v15 = 13;
    v16 = 35838729;
  }
  *(&v13 + 2 * v8) = 14;
  *(&v13 + 2 * v8 + 1) = 35838785;
  if ( !*v7 )
    Function_201a7e8(*v11, (int)v7, 0, 8, 7, 0x10u, 2 * (v8 + 1), 0, v4);
  Function_200dc48((int)v7, 1, 31, 3u);
  return Function_222dd1c(v10, (int)&v13, v8 + 1, (int)v7, v12);
}

//----- (0222DE78) --------------------------------------------------------
int __fastcall Function_222de78(int a1, int a2, uint a3)
{
  int v3;
  uint v4;
  int v5;
  int v6;
  ushort *v7;
  int v8;
  int v9;
  int v10;
  int result;

  v3 = a2;
  v4 = a3;
  v5 = LoadOverlayData1c(a1);
  *(uint *)(v5 + 16) = LoadFromMsgNARC(1, 26, 421, 0x56u);
  *(uint *)(v5 + 12) = Function_200b358(0x56u);
  v6 = Function_2002df8_GetLineHeight(1, 6u);
  Function_201ada4_ClearTextBox(v3, v6);
  v7 = *(ushort **)(v5 + 20);
  if ( !v7 )
    v7 = Function_200b29c(*(uint **)(v5 + 12), *(ushort ***)(v5 + 16), v4, 0x56u);
  v8 = *(uint *)(v5 + 104);
  *(uint *)(v5 + 108) = Function_201d78c(v3, 1);
  if ( !*(uint *)(v5 + 20) )
    Function_20237bc_FreeMsg((int)v7, v9);
  Function_200e060(v3, 0, 1, 2u);
  Function_200b190(*(ushort **)(v5 + 16));
  Function_200b3f0(*(uint **)(v5 + 12), v10);
  result = 255;
  *(uint *)(v5 + 104) = 255;
  return result;
}

//----- (0222DF10) --------------------------------------------------------
uint __fastcall Function_222df10(int a1, int a2, char *a3)
{
  int v3;
  char *v4;
  ushort *v5;
  int v6;
  int v7;

  v3 = a2;
  v4 = a3;
  LoadOverlayData1c(a1);
  v5 = (ushort *)Function_2023790(37, 0x56u);
  Function_2023d8c(v5, v4, 0x24u);
  v6 = Function_2002df8_GetLineHeight(0, 6u);
  Function_201ada4_ClearTextBox(v3, v6);
  Function_201d78c(v3, 0);
  Function_200dc48(v3, 0, 31, 3u);
  return Function_20237bc_FreeMsg((int)v5, v7);
}

//----- (0222DF70) --------------------------------------------------------
int __fastcall Function_222df70(int a1, int *a2, int (__fastcall *a3)(int))
{
  int v3;
  int *v4;
  int (__fastcall *v5)(int);
  int v6;
  int (__fastcall *v7)(int);
  int result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = LoadOverlayData1c(a1);
  v7 = (int (__fastcall *)(int))Function_2001288(*(uint *)(v6 + 120));
  if ( v7 == (int (__fastcall *)(int))-2 )
  {
    result = Function_2005748(0x5DCu);
    if ( v5 )
    {
      result = v5(v3);
      if ( result != -1 )
        *v4 = result;
    }
  }
  else
  {
    result = -1;
    if ( v7 != (int (__fastcall *)(int))-1 )
    {
      result = Function_2005748(0x5DCu);
      if ( v7 )
      {
        dword_223F180[14] = (int)v7;
        result = v7(v3);
        if ( result != -1 )
          *v4 = result;
      }
    }
  }
  return result;
}

//----- (0222DFD4) --------------------------------------------------------
int __fastcall Function_222dfd4(int a1, int a2)
{
  int v2;
  int v3;
  uchar v4;
  int v5;

  v2 = a1;
  v3 = a2;
  Function_201d710();
  LoadFromNARC_PlFont1(0, 0, 86);
  LoadFromNARC_PlFont1(0, 32, 86);
  v4 = Function_2027b50(*(ushort **)(v3 + 8));
  Function_200dd0c(*(uint **)v3, 0, 1, 2, v4, 86);
  Function_200daa4(*(uint **)v3, 0, 31, 3, 1, 86);
  MEMORY[0x5000000] = 32140;
  if ( !Function_201a7cc(v3 + 24) )
    Function_201a7e8(*(uint **)v3, v3 + 24, 0, 2, 19, 0x1Bu, 4u, 0, 40);
  Function_222de78(v2, v3 + 24, 0);
  Function_222ddd0(v2, 196, 0, v5);
  Function_222dc9c(*(uint **)v3);
  return 1;
}

//----- (0222E080) --------------------------------------------------------
int __fastcall Function_222e080(int a1, uint *a2)
{
  int v2;
  uint *v3;
  int v4;
  int v5;
  int result;
  int v7;

  v2 = a1;
  v3 = a2;
  v4 = LoadOverlayData1c(a1);
  v5 = v4;
  result = Function_2238eac(v2, v4 + 5600);
  switch ( (uchar)result )
  {
    case 1:
      memcpy((uchar *)(v5 + 140), (char *)(v5 + 5720), 936);
      Function_222d30c(v5, 0);
      *(uint *)(v5 + 132) = 27;
      *v3 = 19;
      result = 5596;
      *(uint *)(v5 + 5596) = 0;
      break;
    case 2:
    case 3:
      Function_222d30c(v5, 0);
      *(uint *)(v5 + 5596) = 0;
      result = 17;
      *v3 = 17;
      break;
    case 4:
      Function_201acf4(v5 + 9856);
      Function_201a8fc(v5 + 9856);
      Function_2019ebc(*(uint **)v5, 0);
      Function_2005748(0x5DCu);
      Function_222ddd0(v2, 196, 0, v7);
      Function_201ff0c(0x10u, 1);
      result = 3;
      *v3 = 3;
      break;
    default:
      return result;
  }
  return result;
}

//----- (0222E13C) --------------------------------------------------------
uint __fastcall Function_222e13c(int a1, int a2, int a3, int a4)
{
  uint **v4;
  int v5;
  uint *v6;
  int v7;
  char v9;
  uint *v10;
  int v11;

  v11 = a4;
  v4 = (uint **)a1;
  v5 = *(uint *)(a1 + 9836);
  if ( v5 == -1 )
    v5 = 11;
  Function_222d30c(a1, 0);
  Function_201ff0c(0x10u, 0);
  Function_2019ebc(*v4, 0);
  v6 = Function_200b358(0x56u);
  Function_200b60c((int)v6, 0, (int)v4[2460], 5, 2, 1);
  Function_2237808(&v9, v4 + 2464);
  Function_2237858(&v9, 24, 16, 100);
  Function_2237860(&v9);
  v10 = v6;
  Function_223795c(*v4, &v9, 4, 4, v5);
  return Function_200b3f0(v6, v7);
}

//----- (0222E1D8) --------------------------------------------------------
int __fastcall Function_222e1d8(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = LoadOverlayData1c(a1);
  v4 = v3;
  v5 = *(uint *)(v3 + 128);
  switch ( v5 )
  {
    case 3:
      v1 = 21;
      break;
    case 4:
      v1 = 25;
      break;
    case 2:
      v1 = 22;
      break;
    case 1:
      v1 = 27;
      break;
    case 5:
      return Function_222e228(v2, v4 + 24, 9, 52);
  }
  return Function_222e228(v2, v4 + 24, v1, 51);
}

//----- (0222E228) --------------------------------------------------------
int __fastcall Function_222e228(int a1, int a2, uint a3, int a4)
{
  int v4;
  uint v5;
  int v6;
  int v7;
  int *v8;
  ushort **v9;
  uint *v10;
  int v11;
  int v12;
  int v14;

  v14 = a1;
  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = LoadOverlayData1c(a1);
  v8 = (int *)v7;
  if ( v4 && v5 )
  {
    v9 = (ushort **)LoadFromMsgNARC(1, 26, 421, 0x56u);
    v10 = Function_200b358(0x56u);
    v8[5] = (int)Function_200b29c(v10, v9, v5, 0x56u);
    v8[26] = 1;
    Function_222de78(v14, v4, v5);
    v8[29] = v6;
    Function_200b3f0(v10, v11);
    Function_200b190((ushort *)v9);
  }
  else if ( !Function_201d724(*(uint *)(v7 + 108) & 0xFF) )
  {
    Function_20237bc_FreeMsg(v8[5], v12);
    v8[5] = 0;
    v8[26] = 0;
    return v8[29];
  }
  return 50;
}

//----- (0222E2AC) --------------------------------------------------------
int *__fastcall Function_222e2ac(int a1)
{
  int *result;

  result = *(int **)(a1 + 5588);
  switch ( (uchar)result )
  {
    case 1:
      Function_222d2dc();
      result = Function_2039794();
      break;
    default:
      return result;
  }
  return result;
}

//----- (0222E2DC) --------------------------------------------------------
int __fastcall Function_222e2dc(int a1)
{
  int v1;
  int *v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v1 = a1;
  Function_22301b0();
  Function_2017fc8(3, 86, 196608);
  v2 = (int *)MallocSomeDataAndStorePtrInOverlayData1c(v1, 10744, 0x56u);
  Call_FillMemWithValue(v2, 0, 0x29F8u);
  *v2 = Function_2018340(0x56u);
  Function_201ff00();
  v3 = Function_201ff68();
  Function_2232054(v3);
  Function_222dbc4((uint *)*v2, v4, v5, v6);
  SetBrightnessWithValue(0, 0);
  SetBrightnessWithValue(1, 0);
  Function_2004550(0xAu, 0x496u);
  v7 = Function_2237520(86);
  if ( Function_2237624(v7) )
  {
    v2[1397] = 2;
    Function_2017b70((uchar)GameIDNr);
    Function_2238400(1);
  }
  v2[370] = 29;
  v8 = *(uint *)(LoadPtrToOverWorldDataIn18(v1) + 8);
  v2[1] = v8;
  v2[2] = LoadPlayerDataAdress(v8);
  v2[26] = 255;
  Function_2017fc8(0, 91, 768);
  return 1;
}

//----- (0222E398) --------------------------------------------------------
int __fastcall Function_222e398(int a1)
{
  int v1;

  v1 = a1;
  *(uint *)(a1 + 88) = Function_200985c(*(uint *)(*(uint *)(a1 + 12) + 300), 116, 39, 1, 20001, 1, 86);
  *(uint *)(v1 + 92) = Function_20098b8(*(uint *)(*(uint *)(v1 + 12) + 304), 116, 36, 0, 20001, 1, 1, 86);
  *(uint *)(v1 + 96) = Function_2009918(*(uint *)(*(uint *)(v1 + 12) + 308), 116, 38, 1, 20001, 2u, 86);
  *(uint *)(v1 + 100) = Function_2009918(*(uint *)(*(uint *)(v1 + 12) + 312), 116, 37, 1, 20001, 3u, 86);
  *(uint *)(v1 + 112) = Function_200985c(*(uint *)(*(uint *)(v1 + 12) + 300), 116, 39, 1, 20002, 2, 86);
  *(uint *)(v1 + 116) = Function_20098b8(*(uint *)(*(uint *)(v1 + 12) + 304), 116, 36, 0, 20002, 2, 1, 86);
  *(uint *)(v1 + 120) = Function_2009918(*(uint *)(*(uint *)(v1 + 12) + 308), 116, 38, 1, 20002, 2u, 86);
  *(uint *)(v1 + 124) = Function_2009918(*(uint *)(*(uint *)(v1 + 12) + 312), 116, 37, 1, 20002, 3u, 86);
  Function_200a328(*(int **)(v1 + 88));
  Function_200a328(*(int **)(v1 + 112));
  Function_200a640(*(int **)(v1 + 92));
  Function_200a640(*(int **)(v1 + 116));
  Function_20093b4(
    v1 + 16,
    20001,
    20001,
    20001,
    20001,
    -1,
    -1,
    0,
    0,
    *(uint *)(*(uint *)(v1 + 12) + 300),
    *(uint *)(*(uint *)(v1 + 12) + 304),
    *(uint *)(*(uint *)(v1 + 12) + 308),
    *(uint *)(*(uint *)(v1 + 12) + 312),
    0,
    0);
  return Function_20093b4(
           v1 + 52,
           20002,
           20002,
           20002,
           20002,
           -1,
           -1,
           0,
           0,
           *(uint *)(*(uint *)(v1 + 12) + 300),
           *(uint *)(*(uint *)(v1 + 12) + 304),
           *(uint *)(*(uint *)(v1 + 12) + 308),
           *(uint *)(*(uint *)(v1 + 12) + 312),
           0,
           0);
}

//----- (0222E538) --------------------------------------------------------
uint __fastcall Function_222e538(int a1, int a2)
{
  int v2;
  uint v3;
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

  v5 = **(uint **)(a1 + 12);
  v6 = a1 + 16 + 36 * (a2 != 1);
  v9 = 0;
  v10 = 4096;
  v11 = 4096;
  v12 = 4096;
  v13 = 0;
  v7 = 0x80000;
  v14 = 10;
  v8 = 0x20000;
  v15 = a2;
  v16 = 86;
  if ( a2 == 2 )
    v8 = 1179648;
  v2 = Function_2021aa0((uint **)&v5);
  v3 = v2;
  if ( v2 )
  {
    Function_2021cc8(v2, 1);
    Function_2021e80(v3, 0);
    Function_2021d6c(v3, 0);
    Function_2021cac(v3, 1);
  }
  return v3;
}

//----- (0222E5B4) --------------------------------------------------------
uint *__fastcall Function_222e5b4(int a1)
{
  int v1;
  int v2;
  uint *result;

  v1 = a1;
  *(uint *)(a1 + 12308) = Function_222e538(a1, 1);
  Function_2021dcc(*(uint *)(v1 + 12308), 2u);
  Function_2021e50(*(uint *)(v1 + 12308), 0);
  Function_2021cac(*(uint *)(v1 + 12308), 0);
  Function_2021f58(*(uint *)(v1 + 12308), 0);
  Function_2021cf8(*(uint *)(v1 + 12308), 2);
  v2 = *(uint *)(v1 + 12308);
  Function_2021d28();
  *result = 0x80000;
  result[1] = 393216;
  return result;
}

//----- (0222E60C) --------------------------------------------------------
uint *__fastcall Function_222e60c(int a1)
{
  int v1;
  int v2;
  uint *result;

  v1 = a1;
  *(uint *)(a1 + 12384) = Function_222e538(a1, 2);
  Function_2021dcc(*(uint *)(v1 + 12384), 4u);
  Function_2021e50(*(uint *)(v1 + 12384), 0);
  Function_2021cac(*(uint *)(v1 + 12384), 0);
  Function_2021f58(*(uint *)(v1 + 12384), 0);
  Function_2021cf8(*(uint *)(v1 + 12384), 2);
  v2 = *(uint *)(v1 + 12384);
  Function_2021d28();
  *result = 0x80000;
  result[1] = 0x100000;
  return result;
}

//----- (0222E664) --------------------------------------------------------
int __fastcall Function_222e664(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_2021bd4(*(uint *)(a1 + 12308));
  result = 12308;
  *(uint *)(v1 + 12308) = 0;
  return result;
}

//----- (0222E67C) --------------------------------------------------------
int __fastcall Function_222e67c(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_2021bd4(*(uint *)(a1 + 12384));
  result = 12384;
  *(uint *)(v1 + 12384) = 0;
  return result;
}

//----- (0222E694) --------------------------------------------------------
int __fastcall Function_222e694(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int result;
  int v7;

  v7 = a1;
  v1 = 0;
  v2 = a1;
  do
  {
    v3 = *(uint *)(v2 + 148);
    if ( v3 )
      Function_2021e2c(v3, 0x2000);
    v4 = *(uint *)(v2 + 6228);
    if ( v4 )
      Function_2021e2c(v4, 0x2000);
    ++v1;
    v2 += 76;
  }
  while ( v1 < 80 );
  v5 = *(uint *)(v7 + 12308);
  if ( v5 )
    Function_2021e2c(v5, 0x2000);
  result = *(uint *)(v7 + 12384);
  if ( result )
    result = Function_2021e2c(result, 0x2000);
  return result;
}

//----- (0222E6F8) --------------------------------------------------------
uint __fastcall Function_222e6f8(int a1)
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
    *(uint *)(v3 + 148) = Function_222e538(v1, 1);
    Function_2021dcc(*(uint *)(v3 + 148), 1u);
    result = Function_2021e50(*(uint *)(v3 + 148), 0);
    ++v2;
    v3 += 76;
  }
  while ( v2 < 80 );
  return result;
}

//----- (0222E734) --------------------------------------------------------
uint __fastcall Function_222e734(int a1)
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
    if ( v2 >= 20 )
    {
      result = v3 + 148;
      *(uint *)(v3 + 148) = 0;
    }
    else
    {
      *(uint *)(v3 + 148) = Function_222e538(v1, 1);
      Function_2021dcc(*(uint *)(v3 + 148), 1u);
      result = Function_2021e50(*(uint *)(v3 + 148), 0);
    }
    ++v2;
    v3 += 76;
  }
  while ( v2 < 80 );
  return result;
}

//----- (0222E77C) --------------------------------------------------------
uint __fastcall Function_222e77c(int a1)
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
    *(uint *)(v3 + 6228) = Function_222e538(v1, 2);
    Function_2021dcc(*(uint *)(v3 + 6228), 5u);
    result = Function_2021e50(*(uint *)(v3 + 6228), 0);
    ++v2;
    v3 += 76;
  }
  while ( v2 < 80 );
  return result;
}

//----- (0222E7B4) --------------------------------------------------------
int __fastcall Function_222e7b4(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = 0;
  v2 = a1;
  do
  {
    result = *(uint *)(v2 + 148);
    if ( result )
    {
      Function_2021bd4(result);
      *(uint *)(v2 + 148) = 0;
      result = Call_RemoveTaskFromTaskList(*(int **)(v2 + 208));
    }
    ++v1;
    v2 += 76;
  }
  while ( v1 < 80 );
  return result;
}

//----- (0222E7E4) --------------------------------------------------------
int __fastcall Function_222e7e4(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = 0;
  v2 = a1;
  do
  {
    Function_2021bd4(*(uint *)(v2 + 6228));
    *(uint *)(v2 + 6228) = 0;
    result = Call_RemoveTaskFromTaskList(*(int **)(v2 + 6288));
    ++v1;
    v2 += 76;
  }
  while ( v1 < 80 );
  return result;
}

//----- (0222E814) --------------------------------------------------------
int __fastcall Function_222e814(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int *v5;
  int v6;
  int *v7;
  char *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uint v16;
  int v17;
  uint v18;
  int v19;
  uint v20;
  int v21;
  uint v22;
  int v23;
  uint v24;
  int v25;
  char *v26;
  int *v27;
  int v28;
  int v29;
  int v30;
  long long v31;
  int v32;
  int v33;
  int v34;
  int *v35;
  int v36;
  uint v37;
  int v38;
  uint v39;
  int v40;
  int v41;
  int v42;
  uint v43;
  int v44;
  int v45;
  int result;
  int v47;
  uint v48;
  int v49;
  int v50;
  char v51;
  int v52;
  uchar savedregs[24];

  *(uint *)savedregs = a4;
  v4 = a1;
  v5 = dword_223D758;
  v6 = 0;
  v7 = &v52;
  v47 = (int)(a1 + 34);
  v8 = &v51;
  v9 = 10;
  do
  {
    v10 = *v5;
    v11 = v5[1];
    v5 += 2;
    *(uint *)v8 = v10;
    *((uint *)v8 + 1) = v11;
    v8 += 8;
    --v9;
  }
  while ( v9 );
  *(uint *)v8 = *v5;
  do
  {
    v4[38] = 0x80000;
    v4[39] = 393216;
    v4[41] = 0x4000;
    v4[42] = 20480;
    v4[45] = ((uint)v6 >> 31) + __ROR4__((v6 << 30) - ((uint)v6 >> 31), 30);
    v4[47] = 0;
    v4[35] = 0;
    v12 = s32_div_f(v6, 10) + 4;
    if ( v12 <= 0 )
    {
      v15 = fflt(v12 << 12);
      v14 = fsub(v15, 1056964608);
    }
    else
    {
      v13 = fflt(v12 << 12);
      v14 = fadd(0x3F000000u, v13);
    }
    v4[41] = ffix(v14);
    if ( v6 <= 50 )
    {
      if ( v6 <= 40 )
      {
        if ( v6 <= 30 )
        {
          if ( v6 <= 25 )
          {
            if ( v6 <= 20 )
            {
              v26 = &v51;
              v27 = &v52;
              v28 = 10;
              do
              {
                v29 = *(uint *)v26;
                v30 = *((uint *)v26 + 1);
                v26 += 8;
                *v27 = v29;
                v27[1] = v30;
                v27 += 2;
                --v28;
              }
              while ( v28 );
              *v27 = *(uint *)v26;
              v4[46] = *v7;
            }
            else
            {
              v24 = PRNG();
              s32_div_f(v24, 5);
              v4[46] = v6 + 220 + v25;
            }
          }
          else
          {
            v22 = PRNG();
            s32_div_f(v22, 5);
            v4[46] = v6 + 230 + v23;
          }
        }
        else
        {
          v20 = PRNG();
          s32_div_f(v20, 5);
          v4[46] = v6 + 240 + v21;
        }
      }
      else
      {
        v18 = PRNG();
        s32_div_f(v18, 5);
        v4[46] = v6 + 250 + v19;
      }
    }
    else
    {
      v16 = PRNG();
      s32_div_f(v16, 5);
      v4[46] = v6 + 260 + v17;
    }
    LODWORD(v31) = dflt((v4[46] + 1) / 2);
    v32 = dmul(4604480259023595110LL, v31);
    v4[46] = dfix(v32, v33);
    ++v4[46];
    v4[48] = 15;
    v4[50] = v4[48];
    v4[51] = v4[48];
    v34 = v4[37];
    Function_2021d28();
    v36 = v35[1];
    v48 = *v35;
    v49 = v36;
    v50 = v35[2];
    v37 = PRNG();
    s32_div_f(v37, 224);
    if ( v38 + 16 <= 0 )
    {
      v43 = PRNG();
      s32_div_f(v43, 224);
      v45 = fflt((v44 + 16) << 12);
      v42 = fsub(v45, 1056964608);
    }
    else
    {
      v39 = PRNG();
      s32_div_f(v39, 224);
      v41 = fflt((v40 + 16) << 12);
      v42 = fadd(0x3F000000u, v41);
    }
    v48 = ffix(v42);
    v49 = 0;
    Function_2021c50((uint *)v4[37], (int *)&v48);
    Function_2021cac(v4[37], 0);
    v4[52] = AddTaskToTaskList1((int)Function_222eeb8, v47, 6u);
    ++v6;
    result = v47 + 76;
    v4 += 19;
    ++v7;
    v47 += 76;
  }
  while ( v6 < 80 );
  return result;
}

//----- (0222EA68) --------------------------------------------------------
uint *__fastcall Function_222ea68(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  uint *result;
  uint v8;
  int v9;
  uint v10;
  int v11;
  uint v12;
  int v13;
  uint v14;
  int v15;
  uint v16;
  ushort v17;
  ushort v18;
  uint v19;
  int v20;
  uint v21;
  uint v22;
  int v23;

  v23 = a4;
  v4 = a1;
  v5 = 0;
  v6 = (int)(a1 + 34);
  do
  {
    result = (uint *)v4[37];
    if ( result )
    {
      v4[38] = 0x80000;
      v4[39] = 393216;
      v4[41] = 49152;
      v4[42] = 4096;
      v4[45] = 255;
      v4[47] = 0;
      v4[35] = 0;
      v4[36] = 0;
      if ( v5 <= 30 )
      {
        if ( v5 <= 20 )
        {
          if ( v5 <= 10 )
          {
            v14 = PRNG();
            s32_div_f(v14, 5);
            v4[46] = v15 + 5;
          }
          else
          {
            v12 = PRNG();
            s32_div_f(v12, 5);
            v4[46] = v13 + 10;
          }
        }
        else
        {
          v10 = PRNG();
          s32_div_f(v10, 10);
          v4[46] = v11 + 10;
        }
      }
      else
      {
        v8 = PRNG();
        s32_div_f(v8, 10);
        v4[46] = v9 + 15;
      }
      v4[46] = 0;
      v4[50] = v4[48];
      v4[51] = v4[48];
      v16 = PRNG();
      s32_div_f(v16, 360);
      v18 = v17;
      v19 = PRNG();
      v20 = (v19 >> 31) + __ROR4__((v19 << 27) - (v19 >> 31), 27) + 64;
      v21 = v4[38] + Function_201d250(v18) * v20;
      v22 = v4[39] + Function_201d264(v18) * v20;
      Function_2021c50((uint *)v4[37], (int *)&v21);
      Function_2021dcc(v4[37], 1u);
      Function_2021cac(v4[37], 0);
      result = AddTaskToTaskList1((int)Function_222eeb8, v6, 6u);
      v4[52] = result;
    }
    ++v5;
    v4 += 19;
    v6 += 76;
  }
  while ( v5 < 80 );
  return result;
}

//----- (0222EBD0) --------------------------------------------------------
uint *__fastcall Function_222ebd0(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  uint v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint v9;
  int v10;
  uint v11;
  int v12;
  uint v13;
  int v14;
  uint v15;
  int v16;
  uint v17;
  int v18;
  uint v19;
  int v20;
  uint v21;
  int v22;
  int v23;
  int *v24;
  int v25;
  uint *result;
  int v27;
  int v28;
  int v29;

  v1 = a1;
  v2 = 0;
  v3 = (int)(a1 + 1554);
  do
  {
    v1[1558] = 0x80000;
    v1[1559] = 1572864;
    v1[1561] = 0x4000;
    v1[1562] = 20480;
    v1[1565] = ((uint)v2 >> 31) + __ROR4__((v2 << 31) - ((uint)v2 >> 31), 31) + 4;
    v1[1567] = 0;
    v1[1555] = 0;
    v4 = PRNG();
    v1[1569] = (v4 >> 31) + __ROR4__((v4 << 30) - (v4 >> 31), 30) + 2;
    v5 = s32_div_f(v2, 30) + 4;
    if ( v5 <= 0 )
    {
      v8 = fflt(v5 << 12);
      v7 = fsub(v8, 1056964608);
    }
    else
    {
      v6 = fflt(v5 << 12);
      v7 = fadd(0x3F000000u, v6);
    }
    v1[1561] = ffix(v7);
    if ( v2 <= 60 )
    {
      if ( v2 <= 50 )
      {
        if ( v2 <= 40 )
        {
          if ( v2 <= 30 )
          {
            if ( v2 <= 20 )
            {
              if ( v2 <= 10 )
              {
                v1[1568] = 5;
                v21 = PRNG();
                s32_div_f(v21, 5);
                v1[1566] = v22 + 10;
              }
              else
              {
                v1[1568] = 5;
                v19 = PRNG();
                s32_div_f(v19, 5);
                v1[1566] = v20 + 20;
              }
            }
            else
            {
              v1[1568] = 5;
              v17 = PRNG();
              s32_div_f(v17, 10);
              v1[1566] = v18 + 30;
            }
          }
          else
          {
            v1[1568] = 5;
            v15 = PRNG();
            s32_div_f(v15, 10);
            v1[1566] = v16 + 40;
          }
        }
        else
        {
          v1[1568] = 5;
          v13 = PRNG();
          s32_div_f(v13, 5);
          v1[1566] = v14 + 50;
        }
      }
      else
      {
        v1[1568] = 5;
        v11 = PRNG();
        s32_div_f(v11, 10);
        v1[1566] = v12 + 60;
      }
    }
    else
    {
      v1[1568] = 5;
      v9 = PRNG();
      s32_div_f(v9, 10);
      v1[1566] = v10 + 70;
    }
    v1[1570] = v1[1568];
    v1[1571] = v1[1568];
    v23 = v1[1557];
    Function_2021d28();
    v25 = v24[1];
    v27 = *v24;
    v28 = v25;
    v29 = v24[2];
    v27 = 0x80000;
    v28 = 1572864;
    Function_2021c50((uint *)v1[1557], &v27);
    Function_2021cac(v1[1557], 1);
    result = AddTaskToTaskList1((int)Function_222eeb8, v3, 6u);
    ++v2;
    v1[1572] = result;
    v1 += 19;
    v3 += 76;
  }
  while ( v2 < 80 );
  return result;
}

//----- (0222EDC0) --------------------------------------------------------
int __fastcall Function_222edc0(int a1, int a2, int a3, int a4, uint *a5, uint *a6, uint a7, short a8)
{
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint v13;
  int v14;
  uint v15;
  uchar v16;
  char v17;
  int v18;
  uint v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  uint v26;
  int v27;
  uint v28;
  int v29;
  int v31;
  int v32;

  v8 = a2;
  v9 = a3;
  v10 = a4;
  v11 = fflt(a1);
  v31 = fsub(v11, v9);
  v12 = fflt(v8);
  v32 = fsub(v12, v10);
  v13 = fmul(v31, v31);
  v14 = fmul(v32, v32);
  v15 = fadd(v13, v14);
  Function_20e1108(v15, 0);
  if ( !v17 & v16 )
  {
    v18 = fmul(0x45800000u, v15);
    v20 = fadd(0x3F000000u, v18);
  }
  else
  {
    v19 = fmul(0x45800000u, v15);
    v20 = fsub(v19, 1056964608);
  }
  v21 = ffix(v20);
  v22 = FX_Sqrt(v21);
  v23 = fflt(v22);
  v24 = f_div(v23, 0x45800000u);
  Function_20e11cc(v24, a7);
  if ( !v16 )
    return 0;
  v25 = fflt(a8);
  Function_20e1108(v25, v24);
  if ( !v17 & v16 )
    return 0;
  Function_20e1228(0, v24);
  if ( v17 )
    return 0;
  v26 = fmul(v31, a7);
  v27 = f_div(v26, v24);
  v28 = fmul(v32, a7);
  v29 = f_div(v28, v24);
  *a5 = fadd(v27, 0);
  *a6 = fadd(v29, 0);
  return 1;
}

//----- (0222EEB8) --------------------------------------------------------
int __fastcall Function_222eeb8(int a1, uint *a2)
{
  uint *v2;
  uint v3;
  int result;
  int v5;
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
  short v16;
  uchar v17;
  char v18;
  int v19;
  uint v20;
  int v21;
  uint v22;
  int v23;
  uint v24;
  int v25;
  uint v26;
  int v27;
  int v28;
  uint v29;
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
  uint v40;
  int v41;
  uint v42;
  int v43;
  uint v44;
  int v45;
  uint v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  uint v57;
  int v58;
  uint v59;
  int v60;
  uint v61;
  int v62;
  uint v63;
  int v64;
  uint v65;
  uint v66;
  uint v67;
  uint v68;
  int v69;

  v2 = a2;
  v3 = a2[3];
  if ( a2[12] )
  {
    Function_2021e50(v3, 0);
    result = v2[12] - 1;
    v2[12] = result;
  }
  else
  {
    Function_2021cac(v3, 1);
    v5 = v2[3];
    Function_2021d28();
    v7 = v6[1];
    v67 = *v6;
    v68 = v7;
    v69 = v6[2];
    v8 = fflt(v67);
    v9 = f_div(v8, 0x45800000u);
    v10 = fflt(v68);
    v11 = f_div(v10, 0x45800000u);
    v12 = fflt(v2[7]);
    v13 = f_div(v12, 0x45800000u);
    v14 = fflt(v2[8]);
    v15 = f_div(v14, 0x45800000u);
    v16 = ffix(v15);
    if ( !Function_222edc0(16 * v2[4] >> 16, 16 * v2[5] >> 16, v9, v11, &v66, &v65, v13, v16) || v2[9] )
    {
      result = v2[9];
      if ( result )
      {
        if ( result == 1 )
        {
          v38 = v2[1];
          if ( v38 >= 20 )
            v2[2] = 1;
          else
            v2[1] = v38 + 1;
          v2[10] += 8;
          v39 = v2[11];
          if ( v39 )
          {
            switch ( v39 )
            {
              case 1:
                v42 = v2[13] + 8;
                v2[13] = v42;
                s32_div_f(v42, 360);
                v2[13] = v43;
                v2[17] = (int)(Function_201d250((ushort)v43) * v2[14]) >> 12;
                v67 = v2[4] + Function_201d250(v2[10] & 0xFFFF) * v2[16];
                v68 = v2[5] + Function_201d264(v2[10] & 0xFFFF) * v2[17];
                break;
              case 2:
                v44 = v2[13] + 8;
                v2[13] = v44;
                s32_div_f(v44, 360);
                v2[13] = v45;
                v2[17] = (int)(Function_201d250((ushort)v45) * v2[14]) >> 12;
                v67 = v2[4] - v2[16] * Function_201d250(v2[10] & 0xFFFF);
                v68 = v2[5] - v2[17] * Function_201d264(v2[10] & 0xFFFF);
                break;
              case 3:
                v46 = v2[13] + 8;
                v2[13] = v46;
                s32_div_f(v46, 360);
                v2[13] = v47;
                v2[16] = (int)(Function_201d264((ushort)v47) * v2[14]) >> 12;
                v67 = v2[4] - v2[16] * Function_201d250(v2[10] & 0xFFFF);
                v68 = v2[5] - v2[17] * Function_201d264(v2[10] & 0xFFFF);
                break;
              case 4:
                v48 = v2[14];
                if ( v48 < 96 )
                  v2[14] = v48 + v2[15];
                v2[16] = v2[14];
                v2[17] = v2[14];
                v67 = v2[4] + Function_201d250(v2[10] & 0xFFFF) * v2[16];
                v68 = v2[5] + Function_201d264(v2[10] & 0xFFFF) * v2[17];
                break;
              case 5:
                v49 = v2[14];
                if ( v49 < 96 )
                  v2[14] = v49 + v2[15];
                v2[16] = v2[14];
                v2[17] = v2[14];
                v67 = v2[4] - v2[16] * Function_201d250(v2[10] & 0xFFFF);
                v68 = v2[5] - v2[17] * Function_201d264(v2[10] & 0xFFFF);
                break;
              default:
                v2[1] = 10;
                v2[7] += 2048;
                v50 = fflt(v67);
                v51 = f_div(v50, 0x45800000u);
                v52 = fflt(v68);
                v53 = f_div(v52, 0x45800000u);
                v54 = fflt(v2[7]);
                v55 = f_div(v54, 0x45800000u);
                if ( Function_222edc0(16 * v2[4] >> 16, 16 * v2[5] >> 16, v51, v53, &v66, &v65, v55, 0) )
                {
                  Function_20e1108(v66, 0);
                  if ( !v18 & v17 )
                  {
                    v56 = fmul(0x45800000u, v66);
                    v58 = fadd(0x3F000000u, v56);
                  }
                  else
                  {
                    v57 = fmul(0x45800000u, v66);
                    v58 = fsub(v57, 1056964608);
                  }
                  v59 = ffix(v58);
                  v67 += v59;
                  Function_20e1108(v65, 0);
                  if ( !v18 & v17 )
                  {
                    v60 = fmul(0x45800000u, v65);
                    v62 = fadd(0x3F000000u, v60);
                  }
                  else
                  {
                    v61 = fmul(0x45800000u, v65);
                    v62 = fsub(v61, 1056964608);
                  }
                  v63 = ffix(v62);
                  v68 += v63;
                  Function_2021c50((uint *)v2[3], (int *)&v67);
                }
                else
                {
                  v2[2] = 1;
                }
                break;
            }
          }
          else
          {
            v40 = v2[13] + 8;
            v2[13] = v40;
            s32_div_f(v40, 360);
            v2[13] = v41;
            v2[16] = (int)(Function_201d264((ushort)v41) * v2[14]) >> 12;
            v67 = v2[4] + Function_201d250(v2[10] & 0xFFFF) * v2[16];
            v68 = v2[5] + Function_201d264(v2[10] & 0xFFFF) * v2[17];
          }
          s32_div_f(v2[10], 360);
          v2[10] = v64;
          result = Function_2021c50((uint *)v2[3], (int *)&v67);
        }
      }
      else
      {
        v27 = v2[4] - v67;
        if ( v27 <= 0 )
        {
          v30 = fflt((v2[4] - v67) << 12);
          v29 = fsub(v30, 1056964608);
        }
        else
        {
          v28 = fflt((v2[4] - v67) << 12);
          v29 = fadd(0x3F000000u, v28);
        }
        v31 = v29;
        v32 = v2[5] - v68;
        if ( v32 <= 0 )
        {
          v35 = fflt((v2[5] - v68) << 12);
          v34 = fsub(v35, 1056964608);
        }
        else
        {
          v33 = fflt((v2[5] - v68) << 12);
          v34 = fadd(0x3F000000u, v33);
        }
        v36 = ffix(v34);
        v37 = ffix(v31);
        v2[10] = FX_Atan2Idx(v36, v37);
        result = v2[9] + 1;
        v2[9] = result;
      }
    }
    else
    {
      Function_20e1108(v66, 0);
      if ( !v18 & v17 )
      {
        v19 = fmul(0x45800000u, v66);
        v21 = fadd(0x3F000000u, v19);
      }
      else
      {
        v20 = fmul(0x45800000u, v66);
        v21 = fsub(v20, 1056964608);
      }
      v22 = ffix(v21);
      v67 += v22;
      Function_20e1108(v65, 0);
      if ( !v18 & v17 )
      {
        v23 = fmul(0x45800000u, v65);
        v25 = fadd(0x3F000000u, v23);
      }
      else
      {
        v24 = fmul(0x45800000u, v65);
        v25 = fsub(v24, 1056964608);
      }
      v26 = ffix(v25);
      v68 += v26;
      result = Function_2021c50((uint *)v2[3], (int *)&v67);
    }
  }
  return result;
}

//----- (0222F348) --------------------------------------------------------
ushort *__fastcall Function_222f348(int a1)
{
  return G2x_SetBlendBrightness_(&REG_BLDCNT, 34, *(char *)(a1 + 8));
}

//----- (0222F360) --------------------------------------------------------
ushort *__fastcall Function_222f360(int a1)
{
  return G2x_SetBlendBrightness_(&REG_BLDCNT_SUB, 34, *(char *)(a1 + 8));
}

//----- (0222F378) --------------------------------------------------------
ushort *__fastcall Function_222f378(int a1)
{
  int v1;

  v1 = a1;
  Function_222f348(a1);
  return Function_222f360(v1);
}

//----- (0222F388) --------------------------------------------------------
uint Function_222f388()
{
  Function_201975c(1u, 0);
  return Function_201975c(5u, 0);
}

//----- (0222F39C) --------------------------------------------------------
int __fastcall Function_222f39c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v3 = 1;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v7 = *(char *)(a1 + 8) - a3;
      if ( v7 <= -16 )
      {
        *(uchar *)(a1 + 8) = -16;
      }
      else
      {
        *(uchar *)(a1 + 8) = v7;
        v3 = 0;
      }
    }
    else if ( a2 == 2 )
    {
      v8 = *(char *)(a1 + 8) + a3;
      if ( v8 >= 16 )
      {
        *(uchar *)(a1 + 8) = 16;
      }
      else
      {
        *(uchar *)(a1 + 8) = v8;
        v3 = 0;
      }
    }
  }
  else
  {
    v4 = *(char *)(a1 + 8);
    if ( v4 <= 0 )
    {
      if ( v4 < 0 )
      {
        v6 = v4 + a3;
        if ( v6 >= 0 )
        {
          *(uchar *)(a1 + 8) = 0;
        }
        else
        {
          *(uchar *)(a1 + 8) = v6;
          v3 = 0;
        }
      }
    }
    else
    {
      v5 = v4 - a3;
      if ( v5 <= 0 )
      {
        *(uchar *)(a1 + 8) = 0;
      }
      else
      {
        *(uchar *)(a1 + 8) = v5;
        v3 = 0;
      }
    }
  }
  Function_222f378(a1);
  return v3;
}

//----- (0222F410) --------------------------------------------------------
int __fastcall Function_222f410(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v3 = 1;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v7 = *(char *)(a1 + 8) - a3;
      if ( v7 <= -16 )
      {
        *(uchar *)(a1 + 8) = -16;
      }
      else
      {
        *(uchar *)(a1 + 8) = v7;
        v3 = 0;
      }
    }
    else if ( a2 == 2 )
    {
      v8 = *(char *)(a1 + 8) + a3;
      if ( v8 >= 16 )
      {
        *(uchar *)(a1 + 8) = 16;
      }
      else
      {
        *(uchar *)(a1 + 8) = v8;
        v3 = 0;
      }
    }
  }
  else
  {
    v4 = *(char *)(a1 + 8);
    if ( v4 <= 0 )
    {
      if ( v4 < 0 )
      {
        v6 = v4 + a3;
        if ( v6 >= 0 )
        {
          *(uchar *)(a1 + 8) = 0;
        }
        else
        {
          *(uchar *)(a1 + 8) = v6;
          v3 = 0;
        }
      }
    }
    else
    {
      v5 = v4 - a3;
      if ( v5 <= 0 )
      {
        *(uchar *)(a1 + 8) = 0;
      }
      else
      {
        *(uchar *)(a1 + 8) = v5;
        v3 = 0;
      }
    }
  }
  Function_222f348(a1);
  return v3;
}

//----- (0222F484) --------------------------------------------------------
uint __fastcall Function_222f484(int a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;

  v1 = (uint *)a1;
  *(uchar *)(a1 + 8) = 0;
  Function_222f378(a1);
  Function_222e398((int)v1);
  Function_222e6f8((int)v1);
  Function_222e814(v1, v2, v3, v4);
  Function_222e5b4((int)v1);
  Function_201ff0c(0x10u, 1);
  return Function_201ff74(0x10u, 1);
}

//----- (0222F4BC) --------------------------------------------------------
uint __fastcall Function_222f4bc(int *a1, uint *a2)
{
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
  uint result;

  v2 = (int)a2;
  v3 = *a2;
  if ( v3 <= 9 )
    JUMPOUT(__CS__, *((short *)&off_222F4D4 + v3) + 35845334);
  switch ( (uchar)v3 )
  {
    case 0:
      Function_222f484(v2);
      *(uint *)v2 = 1;
      goto LABEL_63;
    case 1:
      if ( Function_222f39c(v2, 1, 2) )
        *(uint *)v2 = 2;
      goto LABEL_63;
    case 2:
      v4 = 0;
      v5 = 1;
      v6 = 0;
      v7 = v2;
      do
      {
        if ( *(uint *)(v7 + 144) )
          ++v4;
        else
          v5 = 0;
        ++v6;
        v7 += 76;
      }
      while ( v6 < 80 );
      if ( v4 <= 50 )
      {
        if ( v4 <= 30 )
        {
          if ( v4 > 7 )
            Function_2021cac(*(uint *)(v2 + 12308), 1);
        }
        else
        {
          Function_2021dcc(*(uint *)(v2 + 12308), 3u);
        }
      }
      else
      {
        Function_2021dcc(*(uint *)(v2 + 12308), 4u);
      }
      if ( v5 || v4 == 79 )
      {
        *(uint *)v2 = 3;
        Function_222e7b4(v2);
      }
      goto LABEL_63;
    case 3:
      if ( **(uint **)(v2 + 12448) == 2 )
      {
        Function_222e734(v2);
        Function_222ea68((uint *)v2, v8, v9, v10);
        Function_201ff0c(2u, 0);
        Function_222f388();
        *(uint *)v2 = 4;
      }
      goto LABEL_63;
    case 4:
      v11 = 0;
      v12 = 1;
      v13 = 0;
      v14 = v2;
      do
      {
        if ( *(uint *)(v14 + 148) )
        {
          if ( *(uint *)(v14 + 144) )
            ++v11;
          else
            v12 = 0;
        }
        ++v13;
        v14 += 76;
      }
      while ( v13 < 80 );
      Function_222f410(v2, 2, 2);
      if ( v12 || v11 == 19 )
      {
        Function_2005748(0x61Bu);
        *(uint *)v2 = 5;
        Function_222e7b4(v2);
        Function_222e60c(v2);
      }
      goto LABEL_63;
    case 5:
      if ( Function_222f410(v2, 2, 2) )
      {
        Function_222f410(v2, 1, 2);
        *(uint *)v2 = 6;
      }
      goto LABEL_63;
    case 6:
      if ( Function_222f410(v2, 1, 2) )
      {
        v15 = *(uint *)(v2 + 12308);
        Function_2021d28();
        v17 = v16;
        v18 = *(uint *)(v2 + 12384);
        Function_2021d28();
        v20 = *(uint *)(v17 + 4);
        if ( v20 < 917504 )
          *(uint *)(v17 + 4) = v20 + 0x8000;
        if ( *(uint *)(v17 + 4) - 786432 > 0 )
        {
          v21 = *(uint *)(v19 + 4);
          if ( v21 >= 1572864 )
          {
            *(uint *)v2 = 7;
            Function_222e664(v2);
            Function_222e77c(v2);
            Function_222ebd0((uint *)v2);
            Function_201ff0c(2u, 1);
          }
          else
          {
            *(uint *)(v19 + 4) = v21 + 0x8000;
            if ( !Function_2021d34(*(uint *)(v2 + 12384)) )
              Function_2021cac(*(uint *)(v2 + 12384), 1);
          }
        }
      }
      goto LABEL_63;
    case 7:
      v22 = 0;
      v23 = 1;
      v24 = 0;
      v25 = v2;
      do
      {
        if ( *(uint *)(v25 + 6224) )
          ++v22;
        else
          v23 = 0;
        ++v24;
        v25 += 76;
      }
      while ( v24 < 80 );
      if ( v22 > 7 )
        Function_222f39c(v2, 2, 1);
      if ( v22 <= 50 )
      {
        if ( v22 <= 30 )
        {
          if ( v22 > 7 )
            Function_2021dcc(*(uint *)(v2 + 12384), 3u);
        }
        else
        {
          Function_2021dcc(*(uint *)(v2 + 12384), 2u);
        }
      }
      else
      {
        Function_2021cac(*(uint *)(v2 + 12384), 0);
      }
      if ( v23 )
      {
        *(uint *)v2 = 8;
        Function_222e7e4(v2);
        Function_222e67c(v2);
      }
      goto LABEL_63;
    case 8:
      if ( Function_222f39c(v2, 2, 1) )
        *(uint *)v2 = 9;
      goto LABEL_63;
    case 9:
      if ( Function_222f39c(v2, 0, 2) )
        *(uint *)v2 = 255;
LABEL_63:
      result = Function_222e694(v2);
      break;
    default:
      **(uint **)(v2 + 12448) = 0;
      Call_RemoveTaskFromTaskList(a1);
      result = free(v2);
      break;
  }
  return result;
}

//----- (0222F75C) --------------------------------------------------------
int __fastcall Function_222f75c(int a1, int *a2)
{
  int v2;
  int *v3;
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  char *v9;
  int *v10;
  int v11;
  int v12;
  int v13;
  int *v14;
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
  int result;
  void (__fastcall *v36)(uint *);

  v2 = a1;
  v3 = a2;
  v4 = (uint *)LoadOverlayData1c(a1);
  CTRDG_IsExisting();
  v6 = v4[370];
  if ( v6 != 29 )
    v6 = Function_2230224(v4);
  v7 = *v3;
  switch ( (uchar)v6 )
  {
    case 0:
      Function_2237694(86);
      v4[1398] = v3;
      *v3 = 1;
      goto LABEL_128;
    case 1:
      Function_222dfd4(v2, (int)v4);
      Function_222d3e8();
      Function_2237790(1, 3, v3, 2);
      goto LABEL_128;
    case 2:
      Function_22377f0(v3);
      goto LABEL_128;
    case 3:
      Function_222df70(v2, v3, Function_222db40);
      goto LABEL_128;
    case 4:
      Function_222df70(v2, v3, Function_222da64);
      goto LABEL_128;
    case 5:
      Function_222df70(v2, v3, Function_222d75c);
      goto LABEL_128;
    case 6:
    case 0x1A:
    case 0x1C:
    case 0x1D:
    case 0x1E:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2A:
    case 0x2B:
    case 0x2C:
    case 0x2D:
    case 0x2E:
    case 0x2F:
    case 0x30:
      goto LABEL_128;
    case 7:
      v4[270] = Function_222d250((int)v4);
      if ( v4[270] != -1 )
      {
        Function_222d30c((int)v4, 0);
        v4[32] = Function_2232148(v4[1], v4 + 35);
        if ( !Function_201a7cc((int)(v4 + 22)) )
          Function_201a7e8((uint *)*v4, (int)(v4 + 22), 0, 3, 2, 0x1Au, 4u, 0, 452);
        Function_222df10(v2, (int)(v4 + 22), (char *)v4 + 140);
        Function_222de78(v2, (int)(v4 + 6), 4u);
        Function_222d6f8(v2, 0);
        *v3 = 8;
      }
      if ( dword_21BF6C4 & 2 || (--v4[269], !v4[269]) )
      {
        Function_222d30c((int)v4, 0);
        Function_222d2dc();
        Function_2039794();
        *v3 = 17;
      }
      goto LABEL_128;
    case 8:
      Function_222df70(v2, v3, Function_222d94c);
      goto LABEL_128;
    case 9:
      v19 = Function_203608c();
      v20 = v19;
      if ( v19 && Function_2035d78((ushort)v19) )
      {
        if ( Function_2036540(171) == 1 )
        {
          Function_222d30c((int)v4, 0);
          Function_20388f4(1, 1);
          Function_222de78(v2, (int)(v4 + 6), 7u);
          Function_222d40c((int)v4, 1);
          Function_222d30c((int)v4, 1);
          v4[269] = 600;
          *v3 = 10;
        }
      }
      else if ( v20 && !Function_2035d78((ushort)v20) )
      {
        Function_222d2dc();
        Function_2039794();
        Function_222d40c((int)v4, -1);
        Function_222d30c((int)v4, 0);
        *v3 = 16;
        goto LABEL_128;
      }
      if ( dword_21BF6C4 & 2 || (--v4[269], !v4[269]) )
      {
        Function_222d2dc();
        Function_2039794();
        Function_222d40c((int)v4, -1);
        Function_222d30c((int)v4, 0);
        *v3 = 17;
      }
LABEL_128:
      v36 = (void (__fastcall *)(uint *))v4[2682];
      if ( v36 )
        v36(v4);
      Function_2237cac(v4[2685]);
      return 0;
    case 0xA:
      if ( Function_222d2a0() )
        *v3 = 11;
      v21 = Function_203608c();
      if ( dword_21BF6C4 & 2 || (--v4[269], !v4[269]) || v21 && !Function_2035d78((ushort)v21) )
      {
        Function_222d30c((int)v4, 0);
        Function_222d2dc();
        Function_2039794();
        *v3 = 17;
      }
      goto LABEL_128;
    case 0xB:
      v22 = Function_222d55c(v2);
      Function_2238194(*v4, v22);
      Function_20388f4(0, 0);
      Function_222d658(v2, v23, v24, v25);
      *v3 = 12;
      goto LABEL_128;
    case 0xC:
      v26 = Function_203608c();
      if ( !v26 || (v26 = Function_2035d78((ushort)v26)) != 0 )
      {
        v27 = Function_2238528(v26);
        if ( v27 == 4 )
        {
          Function_20364f0(147);
          *v3 = 13;
          v4[271] = 120;
        }
        else if ( Function_2238528(v27) == 3 )
        {
          Function_223850c();
          *((uchar *)v4 + 218) &= 0xFBu;
          Function_222d30c((int)v4, 0);
          *v3 = Function_222e228(v2, (int)(v4 + 6), 0x1Au, 55);
        }
      }
      else
      {
        Function_222d2dc();
        v4[2683] = 1;
        Function_223850c();
        Function_222d30c((int)v4, 0);
        Function_2039794();
        Function_222d40c((int)v4, -1);
        *v3 = 14;
      }
      goto LABEL_128;
    case 0xD:
      if ( Function_2036540(147) == 1 )
      {
        Function_22384f4();
        v4[271] = 10;
        *v3 = 15;
      }
      else if ( !--v4[271] )
      {
        Function_223850c();
        *((uchar *)v4 + 218) &= 0xFBu;
        Function_222d30c((int)v4, 0);
        *v3 = Function_222e228(v2, (int)(v4 + 6), 0x1Au, 55);
      }
      goto LABEL_128;
    case 0xE:
      Function_222d444((int)(v4 + 22), 0);
      *((uchar *)v4 + 218) &= 0xFBu;
      *v3 = Function_222e228(v2, (int)(v4 + 6), 0x1Cu, 55);
      goto LABEL_128;
    case 0xF:
      if ( !--v4[271] )
      {
        Function_222d30c((int)v4, 0);
        Function_222d2dc();
        Function_2039794();
        Function_2005748(0x624u);
        Function_222d40c((int)v4, -1);
        *v3 = Function_222e228(v2, (int)(v4 + 6), 8u, 55);
      }
      goto LABEL_128;
    case 0x10:
      Function_2005748(0x5DCu);
      Function_222de78(v2, (int)(v4 + 6), 0x18u);
      Function_222d444((int)(v4 + 22), 0);
      *v3 = 18;
      goto LABEL_128;
    case 0x11:
      v28 = v4[1399];
      if ( v28 )
      {
        v4[1399] = v28 - 1;
      }
      else
      {
        Function_222d30c((int)v4, 0);
        Function_2005748(0x5DCu);
        Function_222de78(v2, (int)(v4 + 6), 0x17u);
        Function_222d444((int)(v4 + 22), 0);
        *v3 = 18;
      }
      goto LABEL_128;
    case 0x12:
      if ( dword_21BF6C4 )
      {
        Function_2005748(0x5DCu);
        Function_222ddd0(v2, 196, 0, v29);
        *v3 = 3;
      }
      goto LABEL_128;
    case 0x13:
      v30 = v4[1399];
      if ( v30 )
      {
        v4[1399] = v30 - 1;
      }
      else
      {
        if ( v4[33] != 27 )
          Function_223764c(v4 + 35, 936);
        v4[32] = Function_2232148(v4[1], v4 + 35);
        if ( v4[32] == 1 )
        {
          Function_222d30c((int)v4, 0);
          *v3 = 49;
        }
        else
        {
          if ( !Function_201a7cc((int)(v4 + 22)) )
            Function_201a7e8((uint *)*v4, (int)(v4 + 22), 0, 3, 2, 0x1Au, 4u, 0, 452);
          Function_222df10(v2, (int)(v4 + 22), (char *)v4 + 140);
          Function_222de78(v2, (int)(v4 + 6), 4u);
          Function_222d6f8(v2, 0);
          *v3 = 20;
        }
      }
      goto LABEL_128;
    case 0x14:
      Function_222df70(v2, v3, Function_222d94c);
      goto LABEL_128;
    case 0x15:
      *v3 = 22;
      goto LABEL_128;
    case 0x16:
      v31 = Function_222d55c(v2);
      Function_2238194(*v4, v31);
      Function_222de78(v2, (int)(v4 + 6), 7u);
      Function_222d40c((int)v4, 1);
      Function_222d30c((int)v4, 1);
      v4[271] = 60;
      *v3 = 23;
      goto LABEL_128;
    case 0x17:
      v32 = v4[271] - 1;
      v4[271] = v32;
      if ( !v4[271] )
      {
        Function_222d658(v2, v32, v5, v7);
        *v3 = 24;
      }
      goto LABEL_128;
    case 0x18:
      v33 = ((int (*)(void))Function_2238528)();
      if ( v33 == 4 )
        v33 = Function_22384f4();
      v34 = Function_2238528(v33);
      if ( v34 == 2 )
      {
        v4[271] = 1;
        Function_222d30c((int)v4, 0);
        Function_222d40c((int)v4, -1);
        Function_2005748(0x624u);
        *v3 = Function_222e228(v2, (int)(v4 + 6), 8u, 25);
      }
      else if ( Function_2238528(v34) == 3 )
      {
        Function_222d40c((int)v4, -1);
        *((uchar *)v4 + 218) &= 0xFBu;
        *v3 = Function_222e228(v2, (int)(v4 + 6), 0x1Au, 55);
      }
      goto LABEL_128;
    case 0x19:
      if ( !--v4[271] )
      {
        v4[271] = 0x10000;
        *v3 = 55;
      }
      goto LABEL_128;
    case 0x1B:
      Function_222e080(v2, v3);
      goto LABEL_128;
    case 0x1F:
      Function_222df70(v2, v3, (int (__fastcall *)(int))Function_222d9f0);
      Function_22302f4(v4);
      goto LABEL_128;
    case 0x20:
      Function_22302f4(v4);
      if ( dword_223F180[10] == 45 )
      {
        Function_222d30c((int)v4, 0);
        Function_222d55c(v2);
        v4[32] = Function_2232148(v4[1], v4 + 35);
        if ( v4[32] == 1 )
        {
          Function_222d30c((int)v4, 0);
          *v3 = 49;
        }
        else
        {
          v8 = Function_201a7cc((int)(v4 + 22));
          if ( !v8 )
            v8 = Function_201a7e8((uint *)*v4, (int)(v4 + 22), 0, 3, 2, 0x1Au, 4u, 0, 452);
          v9 = (char *)Function_2238d54(v8);
          Function_222df10(v2, (int)(v4 + 22), v9);
          Function_222de78(v2, (int)(v4 + 6), 4u);
          Function_222d8f4(v2);
          *v3 = 31;
        }
      }
      if ( (uint)(dword_223F180[10] - 46) <= 1 )
      {
        Function_22302d4();
        *v3 = 17;
      }
      goto LABEL_128;
    case 0x21:
      v10 = (int *)Function_222d55c(v2);
      Function_222d30c((int)v4, 1);
      Function_222d40c((int)v4, 1);
      if ( Function_222d5c8(v10) == 1 )
      {
        Function_222d658(v2, v11, v12, v13);
        v4[2685] = 1;
        Function_222d40c((int)v4, -1);
        Function_222d444((int)(v4 + 22), 0);
        v14 = (int *)malloc(0x56u, 12452);
        Call_FillMemWithValue(v14, 0, 0x30A4u);
        v14[3112] = (int)(v4 + 2685);
        v14[3] = Function_2237aec();
        AddTaskToTaskList1((int)Function_222f4bc, (int)v14, 5u);
      }
      else
      {
        Function_2238194(*v4, v10);
        Function_222d658(v2, v15, v16, v17);
      }
      *v3 = 34;
      goto LABEL_128;
    case 0x22:
      v18 = Function_2238528(v6);
      if ( v18 == 4 )
        Function_22384f4();
      if ( v18 == 2 )
      {
        Function_222d30c((int)v4, 0);
        Function_222d40c((int)v4, -1);
        Function_222d45c((int)(v4 + 6), 0);
        Function_2019ebc((uint *)*v4, 0);
        Function_201ff0c(1u, 0);
        if ( Function_222d5c8(v4 + 55) == 1 )
        {
          Function_2238194(*v4, v4 + 55);
          v4[2685] = 2;
        }
        else
        {
          Function_2005748(0x624u);
        }
        *v3 = 35;
      }
      else if ( v18 == 3 )
      {
        Function_222d30c((int)v4, 0);
        Function_222d40c((int)v4, -1);
        *((uchar *)v4 + 218) &= 0xFBu;
        *v3 = Function_222e228(v2, (int)(v4 + 6), 0x1Au, 55);
      }
      goto LABEL_128;
    case 0x23:
      if ( !v4[2685] )
      {
        *v3 = Function_222e228(v2, (int)(v4 + 6), 8u, 55);
        Function_201ff0c(1u, 1);
      }
      goto LABEL_128;
    case 0x24:
      Function_22302f4(v4);
      if ( (uint)(dword_223F180[10] - 45) <= 2 )
      {
        if ( dword_223F180[10] == 47 )
          Function_22302d4();
        *v3 = Function_222d94c(v2);
      }
      goto LABEL_128;
    case 0x31:
      if ( v4[32] != 5 )
        Function_222e2ac((int)v4);
      *v3 = Function_222e1d8(v2);
      Function_222d444((int)(v4 + 18), 0);
      goto LABEL_128;
    case 0x32:
      *v3 = Function_222e228(v2, 0, 0, v7);
      goto LABEL_128;
    case 0x33:
      if ( dword_21BF6C4 )
      {
        Function_222d444((int)(v4 + 22), 0);
        *v3 = Function_222da64(v2);
      }
      goto LABEL_128;
    case 0x34:
      Function_222d6f8(v2, 1);
      *v3 = 8;
      v4[32] = 0;
      goto LABEL_128;
    case 0x35:
      Function_222d34c(v2);
      v4[272] = 0;
      return 1;
    case 0x36:
      Function_222d34c(v2);
      result = 1;
      v4[272] = 1;
      return result;
    case 0x37:
      if ( dword_21BF6C4 )
      {
        Function_2005748(0x5DCu);
        if ( (uint)*((uchar *)v4 + 218) << 29 >> 31 == 1 )
        {
          Function_2237790(0, 56, v4[1398], 2);
        }
        else
        {
          Function_2237784(1);
          Function_2237790(0, 57, v4[1398], 2);
        }
      }
      goto LABEL_128;
    case 0x38:
      Function_222dc20((uint *)*v4);
      Function_201ff74(1u, 0);
      Function_201ff74(2u, 1);
      Function_2231ffc(*v4, v4 + 55, 86);
      Function_2237790(1, 55, v4[1398], 2);
      *((uchar *)v4 + 218) &= 0xFBu;
      goto LABEL_128;
    case 0x39:
      OS_ResetSystem(0);
      goto LABEL_128;
    default:
      JUMPOUT(__CS__, (char *)&off_222F792 + *((short *)&off_222F792 + v7) + 2);
      return result;
  }
}

//----- (022301A4) --------------------------------------------------------
int Function_22301a4()
{
  return dword_223F180[12];
}

//----- (022301B0) --------------------------------------------------------
int __fastcall Function_22301b0(int result)
{
  dword_223F180[12] = result;
  return result;
}

//----- (022301BC) --------------------------------------------------------
int __fastcall Function_22301bc(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  v3 = v2;
  v4 = *(uint *)(v2 + 1088);
  if ( v4 )
  {
    if ( v4 == 1 )
      SetOverlayJumpTableDataToLoad(97, (int)&off_223D7AC);
  }
  else
  {
    SetOverlayJumpTableDataToLoad(77, (int)dword_21D742C);
  }
  Function_201807c(91);
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(86);
  if ( *(uint *)(v3 + 5588) == 2 )
    Function_2017b70(0);
  Function_2238400(0);
  return 1;
}

//----- (02230224) --------------------------------------------------------
int __fastcall Function_2230224(int *a1)
{
  int *v1;
  int result;

  v1 = a1;
  result = a1[370];
  if ( result == 28 )
  {
    Function_2037d48(v1[1]);
    v1[371] = 120;
    result = 1480;
    v1[370] = 30;
  }
  else if ( result != 29 && result == 30 )
  {
    if ( Function_2037da0() & 1 )
      v1[372] = 1;
    result = --v1[371];
    if ( !result )
    {
      Function_2037d84();
      result = 1480;
      v1[370] = 29;
    }
  }
  return result;
}

//----- (02230280) --------------------------------------------------------
int *__fastcall Function_2230280(int *result)
{
  switch ( (uchar)result )
  {
    case 0:
      result = &dword_223F180[10];
      dword_223F180[10] = 40;
      break;
    case 1:
      result = &dword_223F180[10];
      dword_223F180[10] = 41;
      break;
    case 2:
      result = &dword_223F180[10];
      dword_223F180[10] = 42;
      break;
    case 3:
      result = &dword_223F180[10];
      if ( dword_223F180[10] == 42 )
        dword_223F180[10] = 44;
      else
        dword_223F180[10] = 47;
      break;
    case 4:
      result = &dword_223F180[10];
      dword_223F180[10] = 48;
      break;
    default:
      return result;
  }
  return result;
}

//----- (022302D4) --------------------------------------------------------
int *Function_22302d4()
{
  int *result;

  Function_20334cc();
  free(dword_223F180[11]);
  Function_2039794();
  result = &dword_223F180[10];
  dword_223F180[11] = 0;
  return result;
}

//----- (022302F4) --------------------------------------------------------
int *__fastcall Function_22302f4(int a1)
{
  int v1;
  int *v2;
  int v3;
  int *result;
  int v5;

  v1 = a1;
  if ( dword_223F180[10] == 44 )
  {
    v2 = Function_22302d4();
    if ( Function_2238ca0(v2) )
      dword_223F180[10] = 45;
    else
      dword_223F180[10] = 46;
  }
  if ( dword_223F180[10] == 37
    || dword_223F180[10] == 38
    || dword_223F180[10] == 39
    || dword_223F180[10] == 40
    || dword_223F180[10] == 41
    || dword_223F180[10] == 43 )
  {
    v3 = WM_GetLinkLevel();
    Function_20397b0(3 - v3);
  }
  result = (int *)(dword_223F180[10] - 37);
  switch ( LOBYTE(dword_223F180[10]) )
  {
    case 0x25:
      Function_2033478();
      dword_223F180[10] = 38;
      goto LABEL_17;
    case 0x26:
      if ( Function_20334a4() == 1 )
      {
        dword_223F180[13] = 0;
        v5 = Function_2238d4c();
        dword_223F180[11] = malloc(0x56u, v5);
        Function_2238a4c(v1 + 1492, Function_2230280);
        dword_223F180[10] = 39;
        Function_2039734();
      }
      goto LABEL_17;
    case 0x29:
      ++dword_223F180[13];
      goto LABEL_17;
    case 0x2F:
      return result;
    default:
LABEL_17:
      result = (int *)2;
      if ( dword_21BF6C4 & 2 )
      {
        result = (int *)(dword_223F180[10] - 40);
        switch ( LOBYTE(dword_223F180[10]) )
        {
          case 0x28:
          case 0x29:
          case 0x30:
            result = (int *)Function_22389c8();
            if ( result )
            {
              result = &dword_223F180[10];
              dword_223F180[10] = 43;
            }
            break;
          default:
            return result;
        }
      }
      break;
  }
  return result;
}

//----- (02230410) --------------------------------------------------------
int Function_2230410()
{
  int v0;
  int v1;

  v0 = Function_2230438();
  v1 = Function_2237a20(v0);
  Function_2237a74(v1);
  return Function_2237b0c(116, 15, 12, 14, 13, 0);
}

//----- (02230438) --------------------------------------------------------
int __fastcall Function_2230438(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = a1;
  v2 = a1[2929];
  if ( v2 )
    Function_2021bd4(v2);
  v3 = v1[2930];
  if ( v3 )
    Function_2021bd4(v3);
  v1[2930] = 0;
  v1[2929] = v1[2930];
  v4 = v1[2931];
  if ( v4 )
    Function_2021bd4(v4);
  v5 = v1[2932];
  if ( v5 )
    Function_2021bd4(v5);
  v6 = v1[2933];
  if ( v6 )
    Function_2021bd4(v6);
  v1[2933] = 0;
  v1[2932] = v1[2933];
  v7 = v1[2932];
  v1[2931] = v7;
  return Function_2237da0(v7);
}

//----- (022304AC) --------------------------------------------------------
char *__fastcall Function_22304ac(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  *(uint *)(a1 + 15692) = 0;
  v2 = *(uint *)(a1 + 11716);
  *(uint *)(a1 + 11716) = Function_2237d14(0);
  Function_2021e80(*(uint *)(v1 + 11716), 2);
  v3 = *(uint *)(v1 + 11720);
  *(uint *)(v1 + 11720) = Function_2237d14(0);
  return Function_2021e80(*(uint *)(v1 + 11720), 2);
}

//----- (02230500) --------------------------------------------------------
char *__fastcall Function_2230500(int a1, int a2)
{
  int v2;
  int v3;
  char *result;

  v2 = a1;
  v3 = a2;
  result = (char *)Function_201a7cc(a1);
  if ( result == (char *)1 )
    result = Function_200dc9c(v2, v3);
  return result;
}

//----- (02230518) --------------------------------------------------------
char *__fastcall Function_2230518(int a1, int a2)
{
  int v2;
  int v3;
  char *result;

  v2 = a1;
  v3 = a2;
  result = (char *)Function_201a7cc(a1);
  if ( result == (char *)1 )
    result = Function_200e084(v2, v3);
  return result;
}

//----- (02230530) --------------------------------------------------------
int __fastcall Function_2230530(int a1, int a2, int a3, int a4, short a5)
{
  int v5;
  int v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  int result;
  int v12;
  int v13;
  int (*v14)();
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;

  v5 = a1;
  v6 = a2;
  v7 = *(int **)(a1 + 11212);
  v8 = a3;
  v12 = a4;
  if ( v7 )
    Function_2013a3c(v7);
  v9 = *(uint *)(v5 + 11208);
  if ( v9 )
    Function_2001384(v9, 0, 0);
  *(uint *)(v5 + 11212) = Function_2013a04(v8, 0x57u);
  v10 = 0;
  for ( *(uint *)(v5 + 10756) = LoadFromMsgNARC(0, 26, 421, 0x57u); v10 < v8; v6 += 8 )
  {
    Function_2013a4c(*(uint **)(v5 + 11212), *(ushort ***)(v5 + 10756), *(uint *)v6, *(uint *)(v6 + 4));
    ++v10;
  }
  Function_200b190(*(ushort **)(v5 + 10756));
  v13 = 0;
  v14 = Function_22383c4;
  v15 = 0;
  v16 = 0;
  v17 = 0x40000;
  v18 = 268438528;
  v19 = 8388655;
  v20 = 0;
  v13 = *(uint *)(v5 + 11212);
  LOWORD(v17) = v8;
  v16 = v12;
  result = Function_200112c(&v13, 0, a5, 0x57u);
  *(uint *)(v5 + 11208) = result;
  return result;
}

//----- (022305EC) --------------------------------------------------------
uint __fastcall Function_22305ec(int a1, uint a2)
{
  int v2;
  uint v3;
  ushort **v4;
  uint *v5;
  int v6;
  ushort *v7;
  int v8;
  int v9;
  int v10;

  v2 = a1;
  v3 = a2;
  v4 = (ushort **)LoadFromMsgNARC(1, 26, 421, 0x57u);
  v5 = Function_200b358(0x57u);
  v6 = Function_2002df8_GetLineHeight(1, 6u);
  Function_201ada4_ClearTextBox(v2, v6);
  v7 = Function_200b29c(v5, v4, v3, 0x57u);
  Function_201d78c(v2, 1);
  Function_201a954(v2, v8);
  Function_20237bc_FreeMsg((int)v7, v9);
  Function_200b190((ushort *)v4);
  return Function_200b3f0(v5, v10);
}

//----- (02230664) --------------------------------------------------------
int __fastcall Function_2230664(uint *a1)
{
  uint *v1;

  v1 = a1;
  Call_LoadFromNARC_RLCN(116, 11, 0, 480, 32, 87);
  Call_LoadFromNARC_RLCN(116, 16, 0, 384, 32, 87);
  LoadFromNARC_RGCN(116, 17, v1, 1u, 0, 3072, 1, 87);
  LoadFromNARC_RCSN(116, 18, v1, 1u, 0, 1536, 1, 87);
  Function_2019e2c((int)v1, 1, 0, 0, 0x20u, 0x18u, 0xCu);
  return Function_2019448(v1, 1u);
}

//----- (022306F4) --------------------------------------------------------
int __fastcall Function_22306f4(int a1)
{
  int v1;

  v1 = LoadOverlayData1c(a1);
  Function_2230868();
  Function_22305ec(v1 + 11216, 0x2Eu);
  Function_2230e04(v1, v1 + 11232, 10, *(uint *)(v1 + 11248));
  return 13;
}

//----- (02230728) --------------------------------------------------------
int __fastcall Function_2230728(int a1)
{
  int *v1;

  v1 = (int *)LoadOverlayData1c(a1);
  Function_2230868();
  if ( Function_202dda8(v1[2792], v1[2800]) == 1 )
    Function_22305ec((int)(v1 + 2804), 0x3Eu);
  else
    Function_22305ec((int)(v1 + 2804), 0x3Du);
  Function_2230e04(v1, v1 + 2808, 9, v1[2812]);
  return 12;
}

//----- (02230778) --------------------------------------------------------
int __fastcall Function_2230778(int a1)
{
  int v1;

  v1 = LoadOverlayData1c(a1);
  Function_2230868();
  Function_22305ec(v1 + 11216, 0x3Fu);
  *(uint *)(v1 + 15696) = Function_200e7fc((int *)(v1 + 11216), 19);
  if ( Function_202dda8(*(uint *)(v1 + 11168), *(uint *)(v1 + 11200)) == 1 )
    Function_202dc7c(*(uint *)(v1 + 11168), *(uint *)(v1 + 11200));
  else
    Function_202dcb8(*(uint *)(v1 + 11168), *(uint *)(v1 + 11200));
  Function_20246e0(*(uint **)(v1 + 11172));
  Function_200eba0(*(uint *)(v1 + 15696));
  if ( !Function_202dd88(*(uint *)(v1 + 11168)) )
    return 26;
  *(uint *)(v1 + 11200) = Function_2230f20(v1, *(uint *)(v1 + 11200), 1);
  Function_22305ec(v1 + 11216, 0x24u);
  Function_2230e04(v1, v1 + 11232, 8, *(uint *)(v1 + 11248));
  Function_2230c44(v1, 1, 0);
  return 5;
}

//----- (02230834) --------------------------------------------------------
int __fastcall Function_2230834(int a1)
{
  int v1;

  v1 = LoadOverlayData1c(a1);
  Function_2230868();
  Function_22305ec(v1 + 11216, 0x24u);
  Function_2230e04(v1, v1 + 11232, 8, *(uint *)(v1 + 11248));
  return 5;
}

//----- (02230868) --------------------------------------------------------
uint __fastcall Function_2230868(int a1)
{
  int v1;

  v1 = a1;
  Function_2013a3c(*(int **)(a1 + 11212));
  *(uint *)(v1 + 11212) = 0;
  Function_2001384(*(uint *)(v1 + 11208), 0, 0);
  *(uint *)(v1 + 11208) = 0;
  Function_2230500(v1 + 11232, 0);
  Function_201acf4(v1 + 11232);
  return Function_201a8fc(v1 + 11232);
}

//----- (022308B0) --------------------------------------------------------
int Function_22308b0()
{
  return 1;
}

//----- (022308B4) --------------------------------------------------------
int __fastcall Function_22308b4(uint *a1, int a2)
{
  uint *v2;
  int v3;
  ushort *v4;
  int v5;

  v2 = a1;
  v3 = a2;
  v4 = (ushort *)Function_2023790(37, *a1);
  Function_2023d8c(v4, (char *)(v2[v2[2800] + 2797] + 260), 0x24u);
  Function_201d78c(v3, 1);
  Function_20237bc_FreeMsg((int)v4, v5);
  return 1;
}

//----- (02230904) --------------------------------------------------------
int __fastcall Function_2230904(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint v5;
  int v6;
  ushort *v7;
  int v8;

  v2 = a1;
  v3 = a2;
  v4 = *(uint *)(a1 + 11200);
  if ( *(uchar *)(*(uint *)(a1 + 4 * v4 + 11188) + 338) & 8 )
  {
    v6 = *(uint *)(a1 + 11168);
    if ( v6 && Function_202dda8(v6, v4) != 1 )
      v5 = 38;
    else
      v5 = 37;
  }
  else
  {
    v5 = 39;
  }
  v7 = Function_200b29c(*(uint **)(v2 + 10752), *(ushort ***)(v2 + 10756), v5, *(uint *)v2);
  Function_201d78c(v3, 1);
  Function_20237bc_FreeMsg((int)v7, v8);
  return 1;
}

//----- (0223097C) --------------------------------------------------------
int __fastcall Function_223097c(int a1)
{
  int v1;
  int v3;
  uint v4;
  int v5;

  v1 = a1;
  RTC_ConvertDayToDate(&v3, *(uint *)(*(uint *)(a1 + 4 * *(uint *)(a1 + 11200) + 11188) + 852));
  Function_200b60c(*(uint *)(v1 + 10752), 0, v3 + 2000, 4, 2, 1);
  Function_200c2e0(*(uint *)(v1 + 10752), 1u, v4);
  Function_200b60c(*(uint *)(v1 + 10752), 2u, v5, 2, 2, 1);
  return 1;
}

//----- (022309E4) --------------------------------------------------------
int __fastcall Function_22309e4(int a1, int a2)
{
  int v2;
  int v3;
  ushort *v4;
  int v5;

  v2 = a1;
  v3 = a2;
  v4 = (ushort *)Function_2023790(251, 0x57u);
  Function_2023d8c(v4, (char *)(*(uint *)(v2 + 4 * *(uint *)(v2 + 11200) + 11188) + 340), 0xFAu);
  Function_201d78c(v3, 1);
  Function_20237bc_FreeMsg((int)v4, v5);
  return 0;
}

//----- (02230A34) --------------------------------------------------------
int __fastcall Function_2230a34(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  ushort *v5;
  int v6;
  int result;

  v2 = a2;
  v3 = *(uint *)(a1 + 4 * *(uint *)(a1 + 11200) + 11188);
  v4 = *(uchar *)(v3 + 840);
  if ( v4 == 255 )
  {
    v5 = Function_200b29c(*(uint **)(a1 + 10752), *(ushort ***)(a1 + 10756), 0x33u, 0x57u);
    Function_201d78c(v2, 1);
    Function_20237bc_FreeMsg((int)v5, v6);
    result = 0;
  }
  else if ( *(uchar *)(v3 + 840) )
  {
    Function_200b60c(*(uint *)(a1 + 10752), 0, v4, 3, 0, 1);
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}

//----- (02230AB0) --------------------------------------------------------
int __fastcall Function_2230ab0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v7;
  int v8;
  int v9;
  int v10;

  v2 = a1;
  v3 = a2;
  v7 = 42;
  v8 = 6;
  v4 = 1;
  if ( *(uchar *)(*(uint *)(v2 + 4 * *(uint *)(v2 + 11200) + 11188) + 840) )
  {
    v4 = 2;
    v9 = 43;
    v10 = 35849973;
  }
  *(&v7 + 2 * v4) = 44;
  *(&v7 + 2 * v4 + 1) = 35850025;
  *(&v7 + 2 * (v4 + 1)) = 45;
  *(&v7 + 2 * (v4 + 1) + 1) = 11;
  v5 = *(uint *)(a1 + 11164);
  Function_201acf4(a2);
  Function_201a8fc(v3);
  Function_201a7e8(
    *(uint **)(v2 + 10748),
    v3,
    2,
    *(uint *)(v5 + 4),
    *(uchar *)(v5 + 8) + 2 * (2 - v4),
    *(uint *)(v5 + 12),
    *(uchar *)(v5 + 16) - 2 * (2 - v4),
    15,
    *(uint *)(v2 + 11160));
  Function_2230530(v2, (int)&v7, v4 + 2, v3, 0);
  return 1;
}

//----- (02230B94) --------------------------------------------------------
int __fastcall Function_2230b94(int a1, int a2)
{
  Function_2230530(a1, (int)dword_223E610, 2, a2, 1);
  return 1;
}

//----- (02230BAC) --------------------------------------------------------
int __fastcall Function_2230bac(int a1, int a2)
{
  Function_2230530(a1, (int)dword_223E630, 2, a2, 0);
  return 1;
}

//----- (02230BC4) --------------------------------------------------------
int __fastcall Function_2230bc4(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_22305ec(a1 + 11216, 2u);
  Function_2230530(v2, (int)dword_223E620, 2, v3, 0);
  return 1;
}

//----- (02230BF0) --------------------------------------------------------
int __fastcall Function_2230bf0(int a1)
{
  Function_200b60c(*(uint *)(a1 + 10752), 0, 0, 1, 1, 1);
  return 1;
}

//----- (02230C10) --------------------------------------------------------
int __fastcall Function_2230c10(int a1, int a2, int a3, uint *a4)
{
  int v4;
  int v5;
  uint *v6;
  int result;

  v4 = a1;
  v5 = a3;
  v6 = a4;
  Function_200f174(0, a2, a2, 0, 6, 1, 87);
  if ( v6 )
    *v6 = 27;
  result = 11328;
  *(uint *)(v4 + 11328) = v5;
  return result;
}

//----- (02230C44) --------------------------------------------------------
int __fastcall Function_2230c44(uint *a1, int a2, int a3)
{
  uint *v3;
  int *v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint v11;
  ushort *v12;
  int v13;
  int v14;
  int v15;
  int result;
  int v17;
  uint v18;
  uint *v19;
  uint *v20;
  uint *v21;
  int v22;
  uint v23;

  v3 = a1;
  v17 = a3;
  v4 = &dword_223E680;
  a1[2689] = LoadFromMsgNARC(1, 26, 421, *a1);
  v3[2688] = (uint)Function_200b358(*v3);
  v3[2801] = v17;
  Function_2230f98(v3, v17);
  v23 = 0;
  v5 = &dword_223E680;
  v19 = v3;
  v6 = (int)(v3 + 2690);
  do
  {
    if ( v17 != *v5 && *v5 != 2 && v19[2690] )
    {
      Function_201acf4(v6);
      Function_201a8fc(v6);
    }
    v5 += 12;
    v19 += 4;
    v6 += 16;
    ++v23;
  }
  while ( v23 < 0x13 );
  v22 = 49;
  v18 = 0;
  v21 = v3;
  v20 = v3;
  v7 = (int)(v3 + 2690);
  do
  {
    if ( v17 == *v4 )
    {
      if ( !v21[2690] )
      {
        v20[2770] = v22;
        Function_201a7e8((uint *)v3[2687], v7, 0, v4[1], v4[2], v4[3], v4[4], 15, v22);
      }
      v8 = Function_2002df8_GetLineHeight(v4[5] & 0xFF, v4[7] & 0xFF);
      Function_201ada4_ClearTextBox(v7, v8);
      v9 = v4[6];
      if ( ((int (__cdecl *)())v4[9])() == 1 )
      {
        v11 = v4[8];
        if ( v11 )
        {
          v12 = Function_200b29c((uint *)v3[2688], (ushort **)v3[2689], v11, *v3);
          if ( v4[10] == -1 )
            Function_2002eec(v4[5], (int)v12, 0, 8 * v4[3]);
          v13 = v4[11];
          Function_201d78c(v7, v4[5]);
          Function_20237bc_FreeMsg((int)v12, v14);
        }
      }
      Function_201a954(v7, v10);
      v22 += v4[3] * v4[4];
    }
    v4 += 12;
    v21 += 4;
    v7 += 16;
    ++v20;
    ++v18;
  }
  while ( v18 < 0x13 );
  Function_200b190((ushort *)v3[2689]);
  Function_200b3f0((uint *)v3[2688], v15);
  result = v17;
  if ( !v17 )
    result = Function_22310fc(v3);
  return result;
}

//----- (02230E04) --------------------------------------------------------
int __fastcall Function_2230e04(int a1, uint *a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int *v7;
  uint v8;
  ushort *v9;
  int v10;
  int v11;
  int v12;

  v4 = a1;
  v5 = a4;
  v6 = (int)a2;
  v7 = &dword_223E680[12 * a3];
  if ( !*a2 )
    Function_201a7e8(*(uint **)(a1 + 10748), (int)a2, 2, v7[1], v7[2], v7[3], v7[4], 15, a4);
  Function_201ada4_ClearTextBox(v6, v7[7] & 0xFF);
  if ( v7[8] )
  {
    *(uint *)(v4 + 10756) = LoadFromMsgNARC(1, 26, 421, 0x57u);
    *(uint *)(v4 + 10752) = Function_200b358(0x57u);
  }
  *(uint *)(v4 + 11160) = v5;
  *(uint *)(v4 + 11164) = v7;
  ((void (__fastcall *)(int, int, int))v7[9])(v4, v6, 66048);
  v8 = v7[8];
  if ( v8 )
  {
    v9 = Function_200b29c(*(uint **)(v4 + 10752), *(ushort ***)(v4 + 10756), v8, 0x57u);
    v10 = v7[6];
    Function_201d78c(v6, v7[5]);
    Function_20237bc_FreeMsg((int)v9, v11);
    Function_200b190(*(ushort **)(v4 + 10756));
    Function_200b3f0(*(uint **)(v4 + 10752), v12);
  }
  if ( v6 == v4 + 11216 )
    Function_200e060(v6, 0, 19, 0xAu);
  else
    Function_200dc48(v6, 0, 10, 0xEu);
  return v5 + v7[4] * v7[3];
}

//----- (02230F20) --------------------------------------------------------
int __fastcall Function_2230f20(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = a2;
  do
  {
    v3 += v5;
    if ( v3 == 3 )
      v3 = 0;
    if ( v3 == -1 )
      v3 = 2;
  }
  while ( v6 != v3 && !Function_202dd5c(*(uint *)(v4 + 11168), v3) );
  return v3;
}

//----- (02230F58) --------------------------------------------------------
uint __fastcall Function_2230f58(int *a1, int a2, uchar a3, int a4)
{
  uchar v4;
  int *v5;
  int v6;
  uint *v7;
  int v9;
  int v10;

  v10 = a4;
  v4 = a3;
  v5 = a1;
  v6 = a4;
  v7 = Function_2006fe8_LoadFromNARC_UncompressLZ8(116, a2, 1, *a1, 1);
  Function_20a7248((int)v7, &v9);
  Function_2019574(v5[2687], v4, (int *)(v9 + 12), v6);
  return free((int)v7);
}

//----- (02230F98) --------------------------------------------------------
int __fastcall Function_2230f98(int *a1, int a2)
{
  int *v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Call_LoadFromNARC_RLCN(116, 3, 0, 0, 256, *a1);
  LoadFromNARC_RGCN(116, 6, (uint *)v2[2687], 1u, 0, 12288, 1, *v2);
  if ( v3 )
  {
    if ( v3 == 1 )
      LoadFromNARC_RCSN(116, 5, (uint *)v2[2687], 1u, 0, 1536, 1, *v2);
  }
  else
  {
    LoadFromNARC_RCSN(116, 4, (uint *)v2[2687], 1u, 0, 1536, 1, *v2);
  }
  Call_LoadFromNARC_RLCN(116, 0, 0, 352, 32, *v2);
  LoadFromNARC_RGCN(116, 1, (uint *)v2[2687], 3u, 0, 512, 1, *v2);
  Function_2230f58(v2, 2, 3u, 1536);
  Function_2019e2c(v2[2687], 3, 0, 0, 0x20u, 0x18u, 0xBu);
  return Function_2019448((uint *)v2[2687], 3u);
}

//----- (02231088) --------------------------------------------------------
int __fastcall Function_2231088(int a1, int *a2, int (__fastcall *a3)(int))
{
  int v3;
  int *v4;
  int (__fastcall *v5)(int);
  int v6;
  int (__fastcall *v7)(int);
  int result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = LoadOverlayData1c(a1);
  v7 = (int (__fastcall *)(int))Function_2001288(*(uint *)(v6 + 11208));
  if ( v7 == (int (__fastcall *)(int))-2 )
  {
    result = Function_2005748(0x5DCu);
    if ( v5 )
    {
      result = v5(v3);
      if ( result != -1 )
        *v4 = result;
    }
  }
  else
  {
    result = -1;
    if ( v7 != (int (__fastcall *)(int))-1 )
    {
      result = Function_2005748(0x5DCu);
      if ( v7 )
      {
        if ( (uint)v7 >= 0x1E )
        {
          dword_223F180[15] = (int)v7;
          result = v7(v3);
          if ( result != -1 )
            *v4 = result;
        }
        else
        {
          *v4 = (int)v7;
        }
      }
    }
  }
  return result;
}

//----- (022310FC) --------------------------------------------------------
int __fastcall Function_22310fc(int *a1)
{
  int *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  uint v9;
  int v10;
  int v11;
  int v12;
  char v13;
  int result;
  uint v15;
  int v16;
  int v17;
  int v18;

  v1 = a1;
  if ( !a1[2931] && !a1[2932] && !a1[2933] )
  {
    v2 = Function_2237a60();
    if ( v2 == 1 )
      v2 = Function_2230438(v1);
    v3 = Function_2237a20(v2);
    Function_2237a74(v3);
    Function_2237b0c(116, 26, 23, 25, 24, 0);
    v4 = Function_2079fd0();
    Call_LoadFromNARC_RLCN(19, v4, 1u, 96, 0, *v1);
  }
  v5 = 0;
  v17 = 178;
  v16 = 0;
  v6 = v1;
  v7 = 100;
  do
  {
    v8 = v1[v1[2800] + 2797] + v5;
    v15 = *(ushort *)(v8 + 842);
    if ( *(ushort *)(v8 + 842) )
    {
      v10 = v6[2931];
      v6[2931] = Function_2237d14(0);
      v11 = Function_2079d8c(v15, 0, 0);
      v12 = Function_2006f50(19, v11, 0, &v18, *v1);
      DC_FlushRange(*(uint *)(v18 + 20), 512);
      GX_LoadOBJ(*(int **)(v18 + 20), 32 * v7, 0x200u);
      v13 = Function_2079edc(v15, 0, 0);
      Function_2021e90(v6[2931], v13 + 3);
      free(v12);
    }
    else
    {
      v9 = v6[2931];
      if ( v9 )
        Function_2021cac(v9, 0);
    }
    v5 += 2;
    ++v16;
    ++v6;
    v17 += 25;
    result = v16;
    v7 += 16;
  }
  while ( v16 < 3 );
  return result;
}

//----- (02231224) --------------------------------------------------------
int __fastcall Function_2231224(int a1)
{
  int v1;
  int *v2;

  v1 = a1;
  Function_2017fc8(3, 87, 196608);
  v2 = (int *)MallocSomeDataAndStorePtrInOverlayData1c(v1, 15700, 0x57u);
  Call_FillMemWithValue(v2, 0, 0x3D54u);
  v2[2687] = Function_2018340(0x57u);
  *v2 = 87;
  SetBrightnessWithValue(0, 0);
  SetBrightnessWithValue(1, 0);
  v2[2800] = 2;
  v2[2831] = 1;
  Function_2237694(87);
  Function_2017fc8(0, 91, 768);
  return 1;
}

//----- (02231290) --------------------------------------------------------
uint __fastcall Function_2231290(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  Function_2013ba8();
  v3 = Function_2013b68(*(uint *)(v2 + 3072));
  return Function_2013bb8(v3, (int)&REG_BG0HOFS, 8u, 1);
}

//----- (022312B4) --------------------------------------------------------
int __fastcall Function_22312b4(int a1, int a2, int a3, int a4)
{
  uint *v4;
  int result;

  v4 = (uint *)(a1 + 12592);
  v4[773] = a2;
  v4[770] = a3;
  v4[771] = a4;
  if ( !*(uint *)(a1 + 15664) )
    *(uint *)(a1 + 15664) = Function_2013b10(0x57u, a1 + 12592, a1 + 14128);
  if ( !v4[769] )
    v4[769] = AddTaskToTaskList2((int)Function_2231290, (int)v4, 0x400u);
  result = 3088;
  v4[772] = 1;
  return result;
}

//----- (02231318) --------------------------------------------------------
uint __fastcall Function_2231318(int a1)
{
  int v1;
  int v2;
  int *v3;

  v1 = a1 + 12592;
  v2 = *(uint *)(a1 + 15664);
  if ( v2 )
    Function_2013b40(v2);
  v3 = *(int **)(v1 + 3076);
  if ( v3 )
    Call_RemoveTaskFromTaskList(v3);
  *(uint *)(v1 + 3072) = 0;
  *(uint *)(v1 + 3076) = 0;
  return Function_2013ba8();
}

//----- (02231354) --------------------------------------------------------
int __fastcall Function_2231354(int *a1)
{
  int v1;
  int v2;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v1 = (int)(a1 + 3148);
  v2 = 344064;
  if ( !a1[3920] )
    return 1;
  if ( a1[3921] == 1 )
  {
    a1[3918] += a1[3919];
    a1[3919] *= 2;
    if ( a1[3918] / 4096 > 1000 )
    {
      a1[3920] = 0;
      a1[3918] = 0;
      v2 = 168;
      a1[3919] = 0;
    }
  }
  else
  {
    a1[3918] -= a1[3919];
    a1[3919] /= 2;
    if ( a1[3919] < 1024 )
    {
      a1[3920] = 0;
      a1[3918] = 4096;
      a1[3919] = 0;
    }
  }
  v4 = Function_2013b54(a1[3916]);
  v5 = 84;
  v6 = 336;
  do
  {
    v7 = v2 / 4096;
    if ( v2 / 4096 < 0 )
      v7 = 0;
    if ( v7 > 168 )
      LOWORD(v7) = 168;
    v8 = v4 + 2 * v6;
    *(ushort *)(v8 + 6) = v7 - v5;
    v6 += 4;
    *(ushort *)(v8 + 2) = *(ushort *)(v8 + 6);
    v9 = v4 + 8 * (168 - v5);
    *(ushort *)(v9 + 6) = v5++ - v7;
    *(ushort *)(v9 + 2) = *(ushort *)(v9 + 6);
    v2 += *(uint *)(v1 + 3080);
  }
  while ( v5 < 168 );
  DC_FlushRange(v4, 1536);
  Function_2013b94(*(uint *)(v1 + 3072));
  return 0;
}

//----- (02231464) --------------------------------------------------------
uint __fastcall Function_2231464(int a1)
{
  int v1;
  uint result;

  v1 = a1;
  result = Function_223847c() - 2;
  if ( result <= 1 )
  {
    Function_2005748(0x61Bu);
    result = 15688;
    *(uint *)(v1 + 15688) = 0;
  }
  return result;
}

//----- (02231488) --------------------------------------------------------
int __fastcall Function_2231488(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int result;

  v1 = a1;
  if ( a1[2800] >= 3 )
    ErrorHandler();
  Function_2025c48(31);
  v2 = v1[v1[2800] + 2797];
  v3 = *(uchar *)(v2 + 848);
  if ( v3 != 255 )
    *(uchar *)(v2 + 848) = v3 + 1;
  v4 = v1[v1[2800] + 2797];
  v5 = *(uchar *)(v4 + 840);
  if ( v5 != 255 )
    *(uchar *)(v4 + 840) = v5 - 1;
  Function_2025c84(31);
  Function_223846c(v1[2793]);
  result = 15688;
  v1[3922] = Function_2231464;
  return result;
}

//----- (022314FC) --------------------------------------------------------
int __fastcall Function_22314fc(uint *a1, int a2, uint *a3)
{
  uint *v3;
  int v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  int result;

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = a1[3923];
  if ( dword_21BF6C4 & 0x10 && v6 != 1 )
    v5[3923] = 1;
  if ( dword_21BF6C4 & 0x20 && v5[3923] )
    v5[3923] = 0;
  v7 = v5[3923];
  if ( v6 != v7 )
  {
    Function_2021d6c(v5[2929], v7 == 0);
    Function_2021d6c(v5[2930], v5[3923] != 0);
  }
  v8 = 0;
  result = 2;
  if ( dword_21BF6C4 & 2 )
  {
    v8 = 2;
  }
  else
  {
    result = 1;
    if ( dword_21BF6C4 & 1 && v4 && !v5[3923] )
    {
      v8 = 1;
    }
    else if ( dword_21BF6C4 & 1 && (result = v5[3923], result == 1) )
    {
      v8 = 2;
    }
    else if ( dword_21BF6C4 & 1 && !v4 )
    {
      v8 = 3;
    }
  }
  if ( v8 == 1 )
  {
    Function_2005748(0x5DCu);
    Function_20364f0(171);
    v5[2829] = 1;
    *v3 = 21;
    Function_2230e04((int)v5, v5 + 2804, 17, 640);
    result = Function_200e7fc(v5 + 2804, 19);
    v5[3924] = result;
  }
  if ( v8 == 2 )
  {
    Function_2005748(0x5DCu);
    result = Function_2231f1c(v5, v3, 19);
  }
  if ( v8 == 3 )
    result = Function_2005748(0x5DCu);
  return result;
}

//----- (0223161C) --------------------------------------------------------
int __fastcall Function_223161c(int a1, int *a2)
{
  int *v2;
  int v3;
  int *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint v11;
  int v12;
  int result;
  int v14;
  void (__fastcall *v15)(int);

  v2 = a2;
  v3 = a1;
  v4 = (int *)LoadOverlayData1c(a1);
  v5 = *v2;
  v6 = (int)v4;
  if ( (uint)*v2 <= 0x1D )
    JUMPOUT(__CS__, *((short *)&off_223163E + v5) + 35853888);
  switch ( (uchar)v5 )
  {
    case 0:
      v4[2793] = *(uint *)(LoadPtrToOverWorldDataIn18(v3) + 8);
      *(uint *)(v6 + 11168) = Function_202442c(*(uint *)(v6 + 11172));
      *(uint *)(v6 + 11176) = LoadPlayerDataAdress(*(uint *)(v6 + 11172));
      *(uint *)(v6 + 11180) = Function_2027b50(*(ushort **)(v6 + 11176));
      *(uint *)(v6 + 11188) = Function_202db00(*(uint *)(v6 + 11168), 0);
      *(uint *)(v6 + 11192) = Function_202db00(*(uint *)(v6 + 11168), 1);
      *(uint *)(v6 + 11196) = Function_202db00(*(uint *)(v6 + 11168), 2);
      *(uint *)(v6 + 11200) = Function_2230f20(v6, *(uint *)(v6 + 11200), 1);
      *v2 = 1;
      goto LABEL_60;
    case 1:
      Function_2232054(v4);
      Function_2232074(*(uint *)(v6 + 10748));
      *v2 = 2;
      goto LABEL_60;
    case 2:
      Function_201d710();
      Function_2230f98((int *)v6, 0);
      LoadFromNARC_PlFont1(0, 480, 87);
      Function_200daa4(*(uint **)(v6 + 10748), 0, 1, 13, 0, 87);
      Function_200daa4(*(uint **)(v6 + 10748), 0, 10, 14, 1, 87);
      Function_200dd0c(*(uint **)(v6 + 10748), 0, 19, 10, *(uint *)(v6 + 11180), 87);
      Function_2230c44((uint *)v6, 1, 0);
      Function_2230c10(v6, 1, 3, v2);
      goto LABEL_60;
    case 3:
      v7 = v4[2800];
      if ( dword_21BF6C4 & 0x40 )
      {
        v7 = Function_2230f20((int)v4, v4[2800], -1);
      }
      else if ( dword_21BF6C4 & 0x80 )
      {
        v7 = Function_2230f20((int)v4, v4[2800], 1);
      }
      else if ( dword_21BF6C4 & 2 )
      {
        Function_2005748(0x5DCu);
        Function_2230c10(v6, 0, 28, v2);
      }
      else if ( dword_21BF6C4 & 1 )
      {
        Function_2005748(0x5DCu);
        *v2 = 4;
      }
      if ( *(uint *)(v6 + 11200) != v7 )
      {
        Function_2005748(0x600u);
        *(uint *)(v6 + 11200) = v7;
        Function_2230c44((uint *)v6, 1, 0);
      }
      goto LABEL_60;
    case 4:
      v4[2812] = Function_2230e04((int)v4, v4 + 2804, 7, 640);
      Function_2230e04(v6, (uint *)(v6 + 11232), 8, *(uint *)(v6 + 11248));
      *v2 = 5;
      goto LABEL_60;
    case 5:
      Function_2231088(v3, v2, 0);
      if ( dword_21BF6C4 & 2 )
      {
        Function_2005748(0x5DCu);
        *v2 = 11;
      }
      goto LABEL_60;
    case 6:
      Function_2005748(0x600u);
      Function_201ff0c(0x10u, 0);
      Function_2230518(v6 + 11216, 0);
      Function_2230500(v6 + 11232, 0);
      Function_22312b4(v6, 1, 4096, 102);
      *v2 = 7;
      goto LABEL_60;
    case 7:
      if ( Function_2231354(v4) )
      {
        Function_2230c44((uint *)v6, 1, 1);
        Function_22312b4(v6, 0, 7372800, 3686400);
        *v2 = 8;
      }
      goto LABEL_60;
    case 8:
      Function_2231354(v4);
      if ( dword_21BF6C4 & 3 )
      {
        Function_2005748(0x600u);
        Function_22312b4(v6, 1, 4096, 102);
        *v2 = 9;
      }
      goto LABEL_60;
    case 9:
      if ( Function_2231354(v4) )
      {
        Function_2230c44((uint *)v6, 1, 0);
        Function_22312b4(v6, 0, 7372800, 3686400);
        Function_201ff0c(0x10u, 0);
        *v2 = 10;
      }
      goto LABEL_60;
    case 0xA:
      if ( Function_2231354(v4) )
      {
        Function_200e060(v6 + 11216, 0, 19, 0xAu);
        Function_200dc48(v6 + 11232, 0, 10, 0xEu);
        Function_201ff0c(0x10u, 1);
        Function_2231318(v6);
        *v2 = 5;
      }
      goto LABEL_60;
    case 0xB:
      Function_2230868((int)v4);
      Function_2230518(v6 + 11216, 0);
      Function_201acf4(v6 + 11216);
      Function_201a8fc(v6 + 11216);
      *v2 = 3;
      goto LABEL_60;
    case 0xC:
      Function_2231088(v3, v2, Function_2230834);
      goto LABEL_60;
    case 0xD:
      Function_2231088(v3, v2, Function_2230834);
      goto LABEL_60;
    case 0xE:
      Function_2230bc4((int)v4, (int)(v4 + 2808));
      *v2 = 13;
      goto LABEL_60;
    case 0xF:
      Function_2230c10((int)v4, 0, 16, v2);
      goto LABEL_60;
    case 0x10:
      Function_2230868((int)v4);
      Function_2230518(v6 + 11216, 0);
      Function_201acf4(v6 + 11216);
      Function_201a8fc(v6 + 11216);
      Function_2230c44((uint *)v6, 0, 3);
      Function_2230664(*(uint **)(v6 + 10748));
      Function_2230410();
      Function_22304ac(v6);
      *v2 = 17;
      goto LABEL_60;
    case 0x11:
      Function_2231bd8();
      Function_2039734();
      Function_2230c10(v6, 1, 18, v2);
      goto LABEL_60;
    case 0x12:
      v8 = 0;
      if ( Function_2035d78(0) )
      {
        Function_2034150(v6 + 144, v9, v10, v11);
        v8 = Function_2231ca0(v6, v6 + 11016);
        if ( !v8 && *(uint *)(v6 + 11312) )
        {
          Function_201ada4_ClearTextBox(v6 + 11016, 0);
          Function_201a954(v6 + 11016, v12);
          *(uint *)(v6 + 11312) = 0;
        }
        Function_2231e78(v6, v6 + 11000, v8);
        *(uint *)(v6 + 11312) = v8;
      }
      Function_22314fc((uint *)v6, v8, v2);
      goto LABEL_60;
    case 0x13:
      Function_2230c10((int)v4, 0, 20, v2);
      goto LABEL_60;
    case 0x14:
      Function_2230438(v4);
      Function_2230518(v6 + 11216, 0);
      Function_2230500(v6 + 11232, 0);
      Function_2230c44((uint *)v6, 1, 0);
      LoadFromNARC_PlFont1(0, 480, 87);
      Function_2230c10(v6, 1, 4, v2);
      goto LABEL_60;
    case 0x15:
      if ( !--v4[2829] )
      {
        Function_223829c(v4 + 36, v4 + 2934, *v4);
        Function_222d1f0(v6 + 11736, 856);
        Function_2231488((uint *)v6);
        *v2 = 23;
      }
      goto LABEL_60;
    case 0x16:
      if ( !Function_2036780() )
        *v2 = *(uint *)(v6 + 11328);
      goto LABEL_60;
    case 0x17:
      if ( Function_2238528(v4) == 4 )
      {
        Function_20364f0(147);
        *v2 = 24;
      }
      goto LABEL_60;
    case 0x18:
      if ( !Function_2231c84() || Function_2036540(147) == 1 )
      {
        Function_22384f4();
        Function_2230e04(v6, (uint *)(v6 + 11216), 18, 640);
        Function_200eba0(*(uint *)(v6 + 15696));
        Function_2231f1c(v6, v2, 25);
      }
      goto LABEL_60;
    case 0x19:
      if ( dword_21BF6C4 & 3 )
        *v2 = 19;
      goto LABEL_60;
    case 0x1A:
      Function_2230c10((int)v4, 0, 28, v2);
      goto LABEL_60;
    case 0x1B:
      if ( Function_200f2ac() )
        *v2 = *(uint *)(v6 + 11328);
      goto LABEL_60;
    case 0x1C:
      Function_2230438(v4);
      Function_2231318(v6);
      result = 1;
      break;
    default:
LABEL_60:
      v14 = *(uint *)(v6 + 11332);
      if ( v14 )
        v14 = Function_20219f8(v14);
      Function_2237ca0(v14);
      v15 = *(void (__fastcall **)(int))(v6 + 15688);
      if ( v15 )
        v15(v6);
      result = 0;
      break;
  }
  return result;
}

//----- (02231BD8) --------------------------------------------------------
int __fastcall Function_2231bd8(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(v1 + 4 * *(uint *)(v1 + 11200) + 11188);
  memcpy((uchar *)(a1 + 224), *(char **)(v1 + 4 * *(uint *)(v1 + 11200) + 11188), 856);
  memcpy((uchar *)(v1 + 144), (char *)(v2 + 260), 80);
  *(uchar *)(v1 + 1064) = 0;
  *(uchar *)(v1 + 222) &= 0xEFu;
  *(uchar *)(v1 + 222) |= 0x20u;
  Function_222d1c4(v1 + 4, *(uint *)(v1 + 11172), 15);
  return 0;
}

//----- (02231C48) --------------------------------------------------------
int __fastcall Function_2231c48(uint *a1)
{
  int v1;
  uint *v2;
  int v3;

  v1 = *a1;
  v2 = a1;
  v3 = 0;
  if ( a1[1] < *a1 )
  {
    v1 = a1[1];
    v3 = 1;
    v2 = a1 + 1;
  }
  if ( a1[2] < v1 )
  {
    v1 = a1[2];
    v3 = 2;
    v2 = a1 + 2;
  }
  if ( a1[3] < v1 )
  {
    v3 = 3;
    v2 = a1 + 3;
  }
  *v2 = 1073676289;
  return v3 + 1;
}

//----- (02231C84) --------------------------------------------------------
int Function_2231c84()
{
  int v0;
  int v1;

  v0 = 0;
  v1 = 1;
  do
  {
    if ( Function_2032ee8(v1) )
      ++v0;
    ++v1;
  }
  while ( v1 < 5 );
  return v0;
}

//----- (02231CA0) --------------------------------------------------------
int __fastcall Function_2231ca0(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint *v11;
  int v12;
  int v13;
  int v14;
  ushort *v15;
  int v16;
  ushort v17;
  ushort *v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int *v23;
  ushort **v24;
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

  v34 = a4;
  v4 = a1;
  v5 = 0;
  v21 = a2;
  v6 = 0;
  v25 = 1;
  v7 = (int)(a1 + 1);
  do
  {
    v8 = Function_2032ee8(v25);
    if ( v8 )
    {
      if ( *(uint *)(v7 + 11272) == v8 )
      {
        ++v5;
      }
      else
      {
        ++v6;
        *(uint *)(v7 + 11272) = v8;
        v9 = v4[2831];
        ++v5;
        ++v4[2831];
        *(uint *)(v7 + 11292) = v9;
      }
    }
    else
    {
      if ( *(uint *)(v7 + 11272) )
        ++v6;
      *(uint *)(v7 + 11272) = 0;
      *(uint *)(v7 + 11292) = 1073676289;
    }
    v7 += 4;
    ++v25;
  }
  while ( v25 < 5 );
  if ( !v6 )
    return v5;
  v30 = v4[2824];
  v31 = v4[2825];
  v32 = v4[2826];
  v33 = v4[2827];
  v26 = Function_2231c48(&v30);
  v27 = Function_2231c48(&v30);
  v28 = Function_2231c48(&v30);
  v29 = Function_2231c48(&v30);
  v11 = Function_200b358(0x57u);
  v24 = (ushort **)LoadFromMsgNARC(1, 26, 421, 0x57u);
  v12 = 0;
  Function_201ada4_ClearTextBox(v21, 0);
  v22 = 0;
  if ( v5 > 0 )
  {
    v23 = &v26;
    do
    {
      v14 = Function_2032ee8(*v23);
      if ( v14 )
      {
        Function_200b498((int)v11, 0);
        v15 = Function_200b29c(v11, v24, 0x35u, 0x57u);
        GetGender(v14);
        Function_201d78c(v21, 0);
        Function_20237bc_FreeMsg((int)v15, v16);
        v17 = GetTrainerID(v14);
        Function_200b60c((int)v11, 0, v17, 5, 2, 1);
        v18 = Function_200b29c(v11, v24, 0x36u, 0x57u);
        Function_201d78c(v21, 0);
        Function_20237bc_FreeMsg((int)v18, v19);
        v12 += 24;
      }
      ++v23;
      ++v22;
    }
    while ( v22 < v5 );
  }
  if ( v5 )
    Function_201a954(v21, v13);
  Function_200b190((ushort *)v24);
  Function_200b3f0(v11, v20);
  return v5;
}

//----- (02231E78) --------------------------------------------------------
uint __fastcall Function_2231e78(int a1, int a2, int a3)
{
  int v3;
  int v4;
  ushort *v5;
  int v6;
  int v7;
  int v8;

  v3 = a1;
  v4 = a2;
  *(uint *)(a1 + 11252) = a3;
  *(uint *)(a1 + 10756) = LoadFromMsgNARC(1, 26, 421, 0x57u);
  *(uint *)(v3 + 10752) = Function_200b358(0x57u);
  Function_201ada4_ClearTextBox(v4, 0);
  Function_200b60c(*(uint *)(v3 + 10752), 0, *(uint *)(v3 + 11252), 1, 1, 1);
  v5 = Function_200b29c(*(uint **)(v3 + 10752), *(ushort ***)(v3 + 10756), 0x38u, 0x57u);
  Function_201d78c(v4, 1);
  Function_201a954(v4, v6);
  Function_20237bc_FreeMsg((int)v5, v7);
  Function_200b190(*(ushort **)(v3 + 10756));
  return Function_200b3f0(*(uint **)(v3 + 10752), v8);
}

//----- (02231F1C) --------------------------------------------------------
int __fastcall Function_2231f1c(int a1, uint *a2, int a3)
{
  int v3;
  uint *v4;
  int v5;
  int result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_222d2dc();
  Function_2039794();
  *(uint *)(v3 + 11328) = v5;
  result = 22;
  *v4 = 22;
  return result;
}

//----- (02231F38) --------------------------------------------------------
int __fastcall Function_2231f38(int a1)
{
  int *v1;
  uint v2;
  int *v3;
  int v4;
  int v6;

  v6 = a1;
  v1 = (int *)LoadOverlayData1c(a1);
  v2 = 0;
  v3 = v1;
  v4 = (int)(v1 + 2690);
  do
  {
    if ( v3[2690] )
    {
      Function_201acf4(v4);
      Function_201a8fc(v4);
    }
    ++v2;
    v3 += 4;
    v4 += 16;
  }
  while ( v2 < 0x13 );
  if ( v1[2804] )
  {
    Function_201acf4((int)(v1 + 2804));
    Function_201a8fc((int)(v1 + 2804));
  }
  if ( v1[2808] )
  {
    Function_201acf4((int)(v1 + 2808));
    Function_201a8fc((int)(v1 + 2808));
  }
  Function_2019044(v1[2687], 0);
  Function_2019044(v1[2687], 1);
  Function_2019044(v1[2687], 2);
  Function_2019044(v1[2687], 3);
  free(v1[2687]);
  SetOverlayJumpTableDataToLoad(97, (int)&off_223D71C);
  Function_201807c(91);
  FreeSomeDataAndStore0InOverlayData1c(v6);
  Function_201807c(87);
  return 1;
}

//----- (02231FFC) --------------------------------------------------------
uint __fastcall Function_2231ffc(int a1, int a2, uint a3)
{
  int v3;
  int v4;
  uint v5;
  int *v6;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_2232074(a1);
  v6 = (int *)malloc2(v5, 15700);
  Call_FillMemWithValue(v6, 0, 0x3D54u);
  v6[2687] = v3;
  *v6 = v5;
  LoadFromNARC_PlFont1(0, 480, v5);
  v6[2797] = v4;
  v6[2800] = 0;
  Function_2230c44((uint *)v6, 1, 0);
  return free((int)v6);
}

//----- (02232054) --------------------------------------------------------
char *Function_2232054()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_223D83C;
  v1 = &v6;
  v2 = 5;
  do
  {
    v3 = *v0;
    v4 = v0[1];
    v0 += 2;
    *(uint *)v1 = v3;
    *((uint *)v1 + 1) = v4;
    v1 += 8;
    --v2;
  }
  while ( v2 );
  return GX_SetBanks((int *)&v6);
}

//----- (02232074) --------------------------------------------------------
int __fastcall Function_2232074(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
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
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;

  v38 = a4;
  v4 = a1;
  v34 = 1;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  SetGraphicsModes(&v34);
  v27 = 0;
  v28 = 0;
  v29 = 2048;
  v30 = 0;
  v31 = 1835009;
  v32 = 256;
  v33 = 0;
  Function_20183c4(v4, 0, &v27, 0);
  Function_2019ebc(v4, 0);
  v20 = 0;
  v21 = 0;
  v22 = 2048;
  v23 = 0;
  v24 = 35454977;
  v25 = 512;
  v26 = 0;
  Function_20183c4(v4, 1u, &v20, 0);
  Function_2019ebc(v4, 1u);
  v13 = 0;
  v14 = 0;
  v15 = 2048;
  v16 = 0;
  v17 = 1966081;
  v18 = 1;
  v19 = 0;
  Function_20183c4(v4, 2u, &v13, 0);
  Function_2019ebc(v4, 2u);
  v6 = 0;
  v7 = 0;
  v8 = 2048;
  v9 = 0;
  v10 = 52363265;
  v11 = 769;
  v12 = 0;
  Function_20183c4(v4, 3u, &v6, 0);
  return Function_2019ebc(v4, 3u);
}

//----- (02232148) --------------------------------------------------------
int __fastcall Function_2232148(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint v7;

  v2 = a2;
  v3 = a1;
  v4 = Function_202442c(a1);
  v5 = *(uint *)(v2 + 72);
  v6 = v4;
  if ( v5 == -1 && *(ushort *)(v2 + 76) == 0xFFFF )
  {
    Function_202dabc();
    Function_2024760(v3, 0);
    OS_ResetSystem(0);
  }
  v7 = *(ushort *)(v2 + 76);
  if ( v7 >= 0x64 && v7 <= 0x98 )
    v5 |= 0x1180u;
  if ( !v5 )
    LOWORD(v5) = -1;
  if ( !(v5 & 0x1000) )
    return 1;
  if ( (*(uchar *)(v2 + 78) & 1) == 1 && Function_202de2c(v6, v7) == 1 )
    return 2;
  if ( (uint)*(uchar *)(v2 + 78) << 29 >> 31 == 1 && !Function_202dd08(v6) )
    return 4;
  if ( !Function_202dce0(v6) )
    return 3;
  if ( (uint)*(uchar *)(v2 + 78) << 26 >> 31 == 1 )
    return 5;
  return 0;
}

//----- (02232200) --------------------------------------------------------
int Function_2232200()
{
  int v0;

  v0 = Function_2233424(4);
  return Function_2233ad8(v0);
}

//----- (02232210) --------------------------------------------------------
int __fastcall Function_2232210(int a1)
{
  return Function_22335a8(a1);
}

//----- (0223221C) --------------------------------------------------------
int __fastcall Function_223221c(int a1)
{
  return (short)Function_22335c8(a1);
}

//----- (0223222C) --------------------------------------------------------
int Function_223222c()
{
  int v0;

  if ( Function_2233430() != 12 )
    return 0;
  v0 = Function_2233410();
  if ( !*(uint *)(v0 + 28) )
  {
    Function_2233ad8(0);
    *(uint *)(v0 + 28) = 1;
  }
  return 1;
}

//----- (02232254) --------------------------------------------------------
int __fastcall Function_2232254(int a1)
{
  int v1;
  int result;
  int v3;

  v1 = a1;
  result = Function_2233510();
  v3 = 0;
  do
  {
    if ( *(uint *)result )
    {
      if ( v1 == *(ushort *)(result + 6) )
      {
        *(uchar *)(result + 8) = 0;
        *(uchar *)(result + 10) = 0;
      }
    }
    ++v3;
    result += 12;
  }
  while ( v3 < 8 );
  return result;
}

//----- (0223227C) --------------------------------------------------------
int Function_223227c()
{
  int v0;
  int result;

  v0 = Function_2233510();
  if ( *(ushort *)(v0 + 98) & 1 )
  {
    *(ushort *)(v0 + 98) &= 0xFFFEu;
    result = 1;
  }
  else if ( *(ushort *)(v0 + 98) & 0x40 )
  {
    *(ushort *)(v0 + 98) &= 0xFFBFu;
    result = 7;
  }
  else if ( *(ushort *)(v0 + 98) & 0x1000 )
  {
    *(ushort *)(v0 + 98) &= 0xEFFFu;
    result = 13;
  }
  else
  {
    result = 0;
  }
  return result;
}

//----- (022322DC) --------------------------------------------------------
int Function_22322dc()
{
  int v0;

  v0 = Function_2233510();
  *(uchar *)(v0 + 96) = 1;
  *(ushort *)(v0 + 98) = WM_GetAllowedChannel();
  if ( !*(ushort *)(v0 + 98) || *(ushort *)(v0 + 98) == 0x8000 )
    return 0;
  *(uchar *)(v0 + 97) = 102;
  *(uchar *)(v0 + 100) = 0;
  return 1;
}

//----- (0223231C) --------------------------------------------------------
int Function_223231c()
{
  int v0;
  int v1;
  int v2;
  uint v3;
  int result;

  v0 = Function_2233408();
  *(ushort *)(v0 + 24) = WM_GetDispersionBeaconPeriod(v0, v1, v2, v3);
  result = WM_GetNextTgid();
  *(ushort *)(v0 + 12) = result;
  return result;
}

//----- (02232334) --------------------------------------------------------
int Function_2232334()
{
  int v0;
  int v1;
  int v2;
  int v3;
  uint v4;
  int result;

  v0 = Function_2233478();
  *(uint *)v0 = Function_22334b4();
  v1 = *(ushort *)(Function_2233408() + 50);
  *(ushort *)(v0 + 4) = v1;
  *(ushort *)(v0 + 6) = WM_GetDispersionScanPeriod(v1, v2, v3, v4);
  result = 255;
  *(uchar *)(v0 + 8) = -1;
  *(uchar *)(v0 + 9) = -1;
  *(uchar *)(v0 + 10) = -1;
  *(uchar *)(v0 + 11) = -1;
  *(uchar *)(v0 + 12) = -1;
  *(uchar *)(v0 + 13) = -1;
  return result;
}

//----- (02232360) --------------------------------------------------------
int Function_2232360()
{
  int v0;
  int result;
  int v2;
  uint v3;
  int v4;

  v0 = Function_2233478();
  result = WM_GetAllowedChannel();
  v2 = result;
  if ( result )
  {
    v3 = *(ushort *)(v0 + 4);
    v4 = 0;
    result = 1;
    while ( !(v2 & (1 << (((v3 & 0x80000000) != 0) + __ROR4__((v3 << 28) - (v3 >> 31), 28)))) )
    {
      ++v4;
      ++v3;
      if ( v4 >= 16 )
        return result;
    }
    result = (((uint)*(ushort *)(v0 + 4) + v4) >> 31)
           + __ROR4__(
               ((*(ushort *)(v0 + 4) + v4) << 28) - (((uint)*(ushort *)(v0 + 4) + v4) >> 31),
               28)
           + 1;
    *(ushort *)(v0 + 4) = result;
  }
  return result;
}

//----- (022323B0) --------------------------------------------------------
int __fastcall Function_22323b0(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_2233800(*(ushort *)(a1 + 4));
  result = *(ushort *)(v1 + 2);
  if ( result == 8 )
  {
    Function_22337fc();
    result = Function_2232200();
  }
  return result;
}

//----- (022323CC) --------------------------------------------------------
int __fastcall Function_22323cc(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_2233800(*(ushort *)(a1 + 8));
  result = *(ushort *)(v1 + 2);
  if ( *(ushort *)(v1 + 2) )
    result = Function_22337fc();
  return result;
}

//----- (022323E4) --------------------------------------------------------
int __fastcall Function_22323e4(int a1)
{
  int v1;
  int result;
  int v3;

  if ( *(ushort *)(a1 + 2) )
  {
    v3 = Function_22337fc();
    result = Function_2233870(v3);
  }
  else
  {
    v1 = Function_2233424(2);
    if ( Function_2233430(v1) == 12 )
    {
      Function_2233870(12);
      result = Function_2233424(2);
    }
    else
    {
      result = Function_2233a9c();
      if ( !result )
      {
        Function_2233870(0);
        result = Function_2233424(2);
      }
    }
  }
  return result;
}

//----- (02232424) --------------------------------------------------------
int __fastcall Function_2232424(int a1)
{
  int result;

  if ( *(ushort *)(a1 + 2) )
  {
    Function_22337fc();
    result = Function_2233424(4);
  }
  else if ( Function_2233430(0) == 12 )
  {
    WM_Finish();
    Function_2233424(12);
    result = Function_22334f0(1);
  }
  else
  {
    result = Function_2233424(1);
  }
  return result;
}

//----- (0223245C) --------------------------------------------------------
int __fastcall Function_223245c(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;
  int v5;

  v1 = a1;
  if ( *(ushort *)(a1 + 2) )
  {
    Function_22337fc();
    result = Function_2232200();
  }
  else
  {
    v2 = Function_2233510();
    v3 = *(ushort *)(v1 + 10);
    if ( *(uchar *)(v2 + 97) > v3 )
    {
      *(uchar *)(v2 + 97) = v3;
      *(uchar *)(v2 + 100) = *(ushort *)(v1 + 8);
    }
    if ( Function_223227c() )
    {
      result = Function_2233890();
      if ( !result )
        result = Function_2232200();
    }
    else if ( *(uchar *)(v2 + 97) >= 0x66u )
    {
      result = Function_2232200();
    }
    else
    {
      v5 = Function_223231c();
      result = Function_22338bc(v5);
      if ( !result )
        result = Function_2232200();
    }
  }
  return result;
}

//----- (022324C4) --------------------------------------------------------
int __fastcall Function_22324c4(int a1)
{
  int result;

  if ( *(ushort *)(a1 + 2) )
  {
    Function_22337fc();
    result = Function_2232200();
  }
  else
  {
    result = Function_223222c();
    if ( !result )
    {
      result = Function_22338f8();
      if ( !result )
        result = Function_2232200();
    }
  }
  return result;
}

//----- (022324EC) --------------------------------------------------------
int __fastcall Function_22324ec(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  short v5;
  uint *v6;
  int v7;
  int v8;
  int result;
  short v10;
  int v11;

  v1 = a1;
  Function_2233800(*(ushort *)(a1 + 8));
  if ( *(ushort *)(v1 + 2) )
  {
    Function_22337fc();
    result = Function_2232200();
  }
  else
  {
    v2 = Function_2233510();
    Function_2233424(8);
    result = Function_223222c();
    if ( !result )
    {
      if ( *(uchar *)(v2 + 96) == 1 )
        *(uchar *)(v2 + 96) = 2;
      result = *(ushort *)(v1 + 8);
      if ( result > 7 )
      {
        if ( result == 9 )
          result = Function_2232254(*(ushort *)(v1 + 16));
      }
      else if ( result < 7 )
      {
        if ( result <= 2 && !*(ushort *)(v1 + 8) )
        {
          if ( Function_2233a24() )
            result = Function_22334c0(0);
          else
            result = Function_2232200();
        }
      }
      else
      {
        v3 = Function_2233510();
        Function_223380c(v3);
        result = *(uchar *)(v2 + 96);
        if ( result == 2 )
        {
          result = Function_2233560();
          if ( (*(uint *)(v1 + 20) & 0xFF) == result )
          {
            result = Function_2233570();
            if ( *(uint *)(v1 + 20) << 20 >> 28 <= (uint)result )
            {
              result = Function_2233580();
              if ( *(uint *)(v1 + 24) >> 16 == result )
              {
                v4 = Function_2233510();
                v11 = Function_2232210(v1 + 10);
                v5 = Function_223221c(v1 + 10);
                v6 = (uint *)v4;
                v10 = v5;
                result = 0;
                while ( 1 )
                {
                  if ( *v6 == v11 )
                  {
                    v7 = v4 + 12 * result;
                    *(ushort *)(v7 + 6) = *(ushort *)(v1 + 16);
                    result = 1;
                    *(uchar *)(v7 + 10) = 1;
                    return result;
                  }
                  if ( !*v6 )
                    break;
                  ++result;
                  v6 += 3;
                  if ( result >= 8 )
                    return result;
                }
                *(uint *)(v4 + 12 * result) = v11;
                v8 = v4 + 12 * result;
                *(ushort *)(v8 + 4) = v10;
                *(ushort *)(v8 + 6) = *(ushort *)(v1 + 16);
                result = 1;
                *(uchar *)(v8 + 10) = 1;
              }
            }
          }
        }
      }
    }
  }
  return result;
}

//----- (02232620) --------------------------------------------------------
int __fastcall Function_2232620(int a1, int a2)
{
  int v2;
  int v3;
  ushort v4;
  int v5;
  int v6;
  int v7;
  int v9;
  short *v10;
  ushort *v11;
  int v12;
  short v13;
  short *v14;
  ushort *v15;
  int v16;
  short v17;
  int v18;
  int v19;
  ushort v20;
  int v21;

  v2 = a2;
  v19 = a1;
  v3 = Function_2233508();
  v21 = Function_2232210(v2 + 4);
  v4 = Function_223221c(v2 + 4);
  v5 = v3;
  v20 = v4;
  v6 = v4;
  v7 = 0;
  while ( 1 )
  {
    if ( *(uint *)v5 == v21 && *(ushort *)(v5 + 52) == v6 )
      return 1;
    if ( !*(uint *)v5 )
      break;
    ++v7;
    v5 += 56;
    if ( v7 >= 8 )
      return 0;
  }
  v9 = 56 * v7;
  *(uint *)(v3 + 56 * v7) = v21;
  v10 = (short *)(v2 + 88);
  v11 = (ushort *)(v3 + 56 * v7 + 4);
  v12 = 12;
  do
  {
    v13 = *v10;
    ++v10;
    *v11 = v13;
    ++v11;
    --v12;
  }
  while ( v12 );
  v14 = (short *)(v2 + 112);
  v15 = (ushort *)(v3 + v9 + 28);
  v16 = 12;
  do
  {
    v17 = *v14;
    ++v14;
    *v15 = v17;
    ++v15;
    --v16;
  }
  while ( v16 );
  v18 = v3 + v9;
  *(ushort *)(v18 + 52) = v20;
  *(uchar *)(v18 + 54) = *(ushort *)(v19 + 18);
  return 1;
}

//----- (022326C0) --------------------------------------------------------
int Function_22326c0()
{
  int v0;
  int result;

  v0 = Function_2232360();
  result = Function_2233914(v0);
  if ( !result )
    result = Function_2232200();
  return result;
}

//----- (022327B8) --------------------------------------------------------
int __fastcall Function_22327b8(int a1)
{
  int v1;
  int v2;
  int result;
  int v4;
  int v5;

  v1 = a1;
  Function_2233800(*(ushort *)(a1 + 8));
  if ( *(ushort *)(v1 + 2) )
  {
    ((void (*)(void))Function_22337fc)();
    result = Function_2232200();
  }
  else
  {
    v2 = Function_22334b4();
    Function_2233804(v2);
    Function_2233424(6);
    result = Function_223222c();
    if ( result )
      return result;
    if ( Function_2233448() == 1 )
    {
      v4 = Function_2233508();
      *(uchar *)(v4 + 451) = *(uchar *)(v4 + 451) & 0xF | 0x10;
    }
    v5 = *(ushort *)(v1 + 8);
    if ( v5 == 4 )
      return Function_22326c0();
    if ( v5 == 5 )
    {
      result = ((int (__fastcall *)(int))loc_22326D4)(v1);
      if ( result )
        return result;
      return Function_22326c0();
    }
    Function_22337fc(*(ushort *)(v1 + 2));
    result = Function_2232200();
  }
  return result;
}

//----- (0223282C) --------------------------------------------------------
int Function_223282c()
{
  int v0;
  int v1;
  int v3;
  int v4;
  int v5;
  int v6;

  v0 = Function_22334b4();
  v1 = ((int (*)(void))Function_2233508)();
  Function_2233408();
  if ( Function_223222c() )
    return 1;
  v3 = DC_InvalidateRange(v0, 192);
  v4 = Function_2233508(v3);
  Function_2233808(v4);
  if ( *(ushort *)(v0 + 60) < 8u )
    return 0;
  if ( *(uint *)(v0 + 68) != Function_2233554() )
    return 0;
  if ( (*(uint *)(v0 + 80) & 0xFF) != Function_2233560() )
    return 0;
  if ( *(uint *)(v0 + 80) << 20 >> 28 > (uint)Function_2233570() )
    return 0;
  if ( *(uint *)(v0 + 84) >> 16 != Function_2233580() )
    return 0;
  v5 = Function_2232210(v0 + 4);
  v6 = *(uint *)(v1 + 56 * (*(uchar *)(v1 + 451) & 0xF));
  if ( v6 != v5 )
    return 0;
  if ( !Function_22339d0(v5, v6) )
    Function_2232200();
  return 1;
}

//----- (022328D4) --------------------------------------------------------
int __fastcall Function_22328d4(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;
  int v5;
  int v6;

  v1 = a1;
  Function_2233800(*(ushort *)(a1 + 8));
  v2 = *(ushort *)(v1 + 2);
  if ( *(ushort *)(v1 + 2) )
  {
    Function_22337fc(v2);
    result = Function_2232200();
  }
  else
  {
    v3 = Function_2233508(v2);
    *(uchar *)(v3 + 451) = *(uchar *)(v3 + 451) & 0xF | 0x20;
    Function_2233424(6);
    result = Function_223222c();
    if ( result )
      return result;
    v5 = *(ushort *)(v1 + 8);
    if ( v5 != 4 )
    {
      if ( v5 != 5 )
      {
        Function_22337fc(*(ushort *)(v1 + 2));
        return Function_2232200();
      }
      result = Function_223282c();
      if ( result )
        return result;
    }
    v6 = Function_2232360();
    result = Function_2233938(v6);
    if ( !result )
      result = Function_2232200();
  }
  return result;
}

//----- (02232944) --------------------------------------------------------
int __fastcall Function_2232944(int a1)
{
  int v1;
  int result;

  v1 = *(ushort *)(a1 + 2);
  if ( v1 )
  {
    Function_22337fc(v1);
    result = Function_2232200();
  }
  else
  {
    Function_2233424(7);
    result = Function_223222c();
    if ( !result )
    {
      result = Function_2233448();
      if ( result == 1 )
      {
        result = (uint)*(uchar *)(Function_2233508(1) + 451) << 24 >> 28;
        if ( result == 2 )
        {
          if ( Function_22339ec() )
            result = Function_2233424(3);
          else
            result = Function_2232200();
        }
      }
    }
  }
  return result;
}

//----- (02232998) --------------------------------------------------------
int __fastcall Function_2232998(ushort *a1)
{
  ushort *v1;
  int result;
  int v3;
  int v4;

  v1 = a1;
  Function_2233800(a1[4]);
  if ( v1[1] )
  {
    Function_22337fc(v1[1]);
    result = Function_2232200();
  }
  else
  {
    Function_2233424(9);
    result = Function_223222c();
    if ( !result )
    {
      result = v1[4];
      switch ( (uchar)result )
      {
        case 6:
        case 8:
          return result;
        case 7:
          Function_22334c0(v1[5]);
          Function_22334d8(1);
          v4 = Function_22334e4(0);
          result = Function_2233a24(v4);
          if ( !result )
            result = Function_2232200();
          break;
        case 9:
          if ( Function_22334cc(result, v3) )
            Function_22334e4(1);
          result = Function_22334d8(0);
          break;
        default:
          Function_22337fc(v1[1]);
          result = Function_2232200();
          break;
      }
    }
  }
  return result;
}

//----- (02232A28) --------------------------------------------------------
int Function_2232a28()
{
  int result;
  int v1;
  int v2;

  result = Function_2233448();
  if ( result == 1 )
  {
    v2 = Function_2232334();
    if ( Function_2233914(v2) )
      result = Function_2233424(3);
    else
      result = Function_2232200();
  }
  else if ( result == 2 )
  {
    if ( Function_22322dc() && (v1 = Function_223227c(), Function_2233890(v1)) )
    {
      *(uchar *)(Function_2233510() + 96) = 1;
      result = Function_2233424(3);
    }
    else
    {
      result = Function_2232200();
    }
  }
  return result;
}

//----- (02232A7C) --------------------------------------------------------
int __fastcall Function_2232a7c(ushort *a1)
{
  ushort *v1;
  int result;

  v1 = a1;
  Function_2233800((ushort)a1[2]);
  result = (ushort)v1[1];
  if ( v1[1] )
  {
    if ( result != 9 && result != 13 && result != 15 )
      result = Function_2232200();
  }
  else if ( *v1 != 14 || (result = Function_223222c()) == 0 )
  {
    result = Function_2233448();
    if ( result == 1 )
    {
      result = Function_2233424(11);
    }
    else if ( result == 2 )
    {
      result = Function_2233424(10);
    }
  }
  return result;
}

//----- (02232AC8) --------------------------------------------------------
uint __fastcall Function_2232ac8(int a1)
{
  int v1;
  int v2;
  int v3;
  uint result;
  uint *v5;
  uint v6;
  int v7;

  v1 = a1;
  v2 = Function_2233538();
  v3 = v2;
  result = *(uchar *)(v2 + 25);
  if ( result == 1 )
  {
    v5 = *(uint **)(v3 + 12);
    DC_FlushRange(*(uint *)(v1 + 12), *(ushort *)(v1 + 16));
    v7 = MI_CpuCopy8(*(uint *)(v1 + 12), *(uint *)(v3 + 12), *(ushort *)(v1 + 16), v6);
    result = Function_2233560(v7);
    if ( (*v5 & 0xFF) == result )
    {
      result = Function_2233570();
      if ( *v5 << 20 >> 28 <= result )
      {
        Function_22337a4(*(uint *)(v3 + 12));
        result = *(uchar *)(v3 + 28);
        if ( (v5[2] & 0xFF) == result )
        {
          Function_2233810(*(uint *)(v3 + 12));
          if ( Function_22337d8(*(uint *)(v3 + 12)) && v5[2] << 16 >> 24 != 1 )
          {
            result = 2;
            *(uchar *)(v3 + 25) = 2;
          }
          else
          {
            result = 0;
            *(uchar *)(v3 + 25) = 0;
          }
        }
      }
    }
  }
  return result;
}

//----- (02232B40) --------------------------------------------------------
uint __fastcall Function_2232b40(int a1)
{
  int v1;
  int v2;
  uint result;
  uint *v4;
  uint v5;
  int v6;
  int v7;
  uint v8;
  int v9;

  v1 = a1;
  v2 = Function_2233538();
  result = Function_2233448();
  if ( result == 2 )
  {
    result = *(uchar *)(v2 + 25);
    if ( result != 2 )
    {
      v4 = *(uint **)(v2 + 12);
      DC_FlushRange(*(uint *)(v1 + 12), *(ushort *)(v1 + 16));
      v6 = MI_CpuCopy8(*(uint *)(v1 + 12), *(uint *)(v2 + 12), *(ushort *)(v1 + 16), v5);
      result = Function_2233560(v6);
      if ( (*v4 & 0xFF) == result )
      {
        result = Function_2233570();
        if ( *v4 << 20 >> 28 <= result )
        {
          Function_22337a4(*(uint *)(v2 + 12));
          result = v4[2] & 0xFF;
          if ( result == 253 )
          {
            result = Function_2233510();
            v7 = 0;
            v8 = result;
            while ( *(ushort *)(v1 + 18) != *(ushort *)(v8 + 6) )
            {
              ++v7;
              v8 += 12;
              if ( v7 >= 8 )
                return result;
            }
            v9 = result + 12 * v7;
            *(uchar *)(v9 + 8) = 1;
            *(uchar *)(v9 + 9) = 3;
            *(uchar *)(v2 + 26) = -76;
            result = 0;
            *(uchar *)(v2 + 25) = 0;
          }
        }
      }
    }
  }
  return result;
}

//----- (02232BCC) --------------------------------------------------------
uint __fastcall Function_2232bcc(int a1)
{
  int v1;
  int v2;
  uint result;
  uint *v4;
  uint v5;
  int v6;
  uint v7;

  v1 = a1;
  v2 = Function_2233538();
  if ( *(uchar *)(v2 + 28) == 253 )
    return Function_2232b40(v1);
  if ( *(uchar *)(v2 + 25) == 1 || (result = *(uchar *)(v2 + 25), result == 3) )
  {
    result = *(uchar *)(v2 + 27);
    if ( !*(uchar *)(v2 + 27) )
    {
      v4 = *(uint **)(v2 + 12);
      DC_FlushRange(*(uint *)(v1 + 12), *(ushort *)(v1 + 16));
      v6 = MI_CpuCopy8(*(uint *)(v1 + 12), *(uint *)(v2 + 12), *(ushort *)(v1 + 16), v5);
      result = Function_2233560(v6);
      if ( (*v4 & 0xFF) == result )
      {
        result = Function_2233570();
        if ( *v4 << 20 >> 28 <= result )
        {
          Function_22337a4(*(uint *)(v2 + 12));
          result = *(uchar *)(v2 + 28);
          if ( (v4[2] & 0xFF) == result )
          {
            Function_2233810(*(uint *)(v2 + 12));
            *(uchar *)(v2 + 25) = 0;
            if ( Function_22337d8(*(uint *)(v2 + 12)) )
            {
              if ( (v4[2] & 0xFF) == 253 )
                Function_2232b40(v1);
              else
                MI_CpuCopy8(*(uint *)(v2 + 12) + (v4[3] & 0xFF), *(uint *)(v2 + 4), v4[3] >> 8, v7);
              v4[2] &= 0xFFFF00FF;
              result = 4;
              *(uchar *)(v2 + 27) = 4;
            }
            else
            {
              result = v4[2] & 0xFFFF00FF | 0x100;
              v4[2] = result;
            }
          }
        }
      }
    }
  }
  return result;
}

//----- (02232C94) --------------------------------------------------------
int __fastcall Function_2232c94(ushort *a1)
{
  ushort *v1;
  int v2;
  int result;
  int v4;

  v1 = a1;
  Function_2233800(a1[2]);
  result = v1[1];
  if ( !v1[1] )
  {
    result = v1[2];
    switch ( result )
    {
      case 7:
        Function_22334d8(1);
        result = Function_22334e4(0);
        break;
      case 9:
        v4 = Function_22334cc(9, v2);
        if ( v4 )
          v4 = Function_22334e4(1);
        result = Function_2233418(v4);
        if ( result == 10 )
        {
          result = Function_2232254(v1[9]);
        }
        else if ( result == 11 )
        {
          result = Function_22334d8(0);
        }
        break;
      case 21:
        result = Function_2233418(21);
        if ( result == 10 || result == 11 )
        {
          result = *(uchar *)(Function_2233538() + 24);
          if ( result == 1 )
          {
            result = Function_2232ac8((int)v1);
          }
          else if ( result == 2 )
          {
            result = Function_2232bcc((int)v1);
          }
        }
        break;
    }
  }
  return result;
}

//----- (02232D18) --------------------------------------------------------
int __fastcall Function_2232d18(int a1)
{
  int v1;
  int result;

  v1 = *(ushort *)(a1 + 2);
  if ( v1 )
  {
    Function_22337fc(v1);
    result = Function_2233424(4);
  }
  else
  {
    result = Function_223222c();
    if ( !result )
      result = Function_2232a28();
  }
  return result;
}

//----- (02232D3C) --------------------------------------------------------
int __fastcall Function_2232d3c(int a1)
{
  int v1;
  int result;

  v1 = *(ushort *)(a1 + 2);
  if ( v1 )
  {
    Function_22337fc(v1);
    result = Function_2232200();
  }
  else
  {
    result = Function_2233870(0);
    if ( result )
      result = Function_2233424(2);
  }
  return result;
}

//----- (02232D60) --------------------------------------------------------
int __fastcall Function_2232d60(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = *(ushort *)(a1 + 2);
  if ( v1 )
  {
    Function_22337fc(v1);
    result = Function_2233424(4);
  }
  else
  {
    v2 = Function_22334c0(0);
    if ( Function_2233430(v2) == 12 )
    {
      result = Function_2233af8();
      if ( result )
        result = Function_2233424(3);
    }
    else
    {
      result = Function_2233ab8();
      if ( result )
        result = Function_2233424(3);
    }
  }
  return result;
}

//----- (02232DA4) --------------------------------------------------------
int __fastcall Function_2232da4(int a1)
{
  int v1;
  int result;

  v1 = *(ushort *)(a1 + 2);
  if ( v1 )
  {
    Function_22337fc(v1);
    result = Function_2233424(4);
  }
  else
  {
    Function_2233424(12);
    result = Function_22334f0(1);
  }
  return result;
}

//----- (02232DC8) --------------------------------------------------------
int Function_2232dc8()
{
  if ( !WM_SetIndCallback((int)Function_22323b0) )
    return 1;
  Function_2233424(4);
  return 0;
}

//----- (02232DE8) --------------------------------------------------------
int __fastcall Function_2232de8(int a1)
{
  int result;

  result = Function_2233418(a1);
  if ( !result || result == 1 || result == 2 )
    result = Function_2233854();
  return result;
}

//----- (02232E00) --------------------------------------------------------
uint __fastcall Function_2232e00(int a1, uint a2, int a3)
{
  int v3;
  uint v4;
  int v5;
  uint result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  result = *(ushort *)(Function_2233408() + 52);
  if ( v4 <= result )
  {
    DC_FlushRange(v3, v4);
    result = Function_2233814(v3, v4, v5);
  }
  return result;
}

//----- (02232E28) --------------------------------------------------------
int Function_2232e28()
{
  return 1472;
}

//----- (02232E30) --------------------------------------------------------
int Function_2232e30()
{
  return 1472;
}

//----- (02232E38) --------------------------------------------------------
int __fastcall Function_2232e38(uint *a1, int a2)
{
  int v2;
  uint *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint v12;
  uint v13;
  uint v14;
  ushort *v15;
  ushort *v16;
  int v17;
  ushort *v18;
  int v19;
  int v20;
  int v21;

  v2 = a2;
  v3 = a1;
  v4 = Function_2233408();
  v5 = Function_2233410(v4);
  if ( v2 & 0x1F )
    v2 += 32 - (v2 & 0x1F);
  *(uchar *)v5 = 0;
  *(uchar *)(v5 + 1) = 0;
  *(uchar *)(v5 + 2) = 0;
  *(uchar *)(v5 + 3) = 4;
  *(uint *)(v5 + 4) = 4194609;
  *(ushort *)(v5 + 12) = 0;
  *(uint *)(v5 + 52) = v2;
  v6 = v2 + 3840;
  *(uint *)(v5 + 56) = v6;
  v7 = Function_2232e28();
  *(uint *)(v5 + 44) = v7;
  v8 = v6 + v7;
  *(uint *)(v5 + 60) = v8;
  v9 = Function_2232e30();
  v10 = v8 + v9;
  *(uint *)(v5 + 48) = v9;
  *(uint *)(v5 + 40) = v10;
  *(uint *)(v5 + 36) = v10 + 192;
  v11 = v10 + 224;
  WM_Init(*(uint *)(v5 + 52), 2u);
  *(uint *)(v5 + 16) = Function_2232dc8();
  v12 = 0;
  *(uint *)(v5 + 20) = 0;
  *(uint *)(v5 + 24) = 0;
  *(uint *)(v5 + 28) = 0;
  *(uint *)(v5 + 32) = 0;
  *(uint *)(v5 + 64) = ((*(uint *)(v5 + 64) & 0xFFFFFF00 | 0xF) & 0xFFFFF0FF | 0x100) & 0xFFFF0FFF | 0x1000;
  v13 = *v3 & 0xFF | *(uint *)(v5 + 68) & 0xFFFFFF00;
  *(uint *)(v5 + 68) = v13;
  v14 = (*v3 << 20 >> 28 << 8) & 0xFFF | v13 & 0xFFFFF0FF;
  *(uint *)(v5 + 68) = v14;
  *(uint *)(v5 + 68) = v14 & 0xFFFF0FFF | (*v3 << 16 >> 28 << 12) & 0xFFFF;
  *(uint *)(v5 + 68) = *(uint *)(v5 + 68) & 0xFFFF | (*v3 >> 16 << 16);
  v15 = (ushort *)v3[2];
  v16 = (ushort *)v3[1];
  v17 = v5;
  while ( v15 && v12 < 0xC )
  {
    *(ushort *)(v17 + 72) = *v15;
    v18 = (ushort *)(v17 + 96);
    v17 += 2;
    *v18 = *v16;
    ++v12;
    ++v15;
    ++v16;
  }
  v19 = *(uint *)(v5 + 68);
  *(uint *)(v5 + 120) = *(uint *)(v5 + 64);
  *(uint *)(v5 + 124) = v19;
  v20 = Function_2233548();
  *(uint *)(Function_2233538(v20) + 8) = v11;
  v21 = *(uint *)(v5 + 44);
  *(uint *)(Function_2233538(v21) + 12) = v11 + v21;
  return WM_GetNextTgid();
}

//----- (02232F68) --------------------------------------------------------
int __fastcall Function_2232f68(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = Function_2233538(a1);
  if ( *(uchar *)(v1 + 25) == 1 )
  {
    result = (uchar)--*(uchar *)(v1 + 26);
    if ( *(uchar *)(v1 + 26) )
      return result;
    *(uchar *)(v1 + 25) = 0;
  }
  result = *(uchar *)(v1 + 25);
  if ( !*(uchar *)(v1 + 25) )
  {
    v3 = ((int (*)(void))Function_2233614)();
    v4 = 64 - v3;
    v5 = *(uchar *)(v1 + 28);
    v6 = Function_2233674(*(uint *)(v1 + 8), *(uint *)(v1 + 4), 64 - v3, 3);
    v7 = Function_2233614(v6);
    Function_2232e00(*(uint *)(v1 + 8), v4 + v7, 0xFFFF);
    *(uchar *)(v1 + 25) = 1;
    result = 60;
    *(uchar *)(v1 + 26) = 60;
  }
  return result;
}

//----- (02232FC4) --------------------------------------------------------
uint __fastcall Function_2232fc4(int a1)
{
  int v1;
  int v2;
  uint result;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uint v16;

  v1 = Function_2233538(a1);
  v2 = v1;
  result = *(uchar *)(v1 + 25);
  if ( !result )
  {
    v4 = *(uchar *)(v2 + 28);
    if ( v4 == 253 )
    {
      v5 = Function_2233510();
      v6 = 0;
      v7 = v5;
      do
      {
        if ( *(uchar *)(v7 + 9) )
        {
          v8 = 12 * v6;
          v9 = (1 << *(ushort *)(v5 + 12 * v6 + 6)) & 0xFFFF;
          v10 = Function_2233674(*(uint *)(v2 + 8), *(uint *)(v2 + 4), 0, 0);
          v11 = Function_2233614(v10);
          Function_2232e00(*(uint *)(v2 + 8), v11, v9);
          v12 = v5 + 9;
          result = *(uchar *)(v12 + v8) - 1;
          *(uchar *)(v12 + v8) = result;
          return result;
        }
        ++v6;
        v7 += 12;
      }
      while ( v6 < 8 );
      result = (uchar)--*(uchar *)(v2 + 26);
      if ( !*(uchar *)(v2 + 26) )
      {
        result = 2;
        *(uchar *)(v2 + 25) = 2;
      }
    }
    else
    {
      Function_2233614(v4);
      Function_2232e28();
      v13 = *(uint *)(*(uint *)(v2 + 12) + 8) << 16 >> 24;
      if ( !v13 )
      {
        if ( !*(uchar *)(v2 + 27) )
        {
          result = 2;
          *(uchar *)(v2 + 25) = 2;
          return result;
        }
        --*(uchar *)(v2 + 27);
      }
      v14 = *(uchar *)(v2 + 28);
      v15 = Function_2233674(*(uint *)(v2 + 8), *(uint *)(v2 + 4), 0, v13);
      v16 = Function_2233614(v15);
      result = Function_2232e00(*(uint *)(v2 + 8), v16, 0xFFFF);
    }
  }
  return result;
}

//----- (02233080) --------------------------------------------------------
int __fastcall Function_2233080(int a1)
{
  int result;

  result = *(uchar *)(Function_2233538(a1) + 24);
  if ( result == 1 )
    return Function_2232f68(1);
  if ( result == 2 )
    result = Function_2232fc4(2);
  return result;
}

//----- (022330A0) --------------------------------------------------------
int __fastcall Function_22330a0(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = Function_2233508(a1);
  v2 = v1;
  result = Function_2233418(v1);
  if ( result == 6 )
  {
    result = 448;
    if ( *(ushort *)(v2 + 448) )
      --*(ushort *)(v2 + 448);
  }
  else if ( result == 11 )
  {
    result = Function_2233080(11);
  }
  return result;
}

//----- (022330CC) --------------------------------------------------------
int __fastcall Function_22330cc(int a1)
{
  int result;

  result = Function_2233418(a1);
  if ( result == 10 )
    result = Function_2233080(10);
  return result;
}

//----- (022330DC) --------------------------------------------------------
int __fastcall Function_22330dc(int a1)
{
  int result;
  int v2;
  int v3;

  result = Function_2233418(a1);
  if ( result != 12 )
  {
    if ( Function_2233430(result) == 12 )
    {
      result = Function_2233418(12);
      if ( result == 7 )
        result = Function_2233ad8(7);
    }
    else
    {
      v2 = Function_2233448();
      if ( v2 == 1 )
      {
        result = Function_22330a0(1);
      }
      else if ( v2 == 2 )
      {
        result = Function_22330cc(2);
      }
      else
      {
        v3 = Function_2233410(v2);
        result = Function_2233418(v3);
      }
    }
  }
  return result;
}

//----- (02233120) --------------------------------------------------------
int Function_2233120()
{
  int v0;

  Function_2233518();
  v0 = Function_2233454(1);
  return Function_2232de8(v0);
}

//----- (02233134) --------------------------------------------------------
int Function_2233134()
{
  int v0;
  int v1;
  uint v2;

  v0 = 0;
  if ( Function_2233448() == 1 )
  {
    v1 = Function_2233508(1);
    if ( (uint)*(uchar *)(v1 + 451) << 24 >> 28 == 1 )
    {
      v2 = 0;
      do
      {
        if ( *(uint *)v1 )
          ++v0;
        ++v2;
        v1 += 56;
      }
      while ( v2 < 8 );
    }
  }
  return v0;
}

//----- (0223316C) --------------------------------------------------------
BOOL __fastcall Function_223316c(int a1)
{
  int v1;
  int v2;
  BOOL result;

  v1 = a1;
  result = 0;
  if ( Function_2233448() == 1 && Function_2233418(1) == 7 )
  {
    v2 = Function_2233508(7);
    if ( (uint)*(uchar *)(v2 + 451) << 24 >> 28 == 1 )
    {
      if ( *(uint *)(v2 + 56 * v1) )
        result = 1;
    }
  }
  return result;
}

//----- (022331A8) --------------------------------------------------------
int __fastcall Function_22331a8(int a1)
{
  int v1;
  int result;
  int v3;

  v1 = a1;
  result = Function_2233448();
  if ( result == 1 )
  {
    result = Function_2233418(1);
    if ( result == 7 )
    {
      result = Function_2233508(7);
      v3 = *(uchar *)(result + 451);
      if ( (uint)(v3 << 24) >> 28 == 1 )
      {
        if ( *(uint *)(result + 56 * v1) )
        {
          *(uchar *)(result + 451) = v3 & 0xF0 | v1 & 0xF;
          *(ushort *)(result + 448) = 120;
          result = Function_2233938(result);
        }
      }
    }
  }
  return result;
}

//----- (022331F8) --------------------------------------------------------
int Function_22331f8()
{
  int v0;
  int v1;
  uint v2;

  v0 = 0;
  if ( Function_2233448() == 2 )
  {
    v1 = Function_2233510();
    if ( *(uchar *)(v1 + 96) == 2 )
    {
      v2 = 0;
      do
      {
        if ( *(uint *)v1 && *(uchar *)(v1 + 10) )
          ++v0;
        ++v2;
        v1 += 12;
      }
      while ( v2 < 8 );
    }
  }
  return v0;
}

//----- (02233230) --------------------------------------------------------
int __fastcall Function_2233230(int a1)
{
  int result;

  if ( *(uint *)(Function_2233410(a1) + 32) )
    result = 0;
  else
    result = WM_GetLinkLevel();
  return result;
}

//----- (02233248) --------------------------------------------------------
int Function_2233248()
{
  int v0;

  v0 = Function_2233448();
  if ( v0 == 1 )
    return Function_2233134();
  if ( v0 == 2 )
    return Function_22331f8();
  return 0;
}

//----- (02233268) --------------------------------------------------------
int __fastcall Function_2233268(int a1)
{
  int v1;
  int v2;
  int result;
  int v4;

  v1 = Function_2233538(a1);
  v2 = Function_2233590();
  result = Function_2233448();
  if ( result == 1 )
  {
    *(uchar *)(v1 + 24) = 1;
    *(uchar *)(v1 + 25) = 0;
    v4 = v2 + 8;
    *(uint *)v1 = v4;
    *(uint *)(v1 + 4) = v4;
    *(uint *)(v1 + 16) = 0;
    *(uint *)(v1 + 20) = 0;
    *(uchar *)(v1 + 26) = 120;
    *(uchar *)(v1 + 27) = 0;
    result = 253;
    *(uchar *)(v1 + 28) = -3;
  }
  return result;
}

//----- (0223329C) --------------------------------------------------------
int __fastcall Function_223329c(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = Function_2233538(a1);
  v2 = Function_2233590();
  *(uchar *)(v1 + 24) = 1;
  *(uchar *)(v1 + 25) = 0;
  v2 += 8;
  *(uint *)v1 = v2;
  *(uint *)(v1 + 4) = v2;
  *(uint *)(v1 + 16) = 48;
  *(uint *)(v1 + 20) = 48;
  *(uchar *)(v1 + 26) = 120;
  *(uchar *)(v1 + 27) = 0;
  result = 254;
  *(uchar *)(v1 + 28) = -2;
  return result;
}

//----- (022332C8) --------------------------------------------------------
int __fastcall Function_22332c8(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  result = Function_2233538(a1);
  if ( v5 <= 240 )
  {
    *(uchar *)(result + 24) = 2;
    *(uchar *)(result + 25) = 3;
    *(uint *)result = v3;
    *(uint *)(result + 4) = v3;
    *(uint *)(result + 16) = v4;
    *(uint *)(result + 20) = 0;
    *(uchar *)(result + 26) = 120;
    *(uchar *)(result + 27) = 0;
    *(uchar *)(result + 28) = v5;
  }
  return result;
}

//----- (022332F4) --------------------------------------------------------
BOOL Function_22332f4()
{
  int v0;
  int v1;
  BOOL result;

  v0 = Function_2233448();
  result = 0;
  if ( v0 == 1 || v0 == 2 )
  {
    v1 = Function_2233418(v0);
    if ( (v1 == 10 || v1 == 11) && *(uchar *)(Function_2233538(v1) + 25) == 2 )
      result = 1;
  }
  return result;
}

//----- (02233320) --------------------------------------------------------
BOOL Function_2233320()
{
  int v0;
  int v1;
  BOOL result;

  v0 = Function_2233448();
  result = 0;
  if ( v0 == 1 || v0 == 2 )
  {
    v1 = Function_2233418(v0);
    if ( (v1 == 10 || v1 == 11) && *(uchar *)(Function_2233538(v1) + 25) == 2 )
      result = 1;
  }
  return result;
}

//----- (0223334C) --------------------------------------------------------
BOOL Function_223334c()
{
  int v0;
  int v1;
  int v2;
  BOOL result;

  v0 = Function_2233448();
  result = 0;
  if ( v0 == 1 || v0 == 2 )
  {
    v1 = Function_2233418(v0);
    if ( v1 == 10 || v1 == 11 )
    {
      v2 = Function_2233538(v1);
      if ( !*(uchar *)(v2 + 25)
        && !(*(uint *)(*(uint *)(v2 + 12) + 8) << 16 >> 24)
        && *(uchar *)(v2 + 27) < 4u )
      {
        result = 1;
      }
    }
  }
  return result;
}

//----- (02233388) --------------------------------------------------------
int Function_2233388()
{
  int v0;
  int v1;
  int v2;
  int v3;

  v0 = Function_2233448();
  if ( v0 != 2 )
    return Function_22334cc(v0, v1);
  v2 = Function_2233510();
  v3 = 0;
  do
  {
    if ( *(uint *)v2 && *(uchar *)(v2 + 10) )
      return 1;
    ++v3;
    v2 += 12;
  }
  while ( v3 < 8 );
  return 0;
}

//----- (022333BC) --------------------------------------------------------
int Function_22333bc()
{
  int v0;
  int result;
  int v2;
  int v3;

  v0 = Function_223343c(12);
  result = Function_2233418(v0);
  if ( result && result != 1 )
  {
    if ( result == 9 )
    {
      result = Function_22334cc(9, v2);
      if ( !result )
      {
        v3 = Function_2233410(0);
        Function_2233ad8(v3);
        result = 1;
        *(uint *)(v3 + 28) = 1;
      }
    }
  }
  else
  {
    WM_Finish();
    result = Function_22334f0(1);
  }
  return result;
}

//----- (022333FC) --------------------------------------------------------
int __fastcall Function_22333fc(int a1)
{
  return *(uint *)(Function_2233410(a1) + 32);
}

//----- (02233408) --------------------------------------------------------
int *Function_2233408()
{
  return dword_223EA20;
}

//----- (02233410) --------------------------------------------------------
int *Function_2233410()
{
  return &dword_223F180[16];
}

//----- (02233418) --------------------------------------------------------
int Function_2233418()
{
  return *(uchar *)Function_2233410();
}

//----- (02233424) --------------------------------------------------------
int *__fastcall Function_2233424(char a1)
{
  char v1;
  int *result;

  v1 = a1;
  result = Function_2233410();
  *(uchar *)result = v1;
  return result;
}

//----- (02233430) --------------------------------------------------------
int Function_2233430()
{
  return *((uchar *)Function_2233410() + 1);
}

//----- (0223343C) --------------------------------------------------------
int *__fastcall Function_223343c(char a1)
{
  char v1;
  int *result;

  v1 = a1;
  result = Function_2233410();
  *((uchar *)result + 1) = v1;
  return result;
}

//----- (02233448) --------------------------------------------------------
int Function_2233448()
{
  return *((uchar *)Function_2233410() + 2);
}

//----- (02233454) --------------------------------------------------------
int *__fastcall Function_2233454(char a1)
{
  char v1;
  int *result;

  v1 = a1;
  result = Function_2233410();
  *((uchar *)result + 2) = v1;
  return result;
}

//----- (02233460) --------------------------------------------------------
int Function_2233460()
{
  return *((uchar *)Function_2233410() + 3);
}

//----- (0223346C) --------------------------------------------------------
int *__fastcall Function_223346c(short a1)
{
  short v1;
  int *result;

  v1 = a1;
  result = Function_2233408();
  *((ushort *)result + 25) = v1;
  return result;
}

//----- (02233478) --------------------------------------------------------
int Function_2233478()
{
  return Function_2233410()[9];
}

//----- (02233484) --------------------------------------------------------
int Function_2233484()
{
  return Function_2233410()[11];
}

//----- (02233490) --------------------------------------------------------
int Function_2233490()
{
  return Function_2233410()[12];
}

//----- (0223349C) --------------------------------------------------------
int Function_223349c()
{
  return Function_2233410()[14];
}

//----- (022334A8) --------------------------------------------------------
int Function_22334a8()
{
  return Function_2233410()[15];
}

//----- (022334B4) --------------------------------------------------------
int Function_22334b4()
{
  return Function_2233410()[10];
}

//----- (022334C0) --------------------------------------------------------
int *__fastcall Function_22334c0(short a1)
{
  short v1;
  int *result;

  v1 = a1;
  result = Function_2233410();
  *((ushort *)result + 6) = v1;
  return result;
}

//----- (022334CC) --------------------------------------------------------
int Function_22334cc()
{
  return Function_2233410()[5];
}

//----- (022334D8) --------------------------------------------------------
int *__fastcall Function_22334d8(int a1)
{
  int v1;
  int *result;

  v1 = a1;
  result = Function_2233410();
  result[5] = v1;
  return result;
}

//----- (022334E4) --------------------------------------------------------
int *__fastcall Function_22334e4(int a1)
{
  int v1;
  int *result;

  v1 = a1;
  result = Function_2233410();
  result[6] = v1;
  return result;
}

//----- (022334F0) --------------------------------------------------------
int *__fastcall Function_22334f0(int a1)
{
  int v1;
  int *result;

  v1 = a1;
  result = Function_2233410();
  result[8] = v1;
  return result;
}

//----- (022334FC) --------------------------------------------------------
int *Function_22334fc()
{
  return Function_2233410() + 36;
}

//----- (02233508) --------------------------------------------------------
int *Function_2233508()
{
  return Function_22334fc();
}

//----- (02233510) --------------------------------------------------------
int *Function_2233510()
{
  return Function_22334fc();
}

//----- (02233518) --------------------------------------------------------
int Function_2233518()
{
  int *v0;
  int result;

  v0 = Function_2233508();
  MI_CpuFill8(v0, 0, 0x1C4u);
  result = 448;
  *((ushort *)v0 + 224) = 280;
  return result;
}

//----- (02233538) --------------------------------------------------------
int *Function_2233538()
{
  return Function_2233410() + 149;
}

//----- (02233548) --------------------------------------------------------
int *Function_2233548()
{
  int *result;

  result = Function_2233538();
  *((uchar *)result + 24) = 0;
  return result;
}

//----- (02233554) --------------------------------------------------------
int Function_2233554()
{
  return Function_2233410()[1];
}

//----- (02233560) --------------------------------------------------------
int Function_2233560()
{
  return Function_2233410()[16] & 0xFF;
}

//----- (02233570) --------------------------------------------------------
uint Function_2233570()
{
  return (uint)(Function_2233410()[16] << 20) >> 28;
}

//----- (02233580) --------------------------------------------------------
uint Function_2233580()
{
  return (uint)Function_2233410()[17] >> 16;
}

//----- (0223358C) --------------------------------------------------------
int Function_223358c()
{
  return 56;
}

//----- (02233590) --------------------------------------------------------
int *Function_2233590()
{
  return Function_2233410() + 16;
}

//----- (0223359C) --------------------------------------------------------
int *Function_223359c()
{
  return Function_2233410() + 30;
}

//----- (022335A8) --------------------------------------------------------
int __fastcall Function_22335a8(int a1, int a2, int a3, int a4)
{
  uint v4;
  int *v5;
  char v6;
  int v8;
  int varg_r3;

  varg_r3 = a4;
  v4 = 0;
  v8 = 0;
  v5 = &v8;
  do
  {
    v6 = *(uchar *)(a1 + v4++ + 2);
    *(uchar *)v5 = v6;
    v5 = (int *)((char *)v5 + 1);
  }
  while ( v4 < 4 );
  return v8;
}

//----- (022335C8) --------------------------------------------------------
int __fastcall Function_22335c8(int a1, int a2, int a3, int a4)
{
  uint v4;
  short *v5;
  char v6;
  short v8;
  int varg_r3;

  varg_r3 = a4;
  v4 = 0;
  v8 = 0;
  v5 = &v8;
  do
  {
    v6 = *(uchar *)(a1 + v4++);
    *(uchar *)v5 = v6;
    v5 = (short *)((char *)v5 + 1);
  }
  while ( v4 < 2 );
  return v8;
}

//----- (022335EC) --------------------------------------------------------
int __fastcall Function_22335ec(int a1, uint *a2, uint *a3)
{
  uint *v3;
  int v4;
  uint *v5;
  int v6;
  int v7;
  int result;
  int v9;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  u32_div_f(a1, 10000);
  *v3 = v6;
  v7 = u32_div_f(v4, 10000);
  result = u32_div_f(v7, 10000);
  *v5 = v9;
  return result;
}

//----- (02233614) --------------------------------------------------------
int Function_2233614()
{
  return 16;
}

//----- (02233618) --------------------------------------------------------
uint Function_2233618()
{
  int v0;

  v0 = (ushort)REG_VCOUNT;
  return ((OS_GetTick() + v0) & 0xFFFFFFFE) + 1;
}

//----- (02233630) --------------------------------------------------------
uint __fastcall Function_2233630(uint a1, uint a2, uint *a3)
{
  uint v3;
  uint v4;
  uint v5;
  uint v6;
  uint v7;

  v3 = a1;
  v4 = 0;
  v5 = a2 >> 2;
  if ( v5 )
  {
    do
    {
      ++v4;
      v6 = 1566083941 * v3 + 2531011;
      v7 = v6 >> 16;
      v3 = 1566083941 * v6 + 2531011;
      *a3 ^= ((ushort)v7 << 16) | (v3 >> 16);
      ++a3;
    }
    while ( v4 < v5 );
  }
  return v3;
}

//----- (02233674) --------------------------------------------------------
uint __fastcall Function_2233674(uint *a1, int a2, uint a3, int a4, uchar a5)
{
  uint *v5;
  int v6;
  uint v7;
  int v8;
  int *v9;
  uint v10;
  uint v11;
  uint v12;
  uint v13;
  uint v14;
  uint result;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  v9 = Function_2233590();
  v10 = *v9 & 0xFF | *v5 & 0xFFFFFF00;
  *v5 = v10;
  v11 = ((uint)(*v9 << 20) >> 28 << 8) & 0xFFF | v10 & 0xFFFFF0FF;
  *v5 = v11;
  *v5 = v11 & 0xFFFF0FFF | ((uint)(*v9 << 16) >> 28 << 12) & 0xFFFF;
  *v5 = ((ushort)Function_2233618() << 16) | *v5 & 0xFFFF;
  v12 = v9[1] & 0xFF | v5[1] & 0xFFFFFF00;
  v5[1] = v12;
  v13 = ((uint)(v9[1] << 20) >> 28 << 8) & 0xFFF | v12 & 0xFFFFF0FF;
  v5[1] = v13;
  v5[1] = (v13 & 0xFFFF0FFF | ((uint)(v9[1] << 16) >> 28 << 12) & 0xFFFF) & 0xFFFF;
  v5[2] = (v5[2] & 0xFFFFFF00 | a5) & 0xFFFF00FF | (v8 << 8) & 0xFFFF;
  v5[2] = (sub_2000160(0, v6, v7) << 16) | v5[2] & 0xFFFF;
  v5[3] = (v7 << 8) | ((uchar)Function_2233614() | v5[3] & 0xFFFFFF00) & 0xFF;
  if ( v7 )
    MI_CpuCopy8(v6, (uint)v5 + (v5[3] & 0xFF), v7, v14);
  Function_2233810(v5);
  result = (uint)(*v9 << 16) >> 28;
  if ( result == 1 )
    result = Function_2233630(*v5 >> 16, v7 + (v5[3] & 0xFF) - 4, v5 + 1);
  return result;
}

//----- (022337A4) --------------------------------------------------------
uint __fastcall Function_22337a4(uint *a1)
{
  uint *v1;
  uint result;
  uint v3;

  v1 = a1;
  Function_2233590();
  result = *v1;
  if ( *v1 << 16 >> 28 == 1 )
  {
    v3 = Function_2233630(result >> 16, 0xCu, v1 + 1);
    result = Function_2233630(v3, (v1[3] & 0xFF) + (v1[3] >> 8) - 16, v1 + 4);
  }
  return result;
}

//----- (022337D8) --------------------------------------------------------
BOOL __fastcall Function_22337d8(int a1)
{
  return *(uint *)(a1 + 8) >> 16 == sub_2000160(0, a1 + (*(uint *)(a1 + 12) & 0xFF), *(uint *)(a1 + 12) >> 8);
}

//----- (022337FC) --------------------------------------------------------
void Function_22337fc()
{
  ;
}

//----- (02233800) --------------------------------------------------------
void Function_2233800()
{
  ;
}

//----- (02233804) --------------------------------------------------------
void Function_2233804()
{
  ;
}

//----- (02233808) --------------------------------------------------------
void Function_2233808()
{
  ;
}

//----- (0223380C) --------------------------------------------------------
void Function_223380c()
{
  ;
}

//----- (02233810) --------------------------------------------------------
void Function_2233810()
{
  ;
}

//----- (02233814) --------------------------------------------------------
int __fastcall Function_2233814(int a1, ushort a2, ushort a3)
{
  int v3;
  ushort v4;
  ushort v5;
  ushort v6;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_2233460();
  if ( WM_SetMPDataToPortEx((int)Function_22323cc, 0, v3, v4, v5, v6, 2u) == 2 )
    return 1;
  Function_22337fc();
  return 0;
}

//----- (02233854) --------------------------------------------------------
int __fastcall Function_2233854(int a1, int a2, int a3, int a4)
{
  if ( Function_20ceb94((int)Function_22323e4, a2, a3, a4) == 2 )
    return 1;
  Function_22337fc();
  return 0;
}

//----- (02233870) --------------------------------------------------------
int __fastcall Function_2233870(int a1, int a2, int a3, int a4)
{
  if ( Function_20cec08((int)Function_2232424, a2, a3, a4) != 2 )
  {
    Function_22337fc();
    OS_Panic();
  }
  return 1;
}

//----- (02233890) --------------------------------------------------------
int __fastcall Function_2233890(short a1)
{
  if ( WM_MeasureChannel((int)Function_223245c, 3, 17, a1, 0x1Eu) == 2 )
    return 1;
  Function_22337fc();
  return 0;
}

//----- (022338BC) --------------------------------------------------------
int Function_22338bc()
{
  ushort *v0;
  int *v1;
  int v2;
  int v3;

  v0 = (ushort *)Function_2233408();
  v1 = Function_2233590();
  v0[25] = *((uchar *)Function_2233510() + 100);
  *(uint *)v0 = v1;
  v0[2] = Function_223358c();
  if ( WMi_StartParentEx((int)Function_22324c4, v0, v2, v3) == 2 )
    return 1;
  Function_22337fc();
  return 0;
}

//----- (022338F8) --------------------------------------------------------
int __fastcall Function_22338f8(int a1, int a2, int a3, int a4)
{
  if ( WM_StartParent_9((int)Function_22324ec, a2, a3, a4) == 2 )
    return 1;
  Function_22337fc();
  return 0;
}

//----- (02233914) --------------------------------------------------------
int Function_2233914()
{
  int v0;
  int v1;
  int v2;

  v0 = Function_2233478();
  if ( WM_StartScan((int)Function_22327b8, v0, v1, v2) == 2 )
    return 1;
  Function_22337fc();
  return 0;
}

//----- (02233938) --------------------------------------------------------
int Function_2233938()
{
  uchar *v0;
  int *v1;
  int v2;
  int v3;
  int v4;

  v0 = (uchar *)Function_2233478();
  v1 = Function_2233508();
  v0[8] = v1[14 * (*((uchar *)v1 + 451) & 0xF) + 13];
  v0[9] = BYTE1(v1[14 * (*((uchar *)v1 + 451) & 0xF) + 13]);
  v0[10] = v1[14 * (*((uchar *)v1 + 451) & 0xF)];
  v0[11] = BYTE1(v1[14 * (*((uchar *)v1 + 451) & 0xF)]);
  v0[12] = BYTE2(v1[14 * (*((uchar *)v1 + 451) & 0xF)]);
  v0[13] = HIBYTE(v1[14 * (*((uchar *)v1 + 451) & 0xF)]);
  v2 = Function_2233478();
  if ( WM_StartScan((int)Function_22328d4, v2, v3, v4) == 2 )
    return 1;
  Function_22337fc();
  return 0;
}

//----- (022339D0) --------------------------------------------------------
int __fastcall Function_22339d0(int a1, int a2, int a3, int a4)
{
  if ( WM_EndScan((int)Function_2232944, a2, a3, a4) == 2 )
    return 1;
  Function_22337fc();
  return 0;
}

//----- (022339EC) --------------------------------------------------------
int Function_22339ec()
{
  int *v0;
  ushort *v1;

  v0 = Function_223359c();
  v1 = (ushort *)Function_22334b4();
  if ( WM_StartConnectEx((int)Function_2232998, v1, (int)v0, 1, 0) == 2 )
    return 1;
  Function_22337fc();
  return 0;
}

//----- (02233A24) --------------------------------------------------------
int __fastcall Function_2233a24(int a1, int a2, int a3, int a4)
{
  int result;
  short v5;
  int v6;
  ushort v7;
  int v8;
  ushort v9;

  if ( WM_SetPortCallback(4, (void (__fastcall *)(short *))Function_2232c94, 0, a4) )
  {
    Function_22337fc();
    result = 0;
  }
  else
  {
    v5 = *((ushort *)Function_2233408() + 11) == 0;
    v6 = Function_22334a8();
    v7 = Function_2233490();
    v8 = Function_223349c();
    v9 = Function_2233484();
    if ( WM_StartMP((int)Function_2232a7c, v6, v7, v8, v9, v5) == 2 )
    {
      result = 1;
    }
    else
    {
      Function_22337fc();
      result = 0;
    }
  }
  return result;
}

//----- (02233A9C) --------------------------------------------------------
int __fastcall Function_2233a9c(int a1, int a2, int a3, int a4)
{
  if ( Function_20cec48((int)Function_2232d18, a2, a3, a4) == 2 )
    return 1;
  Function_22337fc();
  return 0;
}

//----- (02233AB8) --------------------------------------------------------
int __fastcall Function_2233ab8(int a1, int a2, int a3, int a4)
{
  if ( Function_20cec88((int)Function_2232d3c, a2, a3, a4) != 2 )
  {
    Function_22337fc();
    OS_Panic();
  }
  return 1;
}

//----- (02233AD8) --------------------------------------------------------
int Function_2233ad8()
{
  if ( WM_Reset((int)Function_2232d60) != 2 )
  {
    Function_22337fc();
    OS_Panic();
  }
  return 1;
}

//----- (02233AF8) --------------------------------------------------------
int __fastcall Function_2233af8(int a1, int a2, int a3, int a4)
{
  if ( WM_End((int)Function_2232da4, a2, a3, a4) != 2 )
  {
    Function_22337fc();
    OS_Panic();
  }
  return 1;
}

//----- (02233B18) --------------------------------------------------------
BOOL __fastcall Function_2233b18(int a1)
{
  if ( a1 <= 0 )
    return 1;
  if ( a1 <= 251 )
    return 0;
  if ( a1 >= 277 )
    return a1 > 411;
  return 1;
}

//----- (02233B44) --------------------------------------------------------
int __fastcall Function_2233b44(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  switch ( (uchar)Function_2235db0() )
  {
    case 0u:
      result = 2;
      *v1 = 2;
      break;
    case 1u:
      result = 1;
      *v1 = 1;
      break;
    case 2u:
      result = 5;
      *v1 = 5;
      break;
    case 3u:
      result = 4;
      *v1 = 4;
      break;
    case 4u:
      result = 3;
      *v1 = 3;
      break;
    default:
      result = -1;
      *v1 = -1;
      break;
  }
  return result;
}

//----- (02233B8C) --------------------------------------------------------
int __fastcall Function_2233b8c(int *a1, int a2, int a3, int a4)
{
  int *v4;
  uint *v5;
  uint v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v14;
  int v15;
  int v16;
  int v17;

  v17 = a4;
  v4 = a1;
  v5 = a1 + 14884;
  v6 = a1[14884];
  if ( v6 <= 9 )
    JUMPOUT(__CS__, *((short *)&off_2233BAA + v6) + 35863468);
  switch ( (uchar)v6 )
  {
    case 0:
      Function_2233d10();
      v7 = LoadVariableAreaAdress_20(v4[4]);
      v8 = Function_223635c();
      Function_202efb8(v7, v8);
      ++*v5;
      return 10;
    case 1:
      v9 = OS_GetTick();
      v5[1] = ull_mod(v9, v10, 120LL) + 1;
      ++*v5;
      return 10;
    case 2:
      v11 = a1[14885] - 1;
      v5[1] = v11;
      if ( !v11 )
        ++*v5;
      return 10;
    case 3:
      Function_2024814(a1[4], 2);
      ++*v5;
      return 10;
    case 4:
      v12 = Function_2024828(a1[4], v6, a3, a4);
      if ( v12 == 3 )
        return 12;
      if ( v12 == 1 )
        ++*v5;
      return 10;
    case 5:
      CTRDG_ReadAgbFlash(0, 0, (int)&v16, 16);
      ++*v5;
      return 10;
    case 6:
      if ( !Function_2236280() )
      {
        Function_2017b8c(1);
        return 12;
      }
      ++*v5;
      return 10;
    case 7:
      if ( Function_2236308() == 9 )
        return 10;
      if ( Function_2236308() == 11 )
      {
        ++*v5;
        return 10;
      }
      if ( Function_22362c8() != 8 )
        return 10;
      Function_2017b8c(1);
      return 12;
    case 8:
      goto LABEL_22;
    case 9:
      v15 = Function_22362c8();
      if ( v15 == 8 )
      {
        Function_2017b8c(1);
        return 12;
      }
      if ( v15 )
        return 10;
      Function_2017b8c(1);
      return 11;
    default:
      return 10;
  }
  do
  {
LABEL_22:
    v14 = Function_2024828(v4[4], v6, a3, a4);
    if ( v14 == 3 )
      return 12;
  }
  while ( v14 != 2 );
  Function_22362c8();
  Function_2017b7c(1);
  ++*v5;
  return 10;
}

//----- (02233CE4) --------------------------------------------------------
int __fastcall Function_2233ce4(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = LoadVariableAreaAdress_20(*(uint *)(a1 + 16));
  v3 = Function_223635c();
  Function_202efb8(v2, v3);
  Function_2017de0(4);
  Function_20246e0(*(uint **)(v1 + 16));
  return Function_2017df0(4);
}

//----- (02233D10) --------------------------------------------------------
int __fastcall Function_2233d10(int a1)
{
  int v1;
  int *v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int result;
  int v10;
  int v11;
  short v12;

  v1 = a1;
  v11 = LoadVariableAreaAdress_20(*(uint *)(a1 + 16));
  Function_2076b10_Dummy();
  v3 = v2;
  v4 = 0;
  v5 = v1;
  do
  {
    Function_2236e90(*(uint *)(v1 + 59520) + 4 + 2400 * *(uint *)(v5 + 976) + 80 * *(uint *)(v5 + 972), v3);
    Function_202efa4(v11, v3, v4++);
    v5 += 12;
  }
  while ( v4 < 6 );
  v6 = 0;
  v12 = 0;
  v7 = v1;
  do
  {
    v8 = *(uint *)(v7 + 972);
    result = 976;
    v10 = *(uint *)(v7 + 976);
    if ( v8 != -1 && v10 != 14 )
      result = Function_2236ca4(*(uint *)(v1 + 59520) + 4 + 2400 * v10 + 80 * v8, 11, &v12);
    ++v6;
    v7 += 12;
  }
  while ( v6 < 6 );
  return result;
}

//----- (02233DAC) --------------------------------------------------------
int __fastcall Function_2233dac(int a1, int a2, char a3)
{
  int result;

  if ( a3 & 1 )
    result = (8 * *(uint *)(a1 + 16) - Function_2002d7c(1, a2, 0)) / 2;
  else
    result = *(uint *)(a1 + 24);
  return result;
}

//----- (02233DD0) --------------------------------------------------------
int __fastcall Function_2233dd0(int a1, int *a2, char a3)
{
  int *v3;
  int v4;
  char v5;
  int v6;
  int v7;
  int v8;
  ushort *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  char *v14;
  ushort *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int result;
  int v23;
  uint *v24;
  ushort **v25;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  a2[17];
  v6 = *a2;
  if ( !*(uint *)*v3 )
    Function_201a7e8(*(uint **)(a1 + 32), v6, v3[9] & 0xFF, v3[2], v3[3], v3[4], v3[5], 15, v3[8]);
  if ( !(v5 & 2) )
    Function_201ada4_ClearTextBox(*v3, v3[12] & 0xFF);
  if ( v3[13] != -1 )
  {
    v25 = (ushort **)LoadFromMsgNARC(1, 26, 454, 0x4Eu);
    v24 = (uint *)v3[16];
    if ( !v24 )
      v24 = Function_200b358(0x4Eu);
    Function_20237e8(*(uint *)(v4 + 75272), v7);
    v8 = *(uint *)(v4 + 75272);
    v9 = Function_200b1ec_CallMsgDecrypt(v25, v3[13]);
    Function_200c388(v24, *(uint *)(v4 + 75272), (int)v9);
    Function_20237bc_FreeMsg((int)v9, v10);
    Function_2233dac((int)v3, v8, v5);
    v11 = v3[7];
    v12 = v3[11];
    v3[18] = Function_201d78c(*v3, v3[10]);
    if ( !v3[16] )
      Function_200b3f0(v24, v13);
    Function_200b190((ushort *)v25);
    v3[13] = -1;
  }
  v14 = (char *)v3[14];
  if ( v14 )
  {
    v15 = *(ushort **)(v4 + 75276);
    Function_2023d8c(v15, v14, 0x40u);
    Function_2233dac((int)v3, (int)v15, v5);
    v16 = v3[7];
    v17 = v3[11];
    v3[18] = Function_201d78c(*v3, v3[10]);
    v3[14] = 0;
  }
  v18 = v3[15];
  if ( v18 )
  {
    Function_2233dac((int)v3, v18, v5);
    v19 = v3[7];
    v20 = v3[11];
    v21 = v3[15];
    v3[18] = Function_201d78c(*v3, v3[10]);
    v3[15] = 0;
  }
  if ( !(v5 & 4) )
    Function_201a954(*v3, v18);
  result = 8;
  if ( v5 & 8 )
  {
    v23 = *v3;
    if ( v5 & 0x10 )
      result = Function_200e060(v23, 0, 978, 0xDu);
    else
      result = (int)Function_200dc48(v23, 0, 1008, 0xEu);
  }
  return result;
}

//----- (02233F74) --------------------------------------------------------
int Function_2233f74()
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = 20;
  v2 = 2048;
  v3 = 2048;
  v4 = 78;
  Function_201e86c(&v1);
  Function_201f834(20, 0x4Eu);
  Function_201e994();
  return Function_201f8e4();
}

//----- (02233FA4) --------------------------------------------------------
int __fastcall Function_2233fa4(int a1)
{
  int v1;
  int v2;
  int v3;
  int *v4;
  int v5;
  int v6;

  v1 = a1;
  Function_20a7944();
  Function_200a784(0, 126, 0, 32, 0, 0x7Eu, 0, 0x20u, 0x4Eu);
  *(uint *)(v1 + 40) = Function_20095c4(80, v1 + 44, 78, v2);
  Function_200964c(v1 + 44, 0, 0x100000, v3);
  v4 = 0;
  v5 = v1;
  do
  {
    *(uint *)(v5 + 340) = Function_2009714(3, v4, 0x4Eu);
    v4 = (int *)((char *)v4 + 1);
    v5 += 4;
  }
  while ( (int)v4 < 6 );
  *(uint *)(v1 + 364) = Function_200985c(*(uint *)(v1 + 340), 116, 26, 1, 0, 1, 78);
  *(uint *)(v1 + 368) = Function_20098b8(*(uint *)(v1 + 344), 116, 23, 0, 0, 1, 4, 78);
  *(uint *)(v1 + 372) = Function_2009918(*(uint *)(v1 + 348), 116, 25, 1, 0, 2u, 78);
  *(uint *)(v1 + 376) = Function_2009918(*(uint *)(v1 + 352), 116, 24, 1, 0, 3u, 78);
  Function_200a328(*(int **)(v1 + 364));
  Function_200a5c8(*(int **)(v1 + 368));
  v6 = Function_2079fd0();
  return Call_LoadFromNARC_RLCN(19, v6, 1u, 256, 0, 78);
}

//----- (022340B0) --------------------------------------------------------
uint __fastcall Function_22340b0(int *a1)
{
  Function_20093b4((int)(a1 + 97), 0, 0, 0, 0, -1, -1, 0, 0, a1[85], a1[86], a1[87], a1[88], 0, 0);
  return Function_201ff0c(0x10u, 1);
}

//----- (022340FC) --------------------------------------------------------
int __fastcall Function_22340fc(int result, int a2, int a3, int a4)
{
  *(uint *)result = *(uint *)(a2 + 40);
  *(uint *)(result + 4) = a2 + 388;
  *(uint *)(result + 16) = 0;
  *(uint *)(result + 20) = 4096;
  *(uint *)(result + 24) = 4096;
  *(uint *)(result + 28) = 4096;
  *(ushort *)(result + 32) = 0;
  *(uint *)(result + 36) = 20;
  *(uint *)(result + 40) = a4;
  *(uint *)(result + 44) = 78;
  return result;
}

//----- (02234124) --------------------------------------------------------
int __fastcall Function_2234124(int a1, int a2, int a3)
{
  return Function_2236924(*(uint *)(a1 + 59520) + 4 + 2400 * a2 + 80 * a3, 11, 0);
}

//----- (02234148) --------------------------------------------------------
int __fastcall Function_2234148(int a1, int a2, int a3)
{
  return Function_2236924(*(uint *)(a1 + 59520) + 4 + 2400 * a2 + 80 * a3, 45, 0);
}

//----- (0223416C) --------------------------------------------------------
int __fastcall Function_223416c(int a1, int a2, int a3)
{
  return Function_2236924(*(uint *)(a1 + 59520) + 4 + 2400 * a2 + 80 * a3, 0, 0);
}

//----- (02234190) --------------------------------------------------------
uchar *__fastcall Function_2234190(uchar *result, char a2, char a3, int a4, int a5)
{
  *result = a3 - a5 / 2;
  result[2] = a2 - a4 / 2;
  result[1] = a3 + a5 / 2;
  result[3] = a2 + a4 / 2;
  return result;
}

//----- (022341B4) --------------------------------------------------------
int __fastcall Function_22341b4(int a1, int a2, uint *a3, uint a4)
{
  int v4;
  int v5;
  uint *v6;
  int v7;
  int v8;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = malloc2(a4, 4096);
  v8 = v7;
  if ( !v7 )
    return v8;
  LoadFromNARC(v7, v5, v4);
  if ( Function_20a7164(v8, v6) )
    return v8;
  free(v8);
  return 0;
}

//----- (022341EC) --------------------------------------------------------
int __fastcall Function_22341ec(uint a1, uint *a2, int a3, int a4)
{
  uint *v4;
  int v5;

  v4 = a2;
  v5 = a3;
  LoadFileFromNARCFileHandler(a4, a1, a3);
  return Function_20a7164(v5, v4);
}

//----- (02234208) --------------------------------------------------------
int __fastcall Function_2234208(int a1, int a2)
{
  int v2;
  uchar v3;

  v2 = 0;
  if ( a1 == 201 )
  {
    u32_div_f(((a2 & 0x3000000u) >> 18) | ((a2 & 0x30000u) >> 12) | ((a2 & 0x300u) >> 6) | a2 & 3, 28);
    v2 = v3;
  }
  else if ( a1 == 386 )
  {
    switch ( -126 )
    {
      case 3:
        v2 = 3;
        break;
      case 4:
        v2 = 1;
        break;
      case 5:
        v2 = 2;
        break;
      default:
        v2 = 0;
        break;
    }
  }
  return v2;
}

//----- (02234278) --------------------------------------------------------
uint __fastcall Function_2234278(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int v7;
  int v8;
  uint v9;
  int v10;
  int v11;
  int v12;
  int v13;
  char v14;
  int v16;

  v16 = a4;
  v6 = a3;
  v7 = a2;
  v8 = Function_2236dd0();
  v9 = v8;
  v10 = Function_2234208(v8, v6);
  v11 = v10;
  v12 = Function_2079d8c(v9, v7, v10);
  v13 = Function_22341b4(19, v12, &v16, 0x4Eu);
  DC_FlushRange(*(uint *)(v16 + 20), 512);
  GX_LoadOBJ(*(int **)(v16 + 20), 32 * (16 * a5 + 100), 0x200u);
  v14 = Function_2079edc(v9, v11, v7);
  Function_2021e90(a6, v14 + 8);
  return free(v13);
}

//----- (022342E4) --------------------------------------------------------
int __fastcall Function_22342e4(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7;
  int v8;
  uint *v9;
  int v10;
  uint v11;
  uint v12;
  uint v13;
  int result;
  int v15;
  int v16;
  int v17;

  v17 = a4;
  v7 = a2;
  v15 = a3;
  v8 = a4;
  v9 = (uint *)(dword_223F350[57] + 524 * a4);
  v10 = a1;
  if ( a5 )
  {
    if ( Function_2233b18(a1) )
      v11 = 0;
    else
      v11 = Function_2236dd0(v10);
    v12 = Function_2079d8c(v11, v7, v15);
    Function_22341ec(v12, &v16, a6, a7);
    MIi_CpuCopyFast(*(uint **)(v16 + 20), v9 + 3, 0x200u, v13);
    *v9 = 32 * (16 * v8 + 100);
    v9[2] = a5;
    result = Function_2079edc(v11, v15, v7) + 8;
    v9[1] = result;
  }
  else
  {
    result = 0;
    v9[2] = 0;
  }
  return result;
}

//----- (02234364) --------------------------------------------------------
int Function_2234364()
{
  int *v0;
  int v1;
  int result;

  v0 = (int *)dword_223F350[57];
  v1 = 0;
  do
  {
    result = v0[2];
    if ( result )
    {
      DC_FlushRange((int)(v0 + 3), 512);
      GX_LoadOBJ(v0 + 3, *v0, 0x200u);
      result = Function_2021e90(v0[2], v0[1]);
    }
    ++v1;
    v0 += 131;
  }
  while ( v1 < 30 );
  return result;
}

//----- (022343A8) --------------------------------------------------------
int __fastcall Function_22343a8(uint *a1, int a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int v6;
  uint *v7;
  int v8;
  int v9;
  int v11;
  int *v12;
  int v13;
  int v14;
  int v15;

  v5 = a1;
  v12 = LoadFromNARC_8(19, 0x4Eu, a3, a4);
  v6 = 0;
  v13 = malloc2(0x4Eu, 4096);
  v11 = 0;
  v7 = v5;
  do
  {
    if ( Function_2236924(v5[14880] + 4 + 2400 * v5[14881] + v11, 5, 0) )
    {
      v15 = Function_2234124((int)v5, v5[14881], v6);
      v14 = Function_2234148((int)v5, v5[14881], v6);
      v8 = Function_223416c((int)v5, v5[14881], v6);
      v9 = Function_2236dd0(v15);
      v4 = Function_2234208(v9, v8);
      Function_22342e4(v15, v14, v4, v6, v7[106], v13, (int)v12);
      Function_2021cac(v7[106], 1);
      if ( Function_2236924(v5[14880] + 4 + 2400 * v5[14881] + v11, 12, 0) )
        Function_2021cac(v7[107], 1);
      else
        Function_2021cac(v7[107], 0);
    }
    else
    {
      Function_22342e4(v15, v14, v4, v6, 0, v13, (int)v12);
      Function_2021cac(v7[106], 0);
      Function_2021cac(v7[107], 0);
    }
    ++v6;
    v7 += 3;
    v11 += 80;
  }
  while ( v6 < 30 );
  free(v13);
  Call_FS_CloseFile(v12);
  v5[18817] = Function_2234364;
  Function_2234a2c(v5, v5[14881]);
  return Function_22349e0(v5);
}

//----- (02234508) --------------------------------------------------------
int __fastcall Function_2234508(int a1)
{
  int v1;
  int v2;
  uchar *v3;
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  char v9;
  int v10;
  int v11;

  v1 = a1;
  Function_22340fc((int)&v9, v1, v1 + 388, 1);
  v6 = 40;
  v2 = 0;
  v7 = 0;
  v3 = (uchar *)(v1 + 784);
LABEL_2:
  v8 = 0;
  v4 = 28;
  while ( 1 )
  {
    Function_2234190(v3, v4, v6, 28, 28);
    v10 = v4 << 12;
    v11 = v6 << 12;
    if ( !*(uint *)(v1 + 424) )
      *(uint *)(v1 + 424) = Function_2021aa0((uint **)&v9);
    Function_2021cc8(*(uint *)(v1 + 424), 1);
    Function_2021d6c(*(uint *)(v1 + 424), v2 + 10);
    Function_2021e80(*(uint *)(v1 + 424), 1);
    Function_2021cac(*(uint *)(v1 + 424), 1);
    Function_2021f58(*(uint *)(v1 + 424), v2 + 100);
    v10 += 24576;
    v11 += 49152;
    if ( !*(uint *)(v1 + 428) )
      *(uint *)(v1 + 428) = Function_2021aa0((uint **)&v9);
    Function_2021cc8(*(uint *)(v1 + 428), 1);
    Function_2021d6c(*(uint *)(v1 + 428), 0x28u);
    Function_2021e80(*(uint *)(v1 + 428), 1);
    Function_2021cac(*(uint *)(v1 + 428), 0);
    result = Function_2021f58(*(uint *)(v1 + 428), v2++);
    v3 += 4;
    v1 += 12;
    if ( v2 == 30 )
      return result;
    v4 += 40;
    if ( ++v8 >= 6 )
    {
      v6 += 24;
      result = v7 + 1;
      v7 = result;
      if ( result < 5 )
        goto LABEL_2;
      return result;
    }
  }
}

//----- (02234638) --------------------------------------------------------
int __fastcall Function_2234638(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  uint v7;
  int v8;
  char v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v14 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a4;
  Function_22340fc((int)&v10, a1, a1 + 388, 1);
  v11 = v6 << 12;
  v12 = v5 << 12;
  v13 = 10;
  v8 = Function_2021aa0((uint **)&v10);
  Function_2021cc8(v8, 1);
  Function_2021d6c(v8, v7);
  Function_2021e80(v8, 1);
  Function_2021cac(v8, a5);
  return v8;
}

//----- (0223468C) --------------------------------------------------------
int __fastcall Function_223468c(int a1)
{
  int v1;
  int v2;
  int v3;
  uint *v4;
  int result;

  v1 = a1;
  Function_2234190((uchar *)(a1 + 904), 228, 176, 50, 32);
  *(uint *)(v1 + 920) = Function_2234638(v1, 228, 176, 6, 1);
  Function_2234190((uchar *)(v1 + 912), 176, 176, 32, 32);
  *(uint *)(v1 + 936) = Function_2234638(v1, 176, 176, 3, 1);
  Function_2234190((uchar *)(v1 + 908), 24, 176, 32, 32);
  *(uint *)(v1 + 952) = Function_2234638(v1, 24, 176, 0, 1);
  v2 = 0;
  *(uchar *)(v1 + 916) = -1;
  v3 = 0;
  v4 = (uint *)v1;
  do
  {
    v4[242] = Function_2234638(v1, v3, 64, 9, 0);
    v4[243] = -1;
    v4[244] = 14;
    ++v2;
    v3 += 36;
    v4 += 3;
  }
  while ( v2 < 6 );
  result = 1040;
  *(uint *)(v1 + 1040) = 0;
  return result;
}

//----- (0223474C) --------------------------------------------------------
BOOL __fastcall Function_223474c(int a1, int a2)
{
  return Function_2236924(*(uint *)(a1 + 59520) + 4 + 2400 * *(uint *)(a1 + 59524) + 80 * a2, 65, 0) == 412;
}

//----- (02234784) --------------------------------------------------------
int __fastcall Function_2234784(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int *v6;
  uint v7;

  v2 = 0;
  v3 = *(uint *)(a1 + 59520) + 4 + 2400 * *(uint *)(a1 + 59524);
  v4 = 80 * a2;
  do
  {
    v5 = Function_2236924(v3 + v4, v2 + 13, 0);
    v6 = &dword_223EA98;
    v7 = 0;
    do
    {
      if ( v5 == *v6 )
        return 1;
      ++v7;
      ++v6;
    }
    while ( v7 < 8 );
    ++v2;
  }
  while ( v2 < 4 );
  return 0;
}

//----- (022347D8) --------------------------------------------------------
int __fastcall Function_22347d8(int a1, int a2)
{
  int v2;
  short *v3;

  v2 = Function_2236924(*(uint *)(a1 + 59520) + 4 + 2400 * *(uint *)(a1 + 59524) + 80 * a2, 12, 0);
  v3 = &word_223EAD8;
  do
  {
    if ( v2 == (ushort)*v3 )
      return 1;
    ++v3;
  }
  while ( *v3 );
  return 0;
}

//----- (02234828) --------------------------------------------------------
BOOL __fastcall Function_2234828(int a1, int a2)
{
  int v2;

  v2 = Function_2236924(*(uint *)(a1 + 59520) + 4 + 2400 * *(uint *)(a1 + 59524) + 80 * a2, 11, 0);
  return Function_2233b18(v2);
}

//----- (02234854) --------------------------------------------------------
int __fastcall Function_2234854(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int *v12;
  int v13;
  int *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;

  v2 = a1;
  v17 = a1 + 424;
  v3 = a2;
  v18 = 12 * a2;
  v4 = *(uint *)(a1 + 424 + 12 * a2);
  if ( v4 && !Function_2021d34(v4) )
    return 3;
  v6 = -1;
  v7 = 0;
  v8 = v2;
  while ( v6 == -1 && v7 < 6 )
  {
    if ( *(uint *)(v2 + 59524) == *(uint *)(v8 + 976) && v3 == *(uint *)(v8 + 972) )
      v6 = v7;
    v8 += 12;
    ++v7;
  }
  if ( Function_223474c(v2, v3) == 1 )
    return 4;
  if ( Function_2234784(v2, v3) == 1 )
    return 5;
  if ( Function_22347d8(v2, v3) == 1 )
    return 6;
  if ( Function_2234828(v2, v3) == 1 )
    return 7;
  if ( v6 == -1 )
  {
    if ( *(uint *)(v2 + 1040) == 6 )
    {
      result = 0;
    }
    else
    {
      v9 = 0;
      v10 = v2;
      do
      {
        if ( *(uint *)(v10 + 972) == -1 )
        {
          v11 = *(uint *)(v17 + v18);
          Function_2021d28();
          Function_2021c50(*(uint **)(v2 + 968 + 12 * v9), v12);
          v13 = *(uint *)(v2 + 968 + 12 * v9);
          Function_2021d28();
          v15 = v14[1];
          v19 = *v14;
          v20 = v15;
          v21 = v14[2];
          v19 -= 0x8000;
          v20 = v15 - 0x4000;
          Function_2021c50(*(uint **)(v2 + 968 + 12 * v9), &v19);
          Function_2021cac(*(uint *)(v2 + 968 + 12 * v9), 1);
          v16 = v2 + 12 * v9;
          *(uint *)(v16 + 972) = v3;
          *(uint *)(v16 + 976) = *(uint *)(v2 + 59524);
          ++*(uint *)(v2 + 1040);
          return 1;
        }
        ++v9;
        v10 += 12;
      }
      while ( v9 < 6 );
      result = 0;
    }
  }
  else
  {
    Function_2021cac(*(uint *)(v2 + 12 * v6 + 968), 0);
    *(uint *)(v2 + 12 * v6 + 972) = -1;
    --*(uint *)(v2 + 1040);
    result = 2;
  }
  return result;
}

//----- (022349E0) --------------------------------------------------------
uint __fastcall Function_22349e0(uint *a1)
{
  uint *v1;
  int v2;
  uint *v3;
  uint result;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    if ( v3[243] == -1 || v1[14881] != v3[244] )
      result = Function_2021cac(v3[242], 0);
    else
      result = Function_2021cac(v3[242], 1);
    ++v2;
    v3 += 3;
  }
  while ( v2 < 6 );
  return result;
}

//----- (02234A2C) --------------------------------------------------------
int __fastcall Function_2234a2c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int *v6;
  int v7;
  uint *v8;
  int v9;
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
  char *v24;
  int v25;

  v25 = a4;
  v4 = a1;
  v5 = a2;
  v6 = &v12;
  v7 = 4;
  do
  {
    *v6 = 0;
    v6[1] = 0;
    v8 = v6 + 2;
    *v8 = 0;
    v8[1] = 0;
    v6 = v8 + 2;
    --v7;
  }
  while ( v7 );
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v12 = a1 + 1144;
  v13 = 6;
  v14 = 21;
  v15 = 13;
  v16 = 2;
  v23 = -1;
  v17 = 0;
  v18 = 0;
  v20 = 1;
  v21 = 1;
  v22 = 66048;
  v19 = 160;
  v9 = Function_2235dbc();
  Function_223936c(*(uint *)(v4 + 59520) + 33604 + 9 * v5, &v11, 9, v9);
  v24 = &v11;
  return Function_2233dd0(v4, &v12, 1);
}

//----- (02234AB4) --------------------------------------------------------
int __fastcall Function_2234ab4(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  short v7;

  v2 = a1;
  v3 = a2;
  v4 = Function_2019fe4(*(uint *)(a1 + 32), 2);
  if ( v3 )
    v5 = Function_2236924(v3, 8, 0) & 0xFF;
  else
    v5 = 0;
  v6 = 0;
  do
  {
    if ( v5 & 1 )
      v7 = v6 + 128;
    else
      v7 = v6 + 96;
    ++v6;
    *(ushort *)(v4 + 214) = v7;
    v5 = (uint)(v5 << 23) >> 24;
    v4 += 2;
  }
  while ( v6 < 4 );
  return Function_2019448(*(uint **)(v2 + 32), 2u);
}

//----- (02234B0C) --------------------------------------------------------
int __fastcall Function_2234b0c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int *v6;
  int v7;
  uint *v8;
  int v9;
  int v11;
  ushort *v12;
  ushort **v13;
  int v14;
  int v15;
  int v16;
  ushort v17;
  ushort *v18;
  int v19;
  int v20;
  ushort *v21;
  int v22;
  uint v23;
  char v24;
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
  char *v38;
  ushort *v39;
  int v40;

  v40 = a4;
  v4 = a1;
  v5 = a2;
  v6 = &v26;
  v7 = 4;
  do
  {
    *v6 = 0;
    v6[1] = 0;
    v8 = v6 + 2;
    *v8 = 0;
    v8[1] = 0;
    v6 = v8 + 2;
    --v7;
  }
  while ( v7 );
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v29 = 32;
  v34 = 1;
  v35 = 1;
  v33 = 188;
  v36 = 983552;
  v26 = a1 + 1160;
  v37 = 44;
  v31 = 144;
  v27 = 0;
  v28 = 0;
  v38 = 0;
  v32 = 0;
  v30 = 4;
  Function_2233dd0(a1, &v26, 4);
  v37 = 43;
  v31 = 80;
  v32 = 8;
  Function_2233dd0(v4, &v26, 6);
  Function_2234ab4(v4, v5);
  if ( !v5 )
    return Function_201a954(v26, v9);
  Function_2236924(v5, 2, &v25);
  v11 = Function_2236924(v5, 3, 0);
  Function_223936c(&v25, &v24, 11, v11);
  v38 = &v24;
  v37 = -1;
  v31 = 8;
  v32 = 0;
  Function_2233dd0(v4, &v26, 6);
  v12 = (ushort *)Function_2023790(64, 0x4Eu);
  v13 = (ushort **)LoadFromMsgNARC(1, 26, 412, 0x4Eu);
  v14 = Function_2236924(v5, 11, 0);
  v23 = Function_2236dd0(v14);
  Function_200b1b8_CallMsgDecrypt(v13, v23, v12);
  v37 = -1;
  v31 = 16;
  v32 = 16;
  v39 = v12;
  Function_2233dd0(v4, &v26, 6);
  Function_200b190((ushort *)v13);
  Function_20237bc_FreeMsg((int)v12, v15);
  v16 = Function_2236924(v5, 12, 0);
  if ( v16 )
  {
    v17 = Function_207cf10((ushort)v16);
    v18 = (ushort *)Function_2023790(64, 0x4Eu);
    Function_207cfa0(v18, v17, 0x4Eu);
    v37 = -1;
    v31 = 152;
    v32 = 16;
    v39 = v18;
    Function_2233dd0(v4, &v26, 6);
    Function_20237bc_FreeMsg((int)v18, v19);
  }
  v20 = Function_2236e00(v5);
  v21 = (ushort *)Function_2023790(10, 0x4Eu);
  Function_20238a0(v21, v20, 3, 1, 1);
  v37 = -1;
  v31 = 100;
  v32 = 8;
  v39 = v21;
  Function_2233dd0(v4, &v26, 2);
  Function_20237bc_FreeMsg((int)v21, v22);
  return Function_2005844((ushort)v23, 0);
}

//----- (02234CC4) --------------------------------------------------------
int *__fastcall Function_2234cc4(int a1, int a2, int a3, uint *a4)
{
  int v4;
  int v5;
  uint *v6;
  int *result;

  v4 = a1;
  v5 = a3;
  v6 = a4;
  result = Function_200f174(0, a2, a2, 0, 6, 1, 78);
  if ( v6 )
  {
    result = (int *)23;
    *v6 = 23;
  }
  *(uint *)(v4 + 36) = v5;
  return result;
}

//----- (02234CF4) --------------------------------------------------------
int *__fastcall Function_2234cf4(int a1, int a2, int a3, uint *a4)
{
  int v4;
  uint *v5;
  int v6;
  int *result;

  v4 = a1;
  v5 = a4;
  v6 = a3;
  result = Function_200f174(0, a2, a2, 0x7FFF, 6, 1, 78);
  if ( v5 )
  {
    result = (int *)23;
    *v5 = 23;
  }
  *(uint *)(v4 + 36) = v6;
  return result;
}

//----- (02234D28) --------------------------------------------------------
int __fastcall Function_2234d28(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
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
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;

  v38 = a4;
  v4 = a1;
  v34 = 1;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  SetGraphicsModes(&v34);
  v27 = 0;
  v28 = 0;
  v29 = 2048;
  v30 = 0;
  v31 = 1835009;
  v32 = 0;
  v33 = 0;
  Function_20183c4(v4, 0, &v27, 0);
  Function_2019ebc(v4, 0);
  v20 = 0;
  v21 = 0;
  v22 = 2048;
  v23 = 0;
  v24 = 35454977;
  v25 = 256;
  v26 = 0;
  Function_20183c4(v4, 1u, &v20, 0);
  Function_2019ebc(v4, 1u);
  v13 = 0;
  v14 = 0;
  v15 = 2048;
  v16 = 0;
  v17 = 35520513;
  v18 = 513;
  v19 = 0;
  Function_20183c4(v4, 2u, &v13, 0);
  Function_2019ebc(v4, 2u);
  v6 = 0;
  v7 = 0;
  v8 = 2048;
  v9 = 0;
  v10 = 35586049;
  v11 = 769;
  v12 = 0;
  Function_20183c4(v4, 3u, &v6, 0);
  return Function_2019ebc(v4, 3u);
}

//----- (02234DFC) --------------------------------------------------------
uint *__fastcall Function_2234dfc(int a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  char *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  char v14;
  int v15;

  v15 = a4;
  v4 = dword_223D904;
  v5 = a1;
  v6 = &v14;
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
  GX_SetBanks((int *)&v14);
  Function_2234d28(*(uint **)(v5 + 32), v10, v11, v12);
  byte_21BF6E1 = 1;
  Function_201ffe8();
  Function_201d710();
  LoadFromNARC_PlFont1(0, 480, 78);
  Call_LoadFromNARC_RLCN(116, 19, 0, 0, 192, 78);
  LoadFromNARC_RGCN(116, 22, *(uint **)(v5 + 32), 2u, 0, 5120, 1, 78);
  return Function_2002bb8(2, 0x4Eu);
}

//----- (02234E7C) --------------------------------------------------------
int __fastcall Function_2234e7c(int a1)
{
  uint *v1;

  v1 = (uint *)a1;
  LoadFromNARC_RCSN(116, 20, *(uint **)(a1 + 32), 2u, 0, 1536, 1, 78);
  Function_2019e2c(v1[8], 2, 0, 0, 0x20u, 0x18u, *((uchar *)dword_223EA60 + *v1));
  return Function_2019448((uint *)v1[8], 2u);
}

//----- (02234ECC) --------------------------------------------------------
int __fastcall Function_2234ecc(int a1)
{
  int v1;
  int result;

  v1 = a1;
  LoadFromNARC_PlFont1(0, 448, 78);
  Function_200daa4(*(uint **)(v1 + 32), 0, 1008, 14, 0, 78);
  Function_200dd0c(*(uint **)(v1 + 32), 0, 978, 13, *(uint *)(v1 + 28), 78);
  Call_FillMemWithValue((int *)(v1 + 1068), 0, 0x4Cu);
  *(uint *)(v1 + 1068) = v1 + 1176;
  *(uint *)(v1 + 1076) = 2;
  *(uint *)(v1 + 1080) = 1;
  *(uint *)(v1 + 1084) = 27;
  *(uint *)(v1 + 1088) = 4;
  *(uint *)(v1 + 1104) = 0;
  *(uint *)(v1 + 1108) = 1;
  *(uint *)(v1 + 1100) = 1;
  *(uint *)(v1 + 1112) = 66063;
  *(uint *)(v1 + 1116) = 983567;
  *(uint *)(v1 + 1124) = 0;
  result = 1128;
  *(uint *)(v1 + 1128) = 0;
  return result;
}

//----- (02234F88) --------------------------------------------------------
int __fastcall Function_2234f88(int a1)
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
  int v13;
  char v14;
  int v15;
  int v16;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    Function_2021cac(*(uint *)(v3 + 424), 0);
    Function_2021cac(*(uint *)(v3 + 428), 0);
    ++v2;
    v3 += 12;
  }
  while ( v2 < 30 );
  v4 = 0;
  v5 = v1;
  do
  {
    Function_2021cac(*(uint *)(v5 + 968), 0);
    ++v4;
    v5 += 12;
  }
  while ( v4 < 6 );
  Function_2021cac(*(uint *)(v1 + 920), 0);
  Function_2021cac(*(uint *)(v1 + 952), 0);
  Function_2021cac(*(uint *)(v1 + 936), 0);
  Function_22340fc((int)&v14, v1, v1 + 388, 1);
  v6 = 0;
  v13 = 28;
  v7 = v1;
  v8 = v1;
  do
  {
    v15 = v13 << 12;
    v16 = 581632;
    *(uint *)(v7 + 1044) = Function_2021aa0((uint **)&v14);
    Function_2021cc8(*(uint *)(v7 + 1044), 1);
    Function_2021d6c(*(uint *)(v7 + 1044), v6 + 10);
    Function_2021e80(*(uint *)(v7 + 1044), 1);
    Function_2021cac(*(uint *)(v7 + 1044), 1);
    v9 = Function_2234124(v1, *(uint *)(v8 + 976), *(uint *)(v8 + 972));
    v10 = Function_2234148(v1, *(uint *)(v8 + 976), *(uint *)(v8 + 972));
    v11 = Function_223416c(v1, *(uint *)(v8 + 976), *(uint *)(v8 + 972));
    Function_2234278(v9, v10, v11, (uchar)byte_21BF6E2, v6++, *(uint *)(v7 + 1044));
    v13 += 40;
    v7 += 4;
    v8 += 12;
  }
  while ( v6 < 6 );
  LoadFromNARC_RCSN(116, 21, *(uint **)(v1 + 32), 2u, 0, 1536, 1, 78);
  Function_2019e2c(*(uint *)(v1 + 32), 2, 0, 0, 0x20u, 0x18u, *((uchar *)dword_223EA60 + *(uint *)v1));
  Function_2019448(*(uint **)(v1 + 32), 2u);
  Function_201ff0c(2u, 0);
  LoadFromNARC_PlFont1(0, 448, 78);
  Function_200daa4(*(uint **)(v1 + 32), 0, 1008, 14, 0, 78);
  Function_200dd0c(*(uint **)(v1 + 32), 0, 978, 13, *(uint *)(v1 + 28), 78);
  Function_2234ecc(v1);
  *(uint *)(v1 + 1120) = 10;
  return Function_2233dd0(v1, (int *)(v1 + 1068), 24);
}

//----- (02235158) --------------------------------------------------------
uint *__fastcall Function_2235158(uint *result)
{
  int v1;

  v1 = (int)result;
  if ( *result )
  {
    Function_200e084((int)result, 0);
    Function_201acf4(v1);
    result = (uint *)Function_201a8fc(v1);
  }
  return result;
}

//----- (02235178) --------------------------------------------------------
int __fastcall Function_2235178(uint *a1)
{
  uint *v1;
  int v2;
  uint *v3;
  int v4;
  uint *v5;
  int result;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    Function_2021bd4(v3[261]);
    ++v2;
    ++v3;
  }
  while ( v2 < 6 );
  Function_201ff0c(2u, 1);
  Function_2235158(v1 + 294);
  Function_2021cac(v1[230], 1);
  Function_2021cac(v1[238], 1);
  Function_2021cac(v1[234], 1);
  v4 = 0;
  v5 = v1;
  do
  {
    v5[243] = -1;
    v5[244] = 14;
    ++v4;
    v5 += 3;
  }
  while ( v4 < 6 );
  result = 1040;
  v1[260] = 0;
  return result;
}

//----- (022351F0) --------------------------------------------------------
int __fastcall Function_22351f0(int a1)
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

  v1 = a1;
  SetMainLoopFunctionCall(0, 0);
  v2 = 0;
  v3 = v1;
  do
  {
    v4 = *(uint *)(v3 + 424);
    if ( v4 )
      Function_2021bd4(v4);
    v5 = *(uint *)(v3 + 428);
    if ( v5 )
      Function_2021bd4(v5);
    ++v2;
    v3 += 12;
  }
  while ( v2 < 30 );
  v6 = 0;
  v7 = v1;
  do
  {
    v8 = *(uint *)(v7 + 968);
    if ( v8 )
      Function_2021bd4(v8);
    ++v6;
    v7 += 12;
  }
  while ( v6 < 6 );
  v9 = *(uint *)(v1 + 920);
  if ( v9 )
    Function_2021bd4(v9);
  v10 = *(uint *)(v1 + 952);
  if ( v10 )
    Function_2021bd4(v10);
  v11 = *(uint *)(v1 + 936);
  if ( v11 )
    Function_2021bd4(v11);
  Function_2235158((uint *)(v1 + 1144));
  Function_2235158((uint *)(v1 + 1160));
  Function_2235158((uint *)(v1 + 1176));
  Function_2002c60(2);
  Function_200a4e4(*(int **)(v1 + 364));
  Function_200a6dc(*(int **)(v1 + 368));
  v12 = 0;
  v13 = v1;
  do
  {
    Function_2009754(*(int **)(v13 + 340));
    ++v12;
    v13 += 4;
  }
  while ( v12 < 6 );
  Function_2021964(*(int **)(v1 + 40));
  *(uint *)(v1 + 40) = 0;
  Function_200a878();
  Function_201e958();
  Function_201f8b4();
  Function_2015938(*(uint *)(v1 + 59532));
  byte_21BF6E1 = 0;
  Function_201ffe8();
  Function_2019044(*(uint *)(v1 + 32), 0);
  Function_2019044(*(uint *)(v1 + 32), 1);
  Function_2019044(*(uint *)(v1 + 32), 2);
  return Function_2019044(*(uint *)(v1 + 32), 3);
}

//----- (02235310) --------------------------------------------------------
int __fastcall Function_2235310(int a1)
{
  int v2;
  int v3;
  int v4;
  int v5;
  char v6;
  char v7;

  v2 = *(uint *)(a1 + 32);
  v3 = 0;
  v4 = 512;
  v5 = 8;
  v6 = 25;
  v7 = 7;
  return Function_2015958(*(uint *)(a1 + 59532), (int)&v2);
}

//----- (02235344) --------------------------------------------------------
int __fastcall Function_2235344(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int *v4;
  ushort *v5;
  int v6;
  int v7;
  char v9;

  v1 = a1;
  v2 = Function_2236378();
  v3 = Function_2235dbc();
  Function_223936c(v2, &v9, 8, v3);
  v4 = (int *)Function_200b358(0x4Eu);
  v5 = (ushort *)Function_2023790(8, 0x4Eu);
  Function_2023d28(v5, (ushort *)&v9);
  Function_200b48c(v4, 1u, (int)v5);
  Function_2234ecc((int)v1);
  v1[280] = dword_223EA80[*v1];
  v1[283] = v4;
  Function_2233dd0((int)v1, v1 + 267, 24);
  Function_20237bc_FreeMsg((int)v5, v6);
  Function_200b3f0((uint *)v4, v7);
  return Function_2235310((int)v1);
}

//----- (022353CC) --------------------------------------------------------
int __fastcall Function_22353cc(int a1)
{
  int v1;
  void (*v2)(void);
  int result;

  v1 = a1;
  v2 = *(void (**)(void))(a1 + 75268);
  if ( v2 )
  {
    v2();
    *(uint *)(v1 + 75268) = 0;
  }
  Function_201dcac();
  Function_200a858();
  Function_201c2b8(*(uint *)(v1 + 32));
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (02235408) --------------------------------------------------------
int __fastcall Function_2235408(int a1)
{
  int v1;
  int v2;
  uint v3;
  BOOL v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int *v14;

  v12 = a1;
  v14 = (int *)LoadVariableAreaAdress_20(*(uint *)(a1 + 16));
  if ( Function_202f0e0((int)v14) )
    goto LABEL_24;
  if ( !Function_202f088((int)v14, v1, v2, v3) )
    return 3;
  v5 = Function_202f0bc((int)v14);
  if ( !v5 )
    return 4;
  v6 = Function_223635c(v5);
  v7 = Function_202f050((int)v14, v6);
  if ( !v7 )
    v7 = 172800;
  if ( v7 < 86400 )
    return 2;
LABEL_24:
  v8 = 0;
  v13 = 0;
  v9 = 0;
  do
  {
    v10 = 0;
    v11 = 0;
    do
    {
      if ( Function_2236924(*(uint *)(v12 + 59520) + 4 + v9 + v11, 5, 0) )
        ++v8;
      ++v10;
      v11 += 80;
    }
    while ( v10 < 30 );
    v9 += 2400;
    ++v13;
  }
  while ( v13 < 14 );
  if ( v8 < 6 )
    return 5;
  if ( Function_202f028(v14) )
    return 6;
  return 0;
}

//----- (022354C4) --------------------------------------------------------
int __fastcall Function_22354c4(int a1, int a2)
{
  uint *v2;
  int v3;

  v2 = (uint *)a1;
  v3 = a2;
  if ( *(uint *)(a1 + 4) )
  {
    Function_2234ecc(a1);
    Function_2002b20(1u);
    v2[280] = dword_223EAB8[v3];
    v2[284] = 1;
    Function_2233dd0((int)v2, v2 + 267, 24);
    v2[1] = 0;
  }
  else if ( !Function_201d724(*(uint *)(a1 + 1140) & 0xFF) )
  {
    Function_2002b20(0);
    return 1;
  }
  return 0;
}

//----- (02235528) --------------------------------------------------------
int __fastcall Function_2235528(int a1, int a2)
{
  uint *v2;
  int v3;

  v2 = (uint *)a1;
  v3 = a2;
  if ( *(uint *)(a1 + 4) )
  {
    Function_2234ecc(a1);
    Function_2002b20(1u);
    v2[280] = dword_223EAB8[v3];
    v2[284] = 1;
    Function_2233dd0((int)v2, v2 + 267, 24);
    v2[1] = 0;
  }
  else if ( !Function_201d724(*(uint *)(a1 + 1140) & 0xFF) )
  {
    Function_2235310((int)v2);
    Function_2002b20(0);
    return 1;
  }
  return 0;
}

//----- (02235590) --------------------------------------------------------
int __fastcall Function_2235590(int a1, int a2)
{
  uint *v2;
  int v3;

  v2 = (uint *)a1;
  v3 = a2;
  if ( *(uint *)(a1 + 8) == -1 )
  {
    if ( a2 )
    {
      if ( !Function_201d724(*(uint *)(a1 + 1140) & 0xFF) )
      {
        Function_2002b20(0);
        return 1;
      }
    }
    else if ( word_21BF6DC || dword_21BF6C4 )
    {
      Function_2002b20(0);
      Function_2005748(0x5DCu);
      return 1;
    }
  }
  else
  {
    Function_2234ecc(a1);
    Function_2002b20(1u);
    v2[280] = v2[2];
    v2[284] = v3;
    Function_2233dd0((int)v2, v2 + 267, 24);
    v2[2] = -1;
    Function_2005748(0x5DCu);
  }
  return 0;
}

//----- (02235624) --------------------------------------------------------
int __fastcall Function_2235624(int a1)
{
  int v1;
  int *v2;
  int v3;
  ushort *v4;
  short *v5;

  v1 = a1;
  Function_2017fc8(3, 78, 229376);
  v2 = (int *)MallocSomeDataAndStorePtrInOverlayData1c(v1, 75280, 0x4Eu);
  Call_FillMemWithValue(v2, 0, 0x12610u);
  v2[8] = Function_2018340(0x4Eu);
  v2[14883] = (int)Function_2015920(0x4Eu);
  SetBrightnessWithValue(0, 0);
  SetBrightnessWithValue(1, 0);
  v3 = *(uint *)(LoadPtrToOverWorldDataIn18(v1) + 8);
  v2[4] = v3;
  v2[5] = LoadTrainerDataAdress(v3);
  v4 = (ushort *)LoadPlayerDataAdress(v2[4]);
  v2[6] = (int)v4;
  v2[7] = Function_2027b50(v4);
  v2[18818] = Function_2023790(256, 0x4Eu);
  v2[18819] = Function_2023790(256, 0x4Eu);
  Function_2004550(9u, 0x496u);
  v5 = (short *)Function_20c3808();
  if ( !v5 )
    v5 = OS_InitTick();
  Function_2238440(v5);
  dword_223F350[57] = (int)(v2 + 14887);
  return 1;
}

//----- (022356E8) --------------------------------------------------------
void __fastcall Function_22356e8(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = LoadOverlayData1c(a1);
  CTRDG_IsExisting();
  CTRDG_IsPulledOut();
  if ( (uint)(*(uint *)(v1 + 59536) - 3) <= 1 )
    Function_2024850(*(uint *)(v1 + 16));
  Function_209a8e0(0x4Eu, v2, v3, v4);
}

//----- (02235CC8) --------------------------------------------------------
int __fastcall Function_2235cc8(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = (int *)LoadOverlayData1c(a1);
  Function_20237bc_FreeMsg(v2[18818], v3);
  Function_20237bc_FreeMsg(v2[18819], v4);
  free(v2[8]);
  SetOverlayJumpTableDataToLoad(77, (int)dword_21D742C);
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(78);
  Function_2238400(0);
  return 1;
}

//----- (02235D18) --------------------------------------------------------
BOOL Function_2235d18()
{
  return Function_20d130c(1u) == 0;
}

//----- (02235D2C) --------------------------------------------------------
int __fastcall Function_2235d2c(int a1)
{
  int result;

  dword_223F350[60] = a1;
  result = Function_2235dc8("AXVJ", 30);
  if ( !result )
  {
    if ( MEMORY[4] )
    {
      Function_20d0cdc((int *)0x8000100, &dword_223F350[64], 0xFCu);
    }
    else
    {
      dword_223F350[98] = 2192;
      dword_223F350[99] = 15040;
      dword_223F350[84] = 4640;
      dword_223F350[102] = 9;
    }
    if ( Function_2235d18() )
      result = 0;
    else
      result = 3;
  }
  return result;
}

//----- (02235DA4) --------------------------------------------------------
void **Function_2235da4()
{
  void **result;

  result = &off_223EBFC;
  off_223EBFC = 0;
  return result;
}

//----- (02235DB0) --------------------------------------------------------
int Function_2235db0()
{
  return MEMORY[5];
}

//----- (02235DBC) --------------------------------------------------------
int Function_2235dbc()
{
  return MEMORY[6];
}

//----- (02235DC8) --------------------------------------------------------
int __fastcall Function_2235dc8(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v7;
  int v8;
  uint *v9;
  int v18;

  v18 = a4;
  v4 = a1;
  v5 = a2;
  off_223EBFC = 0;
  if ( !Function_20d08c0() )
    return 1;
  v7 = Function_20d0928();
  v8 = 0;
  if ( v5 > 0 )
  {
    v9 = v4;
    while ( v7 != *v9 )
    {
      ++v8;
      v9 += 2;
      if ( v8 >= v5 )
        return 2;
    }
    off_223EBFC = &v4[2 * v8];
  }
  return 2;
}

//----- (02235E7C) --------------------------------------------------------
int __fastcall Function_2235e7c(int *a1, uint a2)
{
  uint v2;
  int v3;
  int i;
  int v5;

  v2 = 0;
  v3 = a2 >> 2;
  for ( i = 0; i < v3; i = (i + 1) & 0xFFFF )
  {
    v5 = *a1;
    ++a1;
    v2 += v5;
  }
  return ((v2 >> 16) + (ushort)v2) & 0xFFFF;
}

//----- (02235EAC) --------------------------------------------------------
int __fastcall Function_2235eac(short a1, int a2)
{
  return CTRDG_ReadAgbFlash(a1, 0, a2, 4096);
}

//----- (02235EC0) --------------------------------------------------------
int __fastcall Function_2235ec0(int a1)
{
  switch ( a1 )
  {
    case 0:
      return LOWORD(dword_223F350[98]);
    case 4:
      return (dword_223F350[99] - 11904) & 0xFFFF;
    case 13:
      return 2000;
  }
  return 3968;
}

//----- (02235EF8) --------------------------------------------------------
int __fastcall Function_2235ef8(int a1)
{
  if ( !a1 )
    return dword_223F350[60] + 4096;
  if ( a1 >= 1 && a1 <= 4 )
    return dword_223F350[60] + 0x2000 + 3968 * (a1 - 1);
  if ( a1 < 5 || a1 >= 14 )
    return 0;
  return dword_223F350[60] + 24576 + 3968 * (a1 - 5);
}

//----- (02235F4C) --------------------------------------------------------
int __fastcall Function_2235f4c(short a1, int a2, uint *a3)
{
  int v3;
  int v4;
  int v5;
  short v6;
  short v7;
  int v8;
  uint *v10;
  int v11;

  v3 = 0;
  v4 = a2;
  v11 = 0;
  *a3 = 0;
  dword_223F350[59] = 0;
  v10 = a3;
  v5 = LOBYTE(dword_223F350[59]);
  v6 = 14 * a1;
  do
  {
    s32_div_f(v5, 14);
    Function_2235eac(v7 + v6, v4);
    DC_FlushRange(v4, 4096);
    if ( *(uint *)(v4 + 4088) == 134291493 )
    {
      v11 = 1;
      v8 = Function_2235ec0(*(ushort *)(v4 + 4084));
      if ( *(ushort *)(v4 + 4086) == Function_2235e7c((int *)v4, v8) )
      {
        *v10 = *(uint *)(v4 + 4092);
        v3 |= 1 << *(ushort *)(v4 + 4084);
      }
    }
    ++v5;
  }
  while ( v5 < 14 );
  if ( !v11 )
    return 0;
  if ( v3 == 0x3FFF )
    return 1;
  return 255;
}

//----- (02235FFC) --------------------------------------------------------
int __fastcall Function_2235ffc(int a1, uint *a2, uint *a3, int a4)
{
  int v4;
  uint *v5;
  uint *v6;
  int v7;
  int v8;
  uint v9;
  int result;
  uint v11;
  uint v12;
  int v13;

  v13 = a4;
  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = Function_2235f4c(0, a1, &v12);
  v8 = Function_2235f4c(1, v4, &v11);
  if ( v7 != 1 || v8 != 1 )
  {
    if ( v7 != 1 || v8 == 1 )
    {
      if ( v8 != 1 || v7 == 1 )
      {
        if ( v7 || v8 )
        {
          *v6 = 0;
          *v5 = 0;
          result = 2;
        }
        else
        {
          result = 0;
          *v6 = 0;
          *v5 = 0;
        }
      }
      else
      {
        *v6 = v11;
        if ( v7 == 255 )
        {
          *v5 = 1;
          result = 255;
        }
        else
        {
          result = 1;
          *v5 = 1;
        }
      }
    }
    else
    {
      *v6 = v12;
      if ( v8 == 255 )
      {
        *v5 = 0;
        result = 255;
      }
      else
      {
        *v5 = 0;
        result = 1;
      }
    }
  }
  else
  {
    if ( (v12 != -1 || (v9 = v11) != 0) && (v12 || (v9 = v11, v11 != -1)) )
    {
      if ( v12 >= v11 )
      {
        *v6 = v12;
        *v5 = 0;
      }
      else
      {
        *v6 = v11;
        *v5 = 1;
      }
    }
    else if ( v12 + 1 >= v9 + 1 )
    {
      *v6 = v12;
      *v5 = 0;
    }
    else
    {
      *v6 = v9;
      *v5 = 1;
    }
    result = 1;
  }
  return result;
}

//----- (022360D8) --------------------------------------------------------
int __fastcall Function_22360d8(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint *v11;

  v4 = Function_2235ffc(dword_223F350[60], &dword_223F350[58], (uint *)&dword_223F350[62], a4);
  if ( v4 != 1 )
  {
    switch ( v4 )
    {
      case 0:
        return 7;
      case 2:
        return 6;
      case 255:
        return 5;
    }
  }
  if ( dword_223F350[58] > 1u )
    return 6;
  v6 = 0;
  v7 = 0;
  do
  {
    Function_2235eac(v7 + 14 * LOWORD(dword_223F350[58]), dword_223F350[60]);
    if ( *(uint *)(dword_223F350[60] + 4088) == 134291493 )
    {
      v8 = Function_2235ec0(*(ushort *)(dword_223F350[60] + 4084));
      if ( *(ushort *)(dword_223F350[60] + 4086) == Function_2235e7c((int *)dword_223F350[60], v8) )
      {
        dword_223F350[62] = *(uint *)(dword_223F350[60] + 4092);
        v9 = *(ushort *)(dword_223F350[60] + 4084);
        v6 |= 1 << v9;
        v10 = Function_2235ec0(v9);
        v11 = (uint *)Function_2235ef8(*(ushort *)(dword_223F350[60] + 4084));
        MI_CpuCopy32((int *)dword_223F350[60], v11, v10);
        if ( !*(ushort *)(dword_223F350[60] + 4084) )
          dword_223F350[61] = v7;
      }
    }
    ++v7;
  }
  while ( v7 < 14 );
  if ( v6 == 0x3FFF )
    result = 0;
  else
    result = 4;
  return result;
}

//----- (022361B0) --------------------------------------------------------
uint __fastcall Function_22361b0(int a1)
{
  int v1;
  int v2;
  int *v3;
  int v4;
  short v5;

  v1 = a1;
  dword_223F350[63] = 1;
  MIi_CpuClear32(0, (uint *)dword_223F350[60], 4096);
  v2 = Function_2235ec0(v1);
  v3 = (int *)Function_2235ef8(v1);
  MI_CpuCopy32(v3, (uint *)dword_223F350[60], v2);
  *(uint *)(dword_223F350[60] + 4092) = dword_223F350[62];
  *(ushort *)(dword_223F350[60] + 4084) = v1;
  *(uint *)(dword_223F350[60] + 4088) = 134291493;
  v4 = Function_2235ec0(v1);
  *(ushort *)(dword_223F350[60] + 4086) = Function_2235e7c((int *)dword_223F350[60], v4);
  s32_div_f(v1 + dword_223F350[61] + 1, 14);
  return CTRDG_WriteAndVerifyAgbFlashAsync((v5 - 14) & 0xFF, dword_223F350[60], 4, (int)Function_2236244);
}

//----- (02236244) --------------------------------------------------------
int __fastcall Function_2236244(int a1)
{
  int result;

  if ( *(uint *)(a1 + 8) )
  {
    dword_223F350[63] = 4;
  }
  else
  {
    if ( ++dword_223F350[59] + 1 >= 14 )
    {
      result = 0;
      dword_223F350[59] = 0;
      dword_223F350[63] = 0;
      return result;
    }
    if ( dword_223F350[59] == 12 )
    {
      dword_223F350[63] = 2;
      return 0;
    }
    dword_223F350[63] = 3;
  }
  return 0;
}

//----- (02236280) --------------------------------------------------------
int Function_2236280()
{
  if ( !dword_223F350[59] )
  {
    dword_223EC00 = dword_223F350[58] != 1;
    ++dword_223F350[62];
  }
  return 0;
}

//----- (022362C8) --------------------------------------------------------
int Function_22362c8()
{
  int result;

  switch ( LOBYTE(dword_223F350[63]) )
  {
    case 1:
      goto LABEL_4;
    case 2:
      Function_22361b0(dword_223F350[59]);
      result = 0;
      break;
    case 3:
      Function_22361b0(dword_223F350[59]);
LABEL_4:
      result = 10;
      break;
    case 4:
      result = 8;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

//----- (02236308) --------------------------------------------------------
int Function_2236308()
{
  int result;

  switch ( LOBYTE(dword_223F350[63]) )
  {
    case 1:
      result = 9;
      break;
    case 2:
      result = 11;
      break;
    case 3:
      result = 10;
      break;
    case 4:
      result = 8;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

//----- (02236340) --------------------------------------------------------
int Function_2236340()
{
  return dword_223F350[60] + 24576;
}

//----- (02236350) --------------------------------------------------------
int Function_2236350()
{
  return Function_2235ef8(0);
}

//----- (0223635C) --------------------------------------------------------
int Function_223635c()
{
  uchar *v0;

  v0 = (uchar *)Function_2236350();
  return (v0[12] << 16) | (v0[13] << 24) | (v0[11] << 8) | v0[10];
}

//----- (02236378) --------------------------------------------------------
int Function_2236378()
{
  return Function_2236350();
}

//----- (02236380) --------------------------------------------------------
int __fastcall Function_2236380(int a1, int a2, uint a3)
{
  int v3;
  uint v4;
  int v5;
  char v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v3 = a1;
  v4 = a3;
  v5 = 0;
  v6 = u32_div_f(a2, 24);
  switch ( v6 )
  {
    case 0:
      v3 += 32;
      if ( v4 <= 3 )
        JUMPOUT(__CS__, (char *)&off_22363E4 + *((short *)&off_22363E4 + v4) + 2);
      goto LABEL_3;
    case 1:
      v7 = v3 + 32;
      switch ( v6 )
      {
        case 0:
          v5 = v7;
          break;
        case 1:
          v5 = v7 + 12;
          break;
        case 2:
          v5 = v7 + 36;
          break;
        case 3:
          v5 = v7 + 24;
          break;
        default:
          goto LABEL_35;
      }
      break;
    case 2:
      v7 = v3 + 32;
      switch ( v6 )
      {
        case 0:
          v5 = v7;
          break;
        case 1:
          v5 = v7 + 24;
          break;
        case 2:
          v5 = v7 + 12;
          break;
        case 3:
          v5 = v7 + 36;
          break;
        default:
          goto LABEL_35;
      }
      break;
    case 3:
      v7 = v3 + 32;
      switch ( v6 )
      {
        case 0:
          v5 = v7;
          break;
        case 1:
          v5 = v7 + 36;
          break;
        case 2:
          v5 = v7 + 12;
          break;
        case 3:
          v5 = v7 + 24;
          break;
        default:
          goto LABEL_35;
      }
      break;
    case 4:
      v7 = v3 + 32;
      switch ( v6 )
      {
        case 0:
          v5 = v7;
          break;
        case 1:
          v5 = v7 + 24;
          break;
        case 2:
          v5 = v7 + 36;
          break;
        case 3:
          v5 = v7 + 12;
          break;
        default:
          goto LABEL_35;
      }
      break;
    case 5:
      v7 = v3 + 32;
      switch ( v6 )
      {
        case 0:
          v5 = v7;
          break;
        case 1:
          v5 = v7 + 36;
          break;
        case 2:
          v5 = v7 + 24;
          break;
        case 3:
          v5 = v7 + 12;
          break;
        default:
          goto LABEL_35;
      }
      break;
    case 6:
      v7 = v3 + 32;
      if ( v4 <= 3 )
        JUMPOUT(__CS__, (char *)&off_2236506 + *((short *)&off_2236506 + v4) + 2);
LABEL_35:
      switch ( v6 )
      {
        case 0:
          v5 = v7 + 12;
          break;
        case 1:
          v5 = v7;
          break;
        case 2:
          v5 = v7 + 24;
          break;
        case 3:
          v5 = v7 + 36;
          break;
        default:
          return v5;
      }
      break;
    case 7:
      v8 = v3 + 32;
      switch ( v6 )
      {
        case 0:
          v5 = v8 + 12;
          break;
        case 1:
          v5 = v8;
          break;
        case 2:
          v5 = v8 + 36;
          break;
        case 3:
          v5 = v8 + 24;
          break;
        default:
          goto LABEL_67;
      }
      break;
    case 8:
      v8 = v3 + 32;
      switch ( v6 )
      {
        case 0:
          v5 = v8 + 24;
          break;
        case 1:
          v5 = v8;
          break;
        case 2:
          v5 = v8 + 12;
          break;
        case 3:
          v5 = v8 + 36;
          break;
        default:
          goto LABEL_67;
      }
      break;
    case 9:
      v8 = v3 + 32;
      switch ( v6 )
      {
        case 0:
          v5 = v8 + 36;
          break;
        case 1:
          v5 = v8;
          break;
        case 2:
          v5 = v8 + 12;
          break;
        case 3:
          v5 = v8 + 24;
          break;
        default:
          goto LABEL_67;
      }
      break;
    case 10:
      v8 = v3 + 32;
      switch ( v6 )
      {
        case 0:
          v5 = v8 + 24;
          break;
        case 1:
          v5 = v8;
          break;
        case 2:
          v5 = v8 + 36;
          break;
        case 3:
          v5 = v8 + 12;
          break;
        default:
          goto LABEL_67;
      }
      break;
    case 11:
      v8 = v3 + 32;
      switch ( v6 )
      {
        case 0:
          v5 = v8 + 36;
          break;
        case 1:
          v5 = v8;
          break;
        case 2:
          v5 = v8 + 24;
          break;
        case 3:
          v5 = v8 + 12;
          break;
        default:
          goto LABEL_67;
      }
      break;
    case 12:
      v8 = v3 + 32;
      if ( v4 <= 3 )
        JUMPOUT(__CS__, (char *)&off_2236628 + *((short *)&off_2236628 + v4) + 2);
LABEL_67:
      switch ( v6 )
      {
        case 0:
          v5 = v8 + 12;
          break;
        case 1:
          v5 = v8 + 24;
          break;
        case 2:
          v5 = v8;
          break;
        case 3:
          v5 = v8 + 36;
          break;
        default:
          return v5;
      }
      break;
    case 13:
      v9 = v3 + 32;
      switch ( v6 )
      {
        case 0:
          v5 = v9 + 12;
          break;
        case 1:
          v5 = v9 + 36;
          break;
        case 2:
          v5 = v9;
          break;
        case 3:
          v5 = v9 + 24;
          break;
        default:
          goto LABEL_99;
      }
      break;
    case 14:
      v9 = v3 + 32;
      switch ( v6 )
      {
        case 0:
          v5 = v9 + 24;
          break;
        case 1:
          v5 = v9 + 12;
          break;
        case 2:
          v5 = v9;
          break;
        case 3:
          v5 = v9 + 36;
          break;
        default:
          goto LABEL_99;
      }
      break;
    case 15:
      v9 = v3 + 32;
      switch ( v6 )
      {
        case 0:
          v5 = v9 + 36;
          break;
        case 1:
          v5 = v9 + 12;
          break;
        case 2:
          v5 = v9;
          break;
        case 3:
          v5 = v9 + 24;
          break;
        default:
          goto LABEL_99;
      }
      break;
    case 16:
      v9 = v3 + 32;
      switch ( v6 )
      {
        case 0:
          v5 = v9 + 24;
          break;
        case 1:
          v5 = v9 + 36;
          break;
        case 2:
          v5 = v9;
          break;
        case 3:
          v5 = v9 + 12;
          break;
        default:
          goto LABEL_99;
      }
      break;
    case 17:
      v9 = v3 + 32;
      switch ( v6 )
      {
        case 0:
          v5 = v9 + 36;
          break;
        case 1:
          v5 = v9 + 24;
          break;
        case 2:
          v5 = v9;
          break;
        case 3:
          v5 = v9 + 12;
          break;
        default:
          goto LABEL_99;
      }
      break;
    case 18:
      v9 = v3 + 32;
      if ( v4 <= 3 )
        JUMPOUT(__CS__, *((short *)&off_223674A + v4) + 35874636);
LABEL_99:
      switch ( v6 )
      {
        case 0:
          v5 = v9 + 12;
          break;
        case 1:
          v5 = v9 + 24;
          break;
        case 2:
          v5 = v9 + 36;
          break;
        case 3:
          v5 = v9;
          break;
        default:
          return v5;
      }
      break;
    case 19:
      v10 = v3 + 32;
      switch ( v6 )
      {
        case 0:
          v5 = v10 + 12;
          break;
        case 1:
          v5 = v10 + 36;
          break;
        case 2:
          v5 = v10 + 24;
          break;
        case 3:
          v5 = v10;
          break;
        default:
          return v5;
      }
      break;
    case 20:
      v11 = v3 + 32;
      switch ( v6 )
      {
        case 0:
          v5 = v11 + 24;
          break;
        case 1:
          v5 = v11 + 12;
          break;
        case 2:
          v5 = v11 + 36;
          break;
        case 3:
          v5 = v11;
          break;
        default:
          return v5;
      }
      break;
    case 21:
      v12 = v3 + 32;
      switch ( v6 )
      {
        case 0:
          v5 = v12 + 36;
          break;
        case 1:
          v5 = v12 + 12;
          break;
        case 2:
          v5 = v12 + 24;
          break;
        case 3:
          v5 = v12;
          break;
        default:
          return v5;
      }
      break;
    case 22:
      v13 = v3 + 32;
      switch ( v6 )
      {
        case 0:
          v5 = v13 + 24;
          break;
        case 1:
          v5 = v13 + 36;
          break;
        case 2:
          v5 = v13 + 12;
          break;
        case 3:
          v5 = v13;
          break;
        default:
          return v5;
      }
      break;
    case 23:
      v14 = v3 + 32;
      switch ( v6 )
      {
        case 0:
          v5 = v14 + 36;
          break;
        case 1:
          v5 = v14 + 24;
          break;
        case 2:
          v5 = v14 + 12;
          break;
        case 3:
          v5 = v14;
          break;
        default:
          return v5;
      }
      break;
    default:
LABEL_3:
      switch ( v6 )
      {
        case 0:
          v5 = v3;
          break;
        case 1:
          v5 = v3 + 12;
          break;
        case 2:
          v5 = v3 + 24;
          break;
        case 3:
          v5 = v3 + 36;
          break;
        default:
          return v5;
      }
      break;
  }
  return v5;
}

//----- (0223685C) --------------------------------------------------------
uint *__fastcall Function_223685c(uint *result)
{
  uint v1;
  int *v2;
  int v3;

  v1 = 0;
  v2 = result + 8;
  do
  {
    ++v1;
    v3 = *v2 ^ result[1];
    *v2 = v3;
    *v2 = *result ^ v3;
    ++v2;
  }
  while ( v1 < 0xC );
  return result;
}

//----- (0223687C) --------------------------------------------------------
uint *__fastcall Function_223687c(uint *result)
{
  uint v1;
  int *v2;
  int v3;

  v1 = 0;
  v2 = result + 8;
  do
  {
    ++v1;
    v3 = *v2 ^ *result;
    *v2 = v3;
    *v2 = result[1] ^ v3;
    ++v2;
  }
  while ( v1 < 0xC );
  return result;
}

//----- (0223689C) --------------------------------------------------------
uint __fastcall Function_223689c(int *a1)
{
  int v1;
  int *v2;
  ushort *v3;
  ushort *v4;
  ushort *v5;
  ushort *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  uint v15;

  v1 = 0;
  v2 = a1;
  v3 = (ushort *)Function_2236380((int)a1, *a1, 0);
  v4 = (ushort *)Function_2236380((int)v2, *v2, 1u);
  v5 = (ushort *)Function_2236380((int)v2, *v2, 2u);
  v6 = (ushort *)Function_2236380((int)v2, *v2, 3u);
  v7 = 0;
  do
  {
    v8 = *v3;
    ++v7;
    ++v3;
    v1 = (v1 + v8) & 0xFFFF;
  }
  while ( v7 < 6 );
  v9 = 0;
  do
  {
    v10 = *v4;
    ++v9;
    ++v4;
    v1 = (v1 + v10) & 0xFFFF;
  }
  while ( v9 < 6 );
  v11 = 0;
  do
  {
    v12 = *v5;
    ++v11;
    ++v5;
    v1 = (v1 + v12) & 0xFFFF;
  }
  while ( v11 < 6 );
  v13 = 0;
  do
  {
    v14 = *v6;
    ++v13;
    ++v6;
    v15 = (v1 + v14) << 16;
    v1 = v15 >> 16;
  }
  while ( v13 < 6 );
  return v15 >> 16;
}

//----- (02236924) --------------------------------------------------------
uint __fastcall Function_2236924(int *a1, int a2, int a3)
{
  uint v3;
  int v4;
  int v5;
  uint *v6;
  int v7;
  int v9;
  uchar *v10;
  int v11;
  ushort *v12;

  v3 = 0;
  v4 = (int)a1;
  v9 = a2;
  v5 = a3;
  v6 = 0;
  v12 = 0;
  v11 = 0;
  v10 = 0;
  if ( a2 > 10 )
  {
    v12 = (ushort *)Function_2236380((int)a1, *a1, 0);
    v11 = Function_2236380(v4, *(uint *)v4, 1u);
    v10 = (uchar *)Function_2236380(v4, *(uint *)v4, 2u);
    v6 = (uint *)Function_2236380(v4, *(uint *)v4, 3u);
    Function_223685c((uint *)v4);
    if ( Function_223689c((int *)v4) != *(ushort *)(v4 + 28) )
    {
      *(uchar *)(v4 + 19) = *(uchar *)(v4 + 19) & 0xFE | 1;
      *(uchar *)(v4 + 19) |= 4u;
      v6[1] |= 0x40000000u;
    }
  }
  if ( (uint)v9 <= 0x50 )
    JUMPOUT(__CS__, *((short *)&off_22369AE + v9) + 35875248);
  switch ( (uchar)v9 )
  {
    case 0:
      v3 = *(uint *)v4;
      break;
    case 1:
      v3 = *(uint *)(v4 + 4);
      break;
    case 2:
      if ( *(uchar *)(v4 + 19) & 1 )
      {
        v3 = 0;
      }
      else
      {
        v3 = 0;
        do
        {
          *(uchar *)(v5 + v3) = *(uchar *)(v4 + v3 + 8);
          ++v3;
        }
        while ( v3 < 0xA );
      }
      *(uchar *)(v5 + v3) = -1;
      break;
    case 3:
      v3 = *(uchar *)(v4 + 18);
      break;
    case 4:
      v3 = *(uchar *)(v4 + 19) & 1;
      break;
    case 5:
      v3 = (uint)*(uchar *)(v4 + 19) << 30 >> 31;
      break;
    case 6:
      v3 = (uint)*(uchar *)(v4 + 19) << 29 >> 31;
      break;
    case 7:
      v3 = 0;
      do
      {
        *(uchar *)(v5 + v3) = *(uchar *)(v4 + v3 + 20);
        ++v3;
      }
      while ( v3 < 7 );
      *(uchar *)(v5 + v3) = -1;
      break;
    case 8:
      v3 = *(uchar *)(v4 + 27);
      break;
    case 9:
      v3 = *(ushort *)(v4 + 28);
      break;
    case 0xA:
      v3 = *(ushort *)(v4 + 30);
      break;
    case 0xB:
      if ( *(uchar *)(v4 + 19) & 1 )
        v3 = 412;
      else
        v3 = *v12;
      break;
    case 0xC:
      v3 = v12[1];
      break;
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
      v3 = *(ushort *)(v11 + 2 * (v9 - 13));
      break;
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
      v3 = *(uchar *)(v11 + v9 - 17 + 8);
      break;
    case 0x15:
      v3 = *((uchar *)v12 + 8);
      break;
    case 0x16:
      v3 = v10[6];
      break;
    case 0x17:
      v3 = v10[7];
      break;
    case 0x18:
      v3 = v10[8];
      break;
    case 0x19:
      v3 = *((uint *)v12 + 1);
      break;
    case 0x1A:
      v3 = *v10;
      break;
    case 0x1B:
      v3 = v10[1];
      break;
    case 0x1C:
      v3 = v10[2];
      break;
    case 0x1D:
      v3 = v10[3];
      break;
    case 0x1E:
      v3 = v10[4];
      break;
    case 0x1F:
      v3 = v10[5];
      break;
    case 0x20:
      v3 = *((uchar *)v12 + 9);
      break;
    case 0x21:
      v3 = v10[9];
      break;
    case 0x22:
      v3 = *v6 & 0xFF;
      break;
    case 0x23:
      v3 = *v6 << 16 >> 24;
      break;
    case 0x24:
      v3 = *v6 << 9 >> 25;
      break;
    case 0x25:
      v3 = (uint)(32 * *v6) >> 28;
      break;
    case 0x26:
      v3 = (uint)(2 * *v6) >> 28;
      break;
    case 0x27:
      v3 = v6[1] & 0x1F;
      break;
    case 0x28:
      v3 = v6[1] << 22 >> 27;
      break;
    case 0x29:
      v3 = v6[1] << 17 >> 27;
      break;
    case 0x2A:
      v3 = v6[1] << 12 >> 27;
      break;
    case 0x2B:
      v3 = v6[1] << 7 >> 27;
      break;
    case 0x2C:
      v3 = (uint)(4 * v6[1]) >> 27;
      break;
    case 0x2D:
      v3 = (uint)(2 * v6[1]) >> 31;
      break;
    case 0x2E:
      v3 = v6[1] >> 31;
      break;
    case 0x2F:
      v3 = v10[10];
      break;
    case 0x30:
      v3 = v10[11];
      break;
    case 0x31:
      v3 = *v6 >> 31;
      break;
    case 0x32:
      v3 = v6[2] & 7;
      break;
    case 0x33:
      v3 = v6[2] << 26 >> 29;
      break;
    case 0x34:
      v3 = v6[2] << 23 >> 29;
      break;
    case 0x35:
      v3 = v6[2] << 20 >> 29;
      break;
    case 0x36:
      v3 = v6[2] << 17 >> 29;
      break;
    case 0x41:
      v3 = *v12;
      if ( *v12 && (v6[1] & 0x40000000 || *(uchar *)(v4 + 19) & 1) )
        v3 = 412;
      break;
    case 0x42:
      v7 = v6[1];
      v3 = ((uint)(4 * v7) >> 27 << 25) | v7 & 0x1F | 32 * ((uint)(v7 << 22) >> 27) | ((uint)(v7 << 17) >> 27 << 10) | ((uint)(v7 << 12) >> 27 << 15) | ((uint)(v7 << 7) >> 27 << 20);
      break;
    case 0x43:
      v3 = v6[2] << 16 >> 31;
      break;
    case 0x44:
      v3 = v6[2] << 15 >> 31;
      break;
    case 0x45:
      v3 = v6[2] << 14 >> 31;
      break;
    case 0x46:
      v3 = v6[2] << 13 >> 31;
      break;
    case 0x47:
      v3 = v6[2] << 12 >> 31;
      break;
    case 0x48:
      v3 = v6[2] << 11 >> 31;
      break;
    case 0x49:
      v3 = v6[2] << 10 >> 31;
      break;
    case 0x4A:
      v3 = v6[2] << 9 >> 31;
      break;
    case 0x4B:
      v3 = v6[2] << 8 >> 31;
      break;
    case 0x4C:
      v3 = v6[2] << 7 >> 31;
      break;
    case 0x4D:
      v3 = v6[2] << 6 >> 31;
      break;
    case 0x4E:
      v3 = (uint)(32 * v6[2]) >> 31;
      break;
    case 0x4F:
      v3 = (uint)(2 * v6[2]) >> 28;
      break;
    case 0x50:
      v3 = v6[2] >> 31;
      break;
    default:
      break;
  }
  if ( v9 > 10 )
    Function_223687c((uint *)v4);
  return v3;
}

//----- (02236CA4) --------------------------------------------------------
int __fastcall Function_2236ca4(int result, int a2, uchar *a3)
{
  int v3;
  int v4;
  uchar *v5;
  ushort *v6;
  int v7;
  uchar v8;
  int v9;
  uchar v10;
  int v11;
  int v12;

  v3 = a2;
  v4 = result;
  v5 = a3;
  v6 = 0;
  if ( a2 <= 10
    || (v6 = (ushort *)Function_2236380(result, *(uint *)result, 0),
        Function_2236380(v4, *(uint *)v4, 1u),
        Function_2236380(v4, *(uint *)v4, 2u),
        v12 = Function_2236380(v4, *(uint *)v4, 3u),
        Function_223685c((uint *)v4),
        result = Function_223689c((int *)v4),
        result == *(ushort *)(v4 + 28)) )
  {
    switch ( (uchar)result )
    {
      case 2:
        v7 = 0;
        do
        {
          v8 = v5[v7];
          result = v4 + v7++;
          *(uchar *)(result + 8) = v8;
        }
        while ( v7 < 10 );
        break;
      case 3:
        result = *v5;
        *(uchar *)(v4 + 18) = result;
        break;
      case 4:
        result = (uchar)(*(uchar *)(v4 + 19) & 0xFE) | *v5 & 1;
        *(uchar *)(v4 + 19) = result;
        break;
      case 5:
        result = (uchar)(*(uchar *)(v4 + 19) & 0xFD) | 2 * *v5 & 3;
        *(uchar *)(v4 + 19) = result;
        break;
      case 6:
        result = (uchar)(*(uchar *)(v4 + 19) & 0xFB) | 4 * *v5 & 7;
        *(uchar *)(v4 + 19) = result;
        break;
      case 7:
        v9 = 0;
        do
        {
          v10 = v5[v9];
          result = v4 + v9++;
          *(uchar *)(result + 20) = v10;
        }
        while ( v9 < 7 );
        break;
      case 0xB:
        *v6 = *v5 + (v5[1] << 8);
        v11 = *(uchar *)(v4 + 19);
        if ( *v6 )
        {
          result = v11 | 2;
          *(uchar *)(v4 + 19) = v11 | 2;
        }
        else
        {
          result = 2;
          *(uchar *)(v4 + 19) = v11 & 0xFD;
        }
        break;
      default:
        break;
    }
    if ( v3 > 10 )
    {
      *(ushort *)(v4 + 28) = Function_223689c((int *)v4);
      result = (int)Function_223687c((uint *)v4);
    }
  }
  else
  {
    *(uchar *)(v4 + 19) = *(uchar *)(v4 + 19) & 0xFE | 1;
    *(uchar *)(v4 + 19) |= 4u;
    *(uint *)(v12 + 4) |= 0x40000000u;
    result = (int)Function_223687c((uint *)v4);
  }
  return result;
}

//----- (02236DD0) --------------------------------------------------------
int __fastcall Function_2236dd0(int result)
{
  short *v1;
  uint v2;

  if ( result >= 277 )
  {
    v1 = &word_223ED5C;
    v2 = 0;
    while ( result != (ushort)*v1 )
    {
      ++v2;
      v1 += 2;
      if ( v2 >= 0x90 )
        return result;
    }
    result = (ushort)word_223ED5E[2 * v2];
  }
  return result;
}

//----- (02236E00) --------------------------------------------------------
int __fastcall Function_2236e00(int *a1)
{
  int *v1;
  int v2;
  ushort v3;
  uint v4;

  v1 = a1;
  v2 = Function_2236924(a1, 11, 0);
  v3 = Function_2236dd0(v2);
  v4 = Function_2236924(v1, 25, 0);
  return CalcPkmnLevel(v3, v4);
}

//----- (02236E28) --------------------------------------------------------
uint __fastcall Function_2236e28(int *a1, int a2)
{
  int *v2;
  int v3;
  char v4;
  uint result;
  short *v6;
  uint v7;

  v2 = a1;
  v3 = (ushort)GetBoxPkmnData(a2, 5u, 0);
  v4 = Function_2236924(v2, 46, 0);
  result = GetPkmnBaseData1(v3, 0x19u);
  if ( !result )
    return GetPkmnBaseData1(v3, 0x18u);
  v6 = &word_223ECA0;
  v7 = 0;
  while ( v3 != (ushort)*v6 )
  {
    ++v7;
    ++v6;
    if ( v7 >= 0x5E )
      goto LABEL_6;
  }
  result = GetPkmnBaseData1(v3, 0x18u);
LABEL_6:
  if ( v7 == 94 && !(v4 & 1) )
    result = GetPkmnBaseData1(v3, 0x18u);
  return result;
}

//----- (02236E90) --------------------------------------------------------
int __fastcall Function_2236e90(int *a1, ushort *a2, int a3, int a4)
{
  ushort *v4;
  int *v5;
  int v6;
  int v7;
  uint v8;
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
  char v29;
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
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v87;
  uint v88;
  int v89;
  char v90;
  char v91;
  int v92;

  v92 = a4;
  v4 = a2;
  v5 = a1;
  ClearPkmnDataStructure1(a2);
  v87 = InitEncryptPkmnData_Part1((int)v4);
  v89 = Function_2236924(v5, 0, 0);
  SetBoxPkmnData((int)v4, 0, (ushort *)&v89, v6);
  v89 = Function_2236924(v5, 11, 0);
  v89 = Function_2236dd0(v89);
  SetBoxPkmnData((int)v4, 5u, (ushort *)&v89, v7);
  v8 = Function_2236924(v5, 12, 0);
  v89 = v8;
  if ( v8 )
    v89 = Function_207cf10((ushort)v8);
  SetBoxPkmnData((int)v4, 6u, (ushort *)&v89, v9);
  v89 = Function_2236924(v5, 1, 0);
  SetBoxPkmnData((int)v4, 7u, (ushort *)&v89, v10);
  v89 = Function_2236924(v5, 25, 0);
  SetBoxPkmnData((int)v4, 8u, (ushort *)&v89, v11);
  v89 = 70;
  SetBoxPkmnData((int)v4, 9u, (ushort *)&v89, v12);
  v89 = Function_2236e28(v5, (int)v4);
  SetBoxPkmnData((int)v4, 0xAu, (ushort *)&v89, v13);
  v89 = Function_2236924(v5, 8, 0);
  SetBoxPkmnData((int)v4, 0xBu, (ushort *)&v89, v14);
  v88 = Function_2236924(v5, 3, 0);
  SetBoxPkmnData((int)v4, 0xCu, (ushort *)&v88, v15);
  v89 = Function_2236924(v5, 26, 0);
  SetBoxPkmnData((int)v4, 0xDu, (ushort *)&v89, v16);
  v89 = Function_2236924(v5, 27, 0);
  SetBoxPkmnData((int)v4, 0xEu, (ushort *)&v89, v17);
  v89 = Function_2236924(v5, 28, 0);
  SetBoxPkmnData((int)v4, 0xFu, (ushort *)&v89, v18);
  v89 = Function_2236924(v5, 29, 0);
  SetBoxPkmnData((int)v4, 0x10u, (ushort *)&v89, v19);
  v89 = Function_2236924(v5, 30, 0);
  SetBoxPkmnData((int)v4, 0x11u, (ushort *)&v89, v20);
  v89 = Function_2236924(v5, 31, 0);
  SetBoxPkmnData((int)v4, 0x12u, (ushort *)&v89, v21);
  v89 = Function_2236924(v5, 22, 0);
  SetBoxPkmnData((int)v4, 0x13u, (ushort *)&v89, v22);
  v89 = Function_2236924(v5, 23, 0);
  SetBoxPkmnData((int)v4, 0x14u, (ushort *)&v89, v23);
  v89 = Function_2236924(v5, 24, 0);
  SetBoxPkmnData((int)v4, 0x15u, (ushort *)&v89, v24);
  v89 = Function_2236924(v5, 33, 0);
  SetBoxPkmnData((int)v4, 0x16u, (ushort *)&v89, v25);
  v89 = Function_2236924(v5, 47, 0);
  SetBoxPkmnData((int)v4, 0x17u, (ushort *)&v89, v26);
  v89 = Function_2236924(v5, 48, 0);
  SetBoxPkmnData((int)v4, 0x18u, (ushort *)&v89, v27);
  v28 = 0;
  v29 = 0;
  do
  {
    v89 = Function_2236924(v5, v28 + 13, 0);
    SetBoxPkmnData((int)v4, v28 + 54, (ushort *)&v89, v30);
    v89 = (Function_2236924(v5, 21, 0) & (3 << v29)) >> v29;
    SetBoxPkmnData((int)v4, v28 + 62, (ushort *)&v89, v31);
    v89 = GetBoxPkmnData((int)v4, v28 + 66, 0);
    SetBoxPkmnData((int)v4, v28++ + 58, (ushort *)&v89, v32);
    v29 += 2;
  }
  while ( v28 < 4 );
  v89 = Function_2236924(v5, 39, 0);
  SetBoxPkmnData((int)v4, 0x46u, (ushort *)&v89, v33);
  v89 = Function_2236924(v5, 40, 0);
  SetBoxPkmnData((int)v4, 0x47u, (ushort *)&v89, v34);
  v89 = Function_2236924(v5, 41, 0);
  SetBoxPkmnData((int)v4, 0x48u, (ushort *)&v89, v35);
  v89 = Function_2236924(v5, 42, 0);
  SetBoxPkmnData((int)v4, 0x49u, (ushort *)&v89, v36);
  v89 = Function_2236924(v5, 43, 0);
  SetBoxPkmnData((int)v4, 0x4Au, (ushort *)&v89, v37);
  v89 = Function_2236924(v5, 44, 0);
  SetBoxPkmnData((int)v4, 0x4Bu, (ushort *)&v89, v38);
  v89 = Function_2236924(v5, 45, 0);
  SetBoxPkmnData((int)v4, 0x4Cu, (ushort *)&v89, v39);
  v40 = Function_2236924(v5, 50, 0);
  v42 = v40;
  if ( v40 <= 4 )
  {
    v43 = 0;
    if ( v40 > 0 )
    {
      do
      {
        v89 = 1;
        SetBoxPkmnData((int)v4, v43++ + 78, (ushort *)&v89, v41);
      }
      while ( v43 < v42 );
    }
  }
  v44 = Function_2236924(v5, 51, 0);
  v46 = v44;
  if ( v44 <= 4 )
  {
    v47 = 0;
    if ( v44 > 0 )
    {
      do
      {
        v89 = 1;
        SetBoxPkmnData((int)v4, v47++ + 82, (ushort *)&v89, v45);
      }
      while ( v47 < v46 );
    }
  }
  v48 = Function_2236924(v5, 52, 0);
  v50 = v48;
  if ( v48 <= 4 )
  {
    v51 = 0;
    if ( v48 > 0 )
    {
      do
      {
        v89 = 1;
        SetBoxPkmnData((int)v4, v51++ + 86, (ushort *)&v89, v49);
      }
      while ( v51 < v50 );
    }
  }
  v52 = Function_2236924(v5, 53, 0);
  v54 = v52;
  if ( v52 <= 4 )
  {
    v55 = 0;
    if ( v52 > 0 )
    {
      do
      {
        v89 = 1;
        SetBoxPkmnData((int)v4, v55++ + 90, (ushort *)&v89, v53);
      }
      while ( v55 < v54 );
    }
  }
  v56 = Function_2236924(v5, 54, 0);
  v58 = v56;
  if ( v56 <= 4 )
  {
    v59 = 0;
    if ( v56 > 0 )
    {
      do
      {
        v89 = 1;
        SetBoxPkmnData((int)v4, v59++ + 94, (ushort *)&v89, v57);
      }
      while ( v59 < v58 );
    }
  }
  v89 = Function_2236924(v5, 67, 0);
  SetBoxPkmnData((int)v4, 0x62u, (ushort *)&v89, v60);
  v89 = Function_2236924(v5, 68, 0);
  SetBoxPkmnData((int)v4, 0x63u, (ushort *)&v89, v61);
  v89 = Function_2236924(v5, 69, 0);
  SetBoxPkmnData((int)v4, 0x64u, (ushort *)&v89, v62);
  v89 = Function_2236924(v5, 70, 0);
  SetBoxPkmnData((int)v4, 0x65u, (ushort *)&v89, v63);
  v89 = Function_2236924(v5, 71, 0);
  SetBoxPkmnData((int)v4, 0x66u, (ushort *)&v89, v64);
  v89 = Function_2236924(v5, 72, 0);
  SetBoxPkmnData((int)v4, 0x67u, (ushort *)&v89, v65);
  v89 = Function_2236924(v5, 73, 0);
  SetBoxPkmnData((int)v4, 0x68u, (ushort *)&v89, v66);
  v89 = Function_2236924(v5, 74, 0);
  SetBoxPkmnData((int)v4, 0x69u, (ushort *)&v89, v67);
  v89 = Function_2236924(v5, 75, 0);
  SetBoxPkmnData((int)v4, 0x6Au, (ushort *)&v89, v68);
  v89 = Function_2236924(v5, 76, 0);
  SetBoxPkmnData((int)v4, 0x6Bu, (ushort *)&v89, v69);
  v89 = Function_2236924(v5, 77, 0);
  SetBoxPkmnData((int)v4, 0x6Cu, (ushort *)&v89, v70);
  v89 = Function_2236924(v5, 78, 0);
  SetBoxPkmnData((int)v4, 0x6Du, (ushort *)&v89, v71);
  v89 = Function_2236924(v5, 80, 0);
  SetBoxPkmnData((int)v4, 0x6Eu, (ushort *)&v89, v72);
  v89 = DecidePkmnGender((int)v4);
  SetBoxPkmnData((int)v4, 0x6Fu, (ushort *)&v89, v73);
  if ( GetBoxPkmnData((int)v4, 5u, 0) == 201 )
  {
    v89 = Function_2236924(v5, 0, 0);
    u32_div_f(((v89 & 0x30000u) >> 12) | ((v89 & 0x3000000u) >> 18) | ((v89 & 0x300u) >> 6) | v89 & 3, 28);
    v89 = v74;
    SetBoxPkmnData((int)v4, 0x70u, (ushort *)&v89, v75);
  }
  if ( GetBoxPkmnData((int)v4, 5u, 0) == 386 )
  {
    switch ( byte_21BF6E2 )
    {
      case 3:
        v89 = 3;
        break;
      case 4:
        v89 = 1;
        break;
      case 5:
        v89 = 2;
        break;
      default:
        v89 = 0;
        break;
    }
    SetBoxPkmnData((int)v4, 0x70u, (ushort *)&v89, v76);
  }
  Function_2236924(v5, 2, (int)&v91);
  Function_223936c(&v91, &v90, 12, v88);
  SetBoxPkmnData((int)v4, 0x76u, (ushort *)&v90, v77);
  if ( (uchar)CountryOfOriginValue != Function_2236924(v5, 3, 0) )
  {
    v89 = 1;
    SetBoxPkmnData((int)v4, 0x4Du, (ushort *)&v89, v78);
  }
  v89 = Function_2236924(v5, 37, 0);
  SetBoxPkmnData((int)v4, 0x7Au, (ushort *)&v89, v79);
  Function_2236924(v5, 7, (int)&v91);
  Function_223936c(&v91, &v90, 8, v88);
  SetBoxPkmnData((int)v4, 0x90u, (ushort *)&v90, v80);
  v89 = Function_2236924(v5, 35, 0);
  SetBoxPkmnData((int)v4, 0x99u, (ushort *)&v89, v81);
  v89 = Function_2236924(v5, 34, 0);
  SetBoxPkmnData((int)v4, 0x9Au, (ushort *)&v89, v82);
  v89 = Function_2236924(v5, 38, 0);
  SetBoxPkmnData((int)v4, 0x9Bu, (ushort *)&v89, v83);
  v89 = Function_2236924(v5, 36, 0);
  SetBoxPkmnData((int)v4, 0x9Cu, (ushort *)&v89, v84);
  v89 = Function_2236924(v5, 49, 0);
  SetBoxPkmnData((int)v4, 0x9Du, (ushort *)&v89, v85);
  return InitEncryptPkmnData_Part1Again(v4, v87);
}

//----- (02237520) --------------------------------------------------------
int __fastcall Function_2237520(int result)
{
  dword_223F350[127] = result;
  return result;
}

//----- (0223752C) --------------------------------------------------------
int __fastcall Function_223752c(int a1)
{
  return malloc(dword_223F350[127], a1);
}

//----- (02237540) --------------------------------------------------------
int __fastcall Function_2237540(int a1, int a2, int a3, int a4)
{
  uint v4;
  int v5;
  int v6;
  const char *v7;
  char v9;
  char v10;
  int v11;

  v11 = a4;
  v4 = Function_20d0928();
  v5 = (v4 >> 24) | (v4 >> 8 << 16) & 0xFFFFFF | (v4 << 24) | (v4 >> 16 << 8) & 0xFFFF;
  v6 = 0;
  if ( !*(uint *)"EB5BEC5BED5BEE5BEF5BEG5BEH5BEI5BEJ5BEK5BEL5BEM5BEP5BEQ5BER5BES5BET5BEU5BEV5BEW5B" )
    return 0;
  v7 = "EB5BEC5BED5BEE5BEF5BEG5BEH5BEI5BEJ5BEK5BEL5BEM5BEP5BEQ5BER5BES5BET5BEU5BEV5BEW5B";
  while ( 1 )
  {
    if ( v5 == *(uint *)v7 )
    {
      CTRDG_Enable(1);
      Function_20d0c5c((int *)0x8100000, (int *)&v10, 0x4A8u);
      Function_20d0c5c((int *)0x8020000, (int *)&v9, 0x80u);
      CTRDG_Enable(0);
      Function_223d5c8(Function_223752c, free);
      if ( Function_2239498(&v10, 1192, &v9, dword_223DA1C) )
        break;
    }
    v7 += 4;
    if ( (uint)++v6 >= *(uint *)v7 )
      return 0;
  }
  return 1;
}

//----- (022375F0) --------------------------------------------------------
BOOL Function_22375f0()
{
  int v1;
  int v2;

  CTRDG_Init();
  if ( !Function_20d08c0() )
    return 0;
  if ( Function_20d0970() == 12592 )
    return Function_2237540(12592, 12592, v1, v2) != 0;
  return 0;
}

//----- (02237624) --------------------------------------------------------
int __fastcall Function_2237624(int a1, int a2, int a3, int a4)
{
  int v5;

  v5 = a4;
  if ( !Function_22375f0() )
    return 0;
  CTRDG_Enable(1);
  Function_20d0e40((uint *)0x8100000, &v5);
  CTRDG_Enable(0);
  return v5;
}

//----- (0223764C) --------------------------------------------------------
BOOL __fastcall Function_223764c(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  BOOL result;
  BOOL v9;

  v2 = a1;
  v3 = a2;
  v4 = Function_22375f0();
  if ( !v4 )
    return 0;
  if ( !v3 )
    v3 = Function_2237624(v4, v5, v6, v7);
  CTRDG_Enable(1);
  v9 = Function_20d0cb4((int *)0x8100100, v2, v3);
  CTRDG_Enable(0);
  if ( CTRDG_IsExisting() )
    result = v9;
  else
    result = 0;
  return result;
}

//----- (02237694) --------------------------------------------------------
int *__fastcall Function_2237694(int a1)
{
  int v1;
  int *v2;
  int v3;
  uint *v4;
  int *result;

  v1 = a1;
  v2 = &dword_223F350[128];
  v3 = 117;
  do
  {
    *v2 = 0;
    v2[1] = 0;
    v2[2] = 0;
    v2[3] = 0;
    v4 = v2 + 4;
    *v4 = 0;
    v4[1] = 0;
    v4[2] = 0;
    v4[3] = 0;
    v2 = v4 + 4;
    --v3;
  }
  while ( v3 );
  *v2 = 0;
  v2[1] = 0;
  result = &dword_223F350[128];
  dword_223F350[129] = 1;
  dword_223F350[130] = v1;
  return result;
}

//----- (022376C4) --------------------------------------------------------
int *__fastcall Function_22376c4(int a1, int a2, uint a3, int a4)
{
  int v4;
  uint v5;
  uint v6;
  int *v7;

  v4 = a1;
  v5 = a3;
  v6 = a2;
  Function_2017fc8(3, a2, a4);
  v7 = (int *)MallocSomeDataAndStorePtrInOverlayData1c(v4, v5, v6);
  Call_FillMemWithValue(v7, 0, v5);
  SetBrightnessWithValue(0, 0);
  SetBrightnessWithValue(1, 0);
  return v7;
}

//----- (022376FC) --------------------------------------------------------
int __fastcall Function_22376fc(uint *a1, uchar a2, char a3, uint a4, uint a5)
{
  uint *v5;
  uchar v6;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v5 = a1;
  v6 = a2;
  v8 = 0;
  v9 = 0;
  v10 = 2048;
  v11 = 0;
  v12 = 1;
  v13 = 0;
  v14 = 0;
  LOBYTE(v12) = a3;
  switch ( (uchar)&v8 )
  {
    case 1u:
      v10 = 2048;
      break;
    case 2u:
      v10 = 4096;
      break;
    case 3u:
      v10 = 4096;
      break;
    case 4u:
      v10 = 0x2000;
      break;
    default:
      break;
  }
  BYTE2(v12) = a4 >> 11;
  HIBYTE(v12) = a5 >> 14;
  Function_20183c4(a1, a2, &v8, 0);
  return Function_2019ebc(v5, v6);
}

//----- (02237784) --------------------------------------------------------
int __fastcall Function_2237784(int result)
{
  dword_223F350[132] = result;
  return result;
}

//----- (02237790) --------------------------------------------------------
int *__fastcall Function_2237790(int a1, int a2, uint *a3, int a4)
{
  int v4;
  uint *v5;
  int v6;
  int *result;

  v4 = a2;
  v5 = a3;
  v6 = a4;
  if ( dword_223F350[132] )
    result = Function_200f174(0, a1, a1, 0x7FFF, 6, 1, dword_223F350[130]);
  else
    result = Function_200f174(0, a1, a1, 0, 6, 1, dword_223F350[130]);
  if ( v5 )
    *v5 = v6;
  dword_223F350[131] = v4;
  return result;
}

//----- (022377F0) --------------------------------------------------------
int __fastcall Function_22377f0(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  result = Function_200f2ac();
  if ( result )
  {
    result = dword_223F350[131];
    *v1 = dword_223F350[131];
  }
  return result;
}

//----- (02237808) --------------------------------------------------------
int __fastcall Function_2237808(int *a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int v7;
  int *v8;
  int v9;
  int result;

  v6 = a2;
  v7 = a3;
  v8 = a1;
  v9 = a4;
  Call_FillMemWithValue(a1, 0, 0x54u);
  v8[1] = 1;
  v8[2] = 1;
  v8[19] = -1;
  v8[4] = v6;
  v8[12] = v7;
  v8[13] = v9;
  v8[14] = a5;
  v8[15] = a6;
  v8[11] = 0;
  v8[16] = 0;
  v8[17] = 66063;
  *((uchar *)v8 + 72) = 15;
  *v8 = 0;
  v8[9] = 0;
  v8[8] = 0;
  v8[5] = 0;
  result = 255;
  v8[20] = 255;
  return result;
}

//----- (02237858) --------------------------------------------------------
uint *__fastcall Function_2237858(uint *result, int a2, int a3, int a4)
{
  result[6] = a2;
  result[7] = a3;
  result[10] = a4;
  return result;
}

//----- (02237860) --------------------------------------------------------
uint *__fastcall Function_2237860(uint *result, int a2, int a3)
{
  *result = a2;
  result[16] = a3;
  return result;
}

//----- (02237868) --------------------------------------------------------
int __fastcall Function_2237868(int result, int a2, int a3)
{
  *(uint *)(result + 32) = a2;
  *(uint *)(result + 36) = a3;
  return result;
}

//----- (02237870) --------------------------------------------------------
int __fastcall Function_2237870(int a1, int a2)
{
  int v2;
  uint *v3;
  int v4;
  uint *v5;
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
  ushort **v18;

  v3 = (uint *)a1;
  if ( a2 != -1 && *(uint *)(a1 + 76) != a2 )
  {
    *(uint *)(a1 + 76) = a2;
    if ( *(uint *)(a1 + 8) == 1 )
      Function_201ada4_ClearTextBox(*(uint *)(a1 + 16), *(uchar *)(a1 + 72));
    if ( v3[19] != -1 )
    {
      v4 = LoadFromMsgNARC(1, 26, v3[13], dword_223F350[130]);
      v5 = (uint *)v3[5];
      v18 = (ushort **)v4;
      if ( !v5 )
        v5 = Function_200b358(dword_223F350[130]);
      v6 = Function_200b29c(v5, v18, v3[19], dword_223F350[130]);
      if ( v3[3] )
      {
        v12 = Function_2002df8_GetLineHeight(v3[16] & 0xFF, 2u);
        Function_2002d7c(v3[16], (int)v6, v12);
        Function_201c294(v3[4]);
        v13 = v3[9];
        v14 = v3[20];
        v15 = v3[17];
        v2 = Function_201d78c(v3[4], v3[16]);
        v3[3] = 0;
      }
      else
      {
        v7 = v3[9];
        v8 = v3[20];
        v9 = v3[17];
        v10 = v3[8];
        v2 = Function_201d78c(v3[4], v3[16]);
      }
      Function_20237bc_FreeMsg((int)v6, v11);
      if ( !v3[5] )
        Function_200b3f0(v5, v16);
      Function_200b190((ushort *)v18);
    }
  }
  v3[20] = 255;
  return v2;
}

//----- (0223795C) --------------------------------------------------------
int __fastcall Function_223795c(uint *a1, uint *a2, int a3, int a4, int a5)
{
  uint *v5;
  uint *v6;
  int v7;
  int v8;
  int v9;

  v5 = a2;
  v6 = (uint *)a2[4];
  v7 = a4;
  if ( *v6 )
  {
    if ( a3 != -1 )
      Function_201c2ac((int)v6, a3);
    if ( v7 != -1 )
      Function_201c2b0(v5[4], v7);
    v8 = Function_2237870((int)v5, a5);
  }
  else
  {
    Function_201a7e8(a1, (int)v6, v5[11] & 0xFF, a3, a4, v5[6], v5[7], v5[12], v5[10]);
    v8 = Function_2237870((int)v5, a5);
  }
  if ( v5[1] == 1 )
  {
    v9 = v5[4];
    if ( *v5 )
      Function_200e060(v9, 0, v5[14] & 0xFFFF, v5[15]);
    else
      Function_200dc48(v9, 0, v5[14], v5[15]);
  }
  return v8;
}

//----- (02237A18) --------------------------------------------------------
int __fastcall Function_2237a18(int a1)
{
  return *(uint *)(a1 + 28) * *(uint *)(a1 + 24);
}

//----- (02237A20) --------------------------------------------------------
int Function_2237a20()
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = 40;
  v2 = 4096;
  v3 = 4096;
  v4 = dword_223F350[130];
  Function_201e88c(&v1, 16, 16);
  Function_201f834(30, dword_223F350[130]);
  Function_201e994();
  return Function_201f8e4();
}

//----- (02237A60) --------------------------------------------------------
BOOL Function_2237a60()
{
  return dword_223F350[141] != 0;
}

//----- (02237A74) --------------------------------------------------------
int **Function_2237a74()
{
  int v0;
  int v1;
  int *v2;
  int *v3;
  int **result;

  Function_20a7944();
  Function_200a784(0, 126, 0, 32, 0, 0x7Eu, 0, 0x20u, dword_223F350[130]);
  dword_223F350[141] = (int)Function_20095c4(128, (int)&dword_223F350[142], dword_223F350[130], v0);
  Function_200964c((int)&dword_223F350[142], 0, 0x100000, v1);
  dword_223F350[260] = 786432;
  v2 = 0;
  v3 = &dword_223F350[128];
  do
  {
    result = Function_2009714(32, v2, dword_223F350[130]);
    v3[88] = (int)result;
    v2 = (int *)((char *)v2 + 1);
    ++v3;
  }
  while ( (int)v2 < 6 );
  return result;
}

//----- (02237AEC) --------------------------------------------------------
int *Function_2237aec()
{
  if ( !dword_223F350[141] )
    ErrorHandler();
  return &dword_223F350[141];
}

//----- (02237B0C) --------------------------------------------------------
int __fastcall Function_2237b0c(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int v7;
  int v9;
  int v10;
  int v11;

  v6 = a1;
  v9 = a3;
  v10 = a4;
  if ( a6 )
    v7 = 2;
  else
    v7 = 1;
  v11 = 1;
  if ( a1 == 16 )
    v11 = 0;
  if ( a2 != -1 )
    dword_223F350[6 * a6 + 222] = (int)Function_200985c(dword_223F350[216], a1, a2, v11, a6, v7, dword_223F350[130]);
  if ( v9 != -1 )
    dword_223F350[6 * a6 + 223] = (int)Function_20098b8(dword_223F350[217], v6, v9, 0, a6, v7, 3, dword_223F350[130]);
  if ( v10 != -1 )
    dword_223F350[6 * a6 + 224] = (int)Function_2009918(dword_223F350[218], v6, v10, v11, a6, 2u, dword_223F350[130]);
  if ( a5 != -1 )
    dword_223F350[6 * a6 + 225] = (int)Function_2009918(dword_223F350[219], v6, a5, v11, a6, 3u, dword_223F350[130]);
  Function_200a328((int *)dword_223F350[6 * a6 + 222]);
  Function_200a640((int *)dword_223F350[6 * a6 + 223]);
  Function_20093b4(
    (int)&dword_223F350[9 * a6 + 234],
    a6,
    a6,
    a6,
    a6,
    -1,
    -1,
    0,
    0,
    dword_223F350[216],
    dword_223F350[217],
    dword_223F350[218],
    dword_223F350[219],
    0,
    0);
  if ( a6 )
    Function_201ff74(0x10u, 1);
  else
    Function_201ff0c(0x10u, 1);
  return SetMainLoopFunctionCall((int)Function_2237e58, 0);
}

//----- (02237C80) --------------------------------------------------------
int *__fastcall Function_2237c80(int a1, int a2, int a3, int a4)
{
  int v4;
  int *result;

  v4 = a2;
  Function_200964c((int)&dword_223F350[142], a1, a2, a4);
  result = &dword_223F350[256];
  dword_223F350[260] = v4;
  return result;
}

//----- (02237CA0) --------------------------------------------------------
int Function_2237ca0()
{
  return Function_2237cac(0);
}

//----- (02237CAC) --------------------------------------------------------
int __fastcall Function_2237cac(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  if ( dword_223F350[258] )
  {
    if ( dword_223F350[259] )
    {
      --dword_223F350[259];
    }
    else
    {
      if ( !Function_2021d34(dword_223F350[258]) && !v1 )
        Function_2021cac(dword_223F350[258], 1);
      Function_2021d28();
      v3 = *(uint *)(v2 + 4);
      if ( v3 < 1572864 )
        *(uint *)(v2 + 4) = v3 + 12288;
    }
  }
  result = dword_223F350[141];
  if ( dword_223F350[141] )
    result = Function_20219f8(dword_223F350[141]);
  return result;
}

//----- (02237D14) --------------------------------------------------------
int __fastcall Function_2237d14(int a1, int a2, int a3, int a4, uint a5)
{
  int v5;
  int v6;
  int v8;
  int *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  short v16;
  int v17;
  int v18;
  int v19;
  int v20;

  v20 = a4;
  v5 = a2;
  if ( !a2 )
  {
    v8 = dword_223F350[141];
    v9 = &dword_223F350[9 * a1 + 234];
    v12 = 0;
    v13 = 4096;
    v14 = 4096;
    v15 = 4096;
    v16 = 0;
    v10 = a3 << 12;
    v11 = a4 << 12;
    v17 = 10;
    if ( a1 )
      v6 = 2;
    else
      v6 = 1;
    v18 = v6;
    v19 = dword_223F350[130];
    if ( v6 == 2 )
      v11 += dword_223F350[260];
    v5 = Function_2021aa0((uint **)&v8);
  }
  Function_2021cc8(v5, 1);
  Function_2021e80(v5, 0);
  Function_2021d6c(v5, a5);
  Function_2021cac(v5, 1);
  return v5;
}

//----- (02237DA0) --------------------------------------------------------
int Function_2237da0()
{
  int v0;
  int *v1;

  if ( dword_223F350[258] )
  {
    Function_2021bd4(dword_223F350[258]);
    dword_223F350[258] = 0;
  }
  if ( dword_223F350[222] )
    Function_200a4e4((int *)dword_223F350[222]);
  if ( dword_223F350[228] )
    Function_200a4e4((int *)dword_223F350[228]);
  if ( dword_223F350[223] )
    Function_200a6dc((int *)dword_223F350[223]);
  if ( dword_223F350[229] )
    Function_200a6dc((int *)dword_223F350[229]);
  v0 = 0;
  v1 = &dword_223F350[141];
  do
  {
    Function_2009754((int *)v1[75]);
    v1[75] = 0;
    ++v0;
    ++v1;
  }
  while ( v0 < 6 );
  Function_2021964((int *)dword_223F350[141]);
  dword_223F350[141] = 0;
  Function_200a878();
  Function_201e958();
  Function_201f8b4();
  return SetMainLoopFunctionCall(0, 0);
}

//----- (02237E4C) --------------------------------------------------------
int __fastcall Function_2237e4c(char a1)
{
  return 1 << (a1 - 10);
}

//----- (02237E58) --------------------------------------------------------
int Function_2237e58()
{
  int result;

  if ( dword_223F350[1065] )
  {
    ((void (__fastcall *)(int *))dword_223F350[1065])(&dword_223F350[128]);
    dword_223F350[1065] = 0;
  }
  Function_201dcac();
  Function_200a858();
  if ( dword_223F350[128] )
    Function_201c2b8(dword_223F350[128]);
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (02237EA8) --------------------------------------------------------
int __fastcall Function_2237ea8(int a1, int a2, int a3, int a4)
{
  char *v4;
  uchar *v5;
  int v6;
  uchar v7;
  int v8;
  uchar *v9;
  uchar v11;
  uchar v12[3];
  int v13;

  v13 = a4;
  v4 = &byte_223DAC8;
  v5 = &v11;
  v6 = 30;
  do
  {
    v7 = *v4++;
    *v5++ = v7;
    --v6;
  }
  while ( v6 );
  v8 = 0;
  if ( v11 == -1 )
    return 0;
  v9 = &v11;
  while ( a1 != *v9 )
  {
    v9 += 2;
    ++v8;
    if ( *v9 == -1 )
      return 0;
  }
  return (uchar)v12[2 * v8];
}

//----- (02237EF8) --------------------------------------------------------
int __fastcall Function_2237ef8(int a1, int a2, int a3, uchar a4, int *a5, int a6)
{
  int *v6;
  int v7;
  int v8;
  uchar v9;
  ushort *v10;
  uchar v11;
  uchar v12;
  uint v13;
  int v14;
  int v15;
  int v16;
  int v17;

  v6 = (int *)a2;
  v7 = a1;
  v8 = a3;
  v9 = a4;
  v10 = (ushort *)a6;
  v11 = Call_DecidePkmnGender(a2);
  v12 = Call_CheckIfShinyPkmn_2((int)v6);
  Function_2075fb4(a6, (ushort)v8, v11, 2u, v12, v9, 0);
  v13 = GetPkmnData(v6, 0, 0);
  Function_20136a4(*v10, v10[1], dword_223F350[130], 0, 0, 10, 10, (int)a5, v13, 0, 2, v8);
  DC_FlushRange((int)a5, 3200);
  v14 = Function_2021f98(v7);
  v15 = NNS_G2dGetImageLocation(v14, 2);
  GXS_LoadOBJ(a5, v15 + 3200, 0xC80u);
  v16 = Function_2021f9c(v7);
  v17 = NNS_G2dGetImagePaletteLocation(v16, 2);
  return Call_LoadFromNARC_RLCN(*v10, v10[2], 5u, v17 + 96, 32, dword_223F350[130]);
}

//----- (02237FB4) --------------------------------------------------------
int __fastcall Function_2237fb4(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  Function_2237b0c(116, 35, 32, 34, 33, 1);
  Function_2237c80(0, 0x100000, v2, v3);
  result = Function_2237d14(1, *(uint *)(v1 + 520), 128, 0, 0);
  *(uint *)(v1 + 520) = result;
  return result;
}

//----- (02237FF4) --------------------------------------------------------
int __fastcall Function_2237ff4(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int result;
  int *v9;
  int v10;
  uchar v11;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_2237b0c(54, 10, 0, 11, 12, 1);
  Function_2237c80(0, 0x100000, v6, v7);
  result = Function_2237d14(1, *(uint *)(v3 + 520), 128, 0, 1u);
  v9 = (int *)(v5 + 8);
  *(uint *)(v3 + 520) = result;
  if ( v4 > 7 )
  {
    if ( v4 != 13 )
      return result;
    goto LABEL_8;
  }
  if ( v4 < 1 )
    return result;
  switch ( v4 )
  {
    case 1:
LABEL_8:
      v10 = GetPkmnData(v9, 5u, 0);
      v11 = GetPkmnData(v9, 0x70u, 0);
      return Function_2237ef8(*(uint *)(v3 + 520), (int)v9, v10, v11, (int *)(v3 + 532), v3 + 3732);
    case 2:
      return Function_2237ef8(*(uint *)(v3 + 520), (int)v9, 494, 0, (int *)(v3 + 532), v3 + 3732);
    case 7:
      result = Function_2237ef8(*(uint *)(v3 + 520), (int)v9, 494, 1u, (int *)(v3 + 532), v3 + 3732);
      break;
  }
  return result;
}

//----- (022380C8) --------------------------------------------------------
int __fastcall Function_22380c8(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int result;

  v4 = a1;
  switch ( (uchar)a1 )
  {
    case 3:
      v3 = *(uint *)(a3 + 4);
      break;
    case 8:
      LOWORD(v3) = 454;
      break;
    case 9:
      LOWORD(v3) = 452;
      break;
    case 0xA:
      LOWORD(v3) = 455;
      break;
    case 0xC:
      LOWORD(v3) = 467;
      break;
    default:
      break;
  }
  v5 = Function_207ce78((ushort)v3, 1u);
  v6 = Function_207ce78((ushort)v3, 2u);
  v7 = Function_207cf40();
  v8 = Function_207cf44();
  Function_2237b0c(16, v5, v6, v7, v8, 1);
  Function_2237c80(0, 0x100000, v9, v10);
  result = Function_2237d14(1, *(uint *)(v4 + 520), 128, 0, 0);
  *(uint *)(v4 + 520) = result;
  return result;
}

//----- (02238174) --------------------------------------------------------
int __fastcall Function_2238174(int a1)
{
  return Call_LoadFromNARC_RLCN(116, 29, 4u, 256, 192, *(uint *)(a1 + 8));
}

//----- (02238194) --------------------------------------------------------
uint __fastcall Function_2238194(uint *a1, ushort *a2, int a3, int a4)
{
  int v4;
  int v5;
  uint *v6;
  char v7;
  uint *v8;
  int v10;
  int v11;

  v11 = a4;
  v4 = (int)a2;
  v5 = *a2;
  v6 = a1;
  v7 = Function_2237ea8(v5, (int)a2, a3, a4);
  LoadFromNARC_RGCN(116, 30, v6, 5u, 0, 5120, 1, dword_223F350[130]);
  v8 = Function_2006fe8_LoadFromNARC_UncompressLZ8(116, 31, 1, dword_223F350[130], 1);
  Function_20a7248((int)v8, &v10);
  Function_2019574((int)v6, 5, (int *)(v10 + 12), 1536);
  free((int)v8);
  Function_2019e2c((int)v6, 5, 0, 0, 0x20u, 0x18u, v7 + 8);
  Function_201c3c0((int)v6, 5);
  dword_223F350[1065] = (int)Function_2238174;
  dword_223F350[128] = (int)v6;
  switch ( (uchar)&dword_223F350[128] )
  {
    case 1u:
    case 2u:
    case 0xDu:
      goto LABEL_4;
    case 3u:
    case 8u:
    case 9u:
    case 0xAu:
    case 0xCu:
      Function_22380c8((int)&dword_223F350[128], v5, v4);
      break;
    case 4u:
    case 5u:
    case 6u:
    case 0xBu:
      Function_2237fb4((int)&dword_223F350[128]);
      break;
    case 7u:
      dword_223F350[259] = 120;
LABEL_4:
      Function_2237ff4((int)&dword_223F350[128], v5, v4);
      break;
    default:
      return Function_2021cac(dword_223F350[258], 0);
  }
  return Function_2021cac(dword_223F350[258], 0);
}

//----- (0223829C) --------------------------------------------------------
uint __fastcall Function_223829c(uchar *a1, int a2, uint a3)
{
  int v3;
  uchar *v4;
  int v5;
  int v6;
  short v7;
  int v8;
  int v9;
  uint v10;
  int v11;
  char *v12;
  short v13;
  uchar *v14;
  uint v16;
  char v17;
  short v18;
  short v19;

  v3 = a2;
  v4 = a1;
  v16 = a3;
  v5 = malloc(a3, 512);
  Function_20d316c(v5, 40961);
  v7 = Function_20d32d4(v5, v4, 0x50u, v6);
  free(v5);
  OS_GetMacAddress((uint)&v17, v8, v9, v10);
  v11 = 0;
  v12 = &v17;
  v19 = v18;
  v13 = -10631;
  v18 = v7;
  do
  {
    ++v11;
    *(ushort *)v12 ^= v13;
    v13 = *(ushort *)v12;
    v12 += 2;
  }
  while ( v11 < 4 );
  v14 = (uchar *)malloc(v16, 260);
  Function_20a49a4(v14, (int)&v17, 8u);
  Function_2239420(v14, v4 + 80, 856, v3);
  return free((int)v14);
}

//----- (02238324) --------------------------------------------------------
uint __fastcall Function_2238324(uchar *a1, int a2, uint a3)
{
  int v3;
  uchar *v4;
  int v5;
  int v6;
  short v7;
  uchar *v8;
  char *v9;
  int v10;
  short v11;
  uchar *v12;
  uint v14;
  char v15;
  char v16;
  char v17;
  char v18;
  char v19;
  char v20;
  short v21;

  v3 = a2;
  v4 = a1;
  v14 = a3;
  v5 = malloc(a3, 512);
  Function_20d316c(v5, 40961);
  v7 = Function_20d32d4(v5, v4, 0x50u, v6);
  free(v5);
  v8 = (uchar *)Function_2033f3c(0);
  v9 = &v15;
  v10 = 0;
  v15 = v8[4];
  v16 = v8[5];
  v17 = v8[6];
  v18 = v8[7];
  v19 = v8[8];
  v20 = v8[9];
  v21 = *(ushort *)&v17;
  v11 = -10631;
  *(ushort *)&v17 = v7;
  do
  {
    ++v10;
    *(ushort *)v9 ^= v11;
    v11 = *(ushort *)v9;
    v9 += 2;
  }
  while ( v10 < 4 );
  v12 = (uchar *)malloc(v14, 260);
  Function_20a49a4(v12, (int)&v15, 8u);
  Function_2239420(v12, v4 + 80, 856, v3);
  return free((int)v12);
}

//----- (022383C4) --------------------------------------------------------
int __fastcall Function_22383c4(int a1, int a2, int a3)
{
  int result;

  if ( !a3 )
    result = Function_2005748(0x5DCu);
  return result;
}

//----- (022383DC) --------------------------------------------------------
int Function_22383dc()
{
  int result;
  int v1;
  int v2;
  char v3;

  result = (word_27FFFA8 & 0x8000) >> 15;
  if ( !result )
  {
    result = Function_20d08c0();
    if ( !result )
      Function_20d12e4(0, v1, v2, v3);
  }
  return result;
}

//----- (02238400) --------------------------------------------------------
int __fastcall Function_2238400(int a1)
{
  int result;

  if ( a1 != 1 )
    return OS_DisableIrqMask(0x2000);
  LOWORD(REG_IME) = 0;
  OS_SetIrqFunction((uint)&REG_IME >> 13, (int)Function_22383dc);
  OS_EnableIrqMask(0x2000);
  result = 1;
  LOWORD(REG_IME) = 1;
  return result;
}

//----- (0223843C) --------------------------------------------------------
void Function_223843c()
{
  ;
}

//----- (02238440) --------------------------------------------------------
int Function_2238440()
{
  int result;

  LOWORD(REG_IME) = 0;
  OS_SetIrqFunction((uint)&REG_IME >> 13, (int)Function_223843c);
  OS_EnableIrqMask(0x2000);
  result = 1;
  LOWORD(REG_IME) = 1;
  return result;
}

//----- (0223846C) --------------------------------------------------------
int __fastcall Function_223846c(int a1)
{
  int result;

  dword_223F350[134] = a1;
  result = 0;
  dword_223F350[133] = 0;
  return result;
}

//----- (0223847C) --------------------------------------------------------
int __fastcall Function_223847c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int result;

  switch ( LOBYTE(dword_223F350[133]) )
  {
    case 0:
      Function_2017de0(4);
      Function_2024814(dword_223F350[134], 2);
      ++dword_223F350[133];
      goto LABEL_12;
    case 1:
      v4 = Function_2024828(dword_223F350[134], a2, a3, a4);
      v5 = v4;
      switch ( v4 )
      {
        case 3:
          dword_223F350[133] = 3;
          break;
        case 2:
          dword_223F350[133] = 2;
          break;
        case 1:
          dword_223F350[133] = 4;
          break;
      }
      if ( (uint)(v4 - 2) <= 1 )
        Function_2017df0(4);
      result = v5;
      break;
    default:
LABEL_12:
      result = 0;
      break;
  }
  return result;
}

//----- (022384F4) --------------------------------------------------------
int Function_22384f4()
{
  int result;

  result = dword_223F350[133];
  if ( dword_223F350[133] == 4 )
  {
    result = 1;
    dword_223F350[133] = 1;
  }
  return result;
}

//----- (0223850C) --------------------------------------------------------
int Function_223850c()
{
  Function_2024850(dword_223F350[134]);
  dword_223F350[133] = 3;
  return Function_2017df0(4);
}

//----- (02238528) --------------------------------------------------------
int Function_2238528()
{
  return dword_223F350[133];
}

//----- (02238534) --------------------------------------------------------
int __fastcall Function_2238534(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( dword_223F350[1067] )
    ((void (*)(const char *, ...))dword_223F350[1067])("%s -> ", off_223F0E4[*(uint *)(dword_223F350[1066] + 4432)]);
  result = dword_223F350[1066];
  *(uint *)(dword_223F350[1066] + 4432) = v1;
  if ( dword_223F350[1067] )
    result = ((int (*)(const char *, ...))dword_223F350[1067])(
               "%s\n",
               off_223F0E4[*(uint *)(dword_223F350[1066] + 4432)]);
  return result;
}

//----- (02238584) --------------------------------------------------------
int __fastcall Function_2238584(int result)
{
  if ( (uint)(*(uint *)(dword_223F350[1066] + 4432) - 9) > 1 )
    *(uint *)(dword_223F350[1066] + 4436) = result;
  return result;
}

//----- (022385A0) --------------------------------------------------------
int Function_22385a0()
{
  void (__fastcall *v0)(int);
  int result;
  void (__fastcall *v2)(uint);

  if ( *(uint *)(dword_223F350[1066] + 4432) == 4 )
    OS_Panic();
  Function_2238534(2);
  *(ushort *)(dword_223F350[1066] + 4044) = -1;
  *(ushort *)(dword_223F350[1066] + 4042) = -1;
  *(ushort *)(dword_223F350[1066] + 4040) = -1;
  if ( Function_2238624() )
  {
    *(ushort *)(dword_223F350[1066] + 4440) = 2;
    v2 = *(void (__fastcall **)(uint))(dword_223F350[1066] + 4476);
    if ( v2 )
      v2(0);
    result = 1;
  }
  else
  {
    Function_2238534(9);
    v0 = *(void (__fastcall **)(int))(dword_223F350[1066] + 4476);
    if ( v0 )
      v0(4);
    result = 0;
  }
  return result;
}

//----- (02238624) --------------------------------------------------------
int Function_2238624()
{
  int v0;
  int result;
  uint v2;
  int v3;
  int i;
  int v5;
  int v6;
  int v7;
  int v8;

  if ( *(uint *)(dword_223F350[1066] + 4432) != 2 )
    OS_Panic();
  v0 = WM_GetAllowedChannel();
  if ( v0 == 0x8000 )
  {
    Function_2238584(3);
    result = 0;
  }
  else if ( v0 )
  {
    v2 = *(ushort *)(dword_223F350[1066] + 4470);
    if ( v2 < 0x10 )
    {
      *(ushort *)(dword_223F350[1066] + 4036) = v2;
    }
    else
    {
      v3 = v2 - 16;
      for ( i = 0; i < 13; ++i )
      {
        s32_div_f(v3 + 1, 13);
        if ( (1 << v3) & v0 )
          break;
      }
      *(ushort *)(dword_223F350[1066] + 4470) = v3 + 16;
      *(ushort *)(dword_223F350[1066] + 4036) = v3 + 1;
    }
    *(ushort *)(dword_223F350[1066] + 4038) = 220;
    v5 = dword_223F350[1066];
    *(uint *)(dword_223F350[1066] + 4032) = dword_223F350[1066] + 3840;
    if ( *(ushort *)(dword_223F350[1066] + 4440) == 3 )
    {
      v6 = 0;
      while ( v6 < 6 )
      {
        v7 = dword_223F350[1066] + v6;
        v5 = *(uchar *)(dword_223F350[1066] + v6++ + 4464);
        *(uchar *)(v7 + 4040) = v5;
      }
    }
    v8 = WM_StartScan((int)Function_2238720, dword_223F350[1066] + 4032, dword_223F350[1066], v5);
    if ( v8 == 2 )
    {
      result = 1;
    }
    else
    {
      Function_2238584(v8);
      result = 0;
    }
  }
  else
  {
    Function_2238584(22);
    result = 0;
  }
  return result;
}

//----- (02238720) --------------------------------------------------------
int __fastcall Function_2238720(int a1)
{
  int v1;
  int v2;
  int result;
  int (__fastcall *v4)(int);
  int (__fastcall *v5)(int);
  int v6;
  char v7;
  int v8;
  void (__fastcall *v9)(int);
  int (__fastcall *v10)(int);

  v1 = a1;
  v2 = *(ushort *)(a1 + 2);
  if ( v2 )
  {
    Function_2238584(v2);
    Function_2238534(9);
    result = 4476;
    v4 = *(int (__fastcall **)(int))(dword_223F350[1066] + 4476);
    if ( v4 )
      result = v4(4);
  }
  else if ( *(uint *)(dword_223F350[1066] + 4432) == 2 )
  {
    result = *(ushort *)(v1 + 8);
    if ( result == 3 )
      return result;
    if ( result != 4 && result == 5 )
    {
      DC_InvalidateRange(dword_223F350[1066] + 3840, 192);
      if ( *(ushort *)(v1 + 54) >= 8u && *(uint *)(v1 + 60) == 4195096 )
      {
        *(uint *)(dword_223F350[1066] + 4460) = *(ushort *)(v1 + 18);
        if ( *(ushort *)(dword_223F350[1066] + 4440) == 2 )
        {
          Function_2238ab4(v1 + 72);
          v6 = 0;
          do
          {
            v7 = *(uchar *)(v1 + v6 + 10);
            v8 = dword_223F350[1066] + v6++;
            *(uchar *)(v8 + 4464) = v7;
          }
          while ( v6 < 6 );
          *(ushort *)(dword_223F350[1066] + 4470) -= 15;
          v9 = *(void (__fastcall **)(int))(dword_223F350[1066] + 4476);
          if ( v9 )
            v9(1);
        }
        if ( Function_2238b34(v1 + 72) )
        {
          *(ushort *)(dword_223F350[1066] + 4440) = 4;
          return Function_22389c8();
        }
      }
      else if ( dword_223F350[1067] )
      {
        ((void (*)(const char *, ...))dword_223F350[1067])(
          "not my parent ggid (%d != %d)\n",
          *(uint *)(v1 + 60),
          4195096);
      }
    }
    result = Function_2238624();
    if ( !result )
    {
      Function_2238534(9);
      result = 4476;
      v10 = *(int (__fastcall **)(int))(dword_223F350[1066] + 4476);
      if ( v10 )
        result = v10(4);
    }
  }
  else
  {
    result = Function_2238858();
    if ( !result )
    {
      Function_2238534(9);
      result = 4476;
      v5 = *(int (__fastcall **)(int))(dword_223F350[1066] + 4476);
      if ( v5 )
        result = v5(4);
    }
  }
  return result;
}

//----- (02238858) --------------------------------------------------------
int __fastcall Function_2238858(int a1, int a2, int a3, int a4)
{
  int v4;

  v4 = WM_EndScan((int)Function_2238874, a2, a3, a4);
  if ( v4 == 2 )
    return 1;
  Function_2238584(v4);
  return 0;
}

//----- (02238874) --------------------------------------------------------
int __fastcall Function_2238874(int a1)
{
  int v1;
  int result;

  v1 = *(ushort *)(a1 + 2);
  if ( v1 )
    result = Function_2238584(v1);
  else
    result = Function_2238534(1);
  return result;
}

//----- (0223888C) --------------------------------------------------------
int __fastcall Function_223888c(int a1)
{
  int result;
  int (__fastcall *v2)(int);

  if ( *(ushort *)(a1 + 2) )
    return Function_2238534(10);
  Function_2238534(0);
  result = 4476;
  v2 = *(int (__fastcall **)(int))(dword_223F350[1066] + 4476);
  if ( v2 )
    result = v2(3);
  return result;
}

//----- (022388BC) --------------------------------------------------------
BOOL Function_22388bc()
{
  *(uint *)(dword_223F350[1066] + 4436) = 0;
  return Function_2238908() != 0;
}

//----- (022388E0) --------------------------------------------------------
int __fastcall Function_22388e0(int a1)
{
  int result;
  int (__fastcall *v2)(int);

  result = *(ushort *)(a1 + 2);
  if ( result == 8 )
  {
    Function_2238534(9);
    result = 4476;
    v2 = *(int (__fastcall **)(int))(dword_223F350[1066] + 4476);
    if ( v2 )
      result = v2(4);
  }
  return result;
}

//----- (02238908) --------------------------------------------------------
int Function_2238908()
{
  int v0;

  Function_2238534(3);
  v0 = Function_20cecc8(dword_223F350[1066], (int)Function_223893c, 2u);
  if ( v0 == 2 )
    return 1;
  Function_2238584(v0);
  Function_2238534(10);
  return 0;
}

//----- (0223893C) --------------------------------------------------------
int __fastcall Function_223893c(int a1)
{
  int v1;
  int result;
  int v3;

  v1 = *(ushort *)(a1 + 2);
  if ( v1 )
  {
    Function_2238584(v1);
    result = Function_2238534(10);
  }
  else
  {
    v3 = WM_SetIndCallback((int)Function_22388e0);
    if ( v3 )
    {
      Function_2238584(v3);
      result = Function_2238534(10);
    }
    else
    {
      Function_2238534(1);
      result = Function_22385a0();
    }
  }
  return result;
}

//----- (02238978) --------------------------------------------------------
int Function_2238978()
{
  int v0;
  int v1;
  int v2;
  void (__fastcall *v3)(int);

  if ( *(uint *)(dword_223F350[1066] + 4432) != 1 )
    OS_Panic();
  Function_2238534(3);
  if ( WM_End((int)Function_223888c, v0, v1, v2) == 2 )
    return 1;
  Function_2238534(9);
  v3 = *(void (__fastcall **)(int))(dword_223F350[1066] + 4476);
  if ( v3 )
    v3(4);
  return 0;
}

//----- (022389C8) --------------------------------------------------------
int Function_22389c8()
{
  int result;

  if ( *(uint *)(dword_223F350[1066] + 4432) == 1 )
    result = Function_2238978();
  else
    result = Function_22389ec();
  return result;
}

//----- (022389EC) --------------------------------------------------------
int Function_22389ec()
{
  int v0;

  Function_2238534(3);
  v0 = WM_Reset((int)Function_2238a10);
  if ( v0 == 2 )
    return 1;
  Function_2238584(v0);
  return 0;
}

//----- (02238A10) --------------------------------------------------------
int __fastcall Function_2238a10(int a1)
{
  int v1;
  int result;
  int (__fastcall *v3)(int);

  v1 = a1;
  if ( *(ushort *)(a1 + 2) )
  {
    Function_2238534(9);
    Function_2238584(*(ushort *)(v1 + 2));
    result = 4476;
    v3 = *(int (__fastcall **)(int))(dword_223F350[1066] + 4476);
    if ( v3 )
      result = v3(4);
  }
  else
  {
    Function_2238534(1);
    result = Function_2238978();
  }
  return result;
}

//----- (02238A4C) --------------------------------------------------------
BOOL __fastcall Function_2238a4c(int a1, int a2, int a3)
{
  dword_223F350[1066] = (a3 + 31) & 0xFFFFFFE0;
  *(uint *)(dword_223F350[1066] + 4432) = 0;
  *(ushort *)(dword_223F350[1066] + 4440) = 1;
  *(uint *)(dword_223F350[1066] + 4472) = a1;
  *(ushort *)(dword_223F350[1066] + 4444) = 0;
  *(ushort *)(dword_223F350[1066] + 4446) = 0;
  *(uint *)(dword_223F350[1066] + 4476) = a2;
  *(ushort *)(dword_223F350[1066] + 4470) = 16;
  *(uint *)(dword_223F350[1066] + 4168) = 0;
  *(uint *)(dword_223F350[1066] + 4460) = -1;
  return Function_22388bc();
}

//----- (02238AB4) --------------------------------------------------------
int __fastcall Function_2238ab4(int a1)
{
  int result;
  int i;

  *(uint *)(dword_223F350[1066] + 4168) = 0;
  *(ushort *)(dword_223F350[1066] + 4440) = 3;
  *(ushort *)(dword_223F350[1066] + 4442) = *(ushort *)a1;
  *(uint *)(dword_223F350[1066] + 4448) = *(uint *)(a1 + 4);
  *(ushort *)(dword_223F350[1066] + 4444) = u32_div_f(*(uint *)(dword_223F350[1066] + 4448) - 1, 104) + 1;
  result = 0;
  *(ushort *)(dword_223F350[1066] + 4446) = 0;
  *(uint *)(dword_223F350[1066] + 4452) = 0;
  for ( i = dword_223F350[1066]; result < *(ushort *)(dword_223F350[1066] + 4444); ++result )
  {
    *(uchar *)(i + result + 4480) = 0;
    i = dword_223F350[1066];
  }
  return result;
}

//----- (02238B34) --------------------------------------------------------
int __fastcall Function_2238b34(ushort *a1)
{
  int *v1;
  uint v2;
  void (__fastcall *v3)(int);
  int v5;
  void (__fastcall *v6)(int);
  int v7;
  int v8;
  void (__fastcall *v9)(int);

  v1 = (int *)a1;
  if ( *(ushort *)(dword_223F350[1066] + 4442) != *a1
    || *(uint *)(dword_223F350[1066] + 4448) != *((uint *)a1 + 1) )
  {
    v2 = *(uint *)(dword_223F350[1066] + 4452);
    *(uint *)(dword_223F350[1066] + 4452) = v2 + 1;
    if ( v2 < 0x10 )
      return 0;
    Function_2238ab4((int)a1);
    v3 = *(void (__fastcall **)(int))(dword_223F350[1066] + 4476);
    if ( v3 )
      v3(5);
  }
  v5 = *((ushort *)v1 + 1);
  if ( v5 == 0xFFFF )
  {
    MI_CpuCopy32(v1 + 2, (uint *)(dword_223F350[1066] + 4064), 104);
    *(uint *)(dword_223F350[1066] + 4168) = 1;
    return 0;
  }
  *(uint *)(dword_223F350[1066] + 4456) = v5;
  if ( *((ushort *)v1 + 1) >= (uint)*(ushort *)(dword_223F350[1066] + 4444) )
  {
    v6 = *(void (__fastcall **)(int))(dword_223F350[1066] + 4476);
    if ( v6 )
      v6(4);
    Function_2238534(9);
  }
  v7 = *((ushort *)v1 + 1);
  if ( *(uchar *)(dword_223F350[1066] + 4480 + v7) )
    return 0;
  *(uchar *)(dword_223F350[1066] + 4480 + v7) = 1;
  v8 = *((ushort *)v1 + 1);
  if ( v8 == *(ushort *)(dword_223F350[1066] + 4444) - 1 )
    MI_CpuCopy32(
      v1 + 2,
      (uint *)(*(uint *)(dword_223F350[1066] + 4472) + 104 * *((ushort *)v1 + 1)),
      *(uint *)(dword_223F350[1066] + 4448) - 104 * *((ushort *)v1 + 1));
  else
    MI_CpuCopy32(v1 + 2, (uint *)(*(uint *)(dword_223F350[1066] + 4472) + 104 * v8), 104);
  if ( ++*(ushort *)(dword_223F350[1066] + 4446) != *(ushort *)(dword_223F350[1066] + 4444) )
    return 0;
  v9 = *(void (__fastcall **)(int))(dword_223F350[1066] + 4476);
  if ( v9 )
    v9(2);
  return 1;
}

//----- (02238C70) --------------------------------------------------------
int __fastcall Function_2238c70(int a1, uint a2)
{
  int v2;
  uint v3;
  uint v4;
  int v5;

  v2 = 0;
  v3 = 0;
  v4 = a2 >> 1;
  if ( v4 )
  {
    do
    {
      v5 = (v2 + *(ushort *)(a1 + 2 * v3)) & 0xFFFF;
      v3 = (v3 + 1) & 0xFFFF;
      v2 = ((v5 >> 15) | 2 * v5) & 0xFFFF;
    }
    while ( v3 < v4 );
  }
  return v2;
}

//----- (02238CA0) --------------------------------------------------------
BOOL Function_2238ca0()
{
  short *v0;
  short v1;
  int v2;
  short v4;
  short v5;
  short v6;
  short v7;

  v4 = *(ushort *)(dword_223F350[1066] + 4464);
  v7 = *(ushort *)(dword_223F350[1066] + 4466);
  v0 = &v4;
  v6 = *(ushort *)(dword_223F350[1066] + 4468);
  v1 = 16290;
  v5 = *(ushort *)(dword_223F350[1066] + 4442);
  v2 = 0;
  do
  {
    ++v2;
    *v0 ^= v1;
    v1 = *v0;
    ++v0;
  }
  while ( v2 < 4 );
  Function_20a49a4((uchar *)(dword_223F350[1066] + 4172), (int)&v4, 8u);
  Function_2239420(
    dword_223F350[1066] + 4172,
    *(uint *)(dword_223F350[1066] + 4472),
    *(uint *)(dword_223F350[1066] + 4448),
    *(uint *)(dword_223F350[1066] + 4472));
  MIi_CpuClear32(0, (uint *)(dword_223F350[1066] + 4172), 260);
  return *(ushort *)(dword_223F350[1066] + 4442) == Function_2238c70(
                                                                *(uint *)(dword_223F350[1066] + 4472),
                                                                *(uint *)(dword_223F350[1066] + 4448));
}

//----- (02238D4C) --------------------------------------------------------
int Function_2238d4c()
{
  return 5792;
}

//----- (02238D54) --------------------------------------------------------
int Function_2238d54()
{
  int result;

  if ( *(uint *)(dword_223F350[1066] + 4168) )
    result = dword_223F350[1066] + 4064;
  else
    result = 0;
  return result;
}

//----- (02238D74) --------------------------------------------------------
uint __fastcall Function_2238d74(int a1, int a2)
{
  int v2;

  v2 = malloc(0x56u, ((a2 + 36) & 0xFFFFFFE0) + 32);
  *(uint *)(((v2 + 32) & 0xFFFFFFE0) - 4) = v2;
  return (v2 + 32) & 0xFFFFFFE0;
}

//----- (02238D94) --------------------------------------------------------
uint __fastcall Function_2238d94(int a1, int a2)
{
  uint result;

  if ( a2 )
    result = free(*(uint *)(a2 - 4));
  return result;
}

//----- (02238DA4) --------------------------------------------------------
int __fastcall Function_2238da4(uint *a1)
{
  uint *v1;
  int v3;
  int v4;

  v1 = a1;
  ((void (__fastcall *)(int *, int *))dword_21D75F4[0])(&v3, &v4);
  v1[2459] = ((int (__fastcall *)(int, int))dword_21D1E30[67])(-v3, v4);
  v1[2460] = -v3;
  v1[2461] = v4;
  v1[2458] = 1;
  dword_223F350[1072] = 1;
  v1[2463] = 0;
  Function_222d344((int)v1, 0);
  return 4111;
}

//----- (02238DF8) --------------------------------------------------------
int Function_2238df8()
{
  char v1;

  if ( ((int (*)(void))dword_21D788C[220])() != 4 )
    return 0;
  ((void (__fastcall *)(char *))dword_21D7EAC[3])(&v1);
  return 1;
}

//----- (02238E20) --------------------------------------------------------
int __fastcall Function_2238e20(int a1, uint *a2, int a3)
{
  int result;

  dword_223F350[1068] = 0;
  dword_223F350[1071] = 0;
  *(uint *)(a1 + 5712) = a3;
  result = 4114;
  *a2 = 4114;
  return result;
}

//----- (02238E44) --------------------------------------------------------
int __fastcall Function_2238e44(int a1, int a2, int *a3, int a4, int a5)
{
  int *v5;
  int result;

  v5 = a3;
  dword_223F350[1069] = 0;
  dword_223F350[1070] = a2;
  *(uint *)(a1 + 5712) = a4;
  *a3 = 4115;
  result = ((int (__fastcall *)(int (*)()))dword_21D8018[498])(Function_2238e88);
  if ( !result )
  {
    result = a5;
    *v5 = a5;
  }
  return result;
}

//----- (02238E78) --------------------------------------------------------
int *__fastcall Function_2238e78(int a1, int a2)
{
  int *result;

  result = &dword_223F350[1068];
  dword_223F350[1068] = 1;
  dword_223F350[1071] = a2;
  return result;
}

//----- (02238E88) --------------------------------------------------------
int *Function_2238e88()
{
  int *result;

  result = &dword_223F350[1068];
  dword_223F350[1069] = 1;
  return result;
}

//----- (02238E94) --------------------------------------------------------
int Function_2238e94()
{
  int v0;
  int v1;
  int v2;
  int *v3;
  int v4;
  int v5;

  Function_2039794();
  v0 = Function_2038514();
  v3 = UnloadOverlay60(v0, v1, v2);
  UnloadOverlay4((int)v3, v4, v5);
  return Function_20334cc();
}

//----- (02238EAC) --------------------------------------------------------
int __fastcall Function_2238eac(int a1, int *a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  uint *v6;
  int (*v7)(void);
  uint v8;
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
  int result;

  v2 = a2;
  v3 = LoadOverlayData1c(a1);
  v6 = (uint *)v3;
  v7 = *(int (**)(void))(v3 + 9852);
  if ( v7 && v7() == 1 )
    *v2 = Function_2238da4(v6);
  v8 = *v2 - 4096;
  if ( v8 <= 0x13 )
    JUMPOUT(__CS__, *((short *)&off_2238EE6 + v8) + 35884776);
  switch ( *(uchar *)v2 )
  {
    case 0:
      v9 = Function_2033478();
      v12 = LoadOverlay4(v9, v10, v11);
      LoadOverlay60(v12, v13, v14);
      *v2 = 4097;
      goto LABEL_82;
    case 1:
      if ( Function_20334a4() )
      {
        ((void (__fastcall *)(uint (__fastcall *)(int, int), uint (__fastcall *)(int, int)))dword_21D776C[0])(
          Function_2238d74,
          Function_2238d94);
        Function_20384c0(v6[1]);
        *v2 = 4098;
      }
      goto LABEL_82;
    case 2:
      ((void (__fastcall *)(uint *, int, int, int))dword_21D788C[15])(v6 + 1402, 2, 1, 20);
      v15 = ((int (__fastcall *)(int))dword_21D788C[40])(2);
      ((void (__fastcall *)(int))dword_21D788C[60])(v15);
      Function_2039734();
      *v2 = 4099;
      v6[2462] = 0;
      goto LABEL_82;
    case 3:
      v16 = ((int (*)(void))dword_21D788C[150])();
      if ( ((int (__fastcall *)(int))dword_21D788C[128])(v16) )
      {
        if ( Function_2238df8() == 1 )
        {
          if ( v6[2462] == 1 )
          {
            dword_223F350[1070] = 3;
            *v2 = 4109;
          }
          else
          {
            *v2 = 4100;
          }
        }
        else
        {
          *v2 = Function_2238da4(v6);
        }
      }
      if ( dword_21BF6C4 & 2 )
        v6[2462] = 1;
      goto LABEL_82;
    case 4:
      if ( ((int (*)(void))dword_21D8018[113])() )
        *v2 = 4101;
      else
        *v2 = Function_2238da4(v6);
      goto LABEL_82;
    case 5:
      v17 = ((int (*)(void))dword_21D8018[162])();
      switch ( v17 )
      {
        case 3:
          *v2 = 4102;
          v6[2463] = dword_21D8018;
          break;
        case 4:
          *v2 = Function_2238da4(v6);
          ((void (*)(void))dword_21D788C[329])();
          break;
        case 5:
          dword_223F350[1070] = 3;
          *v2 = 4109;
          break;
      }
      if ( dword_21BF6C4 & 2 )
        ((void (*)(void))dword_21D8018[224])();
      goto LABEL_82;
    case 6:
      if ( ((int (__fastcall *)(int *(__fastcall *)(int, int), const char *, const char *))dword_21D8018[428])(
             Function_2238e78,
             "CPUE",
             "DwuCXmdJfPVLBnKA") )
      {
        Function_2238e20((int)v6, v2, 4103);
      }
      else
      {
        *v2 = Function_2238da4(v6);
      }
      goto LABEL_82;
    case 7:
      if ( v6[2462] == 1 )
      {
        Function_2238e44((int)v6, 3, v2, 4108, 4108);
      }
      else if ( ((int (*)(void))dword_21D8018[517])() )
      {
        *v2 = 4104;
      }
      else
      {
        *v2 = Function_2238da4(v6);
      }
      goto LABEL_82;
    case 8:
      if ( ((int (__fastcall *)(uint *))dword_21D8018[530])(v6 + 1429) )
        Function_2238e20((int)v6, v2, 4105);
      else
        *v2 = Function_2238da4(v6);
      goto LABEL_82;
    case 9:
      if ( v6[1429] == 1 )
      {
        if ( ((int (__fastcall *)(int *, uint, int))dword_21D8018[539])(&dword_223F350[1073], 0, 10) )
          Function_2238e20((int)v6, v2, 4106);
        else
          *v2 = Function_2238da4(v6);
      }
      else
      {
        Function_2238e44((int)v6, 2, v2, 4109, 4109);
      }
      goto LABEL_82;
    case 0xA:
      if ( ((int (__fastcall *)(int *, uint *, int))dword_21D8018[557])(&dword_223F350[1073], v6 + 1430, 4096) )
      {
        *v2 = 4107;
        v6[2457] = 0;
      }
      else
      {
        *v2 = Function_2238da4(v6);
      }
      goto LABEL_82;
    case 0xB:
      if ( dword_223F350[1068] )
      {
        if ( v6[2462] )
          Function_2238e44((int)v6, 3, v2, 4109, 4109);
        else
          Function_2238e44((int)v6, 1, v2, 4109, 4109);
      }
      else if ( dword_21BF6C4 & 2 )
      {
        Function_2238e44((int)v6, 3, v2, 4108, 4108);
      }
      else if ( ((int (__fastcall *)(uint *, uint *))dword_21D8018[577])(v6 + 2455, v6 + 2456) == 1 )
      {
        v18 = u32_div_f(100 * v6[2455], v6[2456]);
        if ( v6[2457] != v18 )
          v6[2457] = v18;
      }
      goto LABEL_82;
    case 0xC:
      if ( ((int (*)(void))dword_21D8018[570])() )
      {
        v6[2463] = 0;
        Function_2238e94();
        result = dword_223F350[1070];
      }
      else
      {
        *v2 = 4109;
LABEL_82:
        result = 0;
      }
      return result;
    case 0xD:
      if ( ((int (__stdcall *)(uint, int, int, int))dword_21D788C[353])(v8, v4, v5, 4096) != 1 )
        goto LABEL_82;
      v6[2463] = 0;
      Function_2238e94();
      return dword_223F350[1070];
    case 0xF:
      if ( dword_223F350[1072] == 1 )
      {
        Function_222e13c((int)v6, v4, v5, 4096);
        if ( (uint)(v6[2461] - 5) > 1 )
          *v2 = 4113;
        else
          Function_2238e44((int)v6, 3, v2, 4113, 4112);
      }
      goto LABEL_82;
    case 0x10:
      if ( !(dword_21BF6C4 & 1) )
        goto LABEL_82;
      v6[2463] = 0;
      ((void (*)(void))dword_21D76E8[0])();
      Function_2238e94();
      return 4;
    case 0x11:
      ((void (*)(void))dword_21D788C[329])();
      *v2 = 4112;
      goto LABEL_82;
    case 0x12:
      if ( dword_223F350[1068] == 1 )
      {
        dword_223F350[1068] = 0;
        if ( dword_223F350[1071] )
          *v2 = Function_2238da4(v6);
        else
          *v2 = v6[1428];
      }
      else if ( dword_21BF6C4 & 2 )
      {
        v6[2462] = 1;
      }
      goto LABEL_82;
    case 0x13:
      if ( dword_223F350[1069] == 1 )
      {
        dword_223F350[1069] = 0;
        *v2 = v6[1428];
      }
      else if ( dword_21BF6C4 & 2 )
      {
        v6[2462] = 1;
      }
      goto LABEL_82;
    default:
      goto LABEL_82;
  }
}

//----- (022392E4) --------------------------------------------------------
int __fastcall Function_22392e4(int a1)
{
  int result;

  if ( a1 == 1 )
    LOWORD(result) = 1;
  else
    LOWORD(result) = 478;
  return (ushort)result;
}

//----- (022392F8) --------------------------------------------------------
int __fastcall Function_22392f8(char a1)
{
  int result;

  switch ( a1 )
  {
    case 2:
    case 4:
    case 7:
      result = 436;
      break;
    case 3:
      result = 439;
      break;
    case 5:
      result = 438;
      break;
    default:
      result = 234;
      break;
  }
  return result;
}

//----- (02239334) --------------------------------------------------------
int __fastcall Function_2239334(char a1)
{
  int result;

  switch ( a1 )
  {
    case 2:
    case 4:
    case 7:
      result = 437;
      break;
    case 3:
      result = 440;
      break;
    case 5:
      result = 436;
      break;
    default:
      result = 235;
      break;
  }
  return result;
}

//----- (0223936C) --------------------------------------------------------
int __fastcall Function_223936c(int a1, ushort *a2, int a3, int a4)
{
  int v4;
  uint v5;
  ushort *v6;
  char *v7;
  uint v8;
  int v9;
  int v10;
  ushort *v11;
  int v13;
  int v14;
  ushort *v15;
  int v16;

  v4 = a4;
  v14 = a1;
  v15 = a2;
  v16 = a3;
  v5 = 0;
  if ( a3 != 1 )
  {
    v6 = a2;
    v7 = (char *)dword_223DAE8 + 2 * (a4 != 1);
    do
    {
      v8 = *(uchar *)(v14 + v5);
      if ( v8 == 255 )
        break;
      if ( v8 >= 0xF7 )
      {
        v9 = v16 - 1;
        if ( (uint)(v16 - 1) >= 0xA )
          v9 = 10;
        v10 = 0;
        if ( v9 > 0 )
        {
          v11 = v15;
          do
          {
            ++v10;
            *v11 = 428;
            ++v11;
          }
          while ( v10 < v9 );
        }
        v15[v10] = -1;
        return 0;
      }
      v13 = *(ushort *)&v7[4 * v8];
      switch ( v13 )
      {
        case 1:
          *v6 = Function_22392e4(v4);
          break;
        case 234:
          *v6 = Function_22392f8(v4);
          break;
        case 235:
          *v6 = Function_2239334(v4);
          break;
        default:
          *v6 = v13;
          break;
      }
      ++v5;
      ++v6;
    }
    while ( v5 < v16 - 1 );
  }
  v15[v5] = -1;
  return 1;
}

//----- (02239420) --------------------------------------------------------
int __fastcall Function_2239420(uchar *a1, char *a2, int a3, uchar *a4)
{
  int v4;
  int v5;
  int result;
  uint v7;
  uint v8;
  int v9;
  int v10;
  uchar v11;
  char v12;
  char v13;
  char v14;

  v4 = *a1;
  v5 = a1[1];
  result = (int)(a1 + 4);
  v7 = (v4 << 24) + 0x1000000;
  v8 = v5 << 24;
  v9 = *(uchar *)(result + (v7 >> 24));
  v10 = a3 - 1;
  if ( v10 >= 0 )
  {
    do
    {
      v8 += v9 << 24;
      v11 = __OFSUB__(v10--, 1);
      v12 = *(uchar *)(result + (v8 >> 24));
      v13 = *a2++;
      *(uchar *)(result + (v7 >> 24)) = v12;
      *(uchar *)(result + (v8 >> 24)) = v9;
      v7 += 0x1000000;
      v14 = *(uchar *)(result + (uchar)(v9 + v12));
      v9 = *(uchar *)(result + (v7 >> 24));
      *a4++ = v13 ^ v14;
    }
    while ( !((v10 < 0) ^ v11) );
  }
  *(uchar *)(result - 4) = (v7 - 0x1000000) >> 24;
  *(uchar *)(result - 3) = HIBYTE(v8);
  return result;
}

//----- (02239498) --------------------------------------------------------
int __fastcall Function_2239498(int a1, uint a2, int a3, int a4)
{
  int v4;
  int v5;
  char v7;

  v4 = a3;
  v5 = a4;
  Function_20d3068((int)&v7, a1, a2);
  return Function_22394dc(&v7, v4, v5);
}

//----- (022394DC) --------------------------------------------------------
int __fastcall Function_22394dc(uchar *a1, int a2)
{
  uchar *v2;
  int v3;
  uchar *v5;
  int v6;
  int v7;
  int v8;
  uchar *v9;
  int v10;
  char v11;

  v8 = 0;
  v10 = 0;
  v2 = a1;
  v3 = Function_2239918(&v11, 256, a2);
  if ( !Function_2239780(&v11, v3, &v7, &v8) )
    return 0;
  if ( !Function_22395dc(v7, v8) )
    return 0;
  if ( v10 != 20 )
    return 0;
  v5 = v9;
  v6 = 0;
  do
  {
    if ( *v5 != *v2 )
      return 0;
    ++v6;
    ++v2;
    ++v5;
  }
  while ( v6 < 20 );
  return 1;
}

//----- (022395DC) --------------------------------------------------------
int Function_22395dc()
{
  return Function_22395e0();
}

//----- (022395E0) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02239780) --------------------------------------------------------
int __fastcall Function_2239780(uchar *a1, uint a2, uint *a3, uint *a4)
{
  int v5;
  uchar *v6;
  int v7;
  int v8;

  if ( a2 < 0xA )
    return 0;
  v5 = (int)&a1[a2];
  if ( *a1 != 1 )
    return 0;
  v6 = a1 + 1;
  v7 = 0;
  do
  {
    v8 = (uchar)*v6++;
    if ( v8 != 255 )
      return 0;
    ++v7;
  }
  while ( v7 < 8 );
  for ( ; v6 != (uchar *)v5; ++v6 )
  {
    if ( (uchar)*v6 != 255 )
      break;
  }
  if ( v6 == (uchar *)v5 )
    return 0;
  if ( *v6 )
    return 0;
  *a4 = v5 - (uint)(v6 + 1);
  *a3 = v6 + 1;
  return 1;
}

//----- (02239844) --------------------------------------------------------
int __fastcall Function_2239844(int *a1, int *a2, int a3, int *a4)
{
  uchar *v4;
  int v5;
  bool v6;
  uint v7;
  int v9;
  uint v10;
  int v11;
  int v12;
  int v13;

  v4 = (uchar *)(*a1 + 1);
  v5 = 0;
  v6 = *(uchar *)*a1 == a3;
  v7 = *a2;
  if ( !v6 )
    return 0;
  if ( v7 < 1 )
    return 0;
  v9 = *v4;
  v10 = v7 - 1;
  if ( v9 & 0x80 )
  {
    v11 = v9 & 0x7F;
    if ( v10 < v11 + 1 )
      return 0;
    v12 = v10 - v11;
    if ( a4 )
    {
      v13 = *a1 + 2;
      do
      {
        v5 = (*(uchar *)(*a1 + 2) & 0x7F) + (v5 << 7);
        v11 = (v11 - 1) & 0xFF;
      }
      while ( v11 );
    }
    else
    {
      v13 = (int)&v4[v11];
    }
  }
  else
  {
    v13 = *a1 + 2;
    v5 = v9;
    if ( v10 < 1 )
      return 0;
    v12 = v7 - 2;
  }
  *a1 = v13;
  *a2 = v12;
  if ( a4 )
    *a4 = v5;
  return 1;
}

//----- (02239918) --------------------------------------------------------
int __fastcall Function_2239918(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7;
  int v8;
  int v9;
  int v10;
  int v12;
  int v13;
  char v14;
  char v15;
  char v16;
  char v17;

  v7 = a1;
  v8 = a2;
  v9 = a3;
  v10 = a4;
  if ( !a1 || !a3 || !a5 )
    return -3;
  v12 = Function_223d358();
  Function_223d3d8(&v14);
  Function_223d3d8(&v15);
  Function_223d3d8(&v16);
  Function_223d3d8(&v17);
  if ( v12 )
  {
    if ( Function_223d014(v9, v10, &v14) )
    {
      if ( Function_223d128(&v16, a7) )
      {
        if ( Function_223d014(a5, a6, &v17) )
        {
          if ( Function_223b564(&v15, &v14, &v16, &v17, v12) )
          {
            if ( (Function_223d534(&v15) + 7) / 8 <= v8 )
              v13 = Function_223cf98(&v15, v7);
            else
              v13 = -1;
          }
          else
          {
            v13 = -2;
          }
        }
        else
        {
          v13 = -2;
        }
      }
      else
      {
        v13 = -2;
      }
    }
    else
    {
      v13 = -2;
    }
  }
  else
  {
    v13 = -2;
  }
  Function_223d4b8(&v14);
  Function_223d4b8(&v15);
  Function_223d4b8(&v16);
  Function_223d4b8(&v17);
  if ( v12 )
    Function_223d2e8(v12);
  return v13;
}

//----- (02239A74) --------------------------------------------------------
int __fastcall Function_2239a74(uint *a1, int *a2, int a3, uint **a4, int *a5, uint *a6)
{
  uint *v6;
  int *v7;
  int v8;
  int result;
  int v10;
  int v11;
  uint v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int i;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int *v23;
  int *v24;
  uint *v25;
  int *v26;
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
  int j;
  uchar *v38;
  uchar *v39;
  int k;
  int v41;
  uchar *v42;
  int l;
  uchar *v44;
  uchar *v45;
  uchar *v46;
  int m;
  uchar *v48;
  int n;
  uint *v50;
  int v51;
  int v52;
  int v53;
  int *v54;
  uint *v55;
  int (**v56)(void);
  int v57;
  int v58;
  uchar *v59;
  int v60[26];

  v6 = a4;
  v59 = 0;
  v50 = a1;
  v56 = 0;
  v57 = 0;
  v51 = 0;
  v7 = a2;
  v8 = a3;
  if ( !(**a4 & 1) )
    return 0;
  v10 = a2[1];
  v52 = *a5;
  if ( !v10 || v10 == 1 && !*(uint *)*v7 )
  {
    Function_223d128(a1, 0);
    return 1;
  }
  v11 = *(uint *)(a3 + 4);
  if ( !v11 || v11 == 1 && !**(uint **)a3 )
  {
    Function_223d128(a1, 1);
    return 1;
  }
  if ( v11 == 1 && **(uint **)a3 == 1 )
  {
    Function_223d1d0(a1, v7);
    return 1;
  }
  v55 = a6;
  if ( a6 || (v55 = (uint *)Function_223ac0c()) != 0 && Function_223ac40() )
  {
    v56 = (int (**)(void))a5[67];
    if ( Function_223afd4(v8, &v59, 0) )
    {
      ++*a5;
      v53 = v59[3];
      v12 = s32_div_f(v59[2] + 63, v59[2]);
      v59 += 4;
      v13 = v7[1];
      v14 = v55[9];
      if ( v13 == v14 && *(uint *)(*v7 + 4 * (v14 - 1)) < *(uint *)(*v6 + 4 * (v14 - 1)) )
      {
        v54 = v7;
        goto LABEL_27;
      }
      if ( v13 < v14 )
      {
        v15 = (*a5)++;
        v16 = (int)&a5[5 * v15 + 1];
        *(uint *)(v16 + 4) = v7[1];
        v54 = &a5[5 * v15 + 1];
        Function_223d438(v16, v14);
        for ( i = 0; i < v7[1]; ++i )
          *(uint *)(*v54 + 4 * i) = *(uint *)(*v7 + 4 * i);
LABEL_27:
        v19 = *a5;
        v20 = 2 * *(uint *)(v8 + 4) * v12;
        v21 = ++*a5;
        ++*a5;
        v22 = v53 * v14 + (v20 + 7) / 4;
        v23 = &a5[5 * v21 + 1];
        v24 = &a5[5 * v19 + 1];
        v25 = (uint *)&a5[5 * (*a5)++ + 1];
        v26 = &a5[5 * (*a5)++ + 1];
        if ( v14 > v50[2] )
          v27 = Function_223d268(v50, v14);
        else
          v27 = (int)v50;
        if ( v27 )
        {
          v28 = 4 * v14 > v23[2] ? Function_223d268(v23, 4 * v14) : v23;
          if ( v28 )
          {
            v58 = 2 * v14;
            v29 = 2 * v14 > (int)v25[2] ? Function_223d268(v25, v58) : v25;
            if ( v29 )
            {
              v30 = v22 > v24[2] ? Function_223d268(v24, v22) : v24;
              if ( v30 )
              {
                v31 = v58 > v26[2] ? Function_223d268(v26, v58) : v26;
                if ( v31 )
                {
                  v32 = *v23;
                  v33 = *v25;
                  v34 = *v26;
                  v35 = v55[18];
                  v36 = v55[8];
                  v60[0] = *v24;
                  Function_223bb94(v34, *v54, v14, v55[3], v14);
                  Function_223b1dc(v60[0], v34, v36, v14, v35);
                  if ( v53 > 1 )
                  {
                    Function_223b31c(v34, v60[0], v14, v32);
                    Function_223b1dc(v32, v34, v36, v14, v35);
                    for ( j = 1; j < v53; ++j )
                    {
                      v60[j] = v60[j - 1] + 4 * v14;
                      Function_223bb94(v34, v60[j - 1], v14, v32, v14);
                      Function_223b1dc(v60[j], v34, v36, v14, v35);
                    }
                  }
                  v38 = v59++;
                  v39 = v59 + 1;
                  k = *v38;
                  ++v59;
                  v41 = v38[1];
                  if ( v41 == 255 && !k )
                  {
                    v59 = v39 + 1;
                    for ( k = *v39; ; k = v42[1] )
                    {
                      v42 = v59;
                      if ( *v59 != 255 || k )
                        break;
                      v41 += 256;
                      v59 += 2;
                    }
                    ++v59;
                    v41 += *v42 + 1;
                  }
                  MI_CpuCopy8(v60[k >> 1], v33, 4 * v14, (uint)v38);
                  if ( v41 )
                  {
                    while ( 1 )
                    {
                      if ( v56 )
                      {
                        ++v57;
                        if ( (*v56)() )
                          break;
                      }
                      if ( a5[66] & 0x4000 )
                        break;
                      for ( l = 0; l < v41; ++l )
                      {
                        Function_223b31c(v34, v33, v14, v32);
                        Function_223b1dc(v33, v34, v36, v14, v35);
                      }
                      v44 = v59;
                      v45 = v59 + 1;
                      v59 = v45;
                      v46 = v45 + 1;
                      m = *v44;
                      v59 = v46;
                      v41 = v44[1];
                      if ( v41 == 255 && !m )
                      {
                        v59 = v46 + 1;
                        for ( m = *v46; ; m = v48[1] )
                        {
                          v48 = v59;
                          if ( *v59 != 255 || m )
                            break;
                          v41 += 256;
                          v59 += 2;
                        }
                        ++v59;
                        v41 += *v48 + 1;
                      }
                      if ( !m && !v41 )
                        goto LABEL_77;
                      if ( !v41 && m == 1 )
                      {
                        Function_223bb94(v34, v33, v14, *v54, v14);
                        Function_223b1dc(*v50, v34, v36, v14, v35);
                        goto LABEL_80;
                      }
                      Function_223bb94(v34, v33, v14, v60[m >> 1], v14);
                      Function_223b1dc(v33, v34, v36, v14, v35);
                      if ( !v41 )
                        goto LABEL_77;
                    }
                  }
                  else
                  {
LABEL_77:
                    for ( n = v14; n < v58; ++n )
                      *(uint *)(v33 + 4 * n) = 0;
                    Function_223b1dc(*v50, v33, v36, v14, v35);
LABEL_80:
                    if ( !(a5[66] & 0x4000) )
                    {
                      v50[1] = v14;
                      Function_223d3ec();
                      v51 = 1;
                    }
                  }
                }
              }
            }
          }
        }
        goto LABEL_82;
      }
      v18 = (*a5)++;
      v54 = &a5[5 * v18 + 1];
      if ( Function_223b5c0() )
      {
        Function_223d438(v54, v14);
        goto LABEL_27;
      }
    }
  }
LABEL_82:
  if ( v56 && (*v56)() )
    v51 = 0;
  if ( !a6 )
  {
    if ( v55 )
      Function_223ab90();
  }
  result = v51;
  *a5 = v52;
  return result;
}

//----- (0223A278) --------------------------------------------------------
int __fastcall Function_223a278(int a1, int a2, int a3, int a4, uint *a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int result;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  char *v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  bool v24;
  int v25;
  int v26;
  int v27;
  char *v28;
  int v29;
  int v30;
  int v31;
  char v32;
  char v33;
  char v34;

  v5 = a1;
  v30 = 0;
  v6 = a2;
  v29 = a3;
  v7 = a4;
  v31 = 0;
  v8 = Function_223d534(a3);
  v9 = *(uint *)(v6 + 4);
  v10 = v8;
  if ( v9 && (v9 != 1 || **(uint **)v6) )
  {
    v12 = *(uint *)(v29 + 4);
    if ( v12 && (v12 != 1 || **(uint **)v29) )
    {
      if ( v12 != 1 || **(uint **)v29 != 1 )
      {
        Function_223ab68(&v32);
        if ( Function_223aaf0(&v32, v7, a5) > 0 )
        {
          Function_223d3d8(&v33);
          v13 = (int)&a5[5 * (*a5)++ + 1];
          v31 = 1;
          if ( Function_223b5c0(&v33, v6, v7, a5) )
          {
            if ( Function_223aa44(v13) )
            {
              if ( v10 > 17 )
              {
                if ( v10 < 256 )
                {
                  if ( v10 < 128 )
                    v14 = 3;
                  else
                    v14 = 4;
                }
                else
                {
                  v14 = 5;
                }
              }
              else
              {
                v14 = 1;
              }
              v15 = 1;
              v16 = 1 << (v14 - 1);
              if ( v16 <= 1 )
              {
LABEL_26:
                v18 = 1;
                v31 = v15;
                v19 = v10 - 1;
                if ( Function_223d128(v5, 1) )
                {
                  while ( 1 )
                  {
                    while ( !Function_223ce38(v29, v19) )
                    {
                      if ( !v18 && !Function_223aa44(v5) )
                        goto LABEL_47;
                      if ( !v19 )
                      {
LABEL_46:
                        v30 = 1;
                        goto LABEL_47;
                      }
                      --v19;
                    }
                    v20 = 1;
                    v21 = 0;
                    v22 = 1;
                    while ( v22 < v14 )
                    {
                      if ( v19 - v22 < 0 )
                        break;
                      v23 = Function_223ce38(v29, v19 - v22);
                      v24 = v23 == 0;
                      if ( v23 )
                      {
                        v23 = v20 << (v22 - v21);
                        v21 = v22;
                      }
                      ++v22;
                      if ( !v24 )
                        v20 = v23 | 1;
                    }
                    v24 = v18 == 0;
                    v25 = v21 + 1;
                    if ( v24 )
                    {
                      v26 = 0;
                      if ( v25 > 0 )
                        break;
                    }
LABEL_44:
                    if ( !Function_223aa44(v5) )
                      goto LABEL_47;
                    v18 = 0;
                    v19 -= v21 + 1;
                    if ( v19 < 0 )
                      goto LABEL_46;
                  }
                  while ( Function_223aa44(v5) )
                  {
                    if ( ++v26 >= v25 )
                      goto LABEL_44;
                  }
                }
              }
              else
              {
                v17 = &v34;
                while ( 1 )
                {
                  Function_223d3d8(v17);
                  if ( !Function_223aa44(v17) )
                    break;
                  ++v15;
                  v17 += 20;
                  if ( v15 >= v16 )
                    goto LABEL_26;
                }
              }
            }
          }
        }
LABEL_47:
        --*a5;
        v27 = 0;
        if ( v31 > 0 )
        {
          v28 = &v33;
          do
          {
            Function_223d510(v28);
            ++v27;
            v28 += 20;
          }
          while ( v27 < v31 );
        }
        Function_223ab34(&v32);
        result = v30;
      }
      else
      {
        Function_223d1d0(v5, v6);
        result = 1;
      }
    }
    else
    {
      Function_223d128(v5, 1);
      result = 1;
    }
  }
  else
  {
    Function_223d128(v5, 0);
    result = 1;
  }
  return result;
}

//----- (0223A60C) --------------------------------------------------------
int __fastcall Function_223a60c(uint a1, uint a2, uint a3)
{
  uint v3;
  uint v4;
  uint v5;
  int v6;
  int v7;
  int v9;
  char v10;
  uint v11;
  int v12;
  int v13;
  uint v14;
  uint v15;
  bool v16;
  uint v17;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = 0;
  v7 = 2;
  if ( !a3 )
    return -1;
  v9 = Function_223d568(a3);
  if ( v9 != 32 && v4 > 1 << v9 )
    return 0;
  v10 = 32 - v9;
  if ( v4 >= v3 )
    v4 -= v3;
  if ( 32 != v9 )
  {
    v4 = (v4 << v10) | (v5 >> v9);
    v3 <<= v10;
  }
  if ( 32 != v9 )
    v5 <<= v10;
  v11 = v3 >> 16;
  while ( 1 )
  {
    if ( v4 >> 16 == v11 )
      v12 = 0xFFFF;
    else
      v12 = u32_div_f(v4, v3 >> 16);
    v13 = v12 * v11;
    v14 = v12 * (ushort)v3;
    while ( !((v4 - v13) & 0xFFFF0000) && v14 > (v5 >> 16) + ((v4 - v13) << 16) )
    {
      v13 -= v11;
      v14 -= (ushort)v3;
      --v12;
    }
    v15 = v12 * v11 + (v12 * (uint)(ushort)v3 >> 16);
    if ( v5 < v12 * (uint)(ushort)v3 << 16 )
      ++v15;
    v16 = v4 >= v15;
    if ( v4 < v15 )
      v4 += v3;
    v17 = v5 - (v12 * (ushort)v3 << 16);
    if ( !v16 )
      --v12;
    if ( !--v7 )
      break;
    v4 = ((v4 - v15) << 16) | (v17 >> 16);
    v6 = (ushort)v12 << 16;
    v5 = (ushort)v17 << 16;
  }
  return v6 | v12;
}

//----- (0223A74C) --------------------------------------------------------
int __fastcall Function_223a74c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  char v10;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = -1;
  Function_223d3d8(&v10);
  Function_223d128(&v10, 0);
  if ( Function_223cea8(&v10, v6) && Function_223b5f4(v4, 0, &v10, v5, v7) )
    v8 = v6;
  Function_223d4b8(&v10);
  return v8;
}

//----- (0223A7C8) --------------------------------------------------------
int __fastcall Function_223a7c8(int a1, int a2, int a3, uint *a4, int *a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint *v11;
  int result;
  int v13;
  int v14;
  int v15;
  int v16;
  bool v17;
  bool v18;
  uchar v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;

  v5 = a2;
  v6 = *a5;
  v7 = a1;
  ++*a5;
  v8 = 0;
  v26 = (int)&a5[5 * v6 + 1];
  v9 = (int)&a5[5 * (*a5)++ + 1];
  v25 = 0;
  if ( !a1 )
    v8 = *a5;
  v10 = a3;
  if ( !a1 )
  {
    v7 = (int)&a5[5 * v8 + 1];
    *a5 = v8 + 1;
  }
  v11 = a4;
  if ( !v5 )
    v5 = (int)&a5[5 * (*a5)++ + 1];
  if ( Function_223cf44(a3, a4) >= 0 )
  {
    v13 = Function_223d534(v10);
    v14 = v11[10];
    v15 = v13;
    v16 = 2 * v14;
    v19 = __OFSUB__(2 * v14, v15);
    v17 = 2 * v14 == v15;
    v18 = 2 * v14 - v15 < 0;
    if ( 2 * v14 <= v15 )
      v16 = v15 - v16;
    else
      v15 = 2 * v14;
    if ( (uchar)(v18 ^ v19) | v17 )
      v20 = v16 / 2;
    else
      v20 = 0;
    v27 = v15 / 2;
    if ( v15 != v11[11] )
      v11[11] = Function_223a74c((int)(v11 + 5), (int)v11, v15, (int)a5);
    if ( Function_223c4e0(v26, v10, v27 - v20) )
    {
      if ( Function_223bcb8(v9, v26, v11 + 5, a5) )
      {
        if ( Function_223c4e0(v7, v9, v27 + v20) )
        {
          *(uint *)(v7 + 12) = 0;
          if ( Function_223bcb8(v9, v11, v7, a5) )
          {
            if ( Function_223befc(v5, v10, v9) )
            {
              v21 = 0;
              *(uint *)(v5 + 12) = 0;
              if ( Function_223cf44(v5, v11) < 0 )
              {
LABEL_28:
                v22 = *(uint *)(v5 + 4);
                v23 = 1;
                if ( v22 && (v22 != 1 || **(uint **)v5) )
                  v23 = 0;
                if ( v23 )
                  v24 = 0;
                else
                  v24 = *(uint *)(v10 + 12);
                *(uint *)(v5 + 12) = v24;
                v25 = 1;
                *(uint *)(v7 + 12) = *(uint *)(v10 + 12) ^ v11[3];
              }
              else
              {
                while ( 1 )
                {
                  v19 = __OFSUB__(v21, 2);
                  v17 = v21 == 2;
                  v18 = v21++ - 2 < 0;
                  if ( !((uchar)(v18 ^ v19) | v17)
                    || !Function_223befc(v5, v5, v11)
                    || !Function_223c3b8(v7, 1) )
                  {
                    break;
                  }
                  if ( Function_223cf44(v5, v11) < 0 )
                    goto LABEL_28;
                }
              }
            }
          }
        }
      }
    }
    result = v25;
    *a5 = v6;
  }
  else
  {
    Function_223d128(v7, 0);
    Function_223d1d0(v5, v10);
    *a5 = v6;
    result = 1;
  }
  return result;
}

//----- (0223AA44) --------------------------------------------------------
int __fastcall Function_223aa44(int a1, int a2, int a3, uint *a4, int *a5)
{
  int v5;
  int v6;
  uint *v7;
  int v8;
  int result;

  v5 = (int)&a5[5 * *a5 + 1];
  v6 = a1;
  v7 = a4;
  ++*a5;
  v8 = 0;
  if ( a3 )
  {
    if ( a2 == a3 )
    {
      if ( !Function_223b408(v5) )
        goto LABEL_9;
    }
    else if ( !Function_223bcb8(v5, a2, a3, a5) )
    {
      goto LABEL_9;
    }
  }
  else
  {
    v5 = a2;
  }
  Function_223a7c8(0, v6, v5, v7, a5);
  v8 = 1;
LABEL_9:
  result = v8;
  --*a5;
  return result;
}

//----- (0223AAF0) --------------------------------------------------------
int __fastcall Function_223aaf0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_223d1d0(a1, a2);
  Function_223d128(v2 + 20, 0);
  *(uint *)(v2 + 40) = Function_223d534(v3);
  *(uint *)(v2 + 44) = 0;
  return 1;
}

//----- (0223AB34) --------------------------------------------------------
int __fastcall Function_223ab34(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_223d4b8(a1);
  Function_223d4b8(v1 + 20);
  result = *(uint *)(v1 + 48) & 1;
  if ( result )
    result = Function_223d5e4(v1);
  return result;
}

//----- (0223AB68) --------------------------------------------------------
int __fastcall Function_223ab68(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_223d3d8(a1);
  Function_223d3d8(v1 + 20);
  result = 0;
  *(uint *)(v1 + 40) = 0;
  *(uint *)(v1 + 48) = 0;
  return result;
}

//----- (0223AB90) --------------------------------------------------------
int __fastcall Function_223ab90(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_223d4b8(a1 + 12);
  Function_223d4b8(v1 + 32);
  Function_223d4b8(v1 + 52);
  result = *(uint *)(v1 + 76) & 1;
  if ( result )
    result = Function_223d5e4(v1);
  return result;
}

//----- (0223ABD0) --------------------------------------------------------
int __fastcall Function_223abd0(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  *a1 = 0;
  a1[2] = 0;
  Function_223d3d8(a1 + 3);
  Function_223d3d8(v1 + 8);
  Function_223d3d8(v1 + 13);
  result = 0;
  v1[19] = 0;
  return result;
}

//----- (0223AC0C) --------------------------------------------------------
uint *Function_223ac0c()
{
  uint *v0;
  uint *v1;
  uint *result;

  v0 = (uint *)Function_223d62c(80);
  v1 = v0;
  if ( !v0 )
    return 0;
  Function_223abd0(v0);
  result = v1;
  v1[19] = 1;
  return result;
}

//----- (0223AC40) --------------------------------------------------------
int __fastcall Function_223ac40(uint *a1, int a2, int a3)
{
  uint **v3;
  uint *v4;
  int v5;
  uint v7;
  int v8;
  uint *v9;
  uint v10;
  uint v11;
  uint *v12;
  int v13;

  v3 = (uint **)a2;
  v4 = a1;
  v5 = a3;
  if ( !*(uint *)(a2 + 4) )
    return 0;
  if ( !Function_223d1d0(a1 + 8, a2) )
    return 0;
  Function_223d3d8(&v12);
  *v4 = 1;
  v4[2] = (Function_223d534(v3) + 31) / 32;
  if ( !Function_223d128(v4 + 3, 0) )
    return 0;
  if ( Function_223cea8(v4 + 3, 32) )
  {
    v7 = **v3;
    v8 = Function_223b148(**v3);
    if ( Function_223d128(&v12, v8) )
    {
      if ( Function_223c5fc() )
      {
        if ( v13 && (v13 != 1 || *v12) )
        {
          v9 = (uint *)Function_223c258(&v12, 1);
LABEL_15:
          if ( v13 < 1 )
          {
            v10 = 0;
          }
          else
          {
            v9 = v12;
            v10 = *v12;
          }
          if ( v13 >= 2 )
            v9 = v12;
          if ( v13 < 2 )
            v11 = 0;
          else
            v11 = v9[1];
          v4[18] = Function_223a60c(v11, v10, v7);
          Function_223d128(v4 + 3, 0);
          if ( Function_223cea8(v4 + 3, v4[2] << 6) )
          {
            Function_223b5c0(v4 + 3, v4 + 3, v4 + 8, v5);
            Function_223d438(v4 + 3, v4[2]);
          }
          goto LABEL_25;
        }
        v9 = (uint *)Function_223d128(&v12, -1);
        if ( v9 )
          goto LABEL_15;
      }
    }
  }
LABEL_25:
  Function_223d4b8(&v12);
  return 1;
}

//----- (0223ADFC) --------------------------------------------------------
int __fastcall Function_223adfc(uchar *a1, int a2, int a3)
{
  int v3;
  int v4;
  uchar *v5;
  uint v6;
  uint v7;
  uint v8;
  int v9;
  uint v10;
  int v11;
  uint *v12;
  int v13;
  uint v14;
  uint *v15;
  uchar *v16;
  uint v17;
  int v18;
  int v19;
  int v20;
  uint v21;
  uint v22;
  uchar *v23;
  int result;
  char v25;
  int v26;
  int v27;

  v3 = a3;
  v4 = a2;
  v5 = a1;
  if ( a3 > 6 )
    v3 = 6;
  v26 = (1 << v3) - 1;
  v27 = dword_223F158[v3];
  v6 = 0;
  v7 = s32_div_f(v3 + 32 * *(uint *)(a2 + 4) - 1, v3);
  v8 = 0;
  v9 = 2 * v7 + 2;
  v10 = 0;
  v11 = (int)&v5[v9];
  v5[v9] = 0;
  *(uchar *)(v11 - 1) = 0;
  v12 = *(uint **)v4;
  v13 = *(uint *)(v4 + 4);
  v14 = **(uint **)v4;
  v15 = v12 + 1;
  v16 = (uchar *)(v11 - 2);
  if ( v13 > 1 )
  {
    v17 = *v15;
    v15 = v12 + 2;
    v10 = v17;
  }
  v18 = v14;
  while ( 1 )
  {
    while ( 1 )
    {
      v19 = v18 & v26;
      v20 = *(uchar *)(v27 + (v18 & v26));
      if ( !v20 )
        break;
      v8 += v20;
      v6 += v20;
      if ( v6 < 0x20 )
        goto LABEL_13;
      if ( v13 <= 1 )
        break;
      --v13;
      v14 = v10;
      if ( v13 > 1 )
      {
        v21 = *v15;
        ++v15;
        v10 = v21;
      }
      else
      {
        v10 = 0;
      }
      v6 -= 32;
LABEL_13:
      if ( v6 )
        v18 = (v14 >> v6) | (v10 << (32 - v6));
      else
        v18 = v14;
    }
    if ( !v19 )
      goto LABEL_30;
    *v16 = v8;
    *(v16 - 1) = v19;
    v16 -= 2;
    if ( v8 > 0x100 )
    {
      do
      {
        *v16 = -1;
        v8 -= 256;
        *(v16 - 1) = 0;
        v16 -= 2;
      }
      while ( v8 >= 0x100 );
    }
    v8 = v3;
    v6 += v3;
    if ( v6 >= 0x20 )
      break;
LABEL_26:
    if ( v6 )
      v18 = (v14 >> v6) | (v10 << (32 - v6));
    else
      v18 = v14;
  }
  if ( v13 > 1 )
  {
    --v13;
    v14 = v10;
    if ( v13 <= 1 )
      v10 = 0;
    v6 -= 32;
    if ( v13 > 1 )
    {
      v22 = *v15;
      ++v15;
      v10 = v22;
    }
    goto LABEL_26;
  }
LABEL_30:
  v23 = v16 + 1;
  result = 2;
  while ( *v23 || v23[1] )
  {
    *v5 = *v23;
    v25 = v23[1];
    v23 += 2;
    result += 2;
    v5[1] = v25;
    v5 += 2;
  }
  *v5 = 0;
  v5[1] = 0;
  return result;
}

//----- (0223AFD4) --------------------------------------------------------
int __fastcall Function_223afd4(int a1, int **a2, int a3, uint *a4)
{
  int **v4;
  int **v5;
  int v6;
  int **v7;
  int *v8;
  int v9;
  int v11;
  int v12;
  char v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;

  v4 = (int **)&a4[5 * *a4 + 1];
  v5 = (int **)a1;
  v6 = *(uint *)(a1 + 4);
  v7 = a2;
  v8 = 0;
  v9 = 32 * v6;
  if ( !v6 )
    return 0;
  if ( v6 == 1 )
  {
    if ( **v5 == 65537 )
    {
      v8 = dword_223DEC4;
    }
    else
    {
      v11 = **v5;
      if ( v11 == 17 )
      {
        v8 = dword_223DEDC;
      }
      else if ( v11 == 3 )
      {
        v8 = dword_223DED0;
      }
    }
    v12 = 1;
    v13 = 1;
    v14 = 32;
  }
  else if ( v9 < 256 )
  {
    if ( v9 < 128 )
    {
      v12 = 3;
      v13 = 4;
      v14 = 11;
    }
    else
    {
      v13 = 8;
      v14 = 8;
      v12 = 4;
    }
  }
  else
  {
    v12 = 5;
    v13 = 16;
    v14 = 7;
  }
  v15 = (2 * v6 * v14 + 7) / 4;
  if ( v8 )
  {
    v18 = 8;
  }
  else
  {
    if ( v15 > (int)v4[2] )
      v16 = Function_223d268(v4, v15);
    else
      v16 = (int)&a4[5 * *a4 + 1];
    if ( !v16 )
      return 0;
    v8 = *v4;
    v17 = Function_223adfc((uchar *)*v4 + 4, (int)v5, v12);
    v18 = v17 + 2;
    *(uchar *)v8 = (ushort)(v17 + 2) >> 8;
    *((uchar *)v8 + 1) = v17 + 2;
    *((uchar *)v8 + 2) = v12;
    *((uchar *)v8 + 3) = v13;
  }
  *v7 = v8;
  return v18 + 2;
}

//----- (0223B148) --------------------------------------------------------
int __fastcall Function_223b148(int a1)
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

  v1 = a1;
  u32_div_f(-a1, a1);
  v3 = v2;
  v4 = v1;
  v5 = 0;
  v6 = 1;
  v7 = -1;
  if ( v2 )
  {
    do
    {
      u32_div_f(v4, v3);
      v9 = v8;
      v10 = v5 + u32_div_f(v4, v3) * v6;
      v5 = v6;
      v4 = v3;
      v6 = v10;
      v3 = v9;
      v7 = -v7;
    }
    while ( v9 );
  }
  if ( v7 < 0 )
    v5 = v1 - v5;
  if ( v4 != 1 )
    return 0;
  u32_div_f(v5, v1);
  return v11;
}

//----- (0223B1DC) --------------------------------------------------------
uint __fastcall Function_223b1dc(uint result, uint *a2, int a3, int a4, int a5)
{
  int v5;
  uint *v6;
  uint v7;
  uint v8;
  int v9;
  int v10;
  uint *i;
  int v12;
  uint v13;
  bool v14;
  int v15;
  int j;

  v5 = a4;
  v6 = a2;
  v7 = 0;
  v8 = result;
  v9 = a3;
  v10 = 0;
  for ( i = &a2[a4]; v10 < v5; ++i )
  {
    v12 = Function_223cc58(v6, v9, v5, *v6 * a5);
    v13 = v12 + v7;
    v14 = v12 + v7 >= v7;
    if ( v12 + v7 < v7 )
      v7 = 1;
    *i += v13;
    result = *i;
    if ( v14 )
      v7 = 0;
    ++v10;
    if ( result < v13 )
      ++v7;
    ++v6;
  }
  v15 = v5 - 1;
  if ( !v7 )
  {
    if ( v6[v15] == *(uint *)(v9 + 4 * v15) && v15 > 0 )
    {
      do
      {
        if ( v6[v15] != *(uint *)(v9 + 4 * v15) )
          break;
        --v15;
      }
      while ( v15 > 0 );
    }
    result = *(uint *)(v9 + 4 * v15);
    v7 = v6[v15] >= result;
  }
  if ( v7 )
    return Function_223c700(v8, v6, v9, v5);
  for ( j = 0; j < v5; ++j )
  {
    result = v6[j];
    *(uint *)(v8 + 4 * j) = result;
  }
  return result;
}

//----- (0223B31C) --------------------------------------------------------
int __fastcall Function_223b31c(uint *a1, uint *a2, int a3, int a4)
{
  int v4;
  int v5;
  uint *v6;
  uint *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int i;
  uint *v13;
  int v15;

  v4 = a3;
  v5 = 2 * a3;
  v6 = a1;
  v7 = a2;
  v8 = a3 - 1;
  v9 = 2 * a3 - 1;
  a1[v9] = 0;
  v15 = a4;
  v10 = (int)a2;
  *a1 = a1[v9];
  v11 = (int)(a1 + 1);
  if ( v8 > 0 )
  {
    v10 = (int)(a2 + 1);
    *(uint *)(v11 + 4 * v8) = Function_223cab8(a1 + 1, a2 + 1, v8, *a2);
    v11 = (int)(v6 + 3);
  }
  for ( i = v4 - 2; i > 0; v11 += 8 )
  {
    v13 = (uint *)v10;
    --v8;
    v10 += 4;
    --i;
    *(uint *)(v11 + 4 * v8) = Function_223cc58(v11, v10, v8, *v13);
  }
  Function_223c814(v6, v6, v6, v5);
  Function_223c964(v15, v7, v4);
  return Function_223c814(v6, v6, v15, v5);
}

//----- (0223B408) --------------------------------------------------------
int __fastcall Function_223b408(int a1, int a2, int *a3)
{
  uint **v3;
  int v4;
  int v5;
  uint **v6;
  bool v7;
  int v8;
  int *v9;
  int v10;
  int v12;
  int v13;
  int v14;
  char v15;
  char v16;

  v4 = *a3;
  v5 = a1;
  v6 = (uint **)a2;
  v7 = a2 == a1;
  v8 = (int)(a3 + 1);
  if ( a2 == a1 )
    a1 = v4 + 1;
  else
    v3 = (uint **)a1;
  v9 = (int *)(v8 + 20 * v4);
  if ( v7 )
    v3 = (uint **)(v8 + 20 * a1);
  v10 = *(uint *)(a2 + 4);
  if ( v10 <= 0 )
  {
    *(uint *)(v5 + 4) = 0;
    return 1;
  }
  v12 = 2 * v10;
  if ( 2 * v10 > (int)v3[2] )
    v13 = Function_223d268(v3, 2 * v10);
  else
    v13 = (int)v3;
  if ( !v13 )
    return 0;
  v3[1] = (uint *)v12;
  v3[3] = 0;
  if ( v10 == 4 )
  {
    Function_223b31c(*v3, *v6, 4, (int)&v15);
  }
  else if ( v10 == 8 )
  {
    Function_223b31c(*v3, *v6, 8, (int)&v16);
  }
  else
  {
    if ( v12 > v9[2] )
      v14 = Function_223d268(v9, 2 * v10);
    else
      v14 = (int)v9;
    if ( !v14 )
      return 0;
    Function_223b31c(*v3, *v6, v10, *v9);
  }
  if ( v12 > 0 && !(*v3)[v12 - 1] )
    v3[1] = (uint *)((char *)v3[1] - 1);
  if ( v3 != (uint **)v5 )
    Function_223d1d0(v5, v3);
  return 1;
}

//----- (0223B564) --------------------------------------------------------
int __fastcall Function_223b564(uint *a1, int *a2, int a3, int a4, int *a5)
{
  int result;

  if ( *(uint *)(a4 + 4) > 0 && **(uint **)a4 & 1 )
    result = Function_2239a74(a1, a2, a3, (uint **)a4, a5, 0);
  else
    result = Function_223a278((int)a1, (int)a2, a3, a4, a5);
  return result;
}

//----- (0223B5C0) --------------------------------------------------------
int __fastcall Function_223b5c0(int a1, int a2, int a3, int a4)
{
  return Function_223b5f4(0, a1, a2, a3, a4);
}

//----- (0223B5F4) --------------------------------------------------------
int __fastcall Function_223b5f4(uint *a1, int a2, int a3, int a4, uint *a5)
{
  int v5;
  int v6;
  uint *v7;
  int result;
  bool v9;
  int v10;
  uint v11;
  uint v12;
  uint v13;
  uint *v14;
  int v15;
  int v16;
  uint v17;
  uint v18;
  uint v19;
  uint v20;
  uint v21;
  int v22;
  int v23;
  uint v24;
  uint v25;
  uint v26;
  uint v27;
  int v28;
  uint v29;
  uint v30;
  int i;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  uint *v40;
  uint *v41;
  uint *v42;
  uint *v43;
  uint *v44;
  uint v45;
  int v46;
  int v47;
  uint v48;
  uint v49;
  int v50;
  uint v51;
  int v52;

  v5 = a4;
  v6 = *(uint *)(a4 + 4);
  v7 = a1;
  v35 = a2;
  v36 = a3;
  if ( !v6 || v6 == 1 && !**(uint **)v5 )
    return 0;
  if ( Function_223cf44(a3, v5) < 0 )
  {
    if ( !v35 )
      goto LABEL_70;
    result = Function_223d1d0(v35, v36);
    v9 = result == 0;
    if ( !result )
      result = 0;
    if ( !v9 )
    {
LABEL_70:
      if ( v7 )
        Function_223d128(v7, 0);
      result = 1;
    }
    return result;
  }
  v10 = (int)&a5[5 * *a5 + 1];
  *(uint *)(v10 + 12) = 0;
  v11 = *a5;
  v40 = (uint *)v10;
  v41 = &a5[5 * (*a5 + 1) + 1];
  v42 = &a5[5 * (*a5 + 2) + 1];
  if ( !v7 )
    v7 = &a5[5 * (v11 + 3) + 1];
  v12 = Function_223d534(v5);
  v37 = 32 - ((v12 >> 31) + __ROR4__((v12 << 27) - (v12 >> 31), 27));
  if ( !Function_223c5fc(v42, v5, v37) )
    return 0;
  v42[3] = 0;
  if ( !Function_223c5fc(v41, v36, v37 + 32) )
    return 0;
  v41[3] = 0;
  v46 = v42[1];
  v13 = v41[1];
  v39 = v13 - v46;
  Function_223d3d8(&v49);
  v49 = *v41 + 4 * (v13 - v46);
  v50 = v46;
  v51 = v41[2] + 1;
  if ( v46 == 1 )
    v11 = 0;
  v45 = *(uint *)(*v42 + 4 * (v46 - 1));
  if ( v46 != 1 )
    v11 = *(uint *)(*v42 + 4 * (v46 - 2));
  v14 = (uint *)(*v41 + 4 * (v13 - 1));
  if ( v39 + 1 > (int)v7[2] )
    v15 = Function_223d268(v7, v39 + 1);
  else
    v15 = (int)v7;
  if ( !v15 )
    return 0;
  v7[3] = *(uint *)(v36 + 12) ^ *(uint *)(v5 + 12);
  v7[1] = v39;
  v43 = (uint *)(*v7 + 4 * (v39 - 1));
  v16 = v46 + 1 > v40[2] ? Function_223d268(v40, v46 + 1) : v40;
  if ( !v16 )
    return 0;
  if ( Function_223cf44(&v49, v42) >= 0 )
  {
    if ( Function_223befc(&v49, &v49, v42) )
    {
      *v43 = 1;
      *(uint *)(*v7 + 4 * (v7[1] - 1)) = 1;
      goto LABEL_35;
    }
    return 0;
  }
  --v7[1];
LABEL_35:
  v44 = v43 - 1;
  v38 = 0;
  if ( v39 - 1 > 0 )
  {
    v47 = (ushort)v11;
    v48 = v11 >> 16;
    if ( v39 - 1 > 0 )
    {
      v17 = v45 >> 16;
      do
      {
        ++v50;
        v49 -= 4;
        v18 = *v14;
        v19 = *(v14 - 1);
        if ( *v14 == v45 )
          v20 = -1;
        else
          v20 = Function_223a60c(*v14, *(v14 - 1), v45);
        while ( 1 )
        {
          v21 = (ushort)v20 * v48;
          v22 = v48 * (v20 >> 16);
          v23 = v17 * (v20 >> 16);
          v24 = v21 + (v20 >> 16) * v47;
          if ( v24 < v21 )
            v22 += 0x10000;
          v25 = v22 + (v24 >> 16);
          v26 = v47 * (ushort)v20 + ((ushort)v24 << 16);
          v27 = (ushort)v20 * v17 + (v20 >> 16) * (ushort)v45;
          if ( v26 < (uint)(ushort)v24 << 16 )
            ++v25;
          if ( v27 < (ushort)v20 * v17 )
            v23 += 0x10000;
          v28 = v23 + (v27 >> 16);
          v29 = (ushort)v45 * (ushort)v20
              + ((ushort)(v20 * v17 + HIWORD(v20) * v45) << 16);
          if ( v29 < (uint)(ushort)v27 << 16 )
            ++v28;
          v30 = v19 - v29;
          if ( v30 > v19 )
            ++v28;
          if ( v18 != v28 || v25 < v30 || v25 == v30 && v26 <= *(v14 - 2) )
            break;
          --v20;
        }
        *(uint *)(*v40 + 4 * v46) = Function_223cab8(*v40, *v42, v46, v20);
        for ( i = v46 + 1; i > 0; --i )
        {
          if ( *(uint *)(*v40 + 4 * (i - 1)) )
            break;
        }
        v40[1] = i;
        v32 = v50;
        Function_223bdb8();
        v41[1] = v41[1] + v50 - v32;
        if ( v52 )
        {
          --v20;
          v33 = v50;
          Function_223c17c();
          v41[1] += v50 - v33;
        }
        --v14;
        *v44 = v20;
        --v44;
        ++v38;
      }
      while ( v38 < v39 - 1 );
    }
  }
  Function_223d3ec(v41);
  if ( v35 )
  {
    v34 = *(uint *)(v36 + 12);
    if ( !Function_223c4e0(v35, v41, v37 + 32) )
      return 0;
    *(uint *)(v35 + 12) = v34;
  }
  return 1;
}

//----- (0223BB94) --------------------------------------------------------
int __fastcall Function_223bb94(int a1, uint *a2, int a3, uint *a4, int a5)
{
  int v5;
  int v6;
  int v7;
  uint *v8;
  uint *v9;
  uint *v10;
  int result;

  v5 = a5;
  v6 = a3;
  v7 = a1;
  v8 = a2;
  v9 = a4;
  if ( a3 < a5 )
  {
    v6 = a5;
    v8 = a4;
    v5 = a3;
    v9 = a2;
  }
  v10 = (uint *)(a1 + 4 * v6);
  *(uint *)(a1 + 4 * v6) = Function_223cab8(a1, v8, v6, *v9);
  while ( 1 )
  {
    result = v5 - 1;
    if ( v5 - 1 <= 0 )
      break;
    result = Function_223cc58(v7 + 4, v8, v6, v9[1]);
    v10[1] = result;
    if ( v5 - 2 <= 0 )
      break;
    result = Function_223cc58(v7 + 8, v8, v6, v9[2]);
    v10[2] = result;
    if ( v5 - 3 <= 0 )
      break;
    result = Function_223cc58(v7 + 12, v8, v6, v9[3]);
    v5 -= 4;
    v10[3] = result;
    if ( v5 <= 0 )
      break;
    v10[4] = Function_223cc58(v7 + 16, v8, v6, v9[4]);
    v10 += 4;
    v7 += 16;
    v9 += 4;
  }
  return result;
}

//----- (0223BCAC) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223BCB8) --------------------------------------------------------
int __fastcall Function_223bcb8(int *a1, int a2, int a3, uint *a4)
{
  uint **v4;
  int v5;
  uint **v6;
  int *v7;
  int v8;
  int result;
  int v10;
  int v11;
  int *v12;
  int v13;

  v4 = (uint **)a2;
  v5 = *(uint *)(a2 + 4);
  v6 = (uint **)a3;
  v7 = a1;
  v8 = *(uint *)(a3 + 4);
  if ( v5 && v8 )
  {
    v10 = v5 + v8;
    v11 = *(uint *)(a2 + 12) ^ *(uint *)(a3 + 12);
    if ( a1 != (int *)a2 && a1 != (int *)a3 )
      v12 = a1;
    else
      v12 = &a4[5 * (*a4 + 1) + 1];
    if ( v10 > v12[2] )
      v13 = Function_223d268(v12, v5 + v8);
    else
      v13 = (int)v12;
    if ( v13 )
    {
      v12[1] = v10;
      Function_223bb94(*v12, *v4, v5, *v6, v8);
      v7[3] = v11;
      Function_223d3ec(v12);
      if ( v7 != v12 )
        Function_223d1d0(v7, v12);
      result = 1;
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    Function_223d128(a1, 0);
    result = 1;
  }
  return result;
}

//----- (0223BDB8) --------------------------------------------------------
int __fastcall Function_223bdb8(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  bool v9;
  int result;
  bool v11;
  int v12;
  int v13;

  v3 = a2;
  v4 = 0;
  v5 = a1;
  v6 = a3;
  v7 = 0;
  if ( *(uint *)(a2 + 12) )
  {
    v8 = *(uint *)(a3 + 12);
    v9 = v8 == 0;
    if ( v8 )
      v8 = a2;
    else
      v4 = 1;
    if ( v9 )
    {
      v7 = v4;
    }
    else
    {
      v3 = a3;
      v6 = v8;
    }
  }
  else if ( *(uint *)(a3 + 12) )
  {
    v4 = 1;
  }
  if ( v4 )
  {
    result = Function_223c060(v5, v3, v6);
    v11 = result == 0;
    if ( !result )
      result = 0;
    if ( !v11 )
    {
      *(uint *)(v5 + 12) = v7;
      result = 1;
    }
  }
  else
  {
    v12 = *(uint *)(v3 + 4);
    if ( v12 <= *(uint *)(v6 + 4) )
      v12 = *(uint *)(v6 + 4);
    if ( v12 > *(uint *)(v5 + 8) )
      v13 = Function_223d268(v5, v12);
    else
      v13 = v5;
    if ( !v13 )
      return 0;
    if ( Function_223cf44(v3, v6) >= 0 )
    {
      if ( !Function_223befc(v5, v3, v6) )
        return 0;
      *(uint *)(v5 + 12) = 0;
    }
    else
    {
      if ( !Function_223befc(v5, v6, v3) )
        return 0;
      *(uint *)(v5 + 12) = 1;
    }
    result = 1;
  }
  return result;
}

//----- (0223BEFC) --------------------------------------------------------
int __fastcall Function_223befc(int a1, int a2, int a3)
{
  uint **v3;
  uint **v4;
  int v5;
  int v6;
  int v7;
  BOOL v9;
  int v10;
  uint *v11;
  uint *v12;
  int *i;
  uint v14;
  uint v15;
  uint v16;
  uint v17;
  bool v18;
  bool v19;
  int v20;
  int v21;
  uint v22;
  int v23;
  bool v24;
  uchar v25;

  v3 = (uint **)a2;
  v4 = (uint **)a3;
  v5 = *(uint *)(a3 + 4);
  v6 = *(uint *)(a2 + 4);
  v7 = a1;
  if ( v6 < v5 )
    return 0;
  if ( v6 > *(uint *)(a1 + 8) )
    a1 = Function_223d268(a1, v6);
  if ( !a1 )
    return 0;
  v9 = 0;
  v10 = 0;
  v11 = *v3;
  v12 = *v4;
  for ( i = *(int **)v7; v10 < v5; ++i )
  {
    v15 = *v11;
    ++v11;
    v14 = v15;
    v17 = *v12;
    ++v12;
    v16 = v17;
    if ( v9 )
    {
      v18 = v14 >= v16;
      v19 = v14 == v16;
      if ( v14 <= v16 )
        v9 = 1;
      v20 = v14 - v16;
      if ( !v19 && v18 )
        v9 = 0;
      v21 = v20 - 1;
    }
    else
    {
      v9 = v14 < v16;
      v21 = v14 - v16;
    }
    ++v10;
    *i = v21;
  }
  if ( v9 && v10 < v6 )
  {
    do
    {
      v22 = *v11;
      ++v11;
      ++v10;
      *i = v22 - 1;
      ++i;
    }
    while ( v22 <= v22 - 1 && v10 < v6 );
  }
  if ( i != (int *)v11 )
  {
    while ( v10 < v6 )
    {
      *i = *v11;
      if ( v10 + 1 >= v6 )
        break;
      i[1] = v11[1];
      if ( v10 + 2 >= v6 )
        break;
      v23 = v10 + 3;
      i[2] = v11[2];
      v25 = __OFSUB__(v10 + 3, v6);
      v24 = v10 + 3 - v6 < 0;
      if ( v10 + 3 < v6 )
        v23 = v11[3];
      v10 += 4;
      if ( !(v24 ^ v25) )
        break;
      i[3] = v23;
      v11 += 4;
      i += 4;
    }
  }
  *(uint *)(v7 + 4) = v6;
  Function_223d3ec(v7);
  return 1;
}

//----- (0223C060) --------------------------------------------------------
int __fastcall Function_223c060(int a1, int *a2, int *a3)
{
  int *v3;
  int *v4;
  int *v5;
  int v6;
  int v7;
  int v9;
  int v10;
  int v11;
  uint *v12;
  uint *v13;
  uint v14;
  uint *v15;
  uint v16;

  v3 = a2;
  v4 = a3;
  v5 = (int *)a1;
  if ( a2[1] < a3[1] )
  {
    v3 = a3;
    v4 = a2;
  }
  v6 = v3[1];
  v7 = v4[1];
  if ( v6 + 1 > *(uint *)(a1 + 8) )
    a1 = Function_223d268(a1, v6 + 1);
  if ( !a1 )
    return 0;
  v5[1] = v6;
  v9 = *v3;
  v10 = *v5;
  v11 = Function_223c814(*v5, v9, *v4, v7);
  v12 = (uint *)(v10 + 4 * v7);
  v13 = (uint *)(v9 + 4 * v7);
  if ( v11 )
  {
    if ( v7 < v6 )
    {
      while ( 1 )
      {
        v14 = *v13;
        ++v13;
        v15 = v12;
        *v12 = v14 + 1;
        ++v12;
        ++v7;
        if ( *v15 >= v14 )
          break;
        if ( v7 >= v6 )
          goto LABEL_12;
      }
      v11 = 0;
    }
LABEL_12:
    if ( v7 >= v6 && v11 )
    {
      *v12 = 1;
      ++v12;
      ++v5[1];
    }
  }
  if ( v12 != v13 && v7 < v6 )
  {
    do
    {
      v16 = *v13;
      ++v13;
      ++v7;
      *v12 = v16;
      ++v12;
    }
    while ( v7 < v6 );
  }
  return 1;
}

//----- (0223C17C) --------------------------------------------------------
BOOL __fastcall Function_223c17c(int a1, int *a2, int *a3)
{
  int v3;
  int *v4;
  int v5;
  int v6;
  BOOL result;

  v3 = (int)a2;
  v4 = a3;
  v5 = a2[3];
  v6 = a1;
  if ( v5 == v4[3] )
  {
    if ( v5 )
      *(uint *)(a1 + 12) = 1;
    else
      *(uint *)(a1 + 12) = 0;
    result = Function_223c060(a1, a2, v4) != 0;
  }
  else
  {
    if ( v5 )
    {
      v3 = (int)v4;
      v4 = a2;
    }
    if ( Function_223cf44(v3, v4) >= 0 )
    {
      if ( !Function_223befc(v6, v3, (int)v4) )
        return 0;
      *(uint *)(v6 + 12) = 0;
    }
    else
    {
      if ( !Function_223befc(v6, (int)v4, v3) )
        return 0;
      *(uint *)(v6 + 12) = 1;
    }
    result = 1;
  }
  return result;
}

//----- (0223C258) --------------------------------------------------------
int __fastcall Function_223c258(int a1, uint a2)
{
  uint v2;
  uint *v3;
  int result;
  int v5;
  uint v6;
  int v7;
  uint *v8;
  int v9;
  int v10;
  int v11;

  v2 = a2;
  v3 = (uint *)a1;
  if ( !a2 )
    return 1;
  if ( *(uint *)(a1 + 12) )
  {
    *(uint *)(a1 + 12) = 0;
    result = Function_223c3b8(a1, a2);
    v3[3] = 1;
  }
  else
  {
    v5 = *(uint *)(a1 + 4);
    if ( v5 > 1 )
    {
      v7 = 0;
      while ( 1 )
      {
        v8 = (uint *)*v3;
        v9 = v7;
        if ( *(uint *)(*v3 + 4 * v7) >= v2 )
          break;
        ++v7;
        v10 = v8[v9] - v2;
        v2 = 1;
        v8[v9] = v10;
      }
      v8[v9] -= v2;
      if ( !*(uint *)(*v3 + v9 * 4) )
      {
        v11 = v3[1] - 1;
        if ( v7 == v11 )
          v3[1] = v11;
      }
      result = 1;
    }
    else if ( v5 )
    {
      v6 = **(uint **)a1;
      if ( v6 == v2 )
      {
        *(uint *)(a1 + 4) = 0;
      }
      else if ( v6 <= v2 )
      {
        *(uint *)(a1 + 12) = 1;
        **(uint **)a1 = v2 - v6;
      }
      else
      {
        **(uint **)a1 = v6 - v2;
      }
      result = 1;
    }
    else
    {
      if ( *(uint *)(a1 + 8) < 1 )
        a1 = Function_223d268(a1, 1);
      if ( a1 )
      {
        result = 1;
        *(uint *)*v3 = v2;
        v3[3] = 1;
        v3[1] = 1;
      }
      else
      {
        result = 0;
      }
    }
  }
  return result;
}

//----- (0223C3B8) --------------------------------------------------------
int __fastcall Function_223c3b8(int a1, uint a2)
{
  uint v2;
  uint *v3;
  int result;
  uint v5;
  int v6;
  int v7;
  uint v8;
  int v9;
  bool v10;
  uchar v11;

  v2 = a2;
  v3 = (uint *)a1;
  if ( !a2 )
    return 1;
  if ( *(uint *)(a1 + 12) )
  {
    if ( *(uint *)(a1 + 4) <= 1 )
    {
      v5 = **(uint **)a1;
      if ( v5 > v2 )
        **(uint **)a1 = v5 - v2;
      if ( v5 <= v2 )
      {
        if ( v5 < v2 )
        {
          *(uint *)(a1 + 12) = 0;
          **(uint **)a1 = v2 - v5;
        }
        else
        {
          *(uint *)(a1 + 12) = 0;
          *(uint *)(a1 + 4) = 0;
        }
      }
      result = 1;
    }
    else
    {
      *(uint *)(a1 + 12) = 0;
      result = Function_223c258(a1, a2);
      v3[3] = 1;
    }
  }
  else
  {
    v6 = *(uint *)(a1 + 4) + 1;
    if ( v6 > *(uint *)(a1 + 8) )
      a1 = Function_223d268(a1, v6);
    if ( a1 )
    {
      v7 = 0;
      *(uint *)(*v3 + 4 * v3[1]) = 0;
      while ( 1 )
      {
        v8 = v2 + *(uint *)(*v3 + 4 * v7);
        *(uint *)(*v3 + 4 * v7) = v8;
        if ( v2 <= v8 )
          break;
        v2 = 1;
        ++v7;
      }
      v9 = v3[1];
      v11 = __OFSUB__(v7, v9);
      v10 = v7 - v9 < 0;
      if ( v7 >= v9 )
        ++v9;
      if ( !(v10 ^ v11) )
        v3[1] = v9;
      result = 1;
    }
    else
    {
      result = 0;
    }
  }
  return result;
}

//----- (0223C4E0) --------------------------------------------------------
int __fastcall Function_223c4e0(int a1, uint *a2, uint a3)
{
  uint *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v10;
  int *v11;
  int *v12;
  int v13;
  int *v14;
  int j;
  int v16;
  uint *v17;
  uint v18;
  int i;
  uint v20;
  uint v21;

  v3 = a2;
  v4 = a3;
  v5 = (a3 >> 31) + __ROR4__((a3 << 27) - (a3 >> 31), 27);
  v6 = a2[1];
  v7 = v4 / 32;
  v8 = a1;
  if ( v4 / 32 > v6 )
  {
    Function_223d128(a1, 0);
    return 1;
  }
  if ( (uint *)a1 != a2 )
  {
    v10 = v6 - v7 + 2;
    if ( v10 > *(uint *)(a1 + 8) )
      a1 = Function_223d268(a1, v10);
    if ( !a1 )
      return 0;
    *(uint *)(v8 + 12) = v3[3];
  }
  v11 = (int *)(*v3 + 4 * v7);
  v12 = *(int **)v8;
  v13 = v3[1] - v7;
  v14 = v11;
  *(uint *)(v8 + 4) = v13;
  if ( v5 )
  {
    v17 = (uint *)(v11 + 1);
    v18 = *v11;
    for ( i = 1; i < v13; ++v12 )
    {
      v20 = v18 >> v5;
      v21 = *v17;
      ++v17;
      v18 = v21;
      ++i;
      *v12 = v20 | (v21 << (32 - v5));
    }
    *v12 = v18 >> v5;
    v12[1] = 0;
  }
  else
  {
    for ( j = v13 + 1; j > 0; ++v12 )
    {
      v16 = *v14;
      ++v14;
      --j;
      *v12 = v16;
    }
  }
  Function_223d3ec(v8);
  return 1;
}

//----- (0223C5FC) --------------------------------------------------------
int __fastcall Function_223c5fc(int a1, int *a2, int a3)
{
  int *v3;
  uint v4;
  int v5;
  int v6;
  int v7;
  int v9;
  int v10;
  ushort *v11;
  int j;
  int i;
  uint v14;

  v3 = a2;
  v4 = a3;
  v5 = a1;
  v6 = a2[1] + a3 / 32 + 1;
  v7 = a3 / 32;
  if ( v6 > *(uint *)(a1 + 8) )
    a1 = Function_223d268(a1, v6);
  if ( !a1 )
    return 0;
  *(uint *)(v5 + 12) = v3[3];
  v9 = (v4 >> 31) + __ROR4__((v4 << 27) - (v4 >> 31), 27);
  v10 = *v3;
  v11 = *(ushort **)v5;
  *(uint *)(*(uint *)v5 + 4 * (v3[1] + v7)) = 0;
  if ( v9 )
  {
    for ( i = v3[1] - 1; i >= 0; --i )
    {
      v14 = *(uint *)(v10 + 4 * i);
      *(uint *)&v11[2 * (v7 + i + 1)] |= v14 >> (32 - v9);
      *(uint *)&v11[2 * (v7 + i)] = v14 << v9;
    }
  }
  else
  {
    for ( j = v3[1] - 1; j >= 0; --j )
      *(uint *)&v11[2 * (v7 + j)] = *(uint *)(v10 + 4 * j);
  }
  MI_CpuFill8(v11, 0, 4 * v7);
  *(uint *)(v5 + 4) = v3[1] + v7 + 1;
  Function_223d3ec(v5);
  return 1;
}

//----- (0223C700) --------------------------------------------------------
BOOL __fastcall Function_223c700(uint *a1, uint *a2, uint *a3, int a4)
{
  BOOL v5;
  uint v6;
  uint v7;
  uint v8;
  uint v9;
  uint v10;
  uint v11;
  uint v12;
  uint v13;

  if ( a4 <= 0 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    v6 = *a2;
    v7 = *a3;
    *a1 = *a2 - *a3 - v5;
    if ( v6 != v7 )
      v5 = v6 < v7;
    if ( a4 - 1 <= 0 )
      break;
    v8 = a2[1];
    v9 = a3[1];
    a1[1] = v8 - v9 - v5;
    if ( v8 != v9 )
      v5 = v8 < v9;
    if ( a4 - 2 <= 0 )
      break;
    v10 = a2[2];
    v11 = a3[2];
    a1[2] = v10 - v11 - v5;
    if ( v10 != v11 )
      v5 = v10 < v11;
    if ( a4 - 3 <= 0 )
      break;
    v12 = a2[3];
    v13 = a3[3];
    a1[3] = v12 - v13 - v5;
    if ( v12 != v13 )
      v5 = v12 < v13;
    a4 -= 4;
    if ( a4 <= 0 )
      break;
    a2 += 4;
    a3 += 4;
    a1 += 4;
  }
  return v5;
}

//----- (0223C814) --------------------------------------------------------
uint __fastcall Function_223c814(uint *a1, uint *a2, uint *a3, int a4)
{
  uint v5;
  uint v6;
  bool v7;
  uint v8;
  uint v9;
  bool v10;
  uint v11;
  uint v12;
  bool v13;
  uint v14;
  uint v15;
  bool v16;
  uint v17;

  if ( a4 <= 0 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    v6 = *a2 + v5;
    v7 = v6 >= v5;
    if ( v6 < v5 )
      v5 = 1;
    v8 = v6 + *a3;
    if ( v7 )
      v5 = 0;
    *a1 = v8;
    v5 += v8 < v6;
    if ( a4 - 1 <= 0 )
      break;
    v9 = a2[1] + v5;
    v10 = v9 >= v5;
    if ( v9 < v5 )
      v5 = 1;
    v11 = v9 + a3[1];
    if ( v10 )
      v5 = 0;
    v5 += v11 < v9;
    a1[1] = v11;
    if ( a4 - 2 <= 0 )
      break;
    v12 = a2[2] + v5;
    v13 = v12 >= v5;
    if ( v12 < v5 )
      v5 = 1;
    v14 = v12 + a3[2];
    if ( v13 )
      v5 = 0;
    v5 += v14 < v12;
    a1[2] = v14;
    if ( a4 - 3 <= 0 )
      break;
    v15 = a2[3] + v5;
    v16 = v15 >= v5;
    if ( v15 < v5 )
      v5 = 1;
    v17 = v15 + a3[3];
    if ( v16 )
      v5 = 0;
    a4 -= 4;
    a1[3] = v17;
    v5 += v17 < v15;
    if ( a4 <= 0 )
      break;
    a2 += 4;
    a3 += 4;
    a1 += 4;
  }
  return v5;
}

//----- (0223C964) --------------------------------------------------------
uint *__fastcall Function_223c964(uint *result, uint *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint v8;
  uint v9;
  uint v10;
  uint v11;
  uint v12;
  uint v13;
  uint v14;
  uint v15;
  uint v16;
  uint v17;
  uint v18;

  if ( a3 > 0 )
  {
    while ( 1 )
    {
      v3 = *a2 & 0xFFFF;
      v4 = (ushort)(*a2 >> 16) >> 8;
      v5 = v3 * v4;
      v6 = v3 * v3;
      v7 = v3 * v4 & 0xFFFF;
      v8 = v6 + (v7 << 17);
      v9 = v4 * v4 + ((v5 & 0xFFFF8000) >> 15);
      if ( v8 < v7 << 17 )
        ++v9;
      *result = v6 + (v7 << 17);
      result[1] = v9;
      if ( a3 == 1 )
        break;
      v10 = a2[1];
      v11 = (ushort)v10 * (ushort)v10 + ((ushort)(v10 * HIWORD(v10)) << 17);
      v12 = (v10 >> 16) * (v10 >> 16) + (((ushort)v10 * (v10 >> 16) & 0xFFFF8000) >> 15);
      if ( v11 < (uint)(ushort)(v10 * HIWORD(v10)) << 17 )
        ++v12;
      result[2] = v11;
      result[3] = v12;
      if ( a3 == 2 )
        break;
      v13 = a2[2];
      v14 = (ushort)v13 * (ushort)v13 + ((ushort)(v13 * HIWORD(v13)) << 17);
      v15 = (v13 >> 16) * (v13 >> 16) + (((ushort)v13 * (v13 >> 16) & 0xFFFF8000) >> 15);
      if ( v14 < (uint)(ushort)(v13 * HIWORD(v13)) << 17 )
        ++v15;
      result[4] = v14;
      result[5] = v15;
      if ( a3 == 3 )
        break;
      v16 = a2[3];
      v17 = (ushort)v16 * (ushort)v16 + ((ushort)(v16 * HIWORD(v16)) << 17);
      v18 = (v16 >> 16) * (v16 >> 16) + (((ushort)v16 * (v16 >> 16) & 0xFFFF8000) >> 15);
      if ( v17 < (uint)(ushort)(v16 * HIWORD(v16)) << 17 )
        ++v18;
      result[6] = v17;
      a3 -= 4;
      result[7] = v18;
      if ( !a3 )
        break;
      a2 += 4;
      result += 8;
    }
  }
  return result;
}

//----- (0223CAB8) --------------------------------------------------------
uint __fastcall Function_223cab8(uint *a1, uint *a2, int a3, uint a4)
{
  uint v4;
  int v6;
  uint v7;
  int v8;
  int v9;
  uint v10;
  int v11;
  int v12;
  uint v13;
  uint v14;
  uint v15;
  uint v16;
  uint v17;
  uint v18;
  int v19;
  int v20;
  uint v21;
  uint v22;
  uint v23;
  uint v24;
  uint v25;
  int v26;
  int v27;
  uint v28;
  uint v29;
  uint v30;
  uint v31;
  uint v32;
  uint v33;
  int v34;
  int v35;
  uint v36;
  uint v37;

  v4 = 0;
  if ( a3 <= 0 )
    return 0;
  v6 = (ushort)a4;
  v7 = a4 >> 16;
  while ( 1 )
  {
    v8 = (ushort)(*a2 >> 16) >> 8;
    v9 = *a2 & 0xFFFF;
    v10 = v6 * v8 + v7 * v9;
    v11 = v9 * v6;
    v12 = v8 * v7;
    if ( v10 < v6 * v8 )
      v12 += 0x10000;
    v13 = v11 + ((ushort)v10 << 16);
    v14 = v12 + (v10 >> 16);
    v15 = v13 + v4;
    if ( v13 < (uint)(ushort)v10 << 16 )
      ++v14;
    if ( v15 < v4 )
      ++v14;
    *a1 = v15;
    v4 = v14;
    if ( a3 == 1 )
      break;
    v16 = a2[1];
    v17 = v16 >> 16;
    v18 = v6 * (v16 >> 16) + v7 * (ushort)v16;
    v19 = (ushort)v16 * v6;
    v20 = (v16 >> 16) * v7;
    if ( v18 < v6 * v17 )
      v20 += 0x10000;
    v21 = v19 + ((ushort)v18 << 16);
    v4 = v20 + (v18 >> 16);
    v22 = v21 + v14;
    if ( v21 < (uint)(ushort)v18 << 16 )
      ++v4;
    if ( v22 < v14 )
      ++v4;
    a1[1] = v22;
    if ( a3 == 2 )
      break;
    v23 = a2[2];
    v24 = v23 >> 16;
    v25 = v6 * (v23 >> 16) + v7 * (ushort)v23;
    v26 = (ushort)v23 * v6;
    v27 = (v23 >> 16) * v7;
    if ( v25 < v6 * v24 )
      v27 += 0x10000;
    v28 = v26 + ((ushort)v25 << 16);
    v29 = v27 + (v25 >> 16);
    v30 = v28 + v4;
    if ( v28 < (uint)(ushort)v25 << 16 )
      ++v29;
    if ( v30 < v4 )
      ++v29;
    a1[2] = v30;
    v4 = v29;
    if ( a3 == 3 )
      break;
    v31 = a2[3];
    v32 = v31 >> 16;
    v33 = v6 * (v31 >> 16) + v7 * (ushort)v31;
    v34 = (ushort)v31 * v6;
    v35 = (v31 >> 16) * v7;
    if ( v33 < v6 * v32 )
      v35 += 0x10000;
    v36 = v34 + ((ushort)v33 << 16);
    v4 = v35 + (v33 >> 16);
    v37 = v36 + v29;
    if ( v36 < (uint)(ushort)v33 << 16 )
      ++v4;
    if ( v37 < v29 )
      ++v4;
    a3 -= 4;
    a1[3] = v37;
    if ( !a3 )
      break;
    a2 += 4;
    a1 += 4;
  }
  return v4;
}

//----- (0223CC58) --------------------------------------------------------
uint __fastcall Function_223cc58(uint *a1, uint *a2, int a3, uint a4)
{
  uint v4;
  int v6;
  uint v7;
  int v8;
  int v9;
  uint v10;
  int v11;
  int v12;
  uint v13;
  uint v14;
  uint v15;
  uint v16;
  uint v17;
  uint v18;
  uint v19;
  int v20;
  int v21;
  uint v22;
  uint v23;
  bool v24;
  uint v25;
  uint v26;
  uint v27;
  uint v28;
  uint v29;
  int v30;
  int v31;
  uint v32;
  uint v33;
  uint v34;
  uint v35;
  uint v36;
  uint v37;
  uint v38;
  int v39;
  int v40;
  uint v41;
  uint v42;
  uint v43;
  uint v44;

  v4 = 0;
  if ( a3 <= 0 )
    return 0;
  v6 = (ushort)a4;
  v7 = a4 >> 16;
  while ( 1 )
  {
    v8 = (ushort)(*a2 >> 16) >> 8;
    v9 = *a2 & 0xFFFF;
    v10 = v6 * v8 + v7 * v9;
    v11 = v9 * v6;
    v12 = v8 * v7;
    if ( v10 < v6 * v8 )
      v12 += 0x10000;
    v13 = v11 + ((ushort)v10 << 16);
    v14 = v12 + (v10 >> 16);
    v15 = *a1;
    if ( v13 < (uint)(ushort)v10 << 16 )
      ++v14;
    v16 = v13 + v4 + v15;
    if ( v13 + v4 < v4 )
      ++v14;
    if ( v16 < v15 )
      ++v14;
    v4 = v14;
    *a1 = v16;
    if ( a3 == 1 )
      break;
    v17 = a2[1];
    v18 = v17 >> 16;
    v19 = v6 * (v17 >> 16) + v7 * (ushort)v17;
    v20 = (ushort)v17 * v6;
    v21 = (v17 >> 16) * v7;
    if ( v19 < v6 * v18 )
      v21 += 0x10000;
    v22 = v20 + ((ushort)v19 << 16);
    v4 = v21 + (v19 >> 16);
    v23 = v22 + v14;
    if ( v22 < (uint)(ushort)v19 << 16 )
      ++v4;
    v24 = v23 >= v14;
    v25 = a1[1];
    if ( !v24 )
      ++v4;
    v26 = v23 + v25;
    if ( v26 < v25 )
      ++v4;
    a1[1] = v26;
    if ( a3 == 2 )
      break;
    v27 = a2[2];
    v28 = v27 >> 16;
    v29 = v6 * (v27 >> 16) + v7 * (ushort)v27;
    v30 = (ushort)v27 * v6;
    v31 = (v27 >> 16) * v7;
    if ( v29 < v6 * v28 )
      v31 += 0x10000;
    v32 = v30 + ((ushort)v29 << 16);
    v33 = v31 + (v29 >> 16);
    v34 = a1[2];
    if ( v32 < (uint)(ushort)v29 << 16 )
      ++v33;
    v35 = v32 + v4 + v34;
    if ( v32 + v4 < v4 )
      ++v33;
    if ( v35 < v34 )
      ++v33;
    v4 = v33;
    a1[2] = v35;
    if ( a3 == 3 )
      break;
    v36 = a2[3];
    v37 = v36 >> 16;
    v38 = v6 * (v36 >> 16) + v7 * (ushort)v36;
    v39 = (ushort)v36 * v6;
    v40 = (v36 >> 16) * v7;
    if ( v38 < v6 * v37 )
      v40 += 0x10000;
    v41 = v39 + ((ushort)v38 << 16);
    v4 = v40 + (v38 >> 16);
    v42 = v41 + v33;
    if ( v41 < (uint)(ushort)v38 << 16 )
      ++v4;
    v24 = v42 >= v33;
    v43 = a1[3];
    if ( !v24 )
      ++v4;
    v44 = v42 + v43;
    if ( v44 < v43 )
      ++v4;
    a3 -= 4;
    a1[3] = v44;
    if ( !a3 )
      break;
    a2 += 4;
    a1 += 4;
  }
  return v4;
}

//----- (0223CE38) --------------------------------------------------------
int __fastcall Function_223ce38(int *a1, int a2)
{
  int result;
  int v3;
  int v4;
  int v5;

  if ( a2 < 0 )
    return 0;
  v3 = a2 / 32;
  v4 = ((uint)a2 >> 31) + __ROR4__((a2 << 27) - ((uint)a2 >> 31), 27);
  if ( a1[1] <= a2 / 32 )
    return 0;
  v5 = *a1;
  result = 1;
  if ( !((1 << v4) & *(uint *)(v5 + 4 * v3)) )
    result = 0;
  return result;
}

//----- (0223CEA8) --------------------------------------------------------
int __fastcall Function_223cea8(int a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  bool v5;
  bool v6;
  uchar v7;
  int v8;
  int result;
  int i;

  v2 = (uint *)a1;
  v3 = *(uint *)(a1 + 4);
  v4 = a2 / 32;
  v7 = __OFSUB__(v3, a2 / 32);
  v5 = v3 == a2 / 32;
  v6 = v3 - a2 / 32 < 0;
  v8 = ((uint)a2 >> 31) + __ROR4__((a2 << 27) - ((uint)a2 >> 31), 27);
  if ( (uchar)(v6 ^ v7) | v5 )
  {
    if ( v4 + 1 > *(uint *)(a1 + 8) )
      a1 = Function_223d268(a1, v4 + 1);
    if ( !a1 )
      return 0;
    for ( i = v2[1]; i < v4 + 1; ++i )
      *(uint *)(*v2 + 4 * i) = 0;
    v2[1] = v4 + 1;
  }
  result = 1;
  *(uint *)(*v2 + 4 * v4) |= 1 << v8;
  return result;
}

//----- (0223CF44) --------------------------------------------------------
int __fastcall Function_223cf44(int *a1, int *a2)
{
  int v2;
  int result;
  bool v4;
  int v5;
  int v6;
  int v7;
  uint v8;
  uint v9;

  v2 = a1[1];
  if ( v2 != a2[1] )
    return v2 - a2[1];
  v5 = v2 - 1;
  v4 = v2 - 1 < 0;
  v6 = *a1;
  v7 = *a2;
  if ( v4 )
    return 0;
  while ( 1 )
  {
    v8 = *(uint *)(v6 + 4 * v5);
    v9 = *(uint *)(v7 + 4 * v5);
    if ( v8 != v9 )
      break;
    if ( --v5 < 0 )
      return 0;
  }
  if ( v8 <= v9 )
    result = -1;
  else
    result = 1;
  return result;
}

//----- (0223CF98) --------------------------------------------------------
int __fastcall Function_223cf98(uint *a1, uchar *a2)
{
  uint *v2;
  uchar *v3;
  int v4;
  int v5;
  int result;
  int v7;
  bool v8;
  bool v9;

  v2 = a1;
  v3 = a2;
  v4 = Function_223d534(a1);
  v5 = v4 + 7;
  result = (v4 + 7) / 8;
  v7 = result - 1;
  if ( v5 / 8 > 0 )
  {
    do
    {
      v8 = v7 == 0;
      v9 = v7 < 0;
      *v3++ = *(uint *)(*v2 + 4 * (v7 / 4)) >> 8 * ((v7 < 0) + __ROR4__((v7 << 30) - ((uint)v7 >> 31), 30));
      --v7;
    }
    while ( !v9 && !v8 );
  }
  return result;
}

//----- (0223D014) --------------------------------------------------------
int __fastcall Function_223d014(int result, int a2, uint *a3)
{
  uint *v3;
  uchar *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint v9;
  bool v10;
  int v11;
  int i;
  int v13;

  v3 = a3;
  v4 = (uchar *)result;
  v5 = a2;
  if ( !a3 )
  {
    result = Function_223d38c();
    v3 = (uint *)result;
  }
  if ( !v3 )
    return 0;
  v6 = 0;
  if ( !v5 )
    result = (int)v3;
  if ( v5 )
  {
    v7 = 8 * (v5 + 2);
    if ( (v7 + 31) / 32 > v3[2] )
      v8 = Function_223d268(v3, v7 / 32 + 1);
    else
      v8 = (int)v3;
    if ( v8 )
    {
      v9 = ((uint)(v5 - 1) >> 2) + 1;
      v10 = v5 == 0;
      v3[1] = v9;
      v11 = (v5 - 1) & 3;
      for ( i = v5 - 1; !v10; --i )
      {
        v13 = *v4++;
        v10 = v11-- == 0;
        v6 = v13 | (v6 << 8);
        if ( v10 )
        {
          *(uint *)(*v3 + 4 * --v9) = v6;
          v6 = 0;
          v11 = 3;
        }
        v10 = i == 0;
      }
      Function_223d3ec(v3);
      result = (int)v3;
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    v3[1] = 0;
  }
  return result;
}

//----- (0223D128) --------------------------------------------------------
int __fastcall Function_223d128(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( *(uint *)(a1 + 8) < 1 )
    a1 = Function_223d268(a1, 2);
  if ( !a1 )
    return 0;
  *(uint *)(v2 + 12) = 0;
  *(uint *)(v2 + 4) = 0;
  **(uint **)v2 = v3;
  if ( **(uint **)v2 )
    *(uint *)(v2 + 4) = 1;
  return 1;
}

//----- (0223D198) --------------------------------------------------------
int __fastcall Function_223d198(ushort **a1)
{
  uint *v1;
  ushort *v2;
  int result;

  v1 = a1;
  v2 = *a1;
  if ( v2 )
    MI_CpuFill8(v2, 0, 4 * v1[2]);
  result = 0;
  v1[1] = 0;
  v1[3] = 0;
  return result;
}

//----- (0223D1D0) --------------------------------------------------------
int __fastcall Function_223d1d0(int result, int *a2, int a3, uint a4)
{
  uint *v4;
  int *v5;
  int v6;

  v4 = (uint *)result;
  v5 = a2;
  if ( (int *)result != a2 )
  {
    v6 = a2[1];
    if ( v6 > *(uint *)(result + 8) )
      result = Function_223d268(result, v6);
    if ( result )
    {
      MI_CpuCopy8(*v5, *v4, 4 * v5[1], a4);
      v4[1] = v5[1];
      if ( !v4[1] )
      {
        if ( *v4 )
          *(uint *)*v4 = 0;
      }
      result = (int)v4;
      v4[3] = v5[3];
    }
    else
    {
      result = 0;
    }
  }
  return result;
}

//----- (0223D268) --------------------------------------------------------
int *__fastcall Function_223d268(int *a1, int a2)
{
  int *v2;
  int v3;
  uint v5;
  uint v6;

  v2 = a1;
  v3 = a2;
  if ( a2 > a1[2] )
  {
    if ( a1[4] & 2 )
      return 0;
    v6 = Function_223d62c(4 * (a2 + 1));
    if ( !v6 )
      return 0;
    if ( *v2 )
    {
      MI_CpuCopy8(*v2, v6, 4 * v2[1], v5);
      Function_223d5e4(*v2);
    }
    *v2 = v6;
    v2[2] = v3;
  }
  return v2;
}

//----- (0223D2E8) --------------------------------------------------------
int __fastcall Function_223d2e8(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  v2 = a1 + 4;
  v3 = 0;
  do
  {
    Function_223d510(v2);
    ++v3;
    v2 += 20;
  }
  while ( v3 < 12 );
  result = *(uint *)(v1 + 264) & 1;
  if ( result )
    result = Function_223d5e4(v1);
  return result;
}

//----- (0223D330) --------------------------------------------------------
int __fastcall Function_223d330(ushort *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  MI_CpuFill8(a1, 0, 0x110u);
  result = 0;
  *v1 = 0;
  v1[66] = 0;
  return result;
}

//----- (0223D358) --------------------------------------------------------
ushort *Function_223d358()
{
  ushort *v0;
  ushort *v1;
  ushort *result;

  v0 = (ushort *)Function_223d62c(272);
  v1 = v0;
  if ( !v0 )
    return 0;
  Function_223d330(v0);
  result = v1;
  *((uint *)v1 + 66) = 1;
  return result;
}

//----- (0223D38C) --------------------------------------------------------
uint *Function_223d38c()
{
  uint *result;

  result = (uint *)Function_223d62c(20);
  if ( !result )
    return 0;
  result[4] = 1;
  result[1] = 0;
  result[3] = 0;
  result[2] = 0;
  *result = 0;
  return result;
}

//----- (0223D3D8) --------------------------------------------------------
ushort *__fastcall Function_223d3d8(ushort *a1)
{
  return MI_CpuFill8(a1, 0, 0x14u);
}

//----- (0223D3EC) --------------------------------------------------------
uint *__fastcall Function_223d3ec(uint *result)
{
  int v1;
  bool v2;
  bool v3;
  int *v4;
  int v5;

  v1 = result[1];
  if ( v1 > 0 )
  {
    v2 = v1 == 0;
    v3 = v1 < 0;
    v4 = (int *)(*result + 4 * (v1 - 1));
    if ( !v3 && !v2 )
    {
      do
      {
        v5 = *v4;
        --v4;
        if ( v5 )
          break;
        --result[1];
      }
      while ( result[1] > 0 );
    }
  }
  return result;
}

//----- (0223D438) --------------------------------------------------------
int *__fastcall Function_223d438(int *result, int a2)
{
  int *v2;
  int v3;
  int i;

  v2 = result;
  v3 = a2;
  if ( result[1] < a2 )
  {
    if ( a2 > result[2] )
      Function_223d268(result, a2);
    result = (int *)*v2;
    if ( *v2 )
    {
      for ( i = v2[1]; i < v3; ++i )
      {
        result = (int *)*v2;
        *(uint *)(*v2 + 4 * i) = 0;
      }
    }
  }
  return result;
}

//----- (0223D4B8) --------------------------------------------------------
uint *__fastcall Function_223d4b8(uint *result)
{
  uint *v1;
  int v2;

  v1 = result;
  if ( result )
  {
    v2 = *result;
    if ( *v1 && !(v1[4] & 2) )
      Function_223d5e4(v2);
    v1[4] |= 0x8000u;
    result = (uint *)(v1[4] & 1);
    if ( result )
      result = (uint *)Function_223d5e4(v1);
  }
  return result;
}

//----- (0223D510) --------------------------------------------------------
uint *__fastcall Function_223d510(uint *result)
{
  uint *v1;

  v1 = result;
  if ( result )
  {
    Function_223d198((ushort **)result);
    result = Function_223d4b8(v1);
  }
  return result;
}

//----- (0223D534) --------------------------------------------------------
int __fastcall Function_223d534(uint *a1)
{
  int v1;
  int result;

  v1 = a1[1];
  if ( v1 )
    result = Function_223d568(*(uint *)(*a1 + 4 * (v1 - 1))) + 32 * (v1 - 1);
  else
    result = 0;
  return result;
}

//----- (0223D568) --------------------------------------------------------
int __fastcall Function_223d568(uint a1)
{
  int v1;
  uint v2;
  int result;

  if ( a1 & 0xFFFF0000 )
  {
    if ( a1 & 0xFF000000 )
      v1 = 24;
    else
      v1 = 16;
  }
  else if ( a1 & 0xFF00 )
  {
    v1 = 8;
  }
  else
  {
    v1 = 0;
  }
  v2 = a1 >> v1;
  if ( (a1 >> v1) & 0xF0 )
    result = *((char *)dword_223DEE8 + (v2 >> 4)) + v1 + 4;
  else
    result = *((char *)dword_223DEE8 + v2) + v1;
  return result;
}

//----- (0223D5C8) --------------------------------------------------------
int __fastcall Function_223d5c8(int result, int a2)
{
  dword_223F350[1513] = result;
  dword_223F350[1514] = a2;
  return result;
}

//----- (0223D5E4) --------------------------------------------------------
uint __fastcall Function_223d5e4(int a1)
{
  uint result;

  if ( dword_223F350[1514] )
    result = ((int (*)(void))dword_223F350[1514])();
  else
    result = OS_FreeToHeap(0, -1, a1);
  return result;
}

//----- (0223D62C) --------------------------------------------------------
uint *__fastcall Function_223d62c(int a1)
{
  uint *result;

  if ( dword_223F350[1513] )
    result = (uint *)((int (*)(void))dword_223F350[1513])();
  else
    result = OS_AllocFromHeap(0, -1, a1);
  return result;
}

