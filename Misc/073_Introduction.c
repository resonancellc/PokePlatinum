//----- (021D0D80) --------------------------------------------------------
int __fastcall NewGame2Init(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  Function_2017fc8(3, 82, 0x40000);
  v2 = MallocSomeDataAndStorePtrInOverlayData1c(v1, 192, 0x52u);
  Call_FillMemWithValue((int *)v2, 0, 0xC0u);
  *(uint *)v2 = 82;
  v3 = *(uint *)(LoadPtrToOverWorldDataIn18(v1) + 8);
  *(uint *)(v2 + 4) = v3;
  *(uint *)(v2 + 8) = LoadPlayerDataAdress(v3);
  *(uint *)(v2 + 12) = 0;
  *(uint *)(v2 + 16) = 0;
  *(uint *)(v2 + 20) = 0;
  *(uint *)(v2 + 112) = Function_208712c(0x52u, 0, 0, 7, *(uint *)(v2 + 8));
  *(uint *)(v2 + 116) = Function_208712c(0x52u, 3, 0, 7, *(uint *)(v2 + 8));
  *(uchar *)(v2 + 136) = 0;
  *(uchar *)(v2 + 137) = 0;
  *(uchar *)(v2 + 138) = 0;
  *(uchar *)(v2 + 139) = 0;
  *(uint *)(v2 + 144) = 0;
  *(uint *)(v2 + 184) = malloc(0x52u, 32);
  *(uint *)(v2 + 188) = malloc(0x52u, 32);
  return 1;
}

//----- (021D0E20) --------------------------------------------------------
int __fastcall NewGame2Loop(int a1, int *a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int *v7;
  int v8;

  v2 = a2;
  v3 = LoadOverlayData1c(a1);
  v6 = *v2;
  v7 = (int *)v3;
  v8 = 0;
  if ( (uint)*v2 <= 5 )
    JUMPOUT(__CS__, *((short *)&off_21D0E42 + v6) + 35458628);
  switch ( (uchar)v6 )
  {
    case 0:
      SetBrightnessWithValue(0, 0);
      SetBrightnessWithValue(1, 0);
      SetMainLoopFunctionCall(0, 0);
      Function_20177bc(0, 0);
      Function_201ff00();
      Function_201ff68();
      REG_DISPCNT &= 0xFFFFE0FF;
      REG_DISPCNT_SUB &= 0xFFFFE0FF;
      Function_2017dd4(4, 8);
      Function_21d1058(v7);
      Function_21d12c4(v7);
      Function_21d1318(v7);
      SetMainLoopFunctionCall((int)Function_21d0ff0, (int)v7);
      Function_201ffd0();
      *v2 = 1;
      break;
    case 1:
      if ( Function_21d2318() == 1 )
      {
        Function_200f174(0, 0, 0, 0, 6, 1, *v7);
        *v2 = 2;
      }
      if ( v7[5] )
      {
        Function_200f174(0, 0, 0, 0, 6, 1, *v7);
        *v2 = 3;
      }
      break;
    case 2:
      if ( Function_200f2ac() == 1 )
      {
        Function_21d1300(v7);
        Function_21d1238(v7);
        Function_21d1328(v7);
        SetMainLoopFunctionCall(0, 0);
        v8 = 1;
      }
      break;
    case 3:
      if ( Function_200f2ac() == 1 )
      {
        Function_21d1300(v7);
        Function_21d1238(v7);
        Function_21d1328(v7);
        SetMainLoopFunctionCall(0, 0);
        *v2 = 4;
      }
      break;
    case 4:
      if ( CallOverlayDataJumpTable(*(uint *)(v3 + 20), v6, v4, v5) == 1 )
      {
        Call_free2(v7[5]);
        v7[5] = 0;
        *v2 = 5;
      }
      break;
    case 5:
      *v2 = 0;
      break;
    default:
      return v8;
  }
  return v8;
}

//----- (021D0F7C) --------------------------------------------------------
int __fastcall NewGame2End(int a1)
{
  int v1;
  int *v2;
  int *v3;
  int v4;
  uchar *v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v1 = a1;
  v2 = (int *)LoadOverlayData1c(a1);
  v3 = v2;
  v4 = *v2;
  free(v2[46]);
  free(v3[47]);
  v5 = (uchar *)LoadTrainerDataAdress(v3[1]);
  Function_2025ee0(v5, *(uint *)(v3[28] + 24));
  v6 = LoadTrainerDataAdress(v3[1]);
  SetGender(v6, *(uint *)(v3[28] + 4));
  v7 = LoadVariableAreaAdress_a_3(v3[1]);
  Function_202787c(v7, *(uint *)(v3[29] + 24));
  Function_208716c(v3[28], v8);
  Function_208716c(v3[29], v9);
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(v4);
  SetOverlayJumpTableDataToLoad(57, 35458944);
  return 1;
}

//----- (021D0FF0) --------------------------------------------------------
int __fastcall Function_21d0ff0(int a1)
{
  return Function_201c2b8(*(uint *)(a1 + 24));
}

//----- (021D0FFC) --------------------------------------------------------
int Function_21d0ffc()
{
  int result;
  uint v1;
  uint v2;
  uint v3;

  result = 0;
  if ( word_21BF6DC && (ushort)word_21BF6D8 < 0x100u && (ushort)word_21BF6DA < 0xC0u )
  {
    if ( (ushort)word_21BF6D8 >= 0x80u )
      v1 = ((ushort)word_21BF6D8 - 128) << 16;
    else
      v1 = (128 - (ushort)word_21BF6D8) << 16;
    v2 = v1 >> 16;
    if ( (ushort)word_21BF6DA >= 0x64u )
      v3 = ((ushort)word_21BF6DA - 100) << 16;
    else
      v3 = (100 - (ushort)word_21BF6DA) << 16;
    if ( (int)(v2 * v2 + (v3 >> 16) * (v3 >> 16)) <= 256 )
      result = 1;
  }
  return result;
}

