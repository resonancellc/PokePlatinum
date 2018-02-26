//----- (021D0D80) --------------------------------------------------------
int __fastcall GameCredits_Init(int a1)
{
  int v1;
  int v2;
  ushort *v3;
  int v4;
  int v5;
  uint *v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v1 = a1;
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
  Function_2017fc8(3, 75, (uint)&REG_DISPCNT_SUB << 7);
  v2 = MallocSomeDataAndStorePtrInOverlayData1c(v1, 4380, 0x4Bu);
  MI_CpuFill8((ushort *)v2, 0, 0x111Cu);
  *(uint *)v2 = LoadPtrToOverWorldDataIn18(v1);
  *(uint *)(v2 + 16) = Function_21d19ac(75);
  v3 = MallocFill120(0x4Bu);
  *(uint *)(v2 + 12) = v3;
  Function_2002f70((int)v3, 0, 512, 0x4Bu);
  Function_2002f70(*(uint *)(v2 + 12), 1, 512, 0x4Bu);
  Function_2002f70(*(uint *)(v2 + 12), 2, 448, 0x4Bu);
  Function_2002f70(*(uint *)(v2 + 12), 3, 512, 0x4Bu);
  Function_2003858(*(uint *)(v2 + 12), 1);
  *(uint *)(v2 + 8) = Function_2018340(0x4Bu);
  Function_201dbec(64, 0x4Bu);
  Function_2017dd4(4, 8);
  Function_21d1380(*(uint *)(v2 + 8));
  Function_201e3d8();
  Function_201e450(4u);
  *(uint *)(v2 + 32) = LoadFromMsgNARC(0, 26, 548, 0x4Bu);
  *(uint *)(v2 + 4344) = LoadFromNARC_8(127, 0x4Bu, v4, v5);
  Function_21d1918(v2);
  v6 = Function_200c6e4(0x4Bu);
  *(uint *)(v2 + 24) = v6;
  Function_200c73c(v6, &dword_21D4760, dword_21D4718, 32);
  Function_200966c(1, 2097168, v7, v8);
  Function_2009704(1);
  *(uint *)(v2 + 28) = Function_200c704(*(uint **)(v2 + 24));
  Function_200c7c0(*(int **)(v2 + 24), *(int ***)(v2 + 28), 128);
  Function_200cb30(*(uint **)(v2 + 24), *(uint *)(v2 + 28), dword_21D472C);
  v9 = Function_200c738(*(uint *)(v2 + 24));
  Function_200964c(v9, 0, 1114112, v10);
  Function_21d16e4(v2);
  *(uint *)(v2 + 4360) = Function_21d3e78(*(uint *)(v2 + 8), -240, 1, 15, *(uint *)(v2 + 32));
  *(uint *)(v2 + 4364) = Function_21d3e78(*(uint *)(v2 + 8), -448, 5, 15, *(uint *)(v2 + 32));
  WIN0_X1 = 255;
  WIN0_Y1 = -22336;
  WIN_IN = WIN_IN & 0xFFC0 | 0x3D;
  WIN_OUT = WIN_OUT & 0xFFC0 | 0x3F;
  SUB_WIN0_X1 = 255;
  SUB_WIN0_Y1 = 24;
  SUB_WIN_IN = SUB_WIN_IN & 0xFFC0 | 0x3D;
  SUB_WIN_OUT = SUB_WIN_OUT & 0xFFC0 | 0x3F;
  *(uint *)((uint)&SUB_WIN0_X1 << 20) = ((uint)&SUB_WIN0_X1 >> 13) | *(uint *)((uint)&SUB_WIN0_X1 << 20) & 0xFFFF1FFF;
  REG_DISPCNT_SUB = ((uint)&SUB_WIN0_X1 >> 13) | REG_DISPCNT_SUB & 0xFFFF1FFF;
  byte_21BF6E1 = 1;
  Function_201ffe8();
  Function_201ffd0();
  Function_201ff0c(0x10u, 1);
  Function_201ff74(0x10u, 1);
  *(uint *)(v2 + 20) = AddTaskToTaskList1((int)Function_21d1244, v2, 0xEA60u);
  SetMainLoopFunctionCall((int)Function_21d1350, v2);
  Function_2004550(0xEu, 0x4A2u);
  Function_200ab4c(-16, 61, 3);
  SetBrightness(0, 0);
  SetBrightness(1, 0);
  Function_2019120(1u, 1);
  Function_2019120(5u, 1);
  return 1;
}

//----- (021D1028) --------------------------------------------------------
int __fastcall GameCredits_Loop(int a1, int *a2)
{
  int *v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = LoadOverlayData1c(a1);
  if ( *(uint *)(v3 + 4360) )
  {
    ((void (*)(void))Function_21d3f6c)();
    *(uint *)(v3 + 4368) = Function_21d3f6c(*(uint *)(v3 + 4364), 1);
  }
  if ( *(uint *)(*(uint *)v3 + 4)
    && dword_21BF6C4 & 8
    && !*(uchar *)(v3 + 4352)
    && *(uchar *)(v3 + 4353) < 6u )
  {
    Function_200f174(0, 0, 0, 0, 6, 1, 75);
    *(uchar *)(v3 + 4352) = 1;
  }
  if ( *(uchar *)(v3 + 4352) && *(uchar *)(v3 + 4352) == 1 && Function_200f2ac() )
  {
    if ( *(uchar *)(v3 + 4354) == 1 )
    {
      Function_21d1cfc(v3, *(uchar *)(v3 + 4353));
      *(uchar *)(v3 + 4354) = 0;
    }
    if ( !Function_200ac1c(3) )
      InitChosenBlendTables(3);
    Function_21d12f0(v3);
    *(uchar *)(v3 + 4353) = 6;
    Function_201ff48(0);
    Function_201ffb0(0);
    MI_CpuFill8((ushort *)(v3 + 4004), 0, 0x13Cu);
    *(uchar *)(v3 + 4352) = 2;
    *v2 = 0;
  }
  v4 = *v2;
  if ( *v2 )
  {
    if ( v4 == 1 )
    {
      if ( Function_21d1d30(v3, *(uchar *)(v3 + 4353)) == 1 )
      {
        Function_21d1cfc(v3, *(uchar *)(v3 + 4353));
        *(uchar *)(v3 + 4354) = 0;
        if ( (uchar)++*(uchar *)(v3 + 4353) >= 7u )
          *v2 = 2;
        else
          *v2 = 0;
      }
    }
    else if ( v4 == 2 )
    {
      return 1;
    }
  }
  else if ( !*(uchar *)(v3 + 4352) || *(uchar *)(v3 + 4352) == 2 )
  {
    Function_21d1cc8(v3, *(uchar *)(v3 + 4353));
    *(uchar *)(v3 + 4354) = 1;
    ++*v2;
  }
  ++*(uint *)(v3 + 4348);
  return 0;
}

//----- (021D11A8) --------------------------------------------------------
int __fastcall GameCredits_End(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  Call_RemoveTaskFromTaskList(*(int **)(v2 + 20));
  if ( *(uint *)(v2 + 4360) )
    Function_21d1270(v2);
  else
    Function_21d1314(v2);
  Function_200b190(*(ushort **)(v2 + 32));
  Function_200d0b0(*(uint *)(v2 + 24), *(int ***)(v2 + 28));
  Function_200c8d4(*(uint *)(v2 + 24));
  Function_2002fa0(*(uint *)(v2 + 12), 0);
  Function_2002fa0(*(uint *)(v2 + 12), 1);
  Function_2002fa0(*(uint *)(v2 + 12), 2);
  Function_2002fa0(*(uint *)(v2 + 12), 3);
  Call_free1(*(uint *)(v2 + 12));
  Function_21d19a0(v2);
  Call_FS_CloseFile(*(int **)(v2 + 4344));
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  Function_201dc3c();
  Function_201e530();
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(75);
  return 1;
}

//----- (021D1244) --------------------------------------------------------
uint __fastcall Function_21d1244(int a1, int a2)
{
  int v2;

  v2 = a2;
  if ( *(uchar *)(a2 + 4355) == 1 )
  {
    Function_21d1720(a2);
    Function_20241bc(0, 0);
  }
  Function_200c7ec(*(int **)(v2 + 28));
  return Function_200c808();
}

//----- (021D1270) --------------------------------------------------------
int __fastcall Function_21d1270(int *a1)
{
  int *v1;

  v1 = a1;
  if ( !a1[1090] )
    ErrorHandler();
  Function_21d3f38(v1[1091]);
  Function_21d3f38(v1[1090]);
  v1[1091] = 0;
  v1[1090] = 0;
  Function_2019120(1u, 0);
  Function_2019120(5u, 0);
  Function_2019044(v1[2], 7);
  Function_2019044(v1[2], 5);
  Function_2019044(v1[2], 6);
  Function_2019044(v1[2], 3);
  Function_2019044(v1[2], 2);
  Function_2019044(v1[2], 1);
  free(v1[2]);
  return Function_21d1a4c(v1[4]);
}

//----- (021D12F0) --------------------------------------------------------
int *__fastcall Function_21d12f0(int *result)
{
  int *v1;

  v1 = result;
  if ( result[1090] )
  {
    Function_21d1270(result);
    v1[2] = Function_2018340(0x4Bu);
    result = (int *)Function_21d1580();
  }
  return result;
}

//----- (021D1314) --------------------------------------------------------
uint __fastcall Function_21d1314(int a1)
{
  int v1;

  v1 = a1;
  if ( *(uint *)(a1 + 4360) )
    ErrorHandler();
  Function_2019044(*(uint *)(v1 + 8), 1);
  Function_2019044(*(uint *)(v1 + 8), 2);
  Function_2019044(*(uint *)(v1 + 8), 3);
  Function_2019044(*(uint *)(v1 + 8), 7);
  return free(*(uint *)(v1 + 8));
}

//----- (021D1350) --------------------------------------------------------
int __fastcall Function_21d1350(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_201dcac();
  Function_200c800();
  Function_2003694(*(uint *)(v1 + 12));
  Function_201c2b8(*(uint *)(v1 + 8));
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (021D1380) --------------------------------------------------------
uint __fastcall Function_21d1380(uint *a1, int a2, int a3, int a4)
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
  int *v15;
  char *v16;
  int v17;
  int v18;
  int v19;
  int v21;
  int v22;
  int v23;
  int v24;
  char v25;
  char v26;
  char v27;
  char v28;
  char v29;
  char v30;
  char v31;
  int v32;

  v32 = a4;
  v4 = a1;
  Function_201ff00();
  Function_201ff68();
  v5 = dword_21D47A8;
  v6 = &v25;
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
  GX_SetBanks((int *)&v25);
  MIi_CpuClear32(0, (uint *)0x6000000, 0x80000);
  MIi_CpuClear32(0, (uint *)0x6200000, 0x20000);
  MIi_CpuClear32(0, (uint *)0x6400000, 0x40000);
  MIi_CpuClear32(0, (uint *)0x6600000, 0x20000);
  v21 = 1;
  v22 = 3;
  v23 = 0;
  v24 = 1;
  SetGraphicsModes(&v21);
  v10 = dword_21D4824;
  v11 = &v29;
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
  Function_20183c4(v4, 1u, (int *)&v29, 0);
  Function_2019ebc(v4, 1u);
  Function_2019184((int)v4, 1u, 0, 0);
  Function_2019184((int)v4, 1u, 3u, 0);
  Function_20183c4(v4, 2u, (int *)&v30, 0);
  Function_2019ebc(v4, 2u);
  Function_2019184((int)v4, 2u, 0, 0);
  Function_2019184((int)v4, 2u, 3u, 0);
  Function_20183c4(v4, 3u, (int *)&v31, 2);
  Function_2019184((int)v4, 3u, 0, 0);
  Function_2019184((int)v4, 3u, 3u, 0);
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 1;
  Function_201ff0c(1u, 1);
  v15 = dword_21D4878;
  v16 = &v26;
  v17 = 10;
  do
  {
    v18 = *v15;
    v19 = v15[1];
    v15 += 2;
    *(uint *)v16 = v18;
    *((uint *)v16 + 1) = v19;
    v16 += 8;
    --v17;
  }
  while ( v17 );
  *(uint *)v16 = *v15;
  Function_20183c4(v4, 5u, (int *)&v26, 0);
  Function_2019ebc(v4, 5u);
  Function_2019184((int)v4, 5u, 0, 0);
  Function_2019184((int)v4, 5u, 3u, 0);
  Function_20183c4(v4, 6u, (int *)&v27, 0);
  Function_2019ebc(v4, 6u);
  Function_2019184((int)v4, 6u, 0, 0);
  Function_2019184((int)v4, 6u, 3u, 0);
  Function_20183c4(v4, 7u, (int *)&v28, 0);
  Function_2019ebc(v4, 7u);
  Function_2019184((int)v4, 7u, 0, 0);
  Function_2019184((int)v4, 7u, 3u, 0);
  Function_2019690(1u, 32, 0, 0x4Bu);
  Function_2019690(5u, 32, 0, 0x4Bu);
  Function_2019690(6u, 32, 0, 0x4Bu);
  Function_2019690(7u, 32, 0, 0x4Bu);
  Function_2019120(3u, 0);
  return Function_2019120(6u, 0);
}

