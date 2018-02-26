//----- (02241AE0) --------------------------------------------------------
int __fastcall Function_2241ae0(int a1, uint *a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uchar *v10;
  uint v11;

  v4 = a1;
  v5 = a2;
  v6 = LoadOverlay(104, 2, a3, a4);
  Function_2242344(v6);
  Function_2017fc8(3, 103, 0x20000);
  v7 = MallocSomeDataAndStorePtrInOverlayData1c(v4, 972, 0x67u);
  Call_FillMemWithValue((int *)v7, 0, 0x3CCu);
  *(uint *)(v7 + 144) = Function_2018340(0x67u);
  *(uint *)v7 = v4;
  v8 = LoadPtrToOverWorldDataIn18(v4);
  *(uint *)(v7 + 220) = *(uint *)v8;
  *(uint *)(v7 + 224) = Function_20304a0(*(uint *)(v7 + 220));
  *(uint *)(v7 + 228) = Function_20305b8(*(uint *)(v7 + 220));
  *(uchar *)(v7 + 9) = *(uchar *)(v8 + 4);
  *(ushort *)(v7 + 42) = *(ushort *)(v8 + 30);
  *(ushort *)(v7 + 40) = *(ushort *)(v8 + 28);
  *(ushort *)(v7 + 962) = *(ushort *)(v8 + 24);
  *(uchar *)(v7 + 18) = *(uchar *)(v8 + 7);
  *(uint *)(v7 + 864) = v8 + 56;
  *(uint *)(v7 + 216) = LoadPlayerDataAdress(*(uint *)(v7 + 220));
  *(uint *)(v7 + 868) = *(uint *)(v8 + 48);
  *(uint *)(v7 + 872) = *(uint *)(v8 + 52);
  *(uchar *)(v7 + 14) = -1;
  *(uint *)(v7 + 4) = LoadVariableAreaAdress_17(*(uint *)(v7 + 220));
  *(uint *)(v7 + 860) = *(uint *)(v8 + 8);
  *(uint *)(v7 + 28) = *(uint *)(v8 + 12);
  *(uint *)(v7 + 32) = *(uint *)(v8 + 16);
  *(uint *)(v7 + 36) = *(uint *)(v8 + 20);
  *(uint *)(v7 + 24) = 900;
  *(uchar *)(v7 + 12) = *(uchar *)(v8 + 66);
  v9 = 0;
  do
  {
    v10 = (uchar *)(v7 + v9++ + 68);
    *v10 = 32;
  }
  while ( v9 < 32 );
  *(uchar *)(v7 + 44) = 4;
  *(uchar *)(v7 + 45) = 4;
  *(uchar *)(v7 + 46) = 16;
  *(uchar *)(v7 + 960) = 0;
  **(ushort **)(v7 + 36) = Function_2242b1c(v7);
  v11 = PRNG();
  *(ushort *)(v7 + 22) = (v11 >> 31) + __ROR4__((v11 << 28) - (v11 >> 31), 28);
  Function_224237c(v7);
  if ( ((int (__fastcall *)(uint))dword_223C000[0])(*(uchar *)(v7 + 9)) == 1 )
    Function_209ba80(v7);
  *v5 = 0;
  LOBYTE(dword_22437A0[0]) = 0;
  BYTE1(dword_22437A0[0]) = dword_22437A0[0];
  return 1;
}

//----- (02241C38) --------------------------------------------------------
int __fastcall Function_2241c38(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int result;
  uchar *v5;

  v2 = a2;
  v3 = LoadOverlayData1c(a1);
  if ( *(uchar *)(v3 + 14) != 255 && *v2 == 1 )
  {
    Function_2243008();
    *(uchar *)(v3 + 20) = Function_2242a04(*(uchar *)(v3 + 46), *(uchar *)(v3 + 14));
    Function_224295c(v3, v2, 2);
  }
  switch ( (uchar)*v2 )
  {
    case 0u:
      if ( Function_2241db0(v3) == 1 )
        Function_224295c(v3, v2, 1);
      goto LABEL_19;
    case 1u:
      if ( Function_2241f28(v3) == 1 )
      {
        if ( (uint)*(uchar *)(v3 + 47) << 24 >> 25 == 1 )
        {
          Function_224295c(v3, v2, 2);
        }
        else if ( ((int (__fastcall *)(uint))dword_223C000[0])(*(uchar *)(v3 + 9)) == 1 )
        {
          Function_224295c(v3, v2, 3);
        }
        else
        {
          Function_224295c(v3, v2, 4);
        }
      }
      goto LABEL_19;
    case 2u:
      if ( Function_2242104(v3) == 1 )
        Function_224295c(v3, v2, 3);
      goto LABEL_19;
    case 3u:
      if ( Function_2242198(v3) == 1 )
        Function_224295c(v3, v2, 4);
      goto LABEL_19;
    case 4u:
      if ( Function_22421f0(v3) != 1 )
        goto LABEL_19;
      result = 1;
      break;
    default:
LABEL_19:
      *(uchar *)(v3 + 19) = *(uchar *)(v3 + 19) & 1 | 2
                                                    * (((uint)*(uchar *)(v3 + 19) << 24 >> 25) + 1);
      v5 = (uchar *)(v3 + 19);
      if ( (uint)*(uchar *)(v3 + 19) << 24 >> 25 >= 4 )
      {
        *v5 &= 1u;
        *v5 = *v5 & 0xFE | (*v5 & 1 ^ 1) & 1;
      }
      Function_20219f8(*(uint *)(v3 + 232));
      result = 0;
      break;
  }
  return result;
}

//----- (02241D70) --------------------------------------------------------
int __fastcall Function_2241d70(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  v3 = v2;
  **(ushort **)(v2 + 864) = *(uchar *)(v2 + 13);
  Function_201dc3c();
  Function_2242238(v3);
  FreeSomeDataAndStore0InOverlayData1c(v1);
  SetMainLoopFunctionCall(0, 0);
  Function_201807c(103);
  UnloadOverlay(104, v4, v5, v6);
  return 1;
}

