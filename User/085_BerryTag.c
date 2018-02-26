//----- (02241440) --------------------------------------------------------
int __fastcall Function_85_2241440(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int *v5;
  int v6;

  v1 = a1;
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  Function_201ff00();
  Function_201ff68();
  REG_DISPCNT &= 0xFFFFE0FF;
  REG_DISPCNT_SUB &= 0xFFFFE0FF;
  REG_BLDCNT = 0;
  REG_BLDCNT_SUB = 0;
  Function_2017fc8(3, 36, 0x20000);
  v2 = (int *)MallocSomeDataAndStorePtrInOverlayData1c(v1, 516, 0x24u);
  Call_FillMemWithValue(v2, 0, 0x204u);
  v2[126] = LoadPtrToOverWorldDataIn18(v1);
  *v2 = Function_2018340(0x24u);
  v2[127] = Function_20973b8(*(uchar *)(v2[126] + 8), 0x24u);
  Function_208c120(0, 36);
  v5 = LoadFromNARC_8(53, 0x24u, v3, v4);
  Function_2241614();
  Function_2241634(*v2);
  v6 = Function_2241718(v2, v5);
  Function_22417cc(v6);
  Function_22417e4(v2);
  Function_2017dd4(4, 8);
  Function_201e3d8();
  Function_201e450(4u);
  Function_2241e60(v2, v5);
  Function_224183c(v2);
  Function_2241cd0(v2);
  Function_2242038(v2);
  Function_2242218(v2);
  SetMainLoopFunctionCall((int)Function_22415f4, (int)v2);
  Function_20397e4();
  Function_201ff0c(0x10u, 1);
  Call_FS_CloseFile(v5);
  return 1;
}

//----- (0224154C) --------------------------------------------------------
int __fastcall Function_85_224154c(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int result;

  v2 = a2;
  v3 = LoadOverlayData1c(a1);
  switch ( (uchar)*v2 )
  {
    case 0u:
      *v2 = Function_2241ce8();
      goto LABEL_7;
    case 1u:
      *v2 = Function_2241d10();
      goto LABEL_7;
    case 2u:
      *v2 = Function_2241df8();
      goto LABEL_7;
    case 3u:
      if ( Function_2241dec() != 1 )
        goto LABEL_7;
      result = 1;
      break;
    default:
LABEL_7:
      Function_2241ff0(v3);
      result = 0;
      break;
  }
  return result;
}

//----- (022415A0) --------------------------------------------------------
int __fastcall Function_85_22415a0(int a1)
{
  int v1;
  uint *v2;

  v1 = a1;
  v2 = (uint *)LoadOverlayData1c(a1);
  Function_2241860(v2 + 1);
  Function_22416e8(*v2);
  Function_201e530();
  Function_224181c(v2);
  Function_224202c(v2);
  free(v2[127]);
  FreeSomeDataAndStore0InOverlayData1c(v1);
  SetMainLoopFunctionCall(0, 0);
  Function_201807c(36);
  REG_BLDCNT = 0;
  return 1;
}