//----- (021D1580) --------------------------------------------------------
uint __fastcall Function_21d1580(uint *a1, int a2, int a3, int a4)
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
  Function_201ff68();
  v5 = dword_21D4780;
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
  v24 = 5;
  v25 = 0;
  v26 = 0;
  SetGraphicsModes(&v23);
  v10 = dword_21D47D0;
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
  Function_2019ebc(v4, 1u);
  Function_2019184((int)v4, 1u, 0, 0);
  Function_2019184((int)v4, 1u, 3u, 0);
  Function_20183c4(v4, 2u, (int *)&v29, 2);
  Function_2019ebc(v4, 2u);
  Function_2019184((int)v4, 2u, 0, 0);
  Function_2019184((int)v4, 2u, 3u, 0);
  Function_20183c4(v4, 3u, (int *)&v30, 2);
  Function_2019ebc(v4, 3u);
  Function_2019184((int)v4, 3u, 0, 0);
  Function_2019184((int)v4, 3u, 3u, 0);
  v16 = 0;
  v17 = 0;
  v18 = 0x2000;
  v19 = 0;
  v20 = 84148228;
  v21 = 768;
  v22 = 0;
  Function_20183c4(v4, 7u, &v16, 0);
  Function_2019ebc(v4, 7u);
  Function_2019184((int)v4, 7u, 0, 0);
  Function_2019184((int)v4, 7u, 3u, 0);
  return Function_2019690(7u, 32, 0, 0x4Bu);
}

//----- (021D16E4) --------------------------------------------------------
uint __fastcall Function_21d16e4(int a1)
{
  int v1;

  v1 = a1;
  Function_2003050(*(uint *)(a1 + 12), 127, 85, 75, 0, 32, 0xF0u);
  return Function_2003050(*(uint *)(v1 + 12), 127, 85, 75, 1, 32, 0xF0u);
}

//----- (021D1720) --------------------------------------------------------
int *__fastcall Function_21d1720(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v11;
  int v12[9];
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;

  v19 = a4;
  v4 = a1;
  v16 = 4096;
  v17 = 4096;
  v18 = 4096;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  MTX_Identity33_(v12);
  Call_G3X_Reset();
  Function_20203d4(*(uint *)(v4 + 40));
  Function_2020854(0, *(int **)(v4 + 40));
  Function_20203ec();
  v5 = *(uchar *)(v4 + 4353);
  if ( *(uchar *)(v4 + 4353) )
  {
    if ( v5 == 2 )
    {
      Function_20af51c(0, -2043, -3548, 110);
      Function_20af51c(2, 0, 0, 4096);
      Function_20af558(0, 21206);
      Function_20af558(2, 0);
      Function_20af56c(15855, 11625, 0);
      Function_20af590(16912, 14798, 0);
    }
    else if ( v5 == 4 )
    {
      Function_20af51c(0, 1897, -3600, -466);
      Function_20af51c(2, 0, 0, 4096);
      Function_20af558(0, 16747);
      Function_20af558(2, 0);
      Function_20af56c(16846, 10570, 0);
      Function_20af590(16846, 11528, 0);
    }
    else
    {
      Function_20af51c(0, 0, -4096, 0);
      Function_20af558(0, 29596);
      Function_20af56c(0x7FFF, 0x7FFF, 0);
      Function_20af590(0x7FFF, 0x7FFF, 0);
    }
  }
  else
  {
    Function_20af51c(0, 1897, -3600, -466);
    Function_20af51c(2, 0, 0, 4096);
    Function_20af558(0, 6556);
    Function_20af558(2, 0);
    Function_20af56c(15855, 12683, 0);
    Function_20af590(17969, 7432, 0);
  }
  Function_20af51c(3, 0, -4096, 0);
  Function_20af558(3, 29596);
  Function_20af4bc(&v13);
  MI_Copy36B(v12, dword_21C5B48);
  dword_21C5B88 &= 0xFFFFFF5B;
  Function_20af4ec(&v16);
  Function_20b275c(17, 0, 0);
  v6 = 0;
  v7 = v4 + 108;
  do
  {
    v8 = 0;
    v9 = v7;
    do
    {
      Function_2017294(v9);
      ++v8;
      v9 += 120;
    }
    while ( v8 < 16 );
    ++v6;
    v7 += 1920;
  }
  while ( v6 < 2 );
  v11 = 1;
  return Function_20b275c(18, (int)&v11, 1);
}

//----- (021D1918) --------------------------------------------------------
int __fastcall Function_21d1918(int a1)
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
  v9 = 0;
  v10 = -32768;
  v11 = 0;
  v6 = -31712;
  v7 = -142304;
  v8 = 496744;
  v3 = -31712;
  v4 = -67780;
  v5 = -5704;
  *(uint *)(a1 + 40) = Function_20203ac(0x4Bu);
  Function_20206d0(&v9, 507904, dword_21D46CC, 4004, 0, 0, *(uint *)(v1 + 40));
  Function_2020adc(&v6, *(uint **)(v1 + 40));
  Function_2020acc(&v3, *(uint **)(v1 + 40));
  Function_20206bc(4096, 3686400, *(uint *)(v1 + 40));
  return Function_20203d4(*(uint *)(v1 + 40));
}

//----- (021D19A0) --------------------------------------------------------
uint __fastcall Function_21d19a0(int a1)
{
  return Call_free5(*(uint *)(a1 + 40));
}

//----- (021D19AC) --------------------------------------------------------
int __fastcall Function_21d19ac(uint a1)
{
  return Function_2024220(a1, 0, 1, 0, 1, (void (*)(void))Function_21d19c8);
}

//----- (021D19C8) --------------------------------------------------------
int *Function_21d19c8()
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

//----- (021D1A4C) --------------------------------------------------------
uint __fastcall Function_21d1a4c(int a1)
{
  return Function_20242c4(a1);
}

//----- (021D1A54) --------------------------------------------------------
uint __fastcall Function_21d1a54(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = a1;
  if ( **(uint **)a1 )
  {
    v2 = Function_200cdc4(
           *(uint *)(a1 + 12),
           2u,
           *(uint **)(a1 + 24),
           *(uint *)(a1 + 28),
           *(uint *)(a1 + 4344),
           0x24u,
           0,
           1,
           1,
           10001);
    Function_200cc3c(*(uint **)(v1 + 24), *(uint *)(v1 + 28), *(uint *)(v1 + 4344), 0x21u, 0, 1, 10001);
    Function_200ce24(*(uint **)(v1 + 24), *(uint *)(v1 + 28), *(uint *)(v1 + 4344), 0x22u, 0, 10001);
    Function_200ce54(*(uint **)(v1 + 24), *(uint *)(v1 + 28), *(uint *)(v1 + 4344), 0x23u, 0, 10001);
  }
  else
  {
    v2 = Function_200cdc4(
           *(uint *)(a1 + 12),
           2u,
           *(uint **)(a1 + 24),
           *(uint *)(a1 + 28),
           *(uint *)(a1 + 4344),
           0x1Fu,
           0,
           1,
           1,
           10001);
    Function_200cc3c(*(uint **)(v1 + 24), *(uint *)(v1 + 28), *(uint *)(v1 + 4344), 0x1Cu, 0, 1, 10001);
    Function_200ce24(*(uint **)(v1 + 24), *(uint *)(v1 + 28), *(uint *)(v1 + 4344), 0x1Du, 0, 10001);
    Function_200ce54(*(uint **)(v1 + 24), *(uint *)(v1 + 28), *(uint *)(v1 + 4344), 0x1Eu, 0, 10001);
  }
  result = *(uchar *)(v1 + 4353);
  if ( !*(uchar *)(v1 + 4353) )
    return Function_20039b0(*(uint *)(v1 + 12), 2, 16 * v2 & 0xFFFF, 0x10u, 4u, 0x199Cu);
  if ( result != 2 && result == 4 )
    result = Function_20039b0(*(uint *)(v1 + 12), 2, 16 * v2 & 0xFFFF, 0x10u, 4u, 0x416Bu);
  return result;
}

//----- (021D1B98) --------------------------------------------------------
int __fastcall Function_21d1b98(int a1)
{
  int v1;

  v1 = a1;
  Function_200d070(*(uint *)(a1 + 28), 10001);
  Function_200d080(*(uint *)(v1 + 28), 10001);
  Function_200d090(*(uint *)(v1 + 28), 10001);
  return Function_200d0a0(*(uint *)(v1 + 28), 10001);
}

//----- (021D1BC4) --------------------------------------------------------
int __fastcall Function_21d1bc4(int a1, int **a2, int **a3)
{
  int *v3;
  int **v4;
  int v5;
  int **v6;
  char *v7;
  int v8;
  int v9;
  int v10;
  int *v11;
  int *v12;
  uint v13;
  int v14;
  int v16;
  char v17;
  int v18;

  v3 = dword_21D4900;
  v4 = a3;
  v5 = a1;
  v6 = a2;
  v7 = &v17;
  v8 = 6;
  do
  {
    v9 = *v3;
    v10 = v3[1];
    v3 += 2;
    *(uint *)v7 = v9;
    *((uint *)v7 + 1) = v10;
    v7 += 8;
    --v8;
  }
  while ( v8 );
  *(uint *)v7 = *v3;
  MI_CpuFill8((ushort *)(v5 + 4372), 0, 8u);
  v11 = Function_200ce6c(*(uint **)(v5 + 24), *(uint *)(v5 + 28), (short *)&v17);
  Function_200d390((uint *)v11, 1);
  Function_200d324(*v11);
  *v6 = v11;
  v18 = 60;
  v12 = Function_200ce6c(*(uint **)(v5 + 24), *(uint *)(v5 + 28), (short *)&v17);
  Function_200d364(v12, 2u);
  Function_200d390((uint *)v12, 1);
  Function_200d324(*v12);
  *v4 = v12;
  if ( *(uint *)(v5 + 4340) )
    ErrorHandler();
  if ( **(uint **)v5 )
    v13 = 32;
  else
    v13 = 27;
  *(uint *)(v5 + 4340) = malloc(0x4Bu, 256);
  v14 = Function_20071b4(*(uint *)(v5 + 4344), v13, 0, &v16, 75);
  MI_CpuCopy32(*(int **)(v16 + 20), *(uint **)(v5 + 4340), 256);
  free(v14);
  return DC_FlushRange(*(uint *)(v5 + 4340), 256);
}

//----- (021D1C9C) --------------------------------------------------------
int __fastcall Function_21d1c9c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int result;

  v3 = a1;
  v4 = a3;
  Function_200d0f4(a2);
  Function_200d0f4(v4);
  result = *(uint *)(v3 + 4340);
  if ( result )
  {
    free(result);
    result = 4340;
    *(uint *)(v3 + 4340) = 0;
  }
  return result;
}

//----- (021D1CC8) --------------------------------------------------------
int __fastcall Function_21d1cc8(int a1, int a2)
{
  void **v2;
  int v3;

  v2 = &off_21D4A04 + 13 * a2;
  v3 = a1;
  ((void (*)(void))*(&off_21D4A04 + 13 * a2))();
  ((void (__fastcall *)(int))v2[1])(v3);
  ((void (__fastcall *)(int))v2[2])(v3);
  ((void (__fastcall *)(int))v2[3])(v3);
  ((void (__fastcall *)(int))v2[4])(v3);
  return ((int (__fastcall *)(int))v2[5])(v3);
}

//----- (021D1CFC) --------------------------------------------------------
int __fastcall Function_21d1cfc(int a1, int a2)
{
  void **v2;
  int v3;

  v2 = &off_21D4A04 + 13 * a2;
  v3 = a1;
  ((void (*)(void))v2[6])();
  ((void (__fastcall *)(int))v2[7])(v3);
  ((void (__fastcall *)(int))v2[8])(v3);
  ((void (__fastcall *)(int))v2[9])(v3);
  ((void (__fastcall *)(int))v2[10])(v3);
  return ((int (__fastcall *)(int))v2[11])(v3);
}

//----- (021D1D30) --------------------------------------------------------
int __fastcall Function_21d1d30(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = ((int (*)(void))*(&off_21D4A34 + 13 * a2))();
  if ( v3 == 1 )
    MI_CpuFill8((ushort *)(v2 + 4004), 0, 0x13Cu);
  return v3;
}

