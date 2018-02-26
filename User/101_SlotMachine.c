//----- (021D0D80) --------------------------------------------------------
int __fastcall Function_101_21d0d80(int a1)
{
  int v1;
  uchar *v2;
  uchar *v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  Function_201ff00();
  Function_201ff68();
  Function_2017fc8(3, 79, 0x80000);
  v2 = (uchar *)MallocSomeDataAndStorePtrInOverlayData1c(v1, 8, 0x4Fu);
  v3 = v2;
  *v2 = 0;
  v2[1] = 0;
  v2[2] = 0;
  v2[3] = 0;
  v2[4] = 0;
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  *(uint *)v2 = LoadPtrToOverWorldDataIn18(v1);
  v4 = Function_21d0f6c();
  v5 = v4;
  *((uint *)v3 + 1) = v4;
  Function_21d19bc();
  Function_21d186c(v5);
  Function_21d0f9c(v5);
  Function_21d121c(v5);
  v6 = Function_21d13c8(v5);
  Function_21d150c(v6);
  Function_21d1550(v5);
  Function_21d1a28(v5);
  Function_21d59ac(v5);
  Function_21d5af0(v5);
  Function_21d5c28(v5);
  Function_2004550(0x42u, 0);
  Function_21d18c0(v5);
  Function_200f174(0, 1, 1, 0, 8, 1, 79);
  return 1;
}

//----- (021D0E40) --------------------------------------------------------
int __fastcall Function_101_21d0e40(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int result;

  v2 = a2;
  v3 = *(uint *)(LoadOverlayData1c(a1) + 4);
  switch ( (uchar)*v2 )
  {
    case 0u:
      if ( Function_200f2ac() )
        ++*v2;
      goto LABEL_10;
    case 1u:
      if ( Function_21d1aac(v3) == 1 )
      {
        ++*v2;
        Function_200f174(2u, 0, 0, 0, 8, 1, 79);
        Function_21d1894(v3, 0);
      }
      goto LABEL_10;
    case 2u:
      if ( !Function_200f2ac() )
        goto LABEL_10;
      ++*v2;
      goto LABEL_8;
    case 3u:
LABEL_8:
      if ( Function_21d18b4(v3) )
        goto LABEL_10;
      result = 1;
      break;
    default:
LABEL_10:
      Function_20713d0(*(uint *)(v3 + 1100));
      Function_21d80d4(*(uint *)(v3 + 1104));
      result = 0;
      break;
  }
  return result;
}

//----- (021D0EE4) --------------------------------------------------------
int __fastcall Function_101_21d0ee4(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  v3 = v2;
  v4 = *(uint *)(v2 + 4);
  SetMainLoopFunctionCall(0, 0);
  Function_21d0f3c(v3, v4);
  Function_21d1884(v4);
  Function_21d107c(v4);
  Function_21d1458(v4);
  Function_21d1a4c(v4);
  Function_21d18e4(v4);
  Function_21d19d4(v4);
  Function_21d0f94(v4);
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(79);
  return 1;
}

//----- (021D0F3C) --------------------------------------------------------
int __fastcall Function_21d0f3c(int a1, int *a2)
{
  uint v2;
  int result;

  v2 = a2[24];
  if ( v2 > 0xC350 )
    v2 = 50000;
  ***(uint ***)a1 = v2;
  *(uint *)(*(uint *)a1 + 12) = a2[8];
  result = *(uint *)(*(uint *)a1 + 8);
  if ( result )
    result = Function_202cf70(result, 14, a2[3]);
  return result;
}

//----- (021D0F6C) --------------------------------------------------------
uint *__fastcall Function_21d0f6c(int a1)
{
  int v1;
  uint *result;

  v1 = a1;
  result = (uint *)Function_21d1998(1224);
  result[24] = **(uint **)v1;
  result[34] = *(uint *)(v1 + 4);
  result[305] = *(uint *)(v1 + 16);
  return result;
}

//----- (021D0F94) --------------------------------------------------------
uint __fastcall Function_21d0f94(int a1)
{
  return free(a1);
}

//----- (021D0F9C) --------------------------------------------------------
int __fastcall Function_21d0f9c(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = Function_2018340(0x4Fu);
  *(uint *)(v1 + 1084) = v2;
  Function_21d1098(v2);
  v3 = Function_21d10b8(*(uint *)(v1 + 1084));
  Function_21d11d0(v3);
  Function_201ff0c(1u, 1);
  Function_201ff0c(2u, 1);
  Function_201ff0c(4u, 1);
  Function_201ff0c(8u, 0);
  Function_201ff0c(0x10u, 1);
  Function_201ff74(1u, 0);
  Function_201ff74(2u, 0);
  Function_201ff74(4u, 0);
  Function_201ff74(8u, 1);
  Function_201ff74(0x10u, 1);
  REG_BG0CNT &= 0xFFFCu;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 1;
  REG_BG2CNT = REG_BG2CNT & 0xFFFC | 2;
  REG_BG3CNT = REG_BG3CNT & 0xFFFC | 3;
  REG_BG0CNT_SUB &= 0xFFFCu;
  REG_BG1CNT_SUB = REG_BG1CNT_SUB & 0xFFFC | 1;
  REG_BG2CNT_SUB = REG_BG2CNT_SUB & 0xFFFC | 2;
  REG_BG3CNT_SUB = REG_BG3CNT_SUB & 0xFFFC | 3;
  G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 4, 16, 8, 9);
  return SetMainLoopFunctionCall((int)Function_21d197c, v1);
}

//----- (021D107C) --------------------------------------------------------
int __fastcall Function_21d107c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  Function_21d11a4(*(uint *)(a1 + 1084));
  v2 = Function_21d15a4(v1);
  return Function_21d1544(v2);
}

//----- (021D1098) --------------------------------------------------------
char *Function_21d1098()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_21D8620;
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

//----- (021D10B8) --------------------------------------------------------
int __fastcall Function_21d10b8(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
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

  v38 = a4;
  v4 = a1;
  REG_POWERCNT |= (uint)&REG_POWERCNT >> 11;
  v34 = 1;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  SetGraphicsModes(&v34);
  v27 = 0;
  v28 = 0;
  v29 = 2048;
  v30 = 0;
  v31 = 16777217;
  v32 = 0;
  v33 = 0;
  Function_20183c4(v4, 0, &v27, 0);
  Function_2019ebc(v4, 0);
  Function_2019690(0, 32, 0, 0x4Fu);
  v20 = 0;
  v21 = 0;
  v22 = 2048;
  v23 = 0;
  v24 = 50397185;
  v25 = 256;
  v26 = 0;
  Function_20183c4(v4, 1u, &v20, 0);
  Function_2019ebc(v4, 1u);
  v13 = 0;
  v14 = 0;
  v15 = 2048;
  v16 = 0;
  v17 = 84017153;
  v18 = 512;
  v19 = 0;
  Function_20183c4(v4, 2u, &v13, 0);
  Function_2019ebc(v4, 2u);
  v6 = 0;
  v7 = 0;
  v8 = 2048;
  v9 = 0;
  v10 = 134414337;
  v11 = 768;
  v12 = 0;
  Function_20183c4(v4, 7u, &v6, 0);
  return Function_2019ebc(v4, 7u);
}

//----- (021D11A4) --------------------------------------------------------
uint __fastcall Function_21d11a4(int a1)
{
  int v1;

  v1 = a1;
  Function_2019044(a1, 0);
  Function_2019044(v1, 1);
  Function_2019044(v1, 2);
  Function_2019044(v1, 7);
  return free(v1);
}

//----- (021D11D0) --------------------------------------------------------
int Function_21d11d0()
{
  int result;

  REG_DISPCNT = REG_DISPCNT & 0xFFFF1FFF | 0x2000;
  WIN_IN = WIN_IN & 0xFFC0 | 0x3F;
  WIN_OUT = WIN_OUT & 0xFFC0 | 0x3F;
  WIN0_X1 = 255;
  result = 67108932;
  WIN0_Y1 = 255;
  return result;
}

//----- (021D121C) --------------------------------------------------------
uint __fastcall Function_21d121c(int a1)
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

  v1 = a1;
  v2 = Function_21d19e4(a1);
  Function_20a71b0(v2, (uint *)(v1 + 1096));
  Function_201972c(1u, *(uint *)(*(uint *)(v1 + 1096) + 12), 416, 0);
  free(v2);
  v3 = Function_21d19e4(v1);
  NNS_G2dGetUnpackedPaletteData(v3, (uint *)(v1 + 1092));
  Function_201958c(
    *(uint **)(v1 + 1084),
    1u,
    *(int **)(*(uint *)(v1 + 1092) + 20),
    *(uint *)(*(uint *)(v1 + 1092) + 16),
    0);
  free(v3);
  v4 = Function_21d19e4(v1);
  Function_20a7248(v4, (uint *)(v1 + 1088));
  Function_2019574(
    *(uint *)(v1 + 1084),
    1,
    (int *)(*(uint *)(v1 + 1088) + 12),
    *(uint *)(*(uint *)(v1 + 1088) + 8));
  Function_2019448(*(uint **)(v1 + 1084), 1u);
  free(v4);
  v5 = Function_21d19e4(v1);
  NNS_G2dGetUnpackedPaletteData(v5, (uint *)(v1 + 1092));
  Function_201958c(
    *(uint **)(v1 + 1084),
    2u,
    *(int **)(*(uint *)(v1 + 1092) + 20),
    *(uint *)(*(uint *)(v1 + 1092) + 16),
    0);
  free(v5);
  v6 = Function_21d19e4(v1);
  Function_20a7248(v6, (uint *)(v1 + 1088));
  Function_2019574(
    *(uint *)(v1 + 1084),
    2,
    (int *)(*(uint *)(v1 + 1088) + 12),
    *(uint *)(*(uint *)(v1 + 1088) + 8));
  Function_2019448(*(uint **)(v1 + 1084), 2u);
  free(v6);
  v7 = Function_21d19e4(v1);
  Function_20a71b0(v7, (uint *)(v1 + 1096));
  Function_201972c(7u, *(uint *)(*(uint *)(v1 + 1096) + 12), 416, 0);
  free(v7);
  v8 = Function_21d19e4(v1);
  NNS_G2dGetUnpackedPaletteData(v8, (uint *)(v1 + 1092));
  Function_201958c(
    *(uint **)(v1 + 1084),
    7u,
    *(int **)(*(uint *)(v1 + 1092) + 20),
    *(uint *)(*(uint *)(v1 + 1092) + 16),
    0);
  free(v8);
  v9 = Function_21d19e4(v1);
  Function_20a7248(v9, (uint *)(v1 + 1088));
  Function_2019574(
    *(uint *)(v1 + 1084),
    7,
    (int *)(*(uint *)(v1 + 1088) + 12),
    *(uint *)(*(uint *)(v1 + 1088) + 8));
  Function_2019448(*(uint **)(v1 + 1084), 7u);
  return free(v9);
}

//----- (021D13C8) --------------------------------------------------------
int __fastcall Function_21d13c8(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = a1 + 1032;
  Function_200daa4(*(uint **)(a1 + 1084), 0, 1, 15, 0, 79);
  Function_200dd0c(*(uint **)(v1 + 1084), 0, 31, 14, *(uint *)(v1 + 1220), 79);
  LoadFromNARC_PlFont2(0, 480, 79);
  *(uint *)(v1 + 1032) = LoadFromMsgNARC(0, 26, 544, 0x4Fu);
  *(uint *)(v2 + 4) = Function_200b358(0x4Fu);
  Function_201a8d4(*(uint **)(v1 + 1084), v2 + 8, (uchar *)dword_21D8588);
  result = Function_2023790(256, 0x4Fu);
  *(uint *)(v2 + 24) = result;
  return result;
}

//----- (021D1458) --------------------------------------------------------
uint __fastcall Function_21d1458(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = a1 + 1032;
  v3 = a1 + 1040;
  Function_201acf4(a1 + 1040);
  Function_201a8fc(v3);
  Function_200b190(*(ushort **)(v1 + 1032));
  Function_200b3f0(*(uint **)(v2 + 4), v4);
  return Function_20237bc_FreeMsg(*(uint *)(v2 + 24), v5);
}

//----- (021D148C) --------------------------------------------------------
int __fastcall Function_21d148c(int a1, uint a2)
{
  int v2;
  uint v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = a2;
  v4 = a1 + 1032;
  Function_200e060(a1 + 1040, 1, 31, 0xEu);
  Function_201ada4_ClearTextBox(v4 + 8, 15);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v2 + 1032), v3, *(ushort **)(v4 + 24));
  v5 = *(uint *)(v4 + 24);
  Function_201d738_CallInitTextInterpreter(v4 + 8, 1);
  return Function_201a9a4(v4 + 8);
}

//----- (021D14E4) --------------------------------------------------------
int __fastcall Function_21d14e4(int a1)
{
  int v1;

  v1 = a1;
  Function_200e084(a1 + 1040, 1);
  Function_201ada4_ClearTextBox(v1 + 1040, 0);
  return Function_201a9a4(v1 + 1040);
}

//----- (021D150C) --------------------------------------------------------
int Function_21d150c()
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = 32;
  v2 = 0x4000;
  v3 = 0x4000;
  v4 = 79;
  Function_201e88c(&v1, 2097168, 2097168);
  Function_201f834(16, 0x4Fu);
  Function_201e994();
  return Function_201f8e4();
}

//----- (021D1544) --------------------------------------------------------
int *Function_21d1544()
{
  Function_201e958();
  return Function_201f8b4();
}

//----- (021D1550) --------------------------------------------------------
int __fastcall Function_21d1550(int a1)
{
  int v1;

  v1 = a1;
  Function_20a7944();
  Function_200a784(0, 128, 0, 32, 0, 0x80u, 0, 0x20u, 0x4Fu);
  *(uint *)(v1 + 1104) = Function_21d7e48(79);
  return Function_21d15bc(v1);
}

//----- (021D15A4) --------------------------------------------------------
int *__fastcall Function_21d15a4(int a1)
{
  int v1;

  v1 = a1;
  Function_21d1868();
  Function_21d7fb4(*(uint *)(v1 + 1104));
  return Function_200a878();
}

//----- (021D15BC) --------------------------------------------------------
int __fastcall Function_21d15bc(int a1)
{
  int v1;

  v1 = a1;
  Function_21d80e4(*(uint *)(a1 + 1104), 1, *(uint *)(a1 + 1080), 11, 0);
  Function_21d80e4(*(uint *)(v1 + 1104), 1, *(uint *)(v1 + 1080), 21, 1);
  Function_21d80e4(*(uint *)(v1 + 1104), 2, *(uint *)(v1 + 1080), 68, 6);
  Function_21d80e4(*(uint *)(v1 + 1104), 2, *(uint *)(v1 + 1080), 71, 7);
  Function_21d80e4(*(uint *)(v1 + 1104), 2, *(uint *)(v1 + 1080), 64, 8);
  Function_21d80e4(*(uint *)(v1 + 1104), 2, *(uint *)(v1 + 1080), 60, 9);
  Function_21d81b4(*(uint *)(v1 + 1104), 3, *(uint *)(v1 + 1080), 10, 0);
  Function_21d81b4(*(uint *)(v1 + 1104), 1, *(uint *)(v1 + 1080), 20, 1);
  Function_21d81b4(*(uint *)(v1 + 1104), 2, *(uint *)(v1 + 1080), 67, 6);
  Function_21d81b4(*(uint *)(v1 + 1104), 2, *(uint *)(v1 + 1080), 63, 7);
  Function_21d8288(*(uint *)(v1 + 1104), *(uint *)(v1 + 1080), 12, 0);
  Function_21d8288(*(uint *)(v1 + 1104), *(uint *)(v1 + 1080), 22, 1);
  Function_21d8288(*(uint *)(v1 + 1104), *(uint *)(v1 + 1080), 69, 6);
  Function_21d8288(*(uint *)(v1 + 1104), *(uint *)(v1 + 1080), 72, 7);
  Function_21d8288(*(uint *)(v1 + 1104), *(uint *)(v1 + 1080), 65, 8);
  Function_21d8288(*(uint *)(v1 + 1104), *(uint *)(v1 + 1080), 61, 9);
  Function_21d82f0(*(uint *)(v1 + 1104), *(uint *)(v1 + 1080), 13, 0);
  Function_21d82f0(*(uint *)(v1 + 1104), *(uint *)(v1 + 1080), 23, 1);
  Function_21d82f0(*(uint *)(v1 + 1104), *(uint *)(v1 + 1080), 70, 6);
  Function_21d82f0(*(uint *)(v1 + 1104), *(uint *)(v1 + 1080), 73, 7);
  Function_21d82f0(*(uint *)(v1 + 1104), *(uint *)(v1 + 1080), 66, 8);
  Function_21d82f0(*(uint *)(v1 + 1104), *(uint *)(v1 + 1080), 62, 9);
  Function_21d814c(*(uint *)(v1 + 1104), 0);
  Function_21d814c(*(uint *)(v1 + 1104), 1);
  Function_21d814c(*(uint *)(v1 + 1104), 6);
  Function_21d814c(*(uint *)(v1 + 1104), 7);
  Function_21d814c(*(uint *)(v1 + 1104), 8);
  Function_21d814c(*(uint *)(v1 + 1104), 9);
  Function_21d8180(*(uint *)(v1 + 1104), 0);
  Function_21d8180(*(uint *)(v1 + 1104), 1);
  Function_21d8180(*(uint *)(v1 + 1104), 6);
  Function_21d8180(*(uint *)(v1 + 1104), 7);
  Function_21d8180(*(uint *)(v1 + 1104), 8);
  Function_21d8180(*(uint *)(v1 + 1104), 9);
  Function_21d8220(*(uint *)(v1 + 1104), 0);
  Function_21d8220(*(uint *)(v1 + 1104), 1);
  Function_21d8220(*(uint *)(v1 + 1104), 6);
  Function_21d8220(*(uint *)(v1 + 1104), 7);
  Function_21d8254(*(uint *)(v1 + 1104), 0);
  Function_21d8254(*(uint *)(v1 + 1104), 1);
  Function_21d8254(*(uint *)(v1 + 1104), 6);
  return Function_21d8254(*(uint *)(v1 + 1104), 7);
}

//----- (021D1868) --------------------------------------------------------
void Function_21d1868()
{
  ;
}

//----- (021D186C) --------------------------------------------------------
int *__fastcall Function_21d186c(int a1)
{
  int v1;
  int *result;

  v1 = a1;
  result = Function_20711ec(0x4Fu, 128);
  *(uint *)(v1 + 1100) = result;
  return result;
}

//----- (021D1884) --------------------------------------------------------
uint __fastcall Function_21d1884(int a1)
{
  return Function_207121c(*(uint *)(a1 + 1100));
}

//----- (021D1894) --------------------------------------------------------
int __fastcall Function_21d1894(int a1, int a2)
{
  uint *v2;
  int result;

  v2 = (uint *)(a1 + 1060);
  result = *(uint *)(a1 + 1068);
  if ( result != a2 )
  {
    result = v2[3];
    if ( result != a2 )
    {
      v2[3] = a2;
      result = 1;
      *v2 = 1;
      v2[1] = 1;
    }
  }
  return result;
}

//----- (021D18B4) --------------------------------------------------------
int __fastcall Function_21d18b4(int a1)
{
  return *(uint *)(a1 + 1064);
}

//----- (021D18C0) --------------------------------------------------------
uint *__fastcall Function_21d18c0(int a1)
{
  uint *v1;
  uint *result;

  v1 = (uint *)(a1 + 1060);
  v1[2] = 0;
  v1[3] = 3;
  result = AddTaskToTaskList1((int)Function_21d18f4, a1, 0x90u);
  v1[4] = result;
  return result;
}

//----- (021D18E4) --------------------------------------------------------
int __fastcall Function_21d18e4(int a1)
{
  return Call_RemoveTaskFromTaskList(*(int **)(a1 + 1076));
}

//----- (021D18F4) --------------------------------------------------------
int __fastcall Function_21d18f4(int a1, int a2)
{
  int result;
  int *v3;
  int v4;
  int v5;
  int v6;

  result = 1060;
  v3 = (int *)(a2 + 1060);
  v4 = *(uint *)(a2 + 1060);
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      v5 = v3[2];
      if ( v5 )
      {
        if ( v5 == 1 )
        {
          Function_20055d0(1184, 0);
        }
        else if ( v5 == 2 )
        {
          Function_20055d0(1185, 0);
        }
      }
      else
      {
        Function_20049f4((uint *)1, 1);
      }
      result = *v3 + 1;
      *v3 = result;
    }
    else if ( v4 == 2 )
    {
      v6 = v3[3];
      if ( v6 )
      {
        if ( v6 == 1 )
        {
          Function_2005474(0x4A0u);
        }
        else if ( v6 == 2 )
        {
          Function_2005474(0x4A1u);
        }
      }
      else
      {
        Function_20049f4((uint *)1, 0);
      }
      v3[2] = v3[3];
      v3[3] = 3;
      result = 0;
      v3[1] = 0;
      *v3 = 0;
    }
  }
  return result;
}

//----- (021D197C) --------------------------------------------------------
int __fastcall Function_21d197c(int a1)
{
  int v1;

  v1 = a1;
  Function_201dcac();
  Function_200a858();
  return Function_201c2b8(*(uint *)(v1 + 1084));
}

//----- (021D1998) --------------------------------------------------------
int *__fastcall Function_21d1998(int a1)
{
  uint v1;
  int *v2;

  v1 = a1;
  v2 = (int *)malloc(0x4Fu, a1);
  if ( !v2 )
    ErrorHandler();
  Call_FillMemWithValue(v2, 0, v1);
  return v2;
}

//----- (021D19BC) --------------------------------------------------------
int *__fastcall Function_21d19bc(int a1, int a2, int a3, int a4)
{
  int v4;
  int *result;

  v4 = a1;
  result = LoadFromNARC_8(133, 0x4Fu, a3, a4);
  *(uint *)(v4 + 1080) = result;
  return result;
}

//----- (021D19D4) --------------------------------------------------------
uint __fastcall Function_21d19d4(int a1)
{
  return Call_FS_CloseFile(*(int **)(a1 + 1080));
}

//----- (021D19E4) --------------------------------------------------------
int __fastcall Function_21d19e4(int a1, uint a2, int a3, int a4)
{
  int v4;
  uint v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = Function_2006d84_GetFilesize(*(uint *)(a1 + 1080), a2, a3, a4);
  if ( v6 == 1 )
    v8 = malloc(0x4Fu, v7);
  else
    v8 = malloc2(0x4Fu, v7);
  v9 = v8;
  if ( !v8 )
    ErrorHandler();
  LoadFileFromNARCFileHandler(*(uint *)(v4 + 1080), v5, v9);
  return v9;
}

//----- (021D1A28) --------------------------------------------------------
int __fastcall Function_21d1a28(int a1)
{
  int v1;

  v1 = a1;
  Function_21d1a68();
  Function_21d2b8c(v1);
  Function_21d45c4(v1);
  Function_21d4764(v1);
  return Function_21d4d38(v1);
}

//----- (021D1A4C) --------------------------------------------------------
int __fastcall Function_21d1a4c(int a1)
{
  int v1;

  v1 = a1;
  Function_21d2bc0();
  Function_21d45e8(v1);
  Function_21d4788(v1);
  return Function_21d4ea4(v1);
}

//----- (021D1A68) --------------------------------------------------------
uint *__fastcall Function_21d1a68(int a1)
{
  int v1;
  int v2;
  uint v3;
  int v4;
  uint *result;
  int v6;

  v1 = a1;
  v2 = 0;
  do
  {
    v3 = PRNG();
    s32_div_f(v3, 21);
    *(uint *)(v1 + 168) = v4;
    *(uint *)(v1 + 144) = 2752512 - (v4 << 17);
    s32_div_f(*(uint *)(v1 + 144), 2752512);
    result = (uint *)(v1 + 144);
    ++v2;
    v1 += 4;
    *result = v6;
  }
  while ( v2 < 3 );
  return result;
}

//----- (021D1AAC) --------------------------------------------------------
BOOL __fastcall Function_21d1aac(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  do
    v2 = ((int (__fastcall *)(uint *))*(&off_21D8838 + *v1))(v1);
  while ( v2 == 1 );
  return v2 == 2;
}

//----- (021D1AD0) --------------------------------------------------------
int __fastcall Function_21d1ad0(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  a1[25] = 0;
  a1[26] = 0;
  a1[35] = 0x10000;
  a1[29] = 0;
  a1[2] = 0;
  *a1 = 1;
  ((void (*)(void))Function_21d5938)();
  Function_21d5938(v1, 1);
  Function_21d5938(v1, 2);
  Function_21d4ff8(v1);
  Function_21d5200(v1);
  v2 = v1[24];
  if ( v2 )
  {
    if ( v2 >= 3 )
    {
      if ( v2 >= 50000 )
      {
        *v1 = 61;
        v1[1] = 1;
      }
    }
    else
    {
      *v1 = 59;
      v1[1] = 63;
    }
  }
  else
  {
    *v1 = 60;
    v1[1] = 63;
  }
  return 1;
}

//----- (021D1B40) --------------------------------------------------------
int __fastcall Function_21d1b40(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  if ( Function_21d55f8(8) )
  {
    Function_21d5244(v1);
    *v1 = 63;
    result = 0;
  }
  else
  {
    if ( Function_21d55f8(1024) )
    {
      v1[24] -= 3;
      v1[279] += 3;
      *v1 = 2;
      Function_2005748(0x5EDu);
      Function_21d5244(v1);
      Function_21d5010(v1);
    }
    result = 0;
  }
  return result;
}

