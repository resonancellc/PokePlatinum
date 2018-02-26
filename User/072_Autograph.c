//----- (0223D7A0) --------------------------------------------------------
int __fastcall Function_72_223d7a0(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  int *v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v2 = a2;
  v3 = *a2;
  v4 = a1;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      LoadOverlayData1c(a1);
      *v2 = 0;
      return 1;
    }
  }
  else
  {
    SetBrightnessWithValue(0, 0);
    SetBrightnessWithValue(1, 0);
    SetMainLoopFunctionCall(0, 0);
    Function_20177a4();
    Function_201ff00();
    Function_201ff68();
    REG_DISPCNT &= 0xFFFFE0FF;
    REG_DISPCNT_SUB &= 0xFFFFE0FF;
    Function_2017fc8(3, 39, (uint)&REG_DISPCNT_SUB << 6);
    v5 = (int *)MallocSomeDataAndStorePtrInOverlayData1c(v4, 23728, 0x27u);
    Call_FillMemWithValue(v5, 0, 0x5CB0u);
    *v5 = Function_2018340(0x27u);
    v8 = LoadFromNARC_8(95, 0x27u, v6, v7);
    v5[4] = (int)Function_200b358(0x27u);
    v5[5] = LoadFromMsgNARC(0, 26, 425, 0x27u);
    v9 = Function_2017dd4(4, 8);
    Function_223da70(v9);
    Function_223da90(*v5);
    Function_200f174(0, 1, 1, 0, 16, 1, 39);
    v10 = LoadPtrToOverWorldDataIn18(v4);
    v11 = LoadVariableAreaAdress_13(v10);
    v5[5862] = Function_202c840(v11);
    v12 = LoadPtrToOverWorldDataIn18(v4);
    v5[2] = LoadVariableAreaAdress_14(v12);
    v13 = LoadPtrToOverWorldDataIn18(v4);
    v5[3] = LoadPlayerDataAdress(v13);
    Function_223dca8(v5, v8);
    Function_201e3d8();
    Function_201e450(1u);
    SetMainLoopFunctionCall((int)Function_223da48, *v5);
    Function_2002bb8(2, 0x27u);
    v14 = Function_223db98(v5);
    Function_223dda8(v14);
    Function_223ddd8(v5, v8);
    Function_223df58(v5);
    Function_223e0a0(v5, v4);
    Function_2004550(0x38u, 0);
    REG_POWERCNT &= 0x7FFFu;
    Call_FS_CloseFile(v8);
    ++*v2;
  }
  return 0;
}

//----- (0223D920) --------------------------------------------------------
int __fastcall Function_72_223d920(int a1, int *a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  int (*v6)(void);

  v2 = a2;
  v3 = LoadOverlayData1c(a1);
  v4 = *v2;
  v5 = v3;
  if ( *v2 )
  {
    if ( v4 == 1 )
    {
      v6 = (int (*)(void))dword_223ED40[*(uint *)(v3 + 780)];
      if ( v6 )
        *v2 = v6();
      Function_223e8d0(v5 + 17176);
    }
    else if ( v4 == 2 && Function_200f2ac() )
    {
      return 1;
    }
  }
  else if ( Function_200f2ac() )
  {
    *v2 = 1;
  }
  Function_20219f8(*(uint *)(v5 + 60));
  return 0;
}

//----- (0223D984) --------------------------------------------------------
int __fastcall Function_72_223d984(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v6;

  v6 = a1;
  v1 = LoadOverlayData1c(a1);
  Function_223e9b4(*(uint *)(v1 + 23448), *(uint *)(v1 + 720));
  SetMainLoopFunctionCall(0, 0);
  Function_200a4e4(*(int **)(v1 + 376));
  Function_200a4e4(*(int **)(v1 + 392));
  Function_200a6dc(*(int **)(v1 + 380));
  Function_200a6dc(*(int **)(v1 + 396));
  v2 = 0;
  v3 = v1;
  do
  {
    Function_2009754(*(int **)(v3 + 360));
    ++v2;
    v3 += 4;
  }
  while ( v2 < 4 );
  Function_2021964(*(int **)(v1 + 60));
  Function_200a878();
  Function_201e958();
  Function_201f8b4();
  Function_223e260(v1);
  Function_2002c60(2);
  Function_223dc6c(*(uint *)v1);
  Function_201e530();
  Function_200b190(*(ushort **)(v1 + 20));
  Function_200b3f0(*(uint **)(v1 + 16), v4);
  Function_223dc34(v1);
  FreeSomeDataAndStore0InOverlayData1c(v6);
  REG_POWERCNT |= (uint)&REG_POWERCNT >> 11;
  SetMainLoopFunctionCall(0, 0);
  Function_201807c(39);
  return 1;
}

