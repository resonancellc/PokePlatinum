//----- (021D0D80) --------------------------------------------------------
int __fastcall ChooseStarterScreenInit(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a1;
  Function_2017fc8(3, 47, 0x40000);
  v5 = (int *)MallocSomeDataAndStorePtrInOverlayData1c(v4, 1716, 0x2Fu);
  if ( !v5 )
    ErrorHandler();
  Call_FillMemWithValue(v5, 0, 0x6B4u);
  Function_20182cc(v5 + 148, 0x2Fu, 32);
  v6 = LoadPtrToOverWorldDataIn18(v4);
  v5[426] = Function_2027b50(*(ushort **)(v6 + 4));
  v5[427] = Function_2027ac0(*(ushort **)(v6 + 4));
  Function_201dbec(8, 0x2Fu);
  SetMainLoopFunctionCall((int)Function_21d1058, (int)v5);
  Function_20177a4();
  Function_201e3d8();
  if ( Function_201e450(4u) != 1 )
    ErrorHandler();
  Function_2002ac8(1);
  Function_2002ae4(0);
  Function_2002b20(0);
  Function_21d10c4(v5, 47);
  v5[37] = Function_2018340(0x2Fu);
  v9 = 0;
  v8 = 1;
  v10 = 1;
  v11 = 1;
  SetGraphicsModes(&v8);
  Function_21d1224(v5[37], 47);
  Function_201ff0c(1u, 1);
  Function_201ff0c(2u, 0);
  Function_21d1308(v5, 47);
  Function_21d20a4(v5, 47);
  Function_21d27cc(v5, 47);
  Function_21d13b8(v5, 47);
  Function_21d14e8(v5, 47);
  Function_21d1528(v5, 47);
  Function_21d1834(v5, 47);
  Function_21d1b20(v5, 47);
  Function_21d1ba0(v5);
  Function_21d1c28(v5);
  Function_21d2204(v5, v5 + 384, 47);
  Function_21d22d4(v5, v5 + 384, 47);
  Function_21d23b8(v5 + 384);
  Function_21d2448(v5 + 404, v5, 47);
  Function_2004550(0x3Cu, 0);
  return 1;
}

//----- (021D0EF4) --------------------------------------------------------
int __fastcall ChooseStarterScreenLoop(int a1, int *a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int result;
  short v10;
  int v11;

  v11 = a4;
  v4 = a2;
  v5 = LoadOverlayData1c(a1);
  v10 = 2243;
  v6 = *v4;
  v7 = v5;
  switch ( (uchar)*v4 )
  {
    case 0u:
      Function_21d107c(v5, v6);
      GX_LoadBGPltt((int)&v10, 0, 2u);
      ++*v4;
      goto LABEL_10;
    case 1u:
      if ( Function_21d10bc(v5, v6) )
      {
        Function_200f32c(0);
        Function_200f32c(1);
        ++*v4;
      }
      goto LABEL_10;
    case 2u:
      v8 = Function_21d1978(v5, 47);
      Function_21d19d4(v7, 47);
      if ( v8 == 1 )
        ++*v4;
      goto LABEL_10;
    case 3u:
      Function_21d109c(v5, v6);
      ++*v4;
      goto LABEL_10;
    case 4u:
      if ( !Function_21d10bc(v5, v6) )
        goto LABEL_10;
      Function_200f32c(0);
      Function_200f32c(1);
      result = 1;
      break;
    default:
LABEL_10:
      Function_21d1aac(v7);
      result = 0;
      break;
  }
  return result;
}

//----- (021D0FA8) --------------------------------------------------------
int __fastcall ChooseStarterScreenEnd(int a1)
{
  int v1;
  int v2;
  uint *v3;
  uint v4;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  v3 = (uint *)LoadPtrToOverWorldDataIn18(v1);
  SetMainLoopFunctionCall(0, 0);
  *v3 = ReturnSpeciesOfChosenStarter(*(uint *)(v2 + 84) & 0xFFFF);
  if ( Function_201e530() != 1 )
    ErrorHandler();
  Function_21d24e4(v2 + 1616);
  Function_21d2350(v2 + 1536);
  Function_21d2290(v2, v2 + 1536);
  Function_21d241c(v2 + 1536);
  Function_21d1b90(v2);
  Function_21d1908(v2);
  Function_21d1594(v2);
  Function_21d14bc(v2);
  Function_21d1518(v2);
  Function_21d13a0(v2);
  Function_21d2884(v2);
  Function_21d12ec(*(uint *)(v2 + 148));
  v4 = free(*(uint *)(v2 + 148));
  Function_21d10dc(v4);
  Function_201dc3c();
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(47);
  return 1;
}

//----- (021D1058) --------------------------------------------------------
int __fastcall Function_21d1058(int a1)
{
  int v1;

  v1 = a1;
  Function_200a858();
  Function_201c2b8(*(uint *)(v1 + 148));
  Function_2008a94(*(uint *)(v1 + 512));
  return Function_201dcac();
}

//----- (021D107C) --------------------------------------------------------
int *Function_21d107c()
{
  return Function_200f174(0, 1, 1, 0, 6, 1, 47);
}

//----- (021D109C) --------------------------------------------------------
int *Function_21d109c()
{
  return Function_200f174(0, 0, 0, 0, 6, 1, 47);
}

//----- (021D10BC) --------------------------------------------------------
BOOL Function_21d10bc()
{
  return Function_200f2ac();
}

//----- (021D10C4) --------------------------------------------------------
int __fastcall Function_21d10c4(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  Function_21d10f0();
  Function_21d1110(v2);
  return Function_21d1168(v3);
}

//----- (021D10DC) --------------------------------------------------------
int Function_21d10dc()
{
  int *v0;

  Function_200a878();
  Function_201e958();
  v0 = Function_201f8b4();
  return Function_21d1218(v0);
}

//----- (021D10F0) --------------------------------------------------------
char *Function_21d10f0()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_21D29C0;
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

//----- (021D1110) --------------------------------------------------------
int __fastcall Function_21d1110(uint a1)
{
  uint v1;
  int v3;
  int v4;
  int v5;
  uint v6;

  v1 = a1;
  Function_20a7944();
  Function_200a784(0, 128, 0, 32, 0, 0x80u, 0, 0x20u, v1);
  v3 = 32;
  v4 = 81920;
  v5 = 0x4000;
  v6 = v1;
  Function_201e88c(&v3, 2097168, 16);
  Function_201f834(32, v1);
  Function_201e994();
  return Function_201f8e4();
}

//----- (021D1168) --------------------------------------------------------
int *__fastcall Function_21d1168(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  Function_20b28cc();
  G3X_InitMtxStack();
  GFX_CONTROL &= 0xCFFDu;
  GFX_CONTROL = GFX_CONTROL & 0xCFFF | 0x10;
  GFX_CONTROL &= 0xCFFBu;
  GFX_CONTROL = GFX_CONTROL & 0xCFFF | 8;
  v2 = v1;
  GFX_CONTROL = GFX_CONTROL & 0xCFFF | 0x20;
  v3 = 0;
  do
  {
    ++v3;
    *(ushort *)(v2 + 1596) = 4228;
    v2 += 2;
  }
  while ( v3 < 8 );
  SetEdgeTable(v1 + 1596, 4228, v3, v2);
  G3X_SetClearColor(17407, 0, 0x7FFF, 63, 0);
  GFX_FLUSH = 2;
  GFX_VIEWPORT = -1073807360;
  Function_20a5a94(1u, 1);
  return Function_20a5d88(0x4000, 1);
}