//----- (021D1D68) --------------------------------------------------------
int __fastcall Function_21d1d68(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 8);
  Function_2003050(*(uint *)(a1 + 12), 127, 18, 75, 0, 0, 0);
  Function_20070e8(*(uint *)(v1 + 4344), 9u, *(uint **)(v1 + 8), 2u, 0, 0, 0, 75);
  Function_200710c(*(uint *)(v1 + 4344), 3u, *(uint **)(v1 + 8), 2u, 0, 0, 0, 75);
  Function_2003050(*(uint *)(v1 + 12), 127, 21, 75, 1, 0, 0);
  Function_20070e8(*(uint *)(v1 + 4344), 0xCu, *(uint **)(v1 + 8), 7u, 0, 0, 0, 75);
  Function_200710c(*(uint *)(v1 + 4344), 6u, *(uint **)(v1 + 8), 7u, 0, 0, 0, 75);
  Function_2019184(v2, 2u, 0, 0);
  Function_2019184(v2, 2u, 3u, 0);
  Function_2019184(v2, 7u, 0, 0);
  Function_2019184(v2, 7u, 3u, 0);
  Function_2019120(2u, 1);
  Function_2019120(7u, 1);
  Function_201ff0c(1u, 1);
  Function_201ff0c(0x10u, 1);
  Function_201c3c0(*(uint *)(v1 + 8), 2);
  return Function_201c3c0(*(uint *)(v1 + 8), 7);
}

//----- (021D1E6C) --------------------------------------------------------
uint Function_21d1e6c()
{
  Function_2019120(2u, 0);
  Function_2019120(7u, 0);
  Function_201ff0c(1u, 0);
  return Function_201ff0c(0x10u, 0);
}

//----- (021D1E90) --------------------------------------------------------
uint __fastcall Function_21d1e90(int a1)
{
  return Function_21d1a54(a1);
}

//----- (021D1E98) --------------------------------------------------------
int __fastcall Function_21d1e98(int a1)
{
  return Function_21d1b98(a1);
}

//----- (021D1EA0) --------------------------------------------------------
int __fastcall Function_21d1ea0(int a1)
{
  return Function_21d1bc4(a1, (int **)(a1 + 4320), (int **)(a1 + 4324));
}

//----- (021D1EB4) --------------------------------------------------------
int __fastcall Function_21d1eb4(int a1)
{
  return Function_21d1c9c(a1, *(uint *)(a1 + 4320), *(uint *)(a1 + 4324));
}

//----- (021D1EC8) --------------------------------------------------------
int __fastcall Function_21d1ec8(int a1)
{
  int v1;

  v1 = a1;
  Function_200cdc4(
    *(uint *)(a1 + 12),
    3u,
    *(uint **)(v1 + 24),
    *(uint *)(v1 + 28),
    *(uint *)(a1 + 4344),
    0xFu,
    0,
    10,
    2,
    10003);
  Function_200cc3c(*(uint **)(v1 + 24), *(uint *)(v1 + 28), *(uint *)(v1 + 4344), 0, 0, 2, 10003);
  Function_200ce24(*(uint **)(v1 + 24), *(uint *)(v1 + 28), *(uint *)(v1 + 4344), 1u, 0, 10003);
  return Function_200ce54(*(uint **)(v1 + 24), *(uint *)(v1 + 28), *(uint *)(v1 + 4344), 2u, 0, 10003);
}

//----- (021D1F44) --------------------------------------------------------
int __fastcall Function_21d1f44(int a1)
{
  int v1;

  v1 = a1;
  Function_200d070(*(uint *)(a1 + 28), 10003);
  Function_200d080(*(uint *)(v1 + 28), 10003);
  Function_200d090(*(uint *)(v1 + 28), 10003);
  return Function_200d0a0(*(uint *)(v1 + 28), 10003);
}

//----- (021D1F70) --------------------------------------------------------
uint __fastcall Function_21d1f70(int a1)
{
  int v1;
  int v2;
  int v3;
  uint result;

  v1 = a1;
  v2 = 2;
  v3 = a1 + 8;
  do
  {
    *(uint *)(v3 + 4320) = Function_200ce6c(
                               *(uint **)(v1 + 24),
                               *(uint *)(v1 + 28),
                               (short *)dword_21D499C);
    Function_200d6a4(*(uint **)(v3 + 4320), 2);
    Function_200d390(*(uint **)(v3 + 4320), 1);
    result = Function_200d324(**(uint **)(v3 + 4320));
    ++v2;
    v3 += 4;
  }
  while ( v2 <= 4 );
  return result;
}

//----- (021D1FB8) --------------------------------------------------------
uint __fastcall Function_21d1fb8(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = 2;
  v2 = a1 + 8;
  do
  {
    result = Function_200d0f4(*(uint *)(v2 + 4320));
    ++v1;
    v2 += 4;
  }
  while ( v1 <= 4 );
  return result;
}

//----- (021D1FD8) --------------------------------------------------------
int __fastcall Function_21d1fd8(int a1)
{
  int v1;
  int v2;
  int *v3;
  int v4;
  int *v5;
  int result;

  v1 = a1;
  Function_20170d8((int *)(a1 + 44), *(uint *)(a1 + 4344), 0x50u, 75);
  Function_20b2ce4(*(uint *)(v1 + 52), 0, 64);
  Function_20b2ce4(*(uint *)(v1 + 52), 0, 128);
  Function_20b2ce4(*(uint *)(v1 + 52), 0, 512);
  Function_20b2ce4(*(uint *)(v1 + 52), 0, 1024);
  Function_20170d8((int *)(v1 + 60), *(uint *)(v1 + 4344), 0x51u, 75);
  Function_20b2ce4(*(uint *)(v1 + 68), 0, 64);
  Function_20b2ce4(*(uint *)(v1 + 68), 0, 128);
  Function_20b2ce4(*(uint *)(v1 + 68), 0, 512);
  Function_20b2ce4(*(uint *)(v1 + 68), 0, 1024);
  v2 = 0;
  v3 = (int *)(v1 + 108);
  do
  {
    Function_2017258(v3, v1 + 44);
    Function_2017350(v3, 0, 0, 0);
    Function_201736c(v3, 4096, 4096, 4096);
    Function_2017348((int)v3, 1);
    ++v2;
    v3 += 30;
  }
  while ( v2 < 16 );
  v4 = 0;
  v5 = (int *)(v1 + 2028);
  do
  {
    Function_2017258(v5, v1 + 60);
    Function_2017350(v5, 0, 0, 0);
    Function_201736c(v5, 4096, 4096, 4096);
    Function_2017348((int)v5, 1);
    ++v4;
    v5 += 30;
  }
  while ( v4 < 16 );
  *(uchar *)(v1 + 4356) = 2;
  Function_21d4134(v1, 0);
  Function_21d4170(v1);
  result = 4355;
  *(uchar *)(v1 + 4355) = 1;
  return result;
}

//----- (021D20F8) --------------------------------------------------------
int __fastcall Function_21d20f8(int a1)
{
  int v1;
  int v2;
  int *v3;
  int result;

  v1 = a1;
  v2 = 0;
  v3 = (int *)(a1 + 44);
  do
  {
    Function_2017110(v3);
    ++v2;
    v3 += 4;
  }
  while ( v2 < 4 );
  result = 4355;
  *(uchar *)(v1 + 4355) = 0;
  return result;
}

//----- (021D211C) --------------------------------------------------------
int __fastcall Function_21d211c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 4357);
  Function_21d439c();
  ++*(uchar *)(v1 + 4357);
  Function_2019120(3u, 1);
  return Function_201c3c0(*(uint *)(v1 + 8), 2);
}

//----- (021D214C) --------------------------------------------------------
uint Function_21d214c()
{
  return Function_2019120(3u, 0);
}

//----- (021D2158) --------------------------------------------------------
void Function_21d2158()
{
  ;
}

//----- (021D215C) --------------------------------------------------------
void Function_21d215c()
{
  ;
}

//----- (021D2160) --------------------------------------------------------
void Function_21d2160()
{
  ;
}

//----- (021D2164) --------------------------------------------------------
void Function_21d2164()
{
  ;
}

//----- (021D2168) --------------------------------------------------------
void Function_21d2168()
{
  ;
}

//----- (021D216C) --------------------------------------------------------
void Function_21d216c()
{
  ;
}

//----- (021D2170) --------------------------------------------------------
void Function_21d2170()
{
  ;
}

//----- (021D2174) --------------------------------------------------------
void Function_21d2174()
{
  ;
}

//----- (021D2178) --------------------------------------------------------
void Function_21d2178()
{
  ;
}

//----- (021D217C) --------------------------------------------------------
void Function_21d217c()
{
  ;
}

//----- (021D2180) --------------------------------------------------------
int __fastcall Function_21d2180(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  short v7;
  int v9;
  int v10;

  v10 = a4;
  v4 = a1;
  v5 = *(uint *)(a1 + 8);
  Function_2003050(*(uint *)(a1 + 12), 127, 19, 75, 0, 0, 0);
  Function_20070e8(*(uint *)(v4 + 4344), 0xAu, *(uint **)(v4 + 8), 2u, 0, 0, 0, 75);
  Function_200710c(*(uint *)(v4 + 4344), 4u, *(uint **)(v4 + 8), 2u, 0, 0, 0, 75);
  Function_2003050(*(uint *)(v4 + 12), 127, 22, 75, 1, 0, 0);
  Function_20070e8(*(uint *)(v4 + 4344), 0xDu, *(uint **)(v4 + 8), 7u, 0, 0, 0, 75);
  Function_200710c(*(uint *)(v4 + 4344), 7u, *(uint **)(v4 + 8), 7u, 0, 0, 0, 75);
  v6 = Function_20071ec(*(uint *)(v4 + 4344), 0x10u, &v9, 75);
  MIi_CpuCopy16(*(uint *)(v9 + 12), v4 + 4020, 128, v7);
  free(v6);
  Function_2019184(v5, 2u, 0, 0);
  Function_2019184(v5, 2u, 3u, 0);
  Function_2019184(v5, 7u, 0, 0);
  Function_2019184(v5, 7u, 3u, 0);
  Function_2019120(2u, 1);
  Function_2019120(7u, 1);
  Function_201ff0c(1u, 1);
  Function_201ff0c(0x10u, 1);
  Function_201c3c0(*(uint *)(v4 + 8), 2);
  return Function_201c3c0(*(uint *)(v4 + 8), 7);
}

//----- (021D22AC) --------------------------------------------------------
uint Function_21d22ac()
{
  Function_2019120(2u, 0);
  Function_2019120(7u, 0);
  Function_201ff0c(1u, 0);
  return Function_201ff0c(0x10u, 0);
}

//----- (021D22D0) --------------------------------------------------------
uint __fastcall Function_21d22d0(int a1)
{
  return Function_21d1a54(a1);
}

//----- (021D22D8) --------------------------------------------------------
int __fastcall Function_21d22d8(int a1)
{
  return Function_21d1b98(a1);
}

//----- (021D22E0) --------------------------------------------------------
int __fastcall Function_21d22e0(int a1)
{
  return Function_21d1bc4(a1, (int **)(a1 + 4320), (int **)(a1 + 4324));
}

//----- (021D22F4) --------------------------------------------------------
int __fastcall Function_21d22f4(int a1)
{
  return Function_21d1c9c(a1, *(uint *)(a1 + 4320), *(uint *)(a1 + 4324));
}

//----- (021D2308) --------------------------------------------------------
int __fastcall Function_21d2308(int a1)
{
  int v1;

  v1 = a1;
  Function_200cdc4(
    *(uint *)(a1 + 12),
    3u,
    *(uint **)(v1 + 24),
    *(uint *)(v1 + 28),
    *(uint *)(a1 + 4344),
    0xFu,
    0,
    10,
    2,
    10004);
  Function_200cc3c(*(uint **)(v1 + 24), *(uint *)(v1 + 28), *(uint *)(v1 + 4344), 0, 0, 2, 10004);
  Function_200ce24(*(uint **)(v1 + 24), *(uint *)(v1 + 28), *(uint *)(v1 + 4344), 1u, 0, 10004);
  return Function_200ce54(*(uint **)(v1 + 24), *(uint *)(v1 + 28), *(uint *)(v1 + 4344), 2u, 0, 10004);
}

//----- (021D2384) --------------------------------------------------------
int __fastcall Function_21d2384(int a1)
{
  int v1;

  v1 = a1;
  Function_200d070(*(uint *)(a1 + 28), 10004);
  Function_200d080(*(uint *)(v1 + 28), 10004);
  Function_200d090(*(uint *)(v1 + 28), 10004);
  return Function_200d0a0(*(uint *)(v1 + 28), 10004);
}

//----- (021D23B0) --------------------------------------------------------
uint __fastcall Function_21d23b0(int a1)
{
  int v1;
  int v2;
  int v3;
  uint result;

  v1 = a1;
  v2 = 2;
  v3 = a1 + 8;
  do
  {
    *(uint *)(v3 + 4320) = Function_200ce6c(
                               *(uint **)(v1 + 24),
                               *(uint *)(v1 + 28),
                               (short *)&dword_21D4968);
    Function_200d390(*(uint **)(v3 + 4320), 1);
    result = Function_200d324(**(uint **)(v3 + 4320));
    ++v2;
    v3 += 4;
  }
  while ( v2 <= 3 );
  return result;
}

