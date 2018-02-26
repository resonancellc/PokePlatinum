//----- (021D0D80) --------------------------------------------------------
int __fastcall Function_87_21d0d80(int a1)
{
  int v1;
  uint *v2;

  v1 = a1;
  Function_2017fc8(3, 60, 0x4000);
  Function_2017fc8(3, 61, 114688);
  v2 = (uint *)MallocSomeDataAndStorePtrInOverlayData1c(v1, 220, 0x3Cu);
  if ( v2 )
  {
    v2[51] = LoadPtrToOverWorldDataIn18(v1);
    v2[53] = 0;
    v2[52] = Function_202e148(v2[51]);
    Function_21d0fc4(v2, v2[51]);
    v2[50] = Function_21d106c(v2, v2);
    v2[54] = Function_21d11d0(v2[50], 0);
  }
  return 1;
}

//----- (021D0DFC) --------------------------------------------------------
int __fastcall Function_87_21d0dfc(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  Function_21d1140(*(uint *)(v2 + 200));
  Function_21d1000(v2);
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(61);
  Function_201807c(60);
  return 1;
}

//----- (021D0E2C) --------------------------------------------------------
int __fastcall Function_87_21d0e2c(int a1, uint *a2)
{
  uint *v2;
  uint *v3;
  int v5;
  int v6;

  v2 = a2;
  v3 = (uint *)LoadOverlayData1c(a1);
  if ( v3[54] )
  {
    if ( !Function_21d11f8(v3[50]) )
      return 0;
    v3[54] = 0;
  }
  if ( *v2 )
  {
    if ( *v2 == 1 )
      return 1;
  }
  else if ( dword_21BF6C4 & 2 )
  {
    Function_21d0f38(v3);
    ++*v2;
  }
  else if ( dword_21BF6C4 & 1 )
  {
    v3[7] ^= 1u;
    Function_21d0f38(v3);
  }
  else if ( dword_21BF6C4 & 0x20 )
  {
    if ( Function_21d0f4c(v3) )
      Function_21d0f38(v3);
  }
  else if ( dword_21BF6C4 & 0x10 )
  {
    if ( Function_21d0f88(v3) )
      Function_21d0f38(v3);
  }
  else if ( dword_21BF6C4 & 0x40 )
  {
    v5 = v3[6] - 1;
    v3[6] = v5;
    if ( v5 >= 0 )
    {
      Function_21d0f38(v3);
    }
    else if ( Function_21d0f4c(v3) )
    {
      v3[6] = v3[5] - 1;
      Function_21d0f38(v3);
    }
  }
  else if ( dword_21BF6C4 & 0x80 )
  {
    v6 = v3[6] + 1;
    v3[6] = v6;
    if ( v6 < v3[5] )
    {
      Function_21d0f38(v3);
    }
    else if ( Function_21d0f88(v3) )
    {
      Function_21d0f38(v3);
    }
  }
  return 0;
}

//----- (021D0F38) --------------------------------------------------------
int __fastcall Function_21d0f38(int a1, int a2)
{
  int v2;
  int result;

  v2 = a1;
  result = Function_21d11d0(*(uint *)(a1 + 200), a2);
  *(uint *)(v2 + 216) = result;
  return result;
}

//----- (021D0F4C) --------------------------------------------------------
int __fastcall Function_21d0f4c(uint *a1)
{
  int v1;
  int v2;

  if ( ++a1[53] >= a1[52] )
    a1[53] = 0;
  v1 = a1[51];
  v2 = a1[53];
  Function_21d101c();
  return 1;
}

//----- (021D0F88) --------------------------------------------------------
int __fastcall Function_21d0f88(uint *a1)
{
  int v1;
  int v2;

  if ( --a1[53] < 0 )
    a1[53] = a1[52] - 1;
  v1 = a1[51];
  v2 = a1[53];
  Function_21d101c();
  return 1;
}