//----- (021D1058) --------------------------------------------------------
int __fastcall Function_21d1058(int a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  char *v6;
  int v7;
  int v8;
  int v9;
  int result;
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
  char v29;
  int v30;

  v30 = a4;
  v4 = dword_21D392C;
  v5 = a1;
  v6 = &v29;
  v7 = 5;
  do
  {
    v8 = *v4;
    v9 = v4[1];
    v4 += 2;
    *(uint *)v6 = v8;
    *((uint *)v6 + 1) = v9;
    v6 += 8;
    --v7;
  }
  while ( v7 );
  GX_SetBanks((int *)&v29);
  *(uint *)(v5 + 24) = Function_2018340(*(uint *)v5);
  v25 = 1;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  SetGraphicsModes(&v25);
  v18 = 0;
  v19 = 0;
  v20 = 2048;
  v21 = 0;
  v22 = 1;
  v23 = 256;
  v24 = 0;
  HIWORD(v22) = 1551;
  Function_20183c4(*(uint **)(v5 + 24), 0, &v18, 0);
  Function_2019ebc(*(uint **)(v5 + 24), 0);
  HIWORD(v22) = 1294;
  Function_20183c4(*(uint **)(v5 + 24), 1u, &v18, 0);
  Function_2019ebc(*(uint **)(v5 + 24), 1u);
  HIWORD(v22) = 1037;
  Function_20183c4(*(uint **)(v5 + 24), 2u, &v18, 0);
  Function_2019ebc(*(uint **)(v5 + 24), 2u);
  HIWORD(v22) = 780;
  Function_20183c4(*(uint **)(v5 + 24), 3u, &v18, 0);
  Function_2019ebc(*(uint **)(v5 + 24), 3u);
  Function_200dd0c(*(uint **)(v5 + 24), 0, 994, 4, 0, *(uint *)v5);
  Function_200daa4(*(uint **)(v5 + 24), 0, 985, 3, 0, *(uint *)v5);
  LoadFromNARC_PlFont1(0, 160, *(uint *)v5);
  LoadFromNARC_PlFont2(0, 192, *(uint *)v5);
  v11 = 0;
  v12 = 0;
  v13 = 2048;
  v14 = 0;
  v15 = 1;
  v16 = 0;
  v17 = 0;
  HIWORD(v15) = 1551;
  Function_20183c4(*(uint **)(v5 + 24), 4u, &v11, 0);
  Function_2019ebc(*(uint **)(v5 + 24), 4u);
  HIWORD(v15) = 1294;
  Function_20183c4(*(uint **)(v5 + 24), 5u, &v11, 0);
  Function_2019ebc(*(uint **)(v5 + 24), 5u);
  HIWORD(v15) = 1037;
  Function_20183c4(*(uint **)(v5 + 24), 6u, &v11, 0);
  Function_2019ebc(*(uint **)(v5 + 24), 6u);
  HIWORD(v15) = 780;
  Function_20183c4(*(uint **)(v5 + 24), 7u, &v11, 0);
  Function_2019ebc(*(uint **)(v5 + 24), 7u);
  Function_2019120(0, 0);
  Function_2019120(1u, 0);
  Function_2019120(2u, 0);
  Function_2019120(3u, 0);
  Function_2019120(4u, 0);
  Function_2019120(5u, 0);
  Function_2019120(6u, 0);
  Function_2019120(7u, 0);
  Function_21d1930(v5);
  result = 0;
  *(uint *)(v5 + 120) = 0;
  return result;
}

//----- (021D1238) --------------------------------------------------------
uint __fastcall Function_21d1238(int a1)
{
  int v1;

  v1 = a1;
  Function_2019120(0, 0);
  Function_2019120(1u, 0);
  Function_2019120(2u, 0);
  Function_2019120(3u, 0);
  Function_2019120(4u, 0);
  Function_2019120(5u, 0);
  Function_2019120(6u, 0);
  Function_2019120(7u, 0);
  Function_2019044(*(uint *)(v1 + 24), 0);
  Function_2019044(*(uint *)(v1 + 24), 1);
  Function_2019044(*(uint *)(v1 + 24), 2);
  Function_2019044(*(uint *)(v1 + 24), 3);
  Function_2019044(*(uint *)(v1 + 24), 4);
  Function_2019044(*(uint *)(v1 + 24), 5);
  Function_2019044(*(uint *)(v1 + 24), 6);
  Function_2019044(*(uint *)(v1 + 24), 7);
  return free(*(uint *)(v1 + 24));
}

//----- (021D12C4) --------------------------------------------------------
int __fastcall Function_21d12c4(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  a1[19] = LoadFromMsgNARC(1, 26, 389, *a1);
  Function_201d710();
  v1[24] = Function_201567c(0, 0, 6, *v1);
  v1[25] = (uint)Function_200b358(*v1);
  result = 0;
  v1[20] = 0;
  v1[21] = 0;
  v1[11] = 0;
  return result;
}

//----- (021D1300) --------------------------------------------------------
ushort *__fastcall Function_21d1300(int a1, int a2)
{
  int v2;

  v2 = a1;
  Function_200b3f0(*(uint **)(a1 + 100), a2);
  Function_2015760(*(int **)(v2 + 96));
  return Function_200b190(*(ushort **)(v2 + 76));
}

//----- (021D1318) --------------------------------------------------------
int *__fastcall Function_21d1318(uint *a1)
{
  uint *v1;
  int *result;

  v1 = a1;
  result = Function_2015920(*a1);
  v1[26] = (uint)result;
  return result;
}

//----- (021D1328) --------------------------------------------------------
uint __fastcall Function_21d1328(int a1)
{
  return Function_2015938(*(uint *)(a1 + 104));
}

