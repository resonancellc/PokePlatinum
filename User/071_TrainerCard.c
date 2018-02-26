//----- (0223B140) --------------------------------------------------------
int __fastcall Function_71_223b140(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  char *v11;
  uint v12;
  uint v13;
  int v14;
  uint v15;
  uint v16;
  int *v18;
  char v19;
  int v20;

  v20 = a4;
  v4 = a1;
  SetMainLoopFunctionCall(0, 0);
  Function_20177bc(0, 0);
  Function_201ff00();
  Function_201ff68();
  REG_DISPCNT &= 0xFFFFE0FF;
  REG_DISPCNT_SUB &= 0xFFFFE0FF;
  Function_2017dd4(4, 8);
  Function_2017fc8(3, 25, 163840);
  v18 = LoadFromNARC_8(51, 0x19u, v5, v6);
  v7 = (int *)MallocSomeDataAndStorePtrInOverlayData1c(v4, 13088, 0x19u);
  Call_FillMemWithValue(v7, 0, 0x3320u);
  v7[45] = LoadPtrToOverWorldDataIn18(v4);
  *v7 = Function_2018340(0x19u);
  v8 = Function_223b620(v7);
  Function_223b688(v8);
  Function_223b858(*v7);
  Function_223b968(v7, v18);
  Function_201e3d8();
  Function_201e450(4u);
  Function_2004550(0x38u, 0);
  Function_223d324(v7 + 3260);
  Function_2005748(0x695u);
  Function_223cf0c(v7 + 3129, v18);
  v9 = 0;
  v10 = 0;
  v11 = &v19;
  do
  {
    if ( *(uint *)(v7[45] + v10 + 72) & 1 )
      *v11 = 1;
    else
      *v11 = 0;
    ++v9;
    v10 += 4;
    ++v11;
  }
  while ( v9 < 8 );
  Function_223d070(v7 + 3129, &v19, v11);
  Function_223c69c(*v7, v7 + 1);
  v12 = 0;
  do
  {
    if ( ((int)*(uchar *)(v7[45] + 2) >> v12) & 1 )
      Function_223c128(v7, v12);
    v12 = (v12 + 1) & 0xFF;
  }
  while ( v12 < 8 );
  Function_2019448((uint *)*v7, 3u);
  Function_223c6f0(v7 + 1, v7[45]);
  if ( *(uchar *)(v7[45] + 4) & 2 )
    Function_223cecc(v7 + 21, 1, v7[3267]);
  v13 = 0;
  v7[3120] = 0;
  *((uchar *)v7 + 13080) = 0;
  v7[3125] = -1;
  v7[3259] = 0;
  *((uchar *)v7 + 13085) = 0;
  do
  {
    *((uchar *)v7 + v13 + 13072) = 0;
    v14 = *(uint *)(v7[45] + 72 + 4 * v13);
    if ( v14 & 1 )
    {
      v15 = Function_223c40c(*(uint *)(v7[45] + 72 + 4 * v13) >> 1, *(uint *)(v7[45] + 72 + 4 * v13) << 31 >> 31);
      v16 = v15;
      if ( v15 <= 4 )
      {
        if ( v15 == 4 )
          Function_223d298(v7 + 3129, v13, 0);
        else
          Function_223d298(v7 + 3129, v13, (3 - v15) & 0xFF);
      }
      if ( v16 == 3 )
      {
        Function_2021cac(v7[v13 + 3224], 1);
      }
      else if ( v16 == 4 )
      {
        Function_2021cac(v7[v13 + 3232], 1);
      }
    }
    v13 = (v13 + 1) & 0xFF;
  }
  while ( v13 < 8 );
  Function_223c288();
  SetMainLoopFunctionCall((int)Function_223c18c, 0);
  Function_20397e4();
  Function_200544c(1, 42);
  Function_200f174(2u, 3, 3, 0, 6, 1, 25);
  Call_FS_CloseFile(v18);
  return 1;
}

//----- (0223B388) --------------------------------------------------------
int __fastcall Function_71_223b388(int a1, uint *a2)
{
  uint *v2;
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
  int v14;
  int v15;

  v2 = a2;
  v3 = LoadOverlayData1c(a1);
  v6 = v3;
  switch ( (uchar)*v2 )
  {
    case 0u:
      if ( Function_200f2ac() )
        *v2 = 1;
      break;
    case 1u:
      v7 = Function_223bef8();
      v8 = v7;
      if ( v7 == 1 )
      {
        v9 = *(uint *)(v6 + 12500);
        if ( v9 )
        {
          v10 = (v9 - 1) & 0xFF;
          v11 = *(uint *)(*(uint *)(v6 + 180) + 72 + 4 * v10);
          if ( v11 & 1 )
          {
            v12 = Function_223c40c(
                    *(uint *)(*(uint *)(v6 + 180) + 72 + 4 * v10) >> 1,
                    *(uint *)(*(uint *)(v6 + 180) + 72 + 4 * v10) << 31 >> 31);
            Function_223d338(v6 + 13040, v10, v12);
          }
        }
        else
        {
          *(uint *)(v6 + 13036) = 1;
          *(uchar *)(v6 + 13085) = 1;
          Function_2021cac(*(uint *)(v6 + 12960), 1);
          Function_2021cc8(*(uint *)(v6 + 12960), 1);
          Function_2021d6c(*(uint *)(v6 + 12960), 0xAu);
          *(uchar *)(v6 + 13082) = 0;
          *(uchar *)(v6 + 13084) = 0;
          *(uchar *)(v6 + 13083) = 0;
          *(uint *)(v6 + 12504) = 0;
          *v2 = 4;
        }
      }
      else if ( v7 == 2 )
      {
        if ( *(uint *)(v6 + 13036) && *(uint *)(v6 + 12500) )
        {
          *(uint *)(v6 + 13036) = 0;
          *(uchar *)(v6 + 13085) = 2;
        }
        Function_223bfbc(v6);
      }
      else
      {
        if ( *(uint *)(v6 + 13036) && !*(uchar *)(v6 + 13085) )
        {
          *(uint *)(v6 + 13036) = 0;
          *(uchar *)(v6 + 13085) = 2;
        }
        if ( *(uchar *)(*(uint *)(v6 + 180) + 4) & 1 )
          Function_223c44c(v6 + 13056);
        if ( v8 == 3 )
        {
          *(uchar *)(v6 + 13082) = 0;
          *v2 = 3;
        }
        else if ( v8 == 4 )
        {
          Function_2005748(0x5DCu);
          Function_200f174(1u, 4, 4, 0, 6, 1, 25);
          *v2 = 2;
        }
      }
      Function_223c5a4(v6, (uint)*(uchar *)(*(uint *)(v6 + 180) + 4) << 30 >> 31);
      break;
    case 2u:
      if ( !Function_200f2ac() )
        break;
      return 1;
    case 3u:
      if ( Function_223bc20(v3, *v2, v4, v5, v15) )
        *v2 = 1;
      break;
    case 4u:
      if ( !*(uchar *)(v3 + 13085) )
      {
        v14 = Function_223bef8();
        if ( v14 == 1 )
        {
          if ( !*(uint *)(v6 + 12500) )
          {
            *(uint *)(v6 + 13036) = 1;
            *(uchar *)(v6 + 13085) = 1;
            *(uchar *)(v6 + 13084) = 0;
            *(uchar *)(v6 + 13083) = 0;
          }
        }
        else if ( v14 == 2 )
        {
          if ( *(uint *)(v6 + 13036) && *(uint *)(v6 + 12500) )
          {
            *(uint *)(v6 + 13036) = 0;
            *(uchar *)(v6 + 13085) = 2;
          }
        }
        else if ( *(uint *)(v6 + 13036) )
        {
          *(uint *)(v6 + 13036) = 0;
          *(uchar *)(v6 + 13085) = 2;
        }
      }
      if ( !*(uint *)(v6 + 12504) )
        *(uint *)(v6 + 12504) = Function_223bdf8(v6);
      if ( *(uint *)(v6 + 12504) )
      {
        *(uint *)(v6 + 12504) = 0;
        *v2 = 1;
      }
      break;
    default:
      break;
  }
  Function_223c2f4(v6);
  Function_20219f8(*(uint *)(v6 + 12516));
  return 0;
}