//----- (021D1218) --------------------------------------------------------
int *Function_21d1218()
{
  Function_20a5b1c();
  return Function_20a5f50();
}

//----- (021D1224) --------------------------------------------------------
int __fastcall Function_21d1224(uint *a1, uint a2)
{
  uint v2;
  uint *v3;
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

  v2 = a2;
  v3 = a1;
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 1;
  v19 = 0;
  v20 = 0;
  v21 = 2048;
  v22 = 0;
  v23 = 16777217;
  v24 = 0;
  v25 = 0;
  Function_20183c4(a1, 1u, &v19, 0);
  Function_2019690(1u, 32, 0, v2);
  Function_2019ebc(v3, 1u);
  v12 = 0;
  v13 = 0;
  v14 = 2048;
  v15 = 0;
  v16 = 50397185;
  v17 = 512;
  v18 = 0;
  Function_20183c4(v3, 2u, &v12, 0);
  Function_2019690(2u, 32, 0, v2);
  Function_2019ebc(v3, 2u);
  v5 = 0;
  v6 = 0;
  v7 = 2048;
  v8 = 0;
  v9 = 84017153;
  v10 = 0;
  v11 = 0;
  Function_20183c4(v3, 3u, &v5, 0);
  Function_2019690(3u, 32, 0, v2);
  return Function_2019ebc(v3, 3u);
}

//----- (021D12EC) --------------------------------------------------------
int __fastcall Function_21d12ec(int a1)
{
  int v1;

  v1 = a1;
  Function_2019044(a1, 1);
  Function_2019044(v1, 2);
  return Function_2019044(v1, 3);
}

//----- (021D1308) --------------------------------------------------------
uint __fastcall Function_21d1308(int a1, uint a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  *(uint *)(a1 + 152) = Function_201a778(a2, 1);
  Function_201a7a0(*(uint *)(v3 + 152));
  Function_201a7e8(*(uint **)(v3 + 148), *(uint *)(v3 + 152), 1, 4, 19, 0x17u, 4u, 2, 31);
  Function_201ada4_ClearTextBox(*(uint *)(v3 + 152), 15);
  Function_200dd0c(*(uint **)(v3 + 148), 1u, 512, 0, *(uint *)(v3 + 1704), v2);
  Call_LoadFromNARC_RLCN(82, 16, 0, 64, 32, v2);
  return Function_200e060(*(uint *)(v3 + 152), 0, 512, 0);
}

//----- (021D13A0) --------------------------------------------------------
uint __fastcall Function_21d13a0(int a1)
{
  int v1;

  v1 = a1;
  Function_201a8fc(*(uint *)(a1 + 152));
  return free(*(uint *)(v1 + 152));
}

//----- (021D13B8) --------------------------------------------------------
int __fastcall Function_21d13b8(int a1, uint a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int result;

  v4 = a1;
  *(uint *)(a1 + 512) = Function_200762c(a2, a2, a3, a4);
  v5 = Function_20a5a2c();
  v6 = Function_20a5a3c();
  Function_2008a78(*(uint *)(v4 + 512), 8 * v5 & 0x7FFFF, 16 * ((v5 & 0x7FFF0000u) >> 16));
  Function_2008a84(*(uint *)(v4 + 512), 8 * v6 & 0x7FFFF, 8 * ((v6 & 0xFFFF0000) >> 16));
  Function_21d1468(v4 + 516, v4, 387);
  Function_21d1468(v4 + 520, v4, 390);
  Function_21d1468(v4 + 524, v4, 393);
  v7 = 0;
  do
  {
    result = Function_2007dec(*(uint *)(v4 + 516), 6u, 1);
    ++v7;
    v4 += 4;
  }
  while ( v7 < 3 );
  return result;
}

//----- (021D1468) --------------------------------------------------------
int __fastcall Function_21d1468(int *a1, int a2, ushort a3)
{
  ushort v3;
  int *v4;
  int v5;
  uchar v6;
  int result;
  char v8;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = Function_2075dac(a3, 0);
  Function_2075fb4((int)&v8, v3, v6, 2u, 0, 0, 0);
  result = Function_2007c34(*(uint **)(v5 + 512), &v8, 128, 96, 1023, 0, 0, 0);
  *v4 = result;
  return result;
}

//----- (021D14BC) --------------------------------------------------------
uint __fastcall Function_21d14bc(int a1)
{
  int v1;
  int v2;
  int v3;
  uint *v4;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    v4 = *(uint **)(v3 + 516);
    if ( v4 )
      Function_2007dc8(v4);
    ++v2;
    v3 += 4;
  }
  while ( v2 < 3 );
  return Function_2007b6c(*(uint *)(v1 + 512));
}

//----- (021D14E8) --------------------------------------------------------
int *__fastcall Function_21d14e8(int a1, int a2)
{
  int v2;
  int *result;
  int v4;
  int v5;
  int v6;
  int v7;

  v2 = a1;
  v4 = 1;
  v5 = 1;
  v6 = 1;
  v7 = a2;
  result = Function_2015064((int)&v4);
  *(uint *)(v2 + 1612) = result;
  return result;
}

//----- (021D1518) --------------------------------------------------------
uint __fastcall Function_21d1518(int a1)
{
  return Function_20150a8(*(int **)(a1 + 1612));
}

//----- (021D1528) --------------------------------------------------------
uint __fastcall Function_21d1528(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  uint v5;

  v4 = a1;
  v5 = a2;
  a1[121] = Function_20095c4(2, (int)(a1 + 47), a2, a4);
  v4[122] = Function_2009714(2, 0, v5);
  v4[123] = Function_2009714(2, (int *)1, v5);
  v4[124] = Function_2009714(2, (int *)2, v5);
  v4[125] = Function_2009714(2, (int *)3, v5);
  Function_201ff0c(0x10u, 1);
  return Function_201ff74(0x10u, 1);
}

//----- (021D1594) --------------------------------------------------------
uint __fastcall Function_21d1594(int **a1)
{
  int **v1;

  v1 = a1;
  Function_2021964(a1[121]);
  Function_2009754(v1[122]);
  Function_2009754(v1[123]);
  Function_2009754(v1[124]);
  return Function_2009754(v1[125]);
}

//----- (021D15CC) --------------------------------------------------------
int __fastcall Function_21d15cc(int *a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int *v7;
  int v8;

  v5 = a2;
  v6 = a3;
  v7 = a1;
  v8 = a4;
  Call_FillMemWithValue(a1, 0, 0x98u);
  Function_21d1630(v7, v5, v8);
  Function_21d1694(v7, v6, v8, a5);
  return Function_21d17b4(v7);
}

