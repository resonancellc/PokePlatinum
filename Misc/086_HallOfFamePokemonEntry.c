//----- (0223B140) --------------------------------------------------------
int __fastcall Function_86_223b140(int a1)
{
  int v1;
  uint *v2;
  int v3;
  int v4;
  int v5;
  int i;
  int *v7;

  v1 = a1;
  SetMainLoopFunctionCall(0, 0);
  Function_2017fc8(3, 63, 196608);
  v2 = (uint *)MallocSomeDataAndStorePtrInOverlayData1c(v1, 7156, 0x3Fu);
  v2[3] = LoadPtrToOverWorldDataIn18(v1);
  v2[1787] = LoadFromMsgNARC(0, 26, 351, 0x3Fu);
  v2[1785] = Function_2023790(500, 0x3Fu);
  v2[1786] = Function_2023790(500, 0x3Fu);
  v2[1784] = Function_200b358(0x3Fu);
  v2[1788] = LoadFromNARC_8(147, 0x3Fu, v3, v4);
  v2[1] = 0;
  v5 = GetNrOfPkmnInParty(*(uint *)(v2[3] + 4));
  for ( i = 0; i < v5; ++i )
  {
    v7 = GetAdrOfPkmnInParty(*(uint **)(v2[3] + 4), i);
    if ( !GetPkmnData(v7, 0x4Cu, 0) )
      v2[v2[1]++ + 153] = i;
  }
  Function_223b74c(v2);
  Function_223b900(v2);
  Function_223ba44(v2);
  v2[1779] = 0;
  v2[1778] = Function_223c9b0(v2);
  Function_223caa0(v2[1778], -2925, 81920);
  Function_223caa0(v2[1778], -1757, 245760);
  Function_223caa0(v2[1778], -586, 163840);
  Function_223caa0(v2[1778], 586, 573440);
  Function_223caa0(v2[1778], 1757, 491520);
  Function_223caa0(v2[1778], 2925, 655360);
  v2[1779] = Function_223cd94(v2);
  REG_POWERCNT |= (uint)&REG_POWERCNT >> 11;
  *v2 = 0;
  v2[1777] = Function_223b744(Function_223b6cc, v2, 6);
  Function_2004550(8u, 0x493u);
  return 1;
}

//----- (0223B2E4) --------------------------------------------------------
int __fastcall Function_86_223b2e4(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v2 = a2;
  v3 = *a2;
  v4 = a1;
  if ( v3 )
  {
    if ( v3 == 1 && Function_223cd80() )
      return 1;
  }
  else
  {
    v5 = LoadOverlayData1c(a1);
    Call_RemoveTaskFromTaskList(*(int **)(v5 + 7108));
    Function_223cf44(*(uint *)(v5 + 7116));
    Function_223cd34(*(uint *)(v5 + 7112));
    Function_223bd68(v5);
    Function_223ba34(v5);
    Function_223b8c4(v5);
    Function_200b3f0(*(uint **)(v5 + 7136), v6);
    Function_20237bc_FreeMsg(*(uint *)(v5 + 7140), v7);
    Function_20237bc_FreeMsg(*(uint *)(v5 + 7144), v8);
    Function_200b190(*(ushort **)(v5 + 7148));
    Call_FS_CloseFile(*(int **)(v5 + 7152));
    FreeSomeDataAndStore0InOverlayData1c(v4);
    Function_201807c(63);
    ++*v2;
  }
  return 0;
}

//----- (0223B394) --------------------------------------------------------
int __fastcall Function_86_223b394(int a1, uint *a2)
{
  uint *v2;
  uint *v3;

  v2 = a2;
  v3 = (uint *)LoadOverlayData1c(a1);
  if ( *v2 >= 5u )
    return 1;
  if ( ((int (*)(void))dword_223D3B4[*v2 + 1])() )
  {
    *v3 = 0;
    v3[2] = 0;
    ++*v2;
  }
  return 0;
}

//----- (0223B3C8) --------------------------------------------------------
int __fastcall Function_223b3c8(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  v2 = *a1;
  if ( v2 )
  {
    if ( v2 == 1 && Function_200f2ac() )
      return 1;
  }
  else
  {
    Function_200f174(3u, 1, 1, 0, 16, 1, 63);
    ++*v1;
  }
  return 0;
}

//----- (0223B40C) --------------------------------------------------------
int __fastcall Function_223b40c(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  v2 = *a1;
  if ( v2 )
  {
    if ( v2 == 1 && Function_200f2ac() && !Function_2005684() )
      return 1;
  }
  else
  {
    Function_200f174(3u, 0, 0, 0, 2, 1, 63);
    Function_200564c(0, 30);
    ++*v1;
  }
  return 0;
}

//----- (0223B464) --------------------------------------------------------
int __fastcall Function_223b464(uint *a1, int a2, char a3)
{
  uint *v3;
  int v4;
  int result;
  int v6;

  v3 = a1;
  v4 = a1[2];
  if ( v4 )
  {
    a1[2] = v4 - 1;
    result = 0;
  }
  else
  {
    v6 = *a1;
    switch ( a3 )
    {
      case 0:
        dword_223D560[0] = 0;
        *a1 = v6 + 1;
        goto LABEL_5;
      case 1:
LABEL_5:
        Function_223bde0(a1, dword_223D560[0], 0);
        Function_223c104(v3, dword_223D560[0], 1);
        ++*v3;
        goto LABEL_17;
      case 2:
        if ( Function_223b6b4(a1, 0) )
        {
          v3[2] = 20;
          ++*v3;
        }
        goto LABEL_17;
      case 3:
        Function_223c2cc();
        Function_223c3e4(v3, dword_223D560[0], 1);
        ++*v3;
        goto LABEL_17;
      case 4:
        if ( ((int (*)(void))Function_223b6b4)() && Function_223b6b4(v3, 1) )
        {
          v3[2] = 30;
          ++*v3;
        }
        goto LABEL_17;
      case 5:
        Function_223c664();
        Function_223c158(v3, dword_223D560[0], 1);
        ++*v3;
        goto LABEL_17;
      case 6:
        if ( !((int (*)(void))Function_223b6b4)() )
          goto LABEL_17;
        Function_2021cac(v3[dword_223D560[0] + 84], 0);
        if ( ++dword_223D560[0] + 1 >= v3[1] )
        {
          result = 1;
        }
        else
        {
          v3[2] = 30;
          *v3 = 1;
LABEL_17:
          result = 0;
        }
        break;
      default:
        goto LABEL_17;
    }
  }
  return result;
}

//----- (0223B574) --------------------------------------------------------
int __fastcall Function_223b574(int a1)
{
  uint *v1;
  int v2;
  int result;

  v1 = (uint *)a1;
  v2 = *(uint *)(a1 + 8);
  if ( v2 )
  {
    *(uint *)(a1 + 8) = v2 - 1;
    result = 0;
  }
  else
  {
    switch ( (uchar)*(uint *)a1 )
    {
      case 0u:
        LoadFromNARC_RCSN(105, 1, *(uint **)(a1 + 16), 3u, 0, 0, 1, 63);
        ++*v1;
        goto LABEL_18;
      case 1u:
        Function_223bea0();
        Function_223c1b8(v1, 1);
        ++*v1;
        goto LABEL_18;
      case 2u:
        if ( Function_223b6b4(a1, 0) )
        {
          if ( Function_223b6b4(v1, 1) )
          {
            v1[2] = 20;
            ++*v1;
          }
        }
        goto LABEL_18;
      case 3u:
        Function_223c20c();
        ++*v1;
        goto LABEL_18;
      case 4u:
        if ( Function_223b6b4(a1, 0) )
        {
          Function_223c72c(v1);
          v1[2] = 20;
          ++*v1;
        }
        goto LABEL_18;
      case 5u:
        Function_223c840();
        ++*v1;
        goto LABEL_18;
      case 6u:
        if ( Function_223b6b4(a1, 0) )
        {
          v1[2] = 20;
          ++*v1;
        }
        goto LABEL_18;
      case 7u:
        Function_223cf5c(*(uint *)(a1 + 7116));
        ++*v1;
        goto LABEL_18;
      case 8u:
        if ( !(dword_21BF6C4 & 3) )
          goto LABEL_18;
        result = 1;
        break;
      default:
LABEL_18:
        result = 0;
        break;
    }
  }
  return result;
}

