//----- (021D0D80) --------------------------------------------------------
uint Function_21d0d80()
{
  uint result;

  Function_201ff00();
  Function_201ff68();
  REG_DISPCNT &= 0xFFFFE0FF;
  result = REG_DISPCNT_SUB & 0xFFFFE0FF;
  REG_DISPCNT_SUB &= 0xFFFFE0FF;
  return result;
}

//----- (021D0DA8) --------------------------------------------------------
int *Function_21d0da8()
{
  G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 0, 14, 11, 7);
  return G2x_SetBlendAlpha_((int *)&REG_BLDCNT_SUB, 0, 14, 7, 8);
}

//----- (021D0DD4) --------------------------------------------------------
int Function_21d0dd4()
{
  return Function_2024220(0x47u, 0, 2, 0, 2, (void (*)(void))Function_21d0df4);
}

//----- (021D0DF4) --------------------------------------------------------
int *Function_21d0df4()
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

//----- (021D0E78) --------------------------------------------------------
int Function_21d0e78()
{
  int v0;
  int v1;

  v0 = Function_20a5a2c();
  v1 = Function_20a5a3c();
  if ( !v0 )
    ErrorHandler();
  if ( !v1 )
    ErrorHandler();
  return Function_2014000();
}

//----- (021D0EB8) --------------------------------------------------------
int __fastcall Function_21d0eb8(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int *v5;
  char *v6;
  int v7;
  int v8;
  int v9;
  int *v10;
  char *v11;
  int v12;
  int v13;
  int v14;
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
  char v27;
  char v28;
  char v29;
  char v30;
  int v31;

  v31 = a4;
  v4 = a1;
  Function_201ff00();
  v5 = dword_21D2450;
  v6 = &v27;
  v7 = 5;
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
  GX_SetBanks((int *)&v27);
  MIi_CpuClear32(0, (uint *)0x6000000, 0x80000);
  MIi_CpuClear32(0, (uint *)0x6200000, 0x20000);
  MIi_CpuClear32(0, (uint *)0x6400000, 0x40000);
  MIi_CpuClear32(0, (uint *)0x6600000, 0x20000);
  v23 = 1;
  v24 = 0;
  v25 = 0;
  v26 = 1;
  SetGraphicsModes(&v23);
  v10 = dword_21D2518;
  v11 = &v28;
  v12 = 10;
  do
  {
    v13 = *v10;
    v14 = v10[1];
    v10 += 2;
    *(uint *)v11 = v13;
    *((uint *)v11 + 1) = v14;
    v11 += 8;
    --v12;
  }
  while ( v12 );
  *(uint *)v11 = *v10;
  Function_20183c4(v4, 1u, (int *)&v28, 0);
  Function_20183c4(v4, 2u, (int *)&v29, 0);
  Function_20183c4(v4, 3u, (int *)&v30, 0);
  Function_2019ebc(v4, 1u);
  Function_2019ebc(v4, 2u);
  Function_2019ebc(v4, 3u);
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 1;
  Function_201ff0c(1u, 1);
  Function_201ffd0();
  Function_201ff0c(0x10u, 1);
  v16 = 0;
  v17 = 0;
  v18 = 2048;
  v19 = 0;
  v20 = 851969;
  v21 = 0;
  v22 = 0;
  Function_20183c4(v4, 4u, &v16, 0);
  return Function_2019ebc(v4, 4u);
}

