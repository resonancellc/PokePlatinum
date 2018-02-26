//----- (0223B5A0) --------------------------------------------------------
int __fastcall Function_84_223b5a0(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  Function_201ff00();
  Function_201ff68();
  REG_DISPCNT &= 0xFFFFE0FF;
  REG_DISPCNT_SUB &= 0xFFFFE0FF;
  REG_BLDCNT = 0;
  REG_BLDCNT_SUB = 0;
  Function_2017fc8(3, 6, 196608);
  v2 = (int *)MallocSomeDataAndStorePtrInOverlayData1c(v1, 1188, 6u);
  Call_FillMemWithValue(v2, 0, 0x4A4u);
  v2[49] = LoadPtrToOverWorldDataIn18(v1);
  Function_223b9ac(v2);
  *v2 = Function_2018340(6u);
  *((uchar *)v2 + 1061) = GetGender(v2[51]);
  Function_200f174(1u, 3, 3, 0, 6, 1, 6);
  Function_2017dd4(3, 8);
  Function_223beac(v2);
  Function_223bdb4(v2);
  Function_223c158(v2);
  Function_223be24(v2);
  v3 = Function_223c720(v2);
  Function_223ba3c(v3);
  Function_223ba5c(*v2);
  Function_223bc1c(v2);
  Function_223d0bc(v2);
  Function_201e3d8();
  Function_201e450(4u);
  Function_223f040(v2);
  Function_2002b20(1u);
  Function_223f1f8(v2);
  Function_223f25c(v2);
  Function_223f2fc(v2);
  Function_223f438(v2);
  Function_223fa88(v2);
  Function_223f7d4(v2);
  Function_223bfbc(v2);
  v4 = 12 * *(uchar *)(v2[49] + 100);
  Function_223c194(v2[49] + 10 + v4, v2[49] + 8 + v4, *(uchar *)(v2[49] + v4 + 13));
  v5 = 12 * *(uchar *)(v2[49] + 100);
  Function_223c1d0(v2[49] + 10 + v5, v2[49] + 8 + v5, *(uchar *)(v2[49] + v5 + 13), 9);
  Function_22403f4(v2);
  v6 = v2[49] + 12 * *(uchar *)(v2[49] + 100);
  Function_223c224(v2, *(ushort *)(v6 + 10), *(ushort *)(v6 + 8));
  if ( ((*(uchar *)(v2[49] + 101) + 252) & 0xFFu) <= 1 )
    Function_2240328(v2);
  SetMainLoopFunctionCall((int)Function_223ba14, (int)v2);
  Function_2004550(0x33u, 0);
  Function_20397e4();
  return 1;
}

//----- (0223B76C) --------------------------------------------------------
int __fastcall Function_84_223b76c(int a1, uint *a2, int a3, int a4, int a5, int a6, int a7, int (__fastcall *a8)(int))
{
  uint *v8;
  int v9;
  int v10;
  int v11;

  v8 = a2;
  v9 = LoadOverlayData1c(a1);
  switch ( (uchar)*v8 )
  {
    case 0u:
      if ( Function_200f2ac() == 1 )
      {
        v10 = *(uchar *)(*(uint *)(v9 + 196) + 101);
        switch ( v10 )
        {
          case 2:
            *v8 = 16;
            break;
          case 1:
            *v8 = 14;
            break;
          case 3:
            *v8 = 23;
            break;
          default:
            *v8 = 1;
            break;
        }
      }
      goto LABEL_41;
    case 1u:
      *v8 = Function_223c51c();
      goto LABEL_41;
    case 2u:
      Function_223d0fc();
      if ( Function_223c920(v9) == 1 )
      {
        v11 = *(uchar *)(*(uint *)(v9 + 196) + 101);
        switch ( v11 )
        {
          case 2:
            *v8 = 16;
            break;
          case 1:
            *v8 = 14;
            break;
          case 3:
            *v8 = 23;
            break;
          default:
            *v8 = 1;
            break;
        }
      }
      goto LABEL_41;
    case 3u:
      if ( Function_223d2f8() == 1 )
        *v8 = 1;
      goto LABEL_41;
    case 4u:
      *v8 = Function_223d730();
      goto LABEL_41;
    case 5u:
    case 6u:
      goto LABEL_41;
    case 7u:
      *v8 = Function_223df0c();
      goto LABEL_41;
    case 8u:
      *v8 = Function_223dff8();
      goto LABEL_41;
    case 9u:
      *v8 = Function_223e01c();
      goto LABEL_41;
    case 0xAu:
      *v8 = Function_223e158();
      goto LABEL_41;
    case 0xBu:
      *v8 = Function_223e18c();
      goto LABEL_41;
    case 0xCu:
      *v8 = Function_223d8ec();
      goto LABEL_41;
    case 0xDu:
      *v8 = Function_223da04();
      goto LABEL_41;
    case 0xEu:
      *v8 = Function_223e27c();
      goto LABEL_41;
    case 0xFu:
      *v8 = Function_223e36c();
      goto LABEL_41;
    case 0x10u:
      *v8 = Function_223e3bc();
      goto LABEL_41;
    case 0x11u:
      *v8 = Function_223e588();
      goto LABEL_41;
    case 0x12u:
      *v8 = Function_223e5c4();
      goto LABEL_41;
    case 0x13u:
      *v8 = Function_223e7a8();
      goto LABEL_41;
    case 0x14u:
      *v8 = Function_223e7cc();
      goto LABEL_41;
    case 0x15u:
      *v8 = Function_223e920();
      goto LABEL_41;
    case 0x16u:
      *v8 = Function_223e9b0();
      goto LABEL_41;
    case 0x17u:
      *v8 = Function_223ea18();
      goto LABEL_41;
    case 0x18u:
      if ( Function_200f2ac() == 1 )
        return a8(1);
LABEL_41:
      Function_223d014(v9);
      Function_2240e5c(v9);
      Function_2240abc(v9);
      Function_200c7ec(*(int **)(v9 + 220));
      return 0;
  }
}

//----- (0223B900) --------------------------------------------------------
int __fastcall Function_84_223b900(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  Function_2240a88();
  Function_223c4e0(v2);
  Function_223bf68(v2);
  Function_223f1dc(v2 + 4);
  Function_223bbc4(*(uint *)v2);
  Function_201e530();
  Function_201dc3c();
  Function_223fb50(v2);
  Function_223f238(v2);
  Function_223f800(v2);
  Function_223c178(v2);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 1016), v3);
  Function_200b190(*(ushort **)(v2 + 288));
  Function_200b190(*(ushort **)(v2 + 284));
  Function_200b190(*(ushort **)(v2 + 276));
  Function_200c560(*(int **)(v2 + 272));
  Function_200b3f0(*(uint **)(v2 + 280), v4);
  Call_FS_CloseFile(*(int **)(v2 + 212));
  FreeSomeDataAndStore0InOverlayData1c(v1);
  SetMainLoopFunctionCall(0, 0);
  Function_201807c(6);
  Function_2017dd4(4, 8);
  return 1;
}

//----- (0223B9AC) --------------------------------------------------------
int __fastcall Function_223b9ac(int a1)
{
  int v1;
  int result;

  v1 = a1;
  *(uint *)(a1 + 200) = LoadVariableAreaAdressItemList(**(uint **)(a1 + 196));
  *(uint *)(v1 + 204) = LoadTrainerDataAdress(**(uint **)(v1 + 196));
  result = LoadPlayerDataAdress(**(uint **)(v1 + 196));
  *(uint *)(v1 + 208) = result;
  return result;
}

//----- (0223B9E4) --------------------------------------------------------
int __fastcall Function_223b9e4(int a1)
{
  return LoadVariableAreaAdress_19(**(uint **)(a1 + 196));
}

//----- (0223B9F4) --------------------------------------------------------
uchar *__fastcall Function_223b9f4(int a1, char a2)
{
  char v2;
  int v3;
  uchar *result;

  v2 = a2;
  v3 = Function_223b9e4(a1);
  result = (uchar *)Function_202d9cc(v3);
  *result = v2;
  return result;
}

//----- (0223BA04) --------------------------------------------------------
int __fastcall Function_223ba04(int a1, uint a2)
{
  uint v2;
  int v3;

  v2 = a2;
  v3 = Function_223b9e4(a1);
  return Function_202d9ec(v3, v2);
}

//----- (0223BA14) --------------------------------------------------------
int __fastcall Function_223ba14(int *a1)
{
  int result;

  Function_201c2b8(*a1);
  Function_201dcac();
  Function_200c800();
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (0223BA3C) --------------------------------------------------------
char *Function_223ba3c()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_224100C;
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

//----- (0223BA5C) --------------------------------------------------------
uint __fastcall Function_223ba5c(uint *a1)
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
  int v55;

  v1 = a1;
  v52 = 1;
  v53 = 0;
  v54 = 1;
  v55 = 0;
  SetGraphicsModes(&v52);
  v45 = 0;
  v46 = 0;
  v47 = 2048;
  v48 = 0;
  v49 = 69140481;
  v50 = 0;
  v51 = 0;
  Function_20183c4(v1, 0, &v45, 0);
  Function_2019ebc(v1, 0);
  v38 = 0;
  v39 = 0;
  v40 = 2048;
  v41 = 0;
  v42 = 1966081;
  v43 = 256;
  v44 = 0;
  Function_20183c4(v1, 1u, &v38, 0);
  v31 = 0;
  v32 = 0;
  v33 = 2048;
  v34 = 0;
  v35 = 69009409;
  v36 = 512;
  v37 = 0;
  Function_20183c4(v1, 2u, &v31, 0);
  Function_2019ebc(v1, 2u);
  v24 = 0;
  v25 = 0;
  v26 = 2048;
  v27 = 0;
  v28 = 1835009;
  v29 = 768;
  v30 = 0;
  Function_20183c4(v1, 3u, &v24, 0);
  v17 = 0;
  v18 = 0;
  v19 = 2048;
  v20 = 0;
  v21 = 69140481;
  v22 = 0;
  v23 = 0;
  Function_20183c4(v1, 4u, &v17, 0);
  Function_2019ebc(v1, 4u);
  v10 = 0;
  v11 = 0;
  v12 = 2048;
  v13 = 0;
  v14 = 35520513;
  v15 = 256;
  v16 = 0;
  Function_20183c4(v1, 5u, &v10, 0);
  v3 = 0;
  v4 = 0;
  v5 = 1024;
  v6 = 0;
  v7 = 1900801;
  v8 = 512;
  v9 = 0;
  Function_20183c4(v1, 7u, &v3, 1);
  Function_201c718((int)v1, 7, 9, 128);
  Function_201c718((int)v1, 7, 12, 80);
  Function_2019690(0, 32, 0, 6u);
  return Function_2019690(4u, 32, 0, 6u);
}

//----- (0223BBC4) --------------------------------------------------------
uint __fastcall Function_223bbc4(int a1)
{
  int v1;

  v1 = a1;
  Function_201ff0c(0x1Fu, 0);
  Function_201ff74(0x1Bu, 0);
  Function_2019044(v1, 7);
  Function_2019044(v1, 5);
  Function_2019044(v1, 4);
  Function_2019044(v1, 3);
  Function_2019044(v1, 2);
  Function_2019044(v1, 1);
  Function_2019044(v1, 0);
  return Function_2018238(6u, v1);
}

//----- (0223BC1C) --------------------------------------------------------
int __fastcall Function_223bc1c(int a1, int a2, int a3, int a4)
{
  int v4;
  uchar v5;

  v4 = a1;
  *(uint *)(a1 + 212) = LoadFromNARC_8(13, 6u, a3, a4);
  Function_20070e8(*(uint *)(v4 + 212), 0xBu, *(uint **)v4, 1u, 0, 0, 0, 6);
  Function_200710c(*(uint *)(v4 + 212), 0xEu, *(uint **)v4, 1u, 0, 0, 0, 6);
  Function_200710c(*(uint *)(v4 + 212), 0xDu, *(uint **)v4, 3u, 0, 0, 0, 6);
  Function_2007130(*(uint *)(v4 + 212), 0xCu, 0, 0, 0, 6);
  Function_2007130(*(uint *)(v4 + 212), 0x16u, 0, 416, 32, 6);
  LoadFromNARC_PlFont2(0, 352, 6);
  Function_200daa4(*(uint **)v4, 0, 1015, 14, 0, 6);
  v5 = Function_2027b50(*(ushort **)(v4 + 208));
  Function_200dd0c(*(uint **)v4, 0, 985, 12, v5, 6);
  Function_20070e8(*(uint *)(v4 + 212), 0xFu, *(uint **)v4, 5u, 0, 0, 0, 6);
  Function_2007130(*(uint *)(v4 + 212), 0x10u, 4u, 0, 0, 6);
  Function_200710c(*(uint *)(v4 + 212), 0x11u, *(uint **)v4, 5u, 0, 0, 0, 6);
  Function_20070e8(*(uint *)(v4 + 212), 0x20u, *(uint **)v4, 7u, 0, 0, 0, 6);
  Function_200710c(*(uint *)(v4 + 212), 0x21u, *(uint **)v4, 7u, 0, 0, 0, 6);
  Function_20070e8(*(uint *)(v4 + 212), 0x13u, *(uint **)v4, 4u, 0, 0, 0, 6);
  return Function_2007130(*(uint *)(v4 + 212), 0x12u, 4u, 64, 64, 6);
}

//----- (0223BDB4) --------------------------------------------------------
int __fastcall Function_223bdb4(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  a1[69] = LoadFromMsgNARC(0, 26, 7, 6u);
  v1[68] = Function_200c440(1, 2, 0, 6u);
  v1[70] = Function_200b358(6u);
  v1[71] = LoadFromMsgNARC(0, 26, 392, 6u);
  v1[72] = LoadFromMsgNARC(0, 26, 647, 6u);
  result = Function_2023790(256, 6u);
  v1[254] = result;
  return result;
}

//----- (0223BE24) --------------------------------------------------------
int __fastcall Function_223be24(int result)
{
  uint v1;

  v1 = 0;
  *(uchar *)(result + 1060) = 0;
  do
  {
    if ( *(uint *)(*(uint *)(result + 196) + 12 * v1 + 4) )
      ++*(uchar *)(result + 1060);
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 < 8 );
  return result;
}

//----- (0223BE5C) --------------------------------------------------------
int __fastcall Function_223be5c(int a1, int a2, int a3)
{
  bool v3;
  int v4;
  int result;

  v3 = a3 == 0;
  v4 = *(uint *)(*(uint *)(a1 + 196) + 4 + 12 * *(uchar *)(*(uint *)(a1 + 196) + 100));
  if ( v3 )
    result = *(ushort *)(v4 + 4 * a2);
  else
    result = *(ushort *)(v4 + 4 * a2 + 2);
  return result;
}

//----- (0223BE84) --------------------------------------------------------
char *__fastcall Function_223be84(ushort **a1, ushort *a2, uint a3)
{
  return Function_200b1b8_CallMsgDecrypt(a1, a3, a2);
}

//----- (0223BE94) --------------------------------------------------------
char *__fastcall Function_223be94(ushort **a1, ushort *a2, uint a3)
{
  ushort **v3;
  ushort *v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = Function_207d268(a3);
  return Function_200b1b8_CallMsgDecrypt(v3, v5, v4);
}

//----- (0223BEAC) --------------------------------------------------------
int __fastcall Function_223beac(int a1, int a2, int a3, int a4)
{
  int v4;
  uint v5;
  int v6;
  int v7;
  int v8;
  int result;
  int v10;
  uint v11;
  int v12;

  v12 = a4;
  v4 = a1;
  v5 = 0;
  *(uchar *)(*(uint *)(a1 + 196) + 100) = 0;
  v6 = *(uint *)(a1 + 196);
  v7 = v6 + 4;
  if ( *(uint *)(v6 + 108) )
  {
    do
    {
      v10 = v7 + 12 * v5;
      if ( !*(uint *)(v7 + 12 * v5) )
        break;
      Function_207d9b4(*(uint *)(*(uint *)(v4 + 196) + 108), *(uchar *)(v10 + 8), (uchar *)&v12 + 1, &v12);
      if ( !BYTE1(v12) )
        BYTE1(v12) = 1;
      *(ushort *)(v10 + 4) = BYTE1(v12);
      *(ushort *)(v10 + 6) = (uchar)v12;
      v5 = (v5 + 1) & 0xFFFF;
    }
    while ( v5 < 8 );
    result = Function_207d9c4(*(uint *)(*(uint *)(v4 + 196) + 108));
    v11 = 0;
    do
    {
      if ( !*(uint *)(v7 + 12 * v11) )
        break;
      if ( result == *(uchar *)(v7 + 12 * v11 + 8) )
        *(uchar *)(*(uint *)(v4 + 196) + 100) = v11;
      v11 = (v11 + 1) & 0xFFFF;
    }
    while ( v11 < 8 );
  }
  else
  {
    do
    {
      v8 = v7 + 12 * v5;
      result = *(uint *)(v7 + 12 * v5);
      if ( !result )
        break;
      result = (v5 + 1) << 16;
      *(ushort *)(v8 + 4) = 1;
      v5 = (v5 + 1) & 0xFFFF;
      *(ushort *)(v8 + 6) = 0;
    }
    while ( v5 < 8 );
  }
  return result;
}

//----- (0223BF68) --------------------------------------------------------
int __fastcall Function_223bf68(int a1)
{
  int v1;
  int v2;
  int result;
  int v4;
  uint v5;
  int v6;

  v1 = a1;
  v2 = *(uint *)(a1 + 196);
  result = *(uint *)(v2 + 108);
  if ( result )
  {
    v4 = v2 + 4;
    v5 = 0;
    v6 = v2 + 4;
    do
    {
      if ( !*(uint *)v6 )
        break;
      Function_207d9c8(
        *(uint *)(*(uint *)(v1 + 196) + 108),
        *(uchar *)(v6 + 8),
        *(ushort *)(v6 + 4),
        *(ushort *)(v6 + 6));
      ++v5;
      v6 += 12;
    }
    while ( v5 < 8 );
    result = Function_207d9d4(
               *(uint *)(*(uint *)(v1 + 196) + 108),
               *(uchar *)(v4 + 12 * *(uchar *)(*(uint *)(v1 + 196) + 100) + 8));
  }
  return result;
}

