//----- (021D0D80) --------------------------------------------------------
int __fastcall Function_21d0d80(int a1)
{
  int v1;
  int v2;
  ushort *v3;

  v1 = a1;
  LoadOverlayData1c(a1);
  Function_2017fc8(3, 41, 0x20000);
  v2 = MallocSomeDataAndStorePtrInOverlayData1c(v1, 188, 0x29u);
  Call_FillMemWithValue((int *)v2, 0, 0xBCu);
  *(uint *)v2 = 41;
  v3 = (ushort *)LoadPtrToOverWorldDataIn18(v1);
  *(uint *)(v2 + 28) = v3;
  *(uchar *)(v2 + 12) = *v3;
  *(uchar *)(v2 + 13) = *(uchar *)(v2 + 12);
  *(uchar *)(v2 + 17) = *(uchar *)(*(uint *)(v2 + 28) + 2);
  *(uchar *)(v2 + 18) = *(uchar *)(*(uint *)(v2 + 28) + 3);
  LOBYTE(v3) = *(uchar *)(v2 + 17);
  *(uchar *)(v2 + 22) = (uchar)v3;
  *(uchar *)(v2 + 23) = (uchar)v3;
  **(ushort **)(v2 + 28) = -1;
  *(uchar *)(v2 + 16) = Function_2027ac0(*(ushort **)(*(uint *)(v2 + 28) + 4));
  *(ushort *)(v2 + 10) = Function_2027b50(*(ushort **)(*(uint *)(v2 + 28) + 4));
  Function_2002ac8(1);
  return 1;
}

//----- (021D0DF8) --------------------------------------------------------
BOOL __fastcall Function_21d0df8(int a1)
{
  int v1;

  v1 = LoadOverlayData1c(a1);
  return Function_21d1184(v1) != 0;
}

//----- (021D0E10) --------------------------------------------------------
int __fastcall Function_21d0e10(int a1)
{
  int v1;
  int *v2;
  int v3;

  v1 = a1;
  v2 = (int *)LoadOverlayData1c(a1);
  Function_2002ac8(0);
  v3 = *v2;
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(v3);
  return 1;
}

//----- (021D0E34) --------------------------------------------------------
int __fastcall Function_21d0e34(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = 0;
  v2 = a1;
  v3 = 0;
  do
  {
    if ( Function_2014bbc((ushort *)(*(uint *)(v2 + 28) + 26 + v3)) )
      return 0;
    ++v1;
    v3 += 8;
  }
  while ( v1 < 3 );
  return 1;
}

//----- (021D0E5C) --------------------------------------------------------
int Function_21d0e5c()
{
  if ( !(dword_21BF6C4 & 3) )
    return 0;
  Function_2005748(0x5E3u);
  return 1;
}

