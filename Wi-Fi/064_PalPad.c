//----- (0222DCE0) --------------------------------------------------------
int __fastcall Function_64_222dce0(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;

  v4 = a1;
  LoadOverlay(63, 2, a3, a4);
  Function_2017fc8(3, 52, 458752);
  v5 = (int *)MallocSomeDataAndStorePtrInOverlayData1c(v4, 1240, 0x34u);
  Call_FillMemWithValue(v5, 0, 0x4D8u);
  v6 = LoadPtrToOverWorldDataIn18(v4);
  Function_222e040(v5 + 128, v6, 52);
  Function_222e1a4(v5 + 1, v5 + 128, 52);
  Function_222ea68(v5 + 143, v5 + 128, v5 + 1, 52);
  Function_222f09c(v5 + 158, v5 + 128, v5 + 1, 52);
  Function_2230444(v5 + 226, v5 + 128, v5 + 1, 52);
  Function_2230620(v5 + 229, v5 + 128, v5 + 1, 52);
  Function_22308dc(v5 + 239, v5 + 128, v5 + 1, 52);
  SetMainLoopFunctionCall((int)Function_222df3c, (int)v5);
  Function_20177a4();
  return 1;
}

//----- (0222DDAC) --------------------------------------------------------
int __fastcall Function_64_222ddac(int a1, uint *a2)
{
  int v2;
  uint *v3;
  int v4;

  v3 = a2;
  v4 = LoadOverlayData1c(a1);
  if ( *v3 )
  {
    if ( *v3 == 1 && --*(uint *)(v4 + 1236) <= 0 )
      *v3 = 0;
  }
  else
  {
    switch ( (uchar)*(uint *)v4 )
    {
      case 0u:
        v2 = Function_222ea70(v4 + 572, v4 + 512, v4 + 4, 52);
        goto LABEL_11;
      case 1u:
        v2 = Function_222f0c4(v4 + 632, v4 + 512, v4 + 4, 52);
        goto LABEL_11;
      case 2u:
        v2 = Function_223044c(v4 + 904, v4, v4 + 512, v4 + 4, 52);
        goto LABEL_11;
      case 3u:
        v2 = Function_2230628(v4 + 916, v4 + 512, v4 + 4);
        goto LABEL_11;
      case 4u:
        v2 = Function_2230904(v4 + 956, v4 + 512, v4 + 4, 52);
        goto LABEL_11;
      case 5u:
        return 1;
      default:
LABEL_11:
        if ( v2 == 1 )
        {
          *(uint *)v4 = *(uchar *)(v4 + 517);
          *(uchar *)(v4 + 516) = *(uchar *)(v4 + 518);
          *(uint *)(v4 + 1236) = 4;
          *v3 = 1;
        }
        break;
    }
  }
  Function_222e21c(v4 + 4);
  return 0;
}

//----- (0222DEA4) --------------------------------------------------------
int __fastcall Function_64_222dea4(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  Function_222ec8c(v2 + 572, v2 + 512, v2 + 4);
  Function_222f40c(v2 + 632, v2 + 512, v2 + 4);
  Function_22305cc(v2 + 904, v2 + 512, v2 + 4);
  Function_2230678(v2 + 916, v2 + 512, v2 + 4);
  Function_2230a50(v2 + 956, v2 + 512, v2 + 4);
  Function_222e23c(v2 + 4);
  Function_222e060(v2 + 512);
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(52);
  UnloadOverlay(63, v3, v4, v5);
  return 1;
}

//----- (0222DF3C) --------------------------------------------------------
int __fastcall Function_222df3c(int a1)
{
  return Function_222e228(a1 + 4);
}

//----- (0222DF48) --------------------------------------------------------
int *__fastcall Function_222df48(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  Function_222e1a4(a1 + 4, a1 + 512, a2);
  Function_222ec94(v3 + 572, v3 + 512, v3 + 4, v2);
  Function_222f414(v3 + 632, v3 + 512, v3 + 4, v2);
  Function_22305d4(v3 + 904, v3 + 512, v3 + 4, v2);
  Function_2230680(v3 + 916, v3 + 512, v3 + 4, v2);
  Function_2230b1c(v3 + 956, v3 + 512, v3 + 4, v2);
  SetMainLoopFunctionCall((int)Function_222df3c, v3);
  return Function_20177a4();
}

//----- (0222DFD0) --------------------------------------------------------
int __fastcall Function_222dfd0(int a1)
{
  int v1;

  v1 = a1;
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  Function_222ee00(v1 + 572, v1 + 512, v1 + 4);
  Function_222f5f4(v1 + 632, v1 + 512, v1 + 4);
  Function_22305d8(v1 + 904, v1 + 512, v1 + 4);
  Function_2230804(v1 + 916, v1 + 512, v1 + 4);
  Function_2230ba0(v1 + 956, v1 + 512, v1 + 4);
  return Function_222e23c(v1 + 4);
}

//----- (0222E040) --------------------------------------------------------
int __fastcall Function_222e040(uint *a1, int a2, uint a3)
{
  uint *v3;
  uint v4;
  int result;

  v3 = a1;
  v4 = a3;
  *a1 = a2;
  a1[11] = Function_2023790(128, a3);
  result = Function_2023790(128, v4);
  v3[12] = result;
  return result;
}

//----- (0222E060) --------------------------------------------------------
uint __fastcall Function_222e060(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  Function_20237bc_FreeMsg(*(uint *)(a1 + 44), a2);
  return Function_20237bc_FreeMsg(*(uint *)(v2 + 48), v3);
}

//----- (0222E074) --------------------------------------------------------
int __fastcall Function_222e074(int result, char a2, char a3)
{
  *(uchar *)(result + 5) = a2;
  *(uchar *)(result + 6) = a3;
  return result;
}

//----- (0222E07C) --------------------------------------------------------
uint __fastcall Function_222e07c(uint result, int a2, int a3)
{
  uint v3;
  int v4;

  v3 = result;
  v4 = a3;
  if ( a2 )
    result = Function_2023810(*(ushort **)(result + 44), a2);
  if ( v4 )
    result = Function_2023810(*(ushort **)(v3 + 48), v4);
  return result;
}

//----- (0222E09C) --------------------------------------------------------
int __fastcall Function_222e09c(int *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint v9;
  int v10;
  uint v11;
  int v12;
  int *v14;
  int *v15;
  int v16;
  long long v17;
  char v18;
  int v19;
  int v20;

  v20 = a4;
  v15 = a1;
  v4 = a2;
  v16 = a3;
  v5 = LoadVariableAreaAdress_1d(*a1);
  Function_202ad28();
  HIDWORD(v17) = Function_20a471c(v6);
  LODWORD(v17) = v7;
  v8 = 0;
  while ( Function_202af78(v5, v8) )
  {
    if ( ++v8 >= 32 )
    {
      ErrorHandler();
      return 0;
    }
  }
  v10 = Function_2023b38(v4, &v19);
  v11 = v9;
  if ( v19 != 1 || v17 == __PAIR__(v10, v9) )
    return 1;
  Function_202ad28();
  if ( !Function_20a4118(v12, v10, v11) )
    return 1;
  if ( !Function_2039140(*v15, v10, v11, (int)&v18) )
    return 2;
  v14 = (int *)Function_202aed8(v5, v8);
  Function_20a474c(v14, v10, v11);
  Function_202af0c(v5, v8, v16);
  Function_202ae2c(v5, v8, 8u, 2);
  return 0;
}

//----- (0222E158) --------------------------------------------------------
int __fastcall Function_222e158(int result, int a2)
{
  *(uint *)(result + 52) = a2;
  *(uint *)(result + 56) = 1;
  return result;
}

//----- (0222E160) --------------------------------------------------------
int __fastcall Function_222e160(int result, char a2)
{
  *(uchar *)(result + 7) = a2;
  return result;
}

//----- (0222E164) --------------------------------------------------------
int __fastcall Function_222e164(int *a1)
{
  int *v1;
  int v2;
  int v3;
  int *v4;
  int result;

  v1 = a1;
  Call_FillMemWithValue(a1 + 2, 0, 0x24u);
  v2 = 0;
  v3 = LoadVariableAreaAdress_1d(*v1);
  v1[2] = 0;
  v4 = v1 + 2;
  do
  {
    result = Function_202af78(v3, v2);
    if ( result == 1 )
    {
      *((uchar *)v1 + v1[2] + 12) = v2;
      result = *v4 + 1;
      *v4 = result;
    }
    ++v2;
  }
  while ( v2 < 32 );
  return result;
}

//----- (0222E1A4) --------------------------------------------------------
int __fastcall Function_222e1a4(int a1, int a2, uint a3)
{
  int v3;
  int v4;
  uint v5;
  int v6;
  int v7;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  byte_21BF6E1 = 0;
  Function_201ffe8();
  *(uint *)(v3 + 400) = LoadFromNARC_8(89, v5, v6, v7);
  Function_222e270();
  Function_222e290(v3, v5);
  Function_222e3d8(v3, v5);
  Function_222e5d8(v3, v5);
  Function_222e620(v3, v4, v5);
  Function_222e9a4(v3, v5);
  Function_222e6d8(v3, v5);
  Function_201ff0c(0x10u, 1);
  Function_2002ac8(1);
  Function_2002ae4(0);
  return Function_2002b20(0);
}

//----- (0222E21C) --------------------------------------------------------
int __fastcall Function_222e21c(int a1)
{
  return Function_20219f8(*(uint *)(a1 + 4));
}

//----- (0222E228) --------------------------------------------------------
int __fastcall Function_222e228(int *a1)
{
  Function_201c2b8(*a1);
  Function_201dcac();
  return Function_200a858();
}

//----- (0222E23C) --------------------------------------------------------
uint __fastcall Function_222e23c(int a1)
{
  int v1;

  v1 = a1;
  Function_222ea0c();
  Function_222e71c(v1);
  Function_222e6b4(v1);
  Function_222e604(v1);
  Function_222e570(v1);
  Function_222e3ac(v1);
  return Call_FS_CloseFile(*(int **)(v1 + 400));
}

//----- (0222E270) --------------------------------------------------------
char *Function_222e270()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_223228C;
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

//----- (0222E290) --------------------------------------------------------
int __fastcall Function_222e290(int *a1, uint a2)
{
  uint v2;
  int *v3;
  int *v4;
  int *v5;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v2 = a2;
  v3 = a1;
  *a1 = Function_2018340(a2);
  v8 = 1;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  SetGraphicsModes(&v8);
  v4 = &dword_2232330[24];
  v5 = &dword_2232258;
  v7 = 0;
  do
  {
    Function_20183c4((uint *)*v3, *v5 & 0xFF, v4, 0);
    Function_2019690(*v5 & 0xFF, 32, 0, v2);
    Function_2019ebc((uint *)*v3, *v5 & 0xFF);
    v4 += 7;
    ++v5;
    ++v7;
  }
  while ( v7 < 5 );
  Function_2007130(v3[100], 0, 0, 0, 224, v2);
  Function_2007130(v3[100], 0, 4u, 0, 160, v2);
  Function_20070e8(v3[100], 0x12u, (uint *)*v3, 0, 0, 0, 0, v2);
  Function_20070e8(v3[100], 0x12u, (uint *)*v3, 2u, 0, 0, 0, v2);
  Function_20070e8(v3[100], 0xDu, (uint *)*v3, 4u, 0, 0, 0, v2);
  Function_200710c(v3[100], 0xCu, (uint *)*v3, 0, 0, 0, 0, v2);
  return Function_200710c(v3[100], 0xEu, (uint *)*v3, 4u, 0, 0, 0, v2);
}

//----- (0222E3AC) --------------------------------------------------------
int __fastcall Function_222e3ac(int *a1)
{
  int *v1;
  int *v2;
  int v3;
  int result;

  v1 = &dword_2232258;
  v2 = a1;
  v3 = 0;
  do
  {
    Function_2019044(*v2, *v1 & 0xFF);
    ++v3;
    ++v1;
  }
  while ( v3 < 5 );
  free(*v2);
  result = 0;
  *v2 = 0;
  return result;
}

//----- (0222E3D8) --------------------------------------------------------
int __fastcall Function_222e3d8(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int *v5;
  int v6;
  int v8;
  int v9;
  int v10;
  int v11;

  v2 = a2;
  v3 = a1;
  Function_20a7944();
  Function_201dbec(16, v2);
  Function_200a784(0, 126, 0, 30, 0, 0x7Eu, 0, 0x1Eu, v2);
  v8 = 64;
  v9 = 81920;
  v10 = 0;
  v11 = v2;
  Function_201e88c(&v8, 2097168, 2097168);
  Function_201f834(64, v2);
  Function_201e994();
  Function_201f8e4();
  *(uint *)(v3 + 4) = Function_20095c4(64, v3 + 80, v2, v4);
  Function_200a8b0(v3 + 8, &dword_2232460, 1, v3 + 80);
  v5 = 0;
  v6 = v3;
  do
  {
    *(uint *)(v6 + 376) = Function_2009714(64, v5, v2);
    v5 = (int *)((char *)v5 + 1);
    v6 += 4;
  }
  while ( (int)v5 < 4 );
  *(uint *)(v3 + 468) = Function_2009a4c(*(uint *)(v3 + 376), *(uint *)(v3 + 400), 0xFu, 0, 100, 1, v2);
  *(uint *)(v3 + 472) = Function_2009b04(*(uint *)(v3 + 380), *(uint *)(v3 + 400), 0, 0, 100, 1, 5, v2);
  *(uint *)(v3 + 476) = Function_2009bc4(*(uint *)(v3 + 384), *(uint *)(v3 + 400), 0x10u, 0, 100, 2u, v2);
  *(uint *)(v3 + 480) = Function_2009bc4(*(uint *)(v3 + 388), *(uint *)(v3 + 400), 0x11u, 0, 100, 3u, v2);
  if ( !Function_200a3dc(*(int **)(v3 + 468)) )
    ErrorHandler();
  if ( !Function_200a640(*(int **)(v3 + 472)) )
    ErrorHandler();
  Function_2009d4c(*(int **)(v3 + 468));
  Function_2009d4c(*(int **)(v3 + 472));
  return Function_20093b4(
           v3 + 432,
           100,
           100,
           100,
           100,
           -1,
           -1,
           0,
           0,
           *(uint *)(v3 + 376),
           *(uint *)(v3 + 380),
           *(uint *)(v3 + 384),
           *(uint *)(v3 + 388),
           0,
           0);
}

