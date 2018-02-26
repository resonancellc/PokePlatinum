//----- (021D0D80) --------------------------------------------------------
int __fastcall Function_100_21d0d80(int a1)
{
  int v1;
  int v2;
  uint v3;
  int v4;
  int v5;

  v1 = a1;
  Function_2017fc8(3, 111, 786432);
  v2 = MallocSomeDataAndStorePtrInOverlayData1c(v1, 212, 0x6Fu);
  Call_FillMemWithValue((int *)v2, 0, 0xD4u);
  *(uint *)(v2 + 208) = LoadPtrToOverWorldDataIn18(v1);
  Function_21d1034(v2 + 12);
  Function_200f174(0, 1, 1, 0, 12, 1, 111);
  SetMainLoopFunctionCall((int)Function_21d13b4, v2);
  *(uchar *)(v2 + 92) = 31;
  *(uchar *)(v2 + 93) = 31;
  *(uchar *)(v2 + 94) = 31;
  *(uchar *)(v2 + 205) = 31;
  Function_2005454(1);
  v3 = Function_2027b50(*(ushort **)(*(uint *)(v2 + 208) + 4));
  Function_201a7a0(v2 + 60);
  Function_201a7e8(*(uint **)(v2 + 24), v2 + 60, 1, 2, 19, 0x1Bu, 4u, 14, 1);
  Function_201ada4_ClearTextBox(v2 + 60, 255);
  Function_201a954(v2 + 60, v4);
  Function_200dd0c(*(uint **)(v2 + 24), 1u, 500, 15, v3, 111);
  v5 = Function_200dd08(v3);
  Function_2003050(*(uint *)(v2 + 28), 38, v5, 111, 0, 32, 0xF0u);
  Function_2003050(*(uint *)(v2 + 28), 14, 7, 111, 0, 32, 0xE0u);
  Function_200e060(v2 + 60, 0, 500, 0xFu);
  Function_21d4788(v2 + 12);
  return 1;
}

//----- (021D0EA8) --------------------------------------------------------
int __fastcall Function_100_21d0ea8(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  int result;

  v2 = a2;
  v3 = LoadOverlayData1c(a1);
  v4 = v3;
  switch ( (uchar)*v2 )
  {
    case 0u:
      *(uint *)(v3 + 8) = ((int (*)(void))*(&off_21D5130 + 3 * *(uint *)(v3 + 4)))();
      *v2 = 1;
      goto LABEL_11;
    case 1u:
      if ( !((int (__fastcall *)(uint))*(&off_21D5134 + 3 * *(uint *)(v3 + 4)))(*(uint *)(v3 + 8)) )
        *v2 = 2;
      goto LABEL_11;
    case 2u:
      if ( !((int (__fastcall *)(uint))*(&off_21D5138 + 3 * *(uint *)(v3 + 4)))(*(uint *)(v3 + 8)) )
      {
        v5 = *(uint *)(v4 + 4) + 1;
        *(uint *)(v4 + 4) = v5;
        if ( v5 == 3 )
          *v2 = 3;
        else
          *v2 = 0;
      }
      goto LABEL_11;
    case 3u:
      result = 1;
      break;
    default:
      ErrorHandler();
LABEL_11:
      Function_200c7ec(*(int **)(v4 + 20));
      result = 0;
      break;
  }
  return result;
}

//----- (021D0F44) --------------------------------------------------------
int __fastcall Function_100_21d0f44(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  Function_200e084(v2 + 60, 1);
  Function_201acf4(v2 + 60);
  Function_201a8fc(v2 + 60);
  Function_21d111c(v2 + 12);
  byte_21BF6E1 = 0;
  Function_201ffe8();
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(111);
  Function_2005454(0);
  return 1;
}

//----- (021D0FA0) --------------------------------------------------------
uint __fastcall Function_21d0fa0(int a1, int a2, int a3, int a4)
{
  int v4;
  uint result;
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

  v25 = a4;
  v4 = a1;
  *(uint *)(a1 + 4) = Function_200c6e4(0x6Fu);
  v17 = 0;
  v18 = 128;
  v19 = 0;
  v20 = 32;
  v21 = 0;
  v22 = 128;
  v23 = 0;
  v24 = 32;
  v12 = 96;
  v13 = 0x10000;
  v14 = 0x4000;
  v15 = 1048592;
  v16 = 16;
  if ( !Function_200c73c(*(uint **)(v4 + 4), &v17, &v12, 32) )
    ErrorHandler();
  v6 = 96;
  v7 = 32;
  v8 = 64;
  v9 = 64;
  v10 = 16;
  v11 = 16;
  *(uint *)(v4 + 8) = Function_200c704(*(uint **)(v4 + 4));
  if ( !Function_200c7c0(*(int **)(v4 + 4), *(int ***)(v4 + 8), 128) )
    ErrorHandler();
  result = Function_200cb30(*(uint **)(v4 + 4), *(uint *)(v4 + 8), &v6);
  if ( !result )
    result = ErrorHandler();
  return result;
}

//----- (021D1034) --------------------------------------------------------
uint __fastcall Function_21d1034(int **a1)
{
  int **v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  Function_201ff00();
  Function_201ff68();
  REG_DISPCNT &= 0xFFFFE0FF;
  REG_DISPCNT_SUB &= 0xFFFFE0FF;
  *v1 = LoadFromNARC_8(172, 0x6Fu, (int)&REG_DISPCNT_SUB, v2);
  v1[3] = (int *)Function_2018340(0x6Fu);
  v1[4] = (int *)MallocFill120(0x6Fu);
  v1[5] = (int *)Function_2024220(0x6Fu, 0, 1, 0, 4, 0);
  v1[6] = (int *)Function_20203ac(0x6Fu);
  v1[11] = (int *)LoadFromMsgNARC(0, 26, 234, 0x6Fu);
  Function_2003858((int)v1[4], 1);
  Function_2002f70((int)v1[4], 0, 512, 0x6Fu);
  Function_2002f70((int)v1[4], 1, 512, 0x6Fu);
  Function_2002f70((int)v1[4], 2, 512, 0x6Fu);
  Function_2002f70((int)v1[4], 3, 512, 0x6Fu);
  Function_21d1208(v1[3]);
  Function_21d0fa0((int)v1, v3, v4, v5);
  GFX_CONTROL = GFX_CONTROL & 0xCFFF | 8;
  return Function_20182cc(v1 + 7, 0x6Fu, 32);
}

//----- (021D111C) --------------------------------------------------------
int __fastcall Function_21d111c(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_201ff0c(1u, 0);
  Function_201ff0c(2u, 0);
  Function_201ff0c(4u, 0);
  Function_201ff0c(8u, 0);
  Function_201ff74(1u, 0);
  Function_201ff74(2u, 0);
  Function_201ff74(4u, 0);
  Function_201ff74(8u, 0);
  Function_2019044(*(uint *)(v1 + 12), 0);
  Function_2019044(*(uint *)(v1 + 12), 1);
  Function_2019044(*(uint *)(v1 + 12), 2);
  Function_2019044(*(uint *)(v1 + 12), 3);
  Function_2019044(*(uint *)(v1 + 12), 4);
  Function_2019044(*(uint *)(v1 + 12), 5);
  Function_2019044(*(uint *)(v1 + 12), 6);
  Function_2019044(*(uint *)(v1 + 12), 7);
  free(*(uint *)(v1 + 12));
  Function_2002fa0(*(uint *)(v1 + 16), 0);
  Function_2002fa0(*(uint *)(v1 + 16), 1);
  Function_2002fa0(*(uint *)(v1 + 16), 2);
  Function_2002fa0(*(uint *)(v1 + 16), 3);
  Call_free1(*(uint *)(v1 + 16));
  Call_FS_CloseFile(*(int **)v1);
  Function_20242c4(*(uint *)(v1 + 20));
  Call_free5(*(uint *)(v1 + 24));
  Function_200d0b0(*(uint *)(v1 + 4), *(int ***)(v1 + 8));
  Function_200c8d4(*(uint *)(v1 + 4));
  Function_200b190(*(ushort **)(v1 + 44));
  result = GFX_CONTROL & 0xCFF7;
  GFX_CONTROL &= 0xCFF7u;
  return result;
}

//----- (021D1208) --------------------------------------------------------
uint __fastcall Function_21d1208(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int *v5;
  char *v6;
  int v7;
  int v8;
  int v9;
  int *v10;
  char *v11;
  int v12;
  int v13;
  int v14;
  int *v15;
  char *v16;
  int v17;
  int v18;
  int v19;
  char v21;
  char v22;
  char v23;
  int v24;
  int v25;
  int v26;
  int v27;
  char v28;
  char v29;
  char v30;
  char v31;
  int v32;

  v32 = a4;
  v4 = a1;
  Function_201ff00();
  v24 = 1;
  v25 = 0;
  v26 = 0;
  v27 = 1;
  SetGraphicsModes(&v24);
  v5 = dword_21D5154;
  v6 = &v23;
  v7 = 5;
  do
  {
    v8 = *v5;
    v9 = v5[1];
    v5 += 2;
    *(uint *)v6 = v8;
    *((uint *)v6 + 1) = v9;
    v6 += 8;
    --v7;
  }
  while ( v7 );
  GX_SetBanks((int *)&v23);
  MIi_CpuClear32(0, (uint *)0x6000000, 0x80000);
  MIi_CpuClear32(0, (uint *)0x6200000, 0x20000);
  MIi_CpuClear32(0, (uint *)0x6400000, 0x40000);
  MIi_CpuClear32(0, (uint *)0x6600000, 0x20000);
  v10 = dword_21D51B4;
  v11 = &v28;
  v12 = 14;
  do
  {
    v13 = *v10;
    v14 = v10[1];
    v10 += 2;
    *(uint *)v11 = v13;
    *((uint *)v11 + 1) = v14;
    v11 += 8;
    --v12;
  }
  while ( v12 );
  Function_2019690(0, 32, 0, 0x6Fu);
  Function_2019690(1u, 32, 0, 0x6Fu);
  Function_2019690(2u, 32, 0, 0x6Fu);
  Function_2019690(3u, 32, 0, 0x6Fu);
  Function_20183c4(v4, 0, (int *)&v28, 0);
  Function_20183c4(v4, 1u, (int *)&v29, 0);
  Function_20183c4(v4, 2u, (int *)&v30, 0);
  Function_20183c4(v4, 3u, (int *)&v31, 0);
  Function_2019ebc(v4, 0);
  Function_2019ebc(v4, 1u);
  Function_2019ebc(v4, 2u);
  Function_2019ebc(v4, 3u);
  v15 = dword_21D517C;
  v16 = &v21;
  v17 = 7;
  do
  {
    v18 = *v15;
    v19 = v15[1];
    v15 += 2;
    *(uint *)v16 = v18;
    *((uint *)v16 + 1) = v19;
    v16 += 8;
    --v17;
  }
  while ( v17 );
  Function_20183c4(v4, 4u, (int *)&v21, 0);
  Function_20183c4(v4, 5u, (int *)&v22, 0);
  Function_2019ebc(v4, 4u);
  Function_2019ebc(v4, 5u);
  Function_2019690(4u, 32, 0, 0x6Fu);
  Function_2019690(5u, 32, 0, 0x6Fu);
  Function_201ff0c(1u, 1);
  Function_201ff0c(2u, 1);
  Function_201ff0c(4u, 0);
  Function_201ff0c(8u, 0);
  Function_201ff0c(0x10u, 0);
  Function_201ff74(1u, 1);
  Function_201ff74(2u, 1);
  Function_201ff74(4u, 0);
  Function_201ff74(8u, 0);
  return Function_201ff74(0x10u, 1);
}

//----- (021D13B4) --------------------------------------------------------
int __fastcall Function_21d13b4(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_201dcac();
  Function_200c800();
  Function_2003694(*(uint *)(v1 + 28));
  Function_201c2b8(*(uint *)(v1 + 24));
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (021D13E4) --------------------------------------------------------
int *__fastcall Function_21d13e4(int a1)
{
  int v1;
  int *v2;

  v1 = a1;
  v2 = (int *)malloc(0x6Fu, 2008);
  Call_FillMemWithValue(v2, 0, 0x7D8u);
  v2[500] = v1 + 12;
  v2[501] = *(uint *)(v1 + 208);
  Function_21d1808(v2);
  Function_21d1a54(v2);
  Function_21d4e3c(v2 + 3, 111);
  Function_21d4e70(v2 + 3);
  Function_21d1758(*(uint *)(v2[500] + 24), v2[500] + 68);
  *(uint *)(v2[500] + 72) += 102400;
  REG_BLDCNT_SUB = 0;
  G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 4, 50, 7, 8);
  Function_21d4dc8(1);
  Function_200564c(0, 10);
  return v2;
}

