//----- (021D0D80) --------------------------------------------------------
int __fastcall TitleScreenInit(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  SetBrightnessWithValue(0, 0);
  SetBrightnessWithValue(1, 0);
  REG_BLDCNT_SUB = 0;
  REG_BLDCNT = 0;
  SetMainLoopFunctionCall(0, 0);
  Function_20177bc(0, 0);
  Function_201ff00();
  Function_201ff68();
  REG_DISPCNT &= 0xFFFFE0FF;
  REG_DISPCNT_SUB &= 0xFFFFE0FF;
  Function_2017dd4(4, 8);
  Function_2017fc8(3, 30, 0x40000);
  v2 = MallocSomeDataAndStorePtrInOverlayData1c(v1, 1284, 0x1Eu);
  Call_FillMemWithValue((int *)v2, 0, 0x504u);
  *(uint *)v2 = 30;
  *(ushort *)(v2 + 1260) = 0;
  *(uint *)(v2 + 1276) = 0;
  Function_21d1184();
  Function_21d17b4(v2);
  Function_21d11cc(v2);
  SetMainLoopFunctionCall((int)TitleScreenInitMainFunction, v2);
  Function_201ffd0();
  return 1;
}

//----- (021D0E3C) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (021D10FC) --------------------------------------------------------
int __fastcall TitleScreenEnd(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  v3 = *(uint *)v2;
  v4 = *(ushort *)(v2 + 1260);
  SetMainLoopFunctionCall(0, 0);
  Function_21d11fc(v2);
  Function_21d1908(v2);
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(v3);
  if ( v4 != 1 )
  {
    if ( v4 == 2 )
    {
      SetOverlayJumpTableDataToLoad(-1, (int)&Unknown_20f8a48);
      return 1;
    }
    if ( v4 == 3 )
    {
      Function_2004234(0);
      SetOverlayJumpTableDataToLoad(77, (int)&off_21D788C);
      return 1;
    }
  }
  SetOverlayJumpTableDataToLoad(-1, (int)&Unknown_20f8ab4);
  return 1;
}

//----- (021D1178) --------------------------------------------------------
int __fastcall TitleScreenInitMainFunction(int a1)
{
  return Function_201c2b8(*(uint *)(a1 + 4));
}

//----- (021D1184) --------------------------------------------------------
char *Function_21d1184()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_21D7404;
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

//----- (021D11A4) --------------------------------------------------------
BOOL Function_21d11a4()
{
  return (dword_21BF6C4 & 1) == 1 || (dword_21BF6C4 & 8) == 8 || (dword_21BF6C4 & 4) == 4;
}

//----- (021D11CC) --------------------------------------------------------
int __fastcall Function_21d11cc(uint *a1)
{
  int v1;
  int result;

  a1[2] = Function_2024220(*a1, 0, 1, 0, 4, 0);
  v1 = REG_BG0CNT & 0xFFFC;
  result = v1 | 1;
  REG_BG0CNT = v1 | 1;
  return result;
}

//----- (021D11FC) --------------------------------------------------------
uint __fastcall Function_21d11fc(int a1)
{
  return Function_20242c4(*(uint *)(a1 + 8));
}

//----- (021D1208) --------------------------------------------------------
int __fastcall Function_21d1208(int a1, int a2, int a3, uint a4)
{
  uint v4;
  int v5;
  int v6;
  int v7;
  uchar *v8;
  uchar *v9;
  int v10;
  uint *v11;
  uint *v12;
  uint *v13;
  int v15;
  int v16;
  int v17;
  int v18;

  v4 = a4;
  v5 = a1;
  v6 = a2;
  v7 = a3;
  Function_20182cc((uint *)(a1 + 112), a4, 4);
  *(uint *)(v5 + 92) = LoadFromNARC_2(48, v6, v4);
  *(uint *)(v5 + 96) = LoadFromNARC_2(48, v7, v4);
  *(uint *)(v5 + 100) = LoadFromNARC_2(48, 2, v4);
  Function_201ca3c((uint *)(v5 + 4), (int *)(v5 + 88), (int *)(v5 + 92));
  v8 = (uchar *)Function_20b3c5c(*(uint *)(v5 + 96), 0);
  v9 = (uchar *)Function_20b3c5c(*(uint *)(v5 + 100), 0);
  *(uint *)(v5 + 104) = Function_20b2cb4((int (***)(void))(v5 + 112), v8, *(uint *)(v5 + 88));
  *(uint *)(v5 + 108) = Function_20b2cb4((int (***)(void))(v5 + 112), v9, *(uint *)(v5 + 88));
  v10 = Function_20b3c1c_GetTexOffsets(*(uint *)(v5 + 92));
  Function_20ae4f0(*(uint *)(v5 + 104), v8, *(uint *)(v5 + 88), v10);
  Function_20ae4f0(*(uint *)(v5 + 108), v9, *(uint *)(v5 + 88), v10);
  Function_20ae77c(v5 + 4, *(uint *)(v5 + 104));
  Function_20ae77c(v5 + 4, *(uint *)(v5 + 108));
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v15 = 0;
  v11 = (uint *)(v5 + 128);
  *v11 = 0;
  v11[1] = 0;
  *(uint *)(v5 + 136) = v18;
  v12 = (uint *)(v5 + 140);
  *v12 = 4096;
  v12[1] = 4096;
  v12[2] = 4096;
  v13 = (uint *)(v5 + 152);
  *v13 = 0;
  v13[1] = 0;
  *(uint *)(v5 + 160) = v15;
  *(uint *)(v5 + 172) = 0;
  return Function_21d1300(v5, v4);
}

//----- (021D1300) --------------------------------------------------------
int __fastcall Function_21d1300(int a1, uint a2, int a3, int a4)
{
  int v4;
  int v5;
  int *v6;
  int result;

  v4 = a1;
  v5 = a2;
  v6 = LoadFromNARC_8(48, a2, a3, a4);
  Function_20170d8((int *)(v4 + 336), (int)v6, 0x13u, v5);
  Function_20b2d8c(*(uint *)(v4 + 344), 1, 2031616);
  Function_20b2d8c(*(uint *)(v4 + 344), 1, 1056964608);
  Function_2017164((int *)(v4 + 296), v4 + 336, (int)v6, 0x15u, v5, (int (***)(void))(v4 + 112));
  Function_2017240(v4 + 296, 0);
  Function_2017164((int *)(v4 + 316), v4 + 336, (int)v6, 0x14u, v5, (int (***)(void))(v4 + 112));
  Function_2017240(v4 + 316, 0);
  Function_2017258((int *)(v4 + 176), v4 + 336);
  Function_2017350((uint *)(v4 + 176), 0, 0, 0);
  Function_201736c((uint *)(v4 + 176), 4096, 4096, 4096);
  Function_2017348(v4 + 176, 1);
  Function_201727c(v4 + 176, v4 + 296);
  Function_201727c(v4 + 176, v4 + 316);
  Function_20170d8((int *)(v4 + 512), (int)v6, 0x10u, v5);
  Function_20b2d8c(*(uint *)(v4 + 520), 1, 2031616);
  Function_20b2d8c(*(uint *)(v4 + 520), 1, 1056964608);
  Function_2017164((int *)(v4 + 472), v4 + 512, (int)v6, 0x12u, v5, (int (***)(void))(v4 + 112));
  Function_2017240(v4 + 472, 0);
  Function_2017164((int *)(v4 + 492), v4 + 512, (int)v6, 0x11u, v5, (int (***)(void))(v4 + 112));
  Function_2017240(v4 + 492, 0);
  Function_2017258((int *)(v4 + 352), v4 + 512);
  Function_2017350((uint *)(v4 + 352), 0, 0, 0);
  Function_201736c((uint *)(v4 + 352), 4096, 4096, 4096);
  Function_2017348(v4 + 352, 1);
  Function_201727c(v4 + 352, v4 + 472);
  Function_201727c(v4 + 352, v4 + 492);
  Call_FS_CloseFile(v6);
  *(uint *)(v4 + 532) = -302;
  *(uint *)(v4 + 536) = 58243;
  *(uint *)(v4 + 540) = 4096;
  result = 30720;
  *(uint *)(v4 + 544) = 30720;
  return result;
}

//----- (021D14E4) --------------------------------------------------------
uint __fastcall Function_21d14e4(int *a1)
{
  int *v1;
  int v2;
  int v3;

  v1 = a1;
  Function_21d1514();
  v2 = v1[26];
  Function_20b2cd8((int)(v1 + 28));
  v3 = v1[27];
  Function_20b2cd8((int)(v1 + 28));
  free(v1[24]);
  free(v1[25]);
  return free(v1[23]);
}

//----- (021D1514) --------------------------------------------------------
int __fastcall Function_21d1514(int *a1)
{
  int *v1;

  v1 = a1;
  Function_2017110(a1 + 84);
  Function_20171a0(v1 + 74, (int)(v1 + 28));
  Function_20171a0(v1 + 79, (int)(v1 + 28));
  Function_2017110(v1 + 128);
  Function_20171a0(v1 + 118, (int)(v1 + 28));
  return Function_20171a0(v1 + 123, (int)(v1 + 28));
}

//----- (021D1568) --------------------------------------------------------
int __fastcall Function_21d1568(uint *a1, int a2, int a3, int a4)
{
  int *v4;
  uint *v5;
  int v6;
  char *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  ushort v12;
  uint v13;
  long long v14;
  int v15;
  int v16;
  int result;
  int v18;
  uint *v19;
  uint *v20;
  int v21[9];
  int v22;

  v22 = a4;
  v4 = dword_21D73E0;
  v5 = a1;
  v6 = a2;
  v7 = (char *)v21;
  v8 = 4;
  do
  {
    v9 = *v4;
    v10 = v4[1];
    v4 += 2;
    *(uint *)v7 = v9;
    *((uint *)v7 + 1) = v10;
    v7 += 8;
    --v8;
  }
  while ( v8 );
  *(uint *)v7 = *v4;
  if ( v5[168] || v5[169] != 1 )
  {
    Function_2020854(0, *(int **)(v6 + 164));
    Function_20203d4(*(uint *)(v6 + 164));
  }
  else
  {
    Function_21d25ac(*(uint *)(v6 + 168));
    Function_2020854(0, *(int **)(v6 + 168));
    Function_20203d4(*(uint *)(v6 + 168));
  }
  v5[171] += 2;
  s32_div_f(v5[171], 360);
  v5[171] = v11;
  v12 = s32_div_f(0xFFFF * v5[171], 360);
  v13 = Function_201d250(v12);
  LODWORD(v14) = dflt(v13);
  v15 = dmul(v14, 4599075939470750515LL);
  *(uint *)(v6 + 132) -= dfix(v15, v16);
  result = *(uint *)v6;
  if ( *(uint *)v6 )
  {
    if ( result == 1 )
    {
      Call_G3X_Reset();
      Function_20241bc(1, 1);
      result = 0;
      *(uint *)v6 = 0;
      return result;
    }
    if ( result == 2 )
    {
      Call_G3X_Reset();
      Function_20203ec();
      Function_201e268(v21, (uint *)(v6 + 152));
      if ( v5[168] )
      {
        DC_FlushAll();
        Function_201ca74((uint *)(v6 + 4), (int *)(v6 + 128), v21, (int *)(v6 + 140));
      }
      else if ( v5[169] == 1 )
      {
        Function_21d1704(v6);
      }
      v18 = *(uint *)(v6 + 172);
      if ( v18 )
      {
        if ( v18 != 1 )
        {
          if ( v18 != 2 )
            return Function_20241bc(1, 1);
LABEL_23:
          **(uint **)(v6 + 104) += 4096;
          **(uint **)(v6 + 108) += 4096;
          v19 = *(uint **)(v6 + 104);
          if ( *v19 == *(ushort *)(v19[2] + 4) << 12 )
            *v19 = 0;
          v20 = *(uint **)(v6 + 108);
          if ( *v20 == *(ushort *)(v20[2] + 4) << 12 )
            *v20 = 0;
          return Function_20241bc(1, 1);
        }
        if ( **(uint **)(v6 + 104) )
          goto LABEL_23;
        *(uint *)(v6 + 172) = 0;
      }
      else
      {
        **(uint **)(v6 + 104) = 0;
        **(uint **)(v6 + 108) = 0;
      }
      return Function_20241bc(1, 1);
    }
  }
  return result;
}

//----- (021D1704) --------------------------------------------------------
int *__fastcall Function_21d1704(int a1, int a2, int a3, int a4)
{
  int v4;
  int v6;
  int v7;

  v7 = a4;
  v4 = a1;
  if ( *(uchar *)(a1 + 548) == 1 && Function_2017204(a1 + 296, 4096) == 1 )
    *(uchar *)(v4 + 548) = 2;
  if ( *(uchar *)(v4 + 549) == 1 && Function_2017204(v4 + 316, 4096) == 1 )
    *(uchar *)(v4 + 549) = 2;
  Function_20171cc(v4 + 472, 4096);
  Function_20171cc(v4 + 492, 4096);
  Function_20b275c(17, 0, 0);
  Function_2017294(v4 + 352);
  if ( *(uchar *)(v4 + 548) == 2 && *(uchar *)(v4 + 549) == 2 )
    Function_2017348(v4 + 176, 0);
  else
    Function_2017294(v4 + 176);
  v6 = 1;
  return Function_20b275c(18, (int)&v6, 1);
}

//----- (021D17B4) --------------------------------------------------------
uint __fastcall Function_21d17b4(uint *a1, int a2, int a3, int a4)
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

  v52 = a4;
  v4 = a1;
  a1[1] = Function_2018340(*a1);
  v48 = 1;
  v49 = 0;
  v50 = 0;
  v51 = 1;
  SetGraphicsModes(&v48);
  v41 = 0;
  v42 = 0;
  v43 = 2048;
  v44 = 0;
  v45 = 17104897;
  v46 = 0;
  v47 = 0;
  Function_20183c4((uint *)v4[1], 4u, &v41, 0);
  v34 = 0;
  v35 = 0;
  v36 = 4096;
  v37 = 0;
  v38 = 33947907;
  v39 = 0;
  v40 = 0;
  Function_20183c4((uint *)v4[1], 5u, &v34, 0);
  v27 = 0;
  v28 = 0;
  v29 = 4096;
  v30 = 0;
  v31 = 67567875;
  v32 = 1;
  v33 = 0;
  Function_20183c4((uint *)v4[1], 6u, &v27, 0);
  v20 = 0;
  v21 = 0;
  v22 = 2048;
  v23 = 0;
  v24 = 17235969;
  v25 = 0;
  v26 = 0;
  Function_20183c4((uint *)v4[1], 1u, &v20, 0);
  v13 = 0;
  v14 = 0;
  v15 = 2048;
  v16 = 0;
  v17 = 262145;
  v18 = 768;
  v19 = 0;
  Function_20183c4((uint *)v4[1], 3u, &v13, 0);
  v6 = 0;
  v7 = 0;
  v8 = 2048;
  v9 = 0;
  v10 = 262145;
  v11 = 768;
  v12 = 0;
  Function_20183c4((uint *)v4[1], 7u, &v6, 0);
  Function_201ff0c(1u, 0);
  Function_201ff0c(2u, 0);
  Function_201ff0c(4u, 0);
  Function_201ff0c(8u, 0);
  Function_201ff74(1u, 0);
  Function_201ff74(2u, 0);
  Function_201ff74(4u, 0);
  Function_201ff74(8u, 0);
  Function_201975c(0, 0);
  return Function_201975c(4u, 0);
}

//----- (021D1908) --------------------------------------------------------
uint __fastcall Function_21d1908(int a1)
{
  int v1;

  v1 = a1;
  Function_201ff0c(1u, 0);
  Function_201ff0c(2u, 0);
  Function_201ff0c(4u, 0);
  Function_201ff0c(8u, 0);
  Function_201ff74(1u, 0);
  Function_201ff74(2u, 0);
  Function_201ff74(4u, 0);
  Function_201ff74(8u, 0);
  Function_2019044(*(uint *)(v1 + 4), 4);
  Function_2019044(*(uint *)(v1 + 4), 5);
  Function_2019044(*(uint *)(v1 + 4), 6);
  Function_2019044(*(uint *)(v1 + 4), 1);
  Function_2019044(*(uint *)(v1 + 4), 3);
  Function_2019044(*(uint *)(v1 + 4), 7);
  return free(*(uint *)(v1 + 4));
}

//----- (021D1984) --------------------------------------------------------
int __fastcall Function_21d1984(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  short v6;
  short v7;
  short v8;
  short v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v13 = a4;
  v6 = 0;
  v4 = a2;
  v7 = 0;
  v10 = 0;
  v8 = 0;
  v11 = 0;
  v9 = 0;
  v12 = 0;
  result = *(uint *)(a1 + 672);
  if ( result != 1 )
  {
    if ( *(uint *)(a2 + 528) < 0x3Cu )
    {
      v12 = -2560;
      Function_2020990(&v10, *(uint *)(a2 + 168));
    }
    if ( *(uint *)(v4 + 528) == 75 )
    {
      *(uchar *)(v4 + 548) = 1;
      *(uchar *)(v4 + 549) = 1;
    }
    if ( *(uint *)(v4 + 528) >= 0xFAu )
    {
      Function_2020a94(&v6, *(ushort **)(v4 + 168));
      v6 = *(uint *)(v4 + 536);
      Function_20209d4(&v6, *(ushort **)(v4 + 168));
      *(uint *)(v4 + 536) += *(uint *)(v4 + 532);
      if ( *(uint *)(v4 + 536) < 49169 )
      {
        *(uint *)(v4 + 536) = 49169;
        Function_202094c(-(short)(*(uint *)(v4 + 544) >> 8), *(uint *)(v4 + 168));
        *(uint *)(v4 + 544) -= 640;
        if ( *(uint *)(v4 + 544) < 4096 )
          *(uint *)(v4 + 544) = 4096;
      }
    }
    result = 528;
    ++*(uint *)(v4 + 528);
  }
  return result;
}

//----- (021D1A60) --------------------------------------------------------
int __fastcall Function_21d1a60(int a1, int a2, uint a3, int a4)
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
  v4 = a1;
  v5 = a2;
  v6 = a3;
  Function_21d24c8();
  LoadTitleScreenData(v5, v6, v4);
  Function_21d1208(v4 + 4, 1, 0, v6);
  GFX_CONTROL = (GFX_CONTROL & 0xCFFF | 0x10) & 0xCFFF | 8;
  *(uint *)(v4 + 576) = *(uint *)(v4 + 628);
  *(uint *)(v4 + 580) = *(uint *)(v4 + 632);
  *(uint *)(v4 + 584) = *(uint *)(v4 + 636);
  *(uint *)(v4 + 588) = *(uint *)(v4 + 604);
  *(uint *)(v4 + 592) = *(uint *)(v4 + 608);
  *(uint *)(v4 + 596) = *(uint *)(v4 + 612);
  *(uint *)(v4 + 168) = Function_20203ac(v6);
  Function_2020784((uint *)(v4 + 576), (uint *)(v4 + 588), 2912, 0, 0, *(uint *)(v4 + 168));
  Function_20206bc(0, 1228800, *(uint *)(v4 + 168));
  Function_2020854(0, *(int **)(v4 + 168));
  Function_20203d4(*(uint *)(v4 + 168));
  v11 = 0;
  v12 = 0;
  v13 = 0;
  *(uint *)(v4 + 172) = Function_20203ac(v6);
  Function_20206d0(&v11, 655360, dword_21D72C8, 4004, 0, 0, *(uint *)(v4 + 172));
  Function_20206bc(0, 1228800, *(uint *)(v4 + 172));
  v8 = 0;
  v9 = 0;
  v10 = 153600;
  Function_2020990(&v8, *(uint *)(v4 + 172));
  Function_20203d4(*(uint *)(v4 + 172));
  Function_20af51c(0, *(short *)(v4 + 652), *(short *)(v4 + 654), *(short *)(v4 + 656));
  Function_20af558(0, 0x7FFF);
  Function_20af51c(1, *(short *)(v4 + 658), *(short *)(v4 + 660), *(short *)(v4 + 662));
  Function_20af558(1, 0x7FFF);
  GFX_CONTROL = GFX_CONTROL & 0xCFFF | 0x10;
  byte_21BF6E1 = 1;
  Function_201ffe8();
  *(uint *)(v4 + 4) = 2;
  return 1;
}

//----- (021D1C10) --------------------------------------------------------
uint __fastcall Function_21d1c10(uint *a1)
{
  uint *v1;
  uint result;

  v1 = a1;
  v1[144] += s32_div_f(a1[160] - a1[157], 60);
  v1[145] += s32_div_f(v1[161] - v1[158], 60);
  v1[146] += s32_div_f(v1[162] - v1[159], 60);
  v1[147] += s32_div_f(v1[154] - v1[151], 60);
  v1[148] += s32_div_f(v1[155] - v1[152], 60);
  result = v1[149] + s32_div_f(v1[156] - v1[153], 60);
  v1[149] = result;
  return result;
}

