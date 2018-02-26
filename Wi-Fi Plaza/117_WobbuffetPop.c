//----- (02260440) --------------------------------------------------------
int __fastcall Function_117_2260440(int a1)
{
  int v1;
  int v2;
  ushort *v3;

  v1 = a1;
  v2 = LoadPtrToOverWorldDataIn18(a1);
  Function_2017fc8(3, 110, 393216);
  v3 = (ushort *)MallocSomeDataAndStorePtrInOverlayData1c(v1, 64, 0x6Eu);
  MI_CpuFill8(v3, 0, 0x40u);
  Function_22605d8(v3, v2);
  return 1;
}

//----- (02260474) --------------------------------------------------------
int __fastcall Function_117_2260474(int a1, int *a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int result;
  int v10;
  int v11;

  v2 = a1;
  v3 = a2;
  v4 = LoadOverlayData1c(a1);
  v5 = LoadPtrToOverWorldDataIn18(v2);
  if ( Function_2260630(v4) == 1 )
    return 1;
  v10 = *v3;
  if ( (uint)*v3 <= 8 )
    JUMPOUT(__CS__, *((short *)&off_22604AA + v10) + 36045996);
  switch ( (uchar)v10 )
  {
    case 0:
      *(uchar *)(v4 + 49) = 0;
      *(uint *)(v4 + 40) = AllocAndInitOverlayData(&dword_2266904[1], v4, 0x6Eu);
      ++*v3;
      goto LABEL_24;
    case 1:
      if ( CallOverlayDataJumpTable(*(uint *)(v4 + 40), v6, v7, v8) == 1 )
      {
        Call_free2(*(uint *)(v4 + 40));
        *(uint *)(v4 + 40) = 0;
        ++*v3;
      }
      goto LABEL_24;
    case 2:
      *(uchar *)(v4 + 49) = 1;
      *(uint *)(v4 + 40) = AllocAndInitOverlayData((int *)&off_22668F8, v4, 0x6Eu);
      ++*v3;
      goto LABEL_24;
    case 3:
      if ( CallOverlayDataJumpTable(*(uint *)(v4 + 40), v6, v7, v8) == 1 )
      {
        Call_free2(*(uint *)(v4 + 40));
        *(uint *)(v4 + 40) = 0;
        ++*v3;
      }
      goto LABEL_24;
    case 4:
      if ( *(uchar *)(v5 + 56) )
        ((void (*)(void))dword_21D1F18[0])();
      *(uchar *)(v4 + 49) = 2;
      *(uint *)(v4 + 40) = AllocAndInitOverlayData(&dword_2266904[1], v4, 0x6Eu);
      ++*v3;
      goto LABEL_24;
    case 5:
      if ( CallOverlayDataJumpTable(*(uint *)(v4 + 40), v6, v7, v8) == 1 )
      {
        Call_free2(*(uint *)(v4 + 40));
        *(uint *)(v4 + 40) = 0;
        if ( *(uint *)(v4 + 56) == 1 )
          *v3 = 0;
        else
          ++*v3;
      }
      goto LABEL_24;
    case 6:
      Function_20388f4(0, 1);
      Function_20364f0(222);
      ++*v3;
      goto LABEL_24;
    case 7:
      if ( Function_2036540(222) == 1 || (v11 = Function_2035e18(), v11 < Function_2032e64()) )
        ++*v3;
LABEL_24:
      result = 0;
      break;
    default:
      result = 1;
      break;
  }
  return result;
}

//----- (022605C0) --------------------------------------------------------
int __fastcall Function_117_22605c0(int a1)
{
  int v1;

  v1 = a1;
  LoadOverlayData1c(a1);
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(110);
  return 1;
}

//----- (022605D8) --------------------------------------------------------
int __fastcall Function_22605d8(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = a2;
  Function_203608c();
  v4 = 0;
  v5 = 0;
  do
  {
    if ( Function_2032ee8(v5) )
      *(uchar *)(v2 + v4++ + 44) = v5;
    else
      *(uchar *)(v2 + v5 + 44) = -1;
    ++v5;
  }
  while ( v5 < 4 );
  *(uchar *)(v2 + 48) = v4;
  *(uchar *)(v2 + 60) = *(uchar *)(v3 + 56);
  return ((int (__fastcall *)(int, uint, uint, uint))dword_225C700[0])(
           v2,
           *(uchar *)(v3 + 57),
           *(uint *)(v3 + 52),
           *(uchar *)(v3 + 56));
}

//----- (02260630) --------------------------------------------------------
BOOL __fastcall Function_2260630(int a1)
{
  int v1;

  v1 = a1;
  if ( !*(uchar *)(a1 + 61) && ((int (*)(void))dword_225CA54[0])() == 1 )
    *(uchar *)(v1 + 61) = 1;
  return *(uchar *)(v1 + 61) == 1 && !*(uint *)(v1 + 40);
}

//----- (02260668) --------------------------------------------------------
int __fastcall Function_2260668(int a1)
{
  int v1;
  int v2;
  uint *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int *v10;
  int v11;
  int v12;

  v1 = a1;
  SetMainLoopFunctionCall(0, 0);
  Function_201ff00();
  Function_201ff68();
  REG_DISPCNT &= 0xFFFFE0FF;
  REG_DISPCNT_SUB &= 0xFFFFE0FF;
  REG_DISPCNT &= 0xFFFF1FFF;
  REG_DISPCNT_SUB &= 0xFFFF1FFF;
  G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 1, 63, 16, 16);
  G2x_SetBlendAlpha_((int *)&REG_BLDCNT_SUB, 8, 31, 13, 3);
  v2 = MallocSomeDataAndStorePtrInOverlayData1c(v1, 14416, 0x6Eu);
  MI_CpuFill8((ushort *)v2, 0, 0x3850u);
  Function_20182cc((uint *)(v2 + 168), 0x6Eu, 32);
  *(uint *)(v2 + 152) = Function_2260e14(110);
  *(uint *)v2 = LoadPtrToOverWorldDataIn18(v1);
  Function_22665fc(v2);
  *(uint *)(v2 + 140) = MallocFill120(0x6Eu);
  Function_2003858(*(uint *)(v2 + 140), 1);
  Function_2002f70(*(uint *)(v2 + 140), 0, 512, 0x6Eu);
  Function_2002f70(*(uint *)(v2 + 140), 1, 512, 0x6Eu);
  Function_2002f70(*(uint *)(v2 + 140), 2, 448, 0x6Eu);
  Function_2002f70(*(uint *)(v2 + 140), 3, 512, 0x6Eu);
  *(uint *)(v2 + 44) = Function_2018340(0x6Eu);
  Function_201dbec(64, 0x6Eu);
  Function_2017dd4(4, 8);
  Function_22610d8(*(uint *)(v2 + 44));
  Function_201e3d8();
  Function_201e450(4u);
  Function_2260ec0(v2);
  v3 = Function_200c6e4(0x6Eu);
  *(uint *)(v2 + 36) = v3;
  Function_200c73c(v3, &dword_22669A8, dword_226697C, 32);
  Function_200966c(1, 1048592, v4, v5);
  Function_2009704(1);
  *(uint *)(v2 + 40) = Function_200c704(*(uint **)(v2 + 36));
  Function_200c7c0(*(int **)(v2 + 36), *(int ***)(v2 + 40), 224);
  Function_200cb30(*(uint **)(v2 + 36), *(uint *)(v2 + 40), dword_2266990);
  v6 = Function_200c738(*(uint *)(v2 + 36));
  Function_200964c(v6, 0, 1441792, v7);
  Function_2261574(v2);
  *(uint *)(v2 + 128) = LoadFromMsgNARC(0, 26, 9, 0x6Eu);
  *(uint *)(v2 + 132) = Function_200b358(0x6Eu);
  *(uint *)(v2 + 136) = Function_2023790(320, 0x6Eu);
  *(uint *)(v2 + 144) = Function_2012744(19, 0x6Eu);
  Function_2265210(v2, v2 + 5224);
  v10 = LoadFromNARC_8(173, 0x6Eu, v8, v9);
  Function_2261a2c(v2, v10);
  Function_2261ac8(v2, v10);
  Function_2261280(v2);
  Function_226168c(v2, v10);
  Function_2261940(v2, v10);
  Function_2261c2c(v2, v10);
  Call_FS_CloseFile(v10);
  Function_2003050(*(uint *)(v2 + 140), 14, 6, 110, 0, 32, 0xE0u);
  Function_2003050(*(uint *)(v2 + 140), 14, 6, 110, 1, 32, 0x50u);
  Function_22613ec(v2);
  Function_22614ac(v2, 0);
  Function_2261368(v2);
  Function_2039734();
  *(uint *)(v2 + 212) = Function_22626b0(v2);
  Function_200f174(0, 27, 27, 0, 6, 1, 110);
  *(uint *)(v2 + 148) = AddTaskToTaskList1((int)Function_2260f7c, v2, 0xEA60u);
  byte_21BF6E1 = 1;
  Function_201ffe8();
  Function_201ffd0();
  Function_201ff0c(0x10u, 1);
  Function_201ff74(0x10u, 1);
  Function_2002ae4(1);
  Function_2002ac8(0);
  Function_2002b20(0);
  v11 = Function_200d9b0(*(uint *)(v2 + 40));
  *(uint *)(v2 + 28) = ((int (__fastcall *)(int, int))dword_225CAD4[0])(v11, 110);
  v12 = ((int (*)(void))dword_225CB74[0])();
  GetPaletteAdresses(*(uint *)(v2 + 140), 2u, 16 * v12 & 0xFFFF, 96);
  SetMainLoopFunctionCall((int)Function_2260da0, v2);
  if ( *(uchar *)(*(uint *)v2 + 60) )
    ((void (__fastcall *)(int))dword_21D1E30[17])(110);
  return 1;
}

//----- (0226098C) --------------------------------------------------------
int __fastcall Function_226098c(int a1, uint *a2)
{
  uint *v2;
  uint *v3;
  uint *v4;
  int v5;
  int result;

  v2 = a2;
  v3 = (uint *)LoadOverlayData1c(a1);
  v4 = v3;
  v5 = *v3;
  if ( *(uchar *)(*v3 + 61) == 1 )
  {
    if ( *(uchar *)(v5 + 62) )
    {
      if ( ((int (__fastcall *)(int))dword_225CA98[0])(v5) == 1 )
        return 1;
    }
    else
    {
      if ( Function_200f2ac() == 1 )
        Function_200f2c0();
      SetBrightnessOfBothScreens(0);
      REG_DISPCNT &= 0xFFFF1FFF;
      ++*(uchar *)(*v4 + 62);
    }
    result = 0;
  }
  else
  {
    switch ( (uchar)*v2 )
    {
      case 0u:
        if ( Function_200f2ac() == 1 )
          ++*v2;
        goto LABEL_40;
      case 1u:
        Function_20364f0(211);
        ++*v2;
        goto LABEL_40;
      case 2u:
        if ( Function_2036540(211) == 1 )
          ++*v2;
        goto LABEL_40;
      case 3u:
        if ( Function_22666a4() == 1 )
          ++*v2;
        goto LABEL_40;
      case 4u:
        if ( v3[2] >= (uint)*(uchar *)(v5 + 48) )
        {
          Function_226200c();
          ++*v2;
        }
        goto LABEL_40;
      case 5u:
        if ( v3[3056] == 1 )
        {
          Function_2266150();
          Function_200f174(0, 26, 26, 0, 6, 1, 110);
          ++*v2;
        }
        Function_2262664(v4);
        switch ( (uchar)v4[8] )
        {
          case 1u:
            REG_DISPCNT = REG_DISPCNT & 0xFFFF1FFF | 0x4000;
            WIN1_X1 = 1100;
            WIN1_Y1 = -22344;
            WIN_IN = WIN_IN & 0xC0FF | 0x1000;
            WIN_OUT = WIN_OUT & 0xFFC0 | 0x3F;
            Function_2266210(v4);
            v4[8] = 2;
            goto LABEL_24;
          case 2u:
LABEL_24:
            if ( Function_2266274(v4, v4 + 1491) == 1 )
            {
              v4[1498] = 1;
              v4[8] = 0;
            }
            break;
          case 3u:
            ((void (__fastcall *)(uint))dword_225CB8C[0])(v4[7]);
            v4[8] = 4;
            break;
          case 4u:
            if ( ((int (__fastcall *)(uint))dword_225CBE0[0])(v4[7]) == 1 )
            {
              v4[3054] = 1;
              *((uchar *)v4 + 5465) = 0;
              v4[8] = 5;
              Function_22613b8(v4);
              Function_22614ac(v4, 1);
            }
            break;
          case 6u:
            ((void (__fastcall *)(uint))dword_225CBB0[0])(v4[7]);
            v4[8] = 7;
            break;
          case 7u:
            if ( ((int (__fastcall *)(uint))dword_225CBE0[0])(v4[7]) == 1 )
              v4[8] = 8;
            break;
          default:
            break;
        }
        Function_22623b0(v4);
        Function_2262270(v4);
        if ( v4[3055] != 1 )
        {
          if ( Function_2262200(v4) == 1 )
            v4[3057] = 13;
          if ( v4[3054] == 1 && v4[3053] <= 0x516u )
            ++v4[3053];
        }
        goto LABEL_40;
      case 6u:
        if ( Function_200f2ac() != 1 )
          goto LABEL_40;
        result = 1;
        break;
      default:
LABEL_40:
        Function_22626ac(v4[39]);
        ++v4[3603];
        result = 0;
        break;
    }
  }
  return result;
}

//----- (02260C10) --------------------------------------------------------
int __fastcall Function_2260c10(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  *(uint *)(*(uint *)v2 + 36) = *(uint *)(v2 + 12240);
  ((void (__fastcall *)(uint))dword_225CAD4[25])(*(uint *)(v2 + 28));
  Function_22641e4(v2);
  Function_2264508(v2);
  SetMainLoopFunctionCall(0, 0);
  Function_22615e0(v2);
  Function_22618e8(v2);
  Function_22619f8(v2);
  Function_2261ac4(v2);
  Function_2261c28(v2);
  Function_2261dd0(v2);
  Function_2262760(v2, *(uint *)(v2 + 212));
  v3 = 0;
  v4 = v2 + 48;
  do
  {
    Function_201a8fc(v4);
    ++v3;
    v4 += 16;
  }
  while ( v3 < 5 );
  Function_201ff0c(1u, 0);
  Function_201ff0c(2u, 0);
  Function_2019044(*(uint *)(v2 + 44), 1);
  Function_2019044(*(uint *)(v2 + 44), 2);
  Function_2019044(*(uint *)(v2 + 44), 3);
  Function_2019044(*(uint *)(v2 + 44), 4);
  Function_2019044(*(uint *)(v2 + 44), 5);
  Function_2019044(*(uint *)(v2 + 44), 6);
  Function_2019044(*(uint *)(v2 + 44), 7);
  Function_20127bc(*(uint *)(v2 + 144));
  Function_200d0b0(*(uint *)(v2 + 36), *(int ***)(v2 + 40));
  Function_200c8d4(*(uint *)(v2 + 36));
  Function_201dc3c();
  Function_2002fa0(*(uint *)(v2 + 140), 0);
  Function_2002fa0(*(uint *)(v2 + 140), 1);
  Function_2002fa0(*(uint *)(v2 + 140), 2);
  Function_2002fa0(*(uint *)(v2 + 140), 3);
  Call_free1(*(uint *)(v2 + 140));
  Function_20237bc_FreeMsg(*(uint *)(v2 + 136), v5);
  Function_200b3f0(*(uint **)(v2 + 132), v6);
  Function_200b190(*(ushort **)(v2 + 128));
  free(*(uint *)(v2 + 44));
  Function_2260f64(v2);
  Call_RemoveTaskFromTaskList(*(int **)(v2 + 148));
  REG_DISPCNT &= 0xFFFF1FFF;
  REG_DISPCNT_SUB &= 0xFFFF1FFF;
  Function_2260eb8(*(uint *)(v2 + 152));
  Function_201e530();
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_2002ac8(0);
  Function_2002ae4(0);
  Function_2002b20(0);
  Function_2039794();
  return 1;
}

//----- (02260DA0) --------------------------------------------------------
int __fastcall Function_2260da0(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = *(uint *)(a1 + 212);
  Function_2262950();
  Function_201dcac();
  Function_200c800();
  Function_2003694(*(uint *)(v1 + 140));
  if ( *(uchar *)(v1 + 5204) == 1 )
  {
    Function_2019120(7u, 1);
    *(uchar *)(v1 + 5204) = 0;
  }
  else if ( *(uchar *)(v1 + 5205) == 1 )
  {
    Function_2019120(7u, 0);
    *(uchar *)(v1 + 5205) = 0;
  }
  Function_201c2b8(*(uint *)(v1 + 44));
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (02260E14) --------------------------------------------------------
int __fastcall Function_2260e14(uint a1)
{
  return Function_2024220(a1, 0, 1, 0, 2, (void (*)(void))Function_2260e34);
}

//----- (02260E34) --------------------------------------------------------
int *Function_2260e34()
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

//----- (02260EB8) --------------------------------------------------------
uint __fastcall Function_2260eb8(int a1)
{
  return Function_20242c4(a1);
}

//----- (02260EC0) --------------------------------------------------------
int *__fastcall Function_2260ec0(int a1)
{
  int v1;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v3 = 0;
  v4 = 100382;
  v5 = 0;
  *(uint *)(a1 + 156) = Function_20203ac(0x6Eu);
  Function_20206d0(&v3, 503808, dword_2266918, 4004, 1u, 0, *(uint *)(v1 + 156));
  Function_20206bc(4096, 3686400, *(uint *)(v1 + 156));
  Function_20203d4(*(uint *)(v1 + 156));
  *(uint *)(v1 + 160) = Function_20203ac(0x6Eu);
  Function_20206d0(&v3, 327680, dword_2266918, 4004, 1u, 0, *(uint *)(v1 + 160));
  return Function_20206bc(4096, 3686400, *(uint *)(v1 + 160));
}

//----- (02260F64) --------------------------------------------------------
uint __fastcall Function_2260f64(int a1)
{
  int v1;

  v1 = a1;
  Call_free5(*(uint *)(a1 + 156));
  return Call_free5(*(uint *)(v1 + 160));
}

//----- (02260F7C) --------------------------------------------------------
void __fastcall Function_2260f7c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5[9];
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v9 = 4096;
  v10 = 4096;
  v11 = 4096;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v2 = a2;
  MTX_Identity33_(v5);
  Function_2265f34(v2, v2 + 5544);
  Function_2265254(v2, v2 + 5224);
  Function_2265c1c(v2, v2 + 5472);
  Function_2263ef8(v2);
  Function_2263d80(v2, *(uint *)(v2 + 44), v2 + 5160);
  Function_2264560(v2);
  Function_2261f3c(v2);
  Function_2264930(v2);
  Call_G3X_Reset();
  Function_20203d4(*(uint *)(v2 + 156));
  Function_2020854(1, *(int **)(v2 + 156));
  Function_20203ec();
  Function_20af51c(0, 0, -4096, 0);
  Function_20af558(0, 29596);
  Function_20af56c(0x7FFF, 0x7FFF, 0);
  Function_20af590(0x7FFF, 0x7FFF, 0);
  Function_20af4bc(&v6);
  MI_Copy36B(v5, dword_21C5B48);
  dword_21C5B88 &= 0xFFFFFF5B;
  Function_20af4ec(&v9);
  Function_20af480();
  Function_2262798(v2, *(uint *)(v2 + 212));
  Function_20b275c(17, 0, 0);
  Function_2017294(v2 + 5040);
  Function_2017294(v2 + 232);
  Function_2261fa4(v2);
  v4 = 1;
  Function_20b275c(18, (int)&v4, 1);
  Call_G3X_Reset();
  if ( Function_201469c() > 0 )
    Call_G3X_Reset();
  Function_20146c0();
  Function_200c7ec(*(int **)(v2 + 40));
  Function_200c808();
  Function_20241bc(0, 0);
  v3 = *(uint *)(v2 + 44);
  Function_2038a1c();
}

//----- (022610D8) --------------------------------------------------------
uint __fastcall Function_22610d8(uint *a1)
{
  uint *v1;
  int *v2;
  char *v3;
  int v4;
  int v5;
  int v6;
  int *v7;
  char *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int *v13;
  int v15;
  int v16;
  int v17;
  int v18;
  char v19;
  char v20;
  char v21;
  char v22;

  v1 = a1;
  Function_201ff00();
  v2 = dword_22669C8;
  v3 = &v19;
  v4 = 5;
  do
  {
    v5 = *v2;
    v6 = v2[1];
    v2 += 2;
    *(uint *)v3 = v5;
    *((uint *)v3 + 1) = v6;
    v3 += 8;
    --v4;
  }
  while ( v4 );
  GX_SetBanks((int *)&v19);
  MIi_CpuClear32(0, (uint *)0x6000000, 0x80000);
  MIi_CpuClear32(0, (uint *)0x6200000, 0x20000);
  MIi_CpuClear32(0, (uint *)0x6400000, 0x40000);
  MIi_CpuClear32(0, (uint *)0x6600000, 0x20000);
  v15 = 1;
  v16 = 0;
  v17 = 1;
  v18 = 1;
  SetGraphicsModes(&v15);
  v7 = dword_2266A40;
  v8 = &v20;
  v9 = 10;
  do
  {
    v10 = *v7;
    v11 = v7[1];
    v7 += 2;
    *(uint *)v8 = v10;
    *((uint *)v8 + 1) = v11;
    v8 += 8;
    --v9;
  }
  while ( v9 );
  *(uint *)v8 = *v7;
  Function_20183c4(v1, 1u, (int *)&v20, 0);
  Function_2019ebc(v1, 1u);
  Function_2019184((int)v1, 1u, 0, 0);
  Function_2019184((int)v1, 1u, 3u, 0);
  Function_20183c4(v1, 2u, (int *)&v21, 0);
  Function_2019ebc(v1, 2u);
  Function_2019184((int)v1, 2u, 0, 0);
  Function_2019184((int)v1, 2u, 3u, 0);
  Function_20183c4(v1, 3u, (int *)&v22, 0);
  Function_2019ebc(v1, 3u);
  Function_2019184((int)v1, 3u, 0, 0);
  Function_2019184((int)v1, 3u, 3u, 0);
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 2;
  Function_201ff0c(1u, 1);
  v12 = 0;
  v13 = dword_2266A94;
  do
  {
    if ( v12 >= 3 )
      Function_20183c4(v1, (v12 + 4) & 0xFF, v13, 1);
    else
      Function_20183c4(v1, (v12 + 4) & 0xFF, v13, 0);
    Function_2019690((v12 + 4) & 0xFF, 32, 0, 0x6Eu);
    Function_2019ebc(v1, (v12 + 4) & 0xFF);
    Function_2019184((int)v1, (v12 + 4) & 0xFF, 0, 0);
    Function_2019184((int)v1, (v12++ + 4) & 0xFF, 3u, 0);
    v13 += 7;
  }
  while ( (uint)v12 < 4 );
  return Function_2019120(7u, 0);
}