//----- (022415F4) --------------------------------------------------------
int __fastcall Function_22415f4(int *a1)
{
  int result;

  Function_201c2b8(*a1);
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (02241614) --------------------------------------------------------
char *Function_2241614()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_22428B0;
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

//----- (02241634) --------------------------------------------------------
uint __fastcall Function_2241634(uint *a1)
{
  uint *v1;
  int *v2;
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

  v1 = a1;
  v25 = 1;
  v26 = 0;
  v27 = 0;
  v28 = 1;
  v2 = SetGraphicsModes(&v25);
  Function_2241f5c(v2);
  v18 = 0;
  v19 = 0;
  v20 = 2048;
  v21 = 0;
  v22 = 69140481;
  v23 = 512;
  v24 = 0;
  Function_20183c4(v1, 1u, &v18, 0);
  Function_2019ebc(v1, 1u);
  v11 = 0;
  v12 = 0;
  v13 = 2048;
  v14 = 0;
  v15 = 1966081;
  v16 = 768;
  v17 = 0;
  Function_20183c4(v1, 2u, &v11, 0);
  Function_201c63c((int)v1, 2, 3u, 8);
  v4 = 0;
  v5 = 0;
  v6 = 2048;
  v7 = 0;
  v8 = 1900545;
  v9 = 256;
  v10 = 0;
  Function_20183c4(v1, 3u, &v4, 0);
  return Function_2019690(1u, 32, 0, 0x24u);
}

//----- (022416E8) --------------------------------------------------------
uint __fastcall Function_22416e8(int a1)
{
  int v1;

  v1 = a1;
  Function_201ff0c(0xFu, 0);
  Function_2019044(v1, 3);
  Function_2019044(v1, 2);
  Function_2019044(v1, 1);
  return Function_2018238(0x24u, v1);
}

//----- (02241718) --------------------------------------------------------
int __fastcall Function_2241718(uint **a1, int a2)
{
  uint **v2;
  int v3;
  int v4;
  uint v5;
  ushort *v6;

  v2 = a1;
  v3 = a2;
  Function_20070e8(a2, 2u, *a1, 2u, 0, 0, 0, 36);
  Function_200710c(v3, 0, *v2, 2u, 0, 0, 0, 36);
  Function_200710c(v3, 1u, *v2, 3u, 0, 0, 0, 36);
  Function_2007130(v3, 3u, 0, 0, 0, 36);
  v4 = malloc(0x24u, 128);
  v5 = 0;
  v6 = (ushort *)v4;
  do
  {
    *v6 = v5++ + 12289;
    ++v6;
  }
  while ( v5 < 0x40 );
  Function_20198c0((int)*v2, 1, v4, 2, 5u, 8u, 8u);
  free(v4);
  Function_2019448(*v2, 1u);
  return LoadFromNARC_PlFont1(0, 480, 36);
}

//----- (022417CC) --------------------------------------------------------
int *Function_22417cc()
{
  return G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 1, 14, 23, 8);
}

//----- (022417E4) --------------------------------------------------------
uint *__fastcall Function_22417e4(int a1)
{
  int v1;
  uint *result;

  v1 = a1;
  *(uint *)(a1 + 196) = LoadFromMsgNARC(0, 26, 398, 0x24u);
  *(uint *)(v1 + 204) = Function_200c440(15, 2, 0, 0x24u);
  result = Function_200b358(0x24u);
  *(uint *)(v1 + 200) = result;
  return result;
}

//----- (0224181C) --------------------------------------------------------
uint __fastcall Function_224181c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  Function_200b190(*(ushort **)(a1 + 196));
  Function_200c560(*(int **)(v1 + 204));
  return Function_200b3f0(*(uint **)(v1 + 200), v2);
}

//----- (0224183C) --------------------------------------------------------
int __fastcall Function_224183c(uint **a1)
{
  uint **v1;
  uchar *v2;
  uint v3;
  int v4;
  int result;

  v1 = a1;
  v2 = (uchar *)dword_22428D8;
  v3 = 0;
  v4 = (int)(a1 + 1);
  do
  {
    result = Function_201a8d4(*v1, v4, v2);
    ++v3;
    v2 += 8;
    v4 += 16;
  }
  while ( v3 < 0xC );
  return result;
}

//----- (02241860) --------------------------------------------------------
uint __fastcall Function_2241860(int a1)
{
  int v1;
  uint v2;
  uint result;

  v1 = a1;
  v2 = 0;
  do
  {
    result = Function_201a8fc(v1);
    ++v2;
    v1 += 16;
  }
  while ( v2 < 0xC );
  return result;
}

//----- (02241878) --------------------------------------------------------
int __fastcall Function_2241878(int a1, int a2, uint a3)
{
  int v3;
  int v4;
  ushort *v5;
  int v6;

  v3 = a1 + 4;
  v4 = 16 * a2;
  v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 196), a3);
  Function_2002d7c(0, (int)v5, 0);
  Function_201c294(v3 + v4);
  Function_201d78c(v3 + v4, 0);
  Function_20237bc_FreeMsg((int)v5, v6);
  return Function_201a9a4(v3 + v4);
}

//----- (022418CC) --------------------------------------------------------
int __fastcall Function_22418cc(int a1)
{
  int v1;

  v1 = a1;
  Function_201ada4_ClearTextBox(a1 + 4, 4);
  return Function_2241878(v1, 0, 0);
}

//----- (022418EC) --------------------------------------------------------
int __fastcall Function_22418ec(int a1)
{
  int v1;

  v1 = a1;
  Function_201ada4_ClearTextBox(a1 + 36, 0);
  return Function_2241878(v1, 2, 1u);
}

//----- (0224190C) --------------------------------------------------------
int __fastcall Function_224190c(int a1)
{
  int v1;

  v1 = a1;
  Function_201ada4_ClearTextBox(a1 + 52, 0);
  return Function_2241878(v1, 3, 2u);
}