//----- (021D14A8) --------------------------------------------------------
int __fastcall Function_21d14a8(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int result;

  v1 = a1;
  switch ( (uchar)*a1 )
  {
    case 0u:
      Function_200f174(0, 1, 1, 0, 6, 1, 111);
      ++*v1;
      goto LABEL_3;
    case 1u:
LABEL_3:
      if ( Function_200f2ac() )
      {
        Function_2004550(0x12u, 0x429u);
        Function_2004550(0x3Fu, 0);
        *v1 = 2;
      }
      goto LABEL_23;
    case 2u:
      Function_2017348((int)&a1[98 * a1[2] + 108], 1);
      v1[98 * v1[2] + 196] = 1;
      v1[98 * v1[2] + 199] = 1;
      ++*v1;
      v1[1] = 0;
      goto LABEL_23;
    case 3u:
      if ( a1[1] == (ushort)word_21D523E[a1[2]] )
        Function_2005748(0x5C7u);
      v2 = v1[2];
      if ( v1[1] == *((ushort *)&dword_21D522C + v2) )
        Function_20059d0(0, dword_21D524C[v2] & 0xFFFF, 0, 100, 111, 0);
      v3 = v1[1] + 1;
      v1[1] = v3;
      if ( v3 >= (ushort)word_21D5226[v1[2]] )
      {
        *(uchar *)(v1[500] + 83) = 0;
        v1[1] = 0;
        ++*v1;
      }
      goto LABEL_23;
    case 4u:
      v4 = (char)++*(uchar *)(a1[500] + 83);
      if ( v4 == 16 )
      {
        a1[17 * a1[2] + 21] = 1;
        Function_2017348((int)&a1[98 * a1[2] + 108], 0);
        ++*v1;
        v5 = v1[2] + 1;
        v1[2] = v5;
        if ( v5 >= 3 )
        {
          *(uchar *)(v1[500] + 83) = 0;
          *v1 = 6;
        }
      }
      else
      {
        G2x_SetBlendBrightness_(&REG_BLDCNT, 49, v4);
      }
      goto LABEL_23;
    case 5u:
      v6 = (char)--*(uchar *)(a1[500] + 83);
      if ( v6 <= 0 )
        *a1 = 2;
      else
        G2x_SetBlendBrightness_(&REG_BLDCNT, 49, v6);
      goto LABEL_23;
    case 6u:
      v7 = a1[1] + 1;
      v1[1] = v7;
      if ( v7 < 120 )
        goto LABEL_23;
      v8 = (char)++*(uchar *)(v1[500] + 83);
      if ( v8 == 16 )
      {
        Function_200f174(0, 0, 0, 0x7FFF, 1, 1, 111);
        result = 0;
        *v1 = 0;
      }
      else
      {
        G2x_SetBlendBrightness_(&REG_BLDCNT_SUB, 51, v8);
LABEL_23:
        Function_21d17b4(v1);
        Function_21d4c94(v1[500], v1[2]);
        result = 1;
      }
      return result;
    default:
      goto LABEL_23;
  }
}

//----- (021D16C4) --------------------------------------------------------
int __fastcall Function_21d16c4(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( *a1 )
  {
    if ( *a1 != 1 )
    {
      free((int)a1);
      return 0;
    }
    Function_21d4aa4(a1 + 108, a1[500] + 28, 2);
    Function_21d4aa4(v1 + 206, v1[500] + 28, 2);
    Function_21d4aa4(v1 + 304, v1[500] + 28, 2);
    Function_21d4aa4(v1 + 402, v1[500] + 28, 0);
    Function_201ff74(1u, 0);
    ++*v1;
  }
  else
  {
    Function_21d4e58(a1 + 3);
    Function_21d1a24(v1);
    ++*v1;
  }
  return 1;
}

//----- (021D1758) --------------------------------------------------------
int *__fastcall Function_21d1758(int a1, uint *a2)
{
  int *v2;
  short v4;
  short v5;
  short v6;
  short v7;

  v2 = (int *)a1;
  v4 = 1274;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  Function_20206d0(a2, 819200, &v4, 2662, 0, 1, a1);
  Function_2020854(0, v2);
  Function_20203d4((int)v2);
  return Function_20206bc(410, 0x800000, (int)v2);
}

//----- (021D17B4) --------------------------------------------------------
int __fastcall Function_21d17b4(int a1)
{
  int v1;

  v1 = a1;
  Call_G3X_Reset();
  Function_20203ec();
  Function_21d47a0(*(uint *)(v1 + 2000));
  Function_21d4844(*(uint *)(v1 + 2000));
  Function_21d49b4(v1 + 432);
  Function_21d49b4(v1 + 824);
  Function_21d49b4(v1 + 1216);
  Function_21d49b4(v1 + 1608);
  return Function_20241bc(0, 1);
}

//----- (021D1808) --------------------------------------------------------
int __fastcall Function_21d1808(int a1)
{
  int v1;
  int *v2;
  uint *v3;
  uint *v4;
  int v5;
  int v6;
  int v7;
  short v9;

  v1 = a1;
  v2 = *(int **)(a1 + 2000);
  v3 = (uint *)v2[3];
  v4 = (uint *)v2[1];
  v5 = *v2;
  v6 = v2[2];
  v7 = v2[4];
  Function_20070e8(*v2, 0x46u, v3, 5u, 0, 0, 0, 111);
  Function_200710c(v5, 0x48u, v3, 5u, 0, 0, 0, 111);
  Function_200710c(v5, 0x49u, v3, 4u, 0, 0, 0, 111);
  Function_2003050(v7, 172, 71, 111, 1, 64, 0);
  v9 = 1057;
  Function_2002fbc(v7, (int)&v9, 0, 0, 2u);
  Function_200cdc4(v7, 3u, v4, v6, v5, 0x32u, 0, 3, 2, 50000);
  Function_200ce24(v4, v6, v5, 0x30u, 0, 50000);
  Function_200ce54(v4, v6, v5, 0x2Fu, 0, 50000);
  Function_200cc3c(v4, v6, v5, 0x31u, 0, 2, 50000);
  Function_21d4ac8(v1 + 1608, 60, **(uint **)(v1 + 2000));
  Function_21d4ac8(v1 + 432, 59, **(uint **)(v1 + 2000));
  Function_21d4b4c(0, v1 + 432, 57, **(uint **)(v1 + 2000), *(uint *)(v1 + 2000) + 28);
  Function_21d4b4c(1, v1 + 432, 58, **(uint **)(v1 + 2000), *(uint *)(v1 + 2000) + 28);
  Function_21d4ac8(v1 + 824, 45, **(uint **)(v1 + 2000));
  Function_21d4b4c(0, v1 + 824, 43, **(uint **)(v1 + 2000), *(uint *)(v1 + 2000) + 28);
  Function_21d4b4c(1, v1 + 824, 44, **(uint **)(v1 + 2000), *(uint *)(v1 + 2000) + 28);
  Function_21d4ac8(v1 + 1216, 17, **(uint **)(v1 + 2000));
  Function_21d4b4c(0, v1 + 1216, 15, **(uint **)(v1 + 2000), *(uint *)(v1 + 2000) + 28);
  Function_21d4b4c(1, v1 + 1216, 16, **(uint **)(v1 + 2000), *(uint *)(v1 + 2000) + 28);
  Function_2017348(v1 + 432, 1);
  Function_2017348(v1 + 824, 0);
  return Function_2017348(v1 + 1216, 0);
}

//----- (021D1A24) --------------------------------------------------------
uint __fastcall Function_21d1a24(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = a1;
  v2 = 0;
  do
  {
    Call_RemoveTaskFromTaskList(*(int **)(v1 + 88));
    Call_RemoveTaskFromTaskList(*(int **)(v1 + 292));
    Function_200d0f4(*(uint *)(v1 + 24));
    result = Function_200d0f4(*(uint *)(v1 + 228));
    ++v2;
    v1 += 68;
  }
  while ( v2 < 3 );
  return result;
}

//----- (021D1A54) --------------------------------------------------------
int __fastcall Function_21d1a54(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  uint v6;
  int v7;
  int v8;
  short *v9;
  char *v10;
  uint v11;
  int v12;
  int result;
  int v14;
  int v15;
  int v16;
  uint *v17;
  int v18;
  uint *v19;
  char v20;
  short v21;
  short v22;
  short v23;
  short v24;
  short v25;
  char v26;
  int v27;
  int v28;
  short v29;
  short v30;
  short v31;
  short v32;
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

  v1 = a1;
  v2 = *(uint *)(a1 + 2000);
  v3 = 0;
  v19 = *(uint **)(v2 + 4);
  v4 = a1;
  v18 = *(uint *)(v2 + 8);
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v35 = 2;
  v42 = 2;
  v40 = -1;
  v41 = -1;
  v33 = 0;
  v34 = 0;
  v43 = 0;
  v36 = 50000;
  v37 = 50000;
  v38 = 50000;
  v39 = 50000;
  v14 = 0;
  v5 = a1 + 228;
  do
  {
    *(uint *)(v4 + 228) = Function_200ce6c(v19, v18, &v29);
    Function_200d330(*(int **)(v4 + 228));
    Function_200d3f4(*(uint **)(v4 + 228), 0);
    Function_200d430(*(int **)(v4 + 228), v3);
    Function_200d4c4(*(int **)(v4 + 228), 0, 0);
    *(uint *)(v4 + 240) = 1;
    *(uint *)(v4 + 236) = v3;
    *(ushort *)(v4 + 248) = 50;
    *(uint *)(v4 + 256) = v14;
    *(uint *)(v4 + 260) = *(uint *)(v4 + 256);
    *(uint *)(v4 + 264) = 0;
    *(uint *)(v4 + 268) = 1;
    *(uint *)(v4 + 272) = 1;
    v6 = PRNG();
    s32_div_f(v6, 10);
    *(uint *)(v4 + 276) = v7;
    *(uint *)(v4 + 280) = 0;
    *(uint *)(v4 + 292) = AddTaskToTaskList1((int)Function_21d4438, v5, 0xFFFu);
    ++v3;
    v4 += 68;
    v5 += 68;
    v14 += 120;
  }
  while ( v3 < 3 );
  v8 = 0;
  v23 = 180;
  v17 = (uint *)&v26;
  v24 = -20;
  v9 = &v23;
  v10 = &v20;
  v25 = 280;
  v16 = 0;
  *(ushort *)&v20 = 128;
  v21 = 190;
  v22 = 150;
  *(uint *)&v26 = 1036831949;
  v27 = 1050253722;
  v28 = 1045220557;
  v15 = v1 + 24;
  do
  {
    if ( v8 == 1 )
      v42 = 0;
    else
      v42 = 2;
    *(uint *)(v1 + 24) = Function_200ce6c(v19, v18, &v29);
    *(uint *)(v1 + 28) = *(uint *)(v1 + 228);
    Function_200d330(*(int **)(v1 + 24));
    Function_200d6a4(*(uint **)(v1 + 24), 2);
    Function_200d6e8(*(int **)(v1 + 24), *v17, *v17);
    Function_200d430(*(int **)(v1 + 24), v8);
    Function_200d4c4(*(int **)(v1 + 24), *v9, *(short *)v10);
    *(uint *)(v1 + 36) = 0;
    *(uint *)(v1 + 32) = v8;
    *(ushort *)(v1 + 44) = 50;
    *(uint *)(v1 + 52) = v16;
    *(uint *)(v1 + 56) = v16;
    *(uint *)(v1 + 60) = 0;
    *(uint *)(v1 + 64) = 1;
    *(uint *)(v1 + 68) = 1;
    v11 = PRNG();
    s32_div_f(v11, 10);
    *(uint *)(v1 + 72) = v12;
    *(uint *)(v1 + 76) = 0;
    *(uint *)(v1 + 88) = AddTaskToTaskList1((int)Function_21d4438, v15, 0x1000u);
    ++v8;
    ++v17;
    v1 += 68;
    v16 += 120;
    v10 += 2;
    result = v15 + 68;
    ++v9;
    v15 += 68;
  }
  while ( v8 < 3 );
  return result;
}

//----- (021D1C44) --------------------------------------------------------
int *__fastcall Function_21d1c44(int a1, uint *a2)
{
  int v2;
  short v4;
  short v5;
  short v6;
  short v7;

  v2 = a1;
  v4 = -10750;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  Function_20206d0(a2, 1296389, &v4, 3073, 0, 1, a1);
  Function_20203d4(v2);
  return Function_20206bc(40960, 4128768, v2);
}