//----- (0223B5B8) --------------------------------------------------------
int __fastcall Function_71_223b5b8(int a1)
{
  int v1;
  uint *v2;

  v1 = a1;
  v2 = (uint *)LoadOverlayData1c(a1);
  Function_223c288();
  Function_223b668(v2);
  Function_223d238(v2 + 3129);
  free(v2[3118]);
  free(v2[3262]);
  Function_223c6d4(v2 + 1);
  Function_223bbdc(*v2);
  Function_201e530();
  FreeSomeDataAndStore0InOverlayData1c(v1);
  SetMainLoopFunctionCall(0, 0);
  Function_201807c(25);
  Function_200544c(1, 127);
  return 1;
}

//----- (0223B620) --------------------------------------------------------
ushort *__fastcall Function_223b620(int a1)
{
  int v1;
  ushort **v2;

  v1 = a1;
  *(uint *)(a1 + 13064) = Function_2023790(4, 0x19u);
  *(uint *)(v1 + 13068) = Function_2023790(5, 0x19u);
  v2 = (ushort **)LoadFromMsgNARC(0, 26, 616, 0x19u);
  Function_200b1b8_CallMsgDecrypt(v2, 0xBu, *(ushort **)(v1 + 13068));
  return Function_200b190((ushort *)v2);
}

//----- (0223B668) --------------------------------------------------------
uint __fastcall Function_223b668(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  Function_20237bc_FreeMsg(*(uint *)(a1 + 13064), a2);
  return Function_20237bc_FreeMsg(*(uint *)(v2 + 13068), v3);
}

//----- (0223B688) --------------------------------------------------------
char *Function_223b688()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_223D57C;
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

//----- (0223B6A8) --------------------------------------------------------
uint __fastcall Function_223b6a8(char a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v7;

  v7 = a4;
  if ( a2 )
  {
    switch ( a1 )
    {
      case 0:
        v4 = Function_20071ec(a3, 0, &v7, 25);
        break;
      case 1:
        v4 = Function_20071ec(a3, 1u, &v7, 25);
        break;
      case 2:
        v4 = Function_20071ec(a3, 2u, &v7, 25);
        break;
      case 3:
        v4 = Function_20071ec(a3, 3u, &v7, 25);
        break;
      case 4:
        v4 = Function_20071ec(a3, 4u, &v7, 25);
        break;
      case 5:
        v4 = Function_20071ec(a3, 5u, &v7, 25);
        break;
      default:
        break;
    }
  }
  else
  {
    v4 = Function_20071ec(a3, 6u, &v7, 25);
  }
  DC_FlushRange(*(uint *)(v7 + 12), 512);
  v5 = *(uint *)(v7 + 12);
  GXS_LoadBGPltt(*(uint *)(v7 + 12) + 32, 32, 0x60u);
  GXS_LoadBGPltt(v5 + 480, 480, 0x20u);
  return free(v4);
}

//----- (0223B768) --------------------------------------------------------
uint __fastcall Function_223b768(char a1, int a2, int a3, int a4)
{
  int v4;
  int v6;
  int v7;

  v7 = a4;
  switch ( a1 )
  {
    case 7:
      v4 = Function_20071ec(a2, 0xBu, &v6, 25);
      break;
    case 8:
      v4 = Function_20071ec(a2, 0xCu, &v6, 25);
      break;
    case 10:
      v4 = Function_20071ec(a2, 7u, &v6, 25);
      break;
    case 11:
      v4 = Function_20071ec(a2, 8u, &v6, 25);
      break;
    case 12:
      v4 = Function_20071ec(a2, 0xAu, &v6, 25);
      break;
    default:
      v4 = Function_20071ec(a2, 9u, &v6, 25);
      break;
  }
  DC_FlushRange(*(uint *)(v6 + 12), 32);
  GX_LoadBGPltt(*(uint *)(v6 + 12), 0, 0x20u);
  GXS_LoadBGPltt(*(uint *)(v6 + 12), 0, 0x20u);
  return free(v4);
}

//----- (0223B820) --------------------------------------------------------
uint __fastcall Function_223b820(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v8;
  int v9;

  v9 = a4;
  v4 = a1;
  v5 = Function_20071ec(a2, 0x30u, &v8, 25);
  v4 *= 32;
  v6 = *(uint *)(v8 + 12);
  DC_FlushRange(v6 + v4, 32);
  GXS_LoadBGPltt(v6 + v4, 128, 0x20u);
  return free(v5);
}

//----- (0223B858) --------------------------------------------------------
int __fastcall Function_223b858(uint *a1)
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
  REG_POWERCNT &= 0x7FFFu;
  v38 = 1;
  v39 = 1;
  v40 = 4;
  v41 = 0;
  SetGraphicsModes(&v38);
  v31 = 0;
  v32 = 0;
  v33 = 2048;
  v34 = 0;
  v35 = 18743553;
  v36 = 0;
  v37 = 0;
  Function_20183c4(v1, 7u, &v31, 2);
  Function_2019ebc(v1, 7u);
  v24 = 0;
  v25 = 0;
  v26 = 2048;
  v27 = 0;
  v28 = 52166657;
  v29 = 768;
  v30 = 0;
  Function_20183c4(v1, 5u, &v24, 0);
  Function_2019ebc(v1, 5u);
  v17 = 0;
  v18 = 0;
  v19 = 2048;
  v20 = 0;
  v21 = 1900801;
  v22 = 512;
  v23 = 0;
  Function_20183c4(v1, 6u, &v17, 1);
  Function_2019ebc(v1, 6u);
  v10 = 0;
  v11 = 0;
  v12 = 2048;
  v13 = 0;
  v14 = 1835009;
  v15 = 768;
  v16 = 0;
  Function_20183c4(v1, 2u, &v10, 0);
  Function_2019ebc(v1, 2u);
  v3 = 0;
  v4 = 0;
  v5 = 2048;
  v6 = 0;
  v7 = 18678017;
  v8 = 0;
  v9 = 0;
  Function_20183c4(v1, 3u, &v3, 1);
  return Function_2019ebc(v1, 3u);
}

