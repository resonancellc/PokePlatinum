//----- (021D0D80) --------------------------------------------------------
int __fastcall Function_110_21d0d80(int a1, uint *a2)
{
  int v2;
  uint *v3;
  int v4;
  uint *v5;
  uint *v6;
  int v7;

  v2 = a1;
  v3 = a2;
  SetMainLoopFunctionCall(0, 0);
  Function_20177bc(0, 0);
  Function_201ff00();
  Function_201ff68();
  REG_DISPCNT &= 0xFFFFE0FF;
  REG_DISPCNT_SUB &= 0xFFFFE0FF;
  Function_2017fc8(3, 114, 0x20000);
  v4 = MallocSomeDataAndStorePtrInOverlayData1c(v2, 304, 0x72u);
  Call_FillMemWithValue((int *)v4, 0, 0x130u);
  *(uint *)v4 = v2;
  *(uint *)(v4 + 12) = Function_2018340(0x72u);
  v5 = (uint *)LoadPtrToOverWorldDataIn18(v2);
  v6 = v5;
  *(uint *)(v4 + 296) = *v5;
  *(uint *)(v4 + 300) = LoadVariableAreaAdress_17(*(uint *)(v4 + 296));
  *(uchar *)(v4 + 5) = *((uchar *)v6 + 4);
  *(uchar *)(v4 + 6) = *((uchar *)v6 + 5);
  *(ushort *)(v4 + 8) = *((ushort *)v6 + 3);
  *(uint *)(v4 + 292) = LoadPlayerDataAdress(*(uint *)(v4 + 296));
  Function_21d1180(v4);
  *(uint *)(v4 + 272) = LoadFromMsgNARC(1, 26, 16, 0x72u);
  *(uint *)(v4 + 276) = Function_200b358(0x72u);
  *(uint *)(v4 + 280) = Function_2023790(800, 0x72u);
  *(uint *)(v4 + 284) = Function_2023790(800, 0x72u);
  LoadFromNARC_PlFont1(0, 416, 114);
  LoadFromNARC_PlFont2(0, 384, 114);
  v7 = Function_21d1208(*(uchar *)(v4 + 6));
  Function_21d2124(*(uint *)(v4 + 12), v4 + 16, v7);
  SetMainLoopFunctionCall((int)Function_21d1048, v4);
  *v3 = 0;
  return 1;
}

//----- (021D0E9C) --------------------------------------------------------
int __fastcall Function_110_21d0e9c(int a1, int *a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = LoadOverlayData1c(a1);
  v4 = *v2;
  v5 = v3;
  if ( *v2 )
  {
    if ( v4 == 1 )
    {
      if ( Function_21d0fd0() == 1 )
        Function_21d1200(v5, v2, 2);
    }
    else if ( v4 == 2 && Function_21d1000() == 1 )
    {
      return 1;
    }
  }
  else if ( Function_21d0f78() == 1 )
  {
    Function_21d1200(v5, v2, 1);
  }
  return 0;
}

//----- (021D0EF0) --------------------------------------------------------
int __fastcall Function_110_21d0ef0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  Function_2002fa0(*(uint *)(v2 + 288), 2);
  Function_2002fa0(*(uint *)(v2 + 288), 0);
  Call_free1(*(uint *)(v2 + 288));
  *(uint *)(v2 + 288) = 0;
  Function_200b190(*(ushort **)(v2 + 272));
  Function_200b3f0(*(uint **)(v2 + 276), v3);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 280), v4);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 284), v5);
  v6 = Function_21d1208(*(uchar *)(v2 + 6));
  Function_21d216c(v2 + 16, v6);
  Function_21d11cc(*(uint *)(v2 + 12));
  FreeSomeDataAndStore0InOverlayData1c(v1);
  SetMainLoopFunctionCall(0, 0);
  Function_201807c(114);
  return 1;
}

//----- (021D0F78) --------------------------------------------------------
int __fastcall Function_21d0f78(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 4);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      Function_200f174(0, 1, 1, 0, 6, 3, 114);
      Function_21d140c(v1);
      ++*(uchar *)(v1 + 4);
    }
    else if ( v2 == 2 && Function_200f2ac() == 1 )
    {
      return 1;
    }
  }
  else
  {
    *(uchar *)(v1 + 4) = 1;
  }
  return 0;
}