//----- (0223BFBC) --------------------------------------------------------
int __fastcall Function_223bfbc(int a1)
{
  int v1;
  int v2;
  int v3;
  uint v4;
  int v5;
  int v6;
  int result;
  uint v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v1 = a1;
  v2 = *(uint *)(a1 + 196) + 4 + 12 * *(uchar *)(*(uint *)(a1 + 196) + 100);
  *(uint *)(a1 + 352) = Function_2013a04(*((uchar *)dword_2241118 + *(uchar *)(v2 + 8)) + 3, 6u);
  Function_2013a4c(*(uint **)(v1 + 352), *(ushort ***)(v1 + 276), 0x20u, -3);
  v3 = *(uchar *)(v2 + 8);
  if ( v3 == 3 )
  {
    v4 = 0;
    if ( HIBYTE(dword_2241118[0]) )
    {
      v11 = 0;
      v5 = v1;
      do
      {
        if ( !*(ushort *)(*(uint *)v2 + v11) )
          break;
        if ( !*(ushort *)(*(uint *)v2 + v11 + 2) )
          break;
        Function_223be94(
          *(ushort ***)(v1 + 288),
          *(ushort **)(v5 + 356),
          *(ushort *)(*(uint *)v2 + v11));
        Function_2013a6c(*(uint **)(v1 + 352), *(uint *)(v5 + 356), v4, v6);
        v11 += 4;
        ++v4;
        v5 += 4;
      }
      while ( v4 < *((uchar *)dword_2241118 + *(uchar *)(v2 + 8)) );
    }
    Function_2013a4c(*(uint **)(v1 + 352), *(ushort ***)(v1 + 276), 0x20u, -2);
    Function_2013a4c(*(uint **)(v1 + 352), *(ushort ***)(v1 + 276), 0x20u, -3);
    result = v4 + 3;
    *(uchar *)(v2 + 9) = v4 + 3;
  }
  else
  {
    v8 = 0;
    if ( *((uchar *)dword_2241118 + v3) )
    {
      v12 = 0;
      v9 = v1;
      do
      {
        if ( !*(ushort *)(*(uint *)v2 + v12) )
          break;
        if ( !*(ushort *)(*(uint *)v2 + v12 + 2) )
          break;
        Function_223be84(
          *(ushort ***)(v1 + 284),
          *(ushort **)(v9 + 356),
          *(ushort *)(*(uint *)v2 + v12));
        Function_2013a6c(*(uint **)(v1 + 352), *(uint *)(v9 + 356), v8, v10);
        v3 = *(uchar *)(v2 + 8);
        v12 += 4;
        ++v8;
        v9 += 4;
      }
      while ( v8 < *((uchar *)dword_2241118 + v3) );
    }
    if ( *(uchar *)(*(uint *)(v1 + 196) + 101) == 5 )
    {
      Function_2013a4c(*(uint **)(v1 + 352), *(ushort ***)(v1 + 276), 0x20u, -3);
      result = v8 + 2;
      *(uchar *)(v2 + 9) = v8 + 2;
    }
    else
    {
      if ( v3 == 4 )
        Function_2013a4c(*(uint **)(v1 + 352), *(ushort ***)(v1 + 276), 0x20u, -2);
      else
        Function_2013a4c(*(uint **)(v1 + 352), *(ushort ***)(v1 + 276), 0x29u, -2);
      Function_2013a4c(*(uint **)(v1 + 352), *(ushort ***)(v1 + 276), 0x20u, -3);
      result = v8 + 3;
      *(uchar *)(v2 + 9) = v8 + 3;
    }
  }
  return result;
}

//----- (0223C158) --------------------------------------------------------
int __fastcall Function_223c158(int a1)
{
  int v1;
  uint v2;
  int result;

  v1 = a1;
  v2 = 0;
  do
  {
    result = Function_2023790(18, 6u);
    *(uint *)(v1 + 356) = result;
    ++v2;
    v1 += 4;
  }
  while ( v2 < 0xA5 );
  return result;
}

//----- (0223C178) --------------------------------------------------------
uint __fastcall Function_223c178(int a1, int a2)
{
  int v2;
  uint v3;
  uint result;

  v2 = a1;
  v3 = 0;
  do
  {
    result = Function_20237bc_FreeMsg(*(uint *)(v2 + 356), a2);
    ++v3;
    v2 += 4;
  }
  while ( v3 < 0xA5 );
  return result;
}

//----- (0223C194) --------------------------------------------------------
int __fastcall Function_223c194(ushort *a1, ushort *a2, int a3)
{
  uint v3;
  int v4;
  int v5;
  int v6;
  int result;

  v3 = (a3 - 1) & 0xFF;
  if ( v3 <= 8 )
    v4 = (v3 - 1) & 0xFF;
  else
    v4 = 7;
  if ( *a1 && (ushort)*a1 + v4 > (int)(v3 - 1) )
    *a1 = v3 - 1 - v4;
  v5 = (ushort)*a1;
  v6 = v3 - 1;
  result = v5 + (ushort)*a2;
  if ( result >= v6 )
  {
    result = v6 - v5;
    *a2 = v6 - v5;
  }
  return result;
}

//----- (0223C1D0) --------------------------------------------------------
ushort *__fastcall Function_223c1d0(ushort *result, ushort *a2, int a3, int a4)
{
  uint v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v4 = (a3 - 1) & 0xFF;
  if ( v4 <= 8 )
    v5 = (v4 - 1) & 0xFF;
  else
    v5 = 7;
  v6 = (ushort)*a2;
  v7 = a4 >> 1;
  if ( v6 >= (a4 >> 1) + 2 )
  {
    v8 = 0;
    if ( v6 - v7 - 2 >= 0 )
    {
      v9 = v4 - 1;
      do
      {
        if ( v9 == (ushort)*result + v5 )
          break;
        --*a2;
        v8 = (v8 + 1) & 0xFF;
        ++*result;
      }
      while ( v8 <= (ushort)*a2 - v7 - 2 );
    }
  }
  return result;
}

//----- (0223C224) --------------------------------------------------------
int __fastcall Function_223c224(int a1, short a2, short a3)
{
  int v3;
  char v4;
  int v6;
  int (*v7)();
  int (*v8)();
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v3 = a1;
  v6 = 0;
  v7 = Function_223c2ac;
  v8 = Function_223c3b8;
  v9 = 0;
  v10 = 589824;
  v11 = 0x10000000;
  v12 = -2147483616;
  v13 = 0;
  v6 = *(uint *)(a1 + 352);
  v9 = a1 + 4;
  LOWORD(v10) = *(uchar *)(*(uint *)(a1 + 196) + 12 * *(uchar *)(*(uint *)(a1 + 196) + 100) + 13);
  v13 = a1;
  if ( ((*(uchar *)(*(uint *)(v13 + 196) + 12 * *(uchar *)(*(uint *)(v13 + 196) + 100) + 12)
       + 253) & 0xFFu) > 1 )
    v4 = 0;
  else
    v4 = 35;
  BYTE1(v11) = v4;
  *(uint *)(v3 + 348) = Function_200112c(&v6, a2, a3, 6u);
  return Function_201a9a4(v3 + 4);
}

//----- (0223C2AC) --------------------------------------------------------
int __fastcall Function_223c2ac(int a1, int a2, int a3)
{
  int v3;
  int v4;
  uint v5;
  uint v6;
  int v7;
  char v8;
  int result;
  int v10;
  int v11;
  int v12;
  int v13;

  v3 = a2;
  v4 = a3;
  v5 = Function_2001504(a1, 0x13u);
  v6 = v5;
  if ( v4 != 1 )
  {
    v7 = *(uchar *)(v5 + 1154);
    if ( *(uchar *)(v6 + 1154) )
    {
      if ( v7 == 1 )
        Function_2005748(0x6CDu);
      else
        Function_2005748(0x6CEu);
    }
    else
    {
      Function_2005748(0x6CCu);
    }
    s32_div_f(*(uchar *)(v6 + 1154) + 1, 3);
    *(uchar *)(v6 + 1154) = v8;
    if ( !*(uchar *)(v6 + 1170) || !Function_200d3b8(*(int **)(v6 + 224)) )
    {
      Function_200d3cc(*(int **)(v6 + 224), 0);
      Function_200d364(
        *(int **)(v6 + 224),
        *(uchar *)(*(uint *)(v6 + 196) + 12 * *(uchar *)(*(uint *)(v6 + 196) + 100) + 12) + 8);
    }
  }
  result = *(uchar *)(v6 + 1146);
  if ( result != 1 )
  {
    Function_201ada4_ClearTextBox(v6 + 20, 0);
    if ( v3 == -2 )
    {
      Function_223f528(v6, 0xFFFF);
      Function_2240ad8(v6, 0xFFFF);
    }
    else
    {
      v10 = *(uint *)(v6 + 196);
      v11 = 4 * v3;
      v12 = v10 + 4;
      v13 = 12 * *(uchar *)(v10 + 100);
      Function_223f528(v6, *(ushort *)(*(uint *)(v10 + 4 + v13) + v11));
      Function_2240ad8(v6, *(ushort *)(*(uint *)(v12 + v13) + v11));
    }
    result = *(uchar *)(v6 + 1145);
    if ( !*(uchar *)(v6 + 1145) )
      result = Function_201a9a4(v6 + 20);
  }
  return result;
}

//----- (0223C3B8) --------------------------------------------------------
int __fastcall Function_223c3b8(int a1, int a2, int a3)
{
  int v3;
  int v4;
  uint v5;
  int v6;
  int v7;
  int result;
  uchar *v9;

  v3 = a2;
  v9 = (uchar *)a1;
  v4 = a3;
  v5 = Function_2001504(a1, 0x13u);
  v6 = *(uint *)(v5 + 196) + 4 + 12 * *(uchar *)(*(uint *)(v5 + 196) + 100);
  if ( *(uchar *)(v5 + 1146) != 1 || *(uint *)(v5 + 1148) != v3 )
    Function_200147c(v9, 1, 0, 2);
  else
    Function_200147c(v9, 8, 0, 9);
  v7 = *(uchar *)(v6 + 8);
  switch ( v7 )
  {
    case 7:
      result = -3;
      if ( v3 != -3 )
      {
        result = -2;
        if ( v3 != -2 )
        {
          result = Function_207d3fc(*(uint *)(v5 + 200));
          if ( *(ushort *)(*(uint *)v6 + 4 * v3) == result )
            result = Function_223fa44(v5, v4);
        }
      }
      break;
    case 3:
      if ( v3 == -2 )
      {
        result = Function_223f9f0(v5, v4);
      }
      else
      {
        result = -3;
        if ( v3 != -3 )
          result = Function_223f8d0(v5, *(uint *)v6 + 4 * v3, v4);
      }
      break;
    case 4:
      if ( v3 == -2 )
      {
        result = Function_223f9f0(v5, v4);
      }
      else
      {
        result = -3;
        if ( v3 != -3 )
          result = Function_223f94c(v5, *(uint *)v6 + 4 * v3, v4);
      }
      break;
    default:
      result = -3;
      if ( v3 != -3 )
      {
        result = -2;
        if ( v3 != -2 )
        {
          if ( *(uchar *)(v5 + 1146) != 1 || *(uint *)(v5 + 1148) != v3 )
            result = Function_223f81c(v5, *(ushort *)(*(uint *)v6 + 4 * v3 + 2), v4, 66048);
          else
            result = Function_223f81c(v5, *(ushort *)(*(uint *)v6 + 4 * v3 + 2), v4, 526592);
        }
      }
      break;
  }
  return result;
}

//----- (0223C4E0) --------------------------------------------------------
int __fastcall Function_223c4e0(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = 12 * *(uchar *)(*(uint *)(a1 + 196) + 100);
  Function_2001384(
    *(uint *)(a1 + 348),
    (ushort *)(*(uint *)(a1 + 196) + 10 + v2),
    (ushort *)(*(uint *)(a1 + 196) + 8 + v2));
  Function_2013a3c(*(int **)(v1 + 352));
  result = 348;
  *(uint *)(v1 + 348) = 0;
  return result;
}

//----- (0223C51C) --------------------------------------------------------
int __fastcall Function_223c51c(int a1)
{
  int v1;
  int result;
  int v3;

  v1 = a1;
  Function_223d0fc();
  if ( Function_223ed14(v1) == 1 )
    return 1;
  if ( Function_223c750(v1) == 1 )
    return 2;
  if ( Function_223cd40(v1) == 1 )
    return 2;
  v3 = Function_223c5b8(v1);
  switch ( v3 )
  {
    case 1:
      Function_2240b34(v1, 2);
      Function_201ada4_ClearTextBox(v1 + 20, 0);
      Function_201acf4(v1 + 20);
      Function_223d5ac(v1);
      if ( *(uchar *)(*(uint *)(v1 + 196) + 12 * *(uchar *)(*(uint *)(v1 + 196) + 100) + 12) == 3 )
        Function_223d7e8(v1, 1);
      result = 4;
      break;
    case 2:
      Function_223d2a0(v1);
      result = 3;
      break;
    case 3:
      result = 24;
      break;
    default:
      result = 1;
      break;
  }
  return result;
}

//----- (0223C5B8) --------------------------------------------------------
int __fastcall Function_223c5b8(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int result;
  int v7;
  int v8;
  ushort v9;
  ushort v10;
  int v11;

  v11 = a4;
  v4 = a1;
  v5 = *(uint *)(a1 + 196) + 4 + 12 * *(uchar *)(*(uint *)(a1 + 196) + 100);
  Function_20014dc(*(uint *)(a1 + 348), (ushort *)(v5 + 6), (ushort *)(v5 + 4));
  if ( dword_21BF6C4 & 4 && Function_223d244(v4) == 1 )
  {
    Function_2005748(0x5DCu);
    result = 2;
  }
  else
  {
    v7 = Function_2001288(*(uint *)(v4 + 348));
    Function_20014dc(*(uint *)(v4 + 348), &v10, &v9);
    if ( *(ushort *)(v5 + 4) != v9 )
      Function_200d4c4(*(int **)(v4 + 240), 177, (short)(16 * (v9 - 1) + 24));
    *(ushort *)(v5 + 6) = v10;
    *(ushort *)(v5 + 4) = v9;
    if ( v7 == -1 && Function_223d1f4(v4) == 1 )
    {
      v7 = Function_20014f8(*(uint **)(v4 + 348), (v10 + v9) & 0xFFFF);
      *(uchar *)(v4 + 1168) = 1;
    }
    if ( v7 == -2 )
    {
      if ( *(uchar *)(*(uint *)(v4 + 196) + 101) == 5 )
      {
        result = 0;
      }
      else
      {
        Function_2005748(0x5DCu);
        *(ushort *)(*(uint *)(v4 + 196) + 102) = 0;
        *(ushort *)(*(uint *)(v4 + 196) + 104) = 5;
        Function_208c120(1, 6);
        result = 3;
      }
    }
    else if ( v7 == -1 )
    {
      v8 = Function_20014f0(*(uint *)(v4 + 348));
      if ( v8 == 1 )
      {
        Function_223eb08(v4, 36);
      }
      else if ( v8 == 2 )
      {
        Function_223eb08(v4, -36);
      }
      result = 0;
    }
    else
    {
      Function_2005748(0x5DCu);
      *(ushort *)(*(uint *)(v4 + 196) + 102) = *(ushort *)(*(uint *)v5 + 4 * v7);
      *(ushort *)(v4 + 1162) = *(ushort *)(*(uint *)v5 + 4 * v7 + 2);
      result = 1;
    }
  }
  return result;
}

//----- (0223C720) --------------------------------------------------------
int __fastcall Function_223c720(int a1)
{
  int v1;
  int result;

  v1 = a1;
  *(uchar *)(a1 + 1063) = s32_div_f(90 - 10 * *(uchar *)(a1 + 1060), *(uchar *)(a1 + 1060) + 1) + 6;
  result = 1064;
  *(uchar *)(v1 + 1064) = *(uchar *)(v1 + 1063) + 4;
  return result;
}

//----- (0223C750) --------------------------------------------------------
int __fastcall Function_223c750(int a1)
{
  int v1;
  int result;
  char v3;
  int v4;

  v1 = a1;
  if ( dword_21BF6C8 & 0x20 )
  {
    if ( *(uchar *)(a1 + 1060) == 1 )
    {
      result = 0;
    }
    else
    {
      Function_2005748(0x6CAu);
      if ( *(uchar *)(*(uint *)(v1 + 196) + 100) )
      {
        *(uchar *)(v1 + 1065) = *(uchar *)(*(uint *)(v1 + 196) + 100) - 1;
        v3 = *(uchar *)(*(uint *)(v1 + 196) + 100) - 1;
      }
      else
      {
        *(uchar *)(v1 + 1065) = *(uchar *)(v1 + 1060) - 1;
        v3 = *(uchar *)(v1 + 1060) - 1;
      }
      *(uchar *)(v1 + 1144) = v3;
      Function_2240b68(v1);
      *(uchar *)(v1 + 1066) = 0;
      Function_223c848(v1);
      Function_201c3c0(*(uint *)v1, 4);
      result = 1;
    }
  }
  else if ( dword_21BF6C8 & 0x10 )
  {
    if ( *(uchar *)(a1 + 1060) == 1 )
    {
      result = 0;
    }
    else
    {
      Function_2005748(0x6CAu);
      v4 = *(uchar *)(*(uint *)(v1 + 196) + 100) + 1;
      if ( v4 >= *(uchar *)(v1 + 1060) )
      {
        *(uchar *)(v1 + 1065) = 0;
        *(uchar *)(v1 + 1144) = 0;
      }
      else
      {
        *(uchar *)(v1 + 1065) = v4;
        *(uchar *)(v1 + 1144) = *(uchar *)(*(uint *)(v1 + 196) + 100) + 1;
      }
      Function_2240b68(v1);
      *(uchar *)(v1 + 1066) = 1;
      Function_223c848(v1);
      Function_201c3c0(*(uint *)v1, 4);
      result = 1;
    }
  }
  else
  {
    result = 0;
  }
  return result;
}

//----- (0223C848) --------------------------------------------------------
int __fastcall Function_223c848(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_223c89c();
  *(uchar *)(v1 + 1069) = 3;
  result = 1072;
  *(uchar *)(v1 + 1072) &= 0x7Fu;
  return result;
}

//----- (0223C868) --------------------------------------------------------
int __fastcall Function_223c868(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( *(uchar *)(a1 + 1066) == 2 )
    *(uchar *)(a1 + 1067) = 2;
  else
    Function_223c89c();
  *(uchar *)(v1 + 1069) = 0;
  result = 1072;
  *(uchar *)(v1 + 1072) |= 0x80u;
  return result;
}

//----- (0223C89C) --------------------------------------------------------
int __fastcall Function_223c89c(int a1)
{
  int v1;
  uchar *v2;

  v1 = a1;
  v2 = (uchar *)(a1 + 1065);
  v2[2] = 0;
  v2[3] = 0;
  v2[5] = 0;
  v2[7] = *(uchar *)(a1 + 1072) & 0xF0;
  v2[7] = *(uchar *)(a1 + 1072) & 0x8F;
  Function_223c4e0(a1);
  Function_201ada4_ClearTextBox(v1 + 4, 0);
  Function_201ada4_ClearTextBox(v1 + 20, 0);
  Function_201a9a4(v1 + 4);
  Function_201a9a4(v1 + 20);
  Function_200d3f4(*(uint **)(v1 + 240), 0);
  Function_200d3f4(*(uint **)(v1 + 252), 0);
  Function_223f3ac(v1, *(uchar *)(*(uint *)(v1 + 196) + 100), 0);
  return Function_223cf20(v1, *(uchar *)(*(uint *)(v1 + 196) + 100), 0);
}