//----- (0223B968) --------------------------------------------------------
int __fastcall Function_223b968(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uchar *v11;
  int v12;
  int v13;
  uint v14;
  uint v15;
  uint v16;
  int v17;
  int v18;
  int v19;
  int v21;
  int v22;
  int v23;

  v23 = a4;
  v4 = a2;
  v5 = a1;
  v6 = Function_20071ec(a2, 0, &v22, 25);
  DC_FlushRange(*(uint *)(v22 + 12), 512);
  GXS_LoadBGPltt(*(uint *)(v22 + 12), 0, 0x200u);
  free(v6);
  Function_223b6a8(
    *(uchar *)(*(uint *)(v5 + 180) + 3),
    (uint)*(uchar *)(*(uint *)(v5 + 180) + 4) << 28 >> 31,
    v4,
    v7);
  v8 = Function_20071ec(v4, 0xDu, &v21, 25);
  DC_FlushRange(*(uint *)(v21 + 12), 512);
  GX_LoadBGPltt(*(uint *)(v21 + 12), 0, 0x200u);
  free(v8);
  Function_223b768(**(uchar **)(v5 + 180), v4, v9, v10);
  v11 = *(uchar **)(v5 + 180);
  v12 = v11[5];
  if ( v12 == 255 )
  {
    v13 = *v11;
    if ( v13 != 10 && v13 != 11 )
    {
      v15 = 40;
      v14 = 31;
      v16 = -1;
    }
    else
    {
      v14 = 32;
      v15 = 42;
      v16 = 26;
    }
    *(uint *)(v5 + 12472) = Function_200723c(v4, v14, 0, 25, 0);
    if ( !*(uint *)(v5 + 12472) )
      ErrorHandler();
    if ( !Function_20a7164(*(uint *)(v5 + 12472), (uint *)(v5 + 12476)) )
      ErrorHandler();
    if ( v16 != -1 )
      Function_2007130(v4, v16, 4u, 128, 64, 25);
    if ( *(uchar *)(*(uint *)(v5 + 180) + 4) & 4 )
      v17 = Function_20071d0(v4, v15 + 1, 0, (uint *)(v5 + 13052), 25);
    else
      v17 = Function_20071d0(v4, v15, 0, (uint *)(v5 + 13052), 25);
    *(uint *)(v5 + 13048) = v17;
  }
  else
  {
    *(uint *)(v5 + 12472) = Function_200723c(v4, dword_223D604[v12], 0, 25, 0);
    if ( !*(uint *)(v5 + 12472) )
      ErrorHandler();
    if ( !Function_20a7164(*(uint *)(v5 + 12472), (uint *)(v5 + 12476)) )
      ErrorHandler();
    *(uint *)(v5 + 13048) = Function_20071d0(v4, 0x31u, 0, (uint *)(v5 + 13052), 25);
    Function_223b820(*(uchar *)(*(uint *)(v5 + 180) + 5), v4, v18, v19);
  }
  Function_223c390(v5);
  Function_20070e8(v4, 0x1Bu, *(uint **)v5, 6u, 0, 0, 0, 25);
  Function_200710c(v4, 0x23u, *(uint **)v5, 6u, 0, 0, 0, 25);
  Function_20070e8(v4, 0x1Cu, *(uint **)v5, 5u, 0, 0, 0, 25);
  Function_200710c(v4, 0x25u, *(uint **)v5, 5u, 0, 0, 0, 25);
  Function_20070e8(v4, 0x1Du, *(uint **)v5, 2u, 0, 0, 0, 25);
  Function_200710c(v4, 0x26u, *(uint **)v5, 2u, 0, 0, 0, 25);
  Function_20070e8(v4, 0x1Eu, *(uint **)v5, 3u, 0, 0, 0, 25);
  Function_200710c(v4, 0x27u, *(uint **)v5, 3u, 0, 0, 0, 25);
  return Function_223c4dc(*(uint *)(v5 + 180) + 104, v5 + 184);
}

//----- (0223BBDC) --------------------------------------------------------
uint __fastcall Function_223bbdc(int a1)
{
  int v1;

  v1 = a1;
  Function_201ff0c(0x1Fu, 0);
  Function_201ff74(0x13u, 0);
  Function_2019044(v1, 7);
  Function_2019044(v1, 6);
  Function_2019044(v1, 5);
  Function_2019044(v1, 2);
  Function_2019044(v1, 3);
  return free(v1);
}

//----- (0223BC20) --------------------------------------------------------
int __fastcall Function_223bc20(int a1, int a2, int a3, int a4)
{
  uint *v4;
  uint v5;
  int v6;
  int v7;
  int v8;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v14 = a4;
  v4 = (uint *)a1;
  v5 = *(uchar *)(a1 + 13082);
  v6 = 0;
  if ( v5 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_223BC3E + v5) + 35896384);
  switch ( (uchar)v5 )
  {
    case 0:
      v4[3257] = 8;
      v4[3122] = 4096;
      v4[3123] = 4096;
      v4[3122] += 128;
      v4[3123] += 128;
      Function_2005748(0x696u);
      ++*((uchar *)v4 + 13082);
      break;
    case 1:
      v4[3122] -= 2 << (12 - v4[3257]);
      if ( v4[3122] <= 0 )
      {
        v4[3122] = 36;
        ++*((uchar *)v4 + 13082);
      }
      if ( --v4[3257] <= 1 )
        v4[3257] = 1;
      break;
    case 2:
      if ( v4[3120] )
      {
        v4[3120] = 0;
        LoadFromNARC_RCSN(51, 35, (uint *)*v4, 6u, 0, 0, 0, 25);
        Function_223cd44(v4 + 1, 7, 10);
        Function_2019ebc((uint *)*v4, 7u);
        Function_223c390(v4);
        Function_223c6f0(v4 + 1, v4[45]);
      }
      else
      {
        v4[3120] = 1;
        LoadFromNARC_RCSN(51, 36, (uint *)*v4, 6u, 0, 0, 0, 25);
        Function_223cd44(v4 + 1, 0, 6);
        Function_223c3e8(v4);
        Function_2019ebc((uint *)*v4, 7u);
        Function_223ca28(v4 + 1, v4[45]);
        Function_223c530(*v4, 7, v4 + 46);
      }
      ++*((uchar *)v4 + 13082);
      break;
    case 3:
      if ( ++v4[3257] > 8 )
        v4[3257] = 8;
      v4[3122] += 2 << (12 - v4[3257]);
      if ( v4[3122] >= 4096 )
      {
        v4[3122] = 4096;
        v4[3122] = 4096;
        v4[3123] = 4096;
        v6 = 1;
      }
      break;
    default:
      break;
  }
  v7 = FX_Inv(v4[3122]);
  v8 = FX_Inv(v4[3123]);
  v10 = v7;
  v11 = 0;
  v12 = 0;
  v13 = v8;
  Function_20c3e14();
  G2x_SetBGyAffine_((int *)&REG_BG2PA_SUB, &v10, 128, 96, 0, 0);
  G2x_SetBGyAffine_((int *)&REG_BG3PA_SUB, &v10, 128, 96, 0, 0);
  return v6;
}

//----- (0223BDF8) --------------------------------------------------------
int __fastcall Function_223bdf8(int a1, int a2, int a3, int a4)
{
  int v4;
  char v5;
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

  v15 = a4;
  v4 = a1;
  switch ( *(uchar *)(a1 + 13082) )
  {
    case 0:
      *(uchar *)(a1 + 13081) = 0;
      if ( *(uchar *)(a1 + 13080) )
      {
        v5 = 2;
      }
      else
      {
        *(uint *)(a1 + 12496) = 4096;
        v5 = 1;
      }
      *(uchar *)(a1 + 13082) = v5;
      Function_223c594(*(uchar *)(a1 + 13080));
      goto LABEL_11;
    case 1:
      v6 = (uchar)(*(uchar *)(a1 + 13081))++;
      *(uint *)(a1 + 12496) -= dword_223D5CC[v6];
      if ( *(uchar *)(a1 + 13081) == 14 )
      {
        *(uchar *)(a1 + 13080) = 1;
        *(uchar *)(a1 + 13082) = 3;
      }
      goto LABEL_11;
    case 2:
      v7 = (uchar)(*(uchar *)(a1 + 13081))++;
      *(uint *)(a1 + 12496) += dword_223D5CC[13 - v7];
      if ( *(uchar *)(a1 + 13081) == 14 )
      {
        *(uchar *)(a1 + 13080) = 0;
        *(uint *)(a1 + 12496) = 4096;
        *(uchar *)(a1 + 13082) = 3;
      }
      goto LABEL_11;
    case 3:
      result = 1;
      break;
    default:
LABEL_11:
      v9 = FX_Inv(4096);
      v10 = FX_Inv(*(uint *)(v4 + 12496));
      v11 = v9;
      v12 = 0;
      v13 = 0;
      v14 = v10;
      Function_20c3e14();
      G2x_SetBGyAffine_((int *)&REG_BG3PA, &v11, 128, 0, 0, 0);
      result = 0;
      break;
  }
  return result;
}

