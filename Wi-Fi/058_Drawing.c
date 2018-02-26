//----- (021D0D80) --------------------------------------------------------
int __fastcall Function_58_21d0d80(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int *v9;
  int v10;

  v2 = a2;
  v3 = *a2;
  v4 = a1;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      LoadOverlayData1c(a1);
      *v2 = 0;
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
    Function_2017fc8(3, 39, (uint)&REG_DISPCNT_SUB << 6);
    v5 = (int *)MallocSomeDataAndStorePtrInOverlayData1c(v4, 37900, 0x27u);
    Call_FillMemWithValue(v5, 0, 0x940Cu);
    *v5 = Function_2018340(0x27u);
    v5[3] = (int)Function_200b358(0x27u);
    v5[4] = LoadFromMsgNARC(0, 26, 425, 0x27u);
    v6 = Function_2017dd4(4, 8);
    Function_21d1184(v6);
    Function_21d11a4(*v5);
    SetBrightnessWithValue(0, 0);
    SetBrightnessWithValue(1, 0);
    Function_200f174(0, 17, 17, 0, 16, 1, 39);
    v5[2] = LoadPtrToOverWorldDataIn18(v4);
    v9 = LoadFromNARC_8(78, 0x27u, v7, v8);
    Function_21d142c(v5, v9);
    Function_201e3d8();
    Function_201e450(2u);
    SetMainLoopFunctionCall((int)Function_21d115c, *v5);
    v10 = Function_21d12c4(v5);
    Function_21d1524(v10);
    Function_21d1554(v5, v9);
    Function_21d16d8(v5);
    Function_21d18ac(v5, v4);
    Function_2004550(0x34u, 0);
    REG_POWERCNT &= 0x7FFFu;
    Function_2095e98((int)v5);
    Function_20388f4(0, 1);
    if ( !Function_203608c() )
      Function_2037b58(3);
    Function_2039734();
    if ( !Function_203608c() )
    {
      Function_205bea8(1u);
      Function_2033ed4(1);
    }
    Call_FS_CloseFile(v9);
    ++*v2;
  }
  return 0;
}

//----- (021D0F08) --------------------------------------------------------
int __fastcall Function_58_21d0f08(int a1, int *a2, int a3, int a4, int a5, int a6, int a7, int (__fastcall *a8)(int))
{
  int *v8;
  int *v9;
  char v10;
  int v11;
  int (__fastcall *v12)(int *);
  int v13;
  int v14;
  int (__fastcall *v15)(int *);
  int result;

  v8 = a2;
  v9 = (int *)LoadOverlayData1c(a1);
  if ( !Function_203608c() && v9[9453] )
    v9[9453] &= Function_20318ec();
  v9[192] = *v8;
  v10 = Function_21d2cb8(v9, *v8);
  v11 = *v8;
  switch ( v10 )
  {
    case 0:
      if ( Function_200f2ac() )
      {
        if ( Function_203608c() )
        {
          if ( Function_21d2a30() >= 2 )
          {
            Function_20359dc(128, 0, 0);
            *v8 = 1;
          }
        }
        else
        {
          *v8 = 1;
        }
      }
      goto LABEL_21;
    case 1:
      v12 = (int (__fastcall *)(int *))dword_21D3180[2 * v9[193]];
      if ( v12 )
        *v8 = v12(v9);
      Function_21d28e4(v9 + 158, 0, 920847, v9);
      if ( !Function_203608c() )
      {
        v13 = Function_21d2b5c(v9);
        if ( *v8 == 1 )
          *v8 = v13;
      }
      Function_21d2888(v9 + 4317);
      goto LABEL_21;
    case 2:
      v14 = 2 * v9[193];
      v15 = (int (__fastcall *)(int *))dword_21D3180[v14];
      if ( v15 && dword_21D3184[v14] )
        *v8 = v15(v9);
      goto LABEL_21;
    case 3:
      if ( !Function_200f2ac() )
        goto LABEL_21;
      result = a8(1);
      break;
    default:
LABEL_21:
      Function_20219f8(v9[13]);
      result = 0;
      break;
  }
  return result;
}

//----- (021D1018) --------------------------------------------------------
int __fastcall Function_58_21d1018(int a1, int *a2)
{
  int v2;
  int *v3;
  int v4;
  char v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = LoadOverlayData1c(a1);
  v6 = LoadPtrToOverWorldDataIn18(v2);
  v7 = *v3;
  if ( (uint)*v3 <= 3 )
    JUMPOUT(__CS__, (char *)&off_21D1040 + *((short *)&off_21D1040 + v7) + 2);
  switch ( v5 )
  {
    case 0:
      v8 = Function_202c168(0x27u);
      Function_202b758(*(uint *)(v6 + 4), (int)v8, 4u);
      SetMainLoopFunctionCall(0, 0);
      Function_200a4e4(*(int **)(v4 + 368));
      Function_200a4e4(*(int **)(v4 + 384));
      Function_200a6dc(*(int **)(v4 + 372));
      Function_200a6dc(*(int **)(v4 + 388));
      v9 = 0;
      v10 = v4;
      do
      {
        Function_2009754(*(int **)(v10 + 352));
        ++v9;
        v10 += 4;
      }
      while ( v9 < 4 );
      Function_2021964(*(int **)(v4 + 52));
      Function_200a878();
      Function_201e958();
      Function_201f8b4();
      Function_21d19d4(v4);
      Function_21d13f0(*(uint *)v4);
      Function_201e530();
      Function_200b190(*(ushort **)(v4 + 16));
      Function_200b3f0(*(uint **)(v4 + 12), v11);
      ++*v3;
      goto LABEL_13;
    case 1:
      Function_2037b58(1);
      Function_2036ac4();
      Function_205c2c8(*(uchar **)v6);
      REG_POWERCNT |= (uint)&REG_POWERCNT >> 11;
      Function_205bea8(0);
      Function_2033ed4(0);
      ++*v3;
      goto LABEL_13;
    case 2:
      if ( *(uint *)(v4 + 37888) )
      {
        if ( Function_20318ec() == 1 )
          ++*v3;
      }
      else
      {
        *v3 = v7 + 1;
      }
      goto LABEL_13;
    case 3:
      Function_2037b58(2);
      Function_21d13b4(v4);
      free(*(uint *)(v4 + 8));
      FreeSomeDataAndStore0InOverlayData1c(v2);
      SetMainLoopFunctionCall(0, 0);
      Function_201807c(39);
      Function_2037b58(2);
      result = 1;
      break;
    default:
LABEL_13:
      result = 0;
      break;
  }
  return result;
}

//----- (021D115C) --------------------------------------------------------
int __fastcall Function_21d115c(int a1)
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