//----- (021D1B9C) --------------------------------------------------------
int __fastcall Function_21d1b9c(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  if ( Function_21d55f8(8) )
  {
    v1[24] += 3;
    *v1 = 63;
    result = 0;
  }
  else if ( Function_21d55f8(1152) )
  {
    *v1 = 3;
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}

//----- (021D1BD0) --------------------------------------------------------
int __fastcall Function_21d1bd0(uint *a1)
{
  uint *v1;
  int v2;
  int v3;

  v1 = a1;
  Function_21d40a8();
  ++v1[280];
  ++v1[281];
  v1[28] = 0;
  if ( v1[29] & 0x33 )
    v1[28] = 1;
  v1[12] = 0;
  if ( v1[29] )
  {
    if ( Function_21d41ec(v1) )
    {
      v1[85] = Function_21d5814(v1[29]);
      v3 = 292;
      v2 = v1[292] + 1;
    }
    else
    {
      v2 = 4;
      v3 = 85;
    }
    v1[v3] = v2;
    v1[12] = 1;
    Function_21d4798(v1);
  }
  Function_21d5938(v1, 0);
  Function_21d5938(v1, 1);
  Function_21d5938(v1, 2);
  Function_21d5010(v1);
  Function_21d2bdc(v1, 0);
  Function_21d2bdc(v1, 1);
  Function_21d2bdc(v1, 2);
  Function_21d5848(v1);
  v1[31] = 1;
  v1[32] = 1;
  v1[33] = 1;
  v1[27] = 0;
  *v1 = 4;
  Function_2005748(0x5EEu);
  return 1;
}

//----- (021D1C9C) --------------------------------------------------------
int __fastcall Function_21d1c9c(uint *a1)
{
  int v1;

  v1 = a1[27] + 4096;
  a1[27] = v1;
  if ( v1 < 0x8000 )
    return 0;
  a1[27] = 0;
  *a1 = 5;
  return 1;
}

//----- (021D1CBC) --------------------------------------------------------
int __fastcall Function_21d1cbc(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( a1[31] == 1 && dword_21BF6C4 & 0x800 )
  {
    a1[31] = 2;
    Function_21d5858(a1);
    if ( !Function_21d5880(v1) )
      v1[28] = 0;
    Function_21d58f4(v1, 0);
    Function_21d2bf4(v1, 0);
    Function_2005748(0x626u);
  }
  else if ( a1[32] == 1 && dword_21BF6C4 & 2 )
  {
    a1[32] = 2;
    Function_21d5858(a1);
    if ( !Function_21d5880(v1) )
      v1[28] = 0;
    Function_21d58f4(v1, 1);
    Function_21d2bf4(v1, 1);
    Function_2005748(0x626u);
  }
  else if ( a1[33] == 1 && dword_21BF6C4 & 1 )
  {
    a1[33] = 2;
    Function_21d5858(a1);
    if ( !Function_21d5880(v1) )
      v1[28] = 0;
    Function_21d58f4(v1, 2);
    Function_21d2bf4(v1, 2);
    Function_2005748(0x626u);
  }
  if ( v1[31] == 2 && v1[32] == 2 && v1[33] == 2 )
    *v1 = 6;
  return 0;
}

//----- (021D1DB4) --------------------------------------------------------
int __fastcall Function_21d1db4(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( ((int (*)(void))Function_21d2c04)() == 1 || Function_21d2c04(v1, 1) == 1 || Function_21d2c04(v1, 2) == 1 )
    return 0;
  Function_21d4ff8(v1);
  *v1 = 7;
  return 1;
}

//----- (021D1DEC) --------------------------------------------------------
int __fastcall Function_21d1dec(int *a1)
{
  int *v1;
  int v2;
  int v3;
  int v4;
  int result;
  int v6;
  int v7;

  v1 = a1;
  v2 = a1[29];
  v3 = Function_21d5778();
  v1[17] = v3;
  if ( v3 == 6 )
  {
    v4 = v1[29];
    if ( v4 & 0xAA )
    {
      *v1 = 16;
      result = 1;
    }
    else
    {
      if ( v4 )
        *v1 = 10;
      else
        *v1 = 8;
      result = 1;
    }
  }
  else
  {
    v6 = v1[29];
    if ( v6 & 0xAA )
    {
      if ( v6 & 2 )
        v7 = 21;
      else
        v7 = 19;
      *v1 = v7;
      result = 1;
    }
    else
    {
      if ( v3 == 2 )
        *v1 = 14;
      else
        *v1 = 12;
      result = 1;
    }
  }
  return result;
}

//----- (021D1E54) --------------------------------------------------------
int __fastcall Function_21d1e54(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_21d4ff8(a1);
  v1[27] = 0;
  *v1 = 9;
  return 1;
}

//----- (021D1E68) --------------------------------------------------------
int __fastcall Function_21d1e68(uint *a1)
{
  int v1;

  v1 = a1[27] + 4096;
  a1[27] = v1;
  if ( v1 >= 0x8000 )
  {
    a1[27] = 0;
    *a1 = 0;
  }
  return 0;
}

//----- (021D1E84) --------------------------------------------------------
int __fastcall Function_21d1e84(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_21d4ff8(a1);
  Function_21d4798(v1);
  *v1 = 11;
  return 0;
}

//----- (021D1E9C) --------------------------------------------------------
int __fastcall Function_21d1e9c(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( Function_21d47ac() != 1 )
    return 0;
  Function_21d4798(v1);
  *v1 = 0;
  return 1;
}

//----- (021D1EBC) --------------------------------------------------------
int __fastcall Function_21d1ebc(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  v2 = Function_21d597c();
  v1[25] = v2;
  v1[278] += v2;
  v1[27] = 0;
  *v1 = 13;
  Function_21d45f8(v1);
  Function_21d4798(v1);
  return 0;
}

//----- (021D1EEC) --------------------------------------------------------
int __fastcall Function_21d1eec(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  v2 = a1[27] + 4096;
  a1[27] = v2;
  if ( v2 == 122880 )
  {
    Function_21d4798(a1);
  }
  else if ( v2 > 122880 && Function_21d460c() == 1 && Function_21d47ac(v1) == 1 )
  {
    Function_21d4798(v1);
    v1[27] = 0;
    *v1 = 0;
    return 1;
  }
  return 0;
}

//----- (021D1F34) --------------------------------------------------------
int __fastcall Function_21d1f34(uint *a1)
{
  uint *v1;

  v1 = a1;
  a1[25] = 0;
  a1[27] = 0;
  *a1 = 15;
  Function_21d45f8(a1);
  Function_21d4798(v1);
  return 0;
}

//----- (021D1F54) --------------------------------------------------------
int __fastcall Function_21d1f54(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  v2 = a1[27] + 4096;
  a1[27] = v2;
  if ( v2 == 61440 )
  {
    Function_21d4798(a1);
  }
  else if ( v2 > 61440 && Function_21d460c() == 1 && Function_21d47ac(v1) == 1 )
  {
    Function_21d4798(v1);
    v1[27] = 0;
    *v1 = 3;
    return 1;
  }
  return 0;
}

//----- (021D1FA0) --------------------------------------------------------
int __fastcall Function_21d1fa0(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  Function_21d4ff8(a1);
  Function_21d4210(v1);
  Function_21d42d0(v1);
  Function_21d4798(v1);
  result = 0;
  v1[27] = 0;
  *v1 = 17;
  return result;
}

//----- (021D1FC8) --------------------------------------------------------
int __fastcall Function_21d1fc8(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  v2 = a1[27] + 4096;
  a1[27] = v2;
  if ( v2 >= 0x8000 )
  {
    Function_21d4798(a1);
    Function_21d1894((int)v1, 1);
    *v1 = 18;
  }
  return 0;
}

//----- (021D1FF4) --------------------------------------------------------
int __fastcall Function_21d1ff4(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( Function_21d47ac(a1) != 1 )
    return 0;
  *v1 = 23;
  return 1;
}

//----- (021D200C) --------------------------------------------------------
int __fastcall Function_21d200c(uint *a1)
{
  uint *v1;

  v1 = a1;
  a1[25] = Function_21d597c();
  v1[27] = 0;
  *v1 = 20;
  Function_21d45f8(v1);
  Function_21d4210(v1);
  Function_21d42d0(v1);
  Function_21d4798(v1);
  return 0;
}

//----- (021D203C) --------------------------------------------------------
int __fastcall Function_21d203c(int a1)
{
  uint *v1;
  int v2;

  v1 = (uint *)a1;
  v2 = *(uint *)(a1 + 108) + 4096;
  *(uint *)(a1 + 108) = v2;
  if ( v2 == 122880 )
  {
    Function_21d1894(a1, 1);
    Function_21d4798(v1);
  }
  else if ( v2 >= 122880 && Function_21d460c() == 1 && Function_21d47ac(v1) == 1 )
  {
    v1[27] = 0;
    *v1 = 23;
    return 1;
  }
  return 0;
}

//----- (021D2088) --------------------------------------------------------
int __fastcall Function_21d2088(uint *a1)
{
  uint *v1;

  v1 = a1;
  a1[27] = 0;
  *a1 = 22;
  Function_21d45f8(a1);
  Function_21d4798(v1);
  Function_21d4210(v1);
  Function_21d42d0(v1);
  return 0;
}

//----- (021D20B0) --------------------------------------------------------
int __fastcall Function_21d20b0(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  v2 = a1[27] + 4096;
  a1[27] = v2;
  if ( v2 == 0x8000 )
  {
    Function_21d4798(a1);
    Function_21d1894((int)v1, 1);
  }
  else if ( v2 >= 0x8000 && Function_21d460c() == 1 && Function_21d47ac(v1) == 1 )
  {
    v1[27] = 0;
    *v1 = 24;
    return 1;
  }
  return 0;
}

//----- (021D20FC) --------------------------------------------------------
int __fastcall Function_21d20fc(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( a1[20] >= 6 )
    ErrorHandler();
  *v1 = 25;
  return 1;
}

//----- (021D2114) --------------------------------------------------------
int __fastcall Function_21d2114(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( a1[20] >= 6 )
    ErrorHandler();
  *v1 = 28;
  return 1;
}

//----- (021D212C) --------------------------------------------------------
int __fastcall Function_21d212c(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  a1[25] = 0;
  a1[26] = 0;
  *a1 = 26;
  a1[29] = 0;
  Function_21d5938(a1, 0);
  Function_21d5938(v1, 1);
  Function_21d5938(v1, 2);
  Function_21d4ff8(v1);
  Function_21d5200(v1);
  Function_21d4798(v1);
  v2 = v1[24];
  if ( v2 )
  {
    if ( v2 >= 3 )
    {
      if ( v2 >= 50000 )
      {
        *v1 = 61;
        v1[1] = 26;
      }
    }
    else
    {
      *v1 = 59;
      v1[1] = 63;
    }
  }
  else
  {
    *v1 = 60;
    v1[1] = 63;
  }
  return 1;
}

//----- (021D2198) --------------------------------------------------------
int __fastcall Function_21d2198(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  if ( Function_21d55f8(8) )
  {
    *v1 = 63;
    Function_21d5244(v1);
    result = 0;
  }
  else
  {
    if ( Function_21d55f8(1024) )
    {
      v1[24] -= 3;
      v1[279] += 3;
      *v1 = 27;
      Function_2005748(0x5EDu);
      Function_21d5244(v1);
      Function_21d5010(v1);
    }
    result = 0;
  }
  return result;
}

//----- (021D21F4) --------------------------------------------------------
int __fastcall Function_21d21f4(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  if ( Function_21d55f8(8) )
  {
    v1[24] += 3;
    *v1 = 63;
    result = 0;
  }
  else if ( Function_21d55f8(1152) )
  {
    *v1 = 28;
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}

//----- (021D2228) --------------------------------------------------------
int __fastcall Function_21d2228(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_21d4394();
  ++v1[280];
  ++v1[282];
  v1[28] = 0;
  if ( v1[29] & 0x33 )
    v1[28] = 1;
  v1[12] = 0;
  if ( v1[29] )
    v1[12] = 1;
  Function_21d5938(v1, 0);
  Function_21d5938(v1, 1);
  Function_21d5938(v1, 2);
  Function_21d5010(v1);
  Function_21d2bdc(v1, 0);
  Function_21d2bdc(v1, 1);
  Function_21d2bdc(v1, 2);
  Function_21d5848(v1);
  Function_21d4798(v1);
  v1[31] = 1;
  v1[32] = 1;
  v1[33] = 1;
  v1[27] = 0;
  *v1 = 29;
  Function_2005748(0x5EEu);
  return 1;
}

//----- (021D22D0) --------------------------------------------------------
int __fastcall Function_21d22d0(uint *a1)
{
  int v1;

  v1 = a1[27] + 4096;
  a1[27] = v1;
  if ( v1 < 0x8000 )
    return 0;
  a1[27] = 0;
  *a1 = 30;
  return 1;
}

//----- (021D22F0) --------------------------------------------------------
int __fastcall Function_21d22f0(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( a1[31] == 1 && dword_21BF6C4 & 0x800 )
  {
    a1[31] = 2;
    Function_21d5858(a1);
    if ( !Function_21d5880(v1) )
      v1[28] = 0;
    Function_21d58f4(v1, 0);
    Function_21d2bf4(v1, 0);
    Function_2005748(0x626u);
  }
  else if ( a1[32] == 1 && dword_21BF6C4 & 2 )
  {
    a1[32] = 2;
    Function_21d5858(a1);
    if ( !Function_21d5880(v1) )
      v1[28] = 0;
    Function_21d58f4(v1, 1);
    Function_21d2bf4(v1, 1);
    Function_2005748(0x626u);
  }
  else if ( a1[33] == 1 && dword_21BF6C4 & 1 )
  {
    a1[33] = 2;
    Function_21d5858(a1);
    if ( !Function_21d5880(v1) )
      v1[28] = 0;
    Function_21d58f4(v1, 2);
    Function_21d2bf4(v1, 2);
    Function_2005748(0x626u);
  }
  if ( v1[31] == 2 && v1[32] == 2 && v1[33] == 2 )
    *v1 = 31;
  return 0;
}

//----- (021D23E8) --------------------------------------------------------
int __fastcall Function_21d23e8(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( Function_21d2c04(a1, 0) == 1 || Function_21d2c04(v1, 1) == 1 || Function_21d2c04(v1, 2) == 1 )
    return 0;
  Function_21d4ff8(v1);
  *v1 = 32;
  return 1;
}

//----- (021D2420) --------------------------------------------------------
int __fastcall Function_21d2420(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  v2 = a1[29];
  v3 = Function_21d5778();
  v1[17] = v3;
  if ( v3 == 6 )
  {
    *v1 = 33;
    result = 1;
  }
  else if ( v1[29] & 0x300 )
  {
    *v1 = 39;
    result = 1;
  }
  else
  {
    if ( v3 == 2 )
      *v1 = 37;
    else
      *v1 = 35;
    result = 1;
  }
  return result;
}

//----- (021D2464) --------------------------------------------------------
int __fastcall Function_21d2464(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_21d4ff8(a1);
  Function_21d4798(v1);
  v1[27] = 0;
  *v1 = 34;
  return 1;
}

//----- (021D2480) --------------------------------------------------------
int __fastcall Function_21d2480(uint *a1)
{
  int v1;

  v1 = a1[27] + 4096;
  a1[27] = v1;
  if ( v1 < 0x8000 )
    return 0;
  a1[27] = 0;
  *a1 = 25;
  return 1;
}

//----- (021D24A0) --------------------------------------------------------
int __fastcall Function_21d24a0(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  v2 = Function_21d597c();
  v1[25] = v2;
  v1[278] += v2;
  v1[27] = 0;
  *v1 = 36;
  Function_21d45f8(v1);
  Function_21d4798(v1);
  return 0;
}

//----- (021D24D0) --------------------------------------------------------
int __fastcall Function_21d24d0(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( Function_21d460c() != 1 )
    return 0;
  Function_21d4798(v1);
  *v1 = 25;
  return 1;
}

//----- (021D24F0) --------------------------------------------------------
int __fastcall Function_21d24f0(uint *a1)
{
  uint *v1;

  v1 = a1;
  a1[25] = 0;
  a1[27] = 0;
  *a1 = 38;
  Function_21d45f8(a1);
  Function_21d4798(v1);
  return 0;
}

//----- (021D2510) --------------------------------------------------------
int __fastcall Function_21d2510(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  v2 = a1[27] + 4096;
  a1[27] = v2;
  if ( v2 <= 61440 || Function_21d460c() != 1 )
    return 0;
  Function_21d4798(v1);
  Function_21d4ff8(v1);
  v1[27] = 0;
  *v1 = 28;
  return 1;
}

//----- (021D254C) --------------------------------------------------------
int __fastcall Function_21d254c(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  v2 = Function_21d597c();
  v1[25] = v2;
  v1[278] += v2;
  v1[27] = 0;
  *v1 = 40;
  Function_21d45f8(v1);
  Function_21d4798(v1);
  Function_21d53b0(v1);
  Function_21d1894((int)v1, 2);
  v1[277] = Function_21d7b08(v1);
  return 0;
}

//----- (021D2598) --------------------------------------------------------
int __fastcall Function_21d2598(int a1)
{
  int v1;

  v1 = a1;
  if ( Function_21d460c() != 1 )
    return 0;
  Function_207136c(*(int **)(v1 + 1108));
  Function_21d4798(v1);
  *(uint *)v1 = 41;
  return 1;
}

//----- (021D25C4) --------------------------------------------------------
int __fastcall Function_21d25c4(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  Function_21d47b4();
  v1[7] = 0;
  v1[5] = 0;
  result = 1;
  v1[2] = 1;
  *v1 = 42;
  return result;
}

//----- (021D25DC) --------------------------------------------------------
int __fastcall Function_21d25dc(uint *a1)
{
  uint *v1;
  uint v2;

  v1 = a1;
  ++a1[3];
  v2 = a1[7] + 1;
  a1[7] = v2;
  if ( v2 > 0x3E7 )
    a1[7] = 999;
  Function_21d79bc(a1, a1[7]);
  v1[4] = 16;
  v1[2] = 1;
  v1[9] = 0;
  v1[10] = 0;
  v1[11] = 0;
  if ( !Function_21d44e8(v1) )
    v1[11] = 1;
  *v1 = 43;
  return 1;
}

//----- (021D2628) --------------------------------------------------------
int __fastcall Function_21d2628(uint *a1)
{
  uint *v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = a1[4] - 1;
  v1[4] = v2;
  if ( v2 < 1 )
    ErrorHandler();
  Function_21d5938(v1, 0);
  Function_21d5938(v1, 1);
  Function_21d5938(v1, 2);
  Function_21d4ff8(v1);
  Function_21d5200(v1);
  Function_21d4798(v1);
  *v1 = 44;
  v3 = v1[24];
  if ( v3 )
  {
    if ( v3 >= 1 )
    {
      if ( v3 >= 50000 )
      {
        *v1 = 61;
        v1[1] = 44;
      }
    }
    else
    {
      *v1 = 60;
      v1[1] = 63;
    }
  }
  else
  {
    *v1 = 60;
    v1[1] = 63;
  }
  return 1;
}

//----- (021D269C) --------------------------------------------------------
int __fastcall Function_21d269c(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  if ( Function_21d55f8(8) )
  {
    *v1 = 63;
    result = 0;
  }
  else if ( Function_21d55f8(1024) )
  {
    --v1[24];
    --v1[5];
    ++v1[279];
    if ( v1[5] < 0 )
      v1[5] = 0;
    *v1 = 45;
    Function_2005748(0x5EDu);
    Function_21d5244(v1);
    Function_21d4fb8(v1, 0);
    result = 0;
  }
  else
  {
    result = 0;
  }
  return result;
}

//----- (021D2704) --------------------------------------------------------
int __fastcall Function_21d2704(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  if ( Function_21d55f8(8) )
  {
    ++v1[24];
    *v1 = 63;
    result = 0;
  }
  else if ( Function_21d55f8(1152) )
  {
    *v1 = 46;
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}

//----- (021D2738) --------------------------------------------------------
int __fastcall Function_21d2738(uint *a1)
{
  uint *v1;

  v1 = a1;
  ++a1[280];
  ++a1[283];
  a1[29] = 1;
  a1[12] = 1;
  a1[28] = 1;
  Function_21d5938(a1, 0);
  Function_21d5938(v1, 1);
  Function_21d5938(v1, 2);
  Function_21d4fb8(v1, 0);
  Function_21d2bdc(v1, 0);
  Function_21d2bdc(v1, 1);
  Function_21d2bdc(v1, 2);
  Function_21d5848(v1);
  Function_21d45b0(v1);
  v1[31] = 1;
  v1[32] = 1;
  v1[33] = 1;
  v1[27] = 0;
  *v1 = 47;
  Function_2005748(0x5EEu);
  if ( !v1[9] && !v1[10] )
  {
    if ( Function_21d44c4(v1) == 1 )
    {
      v1[10] = 1;
      ++v1[304];
    }
    if ( v1[10] == 1 )
      Function_21d53f8(v1, 1);
  }
  if ( !v1[9] && !v1[10] )
  {
    if ( Function_21d44a0(v1) == 1 )
    {
      v1[9] = 1;
      ++v1[303];
    }
    if ( v1[9] == 1 )
      Function_21d53f8(v1, 0);
  }
  return 1;
}

//----- (021D2828) --------------------------------------------------------
int __fastcall Function_21d2828(uint *a1)
{
  int v1;

  v1 = a1[27] + 4096;
  a1[27] = v1;
  if ( v1 < 0x8000 )
    return 0;
  a1[27] = 0;
  *a1 = 48;
  Function_21d4798(a1);
  return 1;
}

//----- (021D2850) --------------------------------------------------------
int __fastcall Function_21d2850(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( a1[31] == 1 && dword_21BF6C4 & 0x800 )
  {
    a1[31] = 2;
    Function_21d5858(a1);
    if ( !Function_21d58c0(v1) )
    {
      v1[28] = 0;
      v1[12] = 0;
    }
    Function_21d58f4(v1, 0);
    Function_21d2bf4(v1, 0);
    Function_2005748(0x5F5u);
  }
  else if ( a1[32] == 1 && dword_21BF6C4 & 2 )
  {
    a1[32] = 2;
    Function_21d5858(a1);
    if ( !Function_21d58c0(v1) )
    {
      v1[28] = 0;
      v1[12] = 0;
    }
    Function_21d58f4(v1, 1);
    Function_21d2bf4(v1, 1);
    Function_2005748(0x5F5u);
  }
  else if ( a1[33] == 1 && dword_21BF6C4 & 1 )
  {
    a1[33] = 2;
    Function_21d5858(a1);
    if ( !Function_21d58c0(v1) )
    {
      v1[28] = 0;
      v1[12] = 0;
    }
    Function_21d58f4(v1, 2);
    Function_21d2bf4(v1, 2);
    Function_2005748(0x5F5u);
  }
  if ( v1[31] == 2 && v1[32] == 2 && v1[33] == 2 )
    *v1 = 49;
  return 0;
}

//----- (021D2950) --------------------------------------------------------
int __fastcall Function_21d2950(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( Function_21d2c04(a1, 0) == 1 || Function_21d2c04(v1, 1) == 1 || Function_21d2c04(v1, 2) == 1 )
    return 0;
  Function_21d4ff8(v1);
  *v1 = 50;
  return 1;
}

//----- (021D2988) --------------------------------------------------------
int __fastcall Function_21d2988(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  bool v4;
  int v5;
  int result;

  v1 = a1;
  v2 = a1[29];
  v3 = Function_21d57ec();
  v1[17] = v3;
  v4 = v3 == 6;
  v5 = v1[10];
  if ( v4 )
  {
    if ( v5 == 1 )
      v1[10] = 3;
    *v1 = 51;
    result = 1;
  }
  else
  {
    if ( v5 == 1 )
      v1[10] = 2;
    *v1 = 52;
    result = 1;
  }
  return result;
}

//----- (021D29C0) --------------------------------------------------------
int __fastcall Function_21d29c0(int *a1)
{
  int *v1;
  int v2;

  v1 = a1;
  Function_21d4ff8(a1);
  Function_21d4798(v1);
  if ( v1[4] > 1 )
    v2 = 43;
  else
    v2 = 54;
  *v1 = v2;
  return 0;
}

//----- (021D29E4) --------------------------------------------------------
int __fastcall Function_21d29e4(uint *a1)
{
  uint *v1;
  int v2;
  int result;

  v1 = a1;
  v2 = dword_21D94F0[a1[17]];
  a1[25] = v2;
  a1[278] += v2;
  Function_21d45f8(a1);
  Function_21d4798(v1);
  result = 0;
  v1[27] = 0;
  *v1 = 53;
  return result;
}

//----- (021D2A18) --------------------------------------------------------
int __fastcall Function_21d2a18(int *a1)
{
  int *v1;
  int v3;

  v1 = a1;
  if ( !Function_21d460c() )
    return 0;
  Function_21d4798(v1);
  if ( v1[4] > 1 )
    v3 = 43;
  else
    v3 = 54;
  *v1 = v3;
  return 1;
}

//----- (021D2A44) --------------------------------------------------------
int __fastcall Function_21d2a44(uint *a1)
{
  uint *v1;
  int v2;
  int result;

  v1 = a1;
  v2 = a1[4] - 1;
  v1[4] = v2;
  if ( v2 )
    ErrorHandler();
  if ( v1[11] != 1 || v1[9] )
  {
    *v1 = 55;
    result = 1;
  }
  else
  {
    Function_21d4798(v1);
    *v1 = 58;
    result = 0;
  }
  return result;
}

//----- (021D2A78) --------------------------------------------------------
int __fastcall Function_21d2a78(uint *a1)
{
  uint *v1;
  int v2;
  int result;

  v1 = a1;
  Function_21d44fc();
  v2 = Function_21d4550(v1);
  if ( v1[9] == 1 )
    v2 = 2;
  if ( v2 == 2 )
  {
    Function_21d4798(v1);
    *v1 = 56;
    result = 0;
  }
  else
  {
    if ( v2 == 1 )
    {
      Function_21d4798(v1);
      *v1 = 57;
    }
    else
    {
      Function_2005844(0x23u, 0);
      *v1 = 42;
    }
    result = 0;
  }
  return result;
}

//----- (021D2AC8) --------------------------------------------------------
int __fastcall Function_21d2ac8(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( !Function_21d47ac(a1) )
    return 0;
  *v1 = 42;
  return 1;
}

//----- (021D2AE0) --------------------------------------------------------
int __fastcall Function_21d2ae0(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( !Function_21d47ac(a1) )
    return 0;
  *v1 = 42;
  return 1;
}

//----- (021D2AF8) --------------------------------------------------------
int __fastcall Function_21d2af8(uint *a1)
{
  uint *v1;
  uint v3;

  v1 = a1;
  if ( !Function_21d47ac(a1) )
    return 0;
  v3 = v1[7];
  if ( v3 > v1[8] )
    v1[8] = v3;
  Function_21d1894((int)v1, 0);
  Function_21d53d4(v1);
  *v1 = 0;
  return 1;
}

//----- (021D2B28) --------------------------------------------------------
int __fastcall Function_21d2b28(int a1)
{
  uint *v1;

  v1 = (uint *)a1;
  Function_21d148c(a1, 0);
  *v1 = 62;
  return 0;
}

//----- (021D2B3C) --------------------------------------------------------
int __fastcall Function_21d2b3c(int a1)
{
  uint *v1;

  v1 = (uint *)a1;
  Function_21d148c(a1, 2u);
  *v1 = 62;
  return 0;
}

//----- (021D2B50) --------------------------------------------------------
int __fastcall Function_21d2b50(int a1)
{
  uint *v1;

  v1 = (uint *)a1;
  Function_21d148c(a1, 1u);
  *v1 = 62;
  return 0;
}

//----- (021D2B64) --------------------------------------------------------
int __fastcall Function_21d2b64(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( Function_21d55f8(3) )
  {
    Function_21d14e4((int)v1);
    *v1 = v1[1];
  }
  return 0;
}

//----- (021D2B80) --------------------------------------------------------
int __fastcall Function_21d2b80(int a1)
{
  Function_21d5244(a1);
  return 2;
}

//----- (021D2B8C) --------------------------------------------------------
uint *__fastcall Function_21d2b8c(int a1)
{
  int v1;
  uint *v2;
  uint v3;
  int v4;
  uint *result;

  v1 = a1;
  v2 = (uint *)(a1 + 180);
  v3 = 0;
  v4 = a1 + 180;
  do
  {
    *v2 = 0;
    v2[4] = v3;
    v2[8] = v1;
    result = AddTaskToTaskList1((int)Function_21d2c10, v4, v3 + 129);
    v2[7] = result;
    ++v3;
    v2 += 9;
    v4 += 36;
  }
  while ( v3 < 3 );
  return result;
}

//----- (021D2BC0) --------------------------------------------------------
int __fastcall Function_21d2bc0(int a1)
{
  int v1;
  uint v2;
  int result;

  v1 = a1;
  v2 = 0;
  do
  {
    result = Call_RemoveTaskFromTaskList(*(int **)(v1 + 208));
    ++v2;
    v1 += 36;
  }
  while ( v2 < 3 );
  return result;
}

//----- (021D2BDC) --------------------------------------------------------
uint *__fastcall Function_21d2bdc(int a1, int a2)
{
  uint *result;

  *(uint *)(a1 + 36 * a2 + 180) = 1;
  result = (uint *)(a1 + 36 * a2 + 184);
  *result = 1;
  return result;
}

//----- (021D2BF4) --------------------------------------------------------
uint *__fastcall Function_21d2bf4(int a1, int a2)
{
  uint *result;

  result = (uint *)(a1 + 36 * a2 + 180);
  *result = 2;
  return result;
}

//----- (021D2C04) --------------------------------------------------------
int __fastcall Function_21d2c04(int a1, int a2)
{
  return *(uint *)(a1 + 36 * a2 + 184);
}

//----- (021D2C10) --------------------------------------------------------
int __fastcall Function_21d2c10(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a2[8];
  do
    result = ((int (__fastcall *)(uint *, int))*(&off_21D86C4 + *v2))(v2, v3);
  while ( result == 1 );
  return result;
}

//----- (021D2C30) --------------------------------------------------------
int Function_21d2c30()
{
  return 0;
}

//----- (021D2C34) --------------------------------------------------------
int __fastcall Function_21d2c34(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = a2;
  v4 = *(uint *)(v2 + 16);
  v5 = *(uint *)(v3 + 140);
  Function_21d3fe8();
  return 0;
}

//----- (021D2C4C) --------------------------------------------------------
int __fastcall Function_21d2c4c(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = a2;
  ++*a1;
  a1[5] = 0;
  a1[6] = 0;
  v4 = *(uint *)(a2 + 8);
  if ( *(uint *)(a2 + 48) == 1 )
  {
    if ( v4 )
    {
      if ( !Function_21d2dc0() )
      {
        Function_21d3830(v2, v3);
        *(uint *)(v3 + 48) = 0;
      }
    }
    else if ( !Function_21d2d88() )
    {
      Function_21d3780(v2, v3);
      *(uint *)(v3 + 48) = 0;
    }
  }
  else if ( v4 )
  {
    Function_21d3830(a1, a2);
  }
  else
  {
    Function_21d3780(a1, a2);
  }
  return 1;
}

//----- (021D2CA8) --------------------------------------------------------
int __fastcall Function_21d2ca8(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
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

  v17 = a4;
  v4 = a1;
  v5 = a2 + 144;
  v11 = 4 * a1[4];
  v6 = 0;
  v7 = (*(uint *)(v5 + v11) >> 31) + __ROR4__((*(uint *)(v5 + v11) << 15) - (*(uint *)(v5 + v11) >> 31), 15);
  if ( v7 )
  {
    v6 = 1;
    *(uint *)(a2 + 140);
    v7 = Function_21d4024(a2);
  }
  else
  {
    v8 = v4[6];
    if ( v8 )
    {
      v4[6] = v8 - 1;
      v9 = *(uint *)(a2 + 140);
      v6 = 1;
      Function_21d3fe8(a2);
      v7 = (*(uint *)(v5 + v11) >> 31) + __ROR4__((*(uint *)(v5 + v11) << 15) - (*(uint *)(v5 + v11) >> 31), 15);
    }
  }
  if ( v7 )
    goto LABEL_12;
  if ( v4[6] )
    goto LABEL_12;
  v12 = 0x4000;
  v13 = 0x8000;
  v14 = 0x8000;
  v15 = 0x8000;
  v16 = 0x10000;
  v4[2] = 0x4000;
  v4[3] = 0;
  ++*v4;
  if ( v6 )
LABEL_12:
    result = 0;
  else
    result = 1;
  return result;
}

//----- (021D2D50) --------------------------------------------------------
int __fastcall Function_21d2d50(uint *a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2 + 156;
  v3 = 4 * a1[4];
  *(uint *)(v2 + v3) = a1[2];
  a1[2] = -a1[2];
  v4 = a1[3] + 1;
  a1[3] = v4;
  if ( !(v4 & 1) )
    a1[2] >>= 2;
  if ( !a1[2] )
  {
    *a1 = 0;
    a1[1] = 0;
    *(uint *)(v2 + v3) = 0;
  }
  return 0;
}

//----- (021D2D88) --------------------------------------------------------
int __fastcall Function_21d2d88(int a1, int a2)
{
  int v3;

  if ( !*(uint *)(a2 + 116) )
    return 0;
  v3 = *(uint *)(a1 + 16);
  switch ( v3 )
  {
    case 0:
      return Function_21d2de0();
    case 1:
      return Function_21d2e1c();
    case 2:
      return Function_21d2e58();
  }
  ErrorHandler();
  return 0;
}

//----- (021D2DC0) --------------------------------------------------------
int __fastcall Function_21d2dc0(int a1, int a2)
{
  int v2;
  int v3;
  int v5;

  v2 = a2;
  v3 = a1;
  if ( !*(uint *)(a2 + 116) )
    return 0;
  v5 = Function_21d5618();
  return Function_21d3738(v3, v2, v5);
}

//----- (021D2DE0) --------------------------------------------------------
int __fastcall Function_21d2de0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = a1;
  v4 = Function_21d5618(*(uint *)(a2 + 116));
  if ( v4 == 6 )
    return 0;
  if ( Function_21d38fc(v3, v2) == 1 )
    return Function_21d2e94(v3, v2, v4);
  return Function_21d2fac(v3, v2, v4);
}

//----- (021D2E1C) --------------------------------------------------------
int __fastcall Function_21d2e1c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = a1;
  v4 = Function_21d5618(*(uint *)(a2 + 116));
  if ( v4 == 6 )
    return 0;
  if ( Function_21d38fc(v3, v2) == 1 )
    return Function_21d32ec(v3, v2, v4);
  return Function_21d3394(v3, v2, v4);
}

//----- (021D2E58) --------------------------------------------------------
int __fastcall Function_21d2e58(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = a1;
  v4 = Function_21d5618(*(uint *)(a2 + 116));
  if ( v4 == 6 )
    return 0;
  if ( Function_21d38fc(v3, v2) == 1 )
    return Function_21d32ec(v3, v2, v4);
  return Function_21d3394(v3, v2, v4);
}

//----- (021D2E94) --------------------------------------------------------
int __fastcall Function_21d2e94(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint v13;
  int v14;

  v11 = a1;
  v3 = a2;
  v4 = a3;
  v12 = *(uint *)(a1 + 16);
  v5 = 1;
  do
  {
    if ( v4 == Function_21d55d4(v3, v12, v5) )
    {
      v6 = 0;
      if ( v5 <= 3 )
      {
        while ( Function_21d3b34(v3, v6, v4) != 1 )
        {
          if ( v5 + ++v6 > 3 )
            goto LABEL_7;
        }
        *(uint *)(v11 + 20) = v5 + v6;
        *(uint *)(v11 + 24) = v6;
        return 1;
      }
    }
LABEL_7:
    ++v5;
  }
  while ( v5 <= 3 );
  v14 = 4;
  if ( *(uint *)(v3 + 112) == 1 )
    v14 = 21;
  v8 = 1;
  v13 = *(uint *)(v3 + 168);
  if ( v14 < 1 )
    return 0;
  while ( v4 != Function_21d55d4(v3, v12, 1 - v8) )
  {
LABEL_24:
    if ( ++v8 > v14 )
      return 0;
  }
  v9 = 0;
  while ( Function_21d3b34(v3, v8 + v9, v4) != 1 )
  {
    if ( ++v9 >= 3 )
      goto LABEL_24;
  }
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      s32_div_f(v13, 6);
      if ( v10 < 2 && Function_21d3b34(v3, v8 + 2, v4) == 1 )
      {
        *(uint *)(v11 + 20) = 3;
        *(uint *)(v11 + 24) = v8 + 2;
        return 1;
      }
    }
  }
  else if ( !((v13 >> 31) + __ROR4__((v13 << 30) - (v13 >> 31), 30)) && Function_21d3b34(v3, v8 + 2, v4) == 1 )
  {
    *(uint *)(v11 + 20) = 3;
    *(uint *)(v11 + 24) = v8 + 2;
    return 1;
  }
  *(uint *)(v11 + 20) = v9 + 1;
  *(uint *)(v11 + 24) = v8 + v9;
  return 1;
}

