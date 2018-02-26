//----- (021D0D80) --------------------------------------------------------
int __fastcall Function_121_21d0d80(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  Function_201ff00();
  Function_201ff68();
  REG_DISPCNT &= 0xFFFFE0FF;
  REG_DISPCNT_SUB &= 0xFFFFE0FF;
  REG_DISPCNT &= 0xFFFF1FFF;
  REG_DISPCNT_SUB &= 0xFFFF1FFF;
  REG_BLDCNT = 0;
  REG_BLDCNT_SUB = 0;
  Function_2017fc8(3, 30, 327680);
  v2 = MallocSomeDataAndStorePtrInOverlayData1c(v1, 232, 0x1Eu);
  MI_CpuFill8((ushort *)v2, 0, 0xE8u);
  *(uint *)v2 = Function_21d1270(30);
  v3 = Function_2017dd4(4, 8);
  Function_21d0f94(v3);
  Function_201e3d8();
  Function_201e450(4u);
  Function_21d1074(v2);
  Function_21d0ff4(v2);
  Function_200f174(0, 1, 1, 0, 16, 1, 30);
  byte_21BF6E1 = 0;
  Function_201ffe8();
  Function_201ffd0();
  Function_2002ac8(1);
  Function_2002ae4(0);
  Function_2002b20(0);
  *(uint *)(v2 + 8) = AddTaskToTaskList1((int)Function_21d0f68, v2, 0xEA60u);
  SetMainLoopFunctionCall((int)Function_21d0f7c, v2);
  return 1;
}

//----- (021D0E7C) --------------------------------------------------------
int __fastcall Function_121_21d0e7c(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  int result;

  v2 = a2;
  v3 = LoadOverlayData1c(a1);
  switch ( (uchar)*v2 )
  {
    case 0u:
      if ( Function_200f2ac() == 1 )
        ++*v2;
      goto LABEL_11;
    case 1u:
      if ( *(uint *)(v3 + 16) == 15 )
        Function_2005748(0x5D3u);
      ++*(uint *)(v3 + 16);
      v4 = *(uint *)(v3 + 12) + 1;
      *(uint *)(v3 + 12) = v4;
      if ( v4 > 85 )
        ++*v2;
      goto LABEL_11;
    case 2u:
      Function_200f174(0, 0, 0, 0, 20, 1, 30);
      ++*v2;
      goto LABEL_11;
    case 3u:
      if ( Function_200f2ac() != 1 )
        goto LABEL_11;
      result = 1;
      break;
    default:
LABEL_11:
      Function_21d1318(v3);
      result = 0;
      break;
  }
  return result;
}

//----- (021D0F14) --------------------------------------------------------
int __fastcall Function_121_21d0f14(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  Call_RemoveTaskFromTaskList(*(int **)(v2 + 8));
  Function_21d1184(v2);
  Function_21d1068(v2);
  Function_21d1310(*(uint *)v2);
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  Function_201e530();
  Function_2002ac8(0);
  Function_2002ae4(0);
  Function_2002b20(0);
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(30);
  return 1;
}

//----- (021D0F68) --------------------------------------------------------
int __fastcall Function_21d0f68(int a1, int a2)
{
  Function_21d11a8(a2);
  return Function_20241bc(1, 1);
}

//----- (021D0F7C) --------------------------------------------------------
int Function_21d0f7c()
{
  int result;

  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (021D0F94) --------------------------------------------------------
int Function_21d0f94()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  Function_201ff00();
  Function_201ff68();
  v0 = dword_21D1380;
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
  GX_SetBanks((int *)&v6);
  MIi_CpuClear32(0, (uint *)0x6000000, 0x80000);
  MIi_CpuClear32(0, (uint *)0x6200000, 0x20000);
  MIi_CpuClear32(0, (uint *)0x6400000, 0x40000);
  return MIi_CpuClear32(0, (uint *)0x6600000, 0x20000);
}

//----- (021D0FF4) --------------------------------------------------------
int __fastcall Function_21d0ff4(int a1)
{
  int v1;
  short v3;
  short v4;
  short v5;
  short v6;
  int v7;
  int v8;
  int v9;

  v1 = a1;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  *(uint *)(a1 + 4) = Function_20203ac(0x1Eu);
  Function_20206d0(&v7, 655360, dword_21D1378, 4004, 0, 0, *(uint *)(v1 + 4));
  Function_20206bc(0, 1228800, *(uint *)(v1 + 4));
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  Function_2020a94(&v3, *(ushort **)(v1 + 4));
  v3 = -16367;
  Function_20209d4(&v3, *(ushort **)(v1 + 4));
  return Function_20203d4(*(uint *)(v1 + 4));
}

//----- (021D1068) --------------------------------------------------------
uint __fastcall Function_21d1068(int a1)
{
  return Call_free5(*(uint *)(a1 + 4));
}