//----- (021D0FD0) --------------------------------------------------------
int __fastcall Function_21d0fd0(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_2008a94(*(uint *)(a1 + 60));
  Function_201dcac();
  Function_200c800();
  Function_2003694(*(uint *)(v1 + 8));
  Function_201c2b8(*(uint *)(v1 + 4));
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (021D1004) --------------------------------------------------------
int Function_21d1004()
{
  int v0;
  int v1;
  int v2;
  int v3;

  Call_G3X_Reset();
  if ( Function_201469c() > 0 )
  {
    v0 = Call_G3X_Reset();
    Function_20a73c0(v0, v1, v2, v3);
  }
  Function_20146c0();
  return Function_20241bc(1, 0);
}

//----- (021D1028) --------------------------------------------------------
int *Function_21d1028()
{
  return Function_200f174(0, 1, 1, 0, 6, 1, 71);
}

//----- (021D1048) --------------------------------------------------------
int *Function_21d1048()
{
  return Function_200f174(0, 0, 0, 0, 6, 1, 71);
}

//----- (021D1068) --------------------------------------------------------
uint __fastcall Function_21d1068(uint *a1, int a2, int a3)
{
  int v3;
  int v4;
  uint *v5;
  int v6;
  int v7;

  v3 = a3;
  v4 = a2;
  v5 = a1;
  Function_200dd0c(a1, 1u, 20, 15, a3, 71);
  v6 = Function_200dd08(v3);
  Function_2003050(v4, 38, v6, 71, 0, 32, 0xC0u);
  Function_200daa4(v5, 1u, 50, 13, 0, 71);
  v7 = Function_200daa0();
  Function_2003050(v4, 38, v7, 71, 0, 32, 0xD0u);
  return Function_2003050(v4, 14, 7, 71, 0, 32, 0xE0u);
}

//----- (021D10F0) --------------------------------------------------------
int __fastcall Function_21d10f0(uint *a1, int a2, uchar a3, char a4, char a5, uchar a6, uchar a7, short a8, char a9)
{
  int v9;
  uint *v10;
  uchar v11;
  char v12;
  int v13;

  v9 = a2;
  v10 = a1;
  v11 = a3;
  v12 = a4;
  Function_201a7a0(a2);
  Function_201a7e8(v10, v9, v11, v12, a5, a6, a7, a9, a8);
  Function_200e060(v9, 1, 20, 0xCu);
  Function_201ada4_ClearTextBox(v9, 15);
  return Function_201a954(v9, v13);
}

//----- (021D1158) --------------------------------------------------------
int __fastcall Function_21d1158(int a1, uint a2)
{
  uint v2;
  int v3;
  ushort **v4;
  uint *v5;
  ushort *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v2 = a2;
  v3 = a1;
  Function_201ada4_ClearTextBox(a1, 15);
  v4 = (ushort **)LoadFromMsgNARC(0, 26, 357, 0x47u);
  v5 = Function_200b358(0x47u);
  v6 = Function_200b1ec_CallMsgDecrypt(v4, v2);
  v7 = Function_2023790(255, 0x47u);
  Function_2076b10_Dummy();
  Function_200b538((int)v5, 0, v8);
  Function_200c388(v5, v7, (int)v6);
  v9 = Function_201d738_CallInitTextInterpreter(v3, 1);
  Function_200b190((ushort *)v4);
  Function_20237bc_FreeMsg(v7, v10);
  Function_20237bc_FreeMsg((int)v6, v11);
  Function_200b3f0(v5, v12);
  return v9;
}

//----- (021D11E4) --------------------------------------------------------
int __fastcall Function_21d11e4(int a1, uint *a2, int a3, uchar a4, char a5, char a6, uchar a7, uchar a8, short a9, char a10)
{
  int v10;
  uint *v11;
  uchar v12;
  ushort **v13;
  int v14;
  ushort *v15;
  int v16;
  int v17;
  int result;
  int v19;
  int v20;
  int v21;
  char v22;
  char v23;
  char v24;
  char v25;

  v10 = a1;
  v11 = a2;
  v19 = a3;
  v12 = a4;
  Function_201a7a0(a3);
  Function_201a7e8(v11, v19, v12, a5, a6, a7, a8, a10, a9);
  *(uint *)(v10 + 72) = Function_2013a04(2u, 0x47u);
  v13 = (ushort **)LoadFromMsgNARC(0, 26, 357, 0x47u);
  v14 = 0;
  do
  {
    v15 = Function_200b1ec_CallMsgDecrypt(v13, v14 + 2);
    Function_2013a6c(*(uint **)(v10 + 72), (int)v15, v14, v16);
    Function_20237bc_FreeMsg((int)v15, v17);
    ++v14;
  }
  while ( v14 < 2 );
  Function_200b190((ushort *)v13);
  v20 = *(uint *)(v10 + 72);
  v22 = 0;
  v21 = v19;
  v23 = 1;
  v24 = 2;
  v25 = 64;
  Function_200dc48(v19, 1, 50, 0xDu);
  result = Function_2001b7c(&v20, 8, 0, 0, 0x47u, 2);
  *(uint *)(v10 + 76) = result;
  return result;
}

//----- (021D12CC) --------------------------------------------------------
uint __fastcall Function_21d12cc(int a1)
{
  int v1;

  v1 = a1;
  Function_200dc9c(a1 + 40, 1);
  Function_201acf4(v1 + 40);
  Function_201a8fc(v1 + 40);
  Function_2001bc4(*(uint *)(v1 + 76), 0);
  return Function_2013a3c(*(int **)(v1 + 72));
}

//----- (021D12F8) --------------------------------------------------------
uint __fastcall Function_21d12f8(int a1)
{
  int v1;

  v1 = a1;
  Function_201acf4(a1);
  return Function_201a8fc(v1);
}

//----- (021D1308) --------------------------------------------------------
uint __fastcall Function_21d1308(uint *a1, int a2)
{
  int v2;
  uint *v3;

  v2 = a2;
  v3 = a1;
  LoadFromNARC_RGCN(118, 0, a1, 3u, 0, 0, 1, 71);
  LoadFromNARC_RCSN(118, 1, v3, 3u, 0, 0, 1, 71);
  return Function_2003050(v2, 118, 8, 71, 0, 64, 0);
}

//----- (021D135C) --------------------------------------------------------
uint __fastcall Function_21d135c(uint *a1, int a2)
{
  uint *v2;
  int v3;

  v2 = a1;
  v3 = a2;
  LoadFromNARC_RGCN(12, 10, a1, 4u, 0, 0, 1, 71);
  LoadFromNARC_RCSN(12, 11, v2, 4u, 0, 0, 1, 71);
  return Function_2003050(v3, 12, 12, 71, 1, 32, 0);
}

//----- (021D13B4) --------------------------------------------------------
int Function_21d13b4()
{
  int v0;

  v0 = Function_20a5a2c();
  Function_20145b4(v0);
  return 8 * v0 & 0x7FFFF;
}

//----- (021D13D0) --------------------------------------------------------
int Function_21d13d0()
{
  int v0;

  v0 = Function_20a5a3c();
  Function_20145f4(v0);
  return 8 * v0 & 0x7FFFF;
}

//----- (021D13EC) --------------------------------------------------------
int __fastcall Function_21d13ec(uint a1)
{
  uint v1;
  int *v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = (int *)malloc(a1, 18432);
  v3 = Function_2014014((int)Function_21d13b4, (int)Function_21d13d0, v2, 0x4800u, 1, v1);
  v4 = Function_2014784(v3);
  if ( v4 )
    Function_20206bc(4096, 3686400, v4);
  return v3;
}

//----- (021D1434) --------------------------------------------------------
uint *__fastcall Function_21d1434(uint a1, int a2, int a3)
{
  uint v3;
  int v4;
  int v5;
  uint *v6;
  int v7;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = (uint *)Function_21d13ec(a1);
  v7 = Call2_LoadFromNARC_2(v4, v5, v3);
  Function_20144cc(v6, v7, 10, 1);
  return v6;
}

//----- (021D145C) --------------------------------------------------------
uint __fastcall Function_21d145c(int a1)
{
  uint **v1;
  int v2;

  v1 = (uint **)a1;
  v2 = Function_2014730(a1);
  Function_201411c(v1);
  return free(v2);
}

//----- (021D1474) --------------------------------------------------------
int __fastcall Function_21d1474(int result)
{
  *(uint *)(result + 40) = *(uint *)(**(uint **)(result + 32) + 4);
  *(uint *)(result + 44) = *(uint *)(**(uint **)(result + 32) + 8);
  *(uint *)(result + 48) = *(uint *)(**(uint **)(result + 32) + 12);
  return result;
}

//----- (021D14AC) --------------------------------------------------------
uint *__fastcall Function_21d14ac(uint *a1)
{
  uint *v1;
  uint *v2;
  int v3;
  uint *v4;

  v1 = a1;
  v2 = (uint *)malloc(*a1, 16);
  if ( !v2 )
    ErrorHandler();
  v3 = v1[1];
  *v2 = *v1;
  v2[1] = v3;
  v4 = Function_21d1434(*v2, 119, v3);
  v2[3] = (uint)v4;
  Function_2014788((int)v4, 1);
  return v2;
}

//----- (021D14DC) --------------------------------------------------------
char *__fastcall Function_21d14dc(int a1, int a2)
{
  int v2;

  v2 = a1;
  Function_20146f4(*(int **)(a1 + 12), a2, (void (__fastcall *)(int))Function_21d1474, a1);
  return Function_2014788(*(uint *)(v2 + 12), 1);
}

//----- (021D14F8) --------------------------------------------------------
BOOL __fastcall Function_21d14f8(int a1)
{
  return Function_2014710(*(uint *)(a1 + 12)) != 0;
}

//----- (021D150C) --------------------------------------------------------
uint __fastcall Function_21d150c(int a1)
{
  return free(a1);
}

//----- (021D1514) --------------------------------------------------------
int __fastcall Function_21d1514(int a1)
{
  int v1;
  int *v2;
  int v3;

  v1 = *(uint *)(a1 + 80);
  v2 = *(int **)(a1 + 84);
  v3 = *(uint *)(a1 + 8);
  Function_200cbdc(*(int **)(a1 + 84), *(uint *)(a1 + 80), 118, 4, 1, 1, 20000);
  Function_200cd7c(v3, 2u, v2, v1, 118, 9, 0, 1, 1, 20001);
  Function_200ce0c(v2, v1, 118, 3, 1, 20002);
  Function_200ce3c(v2, v1, 118, 2, 1, 20003);
  Function_200cbdc(v2, v1, 118, 7, 1, 1, 25000);
  Function_200cd7c(v3, 2u, v2, v1, 118, 10, 0, 1, 1, 25001);
  Function_200ce0c(v2, v1, 118, 6, 1, 25002);
  return Function_200ce3c(v2, v1, 118, 5, 1, 25003);
}

//----- (021D161C) --------------------------------------------------------
uint __fastcall Function_21d161c(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int *v6;
  int *v7;
  short v9;
  short v10;
  short v11;
  short v12;
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

  v24 = a4;
  v4 = a1;
  v9 = 128;
  v10 = 120;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v23 = 0;
  v15 = 1;
  v17 = 20001;
  v18 = 20002;
  v19 = 20003;
  v22 = 2;
  v16 = 20000;
  v20 = -1;
  v21 = -1;
  v5 = Function_200ce6c(*(uint **)(a1 + 84), *(uint *)(a1 + 80), &v9);
  *(uint *)(v4 + 116) = v5;
  Function_200d330(v5);
  Function_200d6a4(*(uint **)(v4 + 116), 2);
  v9 = 0;
  v10 = -16;
  v22 = 0;
  v17 = 25001;
  v18 = 25002;
  v16 = 25000;
  v19 = 25003;
  v6 = Function_200ce6c(*(uint **)(v4 + 84), *(uint *)(v4 + 80), &v9);
  *(uint *)(v4 + 120) = v6;
  Function_200d330(v6);
  v10 = 144;
  v7 = Function_200ce6c(*(uint **)(v4 + 84), *(uint *)(v4 + 80), &v9);
  *(uint *)(v4 + 124) = v7;
  return Function_200d330(v7);
}

//----- (021D16C0) --------------------------------------------------------
int __fastcall Function_21d16c0(int a1, int a2)
{
  int v2;
  uint *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint v9;
  char v10;
  int result;
  int v12;

  v12 = a1;
  v2 = a2;
  v3 = (uint *)(a1 + 128);
  if ( !*(uint *)(a1 + 128) )
  {
    v4 = *(uint *)(a1 + 132);
    if ( v4 < 10 )
    {
      v5 = *((short *)&dword_21D2478[5 * a2] + v4);
      v6 = *((short *)&dword_21D24C8[5 * v2] + v4);
      v7 = 0;
      v8 = dword_21D256C[10 * v2 + v4];
      v9 = dword_21D260C[10 * v2 + v4];
      if ( v5 == 255 )
      {
        v5 = 0;
        v7 = 1;
      }
      if ( v6 == 255 )
      {
        v6 = 0;
        ++v7;
      }
      Function_200d5dc(*(uint ***)(v12 + 116), v5, v6);
      Function_20e1290(0, v8);
      if ( v10 )
        ++v7;
      else
        Function_200d6e8(*(int **)(v12 + 116), v8, v9);
      if ( v7 != 3 )
      {
        ++v3[1];
        return 1;
      }
      ++*v3;
    }
    else
    {
      *v3 = 1;
      v3[1] = 0;
    }
  }
  result = 0;
  *v3 = 0;
  v3[1] = 0;
  return result;
}

//----- (021D176C) --------------------------------------------------------
int __fastcall Function_21d176c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( !Function_21d16c0(a1, a2) )
    return 2;
  if ( v3 == 4 )
  {
    if ( *(uint *)(v2 + 132) == 6 )
      return 1;
  }
  else if ( *(uint *)(v2 + 132) == 6 )
  {
    return 1;
  }
  return 0;
}