//----- (021D1334) --------------------------------------------------------
int __fastcall Function_21d1334(uint *a1, uchar a2, int a3)
{
  uchar v3;
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint v9;
  int v10;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = 0;
  switch ( (uchar)a1 )
  {
    case 1:
      v7 = 2;
      v8 = 0;
      break;
    case 2:
      v7 = 4;
      v8 = 0;
      break;
    case 4:
      v7 = 1;
      v8 = 1;
      break;
    case 5:
      v7 = 2;
      v8 = 1;
      break;
    case 6:
      v7 = 4;
      v8 = 1;
      break;
    default:
      v7 = 1;
      v8 = 0;
      break;
  }
  v9 = v4[30];
  if ( v9 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_21D1394 + v9) + 35459990);
  switch ( (uchar)v9 )
  {
    case 0:
      if ( v5 )
      {
        v4[31] = 16;
        v4[32] = 0;
        v4[30] = 2;
      }
      else
      {
        v4[31] = 0;
        v4[32] = 16;
        v4[30] = 1;
        if ( v8 )
          G2x_SetBlendAlpha_((int *)&REG_BLDCNT_SUB, v7, 14, v4[31], v4[32]);
        else
          G2x_SetBlendAlpha_((int *)&REG_BLDCNT, v7, 14, v4[31], v4[32]);
        Function_2019120(v3, 1);
      }
      break;
    case 1:
      if ( v4[32] )
      {
        ++v4[31];
        --v4[32];
        if ( v8 )
          G2x_SetBlendAlpha_((int *)&REG_BLDCNT_SUB, v7, 14, v4[31], v4[32]);
        else
          G2x_SetBlendAlpha_((int *)&REG_BLDCNT, v7, 14, v4[31], v4[32]);
      }
      else
      {
        v4[30] = 3;
      }
      break;
    case 2:
      v10 = v4[31];
      if ( v10 )
      {
        v4[31] = v10 - 1;
        ++v4[32];
        if ( v8 )
          G2x_SetBlendAlpha_((int *)&REG_BLDCNT_SUB, v7, 14, v4[31], v4[32]);
        else
          G2x_SetBlendAlpha_((int *)&REG_BLDCNT, v7, 14, v4[31], v4[32]);
      }
      else
      {
        v4[30] = 3;
        Function_2019120(v3, 0);
      }
      break;
    case 3:
      REG_BLDCNT = 0;
      v6 = 1;
      REG_BLDCNT_SUB = 0;
      v4[30] = 0;
      break;
    default:
      return v6;
  }
  return v6;
}

//----- (021D14B8) --------------------------------------------------------
int __fastcall Function_21d14b8(int a1, int a2)
{
  int result;

  if ( *(uint *)(a1 + 144) >= a2 )
  {
    *(uint *)(a1 + 144) = 0;
    result = 1;
  }
  else
  {
    ++*(uint *)(a1 + 144);
    result = 0;
  }
  return result;
}

//----- (021D14DC) --------------------------------------------------------
int __fastcall Function_21d14dc(int a1, uchar a2, uchar a3)
{
  int v3;
  uchar v4;

  v3 = a1;
  v4 = a2;
  Function_2019e2c(*(uint *)(a1 + 24), a2, 0, 0, 0x20u, 0x18u, a3);
  return Function_2019448(*(uint **)(v3 + 24), v4);
}

//----- (021D1510) --------------------------------------------------------
int __fastcall Function_21d1510(int a1, uint a2, int a3)
{
  int v3;
  int v4;
  uint v5;
  int v6;
  ushort *v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v3 = a1;
  v4 = *(uint *)(a1 + 80);
  v5 = a2;
  v6 = 0;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      if ( !Function_201d724(*(uint *)(v3 + 88) & 0xFF) )
      {
        Function_20237bc_FreeMsg(*(uint *)(v3 + 92), v11);
        *(uint *)(v3 + 80) = 2;
      }
    }
    else if ( v4 == 2 && (a3 || (dword_21BF6C4 & 1) == 1) )
    {
      Function_201a8fc(v3 + 28);
      *(uint *)(v3 + 80) = 0;
      v6 = 1;
    }
  }
  else
  {
    Function_201a8d4(*(uint **)(v3 + 24), v3 + 28, (uchar *)dword_21D37EC);
    Function_201ae78(v3 + 28, 15, 0, 0, 0xD8u, 0x20u);
    Function_200e060(v3 + 28, 0, 994, 4u);
    Function_2002ac8(1);
    Function_2002ae4(0);
    v7 = (ushort *)Function_2023790(1024, *(uint *)v3);
    *(uint *)(v3 + 92) = Function_2023790(1024, *(uint *)v3);
    Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v3 + 76), v5, v7);
    v8 = *(uint *)(v3 + 132);
    Function_200b48c(*(int **)(v3 + 100), 0, *(uint *)(*(uint *)(v3 + 112) + 24));
    Function_200b48c(*(int **)(v3 + 100), 1u, *(uint *)(*(uint *)(v3 + 116) + 24));
    Function_200c388(*(uint **)(v3 + 100), *(uint *)(v3 + 92), (int)v7);
    Function_20237bc_FreeMsg((int)v7, v9);
    Function_2027ac0(*(ushort **)(v3 + 8));
    v10 = *(uint *)(v3 + 92);
    *(uint *)(v3 + 88) = Function_201d738_CallInitTextInterpreter(v3 + 28, 1);
    *(uint *)(v3 + 80) = 1;
  }
  return v6;
}

//----- (021D1634) --------------------------------------------------------
int __fastcall Function_21d1634(int a1, int a2, int a3)
{
  int result;

  if ( !a3 )
    result = Function_2005748(0x5DCu);
  return result;
}

//----- (021D1648) --------------------------------------------------------
int __fastcall Function_21d1648(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int *v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v13;
  int v14;
  int (__fastcall *v15)(int, int, int);
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;

  v3 = a1;
  v13 = 0;
  v4 = *(uint *)(a1 + 44);
  v5 = a3;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      v11 = Function_2001288(*(uint *)(v3 + 64));
      *(uint *)(v3 + 72) = v11;
      if ( v11 != -1 && (v11 != -2 || v5 != 1) )
      {
        Function_200dc9c(v3 + 48, 0);
        Function_201a8fc(v3 + 48);
        Function_2001384(*(uint *)(v3 + 64), 0, 0);
        Function_2013a3c(*(int **)(v3 + 68));
        Function_2005748(0x5DCu);
        *(uint *)(v3 + 44) = 0;
        v13 = 1;
      }
    }
    return v13;
  }
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v6 = dword_21D37DC;
      v7 = &dword_21D38A4;
      v8 = 3;
      goto LABEL_10;
    }
    if ( a2 == 2 )
    {
      v6 = &dword_21D37C4[2];
      v7 = &dword_21D3954;
      v8 = 5;
      goto LABEL_10;
    }
  }
  v6 = dword_21D37C4;
  v7 = &dword_21D3840;
  v8 = 2;
