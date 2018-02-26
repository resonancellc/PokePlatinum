//----- (021D0D80) --------------------------------------------------------
int __fastcall Function_74_21d0d80(int a1)
{
  int v1;
  ushort *v2;
  int v3;

  v1 = a1;
  v2 = (ushort *)LoadPtrToOverWorldDataIn18(a1);
  Function_2017fc8(3, 38, 0x10000);
  v3 = MallocSomeDataAndStorePtrInOverlayData1c(v1, 700, 0x26u);
  Call_FillMemWithValue((int *)v3, 0, 0x2BCu);
  *(ushort *)(v3 + 24) = Function_2027aa4(v2) & 0xF | *(ushort *)(v3 + 24) & 0xFFF0;
  *(ushort *)(v3 + 24) = ((ushort)Function_2027af8(v2) << 6) & 0x7F | *(ushort *)(v3 + 24) & 0xFFBF;
  *(ushort *)(v3 + 24) = ((ushort)Function_2027b14(v2) << 7) & 0xFF | *(ushort *)(v3 + 24) & 0xFF7F;
  *(ushort *)(v3 + 24) = 16 * Function_2027adc(v2) & 0x3F | *(ushort *)(v3 + 24) & 0xFFCF;
  *(ushort *)(v3 + 24) = ((ushort)Function_2027b30(v2) << 8) & 0x3FF | *(ushort *)(v3 + 24) & 0xFCFF;
  *(ushort *)(v3 + 24) = ((ushort)Function_2027b50(v2) << 10) & 0x7FFF | *(ushort *)(v3 + 24) & 0x83FF;
  *(uint *)v3 = 38;
  *(uint *)(v3 + 28) = v2;
  Function_2002ac8(0);
  return 1;
}

//----- (021D0E58) --------------------------------------------------------
int __fastcall Function_74_21d0e58(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  if ( (*(uint *)(v2 + 16) & 3) == 1 )
  {
    *(ushort *)(v2 + 24) = *(ushort *)(v2 + 24) & 0xFFF0 | *(ushort *)(v2 + 94) & 0xF;
    *(ushort *)(v2 + 24) = *(ushort *)(v2 + 24) & 0xFFBF | (*(ushort *)(v2 + 262) << 6) & 0x7F;
    *(ushort *)(v2 + 24) = *(ushort *)(v2 + 24) & 0xFF7F | (*(ushort *)(v2 + 346) << 7) & 0xFF;
    *(ushort *)(v2 + 24) = *(ushort *)(v2 + 24) & 0xFFCF | 16 * *(ushort *)(v2 + 178) & 0x3F;
    *(ushort *)(v2 + 24) = *(ushort *)(v2 + 24) & 0xFCFF | (*(ushort *)(v2 + 430) << 8) & 0x3FF;
    *(ushort *)(v2 + 24) = (*(ushort *)(v2 + 514) << 10) & 0x7FFF | *(ushort *)(v2 + 24) & 0x83FF;
  }
  Function_2027aac(*(ushort **)(v2 + 28), *(uchar *)(v2 + 24) & 0xF);
  Function_2027b00(*(ushort **)(v2 + 28), (uint)*(ushort *)(v2 + 24) << 25 >> 31);
  Function_2027b1c(*(ushort **)(v2 + 28), (uint)*(ushort *)(v2 + 24) << 24 >> 31);
  Function_2027ae4(*(ushort **)(v2 + 28), (uint)*(ushort *)(v2 + 24) << 26 >> 30);
  Function_2027b38(*(ushort **)(v2 + 28), (uint)*(ushort *)(v2 + 24) << 22 >> 30);
  Function_2027b58(*(ushort **)(v2 + 28), (uint)*(ushort *)(v2 + 24) << 17 >> 27);
  Function_2004fb8((uint)*(ushort *)(v2 + 24) << 26 >> 30);
  Function_2027a68(0, (uint)*(ushort *)(v2 + 24) << 22 >> 30);
  Function_2002ac8(1);
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(*(uint *)v2);
  return 1;
}