//----- (021D17A0) --------------------------------------------------------
uint __fastcall Function_21d17a0(int a1)
{
  int v1;

  v1 = a1;
  Function_200d0f4(*(uint *)(a1 + 116));
  Function_200d0f4(*(uint *)(v1 + 120));
  return Function_200d0f4(*(uint *)(v1 + 124));
}

//----- (021D17B8) --------------------------------------------------------
uint __fastcall Function_21d17b8(int a1, int a2, int a3, int a4)
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
  *(uint *)(a1 + 80) = Function_200c6e4(0x47u);
  v17 = 0;
  v18 = 128;
  v19 = 0;
  v20 = 32;
  v21 = 0;
  v22 = 128;
  v23 = 0;
  v24 = 32;
  v12 = 96;
  v13 = 0x10000;
  v14 = 0x4000;
  v15 = 1048592;
  v16 = 16;
  Function_200c73c(*(uint **)(v4 + 80), &v17, &v12, 32);
  v6 = 96;
  v7 = 32;
  v8 = 64;
  v9 = 64;
  v10 = 16;
  v11 = 16;
  *(uint *)(v4 + 76) = Function_200c704(*(uint **)(v4 + 80));
  if ( !Function_200c7c0(*(int **)(v4 + 80), *(int ***)(v4 + 76), 255) )
    ErrorHandler();
  result = Function_200cb30(*(uint **)(v4 + 80), *(uint *)(v4 + 76), &v6);
  if ( !result )
    result = ErrorHandler();
  return result;
}