//----- (021D1184) --------------------------------------------------------
char *Function_21d1184()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_21D2E90;
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
uint __fastcall Function_21d11a4(uint *a1)
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

  v1 = a1;
  v38 = 1;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  SetGraphicsModes(&v38);
  v31 = 0;
  v32 = 0;
  v33 = 2048;
  v34 = 0;
  v35 = 69074945;
  v36 = 0;
  v37 = 0;
  Function_20183c4(v1, 0, &v31, 0);
  Function_2019ebc(v1, 0);
  v24 = 0;
  v25 = 0;
  v26 = 2048;
  v27 = 0;
  v28 = 2031617;
  v29 = 256;
  v30 = 0;
  Function_20183c4(v1, 1u, &v24, 0);
  Function_2019ebc(v1, 1u);
  v17 = 0;
  v18 = 0;
  v19 = 2048;
  v20 = 0;
  v21 = 35323905;
  v22 = 512;
  v23 = 0;
  Function_20183c4(v1, 2u, &v17, 0);
  v10 = 0;
  v11 = 0;
  v12 = 2048;
  v13 = 0;
  v14 = 2031617;
  v15 = 0;
  v16 = 0;
  Function_20183c4(v1, 4u, &v10, 0);
  Function_2019ebc(v1, 4u);
  v3 = 0;
  v4 = 0;
  v5 = 2048;
  v6 = 0;
  v7 = 35520513;
  v8 = 256;
  v9 = 0;
  Function_20183c4(v1, 5u, &v3, 0);
  Function_2019690(0, 32, 0, 0x27u);
  Function_2019690(4u, 32, 0, 0x27u);
  Function_2019690(1u, 32, 0, 0x27u);
  return Function_2019690(5u, 32, 0, 0x27u);
}

//----- (021D12C4) --------------------------------------------------------
int __fastcall Function_21d12c4(int a1)
{
  int v1;
  int v2;
  uchar *v3;
  int v4;
  int result;
  int v6;

  v1 = a1;
  v6 = 0;
  v2 = a1;
  v3 = (uchar *)(a1 + 17290);
  v4 = a1;
  do
  {
    *(uint *)(v2 + 20) = Function_2023790(8, 0x27u);
    *v3 &= 0xC7u;
    *(ushort *)(v2 + 17334) = 0;
    *(uint *)(v4 + 820) = 0;
    *(uint *)(v4 + 824) = 0;
    v2 += 4;
    v3 += 10;
    v4 += 8;
    ++v6;
  }
  while ( v6 < 5 );
  *(uint *)(v1 + 40) = Function_2023790(10, 0x27u);
  *(uint *)(v1 + 44) = Function_2023790(80, 0x27u);
  *(uchar *)(v1 + 17270) = 0;
  *(uchar *)(v1 + 17271) = 1;
  *(uint *)(v1 + 37876) = 1;
  *(uint *)(v1 + 37880) = 0;
  *(uint *)(v1 + 792) = 2;
  *(uint *)(v1 + 796) = Function_20318ec();
  *(uint *)(v1 + 37884) = 0;
  *(uint *)(v1 + 37888) = 0;
  *(uint *)(v1 + 772) = 0;
  *(uint *)(v1 + 37892) = 0;
  *(uint *)(v1 + 37896) = 0;
  Function_203608c();
  Function_21d2cb0(v1, 4);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 16), 7u, *(ushort **)(v1 + 40));
  *(uint *)(v1 + 17352) = malloc(0x27u, 15360);
  *(uint *)(v1 + 37872) = Function_2015920(0x27u);
  result = 788;
  *(uint *)(v1 + 788) = 0;
  return result;
}

//----- (021D13B4) --------------------------------------------------------
uint __fastcall Function_21d13b4(int *a1)
{
  int *v1;
  int v2;
  int v3;
  int *v4;
  int v5;

  v1 = a1;
  free(a1[4338]);
  Function_2015938(v1[9468]);
  v3 = 0;
  v4 = v1;
  do
  {
    Function_20237bc_FreeMsg(v4[5], v2);
    ++v3;
    ++v4;
  }
  while ( v3 < 5 );
  Function_20237bc_FreeMsg(v1[11], v2);
  return Function_20237bc_FreeMsg(v1[10], v5);
}

//----- (021D13F0) --------------------------------------------------------
uint __fastcall Function_21d13f0(int a1)
{
  int v1;

  v1 = a1;
  Function_2019044(a1, 5);
  Function_2019044(v1, 4);
  Function_2019044(v1, 3);
  Function_2019044(v1, 2);
  Function_2019044(v1, 1);
  Function_2019044(v1, 0);
  return free(v1);
}

//----- (021D142C) --------------------------------------------------------
int __fastcall Function_21d142c(uint **a1, int a2)
{
  uint **v2;
  uint *v3;
  int v4;
  uchar v5;

  v2 = a1;
  v3 = *a1;
  v4 = a2;
  Function_2007130(a2, 0, 0, 0, 64, 39);
  Function_2007130(v4, 1u, 4u, 0, 64, 39);
  LoadFromNARC_PlFont2(0, 416, 39);
  LoadFromNARC_PlFont2(4u, 416, 39);
  Function_20070e8(v4, 2u, v3, 2u, 0, 0x2000, 1, 39);
  Function_200710c(v4, 4u, v3, 2u, 0, 1536, 1, 39);
  Function_20070e8(v4, 3u, v3, 5u, 0, 0x2000, 1, 39);
  Function_200710c(v4, 5u, v3, 5u, 0, 1536, 1, 39);
  v5 = Function_2027b50((ushort *)v2[2][2]);
  Function_200dd0c(v3, 0, 1, 10, v5, 39);
  return Function_200daa4(v3, 0, 31, 11, 0, 39);
}

//----- (021D1524) --------------------------------------------------------
int Function_21d1524()
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = 20;
  v2 = 2048;
  v3 = 2048;
  v4 = 39;
  Function_201e86c(&v1);
  Function_201f834(20, 0x27u);
  Function_201e994();
  return Function_201f8e4();
}

//----- (021D1554) --------------------------------------------------------
int __fastcall Function_21d1554(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int *v6;
  int v7;

  v2 = a1;
  v3 = a2;
  Function_20a7944();
  Function_200a784(0, 126, 0, 32, 0, 0x7Eu, 0, 0x20u, 0x27u);
  *(uint *)(v2 + 52) = Function_20095c4(53, v2 + 56, 39, v4);
  Function_200964c(v2 + 56, 0, 0x100000, v5);
  v6 = 0;
  v7 = v2;
  do
  {
    *(uint *)(v7 + 352) = Function_2009714(2, v6, 0x27u);
    v6 = (int *)((char *)v6 + 1);
    v7 += 4;
  }
  while ( (int)v6 < 4 );
  *(uint *)(v2 + 368) = Function_2009a4c(*(uint *)(v2 + 352), v3, 6u, 1, 0, 1, 0x27u);
  *(uint *)(v2 + 372) = Function_2009b04(*(uint *)(v2 + 356), v3, 0, 0, 0, 1, 7, 0x27u);
  *(uint *)(v2 + 376) = Function_2009bc4(*(uint *)(v2 + 360), v3, 7u, 1, 0, 2u, 0x27u);
  *(uint *)(v2 + 380) = Function_2009bc4(*(uint *)(v2 + 364), v3, 8u, 1, 0, 3u, 0x27u);
  *(uint *)(v2 + 384) = Function_2009a4c(*(uint *)(v2 + 352), v3, 6u, 1, 1, 2, 0x27u);
  *(uint *)(v2 + 388) = Function_2009b04(*(uint *)(v2 + 356), v3, 0, 0, 1, 2, 3, 0x27u);
  *(uint *)(v2 + 392) = Function_2009bc4(*(uint *)(v2 + 360), v3, 7u, 1, 1, 2u, 0x27u);
  *(uint *)(v2 + 396) = Function_2009bc4(*(uint *)(v2 + 364), v3, 8u, 1, 1, 3u, 0x27u);
  Function_200a328(*(int **)(v2 + 368));
  Function_200a328(*(int **)(v2 + 384));
  Function_200a5c8(*(int **)(v2 + 372));
  return Function_200a5c8(*(int **)(v2 + 388));
}