//----- (021D0F60) --------------------------------------------------------
BOOL __fastcall Function_74_21d0f60(int a1)
{
  int *v1;
  int *v2;
  BOOL result;
  int v4;
  int v5;
  uint v6;
  int v7;

  v1 = (int *)LoadOverlayData1c(a1);
  v2 = v1;
  switch ( (uchar)v1[1] )
  {
    case 0u:
      if ( Function_21d1178() )
      {
        Function_200f174(3u, 1, 1, 0, 6, 1, *v2);
        goto LABEL_31;
      }
      return 0;
    case 1u:
      if ( Function_200f2ac() )
        goto LABEL_31;
      return 0;
    case 2u:
      if ( dword_21BF6C4 & 1 && (uint)(v1[4] << 27) >> 29 == 6 || dword_21BF6C4 & 2 )
      {
        if ( Function_21d1b44(v1) == 1 )
        {
          v4 = 3;
        }
        else
        {
          Function_2005748(0x5DCu);
          v2[4] = v2[4] & 0xFFFFFFFC | 2;
          v4 = 6;
        }
        v2[1] = v4;
        result = 0;
      }
      else
      {
        Function_21d1a24(v1);
        result = 0;
      }
      return result;
    case 3u:
      Function_2002ac8(1);
      Function_21d1968(v2, 49, 0);
      goto LABEL_31;
    case 4u:
      if ( Function_21d1a08() )
      {
        Function_2002ac8(0);
        Function_21d1ba8(v2);
        v2[1] = 5;
      }
      return 0;
    case 5u:
      v5 = Function_21d1bd0();
      if ( v5 != -1 )
      {
        if ( v5 )
        {
          v6 = v2[4] & 0xFFFFFFFC;
          v7 = 2;
        }
        else
        {
          Function_20057a4(1500, 0);
          Function_2005748(0x61Bu);
          v6 = v2[4] & 0xFFFFFFFC;
          v7 = 1;
        }
        v2[4] = v7 | v6;
        v2[1] = 6;
      }
      return 0;
    case 6u:
      if ( Function_201d724(v1[171] & 0xFF) )
        Call_RemoveTextInterpreterTaskFromTaskList(v2[171] & 0xFF);
      Function_200f174(3u, 0, 0, 0, 6, 1, *v2);
      goto LABEL_31;
    case 7u:
      if ( Function_200f2ac() )
        goto LABEL_31;
      result = 0;
      break;
    case 8u:
      result = Function_21d122c() != 0;
      break;
    default:
LABEL_31:
      ++v2[1];
      result = 0;
      break;
  }
  return result;
}

//----- (021D10F8) --------------------------------------------------------
char *Function_21d10f8()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_21D1C5C;
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

//----- (021D1118) --------------------------------------------------------
int __fastcall Function_21d1118(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( *(uint *)(a1 + 16) & 0x200000 )
  {
    Function_200dd0c(*(uint **)(a1 + 20), 1u, 571, 15, *(ushort *)(a1 + 514), *(uint *)a1);
    *(uint *)(v1 + 16) &= 0xFFDFFFFF;
  }
  Function_200c800();
  NNS_GfdDoVramTransfer();
  Function_201c2b8(*(uint *)(v1 + 20));
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (021D1178) --------------------------------------------------------
int __fastcall Function_21d1178(uint *a1)
{
  uint *v1;
  uint v2;

  v1 = a1;
  v2 = a1[2];
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      Function_21d1390();
      v1[8] = LoadFromMsgNARC(1, 26, 220, *v1);
      Function_21d1720(v1);
    }
    else if ( v2 == 2 )
    {
      Function_21d14f4();
      Function_21d1668(v1);
      Function_201dbec(32, *v1);
      Function_201ff0c(0x10u, 1);
      Function_20397e4();
      SetMainLoopFunctionCall((int)Function_21d1118, (int)v1);
      v1[2] = 0;
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
    Function_21d10f8();
    Function_200f32c(0);
    Function_200f32c(1);
    Function_21d12d4(v1);
  }
  ++v1[2];
  return 0;
}