//----- (021D1844) --------------------------------------------------------
uint __fastcall Function_21d1844(int a1)
{
  int v1;

  v1 = a1;
  Function_200d0b0(*(uint *)(a1 + 80), *(int ***)(a1 + 76));
  return Function_200c8d4(*(uint *)(v1 + 80));
}

//----- (021D1858) --------------------------------------------------------
int __fastcall Function_21d1858(int a1)
{
  int v1;
  int v2;
  ushort v3;
  short v4;
  int result;
  int v6;
  char v7;
  char v8;

  v1 = a1;
  v2 = *(uint *)(*(uint *)a1 + 12);
  v3 = GetPkmnData(*(int **)(*(uint *)a1 + 12), 5u, 0);
  v4 = Function_20765ac(v2, 2u);
  v6 = 0;
  SetPkmnData(v2, 76, (ushort *)&v6);
  Function_2075ef4((int)&v8, v2, 2u);
  Function_20789bc(*(uint *)(v1 + 64), (uint)&v7, v3, 1);
  result = Function_2007c34(*(uint **)(v1 + 60), &v8, 128, v4 + 96, 0, 0, (int)&v7, 0);
  *(uint *)(v1 + 112) = result;
  return result;
}

//----- (021D18C0) --------------------------------------------------------
int __fastcall Function_21d18c0(int *a1)
{
  int *v1;
  ushort v2;

  v1 = a1;
  v2 = GetPkmnData(*(int **)(*a1 + 12), 5u, 0);
  Function_2075bcc(*(uint *)(*v1 + 12));
  Function_2007b98(v1[28]);
  return Function_20789f4(v1[16], v1[22], v1[28], v2, 2, 0, 0);
}

//----- (021D1900) --------------------------------------------------------
uint *__fastcall Function_21d1900(int a1)
{
  return Function_2007dc8(*(uint **)(a1 + 112));
}

//----- (021D190C) --------------------------------------------------------
int __fastcall Function_21d190c(int a1, int a2)
{
  return Function_2007dec(*(uint *)(a1 + 112), 6u, a2);
}

//----- (021D191C) --------------------------------------------------------
int __fastcall Function_21d191c(int a1)
{
  return ((int (*)(void))*(&off_21D26AC + *(uint *)(a1 + 92)))();
}