//----- (0224192C) --------------------------------------------------------
int __fastcall Function_224192c(int a1)
{
  int v1;

  v1 = a1;
  Function_201ada4_ClearTextBox(a1 + 68, 0);
  return Function_2241878(v1, 4, 3u);
}

//----- (0224194C) --------------------------------------------------------
int __fastcall Function_224194c(int a1)
{
  int v1;

  v1 = a1;
  Function_201ada4_ClearTextBox(a1 + 84, 0);
  return Function_2241878(v1, 5, 4u);
}

//----- (0224196C) --------------------------------------------------------
int __fastcall Function_224196c(int a1)
{
  int v1;

  v1 = a1;
  Function_201ada4_ClearTextBox(a1 + 100, 0);
  return Function_2241878(v1, 6, 5u);
}

//----- (0224198C) --------------------------------------------------------
int __fastcall Function_224198c(int a1)
{
  int v1;
  int v2;
  ushort *v3;
  int v4;
  int v5;
  int v6;
  ushort *v7;
  int v8;

  v1 = a1;
  v2 = a1 + 20;
  Function_201ada4_ClearTextBox(a1 + 20, 0);
  Function_200c578(*(uint *)(v1 + 204), 2, v2, 0, 5u);
  v3 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 196), 6u);
  v4 = Function_2023790(6, 0x24u);
  Function_200b60c(*(uint *)(v1 + 200), 0, *(uchar *)(*(uint *)(v1 + 504) + 8) + 1, 2, 2, 1);
  Function_200c388(*(uint **)(v1 + 200), v4, (int)v3);
  Function_201d78c(v2, 0);
  Function_20237bc_FreeMsg((int)v3, v5);
  Function_20237bc_FreeMsg(v4, v6);
  v7 = Function_209742c(*(uchar *)(*(uint *)(v1 + 504) + 8), 0x24u);
  Function_201d78c(v2, 0);
  Function_20237bc_FreeMsg((int)v7, v8);
  return Function_201a9a4(v2);
}

//----- (02241A58) --------------------------------------------------------
int __fastcall Function_2241a58(int a1)
{
  int v1;
  int v2;
  ushort *v3;
  int v4;

  v1 = a1;
  v2 = a1 + 180;
  Function_201ada4_ClearTextBox(a1 + 180, 0);
  v3 = Function_2097454(*(uchar *)(*(uint *)(v1 + 504) + 8), 0x24u);
  Function_201d78c(v2, 0);
  Function_20237bc_FreeMsg((int)v3, v4);
  return Function_201a9a4(v2);
}

//----- (02241AA8) --------------------------------------------------------
int __fastcall Function_2241aa8(int a1)
{
  int v1;
  int v2;
  ushort *v3;
  int v4;

  v1 = a1;
  v2 = a1 + 148;
  Function_201ada4_ClearTextBox(a1 + 148, 0);
  v3 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 196), 0xAu);
  Function_201d78c(v2, 0);
  Function_20237bc_FreeMsg((int)v3, v4);
  return Function_201a9a4(v2);
}

//----- (02241AF4) --------------------------------------------------------
int __fastcall Function_2241af4(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  ushort *v5;
  int v6;

  v1 = a1;
  v2 = a1 + 164;
  Function_201ada4_ClearTextBox(a1 + 164, 0);
  v3 = Function_20973d4(*(uint *)(v1 + 508), 1u);
  v4 = v3;
  if ( v3 )
    v4 = v3 - 1;
  v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 196), v4 + 11);
  Function_201d78c(v2, 0);
  Function_20237bc_FreeMsg((int)v5, v6);
  return Function_201a9a4(v2);
}

//----- (02241B50) --------------------------------------------------------
int __fastcall Function_2241b50(int a1)
{
  int v1;
  int v2;
  ushort *v3;
  int v4;

  v1 = a1;
  v2 = a1 + 116;
  Function_201ada4_ClearTextBox(a1 + 116, 0);
  v3 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 196), 8u);
  Function_201d78c(v2, 0);
  Function_20237bc_FreeMsg((int)v3, v4);
  return Function_201a9a4(v2);
}