//----- (021D1CC0) --------------------------------------------------------
uint __fastcall Function_21d1cc0(int a1, int a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v14 = a4;
  v4 = a2;
  v5 = (uint *)a1;
  Function_2019044(a1, 5);
  v7 = 0;
  v8 = 0;
  v9 = 2048;
  v10 = 0;
  v11 = 393217;
  v12 = 256;
  v13 = 0;
  Function_20183c4(v5, 5u, &v7, 0);
  LoadFromNARC_RGCN(48, 23, v5, 5u, 0, 0, 0, v4);
  LoadFromNARC_RCSN(48, 25, v5, 5u, 0, 0, 0, v4);
  REG_BLDCNT = 0;
  G2x_SetBlendAlpha_((int *)&REG_BLDCNT_SUB, 2, 8, 10, 10);
  return Function_201ff74(2u, 1);
}

//----- (021D1D48) --------------------------------------------------------
uint __fastcall Function_21d1d48(int a1, int a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v14 = a4;
  v4 = a2;
  v5 = (uint *)a1;
  Function_2019044(a1, 4);
  v7 = 0;
  v8 = 0;
  v9 = 4096;
  v10 = 0;
  v11 = 67436803;
  v12 = 513;
  v13 = 0;
  Function_20183c4(v5, 4u, &v7, 0);
  LoadFromNARC_RCSN(48, 22, v5, 4u, 0, 0, 0, v4);
  REG_BG0CNT_SUB &= 0xFFFCu;
  REG_BG1CNT_SUB = REG_BG1CNT_SUB & 0xFFFC | 1;
  REG_BG2CNT_SUB &= 0xFFFCu;
  REG_BG3CNT_SUB = REG_BG3CNT_SUB & 0xFFFC | 2;
  Function_2019184((int)v5, 6u, 0, 0);
  Function_2019184((int)v5, 6u, 3u, 1);
  G2x_SetBlendAlpha_((int *)&REG_BLDCNT_SUB, 3, 12, 26, 10);
  return Function_201ff74(1u, 1);
}

//----- (021D1DF0) --------------------------------------------------------
int __fastcall Function_21d1df0(int a1, int a2, int a3)
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
  int v12;
  int v13;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = 0;
  if ( Function_21d11a4() == 1 )
  {
    *(uint *)(v3 + 672) = 1;
    *(uint *)(v3 + 676) = 0;
    Function_200f2c0();
    InitChosenBlendTables(3);
    result = 1;
  }
  else
  {
    switch ( (uchar)*(uint *)v3 )
    {
      case 0u:
        Function_201ff0c(1u, 1);
        *(ushort *)(v3 + 666) = 0;
        *(ushort *)(v3 + 556) = 267;
        Function_200f174(0, 1, 1, 0, 15, 3, v5);
        *(uint *)v3 = 1;
        break;
      case 1u:
        if ( Function_200f2ac() == 1 )
        {
          if ( *(ushort *)(v3 + 556) )
          {
            --*(ushort *)(v3 + 556);
          }
          else
          {
            *(ushort *)(v3 + 556) = 2;
            *(uint *)v3 = 2;
          }
        }
        break;
      case 2u:
        if ( Function_200ac1c(1) == 1 && Function_200ac1c(2) == 1 )
        {
          if ( *(ushort *)(v3 + 556) )
          {
            Function_200aae0(10, 16, 0, 7, 1);
            Function_200aae0(10, 16, 0, 39, 2);
            *(ushort *)(v3 + 666) = 2;
            --*(ushort *)(v3 + 556);
            *(uint *)v3 = 3;
          }
          else
          {
            *(ushort *)(v3 + 556) = 0;
            *(uint *)v3 = 4;
          }
        }
        break;
      case 3u:
        if ( Function_200ac1c(1) == 1 && Function_200ac1c(2) == 1 )
        {
          Function_200aae0(10, 0, 16, 7, 1);
          Function_200aae0(10, 0, 16, 39, 2);
          *(ushort *)(v3 + 666) = 3;
          *(uint *)v3 = 2;
        }
        break;
      case 4u:
        if ( *(ushort *)(v3 + 556) )
        {
          --*(ushort *)(v3 + 556);
        }
        else
        {
          *(ushort *)(v3 + 556) = 1;
          *(uint *)v3 = 5;
        }
        break;
      case 5u:
        if ( Function_200f2ac() == 1 )
        {
          if ( *(ushort *)(v3 + 556) )
          {
            Function_200f174(0, 0, 0, 0x7FFF, 5, 2, v5);
            *(ushort *)(v3 + 666) = 2;
            --*(ushort *)(v3 + 556);
            *(uint *)v3 = 6;
          }
          else
          {
            *(ushort *)(v3 + 556) = 10;
            *(uint *)v3 = 8;
            *(uint *)(v3 + 672) = 1;
            SetBrightnessWithValue(0, 0);
          }
        }
        break;
      case 6u:
        if ( Function_200f2ac() == 1 )
        {
          *(uint *)(v3 + 676) = 0;
          Function_201ff74(2u, 1);
          *(uint *)(v3 + 176) = 2;
          Function_200f174(3u, 1, 1, 0x7FFF, 16, 3, v5);
          *(uint *)v3 = 5;
        }
        break;
      case 7u:
        Function_200f174(3u, 1, 1, 0, 48, 1, v5);
        Function_201ff0c(8u, 1);
        *(uint *)v3 = 9;
        *(uint *)(v3 + 680) = 0;
        break;
      case 8u:
        if ( *(ushort *)(v3 + 556) )
          --*(ushort *)(v3 + 556);
        else
          *(uint *)v3 = 7;
        break;
      case 9u:
        Function_21d1c10((uint *)v3);
        Function_2020acc((uint *)(v3 + 576), *(uint **)(v3 + 168));
        Function_2020adc((uint *)(v3 + 588), *(uint **)(v3 + 168));
        if ( ++*(uint *)(v3 + 680) >= 60 )
        {
          Function_201ff74(4u, 1);
          Function_21d1cc0(v4, v5, v8, v9);
          Function_200f174(4u, 1, 1, 0x7FFF, 16, 3, v5);
          Function_201ff0c(2u, 1);
          Function_201ff74(8u, 1);
          *(ushort *)(v3 + 556) = 90;
          *(uint *)v3 = 10;
        }
        break;
      case 0xAu:
        if ( *(ushort *)(v3 + 556) )
        {
          --*(ushort *)(v3 + 556);
        }
        else if ( Function_200f2ac() == 1 )
        {
          v6 = 1;
        }
        break;
      default:
        break;
    }
    Function_21d2438(v3);
    Function_21d1984(v3, v3 + 4, v10, v11);
    Function_21d1568((uint *)v3, v3 + 4, v12, v13);
    result = v6;
  }
  return result;
}

//----- (021D20E4) --------------------------------------------------------
int __fastcall Function_21d20e4(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v4 = a1;
  v5 = *a1;
  v6 = a2;
  v7 = a3;
  v8 = 0;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      if ( v4[150] == 1 )
      {
        if ( *((ushort *)v4 + 278) )
        {
          if ( *((ushort *)v4 + 278) == 16 )
            Function_201ff74(1u, 0);
        }
        else
        {
          Function_201ff74(1u, 1);
        }
      }
      v8 = 1;
      a3 = (ushort)++*((ushort *)v4 + 278);
      *((ushort *)v4 + 278) &= 0x1Fu;
    }
  }
  else
  {
    Function_2020acc(v4 + 160, (uint *)v4[42]);
    Function_2020adc(v4 + 154, (uint *)v4[42]);
    Function_201ff0c(1u, 1);
    Function_201ff0c(8u, 1);
    Function_201ff74(8u, 1);
    Function_201ff74(4u, 1);
    Function_201ff0c(2u, 1);
    Function_200f338(0);
    Function_200f338(1);
    v4[44] = 2;
    Function_20af558(1, 0x7FFF);
    Function_21d1cc0(v6, v7, v9, v10);
    *((ushort *)v4 + 278) = 0;
    *v4 = 1;
  }
  Function_21d1568(v4, (int)(v4 + 1), a3, a4);
  return v8;
}

//----- (021D21C0) --------------------------------------------------------
int __fastcall Function_21d21c0(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Call_free5(*(uint *)(a1 + 168));
  Call_free5(*(uint *)(v3 + 172));
  Function_21d14e4((int *)(v3 + 4));
  Function_21d2428(v4, v5, v3);
  REG_BLDCNT = 0;
  GFX_CONTROL &= 0xCFDFu;
  byte_21BF6E1 = 0;
  Function_201ffe8();
  return 1;
}

//----- (021D2214) --------------------------------------------------------
uint __fastcall LoadTitleScreenData(uint *a1, int a2, int a3)
{
  uint *v3;
  uint v4;
  int v5;
  ushort **v6;
  ushort *v7;
  int v8;
  short v10;
  short v11;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  LoadFromNARC_RGCN(48, 23, a1, 7u, 0, 0, 0, a2);
  LoadFromNARC_RGCN(48, 26, v3, 3u, 0, 0, 0, v4);
  LoadFromNARC_RCSN(48, 24, v3, 7u, 0, 0, 0, v4);
  LoadFromNARC_RCSN(48, 27, v3, 3u, 0, 0, 0, v4);
  Call_LoadFromNARC_RLCN(48, 7, 4u, 0, 0, v4);
  Call_LoadFromNARC_RLCN(48, 6, 0, 0, 0, v4);
  LoadFromNARC_RGCN(48, 12, v3, 6u, 0, 0, 0, v4);
  Call_LoadFromNARC_RLCN(48, 11, 6u, 0x4000, 0, v4);
  LoadFromNARC_RCSN(48, 22, v3, 6u, 0, 0, 0, v4);
  LoadFromNARC_RGCN(128, 14, v3, 5u, 0, 0, 0, v4);
  Call_LoadFromNARC_RLCN(128, 13, 6u, 0x2000, 0, v4);
  LoadFromNARC_RCSN(128, 12, v3, 5u, 0, 0, 0, v4);
  LoadFromNARC_RGCN(48, 5, v3, 1u, 0, 0, 0, v4);
  LoadFromNARC_RCSN(48, 3, v3, 1u, 0, 0, 0, v4);
  Call_LoadFromNARC_RLCN(48, 4, 0, 32, 96, v4);
  Function_201975c(0, 0);
  Function_201975c(4u, 0);
  Function_2019690(4u, 32, 0, v4);
  v6 = (ushort **)LoadFromMsgNARC(1, 26, 609, v4);
  v7 = (ushort *)Function_2023790(64, v4);
  Function_201a8d4(v3, v5 + 560, (uchar *)dword_21D72D0);
  Function_201ae78(v5 + 560, 0, 0, 0, 0xE0u, 0x10u);
  Function_200b1b8_CallMsgDecrypt(v6, 0, v7);
  Function_2002eec(0, (int)v7, 1, 8 * *(uchar *)(v5 + 567));
  Function_201d7e0(v5 + 560, 0);
  Function_20237bc_FreeMsg((int)v7, v8);
  Function_200b190((ushort *)v6);
  v11 = 21;
  v10 = 21;
  Function_201972c(4u, (int)&v11, 2, 66);
  return Function_201972c(4u, (int)&v10, 2, 68);
}

//----- (021D2428) --------------------------------------------------------
uint __fastcall Function_21d2428(int a1, int a2, int a3)
{
  return Function_201a8fc(a3 + 560);
}

//----- (021D2438) --------------------------------------------------------
int __fastcall Function_21d2438(int a1)
{
  switch ( (uchar)*(ushort *)(a1 + 666) )
  {
    case 0u:
      *(ushort *)(a1 + 664) = 5;
      *(ushort *)(a1 + 666) = 1;
      break;
    case 2u:
      *(ushort *)(a1 + 664) += 2;
      if ( *(ushort *)(a1 + 664) >= 0x1Fu )
      {
        *(ushort *)(a1 + 664) = 31;
        *(ushort *)(a1 + 666) = 1;
      }
      break;
    case 3u:
      *(ushort *)(a1 + 664) -= 2;
      if ( *(ushort *)(a1 + 664) <= 5u )
      {
        *(ushort *)(a1 + 664) = 5;
        *(ushort *)(a1 + 666) = 1;
      }
      break;
    default:
      return Function_20af558(
               1,
               (*(ushort *)(a1 + 664) << 10) & 0x7C00 | 32 * *(ushort *)(a1 + 664) & 0x3E0 | *(ushort *)(a1 + 664) & 0x1F);
  }
  return Function_20af558(
           1,
           (*(ushort *)(a1 + 664) << 10) & 0x7C00 | 32 * *(ushort *)(a1 + 664) & 0x3E0 | *(ushort *)(a1 + 664) & 0x1F);
}

//----- (021D24C8) --------------------------------------------------------
int __fastcall Function_21d24c8(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;
  int v5;
  char v6;

  v1 = a1;
  *(uint *)(a1 + 604) = 0;
  *(uint *)(a1 + 608) = 786432;
  *(uint *)(a1 + 612) = 2457600;
  *(uint *)(a1 + 616) = -262144;
  *(uint *)(a1 + 620) = 786432;
  *(uint *)(a1 + 624) = 1982464;
  *(uint *)(a1 + 628) = 0;
  *(uint *)(a1 + 632) = 409600;
  *(uint *)(a1 + 636) = -73728;
  *(uint *)(a1 + 640) = 0;
  *(uint *)(a1 + 644) = 409600;
  *(uint *)(a1 + 648) = -73728;
  *(ushort *)(a1 + 652) = 2267;
  *(ushort *)(a1 + 654) = -1953;
  *(ushort *)(a1 + 656) = -2797;
  *(ushort *)(a1 + 658) = -2267;
  *(ushort *)(a1 + 660) = 1953;
  *(ushort *)(a1 + 662) = -2797;
  *(uint *)(a1 + 668) = 12288;
  VEC_Subtract((uint *)(v1 + 640), (uint *)(v1 + 616), &v6);
  VEC_Normalize((int *)&v6, &v3);
  *(ushort *)(v1 + 652) = v3;
  result = 656;
  *(ushort *)(v1 + 654) = v4;
  *(ushort *)(v1 + 656) = v5;
  return result;
}

//----- (021D25AC) --------------------------------------------------------
void Function_21d25ac()
{
  ;
}

//----- (021D25B0) --------------------------------------------------------
char *Function_21d25b0()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_21D76F4;
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

//----- (021D25D0) --------------------------------------------------------
char *Function_21d25d0()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_21D771C;
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

//----- (021D25F0) --------------------------------------------------------
char *Function_21d25f0()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_21D7744;
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

//----- (021D2610) --------------------------------------------------------
uint __fastcall Function_21d2610(uint *a1, int a2, int a3, int a4)
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

  v52 = a4;
  v4 = a1;
  a1[3] = Function_2018340(*a1);
  v48 = 1;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  SetGraphicsModes(&v48);
  v41 = 0;
  v42 = 0;
  v43 = 2048;
  v44 = 0;
  v45 = 16777217;
  v46 = 0;
  v47 = 0;
  Function_20183c4((uint *)v4[3], 1u, &v41, 0);
  v34 = 0;
  v35 = 0;
  v36 = 2048;
  v37 = 0;
  v38 = 33619969;
  v39 = 256;
  v40 = 0;
  Function_20183c4((uint *)v4[3], 2u, &v34, 0);
  v27 = 0;
  v28 = 0;
  v29 = 2048;
  v30 = 0;
  v31 = 33685505;
  v32 = 512;
  v33 = 0;
  Function_20183c4((uint *)v4[3], 3u, &v27, 0);
  v20 = 0;
  v21 = 0;
  v22 = 2048;
  v23 = 0;
  v24 = 33685505;
  v25 = 0;
  v26 = 0;
  Function_20183c4((uint *)v4[3], 5u, &v20, 0);
  v13 = 0;
  v14 = 0;
  v15 = 2048;
  v16 = 0;
  v17 = 16777217;
  v18 = 256;
  v19 = 0;
  Function_20183c4((uint *)v4[3], 6u, &v13, 0);
  v6 = 0;
  v7 = 0;
  v8 = 2048;
  v9 = 0;
  v10 = 16842753;
  v11 = 512;
  v12 = 0;
  Function_20183c4((uint *)v4[3], 7u, &v6, 0);
  Function_201975c(0, 0);
  return Function_201975c(4u, 0);
}

//----- (021D2724) --------------------------------------------------------
uint __fastcall Function_21d2724(uint *a1)
{
  uint *v1;
  int *v2;
  char *v3;
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
  char v40;
  char v41;
  char v42;

  v1 = a1;
  a1[3] = Function_2018340(*a1);
  v36 = 1;
  v37 = 0;
  v38 = 0;
  v39 = 1;
  SetGraphicsModes(&v36);
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 67371012;
  v34 = 768;
  v35 = 0;
  Function_20183c4((uint *)v1[3], 1u, &v29, 0);
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 101187842;
  v27 = 768;
  v28 = 0;
  Function_20183c4((uint *)v1[3], 2u, &v22, 0);
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 33554690;
  v20 = 768;
  v21 = 0;
  Function_20183c4((uint *)v1[3], 3u, &v15, 0);
  v8 = 0;
  v9 = 0;
  v10 = 4096;
  v11 = 0;
  v12 = 84672769;
  v13 = 0;
  v14 = 0;
  Function_20183c4((uint *)v1[3], 4u, &v8, 0);
  v2 = dword_21D7838;
  v3 = &v40;
  v4 = 10;
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
  *(uint *)v3 = *v2;
  Function_20183c4((uint *)v1[3], 5u, (int *)&v40, 0);
  Function_20183c4((uint *)v1[3], 6u, (int *)&v41, 0);
  Function_20183c4((uint *)v1[3], 7u, (int *)&v42, 0);
  Function_201975c(1u, 0);
  return Function_201975c(4u, 0);
}

//----- (021D2828) --------------------------------------------------------
int __fastcall Function_21d2828(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  char *v6;
  int v7;
  int v8;
  int v9;
  int result;
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
  char v32;
  char v33;
  char v34;
  int v35;

  v35 = a4;
  v4 = a1;
  Function_21d361c();
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 33554436;
  v30 = 768;
  v31 = 0;
  Function_20183c4(*(uint **)(v4 + 12), 3u, &v25, 0);
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 50593796;
  v23 = 768;
  v24 = 0;
  Function_20183c4(*(uint **)(v4 + 12), 1u, &v18, 0);
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 67633156;
  v16 = 768;
  v17 = 0;
  Function_20183c4(*(uint **)(v4 + 12), 2u, &v11, 0);
  v5 = dword_21D77E4;
  v6 = &v32;
  v7 = 10;
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
  Function_20183c4(*(uint **)(v4 + 12), 5u, (int *)&v32, 0);
  Function_20183c4(*(uint **)(v4 + 12), 6u, (int *)&v33, 0);
  Function_20183c4(*(uint **)(v4 + 12), 7u, (int *)&v34, 0);
  Function_201975c(1u, 0);
  Function_201975c(4u, 0);
  Function_201ff74(1u, 0);
  result = 654;
  *(uchar *)(v4 + 654) = 1;
  return result;
}

//----- (021D2900) --------------------------------------------------------
int __fastcall Function_21d2900(int a1, int a2, int a3, int a4)
{
  int v4;
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
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;

  v27 = a4;
  v4 = a1;
  Function_21d35b8();
  Function_21d2828(v4, v5, v6, v7);
  v23 = 1;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  SetGraphicsModes(&v23);
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 84672514;
  v21 = 0;
  v22 = 0;
  Function_20183c4(*(uint **)(v4 + 12), 0, &v16, 0);
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 84672514;
  v14 = 0;
  v15 = 0;
  Function_20183c4(*(uint **)(v4 + 12), 4u, &v9, 0);
  Function_2019184(*(uint *)(v4 + 12), 0, 0, 0);
  Function_2019184(*(uint *)(v4 + 12), 0, 3u, 0);
  Function_2019184(*(uint *)(v4 + 12), 4u, 0, 0);
  Function_2019184(*(uint *)(v4 + 12), 4u, 3u, 0);
  Function_201ff0c(1u, 0);
  Function_201ff74(1u, 0);
  Function_201ff0c(2u, 1);
  Function_201ff74(2u, 1);
  Function_201ff0c(4u, 1);
  Function_201ff74(4u, 1);
  Function_201ff0c(8u, 1);
  Function_201ff74(8u, 1);
  Function_201ff0c(0x10u, 1);
  Function_201ff74(0x10u, 1);
  result = 654;
  *(uchar *)(v4 + 654) = 2;
  return result;
}

//----- (021D2A00) --------------------------------------------------------
uint __fastcall Function_21d2a00(uint *a1)
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

  v1 = a1;
  a1[3] = Function_2018340(*a1);
  v10 = 1;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  SetGraphicsModes(&v10);
  v3 = 0;
  v4 = 0;
  v5 = 4096;
  v6 = 0;
  v7 = 33554434;
  v8 = 256;
  v9 = 0;
  Function_20183c4((uint *)v1[3], 2u, &v3, 0);
  return Function_201975c(2u, 0);
}