//----- (021D1C98) --------------------------------------------------------
int __fastcall Function_21d1c98(int a1)
{
  int v1;
  int *v2;
  int v3;
  uint *v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  uint *v9;
  int result;

  v1 = a1;
  v2 = *(int **)(a1 + 7880);
  v3 = *v2;
  v4 = (uint *)v2[3];
  v5 = (uint *)v2[1];
  v6 = v2[2];
  v7 = v2[4];
  Function_20070e8(*v2, 0x12u, v4, 5u, 0, 0, 0, 111);
  Function_200710c(v3, 0x14u, v4, 5u, 0, 0, 0, 111);
  Function_2003050(v7, 172, 19, 111, 1, 64, 0);
  Function_2003050(v7, 172, 19, 111, 0, 64, 0);
  Function_200cdc4(v7, 3u, v5, v6, v3, 0x32u, 0, 3, 2, 50000);
  Function_200ce24(v5, v6, v3, 0x30u, 0, 50000);
  Function_200ce54(v5, v6, v3, 0x2Fu, 0, 50000);
  Function_200cc3c(v5, v6, v3, 0x31u, 0, 2, 50000);
  Function_21d4ac8(v1 + 432, 46, **(uint **)(v1 + 7880));
  v8 = 0;
  v9 = (uint *)(v1 + 6312);
  do
  {
    Function_21d4ac8(v9, 65, **(uint **)(v1 + 7880));
    Function_201736c(v9, 4915, 4096, 4915);
    ++v8;
    v9 += 98;
  }
  while ( v8 < 4 );
  Function_21d4ac8(v1 + 1216, 24, **(uint **)(v1 + 7880));
  Function_21d4b4c(0, v1 + 1216, 22, **(uint **)(v1 + 7880), *(uint *)(v1 + 7880) + 28);
  Function_21d4b4c(1, v1 + 1216, 23, **(uint **)(v1 + 7880), *(uint *)(v1 + 7880) + 28);
  Function_21d4ac8(v1 + 1608, 53, **(uint **)(v1 + 7880));
  Function_21d4b4c(0, v1 + 1608, 51, **(uint **)(v1 + 7880), *(uint *)(v1 + 7880) + 28);
  Function_21d4b4c(1, v1 + 1608, 52, **(uint **)(v1 + 7880), *(uint *)(v1 + 7880) + 28);
  Function_21d4ac8(v1 + 824, 55, **(uint **)(v1 + 7880));
  Function_21d4b4c(0, v1 + 824, 54, **(uint **)(v1 + 7880), *(uint *)(v1 + 7880) + 28);
  Function_21d4b4c(1, v1 + 824, 56, **(uint **)(v1 + 7880), *(uint *)(v1 + 7880) + 28);
  Function_21d4ac8(v1 + 2000, 66, **(uint **)(v1 + 7880));
  Function_2017350((uint *)(v1 + 2000), -204800, 0, -204800);
  Function_21d4b4c(0, v1 + 2000, 67, **(uint **)(v1 + 7880), *(uint *)(v1 + 7880) + 28);
  *(uint *)(v1 + 2352) = 1;
  *(uint *)(v1 + 2356) = 1;
  *(uint *)(v1 + 2340) = 2048;
  Function_21d4ac8(v1 + 2392, 68, **(uint **)(v1 + 7880));
  Function_2017350((uint *)(v1 + 2392), 204800, 0, -204800);
  Function_21d4b4c(0, v1 + 2392, 69, **(uint **)(v1 + 7880), *(uint *)(v1 + 7880) + 28);
  *(uint *)(v1 + 2744) = 1;
  *(uint *)(v1 + 2748) = 1;
  *(uint *)(v1 + 2732) = 2048;
  Function_21d4ac8(v1 + 2784, 26, **(uint **)(v1 + 7880));
  Function_2017350((uint *)(v1 + 2784), 0, -368640, 0);
  Function_2017348(v1 + 2784, 0);
  Function_21d4b4c(0, v1 + 2784, 25, **(uint **)(v1 + 7880), *(uint *)(v1 + 7880) + 28);
  Function_21d4b4c(1, v1 + 2784, 27, **(uint **)(v1 + 7880), *(uint *)(v1 + 7880) + 28);
  *(uint *)(v1 + 3144) = 1;
  Function_21d4ac8(v1 + 3176, 29, **(uint **)(v1 + 7880));
  Function_2017348(v1 + 3176, 0);
  Function_21d4b4c(0, v1 + 3176, 28, **(uint **)(v1 + 7880), *(uint *)(v1 + 7880) + 28);
  Function_21d4b4c(1, v1 + 3176, 30, **(uint **)(v1 + 7880), *(uint *)(v1 + 7880) + 28);
  *(uint *)(v1 + 3536) = 1;
  Function_21d4ac8(v1 + 3568, 32, **(uint **)(v1 + 7880));
  Function_2017348(v1 + 3568, 0);
  Function_21d4b4c(0, v1 + 3568, 31, **(uint **)(v1 + 7880), *(uint *)(v1 + 7880) + 28);
  Function_21d4b4c(1, v1 + 3568, 33, **(uint **)(v1 + 7880), *(uint *)(v1 + 7880) + 28);
  *(uint *)(v1 + 3928) = 1;
  Function_21d4ac8(v1 + 3960, 35, **(uint **)(v1 + 7880));
  Function_2017348(v1 + 3960, 0);
  Function_21d4b4c(0, v1 + 3960, 34, **(uint **)(v1 + 7880), *(uint *)(v1 + 7880) + 28);
  Function_21d4b4c(1, v1 + 3960, 36, **(uint **)(v1 + 7880), *(uint *)(v1 + 7880) + 28);
  *(uint *)(v1 + 4320) = 1;
  Function_21d4ac8(v1 + 4352, 38, **(uint **)(v1 + 7880));
  Function_2017348(v1 + 4352, 0);
  Function_21d4b4c(0, v1 + 4352, 37, **(uint **)(v1 + 7880), *(uint *)(v1 + 7880) + 28);
  Function_21d4b4c(1, v1 + 4352, 39, **(uint **)(v1 + 7880), *(uint *)(v1 + 7880) + 28);
  *(uint *)(v1 + 4712) = 1;
  Function_21d4ac8(v1 + 4744, 41, **(uint **)(v1 + 7880));
  Function_2017348(v1 + 4744, 0);
  Function_21d4b4c(0, v1 + 4744, 40, **(uint **)(v1 + 7880), *(uint *)(v1 + 7880) + 28);
  Function_21d4ac8(v1 + 5136, 42, **(uint **)(v1 + 7880));
  Function_2017348(v1 + 5136, 0);
  if ( GetGender(*(uint *)(*(uint *)(v1 + 7884) + 8)) == 1 )
  {
    Function_21d4ac8(v1 + 5528, 63, **(uint **)(v1 + 7880));
    Function_21d4b4c(0, v1 + 5528, 64, **(uint **)(v1 + 7880), *(uint *)(v1 + 7880) + 28);
  }
  else
  {
    Function_21d4ac8(v1 + 5528, 61, **(uint **)(v1 + 7880));
    Function_21d4b4c(0, v1 + 5528, 62, **(uint **)(v1 + 7880), *(uint *)(v1 + 7880) + 28);
  }
  Function_2017350((uint *)(v1 + 5528), 4096, 0, 573440);
  *(uint *)(v1 + 5884) = 1;
  *(uint *)(v1 + 5868) = 1024;
  *(uint *)(v1 + 5872) = 2;
  Function_21d4ac8(v1 + 5920, 13, **(uint **)(v1 + 7880));
  Function_2017350((uint *)(v1 + 5920), 4096, 0, 245760);
  Function_21d4b4c(0, v1 + 5920, 14, **(uint **)(v1 + 7880), *(uint *)(v1 + 7880) + 28);
  *(uint *)(v1 + 6276) = 1;
  *(uint *)(v1 + 6260) = 1024;
  result = 2;
  *(uint *)(v1 + 6264) = 2;
  return result;
}

//----- (021D2250) --------------------------------------------------------
int __fastcall Function_21d2250(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  short v7;
  int v8;
  int *v9;
  uint v10;
  int v11;
  int result;
  int v13;
  int v14;
  uint *v15;
  short v16;
  short v17;
  short v18;
  short v19;
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

  v31 = a4;
  v4 = a1;
  v5 = 0;
  v6 = *(uint *)(a1 + 7880);
  v7 = 16;
  v15 = *(uint **)(v6 + 4);
  v13 = 0;
  v14 = *(uint *)(v6 + 8);
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v22 = 2;
  v27 = -1;
  v28 = -1;
  v20 = 0;
  v21 = 0;
  v29 = 0;
  v30 = 0;
  v23 = 50000;
  v24 = 50000;
  v25 = 50000;
  v26 = 50000;
  v8 = a1 + 20;
  do
  {
    v9 = Function_200ce6c(v15, v14, &v16);
    *(uint *)(v4 + 20) = v9;
    Function_200d330(v9);
    Function_200d6a4(*(uint **)(v4 + 20), 2);
    Function_200d6e8(*(int **)(v4 + 20), 0x3F000000u, 0x3F000000u);
    Function_200d430(*(int **)(v4 + 20), v5);
    Function_200d4c4(*(int **)(v4 + 20), v7, 64);
    *(uint *)(v4 + 32) = 1;
    *(uint *)(v4 + 28) = v5;
    *(ushort *)(v4 + 40) = 50;
    *(uint *)(v4 + 48) = v13;
    *(uint *)(v4 + 52) = v13;
    *(uint *)(v4 + 56) = v5;
    *(uint *)(v4 + 60) = 1;
    *(uint *)(v4 + 64) = 1;
    v10 = PRNG();
    s32_div_f(v10, 10);
    *(uint *)(v4 + 68) = v11;
    *(uint *)(v4 + 72) = 0;
    *(uint *)(v4 + 84) = AddTaskToTaskList1((int)Function_21d4414, v8, 0x1000u);
    ++v5;
    result = v13 + 120;
    v4 += 68;
    v7 += 64;
    v8 += 68;
    v13 += 120;
  }
  while ( v5 < 3 );
  return result;
}

//----- (021D2324) --------------------------------------------------------
uint __fastcall Function_21d2324(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = a1;
  v2 = 0;
  do
  {
    Call_RemoveTaskFromTaskList(*(int **)(v1 + 84));
    result = Function_200d0f4(*(uint *)(v1 + 20));
    ++v2;
    v1 += 68;
  }
  while ( v2 < 3 );
  return result;
}

//----- (021D2340) --------------------------------------------------------
int *__fastcall Function_21d2340(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  short v7;

  v1 = a1;
  v2 = (int *)malloc(0x6Fu, 7888);
  Call_FillMemWithValue(v2, 0, 0x1ED0u);
  v2[1970] = v1 + 12;
  v2[1971] = *(uint *)(v1 + 208);
  Function_21d1c98((int)v2);
  Function_21d2250((int)v2, v3, v4, v5);
  Function_21d4e3c(v2 + 2, 111);
  Function_21d4e70(v2 + 2);
  G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 4, 50, 7, 8);
  G2x_SetBlendAlpha_((int *)&REG_BLDCNT_SUB, 3, 18, 7, 10);
  v6 = GFX_CONTROL & 0xCFFF;
  GFX_CONTROL = v6 | 0x20;
  SetEdgeTable((int)dword_21D5298, v6, (int)&GFX_CONTROL, v7);
  Function_21d1c44(*(uint *)(v2[1970] + 24), (uint *)(v2[1970] + 68));
  *(uint *)(v2[1970] + 72) = 0;
  Function_21d4dc8(1);
  Function_21d4dd8(v1, 16);
  return v2;
}

//----- (021D2428) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (021D2C8C) --------------------------------------------------------
int __fastcall Function_21d2c8c(uint *a1)
{
  uint *v1;
  int v2;
  int v3;

  v1 = a1;
  if ( *a1 )
  {
    if ( *a1 != 1 )
    {
      free((int)a1);
      return 0;
    }
    Function_21d4aa4(a1 + 108, a1[1970] + 28, 0);
    v2 = 0;
    v3 = (int)(v1 + 1578);
    do
    {
      Function_21d4aa4(v3, v1[1970] + 28, 0);
      ++v2;
      v3 += 392;
    }
    while ( v2 < 4 );
    Function_21d4aa4(v1 + 304, v1[1970] + 28, 2);
    Function_21d4aa4(v1 + 402, v1[1970] + 28, 2);
    Function_21d4aa4(v1 + 206, v1[1970] + 28, 2);
    Function_21d4aa4(v1 + 500, v1[1970] + 28, 1);
    Function_21d4aa4(v1 + 598, v1[1970] + 28, 1);
    Function_21d4aa4(v1 + 696, v1[1970] + 28, 2);
    Function_21d4aa4(v1 + 794, v1[1970] + 28, 2);
    Function_21d4aa4(v1 + 892, v1[1970] + 28, 2);
    Function_21d4aa4(v1 + 990, v1[1970] + 28, 2);
    Function_21d4aa4(v1 + 1088, v1[1970] + 28, 2);
    Function_21d4aa4(v1 + 1186, v1[1970] + 28, 1);
    Function_21d4aa4(v1 + 1284, v1[1970] + 28, 0);
    Function_21d4aa4(v1 + 1382, v1[1970] + 28, 1);
    Function_21d4aa4(v1 + 1480, v1[1970] + 28, 1);
    ++*v1;
  }
  else
  {
    Function_21d2324((int)a1);
    Function_21d4e58(v1 + 2);
    ++*v1;
  }
  return 1;
}