//----- (0222E570) --------------------------------------------------------
int *__fastcall Function_222e570(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v6;

  v6 = a1;
  Function_200a4e4(*(int **)(a1 + 468));
  Function_200a6dc(*(int **)(v6 + 472));
  v1 = v6;
  v2 = 0;
  do
  {
    Function_2009d68(*(int **)(v1 + 376), *(uint ***)(v1 + 468));
    ++v2;
    v1 += 4;
  }
  while ( v2 < 4 );
  v3 = v6;
  v4 = 0;
  do
  {
    Function_2009754(*(int **)(v3 + 376));
    ++v4;
    v3 += 4;
  }
  while ( v4 < 4 );
  Function_2021964(*(int **)(v6 + 4));
  Function_201e958();
  Function_201f8b4();
  Function_200a878();
  return Function_201dc3c();
}

//----- (0222E5D8) --------------------------------------------------------
int __fastcall Function_222e5d8(int a1, uint a2)
{
  uint v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a1;
  *(uint *)(a1 + 392) = Function_200b358(a2);
  result = LoadFromMsgNARC(0, 26, 675, v2);
  *(uint *)(v3 + 396) = result;
  return result;
}

//----- (0222E604) --------------------------------------------------------
uint __fastcall Function_222e604(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  Function_200b190(*(ushort **)(a1 + 396));
  return Function_200b3f0(*(uint **)(v1 + 392), v2);
}

//----- (0222E620) --------------------------------------------------------
int __fastcall Function_222e620(int a1, int *a2, uint a3)
{
  int v3;
  uint v4;
  ushort *v5;
  uchar v6;
  int result;

  v3 = a1;
  v4 = a3;
  v5 = (ushort *)LoadPlayerDataAdress(*a2);
  v6 = Function_2027b50(v5);
  LoadFromNARC_PlFont2(0, 224, v4);
  Function_200dd0c(*(uint **)v3, 1u, 10, 8, v6, v4);
  Function_200daa4(*(uint **)v3, 1u, 1, 9, 0, v4);
  Function_201a7a0(v3 + 404);
  Function_201a7e8(*(uint **)v3, v3 + 404, 1, 1, 0, 0x18u, 3u, 7, 40);
  *(uint *)(v3 + 420) = Function_2023790(128, v4);
  result = Function_2023790(128, v4);
  *(uint *)(v3 + 424) = result;
  return result;
}

//----- (0222E6B4) --------------------------------------------------------
uint __fastcall Function_222e6b4(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  Function_20237bc_FreeMsg(*(uint *)(a1 + 420), a2);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 424), v3);
  return Function_201a8fc(v2 + 404);
}

//----- (0222E6D8) --------------------------------------------------------
int __fastcall Function_222e6d8(int a1, int a2)
{
  char *v2;
  int v3;
  uint *v4;
  int v5;
  int result;
  int v7;
  int v8;

  v8 = a2;
  v2 = &byte_22321A0;
  v7 = a1;
  v3 = 0;
  v4 = (uint *)(a1 + 500);
  v5 = a1;
  do
  {
    result = Function_20071d0(*(uint *)(v7 + 400), (uchar)*v2, 0, v4, v8);
    *(uint *)(v5 + 492) = result;
    ++v3;
    ++v4;
    ++v2;
    v5 += 4;
  }
  while ( v3 < 2 );
  return result;
}

//----- (0222E71C) --------------------------------------------------------
uint __fastcall Function_222e71c(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = a1;
  v2 = 0;
  do
  {
    result = free(*(uint *)(v1 + 492));
    ++v2;
    v1 += 4;
  }
  while ( v2 < 2 );
  return result;
}

//----- (0222E738) --------------------------------------------------------
int __fastcall Function_222e738(int a1, uint a2)
{
  int v2;
  uint v3;
  int v4;

  v2 = a1;
  v3 = a2;
  if ( Function_201d724(*(uint *)(a1 + 428) & 0xFF) == 1 )
    Call_RemoveTextInterpreterTaskFromTaskList(*(uint *)(v2 + 428) & 0xFF);
  Function_201ada4_ClearTextBox(v2 + 404, 0);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v2 + 396), v3, *(ushort **)(v2 + 424));
  Function_200c388(*(uint **)(v2 + 392), *(uint *)(v2 + 420), *(uint *)(v2 + 424));
  v4 = *(uint *)(v2 + 420);
  *(uint *)(v2 + 428) = Function_201d78c(v2 + 404, 1);
  return Function_201a9a4(v2 + 404);
}

//----- (0222E7C8) --------------------------------------------------------
int __fastcall Function_222e7c8(int a1)
{
  int v1;

  v1 = a1;
  if ( Function_201d724(*(uint *)(a1 + 428) & 0xFF) == 1 )
    Call_RemoveTextInterpreterTaskFromTaskList(*(uint *)(v1 + 428) & 0xFF);
  return Function_201ad10(v1 + 404);
}

//----- (0222E7F8) --------------------------------------------------------
uint __fastcall Function_222e7f8(int a1, uint a2, int a3)
{
  int v3;
  uint v4;
  int v5;
  int v6;
  uint v7;
  int v8;
  int v9;
  int v10;

  v3 = a3;
  v4 = a2;
  v5 = a1;
  ll_udiv();
  Function_200b60c(*(uint *)(v5 + 392), 1u, v6, 4, 2, 1);
  ll_udiv();
  v9 = ull_mod(v7, v8, 10000LL);
  Function_200b60c(*(uint *)(v5 + 392), 2u, v9, 4, 2, 1);
  v10 = ull_mod(v4, v3, 10000LL);
  return Function_200b60c(*(uint *)(v5 + 392), 3u, v10, 4, 2, 1);
}

//----- (0222E880) --------------------------------------------------------
uint __fastcall Function_222e880(int a1, int a2, int a3, uint a4)
{
  int v4;
  uint v5;
  int v6;
  int v7;
  int *v8;
  ushort *v9;

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = LoadVariableAreaAdress_1d(a2);
  v8 = AllocTrainerData(v5);
  v9 = (ushort *)Function_202aef0(v7, v6);
  Function_2025ec0(v8, v9);
  Function_200b498(*(uint *)(v4 + 392), 0);
  return free((int)v8);
}

//----- (0222E8C0) --------------------------------------------------------
uint __fastcall Function_222e8c0(int a1, int a2, int a3, uint a4)
{
  int v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  ushort *v9;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = AllocTrainerData(a4);
  v8 = LoadVariableAreaAdress_1d(v5);
  v9 = (ushort *)Function_202af34(v8, v6);
  Function_2025ec0(v7, v9);
  Function_200b498(*(uint *)(v4 + 392), 0);
  return free((int)v7);
}

//----- (0222E8FC) --------------------------------------------------------
int __fastcall Function_222e8fc(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v3 = a1;
  v4 = a3;
  v5 = LoadVariableAreaAdress_1d(a2);
  v6 = 1;
  v7 = Function_202ad2c(v5, v4, 6u);
  if ( !v7 )
    v6 = 0;
  Function_200b60c(*(uint *)(v3 + 392), 2u, v7, 2, 0, 1);
  v8 = Function_202ad2c(v5, v4, 4u);
  Function_200b60c(*(uint *)(v3 + 392), 0, v8, 4, 0, 1);
  v9 = Function_202ad2c(v5, v4, 5u);
  Function_200c2e0(*(uint *)(v3 + 392), 1u, v9);
  return v6;
}

//----- (0222E970) --------------------------------------------------------
uint __fastcall Function_222e970(int a1, int a2)
{
  return Function_200b60c(*(uint *)(a1 + 392), 0, a2, 4, 1, 1);
}

//----- (0222E990) --------------------------------------------------------
ushort *__fastcall Function_222e990(int a1, uint a2)
{
  return Function_200c0b0(*(uint *)(a1 + 392), 0, a2);
}

//----- (0222E9A4) --------------------------------------------------------
int __fastcall Function_222e9a4(int a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  int *v5;
  int result;
  int v7;
  int v8;
  int v9;

  v8 = a2;
  v2 = &dword_22324A8;
  v7 = a1;
  v3 = a1;
  v4 = 0;
  v5 = &dword_22324A8;
  v9 = a1 + 432;
  do
  {
    *v2 = *(uint *)(v7 + 4);
    v2[1] = v9;
    v2[11] = v8;
    *(uint *)(v3 + 484) = Function_2021aa0((uint **)v5);
    Function_2021cc8(*(uint *)(v3 + 484), 1);
    Function_2021cac(*(uint *)(v3 + 484), 0);
    result = Function_2021d6c(*(uint *)(v3 + 484), v4++);
    v2 += 12;
    v5 += 12;
    v3 += 4;
  }
  while ( v4 < 2 );
  return result;
}

//----- (0222EA0C) --------------------------------------------------------
int __fastcall Function_222ea0c(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = 0;
  do
  {
    result = Function_2021bd4(*(uint *)(v1 + 484));
    ++v2;
    v1 += 4;
  }
  while ( v2 < 2 );
  return result;
}

//----- (0222EA28) --------------------------------------------------------
uint __fastcall Function_222ea28(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint result;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    result = Function_2021cac(*(uint *)(v2 + 484), v3);
    ++v4;
    v2 += 4;
  }
  while ( v4 < 2 );
  return result;
}

//----- (0222EA48) --------------------------------------------------------
uint __fastcall Function_222ea48(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint result;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    result = Function_2021cc8(*(uint *)(v2 + 484), v3);
    ++v4;
    v2 += 4;
  }
  while ( v4 < 2 );
  return result;
}

//----- (0222EA68) --------------------------------------------------------
int __fastcall Function_222ea68(int a1, int a2, int a3, int a4)
{
  return Function_222ec94(a1, a2, a3, a4);
}

//----- (0222EA70) --------------------------------------------------------
int __fastcall Function_222ea70(uint *a1, int a2, int a3, uint a4)
{
  int v4;
  uint v5;
  uint *v6;
  int v7;
  int *v9;
  int v10;
  ushort *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;

  v4 = a2;
  v5 = a4;
  v6 = a1;
  v7 = a3;
  switch ( *(uchar *)(a2 + 4) )
  {
    case 0:
      Function_222ee20();
      Function_200f174(0, 17, 17, 0, 6, 1, v5);
      *(uchar *)(v4 + 4) = 1;
      return 0;
    case 1:
      if ( Function_200f2ac() )
        *(uchar *)(v4 + 4) = 3;
      return 0;
    case 2:
      Function_222ee20();
      *(uchar *)(v4 + 4) = 3;
      return 0;
    case 3:
      v17 = Function_222ee84();
      if ( v17 != 1 )
        return 0;
      if ( Function_222f068(v6, v4) == 1 )
      {
        Function_222ef4c(v6, v4);
        if ( *v6 != 3 && *v6 != 1 )
        {
          Function_222ef64(v6, v7);
          return 1;
        }
        *(uchar *)(v4 + 4) = 4;
      }
      else if ( *v6 == 1 )
      {
        Function_222efbc(v6, v7, 53, v5);
        *(uchar *)(v4 + 4) = 10;
      }
      return 0;
    case 4:
      Function_200f174(0, 16, 16, 0, 6, 1, a4);
      ++*(uchar *)(v4 + 4);
      return 0;
    case 5:
      if ( Function_200f2ac() != 1 )
        return 0;
      return 1;
    case 6:
      Function_222ee20();
      Function_200f174(0, 17, 17, 0, 6, 1, v5);
      *(uchar *)(v4 + 4) = 7;
      return 0;
    case 7:
      if ( Function_200f2ac() )
      {
        v9 = AllocTrainerData(v5);
        v11 = (ushort *)Function_2023e2c(*(uint *)(v4 + 44), v10);
        Function_2025ec0(v9, v11);
        Function_200b498(*(uint *)(v7 + 392), 0);
        free((int)v9);
        v13 = Function_2023b38(*(uint *)(v4 + 48), &v17);
        if ( v17 )
        {
          Function_222e7f8(v7, v13, v12);
          Function_222efbc(v6, v7, 49, v5);
          *(uchar *)(v4 + 4) = 8;
        }
        else
        {
          Function_222efbc(v6, v7, 50, v5);
          *(uchar *)(v4 + 4) = 10;
        }
      }
      return 0;
    case 8:
      if ( Function_222f038() )
      {
        v6[11] = Function_2002100(*(uint **)v7, (uchar *)&dword_22321C4[1] + 2, 1, 9, v5);
        *(uchar *)(v4 + 4) = 9;
      }
      return 0;
    case 9:
      v14 = Function_2002114(a1[11], a4);
      if ( v14 == -2 )
      {
        Function_222f050(v6);
        *(uchar *)(v4 + 4) = 3;
      }
      else if ( v14 != -1 )
      {
        v16 = Function_222e09c((int *)v4, *(uint *)(v4 + 48), *(uint *)(v4 + 44), v15);
        if ( v16 )
        {
          Function_222efbc(v6, v7, *((uchar *)dword_22321A4 + v16), v5);
          *(uchar *)(v4 + 4) = 10;
        }
        else
        {
          Function_222f050(v6);
          *(uchar *)(v4 + 4) = 3;
        }
      }
      return 0;
    case 0xA:
      if ( Function_222f038() && dword_21BF6C4 & 1 )
      {
        Function_222f050(v6);
        *(uchar *)(v4 + 4) = 3;
      }
      return 0;
    default:
      return 0;
  }
}

//----- (0222EC8C) --------------------------------------------------------
int __fastcall Function_222ec8c(int a1, int a2, int a3)
{
  return Function_222ee00(a1, a2, a3);
}

