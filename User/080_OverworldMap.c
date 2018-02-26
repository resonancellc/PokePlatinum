//----- (021D0D80) --------------------------------------------------------
int __fastcall Function_80_21d0d80(int a1)
{
  int v1;
  int v2;
  int v3;
  uint v4;

  v1 = a1;
  v2 = LoadPtrToOverWorldDataIn18(a1);
  Function_2017fc8(3, 17, 0x20000);
  v3 = MallocSomeDataAndStorePtrInOverlayData1c(v1, 228, 0x11u);
  Call_FillMemWithValue((int *)v3, 0, 0xE4u);
  *(uint *)(v3 + 44) = v2;
  v4 = *(uchar *)(v2 + 313);
  if ( v4 >= 3 )
    LOBYTE(v4) = 0;
  *(uchar *)v3 = v4;
  *(ushort *)(v3 + 2) = *(ushort *)(v2 + 316);
  *(uint *)(v3 + 4) = 17;
  Function_2004550(0x37u, 0);
  return 1;
}

//----- (021D0DD8) --------------------------------------------------------
int __fastcall Function_80_21d0dd8(int a1)
{
  int v1;

  v1 = LoadOverlayData1c(a1);
  switch ( (uchar)*(uint *)(v1 + 8) )
  {
    case 0u:
      *(uint *)(v1 + 8) = Function_21d132c();
      return 0;
    case 1u:
      *(uint *)(v1 + 8) = Function_21d1354();
      return 0;
    case 3u:
      *(uint *)(v1 + 8) = Function_21d138c();
      Function_21d1068(v1);
      return 0;
    case 4u:
      *(uint *)(v1 + 8) = Function_21d13a0();
      Function_21d1068(v1);
      return 0;
    case 6u:
      *(uint *)(v1 + 8) = Function_21d13dc();
      Function_21d1068(v1);
      return 0;
    case 7u:
      return 1;
    case 8u:
      *(uint *)(v1 + 8) = Function_21d1438();
      break;
    default:
      return 0;
  }
  return 0;
}

//----- (021D0E50) --------------------------------------------------------
int __fastcall Function_80_21d0e50(int a1)
{
  int v1;

  v1 = a1;
  LoadOverlayData1c(a1);
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(17);
  return 1;
}

//----- (021D0E68) --------------------------------------------------------
int __fastcall Function_21d0e68(uchar *a1)
{
  uchar *v1;
  void (*v2)(void);
  int result;

  v1 = a1;
  v2 = (void (*)(void))*(&off_21D2EB4 + 9 * *a1);
  if ( v2 )
    v2();
  NNS_GfdDoVramTransfer();
  Function_21d2aec(v1);
  Function_201c2b8(*((uint *)v1 + 10));
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (021D0EA8) --------------------------------------------------------
char *Function_21d0ea8()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_21D2E6C;
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

//----- (021D0EC8) --------------------------------------------------------
int __fastcall Function_21d0ec8(uint *a1)
{
  uint *v1;
  uint v2;
  uint *v3;

  v1 = a1;
  v2 = a1[3];
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      Function_21d0ea8();
      v1[10] = Function_2018340(v1[1]);
      Function_21d1088(v1, v1[10]);
      Function_21d1158(v1);
      Function_201e3d8();
      Function_201e450(4u);
      Function_21d2a08(v1);
    }
    else if ( v2 == 2 )
    {
      SetMainLoopFunctionCall((int)Function_21d0e68, (int)v1);
      v1[14] = (uint)*(&off_21D2EA4 + 9 * *(uchar *)v1);
      v1[3] = 0;
      return 1;
    }
  }
  else
  {
    SetMainLoopFunctionCall(0, 0);
    Function_20177a4();
    Function_201ff00();
    Function_201ff68();
    REG_DISPCNT &= 0xFFFFE0FF;
    REG_DISPCNT_SUB &= 0xFFFFE0FF;
    v3 = (uint *)v1[11];
    if ( *v3 || v3[1] )
    {
      v1[8] = *v3 / 32;
      v1[9] = *(uint *)(v1[11] + 4) / 32;
    }
    else
    {
      v1[8] = 3;
      v1[9] = 27;
    }
    v1[6] = v1[8];
    v1[7] = v1[9];
    v1[32] = LoadFromMsgNARC(1, 26, 433, v1[1]);
    v1[33] = LoadFromMsgNARC(1, 26, 615, v1[1]);
    v1[34] = Function_2023790(22, v1[1]);
    v1[12] = Function_2039ebc(v1[1]);
    v1[16] = Function_21d2d70("data/tmap_block.dat", v1[1]);
  }
  ++v1[3];
  return 0;
}

//----- (021D0FF4) --------------------------------------------------------
ushort *__fastcall Function_21d0ff4(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  Function_201e530();
  Function_201ff0c(0x1Fu, 0);
  Function_201ff74(0x1Fu, 0);
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  Function_21d2ac0(v1);
  Function_21d12d8(v1);
  v2 = 0;
  do
    Function_2019044(*(uint *)(v1 + 40), (uchar)v2++);
  while ( v2 < 8 );
  free(*(uint *)(v1 + 40));
  Function_21d2e10(*(uint *)(v1 + 64));
  Function_2039ef0(*(uint *)(v1 + 48));
  Function_20237bc_FreeMsg(*(uint *)(v1 + 136), v3);
  Function_200b190(*(ushort **)(v1 + 132));
  return Function_200b190(*(ushort **)(v1 + 128));
}

//----- (021D1068) --------------------------------------------------------
int __fastcall Function_21d1068(uchar *a1)
{
  uchar *v1;

  v1 = a1;
  ((void (*)(void))*(&off_21D2EAC + 9 * *a1))();
  return Function_21d2ae0(v1);
}

//----- (021D1088) --------------------------------------------------------
uint __fastcall Function_21d1088(int a1, uint *a2)
{
  uint *v2;
  int *v3;
  char *v4;
  int v5;
  int v6;
  int v7;
  uchar v8;
  int v9;
  int *v10;
  uint v11;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  char v18;

  v13 = a1;
  v2 = a2;
  v14 = 1;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  SetGraphicsModes(&v14);
  v3 = dword_21D2F00;
  v4 = &v18;
  v5 = 28;
  do
  {
    v6 = *v3;
    v7 = v3[1];
    v3 += 2;
    *(uint *)v4 = v6;
    *((uint *)v4 + 1) = v7;
    v4 += 8;
    --v5;
  }
  while ( v5 );
  v8 = 0;
  v9 = 0;
  v10 = (int *)&v18;
  do
  {
    Function_20183c4(v2, v8, v10, 0);
    v11 = v8++;
    Function_2019ebc(v2, v11);
    ++v9;
    v10 += 7;
  }
  while ( v9 < 8 );
  Function_2019690(0, 32, 0, *(uint *)(v13 + 4));
  Function_2019690(1u, 32, 0, *(uint *)(v13 + 4));
  Function_2019690(2u, 32, 0, *(uint *)(v13 + 4));
  Function_2019690(3u, 32, 0, *(uint *)(v13 + 4));
  Function_2019690(4u, 32, 0, *(uint *)(v13 + 4));
  Function_2019690(5u, 32, 0, *(uint *)(v13 + 4));
  Function_2019690(6u, 32, 0, *(uint *)(v13 + 4));
  return Function_2019690(7u, 32, 0, *(uint *)(v13 + 4));
}