//----- (021D1604) --------------------------------------------------------
int __fastcall Function_21d1604(int *a1, int a2, int a3)
{
  int v3;
  int v4;
  int *v5;

  v3 = a2;
  v4 = a3;
  v5 = a1;
  Call_FillMemWithValue(a1, 0, 0x98u);
  Function_21d1630(v5, v3, v4);
  return Function_21d17b4(v5);
}

//----- (021D1630) --------------------------------------------------------
int (__fastcall *__fastcall Function_21d1630(uint *a1, int a2, int a3))(uint *a1, int a2, uint a3, int a4)
{
  uint *v3;
  uint *v4;
  int v5;
  uint *v6;
  int v7;
  int v8;

  v3 = a1;
  v4 = Function_2006fe8_LoadFromNARC_UncompressLZ8(82, a2, 0, a3, 0);
  v3[21] = v4;
  v5 = Function_20b3c0c_GetAdrOfDataPart((int)v4);
  v3[22] = v5;
  if ( v5
    && (v5 == -8 || !*(uchar *)(v5 + 9) ? (v6 = 0) : (v6 = (uint *)(v5 + 8 + *(ushort *)(v5 + 14) + 4)), v6) )
  {
    v7 = v5 + *v6;
  }
  else
  {
    v7 = 0;
  }
  v3[23] = v7;
  v8 = Function_20b3c1c_GetTexOffsets(v3[21]);
  v3[24] = v8;
  Function_201cbcc(v8);
  Function_201cbb0(v3[21], v3[24]);
  return Function_20ae608(v3, v3[23]);
}

//----- (021D1694) --------------------------------------------------------
uint __fastcall Function_21d1694(uint a1, int a2, int a3, int (***a4)(void))
{
  uint v4;
  int (***v5)(void);
  uint *v6;
  int v7;

  v4 = a1;
  v5 = a4;
  v6 = Function_2006fe8_LoadFromNARC_UncompressLZ8(82, a2, 0, a3, 0);
  *(uint *)(v4 + 100) = v6;
  *(uint *)(v4 + 104) = Function_20b3c5c((int)v6, 0);
  v7 = Function_20b2cb4(v5, *(uchar **)(v4 + 104), *(uint *)(v4 + 92));
  *(uint *)(v4 + 108) = v7;
  Function_20ae4f0(v7, *(uchar **)(v4 + 104), *(uint *)(v4 + 92), *(uint *)(v4 + 96));
  return Function_20ae77c(v4, *(uint *)(v4 + 108));
}

//----- (021D16D8) --------------------------------------------------------
int *__fastcall Function_21d16d8(int *a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = a1[21];
  v4 = a2;
  if ( v3 )
    free(v3);
  if ( v2[25] )
  {
    v5 = v2[27];
    Function_20b2cd8(v4);
    free(v2[25]);
  }
  return Call_FillMemWithValue(v2, 0, 0x98u);
}

//----- (021D1708) --------------------------------------------------------
int *__fastcall Function_21d1708(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int *result;
  int v6[9];
  char v7;

  v1 = a1;
  MTX_Identity33_(&v7);
  MTX_RotX33_(
    v6,
    SLOWORD(Unknown_20f983c[(int)*(ushort *)(v1 + 144) >> 4]),
    *((short *)Unknown_20f983c + 2 * ((int)*(ushort *)(v1 + 144) >> 4) + 1));
  MTX_Concat33(v6, (int *)&v7, (int *)&v7, v2);
  MTX_RotY33_(
    v6,
    SLOWORD(Unknown_20f983c[(int)*(ushort *)(v1 + 146) >> 4]),
    *((short *)Unknown_20f983c + 2 * ((int)*(ushort *)(v1 + 146) >> 4) + 1));
  MTX_Concat33(v6, (int *)&v7, (int *)&v7, v3);
  MTX_RotZ33_(
    v6,
    SLOWORD(Unknown_20f983c[(int)*(ushort *)(v1 + 148) >> 4]),
    *((short *)Unknown_20f983c + 2 * ((int)*(ushort *)(v1 + 148) >> 4) + 1));
  MTX_Concat33(v6, (int *)&v7, (int *)&v7, v4);
  result = *(int **)(v1 + 116);
  if ( result )
    result = Function_201ca74((uint *)v1, (int *)(v1 + 120), (int *)&v7, (int *)(v1 + 132));
  return result;
}

//----- (021D17A4) --------------------------------------------------------
int __fastcall Function_21d17a4(int result, int a2)
{
  *(uint *)(result + 116) = a2;
  return result;
}

//----- (021D17A8) --------------------------------------------------------
uint *__fastcall Function_21d17a8(uint *a1, int a2, int a3, int a4)
{
  uint *result;

  a1[30] = a2;
  a1[31] = a3;
  result = a1 + 32;
  *result = a4;
  return result;
}

//----- (021D17B4) --------------------------------------------------------
uint *__fastcall Function_21d17b4(uint *a1, int a2, int a3, int a4)
{
  uint *result;

  a1[33] = a2;
  a1[34] = a3;
  result = a1 + 35;
  *result = a4;
  return result;
}

//----- (021D17CC) --------------------------------------------------------
ushort *__fastcall Function_21d17cc(ushort *a1, short a2, short a3, short a4)
{
  ushort *result;

  a1[72] = a2;
  a1[73] = a3;
  result = a1 + 74;
  *result = a4;
  return result;
}

//----- (021D17E4) --------------------------------------------------------
int __fastcall Function_21d17e4(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = *(ushort *)(*(uint *)(*(uint *)(a1 + 108) + 8) + 4) << 12;
  v2 = *(uint *)(a1 + 112) + 4096;
  if ( v2 >= v1 )
  {
    *(uint *)(a1 + 112) = v1;
    v3 = 1;
  }
  else
  {
    *(uint *)(a1 + 112) = v2;
    v3 = 0;
  }
  **(uint **)(a1 + 108) = *(uint *)(a1 + 112);
  return v3;
}

//----- (021D180C) --------------------------------------------------------
uint *__fastcall Function_21d180c(int a1)
{
  int v1;
  int v2;
  uint *result;

  v1 = a1;
  s32_div_f(*(uint *)(a1 + 112) + 4096, *(ushort *)(*(uint *)(*(uint *)(a1 + 108) + 8) + 4) << 12);
  *(uint *)(v1 + 112) = v2;
  result = *(uint **)(v1 + 108);
  *result = v2;
  return result;
}

//----- (021D182C) --------------------------------------------------------
uint *__fastcall Function_21d182c(int a1, int a2)
{
  uint *result;

  *(uint *)(a1 + 112) = a2;
  result = *(uint **)(a1 + 108);
  *result = a2;
  return result;
}