//----- (02241B9C) --------------------------------------------------------
int __fastcall Function_2241b9c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v1 = a1;
  v2 = a1 + 132;
  Function_201ada4_ClearTextBox(a1 + 132, 0);
  v3 = Function_20973d4(*(uint *)(v1 + 508), 0);
  v4 = u32_div_f(1000 * v3, 254);
  v5 = u32_div_f(v4 + 5, 10);
  v6 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 196), 9u);
  v7 = Function_2023790(32, 0x24u);
  v8 = u32_div_f(v5, 10);
  Function_200b60c(*(uint *)(v1 + 200), 0, v8, 2, 0, 1);
  u32_div_f(v5, 10);
  Function_200b60c(*(uint *)(v1 + 200), 1u, v9, 1, 0, 1);
  Function_200c388(*(uint **)(v1 + 200), v7, (int)v6);
  Function_201d78c(v2, 0);
  Function_20237bc_FreeMsg((int)v6, v10);
  Function_20237bc_FreeMsg(v7, v11);
  return Function_201a9a4(v2);
}

//----- (02241C64) --------------------------------------------------------
int __fastcall Function_2241c64(int result, char a2)
{
  int v2;

  v2 = result;
  switch ( a2 )
  {
    case 0:
      result = Function_22418cc(result);
      break;
    case 1:
      result = Function_22418ec(result);
      break;
    case 2:
      result = Function_224198c(result);
      break;
    case 3:
      Function_224196c(result);
      result = Function_224190c(v2);
      break;
    case 4:
      Function_224192c(result);
      result = Function_224194c(v2);
      break;
    case 5:
      Function_2241b50(result);
      result = Function_2241b9c(v2);
      break;
    case 6:
      Function_2241aa8(result);
      result = Function_2241af4(v2);
      break;
    case 7:
      result = Function_2241a58(result);
      break;
    default:
      return result;
  }
  return result;
}

//----- (02241CD0) --------------------------------------------------------
int __fastcall Function_2241cd0(int a1)
{
  int v1;
  uint v2;
  int result;

  v1 = a1;
  v2 = 0;
  do
    result = Function_2241c64(v1, v2++);
  while ( v2 < 8 );
  return result;
}

//----- (02241CE8) --------------------------------------------------------
int Function_2241ce8()
{
  if ( Function_200f2ac() != 1 )
    return 0;
  G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 2, 4, 16, 0);
  return 1;
}

//----- (02241D10) --------------------------------------------------------
int __fastcall Function_2241d10(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int result;
  int v7;
  int v8;
  int v9;
  uchar *v10;

  v1 = a1;
  if ( dword_21BF6C0 & 0x40 )
  {
    v2 = *(uchar *)(*(uint *)(a1 + 504) + 8);
    v3 = Function_2241eb8();
    v4 = *(uint *)(v1 + 504);
    if ( *(uchar *)(v4 + 8) == v3 )
    {
      result = 1;
    }
    else
    {
      *(uchar *)(v4 + 8) = v3;
      *(uchar *)(v1 + 513) = 0;
      *(uchar *)(v1 + 512) = 0;
      v5 = *(uint *)(v1 + 504);
      if ( *(uchar *)(v5 + 10) == 3 && *(uchar *)(v5 + 9) )
        --*(uchar *)(v5 + 9);
      else
        --*(uchar *)(v5 + 10);
      result = 2;
    }
  }
  else if ( dword_21BF6C0 & 0x80 )
  {
    v7 = *(uchar *)(*(uint *)(a1 + 504) + 8);
    v8 = Function_2241eb8();
    v9 = *(uint *)(v1 + 504);
    if ( *(uchar *)(v9 + 8) == v8 )
    {
      result = 1;
    }
    else
    {
      *(uchar *)(v9 + 8) = v8;
      *(uchar *)(v1 + 513) = 0;
      *(uchar *)(v1 + 512) = 0;
      v10 = *(uchar **)(v1 + 504);
      if ( v10[10] != 5 || (uchar)v10[9] + 9 >= (uchar)v10[11] )
        ++v10[10];
      else
        ++v10[9];
      result = 2;
    }
  }
  else if ( dword_21BF6C4 & 2 || word_21BF6DC )
  {
    Function_208c120(1, 36);
    result = 3;
  }
  else
  {
    result = 1;
  }
  return result;
}

//----- (02241DEC) --------------------------------------------------------
int Function_2241dec()
{
  return (uchar)Function_200f2ac();
}