//----- (021D0E80) --------------------------------------------------------
int __fastcall Function_21d0e80(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;
  int v5;

  v1 = a1;
  v2 = 0;
  if ( dword_21BF6C4 & 1 )
  {
    v3 = *(uchar *)(a1 + 17);
    if ( v3 == 3 )
    {
      if ( *(uchar *)(a1 + 18) )
      {
        Function_2005748(0x5DDu);
        *(uchar *)(v1 + 12) = 3;
        return 0;
      }
      if ( Function_21d0e34(a1) )
      {
        Function_2005748(0x5DDu);
        *(uchar *)(v1 + 12) = 2;
        return 0;
      }
      **(ushort **)(v1 + 28) = 3;
      Function_2005748(0x5E3u);
      *(uchar *)(*(uint *)(v1 + 28) + 3) = 0;
      *(uchar *)(*(uint *)(v1 + 28) + 2) = *(uchar *)(*(uint *)(v1 + 28) + 3);
    }
    else
    {
      *(uchar *)(*(uint *)(a1 + 28) + 2) = v3;
      **(ushort **)(a1 + 28) = *(uchar *)(*(uint *)(a1 + 28) + 2);
      *(uchar *)(*(uint *)(a1 + 28) + 3) = *(uchar *)(a1 + 18);
      Function_2005748(0x5DDu);
    }
    result = 1;
  }
  else
  {
    if ( dword_21BF6C4 & 2 )
    {
      Function_2005748(0x5DDu);
      *(uchar *)(v1 + 12) = 3;
      return 0;
    }
    if ( dword_21BF6C4 & 8 )
    {
      *(uchar *)(a1 + 17) = 3;
      *(uchar *)(a1 + 18) = 0;
      v2 = 1;
    }
    else if ( dword_21BF6C4 & 0x80 )
    {
      *(uchar *)(a1 + 17) = (*(uchar *)(a1 + 17) + 1 < 0)
                          + __ROR4__(
                              ((*(uchar *)(a1 + 17) + 1) << 30)
                            - (((uint)*(uchar *)(a1 + 17) + 1) >> 31),
                              30);
      v2 = 1;
    }
    else if ( dword_21BF6C4 & 0x40 )
    {
      *(uchar *)(a1 + 17) = (*(uchar *)(a1 + 17) + 3 < 0)
                          + __ROR4__(
                              ((*(uchar *)(a1 + 17) + 3) << 30)
                            - (((uint)*(uchar *)(a1 + 17) + 3) >> 31),
                              30);
      v2 = 1;
    }
    else
    {
      if ( !(dword_21BF6C4 & 0x30) )
        return 0;
      if ( *(uchar *)(a1 + 17) == 3 )
      {
        v2 = 1;
        *(uchar *)(a1 + 18) ^= 1u;
      }
    }
    if ( v2 )
    {
      Function_2005748(0x5DCu);
      v5 = *(uchar *)(v1 + 17);
      if ( v5 == 3 )
        *(uchar *)(v1 + 22) = *(uchar *)(v1 + 18) + 3;
      else
        *(uchar *)(v1 + 22) = v5;
      result = 0;
    }
    else
    {
      result = 0;
    }
  }
  return result;
}

//----- (021D0FA0) --------------------------------------------------------
int __fastcall Function_21d0fa0(int a1)
{
  int v1;
  int v2;
  ushort *v3;
  int v4;
  int result;

  v1 = a1;
  v2 = *(ushort *)(a1 + 8);
  if ( !v2 )
  {
    Function_200e060(v1 + 148, 1, 10, 6u);
    Function_201ada4_ClearTextBox(v1 + 148, 255);
    v3 = (ushort *)Function_2023790(76, *(uint *)v1);
    Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 32), 2u, v3);
    Function_201d78c(v1 + 148, 1);
    Function_20237bc_FreeMsg((int)v3, v4);
LABEL_9:
    ++*(ushort *)(v1 + 8);
    return 0;
  }
  if ( v2 != 1 )
    goto LABEL_9;
  if ( !(dword_21BF6C4 & 3) )
    return 0;
  Function_200e084(v1 + 148, 1);
  Function_201acf4(v1 + 148);
  result = 0;
  *(ushort *)(v1 + 8) = 0;
  *(uchar *)(v1 + 12) = *(uchar *)(v1 + 13);
  return result;
}

//----- (021D1040) --------------------------------------------------------
int __fastcall Function_21d1040(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = Function_2002100(*(uint **)(a1 + 24), (uchar *)dword_21D1CFC, 1, 5, *(uint *)a1);
  *(uint *)(v1 + 164) = result;
  return result;
}

//----- (021D1064) --------------------------------------------------------
int __fastcall Function_21d1064(int a1)
{
  int v1;

  v1 = Function_2002114(*(uint *)(a1 + 164), *(uint *)a1);
  if ( !v1 )
    return 1;
  if ( v1 == -2 )
    return 0;
  return -1;
}