//----- (02241DB0) --------------------------------------------------------
int __fastcall Function_2241db0(int a1)
{
  int v1;
  int result;

  v1 = a1;
  switch ( *(uchar *)(a1 + 8) )
  {
    case 0:
      if ( ((int (__fastcall *)(uint))dword_223C000[0])(*(uchar *)(a1 + 9)) == 1 )
      {
        Function_20365f4();
        Function_20364f0(199);
      }
      ++*(uchar *)(v1 + 8);
      goto LABEL_31;
    case 1:
      if ( ((int (__fastcall *)(uint))dword_223C000[0])(*(uchar *)(a1 + 9)) == 1 )
      {
        if ( Function_2036540(199) == 1 )
        {
          Function_20365f4();
          ++*(uchar *)(v1 + 8);
        }
      }
      else
      {
        ++*(uchar *)(v1 + 8);
      }
      goto LABEL_31;
    case 2:
      Function_2242bf0();
      ++*(uchar *)(v1 + 8);
      goto LABEL_31;
    case 3:
      Function_2242d5c();
      ++*(uchar *)(v1 + 8);
      goto LABEL_31;
    case 4:
      Function_2242e10();
      ++*(uchar *)(v1 + 8);
      goto LABEL_31;
    case 5:
      if ( ((int (__fastcall *)(uint))dword_223C000[0])(*(uchar *)(a1 + 9)) == 1 )
      {
        Function_20365f4();
        Function_20364f0(201);
      }
      ++*(uchar *)(v1 + 8);
      goto LABEL_31;
    case 6:
      if ( ((int (__fastcall *)(uint))dword_223C000[0])(*(uchar *)(a1 + 9)) == 1 )
      {
        if ( Function_2036540(201) == 1 )
        {
          Function_20365f4();
          ++*(uchar *)(v1 + 8);
        }
      }
      else
      {
        ++*(uchar *)(v1 + 8);
      }
      goto LABEL_31;
    case 7:
      if ( ((int (__fastcall *)(uint))dword_223C000[0])(*(uchar *)(a1 + 9)) == 1 )
      {
        if ( Function_2242a38(v1, 30, 0) == 1 )
          ++*(uchar *)(v1 + 8);
      }
      else
      {
        Function_200f174(0, 1, 1, 0, 6, 3, 103);
        ++*(uchar *)(v1 + 8);
      }
      goto LABEL_31;
    case 8:
      if ( ((int (__fastcall *)(uint))dword_223C000[0])(*(uchar *)(a1 + 9)) == 1 )
      {
        if ( *(uchar *)(v1 + 15) >= 2u )
        {
          *(uchar *)(v1 + 15) = 0;
          Function_200f174(0, 1, 1, 0, 6, 3, 103);
          ++*(uchar *)(v1 + 8);
        }
      }
      else
      {
        ++*(uchar *)(v1 + 8);
      }
      goto LABEL_31;
    case 9:
      if ( Function_200f2ac() != 1 )
        goto LABEL_31;
      result = 1;
      break;
    default:
LABEL_31:
      result = 0;
      break;
  }
  return result;
}

//----- (02241F28) --------------------------------------------------------
int __fastcall Function_2241f28(int a1)
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
  int v15;
  int result;
  int v17;

  v1 = a1;
  switch ( *(uchar *)(a1 + 8) )
  {
    case 0:
      *(uchar *)(a1 + 11) = 0;
      *(uchar *)(a1 + 13) = *(ushort *)(a1 + 22);
      v2 = *(uchar *)(a1 + 13);
      Function_22429c8();
      *(uchar *)(v1 + 8) = 1;
      goto LABEL_40;
    case 1:
      if ( (uchar)++*(uchar *)(a1 + 11) >= 0xAu )
      {
        *(uchar *)(a1 + 11) = 0;
        *(uchar *)(a1 + 8) = 2;
      }
      goto LABEL_40;
    case 2:
      v3 = 0;
      v4 = a1;
      do
      {
        v5 = *(uint *)(v4 + 728);
        if ( v5 )
        {
          Function_22435f4(v5, 32);
          Function_22435a8(*(uint *)(v4 + 728), 1);
        }
        ++v3;
        v4 += 4;
      }
      while ( v3 < 16 );
      Function_2242884(v1, 3);
      Function_2005748(0x609u);
      *(uchar *)(v1 + 11) = 24;
      *(uchar *)(v1 + 8) = 3;
      goto LABEL_40;
    case 3:
      if ( !--*(uchar *)(a1 + 11) )
      {
        v6 = 0;
        v7 = a1;
        do
        {
          v8 = *(uint *)(v7 + 728);
          if ( v8 )
            Function_22435f4(v8, 33);
          ++v6;
          v7 += 4;
        }
        while ( v6 < 16 );
        Function_2005748(0x609u);
        *(uchar *)(v1 + 11) = 24;
        *(uchar *)(v1 + 8) = 4;
      }
      goto LABEL_40;
    case 4:
      if ( !--*(uchar *)(a1 + 11) )
      {
        v9 = 0;
        v10 = a1;
        do
        {
          v11 = *(uint *)(v10 + 728);
          if ( v11 )
            Function_22435f4(v11, 34);
          ++v9;
          v10 += 4;
        }
        while ( v9 < 16 );
        Function_2005748(0x609u);
        *(uchar *)(v1 + 11) = 24;
        *(uchar *)(v1 + 8) = 5;
      }
      goto LABEL_40;
    case 5:
      if ( !--*(uchar *)(a1 + 11) )
      {
        v12 = 0;
        v13 = a1;
        do
        {
          if ( *(uint *)(v13 + 728) )
          {
            v14 = *(uchar *)(v1 + v12 + 52);
            ((void (*)(void))Function_22435f4)();
          }
          ++v12;
          v13 += 4;
        }
        while ( v12 < 16 );
        Function_22435a8(*(uint *)(v1 + 724), 1);
        Function_2005748(0x624u);
        Function_22435f4(*(uint *)(v1 + 856), 0);
        *(uchar *)(v1 + 8) = 6;
      }
      goto LABEL_40;
    case 6:
      Function_2242964();
      if ( !Function_203608c() )
      {
        v15 = *(uint *)(v1 + 24);
        if ( v15 > 0 )
          *(uint *)(v1 + 24) = v15 - 1;
      }
      if ( Function_2242fe8(v1) != 1 && *(uint *)(v1 + 24) )
        goto LABEL_40;
      Function_22429fc(v1);
      if ( ((int (__fastcall *)(uint))dword_223C000[0])(*(uchar *)(v1 + 9)) )
      {
        *(uchar *)(v1 + 47) = *(uchar *)(v1 + 47) & 1 | 2;
        result = 1;
      }
      else
      {
        *(uchar *)(v1 + 8) = 7;
LABEL_40:
        result = 0;
      }
      return result;
    case 7:
      v17 = *(uchar *)(a1 + 13);
      Function_2242ba0();
      *(uchar *)(v1 + 11) = 30;
      *(uchar *)(v1 + 8) = 8;
      goto LABEL_40;
    case 8:
      if ( --*(uchar *)(a1 + 11) )
        goto LABEL_40;
      return 1;
    default:
      goto LABEL_40;
  }
}