//----- (0223BEF8) --------------------------------------------------------
int __fastcall Function_223bef8(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = 0;
  v2 = a1;
  *(uint *)(a1 + 12500) = -1;
  v3 = 0;
  if ( word_21BF6DC )
    *(uint *)(a1 + 12484) = 1;
  *(uint *)(a1 + 12500) = Function_223c60c(
                              *(uint *)a1,
                              off_223D4D0[2 * (*(uchar *)(*(uint *)(a1 + 180) + 4) & 1)
                                        + *(uchar *)(a1 + 13080)]);
  if ( *(uint *)(v2 + 12500) == -1 )
  {
    if ( word_21BF6DE )
    {
      *(uint *)(v2 + 12500) = Function_223c654(
                                  *(uint *)v2,
                                  off_223D4D0[2 * (*(uchar *)(*(uint *)(v2 + 180) + 4) & 1)
                                            + *(uchar *)(v2 + 13080)]);
      if ( *(uint *)(v2 + 12484) )
      {
        v1 = 1;
        v3 = 2;
      }
    }
    else
    {
      *(uint *)(v2 + 12484) = 0;
    }
  }
  else
  {
    v1 = 1;
    v3 = 1;
  }
  if ( !v1 )
  {
    if ( dword_21BF6C4 & 1 )
    {
      v3 = 3;
    }
    else if ( dword_21BF6C4 & 2 )
    {
      v3 = 4;
    }
  }
  return v3;
}

//----- (0223BFBC) --------------------------------------------------------
int __fastcall Function_223bfbc(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  char v6;
  int v7;
  int v8;
  char v9;
  int v10;
  int v11;
  char v12;
  int result;

  v1 = a1;
  v2 = 0;
  if ( (ushort)word_21BF6D8 != 0xFFFF && (ushort)word_21BF6DA != 0xFFFF )
  {
    v3 = *(uint *)(a1 + 12508);
    if ( v3 != 0xFFFF && *(uint *)(a1 + 12512) != 0xFFFF )
    {
      v4 = *(uint *)(a1 + 12500);
      if ( v4 != -1 && v4 && *(uint *)(*(uint *)(a1 + 180) + 4 * (v4 - 1) + 72) & 1 )
      {
        if ( v3 <= (ushort)word_21BF6D8 )
        {
          v5 = (ushort)word_21BF6D8 - v3;
          v6 = 1;
        }
        else
        {
          v5 = v3 - (ushort)word_21BF6D8;
          v6 = -1;
        }
        *(uchar *)(a1 + 13058) = v6;
        if ( v5 < 3 || v5 > 40 )
        {
          if ( v5 <= 40 )
          {
            v10 = *(uint *)(a1 + 12512);
            if ( v10 <= (ushort)word_21BF6DA )
            {
              v11 = (ushort)word_21BF6DA - v10;
              v12 = 1;
            }
            else
            {
              v11 = v10 - (ushort)word_21BF6DA;
              v12 = -1;
            }
            *(uchar *)(v1 + 13059) = v12;
            if ( v11 < 3 || v11 > 40 )
            {
              Function_223c444(v1 + 13056);
            }
            else
            {
              v2 = 1;
              Function_223c45c(v1 + 13056);
            }
          }
        }
        else
        {
          v7 = *(uint *)(a1 + 12512);
          if ( v7 <= (ushort)word_21BF6DA )
          {
            v8 = (ushort)word_21BF6DA - v7;
            v9 = 1;
          }
          else
          {
            v8 = v7 - (ushort)word_21BF6DA;
            v9 = -1;
          }
          *(uchar *)(v1 + 13059) = v9;
          if ( v8 > 40 )
          {
            Function_223c444(v1 + 13056);
          }
          else
          {
            v2 = 1;
            Function_223c45c(v1 + 13056);
          }
        }
        if ( v2 )
          Function_223c1ac(v1, (*(uint *)(v1 + 12500) - 1) & 0xFF);
      }
    }
  }
  *(uint *)(v1 + 12508) = (ushort)word_21BF6D8;
  result = 12512;
  *(uint *)(v1 + 12512) = (ushort)word_21BF6DA;
  return result;
}

//----- (0223C0D8) --------------------------------------------------------
int __fastcall Function_223c0d8(int *a1, int a2)
{
  int v2;
  int v3;
  uint v4;
  int v5;
  int v6;
  uint v7;
  uint **v9;

  v9 = (uint **)a1;
  v2 = a2;
  v3 = Function_2019fe4(*a1, 2);
  v4 = 0;
  v5 = (4 * v2 + 128) & 0xFFFF;
  do
  {
    v6 = v5 + 32 * v4;
    v7 = 0;
    do
    {
      *(ushort *)(v3 + ((v4 + 19) << 6) + 2 * v7 + 28) = v7 + v6;
      v7 = (v7 + 1) & 0xFF;
    }
    while ( v7 < 4 );
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 < 4 );
  return Function_2019448(*v9, 2u);
}

//----- (0223C128) --------------------------------------------------------
int __fastcall Function_223c128(int *a1, uint a2)
{
  int v2;
  int v3;
  int v4;
  uint v5;
  int v6;
  int result;
  uint v8;

  v2 = (7 * (a2 << 22 >> 24) + 4) & 0xFF;
  v3 = (7 * (((a2 >> 31) + __ROR4__((a2 << 30) - (a2 >> 31), 30)) & 0xFF) + 3) & 0xFF;
  v4 = Function_2019fe4(*a1, 3);
  v5 = 0;
  v6 = v4 + v3;
  result = 0;
  do
  {
    v8 = 0;
    do
    {
      *(uchar *)(v6 + 32 * (v5 + v2) + v8) = v8 + 16 * v5 - 70;
      v8 = (v8 + 1) & 0xFF;
    }
    while ( v8 < 5 );
    v5 = (v5 + 1) & 0xFF;
  }
  while ( v5 < 5 );
  return result;
}

//----- (0223C18C) --------------------------------------------------------
int Function_223c18c()
{
  int result;

  Function_201dcac();
  Function_200a858();
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (0223C1AC) --------------------------------------------------------
uint __fastcall Function_223c1ac(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint result;
  int v6;
  uint v7;
  uint v8;
  int v9;
  int v10;
  uint v11;
  int v12;

  v2 = a1;
  v3 = a2;
  v4 = 4 * a2;
  result = *(uint *)(*(uint *)(a1 + 180) + 4 * a2 + 72) >> 1;
  v12 = result + 1;
  if ( (int)(result + 1) < 200 )
  {
    v6 = Function_223c40c(result, result + 1);
    v7 = v6;
    v8 = *((uchar *)dword_223D4B0 + v6);
    result = (uchar)++*(uchar *)(v2 + 13072 + v3);
    if ( result >= v8 )
    {
      *(uchar *)(v2 + 13072 + v3) = 0;
      v9 = *(uint *)(v2 + 180) + 72;
      v10 = *(uint *)(v9 + v4);
      *(uint *)(v9 + v4) = 2 * ((*(uint *)(v9 + v4) >> 1) + 1) | *(uint *)(v9 + v4) & 1;
      result = Function_223c40c(v12, v10 & 1);
      v11 = result;
      if ( v7 > result )
        result = ErrorHandler();
      if ( v7 < v11 )
      {
        if ( v11 <= 4 )
        {
          if ( v11 == 4 )
            result = Function_223d298(v2 + 12516, v3, 0);
          else
            result = Function_223d298(v2 + 12516, v3, (3 - v11) & 0xFF);
        }
        if ( v11 == 3 )
        {
          result = Function_2021cac(*(uint *)(v2 + 4 * (v3 + 8) + 12864), 1);
        }
        else if ( v11 == 4 )
        {
          Function_2021cac(*(uint *)(v2 + 4 * (v3 + 8) + 12864), 0);
          result = Function_2021cac(*(uint *)(v2 + 4 * (v3 + 16) + 12864), 1);
        }
      }
    }
  }
  return result;
}

//----- (0223C288) --------------------------------------------------------
int *Function_223c288()
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = FX_Inv(4096);
  v2 = 0;
  v3 = 0;
  v4 = FX_Inv(4096);
  Function_20c3e14();
  G2x_SetBGyAffine_((int *)&REG_BG2PA_SUB, &v1, 128, 96, 0, 0);
  G2x_SetBGyAffine_((int *)&REG_BG3PA_SUB, &v1, 128, 96, 0, 0);
  Function_20c3e14();
  return G2x_SetBGyAffine_((int *)&REG_BG3PA, &v1, 128, 0, 0, 0);
}