//----- (021D23F0) --------------------------------------------------------
uint __fastcall Function_21d23f0(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = 2;
  v2 = a1 + 8;
  do
  {
    result = Function_200d0f4(*(uint *)(v2 + 4320));
    ++v1;
    v2 += 4;
  }
  while ( v1 <= 3 );
  return result;
}

//----- (021D2410) --------------------------------------------------------
int __fastcall Function_21d2410(int a1)
{
  int v1;
  int v2;
  int *v3;
  int v4;
  int v5;
  int result;

  v1 = a1;
  Function_20170d8((int *)(a1 + 44), *(uint *)(a1 + 4344), 0x4Eu, 75);
  Function_20b2ce4(*(uint *)(v1 + 52), 0, 64);
  Function_20b2ce4(*(uint *)(v1 + 52), 0, 128);
  Function_20b2ce4(*(uint *)(v1 + 52), 0, 512);
  Function_20b2ce4(*(uint *)(v1 + 52), 0, 1024);
  v2 = 0;
  v3 = (int *)(v1 + 108);
  do
  {
    Function_2017258(v3, v1 + 44);
    Function_2017350(v3, 0, 0, 0);
    Function_201736c(v3, 4096, 4096, 4096);
    Function_2017348((int)v3, 1);
    ++v2;
    v3 += 30;
  }
  while ( v2 < 16 );
  v4 = 0;
  v5 = v1 + 2028;
  do
  {
    Function_2017348(v5, 0);
    ++v4;
    v5 += 120;
  }
  while ( v4 < 16 );
  *(uchar *)(v1 + 4356) = 1;
  Function_21d4134(v1, 1);
  Function_21d4170(v1);
  result = 4355;
  *(uchar *)(v1 + 4355) = 1;
  return result;
}

//----- (021D24CC) --------------------------------------------------------
int __fastcall Function_21d24cc(int a1)
{
  int v1;
  int v2;
  int *v3;
  int result;

  v1 = a1;
  v2 = 0;
  v3 = (int *)(a1 + 44);
  do
  {
    Function_2017110(v3);
    ++v2;
    v3 += 4;
  }
  while ( v2 < 4 );
  result = 4355;
  *(uchar *)(v1 + 4355) = 0;
  return result;
}

//----- (021D24F0) --------------------------------------------------------
int __fastcall Function_21d24f0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  short v7;
  int v9;
  int v10;

  v10 = a4;
  v4 = a1;
  v5 = *(uint *)(a1 + 8);
  Function_2003050(*(uint *)(a1 + 12), 127, 20, 75, 0, 0, 0);
  Function_20070e8(*(uint *)(v4 + 4344), 0xBu, *(uint **)(v4 + 8), 2u, 0, 0, 0, 75);
  Function_200710c(*(uint *)(v4 + 4344), 5u, *(uint **)(v4 + 8), 2u, 0, 0, 0, 75);
  Function_2003050(*(uint *)(v4 + 12), 127, 23, 75, 1, 0, 0);
  Function_20070e8(*(uint *)(v4 + 4344), 0xEu, *(uint **)(v4 + 8), 7u, 0, 0, 0, 75);
  Function_200710c(*(uint *)(v4 + 4344), 8u, *(uint **)(v4 + 8), 7u, 0, 0, 0, 75);
  v6 = Function_20071ec(*(uint *)(v4 + 4344), 0x11u, &v9, 75);
  MIi_CpuCopy16(*(uint *)(v9 + 12), v4 + 4020, 256, v7);
  free(v6);
  Function_2002fbc(*(uint *)(v4 + 12), v4 + 4020, 0, 16, 0x20u);
  Function_2002fbc(*(uint *)(v4 + 12), v4 + 4020, 1, 16, 0x20u);
  Function_2019184(v5, 2u, 0, 0);
  Function_2019184(v5, 2u, 3u, 0);
  Function_2019184(v5, 7u, 0, 0);
  Function_2019184(v5, 7u, 3u, 0);
  Function_2019120(2u, 1);
  Function_2019120(7u, 1);
  Function_201ff0c(1u, 1);
  Function_201ff0c(0x10u, 1);
  Function_201c3c0(*(uint *)(v4 + 8), 2);
  return Function_201c3c0(*(uint *)(v4 + 8), 7);
}

//----- (021D2640) --------------------------------------------------------
uint Function_21d2640()
{
  Function_2019120(2u, 0);
  Function_2019120(7u, 0);
  Function_201ff0c(1u, 0);
  return Function_201ff0c(0x10u, 0);
}

//----- (021D2664) --------------------------------------------------------
int __fastcall Function_21d2664(int a1)
{
  int v1;

  v1 = a1;
  Function_21d1a54(a1);
  Function_200cdc4(
    *(uint *)(v1 + 12),
    2u,
    *(uint **)(v1 + 24),
    *(uint *)(v1 + 28),
    *(uint *)(v1 + 4344),
    0xFu,
    0,
    4,
    1,
    10002);
  Function_200cc3c(*(uint **)(v1 + 24), *(uint *)(v1 + 28), *(uint *)(v1 + 4344), 0, 0, 1, 10002);
  Function_200ce24(*(uint **)(v1 + 24), *(uint *)(v1 + 28), *(uint *)(v1 + 4344), 1u, 0, 10002);
  return Function_200ce54(*(uint **)(v1 + 24), *(uint *)(v1 + 28), *(uint *)(v1 + 4344), 2u, 0, 10002);
}

//----- (021D26E4) --------------------------------------------------------
int __fastcall Function_21d26e4(int a1)
{
  int v1;

  v1 = a1;
  Function_200d070(*(uint *)(a1 + 28), 10002);
  Function_200d080(*(uint *)(v1 + 28), 10002);
  Function_200d090(*(uint *)(v1 + 28), 10002);
  Function_200d0a0(*(uint *)(v1 + 28), 10002);
  return Function_21d1b98(v1);
}

//----- (021D2714) --------------------------------------------------------
uint __fastcall Function_21d2714(int a1)
{
  int v1;

  v1 = a1;
  Function_21d1bc4(a1, (int **)(a1 + 4320), (int **)(a1 + 4324));
  *(uint *)(v1 + 4332) = Function_200ce6c(
                             *(uint **)(v1 + 24),
                             *(uint *)(v1 + 28),
                             (short *)&dword_21D49D0);
  Function_200d390(*(uint **)(v1 + 4332), 1);
  Function_200d3f4(*(uint **)(v1 + 4332), 0);
  return Function_200d324(**(uint **)(v1 + 4332));
}

//----- (021D275C) --------------------------------------------------------
uint __fastcall Function_21d275c(int a1)
{
  int v1;

  v1 = a1;
  Function_21d1c9c(a1, *(uint *)(a1 + 4320), *(uint *)(a1 + 4324));
  return Function_200d0f4(*(uint *)(v1 + 4332));
}

//----- (021D2780) --------------------------------------------------------
int __fastcall Function_21d2780(int a1)
{
  int v1;

  v1 = a1;
  Function_200cdc4(
    *(uint *)(a1 + 12),
    3u,
    *(uint **)(v1 + 24),
    *(uint *)(v1 + 28),
    *(uint *)(a1 + 4344),
    0xFu,
    0,
    10,
    2,
    10005);
  Function_200cc3c(*(uint **)(v1 + 24), *(uint *)(v1 + 28), *(uint *)(v1 + 4344), 0, 0, 2, 10005);
  Function_200ce24(*(uint **)(v1 + 24), *(uint *)(v1 + 28), *(uint *)(v1 + 4344), 1u, 0, 10005);
  return Function_200ce54(*(uint **)(v1 + 24), *(uint *)(v1 + 28), *(uint *)(v1 + 4344), 2u, 0, 10005);
}

//----- (021D27FC) --------------------------------------------------------
int __fastcall Function_21d27fc(int a1)
{
  int v1;

  v1 = a1;
  Function_200d070(*(uint *)(a1 + 28), 10005);
  Function_200d080(*(uint *)(v1 + 28), 10005);
  Function_200d090(*(uint *)(v1 + 28), 10005);
  return Function_200d0a0(*(uint *)(v1 + 28), 10005);
}

//----- (021D2828) --------------------------------------------------------
uint __fastcall Function_21d2828(int a1)
{
  int v1;

  v1 = a1;
  *(uint *)(a1 + 4328) = Function_200ce6c(
                             *(uint **)(a1 + 24),
                             *(uint *)(a1 + 28),
                             (short *)&dword_21D4934);
  Function_200d390(*(uint **)(v1 + 4328), 1);
  Function_200d324(**(uint **)(v1 + 4328));
  *(uint *)(v1 + 4336) = Function_200ce6c(
                             *(uint **)(v1 + 24),
                             *(uint *)(v1 + 28),
                             (short *)&dword_21D48CC);
  Function_200d390(*(uint **)(v1 + 4336), 1);
  Function_200d3f4(*(uint **)(v1 + 4336), 0);
  return Function_200d324(**(uint **)(v1 + 4336));
}

//----- (021D288C) --------------------------------------------------------
uint __fastcall Function_21d288c(int a1)
{
  int v1;

  v1 = a1;
  Function_200d0f4(*(uint *)(a1 + 4328));
  return Function_200d0f4(*(uint *)(v1 + 4336));
}

//----- (021D28AC) --------------------------------------------------------
int __fastcall Function_21d28ac(int a1)
{
  int v1;
  int v2;
  int *v3;
  int v4;
  int *v5;
  int result;

  v1 = a1;
  Function_20170d8((int *)(a1 + 44), *(uint *)(a1 + 4344), 0x52u, 75);
  Function_20b2ce4(*(uint *)(v1 + 52), 0, 64);
  Function_20b2ce4(*(uint *)(v1 + 52), 0, 128);
  Function_20b2ce4(*(uint *)(v1 + 52), 0, 512);
  Function_20b2ce4(*(uint *)(v1 + 52), 0, 1024);
  Function_20170d8((int *)(v1 + 60), *(uint *)(v1 + 4344), 0x53u, 75);
  Function_20b2ce4(*(uint *)(v1 + 68), 0, 64);
  Function_20b2ce4(*(uint *)(v1 + 68), 0, 128);
  Function_20b2ce4(*(uint *)(v1 + 68), 0, 512);
  Function_20b2ce4(*(uint *)(v1 + 68), 0, 1024);
  Function_20170d8((int *)(v1 + 76), *(uint *)(v1 + 4344), 0x54u, 75);
  Function_20b2ce4(*(uint *)(v1 + 84), 0, 64);
  Function_20b2ce4(*(uint *)(v1 + 84), 0, 128);
  Function_20b2ce4(*(uint *)(v1 + 84), 0, 512);
  Function_20b2ce4(*(uint *)(v1 + 84), 0, 1024);
  Function_20170d8((int *)(v1 + 92), *(uint *)(v1 + 4344), 0x4Fu, 75);
  v2 = 0;
  v3 = (int *)(v1 + 108);
  do
  {
    Function_2017258(v3, v1 + 44);
    Function_2017350(v3, 0, 0, 0);
    Function_201736c(v3, 4096, 4096, 4096);
    Function_2017348((int)v3, 1);
    ++v2;
    v3 += 30;
  }
  while ( v2 < 16 );
  v4 = 0;
  v5 = (int *)(v1 + 2028);
  do
  {
    Function_2017258(v5, v1 + 76);
    Function_2017350(v5, 0, 0, 0);
    Function_201736c(v5, 4096, 4096, 4096);
    Function_2017348((int)v5, 1);
    ++v4;
    v5 += 30;
  }
  while ( v4 < 16 );
  *(uchar *)(v1 + 4356) = 2;
  Function_21d4134(v1, 2);
  Function_21d4170(v1);
  result = 4355;
  *(uchar *)(v1 + 4355) = 1;
  return result;
}

//----- (021D2A14) --------------------------------------------------------
int __fastcall Function_21d2a14(int a1)
{
  int v1;
  int v2;
  int *v3;
  int result;

  v1 = a1;
  v2 = 0;
  v3 = (int *)(a1 + 44);
  do
  {
    Function_2017110(v3);
    ++v2;
    v3 += 4;
  }
  while ( v2 < 4 );
  result = 4355;
  *(uchar *)(v1 + 4355) = 0;
  return result;
}

//----- (021D2A38) --------------------------------------------------------
int __fastcall Function_21d2a38(int *a1)
{
  int *v1;

  v1 = a1;
  Function_21d12f0(a1);
  *((uchar *)v1 + 4357) = 0;
  Function_21d439c(v1, *((uchar *)v1 + 4357), 2, 1);
  ++*((uchar *)v1 + 4357);
  Function_2019120(2u, 1);
  return Function_201c3c0(v1[2], 2);
}