//----- (021D0FC4) --------------------------------------------------------
int __fastcall Function_21d0fc4(int a1)
{
  int v1;
  int v2;
  int v4;

  v4 = a1;
  v1 = 0;
  v2 = a1;
  do
  {
    *(uint *)(v2 + 32) = Function_2023790(12, 0x3Cu);
    *(uint *)(v2 + 36) = Function_2023790(8, 0x3Cu);
    ++v1;
    v2 += 28;
  }
  while ( v1 < 6 );
  *(uint *)(v4 + 28) = 0;
  return Function_21d101c();
}

//----- (021D1000) --------------------------------------------------------
uint __fastcall Function_21d1000(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint result;

  v2 = a1;
  v3 = 0;
  do
  {
    Function_20237bc_FreeMsg(*(uint *)(v2 + 32), a2);
    result = Function_20237bc_FreeMsg(*(uint *)(v2 + 36), v4);
    ++v3;
    v2 += 28;
  }
  while ( v3 < 6 );
  return result;
}

//----- (021D101C) --------------------------------------------------------
int __fastcall Function_21d101c(int *a1, int a2, int a3)
{
  int v3;
  int *v4;
  int v5;
  int v6;
  int result;
  int v8;

  v3 = a2;
  v4 = a1;
  v8 = a3;
  *a1 = Function_202e174(a2, a3);
  v4[5] = Function_202e1a8(v3, v8);
  Function_202e274(v3, v8, v4 + 1);
  v5 = 0;
  if ( v4[5] > 0 )
  {
    v6 = (int)(v4 + 8);
    do
    {
      Function_202e1f4(v3, v8, v5++, v6);
      v6 += 28;
    }
    while ( v5 < v4[5] );
  }
  result = 0;
  v4[6] = 0;
  return result;
}

//----- (021D106C) --------------------------------------------------------
uint *__fastcall Function_21d106c(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;
  uint *v5;
  int v6;

  v2 = a2;
  v3 = a1;
  v4 = (uint *)malloc(0x3Du, 3612);
  v5 = v4;
  if ( v4 )
  {
    *v4 = v3;
    v4[1] = v2;
    v4[4] = Function_2018340(0x3Du);
    Function_20a7944();
    Function_200a784(0, 128, 0, 32, 0, 0x80u, 0, 0x20u, 0x3Du);
    v5[13] = Function_20095c4(64, (int)(v5 + 14), 61, v6);
    v5[96] = LoadFromMsgNARC(0, 26, 352, 0x3Du);
    v5[97] = LoadFromMsgNARC(1, 26, 412, 0x3Du);
    v5[98] = LoadFromMsgNARC(1, 26, 647, 0x3Du);
    v5[99] = Function_200b358(0x3Du);
    v5[100] = Function_2023790(256, 0x3Du);
    v5[101] = Function_2023790(256, 0x3Du);
    v5[102] = AllocPkmnData(0x3Du);
    SetMainLoopFunctionCall((int)Function_21d11ac, (int)v5);
  }
  return v5;
}

//----- (021D1140) --------------------------------------------------------
uint __fastcall Function_21d1140(uint result)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = result;
  if ( result )
  {
    SetMainLoopFunctionCall(0, 0);
    free(*(uint *)(v1 + 408));
    Function_20237bc_FreeMsg(*(uint *)(v1 + 404), v2);
    Function_20237bc_FreeMsg(*(uint *)(v1 + 400), v3);
    Function_200b3f0(*(uint **)(v1 + 396), v4);
    Function_200b190(*(ushort **)(v1 + 392));
    Function_200b190(*(ushort **)(v1 + 388));
    Function_200b190(*(ushort **)(v1 + 384));
    Function_2021964(*(int **)(v1 + 52));
    Function_200a878();
    free(*(uint *)(v1 + 16));
    result = free(v1);
  }
  return result;
}