//----- (021D122C) --------------------------------------------------------
int __fastcall Function_21d122c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v8;

  v8 = a1;
  v1 = *(uint *)(a1 + 8);
  if ( v1 )
  {
    if ( v1 == 1 )
    {
      SetMainLoopFunctionCall(0, 0);
      Function_20177a4();
      Function_201ff00();
      Function_201ff68();
      REG_DISPCNT &= 0xFFFFE0FF;
      REG_DISPCNT_SUB &= 0xFFFFE0FF;
      *(uint *)(v8 + 8) = 0;
      return 1;
    }
  }
  else
  {
    Function_201dc3c();
    Function_21d1624(v8);
    v3 = v8;
    v4 = 0;
    do
    {
      v5 = 0;
      if ( (int)*(ushort *)(v3 + 92) > 0 )
      {
        v6 = v3;
        do
        {
          Function_20237bc_FreeMsg(*(uint *)(v6 + 96), v2);
          ++v5;
          v6 += 4;
        }
        while ( v5 < *(ushort *)(v3 + 92) );
      }
      ++v4;
      v3 += 84;
    }
    while ( v4 < 7 );
    Function_200b190(*(ushort **)(v8 + 32));
    Function_21d14e8(v8);
    Function_21d135c(v8);
  }
  ++*(uint *)(v8 + 8);
  return 0;
}

//----- (021D12D4) --------------------------------------------------------
uint __fastcall Function_21d12d4(uint *a1)
{
  uint *v1;
  int *v2;
  char *v3;
  int v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  int *v9;
  int v11;
  int v12;
  int v13;
  int v14;
  char v15;

  v1 = a1;
  a1[5] = Function_2018340(*a1);
  v11 = 1;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  SetGraphicsModes(&v11);
  v2 = dword_21D1C84;
  v3 = &v15;
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
  v7 = &dword_21D1C2C;
  *(uint *)v3 = *v2;
  v8 = 0;
  v9 = (int *)&v15;
  do
  {
    Function_20183c4((uint *)v1[5], *v7 & 0xFF, v9, 0);
    Function_2019ebc((uint *)v1[5], *v7 & 0xFF);
    ++v8;
    v9 += 7;
    ++v7;
  }
  while ( v8 < 5 );
  Function_2019690(0, 32, 0, *v1);
  return Function_2019690(4u, 32, 0, *v1);
}

//----- (021D135C) --------------------------------------------------------
uint __fastcall Function_21d135c(int a1)
{
  int v1;

  v1 = a1;
  Function_2019044(*(uint *)(a1 + 20), 4);
  Function_2019044(*(uint *)(v1 + 20), 3);
  Function_2019044(*(uint *)(v1 + 20), 2);
  Function_2019044(*(uint *)(v1 + 20), 1);
  Function_2019044(*(uint *)(v1 + 20), 0);
  return free(*(uint *)(v1 + 20));
}

//----- (021D1390) --------------------------------------------------------
int __fastcall Function_21d1390(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int *v5;
  int *v6;
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
  int v19;
  int v20;
  int v21;

  v21 = a4;
  v4 = a1;
  v5 = LoadFromNARC_8(73, *a1, a3, a4);
  v6 = v5;
  v9 = Function_2006d84_GetFilesize((int)v5, 1u, v7, v8);
  v10 = malloc2(*v4, v9);
  LoadFileFromNARCFileHandler((int)v6, 1u, v10);
  NNS_G2dGetUnpackedPaletteData(v10, &v20);
  Function_201958c((uint *)v4[5], 0, *(int **)(v20 + 20), *(uint *)(v20 + 16), 0);
  Function_201958c((uint *)v4[5], 4u, *(int **)(v20 + 20), *(uint *)(v20 + 16), 0);
  free(v10);
  v13 = Function_2006d84_GetFilesize((int)v6, 0, v11, v12);
  v14 = malloc2(*v4, v13);
  LoadFileFromNARCFileHandler((int)v6, 0, v14);
  Function_20a71b0(v14, &v19);
  Function_201972c(0, *(uint *)(v19 + 12), 32, 0);
  Function_201972c(4u, *(uint *)(v19 + 12), 32, 0);
  free(v14);
  v17 = Function_2006d84_GetFilesize((int)v6, 2u, v15, v16);
  v4[9] = malloc(*v4, v17);
  LoadFileFromNARCFileHandler((int)v6, 2u, v4[9]);
  Function_20a7248(v4[9], v4 + 10);
  Call_FS_CloseFile(v6);
  Function_2019cb8(v4[5], 2, 1, 0, 0, 0x20u, 0x20u, 0x11u);
  Function_2019cb8(v4[5], 4, 1, 0, 0, 0x20u, 0x20u, 0x11u);
  Function_2019964(
    v4[5],
    0,
    0,
    0,
    0x20u,
    2u,
    v4[10] + 12,
    0,
    0,
    (uint)*(ushort *)v4[10] << 21 >> 24,
    (uint)*(ushort *)(v4[10] + 2) << 21 >> 24);
  Function_2019184(v4[5], 0, 3u, -24);
  Function_201c3c0(v4[5], 2);
  Function_201c3c0(v4[5], 0);
  return Function_201c3c0(v4[5], 4);
}