//----- (021D2FAC) --------------------------------------------------------
int __fastcall Function_21d2fac(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;
  int v8;
  int j;
  int i;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v16 = a4;
  v4 = a3;
  v5 = *(uint *)(a1 + 16);
  v11 = a1;
  v6 = a2;
  if ( !Function_21d394c(a1) )
    return 0;
  if ( Function_21d3b34(v6, 0, v4) == 1 )
  {
    if ( v4 == Function_21d55d4(v6, v5, v15) )
    {
      *(uint *)(v11 + 20) = v15;
      *(uint *)(v11 + 24) = 0;
      return 1;
    }
    if ( v14 && v4 == Function_21d55d4(v6, v5, v14) )
    {
      *(uint *)(v11 + 20) = v14;
      *(uint *)(v11 + 24) = 0;
      return 1;
    }
    if ( v13 && v4 == Function_21d55d4(v6, v5, v13) )
    {
      *(uint *)(v11 + 20) = v13;
      *(uint *)(v11 + 24) = 0;
      return 1;
    }
  }
  v12 = 4;
  if ( *(uint *)(v6 + 112) == 1 )
    v12 = 21;
  if ( v14 )
  {
    if ( v13 )
    {
      for ( i = 1; i <= v12; ++i )
      {
        if ( i & 3 )
        {
          if ( (i & 3) == 1 )
          {
            if ( v4 == Function_21d55d4(v6, v5, v14 - i) && Function_21d3b34(v6, i, v4) == 1 )
            {
              *(uint *)(v11 + 20) = v14;
              *(uint *)(v11 + 24) = i;
              return 1;
            }
            if ( v4 == Function_21d55d4(v6, v5, v15 - i) && Function_21d3b34(v6, i, v4) == 1 )
            {
              *(uint *)(v11 + 20) = v15;
              *(uint *)(v11 + 24) = i;
              return 1;
            }
          }
          else
          {
            if ( v4 == Function_21d55d4(v6, v5, v13 - i) && Function_21d3b34(v6, i, v4) == 1 )
            {
              *(uint *)(v11 + 20) = v13;
              *(uint *)(v11 + 24) = i;
              return 1;
            }
            if ( v4 == Function_21d55d4(v6, v5, v15 - i) && Function_21d3b34(v6, i, v4) == 1 )
            {
              *(uint *)(v11 + 20) = v15;
              *(uint *)(v11 + 24) = i;
              return 1;
            }
            if ( v4 == Function_21d55d4(v6, v5, v14 - i) && Function_21d3b34(v6, i, v4) == 1 )
            {
              *(uint *)(v11 + 20) = v14;
              *(uint *)(v11 + 24) = i;
              return 1;
            }
          }
        }
        else
        {
          if ( v4 == Function_21d55d4(v6, v5, v15 - i) && Function_21d3b34(v6, i, v4) == 1 )
          {
            *(uint *)(v11 + 20) = v15;
            *(uint *)(v11 + 24) = i;
            return 1;
          }
          if ( v4 == Function_21d55d4(v6, v5, v14 - i) && Function_21d3b34(v6, i, v4) == 1 )
          {
            *(uint *)(v11 + 20) = v14;
            *(uint *)(v11 + 24) = i;
            return 1;
          }
          if ( v4 == Function_21d55d4(v6, v5, v13 - i) && Function_21d3b34(v6, i, v4) == 1 )
          {
            *(uint *)(v11 + 20) = v13;
            *(uint *)(v11 + 24) = i;
            return 1;
          }
        }
      }
      result = 0;
    }
    else
    {
      for ( j = 1; j <= v12; ++j )
      {
        if ( j & 1 )
        {
          if ( v4 == Function_21d55d4(v6, v5, v15 - j) && Function_21d3b34(v6, j, v4) == 1 )
          {
            *(uint *)(v11 + 20) = v15;
            *(uint *)(v11 + 24) = j;
            return 1;
          }
          if ( v4 == Function_21d55d4(v6, v5, v14 - j) && Function_21d3b34(v6, j, v4) == 1 )
          {
            *(uint *)(v11 + 20) = v14;
            *(uint *)(v11 + 24) = j;
            return 1;
          }
        }
        else
        {
          if ( v4 == Function_21d55d4(v6, v5, v14 - j) && Function_21d3b34(v6, j, v4) == 1 )
          {
            *(uint *)(v11 + 20) = v14;
            *(uint *)(v11 + 24) = j;
            return 1;
          }
          if ( v4 == Function_21d55d4(v6, v5, v15 - j) && Function_21d3b34(v6, j, v4) == 1 )
          {
            *(uint *)(v11 + 20) = v15;
            *(uint *)(v11 + 24) = j;
            return 1;
          }
        }
      }
      result = 0;
    }
  }
  else
  {
    v8 = 1;
    if ( v12 < 1 )
    {
LABEL_20:
      result = 0;
    }
    else
    {
      while ( v4 != Function_21d55d4(v6, v5, v15 - v8) || Function_21d3b34(v6, v8, v4) != 1 )
      {
        if ( ++v8 > v12 )
          goto LABEL_20;
      }
      *(uint *)(v11 + 20) = v15;
      *(uint *)(v11 + 24) = v8;
      result = 1;
    }
  }
  return result;
}

//----- (021D32EC) --------------------------------------------------------
int __fastcall Function_21d32ec(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int result;
  uint v8;
  int v9;
  int v10;
  int v11;

  v3 = *(uint *)(a1 + 16);
  v10 = a1;
  v4 = a2;
  v5 = a3;
  v6 = 1;
  do
  {
    if ( v5 == Function_21d55d4(v4, v3, v6) )
    {
      *(uint *)(v10 + 20) = v6;
      *(uint *)(v10 + 24) = 0;
      return 1;
    }
    ++v6;
  }
  while ( v6 <= 3 );
  v11 = 4;
  if ( *(uint *)(v4 + 112) == 1 )
    v11 = 21;
  v8 = 1;
  if ( v11 < 1 )
    return 0;
  while ( v5 != Function_21d55d4(v4, v3, 1 - v8) )
  {
    if ( (int)++v8 > v11 )
      return 0;
  }
  v9 = (v8 >> 31) + __ROR4__((v8 << 30) - (v8 >> 31), 30);
  if ( v9 == 1 )
  {
    *(uint *)(v10 + 20) = 3;
    *(uint *)(v10 + 24) = v8 + 2;
    result = 1;
  }
  else if ( (uint)(v9 - 2) > 1 )
  {
    result = 1;
    *(uint *)(v10 + 20) = 1;
    *(uint *)(v10 + 24) = v8;
  }
  else
  {
    *(uint *)(v10 + 20) = 2;
    *(uint *)(v10 + 24) = v8 + 1;
    result = 1;
  }
  return result;
}

//----- (021D3394) --------------------------------------------------------
int __fastcall Function_21d3394(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;
  int v8;
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

  v28 = a4;
  v4 = a3;
  v5 = *(uint *)(a1 + 16);
  v11 = a1;
  v6 = a2;
  if ( !Function_21d394c(a1) )
    return 0;
  if ( v4 == Function_21d55d4(v6, v5, v27) )
  {
    *(uint *)(v11 + 20) = v27;
    *(uint *)(v11 + 24) = 0;
    return 1;
  }
  if ( v26 && v4 == Function_21d55d4(v6, v5, v26) )
  {
    *(uint *)(v11 + 20) = v26;
    *(uint *)(v11 + 24) = 0;
    return 1;
  }
  if ( v25 && v4 == Function_21d55d4(v6, v5, v25) )
  {
    *(uint *)(v11 + 20) = v25;
    *(uint *)(v11 + 24) = 0;
    return 1;
  }
  v8 = 4;
  if ( *(uint *)(v6 + 112) == 1 )
    v8 = 21;
  if ( !v26 )
  {
    v24 = 1;
    if ( v8 < 1 )
      return 0;
    while ( v4 != Function_21d55d4(v6, v5, v27 - v24) )
    {
      if ( ++v24 > v8 )
        return 0;
    }
    *(uint *)(v11 + 20) = v27;
    *(uint *)(v11 + 24) = v24;
    return 1;
  }
  v9 = *(uint *)(v6 + 4 * v5 + 168);
  if ( v25 )
  {
    s32_div_f(v9, 3);
    if ( v10 )
    {
      if ( v10 == 1 )
      {
        v18 = 1;
        if ( v8 >= 1 )
        {
          while ( v4 != Function_21d55d4(v6, v5, v26 - v18) )
          {
            if ( ++v18 > v8 )
              goto LABEL_58;
          }
          *(uint *)(v11 + 20) = v26;
          *(uint *)(v11 + 24) = v18;
          return 1;
        }
LABEL_58:
        v19 = 1;
        if ( v8 >= 1 )
        {
          while ( v4 != Function_21d55d4(v6, v5, v25 - v19) )
          {
            if ( ++v19 > v8 )
              goto LABEL_62;
          }
          *(uint *)(v11 + 20) = v25;
          *(uint *)(v11 + 24) = v19;
          return 1;
        }
LABEL_62:
        v20 = 1;
        if ( v8 >= 1 )
        {
          while ( v4 != Function_21d55d4(v6, v5, v27 - v20) )
          {
            if ( ++v20 > v8 )
              return 0;
          }
          *(uint *)(v11 + 20) = v27;
          *(uint *)(v11 + 24) = v20;
          return 1;
        }
      }
      else
      {
        v21 = 1;
        if ( v8 >= 1 )
        {
          while ( v4 != Function_21d55d4(v6, v5, v25 - v21) )
          {
            if ( ++v21 > v8 )
              goto LABEL_71;
          }
          *(uint *)(v11 + 20) = v25;
          *(uint *)(v11 + 24) = v21;
          return 1;
        }
LABEL_71:
        v22 = 1;
        if ( v8 >= 1 )
        {
          while ( v4 != Function_21d55d4(v6, v5, v27 - v22) )
          {
            if ( ++v22 > v8 )
              goto LABEL_75;
          }
          *(uint *)(v11 + 20) = v27;
          *(uint *)(v11 + 24) = v22;
          return 1;
        }
LABEL_75:
        v23 = 1;
        if ( v8 >= 1 )
        {
          while ( v4 != Function_21d55d4(v6, v5, v26 - v23) )
          {
            if ( ++v23 > v8 )
              return 0;
          }
          *(uint *)(v11 + 20) = v26;
          *(uint *)(v11 + 24) = v23;
          return 1;
        }
      }
    }
    else
    {
      v15 = 1;
      if ( v8 >= 1 )
      {
        while ( v4 != Function_21d55d4(v6, v5, v27 - v15) )
        {
          if ( ++v15 > v8 )
            goto LABEL_44;
        }
        *(uint *)(v11 + 20) = v27;
        *(uint *)(v11 + 24) = v15;
        return 1;
      }
LABEL_44:
      v16 = 1;
      if ( v8 >= 1 )
      {
        while ( v4 != Function_21d55d4(v6, v5, v26 - v16) )
        {
          if ( ++v16 > v8 )
            goto LABEL_48;
        }
        *(uint *)(v11 + 20) = v26;
        *(uint *)(v11 + 24) = v16;
        return 1;
      }
LABEL_48:
      v17 = 1;
      if ( v8 >= 1 )
      {
        while ( v4 != Function_21d55d4(v6, v5, v25 - v17) )
        {
          if ( ++v17 > v8 )
            return 0;
        }
        *(uint *)(v11 + 20) = v25;
        *(uint *)(v11 + 24) = v17;
        return 1;
      }
    }
    return 0;
  }
  v12 = 1;
  if ( v9 & 1 )
  {
    if ( v8 >= 1 )
    {
      while ( v4 != Function_21d55d4(v6, v5, v27 - v12) )
      {
        if ( ++v12 > v8 )
          goto LABEL_25;
      }
      *(uint *)(v11 + 20) = v27;
      *(uint *)(v11 + 24) = v12;
      return 1;
    }
LABEL_25:
    v13 = 1;
    if ( v8 >= 1 )
    {
      while ( v4 != Function_21d55d4(v6, v5, v26 - v13) )
      {
        if ( ++v13 > v8 )
          return 0;
      }
      *(uint *)(v11 + 20) = v26;
      *(uint *)(v11 + 24) = v13;
      return 1;
    }
    return 0;
  }
  if ( v8 < 1 )
  {
LABEL_34:
    v14 = 1;
    if ( v8 < 1 )
      return 0;
    while ( v4 != Function_21d55d4(v6, v5, v27 - v14) )
    {
      if ( ++v14 > v8 )
        return 0;
    }
    *(uint *)(v11 + 20) = v27;
    *(uint *)(v11 + 24) = v14;
    result = 1;
  }
  else
  {
    while ( v4 != Function_21d55d4(v6, v5, v26 - v12) )
    {
      if ( ++v12 > v8 )
        goto LABEL_34;
    }
    *(uint *)(v11 + 20) = v26;
    *(uint *)(v11 + 24) = v12;
    result = 1;
  }
  return result;
}

//----- (021D3738) --------------------------------------------------------
int __fastcall Function_21d3738(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v8;
  int v9;

  v8 = a1;
  v3 = a2;
  v9 = *(uint *)(a1 + 16);
  v4 = a3;
  v5 = 4;
  if ( *(uint *)(a2 + 112) == 1 )
    v5 = 21;
  v6 = 0;
  if ( v5 < 0 )
    return 0;
  while ( v4 != Function_21d55d4(v3, v9, 2 - v6) )
  {
    if ( ++v6 > v5 )
      return 0;
  }
  *(uint *)(v8 + 20) = 2;
  *(uint *)(v8 + 24) = v6;
  return 1;
}

//----- (021D3780) --------------------------------------------------------
int __fastcall Function_21d3780(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v2 = a2;
  v3 = a1;
  result = Function_21d38e4(a2);
  v5 = *(uint *)(v3 + 16);
  if ( !v5 || result >= 2 )
  {
    if ( v5 || result >= 2 )
    {
      if ( v5 )
      {
        if ( v5 == 1 )
        {
          v8 = 1;
          do
          {
            result = Function_21d3c9c(v3, v2, v8);
            if ( !result )
            {
              *(uint *)(v3 + 24) = v8;
              return result;
            }
            ++v8;
          }
          while ( v8 <= 21 );
          ErrorHandler();
        }
        else if ( v5 == 2 )
        {
          v9 = 1;
          do
          {
            result = Function_21d3dd4(v3, v2, v9);
            if ( !result )
            {
              *(uint *)(v3 + 24) = v9;
              return result;
            }
            ++v9;
          }
          while ( v9 <= 21 );
          ErrorHandler();
        }
        result = ErrorHandler();
      }
      else
      {
        v7 = 1;
        do
        {
          result = Function_21d3b50(v3, v2, v7);
          if ( !result )
          {
            *(uint *)(v3 + 24) = v7;
            return result;
          }
          ++v7;
        }
        while ( v7 <= 21 );
        result = ErrorHandler();
      }
    }
    else
    {
      v6 = 0;
      do
      {
        result = Function_21d3af0(v2, v6);
        if ( !result )
        {
          *(uint *)(v3 + 24) = v6;
          return result;
        }
        ++v6;
      }
      while ( v6 <= 21 );
      result = ErrorHandler();
    }
  }
  return result;
}

//----- (021D3830) --------------------------------------------------------
int __fastcall Function_21d3830(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v2 = a2;
  v3 = a1;
  result = Function_21d38e4(a2);
  v5 = *(uint *)(v3 + 16);
  if ( !v5 || result >= 2 )
  {
    if ( !v5 && result < 2 )
    {
      v6 = 0;
      do
      {
        result = Function_21d55d4(v2, 0, 2 - v6);
        if ( result != 3 )
        {
          *(uint *)(v3 + 24) = v6;
          return result;
        }
        ++v6;
      }
      while ( v6 < 21 );
      ErrorHandler();
    }
    v7 = *(uint *)(v3 + 16);
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        v9 = 0;
        do
        {
          result = Function_21d3f58(v3, v2, v9);
          if ( !result )
          {
            *(uint *)(v3 + 24) = v9;
            return result;
          }
          ++v9;
        }
        while ( v9 <= 21 );
        result = ErrorHandler();
      }
      else
      {
        if ( v7 == 2 )
        {
          v10 = 0;
          do
          {
            result = Function_21d3fa0(v3, v2, v10);
            if ( !result )
            {
              *(uint *)(v3 + 24) = v10;
              return result;
            }
            ++v10;
          }
          while ( v10 <= 21 );
          ErrorHandler();
        }
        result = ErrorHandler();
      }
    }
    else
    {
      v8 = 0;
      do
      {
        result = Function_21d3f0c(v3, v2, v8);
        if ( !result )
        {
          *(uint *)(v3 + 24) = v8;
          return result;
        }
        ++v8;
      }
      while ( v8 < 21 );
      result = ErrorHandler();
    }
  }
  return result;
}

//----- (021D38E4) --------------------------------------------------------
int __fastcall Function_21d38e4(int a1)
{
  int v1;
  int v2;

  v1 = 0;
  v2 = 0;
  do
  {
    if ( *(uint *)(a1 + 124) != 1 )
      ++v2;
    ++v1;
    a1 += 4;
  }
  while ( v1 < 3 );
  return v2;
}

//----- (021D38FC) --------------------------------------------------------
int __fastcall Function_21d38fc(int a1, uint *a2)
{
  int v2;

  v2 = *(uint *)(a1 + 16);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      if ( a2[31] != 1 || a2[33] != 1 )
        return 0;
    }
    else if ( v2 == 2 && (a2[31] != 1 || a2[32] != 1) )
    {
      return 0;
    }
  }
  else if ( a2[32] != 1 || a2[33] != 1 )
  {
    return 0;
  }
  return 1;
}

//----- (021D394C) --------------------------------------------------------
int __fastcall Function_21d394c(int a1, uint *a2, int *a3, uint *a4, uint *a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int result;
  int v13;

  v5 = a2[31];
  v13 = a2[32];
  v6 = a2[33];
  v7 = a2[50];
  v8 = a2[59];
  v9 = a2[68];
  *a3 = 0;
  *a4 = 0;
  *a5 = 0;
  v10 = *(uint *)(a1 + 16);
  if ( v10 )
  {
    if ( v10 == 1 )
    {
      if ( v5 == 1 || v6 == 1 )
      {
        if ( v5 == 1 )
        {
          if ( v9 == 2 )
          {
            *a3 = 2;
            result = 1;
          }
          else if ( v9 == 1 )
          {
            result = 1;
            *a3 = 1;
            *a4 = 2;
          }
          else
          {
            *a3 = 2;
            *a4 = 3;
            result = 1;
          }
        }
        else if ( v7 == 2 )
        {
          *a3 = 2;
          result = 1;
        }
        else if ( v7 == 1 )
        {
          result = 1;
          *a3 = 1;
          *a4 = 2;
        }
        else
        {
          *a3 = 2;
          *a4 = 3;
          result = 1;
        }
      }
      else
      {
        if ( v7 == v9 )
          *a3 = v7;
        else
          *a3 = 2;
        result = 1;
      }
    }
    else if ( v10 == 2 )
    {
      if ( v5 == 1 || v13 == 1 )
      {
        if ( v5 == 1 )
        {
          if ( v8 == 2 )
          {
            result = 1;
            *a3 = 1;
            *a4 = 2;
            *a5 = 3;
          }
          else
          {
            *a3 = v8;
            result = 1;
          }
        }
        else if ( v7 == 2 )
        {
          *a3 = 2;
          result = 1;
        }
        else
        {
          result = 1;
          *a3 = 1;
          *a4 = 3;
        }
      }
      else if ( v7 == v8 )
      {
        *a3 = v7;
        result = 1;
      }
      else
      {
        if ( v7 == 1 )
          v11 = 3;
        else
          v11 = 1;
        *a3 = v11;
        result = 1;
      }
    }
    else
    {
      ErrorHandler();
      result = 0;
    }
  }
  else if ( v13 == 1 || v6 == 1 )
  {
    if ( v13 == 1 )
    {
      if ( v9 == 2 )
      {
        *a3 = 2;
        result = 1;
      }
      else
      {
        result = 1;
        *a3 = 1;
        *a4 = 3;
      }
    }
    else if ( v8 == 2 )
    {
      result = 1;
      *a3 = 1;
      *a4 = 2;
      *a5 = 3;
    }
    else
    {
      *a3 = v8;
      result = 1;
    }
  }
  else if ( v8 == v9 )
  {
    *a3 = v8;
    result = 1;
  }
  else if ( v9 == 1 )
  {
    *a3 = 3;
    result = 1;
  }
  else
  {
    result = 1;
    *a3 = 1;
  }
  return result;
}

//----- (021D3AF0) --------------------------------------------------------
BOOL __fastcall Function_21d3af0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( Function_21d55d4(a1, 0, 1 - a2) == 3 )
    return 1;
  if ( Function_21d55d4(v3, 0, 2 - v2) == 3 )
    return 1;
  return Function_21d55d4(v3, 0, 3 - v2) == 3;
}

//----- (021D3B34) --------------------------------------------------------
BOOL __fastcall Function_21d3b34(int a1, int a2, int a3)
{
  BOOL result;

  if ( a3 == 3 )
    result = 1;
  else
    result = Function_21d3af0(a1, a2) == 0;
  return result;
}

//----- (021D3B50) --------------------------------------------------------
BOOL __fastcall Function_21d3b50(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
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

  v3 = a2;
  v4 = *(uint *)(a2 + 240);
  v5 = *(uint *)(a2 + 276);
  v23 = 1 - a3;
  v20 = a3;
  v6 = Function_21d55d4(a2, 0, 1 - a3);
  v24 = Function_21d55d4(v3, 1, 1 - v4);
  v21 = 1 - v5;
  v7 = Function_21d55d4(v3, 2, 1 - v5);
  if ( v6 == 3 || v6 == v24 && v6 == v7 )
    return 1;
  v9 = Function_21d55d4(v3, 0, 2 - v20);
  v22 = 2 - v4;
  v25 = Function_21d55d4(v3, 1, 2 - v4);
  v10 = Function_21d55d4(v3, 2, 2 - v5);
  if ( v9 == 3 || v9 == v25 && v9 == v10 )
    return 1;
  v11 = Function_21d55d4(v3, 0, 3 - v20);
  v12 = Function_21d55d4(v3, 1, 3 - v4);
  v26 = 3 - v5;
  v13 = Function_21d55d4(v3, 2, 3 - v5);
  if ( v11 == 3 || v11 == v12 && v11 == v13 )
    return 1;
  v14 = Function_21d55d4(v3, 0, v23);
  v15 = Function_21d55d4(v3, 1, v22);
  v16 = Function_21d55d4(v3, 2, v26);
  if ( v14 == 3 || v14 == v15 && v14 == v16 )
    return 1;
  v17 = Function_21d55d4(v3, 0, 3 - v20);
  v18 = Function_21d55d4(v3, 1, v22);
  v19 = Function_21d55d4(v3, 2, v21);
  return v17 == 3 || v17 == v18 && v17 == v19;
}

//----- (021D3C9C) --------------------------------------------------------
BOOL __fastcall Function_21d3c9c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
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

  v3 = a2;
  v4 = *(uint *)(a2 + 204);
  v5 = *(uint *)(a2 + 276);
  v25 = 1 - v4;
  v6 = a3;
  v26 = Function_21d55d4(a2, 0, 1 - v4);
  v7 = Function_21d55d4(v3, 1, 1 - v6);
  v22 = 1 - v5;
  v8 = Function_21d55d4(v3, 2, 1 - v5);
  if ( v26 == v7 && v26 == v8 )
    return 1;
  v27 = Function_21d55d4(v3, 0, 2 - v4);
  v24 = 2 - v6;
  v10 = Function_21d55d4(v3, 1, 2 - v6);
  v11 = Function_21d55d4(v3, 2, 2 - v5);
  if ( v27 == v10 && v27 == v11 )
    return 1;
  v23 = 3 - v4;
  v12 = Function_21d55d4(v3, 0, 3 - v4);
  v13 = Function_21d55d4(v3, 1, 3 - v6);
  v14 = 3 - v5;
  v15 = Function_21d55d4(v3, 2, 3 - v5);
  if ( v12 == v13 && v12 == v15 )
    return 1;
  v16 = Function_21d55d4(v3, 0, v25);
  v17 = Function_21d55d4(v3, 1, v24);
  v18 = Function_21d55d4(v3, 2, v14);
  if ( v16 == v17 && v16 == v18 )
    return 1;
  v19 = Function_21d55d4(v3, 0, v23);
  v20 = Function_21d55d4(v3, 1, v24);
  v21 = Function_21d55d4(v3, 2, v22);
  return v19 == v20 && v19 == v21;
}

//----- (021D3DD4) --------------------------------------------------------
BOOL __fastcall Function_21d3dd4(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
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

  v3 = a2;
  v4 = *(uint *)(a2 + 204);
  v5 = *(uint *)(a2 + 240);
  v25 = 1 - v4;
  v6 = a3;
  v26 = Function_21d55d4(a2, 0, 1 - v4);
  v7 = Function_21d55d4(v3, 1, 1 - v5);
  v22 = 1 - v6;
  v8 = Function_21d55d4(v3, 2, 1 - v6);
  if ( v26 == v7 && v26 == v8 )
    return 1;
  v27 = Function_21d55d4(v3, 0, 2 - v4);
  v24 = 2 - v5;
  v10 = Function_21d55d4(v3, 1, 2 - v5);
  v11 = Function_21d55d4(v3, 2, 2 - v6);
  if ( v27 == v10 && v27 == v11 )
    return 1;
  v23 = 3 - v4;
  v12 = Function_21d55d4(v3, 0, 3 - v4);
  v13 = Function_21d55d4(v3, 1, 3 - v5);
  v14 = 3 - v6;
  v15 = Function_21d55d4(v3, 2, v14);
  if ( v12 == v13 && v12 == v15 )
    return 1;
  v16 = Function_21d55d4(v3, 0, v25);
  v17 = Function_21d55d4(v3, 1, v24);
  v18 = Function_21d55d4(v3, 2, v14);
  if ( v16 == v17 && v16 == v18 )
    return 1;
  v19 = Function_21d55d4(v3, 0, v23);
  v20 = Function_21d55d4(v3, 1, v24);
  v21 = Function_21d55d4(v3, 2, v22);
  return v19 == v20 && v19 == v21;
}

//----- (021D3F0C) --------------------------------------------------------
BOOL __fastcall Function_21d3f0c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v3 = a2;
  v4 = *(uint *)(a2 + 240);
  v5 = *(uint *)(a2 + 276);
  v6 = Function_21d55d4(a2, 0, 2 - a3);
  v7 = Function_21d55d4(v3, 1, 2 - v4);
  v8 = Function_21d55d4(v3, 2, 2 - v5);
  return v6 == 3 || v6 == v7 && v6 == v8;
}

//----- (021D3F58) --------------------------------------------------------
BOOL __fastcall Function_21d3f58(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v3 = a2;
  v4 = a3;
  v5 = *(uint *)(a2 + 276);
  v6 = Function_21d55d4(a2, 0, 2 - *(uint *)(a2 + 204));
  v7 = Function_21d55d4(v3, 1, 2 - v4);
  v8 = Function_21d55d4(v3, 2, 2 - v5);
  return v6 == v7 && v6 == v8;
}

//----- (021D3FA0) --------------------------------------------------------
BOOL __fastcall Function_21d3fa0(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v3 = a2;
  v4 = a3;
  v5 = *(uint *)(a2 + 240);
  v6 = Function_21d55d4(a2, 0, 2 - *(uint *)(a2 + 204));
  v7 = Function_21d55d4(v3, 1, 2 - v5);
  v8 = Function_21d55d4(v3, 2, 2 - v4);
  return v6 == v7 && v6 == v8;
}