//----- (0223C920) --------------------------------------------------------
int __fastcall Function_223c920(int a1)
{
  int v1;
  uchar *v2;
  int v3;
  uint v4;
  int v5;
  int v6;

  v1 = a1;
  v2 = (uchar *)(a1 + 1065);
  if ( !Function_202278c() )
    *(uchar *)(v1 + 1072) = *(uchar *)(v1 + 1072) & 0x8F | 0x10;
  v3 = Function_223ce08(v1);
  if ( v3 == -1 || v3 != (uchar)*v2 )
    *(uchar *)(v1 + 1072) = *(uchar *)(v1 + 1072) & 0xF0 | 1;
  if ( !Function_223ca5c(v1) && (uint)*(uchar *)(v1 + 1072) << 25 >> 29 == 1 && v3 != -1 )
  {
    *(uchar *)(*(uint *)(v1 + 196) + 100) = *v2;
    v4 = (uchar)*v2;
    if ( v4 <= (uchar)v3 )
    {
      if ( v4 >= (uchar)v3 )
      {
        *(uchar *)(v1 + 1066) = 2;
      }
      else
      {
        *(uchar *)(v1 + 1066) = 1;
        *(uchar *)(v1 + 1067) = 0;
        Function_223cf20(v1, (uchar)*v2, 0);
        Function_223f3ac(v1, (uchar)*v2, 0);
      }
    }
    else
    {
      *(uchar *)(v1 + 1066) = 0;
      *(uchar *)(v1 + 1067) = 0;
      Function_223cf20(v1, (uchar)*v2, 0);
      Function_223f3ac(v1, (uchar)*v2, 0);
    }
    *v2 = v3;
    *(uchar *)(v1 + 1072) &= 0xF0u;
    *(uchar *)(v1 + 1072) &= 0x8Fu;
    *(uchar *)(v1 + 1069) = 0;
    *(uchar *)(v1 + 1144) = v3;
    Function_2240b68(v1);
  }
  v5 = Function_223cbd8(v1);
  v6 = Function_223ce60(v1);
  Function_2240b80(v1);
  if ( v5 != 1 || v6 != 1 || (*(uchar *)(v1 + 1072) & 0xF) != 1 || Function_2240b50(v1) != 1 )
    return 0;
  if ( (uint)*(uchar *)(v1 + 1072) << 24 >> 31 == 1 )
  {
    Function_223cf20(v1, (uchar)*v2, 1);
    Function_201c3c0(*(uint *)v1, 4);
  }
  Function_200d3f4(*(uint **)(v1 + 252), 1);
  return 1;
}

//----- (0223CA5C) --------------------------------------------------------
int __fastcall Function_223ca5c(int a1)
{
  int v1;
  uchar *v2;
  int result;
  char v4;
  int v5;
  char v6;

  v1 = a1;
  v2 = (uchar *)(a1 + 1065);
  if ( dword_21BF6C4 & 0x20 )
  {
    if ( *(uchar *)(a1 + 1060) == 1 )
    {
      result = 1;
    }
    else
    {
      Function_2005748(0x6CAu);
      Function_200d364(
        *(int **)(v1 + 224),
        *(uchar *)(*(uint *)(v1 + 196) + 12 * (uchar)*v2 + 12));
      Function_223cf20(v1, (uchar)*v2, 0);
      Function_201c3c0(*(uint *)v1, 4);
      *(uchar *)(*(uint *)(v1 + 196) + 100) = *v2;
      if ( *v2 )
      {
        --*v2;
        v4 = *(uchar *)(v1 + 1144) - 1;
      }
      else
      {
        *v2 = *(uchar *)(v1 + 1060) - 1;
        v4 = *(uchar *)(v1 + 1060) - 1;
      }
      *(uchar *)(v1 + 1144) = v4;
      *(uchar *)(v1 + 1067) = 0;
      *(uchar *)(v1 + 1066) = 0;
      *(uchar *)(v1 + 1072) = *(uchar *)(v1 + 1072) & 0x8F | 0x10;
      *(uchar *)(v1 + 1072) = *(uchar *)(v1 + 1072) & 0xF0 | 1;
      *(uchar *)(v1 + 1072) &= 0x7Fu;
      if ( *(uchar *)(v1 + 1069) != 3 )
        *(uchar *)(v1 + 1069) = 4;
      Function_2240b68(v1);
      result = 1;
    }
  }
  else if ( dword_21BF6C4 & 0x10 )
  {
    if ( *(uchar *)(a1 + 1060) == 1 )
    {
      result = 1;
    }
    else
    {
      Function_2005748(0x6CAu);
      Function_200d364(
        *(int **)(v1 + 224),
        *(uchar *)(*(uint *)(v1 + 196) + 12 * (uchar)*v2 + 12));
      Function_223cf20(v1, (uchar)*v2, 0);
      Function_201c3c0(*(uint *)v1, 4);
      *(uchar *)(*(uint *)(v1 + 196) + 100) = *v2;
      v5 = (uchar)*v2 + 1;
      if ( v5 >= *(uchar *)(v1 + 1060) )
      {
        v6 = 0;
        *v2 = 0;
      }
      else
      {
        *v2 = v5;
        v6 = *(uchar *)(v1 + 1144) + 1;
      }
      *(uchar *)(v1 + 1144) = v6;
      *(uchar *)(v1 + 1067) = 0;
      *(uchar *)(v1 + 1066) = 1;
      *(uchar *)(v1 + 1072) = *(uchar *)(v1 + 1072) & 0x8F | 0x10;
      *(uchar *)(v1 + 1072) = *(uchar *)(v1 + 1072) & 0xF0 | 1;
      *(uchar *)(v1 + 1072) &= 0x7Fu;
      if ( *(uchar *)(v1 + 1069) != 3 )
        *(uchar *)(v1 + 1069) = 4;
      Function_2240b68(v1);
      result = 1;
    }
  }
  else
  {
    result = 0;
  }
  return result;
}

//----- (0223CBD8) --------------------------------------------------------
int __fastcall Function_223cbd8(int a1)
{
  int v1;
  uchar *v2;
  int v3;
  uint v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v1 = a1;
  v2 = (uchar *)(a1 + 1065);
  v3 = *(uchar *)(a1 + 1067);
  if ( !*(uchar *)(a1 + 1067) )
  {
    *(uchar *)(a1 + 1068) = 0;
    ++*(uchar *)(a1 + 1067);
    return 0;
  }
  if ( v3 != 1 )
  {
    if ( v3 == 2 )
      return 1;
    return 0;
  }
  v4 = *(uchar *)(a1 + 1068);
  if ( v4 < 8 )
  {
    *(uchar *)(a1 + 1068) = v4 + 1;
    Function_223f2fc(a1);
    return 0;
  }
  v5 = *(uint *)(a1 + 348);
  if ( v5 )
  {
    v6 = 12 * *(uchar *)(*(uint *)(v1 + 196) + 100);
    Function_2001384(v5, (ushort *)(*(uint *)(v1 + 196) + 10 + v6), (ushort *)(*(uint *)(v1 + 196) + 8 + v6));
    Function_2013a3c(*(int **)(v1 + 352));
  }
  *(uchar *)(*(uint *)(v1 + 196) + 100) = *v2;
  Function_200d364(
    *(int **)(v1 + 224),
    *(uchar *)(*(uint *)(v1 + 196) + 12 * *(uchar *)(*(uint *)(v1 + 196) + 100) + 12));
  Function_223f438(v1);
  Function_223f3ac(v1, *(uchar *)(*(uint *)(v1 + 196) + 100), 1);
  Function_223bfbc(v1);
  v7 = 12 * *(uchar *)(*(uint *)(v1 + 196) + 100);
  Function_223c194(
    (ushort *)(*(uint *)(v1 + 196) + 10 + v7),
    (ushort *)(*(uint *)(v1 + 196) + 8 + v7),
    *(uchar *)(*(uint *)(v1 + 196) + v7 + 13));
  v8 = 12 * *(uchar *)(*(uint *)(v1 + 196) + 100);
  Function_223c1d0(
    (ushort *)(*(uint *)(v1 + 196) + 10 + v8),
    (ushort *)(*(uint *)(v1 + 196) + 8 + v8),
    *(uchar *)(*(uint *)(v1 + 196) + v8 + 13),
    9);
  v9 = *(uint *)(v1 + 196) + 12 * *(uchar *)(*(uint *)(v1 + 196) + 100);
  Function_223c224(v1, *(ushort *)(v9 + 10), *(ushort *)(v9 + 8));
  Function_200d4c4(
    *(int **)(v1 + 240),
    177,
    (short)(16
                   * (*(ushort *)(*(uint *)(v1 + 196) + 12 * *(uchar *)(*(uint *)(v1 + 196) + 100) + 8) - 1)
                   + 24));
  Function_200d3f4(*(uint **)(v1 + 240), 1);
  ++v2[2];
  return 1;
}

//----- (0223CD40) --------------------------------------------------------
int __fastcall Function_223cd40(int a1)
{
  int v1;
  int v2;
  uint v4;

  v1 = a1;
  v2 = Function_223cdb0();
  if ( v2 == -1 )
    return 0;
  if ( *(uchar *)(v1 + 1060) == 1 )
    return 0;
  v4 = *(uchar *)(*(uint *)(v1 + 196) + 100);
  if ( v4 == (uchar)v2 )
    *(uchar *)(v1 + 1066) = 2;
  else
    *(uchar *)(v1 + 1066) = v4 <= (uchar)v2;
  *(uchar *)(v1 + 1065) = v2;
  *(uchar *)(v1 + 1144) = v2;
  Function_2240b68(v1);
  Function_223c868(v1);
  return 1;
}

//----- (0223CDB0) --------------------------------------------------------
int __fastcall Function_223cdb0(int a1, int a2, int a3, int a4)
{
  uint **v4;
  int v5;
  int result;
  short v7;
  int v8;

  v8 = a4;
  v4 = (uint **)a1;
  v5 = Function_2022664((uchar *)dword_22410CC[2 * *(uchar *)(a1 + 1060)]);
  if ( v5 == -1
    || (v7 = -2,
        Function_201c784(
          *v4,
          4u,
          (ushort)word_21BF6D8,
          (ushort)word_21BF6DA,
          (ushort *)&v7)) )
  {
    result = v5;
  }
  else
  {
    result = -1;
  }
  return result;
}

//----- (0223CE08) --------------------------------------------------------
int __fastcall Function_223ce08(int a1, int a2, int a3, int a4)
{
  uint **v4;
  int v5;
  int result;
  short v7;
  int v8;

  v8 = a4;
  v4 = (uint **)a1;
  v5 = Function_2022644((uchar *)dword_22410CC[2 * *(uchar *)(a1 + 1060)]);
  if ( v5 == -1
    || (v7 = -2,
        Function_201c784(
          *v4,
          4u,
          (ushort)word_21BF6D8,
          (ushort)word_21BF6DA,
          (ushort *)&v7)) )
  {
    result = v5;
  }
  else
  {
    result = -1;
  }
  return result;
}

//----- (0223CE60) --------------------------------------------------------
int __fastcall Function_223ce60(int a1, char a2)
{
  int v2;
  uchar *v3;
  char v4;
  int v5;
  int result;

  v2 = a1;
  v3 = (uchar *)(a1 + 1065);
  v4 = *(uchar *)(a1 + 1069);
  switch ( a2 )
  {
    case 0:
      v3[5] = 0;
      v3[7] |= 0x80u;
      v3[6] = *v3;
      ++v3[4];
      goto LABEL_9;
    case 1:
      if ( v3[5] == 3 )
      {
        Function_2005748(0x5E4u);
        Function_223cf20(v2, (uchar)v3[6], 2);
        Function_201c3c0(*(uint *)v2, 4);
        v5 = dword_22410C8[2 * *(uchar *)(v2 + 1060)];
        Function_2240e24(
          v2,
          (short)(8 * *(uchar *)(v5 + 2 * (uchar)v3[6]) + 20),
          (short)(8 * *(uchar *)(v5 + 2 * (uchar)v3[6] + 1) + 20));
        ++v3[4];
      }
      goto LABEL_9;
    case 2:
      if ( v3[5] != 7 )
        goto LABEL_9;
      v3[4] = v4 + 1;
      result = 1;
      break;
    case 3:
      result = 1;
      break;
    case 4:
      v3[4] = 3;
      result = 1;
      break;
    default:
LABEL_9:
      ++v3[5];
      result = 0;
      break;
  }
  return result;
}

//----- (0223CF20) --------------------------------------------------------
int __fastcall Function_223cf20(int *a1, int a2, int a3)
{
  int *v3;
  int v4;
  int v5;
  int v6;
  uchar *v7;
  uint v8;
  uint v9;
  int v10;
  uint v11;
  int result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_2019fe4(*a1, 4);
  v7 = (uchar *)(dword_22410C8[2 * *((uchar *)v3 + 1060)] + 2 * v4);
  v8 = *(uchar *)(v3[49] + 12 * v4 + 12);
  v9 = 0;
  v10 = (5 * v5 + 150 * (v8 >> 1) + 15 * (v8 & 1) + 30) & 0xFFFF;
  do
  {
    v11 = 0;
    do
    {
      *(ushort *)(v6 + 2 * (*v7 + v11 + 32 * (v9 + v7[1]))) = v11 + v10 + 30 * v9 + 0x2000;
      v11 = (v11 + 1) & 0xFF;
    }
    while ( v11 < 5 );
    result = (v9 + 1) << 24;
    v9 = (v9 + 1) & 0xFF;
  }
  while ( v9 < 5 );
  return result;
}

//----- (0223CFB0) --------------------------------------------------------
int __fastcall Function_223cfb0(int *a1, int a2)
{
  int v2;
  int v3;
  uint v4;
  int v5;
  uint v6;
  int *v8;

  v8 = a1;
  v2 = a2;
  v3 = Function_2019fe4(*a1, 4);
  v4 = 0;
  do
  {
    v5 = ((6 * v2 + 630) & 0xFFFF) + 30 * v4;
    v6 = 0;
    do
    {
      *(ushort *)(v3 + ((v4 + 7) << 6) + 2 * v6 + 26) = v6 + v5 + 12288;
      v6 = (v6 + 1) & 0xFF;
    }
    while ( v6 < 6 );
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 < 6 );
  return Function_201c3c0(*v8, 4);
}

//----- (0223D014) --------------------------------------------------------
int __fastcall Function_223d014(int result)
{
  int v1;
  char v2;
  char v3;

  v1 = result;
  switch ( *(uchar *)(result + 1168) )
  {
    case 1:
      Function_2240e24(result, 128, 80);
      Function_2005748(0x5E4u);
      Function_223cfb0((int *)v1, 2);
      *(uchar *)(v1 + 1169) = 0;
      result = 1168;
      ++*(uchar *)(v1 + 1168);
      break;
    case 2:
      if ( *(uchar *)(result + 1169) == 3 )
      {
        Function_223cfb0((int *)result, 1);
        ++*(uchar *)(v1 + 1168);
        result = 1169;
        *(uchar *)(v1 + 1169) = 0;
      }
      else
      {
        v2 = *(uchar *)(result + 1169) + 1;
        result = 1169;
        *(uchar *)(v1 + 1169) = v2;
      }
      break;
    case 3:
      if ( *(uchar *)(result + 1169) == 2 )
      {
        Function_223cfb0((int *)result, 0);
        *(uchar *)(v1 + 1168) = 0;
        result = 1169;
        *(uchar *)(v1 + 1169) = 0;
      }
      else
      {
        v3 = *(uchar *)(result + 1169) + 1;
        result = 1169;
        *(uchar *)(v1 + 1169) = v3;
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (0223D0BC) --------------------------------------------------------
int __fastcall Function_223d0bc(int *a1)
{
  int *v1;
  uint v2;

  v1 = a1;
  Function_223cfb0(a1, 0);
  if ( *((uchar *)v1 + 1060) != 1 )
  {
    v2 = 0;
    if ( *((uchar *)v1 + 1060) )
    {
      do
      {
        Function_223cf20(v1, v2, 0);
        v2 = (v2 + 1) & 0xFF;
      }
      while ( v2 < *((uchar *)v1 + 1060) );
    }
  }
  return Function_201c3c0(*v1, 4);
}

//----- (0223D0FC) --------------------------------------------------------
int __fastcall Function_223d0fc(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  short v6;
  short v7;
  int v8;

  v8 = a4;
  v4 = a1;
  if ( !*(uchar *)(a1 + 1153) )
  {
    switch ( *(uchar *)(a1 + 1152) )
    {
      case 0:
      case 1:
        Function_200d550(*(int **)(a1 + 232), &v7, &v6);
        Function_200d4c4(*(int **)(v4 + 232), --v7, v6);
        Function_200d550(*(int **)(v4 + 236), &v7, &v6);
        Function_200d4c4(*(int **)(v4 + 236), ++v7, v6);
        break;
      case 2:
      case 3:
        Function_200d550(*(int **)(a1 + 232), &v7, &v6);
        Function_200d4c4(*(int **)(v4 + 232), ++v7, v6);
        Function_200d550(*(int **)(v4 + 236), &v7, &v6);
        Function_200d4c4(*(int **)(v4 + 236), --v7, v6);
        break;
      default:
        break;
    }
    *(uchar *)(v4 + 1152) = (*(uchar *)(v4 + 1152) + 1) & 3;
  }
  result = (*(uchar *)(v4 + 1153) + 1) & 3;
  *(uchar *)(v4 + 1153) = result;
  return result;
}

//----- (0223D1F4) --------------------------------------------------------
BOOL __fastcall Function_223d1f4(uint **a1)
{
  uint **v1;
  short v3;

  v1 = a1;
  if ( Function_2022664((uchar *)&dword_2240E94[1]) == -1 )
    return 0;
  v3 = -2;
  return Function_201c784(
           *v1,
           4u,
           (ushort)word_21BF6D8,
           (ushort)word_21BF6DA,
           (ushort *)&v3) != 0;
}

//----- (0223D244) --------------------------------------------------------
BOOL __fastcall Function_223d244(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 196) + 4 + 12 * *(uchar *)(*(uint *)(a1 + 196) + 100);
  if ( Function_20014f8(
         *(uint **)(a1 + 348),
         (*(ushort *)(v2 + 6) + *(ushort *)(v2 + 4)) & 0xFFFF) == -2 )
    return 0;
  if ( *(uchar *)(*(uint *)(v1 + 196) + 101) )
    return 0;
  return ((*(uchar *)(v2 + 8) + 253) & 0xFFu) > 1;
}

//----- (0223D2A0) --------------------------------------------------------
int __fastcall Function_223d2a0(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 196) + 4 + 12 * *(uchar *)(*(uint *)(a1 + 196) + 100);
  *(uchar *)(a1 + 1146) = 1;
  *(uchar *)(a1 + 1147) = *(uchar *)(v2 + 6) + *(uchar *)(v2 + 4);
  *(uint *)(a1 + 1148) = Function_20014f8(*(uint **)(a1 + 348), *(uchar *)(a1 + 1147));
  Function_223fe18(v1);
  Function_20013ac(*(uint *)(v1 + 348));
  return Function_223d4e8(v1);
}

//----- (0223D2F8) --------------------------------------------------------
int __fastcall Function_223d2f8(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  ushort v9;
  short v10;
  int v11;

  v11 = a4;
  v4 = a1;
  if ( Function_223ee30() == 1 )
    return 0;
  v6 = *(uint *)(v4 + 196) + 4 + 12 * *(uchar *)(*(uint *)(v4 + 196) + 100);
  Function_20014dc(*(uint *)(v4 + 348), (ushort *)(v6 + 6), (ushort *)(v6 + 4));
  if ( Function_223d1f4((uint **)v4) == 1 )
  {
    Function_2005748(0x5DCu);
    Function_223d42c(v4);
    result = 1;
    *(uchar *)(v4 + 1168) = 1;
  }
  else if ( dword_21BF6C4 & 4 )
  {
    Function_2005748(0x5DCu);
    Function_223d42c(v4);
    result = 1;
  }
  else
  {
    v7 = Function_2001288(*(uint *)(v4 + 348));
    Function_20014dc(*(uint *)(v4 + 348), &v10, &v9);
    if ( *(ushort *)(v6 + 4) != v9 )
      Function_200d4c4(*(int **)(v4 + 244), 177, (short)(16 * (v9 - 1) + 16));
    *(ushort *)(v6 + 6) = v10;
    *(ushort *)(v6 + 4) = v9;
    if ( v7 == -2 )
    {
      Function_2005748(0x5DCu);
      if ( dword_21BF6C4 & 1 )
        Function_223d42c(v4);
      else
        Function_223d484(v4);
      result = 1;
    }
    else if ( v7 == -1 )
    {
      v8 = Function_20014f0(*(uint *)(v4 + 348));
      if ( v8 == 1 )
      {
        Function_223eb08(v4, 36);
      }
      else if ( v8 == 2 )
      {
        Function_223eb08(v4, -36);
      }
      result = 0;
    }
    else
    {
      Function_2005748(0x5DCu);
      Function_223d42c(v4);
      result = 1;
    }
  }
  return result;
}

//----- (0223D42C) --------------------------------------------------------
int __fastcall Function_223d42c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = *(uint *)(a1 + 196) + 4 + 12 * *(uchar *)(*(uint *)(a1 + 196) + 100);
  v3 = (*(ushort *)(v2 + 6) + *(ushort *)(v2 + 4)) & 0xFFFF;
  v4 = *(uchar *)(v1 + 1147);
  if ( v4 != v3 )
  {
    v5 = v3 - 1;
    if ( v4 != v5 )
    {
      Function_207cdec(*(uint *)v2, (v4 - 1) & 0xFFFF, (ushort)v5);
      Function_2013a3c(*(int **)(v1 + 352));
      Function_223bfbc(v1);
    }
  }
  return Function_223d484(v1);
}