//----- (021D108C) --------------------------------------------------------
int __fastcall Function_21d108c(int a1)
{
  int v1;
  int v2;
  ushort *v3;
  int v4;
  int v5;
  int result;
  int v7;

  v1 = a1;
  v2 = *(ushort *)(a1 + 8);
  if ( !*(ushort *)(a1 + 8) )
  {
    *(uchar *)(a1 + 19) = 1;
    Function_200e060(a1 + 148, 1, 10, 6u);
    Function_201ada4_ClearTextBox(v1 + 148, 255);
    v3 = (ushort *)Function_2023790(76, *(uint *)v1);
    Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 32), 3u, v3);
    v4 = *(uchar *)(v1 + 16);
    *(uchar *)(v1 + 15) = Function_201d78c(v1 + 148, 1);
    Function_20237bc_FreeMsg((int)v3, v5);
    Function_20039b0(*(uint *)(v1 + 48), 0, (*(uchar *)(v1 + 23) + 34) & 0xFFFF, 1u, 0, 0x7FFFu);
    *(uchar *)(v1 + 23) = *(uchar *)(v1 + 22);
    *(uchar *)(v1 + 21) = 0;
    *(uchar *)(v1 + 20) = 0;
    goto LABEL_15;
  }
  if ( v2 == 1 )
  {
    if ( Function_201d724(*(uchar *)(a1 + 15)) )
      return 0;
    Function_21d1040(v1);
    goto LABEL_15;
  }
  if ( v2 != 2 )
  {
LABEL_15:
    ++*(ushort *)(v1 + 8);
    return 0;
  }
  v7 = Function_21d1064(a1);
  if ( v7 < 0 )
    return 0;
  Function_200e084(v1 + 148, 1);
  Function_201acf4(v1 + 148);
  result = 0;
  *(ushort *)(v1 + 8) = 0;
  if ( v7 )
  {
    **(ushort **)(v1 + 28) = -1;
    result = 1;
  }
  else
  {
    *(uchar *)(v1 + 12) = *(uchar *)(v1 + 13);
    *(uchar *)(v1 + 19) = 0;
  }
  return result;
}

//----- (021D1184) --------------------------------------------------------
BOOL __fastcall Function_21d1184(uint *a1)
{
  int v1;
  uint v2;
  BOOL result;
  int *v4;
  int *v5;
  int *v6;

  v1 = (int)a1;
  v2 = a1[1];
  if ( v2 <= 5 )
    JUMPOUT(__CS__, *((short *)&off_21D119E + v2) + 35459488);
  switch ( (uchar)v2 )
  {
    case 0:
      SetMainLoopFunctionCall(0, 0);
      Function_20177a4();
      Function_201ff00();
      Function_201ff68();
      REG_DISPCNT &= 0xFFFFE0FF;
      REG_DISPCNT_SUB &= 0xFFFFE0FF;
      SetBrightnessWithValue(0, 0);
      SetBrightnessWithValue(1, 0);
      Function_200f32c(0);
      Function_200f32c(1);
      goto LABEL_23;
    case 1:
      if ( !Function_21d13e8() )
        return 0;
      SetMainLoopFunctionCall((int)Function_21d131c, v1);
      Function_201ff0c(0x10u, 1);
      Function_200f338(0);
      G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 4, 8, 28, 4);
      Function_2003178(*(uint *)(v1 + 48), 5, 0xFFFF, -1, 16, 0, 0);
      goto LABEL_23;
    case 2:
      v4 = (int *)a1[43];
      if ( v4 )
        Function_200c7ec(v4);
      if ( !Function_200384c(*(uint *)(v1 + 48)) )
        goto LABEL_23;
      return 0;
    case 3:
      v5 = (int *)a1[43];
      if ( v5 )
        Function_200c7ec(v5);
      if ( !((int (__fastcall *)(int))*(&off_21D1D14 + *(uchar *)(v1 + 12)))(v1) )
        return 0;
      Function_2003178(*(uint *)(v1 + 48), 5, 0xFFFF, -1, 0, 16, 0);
      goto LABEL_23;
    case 4:
      if ( Function_200384c(a1[12]) )
      {
        v6 = *(int **)(v1 + 172);
        if ( v6 )
          Function_200c7ec(v6);
        result = 0;
      }
      else
      {
        SetBrightnessWithValue(0, 0);
        SetBrightnessWithValue(1, 0);
        SetMainLoopFunctionCall(0, 0);
        Function_201ff00();
        Function_201ff68();
        REG_DISPCNT &= 0xFFFFE0FF;
        REG_DISPCNT_SUB &= 0xFFFFE0FF;
LABEL_23:
        ++*(uint *)(v1 + 4);
        result = 0;
      }
      return result;
    case 5:
      return Function_21d1434() != 0;
    default:
      goto LABEL_23;
  }
}