//----- (021D3FE8) --------------------------------------------------------
uint *__fastcall Function_21d3fe8(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  uint *result;

  v3 = a1;
  v4 = 4 * a2;
  v5 = a1 + 144;
  *(uint *)(a1 + 144 + 4 * a2) += a3;
  s32_div_f(*(uint *)(a1 + 144 + 4 * a2), 2752512);
  *(uint *)(v5 + v4) = v6;
  result = (uint *)(v3 + v4 + 168);
  *result = 21 - *(uint *)(v5 + v4) / 4096 / 32;
  return result;
}

//----- (021D4024) --------------------------------------------------------
int __fastcall Function_21d4024(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;

  v3 = a1;
  v4 = a1 + 144;
  v5 = 4 * a2;
  result = (*(uint *)(a1 + 144 + 4 * a2) >> 31)
         + __ROR4__((*(uint *)(a1 + 144 + 4 * a2) << 15) - (*(uint *)(a1 + 144 + 4 * a2) >> 31), 15);
  if ( result )
  {
    if ( result < a3 )
      a3 = result;
    Function_21d3fe8(v3, a2, a3);
    result = (*(uint *)(v4 + v5) >> 31) + __ROR4__((*(uint *)(v4 + v5) << 15) - (*(uint *)(v4 + v5) >> 31), 15);
  }
  return result;
}

//----- (021D405C) --------------------------------------------------------
int Function_21d405c()
{
  int v0;
  int v1;

  v0 = PRNG();
  u32_div_f(v0, 100);
  return v1;
}

//----- (021D406C) --------------------------------------------------------
BOOL __fastcall Function_21d406c(uint a1, uint *a2)
{
  uint v2;
  bool v3;

  v2 = *a2;
  v3 = (int)(*a2 - a1) < 0;
  *a2 -= a1;
  if ( v3 )
    *a2 = 0;
  return v2 < a1;
}

//----- (021D4084) --------------------------------------------------------
BOOL __fastcall Function_21d4084(int a1)
{
  return dword_21D9520[*(uint *)(a1 + 136)] > (uint)Function_21d405c();
}

//----- (021D40A8) --------------------------------------------------------
int __fastcall Function_21d40a8(int a1, int a2, int a3, int a4)
{
  uint *v4;
  ushort *v5;
  BOOL v6;
  int v7;
  int result;
  int v9;

  v9 = a4;
  v4 = (uint *)a1;
  *(uint *)(a1 + 116) = 0;
  if ( Function_21d4084(a1) != 1 )
    return 0;
  v9 = Function_21d405c();
  v5 = (ushort *)&dword_21D95C8[4 * v4[34]];
  ++v4[284];
  if ( Function_21d406c(*v5, (uint *)&v9) )
  {
    v4[29] |= 8u;
    ++v4[296];
    result = 1;
  }
  else if ( Function_21d406c(v5[1], (uint *)&v9) )
  {
    v4[29] |= 4u;
    ++v4[295];
    result = 1;
  }
  else if ( Function_21d406c(v5[2], (uint *)&v9) )
  {
    v4[29] |= 0x80u;
    ++v4[300];
    result = 1;
  }
  else if ( Function_21d406c(v5[3], (uint *)&v9) )
  {
    v4[29] |= 0x40u;
    ++v4[299];
    result = 1;
  }
  else if ( Function_21d406c(v5[4], (uint *)&v9) )
  {
    v4[29] |= 0x20u;
    ++v4[298];
    result = 1;
  }
  else if ( Function_21d406c(v5[5], (uint *)&v9) )
  {
    v4[29] |= 0x10u;
    ++v4[297];
    result = 1;
  }
  else
  {
    v6 = Function_21d406c(v5[6], (uint *)&v9);
    v7 = v4[29];
    if ( v6 )
    {
      v4[29] = v7 | 2;
      ++v4[294];
      result = 1;
    }
    else
    {
      result = 1;
      v4[29] = v7 | 1;
      ++v4[293];
    }
  }
  return result;
}

//----- (021D41EC) --------------------------------------------------------
BOOL __fastcall Function_21d41ec(int a1)
{
  return Function_21d405c() < (uint)dword_21D94D8[*(uint *)(a1 + 136)];
}

//----- (021D4210) --------------------------------------------------------
uint __fastcall Function_21d4210(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  uint *v7;
  int v8;
  uint result;
  int v10;
  int *v11;
  int v12;
  int v13;

  v13 = a4;
  v4 = a1;
  v12 = Function_21d405c();
  v5 = v4[34];
  v11 = &dword_21D9934[18 * v5];
  v6 = 0;
  v7 = (uint *)&dword_21D9934[18 * v5];
  while ( Function_21d406c(*v7, (uint *)&v12) != 1 )
  {
    ++v6;
    v7 += 3;
    if ( v6 >= 6 )
    {
      v10 = 3 * (v6 - 1);
      v4[20] = v11[v10 + 1];
      v4[19] = v11[v10 + 2];
      v4[6] = dword_21D9568[v4[20]];
      return ErrorHandler();
    }
  }
  v8 = (int)&v11[3 * v6];
  v4[20] = *(uint *)(v8 + 4);
  v4[19] = *(uint *)(v8 + 8);
  v4[6] = dword_21D9568[v4[20]];
  result = v4[19];
  if ( result )
  {
    if ( result == 1 )
    {
      result = 1148;
      ++v4[287];
    }
    else if ( result == 2 )
    {
      result = 1152;
      ++v4[288];
    }
  }
  else
  {
    result = 1144;
    ++v4[286];
  }
  return result;
}

//----- (021D42D0) --------------------------------------------------------
uint __fastcall Function_21d42d0(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  uint v5;
  int *v6;
  int v7;
  uint *v8;
  uint result;
  int v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a1;
  v5 = 0;
  v11 = Function_21d405c();
  v6 = &dword_21D9784[18 * v4[34]];
  v7 = 6 * v4[19];
  v8 = (uint *)&v6[v7];
  v10 = (int)&v6[v7];
  while ( Function_21d406c(*v8, (uint *)&v11) != 1 )
  {
    ++v5;
    v8 += 2;
    if ( v5 >= 3 )
    {
      v4[86] = 1;
      return ErrorHandler();
    }
  }
  v4[86] = *(uint *)(v10 + 8 * v5 + 4);
  result = v4[86];
  if ( result )
  {
    if ( result == 1 )
    {
      result = 1156;
      ++v4[289];
    }
    else if ( result == 2 )
    {
      result = 1164;
      ++v4[291];
    }
  }
  else
  {
    result = 1160;
    ++v4[290];
  }
  return result;
}

//----- (021D4370) --------------------------------------------------------
BOOL __fastcall Function_21d4370(int a1)
{
  uint v1;

  v1 = dword_21D9538[*(uint *)(a1 + 136)];
  return Function_21d405c() < v1;
}

//----- (021D4394) --------------------------------------------------------
int __fastcall Function_21d4394(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  uint *v5;
  int result;
  int v7;

  v7 = a4;
  v4 = a1;
  v5 = (uint *)&dword_21D9628[4 * a1[34]];
  v7 = Function_21d405c();
  v4[29] = 0;
  if ( Function_21d4370((int)v4) )
  {
    if ( Function_21d406c(*v5, (uint *)&v7) == 1 )
    {
      v4[29] |= 4u;
      result = 1180;
      ++v4[295];
    }
    else if ( Function_21d406c(v5[1], (uint *)&v7) == 1 )
    {
      v4[29] |= 0x40u;
      result = 1196;
      ++v4[299];
    }
    else if ( Function_21d406c(v5[1], (uint *)&v7) == 1 )
    {
      v4[29] |= 0x10u;
      result = 1188;
      ++v4[297];
    }
    else
    {
      v4[29] = 1;
      result = 1172;
      ++v4[293];
    }
  }
  else
  {
    ++v4[285];
    switch ( (uchar)v4[20] )
    {
      case 0u:
      case 1u:
      case 2u:
        v4[29] |= 0x200u;
        result = 1208;
        ++v4[302];
        break;
      case 3u:
      case 4u:
      case 5u:
        v4[29] |= 0x100u;
        result = 1204;
        ++v4[301];
        break;
      default:
        ErrorHandler();
        result = v4[29] | 0x200;
        v4[29] = result;
        break;
    }
  }
  return result;
}

//----- (021D44A0) --------------------------------------------------------
BOOL __fastcall Function_21d44a0(int a1)
{
  return Function_21d405c() < (uint)dword_21D9580[*(uint *)(a1 + 136)];
}

//----- (021D44C4) --------------------------------------------------------
BOOL __fastcall Function_21d44c4(int a1)
{
  return Function_21d405c() < (uint)dword_21D9508[*(uint *)(a1 + 136)];
}

//----- (021D44E8) --------------------------------------------------------
BOOL __fastcall Function_21d44e8(int a1)
{
  uint v1;

  v1 = *(uint *)(a1 + 24);
  return Function_21d405c() < v1;
}

//----- (021D44FC) --------------------------------------------------------
int __fastcall Function_21d44fc(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  uint *v6;
  int result;
  int v8;
  int v9;

  v9 = a4;
  v4 = a1;
  v5 = a1[6];
  v8 = Function_21d405c();
  v6 = (uint *)&dword_21D9598[2 * v4[34]];
  result = v4[10];
  if ( result == 2 )
  {
    v5 -= 10;
  }
  else
  {
    result = Function_21d406c(*v6, (uint *)&v8);
    if ( result == 1 )
    {
      v5 -= 10;
    }
    else
    {
      result = Function_21d406c(v6[1], (uint *)&v8);
      if ( result == 1 )
        v5 -= 5;
    }
  }
  if ( v5 < 0 )
    v5 = 0;
  v4[6] = v5;
  return result;
}

//----- (021D4550) --------------------------------------------------------
int __fastcall Function_21d4550(int a1, int a2, int a3, int a4)
{
  int v4;
  uint v5;
  int v6;
  int v7;
  int *v8;
  int *v9;
  int v10;
  int v12;

  v12 = a4;
  v4 = a1;
  v5 = *(uint *)(a1 + 24);
  v12 = Function_21d405c();
  v6 = 36 * *(uint *)(v4 + 136);
  v7 = 0;
  v8 = &dword_21D9AE4[v6];
  v9 = &dword_21D9AE4[v6];
  while ( v5 < *v9 )
  {
    ++v7;
    v9 += 4;
    if ( v7 >= 9 )
    {
      ErrorHandler();
      return 0;
    }
  }
  v10 = 4 * v7;
  if ( Function_21d406c(v8[4 * v7 + 1], (uint *)&v12) == 1 )
    return 1;
  if ( Function_21d406c(v8[v10 + 2], (uint *)&v12) == 1 )
    return 0;
  return 2;
}

//----- (021D45B0) --------------------------------------------------------
uint __fastcall Function_21d45b0(int a1)
{
  int v1;
  uint v2;
  uint result;
  int v4;

  v1 = a1;
  v2 = PRNG();
  result = s32_div_f(v2, 6);
  *(uint *)(v1 + 52) = v4;
  return result;
}

//----- (021D45C4) --------------------------------------------------------
uint *__fastcall Function_21d45c4(int a1)
{
  uint *v1;
  uint *result;

  v1 = (uint *)(a1 + 288);
  *v1 = 0;
  v1[1] = 0;
  v1[3] = a1;
  result = AddTaskToTaskList1((int)Function_21d4614, a1 + 288, 0x8Au);
  v1[4] = result;
  return result;
}

//----- (021D45E8) --------------------------------------------------------
int __fastcall Function_21d45e8(int a1)
{
  return Call_RemoveTaskFromTaskList(*(int **)(a1 + 304));
}

//----- (021D45F8) --------------------------------------------------------
uint *__fastcall Function_21d45f8(uint *result)
{
  result[73] = 0;
  result[74] = 0;
  result[72] = 1;
  return result;
}

//----- (021D460C) --------------------------------------------------------
int __fastcall Function_21d460c(int a1)
{
  return *(uint *)(a1 + 292);
}