//----- (021D0FD0) --------------------------------------------------------
int __fastcall Function_21d0fd0(int a1)
{
  int v1;

  v1 = *(uchar *)(a1 + 4);
  if ( *(uchar *)(a1 + 4) )
  {
    if ( v1 == 1 && (dword_21BF6C0 & 1 || dword_21BF6C0 & 2) )
      return 1;
  }
  else
  {
    *(uchar *)(a1 + 4) = v1 + 1;
  }
  return 0;
}

//----- (021D1000) --------------------------------------------------------
int __fastcall Function_21d1000(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 4);
  if ( v2 )
  {
    if ( v2 == 1 && Function_200f2ac() == 1 )
      return 1;
  }
  else
  {
    Function_200f174(0, 0, 0, 0, 6, 1, 114);
    ++*(uchar *)(v1 + 4);
  }
  return 0;
}

//----- (021D1048) --------------------------------------------------------
int __fastcall Function_21d1048(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = *(uint *)(a1 + 288);
  if ( v2 )
    Function_2003694(v2);
  Function_201c2b8(*(uint *)(v1 + 12));
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (021D1078) --------------------------------------------------------
char *Function_21d1078()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_21D21F8;
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

//----- (021D1098) --------------------------------------------------------
uint __fastcall Function_21d1098(uint *a1)
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

  v1 = a1;
  v24 = 1;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  SetGraphicsModes(&v24);
  v17 = 0;
  v18 = 0;
  v19 = 2048;
  v20 = 0;
  v21 = 16777217;
  v22 = 0;
  v23 = 0;
  Function_20183c4(v1, 0, &v17, 0);
  Function_2019690(0, 32, 0, 0x72u);
  Function_2019ebc(v1, 0);
  v10 = 0;
  v11 = 0;
  v12 = 2048;
  v13 = 0;
  v14 = 50462721;
  v15 = 0;
  v16 = 0;
  Function_20183c4(v1, 2u, &v10, 0);
  Function_2019690(2u, 32, 0, 0x72u);
  Function_2019ebc(v1, 2u);
  v3 = 0;
  v4 = 0;
  v5 = 2048;
  v6 = 0;
  v7 = 17170433;
  v8 = 0;
  v9 = 0;
  Function_20183c4(v1, 6u, &v3, 0);
  Function_2019690(6u, 32, 0, 0x72u);
  Function_2019ebc(v1, 6u);
  REG_BG0CNT &= 0xFFFCu;
  Function_201ff0c(1u, 1);
  return Function_201ff0c(4u, 1);
}

//----- (021D1180) --------------------------------------------------------
int __fastcall Function_21d1180(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  Function_21d1078();
  Function_21d1098(*(uint **)(v1 + 12));
  *(uint *)(v1 + 288) = MallocFill120(0x72u);
  Function_2002f70(*(uint *)(v1 + 288), 2, 512, 0x72u);
  Function_2002f70(*(uint *)(v1 + 288), 0, 512, 0x72u);
  v2 = Function_21d123c(v1, 2);
  Function_21d128c(v2);
  return Function_21d12c0(v1, 6);
}

//----- (021D11CC) --------------------------------------------------------
uint __fastcall Function_21d11cc(int a1)
{
  int v1;

  v1 = a1;
  Function_201ff0c(0x1Fu, 0);
  Function_201ff74(0x1Fu, 0);
  Function_2019044(v1, 0);
  Function_2019044(v1, 2);
  Function_2019044(v1, 6);
  return free(v1);
}

//----- (021D1200) --------------------------------------------------------
int __fastcall Function_21d1200(int result, uint *a2, int a3)
{
  *(uchar *)(result + 4) = 0;
  *a2 = a3;
  return result;
}

//----- (021D1208) --------------------------------------------------------
int __fastcall Function_21d1208(char a1)
{
  int v1;

  v1 = 0;
  switch ( a1 )
  {
    case 1:
      v1 = 4;
      break;
    case 2:
    case 3:
      return v1;
    case 4:
      v1 = 2;
      break;
    case 5:
      v1 = 1;
      break;
    case 6:
      v1 = 3;
      break;
  }
  return v1;
}