//----- (021D1158) --------------------------------------------------------
int __fastcall Function_21d1158(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;

  v4 = a1;
  v5 = LoadFromNARC_8(17, *(uint *)(a1 + 4), a3, a4);
  Function_208c210(*(uint **)(v4 + 40), *(uint *)(v4 + 4), (int)v5, 17, 0x13u, 1u, 0, 0, 0);
  Function_208c210(*(uint **)(v4 + 40), *(uint *)(v4 + 4), (int)v5, 17, 0x14u, 6u, 0, 0, 0);
  Function_208c210(*(uint **)(v4 + 40), *(uint *)(v4 + 4), (int)v5, 17, 0x15u, 5u, 0, 0, 0);
  Function_208c210(*(uint **)(v4 + 40), *(uint *)(v4 + 4), (int)v5, 17, 0, 0, 2, 0, 0);
  Function_208c210(*(uint **)(v4 + 40), *(uint *)(v4 + 4), (int)v5, 17, 1u, 4u, 2, 0, 0);
  *(uint *)(v4 + 152) = Function_208c2f4((int)v5, 17, 0x18u, v4 + 184, *(uint *)(v4 + 4));
  *(uint *)(v4 + 156) = Function_208c2f4((int)v5, 17, 0x16u, v4 + 188, *(uint *)(v4 + 4));
  *(uint *)(v4 + 160) = Function_208c2f4((int)v5, 17, 0x17u, v4 + 192, *(uint *)(v4 + 4));
  *(uint *)(v4 + 164) = Function_208c2f4((int)v5, 17, 0x19u, v4 + 196, *(uint *)(v4 + 4));
  *(uint *)(v4 + 168) = Function_208c2f4((int)v5, 17, 0x1Au, v4 + 200, *(uint *)(v4 + 4));
  *(uint *)(v4 + 172) = Function_208c2f4((int)v5, 17, 0x1Bu, v4 + 204, *(uint *)(v4 + 4));
  *(uint *)(v4 + 176) = Function_208c2f4((int)v5, 17, 0x1Cu, v4 + 208, *(uint *)(v4 + 4));
  *(uint *)(v4 + 180) = Function_208c2f4((int)v5, 17, 0x1Du, v4 + 212, *(uint *)(v4 + 4));
  Call_FS_CloseFile(v5);
  LoadFromNARC_PlFont1(0, 480, *(uint *)(v4 + 4));
  return LoadFromNARC_PlFont1(4u, 480, *(uint *)(v4 + 4));
}

//----- (021D12D8) --------------------------------------------------------
uint __fastcall Function_21d12d8(int *a1)
{
  int *v1;

  v1 = a1;
  free(a1[45]);
  free(v1[44]);
  free(v1[43]);
  free(v1[42]);
  free(v1[41]);
  free(v1[40]);
  free(v1[39]);
  return free(v1[38]);
}

//----- (021D132C) --------------------------------------------------------
int __fastcall Function_21d132c(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( Function_21d0ec8(a1) != 1 )
    return 0;
  ((void (__fastcall *)(uint *))*(&off_21D2E94 + 9 * *(uchar *)v1))(v1);
  return 1;
}

//----- (021D1354) --------------------------------------------------------
int __fastcall Function_21d1354(uchar *a1)
{
  uchar *v1;

  v1 = a1;
  if ( ((int (*)(void))*(&off_21D2E98 + 9 * *a1))() != 1 )
    return 1;
  ((void (__fastcall *)(uchar *))*(&off_21D2E9C + 9 * *v1))(v1);
  return 3;
}

//----- (021D138C) --------------------------------------------------------
int Function_21d138c()
{
  int result;

  if ( Function_200f2ac() )
    result = 4;
  else
    result = 3;
  return result;
}

//----- (021D13A0) --------------------------------------------------------
int __fastcall Function_21d13a0(int (**a1)(void))
{
  int (**v1)(void);
  int result;

  v1 = a1;
  if ( a1[14]() == 1 )
  {
    ((void (__fastcall *)(int (**)(void)))*(&off_21D2EA0 + 9 * *(uchar *)v1))(v1);
    result = 6;
  }
  else
  {
    ((void (__fastcall *)(int (**)(void)))*(&off_21D2EA8 + 9 * *(uchar *)v1))(v1);
    result = 4;
  }
  return result;
}

//----- (021D13DC) --------------------------------------------------------
int __fastcall Function_21d13dc(uchar *a1)
{
  uchar *v1;
  int result;

  v1 = a1;
  if ( Function_200f2ac() )
  {
    G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 0, 0, 31, 0);
    SetBrightnessWithValue(0, 0);
    SetBrightnessWithValue(1, 0);
    Function_200f32c(0);
    Function_200f32c(1);
    result = 8;
  }
  else
  {
    ((void (__fastcall *)(uchar *))*(&off_21D2EA8 + 9 * *v1))(v1);
    result = 6;
  }
  return result;
}

//----- (021D1438) --------------------------------------------------------
int __fastcall Function_21d1438(uchar *a1)
{
  int v1;

  v1 = (int)a1;
  ((void (*)(void))*(&off_21D2EB0 + 9 * *a1))();
  Function_21d0ff4(v1);
  return 7;
}

//----- (021D1458) --------------------------------------------------------
int __fastcall Function_21d1458(int a1)
{
  int v1;
  int *v2;

  v1 = a1;
  v2 = (int *)malloc(*(uint *)(a1 + 4), 272);
  *(uint *)(v1 + 52) = v2;
  Call_FillMemWithValue(v2, 0, 0x110u);
  return 1;
}

//----- (021D1478) --------------------------------------------------------
int __fastcall Function_21d1478(int a1)
{
  uchar *v1;
  int v2;

  v1 = (uchar *)a1;
  v2 = *(uint *)(a1 + 52);
  Function_21d225c();
  if ( *v1 != 2 )
    Function_21d2700(v1);
  Function_21d2c1c(*(uint *)(v2 + 156));
  Function_21d1f14(v1);
  free(v2);
  return 1;
}

//----- (021D14A8) --------------------------------------------------------
int __fastcall Function_21d14a8(uint *a1)
{
  uint *v1;
  uint *v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = (uint *)a1[13];
  if ( *v2 )
  {
    if ( *v2 == 1 )
    {
      Function_21d20dc();
      Function_21d2398(v1);
      v5 = v1[1];
      v2[39] = Function_21d2af4(v1[54], v1[55], v1[11] + 292, 20);
      Function_21d1a30(v1);
      Function_21d19e4(v1);
      *v2 = 0;
      return 1;
    }
  }
  else
  {
    v2[6] = a1[6];
    v2[7] = a1[7];
    v2[8] = -1;
    v2[35] = 16 * v2[6] - 104;
    v2[36] = 16 * v2[7] - 96;
    v3 = v2[35];
    v4 = v2[36];
    Function_21d24bc();
    Function_21d1df8(v1);
    if ( *(uchar *)v1 != 2 )
      Function_21d259c(v1);
  }
  ++*v2;
  return 0;
}

//----- (021D1550) --------------------------------------------------------
int __fastcall Function_21d1550(int a1)
{
  *(uint *)(a1 + 20) = 0;
  Function_200f174(1u, 17, 37, 0, 6, 1, *(uint *)(a1 + 4));
  Function_2005748(0x68Fu);
  Function_200f338(0);
  Function_200f338(1);
  G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 4, 8, 28, 4);
  return 0;
}

//----- (021D159C) --------------------------------------------------------
int __fastcall Function_21d159c(int a1)
{
  *(uint *)(a1 + 20) = 0;
  Function_200f174(2u, 16, 36, 0, 6, 1, *(uint *)(a1 + 4));
  Function_2005748(0x690u);
  return 0;
}

//----- (021D15C8) --------------------------------------------------------
int __fastcall Function_21d15c8(int a1)
{
  *(uint *)(a1 + 20) = 0;
  Function_200f174(3u, 17, 17, 0, 6, 1, *(uint *)(a1 + 4));
  Function_2005748(0x68Fu);
  Function_200f338(0);
  G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 4, 8, 28, 4);
  return 0;
}

//----- (021D1610) --------------------------------------------------------
int __fastcall Function_21d1610(int a1)
{
  *(uint *)(a1 + 20) = 0;
  Function_200f174(3u, 16, 16, 0, 6, 1, *(uint *)(a1 + 4));
  Function_2005748(0x690u);
  return 0;
}

//----- (021D163C) --------------------------------------------------------
int __fastcall Function_21d163c(int a1)
{
  uint v1;
  int result;

  v1 = *(uchar *)(*(uint *)(a1 + 52) + 20);
  if ( v1 <= 1 && dword_21BF6C4 & 2 )
  {
    Function_2005748(0x5DDu);
    result = 1;
  }
  else
  {
    if ( v1 <= 1 )
      Function_21d18f8();
    result = 0;
  }
  return result;
}

//----- (021D1678) --------------------------------------------------------
int __fastcall Function_21d1678(int a1)
{
  uint v1;

  v1 = *(uchar *)(*(uint *)(a1 + 52) + 20);
  if ( v1 <= 1 )
  {
    if ( dword_21BF6C4 & 1 )
    {
      if ( !Function_21d29bc() )
        return 0;
      Function_2005748(0x5DDu);
      return 1;
    }
    if ( dword_21BF6C4 & 2 )
    {
      Function_2005748(0x5DDu);
      return 1;
    }
  }
  if ( v1 <= 1 )
    Function_21d18f8();
  return 0;
}

//----- (021D16D0) --------------------------------------------------------
int __fastcall Function_21d16d0(int a1)
{
  int result;

  if ( dword_21BF6C4 & 2 )
  {
    Function_2005748(0x5DDu);
    result = 1;
  }
  else
  {
    Function_21d18f8(a1, dword_21BF6C0);
    result = 0;
  }
  return result;
}