//----- (0223C2F4) --------------------------------------------------------
int __fastcall Function_223c2f4(int result)
{
  int v1;
  int v2;

  v1 = result;
  v2 = *(uchar *)(result + 13085);
  if ( v2 == 1 )
  {
    result = Function_223c334();
    if ( result )
    {
      result = 13085;
      *(uchar *)(v1 + 13085) = 0;
    }
  }
  else if ( v2 == 2 )
  {
    result = Function_223c334();
    if ( result )
    {
      result = 13085;
      *(uchar *)(v1 + 13085) = 0;
    }
  }
  return result;
}

//----- (0223C334) --------------------------------------------------------
int __fastcall Function_223c334(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;

  v2 = a1;
  v3 = 2 * *(uchar *)(a1 + 13084);
  if ( *(uchar *)(a2 + v3) )
  {
    if ( *(uchar *)(v2 + 13083) >= (uint)*(uchar *)(a2 + v3) )
    {
      *(uchar *)(v2 + 13083) = 0;
      ++*(uchar *)(v2 + 13084);
    }
    v5 = *(uchar *)(a2 + 2 * *(uchar *)(v2 + 13084) + 1);
    if ( !*(uchar *)(v2 + 13083) )
      Function_223c0d8((int *)v2, v5);
    ++*(uchar *)(v2 + 13083);
    result = 0;
  }
  else
  {
    *(uchar *)(v2 + 13083) = 0;
    *(uchar *)(v2 + 13084) = 0;
    result = 1;
  }
  return result;
}

//----- (0223C390) --------------------------------------------------------
int __fastcall Function_223c390(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(*(uint *)(a1 + 13052) + 8);
  Function_201958c(
    *(uint **)v1,
    7u,
    *(int **)(*(uint *)(v1 + 12476) + 20),
    *(uint *)(*(uint *)(v1 + 12476) + 16),
    0);
  if ( Function_2019fe4(*(uint *)v1, 7) )
    Function_2019574(*(uint *)v1, 7, (int *)(*(uint *)(v1 + 13052) + 12), v2);
  return Function_2019460(*(uint **)v1, 7u, (int *)(*(uint *)(v1 + 13052) + 12), v2, 0);
}

//----- (0223C3E8) --------------------------------------------------------
char *__fastcall Function_223c3e8(int *a1)
{
  return Function_2019cb8(*a1, 7, 0, 0x14u, 6u, 6u, 9u, 0x10u);
}

//----- (0223C40C) --------------------------------------------------------
int __fastcall Function_223c40c(int a1)
{
  if ( a1 >= 0 && a1 < 100 )
    return 0;
  if ( a1 < 140 )
    return 1;
  if ( a1 < 170 )
    return 2;
  if ( a1 < 190 )
    return 3;
  if ( a1 < 200 )
    return 4;
  ErrorHandler();
  return 0;
}

//----- (0223C444) --------------------------------------------------------
int __fastcall Function_223c444(int result)
{
  *(uchar *)(result + 2) = 0;
  *(uchar *)(result + 3) = 0;
  return result;
}

//----- (0223C44C) --------------------------------------------------------
uchar *__fastcall Function_223c44c(uchar *result)
{
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  return result;
}

//----- (0223C45C) --------------------------------------------------------
int __fastcall Function_223c45c(char *a1)
{
  char *v1;
  int result;
  int v3;
  int v4;

  v1 = a1;
  v3 = 1682;
  v4 = 1683;
  if ( !*a1 && !a1[1] )
    Function_2005748(0x692u);
  if ( v1[2] * *v1 < 0 || v1[3] * v1[1] < 0 )
  {
    v1[4] = ((uchar)v1[4] + 1 < 0)
          + __ROR4__((((uchar)v1[4] + 1) << 31) - (((uint)(uchar)v1[4] + 1) >> 31), 31);
    Function_2005748(*(&v3 + (uchar)v1[4]) & 0xFFFF);
  }
  *v1 = v1[2];
  v1[1] = v1[3];
  result = 0;
  v1[2] = 0;
  v1[3] = 0;
  return result;
}

//----- (0223C4DC) --------------------------------------------------------
int __fastcall Function_223c4dc(int result, int a2)
{
  int v2;

  v2 = 0;
  do
  {
    *(uchar *)(a2 + v2) = ((int)*(uchar *)(8 * (v2 / 64)
                                                          + result
                                                          + ((((uint)(v2 / 8) >> 31)
                                                            + __ROR4__(
                                                                (v2 / 8 << 29) - ((uint)(v2 / 8) >> 31),
                                                                29)) & 0xFF)) >> ((v2 < 0)
                                                                                + __ROR4__(
                                                                                    (v2 << 29)
                                                                                  - ((uint)v2 >> 31),
                                                                                    29))) & 1;
    ++v2;
  }
  while ( v2 < 12288 );
  return result;
}

//----- (0223C530) --------------------------------------------------------
int __fastcall Function_223c530(uint *a1, uchar a2, int *a3)
{
  uchar v3;
  int v4;
  int v5;
  uint v6;
  uint v7;
  int v8;
  uint *v10;

  v3 = a2;
  v10 = a1;
  Function_201958c(a1, a2, a3, 12288, 1);
  v4 = 0;
  v5 = Function_2019fe4((int)v10, v3);
  v6 = 0;
  do
  {
    v7 = 0;
    do
    {
      v4 = (v4 + 1) & 0xFFFF;
      v8 = v5 + ((v6 + 14) << 6) + 2 * v7;
      v7 = (v7 + 1) & 0xFF;
      *(ushort *)(v8 + 8) = v4;
    }
    while ( v7 < 0x18 );
    v6 = (v6 + 1) & 0xFF;
  }
  while ( v6 < 8 );
  return Function_2019448(v10, v3);
}

//----- (0223C594) --------------------------------------------------------
int Function_223c594()
{
  return Function_2005748(0x699u);
}

//----- (0223C5A4) --------------------------------------------------------
int __fastcall Function_223c5a4(int result, int a2)
{
  int v2;
  char v3;

  v2 = result;
  if ( a2 )
  {
    if ( !*(uint *)(result + 12480) )
    {
      if ( *(uchar *)(result + 13086) == 15 )
      {
        Function_223cde8(result + 4, *(uint *)(result + 180), *(uint *)(result + 13064));
        Function_223cecc(v2 + 84, 1, *(uint *)(v2 + 13068));
      }
      else if ( !*(uchar *)(result + 13086) )
      {
        Function_223cecc(result + 84, 0, *(uint *)(result + 13068));
      }
    }
    s32_div_f(*(uchar *)(v2 + 13086) + 1, 30);
    result = 13086;
    *(uchar *)(v2 + 13086) = v3;
  }
  return result;
}

//----- (0223C60C) --------------------------------------------------------
int __fastcall Function_223c60c(uint *a1, uchar *a2, int a3, int a4)
{
  uint *v4;
  int result;
  int v6;
  short v7;
  int v8;

  v8 = a4;
  v4 = a1;
  result = Function_2022664(a2);
  v6 = result;
  if ( result == -1 )
    goto LABEL_8;
  if ( !result )
    return result;
  v7 = 64;
  if ( Function_201c784(v4, 2u, (ushort)word_21BF6D8, (ushort)word_21BF6DA, (ushort *)&v7) )
LABEL_8:
    result = v6;
  else
    result = -1;
  return result;
}