//----- (021D123C) --------------------------------------------------------
uint __fastcall Function_21d123c(int a1, uchar a2, int a3, int a4)
{
  int v4;
  uchar v5;
  int *v6;

  v4 = a1;
  v5 = a2;
  v6 = LoadFromNARC_8(150, 0x72u, a3, a4);
  Function_20070e8((int)v6, 0x7Cu, *(uint **)(v4 + 12), v5, 0, 0, 1, 114);
  Function_200710c((int)v6, 0x7Bu, *(uint **)(v4 + 12), v5, 0, 0, 1, 114);
  return Call_FS_CloseFile(v6);
}

//----- (021D128C) --------------------------------------------------------
uint __fastcall Function_21d128c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v6;
  int v7;

  v7 = a4;
  v4 = Function_2006f88(150, 170, &v6, 114);
  DC_FlushRange(*(uint *)(v6 + 12), 64);
  GX_LoadBGPltt(*(uint *)(v6 + 12), 0, 0x40u);
  return free(v4);
}

//----- (021D12C0) --------------------------------------------------------
uint __fastcall Function_21d12c0(int a1, uchar a2, int a3, int a4)
{
  int v4;
  uchar v5;
  int *v6;

  v4 = a1;
  v5 = a2;
  v6 = LoadFromNARC_8(12, 0x72u, a3, a4);
  Function_20070e8((int)v6, 0xAu, *(uint **)(v4 + 12), v5, 0, 0, 1, 114);
  Function_200710c((int)v6, 0xBu, *(uint **)(v4 + 12), v5, 0, 0, 1, 114);
  Function_2007130((int)v6, 0xCu, 4u, 0, 32, 114);
  return Call_FS_CloseFile(v6);
}

//----- (021D1324) --------------------------------------------------------
int __fastcall Function_21d1324(int a1, int a2, uint a3, int a4, int a5, int a6, int a7, uchar a8, uchar a9, char a10, int a11)
{
  int v11;
  int v12;
  uint v13;
  int v14;

  v11 = a1;
  v12 = a2;
  v13 = a3;
  if ( a10 )
    Function_201ada4_ClearTextBox(a2, a8);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v11 + 272), v13, *(ushort **)(v11 + 284));
  Function_200c388(*(uint **)(v11 + 276), *(uint *)(v11 + 280), *(uint *)(v11 + 284));
  if ( a11 == 1 )
  {
    Function_2002d7c(0, *(uint *)(v11 + 280), 0);
  }
  else if ( a11 == 2 )
  {
    Function_2002d7c(0, *(uint *)(v11 + 280), 0);
  }
  v14 = *(uint *)(v11 + 280);
  return Function_201d78c(v12, a9);
}

//----- (021D13CC) --------------------------------------------------------
int __fastcall Function_21d13cc(int a1, int a2, uint a3, char a4)
{
  return Function_21d1324(a1, a2, a3, 0, 0, 1, 2, 0, 0, a4, 0);
}

//----- (021D13F0) --------------------------------------------------------
uint __fastcall Function_21d13f0(int a1, uint a2, int a3)
{
  return Function_200b60c(*(uint *)(a1 + 276), a2, a3, 4, 1, 1);
}

//----- (021D140C) --------------------------------------------------------
int __fastcall Function_21d140c(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = *(uchar *)(a1 + 6);
  switch ( (uchar)v2 )
  {
    case 1:
      if ( *(uchar *)(a1 + 5) > 1u )
        result = Function_21d1ed8();
      else
        result = Function_21d1dbc();
      break;
    case 2:
    case 3:
      Function_21d1468();
      result = Function_21d1650(v1);
      break;
    case 4:
      result = Function_21d19f4();
      break;
    case 5:
      result = Function_21d1808(a1, v2);
      break;
    case 6:
      result = Function_21d1c40();
      break;
    default:
      result = Function_21d1c40();
      break;
  }
  return result;
}