//----- (021D2E0C) --------------------------------------------------------
int __fastcall Function_21d2e0c(int a1)
{
  int v1;

  v1 = a1;
  Call_G3X_Reset();
  Function_20203ec();
  Function_21d47a0(*(uint *)(v1 + 7880));
  Function_21d4844(*(uint *)(v1 + 7880));
  Function_21d49b4(v1 + 432);
  Function_21d49b4(v1 + 1216);
  Function_21d49b4(v1 + 1608);
  Function_21d49b4(v1 + 824);
  Function_21d49b4(v1 + 4744);
  Function_21d49b4(v1 + 5136);
  Function_21d49b4(v1 + 2784);
  Function_21d49b4(v1 + 3176);
  Function_21d49b4(v1 + 3568);
  Function_21d49b4(v1 + 3960);
  Function_21d49b4(v1 + 4352);
  Function_21d49b4(v1 + 2000);
  Function_21d49b4(v1 + 2392);
  Function_21d49b4(v1 + 5528);
  Function_21d49b4(v1 + 5920);
  Function_21d49b4(v1 + 6312);
  Function_21d49b4(v1 + 6704);
  Function_21d49b4(v1 + 7096);
  Function_21d49b4(v1 + 7488);
  return Function_20241bc(0, 1);
}

//----- (021D2F0C) --------------------------------------------------------
uint __fastcall Function_21d2f0c(uint *a1, int a2)
{
  uint *v2;
  int v3;

  v2 = a1;
  v3 = a2;
  LoadFromNARC_RGCN(12, 10, a1, 4u, 0, 0, 1, 111);
  LoadFromNARC_RCSN(12, 11, v2, 4u, 0, 0, 1, 111);
  return Function_2003050(v3, 12, 12, 111, 1, 32, 0);
}

//----- (021D2F64) --------------------------------------------------------
uint *__fastcall Function_21d2f64(int a1)
{
  int v1;

  v1 = a1;
  Function_21d4ac8(a1 + 2368, 84, **(uint **)(a1 + 7464));
  Function_21d4b4c(0, v1 + 2368, 82, **(uint **)(v1 + 7464), *(uint *)(v1 + 7464) + 28);
  Function_21d4b4c(1, v1 + 2368, 83, **(uint **)(v1 + 7464), *(uint *)(v1 + 7464) + 28);
  Function_2017350((uint *)(v1 + 2368), -196608, -20480, -286720);
  *(uint *)(v1 + 2720) = 0;
  Function_21d4b10(v1 + 2368, v1 + 2760, 84, **(uint **)(v1 + 7464));
  Function_21d4ba0(0, v1 + 2368, v1 + 2760, 82, **(uint **)(v1 + 7464), *(uint *)(v1 + 7464) + 28);
  Function_21d4ba0(1, v1 + 2368, v1 + 2760, 83, **(uint **)(v1 + 7464), *(uint *)(v1 + 7464) + 28);
  Function_2017350((uint *)(v1 + 2760), 196608, -20480, -286720);
  *(uint *)(v1 + 3112) = 0;
  *(uint *)(v1 + 2704) = 410;
  *(uint *)(v1 + 3096) = 410;
  Function_201736c((uint *)(v1 + 2368), *(uint *)(v1 + 2704), 4096, *(uint *)(v1 + 2704));
  return Function_201736c((uint *)(v1 + 2760), *(uint *)(v1 + 3096), 4096, *(uint *)(v1 + 3096));
}

//----- (021D3084) --------------------------------------------------------
int __fastcall Function_21d3084(int a1)
{
  int v1;
  int v2;
  uint *v3;
  int result;

  v1 = a1;
  Function_21d4ac8(a1 + 16, 46, **(uint **)(a1 + 7464));
  Function_21d4ac8(v1 + 800, 24, **(uint **)(v1 + 7464));
  Function_21d4b4c(0, v1 + 800, 22, **(uint **)(v1 + 7464), *(uint *)(v1 + 7464) + 28);
  Function_21d4b4c(1, v1 + 800, 23, **(uint **)(v1 + 7464), *(uint *)(v1 + 7464) + 28);
  Function_21d4ac8(v1 + 4328, 79, **(uint **)(v1 + 7464));
  Function_21d4b4c(0, v1 + 4328, 77, **(uint **)(v1 + 7464), *(uint *)(v1 + 7464) + 28);
  Function_21d4b4c(1, v1 + 4328, 78, **(uint **)(v1 + 7464), *(uint *)(v1 + 7464) + 28);
  Function_21d4b4c(2, v1 + 4328, 80, **(uint **)(v1 + 7464), *(uint *)(v1 + 7464) + 28);
  Function_21d4b4c(3, v1 + 4328, 81, **(uint **)(v1 + 7464), *(uint *)(v1 + 7464) + 28);
  Function_2017350((uint *)(v1 + 4328), -196608, -40960, -286720);
  *(uint *)(v1 + 4680) = 0;
  *(uint *)(v1 + 4696) = 0;
  Function_21d4ac8(v1 + 4720, 79, **(uint **)(v1 + 7464));
  Function_21d4b4c(0, v1 + 4720, 77, **(uint **)(v1 + 7464), *(uint *)(v1 + 7464) + 28);
  Function_21d4b4c(1, v1 + 4720, 78, **(uint **)(v1 + 7464), *(uint *)(v1 + 7464) + 28);
  Function_21d4b4c(2, v1 + 4720, 80, **(uint **)(v1 + 7464), *(uint *)(v1 + 7464) + 28);
  Function_21d4b4c(3, v1 + 4720, 81, **(uint **)(v1 + 7464), *(uint *)(v1 + 7464) + 28);
  Function_2017350((uint *)(v1 + 4720), 196608, -40960, -286720);
  v2 = 0;
  *(uint *)(v1 + 5072) = 0;
  *(uint *)(v1 + 5088) = 0;
  v3 = (uint *)(v1 + 5896);
  do
  {
    Function_21d4ac8(v3, 65, **(uint **)(v1 + 7464));
    Function_201736c(v3, 4915, 4096, 4915);
    ++v2;
    v3 += 98;
  }
  while ( v2 < 4 );
  Function_21d4ac8(v1 + 1584, 66, **(uint **)(v1 + 7464));
  Function_2017350((uint *)(v1 + 1584), -204800, 0, -204800);
  Function_21d4b4c(0, v1 + 1584, 67, **(uint **)(v1 + 7464), *(uint *)(v1 + 7464) + 28);
  *(uint *)(v1 + 1936) = 1;
  *(uint *)(v1 + 1940) = 1;
  *(uint *)(v1 + 1924) = 2048;
  Function_2017348(v1 + 1584, 0);
  Function_2017348(v1 + 5896, 0);
  Function_21d4ac8(v1 + 1976, 68, **(uint **)(v1 + 7464));
  Function_2017350((uint *)(v1 + 1976), 204800, 0, -204800);
  Function_21d4b4c(0, v1 + 1976, 69, **(uint **)(v1 + 7464), *(uint *)(v1 + 7464) + 28);
  *(uint *)(v1 + 2328) = 1;
  *(uint *)(v1 + 2332) = 1;
  *(uint *)(v1 + 2316) = 2048;
  Function_2017348(v1 + 1976, 0);
  Function_2017348(v1 + 6288, 0);
  if ( GetGender(*(uint *)(*(uint *)(v1 + 7468) + 8)) == 1 )
  {
    Function_21d4ac8(v1 + 5112, 63, **(uint **)(v1 + 7464));
    Function_21d4b4c(0, v1 + 5112, 64, **(uint **)(v1 + 7464), *(uint *)(v1 + 7464) + 28);
  }
  else
  {
    Function_21d4ac8(v1 + 5112, 61, **(uint **)(v1 + 7464));
    Function_21d4b4c(0, v1 + 5112, 62, **(uint **)(v1 + 7464), *(uint *)(v1 + 7464) + 28);
  }
  Function_2017350((uint *)(v1 + 5112), 4096, 0, 573440);
  *(uint *)(v1 + 5468) = 1;
  *(uint *)(v1 + 5452) = 1024;
  *(uint *)(v1 + 5456) = 2;
  Function_21d4ac8(v1 + 5504, 13, **(uint **)(v1 + 7464));
  Function_2017350((uint *)(v1 + 5504), 4096, 0, 245760);
  Function_21d4b4c(0, v1 + 5504, 14, **(uint **)(v1 + 7464), *(uint *)(v1 + 7464) + 28);
  *(uint *)(v1 + 5860) = 1;
  *(uint *)(v1 + 5844) = 1024;
  result = 2;
  *(uint *)(v1 + 5848) = 2;
  return result;
}

//----- (021D3400) --------------------------------------------------------
int __fastcall Function_21d3400(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  Function_21d4aa4(a1 + 16, *(uint *)(a1 + 7464) + 28, 0);
  v2 = 0;
  v3 = v1 + 5896;
  do
  {
    Function_21d4aa4(v3, *(uint *)(v1 + 7464) + 28, 0);
    ++v2;
    v3 += 392;
  }
  while ( v2 < 4 );
  Function_21d4aa4(v1 + 800, *(uint *)(v1 + 7464) + 28, 2);
  Function_21d4aa4(v1 + 1584, *(uint *)(v1 + 7464) + 28, 1);
  Function_21d4aa4(v1 + 1976, *(uint *)(v1 + 7464) + 28, 1);
  Function_21d4aa4(v1 + 2368, *(uint *)(v1 + 7464) + 28, 2);
  Function_21d4aa4(v1 + 2760, *(uint *)(v1 + 7464) + 28, 2);
  Function_21d4aa4(v1 + 5112, *(uint *)(v1 + 7464) + 28, 1);
  return Function_21d4aa4(v1 + 5504, *(uint *)(v1 + 7464) + 28, 1);
}

//----- (021D34C0) --------------------------------------------------------
int __fastcall Function_21d34c0(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  Function_21d4aa4(a1 + 1082, a1[1866] + 28, 4);
  Function_21d4aa4(v1 + 1180, v1[1866] + 28, 4);
  v1[1175] = 0;
  result = 5092;
  v1[1273] = 0;
  return result;
}

//----- (021D3504) --------------------------------------------------------
int *__fastcall Function_21d3504(int a1, uint *a2)
{
  int v2;
  short v4;
  short v5;
  short v6;
  short v7;

  v2 = a1;
  v4 = -10750;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  Function_20206d0(a2, 1296389, &v4, 3073, 0, 1, a1);
  Function_20203d4(v2);
  return Function_20206bc(40960, 4128768, v2);
}

//----- (021D3558) --------------------------------------------------------
int __fastcall Function_21d3558(int a1)
{
  int v1;

  v1 = a1;
  Call_G3X_Reset();
  Function_20203ec();
  Function_21d47a0(*(uint *)(v1 + 7464));
  Function_21d4844(*(uint *)(v1 + 7464));
  Function_21d49b4(v1 + 16);
  Function_21d49b4(v1 + 800);
  Function_21d49b4(v1 + 1584);
  Function_21d49b4(v1 + 1976);
  Function_21d49b4(v1 + 4328);
  Function_21d49b4(v1 + 4720);
  Function_21d49b4(v1 + 2368);
  Function_21d49b4(v1 + 2760);
  Function_21d49b4(v1 + 5112);
  Function_21d49b4(v1 + 5504);
  Function_21d49b4(v1 + 5896);
  Function_21d49b4(v1 + 6288);
  Function_21d49b4(v1 + 6680);
  Function_21d49b4(v1 + 7072);
  return Function_20241bc(0, 1);
}