LABEL_10:
  Function_201a8d4(*(uint **)(v3 + 24), v3 + 48, (uchar *)v6);
  v9 = 0;
  for ( *(uint *)(v3 + 68) = Function_2013a04(v8, *(uint *)v3); v9 < v8; v7 += 2 )
  {
    Function_2013a4c(*(uint **)(v3 + 68), *(ushort ***)(v3 + 76), *v7, v7[1]);
    ++v9;
  }
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 268438528;
  v20 = 47;
  v21 = 0;
  v14 = *(uint *)(v3 + 68);
  LOWORD(v18) = v8;
  HIWORD(v18) = v8;
  v15 = Function_21d1634;
  v17 = v3 + 48;
  *(uint *)(v3 + 64) = Function_200112c(&v14, 0, 0, *(uint *)v3 & 0xFF);
  Function_200dc48(v17, 1, 985, 3u);
  Function_201a954(v3 + 48, v10);
  *(uint *)(v3 + 44) = 1;
  return v13;
}

//----- (021D1784) --------------------------------------------------------
int __fastcall Function_21d1784(uint *a1, uint a2, int a3, char a4, int a5)
{
  uint *v5;
  uint v6;
  int v7;
  char v8;
  int v9;
  char v10;
  uint v11;
  int v12;
  char v13;
  uint v14;
  uint v16;
  short v17;
  short v18;
  short v19;
  short v20;

  v5 = a1;
  v16 = a2;
  v6 = a1[21];
  v7 = a3;
  v8 = a4;
  v9 = 0;
  if ( v6 <= 5 )
    JUMPOUT(__CS__, *((short *)&off_21D17A6 + v6) + 35461032);
  switch ( (uchar)v6 )
  {
    case 0:
      Function_2019120(0, 0);
      v5[23] = Function_2023790(1024, *v5);
      Function_200b1b8_CallMsgDecrypt((ushort **)v5[19], v16, (ushort *)v5[23]);
      if ( v7 == 1 )
      {
        v17 = 1024;
        v18 = 6144;
        v19 = 1304;
        v20 = 301;
        v10 = Function_2023c5c(v5[23]);
        LOBYTE(v18) = 12 - v10;
        LOBYTE(v19) = 2 * v10;
        Function_201a8d4((uint *)v5[6], (int)(v5 + 7), (uchar *)&v17);
        Function_201ae78((int)(v5 + 7), 0, 0, 0, 0xC0u, 0xC0u);
        v11 = v5[23];
        Function_201d78c((int)(v5 + 7), 0);
      }
      else
      {
        v17 = 2048;
        v18 = 6144;
        v19 = 1304;
        v20 = 301;
        if ( v7 == 2 )
        {
          v13 = Function_2023c5c(v5[23]);
          LOBYTE(v18) = v8 + a5 / 2 - v13;
          LOBYTE(v19) = 2 * v13;
        }
        else
        {
          LOBYTE(v18) = v8;
          LOBYTE(v19) = a5;
        }
        Function_201a8d4((uint *)v5[6], (int)(v5 + 7), (uchar *)&v17);
        Function_201ae78((int)(v5 + 7), 0, 0, 0, 0xC0u, 0xC0u);
        v14 = v5[23];
        Function_201d78c((int)(v5 + 7), 0);
      }
      Function_20237bc_FreeMsg(v5[23], v12);
      v5[21] = 1;
      break;
    case 1:
      Function_201a954((int)(a1 + 7), v6);
      v5[21] = 2;
      break;
    case 2:
      if ( Function_21d1334(a1, 0, 0) == 1 )
        v5[21] = 3;
      break;
    case 3:
      if ( (dword_21BF6C4 & 1) == 1 || (dword_21BF6C4 & 2) == 2 )
      {
        Function_2005748(0x5DCu);
        v5[21] = 4;
      }
      break;
    case 4:
      if ( Function_21d1334(a1, 0, 1) == 1 )
        v5[21] = 5;
      break;
    case 5:
      Function_201a8fc((int)(a1 + 7));
      Function_2019ebc((uint *)v5[6], 0);
      v5[21] = 0;
      v9 = 1;
      break;
    default:
      return v9;
  }
  return v9;
}

//----- (021D1930) --------------------------------------------------------
uint __fastcall Function_21d1930(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  LoadFromNARC_RGCN(125, 0, *(uint **)(a1 + 24), 3u, 0, 0, 0, *(uint *)a1);
  Function_2019690(0, 32, 0, *(uint *)v1);
  LoadFromNARC_RGCN(125, 24, *(uint **)(v1 + 24), 7u, 0, 0, 0, *(uint *)v1);
  if ( GameIDNr == 12 )
  {
    v2 = 3;
    v3 = 27;
  }
  else if ( GameIDNr == 10 )
  {
    v2 = 1;
    v3 = 25;
  }
  else
  {
    v2 = 2;
    v3 = 26;
  }
  Call_LoadFromNARC_RLCN(125, v2, 0, 0, 96, *(uint *)v1);
  Call_LoadFromNARC_RLCN(125, v3, 4u, 0, 160, *(uint *)v1);
  Function_21d19dc(v1);
  Function_21d1a20(v1);
  Function_21d1b14(v1);
  Function_201975c(0, 0);
  return Function_201975c(4u, 0);
}

//----- (021D19DC) --------------------------------------------------------
uchar *__fastcall Function_21d19dc(int a1)
{
  int v1;
  uchar *result;
  uint v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v1 = a1;
  v4 = 4;
  v5 = 5;
  v6 = 6;
  v7 = 7;
  v8 = 8;
  result = (uchar *)(a1 + 136);
  v3 = *result;
  if ( v3 < 5 )
    result = (uchar *)LoadFromNARC_RCSN(
                                  125,
                                  *(&v4 + v3),
                                  *(uint **)(v1 + 24),
                                  3u,
                                  0,
                                  0,
                                  0,
                                  *(uint *)v1);
  return result;
}