//----- (021D16D8) --------------------------------------------------------
uint __fastcall Function_21d16d8(int *a1)
{
  int *v1;
  int v2;
  int v3;
  int *v4;
  short *v5;
  int v6;
  int *v7;
  int v8;
  int v9;
  int v11;
  uint *v12;
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

  v1 = a1;
  Function_20093b4((int)(a1 + 100), 0, 0, 0, 0, -1, -1, 0, 0, a1[88], a1[89], a1[90], a1[91], 0, 0);
  Function_20093b4((int)(v1 + 109), 1, 1, 1, 1, -1, -1, 0, 0, v1[88], v1[89], v1[90], v1[91], 0, 0);
  v2 = 0;
  v11 = v1[13];
  v12 = v1 + 100;
  v15 = 0;
  v16 = 4096;
  v17 = 4096;
  v18 = 4096;
  v19 = 0;
  v20 = 1;
  v21 = 1;
  v22 = 39;
  v3 = 24;
  v4 = v1;
  do
  {
    v12 = v1 + 109;
    v13 = v3 << 12;
    v14 = 0x40000;
    v21 = 2;
    v4[118] = Function_2021aa0((uint **)&v11);
    Function_2021cc8(v4[118], 1);
    Function_2021d6c(v4[118], v2);
    Function_2021cac(v4[118], 0);
    ++v2;
    v3 += 40;
    ++v4;
  }
  while ( v2 < 5 );
  v5 = &word_21D2EEC;
  v6 = 0;
  v7 = v1;
  do
  {
    v12 = v1 + 109;
    v13 = (ushort)*v5 << 12;
    v14 = (ushort)v5[1] << 12;
    v7[146] = Function_2021aa0((uint **)&v11);
    Function_2021cc8(v7[146], 1);
    Function_2021d6c(v7[146], (ushort)v5[2]);
    if ( v6 >= 8 )
      Function_2021e80(v7[146], 2);
    ++v6;
    v5 += 3;
    ++v7;
  }
  while ( v6 < 12 );
  Function_2021d6c(v1[146], 6u);
  v8 = 0;
  v9 = 32;
  do
  {
    v14 = (v9 << 12) + 0x100000;
    v13 = 98304;
    v1[132] = Function_2021aa0((uint **)&v11);
    Function_2021cc8(v1[132], 1);
    Function_2021d6c(v1[132], v8);
    Function_2021f58(v1[132], 1);
    Function_2021cac(v1[132], 0);
    ++v8;
    v9 += 32;
    ++v1;
  }
  while ( v8 < 5 );
  Function_201ff0c(0x10u, 1);
  return Function_201ff74(0x10u, 1);
}

//----- (021D18AC) --------------------------------------------------------
int __fastcall Function_21d18ac(uint **a1)
{
  uint **v1;
  uint *v2;
  short v3;
  char v4;
  int v5;
  int v7;

  v1 = a1;
  Function_201a7e8(*a1, (int)(a1 + 182), 0, 2, 1, 0x1Bu, 4u, 13, 40);
  Function_201ada4_ClearTextBox((int)(v1 + 182), 15);
  Function_201a7e8(*v1, (int)(v1 + 178), 1, 1, 2, 0x1Eu, 0xFu, 0, 1);
  Function_201ada4_ClearTextBox((int)(v1 + 178), 2);
  Function_201a7e8(*v1, (int)(v1 + 186), 1, 25, 21, 7u, 2u, 13, 451);
  Function_201ada4_ClearTextBox((int)(v1 + 186), 0);
  Function_2002eec(1, (int)v1[10], 0, 0x30u);
  v2 = v1[10];
  Function_201d78c((int)(v1 + 186), 1);
  v7 = 0;
  v3 = 1;
  v4 = 3;
  v5 = (int)(v1 + 158);
  do
  {
    Function_201a7e8(*v1, v5, 4, 5, v4, 0xAu, 2u, 13, v3);
    Function_201ada4_ClearTextBox(v5, 0);
    v3 += 20;
    v4 += 4;
    v5 += 16;
    ++v7;
  }
  while ( v7 < 5 );
  return Function_21d28e4(v1 + 158, 0, 920847, v1);
}

//----- (021D19D4) --------------------------------------------------------
uint __fastcall Function_21d19d4(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = 0;
  v3 = a1 + 632;
  do
  {
    Function_201a8fc(v3);
    ++v2;
    v3 += 16;
  }
  while ( v2 < 5 );
  Function_201a8fc(v1 + 744);
  Function_201a8fc(v1 + 712);
  return Function_201a8fc(v1 + 728);
}

//----- (021D1A10) --------------------------------------------------------
int __fastcall Function_21d1a10(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint v13;
  uint v14;
  int v15;

  v3 = a1;
  v4 = a3;
  if ( a2 <= 0 )
  {
    v7 = fflt(a2 << 12);
    v6 = fsub(v7, 1056964608);
  }
  else
  {
    v5 = fflt(a2 << 12);
    v6 = fadd(0x3F000000u, v5);
  }
  v8 = v4 - 8;
  v13 = ffix(v6);
  if ( v8 <= 0 )
  {
    v11 = fflt(v8 << 12);
    v10 = fsub(v11, 1056964608);
  }
  else
  {
    v9 = fflt(v8 << 12);
    v10 = fadd(0x3F000000u, v9);
  }
  v14 = ffix(v10);
  v15 = 0;
  return Function_2021c50(v3, (int *)&v13);
}