//----- (021D3620) --------------------------------------------------------
int *__fastcall Function_21d3620(int a1)
{
  int v1;
  int *v2;
  int v3;
  short v4;

  v1 = a1;
  v2 = (int *)malloc(0x6Fu, 7520);
  Call_FillMemWithValue(v2, 0, 0x1D60u);
  v2[1866] = v1 + 12;
  v2[1867] = *(uint *)(v1 + 208);
  Function_21d3084((int)v2);
  Function_21d2f0c(*(uint **)(v2[1866] + 12), *(uint *)(v2[1866] + 16));
  G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 4, 50, 7, 8);
  G2x_SetBlendAlpha_((int *)&REG_BLDCNT_SUB, 3, 18, 7, 10);
  v3 = GFX_CONTROL & 0xCFFF;
  GFX_CONTROL = v3 | 0x20;
  SetEdgeTable((int)"B\bJ)J)J)J)J)J)J)", v3, (int)&GFX_CONTROL, v4);
  *(uint *)(v2[1866] + 76) = 139264;
  Function_21d3504(*(uint *)(v2[1866] + 24), (uint *)(v2[1866] + 68));
  Function_2004550(0x3Fu, 0);
  return v2;
}

//----- (021D36CC) --------------------------------------------------------
int __fastcall Function_21d36cc(int *a1, int *a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  int result;

  v2 = a2;
  v3 = a2[1];
  if ( v3 )
  {
    if ( v3 != 1 )
      return Call_RemoveTaskFromTaskList(a1);
  }
  else
  {
    *(uint *)(v2[4] + 8) = 2;
    v4 = *v2;
    if ( v2[2] )
    {
      if ( v4 != 4 && v4 != 6 )
      {
        switch ( v4 )
        {
          case 5:
            *(uint *)(v2[4] + 24) = 0x4000;
            break;
          case 255:
            *(uint *)(v2[4] + 24) = 24576;
            break;
          case 7:
            *(uint *)(v2[4] + 24) = 0x2000;
            *(uint *)(v2[4] + 8) = 4;
            break;
        }
      }
      else
      {
        *(uint *)(v2[4] + 24) = 0x2000;
      }
    }
    else if ( v4 != 4 && v4 != 6 )
    {
      switch ( v4 )
      {
        case 5:
          *(uint *)(v2[4] + 24) = -16384;
          break;
        case 255:
          *(uint *)(v2[4] + 24) = -24576;
          break;
        case 7:
          *(uint *)(v2[4] + 24) = -8192;
          *(uint *)(v2[4] + 8) = 4;
          break;
      }
    }
    else
    {
      *(uint *)(v2[4] + 24) = -8192;
    }
    v2[2] ^= 1u;
    *(uint *)(v2[4] + 28) = 0;
    *(uint *)(v2[4] + 32) = 0;
    Function_21d4890(v2[4]);
    ++v2[1];
  }
  result = Function_21d4920(v2[4]);
  if ( result )
  {
    v5 = v2[1];
    if ( *v2 == 8 )
      result = v5 + 1;
    else
      result = v5 - 1;
    v2[1] = result;
  }
  return result;
}

//----- (021D37B0) --------------------------------------------------------
uint *__fastcall Function_21d37b0(int a1)
{
  *(uint *)(*(uint *)(a1 + 7464) + 100) = 0;
  *(uint *)(*(uint *)(a1 + 7464) + 104) = 0;
  *(uint *)(*(uint *)(a1 + 7464) + 108) = 0;
  *(uint *)(*(uint *)(a1 + 7464) + 92) = *(uint *)(a1 + 7464) + 68;
  *(uint *)(*(uint *)(a1 + 7464) + 188) = *(uint *)(a1 + 7464) + 88;
  *(uint *)(*(uint *)(a1 + 7464) + 172) = 0;
  return AddTaskToTaskList1((int)Function_21d36cc, *(uint *)(a1 + 7464) + 172, 0x1000u);
}

//----- (021D37F4) --------------------------------------------------------
uint *__fastcall Function_21d37f4(int *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  uchar v6;
  char v7;
  int v8;
  uint v9;
  int v10;
  int v11;
  int v12;
  int v13;
  uint v14;
  int v15;
  int v16;
  uint v17;
  int v18;
  int v19;
  uint v20;
  int v21;
  int v22;
  int v23;
  int v24;
  uint v25;
  int v26;
  int v27;
  uint *result;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;

  v36 = a4;
  v4 = (uint *)a2;
  v29 = *(uint *)"";
  v30 = 1050253722;
  v31 = 1058642330;
  v32 = 1065353216;
  v33 = 1067030938;
  v34 = 1066192077;
  v35 = 1065353216;
  if ( *(uint *)a2 )
  {
    if ( *(uint *)a2 == 1 )
    {
      v17 = *(uint *)(a2 + 4) + 1;
      *(uint *)(a2 + 4) = v17;
      if ( v17 < 7 )
      {
        v18 = 4 * v17;
        Function_20e1108(*(&v29 + v17), 0);
        if ( !v7 & v6 )
        {
          v19 = fmul(0x45800000u, *(int *)((char *)&v29 + v18));
          v21 = fadd(0x3F000000u, v19);
        }
        else
        {
          v20 = fmul(0x45800000u, *(int *)((char *)&v29 + v18));
          v21 = fsub(v20, 1056964608);
        }
        v22 = ffix(v21);
        Function_201736c((uint *)v4[4], v22, 4096, 4096);
        v23 = 4 * v4[1];
        Function_20e1108(*(int *)((char *)&v29 + v23), 0);
        if ( !v7 & v6 )
        {
          v24 = fmul(0x45800000u, *(int *)((char *)&v29 + v23));
          v26 = fadd(0x3F000000u, v24);
        }
        else
        {
          v25 = fmul(0x45800000u, *(int *)((char *)&v29 + v23));
          v26 = fsub(v25, 1056964608);
        }
        v27 = ffix(v26);
        result = Function_201736c((uint *)v4[5], v27, 4096, 4096);
      }
      else
      {
        Function_20059d0(0, *(uint *)(a2 + 8) & 0xFFFF, *(short *)(a2 + 12), 80, 111, 0);
        result = (uint *)(*v4 + 1);
        *v4 = result;
      }
    }
    else
    {
      result = (uint *)Call_RemoveTaskFromTaskList(a1);
    }
  }
  else
  {
    v5 = 4 * *(uint *)(a2 + 4);
    Function_20e1108(*(int *)((char *)&v29 + v5), 0);
    if ( !v7 & v6 )
    {
      v8 = fmul(0x45800000u, *(int *)((char *)&v29 + v5));
      v10 = fadd(0x3F000000u, v8);
    }
    else
    {
      v9 = fmul(0x45800000u, *(int *)((char *)&v29 + v5));
      v10 = fsub(v9, 1056964608);
    }
    v11 = ffix(v10);
    Function_201736c((uint *)v4[4], v11, 4096, 4096);
    v12 = 4 * v4[1];
    Function_20e1108(*(int *)((char *)&v29 + v12), 0);
    if ( !v7 & v6 )
    {
      v13 = fmul(0x45800000u, *(int *)((char *)&v29 + v12));
      v15 = fadd(0x3F000000u, v13);
    }
    else
    {
      v14 = fmul(0x45800000u, *(int *)((char *)&v29 + v12));
      v15 = fsub(v14, 1056964608);
    }
    v16 = ffix(v15);
    Function_201736c((uint *)v4[5], v16, 4096, 4096);
    ++v4[1];
    Function_2017348(v4[4], 1);
    Function_2017348(v4[5], 1);
    result = (uint *)(*v4 + 1);
    *v4 = result;
  }
  return result;
}

//----- (021D398C) --------------------------------------------------------
uint *__fastcall Function_21d398c(int a1, int a2, int a3)
{
  int v3;

  v3 = a1 + 7472 + 24 * a2;
  *(uint *)v3 = 0;
  *(uint *)(v3 + 4) = 0;
  *(uint *)(v3 + 8) = a3;
  *(uint *)(v3 + 16) = a1 + 1584 + 392 * a2;
  *(uint *)(v3 + 20) = a1 + 5896 + 392 * a2;
  if ( a2 )
    *(ushort *)(v3 + 12) = 80;
  else
    *(ushort *)(v3 + 12) = -80;
  return AddTaskToTaskList1((int)Function_21d37f4, v3, 0x1000u);
}