//----- (021D14E8) --------------------------------------------------------
uint __fastcall Function_21d14e8(int a1)
{
  return free(*(uint *)(a1 + 36));
}

//----- (021D14F4) --------------------------------------------------------
uint __fastcall Function_21d14f4(int a1)
{
  int v1;

  v1 = a1;
  Function_201a7e8(*(uint **)(a1 + 20), a1 + 44, 1, 1, 0, 0xCu, 2u, 13, 10);
  Function_201a7e8(*(uint **)(v1 + 20), v1 + 60, 1, 1, 3, 0x1Eu, 0xEu, 13, 34);
  Function_201a7e8(*(uint **)(v1 + 20), v1 + 76, 1, 2, 19, 0x1Bu, 4u, 12, 454);
  Function_200daa4(*(uint **)(v1 + 20), 1u, 562, 14, 0, *(uint *)v1);
  Function_200dd0c(
    *(uint **)(v1 + 20),
    1u,
    571,
    15,
    (uint)*(ushort *)(v1 + 24) << 17 >> 27,
    *(uint *)v1);
  LoadFromNARC_PlFont1(0, 416, *(uint *)v1);
  LoadFromNARC_PlFont1(4u, 416, *(uint *)v1);
  LoadFromNARC_PlFont2(0, 384, *(uint *)v1);
  LoadFromNARC_PlFont2(4u, 384, *(uint *)v1);
  Function_201ada4_ClearTextBox(v1 + 44, 0);
  Function_201ada4_ClearTextBox(v1 + 60, 255);
  Function_201ada4_ClearTextBox(v1 + 76, 255);
  Function_201aa3c(v1 + 76);
  Function_201aa3c(v1 + 60);
  Function_201aa3c(v1 + 44);
  Function_200dc48(v1 + 60, 1, 562, 0xEu);
  return Function_200e060(v1 + 76, 1, 571, 0xFu);
}

//----- (021D1624) --------------------------------------------------------
int __fastcall Function_21d1624(int a1)
{
  int v1;
  uint v2;
  int v3;
  int result;

  v1 = a1;
  Function_200dc9c(a1 + 60, 0);
  Function_200e084(v1 + 76, 0);
  v2 = 0;
  v3 = v1 + 44;
  do
  {
    Function_201acf4(v3 + 16 * v2);
    Function_201ada4_ClearTextBox(v3 + 16 * v2, 0);
    Function_201aa3c(v3 + 16 * v2);
    Function_201a8fc(v3 + 16 * v2);
    result = (v2 + 1) << 16;
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 < 3 );
  return result;
}

//----- (021D1668) --------------------------------------------------------
uint __fastcall Function_21d1668(uint *a1)
{
  uint *v1;
  ushort *v2;
  int v3;
  uint v4;
  uint v5;
  int v6;
  int v7;
  int v8;

  v1 = a1;
  v2 = (ushort *)Function_2023790(256, *a1);
  Function_200b1b8_CallMsgDecrypt((ushort **)v1[8], 0, v2);
  Function_201d78c((int)(v1 + 11), 0);
  v4 = 0;
  do
  {
    Function_20237e8((int)v2, v3);
    Function_200b1b8_CallMsgDecrypt((ushort **)v1[8], *((uchar *)dword_21D1BF4 + v4), v2);
    Function_201d78c((int)(v1 + 15), 0);
    v4 = (v4 + 1) & 0xFFFF;
  }
  while ( v4 < 7 );
  v5 = 0;
  do
  {
    Function_21d17cc(v1, v5);
    v5 = (v5 + 1) & 0xFFFF;
  }
  while ( v5 < 7 );
  Function_21d1be4(v1, 0, 1);
  Function_201a954((int)(v1 + 11), v6);
  Function_201a954((int)(v1 + 15), v7);
  return Function_20237bc_FreeMsg((int)v2, v8);
}