//----- (021D1A80) --------------------------------------------------------
int __fastcall Function_21d1a80(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  uint v5;
  uint v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int result;
  int v12;
  int v13;
  int v14;
  int v15;
  char v16;

  v12 = a1;
  v13 = 0;
  v1 = Function_2022664((uchar *)nullsub_90);
  v14 = v1;
  if ( v1 != -1 )
  {
    switch ( (uchar)v1 )
    {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
        if ( *(uchar *)(v12 + 17270) != v1 )
        {
          *(uchar *)(v12 + 17270) = v1;
          Function_21d1cac(v12 + 584, v1);
          Function_2005748(0x5DCu);
        }
        break;
      case 8:
        if ( *(uint *)(v12 + 772) == 4 )
        {
          if ( Function_203608c() )
          {
            if ( *(uchar *)(v12 + 17291) == 2 )
            {
              Function_2005748(0x5F2u);
            }
            else
            {
              Function_21d2a98(v12);
              Function_21d2cb0(v12, 5);
              Function_21d1cdc(v12 + 584, 1);
              v13 = 1;
              Function_2005748(0x5DCu);
            }
          }
          else if ( *(uint *)(v12 + 796) == Function_20318ec() )
          {
            v2 = Function_2035e18();
            Function_2037b58(v2);
            *(uint *)(v12 + 37876) = 2;
            Function_21d2a98(v12);
            Function_21d2cb0(v12, 5);
            Function_21d1cdc(v12 + 584, 1);
            v13 = 1;
            Function_2005748(0x5DCu);
          }
          else
          {
            Function_2005748(0x5F2u);
          }
        }
        break;
      case 9:
      case 0xA:
      case 0xB:
        v3 = v12;
        v4 = 0;
        v5 = 30;
        v6 = 29;
        v15 = v1 - 9;
        do
        {
          if ( v15 == v4 )
            Function_2021d6c(*(uint *)(v3 + 620), v5);
          else
            Function_2021d6c(*(uint *)(v3 + 620), v6);
          ++v4;
          v5 += 2;
          v3 += 4;
          v6 += 2;
        }
        while ( v4 < 3 );
        if ( *(uchar *)(v12 + 17271) != v14 - 9 )
        {
          *(uchar *)(v12 + 17271) = v14 - 9;
          Function_2005748(0x5E5u);
        }
        break;
      default:
        break;
    }
  }
  v7 = Function_2022644((uchar *)&dword_21D2DD4[2]);
  v8 = Function_203608c();
  Function_2021cac(*(uint *)(v12 + 4 * v8 + 472), 0);
  if ( v7 != -1 )
  {
    v9 = Function_203608c();
    Function_21d1a10(*(uint **)(v12 + 4 * v9 + 472), (ushort)word_21BF6D8, (ushort)word_21BF6DA);
    v10 = Function_203608c();
    Function_2021cac(*(uint *)(v12 + 4 * v10 + 472), 1);
  }
  result = Function_201e564(&v16, 4u, 0x40u);
  if ( result == 1 )
  {
    Function_21d2d4c(v12 + 17272, &v16, *(uchar *)(v12 + 17270), *(uchar *)(v12 + 17271));
    result = v13;
    if ( v13 == 1 )
    {
      result = v12;
      *(uchar *)(v12 + 17280) &= 0xC7u;
    }
  }
  return result;
}

//----- (021D1CAC) --------------------------------------------------------
int __fastcall Function_21d1cac(int *a1, int a2)
{
  short *v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int result;

  v2 = &word_21D2EEC;
  v3 = a1;
  v4 = a2;
  v5 = 0;
  do
  {
    v6 = *v3;
    if ( v5 == v4 )
      result = Function_2021d6c(v6, (ushort)v2[2] + 1);
    else
      result = Function_2021d6c(v6, (ushort)v2[2]);
    ++v5;
    v2 += 3;
    ++v3;
  }
  while ( v5 < 8 );
  return result;
}

//----- (021D1CDC) --------------------------------------------------------
int __fastcall Function_21d1cdc(int a1, int a2)
{
  int v2;
  int result;

  v2 = *(uint *)(a1 + 32);
  if ( a2 == 1 )
    result = Function_2021d6c(v2, 0x16u);
  else
    result = Function_2021d6c(v2, 0x15u);
  return result;
}

//----- (021D1CF4) --------------------------------------------------------
int __fastcall Function_21d1cf4(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_21d1a80(a1);
  if ( Function_203608c() )
  {
    Function_21d29c8(v2);
  }
  else if ( Function_21d28c8() != 1 )
  {
    Function_21d29c8(v2);
  }
  Function_21d2820(v2);
  Function_21d2754(v2 + 712, v2 + 17282, v2 + 17332, 1);
  return v3;
}

//----- (021D1D40) --------------------------------------------------------
int __fastcall Function_21d1d40(int a1)
{
  int v1;

  v1 = a1;
  Function_21d2820(a1);
  return Function_21d2754(v1 + 712, v1 + 17282, v1 + 17332, 0);
}

//----- (021D1D64) --------------------------------------------------------
int __fastcall Function_21d1d64(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( *(uint *)(a1 + 800) == Function_203608c() )
    Function_21d2a98(v2);
  else
    Function_21d2a98(v2);
  Function_21d2cb0(v2, 2);
  Function_2005748(0x5E4u);
  G2x_SetBlendBrightness_(&REG_BLDCNT, 30, -6);
  Function_21d1d40(v2);
  return v3;
}

//----- (021D1DBC) --------------------------------------------------------
int __fastcall Function_21d1dbc(int a1, int a2)
{
  int v2;

  v2 = a2;
  Function_21d1d40(a1);
  return v2;
}

//----- (021D1DC8) --------------------------------------------------------
int __fastcall Function_21d1dc8(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  REG_BLDCNT = 0;
  v3 = a1;
  Function_21d2b3c();
  Function_21d2cb0(v3, 4);
  Function_21d1d40(v3);
  *(uint *)(v3 + 37892) = 0;
  return v2;
}

//----- (021D1DFC) --------------------------------------------------------
int __fastcall Function_21d1dfc(int *a1, int a2)
{
  int *v2;
  int v3;
  int v5;
  int v6;
  int v7;
  int v8;
  char v9;
  char v10;

  v2 = a1;
  v3 = a2;
  if ( Function_21d2b0c(a1[12]) )
  {
    v5 = *v2;
    v6 = 0;
    v7 = 180;
    v8 = 8;
    v9 = 25;
    v10 = 6;
    if ( !Function_21d2cec(v2, &v5) )
      ErrorHandler();
    Function_21d2cb0(v2, 6);
  }
  Function_21d1d40((int)v2);
  return v3;
}

//----- (021D1E4C) --------------------------------------------------------
int __fastcall Function_21d1e4c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int result;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  char v12;
  char v13;
  int v14;

  v14 = a4;
  v4 = a2;
  v5 = a1;
  *(uchar *)(a1 + 17280) &= 0xC7u;
  if ( *(uchar *)(a1 + 17291) == 2 && Function_203608c() )
  {
    Function_21d1d40(v5);
    if ( Function_21d2d30(v5) )
      Function_2005748(0x5F2u);
    result = v4;
  }
  else if ( Function_203608c() || !*(uint *)(v5 + 37812) )
  {
    v7 = Function_21d2a30();
    if ( v7 == Function_2035e18() )
    {
      v8 = Function_20159fc(*(uint *)(v5 + 37872));
      if ( v8 == 1 )
      {
        if ( Function_203608c() )
        {
          MI_CpuFill8(&v12, 0, 4u);
          v13 = 0;
          v12 = Function_203608c();
          *(uchar *)(v5 + 37820) = 1;
          *(ushort *)(v5 + 37818) = 0;
          Function_21d2cb0(v5, 7);
          Function_20359dc(126, (int)&v12, 4);
          Function_200e084(v5 + 728, 1);
        }
        else
        {
          Function_21d2cb0(v5, 13);
          Function_21d2a98(v5);
        }
        Function_21d2d10(v5);
        Function_201a954(v5 + 712, v9);
      }
      else if ( v8 == 2 )
      {
        Function_21d2cb0(v5, 4);
        Function_21d1cdc(v5 + 584, 0);
        Function_200e084(v5 + 728, 1);
        Function_21d2d10(v5);
        Function_201a954(v5 + 712, v10);
        if ( !Function_203608c() )
        {
          v11 = Function_2035e18();
          Function_2037b58(v11 + 1);
          *(uint *)(v5 + 37876) = 1;
        }
      }
      Function_21d1d40(v5);
      result = v4;
    }
    else
    {
      Function_21d1d40(v5);
      result = v4;
    }
  }
  else
  {
    Function_21d1d40(v5);
    result = v4;
  }
  return result;
}