//----- (0222EC94) --------------------------------------------------------
int __fastcall Function_222ec94(uint *a1, int *a2, int a3, uint a4)
{
  int *v4;
  ushort *v5;
  int v6;
  int *v7;
  char *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int result;
  uint *v14;
  int v15;
  uint v16;
  int v17;
  ushort *v18;
  int *v19;

  v14 = a1;
  v4 = a2;
  v15 = a3;
  v16 = a4;
  Function_201a7a0((int)(a1 + 1));
  Function_201a7e8(*(uint **)v15, (int)(v14 + 1), 3, 3, 4, 0x1Au, 0x14u, 7, 1);
  Function_201a7a0((int)(v14 + 7));
  Function_201a7e8(*(uint **)v15, (int)(v14 + 7), 1, 2, 19, 0x1Bu, 4u, 7, 112);
  Function_201ada4_ClearTextBox((int)(v14 + 1), 0);
  Function_201ada4_ClearTextBox((int)(v14 + 7), 0);
  v14[14] = Function_2023790(128, v16);
  v5 = (ushort *)LoadPlayerDataAdress(*v4);
  v14[13] = Function_2027ac0(v5);
  v6 = Function_2023790(128, v16);
  v18 = (ushort *)Function_2023790(128, v16);
  LoadTrainerDataAdress(*v4);
  Function_200b498(*(uint *)(v15 + 392), 0);
  v17 = 0;
  v7 = &dword_22321FC;
  v8 = &byte_223241C;
  v19 = &dword_2232424;
  do
  {
    Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v15 + 396), *(uchar *)v19, v18);
    Function_200c388(*(uint **)(v15 + 392), v6, (int)v18);
    Function_2002eec(0, v6, 0, 0xD0u);
    v9 = *v7;
    v10 = (uchar)*v8;
    Function_201d78c((int)(v14 + 1), 0);
    ++v7;
    v19 = (int *)((char *)v19 + 1);
    ++v8;
    ++v17;
  }
  while ( v17 < 4 );
  Function_20237bc_FreeMsg(v6, v11);
  Function_20237bc_FreeMsg((int)v18, v12);
  result = Function_20071d0(*(uint *)(v15 + 400), 1u, 0, v14 + 6, v16);
  v14[5] = result;
  return result;
}

//----- (0222EE00) --------------------------------------------------------
uint __fastcall Function_222ee00(int a1, int a2)
{
  int v2;

  v2 = a1;
  Function_20237bc_FreeMsg(*(uint *)(a1 + 56), a2);
  Function_201a8fc(v2 + 4);
  Function_201a8fc(v2 + 28);
  return free(*(uint *)(v2 + 20));
}

//----- (0222EE20) --------------------------------------------------------
int __fastcall Function_222ee20(int a1, int a2, int a3)
{
  int *v3;
  int v4;

  v3 = (int *)a3;
  v4 = a1;
  Function_222e738(a3, 0);
  Function_201a9a4(v4 + 4);
  Function_20198c0(
    *v3,
    2,
    *(uint *)(v4 + 24) + 12,
    0,
    0,
    (uint)**(ushort **)(v4 + 24) << 21 >> 24,
    (uint)*(ushort *)(*(uint *)(v4 + 24) + 2) << 21 >> 24);
  Function_201c63c(*v3, 2, 0, 0);
  Function_201c63c(*v3, 2, 3u, 0);
  Function_222ef08(v4, v3);
  return Function_201c3c0(*v3, 2);
}

//----- (0222EE84) --------------------------------------------------------
int __fastcall Function_222ee84(uint *a1, int a2, int *a3)
{
  uint *v3;
  int *v4;
  int v5;
  int result;

  v3 = a1;
  v4 = a3;
  v5 = 0;
  if ( dword_21BF6C4 & 1 )
  {
    Function_2005748(0x5DDu);
    result = 1;
  }
  else if ( dword_21BF6C4 & 2 )
  {
    Function_2005748(0x5DDu);
    *v3 = 3;
    result = 1;
  }
  else
  {
    if ( dword_21BF6C8 & 0x40 )
    {
      if ( *a1 )
      {
        --*a1;
        v5 = 1;
      }
    }
    else if ( dword_21BF6C8 & 0x80 && *a1 < 3u )
    {
      ++*a1;
      v5 = 1;
    }
    if ( v5 == 1 )
    {
      Function_2005748(0x5E5u);
      Function_222ef08(v3, v4);
      Function_201c3c0(*v4, 2);
    }
    result = 0;
  }
  return result;
}

//----- (0222EF08) --------------------------------------------------------
int __fastcall Function_222ef08(uint *a1, int *a2)
{
  char *v2;
  uint *v3;
  int *v4;
  int v5;
  int result;

  v2 = &byte_22321C2;
  v3 = a1;
  v4 = a2;
  v5 = 0;
  do
  {
    result = Function_2019e2c(*v4, 2, (uchar)*v2, (uchar)v2[1], 0x1Cu, 4u, *v3 == v5++);
    v2 += 2;
  }
  while ( v5 < 4 );
  return result;
}

//----- (0222EF4C) --------------------------------------------------------
int __fastcall Function_222ef4c(uint *a1, int a2)
{
  return Function_222e074(a2, *((uchar *)&dword_2232420 + *a1), 0);
}

//----- (0222EF64) --------------------------------------------------------
int __fastcall Function_222ef64(int a1, int a2)
{
  int *v2;
  int v3;

  v2 = (int *)a2;
  v3 = a1;
  Function_222e7c8(a2);
  Function_2019cb8(*v2, 2, 0, 0, 0, 0x20u, 0x18u, 0);
  Function_201c3c0(*v2, 2);
  Function_2019cb8(*v2, 3, 0, 0, 0, 0x20u, 0x18u, 0);
  Function_201c3c0(*v2, 3);
  return Function_201ad10(v3 + 4);
}

//----- (0222EFBC) --------------------------------------------------------
uint __fastcall Function_222efbc(uint *a1, int a2, uint a3, uint a4)
{
  uint *v4;
  int v5;
  uint v6;
  ushort *v7;
  int v8;
  int v9;
  int v10;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = (ushort *)Function_2023790(128, a4);
  Function_201ada4_ClearTextBox((int)(v4 + 7), 15);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v5 + 396), v6, v7);
  Function_200c388(*(uint **)(v5 + 392), v4[14], (int)v7);
  v8 = v4[13];
  v9 = v4[14];
  v4[12] = Function_201d78c((int)(v4 + 7), 1);
  Function_200e060((int)(v4 + 7), 1, 10, 8u);
  Function_201a9a4((int)(v4 + 7));
  return Function_20237bc_FreeMsg((int)v7, v10);
}

//----- (0222F038) --------------------------------------------------------
BOOL __fastcall Function_222f038(int a1)
{
  return Function_201d724(*(uint *)(a1 + 48) & 0xFF) == 0;
}

//----- (0222F050) --------------------------------------------------------
int __fastcall Function_222f050(int a1)
{
  int v1;

  v1 = a1;
  Function_200e084(a1 + 28, 1);
  return Function_201ad10(v1 + 28);
}

//----- (0222F068) --------------------------------------------------------
int __fastcall Function_222f068(uint *a1, int *a2)
{
  int v2;
  int v3;

  if ( *a1 != 1 )
    return 1;
  v2 = LoadVariableAreaAdress_1d(*a2);
  v3 = 0;
  do
  {
    if ( !Function_202af78(v2, v3) )
      return 1;
    ++v3;
  }
  while ( v3 < 32 );
  return 0;
}

//----- (0222F09C) --------------------------------------------------------
int __fastcall Function_222f09c(int a1, int *a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int v7;
  ushort *v8;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  v8 = (ushort *)LoadPlayerDataAdress(*a2);
  *(uint *)(v5 + 224) = Function_2027ac0(v8);
  return Function_222f414(v5, v4, v6, v7);
}

//----- (0222F0C4) --------------------------------------------------------
int __fastcall Function_222f0c4(short *a1, int a2, int a3, uint a4)
{
  int v4;
  short *v5;
  int v6;
  short v7;
  int v8;
  short v9;
  char v10;
  int result;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  uint v21;
  int v22;
  int v23;
  uint v24;
  int v25;

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v25 = a3;
  switch ( *(uchar *)(a2 + 4) )
  {
    case 0:
      *a1 = 0;
      a1[1] = 0;
      a1[2] = 0;
      a1[3] = 0;
      goto LABEL_3;
    case 1:
LABEL_3:
      Function_222e164((int *)a2);
      Function_222f668(v5, v4, v25, v6);
      *(uchar *)(v4 + 4) = 2;
      goto LABEL_46;
    case 2:
      switch ( (uchar)Function_222f798() )
      {
        case 0u:
          goto LABEL_46;
        case 1u:
          v7 = *v5;
          v5[1] = *v5;
          *v5 = v7 - 1;
          v8 = *v5;
          if ( v8 < 0 )
            *v5 = v8 + 4;
          Function_222fe5c(v5, v4, 2);
          break;
        case 2u:
          v9 = *v5;
          v5[1] = *v5;
          *v5 = ((uint)(v9 + 1) >> 31) + __ROR4__(((v9 + 1) << 30) - ((uint)(v9 + 1) >> 31), 30);
          Function_222fe5c(v5, v4, 3);
          break;
        case 3u:
          *(uchar *)(v4 + 4) = 23;
          break;
        case 4u:
          *(uchar *)(v4 + 4) = 5;
          break;
      }
      goto LABEL_46;
    case 3:
      Function_222f8f8();
      *(uchar *)(v4 + 4) = 4;
      goto LABEL_46;
    case 4:
      if ( Function_222f948() == 1 )
        *(uchar *)(v4 + 4) = 2;
      goto LABEL_46;
    case 5:
      v10 = Function_222ff38(a1);
      Function_222e160(v4, v10);
      Function_222fa70(v5, v4, v25, v6);
      *(uchar *)(v4 + 4) = 6;
      goto LABEL_46;
    case 6:
      *(uchar *)(a2 + 4) = Function_222fb24();
      goto LABEL_46;
    case 7:
      *((uint *)a1 + 65) = 4;
      *(uchar *)(a2 + 4) = 8;
      goto LABEL_46;
    case 8:
      if ( --*((uint *)a1 + 65) > 0 )
        goto LABEL_46;
      Function_222f6e8(a1, a2, a3);
      Function_222e074(v4, 4, 0);
      return 1;
    case 9:
      *a1 = *(char *)(a2 + 7) / 8;
      a1[2] = ((uint)*(char *)(a2 + 7) >> 31)
            + __ROR4__((*(char *)(a2 + 7) << 29) - ((uint)*(char *)(a2 + 7) >> 31), 29);
      *(uchar *)(a2 + 4) = 1;
      goto LABEL_46;
    case 0xA:
      Function_200f174(0, 16, 16, 0, 6, 1, a4);
      v12 = Function_222ff38(v5);
      v13 = LoadVariableAreaAdress_1d(*(uint *)v4);
      v14 = Function_202aef0(v13, *(uchar *)(v4 + v12 + 12));
      Function_222e158(v4, v14);
      *(uchar *)(v4 + 4) = 11;
      goto LABEL_46;
    case 0xB:
      if ( !Function_200f2ac() )
        goto LABEL_46;
      Function_222f6e8(v5, v4, v25);
      Function_222e074(v4, 2, 4);
      return 1;
    case 0xC:
      v15 = Function_222ff38(a1);
      v16 = LoadVariableAreaAdress_1d(*(uint *)v4);
      Function_202af0c(v16, *(uchar *)(v4 + v15 + 12), *(uint *)(v4 + 44));
      goto LABEL_24;
    case 0xD:
LABEL_24:
      Function_222f668(v5, v4, v25, v6);
      Function_200f174(0, 17, 17, 0, 6, 1, v6);
      *(uchar *)(v4 + 4) = 14;
      goto LABEL_46;
    case 0xE:
      if ( Function_200f2ac() )
        *(uchar *)(v4 + 4) = 2;
      goto LABEL_46;
    case 0xF:
      Function_222fc1c();
      *(uchar *)(v4 + 4) = 16;
      goto LABEL_46;
    case 0x10:
      if ( Function_222fc48() == 1 )
        *(uchar *)(v4 + 4) = 17;
      goto LABEL_46;
    case 0x11:
      v17 = Function_2002114(*((uint *)a1 + 64), a4);
      if ( v17 == -2 )
      {
        Function_222ff18(v5);
        Function_222ea28(v25, 1);
        *(uchar *)(v4 + 4) = 2;
      }
      else if ( v17 != -1 )
      {
        Function_222ff18(v5);
        *(uchar *)(v4 + 4) = 18;
      }
      goto LABEL_46;
    case 0x12:
      Function_222ff5c();
      *(uchar *)(v4 + 4) = 19;
      goto LABEL_46;
    case 0x13:
      if ( Function_2230008() == 1 )
      {
        v18 = LoadVariableAreaAdress_1d(*(uint *)v4);
        v19 = Function_222ff38(v5);
        Function_202afd4(v18, *(uchar *)(v4 + 12 + v19), v20, v21);
        v22 = LoadVariableAreaAdress_17(*(uint *)v4);
        Function_2030788(v22, *(uchar *)(v4 + 12 + v19), v23, v24);
        Function_222e164((int *)v4);
        Function_222fc80(v5, v4, v25, *v5, v5[2], 0, v6);
        Function_222ea28(v25, 1);
        *(uchar *)(v4 + 4) = 20;
      }
      goto LABEL_46;
    case 0x14:
      Function_2230044();
      *(uchar *)(v4 + 4) = 2;
      goto LABEL_46;
    case 0x15:
      if ( Function_222fba4() == 1 )
      {
        *(uchar *)(v4 + 4) = 22;
      }
      else
      {
        Function_222ea28(v25, 1);
        *(uchar *)(v4 + 4) = 2;
      }
      goto LABEL_46;
    case 0x16:
      if ( Function_222fefc() && dword_21BF6C4 )
      {
        Function_222ea28(v25, 1);
        *(uchar *)(v4 + 4) = 2;
        Function_222ff18(v5);
      }
      goto LABEL_46;
    case 0x17:
      ((void (*)(void))Function_222f6e8)();
      Function_222e074(v4, 0, 2);
      result = 1;
      break;
    default:
LABEL_46:
      result = 0;
      break;
  }
  return result;
}

//----- (0222F40C) --------------------------------------------------------
int __fastcall Function_222f40c(int a1, int a2, int a3)
{
  return Function_222f5f4(a1, a2, a3);
}