//----- (021D16F8) --------------------------------------------------------
int __fastcall Function_21d16f8(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = *(uint *)(a1 + 52);
  if ( *(uchar *)(v2 + 18) & 1 )
  {
    if ( (*(uchar *)(v2 + 21) & 0xFu) >= 2 )
    {
      Function_21d19e4(a1);
      *(uchar *)(v2 + 18) = 0;
      *(ushort *)(v2 + 22) = 0;
      *(uchar *)(v2 + 21) &= 0xF0u;
    }
  }
  else if ( *(uchar *)(v2 + 16) == 1 && *(ushort *)(v2 + 22) == 1 )
  {
    v3 = *(uint *)(v2 + 32);
    Function_21d1d24();
  }
  Function_21d1c24(v1);
  return 0;
}

//----- (021D1744) --------------------------------------------------------
int __fastcall Function_21d1744(uchar *a1)
{
  Function_21d2d28(*(uint *)(*((uint *)a1 + 13) + 156), *a1);
  return 0;
}

//----- (021D1758) --------------------------------------------------------
int __fastcall Function_21d1758(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v1 = a1;
  v2 = a1[37];
  v3 = a1[36];
  v4 = a1[13];
  if ( !a1[35] )
    return 0;
  a1[35] = 0;
  if ( v2 )
  {
    Function_21d1b5c();
    Function_20237e8(v1[34], v6);
    Function_21d1a58(v1, v3, *(uint *)(v4 + 24), *(uint *)(v4 + 28));
    Function_200e2a4((uint *)v1[10], 4u, 315, 14, *(ushort *)(v2 + 4), *(ushort *)(v2 + 6), v1[1]);
    if ( *(ushort *)(v2 + 4) > 1u )
      v7 = v4 + 72;
    else
      v7 = v4 + 56;
    *(uint *)(v4 + 120) = v7;
    *(uchar *)(v4 + 21) = *(uchar *)(v4 + 21) & 0xF | 16 * *(ushort *)(v2 + 4);
    Function_200e69c(v7, 1, 315, 0xEu, *(ushort *)(v2 + 4));
    Function_201ada4_ClearTextBox(v7, 15);
    v8 = v1[34];
    Function_201d738_CallInitTextInterpreter(v7, 1);
    Function_201a954(v7, v9);
    Function_201a954(v4 + 88, v10);
    result = 0;
  }
  else
  {
    Function_21d1b5c();
    Function_21d1d38(v1);
    result = 0;
  }
  return result;
}

//----- (021D1848) --------------------------------------------------------
int __fastcall Function_21d1848(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  short v6;

  v2 = a1;
  v3 = a2;
  v4 = Function_2022664((uchar *)&dword_21D2FE0[1 - a2 + 3]);
  if ( v4 == -1 || v3 == 1 )
    return v4;
  v6 = 18;
  if ( Function_201c784(
         *(uint **)(v2 + 40),
         5u,
         (ushort)word_21BF6D8,
         (ushort)word_21BF6DA,
         (ushort *)&v6) )
  {
    v4 = -1;
  }
  return v4;
}

//----- (021D18A0) --------------------------------------------------------
int __fastcall Function_21d18a0(int a1)
{
  int v1;
  int v2;
  bool v4;
  int v5;

  v1 = a1;
  v2 = *(uint *)(a1 + 52);
  if ( *(uchar *)(*(uint *)(a1 + 44) + 313) == 2 )
    return 0;
  v4 = Function_202278c() == 0;
  v5 = *(uchar *)(v2 + 20);
  if ( v4 )
  {
    if ( v5 == 3 || v5 == 1 )
      --*(uchar *)(v2 + 20);
  }
  else if ( !*(uchar *)(v2 + 20) && Function_21d1848(v1, *(uchar *)(v2 + 16)) != -1 )
  {
    Function_21d273c(v1, *(uchar *)(v2 + 16));
    *(uchar *)(v2 + 20) = 3;
    return 1;
  }
  return 0;
}

//----- (021D18F8) --------------------------------------------------------
int __fastcall Function_21d18f8(int a1, char a2)
{
  int v2;
  char v3;
  int result;
  int v5;
  uint v6;
  int v7;
  uint v8;
  int v9;
  int v10;
  int v11;
  int v12;
  short v13;
  int v14;

  v2 = *(uint *)(a1 + 52);
  v3 = a2;
  if ( *(uchar *)(v2 + 17) )
  {
    result = 240;
    if ( !(a2 & 0xF0) )
    {
      v5 = *(uchar *)(v2 + 21);
      result = v5 << 28;
      if ( (v5 & 0xF) == 1 )
      {
        v6 = v5 & 0xFFFFFFF0;
        result = v6 | 2;
        *(uchar *)(v2 + 21) = v6 | 2;
      }
    }
  }
  else
  {
    result = Function_21d18a0(a1);
    if ( !result )
    {
      if ( v3 & 0xF0 )
      {
        if ( v3 & 0x40 )
        {
          v9 = *(uint *)(v2 + 28);
          if ( v9 >= 7 )
          {
            *(uint *)(v2 + 28) = v9 - 1;
            *(uchar *)(v2 + 17) |= 8u;
          }
        }
        if ( v3 & 0x80 )
        {
          v10 = *(uint *)(v2 + 28);
          if ( v10 <= 27 )
          {
            *(uint *)(v2 + 28) = v10 + 1;
            *(uchar *)(v2 + 17) |= 4u;
          }
        }
        if ( v3 & 0x10 )
        {
          v11 = *(uint *)(v2 + 24);
          if ( v11 <= 27 )
          {
            *(uint *)(v2 + 24) = v11 + 1;
            *(uchar *)(v2 + 17) |= 1u;
          }
        }
        if ( v3 & 0x20 )
        {
          v12 = *(uint *)(v2 + 24);
          if ( v12 >= 2 )
          {
            *(uint *)(v2 + 24) = v12 - 1;
            *(uchar *)(v2 + 17) |= 2u;
          }
        }
        *(uchar *)(v2 + 19) = 3;
        *(uchar *)(v2 + 17) |= 0x80u;
        if ( *(uchar *)(v2 + 18) )
          v13 = *(ushort *)(v2 + 22) + 1;
        else
          v13 = 0;
        *(ushort *)(v2 + 22) = v13;
        *(uchar *)(v2 + 18) = 0;
        v14 = *(uchar *)(v2 + 21) & 0xF0;
        result = v14 | 1;
        *(uchar *)(v2 + 21) = v14 | 1;
      }
      else
      {
        v7 = *(uchar *)(v2 + 21);
        result = v7 << 28;
        if ( (v7 & 0xF) == 1 )
        {
          v8 = v7 & 0xFFFFFFF0;
          result = v8 | 2;
          *(uchar *)(v2 + 21) = v8 | 2;
        }
      }
    }
  }
  return result;
}

//----- (021D19E4) --------------------------------------------------------
int __fastcall Function_21d19e4(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int result;

  v1 = a1;
  v2 = *(uint *)(a1 + 52);
  v3 = *(uint *)(v2 + 28);
  v4 = *(uint *)(v2 + 32);
  v5 = *(uint *)(v2 + 24);
  Function_21d1ab0();
  Function_21d2cc0(*(uint *)(v2 + 156), *(uint *)(v2 + 32), *(uint *)(v2 + 24), *(uint *)(v2 + 28));
  result = *(uchar *)(v2 + 16);
  if ( result == 1 )
  {
    Function_21d1d24(v1, *(uint *)(v2 + 160), *(uint *)(v2 + 32));
    Function_201c3c0(*(uint *)(v1 + 40), 4);
    result = Function_201c3c0(*(uint *)(v1 + 40), 5);
  }
  return result;
}

//----- (021D1A30) --------------------------------------------------------
int __fastcall Function_21d1a30(int a1)
{
  int v1;
  int *v2;
  int result;

  v1 = a1;
  v2 = *(int **)(a1 + 52);
  v2[9] = v2[8];
  v2[8] = Function_2039f04(*(uint *)(a1 + 48), v2[6], v2[7]);
  result = Function_21d2e24(*(uint *)(v1 + 64), v2[6], v2[7], *(ushort *)(v1 + 2));
  v2[40] = result;
  return result;
}