//----- (021D2A58) --------------------------------------------------------
int __fastcall Function_21d2a58(uint *a1)
{
  a1[4] = Function_2024220(*a1, 0, 1, 0, 4, (void (*)(void))Function_21d2aa0);
  Function_20a5a2c();
  return Function_20a5a3c();
}

//----- (021D2AA0) --------------------------------------------------------
int *__fastcall Function_21d2aa0(int a1, int a2, int a3)
{
  short v3;
  int v4;
  int *result;

  Function_20b2628(a1, a2, a3);
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 1;
  GFX_CONTROL &= 0xCFFDu;
  GFX_CONTROL = GFX_CONTROL & 0xCFFF | 0x10;
  GFX_CONTROL &= 0xCFFBu;
  v3 = GFX_CONTROL & 0xCFFF;
  v4 = (GFX_CONTROL & 0xCFFF | 8) & 0xCFFF;
  GFX_CONTROL = v4 | 0x20;
  SetEdgeTable((int)dword_21D74EC, v4 | 0x20, v4, v3);
  G3X_SetFog(0, 0, 0, 0);
  G3X_SetClearColor(0, 0, 0x7FFF, 63, 0);
  result = &GFX_VIEWPORT;
  GFX_VIEWPORT = -1073807360;
  return result;
}

//----- (021D2B30) --------------------------------------------------------
int Function_21d2b30()
{
  return Function_200a858();
}

//----- (021D2B38) --------------------------------------------------------
int __fastcall Function_21d2b38(int a1)
{
  int v1;
  int v2;
  int v3;
  short v4;
  uint v5;
  short v6;
  int v7;
  int v9;

  v9 = a1;
  v1 = a1 + 52;
  if ( *(uchar *)(a1 + 655) == 1 )
  {
    byte_21BF6E1 = 1;
    Function_201ffe8();
    Function_201ff74(1u, 1);
    Function_201ff0c(4u, 0);
    Function_201ff0c(8u, 0);
    Function_201ff74(0x10u, 1);
    *(uchar *)(v1 + 603) = 0;
    Function_2020854(0, *(int **)(v1 + 40));
    Function_20203d4(*(uint *)(v1 + 40));
  }
  v2 = *(uint *)(v9 + 12);
  if ( v2 )
    Function_201c2b8(v2);
  v3 = 0;
  do
  {
    if ( *(uchar *)(v1 + 583) & 1 )
      Function_2019120((uchar)v3, 1);
    if ( *(uchar *)(v1 + 584) & 1 )
      Function_2019120((uchar)v3, 0);
    ++v3;
    *(uchar *)(v1 + 583) = (int)*(uchar *)(v1 + 583) >> 1;
    *(uchar *)(v1 + 584) = (int)*(uchar *)(v1 + 584) >> 1;
  }
  while ( v3 < 8 );
  v4 = *(ushort *)(v1 + 590);
  v5 = *(short *)(v1 + 592) << 24;
  WIN0_X1 = (*(ushort *)(v1 + 586) << 8) & 0xFF00 | *(ushort *)(v1 + 588) & 0xFF;
  WIN0_Y1 = (v5 >> 24) | (v4 << 8) & 0xFF00;
  v6 = *(ushort *)(v1 + 600);
  v7 = (*(short *)(v1 + 598) << 8) & 0xFF00;
  SUB_WIN0_X1 = *(ushort *)(v1 + 596) & 0xFF | (*(ushort *)(v1 + 594) << 8) & 0xFF00;
  SUB_WIN0_Y1 = (uchar)v6 | (ushort)v7;
  if ( *(uchar *)(v1 + 581) == 1 )
  {
    Function_21d2c80();
    *(uchar *)(v1 + 581) = 0;
  }
  if ( *(uchar *)(v1 + 582) == 1 )
  {
    Function_21d2ce8();
    *(uchar *)(v1 + 582) = 0;
  }
  Function_201dcac();
  Function_200a858();
  return Function_21d6e40(*(uint *)(v9 + 80));
}

//----- (021D2C80) --------------------------------------------------------
short *Function_21d2c80()
{
  short *result;

  REG_DISPCNT = REG_DISPCNT & 0xFFFF1FFF | 0x2000;
  WIN_IN = WIN_IN & 0xFFC0 | 0x3F;
  WIN_OUT = WIN_OUT & 0xFFC0 | 0x31;
  REG_DISPCNT_SUB = ((uint)&REG_DISPCNT_SUB >> 13) | REG_DISPCNT_SUB & 0xFFFF1FFF;
  result = &SUB_WIN_OUT;
  SUB_WIN_IN = SUB_WIN_IN & 0xFFC0 | 0x3F;
  SUB_WIN_OUT = SUB_WIN_OUT & 0xFFC0 | 0x31;
  return result;
}

//----- (021D2CE8) --------------------------------------------------------
uint Function_21d2ce8()
{
  uint result;

  REG_DISPCNT &= 0xFFFF1FFF;
  result = REG_DISPCNT_SUB & 0xFFFF1FFF;
  REG_DISPCNT_SUB &= 0xFFFF1FFF;
  return result;
}

//----- (021D2D08) --------------------------------------------------------
int __fastcall Function_21d2d08(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  InitBlendTables();
  SetBrightnessWithValue(0, 0x7FFF);
  SetBrightnessWithValue(1, 0x7FFF);
  SetMainLoopFunctionCall(0, 0);
  Function_20177bc(0, 0);
  Function_201ff00();
  Function_201ff68();
  Function_2017dd4(4, 8);
  Function_2017fc8(3, 76, 655360);
  v2 = MallocSomeDataAndStorePtrInOverlayData1c(v1, 688, 0x4Cu);
  Call_FillMemWithValue((int *)v2, 0, 0x2B0u);
  *(uint *)v2 = 76;
  *(uint *)(v2 + 8) = 0;
  *(uchar *)(v2 + 684) = 0;
  byte_21BF6E1 = 0;
  Function_201ffe8();
  *(uint *)(v2 + 20) = GetPRNGSeed();
  SetPRNGSeed(0);
  return 1;
}

//----- (021D2D94) --------------------------------------------------------
int __fastcall Function_21d2d94(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int result;

  v2 = a2;
  v3 = LoadOverlayData1c(a1);
  if ( *(uchar *)(v3 + 684) && (dword_21BF6C4 & 1 || dword_21BF6C4 & 8) )
  {
    *(uint *)(v3 + 8) = 1;
    dword_21BF6E8 = 0;
    SetBrightnessWithValue(0, 0);
    SetBrightnessWithValue(1, 0);
  }
  switch ( (uchar)*v2 )
  {
    case 0u:
      *(uint *)(v3 + 48) = v3 + 684;
      ++*v2;
      goto LABEL_16;
    case 1u:
      if ( Function_21d2e9c(v3) )
        ++*v2;
      goto LABEL_16;
    case 2u:
      if ( Function_21d33f0(v3) )
        ++*v2;
      goto LABEL_16;
    case 3u:
      if ( Function_21d5254(v3) )
        ++*v2;
      goto LABEL_16;
    case 4u:
      if ( *(uint *)(v3 + 4) < 2430 )
        goto LABEL_16;
      result = 1;
      break;
    default:
      ErrorHandler();
LABEL_16:
      if ( *(uint *)(v3 + 8) )
      {
        result = 1;
      }
      else
      {
        ++*(uint *)(v3 + 4);
        result = 0;
      }
      break;
  }
  return result;
}

//----- (021D2E60) --------------------------------------------------------
int __fastcall Function_21d2e60(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  if ( !Function_200f2ac() )
    Function_200f2c0();
  SetPRNGSeed(*(uint *)(v2 + 20));
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(76);
  SetOverlayJumpTableDataToLoad(77, (int)&off_21D742C);
  return 1;
}

//----- (021D2E9C) --------------------------------------------------------
int __fastcall Function_21d2e9c(int a1)
{
  uchar *v1;
  int result;

  v1 = (uchar *)(a1 + 24);
  if ( *(uint *)(a1 + 8) )
    *v1 = 3;
  switch ( *v1 )
  {
    case 0:
      Function_21d2f0c(a1);
      ++*v1;
      goto LABEL_9;
    case 1:
      Function_21d2f38(a1 + 24);
      ++*v1;
      goto LABEL_9;
    case 2:
      if ( Function_21d30d0(a1 + 24, *(uint *)(a1 + 4)) )
        ++*v1;
      goto LABEL_9;
    case 3:
      Function_21d3234(a1);
      result = 1;
      break;
    default:
LABEL_9:
      result = 0;
      break;
  }
  return result;
}

//----- (021D2F0C) --------------------------------------------------------
int __fastcall Function_21d2f0c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;

  v1 = a1;
  Function_21d25b0();
  Function_21d2610((uint *)v1, v2, v3, v4);
  *(uint *)(v1 + 36) = *(uint *)(v1 + 12);
  *(uint *)(v1 + 44) = Function_21d670c();
  SetMainLoopFunctionCall((int)Function_21d2b30, v1);
  result = 1;
  *(uchar *)(v1 + 26) = 1;
  return result;
}

//----- (021D2F38) --------------------------------------------------------
int __fastcall Function_21d2f38(int a1)
{
  int v1;

  v1 = a1;
  LoadFromNARC_RGCN(128, 16, *(uint **)(a1 + 12), 2u, 0, 0, 0, 76);
  LoadFromNARC_RGCN(128, 16, *(uint **)(v1 + 12), 6u, 0, 0, 0, 76);
  LoadFromNARC_RCSN(128, 17, *(uint **)(v1 + 12), 2u, 0, 0, 0, 76);
  LoadFromNARC_RCSN(128, 18, *(uint **)(v1 + 12), 6u, 0, 0, 0, 76);
  Call_LoadFromNARC_RLCN(128, 15, 0, 0, 0, 76);
  Call_LoadFromNARC_RLCN(128, 15, 4u, 0, 0, 76);
  LoadFromNARC_RGCN(48, 15, *(uint **)(v1 + 12), 1u, 0, 0, 0, 76);
  LoadFromNARC_RCSN(48, 13, *(uint **)(v1 + 12), 1u, 0, 0, 0, 76);
  Call_LoadFromNARC_RLCN(48, 14, 0, 0, 32, 76);
  LoadFromNARC_RCSN(128, 19, *(uint **)(v1 + 12), 3u, 0, 0, 0, 76);
  LoadFromNARC_RCSN(128, 19, *(uint **)(v1 + 12), 7u, 0, 0, 0, 76);
  LoadFromNARC_RGCN(128, 114, *(uint **)(v1 + 12), 5u, 0, 0, 0, 76);
  LoadFromNARC_RCSN(128, 113, *(uint **)(v1 + 12), 5u, 0, 0, 0, 76);
  Call_LoadFromNARC_RLCN(128, 115, 4u, 0, 32, 76);
  Function_201ff0c(4u, 0);
  Function_201ff74(4u, 0);
  G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 2, 8, 0, 16);
  G2x_SetBlendAlpha_((int *)&REG_BLDCNT_SUB, 2, 8, 0, 16);
  OS_WaitIrq(1, 1);
  Function_200f338(0);
  Function_200f338(1);
  return Function_201ffd0();
}

//----- (021D30D0) --------------------------------------------------------
int __fastcall Function_21d30d0(int a1, int a2)
{
  int v2;
  int v3;
  uint v4;
  int result;

  v2 = a1;
  v3 = a2;
  Function_21d69c0(*(uint *)(a1 + 20));
  v4 = *(uchar *)(v2 + 1);
  if ( v4 <= 5 )
    JUMPOUT(__CS__, *((short *)&off_21D30F2 + v4) + 35467508);
  switch ( (uchar)v4 )
  {
    case 0:
      *(uchar *)(v2 + 7) = 0;
      *(uchar *)(v2 + 6) = 0;
      *(uchar *)(v2 + 8) = 0;
      *(uint *)(v2 + 16) = AddTaskToTaskList1((int)Function_21d32a4, v2, 0);
      Function_2004550(1u, 0x494u);
      ++*(uchar *)(v2 + 1);
      goto LABEL_18;
    case 1:
      if ( *(uchar *)(v2 + 8) )
      {
        if ( v3 >= 115 )
        {
          *(uchar *)(v2 + 7) = 0;
          *(uchar *)(v2 + 6) = 16;
          *(uchar *)(v2 + 8) = 0;
          *(uint *)(v2 + 16) = AddTaskToTaskList1((int)Function_21d3300, v2, 0);
          ++*(uchar *)(v2 + 1);
        }
      }
      goto LABEL_18;
    case 2:
      if ( *(uchar *)(v2 + 8) && v3 >= 265 )
      {
        Function_201ff0c(2u, 0);
        Function_201ff74(2u, 0);
        G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 4, 8, 0, 16);
        G2x_SetBlendAlpha_((int *)&REG_BLDCNT_SUB, 4, 8, 0, 16);
        Function_201ff0c(4u, 1);
        Function_201ff74(4u, 1);
        *(uchar *)(v2 + 7) = 0;
        *(uchar *)(v2 + 6) = 0;
        *(uchar *)(v2 + 8) = 0;
        *(uint *)(v2 + 16) = AddTaskToTaskList1((int)Function_21d3360, v2, 0);
        ++*(uchar *)(v2 + 1);
      }
      goto LABEL_18;
    case 3:
      if ( *(uchar *)(v2 + 8) )
      {
        *(uchar *)(v2 + 7) = 0;
        *(uchar *)(v2 + 6) = 0;
        *(uchar *)(v2 + 8) = 0;
        *(uint *)(v2 + 16) = AddTaskToTaskList1((int)Function_21d33a8, v2, 0);
        ++*(uchar *)(v2 + 1);
      }
      goto LABEL_18;
    case 4:
      if ( *(uchar *)(v2 + 8) && v3 >= 490 )
      {
        Function_200f174(2u, 0, 0, 0, 18, 1, 76);
        ++*(uchar *)(v2 + 1);
      }
      goto LABEL_18;
    case 5:
      if ( !Function_200f2ac() )
        goto LABEL_18;
      result = 1;
      break;
    default:
LABEL_18:
      result = 0;
      break;
  }
  return result;
}

//----- (021D3234) --------------------------------------------------------
int __fastcall Function_21d3234(int a1)
{
  int v1;
  int result;

  v1 = a1;
  SetMainLoopFunctionCall(0, 0);
  if ( *(uchar *)(v1 + 26) )
  {
    Function_21d67b0(*(uint *)(v1 + 44));
    Function_2019044(*(uint *)(v1 + 12), 1);
    Function_2019044(*(uint *)(v1 + 12), 2);
    Function_2019044(*(uint *)(v1 + 12), 6);
    Function_2019044(*(uint *)(v1 + 12), 3);
    Function_2019044(*(uint *)(v1 + 12), 7);
    Function_2019044(*(uint *)(v1 + 12), 5);
    free(*(uint *)(v1 + 12));
    *(uchar *)(v1 + 26) = 0;
  }
  result = *(uint *)(v1 + 40);
  if ( result )
  {
    if ( !*(uint *)(v1 + 8) )
      ErrorHandler();
    Call_RemoveTaskFromTaskList(*(int **)(v1 + 40));
    result = 0;
    *(uint *)(v1 + 40) = 0;
  }
  return result;
}

//----- (021D32A4) --------------------------------------------------------
int *__fastcall Function_21d32a4(int *a1, int a2)
{
  int v2;

  v2 = a2;
  if ( (uchar)++*(uchar *)(a2 + 7) >= 6u )
  {
    *(uchar *)(a2 + 7) = 0;
    ++*(uchar *)(a2 + 6);
  }
  if ( *(uchar *)(a2 + 6) >= 0x10u )
  {
    Call_RemoveTaskFromTaskList(a1);
    *(uint *)(v2 + 16) = 0;
    *(uchar *)(v2 + 8) = 1;
  }
  G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 2, 8, *(uchar *)(v2 + 6), 16);
  return G2x_SetBlendAlpha_((int *)&REG_BLDCNT_SUB, 2, 8, *(uchar *)(v2 + 6), 16);
}

//----- (021D3300) --------------------------------------------------------
int *__fastcall Function_21d3300(int *a1, int a2)
{
  int v2;

  v2 = a2;
  if ( (uchar)++*(uchar *)(a2 + 7) >= 4u )
  {
    *(uchar *)(a2 + 7) = 0;
    --*(uchar *)(a2 + 6);
  }
  if ( !*(uchar *)(a2 + 6) )
  {
    Call_RemoveTaskFromTaskList(a1);
    *(uint *)(v2 + 16) = 0;
    *(uchar *)(v2 + 8) = 1;
    **(uchar **)(v2 + 24) = 1;
  }
  G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 2, 8, *(uchar *)(v2 + 6), 16);
  return G2x_SetBlendAlpha_((int *)&REG_BLDCNT_SUB, 2, 8, *(uchar *)(v2 + 6), 16);
}

//----- (021D3360) --------------------------------------------------------
int *__fastcall Function_21d3360(int *a1, int a2)
{
  int v2;

  v2 = a2;
  if ( (uchar)++*(uchar *)(a2 + 7) >= 4u )
  {
    *(uchar *)(a2 + 7) = 0;
    ++*(uchar *)(a2 + 6);
  }
  if ( *(uchar *)(a2 + 6) >= 0x10u )
  {
    Call_RemoveTaskFromTaskList(a1);
    *(uint *)(v2 + 16) = 0;
    *(uchar *)(v2 + 8) = 1;
  }
  return G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 4, 8, *(uchar *)(v2 + 6), 16);
}

//----- (021D33A8) --------------------------------------------------------
int *__fastcall Function_21d33a8(int *a1, int a2)
{
  int v2;

  v2 = a2;
  if ( (uchar)++*(uchar *)(a2 + 7) >= 4u )
  {
    *(uchar *)(a2 + 7) = 0;
    ++*(uchar *)(a2 + 6);
  }
  if ( *(uchar *)(a2 + 6) >= 0x10u )
  {
    Call_RemoveTaskFromTaskList(a1);
    *(uint *)(v2 + 16) = 0;
    *(uchar *)(v2 + 8) = 1;
  }
  return G2x_SetBlendAlpha_((int *)&REG_BLDCNT_SUB, 4, 8, *(uchar *)(v2 + 6), 16);
}

//----- (021D33F0) --------------------------------------------------------
int __fastcall Function_21d33f0(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int (__fastcall *a8)(int))
{
  int v8;
  uchar *v9;
  int result;

  v8 = a1;
  v9 = (uchar *)(a1 + 52);
  if ( *(uint *)(a1 + 8) )
    *v9 = 4;
  switch ( *v9 )
  {
    case 0:
      Function_21d34a8(a1);
      ++*v9;
      goto LABEL_15;
    case 1:
      Function_21d37c0(a1 + 52);
      ++*v9;
      goto LABEL_15;
    case 2:
      if ( Function_21d40dc(a1 + 52, 0) == 1 )
      {
        *(uchar *)(v8 + 58) = 1;
        ++*v9;
      }
      goto LABEL_15;
    case 3:
      if ( Function_21d4230(a1, a1 + 52, *(uint *)(a1 + 4)) )
        ++*v9;
      Function_21d6020(*(uint *)(v8 + 72));
      if ( *(uchar *)(v8 + 58) )
      {
        if ( !*(uchar *)(v8 + 57) )
          Function_21d4188(v8 + 52);
      }
      else
      {
        Function_21d6e50(*(uint *)(v8 + 80));
      }
      goto LABEL_15;
    case 4:
      Function_21d36f8(a1);
      result = a8(1);
      break;
    default:
LABEL_15:
      result = 0;
      break;
  }
  return result;
}

//----- (021D34A8) --------------------------------------------------------
int __fastcall Function_21d34a8(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  uint v5;
  int result;

  v1 = a1;
  Function_21d25d0();
  Function_21d2724((uint *)v1);
  v2 = Function_21d2a58((uint *)v1);
  v3 = Function_21d555c(v2);
  v4 = Function_21d6cb8();
  *(uint *)(v1 + 72) = malloc(0x4Cu, v3);
  *(uint *)(v1 + 76) = Function_21d6734(16);
  *(uint *)(v1 + 80) = malloc(0x4Cu, v4);
  Call_FillMemWithValue(*(int **)(v1 + 72), 0, v3);
  Call_FillMemWithValue(*(int **)(v1 + 80), 0, v4);
  *(uchar *)(v1 + 60) = 4;
  Function_21d6cfc(*(uint *)(v1 + 80));
  *(uint *)(v1 + 68) = *(uint *)(v1 + 12);
  byte_21BF6E1 = 0;
  Function_201ffe8();
  v5 = 0;
  do
  {
    Function_20af51c(
      v5,
      (short)dword_21D776C[3 * v5],
      (short)dword_21D776C[3 * v5 + 1],
      (short)dword_21D776C[3 * v5 + 2]);
    Function_20af558(v5, *((ushort *)dword_21D7444 + v5));
    v5 = (v5 + 1) & 0xFF;
  }
  while ( v5 < 4 );
  Function_20af56c(16912, 12682, 0);
  Function_20af590(19026, 14798, 0);
  Function_20af5b4(13, 0, 2, 0, 31, 0x8000);
  SetMainLoopFunctionCall((int)Function_21d2b38, v1);
  Function_200ab4c(-16, 8, 1);
  result = 1;
  *(uchar *)(v1 + 54) = 1;
  return result;
}

