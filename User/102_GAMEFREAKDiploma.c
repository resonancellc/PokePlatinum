//----- (021D0D80) --------------------------------------------------------
int __fastcall GameFreakDiploma_Init(int a1)
{
  int v1;
  int *v2;
  int *v3;

  v1 = a1;
  Function_2017fc8(3, 84, 0x20000);
  v2 = (int *)MallocSomeDataAndStorePtrInOverlayData1c(v1, 68, 0x54u);
  Call_FillMemWithValue(v2, 0, 0x44u);
  *v2 = 84;
  v3 = (int *)LoadPtrToOverWorldDataIn18(v1);
  v2[2] = *v3;
  v2[1] = v3[1];
  v2[3] = LoadTrainerDataAdress(v2[2]);
  SetBrightnessWithValue(0, 0);
  SetBrightnessWithValue(1, 0);
  SetMainLoopFunctionCall(0, 0);
  Function_20177bc(0, 0);
  Function_201ff00();
  Function_201ff68();
  REG_DISPCNT &= 0xFFFFE0FF;
  REG_DISPCNT_SUB &= 0xFFFFE0FF;
  Function_2017dd4(4, 8);
  Function_21d0f8c(v2);
  Function_21d1174(v2);
  SetMainLoopFunctionCall((int)Function_21d0f80, (int)v2);
  Function_201ffd0();
  return 1;
}

//----- (021D0E2C) --------------------------------------------------------
int __fastcall GameFreakDiploma_Loop(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int *v4;
  int v5;
  int v6;
  int v7;

  v2 = a2;
  v3 = LoadOverlayData1c(a1);
  v4 = (int *)v3;
  v5 = 0;
  switch ( (uchar)*v2 )
  {
    case 0u:
      Function_21d1224();
      Function_21d1274(v4);
      Function_21d1420(v4);
      Function_2019120(0, 1);
      Function_2019120(1u, 1);
      Function_2019120(3u, 1);
      Function_2019120(4u, 1);
      Function_2019120(5u, 1);
      Function_2019120(7u, 1);
      Function_200f174(0, 1, 1, 0, 6, 1, *v4);
      *v2 = 1;
      break;
    case 1u:
      if ( Function_200f2ac() == 1 )
      {
        v4[16] = 0;
        *v2 = 2;
      }
      break;
    case 2u:
      v6 = *(uint *)(v3 + 64);
      if ( v6 >= 60 )
        *v2 = 3;
      else
        v4[16] = v6 + 1;
      break;
    case 3u:
      v7 = *(short *)(v3 + 60);
      if ( v7 <= -192 )
      {
        *(ushort *)(v3 + 60) = -192;
        Function_21d1230();
        *v2 = 4;
      }
      else
      {
        *(ushort *)(v3 + 60) = v7 - 4;
        Function_21d1230();
      }
      break;
    case 4u:
      if ( (dword_21BF6C4 & 1) == 1 || (dword_21BF6C4 & 2) == 2 || word_21BF6DC )
      {
        Function_200f174(0, 0, 0, 0, 6, 1, *(uint *)v3);
        *v2 = 5;
      }
      break;
    case 5u:
      if ( Function_200f2ac() == 1 )
        v5 = 1;
      break;
    default:
      return v5;
  }
  return v5;
}

//----- (021D0F50) --------------------------------------------------------
int __fastcall GameFreakDiploma_End(int a1)
{
  int v1;
  int *v2;
  int *v3;
  int v4;

  v1 = a1;
  v2 = (int *)LoadOverlayData1c(a1);
  v3 = v2;
  v4 = *v2;
  Function_21d1204();
  Function_21d10f8(v3);
  SetMainLoopFunctionCall(0, 0);
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(v4);
  return 1;
}

//----- (021D0F80) --------------------------------------------------------
int __fastcall Function_21d0f80(int a1)
{
  return Function_201c2b8(*(uint *)(a1 + 16));
}