//----- (021D1468) --------------------------------------------------------
int __fastcall Function_21d1468(int a1)
{
  int v1;
  uint v2;
  uint v3;
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

  v1 = a1;
  Function_201ada4_ClearTextBox(a1 + 16, 0);
  Function_21d1324(v1, v1 + 16, 0x16u, 8, 0, 1, 2, 0, 0, 0, 0);
  if ( *(uchar *)(v1 + 5) )
  {
    if ( *(uchar *)(v1 + 5) == 1 )
      v2 = 27;
    else
      v2 = 28;
  }
  else
  {
    v2 = 26;
  }
  Function_21d1324(v1, v1 + 16, v2, 216, 0, 1, 2, 0, 0, 0, 2);
  Function_201a9a4(v1 + 16);
  Function_21d13cc(v1, v1 + 32, 0x22u, 1);
  Function_21d1324(v1, v1 + 32, 0x24u, 224, 0, 1, 2, 0, 0, 0, 2);
  Function_201a9a4(v1 + 32);
  v3 = Function_21d17ac(v1, 0);
  Function_21d13cc(v1, v1 + 48, v3, 1);
  v5 = Function_205e430(0, *(uchar *)(v1 + 5), v4);
  v6 = Function_2030698(*(uint *)(v1 + 300), v5, 255);
  Function_21d13f0(v1, 0, v6);
  Function_21d1324(v1, v1 + 48, 0x26u, 112, 0, 1, 2, 0, 0, 0, 1);
  v8 = Function_205e488(0, *(uchar *)(v1 + 5), v7);
  v9 = Function_2030698(*(uint *)(v1 + 300), v8, 255);
  Function_21d13f0(v1, 0, v9);
  Function_21d1324(v1, v1 + 48, 0x28u, 224, 0, 1, 2, 0, 0, 0, 2);
  Function_201a9a4(v1 + 48);
  Function_21d13cc(v1, v1 + 64, 0x1Fu, 1);
  v11 = Function_205e45c(0, *(uchar *)(v1 + 5), v10);
  v12 = Function_2030698(*(uint *)(v1 + 300), v11, 255);
  Function_21d13f0(v1, 0, v12);
  Function_21d1324(v1, v1 + 64, 0x26u, 112, 0, 1, 2, 0, 0, 0, 1);
  v14 = Function_205e4b4(0, *(uchar *)(v1 + 5), v13);
  v15 = Function_2030698(*(uint *)(v1 + 300), v14, 255);
  Function_21d13f0(v1, 0, v15);
  Function_21d1324(v1, v1 + 64, 0x28u, 224, 0, 1, 2, 0, 0, 0, 2);
  return Function_201a9a4(v1 + 64);
}

//----- (021D1650) --------------------------------------------------------
int __fastcall Function_21d1650(int a1)
{
  int v1;
  uint v2;
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

  v1 = a1;
  Function_21d13cc(a1, a1 + 80, 0x23u, 1);
  Function_201a9a4(v1 + 80);
  v2 = Function_21d17ac(v1, 1);
  Function_21d13cc(v1, v1 + 96, v2, 1);
  v4 = Function_205e430(1, *(uchar *)(v1 + 5), v3);
  v5 = Function_2030698(*(uint *)(v1 + 300), v4, 255);
  Function_21d13f0(v1, 0, v5);
  Function_21d1324(v1, v1 + 96, 0x26u, 112, 0, 1, 2, 0, 0, 0, 1);
  v7 = Function_205e488(1, *(uchar *)(v1 + 5), v6);
  v8 = Function_2030698(*(uint *)(v1 + 300), v7, 255);
  Function_21d13f0(v1, 0, v8);
  Function_21d1324(v1, v1 + 96, 0x28u, 224, 0, 1, 2, 0, 0, 0, 2);
  Function_201a9a4(v1 + 96);
  Function_21d13cc(v1, v1 + 112, 0x1Fu, 1);
  v10 = Function_205e45c(1, *(uchar *)(v1 + 5), v9);
  v11 = Function_2030698(*(uint *)(v1 + 300), v10, 255);
  Function_21d13f0(v1, 0, v11);
  Function_21d1324(v1, v1 + 112, 0x26u, 112, 0, 1, 2, 0, 0, 0, 1);
  v13 = Function_205e4b4(1, *(uchar *)(v1 + 5), v12);
  v14 = Function_2030698(*(uint *)(v1 + 300), v13, 255);
  Function_21d13f0(v1, 0, v14);
  Function_21d1324(v1, v1 + 112, 0x28u, 224, 0, 1, 2, 0, 0, 0, 2);
  return Function_201a9a4(v1 + 112);
}