//----- (0223D484) --------------------------------------------------------
int __fastcall Function_223d484(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = *(uint *)(a1 + 196) + 4 + 12 * *(uchar *)(*(uint *)(a1 + 196) + 100);
  Function_2001384(*(uint *)(a1 + 348), (ushort *)(v2 + 6), (ushort *)(v2 + 4));
  *(uint *)(v1 + 348) = 0;
  v3 = *(ushort *)(v2 + 4);
  if ( *(uchar *)(v1 + 1147) < *(ushort *)(v2 + 6) + v3 )
    *(ushort *)(v2 + 4) = v3 - 1;
  *(uchar *)(v1 + 1146) = 0;
  *(uchar *)(v1 + 1147) = 0;
  *(uint *)(v1 + 1148) = 0;
  Function_223c224(v1, *(ushort *)(v2 + 6), *(ushort *)(v2 + 4));
  return Function_223d4e8(v1);
}

//----- (0223D4E8) --------------------------------------------------------
uint __fastcall Function_223d4e8(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = a1;
  v2 = *(uint *)(a1 + 196) + 4 + 12 * *(uchar *)(*(uint *)(a1 + 196) + 100);
  if ( *(uchar *)(a1 + 1146) )
  {
    Function_200d4c4(*(int **)(a1 + 244), 177, (short)(16 * (*(ushort *)(v2 + 4) - 1) + 16));
    Function_200d3f4(*(uint **)(v1 + 240), 0);
    Function_200d3f4(*(uint **)(v1 + 244), 1);
    result = *(uchar *)(v1 + 1060);
    if ( result != 1 )
    {
      Function_200d3f4(*(uint **)(v1 + 232), 0);
      result = Function_200d3f4(*(uint **)(v1 + 236), 0);
    }
  }
  else
  {
    Function_200d4c4(*(int **)(a1 + 240), 177, (short)(16 * (*(ushort *)(v2 + 4) - 1) + 24));
    Function_200d3f4(*(uint **)(v1 + 240), 1);
    Function_200d3f4(*(uint **)(v1 + 244), 0);
    result = *(uchar *)(v1 + 1060);
    if ( result != 1 )
    {
      Function_200d3f4(*(uint **)(v1 + 232), 1);
      result = Function_200d3f4(*(uint **)(v1 + 236), 1);
    }
  }
  return result;
}

//----- (0223D5AC) --------------------------------------------------------
uint __fastcall Function_223d5ac(int a1)
{
  int v1;
  int v2;
  int v3;
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
  int v14;
  char v15;
  int v16;
  int v17;
  char v18;
  char v20;
  char v21;

  v1 = a1;
  v2 = LoadFromNARC_ItemData(*(ushort *)(*(uint *)(a1 + 196) + 102), 0, 6u);
  v3 = *(uint *)(v1 + 196);
  v4 = 0;
  v5 = v3 + 12 * *(uchar *)(*(uint *)(v1 + 196) + 100);
  v6 = *(uchar *)(v3 + 101);
  v7 = *(uchar *)(v5 + 12);
  if ( v6 )
  {
    if ( ((v6 + 252) & 0xFFu) <= 1 )
    {
      v20 = 10;
      v21 = 9;
      v4 = 2;
    }
  }
  else
  {
    if ( v7 == 4 )
    {
      v20 = 9;
      v4 = 1;
    }
    v8 = *(uint *)(v1 + 196);
    v9 = (uint)*(ushort *)(*(uint *)(v1 + 196) + 118) << 16 >> 17;
    if ( ((v9 + 65534) & 0xFFFF) > 1 )
    {
      ReadItemData1(v2, 6u, v9);
      if ( v11 )
      {
        v12 = *(uint *)(v1 + 196);
        v13 = *(ushort *)(*(uint *)(v1 + 196) + 102);
        if ( v13 != 450 || (v10 = *(ushort *)(v12 + 118) & 1, v10 != 1) )
        {
          v10 = v12 + 12 * *(uchar *)(v12 + 100);
          v14 = *(uchar *)(v10 + 12);
          if ( v14 == 5 )
          {
            *(&v20 + v4) = 2;
          }
          else
          {
            LOBYTE(v10) = -63;
            if ( v13 == 449 )
            {
              *(&v20 + v4) = 4;
            }
            else if ( v14 != 4 || Function_2068b50(*(uint *)(v12 + 112)) != 1 )
            {
              *(&v20 + v4) = 0;
            }
            else
            {
              *(&v20 + v4) = 3;
            }
          }
        }
        else
        {
          *(&v20 + v4) = 1;
        }
        ++v4;
      }
    }
    else
    {
      v10 = *(uchar *)(v8 + 100);
      if ( *(uchar *)(v8 + 12 * v10 + 12) == 5 )
        *(&v20 + v4++) = 2;
    }
    ReadItemData1(v2, 3u, v10);
    if ( !v16 )
    {
      *(&v20 + v4++) = 8;
      if ( v7 != 3 )
        *(&v20 + v4++) = 5;
    }
    ReadItemData1(v2, 4u, v15);
    if ( v17 )
    {
      if ( *(ushort *)(*(uint *)(v1 + 196) + 102) == Function_207d3fc(*(uint *)(v1 + 200)) )
        v18 = 7;
      else
        v18 = 6;
      *(&v20 + v4++) = v18;
    }
  }
  *(&v20 + v4) = 11;
  Function_223fb70(v1);
  return free(v2);
}

//----- (0223D730) --------------------------------------------------------
int __fastcall Function_223d730(int a1)
{
  int v1;
  int result;
  int (__fastcall *v3)(int);
  int v4;

  v1 = a1;
  if ( Function_223ef4c() == 1 )
    return 4;
  v3 = (int (__fastcall *)(int))Function_2001be0(*(uint *)(v1 + 344));
  if ( v3 == (int (__fastcall *)(int))-1 && Function_223d1f4((uint **)v1) == 1 )
  {
    v3 = (int (__fastcall *)(int))Function_2001d44(*(uint *)(v1 + 344), 0);
    *(uchar *)(v1 + 1168) = 1;
  }
  if ( v3 == (int (__fastcall *)(int))-2 )
  {
    Function_2240b34(v1, 1);
    Function_223fd84(v1);
    if ( *(uchar *)(*(uint *)(v1 + 196) + 12 * *(uchar *)(*(uint *)(v1 + 196) + 100) + 12) == 3 )
      Function_223d7e8(v1, 0);
    result = 1;
  }
  else if ( v3 == (int (__fastcall *)(int))-1 )
  {
    v4 = Function_2001dc8(*(uint *)(v1 + 344));
    if ( v4 == 1 )
    {
      Function_223eb08(v1, 18);
    }
    else if ( v4 == 2 )
    {
      Function_223eb08(v1, -18);
    }
    result = 4;
  }
  else
  {
    result = v3(v1);
  }
  return result;
}

//----- (0223D7E8) --------------------------------------------------------
int __fastcall Function_223d7e8(int *a1, int a2)
{
  int *v2;

  v2 = a1;
  if ( a2 )
  {
    Function_20198c0(*a1, 1, 35917974, 0, 0x12u, 5u, 5u);
    Function_200d3f4((uint *)v2[63], 0);
  }
  else
  {
    Function_20198c0(*a1, 1, (int)dword_2241064, 0, 0x12u, 5u, 5u);
    Function_200d3f4((uint *)v2[63], 1);
  }
  return Function_201c3c0(*v2, 1);
}

//----- (0223D84C) --------------------------------------------------------
int __fastcall Function_223d84c(int a1)
{
  return (int)*(&off_2241034 + a1);
}

//----- (0223D858) --------------------------------------------------------
int __fastcall Function_223d858(int a1)
{
  int v1;
  ushort v2;
  int (__fastcall *v3)(uint);
  int v4;

  v1 = a1;
  Function_223fd84(a1);
  v2 = GetItemData(*(ushort *)(*(uint *)(v1 + 196) + 102), 6u, 6u);
  v3 = (int (__fastcall *)(uint))Function_20683f4(2, v2);
  if ( !v3 )
    return Function_223d94c(v1, v3);
  v4 = v3(*(uint *)(*(uint *)(v1 + 196) + 112));
  if ( !v4 )
    return Function_223d94c(v1, v3);
  Function_207cd34(
    *(uint *)(v1 + 204),
    *(ushort **)(v1 + 1016),
    *(ushort *)(*(uint *)(v1 + 196) + 102),
    v4,
    6u);
  Function_201ada4_ClearTextBox(v1 + 100, 15);
  Function_200e060(v1 + 100, 0, 985, 0xCu);
  *(uchar *)(v1 + 1062) = Function_22400a0(v1);
  return 12;
}

//----- (0223D8EC) --------------------------------------------------------
int __fastcall Function_223d8ec(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( Function_201d724(*(uchar *)(a1 + 1062)) || !(dword_21BF6C4 & 3) && !word_21BF6DC )
    return 12;
  Function_200e084(v1 + 100, 0);
  Function_201a9a4(v1 + 20);
  Function_2240b34(v1, 1);
  if ( *(uchar *)(*(uint *)(v1 + 196) + 101) == 3 )
    result = 23;
  else
    result = 1;
  return result;
}

//----- (0223D94C) --------------------------------------------------------
int __fastcall Function_223d94c(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = *(uint *)(a1 + 196) + 4 + 12 * *(uchar *)(*(uint *)(a1 + 196) + 100);
  *(uchar *)(a1 + 1155) = 0;
  if ( *(uchar *)(v2 + 8) == 3 )
  {
    *(uint *)(a1 + 1156) = Function_223da14;
    result = 13;
  }
  else if ( Function_207cc10(
              **(uint **)(a1 + 196),
              *(uint *)(a1 + 1016),
              *(ushort *)(*(uint *)(a1 + 196) + 102),
              6u) == 1 )
  {
    Function_201ada4_ClearTextBox(v1 + 100, 15);
    Function_200e060(v1 + 100, 0, 985, 0xCu);
    *(uchar *)(v1 + 1062) = Function_22400a0(v1);
    result = 12;
  }
  else if ( Function_223dbf4(v1, *(ushort *)(*(uint *)(v1 + 196) + 102)) == 1 )
  {
    *(uint *)(v1 + 1156) = Function_223ddd0;
    result = 13;
  }
  else
  {
    Function_208c120(1, 6);
    *(ushort *)(*(uint *)(v1 + 196) + 104) = 0;
    result = 24;
  }
  return result;
}

//----- (0223DA04) --------------------------------------------------------
int __fastcall Function_223da04(int a1)
{
  return (*(int (**)(void))(a1 + 1156))();
}

//----- (0223DA14) --------------------------------------------------------
int __fastcall Function_223da14(int a1)
{
  int v1;
  uint v2;
  int v3;
  ushort *v4;
  int v5;
  int v6;
  int result;
  int v8;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1155);
  if ( v2 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_223DA2E + v2) + 35904048);
  switch ( (uchar)v2 )
  {
    case 0:
      v3 = Function_207d268(*(ushort *)(*(uint *)(a1 + 196) + 102));
      Function_200b630(*(uint *)(v1 + 280), 0, v3);
      if ( Function_207d28c(v3) == 1 )
        Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 276), 0x3Bu, *(ushort **)(v1 + 1016));
      else
        Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 276), 0x3Au, *(ushort **)(v1 + 1016));
      Function_201ada4_ClearTextBox(v1 + 100, 15);
      Function_200e060(v1 + 100, 0, 985, 0xCu);
      *(uchar *)(v1 + 1062) = Function_22400a0(v1);
      *(uchar *)(v1 + 1155) = 1;
      goto LABEL_28;
    case 1:
      if ( !Function_201d724(*(uchar *)(a1 + 1062)) && (dword_21BF6C4 & 3 || word_21BF6DC) )
      {
        v4 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 276), 0x3Cu);
        Function_201ada4_ClearTextBox(v1 + 100, 15);
        Function_200c388(*(uint **)(v1 + 280), *(uint *)(v1 + 1016), (int)v4);
        Function_20237bc_FreeMsg((int)v4, v5);
        *(uchar *)(v1 + 1062) = Function_22400a0(v1);
        *(uchar *)(v1 + 1155) = 2;
      }
      goto LABEL_28;
    case 2:
      if ( !Function_201d724(*(uchar *)(a1 + 1062)) )
      {
        Function_2240120(v1);
        *(uchar *)(v1 + 1155) = 3;
      }
      goto LABEL_28;
    case 3:
      if ( Function_223ef4c() == 1 )
        goto LABEL_28;
      if ( Function_223d1f4((uint **)v1) == 1 )
      {
        v6 = Function_2002134(*(uint *)(v1 + 344), 0, 6u);
        *(uchar *)(v1 + 1168) = 1;
      }
      else
      {
        v6 = Function_2002114(*(uint *)(v1 + 344), 6u);
      }
      if ( v6 )
      {
        if ( v6 == -2 )
        {
          Function_200e084(v1 + 100, 0);
          Function_201a9a4(v1 + 20);
          Function_2240b34(v1, 1);
          Function_223d7e8((int *)v1, 0);
          result = 1;
        }
        else
        {
          if ( v6 == -1 )
          {
            v8 = Function_2001dc8(*(uint *)(v1 + 344));
            if ( v8 == 1 )
            {
              Function_223eb08(v1, 18);
            }
            else if ( v8 == 2 )
            {
              Function_223eb08(v1, -18);
            }
          }
LABEL_28:
          result = 13;
        }
      }
      else
      {
        Function_208c120(1, 6);
        Function_223d7e8((int *)v1, 0);
        *(ushort *)(*(uint *)(v1 + 196) + 104) = 0;
        result = 24;
      }
      return result;
    default:
      goto LABEL_28;
  }
}

//----- (0223DBF4) --------------------------------------------------------
int __fastcall Function_223dbf4(int a1, uint a2)
{
  int v2;
  uint v3;
  int v4;
  ushort *v5;
  int v7;

  v2 = a1;
  v3 = a2;
  v4 = *(uint *)(a1 + 204);
  Function_200b498(*(uint *)(a1 + 280), 0);
  Function_200b70c(*(uint *)(v2 + 280), 1u, v3);
  switch ( v3 )
  {
    case 0x44u:
      v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 276), 0x40u);
      Function_223ba04(v2, 1u);
      *(ushort *)(v2 + 1160) = 0;
      break;
    case 0x45u:
      v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 276), 0x3Fu);
      Function_223ba04(v2, 2u);
      *(ushort *)(v2 + 1160) = 0;
      break;
    case 0x4Du:
    case 0x4Cu:
    case 0x4Fu:
      v5 = (ushort *)Function_223dc9c(v2, v3);
      break;
    default:
      return 0;
  }
  Function_200c388(*(uint **)(v2 + 280), *(uint *)(v2 + 1016), (int)v5);
  Function_20237bc_FreeMsg((int)v5, v7);
  return 1;
}

//----- (0223DC9C) --------------------------------------------------------
ushort *__fastcall Function_223dc9c(int a1, uint a2)
{
  int v2;
  uint v3;
  int v4;
  ushort *result;
  char v6;

  v2 = a1;
  v3 = a2;
  v4 = Function_223b9e4(a1);
  if ( Function_202d9d8(v4) )
  {
    v6 = GetItemData(v3, 2u, 6u);
    Function_223b9f4(v2, v6);
    *(ushort *)(v2 + 1160) = 1;
    Function_2005748(0x600u);
    result = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 276), 0x3Du);
  }
  else
  {
    *(ushort *)(v2 + 1160) = 0;
    result = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 276), 0x3Eu);
  }
  return result;
}

//----- (0223DCF8) --------------------------------------------------------
int __fastcall Function_223dcf8(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = a1;
  v2 = *(uint *)(a1 + 196);
  v3 = v2 + 12 * *(uchar *)(*(uint *)(a1 + 196) + 100);
  Function_207d658(
    *(ushort **)(v3 + 4),
    *(uchar *)(v3 + 13) - 3,
    *(ushort *)(v2 + 102),
    *(ushort *)(a1 + 1160));
  v4 = 12 * *(uchar *)(*(uint *)(v1 + 196) + 100);
  Function_2001384(
    *(uint *)(v1 + 348),
    (ushort *)(*(uint *)(v1 + 196) + 10 + v4),
    (ushort *)(*(uint *)(v1 + 196) + 8 + v4));
  Function_2013a3c(*(int **)(v1 + 352));
  Function_223bfbc(v1);
  v5 = 12 * *(uchar *)(*(uint *)(v1 + 196) + 100);
  Function_223c194(
    (ushort *)(*(uint *)(v1 + 196) + 10 + v5),
    (ushort *)(*(uint *)(v1 + 196) + 8 + v5),
    *(uchar *)(*(uint *)(v1 + 196) + v5 + 13));
  v6 = 12 * *(uchar *)(*(uint *)(v1 + 196) + 100);
  Function_223c1d0(
    (ushort *)(*(uint *)(v1 + 196) + 10 + v6),
    (ushort *)(*(uint *)(v1 + 196) + 8 + v6),
    *(uchar *)(*(uint *)(v1 + 196) + v6 + 13),
    9);
  v7 = *(uint *)(v1 + 196) + 12 * *(uchar *)(*(uint *)(v1 + 196) + 100);
  return Function_223c224(v1, *(ushort *)(v7 + 10), *(ushort *)(v7 + 8));
}

//----- (0223DDD0) --------------------------------------------------------
int __fastcall Function_223ddd0(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1155);
  if ( !*(uchar *)(a1 + 1155) )
  {
    Function_201ada4_ClearTextBox(a1 + 100, 15);
    Function_200e060(v1 + 100, 0, 985, 0xCu);
    *(uchar *)(v1 + 1062) = Function_22400a0(v1);
    *(uchar *)(v1 + 1155) = 1;
    return 13;
  }
  if ( v2 == 1 )
  {
    if ( !Function_201d724(*(uchar *)(a1 + 1062)) && (dword_21BF6C4 & 3 || word_21BF6DC) )
    {
      Function_200e084(v1 + 100, 0);
      *(uchar *)(v1 + 1155) = 2;
    }
    return 13;
  }
  if ( v2 != 2 )
    return 13;
  if ( *(ushort *)(a1 + 1160) )
    Function_223dcf8(a1);
  Function_201a9a4(v1 + 20);
  Function_2240b34(v1, 1);
  return 1;
}

//----- (0223DE78) --------------------------------------------------------
int __fastcall Function_223de78(int a1)
{
  int v1;

  v1 = a1;
  Function_223fd84(a1);
  Function_208c120(1, 6);
  *(ushort *)(*(uint *)(v1 + 196) + 104) = 1;
  return 24;
}