//----- (021D1930) --------------------------------------------------------
int __fastcall Function_21d1930(int a1, int a2, char a3)
{
  int v3;
  uint v4;
  int v5;
  int v6;
  int v7;
  int v8;
  ushort v9;
  uchar v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v17;
  int v18;

  v3 = a1;
  v4 = *(uint *)(a1 + 96);
  v5 = 1;
  if ( v4 <= 0x11 )
    JUMPOUT(__CS__, (char *)&off_21D194C + *((short *)&off_21D194C + v4) + 2);
  switch ( a3 )
  {
    case 0:
      Function_21d1308(*(uint **)(a1 + 4), *(uint *)(a1 + 8));
      Function_21d135c(*(uint **)(v3 + 4), *(uint *)(v3 + 8));
      Function_21d1068(*(uint **)(v3 + 4), *(uint *)(v3 + 8), *(uint *)(v3 + 20));
      Function_21d10f0(*(uint **)(v3 + 4), v3 + 24, 1u, 2, 19, 0x1Bu, 4u, 59, 14);
      Function_21d1514(v3);
      Function_21d161c(v3, v6, v7, v8);
      Function_21d1858(v3);
      Function_21d190c(v3, 1);
      v17 = 71;
      v18 = 0;
      *(uint *)(v3 + 68) = Function_21d14ac((uint *)&v17);
      ++*(uint *)(v3 + 96);
      break;
    case 1:
      Function_21d1028();
      ++*(uint *)(v3 + 96);
      goto LABEL_6;
    case 2:
LABEL_6:
      if ( Function_200f2ac() == 1 )
      {
        Function_200569c();
        Function_2004550(0xDu, 0x475u);
        ++*(uint *)(v3 + 96);
      }
      break;
    case 3:
      if ( !Function_21d1e38() )
        ++*(uint *)(v3 + 96);
      break;
    case 4:
      if ( !Function_21d1e80() )
        ++*(uint *)(v3 + 96);
      break;
    case 5:
      if ( !Function_21d1ef0() )
        ++*(uint *)(v3 + 96);
      break;
    case 6:
      if ( !Function_21d1f48() )
        ++*(uint *)(v3 + 96);
      break;
    case 7:
      if ( !Function_21d1fac() )
      {
        Function_21d18c0((int *)v3);
        v9 = GetPkmnData(*(int **)(*(uint *)v3 + 12), 5u, 0);
        v10 = GetPkmnData(*(int **)(*(uint *)v3 + 12), 0x70u, 0);
        Function_2005844(v9, v10);
        v11 = *(uint *)(*(uint *)v3 + 12);
        v12 = *(uint *)(v3 + 16);
        *(uint *)(v3 + 12) = Function_21d1158(v3 + 24, 0);
        ++*(uint *)(v3 + 96);
      }
      break;
    case 8:
      if ( Function_200598c() )
        break;
      Function_2006150(0x484u);
      ++*(uint *)(v3 + 96);
      goto LABEL_20;
    case 9:
LABEL_20:
      if ( Function_20061e4() )
        break;
      ++*(uint *)(v3 + 96);
      goto LABEL_23;
    case 10:
LABEL_23:
      if ( Function_201d724(*(uint *)(v3 + 12) & 0xFF) )
        break;
      v13 = *(uint *)(*(uint *)v3 + 12);
      v14 = *(uint *)(v3 + 16);
      *(uint *)(v3 + 12) = Function_21d1158(v3 + 24, 1u);
      ++*(uint *)(v3 + 96);
      goto LABEL_25;
    case 11:
LABEL_25:
      if ( !Function_201d724(*(uint *)(v3 + 12) & 0xFF)
        && Function_20160f4(*(uint *)(v3 + 88), 0) == 1
        && !Function_2007c24(*(uint *)(v3 + 112)) )
      {
        Function_21d11e4(v3, *(uint **)(v3 + 4), v3 + 40, 1u, 25, 13, 6u, 4u, 167, 14);
        ++*(uint *)(v3 + 96);
      }
      break;
    case 12:
      v15 = Function_2001be0(*(uint *)(a1 + 76));
      if ( v15 == -2 )
      {
        *(uint *)(*(uint *)v3 + 4) = 0;
        ++*(uint *)(v3 + 96);
      }
      else if ( v15 != -1 )
      {
        *(uint *)(*(uint *)v3 + 4) = v15 == 0;
        ++*(uint *)(v3 + 96);
      }
      break;
    case 13:
      Function_21d12cc(a1);
      ++*(uint *)(v3 + 96);
      break;
    case 14:
      *(uint *)(a1 + 96) = v4 + 1;
      break;
    case 15:
      Function_21d1048();
      ++*(uint *)(v3 + 96);
      goto LABEL_36;
    case 16:
LABEL_36:
      if ( Function_200f2ac() == 1 )
        ++*(uint *)(v3 + 96);
      break;
    default:
      Function_21d1900(a1);
      Function_21d17a0(v3);
      Function_21d12f8(v3 + 24);
      Function_21d145c(*(uint *)(*(uint *)(v3 + 68) + 12));
      Function_21d150c(*(uint *)(v3 + 68));
      v5 = 0;
      break;
  }
  Function_200c7ec(*(int **)(v3 + 80));
  return v5;
}