//----- (021D11AC) --------------------------------------------------------
int __fastcall Function_21d11ac(int a1)
{
  int result;

  Function_20219f8(*(uint *)(a1 + 52));
  Function_200a858();
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (021D11D0) --------------------------------------------------------
BOOL __fastcall Function_21d11d0(int a1, int a2)
{
  *(uint *)(a1 + 12) = a2;
  *(uint *)(a1 + 8) = 0;
  return ((int (*)(void))*(&off_21D1BA0 + a2))() == 0;
}

//----- (021D11F8) --------------------------------------------------------
int __fastcall Function_21d11f8(int a1)
{
  return ((int (*)(void))*(&off_21D1BA0 + *(uint *)(a1 + 12)))();
}

//----- (021D1210) --------------------------------------------------------
int __fastcall Function_21d1210(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = *a2;
  v4 = a1;
  if ( v3 )
  {
    if ( v3 == 1 && Function_200f2ac() )
      return 1;
  }
  else
  {
    Function_21d139c();
    Function_21d1818(v4);
    Function_200f174(3u, 1, 1, 0, 6, 1, 61);
    ++*v2;
  }
  return 0;
}

//----- (021D1260) --------------------------------------------------------
int __fastcall Function_21d1260(int a1, uint *a2)
{
  uint *v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( *a2 )
  {
    if ( *a2 == 1 && Function_200f2ac() )
    {
      Function_21d186c(v3);
      Function_21d14b8(v3);
      return 1;
    }
  }
  else
  {
    Function_2005748(0x60Eu);
    Function_200f174(3u, 0, 0, 0, 6, 1, 61);
    ++*v2;
  }
  return 0;
}

//----- (021D12C0) --------------------------------------------------------
int __fastcall Function_21d12c0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v6;

  v1 = *(uint *)(a1 + 4);
  v6 = a1;
  v2 = 0;
  if ( *(uint *)(v1 + 20) > 0 )
  {
    v3 = a1;
    v4 = *(uint *)(a1 + 4);
    do
    {
      if ( v2 == *(uint *)(v1 + 24) )
      {
        Function_2021fe0(*(uint *)(v3 + 352), 0);
        Function_2021f58(*(uint *)(v3 + 352), 0);
        Function_20063d4(1);
        Function_2005844(*(ushort *)(v4 + 48), *(uchar *)(v4 + 51));
      }
      else
      {
        Function_2021fe0(*(uint *)(v3 + 352), 1);
        Function_2021f58(*(uint *)(v3 + 352), v2 + 1);
      }
      ++v2;
      v3 += 4;
      v4 += 28;
    }
    while ( v2 < *(uint *)(v1 + 20) );
  }
  Function_21d1640(v6);
  return 1;
}

//----- (021D1334) --------------------------------------------------------
int __fastcall Function_21d1334(int a1, uint *a2)
{
  uint *v2;
  int result;

  v2 = a2;
  switch ( (uchar)*a2 )
  {
    case 0u:
      Function_21d1568();
      ++*v2;
      goto LABEL_6;
    case 1u:
      Function_21d1ab8();
      ++*v2;
      goto LABEL_6;
    case 2u:
      Function_21d1970();
      ++*v2;
      goto LABEL_6;
    case 3u:
      Function_21d1558();
      result = 1;
      break;
    default:
LABEL_6:
      result = 0;
      break;
  }
  return result;
}

//----- (021D1384) --------------------------------------------------------
int __fastcall Function_21d1384(int a1)
{
  int v1;

  v1 = a1;
  Function_2005748(0x5DCu);
  Function_21d1640(v1);
  return 1;
}