//----- (02261280) --------------------------------------------------------
int __fastcall Function_2261280(int a1)
{
  int v1;

  v1 = a1;
  Function_201a7e8(*(uint **)(a1 + 44), a1 + 48, 1, 11, 19, 0x14u, 4u, 14, 768);
  Function_201a7e8(*(uint **)(v1 + 44), v1 + 64, 4, 18, 1, 0xAu, 2u, 5, 788);
  Function_201a7e8(*(uint **)(v1 + 44), v1 + 80, 4, 21, 14, 0xAu, 2u, 5, 808);
  Function_201a7e8(*(uint **)(v1 + 44), v1 + 96, 4, 1, 14, 0xAu, 2u, 5, 828);
  Function_201ada4_ClearTextBox(v1 + 64, 15);
  Function_201ada4_ClearTextBox(v1 + 80, 15);
  Function_201ada4_ClearTextBox(v1 + 96, 15);
  Function_201a7e8(*(uint **)(v1 + 44), v1 + 112, 4, 2, 19, 0x1Cu, 4u, 5, 857);
  return Function_201ada4_ClearTextBox(v1 + 112, 15);
}

//----- (02261368) --------------------------------------------------------
int __fastcall Function_2261368(int a1)
{
  int v1;
  ushort *v2;
  int v3;

  v1 = a1;
  Function_200dc48(a1 + 112, 1, 848, 6u);
  v2 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 128), 3u);
  Function_201d78c(v1 + 112, 0);
  Function_20237bc_FreeMsg((int)v2, v3);
  return Function_201a9a4(v1 + 112);
}

//----- (022613B8) --------------------------------------------------------
int __fastcall Function_22613b8(int a1)
{
  int v1;

  v1 = a1;
  Function_2019cb8(*(uint *)(a1 + 44), 4, 1023, 1u, 0x12u, 0x1Eu, 6u, 0x11u);
  return Function_201c3c0(*(uint *)(v1 + 44), 4);
}

//----- (022613EC) --------------------------------------------------------
int __fastcall Function_22613ec(uint *a1)
{
  uint *v1;
  int v2;
  int i;
  int v4;
  ushort *v5;
  ushort *v6;
  int v7;
  int v8;
  int v9;
  int result;
  int v11;

  v1 = a1;
  v11 = Function_203608c();
  for ( i = 0; ; ++i )
  {
    result = *(uchar *)(*v1 + 48);
    if ( i >= result )
      break;
    v4 = *(uchar *)(*v1 + i + 44);
    if ( v11 != v4 )
    {
      v5 = (ushort *)((int (__cdecl *)(uint, int, int, int))dword_225C7CC[0])(*v1, v4, v11, v2);
      v6 = Function_2025f04(v5, 0x6Eu);
      v7 = Function_22622c4(v1, *(uchar *)(*v1 + i + 44));
      ((int (__cdecl *)(uint, uint, int, int))dword_225C7A4[0])(*v1, *(uchar *)(*v1 + i + 44), v8, v9);
      Function_2002d7c(0, (int)v6, 0);
      Function_201d78c((int)&v1[4 * *((uchar *)&dword_2266968[*(uchar *)(*v1 + 48)] + v7) + 12], 0);
      free((int)v6);
    }
  }
  return result;
}

//----- (022614AC) --------------------------------------------------------
int __fastcall Function_22614ac(int *a1, int a2)
{
  int *v2;
  int v3;

  v2 = a1;
  if ( a2 == 1 )
  {
    Function_2019cb8(a1[11], 4, 1023, 0, 0xDu, 0xCu, 4u, 0x11u);
    Function_2019cb8(v2[11], 4, 1023, 0x11u, 0, 0xCu, 4u, 0x11u);
    Function_2019cb8(v2[11], 4, 1023, 0x14u, 0xDu, 0xCu, 4u, 0x11u);
  }
  else
  {
    v3 = *(uchar *)(*a1 + 48);
    if ( v3 == 2 )
    {
      Function_2019cb8(v2[11], 4, 1023, 0, 0xDu, 0xCu, 4u, 0x11u);
      Function_2019cb8(v2[11], 4, 1023, 0x14u, 0xDu, 0xCu, 4u, 0x11u);
    }
    else if ( v3 == 3 )
    {
      Function_2019cb8(v2[11], 4, 1023, 0x11u, 0, 0xCu, 4u, 0x11u);
    }
  }
  return Function_201c3c0(v2[11], 4);
}

//----- (02261574) --------------------------------------------------------
int *__fastcall Function_2261574(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;

  v1 = a1;
  Function_2014000();
  v2 = (int *)malloc(0x6Eu, 18432);
  *(uint *)(v1 + 164) = Function_2014014((int)Function_2261644, (int)Function_2261668, v2, 0x4800u, 1, 0x6Eu);
  v3 = Function_2014784(*(uint *)(v1 + 164));
  Function_20206bc(4096, 3686400, v3);
  v4 = Call2_LoadFromNARC_2(190, 0, 0x6Eu);
  return Function_20144cc(*(uint **)(v1 + 164), v4, 10, 1);
}

//----- (022615E0) --------------------------------------------------------
uint __fastcall Function_22615e0(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_2014730(*(uint *)(a1 + 164));
  Function_201411c(*(uint ***)(v1 + 164));
  return free(v2);
}

//----- (02261600) --------------------------------------------------------
uint __fastcall Function_2261600(int a1, int a2)
{
  switch ( a2 )
  {
    case 0:
      return Function_20146f4(*(int **)(a1 + 164), 0, 0, a1);
    case 1:
      return Function_20146f4(*(int **)(a1 + 164), 1, 0, a1);
    case 2:
      return Function_20146f4(*(int **)(a1 + 164), 2, 0, a1);
  }
  return ErrorHandler();
}

//----- (02261644) --------------------------------------------------------
int Function_2261644()
{
  int v0;

  v0 = Function_20a5a2c();
  if ( !v0 )
    ErrorHandler();
  Function_20145b4(v0);
  return 8 * v0 & 0x7FFFF;
}

//----- (02261668) --------------------------------------------------------
int Function_2261668()
{
  int v0;

  v0 = Function_20a5a3c();
  if ( !v0 )
    ErrorHandler();
  Function_20145f4(v0);
  return 8 * v0 & 0x7FFFF;
}

//----- (0226168C) --------------------------------------------------------
int __fastcall Function_226168c(int a1, int a2)
{
  int v2;
  ushort *v3;
  int v4;
  int v5;
  uint v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int result;
  int v13;
  ushort *v14;
  int v15;
  ushort *v16;

  v2 = a1;
  v13 = a2;
  Function_200cdc4(
    *(uint *)(a1 + 140),
    2u,
    *(uint **)(v2 + 36),
    *(uint *)(v2 + 40),
    a2,
    0x1Bu,
    0,
    1,
    1,
    10003);
  v3 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 128), 2u);
  v4 = (int)v3;
  v5 = Function_2002d7c(0, (int)v3, 0);
  v6 = ((uint)(30 - v5) >> 1) + 6;
  Function_2265db8(
    *(uint *)(v2 + 44),
    *(uint *)(v2 + 40),
    *(uint *)(v2 + 144),
    v2 + 5788,
    v4,
    0,
    921344,
    0,
    10003,
    ((uint)(30 - v5) >> 1) + 42,
    168,
    0,
    1,
    12,
    2);
  Function_20237bc_FreeMsg(v4, v7);
  v14 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 128), 0);
  v16 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 128), 1u);
  v15 = 0;
  v8 = v2 + 5548;
  v9 = v2 + 5568;
  do
  {
    Function_2265db8(
      *(uint *)(v2 + 44),
      *(uint *)(v2 + 40),
      *(uint *)(v2 + 144),
      v8,
      v14,
      0,
      921344,
      0,
      10003,
      v6,
      168,
      0,
      3,
      12,
      10);
    Function_2265db8(
      *(uint *)(v2 + 44),
      *(uint *)(v2 + 40),
      *(uint *)(v2 + 144),
      v9,
      v16,
      0,
      921344,
      0,
      10003,
      v6,
      168,
      0,
      3,
      12,
      10);
    v6 += 6;
    v8 += 40;
    v9 += 40;
    ++v15;
  }
  while ( v15 < 6 );
  Function_20237bc_FreeMsg((int)v14, v10);
  Function_20237bc_FreeMsg((int)v16, v11);
  Function_2265ec8(v2 + 5544);
  Function_2266150(v2);
  Function_200cdc4(
    *(uint *)(v2 + 140),
    2u,
    *(uint **)(v2 + 36),
    *(uint *)(v2 + 40),
    v13,
    0x1Bu,
    0,
    1,
    1,
    10004);
  Function_200cc3c(*(uint **)(v2 + 36), *(uint *)(v2 + 40), v13, 0x18u, 0, 1, 10002);
  Function_200ce24(*(uint **)(v2 + 36), *(uint *)(v2 + 40), v13, 0x1Au, 0, 10002);
  Function_200ce54(*(uint **)(v2 + 36), *(uint *)(v2 + 40), v13, 0x19u, 0, 10002);
  *(uint *)(v2 + 5544) = Function_2266130(v2);
  Function_200cd7c(*(uint *)(v2 + 140), 2u, *(int **)(v2 + 36), *(uint *)(v2 + 40), 171, 20, 0, 1, 1, 10002);
  Function_200cbdc(*(int **)(v2 + 36), *(uint *)(v2 + 40), 171, 21, 0, 1, 10001);
  Function_200ce0c(*(int **)(v2 + 36), *(uint *)(v2 + 40), 171, 22, 0, 10001);
  Function_200ce3c(*(int **)(v2 + 36), *(uint *)(v2 + 40), 171, 23, 0, 10001);
  result = Function_2266244(v2);
  *(uint *)(v2 + 5964) = result;
  return result;
}

//----- (022618E8) --------------------------------------------------------
int __fastcall Function_22618e8(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = 0;
  v3 = a1 + 5548;
  v4 = a1 + 5568;
  do
  {
    Function_2265eb0(v3);
    Function_2265eb0(v4);
    ++v2;
    v3 += 40;
    v4 += 40;
  }
  while ( v2 < 6 );
  Function_2265eb0(v1 + 5788);
  Function_2266210(v1);
  Function_2266238(v1, *(uint *)(v1 + 5544));
  return Function_2266268(v1, *(uint *)(v1 + 5964));
}

//----- (02261940) --------------------------------------------------------
int __fastcall Function_2261940(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  Function_200cdc4(
    *(uint *)(a1 + 140),
    3u,
    *(uint **)(v3 + 36),
    *(uint *)(v3 + 40),
    a2,
    0x17u,
    0,
    9,
    2,
    10006);
  Function_200cc3c(*(uint **)(v3 + 36), *(uint *)(v3 + 40), v2, 0x14u, 0, 2, 10004);
  Function_200ce24(*(uint **)(v3 + 36), *(uint *)(v3 + 40), v2, 0x16u, 0, 10004);
  Function_200ce54(*(uint **)(v3 + 36), *(uint *)(v3 + 40), v2, 0x15u, 0, 10004);
  Function_22648e0(v3);
  Function_2264fb0(v3, v3 + 5208);
  Function_2265064(v3, v3 + 5224);
  Function_2265abc(v3, v3 + 5472);
  Function_2264bf8(v3);
  return Function_2264d1c(v3);
}

//----- (022619F8) --------------------------------------------------------
int __fastcall Function_22619f8(int a1)
{
  int v1;

  v1 = a1;
  Function_2264914();
  Function_226504c(v1, v1 + 5208);
  Function_22651e0(v1, v1 + 5224);
  return Function_2265b3c(v1, v1 + 5472);
}

//----- (02261A2C) --------------------------------------------------------
int __fastcall Function_2261a2c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_2003050(*(uint *)(a1 + 140), 173, 4, 110, 0, 0, 0);
  Function_20070e8(v3, 2u, *(uint **)(v2 + 44), 3u, 0, 0, 0, 110);
  Function_200710c(v3, 3u, *(uint **)(v2 + 44), 3u, 0, 0, 0, 110);
  Function_20070e8(v3, 0, *(uint **)(v2 + 44), 2u, 0, 0, 0, 110);
  Function_200710c(v3, 1u, *(uint **)(v2 + 44), 2u, 0, 0, 0, 110);
  return Function_20038b0(*(uint *)(v2 + 140), 0, 2, 0, 0, 1u);
}

//----- (02261AC4) --------------------------------------------------------
void Function_2261ac4()
{
  ;
}

//----- (02261AC8) --------------------------------------------------------
int __fastcall Function_2261ac8(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = a2;
  Function_2003050(*(uint *)(a1 + 140), 173, 5, 110, 1, 160, 0);
  Function_2002fec(*(uint *)(v2 + 140), 173, 6, 110, 1, 320, 0x60u, 0x60u);
  Function_20070e8(v3, 0xDu, *(uint **)(v2 + 44), 6u, 0, 0, 0, 110);
  Function_200710c(v3, 0xEu, *(uint **)(v2 + 44), 6u, 0, 0, 0, 110);
  Function_20070e8(v3, 0x12u, *(uint **)(v2 + 44), 5u, 0, 0, 0, 110);
  v4 = *(uchar *)(*(uint *)v2 + 48);
  if ( v4 == 2 )
  {
    Function_200710c(v3, 0xFu, *(uint **)(v2 + 44), 5u, 0, 0, 0, 110);
  }
  else if ( v4 == 3 )
  {
    Function_200710c(v3, 0x10u, *(uint **)(v2 + 44), 5u, 0, 0, 0, 110);
  }
  else
  {
    Function_200710c(v3, 0x11u, *(uint **)(v2 + 44), 5u, 0, 0, 0, 110);
  }
  Function_20070e8(v3, 0x12u, *(uint **)(v2 + 44), 4u, 0, 0, 0, 110);
  Function_200710c(v3, 0x13u, *(uint **)(v2 + 44), 4u, 0, 0, 0, 110);
  Function_2264af0(v2);
  Function_2264ab0(v2);
  Function_200daa4(*(uint **)(v2 + 44), 4u, 848, 6, 0, 110);
  GetPaletteAdresses(*(uint *)(v2 + 140), 1u, 96, 32);
  return Function_20038b0(*(uint *)(v2 + 140), 1, 2, 0, 0, 1u);
}

//----- (02261C28) --------------------------------------------------------
void Function_2261c28()
{
  ;
}

//----- (02261C2C) --------------------------------------------------------
int __fastcall Function_2261c2c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int *v6;
  int *v7;
  int v9;
  int v10;
  int *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int (***v16)(void);

  v9 = a1;
  v10 = a2;
  v11 = (int *)(a1 + 216);
  v2 = 0;
  v3 = Function_203608c();
  v4 = 5 * Function_226235c(v9, v3);
  Function_20170d8(v11, v10, dword_22669F0[v4], 110);
  Function_2017258(v11 + 4, (int)v11);
  Function_2017350(v11 + 4, 0, -102400, 0);
  Function_201736c(v11 + 4, 4096, 4096, 4096);
  Function_2017348((int)(v11 + 4), 1);
  Function_20170d8(v11 + 34, v10, dword_22669F4[v4], 110);
  Function_20170d8(v11 + 38, v10, dword_22669F8[v4], 110);
  Function_20170d8(v11 + 42, v10, dword_22669FC[v4], 110);
  Function_20170d8(v11 + 46, v10, dword_2266A00[v4], 110);
  v14 = 0;
  v12 = (int)(v11 + 81);
  v16 = (int (***)(void))(v9 + 168);
  v15 = (int)(v11 + 34);
  do
  {
    v5 = v15;
    v6 = (int *)v12;
    v7 = v11;
    v13 = 0;
    do
    {
      if ( v2 )
      {
        Function_2017190(v6, v5, v2, v16);
      }
      else
      {
        Function_2017164(v6, v5, v10, v13 + 35, 110, v16);
        v2 = v7[81];
      }
      Function_2017240((int)v6, 0);
      v5 += 16;
      v6 += 36;
      v7 += 36;
      ++v13;
    }
    while ( v13 < 4 );
    v12 += 576;
    v11 += 144;
    ++v14;
  }
  while ( v14 < 8 );
  Function_20170d8((int *)(v9 + 5024), v10, 0x1Eu, 110);
  Function_2017258((int *)(v9 + 5040), v9 + 5024);
  Function_2017350((uint *)(v9 + 5040), 0, -102400, 0);
  Function_201736c((uint *)(v9 + 5040), 4096, 4096, 4096);
  return Function_2017348(v9 + 5040, 1);
}

//----- (02261DD0) --------------------------------------------------------
int __fastcall Function_2261dd0(int a1)
{
  int v1;
  int v2;
  int *v3;
  int v4;
  int v5;
  int *v6;
  int v8;
  int v9;

  v1 = a1 + 216;
  v8 = a1;
  Function_2017110((int *)(a1 + 216));
  v2 = 0;
  v3 = (int *)(v1 + 136);
  do
  {
    Function_2017110(v3);
    ++v2;
    v3 += 4;
  }
  while ( v2 < 4 );
  v9 = 0;
  v4 = v1 + 324;
  do
  {
    v5 = 0;
    v6 = (int *)v4;
    do
    {
      Function_20171a0(v6, v8 + 168);
      ++v5;
      v6 += 36;
    }
    while ( v5 < 4 );
    v4 += 576;
    ++v9;
  }
  while ( v9 < 8 );
  return Function_2017110((int *)(v8 + 5024));
}

//----- (02261E38) --------------------------------------------------------
int __fastcall Function_2261e38(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v2 = a1 + 216;
  if ( a2 <= 1200 )
  {
    if ( a2 <= 2 )
      v3 = a2 > 1;
    else
      v3 = 2;
  }
  else
  {
    v3 = 3;
  }
  v4 = 0;
  v5 = v2 + 144 * v3;
  do
  {
    if ( !*(uint *)(v5 + 200) )
    {
      v6 = 144 * v3;
      v7 = 576 * v4;
      v8 = v2 + 204 + 576 * v4;
      Function_2017258((int *)(v8 + 144 * v3), v2 + 136 + 16 * v3);
      Function_2017350((uint *)(v8 + v6), 0, -102400, 0);
      Function_201736c((uint *)(v8 + v6), 4096, 4096, 4096);
      Function_2017348(v8 + v6, 1);
      v9 = v2 + 324 + v7;
      Function_2017240(v9 + v6, 0);
      Function_201727c(v8 + v6, v9 + v6);
      *(uint *)(v2 + v7 + v6 + 200) = 1;
      Function_2005748(0x579u);
      return 1;
    }
    ++v4;
    v5 += 576;
  }
  while ( v4 < 8 );
  return 0;
}

//----- (02261F08) --------------------------------------------------------
uint *__fastcall Function_2261f08(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  uint *result;

  v3 = a1 + 216;
  v4 = 576 * a2;
  v5 = 144 * a3;
  Function_2017288((int *)(a1 + 420 + 576 * a2 + 144 * a3), a1 + 540 + 576 * a2 + 144 * a3);
  result = (uint *)(v3 + v4 + v5 + 200);
  *result = 0;
  return result;
}

//----- (02261F3C) --------------------------------------------------------
int __fastcall Function_2261f3c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;
  int v6;
  int v7;
  int v8;

  v6 = a1;
  v8 = a1 + 216;
  v1 = 0;
  v7 = a1 + 540;
  do
  {
    v2 = v8;
    v3 = v7;
    v4 = 0;
    do
    {
      if ( *(uint *)(v2 + 200) == 1 && Function_2017204(v3, 4096) == 1 )
        Function_2261f08(v6, v1, v4);
      ++v4;
      v2 += 144;
      v3 += 144;
    }
    while ( v4 < 4 );
    v8 += 576;
    result = v7 + 576;
    ++v1;
    v7 += 576;
  }
  while ( v1 < 8 );
  return result;
}

//----- (02261FA4) --------------------------------------------------------
int __fastcall Function_2261fa4(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;
  int v6;
  int v7;

  v6 = a1 + 216;
  v7 = 0;
  v1 = a1 + 420;
  do
  {
    v2 = v6;
    v3 = 0;
    v4 = v1;
    do
    {
      if ( *(uint *)(v2 + 200) == 1 )
        Function_2017294(v4);
      ++v3;
      v2 += 144;
      v4 += 144;
    }
    while ( v3 < 4 );
    v6 += 576;
    v1 += 576;
    result = v7 + 1;
    v7 = result;
  }
  while ( result < 8 );
  return result;
}

//----- (02261FF4) --------------------------------------------------------
BOOL __fastcall Function_2261ff4(int a1)
{
  return *(uint *)(a1 + 4) == Function_203608c();
}

//----- (0226200C) --------------------------------------------------------
int __fastcall Function_226200c(uint *a1)
{
  uint v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = a1[3];
  v2 = *(uchar *)(*a1 + 48);
  v3 = 1;
  v4 = *(uchar *)(*a1 + 44);
  if ( v2 > 1 )
  {
    v5 = (int)(a1 + 1);
    do
    {
      if ( v1 < *(uint *)(v5 + 12) )
      {
        v4 = *(uchar *)(*a1 + v3 + 44);
        v1 = *(uint *)(v5 + 12);
      }
      ++v3;
      v5 += 4;
    }
    while ( v3 < v2 );
  }
  a1[1] = v4;
  return v4;
}

//----- (02262044) --------------------------------------------------------
int __fastcall Function_2262044(int a1, int a2, int *a3)
{
  int v3;
  int *v4;
  int result;
  int v6;
  int v7;
  uint *v8;
  int v9;
  int *v10;
  int v11;
  int *v12;
  int v13;
  int v14;
  int v15;

  v3 = a1;
  v15 = a2;
  v4 = a3;
  result = Function_22620e0();
  if ( result != 1 )
  {
    v6 = v3 + 12036;
    s32_div_f(*(uint *)(v3 + 12036 + 4 * v15), 60);
    v8 = (uint *)(v3 + 7196 + 1200 * v15 + 20 * v7);
    ++*(uint *)(v6 + 4 * v15);
    if ( *v8 )
      ErrorHandler();
    v9 = *v4;
    v11 = v4[1];
    v10 = v4 + 2;
    *v8 = v9;
    v8[1] = v11;
    v12 = v8 + 2;
    v13 = *v10;
    v14 = v10[1];
    v10 += 2;
    *v12 = v13;
    v12[1] = v14;
    result = *v10;
    v12[2] = *v10;
  }
  return result;
}

//----- (022620A0) --------------------------------------------------------
int __fastcall Function_22620a0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = 4 * a2;
  v5 = a1 + 12052;
  s32_div_f(*(uint *)(a1 + 12052 + 4 * a2), 60);
  v7 = v2 + 7196 + 1200 * v3;
  if ( !*(uint *)(v7 + 20 * v6) )
    return 0;
  result = v7 + 20 * v6;
  ++*(uint *)(v5 + v4);
  return result;
}