//----- (021D39E4) --------------------------------------------------------
int __fastcall Function_21d39e4(uint *a1, int a2, char a3)
{
  uint *v3;
  int v4;
  int *v5;
  char *v6;
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
  int result;
  uint *v28;
  int v29;
  uint *v30;
  int v31;
  int v32;
  uint *v33;
  uint *v34;
  int v35;
  char v36;

  v3 = a1;
  v4 = *a1;
  if ( *a1 <= 0x11u )
    JUMPOUT(__CS__, (char *)&off_21D39FE + *((short *)&off_21D39FE + v4) + 2);
  switch ( a3 )
  {
    case 0:
      if ( !Function_200f2ac() )
        goto LABEL_81;
      ++*v3;
      goto LABEL_6;
    case 1:
LABEL_6:
      *(uint *)(v3[1866] + 100) = 0;
      *(uint *)(v3[1866] + 104) = 0;
      *(uint *)(v3[1866] + 108) = 0;
      *(uint *)(v3[1866] + 96) = 60;
      *(uint *)(v3[1866] + 88) = *(uint *)(v3[1866] + 24);
      *(uint *)(v3[1866] + 112) = 0;
      *(uint *)(v3[1866] + 116) = 0;
      *(uint *)(v3[1866] + 120) = -188416;
      *(uint *)(v3[1866] + 92) = v3[1866] + 68;
      Function_21d4890(v3[1866] + 88);
      ++*v3;
      goto LABEL_7;
    case 2:
LABEL_7:
      if ( Function_21d4920(v3[1866] + 88) )
      {
        v3[1] = 0;
        ++*v3;
        Function_21d46c8(v3[1866], v3[1867], 14);
      }
      goto LABEL_81;
    case 3:
      if ( Function_201d724(*(uint *)(a1[1866] + 64) & 0xFF) )
        goto LABEL_81;
      Function_21d4788(v3[1866]);
      Function_21d46c8(v3[1866], v3[1867], 16);
      ++*v3;
      goto LABEL_11;
    case 4:
LABEL_11:
      if ( Function_201d724(*(uint *)(v3[1866] + 64) & 0xFF) )
        goto LABEL_81;
      v5 = dword_21D52DC;
      v6 = &v36;
      v7 = 5;
      do
      {
        v8 = *v5;
        v9 = v5[1];
        v5 += 2;
        *(uint *)v6 = v8;
        *((uint *)v6 + 1) = v9;
        v6 += 8;
        --v7;
      }
      while ( v7 );
      *(uint *)v6 = *v5;
      *(uint *)(v3[1866] + 84) = Function_21d4ebc(&v36);
      Function_21d37b0((int)v3);
      Function_21d4788(v3[1866]);
      v3[1170] = 1;
      v3[1174] = 1;
      ++*v3;
      goto LABEL_15;
    case 5:
LABEL_15:
      v10 = v3[1] + 1;
      v3[1] = v10;
      if ( v10 >= 60 )
      {
        *(uint *)(v3[1866] + 172) = 4;
        v3[1268] = 1;
        v3[1272] = 1;
        ++*v3;
      }
      goto LABEL_81;
    case 6:
      v11 = a1[1] + 1;
      v3[1] = v11;
      if ( v11 == 80 )
        Function_2005728(0x6D2u, -70);
      if ( v3[1] == 135 )
        Function_2005728(0x6D2u, 70);
      v12 = v3[1];
      if ( v12 == 310 || v12 == 375 || v12 == 432 )
        Function_2005748(0x6D4u);
      v13 = v3[1];
      if ( v13 == 284 || v13 == 338 || v13 == 406 )
        Function_2005748(0x6D5u);
      if ( v3[1] == 165 )
        Function_2005728(0x6D3u, -70);
      if ( v3[1] == 220 )
        Function_2005728(0x6D3u, 70);
      if ( v3[1] == 470 )
        Function_2005728(0x6D6u, -70);
      if ( v3[1] == 520 )
        Function_2005728(0x6D6u, 70);
      if ( v3[1] == 120 )
        *(uint *)(v3[1866] + 172) = 5;
      if ( v3[1] == 210 )
        *(uint *)(v3[1866] + 172) = 255;
      if ( !v3[1170] )
      {
        *(uint *)(v3[1866] + 172) = 6;
        Function_21d398c((int)v3, 0, 483);
        Function_2005728(0x6D7u, -70);
        ++*v3;
      }
      goto LABEL_81;
    case 7:
      if ( !a1[1268] )
      {
        *(uint *)(a1[1866] + 172) = 7;
        Function_21d398c((int)a1, 1, 484);
        Function_2005728(0x6D7u, 70);
        ++*v3;
        v3[1] = 0;
      }
      goto LABEL_81;
    case 8:
      v14 = a1[1] + 1;
      v3[1] = v14;
      if ( v14 >= 30 )
      {
        v3[1] = 0;
        ++*v3;
      }
      goto LABEL_81;
    case 9:
      *(uint *)(a1[1866] + 172) = 8;
      v15 = a1[1866];
      if ( a1[2] )
      {
        v17 = *(char *)(v15 + 83);
        if ( v17 <= 0 )
        {
          ++*v3;
          v3[2] = 0;
        }
        else
        {
          *(uchar *)(v15 + 83) = v17 - 2;
          G2x_SetBlendBrightness_(&REG_BLDCNT, 49, *(char *)(v3[1866] + 83));
        }
      }
      else
      {
        v16 = *(char *)(v15 + 83);
        if ( v16 >= 8 )
        {
          v3[2] = 1;
        }
        else
        {
          *(uchar *)(v15 + 83) = v16 + 1;
          G2x_SetBlendBrightness_(&REG_BLDCNT, 49, *(char *)(v3[1866] + 83));
        }
      }
      goto LABEL_81;
    case 10:
      if ( a1[2] )
      {
        v20 = a1[1866];
        v21 = *(char *)(v20 + 83);
        if ( v21 <= 0 )
        {
          *v3 = v4 + 1;
          v3[2] = 0;
        }
        else
        {
          *(uchar *)(v20 + 83) = v21 - 2;
          G2x_SetBlendBrightness_(&REG_BLDCNT, 49, *(char *)(v3[1866] + 83));
        }
      }
      else
      {
        v18 = a1[1866];
        v19 = *(char *)(v18 + 83);
        if ( v19 >= 12 )
        {
          v3[2] = 1;
        }
        else
        {
          *(uchar *)(v18 + 83) = v19 + 1;
          G2x_SetBlendBrightness_(&REG_BLDCNT, 49, *(char *)(v3[1866] + 83));
        }
      }
      goto LABEL_81;
    case 11:
      v22 = a1[1866];
      v23 = *(char *)(v22 + 83);
      if ( v23 >= 16 )
      {
        Function_21d34c0(a1);
        Function_21d2f64((int)v3);
        ++*v3;
      }
      else
      {
        *(uchar *)(v22 + 83) = v23 + 2;
        G2x_SetBlendBrightness_(&REG_BLDCNT, 49, *(char *)(a1[1866] + 83));
      }
      goto LABEL_81;
    case 12:
      v24 = a1[1866];
      if ( *(uchar *)(v24 + 83) )
      {
        --*(uchar *)(v24 + 83);
        G2x_SetBlendBrightness_(&REG_BLDCNT, 49, *(char *)(a1[1866] + 83));
      }
      else
      {
        a1[680] = 1;
        a1[681] = 1;
        a1[683] = 1;
        a1[778] = 1;
        a1[779] = 1;
        a1[781] = 1;
        ++*a1;
      }
      goto LABEL_81;
    case 13:
      v25 = a1[676];
      if ( v25 >= 3277 )
      {
        Function_21d46c8(v3[1866], v3[1867], 18);
        ++*v3;
      }
      else
      {
        v3[676] = v25 + 82;
        v3[774] += 82;
        Function_201736c(v3 + 592, v3[676], 4096, v3[676]);
        Function_201736c(v3 + 690, v3[774], 4096, v3[774]);
      }
      goto LABEL_81;
    case 14:
      if ( !Function_201d724(*(uint *)(a1[1866] + 64) & 0xFF) )
      {
        Function_21d4788(v3[1866]);
        Function_21d46c8(v3[1866], v3[1867], 19);
        ++*v3;
      }
      goto LABEL_81;
    case 15:
      if ( !Function_201d724(*(uint *)(a1[1866] + 64) & 0xFF) )
      {
        v26 = v3[676];
        if ( v26 <= 410 )
        {
          Function_200f174(0, 0, 0, 0, 6, 1, 111);
          ++*v3;
        }
        else
        {
          v3[676] = v26 - 82;
          v3[774] -= 82;
          Function_201736c(v3 + 592, v3[676], 4096, v3[676]);
          Function_201736c(v3 + 690, v3[774], 4096, v3[774]);
        }
      }
      goto LABEL_81;
    case 16:
      if ( Function_200f2ac() )
      {
        Function_21d4788(v3[1866]);
        ++*v3;
      }
      goto LABEL_81;
    case 17:
      result = 0;
      *v3 = 0;
      v3[1] = 0;
      break;
    default:
LABEL_81:
      v28 = v3 + 1495;
      v29 = v3[418];
      *v28 = v3[417];
      v28[1] = v29;
      v3[1497] = v3[419];
      v30 = v3 + 1593;
      v31 = v3[516];
      *v30 = v3[515];
      v30[1] = v31;
      v3[1595] = v3[517];
      v32 = v3[1300];
      v33 = v3 + 1691;
      *v33 = v3[1299];
      v33[1] = v32;
      v3[1693] = v3[1301];
      v34 = v3 + 1789;
      v35 = v3[1398];
      *v34 = v3[1397];
      v34[1] = v35;
      v3[1791] = v3[1399];
      v3[1497] -= 0x2000;
      v3[1595] -= 0x2000;
      v3[1693] -= 0x2000;
      v3[1791] -= 0x2000;
      *v33 -= 4096;
      v3[1789] -= 4096;
      Function_21d3558((int)v3);
      result = 1;
      break;
  }
  return result;
}

//----- (021D3FD4) --------------------------------------------------------
int __fastcall Function_21d3fd4(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  if ( *a1 )
  {
    free((int)a1);
    result = 0;
  }
  else
  {
    Function_21d3400((int)a1);
    Function_21d4f0c(v1[1866] + 84);
    ++*v1;
    result = 1;
  }
  return result;
}

//----- (021D400C) --------------------------------------------------------
int __fastcall Function_21d400c(int a1, int a2, int a3, int a4, uint *a5, uint *a6, uint a7, short a8)
{
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint v13;
  int v14;
  uint v15;
  uchar v16;
  char v17;
  int v18;
  uint v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  uint v26;
  int v27;
  uint v28;
  int v29;
  int v31;
  int v32;

  v8 = a2;
  v9 = a3;
  v10 = a4;
  v11 = fflt(a1);
  v31 = fsub(v11, v9);
  v12 = fflt(v8);
  v32 = fsub(v12, v10);
  v13 = fmul(v31, v31);
  v14 = fmul(v32, v32);
  v15 = fadd(v13, v14);
  Function_20e1108(v15, 0);
  if ( !v17 & v16 )
  {
    v18 = fmul(0x45800000u, v15);
    v20 = fadd(0x3F000000u, v18);
  }
  else
  {
    v19 = fmul(0x45800000u, v15);
    v20 = fsub(v19, 1056964608);
  }
  v21 = ffix(v20);
  v22 = FX_Sqrt(v21);
  v23 = fflt(v22);
  v24 = f_div(v23, 0x45800000u);
  Function_20e11cc(v24, a7);
  if ( !v16 )
    return 0;
  v25 = fflt(a8);
  Function_20e1108(v25, v24);
  if ( !v17 & v16 )
    return 0;
  Function_20e1228(0, v24);
  if ( v17 )
    return 0;
  v26 = fmul(v31, a7);
  v27 = f_div(v26, v24);
  v28 = fmul(v32, a7);
  v29 = f_div(v28, v24);
  *a5 = fadd(v27, 0);
  *a6 = fadd(v29, 0);
  return 1;
}

//----- (021D4104) --------------------------------------------------------
int __fastcall Function_21d4104(int **a1, int a2, int a3, int a4, short a5)
{
  int v5;
  int **v6;
  uint v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uchar v13;
  char v14;
  int v15;
  uint v16;
  int v17;
  uint v18;
  int v19;
  uint v20;
  int v21;
  uint v22;
  uint v23;
  int *v24;
  uint v25;
  uint v26;
  int v27;
  int v29;
  uint v30;
  uint v31;
  int v32;
  int v33;
  int v34;

  v34 = a4;
  v5 = a3;
  v6 = a1;
  v7 = a4;
  v8 = a2;
  Function_200d67c(*a1, &v33, &v32, 786432);
  v9 = fflt(v33);
  v10 = f_div(v9, 0x45800000u);
  v11 = fflt(v32);
  v12 = f_div(v11, 0x45800000u);
  v29 = Function_21d400c(v8, v5, v10, v12, &v31, &v30, v7, a5);
  if ( v29 )
  {
    Function_20e1108(v31, 0);
    if ( !v14 & v13 )
    {
      v15 = fmul(0x45800000u, v31);
      v17 = fadd(0x3F000000u, v15);
    }
    else
    {
      v16 = fmul(0x45800000u, v31);
      v17 = fsub(v16, 1056964608);
    }
    v18 = ffix(v17);
    Function_20e1108(v30, 0);
    if ( !v14 & v13 )
    {
      v19 = fmul(0x45800000u, v30);
      v21 = fadd(0x3F000000u, v19);
    }
    else
    {
      v20 = fmul(0x45800000u, v30);
      v21 = fsub(v20, 1056964608);
    }
    v22 = ffix(v21);
    v23 = (uint)(v6[8] + 2);
    v6[8] = (int *)v23;
    s32_div_f(v23, 360);
    v6[8] = v24;
    v25 = Function_201d250((ushort)v24);
    v26 = Function_201d264((uint)v6[8] & 0xFFFF);
    Function_200d5e8(*v6, v18 + v25, v22 + v26, v27);
  }
  return v29;
}

//----- (021D41FC) --------------------------------------------------------
int __fastcall Function_21d41fc(int **a1)
{
  return Function_21d4104(a1, 128, 40, 1084227584, 32);
}

//----- (021D4214) --------------------------------------------------------
int __fastcall Function_21d4214(int a1)
{
  int v1;
  uint v2;
  int v3;
  uint v4;
  int v5;
  int result;

  v1 = a1;
  v2 = *(uint *)(a1 + 28) + 8;
  *(uint *)(v1 + 28) = v2;
  s32_div_f(v2, 360);
  *(uint *)(v1 + 28) = v3;
  v4 = Function_201d250((ushort)v3) << 6;
  v5 = 24 * Function_201d264(*(uint *)(v1 + 28) & 0xFFFF) + 196608;
  Function_200d650(*(int **)v1, v4 + 0x80000, v5, 786432);
  result = v5 / 4096;
  *(ushort *)(v1 + 20) = v5 / 4096;
  return result;
}

//----- (021D4264) --------------------------------------------------------
int __fastcall Function_21d4264(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  uint v7;
  int v8;
  int v9;
  int v10;
  uint v11;
  uint v12;

  v5 = a1;
  v6 = a2;
  v7 = *(uint *)(a1 + 28) + 8;
  v8 = a3;
  v9 = a4;
  *(uint *)(v5 + 28) = v7;
  s32_div_f(v7, 360);
  *(uint *)(v5 + 28) = v10;
  v11 = v9 * Function_201d250((ushort)v10);
  v12 = Function_201d264(*(uint *)(v5 + 28) & 0xFFFF);
  return Function_200d650(*(int **)v5, (v6 << 12) + v11, (v8 << 12) + a5 * v12, 786432);
}

//----- (021D42B0) --------------------------------------------------------
int __fastcall Function_21d42b0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int result;
  int v10;
  char v11;
  int v12;

  v12 = a4;
  v4 = a1;
  if ( !Function_21d4104(
          (int **)a1,
          aApwjf[2 * *(uint *)(a1 + 48)],
          aApwjf[2 * *(uint *)(a1 + 48) + 1],
          1077936128,
          10) )
  {
    v5 = *(uint *)(v4 + 48) + 1;
    *(uint *)(v4 + 48) = v5;
    u32_div_f(v5, 10);
    *(uint *)(v4 + 48) = v6;
    v7 = PRNG();
    u32_div_f(v7, 10);
    *(uint *)(v4 + 48) = v8;
    *(uint *)(v4 + 12) = 3;
  }
  Function_200d67c(*(int **)v4, &v11, &v10, 786432);
  result = v10 / 4096;
  *(ushort *)(v4 + 20) = v10 / 4096;
  return result;
}