//----- (02242104) --------------------------------------------------------
int __fastcall Function_2242104(uchar *a1, int a2, char a3)
{
  uchar *v3;
  int v4;
  int result;

  v3 = a1;
  switch ( a3 )
  {
    case 0:
      if ( Function_2242a38(a1, 31, (uchar)a1[20]) == 1 )
      {
        v3[47] &= 1u;
        ++v3[8];
      }
      goto LABEL_10;
    case 1:
      ++a1[8];
      goto LABEL_10;
    case 2:
      if ( (uchar)a1[14] != 255 )
      {
        a1[15] = 0;
        v4 = (uchar)a1[14];
        Function_2242ba0();
        ++v3[8];
      }
      goto LABEL_10;
    case 3:
      Function_20365f4();
      Function_20364f0(151);
      ++v3[8];
      goto LABEL_10;
    case 4:
      if ( Function_2036540(151) != 1 )
        goto LABEL_10;
      Function_20365f4();
      Function_20363e8(0x67u);
      v3[14] = -1;
      result = 1;
      break;
    default:
LABEL_10:
      result = 0;
      break;
  }
  return result;
}

//----- (02242198) --------------------------------------------------------
int __fastcall Function_2242198(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 8);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      if ( *(uchar *)(v1 + 11) )
        --*(uchar *)(v1 + 11);
      if ( !*(uchar *)(v1 + 11) )
      {
        Function_20365f4();
        Function_20364f0(152);
        ++*(uchar *)(v1 + 8);
      }
    }
    else if ( v2 == 2 && Function_2036540(152) == 1 )
    {
      Function_20365f4();
      return 1;
    }
  }
  else
  {
    *(uchar *)(v1 + 11) = 15;
    ++*(uchar *)(v1 + 8);
  }
  return 0;
}

//----- (022421F0) --------------------------------------------------------
int __fastcall Function_22421f0(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 8);
  if ( v2 )
  {
    if ( v2 == 1 && Function_200f2ac() == 1 )
      return 1;
  }
  else
  {
    Function_200f174(0, 0, 0, 0, 6, 1, 103);
    ++*(uchar *)(v1 + 8);
  }
  return 0;
}

//----- (02242238) --------------------------------------------------------
uint __fastcall Function_2242238(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  uint *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v1 = a1;
  if ( *(uint *)(a1 + 724) )
    Function_2243594();
  if ( *(uint *)(v1 + 856) )
    Function_2243594();
  v2 = 0;
  v3 = v1;
  do
  {
    if ( *(uint *)(v3 + 728) )
      Function_2243594();
    ++v2;
    v3 += 4;
  }
  while ( v2 < 16 );
  v4 = ((int (__fastcall *)(uint, int))dword_223B8C4[299])(*(uchar *)(v1 + 9), 1);
  v5 = 0;
  if ( v4 > 0 )
  {
    v6 = (uint *)v1;
    do
    {
      if ( v6[198] )
        Function_2243594();
      if ( v6[202] )
        Function_2243594();
      if ( v6[206] )
        Function_2243594();
      if ( v6[210] )
        Function_2243594();
      ++v5;
      ++v6;
    }
    while ( v5 < v4 );
  }
  Function_2039794();
  Function_2002fa0(*(uint *)(v1 + 212), 2);
  Function_2002fa0(*(uint *)(v1 + 212), 0);
  Call_free1(*(uint *)(v1 + 212));
  *(uint *)(v1 + 212) = 0;
  Function_2243194(v1 + 232);
  Function_200b190(*(ushort **)(v1 + 104));
  Function_200b3f0(*(uint **)(v1 + 108), v7);
  Function_20237bc_FreeMsg(*(uint *)(v1 + 112), v8);
  Function_20237bc_FreeMsg(*(uint *)(v1 + 116), v9);
  v11 = 0;
  v12 = v1;
  do
  {
    Function_20237bc_FreeMsg(*(uint *)(v12 + 120), v10);
    ++v11;
    v12 += 4;
  }
  while ( v11 < 2 );
  Function_2243660(v1 + 148);
  Function_22426d4(*(uint *)(v1 + 144));
  return Call_FS_CloseFile(*(int **)(v1 + 876));
}

//----- (02242344) --------------------------------------------------------
uint Function_2242344()
{
  uint result;

  SetMainLoopFunctionCall(0, 0);
  Function_20177bc(0, 0);
  Function_201ff00();
  Function_201ff68();
  REG_DISPCNT &= 0xFFFFE0FF;
  result = REG_DISPCNT_SUB & 0xFFFFE0FF;
  REG_DISPCNT_SUB &= 0xFFFFE0FF;
  return result;
}

//----- (0224237C) --------------------------------------------------------
int __fastcall Function_224237c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  short v8;
  int v9;
  uint *v10;
  int v11;
  int *v12;
  int *v13;
  int v14;
  int v15;
  int v17;
  int v18;
  int v19;

  v17 = a1;
  *(uint *)(a1 + 876) = LoadFromNARC_8(150, 0x67u, a3, a4);
  Function_2242658(v17);
  Function_22426b0(v17);
  *(uint *)(v17 + 104) = LoadFromMsgNARC(1, 26, 536, 0x67u);
  *(uint *)(v17 + 108) = Function_200b358(0x67u);
  *(uint *)(v17 + 112) = Function_2023790(600, 0x67u);
  v4 = 0;
  *(uint *)(v17 + 116) = Function_2023790(600, 0x67u);
  v5 = v17;
  do
  {
    *(uint *)(v5 + 120) = Function_2023790(32, 0x67u);
    ++v4;
    v5 += 4;
  }
  while ( v4 < 2 );
  LoadFromNARC_PlFont1(0, 416, 103);
  LoadFromNARC_PlFont2(0, 384, 103);
  Function_2243630(*(uint *)(v17 + 144), v17 + 148);
  *(uint *)(v17 + 724) = Function_224351c(v17 + 232);
  Function_22435a8(*(uint *)(v17 + 724), 0);
  v6 = v17;
  v7 = 0;
  do
  {
    *(uint *)(v6 + 728) = Function_224351c(v17 + 232);
    Function_22435a8(*(uint *)(v6 + 728), 0);
    ++v7;
    v6 += 4;
  }
  while ( v7 < 16 );
  v18 = ((int (__fastcall *)(uint, int))dword_223B8C4[299])(*(uchar *)(v17 + 9), 1);
  if ( ((int (__fastcall *)(uint))dword_223C000[0])(*(uchar *)(v17 + 9)) )
  {
    v8 = 22;
    v19 = 26;
  }
  else
  {
    v8 = 46;
    v19 = 50;
  }
  v9 = 0;
  if ( v18 > 0 )
  {
    v10 = (uint *)v17;
    v11 = v17 + 232;
    do
    {
      v10[206] = Function_224351c(v11);
      v10[210] = Function_224351c(v11);
      v10[198] = Function_224351c(v11);
      v10[202] = Function_224351c(v11);
      v12 = GetAdrOfPkmnInParty(*(uint **)(v17 + 868), v9);
      Function_2243610(v10[198], v12);
      v13 = GetAdrOfPkmnInParty(*(uint **)(v17 + 872), v9);
      Function_2243610(v10[202], v13);
      Function_2243624(v10[198], 0);
      Function_2243624(v10[202], 0);
      ++v9;
      v19 += 40;
      ++v10;
      v8 += 40;
    }
    while ( v9 < v18 );
  }
  Function_2242f38(v17);
  *(uint *)(v17 + 856) = Function_224351c(v17 + 232);
  if ( Function_2035e38() )
  {
    Function_200966c(1, 16, v14, v15);
    Function_2009704(1);
    Function_2039734();
  }
  return SetMainLoopFunctionCall((int)Function_2242708, v17);
}