//----- (021D35B8) --------------------------------------------------------
int __fastcall Function_21d35b8(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;

  v1 = a1;
  if ( *(uchar *)(a1 + 56) || (result = *(uchar *)(a1 + 57), *(uchar *)(v1 + 57)) )
  {
    Function_20203e0();
    Call_free5(*(uint *)(v1 + 92));
    v3 = 0;
    if ( *(uint *)(v1 + 624) > 0 )
    {
      v4 = v1;
      do
      {
        free(*(uint *)(v4 + 180));
        ++v3;
        v4 += 88;
      }
      while ( v3 < *(uint *)(v1 + 624) );
    }
    *(uint *)(v1 + 624) = 0;
    free(*(uint *)(v1 + 84));
    result = v1 + 56;
    *(uchar *)(v1 + 56) = 0;
    *(uchar *)(v1 + 57) = 0;
  }
  return result;
}

//----- (021D361C) --------------------------------------------------------
int __fastcall Function_21d361c(int a1, int a2)
{
  int v2;
  int result;
  int v4;

  v2 = a1;
  result = *(uchar *)(a1 + 54);
  v4 = a2;
  if ( result )
  {
    result = *(uint *)(v2 + 12);
    if ( result )
    {
      if ( *(uchar *)(v2 + 654) )
      {
        if ( *(uchar *)(v2 + 654) == 1 )
        {
          Function_2019044(result, 3);
          Function_2019044(*(uint *)(v2 + 12), 1);
          Function_2019044(*(uint *)(v2 + 12), 2);
        }
        else
        {
          Function_2019044(result, 0);
          Function_2019044(*(uint *)(v2 + 12), 3);
          Function_2019044(*(uint *)(v2 + 12), 1);
          Function_2019044(*(uint *)(v2 + 12), 2);
          Function_2019044(*(uint *)(v2 + 12), 4);
        }
        Function_2019044(*(uint *)(v2 + 12), 5);
        Function_2019044(*(uint *)(v2 + 12), 6);
        result = Function_2019044(*(uint *)(v2 + 12), 7);
      }
      else
      {
        Function_2019044(result, 3);
        Function_2019044(*(uint *)(v2 + 12), 1);
        Function_2019044(*(uint *)(v2 + 12), 2);
        Function_2019044(*(uint *)(v2 + 12), 4);
        Function_2019044(*(uint *)(v2 + 12), 5);
        Function_2019044(*(uint *)(v2 + 12), 6);
        result = Function_2019044(*(uint *)(v2 + 12), 7);
      }
      if ( v4 == 1 )
      {
        free(*(uint *)(v2 + 12));
        result = 0;
        *(uint *)(v2 + 12) = 0;
      }
    }
  }
  return result;
}

//----- (021D36F8) --------------------------------------------------------
int __fastcall Function_21d36f8(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  REG_DISPCNT &= 0xFFFF1FFF;
  Function_21d35b8(a1);
  if ( *(uchar *)(v1 + 55) )
  {
    Function_21d5bac(*(uint *)(v1 + 72));
    v2 = 0;
    *(uchar *)(v1 + 55) = 0;
  }
  v4 = *(uchar *)(v1 + 54);
  if ( *(uchar *)(v1 + 54) )
  {
    if ( *(uint *)(v1 + 76) )
    {
      Function_21d6760();
      *(uint *)(v1 + 76) = 0;
    }
    v5 = *(uint *)(v1 + 72);
    if ( v5 )
    {
      free(v5);
      *(uint *)(v1 + 72) = 0;
    }
    if ( *(uint *)(v1 + 80) )
    {
      Function_21d6e28();
      free(*(uint *)(v1 + 80));
      *(uint *)(v1 + 80) = 0;
    }
    Function_21d361c(v1, 1);
    v6 = *(uint *)(v1 + 628);
    if ( v6 )
    {
      free(v6);
      *(uint *)(v1 + 628) = 0;
    }
    Function_20242c4(*(uint *)(v1 + 16));
    v4 = 0;
    *(uchar *)(v1 + 54) = 0;
  }
  Function_20b2628(v4, v2, v3);
  G3X_SetFog(0, 0, 0, 0);
  REG_DISPCNT &= 0xFFFF1FFF;
  REG_DISPCNT_SUB &= 0xFFFF1FFF;
  return SetMainLoopFunctionCall(0, 0);
}

//----- (021D37C0) --------------------------------------------------------
int __fastcall Function_21d37c0(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  int *v8;
  int result;

  v4 = a1;
  v5 = LoadFromNARC_8(128, 0x4Cu, a3, a4);
  Function_2007148((int)v5, 0x60u, 0, 384, 384, 64, 76);
  Function_20070e8((int)v5, 0x5Fu, *(uint **)(v4 + 16), 3u, 0, 0, 0, 76);
  Function_200710c((int)v5, 0xCu, *(uint **)(v4 + 16), 3u, 0, 0, 0, 76);
  Function_2007148((int)v5, 0xDu, 0, 448, 448, 64, 76);
  Function_20070e8((int)v5, 0xEu, *(uint **)(v4 + 16), 2u, 0, 0, 0, 76);
  Function_200710c((int)v5, 0xCu, *(uint **)(v4 + 16), 2u, 0, 0, 0, 76);
  v8 = LoadFromNARC_8(65, 0x4Cu, v6, v7);
  Function_20070e8((int)v8, 0x38u, *(uint **)(v4 + 16), 1u, 0, 0, 0, 76);
  Function_200710c((int)v8, 0x39u, *(uint **)(v4 + 16), 1u, 0, 0, 0, 76);
  Function_200710c((int)v8, 0x39u, *(uint **)(v4 + 16), 1u, 1024, 0, 0, 76);
  Function_2007130((int)v8, 0x37u, 0, 0, 32, 76);
  Call_FS_CloseFile(v8);
  Function_2007130((int)v5, 0x3Du, 4u, 0, 0, 76);
  Function_20070e8((int)v5, 0x3Bu, *(uint **)(v4 + 16), 5u, 0, 0, 0, 76);
  Function_200710c((int)v5, 0x3Fu, *(uint **)(v4 + 16), 5u, 0, 0, 0, 76);
  Function_20070e8((int)v5, 0x3Au, *(uint **)(v4 + 16), 6u, 0, 0, 0, 76);
  Function_200710c((int)v5, 0x3Eu, *(uint **)(v4 + 16), 6u, 0, 0, 0, 76);
  Function_20070e8((int)v5, 0x3Cu, *(uint **)(v4 + 16), 7u, 0, 0, 0, 76);
  Function_200710c((int)v5, 0x40u, *(uint **)(v4 + 16), 7u, 0, 0, 0, 76);
  Function_20070e8((int)v5, 0xEu, *(uint **)(v4 + 16), 4u, 0, 0, 0, 76);
  Function_200710c((int)v5, 0xCu, *(uint **)(v4 + 16), 4u, 0, 0, 0, 76);
  Function_2007148((int)v5, 0xDu, 4u, 448, 448, 64, 76);
  Function_21d5564(*(uint *)(v4 + 20));
  Function_21d5c3c(*(uint *)(v4 + 20));
  Function_21d5fb4(*(uint *)(v4 + 20), *(uint *)(v4 + 24));
  MIi_CpuClear16(0, 83886080, 2);
  MIi_CpuClear16(0, 83887104, 2);
  Function_201ff0c(0xEu, 0);
  Function_201ff74(0xFu, 0);
  Function_200f338(0);
  Function_200f338(1);
  Call_FS_CloseFile(v5);
  result = 1;
  *(uchar *)(v4 + 3) = 1;
  return result;
}

//----- (021D3A10) --------------------------------------------------------
uint __fastcall Function_21d3a10(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int *v5;

  v2 = a2;
  Function_2018898(*(uint *)(a2 + 16), 2u, 0, 0);
  Function_2018898(*(uint *)(v2 + 16), 3u, 0, 0);
  REG_BG0CNT &= 0xFFFCu;
  Function_2019060(1u, 3);
  v5 = LoadFromNARC_8(128, 0x4Cu, v3, v4);
  Function_2007130((int)v5, 0x44u, 0, 0, 0, 76);
  Function_20070e8((int)v5, 0x42u, *(uint **)(v2 + 16), 1u, 0, 0, 0, 76);
  Function_200710c((int)v5, 0x46u, *(uint **)(v2 + 16), 1u, 0, 0, 0, 76);
  Function_20070e8((int)v5, 0x41u, *(uint **)(v2 + 16), 2u, 0, 0, 0, 76);
  Function_200710c((int)v5, 0x45u, *(uint **)(v2 + 16), 2u, 0, 0, 0, 76);
  Function_20070e8((int)v5, 0x43u, *(uint **)(v2 + 16), 3u, 0, 0, 0, 76);
  Function_200710c((int)v5, 0x47u, *(uint **)(v2 + 16), 3u, 0, 0, 0, 76);
  MIi_CpuClear16(0, 83886080, 2);
  MIi_CpuClear16(0, 83887104, 2);
  Function_2019184(*(uint *)(v2 + 16), 1u, 0, 0);
  Function_2019184(*(uint *)(v2 + 16), 2u, 0, 0);
  Function_2019184(*(uint *)(v2 + 16), 3u, 0, 0);
  Function_2019184(*(uint *)(v2 + 16), 5u, 0, 0);
  Function_2019184(*(uint *)(v2 + 16), 6u, 0, 0);
  Function_2019184(*(uint *)(v2 + 16), 7u, 0, 0);
  return Call_FS_CloseFile(v5);
}

//----- (021D3B5C) --------------------------------------------------------
uint __fastcall Function_21d3b5c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int *v7;
  short v8;

  v4 = a2;
  Function_21d2828(a1, a2, a3, a4);
  v7 = LoadFromNARC_8(128, 0x4Cu, v5, v6);
  Function_2007130((int)v7, 0x48u, 0, 0, 0, 76);
  Function_2007130((int)v7, 0x48u, 4u, 0, 0, 76);
  *(uint *)(v4 + 576) = malloc(0x4Cu, 512);
  MIi_CpuCopy16(83886080, *(uint *)(v4 + 576), 512, v8);
  MIi_CpuClear16(0, *(uint *)(v4 + 576), 2);
  Function_20070e8((int)v7, 0x49u, *(uint **)(v4 + 16), 1u, 0, 0, 0, 76);
  Function_200710c((int)v7, 0x4Cu, *(uint **)(v4 + 16), 1u, 0, 0, 0, 76);
  Function_20070e8((int)v7, 0x49u, *(uint **)(v4 + 16), 5u, 0, 0, 0, 76);
  Function_200710c((int)v7, 0x4Cu, *(uint **)(v4 + 16), 5u, 0, 0, 0, 76);
  Function_20070e8((int)v7, 0x4Au, *(uint **)(v4 + 16), 2u, 0, 0, 0, 76);
  Function_200710c((int)v7, 0x4Du, *(uint **)(v4 + 16), 2u, 0, 0, 0, 76);
  Function_20070e8((int)v7, 0x4Au, *(uint **)(v4 + 16), 6u, 0, 0, 0, 76);
  Function_200710c((int)v7, 0x4Du, *(uint **)(v4 + 16), 6u, 0, 0, 0, 76);
  Function_20070e8((int)v7, 0x4Bu, *(uint **)(v4 + 16), 3u, 0, 0, 0, 76);
  Function_200710c((int)v7, 0x4Eu, *(uint **)(v4 + 16), 3u, 0, 0, 0, 76);
  Function_20070e8((int)v7, 0x4Bu, *(uint **)(v4 + 16), 7u, 0, 0, 0, 76);
  Function_200710c((int)v7, 0x4Eu, *(uint **)(v4 + 16), 7u, 0, 0, 0, 76);
  MIi_CpuClear16(0, 83886080, 2);
  MIi_CpuClear16(0, 83887104, 2);
  Function_2019184(*(uint *)(v4 + 16), 1u, 0, -128);
  Function_2019184(*(uint *)(v4 + 16), 2u, 0, -200);
  Function_2019184(*(uint *)(v4 + 16), 3u, 0, -152);
  Function_2019184(*(uint *)(v4 + 16), 5u, 0, 128);
  Function_2019184(*(uint *)(v4 + 16), 6u, 0, 192);
  Function_2019184(*(uint *)(v4 + 16), 7u, 0, 176);
  return Call_FS_CloseFile(v7);
}

//----- (021D3D4C) --------------------------------------------------------
uint __fastcall Function_21d3d4c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int *v7;

  v4 = a2;
  Function_21d2900(a1, a2, a3, a4);
  v7 = LoadFromNARC_8(128, 0x4Cu, v5, v6);
  Function_20070e8((int)v7, 0x4Fu, *(uint **)(v4 + 16), 0, 0, 0, 0, 76);
  Function_200710c((int)v7, 0x50u, *(uint **)(v4 + 16), 0, 0, 0, 0, 76);
  Function_20070e8((int)v7, 0x51u, *(uint **)(v4 + 16), 4u, 0, 0, 0, 76);
  Function_200710c((int)v7, 0x52u, *(uint **)(v4 + 16), 4u, 0, 0, 0, 76);
  return Call_FS_CloseFile(v7);
}

//----- (021D3DC4) --------------------------------------------------------
int __fastcall Function_21d3dc4(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 16);
  if ( byte_21BF6E1 )
  {
    Function_2019184(v2, 1u, 3u, 256);
    Function_2019184(*(uint *)(v1 + 16), 2u, 3u, 256);
    Function_2019184(*(uint *)(v1 + 16), 3u, 3u, 256);
    Function_2019184(*(uint *)(v1 + 16), 5u, 3u, 0);
    Function_2019184(*(uint *)(v1 + 16), 6u, 3u, 0);
    Function_2019184(*(uint *)(v1 + 16), 7u, 3u, 0);
  }
  else
  {
    Function_2019184(v2, 1u, 3u, 0);
    Function_2019184(*(uint *)(v1 + 16), 2u, 3u, 0);
    Function_2019184(*(uint *)(v1 + 16), 3u, 3u, 0);
    Function_2019184(*(uint *)(v1 + 16), 5u, 3u, 256);
    Function_2019184(*(uint *)(v1 + 16), 6u, 3u, 256);
    Function_2019184(*(uint *)(v1 + 16), 7u, 3u, 256);
  }
  Function_2019060(1u, 1);
  Function_2019060(2u, 2);
  Function_2019060(3u, 0);
  Function_2019060(5u, 1);
  Function_2019060(6u, 2);
  Function_2019060(7u, 0);
  return Function_21d636c(*(uint *)(v1 + 20), 0);
}

//----- (021D3EDC) --------------------------------------------------------
uint __fastcall Function_21d3edc(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = LoadFromNARC_2(128, dword_21D7458[a2], 0x4Cu);
  *(uint *)(v2 + 32) = v3;
  v4 = Function_20b3c1c_GetTexOffsets(v3);
  *(uint *)(v2 + 36) = v4;
  if ( !Function_201cbcc(v4) )
    ErrorHandler();
  if ( !*(uint *)(*(uint *)(v2 + 36) + 20) )
    ErrorHandler();
  return Function_20182f0(
           *(uint *)(v2 + 32),
           *(uint *)(v2 + 36) + *(uint *)(*(uint *)(v2 + 36) + 20) - *(uint *)(v2 + 32));
}

//----- (021D3F24) --------------------------------------------------------
uint __fastcall Function_21d3f24(int a1, int a2, char a3, int a4)
{
  int v4;
  int v5;
  uchar v6;
  int v7;
  uint v8;
  int v9;
  int v10;
  uint *v11;
  int v12;
  int v14;
  int *v15;
  int *v16;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v14 = a4;
  if ( a4 > 6 )
    v14 = 6;
  v16 = LoadFromNARC_8(128, 0x4Cu, a3, a4);
  v7 = v6;
  if ( v6 < v14 )
  {
    v15 = &dword_21D779C[6 * v5];
    do
    {
      v8 = v15[v7];
      if ( !v8 )
        break;
      v9 = 88 * v7;
      *(uint *)(v4 + 88 * v7 + 128) = Function_2006cb8_LoadFileInMemory((int)v16, v8, 0x4Cu);
      if ( !Function_201cbb0(*(uint *)(v4 + 88 * v7 + 128), *(uint *)(v4 + 36)) )
        ErrorHandler();
      if ( *(uchar *)(Function_20b3c0c_GetAdrOfDataPart(*(uint *)(v4 + v9 + 128)) + 9) != 1 )
        ErrorHandler();
      v10 = Function_20b3c0c_GetAdrOfDataPart(*(uint *)(v4 + v9 + 128));
      if ( v10
        && (v10 == -8 || !*(uchar *)(v10 + 9) ? (v11 = 0) : (v11 = (uint *)(v10
                                                                            + 8
                                                                            + *(ushort *)(v10 + 14)
                                                                            + 4)),
            v11) )
      {
        v12 = v10 + *v11;
      }
      else
      {
        v12 = 0;
      }
      if ( !v12 )
        ErrorHandler();
      Function_20ae608((uint *)(v4 + 44 + v9), v12);
      Function_20b2ce4(v12, 0, 64);
      Function_20b2ce4(v12, 0, 128);
      Function_20b2ce4(v12, 0, 512);
      Function_20b2ce4(v12, 0, 1024);
      Function_20b2d8c(v12, 0, 15);
      ++*(uint *)(v4 + 572);
      v7 = (v7 + 1) & 0xFF;
    }
    while ( v7 < v14 );
  }
  return Call_FS_CloseFile(v16);
}

//----- (021D4044) --------------------------------------------------------
int __fastcall Function_21d4044(int a1)
{
  int v1;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v1 = a1;
  *(uint *)(a1 + 40) = Function_20203ac(0x4Cu);
  v6 = 0;
  v7 = 0;
  v8 = 393216;
  Function_20206d0(&v6, 2731713, dword_21D7500, 1473, 0, 0, *(uint *)(v1 + 40));
  Function_2020910(2433, *(uint *)(v1 + 40));
  v3 = 0;
  v4 = 327680;
  v5 = 0;
  Function_2020990(&v3, *(uint *)(v1 + 40));
  return Function_20203d4(*(uint *)(v1 + 40));
}

//----- (021D40B8) --------------------------------------------------------
int __fastcall Function_21d40b8(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a1;
  v3 = a2;
  Function_21d3edc(a1, a2);
  Function_21d3f24(v2, v3, 0, 6);
  Function_21d4044(v2);
  result = 1;
  *(uchar *)(v2 + 4) = 1;
  return result;
}

//----- (021D40DC) --------------------------------------------------------
int __fastcall Function_21d40dc(int a1, int a2)
{
  uchar *v2;
  int v3;
  int result;

  v2 = (uchar *)a1;
  v3 = *(uchar *)(a1 + 9);
  if ( a2 )
  {
    switch ( (uchar)v3 )
    {
      case 0:
        *(uchar *)(a1 + 5) = 1;
        Function_21d3edc(a1, a2);
        Function_21d4044((int)v2);
        goto LABEL_12;
      case 1:
        Function_21d3f24(a1, a2, 0, 2);
        goto LABEL_12;
      case 2:
        Function_21d3f24(a1, a2, 2, 4);
        goto LABEL_12;
      default:
        Function_21d3f24(a1, a2, 4, 6);
        v2[9] = 0;
        v2[5] = 0;
        result = 1;
        v2[4] = 1;
        break;
    }
  }
  else
  {
    if ( *(uchar *)(a1 + 9) )
    {
      if ( v3 != 1 )
      {
        Function_21d3f24(a1, 0, 1, 6);
        v2[9] = 0;
        v2[5] = 0;
        result = 1;
        v2[4] = 1;
        return result;
      }
      Function_21d3f24(a1, 0, 0, 1);
    }
    else
    {
      *(uchar *)(a1 + 5) = 1;
      Function_21d3edc(a1, 0);
      Function_21d4044((int)v2);
    }
LABEL_12:
    ++v2[9];
    result = 0;
  }
  return result;
}

//----- (021D4188) --------------------------------------------------------
int __fastcall Function_21d4188(int a1)
{
  int *v1;
  int v2;
  char *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int i;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  char v17;

  v1 = dword_21D76D0;
  v2 = a1;
  v3 = &v17;
  v4 = 4;
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
  *(uint *)v3 = *v1;
  v14 = 4096;
  v15 = 4096;
  v16 = 4096;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  Function_20b2628(0, (int)&v11, (int)&v16);
  Call_G3X_Reset();
  Function_20203ec();
  v8 = *(uchar *)(v2 + 604);
  if ( v8 == 1 )
  {
    for ( i = 0; i < *(uint *)(v2 + 572); i = (i + 1) & 0xFF )
    {
      DC_FlushAll();
      Function_201ca74((uint *)(v2 + 44 + 88 * i), &v11, (int *)&v17, &v14);
    }
  }
  if ( *(uchar *)(v2 + 605) == 1 )
  {
    Function_20b2628(1, v8, v7);
    Call_G3X_Reset();
    Function_201469c();
    Function_20146c0();
  }
  return Function_20241bc(0, 1);
}