//----- (022620E0) --------------------------------------------------------
int __fastcall Function_22620e0(uint *a1, int a2, int *a3)
{
  int *v3;
  uint *v4;
  uint *v5;
  int v6;
  uint *v7;
  int v8;
  uint *v9;
  int v10;
  int result;

  v3 = a3;
  v4 = a1;
  switch ( (uchar)*a3 )
  {
    case 2u:
    case 3u:
    case 4u:
    case 5u:
    case 6u:
    case 7u:
      if ( a1[3004] )
        ErrorHandler();
      v5 = v4 + 3004;
      v6 = *v3;
      v8 = v3[1];
      v7 = v3 + 2;
      *v5 = v6;
      v5[1] = v8;
      v9 = v4 + 3006;
      v10 = v7[1];
      *v9 = *v7;
      v9[1] = v10;
      v4[3008] = v7[2];
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

//----- (02262130) --------------------------------------------------------
int __fastcall Function_2262130(int a1, int *a2)
{
  int v2;
  int *v3;
  int result;
  int v5;
  uint *v6;
  int v7;
  int *v8;
  int v9;
  int *v10;
  int v11;
  int v12;

  v2 = a1;
  v3 = a2;
  result = Function_226217c();
  if ( result != 1 )
  {
    s32_div_f(*(uint *)(v2 + 12068), 60);
    v6 = (uint *)(v2 + 5996 + 20 * v5);
    ++*(uint *)(v2 + 12068);
    if ( *v6 )
      ErrorHandler();
    v7 = *v3;
    v9 = v3[1];
    v8 = v3 + 2;
    *v6 = v7;
    v6[1] = v9;
    v10 = v6 + 2;
    v11 = *v8;
    v12 = v8[1];
    v8 += 2;
    *v10 = v11;
    v10[1] = v12;
    result = *v8;
    v10[2] = *v8;
  }
  return result;
}

//----- (0226217C) --------------------------------------------------------
int __fastcall Function_226217c(int a1, int *a2, int a3, char a4)
{
  int *v4;
  int v5;
  int v6;
  uint *v7;
  int v8;
  uint *v9;
  int v10;
  int v11;
  int result;

  v4 = a2;
  v5 = *a2;
  switch ( a4 )
  {
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      v6 = *(uint *)(a1 + 11996);
      if ( v6 )
      {
        if ( v5 == v6 )
        {
          result = 1;
        }
        else
        {
          ErrorHandler();
          result = 0;
        }
      }
      else
      {
        v7 = (uint *)(a1 + 11996);
        v8 = *v4;
        v10 = v4[1];
        v9 = v4 + 2;
        *v7 = v8;
        v7[1] = v10;
        v7 += 2;
        v11 = v9[1];
        *v7 = *v9;
        v7[1] = v11;
        v7[2] = v9[2];
        result = 1;
      }
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

//----- (022621D4) --------------------------------------------------------
uint *__fastcall Function_22621d4(int a1)
{
  int v1;
  int v2;
  uint *result;

  v1 = a1;
  s32_div_f(*(uint *)(a1 + 12072), 60);
  result = (uint *)(v1 + 5996 + 20 * v2);
  if ( !*result )
    result = 0;
  return result;
}

//----- (02262200) --------------------------------------------------------
int __fastcall Function_2262200(int a1)
{
  int v1;
  int v2;
  int result;
  uint *v4;

  v1 = a1;
  v2 = *(uint *)(a1 + 12228);
  if ( v2 <= 0 )
  {
    if ( *(uint *)(a1 + 11996) )
    {
      if ( Function_2266624(a1, a1 + 11996) == 1 )
      {
        *(uint *)(v1 + 11996) = 0;
        result = 1;
      }
      else
      {
        result = 0;
      }
    }
    else
    {
      v4 = Function_22621d4(a1);
      if ( v4 )
      {
        if ( Function_2266624(v1, v4) == 1 )
        {
          *v4 = 0;
          ++*(uint *)(v1 + 12072);
          result = 1;
        }
        else
        {
          result = 0;
        }
      }
      else
      {
        result = 0;
      }
    }
  }
  else
  {
    *(uint *)(a1 + 12228) = v2 - 1;
    result = 0;
  }
  return result;
}

//----- (02262270) --------------------------------------------------------
int __fastcall Function_2262270(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;

  v1 = a1;
  result = ((int (*)(void))Function_22666c0)();
  if ( result != 1 )
  {
    v3 = 0;
    result = *(uchar *)(*(uint *)v1 + 48);
    if ( result > 0 )
    {
      do
      {
        while ( 1 )
        {
          v4 = Function_22620a0(v1, *(uchar *)(*(uint *)v1 + v3 + 44));
          if ( !v4 )
            break;
          Function_22666c0(v1, v4);
        }
        ++v3;
        result = *(uchar *)(*(uint *)v1 + 48);
      }
      while ( v3 < result );
    }
  }
  return result;
}

//----- (022622B8) --------------------------------------------------------
int __fastcall Function_22622b8(int a1)
{
  return *(uint *)(a1 + 12232);
}

//----- (022622C4) --------------------------------------------------------
int __fastcall Function_22622c4(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int i;
  int v8;
  int j;
  int v10;
  int result;
  int v12;
  int v13;

  v2 = a1;
  v3 = a2;
  v4 = Function_203608c();
  v5 = 255;
  v6 = 255;
  for ( i = 0; i < *(uchar *)(*(uint *)v2 + 48); ++i )
  {
    if ( v4 == *(uchar *)(*(uint *)v2 + i + 44) )
      v6 = i;
    if ( v3 == *(uchar *)(*(uint *)v2 + i + 44) )
      v5 = i;
  }
  v8 = 0;
  if ( v5 != 255 && v6 != 255 )
    v8 = 1;
  if ( !v8 )
    ErrorHandler();
  for ( j = 0; ; ++j )
  {
    v10 = *(uchar *)(*(uint *)v2 + 48);
    if ( j >= v10 )
      break;
    if ( v6 == *((uchar *)&dword_2266954[*(uchar *)(*(uint *)v2 + 48)] + j) )
      v12 = j;
    if ( v5 == *((uchar *)&dword_2266954[*(uchar *)(*(uint *)v2 + 48)] + j) )
      v13 = j;
  }
  result = v13 - v12;
  if ( v13 - v12 < 0 )
    result += v10;
  return result;
}

//----- (0226235C) --------------------------------------------------------
int __fastcall Function_226235c(int *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = *a1;
  v3 = 0;
  v4 = *(uchar *)(*a1 + 48);
  if ( v4 <= 0 )
  {
LABEL_5:
    ErrorHandler();
    result = 0;
  }
  else
  {
    while ( a2 != *(uchar *)(v2 + 44) )
    {
      ++v3;
      ++v2;
      if ( v3 >= v4 )
        goto LABEL_5;
    }
    result = v3;
  }
  return result;
}

//----- (0226238C) --------------------------------------------------------
int __fastcall Function_226238c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( *(uint *)(a1 + 12244) )
    ErrorHandler();
  *(uint *)(v3 + 12244) = v4;
  result = 12248;
  *(uint *)(v3 + 12248) = v5;
  return result;
}

//----- (022623B0) --------------------------------------------------------
int __fastcall Function_22623b0(uint *a1)
{
  int v1;
  int v2;
  int result;
  int v4;

  v1 = (int)a1;
  v2 = 0;
  switch ( (uchar)a1[3061] )
  {
    case 1u:
      v2 = 1;
      goto LABEL_12;
    case 2u:
      v2 = 1;
      goto LABEL_12;
    case 3u:
      v2 = 1;
      goto LABEL_12;
    case 4u:
      if ( a1[3059] == 1 )
        v2 = 1;
      goto LABEL_12;
    case 5u:
      if ( !a1[3303] )
        v2 = 1;
      goto LABEL_12;
    case 6u:
      if ( a1[1498] == 1 )
        v2 = 1;
LABEL_12:
      if ( v2 == 1 )
      {
        Function_20364f0(a1[3062]);
        if ( Function_2261ff4(v1) == 1 )
          v4 = 7;
        else
          v4 = 0;
        *(uint *)(v1 + 12244) = v4;
        result = 1;
      }
      else
      {
        result = 0;
      }
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

//----- (02262448) --------------------------------------------------------
int __fastcall Function_2262448(int a1, int a2)
{
  int v2;
  int v4;

  v2 = a1;
  if ( *(uint *)(a1 + 12244) != 7 )
    return 0;
  v4 = *(uint *)(a1 + 12248);
  if ( v4 != a2 )
    return 0;
  if ( Function_2036540((uchar)v4) != 1 )
    return 0;
  *(uint *)(v2 + 12244) = 0;
  return 1;
}

//----- (02262484) --------------------------------------------------------
int __fastcall Function_2262484(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  switch ( (uchar)*(uint *)(a2 + 12) )
  {
    case 0u:
      Function_226687c(a1, 1, *(uchar *)(a2 + 24));
      ++*(uint *)(v2 + 12);
      goto LABEL_11;
    case 1u:
      if ( Function_2262448(a1, *(uchar *)(a2 + 24)) == 1 )
      {
        ++*(uchar *)(v2 + 24);
        ++*(uint *)(v2 + 12);
      }
      goto LABEL_11;
    case 2u:
      Function_22668b8(a1, *(uchar *)(a2 + 24));
      ++*(uint *)(v2 + 12);
      goto LABEL_11;
    case 3u:
      if ( Function_2262448(a1, *(uchar *)(a2 + 24)) == 1 )
      {
        ++*(uchar *)(v2 + 24);
        ++*(uint *)(v2 + 12);
      }
      goto LABEL_11;
    case 4u:
      Function_22667f4(a1, *(uchar *)(a2 + 24));
      ++*(uint *)(v2 + 12);
      goto LABEL_11;
    case 5u:
      if ( Function_2262448(a1, *(uchar *)(a2 + 24)) != 1 )
        goto LABEL_11;
      ++*(uchar *)(v2 + 24);
      result = 1;
      break;
    default:
LABEL_11:
      result = 0;
      break;
  }
  return result;
}

//----- (0226251C) --------------------------------------------------------
int __fastcall Function_226251c(uint *a1, int a2)
{
  int v2;
  uint *v3;
  int v5;
  int v6;
  int v7;

  v2 = a2;
  v3 = a1;
  if ( a1[3053] > 0x516u && !a1[3061] && !a1[2999] && !a1[3004] )
    return 1;
  switch ( (uchar)*(uint *)(a2 + 12) )
  {
    case 0u:
      v5 = Function_2263cf4(a1[3058]);
      Function_2266784(v3, v3[3058], v5, *(uchar *)(v2 + 24));
      ++*(uint *)(v2 + 12);
      break;
    case 1u:
      if ( Function_2262448((int)a1, *(uchar *)(a2 + 24)) == 1 )
      {
        ++*(uchar *)(v2 + 24);
        ++*(uint *)(v2 + 12);
      }
      break;
    case 2u:
      v6 = a1[1293];
      if ( v6 && a1[1292] >= v6 )
      {
        ++a1[3058];
        v7 = Function_22622b8((int)a1);
        Function_2266730(v3, v7, *(uchar *)(v2 + 24));
        ++*(uint *)(v2 + 12);
      }
      break;
    case 3u:
      if ( Function_2262448((int)a1, *(uchar *)(a2 + 24)) == 1 )
      {
        ++*(uchar *)(v2 + 24);
        *(uint *)(v2 + 12) = 0;
      }
      break;
    default:
      return 0;
  }
  return 0;
}

//----- (022625F8) --------------------------------------------------------
int __fastcall Function_22625f8(int a1, int a2, char a3)
{
  int v3;
  int v4;
  int v5;
  int result;

  v3 = a2;
  v4 = *(uint *)(a2 + 12);
  switch ( a3 )
  {
    case 0:
      Function_2266834(a1, *(uchar *)(v3 + 24));
      ++*(uint *)(v3 + 12);
      goto LABEL_10;
    case 1:
      if ( Function_2262448(a1, *(uchar *)(v3 + 24)) == 1 )
      {
        ++*(uchar *)(v3 + 24);
        ++*(uint *)(v3 + 12);
      }
      goto LABEL_10;
    case 2:
      if ( *(uint *)(a1 + 32) == 8 )
        *(uint *)(v3 + 12) = v4 + 1;
      goto LABEL_10;
    case 3:
      v5 = *(uint *)(v3 + 20) + 1;
      *(uint *)(v3 + 20) = v5;
      if ( v5 < 90 || Function_2266648() != 1 )
        goto LABEL_10;
      result = 1;
      break;
    default:
LABEL_10:
      result = 0;
      break;
  }
  return result;
}

//----- (02262664) --------------------------------------------------------
int __fastcall Function_2262664(int a1)
{
  uint *v1;
  uint v3;

  v1 = (uint *)a1;
  if ( !Function_2261ff4(a1) )
    return 0;
  v3 = v1[46];
  if ( v3 >= 3 )
    return 1;
  if ( ((int (__fastcall *)(uint *, uint *))*(&off_2266920 + v3))(v1, v1 + 46) == 1 )
  {
    ++v1[46];
    v1[49] = 0;
    v1[51] = 0;
    v1[50] = 0;
  }
  return 0;
}

//----- (022626AC) --------------------------------------------------------
void Function_22626ac()
{
  ;
}

//----- (022626B0) --------------------------------------------------------
int __fastcall Function_22626b0(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = malloc(0x6Eu, 632);
  MI_CpuFill8((ushort *)v2, 0, 0x278u);
  *(uint *)(v2 + 624) = *(uint *)(*(uint *)v1 + 52);
  Function_2262b98(v2);
  Function_2262e0c(v2);
  Function_2262e5c(v2);
  v3 = *(uint *)(*(uint *)v1 + 52);
  if ( v3 == 1 )
  {
    *(uint *)(v2 + 608) = 589824;
    *(uint *)(v2 + 612) = 458752;
  }
  else if ( v3 == 2 )
  {
    *(uint *)(v2 + 608) = 0x40000;
    *(uint *)(v2 + 612) = 425984;
  }
  else
  {
    *(uint *)(v2 + 608) = 393216;
    *(uint *)(v2 + 612) = 393216;
  }
  *(uint *)(v2 + 540) = 128;
  *(uint *)(v2 + 544) = 40;
  Function_22638d8(v1);
  *(uint *)(v2 + 564) = Function_2263a00(v1);
  Function_2263a6c(v2, *(uint *)(v2 + 564));
  *(uint *)(v2 + 584) = 0x2000;
  return v2;
}

//----- (02262760) --------------------------------------------------------
uint __fastcall Function_2262760(int a1, int *a2)
{
  int v2;
  int *v3;

  v2 = a1;
  v3 = a2;
  Function_2263ae4(a2[141]);
  Function_22639bc(v2);
  free(*v3);
  free(v3[147]);
  free(v3[148]);
  return free((int)v3);
}

//----- (02262798) --------------------------------------------------------
int __fastcall Function_2262798(uint *a1, uint *a2, int a3, int a4)
{
  uint *v4;
  uint *v5;
  int v6;
  int v7;
  int result;
  int v9;
  int v10;
  uint v11;
  char v12;
  int v13;

  v13 = a4;
  v4 = a2;
  v5 = a1;
  a2[145] = 0;
  if ( a1[8] == 2 )
  {
    a2[131] = a1[1494];
    a2[132] = a1[1495];
    a2[133] = a1[1496];
    a2[134] = a1[1497];
  }
  else if ( a1[3054] && a1[3055] != 1 )
  {
    a2[131] = (ushort)word_21BF6D8;
    a2[132] = (ushort)word_21BF6DA;
    a2[133] = (ushort)word_21BF6DE;
    a2[134] = (ushort)word_21BF6DC;
  }
  else
  {
    a2[131] = 0;
    a2[132] = 0;
    a2[133] = 0;
    a2[134] = 0;
  }
  Function_2263270(a2);
  if ( !v4[133] )
  {
    Function_2262a38(v4);
    v6 = v4[8];
    if ( !v6 )
      *((uchar *)v4 + 628) = 0;
  }
  Function_226334c(v4);
  Function_2262a70(v4);
  Function_2263a6c(v4, v4[141]);
  v7 = *((short *)v4 + 308);
  if ( v7 > 0 )
  {
    *((ushort *)v4 + 308) = v7 + 8;
    if ( *((short *)v4 + 308) > 30 )
      *((ushort *)v4 + 308) = 30;
    Function_2262cfc(v4);
  }
  result = 12220;
  if ( !v5[3055] )
  {
    result = v5[3054];
    if ( result == 1 && v4[145] > 0 )
    {
      v9 = 0;
      if ( v4[151] >= 800 )
      {
        Function_2262ce8(v4);
        *((ushort *)v4 + 308) = 0;
        v9 = 1;
      }
      else if ( Function_2262cb8(v4) == 1 )
      {
        *((ushort *)v4 + 308) = 8;
        *((uchar *)v4 + 629) = 0;
        Function_2005748(0x576u);
      }
      v10 = Function_226296c(v4, v4[145]);
      v11 = v10;
      if ( v9 == 1 )
        v11 = v10 + s32_div_f(25 * v10, 100);
      Function_2264e14(v5, v5[3058], v11, &v12);
      Function_2264e3c(v5, &v12);
      Function_2263dc4(v5, &v12);
      Function_2262998(v4, v4[145]);
      Function_22629e0(v5, v4, v4[145], v9);
      result = 580;
      v4[145] = 0;
    }
  }
  return result;
}

//----- (02262950) --------------------------------------------------------
int __fastcall Function_2262950(int a1, int a2)
{
  int result;

  result = 630;
  if ( *(uchar *)(a2 + 630) == 1 )
  {
    *(uchar *)(a2 + 630) = 0;
    result = Function_2262c3c(a2);
  }
  return result;
}

//----- (0226296C) --------------------------------------------------------
uint __fastcall Function_226296c(int a1, int a2)
{
  int v2;

  if ( a2 < 98 )
    v2 = 10 * a2;
  else
    v2 = 1200;
  return s32_div_f(dword_2266FD8[*(uint *)(a1 + 624)] * v2, 100);
}

//----- (02262998) --------------------------------------------------------
int __fastcall Function_2262998(int result)
{
  int v1;

  v1 = *(uint *)(result + 580);
  if ( v1 < 98 )
  {
    if ( v1 < 98 )
      *(uint *)(result + 584) = 0x2000;
    else
      *(uint *)(result + 584) += 4096;
  }
  else
  {
    *(uint *)(result + 584) += 4096;
  }
  if ( *(uint *)(result + 584) > 69632 )
    *(uint *)(result + 584) = 69632;
  return result;
}

//----- (022629E0) --------------------------------------------------------
int __fastcall Function_22629e0(int result, uint *a2, int a3, int a4)
{
  int v4;
  int v5;

  if ( a4 != 1 || a2[145] < 98 )
  {
    if ( a2[145] < 98 )
    {
      v4 = a2[8];
      v5 = a2[4];
      if ( v5 >= v4 )
      {
        if ( v5 > v4 )
        {
          Function_2261600(result, 1);
          result = Function_2005748(0x578u);
        }
      }
      else
      {
        Function_2261600(result, 2);
        result = Function_2005748(0x578u);
      }
    }
  }
  else
  {
    Function_2261600(result, 0);
    result = Function_2005748(0x57Au);
  }
  return result;
}

//----- (02262A38) --------------------------------------------------------
uint *__fastcall Function_2262a38(uint *result)
{
  uint *v1;

  v1 = result;
  if ( result[142] )
  {
    result[142] = 0;
    result[143] = -1;
    result[145] = result[144] - Function_22638ac();
    result = (uint *)v1[145];
    if ( (int)result < 25 )
    {
      result = (uint *)580;
      v1[145] = 0;
    }
  }
  return result;
}

//----- (02262A70) --------------------------------------------------------
int __fastcall Function_2262a70(int a1)
{
  int v1;
  int v2;
  uint v3;
  int v4;
  int v5;
  int v6;
  uint v7;
  int *v8;
  int v9;
  int v10;
  int v12;
  int v13;
  uint v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  uint v20;
  uint v21;
  int v22;
  int v23;
  int v24;
  int v25;

  v1 = a1;
  v19 = 764109095;
  Function_20b275c(50, (int)&v19, 1);
  v18 = 0x7FFF;
  Function_20b275c(51, (int)&v18, 1);
  Function_20b275c(17, 0, 0);
  v23 = 0;
  v24 = 77824;
  v25 = -20480;
  Function_20b275c(28, (int)&v23, 3);
  v2 = *(uint *)(v1 + 612);
  v3 = v2 + s32_div_f(*(short *)(v1 + 618) * v2, 100);
  v4 = *(uint *)(v1 + 608);
  v20 = v4 + s32_div_f((*(short *)(v1 + 616) + *(short *)(v1 + 620)) * v4, 100);
  v22 = 4096;
  v21 = v3;
  Function_20b275c(27, (int)&v20, 3);
  v17 = 3;
  Function_20b275c(16, (int)&v17, 1);
  Function_20b275c(21, 0, 0);
  v16 = 2;
  Function_20b275c(16, (int)&v16, 1);
  v5 = Function_2262d4c();
  Function_2262d98(v5);
  v6 = *(uint *)(v1 + 4);
  v7 = *(uint *)(v6 + 44) << 16;
  v15 = *(uint *)(v6 + 8) & 0xFFFF | 0x72400000;
  Function_20b275c(42, (int)&v15, 1);
  v14 = v7 >> 17;
  Function_20b275c(43, (int)&v14, 1);
  v13 = 2031809;
  Function_20b275c(41, (int)&v13, 1);
  Function_2262eac(v1);
  v12 = 1;
  v8 = Function_20b275c(18, (int)&v12, 1);
  return Function_20b2628((int)v8, v9, v10);
}

//----- (02262B98) --------------------------------------------------------
uint __fastcall Function_2262b98(int *a1)
{
  int *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint v7;
  uint v8;
  int v10;

  v1 = a1;
  v2 = LoadFromNARC_2(173, 29, 0x6Eu);
  *v1 = v2;
  v3 = Function_20b3c1c_GetTexOffsets(v2);
  v1[1] = v3;
  Function_201cbcc(v3);
  v4 = v1[1];
  v5 = *(uint *)(v4 + 56);
  v6 = 8 * *(ushort *)(v4 + 48);
  v10 = 8 * *(uint *)(v4 + 44) & 0x7FFFF;
  if ( v1[147] )
    ErrorHandler();
  v1[147] = malloc(0x6Eu, v6);
  v1[148] = malloc(0x6Eu, v6);
  MI_CpuCopy8(v4 + v5, v1[147], v6, v7);
  MI_CpuCopy8(v4 + v5, v1[148], v6, v8);
  DC_FlushRange(v1[148], v6);
  v1[150] = v10;
  v1[149] = v6;
  if ( !*(uint *)(v1[1] + 20) )
    ErrorHandler();
  return Function_20182f0(*v1, v1[1] + *(uint *)(v1[1] + 20) - *v1);
}

//----- (02262C3C) --------------------------------------------------------
int *__fastcall Function_2262c3c(int *a1)
{
  int *v1;

  v1 = a1;
  GX_BeginLoadTexPltt();
  GX_LoadTexPltt(v1[148], v1[150], v1[149]);
  return GX_EndLoadTexPltt();
}

//----- (02262C60) --------------------------------------------------------
int __fastcall Function_2262c60(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a1;
  v3 = (int)(s32_div_f(3072 * a2, 800) + 128) >> 8;
  if ( v3 > 16 )
    LOBYTE(v3) = 16;
  Function_200393c(
    *(uint *)(v2 + 588),
    *(uint *)(v2 + 592),
    *(uint *)(v2 + 596) << 15 >> 16,
    (uchar)v3,
    0x1Fu);
  DC_FlushRange(*(uint *)(v2 + 592), *(uint *)(v2 + 596));
  result = 630;
  *(uchar *)(v2 + 630) = 1;
  return result;
}

//----- (02262CB8) --------------------------------------------------------
int __fastcall Function_2262cb8(int a1, int a2)
{
  int v2;

  v2 = 0;
  *(uint *)(a1 + 604) += a2;
  if ( *(uint *)(a1 + 604) >= 800 )
  {
    *(uint *)(a1 + 604) = 800;
    v2 = 1;
  }
  Function_2262c60(a1, *(uint *)(a1 + 604));
  return v2;
}

//----- (02262CE8) --------------------------------------------------------
int __fastcall Function_2262ce8(int a1)
{
  *(uint *)(a1 + 604) = 0;
  return Function_2262c60(a1, *(uint *)(a1 + 604));
}

//----- (02262CFC) --------------------------------------------------------
int __fastcall Function_2262cfc(int result)
{
  int v1;
  int v2;

  v1 = result;
  if ( *(ushort *)(result + 616) )
  {
    v2 = (uchar)++*(uchar *)(result + 629);
    if ( v2 == 4 )
    {
      result = Function_2262c60(result, *(uint *)(result + 604) / 2);
    }
    else if ( v2 == 8 )
    {
      Function_2262c60(result, *(uint *)(result + 604));
      result = 629;
      *(uchar *)(v1 + 629) = 0;
    }
  }
  return result;
}

//----- (02262D4C) --------------------------------------------------------
int *__fastcall Function_2262d4c(int a1, int a2)
{
  int v2;
  int v4;
  int v5;

  v2 = a2;
  v5 = ((a1 != 0) << 15) | 0x21085EF7;
  Function_20b275c(48, (int)&v5, 1);
  v4 = ((v2 != 0) << 15) | 0x7FFF;
  return Function_20b275c(49, (int)&v4, 1);
}

//----- (02262D98) --------------------------------------------------------
int *Function_2262d98()
{
  uint v0;
  char v2[127];
  char v3;

  v0 = 0;
  do
  {
    v2[v0] = (2 * v0 + 1) * (2 * v0 + 1) * (2 * v0 + 1) * (2 * v0 + 1) >> 24;
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 < 0x7F );
  v3 = -1;
  return Function_20b275c(52, (int)v2, 32);
}

//----- (02262E0C) --------------------------------------------------------
int __fastcall Function_2262e0c(int result)
{
  int v1;
  int v2;
  uint *v3;

  v1 = 0;
  v2 = 0;
  do
  {
    v3 = (uint *)(result + 32 * v1);
    v3[3] = 0;
    v3[4] = v2;
    v3[5] = 0;
    v3[6] = v2 - 0x10000;
    v3[7] = 0x80000;
    v3[8] = v2;
    v3[9] = 0x80000;
    ++v1;
    v3[10] = v2 - 0x10000;
    v2 -= 0x10000;
  }
  while ( v1 < 8 );
  return result;
}

//----- (02262E5C) --------------------------------------------------------
int __fastcall Function_2262e5c(int result)
{
  int v1;
  int v2;
  uint *v3;

  v1 = 0;
  v2 = 0;
  do
  {
    v3 = (uint *)(result + 32 * v1);
    v3[67] = 0;
    v3[68] = v2;
    v3[69] = 0;
    v3[70] = v2 + 0x10000;
    v3[71] = 0x80000;
    v3[72] = v2;
    v3[73] = 0x80000;
    ++v1;
    v2 += 0x10000;
    v3[74] = v2;
  }
  while ( v1 < 8 );
  return result;
}

//----- (02262EAC) --------------------------------------------------------
int *__fastcall Function_2262eac(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int *result;
  ushort v7;
  ushort v8;
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
  uchar savedregs[40];

  *(uint *)savedregs = a4;
  v4 = 0;
  v5 = a1;
  do
  {
    v25 = 1;
    Function_20b275c(64, (int)&v25, 1);
    Function_2263168(*(uint *)(v5 + 32 * v4 + 12), *(uint *)(v5 + 32 * v4 + 16), &v8, &v7);
    v24 = (*(uint *)(v5 + 32 * v4 + 272) << 8 >> 16 << 16) | (*(uint *)(v5 + 32 * v4 + 268) << 8 >> 16) & 0xFFFF;
    Function_20b275c(34, (int)&v24, 1);
    v23 = 535822336;
    Function_20b275c(33, (int)&v23, 1);
    v21 = v8 | (v7 << 16);
    v22 = 0;
    Function_20b275c(35, (int)&v21, 2);
    Function_2263168(*(uint *)(v5 + 32 * v4 + 20), *(uint *)(v5 + 32 * v4 + 24), &v8, &v7);
    v20 = (*(uint *)(v5 + 32 * v4 + 280) << 8 >> 16 << 16) | (*(uint *)(v5 + 32 * v4 + 276) << 8 >> 16) & 0xFFFF;
    Function_20b275c(34, (int)&v20, 1);
    v19 = 535822336;
    Function_20b275c(33, (int)&v19, 1);
    v17 = v8 | (v7 << 16);
    v18 = 0;
    Function_20b275c(35, (int)&v17, 2);
    Function_2263168(*(uint *)(v5 + 32 * v4 + 36), *(uint *)(v5 + 32 * v4 + 40), &v8, &v7);
    v16 = (*(uint *)(v5 + 32 * v4 + 296) << 8 >> 16 << 16) | (*(uint *)(v5 + 32 * v4 + 292) << 8 >> 16) & 0xFFFF;
    Function_20b275c(34, (int)&v16, 1);
    v15 = 535822336;
    Function_20b275c(33, (int)&v15, 1);
    v13 = v8 | (v7 << 16);
    v14 = 0;
    Function_20b275c(35, (int)&v13, 2);
    Function_2263168(*(uint *)(v5 + 32 * v4 + 28), *(uint *)(v5 + 32 * v4 + 32), &v8, &v7);
    v12 = (*(uint *)(v5 + 32 * v4 + 288) << 8 >> 16 << 16) | (*(uint *)(v5 + 32 * v4 + 284) << 8 >> 16) & 0xFFFF;
    Function_20b275c(34, (int)&v12, 1);
    v11 = 535822336;
    Function_20b275c(33, (int)&v11, 1);
    v10 = 0;
    v9 = v8 | (v7 << 16);
    Function_20b275c(35, (int)&v9, 2);
    result = Function_20b275c(65, 0, 0);
    ++v4;
  }
  while ( v4 < 8 );
  return result;
}

//----- (02263168) --------------------------------------------------------
int __fastcall Function_2263168(int a1, int a2, ushort *a3, ushort *a4)
{
  int v4;
  ushort *v5;
  ushort *v6;
  int v7;
  int v8;
  int result;

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = ll_sdiv((ll)a1 << 12, 0x80000LL);
  v8 = ll_sdiv((ll)v4 << 12, 0x80000LL);
  if ( v7 > 0x7FFF )
    ErrorHandler();
  if ( v7 < -32768 )
    ErrorHandler();
  if ( v8 > 0x7FFF )
    ErrorHandler();
  if ( v8 < -32768 )
    ErrorHandler();
  if ( v7 - 2048 > 0x7FFF )
    ErrorHandler();
  if ( v7 - 2048 < -32768 )
    ErrorHandler();
  if ( v8 + 2048 > 0x7FFF )
    ErrorHandler();
  if ( v8 + 2048 < -32768 )
    ErrorHandler();
  *v5 = v7 - 2048;
  result = v8 + 2048;
  *v6 = v8 + 2048;
  return result;
}

//----- (02263270) --------------------------------------------------------
int __fastcall Function_2263270(uint *a1)
{
  int v1;
  bool v2;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = a1[142];
  v2 = v1 == 1;
  if ( v1 != 1 )
    v2 = a1[134] == 0;
  if ( v2 )
    return 0;
  v4 = a1[156];
  v5 = a1[131];
  v6 = HIBYTE(dword_2266B04[v4]) + (a1[140] >> 12);
  if ( v5 < BYTE1(dword_2266B04[v4]) )
    return 0;
  if ( v5 > BYTE2(dword_2266B04[v4]) )
    return 0;
  v7 = a1[132];
  if ( v7 < v6 || v7 > LOBYTE(dword_2266B08[v4]) )
    return 0;
  a1[142] = 1;
  a1[137] = a1[131];
  a1[138] = a1[132];
  a1[139] = a1[132] - v6;
  a1[140] = -(a1[8] + (a1[4] - a1[8]) / 2);
  a1[144] = Function_22638ac();
  return 1;
}

//----- (0226334C) --------------------------------------------------------
int __fastcall Function_226334c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  bool v12;

  v1 = a1;
  v2 = 0;
  if ( *(uint *)(a1 + 568) == 1 )
  {
    v3 = *(uint *)(a1 + 572);
    v4 = *(uint *)(a1 + 528);
    if ( v4 < v3 )
    {
      result = 0;
      *(uchar *)(v1 + 628) = 0;
      return result;
    }
    if ( v4 == v3 )
    {
      *(uchar *)(a1 + 628) = 0;
      return 1;
    }
    if ( v3 != -1 && v4 > v3 && !Function_20057d4(0x577u) )
    {
      Function_2005748(0x577u);
      *(uchar *)(v1 + 628) = 1;
    }
    v6 = *(uint *)(v1 + 528);
    v7 = *(uint *)(v1 + 556);
    v8 = *(uint *)(v1 + 560);
    v9 = HIBYTE(dword_2266B04[*(uint *)(v1 + 624)]);
    *(uint *)(v1 + 572) = v6;
    v10 = ((v6 - v7) << 12) - (v8 + (v9 << 12));
  }
  else
  {
    v2 = 1;
    v10 = -*(uint *)(a1 + 584);
  }
  v11 = Function_2263448(v1, v2, v10);
  if ( v11 )
  {
    v12 = v11 == 1;
    if ( v11 != 1 )
      v12 = v11 == 2;
    if ( v12 )
      Function_2262a38((uint *)v1);
  }
  result = 1;
  *(uint *)(v1 + 560) = -(*(uint *)(v1 + 32) + (*(uint *)(v1 + 16) - *(uint *)(v1 + 32)) / 2);
  return result;
}

//----- (02263448) --------------------------------------------------------
int __fastcall Function_2263448(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  bool v11;
  int result;
  int v13;
  int v14;
  int v15;
  int v16;
  uint v17;
  int v18;
  int v19;
  int v20;
  int v21;
  uint *v22;
  int v23;
  int *v24;
  int v25;
  int v26;
  int v27;

  v3 = a1;
  v4 = -a1[4];
  v5 = -a1[8];
  v6 = a3;
  v7 = a2;
  v8 = (a1[8] - a1[4]) / 2 - a1[8];
  v25 = 0;
  v9 = ((int (*)(void))Function_22637ac)();
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      v25 = Function_22637e4(v3, v6, v4, v5, &v27, &v26);
    }
    else if ( v9 == 2 )
    {
      v25 = Function_22637e4(v3, v6, v5, v4, &v26, &v27);
    }
  }
  else
  {
    v27 = v4 + v6;
    v26 = v5 + v6;
  }
  v10 = v26 + (v27 - v26) / 2;
  v11 = v8 == v10;
  if ( v8 == v10 )
    v11 = v4 == v27;
  if ( v11 && v5 == v26 )
    return 0;
  if ( v10 < 0 )
    v10 = 0;
  if ( v27 < 0 )
    v27 = 0;
  if ( v26 < 0 )
    v26 = 0;
  if ( v10 > 409600 )
    v25 = 1;
  if ( v10 > 409600 )
    v10 = 409600;
  if ( v27 > 409600 )
  {
    v27 = 409600;
    v25 = 1;
  }
  if ( v26 > 409600 )
  {
    v26 = 409600;
    v25 = 1;
  }
  v13 = Function_22637ac(v3, v7);
  switch ( v13 )
  {
    case 0:
      goto LABEL_43;
    case 1:
      v15 = FX_Atan2Idx(v27 - v10, -262144);
      v14 = (v15 + 0x8000) & 0xFFFF;
      break;
    case 2:
      v14 = FX_Atan2Idx(v26 - v10, 0x40000);
      v15 = (v14 + 0x8000) & 0xFFFF;
      break;
    default:
LABEL_43:
      v14 = FX_Atan2Idx(v26 - v10, 0x40000);
      v15 = (v14 + 0x8000) & 0xFFFF;
      break;
  }
  v3[3] = (*((short *)Unknown_20f983c + 2 * (v15 >> 4) + 1) << 6) + 0x40000;
  v3[4] = -(v10 + (SLOWORD(Unknown_20f983c[v15 >> 4]) << 6));
  v3[7] = (*((short *)Unknown_20f983c + 2 * (v14 >> 4) + 1) << 6) + 0x40000;
  v3[8] = -(v10 + (SLOWORD(Unknown_20f983c[v14 >> 4]) << 6));
  if ( (uint)v14 > 0x8000 )
  {
    v16 = v14 - 0x10000 + ((ull)(-1840700269LL * (v14 - 0x10000)) >> 32);
    v17 = (uint)(v14 - 0x10000) >> 31;
  }
  else
  {
    v16 = v14 + ((ull)(-1840700269LL * v14) >> 32);
    v17 = (uint)v14 >> 31;
  }
  v18 = v17 + (v16 >> 2);
  v19 = v18;
  v20 = (458752 - v10) / 7;
  v21 = 1;
  do
  {
    v22 = &v3[8 * v21];
    v22[3] = (SHIWORD(Unknown_20f983c[(v15 - v19) >> 4]) << 6) + 0x40000;
    v23 = (v14 - v19) >> 4;
    v24 = &Unknown_20f983c[(v14 - v19) >> 4];
    v22[4] = -(v20 + v10 + (SLOWORD(Unknown_20f983c[(v15 - v19) >> 4]) << 6));
    v19 += v18;
    ++v21;
    v22[7] = (*((short *)v24 + 1) << 6) + 0x40000;
    v22[8] = -(v20 + v10 + (SLOWORD(Unknown_20f983c[v23]) << 6));
    v20 += (458752 - v10) / 7;
    *(v22 - 3) = v22[3];
    *(v22 - 2) = v22[4];
    v22[1] = v22[7];
    v22[2] = v22[8];
  }
  while ( v21 < 7 );
  if ( v25 == 1 )
    result = 2;
  else
    result = 0;
  return result;
}

//----- (022637AC) --------------------------------------------------------
int __fastcall Function_22637ac(int a1, int a2)
{
  int v3;
  int v4;

  if ( a2 == 1 )
    return 0;
  v3 = *(uint *)(a1 + 540);
  v4 = *(uint *)(a1 + 548);
  if ( v4 < v3 - 16 )
    return 1;
  if ( v4 <= v3 + 16 )
    return 0;
  return 2;
}

//----- (022637E4) --------------------------------------------------------
int __fastcall Function_22637e4(int a1, int a2, int a3, int a4, uint *a5, uint *a6)
{
  int result;

  result = 0;
  if ( a3 + a2 > 409600 )
  {
    a2 = 409600 - a3;
    result = 1;
  }
  *a5 = a3;
  *a6 = a4;
  *a5 = a3 + a2;
  if ( a4 <= a3 )
    *a6 = a4 - 25 * a2 / 100;
  else
    *a6 = a4;
  return result;
}

//----- (0226384C) --------------------------------------------------------
int __fastcall Function_226384c(uint *a1)
{
  return (int)(((a1[7] - a1[3] + a1[57] - a1[53]) * (ll)(a1[8] + (a1[4] - a1[8]) / 2 - a1[54]) + 2048) >> 12)
       / 2;
}

//----- (022638AC) --------------------------------------------------------
int __fastcall Function_22638ac(uint *a1)
{
  int v1;

  v1 = Function_226384c(a1);
  return ll_sdiv(100LL * v1, 52428800LL);
}

//----- (022638D8) --------------------------------------------------------
uint __fastcall Function_22638d8(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;

  v4 = a1;
  v5 = LoadFromNARC_8(173, 0x6Eu, a3, a4);
  Function_200cdc4(
    *(uint *)(v4 + 140),
    2u,
    *(uint **)(v4 + 36),
    *(uint *)(v4 + 40),
    (int)v5,
    0x3Au,
    0,
    1,
    1,
    10005);
  Function_200cc3c(*(uint **)(v4 + 36), *(uint *)(v4 + 40), (int)v5, 0x37u, 0, 1, 10003);
  Function_200ce24(*(uint **)(v4 + 36), *(uint *)(v4 + 40), (int)v5, 0x39u, 0, 10003);
  Function_200ce54(*(uint **)(v4 + 36), *(uint *)(v4 + 40), (int)v5, 0x38u, 0, 10003);
  return Call_FS_CloseFile(v5);
}

//----- (022639BC) --------------------------------------------------------
int __fastcall Function_22639bc(int a1)
{
  int v1;

  v1 = a1;
  Function_200d070(*(uint *)(a1 + 40), 10003);
  Function_200d090(*(uint *)(v1 + 40), 10003);
  Function_200d0a0(*(uint *)(v1 + 40), 10003);
  return Function_200d080(*(uint *)(v1 + 40), 10005);
}

//----- (02263A00) --------------------------------------------------------
int *__fastcall Function_2263a00(int a1)
{
  int *v1;
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

  v3 = 0;
  v4 = 0;
  v5 = 14;
  v6 = 0;
  v7 = 1;
  v8 = 10003;
  v9 = 10005;
  v10 = 10003;
  v11 = 10003;
  v12 = -1;
  v13 = -1;
  v14 = 1;
  v15 = 0;
  v1 = Function_200ce6c(*(uint **)(a1 + 36), *(uint *)(a1 + 40), (short *)&v3);
  Function_200d3f4((uint *)v1, 0);
  Function_200d324(*v1);
  return v1;
}

//----- (02263A6C) --------------------------------------------------------
uint __fastcall Function_2263a6c(int a1, int *a2)
{
  uint *v2;
  int *v3;
  uint v4;

  v2 = (uint *)a1;
  v3 = a2;
  if ( *(uint *)(a1 + 568) )
    v4 = Function_22637ac(a1, 0) + 1;
  else
    v4 = 0;
  Function_200d500(
    v3,
    (short)v2[135],
    (short)(HIBYTE(dword_2266B04[v2[156]]) + (ushort)(v2[140] >> 12)),
    1441792);
  Function_200d364(v3, v4);
  return Function_200d324(*v3);
}

//----- (02263AE4) --------------------------------------------------------
uint __fastcall Function_2263ae4(int a1)
{
  return Function_200d0f4(a1);
}

//----- (02263AF0) --------------------------------------------------------
int __fastcall Function_2263af0(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  int *v8;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = LoadFromNARC_8(173, 0x6Eu, a3, a4);
  Function_20070e8((int)v8, LOWORD(dword_2266BEC[2 * v6]), v4, 7u, 0, 0, 0, 110);
  Function_200710c((int)v8, HIWORD(dword_2266BEC[2 * v6]), v4, 7u, 0, 0, 0, 110);
  Call_FS_CloseFile(v8);
  MI_CpuFill8((ushort *)v7, 0, 0x30u);
  *(uint *)(v7 + 12) = dword_2266ED4[3 * v5 + v6];
  *(uint *)(v7 + 4) = v6;
  *(uint *)v7 = 1;
  *(uchar *)(v7 + 44) = 1;
  Function_2263ba4(v4, v7, v5);
  return Function_2005748(0x5EBu);
}

//----- (02263B8C) --------------------------------------------------------
int __fastcall Function_2263b8c(uint *a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  Function_2019ebc(a1, 7u);
  *(uint *)v2 = 0;
  result = 1;
  *(uchar *)(v2 + 45) = 1;
  return result;
}

//----- (02263BA4) --------------------------------------------------------
int __fastcall Function_2263ba4(int a1, int *a2, int a3)
{
  int *v3;
  int result;
  int v5;
  int v6;
  uint v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v3 = a2;
  v10 = a1;
  result = *a2;
  if ( *a2 )
  {
    Function_2263c8c(a3, a2[1], a2[2], &v12, &v11);
    if ( v12 == 4096 )
    {
      v5 = 0;
    }
    else if ( v12 < 4096 )
    {
      v5 = 128 - (v12 << 7) / 4096;
    }
    else
    {
      v5 = ((v12 - 4096) << 7) / -4096;
    }
    if ( v11 == 4096 )
    {
      v6 = 0;
    }
    else if ( v11 < 4096 )
    {
      v6 = 128 - (v11 << 7) / 4096;
    }
    else
    {
      v6 = ((v11 - 4096) << 7) / -4096;
    }
    if ( v3[4] )
    {
      v7 = (PRNG() & 7) + 1;
      if ( v3[10] & 1 )
        v7 = -v7;
      v3[10] ^= 1u;
    }
    else
    {
      v7 = 0;
    }
    v8 = FX_Inv(v12);
    v9 = FX_Inv(v11);
    Function_201c6a8(v10, 7, 3u, v8);
    Function_201c6a8(v10, 7, 6u, v9);
    Function_201c63c(v10, 7, 0, v7 - v5);
    result = Function_201c63c(v10, 7, 3u, 39 - v6);
  }
  return result;
}

//----- (02263C8C) --------------------------------------------------------
uint __fastcall Function_2263c8c(int a1, int a2, int a3, uint *a4, uint *a5)
{
  uint *v5;
  uint result;

  v5 = a4;
  result = s32_div_f(dword_2266BF0[2 * a2] * a3, dword_2266ED4[3 * a1 + a2]);
  *v5 = result + 768;
  *a5 = result + 768;
  if ( (int)(result + 768) > 4096 )
  {
    result = *v5 + (ull)((ll_mul((int)(result - 3328), 4506LL) + 2048) >> 12);
    *v5 = result;
  }
  return result;
}

//----- (02263CF4) --------------------------------------------------------
int __fastcall Function_2263cf4(int a1)
{
  int result;

  if ( a1 < 10 )
    result = a1 >= 5;
  else
    result = 2;
  return result;
}

//----- (02263D08) --------------------------------------------------------
int __fastcall Function_2263d08(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint v7;
  int v8;
  int v9;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = *(uint *)(a2 + 16) + a3;
  v8 = a4;
  *(uint *)(a2 + 16) = v7;
  *(uint *)(a2 + 20) = s32_div_f(v7, 6);
  v9 = Function_22622c4(v5, v8);
  *(uint *)(v4 + 24 + 4 * v9) += v6;
  if ( v8 == Function_203608c() )
  {
    *(uint *)(v5 + 14408) += v6;
    Function_2265f98(v5 + 5544, *(uint *)(v5 + 14408));
  }
  return *(uint *)(v4 + 16);
}

//----- (02263D5C) --------------------------------------------------------
int __fastcall Function_2263d5c(uint *a1)
{
  int v1;
  int v3;

  v1 = a1[4];
  if ( !v1 )
    return 0;
  v3 = a1[5];
  if ( v1 < v3 )
    v3 = a1[4];
  a1[4] -= v3;
  a1[2] += v3;
  return 1;
}

//----- (02263D80) --------------------------------------------------------
int __fastcall Function_2263d80(int a1, int a2, int *a3)
{
  int v3;
  int v4;
  int result;
  int *v6;

  v3 = a1;
  v4 = a2;
  result = *(uint *)(a1 + 12236);
  v6 = a3;
  if ( result )
  {
    Function_2263d5c(a3);
    result = Function_2263ba4(v4, v6, *(uchar *)(*(uint *)v3 + 48));
  }
  return result;
}

//----- (02263DAC) --------------------------------------------------------
uint __fastcall Function_2263dac(int a1)
{
  return s32_div_f(100 * *(uint *)(a1 + 5168), *(uint *)(a1 + 5172));
}

//----- (02263DC4) --------------------------------------------------------
int __fastcall Function_2263dc4(int a1, uchar *a2)
{
  int v2;
  uchar *v3;
  int v4;
  int v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  v5 = a1;
  do
  {
    if ( !*(uint *)(v5 + 12252) )
    {
      v6 = Function_2263e1c(a1, a2, a1 + 12252 + 24 * v4);
      Function_2265b58(v2, v2 + 5472, v3[1], *v3, v6);
      return 1;
    }
    ++v4;
    v5 += 24;
  }
  while ( v4 < 40 );
  ErrorHandler();
  return 0;
}

//----- (02263E1C) --------------------------------------------------------
uint __fastcall Function_2263e1c(int a1, uchar *a2, uint *a3, int a4)
{
  uint *v4;
  int v5;
  uchar *v6;
  char *v7;
  int v8;
  int v10;

  v10 = a4;
  v4 = a3;
  v5 = a1;
  v6 = a2;
  if ( *a3 )
    ErrorHandler();
  MI_CpuFill8(v4, 0, 0x18u);
  v7 = (char *)&dword_2266F10[10 * *(uchar *)(*(uint *)v5 + 48)] + 10 * Function_22622c4(v5, *v6);
  *((ushort *)v4 + 2) = *v6;
  *((ushort *)v4 + 3) = *((ushort *)v6 + 1);
  v4[2] = *((uint *)v6 + 2);
  v4[5] = v7;
  *((uchar *)v4 + 14) = v6[1];
  v4[4] = Function_226417c(v5, v7);
  if ( *v6 == Function_203608c() )
  {
    Function_2261e38(v5, *((uint *)v6 + 1));
    *((ushort *)v4 + 6) = 25;
    Function_200d3f4((uint *)v4[4], 0);
  }
  *v4 = 1;
  v8 = 0;
  Function_200d5a0((int *)v4[4], (ushort *)&v10 + 1, &v10, 1441792);
  switch ( v7[7] )
  {
    case 0:
      v8 = 28 - (short)v10;
      break;
    case 1:
      v8 = SHIWORD(v10) - 204;
      break;
    case 2:
      v8 = (short)v10 - 164;
      break;
    case 3:
      v8 = 52 - SHIWORD(v10);
      break;
    default:
      return s32_div_f(v8 << 12, 20480);
  }
  return s32_div_f(v8 << 12, 20480);
}

//----- (02263EF8) --------------------------------------------------------
uint __fastcall Function_2263ef8(int a1)
{
  int v1;
  int v2;
  int v3;
  uint result;
  int v5;

  v1 = a1;
  v2 = 0;
  v3 = a1 + 12252;
  do
  {
    result = *(uint *)v3;
    if ( *(uint *)v3 == 1 )
    {
      if ( *(short *)(v3 + 12) <= 0 )
      {
        result = Function_2263f80(v1, v3);
        if ( result == 1 )
        {
          if ( *(uint *)(v1 + 12236) == 1 && !*(uint *)(v1 + 12220) )
          {
            v5 = *(uchar *)(v3 + 14);
            Function_2263d08(v1, v1 + 5160, *(uint *)(v3 + 8), *(short *)(v3 + 4));
          }
          result = Function_200d0f4(*(uint *)(v3 + 16));
          *(uint *)v3 = 0;
        }
      }
      else
      {
        result = (short)--*(ushort *)(v3 + 12);
        if ( !*(ushort *)(v3 + 12) )
          result = Function_200d3f4(*(uint **)(v3 + 16), 1);
      }
    }
    ++v2;
    v3 += 24;
  }
  while ( v2 < 40 );
  return result;
}

//----- (02263F80) --------------------------------------------------------
BOOL __fastcall Function_2263f80(int a1, int a2, int a3, int a4)
{
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
  int v18;
  short v19[2];
  short v20[2];
  short v21[2];
  short v22[2];
  int v23;
  int v24;

  v24 = a4;
  v6 = a2;
  v18 = a1;
  v7 = 0;
  Function_200d5a0(*(int **)(a2 + 16), v20, v19, 1441792);
  switch ( *(uchar *)(*(uint *)(v6 + 20) + 7) )
  {
    case 0:
      v5 = 28 - v19[0];
      Function_200d5e8(*(uint **)(v6 + 16), 0, 20480, v8);
      Function_200d5a0(*(int **)(v6 + 16), v22, v21, 1441792);
      v4 = 28 - v21[0];
      if ( v21[0] > 74 )
        v7 = 1;
      break;
    case 1:
      v5 = v20[0] - 204;
      Function_200d5e8(*(uint **)(v6 + 16), -20480, 0, v8);
      Function_200d5a0(*(int **)(v6 + 16), v22, v21, 1441792);
      v4 = v22[0] - 204;
      if ( v22[0] < 152 )
        v7 = 1;
      break;
    case 2:
      v5 = v19[0] - 164;
      Function_200d5e8(*(uint **)(v6 + 16), 0, -20480, v8);
      Function_200d5a0(*(int **)(v6 + 16), v22, v21, 1441792);
      v4 = v21[0] - 164;
      if ( v21[0] < 114 )
        v7 = 1;
      break;
    case 3:
      v5 = 52 - v20[0];
      Function_200d5e8(*(uint **)(v6 + 16), 20480, 0, v8);
      Function_200d5a0(*(int **)(v6 + 16), v22, v21, 1441792);
      v4 = 52 - v22[0];
      if ( v22[0] > 104 )
        v7 = 1;
      break;
    default:
      break;
  }
  if ( v4 < 0 )
  {
    if ( v4 > -14 )
    {
      v12 = s32_div_f(dword_2266BA4[*(uchar *)(v6 + 14)] * -v4, 14);
      if ( v12 < 1024 )
        v12 = 1024;
      v13 = fflt(v12);
      v14 = f_div(v13, 0x45800000u);
      Function_200d6e8(*(int **)(v6 + 16), v14, v14);
    }
  }
  else if ( v4 < 14 )
  {
    v9 = s32_div_f(v4 << 12, 14);
    if ( v9 < 1024 )
      v9 = 1024;
    v10 = fflt(v9);
    v11 = f_div(v10, 0x45800000u);
    Function_200d6e8(*(int **)(v6 + 16), v11, v11);
  }
  if ( *(short *)(v6 + 4) == Function_203608c() && v5 >= 0 && v4 <= 0 )
  {
    *(uchar *)(v6 + 14) = Function_22653f4(v18, &v23);
    v15 = *(uchar *)(v6 + 14);
    switch ( v15 )
    {
      case 1:
        *(uint *)(v6 + 8) *= 2;
        break;
      case 2:
        *(uint *)(v6 + 8) /= 2;
        break;
      case 3:
        *(uint *)(v6 + 8) *= 3;
        break;
    }
    Function_2264eb8(v18, *(uchar *)(v6 + 14));
    if ( *(uchar *)(v6 + 14) )
      Function_2265428(v23, 3);
    v16 = Function_2264e84(v18);
    if ( v16 )
      Function_22666e8(v18, v16);
  }
  return v7 == 1;
}

//----- (0226417C) --------------------------------------------------------
int *__fastcall Function_226417c(int a1, short *a2, int a3, int a4)
{
  int *v4;
  int v5;
  short *v6;
  short *v7;
  int v8;
  int v9;
  int v10;
  int *v11;
  short v13;
  short v14;
  int v15;
  int v16;

  v16 = a4;
  v4 = dword_2266CCC;
  v5 = a1;
  v6 = a2;
  v7 = &v13;
  v8 = 6;
  do
  {
    v9 = *v4;
    v10 = v4[1];
    v4 += 2;
    *(uint *)v7 = v9;
    *((uint *)v7 + 1) = v10;
    v7 += 4;
    --v8;
  }
  while ( v8 );
  *(uint *)v7 = *v4;
  v13 = *v6;
  v14 = v6[1];
  v15 = *((uchar *)v6 + 6);
  v11 = Function_200ce6c(*(uint **)(v5 + 36), *(uint *)(v5 + 40), &v13);
  Function_200d500(v11, *v6, v6[1], 1441792);
  Function_200d364(v11, (ushort)v6[2]);
  Function_200d6a4((uint *)v11, 2);
  Function_200d324(*v11);
  return v11;
}

//----- (022641E4) --------------------------------------------------------
int __fastcall Function_22641e4(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = 0;
  v2 = a1;
  do
  {
    result = *(uint *)(v2 + 12252);
    if ( result == 1 )
    {
      Function_200d0f4(*(uint *)(v2 + 12268));
      result = 12252;
      *(uint *)(v2 + 12252) = 0;
    }
    ++v1;
    v2 += 24;
  }
  while ( v1 < 40 );
  return result;
}

//----- (02264214) --------------------------------------------------------
int *__fastcall Function_2264214(int a1, int a2, uint *a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  char *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int *v13;
  int *v14;
  uint v15;
  uint v16;
  uint v17;
  int v18;
  uint v19;
  int v20;
  uint v21;
  short v22;
  int v23;
  int v24;
  int *v25;
  int *v26;
  uint v27;
  int v28;
  uint v29;
  uint v30;
  uint v31;
  int v32;
  uint v33;
  int v34;
  uint v35;
  short v36;
  int v37;
  int *result;
  int *v39;
  uint v40;
  uint v41;
  uint v42;
  int v43;
  uint v44;
  int v45;
  uint v46;
  short v47;
  int v48;
  uint *v49;
  int v50;
  int i;
  int v52;
  int j;
  uint v54;
  int v55;
  int v56;
  int v57;
  char v58[16];
  char v59;
  int v60;
  int v61;
  int v62;

  v62 = a4;
  v4 = dword_2266D00;
  v49 = a3;
  v5 = a1;
  v48 = a2;
  v6 = 0;
  v7 = &v59;
  v8 = 6;
  do
  {
    v9 = *v4;
    v10 = v4[1];
    v4 += 2;
    *(uint *)v7 = v9;
    *((uint *)v7 + 1) = v10;
    v7 += 8;
    --v8;
  }
  while ( v8 );
  *(uint *)v7 = *v4;
  v55 = v49[2];
  v56 = v49[4];
  for ( i = 0; i < *(uchar *)(*(uint *)v5 + 48); ++i )
  {
    v11 = Function_22622c4(v5, *(uchar *)(*(uint *)v5 + i + 44));
    *(uint *)&v58[4 * i] = s32_div_f(36 * v49[v11 + 6], v55 + v56);
    v54 = *((ushort *)&dword_2266C7C[2 * *(uchar *)(*(uint *)v5 + 48)] + v11);
    v50 = 0;
    v57 = *(uint *)&v58[4 * i];
    while ( v50 < v57 )
    {
      v12 = v48 + 4 + 24 * v6;
      v13 = Function_200ce6c(*(uint **)(v5 + 36), *(uint *)(v5 + 40), (short *)&v59);
      v14 = v13;
      if ( !v13 )
        break;
      Function_200d500(v13, 128, 96, 1441792);
      Function_200d364(v14, v54);
      Function_200d324(*v14);
      v15 = PRNG();
      *(uint *)(v12 + 4) = (v15 >> 31) + __ROR4__((v15 << 19) - (v15 >> 31), 19) + 0x2000;
      v16 = PRNG();
      *(uint *)(v12 + 8) = (v16 >> 31) + __ROR4__((v16 << 18) - (v16 >> 31), 18) + 0x2000;
      v17 = PRNG();
      s32_div_f(v17, 360);
      *(uint *)(v12 + 12) = v18 << 12;
      v19 = PRNG();
      s32_div_f(v19, 81920);
      *(uint *)(v12 + 16) = v20 + 40960;
      v21 = PRNG();
      s32_div_f(v21, 15);
      *(ushort *)(v12 + 20) = v22 + 20;
      v23 = 24 * v6++;
      *(uint *)(v48 + v23 + 4) = v14;
      ++v50;
    }
  }
  v60 = 14;
  v52 = 0;
  v61 = 0;
  while ( v52 < 8 )
  {
    v24 = v48 + 868 + 24 * v52;
    v25 = Function_200ce6c(*(uint **)(v5 + 36), *(uint *)(v5 + 40), (short *)&v59);
    v26 = v25;
    if ( !v25 )
      break;
    Function_200d500(v25, 128, 96, 1441792);
    v27 = PRNG();
    s32_div_f(v27, 3);
    Function_200d364(v26, v28 + 28);
    Function_200d324(*v26);
    v29 = PRNG();
    *(uint *)(v24 + 4) = (v29 >> 31) + __ROR4__((v29 << 19) - (v29 >> 31), 19) + 0x2000;
    v30 = PRNG();
    *(uint *)(v24 + 8) = (v30 >> 31) + __ROR4__((v30 << 18) - (v30 >> 31), 18) + 0x2000;
    v31 = PRNG();
    s32_div_f(v31, 360);
    *(uint *)(v24 + 12) = v32 << 12;
    v33 = PRNG();
    s32_div_f(v33, 81920);
    *(uint *)(v24 + 16) = v34 + 0x10000;
    v35 = PRNG();
    s32_div_f(v35, 15);
    *(ushort *)(v24 + 20) = v36 + 20;
    *(uint *)(v48 + 24 * v52++ + 868) = v26;
  }
  v60 = 13;
  v61 = *((ushort *)dword_2266B6C + v49[1]);
  for ( j = 0; ; ++j )
  {
    result = (int *)j;
    if ( j >= 3 )
      break;
    v37 = v48 + 1060 + 24 * j;
    result = Function_200ce6c(*(uint **)(v5 + 36), *(uint *)(v5 + 40), (short *)&v59);
    v39 = result;
    if ( !result )
      break;
    Function_200d500(result, 128, 96, 1441792);
    Function_200d364(v39, 0xBu);
    Function_200d324(*v39);
    v40 = PRNG();
    *(uint *)(v37 + 4) = (v40 >> 31) + __ROR4__((v40 << 19) - (v40 >> 31), 19) + 0x2000;
    v41 = PRNG();
    *(uint *)(v37 + 8) = (v41 >> 31) + __ROR4__((v41 << 18) - (v41 >> 31), 18) + 0x2000;
    v42 = PRNG();
    s32_div_f(v42, 360);
    *(uint *)(v37 + 12) = v43 << 12;
    v44 = PRNG();
    s32_div_f(v44, 81920);
    *(uint *)(v37 + 16) = v45 + 0x10000;
    v46 = PRNG();
    s32_div_f(v46, 15);
    *(ushort *)(v37 + 20) = v47 + 20;
    *(uint *)(v48 + 24 * j + 1060) = v39;
  }
  return result;
}

//----- (02264508) --------------------------------------------------------
int __fastcall Function_2264508(int a1)
{
  int v1;
  int v2;
  int *v3;
  int v4;
  int *v5;
  int v6;
  int *v7;
  int result;

  v1 = a1;
  v2 = 0;
  v3 = (int *)(a1 + 13216);
  do
  {
    if ( *v3 )
      Function_200d0f4(*v3);
    ++v2;
    v3 += 6;
  }
  while ( v2 < 36 );
  v4 = 0;
  v5 = (int *)(v1 + 14080);
  do
  {
    if ( *v5 )
      Function_200d0f4(*v5);
    ++v4;
    v5 += 6;
  }
  while ( v4 < 8 );
  v6 = 0;
  v7 = (int *)(v1 + 14272);
  do
  {
    result = *v7;
    if ( *v7 )
      result = Function_200d0f4(result);
    ++v6;
    v7 += 6;
  }
  while ( v6 < 3 );
  return result;
}

//----- (02264560) --------------------------------------------------------
int __fastcall Function_2264560(int a1)
{
  int v1;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  long long v9;
  int v10;
  int v11;
  long long v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  long long v19;
  int v20;
  int v21;
  long long v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  long long v29;
  int v30;
  int v31;
  long long v32;
  int v33;
  int v34;
  int v35;
  uint *v36;

  v1 = 0;
  v36 = (uint *)(a1 + 13212);
  if ( !*(uint *)(a1 + 13212) )
    return 0;
  v35 = 0;
  v3 = a1 + 13216;
  do
  {
    if ( *(uint *)v3 )
    {
      if ( *(ushort *)(v3 + 20) )
      {
        *(uint *)(v3 + 12) += *(uint *)(v3 + 16);
        v4 = *(uint *)(v3 + 4) + *(uint *)(v3 + 8);
        *(uint *)(v3 + 4) = v4;
        if ( v4 >= 655360 )
          *(uint *)(v3 + 4) = 655360;
        v5 = *(uint *)(v3 + 4);
        v6 = Function_201d2b8(*(uint *)(v3 + 12));
        v7 = *(uint *)(v3 + 4);
        v8 = Function_201d2c4(*(uint *)(v3 + 12));
        v9 = ll_mul(v6, v5);
        v10 = v9;
        LODWORD(v9) = v8;
        v11 = HIDWORD(v9);
        HIDWORD(v9) = v8 >> 31;
        v12 = ll_mul(v9, v7);
        Function_200d500(
          *(int **)v3,
          (short)((int)(((uint)(v10 + 2048) >> 12) | ((__CFADD__(v10, 2048) + v11) << 20))
                         / 4096
                         + 128),
          (short)((int)-(((uint)(v12 + 2048) >> 12) | ((__CFADD__((uint)v12, 2048)
                                                                              + HIDWORD(v12)) << 20))
                         / 4096
                         + 96),
          1441792);
        ++v1;
        --*(ushort *)(v3 + 20);
      }
      else
      {
        Function_200d0f4(*(uint *)v3);
        *(uint *)v3 = 0;
      }
    }
    v3 += 24;
    ++v35;
  }
  while ( v35 < 36 );
  v33 = 0;
  v13 = (int)(v36 + 217);
  do
  {
    if ( *(uint *)v13 )
    {
      if ( *(ushort *)(v13 + 20) )
      {
        *(uint *)(v13 + 12) += *(uint *)(v13 + 16);
        v14 = *(uint *)(v13 + 4) + *(uint *)(v13 + 8);
        *(uint *)(v13 + 4) = v14;
        if ( v14 >= 655360 )
          *(uint *)(v13 + 4) = 655360;
        v15 = *(uint *)(v13 + 4);
        v16 = Function_201d2b8(*(uint *)(v13 + 12));
        v17 = *(uint *)(v13 + 4);
        v18 = Function_201d2c4(*(uint *)(v13 + 12));
        v19 = ll_mul(v16, v15);
        v20 = v19;
        LODWORD(v19) = v18;
        v21 = HIDWORD(v19);
        HIDWORD(v19) = v18 >> 31;
        v22 = ll_mul(v19, v17);
        Function_200d500(
          *(int **)v13,
          (short)((int)(((uint)(v20 + 2048) >> 12) | ((__CFADD__(v20, 2048) + v21) << 20))
                         / 4096
                         + 128),
          (short)((int)-(((uint)(v22 + 2048) >> 12) | ((__CFADD__((uint)v22, 2048)
                                                                              + HIDWORD(v22)) << 20))
                         / 4096
                         + 96),
          1441792);
        ++v1;
        --*(ushort *)(v13 + 20);
      }
      else
      {
        Function_200d0f4(*(uint *)v13);
        *(uint *)v13 = 0;
      }
    }
    v13 += 24;
    ++v33;
  }
  while ( v33 < 8 );
  v34 = 0;
  v23 = (int)(v36 + 265);
  do
  {
    if ( *(uint *)v23 )
    {
      if ( *(ushort *)(v23 + 20) )
      {
        *(uint *)(v23 + 12) += *(uint *)(v23 + 16);
        v24 = *(uint *)(v23 + 4) + *(uint *)(v23 + 8);
        *(uint *)(v23 + 4) = v24;
        if ( v24 >= 655360 )
          *(uint *)(v23 + 4) = 655360;
        v25 = *(uint *)(v23 + 4);
        v26 = Function_201d2b8(*(uint *)(v23 + 12));
        v27 = *(uint *)(v23 + 4);
        v28 = Function_201d2c4(*(uint *)(v23 + 12));
        v29 = ll_mul(v26, v25);
        v30 = v29;
        LODWORD(v29) = v28;
        v31 = HIDWORD(v29);
        HIDWORD(v29) = v28 >> 31;
        v32 = ll_mul(v29, v27);
        Function_200d500(
          *(int **)v23,
          (short)((int)(((uint)(v30 + 2048) >> 12) | ((__CFADD__(v30, 2048) + v31) << 20))
                         / 4096
                         + 128),
          (short)((int)-(((uint)(v32 + 2048) >> 12) | ((__CFADD__((uint)v32, 2048)
                                                                              + HIDWORD(v32)) << 20))
                         / 4096
                         + 96),
          1441792);
        ++v1;
        --*(ushort *)(v23 + 20);
      }
      else
      {
        Function_200d0f4(*(uint *)v23);
        *(uint *)v23 = 0;
      }
    }
    v23 += 24;
    ++v34;
  }
  while ( v34 < 3 );
  if ( !v1 )
    *v36 = 0;
  return 1;
}

//----- (02264808) --------------------------------------------------------
int __fastcall Function_2264808(int a1)
{
  int v1;
  ushort *v2;
  int result;
  int v4;
  int v5;

  v1 = a1;
  v2 = (ushort *)(a1 + 13212);
  if ( *(uint *)(a1 + 13212) == 1 )
    return 0;
  MI_CpuFill8(v2, 0, 0x470u);
  Function_2264214(v1, v1 + 13212, (uint *)(v1 + 5160), v4);
  Function_2263b8c(*(uint **)(v1 + 44), v1 + 5160);
  Function_2264a84(v1);
  v5 = 0;
  *(uint *)(v1 + 12236) = 0;
  *(uint *)(v1 + 5168) = 0;
  *(uint *)(v1 + 5176) = 0;
  do
  {
    ++v5;
    *(uint *)(v1 + 5184) = 0;
    v1 += 4;
  }
  while ( v5 < 4 );
  Function_2005748(0x57Cu);
  result = 1;
  *(uint *)v2 = 1;
  return result;
}

//----- (02264884) --------------------------------------------------------
int *__fastcall Function_2264884(int a1, uint a2, short a3)
{
  int *v3;
  short v4;
  int v5;
  uint v6;
  char *v7;
  int v8;
  int v9;
  int v10;
  int *v11;
  char v13;

  v3 = dword_2266D34;
  v4 = a3;
  v5 = a1;
  v6 = a2;
  v7 = &v13;
  v8 = 6;
  do
  {
    v9 = *v3;
    v10 = v3[1];
    v3 += 2;
    *(uint *)v7 = v9;
    *((uint *)v7 + 1) = v10;
    v7 += 8;
    --v8;
  }
  while ( v8 );
  *(uint *)v7 = *v3;
  v11 = Function_200ce6c(*(uint **)(v5 + 36), *(uint *)(v5 + 40), (short *)&v13);
  Function_200d500(v11, (short)(72 - 16 * v4), 32, 1441792);
  Function_200d364(v11, v6);
  Function_200d324(*v11);
  Function_200d390((uint *)v11, 1);
  return v11;
}

//----- (022648E0) --------------------------------------------------------
int __fastcall Function_22648e0(int a1)
{
  int v1;
  int v2;
  int **v3;
  int v4;
  int result;

  v1 = a1;
  v2 = 0;
  v3 = (int **)(a1 + 14348);
  v4 = 0;
  do
  {
    Function_2264958(v1, v3, v2, v2);
    Function_200d34c(*v3, v4);
    result = 0x4000;
    ++v2;
    v3 += 3;
    v4 += 0x4000;
  }
  while ( v2 < 5 );
  return result;
}

//----- (02264914) --------------------------------------------------------
uint __fastcall Function_2264914(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = a1;
  v2 = 0;
  do
  {
    result = Function_200d0f4(*(uint *)(v1 + 14348));
    ++v2;
    v1 += 12;
  }
  while ( v2 < 5 );
  return result;
}

//----- (02264930) --------------------------------------------------------
int __fastcall Function_2264930(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = 0;
  v3 = a1 + 14348;
  do
  {
    Function_226498c(v3);
    Function_22649d8(v1, v3);
    ++v2;
    v3 += 12;
  }
  while ( v2 < 5 );
  return 1;
}

//----- (02264958) --------------------------------------------------------
int __fastcall Function_2264958(int a1, ushort *a2, short a3, int a4)
{
  ushort *v4;
  int v5;
  short v6;
  int v7;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  MI_CpuFill8(a2, 0, 0xCu);
  *((uchar *)v4 + 4) = Function_2264a70(v7);
  *((uchar *)v4 + 5) = 1;
  *(uint *)v4 = Function_2264884(v5, *((uchar *)v4 + 4), v6);
  *((uchar *)v4 + 6) = v6;
  v4[4] = v7;
  return 1;
}

//----- (0226498C) --------------------------------------------------------
int __fastcall Function_226498c(int a1, int a2, int a3, int a4)
{
  int **v4;
  int v5;
  int result;
  short v7;
  int v8;

  v8 = a4;
  v4 = (int **)a1;
  v5 = (short)(72 - 16 * *(uchar *)(a1 + 6));
  Function_200d5a0(*(int **)a1, (ushort *)&v8 + 1, &v8, 1441792);
  result = 2;
  v7 = HIWORD(v8);
  if ( v5 > SHIWORD(v8) )
  {
    HIWORD(v8) += 2;
    if ( (short)(v7 + 2) > v5 )
      HIWORD(v8) = v5;
    result = Function_200d500(*v4, SHIWORD(v8), (short)v8, 1441792);
  }
  return result;
}

//----- (022649D8) --------------------------------------------------------
int __fastcall Function_22649d8(int result, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v2 = a2;
  v3 = result;
  if ( !*(uchar *)(a2 + 6) )
  {
    v4 = *(uchar *)(a2 + 5);
    if ( v4 == 1 )
    {
      result = Function_2263dac(result);
      if ( *(uchar *)(v2 + 5) == 1 && result > 75 )
      {
        *(uchar *)(v2 + 5) = 2;
        Function_200d364(*(int **)v2, *(uchar *)(v2 + 4) + 3);
        result = Function_2005748(0x57Eu);
      }
    }
    else if ( v4 == 3 )
    {
      result = Function_200d3b8(*(int **)v2);
      if ( !result )
      {
        *(ushort *)(v2 + 8) += 5;
        *(uchar *)(v2 + 4) = Function_2264a70(*(short *)(v2 + 8));
        *(uchar *)(v2 + 5) = 1;
        Function_200d364(*(int **)v2, *(uchar *)(v2 + 4));
        Function_200d500(*(int **)v2, -8, 32, 1441792);
        v5 = 0;
        v6 = v3 + 14348;
        do
        {
          result = *(uchar *)(v6 + 6);
          if ( *(uchar *)(v6 + 6) )
            *(uchar *)(v6 + 6) = --result;
          else
            *(uchar *)(v6 + 6) = 4;
          ++v5;
          v6 += 12;
        }
        while ( v5 < 5 );
      }
    }
  }
  return result;
}

//----- (02264A70) --------------------------------------------------------
int __fastcall Function_2264a70(int a1)
{
  int result;

  if ( a1 < 10 )
    result = a1 >= 5;
  else
    result = 2;
  return result;
}

//----- (02264A84) --------------------------------------------------------
int __fastcall Function_2264a84(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = 0;
  v2 = a1 + 14348;
  while ( 1 )
  {
    result = *(uchar *)(v2 + 6);
    if ( !*(uchar *)(v2 + 6) )
      break;
    ++v1;
    v2 += 12;
    if ( v1 >= 5 )
      return result;
  }
  *(uchar *)(v2 + 5) = 3;
  return Function_200d364(*(int **)v2, 6u);
}

//----- (02264AB0) --------------------------------------------------------
int __fastcall Function_2264ab0(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = *(uchar *)(*(uint *)a1 + 48);
  if ( result == 3 )
  {
    Function_2019e2c(*(uint *)(v1 + 44), 4, 0, 13, 0xCu, 4u, 3u);
    result = Function_2019e2c(*(uint *)(v1 + 44), 4, 0x14u, 13, 0xCu, 4u, 0);
  }
  return result;
}

//----- (02264AF0) --------------------------------------------------------
uchar *__fastcall Function_2264af0(int *a1, int a2, int a3, int a4)
{
  int *v4;
  char *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  uchar *result;
  int v16;
  int i;
  int v18;
  char *v19;
  int v20;
  int v21;
  ushort *v22;
  ushort *v23;
  short v24;
  char *v25;
  ushort *v26;
  int v27;
  int v28;
  char v29[24];
  int v30;

  v30 = a4;
  v4 = a1;
  v28 = 0;
  if ( (int)*(uchar *)(*a1 + 48) > 0 )
  {
    v26 = (ushort *)(dword_2266B6C + 6);
    v25 = v29;
    do
    {
      v5 = v25;
      v6 = *v26;
      v7 = 0;
      do
      {
        *(ushort *)v5 = Function_2003910(v4[35], 1, 1, (v6 + v7++) & 0xFFFF);
        v5 += 2;
      }
      while ( v7 < 3 );
      ++v26;
      v25 += 6;
      ++v28;
    }
    while ( v28 < *(uchar *)(*v4 + 48) );
  }
  v8 = Function_203608c();
  v9 = *v4;
  v10 = 0;
  v11 = *(uchar *)(*v4 + 48);
  if ( v11 > 0 )
  {
    do
    {
      if ( v8 == *(uchar *)(v9 + 44) )
        break;
      ++v10;
      ++v9;
    }
    while ( v10 < v11 );
  }
  v27 = Function_2003164(v4[35], 1);
  v12 = Function_200316c(v4[35], 1);
  v13 = *v4;
  v14 = v12;
  result = (uchar *)(*v4 + 48);
  v16 = *result;
  for ( i = 0; i < v16; v16 = *result )
  {
    v18 = Function_22622c4((int)v4, *(uchar *)(v13 + i + 44));
    v19 = &v29[6 * i];
    v20 = 2 * *((ushort *)&dword_2266CA4[2 * v16] + v18);
    v21 = 0;
    v22 = (ushort *)(v27 + v20);
    v23 = (ushort *)(v14 + v20);
    do
    {
      ++v21;
      *v22 = *(ushort *)v19;
      v24 = *(ushort *)v19;
      v19 += 2;
      ++v22;
      *v23 = v24;
      ++v23;
    }
    while ( v21 < 3 );
    v13 = *v4;
    ++i;
    result = (uchar *)(*v4 + 48);
  }
  return result;
}

//----- (02264BF8) --------------------------------------------------------
uchar *__fastcall Function_2264bf8(int *a1)
{
  int *v1;
  char *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uchar *result;
  int v12;
  int i;
  int v14;
  char *v15;
  int v16;
  int v17;
  ushort *v18;
  ushort *v19;
  short v20;
  char *v21;
  ushort *v22;
  int v23;
  int v24;
  int v25;
  int v26;
  char v27;

  v1 = a1;
  v23 = Function_200d05c(a1[10], 10006, 2);
  v26 = 0;
  if ( (int)*(uchar *)(*v1 + 48) > 0 )
  {
    v22 = (ushort *)(aQst + 6);
    v21 = &v27;
    do
    {
      v2 = v21;
      v3 = 0;
      v4 = *v22 + 16 * v23;
      do
      {
        *(ushort *)v2 = Function_2003910(v1[35], 3, 1, (ushort)v4);
        ++v3;
        LOWORD(v4) = v4 + 1;
        v2 += 2;
      }
      while ( v3 < 16 );
      ++v22;
      v21 += 32;
      ++v26;
    }
    while ( v26 < *(uchar *)(*v1 + 48) );
  }
  v5 = Function_203608c();
  v6 = *v1;
  v7 = 0;
  v8 = *(uchar *)(*v1 + 48);
  if ( v8 > 0 )
  {
    do
    {
      if ( v5 == *(uchar *)(v6 + 44) )
        break;
      ++v7;
      ++v6;
    }
    while ( v7 < v8 );
  }
  v25 = Function_2003164(v1[35], 3);
  v9 = Function_200316c(v1[35], 3);
  v10 = *v1;
  v24 = v9;
  result = (uchar *)(*v1 + 48);
  v12 = *result;
  for ( i = 0; i < v12; v12 = *result )
  {
    v14 = Function_22622c4((int)v1, *(uchar *)(v10 + i + 44));
    v15 = &v27 + 32 * i;
    v16 = 2 * (16 * v23 + *((ushort *)&dword_2266C04[2 * v12] + v14));
    v17 = 0;
    v18 = (ushort *)(v25 + v16);
    v19 = (ushort *)(v24 + v16);
    do
    {
      ++v17;
      *v18 = *(ushort *)v15;
      v20 = *(ushort *)v15;
      v15 += 2;
      ++v18;
      *v19 = v20;
      ++v19;
    }
    while ( v17 < 16 );
    v10 = *v1;
    ++i;
    result = (uchar *)(*v1 + 48);
  }
  return result;
}

//----- (02264D1C) --------------------------------------------------------
uchar *__fastcall Function_2264d1c(int *a1)
{
  int *v1;
  short *v2;
  char *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uchar *result;
  int v11;
  int i;
  int v13;
  short v14;
  int v15;
  int v16;
  int v17;
  int v18;
  ushort v19[1];

  v1 = a1;
  v15 = Function_200d05c(a1[10], 10006, 2);
  v18 = 0;
  if ( (int)*(uchar *)(*v1 + 48) > 0 )
  {
    v2 = &word_2266B82;
    v3 = (char *)v19;
    do
    {
      *(ushort *)v3 = Function_2003910(v1[35], 3, 1, ((ushort)*v2 + 16 * v15) & 0xFFFF);
      ++v2;
      ++v18;
      v3 += 2;
    }
    while ( v18 < *(uchar *)(*v1 + 48) );
  }
  v4 = Function_203608c();
  v5 = *v1;
  v6 = 0;
  v7 = *(uchar *)(*v1 + 48);
  if ( v7 > 0 )
  {
    do
    {
      if ( v4 == *(uchar *)(v5 + 44) )
        break;
      ++v6;
      ++v5;
    }
    while ( v6 < v7 );
  }
  v17 = Function_2003164(v1[35], 3);
  v8 = Function_200316c(v1[35], 3);
  v9 = *v1;
  v16 = v8;
  result = (uchar *)(*v1 + 48);
  v11 = *result;
  for ( i = 0; i < v11; v11 = *result )
  {
    v13 = 2
        * (16 * v15
         + (ushort)aRqstrqstrq[4 * v11 + Function_22622c4((int)v1, *(uchar *)(v9 + i + 44))]);
    *(ushort *)(v17 + v13) = v19[i];
    v14 = v19[i++];
    *(ushort *)(v16 + v13) = v14;
    v9 = *v1;
    result = (uchar *)(*v1 + 48);
  }
  return result;
}

//----- (02264E14) --------------------------------------------------------
int __fastcall Function_2264e14(int a1, short a2, int a3, ushort *a4)
{
  ushort *v4;
  short v5;
  int v6;
  int result;

  v4 = a4;
  v5 = a2;
  v6 = a3;
  MI_CpuFill8(a4, 0, 0x10u);
  *(uchar *)v4 = Function_203608c();
  v4[1] = v5;
  *((uint *)v4 + 1) = v6;
  *((uint *)v4 + 2) = v6;
  result = 0;
  *((uchar *)v4 + 1) = 0;
  *((uchar *)v4 + 12) = 0;
  return result;
}

//----- (02264E3C) --------------------------------------------------------
int __fastcall Function_2264e3c(int a1, int *a2)
{
  int v2;
  int *v3;
  uint v4;
  uint *v6;
  int v7;
  uint *v8;
  int v9;
  int v10;

  v2 = a1;
  v3 = a2;
  v4 = *(uint *)(a1 + 12208);
  if ( (int)(v4 - *(uint *)(a1 + 12204)) >= 8 )
    return 0;
  v6 = (uint *)(a1 + 16 * ((v4 >> 31) + __ROR4__((v4 << 29) - (v4 >> 31), 29)) + 12076);
  v7 = *v3;
  v9 = v3[1];
  v8 = v3 + 2;
  *v6 = v7;
  v6[1] = v9;
  v6 += 2;
  v10 = v8[1];
  *v6 = *v8;
  v6[1] = v10;
  ++*(uint *)(v2 + 12208);
  return 1;
}

//----- (02264E84) --------------------------------------------------------
int __fastcall Function_2264e84(int a1)
{
  uint v1;

  v1 = *(uint *)(a1 + 12204);
  if ( (int)v1 >= *(uint *)(a1 + 12208) )
    return 0;
  *(uint *)(a1 + 12204) = v1 + 1;
  return a1 + 12076 + 16 * ((v1 >> 31) + __ROR4__((v1 << 29) - (v1 >> 31), 29));
}

//----- (02264EB8) --------------------------------------------------------
int __fastcall Function_2264eb8(int a1, int a2)
{
  int v2;
  int v3;
  uint v4;
  uint v5;
  int v6;
  int result;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v2 = a1;
  v3 = a2;
  v4 = *(uint *)(a1 + 12208);
  v5 = *(uint *)(a1 + 12204);
  v6 = 0;
  if ( v5 == v4 || !a2 )
    return 0;
  v8 = (v5 >> 31) + __ROR4__((v5 << 29) - (v5 >> 31), 29);
  v9 = (v4 >> 31) + __ROR4__((v4 << 29) - (v4 >> 31), 29);
  if ( v8 >= v9 )
  {
    if ( v8 < 8 )
    {
      v11 = v2 + 16 * v8;
      while ( *(uchar *)(v11 + 12088) )
      {
        ++v8;
        v11 += 16;
        if ( v8 >= 8 )
          goto LABEL_16;
      }
      v6 = v2 + 12076 + 16 * v8;
    }
LABEL_16:
    if ( !v6 )
    {
      v12 = 0;
      if ( v9 > 0 )
      {
        v13 = v2;
        while ( *(uchar *)(v13 + 12088) )
        {
          ++v12;
          v13 += 16;
          if ( v12 >= v9 )
            goto LABEL_22;
        }
        v6 = v2 + 12076 + 16 * v12;
      }
    }
  }
  else if ( v8 < v9 )
  {
    v10 = v2 + 16 * v8;
    while ( *(uchar *)(v10 + 12088) )
    {
      ++v8;
      v10 += 16;
      if ( v8 >= v9 )
        goto LABEL_22;
    }
    v6 = v2 + 12076 + 16 * v8;
  }
LABEL_22:
  if ( v6 )
  {
    if ( *(uchar *)(v6 + 1) )
      ErrorHandler();
    *(uchar *)(v6 + 1) = v3;
    *(uchar *)(v6 + 12) = 1;
    switch ( v3 )
    {
      case 1:
        *(uint *)(v6 + 8) = 2 * *(uint *)(v6 + 4);
        break;
      case 2:
        *(uint *)(v6 + 8) = *(uint *)(v6 + 4) / 2;
        break;
      case 3:
        *(uint *)(v6 + 8) = 3 * *(uint *)(v6 + 4);
        break;
    }
    result = 1;
  }
  else
  {
    ErrorHandler();
    result = 0;
  }
  return result;
}

//----- (02264FB0) --------------------------------------------------------
uint __fastcall Function_2264fb0(int a1, uint **a2, int a3, int a4)
{
  int *v4;
  int v5;
  char *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int **v11;
  short *v12;
  int v13;
  int *v14;
  uint result;
  uint **v16;
  char v17;
  int v18;

  v18 = a4;
  v4 = dword_2266D68;
  v5 = a1;
  v16 = a2;
  v6 = &v17;
  v7 = 6;
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
  v10 = *v4;
  v11 = (int **)v16;
  v12 = &word_2266BB4;
  *(uint *)v6 = v10;
  v13 = 0;
  do
  {
    v14 = Function_200ce6c(*(uint **)(v5 + 36), *(uint *)(v5 + 40), (short *)&v17);
    *v11 = v14;
    Function_200d500(v14, *v12, v12[1], 1441792);
    Function_200d364(*v11, v13 / 2 + 31);
    Function_200d324(**v11);
    ++v13;
    ++v11;
    v12 += 2;
  }
  while ( v13 < 4 );
  result = *(uchar *)(*(uint *)v5 + 48);
  if ( result == 2 )
  {
    Function_200d3f4(v16[2], 0);
    result = Function_200d3f4(v16[3], 0);
  }
  else if ( result == 3 )
  {
    result = Function_200d3f4(v16[1], 0);
  }
  return result;
}

//----- (0226504C) --------------------------------------------------------
uint __fastcall Function_226504c(int a1, int *a2)
{
  int *v2;
  int v3;
  uint result;

  v2 = a2;
  v3 = 0;
  do
  {
    result = Function_200d0f4(*v2);
    ++v3;
    ++v2;
  }
  while ( v3 < 4 );
  return result;
}

//----- (02265064) --------------------------------------------------------
uint __fastcall Function_2265064(int a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  char *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  short *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int *v17;
  int *v18;
  int *v19;
  int v21;
  int v22;
  char v23;
  int v24;

  v24 = a4;
  v4 = dword_2266D9C;
  v5 = a1;
  v21 = a2;
  v6 = &v23;
  v7 = 6;
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
  v10 = *v4;
  v11 = v21;
  *(uint *)v6 = v10;
  v12 = &word_2266B7A;
  v22 = 0;
  do
  {
    v13 = Function_201d2b8(*(uint *)(v21 + 228) + *(uint *)(v11 + 12));
    v14 = (ull)((ll_mul(v13, 76LL) + 2048) >> 12) + 128;
    v15 = Function_201d2c4(*(uint *)(v21 + 228) + *(uint *)(v11 + 12));
    v16 = 98 - (ull)((ll_mul(v15, 68LL) + 2048) >> 12);
    v17 = Function_200ce6c(*(uint **)(v5 + 36), *(uint *)(v5 + 40), (short *)&v23);
    *(uint *)v11 = v17;
    Function_200d500(v17, (short)v14, (short)(v16 - 24), 1441792);
    Function_200d364(*(int **)v11, (ushort)v12[1]);
    Function_200d324(**(uint **)v11);
    Function_200d3f4(*(uint **)v11, 0);
    v18 = Function_200ce6c(*(uint **)(v5 + 36), *(uint *)(v5 + 40), (short *)dword_2266DD0);
    *(uint *)(v11 + 4) = v18;
    Function_200d500(v18, 0, 0, 1441792);
    Function_200d364(*(int **)(v11 + 4), 0x21u);
    Function_200d324(**(uint **)(v11 + 4));
    Function_200d3f4(*(uint **)(v11 + 4), 0);
    v19 = Function_200ce6c(*(uint **)(v5 + 36), *(uint *)(v5 + 40), (short *)dword_2266E04);
    *(uint *)(v11 + 8) = v19;
    Function_200d500(v19, (short)v14, (short)v16, 1441792);
    Function_200d810(*(int **)(v11 + 8), 1);
    Function_200d6a4(*(uint **)(v11 + 8), 1);
    Function_200d6e8(*(int **)(v11 + 8), 0x3F800000u, 0x3F800000u);
    Function_200d364(*(int **)(v11 + 8), v22 + 34);
    Function_200d324(**(uint **)(v11 + 8));
    Function_200d3f4(*(uint **)(v11 + 8), 0);
    Function_2266344(v5, v11 + 48);
    v11 += 76;
    ++v12;
    ++v22;
  }
  while ( v22 < 3 );
  Function_200d3f4(*(uint **)v21, 1);
  return Function_200d3f4(*(uint **)(v21 + 8), 1);
}

//----- (022651E0) --------------------------------------------------------
int __fastcall Function_22651e0(int a1, int *a2)
{
  int v2;
  int *v3;
  int v4;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    Function_200d0f4(*v3);
    Function_200d0f4(v3[1]);
    Function_200d0f4(v3[2]);
    result = Function_2266384(v2, v3 + 12);
    ++v4;
    v3 += 19;
  }
  while ( v4 < 3 );
  return result;
}

//----- (02265210) --------------------------------------------------------
int __fastcall Function_2265210(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;

  v2 = a2;
  *(uint *)(a2 + 232) = s32_div_f(0x1E000u, (uchar)byte_2266BC4[4 * *(uchar *)(a2 + 244)]);
  v3 = 0;
  v4 = 0;
  v5 = v2;
  do
  {
    *(uint *)(v5 + 12) = v4 << 12;
    *(uchar *)(v5 + 20) = ++v3;
    v4 += 90;
    v5 += 76;
  }
  while ( v3 < 3 );
  *(uchar *)(v2 + 16) = 2;
  result = 1;
  *(uchar *)(v2 + 241) = 1;
  return result;
}

//----- (02265254) --------------------------------------------------------
int __fastcall Function_2265254(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  int v6;
  char *v7;
  int v8;
  int v9;
  int v10;
  char *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v2 = a2;
  v3 = a1;
  result = *(uchar *)(a2 + 241);
  v5 = 0;
  if ( result != 1 )
  {
    ++*(uint *)(a2 + 236);
    if ( *(uchar *)(a2 + 242) )
    {
      if ( !--*(uchar *)(a2 + 242) && *(uchar *)(a2 + 240) >= 0xCu )
      {
        *(uchar *)(a2 + 240) = 0;
        if ( (uchar)++*(uchar *)(a2 + 244) >= 5u )
          *(uchar *)(a2 + 244) = 4;
        *(uint *)(a2 + 232) = s32_div_f(0x1E000u, (uchar)byte_2266BC4[4 * *(uchar *)(a2 + 244)]);
      }
    }
    else
    {
      *(uint *)(a2 + 228) += *(uint *)(a2 + 232);
      if ( (uchar)++*(uchar *)(a2 + 243) >= (uint)(uchar)byte_2266BC4[4
                                                                                                * *(uchar *)(a2 + 244)] )
      {
        *(uchar *)(a2 + 243) = 0;
        *(uint *)(a2 + 228) = 122880 * (uchar)++*(uchar *)(a2 + 240);
        *(uchar *)(a2 + 242) = byte_2266BC5[4 * *(uchar *)(a2 + 244)];
      }
    }
    v6 = *(uchar *)(v2 + 244);
    if ( v6 == 1 )
    {
      v7 = byte_2266BC4;
      v8 = 0;
      do
      {
        v9 = (uchar)*v7;
        v10 = (uchar)v7[1];
        ++v8;
        v7 += 4;
        v5 += 12 * (v9 + v10);
      }
      while ( v8 < 2 );
      if ( v5 - 15 == *(uint *)(v2 + 236) )
        Function_2265428(v2 + 76, 1);
    }
    else if ( v6 == 2 )
    {
      v11 = byte_2266BC4;
      v12 = 0;
      do
      {
        v13 = (uchar)*v11;
        v14 = (uchar)v11[1];
        ++v12;
        v11 += 4;
        v5 += 12 * (v13 + v14);
      }
      while ( v12 < 3 );
      if ( v5 - 15 == *(uint *)(v2 + 236) )
        Function_2265428(v2 + 152, 1);
    }
    v15 = 0;
    v16 = v2;
    do
    {
      Function_2265438(v3, v2, v16);
      result = Function_2266440(v3, v16, v16 + 48);
      ++v15;
      v16 += 76;
    }
    while ( v15 < 3 );
  }
  return result;
}

//----- (022653F4) --------------------------------------------------------
int __fastcall Function_22653f4(int a1, int *a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = 0;
  v3 = a1 + 5224;
  do
  {
    if ( *(uchar *)(v3 + 21) == 1 )
    {
      v4 = a1 + 5224 + 76 * v2;
      *a2 = v4;
      return *(uchar *)(v4 + 20);
    }
    ++v2;
    v3 += 76;
  }
  while ( v2 < 3 );
  result = 0;
  *a2 = 0;
  return result;
}

//----- (02265428) --------------------------------------------------------
int __fastcall Function_2265428(int result, char a2)
{
  *(uchar *)(result + 16) = a2;
  *(uchar *)(result + 17) = 0;
  *(uchar *)(result + 18) = 0;
  *(uint *)(result + 24) = 0;
  *(uchar *)(result + 21) = 0;
  return result;
}

//----- (02265438) --------------------------------------------------------
int __fastcall Function_2265438(int a1, int a2, int a3)
{
  return ((int (*)(void))*(&off_2266B94 + *(uchar *)(a3 + 16)))();
}

//----- (0226544C) --------------------------------------------------------
int __fastcall Function_226544c(int a1, int a2, int a3)
{
  *(uchar *)(a3 + 21) = 0;
  return 1;
}

//----- (02265454) --------------------------------------------------------
int __fastcall Function_2265454(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint v7;
  int v9;
  int v10;
  long long v11;
  int v12;
  uint v13;
  uint v14;
  int v15;
  int v16;
  int v17;

  v17 = a4;
  v4 = a1;
  v5 = a3;
  HIWORD(v17) = *(ushort *)(a3 + 28);
  LOWORD(v17) = *(ushort *)(a3 + 30);
  if ( *(uchar *)(a3 + 17) )
  {
    if ( *(uchar *)(a3 + 17) != 1 )
      goto LABEL_22;
  }
  else
  {
    Function_200d3f4(*(uint **)a3, 1);
    Function_200d3f4(*(uint **)(v5 + 8), 1);
    Function_200d5a0(*(int **)v5, (ushort *)&v17 + 1, &v17, 1441792);
    *(ushort *)(v5 + 28) = HIWORD(v17);
    *(ushort *)(v5 + 30) = v17;
    ++*(uchar *)(v5 + 17);
  }
  v6 = *(uint *)(v5 + 12);
  if ( v6 > 368640 )
  {
    if ( v6 > 737280 )
    {
      if ( v6 == 1105920 )
      {
        HIWORD(v17) = s32_div_f((short)(*(ushort *)(v5 + 28) + 32) * *(uchar *)(v5 + 18), 15) - 32;
        goto LABEL_19;
      }
    }
    else if ( v6 == 737280 )
    {
      LOWORD(v17) = s32_div_f((short)(*(ushort *)(v5 + 30) - 228) * *(uchar *)(v5 + 18), 15) + 228;
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  if ( v6 < 368640 )
  {
    if ( !v6 )
    {
      LOWORD(v17) = s32_div_f((short)(*(ushort *)(v5 + 30) + 32) * *(uchar *)(v5 + 18), 15) - 32;
      goto LABEL_19;
    }
LABEL_18:
    ErrorHandler();
    goto LABEL_19;
  }
  HIWORD(v17) = s32_div_f((short)(*(ushort *)(v5 + 28) - 288) * *(uchar *)(v5 + 18), 15) + 288;
LABEL_19:
  v7 = *(uchar *)(v5 + 18);
  if ( v7 >= 0xF )
  {
    Function_200d500(*(int **)v5, *(short *)(v5 + 28), *(short *)(v5 + 30), 1441792);
    Function_200d500(
      *(int **)(v5 + 8),
      *(short *)(v5 + 28),
      (short)(*(ushort *)(v5 + 30) + 24),
      1441792);
    Function_2265428(v5, 2);
    Function_226639c(v4, v5, v5 + 48);
    return 1;
  }
  v9 = s32_div_f(737280 * v7, 15);
  v10 = Function_201d2b8(v9);
  v11 = ll_mul(v10, 98304LL);
  v12 = (int)(((uint)(-(int)((v11 + 2048) >> 12) >> 11) >> 20)
                   - (ull)((v11 + 2048) >> 12)) >> 12;
  Function_200d500(*(int **)v5, SHIWORD(v17), (short)(v17 + v12), 1441792);
  Function_200d500(*(int **)(v5 + 8), SHIWORD(v17), (short)(v17 + 24), 1441792);
  v13 = s32_div_f(-v12, 3);
  v14 = s32_div_f(v13 << 12, 24);
  v15 = fflt(4096 - v14);
  v16 = f_div(v15, 0x45800000u);
  Function_200d6e8(*(int **)(v5 + 8), v16, v16);
LABEL_22:
  ++*(uchar *)(v5 + 18);
  return 1;
}

//----- (02265644) --------------------------------------------------------
int __fastcall Function_2265644(int a1, int a2, int **a3)
{
  int v3;
  int **v4;
  int v5;
  int v6;
  int v7;
  long long v8;
  int v9;
  int v10;
  int v11;
  int v12;
  long long v13;
  long long v14;
  int v15;
  uint v16;
  uint v17;
  int v18;
  int v19;
  int v20;
  int v22;

  v3 = a2;
  v22 = a1;
  v4 = a3;
  if ( *(uchar *)(a2 + 243) )
  {
    v5 = s32_div_f(0x2C000u, (uchar)byte_2266BC4[4 * *(uchar *)(a2 + 244)]);
    Function_200d34c(*v4, v5);
  }
  else
  {
    Function_200d3cc(*a3, 0);
  }
  v6 = s32_div_f(
         737280 * *(uchar *)(v3 + 243),
         (uchar)byte_2266BC4[4 * *(uchar *)(v3 + 244)]);
  v7 = Function_201d2b8(v6);
  v8 = ll_mul(v7, 49152LL);
  v9 = (int)(((uint)(-(int)((v8 + 2048) >> 12) >> 11) >> 20)
                  - (ull)((v8 + 2048) >> 12)) >> 12;
  v10 = Function_201d2b8((int)v4[3] + *(uint *)(v3 + 228));
  v11 = (ull)((ll_mul(v10, 76LL) + 2048) >> 12) + 128;
  v12 = Function_201d2c4((int)v4[3] + *(uint *)(v3 + 228));
  v13 = ll_mul(v12, 68LL);
  v14 = (uint)v13;
  LODWORD(v13) = 2048;
  v15 = 98 - (ull)((v14 + v13) >> 12);
  Function_200d500(*v4, (short)v11, (short)(74 - (ull)((v14 + v13) >> 12) + v9), 1441792);
  Function_200d500(v4[2], (short)v11, (short)v15, 1441792);
  v16 = s32_div_f(-v9, 3);
  v17 = s32_div_f(v16 << 12, 12);
  v18 = fflt(4096 - v17);
  v19 = f_div(v18, 0x45800000u);
  Function_200d6e8(v4[2], v19, v19);
  if ( *(uchar *)(v3 + 243) == (uchar)byte_2266BC4[4 * *(uchar *)(v3 + 244)] - 1 )
    Function_226639c(v22, v4, v4 + 12);
  s32_div_f(((int)v4[3] + *(uint *)(v3 + 228)) >> 12, 360);
  *((uchar *)v4 + 21) = v20 == 180;
  return 1;
}

//----- (022657C4) --------------------------------------------------------
int __fastcall Function_22657c4(int a1, uchar *a2, int a3)
{
  int v3;
  uint v4;
  uchar *v5;
  int v6;
  int v7;
  int v8;
  uint v9;
  int v10;
  int v11;
  uint v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  long long v18;
  int v19;
  long long v20;
  long long v21;
  int v22;
  int v23;
  long long v24;
  int v25;
  int result;
  short v27[2];
  int v28;
  char v29;
  int v30;

  v3 = a3;
  v4 = *(uchar *)(a3 + 17);
  v5 = a2;
  if ( v4 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_22657E0 + v4) + 36067298);
  switch ( (uchar)v4 )
  {
    case 0:
      Function_2005748(0x57Bu);
      Function_200d5a0(*(int **)v3, &v30, &v29, 1441792);
      Function_200d500(*(int **)(v3 + 4), (short)v30, (short)(*(ushort *)&v29 - 32), 1441792);
      Function_200d364(*(int **)(v3 + 4), 0x21u);
      Function_200d3f4(*(uint **)(v3 + 4), 1);
      Function_200d364(*(int **)v3, (ushort)word_2266B7A[*(uchar *)(v3 + 20)] + 2);
      *(uchar *)(v3 + 18) = word_2266BC6[2 * v5[244]];
      *(uchar *)(v3 + 19) = LOBYTE(word_2266BC6[2 * v5[244]]) >> 1;
      ++*(uchar *)(v3 + 17);
      goto LABEL_18;
    case 1:
      if ( *(uchar *)(a3 + 18) == *(uchar *)(a3 + 19) )
      {
        Function_200d364(*(int **)a3, (ushort)word_2266B7A[*(uchar *)(a3 + 20)] + 1);
        Function_200d3f4(*(uint **)(v3 + 4), 0);
        Function_200d34c(*(int **)(v3 + 4), 0x4000);
      }
      if ( *(uchar *)(v3 + 18) )
      {
        --*(uchar *)(v3 + 18);
      }
      else
      {
        Function_200d3f4(*(uint **)(v3 + 4), 0);
        Function_200d364(*(int **)v3, (ushort)word_2266B7A[*(uchar *)(v3 + 20)]);
        ++*(uchar *)(v3 + 17);
      }
      goto LABEL_18;
    case 2:
      if ( a2[242] )
      {
        v8 = a2[242];
        v9 = v5[240];
        if ( v9 < 0xC )
        {
          v11 = v5[244];
          v7 = v9 + 1;
          v6 = v8 + (uchar)byte_2266BC4[4 * v11];
        }
        else
        {
          v10 = v5[244];
          v7 = 1;
          v6 = v8 + (uchar)byte_2266BC4[4 * (v10 + 1)];
        }
      }
      else
      {
        v6 = (uchar)byte_2266BC4[4 * a2[244]]
           - a2[243]
           + (uchar)byte_2266BC5[4 * a2[244]]
           + (uchar)byte_2266BC4[4 * a2[244]];
        v7 = a2[240] + 2;
      }
      v12 = s32_div_f(*(uint *)(v3 + 12), 122880);
      s32_div_f(v7 + v12, 12);
      v14 = 122880 * v13;
      v15 = Function_201d2b8(122880 * v13);
      v16 = Function_201d2c4(v14);
      Function_200d5a0(*(int **)v3, &v28, v27, 1441792);
      v27[0] += 24;
      v17 = (short)v28;
      v18 = ll_mul(v15, 76LL);
      *(uint *)(v3 + 32) = s32_div_f(((short)((ull)((v18 + 2048) >> 12) + 128) - v17) << 12, v6);
      v19 = v27[0];
      v20 = ll_mul(v16, 68LL);
      v21 = (uint)v20;
      LODWORD(v20) = 2048;
      *(uint *)(v3 + 36) = s32_div_f(((short)(98 - (ull)((v21 + v20) >> 12)) - v19) << 12, v6);
      *(uint *)(v3 + 40) = v17 << 12;
      *(uint *)(v3 + 44) = v19 << 12;
      *(uchar *)(v3 + 18) = v6;
      *(uint *)(v3 + 24) = v6;
      ++*(uchar *)(v3 + 17);
      goto LABEL_16;
    case 3:
LABEL_16:
      *(uint *)(v3 + 40) += *(uint *)(v3 + 32);
      *(uint *)(v3 + 44) += *(uint *)(v3 + 36);
      v22 = s32_div_f(737280 * *(uchar *)(v3 + 18), *(uint *)(v3 + 24));
      v23 = Function_201d2b8(v22);
      v24 = ll_mul(v23, 49152LL);
      Function_200d500(
        *(int **)v3,
        16 * (*(uint *)(v3 + 40) + (*(uint *)(v3 + 40) >> 11 >> 20)) >> 16,
        (short)(*(uint *)(v3 + 44) / 4096
                       - 24
                       + (int)-(((uint)(v24 + 2048) >> 12) | ((__CFADD__((uint)v24, 2048) + HIDWORD(v24)) << 20))
                       / 4096),
        1441792);
      v25 = s32_div_f(0x2C000u, *(uint *)(v3 + 24));
      Function_200d34c(*(int **)v3, v25);
      Function_200d500(
        *(int **)(v3 + 8),
        16 * (*(uint *)(v3 + 40) + (*(uint *)(v3 + 40) >> 11 >> 20)) >> 16,
        16 * (*(uint *)(v3 + 44) + (*(uint *)(v3 + 44) >> 11 >> 20)) >> 16,
        1441792);
      if ( --*(uchar *)(v3 + 18) )
        goto LABEL_18;
      Function_200d364(*(int **)v3, (ushort)word_2266B7A[*(uchar *)(v3 + 20)]);
      Function_200d3cc(*(int **)v3, 0);
      Function_2265428(v3, 2);
      result = 1;
      break;
    default:
LABEL_18:
      result = 1;
      break;
  }
  return result;
}

//----- (02265ABC) --------------------------------------------------------
uint __fastcall Function_2265abc(int a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  char *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int *v10;
  int *v11;
  uint result;
  char v13;

  v2 = dword_2266D9C;
  v3 = a1;
  v4 = a2;
  v5 = &v13;
  v6 = 6;
  do
  {
    v7 = *v2;
    v8 = v2[1];
    v2 += 2;
    *(uint *)v5 = v7;
    *((uint *)v5 + 1) = v8;
    v5 += 8;
    --v6;
  }
  while ( v6 );
  *(uint *)v5 = *v2;
  v9 = 0;
  do
  {
    v10 = Function_200ce6c(*(uint **)(v3 + 36), *(uint *)(v3 + 40), (short *)&v13);
    *(uint *)v4 = v10;
    Function_200d500(v10, 0, 0, 1441792);
    Function_200d3f4(*(uint **)v4, 0);
    v11 = Function_200ce6c(*(uint **)(v3 + 36), *(uint *)(v3 + 40), (short *)dword_2266DD0);
    *(uint *)(v4 + 4) = v11;
    Function_200d500(v11, 0, 0, 1441792);
    Function_200d364(*(int **)(v4 + 4), 0x21u);
    Function_200d324(**(uint **)(v4 + 4));
    result = Function_200d3f4(*(uint **)(v4 + 4), 0);
    ++v9;
    v4 += 24;
  }
  while ( v9 < 3 );
  return result;
}

//----- (02265B3C) --------------------------------------------------------
uint __fastcall Function_2265b3c(int a1, int *a2)
{
  int *v2;
  int v3;
  uint result;

  v2 = a2;
  v3 = 0;
  do
  {
    Function_200d0f4(*v2);
    result = Function_200d0f4(v2[1]);
    ++v3;
    v2 += 6;
  }
  while ( v3 < 3 );
  return result;
}

//----- (02265B58) --------------------------------------------------------
int __fastcall Function_2265b58(int result, int a2, int a3, int a4, short a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v5 = result;
  v6 = a2;
  v7 = a3;
  v13 = a4;
  v8 = 0;
  if ( a3 )
  {
    result = Function_203608c();
    if ( v13 != result )
    {
      result = 0;
      v9 = v6;
      while ( *(uchar *)(v9 + 21) )
      {
        ++result;
        v9 += 24;
        if ( result >= 3 )
          goto LABEL_7;
      }
      v8 = v6 + 24 * result;
LABEL_7:
      if ( v8 )
      {
        v10 = Function_22622c4(v5, v13);
        Function_200d41c(*(int **)v8, *((ushort *)&dword_2266C2C[2 * *(uchar *)(*(uint *)v5 + 48)] + v10));
        Function_200d364(*(int **)v8, (ushort)word_2266B7A[v7]);
        v11 = 2 * *((uchar *)&dword_2266BD8[*(uchar *)(*(uint *)v5 + 48)] + v10);
        v12 = word_2266BB4[v11];
        *(ushort *)(v8 + 16) = word_2266BB6[v11] - 24;
        Function_200d500(*(int **)v8, v12, (short)(*(ushort *)(v8 + 16) - 96), 1441792);
        Function_200d324(**(uint **)v8);
        *(uchar *)(v8 + 18) = v7;
        *(ushort *)(v8 + 22) = a5 - 12;
        *(uchar *)(v8 + 19) = 0;
        result = 1;
        *(uchar *)(v8 + 21) = 1;
      }
    }
  }
  return result;
}

//----- (02265C1C) --------------------------------------------------------
int __fastcall Function_2265c1c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a2;
  v3 = 0;
  v4 = a2;
  do
  {
    result = *(uchar *)(v4 + 21);
    if ( result == 1 )
      result = Function_2265c3c(v2, v4);
    ++v3;
    v4 += 24;
  }
  while ( v3 < 3 );
  return result;
}

//----- (02265C3C) --------------------------------------------------------
int __fastcall Function_2265c3c(int a1, int a2, int a3, int a4)
{
  int v4;
  uint v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int result;
  short v11[2];
  short v12[2];
  int v13;

  v13 = a4;
  v4 = a2;
  v5 = *(uchar *)(a2 + 19);
  if ( v5 <= 4 )
    JUMPOUT(__CS__, *((short *)&off_2265C56 + v5) + 36068440);
  switch ( (uchar)v5 )
  {
    case 0:
      Function_200d5a0(*(int **)a2, v12, v11, 1441792);
      *(uint *)(v4 + 8) = v12[0] << 12;
      *(uint *)(v4 + 12) = v11[0] << 12;
      ++*(uchar *)(v4 + 19);
      goto LABEL_5;
    case 1:
LABEL_5:
      v6 = *(short *)(v4 + 22);
      if ( v6 <= 0 )
      {
        Function_200d3f4(*(uint **)v4, 1);
        v7 = *(uint *)(v4 + 12) + 0x8000;
        *(uint *)(v4 + 12) = v7;
        v8 = *(short *)(v4 + 16);
        if ( v7 / 4096 >= v8 )
        {
          *(uint *)(v4 + 12) = v8 << 12;
          ++*(uchar *)(v4 + 19);
        }
      }
      else
      {
        *(ushort *)(v4 + 22) = v6 - 1;
      }
      goto LABEL_16;
    case 2:
      Function_200d5a0(*(int **)a2, v12, v11, 1441792);
      Function_200d500(*(int **)(v4 + 4), v12[0], (short)(v11[0] - 32), 1441792);
      Function_200d364(*(int **)(v4 + 4), 0x21u);
      Function_200d3f4(*(uint **)(v4 + 4), 1);
      Function_2005748(0x57Bu);
      Function_200d364(*(int **)v4, (ushort)word_2266B7A[*(uchar *)(v4 + 18)] + 2);
      *(uchar *)(v4 + 20) = 8;
      ++*(uchar *)(v4 + 19);
      goto LABEL_16;
    case 3:
      if ( --*(uchar *)(a2 + 20) == 3 )
        Function_200d34c(*(int **)(a2 + 4), 0x4000);
      if ( !*(uchar *)(v4 + 20) )
      {
        Function_200d3f4(*(uint **)(v4 + 4), 0);
        Function_200d364(*(int **)v4, (ushort)word_2266B7A[*(uchar *)(v4 + 18)]);
        ++*(uchar *)(v4 + 19);
      }
      goto LABEL_16;
    case 4:
      v9 = *(uint *)(a2 + 12) - 0x8000;
      *(uint *)(v4 + 12) = v9;
      if ( v9 / 4096 > *(short *)(v4 + 16) - 96 )
        goto LABEL_16;
      Function_200d3f4(*(uint **)v4, 0);
      result = 0;
      *(uchar *)(v4 + 19) = 0;
      *(uchar *)(v4 + 21) = 0;
      break;
    default:
LABEL_16:
      Function_200d500(
        *(int **)v4,
        16 * (*(uint *)(v4 + 8) + (*(uint *)(v4 + 8) >> 11 >> 20)) >> 16,
        16 * (*(uint *)(v4 + 12) + (*(uint *)(v4 + 12) >> 11 >> 20)) >> 16,
        1441792);
      result = 1;
      break;
  }
  return result;
}

//----- (02265DB8) --------------------------------------------------------
int __fastcall Function_2265db8(uint *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, uchar a15)
{
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int *v20;
  int v21;
  int *v22;
  int v23;
  uint *v24;
  int result;
  uint *v26;
  int v27;
  int v28;
  char v29;
  int v30;
  int v31;
  char v32;
  int v33;
  char *v34;
  int v35;
  uchar *v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;

  v45 = a4;
  v26 = a1;
  v27 = a2;
  v28 = a3;
  v15 = a4;
  v16 = a10;
  v17 = Function_2002eb4(a6, a5, 0);
  v18 = v17 / 8;
  if ( Function_20bd140(v17, 8) )
    LOBYTE(v18) = v18 + 1;
  Function_201a7a0((int)&v32);
  Function_201a870(v26, (int)&v32, (uchar)v18, a15, 0, 0);
  Function_201d7e0((int)&v32, a6);
  v19 = Function_2012898((int)&v32, 1, 0x6Eu);
  Function_201ed94(v19, 1, 1, (int)&v29);
  if ( a12 == 1 )
    v16 = a10 - v17 / 2;
  v33 = v28;
  v34 = &v32;
  v35 = Function_200d9b0(v27);
  v36 = Function_200d04c(v27, a9);
  v37 = 0;
  v39 = v16;
  v38 = v30;
  v40 = a11;
  v41 = a13;
  v42 = a14;
  v43 = 1;
  v44 = 110;
  v20 = Function_20127e8(&v33);
  v22 = v20;
  if ( a8 )
    Function_2012a90(v20, a8);
  Function_20128c4(v22, v16, a11, v21);
  Function_201a8fc((int)&v32);
  *(uint *)v15 = v22;
  v23 = v30;
  v24 = (uint *)(v15 + 4);
  *v24 = *(uint *)&v29;
  v24[1] = v23;
  result = v31;
  *(uint *)(v15 + 12) = v31;
  *(ushort *)(v15 + 16) = v17;
  return result;
}

//----- (02265EB0) --------------------------------------------------------
int __fastcall Function_2265eb0(int **a1)
{
  int **v1;
  int result;

  v1 = a1;
  Function_2012870(*a1);
  Function_201ee28((int)(v1 + 1));
  result = 0;
  *v1 = 0;
  return result;
}

//----- (02265EC8) --------------------------------------------------------
int __fastcall Function_2265ec8(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int result;
  int v10;
  char v11;
  int v12;

  v10 = a1;
  v1 = 0;
  v2 = a1;
  do
  {
    v3 = *(uchar *)(v10 + v1 + 384);
    if ( v3 >= 64 )
    {
      if ( v3 >= 128 )
      {
        v6 = v3 - 160;
        v4 = 64 - v6;
        v5 = -16 - v6;
      }
      else
      {
        v5 = 144 - v3;
        v4 = 64 - v3;
      }
    }
    else
    {
      v4 = 64 - v3;
      v5 = -16 - v3;
    }
    Function_20129a4(*(uint *)(v2 + 4), &v12, &v11);
    Function_20128c4(*(uint **)(v2 + 4), v12, 168 - v4, v7);
    result = Function_20128c4(*(uint **)(v2 + 24), v12, 168 - v5, v8);
    ++v1;
    v2 += 40;
  }
  while ( v1 < 6 );
  return result;
}

//----- (02265F34) --------------------------------------------------------
int __fastcall Function_2265f34(int a1, int a2)
{
  int result;
  int v3;
  int v4;
  int v5;

  result = 414;
  v3 = a2;
  v4 = *(char *)(a2 + 414);
  if ( v4 > 0 )
  {
    *(uchar *)(v3 + 414) = v4 - 1;
    return result;
  }
  result = *(uchar *)(v3 + 416);
  if ( *(uchar *)(v3 + 416) )
  {
    if ( result != 1 )
      return result;
  }
  else
  {
    if ( Function_2266008(v3) == 1 )
      return Function_2265fd4(v3);
    ++*(uchar *)(v3 + 416);
  }
  v5 = Function_2266030(v3);
  result = Function_2265ec8(v3);
  if ( v5 == 1 )
  {
    *(uchar *)(v3 + 414) = 15;
    result = 416;
    --*(uchar *)(v3 + 416);
  }
  return result;
}

//----- (02265F98) --------------------------------------------------------
uint __fastcall Function_2265f98(int a1, uint a2)
{
  int v2;
  int v3;
  uint v4;
  int v5;
  uint v6;
  uint result;

  v2 = 100000;
  v3 = a1;
  v4 = a2;
  v5 = 0;
  do
  {
    v6 = s32_div_f(v4, v2);
    *(uchar *)(v3 + v5 + 396) = 16 * v6;
    v4 -= v6 * v2;
    result = s32_div_f(v2, 10);
    ++v5;
    v2 = result;
  }
  while ( v5 < 6 );
  return result;
}

//----- (02265FD4) --------------------------------------------------------
int __fastcall Function_2265fd4(int result)
{
  int v1;
  uchar *v2;

  v1 = 0;
  do
  {
    v2 = (uchar *)(result + v1);
    v2[390] = *(uchar *)(result + v1 + 396);
    v2[408] = 2 * (5 - v1++);
    v2[402] = 0;
  }
  while ( v1 < 6 );
  *(uchar *)(result + 415) = 0;
  return result;
}

//----- (02266008) --------------------------------------------------------
int __fastcall Function_2266008(int a1)
{
  int v1;

  v1 = 0;
  do
  {
    if ( *(uchar *)(a1 + v1 + 384) != *(uchar *)(a1 + v1 + 390) )
      return 0;
    ++v1;
  }
  while ( v1 < 6 );
  return 1;
}

//----- (02266030) --------------------------------------------------------
int __fastcall Function_2266030(int a1)
{
  int v1;
  int v2;
  int v4;
  uchar *v5;
  int v6;
  int v7;
  uint v8;
  int v9;
  uchar v10;
  int v11;

  v1 = a1;
  v2 = 5;
  if ( *(uchar *)(a1 + 415) > 6u )
    return 1;
  v4 = 0;
  v11 = 0;
  do
  {
    v5 = (uchar *)(v1 + v2);
    v6 = v11;
    if ( *(char *)(v1 + v2 + 408) <= 0 )
    {
      if ( v5[402] <= 1u || v5[384] != v5[390] )
      {
        v11 = 0;
        v7 = v5[384];
        v5[384] += 23;
        v8 = v5[390];
        v9 = v8 + 160;
        if ( v7 <= (int)v8 && v5[384] >= v8 || v7 <= v9 && v5[384] >= v9 )
        {
          if ( v5[402] >= 1u )
          {
            if ( v2 == 5 || v6 == 1 )
            {
              ++v5[402];
              v5[384] = v5[390];
              if ( (uchar)++*(uchar *)(v1 + 415) >= 6u )
                return 1;
            }
          }
          else
          {
            ++v5[402];
          }
        }
        s32_div_f(v5[384], 160);
        v5[384] = v10;
      }
      else
      {
        v11 = 1;
      }
    }
    else
    {
      --v5[408];
      v11 = 0;
    }
    ++v4;
    --v2;
  }
  while ( v4 < 6 );
  return 0;
}

//----- (02266130) --------------------------------------------------------
int *__fastcall Function_2266130(int a1)
{
  int *v1;

  v1 = Function_200ce6c(*(uint **)(a1 + 36), *(uint *)(a1 + 40), (short *)dword_2266E6C);
  Function_200d324(*v1);
  return v1;
}

//----- (02266150) --------------------------------------------------------
int __fastcall Function_2266150(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  ushort *v9;
  int v10;
  int result;
  int v12;
  int v13;
  char v14;
  int v15;
  int v16;

  v16 = a4;
  v4 = a1;
  v12 = *(uint *)(a1 + 14408);
  v13 = 5;
  v5 = a1 + 100;
  v6 = a1 + 200;
  v7 = a1 + 5908;
  do
  {
    if ( *(uint *)(v5 + 5808) )
      ErrorHandler();
    u32_div_f(v12, 10);
    v9 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v4 + 128), v8 + 4);
    v12 = u32_div_f(v12, 10);
    Function_20129a4(*(uint *)(v6 + 5548), &v15, &v14);
    Function_2265db8(
      *(uint **)(v4 + 44),
      *(uint *)(v4 + 40),
      *(uint *)(v4 + 144),
      v7,
      (int)v9,
      0,
      921344,
      0,
      10003,
      v15,
      168,
      0,
      1,
      12,
      2u);
    Function_20237bc_FreeMsg((int)v9, v10);
    v5 -= 20;
    v6 -= 40;
    v7 -= 20;
    result = v13-- - 1;
  }
  while ( v13 >= 0 );
  return result;
}