//----- (0223C654) --------------------------------------------------------
int __fastcall Function_223c654(uint *a1, uchar *a2, int a3, int a4)
{
  uint *v4;
  int result;
  int v6;
  short v7;
  int v8;

  v8 = a4;
  v4 = a1;
  result = Function_2022644(a2);
  v6 = result;
  if ( result == -1 )
    goto LABEL_8;
  if ( !result )
    return result;
  v7 = 64;
  if ( Function_201c784(v4, 2u, (ushort)word_21BF6D8, (ushort)word_21BF6DA, (ushort *)&v7) )
LABEL_8:
    result = v6;
  else
    result = -1;
  return result;
}

//----- (0223C69C) --------------------------------------------------------
uint __fastcall Function_223c69c(uint *a1, int a2)
{
  uint *v2;
  int v3;
  uint v4;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    Function_201a8d4(v2, v3 + 16 * v4, (uchar *)&dword_223D670[2 * v4]);
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 < 0xB );
  return Function_20196c0(v2, 7, 0, 1, 0);
}

//----- (0223C6D4) --------------------------------------------------------
int __fastcall Function_223c6d4(int a1)
{
  int v1;
  uint v2;
  int result;

  v1 = a1;
  v2 = 0;
  do
  {
    Function_201a8fc(v1 + 16 * v2);
    result = (v2 + 1) << 16;
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 < 0xB );
  return result;
}

//----- (0223C6F0) --------------------------------------------------------
ushort *__fastcall Function_223c6f0(int a1, int a2)
{
  int v2;
  int v3;
  ushort *v4;
  uint v5;
  uint *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  ushort *v15;
  ushort **v16;

  v2 = a2;
  v3 = a1;
  Function_201ae78(a1, 0, 0, 0, 0x88u, 0x10u);
  Function_201ae78(v3 + 16, 0, 0, 0, 0x88u, 0x10u);
  Function_201ae78(v3 + 32, 0, 0, 0, 0x88u, 0x10u);
  Function_201ae78(v3 + 48, 0, 0, 0, 0x88u, 0x10u);
  Function_201ae78(v3 + 64, 0, 0, 0, 0x88u, 0x10u);
  Function_201ae78(v3 + 80, 0, 0, 0, 0xE0u, 0x10u);
  Function_201ae78(v3 + 96, 0, 0, 0, 0xE0u, 0x10u);
  v16 = (ushort **)LoadFromMsgNARC(0, 26, 616, 0x19u);
  v4 = (ushort *)Function_2023790(32, 0x19u);
  v5 = 0;
  do
  {
    if ( v5 != 3 || *(uchar *)(v2 + 4) & 8 )
    {
      Function_200b1b8_CallMsgDecrypt(v16, dword_223D644[v5], v4);
      Function_201d78c(v3 + 16 * v5, 0);
    }
    v5 = (v5 + 1) & 0xFF;
  }
  while ( v5 < 7 );
  v15 = (ushort *)Function_2023790(32, 0x19u);
  v6 = Function_200b368(6u, 32, 0x19u);
  v7 = *(ushort *)(v2 + 40);
  Function_223cd64(v3, 136);
  Function_2023d28(v4, (ushort *)(v2 + 8));
  Function_223cdb0(v3 + 16, 136);
  Function_200b60c((int)v6, 5u, *(uint *)(v2 + 28), 6, 0, 1);
  Function_200b1b8_CallMsgDecrypt(v16, 0xEu, v15);
  Function_200c388(v6, (int)v4, (int)v15);
  Function_2002d7c(0, (int)v4, 0);
  Function_201d78c(v3 + 32, 0);
  if ( *(uchar *)(v2 + 4) & 8 )
  {
    Function_200b60c((int)v6, 5u, *(uint *)(v2 + 32), 3, 0, 1);
    Function_200b1b8_CallMsgDecrypt(v16, 0x15u, v15);
    Function_200c388(v6, (int)v4, (int)v15);
    Function_2002d7c(0, (int)v4, 0);
    Function_201d78c(v3 + 48, 0);
  }
  v8 = *(uint *)(v2 + 36);
  Function_223cd64(v3 + 64, 136);
  if ( *(uchar *)(v2 + 4) & 2 )
  {
    v9 = Function_202cc58(*(ushort **)(v2 + 24));
    Function_200b60c((int)v6, 0, v9, 3, 1, 1);
    v10 = Function_202cc5c(*(uint *)(v2 + 24));
    Function_200b60c((int)v6, 1u, v10, 2, 2, 1);
    Function_200b1b8_CallMsgDecrypt(v16, 0x10u, v15);
  }
  else
  {
    Function_200b60c((int)v6, 0, *(ushort *)(v2 + 42), 3, 1, 1);
    Function_200b60c((int)v6, 1u, *(uchar *)(v2 + 46), 2, 2, 1);
    Function_200b1b8_CallMsgDecrypt(v16, 0xFu, v15);
  }
  Function_200c388(v6, (int)v4, (int)v15);
  Function_2002d7c(0, (int)v4, 0);
  Function_201d78c(v3 + 80, 0);
  Function_200b60c((int)v6, 2u, *(uchar *)(v2 + 47), 2, 2, 1);
  Function_200c2e0((int)v6, 3u, *(uchar *)(v2 + 48));
  Function_200b60c((int)v6, 4u, *(uchar *)(v2 + 49), 2, 2, 1);
  Function_200b1b8_CallMsgDecrypt(v16, 0x11u, v15);
  Function_200c388(v6, (int)v4, (int)v15);
  Function_2002d7c(0, (int)v4, 0);
  Function_201d78c(v3 + 96, 0);
  Function_20237bc_FreeMsg((int)v15, v11);
  Function_200b3f0(v6, v12);
  Function_20237bc_FreeMsg((int)v4, v13);
  return Function_200b190((ushort *)v16);
}

//----- (0223CA28) --------------------------------------------------------
ushort *__fastcall Function_223ca28(int a1, int a2)
{
  int v2;
  ushort **v3;
  ushort *v4;
  uint v5;
  uint *v6;
  uint *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v14;
  ushort *v15;

  v2 = a1;
  v14 = a2;
  Function_201ae78(a1 + 112, 0, 0, 0, 0xE0u, 0x20u);
  Function_201ae78(v2 + 128, 0, 0, 0, 0xE0u, 0x10u);
  Function_201ae78(v2 + 144, 0, 0, 0, 0xE0u, 0x10u);
  Function_201ae78(v2 + 160, 0, 0, 0, 0xE0u, 0x10u);
  v3 = (ushort **)LoadFromMsgNARC(0, 26, 616, 0x19u);
  v4 = (ushort *)Function_2023790(32, 0x19u);
  v5 = 7;
  do
  {
    Function_200b1b8_CallMsgDecrypt(v3, dword_223D644[v5], v4);
    Function_201d78c(v2 + 16 * v5, 0);
    v5 = (v5 + 1) & 0xFF;
  }
  while ( v5 < 0xB );
  v15 = (ushort *)Function_2023790(32, 0x19u);
  v6 = Function_200b368(6u, 32, 0x19u);
  v7 = v6;
  if ( *(uchar *)(v14 + 51) )
  {
    Function_200b60c((int)v6, 2u, *(uchar *)(v14 + 50), 2, 2, 1);
    Function_200c2e0((int)v7, 3u, *(uchar *)(v14 + 51));
    Function_200b60c((int)v7, 4u, *(uchar *)(v14 + 52), 2, 2, 1);
    Function_200b60c((int)v7, 0, *(ushort *)(v14 + 44), 3, 1, 1);
    Function_200b60c((int)v7, 1u, *(uchar *)(v14 + 53), 2, 2, 1);
    Function_200b1b8_CallMsgDecrypt(v3, 0x11u, v15);
    Function_200c388(v7, (int)v4, (int)v15);
  }
  else
  {
    Function_200b1b8_CallMsgDecrypt(v3, 0xCu, v15);
    Function_200b48c((int *)v7, 0, (int)v15);
    Function_200b48c((int *)v7, 1u, (int)v15);
    Function_200b1b8_CallMsgDecrypt(v3, 0x14u, v4);
  }
  Function_2002d7c(0, (int)v4, 0);
  Function_201d78c(v2 + 112, 0);
  Function_200b1b8_CallMsgDecrypt(v3, 0xFu, v15);
  Function_200c388(v7, (int)v4, (int)v15);
  Function_2002d7c(0, (int)v4, 0);
  Function_201d78c(v2 + 112, 0);
  Function_200b60c((int)v7, 5u, *(uint *)(v14 + 56), 6, 0, 1);
  Function_200b1b8_CallMsgDecrypt(v3, 0x16u, v15);
  Function_200c388(v7, (int)v4, (int)v15);
  Function_2002d7c(0, (int)v4, 0);
  Function_201d78c(v2 + 128, 0);
  Function_200b1b8_CallMsgDecrypt(v3, 0x12u, v4);
  Function_201d78c(v2 + 144, 0);
  v8 = *(uint *)(v14 + 64);
  Function_223cd64(v2 + 144, 224);
  Function_200b1b8_CallMsgDecrypt(v3, 0x13u, v4);
  Function_201d78c(v2 + 144, 0);
  v9 = *(uint *)(v14 + 60);
  Function_223cd64(v2 + 144, 224);
  Function_200b60c((int)v7, 5u, *(uint *)(v14 + 68), 6, 0, 1);
  Function_200b1b8_CallMsgDecrypt(v3, 0x16u, v15);
  Function_200c388(v7, (int)v4, (int)v15);
  Function_2002d7c(0, (int)v4, 0);
  Function_201d78c(v2 + 160, 0);
  Function_20237bc_FreeMsg((int)v15, v10);
  Function_200b3f0(v7, v11);
  Function_20237bc_FreeMsg((int)v4, v12);
  return Function_200b190((ushort *)v3);
}