//----- (02242658) --------------------------------------------------------
int __fastcall Function_2242658(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  Function_2242740();
  Function_2242760(*(uint *)(v1 + 144));
  *(uint *)(v1 + 212) = MallocFill120(0x67u);
  Function_2002f70(*(uint *)(v1 + 212), 2, 512, 0x67u);
  Function_2002f70(*(uint *)(v1 + 212), 0, 512, 0x67u);
  v2 = Function_2242828(v1, 3);
  Function_22428c0(v2);
  return Function_22428f4(v1, 4);
}

//----- (022426B0) --------------------------------------------------------
int __fastcall Function_22426b0(int a1)
{
  int v1;
  uchar v2;

  v1 = a1;
  v2 = ((int (__fastcall *)(uint))dword_223C000[0])(*(uchar *)(a1 + 9));
  return Function_2243030(v1 + 232, *(uint *)(v1 + 868), *(uint *)(v1 + 872), v2);
}

//----- (022426D4) --------------------------------------------------------
uint __fastcall Function_22426d4(int a1)
{
  int v1;

  v1 = a1;
  Function_201ff0c(0x1Fu, 0);
  Function_201ff74(0x1Fu, 0);
  Function_2019044(v1, 3);
  Function_2019044(v1, 1);
  Function_2019044(v1, 4);
  return free(v1);
}

//----- (02242708) --------------------------------------------------------
int __fastcall Function_2242708(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = *(uint *)(a1 + 212);
  if ( v2 )
    Function_2003694(v2);
  Function_201c2b8(*(uint *)(v1 + 144));
  Function_201dcac();
  Function_200a858();
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (02242740) --------------------------------------------------------
char *Function_2242740()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_2243738;
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

//----- (02242760) --------------------------------------------------------
uint __fastcall Function_2242760(uint *a1)
{
  uint *v1;
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

  v1 = a1;
  v24 = 1;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  SetGraphicsModes(&v24);
  v17 = 0;
  v18 = 0;
  v19 = 2048;
  v20 = 0;
  v21 = 16777217;
  v22 = 0;
  v23 = 0;
  Function_20183c4(v1, 1u, &v17, 0);
  Function_2019690(1u, 32, 0, 0x67u);
  Function_2019ebc(v1, 1u);
  v10 = 0;
  v11 = 0;
  v12 = 2048;
  v13 = 0;
  v14 = 50593793;
  v15 = 512;
  v16 = 0;
  Function_20183c4(v1, 3u, &v10, 0);
  Function_2019ebc(v1, 3u);
  v3 = 0;
  v4 = 0;
  v5 = 2048;
  v6 = 0;
  v7 = 67502081;
  v8 = 0;
  v9 = 0;
  Function_20183c4(v1, 4u, &v3, 0);
  Function_2019ebc(v1, 4u);
  REG_BG0CNT &= 0xFFFCu;
  return Function_201ff0c(1u, 0);
}

//----- (02242828) --------------------------------------------------------
int __fastcall Function_2242828(int a1, uchar a2)
{
  int v2;
  uchar v3;
  uint v4;

  v2 = a1;
  v3 = a2;
  Function_20070e8(*(uint *)(a1 + 876), 0x78u, *(uint **)(a1 + 144), a2, 0, 0, 1, 103);
  if ( ((int (__fastcall *)(uint))dword_223C000[0])(*(uchar *)(v2 + 9)) )
    v4 = 118;
  else
    v4 = 116;
  return Function_200710c(*(uint *)(v2 + 876), v4, *(uint **)(v2 + 144), v3, 0, 0, 1, 103);
}

//----- (02242884) --------------------------------------------------------
int __fastcall Function_2242884(int a1, uchar a2)
{
  int v2;
  uchar v3;
  uint v4;

  v2 = a1;
  v3 = a2;
  if ( ((int (__fastcall *)(uint))dword_223C000[0])(*(uchar *)(a1 + 9)) )
    v4 = 119;
  else
    v4 = 117;
  return Function_200710c(*(uint *)(v2 + 876), v4, *(uint **)(v2 + 144), v3, 0, 0, 1, 103);
}

//----- (022428C0) --------------------------------------------------------
uint __fastcall Function_22428c0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v6;
  int v7;

  v7 = a4;
  v4 = Function_2006f88(150, 167, &v6, 103);
  DC_FlushRange(*(uint *)(v6 + 12), 224);
  GX_LoadBGPltt(*(uint *)(v6 + 12), 0, 0xE0u);
  return free(v4);
}

//----- (022428F4) --------------------------------------------------------
int __fastcall Function_22428f4(int a1, uchar a2)
{
  int v2;
  uchar v3;

  v2 = a1;
  v3 = a2;
  Function_20070e8(*(uint *)(a1 + 876), 0x7Au, *(uint **)(a1 + 144), a2, 0, 0, 1, 103);
  Function_2007130(*(uint *)(v2 + 876), 0xA8u, 4u, 0, 64, 103);
  return Function_200710c(*(uint *)(v2 + 876), 0x79u, *(uint **)(v2 + 144), v3, 0, 0, 1, 103);
}

//----- (0224295C) --------------------------------------------------------
int __fastcall Function_224295c(int result, uint *a2, int a3)
{
  *(uchar *)(result + 8) = 0;
  *a2 = a3;
  return result;
}

//----- (02242964) --------------------------------------------------------
uint __fastcall Function_2242964(int a1)
{
  uchar *v1;
  int v2;
  uint v3;
  uint result;
  uint v5;
  int v6;

  v1 = (uchar *)a1;
  v2 = 2 * **(uchar **)(a1 + 28);
  v3 = (uchar)++*(uchar *)(a1 + 16);
  result = *(uchar *)(v2 + 35927695);
  if ( v3 >= result )
  {
    v1[16] = 0;
    if ( v1[12] == 1 )
    {
      v5 = PRNG();
      v6 = (v5 >> 31) + __ROR4__((v5 << 28) - (v5 >> 31), 28);
    }
    else
    {
      LOBYTE(v6) = v1[13] + 1;
    }
    v1[13] = v6;
    Function_2005748(0x5E5u);
    if ( (uchar)v1[13] >= (uint)(uchar)v1[46] )
      v1[13] = 0;
    result = Function_22429c8(v1, (uchar)v1[13]);
  }
  return result;
}