//----- (0222F414) --------------------------------------------------------
uint __fastcall Function_222f414(uint *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  short *v10;
  int *v11;
  int v12;
  ushort *v13;
  int v14;
  uint *v15;
  int *v16;
  int v17;
  uint *v19;
  uint v20;
  int v21;
  int *v22;
  int v23;
  int v24;
  int v25;
  uint v26;
  int v27;

  v27 = a4;
  v4 = dword_22322B4;
  v5 = a3;
  v20 = a4;
  v19 = a1;
  v6 = &v24;
  v7 = 6;
  do
  {
    v8 = *v4;
    v9 = v4[1];
    v4 += 2;
    *v6 = v8;
    v6[1] = v9;
    v6 += 2;
    --v7;
  }
  while ( v7 );
  v10 = &word_22321BC;
  v11 = &dword_223221C;
  v23 = 0;
  v12 = (int)(v19 + 2);
  do
  {
    Function_2230074(v12, v5, v11, (ushort)*v10, v20);
    ++v10;
    v11 = (int *)((char *)v11 + 6);
    v12 += 56;
    ++v23;
  }
  while ( v23 < 3 );
  v19[45] = ((int (__fastcall *)(uint, uint, int, uint))dword_221F800[11672])(
              *(uint *)(v5 + 4),
              0,
              16,
              v20);
  ((void (__fastcall *)(uint, int, int, uint))dword_221F800[11787])(v19[45], 1, 2, v20);
  Function_201a7a0((int)(v19 + 46));
  Function_201a7e8(*(uint **)v5, (int)(v19 + 46), 1, 13, 21, 8u, 3u, 7, 112);
  Function_201ada4_ClearTextBox((int)(v19 + 46), 0);
  v13 = (ushort *)Function_2023790(128, v20);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v5 + 396), 7u, v13);
  Function_2002eec(0, (int)v13, 0, 0x40u);
  Function_201d78c((int)(v19 + 46), 0);
  Function_20237bc_FreeMsg((int)v13, v14);
  Function_201a7a0((int)(v19 + 57));
  Function_201a7e8(*(uint **)v5, (int)(v19 + 57), 1, 16, 9, 0xFu, 8u, 7, 136);
  Function_201ada4_ClearTextBox((int)(v19 + 57), 0);
  v21 = 0;
  v15 = v19;
  v22 = dword_22322E4;
  do
  {
    v16 = v22;
    v15[61] = Function_2013a04(4u, v20);
    v17 = 0;
    do
    {
      Function_2013a4c((uint *)v15[61], *(ushort ***)(v5 + 396), *v16, v16[1]);
      ++v17;
      v16 += 2;
    }
    while ( v17 < 4 );
    ++v15;
    v22 += 8;
    ++v21;
  }
  while ( v21 < 2 );
  Function_201a7a0((int)(v19 + 50));
  Function_201a7e8(*(uint **)v5, (int)(v19 + 50), 1, 2, 19, 0x1Bu, 4u, 7, 256);
  Function_201ada4_ClearTextBox((int)(v19 + 50), 15);
  v19[54] = Function_2023790(128, v20);
  v24 = *(uint *)(v5 + 4);
  v25 = v5 + 432;
  v26 = v20;
  v19[66] = Function_2021aa0((uint **)&v24);
  return Function_2021cac(v19[66], 0);
}

//----- (0222F5F4) --------------------------------------------------------
int __fastcall Function_222f5f4(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int result;

  v3 = a1;
  v4 = a3;
  Function_2021bd4(*(uint *)(a1 + 264));
  Function_201a8fc(v3 + 200);
  Function_20237bc_FreeMsg(*(uint *)(v3 + 216), v5);
  v6 = 0;
  v7 = v3;
  do
  {
    Function_2013a3c(*(int **)(v7 + 244));
    ++v6;
    v7 += 4;
  }
  while ( v6 < 2 );
  Function_201a8fc(v3 + 228);
  Function_201a8fc(v3 + 184);
  ((void (__fastcall *)(uint))dword_221F800[11806])(*(uint *)(v3 + 180));
  ((void (__fastcall *)(uint))dword_221F800[11717])(*(uint *)(v3 + 180));
  v8 = 0;
  v9 = v3 + 8;
  do
  {
    result = Function_22300d8(v9, v4);
    ++v8;
    v9 += 56;
  }
  while ( v8 < 3 );
  return result;
}

//----- (0222F668) --------------------------------------------------------
int __fastcall Function_222f668(short *a1, int a2, int a3, int a4)
{
  int *v4;
  short *v5;
  int v6;
  int v7;

  v4 = (int *)a3;
  v5 = a1;
  v6 = a2;
  v7 = a4;
  Function_222e738(a3, 5u);
  Function_20198e8(
    *v4,
    0,
    11,
    20,
    0xAu,
    4u,
    v4[126] + 12,
    6u,
    0,
    (uint)*(ushort *)v4[126] << 21 >> 24,
    (uint)*(ushort *)(v4[126] + 2) << 21 >> 24);
  Function_201a9a4((int)(v5 + 92));
  Function_201c3c0(*v4, 0);
  Function_222ea28((int)v4, 1);
  return Function_222fc80(v5, v6, v4, *v5, v5[2], 0, v7);
}

//----- (0222F6E8) --------------------------------------------------------
int __fastcall Function_222f6e8(int a1, int a2, int a3)
{
  int *v3;
  int v4;
  int v5;
  int v6;

  v3 = (int *)a3;
  v4 = a1;
  Function_222e7c8(a3);
  Function_201ad10(v4 + 184);
  v5 = 0;
  v6 = v4 + 8;
  do
  {
    Function_2230240(v6, v3, v3 + 123);
    ++v5;
    v6 += 56;
  }
  while ( v5 < 3 );
  Function_222ea28((int)v3, 0);
  Function_20198e8(
    *v3,
    0,
    11,
    20,
    0xAu,
    4u,
    v3[126] + 12,
    0,
    8u,
    (uint)*(ushort *)v3[126] << 21 >> 24,
    (uint)*(ushort *)(v3[126] + 2) << 21 >> 24);
  Function_20198e8(
    *v3,
    0,
    22,
    0,
    9u,
    3u,
    v3[126] + 12,
    0x10u,
    0,
    (uint)*(ushort *)v3[126] << 21 >> 24,
    (uint)*(ushort *)(v3[126] + 2) << 21 >> 24);
  return Function_201c3c0(*v3, 0);
}

//----- (0222F798) --------------------------------------------------------
int __fastcall Function_222f798(short *a1, int a2, int a3)
{
  int v3;
  short *v4;
  int v5;
  int v6;
  int result;
  int v8;
  int v9;
  int v10;
  short v11;

  v4 = a1;
  v5 = a3;
  if ( dword_21BF6C4 & 1 )
  {
    v6 = a1[2];
    if ( v6 == 8 )
    {
      Function_2005748(0x5DDu);
      result = 3;
    }
    else
    {
      result = 0;
      if ( *(uint *)(a2 + 8) > (uint)(v6 + 8 * *v4) )
      {
        Function_2005748(0x5DDu);
        result = 4;
      }
    }
  }
  else if ( dword_21BF6C4 & 2 )
  {
    Function_2005748(0x5DDu);
    result = 3;
  }
  else
  {
    v8 = a1[2];
    v9 = 0;
    v10 = 0;
    v11 = a1[2];
    if ( dword_21BF6C8 & 0x40 )
    {
      if ( v8 == 8 )
      {
        v9 = 1;
        a1[2] = a1[3];
        Function_222ea28(a3, 1);
      }
      else if ( v8 >= 4 )
      {
        if ( v8 > 4 )
        {
          a1[2] = v8 - 1;
          v9 = 1;
        }
      }
      else if ( v8 > 0 )
      {
        a1[2] = v8 - 1;
        v9 = 1;
      }
    }
    else if ( dword_21BF6C8 & 0x80 )
    {
      if ( v8 != 3 && v8 != 7 )
      {
        if ( v8 >= 4 )
        {
          if ( v8 < 7 )
          {
            a1[2] = v8 + 1;
            v9 = 1;
          }
        }
        else if ( v8 < 3 )
        {
          a1[2] = v8 + 1;
          v9 = 1;
        }
      }
      else
      {
        a1[2] = 8;
        v9 = 1;
        Function_222ea28(a3, 0);
      }
    }
    else if ( dword_21BF6C8 & 0x20 )
    {
      if ( v8 != 8 )
      {
        if ( v8 >= 4 )
        {
          a1[2] = v8 - 4;
          v9 = 1;
        }
        else
        {
          v9 = 1;
          a1[2] = v8 + 4;
          v10 = 1;
          v3 = 2;
        }
      }
    }
    else if ( dword_21BF6C8 & 0x10 && v8 != 8 )
    {
      if ( v8 >= 4 )
      {
        v9 = 1;
        a1[2] = v8 - 4;
        v10 = 1;
        v3 = 3;
      }
      else
      {
        a1[2] = v8 + 4;
        v9 = 1;
      }
    }
    if ( v10 == 1 )
    {
      if ( v3 == 2 )
        result = 1;
      else
        result = 2;
    }
    else
    {
      if ( v9 == 1 )
      {
        Function_2005748(0x5E5u);
        Function_2230130(v4 + 4, v5, v4[2]);
        v4[3] = v11;
      }
      result = 0;
    }
  }
  return result;
}

//----- (0222F8F8) --------------------------------------------------------
int __fastcall Function_222f8f8(short *a1, int a2, int a3, int a4)
{
  short *v4;
  int v5;
  int v6;

  v4 = a1;
  v5 = a3;
  if ( a1[89] == 2 )
    v6 = 2;
  else
    v6 = 1;
  Function_222fc80(a1, a2, v5, *a1, a1[2], v6, a4);
  Function_2230130(v4 + 4, v5, 10);
  Function_222ea48(v5, 0);
  return Function_2005748(0x5E1u);
}

//----- (0222F948) --------------------------------------------------------
int __fastcall Function_222f948(short *a1, int a2, int *a3, int a4)
{
  short *v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  int result;
  int v10;
  uint v11;
  int v12;
  void (__fastcall *v13)(short *, int *, uint, uint);
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;

  v19 = a4;
  v4 = a1;
  v5 = a1[88];
  v14 = a2;
  v6 = a3;
  v7 = a4;
  if ( v5 < 12 )
  {
    v10 = s32_div_f(v5 << 8, 12);
    if ( v4[89] == 2 )
      v10 = -v10;
    Function_201c63c(*v6, 2, 0, v10);
    Function_201c63c(*v6, 3, 0, v10);
    v16 = 0x100000;
    v17 = 1044480;
    v18 = 786432;
    v15 = v10 << 12;
    Function_20230e0(v6 + 2, &v15);
    v11 = v4[88];
    s32_div_f(v11, 3);
    if ( v12 )
    {
      v13 = (void (__fastcall *)(short *, int *, uint, uint))*(&off_2232440 + s32_div_f(v11, 3));
      if ( v13 )
        v13(v4, v6, *v4, v4[1]);
    }
    ++v4[88];
    result = 0;
  }
  else
  {
    Function_201c63c(*a3, 2, 0, 0);
    Function_201c63c(*v6, 3, 0, 0);
    v15 = 0;
    v16 = 0x100000;
    v17 = 1044480;
    v18 = 786432;
    Function_20230e0(v6 + 2, &v15);
    if ( v4[89] == 2 )
      v8 = 2;
    else
      v8 = 1;
    Function_2230240(&v4[28 * v8 + 4], v6, v6 + 123);
    Function_222fc80(v4, v14, v6, *v4, v4[2], 0, v7);
    Function_222ea48((int)v6, 1);
    result = 1;
  }
  return result;
}

//----- (0222FA70) --------------------------------------------------------
uint __fastcall Function_222fa70(uint *a1, int *a2, int a3, uint a4)
{
  int *v4;
  uint *v5;
  uint v6;
  int v7;
  int v8;
  int v9;
  int v11;
  int v12;
  int v13;
  int (*v14)();
  int v15;
  uint *v16;
  int v17;
  int v18;
  int v19;
  int v20;

  v4 = a2;
  v5 = a1;
  v11 = a3;
  v6 = a4;
  v7 = LoadVariableAreaAdress_1d(*a2);
  v8 = Function_222ff38(v5);
  v12 = v8;
  v9 = Function_202ad2c(v7, *((uchar *)v4 + v8 + 12), 8u);
  v13 = 0;
  v14 = Function_222ff48;
  v15 = 0;
  v16 = 0;
  v17 = 262148;
  v18 = 268437504;
  v19 = 8388655;
  v20 = 0;
  if ( v9 == 2 )
    v13 = v5[62];
  else
    v13 = v5[61];
  v16 = v5 + 57;
  v5[63] = Function_200112c(&v13, 0, 0, (uchar)v6);
  Function_200dc48((int)(v5 + 57), 1, 1, 9u);
  Function_201a9a4((int)(v5 + 57));
  Function_222e880(v11, *v4, *((uchar *)v4 + v12 + 12), v6);
  Function_222fe70(v5, v11, 12, v6);
  return Function_222ea28(v11, 0);
}

//----- (0222FB24) --------------------------------------------------------
int __fastcall Function_222fb24(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v6;

  v3 = a1;
  v4 = a3;
  if ( !Function_222fefc() )
    return 6;
  v6 = Function_2001288(*(uint *)(v3 + 252));
  if ( v6 == -2 )
  {
    Function_2005748(0x5DCu);
    Function_222ea28(v4, 1);
    v6 = 2;
  }
  else
  {
    if ( v6 == -1 )
      return 6;
    Function_2005748(0x5DCu);
  }
  Function_222ff18(v3);
  Function_200dc9c(v3 + 228, 1);
  Function_201ad10(v3 + 228);
  Function_2001384(*(uint *)(v3 + 252), 0, 0);
  if ( v6 == 2 )
    Function_222ea28(v4, 1);
  return v6;
}

//----- (0222FBA4) --------------------------------------------------------
int __fastcall Function_222fba4(int a1, int *a2, int a3, uint a4)
{
  int *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint *v9;
  long long v10;
  int v12;
  uint v13;
  int v14;
  uint v15;

  v4 = a2;
  v12 = a1;
  v5 = a3;
  v13 = a4;
  v6 = LoadVariableAreaAdress_1d(*a2);
  v7 = Function_222ff38(v12);
  v8 = v7;
  v9 = (uint *)Function_202aed8(v6, *((uchar *)v4 + v7 + 12));
  v10 = Function_20a4670(v9);
  v14 = HIDWORD(v10);
  v15 = v10;
  if ( !v10 )
    return 0;
  Function_2005748(0x5DDu);
  Function_222e7f8(v5, v15, v14);
  Function_222e880(v5, *v4, *((uchar *)v4 + v8 + 12), v13);
  Function_222fe70(v12, v5, 55, v13);
  return 1;
}

//----- (0222FC1C) --------------------------------------------------------
int __fastcall Function_222fc1c(int a1, int *a2, int a3, uint a4)
{
  int v4;
  int *v5;
  int v6;
  uint v7;
  int v8;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = Function_222ff38(a1);
  Function_222e880(v6, *v5, *((uchar *)v5 + v8 + 12), v7);
  return Function_222fe70(v4, v6, 52, v7);
}