//----- (0223DA48) --------------------------------------------------------
int __fastcall Function_223da48(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_201dcac();
  Function_200a858();
  Function_201c2b8(v1);
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (0223DA70) --------------------------------------------------------
char *Function_223da70()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_223EC08;
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

//----- (0223DA90) --------------------------------------------------------
uint __fastcall Function_223da90(uint *a1)
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
  v38 = 1;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  SetGraphicsModes(&v38);
  v31 = 0;
  v32 = 0;
  v33 = 2048;
  v34 = 0;
  v35 = 69074945;
  v36 = 0;
  v37 = 0;
  Function_20183c4(v1, 0, &v31, 0);
  Function_2019ebc(v1, 0);
  v24 = 0;
  v25 = 0;
  v26 = 2048;
  v27 = 0;
  v28 = 2031617;
  v29 = 256;
  v30 = 0;
  Function_20183c4(v1, 1u, &v24, 0);
  Function_2019ebc(v1, 1u);
  v17 = 0;
  v18 = 0;
  v19 = 2048;
  v20 = 0;
  v21 = 35323905;
  v22 = 512;
  v23 = 0;
  Function_20183c4(v1, 2u, &v17, 0);
  v10 = 0;
  v11 = 0;
  v12 = 2048;
  v13 = 0;
  v14 = 2031617;
  v15 = 0;
  v16 = 0;
  Function_20183c4(v1, 4u, &v10, 0);
  Function_2019ebc(v1, 4u);
  v3 = 0;
  v4 = 0;
  v5 = 2048;
  v6 = 0;
  v7 = 35520513;
  v8 = 256;
  v9 = 0;
  Function_20183c4(v1, 5u, &v3, 0);
  Function_2019690(0, 32, 0, 0x27u);
  return Function_2019690(4u, 32, 0, 0x27u);
}

//----- (0223DB98) --------------------------------------------------------
int __fastcall Function_223db98(int a1)
{
  int v1;
  int v2;
  uchar *v3;
  int v4;

  v1 = a1;
  v2 = 0;
  v3 = (uchar *)(a1 + 17213);
  v4 = a1;
  do
  {
    *(uint *)(v4 + 24) = Function_2023790(8, 0x27u);
    ++v2;
    *v3 &= 0xFu;
    *(ushort *)(v4 + 17284) = 0;
    v4 += 4;
    v3 += 17;
  }
  while ( v2 < 5 );
  *(uint *)(v1 + 44) = Function_2023790(20, 0x27u);
  *(uint *)(v1 + 48) = Function_2023790(40, 0x27u);
  *(uint *)(v1 + 52) = Function_2023790(80, 0x27u);
  *(uchar *)(v1 + 17178) = 0;
  *(uint *)(v1 + 780) = 1;
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 20), 0xCu, *(ushort **)(v1 + 44));
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 20), 9u, *(ushort **)(v1 + 48));
  *(uint *)(v1 + 23708) = Function_2015920(0x27u);
  return MIi_CpuClearFast(0, (uint *)(v1 + 23712), 5u);
}

//----- (0223DC34) --------------------------------------------------------
uint __fastcall Function_223dc34(int *a1)
{
  int *v1;
  int v2;
  int v3;
  int *v4;
  int v5;
  int v6;

  v1 = a1;
  Function_2015938(a1[5927]);
  v3 = 0;
  v4 = v1;
  do
  {
    Function_20237bc_FreeMsg(v4[6], v2);
    ++v3;
    ++v4;
  }
  while ( v3 < 5 );
  Function_20237bc_FreeMsg(v1[13], v2);
  Function_20237bc_FreeMsg(v1[12], v5);
  return Function_20237bc_FreeMsg(v1[11], v6);
}

//----- (0223DC6C) --------------------------------------------------------
uint __fastcall Function_223dc6c(int a1)
{
  int v1;

  v1 = a1;
  Function_2019044(a1, 5);
  Function_2019044(v1, 4);
  Function_2019044(v1, 3);
  Function_2019044(v1, 2);
  Function_2019044(v1, 1);
  Function_2019044(v1, 0);
  return free(v1);
}