//----- (0223CD44) --------------------------------------------------------
int __fastcall Function_223cd44(int result, uint a2, uint a3)
{
  uint v3;
  uint v4;
  int i;

  v3 = a2;
  v4 = a3;
  for ( i = result; v3 <= v4; v3 = (v3 + 1) & 0xFF )
  {
    Function_201acf4(i + 16 * v3);
    result = (v3 + 1) << 24;
  }
  return result;
}

//----- (0223CD64) --------------------------------------------------------
int __fastcall Function_223cd64(int a1, int a2, int a3, int a4, ushort *a5, int a6, uchar a7, int a8)
{
  int v8;

  v8 = a1;
  Function_20238a0(a5, a6, a7, a8, 1);
  Function_2002d7c(0, (int)a5, 0);
  return Function_201d78c(v8, 0);
}

//----- (0223CDB0) --------------------------------------------------------
int __fastcall Function_223cdb0(int a1, int a2, int a3, int a4, int a5)
{
  int v5;

  v5 = a1;
  Function_2002d7c(0, a5, 0);
  return Function_201d78c(v5, 0);
}

//----- (0223CDE8) --------------------------------------------------------
uint __fastcall Function_223cde8(int a1, int a2)
{
  int v2;
  int v3;
  ushort **v4;
  int v5;
  ushort *v6;
  uint *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v2 = a2;
  v3 = a1;
  if ( !*(uint *)(a2 + 24) )
    ErrorHandler();
  Function_202cc58(*(ushort **)(v2 + 24));
  Function_201ae78(v3 + 80, 0, 184, 0, 0x28u, 0x10u);
  v4 = (ushort **)LoadFromMsgNARC(0, 26, 616, 0x19u);
  v5 = Function_2023790(32, 0x19u);
  v6 = (ushort *)Function_2023790(32, 0x19u);
  v7 = Function_200b368(2u, 32, 0x19u);
  v8 = Function_202cc58(*(ushort **)(v2 + 24));
  Function_200b60c((int)v7, 0, v8, 3, 1, 1);
  v9 = Function_202cc5c(*(uint *)(v2 + 24));
  Function_200b60c((int)v7, 1u, v9, 2, 2, 1);
  Function_200b1b8_CallMsgDecrypt(v4, 0x10u, v6);
  Function_200c388(v7, v5, (int)v6);
  Function_2002d7c(0, v5, 0);
  Function_201d78c(v3 + 80, 0);
  Function_200b190((ushort *)v4);
  Function_20237bc_FreeMsg(v5, v10);
  Function_20237bc_FreeMsg((int)v6, v11);
  return Function_200b3f0(v7, v12);
}

//----- (0223CECC) --------------------------------------------------------
int __fastcall Function_223cecc(int a1, int a2)
{
  int v2;
  int v4;

  v2 = a1;
  if ( a2 )
    return Function_201d78c(a1, 0);
  Function_201ae78(a1, 0, 205, 0, 5u, 0x10u);
  return Function_201a954(v2, v4);
}

//----- (0223CF0C) --------------------------------------------------------
uint __fastcall Function_223cf0c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  char *v6;
  int *v7;
  int v8;
  uint v9;
  int v10;
  int v11;
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

  v22 = a4;
  v4 = a1;
  v13 = a2;
  Function_223d2f4();
  Function_20a7944();
  Function_200a784(0, 128, 0, 32, 0, 0x80u, 0, 0x20u, 0x19u);
  v6 = &byte_223D6C8;
  *(uint *)v4 = Function_20095c4(25, v4 + 4, 25, v5);
  v7 = 0;
  v8 = v4;
  do
  {
    *(uint *)(v8 + 300) = Function_2009714((uchar)*v6, v7, 0x19u);
    v7 = (int *)((char *)v7 + 1);
    ++v6;
    v8 += 4;
  }
  while ( (int)v7 < 4 );
  *(uint *)(v4 + 316) = Function_2009a4c(*(uint *)(v4 + 300), v13, 0x21u, 0, 1, 1, 0x19u);
  *(uint *)(v4 + 320) = Function_2009b04(*(uint *)(v4 + 304), v13, 0xEu, 0, 1, 1, 9, 0x19u);
  *(uint *)(v4 + 324) = Function_2009bc4(*(uint *)(v4 + 308), v13, 0x2Cu, 0, 1, 2u, 0x19u);
  *(uint *)(v4 + 328) = Function_2009bc4(*(uint *)(v4 + 312), v13, 0x2Eu, 0, 1, 3u, 0x19u);
  Function_200a328(*(int **)(v4 + 316));
  Function_200a5c8(*(int **)(v4 + 320));
  v14 = 16;
  v15 = 17;
  v16 = 18;
  v17 = 19;
  v18 = 20;
  v19 = 21;
  v20 = 22;
  v21 = 23;
  v9 = 0;
  do
  {
    v10 = v4 + 4 * v9;
    *(uint *)(v10 + 448) = Function_2006cb8_LoadFileInMemory(v13, *(&v14 + v9), 0x19u);
    v11 = *(uint *)(v10 + 448);
    if ( v11 )
    {
      if ( !Function_20a71b0(v11, (uint *)(v4 + 480 + 4 * v9)) )
      {
        free(*(uint *)(v10 + 480));
        ErrorHandler();
      }
    }
    else
    {
      ErrorHandler();
    }
    v9 = (v9 + 1) & 0xFF;
  }
  while ( v9 < 8 );
  return Function_201ff0c(0x10u, 1);
}