//----- (021D1720) --------------------------------------------------------
uint __fastcall Function_21d1720(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  uint result;
  int v6;
  uint v7;

  v1 = a1;
  v7 = 0;
  do
  {
    v6 = v1 + 84 * v7;
    v2 = dword_21D1C40[v7];
    v3 = 0;
    *(ushort *)(v6 + 92) = v2;
    if ( v2 > 0 )
    {
      v4 = *((uchar *)dword_21D1BFC + v7);
      do
      {
        *(uint *)(v6 + 4 * v3 + 96) = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 32), v4 + v3);
        v3 = (v3 + 1) & 0xFFFF;
      }
      while ( v3 < dword_21D1C40[v7] );
    }
    v7 = (v7 + 1) & 0xFFFF;
  }
  while ( v7 < 7 );
  *(ushort *)(v1 + 94) = *(ushort *)(v1 + 24) & 0xF;
  *(ushort *)(v1 + 262) = (uint)*(ushort *)(v1 + 24) << 25 >> 31;
  *(ushort *)(v1 + 346) = (uint)*(ushort *)(v1 + 24) << 24 >> 31;
  *(ushort *)(v1 + 178) = (uint)*(ushort *)(v1 + 24) << 26 >> 30;
  *(ushort *)(v1 + 430) = (uint)*(ushort *)(v1 + 24) << 22 >> 30;
  result = (uint)*(ushort *)(v1 + 24) << 17 >> 27;
  *(ushort *)(v1 + 514) = result;
  return result;
}

//----- (021D17CC) --------------------------------------------------------
int __fastcall Function_21d17cc(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;
  int v6;
  uint v7;
  int v8;
  int v9;
  int v10;
  char v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v2 = a2;
  v14 = a1;
  Function_201ae78(a1 + 60, 255, (*((char *)dword_21D1C04 + a2) + 100) & 0xFFFF, 16 * a2 & 0xFFFF, 0x180u, 0x10u);
  if ( v2 == 5 )
  {
    v3 = *(uint *)(v14 + 420 + 4 * *(ushort *)(v14 + 514) + 96);
    Function_201d78c(v14 + 60, 0);
    Function_201a954(v14 + 60, v4);
    result = v14;
    *(uint *)(v14 + 16) |= 0x200000u;
  }
  else
  {
    switch ( v2 )
    {
      case 1:
        Function_2004fb8(*(ushort *)(v14 + 178));
        break;
      case 4:
        Function_2027a68(0, *(ushort *)(v14 + 430));
        break;
      case 0:
        Function_2027aac(*(ushort **)(v14 + 28), *(ushort *)(v14 + 94));
        Function_21d1be4(v14, 0, 0);
        break;
    }
    v6 = 84 * v2;
    v7 = 0;
    v8 = v14 + 84 * v2;
    v15 = 0;
    if ( *(ushort *)(v14 + 84 * v2 + 92) )
    {
      v16 = v14 + 60;
      do
      {
        *(ushort *)(v8 + 94);
        if ( v2 == 4 )
        {
          v9 = v8 + 4 * v7;
          v10 = *(uint *)(v9 + 96);
          Function_201d78c(v16, 0);
          v11 = Function_2002d7c(0, *(uint *)(v9 + 96), 0);
          v6 = v15;
          v15 = (char)(v15 + v11 + 12);
        }
        else
        {
          v12 = *((char *)dword_21D1C04 + v2);
          v13 = *(uint *)(v8 + 4 * v7 + 96);
          Function_201d78c(v16, 0);
        }
        v7 = (v7 + 1) & 0xFFFF;
      }
      while ( v7 < *(ushort *)(v8 + 92) );
    }
    result = Function_201a954(v14 + 60, v6);
  }
  return result;
}

//----- (021D1968) --------------------------------------------------------
uint __fastcall Function_21d1968(int a1, uint a2, int a3)
{
  int v3;
  int v4;
  ushort *v5;
  int v6;
  int v7;
  uint v9;

  v3 = a1;
  v9 = a2;
  v4 = a3;
  if ( !Function_21d1a08() )
    Call_RemoveTextInterpreterTaskFromTaskList(*(uint *)(v3 + 684) & 0xFF);
  Function_2027ac0(*(ushort **)(v3 + 28));
  Function_201ada4_ClearTextBox(v3 + 76, 15);
  v5 = (ushort *)Function_2023790(256, *(uint *)v3);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v3 + 32), v9, v5);
  if ( v4 )
  {
    Function_201d78c(v3 + 76, 1);
    Function_201a9a4(v3 + 76);
  }
  else
  {
    v6 = Function_201d78c(v3 + 76, 1);
    v7 = 684;
    *(uint *)(v3 + 684) = v6;
  }
  return Function_20237bc_FreeMsg((int)v5, v7);
}