//----- (021D1BD0) --------------------------------------------------------
int __fastcall Function_21d1bd0(int a1, int a2, char a3)
{
  int v3;
  uint v4;
  int v5;
  int v6;
  int v7;
  int v8;
  ushort v9;
  uchar v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v17;
  int v18;

  v3 = a1;
  v4 = *(uint *)(a1 + 96);
  v5 = 1;
  if ( v4 <= 0x11 )
    JUMPOUT(__CS__, (char *)&off_21D1BEC + *((short *)&off_21D1BEC + v4) + 2);
  switch ( a3 )
  {
    case 0:
      Function_21d1308(*(uint **)(a1 + 4), *(uint *)(a1 + 8));
      Function_21d135c(*(uint **)(v3 + 4), *(uint *)(v3 + 8));
      Function_21d1068(*(uint **)(v3 + 4), *(uint *)(v3 + 8), *(uint *)(v3 + 20));
      Function_21d10f0(*(uint **)(v3 + 4), v3 + 24, 1u, 2, 19, 0x1Bu, 4u, 59, 14);
      Function_21d1514(v3);
      Function_21d161c(v3, v6, v7, v8);
      Function_200d3f4(*(uint **)(v3 + 116), 0);
      Function_21d1858(v3);
      Function_21d190c(v3, 1);
      v17 = 71;
      v18 = 1;
      *(uint *)(v3 + 68) = Function_21d14ac((uint *)&v17);
      ++*(uint *)(v3 + 96);
      break;
    case 1:
      Function_21d1028();
      ++*(uint *)(v3 + 96);
      goto LABEL_6;
    case 2:
LABEL_6:
      if ( Function_200f2ac() == 1 )
      {
        Function_2004550(0xDu, 0x475u);
        ++*(uint *)(v3 + 96);
      }
      break;
    case 3:
      if ( !Function_21d21bc() )
      {
        Function_21d18c0((int *)v3);
        v9 = GetPkmnData(*(int **)(*(uint *)v3 + 12), 5u, 0);
        v10 = GetPkmnData(*(int **)(*(uint *)v3 + 12), 0x70u, 0);
        Function_2005844(v9, v10);
        v11 = *(uint *)(*(uint *)v3 + 12);
        v12 = *(uint *)(v3 + 16);
        *(uint *)(v3 + 12) = Function_21d1158(v3 + 24, 0);
        *(uint *)(v3 + 96) = 8;
      }
      break;
    case 4:
    case 5:
    case 6:
    case 7:
      ErrorHandler();
      break;
    case 8:
      if ( Function_200598c() )
        break;
      Function_2006150(0x484u);
      ++*(uint *)(v3 + 96);
      goto LABEL_13;
    case 9:
LABEL_13:
      if ( Function_20061e4() )
        break;
      ++*(uint *)(v3 + 96);
      goto LABEL_16;
    case 10:
LABEL_16:
      if ( Function_201d724(*(uint *)(v3 + 12) & 0xFF) )
        break;
      v13 = *(uint *)(*(uint *)v3 + 12);
      v14 = *(uint *)(v3 + 16);
      *(uint *)(v3 + 12) = Function_21d1158(v3 + 24, 1u);
      ++*(uint *)(v3 + 96);
      goto LABEL_18;
    case 11:
LABEL_18:
      if ( !Function_201d724(*(uint *)(v3 + 12) & 0xFF)
        && Function_20160f4(*(uint *)(v3 + 88), 0) == 1
        && !Function_2007c24(*(uint *)(v3 + 112)) )
      {
        Function_21d11e4(v3, *(uint **)(v3 + 4), v3 + 40, 1u, 25, 13, 6u, 4u, 167, 14);
        ++*(uint *)(v3 + 96);
      }
      break;
    case 12:
      v15 = Function_2001be0(*(uint *)(a1 + 76));
      if ( v15 == -2 )
      {
        *(uint *)(*(uint *)v3 + 4) = 0;
        ++*(uint *)(v3 + 96);
      }
      else if ( v15 != -1 )
      {
        *(uint *)(*(uint *)v3 + 4) = v15 == 0;
        ++*(uint *)(v3 + 96);
      }
      break;
    case 13:
      Function_21d12cc(a1);
      ++*(uint *)(v3 + 96);
      break;
    case 14:
      *(uint *)(a1 + 96) = v4 + 1;
      break;
    case 15:
      Function_21d1048();
      ++*(uint *)(v3 + 96);
      goto LABEL_29;
    case 16:
LABEL_29:
      if ( Function_200f2ac() == 1 )
        ++*(uint *)(v3 + 96);
      break;
    default:
      Function_21d1900(a1);
      Function_21d17a0(v3);
      Function_21d12f8(v3 + 24);
      Function_21d145c(*(uint *)(*(uint *)(v3 + 68) + 12));
      Function_21d150c(*(uint *)(v3 + 68));
      v5 = 0;
      break;
  }
  Function_200c7ec(*(int **)(v3 + 80));
  return v5;
}

//----- (021D1E38) --------------------------------------------------------
int __fastcall Function_21d1e38(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  v2 = *(uint *)(a1 + 104);
  if ( v2 )
  {
    if ( v2 != 1 )
    {
      result = 0;
      *(uint *)(v1 + 104) = 0;
      *(uint *)(v1 + 100) = 0;
      return result;
    }
    v3 = *(uint *)(v1 + 100) + 1;
    *(uint *)(v1 + 100) = v3;
    if ( v3 >= 25 )
    {
      Function_2005748(0x714u);
      ++*(uint *)(v1 + 104);
    }
  }
  else
  {
    Function_200d3cc(*(int **)(v1 + 116), 0);
    ++*(uint *)(v1 + 104);
  }
  return 1;
}