//----- (021D2A70) --------------------------------------------------------
uint Function_21d2a70()
{
  Function_2019120(2u, 0);
  return Function_2019120(3u, 0);
}

//----- (021D2A84) --------------------------------------------------------
void Function_21d2a84()
{
  ;
}

//----- (021D2A88) --------------------------------------------------------
void Function_21d2a88()
{
  ;
}

//----- (021D2A8C) --------------------------------------------------------
void Function_21d2a8c()
{
  ;
}

//----- (021D2A90) --------------------------------------------------------
void Function_21d2a90()
{
  ;
}

//----- (021D2A94) --------------------------------------------------------
void Function_21d2a94()
{
  ;
}

//----- (021D2A98) --------------------------------------------------------
void Function_21d2a98()
{
  ;
}

//----- (021D2A9C) --------------------------------------------------------
void Function_21d2a9c()
{
  ;
}

//----- (021D2AA0) --------------------------------------------------------
void Function_21d2aa0()
{
  ;
}

//----- (021D2AA4) --------------------------------------------------------
void Function_21d2aa4()
{
  ;
}

//----- (021D2AA8) --------------------------------------------------------
void Function_21d2aa8()
{
  ;
}

//----- (021D2AAC) --------------------------------------------------------
int __fastcall Function_21d2aac(int a1)
{
  int v1;
  uint *v2;
  int v3;
  uint v4;
  ushort *v5;
  int v6;

  v1 = a1;
  v2 = *(uint **)(a1 + 8);
  byte_21BF6E1 = 0;
  Function_201ffe8();
  Function_20038b0(*(uint *)(v1 + 12), 0, 2, 0, 0, 1u);
  *(uint *)(v1 + 36) = Function_201a778(0x4Bu, 1);
  Function_201a7e8(v2, *(uint *)(v1 + 36), 7, 0, 0, 0x20u, 0x20u, 15, 0);
  Function_201ada4_ClearTextBox(*(uint *)(v1 + 36), 15);
  v3 = Function_201a9f4(*(uint *)(v1 + 36));
  v4 = Function_21d4130(v3);
  v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 32), v4);
  Function_2002d7c(0, (int)v5, 0);
  Function_201d7e0(*(uint *)(v1 + 36), 0);
  Function_201accc(*(uint *)(v1 + 36));
  Function_20237bc_FreeMsg((int)v5, v6);
  Function_2019184((int)v2, 7u, 0, 0);
  Function_2019184((int)v2, 7u, 3u, 0);
  Function_2019120(7u, 1);
  REG_DISPCNT &= 0xFFFF1FFF;
  REG_DISPCNT_SUB &= 0xFFFF1FFF;
  SetBrightness(0, -16);
  SetBrightness(1, -16);
  Function_200ab4c(0, 61, 3);
  return Function_201c3c0(*(uint *)(v1 + 8), 7);
}

//----- (021D2BBC) --------------------------------------------------------
int __fastcall Function_21d2bbc(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_2019120(7u, 0);
  result = *(uint *)(v1 + 36);
  if ( result )
  {
    Function_201a8fc(result);
    free(*(uint *)(v1 + 36));
    result = 0;
    *(uint *)(v1 + 36) = 0;
  }
  return result;
}

//----- (021D2BE0) --------------------------------------------------------
void Function_21d2be0()
{
  ;
}

//----- (021D2BE4) --------------------------------------------------------
void Function_21d2be4()
{
  ;
}

//----- (021D2BE8) --------------------------------------------------------
void Function_21d2be8()
{
  ;
}

//----- (021D2BEC) --------------------------------------------------------
void Function_21d2bec()
{
  ;
}

//----- (021D2BF0) --------------------------------------------------------
void Function_21d2bf0()
{
  ;
}

//----- (021D2BF4) --------------------------------------------------------
void Function_21d2bf4()
{
  ;
}

//----- (021D2BF8) --------------------------------------------------------
void Function_21d2bf8()
{
  ;
}

//----- (021D2BFC) --------------------------------------------------------
void Function_21d2bfc()
{
  ;
}

//----- (021D2C00) --------------------------------------------------------
void Function_21d2c00()
{
  ;
}

//----- (021D2C04) --------------------------------------------------------
void Function_21d2c04()
{
  ;
}

//----- (021D2C08) --------------------------------------------------------
int __fastcall Function_21d2c08(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = *a2;
  v4 = a1;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      if ( *(uint *)(a1 + 4348) >= 0x726u )
      {
        Function_200aae0(24, -16, 0, 61, 3);
        ++*v2;
      }
    }
    else if ( v3 == 2 && Function_200ac1c(3) == 1 )
    {
      return 1;
    }
  }
  else
  {
    Function_21d2cb0();
    Function_200aae0(24, 0, -16, 61, 3);
    ++*v2;
  }
  Function_21d44cc(v4, *(uint *)(v4 + 4320));
  Function_21d2cec(v4, v2 + 2);
  Function_21d425c(v4, -1);
  Function_21d2df4(v4, v2 + 2);
  return 0;
}

//----- (021D2CB0) --------------------------------------------------------
int __fastcall Function_21d2cb0(int a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  int result;

  v2 = &dword_21D4B70;
  v3 = a2;
  v4 = 2;
  v5 = a1 + 8;
  do
  {
    Function_200d650(*(int **)(v5 + 4320), v2[1], v2[2], 1114112);
    ++v4;
    *(uint *)(v3 + 8) = v2[1];
    result = v2[2];
    v5 += 4;
    *(uint *)(v3 + 12) = result;
    v2 += 9;
    v3 += 20;
  }
  while ( v4 <= 4 );
  return result;
}

//----- (021D2CEC) --------------------------------------------------------
int __fastcall Function_21d2cec(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;
  int v7;

  v2 = a1;
  v7 = a2;
  v3 = 0;
  v4 = 2;
  v5 = a1 + 8;
  do
  {
    result = Function_21d2d18(v2, v7, *(uint *)(v5 + 4320), v3);
    ++v4;
    v5 += 4;
    ++v3;
  }
  while ( v4 <= 4 );
  return result;
}

//----- (021D2D18) --------------------------------------------------------
int __fastcall Function_21d2d18(int a1, int a2, int *a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int result;
  int v8;
  int v9;
  int v10;
  long long v11;
  int v12;
  int v13;
  int v14;
  int *v15;

  v4 = a2 + 8 + 20 * a4;
  v15 = a3;
  v5 = &dword_21D4B70[9 * a4];
  v6 = *(uint *)(v4 + 12);
  if ( v6 >= dword_21D4B70[9 * a4] )
  {
    v8 = *(uint *)(v4 + 8) + v5[5];
    *(uint *)(v4 + 8) = v8;
    if ( v8 >= 1474560 )
      *(uint *)(v4 + 8) -= 1474560;
    v9 = v5[6];
    v10 = Function_201d2b8(*(uint *)(v4 + 8));
    *(uint *)v4 += v5[3];
    *(uint *)(v4 + 4) += v5[4];
    v11 = ll_mul(v10, v9);
    Function_200d650(v15, *(uint *)v4, *(uint *)(v4 + 4) + (ull)((v11 + 2048) >> 12), 1114112);
    if ( *(uchar *)(v4 + 18) )
    {
      v12 = fsub(0, v5[7]);
      v13 = fsub(0, v5[7]);
      Function_200d74c(v15, v12, v13);
    }
    else
    {
      Function_200d74c(v15, v5[7], v5[7]);
    }
    ++*(ushort *)(v4 + 16);
    result = *((ushort *)v5 + 16);
    if ( *(short *)(v4 + 16) >= result )
    {
      *(ushort *)(v4 + 16) = 0;
      v14 = *(char *)(v4 + 18);
      result = v14 ^ 1;
      *(uchar *)(v4 + 18) = v14 ^ 1;
    }
  }
  else
  {
    result = v6 + 1;
    *(uint *)(v4 + 12) = v6 + 1;
  }
  return result;
}

//----- (021D2DF4) --------------------------------------------------------
void __fastcall Function_21d2df4(int a1, int *a2)
{
  int *v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = a1;
  v4 = *a2 - 64;
  *a2 = v4;
  Function_2019184(*(uint *)(a1 + 8), 2u, 0, v4 / 4096);
  Function_2019184(*(uint *)(v3 + 8), 7u, 0, *v2 / 4096);
}

//----- (021D2E28) --------------------------------------------------------
int __fastcall Function_21d2e28(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = *a2;
  v4 = a1;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      if ( *(uint *)(a1 + 4348) >= 0x1770u )
      {
        Function_200aae0(24, -16, 0, 61, 3);
        ++*v2;
      }
    }
    else if ( v3 == 2 && Function_200ac1c(3) == 1 )
    {
      return 1;
    }
  }
  else
  {
    Function_21d2ed8();
    Function_200aae0(24, 0, -16, 61, 3);
    ++*v2;
  }
  Function_21d44cc(v4, *(uint *)(v4 + 4320));
  Function_21d2fa8(v4, v2 + 2);
  Function_21d425c(v4, -1);
  Function_21d32d8(v4, v2 + 2);
  Function_21d330c(v4, v2 + 2);
  return 0;
}

//----- (021D2ED8) --------------------------------------------------------
uint __fastcall Function_21d2ed8(int a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint result;

  v2 = &dword_21D4BDC;
  v3 = a2;
  v4 = 2;
  v5 = a1 + 8;
  do
  {
    *(uint *)(v3 + 148) = v2[16] - v2[1];
    *(uint *)(v3 + 152) = v2[17];
    *(uint *)(v3 + 164) = v2[4];
    *(uint *)(v3 + 176) = v2[3];
    v6 = Function_201d2b8(v2[4]);
    *(uint *)(v3 + 188) = (ll_mul(v6, v2[1]) + 2048) >> 12;
    v7 = Function_201d2c4(v2[4]);
    *(uint *)(v3 + 192) = (ll_mul(v7, v2[2]) + 2048) >> 12;
    *(ushort *)(v3 + 200) = *v2;
    Function_200d650(
      *(int **)(v5 + 4320),
      *(uint *)(v3 + 148) + *(uint *)(v3 + 188),
      *(uint *)(v3 + 152) + *(uint *)(v3 + 192),
      1114112);
    result = Function_200d6a4(*(uint **)(v5 + 4320), 2);
    ++v4;
    v5 += 4;
    v2 += 21;
    v3 += 60;
  }
  while ( v4 <= 3 );
  return result;
}

//----- (021D2FA8) --------------------------------------------------------
int __fastcall Function_21d2fa8(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;
  int v7;

  v2 = a1;
  v7 = a2;
  v3 = 0;
  v4 = 2;
  v5 = a1 + 8;
  do
  {
    result = Function_21d2fd4(v2, v7, *(uint *)(v5 + 4320), v3);
    ++v4;
    v5 += 4;
    ++v3;
  }
  while ( v4 <= 3 );
  return result;
}