//----- (021D1A58) --------------------------------------------------------
ushort *__fastcall Function_21d1a58(int a1, uint a2, int a3, int a4)
{
  short *v5;
  uint v6;

  if ( a2 )
    return Function_2071d10(a2, *(uint *)(a1 + 4), *(ushort **)(a1 + 136));
  v5 = &word_21D3080;
  v6 = 0;
  do
  {
    if ( a3 == (ushort)*v5 && a4 == (ushort)v5[1] )
      return Function_2071d10(dword_21D3084[2 * v6], *(uint *)(a1 + 4), *(ushort **)(a1 + 136));
    ++v6;
    v5 += 4;
  }
  while ( v6 < 0xD );
  return Function_2071d10(0, *(uint *)(a1 + 4), *(ushort **)(a1 + 136));
}

//----- (021D1AB0) --------------------------------------------------------
int __fastcall Function_21d1ab0(int a1, int a2, uint a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  uint v8;
  int v9;
  int v10;
  ushort *v11;
  int v12;
  int v14;

  v5 = a1;
  v6 = a2;
  v7 = *(uint *)(a1 + 52);
  v8 = a3;
  v14 = a4;
  Function_20237e8(*(uint *)(a1 + 136), a2);
  Function_201ada4_ClearTextBox(v6, 0);
  if ( *(uint *)(v7 + 160) )
  {
    Function_21d1a58(v5, v8, v14, a5);
    if ( *(uchar *)v5 != 1 )
      Function_2002d7c(0, *(uint *)(v5 + 136), 0);
    v10 = *(uint *)(v5 + 136);
    Function_201d78c(v6, 0);
  }
  if ( *(uchar *)v5 == 1 )
  {
    v11 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v5 + 132), 0);
    Function_201d78c(v6, 0);
    Function_20237bc_FreeMsg((int)v11, v12);
  }
  return Function_201a954(v6, v9);
}

//----- (021D1B5C) --------------------------------------------------------
int __fastcall Function_21d1b5c(int a1, int a2, ushort *a3)
{
  int v3;
  int v4;
  ushort *v5;
  int v6;
  int result;
  uint v8;
  ushort *v9;
  int v10;
  int v11;
  int v12;
  uint v13;
  int v14;
  ushort *v15;
  int v16;
  int v17;
  int v18;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( a3 )
  {
    Function_201ada4_ClearTextBox(a2, 0);
    v8 = v5[4];
    if ( v8 != 0xFFFF
      && (!(*(uchar *)(*(uint *)(v3 + 44) + 92 + v5[11]) & 3)
       || (uint)*(uchar *)(*(uint *)(v3 + 44) + 92 + v5[11]) << 28 >> 30) )
    {
      v9 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v3 + 132), v8);
      v10 = v5[7];
      v11 = v5[6];
      Function_201d78c(v4, 0);
      Function_20237bc_FreeMsg((int)v9, v12);
    }
    v13 = v5[5];
    result = 0xFFFF;
    if ( v13 != 0xFFFF )
    {
      v14 = *(uchar *)(*(uint *)(v3 + 44) + 92 + v5[11]);
      if ( !((uint)(v14 << 26) >> 30)
        || (result = (uint)*(uchar *)(*(uint *)(v3 + 44) + 92 + v5[11]) << 24 >> 30) != 0 )
      {
        v15 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v3 + 132), v13);
        v16 = v5[9];
        v17 = v5[8];
        Function_201d78c(v4, 0);
        result = Function_20237bc_FreeMsg((int)v15, v18);
      }
    }
  }
  else
  {
    Function_201ada4_ClearTextBox(a2, 0);
    Function_201a954(v4, v6);
    result = Function_201acf4(v4);
  }
  return result;
}

//----- (021D1C24) --------------------------------------------------------
int __fastcall Function_21d1c24(int result)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = result;
  v2 = *(uint *)(result + 52);
  v3 = 5;
  v4 = *(uchar *)(v2 + 19);
  if ( *(uchar *)(v2 + 19) )
  {
    *(uchar *)(v2 + 19) = v4 - 1;
    if ( v4 == 3 )
    {
      Function_200d494(
        *(uint *)(v2 + 260),
        (short)(7 * *(ushort *)(v2 + 24) + 25),
        (short)(7 * *(uint *)(v2 + 28) - 34),
        *(uint *)(v2 + 28));
      Function_2021e2c(*(uint *)(v2 + 260), 4096);
      Function_21d1a30(v1);
      v5 = *(uint *)(v2 + 28);
      v6 = *(uint *)(v2 + 24);
      v7 = Function_2039f04(*(uint *)(v1 + 48), *(uint *)(v2 + 24), *(uint *)(v2 + 28));
      Function_21d1ab0(v1, v2 + 40, v7, v6, v5);
      v3 = 6;
    }
    if ( *(uchar *)(v2 + 17) & 8 )
      *(uint *)(v2 + 144) -= v3;
    if ( *(uchar *)(v2 + 17) & 4 )
      *(uint *)(v2 + 144) += v3;
    if ( *(uchar *)(v2 + 17) & 1 )
      *(uint *)(v2 + 140) += v3;
    if ( *(uchar *)(v2 + 17) & 2 )
      *(uint *)(v2 + 140) -= v3;
    Function_21d24bc(v1, *(uint *)(v2 + 140), *(uint *)(v2 + 144));
    result = *(uchar *)(v2 + 19);
    if ( !*(uchar *)(v2 + 19) )
    {
      *(uchar *)(v2 + 18) = 1;
      *(uchar *)(v2 + 17) = 0;
      result = *(uint *)(v2 + 32);
      if ( *(uint *)(v2 + 36) != result )
        result = Function_21d2cc0(*(uint *)(v2 + 156), -1, 0, 0);
    }
  }
  return result;
}

//----- (021D1D24) --------------------------------------------------------
uint *__fastcall Function_21d1d24(uint *a1, int a2, int a3)
{
  uint *result;

  a1[36] = a3;
  a1[37] = a2;
  result = a1 + 35;
  *result = 1;
  return result;
}

//----- (021D1D38) --------------------------------------------------------
int __fastcall Function_21d1d38(int result)
{
  int v1;
  int v2;
  int v3;

  v1 = result;
  v2 = *(uint *)(result + 52);
  v3 = *(uint *)(v2 + 120);
  *(uint *)(v2 + 120) = 0;
  if ( v3 )
  {
    Function_201ada4_ClearTextBox(v3, 0);
    Function_201acf4(v3);
    Function_200e744(v3, (uint)*(uchar *)(v2 + 21) << 24 >> 28, 0);
    result = Function_201c3c0(*(uint *)(v1 + 40), 4);
  }
  return result;
}

//----- (021D1D6C) --------------------------------------------------------
uint __fastcall Function_21d1d6c(int a1, int a2)
{
  int v2;
  int v3;
  ushort *v4;
  int v5;
  int v6;

  v2 = a1;
  v3 = a2;
  Function_2019964(
    *(uint *)(a1 + 40),
    5,
    10,
    0,
    0xCu,
    2u,
    *(uint *)(a1 + 204) + 12,
    0,
    7u,
    (uint)**(ushort **)(a1 + 204) << 21 >> 24,
    (uint)*(ushort *)(*(uint *)(a1 + 204) + 2) << 21 >> 24);
  v4 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 132), 1u);
  Function_2002d7c(0, (int)v4, 0);
  Function_201ada4_ClearTextBox(v3, 0);
  Function_201d78c(v3, 0);
  Function_201a954(v3, v5);
  return Function_20237bc_FreeMsg((int)v4, v6);
}

//----- (021D1DF8) --------------------------------------------------------
int __fastcall Function_21d1df8(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = *(uint *)(a1 + 52);
  Function_201a7e8(*(uint **)(a1 + 40), v2 + 40, 1, 3, 21, 0x1Du, 3u, 15, 936);
  Function_201a7e8(*(uint **)(v1 + 40), v2 + 56, 4, 9, 3, 0x15u, 4u, 14, 939);
  Function_201a7e8(*(uint **)(v1 + 40), v2 + 72, 4, 2, 3, 0x1Cu, 4u, 14, 827);
  Function_201a7e8(*(uint **)(v1 + 40), v2 + 88, 4, 1, 8, 0x1Cu, 0xEu, 14, 435);
  Function_201a7e8(*(uint **)(v1 + 40), v2 + 104, 4, 11, 0, 0xAu, 2u, 15, 415);
  Function_201ada4_ClearTextBox(v2 + 40, 0);
  Function_201ada4_ClearTextBox(v2 + 56, 0);
  Function_201ada4_ClearTextBox(v2 + 72, 0);
  Function_201ada4_ClearTextBox(v2 + 88, 0);
  Function_201ada4_ClearTextBox(v2 + 104, 0);
  Function_201a954(v2 + 40, v3);
  Function_201acf4(v2 + 56);
  Function_201acf4(v2 + 72);
  Function_201acf4(v2 + 88);
  return Function_201acf4(v2 + 104);
}