//----- (021D4230) --------------------------------------------------------
int __fastcall Function_21d4230(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  char v6;
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
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  short v26;
  int v27;
  int v28;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( !*(uchar *)(a2 + 7) )
    Function_21d6ba0(*(uint *)(a2 + 24), *(uchar *)(a2 + 580));
  s32_div_f(*(uchar *)(v3 + 7) + 1, *(uchar *)(v3 + 8));
  *(uchar *)(v3 + 7) = v6;
  v7 = *(uchar *)(v3 + 1);
  switch ( (uchar)v7 )
  {
    case 0:
      v7 = 640;
      if ( v5 < 640 )
        goto LABEL_8;
      Function_2019120(3u, 1);
      Function_200aae0(8, 0, -16, 8, 1);
      v8 = *(uchar *)(v3 + 1) + 1;
      *(uchar *)(v3 + 1) = v8;
      result = Function_21d4b54(v8);
      break;
    case 1:
      v7 = Function_200ac1c(1);
      if ( v7 != 1 )
        goto LABEL_8;
      v7 = 700;
      if ( v5 != 700 )
        goto LABEL_8;
      Function_2019120(0, 1);
      Function_21d6cd0(*(uint *)(v3 + 28), 9);
      Function_21d6cd0(*(uint *)(v3 + 28), 10);
      Function_21d6cd0(*(uint *)(v3 + 28), 11);
      G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 0, 15, 0, 0);
      *(uchar *)(v3 + 605) = 1;
      Function_21d6050(*(uint *)(v3 + 20));
      v10 = *(uchar *)(v3 + 1) + 1;
      *(uchar *)(v3 + 1) = v10;
      result = Function_21d4b54(v10);
      break;
    case 2:
      if ( v5 == 785 )
        Function_200f174(3u, 0, 0, 0x7FFF, 4, 1, 76);
      if ( v5 == 790 )
      {
        if ( Function_200f2ac() != 1 )
          ErrorHandler();
        *(uchar *)(v3 + 583) = 4;
        *(uchar *)(v3 + 584) = 8;
        Function_200f174(3u, 1, 1, 0x7FFF, 4, 1, 76);
      }
      if ( v5 == 944 )
      {
        Function_201ff0c(1u, 0);
        *(uchar *)(v3 + 603) = 1;
        *(uchar *)(v3 + 605) = 0;
        *(uchar *)(v3 + 604) = 1;
        v11 = Function_21d6cbc(*(uint *)(v3 + 28));
        if ( Function_2014710(v11) )
          ErrorHandler();
      }
      if ( v5 == 945 )
        Function_201ff74(0x10u, 1);
      v12 = 975;
      if ( v5 < 975 )
        goto LABEL_27;
      Function_201ff0c(1u, 1);
      Function_200f174(3u, 1, 1, 0x7FFF, 18, 1, 76);
      *(uchar *)(v3 + 8) = 16;
      v13 = *(uchar *)(v3 + 1) + 1;
      *(uchar *)(v3 + 1) = v13;
      result = Function_21d4b54(v13);
      break;
    case 3:
      Function_21d513c(v4, v3, v5);
      Function_21d4f38(v3, v5);
      Function_21d6530(*(uint *)(v3 + 20), v5);
      Function_21d60e0(*(uint *)(v3 + 20), v5);
      Function_21d61b8(*(uint *)(v3 + 20), v5);
      v12 = 1576;
      if ( v5 < 1576 )
        goto LABEL_27;
      Function_200f174(0, 0, 0, 0x7FFF, 18, 1, 76);
      v14 = *(uchar *)(v3 + 1) + 1;
      *(uchar *)(v3 + 1) = v14;
      result = Function_21d4b54(v14);
      break;
    case 4:
      Function_21d4f38(v3, v5);
      Function_21d6530(*(uint *)(v3 + 20), v5);
      Function_21d60e0(*(uint *)(v3 + 20), v5);
      Function_21d61b8(*(uint *)(v3 + 20), v5);
      v12 = Function_200f2ac();
      if ( v12 && (v12 = 1600, v5 >= 1600) )
      {
        Function_2019120(4u, 0);
        Function_21d6000(*(uint *)(v3 + 20), *(uint *)(v3 + 24));
        *(uchar *)(v3 + 580) = 1;
        Function_21d3a10(v4, v3);
        Function_21d603c(*(uint *)(v3 + 20), 1, 1);
        Function_21d603c(*(uint *)(v3 + 20), 2, 1);
        Function_2019120(1u, 1);
        Function_2019120(2u, 1);
        Function_2019120(3u, 1);
        Function_2019120(5u, 1);
        Function_2019120(6u, 1);
        Function_2019120(7u, 1);
        Function_2019184(*(uint *)(v3 + 16), 1u, 0, 256);
        Function_2019184(*(uint *)(v3 + 16), 1u, 3u, 0);
        Function_2019184(*(uint *)(v3 + 16), 2u, 0, 0);
        Function_2019184(*(uint *)(v3 + 16), 2u, 3u, 256);
        Function_2019184(*(uint *)(v3 + 16), 3u, 0, 0);
        Function_2019184(*(uint *)(v3 + 16), 3u, 3u, 0);
        Function_2019184(*(uint *)(v3 + 16), 5u, 0, 256);
        Function_2019184(*(uint *)(v3 + 16), 5u, 3u, 0);
        Function_2019184(*(uint *)(v3 + 16), 6u, 0, 0);
        Function_2019184(*(uint *)(v3 + 16), 6u, 3u, 256);
        Function_2019184(*(uint *)(v3 + 16), 7u, 0, 0);
        Function_2019184(*(uint *)(v3 + 16), 7u, 3u, 0);
        *(uint *)(v3 + 608) = 0x100000;
        *(ushort *)(v3 + 586) = 0;
        *(ushort *)(v3 + 588) = 255;
        *(ushort *)(v3 + 590) = 32;
        *(ushort *)(v3 + 592) = 159;
        *(ushort *)(v3 + 594) = 0;
        *(ushort *)(v3 + 596) = 255;
        *(ushort *)(v3 + 598) = 32;
        *(ushort *)(v3 + 600) = 159;
        *(uchar *)(v3 + 581) = 1;
        *(uchar *)(v3 + 6) = 0;
        REG_BLDCNT = 0;
        REG_BLDCNT_SUB = 0;
        Function_200f174(0, 1, 1, 0x7FFF, 18, 1, 76);
        v15 = *(uchar *)(v3 + 1) + 1;
        *(uchar *)(v3 + 1) = v15;
        result = Function_21d4b54(v15);
      }
      else
      {
LABEL_27:
        result = Function_21d4b54(v12);
      }
      break;
    case 5:
      Function_21d4b70(v3);
      Function_21d607c(*(uint *)(v3 + 20));
      v16 = Function_200f2ac();
      if ( !v16 )
        goto LABEL_33;
      v16 = 1830;
      if ( v5 < 1830 )
        goto LABEL_33;
      Function_201c63c(*(uint *)(v3 + 16), 3, 0, 0);
      Function_201c63c(*(uint *)(v3 + 16), 3, 3u, 256);
      Function_201c63c(*(uint *)(v3 + 16), 7, 0, 0);
      Function_201c63c(*(uint *)(v3 + 16), 7, 3u, 256);
      Function_201c63c(*(uint *)(v3 + 16), 2, 0, 0);
      Function_201c63c(*(uint *)(v3 + 16), 2, 3u, 0);
      Function_201c63c(*(uint *)(v3 + 16), 6, 0, 0);
      Function_201c63c(*(uint *)(v3 + 16), 6, 3u, 0);
      *(uchar *)(v3 + 584) = 34;
      *(uchar *)(v3 + 582) = 1;
      Function_21d603c(*(uint *)(v3 + 20), 1, 0);
      Function_21d603c(*(uint *)(v3 + 20), 2, 0);
      v17 = *(uchar *)(v3 + 1) + 1;
      *(uchar *)(v3 + 1) = v17;
      result = Function_21d4b54(v17);
      break;
    case 6:
      Function_21d4be4(v3);
      Function_21d4c04(v3, v5);
      v16 = 1845;
      if ( v5 == 1845 )
      {
        Function_200f174(0, 0, 0, 0, 4, 1, 76);
        v18 = *(uchar *)(v3 + 1) + 1;
        *(uchar *)(v3 + 1) = v18;
        result = Function_21d4b54(v18);
      }
      else
      {
LABEL_33:
        result = Function_21d4b54(v16);
      }
      break;
    case 7:
      Function_21d4be4(v3);
      Function_21d4c04(v3, v5);
      v19 = Function_200f2ac();
      if ( !v19 )
        goto LABEL_41;
      *(uchar *)(v3 + 583) = 34;
      *(uchar *)(v3 + 584) = 68;
      Function_201c63c(*(uint *)(v3 + 16), 1, 0, 0);
      Function_201c63c(*(uint *)(v3 + 16), 1, 3u, 0);
      Function_201c63c(*(uint *)(v3 + 16), 5, 0, 0);
      Function_201c63c(*(uint *)(v3 + 16), 5, 3u, 0);
      Function_200f174(0, 1, 1, 0, 4, 1, 76);
      v20 = *(uchar *)(v3 + 1) + 1;
      *(uchar *)(v3 + 1) = v20;
      result = Function_21d4b54(v20);
      break;
    case 8:
      Function_21d4be4(v3);
      Function_21d4c04(v3, v5);
      Function_21d6470(*(uint *)(v3 + 20), v5);
      v19 = Function_200f2ac();
      if ( !v19 )
        goto LABEL_41;
      if ( v5 == 1860 )
      {
        Function_201c63c(*(uint *)(v3 + 16), 1, 0, 0);
        Function_201c63c(*(uint *)(v3 + 16), 1, 3u, 256);
        Function_201c63c(*(uint *)(v3 + 16), 5, 0, 0);
        Function_201c63c(*(uint *)(v3 + 16), 5, 3u, 256);
        Function_21d603c(*(uint *)(v3 + 20), 11, 1);
        v21 = Function_21d603c(*(uint *)(v3 + 20), 12, 1);
        return Function_21d4b54(v21);
      }
      v19 = 1920;
      if ( v5 >= 1920 )
      {
        Function_200f174(0, 0, 0, 0x7FFF, 4, 1, 76);
        v22 = *(uchar *)(v3 + 1) + 1;
        *(uchar *)(v3 + 1) = v22;
        result = Function_21d4b54(v22);
      }
      else
      {
LABEL_41:
        result = Function_21d4b54(v19);
      }
      break;
    case 9:
      Function_21d6470(*(uint *)(v3 + 20), v5);
      if ( Function_200f2ac() )
      {
        Function_200f174(0, 1, 1, 0x7FFF, 64, 1, 76);
        Function_21d603c(*(uint *)(v3 + 20), 11, 0);
        Function_21d603c(*(uint *)(v3 + 20), 12, 0);
        Function_21d603c(*(uint *)(v3 + 20), 13, 1);
        Function_21d603c(*(uint *)(v3 + 20), 14, 1);
        Function_21d603c(*(uint *)(v3 + 20), 15, 1);
        Function_21d603c(*(uint *)(v3 + 20), 16, 1);
        Function_21d636c(*(uint *)(v3 + 20), 0);
        Function_21d3b5c(v4, v3, v23, v24);
        byte_21BF6E1 = 0;
        Function_201ffe8();
        Function_21d3dc4(v3);
        *(uchar *)(v3 + 582) = 1;
        v25 = *(uchar *)(v3 + 1) + 1;
        *(uchar *)(v3 + 1) = v25;
      }
      else
      {
        Function_21d4be4(v3);
        v25 = Function_21d4c04(v3, v5);
      }
      result = Function_21d4b54(v25);
      break;
    case 0xA:
      Function_21d6290(*(uint *)(v3 + 20), 0x10000);
      Function_21d4dc8(v3, v5);
      if ( !Function_200f2ac() || v5 < 2010 )
        goto LABEL_51;
      Function_200f174(3u, 0, 0, 0, 4, 1, 76);
      ++*(uchar *)(v3 + 1);
      result = ((int (*)(void))Function_21d4b54)();
      break;
    case 0xB:
      Function_21d6290(*(uint *)(v3 + 20), 0x10000);
      if ( Function_200f2ac() )
      {
        G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 0, 62, 0, 0);
        MIi_CpuClear16(0, 83886080, 512);
        Function_200f174(3u, 1, 1, 0, 4, 1, 76);
        ++*(uchar *)(v3 + 1);
        result = ((int (*)(void))Function_21d4b54)();
      }
      else
      {
LABEL_51:
        result = ((int (*)(void))Function_21d4b54)();
      }
      break;
    case 0xC:
      Function_21d6290(*(uint *)(v3 + 20), 0x10000);
      if ( !Function_200f2ac() || !Function_21d6e78(*(uint *)(v3 + 28), 0, v5) )
        goto LABEL_63;
      Function_200f174(0, 0, 0, 0, 4, 1, 76);
      ++*(uchar *)(v3 + 1);
      result = ((int (*)(void))Function_21d4b54)();
      break;
    case 0xD:
      Function_21d6290(*(uint *)(v3 + 20), 0x10000);
      if ( !Function_200f2ac() )
        goto LABEL_63;
      byte_21BF6E1 = 1;
      Function_201ffe8();
      Function_21d3dc4(v3);
      Function_200f174(0, 1, 1, 0, 4, 1, 76);
      ++*(uchar *)(v3 + 1);
      result = ((int (*)(void))Function_21d4b54)();
      break;
    case 0xE:
      Function_21d6290(*(uint *)(v3 + 20), 0x10000);
      if ( !Function_200f2ac() || v5 < 2130 || !Function_21d6e78(*(uint *)(v3 + 28), 1, v5) )
        goto LABEL_63;
      Function_200f174(0, 0, 0, 0, 4, 1, 76);
      *(uint *)(v3 + 12) = 0;
      ++*(uchar *)(v3 + 1);
      result = ((int (*)(void))Function_21d4b54)();
      break;
    case 0xF:
      Function_21d6290(*(uint *)(v3 + 20), 0x10000);
      if ( Function_200f2ac() )
      {
        MIi_CpuCopy16(*(uint *)(v3 + 576), 83886080, 512, v26);
        byte_21BF6E1 = 0;
        Function_201ffe8();
        Function_21d3d4c(v4, v3, v27, v28);
        Function_21d3dc4(v3);
        Function_21d636c(*(uint *)(v3 + 20), 1);
        Function_201c63c(*(uint *)(v3 + 16), 1, 0, -60);
        Function_201c63c(*(uint *)(v3 + 16), 2, 0, -60);
        Function_201c63c(*(uint *)(v3 + 16), 3, 0, -60);
        Function_201c63c(*(uint *)(v3 + 16), 5, 0, 60);
        Function_201c63c(*(uint *)(v3 + 16), 6, 0, 60);
        Function_201c63c(*(uint *)(v3 + 16), 7, 0, 60);
        Function_200f174(3u, 1, 1, 0, 16, 1, 76);
        ++*(uchar *)(v3 + 1);
        result = ((int (*)(void))Function_21d4b54)();
      }
      else
      {
LABEL_63:
        result = ((int (*)(void))Function_21d4b54)();
      }
      break;
    case 0x10:
      Function_21d6290(*(uint *)(v3 + 20), 0x10000);
      if ( Function_200f2ac() )
      {
        Function_200f174(4u, 1, 1, 0, 16, 1, 76);
        ++*(uchar *)(v3 + 1);
      }
      result = ((int (*)(void))Function_21d4b54)();
      break;
    case 0x11:
      Function_21d6290(*(uint *)(v3 + 20), 0x10000);
      if ( Function_200f2ac() )
      {
        if ( v5 >= 2215 )
          Function_21d4e90(v3);
        if ( v5 >= 2216 )
        {
          *(uchar *)(v3 + 583) |= 0x11u;
          Function_200f174(0, 0, 0, 0x7FFF, 6, 1, 76);
          ++*(uchar *)(v3 + 1);
        }
        result = ((int (*)(void))Function_21d4b54)();
      }
      else
      {
        result = ((int (*)(void))Function_21d4b54)();
      }
      break;
    case 0x12:
      Function_21d4e90(v3);
      Function_21d6290(*(uint *)(v3 + 20), 0x10000);
      if ( Function_200f2ac() )
      {
        byte_21BF6E1 = 1;
        Function_201ffe8();
        ++*(uchar *)(v3 + 1);
      }
      result = ((int (*)(void))Function_21d4b54)();
      break;
    case 0x13:
      result = 1;
      break;
    default:
LABEL_8:
      result = Function_21d4b54(v7);
      break;
  }
  return result;
}

//----- (021D4B54) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (021D4B70) --------------------------------------------------------
int __fastcall Function_21d4b70(int *a1)
{
  int *v1;
  int result;

  v1 = a1;
  a1[152] += 640;
  a1[153] += 272;
  Function_2019184(a1[4], 1u, 3u, -(a1[153] >> 12));
  Function_2019184(v1[4], 2u, 3u, -(v1[152] >> 12));
  Function_2019184(v1[4], 5u, 3u, -(v1[153] >> 12));
  Function_2019184(v1[4], 6u, 3u, -(v1[152] >> 12));
  result = 0;
  v1[3] = 0;
  return result;
}

//----- (021D4BE4) --------------------------------------------------------
int __fastcall Function_21d4be4(int a1)
{
  int v1;

  v1 = a1;
  Function_201c63c(*(uint *)(a1 + 16), 3, 1u, 16);
  return Function_201c63c(*(uint *)(v1 + 16), 7, 1u, -16);
}

//----- (021D4C04) --------------------------------------------------------
int __fastcall Function_21d4c04(int a1, int a2)
{
  int v2;
  int result;
  short v4;
  short v5;
  short v6;
  short v7;
  short v8;
  short v9;

  v2 = a1;
  result = 1860;
  if ( a2 == 1860 )
  {
    WIN_IN = WIN_IN & 0xFFC0 | 0x3F;
    WIN_OUT = WIN_OUT & 0xFFC0 | 0x3D;
    *(ushort *)(v2 + 586) = 0;
    *(ushort *)(v2 + 588) = 255;
    *(ushort *)(v2 + 590) = 0;
    *(ushort *)(v2 + 592) = 136;
    v4 = *(ushort *)(v2 + 592);
    v5 = *(ushort *)(v2 + 590);
    WIN0_X1 = *(ushort *)(v2 + 588) & 0xFF | (*(ushort *)(v2 + 586) << 8) & 0xFF00;
    WIN0_Y1 = (uchar)v4 | (v5 << 8) & 0xFF00;
    REG_DISPCNT = REG_DISPCNT & 0xFFFF1FFF | 0x2000;
    SUB_WIN_IN = SUB_WIN_IN & 0xFFC0 | 0x3F;
    SUB_WIN_OUT = SUB_WIN_OUT & 0xFFC0 | 0x3D;
    SUB_WIN_IN = ((uint)&SUB_WIN_IN >> 13) | SUB_WIN_IN & 0xC0FF | 0x1F00;
    *(ushort *)(v2 + 594) = 0;
    *(ushort *)(v2 + 596) = 255;
    *(ushort *)(v2 + 598) = 0;
    *(ushort *)(v2 + 600) = 136;
    v6 = *(ushort *)(v2 + 600);
    v7 = *(ushort *)(v2 + 598) << 8;
    SUB_WIN0_X1 = *(ushort *)(v2 + 596) & 0xFF | (*(ushort *)(v2 + 594) << 8) & 0xFF00;
    SUB_WIN0_Y1 = v7 & 0xFF00 | (uchar)v6;
    v8 = *(ushort *)(v2 + 600);
    v9 = *(ushort *)(v2 + 598);
    SUB_WIN1_X1 = (uint)&SUB_WIN_IN >> 18;
    SUB_WIN1_Y1 = (v9 << 8) & 0xFF00 | (uchar)v8;
    result = REG_DISPCNT_SUB & 0xFFFF1FFF | 0x6000;
    REG_DISPCNT_SUB = REG_DISPCNT_SUB & 0xFFFF1FFF | 0x6000;
  }
  else if ( a2 > 1860 )
  {
    if ( Function_2019ff0(*(uint *)(v2 + 16), 1) >= 256 )
      *(uchar *)(v2 + 584) |= 2u;
    if ( Function_2019ff0(*(uint *)(v2 + 16), 5) <= -256 )
      *(uchar *)(v2 + 584) |= 0x20u;
    Function_201c63c(*(uint *)(v2 + 16), 1, 1u, 12);
    Function_201c63c(*(uint *)(v2 + 16), 1, 4u, -1);
    Function_201c63c(*(uint *)(v2 + 16), 5, 1u, -12);
    result = Function_201c63c(*(uint *)(v2 + 16), 5, 4u, -1);
  }
  return result;
}