//----- (021D131C) --------------------------------------------------------
int __fastcall Function_21d131c(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = *(uint *)(a1 + 48);
  if ( v2 )
    Function_2003694(v2);
  if ( *(uint *)(v1 + 168) )
    Function_200c800();
  NNS_GfdDoVramTransfer();
  Function_201c2b8(*(uint *)(v1 + 24));
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (021D1358) --------------------------------------------------------
int __fastcall Function_21d1358(int *a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  int v6;
  int v7;
  int v8;

  v2 = a2;
  v3 = *(uint *)(a2 + 48);
  if ( !v3 )
    return Call_RemoveTaskFromTaskList(a1);
  result = *(uchar *)(a2 + 19);
  if ( !*(uchar *)(a2 + 19) )
  {
    v5 = *(uchar *)(a2 + 23);
    if ( v5 != *(uchar *)(a2 + 22) )
    {
      Function_20039b0(v3, 0, (v5 + 34) & 0xFFFF, 1u, 0, 0x7FFFu);
      *(uchar *)(v2 + 23) = *(uchar *)(v2 + 22);
      *(uchar *)(v2 + 21) = 0;
      *(uchar *)(v2 + 20) = 0;
    }
    Function_20039b0(
      *(uint *)(v2 + 48),
      0,
      (*(uchar *)(v2 + 22) + 34) & 0xFFFF,
      1u,
      *(uchar *)(v2 + 20),
      0x7FFFu);
    v6 = *(uchar *)(v2 + 20);
    if ( *(uchar *)(v2 + 21) )
    {
      result = v6 - 1;
      *(uchar *)(v2 + 20) = v6 - 1;
      if ( v6 == 1 )
      {
        v7 = *(uchar *)(v2 + 21);
        result = v7 ^ 1;
        *(uchar *)(v2 + 21) = v7 ^ 1;
      }
    }
    else
    {
      result = v6 + 1;
      *(uchar *)(v2 + 20) = v6 + 1;
      if ( v6 == 12 )
      {
        v8 = *(uchar *)(v2 + 21);
        result = v8 ^ 1;
        *(uchar *)(v2 + 21) = v8 ^ 1;
      }
    }
  }
  return result;
}

//----- (021D13E8) --------------------------------------------------------
int __fastcall Function_21d13e8(int a1)
{
  int v1;
  int result;

  v1 = a1;
  switch ( (uchar)*(ushort *)(a1 + 8) )
  {
    case 0u:
      Function_21d1480();
      goto LABEL_6;
    case 1u:
      Function_21d1598();
      goto LABEL_6;
    case 2u:
      Function_21d18a8();
      Function_21d19c8(v1);
      goto LABEL_6;
    case 3u:
      Function_21d1adc();
      *(ushort *)(v1 + 8) = 0;
      result = 1;
      break;
    default:
LABEL_6:
      ++*(ushort *)(v1 + 8);
      result = 0;
      break;
  }
  return result;
}

//----- (021D1434) --------------------------------------------------------
int __fastcall Function_21d1434(int a1)
{
  int v1;

  v1 = a1;
  Function_21d1cb8();
  if ( v1 != -36 )
    Function_200b190(*(ushort **)(v1 + 32));
  Function_21d19a8(v1);
  Function_21d1868(v1);
  Function_21d1564(v1);
  return 1;
}

//----- (021D1460) --------------------------------------------------------
char *Function_21d1460()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_21D1D70;
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

//----- (021D1480) --------------------------------------------------------
uint __fastcall Function_21d1480(int a1)
{
  int v1;
  int *v2;
  char *v3;
  int v4;
  int v5;
  int v6;
  int v8;
  int v9;
  int v10;
  int v11;
  char v12;
  char v13;
  char v14;
  char v15;
  char v16;

  v1 = a1;
  Function_21d1460();
  *(uint *)(v1 + 24) = Function_2018340(*(uint *)v1);
  v8 = 1;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  SetGraphicsModes(&v8);
  v2 = dword_21D1D98;
  v3 = &v12;
  v4 = 17;
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
  Function_20183c4(*(uint **)(v1 + 24), 0, (int *)&v12, 0);
  Function_20183c4(*(uint **)(v1 + 24), 1u, (int *)&v13, 0);
  Function_20183c4(*(uint **)(v1 + 24), 2u, (int *)&v14, 0);
  Function_20183c4(*(uint **)(v1 + 24), 3u, (int *)&v15, 0);
  Function_20183c4(*(uint **)(v1 + 24), 4u, (int *)&v16, 0);
  Function_2019ebc(*(uint **)(v1 + 24), 0);
  Function_2019ebc(*(uint **)(v1 + 24), 1u);
  Function_2019ebc(*(uint **)(v1 + 24), 2u);
  Function_2019ebc(*(uint **)(v1 + 24), 3u);
  Function_2019ebc(*(uint **)(v1 + 24), 4u);
  Function_2019690(0, 32, 0, *(uint *)v1);
  Function_2019690(1u, 32, 0, *(uint *)v1);
  Function_2019690(2u, 32, 0, *(uint *)v1);
  Function_2019690(3u, 32, 0, *(uint *)v1);
  return Function_2019690(4u, 32, 0, *(uint *)v1);
}

//----- (021D1564) --------------------------------------------------------
uint __fastcall Function_21d1564(int a1)
{
  int v1;

  v1 = a1;
  Function_2019044(*(uint *)(a1 + 24), 4);
  Function_2019044(*(uint *)(v1 + 24), 3);
  Function_2019044(*(uint *)(v1 + 24), 2);
  Function_2019044(*(uint *)(v1 + 24), 1);
  Function_2019044(*(uint *)(v1 + 24), 0);
  return free(*(uint *)(v1 + 24));
}

//----- (021D1598) --------------------------------------------------------
uint *__fastcall Function_21d1598(uint *a1, int a2, int a3, int a4)
{
  int v4;
  uint v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  ushort *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  uint *result;
  uint v23;
  int v24;
  int v25;

  v4 = (int)a1;
  v5 = *(uchar *)(a1[7] + 15);
  v23 = v5 + 24;
  v6 = LoadFromNARC_8(79, *a1, a3, a4);
  Function_200daa4(*(uint **)(v4 + 24), 0, 1, 5, 0, *(uint *)v4);
  Function_200dd0c(*(uint **)(v4 + 24), 0, 10, 6, *(ushort *)(v4 + 10), *(uint *)v4);
  v9 = Function_2006d84_GetFilesize((int)v6, v5 + 12, v7, v8);
  v10 = malloc2(*(uint *)v4, v9);
  LoadFileFromNARCFileHandler((int)v6, v5 + 12, v10);
  NNS_G2dGetUnpackedPaletteData(v10, &v25);
  Function_201958c(*(uint **)(v4 + 24), 1u, *(int **)(v25 + 20), *(uint *)(v25 + 16), 0);
  Function_201958c(*(uint **)(v4 + 24), 4u, *(int **)(v25 + 20), *(uint *)(v25 + 16), 0);
  free(v10);
  v13 = Function_2006d84_GetFilesize((int)v6, v5, v11, v12);
  v14 = malloc2(*(uint *)v4, v13);
  LoadFileFromNARCFileHandler((int)v6, v5, v14);
  Function_20a71b0(v14, &v24);
  Function_201972c(4u, *(uint *)(v24 + 12), *(uint *)(v24 + 8) & 0xFFFF, 0);
  v15 = MallocFill120(*(uint *)v4);
  *(uint *)(v4 + 48) = v15;
  Function_2002f70((int)v15, 0, 224, *(uint *)v4);
  Function_2002f70(*(uint *)(v4 + 48), 2, 96, *(uint *)v4);
  Function_2002fbc(*(uint *)(v4 + 48), *(uint *)(v24 + 12), 0, 0, 0x60u);
  if ( *(uchar *)(v4 + 12) == 1 )
    Function_2002fbc(*(uint *)(v4 + 48), *(uint *)(v24 + 12) + 96, 0, 16, 0x20u);
  Function_2003050(*(uint *)(v4 + 48), 19, 0, *(uint *)v4, 2, 96, 0);
  Function_2003050(*(uint *)(v4 + 48), 14, 6, *(uint *)v4, 0, 32, 0x30u);
  Function_2003050(*(uint *)(v4 + 48), 14, 7, *(uint *)v4, 0, 32, 0x40u);
  Function_2003050(*(uint *)(v4 + 48), 38, 24, *(uint *)v4, 0, 32, 0x50u);
  Function_2003050(*(uint *)(v4 + 48), 38, *(ushort *)(v4 + 10) + 25, *(uint *)v4, 0, 32, 0x60u);
  Function_20039b0(*(uint *)(v4 + 48), 0, 0, 0x70u, 0x10u, 0);
  Function_20039b0(*(uint *)(v4 + 48), 2, 0, 0x30u, 0x10u, 0);
  Function_2003858(*(uint *)(v4 + 48), 1);
  Function_2003694(*(uint *)(v4 + 48));
  free(v14);
  v18 = Function_2006d84_GetFilesize((int)v6, v23, v16, v17);
  *(uint *)(v4 + 52) = malloc(*(uint *)v4, v18);
  LoadFileFromNARCFileHandler((int)v6, v23, *(uint *)(v4 + 52));
  Function_20a7248(*(uint *)(v4 + 52), (uint *)(v4 + 60));
  v21 = Function_2006d84_GetFilesize((int)v6, 0x24u, v19, v20);
  *(uint *)(v4 + 56) = malloc(*(uint *)v4, v21);
  LoadFileFromNARCFileHandler((int)v6, 0x24u, *(uint *)(v4 + 56));
  Function_20a7248(*(uint *)(v4 + 56), (uint *)(v4 + 64));
  Call_FS_CloseFile(v6);
  Function_2019cb8(*(uint *)(v4 + 24), 4, 8193, 0, 0, 0x20u, 0x20u, 0x11u);
  Function_20198e8(
    *(uint *)(v4 + 24),
    3,
    0,
    0,
    0x20u,
    0x18u,
    *(uint *)(v4 + 60) + 12,
    0,
    0,
    (uint)**(ushort **)(v4 + 60) << 21 >> 24,
    (uint)*(ushort *)(*(uint *)(v4 + 60) + 2) << 21 >> 24);
  Function_201c3c0(*(uint *)(v4 + 24), 3);
  Function_201c3c0(*(uint *)(v4 + 24), 4);
  result = (uint *)*(uchar *)(v4 + 12);
  if ( result == (uint *)1 )
  {
    Function_20198e8(
      *(uint *)(v4 + 24),
      2,
      0,
      0,
      0x20u,
      0x18u,
      *(uint *)(v4 + 64) + 12,
      0,
      0,
      (uint)**(ushort **)(v4 + 64) << 21 >> 24,
      (uint)*(ushort *)(*(uint *)(v4 + 64) + 2) << 21 >> 24);
    Function_201c3c0(*(uint *)(v4 + 24), 2);
    *(uchar *)(v4 + 20) = 0;
    *(uchar *)(v4 + 21) = 0;
    result = AddTaskToTaskList1((int)Function_21d1358, v4, 0);
  }
  return result;
}

//----- (021D1868) --------------------------------------------------------
int *__fastcall Function_21d1868(int a1)
{
  int v1;

  v1 = a1;
  free(*(uint *)(a1 + 56));
  free(*(uint *)(v1 + 52));
  Function_2002fa0(*(uint *)(v1 + 48), 2);
  Function_2002fa0(*(uint *)(v1 + 48), 0);
  Call_free1(*(uint *)(v1 + 48));
  *(uint *)(v1 + 48) = 0;
  return G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 0, 0, 31, 0);
}