//----- (02266210) --------------------------------------------------------
int __fastcall Function_2266210(int a1)
{
  int v1;
  int v2;
  int **v3;
  int result;

  v1 = a1;
  v2 = 0;
  v3 = (int **)(a1 + 5808);
  do
  {
    result = *(uint *)(v1 + 5808);
    if ( result )
      result = Function_2265eb0(v3);
    ++v2;
    v1 += 20;
    v3 += 5;
  }
  while ( v2 < 6 );
  return result;
}

//----- (02266238) --------------------------------------------------------
uint __fastcall Function_2266238(int a1, int a2)
{
  return Function_200d0f4(a2);
}

//----- (02266244) --------------------------------------------------------
int *__fastcall Function_2266244(int a1)
{
  int *v1;

  v1 = Function_200ce6c(*(uint **)(a1 + 36), *(uint *)(a1 + 40), (short *)dword_2266EA0);
  Function_200d3f4((uint *)v1, 0);
  Function_200d324(*v1);
  return v1;
}

//----- (02266268) --------------------------------------------------------
uint __fastcall Function_2266268(int a1, int a2)
{
  return Function_200d0f4(a2);
}

//----- (02266274) --------------------------------------------------------
int __fastcall Function_2266274(int a1, uint ***a2)
{
  uint ***v2;
  int result;

  v2 = a2;
  switch ( (uchar)*((ushort *)a2 + 2) )
  {
    case 0u:
    case 5u:
      Function_200d500((int *)*a2, 128, 16, 1441792);
      Function_200d3f4((uint *)*v2, 1);
      ++*((ushort *)v2 + 2);
      goto LABEL_11;
    case 1u:
    case 6u:
      if ( (short)++*((ushort *)a2 + 3) > 15 )
      {
        *((ushort *)a2 + 3) = 0;
        a2[5] = (uint **)1;
        a2[6] = (uint **)1;
        a2[3] = (uint **)128;
        a2[4] = (uint **)32;
        ++*((ushort *)a2 + 2);
      }
      goto LABEL_11;
    case 2u:
    case 7u:
      a2[6] = 0;
      a2[4] = (uint **)((char *)a2[4] + 6);
      Function_200d5dc(*a2, 0, 6);
      if ( (int)v2[4] > 96 )
        ++*((ushort *)v2 + 2);
      goto LABEL_11;
    case 3u:
    case 8u:
      a2[5] = 0;
      Function_200d3f4((uint *)*a2, 0);
      ++*((ushort *)v2 + 2);
      goto LABEL_8;
    case 4u:
    case 9u:
LABEL_8:
      if ( (short)++*((ushort *)v2 + 3) > 30 )
      {
        *((ushort *)v2 + 3) = 0;
        ++*((ushort *)v2 + 2);
      }
      goto LABEL_11;
    case 0xAu:
      result = 1;
      break;
    default:
LABEL_11:
      result = 0;
      break;
  }
  return result;
}