//----- (021D139C) --------------------------------------------------------
uint __fastcall Function_21d139c(int a1)
{
  int v1;
  ushort v2;

  v1 = a1;
  GX_SetBanks(dword_21D1B30);
  REG_POWERCNT |= (uint)&REG_POWERCNT >> 11;
  SetGraphicsModes(dword_21D1AE8);
  Function_20183c4(*(uint **)(v1 + 16), 1u, dword_21D1B14, 0);
  Function_20183c4(*(uint **)(v1 + 16), 2u, dword_21D1AF8, 0);
  LoadFromNARC_RGCN(101, 1, *(uint **)(v1 + 16), 2u, 0, 0, 1, 61);
  LoadFromNARC_RCSN(101, 0, *(uint **)(v1 + 16), 2u, 0, 0, 1, 61);
  Call_LoadFromNARC_RLCN(101, 2, 0, 0, 64, 61);
  Function_20196c0(*(uint **)(v1 + 16), 1, 0, 1, 0);
  Function_2019cb8(*(uint *)(v1 + 16), 1, 0, 0, 0, 0x20u, 0x20u, 0);
  v2 = Function_21d14d4(v1, 1);
  Function_21d1558(v1);
  Function_200daa4(*(uint **)(v1 + 16), 1u, v2, 2, 0, 61);
  Function_200dc48(v1 + 20, 0, v2, 2u);
  Function_200dc48(v1 + 36, 0, v2, 2u);
  Function_2019448(*(uint **)(v1 + 16), 1u);
  G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 0, 6, 8, 8);
  return Function_201ff0c(0x10u, 1);
}

//----- (021D14B8) --------------------------------------------------------
int __fastcall Function_21d14b8(int a1)
{
  int v1;

  v1 = a1;
  Function_2019044(*(uint *)(a1 + 16), 1);
  Function_2019044(*(uint *)(v1 + 16), 2);
  return Function_21d1540(v1);
}

//----- (021D14D4) --------------------------------------------------------
int __fastcall Function_21d14d4(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_201a7e8(*(uint **)(a1 + 16), a1 + 20, 1, 1, 1, 0x1Eu, 2u, 0, a2);
  Function_201a7e8(*(uint **)(v2 + 16), v2 + 36, 1, 1, 19, 0x1Eu, 4u, 0, v3 + 60);
  Function_201a9f4(v2 + 20);
  Function_201a9f4(v2 + 36);
  return v3 + 180;
}

//----- (021D1540) --------------------------------------------------------
uint __fastcall Function_21d1540(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = 0;
  v2 = a1 + 20;
  do
  {
    result = Function_201a8fc(v2);
    ++v1;
    v2 += 16;
  }
  while ( v1 < 2 );
  return result;
}

//----- (021D1558) --------------------------------------------------------
int __fastcall Function_21d1558(int a1)
{
  int v1;

  v1 = a1;
  Function_21d1590();
  return Function_21d1640(v1);
}

//----- (021D1568) --------------------------------------------------------
int *__fastcall Function_21d1568(int a1)
{
  int v1;

  v1 = a1;
  Function_201ada4_ClearTextBox(a1 + 20, 15);
  Function_201ada4_ClearTextBox(v1 + 36, 15);
  Function_201accc(v1 + 20);
  return Function_201accc(v1 + 36);
}

//----- (021D1590) --------------------------------------------------------
int *__fastcall Function_21d1590(int a1)
{
  int v1;
  int *v2;
  int v3;

  v1 = a1;
  v2 = *(int **)(a1 + 4);
  Function_200b60c(*(uint *)(a1 + 396), 0, *v2, 4, 0, 1);
  Function_200b60c(*(uint *)(v1 + 396), 1u, v2[1] + 2000, 4, 0, 1);
  Function_200c2e0(*(uint *)(v1 + 396), 2u, v2[2]);
  Function_200b60c(*(uint *)(v1 + 396), 3u, v2[3], 2, 0, 1);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 384), 0, *(ushort **)(v1 + 400));
  Function_200c388(*(uint **)(v1 + 396), *(uint *)(v1 + 404), *(uint *)(v1 + 400));
  Function_201ada4_ClearTextBox(v1 + 20, 15);
  v3 = *(uint *)(v1 + 404);
  Function_201d738_CallInitTextInterpreter(v1 + 20, 0);
  return Function_201accc(v1 + 20);
}