//----- (021D1F14) --------------------------------------------------------
int __fastcall Function_21d1f14(int a1)
{
  uint v1;
  int v2;
  int result;

  v1 = 0;
  v2 = *(uint *)(a1 + 52) + 40;
  do
  {
    Function_201a8fc(v2 + 16 * v1);
    result = (v1 + 1) << 16;
    v1 = (v1 + 1) & 0xFFFF;
  }
  while ( v1 < 5 );
  return result;
}

//----- (021D1F30) --------------------------------------------------------
int __fastcall Function_21d1f30(int a1, char a2, int a3)
{
  int v3;
  char v4;

  v3 = a1;
  v4 = a2;
  if ( a3 )
    Function_20198e8(
      *(uint *)(a1 + 40),
      5,
      0,
      0,
      0x20u,
      0x18u,
      *(uint *)(a1 + 208) + 12,
      0,
      0,
      (uint)**(ushort **)(a1 + 208) << 21 >> 24,
      (uint)*(ushort *)(*(uint *)(a1 + 208) + 2) << 21 >> 24);
  return Function_2019964(
           *(uint *)(v3 + 40),
           5,
           13,
           10,
           6u,
           7u,
           *(uint *)(v3 + 204) + 12,
           6 * v4,
           0,
           (uint)**(ushort **)(v3 + 204) << 21 >> 24,
           (uint)*(ushort *)(*(uint *)(v3 + 204) + 2) << 21 >> 24);
}

//----- (021D1FB0) --------------------------------------------------------
int __fastcall Function_21d1fb0(int *a1, int a2)
{
  int v2;
  int v3;
  int *v4;
  uchar *v5;
  uchar *v6;
  uchar *v7;
  int v8;
  uchar *v9;
  int v10;
  int result;

  v2 = a2;
  v3 = 4 * a2;
  v4 = a1;
  v5 = (uchar *)&dword_21D3020[6 * v3 / 4u];
  v6 = (uchar *)dword_21D3020 + 6 * (v3 + 1);
  v7 = (uchar *)dword_21D3020 + 6 * (v3 + 2);
  v8 = 6 * (v3 + 3);
  v9 = (uchar *)dword_21D3020 + v8;
  v10 = v8;
  Function_20198e8(
    a1[10],
    2,
    v6[2],
    v6[3],
    v6[4],
    v6[5],
    a1[48] + 12,
    *v6,
    v6[1],
    (uint)*(ushort *)a1[48] << 21 >> 24,
    (uint)*(ushort *)(a1[48] + 2) << 21 >> 24);
  Function_2019964(
    v4[10],
    6,
    v9[2],
    v9[3],
    v9[4],
    v9[5],
    v4[53] + 12,
    *((uchar *)dword_21D3020 + v10),
    v9[1],
    (uint)*(ushort *)v4[53] << 21 >> 24,
    (uint)*(ushort *)(v4[53] + 2) << 21 >> 24);
  result = v2;
  if ( v2 != 2 )
  {
    Function_20198e8(
      v4[10],
      3,
      v5[2],
      v5[3],
      v5[4],
      v5[5],
      v4[48] + 12,
      *v5,
      v5[1],
      (uint)*(ushort *)v4[48] << 21 >> 24,
      (uint)*(ushort *)(v4[48] + 2) << 21 >> 24);
    result = Function_2019964(
               v4[10],
               7,
               v7[2],
               v7[3],
               v7[4],
               v7[5],
               v4[53] + 12,
               *v7,
               v7[1],
               (uint)*(ushort *)v4[53] << 21 >> 24,
               (uint)*(ushort *)(v4[53] + 2) << 21 >> 24);
  }
  return result;
}

//----- (021D20DC) --------------------------------------------------------
int __fastcall Function_21d20dc(int a1)
{
  int v1;

  v1 = a1;
  Function_20198e8(
    *(uint *)(a1 + 40),
    2,
    0,
    0,
    0x20u,
    0x18u,
    *(uint *)(a1 + 184) + 12,
    0,
    0,
    (uint)**(ushort **)(a1 + 184) << 21 >> 24,
    (uint)*(ushort *)(*(uint *)(a1 + 184) + 2) << 21 >> 24);
  Function_20198e8(
    *(uint *)(v1 + 40),
    3,
    0,
    0,
    0x20u,
    0x18u,
    *(uint *)(v1 + 188) + 12,
    0,
    0,
    (uint)**(ushort **)(v1 + 188) << 21 >> 24,
    (uint)*(ushort *)(*(uint *)(v1 + 188) + 2) << 21 >> 24);
  if ( *(uchar *)v1 != 1 )
    Function_20198e8(
      *(uint *)(v1 + 40),
      3,
      16,
      21,
      2u,
      3u,
      *(uint *)(v1 + 188) + 12,
      0,
      0x15u,
      (uint)**(ushort **)(v1 + 188) << 21 >> 24,
      (uint)*(ushort *)(*(uint *)(v1 + 188) + 2) << 21 >> 24);
  Function_21d1f30(v1, 0, 1);
  Function_2019964(
    *(uint *)(v1 + 40),
    6,
    0,
    0,
    0x40u,
    0x40u,
    *(uint *)(v1 + 200) + 12,
    0,
    0,
    (uint)**(ushort **)(v1 + 200) << 21 >> 24,
    (uint)*(ushort *)(*(uint *)(v1 + 200) + 2) << 21 >> 24);
  Function_2019964(
    *(uint *)(v1 + 40),
    7,
    0,
    0,
    0x40u,
    0x40u,
    *(uint *)(v1 + 196) + 12,
    0,
    0,
    (uint)**(ushort **)(v1 + 196) << 21 >> 24,
    (uint)*(ushort *)(*(uint *)(v1 + 196) + 2) << 21 >> 24);
  if ( *(ushort *)(v1 + 2) & 1 )
    Function_21d1fb0((int *)v1, 0);
  if ( *(ushort *)(v1 + 2) & 2 )
    Function_21d1fb0((int *)v1, 1);
  if ( *(ushort *)(v1 + 2) & 4 )
    Function_21d1fb0((int *)v1, 2);
  if ( *(ushort *)(v1 + 2) & 8 )
    Function_21d1fb0((int *)v1, 3);
  Function_201c3c0(*(uint *)(v1 + 40), 2);
  Function_201c3c0(*(uint *)(v1 + 40), 3);
  Function_201c3c0(*(uint *)(v1 + 40), 5);
  Function_201c3c0(*(uint *)(v1 + 40), 6);
  return Function_201c3c0(*(uint *)(v1 + 40), 7);
}

//----- (021D225C) --------------------------------------------------------
int __fastcall Function_21d225c(int a1)
{
  int v1;

  v1 = a1;
  Function_2019184(*(uint *)(a1 + 40), 6u, 3u, 0);
  Function_2019184(*(uint *)(v1 + 40), 7u, 3u, 0);
  Function_2019184(*(uint *)(v1 + 40), 6u, 0, 0);
  Function_2019184(*(uint *)(v1 + 40), 7u, 0, 0);
  Function_2019cb8(*(uint *)(v1 + 40), 0, 0, 0, 0, 0x20u, 0x20u, 0x11u);
  Function_2019cb8(*(uint *)(v1 + 40), 1, 0, 0, 0, 0x20u, 0x20u, 0x11u);
  Function_2019cb8(*(uint *)(v1 + 40), 2, 0, 0, 0, 0x20u, 0x20u, 0x11u);
  Function_2019cb8(*(uint *)(v1 + 40), 3, 0, 0, 0, 0x20u, 0x20u, 0x11u);
  Function_2019cb8(*(uint *)(v1 + 40), 4, 0, 0, 0, 0x20u, 0x20u, 0x11u);
  Function_2019cb8(*(uint *)(v1 + 40), 5, 0, 0, 0, 0x20u, 0x20u, 0x11u);
  Function_2019cb8(*(uint *)(v1 + 40), 6, 0, 0, 0, 0x20u, 0x20u, 0x11u);
  Function_2019cb8(*(uint *)(v1 + 40), 7, 0, 0, 0, 0x20u, 0x20u, 0x11u);
  Function_201c3c0(*(uint *)(v1 + 40), 0);
  Function_201c3c0(*(uint *)(v1 + 40), 1);
  Function_201c3c0(*(uint *)(v1 + 40), 2);
  Function_201c3c0(*(uint *)(v1 + 40), 3);
  Function_201c3c0(*(uint *)(v1 + 40), 4);
  Function_201c3c0(*(uint *)(v1 + 40), 5);
  Function_201c3c0(*(uint *)(v1 + 40), 6);
  return Function_201c3c0(*(uint *)(v1 + 40), 7);
}