//----- (021D18A8) --------------------------------------------------------
int __fastcall Function_21d18a8(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;
  int v5;

  v1 = a1;
  Function_201a7e8(*(uint **)(a1 + 24), a1 + 68, 1, 3, 3, 0x1Au, 4u, 1, 919);
  Function_201a7e8(*(uint **)(v1 + 24), v1 + 84, 1, 3, 8, 0x1Au, 4u, 1, 815);
  Function_201a7e8(*(uint **)(v1 + 24), v1 + 100, 1, 3, 13, 0x1Au, 4u, 1, 711);
  Function_201a7e8(*(uint **)(v1 + 24), v1 + 116, 1, 21, 20, 8u, 2u, 1, 695);
  Function_201a7e8(*(uint **)(v1 + 24), v1 + 132, 1, 3, 20, 8u, 2u, 1, 679);
  Function_201a7e8(*(uint **)(v1 + 24), v1 + 148, 0, 2, 19, 0x1Bu, 4u, 4, 663);
  v2 = 0;
  v3 = v1 + 68;
  do
  {
    result = Function_201ada4_ClearTextBox(v3, 0);
    if ( v2 < 5 )
      result = Function_201a954(v3, v5);
    ++v2;
    v3 += 16;
  }
  while ( v2 < 6 );
  return result;
}