//----- (021D2FD4) --------------------------------------------------------
int __fastcall Function_21d2fd4(int a1, int a2, int *a3, int a4)
{
  int v4;
  int v5;
  int *v6;
  int v7;
  int result;
  uint v9;
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
  int *v33;

  v4 = a1;
  v5 = a2 + 148 + 60 * a4;
  v6 = &dword_21D4BDC[21 * a4];
  v7 = *(short *)(v5 + 52);
  v33 = a3;
  if ( v7 <= 0 )
  {
    v9 = *(uchar *)(v5 + 57);
    if ( v9 <= 5 )
      JUMPOUT(__CS__, *((short *)&off_21D3010 + v9) + 35467282);
    switch ( (uchar)v9 )
    {
      case 0:
        ++*(uchar *)(v5 + 57);
        goto LABEL_7;
      case 1:
LABEL_7:
        if ( *(uint *)(v5 + 16) > v6[5] )
        {
          v10 = *(uint *)(v5 + 28) - v6[7];
          *(uint *)(v5 + 28) = v10;
          v11 = v6[8];
          if ( v10 < v11 )
            *(uint *)(v5 + 28) = v11;
        }
        v12 = *(uint *)(v5 + 16) + *(uint *)(v5 + 28);
        *(uint *)(v5 + 16) = v12;
        v13 = v6[6];
        if ( v12 >= v13 )
        {
          *(uint *)(v5 + 16) = v13;
          ++*(uchar *)(v5 + 57);
        }
        v14 = v6[1];
        v15 = Function_201d2b8(*(uint *)(v5 + 16));
        *(uint *)(v5 + 40) = (ll_mul(v15, v14) + 2048) >> 12;
        v16 = v6[2];
        v17 = Function_201d2c4(*(uint *)(v5 + 16));
        *(uint *)(v5 + 44) = (ll_mul(v17, v16) + 2048) >> 12;
        break;
      case 2:
        *(uint *)v5 += *(uint *)(v5 + 40);
        *(uint *)(v5 + 4) += *(uint *)(v5 + 44);
        *(uint *)(v5 + 40) = 0;
        *(uint *)(v5 + 44) = 0;
        *(uint *)(v5 + 32) = v6[11];
        *(uint *)(v5 + 36) = v6[12];
        ++*(uchar *)(v5 + 57);
        goto LABEL_14;
      case 3:
LABEL_14:
        *(uint *)(v5 + 20) += *(uint *)(v5 + 32);
        *(uint *)(v5 + 24) += *(uint *)(v5 + 36);
        if ( *(uint *)(v5 + 20) >= 1474560 )
          *(uint *)(v5 + 20) -= 1474560;
        v18 = *(uint *)(v5 + 24);
        if ( v18 >= 1474560 )
          *(uint *)(v5 + 24) = v18 - 1474560;
        v19 = v6[9];
        v20 = Function_201d2b8(*(uint *)(v5 + 20));
        *(uint *)(v5 + 40) = (ll_mul(v20, v19) + 2048) >> 12;
        v21 = v6[10];
        v22 = Function_201d2b8(*(uint *)(v5 + 24));
        *(uint *)(v5 + 44) = (ll_mul(v22, v21) + 2048) >> 12;
        if ( *(uint *)(v4 + 4348) >= 0x1752u )
        {
          *(uint *)(v5 + 32) -= s32_div_f(v6[11], 20);
          *(uint *)(v5 + 36) -= s32_div_f(v6[12], 20);
          if ( *(uint *)(v5 + 32) <= (int)s32_div_f(v6[11], 20) )
            ++*(uchar *)(v5 + 57);
        }
        break;
      case 4:
        *(uint *)v5 = *(uint *)v5 + *(uint *)(v5 + 40) - v6[13];
        *(uint *)(v5 + 4) += *(uint *)(v5 + 44);
        *(uint *)(v5 + 16) = 0;
        *(uint *)(v5 + 28) = v6[15];
        v23 = v6[13];
        v24 = Function_201d2b8(0);
        *(uint *)(v5 + 40) = (ll_mul(v24, v23) + 2048) >> 12;
        v25 = v6[14];
        v26 = Function_201d2c4(0);
        *(uint *)(v5 + 44) = (ll_mul(v26, v25) + 2048) >> 12;
        ++*(uchar *)(v5 + 57);
        goto LABEL_22;
      case 5:
LABEL_22:
        v27 = *(uint *)(v5 + 16) + *(uint *)(v5 + 28);
        *(uint *)(v5 + 16) = v27;
        v28 = v6[13];
        v29 = Function_201d2c4(v27);
        *(uint *)(v5 + 40) = (ll_mul(v29, v28) + 2048) >> 12;
        v30 = v6[14];
        v31 = Function_201d2b8(*(uint *)(v5 + 16));
        *(uint *)(v5 + 44) = (ll_mul(v31, v30) + 2048) >> 12;
        if ( *(uint *)(v5 + 16) >= 737280 )
          ++*(uchar *)(v5 + 57);
        break;
      default:
        break;
    }
    if ( *(uchar *)(v5 + 56) )
      Function_200d7c0(v33, -*((ushort *)v6 + 38));
    else
      Function_200d7c0(v33, v6[19]);
    if ( (short)++*(ushort *)(v5 + 54) >= (int)*((ushort *)v6 + 40) )
    {
      *(ushort *)(v5 + 54) = 0;
      *(uchar *)(v5 + 56) ^= 1u;
    }
    v32 = *(uint *)(v5 + 4) - v6[18];
    *(uint *)(v5 + 4) = v32;
    result = Function_200d650(v33, *(uint *)v5 + *(uint *)(v5 + 40), v32 + *(uint *)(v5 + 44), 1114112);
  }
  else
  {
    result = v7 - 1;
    *(ushort *)(v5 + 52) = result;
  }
  return result;
}

//----- (021D32D8) --------------------------------------------------------
void __fastcall Function_21d32d8(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = a1;
  v4 = *(uint *)(a2 + 4) + 96;
  *(uint *)(a2 + 4) = v4;
  Function_2019184(*(uint *)(a1 + 8), 2u, 3u, v4 / 4096);
  Function_2019184(*(uint *)(v3 + 8), 7u, 3u, *(uint *)(v2 + 4) / 4096);
}

//----- (021D330C) --------------------------------------------------------
uint __fastcall Function_21d330c(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint result;
  int v10;
  int v11;

  v2 = a2;
  v3 = a2[34];
  a2[35] += 512;
  v4 = a2[35];
  if ( v4 < 4096 )
  {
    v11 = v4 >> 8;
  }
  else
  {
    LOBYTE(v11) = 16;
    a2[35] = 0;
    if ( a2[36] )
    {
      if ( --a2[34] < 0 )
      {
        a2[34] = 1;
        a2[36] ^= 1u;
      }
    }
    else if ( ++a2[34] >= 4 )
    {
      a2[34] = 2;
      a2[36] ^= 1u;
    }
  }
  if ( a2[36] )
  {
    v5 = v3 - 1;
    if ( v3 - 1 < 0 )
      v5 = 1;
  }
  else
  {
    v5 = v3 + 1;
    if ( v3 + 1 >= 4 )
      v5 = v3 - 1;
  }
  v10 = Function_200316c(*(uint *)(a1 + 12), 1);
  v6 = (int)&v2[8 * v5];
  v7 = (int)&v2[8 * v3 + 2];
  v8 = 0;
  do
  {
    result = Function_200393c(v7, v10 + 2 * (v8++ + 32), 1u, (uchar)v11, *(ushort *)(v6 + 8));
    v6 += 2;
    v7 += 2;
  }
  while ( v8 < 16 );
  return result;
}

//----- (021D340C) --------------------------------------------------------
int __fastcall Function_21d340c(int a1, uint *a2)
{
  int v2;
  int v3;
  uint v4;
  int v5;
  int v6;
  int result;
  uint v8;
  int v9;
  uint *v10;

  v2 = a1;
  v3 = (int)(a2 + 2);
  v10 = a2;
  switch ( (uchar)*a2 )
  {
    case 0u:
      v4 = 0;
      v5 = a1 + 108;
      while ( (int)v4 < 16 )
      {
        MI_CpuFill8((ushort *)(v5 + 120 * v4), 0, 0x54u);
        if ( (v4 >> 31) + __ROR4__((v4 << 29) - (v4 >> 31), 29) )
        {
          if ( v4 < 0x1C )
            v6 = *((ushort *)dword_21D4CAC + v4);
          else
            v6 = 1;
        }
        else
        {
          v6 = 3;
        }
        Function_20ae608((uint *)(v5 + 120 * v4++), *(uint *)(v2 + 16 * v6 + 52));
      }
      *(uint *)(v3 + 288) = 16;
      Function_21d3588(v2, v3);
      Function_21d36b0(v2);
      Function_200aae0(24, 0, -16, 61, 3);
      ++*v10;
      goto LABEL_17;
    case 1u:
      if ( Function_200ac1c(3) == 1 )
      {
        G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 0, 63, 31, 0);
        ++*v10;
      }
      goto LABEL_17;
    case 2u:
      if ( *(uint *)(a1 + 4348) >= 0x1F2Cu )
      {
        Function_200aae0(24, -16, 0, 61, 3);
        ++*v10;
      }
      goto LABEL_17;
    case 3u:
      if ( Function_200ac1c(3) != 1 )
        goto LABEL_17;
      result = 1;
      break;
    default:
LABEL_17:
      v8 = *(uint *)(v3 + 288);
      if ( (v8 >> 31) + __ROR4__((v8 << 29) - (v8 >> 31), 29) )
      {
        if ( v8 < 0x1C )
          v9 = *((ushort *)dword_21D4CAC + v8);
        else
          v9 = 1;
      }
      else
      {
        v9 = 3;
      }
      if ( Function_21d425c(v2, v9) == 1 )
        ++*(uint *)(v3 + 288);
      Function_21d44cc(v2, *(uint *)(v2 + 4320));
      Function_21d35c8(v2, v3);
      Function_21d36d4(v2, v3);
      Function_21d3930(v2, v3);
      result = 0;
      break;
  }
  return result;
}

//----- (021D3588) --------------------------------------------------------
int __fastcall Function_21d3588(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a1 + 8;
  v3 = a2;
  Function_200d6a4(*(uint **)(a1 + 4328), 2);
  Function_200d500(*(int **)(v2 + 4320), 304, -10, 1114112);
  *(uint *)(v3 + 292) = 1245184;
  result = 296;
  *(uint *)(v3 + 296) = -40960;
  return result;
}

//----- (021D35C8) --------------------------------------------------------
int __fastcall Function_21d35c8(int result)
{
  int v1;

  if ( *(uint *)(result + 4348) >= 0x1D10u )
  {
    v1 = *(uint *)(result + 4328);
    result = Function_21d35e8();
  }
  return result;
}

//----- (021D35E8) --------------------------------------------------------
int __fastcall Function_21d35e8(int a1, int a2, int *a3, int a4)
{
  int v4;
  int result;
  int *v6;
  int v7;
  int v8;
  int v9;
  long long v10;
  int v11;
  int *v12;

  v12 = a3;
  v4 = a2 + 292 + 16 * a4;
  result = -262144;
  v6 = &dword_21D4C90[7 * a4];
  if ( *(uint *)v4 >= -262144 )
  {
    v7 = *(uint *)(v4 + 8) + v6[3];
    *(uint *)(v4 + 8) = v7;
    if ( v7 >= 1474560 )
      *(uint *)(v4 + 8) -= 1474560;
    v8 = v6[4];
    v9 = Function_201d2b8(*(uint *)(v4 + 8));
    *(uint *)v4 += v6[1];
    *(uint *)(v4 + 4) += v6[2];
    v10 = ll_mul(v9, v8);
    Function_200d650(v12, *(uint *)v4, *(uint *)(v4 + 4) + (ull)((v10 + 2048) >> 12), 1114112);
    if ( *(uchar *)(v4 + 14) )
      Function_200d7c0(v12, -*((ushort *)v6 + 10));
    else
      Function_200d7c0(v12, v6[5]);
    ++*(ushort *)(v4 + 12);
    result = *((ushort *)v6 + 12);
    if ( *(short *)(v4 + 12) >= result )
    {
      *(ushort *)(v4 + 12) = 0;
      v11 = *(char *)(v4 + 14);
      result = v11 ^ 1;
      *(uchar *)(v4 + 14) = v11 ^ 1;
    }
  }
  return result;
}

//----- (021D36B0) --------------------------------------------------------
int __fastcall Function_21d36b0(int a1)
{
  int v1;

  v1 = a1;
  Function_200d810(*(int **)(a1 + 4332), 1);
  return Function_200d810(*(int **)(v1 + 4336), 1);
}

//----- (021D36D4) --------------------------------------------------------
int __fastcall Function_21d36d4(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( *(uint *)(a1 + 4348) == 7200 )
    ((void (*)(void))Function_21d372c)();
  if ( *(uint *)(v2 + 4348) == 7380 )
    Function_21d372c(v2, v3, 1);
  if ( *(uint *)(v2 + 4348) == 7440 )
    Function_21d372c(v2, v3, 2);
  return Function_21d37e0(v2, v3);
}

//----- (021D372C) --------------------------------------------------------
int *__fastcall Function_21d372c(int a1, uchar *a2, uint a3)
{
  int v3;
  uchar *v4;
  uint v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( a2[284] )
    ErrorHandler();
  if ( v5 >= 3 )
    ErrorHandler();
  v4[284] = 1;
  v4[285] = 0;
  v4[286] = 0;
  v4[287] = 31;
  Function_200d500(*(int **)(v3 + 4336), SLOWORD(dword_21D4C84[v5]), SHIWORD(dword_21D4C84[v5]), 1114112);
  Function_200d3f4(*(uint **)(v3 + 4336), 1);
  Function_200d3f4(*(uint **)(v3 + 4332), 0);
  G2x_SetBlendAlpha_((int *)&REG_BLDCNT_SUB, 0, 63, (char)v4[286], (char)v4[287]);
  return G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 0, 63, (char)v4[287], (char)v4[286]);
}