//----- (02266344) --------------------------------------------------------
uint __fastcall Function_2266344(int a1, int **a2)
{
  int v2;
  int **v3;
  int v4;
  int *v5;
  uint result;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    v5 = Function_200ce6c(*(uint **)(v2 + 36), *(uint *)(v2 + 40), (short *)dword_2266E38);
    Function_200d364(v5, 0x1Bu);
    Function_200d810(v5, 1);
    Function_200d3f4((uint *)v5, 0);
    result = Function_200d324(*v5);
    ++v4;
    *v3 = v5;
    ++v3;
  }
  while ( v4 < 2 );
  return result;
}

//----- (02266384) --------------------------------------------------------
uint __fastcall Function_2266384(int a1, int *a2)
{
  int *v2;
  int v3;
  uint result;

  v2 = a2;
  v3 = 0;
  do
  {
    result = Function_200d0f4(*v2);
    ++v3;
    ++v2;
  }
  while ( v3 < 2 );
  return result;
}

//----- (0226639C) --------------------------------------------------------
int __fastcall Function_226639c(int a1, int **a2, int a3, int a4)
{
  int v4;
  int v5;
  uint v6;
  uint v7;
  int result;
  int v9;
  char v10;
  int v11;
  int v12;

  v12 = a4;
  v9 = a3;
  Function_200d5a0(*a2, &v11, &v10, 1441792);
  v4 = v9;
  v5 = 0;
  do
  {
    Function_200d500(*(int **)v4, (short)v11, (short)(*(ushort *)&v10 + 28), 1441792);
    Function_200d364(*(int **)v4, 0x1Bu);
    Function_200d810(*(int **)v4, 1);
    Function_200d3f4(*(uint **)v4, 1);
    v6 = PRNG();
    *(uint *)(v4 + 8) = (v6 >> 31) + __ROR4__((v6 << 20) - (v6 >> 31), 20) + 4096;
    v7 = PRNG();
    *(uint *)(v4 + 16) = (v7 >> 31) + __ROR4__((v7 << 22) - (v7 >> 31), 22) + 1024;
    if ( v5 & 1 )
      *(uint *)(v4 + 8) = -*(uint *)(v4 + 8);
    ++v5;
    v4 += 4;
  }
  while ( v5 < 2 );
  result = v9;
  *(uchar *)(v9 + 25) = 0;
  *(uchar *)(v9 + 24) = 1;
  return result;
}