//----- (0223B684) --------------------------------------------------------
int __fastcall Function_223b684(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( *a1 )
  {
    if ( *a1 == 1 && Function_223b6b4(a1, 0) )
      return 1;
  }
  else
  {
    Function_223c26c();
    ++*v1;
  }
  return 0;
}

//----- (0223B6B4) --------------------------------------------------------
BOOL __fastcall Function_223b6b4(int a1, int a2)
{
  return *(uint *)(a1 + 4 * a2 + 7120) == 0;
}

//----- (0223B6CC) --------------------------------------------------------
int __fastcall Function_223b6cc(int a1, int *a2)
{
  int *v2;
  int result;
  int v4;
  int v5;

  v2 = a2;
  result = 0x8000000;
  if ( !(GFX_STATUS & 0x8000000) )
  {
    G3X_Reset();
    Function_20b275c(17, 0, 0);
    Function_223cd00(v2[1778]);
    v5 = 1;
    Function_20b275c(18, (int)&v5, 1);
    Function_20b275c(17, 0, 0);
    Function_223d220(v2[1779]);
    v4 = 1;
    Function_20b275c(18, (int)&v4, 1);
    GFX_FLUSH = 1;
    Function_20219f8(v2[9]);
    result = Function_200a858();
  }
  return result;
}

//----- (0223B744) --------------------------------------------------------
uint *__fastcall Function_223b744(int a1, int a2, uint a3)
{
  return AddTaskToTaskList2(a1, a2, a3);
}

//----- (0223B74C) --------------------------------------------------------
uint __fastcall Function_223b74c(int a1)
{
  int v1;
  int v2;
  int v3;
  int *v4;

  v1 = a1;
  *(uint *)(a1 + 16) = Function_2018340(0x3Fu);
  GX_SetBanks(dword_223D4B0);
  REG_POWERCNT &= 0x7FFFu;
  SetGraphicsModes(dword_223D3A8);
  Function_20183c4(*(uint **)(v1 + 16), 1u, dword_223D434, 0);
  Function_20183c4(*(uint **)(v1 + 16), 2u, dword_223D3FC, 0);
  Function_20183c4(*(uint **)(v1 + 16), 3u, dword_223D418, 0);
  Function_20196c0(*(uint **)(v1 + 16), 1, 0, 1, 0);
  Function_2019cb8(*(uint *)(v1 + 16), 1, 0, 0, 0, 0x20u, 0x20u, 0);
  Function_201a7e8(*(uint **)(v1 + 16), v1 + 20, 1, 0, 0, 0x20u, 0x18u, 1, 1);
  Function_201ada4_ClearTextBox(v1 + 20, 0);
  Function_201accc(v1 + 20);
  Function_201a9f4(v1 + 20);
  v4 = LoadFromNARC_8(105, 0x3Fu, v2, v3);
  Function_20070e8((int)v4, 3u, *(uint **)(v1 + 16), 3u, 0, 0, 1, 63);
  Function_200710c((int)v4, 0, *(uint **)(v1 + 16), 3u, 0, 0, 1, 63);
  Function_2007130((int)v4, 4u, 0, 0, 96, 63);
  Function_200710c((int)v4, 2u, *(uint **)(v1 + 16), 2u, 0, 0, 1, 63);
  Function_2019448(*(uint **)(v1 + 16), 1u);
  WIN0_X1 = 0;
  WIN0_Y1 = 0;
  WIN_IN = WIN_IN & 0xFFC0 | 0x3B;
  WIN_OUT = WIN_OUT & 0xFFC0 | 0x3F;
  REG_DISPCNT = REG_DISPCNT & 0xFFFF1FFF | 0x2000;
  return Call_FS_CloseFile(v4);
}

//----- (0223B8C4) --------------------------------------------------------
uint __fastcall Function_223b8c4(int a1)
{
  int v1;

  v1 = a1;
  REG_DISPCNT &= 0xFFFF1FFF;
  Function_201a8fc(a1 + 20);
  Function_2019044(*(uint *)(v1 + 16), 1);
  Function_2019044(*(uint *)(v1 + 16), 2);
  Function_2019044(*(uint *)(v1 + 16), 3);
  return free(*(uint *)(v1 + 16));
}

//----- (0223B900) --------------------------------------------------------
int __fastcall Function_223b900(int a1)
{
  int v1;

  v1 = a1;
  Function_20b28cc();
  G3X_InitMtxStack();
  GFX_CONTROL &= 0xCFFDu;
  GFX_CONTROL = GFX_CONTROL & 0xCFFF | 0x10;
  GFX_CONTROL &= 0xCFFBu;
  GFX_CONTROL = GFX_CONTROL & 0xCFFF | 8;
  G3X_SetClearColor(0, 0, 0x7FFF, 63, 0);
  GFX_FLUSH = 2;
  GFX_VIEWPORT = -1073807360;
  Function_20a5a94(1u, 1);
  Function_20a5d88(0x4000, 1);
  Function_201ff0c(1u, 1);
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 2;
  G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 0, 24, 0, 0);
  return Function_223b9a8(v1);
}

//----- (0223B9A8) --------------------------------------------------------
int *__fastcall Function_223b9a8(int a1)
{
  int v1;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  *(uint *)(a1 + 7084) = Function_20203ac(0x3Fu);
  *(uint *)(v1 + 7088) = 0;
  *(uint *)(v1 + 7092) = 0;
  *(uint *)(v1 + 7096) = 0;
  *(ushort *)(v1 + 7100) = 0;
  *(ushort *)(v1 + 7102) = 0;
  *(ushort *)(v1 + 7104) = 0;
  Function_20206d0((uint *)(v1 + 7088), 20480, (ushort *)(v1 + 7100), 4004, 0, 1, *(uint *)(v1 + 7084));
  v4 = 4096;
  v3 = 0;
  v5 = 0;
  Function_2020680(&v3, *(uint **)(v1 + 7084));
  Function_20203d4(*(uint *)(v1 + 7084));
  return Function_20206bc(4096, 2048000, *(uint *)(v1 + 7084));
}

//----- (0223BA34) --------------------------------------------------------
uint __fastcall Function_223ba34(int a1)
{
  return Call_free5(*(uint *)(a1 + 7084));
}

//----- (0223BA44) --------------------------------------------------------
uint __fastcall Function_223ba44(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int *v5;
  int v6;
  int v8;
  int v9;

  v4 = a1;
  v5 = LoadFromNARC_8(27, 0x3Fu, a3, a4);
  Function_20a7944();
  Function_200a784(0, 128, 0, 32, 0, 0x80u, 0, 0x20u, 0x3Fu);
  v4[9] = Function_20095c4(64, (int)(v4 + 10), 63, v6);
  v4[91] = Function_2007204((int)v5, 0x4Du, 0, &v9, 63);
  v4[92] = Function_2007220((int)v5, 0x4Eu, 0, &v8, 63);
  Function_223bac8(v4, v9, v8, v5);
  Call_FS_CloseFile(v5);
  return Function_201ff0c(0x10u, 1);
}