//----- (021D17AC) --------------------------------------------------------
int __fastcall Function_21d17ac(int a1, int a2)
{
  char v2;
  int v3;
  int v4;
  int v5;
  int v6;
  char v7;
  uchar *v8;
  int result;

  v2 = a2;
  if ( a2 )
    v3 = 104;
  else
    v3 = 102;
  v4 = *(uchar *)(a1 + 5);
  if ( v4 == 3 )
  {
    v5 = LoadVariableAreaAdress_17(*(uint *)(a1 + 296));
    v6 = Function_205e6a8(v3);
    v7 = Function_2030698(v5, v3, v6);
  }
  else
  {
    v8 = (uchar *)Function_20300f4(*(uint *)(a1 + 296));
    v7 = Function_20300e0(v8, 10, v4 + 4 * v2);
  }
  if ( v7 == 1 )
    result = 30;
  else
    result = 29;
  return result;
}

//----- (021D1808) --------------------------------------------------------
int __fastcall Function_21d1808(int a1)
{
  int v1;
  uint v2;
  int v3;
  int v4;
  int v5;
  uint v6;
  int v7;
  int v8;
  int v9;
  uchar *v10;
  int v11;
  int v12;
  int v14;

  v1 = a1;
  Function_201ada4_ClearTextBox(a1 + 16, 0);
  Function_21d1324(v1, v1 + 16, 0x18u, 8, 0, 1, 2, 0, 0, 0, 0);
  if ( *(uchar *)(v1 + 5) )
  {
    if ( *(uchar *)(v1 + 5) == 1 )
      v2 = 27;
    else
      v2 = 28;
  }
  else
  {
    v2 = 26;
  }
  Function_21d1324(v1, v1 + 16, v2, 216, 0, 1, 2, 0, 0, 0, 2);
  Function_201a9a4(v1 + 16);
  Function_21d19b0(v1);
  Function_21d1324(v1, v1 + 32, 0x27u, 0, 0, 1, 2, 0, 0, 0, 0);
  Function_201a9a4(v1 + 32);
  Function_21d13cc(v1, v1 + 48, 0x1Du, 1);
  v3 = LoadVariableAreaAdress_17(*(uint *)(v1 + 296));
  Function_205e55c(*(uchar *)(v1 + 5));
  v5 = v4;
  Function_205e55c(*(uchar *)(v1 + 5));
  v7 = Function_205e6a8(v6);
  if ( *(ushort *)(v1 + 8) == Function_2030698(v3, v5, v7) )
  {
    Function_205e50c(*(uchar *)(v1 + 5));
    v8 = Function_2030698(*(uint *)(v1 + 300), v9, 255);
  }
  else
  {
    v8 = 0;
  }
  Function_21d13f0(v1, 0, v8);
  Function_21d1324(v1, v1 + 48, 0x26u, 112, 0, 1, 2, 0, 0, 0, 1);
  Function_201a9a4(v1 + 48);
  Function_21d13cc(v1, v1 + 64, 0x1Fu, 1);
  v10 = Function_20308a0(*(uint *)(v1 + 296), 0xBu, (int)&v14);
  if ( v14 == 1 )
  {
    v12 = Function_205e584(*(uchar *)(v1 + 5));
    v11 = Function_20308bc(*(uint *)(v1 + 296), (int)v10, v12, *(ushort *)(v1 + 8));
  }
  else
  {
    v11 = 0;
  }
  if ( v10 )
    free((int)v10);
  Function_21d13f0(v1, 0, v11);
  Function_21d1324(v1, v1 + 64, 0x26u, 112, 0, 1, 2, 0, 0, 0, 1);
  return Function_201a9a4(v1 + 64);
}

//----- (021D19B0) --------------------------------------------------------
uint __fastcall Function_21d19b0(int a1)
{
  int v1;
  ushort **v2;
  ushort *v3;
  int v4;

  v1 = a1;
  v2 = (ushort **)LoadFromMsgNARC(1, 26, 412, 0x72u);
  v3 = Function_200b1ec_CallMsgDecrypt(v2, *(ushort *)(v1 + 8));
  Function_200b190((ushort *)v2);
  Function_200b48c(*(int **)(v1 + 276), 0, (int)v3);
  return Function_20237bc_FreeMsg((int)v3, v4);
}