//----- (021D19A8) --------------------------------------------------------
uint __fastcall Function_21d19a8(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = 0;
  v2 = a1 + 68;
  do
  {
    Function_201acf4(v2);
    result = Function_201a8fc(v2);
    ++v1;
    v2 += 16;
  }
  while ( v1 < 6 );
  return result;
}

//----- (021D19C8) --------------------------------------------------------
uint __fastcall Function_21d19c8(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  ushort *v5;
  int v6;
  int v7;
  int v8;
  ushort *v9;
  int v10;
  uint result;
  int v12;
  int v13;
  int v14;

  v1 = a1;
  v2 = 0;
  v3 = 0;
  v4 = a1 + 68;
  do
  {
    if ( Function_2014bbc((ushort *)(*(uint *)(v1 + 28) + 26 + v3)) )
    {
      v5 = Function_2014b34((ushort *)(*(uint *)(v1 + 28) + 26 + v3), *(uint *)v1);
      Function_201d78c(v4, 1);
      Function_20237bc_FreeMsg((int)v5, v6);
      Function_201a954(v4, v7);
    }
    ++v2;
    v3 += 8;
    v4 += 16;
  }
  while ( v2 < 3 );
  if ( *(uchar *)(v1 + 12) == 1 )
  {
    *(uint *)(v1 + 32) = LoadFromMsgNARC(1, 26, 409, *(uint *)v1);
    v9 = (ushort *)Function_2023790(16, *(uint *)v1);
    v10 = 0;
    v14 = v1 + 68;
    do
    {
      Function_20237e8((int)v9, v8);
      Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 32), v10, v9);
      Function_2002d7c(1, (int)v9, 0);
      Function_201d78c(v14 + 16 * (v10 + 3), 1);
      Function_201a954(v14 + 16 * (v10 + 3), 16 * (v10 + 3));
      ++v10;
    }
    while ( v10 < 2 );
    result = Function_20237bc_FreeMsg((int)v9, v8);
  }
  else
  {
    v12 = *(uint *)(*(uint *)(v1 + 28) + 16);
    Function_201d78c(v1 + 116, 1);
    result = Function_201a954(v1 + 116, v13);
  }
  return result;
}