//----- (0222FC48) --------------------------------------------------------
int __fastcall Function_222fc48(int a1, int a2, uint **a3, uint a4)
{
  int v4;
  uint **v5;
  uint v6;

  v4 = a1;
  v5 = a3;
  v6 = a4;
  if ( !Function_222fefc() )
    return 0;
  *(uint *)(v4 + 256) = Function_2002100(*v5, (uchar *)&dword_22321C4[1] + 2, 1, 9, v6);
  return 1;
}

//----- (0222FC80) --------------------------------------------------------
int __fastcall Function_222fc80(ushort *a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  ushort *v7;
  int v8;
  int v9;
  int v11;

  v11 = a2;
  v7 = a1;
  v8 = a3;
  v9 = a4;
  if ( !a6 )
  {
    *a1 = a4;
    a1[2] = a5;
    Function_222fcf0();
  }
  Function_22300e4(&v7[28 * a6 + 4], v8, v8 + 492);
  Function_22301b4(&v7[28 * a6 + 4], v11, v8, *((uint *)v7 + 45), v8 + 492, v11 + 8, v9, a7);
  return Function_2230130(&v7[28 * a6 + 4], v8, a5);
}

//----- (0222FCF0) --------------------------------------------------------
int __fastcall Function_222fcf0(int a1, int *a2, int a3)
{
  int *v3;
  int v4;

  v3 = a2;
  v4 = a3;
  Function_20198e8(
    *a2,
    0,
    22,
    0,
    9u,
    3u,
    a2[126] + 12,
    0,
    4u,
    (uint)*(ushort *)a2[126] << 21 >> 24,
    (uint)*(ushort *)(a2[126] + 2) << 21 >> 24);
  Function_20198e8(
    *v3,
    0,
    (2 * v4 + 23) & 0xFF,
    1,
    1u,
    1u,
    v3[126] + 12,
    3u,
    *((uchar *)&dword_2232428 + v4),
    (uint)*(ushort *)v3[126] << 21 >> 24,
    (uint)*(ushort *)(v3[126] + 2) << 21 >> 24);
  return Function_201c3c0(*v3, 0);
}

//----- (0222FD7C) --------------------------------------------------------
int __fastcall Function_222fd7c(int a1, int *a2, int a3, int a4)
{
  int *v4;

  v4 = a2;
  Function_20198e8(
    *a2,
    0,
    (2 * a4 + 23) & 0xFF,
    1,
    1u,
    1u,
    a2[126] + 12,
    4u,
    *((uchar *)&dword_2232428 + a4),
    (uint)*(ushort *)a2[126] << 21 >> 24,
    (uint)*(ushort *)(a2[126] + 2) << 21 >> 24);
  return Function_201c3c0(*v4, 0);
}

//----- (0222FDD0) --------------------------------------------------------
int __fastcall Function_222fdd0(int a1, int *a2, int a3)
{
  int *v3;
  int v4;

  v3 = a2;
  v4 = a3;
  Function_20198e8(
    *a2,
    0,
    22,
    0,
    9u,
    3u,
    a2[126] + 12,
    0,
    4u,
    (uint)*(ushort *)a2[126] << 21 >> 24,
    (uint)*(ushort *)(a2[126] + 2) << 21 >> 24);
  Function_20198e8(
    *v3,
    0,
    (2 * v4 + 23) & 0xFF,
    1,
    1u,
    1u,
    v3[126] + 12,
    3u,
    *((uchar *)&dword_2232428 + v4),
    (uint)*(ushort *)v3[126] << 21 >> 24,
    (uint)*(ushort *)(v3[126] + 2) << 21 >> 24);
  return Function_201c3c0(*v3, 0);
}

//----- (0222FE5C) --------------------------------------------------------
ushort *__fastcall Function_222fe5c(int a1, int a2, short a3)
{
  ushort *result;

  *(uchar *)(a2 + 4) = 3;
  *(ushort *)(a1 + 178) = a3;
  result = (ushort *)(a1 + 176);
  *result = 0;
  return result;
}

//----- (0222FE70) --------------------------------------------------------
uint __fastcall Function_222fe70(int *a1, int a2, uint a3, uint a4)
{
  int *v4;
  int v5;
  uint v6;
  uint v7;
  ushort *v8;
  int v9;
  int v10;
  int v11;

  v4 = a1;
  v5 = a2;
  v6 = a4;
  v7 = a3;
  Function_201ada4_ClearTextBox((int)(a1 + 50), 15);
  v8 = (ushort *)Function_2023790(128, v6);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v5 + 396), v7, v8);
  Function_200c388(*(uint **)(v5 + 392), v4[54], (int)v8);
  v9 = v4[56];
  v10 = v4[54];
  v4[55] = Function_201d78c((int)(v4 + 50), 1);
  Function_200e060((int)(v4 + 50), 1, 10, 8u);
  Function_201a9a4((int)(v4 + 50));
  return Function_20237bc_FreeMsg((int)v8, v11);
}

//----- (0222FEFC) --------------------------------------------------------
BOOL __fastcall Function_222fefc(int a1)
{
  return Function_201d724(*(uint *)(a1 + 220) & 0xFF) == 0;
}

//----- (0222FF18) --------------------------------------------------------
int __fastcall Function_222ff18(int a1)
{
  int v1;

  v1 = a1;
  Function_200e084(a1 + 200, 1);
  Function_201ad10(v1 + 200);
  return Function_201a9a4(v1 + 184);
}

//----- (0222FF38) --------------------------------------------------------
int __fastcall Function_222ff38(short *a1)
{
  return 8 * *a1 + a1[2];
}

//----- (0222FF48) --------------------------------------------------------
int __fastcall Function_222ff48(int a1, int a2, int a3)
{
  int result;

  if ( !a3 )
    result = Function_2005748(0x5DCu);
  return result;
}

//----- (0222FF5C) --------------------------------------------------------
int __fastcall Function_222ff5c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v8;
  int v9;
  int v10;

  v10 = a4;
  v4 = a1;
  Function_2021cac(*(uint *)(a1 + 264), 1);
  Function_2021d6c(*(uint *)(v4 + 264), 2u);
  *(uint *)(v4 + 268) = 0;
  Function_2021cc8(*(uint *)(v4 + 264), 1);
  v5 = 6 * *(short *)(v4 + 4);
  v8 = 8 * word_2232324[v5];
  v6 = 8 * word_2232326[v5] + 252;
  v8 <<= 12;
  v9 = v6 << 12;
  Function_2021c50(*(uint **)(v4 + 264), &v8);
  WIN_OUT = WIN_OUT & 0xC0FF | 0x700;
  WIN_OUT = WIN_OUT & 0xFFC0 | 0x3F;
  REG_DISPCNT = REG_DISPCNT & 0xFFFF1FFF | 0x8000;
  return Function_2005748(0x629u);
}

//----- (02230008) --------------------------------------------------------
int __fastcall Function_2230008(int a1)
{
  int v1;
  uint v3;

  v1 = a1;
  if ( !Function_2021fd0(*(uint *)(a1 + 264)) )
    return 1;
  v3 = Function_2021e74(*(uint *)(v1 + 264));
  if ( v3 - *(uint *)(v1 + 268) >= 2 )
  {
    *(uint *)(v1 + 268) = v3;
    Function_2005748(0x629u);
  }
  return 0;
}

//----- (02230044) --------------------------------------------------------
uint __fastcall Function_2230044(int a1)
{
  int v1;

  v1 = a1;
  REG_DISPCNT &= 0xFFFF1FFF;
  Function_2021cac(*(uint *)(a1 + 264), 0);
  return Function_2021cc8(*(uint *)(v1 + 264), 0);
}

//----- (02230074) --------------------------------------------------------
int __fastcall Function_2230074(short *a1, uint **a2, short *a3, short a4)
{
  short *v4;
  short *v5;
  uint **v6;
  short v7;
  int v8;
  int v9;

  v4 = a3;
  v5 = a1;
  v6 = a2;
  v7 = a4;
  *a1 = *a3;
  a1[1] = a3[1];
  a1[2] = a3[2];
  Function_201a7a0((int)(a1 + 4));
  v8 = v4[1];
  if ( v8 < 0 )
    v8 = -v8;
  v9 = *v4;
  if ( v9 < 0 )
    v9 = -v9;
  return Function_201a7e8(*v6, (int)(v5 + 4), 3, v9 + 4, v8 + 4, 0x1Au, 0x11u, 7, v7);
}

//----- (022300D8) --------------------------------------------------------
uint __fastcall Function_22300d8(int a1)
{
  return Function_201a8fc(a1 + 8);
}

//----- (022300E4) --------------------------------------------------------
int __fastcall Function_22300e4(short *a1, int *a2, int a3)
{
  int *v3;
  int v4;
  int v5;

  v3 = a2;
  v4 = a1[1];
  if ( v4 < 0 )
    v4 = -v4;
  v5 = *a1;
  if ( v5 < 0 )
    v5 = -v5;
  Function_20198c0(
    *a2,
    2,
    *(uint *)(a3 + 8) + 12,
    (uchar)v5,
    v4,
    (uint)**(ushort **)(a3 + 8) << 21 >> 24,
    (uint)*(ushort *)(*(uint *)(a3 + 8) + 2) << 21 >> 24);
  return Function_201c3c0(*v3, 2);
}

//----- (02230130) --------------------------------------------------------
int __fastcall Function_2230130(short *a1, int *a2, int a3)
{
  short *v3;
  short *v4;
  int v5;
  uchar v6;
  int v7;
  int v8;
  int *v10;
  int v11;

  v3 = word_2232324;
  v4 = a1;
  v10 = a2;
  v11 = a3;
  v5 = 0;
  do
  {
    if ( v11 == v5 )
      v6 = 6;
    else
      v6 = 0;
    v7 = v4[1];
    if ( v7 < 0 )
      v7 = -v7;
    v8 = *v4;
    if ( v8 < 0 )
      v8 = -v8;
    Function_2019e2c(
      *v10,
      *((uint *)v3 + 2) & 0xFF,
      (*v3 + v8) & 0xFF,
      (v3[1] + v7) & 0xFF,
      *((uchar *)v3 + 4),
      *((uchar *)v3 + 5),
      v6);
    ++v5;
    v3 += 6;
  }
  while ( v5 < 9 );
  Function_201c3c0(*v10, 2);
  return Function_201c3c0(*v10, 0);
}

//----- (022301B4) --------------------------------------------------------
int __fastcall Function_22301b4(int a1, int *a2, int *a3, int a4, int a5, uint *a6, int a7, int a8)
{
  int v8;
  int *v9;
  int v10;
  int v11;
  int v13;
  int v14;

  v8 = a1;
  v9 = a3;
  v13 = a4;
  v14 = LoadVariableAreaAdress_1d(*a2);
  Function_201ada4_ClearTextBox(v8 + 8, 0);
  Function_22302cc(v8, v9);
  v10 = 0;
  v11 = (int)&a6[2 * a7];
  do
  {
    if ( *a6 <= (uint)(8 * a7 + v10) )
      Function_22303cc(v8, v9, a5, v10);
    else
      Function_22302ec(v8, v13, v9, a5, v10, v14, *(uchar *)(v11 + 4), a8);
    ++v10;
    ++v11;
  }
  while ( v10 < 8 );
  Function_201c3c0(*v9, 2);
  return Function_201a9a4(v8 + 8);
}

//----- (02230240) --------------------------------------------------------
int __fastcall Function_2230240(short *a1, int *a2)
{
  short *v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v2 = a1;
  v3 = a2;
  Function_22302cc(a1, a2);
  Function_201ad10((int)(v2 + 4));
  v4 = v2[1];
  if ( v4 < 0 )
    v4 = -v4;
  v5 = *v2;
  if ( v5 < 0 )
    v5 = -v5;
  Function_2019cb8(*v3, 2, 0, (uchar)v5, v4, *((uchar *)v2 + 4), *((uchar *)v2 + 5), 0);
  Function_201c3c0(*v3, 2);
  v6 = v2[1];
  if ( v6 < 0 )
    v6 = -v6;
  v7 = *v2;
  if ( v7 < 0 )
    v7 = -v7;
  Function_2019cb8(*v3, 3, 0, (uchar)v7, v6, *((uchar *)v2 + 4), *((uchar *)v2 + 5), 0);
  return Function_201c3c0(*v3, 3);
}

//----- (022302CC) --------------------------------------------------------
int __fastcall Function_22302cc(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = 0;
  v2 = a1;
  do
  {
    result = *(uint *)(v2 + 24);
    if ( result )
    {
      result = ((int (*)(void))dword_221F800[11908])();
      *(uint *)(v2 + 24) = 0;
    }
    ++v1;
    v2 += 4;
  }
  while ( v1 < 8 );
  return result;
}

//----- (022302EC) --------------------------------------------------------
uint __fastcall Function_22302ec(ushort *a1, int a2, int a3, int a4, int a5, int a6, int a7, uint a8)
{
  ushort *v8;
  int v9;
  int v10;
  ushort *v11;
  ushort *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v18;
  int v19;
  int v20;
  short v21;
  short v22;
  short v23;
  short v24;
  int v25;

  v25 = a4;
  v8 = a1;
  v9 = a3;
  v18 = a2;
  v19 = a4;
  v20 = Function_202ad2c(a6, a7, 7u);
  v10 = Function_202ad2c(a6, a7, 8u);
  if ( v10 == 2 )
  {
    Function_22303cc(v8, v9, v19, a5);
  }
  else
  {
    v21 = 8 * (*v8 + word_2232324[6 * a5]) + 8;
    v22 = 8 * (v8[1] + word_2232326[6 * a5]) + 262;
    v23 = 8;
    v24 = 1;
    *(uint *)&v8[2 * a5 + 12] = ((int (__fastcall *)(int, short *, int, uint))dword_221F800[11824])(
                                    v18,
                                    &v21,
                                    v20,
                                    a8);
  }
  v11 = (ushort *)Function_2023790(128, a8);
  v12 = (ushort *)Function_202aef0(a6, a7);
  Function_2023d28(v11, v12);
  v13 = word_2232324[6 * a5];
  v14 = 8 * word_2232326[6 * a5] - 24;
  v15 = dword_22321E0[v10];
  Function_201d78c((int)(v8 + 4), 0);
  return Function_20237bc_FreeMsg((int)v11, v16);
}