//----- (0223DCA8) --------------------------------------------------------
int __fastcall Function_223dca8(uint **a1, int a2)
{
  uint **v2;
  uint *v3;
  int v4;
  uchar v5;

  v2 = a1;
  v3 = *a1;
  v4 = a2;
  Function_2007130(a2, 0, 0, 0, 96, 39);
  Function_2007130(v4, 2u, 4u, 0, 64, 39);
  LoadFromNARC_PlFont2(0, 416, 39);
  LoadFromNARC_PlFont2(4u, 416, 39);
  Function_2019690(1u, 32, 0, 0x27u);
  Function_20070e8(v4, 3u, v3, 2u, 0, 0x2000, 1, 39);
  Function_200710c(v4, 5u, v3, 2u, 0, 1536, 1, 39);
  Function_20070e8(v4, 4u, v3, 5u, 0, 0x2000, 1, 39);
  Function_200710c(v4, 6u, v3, 5u, 0, 1536, 1, 39);
  v5 = Function_2027b50((ushort *)v2[3]);
  Function_200dd0c(v3, 0, 1, 10, v5, 39);
  return Function_200daa4(v3, 0, 31, 11, 0, 39);
}

//----- (0223DDA8) --------------------------------------------------------
int Function_223dda8()
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = 20;
  v2 = 2048;
  v3 = 2048;
  v4 = 39;
  Function_201e86c(&v1);
  Function_201f834(20, 0x27u);
  Function_201e994();
  return Function_201f8e4();
}

//----- (0223DDD8) --------------------------------------------------------
int __fastcall Function_223ddd8(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int *v6;
  int v7;

  v2 = a1;
  v3 = a2;
  Function_20a7944();
  Function_200a784(0, 126, 0, 32, 0, 0x7Eu, 0, 0x20u, 0x27u);
  *(uint *)(v2 + 60) = Function_20095c4(50, v2 + 64, 39, v4);
  Function_200964c(v2 + 64, 0, 0x100000, v5);
  v6 = 0;
  v7 = v2;
  do
  {
    *(uint *)(v7 + 360) = Function_2009714(2, v6, 0x27u);
    v6 = (int *)((char *)v6 + 1);
    v7 += 4;
  }
  while ( (int)v6 < 4 );
  *(uint *)(v2 + 376) = Function_2009a4c(*(uint *)(v2 + 360), v3, 7u, 1, 0, 1, 0x27u);
  *(uint *)(v2 + 380) = Function_2009b04(*(uint *)(v2 + 364), v3, 1u, 0, 0, 1, 3, 0x27u);
  *(uint *)(v2 + 384) = Function_2009bc4(*(uint *)(v2 + 368), v3, 8u, 1, 0, 2u, 0x27u);
  *(uint *)(v2 + 388) = Function_2009bc4(*(uint *)(v2 + 372), v3, 9u, 1, 0, 3u, 0x27u);
  *(uint *)(v2 + 392) = Function_2009a4c(*(uint *)(v2 + 360), v3, 7u, 1, 1, 2, 0x27u);
  *(uint *)(v2 + 396) = Function_2009b04(*(uint *)(v2 + 364), v3, 1u, 0, 1, 2, 3, 0x27u);
  *(uint *)(v2 + 400) = Function_2009bc4(*(uint *)(v2 + 368), v3, 8u, 1, 1, 2u, 0x27u);
  *(uint *)(v2 + 404) = Function_2009bc4(*(uint *)(v2 + 372), v3, 9u, 1, 1, 3u, 0x27u);
  Function_200a328(*(int **)(v2 + 376));
  Function_200a328(*(int **)(v2 + 392));
  Function_200a5c8(*(int **)(v2 + 380));
  return Function_200a5c8(*(int **)(v2 + 396));
}