//----- (022429C8) --------------------------------------------------------
int __fastcall Function_22429c8(int a1, uint a2)
{
  return Function_22435b4(
           *(uint *)(a1 + 724),
           (40 * ((a2 >> 31) + __ROR4__((a2 << 30) - (a2 >> 31), 30)) + 68) & 0xFFFF,
           (ushort)(40 * (a2 >> 2) + 36));
}

//----- (022429FC) --------------------------------------------------------
int __fastcall Function_22429fc(int result)
{
  *(uchar *)(result + 20) = *(uchar *)(result + 13);
  return result;
}

//----- (02242A04) --------------------------------------------------------
uint __fastcall Function_2242a04(uint a1, uint a2)
{
  if ( a2 >= a1 )
    a2 = (a2 - a1) & 0xFF;
  return a2;
}

//----- (02242A14) --------------------------------------------------------
int __fastcall Function_2242a14(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(ushort *)(a1 + 40);
  if ( ((int (__fastcall *)(uint))dword_223C000[0])(*(uchar *)(a1 + 9)) == 1
    && *(ushort *)(v1 + 962) > (uint)*(ushort *)(v1 + 40) )
  {
    v2 = *(ushort *)(v1 + 962);
  }
  return v2;
}

//----- (02242A38) --------------------------------------------------------
BOOL __fastcall Function_2242a38(int a1, int a2)
{
  int v2;
  int v3;

  v3 = a1;
  switch ( a2 )
  {
    case 30:
      v2 = 71;
      Function_2242a7c();
      break;
    case 31:
      v2 = 72;
      Function_2242ae8();
      break;
    case 32:
      v2 = 73;
      Function_2242b74();
      break;
  }
  return Function_20359dc(v2, v3 + 880, 40) == 1;
}

//----- (02242A7C) --------------------------------------------------------
int __fastcall Function_2242a7c(int a1, short a2)
{
  ushort *v2;
  short v3;
  int v4;
  ushort *v5;
  short v6;
  int result;

  v2 = (ushort *)a1;
  v3 = a2;
  LoadTrainerDataAdress(*(uint *)(a1 + 220));
  v2[440] = v3;
  v4 = 0;
  v5 = v2;
  do
  {
    v6 = *((uchar *)v2 + v4++ + 52);
    v5[442] = v6;
    ++v5;
  }
  while ( v4 < 16 );
  result = 916;
  v2[458] = v2[11];
  return result;
}

//----- (02242AB0) --------------------------------------------------------
int __fastcall Function_108_2242ab0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;
  int v8;
  int v9;
  short v10;
  uchar *v11;

  v4 = a4;
  v5 = a1;
  v6 = a3;
  ++*(uchar *)(a4 + 15);
  result = Function_203608c();
  if ( v5 != result )
  {
    result = Function_203608c();
    if ( result )
    {
      v8 = 0;
      v9 = v6;
      do
      {
        v10 = *(ushort *)(v9 + 4);
        v11 = (uchar *)(v4 + v8++ + 52);
        v9 += 2;
        *v11 = v10;
      }
      while ( v8 < 16 );
      result = *(ushort *)(v6 + 36);
      *(ushort *)(v4 + 22) = result;
    }
  }
  return result;
}

//----- (02242AE8) --------------------------------------------------------
int __fastcall Function_2242ae8(int a1, short a2, short a3)
{
  int v3;
  char v4;
  int result;

  v3 = a1;
  *(ushort *)(a1 + 880) = a2;
  v4 = a3;
  *(ushort *)(a1 + 882) = a3;
  if ( !Function_203608c() && *(uchar *)(v3 + 14) == 255 )
    *(uchar *)(v3 + 14) = v4;
  *(ushort *)(v3 + 884) = *(uchar *)(v3 + 14);
  result = 886;
  *(ushort *)(v3 + 886) = **(ushort **)(v3 + 36);
  return result;
}

//----- (02242B1C) --------------------------------------------------------
uint Function_2242b1c()
{
  return PRNG();
}

//----- (02242B24) --------------------------------------------------------
ushort *__fastcall Function_108_2242b24(ushort *a1, int a2, ushort *a3, int a4)
{
  int v4;
  ushort *v5;
  ushort *v6;
  ushort *result;

  v4 = a4;
  v5 = a1;
  v6 = a3;
  ++*(uchar *)(a4 + 15);
  result = (ushort *)Function_203608c();
  if ( v5 != result )
  {
    *(uchar *)(v4 + 961) = v6[1];
    if ( Function_203608c() )
    {
      *(uchar *)(v4 + 14) = v6[2];
      result = *(ushort **)(v4 + 36);
      *result = v6[3];
    }
    else
    {
      result = (ushort *)961;
      if ( *(uchar *)(v4 + 14) == 255 )
      {
        result = (ushort *)(*(uchar *)(v4 + 961) + *(uchar *)(v4 + 46));
        *(uchar *)(v4 + 14) = (uchar)result;
      }
      else
      {
        *(uchar *)(v4 + 961) = 0;
      }
    }
  }
  return result;
}

//----- (02242B74) --------------------------------------------------------
int __fastcall Function_2242b74(int result, short a2)
{
  *(ushort *)(result + 880) = a2;
  *(ushort *)(result + 882) = *(uchar *)(result + 13);
  return result;
}

//----- (02242B84) --------------------------------------------------------
int __fastcall Function_108_2242b84(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;

  v4 = a1;
  v5 = a3;
  v6 = a4;
  result = Function_203608c();
  if ( v4 != result )
  {
    result = 960;
    *(uchar *)(v6 + 960) = *(ushort *)(v5 + 2);
  }
  return result;
}

//----- (02242BA0) --------------------------------------------------------
int __fastcall Function_2242ba0(int a1, uint a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v7;
  uint v8;

  v7 = a1;
  v8 = Function_2242a04(*(uchar *)(a1 + 46), a2);
  v2 = *(uchar *)(v7 + v8 + 52);
  **(uchar **)(v7 + 32) = v2;
  v3 = 0;
  v4 = v7;
  do
  {
    v5 = *(uint *)(v4 + 728);
    if ( v5 )
      Function_22435f4(v5, v2);
    ++v3;
    v4 += 4;
  }
  while ( v3 < 16 );
  Function_22429c8(v7, v8);
  return Function_2005748(0x5E3u);
}

