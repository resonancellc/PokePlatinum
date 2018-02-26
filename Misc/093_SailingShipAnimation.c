//----- (021D0D80) --------------------------------------------------------
int __fastcall Function_93_21d0d80(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint v7;
  int *v8;
  int v10;
  int v11;
  int v12;
  int v13;

  v13 = a4;
  v4 = a1;
  Function_2017fc8(3, 72, 0x20000);
  v5 = MallocSomeDataAndStorePtrInOverlayData1c(v4, 160, 0x48u);
  Call_FillMemWithValue((int *)v5, 0, 0xA0u);
  v6 = LoadPtrToOverWorldDataIn18(v4);
  *(uchar *)(v5 + 156) = *(uchar *)v6;
  *(uchar *)(v5 + 157) = 0;
  *(uint *)v5 = Function_20203ac(0x48u);
  Function_21d0fa8();
  Function_21d102c(v5);
  v10 = 0;
  v11 = 0;
  v12 = 0;
  Function_20206d0(&v10, 2731713, dword_21D14BC, 1473, 0, 0, *(uint *)v5);
  Function_20203d4(*(uint *)v5);
  v7 = 0;
  do
  {
    Function_20af51c(
      v7,
      *(short *)(*(uint *)(v6 + 4) + 6 * v7),
      *(short *)(*(uint *)(v6 + 4) + 6 * v7 + 2),
      *(short *)(*(uint *)(v6 + 4) + 6 * v7 + 4));
    Function_20af558(v7, *(ushort *)(*(uint *)(v6 + 4) + 2 * v7 + 24));
    v7 = (v7 + 1) & 0xFF;
  }
  while ( v7 < 4 );
  Function_20af56c(
    *(ushort *)(*(uint *)(v6 + 4) + 32),
    *(ushort *)(*(uint *)(v6 + 4) + 34),
    *(uint *)(*(uint *)(v6 + 4) + 40));
  Function_20af590(
    *(ushort *)(*(uint *)(v6 + 4) + 36),
    *(ushort *)(*(uint *)(v6 + 4) + 38),
    *(uint *)(*(uint *)(v6 + 4) + 44));
  v8 = *(int **)(v6 + 4);
  Function_20af5b4(v8[12], v8[13], v8[14], v8[15], v8[16], v8[17]);
  Function_208c120(0, 72);
  return 1;
}

//----- (021D0E70) --------------------------------------------------------
int __fastcall Function_93_21d0e70(int a1, uint *a2, int a3, int a4)
{
  int *v4;
  int v5;
  uint *v6;
  char *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint v13;
  int *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  char v22;
  int v23;

  v23 = a4;
  v4 = dword_21D14CC;
  v5 = a1;
  v6 = a2;
  v7 = &v22;
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
  v19 = 4096;
  v20 = 4096;
  v21 = 4096;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v11 = LoadOverlayData1c(v5);
  if ( *v6 )
  {
    if ( *v6 == 1 )
    {
      if ( *(uchar *)(v11 + 157) )
      {
        if ( Function_200f2ac() )
          return 1;
      }
      else if ( **(uint **)(v11 + 128) + 4096 == *(ushort *)(*(uint *)(*(uint *)(v11 + 128) + 8) + 4) << 12 )
      {
        *(uchar *)(v11 + 157) = 1;
        Function_208c120(1, 72);
      }
    }
  }
  else
  {
    Function_2005748(0x6DCu);
    ++*v6;
  }
  v13 = 0;
  do
  {
    v14 = *(int **)(v11 + 4 * v13 + 128);
    v15 = *v14 + 4096;
    if ( v15 < *(ushort *)(v14[2] + 4) << 12 )
      *v14 = v15;
    v13 = (v13 + 1) & 0xFF;
  }
  while ( v13 < 4 );
  Call_G3X_Reset();
  Function_20203ec();
  Function_201ca74((uint *)(v11 + 4), &v16, (int *)&v22, &v19);
  Function_20241bc(1, 1);
  return 0;
}

//----- (021D0F58) --------------------------------------------------------
int __fastcall Function_93_21d0f58(int a1)
{
  int *v1;
  uint v2;
  int v3;
  int v5;

  v5 = a1;
  v1 = (int *)LoadOverlayData1c(a1);
  v2 = 0;
  do
  {
    v3 = v1[v2 + 32];
    Function_20b2cd8((int)(v1 + 28));
    free(v1[v2 + 24]);
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 < 4 );
  free(v1[23]);
  Call_free5(*v1);
  FreeSomeDataAndStore0InOverlayData1c(v5);
  Function_201cba0();
  Function_201807c(72);
  return 1;
}

//----- (021D0FA8) --------------------------------------------------------
uint Function_21d0fa8()
{
  int v0;
  short v1;

  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  Function_201ff00();
  Function_201ff68();
  REG_DISPCNT &= 0xFFFFE0FF;
  REG_DISPCNT_SUB &= 0xFFFFE0FF;
  Function_21d100c();
  Function_201caf4(0x48u);
  v0 = GFX_CONTROL & 0xCFFF;
  GFX_CONTROL = v0 | 0x20;
  SetEdgeTable((int)dword_21D14A8, v0, (int)&GFX_CONTROL, v1);
  return Function_201ffe8();
}