//----- (0223DE98) --------------------------------------------------------
int __fastcall Function_223de98(int a1)
{
  int v1;

  v1 = a1;
  Function_223fd84(a1);
  Function_208c120(1, 6);
  *(ushort *)(*(uint *)(v1 + 196) + 104) = 3;
  return 24;
}

//----- (0223DEB8) --------------------------------------------------------
int __fastcall Function_223deb8(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  Function_223fd84(a1);
  *(ushort *)(v1 + 1160) = 1;
  v2 = *(uint *)(v1 + 196);
  v3 = v2 + 12 * *(uchar *)(*(uint *)(v1 + 196) + 100);
  if ( Function_207d748(
         *(ushort **)(v3 + 4),
         *(uchar *)(v3 + 13) - 3,
         *(ushort *)(v2 + 102)) == 1 )
  {
    Function_223fff0(v1);
    result = 8;
  }
  else
  {
    Function_223fe94(v1);
    Function_2240cf0(v1, 0);
    result = 7;
  }
  return result;
}

//----- (0223DF0C) --------------------------------------------------------
int __fastcall Function_223df0c(int a1)
{
  int v1;
  int v2;
  int result;
  int v4;

  v1 = a1;
  v2 = *(ushort *)(a1 + 1162);
  if ( Function_223efd0() == 1 )
  {
    Function_223ff44(v1);
    return 7;
  }
  if ( Function_223d1f4((uint **)v1) == 1 )
  {
    Function_223fff0(v1);
    Function_2240d3c(v1, 0);
    *(uchar *)(v1 + 1168) = 1;
    return 8;
  }
  v4 = Function_208c15c((ushort *)(v1 + 1160), *(ushort *)(v1 + 1162));
  switch ( v4 )
  {
    case 0:
      goto LABEL_19;
    case 1:
      Function_223eb08(v1, 18);
      Function_223ff44(v1);
      Function_2005748(0x638u);
      return 7;
    case 2:
      Function_223eb08(v1, -18);
      Function_223ff44(v1);
      Function_2005748(0x638u);
      result = 7;
      break;
    default:
LABEL_19:
      if ( dword_21BF6C4 & 1 )
      {
        Function_223fff0(v1);
        Function_2240d3c(v1, 0);
        Function_2005748(0x5DCu);
        result = 8;
      }
      else if ( dword_21BF6C4 & 2 )
      {
        Function_223ffc0(v1);
        Function_2240d3c(v1, 0);
        Function_2240b34(v1, 1);
        Function_2005748(0x5DCu);
        result = 1;
      }
      else
      {
        result = 7;
      }
      break;
  }
  return result;
}

//----- (0223DFF8) --------------------------------------------------------
int __fastcall Function_223dff8(int a1)
{
  int v1;

  v1 = a1;
  if ( Function_201d724(*(uchar *)(a1 + 1062)) )
    return 8;
  Function_2240120(v1);
  return 9;
}

//----- (0223E01C) --------------------------------------------------------
int __fastcall Function_223e01c(int a1)
{
  int v1;
  int result;
  int v3;
  ushort *v4;
  int v5;
  int v6;

  v1 = a1;
  if ( Function_223ef4c() == 1 )
    return 9;
  if ( Function_223d1f4((uint **)v1) == 1 )
  {
    v3 = Function_2002134(*(uint *)(v1 + 344), 0, 6u);
    *(uchar *)(v1 + 1168) = 1;
  }
  else
  {
    v3 = Function_2002114(*(uint *)(v1 + 344), 6u);
  }
  if ( v3 )
  {
    if ( v3 == -2 )
    {
      Function_200e084(v1 + 100, 0);
      Function_201a9a4(v1 + 20);
      Function_2240b34(v1, 1);
      result = 1;
    }
    else
    {
      if ( v3 == -1 )
      {
        v6 = Function_2001dc8(*(uint *)(v1 + 344));
        if ( v6 == 1 )
        {
          Function_223eb08(v1, 18);
        }
        else if ( v6 == 2 )
        {
          Function_223eb08(v1, -18);
        }
      }
      result = 9;
    }
  }
  else
  {
    v4 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 276), 0x35u);
    if ( *(ushort *)(v1 + 1160) == 1 )
      Function_200b70c(*(uint *)(v1 + 280), 0, *(ushort *)(*(uint *)(v1 + 196) + 102));
    else
      Function_200b77c(*(uint *)(v1 + 280), 0, *(ushort *)(*(uint *)(v1 + 196) + 102));
    Function_200b60c(*(uint *)(v1 + 280), 1u, *(short *)(v1 + 1160), 3, 0, 1);
    Function_200c388(*(uint **)(v1 + 280), *(uint *)(v1 + 1016), (int)v4);
    Function_20237bc_FreeMsg((int)v4, v5);
    Function_201ada4_ClearTextBox(v1 + 100, 15);
    *(uchar *)(v1 + 1062) = Function_22400a0(v1);
    result = 10;
  }
  return result;
}

//----- (0223E158) --------------------------------------------------------
int __fastcall Function_223e158(int a1)
{
  int v1;

  v1 = a1;
  if ( Function_201d724(*(uchar *)(a1 + 1062)) )
    return 10;
  *(uchar *)(v1 + 1145) = 1;
  Function_223dcf8(v1);
  Function_201a9a4(v1 + 100);
  return 11;
}

//----- (0223E18C) --------------------------------------------------------
int __fastcall Function_223e18c(int a1)
{
  int v1;

  v1 = a1;
  if ( Function_201d724(*(uchar *)(a1 + 1062)) || !(dword_21BF6C4 & 3) && !word_21BF6DC )
    return 11;
  *(uchar *)(v1 + 1145) = 0;
  Function_200e084(v1 + 100, 0);
  Function_201a9a4(v1 + 20);
  Function_2240b34(v1, 1);
  return 1;
}

//----- (0223E1E4) --------------------------------------------------------
int __fastcall Function_223e1e4(int a1)
{
  int v1;

  v1 = a1;
  Function_207d404(*(uint *)(a1 + 200), *(ushort *)(*(uint *)(a1 + 196) + 102));
  Function_20013ac(*(uint *)(v1 + 348));
  Function_223fd84(v1);
  Function_201a9a4(v1 + 20);
  Function_2240b34(v1, 1);
  return 1;
}

//----- (0223E220) --------------------------------------------------------
int __fastcall Function_223e220(int a1)
{
  int v1;

  v1 = a1;
  Function_207d404(*(uint *)(a1 + 200), 0);
  Function_20013ac(*(uint *)(v1 + 348));
  Function_223fd84(v1);
  Function_201a9a4(v1 + 20);
  Function_2240b34(v1, 1);
  return 1;
}

//----- (0223E254) --------------------------------------------------------
int __fastcall Function_223e254(int *a1)
{
  int *v1;

  v1 = a1;
  Function_223fd84(a1);
  Function_208c120(1, 6);
  Function_223d7e8(v1, 0);
  *(ushort *)(v1[49] + 104) = 2;
  return 24;
}

//----- (0223E27C) --------------------------------------------------------
int __fastcall Function_223e27c(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;
  ushort *v10;
  int v11;

  v4 = a1;
  Function_223d0fc(a1, a2, a3, a4);
  if ( Function_223ed14(v4) == 1 )
    return 14;
  if ( Function_223c750(v4) == 1 )
    return 2;
  if ( Function_223cd40(v4) == 1 )
    return 2;
  v9 = Function_223c5b8(v4, v6, v7, v8);
  if ( v9 == 1 )
  {
    if ( GetItemData(*(ushort *)(*(uint *)(v4 + 196) + 102), 3u, 6u) )
    {
      Function_201ada4_ClearTextBox(v4 + 100, 15);
      Function_200e060(v4 + 100, 0, 985, 0xCu);
      Function_200b70c(*(uint *)(v4 + 280), 0, *(ushort *)(*(uint *)(v4 + 196) + 102));
      v10 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v4 + 276), 0x2Eu);
      Function_200c388(*(uint **)(v4 + 280), *(uint *)(v4 + 1016), (int)v10);
      Function_20237bc_FreeMsg((int)v10, v11);
      *(uchar *)(v4 + 1062) = Function_22400a0(v4);
      Function_2240b34(v4, 2);
      result = 15;
    }
    else
    {
      *(ushort *)(*(uint *)(v4 + 196) + 104) = 4;
      Function_208c120(1, 6);
      result = 24;
    }
  }
  else if ( v9 == 3 )
  {
    *(ushort *)(*(uint *)(v4 + 196) + 104) = 4;
    result = 24;
  }
  else
  {
    result = 14;
  }
  return result;
}

//----- (0223E36C) --------------------------------------------------------
int __fastcall Function_223e36c(int a1)
{
  int v1;

  v1 = a1;
  if ( Function_201d724(*(uchar *)(a1 + 1062)) || !(dword_21BF6C4 & 3) && !word_21BF6DC )
    return 15;
  Function_200e084(v1 + 100, 0);
  Function_201a9a4(v1 + 20);
  Function_2240b34(v1, 1);
  return 14;
}

//----- (0223E3BC) --------------------------------------------------------
int __fastcall Function_223e3bc(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;
  ushort *v10;
  int v11;
  int v12;
  int v13;
  ushort *v14;
  int v15;
  ushort *v16;
  int v17;

  v4 = a1;
  Function_223d0fc(a1, a2, a3, a4);
  if ( Function_223ed14(v4) == 1 )
    return 16;
  if ( Function_223c750(v4) == 1 )
    return 2;
  if ( Function_223cd40(v4) == 1 )
    return 2;
  v9 = Function_223c5b8(v4, v6, v7, v8);
  if ( v9 == 1 )
  {
    Function_2240248(v4, 0);
    Function_201ada4_ClearTextBox(v4 + 100, 15);
    Function_200e060(v4 + 100, 0, 985, 0xCu);
    Function_200b70c(*(uint *)(v4 + 280), 0, *(ushort *)(*(uint *)(v4 + 196) + 102));
    Function_2240b34(v4, 2);
    *(uint *)(v4 + 1164) = GetItemData(*(ushort *)(*(uint *)(v4 + 196) + 102), 0, 6u);
    if ( !GetItemData(*(ushort *)(*(uint *)(v4 + 196) + 102), 3u, 6u) && *(uint *)(v4 + 1164) )
    {
      *(ushort *)(v4 + 1160) = 1;
      *(uint *)(v4 + 1164) >>= 1;
      v12 = *(uint *)(v4 + 196);
      v13 = v12 + 12 * *(uchar *)(*(uint *)(v4 + 196) + 100);
      if ( Function_207d748(
             *(ushort **)(v13 + 4),
             *(uchar *)(v13 + 13) - 3,
             *(ushort *)(v12 + 102)) == 1 )
      {
        v14 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v4 + 276), 0x4Cu);
        Function_200b60c(*(uint *)(v4 + 280), 0, *(uint *)(v4 + 1164) * *(short *)(v4 + 1160), 6, 0, 1);
        Function_200c388(*(uint **)(v4 + 280), *(uint *)(v4 + 1016), (int)v14);
        Function_20237bc_FreeMsg((int)v14, v15);
        *(uchar *)(v4 + 1062) = Function_22400a0(v4);
        result = 19;
      }
      else
      {
        v16 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v4 + 276), 0x4Bu);
        Function_200c388(*(uint **)(v4 + 280), *(uint *)(v4 + 1016), (int)v16);
        Function_20237bc_FreeMsg((int)v16, v17);
        *(uchar *)(v4 + 1062) = Function_22400a0(v4);
        result = 17;
      }
    }
    else
    {
      v10 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v4 + 276), 0x4Au);
      Function_200c388(*(uint **)(v4 + 280), *(uint *)(v4 + 1016), (int)v10);
      Function_20237bc_FreeMsg((int)v10, v11);
      *(uchar *)(v4 + 1062) = Function_22400a0(v4);
      result = 22;
    }
  }
  else if ( v9 == 3 )
  {
    result = 24;
  }
  else
  {
    result = 16;
  }
  return result;
}

//----- (0223E588) --------------------------------------------------------
int __fastcall Function_223e588(int a1)
{
  int v1;

  v1 = a1;
  if ( Function_201d724(*(uchar *)(a1 + 1062)) )
    return 17;
  if ( *(ushort *)(v1 + 1162) > 0x63u )
    *(ushort *)(v1 + 1162) = 99;
  Function_2240148(v1, 0);
  Function_2240cf0(v1, 1);
  return 18;
}

//----- (0223E5C4) --------------------------------------------------------
int __fastcall Function_223e5c4(int a1)
{
  int v1;
  int v2;
  int result;
  ushort *v4;
  int v5;
  int v6;
  ushort *v7;
  int v8;

  v1 = a1;
  v2 = *(ushort *)(a1 + 1162);
  if ( Function_223efd0() == 1 )
  {
    Function_2240148(v1, 1);
    return 18;
  }
  if ( Function_223d1f4((uint **)v1) == 1 )
  {
    Function_2240d3c(v1, 0);
    Function_200dc9c(v1 + 116, 1);
    Function_201ada4_ClearTextBox(v1 + 100, 15);
    v4 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 276), 0x4Cu);
    Function_200b60c(*(uint *)(v1 + 280), 0, *(uint *)(v1 + 1164) * *(short *)(v1 + 1160), 6, 0, 1);
    Function_200c388(*(uint **)(v1 + 280), *(uint *)(v1 + 1016), (int)v4);
    Function_20237bc_FreeMsg((int)v4, v5);
    *(uchar *)(v1 + 1062) = Function_22400a0(v1);
    *(uchar *)(v1 + 1168) = 1;
    return 19;
  }
  v6 = Function_208c15c((ushort *)(v1 + 1160), *(ushort *)(v1 + 1162));
  switch ( v6 )
  {
    case 0:
      goto LABEL_19;
    case 1:
      Function_223eb08(v1, 18);
      Function_2240148(v1, 1);
      Function_2005748(0x638u);
      return 18;
    case 2:
      Function_223eb08(v1, -18);
      Function_2240148(v1, 1);
      Function_2005748(0x638u);
      result = 18;
      break;
    default:
LABEL_19:
      if ( dword_21BF6C4 & 1 )
      {
        Function_2240d3c(v1, 0);
        Function_200dc9c(v1 + 116, 1);
        Function_201ada4_ClearTextBox(v1 + 100, 15);
        v7 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 276), 0x4Cu);
        Function_200b60c(*(uint *)(v1 + 280), 0, *(uint *)(v1 + 1164) * *(short *)(v1 + 1160), 6, 0, 1);
        Function_200c388(*(uint **)(v1 + 280), *(uint *)(v1 + 1016), (int)v7);
        Function_20237bc_FreeMsg((int)v7, v8);
        *(uchar *)(v1 + 1062) = Function_22400a0(v1);
        Function_2005748(0x5DCu);
        result = 19;
      }
      else if ( dword_21BF6C4 & 2 )
      {
        *(uint *)(v1 + 1164) = 0;
        Function_2240d3c(v1, 0);
        Function_200dc9c(v1 + 132, 1);
        Function_200dc9c(v1 + 116, 1);
        Function_200e084(v1 + 100, 0);
        Function_201a9a4(v1 + 20);
        Function_2240b34(v1, 1);
        Function_2005748(0x5DCu);
        result = 16;
      }
      else
      {
        result = 18;
      }
      break;
  }
  return result;
}

//----- (0223E7A8) --------------------------------------------------------
int __fastcall Function_223e7a8(int a1)
{
  int v1;

  v1 = a1;
  if ( Function_201d724(*(uchar *)(a1 + 1062)) )
    return 19;
  Function_2240120(v1);
  return 20;
}

//----- (0223E7CC) --------------------------------------------------------
int __fastcall Function_223e7cc(int a1)
{
  int v1;
  int result;
  int v3;
  ushort *v4;
  int v5;
  int v6;

  v1 = a1;
  if ( Function_223ef4c() == 1 )
    return 20;
  if ( Function_223d1f4((uint **)v1) == 1 )
  {
    v3 = Function_2002134(*(uint *)(v1 + 344), 0, 6u);
    *(uchar *)(v1 + 1168) = 1;
  }
  else
  {
    v3 = Function_2002114(*(uint *)(v1 + 344), 6u);
  }
  if ( v3 )
  {
    if ( v3 == -2 )
    {
      *(uint *)(v1 + 1164) = 0;
      Function_200dc9c(v1 + 132, 1);
      Function_200e084(v1 + 100, 0);
      Function_201a9a4(v1 + 20);
      Function_2240b34(v1, 1);
      result = 16;
    }
    else
    {
      if ( v3 == -1 )
      {
        v6 = Function_2001dc8(*(uint *)(v1 + 344));
        if ( v6 == 1 )
        {
          Function_223eb08(v1, 18);
        }
        else if ( v6 == 2 )
        {
          Function_223eb08(v1, -18);
        }
      }
      result = 20;
    }
  }
  else
  {
    v4 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 276), 0x4Du);
    if ( *(short *)(v1 + 1160) <= 1 )
      Function_200b70c(*(uint *)(v1 + 280), 0, *(ushort *)(*(uint *)(v1 + 196) + 102));
    else
      Function_200b77c(*(uint *)(v1 + 280), 0, *(ushort *)(*(uint *)(v1 + 196) + 102));
    Function_200b60c(*(uint *)(v1 + 280), 1u, *(uint *)(v1 + 1164) * *(short *)(v1 + 1160), 6, 0, 1);
    Function_200c388(*(uint **)(v1 + 280), *(uint *)(v1 + 1016), (int)v4);
    Function_20237bc_FreeMsg((int)v4, v5);
    Function_201ada4_ClearTextBox(v1 + 100, 15);
    *(uchar *)(v1 + 1062) = Function_22400a0(v1);
    result = 21;
  }
  return result;
}

//----- (0223E920) --------------------------------------------------------
int __fastcall Function_223e920(int a1)
{
  int v1;

  v1 = a1;
  if ( Function_201d724(*(uchar *)(a1 + 1062)) )
    return 21;
  Function_2005748(0x644u);
  GiveMoney(*(uint *)(v1 + 204), *(uint *)(v1 + 1164) * *(short *)(v1 + 1160));
  if ( *(ushort *)(v1 + 1160) == 1 )
  {
    if ( *(uchar *)(*(uint *)(v1 + 196) + 117) != 255 )
      ++*(uchar *)(*(uint *)(v1 + 196) + 117);
  }
  else
  {
    *(uchar *)(*(uint *)(v1 + 196) + 117) = 2;
  }
  Function_2240248(v1, 1);
  *(uchar *)(v1 + 1145) = 1;
  Function_223dcf8(v1);
  Function_201a9a4(v1 + 100);
  return 22;
}

//----- (0223E9B0) --------------------------------------------------------
int __fastcall Function_223e9b0(int a1)
{
  int v1;

  v1 = a1;
  if ( Function_201d724(*(uchar *)(a1 + 1062)) || !(dword_21BF6C4 & 3) && !word_21BF6DC )
    return 22;
  *(uchar *)(v1 + 1145) = 0;
  *(uint *)(v1 + 1164) = 0;
  Function_200dc9c(v1 + 132, 1);
  Function_200e084(v1 + 100, 0);
  Function_201a9a4(v1 + 20);
  Function_2240b34(v1, 1);
  return 16;
}