//----- (0223BAC8) --------------------------------------------------------
uint __fastcall Function_223bac8(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint *v6;
  int *v7;
  uint v8;
  uint v9;
  int v10;
  uint v12;
  int v13;
  int v14;
  uint v15;
  int v16;
  int v17;
  int v18;
  uint *v19;
  ushort *v20;
  char v21;
  char v22;
  int v23;
  int v24;
  int v25;
  int v26;
  char **v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  char *v34;
  int v35;
  char *v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  char v42;
  char v43;
  ushort v44;
  ushort v45;

  v4 = a4;
  v5 = a1;
  v37 = a2;
  v38 = a3;
  v35 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 3;
  v34 = &v22;
  v36 = &v21;
  v26 = *(uint *)(a1 + 36);
  v27 = &v34;
  v32 = 1;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v33 = 63;
  v18 = Function_20071b4(a4, 0x4Cu, 0, &v20, 63);
  v17 = Function_20071ec(v4, 0x4Bu, &v19, 63);
  v16 = 0;
  if ( *(uint *)(v5 + 4) > 0 )
  {
    v6 = (uint *)v5;
    v15 = 0;
    v14 = 0;
    v13 = 3200;
    v12 = v5 + 372;
    do
    {
      NNS_G2dInitImageProxy((int)&v22);
      NNS_G2dInitImagePaletteProxy((int)&v21);
      NNS_G2dLoadImage1DMapping(v20, v15, 1, &v22);
      NNS_G2dLoadPalette(v19, v14, 1, &v21);
      v31 = v16 + 1;
      v6[84] = Function_2021b90(&v26);
      Function_2021cac(v6[84], 0);
      v7 = GetAdrOfPkmnInParty(*(uint **)(*(uint *)(v5 + 12) + 4), v6[153]);
      Function_2075ef4((int)&v43, (int)v7, 2u);
      v6[159] = GetPkmnData(v7, 5u, 0);
      v6[165] = GetPkmnData(v7, 0x70u, 0);
      v8 = GetPkmnData(v7, 0, 0);
      Function_2013720(*(ushort *)&v43, v44, 0x3Fu, dword_223D450, v5 + 684, v8, 1, 2, v6[159]);
      DC_FlushRange(v5 + 684, 3200);
      GX_LoadOBJ((int *)(v5 + 684), v15, 0xC80u);
      v9 = GetPkmnData(v7, 0, 0);
      Function_2013720(*(ushort *)&v43, v44, 0x3Fu, dword_223D460, v5 + 684, v9, 1, 2, v6[159]);
      DC_FlushRange(v5 + 684, 3200);
      GX_LoadOBJ((int *)(v5 + 684), v13, 0xC80u);
      Call_LoadFromNARC_RLCN(*(ushort *)&v43, v45, 1u, v14, 32, 63);
      Function_20789bc(*(uint *)(v5 + 7152), v12, v6[159] & 0xFFFF, 1);
      v15 += 6400;
      v14 += 32;
      v13 += 6400;
      v12 += 40;
      ++v6;
      ++v16;
    }
    while ( v16 < *(uint *)(v5 + 4) );
  }
  NNS_G2dInitImageProxy((int)&v22);
  NNS_G2dInitImagePaletteProxy((int)&v21);
  NNS_G2dLoadImage1DMapping(v20, 0x9600u, 1, &v22);
  NNS_G2dLoadPalette(v19, 192, 1, &v21);
  v10 = GetGender(**(uint **)(v5 + 12)) == 1;
  Function_2076aac(v10, 2, &v23);
  Function_20135f0(v23, v25, 0x3Fu, dword_223D450, v5 + 684);
  DC_FlushRange(v5 + 684, 3200);
  GX_LoadOBJ((int *)(v5 + 684), 38400, 0xC80u);
  Call_LoadFromNARC_RLCN(v23, v24, 1u, 192, 32, 63);
  v31 = 0;
  *(uint *)(v5 + 360) = Function_2021b90(&v26);
  Function_2021cac(*(uint *)(v5 + 360), 0);
  free(v17);
  return free(v18);
}

//----- (0223BD68) --------------------------------------------------------
int *__fastcall Function_223bd68(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = 0;
  if ( *(uint *)(a1 + 4) > 0 )
  {
    v3 = a1;
    do
    {
      Function_2021bd4(*(uint *)(v3 + 336));
      ++v2;
      v3 += 4;
    }
    while ( v2 < *(uint *)(v1 + 4) );
  }
  free(*(uint *)(v1 + 368));
  free(*(uint *)(v1 + 364));
  Function_2021964(*(int **)(v1 + 36));
  return Function_200a878();
}

//----- (0223BDAC) --------------------------------------------------------
int __fastcall Function_223bdac(int *a1, int a2)
{
  int *v2;

  v2 = a1;
  **(uint **)(a2 + 4) = 0;
  free(*(uint *)a2);
  return Call_RemoveTaskFromTaskList(v2);
}

//----- (0223BDC4) --------------------------------------------------------
uint *__fastcall Function_223bdc4(uint *result, int a2, int a3)
{
  *result = a2;
  result[1] = a3;
  return result;
}

//----- (0223BDCC) --------------------------------------------------------
uint *__fastcall Function_223bdcc(int a1)
{
  return AddTaskToTaskList3((int)Function_223bdac, a1, 0);
}

//----- (0223BDE0) --------------------------------------------------------
uint *__fastcall Function_223bde0(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  uint *v6;
  int v7;
  int v8;
  int v9;
  uint *result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = (uint *)malloc(0x3Fu, 44);
  v7 = v3 + 7120;
  Function_223bdc4(v6, (int)v6, v3 + 7120 + 4 * v5);
  v6[2] = *(uint *)(v3 + 4 * v4 + 336);
  v8 = 8 * v4 & 0xF;
  v9 = *(int *)((char *)&dword_223D37C[3] + v8);
  Function_223d264(v6 + 6, v9, *(int *)((char *)&dword_223D37C[4] + v8), 28);
  v6[3] = v9;
  v6[4] = 393216;
  v6[5] = 0;
  Function_2021c50((uint *)v6[2], v6 + 3);
  Function_2021cac(v6[2], 1);
  result = Function_223b744((int)Function_223be6c, (int)v6, 0);
  *(uint *)(v7 + 4 * v5) = result;
  return result;
}

//----- (0223BE6C) --------------------------------------------------------
int __fastcall Function_223be6c(int *a1, int a2)
{
  int v2;
  int *v3;
  int result;

  v2 = a2;
  v3 = a1;
  *(uint *)(a2 + 12) = Function_223d284(a2 + 24);
  Function_2021c50(*(uint **)(v2 + 8), (int *)(v2 + 12));
  result = Function_223d2a4(v2 + 24);
  if ( result )
  {
    Function_223bdcc(v2);
    result = Call_RemoveTaskFromTaskList(v3);
  }
  return result;
}

//----- (0223BEA0) --------------------------------------------------------
uint *__fastcall Function_223bea0(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;
  uint *result;

  v2 = a1;
  v3 = a2;
  v4 = (uint *)malloc(0x3Fu, 44);
  v3 *= 4;
  Function_223bdc4(v4, (int)v4, v2 + 7120 + v3);
  v4[2] = *(uint *)(v2 + 360);
  Function_223d264(v4 + 6, 950272, 425984, 28);
  v4[3] = 0x80000;
  v4[4] = 950272;
  v4[5] = 0;
  Function_2021c50((uint *)v4[2], v4 + 3);
  Function_2021cac(v4[2], 1);
  result = Function_223b744((int)Function_223bf10, (int)v4, 0);
  *(uint *)(v2 + 7120 + v3) = result;
  return result;
}

//----- (0223BF10) --------------------------------------------------------
int __fastcall Function_223bf10(int *a1, int a2)
{
  int v2;
  int *v3;
  int result;

  v2 = a2;
  v3 = a1;
  *(uint *)(a2 + 16) = Function_223d284(a2 + 24);
  Function_2021c50(*(uint **)(v2 + 8), (int *)(v2 + 12));
  result = Function_223d2a4(v2 + 24);
  if ( result )
  {
    Function_223bdcc(v2);
    result = Call_RemoveTaskFromTaskList(v3);
  }
  return result;
}