//----- (02266440) --------------------------------------------------------
uint __fastcall Function_2266440(int a1, int a2, int a3, int a4)
{
  int v4;
  uint result;
  int v6;
  int **v7;
  int v8;
  uint **v9;

  v4 = a3;
  result = *(uchar *)(a3 + 24);
  if ( *(uchar *)(a3 + 24) )
  {
    if ( result == 1 )
    {
      v6 = 0;
      v7 = (int **)a3;
      do
      {
        Function_200d5e8(*v7, (int)v7[2], -(int)v7[4], a4);
        Function_200d324(**v7);
        ++v6;
        ++v7;
      }
      while ( v6 < 2 );
      result = (uchar)++*(uchar *)(v4 + 25);
      if ( result > 8 )
      {
        v8 = 0;
        v9 = (uint **)v4;
        do
        {
          Function_200d3f4(*v9, 0);
          ++v8;
          ++v9;
        }
        while ( v8 < 2 );
        result = 0;
        *(uchar *)(v4 + 24) = 0;
      }
    }
  }
  return result;
}

//----- (02266498) --------------------------------------------------------
int __fastcall Function_2266498(int a1)
{
  int v1;
  ushort *v2;

  v1 = a1;
  v2 = (ushort *)MallocSomeDataAndStorePtrInOverlayData1c(a1, 12, 0x6Eu);
  MI_CpuFill8(v2, 0, 0xCu);
  *(uint *)v2 = LoadPtrToOverWorldDataIn18(v1);
  return 1;
}