//----- (021D1FB0) --------------------------------------------------------
int __fastcall Function_21d1fb0(int a1, int a2)
{
  int v2;

  v2 = a2;
  *(uchar *)(a1 + 17280) &= 0xC7u;
  *(ushort *)(a1 + 37818) = 0;
  Function_21d1d40(a1);
  return v2;
}

//----- (021D1FD4) --------------------------------------------------------
int __fastcall Function_21d1fd4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;
  int v8;

  v8 = a4;
  v4 = a2;
  v5 = a1;
  *(uchar *)(a1 + 17280) &= 0xC7u;
  v6 = Function_2035e18();
  if ( *(ushort *)(v5 + 37816) == v6 && *(ushort *)(v5 + 37816) == Function_21d2a30(v6) )
  {
    if ( (short)++*(ushort *)(v5 + 37818) > 30 )
    {
      MI_CpuFill8(&v8, 0, 4u);
      BYTE2(v8) = 1;
      LOBYTE(v8) = Function_203608c();
      Function_20359dc(126, (int)&v8, 4);
      *(ushort *)(v5 + 37818) = 0;
      Function_21d2cb0(v5, 10);
    }
    Function_21d1d40(v5);
    result = v4;
  }
  else
  {
    *(ushort *)(v5 + 37818) = 0;
    Function_21d2cb0(v5, 9);
    Function_21d1d40(v5);
    result = v4;
  }
  return result;
}

//----- (021D206C) --------------------------------------------------------
int __fastcall Function_21d206c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  *(uchar *)(a1 + 17280) &= 0xC7u;
  *(uchar *)(a1 + 37820) = 0;
  Function_21d2cb0(a1, 4);
  Function_21d1cdc(v2 + 584, 0);
  Function_21d1d40(v2);
  return v3;
}

//----- (021D20A8) --------------------------------------------------------
int __fastcall Function_21d20a8(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  Function_21d2a98(a1);
  Function_21d2cb0(v3, 11);
  Function_21d1d40(v3);
  return v2;
}

//----- (021D20C8) --------------------------------------------------------
int __fastcall Function_21d20c8(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( Function_21d2b0c(*(uint *)(a1 + 48)) )
  {
    *(uint *)(v2 + 784) = 0;
    Function_21d2cb0(v2, 12);
  }
  Function_21d1d40(v2);
  return v3;
}

//----- (021D20F4) --------------------------------------------------------
int __fastcall Function_21d20f4(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( ++*(uint *)(a1 + 784) > 60 )
  {
    Function_200f174(0, 16, 16, 0, 16, 1, 39);
    v3 = 3;
  }
  Function_21d1d40(v2);
  return v3;
}

//----- (021D2130) --------------------------------------------------------
int __fastcall Function_21d2130(int *a1, int a2)
{
  int *v2;
  int v3;
  int v5;
  int v6;
  int v7;
  int v8;
  char v9;
  char v10;

  v2 = a1;
  v3 = a2;
  if ( Function_21d2b0c(a1[12]) )
  {
    v5 = *v2;
    v6 = 0;
    v7 = 180;
    v8 = 8;
    v9 = 25;
    v10 = 6;
    if ( !Function_21d2cec(v2, &v5) )
      ErrorHandler();
    Function_21d2cb0(v2, 14);
  }
  Function_21d1d40((int)v2);
  return v3;
}

//----- (021D2180) --------------------------------------------------------
int __fastcall Function_21d2180(int *a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  int result;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = Function_20159fc(a1[9468]);
  if ( v2[198] != Function_21d2a30(v4) || v2[9453] )
  {
    Function_21d1d40((int)v2);
    result = v3;
  }
  else
  {
    if ( v4 == 1 )
    {
      Function_21d2cb0(v2, 15);
      Function_2035ac4(127, 0, 0);
      Function_2032ee8(0);
      Function_200b498(v2[3], 0);
      v3 = 2;
      Function_21d2d10(v2);
    }
    else if ( v4 == 2 )
    {
      Function_21d2cb0(v2, 4);
      Function_21d1cdc((int)(v2 + 146), 0);
      Function_200e084((int)(v2 + 182), 1);
      Function_21d2d10(v2);
      if ( !Function_203608c() )
      {
        v6 = Function_2035e18();
        Function_2037b58(v6 + 1);
        v2[9469] = 1;
      }
    }
    Function_21d1d40((int)v2);
    result = v3;
  }
  return result;
}

//----- (021D223C) --------------------------------------------------------
int __fastcall Function_21d223c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_2032ee8(0);
  Function_200b498(*(uint *)(v2 + 12), 0);
  Function_21d2a98(v2);
  Function_21d2cb0(v2, 16);
  Function_21d1d40(v2);
  return v3;
}

//----- (021D2270) --------------------------------------------------------
int __fastcall Function_21d2270(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( Function_21d2b0c(*(uint *)(a1 + 48)) )
  {
    Function_21d2cb0(v2, 17);
    Function_20364f0(200);
  }
  Function_21d1d40(v2);
  return v3;
}

//----- (021D2298) --------------------------------------------------------
int __fastcall Function_21d2298(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( Function_2036540(200) || Function_2035e18() == 1 )
  {
    Function_200f174(0, 16, 16, 0, 16, 1, 39);
    v3 = 3;
  }
  Function_21d1d40(v2);
  return v3;
}

//----- (021D22D8) --------------------------------------------------------
int __fastcall Function_21d22d8(int a1, int a2)
{
  return a2;
}

//----- (021D22DC) --------------------------------------------------------
int __fastcall Function_21d22dc(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  Function_21d2a98(a1);
  Function_21d2cb0(v3, 20);
  Function_21d1d40(v3);
  return v2;
}

//----- (021D22FC) --------------------------------------------------------
int __fastcall Function_21d22fc(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( Function_21d2b0c(*(uint *)(a1 + 48)) )
    Function_21d2cb0(v2, 12);
  Function_21d1d40(v2);
  return v3;
}