//----- (021D4614) --------------------------------------------------------
int __fastcall Function_21d4614(int a1, int *a2)
{
  int *v2;
  int result;
  uint *v4;
  int v5;
  int *v6;
  int *v7;
  int v8;
  int v9;

  v2 = a2;
  result = *a2;
  v4 = (uint *)a2[3];
  switch ( (uchar)*a2 )
  {
    case 1u:
      Function_21d4714(a2);
      result = *v2 + 1;
      *v2 = result;
      break;
    case 2u:
      if ( !a2[5] || (result = Function_21d505c(), result == 1) )
      {
        if ( !v2[6] || (result = Function_21d505c(), result == 1) )
        {
          ++*v2;
          goto LABEL_8;
        }
      }
      break;
    case 3u:
LABEL_8:
      if ( !Function_21d55f8(1024) && v4[25] )
      {
        result = 3;
        if ( dword_21BF6C0 & 0xC03 )
          result = 1;
        v8 = v2[2] + 1;
        v2[2] = v8;
        if ( !(result & v8) )
        {
          --v4[25];
          v9 = v4[24] + 1;
          v4[24] = v9;
          if ( v9 >= 50000 )
            v4[24] = 50000;
          Function_2005748(0x62Du);
          result = v4[2];
          if ( result == 1 )
          {
            result = v4[5] + 1;
            v4[5] = result;
          }
        }
      }
      else
      {
        Function_2005748(0x62Du);
        v5 = v4[24] + v4[25];
        v4[24] = v5;
        if ( v5 >= 50000 )
          v4[24] = 50000;
        if ( v4[2] == 1 )
          v4[5] += v4[25];
        v4[25] = 0;
        v6 = (int *)v2[5];
        if ( v6 )
        {
          Function_207136c(v6);
          v2[5] = 0;
        }
        v7 = (int *)v2[6];
        if ( v7 )
        {
          Function_207136c(v7);
          v2[6] = 0;
        }
        v2[1] = 1;
        result = 0;
        *v2 = 0;
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (021D4714) --------------------------------------------------------
uint __fastcall Function_21d4714(int a1)
{
  int v1;
  int v2;
  uint v3;
  int v4;
  uint result;

  v1 = a1;
  v2 = *(uint *)(a1 + 12);
  v3 = *(uint *)(v2 + 72);
  if ( !v3 )
    ErrorHandler();
  v4 = 0;
  do
  {
    result = 1;
    if ( v3 & 1 )
    {
      if ( *(uint *)(v1 + 20) )
      {
        if ( *(uint *)(v1 + 24) )
        {
          result = ErrorHandler();
        }
        else
        {
          result = Function_21d5028(v2, v4, *(uint *)(v2 + 100));
          *(uint *)(v1 + 24) = result;
        }
      }
      else
      {
        result = Function_21d5028(v2, v4, *(uint *)(v2 + 100));
        *(uint *)(v1 + 20) = result;
      }
    }
    ++v4;
    v3 >>= 1;
  }
  while ( v4 < 5 );
  return result;
}

//----- (021D4764) --------------------------------------------------------
uint *__fastcall Function_21d4764(int a1)
{
  uint *v1;
  uint *result;

  v1 = (uint *)(a1 + 316);
  *v1 = 0;
  v1[1] = 0;
  v1[8] = a1;
  result = AddTaskToTaskList1((int)Function_21d4824, a1 + 316, 0x84u);
  v1[9] = result;
  return result;
}

//----- (021D4788) --------------------------------------------------------
int __fastcall Function_21d4788(int a1)
{
  return Call_RemoveTaskFromTaskList(*(int **)(a1 + 352));
}

//----- (021D4798) --------------------------------------------------------
int __fastcall Function_21d4798(int a1, int a2)
{
  uint *v2;
  int result;

  v2 = (uint *)(a1 + 316);
  *v2 = a2;
  result = 0;
  v2[1] = 0;
  v2[2] = 0;
  v2[4] = 0;
  return result;
}

//----- (021D47AC) --------------------------------------------------------
int __fastcall Function_21d47ac(int a1)
{
  return *(uint *)(a1 + 324);
}

//----- (021D47B4) --------------------------------------------------------
int __fastcall Function_21d47b4(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  a1[82] = 0;
  a1[93] = Function_21d7228();
  v1[94] = Function_21d73b4(v1);
  v1[95] = Function_21d7550(v1);
  result = Function_21d76b4(v1);
  v1[96] = result;
  return result;
}

//----- (021D47F0) --------------------------------------------------------
int *__fastcall Function_21d47f0(int a1)
{
  int **v1;

  v1 = (int **)a1;
  *(uint *)(a1 + 328) = 1;
  Function_207136c(*(int **)(a1 + 372));
  Function_207136c(v1[94]);
  Function_207136c(v1[95]);
  return Function_207136c(v1[96]);
}

//----- (021D4824) --------------------------------------------------------
int __fastcall Function_21d4824(int a1, uint *a2)
{
  uint *v2;
  int result;

  v2 = a2;
  do
    result = ((int (__fastcall *)(uint *))off_21D8774[*v2][v2[1]])(v2);
  while ( result == 1 );
  return result;
}

//----- (021D4844) --------------------------------------------------------
int __fastcall Function_21d4844(uint *a1)
{
  uint *v1;

  v1 = a1;
  a1[10] = Function_21d5d58(a1[8], a1[6]);
  ++v1[1];
  return 0;
}

//----- (021D485C) --------------------------------------------------------
int __fastcall Function_21d485c(int a1)
{
  int v1;

  v1 = a1;
  if ( Function_21d5dc4(*(uint *)(a1 + 40)) )
  {
    Function_21d5d90(*(uint *)(v1 + 40), 1);
    ++*(uint *)(v1 + 4);
  }
  return 0;
}

//----- (021D4880) --------------------------------------------------------
int __fastcall Function_21d4880(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( Function_21d5dc4(a1[10]) )
  {
    Function_21d5d90(v1[10], 5);
    v1[2] = 1;
    ++v1[1];
  }
  return 0;
}

//----- (021D48A8) --------------------------------------------------------
int Function_21d48a8()
{
  return 0;
}

//----- (021D48AC) --------------------------------------------------------
int __fastcall Function_21d48ac(int a1)
{
  int v1;

  v1 = a1;
  Function_21d5d90(*(uint *)(a1 + 40), 4);
  ++*(uint *)(v1 + 4);
  return 0;
}

//----- (021D48C4) --------------------------------------------------------
int __fastcall Function_21d48c4(int a1)
{
  int v1;

  v1 = a1;
  if ( Function_21d5dc4(*(uint *)(a1 + 40)) == 1 )
  {
    Function_207136c(*(int **)(v1 + 40));
    *(uint *)(v1 + 8) = 1;
    ++*(uint *)(v1 + 4);
  }
  return 0;
}

//----- (021D48E8) --------------------------------------------------------
int __fastcall Function_21d48e8(int a1)
{
  int v1;

  v1 = a1;
  Function_21d5d90(*(uint *)(a1 + 40), 2);
  ++*(uint *)(v1 + 4);
  return 0;
}

//----- (021D4900) --------------------------------------------------------
int __fastcall Function_21d4900(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( Function_21d5dc4(a1[10]) == 1 )
  {
    v1[11] = Function_21d6484(v1[8]);
    v1[12] = Function_21d6764(v1[8], v1[7]);
    ++v1[1];
  }
  return 0;
}

//----- (021D492C) --------------------------------------------------------
int __fastcall Function_21d492c(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( Function_21d67b0(a1[12]) == 1 )
  {
    Function_21d679c(v1[12], 1);
    Function_21d5da4(v1[10], 1);
    ++v1[1];
  }
  return 0;
}

//----- (021D4954) --------------------------------------------------------
int __fastcall Function_21d4954(int a1)
{
  int v1;

  v1 = a1;
  if ( Function_21d67b0(*(uint *)(a1 + 48)) == 1 )
  {
    Function_207136c(*(int **)(v1 + 44));
    *(uint *)(v1 + 8) = 1;
    ++*(uint *)(v1 + 4);
  }
  return 0;
}

//----- (021D4978) --------------------------------------------------------
int __fastcall Function_21d4978(int a1)
{
  int v1;

  v1 = a1;
  *(uint *)(a1 + 44) = Function_21d6484(*(uint *)(a1 + 32));
  Function_21d679c(*(uint *)(v1 + 48), 2);
  ++*(uint *)(v1 + 4);
  return 0;
}

//----- (021D4998) --------------------------------------------------------
int __fastcall Function_21d4998(int a1)
{
  int v1;

  v1 = a1;
  if ( Function_21d67b0(*(uint *)(a1 + 48)) == 1 )
  {
    Function_207136c(*(int **)(v1 + 48));
    Function_207136c(*(int **)(v1 + 44));
    Function_21d5da4(*(uint *)(v1 + 40), 0);
    Function_21d5d90(*(uint *)(v1 + 40), 3);
    ++*(uint *)(v1 + 4);
  }
  return 0;
}

//----- (021D49CC) --------------------------------------------------------
int __fastcall Function_21d49cc(int a1)
{
  int v1;

  v1 = a1;
  if ( Function_21d5dc4(*(uint *)(a1 + 40)) == 1 )
  {
    Function_21d5d90(*(uint *)(v1 + 40), 4);
    ++*(uint *)(v1 + 4);
  }
  return 0;
}

//----- (021D49EC) --------------------------------------------------------
int __fastcall Function_21d49ec(int a1)
{
  int v1;

  v1 = a1;
  if ( Function_21d5dc4(*(uint *)(a1 + 40)) == 1 )
  {
    Function_207136c(*(int **)(v1 + 40));
    *(uint *)(v1 + 8) = 1;
    ++*(uint *)(v1 + 4);
  }
  return 0;
}

//----- (021D4A10) --------------------------------------------------------
int __fastcall Function_21d4a10(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  Function_21d679c(a1[12], 3);
  v1[13] = Function_21d6df0(v1[8]);
  result = 0;
  v1[4] = 0;
  ++v1[1];
  return result;
}

//----- (021D4A30) --------------------------------------------------------
int __fastcall Function_21d4a30(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  v2 = a1[4] + 1;
  v1[4] = v2;
  if ( v2 >= 48 )
  {
    v1[4] = 0;
    ++v1[1];
    Function_2005844(0x23u, 0);
    Function_21d679c(v1[12], 4);
  }
  return 0;
}

//----- (021D4A5C) --------------------------------------------------------
int __fastcall Function_21d4a5c(int a1)
{
  int v1;

  v1 = a1;
  if ( Function_21d6e1c(*(uint *)(a1 + 52)) == 1 )
  {
    Function_21d679c(*(uint *)(v1 + 48), 3);
    Function_207136c(*(int **)(v1 + 52));
    ++*(uint *)(v1 + 4);
    *(uint *)(v1 + 16) = 0;
    *(uint *)(v1 + 8) = 1;
  }
  return 0;
}

//----- (021D4A8C) --------------------------------------------------------
int __fastcall Function_21d4a8c(uint *a1)
{
  int *v1;

  v1 = &dword_21D87A8[6 * *(uint *)(a1[8] + 52)];
  ++a1[1];
  a1[5] = 0;
  Function_21d679c(a1[12], v1[3]);
  return 0;
}

//----- (021D4AB8) --------------------------------------------------------
int __fastcall Function_21d4ab8(uint *a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = 0;
  v2 = 0;
  v3 = a1[8];
  do
  {
    if ( *(uint *)(v3 + 124) != 1 )
      ++v1;
    ++v2;
    v3 += 4;
  }
  while ( v2 < 3 );
  v4 = a1[5];
  if ( v4 < 2 && v4 != v1 )
  {
    v5 = *(uint *)(a1[8] + 52);
    a1[5] = v1;
    Function_21d679c(a1[12], dword_21D87A8[6 * v5 + 3 + v1]);
  }
  return 0;
}

//----- (021D4AFC) --------------------------------------------------------
int __fastcall Function_21d4afc(int a1)
{
  int v1;

  v1 = a1;
  Function_21d679c(*(uint *)(a1 + 48), 3);
  ++*(uint *)(v1 + 4);
  return 0;
}

//----- (021D4B14) --------------------------------------------------------
int __fastcall Function_21d4b14(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_21d47f0(a1[8]);
  v1[11] = Function_21d6484(v1[8]);
  Function_21d679c(v1[12], 2);
  ++v1[1];
  return 0;
}

//----- (021D4B38) --------------------------------------------------------
int __fastcall Function_21d4b38(int a1)
{
  int v1;

  v1 = a1;
  if ( Function_21d67b0(*(uint *)(a1 + 48)) == 1 )
  {
    Function_207136c(*(int **)(v1 + 48));
    Function_207136c(*(int **)(v1 + 44));
    Function_21d5da4(*(uint *)(v1 + 40), 0);
    Function_21d5d90(*(uint *)(v1 + 40), 3);
    ++*(uint *)(v1 + 4);
  }
  return 0;
}

//----- (021D4B6C) --------------------------------------------------------
int __fastcall Function_21d4b6c(int a1)
{
  int v1;

  v1 = a1;
  if ( Function_21d5dc4(*(uint *)(a1 + 40)) == 1 )
  {
    Function_21d72d4(*(uint *)(v1 + 32));
    Function_21d7460(*(uint *)(v1 + 32));
    Function_21d77e4(*(uint *)(v1 + 32), 0);
    Function_21d77e4(*(uint *)(v1 + 32), 1);
    ++*(uint *)(v1 + 4);
  }
  return 0;
}

//----- (021D4BA0) --------------------------------------------------------
int __fastcall Function_21d4ba0(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  v2 = a1[4] + 1;
  v1[4] = v2;
  if ( v2 >= 45 )
  {
    v1[4] = 0;
    Function_21d5d90(v1[10], 4);
    ++v1[1];
  }
  return 0;
}

//----- (021D4BC4) --------------------------------------------------------
int __fastcall Function_21d4bc4(int a1)
{
  int v1;

  v1 = a1;
  if ( Function_21d5dc4(*(uint *)(a1 + 40)) == 1 )
  {
    Function_207136c(*(int **)(v1 + 40));
    *(uint *)(v1 + 8) = 1;
    ++*(uint *)(v1 + 4);
  }
  return 0;
}

//----- (021D4BE8) --------------------------------------------------------
int __fastcall Function_21d4be8(int a1)
{
  int v1;

  v1 = a1;
  Function_21d679c(*(uint *)(a1 + 48), 4);
  *(uint *)(v1 + 8) = 1;
  ++*(uint *)(v1 + 4);
  return 0;
}

//----- (021D4C04) --------------------------------------------------------
int __fastcall Function_21d4c04(int a1)
{
  int v1;

  v1 = a1;
  Function_21d679c(*(uint *)(a1 + 48), 8);
  *(uint *)(v1 + 8) = 1;
  ++*(uint *)(v1 + 4);
  return 0;
}

//----- (021D4C20) --------------------------------------------------------
int __fastcall Function_21d4c20(int a1)
{
  int v1;

  v1 = a1;
  Function_21d5d90(*(uint *)(a1 + 40), 6);
  ++*(uint *)(v1 + 4);
  *(uint *)(v1 + 8) = 1;
  return 0;
}

//----- (021D4C3C) --------------------------------------------------------
int __fastcall Function_21d4c3c(uint *a1)
{
  uint *v1;

  v1 = a1;
  a1[11] = Function_21d6484(a1[8]);
  Function_21d679c(v1[12], 2);
  v1[3] = 1;
  ++v1[1];
  return 0;
}

//----- (021D4C60) --------------------------------------------------------
int __fastcall Function_21d4c60(int a1)
{
  int v1;

  v1 = a1;
  if ( Function_21d67b0(*(uint *)(a1 + 48)) == 1 )
  {
    Function_207136c(*(int **)(v1 + 44));
    Function_207136c(*(int **)(v1 + 48));
    Function_21d5da4(*(uint *)(v1 + 40), 0);
    Function_21d5d90(*(uint *)(v1 + 40), 3);
    *(uint *)(v1 + 16) = 0;
    ++*(uint *)(v1 + 4);
  }
  return 0;
}

//----- (021D4C98) --------------------------------------------------------
int __fastcall Function_21d4c98(uint *a1)
{
  int v1;

  v1 = a1[4] + 1;
  a1[4] = v1;
  if ( v1 >= 30 )
  {
    a1[4] = 0;
    ++a1[1];
    Function_21d5d90(a1[10], 2);
  }
  return 0;
}

//----- (021D4CBC) --------------------------------------------------------
int __fastcall Function_21d4cbc(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( Function_21d5dc4(a1[10]) == 1 )
  {
    v1[11] = Function_21d6484(v1[8]);
    v1[12] = Function_21d6764(v1[8], v1[7]);
    v1[3] = 0;
    ++v1[1];
  }
  return 0;
}

//----- (021D4CEC) --------------------------------------------------------
int __fastcall Function_21d4cec(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( Function_21d67b0(a1[12]) == 1 )
  {
    Function_21d679c(v1[12], 1);
    Function_21d5da4(v1[10], 1);
    ++v1[1];
  }
  return 0;
}

//----- (021D4D14) --------------------------------------------------------
int __fastcall Function_21d4d14(int a1)
{
  int v1;

  v1 = a1;
  if ( Function_21d67b0(*(uint *)(a1 + 48)) == 1 )
  {
    Function_207136c(*(int **)(v1 + 44));
    *(uint *)(v1 + 8) = 1;
    ++*(uint *)(v1 + 4);
  }
  return 0;
}

//----- (021D4D38) --------------------------------------------------------
uint __fastcall Function_21d4d38(int a1, int a2, int a3, int a4)
{
  int v4;
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
  int v16;
  int v17;
  int v18;
  int v20;
  int v21;

  v21 = a4;
  v4 = a1;
  v5 = (int *)(a1 + 388);
  *v5 = a1;
  v6 = Function_21d19e4(a1, 3u, 0, a4);
  Function_20a71b0(v6, &v20);
  Function_21d4ea8(v20, 1, v5 + 1);
  Function_21d4ea8(v20, 2, v5 + 41);
  Function_21d4ea8(v20, 3, v5 + 49);
  Function_21d4ea8(v20, 3, v5 + 57);
  Function_21d4ea8(v20, 4, v5 + 65);
  Function_21d4ea8(v20, 4, v5 + 73);
  free(v6);
  v8 = Function_21d19e4(v4, 5u, 0, v7);
  Function_20a71b0(v8, &v20);
  Function_21d4ea8(v20, 0, v5 + 9);
  free(v8);
  v10 = Function_21d19e4(v4, 6u, 0, v9);
  Function_20a71b0(v10, &v20);
  Function_21d4ea8(v20, 0, v5 + 17);
  free(v10);
  v12 = Function_21d19e4(v4, 7u, 0, v11);
  Function_20a71b0(v12, &v20);
  Function_21d4ea8(v20, 0, v5 + 25);
  free(v12);
  v14 = Function_21d19e4(v4, 0x4Au, 0, v13);
  Function_20a71b0(v14, &v20);
  Function_21d4ea8(v20, 0, v5 + 81);
  free(v14);
  v16 = Function_21d19e4(v4, 0x4Bu, 0, v15);
  Function_20a71b0(v16, &v20);
  Function_21d4ea8(v20, 0, v5 + 89);
  Function_21d4ea8(v20, 0, v5 + 97);
  free(v16);
  v18 = Function_21d19e4(v4, 0x4Cu, 0, v17);
  Function_20a71b0(v18, &v20);
  Function_21d4ea8(v20, 0, v5 + 105);
  Function_21d4ea8(v20, 0, v5 + 113);
  return free(v18);
}

//----- (021D4EA4) --------------------------------------------------------
void Function_21d4ea4()
{
  ;
}

//----- (021D4EA8) --------------------------------------------------------
int __fastcall Function_21d4ea8(int a1, int a2, ushort *a3)
{
  ushort *v3;
  int v4;
  int result;

  v3 = (ushort *)(*(uint *)(a1 + 12) + 32 * a2);
  v4 = 0;
  do
  {
    result = *v3;
    ++v4;
    ++v3;
    *a3 = result;
    ++a3;
  }
  while ( v4 < 16 );
  return result;
}

//----- (021D4EC0) --------------------------------------------------------
ushort *__fastcall Function_21d4ec0(ushort a1, ushort a2, uint a3, ushort *a4)
{
  int v4;
  ushort *result;
  ushort varg_r0;
  ushort varg_r1;

  varg_r0 = a1;
  varg_r1 = a2;
  v4 = a3;
  result = a4;
  if ( a3 > 0x10 )
    v4 = 16;
  *a4 = 32
      * (((uint)varg_r0 << 22 >> 27)
       + ((int)((((uint)varg_r1 << 22 >> 27) - ((uint)varg_r0 << 22 >> 27)) * v4) >> 4)) | ((varg_r0 & 0x1F) + (((varg_r1 & 0x1F) - (varg_r0 & 0x1F)) * v4 >> 4)) | ((((uint)varg_r0 << 17 >> 27) + (ushort)((int)((((uint)varg_r1 << 17 >> 27) - ((uint)varg_r0 << 17 >> 27)) * v4) >> 4)) << 10);
  return result;
}

//----- (021D4F18) --------------------------------------------------------
ushort *__fastcall Function_21d4f18(ushort *a1, ushort *a2, uint a3, ushort *a4)
{
  ushort *v4;
  ushort *v5;
  ushort *v6;
  int v7;
  ushort *result;
  uint v9;

  v4 = a1;
  v5 = a2;
  v9 = a3;
  v6 = a4;
  v7 = 0;
  do
  {
    result = Function_21d4ec0(*v4, *v5, v9, v6);
    ++v7;
    ++v6;
    ++v5;
    ++v4;
  }
  while ( v7 < 16 );
  return result;
}

//----- (021D4F40) --------------------------------------------------------
uint __fastcall Function_21d4f40(int a1, uchar a2, int a3, int a4)
{
  return Function_201972c(a2, a4, 32, 32 * a3 & 0xFFFF);
}

//----- (021D4F58) --------------------------------------------------------
uint __fastcall Function_21d4f58(int a1, int a2)
{
  return Function_21d4f40(a1, 1u, dword_21D9E60[a2], a1 + 552 + 32 * a2);
}

//----- (021D4F78) --------------------------------------------------------
uint __fastcall Function_21d4f78(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = dword_21D9E60[a2];
  v4 = a1 + 872;
  v5 = 32 * a2;
  Function_21d4f18(
    (ushort *)(a1 + 552 + 32 * a2),
    (ushort *)(a1 + 712 + 32 * a2),
    0xAu,
    (ushort *)(a1 + 872 + 32 * a2));
  return Function_21d4f40(v2, 1u, v3, v4 + v5);
}

//----- (021D4FB8) --------------------------------------------------------
uint __fastcall Function_21d4fb8(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = dword_21D9E60[a2];
  v4 = a1 + 872;
  v5 = 32 * a2;
  Function_21d4f18(
    (ushort *)(a1 + 552 + 32 * a2),
    (ushort *)(a1 + 712 + 32 * a2),
    0xCu,
    (ushort *)(a1 + 872 + 32 * a2));
  return Function_21d4f40(v2, 1u, v3, v4 + v5);
}

//----- (021D4FF8) --------------------------------------------------------
uint __fastcall Function_21d4ff8(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = a1;
  v2 = 0;
  do
    result = Function_21d4f58(v1, v2++);
  while ( v2 < 5 );
  return result;
}

//----- (021D5010) --------------------------------------------------------
uint __fastcall Function_21d5010(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = a1;
  v2 = 0;
  do
    result = Function_21d4f78(v1, v2++);
  while ( v2 < 5 );
  return result;
}

//----- (021D5028) --------------------------------------------------------
int *__fastcall Function_21d5028(int a1, int a2, int a3)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v7 = 0;
  v8 = 0;
  v4 = a2;
  v5 = a3;
  v9 = 0;
  v6 = a1;
  return Function_2071330(*(uint *)(a1 + 1100), dword_21D86B0, &v7, 0, (int)&v4, 0x8Fu);
}

//----- (021D505C) --------------------------------------------------------
int __fastcall Function_21d505c(int a1)
{
  return *(uint *)(Function_2071598(a1) + 12);
}

//----- (021D5068) --------------------------------------------------------
int __fastcall Function_21d5068(int a1, uint *a2)
{
  uint *v2;
  uint *v3;

  v2 = a2;
  v3 = (uint *)Function_20715bc(a1);
  v2[7] = v3[2];
  v2[4] = *v3;
  v2[5] = v3[1];
  v2[8] = v2[7] + 388;
  return 1;
}

//----- (021D508C) --------------------------------------------------------
uint __fastcall Function_21d508c(int a1, int a2)
{
  return Function_21d4f58(*(uint *)(a2 + 28), *(uint *)(a2 + 16));
}

//----- (021D5098) --------------------------------------------------------
uint __fastcall Function_21d5098(int a1, int *a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint result;
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

  v2 = a2;
  v3 = a2[4];
  v4 = dword_21D9E60[v3];
  v5 = 32 * v3;
  v6 = a2[8];
  v7 = v6 + 484;
  v21 = v4;
  v8 = a2[8];
  v9 = v6 + 324;
  v10 = *v2;
  result = v8 + 164;
  if ( (uint)*v2 <= 4 )
    JUMPOUT(__CS__, *((short *)&off_21D50CC + v10) + 35475662);
  switch ( (uchar)v10 )
  {
    case 0:
      v12 = v2[6] + 0x4000;
      v2[6] = v12;
      if ( v12 > 0x10000 )
        v2[6] = 0x10000;
      v13 = v2[6] / 4096;
      if ( v13 == 16 )
        ++*v2;
      Function_21d4f18(
        (ushort *)(result + v5),
        (ushort *)(v9 + v5),
        (ushort)v13,
        (ushort *)(v7 + v5));
      result = Function_21d4f40(v2[7], 1u, v21, v7 + v5);
      break;
    case 1:
      v14 = v2[6];
      v2[6] = v14 - 0x4000;
      if ( v14 - 0x4000 < 0 )
        v2[6] = 0;
      v15 = v2[6] / 4096;
      if ( !v15 )
      {
        v16 = v2[1] + 1;
        v2[1] = v16;
        if ( v16 < 4 )
        {
          --*v2;
        }
        else
        {
          if ( v2[5] )
            ++*v2;
          else
            *v2 = 4;
          v2[3] = 1;
        }
      }
      Function_21d4f18(
        (ushort *)(result + v5),
        (ushort *)(v9 + v5),
        (ushort)v15,
        (ushort *)(v7 + v5));
      result = Function_21d4f40(v2[7], 1u, v21, v7 + v5);
      break;
    case 2:
      v17 = v2[6] + 0x8000;
      v2[6] = v17;
      if ( v17 > 0x10000 )
        v2[6] = 0x10000;
      v18 = v2[6] / 4096;
      if ( v18 == 16 )
        ++*v2;
      Function_21d4f18(
        (ushort *)(result + v5),
        (ushort *)(v9 + v5),
        (ushort)v18,
        (ushort *)(v7 + v5));
      result = Function_21d4f40(v2[7], 1u, v21, v7 + v5);
      break;
    case 3:
      v19 = v2[6];
      v2[6] = v19 - 0x8000;
      if ( v19 - 0x8000 < 0 )
        v2[6] = 0;
      v20 = v2[6] / 4096;
      if ( !v20 )
        --*v2;
      Function_21d4f18(
        (ushort *)(result + v5),
        (ushort *)(v9 + v5),
        (ushort)v20,
        (ushort *)(v7 + v5));
      result = Function_21d4f40(v2[7], 1u, v21, v7 + v5);
      break;
    default:
      return result;
  }
  return result;
}

//----- (021D5200) --------------------------------------------------------
int *__fastcall Function_21d5200(int a1, int a2, int a3, int a4)
{
  int v4;
  int *result;
  int v6;
  int v7;
  int v8;
  int v9;

  v9 = a4;
  v4 = a1;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( *(uint *)(a1 + 308) )
    ErrorHandler();
  result = Function_2071330(*(uint *)(v4 + 1100), dword_21D8700, &v6, 0, v4, 0x8Fu);
  *(uint *)(v4 + 308) = result;
  return result;
}

//----- (021D5244) --------------------------------------------------------
uint __fastcall Function_21d5244(int a1)
{
  int v1;
  int *v2;

  v1 = a1;
  v2 = *(int **)(a1 + 308);
  if ( v2 )
  {
    Function_207136c(v2);
    *(uint *)(v1 + 308) = 0;
  }
  return Function_21d4ff8(v1);
}

//----- (021D5268) --------------------------------------------------------
int __fastcall Function_21d5268(uint *a1)
{
  uint *v1;
  int *v2;
  uint *v3;
  int v4;
  int v5;
  int v6;
  bool v7;
  uchar v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  uint v17;
  int result;
  int v19;
  int *v20;
  int v21;
  uint v22;

  v1 = a1;
  v2 = &dword_21D8938[4 * a1[1]];
  v21 = 1;
  v22 = 1;
  v3 = a1;
  v20 = dword_21D9E60;
  v4 = 0;
  do
  {
    if ( v22 & *v2 )
    {
      if ( v1[2] )
      {
        v5 = v2[1];
        v6 = v2[2];
        v8 = __OFSUB__(v5, v6);
        v7 = v5 - v6 < 0;
        v9 = v3[5];
        if ( v7 ^ v8 )
        {
          v10 = v9 + v2[3];
          v3[5] = v10;
          v11 = v2[2];
          if ( v10 < v11 )
            v21 = 0;
          else
            v3[5] = v11;
        }
        else
        {
          v12 = v9 - v2[3];
          v3[5] = v12;
          v13 = v2[2];
          if ( v12 > v13 )
            v21 = 0;
          else
            v3[5] = v13;
        }
      }
      else
      {
        v3[5] = v2[1];
        v21 = 0;
      }
      v14 = v1[11];
      v15 = *v20;
      v16 = v14 + 484;
      Function_21d4f18(
        (ushort *)(v14 + 164 + v4),
        (ushort *)(v14 + 324 + v4),
        (uint)(16 * (v3[5] + (v3[5] >> 11 >> 20))) >> 16,
        (ushort *)(v14 + 484 + v4));
      Function_21d4f40(v1[10], 1u, v15, v16 + v4);
    }
    ++v3;
    ++v20;
    v4 += 32;
    v17 = 2 * v22;
    v22 = v17;
  }
  while ( v17 <= 0x10 );
  if ( v17 <= 0x20 )
  {
    do
    {
      if ( *v2 & 0x20 )
      {
        v1[3] += 4096;
        if ( v1[3] < v2[1] )
          v21 = 0;
        else
          v1[3] = 0;
      }
      v22 *= 2;
    }
    while ( v22 <= 0x20 );
  }
  v1[2] = 1;
  result = v21;
  if ( v21 == 1 )
  {
    v1[2] = 0;
    v19 = v1[1] + 1;
    v1[1] = v19;
    result = dword_21D8938[4 * v19];
    if ( result == 64 )
      v1[1] = 0;
  }
  return result;
}

//----- (021D5388) --------------------------------------------------------
int __fastcall Function_21d5388(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = Function_20715bc(a1);
  *(uint *)(v2 + 40) = v3;
  *(uint *)(v2 + 44) = v3 + 388;
  return 1;
}

//----- (021D53A0) --------------------------------------------------------
void Function_21d53a0()
{
  ;
}

//----- (021D53A4) --------------------------------------------------------
int __fastcall Function_21d53a4(int a1, uint *a2)
{
  return Function_21d5268(a2);
}

//----- (021D53B0) --------------------------------------------------------
uint *__fastcall Function_21d53b0(int a1)
{
  int v1;
  uint *v2;

  v1 = a1;
  v2 = (uint *)malloc2(0x4Fu, 16);
  *v2 = 0;
  v2[1] = 0;
  v2[3] = v1;
  return AddTaskToTaskList1((int)Function_21d542c, (int)v2, 0x8Fu);
}

//----- (021D53D4) --------------------------------------------------------
uint *__fastcall Function_21d53d4(int a1)
{
  int v1;
  uint *v2;

  v1 = a1;
  v2 = (uint *)malloc2(0x4Fu, 16);
  *v2 = 0;
  v2[1] = 0;
  v2[3] = v1;
  return AddTaskToTaskList1((int)Function_21d548c, (int)v2, 0x8Fu);
}

//----- (021D53F8) --------------------------------------------------------
int __fastcall Function_21d53f8(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;

  v2 = a1;
  v3 = a2;
  v4 = (uint *)malloc2(0x4Fu, 16);
  *v4 = 0;
  v4[2] = v3;
  v4[1] = 0x8000;
  v4[3] = v2;
  AddTaskToTaskList1((int)Function_21d54ec, (int)v4, 0x8Fu);
  return Function_2005748(0x5F0u);
}

//----- (021D542C) --------------------------------------------------------
int __fastcall Function_21d542c(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  uint v6;
  ushort *v7;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = *(uint *)(a2 + 12) + 388;
  v5 = *(uint *)(a2 + 4) + 2048;
  *(uint *)(a2 + 4) = v5;
  v6 = 16 * (v5 + ((uint)(v5 >> 11) >> 20)) >> 16;
  v7 = (ushort *)(v4 + 132);
  if ( v6 > 0x10 )
    v6 = 16;
  Function_21d4f18((ushort *)(v4 + 4), (ushort *)(v4 + 36), v6, v7);
  Function_21d4f40(*(uint *)(v2 + 12), 7u, 1, (int)v7);
  if ( v6 == 16 || (result = **(uint **)(v2 + 12), result == 63) )
  {
    free(v2);
    result = Call_RemoveTaskFromTaskList(v3);
  }
  return result;
}

//----- (021D548C) --------------------------------------------------------
int __fastcall Function_21d548c(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  uint v6;
  ushort *v7;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = *(uint *)(a2 + 12) + 388;
  v5 = *(uint *)(a2 + 4) + 2048;
  *(uint *)(v2 + 4) = v5;
  v6 = 16 * (v5 + ((uint)(v5 >> 11) >> 20)) >> 16;
  v7 = (ushort *)(v4 + 132);
  if ( v6 > 0x10 )
    v6 = 16;
  Function_21d4f18((ushort *)(v4 + 36), (ushort *)(v4 + 4), v6, v7);
  Function_21d4f40(*(uint *)(v2 + 12), 7u, 1, (int)v7);
  if ( v6 == 16 || (result = **(uint **)(v2 + 12), result == 63) )
  {
    free(v2);
    result = Call_RemoveTaskFromTaskList(v3);
  }
  return result;
}

//----- (021D54EC) --------------------------------------------------------
ushort *__fastcall Function_21d54ec(int *a1, uint *a2)
{
  uint *v2;
  ushort *v3;
  int *v4;
  ushort *result;
  ushort *v6;
  ushort *v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v2 = a2;
  v3 = (ushort *)a2[3];
  v4 = a1;
  result = v3 + 212;
  v6 = v3 + 260;
  if ( *(uint *)v3 == 63 )
  {
    free((int)v2);
    result = (ushort *)Call_RemoveTaskFromTaskList(v4);
  }
  else
  {
    if ( v2[2] )
      v7 = v3 + 244;
    else
      v7 = v3 + 228;
    if ( *v2 )
    {
      if ( *v2 == 1 )
      {
        v10 = v2[1] - 1024;
        v2[1] = v10;
        v11 = v10 / 4096;
        if ( v10 / 4096 < 0 )
          v11 = 0;
        Function_21d4f18(result, v7, (ushort)v11, v6);
        result = (ushort *)Function_21d4f40(v2[3], 7u, 1, (int)v6);
        if ( !v11 )
        {
          free((int)v2);
          result = (ushort *)Call_RemoveTaskFromTaskList(v4);
        }
      }
    }
    else
    {
      v8 = v2[1] + 4096;
      v9 = v8 / 4096;
      v2[1] = v8;
      if ( v8 / 4096 > 16 )
      {
        LOWORD(v9) = 16;
        ++*v2;
      }
      Function_21d4f18(result, v7, (ushort)v9, v6);
      result = (ushort *)Function_21d4f40(v2[3], 7u, 1, (int)v6);
    }
  }
  return result;
}

//----- (021D55A4) --------------------------------------------------------
int __fastcall Function_21d55a4(int a1, int a2, int a3)
{
  int v3;
  int v4;

  v3 = a2;
  s32_div_f(a3 + *(uint *)(a1 + 4 * a2 + 168), 21);
  return dword_21D9688[21 * v3 + v4 + (v4 < 0 ? 0x15 : 0)];
}

//----- (021D55D4) --------------------------------------------------------
int __fastcall Function_21d55d4(int a1, int a2, int a3)
{
  int v3;

  v3 = 0;
  if ( (*(uint *)(a1 + 4 * a2 + 144) >> 31)
     + __ROR4__((*(uint *)(a1 + 4 * a2 + 144) << 15) - (*(uint *)(a1 + 4 * a2 + 144) >> 31), 15) )
  {
    v3 = -1;
  }
  return Function_21d55a4(a1, a2, a3 + v3);
}

//----- (021D55F8) --------------------------------------------------------
int __fastcall Function_21d55f8(int a1)
{
  int result;

  if ( (dword_21BF6C4 & a1) == a1 )
    result = 2;
  else
    result = (a1 & dword_21BF6C4 & a1) != 0;
  return result;
}

//----- (021D5618) --------------------------------------------------------
int __fastcall Function_21d5618(short a1)
{
  if ( a1 & 3 )
    return 2;
  if ( a1 & 0xC )
    return 3;
  if ( a1 & 0x30 )
    return 4;
  if ( a1 & 0xC0 )
    return 5;
  if ( a1 & 0x100 )
    return 1;
  if ( a1 & 0x200 )
    return 0;
  return 6;
}

//----- (021D5660) --------------------------------------------------------
int __fastcall Function_21d5660(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;

  v1 = a1;
  v2 = Function_21d55d4(a1, 0, 1);
  v3 = Function_21d55d4(v1, 1, 1);
  v4 = Function_21d55d4(v1, 2, 1);
  if ( v2 != 3 && (v2 != v3 || v2 != v4) )
    result = 6;
  else
    result = v2;
  return result;
}

//----- (021D5698) --------------------------------------------------------
int __fastcall Function_21d5698(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;

  v1 = a1;
  v2 = Function_21d55d4(a1, 0, 2);
  v3 = Function_21d55d4(v1, 1, 2);
  v4 = Function_21d55d4(v1, 2, 2);
  if ( v2 != 3 && (v2 != v3 || v2 != v4) )
    result = 6;
  else
    result = v2;
  return result;
}

//----- (021D56D0) --------------------------------------------------------
int __fastcall Function_21d56d0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;

  v1 = a1;
  v2 = Function_21d55d4(a1, 0, 3);
  v3 = Function_21d55d4(v1, 1, 3);
  v4 = Function_21d55d4(v1, 2, 3);
  if ( v2 != 3 && (v2 != v3 || v2 != v4) )
    result = 6;
  else
    result = v2;
  return result;
}

//----- (021D5708) --------------------------------------------------------
int __fastcall Function_21d5708(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;

  v1 = a1;
  v2 = Function_21d55d4(a1, 0, 1);
  v3 = Function_21d55d4(v1, 1, 2);
  v4 = Function_21d55d4(v1, 2, 3);
  if ( v2 != 3 && (v2 != v3 || v2 != v4) )
    result = 6;
  else
    result = v2;
  return result;
}

//----- (021D5740) --------------------------------------------------------
int __fastcall Function_21d5740(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;

  v1 = a1;
  v2 = Function_21d55d4(a1, 0, 3);
  v3 = Function_21d55d4(v1, 1, 2);
  v4 = Function_21d55d4(v1, 2, 1);
  if ( v2 != 3 && (v2 != v3 || v2 != v4) )
    result = 6;
  else
    result = v2;
  return result;
}

//----- (021D5778) --------------------------------------------------------
int __fastcall Function_21d5778(int a1, int a2, uint *a3)
{
  uint *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v3 = a3;
  v4 = a1;
  *a3 = 0;
  v5 = 6;
  v6 = Function_21d5660(a1);
  if ( v6 != 6 )
  {
    v5 = v6;
    *v3 |= 2u;
  }
  v7 = Function_21d5698(v4);
  if ( v7 != 6 )
  {
    v5 = v7;
    *v3 |= 1u;
  }
  v8 = Function_21d56d0(v4);
  if ( v8 != 6 )
  {
    v5 = v8;
    *v3 |= 4u;
  }
  v9 = Function_21d5708(v4);
  if ( v9 != 6 )
  {
    v5 = v9;
    *v3 |= 8u;
  }
  v10 = Function_21d5740(v4);
  if ( v10 != 6 )
  {
    v5 = v10;
    *v3 |= 0x10u;
  }
  return v5;
}

//----- (021D57EC) --------------------------------------------------------
int __fastcall Function_21d57ec(int a1, int a2, uint *a3)
{
  uint *v3;
  int v4;
  int v5;

  v3 = a3;
  *a3 = 0;
  v4 = Function_21d5698(a1);
  v5 = v4;
  if ( v4 != 6 )
  {
    if ( v4 != 2 )
      ErrorHandler();
    *v3 |= 1u;
  }
  return v5;
}

//----- (021D5814) --------------------------------------------------------
int __fastcall Function_21d5814(char a1)
{
  if ( a1 & 3 )
    return 1;
  if ( a1 & 0xC )
    return 0;
  if ( a1 & 0x30 )
    return 2;
  if ( a1 & 0xC0 )
    return 3;
  ErrorHandler();
  return 4;
}

//----- (021D5848) --------------------------------------------------------
int __fastcall Function_21d5848(int result)
{
  int v1;

  v1 = 0;
  do
  {
    ++v1;
    *(uint *)(result + 84) = 0;
    result += 4;
  }
  while ( v1 < 3 );
  return result;
}

//----- (021D5858) --------------------------------------------------------
int __fastcall Function_21d5858(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  v5 = a1;
  do
  {
    if ( !*(uint *)(v5 + 84) )
      break;
    ++v4;
    v5 += 4;
  }
  while ( v4 < 3 );
  if ( v4 >= 3 )
    ErrorHandler();
  result = v2 + 4 * v4;
  *(uint *)(result + 84) = v3;
  return result;
}

//----- (021D5880) --------------------------------------------------------
int __fastcall Function_21d5880(int a1)
{
  int v1;
  char *v2;
  int v3;
  int v4;
  char v6;
  int v7;
  int v8;

  v1 = a1;
  v2 = &v6;
  *(uint *)&v6 = 2048;
  v7 = 2;
  v3 = 0;
  v8 = 1;
  do
  {
    v4 = *(uint *)(v1 + 84);
    if ( v4 && v4 != *(uint *)v2 )
      return 0;
    ++v3;
    v1 += 4;
    v2 += 4;
  }
  while ( v3 < 3 );
  return 1;
}

//----- (021D58C0) --------------------------------------------------------
int __fastcall Function_21d58c0(int a1)
{
  int v1;
  int *v2;
  int v3;

  v1 = 0;
  v2 = &dword_21D87A8[6 * *(uint *)(a1 + 52)];
  do
  {
    v3 = *(uint *)(a1 + 84);
    if ( v3 && v3 != *v2 )
      return 0;
    ++v1;
    a1 += 4;
    ++v2;
  }
  while ( v1 < 3 );
  return 1;
}

//----- (021D58F4) --------------------------------------------------------
int __fastcall Function_21d58f4(int a1, int a2)
{
  int v2;

  v2 = a1;
  Function_2019e2c(
    *(uint *)(a1 + 1084),
    1,
    dword_21D8740[2 * a2] & 0xFF,
    dword_21D8740[2 * a2 + 1] & 0xFF,
    3u,
    2u,
    6u);
  return Function_201c3c0(*(uint *)(v2 + 1084), 1);
}

//----- (021D5938) --------------------------------------------------------
int __fastcall Function_21d5938(int a1, int a2)
{
  int v2;

  v2 = a1;
  Function_2019e2c(
    *(uint *)(a1 + 1084),
    1,
    dword_21D8740[2 * a2] & 0xFF,
    dword_21D8740[2 * a2 + 1] & 0xFF,
    3u,
    2u,
    5u);
  return Function_201c3c0(*(uint *)(v2 + 1084), 1);
}

//----- (021D597C) --------------------------------------------------------
int __fastcall Function_21d597c(int a1)
{
  int v1;
  uint v2;
  int v3;
  int result;

  v1 = *(uint *)(a1 + 68);
  v2 = *(uint *)(a1 + 72);
  if ( v1 == 6 )
    ErrorHandler();
  v3 = 0;
  result = 0;
  do
  {
    if ( v2 & 1 )
      result += dword_21D9550[v1];
    ++v3;
    v2 >>= 1;
  }
  while ( v3 < 5 );
  return result;
}

//----- (021D59AC) --------------------------------------------------------
int __fastcall Function_21d59ac(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
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
  v5 = 0;
  v9 = 0;
  v10 = 0;
  v6 = 278528;
  v11 = 0;
  v12 = a1;
  do
  {
    v7 = 0;
    do
    {
      v9 = v6;
      v14 = v5;
      v13 = v7;
      Function_2071330(*(uint *)(v4 + 1100), dword_21D91DC, &v9, 0, (int)&v12, 0x8Bu);
      v7 += 0x20000;
    }
    while ( v7 < 655360 );
    result = 245760;
    ++v5;
    v6 += 245760;
  }
  while ( v5 < 3 );
  return result;
}

//----- (021D5A0C) --------------------------------------------------------
int __fastcall Function_21d5a0c(int a1, uint *a2, int a3, int a4)
{
  uint *v4;
  uint *v5;
  uint *v6;
  int v7;
  char v9;
  int v10;

  v10 = a4;
  v4 = (uint *)a1;
  v5 = a2;
  v6 = (uint *)Function_20715bc(a1);
  v7 = v6[1];
  *v5 = *v6;
  v5[1] = v7;
  v5[2] = v6[2];
  Function_20715e4(v4, &v9);
  Function_21d84a4(*(uint *)(*v5 + 1104), v5 + 3, &v9, 1, 0, 0, 0, 0, 0, 3, 2);
  Function_2021cc8(v5[4], 1);
  return 1;
}

//----- (021D5A64) --------------------------------------------------------
int __fastcall Function_21d5a64(int a1, int a2)
{
  return Function_21d8544(a2 + 12);
}

//----- (021D5A70) --------------------------------------------------------
uint __fastcall Function_21d5a70(uint *a1, int *a2, int a3, int a4)
{
  int *v4;
  int v5;
  uint *v6;
  int v7;
  int v8;
  uint v9;
  uint result;
  int v11;
  int v12;
  int v13;

  v13 = a4;
  v4 = a2;
  v5 = a2[2];
  v6 = a1;
  s32_div_f(a2[1] + *(uint *)(*a2 + 4 * v5 + 144), 655360);
  v8 = v7;
  Function_20715e4(v6, &v11);
  v12 = v8 + 0x10000 + *(uint *)(*v4 + 4 * v5 + 156);
  Function_2021c50((uint *)v4[4], &v11);
  v9 = dword_21D927C[Function_21d55a4(*v4, v5, v8 / 0x20000)];
  result = Function_2021e24(v4[4]);
  if ( v9 != result )
  {
    Function_2021d6c(v4[4], v9);
    result = Function_2021e50(v4[4], 0);
  }
  return result;
}

//----- (021D5AEC) --------------------------------------------------------
void Function_21d5aec()
{
  ;
}

//----- (021D5AF0) --------------------------------------------------------
int __fastcall Function_21d5af0(int a1)
{
  int v1;
  uint v2;
  int result;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  v4 = 442368;
  v5 = 737280;
  v2 = 1;
  v6 = 0;
  do
  {
    Function_2071330(*(uint *)(v1 + 1100), dword_21D91F0, &v4, v2, v1, 0x8Du);
    v2 *= 10;
    v4 -= 0x8000;
    result = 100000;
  }
  while ( v2 < 0x186A0 );
  return result;
}

//----- (021D5B44) --------------------------------------------------------
int __fastcall Function_21d5b44(int a1, int *a2, int a3, int a4)
{
  uint *v4;
  int *v5;
  int v6;
  char v8;
  int v9;

  v9 = a4;
  v4 = (uint *)a1;
  v5 = a2;
  v6 = Function_20715b4(a1);
  v5[1] = v6;
  v5[2] = 10 * v6;
  *v5 = Function_20715bc((int)v4);
  Function_20715e4(v4, &v8);
  Function_21d84a4(*(uint *)(*v5 + 1104), v5 + 3, &v8, 1, 0, 1, 1, 1, 1, 1, 1);
  Function_2021cc8(v5[4], 1);
  return 1;
}

//----- (021D5B9C) --------------------------------------------------------
int __fastcall Function_21d5b9c(int a1, int a2)
{
  return Function_21d8544(a2 + 12);
}

//----- (021D5BA8) --------------------------------------------------------
int __fastcall Function_21d5ba8(uint *a1, int *a2, int a3, int a4)
{
  int *v4;
  uint *v5;
  uint v6;
  uint v7;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v14 = a4;
  v4 = a2;
  v5 = a1;
  v6 = *(uint *)(*a2 + 96);
  v7 = a2[1];
  if ( v7 > 1 && v6 < v7 )
    return Function_2021cac(a2[4], 0);
  Function_2021cac(a2[4], 1);
  u32_div_f(v6, v4[2]);
  v10 = u32_div_f(v9, v4[1]);
  if ( v10 != Function_2021e24(v4[4]) )
  {
    Function_2021d6c(v4[4], v10);
    Function_2021de0(v4[4], v11, v12);
  }
  Function_20715e4(v5, &v13);
  v13 += dword_21D937C[v10];
  return Function_2021c50((uint *)v4[4], &v13);
}

//----- (021D5C24) --------------------------------------------------------
void Function_21d5c24()
{
  ;
}

//----- (021D5C28) --------------------------------------------------------
int __fastcall Function_21d5c28(int a1)
{
  int v1;
  uint v2;
  int result;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  v4 = 737280;
  v5 = 737280;
  v2 = 1;
  v6 = 0;
  do
  {
    Function_2071330(*(uint *)(v1 + 1100), dword_21D9204, &v4, v2, v1, 0x8Du);
    v2 *= 10;
    v4 -= 0x8000;
    result = 100000;
  }
  while ( v2 < 0x186A0 );
  return result;
}

//----- (021D5C7C) --------------------------------------------------------
int __fastcall Function_21d5c7c(int a1, int *a2, int a3, int a4)
{
  uint *v4;
  int *v5;
  int v6;
  char v8;
  int v9;

  v9 = a4;
  v4 = (uint *)a1;
  v5 = a2;
  v6 = Function_20715b4(a1);
  v5[1] = v6;
  v5[2] = 10 * v6;
  *v5 = Function_20715bc((int)v4);
  Function_20715e4(v4, &v8);
  Function_21d84a4(*(uint *)(*v5 + 1104), v5 + 3, &v8, 1, 0, 1, 1, 1, 1, 1, 1);
  Function_2021cc8(v5[4], 1);
  return 1;
}

//----- (021D5CD4) --------------------------------------------------------
int __fastcall Function_21d5cd4(int a1, int a2)
{
  return Function_21d8544(a2 + 12);
}

//----- (021D5CE0) --------------------------------------------------------
int __fastcall Function_21d5ce0(uint *a1, int *a2, int a3, int a4)
{
  int *v4;
  uint *v5;
  uint v6;
  uint v7;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v14 = a4;
  v4 = a2;
  v5 = a1;
  v6 = *(uint *)(*a2 + 100);
  v7 = a2[4];
  if ( v6 < a2[1] )
    return Function_2021cac(v7, 0);
  Function_2021cac(v7, 1);
  u32_div_f(v6, v4[2]);
  v10 = u32_div_f(v9, v4[1]);
  if ( v10 != Function_2021e24(v4[4]) )
  {
    Function_2021d6c(v4[4], v10);
    Function_2021de0(v4[4], v11, v12);
  }
  Function_20715e4(v5, &v13);
  v13 += dword_21D9354[v10];
  return Function_2021c50((uint *)v4[4], &v13);
}

//----- (021D5D54) --------------------------------------------------------
void Function_21d5d54()
{
  ;
}

//----- (021D5D58) --------------------------------------------------------
int *__fastcall Function_21d5d58(int a1, int a2, int a3, int a4)
{
  int v5;
  int v6;
  int v7;
  int v8;

  v8 = a4;
  v5 = 0;
  v6 = 1638400;
  v7 = 0;
  return Function_2071330(*(uint *)(a1 + 1100), dword_21D9218, &v5, a2, a1, 0x86u);
}

//----- (021D5D90) --------------------------------------------------------
uint *__fastcall Function_21d5d90(int a1, int a2)
{
  int v2;
  uint *result;

  v2 = a2;
  result = (uint *)Function_2071598(a1);
  *result = v2;
  result[1] = 0;
  result[2] = 0;
  result[12] = 0;
  return result;
}

//----- (021D5DA4) --------------------------------------------------------
uint __fastcall Function_21d5da4(int a1, int a2)
{
  int v2;
  uint v3;
  uint result;

  v2 = a2;
  v3 = *(uint *)(Function_2071598(a1) + 64);
  if ( v2 == 1 )
    result = Function_2021cac(v3, 0);
  else
    result = Function_2021cac(v3, 1);
  return result;
}

//----- (021D5DC4) --------------------------------------------------------
int __fastcall Function_21d5dc4(int a1)
{
  return *(uint *)(Function_2071598(a1) + 8);
}

//----- (021D5DD0) --------------------------------------------------------
int __fastcall Function_21d5dd0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  *(uint *)(a2 + 56) = Function_20715bc(a1);
  *(uint *)(v3 + 16) = Function_20715b4(v2);
  return 1;
}