//----- (022303CC) --------------------------------------------------------
int __fastcall Function_22303cc(short *a1, int *a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;

  v4 = a2;
  v5 = a1[1];
  if ( v5 < 0 )
    v5 = -v5;
  v6 = *a1;
  if ( v6 < 0 )
    v6 = -v6;
  Function_20198e8(
    *a2,
    2,
    (uchar)(word_2232324[6 * a4] + v6),
    (word_2232326[6 * a4] + v5) & 0xFF,
    3u,
    4u,
    *(uint *)(a3 + 12) + 12,
    0,
    0,
    (uint)**(ushort **)(a3 + 12) << 21 >> 24,
    (uint)*(ushort *)(*(uint *)(a3 + 12) + 2) << 21 >> 24);
  return Function_201c3c0(*v4, 2);
}

//----- (02230444) --------------------------------------------------------
int __fastcall Function_2230444(int a1, int a2, int a3, int a4)
{
  return Function_22305d4(a1, a2, a3, a4);
}

//----- (0223044C) --------------------------------------------------------
int __fastcall Function_223044c(int *a1, int a2, int a3, int a4, uint a5)
{
  uint v5;
  int v6;
  uint v7;
  int *v8;
  int v9;
  int v10;
  int result;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v16 = a4;
  v5 = a3;
  v6 = a2;
  v7 = *(uchar *)(a3 + 4);
  v8 = a1;
  if ( v7 <= 6 )
    JUMPOUT(__CS__, *((short *)&off_223046C + v7) + 35849326);
  switch ( (uchar)v7 )
  {
    case 0:
      a1[1] = Function_22305dc();
      v12 = 4;
      v13 = 4;
      v14 = 4;
      v15 = 0;
      v9 = LoadPlayerDataAdress(*(uint *)v5);
      v8[2] = (int)Function_2089400(a5, 12, &v12, v9, 0, 0);
      Function_222dfd0(v6);
      *v8 = (int)AllocAndInitOverlayData((int *)&JumpTable_20f2dac, v8[1], a5);
      *(uchar *)(v5 + 4) = 1;
      goto LABEL_19;
    case 1:
      if ( CallOverlayDataJumpTable(*a1, v7, a3, a4) )
      {
        Call_free2(*v8);
        if ( *(uint *)(v8[1] + 20) )
        {
          Function_222e074(v5, 0, 0);
          *(uchar *)(v5 + 4) = 3;
        }
        else
        {
          *v8 = (int)AllocAndInitOverlayData(&dword_20F2DB8[1], v8[2], a5);
          *(uchar *)(v5 + 4) = 2;
        }
      }
      goto LABEL_19;
    case 2:
      if ( CallOverlayDataJumpTable(*a1, v7, a3, a4) )
      {
        Call_free2(*v8);
        Function_222e07c(v5, *(uint *)(v8[1] + 24), *(uint *)(v8[2] + 28));
        Function_222e074(v5, 0, 6);
        *(uchar *)(v5 + 4) = 3;
      }
      goto LABEL_19;
    case 3:
      Function_208716c(a1[1], v7);
      Function_2089438(v8[2], v10);
      Function_222df48(v6, a5);
      return 1;
    case 4:
      a1[1] = Function_22305dc();
      Function_222dfd0(v6);
      *v8 = (int)AllocAndInitOverlayData((int *)&JumpTable_20f2dac, v8[1], a5);
      *(uchar *)(v5 + 4) = 5;
      goto LABEL_19;
    case 5:
      if ( CallOverlayDataJumpTable(*a1, v7, a3, a4) )
      {
        Call_free2(*v8);
        if ( *(uint *)(v8[1] + 20) )
        {
          Function_222e074(v5, 1, 13);
        }
        else
        {
          Function_222e074(v5, 1, 12);
          Function_222e07c(v5, *(uint *)(v8[1] + 24), 0);
        }
        *(uchar *)(v5 + 4) = 6;
      }
      goto LABEL_19;
    case 6:
      Function_208716c(a1[1], v7);
      Function_222df48(v6, a5);
      result = 1;
      break;
    default:
LABEL_19:
      result = 0;
      break;
  }
  return result;
}

//----- (022305CC) --------------------------------------------------------
int __fastcall Function_22305cc(int a1, int a2, int a3)
{
  return Function_22305d8(a1, a2, a3);
}

//----- (022305D4) --------------------------------------------------------
void Function_22305d4()
{
  ;
}

//----- (022305D8) --------------------------------------------------------
void Function_22305d8()
{
  ;
}

//----- (022305DC) --------------------------------------------------------
uint *__fastcall Function_22305dc(int a1, int *a2, uint a3)
{
  int *v3;
  uint v4;
  int v5;
  uint *v6;
  bool v7;
  int v8;
  ushort *v9;

  v3 = a2;
  v4 = a3;
  v5 = LoadPlayerDataAdress(*a2);
  v6 = Function_208712c(v4, 7, 0, 7, v5);
  if ( v3[14] == 1 )
  {
    v7 = Function_201e17c(*(ushort *)v3[13]) == 0;
    v9 = (ushort *)v6[6];
    if ( v7 )
      Function_2023d28(v9, (ushort *)v3[13]);
    else
      Function_20237e8((int)v9, v8);
    v3[14] = 0;
  }
  return v6;
}

//----- (02230620) --------------------------------------------------------
int __fastcall Function_2230620(int a1, int a2, int a3, int a4)
{
  return Function_2230680(a1, a2, a3, a4);
}

//----- (02230628) --------------------------------------------------------
int __fastcall Function_2230628(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( *(uchar *)(a2 + 4) )
  {
    if ( *(uchar *)(a2 + 4) == 1 && dword_21BF6C4 & 3 )
    {
      Function_2005748(0x5DDu);
      Function_222e074(v3, 0, 2);
      Function_223087c(v4, v5);
      return 1;
    }
  }
  else
  {
    Function_223081c();
    *(uchar *)(v3 + 4) = 1;
  }
  return 0;
}

//----- (02230678) --------------------------------------------------------
int __fastcall Function_2230678(int a1, int a2, int a3)
{
  return Function_2230804(a1, a2, a3);
}

//----- (02230680) --------------------------------------------------------
int __fastcall Function_2230680(int a1, int *a2, int a3, uint a4)
{
  int v4;
  int *v5;
  int v6;
  uint v7;
  ushort *v8;
  int v9;
  long long v10;
  int v11;
  int v12;
  int result;
  int v14;
  ushort *v15;
  uint v16;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  Function_201a7a0(a1);
  Function_201a7e8(*(uint **)v6, v4, 3, 5, 13, 0x17u, 8u, 7, 1);
  Function_201a7a0(v4 + 16);
  Function_201a7e8(*(uint **)v6, v4 + 16, 3, 9, 8, 0xFu, 2u, 7, 185);
  Function_201ada4_ClearTextBox(v4, 0);
  Function_201ada4_ClearTextBox(v4 + 16, 0);
  v8 = (ushort *)Function_2023790(128, v7);
  v15 = (ushort *)Function_2023790(128, v7);
  LoadVariableAreaAdress_1d(*v5);
  Function_202ad28();
  LODWORD(v10) = Function_20a471c(v9);
  v14 = HIDWORD(v10);
  v16 = v10;
  if ( v10 )
  {
    Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v6 + 396), 0x2Fu, v8);
    Function_2002eb4(0, (int)v8, 0);
    Function_201d78c(v4, 0);
    Function_222e7f8(v6, v16, v14);
    Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v6 + 396), 0x33u, v15);
    Function_200c388(*(uint **)(v6 + 392), (int)v8, (int)v15);
    Function_2002eec(0, (int)v8, 0, 0x78u);
    Function_201d78c(v4 + 16, 0);
  }
  else
  {
    Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v6 + 396), 0x30u, v8);
    Function_2002eb4(0, (int)v8, 0);
    Function_201d78c(v4, 0);
  }
  Function_20237bc_FreeMsg((int)v8, v11);
  Function_20237bc_FreeMsg((int)v15, v12);
  result = Function_20071d0(*(uint *)(v6 + 400), 0xBu, 0, (uint *)(v4 + 36), v7);
  *(uint *)(v4 + 32) = result;
  return result;
}

//----- (02230804) --------------------------------------------------------
uint __fastcall Function_2230804(int a1)
{
  int v1;

  v1 = a1;
  Function_201a8fc(a1);
  Function_201a8fc(v1 + 16);
  return free(*(uint *)(v1 + 32));
}

//----- (0223081C) --------------------------------------------------------
int __fastcall Function_223081c(int a1, int *a2, int *a3)
{
  int v3;
  int *v4;

  v3 = a1;
  v4 = a3;
  LoadTrainerDataAdress(*a2);
  Function_200b498(v4[98], 0);
  Function_222e738((int)v4, 0x2Eu);
  Function_20198c0(
    *v4,
    2,
    *(uint *)(v3 + 36) + 12,
    0,
    0,
    (uint)**(ushort **)(v3 + 36) << 21 >> 24,
    (uint)*(ushort *)(*(uint *)(v3 + 36) + 2) << 21 >> 24);
  Function_201c3c0(*v4, 2);
  Function_201a9a4(v3);
  return Function_201a9a4(v3 + 16);
}

//----- (0223087C) --------------------------------------------------------
int __fastcall Function_223087c(int a1, int a2)
{
  int *v2;
  int v3;

  v2 = (int *)a2;
  v3 = a1;
  Function_222e7c8(a2);
  Function_2019cb8(*v2, 2, 0, 0, 0, 0x20u, 0x18u, 0);
  Function_201c3c0(*v2, 2);
  Function_201ad10(v3);
  Function_201ad10(v3 + 16);
  Function_2019cb8(*v2, 3, 0, 0, 0, 0x20u, 0x18u, 0);
  return Function_201c3c0(*v2, 3);
}

//----- (022308DC) --------------------------------------------------------
int __fastcall Function_22308dc(int a1, int *a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  v8 = LoadFlagAdress(*a2);
  *(uint *)(v5 + 16) = Function_206af3c(v8, 2, 0x35u);
  return Function_2230b1c(v5, v4, v6, v7);
}

//----- (02230904) --------------------------------------------------------
int __fastcall Function_2230904(int a1, int a2, int a3, int a4)
{
  int v4;
  uint v5;
  int v6;
  int v7;
  int result;
  int v9;

  v4 = a2;
  v5 = *(uchar *)(a2 + 4);
  v6 = a1;
  v7 = a3;
  v9 = a4;
  if ( v5 <= 6 )
    JUMPOUT(__CS__, *((short *)&off_2230922 + v5) + 35850532);
  switch ( (uchar)v5 )
  {
    case 0:
      *(ushort *)(a1 + 14) = 0;
      *(ushort *)a1 = 0;
      goto LABEL_5;
    case 1:
LABEL_5:
      Function_2230bd8(a1);
      *(uchar *)(v4 + 4) = 2;
      goto LABEL_27;
    case 2:
      if ( dword_21BF6C4 & 3 )
      {
        Function_2005748(0x5DDu);
        *(uchar *)(v4 + 4) = 6;
      }
      else if ( dword_21BF6C8 & 0x20 )
      {
        Function_2232138();
        *(uchar *)(v4 + 4) = 3;
        *(uint *)(v6 + 8) = 2;
      }
      else if ( dword_21BF6C8 & 0x10 )
      {
        Function_2232138();
        *(uchar *)(v4 + 4) = 3;
        *(uint *)(v6 + 8) = 3;
      }
      else if ( dword_21BF6C0 & 0x40 )
      {
        *(uchar *)(a2 + 4) = 5;
        *(uint *)(a1 + 8) = 0;
        *(ushort *)(a1 + 12) = 4;
      }
      else if ( dword_21BF6C0 & 0x80 )
      {
        *(uchar *)(a2 + 4) = 5;
        *(uint *)(a1 + 8) = 1;
        *(ushort *)(a1 + 12) = 4;
      }
      if ( !(dword_21BF6C0 & 0xC0) )
        *(ushort *)(v6 + 14) = 0;
      goto LABEL_27;
    case 3:
      Function_2230a58();
      Function_2230a9c(v6, v4, v7, v9);
      *(uchar *)(v4 + 4) = 4;
      goto LABEL_27;
    case 4:
      if ( ((int (*)(void))Function_2230a9c)() == 1 )
        *(uchar *)(v4 + 4) = 2;
      goto LABEL_27;
    case 5:
      if ( *(ushort *)(a1 + 14) )
      {
        if ( --*(ushort *)(a1 + 12) )
          goto LABEL_27;
      }
      if ( Function_2230ea8(a2, *(uint *)(a1 + 8)) )
      {
        Function_2005748(0x5E5u);
        Function_2230c1c(v6, v7);
        Function_222e074(v4, 4, 1);
        result = 1;
        *(ushort *)(v6 + 14) = 1;
      }
      else
      {
        *(uchar *)(v4 + 4) = 2;
LABEL_27:
        result = 0;
      }
      return result;
    case 6:
      ((void (*)(void))Function_2230c1c)();
      Function_222e074(v4, 1, 9);
      return 1;
    default:
      goto LABEL_27;
  }
}

//----- (02230A50) --------------------------------------------------------
int __fastcall Function_2230a50(int a1, int a2, int a3)
{
  return Function_2230ba0(a1, a2, a3);
}

//----- (02230A58) --------------------------------------------------------
int __fastcall Function_2230a58(short *a1, int a2, int a3, int a4)
{
  int v4;
  short *v5;
  int v6;
  int v7;
  int v8;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  *((uint *)a1 + 1) = 0;
  v7 = a4;
  Function_222ea48(a3, 0);
  if ( *((uint *)v5 + 2) == 2 )
    v8 = 2;
  else
    v8 = 1;
  Function_2230c50(v5, v4, v6, v8, *v5, v7);
  return Function_2005748(0x5E1u);
}

//----- (02230A9C) --------------------------------------------------------
int __fastcall Function_2230a9c(short *a1, int a2, int *a3, int a4)
{
  short *v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  int result;
  int v10;

  v4 = a1;
  v5 = *((uint *)a1 + 1);
  v6 = a2;
  v7 = a3;
  v8 = a4;
  if ( v5 <= 4 )
  {
    v10 = (v5 << 8) / 4;
    if ( *((uint *)v4 + 2) == 2 )
      v10 = (v5 << 8) / -4;
    Function_201c63c(*a3, 2, 0, v10);
    Function_201c63c(*v7, 3, 0, v10);
    ++*((uint *)v4 + 1);
    result = 0;
  }
  else
  {
    Function_201c63c(*a3, 2, 0, 0);
    Function_201c63c(*v7, 3, 0, 0);
    Function_2230c50(v4, v6, v7, 0, *v4, v8);
    Function_222ea48((int)v7, 1);
    result = 1;
  }
  return result;
}