//----- (021D1ADC) --------------------------------------------------------
int __fastcall Function_21d1adc(int a1)
{
  int v1;
  int result;
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
  short v30;
  short v31;
  short v32;
  short v33;
  uint v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;

  v1 = a1;
  Function_20397e4();
  result = *(uchar *)(v1 + 12);
  if ( result != 1 )
  {
    Function_201dbec(32, *(uint *)v1);
    *(uint *)(v1 + 168) = Function_200c6e4(*(uint *)v1);
    *(uint *)(v1 + 172) = Function_200c704(*(uint **)(v1 + 168));
    v22 = 0;
    v23 = 7;
    v24 = 1;
    v25 = 1;
    v26 = 0;
    v27 = 1;
    v28 = 1;
    v29 = 1;
    v17 = 3;
    v18 = 1024;
    v19 = 0;
    v20 = 16;
    v21 = 16;
    v11 = 3;
    v12 = 1;
    v13 = 1;
    v14 = 1;
    v15 = 0;
    v16 = 0;
    Function_200c73c(*(uint **)(v1 + 168), &v22, &v17, 32);
    Function_200c7c0(*(int **)(v1 + 168), *(int ***)(v1 + 172), 3);
    Function_200cb30(*(uint **)(v1 + 168), *(uint *)(v1 + 172), &v11);
    Function_200a93c(*(uint *)v1);
    v3 = Function_2079fd0();
    Function_200cc9c(*(int **)(v1 + 168), *(uint *)(v1 + 172), 19, v3, 0, 3, 1, 0);
    v4 = Function_2079fd4();
    Function_200ce0c(*(int **)(v1 + 168), *(uint *)(v1 + 172), 19, v4, 0, 0);
    v5 = Function_2079fe0();
    Function_200ce3c(*(int **)(v1 + 168), *(uint *)(v1 + 172), 19, v5, 0, 0);
    v6 = 0;
    v7 = 0;
    v10 = 0;
    v8 = v1;
    do
    {
      v9 = *(uint *)(v1 + 28) + v7;
      result = 0xFFFF;
      if ( *(ushort *)(v9 + 20) == 0xFFFF )
        break;
      Function_200d828(*(int **)(v1 + 168), *(uint *)(v1 + 172), 19, *(ushort *)(v9 + 20) & 0xFFF, 0, 1, v6);
      MI_CpuFill8(&v30, 0, 0x34u);
      v30 = 128 - v10;
      v31 = 160;
      v32 = 0;
      v33 = 0;
      v42 = 2;
      v34 = (uint)*(ushort *)(*(uint *)(v1 + 28) + v7 + 20) << 16 >> 28;
      v43 = 0;
      v35 = 1;
      v37 = 0;
      v38 = 0;
      v39 = 0;
      v40 = -1;
      v41 = -1;
      v36 = v6;
      *(uint *)(v8 + 176) = Function_200ce6c(*(uint **)(v1 + 168), *(uint *)(v1 + 172), &v30);
      if ( (*(ushort *)(*(uint *)(v1 + 28) + v7 + 20) & 0xFFF) == 7 )
        Function_200d3f4(*(uint **)(v8 + 176), 0);
      ++v6;
      result = v10 + 40;
      v7 += 2;
      v8 += 4;
      v10 += 40;
    }
    while ( v6 < 3 );
  }
  return result;
}

//----- (021D1CB8) --------------------------------------------------------
int *__fastcall Function_21d1cb8(int a1)
{
  int v1;
  int *result;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  result = (int *)*(uchar *)(a1 + 12);
  if ( !result )
  {
    v3 = 0;
    v4 = v1;
    do
    {
      v5 = *(uint *)(v4 + 176);
      if ( v5 )
        Function_200d0f4(v5);
      ++v3;
      v4 += 4;
    }
    while ( v3 < 3 );
    Function_200d0b0(*(uint *)(v1 + 168), *(int ***)(v1 + 172));
    Function_200c8d4(*(uint *)(v1 + 168));
    result = Function_201dc3c();
  }
  return result;
}