//----- (021D1074) --------------------------------------------------------
int __fastcall Function_21d1074(int a1)
{
  int v1;
  int v2;
  int v3;
  int *v4;
  int result;

  v1 = a1;
  Function_20182cc((uint *)(a1 + 216), 0x1Eu, 4);
  v4 = LoadFromNARC_8(48, 0x1Eu, v2, v3);
  Function_20170d8((int *)(v1 + 180), (int)v4, 0x10u, 30);
  Function_20b2d8c(*(uint *)(v1 + 188), 1, 2031616);
  Function_20b2d8c(*(uint *)(v1 + 188), 1, 1056964608);
  Function_2017164((int *)(v1 + 140), v1 + 180, (int)v4, 0x12u, 30, (int (***)(void))(v1 + 216));
  Function_2017240(v1 + 140, 0);
  Function_2017164((int *)(v1 + 160), v1 + 180, (int)v4, 0x11u, 30, (int (***)(void))(v1 + 216));
  Function_2017240(v1 + 160, 0);
  Function_2017258((int *)(v1 + 20), v1 + 180);
  Function_2017350((uint *)(v1 + 20), 0, 0, 0);
  Function_201736c((uint *)(v1 + 20), 4096, 4096, 4096);
  Function_2017348(v1 + 20, 1);
  Function_201727c(v1 + 20, v1 + 140);
  Function_201727c(v1 + 20, v1 + 160);
  Call_FS_CloseFile(v4);
  *(uint *)(v1 + 200) = -302;
  *(uint *)(v1 + 204) = 58243;
  *(uint *)(v1 + 208) = 4096;
  result = 15360;
  *(uint *)(v1 + 212) = 15360;
  return result;
}

//----- (021D1184) --------------------------------------------------------
int __fastcall Function_21d1184(int a1)
{
  int v1;

  v1 = a1;
  Function_2017110((int *)(a1 + 180));
  Function_20171a0((int *)(v1 + 140), v1 + 216);
  return Function_20171a0((int *)(v1 + 160), v1 + 216);
}

//----- (021D11A8) --------------------------------------------------------
int *__fastcall Function_21d11a8(int a1)
{
  int v1;
  int v3;
  int v4[9];
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v1 = a1;
  v8 = 4096;
  v9 = 4096;
  v10 = 4096;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  MTX_Identity33_(v4);
  Call_G3X_Reset();
  Function_20203d4(*(uint *)(v1 + 4));
  Function_2020854(0, *(int **)(v1 + 4));
  Function_20203ec();
  Function_20af51c(0, 0, -4096, 0);
  Function_20af558(0, 29596);
  Function_20af56c(0x7FFF, 0x7FFF, 0);
  Function_20af590(0x7FFF, 0x7FFF, 0);
  Function_20af4bc(&v5);
  MI_Copy36B(v4, dword_21C5B48);
  dword_21C5B88 &= 0xFFFFFF5B;
  Function_20af4ec(&v8);
  Function_20171cc(v1 + 140, 4096);
  Function_20171cc(v1 + 160, 4096);
  Function_20b275c(17, 0, 0);
  Function_2017294(v1 + 20);
  v3 = 1;
  return Function_20b275c(18, (int)&v3, 1);
}

//----- (021D1270) --------------------------------------------------------
int __fastcall Function_21d1270(uint a1)
{
  return Function_2024220(a1, 0, 2, 0, 2, (void (*)(void))Function_21d128c);
}

//----- (021D128C) --------------------------------------------------------
int *Function_21d128c()
{
  int *result;

  Function_201ff0c(1u, 1);
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 1;
  GFX_CONTROL &= 0xCFFDu;
  GFX_CONTROL = GFX_CONTROL & 0xCFFF | 0x10;
  GFX_CONTROL &= 0xCFFBu;
  GFX_CONTROL = GFX_CONTROL & 0xCFFF | 8;
  GFX_CONTROL &= 0xCFDFu;
  G3X_SetFog(0, 0, 0, 0);
  G3X_SetClearColor(0, 0, 0x7FFF, 63, 0);
  result = &GFX_VIEWPORT;
  GFX_VIEWPORT = -1073807360;
  return result;
}

//----- (021D1310) --------------------------------------------------------
uint __fastcall Function_21d1310(int a1)
{
  return Function_20242c4(a1);
}

//----- (021D1318) --------------------------------------------------------
int __fastcall Function_21d1318(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_202094c(-(short)(*(uint *)(a1 + 212) >> 8), *(uint *)(a1 + 4));
  *(uint *)(v1 + 212) -= 128;
  if ( *(uint *)(v1 + 212) < 4096 )
    *(uint *)(v1 + 212) = 4096;
  result = *(uint *)(v1 + 196) + 1;
  *(uint *)(v1 + 196) = result;
  return result;
}