//----- (0223BF44) --------------------------------------------------------
int __fastcall Function_223bf44(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = Function_223d284(a2 + 8) >> 12;
  v5 = v4 + 96;
  if ( v4 < 0 )
    v4 = 0;
  if ( v5 < 0 )
    v5 = 0;
  if ( v4 > 255 )
  {
    v5 = 0;
    LOWORD(v4) = 0;
  }
  if ( v5 > 255 )
    LOBYTE(v5) = -1;
  WIN0_X1 = (uchar)v5 | ((ushort)v4 << 8) & 0xFF00;
  WIN0_Y1 = 8352;
  result = Function_223d2a4(v2 + 8);
  if ( result )
  {
    Function_223bdcc(v2);
    result = Call_RemoveTaskFromTaskList(v3);
  }
  return result;
}

//----- (0223BFAC) --------------------------------------------------------
int __fastcall Function_223bfac(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = Function_223d284(a2 + 8) >> 12;
  v5 = v4 + *(uint *)(v2 + 36);
  if ( v4 < 0 )
    v4 = 0;
  if ( v5 < 0 )
    v5 = 0;
  if ( v4 > 191 )
  {
    v5 = 0;
    LOWORD(v4) = 0;
  }
  if ( v5 > 191 )
    LOBYTE(v5) = -65;
  WIN0_X1 = *(ushort *)(v2 + 32) & 0xFF | (*(ushort *)(v2 + 28) << 8) & 0xFF00;
  WIN0_Y1 = (uchar)v5 | ((ushort)v4 << 8) & 0xFF00;
  result = Function_223d2a4(v2 + 8);
  if ( result )
  {
    Function_223bdcc(v2);
    result = Call_RemoveTaskFromTaskList(v3);
  }
  return result;
}

//----- (0223C01C) --------------------------------------------------------
int __fastcall Function_223c01c(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = Function_223d284(a2 + 8) >> 12;
  v5 = Function_223d284(v2 + 28) >> 12;
  if ( v4 < 0 )
    v4 = 0;
  if ( v5 < 0 )
    v5 = 0;
  if ( v4 > 255 )
  {
    v5 = 0;
    LOWORD(v4) = 0;
  }
  if ( v5 > 255 )
    LOBYTE(v5) = -1;
  v6 = *(uint *)(v2 + 52);
  v7 = (*(uint *)(v2 + 48) << 8) & 0xFF00;
  WIN0_X1 = ((ushort)v4 << 8) & 0xFF00 | (uchar)v5;
  WIN0_Y1 = (uchar)v6 | (ushort)v7;
  result = Function_223d2a4(v2 + 8);
  if ( result )
  {
    Function_223bdcc(v2);
    result = Call_RemoveTaskFromTaskList(v3);
  }
  return result;
}

//----- (0223C090) --------------------------------------------------------
int __fastcall Function_223c090(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = Function_223d284(a2 + 8) >> 12;
  v5 = Function_223d284(v2 + 28) >> 12;
  if ( v4 < 0 )
    v4 = 0;
  if ( v5 < 0 )
    v5 = 0;
  if ( v4 > 191 )
  {
    v5 = 0;
    LOWORD(v4) = 0;
  }
  if ( v5 > 191 )
    LOBYTE(v5) = -65;
  WIN0_X1 = *(ushort *)(v2 + 52) & 0xFF | (*(ushort *)(v2 + 48) << 8) & 0xFF00;
  WIN0_Y1 = (uchar)v5 | ((ushort)v4 << 8) & 0xFF00;
  result = Function_223d2a4(v2 + 8);
  if ( result )
  {
    Function_223bdcc(v2);
    result = Call_RemoveTaskFromTaskList(v3);
  }
  return result;
}

//----- (0223C104) --------------------------------------------------------
uint *__fastcall Function_223c104(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  uint *v6;
  uint *result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = (uint *)malloc(0x3Fu, 28);
  v3 += 7120;
  v5 *= 4;
  Function_223bdc4(v6, (int)v6, v3 + v5);
  Function_223d264(
    v6 + 2,
    *(int *)((char *)&dword_223D37C[7] + (8 * v4 & 0xF)),
    *(int *)((char *)&dword_223D37C[8] + (8 * v4 & 0xF)),
    28);
  result = Function_223b744((int)Function_223bf44, (int)v6, 1u);
  *(uint *)(v3 + v5) = result;
  return result;
}

//----- (0223C158) --------------------------------------------------------
uint *__fastcall Function_223c158(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  uint *v6;
  int v7;
  uint *result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = (uint *)malloc(0x3Fu, 40);
  v3 += 7120;
  v5 *= 4;
  Function_223bdc4(v6, (int)v6, v3 + v5);
  Function_223d264(v6 + 2, 0x20000, -655360, 28);
  v7 = *(int *)((char *)dword_223D374 + (4 * v4 & 7));
  v6[7] = v7;
  v6[8] = v7 + 96;
  v6[9] = 128;
  result = Function_223b744((int)Function_223bfac, (int)v6, 1u);
  *(uint *)(v3 + v5) = result;
  return result;
}

//----- (0223C1B8) --------------------------------------------------------
uint *__fastcall Function_223c1b8(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;
  uint *result;

  v2 = a1;
  v3 = a2;
  v4 = (uint *)malloc(0x3Fu, 40);
  v2 += 7120;
  v3 *= 4;
  Function_223bdc4(v4, (int)v4, v2 + v3);
  Function_223d264(v4 + 2, -589824, 98304, 28);
  v4[7] = 88;
  v4[8] = 168;
  v4[9] = 144;
  result = Function_223b744((int)Function_223bfac, (int)v4, 1u);
  *(uint *)(v2 + v3) = result;
  return result;
}

//----- (0223C20C) --------------------------------------------------------
uint *__fastcall Function_223c20c(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;
  uint *result;

  v2 = a1;
  v3 = a2;
  v4 = (uint *)malloc(0x3Fu, 56);
  v2 += 7120;
  v3 *= 4;
  Function_223bdc4(v4, (int)v4, v2 + v3);
  Function_223d264(v4 + 2, 360448, 0, 12);
  Function_223d264(v4 + 7, 688128, 1044480, 12);
  v4[12] = 24;
  v4[13] = 168;
  result = Function_223b744((int)Function_223c01c, (int)v4, 1u);
  *(uint *)(v2 + v3) = result;
  return result;
}

//----- (0223C26C) --------------------------------------------------------
uint *__fastcall Function_223c26c(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;
  uint *result;

  v2 = a1;
  v3 = a2;
  v4 = (uint *)malloc(0x3Fu, 56);
  v2 += 7120;
  v3 *= 4;
  Function_223bdc4(v4, (int)v4, v2 + v3);
  Function_223d264(v4 + 2, 98304, 393216, 24);
  Function_223d264(v4 + 7, 688128, 393216, 24);
  v4[12] = 0;
  v4[13] = 255;
  result = Function_223b744((int)Function_223c090, (int)v4, 1u);
  *(uint *)(v2 + v3) = result;
  return result;
}