//----- (02241DF8) --------------------------------------------------------
int __fastcall Function_2241df8(int a1)
{
  int v1;
  int v2;

  v1 = 2;
  v2 = a1;
  if ( *(uchar *)(a1 + 512) )
  {
    if ( *(uchar *)(a1 + 512) == 1 )
    {
      Function_2241f0c();
      *(uchar *)(v2 + 512) = 2;
    }
    else
    {
      *(uchar *)(a1 + 513) -= 4;
      if ( !*(uchar *)(a1 + 513) )
      {
        *(uchar *)(a1 + 512) = 0;
        v1 = 1;
      }
    }
  }
  else
  {
    *(uchar *)(a1 + 513) += 4;
    if ( *(uchar *)(a1 + 513) == 16 )
      *(uchar *)(a1 + 512) = 1;
  }
  REG_BLDALPHA = (16 - *(uchar *)(v2 + 513)) | (*(uchar *)(v2 + 513) << 8);
  return v1;
}

//----- (02241E60) --------------------------------------------------------
int __fastcall Function_2241e60(int a1, int a2)
{
  int v2;
  int v3;
  uint v4;
  uint v5;

  v2 = a1;
  v3 = a2;
  v4 = Function_2241eb0(*(uchar *)(*(uint *)(a1 + 504) + 8));
  Function_20070e8(v3, v4, *(uint **)v2, 1u, 1, 0, 0, 36);
  v5 = Function_2241eb4(*(uchar *)(*(uint *)(v2 + 504) + 8));
  return Function_2007130(v3, v5, 0, 96, 32, 36);
}

//----- (02241EB0) --------------------------------------------------------
int __fastcall Function_2241eb0(int a1)
{
  return a1 + 6;
}

//----- (02241EB4) --------------------------------------------------------
int __fastcall Function_2241eb4(int a1)
{
  return a1 + 70;
}

//----- (02241EB8) --------------------------------------------------------
int __fastcall Function_2241eb8(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;

  v3 = a2;
  v4 = a3;
  v5 = a1;
  v6 = a2;
  if ( a3 >= 0 )
  {
    if ( a2 != 63 )
    {
      do
      {
        if ( Function_2097368(v5, (ushort)++v6) == 1 )
        {
          v3 = (ushort)v6;
          if ( !--v4 )
            break;
        }
      }
      while ( v6 != 63 );
    }
  }
  else if ( a2 )
  {
    do
    {
      if ( Function_2097368(v5, (ushort)--v6) == 1 )
      {
        v3 = v6;
        if ( !++v4 )
          break;
      }
    }
    while ( v6 );
  }
  return v3;
}

//----- (02241F0C) --------------------------------------------------------
int __fastcall Function_2241f0c(int a1)
{
  int v1;
  int v2;
  int v3;
  int *v4;

  v1 = a1;
  free(*(uint *)(a1 + 508));
  *(uint *)(v1 + 508) = Function_20973b8(*(uchar *)(*(uint *)(v1 + 504) + 8), 0x24u);
  Function_2241cd0(v1);
  v4 = LoadFromNARC_8(53, 0x24u, v2, v3);
  Function_2241e60(v1, (int)v4);
  Call_FS_CloseFile(v4);
  Function_2242578(v1);
  return Function_2019448(*(uint **)v1, 1u);
}

//----- (02241F5C) --------------------------------------------------------
int Function_2241f5c()
{
  int result;

  G3X_Init();
  G3X_InitMtxStack();
  GFX_CONTROL &= 0xCFFDu;
  GFX_CONTROL &= 0xCFFBu;
  GFX_CONTROL = (GFX_CONTROL & 0xCFFF | 8) & 0xCFFF | 0x10;
  GFX_CONTROL &= 0xCFDFu;
  G3X_SetFog(0, 0, 0, 0);
  G3X_SetClearColor(0, 0, 0x7FFF, 63, 0);
  GFX_FLUSH = 0;
  GFX_VIEWPORT = -1073807360;
  Function_201ff0c(1u, 1);
  result = 3;
  REG_BG0CNT &= 0xFFFCu;
  return result;
}

//----- (02241FF0) --------------------------------------------------------
int *__fastcall Function_2241ff0(int a1)
{
  int v1;
  int *result;

  v1 = a1;
  Call_G3X_Reset();
  Function_20203ec();
  MATRIX_CONTROL = 2;
  MATRIX_IDENTITY = 0;
  Function_22420a8(v1 + 212);
  Function_2242144(v1);
  result = &GFX_FLUSH;
  GFX_FLUSH = 1;
  return result;
}

//----- (0224202C) --------------------------------------------------------
uint __fastcall Function_224202c(int a1)
{
  return Call_free5(*(uint *)(a1 + 208));
}