//----- (021D2398) --------------------------------------------------------
int __fastcall Function_21d2398(int a1)
{
  int v1;
  int v2;
  int *v3;
  char *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  char v10;
  BOOL v11;

  v1 = a1;
  v2 = *(uint *)(a1 + 52);
  v3 = dword_21D3138;
  v4 = &v10;
  v5 = 5;
  do
  {
    v6 = *v3;
    v7 = v3[1];
    v3 += 2;
    *(uint *)v4 = v6;
    *((uint *)v4 + 1) = v7;
    v4 += 8;
    --v5;
  }
  while ( v5 );
  *(uint *)(v2 + 256) = Function_200ca08(*(int **)(v1 + 216), *(uint *)(v1 + 220), (int)dword_21D30E8);
  Function_2021cac(*(uint *)(v2 + 256), 0);
  Function_2021ce4(*(uint *)(v2 + 256), 4096);
  Function_200d494(*(uint *)(v2 + 256), 128, 108, v8);
  *(uint *)(v2 + 260) = Function_200ca08(*(int **)(v1 + 216), *(uint *)(v1 + 220), (int)dword_21D3110);
  Function_2021cac(*(uint *)(v2 + 260), 1);
  Function_2021ce4(*(uint *)(v2 + 260), 0x2000);
  Function_2021cc8(*(uint *)(v2 + 260), 1);
  Function_200d494(
    *(uint *)(v2 + 260),
    (short)(7 * *(ushort *)(v2 + 24) + 25),
    (short)(7 * *(uint *)(v2 + 28) - 34),
    *(uint *)(v2 + 28));
  v11 = *(uint *)(*(uint *)(v1 + 44) + 12) == 0;
  *(uint *)(v2 + 264) = Function_200ca08(*(int **)(v1 + 216), *(uint *)(v1 + 220), (int)&v10);
  Function_2021cac(*(uint *)(v2 + 264), 1);
  Function_2021e50(*(uint *)(v2 + 264), *(uint *)(*(uint *)(v1 + 44) + 12) & 0xFFFF);
  return Function_200d494(
           *(uint *)(v2 + 264),
           (short)(7 * *(ushort *)(v2 + 24) + 25),
           (short)(7 * *(uint *)(v2 + 28) - 34),
           *(uint *)(v2 + 28));
}

//----- (021D24BC) --------------------------------------------------------
int __fastcall Function_21d24bc(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int result;
  int v8;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( a2 >= 8 )
  {
    v6 = *(uint *)(a1 + 40);
    if ( a2 <= 248 )
    {
      Function_201c63c(v6, 6, 0, a2);
      Function_201c63c(*(uint *)(v4 + 40), 7, 0, v3);
    }
    else
    {
      Function_201c63c(v6, 6, 0, 248);
      Function_201c63c(*(uint *)(v4 + 40), 7, 0, 248);
    }
  }
  else
  {
    Function_201c63c(*(uint *)(a1 + 40), 6, 0, 8);
    Function_201c63c(*(uint *)(v4 + 40), 7, 0, 8);
  }
  if ( v5 >= 80 )
  {
    v8 = *(uint *)(v4 + 40);
    if ( v5 <= 304 )
    {
      Function_201c63c(v8, 6, 3u, v5);
      result = Function_201c63c(*(uint *)(v4 + 40), 7, 3u, v5);
    }
    else
    {
      Function_201c63c(v8, 6, 3u, 304);
      result = Function_201c63c(*(uint *)(v4 + 40), 7, 3u, 304);
    }
  }
  else
  {
    Function_201c63c(*(uint *)(v4 + 40), 6, 3u, 80);
    result = Function_201c63c(*(uint *)(v4 + 40), 7, 3u, 80);
  }
  return result;
}

//----- (021D2570) --------------------------------------------------------
int __fastcall Function_21d2570(int *a1, int a2, int a3)
{
  int v3;
  int v4;

  v3 = *a1;
  v4 = 0;
  if ( *a1 <= 0 )
    return -1;
  while ( a2 != a1[3] || a3 != a1[4] )
  {
    ++v4;
    a1 += 4;
    if ( v4 >= v3 )
      return -1;
  }
  return v4;
}

//----- (021D259C) --------------------------------------------------------
uint *__fastcall Function_21d259c(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint v7;
  short v8;
  int v9;
  uint *result;
  int v11;
  int v12;
  int v13;

  v1 = a1;
  v13 = *(uint *)(a1 + 52);
  MI_CpuFill8((ushort *)(v13 + 164), 0, 0x5Cu);
  v12 = 0;
  v11 = 0;
  v2 = (int *)(v13 + 164);
  do
  {
    v3 = *(uint *)(v1 + 44) + 32 + v11;
    if ( !*(ushort *)(v3 + 10) )
      break;
    if ( *(uint *)v3 != *(uint *)(v1 + 32) || *(uint *)(v3 + 4) != *(uint *)(v1 + 36) )
    {
      v4 = Function_21d2570(v2, *(uint *)v3, *(uint *)(v3 + 4));
      if ( v4 >= 0 )
      {
        v5 = 16 * v4;
      }
      else
      {
        v5 = 16 * *(uint *)(v13 + 164);
        ++*v2;
      }
      v6 = v13 + 176 + v5;
      *(uint *)v6 = *(uint *)v3;
      *(uint *)(v6 + 4) = *(uint *)(v3 + 4);
      v7 = *(ushort *)(v3 + 8);
      if ( v7 <= 3 )
        v8 = *((ushort *)&dword_21D2FE0[1] + v7);
      else
        v8 = 0;
      *(ushort *)(v6 + 8) = v8;
      *(uchar *)(v6 + 10) = v12;
      *(uchar *)(v6 + 11) = 1;
      v9 = Function_200ca08(*(int **)(v1 + 216), *(uint *)(v1 + 220), (int)&dword_21D2FE0[6]);
      *(uint *)(v6 + 12) = v9;
      Function_200d494(
        v9,
        (short)(7 * *(ushort *)v6 + 25),
        (short)(7 * *(uint *)(v6 + 4) - 34),
        *(uint *)(v6 + 4));
      Function_2021f58(*(uint *)(v6 + 12), 2);
      Function_2021cac(*(uint *)(v6 + 12), 0);
    }
    v11 += 12;
    ++v12;
  }
  while ( v12 < 5 );
  result = *(uint **)(v13 + 164);
  if ( result )
  {
    *(uchar *)(v13 + 174) = (uchar)result - 1;
    result = AddTaskToTaskList1((int)Function_21d26ac, v13 + 164, 1u);
    *(uint *)(v13 + 168) = result;
  }
  return result;
}

//----- (021D26AC) --------------------------------------------------------
uint __fastcall Function_21d26ac(int a1, int a2)
{
  int v2;
  uint v3;
  uint result;
  int v5;
  char v6;

  v2 = a2;
  v3 = *(ushort *)(a2 + 8);
  *(ushort *)(a2 + 8) = v3 + 1;
  result = s32_div_f(v3, 26);
  if ( v5 <= 0 )
  {
    Function_2021cac(*(uint *)(v2 + 16 * *(uchar *)(v2 + 11) + 24), 0);
    Function_2021cac(*(uint *)(v2 + 16 * *(uchar *)(v2 + 10) + 24), 1);
    *(uchar *)(v2 + 11) = *(uchar *)(v2 + 10);
    s32_div_f(*(uchar *)(v2 + 10) + *(uint *)v2 - 1, *(uint *)v2);
    *(uchar *)(v2 + 10) = v6;
    result = 260;
    if ( *(ushort *)(v2 + 8) > 0x104u )
    {
      result = 1;
      *(ushort *)(v2 + 8) = 1;
    }
  }
  return result;
}

//----- (021D2700) --------------------------------------------------------
int __fastcall Function_21d2700(int a1)
{
  int v1;
  int *v2;
  int result;
  int v4;
  int v5;

  v1 = *(uint *)(a1 + 52);
  v2 = *(int **)(*(uint *)(a1 + 52) + 168);
  if ( v2 )
    Call_RemoveTaskFromTaskList(v2);
  result = *(uint *)(v1 + 164);
  v4 = 0;
  if ( result > 0 )
  {
    v5 = v1;
    do
    {
      Function_200c7e4(*(uint *)(v5 + 188));
      result = *(uint *)(v1 + 164);
      ++v4;
      v5 += 16;
    }
    while ( v4 < result );
  }
  return result;
}