//----- (021D4318) --------------------------------------------------------
int __fastcall Function_21d4318(int a1)
{
  int v1;
  uint v2;
  int v3;
  uint v4;
  int v5;
  uint v6;
  int v7;
  uint v8;
  int v9;
  int result;
  int v11;
  int v12;

  v1 = a1;
  v2 = *(uint *)(a1 + 32) + 8;
  *(uint *)(v1 + 32) = v2;
  s32_div_f(v2, 360);
  *(uint *)(v1 + 32) = v3;
  if ( v3 < 12 )
  {
    v4 = *(uint *)(v1 + 36) + 1;
    *(uint *)(v1 + 36) = v4;
    s32_div_f(v4, 3);
    *(uint *)(v1 + 36) = v5;
    v6 = PRNG();
    s32_div_f(v6, *(uint *)(v1 + 36));
    *(uint *)(v1 + 40) = v7 + 1;
    v8 = PRNG();
    s32_div_f(v8, *(uint *)(v1 + 36));
    *(uint *)(v1 + 44) = v9 + 1;
    *(uint *)(v1 + 12) = 2;
  }
  Function_200d67c(*(int **)v1, &v12, &v11, 786432);
  v12 += Function_201d250(*(uint *)(v1 + 32) & 0xFFFF) * 3 * *(uint *)(v1 + 40);
  v11 += Function_201d264(*(uint *)(v1 + 32) & 0xFFFF) * 3 * *(uint *)(v1 + 44);
  Function_200d650(*(int **)v1, v12, v11, 786432);
  result = v11 / 4096;
  *(ushort *)(v1 + 20) = v11 / 4096;
  return result;
}

//----- (021D43BC) --------------------------------------------------------
int __fastcall Function_21d43bc(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  uchar v5;
  char v6;

  v1 = a1;
  v2 = fflt(*(short *)(a1 + 20));
  v3 = f_div(v2, 0x42C80000u);
  v4 = fsub(0x3F4CCCCDu, v3);
  Function_20e1164(v4, 1045220557);
  if ( !(!v6 & v5) )
    v4 = 1045220557;
  Function_20e10ac(v4, 1058642330);
  if ( v5 )
    v4 = 1058642330;
  Function_200d6e8(*(int **)v1, v4, v4);
  return Function_200d474(*(int **)v1, *(ushort *)(v1 + 20));
}

//----- (021D4414) --------------------------------------------------------
uint __fastcall Function_21d4414(int a1, int a2)
{
  int **v2;

  v2 = (int **)a2;
  ((void (__fastcall *)(int))*(&off_21D5334 + *(uint *)(a2 + 12)))(a2);
  Function_21d43bc((int)v2);
  return Function_200d33c(*v2);
}

//----- (021D4438) --------------------------------------------------------
uint __fastcall Function_21d4438(int a1, int **a2)
{
  int **v2;
  int *v3;
  uchar v4;
  char v5;
  short v7[2];
  int v8;
  char v9;
  int v10;

  v2 = a2;
  if ( a2[3] )
  {
    Function_21d4264((int)a2, 128, 36, 32, 12);
  }
  else
  {
    v3 = a2[1];
    if ( v3 && a2[15] )
    {
      Function_200d550(v3, &v8, v7);
      Function_21d4104(v2, (short)v8, v7[0], 1077936128, 1);
      Function_200d788(*v2, (uint *)&v10, (uint *)&v9);
      Function_20e1108(v10, 1036831949);
      if ( !v5 & v4 )
        v10 = fsub(v10, 990057071);
      Function_200d6e8(*v2, v10, v10);
    }
  }
  return Function_200d33c(*v2);
}

//----- (021D44C0) --------------------------------------------------------
uint *__fastcall Function_21d44c0(uint *result, int a2)
{
  result[88] = 1;
  result[97] = a2;
  result[96] = 0;
  result[94] = *(uint *)(a2 + 12 * result[96] + 4);
  result[95] = *(uint *)(a2 + 12 * result[96] + 4);
  result[86] = *(uint *)(a2 + 12 * result[96]);
  return result;
}

//----- (021D4510) --------------------------------------------------------
int *__fastcall Function_21d4510(uint *a1)
{
  uint *v1;
  uint v2;
  int v3;
  uint v4;
  int *result;
  int v6;
  int v7;
  int v8;

  v1 = a1;
  v2 = Function_2017248((int)(a1 + 34));
  v3 = (v2 >> 31) + __ROR4__(((int)v2 >> 12 << 30) - (v2 >> 31), 30);
  v4 = v2 + v1[85];
  result = (int *)dword_21D5344[5 * (v1[86] - 1) + v1[87]];
  if ( result != (int *)255 )
  {
    if ( (v4 >> 31) + __ROR4__(((int)v4 >> 12 << 30) - (v4 >> 31), 30) != v3 )
    {
      ++v1[87];
      if ( 4 * (int)result <= 0 )
      {
        v8 = fflt((uint)result << 14);
        v7 = fsub(v8, 1056964608);
      }
      else
      {
        v6 = fflt((uint)result << 14);
        v7 = fadd(0x3F000000u, v6);
      }
      v4 = ffix(v7);
    }
    result = Function_2017240((int)(v1 + 34), v4);
  }
  return result;
}

//----- (021D45A4) --------------------------------------------------------
uint *__fastcall Function_21d45a4(uint *result)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = result[94];
  v2 = result[97];
  if ( v1 != 255 )
  {
    v3 = result[96];
    if ( v3 != 255 )
    {
      v4 = 12 * v3;
      if ( *(uint *)(v2 + 12 * v3) )
      {
        v5 = result[87];
        if ( v5 < 4 )
        {
          if ( v5 || v1 != result[95] )
          {
            switch ( (uchar)result[86] )
            {
              case 1u:
              case 2u:
              case 9u:
                result[23] -= *(uint *)(v2 + v4 + 8);
                break;
              case 3u:
              case 4u:
                result[21] += *(uint *)(v2 + v4 + 8);
                break;
              default:
                return result;
            }
          }
        }
        else
        {
          --result[94];
          result[87] = 0;
          if ( !result[94] )
          {
            result[86] = *(uint *)(v2 + 12 * ++result[96]);
            result[94] = *(uint *)(v2 + 12 * result[96] + 4);
            result[95] = *(uint *)(v2 + 12 * result[96] + 4);
            if ( !result[86] )
            {
              result[88] = 0;
              result[96] = 255;
              result[94] = 255;
              result[95] = 255;
            }
          }
        }
      }
      else
      {
        result[88] = 0;
        result[96] = 255;
        result[94] = 255;
        result[95] = 255;
      }
    }
  }
  return result;
}

//----- (021D46C8) --------------------------------------------------------
int __fastcall Function_21d46c8(int a1, int a2, uint a3)
{
  int v3;
  int v4;
  uint v5;
  ushort *v6;
  ushort *v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  ushort *v16;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = (ushort *)Function_2023790(511, 0x6Fu);
  v16 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v3 + 44), v5);
  if ( v5 == 22 )
  {
    v7 = Function_2025f04(*(ushort **)(v4 + 8), 0x6Fu);
    v8 = (int *)Function_200b358(0x6Fu);
    Function_200b48c(v8, 0, (int)v7);
    Function_200c388((uint *)v8, (int)v6, (int)v16);
    Function_20237bc_FreeMsg((int)v7, v9);
    Function_200b3f0((uint *)v8, v10);
  }
  else
  {
    Function_2023810(v6, (int)v16);
  }
  Function_2027ac0(*(ushort **)(v4 + 4));
  Function_201ada4_ClearTextBox(v3 + 48, 255);
  v11 = Function_201d738_CallInitTextInterpreter(v3 + 48, 1);
  Function_201a954(v3 + 48, v12);
  Function_200e060(v3 + 48, 0, 500, 0xFu);
  Function_20237bc_FreeMsg((int)v16, v13);
  Function_20237bc_FreeMsg((int)v6, v14);
  *(uint *)(v3 + 64) = v11;
  return v11;
}

//----- (021D4788) --------------------------------------------------------
int __fastcall Function_21d4788(int a1)
{
  int v1;

  v1 = a1;
  Function_200e084(a1 + 48, 1);
  return Function_201acf4(v1 + 48);
}

//----- (021D47A0) --------------------------------------------------------
int *Function_21d47a0()
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v4 = 0;
  v5 = -4096;
  v6 = -4096;
  v1 = -2043;
  v2 = -3548;
  v3 = 110;
  VEC_Normalize(&v4, &v4);
  Function_20af51c(0, (short)v4, (short)v5, (short)v6);
  Function_20af558(0, 0x7FFF);
  VEC_Normalize(&v1, &v1);
  Function_20af51c(1, (short)v1, (short)v2, (short)v3);
  Function_20af558(1, 26359);
  Function_20af56c(16912, 14798, 0);
  return Function_20af590(21140, 16912, 0);
}

//----- (021D4844) --------------------------------------------------------
int __fastcall Function_21d4844(int a1, int a2, int a3, int a4)
{
  int v4;
  short v6;
  short v7;
  short v8;
  short v9;
  short v10;
  short v11;
  short v12;
  short v13;
  char v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;

  v20 = a4;
  v4 = a1;
  Function_2020a94(&v6, *(ushort **)(a1 + 24));
  v10 = v6;
  v11 = v7;
  v12 = v8;
  v13 = v9;
  Function_2020abc(&v14, *(uint *)(v4 + 24));
  v17 = *(uint *)&v14;
  v18 = v15;
  v19 = v16;
  Function_2020adc(&v17, *(uint **)(v4 + 24));
  return Function_20209d4(&v10, *(ushort **)(v4 + 24));
}

//----- (021D4890) --------------------------------------------------------
int __fastcall Function_21d4890(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int result;
  short v7;
  short v8;
  ushort v9;
  int v10;

  v10 = a4;
  v4 = a1;
  a1[9] = a1[2];
  a1[10] = s32_div_f(182 * a1[3], a1[2]);
  v4[11] = s32_div_f(182 * v4[4], v4[2]);
  v4[12] = s32_div_f(182 * v4[5], v4[2]);
  v4[15] = s32_div_f(v4[6], v4[2]);
  v4[16] = s32_div_f(v4[7], v4[2]);
  v4[17] = s32_div_f(v4[8], v4[2]);
  Function_2020a94(&v7, (ushort *)*v4);
  *((ushort *)v4 + 38) = v7 + 182 * v4[3];
  *((ushort *)v4 + 39) = v8 + 182 * v4[4];
  v5 = 182 * v4[5];
  result = v9 + v5;
  *((ushort *)v4 + 40) = v9 + v5;
  return result;
}

//----- (021D4920) --------------------------------------------------------
int __fastcall Function_21d4920(ushort **a1, int a2, int a3, int a4)
{
  ushort **v4;
  int v5;
  ushort *v6;
  int v8;
  short v9;
  short v10;
  short v11;
  short v12;
  short v13;
  short v14;
  short v15;
  short v16;
  int v17;

  v17 = a4;
  v4 = a1;
  v5 = 0;
  Function_2020a94(&v9, *a1);
  v13 = v9;
  v14 = v10;
  v15 = v11;
  v16 = v12;
  v6 = v4[9];
  if ( !v6 )
    return 1;
  v8 = (int)v6 - 1;
  v4[9] = (ushort *)v8;
  if ( v8 )
  {
    v13 += (uint)v4[10];
    v14 += (uint)v4[11];
    v15 += (uint)v4[12];
    *(uint *)v4[1] += v4[15];
    *((uint *)v4[1] + 1) += v4[16];
    *((uint *)v4[1] + 2) += v4[17];
  }
  else
  {
    v5 = 1;
    v13 = *((ushort *)v4 + 38);
    v14 = *((ushort *)v4 + 39);
    v15 = *((ushort *)v4 + 40);
  }
  Function_20209d4(&v13, *v4);
  return v5;
}

//----- (021D49B4) --------------------------------------------------------
int *__fastcall Function_21d49b4(int *result, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v8 = a4;
  v4 = result;
  if ( result[93] )
  {
    if ( result[88] )
    {
      v5 = 0;
      if ( result[89] )
      {
        if ( result[86] )
        {
          Function_21d45a4(result);
          Function_21d4510(v4);
        }
        else
        {
          Function_20171cc((int)(result + 34), result[85]);
        }
      }
      else if ( result[92] )
      {
        v6 = 0;
        v7 = (int)(result + 34);
        do
        {
          ++v6;
          v5 = Function_2017204(v7, v4[85]);
          v7 += 20;
        }
        while ( v6 < 4 );
      }
      else
      {
        v5 = Function_2017204((int)(result + 34), result[85]);
      }
      if ( v4[90] )
        Function_20171cc((int)(v4 + 39), v4[85]);
      if ( v4[91] )
        Function_2017204((int)(v4 + 39), v4[85]);
      if ( v5 == 1 )
        v4[88] = 0;
    }
    Function_20b275c(17, 0, 0);
    Function_2017294((int)v4);
    v8 = 1;
    result = Function_20b275c(18, (int)&v8, 1);
  }
  return result;
}

//----- (021D4A84) --------------------------------------------------------
int __fastcall Function_21d4a84(int a1)
{
  return Function_2017110((int *)(a1 + 120));
}

//----- (021D4A90) --------------------------------------------------------
int __fastcall Function_21d4a90(int a1, int a2, int a3)
{
  return Function_20171a0((int *)(a2 + 136 + 20 * a1), a3);
}