//----- (021D1E80) --------------------------------------------------------
int __fastcall Function_21d1e80(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = *(uint *)(a1 + 104);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      if ( Function_21d176c(a1, 0) == 2 )
      {
        Function_2005748(0x714u);
        Function_200d3cc(*(int **)(v1 + 116), 2u);
        ++*(uint *)(v1 + 104);
        *(uint *)(v1 + 100) = 0;
      }
    }
    else if ( Function_21d176c(a1, 0) == 2 )
    {
      Function_200d3cc(*(int **)(v1 + 116), 2u);
      result = 0;
      *(uint *)(v1 + 104) = 0;
      *(uint *)(v1 + 100) = 0;
      return result;
    }
  }
  else if ( Function_21d14f8(*(uint *)(a1 + 68)) != 1 )
  {
    Function_200d3cc(*(int **)(v1 + 116), 1u);
    ++*(uint *)(v1 + 104);
  }
  return 1;
}

//----- (021D1EF0) --------------------------------------------------------
int __fastcall Function_21d1ef0(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  v2 = *(uint *)(a1 + 104);
  if ( v2 )
  {
    if ( v2 != 1 )
    {
      result = 0;
      *(uint *)(v1 + 104) = 0;
      *(uint *)(v1 + 100) = 0;
      return result;
    }
    v3 = Function_21d176c(a1, 1);
    if ( v3 == 1 )
    {
      Function_2005748(0x714u);
      Function_200d3cc(*(int **)(v1 + 116), 3u);
      Function_21d14dc(*(uint *)(v1 + 68), 0);
    }
    if ( v3 == 2 )
    {
      *(uint *)(v1 + 100) = 0;
      ++*(uint *)(v1 + 104);
    }
  }
  else
  {
    *(uint *)(a1 + 104) = 1;
  }
  return 1;
}

//----- (021D1F48) --------------------------------------------------------
int __fastcall Function_21d1f48(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  v2 = *(uint *)(a1 + 104);
  if ( v2 )
  {
    if ( v2 != 1 )
    {
      result = 0;
      *(uint *)(v1 + 104) = 0;
      *(uint *)(v1 + 100) = 0;
      return result;
    }
    v3 = Function_21d176c(a1, 2);
    if ( v3 == 1 )
    {
      Function_2005748(0x714u);
      Function_200d3cc(*(int **)(v1 + 116), 4u);
      Function_21d14dc(*(uint *)(v1 + 68), 1);
    }
    if ( v3 == 2 )
    {
      *(uint *)(v1 + 100) = 0;
      ++*(uint *)(v1 + 104);
    }
  }
  else if ( Function_21d14f8(*(uint *)(a1 + 68)) != 1 )
  {
    ++*(uint *)(v1 + 104);
  }
  return 1;
}

//----- (021D1FAC) --------------------------------------------------------
int __fastcall Function_21d1fac(int a1)
{
  int v1;
  uint v2;
  int v3;
  int v4;
  uint *v5;
  char v6;
  int v7;
  int v8;
  int result;
  char v10;
  short v11;

  v1 = a1;
  v2 = *(uint *)(a1 + 104);
  if ( v2 <= 5 )
    JUMPOUT(__CS__, *((short *)&off_21D1FC6 + v2) + 35463112);
  switch ( (uchar)v2 )
  {
    case 0:
      if ( Function_21d14f8(*(uint *)(a1 + 68)) != 1 )
      {
        Function_200d3cc(*(int **)(v1 + 116), 4u);
        Function_201ff0c(2u, 0);
        ++*(uint *)(v1 + 104);
      }
      return 1;
    case 1:
      v3 = Function_21d176c(a1, 3);
      if ( v3 == 1 )
      {
        Function_200d3cc(*(int **)(v1 + 116), 5u);
        Function_2005748(0x707u);
        Function_21d14dc(*(uint *)(v1 + 68), 2);
        Function_21d14dc(*(uint *)(v1 + 68), 3);
      }
      if ( v3 == 2 )
      {
        Function_200d3f4(*(uint **)(v1 + 116), 0);
        *(uint *)(v1 + 100) = 0;
        ++*(uint *)(v1 + 104);
      }
      return 1;
    case 2:
      v4 = *(uint *)(a1 + 100) + 1;
      *(uint *)(v1 + 100) = v4;
      if ( v4 >= 10 )
      {
        *(uint *)(v1 + 100) = 0;
        Function_2003178(*(uint *)(v1 + 8), 1);
        v5 = (uint *)Function_2021f9c(**(uint **)(v1 + 120));
        v6 = Function_201fab4(v5, 1);
        Function_2003178(*(uint *)(v1 + 8), 4, ((1 << v6) ^ 0xFFFF) & 0xFFFF);
        Function_20086fc(*(uint *)(v1 + 112), 0, 16, 0, 0xFFFF);
        ++*(uint *)(v1 + 104);
      }
      return 1;
    case 3:
      v7 = 0;
      Function_200d550(*(int **)(a1 + 120), &v11, &v10);
      if ( *(short *)&v10 <= -48 )
        v7 = 1;
      else
        Function_200d5dc(*(uint ***)(v1 + 120), 0, -4);
      Function_200d550(*(int **)(v1 + 124), &v11, &v10);
      if ( *(short *)&v10 >= 192 )
        ++v7;
      else
        Function_200d5dc(*(uint ***)(v1 + 124), 0, 4);
      if ( !Function_200384c(*(uint *)(v1 + 8)) && v7 == 2 && !Function_20087b4(*(uint *)(v1 + 112)) )
      {
        Function_201ff0c(2u, 1);
        Function_21d190c(v1, 0);
        Function_200d3f4(*(uint **)(v1 + 116), 0);
        Function_200d3f4(*(uint **)(v1 + 120), 0);
        Function_200d3f4(*(uint **)(v1 + 124), 0);
        ++*(uint *)(v1 + 104);
      }
      return 1;
    case 4:
      v8 = *(uint *)(a1 + 100) + 1;
      *(uint *)(v1 + 100) = v8;
      if ( v8 >= 25 )
      {
        *(uint *)(v1 + 100) = 0;
        Function_20086fc(*(uint *)(v1 + 112), 16, 0, 0, 0xFFFF);
        Function_2003178(*(uint *)(v1 + 8), 1);
        Function_2003178(*(uint *)(v1 + 8), 4);
        ++*(uint *)(v1 + 104);
      }
      return 1;
    case 5:
      if ( !Function_200384c(*(uint *)(a1 + 8)) && !Function_20087b4(*(uint *)(v1 + 112)) )
        ++*(uint *)(v1 + 104);
      return 1;
    default:
      if ( Function_21d14f8(*(uint *)(a1 + 68)) == 1 )
        return 1;
      result = 0;
      *(uint *)(v1 + 104) = 0;
      *(uint *)(v1 + 100) = 0;
      return result;
  }
}