//----- (021D2320) --------------------------------------------------------
int __fastcall Function_21d2320(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = *(uint *)(a1 + 48);
  v4 = a2;
  if ( v3 != 255 && !Function_21d2b0c(v3) )
    Call_RemoveTextInterpreterTaskFromTaskList(*(uint *)(v2 + 48) & 0xFF);
  Function_21d2a98(v2);
  Function_21d2cb0(v2, 22);
  Function_2005748(0x5E4u);
  if ( !Function_203608c() )
    Function_21d2b3c(v2, 0);
  *(uint *)(v2 + 37808) = Function_2035e18();
  Function_21d1d40(v2);
  return v4;
}

//----- (021D2380) --------------------------------------------------------
int __fastcall Function_21d2380(uint *a1, int a2)
{
  uint *v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( a1[9452] && a1[9452] != Function_2035e18() )
    v2[9452] = 0;
  if ( Function_21d2b0c(v2[12]) )
  {
    Function_21d2cb0(v2, 23);
    v2[196] = 0;
  }
  Function_21d1d40((int)v2);
  return v3;
}

//----- (021D23C8) --------------------------------------------------------
int __fastcall Function_21d23c8(uint *a1, int a2)
{
  uint *v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( a1[9452] && a1[9452] != Function_2035e18() )
    v2[9452] = 0;
  if ( ++v2[196] > 60 && !v2[9452] )
  {
    Function_21d2b2c(v2);
    Function_21d2cb0(v2, 4);
    if ( !Function_203608c() )
    {
      v2[9469] = 1;
      Function_21d2b3c(v2, 1);
    }
  }
  Function_21d1d40((int)v2);
  return v3;
}

//----- (021D2434) --------------------------------------------------------
int __fastcall Function_58_21d2434(int result, int a2, int a3)
{
  int v3;
  int *v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v3 = a2;
  v4 = (int *)result;
  v5 = a3;
  if ( a2 > 15 )
  {
    if ( a2 != 21 )
      return result;
    result = *(uchar *)(result + 37820);
    if ( result == 1 )
      return result;
    Function_2032ee8(a3);
    Function_200b498(v4[3], 0);
    result = Function_203608c();
    if ( v5 == result )
      return result;
    if ( !Function_203608c() )
      v4[9453] &= v5 ^ 0xFFFF;
    v7 = v4[193];
    if ( v7 == 6 || v7 == 14 )
    {
      Function_21d2d10(v4);
      Function_201a954((int)(v4 + 178), v8);
    }
    Function_21d1cdc((int)(v4 + 146), 0);
    return Function_21d2cb0(v4, v3);
  }
  if ( a2 >= 15 )
    return Function_21d2cb0(v4, v3);
  switch ( (uchar)a2 )
  {
    case 1:
      v6 = *(uint *)(result + 772);
      if ( v6 == 6 || v6 == 14 )
        Function_21d2d10(v4);
      Function_21d1cdc((int)(v4 + 146), 0);
      Function_2032ee8(v5);
      Function_200b498(v4[3], 0);
      v4[200] = v5;
      v4[9453] = 0;
      return Function_21d2cb0(v4, v3);
    case 3:
      Function_21d2b2c(result);
      return Function_21d2cb0(v4, v3);
    case 8:
    case 9:
      return Function_21d2cb0(v4, v3);
    default:
      return result;
  }
  return result;
}

//----- (021D2528) --------------------------------------------------------
int __fastcall Function_21d2528(int a1, int a2, ushort a3, ushort a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  ushort v10;
  int v11;
  ushort v12;
  ushort v13;
  ushort v14;
  ushort v15;
  ushort v16;
  int v17;
  int v18;
  int v20;

  v10 = a7;
  v11 = a2;
  v12 = a3;
  v13 = a4;
  v20 = a1;
  v14 = a8;
  v15 = a9;
  v16 = a10;
  if ( a7 < 0 )
  {
    v17 = -a7;
    if ( -a7 > a9 )
      v17 = a9;
    v10 = 0;
    v12 += v17;
    a5 -= v17;
    v15 = a9 - v17;
  }
  if ( a8 < 0 )
  {
    v18 = -a8;
    if ( -a8 > a10 )
      v18 = a10;
    v14 = 0;
    v13 += v18;
    a6 -= v18;
    v16 = a10 - v18;
  }
  return Function_201addc(v20, v11, v12, v13, a5, a6, v10, v14, v15, v16);
}

//----- (021D25A8) --------------------------------------------------------
int *__fastcall Function_21d25a8(int a1, int a2, int a3, int a4, int *a5, int *a6, int a7, int a8)
{
  int v8;
  int v9;
  int *result;
  int v11;
  int v12;
  int j;
  int v14;
  int i;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;

  v16 = a1;
  v17 = a2;
  v18 = a3;
  v19 = a4;
  v8 = *a5;
  v9 = *a6;
  v24 = a3;
  v22 = a4;
  if ( a7 || a8 )
  {
    v23 = a3 - v8;
    if ( a3 - v8 < 0 )
      v23 = v8 - a3;
    v11 = a4 - v9;
    if ( a4 - v9 < 0 )
      v11 = v9 - a4;
    if ( v23 <= v11 )
    {
      if ( v9 <= a4 )
      {
        if ( v8 >= a3 )
          v20 = -1;
        else
          v20 = 1;
      }
      else
      {
        if ( v8 <= a3 )
          v20 = -1;
        else
          v20 = 1;
        v22 = *a6;
        v9 = a4;
        v8 = a3;
      }
      Function_21d2528(a1, a2, 0, 0, 6, 6, v8, v9, 6, 6);
      v14 = v9 + 1;
      for ( i = v11 >> 1; v14 <= v22; ++v14 )
      {
        i -= v23;
        if ( i < 0 )
        {
          i += v11;
          v8 += v20;
        }
        Function_21d2528(v16, v17, 0, 0, 6, 6, v8, v14, 6, 6);
      }
    }
    else
    {
      if ( v8 <= a3 )
      {
        if ( v9 >= a4 )
          v21 = -1;
        else
          v21 = 1;
      }
      else
      {
        if ( v9 <= a4 )
          v21 = -1;
        else
          v21 = 1;
        v24 = *a5;
        v8 = a3;
        v9 = a4;
      }
      Function_21d2528(a1, a2, 0, 0, 6, 6, v8, v9, 6, 6);
      v12 = v8 + 1;
      for ( j = v23 >> 1; v12 <= v24; ++v12 )
      {
        j -= v11;
        if ( j < 0 )
        {
          j += v23;
          v9 += v21;
        }
        Function_21d2528(v16, v17, 0, 0, 6, 6, v12, v9, 6, 6);
      }
    }
    *a5 = v18;
    result = a6;
    *a6 = v19;
  }
  else
  {
    *a5 = a3;
    result = a6;
    *a6 = a4;
  }
  return result;
}