//----- (0223DF58) --------------------------------------------------------
uint __fastcall Function_223df58(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v6;
  uint *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  short v14;
  int v15;
  int v16;
  int v17;
  int v18;

  v18 = a4;
  v4 = a1;
  Function_20093b4((int)(a1 + 102), 0, 0, 0, 0, -1, -1, 0, 0, a1[90], a1[91], a1[92], a1[93], 0, 0);
  Function_20093b4((int)(v4 + 111), 1, 1, 1, 1, -1, -1, 0, 0, v4[90], v4[91], v4[92], v4[93], 0, 0);
  v6 = v4[15];
  v10 = 0;
  v11 = 4096;
  v12 = 4096;
  v13 = 4096;
  v14 = 0;
  v7 = v4 + 111;
  v8 = 917504;
  v9 = 716800;
  v15 = 1;
  v16 = 1;
  v17 = 39;
  v4[148] = Function_2021aa0((uint **)&v6);
  Function_2021cc8(v4[148], 1);
  Function_2021d6c(v4[148], 0);
  Function_2021e90(v4[148], 0);
  Function_2021e80(v4[148], 2);
  Function_201ff0c(0x10u, 1);
  return Function_201ff74(0x10u, 1);
}

//----- (0223E060) --------------------------------------------------------
int __fastcall Function_223e060(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;

  v4 = a1;
  v5 = a4;
  v6 = 8 * *(uchar *)(a1 + 7) - Function_2002d7c(2, a2, 0);
  Function_201d78c(v4, v5);
  return *(uint *)(v4 + 12);
}

//----- (0223E0A0) --------------------------------------------------------
int __fastcall Function_223e0a0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  short v6;
  char v7;
  int v8;
  int v10;
  int v11;

  v1 = a1;
  Function_201a7e8(*(uint **)v1, v1 + 724, 0, 2, 1, 0x1Bu, 4u, 13, 40);
  Function_201ada4_ClearTextBox(v1 + 724, 15);
  Function_201a7e8(*(uint **)v1, v1 + 708, 1, 4, 9, 0x18u, 8u, 1, 1);
  Function_201ada4_ClearTextBox(v1 + 708, 2);
  Function_201a7e8(*(uint **)v1, v1 + 740, 1, 26, 21, 8u, 2u, 2, 193);
  Function_201ada4_ClearTextBox(v1 + 740, 0);
  v2 = Function_223e060(v1 + 740, *(uint *)(v1 + 44), 1, 2);
  DC_FlushRange(v2, 512);
  v3 = 0;
  v11 = 0;
  v4 = 0;
  do
  {
    Function_2012c60(v1 + 740, 4, 2, v3, 0, v1 + 23452);
    DC_FlushRange(v1 + 23452, 256);
    GX_LoadOBJ((int *)(v1 + 23452), v4, 0x100u);
    v4 += 256;
    v3 += 4;
    ++v11;
  }
  while ( v11 < 2 );
  Function_201a7e8(*(uint **)v1, v1 + 756, 1, 2, 2, 0x1Cu, 2u, 13, 209);
  Function_2002d7c(1, *(uint *)(v1 + 48), 0);
  Function_201ada4_ClearTextBox(v1 + 756, 0);
  v5 = *(uint *)(v1 + 48);
  Function_201d78c(v1 + 756, 1);
  v10 = 0;
  v6 = 1;
  v7 = 3;
  v8 = v1 + 628;
  do
  {
    Function_201a7e8(*(uint **)v1, v8, 4, 5, v7, 0xAu, 2u, 13, v6);
    Function_201ada4_ClearTextBox(v8, 0);
    v6 += 20;
    v7 += 4;
    v8 += 16;
    ++v10;
  }
  while ( v10 < 5 );
  return Function_223e910(v1 + 628, 0, 920847, v1);
}

//----- (0223E260) --------------------------------------------------------
uint __fastcall Function_223e260(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = 0;
  v3 = a1 + 628;
  do
  {
    Function_201a8fc(v3);
    ++v2;
    v3 += 16;
  }
  while ( v2 < 5 );
  Function_201a8fc(v1 + 756);
  Function_201a8fc(v1 + 740);
  Function_201a8fc(v1 + 708);
  return Function_201a8fc(v1 + 724);
}

//----- (0223E2A4) --------------------------------------------------------
void Function_223e2a4()
{
  ;
}