//----- (02242038) --------------------------------------------------------
int __fastcall Function_2242038(int a1, int a2, int a3, int a4)
{
  int v4;
  short v6;
  short v7;
  short v8;
  short v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v13 = a4;
  v4 = a1;
  v10 = 0;
  v11 = 0;
  v12 = 0x10000;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  *(uint *)(a1 + 208) = Function_20203ac(0x24u);
  Function_2020738(&v10, 0x10000, &v6, 1473, 1u, *(uint *)(v4 + 208));
  Function_20206bc(0, 409600, *(uint *)(v4 + 208));
  Function_20206b0(*(uint **)(v4 + 208));
  return Function_20203d4(*(uint *)(v4 + 208));
}

//----- (022420A8) --------------------------------------------------------
int *__fastcall Function_22420a8(ushort *a1)
{
  ushort *v1;
  uint v2;
  bool v3;
  int v4;
  int v5;
  int v6;
  int *result;

  v1 = a1;
  GFX_POLY_FORMAT = 303562944;
  GFX_BEGIN = 1;
  v2 = 0;
  do
  {
    GFX_COLOR = 16360;
    v3 = (*v1 | (v1[1] << 16)) == 0;
    GFX_VERTEX16 = v1[2];
    GFX_COLOR = 16360;
    v4 = v1[5];
    GFX_VERTEX16 = v1[3] | (v1[4] << 16);
    GFX_VERTEX16 = v4;
    GFX_COLOR = 16360;
    v5 = v1[11];
    GFX_VERTEX16 = v1[9] | (v1[10] << 16);
    GFX_VERTEX16 = v5;
    GFX_COLOR = 16360;
    v6 = v1[8];
    GFX_VERTEX16 = v1[6] | (v1[7] << 16);
    ++v2;
    v1 += 12;
    GFX_VERTEX16 = v6;
  }
  while ( v2 < 4 );
  result = &GFX_END;
  GFX_END = 0;
  return result;
}

//----- (02242124) --------------------------------------------------------
ushort *__fastcall Function_2242124(ushort *result, ushort *a2)
{
  *result += *a2;
  result[1] += a2[1];
  result[2] += a2[2];
  return result;
}

//----- (02242144) --------------------------------------------------------
int __fastcall Function_2242144(int a1)
{
  int result;
  int v2;
  int v3;
  uint v4;
  short *v5;
  ushort *v6;
  int v7;
  short v8;
  ushort *v9;
  ushort *v10;
  ushort *v11;
  ushort *v12;
  int v13;
  uint v14;
  ushort *v15;
  ushort *v16;
  ushort *v17;
  ushort *v18;

  v13 = a1;
  result = 500;
  v2 = *(uint *)(v13 + 500);
  if ( v2 != 4 )
  {
    if ( v2 == 3 )
    {
      v3 = v13;
      v4 = 0;
      do
      {
        v5 = (short *)(v3 + 404);
        v6 = (ushort *)(v3 + 212);
        v7 = 12;
        do
        {
          v8 = *v5;
          ++v5;
          *v6 = v8;
          ++v6;
          --v7;
        }
        while ( v7 );
        ++v4;
        v3 += 24;
      }
      while ( v4 < 4 );
    }
    else
    {
      v14 = 0;
      v18 = (ushort *)(v13 + 308);
      v17 = (ushort *)(v13 + 212);
      v16 = (ushort *)(v13 + 314);
      v15 = (ushort *)(v13 + 218);
      v9 = (ushort *)(v13 + 320);
      v10 = (ushort *)(v13 + 224);
      v11 = (ushort *)(v13 + 326);
      v12 = (ushort *)(v13 + 230);
      do
      {
        Function_2242124(v17, v18);
        Function_2242124(v15, v16);
        Function_2242124(v10, v9);
        Function_2242124(v12, v11);
        v9 += 12;
        v18 += 12;
        v10 += 12;
        v17 += 12;
        v11 += 12;
        v16 += 12;
        v12 += 12;
        v15 += 12;
        ++v14;
      }
      while ( v14 < 4 );
    }
    result = v13;
    ++*(uint *)(v13 + 500);
  }
  return result;
}