//----- (021D1A20) --------------------------------------------------------
int __fastcall Function_21d1a20(int a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  char *v6;
  int v7;
  int v8;
  int v9;
  uint v10;
  int result;
  uint v12;
  char v13[4];
  char v14[84];
  int v15;

  v15 = a4;
  v4 = dword_21D397C;
  v5 = a1;
  v6 = v13;
  v7 = 11;
  do
  {
    v8 = *v4;
    v9 = v4[1];
    v4 += 2;
    *(uint *)v6 = v8;
    *((uint *)v6 + 1) = v9;
    v6 += 8;
    --v7;
  }
  while ( v7 );
  v10 = *(uchar *)(v5 + 137);
  if ( *(uchar *)(v5 + 137) && v10 < 0xC )
  {
    LoadFromNARC_RGCN(125, *(uint *)&v13[8 * v10], *(uint **)(v5 + 24), 1u, 0, 0, 0, *(uint *)v5);
    Call_LoadFromNARC_RLCN(125, *(uint *)&v14[8 * *(uchar *)(v5 + 137)], 0, 224, 32, *(uint *)v5);
    LoadFromNARC_RCSN(125, 23, *(uint **)(v5 + 24), 1u, 0, 0, 0, *(uint *)v5);
    Function_21d14dc(v5, 1u, 7u);
  }
  result = v5 + 138;
  v12 = *(uchar *)(v5 + 138);
  if ( *(uchar *)(v5 + 138) )
  {
    if ( v12 < 0xC )
    {
      LoadFromNARC_RGCN(125, *(uint *)&v13[8 * v12], *(uint **)(v5 + 24), 2u, 0, 0, 0, *(uint *)v5);
      Call_LoadFromNARC_RLCN(125, *(uint *)&v14[8 * *(uchar *)(v5 + 138)], 0, 256, 32, *(uint *)v5);
      LoadFromNARC_RCSN(125, 23, *(uint **)(v5 + 24), 2u, 0, 0, 0, *(uint *)v5);
      result = Function_21d14dc(v5, 2u, 8u);
    }
  }
  return result;
}

//----- (021D1B14) --------------------------------------------------------
int __fastcall Function_21d1b14(int a1)
{
  int v1;
  int result;
  uint v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v1 = a1;
  v4 = 28;
  v5 = 29;
  v6 = 29;
  v7 = 30;
  v8 = 31;
  result = a1 + 139;
  v3 = *(uchar *)result;
  if ( v3 < 5 )
  {
    LoadFromNARC_RCSN(125, *(&v4 + v3), *(uint **)(v1 + 24), 7u, 0, 0, 0, *(uint *)v1);
    result = *(uchar *)(v1 + 139);
    if ( result == 1 )
    {
      result = Function_21d14dc(v1, 7u, 3u);
    }
    else if ( result == 2 )
    {
      result = Function_21d14dc(v1, 7u, 2u);
    }
  }
  return result;
}

//----- (021D1B80) --------------------------------------------------------
uint __fastcall Function_21d1b80(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  char *v6;
  int v7;
  ushort *v8;
  short v9;
  int *v10;
  int v11;
  int *v12;
  char v14;
  ushort v15;
  ushort v16;
  int v17;

  v17 = a4;
  v4 = a1;
  Function_2075fb4((int)&v14, 427, 0, 2u, 0, 0, 0);
  v5 = malloc(*(uint *)v4, 200);
  v6 = &byte_21D39D4;
  v7 = 0;
  v8 = (ushort *)v5;
  do
  {
    v9 = (uchar)*v6;
    ++v7;
    ++v6;
    *v8 = v9 + 1;
    ++v8;
  }
  while ( v7 < 100 );
  v10 = (int *)Function_201363c(*(ushort *)&v14, v15, *(uint *)v4);
  v12 = (int *)Function_2013660(*(ushort *)&v14, v16, *(uint *)v4, v11);
  MI_CpuCopy32(v12, *(uint **)(v4 + 184), 32);
  Function_20039f8(*(uint *)(v4 + 184), (int)v12, 1u, 16, 0x6A3Cu);
  Function_2019cb8(*(uint *)(v4 + 24), 2, 0, 0, 0, 0x20u, 0x18u, 8u);
  Function_20198c0(*(uint *)(v4 + 24), 2, v5, 11, 9u, 0xAu, 0xAu);
  Function_21d14dc(v4, 2u, 8u);
  Function_2019690(2u, 32, 0, *(uint *)v4);
  Function_201958c(*(uint **)(v4 + 24), 2u, v10, 3200, 1);
  Function_201972c(2u, (int)v12, 32, 256);
  Function_2019cb8(*(uint *)(v4 + 24), 5, 0, 0, 0, 0x20u, 0x18u, 0xAu);
  Function_20198c0(*(uint *)(v4 + 24), 5, v5, 11, 7u, 0xAu, 0xAu);
  Function_21d14dc(v4, 5u, 0xAu);
  Function_2019690(5u, 32, 0, *(uint *)v4);
  Function_201958c(*(uint **)(v4 + 24), 5u, v10, 3200, 1);
  Function_201972c(5u, (int)v12, 32, 320);
  free((int)v12);
  free((int)v10);
  return free(v5);
}

//----- (021D1CE0) --------------------------------------------------------
int __fastcall Function_21d1ce0(int a1)
{
  int v1;

  v1 = a1;
  LoadFromNARC_RCSN(125, 40, *(uint **)(a1 + 24), 6u, 0, 0, 0, *(uint *)a1);
  Function_21d14dc(v1, 6u, 9u);
  Call_LoadFromNARC_RLCN(125, 41, 4u, 224, 96, *(uint *)v1);
  Function_2019690(6u, 32, 0, *(uint *)v1);
  return LoadFromNARC_RGCN(125, 32, *(uint **)(v1 + 24), 6u, 32, 0, 0, *(uint *)v1);
}

//----- (021D1D44) --------------------------------------------------------
int __fastcall Function_21d1d44(int a1, char a2, int a3)
{
  int v3;
  uchar v4;
  int v5;
  int v6;
  bool v7;
  bool v8;
  int v9;

  v3 = a1;
  v4 = a2;
  v5 = 0;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      if ( Function_20192ec(*(uint *)(a1 + 24), a2) == -48 )
        v5 = 1;
      else
        Function_2019184(*(uint *)(v3 + 24), v4, 2u, 4);
    }
    else if ( a3 == 2 )
    {
      if ( Function_20192ec(*(uint *)(a1 + 24), a2) )
        Function_2019184(*(uint *)(v3 + 24), v4, 1u, 4);
      else
        v5 = 1;
    }
  }
  else
  {
    v6 = Function_20192ec(*(uint *)(a1 + 24), a2);
    if ( v6 )
    {
      v7 = v6 == 0;
      v8 = v6 < 0;
      v9 = *(uint *)(v3 + 24);
      if ( v8 || v7 )
        Function_2019184(v9, v4, 1u, 4);
      else
        Function_2019184(v9, v4, 2u, 4);
    }
    else
    {
      v5 = 1;
    }
  }
  return v5;
}