//----- (0223E2A8) --------------------------------------------------------
int __fastcall Function_223e2a8(int a1)
{
  int v1;
  int v2;
  int result;
  char v4;
  int v5;
  ushort *v6;
  int v7;
  ushort v8;
  ushort v9;

  v1 = a1;
  v2 = Function_2022664((uchar *)&dword_223EB44[1] + 2);
  if ( v2 != -1 )
  {
    if ( v2 )
    {
      *(uchar *)(v1 + 17178) = v2;
      Function_223e388(v1 + 592);
    }
    else if ( *(uint *)(v1 + 780) == 1 )
    {
      Function_223e930(v1, 10);
      *(uint *)(v1 + 780) = 2;
      Function_223e3a8(v1 + 592, 1);
      Function_2005748(0x5DDu);
    }
  }
  if ( Function_2022644((uchar *)&word_223EB42) != -1 )
    Function_223ea18(v1);
  result = Function_201e564(&v9, 4u, 1u);
  if ( result == 1 )
  {
    v4 = v9;
    v5 = 0;
    if ( (int)v9 > 0 )
    {
      v6 = &v9;
      do
      {
        v7 = v1 + v5++;
        *(uchar *)(v7 + 17180) = v6[1];
        v8 = v6[2];
        v6 += 4;
        *(uchar *)(v7 + 17188) = v8;
        v4 = v9;
      }
      while ( v5 < v9 );
    }
    result = 17196;
    *(uchar *)(v1 + 17196) = *(uchar *)(v1 + 17196) & 0xF | 16 * v4;
    *(uchar *)(v1 + 17196) = *(uchar *)(v1 + 17178) & 0xF | *(uchar *)(v1 + 17196) & 0xF0;
  }
  return result;
}

//----- (0223E388) --------------------------------------------------------
int __fastcall Function_223e388(int *a1, int a2)
{
  int v2;
  int result;

  v2 = *a1;
  if ( a2 )
    result = Function_2021d6c(v2, 0);
  else
    result = Function_2021d6c(v2, 1u);
  return result;
}

//----- (0223E3A8) --------------------------------------------------------
int __fastcall Function_223e3a8(int *a1, int a2)
{
  int v2;
  int result;

  v2 = *a1;
  if ( a2 == 1 )
    result = Function_2021d6c(v2, 1u);
  else
    result = Function_2021d6c(v2, 0);
  return result;
}

//----- (0223E3C0) --------------------------------------------------------
int __fastcall Function_223e3c0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_223e2a8(a1);
  Function_223e910(v2 + 628, 0, 920591, v2);
  Function_223e914(v2);
  Function_223e8cc(v2);
  Function_223e80c(v2 + 708, v2 + 17197, v2 + 17282, 1);
  return v3;
}

//----- (0223E408) --------------------------------------------------------
int __fastcall Function_223e408(int a1)
{
  int v1;

  v1 = a1;
  Function_223e2a4();
  Function_223e8cc(v1);
  return Function_223e80c(v1 + 708, v1 + 17197, v1 + 17282, 0);
}

//----- (0223E430) --------------------------------------------------------
int __fastcall Function_223e430(int a1, int a2)
{
  int v3;
  int v4;
  int v5;
  int v6;
  char v7;
  char v8;

  v3 = a1;
  v4 = 0;
  v5 = 180;
  v6 = 8;
  v7 = 25;
  v8 = 6;
  return Function_2015958(a2, (int)&v3);
}

//----- (0223E458) --------------------------------------------------------
int __fastcall Function_223e458(int *a1, int a2)
{
  int *v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( Function_223e99c(a1[14]) )
  {
    Function_223e430(*v2, v2[5927]);
    v2[195] = 3;
  }
  Function_223e408((int)v2);
  return v3;
}

//----- (0223E488) --------------------------------------------------------
int __fastcall Function_223e488(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = Function_20159fc(*(uint *)(a1 + 23708));
  if ( v4 == 1 )
  {
    Function_202cfec(*(uint *)(v2 + 8), 4);
    Function_202cf28(*(uint *)(v2 + 8), 114);
    Function_200e084(v2 + 724, 1);
    Function_2015a54(*(int **)(v2 + 23708));
    Function_200f174(0, 0, 0, 0, 16, 1, 39);
    result = 2;
  }
  else
  {
    if ( v4 == 2 )
    {
      *(uint *)(v2 + 780) = 4;
      Function_223e3a8((int *)(v2 + 592), 0);
      Function_200e084(v2 + 724, 1);
      Function_2015a54(*(int **)(v2 + 23708));
    }
    *(uchar *)(v2 + 17196) &= 0xFu;
    Function_223e408(v2);
    result = v3;
  }
  return result;
}