//----- (022664BC) --------------------------------------------------------
int __fastcall Function_22664bc(int a1, uint *a2)
{
  uint *v2;
  uint *v3;
  uint *v4;
  uchar *v5;
  int result;

  v2 = a2;
  v3 = (uint *)LoadOverlayData1c(a1);
  v4 = v3;
  v5 = (uchar *)*v3;
  if ( v5[61] == 1 )
  {
    if ( v5[62] )
    {
      if ( v5[62] != 1 )
      {
        if ( v4[1] )
        {
          ((void (*)(void))dword_225C838[0])();
          v4[1] = 0;
        }
        if ( v4[2] )
        {
          ((void (*)(void))dword_225C904[0])();
          v4[2] = 0;
        }
        return 1;
      }
      if ( ((int (*)(void))dword_225CA98[0])() == 1 )
        ++*(uchar *)(*v4 + 62);
    }
    else
    {
      if ( Function_200f2ac() == 1 )
        Function_200f2c0();
      SetBrightnessOfBothScreens(0);
      ++*(uchar *)(*v4 + 62);
    }
    return 0;
  }
  switch ( (uchar)*v2 )
  {
    case 0u:
      if ( v5[49] )
        *v2 = 3;
      else
        *v2 = 1;
      goto LABEL_27;
    case 1u:
      v4[1] = ((int (*)(void))dword_225C82C[0])();
      ++*v2;
      goto LABEL_27;
    case 2u:
      if ( ((int (__fastcall *)(uint))dword_225C8BC[0])(v4[1]) == 1 )
      {
        *(uint *)(*v4 + 52) = ((int (__fastcall *)(uint))dword_225C8CC[0])(v4[1]);
        ((void (__fastcall *)(uint))dword_225C838[0])(v4[1]);
        v4[1] = 0;
        *v2 = 5;
      }
      goto LABEL_27;
    case 3u:
      v4[2] = ((int (*)(void))dword_225C8F8[0])();
      ++*v2;
      goto LABEL_27;
    case 4u:
      if ( ((int (__fastcall *)(uint))dword_225C9A0)(v4[2]) == 1 )
      {
        *(uint *)(*v4 + 56) = ((int (__fastcall *)(uint))dword_225C9A4[0])(v4[2]);
        ((void (__fastcall *)(uint))dword_225C904[0])(v4[2]);
        v4[2] = 0;
        *v2 = 5;
      }
LABEL_27:
      result = 0;
      break;
    default:
      result = 1;
      break;
  }
  return result;
}