//----- (021D4DC8) --------------------------------------------------------
int __fastcall Function_21d4dc8(int a1, int a2)
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

  v2 = a1;
  v3 = a2;
  if ( a2 > 1928 )
  {
    v4 = Function_20192ec(*(uint *)(a1 + 16), 1) + 20;
    if ( v4 > 0 )
      v4 = 0;
    Function_201c63c(*(uint *)(v2 + 16), 1, 0, v4);
    v5 = Function_20192ec(*(uint *)(v2 + 16), 5) - 20;
    if ( v5 < 0 )
      v5 = 0;
    Function_201c63c(*(uint *)(v2 + 16), 5, 0, v5);
  }
  if ( v3 >= 1934 )
  {
    v6 = Function_20192ec(*(uint *)(v2 + 16), 2) + 20;
    if ( v6 > 0 )
      v6 = 0;
    Function_201c63c(*(uint *)(v2 + 16), 2, 0, v6);
    v7 = Function_20192ec(*(uint *)(v2 + 16), 6) - 20;
    if ( v7 < 0 )
      v7 = 0;
    Function_201c63c(*(uint *)(v2 + 16), 6, 0, v7);
  }
  result = 1940;
  if ( v3 >= 1940 )
  {
    v9 = Function_20192ec(*(uint *)(v2 + 16), 3) + 20;
    if ( v9 > 0 )
      v9 = 0;
    Function_201c63c(*(uint *)(v2 + 16), 3, 0, v9);
    v10 = Function_20192ec(*(uint *)(v2 + 16), 7) - 20;
    if ( v10 < 0 )
      v10 = 0;
    result = Function_201c63c(*(uint *)(v2 + 16), 7, 0, v10);
  }
  return result;
}

//----- (021D4E90) --------------------------------------------------------
int __fastcall Function_21d4e90(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = a1;
  v2 = Function_20192ec(*(uint *)(a1 + 16), 1) + 12;
  if ( v2 > 0 )
    v2 = 0;
  Function_201c63c(*(uint *)(v1 + 16), 1, 0, v2);
  v3 = Function_20192ec(*(uint *)(v1 + 16), 5) - 12;
  if ( v3 < 0 )
    v3 = 0;
  Function_201c63c(*(uint *)(v1 + 16), 5, 0, v3);
  v4 = Function_20192ec(*(uint *)(v1 + 16), 2) + 12;
  if ( v4 > 0 )
    v4 = 0;
  Function_201c63c(*(uint *)(v1 + 16), 2, 0, v4);
  v5 = Function_20192ec(*(uint *)(v1 + 16), 6) - 12;
  if ( v5 < 0 )
    v5 = 0;
  Function_201c63c(*(uint *)(v1 + 16), 6, 0, v5);
  v6 = Function_20192ec(*(uint *)(v1 + 16), 3) + 12;
  if ( v6 > 0 )
    v6 = 0;
  Function_201c63c(*(uint *)(v1 + 16), 3, 0, v6);
  v7 = Function_20192ec(*(uint *)(v1 + 16), 7) - 12;
  if ( v7 < 0 )
    v7 = 0;
  return Function_201c63c(*(uint *)(v1 + 16), 7, 0, v7);
}

//----- (021D4F38) --------------------------------------------------------
uint __fastcall Function_21d4f38(int a1, int a2, int a3, int a4)
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
  char *v14;
  int v15;
  int v16;
  int v17;
  short v18;
  short v19;
  short v20;
  short v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  char v28;
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
  v35 = 0;
  v36 = 0;
  v37 = 0;
  if ( a2 >= 1191 )
  {
    if ( a2 == 1191 )
    {
      v32 = -262144;
      v33 = 0;
      v34 = -196608;
      Function_20206d0(&v32, 2731713, dword_21D7500, 1473, 0, 0, *(uint *)(a1 + 40));
      v29 = 0;
      v30 = 327680;
      v31 = 0;
      v6 = Function_2020990(&v29, *(uint *)(v4 + 40));
      Function_20b2628(v6, v7, v8);
      G3X_SetFog(1, 0, 3, 4500);
      v9 = 0;
      GFX_FOG_COLOR = 2064383;
      v10 = 4;
      v11 = 0;
      v12 = 8;
      v13 = 12;
      v14 = &v28;
      do
      {
        ++v9;
        *(uint *)v14 = (v10 << 8) | v11 | (v12 << 16) | (v13 << 24);
        v14 += 4;
        v10 += 16;
        v11 += 16;
        v12 += 16;
        v13 += 16;
      }
      while ( v9 < 8 );
      Function_20bfd44((int *)&v28);
      G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 2, 33, 7, 9);
      Function_2019060(1u, 0);
      result = Function_2019120(1u, 1);
    }
    else if ( a2 >= 1401 )
    {
      if ( a2 == 1401 )
      {
        v25 = 1966080;
        v26 = 0;
        v27 = -458752;
        Function_20206d0(&v25, 2731713, dword_21D7500, 1473, 0, 0, *(uint *)(a1 + 40));
        v22 = 0;
        v23 = 327680;
        v24 = 0;
        Function_2020990(&v22, *(uint *)(v4 + 40));
        v18 = 0;
        v19 = 1664;
        v20 = 0;
        v21 = 0;
        v15 = Function_20209f8(&v18, *(ushort **)(v4 + 40));
        Function_20b2628(v15, v16, v17);
        G3X_SetFog(0, 0, 0, 0);
        REG_BLDCNT = 0;
        result = Function_2019120(1u, 0);
      }
      else
      {
        if ( a2 >= 1560 && Function_2020a88(*(uint *)(a1 + 40)) + 24 < 0x4000 )
          Function_202094c(24, *(uint *)(v4 + 40));
        v35 -= 0x2000;
        result = Function_2020990(&v35, *(uint *)(v4 + 40));
      }
    }
    else
    {
      v35 += 0x4000;
      Function_2020990(&v35, *(uint *)(a1 + 40));
      result = Function_201c63c(*(uint *)(v4 + 16), 1, 1u, 4);
    }
  }
  else
  {
    if ( Function_2020a88(*(uint *)(a1 + 40)) - 32 <= 1473 )
      Function_2020910(1473, *(uint *)(v4 + 40));
    else
      Function_202094c(65504, *(uint *)(v4 + 40));
    v37 -= 0x2000;
    result = Function_2020990(&v35, *(uint *)(v4 + 40));
  }
  return result;
}

//----- (021D513C) --------------------------------------------------------
int *__fastcall Function_21d513c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int *result;

  v3 = a1;
  v4 = a2;
  if ( a3 > 1395 )
  {
    result = (int *)1401;
    if ( a3 == 1401 )
    {
      if ( Function_200f2ac() != 1 )
        ErrorHandler();
      Function_21d35b8(v3);
      Function_21d40b8(v4, 2);
      result = Function_200f174(3u, 1, 1, 0, 4, 1, 76);
    }
  }
  else if ( a3 < 1395 )
  {
    result = (int *)(a3 - 1185);
    switch ( (uchar)a3 + 95 )
    {
      case 0:
        result = Function_200f174(3u, 0, 0, 0, 4, 1, 76);
        break;
      case 6:
        if ( Function_200f2ac() != 1 )
          ErrorHandler();
        Function_21d35b8(v3);
        result = (int *)Function_21d40dc(v4, 1);
        break;
      case 7:
        result = (int *)Function_21d40dc(a2, 1);
        break;
      case 8:
        result = (int *)Function_21d40dc(a2, 1);
        break;
      case 9:
        if ( Function_21d40dc(a2, 1) != 1 )
          ErrorHandler();
        result = Function_200f174(3u, 1, 1, 0, 4, 1, 76);
        break;
      default:
        return result;
    }
  }
  else
  {
    result = Function_200f174(3u, 0, 0, 0, 4, 1, 76);
  }
  return result;
}

//----- (021D5254) --------------------------------------------------------
int __fastcall Function_21d5254(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( *(uint *)(a1 + 8) )
    *(uchar *)(a1 + 668) = 3;
  switch ( *(uchar *)(a1 + 668) )
  {
    case 0:
      Function_21d52c8(a1);
      ++*(uchar *)(v1 + 668);
      goto LABEL_9;
    case 1:
      Function_21d5308(a1 + 668);
      ++*(uchar *)(v1 + 668);
      goto LABEL_9;
    case 2:
      if ( Function_21d5390(a1 + 668, *(uint *)(a1 + 4)) )
        ++*(uchar *)(v1 + 668);
      goto LABEL_9;
    case 3:
      Function_21d5478(a1);
      result = 1;
      break;
    default:
LABEL_9:
      result = 0;
      break;
  }
  return result;
}

//----- (021D52C8) --------------------------------------------------------
int __fastcall Function_21d52c8(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_21d25f0();
  Function_21d2a00((uint *)v1);
  *(uint *)(v1 + 676) = *(uint *)(v1 + 12);
  SetBrightnessWithValue(0, 0x7FFF);
  SetBrightnessWithValue(1, 0x7FFF);
  REG_BLDCNT = 0;
  result = 670;
  *(uchar *)(v1 + 670) = 1;
  return result;
}

//----- (021D5308) --------------------------------------------------------
int __fastcall Function_21d5308(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Call_LoadFromNARC_RLCN(128, 99, 0, 0, 0, 76);
  LoadFromNARC_RGCN(128, 98, *(uint **)(v1 + 8), 2u, 0, 0, 0, 76);
  LoadFromNARC_RCSN(128, 97, *(uint **)(v1 + 8), 2u, 0, 0, 0, 76);
  Function_201ff00();
  Function_201ff48(0);
  Function_201ffb0(0);
  *(uint *)(v1 + 4) = -98304;
  Function_2019184(*(uint *)(v1 + 8), 2u, 0, 0);
  Function_2019184(*(uint *)(v1 + 8), 2u, 3u, *(uint *)(v1 + 4) / 4096);
  result = 1;
  *(uchar *)(v1 + 3) = 1;
  return result;
}

//----- (021D5390) --------------------------------------------------------
int __fastcall Function_21d5390(int a1, int a2)
{
  int v2;
  int result;
  int v4;

  v2 = a1;
  switch ( *(uchar *)(a1 + 1) )
  {
    case 0:
      if ( a2 >= 2205 )
      {
        Function_200f174(0, 1, 1, 0x7FFF, 30, 1, 76);
        ++*(uchar *)(v2 + 1);
      }
      goto LABEL_12;
    case 1:
      if ( Function_200f2ac() )
      {
        Function_201ff0c(4u, 1);
        Function_200f174(0, 1, 1, 0, 90, 1, 76);
        ++*(uchar *)(v2 + 1);
      }
      goto LABEL_12;
    case 2:
      if ( Function_200f2ac() )
        ++*(uchar *)(v2 + 1);
      goto LABEL_12;
    case 3:
      if ( a2 >= 2420 )
      {
        Function_200f174(0, 0, 0, 0, 8, 1, 76);
        ++*(uchar *)(v2 + 1);
      }
      goto LABEL_12;
    case 4:
      if ( !Function_200f2ac() )
        goto LABEL_12;
      result = 1;
      break;
    default:
LABEL_12:
      v4 = *(uint *)(v2 + 4) + 1024;
      *(uint *)(v2 + 4) = v4;
      Function_2019184(*(uint *)(v2 + 8), 2u, 3u, v4 / 4096);
      result = 0;
      break;
  }
  return result;
}

//----- (021D5478) --------------------------------------------------------
int __fastcall Function_21d5478(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( *(uchar *)(a1 + 670) )
  {
    Function_2019044(*(uint *)(a1 + 12), 2);
    free(*(uint *)(v1 + 12));
    *(uchar *)(v1 + 670) = 0;
  }
  result = 671;
  if ( *(uchar *)(v1 + 671) )
    *(uchar *)(v1 + 671) = 0;
  return result;
}

//----- (021D54B0) --------------------------------------------------------
int Function_21d54b0()
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = 11;
  v2 = 0x8000;
  v3 = 0x4000;
  v4 = 76;
  Function_201e86c(&v1);
  Function_201f834(11, 0x4Cu);
  Function_201e994();
  Function_201f8e4();
  return Function_201dbec(6, 0x4Cu);
}

//----- (021D54E8) --------------------------------------------------------
int __fastcall Function_21d54e8(int a1, int *a2, int a3, int a4, int a5, int a6, int a7)
{
  int *v7;
  int v8;
  int result;

  v7 = a2;
  v8 = a4;
  Function_20093b4(a5, a1, a1, a1, a1, -1, -1, a6, a3, a2[75], a2[76], a2[77], a2[78], 0, 0);
  *(uint *)v8 = *v7;
  *(uint *)(v8 + 4) = a5;
  *(uint *)(v8 + 8) = 0;
  *(uint *)(v8 + 12) = 0;
  *(uint *)(v8 + 16) = 0;
  *(uint *)(v8 + 20) = 4096;
  *(uint *)(v8 + 24) = 4096;
  *(uint *)(v8 + 28) = 4096;
  *(ushort *)(v8 + 32) = 0;
  *(uint *)(v8 + 36) = 1;
  *(uint *)(v8 + 40) = a7;
  result = 76;
  *(uint *)(v8 + 44) = 76;
  return result;
}

//----- (021D555C) --------------------------------------------------------
int Function_21d555c()
{
  return 672;
}

//----- (021D5564) --------------------------------------------------------
uint __fastcall Function_21d5564(int a1)
{
  int v1;
  int v2;
  char *v3;
  int *v4;
  int v5;
  int v6;

  v1 = a1;
  REG_DISPCNT = REG_DISPCNT & 0xFFCFFFEF | 0x10;
  REG_DISPCNT_SUB = REG_DISPCNT_SUB & 0xFFCFFFEF | 0x10;
  Function_21d54b0();
  Function_20a7944();
  Function_200a784(0, 128, 0, 32, 0, 0x80u, 0, 0x20u, 0x4Cu);
  *(uint *)v1 = Function_20095c4(33, v1 + 4, 76, v2);
  v3 = &byte_21D7914;
  *(uint *)(v1 + 668) = Function_201dcc8(3, 0x4Cu);
  v4 = 0;
  v5 = v1;
  do
  {
    *(uint *)(v5 + 300) = Function_2009714((uchar)*v3, v4, 0x4Cu);
    v4 = (int *)((char *)v4 + 1);
    ++v3;
    v5 += 4;
  }
  while ( (int)v4 < 4 );
  *(uint *)(v1 + 316) = Function_200985c(*(uint *)(v1 + 300), 128, 46, 0, 0, 1, 76);
  *(uint *)(v1 + 332) = Function_200985c(*(uint *)(v1 + 300), 128, 46, 0, 1, 2, 76);
  *(uint *)(v1 + 348) = Function_200985c(*(uint *)(v1 + 300), 128, 50, 0, 2, 1, 76);
  *(uint *)(v1 + 364) = Function_200985c(*(uint *)(v1 + 300), 128, 87, 0, 3, 1, 76);
  *(uint *)(v1 + 380) = Function_200985c(*(uint *)(v1 + 300), 128, 22, 0, 4, 1, 76);
  *(uint *)(v1 + 396) = Function_200985c(*(uint *)(v1 + 300), 128, 23, 0, 5, 2, 76);
  *(uint *)(v1 + 412) = Function_200985c(*(uint *)(v1 + 300), 128, 91, 0, 6, 1, 76);
  *(uint *)(v1 + 428) = Function_200985c(*(uint *)(v1 + 300), 128, 83, 0, 7, 1, 76);
  *(uint *)(v1 + 444) = Function_200985c(*(uint *)(v1 + 300), 128, 83, 0, 8, 2, 76);
  *(uint *)(v1 + 460) = Function_200985c(*(uint *)(v1 + 300), 128, 54, 0, 9, 1, 76);
  *(uint *)(v1 + 476) = Function_200985c(*(uint *)(v1 + 300), 128, 54, 0, 10, 2, 76);
  *(uint *)(v1 + 320) = Function_20098b8(*(uint *)(v1 + 304), 128, 49, 0, 0, 1, 1, 76);
  *(uint *)(v1 + 336) = Function_20098b8(*(uint *)(v1 + 304), 128, 49, 0, 1, 2, 1, 76);
  *(uint *)(v1 + 352) = Function_20098b8(*(uint *)(v1 + 304), 128, 53, 0, 2, 1, 1, 76);
  *(uint *)(v1 + 368) = Function_20098b8(*(uint *)(v1 + 304), 128, 90, 0, 3, 1, 1, 76);
  *(uint *)(v1 + 384) = Function_20098b8(*(uint *)(v1 + 304), 128, 20, 0, 4, 1, 1, 76);
  *(uint *)(v1 + 400) = Function_20098b8(*(uint *)(v1 + 304), 128, 21, 0, 5, 2, 1, 76);
  *(uint *)(v1 + 416) = Function_20098b8(*(uint *)(v1 + 304), 128, 94, 0, 6, 1, 1, 76);
  *(uint *)(v1 + 432) = Function_20098b8(*(uint *)(v1 + 304), 128, 86, 0, 7, 1, 1, 76);
  *(uint *)(v1 + 448) = Function_20098b8(*(uint *)(v1 + 304), 128, 86, 0, 8, 2, 1, 76);
  *(uint *)(v1 + 464) = Function_20098b8(*(uint *)(v1 + 304), 128, 57, 0, 9, 1, 3, 76);
  *(uint *)(v1 + 480) = Function_20098b8(*(uint *)(v1 + 304), 128, 57, 0, 10, 2, 3, 76);
  *(uint *)(v1 + 324) = Function_2009918(*(uint *)(v1 + 308), 128, 48, 0, 0, 2u, 76);
  *(uint *)(v1 + 340) = Function_2009918(*(uint *)(v1 + 308), 128, 48, 0, 1, 2u, 76);
  *(uint *)(v1 + 356) = Function_2009918(*(uint *)(v1 + 308), 128, 51, 0, 2, 2u, 76);
  *(uint *)(v1 + 372) = Function_2009918(*(uint *)(v1 + 308), 128, 89, 0, 3, 2u, 76);
  *(uint *)(v1 + 388) = Function_2009918(*(uint *)(v1 + 308), 128, 24, 0, 4, 2u, 76);
  *(uint *)(v1 + 420) = Function_2009918(*(uint *)(v1 + 308), 128, 93, 0, 6, 2u, 76);
  *(uint *)(v1 + 436) = Function_2009918(*(uint *)(v1 + 308), 128, 85, 0, 7, 2u, 76);
  *(uint *)(v1 + 452) = Function_2009918(*(uint *)(v1 + 308), 128, 85, 0, 8, 2u, 76);
  *(uint *)(v1 + 468) = Function_2009918(*(uint *)(v1 + 308), 128, 55, 0, 9, 2u, 76);
  *(uint *)(v1 + 484) = Function_2009918(*(uint *)(v1 + 308), 128, 55, 0, 10, 2u, 76);
  *(uint *)(v1 + 404) = Function_2009918(*(uint *)(v1 + 308), 128, 25, 0, 5, 2u, 76);
  *(uint *)(v1 + 328) = Function_2009918(*(uint *)(v1 + 312), 128, 47, 0, 0, 3u, 76);
  *(uint *)(v1 + 344) = Function_2009918(*(uint *)(v1 + 312), 128, 47, 0, 1, 3u, 76);
  *(uint *)(v1 + 360) = Function_2009918(*(uint *)(v1 + 312), 128, 52, 0, 2, 3u, 76);
  *(uint *)(v1 + 376) = Function_2009918(*(uint *)(v1 + 312), 128, 88, 0, 3, 3u, 76);
  *(uint *)(v1 + 392) = Function_2009918(*(uint *)(v1 + 312), 128, 26, 0, 4, 3u, 76);
  *(uint *)(v1 + 408) = Function_2009918(*(uint *)(v1 + 312), 128, 27, 0, 5, 3u, 76);
  *(uint *)(v1 + 424) = Function_2009918(*(uint *)(v1 + 312), 128, 92, 0, 6, 3u, 76);
  *(uint *)(v1 + 440) = Function_2009918(*(uint *)(v1 + 312), 128, 84, 0, 7, 3u, 76);
  *(uint *)(v1 + 456) = Function_2009918(*(uint *)(v1 + 312), 128, 84, 0, 8, 3u, 76);
  *(uint *)(v1 + 472) = Function_2009918(*(uint *)(v1 + 312), 128, 56, 0, 9, 3u, 76);
  *(uint *)(v1 + 488) = Function_2009918(*(uint *)(v1 + 312), 128, 56, 0, 10, 3u, 76);
  v6 = 0;
  do
  {
    Function_200a3dc(*(int **)(v1 + 316));
    Function_200a640(*(int **)(v1 + 320));
    ++v6;
    v1 += 16;
  }
  while ( v6 < 11 );
  return Function_201ff0c(0x10u, 1);
}

//----- (021D5BAC) --------------------------------------------------------
int *__fastcall Function_21d5bac(int a1)
{
  int v1;
  uint v2;
  int v3;
  uint v4;
  uint v5;
  int v6;

  v1 = a1;
  v2 = 0;
  do
  {
    v3 = v1 + 16 * v2;
    Function_200a4e4(*(int **)(v3 + 316));
    Function_200a6dc(*(int **)(v3 + 320));
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 < 0xB );
  v4 = 0;
  do
  {
    Function_2009754(*(int **)(v1 + 4 * v4 + 300));
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 < 4 );
  Function_2021964(*(int **)v1);
  v5 = 0;
  do
  {
    Function_20094f0((int *)(v1 + 560 + 36 * v5));
    v5 = (v5 + 1) & 0xFF;
  }
  while ( v5 < 3 );
  v6 = *(uint *)(v1 + 668);
  if ( v6 )
  {
    Call_free4(v6);
    *(uint *)(v1 + 668) = 0;
  }
  Function_200a878();
  Function_201e958();
  Function_201f8b4();
  return Function_201dc3c();
}