//----- (0223C2CC) --------------------------------------------------------
uint *__fastcall Function_223c2cc(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint *v7;
  int v8;
  uchar *v9;
  int *v10;
  int *v11;
  int v12;
  int v13;
  int v14;
  int *v15;
  int *v16;
  int v17;
  int v18;
  int v19;
  uint *result;
  int v21;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v21 = a4;
  v7 = (uint *)malloc(0x3Fu, 120);
  v8 = v4 + 7120;
  Function_223bdc4(v7, (int)v7, v4 + 7120 + 4 * v21);
  v7[2] = *(uint *)(v4 + 4 * v5 + 336);
  v9 = (uchar *)(v4 + 372 + 40 * v5);
  v7[3] = v9;
  Function_20088e0((int)(v7 + 4), v9);
  v7[27] = v6;
  v7[28] = *(uint *)(v4 + 4 * v5 + 636);
  v7[29] = *(uint *)(v4 + 4 * v5 + 660);
  v10 = (int *)Function_2021f98(v7[2]);
  v11 = v7 + 9;
  v12 = 4;
  do
  {
    v13 = *v10;
    v14 = v10[1];
    v10 += 2;
    *v11 = v13;
    v11[1] = v14;
    v11 += 2;
    --v12;
  }
  while ( v12 );
  *v11 = *v10;
  v15 = v7 + 9;
  v16 = v7 + 18;
  v17 = 4;
  do
  {
    v18 = *v15;
    v19 = v15[1];
    v15 += 2;
    *v16 = v18;
    v16[1] = v19;
    v16 += 2;
    --v17;
  }
  while ( v17 );
  *v16 = *v15;
  NNS_G2dInitImageProxy((int)(v7 + 18));
  NNS_G2dSetImageLocation((int)(v7 + 18), 1, 6400 * v5 + 3200);
  result = AddTaskToTaskList1((int)Function_223c398, (int)v7, 0);
  *(uint *)(v8 + 4 * v21) = result;
  return result;
}

//----- (0223C398) --------------------------------------------------------
int __fastcall Function_223c398(int *a1, uint *a2)
{
  int v2;
  int *v3;
  int v4;

  v2 = (int)a2;
  v3 = a1;
  if ( a2[27] )
  {
    Function_2005844(a2[28] & 0xFFFF, a2[29] & 0xFF);
    *(uint *)(v2 + 108) = 0;
  }
  v4 = Function_2008900(v2 + 16);
  if ( v4 >= 0 )
    return Function_2021f7c(*(uint *)(v2 + 8), (int *)(v2 + 36 + 36 * v4));
  Function_223bdcc(v2);
  return Call_RemoveTaskFromTaskList(v3);
}

//----- (0223C3E4) --------------------------------------------------------
uint *__fastcall Function_223c3e4(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  uint *v5;
  int v6;
  uint *result;
  int v8;

  v3 = a1;
  v4 = a2;
  v8 = a3;
  v5 = (uint *)malloc(0x3Fu, 56);
  Function_223bdc4(v5, (int)v5, (int)&v3[v8 + 1780]);
  v5[2] = v3;
  v5[3] = v3[4];
  v5[4] = v3 + 5;
  v5[5] = v3[1784];
  v5[6] = v3[1785];
  v5[7] = v3[1786];
  v5[8] = v3[1787];
  if ( v4 & 1 )
    v6 = 0;
  else
    v6 = 120;
  v5[11] = v6;
  v5[9] = GetAdrOfPkmnInParty(*(uint **)(v3[3] + 4), v3[v4 + 153]);
  v5[10] = *(uint *)v3[3];
  v5[12] = 0;
  v5[13] = 0;
  result = AddTaskToTaskList1((int)Function_223c58c, (int)v5, 0);
  v3[v8 + 1780] = result;
  return result;
}

//----- (0223C47C) --------------------------------------------------------
int __fastcall Function_223c47c(int *a1, int a2)
{
  int *v2;
  int v3;
  int result;
  int v5;
  int v6;
  int v7;
  int i;

  v2 = a1;
  v3 = a2;
  result = Function_2023c5c(a1[7]);
  v5 = 0;
  for ( i = result; v5 < i; v3 += 16 )
  {
    Function_2023c9c(v2[6], v2[7], v5);
    Function_2002d7c(0, v2[6], 0);
    v6 = v2[11];
    v7 = v2[6];
    Function_201d78c(v2[4], 0);
    result = i;
    ++v5;
  }
  return result;
}

//----- (0223C4DC) --------------------------------------------------------
int __fastcall Function_223c4dc(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = *(uint *)(a1 + 36);
  Function_2076b10_Dummy();
  Function_200b538(*(uint *)(v1 + 20), 0, v3);
  v4 = Call_InitPkmnLevel(*(uint *)(v1 + 36));
  Function_200b60c(*(uint *)(v1 + 20), 1u, v4, 3, 0, 1);
  v5 = Call_DecidePkmnGender(*(uint *)(v1 + 36));
  if ( v5 )
  {
    if ( v5 == 1 )
      Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 32), 2u, *(ushort **)(v1 + 24));
    else
      Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 32), 3u, *(ushort **)(v1 + 24));
  }
  else
  {
    Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 32), 1u, *(ushort **)(v1 + 24));
  }
  return Function_200c388(*(uint **)(v1 + 20), *(uint *)(v1 + 28), *(uint *)(v1 + 24));
}

//----- (0223C54C) --------------------------------------------------------
int __fastcall Function_223c54c(int a1)
{
  int v1;
  int v2;
  int v3;
  uint v4;

  v1 = a1;
  v2 = Function_223d2a8(*(uint *)(a1 + 8), *(uint *)(v1 + 36), *(uint *)(v1 + 40));
  v3 = v2;
  if ( !v2 || v2 == 1 )
  {
    v4 = GetPkmnData(*(int **)(v1 + 36), 0x99u, 0);
    Function_200b8c8(*(uint *)(v1 + 20), 0, v4);
  }
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 32), v3 + 5, *(ushort **)(v1 + 24));
  return Function_200c388(*(uint **)(v1 + 20), *(uint *)(v1 + 28), *(uint *)(v1 + 24));
}

//----- (0223C58C) --------------------------------------------------------
int __fastcall Function_223c58c(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  int result;
  int v6;
  int v7;

  v2 = a2;
  v3 = a1;
  v4 = *(uint *)(a2 + 48);
  if ( v4 )
  {
    result = v4 - 1;
    *(uint *)(a2 + 48) = result;
  }
  else
  {
    result = *(uint *)(a2 + 52);
    switch ( (uchar)result )
    {
      case 0:
        Function_200b1b8_CallMsgDecrypt(*(ushort ***)(a2 + 32), 0, *(ushort **)(a2 + 28));
        Function_223c47c((int *)v2, 16);
        Function_201accc(*(uint *)(v2 + 16));
        *(uint *)(v2 + 48) = 20;
        result = *(uint *)(v2 + 52) + 1;
        *(uint *)(v2 + 52) = result;
        break;
      case 1:
        GetPkmnData(*(int **)(a2 + 36), 0x77u, *(ushort **)(a2 + 28));
        Function_223c47c((int *)v2, 48);
        Function_223c4dc(v2);
        Function_223c47c((int *)v2, 64);
        Function_201accc(*(uint *)(v2 + 16));
        *(uint *)(v2 + 48) = 20;
        result = *(uint *)(v2 + 52) + 1;
        *(uint *)(v2 + 52) = result;
        break;
      case 2:
        v6 = *(uint *)(a2 + 36);
        Function_2076b10_Dummy();
        Function_200b5ec(*(int **)(v2 + 20), 0, v7);
        Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v2 + 32), 4u, *(ushort **)(v2 + 24));
        Function_200c388(*(uint **)(v2 + 20), *(uint *)(v2 + 28), *(uint *)(v2 + 24));
        Function_223c47c((int *)v2, 96);
        Function_223c54c(v2);
        Function_223c47c((int *)v2, 112);
        Function_201accc(*(uint *)(v2 + 16));
        result = *(uint *)(v2 + 52) + 1;
        *(uint *)(v2 + 52) = result;
        break;
      case 3:
        Function_223bdcc(a2);
        result = Call_RemoveTaskFromTaskList(v3);
        break;
      default:
        return result;
    }
  }
  return result;
}