//----- (021D273C) --------------------------------------------------------
uint *__fastcall Function_21d273c(int a1, int a2)
{
  uint *v2;
  uint *result;

  v2 = *(uint **)(a1 + 52);
  v2[1] = 0;
  v2[2] = 0;
  if ( a2 )
    result = AddTaskToTaskList1((int)Function_21d28ec, a1, 0);
  else
    result = AddTaskToTaskList1((int)Function_21d2774, a1, 0);
  v2[67] = result;
  return result;
}

//----- (021D2774) --------------------------------------------------------
uint __fastcall Function_21d2774(int *a1, int *a2)
{
  int *v2;
  int v3;
  int *v4;
  uint result;
  uint v6;
  int v7;

  v2 = a2;
  v3 = a2[13];
  v4 = a1;
  result = *(uint *)(v3 + 4);
  if ( result <= 4 )
    JUMPOUT(__CS__, *((short *)&off_21D2792 + result) + 35465108);
  switch ( (uchar)result )
  {
    case 0:
      Function_2021cac(*(uint *)(v3 + 256), 1);
      Function_2021cc8(*(uint *)(v3 + 256), 1);
      Function_2021e50(*(uint *)(v3 + 256), 1u);
      Function_2005748(0x5E4u);
      result = *(uint *)(v3 + 4) + 1;
      *(uint *)(v3 + 4) = result;
      break;
    case 1:
      v6 = *(uint *)(v3 + 8);
      if ( (v6 >> 31) + __ROR4__((v6 << 31) - (v6 >> 31), 31) )
      {
        Function_21d1f30((int)v2, *((uchar *)dword_21D2FE0 + (int)v6 / 2), 0);
        Function_201c3c0(v2[10], 5);
      }
      v7 = *(uint *)(v3 + 8);
      result = v7 + 1;
      *(uint *)(v3 + 8) = v7 + 1;
      if ( v7 > 7 )
      {
        result = *(uint *)(v3 + 4) + 1;
        *(uint *)(v3 + 4) = result;
      }
      break;
    case 2:
      Function_2021cac(*(uint *)(v3 + 256), 0);
      Function_2021cc8(*(uint *)(v3 + 256), 0);
      v2[5] = 0;
      Function_200f174(4u, 13, 2, 0, 8, 1, v2[1]);
      result = *(uint *)(v3 + 4) + 1;
      *(uint *)(v3 + 4) = result;
      break;
    case 3:
      result = Function_200f2ac();
      if ( result )
      {
        *(uchar *)(v3 + 16) = 1;
        Function_2019cb8(v2[10], 4, 0, 0, 0, 0x20u, 0x20u, 0x11u);
        Function_2019cb8(v2[10], 5, 0, 0, 0, 0x20u, 0x20u, 0x11u);
        Function_21d1d6c((int)v2, v3 + 104);
        Function_21d1a30((int)v2);
        Function_21d19e4((int)v2);
        v2[5] = 0;
        Function_200f174(4u, 13, 5, 0, 8, 1, v2[1]);
        result = *(uint *)(v3 + 4) + 1;
        *(uint *)(v3 + 4) = result;
      }
      break;
    case 4:
      result = Function_200f2ac();
      if ( result )
      {
        *(uint *)(v3 + 8) = 0;
        *(uint *)(v3 + 4) = 0;
        *(uchar *)(v3 + 20) -= 2;
        Call_RemoveTaskFromTaskList(v4);
        result = 268;
        *(uint *)(v3 + 268) = 0;
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (021D28EC) --------------------------------------------------------
int __fastcall Function_21d28ec(int *a1, int *a2)
{
  int *v2;
  int v3;
  int *v4;
  int result;

  v2 = a2;
  v3 = a2[13];
  v4 = a1;
  result = *(uint *)(v3 + 4);
  if ( result )
  {
    if ( result == 1 )
    {
      result = Function_200f2ac();
      if ( result )
      {
        Function_2019cb8(v2[10], 4, 0, 0, 0, 0x20u, 0x20u, 0x11u);
        Function_21d1f30((int)v2, 0, 1);
        Function_201c3c0(v2[10], 4);
        Function_201c3c0(v2[10], 5);
        v2[5] = 0;
        Function_200f174(4u, 13, 5, 0, 8, 1, v2[1]);
        result = *(uint *)(v3 + 4) + 1;
        *(uint *)(v3 + 4) = result;
      }
    }
    else if ( result == 2 )
    {
      result = Function_200f2ac();
      if ( result )
      {
        *(uchar *)(v3 + 16) = 0;
        *(uint *)(v3 + 4) = 0;
        *(uint *)(v3 + 8) = 0;
        *(uchar *)(v3 + 20) -= 2;
        Call_RemoveTaskFromTaskList(v4);
        result = 268;
        *(uint *)(v3 + 268) = 0;
      }
    }
  }
  else
  {
    a2[5] = 0;
    Function_200f174(4u, 13, 2, 0, 8, 1, a2[1]);
    Function_2005748(0x691u);
    result = *(uint *)(v3 + 4) + 1;
    *(uint *)(v3 + 4) = result;
  }
  return result;
}

//----- (021D29BC) --------------------------------------------------------
int __fastcall Function_21d29bc(int a1)
{
  int v1;
  uint *v2;
  int result;
  int v4;

  v1 = a1;
  v2 = *(uint **)(a1 + 52);
  if ( !*(uint *)(*(uint *)(a1 + 52) + 160) )
    return 0;
  v4 = Function_21d2c5c(v2[39], v2[8], v2[6], v2[7]);
  if ( !v4 || !*(uint *)(v4 + 20) )
    return 0;
  result = 1;
  *(uint *)(*(uint *)(v1 + 44) + 16) = 1;
  *(uint *)(*(uint *)(v1 + 44) + 20) = v2[6];
  *(uint *)(*(uint *)(v1 + 44) + 24) = v2[7];
  *(uint *)(*(uint *)(v1 + 44) + 28) = v2[8];
  return result;
}

//----- (021D2A08) --------------------------------------------------------
int __fastcall Function_21d2a08(int a1)
{
  int v1;
  const char *v3;
  const char *v4;
  const char *v5;
  const char *v6;
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

  v1 = a1;
  Function_201ff0c(0x10u, 1);
  Function_201ff74(0x10u, 1);
  Function_201dbec(32, *(uint *)(v1 + 4));
  *(uint *)(v1 + 216) = Function_200c6e4(*(uint *)(v1 + 4));
  *(uint *)(v1 + 220) = Function_200c704(*(uint **)(v1 + 216));
  v15 = 0;
  v16 = 128;
  v17 = 0;
  v18 = 32;
  v19 = 0;
  v20 = 128;
  v21 = 0;
  v22 = 32;
  v10 = 5;
  v11 = 1024;
  v12 = 1024;
  v13 = 16;
  v14 = 16;
  Function_200c73c(*(uint **)(v1 + 216), &v15, &v10, 32);
  Function_200c7c0(*(int **)(v1 + 216), *(int ***)(v1 + 220), 28);
  v3 = "data/tmapn_chr.resdat";
  v4 = "data/tmapn_pal.resdat";
  v5 = "data/tmapn_cell.resdat";
  v6 = "data/tmapn_canm.resdat";
  v7 = 0;
  v8 = 0;
  v9 = 35468276;
  return Function_200c8f0(*(uint **)(v1 + 216), *(uint *)(v1 + 220), (int)&v3);
}

//----- (021D2AC0) --------------------------------------------------------
int *__fastcall Function_21d2ac0(int a1)
{
  int v1;

  v1 = a1;
  Function_200c8b0(*(uint *)(a1 + 216), *(int ***)(a1 + 220));
  Function_200c8d4(*(uint *)(v1 + 216));
  return Function_201dc3c();
}

//----- (021D2AE0) --------------------------------------------------------
int __fastcall Function_21d2ae0(int a1)
{
  return Function_200c7ec(*(int **)(a1 + 220));
}

//----- (021D2AEC) --------------------------------------------------------
int Function_21d2aec()
{
  return Function_200c800();
}

//----- (021D2AF4) --------------------------------------------------------
uchar *__fastcall Function_21d2af4(int *a1, int a2, int a3, short a4, uint a5)
{
  short v5;
  uchar *v6;
  int *v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int *v20;
  int v21;
  int v22;
  int v23;

  v20 = a1;
  v21 = a2;
  v22 = a3;
  v5 = a4;
  v6 = (uchar *)malloc(a5, 12);
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  v6[4] = 0;
  v6[5] = 0;
  v6[6] = 0;
  v6[7] = 0;
  v6[8] = 0;
  v6[9] = 0;
  v6[10] = 0;
  v6[11] = 0;
  *(ushort *)v6 = v5;
  v7 = (int *)malloc(a5, 28 * *(ushort *)v6);
  *((uint *)v6 + 2) = v7;
  Call_FillMemWithValue(v7, 0, 28 * *(ushort *)v6);
  v8 = 0;
  v9 = &dword_21D31D8;
  if ( (int)*(ushort *)v6 > 0 )
  {
    v23 = 0;
    do
    {
      v10 = *((uint *)v6 + 2) + v23;
      *(uint *)v10 = *v9;
      *(uchar *)(v10 + 8) = *((uchar *)v9 + 8);
      *(uchar *)(v10 + 9) = *((uchar *)v9 + 9);
      *(ushort *)(v10 + 10) = *((ushort *)v9 + 5);
      *(uint *)(v10 + 12) = v9[3];
      *(uint *)(v10 + 16) = v9[4];
      *(uint *)(v10 + 20) = *(uchar *)(v22 + v8);
      v11 = Function_200ca08(v20, v21, (int)dword_21D31B0);
      *(uint *)(v10 + 24) = v11;
      Function_2021cac(v11, 1);
      v12 = *(uint *)(v10 + 20);
      if ( v12 )
      {
        Function_2021e90(*(uint *)(v10 + 24), *(uchar *)(v10 + 9) + 5 + v12);
      }
      else if ( ((*(ushort *)(v10 + 10) + 0xFFFF) & 0xFFFFu) <= 1 )
      {
        Function_2021cac(*(uint *)(v10 + 24), 0);
      }
      v13 = *(uchar *)(v10 + 8);
      if ( *(uchar *)(v10 + 8) )
      {
        v14 = fflt(v13 << 12);
        v15 = fadd(0x3F000000u, v14);
      }
      else
      {
        v16 = fflt(v13 << 12);
        v15 = fsub(v16, 1056964608);
      }
      v17 = ffix(v15);
      Function_2021e2c(*(uint *)(v10 + 24), v17);
      Function_200d494(
        *(uint *)(v10 + 24),
        (short)(*(ushort *)(v10 + 12) + 25),
        (short)(*(ushort *)(v10 + 16) - 34),
        v18);
      v9 += 5;
      v23 += 28;
      v8 = (short)(v8 + 1);
    }
    while ( v8 < *(ushort *)v6 );
  }
  return v6;
}

//----- (021D2C1C) --------------------------------------------------------
uint __fastcall Function_21d2c1c(ushort *a1)
{
  ushort *v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  LOWORD(v2) = 0;
  if ( (int)*a1 > 0 )
  {
    v3 = 0;
    do
    {
      v4 = *((uint *)v1 + 2) + v3;
      Function_2021c98(*(uint *)(v4 + 24), 0, 0);
      Function_2021bd4(*(uint *)(v4 + 24));
      v2 = (short)(v2 + 1);
      v3 += 28;
    }
    while ( v2 < *v1 );
  }
  free(*((uint *)v1 + 2));
  return free((int)v1);
}

//----- (021D2C5C) --------------------------------------------------------
int __fastcall Function_21d2c5c(ushort *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int result;

  v4 = *a1;
  LOWORD(v5) = 0;
  if ( v4 <= 0 )
    return 0;
  result = *((uint *)a1 + 2);
  while ( *(uint *)result != a2 )
  {
LABEL_13:
    v5 = (short)(v5 + 1);
    result += 28;
    if ( v5 >= v4 )
      return 0;
  }
  switch ( (uchar)*(ushort *)(result + 10) )
  {
    case 0u:
      return result;
    case 1u:
      if ( a3 != 9 || a4 != 28 )
        goto LABEL_13;
      break;
    case 2u:
      if ( a3 != 26 || a4 != 18 )
        goto LABEL_13;
      break;
    case 3u:
      if ( a3 != 26 || a4 != 17 )
        goto LABEL_13;
      break;
    default:
      goto LABEL_13;
  }
  return result;
}

//----- (021D2CC0) --------------------------------------------------------
int __fastcall Function_21d2cc0(ushort *a1, int a2, int a3, int a4)
{
  ushort *v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;

  v4 = a1;
  if ( !a1 )
    return 0;
  v6 = Function_21d2c5c(a1, a2, a3, a4);
  v7 = v6;
  if ( v6 && *(uint *)(v6 + 20) )
  {
    v9 = *((uint *)v4 + 1);
    if ( v9 )
    {
      if ( ((*(ushort *)(v6 + 10) + 65534) & 0xFFFFu) <= 1 )
        Function_2021e90(*(uint *)(v9 + 24), *(uchar *)(v9 + 9) + 5 + *(uint *)(v9 + 20));
    }
    else
    {
      *((uchar *)v4 + 2) = 0;
      *((uchar *)v4 + 3) = 0;
    }
    *((uint *)v4 + 1) = v7;
    result = 1;
  }
  else
  {
    v8 = *((uint *)v4 + 1);
    if ( v8 )
      Function_2021e90(*(uint *)(v8 + 24), *(uchar *)(v8 + 9) + 5 + *(uint *)(v8 + 20));
    result = 0;
    *((uint *)v4 + 1) = 0;
  }
  return result;
}

//----- (021D2D28) --------------------------------------------------------
int __fastcall Function_21d2d28(int result, int a2)
{
  int v2;
  int v3;
  bool v4;
  int v5;
  int v6;

  v2 = result;
  v3 = *(uint *)(result + 4);
  if ( v3 && a2 == 1 )
  {
    v4 = *(uchar *)(result + 3) == 0;
    v5 = *(uint *)(v3 + 24);
    if ( v4 )
      Function_2021e90(v5, *(uchar *)(v3 + 9) + 8);
    else
      Function_2021e90(v5, *(uchar *)(v3 + 9) + 5 + *(uint *)(v3 + 20));
    result = (uchar)++*(uchar *)(v2 + 2);
    if ( result == 16 )
    {
      *(uchar *)(v2 + 2) = 0;
      v6 = *(uchar *)(v2 + 3);
      result = v6 ^ 1;
      *(uchar *)(v2 + 3) = v6 ^ 1;
    }
  }
  return result;
}

//----- (021D2D70) --------------------------------------------------------
uchar *__fastcall Function_21d2d70(uchar *a1, uint a2)
{
  uchar *v2;
  uint v3;
  int v4;
  int v5;
  uchar *result;
  uchar *v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  char v14;

  v2 = a1;
  v3 = a2;
  FS_InitFile(&v14);
  if ( FS_OpenFile((int *)&v14, v2, v4, v5) )
  {
    if ( FS_ReadFile((int *)&v14, (int)&v13, 4) < 0 )
      ErrorHandler();
    v7 = (uchar *)malloc(v3, 8);
    *v7 = 0;
    v7[1] = 0;
    v7[2] = 0;
    v7[3] = 0;
    v7[4] = 0;
    v7[5] = 0;
    v7[6] = 0;
    v7[7] = 0;
    v8 = (int *)malloc(v3, 24 * v13);
    *((uint *)v7 + 1) = v8;
    Call_FillMemWithValue(v8, 0, 24 * v13);
    v9 = v13;
    v10 = 0;
    *(uint *)v7 = v13;
    if ( v9 > 0 )
    {
      v11 = 0;
      do
      {
        v12 = *((uint *)v7 + 1) + v11;
        FS_ReadFile((int *)&v14, v12, 24);
        *(ushort *)(v12 + 22) = v10++;
        v11 += 24;
      }
      while ( v10 < *(uint *)v7 );
    }
    FS_CloseFile((int *)&v14);
    result = v7;
  }
  else
  {
    ErrorHandler();
    result = 0;
  }
  return result;
}

//----- (021D2E10) --------------------------------------------------------
uint __fastcall Function_21d2e10(int a1)
{
  int v1;

  v1 = a1;
  free(*(uint *)(a1 + 4));
  return free(v1);
}

//----- (021D2E24) --------------------------------------------------------
ushort *__fastcall Function_21d2e24(int *a1, int a2, int a3, ushort a4)
{
  int v4;
  int v5;
  ushort *result;

  v4 = *a1;
  v5 = 0;
  if ( *a1 <= 0 )
    return 0;
  result = (ushort *)a1[1];
  while ( *result != a2 || result[1] != a3 )
  {
    ++v5;
    result += 12;
    if ( v5 >= v4 )
      return 0;
  }
  if ( result[10] )
  {
    if ( !(result[10] & a4) )
      result = 0;
  }
  return result;
}