//----- (021D1834) --------------------------------------------------------
ushort *__fastcall Function_21d1834(int *a1, int a2)
{
  int *v2;
  int v3;
  int *v4;
  int v5;

  v2 = a1;
  v3 = a2;
  Function_21d15cc(a1 + 152, 1, 0, a2, (int)(a1 + 148));
  Function_21d17a4((int)(v2 + 152), 1);
  Function_21d1604(v2 + 190, 8, v3);
  Function_21d17a4((int)(v2 + 190), 0);
  v4 = v2 + 228;
  v5 = 2;
  do
  {
    Function_21d15cc(v4, 2 * (v5 - 2) + 3, 2 * (v5 - 2) + 2, v3, (int)(v2 + 148));
    Function_21d17a4((int)v4, 0);
    ++v5;
    v4 += 38;
  }
  while ( v5 <= 4 );
  Function_21d1604(v2 + 342, 9, v3);
  Function_21d17a4((int)(v2 + 342), 1);
  Function_21d17a8(v2 + 342, 0, -114688, 163840);
  Function_21d17b4(v2 + 342, 14336, 4096, 14336);
  return Function_21d17cc((ushort *)v2 + 684, 0, 0x7FFF, 0);
}

//----- (021D1908) --------------------------------------------------------
int *__fastcall Function_21d1908(int a1)
{
  int v1;
  int v2;
  int *v3;
  int *result;

  v1 = a1;
  v2 = 0;
  v3 = (int *)(a1 + 608);
  do
  {
    result = Function_21d16d8(v3, v1 + 592);
    ++v2;
    v3 += 38;
  }
  while ( v2 < 6 );
  return result;
}

//----- (021D192C) --------------------------------------------------------
int *__fastcall Function_21d192c(int a1)
{
  int v1;
  int v2;
  int v3;
  int *result;

  v1 = a1;
  Function_20af51c(0, 0, -4096, 0);
  Function_20af558(0, 0x7FFF);
  Function_20af56c(0x7FFF, 0x7FFF, 0);
  Function_20af590(0x7FFF, 0x7FFF, 0);
  v2 = 0;
  v3 = v1 + 608;
  do
  {
    result = Function_21d1708(v3);
    ++v2;
    v3 += 152;
  }
  while ( v2 < 6 );
  return result;
}

//----- (021D1978) --------------------------------------------------------
int __fastcall Function_21d1978(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( *(uint *)(a1 + 8) == 1 )
    return 0;
  switch ( (uchar)Function_21d1ca4() )
  {
    case 3u:
      Function_21d1c58(v1);
      if ( dword_21BF6C4 & 1 )
      {
        Function_21d1c98(v1);
        Function_2005748(0x5DCu);
      }
      goto LABEL_7;
    case 5u:
      result = 1;
      break;
    default:
LABEL_7:
      result = 0;
      break;
  }
  return result;
}

//----- (021D19D4) --------------------------------------------------------
int *__fastcall Function_21d19d4(int a1, int a2)
{
  int v2;
  int v3;
  int *result;

  v2 = a1;
  v3 = a2;
  result = (int *)Function_21d1ca4();
  switch ( (uchar)result )
  {
    case 0:
      *(uint *)(v2 + 8) = 1;
      *(uint *)(v2 + 12) = 36;
      Function_21d1c98(v2);
      result = G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 8, 21, 10, 6);
      break;
    case 1:
      result = (int *)(*(uint *)(v2 + 12) - 1);
      *(uint *)(v2 + 12) = result;
      if ( (int)result < 0 )
      {
        Function_21d1c98(v2);
        result = (int *)Function_2005748(0x6CAu);
      }
      break;
    case 2:
      result = (int *)Function_21d17e4(v2 + 608);
      if ( result )
      {
        Function_21d17a4(v2 + 608, 0);
        Function_21d17a4(v2 + 760, 1);
        Function_21d17a4(v2 + 912, 1);
        Function_21d17a4(v2 + 1064, 1);
        Function_21d17a4(v2 + 1216, 1);
        result = (int *)Function_21d1c98(v2);
      }
      break;
    case 3:
      result = (int *)Function_21d1ca8(v2, v3);
      break;
    case 4:
      result = (int *)Function_21d1e44(v2, v3);
      break;
    case 5:
      result = (int *)&REG_BLDCNT;
      REG_BLDCNT = 0;
      break;
    default:
      return result;
  }
  return result;
}

//----- (021D1AAC) --------------------------------------------------------
int __fastcall Function_21d1aac(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v10;
  int v11;

  v1 = a1;
  Call_G3X_Reset();
  v2 = Function_20b275c(17, 0, 0);
  v5 = Function_20b2628((int)v2, v3, v4);
  Function_20a73c0(v5, v6, v7, v8);
  Function_2007768(*(uint *)(v1 + 512));
  Function_20150ec(*(uint **)(v1 + 1612));
  v11 = 1;
  Function_20b275c(18, (int)&v11, 1);
  Function_20b275c(17, 0, 0);
  Function_20203ec();
  Function_21d192c(v1);
  v10 = 1;
  Function_20b275c(18, (int)&v10, 1);
  Function_20241bc(0, 0);
  return Function_20219f8(*(uint *)(v1 + 484));
}

//----- (021D1B20) --------------------------------------------------------
int __fastcall Function_21d1b20(int a1, uint a2)
{
  int v2;

  v2 = a1;
  *(uint *)(a1 + 1520) = Function_20203ac(a2);
  return Function_21d1b3c(*(uint *)(v2 + 1520), v2 + 1524);
}

//----- (021D1B3C) --------------------------------------------------------
int __fastcall Function_21d1b3c(int a1, uint *a2)
{
  uint *v2;
  short v4;
  short v5;
  short v6;
  int v7;
  int v8;
  int v9;

  *a2 = 0;
  a2[1] = 0;
  v2 = (uint *)a1;
  a2[2] = 0;
  v4 = -5461;
  v5 = 0;
  v6 = 0;
  Function_20206d0(a2, 1228800, &v4, 4004, 0, 1, a1);
  v8 = 4096;
  v7 = 0;
  v9 = 0;
  Function_2020680(&v7, v2);
  return Function_20203d4((int)v2);
}

//----- (021D1B90) --------------------------------------------------------
uint __fastcall Function_21d1b90(int a1)
{
  return Call_free5(*(uint *)(a1 + 1520));
}

//----- (021D1BA0) --------------------------------------------------------
uint *__fastcall Function_21d1ba0(uint *result)
{
  int v1;
  uint *v2;
  int v3;

  v1 = 0;
  v2 = result;
  do
  {
    if ( v1 )
    {
      if ( v1 == 1 )
      {
        v2[22] = 0;
        v2[23] = -4;
        v2[24] = 62;
      }
      else if ( v1 == 2 )
      {
        v2[22] = 38;
        v2[23] = -4;
        v2[24] = 26;
      }
    }
    else
    {
      v2[22] = -44;
      v2[23] = -4;
      v2[24] = 32;
    }
    ++v1;
    v2 += 3;
  }
  while ( v1 < 3 );
  v3 = 0;
  do
  {
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        result[31] = 130;
        result[32] = 82;
      }
      else if ( v3 == 2 )
      {
        result[31] = 172;
        result[32] = 50;
      }
    }
    else
    {
      result[31] = 78;
      result[32] = 55;
    }
    ++v3;
    result += 2;
  }
  while ( v3 < 3 );
  return result;
}