//----- (021D5DE8) --------------------------------------------------------
int __fastcall Function_21d5de8(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  result = *(uint *)(a2 + 64);
  if ( result )
  {
    Function_21d63a4(*(uint *)(a2 + 56));
    result = Function_21d8544(v2 + 60);
  }
  return result;
}

//----- (021D5E04) --------------------------------------------------------
int __fastcall Function_21d5e04(int a1, uint *a2)
{
  uint *v2;
  int result;

  v2 = a2;
  do
    result = ((int (__fastcall *)(uint *))off_21D9294[*v2][v2[1]])(v2);
  while ( result == 1 );
  return result;
}

//----- (021D5E24) --------------------------------------------------------
void Function_21d5e24()
{
  ;
}

//----- (021D5E28) --------------------------------------------------------
int __fastcall Function_21d5e28(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 16);
  Function_21d630c();
  ++*(uint *)(v1 + 4);
  return 0;
}

//----- (021D5E3C) --------------------------------------------------------
int __fastcall Function_21d5e3c(int a1)
{
  if ( *(uint *)(a1 + 12) == 2 )
    ++*(uint *)(a1 + 4);
  return 0;
}

//----- (021D5E4C) --------------------------------------------------------
int __fastcall Function_21d5e4c(int a1)
{
  int v1;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v3 = 0;
  v4 = 1703936;
  v5 = 0;
  Function_21d6410(*(uint *)(a1 + 56), a1 + 60, &v3);
  *(uint *)(v1 + 8) = 1;
  ++*(uint *)(v1 + 4);
  return 0;
}

//----- (021D5E80) --------------------------------------------------------
int Function_21d5e80()
{
  return 0;
}

//----- (021D5E84) --------------------------------------------------------
int __fastcall Function_21d5e84(int a1, int a2, int a3, int a4)
{
  int v4;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a1;
  v9 = 0x80000;
  v10 = 1572864;
  v11 = 0;
  v6 = 0x2000;
  v7 = 0x2000;
  v8 = 0;
  Function_2021c70(*(uint **)(a1 + 64), &v6);
  Function_2021c94(*(uint *)(v4 + 64), 0);
  Function_2021c50(*(uint **)(v4 + 64), &v9);
  Function_2021d6c(*(uint *)(v4 + 64), 0);
  Function_2021e50(*(uint *)(v4 + 64), 0);
  Function_2005748(0x624u);
  ++*(uint *)(v4 + 4);
  return 0;
}

//----- (021D5EEC) --------------------------------------------------------
int __fastcall Function_21d5eec(uint *a1)
{
  uint *v1;
  uint v2;
  int v4;
  int v5;
  char v6;
  int v7;

  v1 = a1;
  Function_21d8560(a1[16], &v6);
  Function_21d8574(v1[16], &v4);
  v7 -= 0x4000;
  v4 -= 455;
  v5 -= 455;
  v2 = v1[12] + 1;
  v1[12] = v2;
  if ( v2 >= 9 )
  {
    v7 = 1441792;
    v4 = 4096;
    v5 = 4096;
    v1[12] = 0;
    ++v1[1];
  }
  Function_2021c50((uint *)v1[16], (int *)&v6);
  Function_2021c70((uint *)v1[16], &v4);
  return 0;
}

//----- (021D5F54) --------------------------------------------------------
int __fastcall Function_21d5f54(uint *a1)
{
  uint v1;

  v1 = a1[12] + 1;
  a1[12] = v1;
  if ( v1 >= 3 )
  {
    a1[12] = 0;
    a1[2] = 1;
    ++a1[1];
  }
  return 0;
}

//----- (021D5F70) --------------------------------------------------------
int __fastcall Function_21d5f70(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  Function_2021d6c(*(uint *)(a1 + 64), 1u);
  Function_2021de0(*(uint *)(v1 + 64), v2, v3);
  Function_2021cc8(*(uint *)(v1 + 64), 1);
  Function_2005748(0x6D0u);
  ++*(uint *)(v1 + 4);
  return 0;
}

//----- (021D5F9C) --------------------------------------------------------
int __fastcall Function_21d5f9c(uint *a1)
{
  uint v1;

  v1 = a1[12] + 1;
  a1[12] = v1;
  if ( v1 >= 4 )
  {
    a1[12] = 0;
    a1[2] = 1;
    ++a1[1];
  }
  return 0;
}

//----- (021D5FB8) --------------------------------------------------------
int __fastcall Function_21d5fb8(int a1, int a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int v6;
  int v7;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v15 = a4;
  v4 = a1;
  v12 = 4096;
  v13 = 4096;
  v14 = 0;
  v9 = 0x80000;
  v10 = 1441792;
  v11 = 0;
  v5 = (uint *)(a1 + 20);
  *v5 = 0x80000;
  v5[1] = 1441792;
  *(uint *)(a1 + 28) = v11;
  Function_2021c50(*(uint **)(a1 + 64), &v9);
  Function_2021c70(*(uint **)(v4 + 64), &v12);
  Function_2021c94(*(uint *)(v4 + 64), 0);
  Function_2021d6c(*(uint *)(v4 + 64), 3u);
  Function_2021de0(*(uint *)(v4 + 64), v6, v7);
  ++*(uint *)(v4 + 4);
  return 1;
}

//----- (021D6020) --------------------------------------------------------
int __fastcall Function_21d6020(int a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  uint v6;
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

  v19 = a4;
  v4 = (uint *)a1;
  v8 = -32768;
  v9 = 0;
  v10 = -24576;
  v11 = 0;
  v12 = -16384;
  v13 = 0;
  v14 = -8192;
  v15 = 0;
  v5 = *(uint *)(a1 + 24);
  v16 = *(uint *)(a1 + 20);
  v17 = v5;
  v18 = *(uint *)(a1 + 28);
  v17 = v5 + *(&v8 + (*(uint *)(a1 + 48) >> 1));
  Function_2021c50(*(uint **)(a1 + 64), &v16);
  v6 = v4[12] + 1;
  v4[12] = v6;
  if ( v6 >= 0x10 )
  {
    v4[12] = 0;
    v4[2] = 1;
    ++v4[1];
  }
  return 0;
}

//----- (021D6084) --------------------------------------------------------
int __fastcall Function_21d6084(int a1, int a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int v6;
  int v7;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v15 = a4;
  v4 = a1;
  v12 = 4096;
  v13 = 4096;
  v14 = 0;
  v9 = 0x80000;
  v10 = 1441792;
  v11 = 0;
  v5 = (uint *)(a1 + 20);
  *v5 = 0x80000;
  v5[1] = 1441792;
  *(uint *)(a1 + 28) = v11;
  Function_2021c50(*(uint **)(a1 + 64), &v9);
  Function_2021c70(*(uint **)(v4 + 64), &v12);
  Function_2021c94(*(uint *)(v4 + 64), 0);
  Function_2021d6c(*(uint *)(v4 + 64), 4u);
  Function_2021de0(*(uint *)(v4 + 64), v6, v7);
  ++*(uint *)(v4 + 4);
  return 1;
}

//----- (021D60EC) --------------------------------------------------------
int __fastcall Function_21d60ec(uint *a1)
{
  uint *v1;
  uint v2;
  int v4;
  int v5;
  char v6;
  int v7;

  v1 = a1;
  Function_21d8560(a1[16], &v6);
  Function_21d8574(v1[16], &v4);
  v7 += 0x4000;
  v4 += 455;
  v5 += 455;
  v2 = v1[12] + 1;
  v1[12] = v2;
  if ( v2 >= 0xA )
  {
    v7 = 1835008;
    v4 = 4096;
    v5 = 4096;
    v1[12] = 0;
    v1[2] = 1;
    ++v1[1];
  }
  Function_2021c50((uint *)v1[16], (int *)&v6);
  Function_2021c70((uint *)v1[16], &v4);
  return 0;
}

//----- (021D6158) --------------------------------------------------------
int __fastcall Function_21d6158(int a1)
{
  int v1;
  uint *v2;
  uint *v3;
  int v4;
  int v5;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v1 = a1;
  v10 = 4096;
  v11 = 4096;
  v12 = 0;
  v7 = 0x80000;
  v8 = 1441792;
  v9 = 0;
  v2 = (uint *)(a1 + 20);
  *v2 = 0x80000;
  v2[1] = 1441792;
  v2[2] = v9;
  v3 = (uint *)(a1 + 32);
  *v3 = 0;
  v3[1] = 0;
  *(uint *)(a1 + 40) = 0;
  *(uint *)(a1 + 48) = 0;
  *(uint *)(a1 + 52) = 0;
  *(uint *)(a1 + 44) = 0;
  *(uint *)(a1 + 8) = 1;
  Function_2021c50(*(uint **)(a1 + 64), &v7);
  Function_2021c70(*(uint **)(v1 + 64), &v10);
  Function_2021c94(*(uint *)(v1 + 64), 0);
  Function_2021d6c(*(uint *)(v1 + 64), 2u);
  Function_2021de0(*(uint *)(v1 + 64), v4, v5);
  ++*(uint *)(v1 + 4);
  return 1;
}

//----- (021D61E0) --------------------------------------------------------
int __fastcall Function_21d61e0(int a1, int a2, int a3, int a4)
{
  int v4;
  uint v5;
  int v6;
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

  v32 = a4;
  v4 = a1;
  v24 = -16;
  v25 = 0;
  v26 = 16;
  v27 = 0;
  v28 = 16;
  v29 = 0;
  v30 = -16;
  v31 = 0;
  v16 = -8192;
  v17 = 0;
  v18 = 0x2000;
  v19 = 0;
  v20 = 0x2000;
  v21 = 0;
  v22 = -8192;
  v23 = 0;
  v8 = 4;
  v9 = 1;
  v10 = 4;
  v11 = 8;
  v12 = 4;
  v13 = 1;
  v14 = 4;
  v15 = 8;
  *(uint *)(a1 + 44) += *(&v24 + *(uint *)(a1 + 52));
  *(uint *)(a1 + 20) += *(&v16 + *(uint *)(a1 + 52));
  v5 = *(uint *)(a1 + 48) + 1;
  *(uint *)(a1 + 48) = v5;
  v6 = *(uint *)(a1 + 52);
  if ( v5 >= *(&v8 + v6) )
  {
    *(uint *)(a1 + 52) = v6 + 1;
    if ( v6 + 1 >= 8 )
      *(uint *)(a1 + 52) = 0;
    *(uint *)(a1 + 48) = 0;
  }
  Function_2021c50(*(uint **)(a1 + 64), (int *)(a1 + 20));
  Function_2021c94(*(uint *)(v4 + 64), *(uint *)(v4 + 44));
  return 0;
}

//----- (021D6288) --------------------------------------------------------
int __fastcall Function_21d6288(int a1, int a2, int a3, int a4)
{
  int v4;
  uint *v5;
  uint *v6;
  int v7;
  int v8;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v16 = a4;
  v4 = a1;
  v13 = 4096;
  v14 = 4096;
  v15 = 0;
  v10 = 0x80000;
  v11 = 1441792;
  v12 = 0;
  v5 = (uint *)(a1 + 20);
  *v5 = 0x80000;
  v5[1] = 1441792;
  *(uint *)(a1 + 28) = v12;
  v6 = (uint *)(a1 + 32);
  *v6 = 0;
  v6[1] = 0;
  *(uint *)(a1 + 40) = 0;
  *(uint *)(a1 + 8) = 1;
  Function_2021c50(*(uint **)(a1 + 64), &v10);
  Function_2021c70(*(uint **)(v4 + 64), &v13);
  Function_2021c94(*(uint *)(v4 + 64), 0);
  Function_2021d6c(*(uint *)(v4 + 64), 2u);
  Function_2021de0(*(uint *)(v4 + 64), v7, v8);
  ++*(uint *)(v4 + 4);
  return 1;
}

//----- (021D630C) --------------------------------------------------------
uint *__fastcall Function_21d630c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int *v5;
  uint *result;

  v2 = a1;
  v3 = a2;
  v4 = *(uint *)(a1 + 56);
  if ( a2 >= 5 )
    ErrorHandler();
  v5 = &dword_21D93D4[4 * v3];
  Function_21d80e4(*(uint *)(v4 + 1104), 2, *(uint *)(v4 + 1080), *v5, 2);
  Function_21d81b4(*(uint *)(v4 + 1104), 2, *(uint *)(v4 + 1080), v5[1], 2);
  Function_21d8288(*(uint *)(v4 + 1104), *(uint *)(v4 + 1080), v5[2], 2);
  Function_21d82f0(*(uint *)(v4 + 1104), *(uint *)(v4 + 1080), v5[3], 2);
  if ( !AddTaskToTaskList2((int)Function_21d63bc, v2, 0x101u) )
    ErrorHandler();
  result = AddTaskToTaskList3((int)Function_21d63e8, v2, 0x101u);
  if ( !result )
    result = (uint *)ErrorHandler();
  return result;
}

//----- (021D63A4) --------------------------------------------------------
int __fastcall Function_21d63a4(int a1)
{
  return Function_21d8358(*(uint *)(a1 + 1104));
}

//----- (021D63BC) --------------------------------------------------------
int __fastcall Function_21d63bc(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;

  v2 = a2;
  v3 = a1;
  v4 = *(uint *)(a2 + 56);
  Function_21d814c(*(uint *)(v4 + 1104), 2);
  Function_21d8220(*(uint *)(v4 + 1104), 2);
  *(uint *)(v2 + 12) = 1;
  return Call_RemoveTaskFromTaskList(v3);
}

//----- (021D63E8) --------------------------------------------------------
int __fastcall Function_21d63e8(int *a1, int a2)
{
  int v2;
  int *v3;
  int result;
  int v5;

  v2 = a2;
  v3 = a1;
  result = *(uint *)(a2 + 12);
  v5 = *(uint *)(a2 + 56);
  if ( result == 1 )
  {
    Function_21d8254(*(uint *)(v5 + 1104), 2);
    *(uint *)(v2 + 12) = 2;
    result = Call_RemoveTaskFromTaskList(v3);
  }
  return result;
}

//----- (021D6410) --------------------------------------------------------
uint __fastcall Function_21d6410(int a1, int a2, int a3, int a4)
{
  int v4;
  short v5;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v13 = a4;
  v4 = a2;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v7 = 4096;
  v8 = 4096;
  v9 = 0;
  Function_21d84a4(*(uint *)(a1 + 1104), a2, a3, 2, 1, 2, 2, 2, 2, 2, 7);
  Function_2021cf8(*(uint *)(v4 + 4), 2);
  Function_2021c60(*(uint **)(v4 + 4), &v10);
  Function_2021c70(*(uint **)(v4 + 4), &v7);
  v5 = Function_201d2a4(0);
  Function_2021c94(*(uint *)(v4 + 4), v5);
  return Function_2021cc8(*(uint *)(v4 + 4), 1);
}

//----- (021D6484) --------------------------------------------------------
int *__fastcall Function_21d6484(int a1)
{
  int v2;
  int v3;
  int v4;

  v2 = 0x80000;
  v3 = 1376256;
  v4 = 0;
  return Function_2071330(*(uint *)(a1 + 1100), dword_21D9150, &v2, 0, a1, 0x87u);
}

//----- (021D64BC) --------------------------------------------------------
int __fastcall Function_21d64bc(int a1, int a2)
{
  int v2;

  v2 = a2;
  *(uint *)(a2 + 16) = Function_20715bc(a1);
  Function_21d65f4(v2);
  return 1;
}

//----- (021D64D0) --------------------------------------------------------
int __fastcall Function_21d64d0(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  result = *(uint *)(a2 + 24);
  if ( result )
  {
    Function_21d8358(*(uint *)(*(uint *)(a2 + 16) + 1104));
    result = Function_21d8544(v2 + 20);
  }
  return result;
}

//----- (021D64FC) --------------------------------------------------------
uint *__fastcall Function_21d64fc(uint *result, uint *a2)
{
  uint *v2;
  char v3;

  v2 = a2;
  switch ( (uchar)*a2 )
  {
    case 0u:
      if ( a2[3] == 2 )
      {
        Function_20715e4(result, &v3);
        Function_21d84a4(*(uint *)(v2[4] + 1104), v2 + 5, &v3, 2, 1, 3, 3, 3, 3, 2, 5);
        Function_2021cc8(v2[6], 1);
        ++*v2;
        goto LABEL_4;
      }
      break;
    case 1u:
LABEL_4:
      result = (uint *)(v2[2] + 1);
      v2[2] = result;
      if ( (uint)result >= 0xF )
      {
        ++*v2;
        result = (uint *)1;
        v2[1] = 1;
      }
      break;
    case 2u:
      Function_21d8358(*(uint *)(a2[4] + 1104));
      Function_21d8544(v2 + 5);
      result = (uint *)(*v2 + 1);
      *v2 = result;
      break;
    default:
      return result;
  }
  return result;
}

//----- (021D659C) --------------------------------------------------------
void Function_21d659c()
{
  ;
}

//----- (021D65A0) --------------------------------------------------------
int __fastcall Function_21d65a0(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;

  v2 = a2;
  v3 = a1;
  v4 = *(uint *)(a2 + 16);
  Function_21d814c(*(uint *)(v4 + 1104), 3);
  Function_21d8220(*(uint *)(v4 + 1104), 3);
  *(uint *)(v2 + 12) = 1;
  return Call_RemoveTaskFromTaskList(v3);
}

//----- (021D65CC) --------------------------------------------------------
int __fastcall Function_21d65cc(int *a1, int a2)
{
  int v2;
  int *v3;
  int result;
  int v5;

  v2 = a2;
  v3 = a1;
  result = *(uint *)(a2 + 12);
  v5 = *(uint *)(a2 + 16);
  if ( result == 1 )
  {
    Function_21d8254(*(uint *)(v5 + 1104), 3);
    *(uint *)(v2 + 12) = 2;
    result = Call_RemoveTaskFromTaskList(v3);
  }
  return result;
}

//----- (021D65F4) --------------------------------------------------------
uint *__fastcall Function_21d65f4(int a1)
{
  int v1;
  int v2;
  uint *result;

  v1 = a1;
  v2 = *(uint *)(a1 + 16);
  Function_21d80e4(*(uint *)(v2 + 1104), 2, *(uint *)(v2 + 1080), 44, 3);
  Function_21d81b4(*(uint *)(v2 + 1104), 2, *(uint *)(v2 + 1080), 47, 3);
  Function_21d8288(*(uint *)(v2 + 1104), *(uint *)(v2 + 1080), 45, 3);
  Function_21d82f0(*(uint *)(v2 + 1104), *(uint *)(v2 + 1080), 46, 3);
  if ( !AddTaskToTaskList2((int)Function_21d65a0, v1, 0x101u) )
    ErrorHandler();
  result = AddTaskToTaskList3((int)Function_21d65cc, v1, 0x101u);
  if ( !result )
    result = (uint *)ErrorHandler();
  return result;
}

//----- (021D667C) --------------------------------------------------------
int __fastcall Function_21d667c(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;

  v2 = a2;
  v3 = a1;
  v4 = *(uint *)(a2 + 32);
  Function_21d814c(*(uint *)(v4 + 1104), 4);
  Function_21d8220(*(uint *)(v4 + 1104), 4);
  *(uint *)(v2 + 16) = 1;
  return Call_RemoveTaskFromTaskList(v3);
}

//----- (021D66A8) --------------------------------------------------------
int __fastcall Function_21d66a8(int *a1, int a2)
{
  int v2;
  int *v3;
  int result;
  int v5;

  v2 = a2;
  v3 = a1;
  result = *(uint *)(a2 + 16);
  v5 = *(uint *)(a2 + 32);
  if ( result == 1 )
  {
    Function_21d8254(*(uint *)(v5 + 1104), 4);
    *(uint *)(v2 + 16) = 2;
    result = Call_RemoveTaskFromTaskList(v3);
  }
  return result;
}

//----- (021D66D0) --------------------------------------------------------
uint *__fastcall Function_21d66d0(int a1)
{
  int v1;
  int v2;
  int *v3;
  uint *result;

  v1 = a1;
  v2 = *(uint *)(a1 + 32);
  v3 = &dword_21D93A4[4 * *(uint *)(a1 + 24)];
  Function_21d80e4(*(uint *)(v2 + 1104), 2, *(uint *)(v2 + 1080), *v3, 4);
  Function_21d81b4(*(uint *)(v2 + 1104), 2, *(uint *)(v2 + 1080), v3[1], 4);
  Function_21d8288(*(uint *)(v2 + 1104), *(uint *)(v2 + 1080), v3[2], 4);
  Function_21d82f0(*(uint *)(v2 + 1104), *(uint *)(v2 + 1080), v3[3], 4);
  if ( !AddTaskToTaskList2((int)Function_21d667c, v1, 0x101u) )
    ErrorHandler();
  result = AddTaskToTaskList3((int)Function_21d66a8, v1, 0x101u);
  if ( !result )
    result = (uint *)ErrorHandler();
  return result;
}

//----- (021D6764) --------------------------------------------------------
int *__fastcall Function_21d6764(int a1, int a2, int a3, int a4)
{
  int v5;
  int v6;
  int v7;
  int v8;

  v8 = a4;
  v5 = 0x80000;
  v6 = 655360;
  v7 = 0;
  return Function_2071330(*(uint *)(a1 + 1100), dword_21D9164, &v5, a2, a1, 0x89u);
}

//----- (021D679C) --------------------------------------------------------
uint *__fastcall Function_21d679c(int a1, int a2)
{
  int v2;
  uint *result;

  v2 = a2;
  result = (uint *)Function_2071598(a1);
  result[1] = v2;
  result[2] = 0;
  result[3] = 0;
  result[5] = 0;
  return result;
}

//----- (021D67B0) --------------------------------------------------------
int __fastcall Function_21d67b0(int a1)
{
  return *(uint *)(Function_2071598(a1) + 12);
}

//----- (021D67BC) --------------------------------------------------------
int __fastcall Function_21d67bc(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  *(uint *)(a2 + 32) = Function_20715bc(a1);
  *(uint *)(v3 + 24) = Function_20715b4(v2);
  Function_21d66d0(v3);
  return 1;
}

//----- (021D67DC) --------------------------------------------------------
int __fastcall Function_21d67dc(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  result = *(uint *)(a2 + 40);
  if ( result )
  {
    Function_21d8358(*(uint *)(*(uint *)(a2 + 32) + 1104));
    result = Function_21d8544(v2 + 36);
  }
  return result;
}

//----- (021D6808) --------------------------------------------------------
int __fastcall Function_21d6808(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  do
    result = ((int (__fastcall *)(int))off_21D9330[*(uint *)(v2 + 4)][*(uint *)(v2 + 8)])(v2);
  while ( result == 1 );
  return result;
}

//----- (021D6828) --------------------------------------------------------
void Function_21d6828()
{
  ;
}

//----- (021D682C) --------------------------------------------------------
int __fastcall Function_21d682c(uint *a1)
{
  uint *v1;
  short v2;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v1 = a1;
  if ( a1[4] == 2 )
  {
    v7 = 0x80000;
    v8 = 1835008;
    v9 = 0;
    v4 = 0;
    v5 = 0;
    v6 = 0;
    Function_21d84a4(*(uint *)(a1[8] + 1104), a1 + 9, &v7, 2, 1, 4, 4, 4, 4, 2, 6);
    Function_2021cf8(v1[10], 2);
    Function_2021c60((uint *)v1[10], &v4);
    v2 = Function_201d2a4(0);
    Function_2021c94(v1[10], v2);
    v1[3] = 1;
    ++v1[2];
  }
  return 0;
}

//----- (021D68A8) --------------------------------------------------------
int Function_21d68a8()
{
  return 0;
}

//----- (021D68AC) --------------------------------------------------------
int __fastcall Function_21d68ac(int a1, int a2, int a3, int a4)
{
  int v4;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a1;
  v9 = 0x80000;
  v10 = 1310720;
  v11 = 0;
  v6 = 1024;
  v7 = 1024;
  v8 = 0;
  Function_2021c70(*(uint **)(a1 + 40), &v6);
  Function_2021c50(*(uint **)(v4 + 40), &v9);
  Function_2021d6c(*(uint *)(v4 + 40), 1u);
  Function_2021ce4(*(uint *)(v4 + 40), 0);
  Function_2021cc8(*(uint *)(v4 + 40), 0);
  ++*(uint *)(v4 + 8);
  return 0;
}

//----- (021D6908) --------------------------------------------------------
int __fastcall Function_21d6908(uint *a1)
{
  uint *v1;
  int v2;
  int v4;
  int v5;
  char v6;
  int v7;

  v1 = a1;
  Function_21d8560(a1[10], &v6);
  Function_21d8574(v1[10], &v4);
  v4 += 192;
  v5 += 192;
  v2 = v1[5] + 1;
  v1[5] = v2;
  if ( v2 >= 16 )
  {
    v7 = 1310720;
    v4 = 4096;
    v5 = 4096;
    v1[5] = 0;
    ++v1[2];
    Function_2005844(0x23u, 0);
  }
  Function_2021c70((uint *)v1[10], &v4);
  Function_2021c50((uint *)v1[10], (int *)&v6);
  return 0;
}