//----- (022665E8) --------------------------------------------------------
int __fastcall Function_22665e8(int a1)
{
  int v1;

  v1 = a1;
  LoadOverlayData1c(a1);
  FreeSomeDataAndStore0InOverlayData1c(v1);
  return 1;
}

//----- (022665FC) --------------------------------------------------------
int __fastcall Function_22665fc(int a1)
{
  return Function_2032798((int)&dword_2266FE4, 4, a1);
}

//----- (02266610) --------------------------------------------------------
int Function_2266610()
{
  return 20;
}

//----- (02266614) --------------------------------------------------------
int Function_2266614()
{
  return 4;
}

//----- (02266618) --------------------------------------------------------
int __fastcall Function_2266618(int a1, int a2, int *a3, int a4)
{
  return Function_2262044(a4, a1, a3);
}

//----- (02266624) --------------------------------------------------------
BOOL __fastcall Function_2266624(int a1, int a2)
{
  return Function_20359dc(24, a2, 20) == 1;
}

//----- (0226663C) --------------------------------------------------------
int __fastcall Function_226663c(int a1, int a2, int a3, int a4)
{
  int result;

  result = 12224;
  *(uint *)(a4 + 12224) = 1;
  return result;
}

//----- (02266648) --------------------------------------------------------
BOOL Function_2266648()
{
  return Function_20359dc(25, 0, 0) == 1;
}

//----- (02266660) --------------------------------------------------------
int __fastcall Function_2266660(int a1, int a2, int *a3, uint *a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int result;

  v4 = a4;
  v5 = *a4;
  v6 = *a3;
  v7 = *(uchar *)(v5 + 48);
  v8 = 0;
  if ( v7 > 0 )
  {
    while ( a1 != *(uchar *)(v5 + 44) )
    {
      ++v8;
      ++v5;
      if ( v8 >= v7 )
        goto LABEL_5;
    }
    v4[v8 + 3] = v6;
  }
LABEL_5:
  if ( v8 >= *(uchar *)(*v4 + 48) )
    ErrorHandler();
  result = v4[2] + 1;
  v4[2] = result;
  return result;
}

//----- (022666A4) --------------------------------------------------------
BOOL Function_22666a4()
{
  int v1;

  v1 = 100;
  return Function_20359dc(23, (int)&v1, 4) == 1;
}

//----- (022666C0) --------------------------------------------------------
int __fastcall Function_22666c0(int a1, uint *a2)
{
  ushort *v2;
  void (*v3)(void);

  v2 = a2;
  v3 = (void (*)(void))dword_2267014[*a2];
  if ( !v3 )
    return 0;
  v3();
  MI_CpuFill8(v2, 0, 0x14u);
  return 1;
}

//----- (022666E8) --------------------------------------------------------
int __fastcall Function_22666e8(int a1, int *a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v2 = a1;
  v3 = a2;
  MI_CpuFill8(&v8, 0, 0x14u);
  v8 = 1;
  v4 = *v3;
  v5 = v3[1];
  v3 += 2;
  v9 = v4;
  v10 = v5;
  v6 = v3[1];
  v11 = *v3;
  v12 = v6;
  return Function_2262130(v2, &v8);
}

//----- (02266714) --------------------------------------------------------
int __fastcall Function_2266714(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a1;
  result = Function_203608c();
  if ( *(uchar *)(v2 + 4) != result )
    result = Function_2263dc4(v3, (uchar *)(v2 + 4));
  return result;
}

//----- (02266730) --------------------------------------------------------
int __fastcall Function_2266730(int a1, short a2, char a3, int a4)
{
  int v4;
  short v5;
  char v6;
  int v8;
  short v9;
  char v10;
  char v11;
  int v12;

  v12 = a4;
  v4 = a1;
  v5 = a2;
  v6 = a3;
  MI_CpuFill8(&v8, 0, 0x14u);
  v8 = 2;
  v9 = v5;
  v10 = 5;
  v11 = v6;
  return Function_2262130(v4, &v8);
}

//----- (02266760) --------------------------------------------------------
int __fastcall Function_2266760(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  ++*(uint *)(a1 + 12240);
  Function_2264808(a1);
  return Function_226238c(v3, *(uchar *)(v2 + 6), *(uchar *)(v2 + 7));
}

//----- (02266784) --------------------------------------------------------
int __fastcall Function_2266784(int a1, short a2, char a3, char a4)
{
  int v4;
  short v5;
  char v6;
  char v7;
  int v9;
  short v10;
  char v11;
  char v12;
  char v13;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  MI_CpuFill8(&v9, 0, 0x14u);
  v9 = 3;
  v10 = v5;
  v11 = v6;
  v12 = 4;
  v13 = v7;
  return Function_2262130(v4, &v9);
}

//----- (022667B8) --------------------------------------------------------
int __fastcall Function_22667b8(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  *(uint *)(a1 + 12232) = *(ushort *)(a2 + 4);
  Function_2263af0(
    *(uint **)(a1 + 44),
    *(uchar *)(*(uint *)a1 + 48),
    *(uchar *)(a2 + 6),
    a1 + 5160);
  *(uint *)(v3 + 12236) = 1;
  return Function_226238c(v3, *(uchar *)(v2 + 7), *(uchar *)(v2 + 8));
}

//----- (022667F4) --------------------------------------------------------
int __fastcall Function_22667f4(int a1, char a2)
{
  int v2;
  char v3;
  int v5;
  char v6;
  char v7;

  v2 = a1;
  v3 = a2;
  MI_CpuFill8(&v5, 0, 0x14u);
  v5 = 4;
  v6 = 2;
  v7 = v3;
  return Function_2262130(v2, &v5);
}

//----- (02266820) --------------------------------------------------------
int __fastcall Function_2266820(int a1, int a2)
{
  *(uint *)(a1 + 32) = 3;
  return Function_226238c(a1, *(uchar *)(a2 + 4), *(uchar *)(a2 + 5));
}

//----- (02266834) --------------------------------------------------------
int __fastcall Function_2266834(int a1, char a2)
{
  int v2;
  char v3;
  int v5;
  char v6;
  char v7;

  v2 = a1;
  v3 = a2;
  MI_CpuFill8(&v5, 0, 0x14u);
  v5 = 5;
  v6 = 3;
  v7 = v3;
  return Function_2262130(v2, &v5);
}

//----- (02266860) --------------------------------------------------------
int __fastcall Function_2266860(int a1, int a2)
{
  *(uint *)(a1 + 12220) = 1;
  *(uint *)(a1 + 32) = 6;
  return Function_226238c(a1, *(uchar *)(a2 + 4), *(uchar *)(a2 + 5));
}

//----- (0226687C) --------------------------------------------------------
int __fastcall Function_226687c(int a1, char a2, char a3, int a4)
{
  int v4;
  char v5;
  char v6;
  int v8;
  char v9;
  char v10;
  int v11;

  v11 = a4;
  v4 = a1;
  v5 = a2;
  v6 = a3;
  MI_CpuFill8(&v8, 0, 0x14u);
  v8 = 6;
  v9 = v5;
  v10 = v6;
  return Function_2262130(v4, &v8);
}

//----- (022668A8) --------------------------------------------------------
int __fastcall Function_22668a8(int a1, int a2)
{
  return Function_226238c(a1, *(uchar *)(a2 + 4), *(uchar *)(a2 + 5));
}

//----- (022668B8) --------------------------------------------------------
int __fastcall Function_22668b8(int a1, char a2)
{
  int v2;
  char v3;
  int v5;
  char v6;
  char v7;

  v2 = a1;
  v3 = a2;
  MI_CpuFill8(&v5, 0, 0x14u);
  v5 = 7;
  v6 = 6;
  v7 = v3;
  return Function_2262130(v2, &v5);
}

//----- (022668E4) --------------------------------------------------------
int __fastcall Function_22668e4(int a1, int a2)
{
  *(uint *)(a1 + 32) = 1;
  return Function_226238c(a1, *(uchar *)(a2 + 4), *(uchar *)(a2 + 5));
}