//----- (021D5C3C) --------------------------------------------------------
int __fastcall Function_21d5c3c(int *a1)
{
  int *v1;
  int *v2;
  int *v3;
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
  char v25;
  int v26;
  int v27;
  char v28;

  v1 = a1;
  v19 = 4;
  v20 = 5;
  v21 = 6;
  v22 = 7;
  v23 = 8;
  v24 = 9;
  v13 = 264;
  v14 = 288;
  v15 = 288;
  v16 = 288;
  v17 = 288;
  v18 = 288;
  v7 = 128;
  v8 = 112;
  v9 = 144;
  v10 = 160;
  v11 = 144;
  v12 = 176;
  Function_21d54e8(0, a1, 0, (int)&v25, (int)(a1 + 140), 1, 1);
  v26 = 327680;
  v27 = 458752;
  v1[123] = Function_2021aa0((uint **)&v25);
  Function_2021cc8(v1[123], 0);
  Function_2021cac(v1[123], 0);
  Function_21d54e8(1, v1, 0, (int)&v25, (int)(v1 + 158), 1, 2);
  v26 = 327680;
  v27 = 1245184;
  v1[124] = Function_2021aa0((uint **)&v25);
  Function_2021cc8(v1[124], 0);
  Function_2021cac(v1[124], 0);
  Function_21d54e8(2, v1, 0, (int)&v25, (int)(v1 + 149), 1, 1);
  v26 = 720896;
  v27 = 458752;
  v1[125] = Function_2021aa0((uint **)&v25);
  Function_2021cc8(v1[125], 0);
  Function_2021cac(v1[125], 0);
  Function_21d54e8(3, v1, 0, (int)&v25, (int)&v28, 0, 1);
  v26 = -262144;
  v27 = 458752;
  v1[126] = Function_2021aa0((uint **)&v25);
  Function_2021cc8(v1[126], 1);
  Function_2021cac(v1[126], 0);
  Function_21d54e8(6, v1, 0, (int)&v25, (int)&v28, 0, 1);
  v26 = 1310720;
  v27 = 458752;
  v1[133] = Function_2021aa0((uint **)&v25);
  Function_2021cc8(v1[133], 1);
  Function_2021cac(v1[133], 0);
  Function_21d54e8(7, v1, 1, (int)&v25, (int)&v28, 0, 1);
  v26 = 0x80000;
  v27 = 393216;
  v1[134] = Function_2021aa0((uint **)&v25);
  Function_2021cc8(v1[134], 1);
  Function_2021cac(v1[134], 0);
  Function_2021cf8(v1[134], 1);
  Function_21d54e8(8, v1, 1, (int)&v25, (int)&v28, 0, 2);
  v26 = 0x80000;
  v27 = 1179648;
  v1[135] = Function_2021aa0((uint **)&v25);
  Function_2021cc8(v1[135], 1);
  Function_2021cac(v1[135], 0);
  Function_2021cf8(v1[135], 1);
  Function_21d54e8(9, v1, 3, (int)&v25, (int)&v28, 0, 1);
  v26 = 0x80000;
  v27 = 425984;
  v1[136] = Function_2021aa0((uint **)&v25);
  Function_2021cc8(v1[136], 1);
  Function_2021cac(v1[136], 0);
  v1[137] = Function_2021aa0((uint **)&v25);
  Function_2021cc8(v1[137], 1);
  Function_2021cac(v1[137], 0);
  Function_21d54e8(10, v1, 3, (int)&v25, (int)&v28, 0, 2);
  v26 = 0x80000;
  v27 = 1212416;
  v1[138] = Function_2021aa0((uint **)&v25);
  Function_2021cc8(v1[138], 1);
  Function_2021cac(v1[138], 0);
  v1[139] = Function_2021aa0((uint **)&v25);
  Function_2021cc8(v1[139], 1);
  Function_2021cac(v1[139], 0);
  v6 = 0;
  v2 = &v13;
  v3 = &v7;
  v4 = &v19;
  do
  {
    Function_21d54e8(4, v1, 0, (int)&v25, (int)&v28, 0, 1);
    v26 = *v2 << 12;
    v27 = *v3 << 12;
    v1[*v4 + 123] = Function_2021aa0((uint **)&v25);
    Function_2021cc8(v1[*v4 + 123], 1);
    Function_2021cac(v1[*v4 + 123], 0);
    ++v2;
    result = v6 + 1;
    ++v3;
    ++v4;
    v6 = result;
  }
  while ( result < 6 );
  return result;
}

//----- (021D5FB4) --------------------------------------------------------
uint __fastcall Function_21d5fb4(int *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint *v6;
  int v7;
  uint result;
  char v9;
  char v10;
  int v11;

  v11 = a4;
  v4 = a2;
  Function_21d54e8(5, a1, 0, (int)&v9, (int)&v10, 0, 2);
  v5 = 0;
  do
  {
    v6 = (uint *)Function_21d6794(v4, v5);
    v7 = Function_2021aa0((uint **)&v9);
    *v6 = v7;
    Function_2021cc8(v7, 0);
    result = Function_2021cac(*v6, 0);
    ++v5;
  }
  while ( v5 < 16 );
  return result;
}

//----- (021D6000) --------------------------------------------------------
uint __fastcall Function_21d6000(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;
  uint result;

  v2 = 0;
  v3 = a2;
  do
  {
    v4 = (uint *)Function_21d6794(v3, v2);
    result = Function_2021cac(*v4, 0);
    ++v2;
  }
  while ( v2 < 16 );
  return result;
}

//----- (021D6020) --------------------------------------------------------
uint __fastcall Function_21d6020(int *a1)
{
  int *v1;
  uint result;

  v1 = a1;
  Function_20219f8(*a1);
  result = v1[167];
  if ( result )
    result = Function_201dce8();
  return result;
}

//----- (021D603C) --------------------------------------------------------
uint __fastcall Function_21d603c(int a1, int a2, int a3)
{
  return Function_2021cac(*(uint *)(a1 + 4 * a2 + 492), a3);
}

//----- (021D6050) --------------------------------------------------------
uint __fastcall Function_21d6050(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_2021cc8(*(uint *)(a1 + 492), a2);
  Function_2021cc8(*(uint *)(v2 + 500), v3);
  return Function_2021cc8(*(uint *)(v2 + 496), v3);
}

//----- (021D607C) --------------------------------------------------------
int __fastcall Function_21d607c(int a1)
{
  int v1;
  int v2;
  int *v3;
  int v4;
  int v5;
  int *v6;
  int v7;
  int v9;
  int v10;
  int v11;

  v1 = a1;
  v2 = *(uint *)(a1 + 496);
  Function_2021d28();
  v4 = v3[1];
  v9 = *v3;
  v10 = v4;
  v11 = v3[2];
  v9 -= 512;
  Function_2021c50(*(uint **)(v1 + 496), &v9);
  v5 = *(uint *)(v1 + 500);
  Function_2021d28();
  v7 = v6[1];
  v9 = *v6;
  v10 = v7;
  v11 = v6[2];
  v9 += 512;
  return Function_2021c50(*(uint **)(v1 + 500), &v9);
}

//----- (021D60E0) --------------------------------------------------------
int __fastcall Function_21d60e0(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  int *v6;
  int v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v2 = a2;
  v3 = a1;
  if ( a2 < 1410 )
    return 0;
  if ( a2 == 1410 )
    Function_21d603c(a1, 3, 1);
  if ( v2 >= 1575 )
  {
    v8 = *(uint *)(v3 + 504);
    Function_2021d28();
    v10 = v9[1];
    v11 = *v9;
    v12 = v10;
    v13 = v9[2];
    v11 += 73728;
    if ( v11 < 1310720 )
    {
      Function_2021c50(*(uint **)(v3 + 504), &v11);
      result = 0;
    }
    else
    {
      v11 = 1310720;
      Function_2021c50(*(uint **)(v3 + 504), &v11);
      Function_21d603c(v3, 3, 0);
      result = 1;
    }
  }
  else
  {
    v5 = *(uint *)(v3 + 504);
    Function_2021d28();
    v7 = v6[1];
    v11 = *v6;
    v12 = v7;
    v13 = v6[2];
    v11 += 73728;
    if ( v11 < 720896 )
    {
      Function_2021c50(*(uint **)(v3 + 504), &v11);
      result = 0;
    }
    else
    {
      v11 = 720896;
      Function_2021c50(*(uint **)(v3 + 504), &v11);
      result = 1;
    }
  }
  return result;
}

//----- (021D61B8) --------------------------------------------------------
int __fastcall Function_21d61b8(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  int *v6;
  int v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v2 = a2;
  v3 = a1;
  if ( a2 < 1500 )
    return 0;
  if ( a2 == 1500 )
    Function_21d603c(a1, 10, 1);
  if ( v2 >= 1575 )
  {
    v8 = *(uint *)(v3 + 532);
    Function_2021d28();
    v10 = v9[1];
    v11 = *v9;
    v12 = v10;
    v13 = v9[2];
    v11 -= 73728;
    if ( v11 > -262144 )
    {
      Function_2021c50(*(uint **)(v3 + 532), &v11);
      result = 0;
    }
    else
    {
      v11 = -262144;
      Function_2021c50(*(uint **)(v3 + 532), &v11);
      Function_21d603c(v3, 10, 0);
      result = 1;
    }
  }
  else
  {
    v5 = *(uint *)(v3 + 532);
    Function_2021d28();
    v7 = v6[1];
    v11 = *v6;
    v12 = v7;
    v13 = v6[2];
    v11 -= 73728;
    if ( v11 > 327680 )
    {
      Function_2021c50(*(uint **)(v3 + 532), &v11);
      result = 0;
    }
    else
    {
      v11 = 327680;
      Function_2021c50(*(uint **)(v3 + 532), &v11);
      result = 1;
    }
  }
  return result;
}

//----- (021D6290) --------------------------------------------------------
int __fastcall Function_21d6290(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  int v12;
  int *v13;
  int v14;
  int v15;
  int v17;
  int v18;
  int v19;
  int v20;

  v20 = a4;
  v4 = a1;
  v5 = a2;
  if ( byte_21BF6E1 )
  {
    v6 = 15;
    v7 = 13;
  }
  else
  {
    v6 = 13;
    v7 = 15;
  }
  v8 = *(uint *)(a1 + 492 + 4 * v6);
  Function_2021d28();
  v10 = v9[1];
  v17 = *v9;
  v18 = v10;
  v19 = v9[2];
  v11 = v17 + v5;
  v17 = v11;
  if ( v11 >= 1572864 )
    v17 = v11 - 0x100000;
  Function_2021c50(*(uint **)(v4 + 492 + 4 * v6), &v17);
  v17 -= 0x100000;
  Function_2021c50(*(uint **)(v4 + 4 * (v6 + 1) + 492), &v17);
  v12 = *(uint *)(v4 + 492 + 4 * v7);
  Function_2021d28();
  v14 = v13[1];
  v17 = *v13;
  v18 = v14;
  v19 = v13[2];
  v15 = v17 - v5;
  v17 = v15;
  if ( v15 <= -524288 )
    v17 = v15 + 0x100000;
  Function_2021c50(*(uint **)(v4 + 492 + 4 * v7), &v17);
  v17 += 0x100000;
  return Function_2021c50(*(uint **)(v4 + 4 * (v7 + 1) + 492), &v17);
}

//----- (021D636C) --------------------------------------------------------
int __fastcall Function_21d636c(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int *v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  int v10;
  int v11;
  int v12;

  v2 = a1;
  if ( a2 )
  {
    Function_2021f24(a1[136], 2);
    Function_2021f24(v2[137], 2);
    Function_2021f24(v2[138], 2);
    Function_2021f24(v2[139], 2);
  }
  else if ( byte_21BF6E1 )
  {
    Function_2021f24(a1[136], 1);
    Function_2021f24(v2[137], 1);
    Function_2021f24(v2[138], 0);
    Function_2021f24(v2[139], 0);
  }
  else
  {
    Function_2021f24(a1[136], 0);
    Function_2021f24(v2[137], 0);
    Function_2021f24(v2[138], 1);
    Function_2021f24(v2[139], 1);
  }
  v3 = v2[136];
  Function_2021d28();
  v5 = v4[1];
  v10 = *v4;
  v11 = v5;
  v12 = v4[2];
  v10 = 0x80000;
  Function_2021c50((uint *)v2[136], &v10);
  v6 = v2[138];
  Function_2021d28();
  v8 = v7[1];
  v10 = *v7;
  v11 = v8;
  v12 = v7[2];
  v10 = 0x80000;
  return Function_2021c50((uint *)v2[138], &v10);
}

//----- (021D6470) --------------------------------------------------------
int __fastcall Function_21d6470(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  short v6;
  short v7;
  short v8;
  int result;
  int v10;
  int *v11;
  int v12;
  int v13;
  int *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;

  v19 = a4;
  v4 = a1;
  v5 = a2;
  v6 = a2 - 1860;
  if ( a2 - 1860 < 0 )
    v6 = 0;
  v7 = Function_2021d30(*(uint *)(a1 + 536));
  Function_2021c94(*(uint *)(v4 + 536), v7 + 7168 + v6);
  v8 = Function_2021d30(*(uint *)(v4 + 540));
  Function_2021c94(*(uint *)(v4 + 540), v8 - 7168 - v6);
  result = 1860;
  if ( v5 >= 1860 )
  {
    v10 = *(uint *)(v4 + 536);
    Function_2021d28();
    v12 = v11[1];
    v16 = *v11;
    v17 = v12;
    v18 = v11[2];
    v16 += 4096;
    Function_2021c50(*(uint **)(v4 + 536), &v16);
    v13 = *(uint *)(v4 + 540);
    Function_2021d28();
    v15 = v14[1];
    v16 = *v14;
    v17 = v15;
    v18 = v14[2];
    v16 -= 4096;
    result = Function_2021c50(*(uint **)(v4 + 540), &v16);
  }
  return result;
}

//----- (021D6530) --------------------------------------------------------
int __fastcall Function_21d6530(int a1, int a2, int a3, int a4)
{
  uint v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  int *v11;
  int v12;
  int result;
  uint v14;
  int v15;
  int v16;
  int *v17;
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

  v30 = a4;
  v19 = a1;
  v20 = a2;
  v24 = 4;
  v25 = 5;
  v26 = 6;
  v23 = 7;
  v21 = 8;
  v22 = 9;
  if ( a2 >= 1445 )
  {
    v4 = 0;
    do
    {
      v5 = v19 + 4 * *(&v24 + v4);
      v6 = *(uint *)(v5 + 492);
      Function_2021d28();
      v8 = v7[1];
      v27 = *v7;
      v28 = v8;
      v29 = v7[2];
      v27 -= dword_21D79AC[v4];
      v28 = v8 - 0x4000;
      Function_2021c50(*(uint **)(v5 + 492), &v27);
      v4 = (v4 + 1) & 0xFF;
    }
    while ( v4 < 3 );
  }
  if ( v20 >= 1490 )
  {
    v9 = v19 + 4 * v23;
    v10 = *(uint *)(v9 + 492);
    Function_2021d28();
    v12 = v11[1];
    v27 = *v11;
    v28 = v12;
    v29 = v11[2];
    v27 -= 20480;
    v28 = v12 - 12288;
    Function_2021c50(*(uint **)(v9 + 492), &v27);
  }
  result = v20;
  if ( v20 >= 1510 )
  {
    v14 = 0;
    do
    {
      v15 = v19 + 4 * *(&v21 + v14);
      v16 = *(uint *)(v15 + 492);
      Function_2021d28();
      v18 = v17[1];
      v27 = *v17;
      v28 = v18;
      v29 = v17[2];
      v27 -= dword_21D79A4[v14];
      v28 = v18 - 12288;
      Function_2021c50(*(uint **)(v15 + 492), &v27);
      result = (v14 + 1) << 24;
      v14 = (v14 + 1) & 0xFF;
    }
    while ( v14 < 2 );
  }
  return result;
}

//----- (021D6670) --------------------------------------------------------
int Function_21d6670()
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = 1;
  v2 = 0;
  v3 = 0;
  v4 = 76;
  Function_201e86c(&v1);
  Function_201f834(1, 0x4Cu);
  Function_201e994();
  return Function_201f8e4();
}

//----- (021D66A0) --------------------------------------------------------
int __fastcall Function_21d66a0(int *a1, int a2, int a3)
{
  int v3;
  int *v4;
  int v5;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  Function_20093b4(a3, 0, 0, 0, 0, -1, -1, 0, 0, a1[75], a1[76], a1[77], a1[78], 0, 0);
  *(uint *)v3 = *v4;
  *(uint *)(v3 + 4) = v5;
  *(uint *)(v3 + 8) = 0;
  *(uint *)(v3 + 12) = 0;
  *(uint *)(v3 + 16) = 0;
  *(uint *)(v3 + 20) = 4096;
  *(uint *)(v3 + 24) = 4096;
  *(uint *)(v3 + 28) = 4096;
  *(ushort *)(v3 + 32) = 0;
  *(uint *)(v3 + 36) = 1;
  *(uint *)(v3 + 40) = 1;
  result = 76;
  *(uint *)(v3 + 44) = 76;
  return result;
}

//----- (021D670C) --------------------------------------------------------
int *Function_21d670c()
{
  int *v0;

  v0 = (int *)malloc(0x4Cu, 500);
  Call_FillMemWithValue(v0, 0, 0x1F4u);
  Function_21d6800(v0);
  Function_21d6964(v0);
  return v0;
}

//----- (021D6734) --------------------------------------------------------
uint *__fastcall Function_21d6734(int a1)
{
  int v1;
  uint *v2;
  int *v3;

  v1 = a1;
  v2 = (uint *)malloc(0x4Cu, 8);
  v3 = (int *)malloc(0x4Cu, 12 * v1);
  v2[1] = v3;
  Call_FillMemWithValue(v3, 0, 12 * v1);
  *v2 = v1;
  return v2;
}

//----- (021D6760) --------------------------------------------------------
uint __fastcall Function_21d6760(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int *v4;

  v1 = a1;
  v2 = 0;
  if ( *a1 > 0 )
  {
    v3 = 0;
    do
    {
      v4 = *(int **)(v1[1] + v3 + 8);
      if ( v4 )
        Call_RemoveTaskFromTaskList(v4);
      ++v2;
      v3 += 12;
    }
    while ( v2 < *v1 );
  }
  free(v1[1]);
  return free((int)v1);
}

//----- (021D6794) --------------------------------------------------------
int __fastcall Function_21d6794(uint *a1, int a2)
{
  uint *v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( a2 >= *a1 )
    ErrorHandler();
  return v2[1] + 12 * v3 + 4;
}

//----- (021D67B0) --------------------------------------------------------
uint __fastcall Function_21d67b0(int a1)
{
  int v1;
  uint v2;
  int *v3;
  uint v4;
  int *v5;

  v1 = a1;
  Function_21d691c();
  v2 = 0;
  do
  {
    v3 = *(int **)(v1 + 16 * v2 + 460);
    if ( v3 )
      Call_RemoveTaskFromTaskList(v3);
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 < 3 );
  v4 = 0;
  do
  {
    v5 = *(int **)(v1 + 12 * v4 + 340);
    if ( v5 )
      Call_RemoveTaskFromTaskList(v5);
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 < 0xA );
  return free(v1);
}

//----- (021D6800) --------------------------------------------------------
uint __fastcall Function_21d6800(int a1)
{
  int v1;
  int v2;
  char *v3;
  int *v4;
  int v5;

  v1 = a1;
  REG_DISPCNT = REG_DISPCNT & 0xFFCFFFEF | 0x10;
  REG_DISPCNT_SUB = REG_DISPCNT_SUB & 0xFFCFFFEF | 0x10;
  Function_21d6670();
  Function_20a7944();
  Function_200a784(0, 128, 0, 32, 0, 0x80u, 0, 0x20u, 0x4Cu);
  v3 = &byte_21D7930;
  *(uint *)v1 = Function_20095c4(10, v1 + 4, 76, v2);
  v4 = 0;
  v5 = v1;
  do
  {
    *(uint *)(v5 + 300) = Function_2009714((uchar)*v3, v4, 0x4Cu);
    v4 = (int *)((char *)v4 + 1);
    ++v3;
    v5 += 4;
  }
  while ( (int)v4 < 4 );
  *(uint *)(v1 + 316) = Function_200985c(*(uint *)(v1 + 300), 128, 4, 0, 0, 3, 76);
  *(uint *)(v1 + 320) = Function_20098b8(*(uint *)(v1 + 304), 128, 3, 0, 0, 3, 1, 76);
  *(uint *)(v1 + 324) = Function_2009918(*(uint *)(v1 + 308), 128, 5, 0, 0, 2u, 76);
  *(uint *)(v1 + 328) = Function_2009918(*(uint *)(v1 + 312), 128, 6, 0, 0, 3u, 76);
  Function_200a328(*(int **)(v1 + 316));
  Function_200a5c8(*(int **)(v1 + 320));
  Function_201ff0c(0x10u, 1);
  return Function_201ff74(0x10u, 1);
}