//----- (021D1640) --------------------------------------------------------
int *__fastcall Function_21d1640(int a1)
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
  int v17;

  v1 = a1;
  v2 = *(uint *)(a1 + 4);
  v3 = v2 + 32 + 28 * *(uint *)(v2 + 24);
  v17 = a1 + 36;
  Function_201ada4_ClearTextBox(a1 + 36, 15);
  v4 = *(uint *)(v2 + 28);
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      v14 = 0;
      do
      {
        if ( !*(ushort *)(v3 + 20) )
          break;
        Function_200b1b8_CallMsgDecrypt(
          *(ushort ***)(v1 + 392),
          *(ushort *)(v3 + 20),
          *(ushort **)(v1 + 400));
        v15 = *(uint *)(v1 + 400);
        Function_201d738_CallInitTextInterpreter(v17, 0);
        ++v14;
        v3 += 2;
      }
      while ( v14 < 4 );
    }
  }
  else
  {
    v5 = *(uint *)v3;
    Function_201d738_CallInitTextInterpreter(v17, 0);
    Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 384), 5u, *(ushort **)(v1 + 400));
    v6 = *(uint *)(v1 + 400);
    Function_201d738_CallInitTextInterpreter(v17, 0);
    Function_200b1b8_CallMsgDecrypt(
      *(ushort ***)(v1 + 388),
      *(ushort *)(v3 + 16),
      *(ushort **)(v1 + 400));
    v7 = *(uint *)(v1 + 400);
    Function_201d738_CallInitTextInterpreter(v17, 0);
    v8 = Function_2075dac(*(ushort *)(v3 + 16), *(uint *)(v3 + 8));
    if ( v8 )
    {
      if ( v8 == 1 )
        Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 384), 4u, *(ushort **)(v1 + 400));
      else
        Function_20237e8(*(uint *)(v1 + 400), v9);
    }
    else
    {
      Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 384), 3u, *(ushort **)(v1 + 400));
    }
    v10 = *(uint *)(v1 + 400);
    Function_201d738_CallInitTextInterpreter(v17, 0);
    Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 384), 1u, *(ushort **)(v1 + 400));
    Function_200b60c(*(uint *)(v1 + 396), 0, *(uchar *)(v3 + 18), 4, 1, 1);
    Function_200c388(*(uint **)(v1 + 396), *(uint *)(v1 + 404), *(uint *)(v1 + 400));
    v11 = *(uint *)(v1 + 404);
    Function_201d738_CallInitTextInterpreter(v17, 0);
    Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 384), 2u, *(ushort **)(v1 + 400));
    v12 = *(uint *)(v1 + 400);
    Function_201d738_CallInitTextInterpreter(v17, 0);
    Function_2002d7c(0, *(uint *)(v1 + 400), 0);
    v13 = *(uint *)(v3 + 4);
    Function_201d738_CallInitTextInterpreter(v17, 0);
  }
  return Function_201accc(v17);
}

//----- (021D1818) --------------------------------------------------------
int __fastcall Function_21d1818(int a1, int a2, int a3, int a4)
{
  int v4;
  int v6;
  int v7;
  int v8;

  v8 = a4;
  v4 = a1;
  *(uint *)(a1 + 376) = Function_2006fa0(27, 77, 0, &v7, 61);
  *(uint *)(v4 + 380) = Function_2006fbc(27, 78, 0, &v6, 61);
  MIi_CpuClearFast(0, (uint *)(v4 + 412), 0xC80u);
  Function_21d18a0(v4, v7, v6);
  return Function_21d1970(v4);
}

//----- (021D186C) --------------------------------------------------------
uint __fastcall Function_21d186c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    v4 = *(uint *)(v3 + 352);
    if ( v4 )
      Function_2021bd4(v4);
    ++v2;
    v3 += 4;
  }
  while ( v2 < 6 );
  free(*(uint *)(v1 + 376));
  return free(*(uint *)(v1 + 380));
}