//----- (0223EA18) --------------------------------------------------------
int __fastcall Function_223ea18(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v4 = a1;
  Function_223d0fc(a1, a2, a3, a4);
  if ( Function_223ed14(v4) == 1 )
    return 23;
  if ( Function_223c750(v4) == 1 )
    return 2;
  if ( Function_223cd40(v4) == 1 )
    return 2;
  v9 = Function_223c5b8(v4, v6, v7, v8);
  if ( v9 == 1 )
  {
    v10 = *(uint *)(v4 + 196);
    if ( *(uchar *)(v10 + 12 * *(uchar *)(*(uint *)(v4 + 196) + 100) + 12)
      || GetItemData(*(ushort *)(v10 + 102), 6u, 6u) == 13 )
    {
      *(ushort *)(*(uint *)(v4 + 196) + 104) = 0;
      Function_208c120(1, 6);
      result = 24;
    }
    else
    {
      Function_207cd34(
        *(uint *)(v4 + 204),
        *(ushort **)(v4 + 1016),
        *(ushort *)(*(uint *)(v4 + 196) + 102),
        -1,
        6u);
      Function_201ada4_ClearTextBox(v4 + 100, 15);
      Function_200e060(v4 + 100, 0, 985, 0xCu);
      *(uchar *)(v4 + 1062) = Function_22400a0(v4);
      result = 12;
    }
  }
  else if ( v9 == 3 )
  {
    *(ushort *)(*(uint *)(v4 + 196) + 104) = 5;
    result = 24;
  }
  else
  {
    result = 23;
  }
  return result;
}

//----- (0223EB08) --------------------------------------------------------
int __fastcall Function_223eb08(int *a1, short a2)
{
  int *v2;
  int v3;
  int result;

  v2 = a1;
  v3 = (short)(Function_2019ffc(*a1, 7) + a2);
  if ( v3 < 360 )
  {
    if ( v3 < 0 )
      LOWORD(v3) = v3 + 360;
  }
  else
  {
    LOWORD(v3) = v3 - 360;
  }
  Function_201c660(*v2, 7, 0, v3);
  result = 1178;
  *((ushort *)v2 + 589) = v3;
  return result;
}

//----- (0223EB54) --------------------------------------------------------
BOOL Function_223eb54()
{
  return Function_20226dc((uchar *)&dword_2240E94[5]) == 1;
}

//----- (0223EB6C) --------------------------------------------------------
BOOL Function_223eb6c()
{
  return Function_2022684((uchar *)&dword_2240E94[8]) == 1;
}

//----- (0223EB84) --------------------------------------------------------
int __fastcall Function_223eb84(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint v5;
  int v6;
  ushort *v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v2 = a1;
  v3 = a2;
  if ( Function_223eb54() == 1 )
  {
    *(uchar *)(v2 + 1170) = 1;
    *(ushort *)(v2 + 1176) = 0;
    *(uint *)(v2 + 1172) = 0;
    *(ushort *)(v2 + 1182) = word_21BF6D8;
    *(ushort *)(v2 + 1184) = word_21BF6DA;
  }
  if ( *(uchar *)(v2 + 1170) != 1 )
    return 0;
  if ( Function_223eb6c() == 1 )
  {
    v4 = Function_201d4cc(
           128 - *(ushort *)(v2 + 1182),
           80 - *(ushort *)(v2 + 1184),
           128 - (ushort)word_21BF6D8,
           80 - (ushort)word_21BF6DA);
    v5 = Function_201d580(80, 2 * v4);
    v6 = (int)s32_div_f(v5 << 8, 182) >> 8;
    v7 = (ushort *)(v2 + 1178);
    *(ushort *)(v2 + 1178) += v6;
    v8 = *(short *)(v2 + 1178);
    if ( v8 >= 0 )
    {
      if ( v8 >= 360 )
        *v7 -= 360;
    }
    else
    {
      *v7 += 360;
    }
    Function_201c660(*(uint *)v2, 7, 0, *(ushort *)(v2 + 1178));
    v9 = s32_div_f(0x1F6u, v3);
    if ( v4 <= 0 )
    {
      if ( v4 < 0 )
      {
        if ( *(short *)(v2 + 1176) <= 0 )
        {
          *(ushort *)(v2 + 1176) += s32_div_f(*(uint *)(v2 + 1172) + v4, v9);
          s32_div_f(*(uint *)(v2 + 1172) + v4, v9);
        }
        else
        {
          *(ushort *)(v2 + 1176) = s32_div_f(v4, v9);
          s32_div_f(v4, v9);
        }
        *(uint *)(v2 + 1172) = v11;
      }
    }
    else
    {
      if ( *(short *)(v2 + 1176) >= 0 )
      {
        *(ushort *)(v2 + 1176) += s32_div_f(*(uint *)(v2 + 1172) + v4, v9);
        s32_div_f(*(uint *)(v2 + 1172) + v4, v9);
      }
      else
      {
        *(ushort *)(v2 + 1176) = s32_div_f(v4, v9);
        s32_div_f(v4, v9);
      }
      *(uint *)(v2 + 1172) = v10;
    }
    *(ushort *)(v2 + 1182) = word_21BF6D8;
    *(ushort *)(v2 + 1184) = word_21BF6DA;
  }
  else
  {
    *(uchar *)(v2 + 1170) = 0;
    *(ushort *)(v2 + 1176) = 0;
  }
  return 1;
}

//----- (0223ED14) --------------------------------------------------------
int __fastcall Function_223ed14(int a1)
{
  int v1;
  int result;
  int v3;
  short v4;
  short v5;

  v1 = a1;
  result = Function_223eb84(a1, 36);
  v3 = *(short *)(v1 + 1176);
  if ( v3 <= 0 )
  {
    if ( v3 < 0 )
    {
      if ( Function_223ed64(v1, 128) == 1 )
        v5 = *(ushort *)(v1 + 1176) + 1;
      else
        v5 = 0;
      *(ushort *)(v1 + 1176) = v5;
      result = 1;
    }
  }
  else
  {
    if ( Function_223ed64(v1, 64) == 1 )
      v4 = *(ushort *)(v1 + 1176) - 1;
    else
      v4 = 0;
    *(ushort *)(v1 + 1176) = v4;
    result = 1;
  }
  return result;
}

//----- (0223ED64) --------------------------------------------------------
int __fastcall Function_223ed64(int a1, short a2, int a3, int a4)
{
  int v4;
  int v5;
  short v7;
  short v8;
  int v9;

  v9 = a4;
  v4 = a1;
  v8 = *(ushort *)(*(uint *)(a1 + 196) + 12 * *(uchar *)(*(uint *)(a1 + 196) + 100) + 10);
  v7 = *(ushort *)(*(uint *)(a1 + 196) + 12 * *(uchar *)(*(uint *)(a1 + 196) + 100) + 8);
  Function_2001408(*(uint *)(a1 + 348), 0, v8, v7, 1u, a2, &v8, &v7);
  v5 = *(uint *)(v4 + 196) + 12 * *(uchar *)(*(uint *)(v4 + 196) + 100);
  if ( v8 == *(ushort *)(v5 + 10) && v7 == *(ushort *)(v5 + 8) )
    return 0;
  Function_200d4c4(*(int **)(v4 + 240), 177, (short)(16 * (v7 - 1) + 24));
  *(ushort *)(*(uint *)(v4 + 196) + 12 * *(uchar *)(*(uint *)(v4 + 196) + 100) + 10) = v8;
  *(ushort *)(*(uint *)(v4 + 196) + 12 * *(uchar *)(*(uint *)(v4 + 196) + 100) + 8) = v7;
  return 1;
}

//----- (0223EE30) --------------------------------------------------------
int __fastcall Function_223ee30(int a1)
{
  int v1;
  int result;
  int v3;
  short v4;
  short v5;

  v1 = a1;
  result = Function_223eb84(a1, 36);
  v3 = *(short *)(v1 + 1176);
  if ( v3 <= 0 )
  {
    if ( v3 < 0 )
    {
      if ( Function_223ee80(v1, 128) == 1 )
        v5 = *(ushort *)(v1 + 1176) + 1;
      else
        v5 = 0;
      *(ushort *)(v1 + 1176) = v5;
      result = 1;
    }
  }
  else
  {
    if ( Function_223ee80(v1, 64) == 1 )
      v4 = *(ushort *)(v1 + 1176) - 1;
    else
      v4 = 0;
    *(ushort *)(v1 + 1176) = v4;
    result = 1;
  }
  return result;
}

//----- (0223EE80) --------------------------------------------------------
int __fastcall Function_223ee80(int a1, short a2, int a3, int a4)
{
  int v4;
  int v5;
  short v7;
  short v8;
  int v9;

  v9 = a4;
  v4 = a1;
  v8 = *(ushort *)(*(uint *)(a1 + 196) + 12 * *(uchar *)(*(uint *)(a1 + 196) + 100) + 10);
  v7 = *(ushort *)(*(uint *)(a1 + 196) + 12 * *(uchar *)(*(uint *)(a1 + 196) + 100) + 8);
  Function_2001408(*(uint *)(a1 + 348), 0, v8, v7, 1u, a2, &v8, &v7);
  v5 = *(uint *)(v4 + 196) + 12 * *(uchar *)(*(uint *)(v4 + 196) + 100);
  if ( v8 == *(ushort *)(v5 + 10) && v7 == *(ushort *)(v5 + 8) )
    return 0;
  Function_200d4c4(*(int **)(v4 + 244), 177, (short)(16 * (v7 - 1) + 16));
  *(ushort *)(*(uint *)(v4 + 196) + 12 * *(uchar *)(*(uint *)(v4 + 196) + 100) + 10) = v8;
  *(ushort *)(*(uint *)(v4 + 196) + 12 * *(uchar *)(*(uint *)(v4 + 196) + 100) + 8) = v7;
  return 1;
}

//----- (0223EF4C) --------------------------------------------------------
int __fastcall Function_223ef4c(int a1)
{
  int v1;
  int result;
  int v3;
  short v4;
  short v5;

  v1 = a1;
  result = Function_223eb84(a1, 18);
  v3 = *(short *)(v1 + 1176);
  if ( v3 <= 0 )
  {
    if ( v3 < 0 )
    {
      if ( Function_223ef9c(v1, 3) == 1 )
        v5 = *(ushort *)(v1 + 1176) + 1;
      else
        v5 = 0;
      *(ushort *)(v1 + 1176) = v5;
      result = 1;
    }
  }
  else
  {
    if ( Function_223ef9c(v1, 2) == 1 )
      v4 = *(ushort *)(v1 + 1176) - 1;
    else
      v4 = 0;
    *(ushort *)(v1 + 1176) = v4;
    result = 1;
  }
  return result;
}

//----- (0223EF9C) --------------------------------------------------------
BOOL __fastcall Function_223ef9c(int a1, uint a2)
{
  int v2;
  uint v3;
  int v4;

  v2 = a1;
  v3 = a2;
  v4 = Function_2001dc4(*(uint *)(a1 + 344));
  Function_2001d44(*(uint *)(v2 + 344), v3);
  return v4 != Function_2001dc4(*(uint *)(v2 + 344));
}

//----- (0223EFD0) --------------------------------------------------------
int __fastcall Function_223efd0(int a1, ushort *a2, int a3)
{
  ushort *v3;
  int v4;
  int v5;
  int result;
  int v7;
  int v8;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  result = Function_223eb84(a1, 18);
  v7 = *(short *)(v4 + 1176);
  v8 = (short)*v3;
  if ( v7 <= 0 )
  {
    if ( v7 < 0 )
    {
      *(ushort *)(v4 + 1176) = v7 + 1;
      if ( (short)--*v3 <= 0 )
        *v3 = v5;
      result = 0;
      if ( (short)*v3 != v8 )
      {
        Function_2005748(0x638u);
        result = 1;
      }
    }
  }
  else
  {
    *(ushort *)(v4 + 1176) = v7 - 1;
    if ( (short)++*v3 > v5 )
      *v3 = 1;
    result = 0;
    if ( (short)*v3 != v8 )
    {
      Function_2005748(0x638u);
      result = 1;
    }
  }
  return result;
}

//----- (0223F040) --------------------------------------------------------
int __fastcall Function_223f040(uint **a1)
{
  uint **v1;

  v1 = a1;
  Function_201a7e8(*a1, (int)(a1 + 1), 2, 14, 0, 0x11u, 0x12u, 3, 1);
  Function_201a7e8(*v1, (int)(v1 + 5), 0, 0, 18, 0x20u, 6u, 3, 307);
  Function_201a7e8(*v1, (int)(v1 + 9), 2, 0, 13, 0x24u, 3u, 3, 499);
  Function_201a7e8(*v1, (int)(v1 + 13), 0, 6, 19, 0xEu, 4u, 11, 607);
  Function_201a7e8(*v1, (int)(v1 + 17), 0, 6, 19, 0xDu, 4u, 11, 607);
  Function_201a7e8(*v1, (int)(v1 + 21), 0, 0, 11, 0xCu, 2u, 13, 663);
  Function_201a7e8(*v1, (int)(v1 + 25), 0, 2, 19, 0x1Bu, 4u, 11, 687);
  Function_201a7e8(*v1, (int)(v1 + 29), 0, 19, 13, 0xCu, 4u, 3, 823);
  Function_201a7e8(*v1, (int)(v1 + 33), 0, 1, 1, 0xAu, 4u, 3, 871);
  Function_201a7e8(*v1, (int)(v1 + 37), 0, 24, 19, 7u, 4u, 3, 903);
  return Function_201a7e8(*v1, (int)(v1 + 41), 0, 1, 12, 0xBu, 4u, 3, 903);
}

//----- (0223F1DC) --------------------------------------------------------
int __fastcall Function_223f1dc(int a1)
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
  while ( v2 < 0xB );
  return result;
}

//----- (0223F1F8) --------------------------------------------------------
ushort *__fastcall Function_223f1f8(int a1)
{
  int v1;
  ushort **v2;
  uint v3;

  v1 = a1;
  v2 = (ushort **)LoadFromMsgNARC(1, 26, 395, 6u);
  v3 = 0;
  do
  {
    *(uint *)(v1 + 4 * v3 + 1028) = Function_200b1ec_CallMsgDecrypt(v2, v3);
    v3 = (v3 + 1) & 0xFFFF;
  }
  while ( v3 < 8 );
  return Function_200b190((ushort *)v2);
}

//----- (0223F238) --------------------------------------------------------
int __fastcall Function_223f238(int a1, int a2)
{
  int v2;
  uint v3;
  int result;

  v2 = a1;
  v3 = 0;
  do
  {
    Function_20237bc_FreeMsg(*(uint *)(v2 + 4 * v3 + 1028), a2);
    result = (v3 + 1) << 16;
    v3 = (v3 + 1) & 0xFFFF;
  }
  while ( v3 < 8 );
  return result;
}

//----- (0223F25C) --------------------------------------------------------
int __fastcall Function_223f25c(int *a1)
{
  int *v1;
  uint v2;
  int result;

  v1 = a1;
  v2 = 0;
  do
  {
    Function_2019cb8(*v1, 2, v2 + 511, (uchar)v2, 0xDu, 1u, 1u, 3u);
    Function_2019cb8(*v1, 2, v2 + 547, (uchar)v2, 0xEu, 1u, 1u, 3u);
    result = (v2 + 1) << 16;
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 < 0xC );
  return result;
}

//----- (0223F2C0) --------------------------------------------------------
int __fastcall Function_223f2c0(int a1, int a2)
{
  int v2;

  v2 = a1;
  Function_2002d7c(0, a2, 0);
  return Function_201d78c(v2 + 36, 0);
}

//----- (0223F2FC) --------------------------------------------------------
int *__fastcall Function_223f2fc(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  Function_201ada4_ClearTextBox(a1 + 36, 0);
  v2 = *(uint *)(v1 + 196);
  v3 = *(uint *)(v1 + 4 * *(uchar *)(v2 + 12 * *(uchar *)(*(uint *)(v1 + 196) + 100) + 12) + 1028);
  v4 = *(uchar *)(v1 + 1068);
  Function_223f2c0(
    v1,
    *(uint *)(v1 + 4 * *(uchar *)(v2 + 12 * *(uchar *)(v1 + 1065) + 12) + 1028));
  Function_223f2c0(v1, v3);
  return Function_201accc(v1 + 36);
}

//----- (0223F390) --------------------------------------------------------
int __fastcall Function_223f390(int a1, uint *a2)
{
  uint *v2;
  int v3;

  v2 = a2;
  v3 = Function_2006cb8_LoadFileInMemory(*(uint *)(a1 + 212), 0x15u, 6u);
  Function_20a7164(v3, v2);
  return v3;
}

//----- (0223F3AC) --------------------------------------------------------
uint __fastcall Function_223f3ac(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  uint v7;
  int v9;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = Function_223f390(a1, &v9);
  if ( v5 == 1 )
    v7 = (32 * *(uchar *)(*(uint *)(v4 + 196) + 12 * v3 + 12) + 16) << 24;
  else
    v7 = *(uchar *)(*(uint *)(v4 + 196) + 12 * v3 + 12) << 29;
  Function_201addc(
    v4 + 84,
    *(uint *)(v9 + 20),
    v7 >> 24,
    0,
    256,
    16,
    *(uchar *)(v4 + 1063) + *(uchar *)(v4 + 1064) * (ushort)v3,
    3u,
    0xAu,
    0xAu);
  Function_201a9a4(v4 + 84);
  return Function_2018238(6u, v6);
}

//----- (0223F438) --------------------------------------------------------
uint __fastcall Function_223f438(int a1, int a2, int a3, int a4)
{
  int v4;
  uint v5;
  int v6;
  uint v7;
  int v9;
  int v10;
  int v11;

  v11 = a4;
  v4 = a1;
  v9 = Function_223f390(a1, &v10);
  Function_201ada4_ClearTextBox(v4 + 84, 0);
  v5 = 0;
  if ( *(uchar *)(v4 + 1060) )
  {
    do
    {
      v6 = *(uint *)(v4 + 196);
      if ( v5 == *(uchar *)(*(uint *)(v4 + 196) + 100) )
        v7 = (32 * *(uchar *)(v6 + 12 * v5 + 12) + 16) << 24;
      else
        v7 = *(uchar *)(v6 + 12 * v5 + 12) << 29;
      Function_201addc(
        v4 + 84,
        *(uint *)(v10 + 20),
        v7 >> 24,
        0,
        256,
        16,
        *(uchar *)(v4 + 1063) + *(uchar *)(v4 + 1064) * (ushort)v5,
        3u,
        0xAu,
        0xAu);
      v5 = (v5 + 1) & 0xFF;
    }
    while ( v5 < *(uchar *)(v4 + 1060) );
  }
  Function_201a9a4(v4 + 84);
  return Function_2018238(6u, v9);
}

//----- (0223F4E8) --------------------------------------------------------
ushort *__fastcall Function_223f4e8(int a1, ushort a2, uint a3)
{
  uint v3;
  int v4;
  int v5;

  v3 = a3;
  v4 = a1;
  v5 = Function_223be5c(a1, a2, 0);
  return Function_200b70c(*(uint *)(v4 + 280), v3, v5);
}

//----- (0223F508) --------------------------------------------------------
ushort *__fastcall Function_223f508(int a1, ushort a2, uint a3)
{
  uint v3;
  int v4;
  int v5;

  v3 = a3;
  v4 = a1;
  v5 = Function_223be5c(a1, a2, 0);
  return Function_200b77c(*(uint *)(v4 + 280), v3, v5);
}

//----- (0223F528) --------------------------------------------------------
uint __fastcall Function_223f528(int a1, uint a2)
{
  int v2;
  uint v3;
  ushort *v4;
  int v5;

  v2 = a1;
  v3 = a2;
  if ( a2 == 0xFFFF )
  {
    v4 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 276), 0x5Eu);
  }
  else
  {
    v4 = (ushort *)Function_2023790(130, 6u);
    Function_207cfc8(v4, v3, 6u);
  }
  Function_201d78c(v2 + 20, 0);
  return Function_20237bc_FreeMsg((int)v4, v5);
}