//----- (02242218) --------------------------------------------------------
int __fastcall Function_2242218(ushort *a1)
{
  a1[106] = 1408;
  a1[107] = 1410;
  a1[108] = 0;
  a1[109] = 1408;
  a1[110] = 1410;
  a1[111] = 0;
  a1[112] = 1408;
  a1[113] = 1410;
  a1[114] = 0;
  a1[115] = 1408;
  a1[116] = 1410;
  a1[117] = 0;
  a1[118] = 1448;
  a1[119] = 1410;
  a1[120] = 0;
  a1[121] = 1448;
  a1[122] = 1410;
  a1[123] = 0;
  a1[124] = 1448;
  a1[125] = 1410;
  a1[126] = 0;
  a1[127] = 1448;
  a1[128] = 1410;
  a1[129] = 0;
  a1[130] = 1448;
  a1[131] = 1410;
  a1[132] = 0;
  a1[133] = 1448;
  a1[134] = 1410;
  a1[135] = 0;
  a1[136] = 1448;
  a1[137] = 1410;
  a1[138] = 0;
  a1[139] = 1448;
  a1[140] = 1410;
  a1[141] = 0;
  a1[142] = 1408;
  a1[143] = 1410;
  a1[144] = 0;
  a1[145] = 1408;
  a1[146] = 1410;
  a1[147] = 0;
  a1[148] = 1408;
  a1[149] = 1410;
  a1[150] = 0;
  a1[151] = 1408;
  a1[152] = 1410;
  a1[153] = 0;
  return Function_2242578(a1);
}

//----- (022423A0) --------------------------------------------------------
int __fastcall Function_22423a0(ushort *a1, ushort *a2, int a3)
{
  int result;
  int v4;
  int v5;

  if ( a3 == 255 )
  {
    *a2 = *a1;
    a2[1] = a1[1];
    result = (ushort)a1[2];
    a2[2] = result;
  }
  else if ( a3 )
  {
    *a2 = a1[3] + a1[6] * a3;
    a2[1] = a1[4] + a1[7] * a3;
    v4 = (short)a1[5];
    v5 = a3 * (short)a1[8];
    result = v4 + v5;
    a2[2] = v4 + v5;
  }
  else
  {
    *a2 = a1[3];
    a2[1] = a1[4];
    result = (ushort)a1[5];
    a2[2] = result;
  }
  return result;
}

//----- (022423FC) --------------------------------------------------------
int __fastcall Function_22423fc(short *a1, short *a2, ushort *a3)
{
  short *v3;
  short *v4;
  ushort *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uchar v10;
  char v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  uint v19;
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
  uint v32;
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
  uint v45;
  int v46;
  int result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = *a2 - *a1;
  v7 = fflt(v6);
  v8 = f_div(v7, 0x45800000u);
  v9 = f_div(v8, 0x40800000u);
  Function_20e1108(v9, 0);
  if ( !v11 & v10 )
  {
    v12 = fflt(v6);
    v13 = f_div(v12, 0x45800000u);
    v14 = f_div(v13, 0x40800000u);
    v15 = fmul(0x45800000u, v14);
    v20 = fadd(0x3F000000u, v15);
  }
  else
  {
    v16 = fflt(v6);
    v17 = f_div(v16, 0x45800000u);
    v18 = f_div(v17, 0x40800000u);
    v19 = fmul(0x45800000u, v18);
    v20 = fsub(v19, 1056964608);
  }
  *v5 = ffix(v20);
  v21 = v4[1] - v3[1];
  v22 = fflt(v21);
  v23 = f_div(v22, 0x45800000u);
  v24 = f_div(v23, 0x40800000u);
  Function_20e1108(v24, 0);
  if ( !v11 & v10 )
  {
    v25 = fflt(v21);
    v26 = f_div(v25, 0x45800000u);
    v27 = f_div(v26, 0x40800000u);
    v28 = fmul(0x45800000u, v27);
    v33 = fadd(0x3F000000u, v28);
  }
  else
  {
    v29 = fflt(v21);
    v30 = f_div(v29, 0x45800000u);
    v31 = f_div(v30, 0x40800000u);
    v32 = fmul(0x45800000u, v31);
    v33 = fsub(v32, 1056964608);
  }
  v5[1] = ffix(v33);
  v34 = v4[2] - v3[2];
  v35 = fflt(v34);
  v36 = f_div(v35, 0x45800000u);
  v37 = f_div(v36, 0x40800000u);
  Function_20e1108(v37, 0);
  if ( !v11 & v10 )
  {
    v38 = fflt(v34);
    v39 = f_div(v38, 0x45800000u);
    v40 = f_div(v39, 0x40800000u);
    v41 = fmul(0x45800000u, v40);
    v46 = fadd(0x3F000000u, v41);
  }
  else
  {
    v42 = fflt(v34);
    v43 = f_div(v42, 0x45800000u);
    v44 = f_div(v43, 0x40800000u);
    v45 = fmul(0x45800000u, v44);
    v46 = fsub(v45, 1056964608);
  }
  result = (short)ffix(v46);
  v5[2] = result;
  return result;
}