//----- (021D1DCC) --------------------------------------------------------
uchar *__fastcall Function_21d1dcc(uchar *a1)
{
  uchar *result;

  a1[140] = 0;
  a1[141] = 0;
  a1[142] = 0;
  result = a1 + 143;
  *result = 0;
  return result;
}

//----- (021D1DE8) --------------------------------------------------------
int __fastcall Function_21d1de8(int a1, int a2, int a3, int a4)
{
  int v4;
  char v5;
  int result;
  char v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v16 = a4;
  v4 = a1;
  if ( *(uint *)(a1 + 132) )
  {
    if ( *(uchar *)(a1 + 143) )
    {
      v7 = *(uchar *)(a1 + 143) - 1;
    }
    else
    {
      ++*(uchar *)(a1 + 142);
      *(uchar *)(a1 + 142) &= 3u;
      v7 = 4;
    }
    *(uchar *)(a1 + 143) = v7;
    G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 2, 8, 6, 10);
    v8 = 14;
    v9 = 15;
    v10 = 16;
    v11 = 17;
    result = LoadFromNARC_RGCN(
               125,
               *(&v8 + *(uchar *)(v4 + 142)),
               *(uint **)(v4 + 24),
               2u,
               0,
               0,
               0,
               *(uint *)v4);
  }
  else
  {
    if ( *(uchar *)(a1 + 141) )
    {
      v5 = *(uchar *)(a1 + 141) - 1;
    }
    else
    {
      ++*(uchar *)(a1 + 140);
      *(uchar *)(a1 + 140) &= 3u;
      v5 = 4;
    }
    *(uchar *)(a1 + 141) = v5;
    G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 4, 8, 6, 10);
    v12 = 9;
    v13 = 10;
    v14 = 11;
    v15 = 12;
    result = LoadFromNARC_RGCN(
               125,
               *(&v12 + *(uchar *)(v4 + 140)),
               *(uint **)(v4 + 24),
               1u,
               0,
               0,
               0,
               *(uint *)v4);
  }
  return result;
}

//----- (021D1EFC) --------------------------------------------------------
short *Function_21d1efc()
{
  short *result;

  result = &REG_BLDCNT;
  REG_BLDCNT = 0;
  return result;
}

//----- (021D1F08) --------------------------------------------------------
uint *__fastcall Function_21d1f08(int a1)
{
  uint *result;

  *(uint *)(a1 + 148) = 0;
  result = (uint *)(a1 + 152);
  *result = 0;
  return result;
}

//----- (021D1F18) --------------------------------------------------------
int __fastcall Function_21d1f18(int *a1)
{
  int *v1;
  int v2;
  int v3;
  int *v4;
  char *v5;
  char *v6;
  int v7;
  int *v8;
  int v9;
  int *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  char v16;
  char v17;

  v1 = a1;
  v2 = 0;
  if ( a1[38] )
  {
    v3 = a1[38] - 1;
  }
  else
  {
    ++a1[37];
    v3 = 8;
  }
  a1[38] = v3;
  if ( a1[33] )
  {
    v4 = dword_21D388C;
    v5 = &v16;
  }
  else
  {
    v4 = dword_21D38BC;
    v5 = &v17;
  }
  v6 = v5;
  v7 = *v4;
  v9 = v4[1];
  v8 = v4 + 2;
  *(uint *)v5 = v7;
  *((uint *)v5 + 1) = v9;
  v10 = (int *)(v5 + 8);
  v11 = *v8;
  v12 = v8[1];
  v8 += 2;
  *v10 = v11;
  v10[1] = v12;
  v10 += 2;
  v13 = v8[1];
  *v10 = *v8;
  v10[1] = v13;
  v14 = *(uint *)&v6[4 * v1[37]];
  if ( v14 == 255 )
    return 1;
  LoadFromNARC_RGCN(125, v14, (uint *)v1[6], 1u, 0, 0, 0, *v1);
  return v2;
}

//----- (021D1FA0) --------------------------------------------------------
int __fastcall Function_21d1fa0(uint *a1)
{
  uint *v1;
  int result;
  uchar v3;

  v1 = a1;
  result = a1[45];
  if ( result > 0 )
  {
    v3 = s32_div_f(--v1[45], 3);
    Function_20039f8(v1[46], v1[47], 1u, v3, 0x6A3Cu);
    Function_201972c(2u, v1[47], 32, 256);
    result = Function_201972c(5u, v1[47], 32, 320);
  }
  return result;
}