//----- (021D19F4) --------------------------------------------------------
int __fastcall Function_21d19f4(int a1)
{
  int v1;
  uint v2;
  uint v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  uint v17;
  int v18;
  int v19;

  v1 = a1;
  Function_201ada4_ClearTextBox(a1 + 16, 0);
  Function_21d1324(v1, v1 + 16, 0x17u, 8, 0, 1, 2, 0, 0, 0, 0);
  if ( *(uchar *)(v1 + 5) )
  {
    if ( *(uchar *)(v1 + 5) == 1 )
      v2 = 27;
    else
      v2 = 28;
  }
  else
  {
    v2 = 26;
  }
  Function_21d1324(v1, v1 + 16, v2, 216, 0, 1, 2, 0, 0, 0, 2);
  Function_201a9a4(v1 + 16);
  Function_21d1324(v1, v1 + 32, 0x25u, 96, 0, 1, 2, 0, 0, 1, 2);
  Function_201a9a4(v1 + 32);
  v3 = Function_21d1bec(v1);
  Function_21d13cc(v1, v1 + 48, v3, 1);
  Function_205e5e0(*(uchar *)(v1 + 5));
  v5 = Function_2030698(*(uint *)(v1 + 300), v4, 255);
  Function_21d13f0(v1, 0, v5);
  Function_21d1324(v1, v1 + 48, 0x2Au, 112, 0, 1, 2, 0, 0, 0, 1);
  v6 = LoadVariableAreaAdress_17(*(uint *)(v1 + 296));
  Function_205e630(*(uchar *)(v1 + 5));
  v8 = v7;
  Function_205e630(*(uchar *)(v1 + 5));
  v10 = Function_205e6a8(v9);
  v11 = Function_2030698(v6, v8, v10);
  Function_21d13f0(v1, 0, v11);
  Function_21d1324(v1, v1 + 48, 0x29u, 224, 0, 1, 2, 0, 0, 0, 2);
  Function_201a9a4(v1 + 48);
  Function_21d13cc(v1, v1 + 64, 0x1Fu, 1);
  Function_205e608(*(uchar *)(v1 + 5));
  v13 = Function_2030698(*(uint *)(v1 + 300), v12, 255);
  Function_21d13f0(v1, 0, v13);
  Function_21d1324(v1, v1 + 64, 0x2Au, 112, 0, 1, 2, 0, 0, 0, 1);
  v14 = LoadVariableAreaAdress_17(*(uint *)(v1 + 296));
  Function_205e680(*(uchar *)(v1 + 5));
  v16 = v15;
  Function_205e680(*(uchar *)(v1 + 5));
  v18 = Function_205e6a8(v17);
  v19 = Function_2030698(v14, v16, v18);
  Function_21d13f0(v1, 0, v19);
  Function_21d1324(v1, v1 + 64, 0x29u, 224, 0, 1, 2, 0, 0, 0, 2);
  return Function_201a9a4(v1 + 64);
}

//----- (021D1BEC) --------------------------------------------------------
int __fastcall Function_21d1bec(int a1)
{
  int v1;
  int v2;
  int v3;
  char v4;
  uchar *v5;
  int result;

  v1 = *(uchar *)(a1 + 5);
  if ( v1 == 3 )
  {
    v2 = LoadVariableAreaAdress_17(*(uint *)(a1 + 296));
    v3 = Function_205e6a8(0x6Cu);
    v4 = Function_2030698(v2, 108, v3);
  }
  else
  {
    v5 = (uchar *)Function_203041c(*(uint *)(a1 + 296));
    v4 = Function_2030470(v5, 9, v1);
  }
  if ( v4 == 1 )
    result = 30;
  else
    result = 29;
  return result;
}

