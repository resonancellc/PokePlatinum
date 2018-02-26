//----- (021D0D80) --------------------------------------------------------
int __fastcall Function_120_21d0d80(int a1)
{
  int v1;
  int *v2;

  v1 = a1;
  Function_2017fc8(3, 120, 0x40000);
  v2 = (int *)MallocSomeDataAndStorePtrInOverlayData1c(v1, 40, 0x78u);
  Call_FillMemWithValue(v2, 0, 0x28u);
  *v2 = 120;
  v2[9] = 0;
  return 1;
}

//----- (021D0DB0) --------------------------------------------------------
int __fastcall Function_120_21d0db0(int a1, int *a2)
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
    JUMPOUT(__CS__, *((short *)&off_21D0DD2 + v4) + 35458516);
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
      Function_21d0f24(v5);
      Function_21d114c(v5);
      SetMainLoopFunctionCall((int)Function_21d0f18, (int)v5);
      Function_201ffd0();
      v5[9] = 0;
      *v2 = 1;
      break;
    case 1:
      v7 = *(uint *)(v3 + 36);
      if ( v7 )
      {
        v5[9] = v7 - 1;
      }
      else
      {
        v5[9] = 0;
        *v2 = 2;
      }
      break;
    case 2:
      v8 = *(uint *)(v3 + 36);
      if ( v8 )
      {
        v5[9] = v8 - 1;
      }
      else
      {
        v5[9] = 0;
        Function_200f174(0, 1, 1, 0, 6, 1, *v5);
        *v2 = 3;
      }
      break;
    case 3:
      Function_21d1178();
      if ( Function_200f2ac() == 1 )
      {
        v5[9] = 240;
        *v2 = 4;
      }
      break;
    case 4:
      Function_21d1178();
      v9 = v5[9];
      if ( v9 )
      {
        v5[9] = v9 - 1;
      }
      else
      {
        v5[9] = 0;
        Function_200f174(0, 0, 0, 0, 6, 1, *v5);
        *v2 = 5;
      }
      break;
    case 5:
      Function_21d1178();
      if ( Function_200f2ac() == 1 )
      {
        Function_21d116c(v5);
        Function_21d10d4(v5);
        SetMainLoopFunctionCall(0, 0);
        v6 = 1;
      }
      break;
    default:
      return v6;
  }
  return v6;
}

//----- (021D0EFC) --------------------------------------------------------
int __fastcall Function_120_21d0efc(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)LoadOverlayData1c(a1);
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(v2);
  return 1;
}

//----- (021D0F18) --------------------------------------------------------
int __fastcall Function_21d0f18(int a1)
{
  return Function_201c2b8(*(uint *)(a1 + 4));
}

//----- (021D0F24) --------------------------------------------------------
int *__fastcall Function_21d0f24(int a1, int a2, int a3, int a4)
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
  v4 = dword_21D1210;
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
  LoadFromNARC_RGCN(193, 2, *(uint **)(v5 + 4), 3u, 0, 0, 0, *(uint *)v5);
  LoadFromNARC_RCSN(193, 4, *(uint **)(v5 + 4), 3u, 0, 0, 0, *(uint *)v5);
  Call_LoadFromNARC_RLCN(193, 3, 0, 0, 0, *(uint *)v5);
  LoadFromNARC_PlFont1(0, 32, *(uint *)v5);
  Function_201975c(0, 0);
  Function_201975c(4u, 0);
  return G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 2, 12, 4, 12);
}

//----- (021D10D4) --------------------------------------------------------
uint __fastcall Function_21d10d4(int a1)
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

//----- (021D114C) --------------------------------------------------------
int __fastcall Function_21d114c(uint *a1)
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

//----- (021D116C) --------------------------------------------------------
ushort *__fastcall Function_21d116c(int a1)
{
  return Function_200b190(*(ushort **)(a1 + 8));
}

//----- (021D1178) --------------------------------------------------------
void __fastcall Function_21d1178(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 32);
  *(uint *)(a1 + 32) = v1 + 4;
  Function_2019184(*(uint *)(a1 + 4), 1u, 3u, (v1 + 4) >> 4);
}