//----- (021D200C) --------------------------------------------------------
int __fastcall Function_21d200c(uint *a1, uint *a2)
{
  uint *v2;
  uint *v3;
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

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  v5 = 0;
  if ( *a2 <= 6u )
    JUMPOUT(__CS__, *((short *)&off_21D2028 + v4) + 35463210);
  switch ( (uchar)v4 )
  {
    case 0:
      Function_2019184(v3[6], 2u, 0, 0);
      Function_2019184(v3[6], 2u, 3u, -104);
      Function_2019060(2u, 0);
      Function_2019120(5u, 1);
      v3[42] = 0;
      v3[43] = 8;
      v3[44] = 0;
      v3[45] = 48;
      *v2 = 1;
      break;
    case 1:
      Function_20192ec(v3[6], 2);
      v6 = Function_20192f8(v3[6], 5);
      v7 = v3[44] * 9 * v3[43] - 9 * v3[44] * v3[44] / 2;
      if ( v6 >= 88 )
      {
        Function_2019120(5u, 0);
        v3[44] = 0;
        *v2 = 2;
      }
      else
      {
        ++v3[44];
        Function_2019184(v3[6], 2u, 1u, 2);
        Function_2019184(v3[6], 5u, 1u, 2);
        Function_2019184(v3[6], 5u, 3u, v7);
      }
      break;
    case 2:
      if ( v3[44] )
      {
        --v3[44];
      }
      else
      {
        Function_2019120(2u, 1);
        v3[42] = 0;
        v3[43] = 9;
        v3[44] = 0;
        *v2 = 3;
      }
      break;
    case 3:
      Function_20192ec(v3[6], 2);
      Function_20192f8(v3[6], 2);
      v8 = 9 * v3[43] * v3[44] - 104 - 9 * v3[44] * v3[44] / 2;
      if ( v3[42] <= 0 || v8 > 0 )
      {
        ++v3[44];
        v3[42] = v8;
        Function_2019184(v3[6], 2u, 1u, 1);
        v9 = v8 >> 1;
        if ( v9 > 144 )
          v9 = 144;
        Function_2019184(v3[6], 2u, 3u, v9);
      }
      else
      {
        Function_2019184(v3[6], 2u, 3u, 0);
        v3[42] = 0;
        v3[43] = 3;
        v3[44] = 0;
        *v2 = 4;
      }
      break;
    case 4:
      Function_20192ec(v3[6], 2);
      Function_20192f8(v3[6], 2);
      v10 = v3[44];
      v11 = 9 * v3[43] * v10 - s32_div_f(9 * v10 * v10, 3);
      if ( v3[42] <= 0 || v11 > 0 )
      {
        ++v3[44];
        Function_2019184(v3[6], 2u, 2u, 2);
        Function_2019184(v3[6], 2u, 3u, v11);
        v3[42] = v11;
      }
      else
      {
        Function_2019184(v3[6], 2u, 3u, 0);
        v3[42] = 0;
        v3[43] = 3;
        v3[44] = 0;
        *v2 = 5;
      }
      break;
    case 5:
      Function_20192ec(v3[6], 2);
      Function_20192f8(v3[6], 2);
      v12 = v3[44];
      v13 = 9 * v3[43] * v12 - s32_div_f(9 * v12 * v12, 3);
      if ( v3[42] <= 0 || v13 > 0 )
      {
        ++v3[44];
        Function_2019184(v3[6], 2u, 1u, 4);
        Function_2019184(v3[6], 2u, 3u, v13);
        v3[42] = v13;
      }
      else
      {
        Function_2019184(v3[6], 2u, 3u, 0);
        *v2 = 6;
      }
      break;
    case 6:
      Function_2005844(0x1ABu, 0);
      v5 = 1;
      break;
    default:
      break;
  }
  Function_21d1fa0(v3);
  return v5;
}

//----- (021D230C) --------------------------------------------------------
uint Function_21d230c()
{
  return Function_2019060(2u, 1);
}

//----- (021D2318) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (021D3250) --------------------------------------------------------
int __fastcall Function_21d3250(int a1)
{
  int v1;
  int *v2;

  v1 = a1;
  Function_2017fc8(3, 83, 0x40000);
  v2 = (int *)MallocSomeDataAndStorePtrInOverlayData1c(v1, 40, 0x53u);
  Call_FillMemWithValue(v2, 0, 0x28u);
  *v2 = 83;
  v2[9] = 0;
  return 1;
}

//----- (021D3280) --------------------------------------------------------
int __fastcall Function_21d3280(int a1, int *a2)
{
  int *v2;
  int v3;
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v2 = a2;
  v3 = LoadOverlayData1c(a1);
  v4 = *v2;
  v5 = (int *)v3;
  v6 = 0;
  if ( (uint)*v2 <= 5 )
    JUMPOUT(__CS__, *((short *)&off_21D32A2 + v4) + 35467940);
  switch ( (uchar)v4 )
  {
    case 0:
      SetBrightnessWithValue(0, 0);
      SetBrightnessWithValue(1, 0);
      SetMainLoopFunctionCall(0, 0);
      Function_20177bc(0, 0);
      Function_201ff00();
      Function_201ff68();
      REG_DISPCNT &= 0xFFFFE0FF;
      REG_DISPCNT_SUB &= 0xFFFFE0FF;
      Function_2017dd4(4, 8);
      Function_21d342c(v5);
      Function_21d366c(v5);
      SetMainLoopFunctionCall((int)Function_21d3420, (int)v5);
      Function_201ffd0();
      v7 = GetBGPaletteAdress();
      Function_20039f8(v7, v7, 0xFFFCu, 7, 0);
      GX_LoadBGPltt(v7, 0, 0x200u);
      v5[9] = 60;
      *v2 = 1;
      break;
    case 1:
      v8 = *(uint *)(v3 + 36);
      if ( v8 )
      {
        v5[9] = v8 - 1;
      }
      else
      {
        Function_2004224(1030);
        Function_2004550(4u, 0x406u);
        v5[9] = 90;
        *v2 = 2;
      }
      break;
    case 2:
      v9 = *(uint *)(v3 + 36);
      if ( v9 )
      {
        v5[9] = v9 - 1;
      }
      else
      {
        v5[9] = 0;
        Function_200f174(0, 1, 1, 0, 6, 1, *v5);
        *v2 = 3;
      }
      break;
    case 3:
      Function_21d37ac();
      if ( Function_200f2ac() == 1 )
        *v2 = 4;
      break;
    case 4:
      Function_21d37ac();
      if ( Function_21d3698(v5, 0, 40, 48) == 1 )
      {
        Function_200f174(0, 0, 0, 0, 6, 1, *v5);
        *v2 = 5;
      }
      break;
    case 5:
      Function_21d37ac();
      if ( Function_200f2ac() == 1 )
      {
        Function_21d368c(v5);
        Function_21d35f4(v5);
        SetMainLoopFunctionCall(0, 0);
        v6 = 1;
      }
      break;
    default:
      return v6;
  }
  return v6;
}

//----- (021D3404) --------------------------------------------------------
int __fastcall Function_21d3404(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)LoadOverlayData1c(a1);
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(v2);
  return 1;
}

//----- (021D3420) --------------------------------------------------------
int __fastcall Function_21d3420(int a1)
{
  return Function_201c2b8(*(uint *)(a1 + 4));
}