//----- (021D1C40) --------------------------------------------------------
int __fastcall Function_21d1c40(int a1)
{
  int v1;
  uint v2;
  uint v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = a1;
  Function_201ada4_ClearTextBox(a1 + 16, 0);
  Function_21d1324(v1, v1 + 16, 0x19u, 8, 0, 1, 2, 0, 0, 0, 0);
  if ( *(uchar *)(v1 + 5) )
  {
    if ( *(uchar *)(v1 + 5) == 1 )
      v2 = 27;
    else
      v2 = 28;
  }
  else
  {
    v2 = 26;
  }
  Function_21d1324(v1, v1 + 16, v2, 216, 0, 1, 2, 0, 0, 0, 2);
  Function_201a9a4(v1 + 16);
  v3 = Function_21d1d68(v1);
  Function_21d13cc(v1, v1 + 32, v3, 1);
  Function_205e700(*(uchar *)(v1 + 5));
  v5 = Function_2030698(*(uint *)(v1 + 300), v4, 255);
  Function_21d13f0(v1, 0, v5);
  Function_21d1324(v1, v1 + 32, 0x2Bu, 112, 0, 1, 2, 0, 0, 0, 1);
  Function_201a9a4(v1 + 32);
  Function_21d13cc(v1, v1 + 48, 0x1Fu, 1);
  Function_205e728(*(uchar *)(v1 + 5));
  v7 = Function_2030698(*(uint *)(v1 + 300), v6, 255);
  Function_21d13f0(v1, 0, v7);
  Function_21d1324(v1, v1 + 48, 0x2Bu, 112, 0, 1, 2, 0, 0, 0, 1);
  return Function_201a9a4(v1 + 48);
}

//----- (021D1D68) --------------------------------------------------------
int __fastcall Function_21d1d68(int a1)
{
  int v1;
  int v2;
  int v3;
  char v4;
  uchar *v5;
  int result;

  v1 = *(uchar *)(a1 + 5);
  if ( v1 == 3 )
  {
    v2 = LoadVariableAreaAdress_17(*(uint *)(a1 + 296));
    v3 = Function_205e6a8(0x6Eu);
    v4 = Function_2030698(v2, 110, v3);
  }
  else
  {
    v5 = (uchar *)Function_20305b8(*(uint *)(a1 + 296));
    v4 = Function_2030600(v5, 8, v1);
  }
  if ( v4 == 1 )
    result = 30;
  else
    result = 29;
  return result;
}

//----- (021D1DBC) --------------------------------------------------------
int __fastcall Function_21d1dbc(int a1)
{
  int v1;
  uint v2;
  uint v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = a1;
  Function_201ada4_ClearTextBox(a1 + 16, 0);
  Function_21d1324(v1, v1 + 16, 0x15u, 8, 0, 1, 2, 0, 0, 0, 0);
  if ( *(uchar *)(v1 + 5) )
    v2 = 27;
  else
    v2 = 26;
  Function_21d1324(v1, v1 + 16, v2, 216, 0, 1, 2, 0, 0, 0, 2);
  Function_201a9a4(v1 + 16);
  v3 = Function_21d20cc(v1, *(uchar *)(v1 + 5));
  Function_21d13cc(v1, v1 + 48, v3, 1);
  v4 = Function_205e750(*(uchar *)(v1 + 5));
  v5 = Function_2030698(*(uint *)(v1 + 300), v4, 255);
  Function_21d13f0(v1, 0, v5);
  Function_21d1324(v1, v1 + 48, 0x26u, 112, 0, 1, 2, 0, 0, 0, 1);
  Function_201a9a4(v1 + 48);
  Function_21d13cc(v1, v1 + 64, 0x1Fu, 1);
  v6 = Function_205e790(*(uchar *)(v1 + 5));
  v7 = Function_2030698(*(uint *)(v1 + 300), v6, 255);
  Function_21d13f0(v1, 0, v7);
  Function_21d1324(v1, v1 + 64, 0x26u, 112, 0, 1, 2, 0, 0, 0, 1);
  return Function_201a9a4(v1 + 64);
}