//----- (021D18A0) --------------------------------------------------------
uint __fastcall Function_21d18a0(int a1, int a2, int a3)
{
  int v3;
  uint v4;
  int *v5;
  int v6;
  int v8;
  int v9;
  int v10;
  uint *v11;
  ushort *v12;
  char v13;
  char v14;
  int v15;
  char **v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  char *v23;
  int v24;
  char *v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  char v31;

  v3 = a1;
  v26 = a2;
  v27 = a3;
  v24 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v23 = &v14;
  v25 = &v13;
  v15 = *(uint *)(a1 + 52);
  v16 = &v23;
  v21 = 1;
  v19 = 0;
  v22 = 61;
  v10 = Function_2006f50(27, 76, 0, &v12, 61);
  v4 = 0;
  v5 = &dword_21D1B58;
  v9 = Function_2006f88(27, 75, &v11, 61);
  v8 = 0;
  v6 = 0;
  do
  {
    NNS_G2dInitImageProxy((int)&v14);
    NNS_G2dInitImagePaletteProxy((int)&v13);
    NNS_G2dLoadImage1DMapping(v12, v4, 1, &v14);
    NNS_G2dLoadPalette(v11, v6, 1, &v13);
    v17 = *v5 << 12;
    v18 = v5[1] << 12;
    v20 = v8 + 1;
    *(uint *)(v3 + 352) = Function_2021b90(&v15);
    Function_2021cac(*(uint *)(v3 + 352), 0);
    v4 += 3200;
    v6 += 32;
    v5 += 2;
    v3 += 4;
    ++v8;
  }
  while ( v8 < 6 );
  free(v9);
  return free(v10);
}

//----- (021D1970) --------------------------------------------------------
int __fastcall Function_21d1970(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  ushort *v13;
  int v14;
  int *v15;
  char v16;
  ushort v17;
  ushort v18;
  int v19;

  v19 = a4;
  v4 = a1;
  v5 = *(uint *)(a1 + 4);
  v6 = 0;
  v14 = v5;
  result = *(uint *)(v5 + 20);
  if ( result > 0 )
  {
    v8 = v14;
    v12 = 0;
    v13 = (ushort *)(v14 + 51);
    v11 = 0;
    v9 = v4;
    v15 = (int *)(v4 + 412);
    do
    {
      InitPkmnData(
        *(int **)(v4 + 408),
        *(ushort *)(v8 + 48),
        *(uchar *)(v8 + 50),
        32,
        1,
        *(uint *)(v8 + 40),
        1,
        *(uint *)(v8 + 44));
      SetPkmnData(*(uint *)(v4 + 408), 112, v13);
      Function_2075ef4((int)&v16, *(uint *)(v4 + 408), 2u);
      Function_2013720(
        *(ushort *)&v16,
        v17,
        0x3Du,
        dword_21D1AD8,
        (int)v15,
        *(uint *)(v8 + 40),
        0,
        2,
        *(ushort *)(v8 + 48));
      DC_FlushRange((int)v15, 3200);
      GX_LoadOBJ(v15, v12, 0xC80u);
      Call_LoadFromNARC_RLCN(*(ushort *)&v16, v18, 1u, v11, 32, 61);
      if ( v6 == *(uint *)(v14 + 24) )
      {
        Function_20063d4(1);
        Function_2005844(*(ushort *)(v8 + 48), *(uchar *)(v8 + 51));
        Function_2021fe0(*(uint *)(v9 + 352), 0);
      }
      else
      {
        Function_2021fe0(*(uint *)(v9 + 352), 1);
      }
      Function_2021cac(*(uint *)(v9 + 352), 1);
      v13 += 14;
      v12 += 3200;
      ++v6;
      v11 += 32;
      v8 += 28;
      result = *(uint *)(v14 + 20);
      v9 += 4;
    }
    while ( v6 < result );
  }
  if ( v6 < 6 )
  {
    v10 = v4 + 4 * v6;
    do
    {
      result = Function_2021cac(*(uint *)(v10 + 352), 0);
      ++v6;
      v10 += 4;
    }
    while ( v6 < 6 );
  }
  return result;
}

//----- (021D1AB8) --------------------------------------------------------
uint __fastcall Function_21d1ab8(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = 0;
  v2 = a1;
  do
  {
    result = Function_2021cac(*(uint *)(v2 + 352), 0);
    ++v1;
    v2 += 4;
  }
  while ( v1 < 6 );
  return result;
}