//----- (021D342C) --------------------------------------------------------
int *__fastcall Function_21d342c(int a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  char *v6;
  int v7;
  int v8;
  int v9;
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
  int v42;
  char v43;
  int v44;

  v44 = a4;
  v4 = dword_21D3AC0;
  v5 = a1;
  v6 = &v43;
  v7 = 5;
  do
  {
    v8 = *v4;
    v9 = v4[1];
    v4 += 2;
    *(uint *)v6 = v8;
    *((uint *)v6 + 1) = v9;
    v6 += 8;
    --v7;
  }
  while ( v7 );
  GX_SetBanks((int *)&v43);
  *(uint *)(v5 + 4) = Function_2018340(*(uint *)v5);
  v39 = 1;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  SetGraphicsModes(&v39);
  v32 = 0;
  v33 = 0;
  v34 = 2048;
  v35 = 0;
  v36 = 100663297;
  v37 = 256;
  v38 = 0;
  Function_20183c4(*(uint **)(v5 + 4), 2u, &v32, 0);
  Function_2019690(2u, 32, 0, *(uint *)v5);
  Function_2019ebc(*(uint **)(v5 + 4), 2u);
  v25 = 0;
  v26 = 0;
  v27 = 2048;
  v28 = 0;
  v29 = 83951617;
  v30 = 256;
  v31 = 0;
  Function_20183c4(*(uint **)(v5 + 4), 0, &v25, 0);
  LoadFromNARC_RGCN(136, 1, *(uint **)(v5 + 4), 0, 0, 0, 0, *(uint *)v5);
  LoadFromNARC_RCSN(136, 4, *(uint **)(v5 + 4), 0, 0, 0, 0, *(uint *)v5);
  v18 = 0;
  v19 = 0;
  v20 = 2048;
  v21 = 0;
  v22 = 67239937;
  v23 = 256;
  v24 = 0;
  Function_20183c4(*(uint **)(v5 + 4), 1u, &v18, 0);
  LoadFromNARC_RGCN(136, 2, *(uint **)(v5 + 4), 1u, 0, 0, 0, *(uint *)v5);
  LoadFromNARC_RCSN(136, 5, *(uint **)(v5 + 4), 1u, 0, 0, 0, *(uint *)v5);
  v11 = 0;
  v12 = 0;
  v13 = 2048;
  v14 = 0;
  v15 = 134414593;
  v16 = 256;
  v17 = 0;
  Function_20183c4(*(uint **)(v5 + 4), 3u, &v11, 0);
  LoadFromNARC_RGCN(136, 8, *(uint **)(v5 + 4), 3u, 0, 0, 0, *(uint *)v5);
  LoadFromNARC_RCSN(136, 7, *(uint **)(v5 + 4), 3u, 0, 0, 0, *(uint *)v5);
  Call_LoadFromNARC_RLCN(136, 6, 0, 0, 0, *(uint *)v5);
  LoadFromNARC_RLCN(136, 9, 0, 64, 64, 448, *(uint *)v5);
  LoadFromNARC_PlFont1(0, 32, *(uint *)v5);
  Function_201975c(0, 0);
  Function_201975c(4u, 0);
  return G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 2, 12, 4, 12);
}

//----- (021D35F4) --------------------------------------------------------
uint __fastcall Function_21d35f4(int a1)
{
  int v1;

  v1 = a1;
  Function_2019120(0, 0);
  Function_2019120(1u, 0);
  Function_2019120(2u, 0);
  Function_2019120(3u, 0);
  Function_2019120(4u, 0);
  Function_2019120(5u, 0);
  Function_2019120(6u, 0);
  Function_2019120(7u, 0);
  REG_BLDCNT = 0;
  Function_2019044(*(uint *)(v1 + 4), 3);
  Function_2019044(*(uint *)(v1 + 4), 1);
  Function_2019044(*(uint *)(v1 + 4), 0);
  Function_2019044(*(uint *)(v1 + 4), 2);
  return free(*(uint *)(v1 + 4));
}

//----- (021D366C) --------------------------------------------------------
int __fastcall Function_21d366c(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  a1[2] = LoadFromMsgNARC(1, 26, 607, *a1);
  Function_201d710();
  result = 0;
  v1[3] = 0;
  return result;
}

//----- (021D368C) --------------------------------------------------------
ushort *__fastcall Function_21d368c(int a1)
{
  return Function_200b190(*(ushort **)(a1 + 8));
}

//----- (021D3698) --------------------------------------------------------
int __fastcall Function_21d3698(int a1, uint a2)
{
  int v2;
  uint v3;
  int v4;
  ushort *v5;
  uint v6;
  int v7;
  int v8;
  int v9;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  switch ( (uchar)*(uint *)(a1 + 12) )
  {
    case 0u:
      Function_2019120(2u, 0);
      v5 = (ushort *)Function_2023790(1024, *(uint *)v2);
      Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v2 + 8), v3, v5);
      Function_201a8d4(*(uint **)(v2 + 4), v2 + 16, (uchar *)dword_21D3A38);
      Function_201ae78(v2 + 16, 0, 0, 0, 0x100u, 0xC0u);
      Function_2002eb4(0, (int)v5, 0);
      v6 = (uint)(192 - 16 * Function_2023c5c((int)v5)) >> 1;
      Function_201d78c(v2 + 16, 0);
      Function_20237bc_FreeMsg((int)v5, v7);
      Function_201a954(v2 + 16, v8);
      Function_2019120(2u, 1);
      *(uint *)(v2 + 36) = 240;
      *(uint *)(v2 + 12) = 1;
      break;
    case 1u:
      v9 = *(uint *)(a1 + 36);
      if ( v9 )
        *(uint *)(v2 + 36) = v9 - 1;
      else
        *(uint *)(v2 + 12) = 2;
      break;
    case 2u:
      if ( (dword_21BF6C4 & 1) == 1 || (dword_21BF6C4 & 2) == 2 )
        *(uint *)(a1 + 12) = 3;
      break;
    case 3u:
      Function_201a8fc(a1 + 16);
      Function_2019ebc(*(uint **)(v2 + 4), 2u);
      *(uint *)(v2 + 12) = 0;
      v4 = 1;
      break;
    default:
      return v4;
  }
  return v4;
}

//----- (021D37AC) --------------------------------------------------------
void __fastcall Function_21d37ac(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 32);
  *(uint *)(a1 + 32) = v1 + 4;
  Function_2019184(*(uint *)(a1 + 4), 1u, 3u, (v1 + 4) >> 4);
}