//----- (021D691C) --------------------------------------------------------
int *__fastcall Function_21d691c(int **a1)
{
  int **v1;
  uint v2;

  v1 = a1;
  Function_200a4e4(a1[79]);
  Function_200a6dc(v1[80]);
  v2 = 0;
  do
  {
    Function_2009754(v1[v2 + 75]);
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 < 4 );
  Function_2021964(*v1);
  Function_200a878();
  Function_201e958();
  return Function_201f8b4();
}

//----- (021D6964) --------------------------------------------------------
int __fastcall Function_21d6964(int *a1)
{
  int *v1;
  int v2;
  int v3;
  int *v4;
  int result;
  char v6;
  int v7;
  int v8;
  char v9;

  v1 = a1;
  v2 = 0;
  v3 = 0;
  v4 = a1;
  do
  {
    Function_21d66a0(v1, (int)&v6, (int)&v9);
    v7 = v3;
    v8 = v3;
    v4[84] = Function_2021aa0((uint **)&v6);
    Function_2021cc8(v4[84], 0);
    Function_2021cac(v4[84], 0);
    result = 0x2000;
    ++v2;
    v3 += 0x2000;
    v4 += 3;
  }
  while ( v2 < 10 );
  return result;
}

//----- (021D69B4) --------------------------------------------------------
int __fastcall Function_21d69b4(int *a1)
{
  return Function_20219f8(*a1);
}

//----- (021D69C0) --------------------------------------------------------
int __fastcall Function_21d69c0(int *a1, int a2)
{
  int *v2;

  v2 = a1;
  if ( a2 == 180 )
  {
    Function_21d6a0c(a1 + 113, a1);
  }
  else if ( a2 == 285 )
  {
    Function_21d6a0c(a1 + 117, a1);
  }
  return Function_21d69b4(v2);
}

//----- (021D6A0C) --------------------------------------------------------
uint *__fastcall Function_21d6a0c(int a1, int a2, char a3, char a4, char a5, char a6)
{
  int v6;
  uint *result;

  v6 = a1;
  *(uchar *)a1 = a3;
  *(uchar *)(a1 + 1) = a4;
  *(uchar *)(a1 + 2) = a5;
  *(uchar *)(a1 + 4) = 0;
  *(uchar *)(a1 + 3) = 0;
  *(uint *)(a1 + 12) = a2 + 332;
  *(uchar *)(a1 + 5) = a6;
  result = AddTaskToTaskList1((int)Function_21d6b0c, a1, 0xAu);
  *(uint *)(v6 + 8) = result;
  return result;
}

//----- (021D6A44) --------------------------------------------------------
int __fastcall Function_21d6a44(int result, uint a2, int a3, int a4)
{
  uint v4;
  int v5;
  uint v6;
  int v7;
  int v8;
  int *v9;
  int v10;
  uint v11;
  uint v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;

  v17 = a4;
  v4 = a2;
  v13 = result;
  if ( a3 )
    v5 = 32;
  else
    v5 = 64;
  v6 = 0;
  if ( a2 )
  {
    do
    {
      v7 = Function_21d6adc(v13, 10);
      v8 = *(uint *)(v7 + 4);
      Function_2021d28();
      v10 = v9[1];
      v14 = *v9;
      v15 = v10;
      v16 = v9[2];
      v11 = PRNG();
      v14 = ((v11 >> 31) + __ROR4__((v11 << 25) - (v11 >> 31), 25) + 64) << 12;
      v12 = PRNG();
      v15 = (v5 + (v12 >> 31) + __ROR4__((v12 << 26) - (v12 >> 31), 26)) << 12;
      Function_2021c50(*(uint **)(v7 + 4), &v14);
      Function_2021cc8(*(uint *)(v7 + 4), 1);
      Function_2021cac(*(uint *)(v7 + 4), 1);
      *(uint *)(v7 + 8) = AddTaskToTaskList1((int)Function_21d6b48, v7, 0x14u);
      result = (v6 + 1) << 24;
      v6 = (v6 + 1) & 0xFF;
    }
    while ( v6 < v4 );
  }
  return result;
}

//----- (021D6ADC) --------------------------------------------------------
int __fastcall Function_21d6adc(int a1)
{
  uint v1;
  uchar *v2;

  v1 = 0;
  do
  {
    v2 = (uchar *)(a1 + 12 * v1);
    if ( !*(uchar *)(a1 + 12 * v1) )
    {
      *v2 = 1;
      v2[1] = 0;
      return a1 + 12 * v1;
    }
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 < 0xA );
  ErrorHandler();
  return 0;
}

//----- (021D6B0C) --------------------------------------------------------
uint __fastcall Function_21d6b0c(int *a1, uchar *a2, int a3, int a4)
{
  uchar *v4;
  uint v5;
  int *v6;
  uint result;

  v4 = a2;
  v5 = a2[4];
  v6 = a1;
  v4[4] = v5 + 1;
  result = v4[1];
  if ( v5 >= result )
  {
    Function_21d6a44(*((uint *)v4 + 3), *v4, v4[5], a4);
    v4[4] = 0;
    ++v4[3];
    result = v4[2];
    if ( v4[3] >= result )
    {
      Call_RemoveTaskFromTaskList(v6);
      result = 0;
      *((uint *)v4 + 2) = 0;
    }
  }
  return result;
}

//----- (021D6B48) --------------------------------------------------------
uint __fastcall Function_21d6b48(int *a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int *v7;
  int v8;
  uint result;
  int v10;
  int v11;
  int v12;
  int v13;

  v13 = a4;
  v4 = a2;
  v5 = a1;
  v6 = *(uint *)(a2 + 4);
  Function_2021d28();
  v8 = v7[1];
  v10 = *v7;
  v11 = v8;
  v12 = v7[2];
  v11 = v8 + 12288;
  Function_2021c50(*(uint **)(v4 + 4), &v10);
  result = (uchar)++*(uchar *)(v4 + 1);
  if ( result >= 0x50 )
  {
    Call_RemoveTaskFromTaskList(v5);
    *(uint *)(v4 + 8) = 0;
    *(uchar *)v4 = 0;
    Function_2021cc8(*(uint *)(v4 + 4), 0);
    result = Function_2021cac(*(uint *)(v4 + 4), 0);
  }
  return result;
}

//----- (021D6BA0) --------------------------------------------------------
int __fastcall Function_21d6ba0(int a1, int a2)
{
  return Function_21d6bac(a1, 2, a2);
}

//----- (021D6BAC) --------------------------------------------------------
int __fastcall Function_21d6bac(int *a1, uint a2, int a3)
{
  int *v3;
  int result;
  uint v5;
  uint v6;
  int v7;
  int v8;
  int v9;
  int *v10;
  int v11;
  uint v12;
  int v13;
  uint v14;
  int v15;
  uint v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;

  v3 = a1;
  result = a1[1];
  v5 = a2;
  v17 = a3;
  v18 = result;
  v6 = 0;
  if ( a2 )
  {
    do
    {
      v7 = *v3;
      v8 = Function_21d6adc(v18);
      v9 = *(uint *)(v8 + 4);
      Function_2021d28();
      v11 = v10[1];
      v19 = *v10;
      v20 = v11;
      v21 = v10[2];
      v12 = PRNG();
      s32_div_f(v12, 224);
      v19 = (v13 + 10) << 12;
      v14 = PRNG();
      s32_div_f(v14, 56);
      v20 = (v15 + 250) << 12;
      Function_2021c50(*(uint **)(v8 + 4), &v19);
      Function_2021cc8(*(uint *)(v8 + 4), 1);
      v16 = *(uint *)(v8 + 4);
      if ( v17 )
        Function_2021cac(v16, 0);
      else
        Function_2021cac(v16, 1);
      *(uint *)(v8 + 8) = AddTaskToTaskList1((int)Function_21d6c44, v8, 0x14u);
      result = (v6 + 1) << 24;
      v6 = (v6 + 1) & 0xFF;
    }
    while ( v6 < v5 );
  }
  return result;
}

//----- (021D6C44) --------------------------------------------------------
int *__fastcall Function_21d6c44(int *result, int a2)
{
  int v2;

  v2 = a2;
  if ( (uchar)++*(uchar *)(a2 + 1) >= 8u )
  {
    Call_RemoveTaskFromTaskList(result);
    *(uint *)(v2 + 8) = 0;
    *(uchar *)v2 = 0;
    Function_2021cc8(*(uint *)(v2 + 4), 0);
    result = (int *)Function_2021cac(*(uint *)(v2 + 4), 0);
  }
  return result;
}

//----- (021D6C70) --------------------------------------------------------
int Function_21d6c70()
{
  int v0;

  v0 = Function_20a5a2c();
  Function_20145b4(v0);
  if ( !v0 )
    ErrorHandler();
  return 8 * v0 & 0x7FFFF;
}

//----- (021D6C94) --------------------------------------------------------
int Function_21d6c94()
{
  int v0;

  v0 = Function_20a5a3c();
  if ( !v0 )
    ErrorHandler();
  Function_20145f4(v0);
  return 8 * v0 & 0x7FFFF;
}

//----- (021D6CB8) --------------------------------------------------------
int Function_21d6cb8()
{
  return 44;
}

//----- (021D6CBC) --------------------------------------------------------
int __fastcall Function_21d6cbc(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 || !*(uint *)(a1 + 24) )
    ErrorHandler();
  return *(uint *)(v1 + 24);
}

//----- (021D6CD0) --------------------------------------------------------
int __fastcall Function_21d6cd0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( !a1 || !*(uint *)(a1 + 24) )
    ErrorHandler();
  Function_2014788(*(uint *)(v2 + 24), 1);
  return Function_20146f4(*(int **)(v2 + 24), v3, 0, 0);
}

//----- (021D6CFC) --------------------------------------------------------
int *__fastcall Function_21d6cfc(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  uint v5;
  int v6;
  uint v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v14;
  int v15;
  int v16;
  char v17[12];
  int v18;
  int v19;
  int v20;
  char v21;

  v1 = a1;
  v18 = 389;
  v19 = 392;
  v20 = 395;
  Function_2013880(&v14);
  v2 = (v16 + v15 * v14) & 1;
  u32_div_f(v16, 3);
  v4 = v3;
  v5 = 0;
  do
  {
    v6 = *(&v18 + v4);
    *(uint *)&v17[4 * v5] = v6;
    *(uint *)(v1 + 4 * v5 + 28) = v4;
    if ( v2 )
      ++v4;
    else
      --v4;
    if ( v4 < 3 )
    {
      if ( v4 < 0 )
        v4 = 2;
    }
    else
    {
      v4 = 0;
    }
    v5 = (v5 + 1) & 0xFF;
  }
  while ( v5 < 3 );
  *(uint *)v1 = Function_200762c(0x4Cu, v5, v4, v6);
  v7 = 0;
  do
  {
    Function_2075fb4((int)&v21, *(uint *)&v17[4 * v7] & 0xFFFF, 0, 2u, 0, 0, 0);
    v8 = v1 + 4 * v7;
    v9 = Function_2007c34(
           *(uint **)v1,
           &v21,
           dword_21D7958[2 * *(uint *)(v8 + 28)],
           dword_21D7958[2 * *(uint *)(v8 + 28) + 1],
           1023,
           v7,
           0,
           0);
    *(uint *)(v8 + 4) = v9;
    Function_2007dec(v9, 6u, 1);
    v7 = (v7 + 1) & 0xFF;
  }
  while ( v7 < 3 );
  *(uint *)(v1 + 16) = 1;
  Function_2014000();
  *(uint *)(v1 + 20) = malloc(0x4Cu, 18432);
  v10 = Function_2014014((int)Function_21d6c70, (int)Function_21d6c94, *(int **)(v1 + 20), 0x4800u, 1, 0x4Cu);
  *(uint *)(v1 + 24) = v10;
  v11 = Function_2014784(v10);
  Function_20206bc(4096, 3686400, v11);
  v12 = Call2_LoadFromNARC_2(61, 4, 0x4Cu);
  return Function_20144cc(*(uint **)(v1 + 24), v12, 10, 1);
}

//----- (021D6E28) --------------------------------------------------------
uint __fastcall Function_21d6e28(int a1)
{
  int *v1;

  v1 = (int *)a1;
  Function_201411c(*(uint ***)(a1 + 24));
  free(v1[5]);
  return Function_2007b6c(*v1);
}

//----- (021D6E40) --------------------------------------------------------
int *__fastcall Function_21d6e40(int *result)
{
  if ( result )
    result = (int *)Function_2008a94(*result);
  return result;
}

//----- (021D6E50) --------------------------------------------------------
int __fastcall Function_21d6e50(int result, int a2, int a3)
{
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int *v8;

  v3 = (int *)result;
  if ( result )
  {
    Function_20b2628(result, a2, a3);
    v4 = Call_G3X_Reset();
    Function_20a73c0(v4, v5, v6, v7);
    v8 = Function_2007768(*v3);
    Function_21d725c(v8);
    result = Function_20241bc(1, 0);
  }
  return result;
}

//----- (021D6E78) --------------------------------------------------------
int __fastcall Function_21d6e78(int a1, int a2)
{
  int v2;
  uint v3;
  int v4;
  uchar *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int result;

  v2 = a1;
  v3 = *(uchar *)(a1 + 40);
  v4 = a2;
  v5 = (uchar *)(a1 + 40);
  if ( v3 <= 5 )
    JUMPOUT(__CS__, *((short *)&off_21D6E9C + v3) + 35483294);
  switch ( (uchar)v3 )
  {
    case 0:
      v6 = a1 + 4;
      WIN_OUT = WIN_OUT & 0xFFC0 | 0x31;
      v7 = 4 * a2;
      Function_2007dec(*(uint *)(a1 + 4 + 4 * a2), 0xCu, 1024);
      Function_2007dec(*(uint *)(v6 + v7), 0xDu, 1024);
      Function_2007dec(*(uint *)(v6 + v7), 6u, 0);
      ++*v5;
      goto LABEL_5;
    case 1:
LABEL_5:
      if ( ((int (__fastcall *)(int, int))*(&off_21D7940 + 2 * *(uint *)(v2 + 4 * v4 + 28)))(v2, v4) )
      {
        *(uchar *)(v2 + 41) = 0;
        ++*v5;
      }
      goto LABEL_14;
    case 2:
      Function_2014788(*(uint *)(a1 + 24), 1);
      v8 = 4 * v4;
      Function_20146f4(
        *(int **)(v2 + 24),
        dword_21D7970[3 * *(uint *)(v2 + 28 + v8)],
        (void (__fastcall *)(int))Function_21d7268,
        *(uint *)(v2 + 4 + v8));
      Function_20146f4(
        *(int **)(v2 + 24),
        dword_21D7974[3 * *(uint *)(v2 + 28 + v8)],
        (void (__fastcall *)(int))Function_21d7268,
        *(uint *)(v2 + 4 + v8));
      Function_20146f4(
        *(int **)(v2 + 24),
        dword_21D7978[3 * *(uint *)(v2 + 28 + v8)],
        (void (__fastcall *)(int))Function_21d7268,
        *(uint *)(v2 + 4 + v8));
      ++*v5;
      goto LABEL_14;
    case 3:
      if ( !Function_2014710(*(uint *)(a1 + 24)) )
      {
        WIN_OUT = WIN_OUT & 0xFFC0 | 0x30;
        ++*v5;
      }
      goto LABEL_14;
    case 4:
      v9 = 4 * a2;
      if ( ((int (*)(void))*(&off_21D7944 + 2 * *(uint *)(a1 + 4 * a2 + 28)))() )
      {
        Function_2007dec(*(uint *)(v2 + v9 + 4), 6u, 1);
        *(uchar *)(v2 + 41) = 0;
        ++*v5;
      }
      goto LABEL_14;
    case 5:
      if ( (uchar)++*(uchar *)(a1 + 41) < 0x14u )
        goto LABEL_14;
      *(uchar *)(a1 + 41) = 0;
      *v5 = 0;
      result = 1;
      break;
    default:
LABEL_14:
      result = 0;
      break;
  }
  return result;
}

//----- (021D7004) --------------------------------------------------------
int __fastcall Function_21d7004(uchar *a1, int a2)
{
  uchar *v2;
  int v3;
  uchar v4;

  v2 = a1;
  v3 = *(uint *)&a1[4 * a2 + 4];
  Function_2008274(v3, 0, 6);
  Function_2008274(v3, 1u, -16);
  Function_2008274(v3, 0xCu, -128);
  Function_2008274(v3, 0xDu, -128);
  v4 = v2[41] + 1;
  v2 += 41;
  *v2 = v4;
  if ( *v2 < 6u )
    return 0;
  Function_2007dec(v3, 0xCu, 256);
  Function_2007dec(v3, 0xDu, 256);
  return 1;
}

//----- (021D7074) --------------------------------------------------------
int __fastcall Function_21d7074(uchar *a1, int a2)
{
  uchar *v2;
  int v3;
  uchar v4;

  v2 = a1;
  v3 = *(uint *)&a1[4 * a2 + 4];
  Function_2008274(v3, 0, -3);
  Function_2008274(v3, 1u, -18);
  v4 = v2[41] + 1;
  v2 += 41;
  *v2 = v4;
  if ( *v2 < 6u )
    return 0;
  Function_2007dec(v3, 0xCu, 256);
  Function_2007dec(v3, 0xDu, 256);
  return 1;
}

//----- (021D70CC) --------------------------------------------------------
int __fastcall Function_21d70cc(uchar *a1, int a2)
{
  uchar *v2;
  int v3;
  uchar v4;

  v2 = a1;
  v3 = *(uint *)&a1[4 * a2 + 4];
  Function_2008274(v3, 0, -16);
  Function_2008274(v3, 1u, -16);
  Function_2008274(v3, 0xCu, -128);
  Function_2008274(v3, 0xDu, -128);
  v4 = v2[41] + 1;
  v2 += 41;
  *v2 = v4;
  if ( *v2 < 6u )
    return 0;
  Function_2007dec(v3, 0xCu, 256);
  Function_2007dec(v3, 0xDu, 256);
  return 1;
}

//----- (021D713C) --------------------------------------------------------
int __fastcall Function_21d713c(uchar *a1, int a2)
{
  uchar *v2;
  int v3;
  uchar v4;

  v2 = a1;
  v3 = *(uint *)&a1[4 * a2 + 4];
  Function_2008274(v3, 0, -6);
  Function_2008274(v3, 1u, -16);
  v4 = v2[41] + 1;
  v2 += 41;
  *v2 = v4;
  if ( *v2 < 6u )
    return 0;
  Function_2007dec(v3, 0xCu, 256);
  Function_2007dec(v3, 0xDu, 256);
  return 1;
}

//----- (021D7194) --------------------------------------------------------
int __fastcall Function_21d7194(uchar *a1, int a2)
{
  uchar *v2;
  int v3;
  uchar v4;

  v2 = a1;
  v3 = *(uint *)&a1[4 * a2 + 4];
  Function_2008274(v3, 0, 8);
  Function_2008274(v3, 1u, -16);
  Function_2008274(v3, 0xCu, -128);
  Function_2008274(v3, 0xDu, -128);
  v4 = v2[41] + 1;
  v2 += 41;
  *v2 = v4;
  if ( *v2 < 6u )
    return 0;
  Function_2007dec(v3, 0xCu, 256);
  Function_2007dec(v3, 0xDu, 256);
  return 1;
}

//----- (021D7204) --------------------------------------------------------
int __fastcall Function_21d7204(uchar *a1, int a2)
{
  uchar *v2;
  int v3;
  uchar v4;

  v2 = a1;
  v3 = *(uint *)&a1[4 * a2 + 4];
  Function_2008274(v3, 0, 6);
  Function_2008274(v3, 1u, -20);
  v4 = v2[41] + 1;
  v2 += 41;
  *v2 = v4;
  if ( *v2 < 6u )
    return 0;
  Function_2007dec(v3, 0xCu, 256);
  Function_2007dec(v3, 0xDu, 256);
  return 1;
}

//----- (021D725C) --------------------------------------------------------
int Function_21d725c()
{
  Function_201469c();
  return Function_20146c0();
}

//----- (021D7268) --------------------------------------------------------
int __fastcall Function_21d7268(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;

  v1 = a1;
  v2 = Function_2014764();
  v3 = 172 * (Function_20080c0(v2, 0) - 128);
  v4 = Function_20080c0(v2, 1u);
  *(uint *)(v1 + 40) = v3 + *(uint *)(**(uint **)(v1 + 32) + 4);
  *(uint *)(v1 + 44) = 172 * (v4 - 96) + *(uint *)(**(uint **)(v1 + 32) + 8);
  result = *(uint *)(**(uint **)(v1 + 32) + 12) + 64;
  *(uint *)(v1 + 48) = result;
  return result;
}