//----- (021D6968) --------------------------------------------------------
int __fastcall Function_21d6968(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  Function_2021e2c(a1[10], 4096);
  v2 = v1[5] + 1;
  v1[5] = v2;
  if ( v2 >= 9 )
  {
    v1[5] = 0;
    ++v1[2];
    v1[3] = 1;
  }
  return 0;
}

//----- (021D6994) --------------------------------------------------------
int __fastcall Function_21d6994(int a1, int a2, int a3, int a4)
{
  int v4;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a1;
  v9 = 0x80000;
  v10 = 1310720;
  v11 = 0;
  v6 = 4096;
  v7 = 4096;
  v8 = 0;
  Function_2021c70(*(uint **)(a1 + 40), &v6);
  Function_2021c50(*(uint **)(v4 + 40), &v9);
  Function_2021d6c(*(uint *)(v4 + 40), 1u);
  Function_2021ce4(*(uint *)(v4 + 40), 0);
  Function_2021cc8(*(uint *)(v4 + 40), 0);
  Function_2005748(0x6D1u);
  ++*(uint *)(v4 + 8);
  return 0;
}

//----- (021D69FC) --------------------------------------------------------
int __fastcall Function_21d69fc(uint *a1)
{
  uint *v1;
  int v2;
  int v4;
  int v5;
  char v6;
  int v7;

  v1 = a1;
  Function_21d8560(a1[10], &v6);
  Function_21d8574(v1[10], &v4);
  v4 -= 384;
  v5 -= 384;
  v2 = v1[5] + 1;
  v1[5] = v2;
  if ( v2 >= 8 )
  {
    v7 = 1900544;
    v4 = 4096;
    v5 = 4096;
    v1[5] = 0;
    ++v1[2];
    v1[3] = 1;
  }
  Function_2021c70((uint *)v1[10], &v4);
  Function_2021c50((uint *)v1[10], (int *)&v6);
  return 0;
}

//----- (021D6A60) --------------------------------------------------------
int __fastcall Function_21d6a60(int a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v14 = a4;
  v4 = (uint *)a1;
  v11 = 0x80000;
  v12 = 1310720;
  v13 = 0;
  v8 = 4096;
  v9 = 4096;
  v10 = 0;
  Function_2021c70(*(uint **)(a1 + 40), &v8);
  Function_2021c50((uint *)v4[10], &v11);
  Function_2021d6c(v4[10], 0);
  Function_2021cc8(v4[10], 0);
  Function_2021ce4(v4[10], 0);
  Function_2021de0(v4[10], v5, v6);
  v4[3] = 1;
  ++v4[2];
  return 0;
}

//----- (021D6AC8) --------------------------------------------------------
int __fastcall Function_21d6ac8(int a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v14 = a4;
  v4 = (uint *)a1;
  v11 = 0x80000;
  v12 = 1310720;
  v13 = 0;
  v8 = 4096;
  v9 = 4096;
  v10 = 0;
  Function_2021c70(*(uint **)(a1 + 40), &v8);
  Function_2021c50((uint *)v4[10], &v11);
  Function_2021cc8(v4[10], 1);
  Function_2021ce4(v4[10], 2048);
  if ( Function_2021e24(v4[10]) != 2 )
  {
    Function_2021d6c(v4[10], 2u);
    Function_2021de0(v4[10], v5, v6);
  }
  v4[3] = 1;
  ++v4[2];
  return 0;
}

//----- (021D6B3C) --------------------------------------------------------
int __fastcall Function_21d6b3c(int a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v14 = a4;
  v4 = (uint *)a1;
  v11 = 0x80000;
  v12 = 1310720;
  v13 = 0;
  v8 = 4096;
  v9 = 4096;
  v10 = 0;
  Function_2021c70(*(uint **)(a1 + 40), &v8);
  Function_2021c50((uint *)v4[10], &v11);
  Function_2021d6c(v4[10], 5u);
  Function_2021cc8(v4[10], 1);
  Function_2021ce4(v4[10], 4096);
  Function_2021de0(v4[10], v5, v6);
  v4[3] = 1;
  ++v4[2];
  return 0;
}

//----- (021D6BA4) --------------------------------------------------------
int __fastcall Function_21d6ba4(int a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v14 = a4;
  v4 = (uint *)a1;
  v11 = 0x80000;
  v12 = 1310720;
  v13 = 0;
  v8 = 4096;
  v9 = 4096;
  v10 = 0;
  Function_2021c70(*(uint **)(a1 + 40), &v8);
  Function_2021c50((uint *)v4[10], &v11);
  Function_2021d6c(v4[10], 4u);
  Function_2021cc8(v4[10], 1);
  Function_2021ce4(v4[10], 4096);
  Function_2021de0(v4[10], v5, v6);
  v4[3] = 1;
  ++v4[2];
  return 0;
}

//----- (021D6C0C) --------------------------------------------------------
int __fastcall Function_21d6c0c(int a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v14 = a4;
  v4 = (uint *)a1;
  v11 = 0x80000;
  v12 = 1310720;
  v13 = 0;
  v8 = 4096;
  v9 = 4096;
  v10 = 0;
  Function_2021c70(*(uint **)(a1 + 40), &v8);
  Function_2021c50((uint *)v4[10], &v11);
  Function_2021d6c(v4[10], 3u);
  Function_2021cc8(v4[10], 1);
  Function_2021ce4(v4[10], 4096);
  Function_2021de0(v4[10], v5, v6);
  v4[3] = 1;
  ++v4[2];
  return 0;
}

//----- (021D6C74) --------------------------------------------------------
int __fastcall Function_21d6c74(int a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int result;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v14 = a4;
  v4 = (uint *)a1;
  v11 = 0x80000;
  v12 = 1310720;
  v13 = 0;
  v8 = 4096;
  v9 = 4096;
  v10 = 0;
  Function_2021c70(*(uint **)(a1 + 40), &v8);
  Function_2021c50((uint *)v4[10], &v11);
  Function_2021cc8(v4[10], 0);
  Function_2021ce4(v4[10], 4096);
  Function_2021d6c(v4[10], 5u);
  Function_2021de0(v4[10], v5, v6);
  result = 0;
  v4[5] = 0;
  v4[3] = 1;
  ++v4[2];
  return result;
}

//----- (021D6CE0) --------------------------------------------------------
int __fastcall Function_21d6ce0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  Function_2021e2c(*(uint *)(a1 + 40), 4096);
  if ( !Function_2021fd0(*(uint *)(v1 + 40)) )
  {
    v4 = *(uint *)(v1 + 20) + 1;
    *(uint *)(v1 + 20) = v4;
    if ( v4 >= 8 )
    {
      *(uint *)(v1 + 20) = 0;
      Function_2021de0(*(uint *)(v1 + 40), v2, v3);
    }
  }
  return 0;
}

//----- (021D6D10) --------------------------------------------------------
int __fastcall Function_21d6d10(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;

  v2 = a2;
  v3 = a1;
  v4 = *(uint *)(a2 + 44);
  Function_21d814c(*(uint *)(v4 + 1104), 5);
  Function_21d8220(*(uint *)(v4 + 1104), 5);
  *(uint *)(v2 + 16) = 1;
  return Call_RemoveTaskFromTaskList(v3);
}

//----- (021D6D3C) --------------------------------------------------------
int __fastcall Function_21d6d3c(int *a1, int a2)
{
  int v2;
  int v3;
  int *v4;
  int result;

  v2 = a2;
  v3 = *(uint *)(a2 + 44);
  v4 = a1;
  *(uint *)(v2 + 16) = 1;
  result = *(uint *)(v2 + 16);
  if ( result )
  {
    Function_21d8254(*(uint *)(v3 + 1104), 5);
    *(uint *)(v2 + 16) = 2;
    result = Call_RemoveTaskFromTaskList(v4);
  }
  return result;
}

//----- (021D6D68) --------------------------------------------------------
uint *__fastcall Function_21d6d68(int a1)
{
  int v1;
  int v2;
  uint *result;

  v1 = a1;
  v2 = *(uint *)(a1 + 44);
  Function_21d80e4(*(uint *)(v2 + 1104), 2, *(uint *)(v2 + 1080), 56, 5);
  Function_21d81b4(*(uint *)(v2 + 1104), 2, *(uint *)(v2 + 1080), 59, 5);
  Function_21d8288(*(uint *)(v2 + 1104), *(uint *)(v2 + 1080), 57, 5);
  Function_21d82f0(*(uint *)(v2 + 1104), *(uint *)(v2 + 1080), 58, 5);
  if ( !AddTaskToTaskList2((int)Function_21d6d10, v1, 0x101u) )
    ErrorHandler();
  result = AddTaskToTaskList3((int)Function_21d6d3c, v1, 0x101u);
  if ( !result )
    result = (uint *)ErrorHandler();
  return result;
}

//----- (021D6DF0) --------------------------------------------------------
int *__fastcall Function_21d6df0(int a1)
{
  int v2;
  int v3;
  int v4;

  v2 = 0;
  v3 = 0;
  v4 = 0;
  return Function_2071330(*(uint *)(a1 + 1100), dword_21D9178, &v2, 0, a1, 0x88u);
}

//----- (021D6E1C) --------------------------------------------------------
int __fastcall Function_21d6e1c(int a1)
{
  return *(uint *)(Function_2071598(a1) + 4);
}

//----- (021D6E28) --------------------------------------------------------
int __fastcall Function_21d6e28(int a1, int a2)
{
  int v2;

  v2 = a2;
  *(uint *)(a2 + 44) = Function_20715bc(a1);
  Function_21d6d68(v2);
  return 1;
}

//----- (021D6E3C) --------------------------------------------------------
int __fastcall Function_21d6e3c(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  result = *(uint *)(a2 + 52);
  if ( result )
  {
    Function_21d8358(*(uint *)(*(uint *)(a2 + 44) + 1104));
    Function_21d8544(v2 + 48);
    result = *(uint *)(v2 + 64);
    if ( result )
      result = Function_21d8544(v2 + 60);
  }
  return result;
}

//----- (021D6E78) --------------------------------------------------------
int __fastcall Function_21d6e78(uint *a1, int a2, int a3, int a4, int a5, uint *a6, int a7)
{
  int v7;
  uint *v8;
  int v9;
  int v10;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v16 = a4;
  v7 = a2;
  v8 = a1;
  v9 = a3;
  v10 = a4;
  Function_20715e4(a1, &v14);
  v14 += v10;
  v15 += a5;
  Function_20715d4(v8, &v14);
  if ( a7 )
    v12 = v7 - v14;
  else
    v12 = v7 + v14;
  v13 = v9 - v15;
  return Function_2021c50(a6, &v12);
}

//----- (021D6EC8) --------------------------------------------------------
uint *__fastcall Function_21d6ec8(uint *result, uint *a2)
{
  uint *v2;
  uint v3;
  uint *v4;
  int v5;
  uint v6;
  uint v7;
  uint v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v2 = a2;
  v3 = *a2;
  v4 = result;
  if ( v3 <= 0xA )
    JUMPOUT(__CS__, *((short *)&off_21D6EE4 + v3) + 35483366);
  switch ( (uchar)v3 )
  {
    case 0:
      result = (uint *)v2[4];
      if ( result == (uint *)2 )
      {
        v13 = 0;
        v14 = 1835008;
        v15 = 0;
        Function_21d84a4(*(uint *)(v2[11] + 1104), v2 + 12, &v13, 2, 1, 5, 5, 5, 5, 2, 4);
        Function_21d84a4(*(uint *)(v2[11] + 1104), v2 + 15, &v13, 2, 1, 5, 5, 5, 5, 2, 4);
        Function_2021d0c(v2[16], 1);
        ++*v2;
        goto LABEL_6;
      }
      break;
    case 1:
LABEL_6:
      v5 = 0;
      Function_20715e4(v4, &v11);
      v12 += 0x8000;
      v11 += 0x8000;
      if ( v11 >= 0x40000 )
      {
        v11 = 0x40000;
        v5 = 1;
      }
      if ( v12 >= 229376 )
      {
        v12 = 0x40000;
        ++v5;
      }
      Function_20715d4(v4, &v11);
      v9 = v11 - 0x20000;
      v10 = 1720320 - v12;
      Function_2021c50((uint *)v2[13], &v9);
      v9 = 1179648 - v11;
      v10 = 1720320 - v12;
      result = (uint *)Function_2021c50((uint *)v2[16], &v9);
      if ( v5 == 2 )
      {
        result = (uint *)(*v2 + 1);
        *v2 = (uint)result;
      }
      break;
    case 2:
      result = (uint *)(v2[2] + 1);
      v2[2] = (uint)result;
      if ( (uint)result >= 8 )
      {
        v2[2] = 0;
        ++*v2;
        goto LABEL_14;
      }
      break;
    case 3:
LABEL_14:
      Function_21d6e78(v4, -131072, 1720320, -8192, -16384, (uint *)v2[13], 0);
      result = (uint *)(v2[2] + 1);
      v2[2] = (uint)result;
      if ( (uint)result >= 4 )
      {
        v2[2] = 0;
        result = (uint *)(*v2 + 1);
        *v2 = (uint)result;
      }
      break;
    case 4:
      Function_21d6e78(result, -131072, 1720320, 0x2000, 0x4000, (uint *)v2[13], 0);
      result = (uint *)(v2[2] + 1);
      v2[2] = (uint)result;
      if ( (uint)result >= 4 )
      {
        v2[2] = 0;
        result = (uint *)(*v2 + 1);
        *v2 = (uint)result;
      }
      break;
    case 5:
      Function_21d6e78(result, 1179648, 1720320, -8192, -16384, (uint *)v2[16], 1);
      result = (uint *)(v2[2] + 1);
      v2[2] = (uint)result;
      if ( (uint)result >= 4 )
      {
        v2[2] = 0;
        result = (uint *)(*v2 + 1);
        *v2 = (uint)result;
      }
      break;
    case 6:
      Function_21d6e78(result, 1179648, 1720320, 0x2000, 0x4000, (uint *)v2[16], 1);
      result = (uint *)(v2[2] + 1);
      v2[2] = (uint)result;
      if ( (uint)result >= 4 )
      {
        v2[2] = 0;
        v6 = v2[3] + 1;
        v2[3] = v6;
        if ( v6 >= 2 )
        {
          v2[3] = 0;
          result = (uint *)(*v2 + 1);
          *v2 = (uint)result;
        }
        else
        {
          result = (uint *)3;
          *v2 = 3;
        }
      }
      break;
    case 7:
      result = (uint *)(v2[2] + 1);
      v2[2] = (uint)result;
      if ( (uint)result >= 8 )
      {
        v2[2] = 0;
        ++*v2;
        goto LABEL_27;
      }
      break;
    case 8:
LABEL_27:
      Function_21d6e78(v4, -131072, 1720320, -8192, -16384, (uint *)v2[13], 0);
      Function_21d6e78(v4, 1179648, 1720320, 0, 0, (uint *)v2[16], 1);
      result = (uint *)(v2[2] + 1);
      v2[2] = (uint)result;
      if ( (uint)result >= 4 )
      {
        v2[2] = 0;
        result = (uint *)(*v2 + 1);
        *v2 = (uint)result;
      }
      break;
    case 9:
      Function_21d6e78(result, -131072, 1720320, 0x2000, 0x4000, (uint *)v2[13], 0);
      Function_21d6e78(v4, 1179648, 1720320, 0, 0, (uint *)v2[16], 1);
      result = (uint *)(v2[2] + 1);
      v2[2] = (uint)result;
      if ( (uint)result >= 4 )
      {
        v2[2] = 0;
        v7 = v2[3] + 1;
        v2[3] = v7;
        if ( v7 >= 2 )
        {
          v2[3] = 0;
          result = (uint *)(*v2 + 1);
          *v2 = (uint)result;
        }
        else
        {
          result = (uint *)8;
          *v2 = 8;
        }
      }
      break;
    case 0xA:
      Function_21d6e78(result, -131072, 1720320, -32768, -32768, (uint *)v2[13], 0);
      Function_21d6e78(v4, 1179648, 1720320, 0, 0, (uint *)v2[16], 1);
      v8 = v2[2] + 1;
      v2[2] = v8;
      if ( v8 >= 4 )
      {
        Function_21d8544(v2 + 12);
        Function_21d8544(v2 + 15);
        Function_21d8358(*(uint *)(v2[11] + 1104));
      }
      ++*v2;
      result = (uint *)1;
      v2[1] = 1;
      break;
    default:
      return result;
  }
  return result;
}

//----- (021D7224) --------------------------------------------------------
void Function_21d7224()
{
  ;
}

//----- (021D7228) --------------------------------------------------------
int *__fastcall Function_21d7228(int a1)
{
  int v2;
  int v3;
  int v4;

  v2 = 98304;
  v3 = 819200;
  v4 = 0;
  return Function_2071330(*(uint *)(a1 + 1100), dword_21D918C, &v2, 0, a1, 0x8Eu);
}

//----- (021D7260) --------------------------------------------------------
int __fastcall Function_21d7260(int a1, int *a2, int a3, int a4)
{
  uint *v4;
  uint *v5;
  char v7;
  int v8;

  v8 = a4;
  v4 = (uint *)a1;
  v5 = (uint *)a2;
  *a2 = Function_20715bc(a1);
  Function_20715e4(v4, &v7);
  Function_21d84a4(*(uint *)(*v5 + 1104), v5 + 1, &v7, 2, 0, 6, 6, 6, 6, 2, 3);
  Function_2021cc8(v5[2], 1);
  return 1;
}

//----- (021D72AC) --------------------------------------------------------
int __fastcall Function_21d72ac(int a1, int a2)
{
  return Function_21d8544(a2 + 4);
}

//----- (021D72B8) --------------------------------------------------------
uint __fastcall Function_21d72b8(int a1, uint *a2)
{
  int v2;

  v2 = 1;
  if ( *(uint *)(*a2 + 328) == 1 )
    v2 = 0;
  return Function_2021cac(a2[2], v2);
}

//----- (021D72D4) --------------------------------------------------------
int *__fastcall Function_21d72d4(int a1)
{
  int v2;
  int v3;

  v2 = 344064;
  v3 = 1245184;
  return Function_2071330(*(uint *)(a1 + 1100), dword_21D91C8, &v2, 0, a1, 0x8Eu);
}

//----- (021D7304) --------------------------------------------------------
int __fastcall Function_21d7304(int a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  short v6;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  char v14;
  int v15;

  v15 = a4;
  v4 = (uint *)a1;
  v5 = a2;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v8 = 0x2000;
  v9 = 0x2000;
  v10 = 0;
  *(uint *)(a2 + 4) = Function_20715bc(a1);
  Function_20715e4(v4, &v14);
  Function_21d84a4(*(uint *)(*(uint *)(v5 + 4) + 1104), v5 + 8, &v14, 2, 0, 6, 6, 6, 6, 2, 3);
  Function_2021cf8(*(uint *)(v5 + 12), 2);
  Function_2021c60(*(uint **)(v5 + 12), &v11);
  Function_2021c70(*(uint **)(v5 + 12), &v8);
  v6 = Function_201d2a4(0);
  Function_2021c94(*(uint *)(v5 + 12), v6);
  Function_2021cc8(*(uint *)(v5 + 12), 1);
  return 1;
}

//----- (021D7394) --------------------------------------------------------
int __fastcall Function_21d7394(int a1, int a2)
{
  return Function_21d8544(a2 + 8);
}

//----- (021D73A0) --------------------------------------------------------
int *__fastcall Function_21d73a0(int *result, int *a2)
{
  int v2;

  v2 = *a2 + 1;
  *a2 = v2;
  if ( v2 >= 45 )
    result = Function_207136c(result);
  return result;
}

//----- (021D73B4) --------------------------------------------------------
int *__fastcall Function_21d73b4(int a1)
{
  int v2;
  int v3;
  int v4;

  v2 = 819200;
  v3 = 1540096;
  v4 = 0;
  return Function_2071330(*(uint *)(a1 + 1100), dword_21D922C, &v2, 0, a1, 0x8Eu);
}

//----- (021D73EC) --------------------------------------------------------
int __fastcall Function_21d73ec(int a1, int *a2, int a3, int a4)
{
  uint *v4;
  uint *v5;
  char v7;
  int v8;

  v8 = a4;
  v4 = (uint *)a1;
  v5 = (uint *)a2;
  *a2 = Function_20715bc(a1);
  Function_20715e4(v4, &v7);
  Function_21d84a4(*(uint *)(*v5 + 1104), v5 + 1, &v7, 2, 0, 7, 6, 7, 7, 2, 3);
  Function_2021cc8(v5[2], 1);
  return 1;
}

//----- (021D7438) --------------------------------------------------------
int __fastcall Function_21d7438(int a1, int a2)
{
  return Function_21d8544(a2 + 4);
}

//----- (021D7444) --------------------------------------------------------
uint __fastcall Function_21d7444(int a1, uint *a2)
{
  int v2;

  v2 = 1;
  if ( *(uint *)(*a2 + 328) == 1 )
    v2 = 0;
  return Function_2021cac(a2[2], v2);
}

//----- (021D7460) --------------------------------------------------------
int *__fastcall Function_21d7460(int a1)
{
  int v2;
  int v3;
  int v4;

  v4 = 0;
  v2 = 278528;
  v3 = 1114112;
  return Function_2071330(*(uint *)(a1 + 1100), dword_21D9254, &v2, 0, a1, 0x8Eu);
}

//----- (021D74A0) --------------------------------------------------------
int __fastcall Function_21d74a0(int a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  short v6;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  char v14;
  int v15;

  v15 = a4;
  v4 = (uint *)a1;
  v5 = a2;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v8 = 0x2000;
  v9 = 0x2000;
  v10 = 0;
  *(uint *)(a2 + 4) = Function_20715bc(a1);
  Function_20715e4(v4, &v14);
  Function_21d84a4(*(uint *)(*(uint *)(v5 + 4) + 1104), v5 + 8, &v14, 2, 0, 7, 6, 7, 7, 2, 3);
  Function_2021cf8(*(uint *)(v5 + 12), 2);
  Function_2021c60(*(uint **)(v5 + 12), &v11);
  Function_2021c70(*(uint **)(v5 + 12), &v8);
  v6 = Function_201d2a4(0);
  Function_2021c94(*(uint *)(v5 + 12), v6);
  Function_2021cc8(*(uint *)(v5 + 12), 1);
  return 1;
}

//----- (021D7530) --------------------------------------------------------
int __fastcall Function_21d7530(int a1, int a2)
{
  return Function_21d8544(a2 + 8);
}

//----- (021D753C) --------------------------------------------------------
int *__fastcall Function_21d753c(int *result, int *a2)
{
  int v2;

  v2 = *a2 + 1;
  *a2 = v2;
  if ( v2 >= 45 )
    result = Function_207136c(result);
  return result;
}

//----- (021D7550) --------------------------------------------------------
int *__fastcall Function_21d7550(int a1)
{
  int v2;
  int v3;
  int v4;

  v2 = 57344;
  v3 = 819200;
  v4 = 0;
  return Function_2071330(*(uint *)(a1 + 1100), dword_21D913C, &v2, 0, a1, 0x8Eu);
}

//----- (021D7588) --------------------------------------------------------
int __fastcall Function_21d7588(int a1, int *a2, int a3, int a4)
{
  uint *v4;
  int *v5;
  int v6;
  int v7;
  int *v8;
  char v10;
  int v11;

  v11 = a4;
  v4 = (uint *)a1;
  v5 = a2;
  *a2 = Function_20715bc(a1);
  Function_20715e4(v4, &v10);
  v6 = 0;
  v7 = (int)(v5 + 1);
  v8 = v5;
  do
  {
    Function_21d84a4(*(uint *)(*v5 + 1104), v7, &v10, 2, 0, 8, 6, 8, 8, 2, 3);
    Function_2021cac(v8[2], 0);
    Function_2021cc8(v8[2], 1);
    ++v6;
    v7 += 12;
    v8 += 3;
  }
  while ( v6 < 2 );
  return 1;
}

//----- (021D75F0) --------------------------------------------------------
int __fastcall Function_21d75f0(int a1, int a2)
{
  int v2;

  v2 = a2;
  Function_21d8544(a2 + 4);
  return Function_21d8544(v2 + 16);
}

//----- (021D7604) --------------------------------------------------------
uint __fastcall Function_21d7604(int a1, uint *a2)
{
  uint *v2;
  int v3;
  uint result;
  int v5;
  uint v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;

  v2 = a2;
  v3 = *a2 + 316;
  Function_2021cac(a2[2], 0);
  Function_2021cac(v2[5], 0);
  result = *(uint *)(v3 + 12);
  if ( result != 1 )
  {
    v15 = 212992;
    v16 = 819200;
    v5 = 0;
    v17 = 0;
    v6 = *(uint *)(*v2 + 16);
    if ( v6 > 0x63 )
      v6 = 99;
    u32_div_f(v6, 100);
    v8 = u32_div_f(v7, 10);
    if ( v8 )
    {
      Function_2021c50((uint *)v2[2], &v15);
      Function_2021d6c(v2[2], v8);
      Function_2021de0(v2[2], v9, v10);
      Function_2021cac(v2[2], 1);
      v15 += 0x8000;
      v5 = 1;
    }
    v11 = (int)(v2 + 2);
    Function_2021c50(*(uint **)(v11 + 12 * v5), &v15);
    u32_div_f(v6, 10);
    Function_2021d6c(*(uint *)(v11 + 12 * v5), v12);
    Function_2021de0(*(uint *)(v11 + 12 * v5), v13, v14);
    result = Function_2021cac(*(uint *)(v11 + 12 * v5), 1);
  }
  return result;
}

//----- (021D76B4) --------------------------------------------------------
int *__fastcall Function_21d76b4(int a1)
{
  int v2;
  int v3;
  int v4;

  v2 = 57344;
  v3 = 819200;
  v4 = 0;
  return Function_2071330(*(uint *)(a1 + 1100), dword_21D91A0, &v2, 0, a1, 0x8Eu);
}

//----- (021D76EC) --------------------------------------------------------
int __fastcall Function_21d76ec(int a1, int *a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int v8;
  int v9;
  int v10;
  int v11;

  v11 = a4;
  v4 = a2;
  v8 = 901120;
  v9 = 1540096;
  v10 = 0;
  *a2 = Function_20715bc(a1);
  v5 = 0;
  v6 = (int)(v4 + 1);
  do
  {
    Function_21d84a4(*(uint *)(*v4 + 1104), v6, &v8, 2, 0, 8, 6, 8, 8, 2, 3);
    ++v5;
    v6 += 12;
    v8 += 0x8000;
  }
  while ( v5 < 5 );
  return 1;
}

//----- (021D7754) --------------------------------------------------------
int __fastcall Function_21d7754(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = 0;
  v3 = a2 + 4;
  do
  {
    result = Function_21d8544(v3);
    ++v2;
    v3 += 12;
  }
  while ( v2 < 5 );
  return result;
}

//----- (021D776C) --------------------------------------------------------
int __fastcall Function_21d776c(int a1, int *a2)
{
  int *v2;
  int v3;
  int v4;
  int *v5;
  int result;
  int v7;
  int v8;
  uint v9;
  uint v10;
  int v11;
  int v12;

  v2 = a2;
  v3 = 1;
  if ( *(uint *)(*a2 + 328) == 1 )
    v3 = 0;
  v4 = 0;
  v5 = a2;
  do
  {
    result = Function_2021cac(v5[2], v3);
    ++v4;
    v5 += 3;
  }
  while ( v4 < 5 );
  if ( v3 )
  {
    v7 = *(uint *)(*v2 + 20);
    if ( v7 > 50000 )
      v7 = 50000;
    v8 = 10000;
    do
    {
      s32_div_f(v7, 10 * v8);
      v10 = s32_div_f(v9, v8);
      Function_2021d6c(v2[2], v10);
      Function_2021de0(v2[2], v11, v12);
      result = s32_div_f(v8, 10);
      v8 = result;
      v2 += 3;
    }
    while ( result >= 1 );
  }
  return result;
}

//----- (021D77E4) --------------------------------------------------------
int *__fastcall Function_21d77e4(int a1, int a2)
{
  int v3;
  int v4;
  int v5;

  v3 = 0;
  v4 = 0;
  v5 = 0;
  return Function_2071330(*(uint *)(a1 + 1100), dword_21D9240, &v3, a2, a1, 0x8Eu);
}

//----- (021D7810) --------------------------------------------------------
int __fastcall Function_21d7810(int a1, int *a2)
{
  int v2;
  int *v3;
  int v4;
  uint v5;
  uint v6;
  uint v7;
  uint v8;
  uint v9;
  int v10;
  int *v11;
  short v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;

  v2 = a1;
  v3 = a2;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v19 = 0x2000;
  v20 = 0x2000;
  v21 = 0;
  v4 = Function_20715bc(a1);
  *v3 = Function_20715b4(v2);
  v3[5] = v4;
  if ( *v3 )
  {
    v7 = *(uint *)(v4 + 20);
    v3[1] = v7;
    if ( v7 > 0x1869F )
      v3[1] = 99999;
    v8 = v3[1];
    if ( v8 < 0x2710 )
    {
      if ( v8 < 0x3E8 )
      {
        if ( v8 < 0x64 )
        {
          if ( v8 < 0xA )
            v3[2] = 1;
          else
            v3[2] = 2;
        }
        else
        {
          v3[2] = 3;
        }
      }
      else
      {
        v3[2] = 4;
      }
    }
    else
    {
      v3[2] = 5;
    }
    v25 = 819200;
    v26 = 1114112;
  }
  else
  {
    v5 = *(uint *)(v4 + 28);
    v3[1] = v5;
    if ( v5 > 0x3E7 )
      v3[1] = 999;
    v6 = v3[1];
    if ( v6 < 0x64 )
    {
      if ( v6 < 0xA )
        v3[2] = 1;
      else
        v3[2] = 2;
    }
    else
    {
      v3[2] = 3;
    }
    v25 = 819200;
    v26 = 1245184;
  }
  v9 = 0;
  v10 = 1;
  if ( v3[2] )
  {
    v18 = (int)(v3 + 6);
    v11 = v3;
    do
    {
      Function_21d84a4(*(uint *)(v3[5] + 1104), v18, &v25, 2, 0, 8, 6, 8, 8, 2, 3);
      Function_2021cf8(v11[7], 2);
      Function_2021c60((uint *)v11[7], &v22);
      Function_2021c70((uint *)v11[7], &v19);
      v12 = Function_201d2a4(0);
      Function_2021c94(v11[7], v12);
      u32_div_f(v3[1], 10 * v10);
      v14 = u32_div_f(v13, v10);
      Function_2021d6c(v11[7], v14);
      Function_2021de0(v11[7], v15, v16);
      v18 += 12;
      v10 *= 10;
      v25 -= 0x10000;
      ++v9;
      v11 += 3;
    }
    while ( v9 < v3[2] );
  }
  v3[4] = v9;
  return 1;
}