//----- (021D1C28) --------------------------------------------------------
uint *__fastcall Function_21d1c28(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  uint *result;

  v1 = a1;
  v2 = 0;
  v3 = (int)(a1 + 152);
  do
  {
    result = Function_21d17a8((uint *)(v3 + 152 * (v2++ + 2)), v1[22] << 12, v1[23] << 12, v1[24] << 12);
    v1 += 3;
  }
  while ( v2 < 3 );
  return result;
}

//----- (021D1C58) --------------------------------------------------------
int __fastcall Function_21d1c58(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  if ( dword_21BF6C4 & 0x20 )
  {
    v2 = *(uint *)(a1 + 84) - 1;
    if ( v2 >= 0 )
    {
      *(uint *)(v1 + 84) = v2;
      Function_2005748(0x5DCu);
    }
  }
  result = 16;
  if ( dword_21BF6C4 & 0x10 )
  {
    result = *(uint *)(v1 + 84) + 1;
    if ( result < 3 )
    {
      *(uint *)(v1 + 84) = result;
      result = Function_2005748(0x5DCu);
    }
  }
  return result;
}

//----- (021D1C98) --------------------------------------------------------
uint *__fastcall Function_21d1c98(uint *result, int a2)
{
  *result += a2;
  result[1] = 0;
  return result;
}

//----- (021D1CA4) --------------------------------------------------------
int __fastcall Function_21d1ca4(int a1)
{
  return *(uint *)a1;
}

//----- (021D1CA8) --------------------------------------------------------
int __fastcall Function_21d1ca8(int result, int a2)
{
  uint *v2;
  uint v3;
  int v4;

  v2 = (uint *)result;
  v3 = *(uint *)(result + 4);
  if ( v3 <= 8 )
    JUMPOUT(__CS__, *((short *)&off_21D1CC2 + v3) + 35462340);
  switch ( (uchar)v3 )
  {
    case 0:
      Function_21d213c(result + 16, *(uint *)(result + 1520), result + 1524);
      Function_201ff0c(2u, 1);
      result = v2[1] + 1;
      v2[1] = result;
      break;
    case 1:
      result = Function_21d2200(result + 16);
      if ( result )
      {
        v2[3] = 6;
        result = v2[1] + 1;
        v2[1] = result;
      }
      break;
    case 2:
      v4 = *(uint *)(result + 12) - 1;
      *(uint *)(result + 12) = v4;
      if ( v4 < 0 )
      {
        Function_21d1e28(result);
        result = v2[1] + 1;
        v2[1] = result;
      }
      break;
    case 3:
      *(uchar *)(result + 1712) = Function_21d201c(
                                    *(uint *)(result + 152),
                                    a2,
                                    360,
                                    0,
                                    66063,
                                    *(uint *)(result + 1708),
                                    result + 172);
      result = v2[1] + 1;
      v2[1] = result;
      break;
    case 4:
      result = Function_201d724(*(uchar *)(result + 1712));
      if ( !result )
      {
        Function_21d2090(v2);
        result = v2[1] + 1;
        v2[1] = result;
      }
      break;
    case 5:
      *(uchar *)(result + 1712) = Function_21d201c(
                                    *(uint *)(result + 152),
                                    a2,
                                    360,
                                    7,
                                    66063,
                                    *(uint *)(result + 1708),
                                    result + 172);
      result = v2[1] + 1;
      v2[1] = result;
      break;
    case 6:
      result = Function_201d724(*(uchar *)(result + 1712));
      if ( !result )
      {
        Function_21d2090(v2);
        result = v2[1] + 1;
        v2[1] = result;
      }
      break;
    case 7:
      Function_21d2430(result + 1536, 1);
      v2[2] = 0;
      result = v2[1] + 1;
      v2[1] = result;
      break;
    case 8:
      Function_21d1df0();
      result = Function_21d1e28(v2);
      break;
    default:
      return result;
  }
  return result;
}

//----- (021D1DF0) --------------------------------------------------------
uint *__fastcall Function_21d1df0(int a1)
{
  int v1;
  int v2;
  int v3;
  uint *result;

  v1 = a1;
  v2 = 0;
  v3 = a1 + 608;
  do
  {
    if ( *(uint *)(v1 + 84) == v2 )
      result = Function_21d180c(v3 + 152 * (v2 + 2));
    else
      result = Function_21d182c(v3 + 152 * (v2 + 2), 0);
    ++v2;
  }
  while ( v2 < 3 );
  return result;
}

//----- (021D1E28) --------------------------------------------------------
int __fastcall Function_21d1e28(int a1)
{
  return Function_21d243c(
           a1 + 1536,
           *(uint *)(a1 + 8 * *(uint *)(a1 + 84) + 124),
           *(uint *)(a1 + 8 * *(uint *)(a1 + 84) + 128));
}