//----- (021D4AA4) --------------------------------------------------------
int __fastcall Function_21d4aa4(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;
  int i;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  result = Function_21d4a84(a1);
  for ( i = 0; i < v5; ++i )
    result = Function_21d4a90(i, v3, v4);
  return result;
}

//----- (021D4AC8) --------------------------------------------------------
int __fastcall Function_21d4ac8(int *a1, uint a2, int a3)
{
  int *v3;
  int result;

  v3 = a1;
  Function_20170d8(a1 + 30, a3, a2, 111);
  Function_2017258(v3, (int)(v3 + 30));
  Function_2017350(v3, 0, 0, 0);
  Function_201736c(v3, 4096, 4096, 4096);
  Function_2017348((int)v3, 1);
  result = 372;
  v3[93] = 1;
  return result;
}

//----- (021D4B10) --------------------------------------------------------
int __fastcall Function_21d4b10(int a1, int *a2)
{
  int *v2;
  int result;

  v2 = a2;
  Function_2017258(a2, a1 + 120);
  Function_2017350(v2, 0, 0, 0);
  Function_201736c(v2, 4096, 4096, 4096);
  Function_2017348((int)v2, 1);
  result = 372;
  v2[93] = 1;
  return result;
}

//----- (021D4B4C) --------------------------------------------------------
int __fastcall Function_21d4b4c(int a1, uint *a2, uint a3, int a4, int (***a5)(void))
{
  uint *v5;
  int v6;
  int v7;
  int result;

  v5 = a2;
  v6 = 20 * a1;
  v7 = (int)(a2 + 34);
  Function_2017164(&a2[5 * a1 + 34], (int)(a2 + 30), a4, a3, 111, a5);
  Function_2017240(v7 + v6, 0);
  Function_201727c((uint)v5, v7 + v6);
  v5[85] = 4096;
  v5[96] = 255;
  result = 376;
  v5[94] = 255;
  return result;
}

//----- (021D4BA0) --------------------------------------------------------
int __fastcall Function_21d4ba0(int a1, int a2, uint *a3, uint a4, int a5, int (***a6)(void))
{
  uint *v6;
  int v7;
  int v8;
  int result;

  v6 = a3;
  v7 = 20 * a1;
  v8 = (int)(a3 + 34);
  Function_2017164(&a3[5 * a1 + 34], a2 + 120, a5, a4, 111, a6);
  Function_2017240(v8 + v7, 0);
  Function_201727c((uint)v6, v8 + v7);
  v6[85] = 4096;
  v6[96] = 255;
  result = 376;
  v6[94] = 255;
  return result;
}

//----- (021D4BF0) --------------------------------------------------------
uint __fastcall Function_21d4bf0(int a1)
{
  int v1;

  v1 = a1;
  if ( *(uchar *)(a1 + 192) )
  {
    if ( *(uchar *)(a1 + 193) )
      --*(uchar *)(a1 + 193);
    else
      *(uchar *)(a1 + 192) ^= 1u;
  }
  else if ( *(uchar *)(a1 + 193) >= 0x1Fu )
  {
    *(uchar *)(a1 + 192) ^= 1u;
  }
  else
  {
    ++*(uchar *)(a1 + 193);
  }
  Function_20039b0(*(uint *)(a1 + 16), 1, 0, 4u, (uint)*(uchar *)(a1 + 193) << 21 >> 24, 0xCCCCu);
  return Function_20039b0(
           *(uint *)(v1 + 16),
           1,
           4,
           6u,
           (uint)*(uchar *)(v1 + 193) << 21 >> 24,
           0xCCCCu);
}

//----- (021D4C94) --------------------------------------------------------
uint __fastcall Function_21d4c94(uchar *a1, uint a2, int a3, int a4)
{
  uchar *v4;
  int v5;
  uint result;
  uchar v7;
  char v8;
  char v9;
  char v10;
  char v11;
  char v12;
  char v13;
  char v14;
  char v15;
  char v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  uchar savedregs[24];

  *(uint *)savedregs = a4;
  v4 = a1;
  v5 = a2;
  v14 = 4;
  v15 = 4;
  v16 = 4;
  v20 = 0;
  v21 = 31;
  v22 = 0;
  v23 = 31;
  v24 = 0;
  v25 = 31;
  v8 = 0;
  v9 = 32;
  v10 = 0;
  v11 = 32;
  v12 = 0;
  v13 = 32;
  v17 = 16;
  v18 = 16;
  v19 = 16;
  if ( a2 >= 3 )
    v5 = 2;
  if ( a1[192] == 2 )
  {
    if ( (uchar)a1[194] >= 2 * (v5 + 1) )
    {
      result = (uint)(a1 + 192);
      v4[192] = 0;
      v4[194] = 0;
    }
    else
    {
      result = (uchar)a1[194] + 1;
      v4[194] = result;
    }
  }
  else
  {
    if ( a1[192] )
    {
      if ( (uchar)a1[193] <= *(&v20 + 2 * v5) )
        ++a1[192];
      else
        --a1[193];
    }
    else if ( (uchar)a1[193] >= *(&v21 + 2 * v5) )
    {
      ++a1[192];
    }
    else
    {
      ++a1[193];
    }
    v7 = s32_div_f((uchar)a1[193], (uchar)*(&v14 + v5));
    result = Function_20039b0(
               *((uint *)v4 + 4),
               1,
               (uchar)*(&v8 + 2 * v5),
               (uchar)*(&v9 + 2 * v5),
               v7,
               *(&v17 + v5));
  }
  return result;
}

//----- (021D4DC8) --------------------------------------------------------
uint __fastcall Function_21d4dc8(char a1)
{
  byte_21BF6E1 = a1;
  return Function_201ffe8();
}

//----- (021D4DD8) --------------------------------------------------------
ushort *__fastcall Function_21d4dd8(int a1, char a2)
{
  int v2;

  v2 = a1;
  *(uchar *)(a1 + 95) = a2;
  G2x_SetBlendBrightness_(&REG_BLDCNT, 49, *(char *)(a1 + 95));
  return G2x_SetBlendBrightness_(&REG_BLDCNT_SUB, 51, *(char *)(v2 + 95));
}

//----- (021D4E04) --------------------------------------------------------
uint *__fastcall Function_21d4e04(int a1)
{
  return AddTaskToTaskList2((int)Function_21d4e18, a1, 0x400u);
}

//----- (021D4E18) --------------------------------------------------------
int __fastcall Function_21d4e18(int a1, int *a2)
{
  uint *v2;
  int result;

  v2 = (uint *)a2;
  if ( (uint)a2[2] >= 2 )
  {
    Function_2013da4(*a2);
    v2[2] = 0;
  }
  Function_2013ddc(*v2);
  result = v2[2] + 1;
  v2[2] = result;
  return result;
}

//----- (021D4E3C) --------------------------------------------------------
uint *__fastcall Function_21d4e3c(int **a1, uint a2)
{
  int v2;
  uint *result;

  v2 = (int)a1;
  *a1 = Function_2013be0(a2);
  *(uint *)(v2 + 8) = 0;
  result = Function_21d4e04(v2);
  *(uint *)(v2 + 4) = result;
  return result;
}

//----- (021D4E58) --------------------------------------------------------
uint __fastcall Function_21d4e58(int **a1)
{
  int **v1;

  v1 = a1;
  Call_RemoveTaskFromTaskList(a1[1]);
  Function_2013d38(*v1);
  return Function_2013d74(*v1);
}

//----- (021D4E70) --------------------------------------------------------
int __fastcall Function_21d4e70(int *a1, char a2, char a3, int a4, int a5, short a6, int a7, int a8, uint a9, int a10)
{
  int result;

  if ( a10 )
    result = Function_2013ca4(*a1, a2, a3, a4, a5, a6, a7, a8, a9);
  else
    result = Function_2013c10(*a1, a2, a3, a4, a5, a6, a7, a8, a9);
  return result;
}

//----- (021D4EBC) --------------------------------------------------------
int *__fastcall Function_21d4ebc(int *a1)
{
  int *v1;
  uint *v2;
  int *v3;
  int *v4;
  int v5;
  int v6;
  int v7;

  v1 = a1;
  v2 = Function_200679c((int)Function_21d4f9c, 56, 5u, a1[10]);
  v3 = (int *)Function_201ced0((int)v2);
  v4 = v3 + 1;
  v5 = 5;
  do
  {
    v6 = *v1;
    v7 = v1[1];
    v1 += 2;
    *v4 = v6;
    v4[1] = v7;
    v4 += 2;
    --v5;
  }
  while ( v5 );
  *v4 = *v1;
  v3[13] = (int)v2;
  v3[12] = 0;
  *v3 = Function_20bf00c();
  Function_21d503c(v3 + 1);
  AddTaskToTaskList3((int)Function_21d4fdc, (int)v3, 0);
  return v3;
}

//----- (021D4F0C) --------------------------------------------------------
int __fastcall Function_21d4f0c(char ***a1, int a2, int a3, int a4)
{
  char ***v4;
  int v5;
  int result;

  v4 = a1;
  GX_SetGraphicsMode(a2, a3, a4);
  GX_SetBankForLCDC(**v4);
  v5 = (int)(*v4)[1];
  if ( v5 > 10 )
  {
    if ( v5 == 14 )
    {
      MIi_CpuClearFast(0, (uint *)0x6860000, 0x20000u);
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  if ( v5 < 10 )
  {
    if ( v5 <= 6 && v5 >= 2 )
    {
      if ( v5 == 2 )
      {
        MIi_CpuClearFast(0, (uint *)0x6800000, 0x20000u);
        goto LABEL_15;
      }
      if ( v5 == 6 )
      {
        MIi_CpuClearFast(0, (uint *)0x6820000, 0x20000u);
        goto LABEL_15;
      }
    }
LABEL_14:
    GX_SetBankForLCDC(0);
    goto LABEL_15;
  }
  MIi_CpuClearFast(0, (uint *)0x6840000, 0x20000u);
LABEL_15:
  Function_20067d0((int)(*v4)[13]);
  result = 0;
  *v4 = 0;
  return result;
}

//----- (021D4F9C) --------------------------------------------------------
int *__fastcall Function_21d4f9c(int a1, uint *a2)
{
  int *result;

  result = (int *)a2[12];
  if ( result )
  {
    result = &REG_DISPCAPCNT;
    REG_DISPCAPCNT = (a2[6] << 24) | (a2[7] << 25) | (a2[5] << 29) | 0x80000000 | (a2[4] << 20) | (a2[8] << 16) | (a2[10] << 8) | a2[9];
  }
  return result;
}

//----- (021D4FDC) --------------------------------------------------------
int __fastcall Function_21d4fdc(int *a1, int *a2)
{
  int *v2;
  int *v3;
  int v4;

  v2 = a2;
  v3 = a1;
  v4 = a2[1];
  if ( v4 > 10 )
  {
    if ( v4 == 14 )
    {
      GX_SetBankForLCDC((char *)8);
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  if ( v4 < 10 )
  {
    if ( v4 <= 6 && v4 >= 2 )
    {
      if ( v4 == 2 )
      {
        GX_SetBankForLCDC((char *)1);
        goto LABEL_15;
      }
      if ( v4 == 6 )
      {
        GX_SetBankForLCDC((char *)2);
        goto LABEL_15;
      }
    }
LABEL_14:
    GX_SetBankForLCDC(0);
    goto LABEL_15;
  }
  GX_SetBankForLCDC((char *)4);
LABEL_15:
  GX_SetGraphicsMode(v2[1], v2[2], v2[3]);
  v2[12] = 1;
  return Call_RemoveTaskFromTaskList(v3);
}

//----- (021D503C) --------------------------------------------------------
int *__fastcall Function_21d503c(uint *a1)
{
  uint *v1;
  int v2;
  int *result;

  v1 = a1;
  v2 = *a1;
  if ( v2 > 10 )
  {
    if ( v2 == 14 )
      MIi_CpuClearFast(0, (uint *)0x6860000, 0x20000u);
  }
  else if ( v2 < 10 )
  {
    if ( v2 <= 6 && v2 >= 2 )
    {
      if ( v2 == 2 )
      {
        MIi_CpuClearFast(0, (uint *)0x6800000, 0x20000u);
      }
      else if ( v2 == 6 )
      {
        MIi_CpuClearFast(0, (uint *)0x6820000, 0x20000u);
      }
    }
  }
  else
  {
    MIi_CpuClearFast(0, (uint *)0x6840000, 0x20000u);
  }
  result = &REG_DISPCAPCNT;
  REG_DISPCAPCNT = (v1[7] << 16) | (v1[5] << 24) | (v1[6] << 25) | (v1[4] << 29) | 0x80000000 | (v1[3] << 20) | 0x10;
  return result;
}