//----- (0223C664) --------------------------------------------------------
uint *__fastcall Function_223c664(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;
  uint *result;

  v2 = a1;
  v3 = a2;
  v4 = (uint *)malloc(0x3Fu, 48);
  v3 *= 4;
  Function_223bdc4(v4, (int)v4, v2 + 7120 + v3);
  v4[3] = *(uint *)(v2 + 16);
  v4[4] = v2 + 20;
  v4[11] = 1;
  v4[10] = 0;
  Function_223d264(v4 + 5, 0, 0x100000, 28);
  result = Function_223b744((int)Function_223c6b4, (int)v4, 0);
  *(uint *)(v2 + 7120 + v3) = result;
  return result;
}

//----- (0223C6B4) --------------------------------------------------------
int __fastcall Function_223c6b4(int *a1, int *a2)
{
  int *v2;
  int *v3;
  int result;
  int v5;

  v2 = a2;
  v3 = a1;
  result = a2[10];
  if ( result )
  {
    if ( result == 1 )
    {
      Function_201ada4_ClearTextBox(a2[4], 0);
      Function_201accc(v2[4]);
      result = v2[10] + 1;
      v2[10] = result;
    }
    else if ( result == 2 )
    {
      Function_2019184(a2[3], a2[11] & 0xFF, 3u, 0);
      Function_223bdcc((int)v2);
      result = Call_RemoveTaskFromTaskList(v3);
    }
  }
  else
  {
    v5 = Function_223d284(a2 + 5);
    Function_2019184(v2[3], v2[11] & 0xFF, 3u, v5 >> 12);
    result = Function_223d2a4(v2 + 5);
    if ( result )
    {
      result = v2[10] + 1;
      v2[10] = result;
    }
  }
  return result;
}

//----- (0223C72C) --------------------------------------------------------
int *__fastcall Function_223c72c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = a1;
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(a1 + 7148), 0xCu, *(ushort **)(a1 + 7140));
  Function_2002d7c(0, *(uint *)(v1 + 7140), 0);
  v2 = *(uint *)(v1 + 7140);
  Function_201d78c(v1 + 20, 0);
  v3 = **(uint **)(v1 + 12);
  Function_200b498(*(uint *)(v1 + 7136), 0);
  v4 = GetSecretTrainerID(**(uint **)(v1 + 12));
  Function_200b60c(*(uint *)(v1 + 7136), 1u, v4, 5, 2, 1);
  v5 = Function_202cc58(*(ushort **)(*(uint *)(v1 + 12) + 8));
  Function_200b60c(*(uint *)(v1 + 7136), 2u, v5, 3, 0, 1);
  v6 = Function_202cc5c(*(uint *)(*(uint *)(v1 + 12) + 8));
  Function_200b60c(*(uint *)(v1 + 7136), 3u, v6, 2, 2, 1);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 7148), 0xDu, *(ushort **)(v1 + 7144));
  Function_200c388(*(uint **)(v1 + 7136), *(uint *)(v1 + 7140), *(uint *)(v1 + 7144));
  Function_2002d7c(0, *(uint *)(v1 + 7140), 0);
  v7 = *(uint *)(v1 + 7140);
  Function_201d78c(v1 + 20, 0);
  return Function_201accc(v1 + 20);
}

//----- (0223C840) --------------------------------------------------------
uint *__fastcall Function_223c840(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;
  int v5;
  int v6;
  uint *v7;
  int *v8;
  int v9;
  int *v10;
  int *v11;
  int *v12;
  int v13;
  uint *result;
  int v15;
  int *v16;
  int v17;
  int v18;
  int v19;

  v2 = a1;
  v3 = a2;
  v4 = (uint *)malloc(0x3Fu, 220);
  v18 = v2 + 7120;
  v19 = 4 * v3;
  Function_223bdc4(v4, (int)v4, v2 + 7120 + 4 * v3);
  v4[3] = v2;
  v4[2] = v2 + 336;
  v4[4] = 0;
  v17 = 0;
  v4[6] = 0;
  v5 = *(uint *)(v2 + 4);
  v4[5] = v5;
  if ( v5 > 0 )
  {
    v6 = 0;
    v16 = &dword_223D4D8;
    v7 = v4;
    v8 = &dword_223D4D8;
    do
    {
      v9 = v16[1];
      v10 = v7 + 37;
      *v10 = *v16;
      v10[1] = v9;
      v7[39] = v16[2];
      Function_2021c50(*(uint **)(v4[2] + v6), v8);
      Function_2021cac(*(uint *)(v4[2] + v6), 1);
      v16 += 3;
      v7 += 3;
      v8 += 3;
      v6 += 4;
      ++v17;
    }
    while ( v17 < v4[5] );
  }
  v11 = &dword_223D3CC;
  v12 = &dword_223D4D8;
  v15 = 0;
  v13 = (int)(v4 + 7);
  do
  {
    Function_223d264(v13, *v12, *v11, 8);
    ++v11;
    v12 += 3;
    v13 += 20;
    ++v15;
  }
  while ( v15 < 6 );
  result = AddTaskToTaskList1((int)Function_223c914, (int)v4, 0);
  *(uint *)(v18 + v19) = result;
  return result;
}

//----- (0223C914) --------------------------------------------------------
int __fastcall Function_223c914(int *a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  int *v5;
  int v6;
  int v7;
  int result;
  int *v9;
  uint *v10;
  int v11;

  v2 = a2;
  v3 = a2[4];
  v4 = 0;
  v9 = a1;
  if ( v3 > 0 )
  {
    v11 = (int)(v2 + 7);
    v10 = v2;
    v5 = v2 + 37;
    v6 = 0;
    do
    {
      v10[37] = Function_223d284(v11);
      if ( v4 < v2[5] )
        Function_2021c50(*(uint **)(v2[2] + v6), v5);
      v3 = v2[4];
      v11 += 20;
      ++v4;
      v10 += 3;
      v5 += 3;
      v6 += 4;
    }
    while ( v4 < v3 );
  }
  v7 = v2[6];
  if ( v7 )
  {
    result = v7 - 1;
    v2[6] = result;
  }
  else if ( v3 >= 6 )
  {
    result = Function_223d2a4(&v2[5 * (v2[5] - 1) + 7]);
    if ( result )
    {
      Function_223bdcc((int)v2);
      result = Call_RemoveTaskFromTaskList(v9);
    }
  }
  else
  {
    v2[6] = 4;
    result = v2[4] + 1;
    v2[4] = result;
  }
  return result;
}

//----- (0223C9B0) --------------------------------------------------------
uint *__fastcall Function_223c9b0(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = malloc(0x3Fu, 2116);
  v3 = v2;
  if ( !v2 )
    return 0;
  dword_223D540 = 1;
  dword_223D560[1] = 2;
  *(uint *)(v2 + 2108) = 0;
  *(uint *)(v2 + 2104) = Function_223b744((int)Function_223ca64, v2, 5u);
  *(uint *)(v3 + 2112) = v1;
  return Function_223b744((int)Function_223ca10, v3, 3u);
}

//----- (0223CA10) --------------------------------------------------------
int *__fastcall Function_223ca10(int a1, int *a2)
{
  int *v2;

  v2 = a2;
  Function_20c11a8(v2, (int)(v2 + 5), 2048);
  Function_20bf7dc(v2, 0x7FFF, 16912, 0);
  return Function_20bf820(v2, 16912, 0, 0);
}

//----- (0223CA64) --------------------------------------------------------
int __fastcall Function_223ca64(int a1, int a2)
{
  int v2;

  v2 = a2;
  *(uint *)(a2 + 2068) = Function_20c11c8(a2);
  return DC_FlushRange(v2 + 20, *(uint *)(v2 + 2068));
}

//----- (0223CAA0) --------------------------------------------------------
int __fastcall Function_223caa0(int a1)
{
  int result;
  int v2;

  result = Function_201ced0(a1);
  v2 = result;
  if ( *(uint *)(result + 2108) < 8 )
  {
    *(uint *)(result + 4 * *(uint *)(result + 2108) + 2072) = Function_223cae4();
    ++dword_223D560[1];
    result = *(uint *)(v2 + 2108) + 1;
    *(uint *)(v2 + 2108) = result;
  }
  return result;
}