//----- (02230B1C) --------------------------------------------------------
int __fastcall Function_2230b1c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int *v6;
  char *v7;
  int v8;
  int result;
  int v10;
  int v11;
  int *v12;
  int *v13;
  int v14;

  v4 = a1;
  v10 = a3;
  v11 = a4;
  Function_2230f24(a1 + 224, a3, a4);
  v14 = 0;
  v5 = v4 + 20;
  v13 = dword_22321D4;
  v12 = &dword_223221C;
  do
  {
    Function_2230f78(v5, v10, v12, *v13);
    v6 = &dword_2232470;
    v7 = &byte_2232434;
    v8 = 0;
    do
    {
      Function_2230f9c(v5, v10, v8++, (uchar)*v7, *v6, v11);
      ++v6;
      ++v7;
    }
    while ( v8 < 7 );
    v5 += 68;
    ++v13;
    v12 = (int *)((char *)v12 + 6);
    result = v14 + 1;
    v14 = result;
  }
  while ( result < 3 );
  return result;
}

//----- (02230BA0) --------------------------------------------------------
int __fastcall Function_2230ba0(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = 0;
  v2 = a1 + 20;
  do
  {
    v3 = 0;
    do
      Function_2231058(v2, v3++);
    while ( v3 < 7 );
    Function_2230f98(v2);
    ++v1;
    v2 += 68;
  }
  while ( v1 < 3 );
  return Function_2230f60();
}

//----- (02230BD8) --------------------------------------------------------
uint __fastcall Function_2230bd8(short *a1, int a2, int a3, uint a4)
{
  int v4;
  int v5;
  short *v6;
  uint v7;

  v4 = a2;
  v5 = a3;
  v6 = a1;
  v7 = a4;
  Function_222e880(a3, *(uint *)a2, *(uchar *)(a2 + *(char *)(a2 + 7) + 12), a4);
  Function_222e738(v5, 0xDu);
  Function_2230c50(v6, v4, v5, 0, *v6, v7);
  return Function_222ea28(v5, 1);
}

//----- (02230C1C) --------------------------------------------------------
int __fastcall Function_2230c1c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = a1;
  Function_222ea28(a2, 0);
  v4 = 0;
  v5 = v3 + 20;
  do
  {
    Function_2231144(v5, v2);
    ++v4;
    v5 += 68;
  }
  while ( v4 < 3 );
  Function_2230d50(v3, v2);
  return Function_222e7c8(v2);
}

//----- (02230C50) --------------------------------------------------------
int __fastcall Function_2230c50(ushort *a1, int a2, int a3, int a4, int a5, int a6)
{
  ushort *v6;
  int v7;
  int v8;
  int v9;

  v6 = a1;
  v7 = a2;
  v8 = a3;
  v9 = a4;
  if ( !a4 )
  {
    *a1 = a5;
    Function_2230c8c();
  }
  return Function_22310d4(&v6[34 * v9 + 10], v7, v8, a5, v6 + 112, a6);
}

//----- (02230C8C) --------------------------------------------------------
int __fastcall Function_2230c8c(int a1, int *a2, int a3)
{
  int *v3;
  int v4;

  v3 = a2;
  v4 = a3;
  if ( *(uint *)(a1 + 16) == 1 )
    Function_20198e8(
      *a2,
      0,
      22,
      0,
      9u,
      3u,
      a2[126] + 12,
      0x10u,
      4u,
      (uint)*(ushort *)a2[126] << 21 >> 24,
      (uint)*(ushort *)(a2[126] + 2) << 21 >> 24);
  else
    Function_20198e8(
      *a2,
      0,
      22,
      0,
      9u,
      3u,
      a2[126] + 12,
      0x10u,
      7u,
      (uint)*(ushort *)a2[126] << 21 >> 24,
      (uint)*(ushort *)(a2[126] + 2) << 21 >> 24);
  Function_20198e8(
    *v3,
    0,
    (v4 + 23) & 0xFF,
    1,
    1u,
    1u,
    v3[126] + 12,
    5u,
    0,
    (uint)*(ushort *)v3[126] << 21 >> 24,
    (uint)*(ushort *)(v3[126] + 2) << 21 >> 24);
  return Function_201c3c0(*v3, 0);
}

//----- (02230D50) --------------------------------------------------------
int __fastcall Function_2230d50(int a1, int *a2)
{
  int *v2;

  v2 = a2;
  Function_20198e8(
    *a2,
    0,
    22,
    0,
    9u,
    3u,
    a2[126] + 12,
    0x10u,
    0,
    (uint)*(ushort *)a2[126] << 21 >> 24,
    (uint)*(ushort *)(a2[126] + 2) << 21 >> 24);
  return Function_201c3c0(*v2, 0);
}

//----- (02230D98) --------------------------------------------------------
int __fastcall Function_2230d98(int a1, int *a2, int a3, int a4)
{
  int *v4;

  v4 = a2;
  Function_20198e8(
    *a2,
    0,
    (a4 + 23) & 0xFF,
    1,
    1u,
    1u,
    a2[126] + 12,
    5u,
    1u,
    (uint)*(ushort *)a2[126] << 21 >> 24,
    (uint)*(ushort *)(a2[126] + 2) << 21 >> 24);
  return Function_201c3c0(*v4, 0);
}

//----- (02230DE4) --------------------------------------------------------
int __fastcall Function_2230de4(int a1, int *a2, int a3)
{
  int *v3;
  int v4;

  v3 = a2;
  v4 = a3;
  if ( *(uint *)(a1 + 16) == 1 )
    Function_20198e8(
      *a2,
      0,
      22,
      0,
      9u,
      3u,
      a2[126] + 12,
      0x10u,
      4u,
      (uint)*(ushort *)a2[126] << 21 >> 24,
      (uint)*(ushort *)(a2[126] + 2) << 21 >> 24);
  else
    Function_20198e8(
      *a2,
      0,
      22,
      0,
      9u,
      3u,
      a2[126] + 12,
      0x10u,
      7u,
      (uint)*(ushort *)a2[126] << 21 >> 24,
      (uint)*(ushort *)(a2[126] + 2) << 21 >> 24);
  Function_20198e8(
    *v3,
    0,
    (v4 + 23) & 0xFF,
    1,
    1u,
    1u,
    v3[126] + 12,
    5u,
    0,
    (uint)*(ushort *)v3[126] << 21 >> 24,
    (uint)*(ushort *)(v3[126] + 2) << 21 >> 24);
  return Function_201c3c0(*v3, 0);
}

//----- (02230EA8) --------------------------------------------------------
int __fastcall Function_2230ea8(int *a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v9;
  int v10;
  int v11;

  v2 = a1;
  v3 = a2;
  v4 = LoadVariableAreaAdress_1d(*a1);
  v5 = *((char *)v2 + 7);
  if ( !v3 )
  {
    v6 = v2[2];
    v7 = 0;
    if ( v6 != 1 )
    {
      while ( 1 )
      {
        if ( --v5 < 0 )
          v5 += v6;
        if ( Function_202ad2c(v4, *((uchar *)v2 + v5 + 12), 8u) != 2 )
          break;
        v6 = v2[2];
        if ( ++v7 >= (uint)(v6 - 1) )
          return 0;
      }
      *((uchar *)v2 + 7) = v5;
      return 1;
    }
    return 0;
  }
  v9 = v2[2];
  v10 = 0;
  if ( v9 == 1 )
    return 0;
  while ( 1 )
  {
    u32_div_f(v5 + 1, v9);
    v5 = v11;
    if ( Function_202ad2c(v4, *((uchar *)v2 + v11 + 12), 8u) != 2 )
      break;
    v9 = v2[2];
    if ( ++v10 >= (uint)(v9 - 1) )
      return 0;
  }
  *((uchar *)v2 + 7) = v5;
  return 1;
}

//----- (02230F24) --------------------------------------------------------
int __fastcall Function_2230f24(int *a1, int a2, int a3)
{
  int *v3;
  char *v4;
  int v5;
  uint *v6;
  int result;
  int v8;
  int v9;

  v3 = a1;
  v4 = &byte_223242C;
  v8 = a2;
  v9 = a3;
  v5 = 0;
  v6 = a1 + 7;
  do
  {
    result = Function_20071d0(*(uint *)(v8 + 400), (uchar)*v4, 0, v6, v9);
    ++v5;
    *v3 = result;
    ++v3;
    ++v6;
    ++v4;
  }
  while ( v5 < 7 );
  return result;
}

//----- (02230F60) --------------------------------------------------------
uint __fastcall Function_2230f60(int *a1)
{
  int *v1;
  int v2;
  uint result;

  v1 = a1;
  v2 = 0;
  do
  {
    result = free(*v1);
    ++v2;
    ++v1;
  }
  while ( v2 < 7 );
  return result;
}

//----- (02230F78) --------------------------------------------------------
int __fastcall Function_2230f78(int result, int a2, ushort *a3, int a4)
{
  short v4;
  int v5;

  *(ushort *)result = *a3;
  *(ushort *)(result + 2) = a3[1];
  v4 = a3[2];
  v5 = 0;
  *(ushort *)(result + 4) = v4;
  *(uint *)(result + 8) = a4;
  do
  {
    *(uint *)(result + 12) = 0;
    *(uint *)(result + 40) = 0;
    ++v5;
    result += 4;
  }
  while ( v5 < 7 );
  return result;
}

//----- (02230F98) --------------------------------------------------------
void Function_2230f98()
{
  ;
}

//----- (02230F9C) --------------------------------------------------------
uint __fastcall Function_2230f9c(short *a1, uint **a2, int a3, uint a4, uchar *a5, uint a6)
{
  int v6;
  uint result;
  int v8;
  uchar *v9;
  int v10;
  int v11;
  int v12;
  short *v13;
  uint **v14;
  uint v15;
  int v16;
  uint v17;

  v14 = a2;
  v13 = a1;
  v15 = a4;
  v6 = (int)&a1[2 * a3];
  *(uint *)(v6 + 12) = Function_201a778(a6, (uchar)a4);
  *(uint *)(v6 + 40) = v15;
  v16 = *((uint *)v13 + 2) & 0xFFFF;
  v17 = 0;
  result = v15;
  if ( v15 )
  {
    v8 = 0;
    v9 = a5;
    do
    {
      Function_201a7a0(*(uint *)(v6 + 12) + v8);
      v10 = v13[1];
      if ( v10 < 0 )
        v10 = -v10;
      v11 = *v13;
      if ( v11 < 0 )
        v11 = -v11;
      Function_201a7e8(*v14, *(uint *)(v6 + 12) + v8, 3, *v9 + v11, v9[1] + v10, v9[2], v9[3], 7, v16);
      Function_201ada4_ClearTextBox(*(uint *)(v6 + 12) + v8, 0);
      v8 += 16;
      v12 = (uchar)v9[2] * (uchar)v9[3];
      v9 += 4;
      v16 = (v16 + v12) & 0xFFFF;
      result = v15;
      ++v17;
    }
    while ( v17 < v15 );
  }
  return result;
}

//----- (02231058) --------------------------------------------------------
int __fastcall Function_2231058(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a1;
  v3 = 4 * a2;
  result = *(uint *)(a1 + 4 * a2 + 12);
  if ( result )
  {
    Function_201a928(result, *(uint *)(v2 + 40 + v3) & 0xFF);
    result = v2 + v3;
    *(uint *)(v2 + v3 + 12) = 0;
    *(uint *)(v2 + 40 + v3) = 0;
  }
  return result;
}

//----- (02231080) --------------------------------------------------------
uint __fastcall Function_2231080(int a1, int a2)
{
  int v2;
  uint result;
  uint v4;
  int v5;

  v2 = a1 + 4 * a2;
  result = *(uint *)(v2 + 40);
  v4 = 0;
  if ( result )
  {
    v5 = 0;
    do
    {
      Function_201a9a4(*(uint *)(v2 + 12) + v5);
      result = *(uint *)(v2 + 40);
      ++v4;
      v5 += 16;
    }
    while ( v4 < result );
  }
  return result;
}

//----- (022310A4) --------------------------------------------------------
uint __fastcall Function_22310a4(int a1, int a2)
{
  int v2;
  uint result;
  uint v4;
  int v5;

  v2 = a1 + 4 * a2;
  result = *(uint *)(v2 + 40);
  v4 = 0;
  if ( result )
  {
    v5 = 0;
    do
    {
      Function_201ad10(*(uint *)(v2 + 12) + v5);
      Function_201ada4_ClearTextBox(*(uint *)(v2 + 12) + v5, 0);
      result = *(uint *)(v2 + 40);
      ++v4;
      v5 += 16;
    }
    while ( v4 < result );
  }
  return result;
}

//----- (022310D4) --------------------------------------------------------
int __fastcall Function_22310d4(short *a1, int a2, int *a3, int a4, int a5, int a6)
{
  int *v6;
  int v7;
  short *v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v6 = a3;
  v7 = a2;
  v8 = a1;
  v9 = a4;
  Function_2231144(a1, a3);
  v10 = v8[1];
  if ( v10 < 0 )
    v10 = -v10;
  v11 = *v8;
  if ( v11 < 0 )
    v11 = -v11;
  v12 = 4 * v9;
  Function_20198c0(
    *v6,
    2,
    *(uint *)(a5 + v12 + 28) + 12,
    (uchar)v11,
    v10,
    (uint)**(ushort **)(a5 + v12 + 28) << 21 >> 24,
    (uint)*(ushort *)(*(uint *)(a5 + v12 + 28) + 2) << 21 >> 24);
  Function_201c3c0(*v6, 2);
  return (*(int (__fastcall **)(short *, int, int *, int))((char *)&off_223248C + v12))(v8, v7, v6, a6);
}

//----- (02231144) --------------------------------------------------------
int __fastcall Function_2231144(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
    Function_22310a4(v2, v4++);
  while ( v4 < 7 );
  return Function_2232038(v3, v2);
}