//----- (021D2720) --------------------------------------------------------
int __fastcall Function_21d2720(int result, int a2)
{
  int v2;
  uint v3;

  v2 = 0;
  do
  {
    *(ushort *)(a2 + 2) = (uint)*(uchar *)(result + 8) << 26 >> 29;
    v3 = (uint)*(uchar *)(result + 8) << 26 >> 29;
    if ( v3 )
    {
      *(uchar *)a2 = *(uchar *)(result + v3 - 1);
      *(uchar *)(a2 + 1) = *(uchar *)(result + ((uint)*(uchar *)(result + 8) << 26 >> 29) + 3);
    }
    ++v2;
    result += 10;
    a2 += 4;
  }
  while ( v2 < 5 );
  return result;
}

//----- (021D2754) --------------------------------------------------------
int __fastcall Function_21d2754(int a1, int a2, uchar *a3, int a4)
{
  int v4;
  uchar *v5;
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

  v17 = a4;
  v9 = a1;
  v10 = a2;
  v11 = (int)a3;
  v12 = a4;
  v13 = 0;
  v14 = 0;
  v4 = a2;
  v5 = a3;
  do
  {
    if ( (uint)*(uchar *)(v4 + 8) << 26 >> 29 )
    {
      if ( *((ushort *)v5 + 1) )
      {
        v16 = *v5 - 9;
        v15 = v5[1] - 17;
      }
      v6 = 0;
      a2 = (uint)*(uchar *)(v4 + 8) << 26 >> 29;
      if ( a2 > 0 )
      {
        v13 = 1;
        if ( (int)((uint)*(uchar *)(v4 + 8) << 26 >> 29) > 0 )
        {
          do
          {
            Function_21d25a8(
              v9,
              (int)&dword_21D2F34[48 * ((uint)*(uchar *)(v4 + 8) << 24 >> 30)
                                + 6 * (*(uchar *)(v4 + 8) & 7)],
              *(uchar *)(v4 + v6) - 9,
              *(uchar *)(v4 + v6 + 4) - 17,
              &v16,
              &v15,
              v6,
              *((ushort *)v5 + 1));
            ++v6;
          }
          while ( v6 < (int)((uint)*(uchar *)(v4 + 8) << 26 >> 29) );
        }
      }
    }
    v4 += 10;
    v5 += 4;
    ++v14;
  }
  while ( v14 < 5 );
  if ( v13 && v12 )
    Function_201a954(v9, a2);
  Function_21d2720(v10, v11);
  v7 = 0;
  do
  {
    ++v7;
    *(uchar *)(v10 + 8) &= 0xC7u;
    result = v10 + 10;
    v10 += 10;
  }
  while ( v7 < 5 );
  return result;
}

//----- (021D2820) --------------------------------------------------------
uint __fastcall Function_21d2820(int a1)
{
  int v1;
  int v2;
  int v3;
  uint result;
  uint v5;

  v1 = a1;
  v2 = 0;
  v3 = a1 + 17282;
  do
  {
    result = Function_203608c();
    if ( v2 != result )
    {
      if ( (uint)*(uchar *)(v3 + 8) << 26 >> 29 && Function_2032ee8(v2) )
      {
        Function_2021cac(*(uint *)(v1 + 472), 1);
        v5 = v3 + ((uint)*(uchar *)(v3 + 8) << 26 >> 29);
        result = Function_21d1a10(*(uint **)(v1 + 472), *(uchar *)(v5 - 1), *(uchar *)(v5 + 3));
      }
      else
      {
        result = Function_2021cac(*(uint *)(v1 + 472), 0);
      }
    }
    ++v2;
    v3 += 10;
    v1 += 4;
  }
  while ( v2 < 5 );
  return result;
}

//----- (021D2888) --------------------------------------------------------
uint __fastcall Function_21d2888(ushort *a1, int a2, int a3, int a4)
{
  int v5;

  v5 = a4;
  *a1 += 20;
  if ( (ushort)*a1 > 0x168u )
    *a1 = 0;
  LOWORD(v5) = 32 * ((int)(10 * Function_201d250((ushort)*a1)) / 4096 + 15) | 0x1D;
  return GX_LoadOBJPltt((int)&v5, 24, 2u);
}

//----- (021D28C8) --------------------------------------------------------
int Function_21d28c8()
{
  int v0;
  int v1;

  v0 = 0;
  v1 = 0;
  do
  {
    if ( Function_2032ee8(v1) )
      ++v0;
    ++v1;
  }
  while ( v1 < 5 );
  return v0;
}

//----- (021D28E4) --------------------------------------------------------
int __fastcall Function_21d28e4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int result;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  ushort *v14;
  int v15;
  int v16;

  v4 = a4;
  v5 = a1;
  Function_203608c();
  result = Function_21d2a54(v4);
  if ( result )
  {
    v16 = 0;
    v7 = v4;
    v8 = v4;
    do
    {
      if ( *(uint *)(v7 + 820) )
        Function_2021cac(*(uint *)(v8 + 528), 1);
      else
        Function_2021cac(*(uint *)(v8 + 528), 0);
      v7 += 8;
      v8 += 4;
      ++v16;
    }
    while ( v16 < 5 );
    v9 = 0;
    v10 = v5;
    do
    {
      Function_201ae78(v10, 0, 0, 0, 0x50u, 0x10u);
      ++v9;
      v10 += 16;
    }
    while ( v9 < 5 );
    v12 = 0;
    v13 = v4;
    do
    {
      v14 = *(ushort **)(v4 + 820);
      if ( v14 )
      {
        Function_2025ef4(v14, *(ushort **)(v13 + 20));
        v15 = *(uint *)(v13 + 20);
        Function_201d78c(v5, 1);
      }
      result = Function_201a954(v5, v11);
      ++v12;
      v4 += 8;
      v13 += 4;
      v5 += 16;
    }
    while ( v12 < 5 );
  }
  return result;
}

//----- (021D29C8) --------------------------------------------------------
int __fastcall Function_21d29c8(int a1)
{
  int v1;
  int result;
  uchar *v3;
  char *v4;
  int v5;
  char v6;

  v1 = a1;
  if ( Function_203608c() )
  {
    result = Function_203629c();
    if ( result )
      result = Function_20359dc(119, v1 + 17272, 10);
  }
  else
  {
    result = Function_2036284();
    if ( result )
    {
      *(uchar *)(v1 + 17281) = *(uint *)(v1 + 37876);
      v3 = (uchar *)(v1 + 37821);
      v4 = (char *)(v1 + 17272);
      v5 = 10;
      do
      {
        v6 = *v4++;
        *v3++ = v6;
        --v5;
      }
      while ( v5 );
      result = Function_2035ac4(120, v1 + 37821, 50);
    }
  }
  return result;
}

//----- (021D2A30) --------------------------------------------------------
int Function_21d2a30()
{
  int v0;
  int v1;

  v0 = 0;
  v1 = 0;
  do
  {
    if ( Function_2032ee8(v1) )
      ++v0;
    ++v1;
  }
  while ( v1 < 5 );
  return v0;
}

//----- (021D2A4C) --------------------------------------------------------
int Function_21d2a4c()
{
  return Function_21d2a30();
}