//----- (021D21BC) --------------------------------------------------------
int __fastcall Function_21d21bc(int a1)
{
  int v1;
  uint v2;
  int v3;
  int v4;
  uint *v5;
  char v6;
  int v7;
  int v8;
  int result;
  char v10;
  short v11;

  v1 = a1;
  v2 = *(uint *)(a1 + 104);
  if ( v2 <= 4 )
    JUMPOUT(__CS__, *((short *)&off_21D21D6 + v2) + 35463640);
  switch ( (uchar)v2 )
  {
    case 0:
      Function_21d14dc(*(uint *)(v1 + 68), 0);
      Function_21d14dc(*(uint *)(v1 + 68), 1);
      Function_21d14dc(*(uint *)(v1 + 68), 2);
      Function_21d14dc(*(uint *)(v1 + 68), 3);
      Function_201ff0c(2u, 0);
      ++*(uint *)(v1 + 104);
      goto LABEL_30;
    case 1:
      v3 = *(uint *)(v1 + 100);
      switch ( v3 )
      {
        case 25:
          Function_2005748(0x806u);
          break;
        case 80:
          Function_2005748(0x7AAu);
          break;
        case 142:
          Function_2005748(0x815u);
          break;
      }
      v4 = *(uint *)(v1 + 100) + 1;
      *(uint *)(v1 + 100) = v4;
      if ( v4 >= 160 )
      {
        *(uint *)(v1 + 100) = 0;
        Function_2003178(*(uint *)(v1 + 8), 1);
        v5 = (uint *)Function_2021f9c(**(uint **)(v1 + 120));
        v6 = Function_201fab4(v5, 1);
        Function_2003178(*(uint *)(v1 + 8), 4, ((1 << v6) ^ 0xFFFF) & 0xFFFF);
        Function_20086fc(*(uint *)(v1 + 112), 0, 16, 0, 0xFFFF);
        ++*(uint *)(v1 + 104);
      }
      goto LABEL_30;
    case 2:
      v7 = 0;
      Function_200d550(*(int **)(v1 + 120), &v11, &v10);
      if ( *(short *)&v10 <= -48 )
        v7 = 1;
      else
        Function_200d5dc(*(uint ***)(v1 + 120), 0, -4);
      Function_200d550(*(int **)(v1 + 124), &v11, &v10);
      if ( *(short *)&v10 >= 192 )
        ++v7;
      else
        Function_200d5dc(*(uint ***)(v1 + 124), 0, 4);
      if ( !Function_200384c(*(uint *)(v1 + 8)) && v7 == 2 && !Function_20087b4(*(uint *)(v1 + 112)) )
      {
        Function_21d190c(v1, 0);
        Function_201ff0c(2u, 1);
        Function_200d3f4(*(uint **)(v1 + 116), 0);
        Function_200d3f4(*(uint **)(v1 + 120), 0);
        Function_200d3f4(*(uint **)(v1 + 124), 0);
        ++*(uint *)(v1 + 104);
      }
      goto LABEL_30;
    case 3:
      v8 = *(uint *)(v1 + 100) + 1;
      *(uint *)(v1 + 100) = v8;
      if ( v8 >= 25 )
      {
        *(uint *)(v1 + 100) = 0;
        Function_20086fc(*(uint *)(v1 + 112), 16, 0, 0, 0xFFFF);
        Function_2003178(*(uint *)(v1 + 8), 1);
        Function_2003178(*(uint *)(v1 + 8), 4);
        ++*(uint *)(v1 + 104);
      }
      goto LABEL_30;
    case 4:
      if ( !Function_200384c(*(uint *)(v1 + 8)) && !Function_20087b4(*(uint *)(v1 + 112)) )
        ++*(uint *)(v1 + 104);
LABEL_30:
      result = 1;
      break;
    default:
      result = 0;
      *(uint *)(v1 + 104) = 0;
      *(uint *)(v1 + 100) = 0;
      break;
  }
  return result;
}