//----- (0223E528) --------------------------------------------------------
int __fastcall Function_223e528(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = a2;
  v4 = Function_20159fc(*(uint *)(a1 + 23708));
  if ( v4 == 1 )
  {
    *(uint *)(v2 + 780) = 1;
    Function_200e084(v2 + 724, 1);
    Function_2015a54(*(int **)(v2 + 23708));
    Function_201ada4_ClearTextBox(v2 + 708, 2);
    Function_201a954(v2 + 708, v5);
  }
  else if ( v4 == 2 )
  {
    *(uint *)(v2 + 780) = 1;
    Function_200e084(v2 + 724, 1);
    Function_2015a54(*(int **)(v2 + 23708));
  }
  return v3;
}

//----- (0223E590) --------------------------------------------------------
int __fastcall Function_223e590(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  Function_223e930(a1, 11);
  *(uint *)(v3 + 780) = 5;
  Function_223e408(v3);
  return v2;
}

//----- (0223E5B0) --------------------------------------------------------
int __fastcall Function_223e5b0(int *a1, int a2)
{
  int *v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( Function_223e99c(a1[14]) )
  {
    v2[195] = 6;
    Function_223e430(*v2, v2[5927]);
  }
  Function_223e408((int)v2);
  return v3;
}

//----- (0223E5E0) --------------------------------------------------------
int __fastcall Function_223e5e0(int a1, int a2, ushort a3, ushort a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  ushort v10;
  int v11;
  ushort v12;
  ushort v13;
  ushort v14;
  ushort v15;
  ushort v16;
  int v17;
  int v18;
  int v20;

  v10 = a7;
  v11 = a2;
  v12 = a3;
  v13 = a4;
  v20 = a1;
  v14 = a8;
  v15 = a9;
  v16 = a10;
  if ( a7 < 0 )
  {
    v17 = -a7;
    if ( -a7 > a9 )
      v17 = a9;
    v10 = 0;
    v12 += v17;
    a5 -= v17;
    v15 = a9 - v17;
  }
  if ( a8 < 0 )
  {
    v18 = -a8;
    if ( -a8 > a10 )
      v18 = a10;
    v14 = 0;
    v13 += v18;
    a6 -= v18;
    v16 = a10 - v18;
  }
  return Function_201addc(v20, v11, v12, v13, a5, a6, v10, v14, v15, v16);
}

//----- (0223E660) --------------------------------------------------------
int *__fastcall Function_223e660(int a1, int a2, int a3, int a4, int *a5, int *a6, int a7, int a8)
{
  int v8;
  int v9;
  int *result;
  int v11;
  int v12;
  int j;
  int v14;
  int i;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;

  v16 = a1;
  v17 = a2;
  v18 = a3;
  v19 = a4;
  v8 = *a5;
  v9 = *a6;
  v24 = a3;
  v22 = a4;
  if ( a7 || a8 )
  {
    v23 = a3 - v8;
    if ( a3 - v8 < 0 )
      v23 = v8 - a3;
    v11 = a4 - v9;
    if ( a4 - v9 < 0 )
      v11 = v9 - a4;
    if ( v23 <= v11 )
    {
      if ( v9 <= a4 )
      {
        if ( v8 >= a3 )
          v20 = -1;
        else
          v20 = 1;
      }
      else
      {
        if ( v8 <= a3 )
          v20 = -1;
        else
          v20 = 1;
        v22 = *a6;
        v9 = a4;
        v8 = a3;
      }
      Function_223e5e0(a1, a2, 0, 0, 4, 4, v8, v9, 4, 4);
      v14 = v9 + 1;
      for ( i = v11 >> 1; v14 <= v22; ++v14 )
      {
        i -= v23;
        if ( i < 0 )
        {
          i += v11;
          v8 += v20;
        }
        Function_223e5e0(v16, v17, 0, 0, 4, 4, v8, v14, 4, 4);
      }
    }
    else
    {
      if ( v8 <= a3 )
      {
        if ( v9 >= a4 )
          v21 = -1;
        else
          v21 = 1;
      }
      else
      {
        if ( v9 <= a4 )
          v21 = -1;
        else
          v21 = 1;
        v24 = *a5;
        v8 = a3;
        v9 = a4;
      }
      Function_223e5e0(a1, a2, 0, 0, 4, 4, v8, v9, 4, 4);
      v12 = v8 + 1;
      for ( j = v23 >> 1; v12 <= v24; ++v12 )
      {
        j -= v11;
        if ( j < 0 )
        {
          j += v23;
          v9 += v21;
        }
        Function_223e5e0(v16, v17, 0, 0, 4, 4, v12, v9, 4, 4);
      }
    }
    *a5 = v18;
    result = a6;
    *a6 = v19;
  }
  else
  {
    *a5 = a3;
    result = a6;
    *a6 = a4;
  }
  return result;
}