//----- (021D2A54) --------------------------------------------------------
int __fastcall Function_21d2a54(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = 0;
  v3 = 0;
  v4 = a1;
  do
  {
    *(uint *)(v4 + 824) = *(uint *)(v4 + 820);
    *(uint *)(v4 + 820) = Function_2032ee8(v3++);
    v4 += 8;
  }
  while ( v3 < 5 );
  v5 = 0;
  do
  {
    if ( *(uint *)(v1 + 824) != *(uint *)(v1 + 820) )
      v2 = 1;
    ++v5;
    v1 += 8;
  }
  while ( v5 < 5 );
  return v2;
}

//----- (021D2A98) --------------------------------------------------------
int __fastcall Function_21d2a98(int a1, uint a2, int a3)
{
  int v3;
  uint v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;
  int result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = (ushort *)Function_2023790(80, 0x27u);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v3 + 16), v4, v6);
  Function_200c388(*(uint **)(v3 + 12), *(uint *)(v3 + 44), (int)v6);
  Function_20237bc_FreeMsg((int)v6, v7);
  Function_201ada4_ClearTextBox(v3 + 728, 15);
  Function_200e060(v3 + 728, 0, 1, 0xAu);
  if ( !v5 )
    v5 = 0;
  v8 = *(uint *)(v3 + 44);
  result = Function_201d738_CallInitTextInterpreter(v3 + 728, 1);
  *(uint *)(v3 + 48) = result;
  if ( !v5 )
  {
    result = 255;
    *(uint *)(v3 + 48) = 255;
  }
  return result;
}

//----- (021D2B0C) --------------------------------------------------------
BOOL __fastcall Function_21d2b0c(int a1)
{
  BOOL result;

  if ( a1 == 255 )
    result = 1;
  else
    result = Function_201d724((uchar)a1) == 0;
  return result;
}

//----- (021D2B2C) --------------------------------------------------------
char *__fastcall Function_21d2b2c(int a1)
{
  return Function_200e084(a1 + 728, 0);
}

//----- (021D2B3C) --------------------------------------------------------
int __fastcall Function_21d2b3c(int a1, int a2)
{
  int v2;
  int result;
  int v4;

  v2 = a2;
  result = Function_203608c();
  if ( !result )
  {
    v4 = v2 + Function_2035e18();
    if ( v4 > 5 )
      v4 = 5;
    result = Function_2037b58(v4);
  }
  return result;
}

//----- (021D2B5C) --------------------------------------------------------
int __fastcall Function_21d2b5c(int *a1)
{
  int *v1;
  int v2;
  int v4;
  uint v5;

  v1 = a1;
  v2 = Function_21d2a30();
  switch ( (uchar)v2 )
  {
    case 1:
      if ( v1[193] > 14 )
        break;
      if ( Function_20318ec() != 1 )
        v1[9472] = 1;
      v1[194] = 19;
      Function_2037b58(1);
      if ( v1[9470] )
      {
        Function_21d2d10(v1);
        Function_2021d6c(v1[154], 0x15u);
      }
      return 2;
    case 2:
    case 3:
    case 4:
      Function_205bea8(1u);
      if ( v2 < v1[197] )
      {
        if ( v1[9469] == 2 )
          Function_21d2b3c((int)v1, 0);
        else
          Function_21d2b3c((int)v1, 1);
      }
      break;
    case 5:
      Function_205bea8(8u);
      break;
    default:
      break;
  }
  if ( v2 < v1[197] )
  {
    v1[198] = Function_2035e18();
    v1[199] = Function_20318ec();
    if ( v1[9473] )
    {
      if ( !(v1[9474] & v1[199]) )
      {
        Function_21d2b3c((int)v1, 1);
        v1[9469] = 1;
        v1[9473] = 0;
        v1[9474] = 0;
      }
    }
  }
  v1[197] = Function_21d2a30();
  if ( v1[198] < Function_2035e18() )
  {
    v1[9469] = 2;
    v1[9473] = 1;
    v1[9474] = Function_20318ec() ^ v1[199];
    v4 = 0;
    v5 = v1[9474] - 2;
    if ( v5 <= 0xE && (1 << v5) & 0x4045 )
      v4 = 1;
    if ( !v4 )
      ErrorHandler();
  }
  return 1;
}

//----- (021D2CB0) --------------------------------------------------------
int __fastcall Function_21d2cb0(int result, int a2)
{
  *(uint *)(result + 776) = a2;
  return result;
}

//----- (021D2CB8) --------------------------------------------------------
int __fastcall Function_21d2cb8(int result, int a2)
{
  int v2;

  v2 = *(uint *)(result + 776);
  if ( *(uint *)(result + 772) != v2 )
  {
    if ( a2 == 2 )
    {
      if ( dword_21D3184[2 * v2] )
        *(uint *)(result + 772) = v2;
    }
    else
    {
      *(uint *)(result + 772) = v2;
    }
  }
  return result;
}

//----- (021D2CEC) --------------------------------------------------------
int __fastcall Function_21d2cec(int a1, int a2)
{
  int v2;
  int result;

  v2 = a1;
  if ( *(uint *)(a1 + 37880) )
    return 0;
  Function_2015958(*(uint *)(a1 + 37872), a2);
  result = 1;
  *(uint *)(v2 + 37880) = 1;
  return result;
}

//----- (021D2D10) --------------------------------------------------------
int __fastcall Function_21d2d10(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = 37880;
  if ( *(uint *)(v1 + 37880) )
  {
    Function_2015a54(*(int **)(v1 + 37872));
    result = 37880;
    *(uint *)(v1 + 37880) = 0;
  }
  return result;
}

//----- (021D2D30) --------------------------------------------------------
BOOL Function_21d2d30()
{
  return Function_2022664((uchar *)dword_21D2DD4) != -1;
}

//----- (021D2D4C) --------------------------------------------------------
uchar *__fastcall Function_21d2d4c(uchar *result, ushort *a2, char a3, char a4)
{
  ushort *v4;
  char v5;
  char v6;
  int v7;
  int v8;
  uint v9;
  int v10;
  char v11;

  v4 = a2;
  v5 = a3;
  v6 = a4;
  if ( *a2 )
  {
    *result = a2[1];
    result[4] = a2[2];
    v7 = (int)&a2[4 * (*a2 - 1)];
    result[1] = *(ushort *)(v7 + 2);
    result[5] = *(ushort *)(v7 + 4);
    v8 = 0;
    do
    {
      if ( !((uchar)result[v8] + (uchar)result[v8 + 4]) )
        *v4 = 0;
      ++v8;
    }
    while ( v8 < 2 );
  }
  v9 = (ushort)*v4;
  if ( v9 < 2 )
  {
    v11 = result[8] & 0xC7;
    v10 = 8 * (uchar)v9 & 0x3F;
  }
  else
  {
    LOBYTE(v10) = result[8] & 0xC7;
    v11 = 16;
  }
  result[8] = v11 | v10;
  result[8] = result[8] & 0xF8 | v5 & 7;
  result[8] = (v6 << 6) | result[8] & 0x3F;
  return result;
}

//----- (021D2EB8) --------------------------------------------------------
int __fastcall nullsub_90(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int (__fastcall *a9)(int, int, int))
{
  return a9(a1, a5, a6);
}