//----- (021D100C) --------------------------------------------------------
char *Function_21d100c()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_21D14F0;
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

//----- (021D102C) --------------------------------------------------------
uint __fastcall Function_21d102c(int a1, int a2, int a3, int a4)
{
  int v4;
  uint v5;
  int v6;
  int v7;
  uchar *v8;
  int *v10;
  int v11;

  v4 = a1;
  v10 = LoadFromNARC_8(120, 0x48u, a3, a4);
  Function_20182cc((uint *)(v4 + 112), 0x48u, 4);
  *(uint *)(v4 + 92) = Function_2006cb8_LoadFileInMemory(
                           (int)v10,
                           *((ushort *)dword_21D15A0 + 5 * *(uchar *)(v4 + 156)),
                           0x48u);
  Function_201ca3c((uint *)(v4 + 4), (int *)(v4 + 88), (int *)(v4 + 92));
  v11 = Function_20b3c1c_GetTexOffsets(*(uint *)(v4 + 92));
  Function_20b2ce4(*(uint *)(v4 + 88), 0, 64);
  Function_20b2ce4(*(uint *)(v4 + 88), 0, 128);
  Function_20b2ce4(*(uint *)(v4 + 88), 0, 512);
  Function_20b2ce4(*(uint *)(v4 + 88), 0, 1024);
  v5 = 0;
  do
  {
    v6 = v4 + 4 * v5;
    v7 = Function_2006cb8_LoadFileInMemory(
           (int)v10,
           *((ushort *)dword_21D15A0 + 5 * *(uchar *)(v4 + 156) + v5 + 1),
           0x48u);
    *(uint *)(v6 + 96) = v7;
    v8 = (uchar *)Function_20b3c5c(v7, 0);
    *(uint *)(v6 + 128) = Function_20b2cb4((int (***)(void))(v4 + 112), v8, *(uint *)(v4 + 88));
    Function_20ae4f0(*(uint *)(v6 + 128), v8, *(uint *)(v4 + 88), v11);
    Function_20ae77c(v4 + 4, *(uint *)(v6 + 128));
    v5 = (v5 + 1) & 0xFF;
  }
  while ( v5 < 4 );
  return Call_FS_CloseFile(v10);
}

//----- (021D111C) --------------------------------------------------------
int __fastcall Function_93_21d111c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint v7;
  int *v8;
  int v10;
  int v11;
  int v12;
  int v13;

  v13 = a4;
  v4 = a1;
  Function_2017fc8(3, 72, 0x20000);
  v5 = MallocSomeDataAndStorePtrInOverlayData1c(v4, 152, 0x48u);
  Call_FillMemWithValue((int *)v5, 0, 0x98u);
  v6 = LoadPtrToOverWorldDataIn18(v4);
  *(uchar *)(v5 + 148) = *(uchar *)v6;
  *(uchar *)(v5 + 149) = 0;
  *(uint *)v5 = Function_20203ac(0x48u);
  Function_21d133c();
  Function_21d13c0(v5);
  v10 = 0;
  v11 = 0;
  v12 = 0;
  Function_20206d0(&v10, 2731713, dword_21D1538, 1473, 0, 0, *(uint *)v5);
  Function_20203d4(*(uint *)v5);
  v7 = 0;
  do
  {
    Function_20af51c(
      v7,
      *(short *)(*(uint *)(v6 + 4) + 6 * v7),
      *(short *)(*(uint *)(v6 + 4) + 6 * v7 + 2),
      *(short *)(*(uint *)(v6 + 4) + 6 * v7 + 4));
    Function_20af558(v7, *(ushort *)(*(uint *)(v6 + 4) + 2 * v7 + 24));
    v7 = (v7 + 1) & 0xFF;
  }
  while ( v7 < 4 );
  Function_20af56c(
    *(ushort *)(*(uint *)(v6 + 4) + 32),
    *(ushort *)(*(uint *)(v6 + 4) + 34),
    *(uint *)(*(uint *)(v6 + 4) + 40));
  Function_20af590(
    *(ushort *)(*(uint *)(v6 + 4) + 36),
    *(ushort *)(*(uint *)(v6 + 4) + 38),
    *(uint *)(*(uint *)(v6 + 4) + 44));
  v8 = *(int **)(v6 + 4);
  Function_20af5b4(v8[12], v8[13], v8[14], v8[15], v8[16], v8[17]);
  Function_208c120(0, 72);
  return 1;
}