//----- (02231164) --------------------------------------------------------
uint __fastcall Function_2231164(int a1, int *a2, int *a3, int a4)
{
  int *v4;
  int *v5;
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
  uchar v16;
  uchar v17;
  int v18;
  int v19;
  int v21;
  uint v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;

  v27 = a4;
  v4 = a2;
  v21 = a1;
  v22 = a4;
  v5 = a3;
  v23 = LoadVariableAreaAdress_1d(*a2);
  v6 = Function_2023790(128, v22);
  v7 = Function_2023790(128, v22);
  Function_22320b8(v21);
  Function_222e8c0((int)v5, *v4, *((uchar *)v4 + *((char *)v4 + 7) + 12), v22);
  Function_22320b8(v21);
  Function_22320b8(v21);
  Function_22320b8(v21);
  v8 = Function_202ad2c(v23, *((uchar *)v4 + *((char *)v4 + 7) + 12), 1u);
  Function_222e970((int)v5, v8);
  Function_22320b8(v21);
  Function_22320b8(v21);
  v9 = Function_202ad2c(v23, *((uchar *)v4 + *((char *)v4 + 7) + 12), 2u);
  Function_222e970((int)v5, v9);
  Function_22320b8(v21);
  Function_22320b8(v21);
  v10 = Function_202ad2c(v23, *((uchar *)v4 + *((char *)v4 + 7) + 12), 3u);
  Function_222e970((int)v5, v10);
  Function_22320b8(v21);
  if ( Function_223217c(v4, v22) )
  {
    Function_22320b8(v21);
    v11 = Function_202ad2c(v23, *((uchar *)v4 + *((char *)v4 + 7) + 12), 9u);
    Function_222e970((int)v5, v11);
    Function_22320b8(v21);
  }
  Function_22320b8(v21);
  if ( Function_222e8fc((int)v5, *v4, *((uchar *)v4 + *((char *)v4 + 7) + 12)) )
    Function_22320b8(v21);
  v12 = Function_202ad2c(v23, *((uchar *)v4 + *((char *)v4 + 7) + 12), 8u);
  v13 = Function_202ad2c(v23, *((uchar *)v4 + *((char *)v4 + 7) + 12), 7u);
  v14 = Function_205ca14(v12, v13, 1);
  Function_2076aac(v14, 2, &v24);
  v15 = malloc(v22, 3200);
  Function_20133d4(v24, v26, v22, 0, 0, 10, 10, v15);
  Function_201addc(*(uint *)(v21 + 12) + 64, v15, 0, 0, 80, 80, 4u, 4u, 0x50u, 0x50u);
  free(v15);
  Call_LoadFromNARC_RLCN(v24, v25, 0, 320, 32, v22);
  Function_222e880((int)v5, *v4, *((uchar *)v4 + *((char *)v4 + 7) + 12), v22);
  Function_22320b8(v21);
  Function_2231080(v21, 0);
  v16 = Function_201c29c(*(uint *)(v21 + 12) + 64);
  v17 = Function_201c2a0(*(uint *)(v21 + 12) + 64);
  Function_2019e2c(*v5, 3, v16, v17, 0xBu, 0xBu, 0xAu);
  Function_20237bc_FreeMsg(v6, v18);
  return Function_20237bc_FreeMsg(v7, v19);
}

//----- (02231528) --------------------------------------------------------
uint __fastcall Function_2231528(int a1, int *a2, int a3, uint a4)
{
  int *v4;
  int v5;
  uint v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = LoadVariableAreaAdress_17(*a2);
  v9 = Function_2023790(128, v6);
  v10 = Function_2023790(128, v6);
  Function_22320b8(v5);
  Function_2030698(v8, 100, *((uchar *)v4 + *((char *)v4 + 7) + 12));
  Function_22320b8(v5);
  v11 = Function_2030698(v8, 113, *((uchar *)v4 + *((char *)v4 + 7) + 12));
  Function_222e970(v7, v11);
  Function_22320b8(v5);
  Function_22320b8(v5);
  v12 = Function_2030698(v8, 112, *((uchar *)v4 + *((char *)v4 + 7) + 12));
  Function_222e970(v7, v12);
  Function_22320b8(v5);
  Function_2231080(v5, 2);
  Function_20237bc_FreeMsg(v9, v13);
  return Function_20237bc_FreeMsg(v10, v14);
}

//----- (02231664) --------------------------------------------------------
uint __fastcall Function_2231664(int a1, int *a2, int a3, uint a4)
{
  int *v4;
  int v5;
  uint v6;
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

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = LoadVariableAreaAdress_17(*a2);
  v9 = Function_2023790(128, v6);
  v10 = Function_2023790(128, v6);
  Function_22320b8(v5);
  Function_22320b8(v5);
  Function_22320b8(v5);
  Function_2030698(v8, 102, *((uchar *)v4 + *((char *)v4 + 7) + 12));
  Function_22320b8(v5);
  v11 = Function_2030698(v8, 115, *((uchar *)v4 + *((char *)v4 + 7) + 12));
  Function_222e970(v7, v11);
  Function_22320b8(v5);
  v12 = Function_2030698(v8, 117, *((uchar *)v4 + *((char *)v4 + 7) + 12));
  Function_222e970(v7, v12);
  Function_22320b8(v5);
  Function_22320b8(v5);
  v13 = Function_2030698(v8, 114, *((uchar *)v4 + *((char *)v4 + 7) + 12));
  Function_222e970(v7, v13);
  Function_22320b8(v5);
  v14 = Function_2030698(v8, 116, *((uchar *)v4 + *((char *)v4 + 7) + 12));
  Function_222e970(v7, v14);
  Function_22320b8(v5);
  Function_22320b8(v5);
  Function_22320b8(v5);
  Function_2030698(v8, 104, *((uchar *)v4 + *((char *)v4 + 7) + 12));
  Function_22320b8(v5);
  v15 = Function_2030698(v8, 119, *((uchar *)v4 + *((char *)v4 + 7) + 12));
  Function_222e970(v7, v15);
  Function_22320b8(v5);
  v16 = Function_2030698(v8, 121, *((uchar *)v4 + *((char *)v4 + 7) + 12));
  Function_222e970(v7, v16);
  Function_22320b8(v5);
  Function_22320b8(v5);
  v17 = Function_2030698(v8, 118, *((uchar *)v4 + *((char *)v4 + 7) + 12));
  Function_222e970(v7, v17);
  Function_22320b8(v5);
  v18 = Function_2030698(v8, 120, *((uchar *)v4 + *((char *)v4 + 7) + 12));
  Function_222e970(v7, v18);
  Function_22320b8(v5);
  Function_2231080(v5, 3);
  Function_20237bc_FreeMsg(v9, v19);
  return Function_20237bc_FreeMsg(v10, v20);
}

//----- (02231A00) --------------------------------------------------------
uint __fastcall Function_2231a00(int a1, int *a2, int a3, uint a4)
{
  int *v4;
  int v5;
  uint v6;
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

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = LoadVariableAreaAdress_17(*a2);
  v9 = Function_2023790(128, v6);
  v10 = Function_2023790(128, v6);
  Function_22320b8(v5);
  Function_22320b8(v5);
  Function_2030698(v8, 108, *((uchar *)v4 + *((char *)v4 + 7) + 12));
  Function_22320b8(v5);
  v11 = Function_2030698(v8, 135, *((uchar *)v4 + *((char *)v4 + 7) + 12));
  Function_222e970(v7, v11);
  Function_22320b8(v5);
  v12 = Function_2030698(v8, 136, *((uchar *)v4 + *((char *)v4 + 7) + 12));
  Function_222e970(v7, v12);
  Function_22320b8(v5);
  Function_22320b8(v5);
  v13 = Function_2030698(v8, 134, *((uchar *)v4 + *((char *)v4 + 7) + 12));
  Function_222e970(v7, v13);
  Function_22320b8(v5);
  v14 = Function_2030698(v8, 138, *((uchar *)v4 + *((char *)v4 + 7) + 12));
  Function_222e970(v7, v14);
  Function_22320b8(v5);
  Function_2231080(v5, 4);
  Function_20237bc_FreeMsg(v9, v15);
  return Function_20237bc_FreeMsg(v10, v16);
}

//----- (02231BE0) --------------------------------------------------------
uint __fastcall Function_2231be0(int a1, int *a2, int a3, uint a4)
{
  int *v4;
  int v5;
  uint v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  ushort *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = LoadVariableAreaAdress_17(*a2);
  v9 = Function_2023790(128, v6);
  v10 = Function_2023790(128, v6);
  Function_22320b8(v5);
  v11 = Function_2030698(v8, 124, *((uchar *)v4 + *((char *)v4 + 7) + 12));
  v12 = Function_200b32c(v11, v6);
  Function_201d78c(*(uint *)(v5 + 32), 0);
  Function_20237bc_FreeMsg((int)v12, v13);
  Function_2030698(v8, 106, *((uchar *)v4 + *((char *)v4 + 7) + 12));
  Function_22320b8(v5);
  v14 = Function_2030698(v8, 123, *((uchar *)v4 + *((char *)v4 + 7) + 12));
  Function_222e970(v7, v14);
  Function_22320b8(v5);
  Function_22320b8(v5);
  v15 = Function_2030698(v8, 122, *((uchar *)v4 + *((char *)v4 + 7) + 12));
  Function_222e970(v7, v15);
  Function_22320b8(v5);
  Function_2231080(v5, 5);
  Function_20237bc_FreeMsg(v9, v16);
  return Function_20237bc_FreeMsg(v10, v17);
}

//----- (02231D58) --------------------------------------------------------
uint __fastcall Function_2231d58(int a1, int *a2, int a3, uint a4)
{
  int *v4;
  int v5;
  uint v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = LoadVariableAreaAdress_17(*a2);
  v9 = Function_2023790(128, v6);
  v10 = Function_2023790(128, v6);
  Function_22320b8(v5);
  Function_2030698(v8, 110, *((uchar *)v4 + *((char *)v4 + 7) + 12));
  Function_22320b8(v5);
  v11 = Function_2030698(v8, 143, *((uchar *)v4 + *((char *)v4 + 7) + 12));
  Function_222e970(v7, v11);
  Function_22320b8(v5);
  Function_22320b8(v5);
  v12 = Function_2030698(v8, 142, *((uchar *)v4 + *((char *)v4 + 7) + 12));
  Function_222e970(v7, v12);
  Function_22320b8(v5);
  Function_2231080(v5, 6);
  Function_20237bc_FreeMsg(v9, v13);
  return Function_20237bc_FreeMsg(v10, v14);
}

//----- (02231E94) --------------------------------------------------------
uint __fastcall Function_2231e94(int a1, int *a2, int a3, uint a4)
{
  int *v4;
  int v5;
  int v6;
  uint v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  LoadVariableAreaAdress_17(*a2);
  v8 = LoadVariableAreaAdress_1d(*v4);
  v9 = Function_2023790(128, v7);
  v10 = Function_2023790(128, v7);
  Function_22320b8(v5);
  Function_222e990(v6, 0);
  Function_22320b8(v5);
  v11 = Function_202ad2c(v8, *((uchar *)v4 + *((char *)v4 + 7) + 12), 0xAu);
  Function_222e970(v6, v11);
  Function_22320b8(v5);
  Function_222e990(v6, 1u);
  Function_22320b8(v5);
  v12 = Function_202ad2c(v8, *((uchar *)v4 + *((char *)v4 + 7) + 12), 0xBu);
  Function_222e970(v6, v12);
  Function_22320b8(v5);
  Function_222e990(v6, 2u);
  Function_22320b8(v5);
  v13 = Function_202ad2c(v8, *((uchar *)v4 + *((char *)v4 + 7) + 12), 0xCu);
  Function_222e970(v6, v13);
  Function_22320b8(v5);
  Function_2231080(v5, 1);
  Function_20237bc_FreeMsg(v9, v14);
  return Function_20237bc_FreeMsg(v10, v15);
}

//----- (02232038) --------------------------------------------------------
int __fastcall Function_2232038(int *a1, short *a2)
{
  int *v2;
  short *v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v2 = a1;
  v3 = a2;
  v4 = a2[1];
  if ( v4 < 0 )
    v4 = -v4;
  v5 = *v3;
  if ( v5 < 0 )
    v5 = -v5;
  Function_2019cb8(*a1, 2, 0, (uchar)v5, v4, 0x20u, 0x18u, 0);
  Function_201c3c0(*v2, 2);
  v6 = v3[1];
  if ( v6 < 0 )
    v6 = -v6;
  v7 = *v3;
  if ( v7 < 0 )
    v7 = -v7;
  Function_2019cb8(*v2, 3, 0, (uchar)v7, v6, 0x20u, 0x18u, 0);
  return Function_201c3c0(*v2, 3);
}

//----- (022320B8) --------------------------------------------------------
int __fastcall Function_22320b8(int a1, int a2, int a3, int a4, int a5, uint a6, int a7, int a8, int a9, int a10, ushort *a11, int a12)
{
  int v12;
  int v14;
  int v15;

  v12 = a1;
  v14 = a2;
  v15 = a3;
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(a5 + 396), a6, a11);
  Function_200c388(*(uint **)(a5 + 392), a10, (int)a11);
  if ( a12 == 1 )
  {
    Function_2002d7c(0, a10, 0);
  }
  else if ( a12 == 2 )
  {
    Function_2002d7c(0, a10, 0);
  }
  return Function_201d78c(*(uint *)(v12 + 4 * v14 + 12) + 16 * v15, 0);
}

//----- (02232138) --------------------------------------------------------
int __fastcall Function_2232138(short *a1, int a2)
{
  short *v2;
  int result;
  int v4;
  short v5;
  short v6;

  v2 = a1;
  result = *((uint *)a1 + 4);
  if ( result == 1 )
    v4 = 7;
  else
    v4 = 2;
  if ( a2 <= 0 )
  {
    if ( a2 < 0 )
    {
      v6 = *v2;
      v2[1] = *v2;
      *v2 = v6 + a2;
      result = *v2;
      if ( result < 0 )
      {
        result += v4;
        *v2 = result;
      }
    }
  }
  else
  {
    v2[1] = *v2;
    result = s32_div_f(*v2 + a2, v4);
    *v2 = v5;
  }
  return result;
}

//----- (0223217C) --------------------------------------------------------
BOOL __fastcall Function_223217c(int *a1, uint a2)
{
  uint v2;
  int v3;

  v2 = a2;
  v3 = LoadVariableAreaAdressItemList(*a1);
  return Function_207d730(v3, 0x1C1u, v2) != 0;
}