//----- (021D1A08) --------------------------------------------------------
BOOL __fastcall Function_21d1a08(int a1)
{
  return Function_201d724(*(uint *)(a1 + 684) & 0xFF) == 0;
}

//----- (021D1A24) --------------------------------------------------------
int __fastcall Function_21d1a24(int a1)
{
  int v1;
  int v2;
  ushort *v3;
  ushort v4;
  ushort v5;
  int v6;
  uint v7;
  int result;
  int v9;
  uint v10;

  v1 = a1;
  v2 = *(uint *)(a1 + 16) << 27 >> 29;
  v3 = (ushort *)(a1 + 92 + 84 * v2);
  if ( v2 != 6 )
  {
    if ( dword_21BF6C4 & 0x10 )
    {
      s32_div_f(v3[1] + 1, *v3);
      v3[1] = v4;
      Function_21d17cc(v1, (*(uint *)(v1 + 16) << 27 >> 29) & 0xFFFF);
      Function_2005748(0x5DCu);
    }
    else if ( dword_21BF6C4 & 0x20 )
    {
      s32_div_f(v3[1] + *v3 - 1, *v3);
      v3[1] = v5;
      Function_21d17cc(v1, (*(uint *)(v1 + 16) << 27 >> 29) & 0xFFFF);
      Function_2005748(0x5DCu);
    }
  }
  if ( dword_21BF6C4 & 0x40 )
  {
    u32_div_f((*(uint *)(v1 + 16) << 27 >> 29) + 6, 7);
    v7 = *(uint *)(v1 + 16) & 0xFFFFFFE3 | 4 * v6 & 0x1F;
    *(uint *)(v1 + 16) = v7;
    Function_201c63c(*(uint *)(v1 + 20), 0, 3u, -(16 * (v7 << 27 >> 29) + 24));
    Function_21d1be4(v1, (*(uint *)(v1 + 16) << 27 >> 29) & 0xFFFF, 1);
    result = Function_2005748(0x5DCu);
  }
  else
  {
    result = 128;
    if ( dword_21BF6C4 & 0x80 )
    {
      u32_div_f((*(uint *)(v1 + 16) << 27 >> 29) + 1, 7);
      v10 = *(uint *)(v1 + 16) & 0xFFFFFFE3 | 4 * v9 & 0x1F;
      *(uint *)(v1 + 16) = v10;
      Function_201c63c(*(uint *)(v1 + 20), 0, 3u, -(16 * (v10 << 27 >> 29) + 24));
      Function_21d1be4(v1, (*(uint *)(v1 + 16) << 27 >> 29) & 0xFFFF, 1);
      result = Function_2005748(0x5DCu);
    }
  }
  return result;
}

//----- (021D1B44) --------------------------------------------------------
BOOL __fastcall Function_21d1b44(ushort *a1)
{
  return (a1[12] & 0xF) != a1[47]
      || (uint)(ushort)a1[12] << 25 >> 31 != a1[131]
      || (uint)(ushort)a1[12] << 24 >> 31 != a1[173]
      || (uint)(ushort)a1[12] << 26 >> 30 != a1[89]
      || (uint)(ushort)a1[12] << 22 >> 30 != a1[215]
      || (uint)(ushort)a1[12] << 17 >> 27 != a1[257];
}

//----- (021D1BA8) --------------------------------------------------------
int __fastcall Function_21d1ba8(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = Function_2002100(*(uint **)(a1 + 20), (uchar *)dword_21D1C14, 562, 14, *(uint *)a1);
  *(uint *)(v1 + 680) = result;
  return result;
}

//----- (021D1BD0) --------------------------------------------------------
int __fastcall Function_21d1bd0(int a1)
{
  return Function_2002114(*(uint *)(a1 + 680), *(uint *)a1);
}

//----- (021D1BE4) --------------------------------------------------------
uint __fastcall Function_21d1be4(int a1, int a2, int a3)
{
  return Function_21d1968(a1, (uchar)a04[a2], a3);
}