//----- (02242BF0) --------------------------------------------------------
int __fastcall Function_2242bf0(int a1)
{
  int v1;
  char *v2;
  uint v3;
  int result;
  int v5;
  int v6;
  uchar *v7;

  v1 = a1;
  v2 = &byte_2243718;
  v3 = 0;
  v7 = (uchar *)(a1 + 100);
  do
  {
    switch ( (uchar)*(ushort *)(v1 + 42) )
    {
      case 0u:
        result = *v2 & 1;
        break;
      case 1u:
        result = (uint)(uchar)*v2 << 30 >> 31;
        break;
      case 2u:
        result = (uint)(uchar)*v2 << 29 >> 31;
        break;
      case 3u:
        result = (uint)(uchar)*v2 << 28 >> 31;
        break;
      case 4u:
        result = (uint)(uchar)*v2 << 27 >> 31;
        break;
      case 5u:
        result = (uint)(uchar)*v2 << 26 >> 31;
        break;
      default:
        result = (uint)(uchar)*v2 << 25 >> 31;
        break;
    }
    if ( result == 1 )
    {
      v5 = 255;
      switch ( (uchar)v3 )
      {
        case 0x18:
          v5 = 1;
          break;
        case 0x19:
          v5 = 2;
          break;
        case 0x1A:
          v5 = 3;
          break;
        case 0x1B:
          v5 = 0;
          break;
        case 0x1C:
          v5 = 4;
          break;
        case 0x1D:
          v5 = 5;
          break;
        case 0x1F:
          v5 = 6;
          break;
        default:
          break;
      }
      v6 = Function_2242a14(v1);
      s32_div_f(v6, 7);
      if ( v5 == 255 )
      {
        result = 1;
      }
      else
      {
        switch ( 15 )
        {
          case 0:
            result = *((uchar *)dword_2243680 + v5) & 1;
            break;
          case 1:
            result = (uint)*((uchar *)dword_2243680 + v5) << 30 >> 31;
            break;
          case 2:
            result = (uint)*((uchar *)dword_2243680 + v5) << 29 >> 31;
            break;
          case 3:
            result = (uint)*((uchar *)dword_2243680 + v5) << 28 >> 31;
            break;
          case 4:
            result = (uint)*((uchar *)dword_2243680 + v5) << 27 >> 31;
            break;
          case 5:
            result = (uint)*((uchar *)dword_2243680 + v5) << 26 >> 31;
            break;
          case 6:
          case 7:
            result = (uint)*((uchar *)dword_2243680 + v5) << 25 >> 31;
            break;
          default:
            ErrorHandler();
            result = 1;
            break;
        }
      }
      if ( result == 1 )
      {
        *(uchar *)(v1 + *(uchar *)(v1 + 100) + 68) = v3;
        result = (int)v7;
        ++*v7;
      }
    }
    ++v3;
    ++v2;
  }
  while ( v3 < 0x20 );
  return result;
}

//----- (02242D5C) --------------------------------------------------------
int __fastcall Function_2242d5c(uchar *a1)
{
  uchar *v1;
  char *v2;
  uint v3;
  int result;
  int i;

  v1 = a1;
  v2 = &byte_224367C;
  v3 = 0;
  do
  {
    if ( (uchar)a1[18] >= (uint)(uchar)*v2 )
      break;
    ++v3;
    ++v2;
  }
  while ( v3 < 4 );
  a1[17] = v3;
  result = (uchar)a1[100];
  for ( i = 0; i < result; ++i )
  {
    if ( ((int (__fastcall *)(uint))dword_223C000[82])((uchar)v1[i + 68]) )
    {
      if ( ((int (__fastcall *)(uint))dword_223C000[82])((uchar)v1[i + 68]) == 1 )
      {
        ++v1[49];
      }
      else if ( ((int (__fastcall *)(uint))dword_223C000[82])((uchar)v1[i + 68]) == 2 )
      {
        ++v1[50];
      }
      else if ( ((int (__fastcall *)(uint))dword_223C000[82])((uchar)v1[i + 68]) == 3 )
      {
        ++v1[51];
      }
    }
    else
    {
      ++v1[48];
    }
    result = (uchar)v1[100];
  }
  return result;
}

//----- (02242E10) --------------------------------------------------------
int __fastcall Function_2242e10(uchar *a1)
{
  uchar *v1;
  uint v2;
  int v3;
  int v4;
  uint v5;
  ushort v6;
  uint v7;
  int v8;
  int result;
  int v10;
  int v11;

  v1 = a1;
  v11 = 0;
  do
  {
    v2 = Function_2242ef4(v1, v1[17]);
    v3 = 0;
    v4 = v1[v2 + 48];
    if ( v2 )
    {
      switch ( v2 )
      {
        case 1u:
          v3 = v1[48];
          break;
        case 2u:
          v3 = v1[48] + v1[49];
          break;
        case 3u:
          v3 = v1[48] + v1[49] + v1[50];
          break;
      }
    }
    v5 = PRNG();
    s32_div_f(v5, v4);
    v10 = (v6 + v3) & 0xFFFF;
    v7 = (v6 + v3) & 0xFF;
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= 50 )
      {
        ErrorHandler();
        v1[v11 + 52] = 0;
        goto LABEL_19;
      }
      if ( v2 == ((int (__fastcall *)(uint))dword_223C000[82])(v1[v7 + 68]) )
        break;
      v7 = (v7 + 1) & 0xFF;
      ++v8;
      if ( v7 >= v1[100] )
        v7 = 0;
      if ( v7 == v10 )
      {
        v2 = (v2 + 1) & 0xFF;
        if ( v2 >= 4 )
          v2 = 0;
      }
    }
    v1[v11 + 52] = v1[v7 + 68];
LABEL_19:
    result = v11 + 1;
    v11 = result;
  }
  while ( result < 16 );
  return result;
}

//----- (02242EF4) --------------------------------------------------------
uint __fastcall Function_2242ef4(int a1, int a2)
{
  int v2;
  int v3;
  uint v4;
  ushort v5;
  uint result;

  v2 = a2;
  v3 = 0;
  v4 = PRNG();
  s32_div_f(v4, 100);
  result = 0;
  do
  {
    v3 = (v3 + *((uchar *)&dword_22436B0[v2] + result)) & 0xFF;
    if ( v5 < v3 )
      break;
    result = (result + 1) & 0xFF;
  }
  while ( result < 4 );
  if ( result >= 4 )
  {
    ErrorHandler();
    result = 0;
  }
  return result;
}