//----- (021D37E0) --------------------------------------------------------
int __fastcall Function_21d37e0(int a1, uchar *a2, int a3, int a4)
{
  int v4;
  uchar *v5;
  int result;
  int v7;

  v7 = a4;
  v4 = a1;
  v5 = a2;
  result = 284;
  if ( a2[284] )
  {
    if ( a2[285] )
    {
      a2[287] += 3;
      a2[286] -= 3;
      if ( (char)a2[287] > 31 )
        a2[287] = 31;
      if ( (char)a2[286] < 0 )
        a2[286] = 0;
      REG_BLDALPHA = (char)a2[286] | (ushort)((char)a2[287] << 8);
      Function_200d5e8(*(uint **)(v4 + 4332), -24576, 53248, a4);
      Function_200d5a0(*(int **)(v4 + 4332), (ushort *)&v7 + 1, &v7, 1114112);
      result = (short)v7;
      if ( (short)v7 > 224 )
      {
        Function_200d3f4(*(uint **)(v4 + 4332), 0);
        v5[285] = 0;
        result = 284;
        v5[284] = 0;
      }
    }
    else
    {
      a2[286] += 3;
      a2[287] -= 3;
      if ( (char)a2[286] > 31 )
        a2[286] = 31;
      if ( (char)a2[287] < 0 )
        a2[287] = 0;
      REG_BLDALPHA_SUB = (char)a2[286] | (ushort)((char)a2[287] << 8);
      Function_200d5e8(*(uint **)(v4 + 4336), -24576, 53248, a4);
      Function_200d5a0(*(int **)(v4 + 4336), (ushort *)&v7 + 1, &v7, 1114112);
      result = (short)v7;
      if ( (short)v7 > 224 )
      {
        Function_200d3f4(*(uint **)(v4 + 4336), 0);
        Function_200d3f4(*(uint **)(v4 + 4332), 1);
        Function_200d500(*(int **)(v4 + 4332), SHIWORD(v7), -32, 1114112);
        result = 285;
        v5[285] = 1;
      }
    }
  }
  return result;
}

//----- (021D3930) --------------------------------------------------------
int __fastcall Function_21d3930(int a1, uint *a2)
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
  uint *v12;
  int v13;
  int v14;
  int v15;

  v2 = a1;
  result = 276;
  v12 = a2;
  v4 = a2[69];
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      v5 = v12[66];
      v12[67] += 1024;
      v6 = v12[67];
      if ( v6 < 4096 )
      {
        v15 = v6 >> 8;
      }
      else
      {
        LOBYTE(v15) = 16;
        v12[67] = 0;
        ++v12[66];
        v12[69] = 0;
      }
      v7 = v5 + 1;
      if ( v5 + 1 >= 8 )
        v7 = 7;
      v14 = Function_200316c(*(uint *)(v2 + 12), 0);
      v13 = Function_200316c(*(uint *)(v2 + 12), 1);
      v8 = (int)&v12[8 * v7];
      v9 = (int)&v12[8 * v5 + 2];
      v10 = 0;
      do
      {
        v11 = 2 * (v10 + 16);
        Function_200393c(v9, v14 + v11, 1u, (uchar)v15, *(ushort *)(v8 + 8));
        Function_200393c(v9, v13 + v11, 1u, (uchar)v15, *(ushort *)(v8 + 8));
        ++v10;
        v8 += 2;
        v9 += 2;
      }
      while ( v10 < 16 );
    }
LABEL_15:
    result = (int)v12;
    ++v12[70];
    return result;
  }
  if ( *(uint *)(v2 + 4348) >= 0x1DC4u && v12[66] < 8 )
  {
    if ( v12[70] )
      v12[69] = 1;
    goto LABEL_15;
  }
  return result;
}

//----- (021D3A40) --------------------------------------------------------
int __fastcall Function_21d3a40(int a1, int a2)
{
  uint *v2;
  int v3;
  uint *v4;
  int result;

  v2 = (uint *)a2;
  v3 = a1;
  v4 = (uint *)(a2 + 8);
  switch ( (uchar)*(uint *)a2 )
  {
    case 0u:
      Function_200aae0(24, 0, -16, 61, 3);
      ++*v2;
      goto LABEL_13;
    case 1u:
      if ( *v4 > 0x190u )
      {
        Function_200aae0(32, -16, 0, 61, 3);
        *v4 = 0;
        ++*v2;
      }
      goto LABEL_13;
    case 2u:
      if ( Function_200ac1c(3) == 1 )
      {
        if ( *(uchar *)(v3 + 4357) >= 7u )
          *v2 = 4;
        else
          *v2 = 3;
      }
      goto LABEL_13;
    case 3u:
      if ( (short)++*(ushort *)(a2 + 4) > 30 )
      {
        *(ushort *)(a2 + 4) = 0;
        Function_21d439c(a1, *(uchar *)(a1 + 4357), 3, 0);
        ++*(uchar *)(v3 + 4357);
        Function_200aae0(32, 0, -16, 61, 3);
        *v2 = 1;
      }
      goto LABEL_13;
    case 4u:
      if ( *(uint *)(a1 + 4348) < 0x12CFu )
        goto LABEL_13;
      result = 1;
      break;
    default:
LABEL_13:
      ++*v4;
      result = 0;
      break;
  }
  return result;
}

//----- (021D3B2C) --------------------------------------------------------
int __fastcall Function_21d3b2c(int a1, int a2)
{
  uint *v2;
  int v3;
  uint *v4;
  int result;

  v2 = (uint *)a2;
  v3 = a1;
  v4 = (uint *)(a2 + 8);
  switch ( (uchar)*(uint *)a2 )
  {
    case 0u:
      Function_200aae0(24, 0, -16, 61, 3);
      ++*v2;
      goto LABEL_13;
    case 1u:
      if ( *v4 > 0x12Cu )
      {
        Function_200aae0(32, -16, 0, 61, 3);
        *v4 = 0;
        ++*v2;
      }
      goto LABEL_13;
    case 2u:
      if ( Function_200ac1c(3) == 1 )
      {
        if ( *(uchar *)(v3 + 4357) >= 0xAu )
          *v2 = 4;
        else
          *v2 = 3;
      }
      goto LABEL_13;
    case 3u:
      if ( (short)++*(ushort *)(a2 + 4) > 30 )
      {
        *(ushort *)(a2 + 4) = 0;
        Function_21d439c(a1, *(uchar *)(a1 + 4357), 3, 0);
        ++*(uchar *)(v3 + 4357);
        Function_200aae0(32, 0, -16, 61, 3);
        *v2 = 1;
      }
      goto LABEL_13;
    case 4u:
      if ( *(uint *)(a1 + 4348) < 0x12CFu )
        goto LABEL_13;
      result = 1;
      break;
    default:
LABEL_13:
      ++*v4;
      result = 0;
      break;
  }
  return result;
}

//----- (021D3C18) --------------------------------------------------------
int __fastcall Function_21d3c18(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;
  uint v5;
  uint v6;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = (uint *)(a2 + 8);
  switch ( (uchar)*(uint *)a2 )
  {
    case 0u:
      Function_200aae0(24, 0, -16, 61, 3);
      ++*(uint *)v2;
      goto LABEL_15;
    case 1u:
      v5 = *v4 + 1;
      *v4 = v5;
      if ( v5 > 0x1B )
      {
        *v4 = 0;
        ++*(uint *)a2;
      }
      goto LABEL_15;
    case 2u:
      v6 = *(uchar *)(a2 + 12);
      if ( v6 < 3 )
      {
        if ( v6 & 1 )
        {
          Function_21d439c(a1, *(uchar *)(a1 + 4357), 2, 1);
          Function_21d3cf8(v2 + 8, 8);
        }
        else
        {
          Function_21d439c(a1, *(uchar *)(a1 + 4357), 3, 1);
          Function_21d3cf8(v2 + 8, 4);
        }
        ++*(uchar *)(v3 + 4357);
        ++*(uchar *)(v2 + 12);
        *(uint *)v2 = 3;
      }
      else
      {
        Function_200aae0(32, -16, 0, 61, 3);
        *(uint *)v2 = 4;
      }
      goto LABEL_15;
    case 3u:
      if ( Function_21d3d50(a2 + 8) == 1 )
        *(uint *)v2 = 1;
      goto LABEL_15;
    case 4u:
      if ( Function_200ac1c(3) != 1 )
        goto LABEL_15;
      result = 1;
      break;
    default:
LABEL_15:
      result = 0;
      break;
  }
  return result;
}

//----- (021D3CF8) --------------------------------------------------------
uint __fastcall Function_21d3cf8(int a1, int a2)
{
  uint result;

  *(uint *)(a1 + 8) = a2;
  *(uchar *)(a1 + 5) = 16;
  *(uchar *)(a1 + 6) = 0;
  if ( a2 == 4 )
  {
    G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 4, 40, *(char *)(a1 + 5), *(char *)(a1 + 6));
    result = Function_2019120(3u, 1);
  }
  else
  {
    G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 8, 36, *(char *)(a1 + 5), *(char *)(a1 + 6));
    result = Function_2019120(2u, 1);
  }
  return result;
}

//----- (021D3D50) --------------------------------------------------------
int __fastcall Function_21d3d50(int a1)
{
  if ( (char)--*(uchar *)(a1 + 5) < 16 )
    ++*(uchar *)(a1 + 6);
  if ( *(char *)(a1 + 5) < 0 )
    *(uchar *)(a1 + 5) = 0;
  if ( *(char *)(a1 + 6) > 16 )
    *(uchar *)(a1 + 6) = 16;
  REG_BLDALPHA = *(char *)(a1 + 5) | (ushort)(*(char *)(a1 + 6) << 8);
  if ( *(uchar *)(a1 + 5) || *(uchar *)(a1 + 6) != 16 )
    return 0;
  if ( *(uint *)(a1 + 8) == 4 )
  {
    Function_2019120(2u, 0);
    Function_2019060(2u, 3);
    Function_2019060(3u, 2);
  }
  else
  {
    Function_2019120(3u, 0);
    Function_2019060(2u, 2);
    Function_2019060(3u, 3);
  }
  return 1;
}

//----- (021D3DE0) --------------------------------------------------------
int __fastcall Function_21d3de0(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  if ( *a2 )
  {
    if ( v4 == 1 )
    {
      if ( Function_200f2ac() == 1 && (*(uint *)(v3 + 4348) > 0x2760u || dword_21BF6C4 & 1 || dword_21BF6C4 & 8) )
      {
        Function_200f174(0, 0, 0, 0, 45, 1, 75);
        ++*v2;
      }
    }
    else if ( v4 == 2 && Function_200f2ac() == 1 )
    {
      return 1;
    }
  }
  else
  {
    Function_200f174(0, 1, 1, 0, 30, 1, 75);
    ++*v2;
  }
  return 0;
}

//----- (021D3E78) --------------------------------------------------------
uint *__fastcall Function_21d3e78(uint *a1, int a2, int a3, char a4, int a5)
{
  uint *v5;
  int v6;
  char v7;
  uint *v8;
  int v9;
  int v11;

  v5 = a1;
  v11 = a2;
  v6 = a3;
  v7 = a4;
  v8 = (uint *)malloc(0x4Bu, 56);
  if ( v8 )
  {
    v8[8] = v5;
    *v8 = v11;
    v8[1] = v11 + 192;
    v8[2] = v6;
    v8[11] = a5;
    v8[3] = 0;
    v8[4] = 0;
    v8[5] = 0;
    v8[6] = 0;
    v8[7] = 0;
    v8[12] = Function_2023790(256, 0x4Bu);
    v8[9] = Function_201a778(0x4Bu, 1);
    Function_201a7e8(v5, v8[9], (uchar)v6, 0, 0, 0x20u, 0x20u, v7, 0);
    Function_201ada4_ClearTextBox(v8[9], 0);
    Function_201a9f4(v8[9]);
    Function_201a954(v8[9], v9);
    v8[10] = Function_201a778(0x4Bu, 1);
    Function_201a7e8(v5, v8[10], (uchar)v6, 0, 0, 0x20u, 2u, v7, 0);
    v8[13] = AddTaskToTaskList3((int)Function_21d4104, (int)v8, 0);
  }
  return v8;
}

//----- (021D3F38) --------------------------------------------------------
uint __fastcall Function_21d3f38(int a1, int a2)
{
  int *v2;
  int *v3;

  v2 = (int *)a1;
  v3 = *(int **)(a1 + 52);
  if ( v3 )
    Call_RemoveTaskFromTaskList(v3);
  Function_20237bc_FreeMsg(v2[12], a2);
  Function_201a8fc(v2[9]);
  Function_201a8fc(v2[10]);
  free(v2[9]);
  free(v2[10]);
  return free((int)v2);
}