//----- (021D120C) --------------------------------------------------------
int __fastcall Function_93_21d120c(int a1, uint *a2, int a3, int a4)
{
  int *v4;
  int v5;
  uint *v6;
  char *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint v13;
  int *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  char v22;
  int v23;

  v23 = a4;
  v4 = dword_21D1548;
  v5 = a1;
  v6 = a2;
  v7 = &v22;
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
  v19 = 4096;
  v20 = 4096;
  v21 = 4096;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v11 = LoadOverlayData1c(v5);
  if ( *v6 )
  {
    if ( *v6 == 1 )
    {
      if ( *(uchar *)(v11 + 149) )
      {
        if ( Function_200f2ac() )
          return 1;
      }
      else if ( **(uint **)(v11 + 124) + 4096 == *(ushort *)(*(uint *)(*(uint *)(v11 + 124) + 8) + 4) << 12 )
      {
        *(uchar *)(v11 + 149) = 1;
        Function_208c120(1, 72);
      }
    }
  }
  else
  {
    Function_2005748(0x6DCu);
    ++*v6;
  }
  v13 = 0;
  do
  {
    v14 = *(int **)(v11 + 4 * v13 + 124);
    v15 = *v14 + 4096;
    if ( v15 < *(ushort *)(v14[2] + 4) << 12 )
      *v14 = v15;
    v13 = (v13 + 1) & 0xFF;
  }
  while ( v13 < 3 );
  Call_G3X_Reset();
  Function_20203ec();
  Function_201ca74((uint *)(v11 + 4), &v16, (int *)&v22, &v19);
  Function_20241bc(1, 1);
  return 0;
}

//----- (021D12F0) --------------------------------------------------------
int __fastcall Function_93_21d12f0(int a1)
{
  int *v1;
  uint v2;
  int v3;
  int v4;
  int v6;

  v6 = a1;
  v1 = (int *)LoadOverlayData1c(a1);
  v2 = 0;
  do
  {
    v3 = (int)&v1[v2];
    v4 = *(uint *)(v3 + 124);
    Function_20b2cd8((int)(v1 + 27));
    free(*(uint *)(v3 + 96));
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 < 3 );
  free(v1[23]);
  Call_free5(*v1);
  FreeSomeDataAndStore0InOverlayData1c(v6);
  Function_201cba0();
  Function_201807c(72);
  return 1;
}

//----- (021D133C) --------------------------------------------------------
uint Function_21d133c()
{
  int v0;
  short v1;

  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  Function_201ff00();
  Function_201ff68();
  REG_DISPCNT &= 0xFFFFE0FF;
  REG_DISPCNT_SUB &= 0xFFFFE0FF;
  Function_21d13a0();
  Function_201caf4(0x48u);
  v0 = GFX_CONTROL & 0xCFFF;
  GFX_CONTROL = v0 | 0x20;
  SetEdgeTable((int)dword_21D1524, v0, (int)&GFX_CONTROL, v1);
  return Function_201ffe8();
}

//----- (021D13A0) --------------------------------------------------------
char *Function_21d13a0()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_21D156C;
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

//----- (021D13C0) --------------------------------------------------------
uint __fastcall Function_21d13c0(int a1, int a2, int a3, int a4)
{
  int v4;
  uint v5;
  int v6;
  int v7;
  uchar *v8;
  uchar *v9;
  int v10;
  int *v12;
  int v13;

  v4 = a1;
  v12 = LoadFromNARC_8(156, 0x48u, a3, a4);
  Function_20182cc((uint *)(v4 + 108), 0x48u, 4);
  *(uint *)(v4 + 92) = Function_2006cb8_LoadFileInMemory(
                           (int)v12,
                           LOWORD(dword_21D15C8[2 * *(uchar *)(v4 + 148)]),
                           0x48u);
  Function_201ca3c((uint *)(v4 + 4), (int *)(v4 + 88), (int *)(v4 + 92));
  v13 = Function_20b3c1c_GetTexOffsets(*(uint *)(v4 + 92));
  Function_20b2ce4(*(uint *)(v4 + 88), 0, 64);
  Function_20b2ce4(*(uint *)(v4 + 88), 0, 128);
  Function_20b2ce4(*(uint *)(v4 + 88), 0, 512);
  Function_20b2ce4(*(uint *)(v4 + 88), 0, 1024);
  v5 = 0;
  do
  {
    v6 = v4 + 4 * v5;
    v7 = Function_2006cb8_LoadFileInMemory(
           (int)v12,
           *((ushort *)&dword_21D15C8[2 * *(uchar *)(v4 + 148)] + v5 + 1),
           0x48u);
    *(uint *)(v6 + 96) = v7;
    v8 = (uchar *)Function_20b3c5c(v7, 0);
    v9 = v8;
    v10 = Function_20b2cb4((int (***)(void))(v4 + 108), v8, *(uint *)(v4 + 88));
    *(uint *)(v6 + 124) = v10;
    Function_20ae4f0(v10, v9, *(uint *)(v4 + 88), v13);
    Function_20ae77c(v4 + 4, *(uint *)(v6 + 124));
    v5 = (v5 + 1) & 0xFF;
  }
  while ( v5 < 3 );
  return Call_FS_CloseFile(v12);
}