//----- (0223CAE4) --------------------------------------------------------
uint *__fastcall Function_223cae4(int a1, short a2, int a3, int a4)
{
  short v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  v8 = malloc(0x3Fu, 2104);
  if ( !v8 )
    return 0;
  *(uint *)v8 = v5;
  v9 = dword_223D470[v7];
  *(ushort *)(v8 + 2072) = v4;
  *(uint *)(v8 + 2064) = v9;
  *(uint *)(v8 + 2052) = 0;
  *(uint *)(v8 + 2056) = v6;
  *(uint *)(v8 + 2060) = *((short *)dword_223D37C + v7);
  *(uint *)(v8 + 2068) = v7;
  *(ushort *)(v8 + 2074) = v4 - 80;
  *(ushort *)(v8 + 2076) = -4096;
  *(ushort *)(v8 + 2078) = 0;
  *(ushort *)(v8 + 2080) = v4 + 80;
  *(ushort *)(v8 + 2082) = -4096;
  *(ushort *)(v8 + 2084) = 0;
  return Function_223b744((int)Function_223cb74, v8, 4u);
}

//----- (0223CB74) --------------------------------------------------------
int __fastcall Function_223cb74(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  uint v6;
  int v7;
  int v8;

  v2 = a2;
  *(uint *)(v2 + 2056) += *(uint *)(v2 + 2060);
  v3 = *(uint *)(a2 + 2056);
  if ( *(uint *)(a2 + 2060) <= 0 )
  {
    if ( v3 <= 40960 )
      *(uint *)(a2 + 2060) = -*(uint *)(a2 + 2060);
  }
  else if ( v3 >= 696320 )
  {
    *(uint *)(a2 + 2060) = -*(uint *)(a2 + 2060);
  }
  v4 = *(uint *)(a2 + 2056) >> 12;
  v5 = Function_201d1d4((ushort)v4);
  v6 = *(short *)(v2 + 2072) + (uint)((ll_mul(v5, 10240LL) + 2048) >> 12);
  v7 = Function_201d15c((ushort)v4);
  v8 = (ull)((ll_mul(v7, 10240LL) + 2048) >> 12) - 4096;
  *(ushort *)(v2 + 2086) = v6 - 576;
  *(uint *)(v2 + 2088) = (ushort)v8;
  *(ushort *)(v2 + 2092) = v6 + 576;
  *(uint *)(v2 + 2094) = (ushort)v8;
  Function_20bf790(*(int **)v2, 0, 0, 2, *(uint *)(v2 + 2068), 16, 0);
  Function_20bf8f0(*(int **)v2, 1);
  Function_20bf6c0(*(int **)v2, *(uint *)(v2 + 2064) & 0xFFFF);
  Function_20bf73c(*(int **)v2, *(ushort *)(v2 + 2074), *(ushort *)(v2 + 2076), *(ushort *)(v2 + 2078));
  Function_20bf73c(*(int **)v2, *(ushort *)(v2 + 2080), *(ushort *)(v2 + 2082), *(ushort *)(v2 + 2084));
  Function_20bf73c(*(int **)v2, *(ushort *)(v2 + 2092), *(ushort *)(v2 + 2094), *(ushort *)(v2 + 2096));
  Function_20bf73c(*(int **)v2, *(ushort *)(v2 + 2086), *(ushort *)(v2 + 2088), *(ushort *)(v2 + 2090));
  return Function_20bf91c(*(uint *)v2);
}

//----- (0223CD00) --------------------------------------------------------
int *__fastcall Function_223cd00(int *result)
{
  int v1;

  if ( result )
  {
    v1 = Function_201ced0((int)result);
    MATRIX_PUSH = 0;
    MEMORY[0x1FF85B8](3, v1 + 20, *(uint *)(v1 + 2068));
    result = &MATRIX_POP;
    MATRIX_POP = 1;
  }
  return result;
}

//----- (0223CD34) --------------------------------------------------------
int __fastcall Function_223cd34(int result)
{
  int v1;
  int v2;
  int v3;
  int v4;

  dword_223D540 = 0;
  if ( result )
  {
    v1 = Function_201ced0(result);
    v2 = 0;
    if ( *(uint *)(v1 + 2108) > 0 )
    {
      v3 = v1;
      do
      {
        v4 = Function_201ced0(*(uint *)(v3 + 2072));
        free(v4);
        ++v2;
        v3 += 4;
      }
      while ( v2 < *(uint *)(v1 + 2108) );
    }
    result = free(v1);
  }
  return result;
}

//----- (0223CD80) --------------------------------------------------------
BOOL Function_223cd80()
{
  return dword_223D560[1] == 0;
}

//----- (0223CD94) --------------------------------------------------------
uint *Function_223cd94()
{
  uint *v0;
  uint v1;
  uint v2;
  uint v3;
  short *v4;
  short v5;
  int v6;
  ushort *v7;
  uint v8;
  uint v9;
  uint v10;
  uint v11;
  int v12;
  int v13;
  short v15;
  short v16;
  short v17;
  ushort *v18;
  ushort *v19;
  ushort *v20;
  uint *v21;
  uint v22;
  int v23;
  int v24;
  uint *v25;

  v25 = (uint *)malloc(0x3Fu, 36196);
  v23 = PRNG();
  SetPRNGSeed(13716);
  v0 = v25;
  v24 = 0;
  v22 = 0;
  v21 = v25 + 13;
  v20 = v25 + 10;
  v19 = (ushort *)((char *)v25 + 46);
  v18 = v25 + 10;
  do
  {
    v0[2] = dword_223D490[v22++];
    if ( v22 >= 8 )
      v22 = 0;
    v1 = PRNG();
    v17 = (v1 >> 31) + __ROR4__((v1 << 19) - (v1 >> 31), 19) - 4096;
    v2 = PRNG();
    v16 = (v2 >> 31) + __ROR4__((v2 << 19) - (v2 >> 31), 19) + 4096;
    v3 = PRNG();
    s32_div_f(v3, 656);
    v4 = &word_223D3E4;
    v15 = v5 - 328;
    v6 = 0;
    v7 = v0;
    do
    {
      v7[8] = v17 + *v4;
      v7[9] = v16 + v4[1];
      v7[10] = v15 + v4[2];
      *((ushort *)v0 + 20) = 0;
      *((ushort *)v0 + 21) = 0;
      *((ushort *)v0 + 22) = 0;
      v8 = PRNG();
      *((ushort *)v0 + 23) = (v8 >> 31) + __ROR4__((v8 << 23) - (v8 >> 31), 23) + 512;
      v9 = PRNG();
      *((ushort *)v0 + 24) = (v9 >> 31) + __ROR4__((v9 << 23) - (v9 >> 31), 23) + 512;
      v10 = PRNG();
      *((ushort *)v0 + 25) = (v10 >> 31) + __ROR4__((v10 << 23) - (v10 >> 31), 23) + 512;
      MTX_Identity44_(v21);
      ++v6;
      v4 += 3;
      v7 += 3;
    }
    while ( v6 < 4 );
    v11 = PRNG() & 7;
    v12 = v11 - 1;
    if ( v11 )
    {
      do
      {
        Function_20bd1e4(v18, v19, v20);
        v13 = v12--;
      }
      while ( v13 );
    }
    v0 += 28;
    v21 += 28;
    v20 += 56;
    v19 += 56;
    v18 += 56;
    ++v24;
  }
  while ( v24 < 48 );
  SetPRNGSeed(v23);
  *v25 = 0;
  v25[1] = 0;
  v25[9032] = 0;
  MATRIX_CONTROL = 2;
  return AddTaskToTaskList1((int)Function_223cf6c, (int)v25, 2u);
}