//----- (021D7984) --------------------------------------------------------
int __fastcall Function_21d7984(int a1, int a2)
{
  int v2;
  int result;
  int v4;
  int v5;

  v2 = a2;
  result = *(uint *)(a2 + 16);
  v4 = 0;
  if ( result > 0 )
  {
    v5 = a2 + 24;
    do
    {
      Function_21d8544(v5);
      result = *(uint *)(v2 + 16);
      ++v4;
      v5 += 12;
    }
    while ( v4 < result );
  }
  return result;
}

//----- (021D79A8) --------------------------------------------------------
int *__fastcall Function_21d79a8(int *result, int a2)
{
  int v2;

  v2 = *(uint *)(a2 + 12) + 1;
  *(uint *)(a2 + 12) = v2;
  if ( v2 >= 45 )
    result = Function_207136c(result);
  return result;
}

//----- (021D79BC) --------------------------------------------------------
int *__fastcall Function_21d79bc(int a1, uint a2)
{
  int v2;
  int v4;
  int v5;
  int v6;

  v2 = a2;
  v4 = 0x80000;
  v5 = 917504;
  v6 = 0;
  if ( a2 > 0x3E7 )
    v2 = 999;
  return Function_2071330(*(uint *)(a1 + 1100), dword_21D9268, &v4, v2, a1, 0x8Eu);
}

//----- (021D7A00) --------------------------------------------------------
int __fastcall Function_21d7a00(int a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v12;
  uint v13;
  int v14;
  int v15;

  v15 = a4;
  v4 = (uint *)a1;
  v5 = a2;
  *(uint *)(a2 + 8) = Function_20715bc(a1);
  v13 = Function_20715b4((int)v4);
  Function_20715e4(v4, &v14);
  if ( v13 < 0x64 )
  {
    if ( v13 < 0xA )
    {
      v6 = 1;
      *(uint *)(v5 + 4) = 1;
    }
    else
    {
      *(uint *)(v5 + 4) = 2;
      v6 = 10;
      v14 -= 0x8000;
    }
  }
  else
  {
    *(uint *)(v5 + 4) = 3;
    v6 = 100;
    v14 -= 0x10000;
  }
  v7 = 0;
  if ( *(uint *)(v5 + 4) > 0 )
  {
    v12 = v5 + 12;
    v8 = v5;
    do
    {
      Function_21d84a4(*(uint *)(*(uint *)(v5 + 8) + 1104), v12, &v14, 2, 0, 9, 7, 9, 9, 2, 3);
      u32_div_f(v13, 10 * v6);
      v10 = u32_div_f(v9, v6);
      Function_2021d6c(*(uint *)(v8 + 16), v10);
      v12 += 12;
      v14 += 0x10000;
      v8 += 12;
      ++v7;
      v6 = u32_div_f(v6, 10);
    }
    while ( v7 < *(uint *)(v5 + 4) );
  }
  return 1;
}

//----- (021D7AD0) --------------------------------------------------------
int __fastcall Function_21d7ad0(int a1, int a2)
{
  int v2;
  int result;
  int v4;
  int v5;

  v2 = a2;
  result = *(uint *)(a2 + 4);
  v4 = 0;
  if ( result > 0 )
  {
    v5 = a2 + 12;
    do
    {
      Function_21d8544(v5);
      result = *(uint *)(v2 + 4);
      ++v4;
      v5 += 12;
    }
    while ( v4 < result );
  }
  return result;
}

//----- (021D7AF4) --------------------------------------------------------
int *__fastcall Function_21d7af4(int *result, int *a2)
{
  int v2;

  v2 = *a2 + 1;
  *a2 = v2;
  if ( v2 >= 60 )
    result = Function_207136c(result);
  return result;
}

//----- (021D7B08) --------------------------------------------------------
int *__fastcall Function_21d7b08(int a1)
{
  int v2;
  int v3;
  int v4;

  v2 = 0;
  v3 = 0;
  v4 = 0;
  return Function_2071330(*(uint *)(a1 + 1100), dword_21D91B4, &v2, 0, a1, 0x8Cu);
}

//----- (021D7B34) --------------------------------------------------------
int __fastcall Function_21d7b34(int a1, uint *a2)
{
  uint *v2;
  int v3;
  uint v4;

  v2 = a2;
  v3 = Function_20715bc(a1);
  v2[17] = v3;
  v2[6] = *(uint *)(v3 + 68);
  v4 = *(uint *)(v2[17] + 72);
  do
  {
    if ( v4 & 1 )
      break;
    v4 >>= 1;
    ++v2[7];
  }
  while ( v2[7] < 5 );
  if ( v2[7] >= 5 )
    ErrorHandler();
  Function_21d7d94(v2);
  return 1;
}

//----- (021D7B74) --------------------------------------------------------
int __fastcall Function_21d7b74(int a1, int a2)
{
  int v2;
  int result;
  int v4;
  int v5;
  int v6;

  v2 = a2;
  result = *(uint *)(a2 + 20);
  if ( !result )
  {
    v4 = 0;
    v5 = a2;
    v6 = a2 + 32;
    do
    {
      if ( *(uint *)(v5 + 36) )
        Function_21d8544(v6);
      ++v4;
      v5 += 12;
      v6 += 12;
    }
    while ( v4 < 3 );
    result = Function_21d8358(*(uint *)(*(uint *)(v2 + 68) + 1104));
  }
  return result;
}

//----- (021D7BB4) --------------------------------------------------------
int __fastcall Function_21d7bb4(int a1, int *a2, int a3, int a4)
{
  int *v4;
  int result;
  int v6;
  int v7;
  int *v8;
  int *v9;
  int v10;
  int v11;
  int *v12;
  int v13;
  BOOL v14;
  int v15;
  int *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;

  v24 = a4;
  v4 = a2;
  result = *a2;
  switch ( (uchar)*a2 )
  {
    case 0u:
      result = a2[2];
      if ( result == 2 )
      {
        v6 = 0;
        v20 = 0;
        v7 = (int)(a2 + 8);
        v8 = a2;
        do
        {
          v9 = &dword_21D9424[9 * v4[7]];
          v10 = v9[v6 + 1];
          v21 = v9[v6];
          v22 = v10;
          v23 = v9[v6 + 2];
          Function_21d84a4(*(uint *)(v4[17] + 1104), v7, &v21, 3, 0, 10, 0, 10, 10, 1, 0);
          Function_2021cc8(v8[9], 1);
          v6 += 3;
          v7 += 12;
          v8 += 3;
          ++v20;
        }
        while ( v20 < 3 );
        result = *v4 + 1;
        *v4 = result;
      }
      break;
    case 1u:
      v11 = 0;
      v19 = 0;
      v12 = a2;
      do
      {
        Function_21d8560(v12[9], &v21);
        v22 += 0x4000;
        if ( v22 < 983040 )
          v19 = 1;
        else
          v22 = 983040;
        Function_2021c50((uint *)v12[9], &v21);
        ++v11;
        v12 += 3;
      }
      while ( v11 < 3 );
      result = v19;
      if ( !v19 )
      {
        result = *v4 + 1;
        *v4 = result;
      }
      break;
    case 2u:
      result = a2[3] + 1;
      a2[3] = result;
      if ( result >= 30 )
      {
        a2[3] = 0;
        result = *a2 + 1;
        *a2 = result;
      }
      break;
    case 3u:
      v13 = a2[3] + 1;
      a2[3] = v13;
      v14 = v13 >= 12;
      v15 = 0;
      v16 = a2;
      do
      {
        Function_2021cac(v16[9], v14);
        ++v15;
        v16 += 3;
      }
      while ( v15 < 3 );
      result = v4[3];
      if ( result >= 30 )
      {
        v4[3] = 0;
        result = v4[4] + 1;
        v4[4] = result;
        if ( result >= 3 )
        {
          v4[4] = 0;
          result = *v4 + 1;
          *v4 = result;
        }
      }
      break;
    case 4u:
      result = a2[3] + 1;
      a2[3] = result;
      if ( result >= 30 )
      {
        a2[3] = 0;
        result = *a2 + 1;
        *a2 = result;
      }
      break;
    case 5u:
      v17 = 0;
      v18 = (int)(a2 + 8);
      do
      {
        Function_21d8544(v18);
        ++v17;
        v18 += 12;
      }
      while ( v17 < 3 );
      Function_21d8358(*(uint *)(v4[17] + 1104));
      ++*v4;
      result = 1;
      v4[1] = 1;
      v4[5] = 1;
      break;
    default:
      return result;
  }
  return result;
}

//----- (021D7D4C) --------------------------------------------------------
int __fastcall Function_21d7d4c(int *a1, int a2)
{
  int v2;
  int *v3;

  v2 = a2;
  v3 = a1;
  Function_21d814c(*(uint *)(*(uint *)(a2 + 68) + 1104), 10);
  *(uint *)(v2 + 8) = 1;
  return Call_RemoveTaskFromTaskList(v3);
}

//----- (021D7D6C) --------------------------------------------------------
int __fastcall Function_21d7d6c(int *a1, int a2)
{
  int v2;
  int *v3;
  int result;
  int v5;

  v2 = a2;
  v3 = a1;
  result = *(uint *)(a2 + 8);
  v5 = *(uint *)(a2 + 68);
  if ( result == 1 )
  {
    Function_21d8180(*(uint *)(v5 + 1104), 10);
    *(uint *)(v2 + 8) = 2;
    result = Call_RemoveTaskFromTaskList(v3);
  }
  return result;
}

//----- (021D7D94) --------------------------------------------------------
uint *__fastcall Function_21d7d94(int a1)
{
  int v1;
  int v2;
  uint *result;

  v1 = a1;
  v2 = *(uint *)(a1 + 68);
  if ( *(uint *)(a1 + 24) )
  {
    Function_21d80e4(*(uint *)(v2 + 1104), 3, *(uint *)(v2 + 1080), 17, 10);
    Function_21d8288(*(uint *)(v2 + 1104), *(uint *)(v2 + 1080), 18, 10);
    Function_21d82f0(*(uint *)(v2 + 1104), *(uint *)(v2 + 1080), 19, 10);
  }
  else
  {
    Function_21d80e4(*(uint *)(v2 + 1104), 3, *(uint *)(v2 + 1080), 14, 10);
    Function_21d8288(*(uint *)(v2 + 1104), *(uint *)(v2 + 1080), 15, 10);
    Function_21d82f0(*(uint *)(v2 + 1104), *(uint *)(v2 + 1080), 16, 10);
  }
  if ( !AddTaskToTaskList2((int)Function_21d7d4c, v1, 0x101u) )
    ErrorHandler();
  result = AddTaskToTaskList3((int)Function_21d7d6c, v1, 0x101u);
  if ( !result )
    result = (uint *)ErrorHandler();
  return result;
}

//----- (021D7E48) --------------------------------------------------------
int __fastcall Function_21d7e48(uint a1, int a2, int a3, uint a4, uint a5, uint a6, uint a7, short a8, short a9, short a10, short a11)
{
  uint v11;
  int v12;
  int v13;
  uint v14;
  int v15;
  uint v16;
  int v17;
  uint v18;
  int v19;
  uint v20;
  int v21;
  uint v23;
  int v24;
  int v25;

  v24 = a2;
  v23 = a1;
  v25 = a3;
  v11 = a4;
  v13 = malloc(a1, 348);
  if ( !v13 )
    ErrorHandler();
  *(uint *)v13 = v23;
  *(uchar *)(v13 + 4) = v11;
  *(uchar *)(v13 + 5) = a5;
  *(uchar *)(v13 + 6) = a6;
  *(uchar *)(v13 + 7) = a7;
  *(uchar *)(v13 + 8) = a8;
  *(uchar *)(v13 + 9) = a9;
  *(uchar *)(v13 + 10) = a10;
  *(uchar *)(v13 + 11) = a11;
  *(uint *)(v13 + 12) = Function_20095c4(v24, v13 + 16, v23, v12);
  *(uint *)(v13 + 312) = Function_201dcc8(v25, v23);
  Function_201dbec(v25, v23);
  *(uint *)(v13 + 316) = Function_2009714(v11, 0, v23);
  *(uint *)(v13 + 320) = Function_2009714(a5, (int *)1, v23);
  *(uint *)(v13 + 324) = Function_2009714(a6, (int *)2, v23);
  *(uint *)(v13 + 328) = Function_2009714(a7, (int *)3, v23);
  *(uint *)(v13 + 332) = malloc(v23, 8 * v11);
  *(uint *)(v13 + 336) = malloc(v23, 8 * a5);
  *(uint *)(v13 + 340) = malloc(v23, 8 * a6);
  *(uint *)(v13 + 344) = malloc(v23, 8 * a7);
  v14 = 0;
  if ( v11 )
  {
    v15 = 0;
    do
    {
      ++v14;
      *(ushort *)(*(uint *)(v13 + 332) + v15) = a8;
      v15 += 8;
    }
    while ( v14 < v11 );
  }
  v16 = 0;
  if ( a5 )
  {
    v17 = 0;
    do
    {
      ++v16;
      *(ushort *)(*(uint *)(v13 + 336) + v17) = a9;
      v17 += 8;
    }
    while ( v16 < a5 );
  }
  v18 = 0;
  if ( a6 )
  {
    v19 = 0;
    do
    {
      ++v18;
      *(ushort *)(*(uint *)(v13 + 340) + v19) = a10;
      v19 += 8;
    }
    while ( v18 < a6 );
  }
  v20 = 0;
  if ( a7 )
  {
    v21 = 0;
    do
    {
      ++v20;
      *(ushort *)(*(uint *)(v13 + 344) + v21) = a11;
      v21 += 8;
    }
    while ( v20 < a7 );
  }
  return v13;
}

//----- (021D7FB4) --------------------------------------------------------
uint __fastcall Function_21d7fb4(int a1)
{
  int v1;
  uint v2;
  int v3;
  int **v4;
  uint v5;
  int v6;
  int **v7;
  uint v8;
  int v9;
  int **v10;
  uint v11;
  int v12;
  int **v13;

  v1 = a1;
  v2 = 0;
  if ( *(uchar *)(a1 + 4) )
  {
    v3 = 0;
    do
    {
      v4 = (int **)(*(uint *)(v1 + 332) + v3);
      if ( *(uchar *)(v1 + 8) != *(ushort *)v4 )
        Function_200a4e4(v4[1]);
      ++v2;
      v3 += 8;
    }
    while ( v2 < *(uchar *)(v1 + 4) );
  }
  v5 = 0;
  if ( *(uchar *)(v1 + 5) )
  {
    v6 = 0;
    do
    {
      v7 = (int **)(*(uint *)(v1 + 336) + v6);
      if ( *(uchar *)(v1 + 9) != *(ushort *)v7 )
        Function_200a6dc(v7[1]);
      ++v5;
      v6 += 8;
    }
    while ( v5 < *(uchar *)(v1 + 5) );
  }
  v8 = 0;
  if ( *(uchar *)(v1 + 6) )
  {
    v9 = 0;
    do
    {
      v10 = (int **)(*(uint *)(v1 + 340) + v9);
      if ( *(uchar *)(v1 + 10) != *(ushort *)v10 )
        Function_2009d4c(v10[1]);
      ++v8;
      v9 += 8;
    }
    while ( v8 < *(uchar *)(v1 + 6) );
  }
  v11 = 0;
  if ( *(uchar *)(v1 + 7) )
  {
    v12 = 0;
    do
    {
      v13 = (int **)(*(uint *)(v1 + 344) + v12);
      if ( *(uchar *)(v1 + 11) != *(ushort *)v13 )
        Function_2009d4c(v13[1]);
      ++v11;
      v12 += 8;
    }
    while ( v11 < *(uchar *)(v1 + 7) );
  }
  Function_2009754(*(int **)(v1 + 316));
  Function_2009754(*(int **)(v1 + 320));
  Function_2009754(*(int **)(v1 + 324));
  Function_2009754(*(int **)(v1 + 328));
  free(*(uint *)(v1 + 332));
  free(*(uint *)(v1 + 336));
  free(*(uint *)(v1 + 340));
  free(*(uint *)(v1 + 344));
  Function_201dc3c();
  Call_free4(*(uint *)(v1 + 312));
  Function_20219c0(*(uint **)(v1 + 12));
  Function_2021964(*(int **)(v1 + 12));
  return free(v1);
}

//----- (021D80D4) --------------------------------------------------------
uint __fastcall Function_21d80d4(int a1)
{
  Function_20219f8(*(uint *)(a1 + 12));
  return Function_201dce8();
}

//----- (021D80E4) --------------------------------------------------------
int *__fastcall Function_21d80e4(int a1, int a2, int a3, uint a4, int a5)
{
  int v5;
  int v6;
  uint v7;
  ushort *v8;
  int v9;
  int *result;
  int v11;

  v5 = a1;
  v6 = a2;
  v7 = 0;
  v11 = a3;
  if ( !*(uchar *)(a1 + 4) )
    return (int *)ErrorHandler();
  v8 = *(ushort **)(a1 + 332);
  while ( *(uchar *)(a1 + 8) != *v8 )
  {
    ++v7;
    v8 += 4;
    if ( v7 >= *(uchar *)(a1 + 4) )
      return (int *)ErrorHandler();
  }
  v9 = 8 * v7;
  *(ushort *)(*(uint *)(a1 + 332) + v9) = a5;
  *(ushort *)(*(uint *)(a1 + 332) + v9 + 2) = 0;
  result = Function_2009a4c(*(uint *)(a1 + 316), v11, a4, 0, a5, v6, *(uint *)a1);
  *(uint *)(*(uint *)(v5 + 332) + v9 + 4) = result;
  return result;
}

//----- (021D814C) --------------------------------------------------------
int __fastcall Function_21d814c(int a1, int a2)
{
  uint v2;
  ushort *v3;

  v2 = 0;
  if ( !*(uchar *)(a1 + 4) )
    return ErrorHandler();
  v3 = *(ushort **)(a1 + 332);
  while ( a2 != *v3 )
  {
    ++v2;
    v3 += 4;
    if ( v2 >= *(uchar *)(a1 + 4) )
      return ErrorHandler();
  }
  return Function_200a3dc(*(int **)(*(uint *)(a1 + 332) + 8 * v2 + 4));
}

//----- (021D8180) --------------------------------------------------------
int __fastcall Function_21d8180(int a1, int a2)
{
  uint v2;
  ushort *v3;

  v2 = 0;
  if ( !*(uchar *)(a1 + 4) )
    return ErrorHandler();
  v3 = *(ushort **)(a1 + 332);
  while ( a2 != *v3 )
  {
    ++v2;
    v3 += 4;
    if ( v2 >= *(uchar *)(a1 + 4) )
      return ErrorHandler();
  }
  return Function_2009d4c(*(int **)(*(uint *)(a1 + 332) + 8 * v2 + 4));
}

//----- (021D81B4) --------------------------------------------------------
int *__fastcall Function_21d81b4(int a1, int a2, int a3, uint a4, int a5)
{
  int v5;
  int v6;
  uint v7;
  ushort *v8;
  int v9;
  int *result;
  int v11;

  v5 = a1;
  v6 = a2;
  v7 = 0;
  v11 = a3;
  if ( !*(uchar *)(a1 + 4) )
    return (int *)ErrorHandler();
  v8 = *(ushort **)(a1 + 336);
  while ( *(uchar *)(a1 + 9) != *v8 )
  {
    ++v7;
    v8 += 4;
    if ( v7 >= *(uchar *)(a1 + 4) )
      return (int *)ErrorHandler();
  }
  v9 = 8 * v7;
  *(ushort *)(*(uint *)(a1 + 336) + v9) = a5;
  *(ushort *)(*(uint *)(a1 + 336) + v9 + 2) = 0;
  result = Function_2009b04(*(uint *)(a1 + 320), v11, a4, 0, a5, v6, 1, *(uint *)a1);
  *(uint *)(*(uint *)(v5 + 336) + v9 + 4) = result;
  return result;
}

//----- (021D8220) --------------------------------------------------------
int __fastcall Function_21d8220(int a1, int a2)
{
  uint v2;
  ushort *v3;

  v2 = 0;
  if ( !*(uchar *)(a1 + 5) )
    return ErrorHandler();
  v3 = *(ushort **)(a1 + 336);
  while ( a2 != *v3 )
  {
    ++v2;
    v3 += 4;
    if ( v2 >= *(uchar *)(a1 + 5) )
      return ErrorHandler();
  }
  return Function_200a640(*(int **)(*(uint *)(a1 + 336) + 8 * v2 + 4));
}

//----- (021D8254) --------------------------------------------------------
int __fastcall Function_21d8254(int a1, int a2)
{
  uint v2;
  ushort *v3;

  v2 = 0;
  if ( !*(uchar *)(a1 + 5) )
    return ErrorHandler();
  v3 = *(ushort **)(a1 + 336);
  while ( a2 != *v3 )
  {
    ++v2;
    v3 += 4;
    if ( v2 >= *(uchar *)(a1 + 5) )
      return ErrorHandler();
  }
  return Function_2009d4c(*(int **)(*(uint *)(a1 + 336) + 8 * v2 + 4));
}

//----- (021D8288) --------------------------------------------------------
int *__fastcall Function_21d8288(int a1, int a2, uint a3, int a4)
{
  int v4;
  uint v5;
  uint v6;
  ushort *v7;
  int v8;
  int *result;
  int v10;

  v4 = a1;
  v10 = a2;
  v5 = a3;
  v6 = 0;
  if ( !*(uchar *)(a1 + 4) )
    return (int *)ErrorHandler();
  v7 = *(ushort **)(a1 + 340);
  while ( *(uchar *)(a1 + 10) != *v7 )
  {
    ++v6;
    v7 += 4;
    if ( v6 >= *(uchar *)(a1 + 4) )
      return (int *)ErrorHandler();
  }
  v8 = 8 * v6;
  *(uint *)(*(uint *)(a1 + 340) + 8 * v6) = (ushort)a4;
  result = Function_2009bc4(*(uint *)(a1 + 324), v10, v5, 0, a4, 2u, *(uint *)a1);
  *(uint *)(*(uint *)(v4 + 340) + v8 + 4) = result;
  return result;
}

//----- (021D82F0) --------------------------------------------------------
int *__fastcall Function_21d82f0(int a1, int a2, uint a3, int a4)
{
  int v4;
  uint v5;
  uint v6;
  ushort *v7;
  int v8;
  int *result;
  int v10;

  v4 = a1;
  v10 = a2;
  v5 = a3;
  v6 = 0;
  if ( !*(uchar *)(a1 + 4) )
    return (int *)ErrorHandler();
  v7 = *(ushort **)(a1 + 344);
  while ( *(uchar *)(a1 + 11) != *v7 )
  {
    ++v6;
    v7 += 4;
    if ( v6 >= *(uchar *)(a1 + 4) )
      return (int *)ErrorHandler();
  }
  v8 = 8 * v6;
  *(uint *)(*(uint *)(a1 + 344) + 8 * v6) = (ushort)a4;
  result = Function_2009bc4(*(uint *)(a1 + 328), v10, v5, 0, a4, 3u, *(uint *)a1);
  *(uint *)(*(uint *)(v4 + 344) + v8 + 4) = result;
  return result;
}

//----- (021D8358) --------------------------------------------------------
int __fastcall Function_21d8358(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  uint v7;
  ushort *v8;
  int v9;
  uint v10;
  ushort *v11;
  int v12;
  uint v13;
  ushort *v14;
  int v15;
  int result;
  uint v17;
  ushort *v18;
  int v19;
  int v20;

  v5 = a1;
  v6 = a3;
  v20 = a4;
  if ( a2 != *(uchar *)(a1 + 8) )
  {
    v7 = 0;
    if ( *(uchar *)(a1 + 4) )
    {
      v8 = *(ushort **)(a1 + 332);
      while ( a2 != *v8 )
      {
        ++v7;
        v8 += 4;
        if ( v7 >= *(uchar *)(a1 + 4) )
          goto LABEL_7;
      }
      v9 = 8 * v7;
      Function_200a4e4(*(int **)(*(uint *)(a1 + 332) + 8 * v7 + 4));
      Function_2009d68(*(int **)(v5 + 316), *(uint ***)(*(uint *)(v5 + 332) + v9 + 4));
      *(ushort *)(*(uint *)(v5 + 332) + v9) = *(uchar *)(v5 + 8);
    }
  }
LABEL_7:
  if ( v6 != *(uchar *)(v5 + 9) )
  {
    v10 = 0;
    if ( *(uchar *)(v5 + 5) )
    {
      v11 = *(ushort **)(v5 + 336);
      while ( v6 != *v11 )
      {
        ++v10;
        v11 += 4;
        if ( v10 >= *(uchar *)(v5 + 5) )
          goto LABEL_13;
      }
      v12 = 8 * v10;
      Function_200a6dc(*(int **)(*(uint *)(v5 + 336) + 8 * v10 + 4));
      Function_2009d68(*(int **)(v5 + 320), *(uint ***)(*(uint *)(v5 + 336) + v12 + 4));
      *(ushort *)(*(uint *)(v5 + 336) + v12) = *(uchar *)(v5 + 9);
    }
  }
LABEL_13:
  if ( v20 != *(uchar *)(v5 + 10) )
  {
    v13 = 0;
    if ( *(uchar *)(v5 + 6) )
    {
      v14 = *(ushort **)(v5 + 340);
      while ( v20 != *v14 )
      {
        ++v13;
        v14 += 4;
        if ( v13 >= *(uchar *)(v5 + 6) )
          goto LABEL_19;
      }
      v15 = 8 * v13;
      Function_2009d4c(*(int **)(*(uint *)(v5 + 340) + v15 + 4));
      Function_2009d68(*(int **)(v5 + 324), *(uint ***)(*(uint *)(v5 + 340) + v15 + 4));
      *(ushort *)(*(uint *)(v5 + 340) + v15) = *(uchar *)(v5 + 10);
    }
  }
LABEL_19:
  result = *(uchar *)(v5 + 11);
  if ( a5 != result )
  {
    v17 = 0;
    if ( *(uchar *)(v5 + 7) )
    {
      result = *(uint *)(v5 + 344);
      v18 = *(ushort **)(v5 + 344);
      while ( a5 != *v18 )
      {
        ++v17;
        v18 += 4;
        if ( v17 >= *(uchar *)(v5 + 7) )
          return result;
      }
      v19 = 8 * v17;
      Function_2009d4c(*(int **)(result + 8 * v17 + 4));
      Function_2009d68(*(int **)(v5 + 328), *(uint ***)(*(uint *)(v5 + 344) + v19 + 4));
      result = *(uint *)(v5 + 344);
      *(ushort *)(result + v19) = *(uchar *)(v5 + 11);
    }
  }
  return result;
}

//----- (021D84A4) --------------------------------------------------------
uint __fastcall Function_21d84a4(int a1, int *a2, int *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
  int *v11;
  int *v12;
  int *v13;
  int v14;
  int v15;
  int v16;
  uint result;
  int v18;
  int *v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;

  v27 = a4;
  v11 = (int *)a1;
  v12 = a2;
  v13 = a3;
  v14 = a4;
  if ( a9 == *(uchar *)(a1 + 11) )
    a9 = -1;
  Function_20093b4(
    (int)&v26,
    a6,
    a7,
    a8,
    a9,
    -1,
    -1,
    a5,
    a10,
    *(uint *)(a1 + 316),
    *(uint *)(a1 + 320),
    *(uint *)(a1 + 324),
    *(uint *)(a1 + 328),
    0,
    0);
  if ( a5 == 1 )
  {
    v12[2] = v26;
    v15 = 1;
  }
  else
  {
    v15 = 0;
  }
  *v12 = v15;
  v18 = v11[3];
  v19 = &v26;
  v16 = v13[1];
  v20 = *v13;
  v21 = v16;
  v22 = v13[2];
  v24 = v14;
  v23 = a11;
  v25 = *v11;
  result = Function_2021b90(&v18);
  v12[1] = result;
  if ( !result )
    result = ErrorHandler();
  return result;
}

//----- (021D8544) --------------------------------------------------------
int __fastcall Function_21d8544(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  if ( *a1 == 1 )
    Function_200a5b4(a1[2]);
  Function_2021bd4(v1[1]);
  result = 0;
  v1[1] = 0;
  return result;
}

//----- (021D8560) --------------------------------------------------------
int __fastcall Function_21d8560(int a1, uint *a2)
{
  uint *v2;
  uint *v3;
  uint *v4;
  int v5;
  int result;

  v2 = a2;
  Function_2021d28();
  v5 = v3[1];
  v4 = v3 + 2;
  *v2 = *v3;
  v2[1] = v5;
  result = v3[2];
  v2[2] = *v4;
  return result;
}

//----- (021D8574) --------------------------------------------------------
int __fastcall Function_21d8574(int a1, uint *a2)
{
  uint *v2;
  uint *v3;
  uint *v4;
  int v5;
  int result;

  v2 = a2;
  v3 = (uint *)Function_2021d2c(a1);
  v5 = v3[1];
  v4 = v3 + 2;
  *v2 = *v3;
  v2[1] = v5;
  result = v3[2];
  v2[2] = *v4;
  return result;
}