//----- (02242F38) --------------------------------------------------------
int __fastcall Function_2242f38(int a1)
{
  int v1;
  uint v2;
  int result;
  uint v4;
  uint v5;
  int *v6;
  uint v7;
  int *v8;

  v1 = a1;
  v2 = ((int (__fastcall *)(uint, int))dword_223B8C4[299])(*(uchar *)(a1 + 9), 1);
  result = ((int (__fastcall *)(uint, int))dword_223B8C4[312])(*(uchar *)(v1 + 9), 1);
  v4 = result;
  v5 = 0;
  if ( v2 )
  {
    do
    {
      v6 = GetAdrOfPkmnInParty(*(uint **)(v1 + 868), v5);
      if ( GetPkmnData(v6, 6u, 0) )
        Function_22435a8(*(uint *)(v1 + 4 * v5 + 824), 1);
      else
        Function_22435a8(*(uint *)(v1 + 4 * v5 + 824), 0);
      result = (v5 + 1) << 24;
      v5 = (v5 + 1) & 0xFF;
    }
    while ( v5 < v2 );
  }
  v7 = 0;
  if ( v4 )
  {
    do
    {
      v8 = GetAdrOfPkmnInParty(*(uint **)(v1 + 872), v7);
      if ( GetPkmnData(v8, 6u, 0) )
        Function_22435a8(*(uint *)(v1 + 4 * v7 + 840), 1);
      else
        Function_22435a8(*(uint *)(v1 + 4 * v7 + 840), 0);
      result = (v7 + 1) << 24;
      v7 = (v7 + 1) & 0xFF;
    }
    while ( v7 < v4 );
  }
  return result;
}

//----- (02242FE8) --------------------------------------------------------
int __fastcall Function_2242fe8(int a1)
{
  int v1;

  v1 = a1;
  if ( Function_20226dc((uchar *)&dword_2243680[1] + 3) )
    return 0;
  Function_2243008(v1);
  return 1;
}

//----- (02243008) --------------------------------------------------------
int __fastcall Function_2243008(int a1)
{
  int v1;

  v1 = a1;
  Function_20057a4(1500, 0);
  Function_2005748(0x5E4u);
  return Function_22435f4(*(uint *)(v1 + 856), 1);
}

//----- (02243030) --------------------------------------------------------
uint __fastcall Function_2243030(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  char *v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v14;
  int v15;
  int v16;

  v4 = a1;
  v14 = a2;
  v15 = a3;
  v16 = a4;
  v5 = Function_201dbec(32, 0x67u);
  Function_22431fc(v5);
  Function_20a7944();
  Function_200a784(0, 128, 0, 32, 0, 0x80u, 0, 0x20u, 0x67u);
  v7 = &byte_2243760;
  *(uint *)v4 = Function_20095c4(34, v4 + 4, 103, v6);
  v8 = 0;
  v9 = v4;
  do
  {
    *(uint *)(v9 + 300) = Function_2009714((uchar)*v7, v8, 0x67u);
    v8 = (int *)((char *)v8 + 1);
    ++v7;
    v9 += 4;
  }
  while ( (int)v8 < 4 );
  Function_2243490(v4);
  Function_2243230(v4);
  Function_22432b4(v4);
  Function_2243360(v4, v14, v15, v16);
  v10 = 0;
  v11 = v4;
  do
  {
    Function_200a328(*(int **)(v11 + 316));
    ++v10;
    v11 += 16;
  }
  while ( v10 < 11 );
  v12 = 0;
  do
  {
    Function_200a5c8(*(int **)(v4 + 320));
    ++v12;
    v4 += 16;
  }
  while ( v12 < 4 );
  Function_201ff74(0x10u, 1);
  return Function_201ff0c(0x10u, 1);
}

//----- (022430F0) --------------------------------------------------------
int __fastcall Function_22430f0(int *a1, int a2, int a3, int a4, uint a5, int a6, int a7, char a8)
{
  int *v8;
  int v9;
  int v11;
  char *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  short v19;
  int v20;
  int v21;
  int v22;
  char v23;

  v8 = a1;
  Function_20093b4((int)&v23, a2, a3, a4, a4, -1, -1, 0, a7, a1[75], a1[76], a1[77], a1[78], 0, 0);
  v11 = *v8;
  v12 = &v23;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 4096;
  v17 = 4096;
  v18 = 4096;
  v19 = 0;
  v20 = a6;
  v22 = 103;
  if ( a8 )
  {
    v21 = 2;
    v14 = 786432;
  }
  else
  {
    v21 = 1;
  }
  v9 = Function_2021aa0((uint **)&v11);
  Function_2021cc8(v9, 1);
  Function_2021ce4(v9, 4096);
  Function_2021d6c(v9, a5);
  return v9;
}

//----- (02243194) --------------------------------------------------------
int *__fastcall Function_2243194(int **a1)
{
  int **v1;
  uint v2;
  uint v3;
  uint v4;

  v1 = a1;
  v2 = 0;
  do
  {
    Function_200a4e4(v1[4 * v2 + 79]);
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 < 0xB );
  v3 = 0;
  do
  {
    Function_200a6dc(v1[4 * v3 + 80]);
    v3 = (v3 + 1) & 0xFF;
  }
  while ( v3 < 4 );
  v4 = 0;
  do
  {
    Function_2009754(v1[v4 + 75]);
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 < 4 );
  Function_2021964(*v1);
  Function_200a878();
  Function_201e958();
  return Function_201f8b4();
}

//----- (022431FC) --------------------------------------------------------
int Function_22431fc()
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = 32;
  v2 = 1024;
  v3 = 1024;
  v4 = 103;
  Function_201e88c(&v1, 16, 16);
  Function_201f834(14, 0x67u);
  Function_201e994();
  return Function_201f8e4();
}

//----- (02243230) --------------------------------------------------------
int *__fastcall Function_2243230(int *a1)
{
  int *v1;
  int *result;

  v1 = a1;
  a1[83] = (int)Function_200985c(a1[75], 151, 18, 1, 1, 1, 103);
  v1[84] = (int)Function_20098b8(v1[76], 151, 40, 0, 1, 1, 8, 103);
  v1[85] = (int)Function_2009918(v1[77], 151, 20, 1, 1, 2u, 103);
  result = Function_2009918(v1[78], 151, 19, 1, 1, 3u, 103);
  v1[86] = (int)result;
  return result;
}

//----- (022432B4) --------------------------------------------------------
uint __fastcall Function_22432b4(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v4 = a1;
  v5 = LoadFromNARC_8(20, 0x67u, a3, a4);
  v6 = Function_2081930();
  v4[87] = (int)Function_2009a4c(v4[75], (int)v5, v6, 0, 2, 1, 0x67u);
  v7 = Function_2081934();
  v4[88] = (int)Function_20098b8(v4[76], 20, v7, 0, 2, 1, 3, 103);
  v8 = Function_2081938();
  v4[89] = (int)Function_2009bc4(v4[77], (int)v5, v8, 0, 2, 2u, 0x67u);
  v9 = Function_208193c();
  v4[90] = (int)Function_2009bc4(v4[78], (int)v5, v9, 0, 2, 3u, 0x67u);
  return Call_FS_CloseFile(v5);
}