//----- (0223F584) --------------------------------------------------------
int __fastcall Function_223f584(int a1, uint a2)
{
  int v2;
  int v3;
  ushort *v4;
  int v5;
  ushort *v6;
  int v7;
  ushort *v8;
  int v9;
  ushort *v10;
  int v11;
  ushort *v12;
  int v13;
  int v14;
  ushort *v15;
  int v16;
  int v17;
  uint v18;
  ushort *v19;
  int v20;
  int v21;
  int v22;
  int v23;
  ushort *v24;
  int v25;
  int v26;
  int v27;
  int v29;

  v2 = a1;
  v3 = a1 + 20;
  v29 = Function_207d268(a2);
  v4 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 276), 0x62u);
  Function_201d78c(v3, 0);
  Function_20237bc_FreeMsg((int)v4, v5);
  v6 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 276), 0x56u);
  Function_201d78c(v3, 0);
  Function_20237bc_FreeMsg((int)v6, v7);
  v8 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 276), 0x59u);
  Function_201d78c(v3, 0);
  Function_20237bc_FreeMsg((int)v8, v9);
  v10 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 276), 0x57u);
  Function_201d78c(v3, 0);
  Function_20237bc_FreeMsg((int)v10, v11);
  v12 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 276), 0x58u);
  Function_201d78c(v3, 0);
  Function_20237bc_FreeMsg((int)v12, v13);
  v14 = CalcMovePP(v29, 0);
  v15 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 276), 0x5Au);
  Function_200b60c(*(uint *)(v2 + 280), 0, v14, 2, 1, 1);
  Function_200c388(*(uint **)(v2 + 280), *(uint *)(v2 + 1016), (int)v15);
  Function_20237bc_FreeMsg((int)v15, v16);
  v17 = *(uint *)(v2 + 1016);
  Function_201d78c(v3, 0);
  v18 = (ushort)LoadMoveData(v29, 2u);
  if ( v18 > 1 )
    v19 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 276), 0x5Bu);
  else
    v19 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 276), 0x18u);
  v20 = (int)v19;
  Function_200b60c(*(uint *)(v2 + 280), 0, v18, 3, 0, 1);
  Function_200c388(*(uint **)(v2 + 280), *(uint *)(v2 + 1016), v20);
  Function_20237bc_FreeMsg(v20, v21);
  v22 = *(uint *)(v2 + 1016);
  Function_201d78c(v3, 0);
  v23 = LoadMoveData(v29, 4u) & 0xFFFF;
  if ( v23 )
    v24 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 276), 0x5Bu);
  else
    v24 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 276), 0x18u);
  v25 = (int)v24;
  Function_200b60c(*(uint *)(v2 + 280), 0, v23, 3, 0, 1);
  Function_200c388(*(uint **)(v2 + 280), *(uint *)(v2 + 1016), v25);
  Function_20237bc_FreeMsg(v25, v26);
  v27 = *(uint *)(v2 + 1016);
  return Function_201d78c(v3, 0);
}

//----- (0223F7D4) --------------------------------------------------------
ushort *__fastcall Function_223f7d4(int a1)
{
  int v1;
  ushort *result;

  v1 = a1;
  *(uint *)(a1 + 1020) = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 276), 0x26u);
  result = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 276), 0x25u);
  *(uint *)(v1 + 1024) = result;
  return result;
}

//----- (0223F800) --------------------------------------------------------
uint __fastcall Function_223f800(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  Function_20237bc_FreeMsg(*(uint *)(a1 + 1020), a2);
  return Function_20237bc_FreeMsg(*(uint *)(v2 + 1024), v3);
}

//----- (0223F81C) --------------------------------------------------------
uint __fastcall Function_223f81c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = *(uint *)(a1 + 1020);
  Function_201d78c(a1 + 4, 0);
  v5 = Function_2023790(10, 6u);
  Function_200b60c(*(uint *)(v2 + 280), 0, v3, 3, 0, 1);
  Function_200c388(*(uint **)(v2 + 280), v5, *(uint *)(v2 + 1024));
  Function_2002d7c(0, v5, 0);
  Function_201d78c(v2 + 4, 0);
  return Function_20237bc_FreeMsg(v5, v6);
}

//----- (0223F8D0) --------------------------------------------------------
uint __fastcall Function_223f8d0(int a1, ushort *a2, int a3)
{
  ushort *v3;
  int v4;
  int v5;
  uint v6;
  uint result;

  v3 = a2;
  v4 = a3;
  v5 = a1;
  v6 = *a2;
  if ( v6 >= 0x1A4 )
  {
    Function_200c5bc(*(uint *)(a1 + 272), (v6 - 419) & 0xFFFF, 2, 1, a1 + 4, 0x10u, v4 + 5);
    result = Function_223f9b0(v5, v4);
  }
  else
  {
    Function_200c648(*(uint *)(a1 + 272), 2, (v6 - 327) & 0xFFFF, 2, 2, a1 + 4, 0, v4 + 5);
    result = Function_223f81c(v5, v3[1]);
  }
  return result;
}

//----- (0223F94C) --------------------------------------------------------
uint __fastcall Function_223f94c(int a1, ushort *a2, short a3)
{
  ushort *v3;
  int v4;
  short v5;
  uint v6;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = Function_207d344(*a2);
  Function_200c648(*(uint *)(v4 + 272), 2, v6 + 1, 2, 2, v4 + 4, 0, v5 + 5);
  return Function_223f81c(v4, v3[1]);
}

//----- (0223F994) --------------------------------------------------------
int __fastcall Function_223f994(int a1, uint *a2)
{
  uint *v2;
  int v3;

  v2 = a2;
  v3 = Function_2006cb8_LoadFileInMemory(*(uint *)(a1 + 212), 0x26u, 6u);
  Function_20a7164(v3, v2);
  return v3;
}

//----- (0223F9B0) --------------------------------------------------------
uint __fastcall Function_223f9b0(int a1, ushort a2, int a3, int a4)
{
  ushort v4;
  int v5;
  int v6;
  int v8;
  int v9;

  v9 = a4;
  v4 = a2;
  v5 = a1;
  v6 = Function_223f994(a1, &v8);
  Function_201addc(v5 + 4, *(uint *)(v8 + 20), 40, 0, 64, 16, 0, v4, 0x18u, 0x10u);
  return Function_2018238(6u, v6);
}

//----- (0223F9F0) --------------------------------------------------------
uint __fastcall Function_223f9f0(int a1, ushort a2)
{
  int v2;
  ushort v3;
  ushort *v4;
  int v5;

  v2 = a1;
  v3 = a2;
  v4 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 276), 0x29u);
  Function_201ae78(v2 + 4, 0, 0, v3, 0x88u, 0x10u);
  Function_201d78c(v2 + 4, 0);
  return Function_20237bc_FreeMsg((int)v4, v5);
}

//----- (0223FA44) --------------------------------------------------------
uint __fastcall Function_223fa44(int a1, ushort a2, int a3, int a4)
{
  ushort v4;
  int v5;
  int v6;
  int v8;
  int v9;

  v9 = a4;
  v4 = a2;
  v5 = a1;
  v6 = Function_223f994(a1, &v8);
  Function_201addc(v5 + 4, *(uint *)(v8 + 20), 0, 0, 64, 16, 0x60u, v4, 0x28u, 0x10u);
  return Function_2018238(6u, v6);
}

//----- (0223FA88) --------------------------------------------------------
ushort *__fastcall Function_223fa88(int a1)
{
  int v1;
  ushort *result;

  v1 = a1;
  *(uint *)(a1 + 292) = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 276), 0);
  *(uint *)(v1 + 296) = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 276), 6u);
  *(uint *)(v1 + 300) = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 276), 0x10u);
  *(uint *)(v1 + 304) = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 276), 0x5Fu);
  *(uint *)(v1 + 308) = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 276), 0x60u);
  *(uint *)(v1 + 312) = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 276), 1u);
  *(uint *)(v1 + 316) = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 276), 2u);
  *(uint *)(v1 + 320) = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 276), 0x12u);
  *(uint *)(v1 + 324) = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 276), 3u);
  *(uint *)(v1 + 328) = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 276), 4u);
  *(uint *)(v1 + 332) = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 276), 5u);
  result = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 276), 8u);
  *(uint *)(v1 + 336) = result;
  return result;
}

//----- (0223FB50) --------------------------------------------------------
int __fastcall Function_223fb50(int a1, int a2)
{
  int v2;
  uint v3;
  int result;

  v2 = a1;
  v3 = 0;
  do
  {
    Function_20237bc_FreeMsg(*(uint *)(v2 + 4 * v3 + 292), a2);
    result = (v3 + 1) << 16;
    v3 = (v3 + 1) & 0xFFFF;
  }
  while ( v3 < 0xC );
  return result;
}

//----- (0223FB70) --------------------------------------------------------
int __fastcall Function_223fb70(int a1, int a2, uint a3, int a4)
{
  int v4;
  int v5;
  uint v6;
  int v7;
  int v8;
  ushort *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v15;
  int v16;
  int v17;
  char v18;
  char v19;
  char v20;
  char v21;
  int v22;

  v22 = a4;
  v4 = a1;
  v5 = a2;
  v6 = a3;
  if ( *(uchar *)(*(uint *)(a1 + 196) + 12 * *(uchar *)(*(uint *)(a1 + 196) + 100) + 12) == 4 )
  {
    Function_201a7e8(*(uint **)a1, a1 + 180, 0, 23, 23 - 2 * a3, 8u, 2 * a3, 3, 823);
    v15 = 4;
  }
  else
  {
    Function_201a7e8(*(uint **)a1, a1 + 180, 0, 24, 23 - 2 * a3, 7u, 2 * a3, 3, 823);
    v15 = 3;
  }
  v7 = 0;
  for ( *(uint *)(v4 + 340) = Function_2013a04(v6, 6u); v7 < (int)v6; v7 = (v7 + 1) & 0xFFFF )
  {
    v8 = Function_223d84c(*(uchar *)(v5 + v7));
    Function_2013a6c(
      *(uint **)(v4 + 340),
      *(uint *)(v4 + 4 * *(uchar *)(v5 + v7) + 292),
      v8,
      v4 + 4 * *(uchar *)(v5 + v7));
  }
  v16 = *(uint *)(v4 + 340);
  v17 = v4 + 180;
  v18 = 0;
  v19 = 1;
  v20 = v6;
  v21 &= 0xC0u;
  if ( v6 < 4 )
    v21 &= 0x3Fu;
  else
    v21 = v21 & 0x3F | 0x40;
  *(uint *)(v4 + 344) = Function_2001af4(&v16, 8, 0, 0, 6u, 2);
  if ( *(uchar *)(*(uint *)(v4 + 196) + 12 * *(uchar *)(*(uint *)(v4 + 196) + 100) + 12) == 3 )
  {
    Function_201ada4_ClearTextBox(v4 + 20, 0);
    Function_223f584(v4, *(ushort *)(*(uint *)(v4 + 196) + 102));
    Function_201a9a4(v4 + 20);
    Function_2240d5c(v4, *(ushort *)(*(uint *)(v4 + 196) + 102), 1);
  }
  else
  {
    Function_200e060(v4 + 4 + 16 * v15, 1, 985, 0xCu);
    Function_201ada4_ClearTextBox(v4 + 4 + 16 * v15, 15);
    v9 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v4 + 276), 0x2Au);
    v10 = Function_2023790(56, 6u);
    v11 = *(uint *)(v4 + 196) + 4 + 12 * *(uchar *)(*(uint *)(v4 + 196) + 100);
    Function_223f4e8(v4, *(ushort *)(v11 + 6) + *(ushort *)(v11 + 4) - 1, 0);
    Function_200c388(*(uint **)(v4 + 280), v10, (int)v9);
    Function_201d738_CallInitTextInterpreter(v4 + 4 + 16 * v15, 1);
    Function_20237bc_FreeMsg(v10, v12);
    Function_20237bc_FreeMsg((int)v9, v13);
    Function_201a9a4(v4 + 4 + 16 * v15);
  }
  Function_200dc48(v4 + 180, 1, 1015, 0xEu);
  return Function_201a9a4(v4 + 180);
}

//----- (0223FD84) --------------------------------------------------------
int __fastcall Function_223fd84(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = *(uchar *)(*(uint *)(a1 + 196) + 12 * *(uchar *)(*(uint *)(a1 + 196) + 100) + 12);
  if ( v2 == 4 )
    v3 = 4;
  else
    v3 = 3;
  if ( v2 != 3 )
  {
    v4 = 16 * v3;
    Function_200e084(v1 + 4 + 16 * v3, 1);
    Function_201ad10(v1 + 4 + v4);
  }
  Function_200dc9c(v1 + 180, 1);
  Function_201ad10(v1 + 180);
  Function_2001bc4(*(uint *)(v1 + 344), 0);
  Function_2013a3c(*(int **)(v1 + 340));
  Function_201a8fc(v1 + 180);
  Function_201ada4_ClearTextBox(v1 + 20, 0);
  Function_223f528(v1, *(ushort *)(*(uint *)(v1 + 196) + 102));
  Function_201a9a4(v1 + 20);
  return Function_2240d5c(v1, 0, 0);
}

//----- (0223FE18) --------------------------------------------------------
uint __fastcall Function_223fe18(int a1)
{
  int v1;
  ushort *v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  Function_201ada4_ClearTextBox(a1 + 20, 0);
  v2 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 276), 0x2Du);
  v3 = Function_2023790(130, 6u);
  Function_223f4e8(v1, *(uchar *)(v1 + 1147) - 1, 0);
  Function_200c388(*(uint **)(v1 + 280), v3, (int)v2);
  Function_201d78c(v1 + 20, 0);
  Function_201a9a4(v1 + 20);
  Function_20237bc_FreeMsg(v3, v4);
  return Function_20237bc_FreeMsg((int)v2, v5);
}

//----- (0223FE94) --------------------------------------------------------
uint __fastcall Function_223fe94(int a1)
{
  int v1;
  ushort *v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  Function_200dc48(a1 + 148, 1, 1015, 0xEu);
  Function_223ff44(v1);
  Function_200e060(v1 + 52, 1, 985, 0xCu);
  Function_201ada4_ClearTextBox(v1 + 52, 15);
  v2 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 276), 0x34u);
  v3 = Function_2023790(56, 6u);
  v4 = *(uint *)(v1 + 196) + 4 + 12 * *(uchar *)(*(uint *)(v1 + 196) + 100);
  Function_223f4e8(v1, *(ushort *)(v4 + 6) + *(ushort *)(v4 + 4) - 1, 0);
  Function_200c388(*(uint **)(v1 + 280), v3, (int)v2);
  Function_201d738_CallInitTextInterpreter(v1 + 52, 1);
  Function_201a9a4(v1 + 52);
  Function_20237bc_FreeMsg(v3, v5);
  return Function_20237bc_FreeMsg((int)v2, v6);
}

//----- (0223FF44) --------------------------------------------------------
uint __fastcall Function_223ff44(int a1)
{
  int v1;
  int v2;
  ushort *v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = a1 + 148;
  Function_201ada4_ClearTextBox(a1 + 148, 15);
  v3 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 276), 0x54u);
  Function_200b60c(*(uint *)(v1 + 280), 0, *(short *)(v1 + 1160), 3, 2, 1);
  Function_200c388(*(uint **)(v1 + 280), *(uint *)(v1 + 1016), (int)v3);
  v4 = *(uint *)(v1 + 1016);
  Function_201d738_CallInitTextInterpreter(v2, 0);
  Function_201a9a4(v2);
  return Function_20237bc_FreeMsg((int)v3, v5);
}

//----- (0223FFC0) --------------------------------------------------------
int __fastcall Function_223ffc0(int a1)
{
  int v1;

  v1 = a1;
  Function_200e084(a1 + 52, 1);
  Function_200dc9c(v1 + 148, 1);
  Function_201ad10(v1 + 52);
  Function_201ad10(v1 + 148);
  return Function_201a9a4(v1 + 20);
}

//----- (0223FFF0) --------------------------------------------------------
int __fastcall Function_223fff0(int a1)
{
  int v1;
  ushort *v2;
  int v3;
  int v4;
  int result;

  v1 = a1;
  Function_200e060(a1 + 100, 1, 985, 0xCu);
  Function_201ada4_ClearTextBox(v1 + 100, 15);
  v2 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 276), 0x36u);
  v3 = *(uint *)(v1 + 196) + 4 + 12 * *(uchar *)(*(uint *)(v1 + 196) + 100);
  if ( *(ushort *)(v1 + 1160) == 1 )
    Function_223f4e8(v1, *(ushort *)(v3 + 6) + *(ushort *)(v3 + 4) - 1, 0);
  else
    Function_223f508(v1, *(ushort *)(v3 + 6) + *(ushort *)(v3 + 4) - 1, 0);
  Function_200b60c(*(uint *)(v1 + 280), 1u, *(short *)(v1 + 1160), 3, 0, 1);
  Function_200c388(*(uint **)(v1 + 280), *(uint *)(v1 + 1016), (int)v2);
  Function_20237bc_FreeMsg((int)v2, v4);
  result = Function_22400a0(v1);
  *(uchar *)(v1 + 1062) = result;
  return result;
}

//----- (022400A0) --------------------------------------------------------
int __fastcall Function_22400a0(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  Function_2002ac8(1);
  Function_2002ae4(0);
  Function_2027ac0(*(ushort **)(v1 + 208));
  v2 = *(uint *)(v1 + 1016);
  return Function_201d738_CallInitTextInterpreter(v1 + 100, 1);
}

//----- (022400E0) --------------------------------------------------------
int __fastcall Function_22400e0(char a1)
{
  int result;

  switch ( a1 )
  {
    case 1:
      result = Function_20057e0();
      break;
    case 2:
      result = Function_20061e4();
      break;
    case 3:
      Function_2005748(0x60Du);
      goto LABEL_6;
    case 4:
      result = Function_20057d4(0x60Du);
      break;
    default:
LABEL_6:
      result = 0;
      break;
  }
  return result;
}

//----- (02240120) --------------------------------------------------------
int __fastcall Function_2240120(uint **a1)
{
  uint **v1;
  int result;

  v1 = a1;
  result = Function_2002100(*a1, (uchar *)dword_2241150, 1015, 14, 6u);
  v1[86] = (uint *)result;
  return result;
}

//----- (02240148) --------------------------------------------------------
uint __fastcall Function_2240148(int a1, int a2)
{
  int v2;
  int v3;
  ushort *v4;
  int v5;
  int v6;
  ushort *v7;
  int v8;
  int v9;

  v2 = a1;
  v3 = a1 + 116;
  if ( !a2 )
    Function_200dc48(a1 + 116, 1, 1015, 0xEu);
  Function_201ada4_ClearTextBox(v3, 15);
  v4 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 276), 0x50u);
  Function_200b60c(*(uint *)(v2 + 280), 0, *(short *)(v2 + 1160), 2, 2, 1);
  Function_200c388(*(uint **)(v2 + 280), *(uint *)(v2 + 1016), (int)v4);
  v5 = *(uint *)(v2 + 1016);
  Function_201d738_CallInitTextInterpreter(v3, 0);
  Function_20237bc_FreeMsg((int)v4, v6);
  v7 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 276), 0x51u);
  Function_200b60c(*(uint *)(v2 + 280), 0, *(short *)(v2 + 1160) * *(uint *)(v2 + 1164), 6, 1, 1);
  Function_200c388(*(uint **)(v2 + 280), *(uint *)(v2 + 1016), (int)v7);
  Function_2002d7c(0, *(uint *)(v2 + 1016), 0);
  v8 = *(uint *)(v2 + 1016);
  Function_201d738_CallInitTextInterpreter(v3, 0);
  Function_201a9a4(v3);
  return Function_20237bc_FreeMsg((int)v7, v9);
}