//----- (0223E7D8) --------------------------------------------------------
int __fastcall Function_223e7d8(int result, int a2)
{
  int v2;
  uint v3;

  v2 = 0;
  do
  {
    *(ushort *)(a2 + 2) = (uint)*(uchar *)(result + 16) << 24 >> 28;
    v3 = (uint)*(uchar *)(result + 16) << 24 >> 28;
    if ( v3 )
    {
      *(uchar *)a2 = *(uchar *)(result + v3 - 1);
      *(uchar *)(a2 + 1) = *(uchar *)(result + ((uint)*(uchar *)(result + 16) << 24 >> 28) + 7);
    }
    ++v2;
    result += 17;
    a2 += 4;
  }
  while ( v2 < 5 );
  return result;
}

//----- (0223E80C) --------------------------------------------------------
int __fastcall Function_223e80c(int a1, int a2, uchar *a3, int a4)
{
  int v4;
  int v5;
  uchar *v6;
  int v7;
  int v8;
  int result;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v4 = a1;
  v10 = a2;
  v11 = (int)a3;
  v12 = a4;
  v13 = 0;
  v14 = 0;
  v5 = a2;
  v6 = a3;
  do
  {
    if ( (uint)*(uchar *)(v5 + 16) << 24 >> 28 )
    {
      if ( *((ushort *)v6 + 1) )
      {
        v16 = *v6 - 32;
        v15 = v6[1] - 72;
      }
      v7 = 0;
      a2 = (uint)*(uchar *)(v5 + 16) << 24 >> 28;
      if ( a2 > 0 )
      {
        v13 = 1;
        if ( (int)((uint)*(uchar *)(v5 + 16) << 24 >> 28) > 0 )
        {
          do
          {
            Function_223e660(
              v4,
              (int)&dword_223EC30[4 * (*(uchar *)(v5 + 16) & 0xF)],
              *(uchar *)(v5 + v7) - 32,
              *(uchar *)(v5 + v7 + 8) - 72,
              &v16,
              &v15,
              v7,
              *((ushort *)v6 + 1));
            ++v7;
          }
          while ( v7 < (int)((uint)*(uchar *)(v5 + 16) << 24 >> 28) );
        }
      }
    }
    v5 += 17;
    v6 += 4;
    ++v14;
  }
  while ( v14 < 5 );
  if ( v13 && v12 )
    Function_201a954(v4, a2);
  Function_223e7d8(v10, v11);
  v8 = 0;
  do
  {
    ++v8;
    *(uchar *)(v10 + 16) &= 0xFu;
    result = v10 + 17;
    v10 += 17;
  }
  while ( v8 < 5 );
  return result;
}

//----- (0223E8CC) --------------------------------------------------------
void Function_223e8cc()
{
  ;
}

//----- (0223E8D0) --------------------------------------------------------
uint __fastcall Function_223e8d0(ushort *a1, int a2, int a3, int a4)
{
  int v5;

  v5 = a4;
  *a1 += 20;
  if ( (ushort)*a1 > 0x168u )
    *a1 = 0;
  LOWORD(v5) = 32 * ((int)(10 * Function_201d250((ushort)*a1)) / 4096 + 15) | 0x1D;
  return GX_LoadOBJPltt((int)&v5, 24, 2u);
}

//----- (0223E910) --------------------------------------------------------
void Function_223e910()
{
  ;
}

//----- (0223E914) --------------------------------------------------------
int __fastcall Function_223e914(int a1)
{
  uchar *v1;
  uchar *v2;
  int v3;
  int result;

  v1 = (uchar *)(a1 + 17180);
  v2 = (uchar *)(a1 + 17197);
  v3 = 17;
  do
  {
    result = *v1++;
    *v2++ = result;
    --v3;
  }
  while ( v3 );
  return result;
}