//----- (021D1ED8) --------------------------------------------------------
int __fastcall Function_21d1ed8(int a1)
{
  int v1;
  uint v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v1 = a1;
  Function_201ada4_ClearTextBox(a1 + 16, 0);
  Function_21d1324(v1, v1 + 16, 0x15u, 8, 0, 1, 2, 0, 0, 0, 0);
  Function_21d1324(v1, v1 + 16, 0x1Cu, 216, 0, 1, 2, 0, 0, 0, 2);
  Function_201a9a4(v1 + 16);
  Function_21d13cc(v1, v1 + 32, 0x20u, 1);
  Function_201a9a4(v1 + 32);
  v2 = Function_21d20cc(v1, *(uchar *)(v1 + 5));
  Function_21d13cc(v1, v1 + 80, v2, 1);
  v3 = Function_205e750(*(uchar *)(v1 + 5));
  v4 = Function_2030698(*(uint *)(v1 + 300), v3, 255);
  Function_21d13f0(v1, 0, v4);
  Function_21d1324(v1, v1 + 80, 0x26u, 112, 0, 1, 2, 0, 0, 0, 1);
  Function_201a9a4(v1 + 80);
  Function_21d13cc(v1, v1 + 96, 0x1Fu, 1);
  v5 = Function_205e790(*(uchar *)(v1 + 5));
  v6 = Function_2030698(*(uint *)(v1 + 300), v5, 255);
  Function_21d13f0(v1, 0, v6);
  Function_21d1324(v1, v1 + 96, 0x26u, 112, 0, 1, 2, 0, 0, 0, 1);
  Function_201a9a4(v1 + 96);
  Function_21d13cc(v1, v1 + 112, 0x21u, 1);
  Function_201a9a4(v1 + 112);
  v7 = Function_21d20cc(v1, 3);
  Function_21d13cc(v1, v1 + 128, v7, 1);
  v8 = Function_205e750(3u);
  v9 = Function_2030698(*(uint *)(v1 + 300), v8, 255);
  Function_21d13f0(v1, 0, v9);
  Function_21d1324(v1, v1 + 128, 0x26u, 112, 0, 1, 2, 0, 0, 0, 1);
  Function_201a9a4(v1 + 128);
  Function_21d13cc(v1, v1 + 144, 0x1Fu, 1);
  v10 = Function_205e790(3u);
  v11 = Function_2030698(*(uint *)(v1 + 300), v10, 255);
  Function_21d13f0(v1, 0, v11);
  Function_21d1324(v1, v1 + 144, 0x26u, 112, 0, 1, 2, 0, 0, 0, 1);
  return Function_201a9a4(v1 + 144);
}

//----- (021D20CC) --------------------------------------------------------
int __fastcall Function_21d20cc(int a1)
{
  int v1;
  char v2;
  uint v3;
  int result;

  v1 = Function_202d750(*(uint *)(a1 + 296));
  switch ( v2 )
  {
    case 0:
      v3 = 8;
      break;
    case 1:
      v3 = 9;
      break;
    case 2:
      v3 = 10;
      break;
    case 3:
      v3 = 11;
      break;
    case 4:
      v3 = 12;
      break;
    case 6:
      v3 = 15;
      break;
    default:
      v3 = 8;
      break;
  }
  if ( Function_202d414(v1, v3, 0) == 1 )
    result = 30;
  else
    result = 29;
  return result;
}

//----- (021D2124) --------------------------------------------------------
int *__fastcall Function_21d2124(uint *a1, int a2, int a3)
{
  int v3;
  uint v4;
  int *result;
  uint v6;
  uint *v7;
  int v8;

  v7 = a1;
  v3 = a2;
  v4 = 0;
  v8 = (int)*(&off_21D2278 + 2 * a3);
  result = dword_21D227C;
  v6 = dword_21D227C[2 * a3];
  if ( v6 )
  {
    do
    {
      Function_201a8d4(v7, v3 + 16 * v4, (uchar *)(v8 + 8 * v4));
      Function_201ada4_ClearTextBox(v3 + 16 * v4, 0);
      result = (int *)((v4 + 1) << 24);
      v4 = (v4 + 1) & 0xFF;
    }
    while ( v4 < v6 );
  }
  return result;
}

//----- (021D216C) --------------------------------------------------------
int *__fastcall Function_21d216c(int a1, int a2)
{
  int v2;
  int *result;
  uint v4;
  uint v5;

  v2 = a1;
  result = dword_21D227C;
  v4 = dword_21D227C[2 * a2];
  v5 = 0;
  if ( v4 )
  {
    do
    {
      Function_201a8fc(v2 + 16 * v5);
      result = (int *)((v5 + 1) << 16);
      v5 = (v5 + 1) & 0xFFFF;
    }
    while ( v5 < v4 );
  }
  return result;
}