//----- (0223CF44) --------------------------------------------------------
int __fastcall Function_223cf44(int result)
{
  int *v1;
  int v2;

  v1 = (int *)result;
  if ( result )
  {
    v2 = Function_201ced0(result);
    free(v2);
    result = Call_RemoveTaskFromTaskList(v1);
  }
  return result;
}

//----- (0223CF5C) --------------------------------------------------------
uint *__fastcall Function_223cf5c(uint *result)
{
  if ( result )
  {
    result = (uint *)Function_201ced0((int)result);
    *result = 1;
  }
  return result;
}

//----- (0223CF6C) --------------------------------------------------------
int __fastcall Function_223cf6c(int a1, uint *a2, int a3, int a4)
{
  uint *v4;
  int result;
  int *v6;
  uint *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int *v12;
  ushort *v13;
  ushort *v14;
  ushort *v15;
  int v16;
  short v17;
  short v18;
  short v19;
  char v20;
  int v21;

  v21 = a4;
  v4 = a2;
  result = *a2;
  if ( *a2 )
  {
    Function_20c11a8(a2 + 1346, (int)(a2 + 1351), 30720);
    Function_20bf790(v4 + 1346, 3, 0, 3, 63, 31, 0);
    Function_20bf7dc(v4 + 1346, 21140, 0, 0);
    v16 = 0;
    v15 = v4 + 10;
    v14 = (ushort *)((char *)v4 + 46);
    v6 = v4 + 13;
    v7 = v4;
    v13 = v4 + 10;
    v12 = v4 + 13;
    do
    {
      *((ushort *)v7 + 18) -= 85;
      v8 = *((short *)v7 + 18);
      if ( v8 <= -4096 )
        *((ushort *)v7 + 18) = v8 + 0x2000;
      *((ushort *)v7 + 9) = *((ushort *)v7 + 18) - 410;
      *((ushort *)v7 + 12) = *((ushort *)v7 + 9);
      *((ushort *)v7 + 15) = *((ushort *)v7 + 18);
      Function_20bd1e4(v13, v14, v15);
      MTX_Identity44_(v12);
      Function_20bc4d4(v6, v12, *((short *)v7 + 8), *((short *)v7 + 9), *((short *)v7 + 10));
      Function_20bf8c0(v4 + 1346, 0, 11627);
      Function_20bf8c0(v4 + 1346, 1, v7[2] & 0xFFFF);
      v17 = 0;
      v18 = 4095;
      v19 = -4095;
      VEC_Fx16Normalize(&v17, &v17);
      Function_20bf864(v4 + 1346, 0, v17, v18, v19);
      v17 = 0;
      v18 = -4095;
      v19 = 4095;
      VEC_Fx16Normalize(&v17, &v17);
      Function_20bf864(v4 + 1346, 1, v17, v18, v19);
      v9 = (int)*((ushort *)v7 + 20) >> 4;
      Function_20bc5ac(&v20, SLOWORD(Unknown_20f983c[v9]), SHIWORD(Unknown_20f983c[v9]));
      MTX_Concat44(&v20, v6, v12);
      v10 = (int)*((ushort *)v7 + 21) >> 4;
      sub_20BC5D0(&v20, SLOWORD(Unknown_20f983c[v10]), SHIWORD(Unknown_20f983c[v10]));
      MTX_Concat44(&v20, v6, v12);
      v11 = (int)*((ushort *)v7 + 22) >> 4;
      sub_20BC5F4(&v20, SLOWORD(Unknown_20f983c[v11]), SHIWORD(Unknown_20f983c[v11]));
      MTX_Concat44(&v20, v6, v12);
      Function_20bf820(v4 + 1346, 0x7FFF, v7[2] & 0xFFFF, 0);
      Function_20bf650((int)(v4 + 1346));
      Function_20bf69c(v4 + 1346, v6);
      Function_20bf8f0(v4 + 1346, 1);
      Function_20bf6ec(v4 + 1346, 0, 0, -4095);
      Function_20bf73c(v4 + 1346, 0xFF64u, 0xFF33u, 0);
      Function_20bf73c(v4 + 1346, 0x9Cu, 0xFF33u, 0);
      Function_20bf73c(v4 + 1346, 0x9Cu, 0xCDu, 0);
      Function_20bf73c(v4 + 1346, 0xFF64u, 0xCDu, 0);
      Function_20bf91c((int)(v4 + 1346));
      Function_20bf670(v4 + 1346, 1);
      v7 += 28;
      v15 += 56;
      v6 += 28;
      v14 += 56;
      v13 += 56;
      v12 += 28;
      ++v16;
    }
    while ( v16 < 48 );
    v4[9031] = Function_20c11c8((int)(v4 + 1346));
    DC_FlushRange((int)(v4 + 1351), v4[9031]);
    if ( v4[9031] >= 0x7800u )
      ErrorHandler();
    result = 1;
    v4[1] = 1;
  }
  return result;
}

//----- (0223D220) --------------------------------------------------------
int __fastcall Function_223d220(int result)
{
  int v1;
  int v2;

  if ( result )
  {
    v1 = Function_201ced0(result);
    v2 = v1;
    result = *(uint *)(v1 + 4);
    if ( result )
    {
      MATRIX_PUSH = 0;
      MEMORY[0x1FF85B8](3, v2 + 5404, *(uint *)(v2 + 36124));
      MATRIX_POP = 1;
      result = 0;
      *(uint *)(v2 + 4) = 0;
    }
  }
  return result;
}

//----- (0223D264) --------------------------------------------------------
int __fastcall Function_223d264(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int result;

  v4 = a1;
  *a1 = a2;
  v5 = a4;
  a1[2] = a3;
  a1[1] = s32_div_f(a3 - a2, a4);
  v4[3] = v5 - 1;
  result = 0;
  v4[4] = 0;
  return result;
}

//----- (0223D284) --------------------------------------------------------
int __fastcall Function_223d284(int *a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1[3];
  if ( v1 )
  {
    a1[3] = v1 - 1;
    v2 = *a1 + a1[1];
    *a1 = v2;
    result = v2;
  }
  else
  {
    a1[4] = 1;
    result = a1[2];
  }
  return result;
}

//----- (0223D2A4) --------------------------------------------------------
int __fastcall Function_223d2a4(int a1)
{
  return *(uint *)(a1 + 16);
}

//----- (0223D2A8) --------------------------------------------------------
int __fastcall Function_223d2a8(int a1, int *a2, ushort *a3)
{
  int *v3;
  int v4;
  ushort *v5;
  uint v6;
  int v7;
  int v8;
  int v10;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v10 = InitEncryptPkmnData(a2);
  v6 = GetPkmnData(v3, 0x7Au, 0);
  if ( v6 - 1 > 2 )
  {
    if ( v6 - 4 > 1 )
    {
      if ( v6 == 15 )
      {
        v7 = 5;
      }
      else if ( GetPkmnData(v3, 0x6Eu, 0) )
      {
        v7 = 6;
      }
      else
      {
        v8 = GetTrainerID((int)v5);
        if ( v8 == GetPkmnData(v3, 7u, 0) )
        {
          Function_2025ef4(v5, *(ushort **)(v4 + 7140));
          GetPkmnData(v3, 0x91u, *(ushort **)(v4 + 7144));
          if ( Function_2023be0(*(uint *)(v4 + 7140), *(uint *)(v4 + 7144)) )
          {
            v7 = 2;
          }
          else if ( GetPkmnData(v3, 0x99u, 0) < 0x7D0 )
          {
            v7 = GetPkmnData(v3, 0x93u, 0) != 0;
          }
          else
          {
            v7 = 6;
          }
        }
        else
        {
          v7 = 2;
        }
      }
    }
    else
    {
      v7 = 3;
    }
  }
  else
  {
    v7 = 4;
  }
  InitEncryptPkmnData_Part1And2(v3, v10);
  return v7;
}