//----- (02243360) --------------------------------------------------------
uint __fastcall Function_2243360(int *a1, uint *a2, int a3, int a4)
{
  int *v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  uint v9;
  int *v10;
  uint v11;
  uint v12;
  uint *v14;
  int v15;
  int *v16;

  v4 = a1;
  v5 = a2;
  v14 = (uint *)a3;
  v15 = a4;
  v16 = LoadFromNARC_8(19, 0x67u, a3, a4);
  v6 = Function_2079fd0();
  v4[92] = (int)Function_20098b8(v4[76], 19, v6, 0, 3, 1, 3, 103);
  v7 = Function_2079fd8();
  v4[93] = (int)Function_2009bc4(v4[77], (int)v16, v7, 0, 3, 2u, 0x67u);
  v8 = Function_2079fe4();
  v4[94] = (int)Function_2009bc4(v4[78], (int)v16, v8, 0, 3, 3u, 0x67u);
  v9 = 0;
  v10 = v4;
  do
  {
    if ( v9 == 3 )
    {
      if ( v15 )
      {
        GetAdrOfPkmnInParty(v5, 3);
        GetAdrOfPkmnInParty(v14, 3);
      }
      else
      {
        GetAdrOfPkmnInParty(v5, 0);
        GetAdrOfPkmnInParty(v14, 0);
      }
    }
    else
    {
      GetAdrOfPkmnInParty(v5, v9);
      GetAdrOfPkmnInParty(v14, v9);
    }
    v11 = Function_2079d80();
    v10[91] = (int)Function_2009a4c(v4[75], (int)v16, v11, 0, v9 + 3, 1, 0x67u);
    v12 = Function_2079d80();
    v10[107] = (int)Function_2009a4c(v4[75], (int)v16, v12, 0, v9++ + 7, 1, 0x67u);
    v10 += 4;
  }
  while ( v9 < 4 );
  return Call_FS_CloseFile(v16);
}

//----- (02243490) --------------------------------------------------------
int *__fastcall Function_2243490(int *a1)
{
  int *v1;
  int *result;

  v1 = a1;
  a1[79] = (int)Function_200985c(a1[75], 151, 21, 1, 0, 2, 103);
  v1[80] = (int)Function_20098b8(v1[76], 151, 41, 0, 0, 2, 2, 103);
  v1[81] = (int)Function_2009918(v1[77], 151, 23, 1, 0, 2u, 103);
  result = Function_2009918(v1[78], 151, 22, 1, 0, 3u, 103);
  v1[82] = (int)result;
  return result;
}

//----- (0224351C) --------------------------------------------------------
int __fastcall Function_224351c(int *a1, int a2, int a3, int a4, uint a5, ushort a6, ushort a7, int a8, int a9, char a10)
{
  int *v10;
  int v11;
  int v12;
  int v13;
  uchar *v14;
  int v15;
  int v17;
  int v18;
  int v19;
  int v20;

  v20 = a4;
  v10 = a1;
  v11 = a2;
  v12 = a3;
  v17 = a4;
  v13 = malloc(0x67u, 20);
  v14 = (uchar *)v13;
  v15 = 20;
  do
  {
    *v14++ = 0;
    --v15;
  }
  while ( v15 );
  *(uint *)(v13 + 16) = Function_22430f0(v10, v11, v12, v17, a5, a8, a9, a10);
  *(ushort *)(v13 + 12) = a6;
  *(ushort *)(v13 + 14) = a7;
  *(uchar *)(v13 + 11) = a10;
  v18 = a6 << 12;
  v19 = a7 << 12;
  if ( a10 == 1 )
    v19 = (a7 << 12) + 786432;
  Function_2021c50(*(uint **)(v13 + 16), &v18);
  return v13;
}

//----- (02243594) --------------------------------------------------------
int __fastcall Function_2243594(int a1)
{
  int v1;

  v1 = a1;
  Function_2021bd4(*(uint *)(a1 + 16));
  free(v1);
  return 0;
}

//----- (022435A8) --------------------------------------------------------
uint __fastcall Function_22435a8(int a1, int a2)
{
  return Function_2021cac(*(uint *)(a1 + 16), a2);
}

//----- (022435B4) --------------------------------------------------------
int __fastcall Function_22435b4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  int v11;
  int v12;
  int v13;
  int v14;

  v14 = a4;
  v4 = a1;
  v5 = *(uint *)(a1 + 16);
  v6 = a2;
  v7 = a3;
  Function_2021d28();
  v9 = v8[1];
  v11 = *v8;
  v12 = v9;
  v13 = v8[2];
  v12 = v7 << 12;
  v11 = v6 << 12;
  if ( *(uchar *)(v4 + 11) == 1 )
    v12 = (v7 << 12) + 786432;
  return Function_2021c50(*(uint **)(v4 + 16), &v11);
}

//----- (022435F4) --------------------------------------------------------
int __fastcall Function_22435f4(int a1, uint a2)
{
  int v2;
  uint v3;

  v2 = a1;
  v3 = a2;
  Function_2021ce4(*(uint *)(a1 + 16), 4096);
  return Function_2021dcc(*(uint *)(v2 + 16), v3);
}

//----- (02243610) --------------------------------------------------------
int __fastcall Function_2243610(int a1)
{
  int v1;
  char v2;

  v1 = a1;
  v2 = Function_2079fc4();
  return Function_2021f24(*(uint *)(v1 + 16), v2);
}

//----- (02243624) --------------------------------------------------------
uint __fastcall Function_2243624(int a1, int a2)
{
  return Function_2021cc8(*(uint *)(a1 + 16), a2);
}

//----- (02243630) --------------------------------------------------------
int __fastcall Function_2243630(uint *a1, int a2)
{
  uint *v2;
  int v3;
  uint v4;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    Function_201a8d4(v2, v3 + 16 * v4, (uchar *)&dword_2243774[2 * v4]);
    Function_201ada4_ClearTextBox(v3 + 16 * v4, 0);
    result = (v4 + 1) << 24;
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 < 2 );
  return result;
}

//----- (02243660) --------------------------------------------------------
int __fastcall Function_2243660(int a1)
{
  int v1;
  uint v2;
  int result;

  v1 = a1;
  v2 = 0;
  do
  {
    Function_201a8fc(v1 + 16 * v2);
    result = (v2 + 1) << 16;
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 < 2 );
  return result;
}