//----- (021D0F8C) --------------------------------------------------------
uint __fastcall Function_21d0f8c(int a1)
{
  int *v1;
  int v2;
  char *v3;
  int v4;
  int v5;
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
  char v19;

  v1 = dword_21D155C;
  v2 = a1;
  v3 = &v19;
  v4 = 5;
  do
  {
    v5 = *v1;
    v6 = v1[1];
    v1 += 2;
    *(uint *)v3 = v5;
    *((uint *)v3 + 1) = v6;
    v3 += 8;
    --v4;
  }
  while ( v4 );
  GX_SetBanks((int *)&v19);
  *(uint *)(v2 + 16) = Function_2018340(*(uint *)v2);
  v15 = 1;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  SetGraphicsModes(&v15);
  v8 = 0;
  v9 = 0;
  v11 = 0;
  v12 = 1;
  v13 = 0;
  v14 = 0;
  HIWORD(v12) = 1024;
  v10 = 4096;
  LOBYTE(v12) = 2;
  Function_20183c4(*(uint **)(v2 + 16), 0, &v8, 0);
  Function_2019ebc(*(uint **)(v2 + 16), 0);
  HIWORD(v12) = 514;
  v10 = 4096;
  LOBYTE(v12) = 2;
  Function_20183c4(*(uint **)(v2 + 16), 1u, &v8, 0);
  Function_2019ebc(*(uint **)(v2 + 16), 1u);
  HIWORD(v12) = 260;
  v10 = 2048;
  LOBYTE(v12) = 1;
  Function_20183c4(*(uint **)(v2 + 16), 3u, &v8, 0);
  Function_2019ebc(*(uint **)(v2 + 16), 3u);
  HIWORD(v12) = 1024;
  v10 = 4096;
  LOBYTE(v12) = 2;
  Function_20183c4(*(uint **)(v2 + 16), 4u, &v8, 0);
  Function_2019ebc(*(uint **)(v2 + 16), 4u);
  HIWORD(v12) = 514;
  v10 = 4096;
  LOBYTE(v12) = 2;
  Function_20183c4(*(uint **)(v2 + 16), 5u, &v8, 0);
  Function_2019ebc(*(uint **)(v2 + 16), 5u);
  HIWORD(v12) = 260;
  v10 = 2048;
  LOBYTE(v12) = 1;
  Function_20183c4(*(uint **)(v2 + 16), 7u, &v8, 0);
  Function_2019ebc(*(uint **)(v2 + 16), 7u);
  Function_2019120(0, 0);
  Function_2019120(1u, 0);
  Function_2019120(2u, 0);
  Function_2019120(3u, 0);
  Function_2019120(4u, 0);
  Function_2019120(5u, 0);
  Function_2019120(6u, 0);
  return Function_2019120(7u, 0);
}

//----- (021D10F8) --------------------------------------------------------
uint __fastcall Function_21d10f8(int a1)
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
  Function_2019044(*(uint *)(v1 + 16), 0);
  Function_2019044(*(uint *)(v1 + 16), 1);
  Function_2019044(*(uint *)(v1 + 16), 3);
  Function_2019044(*(uint *)(v1 + 16), 4);
  Function_2019044(*(uint *)(v1 + 16), 5);
  Function_2019044(*(uint *)(v1 + 16), 7);
  return free(*(uint *)(v1 + 16));
}

//----- (021D1174) --------------------------------------------------------
int __fastcall Function_21d1174(int a1)
{
  int v1;
  short v3;
  short v4;
  short v5;
  short v6;

  v1 = a1;
  v3 = 0;
  v4 = 0x2000;
  v5 = 536;
  v6 = 1;
  Function_201d710();
  *(uint *)(v1 + 52) = LoadFromMsgNARC(1, 26, 1, *(uint *)v1);
  *(uint *)(v1 + 56) = Function_200b358(*(uint *)v1);
  LOBYTE(v3) = 0;
  Function_201a8d4(*(uint **)(v1 + 16), v1 + 20, (uchar *)&v3);
  Function_201ae78(v1 + 20, 0, 0, 0, 0x100u, 0xC0u);
  LOBYTE(v3) = 4;
  Function_201a8d4(*(uint **)(v1 + 16), v1 + 36, (uchar *)&v3);
  return Function_201ae78(v1 + 36, 0, 0, 0, 0x100u, 0xC0u);
}

//----- (021D1204) --------------------------------------------------------
ushort *__fastcall Function_21d1204(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  Function_201a8fc(a1 + 36);
  Function_201a8fc(v1 + 20);
  Function_200b3f0(*(uint **)(v1 + 56), v2);
  return Function_200b190(*(ushort **)(v1 + 52));
}

//----- (021D1224) --------------------------------------------------------
int __fastcall Function_21d1224(int a1)
{
  *(ushort *)(a1 + 60) = 0;
  return Function_21d1230();
}