//----- (0223E930) --------------------------------------------------------
int __fastcall Function_223e930(int a1, uint a2)
{
  int v2;
  uint v3;
  ushort *v4;
  int v5;
  int v6;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = (ushort *)Function_2023790(80, 0x27u);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v2 + 20), v3, v4);
  Function_200c388(*(uint **)(v2 + 16), *(uint *)(v2 + 52), (int)v4);
  Function_20237bc_FreeMsg((int)v4, v5);
  Function_201ada4_ClearTextBox(v2 + 724, 15);
  Function_200e060(v2 + 724, 0, 1, 0xAu);
  Function_2027ac0(*(ushort **)(v2 + 12));
  v6 = *(uint *)(v2 + 52);
  result = Function_201d738_CallInitTextInterpreter(v2 + 724, 1);
  *(uint *)(v2 + 56) = result;
  return result;
}

//----- (0223E99C) --------------------------------------------------------
BOOL __fastcall Function_223e99c(uchar a1)
{
  return Function_201d724(a1) == 0;
}

//----- (0223E9B4) --------------------------------------------------------
int __fastcall Function_223e9b4(uchar *a1, int a2)
{
  int v2;
  uchar *v3;
  int v4;
  int v5;
  int result;
  int v7;

  v2 = 0;
  v3 = a1;
  v7 = a2;
  v4 = 0;
  *a1 = 0;
  v5 = 0;
  do
  {
    if ( (*(uchar *)(v7 + v5) & 0xF) == 1 )
      *v3 |= 1 << v4;
    if ( (int)*(uchar *)(v7 + v5) >> 4 == 1 )
      *v3 |= 1 << (v4 + 1);
    v4 += 2;
    if ( v4 == 8 )
    {
      ++v3;
      ++v2;
      *v3 = 0;
      v4 = 0;
    }
    if ( v2 >= 6144 )
      ErrorHandler();
    ++v5;
    result = 6144;
  }
  while ( v5 < 6144 );
  return result;
}

//----- (0223EA18) --------------------------------------------------------
int __fastcall Function_223ea18(int a1)
{
  int v1;
  int v2;
  int v3;
  char v4;
  int v5;
  int v6;
  char v7;
  int v8;
  int v9;
  char v10;
  int result;

  v1 = a1;
  if ( (ushort)word_21BF6D8 != 0xFFFF && (ushort)word_21BF6DA != 0xFFFF )
  {
    v2 = *(uint *)(a1 + 23720);
    if ( v2 != 0xFFFF && *(uint *)(a1 + 23724) != 0xFFFF )
    {
      if ( v2 <= (ushort)word_21BF6D8 )
      {
        v3 = (ushort)word_21BF6D8 - v2;
        v4 = 1;
      }
      else
      {
        v3 = v2 - (ushort)word_21BF6D8;
        v4 = -1;
      }
      *(uchar *)(a1 + 23714) = v4;
      if ( v3 < 3 || v3 > 40 )
      {
        if ( v3 <= 40 )
        {
          v8 = *(uint *)(a1 + 23724);
          if ( v8 <= (ushort)word_21BF6DA )
          {
            v9 = (ushort)word_21BF6DA - v8;
            v10 = 1;
          }
          else
          {
            v9 = v8 - (ushort)word_21BF6DA;
            v10 = -1;
          }
          *(uchar *)(a1 + 23715) = v10;
          if ( v9 >= 3 && v9 <= 40 )
            Function_223ead8(a1 + 23712);
        }
      }
      else
      {
        v5 = *(uint *)(a1 + 23724);
        if ( v5 <= (ushort)word_21BF6DA )
        {
          v6 = (ushort)word_21BF6DA - v5;
          v7 = 1;
        }
        else
        {
          v6 = v5 - (ushort)word_21BF6DA;
          v7 = -1;
        }
        *(uchar *)(a1 + 23715) = v7;
        if ( v6 <= 40 )
          Function_223ead8(a1 + 23712);
      }
    }
  }
  *(uint *)(v1 + 23720) = (ushort)word_21BF6D8;
  result = 23724;
  *(uint *)(v1 + 23724) = (ushort)word_21BF6DA;
  return result;
}

//----- (0223EAD8) --------------------------------------------------------
int __fastcall Function_223ead8(char *a1)
{
  char *v1;
  int result;

  v1 = a1;
  if ( !*a1 && !a1[1] && !Function_20057d4(0x69Au) )
    Function_2005748(0x69Au);
  if ( (v1[2] * *v1 < 0 || v1[3] * v1[1] < 0) && !Function_20057d4(0x69Au) )
    Function_2005748(0x69Au);
  *v1 = v1[2];
  v1[1] = v1[3];
  result = 0;
  v1[2] = 0;
  v1[3] = 0;
  return result;
}