//----- (021D1E44) --------------------------------------------------------
uint *__fastcall Function_21d1e44(uint *result, uint a2)
{
  int v2;
  uint v3;
  uint v4;
  uint v5;

  v2 = (int)result;
  v3 = result[1];
  v4 = a2;
  if ( v3 <= 4 )
    JUMPOUT(__CS__, *((short *)&off_21D1E60 + v3) + 35462754);
  switch ( (uchar)v3 )
  {
    case 0:
      Function_21d2430(result + 384, 0);
      Function_21d1e28(v2);
      Function_21d2904(v2);
      Function_21d2618(v2);
      ++*(uint *)(v2 + 4);
      result = (uint *)1;
      *(uint *)(v2 + 8) = 1;
      break;
    case 1:
      Function_21d2508(result + 404, 1);
      Function_2007dec(*(uint *)(v2 + 4 * *(uint *)(v2 + 84) + 516), 6u, 0);
      result = (uint *)Function_21d26a4(v2);
      if ( result )
      {
        v5 = ReturnSpeciesOfChosenStarter(*(uint *)(v2 + 84) & 0xFFFF);
        Function_2005844(v5, 0);
        result = (uint *)(*(uint *)(v2 + 4) + 1);
        *(uint *)(v2 + 4) = result;
      }
      break;
    case 2:
      Function_21d1fb4(result[38], a2, 360, result[21] + 1, 66063, 255);
      *(uint *)(v2 + 184) = Function_2002100(*(uint **)(v2 + 148), (uchar *)(v2 + 176), 670, 1, v4);
      *(uint *)(v2 + 8) = 0;
      result = (uint *)(*(uint *)(v2 + 4) + 1);
      *(uint *)(v2 + 4) = result;
      break;
    case 3:
      result = (uint *)Function_2002114(result[46], a2);
      if ( result )
      {
        if ( result == (uint *)-2 )
        {
          ++*(uint *)(v2 + 4);
          result = (uint *)Function_21d2688(v2);
        }
      }
      else
      {
        result = Function_21d1c98((uint *)v2, 1);
      }
      break;
    case 4:
      result = (uint *)((int (*)(void))Function_21d26a4)();
      if ( result )
      {
        Function_21d1c98((uint *)v2, -1);
        *(uint *)(v2 + 4) = 7;
        Function_21d2508(v2 + 1616, 0);
        Function_2007dec(*(uint *)(v2 + 4 * *(uint *)(v2 + 84) + 516), 6u, 1);
        result = (uint *)Function_21d1fb4(*(uint *)(v2 + 152), v4, 360, 7, 66063, 255);
        *(uchar *)(v2 + 1712) = (uchar)result;
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (021D1FB4) --------------------------------------------------------
int __fastcall Function_21d1fb4(int a1, uint a2, int a3, uint a4)
{
  int v4;
  uint v5;
  ushort **v6;
  ushort *v7;
  int v8;
  int v9;

  v4 = a1;
  v5 = a4;
  v6 = (ushort **)LoadFromMsgNARC(0, 26, a3, a2);
  if ( !v6 )
    ErrorHandler();
  v7 = Function_200b1ec_CallMsgDecrypt(v6, v5);
  Function_201ada4_ClearTextBox(v4, 15);
  v8 = Function_201d78c(v4, 1);
  Function_200e060(v4, 0, 512, 0);
  Function_20237bc_FreeMsg((int)v7, v9);
  Function_200b190((ushort *)v6);
  return v8;
}

//----- (021D201C) --------------------------------------------------------
int __fastcall Function_21d201c(int a1, uint a2, int a3, uint a4, int a5, int a6, ushort **a7)
{
  int v7;
  uint v8;
  int v9;
  ushort **v10;
  ushort *v11;
  int v12;
  uint v14;

  v7 = a1;
  v8 = a2;
  v9 = a3;
  v14 = a4;
  if ( *a7 )
    ErrorHandler();
  v10 = (ushort **)LoadFromMsgNARC(0, 26, v9, v8);
  if ( !v10 )
    ErrorHandler();
  *a7 = Function_200b1ec_CallMsgDecrypt(v10, v14);
  Function_201ada4_ClearTextBox(v7, 15);
  v11 = *a7;
  v12 = Function_201d78c(v7, 1);
  Function_200e060(v7, 0, 512, 0);
  Function_200b190((ushort *)v10);
  return v12;
}

//----- (021D2090) --------------------------------------------------------
int __fastcall Function_21d2090(int a1, int a2)
{
  int v2;
  int result;

  v2 = a1;
  Function_20237bc_FreeMsg(*(uint *)(a1 + 172), a2);
  result = 0;
  *(uint *)(v2 + 172) = 0;
  return result;
}

//----- (021D20A4) --------------------------------------------------------
int __fastcall Function_21d20a4(int a1, int a2)
{
  int v2;

  v2 = a2;
  *(uchar *)(a1 + 176) = 1;
  *(uchar *)(a1 + 177) = 23;
  *(uchar *)(a1 + 178) = 12;
  *(uchar *)(a1 + 179) = 5;
  *(uchar *)(a1 + 180) = 4;
  *(uchar *)(a1 + 181) = 3;
  *(ushort *)(a1 + 182) = 167;
  Function_200daa4(*(uint **)(a1 + 148), 1u, 670, 1, 0, a2);
  return LoadFromNARC_PlFont1(0, 96, v2);
}

//----- (021D2108) --------------------------------------------------------
uint *__fastcall Function_21d2108(uint *result, int a2, int a3, int a4)
{
  *result = a2;
  result[1] = a2;
  result[2] = a3 - a2;
  result[3] = a4;
  return result;
}

//----- (021D2114) --------------------------------------------------------
BOOL __fastcall Function_21d2114(uint *a1, int a2)
{
  int v2;
  BOOL v3;

  v2 = a1[3];
  v3 = a2 >= v2;
  *a1 = s32_div_f(a1[2] * a2, v2) + a1[1];
  return v3;
}

//----- (021D213C) --------------------------------------------------------
uint *__fastcall Function_21d213c(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( a1[16] )
    ErrorHandler();
  Function_21d2108(v3, -5461, -9102, 6);
  Function_21d2108(v3 + 4, 1228800, 819200, 6);
  Function_21d2108(v3 + 8, 0, 147456, 6);
  v3[15] = 0;
  v3[12] = v4;
  v3[13] = v5;
  v3[14] = 0;
  return AddTaskToTaskList1((int)Function_21d219c, (int)v3, 0);
}

//----- (021D219C) --------------------------------------------------------
int __fastcall Function_21d219c(int *a1, uint *a2)
{
  uint *v2;
  int *v3;
  BOOL v4;
  int result;
  short v6;
  short v7;
  short v8;

  v2 = a2;
  v3 = a1;
  v4 = Function_21d2114(a2, a2[14]);
  Function_21d2114(v2 + 4, v2[14]);
  Function_21d2114(v2 + 8, v2[14]);
  v6 = *v2;
  v7 = 0;
  v8 = 0;
  Function_20209d4(&v6, (ushort *)v2[12]);
  Function_2020a50(v2[4], v2[12]);
  *(uint *)(v2[13] + 8) = v2[8];
  result = v2[14] + 1;
  v2[14] = result;
  if ( v4 == 1 )
  {
    Call_RemoveTaskFromTaskList(v3);
    v2[16] = 0;
    result = 1;
    v2[15] = 1;
  }
  return result;
}

//----- (021D2200) --------------------------------------------------------
int __fastcall Function_21d2200(int a1)
{
  return *(uint *)(a1 + 60);
}

//----- (021D2204) --------------------------------------------------------
int *__fastcall Function_21d2204(int *a1, int a2, int a3)
{
  int v3;
  int *v4;
  int v5;
  int *v6;
  int *v7;
  int *result;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = Function_200985c(a1[122], 82, 10, 0, 10, 1, a3);
  *(uint *)(v5 + 4) = v6;
  Function_200a3dc(v6);
  Function_2009d4c(*(int **)(v5 + 4));
  v7 = Function_20098b8(v4[123], 82, 11, 0, 11, 1, 1, v3);
  *(uint *)(v5 + 8) = v7;
  Function_200a640(v7);
  Function_2009d4c(*(int **)(v5 + 8));
  *(uint *)(v5 + 12) = Function_2009918(v4[124], 82, 12, 0, 12, 2u, v3);
  result = Function_2009918(v4[125], 82, 13, 0, 13, 3u, v3);
  *(uint *)(v5 + 16) = result;
  return result;
}

//----- (021D2290) --------------------------------------------------------
int __fastcall Function_21d2290(int **a1, int a2)
{
  int v2;
  int **v3;

  v2 = a2;
  v3 = a1;
  Function_200a4e4(*(int **)(a2 + 4));
  Function_200a6dc(*(int **)(v2 + 8));
  Function_2009d68(v3[122], *(uint ***)(v2 + 4));
  Function_2009d68(v3[123], *(uint ***)(v2 + 8));
  Function_2009d68(v3[124], *(uint ***)(v2 + 12));
  return Function_2009d68(v3[125], *(uint ***)(v2 + 16));
}

//----- (021D22D4) --------------------------------------------------------
int __fastcall Function_21d22d4(uint *a1, int *a2, int a3)
{
  uint *v3;
  int v4;
  int *v5;
  int v6;
  int result;
  int v8;
  char *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  char v15;

  v3 = a1;
  v4 = a3;
  v5 = a2;
  Function_20093b4((int)&v15, 10, 11, 12, 13, -1, -1, 0, 1, v3[122], v3[123], v3[124], v3[125], 0, 0);
  v8 = v3[121];
  v9 = &v15;
  v12 = 32;
  v13 = 1;
  v10 = 0;
  v11 = 0;
  v14 = v4;
  v6 = Function_2021b90(&v8);
  *v5 = v6;
  Function_2021cac(v6, 0);
  result = 0;
  v5[7] = 0;
  v5[8] = 0;
  return result;
}

//----- (021D2350) --------------------------------------------------------
int __fastcall Function_21d2350(int *a1)
{
  return Function_2021bd4(*a1);
}

//----- (021D235C) --------------------------------------------------------
uint *__fastcall Function_21d235c(uint *result, int a2, int a3)
{
  *result = 0;
  result[1] = a2;
  result[2] = a3;
  result[3] = 0;
  return result;
}

//----- (021D2368) --------------------------------------------------------
uint __fastcall Function_21d2368(uint *a1)
{
  uint *v1;
  int v2;
  uint result;
  int v4;

  v1 = a1;
  v2 = SLOWORD(Unknown_20f983c[(int)(ushort)s32_div_f(0xFFFF * a1[3], a1[2]) >> 4]);
  *v1 = (ll_mul(v2, (int)v1[1]) + 2048) >> 12;
  result = s32_div_f(v1[3] + 1, v1[2]);
  v1[3] = v4;
  return result;
}

//----- (021D23B8) --------------------------------------------------------
uint *__fastcall Function_21d23b8(int a1)
{
  int v1;
  uint *result;

  v1 = a1;
  if ( *(uint *)(a1 + 40) )
    ErrorHandler();
  Function_21d235c((uint *)(v1 + 44), 0x8000, 32);
  result = AddTaskToTaskList1((int)Function_21d23e8, v1, 0);
  *(uint *)(v1 + 40) = result;
  return result;
}

//----- (021D23E8) --------------------------------------------------------
int __fastcall Function_21d23e8(int a1, int a2)
{
  int v2;
  int v3;
  int v5;
  int v6;
  int v7;

  v2 = a2;
  Function_21d2368((uint *)(a2 + 44));
  v3 = *(uint *)(v2 + 32);
  v5 = *(uint *)(v2 + 28);
  v6 = v3;
  v7 = *(uint *)(v2 + 36);
  v6 = v3 + *(uint *)(v2 + 44);
  return Function_2021c50(*(uint **)v2, &v5);
}

//----- (021D241C) --------------------------------------------------------
int *__fastcall Function_21d241c(int a1)
{
  int v1;
  int *result;

  v1 = a1;
  result = *(int **)(a1 + 40);
  if ( result )
  {
    Call_RemoveTaskFromTaskList(result);
    result = 0;
    *(uint *)(v1 + 40) = 0;
  }
  return result;
}

//----- (021D2430) --------------------------------------------------------
uint __fastcall Function_21d2430(uint *a1, int a2)
{
  return Function_2021cac(*a1, a2);
}

//----- (021D243C) --------------------------------------------------------
int __fastcall Function_21d243c(int result, int a2, int a3)
{
  *(uint *)(result + 28) = a2 << 12;
  *(uint *)(result + 32) = a3 << 12;
  return result;
}

//----- (021D2448) --------------------------------------------------------
int __fastcall Function_21d2448(int **a1, int a2, int a3)
{
  int **v3;
  int v4;
  int v5;
  int v6;
  int v8;
  int *v9;
  int v10;
  int *v11;
  int *v12;
  short v13;
  short v14;
  short v15;
  int v16;
  int v17;
  short v18;
  int v19;
  int *v20;
  int v21;

  v3 = a1;
  v4 = a3;
  v5 = a2;
  a1[3] = (int *)Function_2006f50(82, 14, 0, a1 + 5, a3);
  v3[4] = (int *)Function_2006f88(82, 15, v3 + 6, v4);
  v8 = *(uint *)(v5 + 1612);
  v9 = v3[5];
  *v3 = Function_2015128(&v8);
  v19 = *(uint *)(v5 + 1612);
  v20 = v3[6];
  v21 = 1;
  v3[1] = Function_20151a4(&v19);
  v10 = *(uint *)(v5 + 1612);
  v11 = *v3;
  v12 = v3[1];
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 31;
  v17 = 1022;
  v18 = 0;
  v6 = Function_2015214((int **)&v10);
  v3[2] = (int *)v6;
  Function_2015240(v6, 0);
  return Function_2015268((int)v3[2], 64, 64);
}

//----- (021D24E4) --------------------------------------------------------
uint __fastcall Function_21d24e4(int a1)
{
  int v1;

  v1 = a1;
  Function_2015238(*(int **)(a1 + 8));
  Function_2015164(*(uint **)v1);
  Function_20151d4(*(uint **)(v1 + 4));
  free(*(uint *)(v1 + 12));
  return free(*(uint *)(v1 + 16));
}

//----- (021D2508) --------------------------------------------------------
uint __fastcall Function_21d2508(int a1, int a2)
{
  return Function_2015240(*(uint *)(a1 + 8), a2);
}

//----- (021D2514) --------------------------------------------------------
uint *__fastcall Function_21d2514(uint *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  uint *v8;
  int v9;
  int v10;
  uint *result;
  int v12;

  v8 = a1;
  v9 = a2;
  v10 = a3;
  v12 = a4;
  if ( a1[21] )
    ErrorHandler();
  Function_21d2108(v8 + 7, v9, v10, a8);
  Function_21d2108(v8 + 11, v12, a5, a8);
  Function_21d2108(v8 + 15, a6, a7, a8);
  v8[19] = 0;
  v8[20] = 1;
  result = AddTaskToTaskList1((int)Function_21d25a0, (int)v8, 0);
  v8[21] = result;
  return result;
}

//----- (021D256C) --------------------------------------------------------
uint *__fastcall Function_21d256c(uint *a1)
{
  uint *v1;
  int v2;
  uint *result;

  v1 = a1;
  if ( a1[21] )
    ErrorHandler();
  v1[20] = -2;
  v2 = v1[10];
  if ( v1[19] >= v2 )
    v1[19] = v2 + v1[20];
  result = AddTaskToTaskList1((int)Function_21d25a0, (int)v1, 0);
  v1[21] = result;
  return result;
}

//----- (021D25A0) --------------------------------------------------------
int __fastcall Function_21d25a0(int *a1, int *a2)
{
  int *v2;
  int *v3;
  BOOL v4;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = Function_21d2114(a2 + 7, a2[19]);
  Function_21d2114(v2 + 11, v2[19]);
  Function_21d2114(v2 + 15, v2[19]);
  Function_2015254((ushort *)v2[2], (uint)(v2[7] - 0x40000) >> 12, (uint)(v2[11] - 0x40000) >> 12);
  Function_2015270(v2[2], v2[15], v2[15]);
  if ( v4 == 1 || v2[19] < 0 )
  {
    Call_RemoveTaskFromTaskList(v3);
    v2[21] = 0;
  }
  result = v2[19] + v2[20];
  v2[19] = result;
  return result;
}

//----- (021D2608) --------------------------------------------------------
BOOL __fastcall Function_21d2608(int a1)
{
  return *(uint *)(a1 + 84) == 0;
}

//----- (021D2618) --------------------------------------------------------
int __fastcall Function_21d2618(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = a1 + 8 * *(uint *)(a1 + 84);
  v3 = *(uint *)(v2 + 124) << 12;
  v4 = (*(uint *)(v2 + 128) + 48) << 12;
  Function_21d2514((uint *)(a1 + 1616), *(uint *)(v2 + 124) << 12, 0x80000, v4, 393216, 1638, 4096, 6);
  return Function_21d26b4(
           v1 + 528,
           *(uint *)(v1 + 4 * *(uint *)(v1 + 84) + 516),
           v3,
           0x80000,
           v4,
           393216,
           1638,
           4096,
           6);
}

//----- (021D2688) --------------------------------------------------------
int __fastcall Function_21d2688(int a1)
{
  int v1;

  v1 = a1;
  Function_21d256c((uint *)(a1 + 1616));
  return Function_21d270c(v1 + 528);
}

//----- (021D26A4) --------------------------------------------------------
BOOL __fastcall Function_21d26a4(int a1)
{
  return Function_21d2608(a1 + 1616);
}

//----- (021D26B4) --------------------------------------------------------
uint *__fastcall Function_21d26b4(uint *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  uint *v9;
  int v10;
  int v11;
  uint *result;
  int v13;

  v9 = a1;
  v10 = a2;
  v11 = a3;
  v13 = a4;
  if ( a1[15] )
    ErrorHandler();
  Function_21d2108(v9 + 1, v11, v13, a9);
  Function_21d2108(v9 + 5, a5, a6, a9);
  Function_21d2108(v9 + 9, a7, a8, a9);
  *v9 = v10;
  v9[13] = 0;
  v9[14] = 1;
  result = AddTaskToTaskList1((int)Function_21d2740, (int)v9, 0);
  v9[15] = result;
  return result;
}

//----- (021D270C) --------------------------------------------------------
uint *__fastcall Function_21d270c(uint *a1)
{
  uint *v1;
  int v2;
  uint *result;

  v1 = a1;
  if ( a1[15] )
    ErrorHandler();
  v1[14] = -2;
  v2 = v1[4];
  if ( v1[13] >= v2 )
    v1[13] = v2 + v1[14];
  result = AddTaskToTaskList1((int)Function_21d2740, (int)v1, 0);
  v1[15] = result;
  return result;
}

//----- (021D2740) --------------------------------------------------------
int __fastcall Function_21d2740(int *a1, int *a2)
{
  int *v2;
  int *v3;
  BOOL v4;
  int v5;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = Function_21d2114(a2 + 1, a2[13]);
  Function_21d2114(v2 + 5, v2[13]);
  Function_21d2114(v2 + 9, v2[13]);
  v5 = (int)(((uint)((v2[9] << 20) + 2048) >> 12) | ((__CFADD__(v2[9] << 20, 2048)
                                                                   + (uint)((ull)v2[9] >> 12)) << 20)) >> 12;
  Function_2007dec(*v2, 0, v2[1] >> 12);
  Function_2007dec(*v2, 1u, v2[5] >> 12);
  Function_2007dec(*v2, 0xCu, v5);
  Function_2007dec(*v2, 0xDu, v5);
  if ( v4 == 1 || v2[13] < 0 )
  {
    Call_RemoveTaskFromTaskList(v3);
    v2[15] = 0;
  }
  result = v2[13] + v2[14];
  v2[13] = result;
  return result;
}

//----- (021D27CC) --------------------------------------------------------
int __fastcall Function_21d27cc(int a1, int a2)
{
  char v2;
  int v3;
  int v4;
  short v5;
  int result;
  int v7;
  uint v8;
  char v9;

  v7 = a1;
  v8 = a2;
  Call_LoadFromNARC_RLCN(82, 17, 0, 160, 32, a2);
  v3 = v7;
  v4 = 0;
  v5 = 1;
  do
  {
    *(uint *)(v3 + 156) = Function_201a778(v8, 1);
    Function_201a7a0(*(uint *)(v3 + 156));
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        v9 = 4;
        v2 = 14;
        Function_201a7e8(*(uint **)(v7 + 148), *(uint *)(v3 + 156), 3, 4, 14, 0xBu, 4u, 5, v5);
      }
      else
      {
        if ( v4 == 2 )
        {
          v9 = 20;
          v2 = 13;
        }
        Function_201a7e8(*(uint **)(v7 + 148), *(uint *)(v3 + 156), 3, v9, v2, 0xBu, 4u, 5, v5);
      }
    }
    else
    {
      v9 = 12;
      v2 = 4;
      Function_201a7e8(*(uint **)(v7 + 148), *(uint *)(v3 + 156), 3, 12, 4, 0xBu, 4u, 5, v5);
    }
    result = Function_21d28a8(*(uint *)(v3 + 156), v8, 360, v4++ + 4, 66058);
    v3 += 4;
    v5 += 64;
  }
  while ( v4 < 3 );
  return result;
}

//----- (021D2884) --------------------------------------------------------
uint __fastcall Function_21d2884(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = a1;
  v2 = 0;
  do
  {
    Function_201a8fc(*(uint *)(v1 + 156));
    result = free(*(uint *)(v1 + 156));
    ++v2;
    v1 += 4;
  }
  while ( v2 < 3 );
  return result;
}

//----- (021D28A8) --------------------------------------------------------
ushort *__fastcall Function_21d28a8(int a1, uint a2, int a3, uint a4, uchar a5)
{
  int v5;
  uint v6;
  ushort **v7;
  ushort *v8;
  int v9;

  v5 = a1;
  v6 = a4;
  v7 = (ushort **)LoadFromMsgNARC(0, 26, a3, a2);
  if ( !v7 )
    ErrorHandler();
  v8 = Function_200b1ec_CallMsgDecrypt(v7, v6);
  Function_201ada4_ClearTextBox(v5, a5);
  Function_201d78c(v5, 0);
  Function_20237bc_FreeMsg((int)v8, v9);
  return Function_200b190((ushort *)v7);
}

//----- (021D2904) --------------------------------------------------------
int __fastcall Function_21d2904(int a1)
{
  return Function_201acf4(*(uint *)(a1 + 4 * *(uint *)(a1 + 168) + 156));
}

//----- (021D291C) --------------------------------------------------------
int __fastcall ReturnSpeciesOfChosenStarter(int a1)
{
  switch ( a1 )
  {
    case 0:
      return 387;
    case 1:
      return 390;
    case 2:
      return 393;
  }
  ErrorHandler();
  return 0;
}