//----- (02240248) --------------------------------------------------------
uint __fastcall Function_2240248(int a1, int a2)
{
  int v2;
  int v3;
  ushort *v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;
  int v9;

  v2 = a1;
  v3 = a1 + 132;
  if ( a2 )
  {
    Function_201ae78(a1 + 132, 15, 0, 16, 0x50u, 0x10u);
  }
  else
  {
    Function_201ada4_ClearTextBox(a1 + 132, 15);
    Function_200dc48(v3, 1, 1015, 0xEu);
    v4 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 276), 0x4Eu);
    Function_201d738_CallInitTextInterpreter(v3, 0);
    Function_20237bc_FreeMsg((int)v4, v5);
  }
  v6 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 276), 0x4Fu);
  v7 = GetMoney(*(uint *)(v2 + 204));
  Function_200b60c(*(uint *)(v2 + 280), 0, v7, 6, 1, 1);
  Function_200c388(*(uint **)(v2 + 280), *(uint *)(v2 + 1016), (int)v6);
  Function_2002d7c(0, *(uint *)(v2 + 1016), 0);
  v8 = *(uint *)(v2 + 1016);
  Function_201d738_CallInitTextInterpreter(v3, 0);
  Function_201a9a4(v3);
  return Function_20237bc_FreeMsg((int)v6, v9);
}

//----- (02240328) --------------------------------------------------------
int __fastcall Function_2240328(int a1)
{
  int v1;
  int v2;
  ushort *v3;
  int v4;
  ushort *v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v1 = a1;
  v2 = a1 + 164;
  Function_201ada4_ClearTextBox(a1 + 164, 15);
  Function_200dc48(v2, 1, 1015, 0xEu);
  v3 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 276), 0x6Cu);
  Function_201d738_CallInitTextInterpreter(v2, 0);
  Function_20237bc_FreeMsg((int)v3, v4);
  v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 276), 0x6Du);
  v6 = LoadVariableAreaAdress_10(**(uint **)(v1 + 196));
  v7 = Function_202ac98(v6);
  Function_200b60c(*(uint *)(v1 + 280), 0, v7, 3, 1, 1);
  Function_200c388(*(uint **)(v1 + 280), *(uint *)(v1 + 1016), (int)v5);
  Function_20237bc_FreeMsg((int)v5, v8);
  Function_2002d7c(0, *(uint *)(v1 + 1016), 0);
  v9 = *(uint *)(v1 + 1016);
  Function_201d738_CallInitTextInterpreter(v2, 0);
  return Function_201a9a4(v2);
}

//----- (022403F4) --------------------------------------------------------
int __fastcall Function_22403f4(int a1)
{
  int v1;

  v1 = a1;
  Function_201ff0c(0x10u, 1);
  Function_201ff74(0x10u, 1);
  Function_201dbec(32, 6u);
  Function_2240424(v1);
  Function_22404c0(v1);
  return Function_2240950(v1);
}

//----- (02240424) --------------------------------------------------------
int __fastcall Function_2240424(int a1, int a2, int a3, int a4)
{
  int v4;
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
  v19 = 10;
  v20 = 6;
  v21 = 9;
  v22 = 9;
  v23 = 0;
  v24 = 0;
  *(uint *)(a1 + 216) = Function_200c6e4(6u);
  *(uint *)(v4 + 220) = Function_200c704(*(uint **)(v4 + 216));
  v11 = 0;
  v12 = 128;
  v13 = 0;
  v14 = 32;
  v15 = 0;
  v16 = 128;
  v17 = 0;
  v18 = 32;
  v6 = 12;
  v7 = 0x20000;
  v8 = 0x4000;
  v9 = 16;
  v10 = 16;
  Function_200c73c(*(uint **)(v4 + 216), &v11, &v6, 32);
  Function_200c7c0(*(int **)(v4 + 216), *(int ***)(v4 + 220), 12);
  return Function_200cb30(*(uint **)(v4 + 216), *(uint *)(v4 + 220), &v19);
}

//----- (022404C0) --------------------------------------------------------
int __fastcall Function_22404c0(int a1)
{
  int v1;
  uint v2;
  uint v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = a1;
  if ( *(uchar *)(a1 + 1061) )
  {
    v2 = 6;
    v3 = 7;
  }
  else
  {
    v2 = 2;
    v3 = 3;
  }
  Function_200cc3c(*(uint **)(a1 + 216), *(uint *)(a1 + 220), *(uint *)(a1 + 212), v2, 0, 1, 49401);
  Function_200cc3c(*(uint **)(v1 + 216), *(uint *)(v1 + 220), *(uint *)(v1 + 212), 0x19u, 0, 1, 49402);
  Function_200cc3c(*(uint **)(v1 + 216), *(uint *)(v1 + 220), *(uint *)(v1 + 212), 0x1Cu, 0, 1, 49403);
  Function_200cc3c(*(uint **)(v1 + 216), *(uint *)(v1 + 220), *(uint *)(v1 + 212), 0x1Fu, 0, 1, 49404);
  Function_200cc3c(*(uint **)(v1 + 216), *(uint *)(v1 + 220), *(uint *)(v1 + 212), 0xAu, 0, 1, 49405);
  Function_200cc3c(*(uint **)(v1 + 216), *(uint *)(v1 + 220), *(uint *)(v1 + 212), 0x24u, 0, 2, 49406);
  Function_200cbdc(*(int **)(v1 + 216), *(uint *)(v1 + 220), 62, 4, 0, 1, 49408);
  v4 = Function_207ce78(0, 1u);
  Function_200cbdc(*(int **)(v1 + 216), *(uint *)(v1 + 220), 16, v4, 0, 1, 49407);
  Function_207c948(*(int **)(v1 + 216), *(uint *)(v1 + 220), 1, 0, 49409);
  Function_207cac4(*(int **)(v1 + 216), *(uint *)(v1 + 220), 1, 0, 49410);
  Function_200cd0c(*(uint **)(v1 + 216), *(uint *)(v1 + 220), *(uint *)(v1 + 212), v3, 0, 1, 1, 49401);
  Function_200cd0c(*(uint **)(v1 + 216), *(uint *)(v1 + 220), *(uint *)(v1 + 212), 0x14u, 0, 2, 1, 49402);
  v5 = Function_207ce78(0, 2u);
  Function_200cc9c(*(int **)(v1 + 216), *(uint *)(v1 + 220), 16, v5, 0, 1, 1, 49404);
  Function_200cc9c(*(int **)(v1 + 216), *(uint *)(v1 + 220), 62, 10, 0, 2, 1, 49405);
  Function_207c97c(*(int **)(v1 + 216), *(uint *)(v1 + 220), 1, 49406);
  Function_200cd0c(*(uint **)(v1 + 216), *(uint *)(v1 + 220), *(uint *)(v1 + 212), 0x25u, 0, 1, 2, 49403);
  Function_200ce24(*(uint **)(v1 + 216), *(uint *)(v1 + 220), *(uint *)(v1 + 212), 1u, 0, 49401);
  Function_200ce24(*(uint **)(v1 + 216), *(uint *)(v1 + 220), *(uint *)(v1 + 212), 0x18u, 0, 49402);
  Function_200ce24(*(uint **)(v1 + 216), *(uint *)(v1 + 220), *(uint *)(v1 + 212), 0x1Bu, 0, 49403);
  Function_200ce24(*(uint **)(v1 + 216), *(uint *)(v1 + 220), *(uint *)(v1 + 212), 0x1Eu, 0, 49404);
  Function_200ce24(*(uint **)(v1 + 216), *(uint *)(v1 + 220), *(uint *)(v1 + 212), 9u, 0, 49405);
  Function_200ce24(*(uint **)(v1 + 216), *(uint *)(v1 + 220), *(uint *)(v1 + 212), 0x23u, 0, 49406);
  v6 = Function_207cf40();
  Function_200ce0c(*(int **)(v1 + 216), *(uint *)(v1 + 220), 16, v6, 0, 49407);
  Function_200ce0c(*(int **)(v1 + 216), *(uint *)(v1 + 220), 62, 5, 0, 49408);
  Function_200ce54(*(uint **)(v1 + 216), *(uint *)(v1 + 220), *(uint *)(v1 + 212), 0, 0, 49401);
  Function_200ce54(*(uint **)(v1 + 216), *(uint *)(v1 + 220), *(uint *)(v1 + 212), 0x17u, 0, 49402);
  Function_200ce54(*(uint **)(v1 + 216), *(uint *)(v1 + 220), *(uint *)(v1 + 212), 0x1Au, 0, 49403);
  Function_200ce54(*(uint **)(v1 + 216), *(uint *)(v1 + 220), *(uint *)(v1 + 212), 0x1Du, 0, 49404);
  Function_200ce54(*(uint **)(v1 + 216), *(uint *)(v1 + 220), *(uint *)(v1 + 212), 8u, 0, 49405);
  Function_200ce54(*(uint **)(v1 + 216), *(uint *)(v1 + 220), *(uint *)(v1 + 212), 0x22u, 0, 49406);
  v7 = Function_207cf44();
  Function_200ce3c(*(int **)(v1 + 216), *(uint *)(v1 + 220), 16, v7, 0, 49407);
  Function_200ce3c(*(int **)(v1 + 216), *(uint *)(v1 + 220), 62, 6, 0, 49408);
  return Function_207c9ec(*(int **)(v1 + 216), *(uint *)(v1 + 220), 49409, 49409);
}

//----- (02240950) --------------------------------------------------------
uint __fastcall Function_2240950(int a1)
{
  int v1;
  short *v2;
  uint v3;
  int v4;
  int v5;
  int v7;
  int v8;
  int v9;

  v1 = a1;
  v2 = L"02";
  v3 = 0;
  v4 = a1;
  do
  {
    ++v3;
    *(uint *)(v4 + 224) = Function_200ce6c(*(uint **)(v1 + 216), *(uint *)(v1 + 220), v2);
    v2 += 26;
    v4 += 4;
  }
  while ( v3 < 0xC );
  Function_200d3f4(*(uint **)(v1 + 244), 0);
  Function_200d3f4(*(uint **)(v1 + 248), 0);
  Function_200d3f4(*(uint **)(v1 + 264), 0);
  Function_200d3f4(*(uint **)(v1 + 268), 0);
  if ( ((*(uchar *)(*(uint *)(v1 + 196) + 101) + 252) & 0xFFu) <= 1 )
    Function_200d3f4(*(uint **)(v1 + 228), 0);
  if ( *(uchar *)(v1 + 1060) == 1 )
  {
    Function_200d3f4(*(uint **)(v1 + 232), 0);
    Function_200d3f4(*(uint **)(v1 + 236), 0);
  }
  Function_2240d3c(v1, 0);
  Function_200d364(
    *(int **)(v1 + 224),
    *(uchar *)(*(uint *)(v1 + 196) + 12 * *(uchar *)(*(uint *)(v1 + 196) + 100) + 12));
  v5 = Function_2240c30(v1, *(uchar *)(*(uint *)(v1 + 196) + 100));
  Function_200d4c4(*(int **)(v1 + 228), v5, 97);
  Function_200d4c4(
    *(int **)(v1 + 240),
    177,
    (short)(16
                   * (*(ushort *)(*(uint *)(v1 + 196) + 12 * *(uchar *)(*(uint *)(v1 + 196) + 100) + 8) - 1)
                   + 24));
  v7 = 4096;
  v8 = 4096;
  v9 = 4096;
  return Function_2021c80(**(uint ***)(v1 + 224), &v7, 2);
}

//----- (02240A88) --------------------------------------------------------
uint __fastcall Function_2240a88(int a1)
{
  int v1;
  uint v2;
  int v3;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    Function_200d0f4(*(uint *)(v3 + 224));
    ++v2;
    v3 += 4;
  }
  while ( v2 < 0xC );
  Function_200d0b0(*(uint *)(v1 + 216), *(int ***)(v1 + 220));
  return Function_200c8d4(*(uint *)(v1 + 216));
}

//----- (02240ABC) --------------------------------------------------------
uint __fastcall Function_2240abc(int a1)
{
  int v1;
  uint v2;
  uint result;

  v1 = a1;
  v2 = 0;
  do
  {
    result = Function_200d330(*(int **)(v1 + 224));
    ++v2;
    v1 += 4;
  }
  while ( v2 < 0xC );
  return result;
}

//----- (02240AD8) --------------------------------------------------------
int __fastcall Function_2240ad8(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = a1;
  v4 = Function_207ce78(a2, 1u);
  Function_200d948(*(int **)(v3 + 216), *(uint *)(v3 + 220), 16, v4, 0, 49407);
  v5 = Function_207ce78(v2, 2u);
  return Function_200d97c(*(int **)(v3 + 216), *(uint *)(v3 + 220), 16, v5, 0, 49404);
}

//----- (02240B34) --------------------------------------------------------
int __fastcall Function_2240b34(int a1, char a2)
{
  int v2;
  char v3;

  v2 = a1;
  v3 = a2;
  Function_200d41c(*(int **)(a1 + 240), a2);
  return Function_200d41c(*(int **)(v2 + 228), v3);
}

//----- (02240B50) --------------------------------------------------------
BOOL __fastcall Function_2240b50(int a1)
{
  return *(uchar *)(a1 + 1108) == 0;
}

//----- (02240B68) --------------------------------------------------------
int __fastcall Function_2240b68(int a1)
{
  *(uchar *)(a1 + 1111) = 0;
  *(uchar *)(a1 + 1108) = 1;
  return Function_2240c48();
}

//----- (02240B80) --------------------------------------------------------
int __fastcall Function_2240b80(int result)
{
  if ( *(uchar *)(result + 1108) )
  {
    if ( *(uchar *)(result + 1108) == 1 )
      result = Function_2240b98();
  }
  return result;
}

//----- (02240B98) --------------------------------------------------------
int __fastcall Function_2240b98(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int *v6;
  int v7;
  int result;
  int v9;
  int v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a1;
  v5 = **(uint **)(a1 + 228);
  Function_2021d28();
  v7 = v6[1];
  v9 = *v6;
  v10 = v7;
  v11 = v6[2];
  if ( *(uchar *)(v4 + 1109) )
    v9 += *(uint *)(v4 + 4 * *(uchar *)(v4 + 1111) + 1112);
  else
    v9 -= *(uint *)(v4 + 4 * *(uchar *)(v4 + 1111) + 1112);
  Function_2021c50(**(uint ***)(v4 + 228), &v9);
  result = (uchar)++*(uchar *)(v4 + 1111);
  if ( result == 8 )
  {
    v9 = Function_2240c30(v4, *(uchar *)(v4 + 1144)) << 12;
    Function_2021c50(**(uint ***)(v4 + 228), &v9);
    result = 1108;
    *(uchar *)(v4 + 1108) = 0;
  }
  return result;
}

//----- (02240C30) --------------------------------------------------------
int __fastcall Function_2240c30(int a1, int a2)
{
  return (*(uchar *)(a1 + 1063) + a2 * *(uchar *)(a1 + 1064) + 6) & 0xFF;
}

//----- (02240C48) --------------------------------------------------------
int __fastcall Function_2240c48(int a1)
{
  int v1;
  int v2;
  int *v3;
  int v4;
  int v5;
  uint v6;
  char v7;
  int v8;
  int result;
  int v10;

  v1 = a1;
  v2 = **(uint **)(a1 + 228);
  Function_2021d28();
  v10 = *v3;
  v4 = v3[2];
  v5 = Function_2240c30(v1, *(uchar *)(v1 + 1144)) << 12;
  if ( v5 >= v10 )
  {
    v6 = s32_div_f(v5 - v10, 100);
    v7 = 1;
  }
  else
  {
    v6 = s32_div_f(v10 - v5, 100);
    v7 = 0;
  }
  *(uchar *)(v1 + 1109) = v7;
  *(uint *)(v1 + 1112) = 0;
  *(uint *)(v1 + 1116) = 40 * v6;
  *(uint *)(v1 + 1120) = 25 * v6;
  *(uint *)(v1 + 1124) = 15 * v6;
  *(uint *)(v1 + 1128) = 10 * v6;
  *(uint *)(v1 + 1132) = 7 * v6;
  v8 = 3 * v6;
  result = 1136;
  *(uint *)(v1 + 1136) = v8;
  *(uint *)(v1 + 1140) = 0;
  return result;
}

//----- (02240CF0) --------------------------------------------------------
int __fastcall Function_2240cf0(int a1, int a2)
{
  int v2;

  v2 = a1;
  if ( a2 )
  {
    Function_200d4c4(*(int **)(a1 + 256), 162, 108);
    Function_200d4c4(*(int **)(v2 + 260), 162, 132);
  }
  else
  {
    Function_200d4c4(*(int **)(a1 + 256), 220, 156);
    Function_200d4c4(*(int **)(v2 + 260), 220, 180);
  }
  return Function_2240d3c(v2, 1);
}

//----- (02240D3C) --------------------------------------------------------
uint __fastcall Function_2240d3c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_200d3f4(*(uint **)(a1 + 256), a2);
  return Function_200d3f4(*(uint **)(v2 + 260), v3);
}

//----- (02240D5C) --------------------------------------------------------
uint __fastcall Function_2240d5c(int a1, uint a2, int a3)
{
  int v3;
  int v4;
  uint v5;
  uint result;
  int v7;
  uint v8;
  uint v9;
  int v10;
  int v11;
  char v12;
  int v13;
  int v14;
  char v15;

  v3 = a1;
  v4 = a3;
  v5 = a2;
  Function_200d3f4(*(uint **)(a1 + 264), a3);
  result = Function_200d3f4(*(uint **)(v3 + 268), v4);
  if ( v4 )
  {
    v7 = Function_207d268(v5);
    v8 = (ushort)LoadMoveData(v7, 3u);
    v9 = (ushort)LoadMoveData(v7, 1u);
    v10 = Function_207c944();
    v11 = Function_207c908(v8);
    Function_200d948(*(int **)(v3 + 216), *(uint *)(v3 + 220), v10, v11, 1, 49409);
    v12 = Function_207c92c(v8);
    Function_200d41c(*(int **)(v3 + 264), v12 + 6);
    v13 = Function_207cac0();
    v14 = Function_207ca90(v9);
    Function_200d948(*(int **)(v3 + 216), *(uint *)(v3 + 220), v13, v14, 1, 49410);
    v15 = Function_207caa8(v9);
    result = Function_200d41c(*(int **)(v3 + 268), v15 + 6);
  }
  return result;
}

//----- (02240E24) --------------------------------------------------------
int __fastcall Function_2240e24(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_200d3f4(*(uint **)(a1 + 248), 1);
  Function_200d4c4(*(int **)(v3 + 248), v4, v5);
  Function_200d3cc(*(int **)(v3 + 248), 0);
  return Function_200d364(*(int **)(v3 + 248), 0);
}

//----- (02240E5C) --------------------------------------------------------
uint __fastcall Function_2240e5c(int a1)
{
  int v1;
  uint result;

  v1 = a1;
  result = Function_200d408(*(int **)(a1 + 248));
  if ( result == 1 )
  {
    Function_200d34c(*(int **)(v1 + 248), 4096);
    result = Function_200d3e0(*(int **)(v1 + 248));
    if ( result == 2 )
      result = Function_200d3f4(*(uint **)(v1 + 248), 0);
  }
  return result;
}