//----- (02242578) --------------------------------------------------------
int __fastcall Function_2242578(int a1)
{
  int v1;
  uchar v2;
  uchar v3;
  uchar v4;
  uchar v5;
  uchar v6;
  uchar v7;
  uchar v8;
  uchar v9;
  uchar v10;
  uchar v11;
  uchar v12;
  uchar v13;
  ushort *v14;
  short *v15;
  short *v16;
  int result;
  short *v18;
  short *v19;
  ushort *v20;
  short *v21;
  short *v22;
  ushort *v23;
  short *v24;
  short *v25;
  ushort *v26;
  uint v27;

  v1 = a1;
  v2 = Function_20973d4(*(uint *)(a1 + 508), 5u);
  Function_22423a0(dword_2242938, (ushort *)(v1 + 404), v2);
  v3 = Function_20973d4(*(uint *)(v1 + 508), 6u);
  Function_22423a0((ushort *)&dword_2242940[2] + 1, (ushort *)(v1 + 410), v3);
  v4 = Function_20973d4(*(uint *)(v1 + 508), 7u);
  Function_22423a0(dword_224295C, (ushort *)(v1 + 422), v4);
  Function_22423a0((ushort *)&dword_224295C[4] + 1, (ushort *)(v1 + 416), 0);
  v5 = Function_20973d4(*(uint *)(v1 + 508), 9u);
  Function_22423a0(&dword_2242980, (ushort *)(v1 + 428), v5);
  v6 = Function_20973d4(*(uint *)(v1 + 508), 5u);
  Function_22423a0((ushort *)&dword_2242984[3] + 1, (ushort *)(v1 + 434), v6);
  Function_22423a0(&dword_22429A4, (ushort *)(v1 + 446), 0);
  v7 = Function_20973d4(*(uint *)(v1 + 508), 8u);
  Function_22423a0((ushort *)dword_22429B4 + 1, (ushort *)(v1 + 440), v7);
  v8 = Function_20973d4(*(uint *)(v1 + 508), 9u);
  Function_22423a0(dword_22429C8, (ushort *)(v1 + 452), v8);
  Function_22423a0((ushort *)&dword_22429C8[4] + 1, (ushort *)(v1 + 458), 0);
  v9 = Function_20973d4(*(uint *)(v1 + 508), 7u);
  Function_22423a0(dword_22429EC, (ushort *)(v1 + 470), v9);
  v10 = Function_20973d4(*(uint *)(v1 + 508), 8u);
  Function_22423a0((ushort *)&dword_22429EC[4] + 1, (ushort *)(v1 + 464), v10);
  Function_22423a0(&dword_2242A10, (ushort *)(v1 + 476), 0);
  v11 = Function_20973d4(*(uint *)(v1 + 508), 6u);
  Function_22423a0((ushort *)dword_2242A20 + 1, (ushort *)(v1 + 482), v11);
  v12 = Function_20973d4(*(uint *)(v1 + 508), 7u);
  Function_22423a0(dword_2242A34, (ushort *)(v1 + 494), v12);
  v13 = Function_20973d4(*(uint *)(v1 + 508), 8u);
  Function_22423a0((ushort *)&dword_2242A34[4] + 1, (ushort *)(v1 + 488), v13);
  v27 = 0;
  v26 = (ushort *)(v1 + 308);
  v25 = (short *)(v1 + 404);
  v24 = (short *)(v1 + 212);
  v23 = (ushort *)(v1 + 314);
  v22 = (short *)(v1 + 410);
  v21 = (short *)(v1 + 218);
  v20 = (ushort *)(v1 + 320);
  v19 = (short *)(v1 + 416);
  v18 = (short *)(v1 + 224);
  v14 = (ushort *)(v1 + 326);
  v15 = (short *)(v1 + 422);
  v16 = (short *)(v1 + 230);
  do
  {
    Function_22423fc(v24, v25, v26);
    Function_22423fc(v21, v22, v23);
    Function_22423fc(v18, v19, v20);
    Function_22423fc(v16, v15, v14);
    v14 += 12;
    v26 += 12;
    v15 += 12;
    v25 += 12;
    v16 += 12;
    v24 += 12;
    v23 += 12;
    v22 += 12;
    v21 += 12;
    v20 += 12;
    v19 += 12;
    v18 += 12;
    ++v27;
  }
  while ( v27 < 4 );
  result = 500;
  *(uint *)(v1 + 500) = 0;
  return result;
}