//----- (021D3F6C) --------------------------------------------------------
int __fastcall Function_21d3f6c(int a1, int a2)
{
  uint *v2;
  int v3;
  int v5;
  int v6;
  int v7;
  int v8;
  uint v9;
  int v10;
  short v11;
  uint v12;
  int v13;

  v2 = (uint *)a1;
  v3 = *(uint *)(a1 + 28);
  v13 = a2;
  if ( v3 == 2 )
    return 1;
  v5 = *(uint *)(a1 + 4) + a2;
  if ( !v3 && v5 >= *((ushort *)&dword_21D4CE4 + 3 * *(uint *)(a1 + 12) + 1) )
  {
    Function_200b1b8_CallMsgDecrypt(
      *(ushort ***)(a1 + 44),
      *((ushort *)&dword_21D4CE4 + 3 * *(uint *)(a1 + 12)),
      *(ushort **)(a1 + 48));
    if ( *((ushort *)&dword_21D4CE8 + 3 * v2[3]) )
      Function_2002d7c(0, v2[12], 0);
    v6 = *((ushort *)&dword_21D4CE4 + 3 * v2[3] + 1) & 0xFF;
    v7 = v2[12];
    Function_201d78c(v2[9], 0);
    if ( v6 > 240 )
    {
      Function_201ada4_ClearTextBox(v2[10], 0);
      v8 = v2[12];
      Function_201d78c(v2[10], 0);
      Function_201addc(
        v2[9],
        *(uint *)(v2[10] + 12),
        0,
        (256 - v6) & 0xFFFF,
        8 * *(uchar *)(v2[10] + 7),
        8 * *(uchar *)(v2[10] + 8),
        0,
        0,
        0x100u,
        v6 - 240);
    }
    v2[6] = 1;
    v9 = v2[3] + 1;
    v2[3] = v9;
    if ( v9 >= 0xEC )
      v2[7] = 1;
  }
  v2[1] = v5;
  if ( *v2 > *((ushort *)&dword_21D4CE4 + 3 * v2[4] + 1) + 16 )
  {
    v10 = *((ushort *)&dword_21D4CE4 + 3 * v2[4] + 1) & 0xFF;
    if ( v10 > 240 )
    {
      v11 = 256 - v10;
      Function_201ae78(v2[9], 0, 0, (ushort)v10, 0x100u, 256 - v10);
      Function_201ae78(v2[9], 0, 0, 0, 0x100u, 16 - v11);
    }
    else
    {
      Function_201ae78(v2[9], 0, 0, (ushort)v10, 0x100u, 0x10u);
    }
    v2[6] = 1;
    v12 = v2[4] + 1;
    v2[4] = v12;
    if ( v12 >= 0xED )
      v2[7] = 2;
  }
  *v2 += v13;
  return 0;
}

//----- (021D4104) --------------------------------------------------------
void __fastcall Function_21d4104(int a1, uint *a2)
{
  uint *v2;

  v2 = a2;
  if ( a2[6] )
  {
    Function_201accc(a2[9]);
    v2[6] = 0;
  }
  Function_2019184(v2[8], v2[2] & 0xFF, 3u, *v2 & 0xFF);
}

//----- (021D4130) --------------------------------------------------------
int Function_21d4130()
{
  return 236;
}

//----- (021D4134) --------------------------------------------------------
int __fastcall Function_21d4134(int *a1, int a2)
{
  int *v2;
  int v3;
  int *v4;
  int v5;
  int *v6;
  uint *v7;
  int v8;
  uint *v9;
  int v10;
  int result;

  v2 = a1;
  v3 = 0;
  v4 = &dword_21D5434[14 * a2];
  do
  {
    v5 = v4[1];
    v6 = v2 + 987;
    *v6 = *v4;
    v6[1] = v5;
    v7 = v2 + 989;
    v8 = v4[3];
    *v7 = v4[2];
    v7[1] = v8;
    v9 = v2 + 991;
    v10 = v4[5];
    *v9 = v4[4];
    v9[1] = v10;
    result = v4[6];
    ++v3;
    v2[993] = result;
    v4 += 7;
    v2 += 7;
  }
  while ( v3 < 2 );
  return result;
}

//----- (021D4170) --------------------------------------------------------
int __fastcall Function_21d4170(int a1)
{
  int result;
  uint *v2;
  int v3;
  uint *v4;
  uint *v5;
  int v6;
  int v7;
  int v8;

  v6 = a1;
  v8 = 0;
  result = *(uchar *)(a1 + 4356);
  if ( result > 0 )
  {
    v2 = (uint *)(v6 + 3948);
    v7 = v6 + 108;
    do
    {
      if ( *(short *)v2 > 16 )
        ErrorHandler();
      v3 = 0;
      if ( *(short *)v2 > 0 )
      {
        v4 = (uint *)v7;
        do
        {
          Function_2017350(v4, v2[1] - v2[2] * v3, v2[3] - v2[4] * v3, v2[5] - v2[6] * v3);
          Function_201736c(v4, 4096, 4096, 4096);
          Function_2017348((int)v4, 1);
          ++v3;
          v4 += 30;
        }
        while ( v3 < *(short *)v2 );
      }
      if ( v3 < 16 )
      {
        v5 = (uint *)(v7 + 120 * v3);
        do
        {
          Function_2017350(v5, 0, -262144, -204800);
          Function_201736c(v5, 4096, 4096, 4096);
          Function_2017348((int)v5, 0);
          ++v3;
          v5 += 30;
        }
        while ( v3 < 16 );
      }
      v7 += 1920;
      ++v8;
      v2 += 7;
      result = v8;
    }
    while ( v8 < *(uchar *)(v6 + 4356) );
  }
  return result;
}

//----- (021D425C) --------------------------------------------------------
int __fastcall Function_21d425c(int a1, int a2)
{
  int v2;
  short *v3;
  int v4;
  int v5;
  uint *v6;
  int v7;
  int v9;
  int v10;
  uint *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uint v16;
  uint v17;
  uint v18;
  int v19;
  int v20;
  int v21;

  v10 = a2;
  v9 = a1;
  v2 = 0;
  v15 = 0;
  if ( (int)*(uchar *)(a1 + 4356) > 0 )
  {
    v3 = (short *)(a1 + 3948);
    v13 = a1 + 108;
    v12 = a1 + 16 * a2;
    do
    {
      v4 = *v3;
      v5 = v3[1];
      v18 = s32_div_f(*((uint *)v3 + 2) * v4, v5);
      v17 = s32_div_f(*((uint *)v3 + 4) * v4, v5);
      v16 = s32_div_f(*((uint *)v3 + 6) * v4, v5);
      v14 = 0;
      if ( v4 > 0 )
      {
        v11 = (uint *)v13;
        v6 = (uint *)v13;
        do
        {
          Function_2017358(v11, &v21, &v20, &v19);
          v7 = v21 + v18;
          if ( (int)(v21 + v18) < *((uint *)v3 + 1) )
          {
            Function_2017350(v6, v7, v20 + v17, v19 + v16);
          }
          else
          {
            Function_2017350(
              v6,
              v7 - *((uint *)v3 + 2) * *v3,
              v20 + v17 - *((uint *)v3 + 4) * *v3,
              v19 + v16 - *((uint *)v3 + 6) * *v3);
            if ( v10 != -1 && !v15 )
            {
              MI_CpuFill8(v6, 0, 0x54u);
              Function_20ae608(v6, *(uint *)(v12 + 52));
            }
            v2 = 1;
          }
          Function_2017348((int)v6, 1);
          v6 += 30;
          v11 += 30;
          ++v14;
        }
        while ( v14 < *v3 );
      }
      v13 += 1920;
      ++v15;
      v3 += 14;
    }
    while ( v15 < *(uchar *)(v9 + 4356) );
  }
  return v2;
}

//----- (021D439C) --------------------------------------------------------
void __fastcall Function_21d439c(int a1, uint a2, int a3, int a4)
{
  short *v4;
  int v5;
  uint v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v11 = a4;
  v5 = a1;
  v6 = a2;
  v7 = a3;
  v9 = *(uint *)(a1 + 8);
  if ( a4 )
  {
    if ( a4 == 1 )
    {
      if ( a2 >= 0xA )
        ErrorHandler();
      if ( **(uint **)v5 )
        v4 = &aVc[8 * v6];
      else
        v4 = &aWv[8 * v6];
    }
  }
  else
  {
    if ( a2 >= 0xA )
      ErrorHandler();
    if ( **(uint **)v5 )
      v4 = &aD[8 * v6];
    else
      v4 = &a0[8 * v6];
  }
  v8 = Function_20071ec(*(uint *)(v5 + 4344), (ushort)v4[2], &v10, 75);
  DC_FlushRange(*(uint *)(v10 + 12), *(uint *)(v10 + 8));
  GX_BeginLoadBGExtPltt();
  if ( v7 == 3 )
    GX_LoadBGExtPltt(*(uint *)(v10 + 12), 24576, 0x2000);
  else
    GX_LoadBGExtPltt(*(uint *)(v10 + 12), 0x4000, 0x2000);
  GX_EndLoadBGExtPltt();
  free(v8);
  Function_20038b0(*(uint *)(v5 + 12), 0, 2, 0, 0, 1u);
  Function_20038b0(*(uint *)(v5 + 12), 1, 2, 0, 0, 1u);
  Function_20070e8(*(uint *)(v5 + 4344), (ushort)*v4, *(uint **)(v5 + 8), v7, 0, 0, 0, 75);
  Function_200710c(*(uint *)(v5 + 4344), (ushort)v4[1], *(uint **)(v5 + 8), v7, 0, 0, 0, 75);
  Function_2019184(v9, (uchar)v7, 0, v4[3]);
  Function_2019184(v9, (uchar)v7, 3u, v4[4]);
}

//----- (021D44CC) --------------------------------------------------------
int __fastcall Function_21d44cc(int a1, int *a2)
{
  int *v2;
  int v3;
  int result;
  int v5;
  int v6;
  uint v7;
  short v8;
  int v9;
  uint v10;
  int v11;
  uint v12;

  v2 = a2;
  v3 = a1;
  result = *(uint *)(a1 + 4340);
  if ( result )
  {
    if ( *(short *)(v3 + 4376) == -1 )
    {
      if ( *(short *)(v3 + 4372) <= 0 )
      {
        v5 = Function_2021f98(*a2);
        if ( **(uint **)v3 )
        {
          MI_CpuCopy32(
            (int *)(*(uint *)(v3 + 4340) + (*(short *)(v3 + 4374) << 7)),
            (uint *)(*(uint *)(v5 + 4) + 104859808),
            32);
          MI_CpuCopy32(
            (int *)(*(uint *)(v3 + 4340) + (*(short *)(v3 + 4374) << 7) + 32),
            (uint *)(*(uint *)(v5 + 4) + 104859840),
            32);
          MI_CpuCopy32(
            (int *)(*(uint *)(v3 + 4340) + (*(short *)(v3 + 4374) << 7) + 64),
            (uint *)(*(uint *)(v5 + 4) + 104860064),
            32);
          MI_CpuCopy32(
            (int *)(*(uint *)(v3 + 4340) + (*(short *)(v3 + 4374) << 7) + 96),
            (uint *)(*(uint *)(v5 + 4) + 104860096),
            32);
        }
        else
        {
          MI_CpuCopy32(
            (int *)(*(uint *)(v3 + 4340) + (*(short *)(v3 + 4374) << 7)),
            (uint *)(*(uint *)(v5 + 4) + 104858528),
            32);
          MI_CpuCopy32(
            (int *)(*(uint *)(v3 + 4340) + (*(short *)(v3 + 4374) << 7) + 32),
            (uint *)(*(uint *)(v5 + 4) + 104858560),
            32);
          MI_CpuCopy32(
            (int *)(*(uint *)(v3 + 4340) + (*(short *)(v3 + 4374) << 7) + 64),
            (uint *)(*(uint *)(v5 + 4) + 104858784),
            32);
          MI_CpuCopy32(
            (int *)(*(uint *)(v3 + 4340) + (*(short *)(v3 + 4374) << 7) + 96),
            (uint *)(*(uint *)(v5 + 4) + 104858816),
            32);
        }
        if ( *(ushort *)(v3 + 4374) )
        {
          *(ushort *)(v3 + 4372) = 1;
        }
        else
        {
          s32_div_f(*(short *)(v3 + 4378), 3);
          if ( v6 )
          {
            *(ushort *)(v3 + 4372) = 40;
            ++*(ushort *)(v3 + 4378);
          }
          else if ( PRNG() & 1 )
          {
            v7 = PRNG();
            s32_div_f(v7, 10);
            *(ushort *)(v3 + 4372) = v8;
            ++*(ushort *)(v3 + 4378);
          }
          else
          {
            *(ushort *)(v3 + 4372) = 40;
          }
        }
        *(ushort *)(v3 + 4374) ^= 1u;
      }
      else
      {
        --*(ushort *)(v3 + 4372);
      }
    }
    result = Function_200d3b8(v2);
    if ( !result )
    {
      v9 = *(short *)(v3 + 4376);
      if ( v9 == -1 )
      {
        *(ushort *)(v3 + 4376) = 0;
        result = Function_200d364(v2, 0);
      }
      else
      {
        *(ushort *)(v3 + 4376) = v9 + 1;
        if ( *(short *)(v3 + 4376) <= 16 || (v10 = PRNG(), s32_div_f(v10, 5), v11) )
        {
          v12 = 0;
        }
        else
        {
          v12 = 1;
          *(ushort *)(v3 + 4376) = -1;
        }
        result = Function_200d364(v2, v12);
      }
    }
  }
  return result;
}