//----- (0223D070) --------------------------------------------------------
uint __fastcall Function_223d070(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int *v6;
  int v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int *v12;
  int v13;
  int v14;
  int v15;
  int v17;
  int v18;
  char *v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  short v26;
  int v27;
  int v28;
  int v29;
  char v30;
  char v31;
  int v32;

  v32 = a4;
  v4 = a2;
  v17 = a1;
  Function_20093b4(
    (int)&v30,
    1,
    1,
    1,
    1,
    -1,
    -1,
    0,
    1,
    *(uint *)(a1 + 300),
    *(uint *)(v17 + 304),
    *(uint *)(v17 + 308),
    *(uint *)(v17 + 312),
    0,
    0);
  v5 = 0;
  v6 = &dword_223D73C;
  v18 = *(uint *)v17;
  v19 = &v30;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 4096;
  v24 = 4096;
  v25 = 4096;
  v26 = 0;
  v27 = 2;
  v28 = 1;
  v7 = v17;
  v29 = 25;
  do
  {
    v20 = *v6 << 12;
    v21 = v6[1] << 12;
    *(uint *)(v7 + 348) = Function_2021aa0((uint **)&v18);
    Function_2021cc8(*(uint *)(v7 + 348), 0);
    Function_2021d6c(*(uint *)(v7 + 348), v5);
    if ( !*(uchar *)(v4 + v5) )
      Function_2021cac(*(uint *)(v7 + 348), 0);
    ++v5;
    v6 += 2;
    v7 += 4;
  }
  while ( v5 < 8 );
  v8 = &dword_223D6FC;
  v9 = v17;
  v10 = 0;
  do
  {
    v11 = *v8;
    v27 = 1;
    v20 = v11 << 12;
    v21 = v8[1] << 12;
    *(uint *)(v9 + 380) = Function_2021aa0((uint **)&v18);
    Function_2021cc8(*(uint *)(v9 + 380), 1);
    Function_2021d6c(*(uint *)(v9 + 380), 8u);
    Function_2021cac(*(uint *)(v9 + 380), 0);
    ++v10;
    v8 += 2;
    v9 += 4;
  }
  while ( v10 < 8 );
  v12 = &dword_223D6FC;
  v13 = 0;
  v14 = v17 + 64;
  do
  {
    v15 = *v12;
    v27 = 1;
    v20 = v15 << 12;
    v21 = v12[1] << 12;
    *(uint *)(v14 + 348) = Function_2021aa0((uint **)&v18);
    Function_2021cc8(*(uint *)(v14 + 348), 1);
    Function_2021d6c(*(uint *)(v14 + 348), 9u);
    Function_2021cac(*(uint *)(v14 + 348), 0);
    ++v13;
    v12 += 2;
    v14 += 4;
  }
  while ( v13 < 8 );
  v31 = 0;
  v20 = 393216;
  v21 = 557056;
  v27 = 0;
  *(uint *)(v17 + 444) = Function_2021aa0((uint **)&v18);
  Function_2021cc8(*(uint *)(v17 + 444), 0);
  Function_2021d6c(*(uint *)(v17 + 444), 0xAu);
  return Function_2021cac(*(uint *)(v17 + 444), 0);
}

//----- (0223D238) --------------------------------------------------------
int *__fastcall Function_223d238(int **a1)
{
  int **v1;
  uint v2;
  uint v3;

  v1 = a1;
  v2 = 0;
  do
  {
    free((int)v1[v2 + 112]);
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 < 8 );
  Function_200a4e4(v1[79]);
  Function_200a6dc(v1[80]);
  v3 = 0;
  do
  {
    Function_2009754(v1[v3 + 75]);
    v3 = (v3 + 1) & 0xFF;
  }
  while ( v3 < 4 );
  Function_2021964(*v1);
  Function_200a878();
  Function_201e958();
  return Function_201f8b4();
}

//----- (0223D298) --------------------------------------------------------
uint __fastcall Function_223d298(int a1, uint a2, uint a3)
{
  uint v3;
  int v4;
  uint v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( a2 >= 8 )
    ErrorHandler();
  if ( v5 > 3 )
    ErrorHandler();
  v6 = Function_2021f9c(*(uint *)(v4 + 4 * v3 + 348));
  v7 = NNS_G2dGetImagePaletteLocation(v6, 1);
  v8 = 32 * v3;
  v9 = *(uint *)(*(uint *)(v4 + 4 * v3 + 480) + 12);
  DC_FlushRange(v9 + 32 * v5, 32);
  return GX_LoadOBJPltt(v9 + 32 * v5, v7 + v8, 0x20u);
}

//----- (0223D2F4) --------------------------------------------------------
int Function_223d2f4()
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = 1;
  v2 = 2048;
  v3 = 0;
  v4 = 25;
  Function_201e86c(&v1);
  Function_201f834(2, 0x19u);
  Function_201e994();
  return Function_201f8e4();
}

//----- (0223D324) --------------------------------------------------------
uchar *__fastcall Function_223d324(uchar *result)
{
  int v1;

  v1 = 0;
  do
  {
    *result = v1;
    result[1] = -1;
    ++v1;
    result += 2;
  }
  while ( v1 < 4 );
  return result;
}

//----- (0223D338) --------------------------------------------------------
int __fastcall Function_223d338(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_223d370();
  result = Function_223d3a0(v3, v4, v5);
  if ( result != 1 )
  {
    result = Function_223d3d8(v3, v4, v5);
    if ( result != 1 )
      result = Function_223d410(v3, v4, v5);
  }
  return result;
}

//----- (0223D370) --------------------------------------------------------
int __fastcall Function_223d370(uchar *a1)
{
  uchar *v1;
  int v2;
  uchar *v3;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    if ( v3[1] != 255 && !Function_2004b04(*v3 + 3) )
      v3[1] = -1;
    ++v2;
    v3 += 2;
  }
  while ( v2 < 4 );
  return Function_223d454(v1);
}

//----- (0223D3A0) --------------------------------------------------------
int __fastcall Function_223d3a0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  v5 = a1;
  do
  {
    if ( v3 == *(uchar *)(v5 + 1) )
    {
      Function_223d470(*(uchar *)(a1 + 2 * v4), v3);
      Function_223d42c(v2, v4, *(uchar *)(v2 + 2 * v4), v3);
      return 1;
    }
    ++v4;
    v5 += 2;
  }
  while ( v4 < 4 );
  return 0;
}

//----- (0223D3D8) --------------------------------------------------------
int __fastcall Function_223d3d8(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  v5 = a1;
  do
  {
    if ( *(uchar *)(v5 + 1) == 255 )
    {
      Function_223d470(*(uchar *)(a1 + 2 * v4), v3);
      Function_223d42c(v2, v4, *(uchar *)(v2 + 2 * v4), v3);
      return 1;
    }
    ++v4;
    v5 += 2;
  }
  while ( v4 < 4 );
  return 0;
}

//----- (0223D410) --------------------------------------------------------
int __fastcall Function_223d410(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_223d470(*(uchar *)(a1 + 6), a2);
  Function_223d42c(v2, 3, *(uchar *)(v2 + 6), v3);
  return 1;
}

//----- (0223D42C) --------------------------------------------------------
uchar *__fastcall Function_223d42c(uchar *result, int a2, char a3, char a4)
{
  uchar *v4;

  if ( a2 > 0 )
  {
    v4 = &result[2 * a2];
    do
    {
      --a2;
      *v4 = *(v4 - 2);
      v4[1] = *(v4 - 1);
      v4 -= 2;
    }
    while ( a2 > 0 );
  }
  *result = a3;
  result[1] = a4;
  return result;
}

//----- (0223D454) --------------------------------------------------------
uchar *__fastcall Function_223d454(uchar *result)
{
  int v1;

  v1 = 0;
  do
  {
    if ( *result == 255 )
    {
      *result = result[2];
      result[2] = -1;
    }
    ++v1;
    result += 2;
  }
  while ( v1 < 4 );
  return result;
}

//----- (0223D470) --------------------------------------------------------
uint *__fastcall Function_223d470(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a3;
  v5 = a2;
  Function_2004ae8(a1 + 3, a1 + 3, 0x694u);
  return Function_2004f68(v3 + 3, 0xFFFF, *((ushort *)dword_223D77C + v5) - 152 * (4 - v4));
}