//----- (021D1230) --------------------------------------------------------
void __fastcall Function_21d1230(int a1)
{
  int v1;

  v1 = a1;
  Function_2019184(*(uint *)(a1 + 16), 1u, 3u, *(short *)(a1 + 60));
  Function_2019184(*(uint *)(v1 + 16), 5u, 3u, *(short *)(v1 + 60) + 192);
  Function_2019184(*(uint *)(v1 + 16), 0, 3u, *(short *)(v1 + 60));
  Function_2019184(*(uint *)(v1 + 16), 4u, 3u, *(short *)(v1 + 60) + 192);
}

//----- (021D1274) --------------------------------------------------------
int __fastcall Function_21d1274(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v6;
  int v7;
  int v8;

  v1 = a1;
  if ( *(uint *)(a1 + 4) )
  {
    v8 = 3;
    v7 = 7;
    v2 = 11;
    v6 = 9;
    v3 = 1;
    v4 = 5;
  }
  else
  {
    v8 = 2;
    v7 = 6;
    v2 = 10;
    v6 = 8;
    v3 = 0;
    v4 = 4;
  }
  LoadFromNARC_RCSN(132, v2, *(uint **)(a1 + 16), 3u, 0, 0, 0, *(uint *)a1);
  LoadFromNARC_RGCN(132, v8, *(uint **)(v1 + 16), 3u, 0, 0, 0, *(uint *)v1);
  Call_LoadFromNARC_RLCN(132, v7, 0, 0, 32, *(uint *)v1);
  LoadFromNARC_RCSN(132, v2, *(uint **)(v1 + 16), 7u, 0, 0, 0, *(uint *)v1);
  LoadFromNARC_RGCN(132, v8, *(uint **)(v1 + 16), 7u, 0, 0, 0, *(uint *)v1);
  Call_LoadFromNARC_RLCN(132, v7, 4u, 0, 32, *(uint *)v1);
  LoadFromNARC_RCSN(132, v6, *(uint **)(v1 + 16), 1u, 0, 0, 0, *(uint *)v1);
  Function_2019e2c(*(uint *)(v1 + 16), 1, 0, 0, 0x20u, 0x18u, 1u);
  Function_2019448(*(uint **)(v1 + 16), 1u);
  LoadFromNARC_RGCN(132, v3, *(uint **)(v1 + 16), 1u, 0, 0, 0, *(uint *)v1);
  Call_LoadFromNARC_RLCN(132, v4, 0, 32, 32, *(uint *)v1);
  LoadFromNARC_RCSN(132, v6, *(uint **)(v1 + 16), 5u, 0, 0, 0, *(uint *)v1);
  Function_2019e2c(*(uint *)(v1 + 16), 5, 0, 0, 0x20u, 0x18u, 1u);
  Function_2019448(*(uint **)(v1 + 16), 5u);
  LoadFromNARC_RGCN(132, v3, *(uint **)(v1 + 16), 5u, 0, 0, 0, *(uint *)v1);
  Call_LoadFromNARC_RLCN(132, v4, 4u, 32, 32, *(uint *)v1);
  Function_2019690(0, 32, 0, *(uint *)v1);
  Function_2019690(4u, 32, 0, *(uint *)v1);
  LoadFromNARC_PlFont1(0, 64, *(uint *)v1);
  return LoadFromNARC_PlFont1(4u, 64, *(uint *)v1);
}

//----- (021D1420) --------------------------------------------------------
uint __fastcall Function_21d1420(uint *a1)
{
  uint *v1;
  ushort *v2;
  ushort *v3;
  uint v4;
  int v5;
  uint v6;
  int v7;

  v1 = a1;
  v2 = (ushort *)Function_2023790(512, *a1);
  v3 = (ushort *)Function_2023790(512, *v1);
  Function_200b1b8_CallMsgDecrypt((ushort **)v1[13], 0, v3);
  v4 = v1[3];
  Function_200b498(v1[14], 0);
  Function_200c388((uint *)v1[14], (int)v2, (int)v3);
  Function_201d78c((int)(v1 + 5), 0);
  Function_201d78c((int)(v1 + 9), 0);
  Function_20237bc_FreeMsg((int)v3, v5);
  if ( v1[1] )
    v6 = 2;
  else
    v6 = 1;
  Function_200b1b8_CallMsgDecrypt((ushort **)v1[13], v6, v2);
  Function_201d78c((int)(v1 + 5), 0);
  Function_201d78c((int)(v1 + 9), 0);
  Function_200b1b8_CallMsgDecrypt((ushort **)v1[13], 3u, v2);
  Function_201d78c((int)(v1 + 5), 0);
  Function_201d78c((int)(v1 + 9), 0);
  return Function_20237bc_FreeMsg((int)v2, v7);
}

