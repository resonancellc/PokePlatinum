//----- (0222DCE0) --------------------------------------------------------
int __fastcall Function_66_222dce0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint *v11;
  uchar *v12;
  int v13;
  int v14;
  uint *v15;
  int v16;

  v4 = a1;
  v5 = LoadOverlay(63, 2, a3, a4);
  v8 = LoadOverlay4(v5, v6, v7);
  LoadOverlay60(v8, v9, v10);
  Function_2017fc8(3, 104, 20480);
  v11 = (uint *)MallocSomeDataAndStorePtrInOverlayData1c(v4, 16, 0x68u);
  v12 = v11;
  v13 = 16;
  do
  {
    *v12++ = 0;
    --v13;
  }
  while ( v13 );
  v14 = LoadPtrToOverWorldDataIn18(v4);
  v15 = (uint *)v14;
  v16 = *(uint *)(v14 + 4);
  *v11 = v16;
  v11[1] = Function_222ddf0(v16);
  v11[2] = Function_2230c44(v15[2], v15[1], *v15, v11[1]);
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  v11[3] = AddTaskToTaskList3((int)Function_222dddc, (int)v11, 0);
  Function_2230cac(v11[2]);
  return 1;
}

//----- (0222DD6C) --------------------------------------------------------
BOOL __fastcall Function_66_222dd6c(int a1)
{
  int v1;
  int v2;

  v1 = LoadOverlayData1c(a1);
  v2 = Function_2230cb8(*(uint *)(v1 + 8));
  Function_222df58(*(uint *)(v1 + 4));
  return v2 == 1;
}

//----- (0222DD90) --------------------------------------------------------
int __fastcall Function_66_222dd90(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  int *v9;
  int v10;
  int v11;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  Call_RemoveTaskFromTaskList(*(int **)(v2 + 12));
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  Function_2230c90(*(uint *)(v2 + 8));
  Function_222deec(*(uint *)(v2 + 4));
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(104);
  v6 = UnloadOverlay(63, v3, v4, v5);
  v9 = UnloadOverlay60((int)v6, v7, v8);
  UnloadOverlay4((int)v9, v10, v11);
  return 1;
}

//----- (0222DDDC) --------------------------------------------------------
int __fastcall Function_222dddc(int a1, int a2)
{
  int v2;

  v2 = a2;
  Function_2230ce8(*(uint *)(a2 + 8));
  return Function_222dff4(*(uint *)(v2 + 4));
}

//----- (0222DDF0) --------------------------------------------------------
int *__fastcall Function_222ddf0(int a1, uint a2, int a3, int a4)
{
  uint v4;
  int v5;
  int *v6;
  int v7;
  int *v8;
  int *v9;
  int **v10;
  int (*v12)();
  int (*v13)();
  int (*v14)();
  int (*v15)();
  int (*v16)();
  int v17;

  v17 = a4;
  v4 = a2;
  v5 = a1;
  v6 = (int *)malloc(a2, 1328);
  Call_FillMemWithValue(v6, 0, 0x530u);
  *v6 = v5;
  v6[330] = v4;
  v12 = Function_222f1dc;
  v13 = Function_222f398;
  v14 = Function_222f458;
  v15 = Function_222f4c8;
  v16 = Function_222f684;
  Function_22324f0(
    v4,
    *v6,
    148,
    &v12,
    v6,
    Function_222f1dc,
    Function_222f398,
    Function_222f458,
    Function_222f4c8,
    Function_222f684,
    v17);
  v6[1] = Function_223177c(v4);
  v7 = 0;
  v8 = v6;
  do
  {
    v9 = AllocTrainerData(v4);
    v10 = (int **)(v8 + 58);
    ++v7;
    ++v8;
    *v10 = v9;
  }
  while ( v7 < 4 );
  Function_222f7c8(v6 + 66, *v6, v4);
  Function_222fc68(v6 + 112);
  Function_222fc58(v6 + 122);
  Function_2232d30(&dword_2258978[15], 8, v6);
  Function_222fb64(v6 + 127);
  Function_22302b0(v6 + 131);
  Function_22307d4(v6 + 235);
  Function_22308a0(v6 + 249, v4);
  Function_2230a6c(v6 + 303, *v6);
  Function_222fbf0(v6 + 322, v4);
  return v6;
}

//----- (0222DEEC) --------------------------------------------------------
uint __fastcall Function_222deec(int *a1)
{
  int *v1;
  uint *v2;
  int v3;
  int v4;
  int *v5;
  uint v6;
  int v8;
  int v9;

  v1 = a1;
  Function_222e908(a1 + 74, &v8);
  v2 = (uint *)LoadVariableAreaAdress_24(*v1);
  Function_2030ed8(v2, v8);
  Function_2030edc((int)v2, v9);
  Function_222fc00(v1 + 322);
  v3 = Function_22308bc(v1 + 249);
  Function_2232d90(v3);
  Function_22317ac(v1[1]);
  v4 = 0;
  v5 = v1;
  do
  {
    v6 = free(v5[58]);
    ++v4;
    ++v5;
  }
  while ( v4 < 4 );
  Function_2232598(v6);
  return free((int)v1);
}

//----- (0222DF58) --------------------------------------------------------
int __fastcall Function_222df58(int a1)
{
  int v1;
  int v2;
  uint *v3;
  int result;
  char v5;
  int v6;

  v1 = a1;
  Function_22317c0(*(uint *)(a1 + 4));
  Function_2232bc8(&v5);
  v2 = v6;
  v3 = (uint *)(v1 + 216);
  *v3 = *(uint *)&v5;
  v3[1] = v2;
  Function_2231428(v1 + 212);
  Function_222f768(v1);
  Function_222fd84(v1 + 448);
  Function_222fc58(v1 + 488);
  Function_222fa80(v1 + 248);
  Function_222fa88(v1 + 508, v1 + 248, v1 + 524, v1 + 1180);
  Function_222fbe0(v1 + 928);
  Function_22302d8(v1 + 524);
  Function_22309c8(v1 + 1180);
  result = Function_2230c04(v1 + 1212);
  if ( result == 1 )
  {
    result = 1324;
    *(uint *)(v1 + 1324) = 1;
  }
  return result;
}

//----- (0222DFF4) --------------------------------------------------------
void Function_222dff4()
{
  ;
}

//----- (0222DFF8) --------------------------------------------------------
int __fastcall Function_222dff8(int a1)
{
  return *(uint *)(a1 + 1324);
}

//----- (0222E004) --------------------------------------------------------
int Function_222e004()
{
  return Function_22328cc();
}

//----- (0222E00C) --------------------------------------------------------
int __fastcall Function_222e00c(int a1)
{
  return *(uint *)(a1 + 4);
}

//----- (0222E010) --------------------------------------------------------
int __fastcall Function_222e010(int a1)
{
  int v1;

  v1 = a1;
  Function_222f6c4(a1 + 264, a1 + 12);
  return v1 + 12;
}

//----- (0222E028) --------------------------------------------------------
int __fastcall Function_222e028(int a1)
{
  return a1 + 212;
}

//----- (0222E02C) --------------------------------------------------------
int __fastcall Function_222e02c(int a1, char a2)
{
  if ( !(*(uint *)(a1 + 248) & (1 << a2)) )
    return 0;
  *(uint *)(a1 + 248) &= ~(1 << a2);
  return 1;
}

//----- (0222E058) --------------------------------------------------------
int __fastcall Function_222e058(int a1, char a2)
{
  if ( !(*(uint *)(a1 + 252) & (1 << a2)) )
    return 0;
  *(uint *)(a1 + 252) &= ~(1 << a2);
  return 1;
}

//----- (0222E084) --------------------------------------------------------
int __fastcall Function_222e084(int a1, char a2)
{
  int v2;
  int result;

  v2 = *(uint *)(a1 + 256);
  result = 1;
  if ( !(v2 & (1 << a2)) )
    result = 0;
  return result;
}

//----- (0222E09C) --------------------------------------------------------
int __fastcall Function_222e09c(int a1, char a2)
{
  if ( !(*(uint *)(a1 + 260) & (1 << a2)) )
    return 0;
  *(uint *)(a1 + 260) &= ~(1 << a2);
  return 1;
}

//----- (0222E0C4) --------------------------------------------------------
int __fastcall Function_222e0c4(int a1)
{
  return *(uint *)a1;
}

//----- (0222E0C8) --------------------------------------------------------
int __fastcall Function_222e0c8(int a1)
{
  if ( !a1 )
    ErrorHandler();
  return Function_2232bec(4);
}

//----- (0222E0DC) --------------------------------------------------------
int __fastcall Function_222e0dc(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return *(uchar *)(v1 + 523) & 0xF;
}

//----- (0222E0F4) --------------------------------------------------------
uint __fastcall Function_222e0f4(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return (uint)*(uchar *)(v1 + 523) << 24 >> 28;
}

//----- (0222E10C) --------------------------------------------------------
int __fastcall Function_222e10c(int result)
{
  *(uchar *)(result + 523) = *(uchar *)(result + 523) & 0xF | 0x10;
  return result;
}

//----- (0222E120) --------------------------------------------------------
int __fastcall Function_222e120(int a1)
{
  return *(uchar *)(a1 + 508) & 1;
}

//----- (0222E12C) --------------------------------------------------------
uint __fastcall Function_222e12c(int a1)
{
  return (uint)*(uchar *)(a1 + 508) << 24 >> 31;
}

//----- (0222E138) --------------------------------------------------------
BOOL __fastcall Function_222e138(int a1)
{
  return (uint)*(uchar *)(a1 + 508) << 30 >> 31 == 1 && *(short *)(a1 + 512) <= 0;
}

//----- (0222E158) --------------------------------------------------------
uint __fastcall Function_222e158(int a1)
{
  uint result;

  if ( *(short *)(a1 + 516) > 0 )
    result = 0;
  else
    result = (uint)*(uchar *)(a1 + 508) << 28 >> 30;
  return result;
}

//----- (0222E170) --------------------------------------------------------
BOOL __fastcall Function_222e170(int a1)
{
  return (uint)*(uchar *)(a1 + 508) << 27 >> 31 == 1 && *(short *)(a1 + 518) <= 0;
}

//----- (0222E190) --------------------------------------------------------
uint __fastcall Function_222e190(int a1)
{
  return (uint)*(uchar *)(a1 + 508) << 25 >> 30;
}

//----- (0222E19C) --------------------------------------------------------
BOOL __fastcall Function_222e19c(int a1)
{
  return *(uint *)(a1 + 8) == 1 && *(short *)(a1 + 514) <= 0;
}

//----- (0222E1B8) --------------------------------------------------------
int __fastcall Function_222e1b8(int a1)
{
  int result;

  if ( *(short *)(a1 + 514) > 0 )
    result = 1;
  else
    result = *(uchar *)(a1 + 509);
  return result;
}

//----- (0222E1D0) --------------------------------------------------------
int __fastcall Function_222e1d0(int a1)
{
  int result;

  if ( *(short *)(a1 + 514) > 0 )
    result = 7;
  else
    result = *(uchar *)(a1 + 510);
  return result;
}

//----- (0222E1E8) --------------------------------------------------------
int __fastcall Function_222e1e8(int a1)
{
  int result;

  if ( *(short *)(a1 + 514) > 0 )
    result = 11;
  else
    result = *(uchar *)(a1 + 511);
  return result;
}

//----- (0222E200) --------------------------------------------------------
int __fastcall Function_222e200(int a1)
{
  return Function_222fbc8(a1 + 928);
}

//----- (0222E210) --------------------------------------------------------
int __fastcall Function_222e210(int a1)
{
  return Function_222fbd0(a1 + 928);
}

//----- (0222E220) --------------------------------------------------------
int __fastcall Function_222e220(int a1)
{
  return *(uint *)(a1 + 1292);
}

//----- (0222E22C) --------------------------------------------------------
int __fastcall Function_222e22c(int result, int a2)
{
  *(uint *)(result + 1292) = a2;
  return result;
}

//----- (0222E238) --------------------------------------------------------
int __fastcall Function_222e238(int a1)
{
  return MIi_CpuClear32(0, (uint *)(a1 + 992), 4);
}

//----- (0222E24C) --------------------------------------------------------
int __fastcall Function_222e24c(int a1, int a2, uint a3)
{
  uint v3;
  int v4;
  int v5;
  int v6;
  int result;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  if ( a3 >= 4 )
    ErrorHandler();
  v6 = Function_2232b78(v5);
  if ( v6 == -1 )
    ErrorHandler();
  result = 992;
  *(uchar *)(v4 + v3 + 992) = v6;
  return result;
}

//----- (0222E27C) --------------------------------------------------------
int __fastcall Function_222e27c(int a1, uint a2)
{
  int v2;
  uint v3;
  int v4;

  v2 = a1;
  v3 = a2;
  v4 = Function_22328f0();
  return Function_222e24c(v2, v4, v3);
}

//----- (0222E294) --------------------------------------------------------
int __fastcall Function_222e294(int a1, uint a2)
{
  return MI_CpuCopy8(a1 + 992, a2, 4u, (uint)MI_CpuCopy8);
}

//----- (0222E2A4) --------------------------------------------------------
int __fastcall Function_222e2a4(int a1)
{
  return Function_222fc4c(a1 + 928);
}

//----- (0222E2B4) --------------------------------------------------------
int __fastcall Function_222e2b4(int a1)
{
  return Function_222fc54(a1 + 928);
}

//----- (0222E2C4) --------------------------------------------------------
int __fastcall Function_222e2c4(int result, char a2)
{
  *(uchar *)(result + 520) = a2;
  return result;
}

//----- (0222E2CC) --------------------------------------------------------
int __fastcall Function_222e2cc(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( (uint)*(uchar *)(a1 + 508) << 27 >> 31 != 1 || *(short *)(a1 + 518) > 0 )
  {
    Function_2004550(0x15u, 0x4BCu);
    result = Function_222fbac(v1 + 508);
  }
  else
  {
    Function_2004550(0x15u, 0x4BDu);
    result = Function_222fbac(v1 + 508);
  }
  return result;
}

//----- (0222E31C) --------------------------------------------------------
int __fastcall Function_222e31c(int result, int a2)
{
  if ( a2 != *(uchar *)(result + 521) )
  {
    *(uchar *)(result + 521) = a2;
    result = Function_222fbac(result + 508);
  }
  return result;
}

//----- (0222E338) --------------------------------------------------------
int Function_222e338()
{
  int v0;

  v0 = Function_22328f0();
  return Function_2232b78(v0);
}

//----- (0222E344) --------------------------------------------------------
int Function_222e344()
{
  return Function_22328f0();
}

//----- (0222E34C) --------------------------------------------------------
BOOL __fastcall Function_222e34c(int a1, int a2)
{
  int v2;
  char v4;
  int v5;

  v2 = a2;
  Function_2232b20(&v4);
  return *(uint *)(v5 + 4 * v2) != -1;
}

//----- (0222E374) --------------------------------------------------------
int __fastcall Function_222e374(int a1, uint a2, int a3, int a4)
{
  uint v4;
  int v5;
  int v6;
  char v8;
  int v9;
  int v10;

  v10 = a4;
  v4 = a2;
  v5 = a1;
  if ( a2 >= 0x14 )
    ErrorHandler();
  Function_2232b20(&v8);
  v6 = *(uint *)(v9 + 4 * v4);
  if ( v6 == -1 )
    return 0;
  if ( v6 == Function_22328f0() )
    return v5 + 296;
  return Function_223293c(v6);
}

//----- (0222E3BC) --------------------------------------------------------
int __fastcall Function_222e3bc(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( !Function_222fa04(a1 + 66, *a1) )
    v1[331] = 1;
  return (int)(v1 + 74);
}

//----- (0222E3E4) --------------------------------------------------------
int __fastcall Function_222e3e4(uint *a1, int a2)
{
  int v2;
  uint *v3;
  int result;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 15 )
    ErrorHandler();
  if ( Function_222fa04(v3 + 66, *v3) )
  {
    result = *((uchar *)v3 + 363);
    if ( result != v2 )
    {
      if ( v2 != 9 && Function_222edf4(v3) == 1 )
      {
        if ( !Function_222ee08(v3) )
        {
          Function_2232ba0(*((ushort *)v3 + 226));
          Function_222fd50(v3, *((ushort *)v3 + 226));
        }
        Function_222fc84(v3 + 112);
      }
      switch ( *((uchar *)v3 + 363) )
      {
        case 2:
          Function_2230a9c(v3 + 303);
          break;
        case 3:
          Function_2230a9c(v3 + 303);
          break;
        case 4:
          Function_2230a9c(v3 + 303);
          break;
        case 5:
          Function_2230a9c(v3 + 303);
          break;
        case 6:
          Function_2230a9c(v3 + 303);
          break;
        case 7:
          Function_2230a9c(v3 + 303);
          break;
        case 8:
          Function_2230a9c(v3 + 303);
          break;
        default:
          break;
      }
      *((uchar *)v3 + 363) = v2;
      Function_222f9ec(v3 + 66, *v3);
      result = Function_222f964(v3);
    }
  }
  else
  {
    result = 1324;
    v3[331] = 1;
  }
  return result;
}

//----- (0222E500) --------------------------------------------------------
int __fastcall Function_222e500(int a1, int a2)
{
  int v2;

  v2 = a1;
  if ( a2 >= 24 )
    ErrorHandler();
  Function_2230a9c(v2 + 1212);
  return Function_222f964(v2);
}

//----- (0222E528) --------------------------------------------------------
int __fastcall Function_222e528(uint *a1, uint a2)
{
  char v2;
  uint *v3;
  int result;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0x1B )
    ErrorHandler();
  if ( Function_222fa04(v3 + 66, *v3) )
  {
    *((uchar *)v3 + 361) = v2;
    Function_222f9ec(v3 + 66, *v3);
    result = Function_222f964(v3);
  }
  else
  {
    result = 1324;
    v3[331] = 1;
  }
  return result;
}

//----- (0222E56C) --------------------------------------------------------
int __fastcall Function_222e56c(uint *a1, int a2, int a3)
{
  int v3;
  uint *v4;
  int v5;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( a2 >= 18 )
    ErrorHandler();
  if ( v5 >= 18 )
    ErrorHandler();
  result = Function_222fa04(v4 + 66, *v4);
  if ( result )
  {
    if ( v3 < 18 && v5 < 18 )
    {
      if ( v3 )
      {
        *((ushort *)v4 + 216) = v3;
        *((ushort *)v4 + 217) = v5;
      }
      else
      {
        *((ushort *)v4 + 216) = v5;
        *((ushort *)v4 + 217) = 0;
      }
      Function_222f9ec(v4 + 66, *v4);
      result = Function_222f964(v4);
    }
  }
  else
  {
    result = 1324;
    v4[331] = 1;
  }
  return result;
}

//----- (0222E5D8) --------------------------------------------------------
int __fastcall Function_222e5d8(uint *a1, int a2, uint a3)
{
  uint v3;
  uint *v4;
  int v5;
  int result;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  if ( a3 >= 3 )
    ErrorHandler();
  result = Function_222fa04(v4 + 66, *v4);
  if ( result )
  {
    if ( v3 < 3 )
    {
      v4[109] = v5;
      v4[110] = v3;
      *((uchar *)v4 + 523) = *((uchar *)v4 + 523) & 0xF0 | 1;
      Function_222f040(v4, 6);
      Function_222f9ec(v4 + 66, *v4);
      result = Function_222f964(v4);
    }
  }
  else
  {
    result = 1324;
    v4[331] = 1;
  }
  return result;
}

//----- (0222E640) --------------------------------------------------------
int __fastcall Function_222e640(int a1, ushort *a2, uint a3)
{
  int v3;
  ushort *v4;
  uint v5;
  int v6;
  int v7;
  int v8;
  ushort **v9;
  ushort *v10;
  int v11;
  int v12;
  char v13;
  char v14;
  char v15;
  ushort *v17;
  ushort *v18;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = 0;
  if ( Function_222f1b4(a1 + 8, 8) == 1 )
  {
    Function_2025ec0(v4, (ushort *)(v3 + 8));
    v17 = (ushort *)Function_2023790(32, v5);
    v18 = (ushort *)Function_2023790(32, v5);
    Function_2025ef4(v4, v18);
    if ( !Function_2002db4(0, (int)v18, v17) )
      v6 = 1;
    Function_20237bc_FreeMsg((int)v17, v7);
    Function_20237bc_FreeMsg((int)v18, v8);
  }
  else
  {
    v6 = 1;
  }
  if ( v6 )
  {
    v9 = (ushort **)LoadFromMsgNARC(1, 26, 673, v5);
    v10 = Function_200b1ec_CallMsgDecrypt(v9, 0x40u);
    Function_2025ee0(v4, (int)v10);
    Function_20237bc_FreeMsg((int)v10, v11);
    Function_200b190((ushort *)v9);
  }
  v12 = Function_222e79c(v3);
  SetTrainerID((int)v4, v12);
  v13 = Function_222e7c8(v3);
  SetGender((int)v4, v13);
  v14 = Function_222e858(v3);
  Function_2025f90((int)v4, v14);
  v15 = Function_222e80c(v3);
  Function_2025fdc((int)v4, v15);
  return Function_2025fe0((int)v4);
}

//----- (0222E71C) --------------------------------------------------------
uint __fastcall Function_222e71c(int a1)
{
  uint result;

  result = *(uchar *)(a1 + 67);
  if ( result >= 0xE )
    result = 14;
  return result;
}

//----- (0222E728) --------------------------------------------------------
int __fastcall Function_222e728(int a1, uint a2)
{
  uint v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0xC )
    ErrorHandler();
  v4 = 0;
  v5 = 0;
  do
  {
    if ( *(uchar *)(v3 + v5 + 76) < 0x18u )
      ++v4;
    if ( v4 - 1 == v2 )
      return *(uchar *)(v3 + v5 + 76);
    ++v5;
  }
  while ( v5 < 12 );
  return 24;
}

//----- (0222E760) --------------------------------------------------------
int __fastcall Function_222e760(int a1, uint a2)
{
  uint v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0xC )
    ErrorHandler();
  v4 = 0;
  v5 = 0;
  do
  {
    if ( *(uchar *)(v3 + v5 + 76) < 0x18u )
      ++v4;
    if ( v4 - 1 == v2 )
      return *(uint *)(v3 + 4 * v5 + 88);
    ++v5;
  }
  while ( v5 < 12 );
  return -1;
}

//----- (0222E798) --------------------------------------------------------
int __fastcall Function_222e798(int a1)
{
  return *(uint *)a1;
}

//----- (0222E79C) --------------------------------------------------------
int __fastcall Function_222e79c(int a1)
{
  return *(uint *)(a1 + 4);
}

//----- (0222E7A0) --------------------------------------------------------
int __fastcall Function_222e7a0(int a1)
{
  int v1;
  short *v2;
  int v3;

  v1 = Function_222e858(a1);
  v2 = &word_2258974;
  v3 = 0;
  do
  {
    if ( v1 == (ushort)*v2 )
      return v3;
    ++v3;
    v2 += 2;
  }
  while ( v3 < 16 );
  return 24;
}

//----- (0222E7C4) --------------------------------------------------------
int __fastcall Function_222e7c4(int a1)
{
  return *(uint *)(a1 + 28);
}

//----- (0222E7C8) --------------------------------------------------------
int __fastcall Function_222e7c8(int a1)
{
  int v1;
  int v2;
  uint v3;
  short *v4;
  uint v5;

  v2 = a1;
  v3 = *(uchar *)(a1 + 56);
  if ( v3 < 2 )
    return v3;
  if ( Function_2230c2c(*(ushort *)(v2 + 58)) == 0xFFFF )
    return 1;
  v4 = &word_2258974;
  v5 = 0;
  do
  {
    if ( *(ushort *)(v2 + 58) == (ushort)*v4 )
      v1 = (ushort)*v4;
    ++v5;
    v4 += 2;
  }
  while ( v5 < 0x10 );
  return v1;
}

//----- (0222E80C) --------------------------------------------------------
int __fastcall Function_222e80c(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( Function_222e824() == 1 )
    result = *(uchar *)(v1 + 57);
  else
    result = 2;
  return result;
}

//----- (0222E824) --------------------------------------------------------
int __fastcall Function_222e824(int a1)
{
  int result;

  switch ( *(uchar *)(a1 + 57) )
  {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 7:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

//----- (0222E850) --------------------------------------------------------
int __fastcall Function_222e850(int a1)
{
  return *(uchar *)(a1 + 57);
}

//----- (0222E858) --------------------------------------------------------
int __fastcall Function_222e858(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = Function_2230c2c(*(ushort *)(a1 + 58));
  if ( result == 0xFFFF )
  {
    if ( Function_222e7c8(v1) )
      result = 6;
    else
      result = 3;
  }
  return result;
}

//----- (0222E880) --------------------------------------------------------
int __fastcall Function_222e880(int a1)
{
  int v1;
  int result;
  int v3;

  v1 = a1;
  if ( *(ushort *)(a1 + 60) >= 0xEAu )
    return 0;
  v3 = *(uchar *)(a1 + 62);
  if ( Function_22316c4() )
    result = *(ushort *)(v1 + 60);
  else
    result = 0;
  return result;
}

//----- (0222E8A4) --------------------------------------------------------
int __fastcall Function_222e8a4(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( Function_22316c4(*(ushort *)(a1 + 60), *(uchar *)(a1 + 62)) )
    result = *(uchar *)(v1 + 62);
  else
    result = 0;
  return result;
}

//----- (0222E8C4) --------------------------------------------------------
uint __fastcall Function_222e8c4(int a1)
{
  uint result;

  result = *(uchar *)(a1 + 65);
  if ( result == 255 )
    return 0;
  if ( result >= 0x1B )
    result = 0;
  return result;
}

//----- (0222E8D8) --------------------------------------------------------
BOOL __fastcall Function_222e8d8(int a1)
{
  return *(uchar *)(a1 + 65) != 255;
}

//----- (0222E8E8) --------------------------------------------------------
uint __fastcall Function_222e8e8(int a1, uint a2)
{
  uint v2;
  int v3;
  uint result;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 2 )
    ErrorHandler();
  result = *(ushort *)(v3 + 2 * v2 + 136);
  if ( result >= 0x12 )
    result = 0;
  return result;
}

//----- (0222E908) --------------------------------------------------------
int __fastcall Function_222e908(int a1, uint *a2)
{
  uint *v2;
  int result;

  v2 = (uint *)(a1 + 140);
  result = *(uint *)(a1 + 144);
  *a2 = *v2;
  a2[1] = result;
  return result;
}

//----- (0222E918) --------------------------------------------------------
int __fastcall Function_222e918(int a1)
{
  return *(uint *)(a1 + 1288);
}

//----- (0222E924) --------------------------------------------------------
int __fastcall Function_222e924(int a1)
{
  return Function_2230884(a1 + 972);
}

//----- (0222E934) --------------------------------------------------------
int __fastcall Function_222e934(int a1, uint a2)
{
  return MI_CpuCopy8(a1 + 972, a2, 0x14u, (uint)MI_CpuCopy8);
}

//----- (0222E944) --------------------------------------------------------
int __fastcall Function_222e944(int a1)
{
  return Function_22308f8(a1 + 996);
}

//----- (0222E954) --------------------------------------------------------
int __fastcall Function_222e954(int a1)
{
  return Function_2230914(a1 + 996);
}

//----- (0222E964) --------------------------------------------------------
int __fastcall Function_222e964(int a1, int a2, int a3, int a4)
{
  int v5;
  int v6;

  v6 = a4;
  Function_2232b4c(&v5);
  return v5;
}

//----- (0222E974) --------------------------------------------------------
int __fastcall Function_222e974(int a1, int a2)
{
  int v2;
  int v3;

  v2 = Function_2232bb4(a2);
  v3 = -1;
  if ( v2 != -1 )
    v3 = Function_2232b78(v2);
  return v3;
}

//----- (0222E990) --------------------------------------------------------
int __fastcall Function_222e990(int a1, int a2, int a3, int a4)
{
  int v4;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v11 = a4;
  v4 = a3;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  BYTE1(v10) = 0;
  v6 = Function_2232ba0(a2);
  v7 = Function_2232ba0(v4);
  LOBYTE(v10) = 2;
  return Function_2232e00(4, &v6, 20);
}

//----- (0222E9CC) --------------------------------------------------------
int __fastcall Function_222e9cc(int a1, int a2, int a3, char a4)
{
  int v4;
  char v5;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v4 = a2;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  BYTE1(v11) = 1;
  v5 = a4;
  v7 = Function_2232ba0(a3);
  v8 = Function_2232ba0(v4);
  LOBYTE(v11) = 2;
  BYTE2(v11) = v5;
  return Function_2232e00(4, &v7, 20);
}

//----- (0222EA10) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x222EAB0 for default case"

//----- (0222EA54) --------------------------------------------------------
void __fastcall Function_222ea54(int _R0)
{
  JUMPOUT(!(_NF ^ _VF), byte_222EA58);
  __asm { LDCLT           p0, c11, [R0,#-0x14]! }
  JUMPOUT(*(uint *)byte_222EA58);
}

//----- (0222EAB4) --------------------------------------------------------
int __fastcall Function_222eab4(int a1, int a2, char a3, int a4, int a5, int a6, int a7)
{
  char v7;
  int result;
  char v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v7 = a2;
  result = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v9 = a3;
  v14 = 0;
  if ( !a2 || a2 == 1 || a2 == 2 )
  {
    BYTE1(v14) = 8;
    v10 = Function_2232ba0(a4);
    v11 = Function_2232ba0(a5);
    v12 = Function_2232ba0(a6);
    v13 = Function_2232ba0(a7);
    LOBYTE(v14) = v9;
    HIBYTE(v14) = HIBYTE(v14) & 0x80 | v7 & 0x7F;
    HIBYTE(v14) &= 0x7Fu;
    result = Function_2232e00(4, &v10, 20);
  }
  return result;
}

//----- (0222EB28) --------------------------------------------------------
uint Function_222eb28()
{
  uint result;

  result = Function_2232bec(3);
  if ( result >= 5 )
    result = 0;
  return result;
}

//----- (0222EB38) --------------------------------------------------------
uint Function_222eb38()
{
  uint result;

  result = Function_2232bec(2);
  if ( result >= 5 )
    result = 0;
  return result;
}

//----- (0222EB48) --------------------------------------------------------
int Function_222eb48()
{
  return Function_2232bec(5) + 30;
}

//----- (0222EB54) --------------------------------------------------------
int __fastcall Function_222eb54(int a1, uint a2)
{
  uint v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0x14 )
    ErrorHandler();
  return *(uchar *)(v3 + v2 + 488);
}

//----- (0222EB6C) --------------------------------------------------------
int __fastcall Function_222eb6c(int a1, int a2)
{
  int v3;

  v3 = a2;
  return Function_2232e00(5, &v3, 4);
}

//----- (0222EB7C) --------------------------------------------------------
int __fastcall Function_222eb7c(int a1)
{
  return Function_223040c(a1 + 524);
}

//----- (0222EB8C) --------------------------------------------------------
int __fastcall Function_222eb8c(int a1)
{
  return Function_2230424(a1 + 524);
}

//----- (0222EB9C) --------------------------------------------------------
int Function_222eb9c()
{
  return 1200;
}

//----- (0222EBA4) --------------------------------------------------------
int __fastcall Function_222eba4(int a1)
{
  return Function_22304dc(a1 + 524);
}

//----- (0222EBB4) --------------------------------------------------------
int __fastcall Function_222ebb4(int a1)
{
  return Function_2230330(a1 + 524);
}

//----- (0222EBC4) --------------------------------------------------------
int __fastcall Function_222ebc4(int a1)
{
  return Function_22303a8(a1 + 524);
}

//----- (0222EBD4) --------------------------------------------------------
int __fastcall Function_222ebd4(int a1)
{
  return Function_223043c(a1 + 524);
}

//----- (0222EBE4) --------------------------------------------------------
int __fastcall Function_222ebe4(int a1)
{
  return Function_2230474(a1 + 524);
}

//----- (0222EBF4) --------------------------------------------------------
int __fastcall Function_222ebf4(int a1)
{
  return Function_22304a8(a1 + 524);
}

//----- (0222EC04) --------------------------------------------------------
int __fastcall Function_222ec04(int a1, int *a2, uint *a3)
{
  int v3;
  uint *v4;
  int result;
  int v6;

  v3 = a1;
  v4 = a3;
  *a2 = u32_div_f(a1, 3);
  result = u32_div_f(v3, 3);
  *v4 = v6;
  return result;
}

//----- (0222EC20) --------------------------------------------------------
int __fastcall Function_222ec20(int a1)
{
  return Function_2230510(a1 + 524);
}

//----- (0222EC30) --------------------------------------------------------
int __fastcall Function_222ec30(int a1)
{
  return Function_2230580(a1 + 524);
}

//----- (0222EC40) --------------------------------------------------------
int __fastcall Function_222ec40(int a1, int a2, int a3, int a4)
{
  int v5;

  v5 = a4;
  return Function_2232e00(6, &v5, 4);
}

//----- (0222EC50) --------------------------------------------------------
int __fastcall Function_222ec50(int a1, int a2, int a3, int a4)
{
  int v5;

  v5 = a4;
  return Function_2232e00(7, &v5, 4);
}

//----- (0222EC60) --------------------------------------------------------
int __fastcall Function_222ec60(int a1)
{
  return Function_222fc74(a1 + 448);
}

//----- (0222EC70) --------------------------------------------------------
int __fastcall Function_222ec70(int a1, uint a2, int a3, int a4)
{
  int v4;
  uint v5;
  int v7;
  int v8;

  v4 = a1;
  v5 = a2;
  if ( *(uchar *)(a1 + 458) )
    return 0;
  v7 = Function_222e374(a1, a2, *(uchar *)(a1 + 458), a4);
  if ( Function_222e71c(v7) != 1 )
    return 0;
  *(ushort *)(v4 + 452) = v5;
  *(uchar *)(v4 + 454) = 1;
  *(uchar *)(v4 + 458) = 1;
  Function_222fd28(v4 + 448, 0);
  v8 = Function_2232ba0(v5);
  Function_2232e5c(0, v8, v4 + 480, 4);
  Function_222fd70(v4 + 448);
  return 1;
}

//----- (0222ECD4) --------------------------------------------------------
int __fastcall Function_222ecd4(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v7;
  int v8;

  v2 = a1;
  v3 = *(uchar *)(a1 + 458);
  v4 = 0;
  if ( v3 == 1 )
  {
    if ( *(uchar *)(v2 + 454) != 2 )
      v4 = 1;
  }
  else if ( v3 == 2 && *(uchar *)(v2 + 454) != 3 )
  {
    v4 = 1;
  }
  if ( v4 )
  {
    v5 = Function_2232ba0(*(ushort *)(v2 + 452));
    return Function_222fd50(v2, v5);
  }
  if ( v3 == 1 )
  {
    *(uchar *)(v2 + 454) = 3;
  }
  else
  {
    if ( v3 != 2 )
    {
      v7 = Function_2232ba0(*(ushort *)(v2 + 452));
      return Function_222fd50(v2, v7);
    }
    *(uchar *)(v2 + 454) = 2;
  }
  Function_222fd28(v2 + 448, a2);
  v8 = Function_2232ba0(*(ushort *)(v2 + 452));
  Function_2232e5c(2, v8, v2 + 480, 4);
  return Function_222fd70(v2 + 448);
}

//----- (0222ED7C) --------------------------------------------------------
int __fastcall Function_222ed7c(int a1)
{
  int v1;
  int result;
  int v3;

  v1 = a1;
  result = *(uchar *)(a1 + 454);
  if ( result )
  {
    result = *(uchar *)(v1 + 458);
    if ( result == 1 )
    {
      *(ushort *)(v1 + 482) = 0;
      v3 = Function_2232ba0(*(ushort *)(v1 + 452));
      Function_2232e5c(3, v3, v1 + 480, 4);
      result = Function_222fc74(v1 + 448);
    }
  }
  return result;
}

//----- (0222EDC0) --------------------------------------------------------
int __fastcall Function_222edc0(int a1)
{
  int v1;
  int result;
  int v3;

  v1 = a1;
  result = 454;
  if ( *(uchar *)(v1 + 454) )
  {
    v3 = Function_2232ba0(*(ushort *)(v1 + 452));
    *(uchar *)(v1 + 454) = 4;
    *(ushort *)(v1 + 482) = 4;
    result = Function_2232e5c(2, v3, v1 + 480, 4);
  }
  return result;
}

//----- (0222EDF4) --------------------------------------------------------
BOOL __fastcall Function_222edf4(int a1)
{
  return *(uchar *)(a1 + 458) != 0;
}

//----- (0222EE08) --------------------------------------------------------
BOOL __fastcall Function_222ee08(int a1)
{
  return *(uchar *)(a1 + 458) == 2;
}

//----- (0222EE1C) --------------------------------------------------------
int __fastcall Function_222ee1c(int a1)
{
  return *(ushort *)(a1 + 452);
}

//----- (0222EE24) --------------------------------------------------------
int __fastcall Function_222ee24(int a1)
{
  return *(uchar *)(a1 + 459);
}

//----- (0222EE30) --------------------------------------------------------
int __fastcall Function_222ee30(int a1)
{
  return *(uchar *)(a1 + 454);
}

//----- (0222EE3C) --------------------------------------------------------
int __fastcall Function_222ee3c(int a1)
{
  return *(ushort *)(a1 + 456);
}

//----- (0222EE44) --------------------------------------------------------
BOOL __fastcall Function_222ee44(int a1, uint a2)
{
  uint v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0x14 )
    ErrorHandler();
  return *(uchar *)(v3 + v2 + 460) < 6u;
}

//----- (0222EE68) --------------------------------------------------------
BOOL __fastcall Function_222ee68(int a1)
{
  BOOL result;

  if ( *(uchar *)(a1 + 454) == 4 )
    result = 1;
  else
    result = Function_222fd9c(a1 + 448) == 0;
  return result;
}

//----- (0222EE90) --------------------------------------------------------
int __fastcall Function_222ee90(int a1)
{
  return Function_222fdbc(a1 + 448);
}

//----- (0222EEA0) --------------------------------------------------------
int __fastcall Function_222eea0(int result)
{
  *(uchar *)(result + 455) = 1;
  return result;
}

//----- (0222EEAC) --------------------------------------------------------
int __fastcall Function_222eeac(int a1)
{
  return *(uchar *)(a1 + 455);
}

//----- (0222EEB8) --------------------------------------------------------
int __fastcall Function_222eeb8(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = Function_222edf4(a1);
  if ( result == 1 )
    result = Function_222fcf4(v1 + 448, *(ushort *)(v1 + 452));
  return result;
}

//----- (0222EED4) --------------------------------------------------------
int __fastcall Function_222eed4(int a1, int a2)
{
  return Function_222fcf4(a1 + 448, a2);
}

//----- (0222EEE4) --------------------------------------------------------
int __fastcall Function_222eee4(int a1)
{
  return Function_222fcbc(a1 + 448);
}

//----- (0222EEF4) --------------------------------------------------------
uint __fastcall Function_222eef4(int *a1, uint a2)
{
  int v2;
  uint v3;
  int v4;
  int v5;
  int v6;
  uint result;
  int v8;
  int *v9;
  ushort *v10;
  int *v11;

  v2 = (int)a1;
  v3 = a2;
  v4 = LoadVariableAreaAdress_12(*a1);
  result = Function_222e374(v2, v3, v5, v6);
  v8 = result;
  if ( result )
  {
    v9 = AllocTrainerData(0x70u);
    Function_222e640(v8, (ushort *)v9, 0x70u);
    Function_2025ef0_Dummy();
    v11 = Function_202c250(v10, *(uchar *)(v8 + 56), 0x70u, 22);
    Function_202b758(v4, (int)v11, 4u);
    result = free((int)v9);
  }
  return result;
}

//----- (0222EF44) --------------------------------------------------------
uint __fastcall Function_222ef44(int *a1, uint a2)
{
  int v2;
  uint v3;
  int v4;
  int v5;
  int v6;
  uint result;
  int v8;
  int *v9;
  ushort *v10;
  int *v11;

  v2 = (int)a1;
  v3 = a2;
  v4 = LoadVariableAreaAdress_12(*a1);
  result = Function_222e374(v2, v3, v5, v6);
  v8 = result;
  if ( result )
  {
    v9 = AllocTrainerData(0x70u);
    Function_222e640(v8, (ushort *)v9, 0x70u);
    Function_2025ef0_Dummy();
    v11 = Function_202c250(v10, *(uchar *)(v8 + 56), 0x70u, 23);
    Function_202b758(v4, (int)v11, 4u);
    result = free((int)v9);
  }
  return result;
}

//----- (0222EF94) --------------------------------------------------------
int *__fastcall Function_222ef94(int *a1, char a2)
{
  char v2;
  int *result;
  int v4;
  int v5;

  v2 = a2;
  result = (int *)LoadVariableAreaAdress_12(*a1);
  v4 = (int)result;
  switch ( (uchar)result )
  {
    case 0:
    case 1:
    case 2:
      result = Function_202c280(v2, 0x70u, 24);
      v5 = (int)result;
      break;
    case 3:
    case 4:
      result = Function_202c244(0x70u, 25);
      v5 = (int)result;
      break;
    case 5:
      result = Function_202c244(0x70u, 26);
      v5 = (int)result;
      break;
    case 6:
      result = Function_202c244(0x70u, 27);
      v5 = (int)result;
      break;
    default:
      v5 = 0;
      break;
  }
  if ( v5 )
    result = (int *)Function_202b758(v4, v5, 4u);
  return result;
}

//----- (0222F000) --------------------------------------------------------
uint __fastcall Function_222f000(int *a1)
{
  int v1;
  int *v2;

  v1 = LoadVariableAreaAdress_12(*a1);
  v2 = Function_202c244(0x70u, 28);
  return Function_202b758(v1, (int)v2, 4u);
}

//----- (0222F020) --------------------------------------------------------
int __fastcall Function_222f020(int *a1)
{
  int v1;

  v1 = LoadVariableAreaAdress_14(*a1);
  return Function_202cf28(v1, 46);
}

//----- (0222F030) --------------------------------------------------------
int __fastcall Function_222f030(int *a1)
{
  int v1;

  v1 = LoadVariableAreaAdress_14(*a1);
  return Function_202cf28(v1, 118);
}

//----- (0222F040) --------------------------------------------------------
int __fastcall Function_222f040(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 8 )
    ErrorHandler();
  result = 932;
  *(uchar *)(v3 + v2 + 932) = 1;
  return result;
}

//----- (0222F05C) --------------------------------------------------------
int __fastcall Function_222f05c(int a1)
{
  int v1;
  int v2;
  BOOL v3;

  v1 = 0;
  v2 = a1;
  do
  {
    if ( !*(uchar *)(v2 + v1 + 932) )
    {
      switch ( 0 )
      {
        case 0:
        case 1:
        case 2:
          v3 = Function_222e190(v2) != 1;
          break;
        case 3:
        case 4:
        case 5:
          v3 = Function_222e12c(v2) != 1;
          break;
        case 6:
          v3 = Function_222e19c(v2) != 1;
          break;
        default:
          v3 = 1;
          break;
      }
      if ( v3 == 1 )
        return v1;
    }
    ++v1;
  }
  while ( v1 < 8 );
  return 8;
}

//----- (0222F0DC) --------------------------------------------------------
int __fastcall Function_222f0dc(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_2230828(a1 + 940);
  Function_222e338();
  if ( Function_222e924(v1) == 1 )
    v2 += 2;
  return v2;
}

//----- (0222F104) --------------------------------------------------------
int __fastcall Function_222f104(int a1)
{
  return Function_2230a68(a1 + 1180);
}

//----- (0222F114) --------------------------------------------------------
int __fastcall Function_222f114(int a1)
{
  return Function_2230a64(a1 + 1180);
}

//----- (0222F124) --------------------------------------------------------
int __fastcall Function_222f124(int a1, int *a2)
{
  int *v2;
  uint *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int result;

  v2 = a2;
  *(uint *)(a1 + 1316) = 1;
  v3 = (uint *)(a1 + 1296);
  v4 = *a2;
  v5 = a2[1];
  v2 += 2;
  *v3 = v4;
  v3[1] = v5;
  v3 += 2;
  v6 = *v2;
  v7 = v2[1];
  v2 += 2;
  *v3 = v6;
  v3[1] = v7;
  result = *v2;
  v3[2] = *v2;
  return result;
}

//----- (0222F144) --------------------------------------------------------
int __fastcall Function_222f144(uint *a1, uint *a2)
{
  uint *v2;
  int v3;
  uint *v4;
  int v5;

  v2 = a2;
  if ( a1[329] != 1 )
    return 0;
  v3 = a1[325];
  *v2 = a1[324];
  v2[1] = v3;
  v4 = v2 + 2;
  v5 = a1[327];
  *v4 = a1[326];
  v4[1] = v5;
  v4[2] = a1[328];
  return 1;
}

//----- (0222F16C) --------------------------------------------------------
int __fastcall Function_222f16c(int *a1)
{
  int *v1;
  int v2;
  int result;

  v1 = a1;
  if ( a1[302] )
    ErrorHandler();
  v2 = LoadTrainerDataAdress(*v1);
  result = Function_207e060(v2, v1[330]);
  v1[302] = result;
  return result;
}

//----- (0222F198) --------------------------------------------------------
int __fastcall Function_222f198(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = *(uint *)(a1 + 1208);
  if ( result )
  {
    Call_free13(result);
    result = 1208;
    *(uint *)(v1 + 1208) = 0;
  }
  return result;
}

//----- (0222F1B4) --------------------------------------------------------
int __fastcall Function_222f1b4(ushort *a1, uint a2)
{
  uint v2;

  v2 = 0;
  if ( !a2 )
    return 0;
  while ( *a1 != 0xFFFF )
  {
    ++v2;
    ++a1;
    if ( v2 >= a2 )
      return 0;
  }
  return 1;
}

//----- (0222F1DC) --------------------------------------------------------
int __fastcall Function_222f1dc(int a1, int a2, uint *a3, int a4)
{
  int v4;
  uint *v5;
  int v6;
  int v7;
  uchar v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int result;
  int v15;
  int v16;
  char v17;

  v4 = a1;
  v5 = a3;
  v15 = a2;
  if ( a4 )
  {
    Function_222fc0c(a3 + 322, a3 + 66, a3[330]);
    if ( !Function_222fa04(v5 + 66, *v5) )
      v5[331] = 1;
    v6 = Function_2232b78(v4);
    Function_22317e4(v5[1], v6, *((uchar *)v5 + 352), 3);
    v5[74] = v4;
    Function_223295c(v4, &v17);
    Function_2231428(v5 + 80);
    v7 = Function_222e880((int)(v5 + 74));
    v8 = Function_222e8a4((int)(v5 + 74));
    v9 = Function_222e824((int)(v5 + 74));
    if ( v7 && v9 == 1 )
    {
      v5[81] = Function_2234ea8((ushort)v7, v8, v5[80], v5[330], v15);
    }
    else
    {
      *((uchar *)v5 + 324) = 12;
      *((uchar *)v5 + 325) = 0;
      *((uchar *)v5 + 326) = 0;
    }
    Function_222f9ec(v5 + 66, *v5);
    Function_222f964(v5);
  }
  else
  {
    v10 = Function_2232988();
    v11 = Function_2232b78(v4);
    v12 = Function_222e7c8(v15);
    Function_22317e4(v5[1], v11, v12, 0);
    if ( v10 == v4 )
      Function_223180c(v5[1], v11);
    if ( Function_2230af8(v5 + 303, v4, -1) )
      Function_222f964(v5);
  }
  v13 = Function_2232b78(v4);
  v5[62] |= 1 << v13;
  if ( Function_2233394(v4) == 1 )
  {
    Function_223086c(v5 + 243, v13, 1);
    v16 = v13;
    Function_2231b24(v5[1], &v16, v5 + 243);
    if ( Function_22333bc(v4) )
      result = Function_22308c8(v5 + 249, v13);
    else
      result = Function_22308c8(v5 + 249, v13);
  }
  else
  {
    Function_223086c(v5 + 243, v13, 0);
    result = Function_22308c8(v5 + 249, v13);
  }
  return result;
}

//----- (0222F398) --------------------------------------------------------
int __fastcall Function_222f398(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  int v6;
  int v7;

  v2 = a1;
  v3 = a2;
  result = Function_22328f0();
  if ( v2 != result )
  {
    v5 = Function_2232b78(v2);
    if ( Function_222edf4(v3) == 1 && v5 == Function_222ee1c(v3) )
      Function_222fc84(v3 + 448);
    if ( Function_22317f0(*(uint *)(v3 + 4), v5) )
    {
      v6 = Function_22329e4(v2);
      v7 = Function_2232b78(v6);
      Function_223180c(*(uint *)(v3 + 4), v7);
    }
    Function_223086c(v3 + 972, v5, 0);
    Function_222fd10(v3 + 448, v5);
    Function_222fcd8(v3 + 448, v5);
    if ( Function_2230af8(v3 + 1212, v2, -1) )
      Function_222f964(v3);
    Function_22308c8(v3 + 996, v5);
    result = *(uint *)(v3 + 252) | (1 << Function_2232b78(v2));
    *(uint *)(v3 + 252) = result;
  }
  return result;
}

//----- (0222F458) --------------------------------------------------------
int __fastcall Function_222f458(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;
  uint v7;

  v3 = a2;
  v4 = a3;
  v5 = Function_2232b78(a1);
  *(uint *)(v4 + 260) |= 1 << v5;
  switch ( (uchar)Function_222e71c(v3) )
  {
    case 2u:
    case 3u:
    case 4u:
    case 5u:
    case 6u:
    case 7u:
    case 8u:
      Function_222fd10(v4 + 448, v5);
      break;
    default:
      break;
  }
  result = Function_222e8d8(v3);
  if ( result == 1 )
  {
    v7 = Function_222e8c4(v3);
    result = Function_22307f0(v4 + 940, v7, v5);
  }
  return result;
}

//----- (0222F4C8) --------------------------------------------------------
int __fastcall Function_222f4c8(uint a1, int a2, int a3, int a4)
{
  int v4;
  uint v5;
  int v6;
  int v7;
  int v8;
  uint *v9;
  int result;
  int v11;
  uint *v12;
  int v13;
  int v14;
  char v15;
  int v16;
  int v17;

  v17 = a4;
  v5 = a1;
  v6 = a2;
  v7 = 0;
  Function_2235fd8(&v15);
  Function_2231428(v6 + 212);
  v8 = v16;
  v9 = (uint *)(v6 + 216);
  *v9 = *(uint *)&v15;
  v9[1] = v8;
  result = v6 + 224;
  if ( v5 <= 0x13 )
    JUMPOUT(__CS__, (char *)&off_222F4FE + *((short *)&off_222F4FE + v5) + 2);
  switch ( (uchar)v6 )
  {
    case 0x20:
      Function_22317d8(*(uint *)(v6 + 4), v6 + 212);
      v11 = *(uint *)(v6 + 220);
      v12 = (uint *)(v6 + 224);
      *v12 = *(uint *)(v6 + 216);
      v12[1] = v11;
      *(uchar *)(v6 + 508) = *(uchar *)(v6 + 508) & 0xFE | 1;
      result = *(uint *)(v6 + 256) | 1;
      *(uint *)(v6 + 256) = result;
      break;
    case 0x21:
      goto LABEL_7;
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
      if ( !*(uint *)(v6 + 8) )
      {
        v7 = 1;
        *(uint *)(v6 + 8) = 1;
        v4 = 0;
        *(ushort *)(v6 + 514) = 300;
      }
LABEL_7:
      *(uchar *)(v6 + 509) = v5;
      result = 256;
      *(uint *)(v6 + 256) |= 2u;
      break;
    case 0x27:
      goto LABEL_10;
    case 0x28:
    case 0x29:
    case 0x2A:
      if ( !*(uint *)(v6 + 8) )
      {
        v7 = 1;
        *(uint *)(v6 + 8) = 1;
        v4 = 0;
        *(ushort *)(v6 + 514) = 300;
      }
LABEL_10:
      *(uchar *)(v6 + 510) = v5;
      result = 256;
      *(uint *)(v6 + 256) |= 4u;
      break;
    case 0x2B:
      goto LABEL_13;
    case 0x2C:
    case 0x2D:
    case 0x2E:
      if ( !*(uint *)(v6 + 8) )
      {
        v7 = 1;
        *(uint *)(v6 + 8) = 1;
        v4 = 0;
        *(ushort *)(v6 + 514) = 300;
      }
LABEL_13:
      *(uchar *)(v6 + 511) = v5;
      result = 256;
      *(uint *)(v6 + 256) |= 8u;
      break;
    case 0x2F:
      *(uchar *)(v6 + 508) = *(uchar *)(v6 + 508) & 0x9F | 0x20;
      result = 256;
      *(uint *)(v6 + 256) |= 0x10u;
      break;
    case 0x30:
      v7 = 1;
      v4 = 1;
      v13 = Function_2232bec(6);
      v14 = Function_2232bec(7);
      Function_22309a4(v6 + 1180, v13, v14);
      result = 516;
      *(ushort *)(v6 + 516) = 300;
      break;
    case 0x31:
      *(uchar *)(v6 + 508) = *(uchar *)(v6 + 508) & 0xF3 | 8;
      result = 256;
      *(uint *)(v6 + 256) |= 0x20u;
      break;
    case 0x32:
      result = 518;
      v7 = 1;
      v4 = 2;
      *(ushort *)(v6 + 518) = 300;
      break;
    case 0x33:
      v7 = 1;
      *(uchar *)(v6 + 508) |= 0x80u;
      result = 512;
      v4 = 4;
      *(ushort *)(v6 + 512) = 900;
      break;
    default:
      break;
  }
  if ( v7 )
    result = Function_2230298(v6, v4);
  return result;
}

//----- (0222F684) --------------------------------------------------------
int __fastcall Function_222f684(int a1, int a2, uint *a3)
{
  int v3;
  uint *v4;
  int v5;
  int result;

  v3 = a1;
  v4 = a3;
  v5 = a2;
  if ( Function_222fa04(a3 + 66, *a3) )
  {
    Function_222fa28(v4 + 66, v3, v5);
    result = Function_222f9ec(v4 + 66, *v4);
  }
  else
  {
    result = 1324;
    v4[331] = 1;
  }
  return result;
}

//----- (0222F6C4) --------------------------------------------------------
int __fastcall Function_222f6c4(int a1, int *a2)
{
  int *v2;
  int v3;
  ushort v4;
  uchar v5;
  int v6;
  int v7;
  int v8;
  int v9;
  ushort v10;
  uchar v11;
  int v12;
  int v13;
  int v14;
  int result;
  char v16;
  int v17;

  v2 = a2;
  v3 = a1;
  Call_FillMemWithValue(a2, 0, 0xC8u);
  Function_2232b20(&v16);
  v3 += 32;
  v4 = Function_222e880(v3);
  v5 = Function_222e8a4(v3);
  Function_2231560(v2, v4, v5, 0);
  v6 = 0;
  v7 = 0;
  do
  {
    v8 = *(uint *)(v17 + v7);
    if ( v8 != -1 )
    {
      v9 = Function_223293c(v8);
      v10 = Function_222e880(v9);
      v11 = Function_222e8a4(v9);
      Function_2231560(v2, v10, v11, 0);
    }
    ++v6;
    v7 += 4;
  }
  while ( v6 < 20 );
  v12 = 0;
  do
  {
    v13 = (uchar)Function_2232cd4((uchar)v12);
    v14 = Function_2232d00((uchar)v12);
    result = Function_2231560(v2, v13, v14, 1);
    ++v12;
  }
  while ( v12 < 20 );
  return result;
}

//----- (0222F768) --------------------------------------------------------
int __fastcall Function_222f768(int a1)
{
  int v1;
  ll v2;
  int v3;
  uint v4;
  uint v5;
  uchar v6;

  v1 = a1;
  LODWORD(v2) = *(uchar *)(a1 + 508);
  if ( (v2 & 1) == 1 )
  {
    LODWORD(v2) = (uint)v2 << 24 >> 31;
    if ( !(uint)v2 )
    {
      LODWORD(v2) = Function_223287c();
      if ( (uint)v2 == 2 )
      {
        v3 = Function_222eb48();
        v4 = *(uint *)(v1 + 216);
        v5 = *(uint *)(v1 + 220);
        v6 = __OFSUB__(
               ((ull)(uint)v3 + *(ull *)(v1 + 224)) >> 32,
               v5 + (v3 + *(uint *)(v1 + 224) < v4));
        v2 = (uint)v3 + *(ull *)(v1 + 224) - __PAIR__(v5, v4);
        if ( (v2 < 0) ^ v6 )
        {
          *(uchar *)(v1 + 508) |= 0x80u;
          LODWORD(v2) = 512;
          *(ushort *)(v1 + 512) = 900;
        }
      }
    }
  }
  return v2;
}

//----- (0222F7C8) --------------------------------------------------------
int __fastcall Function_222f7c8(int a1, int a2, uint a3)
{
  int v3;
  uint v4;
  ushort *v5;
  int v6;
  int v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  int v12;
  uint *v13;
  int v14;
  int v15;
  ushort *v16;
  int v18;
  int v19;
  int v20;
  uint *v21;
  int v22;
  uint *v23;
  ushort *v24;

  v3 = a1;
  v18 = a2;
  v4 = a3;
  v24 = (ushort *)LoadTrainerDataAdress(a2);
  v23 = (uint *)LoadPokePartyAdress(v18);
  v21 = (uint *)LoadPokedexDataAdress(v18);
  v22 = Function_202c878(v18);
  v20 = Function_2025cd8(v18);
  v5 = Function_2025f04(v24, v4);
  Function_2023df0((int)v5, (uchar *)(v3 + 40), 8u);
  Function_2023df0((int)v5, (uchar *)v3, 8u);
  Function_20237bc_FreeMsg((int)v5, v6);
  *(uint *)(v3 + 32) = -1;
  *(uint *)(v3 + 36) = GetTrainerID((int)v24);
  v19 = GetNrOfPkmnInParty((int)v23);
  v7 = 0;
  v8 = v3;
  do
  {
    if ( v7 >= v19 )
    {
      *(ushort *)(v8 + 64) = 495;
    }
    else
    {
      v9 = GetAdrOfPkmnInParty(v23, v7);
      *(ushort *)(v8 + 64) = GetPkmnData(v9, 5u, 0);
      *(uchar *)(v3 + v7 + 76) = GetPkmnData(v9, 0x70u, 0);
      *(uchar *)(v3 + v7 + 82) = GetPkmnData(v9, 0x4Cu, 0);
    }
    ++v7;
    v8 += 2;
  }
  while ( v7 < 6 );
  *(uchar *)(v3 + 88) = GetGender((int)v24);
  *(uchar *)(v3 + 89) = Function_2025fd8((int)v24);
  *(ushort *)(v3 + 90) = Function_2025f8c((int)v24);
  *(ushort *)(v3 + 90) = Function_2230c0c(*(ushort *)(v3 + 90));
  *(ushort *)(v3 + 92) = Function_202c8c0(v22);
  *(uchar *)(v3 + 94) = Function_202c8c4(v22);
  *(uchar *)(v3 + 95) = Function_2027474(v21);
  *(uchar *)(v3 + 96) = Function_2025ff0((int)v24);
  *(uchar *)(v3 + 97) = -1;
  v10 = 0;
  *(uchar *)(v3 + 99) = 0;
  *(uchar *)(v3 + 98) = 12;
  v11 = v3;
  v12 = *(uint *)(v20 + 40);
  v13 = (uint *)(v3 + 100);
  *v13 = *(uint *)(v20 + 36);
  v13[1] = v12;
  do
  {
    *(uchar *)(v3 + v10 + 108) = 24;
    *(uint *)(v11 + 120) = -1;
    ++v10;
    v11 += 4;
  }
  while ( v10 < 12 );
  v14 = 0;
  v15 = v3;
  do
  {
    v16 = (ushort *)(v15 + 168);
    ++v14;
    v15 += 2;
    *v16 = 0;
  }
  while ( v14 < 2 );
  *(uint *)(v3 + 172) = -1;
  *(uint *)(v3 + 176) = 3;
  return Function_222f9ec(v3, v18);
}

//----- (0222F964) --------------------------------------------------------
int __fastcall Function_222f964(uint *a1)
{
  uint *v1;
  int result;
  int v3;
  uint *v4;
  uint v5;
  uint v6;

  v1 = a1;
  if ( Function_222fa04(a1 + 66, *a1) )
  {
    v3 = 0;
    v4 = v1;
    do
    {
      *((uchar *)v1 + v3 + 372) = Function_2230b78(v1 + 303, v3);
      v4[96] = Function_2230ba4(v1 + 303, v3++);
      ++v4;
    }
    while ( v3 < 12 );
    MI_CpuCopy8((int)(v1 + 70), (uint)(v1 + 76), 0x10u, v5);
    Function_2232908(v1 + 74);
    MI_CpuCopy8((int)(v1 + 66), (uint)(v1 + 76), 0x10u, v6);
    result = Function_222f9ec(v1 + 66, *v1);
  }
  else
  {
    result = 1324;
    v1[331] = 1;
  }
  return result;
}

//----- (0222F9EC) --------------------------------------------------------
int __fastcall Function_222f9ec(int a1, int a2)
{
  int v2;
  int result;

  v2 = a1;
  result = Function_202486c(a2, (uchar *)(a1 + 32), 0x94u);
  *(uint *)(v2 + 180) = result;
  return result;
}

//----- (0222FA04) --------------------------------------------------------
int __fastcall Function_222fa04(int a1, int a2)
{
  if ( Function_202486c(a2, (uchar *)(a1 + 32), 0x94u) == *(uint *)(a1 + 180) )
    return 1;
  ErrorHandler();
  return 0;
}

//----- (0222FA28) --------------------------------------------------------
int __fastcall Function_222fa28(int a1, int *a2, uint a3)
{
  int v3;
  int v4;
  uint v5;
  int *v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  uint v11;
  uint v12;

  v3 = a1;
  v4 = (int)a2;
  v5 = a3;
  v6 = a2;
  v7 = (int *)(a1 + 32);
  v8 = 18;
  do
  {
    v9 = *v6;
    v10 = v6[1];
    v6 += 2;
    *v7 = v9;
    v7[1] = v10;
    v7 += 2;
    --v8;
  }
  while ( v8 );
  *v7 = *v6;
  if ( v5 > 0x94 )
    MI_CpuCopy8(v4, v3 + 32, 0x94u, (uint)v7);
  else
    MI_CpuCopy8(v4, v3 + 32, v5, (uint)v7);
  MI_CpuCopy8(v4 + 8, v3 + 16, 0x10u, v11);
  return MI_CpuCopy8(v3, v3 + 40, 0x10u, v12);
}

//----- (0222FA80) --------------------------------------------------------
int __fastcall Function_222fa80(int result)
{
  *(uint *)(result + 8) = 0;
  return result;
}

//----- (0222FA88) --------------------------------------------------------
int __fastcall Function_222fa88(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int result;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = *(short *)(a1 + 4);
  v8 = a4;
  if ( v7 - 1 < 0 )
  {
    if ( !*(ushort *)(a1 + 4) )
    {
      *(uchar *)a1 |= 2u;
      *(uint *)(a2 + 8) |= 0x80u;
      --*(ushort *)(a1 + 4);
    }
  }
  else
  {
    *(ushort *)(a1 + 4) = v7 - 1;
    if ( *(ushort *)(a1 + 4) == 840 )
    {
      Function_200564c(0, 127);
      *(uchar *)(v5 + 14) = 1;
    }
  }
  v9 = *(short *)(v5 + 6);
  if ( v9 - 1 < 0 )
  {
    if ( !*(ushort *)(v5 + 6) )
    {
      *(uint *)(v4 + 8) |= 0xEu;
      --*(ushort *)(v5 + 6);
    }
  }
  else
  {
    *(ushort *)(v5 + 6) = v9 - 1;
  }
  v10 = *(short *)(v5 + 8);
  if ( v10 - 1 < 0 )
  {
    if ( !*(ushort *)(v5 + 8) )
    {
      *(uchar *)v5 = *(uchar *)v5 & 0xF3 | 4;
      *(uint *)(v4 + 8) |= 0x20u;
      --*(ushort *)(v5 + 8);
      Function_22309b4(v8);
    }
  }
  else
  {
    *(ushort *)(v5 + 8) = v10 - 1;
  }
  result = *(short *)(v5 + 10) - 1;
  if ( result < 0 )
  {
    if ( !*(ushort *)(v5 + 10) )
    {
      Function_22302d0(v6);
      if ( !*(uchar *)(v5 + 12) )
        Function_200549c(0x4BDu);
      *(uchar *)v5 |= 0x10u;
      *(uint *)(v4 + 8) |= 0x40u;
      result = *(short *)(v5 + 10) - 1;
      *(ushort *)(v5 + 10) = result;
    }
  }
  else
  {
    *(ushort *)(v5 + 10) = result;
  }
  return result;
}

//----- (0222FB64) --------------------------------------------------------
int __fastcall Function_222fb64(int result)
{
  *(uchar *)result &= 0xFEu;
  *(uchar *)result &= 0xFDu;
  *(uchar *)result &= 0xF3u;
  *(uchar *)result &= 0xEFu;
  *(uchar *)result &= 0x9Fu;
  *(uchar *)result &= 0x7Fu;
  *(uchar *)(result + 1) = 1;
  *(uchar *)(result + 2) = 7;
  *(uchar *)(result + 3) = 11;
  *(ushort *)(result + 4) = -1;
  *(ushort *)(result + 6) = -1;
  *(ushort *)(result + 8) = -1;
  *(ushort *)(result + 10) = -1;
  return result;
}

//----- (0222FBAC) --------------------------------------------------------
char *__fastcall Function_222fbac(int a1)
{
  char *result;

  if ( *(uchar *)(a1 + 13) == 1 )
    result = Function_200544c(7, 42);
  else
    result = Function_200544c(7, 127);
  return result;
}

//----- (0222FBC8) --------------------------------------------------------
ushort *__fastcall Function_222fbc8(ushort *result)
{
  *result = 900;
  return result;
}

//----- (0222FBD0) --------------------------------------------------------
int __fastcall Function_222fbd0(short *a1)
{
  int v1;

  v1 = 0;
  if ( *a1 > 0 )
    v1 = 1;
  return v1;
}

//----- (0222FBE0) --------------------------------------------------------
ushort *__fastcall Function_222fbe0(ushort *result)
{
  int v1;

  v1 = (short)*result;
  if ( v1 > 0 )
    *result = v1 - 1;
  return result;
}

//----- (0222FBF0) --------------------------------------------------------
int *__fastcall Function_222fbf0(int **a1, uint a2)
{
  int **v2;
  int *result;

  v2 = a1;
  result = AllocTrainerData(a2);
  *v2 = result;
  return result;
}

//----- (0222FC00) --------------------------------------------------------
uint __fastcall Function_222fc00(int *a1)
{
  return free(*a1);
}

//----- (0222FC0C) --------------------------------------------------------
uint __fastcall Function_222fc0c(ushort **a1, int a2, uint a3)
{
  uint v3;
  ushort **v4;
  int v5;
  uint *v6;
  uint v7;
  uint v8;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = (uint *)malloc(a3, 148);
  MIi_CpuCopyFast((uint *)(v5 + 32), v6, 0x94u, v7);
  MI_CpuCopy8(v5 + 16, (uint)(v6 + 2), 0x10u, v8);
  Function_222e640((int)v6, *v4, v3);
  return free((int)v6);
}

//----- (0222FC4C) --------------------------------------------------------
int __fastcall Function_222fc4c(int result)
{
  *(uchar *)(result + 2) = 1;
  return result;
}

//----- (0222FC54) --------------------------------------------------------
int __fastcall Function_222fc54(int a1)
{
  return *(uchar *)(a1 + 2);
}

//----- (0222FC58) --------------------------------------------------------
uchar *__fastcall Function_222fc58(uchar *result)
{
  int v1;

  v1 = 20;
  do
  {
    *result++ = 0;
    --v1;
  }
  while ( v1 );
  return result;
}

//----- (0222FC68) --------------------------------------------------------
int *__fastcall Function_222fc68(int *a1)
{
  return Call_FillMemWithValue(a1, 0, 0x28u);
}

//----- (0222FC74) --------------------------------------------------------
int __fastcall Function_222fc74(int a1)
{
  *(ushort *)(a1 + 4) = 0;
  *(uchar *)(a1 + 6) = 0;
  *(uchar *)(a1 + 10) = 0;
  return Function_222fd7c();
}

//----- (0222FC84) --------------------------------------------------------
int __fastcall Function_222fc84(int a1)
{
  int v1;
  int result;

  v1 = a1;
  *(ushort *)(a1 + 4) = 0;
  *(uchar *)(a1 + 6) = 4;
  Function_222fd7c();
  result = 0;
  *(uchar *)(v1 + 10) = 0;
  return result;
}

//----- (0222FC9C) --------------------------------------------------------
int __fastcall Function_222fc9c(uint *a1, uint a2)
{
  char v2;
  uint *v3;
  int result;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0x14 )
    ErrorHandler();
  result = 1;
  if ( !((1 << v2) & *v3) )
    result = 0;
  return result;
}

//----- (0222FCBC) --------------------------------------------------------
int __fastcall Function_222fcbc(int *a1, uint a2)
{
  char v2;
  int *v3;
  int result;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0x14 )
    ErrorHandler();
  result = (1 << v2) | *v3;
  *v3 = result;
  return result;
}

//----- (0222FCD8) --------------------------------------------------------
int __fastcall Function_222fcd8(int *a1, uint a2)
{
  char v2;
  int *v3;
  int result;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0x14 )
    ErrorHandler();
  result = ~(1 << v2) & *v3;
  *v3 = result;
  return result;
}

//----- (0222FCF4) --------------------------------------------------------
int __fastcall Function_222fcf4(int a1, uint a2)
{
  uint v2;
  int v3;
  int v4;
  int result;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0x14 )
    ErrorHandler();
  v4 = v3 + 12;
  result = *(uchar *)(v4 + v2) + 1;
  if ( result <= 6 )
    *(uchar *)(v4 + v2) = result;
  return result;
}

//----- (0222FD10) --------------------------------------------------------
int __fastcall Function_222fd10(int a1, uint a2)
{
  uint v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0x14 )
    ErrorHandler();
  result = v3 + v2;
  *(uchar *)(v3 + v2 + 12) = 0;
  return result;
}

//----- (0222FD28) --------------------------------------------------------
int __fastcall Function_222fd28(int result, short a2)
{
  *(ushort *)(result + 34) = *(uchar *)(result + 6);
  *(ushort *)(result + 32) = a2;
  return result;
}

//----- (0222FD30) --------------------------------------------------------
int __fastcall Function_222fd30(int a1, int a2, short a3)
{
  *(ushort *)(a1 + 482) = 2;
  *(ushort *)(a1 + 480) = a3;
  return Function_2232e5c(1, a2, a1 + 480, 4);
}

//----- (0222FD50) --------------------------------------------------------
int __fastcall Function_222fd50(int a1, int a2)
{
  *(uchar *)(a1 + 454) = 4;
  *(ushort *)(a1 + 482) = 4;
  return Function_2232e5c(2, a2, a1 + 480, 4);
}

//----- (0222FD70) --------------------------------------------------------
int __fastcall Function_222fd70(int result)
{
  *(ushort *)(result + 36) = 1;
  *(ushort *)(result + 38) = 0;
  return result;
}

//----- (0222FD7C) --------------------------------------------------------
int __fastcall Function_222fd7c(int result)
{
  *(ushort *)(result + 36) = 0;
  *(ushort *)(result + 38) = 0;
  return result;
}

//----- (0222FD84) --------------------------------------------------------
int __fastcall Function_222fd84(int result)
{
  int v1;

  if ( *(ushort *)(result + 36) == 1 )
  {
    v1 = *(short *)(result + 38) + 1;
    if ( v1 <= 900 )
      *(ushort *)(result + 38) = v1;
  }
  return result;
}

//----- (0222FD9C) --------------------------------------------------------
BOOL __fastcall Function_222fd9c(int a1)
{
  BOOL result;

  if ( *(ushort *)(a1 + 36) )
    result = *(short *)(a1 + 38) < 900;
  else
    result = 1;
  return result;
}

//----- (0222FDBC) --------------------------------------------------------
int __fastcall Function_222fdbc(int a1)
{
  return *(short *)(a1 + 38);
}

//----- (0222FDC4) --------------------------------------------------------
int __fastcall Function_222fdc4(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int result;
  int v6;
  uint *v7;
  uint *v8;
  uint v9;
  int v10;
  int v11;
  int v12;
  uint *v13;
  int v14;
  int v15;
  short v16;
  short v17;
  int v18;

  v18 = a4;
  v4 = a1;
  result = *(uchar *)(a2 + 16);
  v13 = (uint *)a2;
  if ( result == 2 )
  {
    v6 = 0;
    v7 = (uint *)a2;
    v8 = v4;
    while ( 1 )
    {
      v9 = Function_2232b78(*v7);
      result = -1;
      if ( v9 == -1 )
        break;
      v12 = Function_222e374((int)v4, v9, v10, v11);
      Function_222e640(v12, (ushort *)v8[58], v4[330]);
      ++v6;
      ++v7;
      ++v8;
      if ( v6 >= 2 )
      {
        v14 = v4[58];
        v15 = v4[59];
        v16 = Function_2232b78(*v13);
        v17 = Function_2232b78(v13[1]);
        return Function_223185c(v4[1], &v14);
      }
    }
  }
  return result;
}

//----- (0222FE40) --------------------------------------------------------
int __fastcall Function_222fe40(uint *a1, int a2)
{
  uint *v2;
  int result;
  int v4;
  uint *v5;
  uint *v6;
  uint v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  short v14;
  short v15;
  int v16;

  v2 = a1;
  result = *(uchar *)(a2 + 16);
  v11 = a2;
  if ( result == 2 )
  {
    v4 = 0;
    v5 = (uint *)a2;
    v6 = v2;
    while ( 1 )
    {
      v7 = Function_2232b78(*v5);
      result = -1;
      if ( v7 == -1 )
        break;
      v10 = Function_222e374((int)v2, v7, v8, v9);
      Function_222e640(v10, (ushort *)v6[58], v2[330]);
      ++v4;
      ++v5;
      ++v6;
      if ( v4 >= 2 )
      {
        v12 = v2[58];
        v13 = v2[59];
        v14 = Function_2232b78(*(uint *)v11);
        v15 = Function_2232b78(*(uint *)(v11 + 4));
        v16 = *(uchar *)(v11 + 18);
        return Function_22318ac(v2[1], &v12);
      }
    }
  }
  return result;
}

//----- (0222FEC0) --------------------------------------------------------
uint __fastcall Function_222fec0(int a1, int a2, int a3, int a4)
{
  int v4;
  uint result;
  int *v6;
  int v7;
  int v8;
  uint v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  uint v15;
  int v16;
  int v17;
  int v18;
  int v19;
  uint *v20;
  uint *v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  short v28;
  short v29;
  short v30;
  short v31;
  uint v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;

  v37 = a4;
  v4 = a1;
  result = *(uchar *)(a2 + 16);
  v19 = a2;
  if ( result <= 4 && *(uchar *)(a2 + 16) )
  {
    v6 = &v33;
    if ( (uint)*(uchar *)(a2 + 19) << 24 >> 31 == 1 )
    {
      v7 = 0;
      v20 = (uint *)a2;
      v8 = v4;
      do
      {
        if ( v7 >= *(uchar *)(v19 + 16) )
        {
          *v6 = 0;
        }
        else
        {
          v9 = Function_2232b78(*v20);
          result = -1;
          if ( v9 == -1 )
            return result;
          v12 = Function_222e374(v4, v9, v10, v11);
          Function_222e640(v12, *(ushort **)(v8 + 232), *(uint *)(v4 + 1320));
          *v6 = *(uint *)(v8 + 232);
        }
        ++v7;
        ++v20;
        v8 += 4;
        ++v6;
      }
      while ( v7 < 4 );
    }
    else
    {
      v13 = 0;
      v21 = (uint *)a2;
      v14 = v4;
      do
      {
        if ( v13 )
        {
          *v6 = 0;
        }
        else
        {
          v15 = Function_2232b78(*v21);
          result = -1;
          if ( v15 == -1 )
            return result;
          v18 = Function_222e374(v4, v15, v16, v17);
          Function_222e640(v18, *(ushort **)(v14 + 232), *(uint *)(v4 + 1320));
          *v6 = *(uint *)(v14 + 232);
        }
        ++v13;
        ++v21;
        v14 += 4;
        ++v6;
      }
      while ( v13 < 4 );
    }
    v22 = *(uchar *)(v19 + 19) & 0x7F;
    v23 = *(uchar *)(v19 + 16);
    v24 = v33;
    v25 = v34;
    v26 = v35;
    v27 = v36;
    v28 = Function_2232b78(*(uint *)v19);
    v29 = Function_2232b78(*(uint *)(v19 + 4));
    v30 = Function_2232b78(*(uint *)(v19 + 8));
    v31 = Function_2232b78(*(uint *)(v19 + 12));
    v32 = (uint)*(uchar *)(v19 + 19) << 24 >> 31;
    result = Function_2231908(*(uint *)(v4 + 4), &v22);
  }
  return result;
}

//----- (0222FFF4) --------------------------------------------------------
uint __fastcall Function_222fff4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint result;
  uint v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  short v14;
  int v15;

  v15 = a4;
  v4 = a2;
  v5 = a1;
  result = *(uchar *)(a2 + 16);
  if ( result <= 8 && *(uchar *)(a2 + 16) )
  {
    v7 = Function_2232b78(*(uint *)a2);
    result = -1;
    if ( v7 != -1 )
    {
      v10 = Function_222e374(v5, v7, v8, v9);
      Function_222e640(v10, *(ushort **)(v5 + 232), *(uint *)(v5 + 1320));
      v11 = *(uchar *)(v4 + 19) & 0x7F;
      v12 = *(uchar *)(v4 + 16);
      v13 = *(uint *)(v5 + 232);
      v14 = Function_2232b78(*(uint *)v4);
      result = Function_223199c(*(uint *)(v5 + 4), &v11);
    }
  }
  return result;
}

//----- (02230058) --------------------------------------------------------
uint __fastcall Function_2230058(int a1, int a2)
{
  uint result;
  int v3;
  int v4;
  uint *v5;
  int *v6;
  uint v7;
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
  short v18;
  short v19;
  short v20;
  short v21;
  int v22;
  int v23;
  int v24;
  int v25;

  v11 = a1;
  result = *(uchar *)(a2 + 16);
  v12 = a2;
  if ( result <= 4 && *(uchar *)(a2 + 16) )
  {
    v3 = v11;
    v4 = 0;
    v5 = (uint *)a2;
    v6 = &v22;
    do
    {
      if ( v4 >= *(uchar *)(v12 + 16) )
      {
        *v6 = 0;
      }
      else
      {
        v7 = Function_2232b78(*v5);
        result = -1;
        if ( v7 == -1 )
          return result;
        v10 = Function_222e374(v11, v7, v8, v9);
        Function_222e640(v10, *(ushort **)(v3 + 232), *(uint *)(v11 + 1320));
        *v6 = *(uint *)(v3 + 232);
      }
      ++v4;
      ++v5;
      v3 += 4;
      ++v6;
    }
    while ( v4 < 4 );
    v13 = *(uchar *)(v12 + 16);
    v14 = v22;
    v15 = v23;
    v16 = v24;
    v17 = v25;
    v18 = Function_2232b78(*(uint *)v12);
    v19 = Function_2232b78(*(uint *)(v12 + 4));
    v20 = Function_2232b78(*(uint *)(v12 + 8));
    v21 = Function_2232b78(*(uint *)(v12 + 12));
    result = Function_22319fc(*(uint *)(v11 + 4), &v13);
  }
  return result;
}

//----- (02230114) --------------------------------------------------------
uint __fastcall Function_2230114(int a1, int a2)
{
  uint result;
  int v3;
  int v4;
  uint *v5;
  int *v6;
  uint v7;
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
  short v18;
  short v19;
  short v20;
  short v21;
  int v22;
  int v23;
  int v24;
  int v25;

  v11 = a1;
  result = *(uchar *)(a2 + 16);
  v12 = a2;
  if ( result <= 4 && *(uchar *)(a2 + 16) )
  {
    v3 = v11;
    v4 = 0;
    v5 = (uint *)a2;
    v6 = &v22;
    do
    {
      if ( v4 >= *(uchar *)(v12 + 16) )
      {
        *v6 = 0;
      }
      else
      {
        v7 = Function_2232b78(*v5);
        result = -1;
        if ( v7 == -1 )
          return result;
        v10 = Function_222e374(v11, v7, v8, v9);
        Function_222e640(v10, *(ushort **)(v3 + 232), *(uint *)(v11 + 1320));
        *v6 = *(uint *)(v3 + 232);
      }
      ++v4;
      ++v5;
      v3 += 4;
      ++v6;
    }
    while ( v4 < 4 );
    v13 = *(uchar *)(v12 + 16);
    v14 = v22;
    v15 = v23;
    v16 = v24;
    v17 = v25;
    v18 = Function_2232b78(*(uint *)v12);
    v19 = Function_2232b78(*(uint *)(v12 + 4));
    v20 = Function_2232b78(*(uint *)(v12 + 8));
    v21 = Function_2232b78(*(uint *)(v12 + 12));
    result = Function_2231a58(*(uint *)(v11 + 4), &v13);
  }
  return result;
}

//----- (022301D0) --------------------------------------------------------
uint __fastcall Function_22301d0(int a1, int a2, int a3, int a4)
{
  uint result;
  int v5;
  int v6;
  uint *v7;
  int *v8;
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
  short v21;
  short v22;
  short v23;
  short v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;

  v29 = a4;
  v13 = a1;
  result = *(uchar *)(a2 + 16);
  v14 = a2;
  if ( result <= 4 && *(uchar *)(a2 + 16) )
  {
    v5 = v13;
    v6 = 0;
    v7 = (uint *)a2;
    v8 = &v25;
    do
    {
      if ( v6 >= *(uchar *)(v14 + 16) )
      {
        *v8 = 0;
      }
      else
      {
        v9 = Function_2232b78(*v7);
        result = -1;
        if ( v9 == -1 )
          return result;
        v12 = Function_222e374(v13, v9, v10, v11);
        Function_222e640(v12, *(ushort **)(v5 + 232), *(uint *)(v13 + 1320));
        *v8 = *(uint *)(v5 + 232);
      }
      ++v6;
      ++v7;
      v5 += 4;
      ++v8;
    }
    while ( v6 < 4 );
    v15 = *(uchar *)(v14 + 19) & 0x7F;
    v16 = *(uchar *)(v14 + 16);
    v17 = v25;
    v18 = v26;
    v19 = v27;
    v20 = v28;
    v21 = Function_2232b78(*(uint *)v14);
    v22 = Function_2232b78(*(uint *)(v14 + 4));
    v23 = Function_2232b78(*(uint *)(v14 + 8));
    v24 = Function_2232b78(*(uint *)(v14 + 12));
    result = Function_2231b80(*(uint *)(v13 + 4), &v15);
  }
  return result;
}

//----- (02230294) --------------------------------------------------------
void Function_2230294()
{
  ;
}

//----- (02230298) --------------------------------------------------------
int __fastcall Function_2230298(int a1, int a2, int a3, int a4)
{
  int v5;
  int v6;
  int v7;

  v7 = a4;
  v6 = a2;
  v5 = a1 + 212;
  return Function_2231ab4(*(uint *)(a1 + 4), &v5);
}

//----- (022302B0) --------------------------------------------------------
int __fastcall Function_22302b0(int *a1)
{
  int *v1;

  v1 = a1;
  Call_FillMemWithValue(a1, 0, 0x194u);
  return MIi_CpuClear32(-1, v1 + 20, 108);
}

//----- (022302D0) --------------------------------------------------------
uint *__fastcall Function_22302d0(uint *result)
{
  *result = 1;
  return result;
}

//----- (022302D8) --------------------------------------------------------
uint *__fastcall Function_22302d8(uint *result)
{
  int *v1;
  int v2;
  uint *v3;
  int v4;
  int v5;

  if ( *result )
  {
    v1 = &dword_225892C;
    v2 = 0;
    v3 = result;
    do
    {
      if ( result[1] == *v1 )
        v3[11] = 1;
      if ( v3[11] == 1 )
      {
        v4 = v3[2] + 1;
        if ( v4 > 1200 )
          v3[11] = 2;
        else
          v3[2] = v4;
      }
      ++v2;
      ++v1;
      ++v3;
    }
    while ( v2 < 9 );
    v5 = result[1] + 1;
    if ( v5 <= 4320 )
      result[1] = v5;
  }
  return result;
}

//----- (02230330) --------------------------------------------------------
int __fastcall Function_2230330(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v8;
  int v9;

  v3 = a1;
  v8 = a2;
  v4 = a3;
  if ( Function_22304dc(a1) != -1 )
    return -1;
  v5 = 0;
  v9 = 0;
  while ( Function_223040c(v3) == 2 )
  {
LABEL_9:
    v5 += 3;
    if ( ++v9 >= 9 )
      return -1;
  }
  v6 = 0;
  while ( Function_2230544(v3, v6 + v5, v4) || Function_22303dc(v3, v6 + v5) != -1 )
  {
    if ( ++v6 >= 3 )
      goto LABEL_9;
  }
  *(uint *)(v3 + 12 * v9 + 4 * v6 + 80) = v8;
  return v6 + v5;
}

//----- (022303A8) --------------------------------------------------------
int __fastcall Function_22303a8(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  result = Function_22304dc(a1);
  v3 = result;
  if ( result != -1 )
  {
    v4 = u32_div_f(result, 3);
    u32_div_f(v3, 3);
    result = -1;
    *(uint *)(v1 + 12 * v4 + 4 * v5 + 80) = -1;
  }
  return result;
}

//----- (022303DC) --------------------------------------------------------
int __fastcall Function_22303dc(int a1, uint a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0x1B )
    ErrorHandler();
  v4 = u32_div_f(v2, 3);
  u32_div_f(v2, 3);
  return *(uint *)(v3 + 12 * v4 + 4 * v5 + 80);
}

//----- (0223040C) --------------------------------------------------------
int __fastcall Function_223040c(int a1, uint a2)
{
  uint v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 9 )
    ErrorHandler();
  return *(uint *)(v3 + 4 * v2 + 44);
}

//----- (02230424) --------------------------------------------------------
int __fastcall Function_2230424(int a1, uint a2)
{
  uint v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 9 )
    ErrorHandler();
  return *(uint *)(v3 + 4 * v2 + 8);
}

//----- (0223043C) --------------------------------------------------------
int __fastcall Function_223043c(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  result = Function_22304dc(a1);
  v3 = result;
  if ( result != -1 )
  {
    v4 = u32_div_f(result, 3);
    u32_div_f(v3, 3);
    result = 1;
    *(uint *)(v1 + 12 * v4 + 4 * v5 + 296) = 1;
  }
  return result;
}

//----- (02230474) --------------------------------------------------------
int __fastcall Function_2230474(int a1, uint a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0x1B )
    ErrorHandler();
  v4 = u32_div_f(v2, 3);
  u32_div_f(v2, 3);
  return *(uint *)(v3 + 12 * v4 + 4 * v5 + 296);
}

//----- (022304A8) --------------------------------------------------------
int __fastcall Function_22304a8(int a1, uint a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0x1B )
    ErrorHandler();
  v4 = u32_div_f(v2, 3);
  u32_div_f(v2, 3);
  result = 0;
  *(uint *)(v3 + 12 * v4 + 4 * v5 + 296) = 0;
  return result;
}

//----- (022304DC) --------------------------------------------------------
int __fastcall Function_22304dc(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = 0;
  do
  {
    v3 = 0;
    v4 = a1;
    do
    {
      if ( a2 == *(uint *)(v4 + 80) )
        return v3 + 3 * v2;
      ++v3;
      v4 += 4;
    }
    while ( v3 < 3 );
    ++v2;
    a1 += 12;
  }
  while ( v2 < 9 );
  return -1;
}

//----- (02230510) --------------------------------------------------------
int __fastcall Function_2230510(int a1, uint a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( a2 >= 0x1B )
    ErrorHandler();
  v6 = u32_div_f(v3, 3);
  u32_div_f(v3, 3);
  result = v5 + 1;
  *(uint *)(v4 + 12 * v6 + 4 * v7 + 188) = v5 + 1;
  return result;
}

//----- (02230544) --------------------------------------------------------
BOOL __fastcall Function_2230544(int a1, uint a2, uint a3)
{
  int v3;
  int v4;
  uint v5;
  int v6;
  int v7;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( a2 >= 0x1B )
    ErrorHandler();
  v6 = u32_div_f(v3, 3);
  u32_div_f(v3, 3);
  return *(uint *)(v4 + 12 * v6 + 4 * v7 + 188) > v5;
}

//----- (02230580) --------------------------------------------------------
int __fastcall Function_2230580(int a1, uint a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0x1B )
    ErrorHandler();
  v4 = u32_div_f(v2, 3);
  u32_div_f(v2, 3);
  return *(uint *)(v3 + 12 * v4 + 4 * v5 + 188);
}

//----- (022305B0) --------------------------------------------------------
int __fastcall Function_22305b0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint v6;
  uint v7;
  BOOL v8;
  int v10;

  v4 = a1;
  v10 = a2;
  v5 = a4;
  v6 = Function_2232b78(a1);
  if ( !Function_222fa04(v5 + 264, *(uint *)v5) )
    *(uint *)(v5 + 1324) = 1;
  v7 = Function_222e71c(v5 + 296);
  v8 = Function_222edf4(v5);
  if ( v7 != 1 || v6 == -1 || *(ushort *)(v10 + 2) != 1 || v8 == 1 || !Function_222ee44(v5, v6) )
    return Function_222fd30(v5, v4, 0);
  Function_222fd30(v5, v4, 1);
  *(uchar *)(v5 + 459) = Function_222fc9c((uint *)(v5 + 448), v6) == 0;
  *(ushort *)(v5 + 452) = v6;
  *(uchar *)(v5 + 454) = 2;
  *(uchar *)(v5 + 458) = 2;
  *(uchar *)(v5 + 455) = 0;
  return Function_222fd70(v5 + 448);
}

//----- (02230664) --------------------------------------------------------
int __fastcall Function_2230664(int a1, ushort *a2, int a3, int a4)
{
  ushort *v4;
  int v5;
  uint v6;
  int result;

  v4 = a2;
  v5 = a4;
  v6 = Function_2232b78(a1);
  result = *(uchar *)(v5 + 458);
  if ( *(uchar *)(v5 + 458) )
  {
    result = *(ushort *)(v5 + 452);
    if ( result == v6 )
    {
      if ( *v4 == 1 )
      {
        *(uchar *)(v5 + 459) = Function_222fc9c((uint *)(v5 + 448), v6) == 0;
        *(uchar *)(v5 + 454) = 2;
      }
      else
      {
        Function_222fc74(v5 + 448);
      }
      result = Function_222fd7c(v5 + 448);
    }
  }
  return result;
}

//----- (022306C4) --------------------------------------------------------
int __fastcall Function_22306c4(int result, ushort *a2, int a3, int a4)
{
  ushort *v4;
  int v5;
  int v6;

  v4 = a2;
  v5 = a4;
  if ( *(uchar *)(a4 + 458) )
  {
    result = Function_2232b78(result);
    if ( *(ushort *)(v5 + 452) == result )
    {
      v6 = (ushort)v4[1];
      if ( ((v6 + 65534) & 0xFFFFu) > 1 )
      {
        result = Function_222fc84(v5 + 448);
      }
      else
      {
        *(uchar *)(v5 + 454) = v6;
        *(ushort *)(v5 + 456) = *v4;
        result = Function_222fd7c(v5 + 448);
      }
    }
    else if ( result == -1 )
    {
      result = Function_222fc84(v5 + 448);
    }
  }
  return result;
}

//----- (02230728) --------------------------------------------------------
int __fastcall Function_2230728(int result, int a2, int a3, int a4)
{
  int v4;

  v4 = a4;
  if ( *(uchar *)(a4 + 454) )
  {
    result = Function_2232b78(result);
    if ( *(ushort *)(v4 + 452) == result )
      result = Function_222fc74(v4 + 448);
  }
  return result;
}

//----- (02230750) --------------------------------------------------------
int __fastcall Function_2230750(int a1, int a2, int a3, int a4)
{
  return ((int (__fastcall *)(int))*(&off_2258950 + *(uchar *)(a2 + 17)))(a4);
}

//----- (02230764) --------------------------------------------------------
int __fastcall Function_2230764(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;

  v4 = a4;
  result = Function_2232b78(a1);
  if ( result != -1 )
  {
    v6 = v4 + result;
    result = 488;
    *(uchar *)(v6 + 488) = 1;
  }
  return result;
}

//----- (02230780) --------------------------------------------------------
int __fastcall Function_2230780(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int result;
  int v7;

  v4 = a4;
  v5 = Function_2232b78(a1);
  result = -1;
  if ( v5 != -1 )
  {
    v7 = 0;
    do
    {
      result = Function_2230330(v4 + 524, v5, v7);
      if ( result != -1 )
        break;
      ++v7;
    }
    while ( v7 < 3 );
  }
  return result;
}

//----- (022307B4) --------------------------------------------------------
int __fastcall Function_22307b4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int result;

  v4 = a4;
  v5 = Function_2232b78(a1);
  result = -1;
  if ( v5 != -1 )
    result = Function_223043c(v4 + 524);
  return result;
}

//----- (022307D4) --------------------------------------------------------
int __fastcall Function_22307d4(int *a1)
{
  int *v1;
  int v2;
  int result;

  v1 = a1;
  Call_FillMemWithValue(a1, 0, 0x20u);
  v2 = 0;
  result = 100;
  do
    *((uchar *)v1 + v2++) = 100;
  while ( v2 < 9 );
  return result;
}

//----- (022307F0) --------------------------------------------------------
int __fastcall Function_22307f0(int a1, uint a2, uint a3)
{
  uint v3;
  int v4;
  uint v5;
  int result;
  int v7;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  if ( a3 >= 0x14 )
    ErrorHandler();
  if ( v5 >= 0x1B )
    ErrorHandler();
  result = *(uchar *)(v4 + 12 + v3);
  if ( !*(uchar *)(v4 + 12 + v3) )
  {
    v7 = u32_div_f(v5, 3);
    *(uchar *)(v4 + v7) = (int)*(uchar *)(v4 + v7) >> 1;
    result = 1;
    *(uchar *)(v4 + 12 + v3) = 1;
  }
  return result;
}

//----- (02230828) --------------------------------------------------------
int __fastcall Function_2230828(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  uint v6;
  uint v7;
  int v8;
  int v10;

  v1 = 0;
  v2 = a1;
  v3 = 0;
  do
  {
    v4 = *(uchar *)(v2 + v3++);
    v1 += v4;
  }
  while ( v3 < 9 );
  v5 = Function_201d35c();
  u32_div_f(v5, v1);
  v7 = 0;
  v8 = 0;
  do
  {
    if ( v7 <= v6 && v7 + *(uchar *)(v2 + v8) > v6 )
      return 3 * v8;
    v10 = *(uchar *)(v2 + v8++);
    v7 += v10;
  }
  while ( v8 < 9 );
  ErrorHandler();
  return 0;
}

//----- (0223086C) --------------------------------------------------------
uint __fastcall Function_223086c(uint result, uint a2, char a3)
{
  uint v3;
  uint v4;
  char v5;

  v3 = a2;
  v4 = result;
  v5 = a3;
  if ( a2 >= 0x14 )
    result = ErrorHandler();
  if ( v3 < 0x14 )
    *(uchar *)(v4 + v3) = v5;
  return result;
}

//----- (02230884) --------------------------------------------------------
int __fastcall Function_2230884(int a1, uint a2)
{
  uint v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0x14 )
    ErrorHandler();
  if ( v2 >= 0x14 )
    result = 0;
  else
    result = *(uchar *)(v3 + v2);
  return result;
}

//----- (022308A0) --------------------------------------------------------
uint *__fastcall Function_22308a0(ushort *a1, uint a2)
{
  uint v2;
  ushort *v3;
  uint *result;

  v2 = a2;
  v3 = a1;
  MI_CpuFill8(a1, 0, 0xB8u);
  result = Function_2014fb0(v2);
  *((uint *)v3 + 45) = result;
  return result;
}

//----- (022308BC) --------------------------------------------------------
uint __fastcall Function_22308bc(int a1)
{
  return Function_2014ff0(*(uint *)(a1 + 180));
}

//----- (022308C8) --------------------------------------------------------
uint __fastcall Function_22308c8(uint result, uint a2, int a3, int a4)
{
  uint v4;
  uint v5;
  int v6;
  int v7;

  v4 = a2;
  v5 = result;
  v6 = a3;
  v7 = a4;
  if ( a2 >= 0x14 )
    result = ErrorHandler();
  if ( v4 < 0x14 )
  {
    *(uchar *)(v5 + v4) = v6;
    if ( v6 == 1 )
      result = Function_2230938(*(uint *)(v5 + 180), v7, v5 + 20 + 8 * v4);
  }
  return result;
}

//----- (022308F8) --------------------------------------------------------
int __fastcall Function_22308f8(int a1, uint a2)
{
  uint v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0x14 )
    ErrorHandler();
  if ( v2 >= 0x14 )
    result = 0;
  else
    result = *(uchar *)(v3 + v2);
  return result;
}

//----- (02230914) --------------------------------------------------------
int __fastcall Function_2230914(int a1, uint a2)
{
  uint v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0x14 )
    ErrorHandler();
  if ( v2 < 0x14 && *(uchar *)(v3 + v2) )
    result = v3 + 20 + 8 * v2;
  else
    result = 0;
  return result;
}

//----- (02230938) --------------------------------------------------------
int __fastcall Function_2230938(int a1, int a2, ushort *a3)
{
  int v3;
  uint *v4;
  ushort *v5;
  int v6;
  uint v7;
  uint v8;
  uint v9;
  uint v10;
  int result;

  v3 = a2;
  v4 = (uint *)a1;
  v5 = a3;
  v6 = Function_2015004(a1);
  u32_div_f(HIBYTE(v3) + (uchar)v3, v6);
  *v5 = Function_2015008(v4, v7);
  u32_div_f((uchar)v3 + BYTE1(v3), v6);
  v5[1] = Function_2015008(v4, v8);
  u32_div_f(BYTE1(v3) + BYTE2(v3), v6);
  v5[2] = Function_2015008(v4, v9);
  u32_div_f(BYTE2(v3) + HIBYTE(v3), v6);
  result = Function_2015008(v4, v10);
  v5[3] = result;
  return result;
}

//----- (022309A4) --------------------------------------------------------
uint *__fastcall Function_22309a4(uint *result, int a2, int a3)
{
  *result = 0;
  result[3] = 0;
  result[4] = 30 * (a3 - a2);
  return result;
}

//----- (022309B4) --------------------------------------------------------
int __fastcall Function_22309b4(uint *a1)
{
  *a1 = 1;
  a1[3] = 0;
  return Function_2232bc8(a1 + 1);
}

//----- (022309C8) --------------------------------------------------------
int __fastcall Function_22309c8(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int result;
  long long v6;
  int v7;
  uint v8;
  uint v9;
  char *v10;
  uint v11;
  int v12;
  long long v13;
  int v14;

  v14 = a4;
  v4 = a1;
  result = *a1;
  if ( result )
  {
    Function_2232bc8(&v13);
    v6 = ll_mul(v13 - *(ull *)(v4 + 1), 30LL);
    if ( v4[3] < v6 )
      v4[3] = v6;
    v7 = v4[3];
    if ( v7 >= v4[4] )
    {
      if ( v4[5] != 5 )
      {
        v4[5] = 5;
        v4[6] = 0;
      }
      if ( (uint)v4[6] >= 0x78 )
      {
        v4[5] = 0;
        *v4 = 0;
      }
    }
    else
    {
      v4[3] = v7 + 1;
      v8 = s32_div_f((v7 + 1) << 8, v4[4]);
      v9 = 0;
      v10 = byte_2258918;
      v11 = 0;
      while ( 1 )
      {
        v9 += *((ushort *)v10 + 1);
        if ( v9 >= v8 )
          break;
        ++v11;
        v10 += 4;
        if ( v11 >= 5 )
          goto LABEL_15;
      }
      v12 = *(ushort *)&byte_2258918[4 * v11];
      if ( v4[5] != v12 )
      {
        v4[5] = v12;
        v4[6] = 0;
      }
    }
LABEL_15:
    result = v4[6] + 1;
    v4[6] = result;
  }
  return result;
}

//----- (02230A64) --------------------------------------------------------
int __fastcall Function_2230a64(int a1)
{
  return *(uint *)(a1 + 24);
}

//----- (02230A68) --------------------------------------------------------
int __fastcall Function_2230a68(int a1)
{
  return *(uint *)(a1 + 20);
}

//----- (02230A6C) --------------------------------------------------------
int __fastcall Function_2230a6c(int a1, int a2)
{
  int v2;
  uint *v3;

  v2 = 0;
  v3 = (uint *)a1;
  do
  {
    *(uchar *)(a1 + v2++ + 52) = 24;
    *v3 = -1;
    ++v3;
  }
  while ( v2 < 13 );
  *(uchar *)(a1 + 65) = 0;
  *(uchar *)(a1 + 66) = 0;
  *(uint *)(a1 + 68) = a2;
  return Function_2230bcc();
}

//----- (02230A9C) --------------------------------------------------------
int __fastcall Function_2230a9c(int a1, char a2, int a3)
{
  int v3;
  char v4;
  int v5;
  int v6;
  char v7;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_2230be0();
  s32_div_f(*(uchar *)(v3 + 66) + 1, 13);
  if ( v6 == *(uchar *)(v3 + 65) )
    Function_2230b28(v3);
  *(uchar *)(v3 + *(uchar *)(v3 + 66) + 52) = v4;
  *(uint *)(v3 + 4 * *(uchar *)(v3 + 66)) = v5;
  s32_div_f(*(uchar *)(v3 + 66) + 1, 13);
  *(uchar *)(v3 + 66) = v7;
  return Function_2230bcc(v3);
}

//----- (02230AF8) --------------------------------------------------------
int __fastcall Function_2230af8(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint *v8;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = 0;
  Function_2230be0();
  v7 = 0;
  v8 = v3;
  do
  {
    if ( v4 == *v8 )
    {
      *v8 = v5;
      v6 = 1;
    }
    ++v7;
    ++v8;
  }
  while ( v7 < 13 );
  Function_2230bcc(v3);
  return v6;
}

//----- (02230B28) --------------------------------------------------------
int __fastcall Function_2230b28(int a1)
{
  int v1;
  int v2;
  int v4;
  char v5;

  v1 = a1;
  Function_2230be0();
  v2 = *(uchar *)(v1 + 65);
  if ( *(uchar *)(v1 + 66) == v2 )
    return 24;
  v4 = *(uchar *)(v1 + 52 + v2);
  *(uchar *)(v1 + 52 + v2) = 24;
  *(uint *)(v1 + 4 * *(uchar *)(v1 + 66)) = -1;
  s32_div_f(*(uchar *)(v1 + 65) + 1, 13);
  *(uchar *)(v1 + 65) = v5;
  Function_2230bcc(v1);
  return v4;
}

//----- (02230B78) --------------------------------------------------------
int __fastcall Function_2230b78(int a1, uint a2)
{
  uint v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0xC )
    ErrorHandler();
  Function_2230be0(v3);
  v4 = *(uchar *)(v3 + 66) - (v2 + 1);
  return *(uchar *)(v3 + v4 + (v4 < 0 ? 0xD : 0) + 52);
}

//----- (02230BA4) --------------------------------------------------------
int __fastcall Function_2230ba4(int a1, uint a2)
{
  uint v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0xC )
    ErrorHandler();
  Function_2230be0(v3);
  v4 = *(uchar *)(v3 + 66) - (v2 + 1);
  return *(uint *)(v3 + 4 * (v4 + (v4 < 0 ? 0xD : 0)));
}

//----- (02230BCC) --------------------------------------------------------
int __fastcall Function_2230bcc(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = Function_202486c(*(uint *)(a1 + 68), (uchar *)a1, 0x44u);
  *(ushort *)(v1 + 72) = result;
  return result;
}

//----- (02230BE0) --------------------------------------------------------
int __fastcall Function_2230be0(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = Function_202486c(*(uint *)(a1 + 68), (uchar *)a1, 0x44u);
  if ( result != *(ushort *)(v1 + 72) )
  {
    ErrorHandler();
    result = 1;
    *(ushort *)(v1 + 74) = 1;
  }
  return result;
}

//----- (02230C04) --------------------------------------------------------
int __fastcall Function_2230c04(int a1)
{
  return *(ushort *)(a1 + 74);
}

//----- (02230C0C) --------------------------------------------------------
int __fastcall Function_2230c0c(int a1)
{
  short *v1;
  int v2;

  v1 = &word_2258974;
  v2 = 0;
  do
  {
    if ( a1 == (ushort)*v1 )
      return v2;
    ++v2;
    v1 += 2;
  }
  while ( v2 < 16 );
  return 16;
}

//----- (02230C2C) --------------------------------------------------------
int __fastcall Function_2230c2c(uint a1)
{
  int result;

  if ( a1 >= 0x10 )
    result = 0xFFFF;
  else
    result = (ushort)word_2258974[2 * a1];
  return result;
}

//----- (02230C44) --------------------------------------------------------
int __fastcall Function_2230c44(char a1, int a2, int a3, int a4, uint a5)
{
  char v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  v9 = malloc(a5, 72);
  Call_FillMemWithValue((int *)v9, 0, 0x48u);
  *(uint *)(v9 + 60) = v8;
  *(uint *)(v9 + 64) = v6;
  *(uint *)(v9 + 68) = v7;
  *(uchar *)(v9 + 57) = v5;
  *(ushort *)(v9 + 58) = a5;
  v10 = 0;
  do
    Function_2230d0c(v9, v10++, a5);
  while ( v10 < 13 );
  return v9;
}

//----- (02230C90) --------------------------------------------------------
uint __fastcall Function_2230c90(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = 0;
  do
    Function_2230d34(v1, v2++);
  while ( v2 < 13 );
  return free(v1);
}

//----- (02230CAC) --------------------------------------------------------
int __fastcall Function_2230cac(int a1)
{
  return Function_2230d54(a1, 5);
}

//----- (02230CB8) --------------------------------------------------------
int __fastcall Function_2230cb8(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;

  v4 = a1;
  v5 = *a1;
  v6 = 0;
  if ( v5 && CallOverlayDataJumpTable(v5, a2, a3, a4) )
  {
    Call_free2(*v4);
    *v4 = 0;
    v6 = Function_2230d7c(v4, *((uchar *)v4 + 56));
  }
  return v6;
}

//----- (02230CE8) --------------------------------------------------------
void Function_2230ce8()
{
  ;
}

//----- (02230CEC) --------------------------------------------------------
uint *__fastcall Function_2230cec(uint *a1, int *a2, int *a3)
{
  uint *v3;
  int *v4;
  int *v5;
  uint *result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( *a1 )
    ErrorHandler();
  result = AllocAndInitOverlayData(v5, *v4, *((ushort *)v3 + 29));
  *v3 = result;
  return result;
}

//----- (02230D0C) --------------------------------------------------------
int __fastcall Function_2230d0c(int a1, uint a2, int a3)
{
  uint v3;
  int v4;
  int v5;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( a2 >= 0xD )
    ErrorHandler();
  return ((int (__fastcall *)(int, uint, int))*(&off_2258D88 + v3))(v4, v4 + 4 + 4 * v3, v5);
}

//----- (02230D34) --------------------------------------------------------
int __fastcall Function_2230d34(int a1, uint a2)
{
  uint v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0xD )
    ErrorHandler();
  return ((int (__fastcall *)(uint))*(&off_2258D20 + v2))(v3 + 4 + 4 * v2);
}

//----- (02230D54) --------------------------------------------------------
int __fastcall Function_2230d54(int a1, uint a2)
{
  uint v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0xD )
    ErrorHandler();
  result = ((int (__fastcall *)(int, uint))*(&off_2258D54 + v2))(v3, v3 + 4 + 4 * v2);
  *(uchar *)(v3 + 56) = v2;
  return result;
}

//----- (02230D7C) --------------------------------------------------------
int __fastcall Function_2230d7c(int a1, uint a2)
{
  uint v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0xD )
    ErrorHandler();
  return ((int (__fastcall *)(int, uint))*(&off_2258DBC + v2))(v3, v3 + 4 + 4 * v2);
}

//----- (02230DA0) --------------------------------------------------------
int *__fastcall Function_2230da0(int a1, uint a2)
{
  int v2;
  uint v3;
  int v4;
  int *result;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    result = AllocTrainerData(v3);
    *(uint *)(v2 + 32) = result;
    ++v4;
    v2 += 4;
  }
  while ( v4 < 4 );
  return result;
}

//----- (02230DBC) --------------------------------------------------------
uint __fastcall Function_2230dbc(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = 0;
  v2 = a1;
  do
  {
    result = free(*(uint *)(v2 + 32));
    *(uint *)(v2 + 32) = 0;
    ++v1;
    v2 += 4;
  }
  while ( v1 < 4 );
  return result;
}

//----- (02230DD8) --------------------------------------------------------
int __fastcall Function_2230dd8(uint *a1, uint *a2, uint a3)
{
  int v3;
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint *v9;
  int result;
  uint v11;

  v3 = (int)a2;
  v4 = a1;
  v11 = a3;
  v5 = Function_222e3bc(a2);
  *v4 = Function_222e8c4(v5);
  Function_222e934(v3, (uint)(v4 + 2));
  Function_222e294(v3, (uint)(v4 + 1));
  v4[12] = v3;
  v8 = 0;
  v4[7] = 0;
  v9 = v4;
  do
  {
    result = Function_222e374(v3, *((uchar *)v4 + v8 + 4), v6, v7);
    if ( result )
      result = Function_222e640(result, (ushort *)v9[8], v11);
    ++v8;
    ++v9;
  }
  while ( v8 < 4 );
  return result;
}

//----- (02230E28) --------------------------------------------------------
int __fastcall Function_2230e28(int a1, int **a2, uint a3)
{
  int v3;
  int **v4;
  int *v5;
  int *v6;
  int result;

  v3 = a1;
  v4 = a2;
  v5 = (int *)malloc(a3, 32);
  *v4 = v5;
  Call_FillMemWithValue(v5, 0, 0x20u);
  v6 = *v4;
  *v6 = *(uint *)(v3 + 64);
  result = *(uint *)(v3 + 60);
  v6[7] = result;
  return result;
}

//----- (02230E4C) --------------------------------------------------------
int __fastcall Function_2230e4c(int *a1)
{
  int *v1;
  int result;

  v1 = a1;
  if ( !*a1 )
    ErrorHandler();
  free(*v1);
  result = 0;
  *v1 = 0;
  return result;
}

//----- (02230E68) --------------------------------------------------------
uint *__fastcall Function_2230e68(uint *a1, int *a2)
{
  uint *v2;
  int *v3;
  int v4;
  int v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = *a2;
  v5 = a1[15];
  *(uint *)(v4 + 4) = Function_222eb28();
  v6 = v2[15];
  *(uint *)(v4 + 8) = Function_222eb38();
  return Function_2230cec(v2, v3, dword_2258A84);
}

//----- (02230E90) --------------------------------------------------------
int __fastcall Function_2230e90(int a1, int a2)
{
  switch ( (uchar)*(uint *)(*(uint *)a2 + 24) )
  {
    case 0u:
      Function_2230d54(a1, 9u);
      break;
    case 1u:
      Function_2230d54(a1, 1u);
      break;
    case 2u:
      Function_2230d54(a1, 2u);
      break;
    case 3u:
      Function_2230d54(a1, 6u);
      break;
    case 4u:
      Function_2230d54(a1, 7u);
      break;
    case 5u:
      Function_2230d54(a1, 8u);
      break;
    case 6u:
      Function_2230d54(a1, 3u);
      break;
    case 7u:
      Function_2230d54(a1, 4u);
      break;
    case 8u:
      Function_2230d54(a1, 0xAu);
      break;
    case 9u:
      Function_2230d54(a1, 0xBu);
      break;
    case 0xAu:
      Function_2230d54(a1, 0xCu);
      break;
    default:
      ErrorHandler();
      break;
  }
  return 0;
}

//----- (02230F1C) --------------------------------------------------------
int __fastcall Function_2230f1c(int a1, int *a2, uint a3)
{
  int v3;
  int *v4;
  uchar *v5;
  int v6;
  int v7;
  int result;

  v3 = a1;
  v4 = a2;
  v5 = (uchar *)malloc(a3, 16);
  *v4 = (int)v5;
  v6 = 16;
  do
  {
    *v5++ = 0;
    --v6;
  }
  while ( v6 );
  v7 = *v4;
  *(uint *)(v7 + 4) = *(uint *)(v3 + 64);
  result = *(uint *)(v3 + 60);
  *(uint *)(v7 + 12) = result;
  return result;
}

//----- (02230F44) --------------------------------------------------------
uint __fastcall Function_2230f44(int *a1)
{
  return free(*a1);
}

//----- (02230F50) --------------------------------------------------------
uint *__fastcall Function_2230f50(uint *a1, int *a2)
{
  uint *v2;
  int *v3;
  int *v4;

  v2 = a1;
  v3 = a2;
  v4 = (int *)*a2;
  *v4 = Function_222e010(a1[15]);
  v4[2] = *(uint *)Function_222e028(v2[15]);
  return Function_2230cec(v2, v3, dword_2258A74);
}

//----- (02230F7C) --------------------------------------------------------
int __fastcall Function_2230f7c(int a1)
{
  int v1;

  v1 = a1;
  if ( Function_222e138(*(uint *)(a1 + 60)) )
    Function_2230d54(v1, 0xAu);
  else
    Function_2230d54(v1, 0);
  return 0;
}

//----- (02230FA0) --------------------------------------------------------
int __fastcall Function_2230fa0(int a1, int **a2, uint a3)
{
  int v3;
  int **v4;
  int *v5;
  int *v6;
  int result;

  v3 = a1;
  v4 = a2;
  v5 = (int *)malloc(a3, 12);
  *v4 = v5;
  *(uchar *)v5 = 0;
  *((uchar *)v5 + 1) = 0;
  *((uchar *)v5 + 2) = 0;
  *((uchar *)v5 + 3) = 0;
  *((uchar *)v5 + 4) = 0;
  *((uchar *)v5 + 5) = 0;
  *((uchar *)v5 + 6) = 0;
  *((uchar *)v5 + 7) = 0;
  *((uchar *)v5 + 8) = 0;
  *((uchar *)v5 + 9) = 0;
  *((uchar *)v5 + 10) = 0;
  *((uchar *)v5 + 11) = 0;
  v6 = *v4;
  *v6 = Function_222e00c(*(uint *)(v3 + 60));
  v6[1] = Function_222e028(*(uint *)(v3 + 60));
  result = *(uint *)(v3 + 60);
  v6[2] = result;
  return result;
}

//----- (02230FE4) --------------------------------------------------------
uint __fastcall Function_2230fe4(int *a1)
{
  return free(*a1);
}

//----- (02230FF0) --------------------------------------------------------
uint *__fastcall Function_2230ff0(uint *a1, int *a2)
{
  return Function_2230cec(a1, a2, dword_2258A64);
}

//----- (02231000) --------------------------------------------------------
int __fastcall Function_2231000(int a1)
{
  int v1;

  v1 = a1;
  if ( Function_222e138(*(uint *)(a1 + 60)) )
    Function_2230d54(v1, 0xAu);
  else
    Function_2230d54(v1, 0);
  return 0;
}

//----- (02231024) --------------------------------------------------------
int __fastcall Function_2231024(int a1, uint *a2, uint a3)
{
  int v3;
  uint *v4;
  uchar *v5;
  int v6;
  uint *v7;
  int result;

  v3 = a1;
  v4 = a2;
  v5 = (uchar *)malloc(a3, 20);
  *v4 = v5;
  v6 = 20;
  do
  {
    *v5++ = 0;
    --v6;
  }
  while ( v6 );
  v7 = (uint *)*v4;
  *v7 = *(uint *)(v3 + 64);
  v7[1] = *(uint *)(v3 + 60);
  v7[2] = *(uchar *)(v3 + 57);
  result = *(uint *)(v3 + 68);
  v7[3] = result;
  return result;
}

//----- (02231058) --------------------------------------------------------
uint __fastcall Function_2231058(int *a1)
{
  return free(*a1);
}

//----- (02231064) --------------------------------------------------------
uint *__fastcall Function_2231064(uint *a1, int *a2)
{
  return Function_2230cec(a1, a2, dword_2258A54);
}

//----- (02231074) --------------------------------------------------------
int __fastcall Function_2231074(int a1, int a2)
{
  if ( !*(uint *)(*(uint *)a2 + 16) )
    return 1;
  Function_2230d54(a1, 0);
  return 0;
}

//----- (0223108C) --------------------------------------------------------
int *__fastcall Function_223108c(int a1, int *a2, uint a3)
{
  uint v3;
  int v4;
  int *v5;
  int *v6;
  int v7;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = (int *)malloc(a3, 60);
  *v5 = (int)v6;
  Call_FillMemWithValue(v6, 0, 0x3Cu);
  v7 = *v5;
  *(uchar *)(*v5 + 56) = 0;
  *(uchar *)(v7 + 57) = 1;
  *(uint *)(v7 + 52) = *(uint *)(v4 + 64);
  return Function_2230da0(v7, v3);
}

//----- (022310C4) --------------------------------------------------------
uint __fastcall Function_22310c4(int *a1)
{
  int *v1;

  v1 = a1;
  Function_2230dbc(*a1);
  return free(*v1);
}

//----- (022310D8) --------------------------------------------------------
uint *__fastcall Function_22310d8(int a1, uint **a2, int a3, int a4)
{
  int v4;
  uint **v5;

  v4 = a1;
  v5 = a2;
  LoadOverlay(114, 2, a3, a4);
  Function_2230dd8(*v5, *(uint **)(v4 + 60), *(ushort *)(v4 + 58));
  return Function_2230cec((uint *)v4, (int *)v5, dword_2258A44);
}

//----- (02231104) --------------------------------------------------------
int __fastcall Function_2231104(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;

  v4 = a1;
  v5 = (int *)a2;
  UnloadOverlay(114, a2, a3, a4);
  v6 = *v5;
  Function_222e22c(*(uint *)(v4 + 60), *(uint *)(v6 + 28));
  Function_222e528(*(uint **)(v4 + 60), *(uint *)v6);
  Function_2230d54(v4, 0);
  return 0;
}

//----- (02231134) --------------------------------------------------------
int *__fastcall Function_2231134(int a1, int **a2, uint a3)
{
  uint v3;
  int v4;
  int **v5;
  int *v6;
  int *v7;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = (int *)malloc(a3, 64);
  *v5 = v6;
  Call_FillMemWithValue(v6, 0, 0x40u);
  v7 = *v5;
  v7[15] = 0;
  v7[14] = 1;
  v7[13] = *(uint *)(v4 + 64);
  return Function_2230da0((int)v7, v3);
}

//----- (02231164) --------------------------------------------------------
uint __fastcall Function_2231164(int *a1)
{
  int *v1;

  v1 = a1;
  Function_2230dbc(*a1);
  return free(*v1);
}

//----- (02231178) --------------------------------------------------------
uint *__fastcall Function_2231178(int a1, uint **a2, int a3, int a4)
{
  int v4;
  uint **v5;

  v4 = a1;
  v5 = a2;
  LoadOverlay(114, 2, a3, a4);
  Function_2230dd8(*v5, *(uint **)(v4 + 60), *(ushort *)(v4 + 58));
  return Function_2230cec((uint *)v4, (int *)v5, dword_2258A94);
}

//----- (022311A4) --------------------------------------------------------
int __fastcall Function_22311a4(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;

  v4 = a1;
  v5 = (int *)a2;
  UnloadOverlay(114, a2, a3, a4);
  v6 = *v5;
  Function_222e22c(*(uint *)(v4 + 60), *(uint *)(v6 + 28));
  Function_222e528(*(uint **)(v4 + 60), *(uint *)v6);
  Function_2230d54(v4, 0);
  return 0;
}

//----- (022311D4) --------------------------------------------------------
int *__fastcall Function_22311d4(int a1, int *a2, uint a3)
{
  uint v3;
  int v4;
  int *v5;
  int *v6;
  int v7;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = (int *)malloc(a3, 60);
  *v5 = (int)v6;
  Call_FillMemWithValue(v6, 0, 0x3Cu);
  v7 = *v5;
  *(uchar *)(*v5 + 56) = 0;
  *(uchar *)(v7 + 57) = 1;
  *(uint *)(v7 + 52) = *(uint *)(v4 + 64);
  return Function_2230da0(v7, v3);
}

//----- (0223120C) --------------------------------------------------------
uint __fastcall Function_223120c(int *a1)
{
  int *v1;

  v1 = a1;
  Function_2230dbc(*a1);
  return free(*v1);
}

//----- (02231220) --------------------------------------------------------
uint *__fastcall Function_2231220(int a1, uint **a2, int a3, int a4)
{
  int v4;
  uint **v5;

  v4 = a1;
  v5 = a2;
  LoadOverlay(114, 2, a3, a4);
  Function_2230dd8(*v5, *(uint **)(v4 + 60), *(ushort *)(v4 + 58));
  return Function_2230cec((uint *)v4, (int *)v5, dword_2258A24);
}

//----- (0223124C) --------------------------------------------------------
int __fastcall Function_223124c(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;

  v4 = a1;
  v5 = (int *)a2;
  UnloadOverlay(114, a2, a3, a4);
  v6 = *v5;
  Function_222e22c(*(uint *)(v4 + 60), *(uint *)(v6 + 28));
  Function_222e528(*(uint **)(v4 + 60), *(uint *)v6);
  Function_2230d54(v4, 0);
  return 0;
}

//----- (0223127C) --------------------------------------------------------
uint *__fastcall Function_223127c(int a1, uint *a2, uint a3)
{
  int v3;
  uint *v4;
  uchar *v5;
  uint *result;

  v3 = a1;
  v4 = a2;
  v5 = (uchar *)malloc(a3, 8);
  *v4 = v5;
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  v5[4] = 0;
  v5[5] = 0;
  v5[6] = 0;
  v5[7] = 0;
  result = (uint *)*v4;
  *(uint *)*v4 = *(uint *)(v3 + 60);
  return result;
}

//----- (022312A8) --------------------------------------------------------
uint __fastcall Function_22312a8(int *a1)
{
  return free(*a1);
}

//----- (022312B4) --------------------------------------------------------
int __fastcall Function_22312b4(int a1)
{
  int v1;

  v1 = a1;
  if ( Function_222e138(*(uint *)(a1 + 60)) )
    Function_2230d54(v1, 0xAu);
  else
    Function_2230d54(v1, 0);
  return 0;
}

//----- (022312D8) --------------------------------------------------------
uint *__fastcall Function_22312d8(uint *a1, int *a2)
{
  *(uchar *)(*a2 + 4) = 0;
  return Function_2230cec(a1, a2, dword_2258A14);
}

//----- (022312EC) --------------------------------------------------------
uint *__fastcall Function_22312ec(uint *a1, int *a2)
{
  *(uchar *)(*a2 + 4) = 1;
  return Function_2230cec(a1, a2, dword_2258A04);
}

//----- (02231300) --------------------------------------------------------
int __fastcall Function_2231300(int a1, uint *a2, uint a3)
{
  int v3;
  uint *v4;
  uchar *v5;
  uint *v6;
  int result;

  v3 = a1;
  v4 = a2;
  v5 = (uchar *)malloc(a3, 12);
  *v4 = v5;
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  v5[4] = 0;
  v5[5] = 0;
  v5[6] = 0;
  v5[7] = 0;
  v5[8] = 0;
  v5[9] = 0;
  v5[10] = 0;
  v5[11] = 0;
  v6 = (uint *)*v4;
  *v6 = *(uint *)(v3 + 64);
  result = *(uint *)(v3 + 60);
  v6[1] = result;
  return result;
}

//----- (02231338) --------------------------------------------------------
uint __fastcall Function_2231338(int *a1)
{
  return free(*a1);
}

//----- (02231344) --------------------------------------------------------
int __fastcall Function_2231344(int a1, int a2)
{
  return Function_223135c(a1, a2, 0);
}

//----- (02231350) --------------------------------------------------------
int __fastcall Function_2231350(int a1, int a2)
{
  return Function_223135c(a1, a2, 1);
}

//----- (0223135C) --------------------------------------------------------
uint *__fastcall Function_223135c(uint *a1, int *a2, int a3)
{
  *(uint *)(*a2 + 8) = a3;
  return Function_2230cec(a1, a2, dword_22589F4);
}

//----- (02231370) --------------------------------------------------------
int Function_2231370()
{
  return 1;
}

//----- (02231374) --------------------------------------------------------
int __fastcall Function_2231374(int a1, uint *a2, uint a3)
{
  int v3;
  uint *v4;
  uchar *v5;
  uint *v6;
  int result;

  v3 = a1;
  v4 = a2;
  v5 = (uchar *)malloc(a3, 12);
  *v4 = v5;
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  v5[4] = 0;
  v5[5] = 0;
  v5[6] = 0;
  v5[7] = 0;
  v5[8] = 0;
  v5[9] = 0;
  v5[10] = 0;
  v5[11] = 0;
  v6 = (uint *)*v4;
  *v6 = *(uint *)(v3 + 64);
  result = *(uint *)(v3 + 60);
  v6[1] = result;
  v6[2] = 0;
  return result;
}

//----- (022313AC) --------------------------------------------------------
int __fastcall Function_22313ac(int a1, uint *a2, uint a3)
{
  int v3;
  uint *v4;
  uchar *v5;
  uint *v6;
  int result;

  v3 = a1;
  v4 = a2;
  v5 = (uchar *)malloc(a3, 12);
  *v4 = v5;
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  v5[4] = 0;
  v5[5] = 0;
  v5[6] = 0;
  v5[7] = 0;
  v5[8] = 0;
  v5[9] = 0;
  v5[10] = 0;
  v5[11] = 0;
  v6 = (uint *)*v4;
  *v6 = *(uint *)(v3 + 64);
  v6[1] = *(uint *)(v3 + 60);
  result = 1;
  v6[2] = 1;
  return result;
}

//----- (022313E8) --------------------------------------------------------
uint __fastcall Function_22313e8(int *a1)
{
  return free(*a1);
}

//----- (022313F4) --------------------------------------------------------
uint *__fastcall Function_22313f4(uint *a1, int *a2)
{
  return Function_2230cec(a1, a2, dword_2258A34);
}

//----- (02231404) --------------------------------------------------------
int __fastcall Function_2231404(int a1)
{
  int v1;

  v1 = a1;
  if ( Function_222e138(*(uint *)(a1 + 60)) )
    Function_2230d54(v1, 0xAu);
  else
    Function_2230d54(v1, 0);
  return 0;
}

//----- (02231428) --------------------------------------------------------
int __fastcall Function_2231428(uchar *a1, ll *a2, int a3, int a4)
{
  uchar *v4;
  int result;
  int v6;
  int v7;
  int v8;
  char v9;
  int v10;

  v10 = a4;
  v4 = a1;
  RTC_ConvertSecondToDateTime(&v9, &v6, *a2);
  *v4 = v6;
  v4[1] = v7;
  result = v8;
  v4[2] = v8;
  return result;
}

//----- (0223144C) --------------------------------------------------------
uint __fastcall Function_223144c(int *a1, int *a2, uchar *a3)
{
  uchar *v3;
  int v4;
  int v5;
  char v6;
  char v7;
  uint result;
  char v9;

  v3 = a3;
  v4 = *a1;
  v5 = *a2;
  BYTE2(v4) = ((uint)*a1 >> 16) + ((uint)*a2 >> 16);
  BYTE1(v4) += s32_div_f(BYTE2(v4), 60);
  s32_div_f(BYTE2(v4), 60);
  v3[2] = v6;
  BYTE1(v4) += BYTE1(v5);
  LOBYTE(v4) = v4 + s32_div_f(BYTE1(v4), 60);
  s32_div_f(BYTE1(v4), 60);
  v3[1] = v7;
  result = s32_div_f((uchar)(v4 + v5), 24);
  *v3 = v9;
  return result;
}

//----- (022314BC) --------------------------------------------------------
int __fastcall Function_22314bc(int *a1, int *a2, uchar *a3)
{
  uchar *v3;
  char v4;
  int v5;
  char v6;
  char v7;
  int result;
  int v9;
  int v10;

  v3 = a3;
  v10 = *a1;
  v9 = *a2;
  v4 = (uint)*a2 >> 16;
  v5 = (char)((uint)*a1 >> 16) - v4;
  if ( SBYTE2(v10) - v4 < 0 )
  {
    v6 = s32_div_f(-v5, 60) + 1;
    BYTE2(v10) += 60 * v6;
    BYTE1(v10) -= v6;
  }
  v3[2] = BYTE2(v10) - v4;
  if ( SBYTE1(v10) - SBYTE1(v9) < 0 )
  {
    v7 = s32_div_f(SBYTE1(v9) - SBYTE1(v10), 60) + 1;
    BYTE1(v10) += 60 * v7;
    LOBYTE(v10) = v10 - v7;
  }
  v3[1] = BYTE1(v10) - BYTE1(v9);
  if ( (char)v10 - (char)v9 < 0 )
    LOBYTE(v10) = v10 + 24 * (s32_div_f((char)v9 - (char)v10, 24) + 1);
  result = (uchar)v10 - (uchar)v9;
  *v3 = result;
  return result;
}

//----- (02231560) --------------------------------------------------------
int __fastcall Function_2231560(int result, int a2, uint a3, int a4)
{
  int v4;
  uint v5;
  int v6;
  int v7;
  ushort *v8;
  int v9;
  ushort *v10;

  v4 = a2;
  v10 = (ushort *)result;
  v5 = a3;
  v6 = a4;
  if ( a2 )
  {
    result = Function_20996f4(a2);
    if ( v5 <= result )
    {
      v7 = 0;
      v8 = v10;
      result = 0;
      while ( 1 )
      {
        if ( (uint)*((uchar *)v8 + 3) << 24 >> 28 )
        {
          if ( v4 == *v8 && v5 == *((uchar *)v8 + 2) )
          {
            if ( v6 == 1 )
              return result;
            v7 = 1;
          }
        }
        else
        {
          v7 = 1;
        }
        if ( v7 )
          break;
        ++result;
        v8 += 2;
        if ( result >= 50 )
          return result;
      }
      v9 = 2 * result;
      result = (int)&v10[2 * result];
      v10[v9] = v4;
      *(uchar *)(result + 2) = v5;
      *(uchar *)(result + 3) = v6 & 0xF | *(uchar *)(result + 3) & 0xF0;
      *(uchar *)(result + 3) = *(uchar *)(result + 3) & 0xF | 0x10;
    }
  }
  return result;
}

//----- (022315D8) --------------------------------------------------------
int __fastcall Function_22315d8(int a1, uint a2)
{
  uint v2;
  int v3;
  uchar *v4;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0x32 )
    ErrorHandler();
  v4 = (uchar *)(v3 + 4 * v2);
  if ( (uint)v4[3] << 24 >> 28 != 1 )
    ErrorHandler();
  return *(ushort *)v4;
}

//----- (022315FC) --------------------------------------------------------
int __fastcall Function_22315fc(int a1, uint a2)
{
  uint v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0x32 )
    ErrorHandler();
  v4 = 4 * v2;
  if ( (uint)*(uchar *)(v3 + v4 + 3) << 24 >> 28 != 1 )
    ErrorHandler();
  return *(uchar *)(v3 + v4 + 2);
}

//----- (02231624) --------------------------------------------------------
int __fastcall Function_2231624(int a1, uint a2)
{
  uint v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0x32 )
    ErrorHandler();
  v4 = v3 + 4 * v2;
  if ( (uint)*(uchar *)(v4 + 3) << 24 >> 28 != 1 )
    ErrorHandler();
  return *(uchar *)(v4 + 3) & 0xF;
}

//----- (0223164C) --------------------------------------------------------
uint __fastcall Function_223164c(int a1, uint a2)
{
  uint v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0x32 )
    ErrorHandler();
  return (uint)*(uchar *)(v3 + 4 * v2 + 3) << 24 >> 28;
}

//----- (02231668) --------------------------------------------------------
int __fastcall Function_2231668(int a1)
{
  int v1;
  uint *v2;
  int v3;

  v1 = Function_20b3c0c_GetAdrOfDataPart(a1);
  if ( v1
    && (v1 == -8 || !*(uchar *)(v1 + 9) ? (v2 = 0) : (v2 = (uint *)(v1 + 8 + *(ushort *)(v1 + 14) + 4)), v2) )
  {
    v3 = v1 + *v2;
  }
  else
  {
    v3 = 0;
  }
  Function_20b2ce4(v3, 0, 64);
  Function_20b2ce4(v3, 0, 128);
  Function_20b2ce4(v3, 0, 512);
  return Function_20b2ce4(v3, 0, 1024);
}

//----- (022316C4) --------------------------------------------------------
int __fastcall Function_22316c4(int a1, uint a2)
{
  uint v2;
  uint v3;

  v2 = a2;
  v3 = Function_20996f4(a1);
  if ( !v3 && !v2 )
    return 1;
  if ( v2 < 1 || v2 > v3 )
    return 0;
  return 1;
}

//----- (022316E8) --------------------------------------------------------
int __fastcall Function_22316e8(int a1)
{
  return *((uchar *)dword_2258AA4 + a1);
}

//----- (022316F4) --------------------------------------------------------
int __fastcall Function_22316f4(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = ((int (*)(void))dword_21D1E30[67])();
  if ( result == 11 || v1 == 25 )
    return 14;
  if ( v1 == 26 )
    return 13;
  if ( result < 0 )
    result = 11;
  return result;
}

//----- (02231718) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x2231756 for case 1"

//----- (02231760) --------------------------------------------------------
BOOL Function_2231760()
{
  return Function_20383e8() || Function_203881c();
}

//----- (0223177C) --------------------------------------------------------
int *__fastcall Function_223177c(uint a1)
{
  uint v1;
  int *v2;

  v1 = a1;
  v2 = (int *)malloc(a1, 560);
  Call_FillMemWithValue(v2, 0, 0x230u);
  Function_2231d38(v2 + 2);
  Function_2231e94(v2 + 23, v1);
  return v2;
}

//----- (022317AC) --------------------------------------------------------
uint __fastcall Function_22317ac(int a1)
{
  int v1;

  v1 = a1;
  Function_2231eec(a1 + 92);
  return free(v1);
}

//----- (022317C0) --------------------------------------------------------
int __fastcall Function_22317c0(int a1)
{
  int v1;

  v1 = a1;
  Function_2231f1c(a1 + 92);
  return Function_2231dc0(v1 + 8, 0);
}

//----- (022317D8) --------------------------------------------------------
uint *__fastcall Function_22317d8(uint *result, uint *a2)
{
  *result = *a2;
  result[1] = 1;
  return result;
}

//----- (022317E4) --------------------------------------------------------
int __fastcall Function_22317e4(int a1)
{
  return Function_2231d74(a1 + 8);
}

//----- (022317F0) --------------------------------------------------------
int __fastcall Function_22317f0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = a2;
  v4 = Function_2231e30(a1 + 8);
  Function_2231d90(v2 + 8, v3);
  return v4;
}

//----- (0223180C) --------------------------------------------------------
int __fastcall Function_223180c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v7;
  int v8;

  v7 = a1;
  v8 = a2;
  v2 = 0;
  v3 = a1 + 8;
  do
  {
    v4 = Function_2231e54(v3, v2);
    if ( v4 & 2 )
      Function_2231da8(v3, v2, v4 & 0xFFFFFFFD);
    ++v2;
  }
  while ( v2 < 20 );
  v5 = Function_2231e54(v7 + 8, v8);
  return Function_2231da8(v7 + 8, v8, v5 | 2);
}

//----- (0223185C) --------------------------------------------------------
int __fastcall Function_223185c(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;

  v2 = a1;
  v3 = a2;
  result = Function_2231f68(a1 + 92, 8);
  v5 = result;
  if ( result )
  {
    Function_2231ffc(
      result,
      0,
      0,
      0,
      *(uint *)v3,
      *(uint *)(v3 + 4),
      0,
      0,
      *(ushort *)(v3 + 8),
      *(ushort *)(v3 + 10),
      0);
    result = Function_2231fc0(v2 + 92, v5);
  }
  return result;
}

//----- (022318AC) --------------------------------------------------------
uint __fastcall Function_22318ac(int a1, int a2)
{
  int v2;
  int v3;
  uint result;
  uint v5;

  v2 = a2;
  v3 = a1;
  result = *(uint *)(a2 + 12);
  if ( result < 0x1B )
  {
    result = Function_2231f68(v3 + 92, 7);
    v5 = result;
    if ( result )
    {
      Function_2231ffc(
        result,
        *(uint *)(v2 + 12),
        0,
        0,
        *(uint *)v2,
        *(uint *)(v2 + 4),
        0,
        0,
        *(ushort *)(v2 + 8),
        *(ushort *)(v2 + 10),
        0);
      result = Function_2231fc0(v3 + 92, v5);
    }
  }
  return result;
}

//----- (02231908) --------------------------------------------------------
uint __fastcall Function_2231908(uint result, uint *a2)
{
  uint *v2;
  int v3;
  uint v4;
  int v5;
  uint v6;

  v2 = a2;
  v3 = *a2;
  v4 = result;
  if ( !*a2 || v3 == 1 || v3 == 2 )
  {
    result = a2[1];
    if ( a2[8] == 1 )
    {
      if ( result < 2 || result > 4 )
        return result;
LABEL_10:
      result = Function_2231f68(v4 + 92, dword_2258ACC[v3] & 0xFFFF);
      v6 = result;
      if ( result )
      {
        v5 = *((ushort *)v2 + 15);
        Function_2231ffc(
          result,
          v3,
          v2[1],
          v2[8],
          v2[2],
          v2[3],
          v2[4],
          v2[5],
          *((ushort *)v2 + 12),
          *((ushort *)v2 + 13),
          *((ushort *)v2 + 14));
        result = Function_2231fc0(v4 + 92, v6);
      }
      return result;
    }
    if ( result >= 1 && result <= 4 )
      goto LABEL_10;
  }
  return result;
}

//----- (0223199C) --------------------------------------------------------
int __fastcall Function_223199c(int result, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = *a2;
  v4 = result;
  if ( v3 == 3 || v3 == 4 )
  {
    result = Function_2231f68(result + 92, (v3 + 5) & 0xFFFF);
    v5 = result;
    if ( result )
    {
      Function_2231ffc(result, *v2, v2[1], 0, v2[2], 0, 0, 0, *((ushort *)v2 + 6), 0, 0);
      result = Function_2231fc0(v4 + 92, v5);
    }
  }
  return result;
}

//----- (022319FC) --------------------------------------------------------
int __fastcall Function_22319fc(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  int v6;

  v2 = a1;
  v3 = a2;
  result = Function_2231f68(a1 + 92, 12);
  v5 = result;
  if ( result )
  {
    v6 = *(ushort *)(v3 + 26);
    Function_2231ffc(
      result,
      *(uint *)v3,
      0,
      0,
      *(uint *)(v3 + 4),
      *(uint *)(v3 + 8),
      *(uint *)(v3 + 12),
      *(uint *)(v3 + 16),
      *(ushort *)(v3 + 20),
      *(ushort *)(v3 + 22),
      *(ushort *)(v3 + 24));
    result = Function_2231fc0(v2 + 92, v5);
  }
  return result;
}

//----- (02231A58) --------------------------------------------------------
int __fastcall Function_2231a58(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  int v6;

  v2 = a1;
  v3 = a2;
  result = Function_2231f68(a1 + 92, 13);
  v5 = result;
  if ( result )
  {
    v6 = *(ushort *)(v3 + 26);
    Function_2231ffc(
      result,
      *(uint *)v3,
      0,
      0,
      *(uint *)(v3 + 4),
      *(uint *)(v3 + 8),
      *(uint *)(v3 + 12),
      *(uint *)(v3 + 16),
      *(ushort *)(v3 + 20),
      *(ushort *)(v3 + 22),
      *(ushort *)(v3 + 24));
    result = Function_2231fc0(v2 + 92, v5);
  }
  return result;
}

//----- (02231AB4) --------------------------------------------------------
int __fastcall Function_2231ab4(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;

  v2 = a2;
  v3 = a1;
  result = *(uint *)(a2 + 4);
  switch ( (uchar)result )
  {
    case 0:
    case 1:
    case 2:
    case 4:
      result = Function_2231f68(v3 + 92, 14);
      v5 = result;
      if ( result )
      {
        Function_2231ffc(result, **(uint **)v2, *(uint *)(v2 + 4), 0, 0, 0, 0, 0, 0, 0, 0);
        result = Function_2231fc0(v3 + 92, v5);
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (02231B24) --------------------------------------------------------
int __fastcall Function_2231b24(int a1, uint *a2, int a3)
{
  uint *v3;
  int v4;
  int result;
  int v6;

  v3 = a2;
  v4 = a1;
  result = *a2;
  if ( *a2 < 0x14u )
  {
    result = *(uchar *)(a3 + result);
    if ( result )
    {
      result = Function_2231f68(v4 + 92, 1);
      v6 = result;
      if ( result )
      {
        Function_2231ffc(result, *v3, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        result = Function_2231fc0(v4 + 92, v6);
      }
    }
  }
  return result;
}

//----- (02231B80) --------------------------------------------------------
int __fastcall Function_2231b80(int a1, int *a2)
{
  int *v2;
  int v3;
  int result;
  int v5;
  int v6;
  int v7;

  v2 = a2;
  v3 = a1;
  result = *a2;
  if ( !*a2 || result == 1 || result == 2 )
  {
    result = Function_22324d0(*a2, a2[1]);
    if ( result )
    {
      v5 = *v2;
      result = Function_2231f68(v3 + 92, *((uchar *)dword_2258AB8 + *v2));
      v7 = result;
      if ( result )
      {
        v6 = *((ushort *)v2 + 15);
        Function_2231ffc(
          result,
          v5,
          v2[1],
          0,
          v2[2],
          v2[3],
          v2[4],
          v2[5],
          *((ushort *)v2 + 12),
          *((ushort *)v2 + 13),
          *((ushort *)v2 + 14));
        result = Function_2231fc0(v3 + 92, v7);
      }
    }
  }
  return result;
}

//----- (02231C04) --------------------------------------------------------
int __fastcall Function_2231c04(int a1)
{
  return Function_2231f58(a1 + 92);
}

//----- (02231C10) --------------------------------------------------------
int __fastcall Function_2231c10(uint *a1, uint *a2)
{
  *a2 = *a1;
  return a1[1];
}

//----- (02231C18) --------------------------------------------------------
int __fastcall Function_2231c18(int a1)
{
  return Function_2231de8(a1 + 8);
}

//----- (02231C24) --------------------------------------------------------
int __fastcall Function_2231c24(int a1)
{
  return Function_2231dfc(a1 + 8);
}

//----- (02231C30) --------------------------------------------------------
int __fastcall Function_2231c30(int a1)
{
  return Function_2231e10(a1 + 8);
}

//----- (02231C3C) --------------------------------------------------------
int __fastcall Function_2231c3c(int a1)
{
  return Function_2231e30(a1 + 8);
}

//----- (02231C48) --------------------------------------------------------
int __fastcall Function_2231c48(int a1)
{
  return Function_2231e74(a1 + 8);
}

//----- (02231C54) --------------------------------------------------------
int __fastcall Function_2231c54(int a1)
{
  return Function_2231e6c(a1 + 8);
}

//----- (02231C60) --------------------------------------------------------
BOOL __fastcall Function_2231c60(int a1)
{
  return *(uint *)(a1 + 552) != a1 + 508;
}

//----- (02231C78) --------------------------------------------------------
int __fastcall Function_2231c78(int a1)
{
  int v1;

  v1 = a1;
  if ( !Function_2231c60(a1) )
    ErrorHandler();
  return **(uchar **)(v1 + 552);
}

//----- (02231C94) --------------------------------------------------------
int __fastcall Function_2231c94(int a1, int a2, int a3, int a4, uint a5)
{
  int v5;
  int v6;
  uchar *v7;
  ushort *v8;
  uint *v9;
  uint v10;
  int v11;
  int v12;
  int v14;
  uint *v15;

  v5 = a1;
  v14 = a2;
  v6 = a4;
  if ( !Function_2231c60(a1) )
    ErrorHandler();
  v7 = *(uchar **)(v5 + 552);
  v8 = (ushort *)LoadFromMsgNARC(1, 26, 653, a5);
  v9 = Function_200b358(a5);
  v10 = *v7;
  v15 = v9;
  if ( v10 >= 9 )
    v11 = 0;
  else
    v11 = ((int (__fastcall *)(uchar *, int, uint *, ushort *, int, uint))*(&off_2258AFC + v10))(
            v7,
            v14,
            v9,
            v8,
            v6,
            a5);
  Function_200b190(v8);
  Function_200b3f0(v15, v12);
  return v11;
}

//----- (02231D00) --------------------------------------------------------
int __fastcall Function_2231d00(int a1)
{
  int v1;
  uint v2;

  v1 = a1;
  if ( !Function_2231c60(a1) )
    ErrorHandler();
  v2 = **(uchar **)(v1 + 552);
  if ( v2 < 9 )
    return ((int (*)(void))*(&off_2258AD8 + v2))();
  ErrorHandler();
  return 20;
}

//----- (02231D38) --------------------------------------------------------
int __fastcall Function_2231d38(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = 0;
  v2 = a1;
  do
    result = Function_2231d58(v2, v1++, 2, 0);
  while ( v1 < 20 );
  return result;
}

//----- (02231D58) --------------------------------------------------------
int __fastcall Function_2231d58(int a1, uint a2, short a3, short a4)
{
  uint v4;
  int v5;
  short v6;
  short v7;
  int result;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  if ( a2 >= 0x14 )
    ErrorHandler();
  *(ushort *)(v5 + 4 * v4) = v6;
  result = v5 + 4 * v4;
  *(ushort *)(result + 2) = v7;
  return result;
}

//----- (02231D74) --------------------------------------------------------
int __fastcall Function_2231d74(int a1, uint a2, short a3, short a4)
{
  int v4;
  uint v5;

  v4 = a1;
  v5 = a2;
  Function_2231d58(a1, a2, a3, a4);
  Function_2231dc0(v4, 1);
  return Function_2231dd4(v4, v5);
}

//----- (02231D90) --------------------------------------------------------
int __fastcall Function_2231d90(int a1, uint a2)
{
  int v2;

  v2 = a1;
  Function_2231d58(a1, a2, 2, 0);
  return Function_2231dc0(v2, 2);
}

//----- (02231DA8) --------------------------------------------------------
int __fastcall Function_2231da8(int a1, uint a2, short a3)
{
  uint v3;
  int v4;
  short v5;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( a2 >= 0x14 )
    ErrorHandler();
  result = v4 + 4 * v3;
  *(ushort *)(result + 2) = v5;
  return result;
}

//----- (02231DC0) --------------------------------------------------------
uint __fastcall Function_2231dc0(uint result, int a2)
{
  short v2;
  uint v3;

  v2 = a2;
  v3 = result;
  if ( a2 > 2 )
    result = ErrorHandler();
  *(ushort *)(v3 + 80) = v2;
  return result;
}

//----- (02231DD4) --------------------------------------------------------
uint __fastcall Function_2231dd4(uint result, uint a2)
{
  short v2;
  uint v3;

  v2 = a2;
  v3 = result;
  if ( a2 >= 0x14 )
    result = ErrorHandler();
  *(ushort *)(v3 + 82) = v2;
  return result;
}

//----- (02231DE8) --------------------------------------------------------
BOOL __fastcall Function_2231de8(int a1)
{
  return Function_2231dfc(a1) != 2;
}

//----- (02231DFC) --------------------------------------------------------
int __fastcall Function_2231dfc(int a1, uint a2)
{
  uint v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0x14 )
    ErrorHandler();
  return *(ushort *)(v3 + 4 * v2);
}

//----- (02231E10) --------------------------------------------------------
int __fastcall Function_2231e10(int a1, uint a2)
{
  uint v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0x14 )
    ErrorHandler();
  result = 1;
  if ( !(*(ushort *)(v3 + 4 * v2 + 2) & 1) )
    result = 0;
  return result;
}

//----- (02231E30) --------------------------------------------------------
BOOL __fastcall Function_2231e30(int a1, uint a2)
{
  uint v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0x14 )
    ErrorHandler();
  return (*(ushort *)(v3 + 4 * v2 + 2) & 2) != 0;
}

//----- (02231E54) --------------------------------------------------------
int __fastcall Function_2231e54(int a1, uint a2)
{
  uint v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0x14 )
    ErrorHandler();
  return *(ushort *)(v3 + 4 * v2 + 2);
}

//----- (02231E6C) --------------------------------------------------------
int __fastcall Function_2231e6c(int a1)
{
  return *(ushort *)(a1 + 80);
}

//----- (02231E74) --------------------------------------------------------
BOOL __fastcall Function_2231e74(int a1, uint a2)
{
  uint v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0x14 )
    ErrorHandler();
  return *(ushort *)(v3 + 82) == v2;
}

//----- (02231E94) --------------------------------------------------------
int *__fastcall Function_2231e94(int *a1, uint a2)
{
  uint v2;
  int *v3;
  int v4;
  int *result;
  int *v6;
  int *v7;
  int v8;

  v2 = a2;
  v6 = a1;
  Call_FillMemWithValue(a1, 0, 0x1D4u);
  v8 = 0;
  v7 = v6;
  do
  {
    v3 = v7;
    v4 = 0;
    do
    {
      v3[4] = Function_2023790(8, v2);
      ++v4;
      ++v3;
    }
    while ( v4 < 4 );
    v7 += 13;
    ++v8;
  }
  while ( v8 < 8 );
  result = v6;
  v6[115] = (int)(v6 + 104);
  v6[116] = (int)(v6 + 104);
  return result;
}

//----- (02231EEC) --------------------------------------------------------
int *__fastcall Function_2231eec(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  int *v5;
  int *v7;

  v7 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    v4 = 0;
    v5 = v3;
    do
    {
      Function_20237bc_FreeMsg(v5[4], a2);
      ++v4;
      ++v5;
    }
    while ( v4 < 4 );
    ++v2;
    v3 += 13;
  }
  while ( v2 < 8 );
  return Call_FillMemWithValue(v7, 0, 0x1D4u);
}

//----- (02231F1C) --------------------------------------------------------
int __fastcall Function_2231f1c(int a1)
{
  int v1;
  int v2;
  int result;
  int v4;

  v1 = a1;
  v2 = *(uint *)(a1 + 460);
  result = 416;
  if ( v2 != v1 + 416 )
  {
    do
    {
      v4 = *(uint *)(v2 + 44);
      *(ushort *)(v2 + 40) = 0;
      if ( *(short *)(v2 + 42) - 1 <= 0 )
      {
        result = Function_2231fe8(v1);
      }
      else
      {
        result = *(short *)(v2 + 42) - 1;
        *(ushort *)(v2 + 42) = result;
      }
      v2 = v4;
    }
    while ( v4 != v1 + 416 );
  }
  return result;
}

//----- (02231F58) --------------------------------------------------------
int __fastcall Function_2231f58(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 460);
  return Function_2231fe8(a1);
}

//----- (02231F68) --------------------------------------------------------
int __fastcall Function_2231f68(int a1, uint a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v2 = 0;
  v3 = 0;
  v4 = a1;
  while ( *(uint *)(v4 + 44) )
  {
    ++v3;
    v4 += 52;
    if ( v3 >= 8 )
      goto LABEL_5;
  }
  v2 = a1 + 52 * v3;
LABEL_5:
  if ( !v2 )
  {
    v5 = 0;
    v6 = a1;
    while ( *(ushort *)(v6 + 40) < a2 )
    {
      ++v5;
      v6 += 52;
      if ( v5 >= 8 )
        return v2;
    }
    v2 = a1 + 52 * v5;
    Function_2231fe8(a1);
  }
  return v2;
}

//----- (02231FB0) --------------------------------------------------------
int __fastcall Function_2231fb0(int a1, int a2)
{
  int result;

  *(uint *)(a2 + 44) = *(uint *)(a1 + 44);
  *(uint *)(a2 + 48) = a1;
  *(uint *)(a1 + 44) = a2;
  result = *(uint *)(a2 + 44);
  *(uint *)(result + 48) = a2;
  return result;
}

//----- (02231FC0) --------------------------------------------------------
int __fastcall Function_2231fc0(int a1, int a2)
{
  int i;

  for ( i = *(uint *)(a1 + 464); i != a1 + 416; i = *(uint *)(i + 48) )
  {
    if ( *(ushort *)(i + 40) < (uint)*(ushort *)(a2 + 40) )
      break;
  }
  return Function_2231fb0(i, a2);
}

//----- (02231FE8) --------------------------------------------------------
int __fastcall Function_2231fe8(int a1, int a2)
{
  int result;

  *(uint *)(*(uint *)(a2 + 48) + 44) = *(uint *)(a2 + 44);
  *(uint *)(*(uint *)(a2 + 44) + 48) = *(uint *)(a2 + 48);
  result = 0;
  *(uint *)(a2 + 48) = 0;
  *(uint *)(a2 + 44) = 0;
  return result;
}

//----- (02231FFC) --------------------------------------------------------
ushort *__fastcall Function_2231ffc(int a1, int a2, int a3, int a4, ushort *a5, ushort *a6, ushort *a7, ushort *a8, short a9, short a10, short a11, short a12, short a13, short a14, uint a15)
{
  int v15;
  int v16;
  int v17;
  int v18;
  ushort *result;

  v15 = a1;
  v16 = a2;
  v17 = a3;
  v18 = a4;
  if ( a15 >= 9 )
    ErrorHandler();
  *(uchar *)v15 = a15;
  *(ushort *)(v15 + 42) = a13;
  *(ushort *)(v15 + 40) = a14;
  *(uint *)(v15 + 4) = v16;
  *(uint *)(v15 + 8) = v17;
  *(uint *)(v15 + 12) = v18;
  *(ushort *)(v15 + 32) = a9;
  *(ushort *)(v15 + 34) = a10;
  *(ushort *)(v15 + 36) = a11;
  *(ushort *)(v15 + 38) = a12;
  if ( a5 )
    Function_2025ef4(a5, *(ushort **)(v15 + 16));
  if ( a6 )
    Function_2025ef4(a6, *(ushort **)(v15 + 20));
  if ( a7 )
    Function_2025ef4(a7, *(ushort **)(v15 + 24));
  result = a8;
  if ( a8 )
    result = Function_2025ef4(a8, *(ushort **)(v15 + 28));
  return result;
}

//----- (02232068) --------------------------------------------------------
int __fastcall Function_2232068(int a1, int a2, int *a3, ushort **a4, int a5)
{
  int v5;
  int *v6;
  ushort **v7;
  ushort *v8;
  int v9;

  v5 = a1;
  v6 = a3;
  v7 = a4;
  Function_200b48c(a3, 0, *(uint *)(a1 + 16));
  Function_200b48c(v6, 1u, *(uint *)(v5 + 20));
  v8 = Function_200b1ec_CallMsgDecrypt(v7, 7u);
  Function_200c388((uint *)v6, a5, (int)v8);
  Function_20237bc_FreeMsg((int)v8, v9);
  return 1;
}

//----- (022320BC) --------------------------------------------------------
int __fastcall Function_22320bc(int a1, int a2, int *a3, ushort **a4, int a5)
{
  int v5;
  int *v6;
  ushort **v7;
  ushort *v8;
  int v9;

  v5 = a1;
  v6 = a3;
  v7 = a4;
  Function_200b48c(a3, 0, *(uint *)(a1 + 16));
  Function_200b48c(v6, 1u, *(uint *)(v5 + 20));
  Function_200c120((int)v6, 2u, *(uint *)(v5 + 4));
  v8 = Function_200b1ec_CallMsgDecrypt(v7, 8u);
  Function_200c388((uint *)v6, a5, (int)v8);
  Function_20237bc_FreeMsg((int)v8, v9);
  return 1;
}

//----- (0223211C) --------------------------------------------------------
int __fastcall Function_223211c(uint *a1, int a2, int a3, ushort **a4, int a5)
{
  uint *v5;
  int *v6;
  ushort **v7;
  int v8;
  uint v9;
  ushort *v11;
  int v12;

  v5 = a1;
  v6 = (int *)a3;
  v7 = a4;
  Function_200c0b0(a3, 0, a1[1]);
  if ( v5[3] == 1 )
  {
    v8 = v5[2];
    switch ( v8 )
    {
      case 2:
        Function_200b48c(v6, 1u, v5[4]);
        Function_200b48c(v6, 2u, v5[5]);
        v9 = 19;
        break;
      case 3:
        Function_200b48c(v6, 1u, v5[4]);
        Function_200b48c(v6, 2u, v5[5]);
        Function_200b48c(v6, 3u, v5[6]);
        v9 = 18;
        break;
      case 4:
        Function_200b48c(v6, 1u, v5[4]);
        Function_200b48c(v6, 2u, v5[5]);
        Function_200b48c(v6, 3u, v5[6]);
        Function_200b48c(v6, 4u, v5[7]);
        v9 = 6;
        break;
      default:
        return 0;
    }
    v11 = Function_200b1ec_CallMsgDecrypt(v7, v9);
  }
  else
  {
    Function_200b48c(v6, 1u, v5[4]);
    Function_200b60c((int)v6, 2u, 4 - v5[2], 1, 1, 1);
    v11 = Function_200b1ec_CallMsgDecrypt(v7, 5u);
  }
  Function_200c388((uint *)v6, a5, (int)v11);
  Function_20237bc_FreeMsg((int)v11, v12);
  return 1;
}

//----- (02232258) --------------------------------------------------------
int __fastcall Function_2232258(int a1, int a2, int a3, ushort **a4, int a5)
{
  int v5;
  int *v6;
  ushort **v7;
  ushort *v8;
  int v9;

  v5 = a1;
  v6 = (int *)a3;
  v7 = a4;
  Function_200c0b0(a3, 0, *(uint *)(a1 + 4));
  Function_200b48c(v6, 1u, *(uint *)(v5 + 16));
  Function_200b60c((int)v6, 2u, 8 - *(uint *)(v5 + 8), 1, 1, 1);
  v8 = Function_200b1ec_CallMsgDecrypt(v7, 9u);
  Function_200c388((uint *)v6, a5, (int)v8);
  Function_20237bc_FreeMsg((int)v8, v9);
  return 1;
}

//----- (022322B8) --------------------------------------------------------
int __fastcall Function_22322b8(int a1, int a2, int *a3, ushort **a4, int a5)
{
  int v5;
  uint v6;
  int *v7;
  uint v8;
  int v9;
  ushort *v10;
  int v11;
  ushort **v13;

  v5 = a1;
  v6 = *(uint *)(a1 + 4);
  v7 = a3;
  v8 = 0;
  v13 = a4;
  if ( v6 )
  {
    v9 = a1;
    do
    {
      Function_200b48c(v7, v8, *(uint *)(v9 + 16));
      v6 = *(uint *)(v5 + 4);
      ++v8;
      v9 += 4;
    }
    while ( v8 < v6 );
  }
  if ( *(uchar *)v5 == 4 )
    Function_200c0b0((int)v7, v6, 5u);
  else
    Function_200c0b0((int)v7, v6, 6u);
  v10 = Function_200b1ec_CallMsgDecrypt(v13, 14 - *(uint *)(v5 + 4));
  Function_200c388((uint *)v7, a5, (int)v10);
  Function_20237bc_FreeMsg((int)v10, v11);
  return 1;
}

//----- (02232330) --------------------------------------------------------
int __fastcall Function_2232330(int a1, int a2, int a3, ushort **a4, int a5)
{
  uint *v5;
  ushort **v6;
  uint v7;
  int result;
  ushort *v9;
  int v10;

  v5 = (uint *)a3;
  v6 = a4;
  switch ( (uchar)*(uint *)(a1 + 8) )
  {
    case 0u:
      Function_200c0e8(a3, 0, 0);
      v7 = 15;
      goto LABEL_7;
    case 1u:
      Function_200c0e8(a3, 0, 1u);
      v7 = 20;
      goto LABEL_7;
    case 2u:
      Function_200c0e8(a3, 0, 2u);
      v7 = 16;
      goto LABEL_7;
    case 4u:
      v7 = 17;
LABEL_7:
      v9 = Function_200b1ec_CallMsgDecrypt(v6, v7);
      Function_200c388(v5, a5, (int)v9);
      Function_20237bc_FreeMsg((int)v9, v10);
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

//----- (022323A0) --------------------------------------------------------
int __fastcall Function_22323a0(int a1, int a2, int a3, ushort **a4, ushort *a5)
{
  uint v5;

  v5 = *(uint *)(a1 + 4);
  if ( v5 >= 0x14 )
    return 0;
  if ( !*(uchar *)(a2 + v5) )
    return 0;
  Function_200b1b8_CallMsgDecrypt(a4, 0x15u, a5);
  return 1;
}

//----- (022323C4) --------------------------------------------------------
int __fastcall Function_22323c4(int a1, int a2, int *a3, ushort **a4, int a5)
{
  int v5;
  int *v6;
  uint v8;
  uint v9;
  int v10;
  ushort *v11;
  int v12;
  int v13;
  ushort **v14;

  v5 = a1;
  v6 = a3;
  v14 = a4;
  if ( !Function_22324d0(*(uint *)(a1 + 4), *(uint *)(a1 + 8)) )
    return 0;
  Function_200c0b0((int)v6, 0, *(uint *)(v5 + 4));
  v8 = *(uint *)(v5 + 8);
  v9 = 0;
  if ( v8 )
  {
    v10 = v5;
    do
    {
      Function_200b48c(v6, v9 + 1, *(uint *)(v10 + 16));
      v8 = *(uint *)(v5 + 8);
      ++v9;
      v10 += 4;
    }
    while ( v9 < v8 );
  }
  if ( *(uint *)(v5 + 4) > 1u )
    v11 = Function_200b1ec_CallMsgDecrypt(v14, *((ushort *)&dword_2258AB8[2] + v8 + 1));
  else
    v11 = Function_200b1ec_CallMsgDecrypt(v14, *((ushort *)dword_2258AB8 + v8 + 1));
  v12 = (int)v11;
  Function_200c388((uint *)v6, a5, (int)v11);
  Function_20237bc_FreeMsg(v12, v13);
  return 1;
}

//----- (0223245C) --------------------------------------------------------
int __fastcall Function_223245c(int a1, uint a2)
{
  int result;

  if ( a2 < 2 )
    result = *(ushort *)(a1 + 2 * a2 + 32);
  else
    result = 20;
  return result;
}

//----- (0223246C) --------------------------------------------------------
int __fastcall Function_223246c(int a1, uint a2)
{
  int result;

  if ( a2 < 2 )
    result = *(ushort *)(a1 + 2 * a2 + 32);
  else
    result = 20;
  return result;
}

//----- (0223247C) --------------------------------------------------------
int __fastcall Function_223247c(int a1, uint a2)
{
  int result;

  if ( *(uint *)(a1 + 8) > a2 )
    result = *(ushort *)(a1 + 2 * a2 + 32);
  else
    result = 20;
  return result;
}

//----- (02232490) --------------------------------------------------------
int __fastcall Function_2232490(int a1, uint a2)
{
  int result;

  if ( a2 < 1 )
    result = *(ushort *)(a1 + 2 * a2 + 32);
  else
    result = 20;
  return result;
}

//----- (022324A0) --------------------------------------------------------
int __fastcall Function_22324a0(int a1, uint a2)
{
  int result;

  if ( *(uint *)(a1 + 4) > a2 )
    result = *(ushort *)(a1 + 2 * a2 + 32);
  else
    result = 20;
  return result;
}

//----- (022324B4) --------------------------------------------------------
int Function_22324b4()
{
  return 20;
}

//----- (022324B8) --------------------------------------------------------
int Function_22324b8()
{
  return 20;
}

//----- (022324BC) --------------------------------------------------------
int __fastcall Function_22324bc(int a1, uint a2)
{
  int result;

  if ( *(uint *)(a1 + 8) > a2 )
    result = *(ushort *)(a1 + 2 * a2 + 32);
  else
    result = 20;
  return result;
}

//----- (022324D0) --------------------------------------------------------
int __fastcall Function_22324d0(uint a1, uint a2)
{
  if ( a1 > 1 )
  {
    if ( a2 < 2 || a2 > 4 )
      return 0;
  }
  else if ( a2 < 1 || a2 > 4 )
  {
    return 0;
  }
  return 1;
}

//----- (022324F0) --------------------------------------------------------
int __fastcall Function_22324f0(uint a1, int a2, uint a3, int *a4, int a5)
{
  uint v5;
  int v6;
  uint v7;
  int *v8;
  int v9;
  uint *v10;
  int v11;
  uint *v12;
  uint *v13;
  int v14;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  if ( dword_225B6C0[0] )
    ErrorHandler();
  if ( v7 >= 0x12C )
    ErrorHandler();
  dword_225B6C0[0] = malloc(v5, 2440);
  Call_FillMemWithValue((int *)dword_225B6C0[0], 0, 0x988u);
  *(uint *)dword_225B6C0[0] = v6;
  *(uint *)(dword_225B6C0[0] + 4) = LoadVariableAreaAdress_1d(v6);
  *(uint *)(dword_225B6C0[0] + 8) = Function_202c878(v6);
  v9 = *v8;
  v11 = v8[1];
  v10 = v8 + 2;
  v12 = (uint *)(dword_225B6C0[0] + 12);
  *v12 = v9;
  v12[1] = v11;
  v13 = (uint *)(dword_225B6C0[0] + 20);
  v14 = v10[1];
  *v13 = *v10;
  v13[1] = v14;
  *(uint *)(dword_225B6C0[0] + 28) = v10[2];
  *(uint *)(dword_225B6C0[0] + 32) = a5;
  Function_2233758(dword_225B6C0[0], v7, v5);
  Function_22338c8(dword_225B6C0[0], 20, 8, v5);
  Function_2234054(dword_225B6C0[0]);
  return Function_22342f4(dword_225B6C0[0] + 1696, 128, v5);
}

//----- (02232598) --------------------------------------------------------
int *Function_2232598()
{
  int *result;

  if ( !dword_225B6C0[0] )
    ErrorHandler();
  Function_223430c(dword_225B6C0[0] + 1696);
  Function_2233920(dword_225B6C0[0]);
  Function_2233788(dword_225B6C0[0]);
  free(dword_225B6C0[0]);
  result = dword_225B6C0;
  dword_225B6C0[0] = 0;
  return result;
}

//----- (022325D8) --------------------------------------------------------
int Function_22325d8()
{
  int v1;

  if ( !dword_225B6C0[0] )
    return 0;
  switch ( (uchar)Function_2235428() )
  {
    case 0u:
      *(uchar *)(dword_225B6C0[0] + 300) = 0;
      break;
    case 1u:
    case 2u:
    case 3u:
    case 4u:
    case 5u:
    case 6u:
    case 7u:
      *(uchar *)(dword_225B6C0[0] + 300) = 1;
      break;
    case 8u:
      *(uchar *)(dword_225B6C0[0] + 300) = 2;
      break;
    case 9u:
      *(uchar *)(dword_225B6C0[0] + 300) = 3;
      break;
    case 0xAu:
      *(uchar *)(dword_225B6C0[0] + 300) = 4;
      break;
    default:
      break;
  }
  if ( *(uchar *)(dword_225B6C0[0] + 300) == 2 )
  {
    Function_22341f4();
    v1 = Function_2235fd8(dword_225B6C0[0] + 412);
    switch ( (uchar)Function_22360f4(v1) )
    {
      case 0u:
        *(uchar *)(dword_225B6C0[0] + 302) = 0;
        *(uchar *)(dword_225B6C0[0] + 301) = 4;
        break;
      case 1u:
        *(uchar *)(dword_225B6C0[0] + 302) = 1;
        break;
      case 2u:
        if ( *(uchar *)(dword_225B6C0[0] + 302) != 3 )
          *(uchar *)(dword_225B6C0[0] + 302) = 2;
        break;
      case 3u:
        *(uchar *)(dword_225B6C0[0] + 302) = 4;
        break;
      default:
        return Function_223287c();
    }
  }
  return Function_223287c();
}

//----- (022326DC) --------------------------------------------------------
int Function_22326dc()
{
  int result;

  if ( !dword_225B6C0[0] )
    ErrorHandler();
  if ( *(uint *)(dword_225B6C0[0] + 2436) )
    result = Function_2237134();
  else
    result = Function_22370fc();
  return result;
}

//----- (0223270C) --------------------------------------------------------
int Function_223270c()
{
  return Function_2237118();
}

//----- (02232714) --------------------------------------------------------
int __fastcall Function_2232714(int a1)
{
  return Function_2232720(a1, 0);
}

//----- (02232720) --------------------------------------------------------
int __fastcall Function_2232720(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int (*v9)();
  int (*v10)();
  int (*v11)();
  int (*v12)();
  int (*v13)();
  int (*v14)(int, int);
  int (*v15)();
  int (*v16)();
  int (*v17)();
  int (*v18)();
  int (*v19)();
  int (*v20)();
  int (*v21)();
  int (*v22)();
  int (*v23)();
  int (*v24)();
  int (*v25)();
  int v26;

  v26 = a4;
  v4 = a1;
  v5 = a2;
  if ( !dword_225B6C0[0] )
    ErrorHandler();
  v9 = Function_2233b54;
  v10 = Function_2233bf0;
  v11 = Function_2233c60;
  v12 = Function_2233ce4;
  v13 = Function_2233ce8;
  v14 = Function_2233d94;
  v15 = Function_2233dd4;
  v16 = Function_2233e50;
  v17 = Function_2233e8c;
  v18 = Function_2233f18;
  v19 = Function_2233f60;
  v20 = Function_2233f74;
  v21 = Function_2233fa0;
  v22 = Function_2233fc0;
  v23 = Function_2233fec;
  v24 = Function_2234018;
  v25 = Function_2234040;
  v6 = *(uint *)(dword_225B6C0[0] + 4);
  Function_202ad28();
  *(uint *)(dword_225B6C0[0] + 2436) = Function_2234fd4(
                                           "pokemonplatds",
                                           "IIup73",
                                           v5,
                                           &v9,
                                           v7,
                                           v4,
                                           *(uint *)(dword_225B6C0[0] + 40),
                                           Function_2233b54,
                                           Function_2233bf0,
                                           Function_2233c60,
                                           Function_2233ce4,
                                           Function_2233ce8,
                                           Function_2233d94,
                                           Function_2233dd4,
                                           Function_2233e50,
                                           Function_2233e8c,
                                           Function_2233f18,
                                           Function_2233f60,
                                           Function_2233f74,
                                           Function_2233fa0,
                                           Function_2233fc0,
                                           Function_2233fec,
                                           Function_2234018,
                                           Function_2234040,
                                           v26);
  return Function_223365c(*(uint *)(dword_225B6C0[0] + 2436));
}

//----- (02232804) --------------------------------------------------------
BOOL Function_66_2232804()
{
  if ( !dword_225B6C0[0] )
    ErrorHandler();
  return *(uchar *)(dword_225B6C0[0] + 300) == 2;
}

//----- (0223282C) --------------------------------------------------------
uint Function_223282c()
{
  uint v0;
  int v1;
  int v2;
  uint result;

  v0 = dword_225B6C0[0];
  if ( !dword_225B6C0[0] )
    v0 = ErrorHandler();
  v1 = Function_223369c(v0);
  v2 = Function_22353a4(v1);
  result = Function_223365c(v2);
  if ( !result )
    result = ErrorHandler();
  return result;
}

//----- (02232854) --------------------------------------------------------
BOOL Function_2232854()
{
  if ( !dword_225B6C0[0] )
    ErrorHandler();
  return *(uchar *)(dword_225B6C0[0] + 300) == 0;
}

//----- (0223287C) --------------------------------------------------------
int Function_223287c()
{
  if ( !dword_225B6C0[0] )
    ErrorHandler();
  if ( *(uchar *)(dword_225B6C0[0] + 301) != 4 && *(uchar *)(dword_225B6C0[0] + 302) == 4 )
    return 4;
  if ( *(uchar *)(dword_225B6C0[0] + 307) )
    return 4;
  if ( *(uchar *)(dword_225B6C0[0] + 306) )
    return 4;
  return *(uchar *)(dword_225B6C0[0] + 300);
}

//----- (022328CC) --------------------------------------------------------
int Function_22328cc()
{
  int result;

  if ( !dword_225B6C0[0] )
    ErrorHandler();
  result = *(uchar *)(dword_225B6C0[0] + 305);
  *(uchar *)(dword_225B6C0[0] + 305) = 0;
  return result;
}

//----- (022328F0) --------------------------------------------------------
int Function_22328f0()
{
  uint v0;

  v0 = dword_225B6C0[0];
  if ( !dword_225B6C0[0] )
    v0 = ErrorHandler();
  return Function_2236494(v0);
}

//----- (02232908) --------------------------------------------------------
int __fastcall Function_2232908(int a1)
{
  int v1;
  uint v2;
  int v3;

  v1 = a1;
  v2 = dword_225B6C0[0];
  if ( !dword_225B6C0[0] )
    v2 = ErrorHandler();
  v3 = Function_2236494(v2);
  Function_223379c(dword_225B6C0[0], v3, v1);
  return Function_22364c4(v1, *(uint *)(dword_225B6C0[0] + 40), 0);
}

//----- (0223293C) --------------------------------------------------------
int __fastcall Function_223293c(int a1)
{
  int v1;

  v1 = a1;
  if ( !dword_225B6C0[0] )
    ErrorHandler();
  return Function_22337e8(dword_225B6C0[0], v1);
}

//----- (0223295C) --------------------------------------------------------
int __fastcall Function_223295c(int a1, uint *a2)
{
  int v2;
  uint *v3;
  int *v4;
  int v5;
  int result;

  v2 = a1;
  v3 = a2;
  if ( !dword_225B6C0[0] )
    ErrorHandler();
  v4 = (int *)Function_2233864(dword_225B6C0[0], v2);
  v5 = *v4;
  result = v4[1];
  *v3 = v5;
  v3[1] = result;
  return result;
}

//----- (02232988) --------------------------------------------------------
int Function_2232988()
{
  int v0;
  int v1;
  int v2;
  int v3;
  int v4;
  int v6;
  long long v7;

  v6 = -1;
  v0 = 0xFFFFFFF;
  v1 = -1;
  if ( !dword_225B6C0[0] )
    ErrorHandler();
  v2 = 0;
  do
  {
    v3 = Function_2233a6c(dword_225B6C0[0], v2, 0);
    v4 = v3;
    if ( v3 != -1 )
    {
      Function_223295c(v3, &v7);
      if ( v7 < __PAIR__(v0, v1) )
      {
        v0 = HIDWORD(v7);
        v1 = v7;
        v6 = v4;
      }
    }
    ++v2;
  }
  while ( v2 < 20 );
  return v6;
}

//----- (022329E4) --------------------------------------------------------
int __fastcall Function_22329e4(int a1, int a2, int a3, int a4)
{
  ll v4;
  int v5;
  int v6;
  int v7;
  int v9;
  int v10;
  long long v11;
  int v12;

  v12 = a4;
  v9 = a1;
  v10 = -1;
  v4 = 0xFFFFFFFFFFFFFFFLL;
  if ( !dword_225B6C0[0] )
    ErrorHandler();
  v5 = 0;
  do
  {
    v6 = Function_2233a6c(dword_225B6C0[0], v5, 0);
    v7 = v6;
    if ( v6 != -1 && v6 != v9 )
    {
      Function_223295c(v6, &v11);
      if ( v11 < v4 )
      {
        v4 = v11;
        v10 = v7;
      }
    }
    ++v5;
  }
  while ( v5 < 20 );
  return v10;
}

//----- (02232A48) --------------------------------------------------------
int __fastcall Function_2232a48(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  if ( !dword_225B6C0[0] )
    ErrorHandler();
  v2 = Function_22336c0(v1);
  v3 = Function_2235ba0(v2);
  result = Function_223365c(v3);
  if ( result == 1 )
  {
    *(uchar *)(dword_225B6C0[0] + 301) = v1;
    *(uchar *)(dword_225B6C0[0] + 303) = 0;
  }
  return result;
}

//----- (02232A84) --------------------------------------------------------
int Function_2232a84()
{
  if ( !dword_225B6C0[0] )
    ErrorHandler();
  return *(uchar *)(dword_225B6C0[0] + 303);
}

//----- (02232AA4) --------------------------------------------------------
int Function_2232aa4()
{
  uint v0;
  int v1;
  int result;

  v0 = dword_225B6C0[0];
  if ( !dword_225B6C0[0] )
    v0 = ErrorHandler();
  v1 = Function_2235dd4(v0);
  result = Function_223365c(v1);
  if ( result == 1 )
    *(uchar *)(dword_225B6C0[0] + 302) = 3;
  return result;
}

//----- (02232AD4) --------------------------------------------------------
BOOL Function_2232ad4()
{
  if ( !dword_225B6C0[0] )
    ErrorHandler();
  return *(uchar *)(dword_225B6C0[0] + 302) == 0;
}

//----- (02232B00) --------------------------------------------------------
int __fastcall Function_2232b00(int a1)
{
  int v1;

  v1 = a1;
  if ( !dword_225B6C0[0] )
    ErrorHandler();
  return Function_2233ae8(dword_225B6C0[0], v1);
}

//----- (02232B20) --------------------------------------------------------
int __fastcall Function_2232b20(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  if ( !dword_225B6C0[0] )
    ErrorHandler();
  *v1 = *(short *)(dword_225B6C0[0] + 284);
  result = *(uint *)(dword_225B6C0[0] + 288);
  v1[1] = result;
  return result;
}

//----- (02232B4C) --------------------------------------------------------
int __fastcall Function_2232b4c(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  if ( !dword_225B6C0[0] )
    ErrorHandler();
  *v1 = *(short *)(dword_225B6C0[0] + 292);
  result = *(uint *)(dword_225B6C0[0] + 296);
  v1[1] = result;
  return result;
}

//----- (02232B78) --------------------------------------------------------
int __fastcall Function_2232b78(int a1)
{
  return Function_2233a34(dword_225B6C0[0], a1, 0);
}

//----- (02232B8C) --------------------------------------------------------
int __fastcall Function_2232b8c(int a1)
{
  return Function_2233a34(dword_225B6C0[0], a1, 1);
}

//----- (02232BA0) --------------------------------------------------------
int __fastcall Function_2232ba0(int a1)
{
  return Function_2233a6c(dword_225B6C0[0], a1, 0);
}

//----- (02232BB4) --------------------------------------------------------
int __fastcall Function_2232bb4(int a1)
{
  return Function_2233a6c(dword_225B6C0[0], a1, 1);
}

//----- (02232BC8) --------------------------------------------------------
int __fastcall Function_2232bc8(uint *a1)
{
  uint *v1;
  int result;
  int v3;

  v1 = a1;
  if ( !dword_225B6C0[0] )
    ErrorHandler();
  v3 = *(uint *)(dword_225B6C0[0] + 416);
  result = dword_225B6C0[0] + 420;
  *v1 = *(uint *)(dword_225B6C0[0] + 412);
  v1[1] = v3;
  return result;
}

//----- (02232BEC) --------------------------------------------------------
int __fastcall Function_2232bec(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int *v5;

  v2 = a1;
  if ( !dword_225B6C0[0] )
    ErrorHandler();
  v3 = 1;
  v4 = *(uchar *)(dword_225B6C0[0] + 300);
  if ( v4 != 2 && v4 != 4 )
    v3 = 0;
  if ( !v3 )
    ErrorHandler();
  if ( v2 >= 8 )
    ErrorHandler();
  v5 = (int *)(dword_225B6C0[0] + 436);
  switch ( LOBYTE(dword_225B6C0[0]) )
  {
    case 0:
      v1 = *v5;
      break;
    case 1:
      v1 = *(uint *)(dword_225B6C0[0] + 440);
      break;
    case 2:
      v1 = *(uchar *)(dword_225B6C0[0] + 448);
      break;
    case 3:
      v1 = *(uchar *)(dword_225B6C0[0] + 449);
      break;
    case 4:
      v1 = 1;
      if ( !(*(uint *)(dword_225B6C0[0] + 444) & 1) )
        v1 = 0;
      break;
    case 5:
      v1 = Function_22342cc(v5, 19);
      break;
    case 6:
      v1 = Function_22342cc(v5, 16);
      break;
    case 7:
      v1 = Function_22342cc(v5, 17);
      break;
    default:
      return v1;
  }
  return v1;
}

//----- (02232C8C) --------------------------------------------------------
int Function_2232c8c()
{
  int result;

  if ( !dword_225B6C0[0] )
    ErrorHandler();
  result = Function_22336c4(dword_225B6C0[0]);
  if ( result )
    *(uchar *)(dword_225B6C0[0] + 304) = 1;
  return result;
}

//----- (02232CB8) --------------------------------------------------------
BOOL Function_2232cb8()
{
  return *(uchar *)(dword_225B6C0[0] + 304) == 0;
}

//----- (02232CD4) --------------------------------------------------------
int __fastcall Function_2232cd4(uint a1)
{
  uint v1;

  v1 = a1;
  if ( !dword_225B6C0[0] )
    ErrorHandler();
  if ( v1 >= 0x14 )
    ErrorHandler();
  return *(ushort *)(dword_225B6C0[0] + 4 * v1 + 308);
}

//----- (02232D00) --------------------------------------------------------
int __fastcall Function_2232d00(uint a1)
{
  uint v1;

  v1 = a1;
  if ( !dword_225B6C0[0] )
    ErrorHandler();
  if ( v1 >= 0x14 )
    ErrorHandler();
  return *(uchar *)(dword_225B6C0[0] + 4 * v1 + 310);
}

//----- (02232D30) --------------------------------------------------------
int __fastcall Function_2232d30(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( !dword_225B6C0[0] )
    ErrorHandler();
  *(uint *)(dword_225B6C0[0] + 388) = v3;
  *(uint *)(dword_225B6C0[0] + 392) = v4;
  result = dword_225B6C0[0];
  *(uint *)(dword_225B6C0[0] + 396) = v5;
  return result;
}

//----- (02232D60) --------------------------------------------------------
int __fastcall Function_2232d60(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( !dword_225B6C0[0] )
    ErrorHandler();
  *(uint *)(dword_225B6C0[0] + 400) = v3;
  *(uint *)(dword_225B6C0[0] + 404) = v4;
  result = dword_225B6C0[0];
  *(uint *)(dword_225B6C0[0] + 408) = v5;
  return result;
}

//----- (02232D90) --------------------------------------------------------
int Function_2232d90()
{
  uchar *v0;
  int result;

  if ( !dword_225B6C0[0] )
    ErrorHandler();
  v0 = (uchar *)(dword_225B6C0[0] + 388);
  result = 0;
  *v0 = 0;
  v0[1] = 0;
  v0[2] = 0;
  v0[3] = 0;
  v0[4] = 0;
  v0[5] = 0;
  v0[6] = 0;
  v0[7] = 0;
  v0[8] = 0;
  v0[9] = 0;
  v0[10] = 0;
  v0[11] = 0;
  return result;
}

//----- (02232DC8) --------------------------------------------------------
int Function_2232dc8()
{
  uchar *v0;
  int result;

  if ( !dword_225B6C0[0] )
    ErrorHandler();
  v0 = (uchar *)(dword_225B6C0[0] + 400);
  result = 0;
  *v0 = 0;
  v0[1] = 0;
  v0[2] = 0;
  v0[3] = 0;
  v0[4] = 0;
  v0[5] = 0;
  v0[6] = 0;
  v0[7] = 0;
  v0[8] = 0;
  v0[9] = 0;
  v0[10] = 0;
  v0[11] = 0;
  return result;
}

//----- (02232E00) --------------------------------------------------------
uint __fastcall Function_2232e00(uint a1, int a2, int a3)
{
  uint v3;
  int v4;
  int v5;
  int v6;
  uint result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( !dword_225B6C0[0] )
    ErrorHandler();
  if ( *(uint *)(dword_225B6C0[0] + 392) <= v3 )
    ErrorHandler();
  if ( v5 != *(uint *)(*(uint *)(dword_225B6C0[0] + 388) + 8 * v3 + 4) )
    ErrorHandler();
  v6 = Function_2236390(0, v3, v4, v5);
  result = Function_223365c(v6);
  if ( result != 1 )
    result = ErrorHandler();
  return result;
}

//----- (02232E5C) --------------------------------------------------------
uint __fastcall Function_2232e5c(uint a1, int a2, int a3, int a4)
{
  uint v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint result;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( !dword_225B6C0[0] )
    ErrorHandler();
  if ( *(uint *)(dword_225B6C0[0] + 392) <= v4 )
    ErrorHandler();
  if ( v7 != *(uint *)(*(uint *)(dword_225B6C0[0] + 388) + 8 * v4 + 4) )
    ErrorHandler();
  v8 = Function_2236414(v5, v4, v6, v7);
  result = Function_223365c(v8);
  if ( result != 1 )
    result = ErrorHandler();
  return result;
}

//----- (02232EBC) --------------------------------------------------------
uint __fastcall Function_2232ebc(uint a1, int a2, int a3)
{
  uint v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( !dword_225B6C0[0] )
    ErrorHandler();
  if ( *(uint *)(dword_225B6C0[0] + 404) <= v3 )
    ErrorHandler();
  if ( v5 != *(uint *)(*(uint *)(dword_225B6C0[0] + 400) + 8 * v3 + 4) )
    ErrorHandler();
  if ( *(uchar *)(dword_225B6C0[0] + 301) == 4 )
    ErrorHandler();
  v6 = Function_22336c0(*(uchar *)(dword_225B6C0[0] + 301));
  v7 = Function_2236390(v6, v3, v4, v5);
  result = Function_223365c(v7);
  if ( result != 1 )
    result = ErrorHandler();
  return result;
}

//----- (02232F38) --------------------------------------------------------
int __fastcall Function_2232f38(int a1, int a2)
{
  int v2;
  int v3;
  int v5;
  int v6;
  uint v7;

  v2 = a1;
  v3 = a2;
  if ( !dword_225B6C0[0] )
    ErrorHandler();
  if ( Function_223412c(dword_225B6C0[0], v2) == 1 )
    return 0;
  if ( *(ushort *)(dword_225B6C0[0] + 1692) != 3 )
    return 0;
  *(uint *)(dword_225B6C0[0] + 76 * v2 + 1464) = v2;
  *(uint *)(dword_225B6C0[0] + 76 * v2 + 1468) = v3;
  *(uint *)(dword_225B6C0[0] + 76 * v2 + 1472) = 1;
  *(uint *)(dword_225B6C0[0] + 76 * v2 + 1476) = 0;
  Function_2234288(dword_225B6C0[0] + 1464 + 76 * v2, dword_225B6C0[0] + 412);
  v5 = Function_2236770(dword_225B6C0[0] + 1464 + 76 * v2);
  if ( !Function_223365c(v5) )
    ErrorHandler();
  v6 = 76 * v2;
  *(ushort *)(dword_225B6C0[0] + 76 * v2 + 1532) = 1;
  *(uint *)(dword_225B6C0[0] + v6 + 1536) = Function_2236494(1);
  *(ushort *)(dword_225B6C0[0] + v6 + 1534) = 1800;
  *(ushort *)(dword_225B6C0[0] + 1692) = v2;
  *(uchar *)(dword_225B6C0[0] + 1694) = 1;
  *(uchar *)(dword_225B6C0[0] + 1695) = 0;
  v7 = s32_div_f(*(ushort *)(dword_225B6C0[0] + 76 * v2 + 1534), 30);
  ((void (__fastcall *)(int, int, int, uint))dword_21D1108[25])(
    dword_225B6C0[0] + 1512 + 76 * v2,
    v3,
    1,
    v7);
  ((void (__fastcall *)(int (*)(), int))dword_21D1108[18])(Function_22342a0, dword_225B6C0[0]);
  ((void (__fastcall *)(int (*)(), int))dword_21D1108[6])(Function_22342a4, dword_225B6C0[0]);
  return 1;
}

//----- (02233064) --------------------------------------------------------
int Function_66_2233064()
{
  int result;
  int v1;
  int v2;

  if ( !dword_225B6C0[0] )
    ErrorHandler();
  result = 1692;
  if ( *(ushort *)(dword_225B6C0[0] + 1692) != 3 )
  {
    result = *(uchar *)(dword_225B6C0[0] + 1694);
    if ( *(uchar *)(dword_225B6C0[0] + 1694) )
    {
      v1 = Function_2236bb8();
      if ( !Function_223365c(v1) )
        ErrorHandler();
      v2 = Function_2236494(dword_225B6C0);
      if ( !Function_22340f0(dword_225B6C0[0], *(ushort *)(dword_225B6C0[0] + 1692), v2) )
        ErrorHandler();
      result = 1694;
      *(uchar *)(dword_225B6C0[0] + 1694) = 0;
    }
  }
  return result;
}

//----- (022330CC) --------------------------------------------------------
uint Function_22330cc()
{
  uint result;
  int v1;

  if ( !dword_225B6C0[0] )
    ErrorHandler();
  result = *(uchar *)(dword_225B6C0[0] + 1694);
  if ( *(uchar *)(dword_225B6C0[0] + 1694) )
  {
    *(uint *)(dword_225B6C0[0] + 76 * *(ushort *)(dword_225B6C0[0] + 1692) + 1476) = 1;
    v1 = Function_2236ac4(dword_225B6C0[0] + 1464 + 76 * *(ushort *)(dword_225B6C0[0] + 1692));
    result = Function_223365c(v1);
    if ( !result )
      result = ErrorHandler();
  }
  return result;
}

//----- (02233128) --------------------------------------------------------
BOOL Function_2233128()
{
  int v0;
  BOOL result;

  if ( !dword_225B6C0[0] )
    ErrorHandler();
  v0 = *(ushort *)(dword_225B6C0[0] + 1692);
  if ( v0 == 3 )
    result = 0;
  else
    result = *(uint *)(dword_225B6C0[0] + 76 * v0 + 1476) == 1;
  return result;
}

//----- (02233164) --------------------------------------------------------
int Function_66_2233164()
{
  if ( !dword_225B6C0[0] )
    ErrorHandler();
  return *(uchar *)(dword_225B6C0[0] + 1695);
}

//----- (02233184) --------------------------------------------------------
int __fastcall Function_2233184(int a1)
{
  int v1;

  v1 = a1;
  if ( !dword_225B6C0[0] )
    ErrorHandler();
  return Function_223412c(dword_225B6C0[0], v1);
}

//----- (022331A4) --------------------------------------------------------
BOOL __fastcall Function_22331a4(int a1)
{
  int v1;
  BOOL result;

  v1 = a1;
  if ( !dword_225B6C0[0] )
    ErrorHandler();
  if ( Function_2233184(v1) )
    result = *(uint *)(dword_225B6C0[0] + 76 * v1 + 1476) == 0;
  else
    result = 0;
  return result;
}

//----- (022331E4) --------------------------------------------------------
int __fastcall Function_22331e4(int a1)
{
  int v1;
  int v3;

  v1 = a1;
  if ( !dword_225B6C0[0] )
    ErrorHandler();
  if ( v1 >= 3 )
    ErrorHandler();
  if ( !Function_223412c(dword_225B6C0[0], v1) )
    return 0;
  v3 = Function_22341c0(dword_225B6C0[0], v1);
  return *(uint *)(v3 + 4) - *(uint *)(v3 + 8);
}

//----- (02233224) --------------------------------------------------------
int __fastcall Function_2233224(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( !dword_225B6C0[0] )
    ErrorHandler();
  if ( v1 >= 3 )
    ErrorHandler();
  if ( Function_223412c(dword_225B6C0[0], v1) )
    result = *(uint *)(Function_22341c0(dword_225B6C0[0], v1) + 8);
  else
    result = 0;
  return result;
}

//----- (02233260) --------------------------------------------------------
int __fastcall Function_2233260(int a1)
{
  int v1;
  int v3;
  uint v4;

  v1 = a1;
  if ( !dword_225B6C0[0] )
    ErrorHandler();
  if ( !Function_223412c(dword_225B6C0[0], v1) )
    return 0;
  if ( *(ushort *)(dword_225B6C0[0] + 1692) != 3 )
    return 0;
  v3 = 76 * v1;
  if ( *(uint *)(dword_225B6C0[0] + 76 * v1 + 1476) == 1 )
    return 0;
  *(ushort *)(dword_225B6C0[0] + 1692) = v1;
  v4 = s32_div_f(*(ushort *)(dword_225B6C0[0] + v3 + 1534), 30);
  ((void (__fastcall *)(int, uint, uint, uint))dword_21D1108[25])(
    dword_225B6C0[0] + 1512 + v3,
    *(uint *)(dword_225B6C0[0] + v3 + 1468),
    0,
    v4);
  ((void (__fastcall *)(int (*)(), int))dword_21D1108[18])(Function_22342a0, dword_225B6C0[0]);
  ((void (__fastcall *)(int (*)(), int))dword_21D1108[6])(Function_22342a4, dword_225B6C0[0]);
  return 1;
}

//----- (022332F8) --------------------------------------------------------
int __fastcall Function_22332f8(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( !dword_225B6C0[0] )
    ErrorHandler();
  if ( v1 >= 3 )
    ErrorHandler();
  if ( Function_223412c(dword_225B6C0[0], v1) )
    result = *(ushort *)(dword_225B6C0[0] + 76 * v1 + 1534);
  else
    result = 1800;
  return result;
}

//----- (02233340) --------------------------------------------------------
int Function_2233340()
{
  int v0;
  int result;

  if ( !dword_225B6C0[0] )
    ErrorHandler();
  v0 = *(ushort *)(dword_225B6C0[0] + 1692);
  if ( v0 == 3 )
    result = -1;
  else
    result = *(uint *)(dword_225B6C0[0] + 76 * v0 + 1536);
  return result;
}

//----- (02233374) --------------------------------------------------------
int Function_66_2233374()
{
  if ( !dword_225B6C0[0] )
    ErrorHandler();
  return *(uchar *)(dword_225B6C0[0] + 1694);
}

//----- (02233394) --------------------------------------------------------
int __fastcall Function_2233394(int a1)
{
  int v1;

  v1 = a1;
  if ( !dword_225B6C0[0] )
    ErrorHandler();
  return Function_2234344(dword_225B6C0[0] + 1696, v1);
}

//----- (022333BC) --------------------------------------------------------
int __fastcall Function_22333bc(int a1)
{
  int v1;

  v1 = a1;
  if ( !dword_225B6C0[0] )
    ErrorHandler();
  return Function_223436c(dword_225B6C0[0] + 1696, v1);
}

//----- (022333E4) --------------------------------------------------------
int __fastcall Function_22333e4(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  if ( !dword_225B6C0[0] )
    ErrorHandler();
  if ( v1 >= 3 )
    ErrorHandler();
  if ( *(uint *)(dword_225B6C0[0] + 2432) == 1 )
    ErrorHandler();
  v2 = Function_2236d74(v1);
  if ( Function_223365c(v2) != 1 )
    ErrorHandler();
  result = 2432;
  *(uint *)(dword_225B6C0[0] + 2432) = 1;
  return result;
}

//----- (02233434) --------------------------------------------------------
int Function_2233434()
{
  if ( !dword_225B6C0[0] )
    ErrorHandler();
  return *(uint *)(dword_225B6C0[0] + 2432);
}

//----- (02233454) --------------------------------------------------------
int __fastcall Function_2233454(int a1)
{
  int v1;
  char v2;
  int result;

  v1 = a1;
  v2 = dword_225B6C0[0];
  if ( !dword_225B6C0[0] )
    v2 = ErrorHandler();
  if ( v1 >= 11 )
    v2 = ErrorHandler();
  switch ( v2 )
  {
    case 0:
      result = *(uint *)(dword_225B6C0[0] + 1704);
      break;
    case 1:
      result = *(uint *)(dword_225B6C0[0] + 1708);
      break;
    case 2:
      result = *(uint *)(dword_225B6C0[0] + 2052);
      break;
    case 3:
      result = *(uint *)(dword_225B6C0[0] + 1708) >= 1000;
      break;
    case 4:
      result = *(uint *)(dword_225B6C0[0] + 2056);
      break;
    case 5:
      result = *(uint *)(dword_225B6C0[0] + 2060);
      break;
    case 6:
      result = *(uint *)(dword_225B6C0[0] + 2404);
      break;
    case 7:
      result = *(uint *)(dword_225B6C0[0] + 2060) >= 1000;
      break;
    case 8:
    case 9:
    case 10:
      result = *(uint *)(dword_225B6C0[0] + 4 * (v1 - 8) + 2420);
      break;
    default:
      ErrorHandler();
      result = 0;
      break;
  }
  return result;
}

//----- (02233538) --------------------------------------------------------
int __fastcall Function_2233538(int a1)
{
  int v1;
  char v2;
  int result;

  v1 = a1;
  v2 = dword_225B6C0[0];
  if ( !dword_225B6C0[0] )
    v2 = ErrorHandler();
  if ( v1 >= 8 )
    v2 = ErrorHandler();
  switch ( v2 )
  {
    case 0:
      result = dword_225B6C0[0] + 1712;
      break;
    case 1:
    case 2:
    case 3:
      result = dword_225B6C0[0] + 1932 + 36 * (v1 - 1);
      break;
    case 4:
      result = dword_225B6C0[0] + 2064;
      break;
    case 5:
    case 6:
    case 7:
      result = dword_225B6C0[0] + 2284 + 36 * (v1 - 5);
      break;
    default:
      ErrorHandler();
      result = 0;
      break;
  }
  return result;
}

//----- (022335C0) --------------------------------------------------------
int __fastcall Function_22335c0(int a1, uint a2)
{
  int v2;
  uint v3;

  v2 = a1;
  v3 = a2;
  if ( !dword_225B6C0[0] )
    ErrorHandler();
  if ( v2 >= 2 )
    ErrorHandler();
  if ( v3 >= 0xC )
    ErrorHandler();
  if ( v2 >= 2 )
    return 0;
  if ( v3 >= 0xC )
    return 0;
  if ( v2 )
    return *(uchar *)(dword_225B6C0[0] + v3 + 2392);
  return *(uchar *)(dword_225B6C0[0] + v3 + 2040);
}

//----- (0223361C) --------------------------------------------------------
int Function_66_223361c()
{
  int result;

  if ( !dword_225B6C0[0] )
    ErrorHandler();
  ((void (*)(void))dword_21D1108[18])();
  ((void (*)(void))dword_21D1108[6])();
  *(ushort *)(dword_225B6C0[0] + 1692) = 3;
  *(uchar *)(dword_225B6C0[0] + 1694) = 0;
  result = 1695;
  *(uchar *)(dword_225B6C0[0] + 1695) = 0;
  return result;
}

//----- (0223365C) --------------------------------------------------------
int __fastcall Function_223365c(char a1)
{
  int v1;

  v1 = 1;
  switch ( a1 )
  {
    case 0:
      return v1;
    case 1:
    case 2:
    case 4:
    case 5:
      v1 = 0;
      break;
    case 3:
    case 6:
      ErrorHandler();
      v1 = 0;
      break;
    case 7:
      v1 = 0;
      break;
    default:
      ErrorHandler();
      v1 = 0;
      break;
  }
  return v1;
}

//----- (0223369C) --------------------------------------------------------
int Function_223369c()
{
  int result;

  *(uchar *)(dword_225B6C0[0] + 307) = 0;
  result = 306;
  *(uchar *)(dword_225B6C0[0] + 306) = 0;
  return result;
}

//----- (022336B8) --------------------------------------------------------
int __fastcall Function_22336b8(int a1)
{
  int result;

  result = a1 - 1;
  if ( result < 0 )
    result = 4;
  return result;
}

//----- (022336C0) --------------------------------------------------------
int __fastcall Function_22336c0(int a1)
{
  return a1 + 1;
}

//----- (022336C4) --------------------------------------------------------
int __fastcall Function_22336c4(int a1)
{
  int v1;
  int v2;
  int result;
  int v4;
  int v5;
  int v6;
  char v7;
  int v8;

  v8 = a1;
  v1 = Function_202c8c0(*(uint *)(a1 + 8));
  v2 = Function_202c8c4(*(uint *)(v8 + 8));
  if ( !v1 )
    return 0;
  v4 = v8;
  v5 = 0;
  do
  {
    if ( !*(uchar *)(v4 + 311) )
      break;
    if ( v1 == *(ushort *)(v4 + 308) && v2 == *(uchar *)(v4 + 310) )
      return 0;
    ++v5;
    v4 += 4;
  }
  while ( v5 < 20 );
  if ( v5 < 20 )
  {
    v6 = v8 + 4 * v5;
    *(ushort *)(v6 + 308) = v1;
    *(uchar *)(v6 + 310) = v2;
    *(uchar *)(v6 + 311) = 1;
    v7 = Function_22361b8(-1, 0, 36015604, v8 + 308, 80);
    result = Function_223365c(v7);
  }
  else
  {
    ErrorHandler();
    result = 0;
  }
  return result;
}

//----- (02233758) --------------------------------------------------------
int __fastcall Function_2233758(int a1, int a2, uint a3)
{
  int v3;
  uint v4;
  int result;

  v3 = a2;
  v4 = 20 * a2;
  *(uint *)(dword_225B6C0[0] + 36) = malloc(a3, 20 * a2);
  Call_FillMemWithValue(*(int **)(dword_225B6C0[0] + 36), 0, v4);
  result = dword_225B6C0[0];
  *(uint *)(dword_225B6C0[0] + 40) = v3;
  return result;
}

//----- (02233788) --------------------------------------------------------
uint Function_2233788()
{
  return free(*(uint *)(dword_225B6C0[0] + 36));
}

//----- (0223379C) --------------------------------------------------------
int __fastcall Function_223379c(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 40);
  return Function_22337a8();
}

//----- (022337A8) --------------------------------------------------------
uchar *__fastcall Function_22337a8(int a1, int a2, char *a3, uint a4)
{
  int v4;
  uint v5;
  int v6;
  uint v7;
  int v8;
  int v9;
  char *v11;

  v11 = a3;
  v4 = a1;
  v5 = a4;
  v6 = Function_2233a34(a1, a2, 0);
  if ( v6 == -1 )
    ErrorHandler();
  v7 = *(uint *)(v4 + 40);
  v8 = *(uint *)(v4 + 36);
  v9 = *(uint *)(v4 + 40) * v6;
  if ( v7 <= v5 )
    v5 = v7;
  else
    Call_FillMemWithValue((int *)(v8 + v9), 0, v7);
  return memcpy((uchar *)(v8 + v9), v11, v5);
}

//----- (022337E8) --------------------------------------------------------
int __fastcall Function_22337e8(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = Function_2233a34(a1, a2, 0);
  if ( v3 == -1 )
    ErrorHandler();
  return *(uint *)(v2 + 36) + *(uint *)(v2 + 40) * v3;
}

//----- (0223380C) --------------------------------------------------------
int *__fastcall Function_223380c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = Function_2233a34(a1, a2, 0);
  if ( v3 == -1 )
    ErrorHandler();
  return Call_FillMemWithValue((int *)(*(uint *)(v2 + 36) + *(uint *)(v2 + 40) * v3), 0, *(uint *)(v2 + 40));
}

//----- (02233838) --------------------------------------------------------
int __fastcall Function_2233838(int a1, int a2, uint *a3)
{
  uint *v3;
  int v4;
  int v5;
  int v6;
  uint *v7;
  int result;

  v3 = a3;
  v4 = a1;
  v5 = Function_2233a34(a1, a2, 0);
  if ( v5 == -1 )
    ErrorHandler();
  v6 = v3[1];
  v7 = (uint *)(v4 + 12 * v5 + 44);
  *v7 = *v3;
  v7[1] = v6;
  result = v3[2];
  v7[2] = result;
  return result;
}

//----- (02233864) --------------------------------------------------------
int __fastcall Function_2233864(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = Function_2233a34(a1, a2, 0);
  if ( v3 == -1 )
    ErrorHandler();
  return v2 + 44 + 12 * v3;
}

//----- (02233888) --------------------------------------------------------
int __fastcall Function_2233888(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  uchar *v5;

  v2 = a1;
  v3 = Function_2233a34(a1, a2, 0);
  if ( v3 == -1 )
    ErrorHandler();
  result = 0;
  v5 = (uchar *)(v2 + 44 + 12 * v3);
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  v5[4] = 0;
  v5[5] = 0;
  v5[6] = 0;
  v5[7] = 0;
  v5[8] = 0;
  v5[9] = 0;
  v5[10] = 0;
  v5[11] = 0;
  return result;
}

//----- (022338C8) --------------------------------------------------------
int __fastcall Function_22338c8(int a1, int a2, int a3, uint a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int result;
  int v9;
  int v10;
  uint v11;

  v4 = a1;
  v9 = a2;
  v10 = a3;
  v11 = a4;
  v5 = 0;
  v6 = a1;
  do
  {
    if ( *(uint *)(v6 + 288) )
      ErrorHandler();
    if ( v5 )
      v7 = v10;
    else
      v7 = v9;
    *(ushort *)(v6 + 284) = 0;
    *(uint *)(v6 + 288) = malloc(v11, 4 * v7);
    *(ushort *)(v6 + 286) = v7;
    result = Function_2233950(v4, v5++);
    v6 += 8;
  }
  while ( v5 < 2 );
  return result;
}

//----- (02233920) --------------------------------------------------------
int __fastcall Function_2233920(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = 0;
  v2 = a1;
  do
  {
    if ( !*(uint *)(v2 + 288) )
      ErrorHandler();
    free(*(uint *)(v2 + 288));
    result = 288;
    *(uint *)(v2 + 288) = 0;
    ++v1;
    v2 += 8;
  }
  while ( v1 < 2 );
  return result;
}

//----- (02233950) --------------------------------------------------------
int __fastcall Function_2233950(int a1, int a2)
{
  int result;
  int v3;
  int v4;

  result = a1 + 8 * a2;
  v3 = 0;
  *(ushort *)(result + 284) = 0;
  if ( (int)*(ushort *)(result + 286) > 0 )
  {
    v4 = 0;
    do
    {
      ++v3;
      *(uint *)(*(uint *)(result + 288) + v4) = -1;
      v4 += 4;
    }
    while ( v3 < *(ushort *)(result + 286) );
  }
  return result;
}

//----- (02233984) --------------------------------------------------------
int __fastcall Function_2233984(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int result;
  int v6;
  int v7;
  uint *v8;
  int v9;
  ushort *v10;
  int v11;

  v3 = a1;
  v9 = a2;
  v4 = a3;
  result = Function_2233a34(a1, a2, a3);
  if ( result == -1 )
  {
    v6 = 8 * v4;
    v10 = (ushort *)(v3 + 284 + v6);
    if ( (short)*v10 >= (int)*(ushort *)(v3 + 286 + v6) )
      ErrorHandler();
    result = 0;
    v7 = *(ushort *)(v3 + 286 + v6);
    if ( (short)*v10 < v7 )
    {
      if ( v7 > 0 )
      {
        v8 = *(uint **)(v3 + v6 + 288);
        while ( *v8 != -1 )
        {
          ++result;
          ++v8;
          if ( result >= *(ushort *)(v3 + v6 + 286) )
            goto LABEL_10;
        }
        v11 = result;
      }
LABEL_10:
      *(uint *)(*(uint *)(v3 + v6 + 288) + 4 * v11) = v9;
      result = v3 + 284 + v6;
      ++*v10;
    }
  }
  return result;
}

//----- (02233A08) --------------------------------------------------------
int __fastcall Function_2233a08(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int result;

  v3 = a1;
  v4 = a3;
  result = Function_2233a34(a1, a2, a3);
  if ( result != -1 )
  {
    *(uint *)(*(uint *)(v3 + 8 * v4 + 288) + 4 * result) = -1;
    result = *(short *)(v3 + 284 + 8 * v4) - 1;
    *(ushort *)(v3 + 284 + 8 * v4) = result;
  }
  return result;
}

//----- (02233A34) --------------------------------------------------------
int __fastcall Function_2233a34(int a1, int a2, int a3)
{
  int v3;
  int v4;
  uint *v5;

  v3 = a1 + 8 * a3;
  v4 = 0;
  if ( (int)*(ushort *)(v3 + 286) <= 0 )
    return -1;
  v5 = *(uint **)(v3 + 288);
  while ( a2 != *v5 )
  {
    ++v4;
    ++v5;
    if ( v4 >= *(ushort *)(v3 + 286) )
      return -1;
  }
  return v4;
}

//----- (02233A6C) --------------------------------------------------------
int __fastcall Function_2233a6c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = 8 * a3;
  v5 = a2;
  if ( a2 >= *(ushort *)(a1 + 8 * a3 + 286) )
    ErrorHandler();
  return *(uint *)(*(uint *)(v3 + v4 + 288) + 4 * v5);
}

//----- (02233A94) --------------------------------------------------------
int __fastcall Function_2233a94(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;
  int v6;
  int v7;

  v2 = a1;
  v3 = Function_22336c0(a2);
  Function_2233950(v2, 1);
  v4 = 0;
  result = *(ushort *)(v2 + 286);
  if ( result > 0 )
  {
    v6 = v2;
    do
    {
      v7 = Function_2233a6c(v2, v4, 0);
      if ( v7 != -1 && v3 == *(uint *)(v6 + 52) )
        Function_2233984(v2, v7, 1);
      ++v4;
      result = *(ushort *)(v2 + 286);
      v6 += 12;
    }
    while ( v4 < result );
  }
  return result;
}

//----- (02233AE8) --------------------------------------------------------
BOOL __fastcall Function_2233ae8(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v7;
  int v8;

  v2 = a1;
  v7 = a2;
  if ( a2 >= 4 )
    ErrorHandler();
  v8 = Function_22336c0(v7);
  v3 = 0;
  v4 = 0;
  if ( (int)*(ushort *)(v2 + 286) > 0 )
  {
    v5 = v2;
    do
    {
      if ( Function_2233a6c(v2, v4, 0) != -1 && v8 == *(uint *)(v5 + 52) )
        ++v3;
      ++v4;
      v5 += 12;
    }
    while ( v4 < *(ushort *)(v2 + 286) );
  }
  return *((uchar *)&dword_2258B20 + v7) > v3;
}

//----- (02233B54) --------------------------------------------------------
int __fastcall Function_2233b54(int a1, int a2)
{
  int v2;
  char v3;
  int result;
  int v5;
  int v6;

  v2 = a1;
  if ( a2 )
  {
    if ( *(uchar *)(dword_225B6C0[0] + 301) == Function_22336b8(a2) )
    {
      if ( v2 == 1 )
      {
        *(uchar *)(dword_225B6C0[0] + 303) = 1;
        v5 = Function_2233a94(dword_225B6C0[0], *(uchar *)(dword_225B6C0[0] + 301));
        v6 = Function_2236494(v5);
        result = Function_2233984(dword_225B6C0[0], v6, 1);
      }
      else
      {
        result = 303;
        *(uchar *)(dword_225B6C0[0] + 303) = 2;
      }
    }
    else
    {
      ErrorHandler();
      result = Function_2232aa4();
    }
  }
  else
  {
    *(uint *)(dword_225B6C0[0] + 1460) = 1024;
    v3 = Function_2236084(dword_225B6C0[0] + 436, dword_225B6C0[0] + 1460);
    if ( !Function_223365c(v3) )
      ErrorHandler();
    result = Function_2236218(-1);
  }
  return result;
}

//----- (02233BF0) --------------------------------------------------------
int __fastcall Function_2233bf0(int a1, uint *a2, char *a3, uint a4)
{
  int v4;
  uint *v5;
  char *v6;
  int v7;
  int v8;
  uint v10;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v10 = a4;
  if ( a1 == Function_2236494(a1) )
  {
    Function_2235fd8(dword_225B6C0[0] + 412);
    v7 = 1;
  }
  else
  {
    v7 = 0;
  }
  Function_2233984(dword_225B6C0[0], v4, 0);
  Function_22337a8(dword_225B6C0[0], v4, v6, v10);
  Function_2233838(dword_225B6C0[0], v4, v5);
  v8 = Function_22337e8(dword_225B6C0[0], v4);
  return (*(int (__fastcall **)(int, int, uint, int))(dword_225B6C0[0] + 12))(
           v4,
           v8,
           *(uint *)(dword_225B6C0[0] + 32),
           v7);
}

//----- (02233C60) --------------------------------------------------------
int __fastcall Function_2233c60(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;

  v1 = a1;
  result = Function_2233a34(dword_225B6C0[0], a1, 0);
  if ( result != -1 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      if ( v1 == *(uint *)(dword_225B6C0[0] + v4 + 1536) )
        Function_2233f18(v1, dword_225B6C0[0] + 1464 + v4);
      ++v3;
      v4 += 76;
    }
    while ( v3 < 3 );
    (*(void (__fastcall **)(int, uint))(dword_225B6C0[0] + 16))(v1, *(uint *)(dword_225B6C0[0] + 32));
    Function_2233888(dword_225B6C0[0], v1);
    Function_223380c(dword_225B6C0[0], v1);
    Function_2233a08(dword_225B6C0[0], v1, 0);
    result = Function_2233a08(dword_225B6C0[0], v1, 1);
  }
  return result;
}

//----- (02233CE4) --------------------------------------------------------
void Function_2233ce4()
{
  ;
}

//----- (02233CE8) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x2233D88 for default case"

//----- (02233D40) --------------------------------------------------------
int __fastcall Function_2233d40(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int (__fastcall *a10)(int, int, int, int))
{
  return a10(a1, a2, a3, a5);
}

//----- (02233D94) --------------------------------------------------------
int __fastcall Function_2233d94(int a1, int a2, int a3, int a4, int *a5, char *a6)
{
  int result;

  result = Function_20d8d14(a5, "b_lby_wlddata");
  if ( !result )
  {
    memcpy((uchar *)(dword_225B6C0[0] + 308), a6, 80);
    result = 304;
    if ( *(uchar *)(dword_225B6C0[0] + 304) )
      *(uchar *)(dword_225B6C0[0] + 304) = 0;
  }
  return result;
}

//----- (02233DD4) --------------------------------------------------------
int __fastcall Function_2233dd4(int a1, uint *a2)
{
  int v2;
  uint *v3;
  int result;
  int v5;
  int v6;
  int v7;

  v2 = a1;
  v3 = a2;
  result = Function_2233a34(dword_225B6C0[0], a1, 0);
  if ( result != -1 )
  {
    if ( *(uchar *)(dword_225B6C0[0] + 301) != 4 )
    {
      v5 = *(uint *)(Function_2233864(dword_225B6C0[0], v2) + 8);
      v6 = v3[2];
      v7 = Function_22336c0(*(uchar *)(dword_225B6C0[0] + 301));
      if ( v5 != 5 || v6 != v7 )
      {
        if ( v5 == v7 && v6 != v7 )
          Function_2233a08(dword_225B6C0[0], v2, 1);
      }
      else
      {
        Function_2233984(dword_225B6C0[0], v2, 1);
      }
    }
    result = Function_2233838(dword_225B6C0[0], v2, v3);
  }
  return result;
}

//----- (02233E50) --------------------------------------------------------
int __fastcall Function_2233e50(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a1;
  v3 = a2;
  result = Function_2233a34(dword_225B6C0[0], a1, 0);
  if ( result != -1 )
  {
    Function_223379c(dword_225B6C0[0]);
    result = (*(int (__fastcall **)(int, int, uint))(dword_225B6C0[0] + 20))(
               v2,
               v3,
               *(uint *)(dword_225B6C0[0] + 32));
  }
  return result;
}

//----- (02233E8C) --------------------------------------------------------
int __fastcall Function_2233e8c(int a1, uint *a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int result;
  int v7;
  long long v8;
  long long v9;
  int v10;

  v10 = a4;
  v4 = a1;
  v5 = a2;
  result = Function_2233a34(dword_225B6C0[0], a1, 0);
  if ( result != -1 )
  {
    if ( Function_22328f0() != v4 )
    {
      if ( *(uchar *)(dword_225B6C0[0] + 1694) )
      {
        v7 = *(ushort *)(dword_225B6C0[0] + 1692);
        if ( v7 == *v5 )
        {
          Function_2234294(dword_225B6C0[0] + 1464 + 76 * v7, &v9);
          Function_2234294(v5, &v8);
          result = v9 - v8;
          if ( v9 < v8 )
            return result;
          *(uchar *)(dword_225B6C0[0] + 1695) = 1;
          Function_66_2233064();
        }
      }
    }
    result = Function_2234074(dword_225B6C0[0], *v5, v4, v5);
  }
  return result;
}

//----- (02233F18) --------------------------------------------------------
int __fastcall Function_2233f18(int a1, uint *a2)
{
  int v2;
  uint *v3;
  int result;

  v2 = a1;
  v3 = a2;
  result = Function_2233a34(dword_225B6C0[0], a1, 0);
  if ( result != -1 )
  {
    result = Function_22340f0(dword_225B6C0[0], *v3, v2);
    if ( *(ushort *)(dword_225B6C0[0] + 1692) == *v3 && result == 1 )
    {
      result = 1695;
      *(uchar *)(dword_225B6C0[0] + 1695) = 1;
    }
  }
  return result;
}

//----- (02233F60) --------------------------------------------------------
int __fastcall Function_2233f60(int a1)
{
  return (*(int (__fastcall **)(int, uint))(dword_225B6C0[0] + 24))(a1, *(uint *)(dword_225B6C0[0] + 32));
}

//----- (02233F74) --------------------------------------------------------
int __fastcall Function_2233f74(int a1, int a2, int a3)
{
  int result;

  if ( !a1 )
    return (*(int (__fastcall **)(int, int, uint))(dword_225B6C0[0] + 28))(a2, a3, *(uint *)(dword_225B6C0[0] + 32));
  result = 307;
  *(uchar *)(dword_225B6C0[0] + 307) = 1;
  return result;
}

//----- (02233FA0) --------------------------------------------------------
int __fastcall Function_2233fa0(int a1)
{
  if ( !a1 )
    return 1;
  *(uchar *)(dword_225B6C0[0] + 306) = 1;
  return 0;
}

//----- (02233FC0) --------------------------------------------------------
int __fastcall Function_2233fc0(int a1)
{
  int result;

  if ( !a1 )
    return Function_223431c(dword_225B6C0[0] + 1696);
  result = 306;
  *(uchar *)(dword_225B6C0[0] + 306) = 1;
  return result;
}

//----- (02233FEC) --------------------------------------------------------
int __fastcall Function_2233fec(int a1)
{
  int result;

  if ( !a1 )
    return Function_223439c(dword_225B6C0[0] + 1704);
  result = 306;
  *(uchar *)(dword_225B6C0[0] + 306) = 1;
  return result;
}

//----- (02234018) --------------------------------------------------------
int Function_2234018()
{
  int result;

  if ( *(uint *)(dword_225B6C0[0] + 2432) != 1 )
    ErrorHandler();
  result = 2432;
  *(uint *)(dword_225B6C0[0] + 2432) = 2;
  return result;
}

//----- (02234040) --------------------------------------------------------
int Function_2234040()
{
  int result;

  result = 305;
  *(uchar *)(dword_225B6C0[0] + 305) = 1;
  return result;
}

//----- (02234054) --------------------------------------------------------
int __fastcall Function_2234054(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Call_FillMemWithValue((int *)(a1 + 1464), 0, 0xE4u);
  result = 1692;
  *(ushort *)(v1 + 1692) = 3;
  return result;
}

//----- (02234074) --------------------------------------------------------
int __fastcall Function_2234074(int a1, int a2, int a3, int *a4)
{
  int v4;
  int v5;
  int *v6;
  int result;
  int v8;
  int *v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v13 = a3;
  if ( a2 >= 3 )
    ErrorHandler();
  if ( Function_223412c(v5, v4) != 1 || (result = v13, v13 == *(uint *)(v5 + 76 * v4 + 1536)) )
  {
    v8 = 76 * v4;
    v9 = (int *)(v5 + 76 * v4 + 1464);
    v10 = 8;
    do
    {
      v11 = *v6;
      v12 = v6[1];
      v6 += 2;
      *v9 = v11;
      v9[1] = v12;
      v9 += 2;
      --v10;
    }
    while ( v10 );
    *v9 = *v6;
    result = 1532;
    if ( !*(ushort *)(v5 + 1532 + v8) )
    {
      *(ushort *)(v5 + 1532 + v8) = 1;
      *(uint *)(v5 + v8 + 1536) = v13;
      result = Function_223414c(v5, v4);
      *(ushort *)(v5 + v8 + 1534) = result;
    }
  }
  return result;
}

//----- (022340F0) --------------------------------------------------------
int __fastcall Function_22340f0(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( a2 >= 3 )
    ErrorHandler();
  if ( Function_223412c(v4, v3) != 1 )
    return 0;
  v6 = v4 + 76 * v3;
  if ( v5 != *(uint *)(v6 + 1536) )
    return 0;
  *(ushort *)(v6 + 1532) = 0;
  return 1;
}

//----- (0223412C) --------------------------------------------------------
int __fastcall Function_223412c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 3 )
    ErrorHandler();
  return *(ushort *)(v3 + 76 * v2 + 1532);
}

//----- (0223414C) --------------------------------------------------------
int __fastcall Function_223414c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v7;
  uint v8;
  int v9;
  long long v10;
  bool v11;
  long long v12;
  long long v13;
  int v14;

  v14 = a4;
  v4 = a1;
  v5 = a2;
  if ( !Function_223412c(a1, a2) )
    return 0;
  v7 = Function_22341c0(v4, v5);
  Function_2234294(v7, &v13);
  v10 = *(ull *)(v4 + 412) - v13;
  v9 = HIDWORD(v10);
  v8 = v10;
  if ( v10 <= 30 )
  {
    if ( v10 < 0 )
    {
      v8 = 0;
      v9 = 0;
    }
  }
  else
  {
    v8 = 30;
    v9 = 0;
  }
  v11 = v8 <= 0x3C;
  LODWORD(v12) = 60 - v8;
  HIDWORD(v12) = -(v9 + !v11);
  return (ushort)ll_mul(v12, 30LL);
}

//----- (022341C0) --------------------------------------------------------
int __fastcall Function_22341c0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 3 )
    ErrorHandler();
  if ( *(ushort *)(v3 + 76 * v2 + 1532) != 1 )
    ErrorHandler();
  return v3 + 1464 + 76 * v2;
}

//----- (022341F4) --------------------------------------------------------
uint __fastcall Function_22341f4(int a1, int a2, uint a3, int a4)
{
  uint v4;
  int v5;
  int v6;
  int v7;
  uint result;

  if ( *(uchar *)(dword_225B6C0[0] + 1694) == 1 )
  {
    v4 = ((int (*)(void))dword_21D2598[30])();
    if ( v4 > 4 )
      ErrorHandler();
    a3 = dword_225B6C0[0] + 1464;
    v5 = dword_225B6C0[0] + 1464 + 76 * *(ushort *)(dword_225B6C0[0] + 1692);
    if ( *(uint *)(v5 + 8) != v4 )
    {
      *(uint *)(v5 + 8) = v4;
      Function_2236ac4(v5);
    }
  }
  v6 = 0;
  v7 = 0;
  do
  {
    result = dword_225B6C0[0] + v7;
    if ( *(ushort *)(dword_225B6C0[0] + v7 + 1532) == 1 )
    {
      if ( *(ushort *)(result + 1534) )
      {
        a3 = *(ushort *)(result + 1534) - 1;
        *(ushort *)(result + 1534) = a3;
      }
      result = Function_223414c(dword_225B6C0[0], v6, a3, a4);
      a3 = *(ushort *)(dword_225B6C0[0] + v7 + 1534);
      if ( result < a3 )
      {
        a3 = 1534;
        *(ushort *)(dword_225B6C0[0] + v7 + 1534) = result;
      }
    }
    ++v6;
    v7 += 76;
  }
  while ( v6 < 3 );
  return result;
}

//----- (02234288) --------------------------------------------------------
int __fastcall Function_2234288(int result, int *a2)
{
  int v2;
  int v3;

  v2 = *a2;
  v3 = a2[1];
  *(uint *)(result + 16) = v2;
  *(uint *)(result + 20) = v3;
  return result;
}

//----- (02234294) --------------------------------------------------------
int __fastcall Function_2234294(int a1, uint *a2)
{
  int v2;
  int result;

  v2 = *(uint *)(a1 + 16);
  result = *(uint *)(a1 + 20);
  *a2 = v2;
  a2[1] = result;
  return result;
}

//----- (022342A0) --------------------------------------------------------
void Function_22342a0()
{
  ;
}

//----- (022342A4) --------------------------------------------------------
int __fastcall Function_22342a4(int result, int a2)
{
  if ( *(uchar *)(a2 + 1694) == 1 )
    return Function_66_2233064();
  if ( !result )
  {
    result = 1695;
    *(uchar *)(dword_225B6C0[0] + 1695) = 1;
  }
  return result;
}

//----- (022342CC) --------------------------------------------------------
int __fastcall Function_22342cc(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = 0;
  v3 = 0;
  if ( (int)*(ushort *)(a1 + 14) > 0 )
  {
    v4 = a1;
    do
    {
      if ( a2 == *(uint *)(v4 + 20) )
        v2 = *(uint *)(v4 + 16);
      ++v3;
      v4 += 8;
    }
    while ( v3 < *(ushort *)(a1 + 14) );
  }
  return v2;
}

//----- (022342F4) --------------------------------------------------------
int __fastcall Function_22342f4(int *a1, int a2, uint a3)
{
  short v3;
  int *v4;
  int result;

  v3 = a2;
  v4 = a1;
  *a1 = malloc(a3, 8 * a2);
  *((ushort *)v4 + 2) = v3;
  result = 0;
  *((ushort *)v4 + 3) = 0;
  return result;
}

//----- (0223430C) --------------------------------------------------------
int __fastcall Function_223430c(int *a1)
{
  int *v1;
  int result;

  v1 = a1;
  free(*a1);
  result = 0;
  *v1 = 0;
  return result;
}

//----- (0223431C) --------------------------------------------------------
int *__fastcall Function_223431c(int a1, int *a2, uint a3)
{
  int v3;
  uint v4;
  int *v5;
  int *result;

  v3 = a1;
  v4 = a3;
  v5 = a2;
  if ( a3 >= *(ushort *)(a1 + 4) )
    ErrorHandler();
  if ( v4 >= *(ushort *)(v3 + 4) )
    v4 = *(ushort *)(v3 + 4);
  result = MI_CpuCopy32(v5, *(uint **)v3, 8 * v4);
  *(ushort *)(v3 + 6) = v4;
  return result;
}

//----- (02234344) --------------------------------------------------------
int __fastcall Function_2234344(int a1, int a2)
{
  int v2;
  uint *v3;

  v2 = 0;
  if ( (int)*(ushort *)(a1 + 6) <= 0 )
    return 0;
  v3 = *(uint **)a1;
  while ( a2 != *v3 )
  {
    ++v2;
    v3 += 2;
    if ( v2 >= *(ushort *)(a1 + 6) )
      return 0;
  }
  return 1;
}

//----- (0223436C) --------------------------------------------------------
int __fastcall Function_223436c(int a1, int a2)
{
  int v2;
  uint *v3;

  v2 = 0;
  if ( (int)*(ushort *)(a1 + 6) <= 0 )
    return 0;
  v3 = *(uint **)a1;
  while ( a2 != *v3 )
  {
    ++v2;
    v3 += 2;
    if ( v2 >= *(ushort *)(a1 + 6) )
      return 0;
  }
  return *(uint *)(*(uint *)a1 + 8 * v2 + 4);
}

//----- (0223439C) --------------------------------------------------------
uchar *__fastcall Function_223439c(uchar *a1, char *a2)
{
  return memcpy(a1, a2, 728);
}

//----- (022343A8) --------------------------------------------------------
int *__fastcall Function_22343a8(int a1, int a2, uint a3, int a4)
{
  uint v4;
  int *v5;
  uint v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint *v12;
  int v13;
  int v14;
  uint *v15;
  int v16;
  int v17;
  short *v18;
  uint *v19;
  short *v20;
  int v21;
  BOOL v22;
  uint *v23;
  int v24;
  int v26;
  int v27;
  uint v28;
  int *v29;
  int *v30;
  int v31;
  int v32;
  uint v33;
  int v34;

  v34 = a4;
  v4 = a3;
  v26 = a1;
  v27 = a2;
  v28 = a4;
  v5 = (int *)malloc(a3, 48);
  Call_FillMemWithValue(v5, 0, 0x30u);
  v5[4] = malloc(v4, 144 * v26);
  v6 = 0;
  v5[5] = v26;
  if ( v26 )
  {
    v7 = 0;
    do
    {
      Function_22349c8(v5[4] + v7);
      ++v6;
      v7 += 144;
    }
    while ( v6 < v5[5] );
  }
  *v5 = (int)Function_202298c(1, v4);
  v5[1] = (int)Function_202298c(2, v4);
  v5[2] = (int)Function_2022bd8(20, v4);
  Function_2020b90(1, v4);
  v33 = v4;
  v32 = v26;
  v5[3] = (int)Function_2020c44((int)&v32);
  v30 = LoadFromNARC_8(81, v4, v8, v9);
  v29 = LoadFromNARC_8(186, v4, v10, v11);
  v12 = Function_200723c((int)v29, 0x7Fu, 0, v28, 0);
  Function_2022a1c((uint *)*v5, (int)v12, 127);
  Function_2231668((int)v12);
  v13 = Function_20b3c0c_GetAdrOfDataPart((int)v12);
  if ( v13
    && ((v14 = v13 + 8, v13 == -8) || !*(uchar *)(v13 + 9) ? (v15 = 0) : (v15 = (uint *)(v14
                                                                                         + *(ushort *)(v13 + 14)
                                                                                         + 4)),
        v15) )
  {
    v16 = v13 + *v15;
  }
  else
  {
    v16 = 0;
  }
  v17 = 0;
  v18 = &word_2258B28;
  v5[11] = Function_20b34f8(v16, 0, v14);
  do
  {
    v19 = Function_200723c((int)v30, (ushort)*v18, 0, v28, 0);
    Function_2022a1c((uint *)v5[1], (int)v19, (ushort)*v18);
    ++v17;
    ++v18;
  }
  while ( v17 < 2 );
  v20 = &word_2258B38;
  v21 = 0;
  do
  {
    if ( (v27 == 0) != v21 )
    {
      v22 = (ushort)(v20[1] & 0x8000) == 0;
      v23 = Function_200723c((int)v30, v20[1] & 0x7FFF, 0, v28, 0);
      v24 = Function_2022c58((uint *)v5[2], (int)v23, v20[1] & 0x7FFF, v22, v28);
      v31 = v24;
      if ( v22 == 1 )
      {
        Function_2022ebc(v24);
        Function_2022e08(v31);
        Function_2022e54(v31);
      }
    }
    ++v21;
    v20 += 2;
  }
  while ( v21 < 20 );
  Function_22348fc(v5 + 6, v29, 128, v28);
  Call_FS_CloseFile(v30);
  Call_FS_CloseFile(v29);
  return v5;
}

//----- (02234548) --------------------------------------------------------
uint __fastcall Function_2234548(int a1)
{
  int v1;

  v1 = a1;
  Function_2234958(a1 + 24);
  Function_2022d58(*(int **)(v1 + 8));
  Function_2022ae4(*(uint **)v1);
  Function_2022ae4(*(uint **)(v1 + 4));
  Function_2020ccc(*(uchar **)(v1 + 12));
  Function_2020bd0();
  Function_2022c1c(*(int **)(v1 + 8));
  Function_20229d8(*(int **)v1);
  Function_20229d8(*(int **)(v1 + 4));
  free(*(uint *)(v1 + 16));
  return free(v1);
}

//----- (02234590) --------------------------------------------------------
uint __fastcall Function_2234590(int a1)
{
  int v1;
  uint result;
  uint v3;
  int v4;

  v1 = a1;
  result = *(uint *)(a1 + 20);
  v3 = 0;
  if ( result )
  {
    v4 = 0;
    do
    {
      Function_22349e0(*(uint *)(v1 + 16) + v4);
      Function_2234bc4(*(uint *)(v1 + 16) + v4);
      Function_2234d08(*(uint *)(v1 + 16) + v4);
      result = *(uint *)(v1 + 20);
      ++v3;
      v4 += 144;
    }
    while ( v3 < result );
  }
  return result;
}

//----- (022345C4) --------------------------------------------------------
uint __fastcall Function_22345c4(int a1, int a2, int a3, int a4)
{
  int v4;
  uint result;
  uint v6;
  int v7;

  v4 = a1;
  Function_2020c08(a1, a2, a3, a4);
  result = Function_223496c(v4 + 24);
  if ( result )
  {
    result = *(uint *)(v4 + 20);
    v6 = 0;
    if ( result )
    {
      v7 = 0;
      do
      {
        if ( Function_22349b8(*(uint *)(v4 + 16) + v7) == 1 )
          Function_22349d4(*(uint *)(v4 + 16) + v7);
        result = *(uint *)(v4 + 20);
        ++v6;
        v7 += 144;
      }
      while ( v6 < result );
    }
  }
  return result;
}

//----- (02234604) --------------------------------------------------------
int __fastcall Function_2234604(int a1)
{
  return Function_2020d68(*(uint *)(a1 + 12));
}

//----- (02234610) --------------------------------------------------------
int __fastcall Function_2234610(int a1)
{
  return Function_2234960(a1 + 24);
}

//----- (0223461C) --------------------------------------------------------
int __fastcall Function_223461c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v18;
  int v19;
  int *v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  char v28;
  int v29;
  char *v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  char v37;
  int v38;

  v38 = a4;
  v4 = a1;
  v5 = a2;
  v6 = Function_2234980();
  *(uint *)(v6 + 4) = v5;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v22 = 4096;
  v23 = 4096;
  v24 = 4096;
  v7 = ((int (__fastcall *)(int, int))dword_221F800[12772])(v5, 7);
  v8 = Function_22348b0(v7);
  v9 = Function_2022b20(*(uint *)v4, 127);
  v19 = Function_2022b54(v9);
  v20 = (int *)Function_2022d98(*(uint **)(v4 + 8), *(ushort *)(v8 + 2) & 0x7FFF);
  v18 = Function_2022df4(v20);
  if ( (uint)*(ushort *)(v8 + 2) << 16 >> 31 == 1 )
    v10 = 446;
  else
    v10 = 445;
  v11 = Function_2022b20(*(uint *)(v4 + 4), v10);
  v12 = (uint *)Function_2022b54(v11);
  Function_2024184(v12, &v28);
  if ( (uint)*(ushort *)(v8 + 2) << 16 >> 31 == 1 )
  {
    Function_2021284(&v37, v19, v18, (int)&dword_2258B88, &v28);
  }
  else
  {
    v13 = Function_2022ef4((int)v20);
    v14 = Function_2022f04((int)v20);
    v15 = Function_2022f14((int)v20);
    Function_202125c(&v37, v19, v18, (int)&dword_2258B88, &v28, v13, v14, v15);
  }
  v21 = ((int (__fastcall *)(int))dword_221F800[12857])(v5);
  ((void (__fastcall *)(int *, int *))dword_225B6C0[1040])(&v21, &v25);
  v27 += 0x10000;
  v29 = *(uint *)(v4 + 12);
  v30 = &v37;
  v31 = v25;
  v32 = v26;
  v33 = v27;
  v34 = v22;
  v35 = v23;
  v36 = v24;
  v16 = Function_202119c((uint **)&v29);
  *(uint *)(v6 + 8) = v16;
  Function_2021444(v16, (int)Function_2234d78, v6);
  Function_2234970(v4 + 24, v6 + 12);
  Function_2017350((uint *)(v6 + 12), v25, 0x2000, v27 - 0x8000);
  *(uchar *)v6 = *(uchar *)v6 & 0xF0 | 1;
  *(uchar *)v6 = *(uchar *)v6 & 0x3F | 0x40;
  *(uchar *)v6 &= 0xCFu;
  *(uint *)(v6 + 140) = *(uint *)(v4 + 44);
  return v6;
}

//----- (02234798) --------------------------------------------------------
int *__fastcall Function_2234798(int *a1)
{
  int *v1;

  v1 = a1;
  Function_20211fc(a1[2]);
  return Call_FillMemWithValue(v1, 0, 0x90u);
}

//----- (022347B0) --------------------------------------------------------
uchar *__fastcall Function_22347b0(uchar *result, char a2)
{
  *result = a2 & 0xF | *result & 0xF0;
  return result;
}

//----- (022347C4) --------------------------------------------------------
uint *__fastcall Function_22347c4(int a1, int a2)
{
  uint *result;

  result = (uint *)(a1 + 140);
  *result = a2;
  return result;
}

//----- (022347CC) --------------------------------------------------------
uint __fastcall Function_22347cc(uchar *a1)
{
  return (uint)*a1 << 26 >> 30;
}

//----- (022347D4) --------------------------------------------------------
int __fastcall Function_22347d4(int a1, int a2, int a3, int a4)
{
  int v4;
  char v6;
  int v7;
  int v8;

  v8 = a4;
  v4 = a1;
  ((void (__fastcall *)(int, char *))dword_225B6C0[1040])(a2, &v6);
  v7 += 0x10000;
  return Function_22347f8(v4, &v6);
}

//----- (022347F8) --------------------------------------------------------
uint *__fastcall Function_22347f8(int a1, int *a2)
{
  int v2;
  int *v3;

  v2 = a1;
  v3 = a2;
  Function_20212a8(*(uint **)(a1 + 8), a2);
  return Function_2017350((uint *)(v2 + 12), *v3, 0x2000, v3[2] - 0x8000);
}

//----- (0223481C) --------------------------------------------------------
int __fastcall Function_223481c(int a1, uint *a2)
{
  uint *v2;
  uint *v3;
  uint *v4;
  int v5;
  int result;

  v2 = a2;
  v3 = (uint *)Function_20212c0(*(uint *)(a1 + 8));
  v5 = v3[1];
  v4 = v3 + 2;
  *v2 = *v3;
  v2[1] = v5;
  result = v3[2];
  v2[2] = *v4;
  return result;
}

//----- (02234834) --------------------------------------------------------
int __fastcall Function_2234834(int a1)
{
  int v1;
  short v2;

  v1 = a1;
  v2 = Function_22348d8(1);
  Function_2021344(*(uint *)(v1 + 8), v2);
  return Function_20213a4(*(uint *)(v1 + 8), 0);
}

//----- (02234850) --------------------------------------------------------
uchar *__fastcall Function_2234850(uchar *result, char a2)
{
  result[1] = result[1] & 0xFE | 1;
  result[1] = 2 * a2 | result[1] & 1;
  result[2] = 0;
  result[3] = 1;
  return result;
}

//----- (0223487C) --------------------------------------------------------
int __fastcall Function_223487c(int result)
{
  *(uchar *)(result + 1) &= 0xFEu;
  return result;
}

//----- (02234888) --------------------------------------------------------
int __fastcall Function_2234888(int result, char a2)
{
  *(uchar *)(result + 3) = a2;
  return result;
}

//----- (0223488C) --------------------------------------------------------
int __fastcall Function_223488c(uchar *a1, char a2)
{
  *a1 = (a2 << 6) | *a1 & 0x3F;
  return Function_2234d3c();
}

//----- (022348A8) --------------------------------------------------------
uint __fastcall Function_22348a8(uchar *a1)
{
  return (uint)*a1 << 24 >> 30;
}

//----- (022348B0) --------------------------------------------------------
short *__fastcall Function_22348b0(int a1)
{
  short *v1;
  int v2;

  v1 = word_2258B38;
  v2 = 0;
  do
  {
    if ( a1 == (ushort)*v1 )
      return &word_2258B38[2 * v2];
    ++v2;
    v1 += 2;
  }
  while ( v2 < 20 );
  ErrorHandler();
  return 0;
}

//----- (022348D8) --------------------------------------------------------
int __fastcall Function_22348d8(int a1, int a2)
{
  if ( !a1 )
    a2 += 4;
  return a2;
}

//----- (022348E4) --------------------------------------------------------
int __fastcall Function_22348e4(int a1, int a2, int a3)
{
  return u32_div_f(((a2 + 1) & 0xFFFF) * a3, a1) << 12;
}

//----- (022348FC) --------------------------------------------------------
uint __fastcall Function_22348fc(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  uint *v7;
  int v8;
  int v9;
  int v10;
  int v12;
  int v13;

  v13 = a4;
  v4 = a1;
  ((void (__fastcall *)(int *))dword_225B6C0[1052])(&v12);
  v5 = v12;
  *v4 = v12;
  v6 = Function_20b3c0c_GetAdrOfDataPart(v5);
  v4[1] = v6;
  if ( v6
    && (v6 == -8 || !*(uchar *)(v6 + 9) ? (v7 = 0) : (v7 = (uint *)(v6 + 8 + *(ushort *)(v6 + 14) + 4)), v7) )
  {
    v8 = v6 + *v7;
  }
  else
  {
    v8 = 0;
  }
  v4[2] = v8;
  v4[3] = Function_20b3c1c_GetTexOffsets(*v4);
  Function_201cbb0(*v4, v4[3]);
  return Function_20b3724(v4[2], 20, v9, v10);
}

//----- (02234958) --------------------------------------------------------
int __fastcall Function_2234958(int *a1)
{
  return Function_2017110(a1);
}

//----- (02234960) --------------------------------------------------------
uint __fastcall Function_2234960(int a1, int a2, int a3)
{
  *(uint *)(a1 + 16) = a2;
  return Function_20b3764(*(uint *)(a1 + 8), a2, a3, (int)Function_20b3764);
}

//----- (0223496C) --------------------------------------------------------
int __fastcall Function_223496c(int a1)
{
  return *(uint *)(a1 + 16);
}

//----- (02234970) --------------------------------------------------------
int __fastcall Function_2234970(int a1, int *a2)
{
  return Function_2017258(a2, a1);
}

//----- (02234980) --------------------------------------------------------
int __fastcall Function_2234980(int a1)
{
  int v1;
  uint v2;
  int v3;
  int result;

  v1 = a1;
  v2 = 0;
  if ( *(uint *)(a1 + 20) )
  {
    v3 = 0;
    while ( Function_22349b8(*(uint *)(v1 + 16) + v3) )
    {
      ++v2;
      v3 += 144;
      if ( v2 >= *(uint *)(v1 + 20) )
        goto LABEL_6;
    }
    result = *(uint *)(v1 + 16) + 144 * v2;
  }
  else
  {
LABEL_6:
    ErrorHandler();
    result = 0;
  }
  return result;
}

//----- (022349B8) --------------------------------------------------------
BOOL __fastcall Function_22349b8(int a1)
{
  return *(uint *)(a1 + 4) != 0;
}

//----- (022349C8) --------------------------------------------------------
int *__fastcall Function_22349c8(int *a1)
{
  return Call_FillMemWithValue(a1, 0, 0x90u);
}

//----- (022349D4) --------------------------------------------------------
int *__fastcall Function_22349d4(int a1)
{
  return Function_2017294(a1 + 12);
}

//----- (022349E0) --------------------------------------------------------
int __fastcall Function_22349e0(uchar *a1)
{
  int v1;
  int result;
  int v3;
  uint v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v1 = (int)a1;
  result = *a1 & 0xF;
  if ( result )
  {
    v3 = ((int (__fastcall *)(uint, int))dword_221F800[12772])(*(uint *)(v1 + 4), 5);
    v4 = ((int (__fastcall *)(uint, int))dword_221F800[12772])(*(uint *)(v1 + 4), 8);
    if ( *(ushort *)(v1 + 134) > v4 || *(uchar *)(v1 + 132) != v3 )
    {
      if ( Function_2234cd8(*(uchar *)(v1 + 132)) == 1 )
      {
        *(uchar *)(v1 + 133) = Function_2021358(*(uint *)(v1 + 8));
        *(uint *)(v1 + 136) = Function_20213d4(*(uint *)(v1 + 8));
      }
      *(uchar *)(v1 + 132) = v3;
    }
    *(ushort *)(v1 + 134) = v4;
    ((void (__fastcall *)(int))*(&off_2258E28 + v3))(v1);
    v5 = ((int (__fastcall *)(uint))dword_221F800[12863])(*(uint *)(v1 + 4));
    v7 = v5;
    v8 = v5;
    result = Function_22347d4(v1, (int)&v8, (int)&v7, v6);
  }
  return result;
}

//----- (02234A78) --------------------------------------------------------
int __fastcall Function_2234a78(int a1)
{
  int v1;
  int v2;
  short v3;

  v1 = a1;
  v2 = ((int (__fastcall *)(uint, int))dword_221F800[12772])(*(uint *)(a1 + 4), 6);
  v3 = Function_22348d8(1, v2);
  Function_2021344(*(uint *)(v1 + 8), v3);
  return Function_20213a4(*(uint *)(v1 + 8), 0);
}

//----- (02234AA0) --------------------------------------------------------
int __fastcall Function_2234aa0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  ushort v5;
  int v6;
  int v7;
  int result;

  v1 = a1;
  v2 = ((int (__fastcall *)(uint, int))dword_221F800[12772])(*(uint *)(a1 + 4), 6);
  v3 = Function_22348d8(1, v2);
  v4 = ((ushort (__fastcall *)(uint, int))dword_221F800[12772])(*(uint *)(v1 + 4), 9);
  v5 = ((int (__fastcall *)(uint, int))dword_221F800[12772])(*(uint *)(v1 + 4), 8);
  v6 = Function_22348e4(v4, v5, 8);
  Function_2021344(*(uint *)(v1 + 8), v3);
  v7 = *(uint *)(v1 + 8);
  if ( *(uchar *)(v1 + 133) == v3 )
  {
    Function_20213a4(v7, 0);
    result = Function_2021368(*(uint *)(v1 + 8), v6 + *(uint *)(v1 + 136));
  }
  else
  {
    Function_20213a4(v7, 0);
    result = Function_2021368(*(uint *)(v1 + 8), v6);
  }
  return result;
}

//----- (02234B10) --------------------------------------------------------
int __fastcall Function_2234b10(int a1)
{
  int v1;
  int v3;
  short v4;

  v1 = a1;
  if ( (((int (__fastcall *)(uint, int))dword_221F800[12772])(*(uint *)(a1 + 4), 8) & 0xFFFFu) < 4 )
    return Function_20213a4(*(uint *)(v1 + 8), 0x4000);
  v3 = ((int (__fastcall *)(uint, int))dword_221F800[12772])(*(uint *)(v1 + 4), 6);
  v4 = Function_22348d8(1, v3);
  Function_2021344(*(uint *)(v1 + 8), v4);
  return Function_20213a4(*(uint *)(v1 + 8), 0);
}

//----- (02234B54) --------------------------------------------------------
int __fastcall Function_2234b54(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  ushort v5;
  int v6;
  int v7;
  int result;

  v1 = a1;
  v2 = ((int (__fastcall *)(uint, int))dword_221F800[12772])(*(uint *)(a1 + 4), 6);
  v3 = Function_22348d8(0, v2);
  v4 = ((ushort (__fastcall *)(uint, int))dword_221F800[12772])(*(uint *)(v1 + 4), 9);
  v5 = ((int (__fastcall *)(uint, int))dword_221F800[12772])(*(uint *)(v1 + 4), 8);
  v6 = Function_22348e4(v4, v5, 4);
  Function_2021344(*(uint *)(v1 + 8), v3);
  v7 = *(uint *)(v1 + 8);
  if ( *(uchar *)(v1 + 133) == v3 )
  {
    Function_20213a4(v7, 0);
    result = Function_2021368(*(uint *)(v1 + 8), v6 + *(uint *)(v1 + 136));
  }
  else
  {
    Function_20213a4(v7, 0);
    result = Function_2021368(*(uint *)(v1 + 8), v6);
  }
  return result;
}

//----- (02234BC4) --------------------------------------------------------
uchar *__fastcall Function_2234bc4(uchar *result)
{
  if ( !(*result & 0xF) && (result[1] & 1) == 1 )
    result = (uchar *)((int (*)(void))*(&off_2258E1C + ((uint)(uchar)result[1] << 24 >> 25)))();
  return result;
}

//----- (02234BEC) --------------------------------------------------------
int __fastcall Function_2234bec(int a1)
{
  int v1;
  uint v2;
  short v3;
  int result;

  v1 = a1;
  v2 = *(uchar *)(a1 + 2);
  if ( !((v2 >> 31) + __ROR4__((v2 << 30) - (v2 >> 31), 30)) )
  {
    v3 = Function_22348d8(1, *((uchar *)&dword_2258B24 + (v2 >> 2)));
    Function_2021344(*(uint *)(v1 + 8), v3);
    Function_20213a4(*(uint *)(v1 + 8), 0);
  }
  result = *(uchar *)(v1 + 2) + *(uchar *)(v1 + 3);
  if ( result >= 16 )
  {
    result = 0;
    *(uchar *)(v1 + 2) = 0;
  }
  else
  {
    *(uchar *)(v1 + 2) = result;
  }
  return result;
}

//----- (02234C34) --------------------------------------------------------
int __fastcall Function_2234c34(int a1)
{
  int v1;
  int result;
  int v3;
  short v4;

  v1 = a1;
  result = *(uchar *)(a1 + 2);
  if ( !result )
  {
    ((void (__fastcall *)(uint, int))dword_221F800[12772])(*(uint *)(v1 + 4), 6);
    v3 = ((int (__fastcall *)(uint, int))dword_221F800[12772])(*(uint *)(v1 + 4), 6);
    v4 = Function_22348d8(1, v3);
    Function_2021344(*(uint *)(v1 + 8), v4);
    Function_20213a4(*(uint *)(v1 + 8), 0x4000);
    result = *(uchar *)(v1 + 2) + 1;
    *(uchar *)(v1 + 2) = result;
  }
  return result;
}

//----- (02234C70) --------------------------------------------------------
uint __fastcall Function_2234c70(int a1)
{
  int v1;
  int v2;
  int v3;
  short v4;
  int v5;
  short v6;
  uint result;

  v1 = a1;
  v2 = *(uchar *)(a1 + 2);
  if ( v2 )
  {
    if ( v2 == 4 )
    {
      v5 = ((int (__fastcall *)(uint, int))dword_221F800[12772])(*(uint *)(v1 + 4), 6);
      v6 = Function_22348d8(1, v5);
      Function_2021344(*(uint *)(v1 + 8), v6);
      Function_20213a4(*(uint *)(v1 + 8), 49152);
    }
  }
  else
  {
    v3 = ((int (__fastcall *)(uint, int))dword_221F800[12772])(*(uint *)(v1 + 4), 6);
    v4 = Function_22348d8(1, v3);
    Function_2021344(*(uint *)(v1 + 8), v4);
    Function_20213a4(*(uint *)(v1 + 8), 0x4000);
  }
  result = (((uint)*(uchar *)(v1 + 2) + 1) >> 31)
         + __ROR4__(
             ((*(uchar *)(v1 + 2) + 1) << 29) - (((uint)*(uchar *)(v1 + 2) + 1) >> 31),
             29);
  *(uchar *)(v1 + 2) = result;
  return result;
}

//----- (02234CD8) --------------------------------------------------------
int __fastcall Function_2234cd8(char a1)
{
  int result;

  switch ( a1 )
  {
    case 2:
    case 3:
    case 5:
    case 6:
    case 10:
    case 11:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

//----- (02234D08) --------------------------------------------------------
int __fastcall Function_2234d08(int a1)
{
  int v1;
  int result;
  int v3;
  char v4;

  v1 = a1;
  result = Function_22349b8(a1);
  if ( result )
  {
    v3 = Function_2234d8c(*(uint *)(v1 + 8));
    v4 = *(uchar *)v1;
    if ( v3 )
      *(uchar *)v1 = v4 & 0xCF;
    else
      *(uchar *)v1 = v4 & 0xCF | 0x10;
    result = Function_2234d3c(v1);
  }
  return result;
}

//----- (02234D3C) --------------------------------------------------------
int __fastcall Function_2234d3c(uchar *a1)
{
  uchar *v1;
  int v2;
  int result;

  v1 = a1;
  v2 = *a1;
  if ( (uint)(v2 << 26) >> 30 || (uint)(v2 << 24) >> 30 != 1 )
  {
    Function_2021320(*((uint *)v1 + 2), 0);
    result = Function_2017348((int)(v1 + 12), 0);
  }
  else
  {
    Function_2021320(*((uint *)v1 + 2), 1);
    result = Function_2017348((int)(v1 + 12), 1);
  }
  return result;
}

//----- (02234D78) --------------------------------------------------------
uint __fastcall Function_2234d78(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = Function_2021430(a1);
  return Function_20b3664(v3, *(uint *)(v2 + 140), v4, v5);
}

//----- (02234D8C) --------------------------------------------------------
BOOL __fastcall Function_2234d8c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  int v13[9];
  short v14;
  short v15;
  short v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;

  v23 = a4;
  v4 = a1;
  v5 = Function_20213f4(a1);
  if ( v5 )
    v6 = v5 + 20;
  else
    v6 = 0;
  v7 = (int *)Function_20212c0(v4);
  v8 = v7[1];
  v20 = *v7;
  v21 = v8;
  v22 = v7[2];
  v14 = *(ushort *)(v6 + 30);
  v15 = *(ushort *)(v6 + 32);
  v16 = *(ushort *)(v6 + 32);
  v17 = *(uint *)(v6 + 36) >> 12;
  v18 = *(uint *)(v6 + 36) >> 12;
  v19 = *(uint *)(v6 + 36) >> 12;
  v20 += (ll_mul(*(short *)(v6 + 24), *(int *)(v6 + 36)) + 2048) >> 12;
  v21 += (ll_mul(*(short *)(v6 + 26), *(int *)(v6 + 36)) + 2048) >> 12;
  v22 += (ll_mul(*(short *)(v6 + 28), *(int *)(v6 + 36)) + 2048) >> 12;
  v22 -= (ll_mul(*(short *)(v6 + 32), *(int *)(v6 + 36)) + 2048) >> 12;
  MTX_Identity33_(v13);
  MI_Copy36B(v13, dword_21C5B48);
  dword_21C5B88 &= 0xFFFFFF5B;
  v9 = (int *)Function_20212ec(v4);
  Function_20af4ec(v9);
  return Function_201cf7c(&v20, &v14, v10, v11) != 0;
}

//----- (02234EA8) --------------------------------------------------------
int Function_2234ea8()
{
  return Function_2234eaa();
}

//----- (02234EAA) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02234F2C) --------------------------------------------------------
uint __fastcall Function_2234f2c(int a1, int a2, int a3, int a4, uint *a5)
{
  int v5;
  int v6;
  uint *v7;
  uint result;
  uint v9;
  int v10;
  uint *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uint v16;
  int v17;

  v14 = a2;
  v15 = a4;
  v5 = 0;
  v6 = a3;
  v13 = a1;
  v7 = Function_2007250(a1, 0x12u, 0, a2, 0, &v17);
  if ( v6 >= u32_div_f(v17, 6) )
    ErrorHandler();
  if ( *((ushort *)v7 + 3 * v6) != 2 )
  {
    v5 = 1;
    *a5 = *((short *)v7 + 3 * v6 + 2);
  }
  result = free((int)v7);
  if ( !v5 )
  {
    v9 = Function_20996d4(v6);
    v10 = Function_2099764(v9);
    v11 = Function_2007250(v13, v10, 0, v14, 0, (int *)&v16);
    if ( v15 >= (int)(v16 >> 2) )
    {
      ErrorHandler();
      v12 = *((short *)v11 + 1);
    }
    else
    {
      v12 = SHIWORD(v11[v15]);
    }
    *a5 = v12;
    result = free((int)v11);
  }
  return result;
}

//----- (02234FC4) --------------------------------------------------------
int Function_2234fc4()
{
  return dword_225B6C0[1];
}

//----- (02234FD4) --------------------------------------------------------
int __fastcall Function_2234fd4(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7;
  int v8;
  int v9;
  int v10;
  int result;

  v7 = a1;
  v8 = a2;
  v9 = a3;
  v10 = a4;
  if ( Function_20a44c8(a5) && Function_20a450c(a5) )
    result = Function_2235058(v7, v8, v9, v10, *(uint *)(a5 + 28), a6, a7, 1);
  else
    result = 3;
  return result;
}

//----- (02235058) --------------------------------------------------------
int __fastcall Function_2235058(int a1, int a2, int a3, int *a4, int a5, int a6, int a7, int a8)
{
  int v8;
  int v9;
  int v10;
  int *v11;
  int result;
  uint *v13;
  int *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  uint v20;
  uint v21;
  uint v22;
  int v23;
  int v24;
  int v25;
  int v26;
  char v27;
  char v28;
  int (*v29)();
  int (*v30)();
  int v31;

  v8 = a1;
  v9 = a2;
  v10 = a3;
  v11 = a4;
  if ( dword_225B6C0[1] )
    return 4;
  v29 = Function_2239f84;
  v30 = Function_223a1c8;
  v31 = 5;
  v13 = (uint *)Function_2246290(1148);
  if ( v13 )
  {
    *v13 = 0;
    v13[1] = 0;
    v14 = v13 + 2;
    v15 = 4;
    do
    {
      v16 = *v11;
      v17 = v11[1];
      v18 = v11[2];
      v19 = v11[3];
      v11 += 4;
      *v14 = v16;
      v14[1] = v17;
      v14[2] = v18;
      v14[3] = v19;
      v14 += 4;
      --v15;
    }
    while ( v15 );
    *v14 = *v11;
    v13[19] = a5;
    v13[20] = v10;
    v13[21] = a8;
    v20 = 0;
    v21 = 0;
    do
      v13[v20++ + 22] = 0;
    while ( v20 < 3 );
    v13[25] = 0;
    v13[26] = 0;
    v13[27] = 0;
    v13[28] = 0;
    v13[46] = 5;
    v22 = 0;
    do
      v13[v21++ + 47] = 0;
    while ( v21 < 3 );
    v13[52] = 5;
    do
      v13[v22++ + 53] = 0;
    while ( v22 < 3 );
    v13[58] = off_2258EA0;
    v13[59] = 0;
    v13[60] = 0;
    v13[61] = v13 + 60;
    v13[62] = off_2258EB0;
    v13[63] = 5;
    v13[64] = 0;
    v13[65] = 0;
    v13[66] = 0;
    ((void (__fastcall *)(char *, char *))dword_21D806C[0])(&v28, &v27);
    v13[64] = RTC_ConvertDateTimeToSecond((int *)&v28, &v27);
    v13[65] = v23;
    v13[67] = 1;
    v13[68] = 0;
    v13[69] = 0;
    v13[70] = 0;
    v13[71] = 1;
    v13[73] = -1;
    v13[77] = 0;
    v13[78] = 0;
    v13[80] = v13 + 78;
    Function_223ca1c(v13 + 81);
  }
  dword_225B6C0[1] = (int)v13;
  if ( !v13 )
    return 1;
  v24 = Function_2244a18(v8, v9, v10, &v29, a5);
  v25 = 0;
  if ( v24 == 1 )
  {
    v25 = 2;
  }
  else if ( v24 == 2 )
  {
    v25 = 3;
  }
  if ( v25 )
  {
    *(uint *)(dword_225B6C0[1] + 4) = v25;
    *(uint *)dword_225B6C0[1] = 10;
  }
  if ( v24 )
  {
    if ( dword_225B6C0[1] )
    {
      if ( dword_225B6C0[1] )
      {
        Function_223b620(dword_225B6C0[1] + 404, dword_225B6C0[1]);
        Function_223a9fc(dword_225B6C0[1] + 380);
        Function_223b670(dword_225B6C0[1] + 368);
        Function_223abc4(dword_225B6C0[1] + 308);
        Function_223ad4c(dword_225B6C0[1] + 308);
        *(uint *)(dword_225B6C0[1] + 232) = off_2258EA0;
        Function_2241e54(dword_225B6C0[1] + 232);
        Function_223b8e8(dword_225B6C0[1] + 272);
        Function_223aa9c(dword_225B6C0[1] + 236);
        Function_223badc(dword_225B6C0[1] + 212);
        Function_223badc(dword_225B6C0[1] + 188);
        Function_223badc(dword_225B6C0[1] + 88);
        if ( dword_225B6C0[1] )
          ((void (*)(void))dword_21D77C4[0])();
      }
      dword_225B6C0[1] = 0;
    }
    result = v24;
  }
  else
  {
    v26 = Function_2242008(dword_225B6C0[1] + 232, a5, a6, a7);
    Function_22374b4(v26);
    result = 0;
    *(uint *)dword_225B6C0[1] = 1;
  }
  return result;
}

//----- (0223535C) --------------------------------------------------------
int __fastcall Function_223535c(int a1)
{
  int v1;

  v1 = a1;
  Function_223b8e8(a1 + 24);
  return v1;
}

//----- (02235374) --------------------------------------------------------
uint *__fastcall Function_2235374(uint *a1)
{
  uint *v1;

  v1 = a1;
  *a1 = off_2258EA0;
  Function_2241e54(a1);
  Function_223b8e8(v1 + 10);
  Function_223aa9c(v1 + 1);
  return v1;
}

//----- (022353A4) --------------------------------------------------------
int Function_22353a4()
{
  int result;
  int v1;

  if ( !dword_225B6C0[1] )
    return 0;
  if ( *(uint *)dword_225B6C0[1] == 9 )
    return 0;
  Function_223abc4(dword_225B6C0[1] + 308);
  *(uint *)dword_225B6C0[1] = 9;
  result = Function_2244e98();
  v1 = 0;
  if ( result == 1 )
  {
    v1 = 2;
  }
  else if ( result == 2 )
  {
    v1 = 3;
  }
  if ( v1 )
  {
    *(uint *)(dword_225B6C0[1] + 4) = v1;
    *(uint *)dword_225B6C0[1] = 10;
  }
  return result;
}

//----- (02235428) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x223574C for case 0"

//----- (02235734) --------------------------------------------------------
void Function_2235734()
{
  JUMPOUT(&loc_223574C);
}

//----- (02235738) --------------------------------------------------------
void Function_2235738()
{
  JUMPOUT(&loc_223582C);
}

//----- (0223573C) --------------------------------------------------------
void Function_223573c()
{
  JUMPOUT(&loc_223582C);
}

//----- (02235740) --------------------------------------------------------
void Function_2235740()
{
  JUMPOUT(&loc_22357F4);
}

//----- (02235744) --------------------------------------------------------
void Function_2235744()
{
  JUMPOUT(&loc_223582C);
}

//----- (02235748) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x2235950 for case 0"

//----- (02235924) --------------------------------------------------------
void Function_2235924()
{
  JUMPOUT(&loc_2235950);
}

//----- (02235928) --------------------------------------------------------
void Function_2235928()
{
  JUMPOUT(&loc_2235B20);
}

//----- (0223592C) --------------------------------------------------------
void Function_223592c()
{
  JUMPOUT(&loc_223595C);
}

//----- (02235930) --------------------------------------------------------
void Function_2235930()
{
  JUMPOUT(&loc_2235968);
}

//----- (02235934) --------------------------------------------------------
void Function_2235934()
{
  JUMPOUT(&loc_2235988);
}

//----- (02235938) --------------------------------------------------------
void Function_2235938()
{
  JUMPOUT(&loc_2235B20);
}

//----- (0223593C) --------------------------------------------------------
void Function_223593c()
{
  JUMPOUT(&loc_22359E8);
}

//----- (02235940) --------------------------------------------------------
void Function_2235940()
{
  JUMPOUT(&loc_2235A50);
}

//----- (02235944) --------------------------------------------------------
void Function_2235944()
{
  JUMPOUT(&loc_2235B20);
}

//----- (02235948) --------------------------------------------------------
void Function_2235948()
{
  JUMPOUT(&loc_2235B20);
}

//----- (0223594C) --------------------------------------------------------
void Function_223594c()
{
  int v0;
  int v1;

  v0 = *(uint *)dword_225B6C0[1];
  JUMPOUT(__CS__, v1);
}

//----- (02235B4C) --------------------------------------------------------
int __fastcall Function_2235b4c(int a1)
{
  int v1;

  v1 = a1;
  Function_223b8e8(a1 + 40);
  Function_223badc(v1 + 24);
  Function_223badc(v1 + 12);
  if ( v1 )
    ((void (*)(void))dword_21D77C4[0])();
  return v1;
}

//----- (02235B8C) --------------------------------------------------------
int __fastcall Function_2235b8c(int *a1)
{
  int result;

  if ( a1[1] )
    result = *a1;
  else
    result = 0;
  return result;
}

//----- (02235BA0) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x2235CAC for case 0"

//----- (02235C80) --------------------------------------------------------
void Function_2235c80()
{
  JUMPOUT(&loc_2235CAC);
}

//----- (02235C84) --------------------------------------------------------
void Function_2235c84()
{
  JUMPOUT(&loc_2235C94);
}

//----- (02235C88) --------------------------------------------------------
void Function_2235c88()
{
  JUMPOUT(&loc_2235C94);
}

//----- (02235C8C) --------------------------------------------------------
void Function_2235c8c()
{
  JUMPOUT(&loc_2235C9C);
}

//----- (02235C90) --------------------------------------------------------
void Function_2235c90()
{
  int v0;
  char *v1;
  int v2;
  int v3;
  char v4;
  int v5;
  int v6;
  int v7;
  char *v8;
  char v9;
  int v10;

  if ( v7 & 1 )
    v1 = v8;
  else
    v1 = (char *)&v7 + 1;
  v2 = Function_2244f44(v1, 0, 4, &v9, Function_22399a8, v0);
  v3 = 0;
  if ( v2 == 1 )
  {
    v3 = 2;
  }
  else if ( v2 == 2 )
  {
    v3 = 3;
  }
  if ( v3 )
  {
    *(uint *)(dword_225B6C0[1] + 4) = v3;
    *(uint *)dword_225B6C0[1] = 10;
  }
  if ( v2 )
  {
    Function_223badc(&v7);
    JUMPOUT(__CS__, v10);
  }
  Function_223b938(&v4, &v7);
  v5 = 0;
  v6 = 0;
  *(uint *)(dword_225B6C0[1] + 208) = v0;
  Function_223bc5c(dword_225B6C0[1] + 212, &v4);
  *(uint *)(dword_225B6C0[1] + 224) = v5;
  *(uint *)(dword_225B6C0[1] + 228) = v6;
  Function_223badc(&v4);
  Function_223badc(&v7);
  JUMPOUT(__CS__, v10);
}

//----- (02235DC4) --------------------------------------------------------
int __fastcall Function_2235dc4(int a1, int a2)
{
  return Function_223b938(a1, a2 + 88);
}

//----- (02235DD4) --------------------------------------------------------
int __fastcall Function_2235dd4(int a1, int a2, int a3, int a4)
{
  char *v5;
  int v6;
  int v7;
  uint v8;
  int v9;
  uint *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  char v17[12];
  int v18;
  char *v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;

  v24 = a4;
  if ( !dword_225B6C0[1] )
    return 4;
  if ( dword_225B6C0[1] && *(uint *)dword_225B6C0[1] == 10 )
    return 7;
  if ( dword_225B6C0[1] && *(uint *)dword_225B6C0[1] != 8 )
    return 4;
  if ( !dword_225B6C0[1] || *(uint *)(dword_225B6C0[1] + 208) == 5 )
    return 4;
  Function_2235fc8(&v18, dword_225B6C0[1] + 208);
  if ( v18 & 1 )
    v5 = v19;
  else
    v5 = (char *)&v18 + 1;
  v6 = Function_22451c8(v5);
  v7 = 0;
  if ( v6 == 1 )
  {
    v7 = 2;
  }
  else if ( v6 == 2 )
  {
    v7 = 3;
  }
  if ( v7 )
  {
    *(uint *)(dword_225B6C0[1] + 4) = v7;
    *(uint *)dword_225B6C0[1] = 10;
  }
  Function_223badc(&v18);
  v8 = 0;
  do
    *(uint *)&v17[4 * v8++] = 0;
  while ( v8 < 3 );
  *(uint *)(dword_225B6C0[1] + 208) = 5;
  Function_223bc5c(dword_225B6C0[1] + 212, v17);
  *(uint *)(dword_225B6C0[1] + 224) = 0;
  *(uint *)(dword_225B6C0[1] + 228) = 0;
  Function_223badc(v17);
  *(uint *)(dword_225B6C0[1] + 268) = 0;
  v20 = *(uint *)(dword_225B6C0[1] + 252);
  v9 = *(uint *)(dword_225B6C0[1] + 260);
  v21 = *(uint *)(dword_225B6C0[1] + 256);
  v22 = v9;
  v23 = *(uint *)(dword_225B6C0[1] + 264);
  v20 = 5;
  v12 = 5;
  v13 = v21;
  v14 = v9;
  v16 = 1;
  v15 = v23;
  if ( Function_20d5190((uchar *)(dword_225B6C0[1] + 252), (uchar *)&v12, 16) != 0 )
  {
    *(uint *)(dword_225B6C0[1] + 252) = v12;
    v10 = (uint *)(dword_225B6C0[1] + 256);
    v11 = v14;
    *v10 = v13;
    v10[1] = v11;
    *(uint *)(dword_225B6C0[1] + 264) = v15;
    *(uint *)(dword_225B6C0[1] + 268) = 1;
  }
  *(uint *)(dword_225B6C0[1] + 296) = 1;
  return 0;
}

//----- (02235FC8) --------------------------------------------------------
int __fastcall Function_2235fc8(int a1, int a2)
{
  return Function_223b938(a1, a2 + 4);
}

//----- (02235FD8) --------------------------------------------------------
int __fastcall Function_2235fd8(int *a1)
{
  int *v1;
  int result;
  int v3;
  int v4;
  int v5;
  char v6;
  char v7;

  v1 = a1;
  if ( !dword_225B6C0[1] )
    return 4;
  if ( dword_225B6C0[1] && *(uint *)dword_225B6C0[1] == 10 )
    return 7;
  if ( dword_225B6C0[1] && *(uint *)dword_225B6C0[1] != 8 )
    return 4;
  ((void (__fastcall *)(char *, char *))dword_21D806C[0])(&v7, &v6);
  *v1 = RTC_ConvertDateTimeToSecond((int *)&v7, &v6);
  v1[1] = v3;
  v4 = *(uint *)(dword_225B6C0[1] + 336);
  result = 0;
  v1[2] = *(uint *)(dword_225B6C0[1] + 332);
  v1[3] = v4;
  v5 = *(uint *)(dword_225B6C0[1] + 344);
  v1[4] = *(uint *)(dword_225B6C0[1] + 340);
  v1[5] = v5;
  return result;
}

//----- (02236084) --------------------------------------------------------
int __fastcall Function_2236084(int a1, int a2)
{
  if ( !dword_225B6C0[1] )
    return 4;
  if ( dword_225B6C0[1] && *(uint *)dword_225B6C0[1] == 10 )
    return 7;
  if ( dword_225B6C0[1] && *(uint *)dword_225B6C0[1] != 8 )
    return 4;
  if ( Function_223ca80(dword_225B6C0[1] + 324, a1, a2) )
    return 0;
  return 3;
}

//----- (022360F4) --------------------------------------------------------
int __fastcall Function_22360f4(int a1, int a2, int a3, int a4)
{
  int result;
  char *v5;
  int v6;
  int v7;
  char *v8;
  int v9;

  v9 = a4;
  if ( !dword_225B6C0[1] )
    return 3;
  if ( dword_225B6C0[1] && *(uint *)dword_225B6C0[1] == 10 )
    return 3;
  if ( dword_225B6C0[1] && *(uint *)dword_225B6C0[1] != 8 )
    return 3;
  if ( *(uint *)(dword_225B6C0[1] + 208) == 5 )
    return 0;
  Function_2235fc8((int)&v7, dword_225B6C0[1] + 208);
  if ( v7 & 1 )
    v5 = v8;
  else
    v5 = (char *)&v7 + 1;
  v6 = Function_2244988(v5);
  Function_223badc(&v7);
  if ( v6 )
    result = 2;
  else
    result = 1;
  return result;
}

//----- (022361B8) --------------------------------------------------------
int Function_22361b8()
{
  if ( !dword_225B6C0[1] )
    return 4;
  if ( dword_225B6C0[1] && *(uint *)dword_225B6C0[1] == 10 )
    return 7;
  if ( dword_225B6C0[1] && *(uint *)dword_225B6C0[1] != 8 )
    return 4;
  return Function_2237348();
}

//----- (02236218) --------------------------------------------------------
int __fastcall Function_2236218(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;
  char *v8;
  int v9;
  int v10;
  int v11;
  char *v12;
  int v13;

  v13 = a4;
  v4 = a1;
  v5 = a3;
  v6 = a4;
  if ( !dword_225B6C0[1] )
    return 4;
  if ( dword_225B6C0[1] && *(uint *)dword_225B6C0[1] == 10 )
    return 7;
  if ( dword_225B6C0[1] && *(uint *)dword_225B6C0[1] != 8 )
    return 4;
  Function_2236348(&v11, dword_225B6C0[1] + 184, a2);
  if ( Function_223beec(&v11, &dword_2258FB4) == 0 )
  {
    Function_223badc(&v11);
    result = 5;
  }
  else
  {
    if ( v11 & 1 )
      v8 = v12;
    else
      v8 = (char *)&v11 + 1;
    v9 = Function_22456b0(v8, v4, v5, Function_223a21c, v6);
    v10 = 0;
    if ( v9 == 1 )
    {
      v10 = 2;
    }
    else if ( v9 == 2 )
    {
      v10 = 3;
    }
    if ( v10 )
    {
      *(uint *)(dword_225B6C0[1] + 4) = v10;
      *(uint *)dword_225B6C0[1] = 10;
    }
    Function_223badc(&v11);
    result = v9;
  }
  return result;
}

//----- (02236348) --------------------------------------------------------
int __fastcall Function_2236348(int a1, int a2, int a3)
{
  int v3;

  v3 = a1;
  if ( a3 )
    Function_2235fc8(a1, a2 + 24);
  else
    Function_2235fc8(a1, a2);
  return *(uint *)v3;
}

//----- (02236390) --------------------------------------------------------
int __fastcall Function_2236390(int a1)
{
  if ( !dword_225B6C0[1] )
    return 4;
  if ( dword_225B6C0[1] && *(uint *)dword_225B6C0[1] == 10 )
    return 7;
  if ( dword_225B6C0[1] && *(uint *)dword_225B6C0[1] != 8 )
    return 4;
  return Function_2237170(-1, a1);
}

//----- (02236414) --------------------------------------------------------
int __fastcall Function_2236414(int a1)
{
  if ( !dword_225B6C0[1] )
    return 4;
  if ( dword_225B6C0[1] && *(uint *)dword_225B6C0[1] == 10 )
    return 7;
  if ( dword_225B6C0[1] && *(uint *)dword_225B6C0[1] != 8 )
    return 4;
  return Function_2237170(a1, 5);
}

//----- (02236494) --------------------------------------------------------
int Function_2236494()
{
  int result;

  if ( dword_225B6C0[1] )
    result = *(uint *)(dword_225B6C0[1] + 76);
  else
    result = -1;
  return result;
}

//----- (022364B0) --------------------------------------------------------
int __fastcall Function_22364b0(int *a1)
{
  int result;

  if ( a1[1] )
    result = *a1;
  else
    result = 0;
  return result;
}

//----- (022364C4) --------------------------------------------------------
int __fastcall Function_22364c4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uchar *v13;
  uchar *v14;
  int v15;
  int v16;
  char v17;
  char v18;
  char v19;
  char v20;
  char v21;
  char v22;
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

  v34 = a4;
  v4 = a3;
  if ( !dword_225B6C0[1] )
    return 4;
  if ( dword_225B6C0[1] && *(uint *)dword_225B6C0[1] == 10 )
    return 7;
  if ( dword_225B6C0[1] && *(uint *)dword_225B6C0[1] != 8 )
    return 4;
  v27 = 0;
  v6 = a1 + a2;
  v28 = 0;
  v29 = 0;
  v19 = 0;
  v20 = 0;
  v18 = 0;
  v17 = 0;
  v7 = &v16 - 1;
  v8 = v26;
  *v7 = v6;
  v7[1] = v8;
  v23 = a1;
  v9 = *(&v16 - 1);
  v25 = v6;
  Function_22366cc(&v27, a1, v24, v9);
  v30 = 0;
  v31 = 0;
  v32 = 0;
  *((uchar *)&v16 - 4) = v22;
  v10 = *(&v16 - 1);
  Function_223c2f4(&v30);
  v33 = 1;
  if ( v4 )
    *(uint *)(dword_225B6C0[1] + 284) = 1;
  v11 = *(uint *)(dword_225B6C0[1] + 276);
  v12 = 0;
  if ( v11 == v31 )
  {
    if ( !v11
      || (v13 = (uchar *)Function_2235b8c((int *)(dword_225B6C0[1] + 272)),
          v14 = (uchar *)Function_2235b8c(&v30),
          !Function_20d5190(v13, v14, v11)) )
    {
      v12 = 1;
    }
  }
  if ( !v12 )
  {
    if ( (int *)(dword_225B6C0[1] + 272) != &v30 )
    {
      v21 = 0;
      *((uchar *)&v16 - 4) = 0;
      v15 = *(&v16 - 1);
      Function_2236674();
    }
    *(uint *)(dword_225B6C0[1] + 284) = 1;
  }
  Function_223b8e8(&v30);
  *(uint *)(dword_225B6C0[1] + 300) = 1;
  Function_223b8e8(&v27);
  return 0;
}

//----- (02236674) --------------------------------------------------------
char *__fastcall Function_2236674(int a1, char *a2, int a3)
{
  int v3;
  char *v4;
  int v5;
  int v6;
  int v7;
  char *result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = a3 - (uint)a2;
  if ( (uint)(a3 - (uint)a2) > *(uint *)(a1 + 8) )
  {
    v7 = Function_223b7a4();
    Function_223b734(v3, v6, v7);
  }
  result = Function_20d50d8(*(char **)v3, v4, v5 - (uint)v4);
  *(uint *)(v3 + 4) = v6;
  return result;
}

//----- (022366CC) --------------------------------------------------------
int Function_22366cc()
{
  return Function_22366d0();
}

//----- (022366D0) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02236770) --------------------------------------------------------
int __fastcall Function_2236770(uint *a1)
{
  uint *v1;
  int result;
  uint v3;
  int v4;
  char *v5;
  uchar *v6;
  int v7;
  char v8;
  char v9;
  char *v10;
  uchar *v11;
  int v12;
  char v13;
  char v14;
  uint v15;
  char *v16;
  char *v17;
  long long v18;
  char v19;
  long long v20;
  int v21;
  int v22;
  int v23;
  int (*v24)();
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
  char v39;
  char v40;
  char v41;
  int v42[2];
  char *v43;

  v1 = a1;
  if ( !dword_225B6C0[1] )
    return 4;
  if ( dword_225B6C0[1] && *(uint *)dword_225B6C0[1] == 10 )
    return 7;
  if ( dword_225B6C0[1] && *(uint *)dword_225B6C0[1] != 8 )
    return 4;
  v3 = 0;
  v4 = 0;
  do
    v42[v3++] = 0;
  while ( v3 < 3 );
  if ( !*(uint *)(dword_225B6C0[1] + 104) )
  {
    *(uint *)(dword_225B6C0[1] + 104) = 1;
    v5 = (char *)(a1 + 4);
    *(uint *)(dword_225B6C0[1] + 116) = *a1;
    v6 = (uchar *)(dword_225B6C0[1] + 132);
    *(uint *)(dword_225B6C0[1] + 120) = a1[1];
    v7 = 16;
    *(uint *)(dword_225B6C0[1] + 124) = a1[2];
    *(uint *)(dword_225B6C0[1] + 128) = a1[3];
    do
    {
      v8 = *v5;
      v9 = v5[1];
      v5 += 2;
      --v7;
      *v6 = v8;
      v6[1] = v9;
      v6 += 2;
    }
    while ( v7 );
    v10 = (char *)(v1 + 12);
    v11 = (uchar *)(dword_225B6C0[1] + 164);
    v12 = 10;
    do
    {
      v13 = *v10;
      v14 = v10[1];
      v10 += 2;
      --v12;
      *v11 = v13;
      v11[1] = v14;
      v11 += 2;
    }
    while ( v12 );
    v15 = ((int (*)(void))dword_21EA840[0])();
    Function_2236a38(&v41, 20, "M%d_%u", *(uint *)(dword_225B6C0[1] + 76), v15 % 0x3E8);
    Function_223bc5c(v42, &v41);
    Function_223badc(&v41);
    if ( v42[0] & 1 )
      v16 = v43;
    else
      v16 = (char *)v42 + 1;
    strncpy((uchar *)(dword_225B6C0[1] + 164), v16, 19);
    v4 = 1;
  }
  if ( v4 )
  {
    if ( v42[0] & 1 )
      v17 = v43;
    else
      v17 = (char *)v42 + 1;
    strncpy((uchar *)v1 + 48, v17, 19);
    ((void (__fastcall *)(char *, char *))dword_21D806C[0])(&v40, &v39);
    LODWORD(v18) = RTC_ConvertDateTimeToSecond((int *)&v40, &v39);
    v20 = v18 - 5;
    v21 = 5;
    v24 = Function_2238728;
    v22 = 0;
    v23 = 0;
    Function_22369fc(&v25, 3, &v20);
    v32 = v25;
    v33 = v26;
    v34 = v27;
    v35 = v28;
    v36 = v29;
    v38 = v31;
    v37 = v30;
    Function_223aabc(&v19, dword_225B6C0[1] + 308, &v32);
    Function_223badc(v42);
    result = 0;
  }
  else
  {
    Function_223badc(v42);
    result = 4;
  }
  return result;
}

//----- (022369FC) --------------------------------------------------------
int __fastcall Function_22369fc(uint *a1, int a2, uint *a3)
{
  uint *v3;
  int v4;
  uint *v5;
  int v6;
  int result;

  *a1 = a2;
  v3 = a1 + 1;
  v4 = a3[1];
  *v3 = *a3;
  v3[1] = v4;
  v5 = a1 + 3;
  v6 = a3[3];
  *v5 = a3[2];
  v5[1] = v6;
  v3[4] = a3[4];
  result = a3[5];
  v3[5] = result;
  return result;
}

//----- (02236A38) --------------------------------------------------------
int Function_2236a38(int a1, int a2, const char *a3, ...)
{
  return Function_2236a3c();
}

//----- (02236A3C) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02236AB0) --------------------------------------------------------
int __fastcall Function_2236ab0(int *a1)
{
  int result;

  if ( a1[1] )
    result = *a1;
  else
    result = 0;
  return result;
}

//----- (02236AC4) --------------------------------------------------------
int __fastcall Function_2236ac4(uint *a1)
{
  int result;
  int v2;
  char *v3;
  uchar *v4;
  int v5;
  char v6;
  char v7;
  char *v8;
  uchar *v9;
  int v10;
  char v11;
  char v12;

  if ( !dword_225B6C0[1] )
    return 4;
  if ( dword_225B6C0[1] && *(uint *)dword_225B6C0[1] == 10 )
    return 7;
  if ( dword_225B6C0[1] && *(uint *)dword_225B6C0[1] != 8 )
    return 4;
  if ( *(uint *)(dword_225B6C0[1] + 104) )
  {
    v3 = (char *)(a1 + 4);
    *(uint *)(dword_225B6C0[1] + 116) = *a1;
    v4 = (uchar *)(dword_225B6C0[1] + 132);
    *(uint *)(dword_225B6C0[1] + 120) = a1[1];
    v5 = 16;
    *(uint *)(dword_225B6C0[1] + 124) = a1[2];
    *(uint *)(dword_225B6C0[1] + 128) = a1[3];
    do
    {
      v6 = *v3;
      v7 = v3[1];
      v3 += 2;
      --v5;
      *v4 = v6;
      v4[1] = v7;
      v4 += 2;
    }
    while ( v5 );
    v8 = (char *)(a1 + 12);
    v9 = (uchar *)(dword_225B6C0[1] + 164);
    v10 = 10;
    do
    {
      v11 = *v8;
      v12 = v8[1];
      v8 += 2;
      --v10;
      *v9 = v11;
      v9[1] = v12;
      v9 += 2;
    }
    while ( v10 );
    v2 = 1;
  }
  else
  {
    v2 = 0;
  }
  if ( v2 )
    result = 0;
  else
    result = 4;
  return result;
}

//----- (02236BB8) --------------------------------------------------------
int __fastcall Function_2236bb8(int a1, int a2, int a3, int a4)
{
  int v5;
  int v6;
  int v7;

  v7 = a4;
  if ( !dword_225B6C0[1] )
    return 4;
  if ( dword_225B6C0[1] && *(uint *)dword_225B6C0[1] == 10 )
    return 7;
  if ( dword_225B6C0[1] && *(uint *)dword_225B6C0[1] != 8 )
    return 4;
  v5 = 0;
  if ( *(uint *)(dword_225B6C0[1] + 104) )
  {
    *(uint *)(dword_225B6C0[1] + 104) = 0;
    v5 = 1;
  }
  if ( !v5 )
    return 4;
  Function_2237170(*(uint *)(dword_225B6C0[1] + 76), 0);
  v6 = 3;
  Function_2236ca0(dword_225B6C0[1] + 308, &v6);
  return 0;
}

//----- (02236CA0) --------------------------------------------------------
int __fastcall Function_2236ca0(int a1, int a2, int a3, int a4)
{
  int v4;
  char v6;
  int v7;
  int v8;

  v8 = a4;
  v4 = a1;
  Function_2236cf0(&v7, a1, a2);
  if ( v7 == v4 + 4 )
    return 0;
  Function_223ab54(&v6, v4);
  return 1;
}

//----- (02236CF0) --------------------------------------------------------
int __fastcall Function_2236cf0(int *a1, int a2, uint *a3)
{
  int v3;
  uint *v4;
  int *v5;
  int v6;
  int result;

  v3 = a2;
  v4 = a3;
  v5 = a1;
  v6 = *(uint *)(a2 + 4);
  result = Function_2236d44();
  if ( result != v3 + 4 && *v4 >= *(uint *)(result + 12) )
  {
    *v5 = result;
  }
  else
  {
    result = v3 + 4;
    *v5 = v3 + 4;
  }
  return result;
}

//----- (02236D44) --------------------------------------------------------
uint *__fastcall Function_2236d44(int a1, uint *a2, uint *a3, uint *a4)
{
  uint v4;

  if ( a3 )
  {
    v4 = *a2;
    do
    {
      if ( a3[3] < v4 )
      {
        a3 = (uint *)a3[1];
      }
      else
      {
        a4 = a3;
        a3 = (uint *)*a3;
      }
    }
    while ( a3 );
  }
  return a4;
}

//----- (02236D74) --------------------------------------------------------
int __fastcall Function_2236d74(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  uint v9;
  BOOL v10;
  int v11;
  int *v12;
  int *v13;
  int *v14;
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
  char v27;
  char v28;
  char v29;
  char v30;
  int *v31;
  int *v32;
  int v33;
  int v34;
  short v35;
  ushort v36;
  int v37;
  int v38;
  int v39;
  int v40;
  uint v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;

  v53 = a4;
  v4 = a1;
  if ( !dword_225B6C0[1] )
    return 4;
  if ( dword_225B6C0[1] && *(uint *)dword_225B6C0[1] == 10 )
    return 7;
  if ( a1 < 0 || a1 > 2 )
    return 3;
  if ( !Function_223ede4(dword_225B6C0[1] + 324, &v51) || *(uint *)(dword_225B6C0[1] + 108) )
    return 4;
  v6 = Function_2235b8c((int *)(dword_225B6C0[1] + 272));
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v7 = Function_2235b8c((int *)(dword_225B6C0[1] + 272));
  v8 = *(uint *)(dword_225B6C0[1] + 76);
  v35 = 1;
  v34 = v8;
  LOBYTE(v36) = *(uchar *)(v7 + 66);
  HIBYTE(v36) = *(uchar *)(v7 + 57);
  OS_GetMacAddress((uint)&v37, HIBYTE(v36), 1, v9);
  v41 = __PAIR__(v36, 1);
  v42 = v37;
  v40 = v34;
  v43 = v38;
  v44 = v39;
  v46 = v52;
  v47 = v4;
  v45 = v51;
  v48 = *(uint *)(v6 + 4);
  v49 = *(uchar *)(v6 + 56);
  LOWORD(v50) = *(ushort *)(v6 + 60);
  HIWORD(v50) = *(uchar *)(v6 + 62);
  v10 = *(uint *)(dword_225B6C0[1] + 80) != 0;
  v11 = *(uint *)(dword_225B6C0[1] + 76);
  if ( !dword_225B6C0[5] )
  {
    v12 = (int *)Function_2246290(64);
    v13 = v12;
    if ( v12 )
    {
      *v12 = (int)off_2258EC0;
      v12[1] = 3;
      v12[2] = v10;
      Function_223ba6c(v12 + 3, 36015984);
      Function_223ba6c(v13 + 6, 36015944);
      v13[9] = v11;
      v13[10] = 0;
      v13[11] = 0;
      v13[12] = 0;
      v13[13] = (int)Function_22393c0;
      v13[14] = 0;
      v13[15] = 0;
      v29 = 0;
      v30 = 0;
      v28 = 0;
      v27 = 0;
      v14 = &v26 - 1;
      v15 = v33;
      *v14 = (int)&v51;
      v14[1] = v15;
      v16 = *(&v26 - 1);
      v31 = &v40;
      v32 = &v51;
      Function_22366cc();
    }
    dword_225B6C0[5] = (int)v13;
    if ( v13[3] & 1 )
      v17 = v13[5];
    else
      v17 = (int)v13 + 13;
    Function_2258338(v13[2], v17);
    v18 = v13[11];
    v19 = v13[6];
    if ( v13[15] )
    {
      if ( v19 & 1 )
        v20 = v13[8];
      else
        v20 = (int)v13 + 25;
      v21 = Function_2235b8c(v13 + 10);
      v26 = 0;
      v22 = Function_22588f4(v20, v13[9], v21, v18, 0);
    }
    else
    {
      if ( v19 & 1 )
        v23 = v13[8];
      else
        v23 = (int)v13 + 25;
      v24 = Function_2235b8c(v13 + 10);
      v26 = 0;
      v22 = Function_22588d0(v23, v13[9], v24, v18, 0);
    }
    if ( v22 )
    {
      Function_22585f4();
      v25 = 0;
    }
    else
    {
      v25 = 1;
    }
    if ( !v25 && dword_225B6C0[5] )
    {
      if ( dword_225B6C0[5] )
        (*(void (**)(void))(*(uint *)dword_225B6C0[5] + 4))();
      dword_225B6C0[5] = 0;
    }
  }
  result = 0;
  *(uint *)(dword_225B6C0[1] + 108) = 1;
  return result;
}

//----- (022370FC) --------------------------------------------------------
int Function_22370fc()
{
  int result;

  if ( dword_225B6C0[1] )
    result = *(uint *)(dword_225B6C0[1] + 4);
  else
    result = 0;
  return result;
}

//----- (02237118) --------------------------------------------------------
int __fastcall Function_2237118(int a1)
{
  int result;

  if ( a1 < 4 )
    result = Function_224497c();
  else
    result = a1 + 10620;
  return result;
}

//----- (02237134) --------------------------------------------------------
int __fastcall Function_2237134(int a1)
{
  switch ( a1 )
  {
    case 0:
      return 0;
    case 1:
      return 2;
    case 2:
      return 3;
  }
  return 1;
}

//----- (02237170) --------------------------------------------------------
int __fastcall Function_2237170(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7;
  int v8;
  bool v9;
  int result;
  uint v11;
  char *v12;
  int v13;
  int v14;
  char *v15;
  char *v16;
  int v17;
  int v18;
  int v19;
  char *v20;
  int v21[2];
  char *v22;

  v7 = a1;
  v8 = a2;
  v9 = a1 == -1;
  if ( a1 == -1 )
    v9 = a2 == 5;
  if ( v9 )
    return 3;
  v11 = 0;
  do
    v21[v11++] = 0;
  while ( v11 < 3 );
  if ( Function_22416dc(a3, a4, a5, a6, a7, v21) )
  {
    if ( v8 == 5 )
    {
      if ( v21[0] & 1 )
        v12 = v22;
      else
        v12 = (char *)v21 + 1;
      v13 = Function_22453bc(v7, v12);
      v14 = 0;
      if ( v13 == 1 )
      {
        v14 = 2;
      }
      else if ( v13 == 2 )
      {
        v14 = 3;
      }
      if ( v14 )
      {
        *(uint *)(dword_225B6C0[1] + 4) = v14;
        *(uint *)dword_225B6C0[1] = 10;
      }
      Function_223badc(v21);
      result = v13;
    }
    else
    {
      Function_2236348((int)&v19, dword_225B6C0[1] + 184, v8);
      if ( Function_223beec(&v19, &dword_2258FB4) == 0 )
      {
        Function_223badc(&v19);
        Function_223badc(v21);
        result = 5;
      }
      else
      {
        if ( !(v21[0] & 1) )
          v15 = (char *)v21 + 1;
        if ( v21[0] & 1 )
          v15 = v22;
        if ( v19 & 1 )
          v16 = v20;
        else
          v16 = (char *)&v19 + 1;
        v17 = Function_22452d0(v16, v15);
        v18 = 0;
        if ( v17 == 1 )
        {
          v18 = 2;
        }
        else if ( v17 == 2 )
        {
          v18 = 3;
        }
        if ( v18 )
        {
          *(uint *)(dword_225B6C0[1] + 4) = v18;
          *(uint *)dword_225B6C0[1] = 10;
        }
        Function_223badc(&v19);
        Function_223badc(v21);
        result = v17;
      }
    }
  }
  else
  {
    Function_223badc(v21);
    result = 3;
  }
  return result;
}

//----- (02237348) --------------------------------------------------------
int __fastcall Function_2237348(int a1, int a2, int a3, int a4, uint a5)
{
  int v5;
  int v6;
  int v7;
  int result;
  int v9;
  int v10;
  char *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  char *v19;
  int v20;

  v20 = a4;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  Function_2236348((int)&v18, dword_225B6C0[1] + 184, a2);
  if ( Function_223beec(&v18, &dword_2258FB4) == 0 )
  {
    Function_223badc(&v18);
    result = 5;
  }
  else if ( a5 <= 0x12C )
  {
    v15 = 0;
    v16 = 0;
    v17 = 0;
    Function_223b6c0(&v15, 4 * ((a5 + 2) / 3) + 1);
    v9 = Function_2236ab0(&v15);
    v10 = ((int (__fastcall *)(int, uint, int, int))dword_21D99D4[1677])(v7, a5, v9, v16);
    *(uchar *)(v15 + v10) = 0;
    if ( v18 & 1 )
      v11 = v19;
    else
      v11 = (char *)&v18 + 1;
    v12 = Function_2236ab0(&v15);
    v13 = Function_22454c8(v11, v5, v6, v12);
    v14 = 0;
    if ( v13 == 1 )
    {
      v14 = 2;
    }
    else if ( v13 == 2 )
    {
      v14 = 3;
    }
    if ( v14 )
    {
      *(uint *)(dword_225B6C0[1] + 4) = v14;
      *(uint *)dword_225B6C0[1] = 10;
    }
    Function_223b8e8(&v15);
    Function_223badc(&v18);
    result = v13;
  }
  else
  {
    Function_223badc(&v18);
    result = 3;
  }
  return result;
}

//----- (022374B4) --------------------------------------------------------
int *__fastcall Function_22374b4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint v7;
  char *v8;
  short *v9;
  int v10;
  short v11;
  short v12;
  short v13;
  char *v14;
  char *v15;
  short v16;
  int v17;
  short v18;
  int v19;
  char v20;
  char v21;
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
  int *result;
  BOOL v33;
  int v34;
  int *v35;
  int *v36;
  int *v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  char v49;
  char v50;
  char v51;
  char v52;
  int *v53;
  int *v54;
  int v55;
  int v56;
  short v57;
  char v58;
  uchar v59;
  char v60;
  int v61;
  int v62;
  char v63;
  int v64;
  int v65;
  short v66;
  short v67;
  short v68;
  short v69;
  short v70;
  short v71;
  char v72;
  char v73;
  char v74;
  char v75;
  char v76;
  char v77;
  char v78;
  char v79;
  char v80;
  char v81;
  char v82;
  char v83;
  char v84;
  char v85;
  short v86;
  short v87;
  char v88;
  char v89;
  char v90;
  char v91;
  char v92;
  char v93;
  int v94;
  int v95;
  char v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int v107;
  int v108;
  short v109;
  short v110;
  int v111;
  int v112;
  int v113;

  v113 = a4;
  v4 = Function_2235b8c((int *)(dword_225B6C0[1] + 272));
  v5 = Function_2235b8c((int *)(dword_225B6C0[1] + 272));
  v6 = *(uint *)(dword_225B6C0[1] + 76);
  v57 = 1;
  v56 = v6;
  v58 = *(uchar *)(v5 + 66);
  v59 = *(uchar *)(v5 + 57);
  OS_GetMacAddress((uint)&v60, v59, 1, v7);
  v8 = &v63;
  v61 = *(uint *)v4;
  v9 = (short *)(v4 + 8);
  v62 = *(uint *)(v4 + 4);
  v10 = 4;
  do
  {
    v11 = *v9;
    v12 = v9[1];
    v9 += 2;
    --v10;
    *(ushort *)v8 = v11;
    *((ushort *)v8 + 1) = v12;
    v8 += 4;
  }
  while ( v10 );
  v64 = *(uint *)(v4 + 24);
  v65 = *(uint *)(v4 + 28);
  v13 = *(ushort *)(v4 + 34);
  v14 = &v96;
  v15 = (char *)(v4 + 76);
  v66 = *(ushort *)(v4 + 32);
  v67 = v13;
  v16 = *(ushort *)(v4 + 38);
  v17 = 6;
  v68 = *(ushort *)(v4 + 36);
  v69 = v16;
  v18 = *(ushort *)(v4 + 42);
  v70 = *(ushort *)(v4 + 40);
  v71 = v18;
  LOBYTE(v18) = *(uchar *)(v4 + 45);
  v72 = *(uchar *)(v4 + 44);
  v73 = v18;
  LOBYTE(v18) = *(uchar *)(v4 + 47);
  v74 = *(uchar *)(v4 + 46);
  v75 = v18;
  LOBYTE(v18) = *(uchar *)(v4 + 49);
  v76 = *(uchar *)(v4 + 48);
  v77 = v18;
  LOBYTE(v18) = *(uchar *)(v4 + 51);
  v78 = *(uchar *)(v4 + 50);
  v79 = v18;
  LOBYTE(v18) = *(uchar *)(v4 + 53);
  v80 = *(uchar *)(v4 + 52);
  v81 = v18;
  LOBYTE(v18) = *(uchar *)(v4 + 55);
  v82 = *(uchar *)(v4 + 54);
  v83 = v18;
  v84 = *(uchar *)(v4 + 56);
  v85 = *(uchar *)(v4 + 57);
  v86 = *(ushort *)(v4 + 58);
  v87 = *(ushort *)(v4 + 60);
  v88 = *(uchar *)(v4 + 62);
  v89 = *(uchar *)(v4 + 63);
  v90 = *(uchar *)(v4 + 64);
  v91 = *(uchar *)(v4 + 65);
  v92 = *(uchar *)(v4 + 66);
  v93 = *(uchar *)(v4 + 67);
  v19 = *(uint *)(v4 + 72);
  v94 = *(uint *)(v4 + 68);
  v95 = v19;
  do
  {
    v20 = *v15;
    v21 = v15[1];
    v15 += 2;
    --v17;
    *v14 = v20;
    v14[1] = v21;
    v14 += 2;
  }
  while ( v17 );
  v22 = *(uint *)(v4 + 92);
  v23 = *(uint *)(v4 + 96);
  v24 = *(uint *)(v4 + 100);
  v97 = *(uint *)(v4 + 88);
  v98 = v22;
  v99 = v23;
  v100 = v24;
  v25 = *(uint *)(v4 + 108);
  v26 = *(uint *)(v4 + 112);
  v27 = *(uint *)(v4 + 116);
  v101 = *(uint *)(v4 + 104);
  v102 = v25;
  v103 = v26;
  v104 = v27;
  v28 = *(uint *)(v4 + 124);
  v29 = *(uint *)(v4 + 128);
  v30 = *(uint *)(v4 + 132);
  v105 = *(uint *)(v4 + 120);
  v106 = v28;
  v107 = v29;
  v108 = v30;
  LOWORD(v30) = *(ushort *)(v4 + 138);
  v109 = *(ushort *)(v4 + 136);
  v110 = v30;
  v31 = *(uint *)(v4 + 144);
  v111 = *(uint *)(v4 + 140);
  v112 = v31;
  result = (int *)dword_225B6C0[5];
  v33 = *(uint *)(dword_225B6C0[1] + 80) != 0;
  v34 = *(uint *)(dword_225B6C0[1] + 76);
  if ( !dword_225B6C0[5] )
  {
    v35 = (int *)Function_2246290(64);
    v36 = v35;
    if ( v35 )
    {
      *v35 = (int)off_2258EC0;
      v35[1] = 3;
      v35[2] = v33;
      Function_223ba6c(v35 + 3, 36015984);
      Function_223ba6c(v36 + 6, 36015876);
      v36[9] = v34;
      v36[10] = 0;
      v36[11] = 0;
      v36[12] = 0;
      v36[13] = (int)Function_223899c;
      v36[14] = 0;
      v36[15] = 0;
      v51 = 0;
      v52 = 0;
      v50 = 0;
      v49 = 0;
      v37 = &v48 - 1;
      v38 = v55;
      *v37 = (int)&v113;
      v37[1] = v38;
      v39 = *(&v48 - 1);
      v53 = &v56;
      v54 = &v113;
      Function_22366cc();
    }
    dword_225B6C0[5] = (int)v36;
    if ( v36[3] & 1 )
      v40 = v36[5];
    else
      v40 = (int)v36 + 13;
    Function_2258338(v36[2], v40);
    v41 = v36[11];
    v42 = v36[6];
    if ( v36[15] )
    {
      if ( v42 & 1 )
        v43 = v36[8];
      else
        v43 = (int)v36 + 25;
      v44 = Function_2235b8c(v36 + 10);
      v48 = 0;
      v45 = Function_22588f4(v43, v36[9], v44, v41, 0);
    }
    else
    {
      if ( v42 & 1 )
        v46 = v36[8];
      else
        v46 = (int)v36 + 25;
      v47 = Function_2235b8c(v36 + 10);
      v48 = 0;
      v45 = Function_22588d0(v46, v36[9], v47, v41, 0);
    }
    if ( v45 )
    {
      Function_22585f4();
      result = 0;
    }
    else
    {
      result = (int *)1;
    }
    if ( !result )
    {
      result = (int *)dword_225B6C0[5];
      if ( dword_225B6C0[5] )
      {
        if ( dword_225B6C0[5] )
          (*(void (**)(void))(*(uint *)dword_225B6C0[5] + 4))();
        result = &dword_225B6C0[5];
        dword_225B6C0[5] = 0;
      }
    }
  }
  return result;
}

//----- (022378A8) --------------------------------------------------------
int __fastcall Function_22378a8(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  char v7;
  char v8;
  int v9;

  v9 = a4;
  v4 = a1;
  v5 = a3;
  Function_223ba6c(&v8, off_2258BF4[a2]);
  Function_22379d0(&v7, &v8, &dword_2258FB8);
  Function_2237908(v4, &v7, v5);
  Function_223badc(&v7);
  return Function_223badc(&v8);
}

//----- (02237908) --------------------------------------------------------
int __fastcall Function_2237908(int a1, uint *a2, uint *a3)
{
  uint v3;
  int v4;
  uint v5;
  int v6;
  uint v7;
  int v8;

  v3 = 0;
  v4 = a1;
  do
    *(uint *)(a1 + 4 * v3++) = 0;
  while ( v3 < 3 );
  if ( *a2 & 1 )
    v5 = a2[1];
  else
    v5 = (uint)*(uchar *)a2 << 24 >> 25;
  if ( *a3 & 1 )
  {
    v6 = a3[2];
    v7 = a3[1];
  }
  else
  {
    v7 = (uint)*(uchar *)a3 << 24 >> 25;
  }
  Function_223bb10(a1, v5 + v7);
  v8 = Function_223c018(v4);
  return Function_223c018(v8);
}

//----- (022379D0) --------------------------------------------------------
int __fastcall Function_22379d0(int a1, uint *a2, char *a3)
{
  uint *v3;
  uint v4;
  int v5;
  int v6;
  int v7;
  uint v8;
  int v9;

  v3 = a2;
  v4 = 0;
  v5 = a1;
  do
    *(uint *)(a1 + 4 * v4++) = 0;
  while ( v4 < 3 );
  v6 = strlen(a3);
  if ( *v3 & 1 )
  {
    v7 = v3[2];
    v8 = v3[1];
  }
  else
  {
    v8 = (uint)*(uchar *)v3 << 24 >> 25;
  }
  Function_223bb10(v5, v8 + v6);
  v9 = Function_223c018(v5);
  return Function_223c018(v9);
}

//----- (02237A88) --------------------------------------------------------
int __fastcall Function_2237a88(int a1)
{
  int v1;
  int v2;
  uint v3;

  v1 = a1;
  v2 = *(uint *)(dword_225B6C0[1] + 76);
  v3 = ((int (*)(void))dword_21EA840[0])();
  return Function_2237adc(v1, "C%d_%u", v2, v3 % 0x3E8);
}

//----- (02237ADC) --------------------------------------------------------
int Function_2237adc(int a1, const char *a2, ...)
{
  return Function_2237ae0();
}

//----- (02237AE0) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02237BB4) --------------------------------------------------------
int __fastcall Function_2237bb4(int a1, int a2, int a3, int a4)
{
  int v4;
  char *v5;
  int v6;
  int v7;
  int result;
  char v9;
  int v10;
  int v11;
  char v12;
  int v13;
  char *v14;
  int (*v15)();
  int (*v16)();
  int (*v17)();
  int (*v18)();
  int (*v19)();
  int v20;
  int v21;

  v21 = a4;
  v15 = Function_2239b54;
  v16 = Function_2239d60;
  v17 = Function_2239fa4;
  v18 = Function_223a1e4;
  v19 = Function_223a958;
  v20 = 0;
  Function_2235dc4((int)&v12, dword_225B6C0[1]);
  Function_22378a8((int)&v13, 0, (int)&v12, v4);
  Function_223badc(&v12);
  if ( v13 & 1 )
    v5 = v14;
  else
    v5 = (char *)&v13 + 1;
  v6 = Function_2244f44(v5, 0, 20, &v15, Function_2239408, 0);
  v7 = 0;
  if ( v6 == 1 )
  {
    v7 = 2;
  }
  else if ( v6 == 2 )
  {
    v7 = 3;
  }
  if ( v7 )
  {
    *(uint *)(dword_225B6C0[1] + 4) = v7;
    *(uint *)dword_225B6C0[1] = 10;
  }
  if ( v6 )
  {
    Function_223badc(&v13);
    result = v6;
  }
  else
  {
    Function_223b938(&v9, &v13);
    v10 = 0;
    v11 = 0;
    *(uint *)(dword_225B6C0[1] + 184) = 0;
    Function_223bc5c(dword_225B6C0[1] + 188, &v9);
    *(uint *)(dword_225B6C0[1] + 200) = v10;
    *(uint *)(dword_225B6C0[1] + 204) = v11;
    Function_223badc(&v9);
    Function_223badc(&v13);
    result = 0;
  }
  return result;
}

//----- (02237D24) --------------------------------------------------------
int __fastcall Function_2237d24(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int result;
  int v14;
  int v15;
  int v16;
  bool v17;
  int v18;
  int v19;
  char v20;
  char v21;
  char v22;
  int v23;
  int v24;
  int v25;
  int v26;

  v26 = a4;
  v7 = a1;
  v8 = a2;
  v9 = a4;
  Function_223ba6c(&v22, a3);
  Function_2235fc8((int)&v20, dword_225B6C0[1] + 184);
  v10 = Function_223800c(&v20, &v22);
  Function_223badc(&v20);
  if ( v10 )
  {
    v11 = *(uint *)(dword_225B6C0[1] + 184);
  }
  else
  {
    Function_2235fc8((int)&v21, dword_225B6C0[1] + 208);
    v12 = Function_223800c(&v21, &v22);
    Function_223badc(&v21);
    if ( v12 )
      v11 = *(uint *)(dword_225B6C0[1] + 208);
    else
      v11 = 5;
  }
  result = Function_223badc(&v22);
  if ( v11 != 5 )
  {
    v23 = 0;
    v24 = 0;
    v25 = 0;
    if ( Function_2237ef8(a6, &v23) )
    {
      v14 = v24;
      if ( v24 )
      {
        v15 = Function_2235b8c(&v23);
        if ( Function_2238070(v7, v8, v11, v9, a5, v15, v14, a7) )
        {
          result = Function_223b8e8(&v23);
        }
        else
        {
          if ( v9 == -1 )
            goto LABEL_24;
          v16 = Function_2241dcc(dword_225B6C0[1] + 232, v9);
          v17 = v16 == 0;
          if ( v16 )
            v17 = *(uint *)(v16 + 56) == 0;
          v18 = v17 ? 0 : 1;
          if ( v18 )
          {
LABEL_24:
            v19 = Function_2235b8c(&v23);
            (*(void (__fastcall **)(int, int, int, int, int, int, int, int))(dword_225B6C0[1] + 28))(
              v7,
              v8,
              v11,
              v9,
              a5,
              v19,
              v24,
              a7);
            result = Function_223b8e8(&v23);
          }
          else
          {
            result = Function_223b8e8(&v23);
          }
        }
      }
      else
      {
        result = Function_223b8e8(&v23);
      }
    }
    else
    {
      result = Function_223b8e8(&v23);
    }
  }
  return result;
}

//----- (02237EF8) --------------------------------------------------------
int __fastcall Function_2237ef8(char *a1, int *a2)
{
  int *v2;
  char *v3;
  uint v4;
  uint v5;
  uint v6;
  int v8;
  int v9;
  uint v10;
  uint v11;
  char v12;
  char v13;
  char v14;
  char v15;
  char v16;

  v2 = a2;
  v16 = 0;
  v3 = a1;
  v4 = strlen(a1);
  v5 = v2[1];
  v6 = v4;
  if ( v4 <= v5 )
  {
    if ( v4 < v5 )
    {
      v15 = 0;
      v2[1] -= v5 - v4;
    }
  }
  else
  {
    v14 = 0;
    *(&v12 - 4) = 0;
    Function_223b870(v2, v4 - v5, *((uint *)&v12 - 1));
  }
  if ( !v6 )
    return 1;
  v8 = strlen(v3);
  v9 = Function_2235b8c(v2);
  v10 = ((int (__fastcall *)(char *, int, int, int))dword_21D99D4[1680])(v3, v8, v9, v2[1]);
  if ( v10 == -1 )
    return 0;
  v11 = v2[1];
  if ( v10 <= v11 )
  {
    if ( v10 < v11 )
    {
      v13 = 0;
      v2[1] -= v11 - v10;
    }
  }
  else
  {
    v12 = 0;
    *(&v12 - 4) = 0;
    Function_223b870(v2, v10 - v11, *((uint *)&v12 - 1));
  }
  return 1;
}

//----- (0223800C) --------------------------------------------------------
int __fastcall Function_223800c(uint *a1, uint *a2)
{
  int v2;
  uint v3;
  uint v4;

  v2 = 0;
  if ( *a2 & 1 )
    v3 = a2[1];
  else
    v3 = (uint)*(uchar *)a2 << 24 >> 25;
  if ( *a1 & 1 )
    v4 = a1[1];
  else
    v4 = (uint)*(uchar *)a1 << 24 >> 25;
  if ( v4 == v3 && !Function_223be90() )
    v2 = 1;
  return v2;
}

//----- (02238070) --------------------------------------------------------
int __fastcall Function_2238070(int a1, int a2, int a3, int a4, int *a5, int *a6, int a7)
{
  int v7;
  int result;
  int *v9;
  int *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uchar *v16;
  uchar *v17;
  char *v18;
  int v19;
  int v20;
  int v21;
  uint *v22;
  int v23;
  uint *v24;
  int v25;
  int v26;
  bool v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int *v32;
  int v33;
  char v34;
  char v35;
  char v36;
  char v37;
  char v38;
  char v39;
  int v40;
  int v41;
  int *v42;
  int *v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  char *v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;

  v63 = a4;
  v7 = a4;
  if ( a3 )
    return 0;
  if ( Function_20d8d14(a5, "b_lib_u_user") )
  {
    if ( Function_20d8d14(a5, "b_lib_u_system") )
    {
      if ( Function_20d8d14(a5, "b_lib_c_time") )
      {
        if ( Function_20d8d14(a5, "b_lib_c_lobby") )
        {
          result = 0;
        }
        else
        {
          if ( Function_223cb84(dword_225B6C0[1] + 324, a6, a7) )
            *(uint *)(dword_225B6C0[1] + 324) = 4;
          result = 1;
        }
      }
      else if ( a7 == 8 )
      {
        v30 = *a6;
        v31 = a6[1];
        result = 1;
        *(uint *)(dword_225B6C0[1] + 328) = 1;
        v40 = v30;
        v41 = v31;
        v32 = (int *)(dword_225B6C0[1] + 332);
        *v32 = v30;
        v32[1] = v31;
      }
      else
      {
        result = 1;
      }
    }
    else if ( v7 == *(uint *)(dword_225B6C0[1] + 76) )
    {
      result = 1;
    }
    else if ( a7 == 16 )
    {
      v21 = Function_2241dcc(dword_225B6C0[1] + 232, v7);
      v22 = (uint *)v21;
      if ( v21 )
      {
        v48 = *a6;
        v23 = a6[2];
        v49 = a6[1];
        v50 = v23;
        v51 = a6[3];
        v52 = 1;
        if ( Function_20d5190((uchar *)(v21 + 4), (uchar *)&v48, 16) != 0 )
        {
          v22[1] = v48;
          v24 = v22 + 2;
          v25 = v50;
          *v24 = v49;
          v24[1] = v25;
          v22[4] = v51;
          v22[5] = 1;
        }
        v22[12] = 1;
        v26 = v22[14];
        v27 = v26 == 0;
        if ( v26 )
          v27 = v22[5] == 0;
        if ( !v27 )
        {
          v22[5] = 0;
          v28 = v22[2];
          v29 = v22[3];
          v47 = v22[1];
          v45 = v28;
          v46 = v29;
          v60 = v28;
          v61 = v29;
          v62 = v47;
          (*(void (__fastcall **)(int, int *))(dword_225B6C0[1] + 32))(v7, &v60);
        }
        result = 1;
      }
      else
      {
        result = 1;
      }
    }
    else
    {
      result = 1;
    }
  }
  else if ( v7 == *(uint *)(dword_225B6C0[1] + 76) )
  {
    result = 1;
  }
  else
  {
    v9 = (int *)Function_2241dcc(dword_225B6C0[1] + 232, v7);
    if ( v9 )
    {
      v53 = 0;
      v54 = 0;
      v55 = 0;
      v36 = 0;
      v37 = 0;
      v35 = 0;
      v34 = 0;
      v10 = &v33 - 1;
      v11 = v44;
      *v10 = (int)a6 + a7;
      v10[1] = v11;
      v12 = *(&v33 - 1);
      v42 = a6;
      v43 = (int *)((char *)a6 + a7);
      Function_22366cc();
      v56 = 0;
      v57 = 0;
      v58 = 0;
      *((uchar *)&v33 - 4) = v39;
      v13 = *(&v33 - 1);
      Function_223c2f4(&v56);
      v59 = 1;
      v14 = v9[7];
      v15 = 0;
      if ( v14 == v57 )
      {
        if ( !v14
          || (v16 = (uchar *)Function_2235b8c(v9 + 6),
              v17 = (uchar *)Function_2235b8c((int *)&v56),
              !Function_20d5190(v16, v17, v14)) )
        {
          v15 = 1;
        }
      }
      if ( !v15 )
      {
        if ( v9 + 6 != (int *)&v56 )
        {
          v18 = v56;
          v19 = v57;
          v38 = 0;
          *((uchar *)&v33 - 4) = 0;
          v20 = *(&v33 - 1);
          Function_2236674((int)(v9 + 6), v18, (int)&v18[v19]);
        }
        v9[9] = 1;
      }
      Function_223b8e8(&v56);
      v9[13] = 1;
      Function_223b8e8(&v53);
      if ( v9[14] )
        (*(void (__fastcall **)(int, int *, int))(dword_225B6C0[1] + 36))(v7, a6, a7);
      result = 1;
    }
    else
    {
      result = 1;
    }
  }
  return result;
}

//----- (02238460) --------------------------------------------------------
int __fastcall Function_2238460(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int v9;
  int v10;
  bool v11;
  int v12;
  int v13;
  bool v14;
  int v15;
  bool v16;
  int v17;
  int v18;
  bool v19;
  int v20;
  bool v21;

  v5 = a1;
  v6 = a2;
  v7 = a4;
  if ( a3 )
    return 1;
  v9 = *(uint *)(a1 + 16);
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      if ( a2 != *(uint *)(dword_225B6C0[1] + 76) )
      {
        v10 = Function_2241dcc(dword_225B6C0[1] + 232, a2);
        v11 = v10 == 0;
        if ( v10 )
          v11 = *(uint *)(v10 + 56) == 0;
        v12 = !v11;
        if ( v12 )
        {
          v13 = *(uint *)(v5 + 8);
          v14 = v13 == 1;
          if ( v13 == 1 )
            v14 = a5 == 68;
          if ( v14 )
            (*(void (__fastcall **)(int, int))(dword_225B6C0[1] + 40))(v6, v7);
        }
      }
    }
    else if ( v9 == 2 && a2 != *(uint *)(dword_225B6C0[1] + 76) )
    {
      v15 = Function_2241dcc(dword_225B6C0[1] + 232, a2);
      v16 = v15 == 0;
      if ( v15 )
        v16 = *(uint *)(v15 + 56) == 0;
      v17 = !v16;
      if ( v17 )
      {
        v18 = *(uint *)(v5 + 8);
        v19 = v18 == 1;
        if ( v18 == 1 )
          v19 = a5 == 68;
        if ( v19 )
          (*(void (__fastcall **)(int, int))(dword_225B6C0[1] + 44))(v6, v7);
      }
    }
  }
  else
  {
    v20 = *(uint *)(v5 + 8);
    v21 = v20 == 1;
    if ( v20 == 1 )
      v21 = a5 == 4;
    if ( v21 )
      Function_223f0d0(dword_225B6C0[1] + 324);
  }
  return 1;
}

//----- (0223859C) --------------------------------------------------------
BOOL __fastcall Function_223859c(int a1, int a2, int a3, int a4)
{
  char *v4;
  BOOL v5;
  int v7;
  char *v8;
  int v9;

  v9 = a4;
  Function_2235fc8((int)&v7, dword_225B6C0[1] + 184);
  if ( v7 & 1 )
    v4 = v8;
  else
    v4 = (char *)&v7 + 1;
  v5 = Function_2244988(v4) == 0;
  Function_223badc(&v7);
  if ( v5 )
    return 0;
  if ( !*(uint *)(dword_225B6C0[1] + 200) )
    return 0;
  if ( !*(uint *)(dword_225B6C0[1] + 204) )
    return 0;
  if ( !*(uint *)(dword_225B6C0[1] + 328) )
    return 0;
  if ( *(uint *)(dword_225B6C0[1] + 324) >= 4 )
    return Function_22423b0(dword_225B6C0[1] + 232) != 0;
  return 0;
}

//----- (02238678) --------------------------------------------------------
int Function_2238678()
{
  int v1;
  int v2;

  if ( *(uint *)(dword_225B6C0[1] + 284) )
  {
    *(uint *)(dword_225B6C0[1] + 284) = 0;
    v1 = *(uint *)(dword_225B6C0[1] + 76);
    v2 = Function_2235b8c((int *)(dword_225B6C0[1] + 272));
    Function_2237348(v1, 0, (int)"b_lib_u_user", v2, *(uint *)(dword_225B6C0[1] + 276));
  }
  return 1;
}

//----- (022386D8) --------------------------------------------------------
int Function_22386d8()
{
  if ( *(uint *)(dword_225B6C0[1] + 268) )
  {
    *(uint *)(dword_225B6C0[1] + 268) = 0;
    Function_2237348(*(uint *)(dword_225B6C0[1] + 76), 0, (int)"b_lib_u_system", dword_225B6C0[1] + 252, 0x10u);
  }
  return 1;
}

//----- (02238728) --------------------------------------------------------
int Function_2238728()
{
  if ( !*(uint *)(dword_225B6C0[1] + 104) )
    return 0;
  Function_2237170(*(uint *)(dword_225B6C0[1] + 76), 0, 1, 0, 1, dword_225B6C0[1] + 116, 68);
  return 1;
}

//----- (02238784) --------------------------------------------------------
int Function_2238784()
{
  char *v0;
  int v2;
  char *v3;

  Function_2235fc8((int)&v2, dword_225B6C0[1] + 184);
  if ( v2 & 1 )
    v0 = v3;
  else
    v0 = (char *)&v2 + 1;
  Function_2245d20(v0, Function_223a6f4, 0);
  Function_223badc(&v2);
  return 1;
}

//----- (022387DC) --------------------------------------------------------
int __fastcall Function_22387dc(int a1, int a2, int a3, int a4)
{
  char *v5;
  int v6;
  char *v7;
  int v8;

  v8 = a4;
  if ( *(uint *)(dword_225B6C0[1] + 328) )
    return 0;
  Function_2235fc8((int)&v6, dword_225B6C0[1] + 184);
  if ( v6 & 1 )
    v5 = v7;
  else
    v5 = (char *)&v6 + 1;
  Function_22456b0(v5, -1, "b_lib_c_time", Function_223a750, 0);
  Function_223badc(&v6);
  return 1;
}

//----- (02238858) --------------------------------------------------------
int __fastcall Function_2238858(int a1, int a2, int a3, int a4)
{
  char *v5;
  int v6;
  char *v7;
  int v8;

  v8 = a4;
  if ( *(uint *)(dword_225B6C0[1] + 324) >= 4 )
    return 0;
  Function_2235fc8((int)&v6, dword_225B6C0[1] + 184);
  if ( v6 & 1 )
    v5 = v7;
  else
    v5 = (char *)&v6 + 1;
  Function_22456b0(v5, -1, "b_lib_c_lobby", Function_223a860, 0);
  Function_223badc(&v6);
  return 1;
}

//----- (022388E0) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x2238918 for case 0"

//----- (022388EC) --------------------------------------------------------
void Function_22388ec()
{
  JUMPOUT(&loc_2238918);
}

//----- (022388F0) --------------------------------------------------------
void Function_22388f0()
{
  JUMPOUT(&loc_2238930);
}

//----- (022388F4) --------------------------------------------------------
void Function_22388f4()
{
  JUMPOUT(&loc_2238930);
}

//----- (022388F8) --------------------------------------------------------
void Function_22388f8()
{
  JUMPOUT(&loc_2238930);
}

//----- (022388FC) --------------------------------------------------------
void Function_22388fc()
{
  JUMPOUT(&loc_2238930);
}

//----- (02238900) --------------------------------------------------------
void Function_2238900()
{
  JUMPOUT(&loc_2238930);
}

//----- (02238904) --------------------------------------------------------
void Function_2238904()
{
  JUMPOUT(&loc_2238920);
}

//----- (02238908) --------------------------------------------------------
void Function_2238908()
{
  JUMPOUT(&loc_2238928);
}

//----- (0223890C) --------------------------------------------------------
void Function_223890c()
{
  JUMPOUT(&loc_2238928);
}

//----- (02238910) --------------------------------------------------------
void Function_2238910()
{
  JUMPOUT(&loc_2238928);
}

//----- (02238914) --------------------------------------------------------
int Function_2238914()
{
  return 2;
}

//----- (02238938) --------------------------------------------------------
int __fastcall Function_2238938(int a1, uchar *a2, uint a3, uint *a4, uint *a5)
{
  uint *v5;
  uchar *v6;
  uint v7;
  int result;

  v5 = a4;
  *a4 = 0;
  v6 = a2;
  v7 = a3;
  *a5 = 0;
  if ( !a1 )
    return 2;
  if ( a3 < 4 )
    return 2;
  result = Function_22388e0(*a2);
  if ( result != 2 && result != 1 )
  {
    *v5 = v6 + 4;
    *a5 = v7 - 4;
  }
  return result;
}

//----- (0223899C) --------------------------------------------------------
int *__fastcall Function_223899c(int *result, uchar *a2, uint a3)
{
  int v3;
  bool v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint v9;
  int v10;
  int *v11;
  int *v12;
  int *v13;
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
  char v25;
  char v26;
  char v27;
  char v28;
  int *v29;
  int *v30;
  int v31;
  int v32;
  int v33;
  int v34;
  short v35;
  char v36;
  uchar v37;
  char v38;
  int v39;

  v4 = dword_225B6C0[1] == 0;
  if ( dword_225B6C0[1] )
    v4 = *(uint *)dword_225B6C0[1] == 9;
  if ( !v4 )
  {
    v33 = 0;
    v32 = 0;
    v6 = Function_2238938((int)result, a2, a3, &v33, &v32);
    if ( !v6 && v32 != 148 )
      v6 = 2;
    if ( !v6 )
      Function_22364c4(v33, v32, 0, v5);
    (*(void (__fastcall **)(int, int, int))(dword_225B6C0[1] + 52))(v6, v33, v32);
    if ( v6 )
    {
      result = (int *)10;
      *(uint *)dword_225B6C0[1] = 10;
      *(uint *)(dword_225B6C0[1] + 4) = 6;
    }
    else
    {
      v7 = Function_2235b8c((int *)(dword_225B6C0[1] + 272));
      v8 = *(uint *)(dword_225B6C0[1] + 76);
      v35 = 1;
      v34 = v8;
      v36 = *(uchar *)(v7 + 66);
      v37 = *(uchar *)(v7 + 57);
      OS_GetMacAddress((uint)&v38, v37, 1, v9);
      v10 = *(uint *)(dword_225B6C0[1] + 76);
      if ( !*(uint *)(dword_225B6C0[1] + 80) )
        v3 = 0;
      result = (int *)dword_225B6C0[5];
      if ( *(uint *)(dword_225B6C0[1] + 80) )
        v3 = 1;
      if ( !dword_225B6C0[5] )
      {
        v11 = (int *)Function_2246290(64);
        v12 = v11;
        if ( v11 )
        {
          *v11 = (int)off_2258EC0;
          v11[1] = 3;
          v11[2] = v3;
          Function_223ba6c(v11 + 3, 36015984);
          Function_223ba6c(v12 + 6, 36015844);
          v12[9] = v10;
          v12[10] = 0;
          v12[11] = 0;
          v12[12] = 0;
          v12[13] = (int)Function_2238c7c;
          v12[14] = 0;
          v12[15] = 1;
          v27 = 0;
          v28 = 0;
          v26 = 0;
          v25 = 0;
          v13 = &v24 - 1;
          v14 = v31;
          *v13 = (int)&v39;
          v13[1] = v14;
          v15 = *(&v24 - 1);
          v29 = &v34;
          v30 = &v39;
          Function_22366cc();
        }
        dword_225B6C0[5] = (int)v12;
        if ( v12[3] & 1 )
          v16 = v12[5];
        else
          v16 = (int)v12 + 13;
        Function_2258338(v12[2], v16);
        v17 = v12[11];
        v18 = v12[6];
        if ( v12[15] )
        {
          if ( v18 & 1 )
            v19 = v12[8];
          else
            v19 = (int)v12 + 25;
          v20 = Function_2235b8c(v12 + 10);
          v24 = 0;
          v21 = Function_22588f4(v19, v12[9], v20, v17, 0);
        }
        else
        {
          if ( v18 & 1 )
            v22 = v12[8];
          else
            v22 = (int)v12 + 25;
          v23 = Function_2235b8c(v12 + 10);
          v24 = 0;
          v21 = Function_22588d0(v22, v12[9], v23, v17, 0);
        }
        if ( v21 )
        {
          Function_22585f4();
          result = 0;
        }
        else
        {
          result = (int *)1;
        }
        if ( !result )
        {
          result = (int *)dword_225B6C0[5];
          if ( dword_225B6C0[5] )
          {
            if ( dword_225B6C0[5] )
              (*(void (**)(void))(*(uint *)dword_225B6C0[5] + 4))();
            result = &dword_225B6C0[5];
            dword_225B6C0[5] = 0;
          }
        }
      }
    }
  }
  return result;
}

//----- (02238C7C) --------------------------------------------------------
int *__fastcall Function_2238c7c(int *result, uchar *a2, uint a3)
{
  bool v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint v9;
  int v10;
  int v11;
  int v12;
  int *v13;
  int *v14;
  int *v15;
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
  char v27;
  char v28;
  char v29;
  char v30;
  int *v31;
  int *v32;
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
  int v44;
  int v45;
  int v46;
  int v47;

  v3 = dword_225B6C0[1] == 0;
  if ( dword_225B6C0[1] )
    v3 = *(uint *)dword_225B6C0[1] == 9;
  if ( !v3 )
  {
    v35 = 0;
    v34 = 0;
    v4 = Function_2238938((int)result, a2, a3, &v35, &v34);
    if ( !v4 && !Function_223eb80(dword_225B6C0[1] + 324, v35, v34) )
      v4 = 2;
    v5 = (*(int (__fastcall **)(int, int))(dword_225B6C0[1] + 56))(v4, v35);
    if ( v4 )
    {
      result = (int *)10;
      *(uint *)dword_225B6C0[1] = 10;
      *(uint *)(dword_225B6C0[1] + 4) = 4;
    }
    else
    {
      if ( v5 )
        Function_223cb84(dword_225B6C0[1] + 324, v35, v34);
      v6 = Function_2235b8c((int *)(dword_225B6C0[1] + 272));
      v41 = 0;
      v42 = 0;
      v43 = 0;
      v44 = 0;
      v45 = 0;
      v46 = 0;
      v7 = Function_2235b8c((int *)(dword_225B6C0[1] + 272));
      v8 = *(uint *)(dword_225B6C0[1] + 76);
      LOWORD(v37) = 1;
      v36 = v8;
      BYTE2(v37) = *(uchar *)(v7 + 66);
      HIBYTE(v37) = *(uchar *)(v7 + 57);
      OS_GetMacAddress((uint)&v38, HIBYTE(v37), 1, v9);
      v10 = BYTE2(v38);
      v42 = v37;
      v41 = v36;
      v43 = v38;
      v44 = v39;
      v45 = v40;
      v46 = *(uint *)(v6 + 4);
      v11 = *(uint *)(dword_225B6C0[1] + 80);
      if ( !v11 )
        v10 = 0;
      result = (int *)dword_225B6C0[5];
      if ( v11 )
        v10 = 1;
      v12 = *(uint *)(dword_225B6C0[1] + 76);
      if ( !dword_225B6C0[5] )
      {
        v13 = (int *)Function_2246290(64);
        v14 = v13;
        if ( v13 )
        {
          *v13 = (int)off_2258EC0;
          v13[1] = 3;
          v13[2] = v10;
          Function_223ba6c(v13 + 3, 36015984);
          Function_223ba6c(v14 + 6, 36015816);
          v14[9] = v12;
          v14[10] = 0;
          v14[11] = 0;
          v14[12] = 0;
          v14[13] = (int)Function_2239010;
          v14[14] = 0;
          v14[15] = 1;
          v29 = 0;
          v30 = 0;
          v28 = 0;
          v27 = 0;
          v15 = &v26 - 1;
          v16 = v33;
          *v15 = (int)&v47;
          v15[1] = v16;
          v17 = *(&v26 - 1);
          v31 = &v41;
          v32 = &v47;
          Function_22366cc();
        }
        dword_225B6C0[5] = (int)v14;
        if ( v14[3] & 1 )
          v18 = v14[5];
        else
          v18 = (int)v14 + 13;
        Function_2258338(v14[2], v18);
        v19 = v14[11];
        v20 = v14[6];
        if ( v14[15] )
        {
          if ( v20 & 1 )
            v21 = v14[8];
          else
            v21 = (int)v14 + 25;
          v22 = Function_2235b8c(v14 + 10);
          v26 = 0;
          v23 = Function_22588f4(v21, v14[9], v22, v19, 0);
        }
        else
        {
          if ( v20 & 1 )
            v24 = v14[8];
          else
            v24 = (int)v14 + 25;
          v25 = Function_2235b8c(v14 + 10);
          v26 = 0;
          v23 = Function_22588d0(v24, v14[9], v25, v19, 0);
        }
        if ( v23 )
        {
          Function_22585f4();
          result = 0;
        }
        else
        {
          result = (int *)1;
        }
        if ( !result )
        {
          result = (int *)dword_225B6C0[5];
          if ( dword_225B6C0[5] )
          {
            if ( dword_225B6C0[5] )
              (*(void (**)(void))(*(uint *)dword_225B6C0[5] + 4))();
            result = &dword_225B6C0[5];
            dword_225B6C0[5] = 0;
          }
        }
      }
    }
  }
  return result;
}

//----- (02239010) --------------------------------------------------------
int *__fastcall Function_2239010(int *result, uchar *a2, uint a3)
{
  int v3;
  bool v4;
  int v5;
  int v6;
  int v7;
  uint v8;
  int v9;
  int *v10;
  int *v11;
  int *v12;
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
  char v24;
  char v25;
  char v26;
  char v27;
  int *v28;
  int *v29;
  int v30;
  uint v31;
  int v32;
  int v33;
  short v34;
  char v35;
  uchar v36;
  char v37;
  int v38;

  v4 = dword_225B6C0[1] == 0;
  if ( dword_225B6C0[1] )
    v4 = *(uint *)dword_225B6C0[1] == 9;
  if ( !v4 )
  {
    v32 = 0;
    v31 = 0;
    v5 = Function_2238938((int)result, a2, a3, &v32, &v31);
    if ( !Function_223ed8c(dword_225B6C0[1] + 324, v32, v31) )
      v5 = 2;
    if ( v5 )
    {
      result = (int *)10;
      *(uint *)dword_225B6C0[1] = 10;
      *(uint *)(dword_225B6C0[1] + 4) = 5;
    }
    else
    {
      Function_223ebac(dword_225B6C0[1] + 324, v32, v31);
      (*(void (__fastcall **)(uint, int, uint))(dword_225B6C0[1] + 60))(0, v32, v31 >> 3);
      v6 = Function_2235b8c((int *)(dword_225B6C0[1] + 272));
      v7 = *(uint *)(dword_225B6C0[1] + 76);
      v34 = 1;
      v33 = v7;
      v35 = *(uchar *)(v6 + 66);
      v36 = *(uchar *)(v6 + 57);
      OS_GetMacAddress((uint)&v37, v36, 1, v8);
      v9 = *(uint *)(dword_225B6C0[1] + 76);
      if ( !*(uint *)(dword_225B6C0[1] + 80) )
        v3 = 0;
      result = (int *)dword_225B6C0[5];
      if ( *(uint *)(dword_225B6C0[1] + 80) )
        v3 = 1;
      if ( !dword_225B6C0[5] )
      {
        v10 = (int *)Function_2246290(64);
        v11 = v10;
        if ( v10 )
        {
          *v10 = (int)off_2258EC0;
          v10[1] = 3;
          v10[2] = v3;
          Function_223ba6c(v10 + 3, 36015984);
          Function_223ba6c(v11 + 6, 36015908);
          v11[9] = v9;
          v11[10] = 0;
          v11[11] = 0;
          v11[12] = 0;
          v11[13] = (int)Function_2239304;
          v11[14] = 0;
          v11[15] = 1;
          v26 = 0;
          v27 = 0;
          v25 = 0;
          v24 = 0;
          v12 = &v23 - 1;
          v13 = v30;
          *v12 = (int)&v38;
          v12[1] = v13;
          v14 = *(&v23 - 1);
          v28 = &v33;
          v29 = &v38;
          Function_22366cc();
        }
        dword_225B6C0[5] = (int)v11;
        if ( v11[3] & 1 )
          v15 = v11[5];
        else
          v15 = (int)v11 + 13;
        Function_2258338(v11[2], v15);
        v16 = v11[11];
        v17 = v11[6];
        if ( v11[15] )
        {
          if ( v17 & 1 )
            v18 = v11[8];
          else
            v18 = (int)v11 + 25;
          v19 = Function_2235b8c(v11 + 10);
          v23 = 0;
          v20 = Function_22588f4(v18, v11[9], v19, v16, 0);
        }
        else
        {
          if ( v17 & 1 )
            v21 = v11[8];
          else
            v21 = (int)v11 + 25;
          v22 = Function_2235b8c(v11 + 10);
          v23 = 0;
          v20 = Function_22588d0(v21, v11[9], v22, v16, 0);
        }
        if ( v20 )
        {
          Function_22585f4();
          result = 0;
        }
        else
        {
          result = (int *)1;
        }
        if ( !result )
        {
          result = (int *)dword_225B6C0[5];
          if ( dword_225B6C0[5] )
          {
            if ( dword_225B6C0[5] )
              (*(void (**)(void))(*(uint *)dword_225B6C0[5] + 4))();
            result = &dword_225B6C0[5];
            dword_225B6C0[5] = 0;
          }
        }
      }
    }
  }
  return result;
}

//----- (02239304) --------------------------------------------------------
int __fastcall Function_2239304(int result, uchar *a2, uint a3, int a4)
{
  bool v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v8 = a4;
  v4 = dword_225B6C0[1] == 0;
  if ( dword_225B6C0[1] )
    v4 = *(uint *)dword_225B6C0[1] == 9;
  if ( !v4 )
  {
    v7 = 0;
    v6 = 0;
    v5 = Function_2238938(result, a2, a3, &v7, &v6);
    if ( v6 != 728 )
      v5 = 2;
    if ( v5 )
    {
      result = 10;
      *(uint *)dword_225B6C0[1] = 10;
      *(uint *)(dword_225B6C0[1] + 4) = 7;
    }
    else
    {
      Function_223ee0c(dword_225B6C0[1] + 324, v7);
      (*(void (__fastcall **)(uint, int))(dword_225B6C0[1] + 64))(0, v7);
      result = dword_225B6C0[1];
      *(uint *)(dword_225B6C0[1] + 324) = 2;
    }
  }
  return result;
}

//----- (022393C0) --------------------------------------------------------
int __fastcall Function_22393c0(int result)
{
  bool v1;
  int v2;

  v1 = dword_225B6C0[1] == 0;
  if ( dword_225B6C0[1] )
    v1 = *(uint *)dword_225B6C0[1] == 9;
  if ( !v1 )
  {
    v2 = 0;
    *(uint *)(dword_225B6C0[1] + 108) = 0;
    if ( !result )
      v2 = 2;
    result = (*(int (__fastcall **)(int))(dword_225B6C0[1] + 68))(v2);
  }
  return result;
}

//----- (02239408) --------------------------------------------------------
int __fastcall Function_2239408(int result, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint *v7;
  int v8;
  long long v9;
  long long v10;
  long long v11;
  long long v12;
  long long v13;
  int v14;
  int v15;
  int v16;
  int v17;
  uint v18;
  int v19;
  int v20;
  char v21;
  char v22;
  char v23;
  char v24;
  char v25;
  char v26[12];
  int v27;
  int v28;
  int v29;
  long long v30;
  int v31;
  int v32;
  int v33;
  int (__fastcall *v34)(int, int, int, int);
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  char v49;
  char v50;
  long long v51;
  int v52;
  int v53;
  int v54;
  int (*v55)();
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  char v70;
  char v71;
  long long v72;
  int v73;
  int v74;
  int v75;
  int (__fastcall *v76)(int, int, int, int);
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  char v91;
  char v92;
  long long v93;
  int v94;
  int v95;
  int v96;
  int (*v97)();
  int v98;
  int v99;
  int v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  char v112;
  char v113;
  long long v114;
  int v115;
  int v116;
  int v117;
  int (*v118)();
  int v119;
  int v120;
  int v121;
  int v122;
  int v123;
  int v124;
  int v125;
  int v126;
  int v127;
  int v128;
  int v129;
  int v130;
  int v131;
  int v132;
  char v133;
  char v134;
  int v135;
  int v136;
  int v137;
  int v138;
  int v139;
  char v140;
  char v141;
  int v142;
  int v143;
  int v144;
  int v145;
  int v146;
  int v147;
  int v148;

  v4 = a4;
  v5 = a3;
  if ( a4 != 5 )
  {
    if ( result )
    {
      *(uint *)(dword_225B6C0[1] + 112) = 0;
      v142 = 5;
      v143 = 0;
      v144 = 0;
      v145 = 0;
      ((void (__fastcall *)(char *, char *))dword_21D806C[0])(&v141, &v140);
      v143 = RTC_ConvertDateTimeToSecond((int *)&v141, &v140);
      v144 = v6;
      v135 = v142;
      v136 = v143;
      v137 = v6;
      v139 = 1;
      v138 = v145;
      if ( Function_20d5190((uchar *)(dword_225B6C0[1] + 252), (uchar *)&v135, 16) != 0 )
      {
        *(uint *)(dword_225B6C0[1] + 252) = v135;
        v7 = (uint *)(dword_225B6C0[1] + 256);
        v8 = v137;
        *v7 = v136;
        v7[1] = v8;
        *(uint *)(dword_225B6C0[1] + 264) = v138;
        *(uint *)(dword_225B6C0[1] + 268) = 1;
      }
      *(uint *)(dword_225B6C0[1] + 296) = 1;
      Function_2245a80(v5, Function_223a5a4, v4);
      ((void (__fastcall *)(char *, char *))dword_21D806C[0])(&v134, &v133);
      LODWORD(v9) = RTC_ConvertDateTimeToSecond((int *)&v134, &v133);
      v114 = v9 - 3;
      v115 = 3;
      v118 = Function_22386d8;
      v116 = 0;
      v117 = 0;
      Function_22369fc(&v119, 1, &v114);
      v126 = v119;
      v127 = v120;
      v128 = v121;
      v129 = v122;
      v130 = v123;
      v132 = v125;
      v131 = v124;
      Function_223aabc(&v25, dword_225B6C0[1] + 308, &v126);
      ((void (__fastcall *)(char *, char *))dword_21D806C[0])(&v113, &v112);
      LODWORD(v10) = RTC_ConvertDateTimeToSecond((int *)&v113, &v112);
      v94 = 4;
      v95 = 0;
      v96 = 0;
      v97 = Function_2238678;
      v93 = v10 - 4;
      Function_22369fc(&v98, 2, &v93);
      v105 = v98;
      v106 = v99;
      v107 = v100;
      v108 = v101;
      v109 = v102;
      v110 = v103;
      v111 = v104;
      Function_223aabc(&v24, dword_225B6C0[1] + 308, &v105);
      ((void (__fastcall *)(char *, char *))dword_21D806C[0])(&v92, &v91);
      LODWORD(v11) = RTC_ConvertDateTimeToSecond((int *)&v92, &v91);
      v73 = 4;
      v74 = 0;
      v75 = 0;
      v76 = Function_22387dc;
      v72 = v11 - 4;
      Function_22369fc(&v77, 5, &v72);
      v84 = v77;
      v85 = v78;
      v86 = v79;
      v87 = v80;
      v88 = v81;
      v89 = v82;
      v90 = v83;
      Function_223aabc(&v23, dword_225B6C0[1] + 308, &v84);
      ((void (__fastcall *)(char *, char *))dword_21D806C[0])(&v71, &v70);
      LODWORD(v12) = RTC_ConvertDateTimeToSecond((int *)&v71, &v70);
      v52 = 3;
      v53 = 0;
      v54 = 0;
      v55 = Function_2238784;
      v51 = v12 - 3;
      Function_22369fc(&v56, 4, &v51);
      v63 = v56;
      v64 = v57;
      v65 = v58;
      v66 = v59;
      v67 = v60;
      v68 = v61;
      v69 = v62;
      Function_223aabc(&v22, dword_225B6C0[1] + 308, &v63);
      ((void (__fastcall *)(char *, char *))dword_21D806C[0])(&v50, &v49);
      LODWORD(v13) = RTC_ConvertDateTimeToSecond((int *)&v50, &v49);
      v30 = v13 - 4;
      v31 = 4;
      v34 = Function_2238858;
      v32 = 0;
      v33 = 0;
      Function_22369fc(&v35, 6, &v30);
      v42 = v35;
      v43 = v36;
      v44 = v37;
      v45 = v38;
      v46 = v39;
      v48 = v41;
      v47 = v40;
      Function_223aabc(&v21, dword_225B6C0[1] + 308, &v42);
      v14 = *(uint *)(dword_225B6C0[1] + 252);
      v27 = *(uint *)(dword_225B6C0[1] + 256);
      v15 = *(uint *)(dword_225B6C0[1] + 260);
      v29 = v14;
      v28 = v15;
      v146 = v27;
      v147 = v15;
      v148 = v14;
      v16 = *(uint *)(dword_225B6C0[1] + 292);
      v17 = Function_2235b8c((int *)(dword_225B6C0[1] + 272));
      result = (*(int (__fastcall **)(int, int *, int, uint, uint, uint, ushort))(dword_225B6C0[1] + 12))(
                 v16,
                 &v146,
                 v17,
                 *(uint *)(dword_225B6C0[1] + 276),
                 0,
                 0,
                 0);
    }
    else
    {
      v18 = 0;
      do
        *(uint *)&v26[4 * v18++] = 0;
      while ( v18 < 3 );
      *(uint *)(dword_225B6C0[1] + 184) = 5;
      Function_223bc5c(dword_225B6C0[1] + 188, v26);
      *(uint *)(dword_225B6C0[1] + 200) = 0;
      *(uint *)(dword_225B6C0[1] + 204) = 0;
      Function_223badc(v26);
      v19 = *(uint *)(dword_225B6C0[1] + 112);
      if ( v19 < 3 )
      {
        *(uint *)(dword_225B6C0[1] + 112) = v19 + 1;
        v20 = 1;
      }
      else
      {
        v20 = 0;
      }
      if ( v20 )
      {
        result = dword_225B6C0[1];
        *(uint *)dword_225B6C0[1] = 4;
      }
      else
      {
        result = 10;
        *(uint *)dword_225B6C0[1] = 10;
        *(uint *)(dword_225B6C0[1] + 4) = 3;
      }
    }
  }
  return result;
}

//----- (022399A8) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x2239A04 for case 0"

//----- (022399D8) --------------------------------------------------------
void Function_22399d8()
{
  JUMPOUT(&loc_2239A04);
}

//----- (022399DC) --------------------------------------------------------
void Function_22399dc()
{
  JUMPOUT(&loc_22399EC);
}

//----- (022399E0) --------------------------------------------------------
void Function_22399e0()
{
  JUMPOUT(&loc_22399EC);
}

//----- (022399E4) --------------------------------------------------------
void Function_22399e4()
{
  JUMPOUT(&loc_22399F4);
}

//----- (022399E8) --------------------------------------------------------
void __fastcall Function_22399e8(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  uint *v6;
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

  if ( !dword_2258C2C )
  {
    *(uint *)dword_225B6C0[1] = 10;
    *(uint *)(dword_225B6C0[1] + 4) = 1;
  }
  Function_2245c54(a3, dword_2258C2C);
  *(uint *)(dword_225B6C0[1] + 268) = 0;
  v13 = *(uint *)(dword_225B6C0[1] + 252);
  v5 = *(uint *)(dword_225B6C0[1] + 260);
  v14 = *(uint *)(dword_225B6C0[1] + 256);
  v15 = v5;
  v16 = *(uint *)(dword_225B6C0[1] + 264);
  v13 = v3;
  v8 = v3;
  v9 = v14;
  v10 = v5;
  v12 = 1;
  v11 = v16;
  if ( Function_20d5190((uchar *)(dword_225B6C0[1] + 252), (uchar *)&v8, 16) != 0 )
  {
    *(uint *)(dword_225B6C0[1] + 252) = v8;
    v6 = (uint *)(dword_225B6C0[1] + 256);
    v7 = v10;
    *v6 = v9;
    v6[1] = v7;
    *(uint *)(dword_225B6C0[1] + 264) = v11;
    *(uint *)(dword_225B6C0[1] + 268) = 1;
  }
  *(uint *)(dword_225B6C0[1] + 296) = 1;
  (*(void (__fastcall **)(int, int))(dword_225B6C0[1] + 8))(v4, v3);
  JUMPOUT(__CS__, v17);
}

//----- (02239B54) --------------------------------------------------------
int __fastcall Function_2239b54(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int result;
  int v9;
  int v10;
  uint *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  char v20;
  char v21;
  char v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;

  v30 = a4;
  v4 = a2;
  Function_223ba6c(&v22, a1);
  Function_2235fc8((int)&v20, dword_225B6C0[1] + 184);
  v5 = Function_223800c(&v20, &v22);
  Function_223badc(&v20);
  if ( v5 )
  {
    v6 = *(uint *)(dword_225B6C0[1] + 184);
  }
  else
  {
    Function_2235fc8((int)&v21, dword_225B6C0[1] + 208);
    v7 = Function_223800c(&v21, &v22);
    Function_223badc(&v21);
    if ( v7 )
      v6 = *(uint *)(dword_225B6C0[1] + 208);
    else
      v6 = 5;
  }
  result = Function_223badc(&v22);
  if ( v6 != 5 )
  {
    if ( v6 )
    {
      v9 = Function_2241dcc(dword_225B6C0[1] + 232, v4);
      if ( !v9 )
      {
        Function_2241c44(dword_225B6C0[1] + 232, v4);
        v9 = Function_2241dcc(dword_225B6C0[1] + 232, v4);
      }
      *(uint *)(v9 + 20) = 0;
      v26 = *(uint *)(v9 + 4);
      v10 = *(uint *)(v9 + 12);
      v27 = *(uint *)(v9 + 8);
      v28 = v10;
      v29 = *(uint *)(v9 + 16);
      v26 = v6;
      v15 = v6;
      v16 = v27;
      v17 = v10;
      v18 = v29;
      v19 = 1;
      if ( Function_20d5190((uchar *)(v9 + 4), (uchar *)&v15, 16) != 0 )
      {
        *(uint *)(v9 + 4) = v15;
        v11 = (uint *)(v9 + 8);
        v12 = v17;
        *v11 = v16;
        v11[1] = v12;
        *(uint *)(v9 + 16) = v18;
        *(uint *)(v9 + 20) = 1;
      }
      *(uint *)(v9 + 48) = 1;
      *(uint *)(v9 + 20) = 0;
      v13 = *(uint *)(v9 + 4);
      v14 = *(uint *)(v9 + 12);
      v23 = *(uint *)(v9 + 8);
      v24 = v14;
      v25 = v13;
      result = *(uint *)(v9 + 56);
      if ( result )
        result = (*(int (__fastcall **)(int, int *))(dword_225B6C0[1] + 32))(v4, &v23);
    }
    else
    {
      result = Function_2241c44(dword_225B6C0[1] + 232, v4);
    }
  }
  return result;
}

//----- (02239D60) --------------------------------------------------------
int __fastcall Function_2239d60(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int result;
  bool v9;
  uint *v10;
  int v11;
  uint *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  char v21;
  char v22;
  char v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;

  v31 = a4;
  v4 = a2;
  Function_223ba6c(&v23, a1);
  Function_2235fc8((int)&v21, dword_225B6C0[1] + 184);
  v5 = Function_223800c(&v21, &v23);
  Function_223badc(&v21);
  if ( v5 )
  {
    v6 = *(uint *)(dword_225B6C0[1] + 184);
  }
  else
  {
    Function_2235fc8((int)&v22, dword_225B6C0[1] + 208);
    v7 = Function_223800c(&v22, &v23);
    Function_223badc(&v22);
    if ( v7 )
      v6 = *(uint *)(dword_225B6C0[1] + 208);
    else
      v6 = 5;
  }
  result = Function_223badc(&v23);
  if ( v6 != 5 )
  {
    if ( v6 )
    {
      result = Function_2241dcc(dword_225B6C0[1] + 232, v4);
      v10 = (uint *)result;
      if ( result )
      {
        *(uint *)(result + 20) = 0;
        v27 = *(uint *)(result + 4);
        v11 = *(uint *)(result + 12);
        v28 = *(uint *)(result + 8);
        v29 = v11;
        v30 = *(uint *)(result + 16);
        v27 = 5;
        v16 = 5;
        v17 = v28;
        v18 = v11;
        v19 = v30;
        v20 = 1;
        if ( Function_20d5190((uchar *)(result + 4), (uchar *)&v16, 16) != 0 )
        {
          v10[1] = v16;
          v12 = v10 + 2;
          v13 = v18;
          *v12 = v17;
          v12[1] = v13;
          v10[4] = v19;
          v10[5] = 1;
        }
        v10[12] = 1;
        v10[5] = 0;
        v14 = v10[1];
        v15 = v10[3];
        v24 = v10[2];
        v25 = v15;
        v26 = v14;
        result = v10[14];
        if ( result )
          result = (*(int (__fastcall **)(int, int *))(dword_225B6C0[1] + 32))(v4, &v24);
      }
    }
    else
    {
      result = Function_2241dcc(dword_225B6C0[1] + 232, v4);
      v9 = result == 0;
      if ( result )
      {
        result = *(uint *)(result + 56);
        v9 = result == 0;
      }
      if ( !v9 )
      {
        (*(void (__fastcall **)(int))(dword_225B6C0[1] + 16))(v4);
        result = Function_2241d40(dword_225B6C0[1] + 232, v4);
      }
    }
  }
  return result;
}

//----- (02239F84) --------------------------------------------------------
int __fastcall Function_2239f84(int a1, int a2, int a3)
{
  return Function_2239fa4(0, a1, a2, a3);
}

//----- (02239FA4) --------------------------------------------------------
int __fastcall Function_2239fa4(int result, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  BOOL v10;
  int v11;
  bool v12;
  int v13;
  int v14;
  int v15;
  int v16;
  char v17;
  char v18;
  char v19;
  char v20;
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

  v30 = a4;
  v4 = result;
  v5 = a2;
  v6 = a3;
  v7 = 5;
  if ( result )
  {
    Function_223ba6c(&v20, result);
    Function_2235fc8((int)&v17, dword_225B6C0[1] + 184);
    v8 = Function_223800c(&v17, &v20);
    Function_223badc(&v17);
    if ( v8 )
    {
      v7 = *(uint *)(dword_225B6C0[1] + 184);
    }
    else
    {
      Function_2235fc8((int)&v18, dword_225B6C0[1] + 208);
      v9 = Function_223800c(&v18, &v20);
      Function_223badc(&v18);
      if ( v9 )
        v7 = *(uint *)(dword_225B6C0[1] + 208);
      else
        v7 = 5;
    }
    result = Function_223badc(&v20);
  }
  if ( !v4 || v7 != 5 )
  {
    v21 = 0;
    v22 = 6;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    Function_223ba6c(&v19, v6);
    v10 = Function_2241184(&v19, &v21) == 0;
    Function_223badc(&v19);
    if ( v10 )
      return Function_223b8e8(&v27);
    if ( v24 )
    {
      if ( v24 == 1 )
      {
        v11 = Function_2241dcc(dword_225B6C0[1] + 232, v5);
        v12 = v11 == 0;
        if ( v11 )
          v12 = *(uint *)(v11 + 56) == 0;
        v13 = !v12;
        if ( !v13 )
          return Function_223b8e8(&v27);
        if ( v23 )
        {
          if ( v23 == 1 )
          {
            v14 = Function_2235b8c(&v27);
            (*(void (__fastcall **)(int, int, int, int, int))(dword_225B6C0[1] + 24))(v5, v7, v25, v14, v28);
          }
        }
        else
        {
          v15 = Function_2235b8c(&v27);
          (*(void (__fastcall **)(int, int, int, int))(dword_225B6C0[1] + 20))(v5, v7, v25, v15);
        }
      }
    }
    else
    {
      v16 = Function_2235b8c(&v27);
      Function_2238460((int)&v21, v5, v7, v16, v28);
    }
    result = Function_223b8e8(&v27);
  }
  return result;
}

//----- (0223A1C8) --------------------------------------------------------
int Function_223a1c8()
{
  return (*(int (**)(void))(dword_225B6C0[1] + 72))();
}

//----- (0223A1E4) --------------------------------------------------------
int __fastcall Function_223a1e4(int a1, int a2, int a3, int a4)
{
  return Function_2237d24(1, 1, a1, a2, a3, a4, 0);
}

//----- (0223A21C) --------------------------------------------------------
int __fastcall Function_223a21c(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return Function_2237d24(a1, 0, a2, a3, a4, a5, a6);
}

//----- (0223A250) --------------------------------------------------------
int __fastcall Function_223a250(int result, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  char v9;
  char v10;
  char v11;
  char v12;
  int v13;
  uint v14;

  v5 = a2;
  v6 = a3;
  if ( !result )
    return result;
  v7 = 0;
  if ( a2 <= 0 )
  {
LABEL_11:
    Function_2237a88((int)&v9);
    Function_223bc5c(dword_225B6C0[1] + 88, &v9);
    Function_223badc(&v9);
    *(uint *)(dword_225B6C0[1] + 100) = 1;
    result = dword_225B6C0[1];
    *(uint *)dword_225B6C0[1] = 6;
    return result;
  }
  while ( *(uint *)(a5 + 4 * v7) >= 20 )
  {
LABEL_10:
    if ( ++v7 >= v5 )
      goto LABEL_11;
  }
  Function_223ba6c(&v12, *(uint *)(v6 + 4 * v7));
  Function_223ba6c(&v11, &dword_2258FB8);
  Function_223a3b0(&v13, &v12, &v11, 0);
  Function_223badc(&v11);
  Function_223badc(&v12);
  if ( v14 < 2 )
  {
    Function_223b578(&v13);
    goto LABEL_10;
  }
  if ( *(uint *)(v13 + 12) & 1 )
    v8 = *(uint *)(v13 + 20);
  else
    v8 = v13 + 13;
  Function_223ba6c(&v10, v8);
  Function_223bc5c(dword_225B6C0[1] + 88, &v10);
  Function_223badc(&v10);
  *(uint *)(dword_225B6C0[1] + 100) = 0;
  *(uint *)dword_225B6C0[1] = 6;
  return Function_223b578(&v13);
}

//----- (0223A3B0) --------------------------------------------------------
int __fastcall Function_223a3b0(uint *a1, int a2, uint *a3, int a4)
{
  uint *v4;
  uint *v5;
  int v6;
  int *v7;
  uint v8;
  int v9;
  uint v10;
  int v11;
  int v12;
  uint v13;
  uint v14;
  int v15;
  int v17;
  char v18;
  char v19;
  char v20;
  char v21;
  char v22;
  char v23;
  int v24;
  uint v25;

  v4 = a1;
  *a1 = 0;
  a1[1] = 0;
  v5 = a3;
  v17 = a4;
  a1[2] = 0;
  v6 = 1;
  Function_223b938(&v24, a2);
  v7 = &v17 - 1;
  while ( v6 != v17 )
  {
    v11 = Function_223bdc4(&v24, v5, 0);
    v12 = v11;
    if ( v11 == -1 )
      break;
    if ( v11 )
    {
      Function_223a594(&v23, &v24, 0, v11);
      v21 = 0;
      v8 = v4[1];
      if ( v8 >= v4[2] )
      {
        v20 = 0;
        *(uchar *)v7 = 0;
        Function_223b548(v4, &v23, *v7);
      }
      else
      {
        v9 = *v4 + 12 * v8;
        if ( v9 )
          Function_223b938(v9, &v23);
        ++v4[1];
      }
      Function_223badc(&v23);
      ++v6;
    }
    if ( *v5 & 1 )
      v10 = v5[1];
    else
      v10 = (uint)*(uchar *)v5 << 24 >> 25;
    Function_223a594(&v22, &v24, v12 + v10, -1);
    Function_223bc5c(&v24, &v22);
    Function_223badc(&v22);
  }
  if ( v24 & 1 )
    v13 = v25;
  else
    v13 = (uint)(uchar)v24 << 24 >> 25;
  if ( v13 )
  {
    v19 = 0;
    v14 = v4[1];
    if ( v14 >= v4[2] )
    {
      v18 = 0;
      *((uchar *)&v17 - 4) = 0;
      Function_223b548(v4, &v24, *(&v17 - 1));
    }
    else
    {
      v15 = *v4 + 12 * v14;
      if ( v15 )
        Function_223b938(v15, &v24);
      ++v4[1];
    }
  }
  return Function_223badc(&v24);
}

//----- (0223A594) --------------------------------------------------------
int Function_223a594()
{
  return Function_223b9b4();
}

//----- (0223A5A4) --------------------------------------------------------
int __fastcall Function_223a5a4(int result, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int i;
  int v11;
  char v12;
  char v13;
  char v14;
  int v15;

  v15 = a4;
  v4 = a2;
  v5 = a3;
  v6 = a4;
  if ( result )
  {
    Function_223ba6c(&v14, a2);
    Function_2235fc8((int)&v12, dword_225B6C0[1] + 184);
    v7 = Function_223800c(&v12, &v14);
    Function_223badc(&v12);
    if ( v7 )
    {
      v8 = *(uint *)(dword_225B6C0[1] + 184);
    }
    else
    {
      Function_2235fc8((int)&v13, dword_225B6C0[1] + 208);
      v9 = Function_223800c(&v13, &v14);
      Function_223badc(&v13);
      v8 = v9 ? *(uint *)(dword_225B6C0[1] + 208) : 5;
    }
    result = Function_223badc(&v14);
    if ( v8 != 5 && !v8 )
    {
      for ( i = 0; i < v5; ++i )
      {
        v11 = *(uint *)(v6 + 4 * i);
        if ( v11 != *(uint *)(dword_225B6C0[1] + 76) )
        {
          Function_2241c44(dword_225B6C0[1] + 232, v11);
          Function_22456b0(v4, *(uint *)(v6 + 4 * i), "b_lib_u_user", Function_223a21c, 0);
          Function_22456b0(v4, *(uint *)(v6 + 4 * i), "b_lib_u_system", Function_223a21c, 0);
        }
      }
      result = dword_225B6C0[1];
      *(uint *)(dword_225B6C0[1] + 200) = 1;
    }
  }
  return result;
}

//----- (0223A6F4) --------------------------------------------------------
int __fastcall Function_223a6f4(int result, int a2, int a3, int a4)
{
  int v4;

  v4 = a4;
  if ( result )
  {
    if ( *(uint *)(a3 + 28) == 20 )
    {
      *(uint *)(dword_225B6C0[1] + 204) = 1;
      v4 = 4;
      result = Function_2236ca0(dword_225B6C0[1] + 308, (int)&v4, 4, 1);
    }
    else
    {
      result = Function_2245c54(a2, dword_2258C6C);
    }
  }
  return result;
}

//----- (0223A750) --------------------------------------------------------
int __fastcall Function_223a750(int result, int a2, int a3, int a4, char *a5)
{
  int v5;
  int v6;
  int *v7;
  int v8;
  int v9;
  int *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  char v16;
  char v17;
  int v18;
  int v19;
  int v20;

  if ( result )
  {
    v18 = 0;
    v19 = 0;
    v20 = 0;
    if ( Function_2237ef8(a5, &v18) && v19 == 8 )
    {
      v7 = (int *)Function_2235b8c(&v18);
      v8 = *v7;
      v9 = v7[1];
      *(uint *)(dword_225B6C0[1] + 328) = 1;
      v12 = v8;
      v13 = v9;
      v10 = (int *)(dword_225B6C0[1] + 332);
      *v10 = v8;
      v10[1] = v9;
      v11 = 5;
      Function_2236ca0(dword_225B6C0[1] + 308, (int)&v11, 5, v9);
      result = Function_223b8e8(&v18);
    }
    else
    {
      ((void (__fastcall *)(char *, char *))dword_21D806C[0])(&v16, &v17);
      *(uint *)(dword_225B6C0[1] + 332) = RTC_ConvertDateTimeToSecond((int *)&v16, &v17);
      *(uint *)(dword_225B6C0[1] + 336) = v5;
      v6 = *(uint *)(dword_225B6C0[1] + 336);
      v14 = *(uint *)(dword_225B6C0[1] + 332);
      v15 = v6;
      Function_2237348(-1, 0, (int)"b_lib_c_time", (int)&v14, 8u);
      result = Function_223b8e8(&v18);
    }
  }
  return result;
}

//----- (0223A860) --------------------------------------------------------
int __fastcall Function_223a860(int result, int a2, int a3, int a4, char *a5)
{
  int v5;
  int v6;
  bool v7;
  int v8;
  int v9;
  int v10;
  char v11;
  uint v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v16 = a4;
  if ( result )
  {
    v14 = 0;
    v13 = 0;
    v15 = 0;
    v6 = Function_2237ef8(a5, &v13);
    v7 = v6 == 0;
    if ( v6 )
    {
      v5 = v14;
      v7 = v14 == 0;
    }
    if ( !v7 && (v8 = Function_2235b8c(&v13), Function_223cb84(dword_225B6C0[1] + 324, v8, v5)) )
    {
      *(uint *)(dword_225B6C0[1] + 324) = 4;
      v10 = 6;
      Function_2236ca0(dword_225B6C0[1] + 308, (int)&v10, 6, 4);
      result = Function_223b8e8(&v13);
    }
    else
    {
      Function_223cb2c(&v11, dword_225B6C0[1] + 324);
      v9 = Function_2235b8c((int *)&v11);
      Function_2237348(-1, 0, (int)"b_lib_c_lobby", v9, v12);
      Function_223b8e8(&v11);
      result = Function_223b8e8(&v13);
    }
  }
  return result;
}

//----- (0223A958) --------------------------------------------------------
void Function_223a958()
{
  ;
}

//----- (0223A95C) --------------------------------------------------------
int __fastcall Function_223a95c(int a1)
{
  int v1;

  v1 = a1;
  Function_223b8e8(a1 + 40);
  Function_223badc(v1 + 24);
  Function_223badc(v1 + 12);
  return v1;
}

//----- (0223A984) --------------------------------------------------------
uint *__fastcall Function_223a984(uint *a1)
{
  uint *v1;

  v1 = a1;
  *a1 = off_2258EA0;
  Function_2241e54(a1);
  Function_223b8e8(v1 + 10);
  Function_223aa9c(v1 + 1);
  if ( v1 )
    ((void (*)(void))dword_21D77C4[0])();
  return v1;
}

//----- (0223A9CC) --------------------------------------------------------
int __fastcall Function_223a9cc(int a1)
{
  int v1;

  v1 = a1;
  Function_223b8e8(a1 + 24);
  if ( v1 )
    ((void (*)(void))dword_21D77C4[0])();
  return v1;
}

//----- (0223A9FC) --------------------------------------------------------
uint *__fastcall Function_223a9fc(uint *a1)
{
  int v1;
  uint *v2;
  int v3;
  int v4;
  uint *v5;
  int v6;
  uint *v7;
  int v8;

  v1 = 0;
  v2 = a1;
  a1[1] = 0;
  if ( a1[4] )
  {
    v3 = a1[5];
    if ( v3 )
    {
      u32_div_f(a1[3] + a1[4], v3);
      v1 = v4;
    }
    v5 = (uint *)v2[2];
    v6 = (int)&v5[v1];
    v7 = &v5[v2[3]];
    v8 = (int)&v5[v2[5]];
    while ( v7 != (uint *)v6 )
    {
      if ( *v7 )
        ((void (__fastcall *)(uint))dword_21D77C4[0])(0);
      ++v7;
      if ( v7 == (uint *)v8 )
        v7 = v5;
    }
  }
  Function_223c41c(v2 + 2);
  return v2;
}

//----- (0223AA9C) --------------------------------------------------------
int __fastcall Function_223aa9c(int a1)
{
  int v1;

  v1 = a1;
  if ( *(uint *)(a1 + 4) )
    Function_223c46c();
  return v1;
}

//----- (0223AABC) --------------------------------------------------------
int __fastcall Function_223aabc(int a1, int a2, uint *a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  int result;
  uchar v9;
  uchar v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a3;
  v5 = a2;
  v6 = a1;
  v7 = Function_223c364(a2, a3, &v11, &v10, &v9);
  if ( v11 && *(uint *)(v11 + 12) >= *v4 )
  {
    *(uint *)v6 = v11;
    result = 0;
    *(uchar *)(v6 + 4) = 0;
  }
  else
  {
    *(uint *)v6 = Function_223abf4(v5, v7, v10, v9, v4);
    result = 1;
    *(uchar *)(v6 + 4) = 1;
  }
  return result;
}

//----- (0223AB54) --------------------------------------------------------
int Function_223ab54()
{
  return Function_223ab58();
}

//----- (0223AB58) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223ABC4) --------------------------------------------------------
int __fastcall Function_223abc4(int result)
{
  uint *v1;

  v1 = (uint *)result;
  if ( *(uint *)(result + 4) )
  {
    Function_223ad00();
    *v1 = 0;
    v1[1] = 0;
    result = (int)(v1 + 1);
    v1[3] = v1 + 1;
  }
  return result;
}

//----- (0223ABF4) --------------------------------------------------------
uint *__fastcall Function_223abf4(uint *a1, int a2, int a3, int a4, uint *a5)
{
  uint *v5;
  uint *v6;
  int v7;
  int v8;
  uint *v9;
  uint *v10;
  uint *v11;
  int v12;
  uint *v13;
  int v14;

  v5 = a1;
  v6 = (uint *)a2;
  v7 = a3;
  v8 = a4;
  if ( *a1 == -1 )
  {
    Function_20d7350("tree::insert length error", a2, a3, a4);
    Function_20d3da0();
  }
  v9 = (uint *)Function_2246290(40);
  v10 = v9 + 3;
  if ( v9 != (uint *)-12 )
  {
    v11 = v9 + 4;
    *v10 = *a5;
    v12 = a5[2];
    *v11 = a5[1];
    v11[1] = v12;
    v13 = v9 + 6;
    v10 = (uint *)a5[3];
    v14 = a5[4];
    *v13 = v10;
    v13[1] = v14;
    v11[4] = a5[5];
    v11[5] = a5[6];
  }
  v9[1] = 0;
  *v9 = 0;
  if ( v9 != (uint *)-8 )
    v9[2] = v6;
  if ( v7 )
    *v6 = v9;
  else
    v6[1] = v9;
  ++*v5;
  Function_223add8(v9, v5[1], v10);
  if ( v8 )
    v5[3] = v9;
  return v9;
}

//----- (0223AD00) --------------------------------------------------------
int __fastcall Function_223ad00(int result, uint *a2)
{
  uint *v2;
  int v3;

  v2 = a2;
  v3 = result;
  if ( *a2 )
    result = ((int (*)(void))Function_223ad00)();
  if ( v2[1] )
    result = Function_223ad00(v3);
  if ( v2 )
    result = ((int (*)(void))dword_21D77C4[0])();
  return result;
}

//----- (0223AD4C) --------------------------------------------------------
int __fastcall Function_223ad4c(int a1)
{
  int v1;
  uint *v2;

  v1 = a1;
  v2 = *(uint **)(a1 + 4);
  if ( v2 )
    Function_223ad00(a1, v2);
  return v1;
}

//----- (0223AD6C) --------------------------------------------------------
int *__fastcall Function_223ad6c(int *result)
{
  int v1;
  uint **v2;
  uint *i;
  uint *v4;
  uint *v5;

  v1 = *result;
  v2 = *(uint ***)(*result + 4);
  if ( v2 )
  {
    for ( i = *v2; i; i = (uint *)*i )
      v2 = (uint **)i;
    *result = (int)v2;
  }
  else
  {
    v4 = (uint *)(*(uint *)(v1 + 8) & 0xFFFFFFFE);
    if ( v1 != *v4 )
    {
      do
      {
        v5 = v4;
        *result = (int)v4;
        v4 = (uint *)(v4[2] & 0xFFFFFFFE);
      }
      while ( v5 != (uint *)*v4 );
    }
    *result = (int)v4;
  }
  return result;
}

//----- (0223ADD8) --------------------------------------------------------
int Function_223add8()
{
  return Function_223addc();
}

//----- (0223ADDC) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223AFE4) --------------------------------------------------------
int Function_223afe4()
{
  return Function_223afe8();
}

//----- (0223AFE8) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223B450) --------------------------------------------------------
int __fastcall Function_223b450(int result, uint *a2)
{
  uint v2;
  uint *v3;

  v2 = *(uint *)(result + 4);
  if ( *a2 == result )
    *a2 = v2;
  *(uint *)(result + 4) = *(uint *)v2;
  if ( *(uint *)v2 )
    *(uint *)(*(uint *)v2 + 8) = result | *(uint *)(*(uint *)v2 + 8) & 1;
  *(uint *)(v2 + 8) = *(uint *)(result + 8) & 0xFFFFFFFE | *(uint *)(v2 + 8) & 1;
  v3 = (uint *)(*(uint *)(result + 8) & 0xFFFFFFFE);
  if ( result == *v3 )
    *v3 = v2;
  else
    v3[1] = v2;
  *(uint *)v2 = result;
  *(uint *)(result + 8) = v2 | *(uint *)(result + 8) & 1;
  return result;
}

//----- (0223B4CC) --------------------------------------------------------
uint __fastcall Function_223b4cc(uint result, uint *a2)
{
  int v2;
  int v3;
  uint *v4;

  v2 = *(uint *)result;
  if ( *a2 == result )
    *a2 = v2;
  *(uint *)result = *(uint *)(v2 + 4);
  v3 = *(uint *)(v2 + 4);
  if ( v3 )
    *(uint *)(v3 + 8) = result | *(uint *)(v3 + 8) & 1;
  *(uint *)(v2 + 8) = *(uint *)(result + 8) & 0xFFFFFFFE | *(uint *)(v2 + 8) & 1;
  v4 = (uint *)(*(uint *)(result + 8) & 0xFFFFFFFE);
  if ( result == *v4 )
    *v4 = v2;
  else
    v4[1] = v2;
  *(uint *)(v2 + 4) = result;
  *(uint *)(result + 8) = v2 | *(uint *)(result + 8) & 1;
  return result;
}

//----- (0223B548) --------------------------------------------------------
int __fastcall Function_223b548(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  Function_223c4b8();
  return Function_223c588(v3, 1, v2);
}

//----- (0223B578) --------------------------------------------------------
uint *__fastcall Function_223b578(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  char v8;
  int v9;

  v9 = a4;
  v4 = a1;
  if ( *a1 )
  {
    v5 = a1[1];
    v8 = 0;
    *(&v8 - 4) = 0;
    v6 = *((uint *)&v8 - 1);
    Function_223c6f8(a1, v5);
    if ( *v4 )
      ((void (*)(void))dword_21D77C4[0])();
  }
  return v4;
}

//----- (0223B5D0) --------------------------------------------------------
uint *__fastcall Function_223b5d0(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( *a1 )
  {
    a1[1] -= a1[1];
    if ( *a1 )
      ((void (__cdecl *)(uint))dword_21D77C4[0])(0);
  }
  return v1;
}

//----- (0223B620) --------------------------------------------------------
uint *__fastcall Function_223b620(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( *a1 )
  {
    a1[1] -= a1[1];
    if ( *a1 )
      ((void (__cdecl *)(uint))dword_21D77C4[0])(0);
  }
  return v1;
}

//----- (0223B670) --------------------------------------------------------
uint *__fastcall Function_223b670(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( *a1 )
  {
    a1[1] -= a1[1];
    if ( *a1 )
      ((void (__cdecl *)(uint))dword_21D77C4[0])(0);
  }
  return v1;
}

//----- (0223B6C0) --------------------------------------------------------
int __fastcall Function_223b6c0(int result, uint a2, int a3, int a4)
{
  uint v4;
  uint *v5;
  int v6;
  int v7;

  v7 = a4;
  v4 = a2;
  v5 = (uint *)result;
  if ( a2 )
  {
    BYTE1(v7) = 0;
    *((uchar *)&v7 - 4) = 0;
    v6 = *(&v7 - 1);
    Function_223b714(result);
    LOBYTE(v7) = 0;
    Call_FillMemWithValue((int *)(*v5 + v5[1]), 0, v4);
    result = v5[1] + v4;
    v5[1] = result;
  }
  return result;
}

//----- (0223B714) --------------------------------------------------------
int __fastcall Function_223b714(int *a1, int a2)
{
  int v2;
  int *v3;
  int result;

  v2 = a2;
  v3 = a1;
  result = Function_2246290(a2);
  *v3 = result;
  v3[2] = v2;
  return result;
}

//----- (0223B734) --------------------------------------------------------
int __fastcall Function_223b734(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int v7;
  int v9;

  v9 = a4;
  v4 = a1;
  v5 = a1[1];
  BYTE2(v9) = 0;
  v6 = a3;
  v4[1] -= v5;
  if ( *a1 )
  {
    if ( *a1 )
      ((void (__cdecl *)(uint))dword_21D77C4[0])(0);
    *v4 = 0;
    v4[2] = 0;
  }
  LOBYTE(v9) = 0;
  *((uchar *)&v9 - 4) = 0;
  v7 = *(&v9 - 1);
  BYTE1(v9) = 0;
  return Function_223b714(v4, v6);
}

//----- (0223B7A4) --------------------------------------------------------
int Function_223b7a4()
{
  return Function_223b7a8();
}

//----- (0223B7A8) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223B870) --------------------------------------------------------
int __fastcall Function_223b870(uint *a1, uint a2)
{
  uint *v2;
  uint v3;
  uint v4;
  bool v5;
  bool v6;
  int v7;
  int result;

  v2 = a1;
  v3 = a1[2];
  v4 = a2;
  v5 = a2 >= v3;
  v6 = a2 == v3;
  if ( a2 <= v3 )
  {
    a2 = a1[1];
    v5 = a2 >= v3 - v4;
    v6 = a2 == v3 - v4;
  }
  if ( !v6 && v5 )
  {
    v7 = a1[1] + v4 - v3;
    Function_223b7a4();
    result = Function_223c734(v2, v4);
  }
  else
  {
    Call_FillMemWithValue((int *)(*a1 + a2), 0, v4);
    result = v2[1] + v4;
    v2[1] = result;
  }
  return result;
}

//----- (0223B8E8) --------------------------------------------------------
uint *__fastcall Function_223b8e8(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( *a1 )
  {
    a1[1] -= a1[1];
    if ( *a1 )
      ((void (__cdecl *)(uint))dword_21D77C4[0])(0);
  }
  return v1;
}

//----- (0223B938) --------------------------------------------------------
uint *__fastcall Function_223b938(uint *a1, uint *a2)
{
  uint *v2;
  uint *v3;
  int v4;
  int v5;
  uint v6;

  v2 = a2;
  v3 = a1;
  if ( *a2 & 1 )
  {
    v6 = 0;
    do
      a1[v6++] = 0;
    while ( v6 < 3 );
    Function_223bb10(a1, v2[1]);
    Function_223c018(v3);
  }
  else
  {
    v4 = a2[1];
    v5 = v2[2];
    *a1 = *v2;
    a1[1] = v4;
    a1[2] = v5;
  }
  return v3;
}

//----- (0223B9B4) --------------------------------------------------------
int Function_223b9b4()
{
  return Function_223b9b8();
}

//----- (0223B9B8) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223BA6C) --------------------------------------------------------
int __fastcall Function_223ba6c(int a1, char *a2)
{
  char *v2;
  uint v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = 0;
  v4 = a1;
  do
    *(uint *)(a1 + 4 * v3++) = 0;
  while ( v3 < 3 );
  v5 = strlen(v2);
  Function_223bb10(v4, v5);
  Function_223c018(v4);
  return v4;
}

//----- (0223BADC) --------------------------------------------------------
uint *__fastcall Function_223badc(uint *a1)
{
  uint *v1;
  bool v2;
  int v3;

  v1 = a1;
  v3 = *a1 & 1;
  v2 = v3 == 0;
  if ( v3 )
    v2 = v1[2] == 0;
  if ( !v2 )
    ((void (*)(void))dword_21D77C4[0])();
  return v1;
}

//----- (0223BB10) --------------------------------------------------------
int __fastcall Function_223bb10(uint *a1, uint a2, int a3, int a4)
{
  char *v4;
  uint v5;
  uint *v6;
  BOOL v7;
  uint v8;
  uint v9;
  int result;
  uint v11;
  char *v12;
  int v13;
  bool v14;
  int v15;

  v5 = a2;
  v6 = a1;
  if ( a2 > 0x7FFFFFFE )
  {
    Function_20d7350("basic_string::reserve length_error", 2147483646, a3, a4);
    Function_20d3da0();
  }
  v7 = (*v6 & 1) != 0;
  if ( (*v6 & 1) != 0 )
  {
    v8 = v6[1];
    v9 = *v6 >> 1;
  }
  else
  {
    v9 = 11;
    v8 = (uint)*(uchar *)v6 << 24 >> 25;
  }
  if ( v5 < v8 )
    v5 = v8;
  result = v5 + 1;
  if ( v5 + 1 > 0xB )
  {
    result = v5 + 16;
    v11 = (v5 + 16) & 0xFFFFFFF0;
  }
  else
  {
    v11 = 11;
  }
  if ( v11 != v9 )
  {
    if ( v11 == 11 )
    {
      v12 = (char *)v6 + 1;
      v4 = (char *)v6[2];
      v13 = 0;
    }
    else
    {
      if ( v11 <= v9 )
      {
        result = Function_2246290(v11);
        v12 = (char *)result;
        if ( !result )
          return result;
      }
      else
      {
        v12 = (char *)Function_2246290(v11);
      }
      if ( v7 )
        v4 = (char *)v6[2];
      v13 = 1;
      if ( !v7 )
        v4 = (char *)v6 + 1;
    }
    Function_20d50d8(v12, v4, v8);
    v14 = v7 == 0;
    v12[v8] = 0;
    if ( v7 )
      v14 = v4 == 0;
    if ( !v14 )
      ((void (*)(void))dword_21D77C4[0])();
    *v6 = *v6 & 0xFFFFFFFE | v13 & 1;
    if ( v13 )
    {
      v6[1] = v8;
      v6[2] = v12;
      result = *v6 & 1 | 2 * v11;
      *v6 = result;
    }
    else
    {
      v15 = *(uchar *)v6 & 1;
      result = v15 | 2 * (uchar)v8 & 0xFF;
      *(uchar *)v6 = v15 | 2 * v8;
    }
  }
  return result;
}

//----- (0223BC5C) --------------------------------------------------------
int __fastcall Function_223bc5c(uint *a1, uint *a2, uint a3)
{
  uint *v3;
  uint *v4;
  int v5;
  BOOL v6;
  int v7;
  int v8;
  int result;

  v3 = a1;
  v4 = a2;
  v5 = *a1 & 1;
  v6 = v5 != 0;
  if ( v5 != 0 || (v5 = *v4 & 1) != 0 )
  {
    if ( v6 )
      a3 = v3[1];
    else
      v5 = *(uchar *)v3;
    if ( !v6 )
      a3 = (uint)(v5 << 24) >> 25;
    result = Function_223bcc8(v3, 0, a3, v4);
  }
  else
  {
    v7 = v4[1];
    v8 = v4[2];
    *v3 = *v4;
    v3[1] = v7;
    v3[2] = v8;
    result = (int)v3;
  }
  return result;
}

//----- (0223BCC8) --------------------------------------------------------
int __fastcall Function_223bcc8(int a1, int a2, int a3, uint *a4)
{
  int v4;
  int v5;
  uint v6;

  if ( *a4 & 1 )
  {
    v4 = a4[2];
    v5 = a4[1];
  }
  else
  {
    v6 = (uint)*(uchar *)a4 << 24 >> 25;
  }
  return Function_223c018(a1);
}

//----- (0223BD18) --------------------------------------------------------
int __fastcall Function_223bd18(int a1, int a2, int a3, uint *a4, uint a5, uint a6)
{
  int v6;
  int v7;
  uint v8;
  uint *v9;
  uint v11;

  v6 = a1;
  if ( *a4 & 1 )
  {
    v7 = a4[2];
    v8 = a4[1];
  }
  else
  {
    v8 = (uint)*(uchar *)a4 << 24 >> 25;
  }
  if ( a5 > v8 )
  {
    Function_20d7350("basic_string: out_of_range", a2, a3, (int)a4);
    Function_20d3da0();
  }
  v9 = (uint *)a6;
  if ( v8 - a5 < a6 )
    v9 = &v11;
  v11 = v8 - a5;
  if ( v8 - a5 >= a6 )
    v9 = &a6;
  a6 = *v9;
  return Function_223c018(v6);
}

//----- (0223BDC4) --------------------------------------------------------
int __fastcall Function_223bdc4(int a1, uint *a2, int a3)
{
  uint v3;
  int v4;

  if ( *a2 & 1 )
  {
    v3 = a2[1];
    v4 = a2[2];
  }
  else
  {
    v4 = (int)a2 + 1;
    v3 = (uint)*(uchar *)a2 << 24 >> 25;
  }
  return Function_223bdf8(a1, v4, a3, v3);
}

//----- (0223BDF8) --------------------------------------------------------
int __fastcall Function_223bdf8(uint *a1, char *a2, uint a3, uint a4)
{
  int v4;
  uint v5;
  uint v6;
  uint v7;
  int v8;
  char *v9;
  char *v10;

  if ( *a1 & 1 )
  {
    v4 = a1[2];
    v5 = a1[1];
  }
  else
  {
    v4 = (int)a1 + 1;
    v5 = (uint)*(uchar *)a1 << 24 >> 25;
  }
  if ( a3 > v5 )
    return -1;
  v6 = v5 - a3;
  v7 = (uint)&a2[a4];
  v8 = v4 + a3;
  if ( v5 - a3 < a4 )
    return -1;
  while ( 1 )
  {
    v9 = (char *)v8;
    v10 = a2;
    if ( (uint)a2 >= v7 )
      break;
    while ( *v10 == *v9 )
    {
      ++v10;
      ++v9;
      if ( (uint)v10 >= v7 )
        return v8 - v4;
    }
    --v6;
    ++v8;
    if ( v6 < a4 )
      return -1;
  }
  return v8 - v4;
}

//----- (0223BE90) --------------------------------------------------------
int __fastcall Function_223be90(uint *a1, uint *a2)
{
  int v2;
  int v3;
  uint v4;
  int v5;
  uint v6;

  if ( *a2 & 1 )
  {
    v2 = a2[2];
    v3 = a2[1];
  }
  else
  {
    v4 = (uint)*(uchar *)a2 << 24 >> 25;
  }
  if ( *a1 & 1 )
    v5 = a1[1];
  else
    v6 = (uint)*(uchar *)a1 << 24 >> 25;
  return Function_223bf38();
}

//----- (0223BEEC) --------------------------------------------------------
int __fastcall Function_223beec(uint *a1, char *a2)
{
  char *v2;
  uint *v3;
  uint v4;

  v2 = a2;
  v3 = a1;
  strlen(a2);
  if ( *v3 & 1 )
    v4 = v3[1];
  if ( !(*v3 & 1) )
    v4 = (uint)*(uchar *)v3 << 24 >> 25;
  return Function_223bf38(v3, 0, v4, v2);
}

//----- (0223BF38) --------------------------------------------------------
int Function_223bf38()
{
  return Function_223bf3c();
}

//----- (0223BF3C) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223C018) --------------------------------------------------------
int Function_223c018()
{
  return Function_223c01c();
}

//----- (0223C01C) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223C2F4) --------------------------------------------------------
int *__fastcall Function_223c2f4(int *result, char *a2, int a3, int a4)
{
  char *v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  char v9;
  char v10;
  int v11;

  v11 = a4;
  v4 = a2;
  v5 = a3;
  v6 = a3 - (uint)a2;
  v7 = result;
  if ( v6 )
  {
    v10 = 0;
    *(&v9 - 4) = 0;
    v8 = *((uint *)&v9 - 1);
    Function_223b714(result, v6);
    v9 = 0;
    Function_20d50d8((char *)(*v7 + v7[1]), v4, v5 - (uint)v4);
    result = (int *)(v7[1] + v5 - (uint)v4);
    v7[1] = (int)result;
  }
  return result;
}

//----- (0223C364) --------------------------------------------------------
int __fastcall Function_223c364(int a1, uint *a2, uint *a3, uchar *a4, uchar *a5)
{
  uint *v5;
  int result;

  *a3 = 0;
  v5 = *(uint **)(a1 + 4);
  *a4 = 1;
  *a5 = 1;
  result = a1 + 4;
  while ( v5 )
  {
    result = (int)v5;
    if ( *a2 >= v5[3] )
    {
      *a3 = v5;
      v5 = (uint *)v5[1];
      *a4 = 0;
      *a5 = 0;
    }
    else
    {
      v5 = (uint *)*v5;
      *a4 = 1;
    }
  }
  return result;
}

//----- (0223C3D0) --------------------------------------------------------
int __fastcall Function_223c3d0(uint *a1)
{
  int v1;
  uint v2;

  if ( *a1 & 1 )
    v1 = a1[1];
  else
    v2 = (uint)*(uchar *)a1 << 24 >> 25;
  return Function_223c018();
}

//----- (0223C41C) --------------------------------------------------------
uint *__fastcall Function_223c41c(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( *a1 )
  {
    a1[2] -= a1[2];
    if ( *a1 )
      ((void (__cdecl *)(uint))dword_21D77C4[0])(0);
  }
  return v1;
}

//----- (0223C46C) --------------------------------------------------------
int __fastcall Function_223c46c(int result, uint *a2)
{
  uint *v2;
  int v3;

  v2 = a2;
  v3 = result;
  if ( *a2 )
    result = ((int (*)(void))Function_223c46c)();
  if ( v2[1] )
    result = Function_223c46c(v3);
  if ( v2 )
    result = ((int (*)(void))dword_21D77C4[0])();
  return result;
}

//----- (0223C4B8) --------------------------------------------------------
int Function_223c4b8()
{
  return Function_223c4bc();
}

//----- (0223C4BC) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223C588) --------------------------------------------------------
int __fastcall Function_223c588(int *a1, int a2, uint *a3)
{
  int *v3;
  int v4;
  int v5;
  uint *v6;
  int v7;
  int v8;
  int v9;
  uint *v10;
  uint v11;
  uint *v12;
  uint *j;
  int v14;
  int v15;
  int v16;
  char v18;
  char v19;
  char i;
  char v21;
  char v22;
  int v23;
  int v24;
  int v25;
  uint *v26;
  int v27;

  v3 = a1;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v27 = 0;
  v26 = a1 + 2;
  v4 = a2;
  v5 = a1[1] + a2 - a1[2];
  v6 = a3;
  v7 = Function_223c4b8();
  v21 = 0;
  *(&v18 - 4) = 0;
  v8 = *((uint *)&v18 - 1);
  v22 = 0;
  Function_223c950(&v23, v7, v8);
  v9 = v23 + 12 * v3[1];
  v27 = v3[1];
  v10 = (uint *)(v9 + 12 * v24);
  for ( i = 0; v4; v10 += 3 )
  {
    if ( v10 )
      Function_223b938(v10, v6);
    --v4;
    ++v24;
  }
  v11 = *v3;
  v12 = (uint *)(*v3 + 12 * v3[1]);
  v19 = 0;
  for ( j = (uint *)(v23 + 12 * v27); (uint)v12 > v11; ++v24 )
  {
    v12 -= 3;
    j -= 3;
    if ( j )
      Function_223b938(j, v12);
    --v27;
  }
  v18 = 0;
  v14 = v3[2];
  v3[2] = v25;
  v25 = v14;
  v15 = *v3;
  *v3 = v23;
  v23 = v15;
  v16 = v3[1];
  v3[1] = v24;
  v24 = v16;
  return Function_223c870(&v23);
}

//----- (0223C6F8) --------------------------------------------------------
uint *__fastcall Function_223c6f8(uint *result, int a2)
{
  int v2;
  uint *v3;
  int v4;

  v2 = result[1];
  v3 = (uint *)(*result + 12 * v2);
  v4 = a2;
  for ( result[1] = v2 - a2; v4; --v4 )
  {
    v3 -= 3;
    result = Function_223badc(v3);
  }
  return result;
}

//----- (0223C734) --------------------------------------------------------
int __fastcall Function_223c734(int a1, uint a2, int a3, int a4)
{
  int v4;
  uint v5;
  int v6;
  int v7;
  int v8;
  int *v9;
  char *v10;
  int v11;
  uint v12;
  int v13;
  int v14;
  int v15;
  char v17;
  char v18;
  char v19;
  char v20;
  char v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;

  v27 = a4;
  v4 = a1;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v26 = 0;
  v25 = a1 + 8;
  v5 = a2;
  v6 = *(uint *)(a1 + 4) + a2 - *(uint *)(a1 + 8);
  v7 = Function_223b7a4();
  v20 = 0;
  *(&v17 - 4) = 0;
  v8 = *((uint *)&v17 - 1);
  v21 = 0;
  Function_223c8e0(&v22, v7, v8);
  v9 = (int *)(v22 + *(uint *)(v4 + 4) + v23);
  v26 = *(uint *)(v4 + 4);
  v19 = 0;
  Call_FillMemWithValue(v9, 0, v5);
  v23 += v5;
  v10 = *(char **)v4;
  v11 = *(uint *)(v4 + 4);
  v18 = 0;
  v12 = v11;
  v26 -= v11;
  memcpy((uchar *)(v22 + v26), v10, v11);
  Call_FillMemWithValue((int *)v10, 0, v12);
  v23 += v12;
  v17 = 0;
  *(uint *)(v4 + 4) = 0;
  v13 = *(uint *)(v4 + 8);
  *(uint *)(v4 + 8) = v24;
  v24 = v13;
  v14 = *(uint *)v4;
  *(uint *)v4 = v22;
  v22 = v14;
  v15 = *(uint *)(v4 + 4);
  *(uint *)(v4 + 4) = v23;
  v23 = v15;
  return Function_223c8c4(&v22);
}

//----- (0223C870) --------------------------------------------------------
uint *__fastcall Function_223c870(uint *a1)
{
  uint *v1;
  uint v2;
  uint *i;

  v1 = a1;
  v2 = *a1 + 12 * a1[4];
  for ( i = (uint *)(v2 + 12 * a1[1]); (uint)i > v2; Function_223badc(i) )
    i -= 3;
  v1[1] = 0;
  Function_223c988(v1);
  return v1;
}

//----- (0223C8C4) --------------------------------------------------------
int __fastcall Function_223c8c4(int a1)
{
  int v1;

  v1 = a1;
  *(uint *)(a1 + 4) = 0;
  Function_223c900();
  return v1;
}

//----- (0223C8E0) --------------------------------------------------------
int __fastcall Function_223c8e0(int *a1, int a2)
{
  int v2;
  int *v3;
  int result;

  v2 = a2;
  v3 = a1;
  result = Function_2246290(a2);
  *v3 = result;
  v3[2] = v2;
  return result;
}

//----- (0223C900) --------------------------------------------------------
uint *__fastcall Function_223c900(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( *a1 )
  {
    a1[1] -= a1[1];
    if ( *a1 )
      ((void (__cdecl *)(uint))dword_21D77C4[0])(0);
  }
  return v1;
}

//----- (0223C950) --------------------------------------------------------
int __fastcall Function_223c950(int *a1, uint a2)
{
  uint v2;
  int *v3;
  int result;

  v2 = a2;
  v3 = a1;
  if ( a2 > 0x15555555 )
    Function_20dfbdc();
  result = Function_2246290(12 * v2);
  *v3 = result;
  v3[2] = v2;
  return result;
}

//----- (0223C988) --------------------------------------------------------
uint *__fastcall Function_223c988(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  char v8;
  int v9;

  v9 = a4;
  v4 = a1;
  if ( *a1 )
  {
    v5 = a1[1];
    v8 = 0;
    *(&v8 - 4) = 0;
    v6 = *((uint *)&v8 - 1);
    Function_223c9e0(a1, v5);
    if ( *v4 )
      ((void (*)(void))dword_21D77C4[0])();
  }
  return v4;
}

//----- (0223C9E0) --------------------------------------------------------
uint *__fastcall Function_223c9e0(uint *result, int a2)
{
  int v2;
  uint *v3;
  int v4;

  v2 = result[1];
  v3 = (uint *)(*result + 12 * v2);
  v4 = a2;
  for ( result[1] = v2 - a2; v4; --v4 )
  {
    v3 -= 3;
    result = Function_223badc(v3);
  }
  return result;
}

//----- (0223CA1C) --------------------------------------------------------
int __fastcall Function_223ca1c(int result)
{
  *(uint *)result = 0;
  *(uint *)(result + 4) = 0;
  *(uint *)(result + 8) = 0;
  *(uint *)(result + 12) = 0;
  *(uint *)(result + 16) = 0;
  *(uint *)(result + 20) = 0;
  *(uint *)(result + 24) = 0;
  *(uint *)(result + 28) = 0;
  *(uint *)(result + 32) = 0;
  *(uchar *)(result + 40) = 0;
  *(uchar *)(result + 41) = 0;
  *(uint *)(result + 44) = 0;
  *(uint *)(result + 48) = 0;
  *(uint *)(result + 52) = 0;
  *(uint *)(result + 56) = 0;
  *(uint *)(result + 60) = 0;
  *(uint *)(result + 64) = 0;
  *(uint *)(result + 68) = 0;
  *(uint *)(result + 72) = 0;
  *(uint *)(result + 76) = 0;
  *(uint *)(result + 80) = 0;
  *(uint *)(result + 84) = 0;
  *(uint *)(result + 88) = 0;
  return result;
}

//----- (0223CA80) --------------------------------------------------------
int __fastcall Function_223ca80(int a1, int a2, uint *a3)
{
  int v3;
  int v4;
  uint v5;
  uint v6;
  int v7;
  int v9;
  uint v10;

  v3 = a1;
  v4 = *(uint *)(a1 + 48);
  v5 = *a3;
  v6 = 8 * (v4 - 1) + 24;
  v7 = a2;
  *a3 = v6;
  if ( v5 < v6 || !a2 )
    return 0;
  *(uint *)a2 = *(uint *)(v3 + 28);
  *(uint *)(a2 + 4) = *(uint *)(v3 + 32);
  *(uint *)(a2 + 8) = *(uint *)(v3 + 36);
  *(uchar *)(a2 + 12) = *(uchar *)(v3 + 40);
  *(uchar *)(a2 + 13) = *(uchar *)(v3 + 41);
  *(ushort *)(a2 + 14) = *(uint *)(v3 + 48);
  if ( *(ushort *)(a2 + 14) )
  {
    v9 = Function_223cb18(v3 + 44);
    MI_CpuCopy8(v9, v7 + 16, 8 * *(uint *)(v3 + 48), v10);
  }
  return 1;
}

//----- (0223CB18) --------------------------------------------------------
int __fastcall Function_223cb18(int *a1)
{
  int result;

  if ( a1[1] )
    result = *a1;
  else
    result = 0;
  return result;
}

//----- (0223CB2C) --------------------------------------------------------
int __fastcall Function_223cb2c(int *a1, int a2)
{
  int v2;
  int *v3;
  uint v4;
  int v5;
  int v6;
  uint v8;

  v2 = a2;
  v3 = a1;
  v8 = 0;
  Function_223ca80(a2, 0, &v8);
  v4 = v8;
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  Function_223b6c0((int)v3, v4, 0, v5);
  v6 = Function_2235b8c(v3);
  return Function_223ca80(v2, v6, &v8);
}

//----- (0223CB84) --------------------------------------------------------
int __fastcall Function_223cb84(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  char v15;
  char v16;
  char v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;

  v23 = a4;
  v4 = a1;
  v5 = a2;
  if ( !Function_223eb80(a1, a2, a3) )
    return 0;
  *(uchar *)(v4 + 40) = *(uchar *)(v5 + 12);
  *(uchar *)(v4 + 41) = *(uchar *)(v5 + 13);
  *(uint *)(v4 + 28) = *(uint *)v5;
  *(uint *)(v4 + 32) = *(uint *)(v5 + 4);
  v7 = *(ushort *)(v5 + 14);
  v16 = 0;
  *(&v15 - 4) = 0;
  v8 = *((uint *)&v15 - 1);
  Function_223e9ec(v4 + 44);
  v9 = *(uint *)(v4 + 44);
  v10 = v9 + 8 * *(uint *)(v4 + 48);
  *(&v15 - 4) = v17;
  v11 = *((uint *)&v15 - 1);
  v21 = v10;
  v22 = v9;
  Function_223d0f4();
  v18 = *(uint *)(v4 + 44) + 8 * *(uint *)(v4 + 48);
  v12 = v18;
  v13 = *(uint *)(v4 + 44);
  *(&v15 - 4) = v15;
  v14 = *((uint *)&v15 - 1);
  v19 = v12;
  v20 = v13;
  Function_223cc5c(v4 + 56);
  return 1;
}

//----- (0223CC5C) --------------------------------------------------------
int Function_223cc5c()
{
  return Function_223cc60();
}

//----- (0223CC60) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223CD68) --------------------------------------------------------
int __fastcall Function_223cd68(int result, uint *a2, uint *a3)
{
  uint *v3;
  uint *v4;
  int v5;
  uint *v6;
  uint v7;
  int v8;
  uint v9;
  uint v10;
  uint v11;
  int v12;
  int v13;
  char v14;
  char v15;

  v3 = a2;
  v4 = a3;
  v5 = *a3;
  v6 = (uint *)result;
  if ( *a2 != *a3 )
  {
    v7 = *a2;
    v8 = *(uint *)(result + 16);
    v9 = v5 - *v3 + ((uint)((v5 - *v3) >> 2) >> 29);
    v13 = *v3;
    v10 = (v5 - *v3) / 8;
    if ( v8 )
      v9 = v8 - 1;
    else
      v7 = 0;
    if ( v8 )
      v7 = v9 << 7;
    v12 = v5;
    v11 = v7 - (*v6 + v6[1]);
    if ( v10 > v11 )
      Function_223f1e4(v6, v10 - v11);
    Function_223f158(&v14, v6, v6[1]);
    result = Function_223ce20(&v15, *v3, *v4, &v14, v6 + 2, v6 + 1, v12, v13);
  }
  return result;
}

//----- (0223CE20) --------------------------------------------------------
int Function_223ce20()
{
  return Function_223ce24();
}

//----- (0223CE24) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223CF98) --------------------------------------------------------
int Function_223cf98()
{
  return Function_223cf9c();
}

//----- (0223CF9C) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223D0F4) --------------------------------------------------------
int Function_223d0f4()
{
  return Function_223d0f8();
}

//----- (0223D0F8) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223D19C) --------------------------------------------------------
int Function_223d19c()
{
  return Function_223d1a0();
}

//----- (0223D1A0) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223D420) --------------------------------------------------------
int Function_223d420()
{
  return Function_223d424();
}

//----- (0223D424) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223D8B0) --------------------------------------------------------
int Function_223d8b0()
{
  return Function_223d8b4();
}

//----- (0223D8B4) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223D9C4) --------------------------------------------------------
int Function_223d9c4()
{
  return Function_223d9c8();
}

//----- (0223D9C8) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223DA44) --------------------------------------------------------
int Function_223da44()
{
  return Function_223da48();
}

//----- (0223DA48) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223DAC4) --------------------------------------------------------
int Function_223dac4()
{
  return Function_223dac8();
}

//----- (0223DAC8) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223DCE8) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223DCF8) --------------------------------------------------------
int Function_223dcf8()
{
  return Function_223dcfc();
}

//----- (0223DCFC) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223DE50) --------------------------------------------------------
int Function_223de50()
{
  return Function_223de54();
}

//----- (0223DE54) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223DFD4) --------------------------------------------------------
int Function_223dfd4()
{
  return Function_223dfd8();
}

//----- (0223DFD8) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223E3D0) --------------------------------------------------------
int Function_223e3d0()
{
  return Function_223e3d4();
}

//----- (0223E3D4) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223E6EC) --------------------------------------------------------
int Function_223e6ec()
{
  return Function_223e6f0();
}

//----- (0223E6F0) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223E8C8) --------------------------------------------------------
int Function_223e8c8()
{
  return Function_223e8cc();
}

//----- (0223E8CC) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223E988) --------------------------------------------------------
uint *__fastcall Function_223e988(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  uint *result;
  int v7;

  v4 = a1;
  v5 = 0;
  *a1 = 0;
  result = 0;
  v7 = a2;
  v4[1] = 0;
  if ( a2 > 0 )
  {
    while ( 1 )
    {
      result = Function_20e3fd4(8 * v7, (int)&dword_21D0D44[7], v5, a4);
      *v4 = result;
      if ( result )
        break;
      result = (uint *)(v7 + ((uint)v7 >> 31));
      v7 /= 2;
      if ( v7 <= 0 )
        return result;
    }
    v4[1] = v7;
  }
  return result;
}

//----- (0223E9EC) --------------------------------------------------------
uint __fastcall Function_223e9ec(uint *a1, uint *a2, uint *a3)
{
  uint *v3;
  uint *v4;
  int v5;
  uint *v6;
  int v7;
  uint *v8;
  uint *v9;
  int v10;
  uint v11;
  uint *i;
  int v13;
  uint result;
  uint *j;
  int v16;
  uint v17;

  v3 = a2;
  v4 = a3;
  v5 = (char *)a3 - (char *)a2;
  v6 = a1;
  v17 = v5 / 8;
  if ( a1[2] >= (uint)(v5 / 8) )
  {
    if ( a1[1] >= (uint)(v5 / 8) )
      v8 = &v17;
    else
      v8 = a1 + 1;
    v9 = (uint *)*a1;
    for ( result = (uint)&v3[2 * *v8]; (uint)v3 < result; v9 += 2 )
    {
      *v9 = *v3;
      v10 = v3[1];
      v3 += 2;
      v9[1] = v10;
    }
    v11 = v6[1];
    if ( v17 >= v11 )
    {
      if ( v11 < v17 )
      {
        for ( i = (uint *)(*v6 + 8 * v6[1]); (uint *)result != v4; i += 2 )
        {
          if ( i )
          {
            v13 = *(uint *)(result + 4);
            *i = *(uint *)result;
            i[1] = v13;
          }
          result += 8;
          ++v6[1];
        }
      }
    }
    else
    {
      result = v6[1] - (v11 - v17);
      v6[1] = result;
    }
  }
  else
  {
    v7 = Function_223fdd8();
    Function_223fd68(v6, v17, v7);
    result = v6[1];
    for ( j = (uint *)(*v6 + 8 * result); v3 != v4; j += 2 )
    {
      if ( j )
      {
        v16 = v3[1];
        *j = *v3;
        j[1] = v16;
      }
      v3 += 2;
      result = v6[1] + 1;
      v6[1] = result;
    }
  }
  return result;
}

//----- (0223EB80) --------------------------------------------------------
BOOL __fastcall Function_223eb80(int a1, int a2, uint a3)
{
  BOOL result;

  if ( a3 >= 0x10 )
    result = a3 >= 8 * ((uint)*(ushort *)(a2 + 14) - 1) + 24;
  else
    result = 0;
  return result;
}

//----- (0223EBAC) --------------------------------------------------------
int __fastcall Function_223ebac(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  char v8;
  int v9;

  v9 = a4;
  v4 = a1;
  v5 = a2;
  v6 = a3;
  Function_223ed8c(a1, a2, a3);
  v8 = 0;
  *(&v8 - 4) = 0;
  Function_223ebf8(v4 + 80, v5, v5 + (v6 & 0xFFFFFFF8), *((uint *)&v8 - 1), *(uint *)&v8, v9);
  return 1;
}

//----- (0223EBF8) --------------------------------------------------------
uint __fastcall Function_223ebf8(uint *a1, uint *a2, uint *a3)
{
  uint *v3;
  uint *v4;
  int v5;
  uint *v6;
  int v7;
  uint *v8;
  uint *v9;
  int v10;
  uint v11;
  uint *i;
  int v13;
  uint result;
  uint *j;
  int v16;
  uint v17;

  v3 = a2;
  v4 = a3;
  v5 = (char *)a3 - (char *)a2;
  v6 = a1;
  v17 = v5 / 8;
  if ( a1[2] >= (uint)(v5 / 8) )
  {
    if ( a1[1] >= (uint)(v5 / 8) )
      v8 = &v17;
    else
      v8 = a1 + 1;
    v9 = (uint *)*a1;
    for ( result = (uint)&v3[2 * *v8]; (uint)v3 < result; v9 += 2 )
    {
      *v9 = *v3;
      v10 = v3[1];
      v3 += 2;
      v9[1] = v10;
    }
    v11 = v6[1];
    if ( v17 >= v11 )
    {
      if ( v11 < v17 )
      {
        for ( i = (uint *)(*v6 + 8 * v6[1]); (uint *)result != v4; i += 2 )
        {
          if ( i )
          {
            v13 = *(uint *)(result + 4);
            *i = *(uint *)result;
            i[1] = v13;
          }
          result += 8;
          ++v6[1];
        }
      }
    }
    else
    {
      result = v6[1] - (v11 - v17);
      v6[1] = result;
    }
  }
  else
  {
    v7 = Function_223fc9c();
    Function_223fc2c(v6, v17, v7);
    result = v6[1];
    for ( j = (uint *)(*v6 + 8 * result); v3 != v4; j += 2 )
    {
      if ( j )
      {
        v16 = v3[1];
        *j = *v3;
        j[1] = v16;
      }
      v3 += 2;
      result = v6[1] + 1;
      v6[1] = result;
    }
  }
  return result;
}

//----- (0223ED8C) --------------------------------------------------------
int __fastcall Function_223ed8c(int a1, int a2, int a3)
{
  if ( a3 & 7 )
    return 0;
  if ( !a3 )
    *(uint *)(a1 + 84) -= *(uint *)(a1 + 84);
  return 1;
}

//----- (0223EDE4) --------------------------------------------------------
int __fastcall Function_223ede4(int a1, uint a2, int a3, uint a4)
{
  if ( !*(uint *)(a1 + 820) )
    return 0;
  MI_CpuCopy8(a1 + 92, a2, 0x2D8u, a4);
  return 1;
}

//----- (0223EE0C) --------------------------------------------------------
int __fastcall Function_223ee0c(int a1, int a2, int a3, uint a4)
{
  int v4;
  int result;

  v4 = a1;
  MI_CpuCopy8(a2, a1 + 92, 0x2D8u, a4);
  result = 1;
  *(uint *)(v4 + 820) = 1;
  return result;
}

//----- (0223EE30) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x223F000 for case 0"

//----- (0223EE4C) --------------------------------------------------------
void Function_223ee4c()
{
  JUMPOUT(&loc_223F000);
}

//----- (0223EE50) --------------------------------------------------------
void Function_223ee50()
{
  JUMPOUT(&loc_223F000);
}

//----- (0223EE54) --------------------------------------------------------
void Function_223ee54()
{
  JUMPOUT(&loc_223F000);
}

//----- (0223EE58) --------------------------------------------------------
void Function_223ee58()
{
  JUMPOUT(&loc_223F000);
}

//----- (0223EE5C) --------------------------------------------------------
void Function_223ee5c()
{
  JUMPOUT(&loc_223EE64);
}

//----- (0223EE60) --------------------------------------------------------
void Function_223ee60()
{
  int v0;
  uint v1;
  int v2;
  uint *v3;
  long long v4;
  long long v5;
  int *v6;
  int v7;
  uint v8;
  int v9;
  int v10;
  int v11;
  char v12;
  char v13;
  char v14;
  int v15;

  if ( !*(uint *)(v0 + 60) )
    JUMPOUT(__CS__, v15);
  v1 = *(uint *)(v0 + 56);
  u32_div_f(*(uint *)(v0 + 68) + (v1 >> 7), *(uint *)(v0 + 76));
  v3 = (uint *)(*(uint *)(*(uint *)(v0 + 64) + 4 * v2) + (8 * v1 & 0x3FF));
  ((void (__fastcall *)(char *, char *))dword_21D806C[0])(&v13, &v14);
  LODWORD(v4) = RTC_ConvertDateTimeToSecond((int *)&v13, &v14);
  v5 = v4;
  if ( (int)((ull)(v4 - *(ull *)(v0 + 16)) >> 32) < (*v3 >> 31) + !__CFSHR__(*v3, 31) )
    JUMPOUT(__CS__, v15);
  v6 = &v11 - 1;
  while ( 1 )
  {
    v7 = Function_2234fc4();
    (*(void (__fastcall **)(uint))(v7 + 48))(v3[1]);
    v12 = 0;
    *(uchar *)v6 = 0;
    Function_223f724(v0 + 56, 1, *v6);
    if ( !*(uint *)(v0 + 60) )
      break;
    v8 = *(uint *)(v0 + 56);
    u32_div_f(*(uint *)(v0 + 68) + (v8 >> 7), *(uint *)(v0 + 76));
    v10 = *(uint *)(*(uint *)(v0 + 64) + 4 * v9);
    *v3 = *(uint *)(v10 + (8 * v8 & 0x3FF));
    v3[1] = *(uint *)(v10 + (8 * v8 & 0x3FF) + 4);
    if ( (int)((ull)(v5 - *(ull *)(v0 + 16)) >> 32) < (*v3 >> 31) + !__CFSHR__(*v3, 31) )
      JUMPOUT(__CS__, v15);
  }
  JUMPOUT(__CS__, v15);
}

//----- (0223F00C) --------------------------------------------------------
BOOL __fastcall Function_223f00c(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  BOOL result;
  int v6;
  ll v7;
  long long v8;
  char v9;
  char v10;
  int v11;

  v11 = a4;
  v4 = a1;
  if ( *a1 == 5 || *(uint *)Function_2234fc4() != 8 )
    return 0;
  result = 0;
  if ( v4[4] == __PAIR__(v4[5], 0) )
  {
    if ( v4[6] )
    {
      result = 1;
    }
    else
    {
      v6 = Function_2234fc4();
      if ( Function_2241ed0(v6 + 232) )
      {
        result = 1;
      }
      else
      {
        ((void (__fastcall *)(char *, char *))dword_21D806C[0])(&v9, &v10);
        LODWORD(v7) = RTC_ConvertDateTimeToSecond((int *)&v9, &v10);
        LODWORD(v8) = v4[7];
        HIDWORD(v8) = v4[3];
        result = v8 + v4[2] < v7;
      }
    }
  }
  return result;
}

//----- (0223F0D0) --------------------------------------------------------
int __fastcall Function_223f0d0(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int result;
  char v8;
  char v9;
  int v10;

  v10 = a4;
  v4 = a1;
  if ( *a1 == 5 || *(uint *)Function_2234fc4() != 8 )
  {
    v4[6] = 1;
    result = 0;
  }
  else
  {
    ((void (__fastcall *)(char *, char *))dword_21D806C[0])(&v8, &v9);
    v4[4] = RTC_ConvertDateTimeToSecond((int *)&v8, &v9);
    v4[5] = v5;
    *v4 = 5;
    v4[6] = 0;
    v6 = Function_2234fc4();
    (*(void (__fastcall **)(uint))(v6 + 48))(0);
    result = 1;
  }
  return result;
}

//----- (0223F158) --------------------------------------------------------
int __fastcall Function_223f158(uint *a1, uint *a2, int a3)
{
  uint *v3;
  uint *v4;
  uint v5;
  int v6;
  uint *v7;
  int v8;
  bool v9;
  int v10;
  int v11;
  int v12;
  int result;
  uint *v14;
  int v15;
  uint *v16;
  int v17;

  v3 = a2;
  v4 = a1;
  v5 = a3 + *a2;
  v6 = a2[2];
  v7 = (uint *)(v6 + 4 * a2[3]);
  v17 = v6 + 4 * a2[5];
  v14 = v7;
  v15 = v6;
  v16 = v7;
  Function_2240c80(&v14, v5 >> 7);
  v8 = v3[4];
  v9 = v8 == 0;
  if ( !v8 )
    v3 = 0;
  v10 = v15;
  v11 = (int)v16;
  v12 = v17;
  if ( !v9 )
    v3 = (uint *)*v14;
  *v4 = v14;
  v4[1] = v10;
  v4[2] = v11;
  v4[3] = v12;
  result = (int)v3 + (8 * v5 & 0x3FF);
  v4[4] = result;
  return result;
}

//----- (0223F1E4) --------------------------------------------------------
uint __fastcall Function_223f1e4(uint *a1, uint a2, int a3, int a4)
{
  uint *v4;
  uint result;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint v11;
  uint v12;
  uint v13;
  uint v14;
  int v15;
  int v16;
  char *v17;
  uint v18;
  int v19;
  int *v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  uint v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  char v35;
  int *v36;
  char v37;
  char v38;
  char v39;
  char v40;
  char v41;
  char v42;
  char v43;
  int v44;
  int v45;
  uint v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  uint v53;
  int v54;
  int v55;
  int v56;
  uint v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  uint v83;
  int v84;

  v84 = a4;
  v4 = a1;
  result = (a2 & 0x7F) != 0;
  v6 = result + (a2 >> 7);
  while ( v6 )
  {
    result = *v4;
    if ( *v4 < 0x80 )
      break;
    v7 = *(uint *)(v4[2] + 4 * v4[3]);
    v43 = 0;
    v8 = v4[3] + 1;
    v4[3] = v8;
    if ( v8 == v4[5] )
      v4[3] = 0;
    v9 = v4[4] - 1;
    v4[4] = v9;
    u32_div_f(v4[3] + v9 - 1, v4[5]);
    *(uint *)(v4[2] + 4 * v10) = v7;
    v49 = 0;
    Function_223f944(v4 + 2, &v49);
    --v6;
    result = *v4 - 128;
    *v4 = result;
  }
  if ( v6 )
  {
    if ( !(dword_225B6C0[2] & 1) )
    {
      dword_22590A8 = -256;
      dword_225B6C0[2] |= 1u;
    }
    if ( (uint)(v6 << 7) > 0 )
      goto LABEL_41;
    if ( !(dword_225B6C0[2] & 1) )
    {
      dword_22590A8 = -256;
      dword_225B6C0[2] |= 1u;
    }
    v11 = v4[4];
    v12 = v11 ? (v4[4] - 1) << 7 : 0;
    if ( v12 > -128 * v6 )
LABEL_41:
      Function_223f7d8("deque:: length error");
    v13 = v4[5];
    if ( v13 )
      v14 = v13 - 1;
    else
      v14 = 0;
    result = v6 + v4[4];
    if ( result > v14 )
    {
      v78 = 0;
      v79 = 0;
      v66 = 0;
      v67 = 0;
      v68 = 0;
      v69 = 0;
      v80 = 0;
      v81 = 0;
      v82 = 0;
      v83 = 0;
      v70 = 0;
      v71 = 0;
      v75 = 0;
      v72 = 0;
      v73 = 0;
      v36 = &v70;
      v37 = v42;
      v17 = &v35 - 12;
      v74 = 0;
      v76 = 0;
      v77 = 0;
      *(uint *)v17 = 0;
      *((uint *)v17 + 1) = 0;
      *((uint *)v17 + 2) = 0;
      *((uint *)v17 + 3) = 0;
      Function_2240d98(&v80, *((uint *)&v35 - 3), *((uint *)&v35 - 2), *((uint *)&v35 - 1));
      Function_223c41c(&v66);
      v46 = v6 + v4[4] + 1;
      v18 = v4[5];
      if ( v18 )
        v19 = v18 - 1;
      else
        v19 = 0;
      if ( v46 <= 2 * v19 )
        v20 = &v47;
      else
        v20 = (int *)&v46;
      v47 = 2 * v19;
      Function_223f7e8(&v80, *v20);
      v45 = 0;
      Function_223f944(&v80, &v45);
      for ( ; v6; --v6 )
      {
        v21 = Function_2246290(1024);
        u32_div_f(v81 + v82 - 1, v83);
        *(uint *)(v80 + 4 * v22) = v21;
        v44 = 0;
        Function_223f944(&v80, &v44);
      }
      if ( v4[4] )
      {
        v23 = v4[5];
        if ( v23 )
          u32_div_f(v4[3] + v4[4], v23);
        else
          v24 = 0;
        v25 = v4[2];
        v26 = v25 + 4 * v4[3];
        v27 = v25 + 4 * v4[5];
        v62 = v25 + 4 * v24;
        v63 = v25;
        v64 = v26;
        v65 = v27;
        Function_2240c80(&v62, -1);
        v28 = v4[2];
        v29 = v4[5];
        v30 = v28 + 4 * v4[3];
        v53 = v80 + 4 * v83;
        v58 = v62;
        v59 = v63;
        v51 = v80;
        v60 = v64;
        v61 = v65;
        v55 = v28;
        v57 = v28 + 4 * v29;
        v40 = 0;
        v41 = 0;
        v39 = 0;
        v54 = v30;
        v56 = v30;
        v50 = v80 + 4 * v81;
        v52 = v80 + 4 * v81;
        v35 = 0;
        Function_223fea4(&v80, &v50, &v54, &v58, *(uint *)&v35);
      }
      v31 = v4[2];
      v4[2] = v80;
      v80 = v31;
      v32 = v4[3];
      v4[3] = v81;
      v81 = v32;
      v33 = v4[4];
      v4[4] = v82;
      v82 = v33;
      v34 = v4[5];
      v4[5] = v83;
      v83 = v34;
      v38 = 0;
      v82 = 0;
      result = Function_224091c(&v78);
    }
    else
    {
      for ( ; v6; --v6 )
      {
        v15 = Function_2246290(1024);
        u32_div_f(v4[3] + v4[4] - 1, v4[5]);
        *(uint *)(v4[2] + 4 * v16) = v15;
        v48 = 0;
        result = Function_223f944(v4 + 2, &v48);
      }
    }
  }
  return result;
}

//----- (0223F66C) --------------------------------------------------------
int __fastcall Function_223f66c(int result, int a2)
{
  uint *v2;
  int v3;
  int v4;
  uint i;
  int v6;
  int v7;
  int v8;
  int v9;

  v2 = (uint *)result;
  if ( a2 )
  {
    *(uint *)(result + 4) -= a2;
    v3 = *(uint *)(result + 16);
    v4 = v3 ? (v3 - 1) << 7 : 0;
    result = *v2 + v2[1];
    for ( i = v4 - result; i >= 0x100; *(uint *)(v7 + 4 * v9) = 0 )
    {
      v6 = v2[4] - 1;
      v2[4] = v6;
      result = u32_div_f(v2[3] + v6 - 1, v2[5]);
      v7 = v2[2];
      v9 = v8;
      if ( *(uint *)(v7 + 4 * v8) )
        result = ((int (__fastcall *)(uint))dword_21D77C4[0])(0);
      i -= 128;
    }
  }
  return result;
}

//----- (0223F724) --------------------------------------------------------
uint *__fastcall Function_223f724(uint *result, int a2)
{
  uint *v2;
  uint v3;
  int v4;
  uint v5;

  v2 = result;
  if ( a2 )
  {
    result[1] -= a2;
    v3 = *result + a2;
    *v2 = v3;
    if ( v3 >= 0x100 )
    {
      do
      {
        if ( *(uint *)(v2[2] + 4 * v2[3]) )
          ((void (__fastcall *)(uint))dword_21D77C4[0])(0);
        v4 = v2[3] + 1;
        v2[3] = v4;
        if ( v4 == v2[5] )
          v2[3] = 0;
        --v2[4];
        v5 = *v2 - 128;
        *v2 = v5;
      }
      while ( v5 >= 0x100 );
    }
    result = (uint *)v2[1];
    if ( !result )
    {
      result = (uint *)64;
      *v2 = 64;
    }
  }
  return result;
}

//----- (0223F7D8) --------------------------------------------------------
int __fastcall Function_223f7d8(char *a1, int a2, int a3, int a4)
{
  Function_20d7350(a1, a2, a3, a4);
  return Function_20d3da0();
}

//----- (0223F7E8) --------------------------------------------------------
uint __fastcall Function_223f7e8(int *a1, uint a2, int a3, int a4)
{
  int *v4;
  int v5;
  uint result;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
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
  int v26;
  int v27;
  int v28;
  uint *v29;
  int v30;

  v30 = a4;
  v4 = a1;
  v5 = a1[3];
  if ( v5 )
    result = v5 - 1;
  else
    result = 0;
  if ( a2 > result )
  {
    v29 = v4 + 3;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v16 = 0;
    *(&v14 - 4) = 0;
    v7 = *((uint *)&v14 - 1);
    Function_2240a0c(&v25);
    v8 = v4[3];
    if ( v8 )
      u32_div_f(v4[1] + v4[2], v8);
    else
      v9 = 0;
    v17 = *v4 + 4 * v9;
    v18 = *v4;
    v19 = v18 + 4 * v4[1];
    v20 = v18 + 4 * v4[3];
    v21 = *v4 + 4 * v4[1];
    v22 = *v4;
    v23 = v22 + 4 * v4[1];
    v24 = v22 + 4 * v4[3];
    v15 = 0;
    *(&v14 - 4) = 0;
    Function_2240b80(&v25, &v21, &v17, *((uint *)&v14 - 1));
    v14 = 0;
    v4[2] = 0;
    v10 = *v4;
    *v4 = v25;
    v25 = v10;
    v11 = v4[1];
    v4[1] = v26;
    v26 = v11;
    v12 = v4[2];
    v4[2] = v27;
    v27 = v12;
    v13 = v4[3];
    v4[3] = v28;
    v28 = v13;
    result = Function_22409bc(&v25);
  }
  return result;
}

//----- (0223F944) --------------------------------------------------------
int __fastcall Function_223f944(int *a1, uint *a2, int a3, int a4)
{
  int *v4;
  int v5;
  uint *v6;
  uint v7;
  int v8;
  uint *v9;
  int result;
  int v11;
  int v12;
  uint *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  char v20;
  char v21;
  char v22;
  char v23;
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
  uint *v36;
  int v37;

  v37 = a4;
  v4 = a1;
  v5 = a1[2];
  v6 = a2;
  v7 = a1[3];
  if ( v5 + 1 >= v7 )
  {
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v36 = a1 + 3;
    Function_223fb04();
    v22 = 0;
    *(&v20 - 4) = 0;
    v11 = *((uint *)&v20 - 1);
    v23 = 0;
    Function_2240a0c(&v32);
    v12 = v4[2];
    v33 = v12;
    v13 = (uint *)(v32 + 4 * v12);
    if ( v13 )
      *v13 = *v6;
    ++v34;
    v14 = v4[3];
    if ( v14 )
      u32_div_f(v4[1] + v4[2], v14);
    else
      v15 = 0;
    v24 = *v4 + 4 * v15;
    v25 = *v4;
    v26 = v25 + 4 * v4[1];
    v27 = v25 + 4 * v4[3];
    v28 = *v4 + 4 * v4[1];
    v29 = *v4;
    v30 = v29 + 4 * v4[1];
    v31 = v29 + 4 * v4[3];
    v21 = 0;
    *(&v20 - 4) = 0;
    Function_2240a74(&v32, &v28, &v24, *((uint *)&v20 - 1));
    v20 = 0;
    v4[2] = 0;
    v16 = *v4;
    *v4 = v32;
    v32 = v16;
    v17 = v4[1];
    v4[1] = v33;
    v33 = v17;
    v18 = v4[2];
    v4[2] = v34;
    v34 = v18;
    v19 = v4[3];
    v4[3] = v35;
    v35 = v19;
    result = Function_22409bc(&v32);
  }
  else
  {
    u32_div_f(a1[1] + v5, v7);
    v9 = (uint *)(*v4 + 4 * v8);
    if ( v9 )
      *v9 = *v6;
    result = v4[2] + 1;
    v4[2] = result;
  }
  return result;
}

//----- (0223FB04) --------------------------------------------------------
int Function_223fb04()
{
  return Function_223fb08();
}

//----- (0223FB08) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223FC14) --------------------------------------------------------
int __fastcall Function_223fc14(int a1, int a2, int a3, int a4)
{
  Function_20d7350("cdeque length error", a2, a3, a4);
  return Function_20d3da0();
}

//----- (0223FC2C) --------------------------------------------------------
int __fastcall Function_223fc2c(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v9;

  v9 = a4;
  v4 = a1;
  v5 = a1[1];
  BYTE2(v9) = 0;
  v6 = a3;
  v4[1] -= v5;
  if ( *a1 )
  {
    if ( *a1 )
      ((void (__cdecl *)(uint))dword_21D77C4[0])(0);
    *v4 = 0;
    v4[2] = 0;
  }
  LOBYTE(v9) = 0;
  *((uchar *)&v9 - 4) = 0;
  v7 = *(&v9 - 1);
  BYTE1(v9) = 0;
  return Function_2240d38(v4, v6, v7);
}

//----- (0223FC9C) --------------------------------------------------------
int Function_223fc9c()
{
  return Function_223fca0();
}

//----- (0223FCA0) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223FD68) --------------------------------------------------------
int __fastcall Function_223fd68(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v9;

  v9 = a4;
  v4 = a1;
  v5 = a1[1];
  BYTE2(v9) = 0;
  v6 = a3;
  v4[1] -= v5;
  if ( *a1 )
  {
    if ( *a1 )
      ((void (__cdecl *)(uint))dword_21D77C4[0])(0);
    *v4 = 0;
    v4[2] = 0;
  }
  LOBYTE(v9) = 0;
  *((uchar *)&v9 - 4) = 0;
  v7 = *(&v9 - 1);
  BYTE1(v9) = 0;
  return Function_2240d68(v4, v6, v7);
}

//----- (0223FDD8) --------------------------------------------------------
int Function_223fdd8()
{
  return Function_223fddc();
}

//----- (0223FDDC) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223FEA4) --------------------------------------------------------
int __fastcall Function_223fea4(int *a1, uint *a2, int a3, int a4)
{
  int v4;
  int v5;
  char v6;
  char v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int result;
  uint v17;
  uint v18;
  uint v19;
  int v20;
  uint v21;
  bool v22;
  bool v23;
  uint v24;
  uint v25;
  int v26;
  int v27;
  int v28;
  int *v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int *v36;
  int *v37;
  int v38;
  int *v39;
  int *v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  uint *v49;
  int v50;
  uint v51;
  char v52;
  char v53;
  char v54;
  char v55;
  char v56;
  char v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  uint v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  char v75;
  int v76;
  int v77;
  int v78;
  int v79;
  char v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  char v97;
  int v98;
  int v99;
  int v100;
  int v101;
  char v102;
  char v103;
  int v104;
  int v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  int v112;
  int v113;
  int v114;
  int v115;
  int v116;
  int v117;
  int v118;
  int v119;
  int v120;
  int v121;
  int v122;
  int v123;
  int v124;
  int v125;
  int v126;
  int v127;
  uint v128;
  int v129;
  int v130;
  int v131;
  int v132;
  int v133;
  int v134;
  int v135;
  char v136;
  char v137;
  int v138;
  uint v139;
  int v140;
  int v141;
  uint *v142;
  int v143;
  int v144;
  int v145;
  int v146;

  v4 = a3;
  v5 = a4;
  v6 = *(uchar *)(a4 + 16);
  v7 = *(uchar *)(a3 + 16);
  v49 = a2;
  v8 = a1;
  v9 = *(uint *)(a4 + 4);
  v10 = *(uint *)(a4 + 8);
  v11 = *(uint *)(a4 + 12);
  v12 = *(uint *)v4;
  v13 = *(uint *)(v4 + 4);
  v14 = *(uint *)(v4 + 8);
  v15 = *(uint *)(v4 + 12);
  v76 = *(uint *)v5;
  v136 = v6;
  v137 = v7;
  v77 = v9;
  v78 = v10;
  v79 = v11;
  v80 = v6;
  v71 = v12;
  v72 = v13;
  v73 = v14;
  v74 = v15;
  v75 = v7;
  result = Function_2240cc4(&v76, &v71);
  v17 = result;
  if ( result )
  {
    v18 = *v8 + 4 * v8[1];
    v19 = (int)(*v49 - v18) / 4;
    if ( *v49 < v18 )
      v19 += v8[3];
    v20 = v8[3];
    if ( v20 )
      v21 = v20 - 1;
    else
      v21 = 0;
    v22 = v17 >= v21;
    v23 = v17 == v21;
    if ( v17 <= v21 )
    {
      v24 = v8[2];
      v25 = v21 - v17;
      v22 = v24 >= v25;
      v23 = v24 == v25;
    }
    if ( !v23 && v22 )
    {
      v138 = 0;
      v139 = 0;
      v140 = 0;
      v141 = 0;
      v142 = v8 + 3;
      Function_223fb04();
      v56 = 0;
      *((uchar *)&v49 - 4) = 0;
      v38 = (int)*(&v49 - 1);
      v57 = 0;
      Function_2240a0c(&v138);
      v139 = v19;
      v39 = (int *)(v138 + 4 * v19);
      if ( v17 )
      {
        do
        {
          v40 = *(int **)v4;
          v55 = 0;
          v41 = *v40;
          --v17;
          if ( v39 )
            *v39 = v41;
          ++v39;
          ++v140;
          v42 = *(uint *)v4 + 4;
          *(uint *)v4 = v42;
          if ( v42 == *(uint *)(v4 + 12) )
            *(uint *)v4 = *(uint *)(v4 + 4);
        }
        while ( v17 );
        v58 = v41;
      }
      v43 = v8[3];
      if ( v43 )
        u32_div_f(v8[1] + v8[2], v43);
      else
        v44 = 0;
      v85 = *v8 + 4 * v44;
      v86 = *v8;
      v87 = v86 + 4 * v8[1];
      v88 = v86 + 4 * v8[3];
      v54 = 0;
      *((uchar *)&v49 - 4) = 0;
      Function_2240b80(&v138, v49, &v85, *(&v49 - 1));
      v81 = *v8 + 4 * v8[1];
      v82 = *v8;
      v83 = v82 + 4 * v8[1];
      v84 = v82 + 4 * v8[3];
      v53 = 0;
      *((uchar *)&v49 - 4) = 0;
      Function_2240a74(&v138, &v81, v49, *(&v49 - 1));
      v52 = 0;
      v8[2] = 0;
      v45 = *v8;
      *v8 = v138;
      v138 = v45;
      v46 = v8[1];
      v8[1] = v139;
      v139 = v46;
      v47 = v8[2];
      v8[2] = v140;
      v140 = v47;
      v48 = v8[3];
      v8[3] = v141;
      v141 = v48;
      result = Function_22409bc(&v138);
    }
    else
    {
      v143 = *v8 + 4 * v8[1];
      v26 = *v8;
      v144 = v26;
      v50 = v26 + 4 * v8[1];
      v145 = v50;
      v27 = v26 + 4 * v8[3];
      v146 = v26 + 4 * v8[3];
      v28 = v8[2];
      v51 = v28 - v19;
      if ( v19 >= v28 - v19 )
      {
        v8[2] = v28 + v17;
        v30 = v8[3];
        if ( v30 )
          u32_div_f(v8[1] + v8[2], v30);
        else
          v31 = 0;
        v32 = *v8;
        v33 = *v8 + 4 * v8[1];
        v34 = *v8 + 4 * v8[3];
        v35 = *v8 + 4 * v31;
        v143 = v35;
        v144 = v32;
        v145 = v33;
        v146 = v34;
        if ( v51 )
        {
          v104 = v35;
          v59 = v35;
          v105 = v32;
          v106 = v33;
          v107 = v34;
          v60 = v32;
          v61 = v33;
          v62 = v34;
          v36 = (int *)Function_2240c80(&v59, -v17);
          v108 = *v36;
          v109 = v36[1];
          v110 = v36[2];
          v111 = v36[3];
          v63 = v143;
          v64 = v144;
          v65 = v145;
          v66 = v146;
          v37 = (int *)Function_2240c80(&v63, -(v17 + v51));
          v112 = *v37;
          v113 = v37[1];
          v114 = v37[2];
          v115 = v37[3];
          Function_2240614(&v116, &v112, &v108, &v104);
          v143 = v116;
          v144 = v117;
          v145 = v118;
          v146 = v119;
        }
        Function_2240c80(&v143, -v17);
      }
      else
      {
        Function_2240c80(&v143, -v17);
        v8[1] = (v143 - *v8) / 4;
        v8[2] += v17;
        if ( v19 )
        {
          v123 = v146;
          v120 = v143;
          v121 = v144;
          v122 = v145;
          v67 = v18;
          v68 = v26;
          v69 = v50;
          v70 = v27;
          v29 = (int *)Function_2240c80(&v67, v19);
          v124 = *v29;
          v125 = v29[1];
          v126 = v29[2];
          v127 = v29[3];
          v128 = v18;
          v129 = v26;
          v130 = v50;
          v131 = v27;
          Function_22407a8(&v132, &v128, &v124, &v120);
          v143 = v132;
          v144 = v133;
          v145 = v134;
          v146 = v135;
        }
      }
      v92 = v146;
      v89 = v143;
      v90 = v144;
      v91 = v145;
      v93 = *(uint *)v5;
      v94 = *(uint *)(v5 + 4);
      v95 = *(uint *)(v5 + 8);
      v96 = *(uint *)(v5 + 12);
      v97 = *(uchar *)(v5 + 16);
      v98 = *(uint *)v4;
      v99 = *(uint *)(v4 + 4);
      v100 = *(uint *)(v4 + 8);
      v101 = *(uint *)(v4 + 12);
      v102 = *(uchar *)(v4 + 16);
      result = Function_2240444(&v103, &v98, &v93, &v89);
    }
  }
  return result;
}

//----- (02240444) --------------------------------------------------------
int __fastcall Function_2240444(int *a1, uint *a2, uint *a3, int a4)
{
  uint *v4;
  int *v5;
  int *v6;
  int *v7;
  bool v8;
  bool v9;
  uchar v10;
  int v11;
  uint *v12;
  uint *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  bool v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int result;
  char v24;
  int v25;
  int v26;
  uint *v27;
  int v28;
  int v29;
  int v30;
  char v31;
  uint *v32;
  int v33;
  int v34;
  int v35;
  char v36;
  uint *v37;
  int v38;
  int v39;
  uint *v40;
  char v41;
  uint *v42;
  int v43;
  int v44;
  int v45;
  char v46;
  int v47;

  v47 = a4;
  v4 = a2;
  v5 = a1;
  v6 = (int *)a4;
  if ( *a2 != *a3 )
  {
    v26 = Function_2240cc4(a3, a2);
    while ( 1 )
    {
      v7 = (int *)(v6[3] - *v6 + ((uint)((v6[3] - *v6) >> 1) >> 30));
      v10 = __OFSUB__(v26, (v6[3] - *v6) / 4);
      v8 = v26 == (v6[3] - *v6) / 4;
      v9 = v26 - (v6[3] - *v6) / 4 < 0;
      if ( v26 <= (v6[3] - *v6) / 4 )
        v7 = &v26;
      v25 = (v6[3] - *v6) / 4;
      if ( !((uchar)(v9 ^ v10) | v8) )
        v7 = &v25;
      v11 = *v7;
      v27 = (uint *)*v4;
      v28 = v4[1];
      v29 = v4[2];
      v30 = v4[3];
      v31 = *((uchar *)v4 + 16);
      Function_2240c80(&v27, v11);
      v12 = (uint *)*v6;
      v32 = v27;
      v33 = v28;
      v34 = v29;
      v35 = v30;
      v36 = v31;
      v13 = (uint *)*v4;
      v45 = v30;
      v37 = v13;
      v14 = v4[1];
      v42 = v27;
      v38 = v14;
      v15 = v4[2];
      v43 = v28;
      v39 = v15;
      v16 = v4[3];
      v44 = v29;
      v40 = (uint *)v16;
      LOBYTE(v16) = *((uchar *)v4 + 16);
      v46 = v31;
      v24 = v31;
      v41 = v16;
      if ( v13 != v27 )
      {
        do
        {
          *v12 = *v13;
          v17 = (int)v40;
          v18 = v37 + 1 == v40;
          if ( v37 + 1 == v40 )
            v17 = v38;
          ++v37;
          if ( v18 )
            v37 = (uint *)v17;
          v13 = v37;
          ++v12;
        }
        while ( v37 != v32 );
      }
      v26 -= v11;
      v19 = *v6 + 4 * (v11 - 1) + 4;
      *v6 = v19;
      if ( v19 == v6[3] )
        *v6 = v6[1];
      if ( !v26 )
        break;
      v20 = v43;
      v21 = v44;
      v22 = v45;
      *v4 = v42;
      v4[1] = v20;
      v4[2] = v21;
      v4[3] = v22;
      *((uchar *)v4 + 16) = v24;
    }
  }
  *v5 = *v6;
  v5[1] = v6[1];
  v5[2] = v6[2];
  result = v6[3];
  v5[3] = result;
  return result;
}

//----- (02240614) --------------------------------------------------------
uint __fastcall Function_2240614(uint *a1, uint *a2, int *a3, uint *a4)
{
  uint *v4;
  int *v5;
  int v6;
  uint *v7;
  uint *v8;
  uint v9;
  uint v10;
  uint v11;
  uint v12;
  uint v13;
  bool v14;
  uint v15;
  int *v16;
  int v17;
  int v18;
  int v19;
  char *v20;
  int v21;
  uint result;
  int v23;
  int v24;
  int v25;

  v4 = a2;
  v5 = a3;
  v6 = *a3;
  v7 = a1;
  v8 = a4;
  if ( *a2 != v6 )
  {
    do
    {
      if ( v6 == v5[1] )
        *v5 = v5[3];
      *v5 -= 4;
      if ( *v8 == v8[1] )
        *v8 = v8[3];
      v9 = *v8 - 4;
      *v8 = v9;
      v10 = v8[2];
      if ( v9 < v10 )
        v10 = v8[1];
      v25 = (int)(v9 - v10) / 4;
      v11 = *v4;
      v12 = v4[2];
      v13 = v5[2];
      v14 = *v4 >= v12;
      if ( *v4 >= v12 )
        v6 = 1;
      v15 = *v5;
      if ( !v14 )
        v6 = 0;
      if ( v6 == v15 >= v13 )
      {
        v17 = v15 - v11;
        v16 = (int *)(v15 - v11 + ((uint)((int)(v15 - v11) >> 1) >> 30));
        if ( v25 < v17 / 4 )
          v16 = &v25;
        v24 = v17 / 4;
        if ( v25 >= v17 / 4 )
          v16 = &v24;
      }
      else
      {
        if ( v15 < v13 )
          v13 = v5[1];
        v18 = v15 - v13;
        v16 = (int *)(v15 - v13 + ((uint)((int)(v15 - v13) >> 1) >> 30));
        if ( v25 < v18 / 4 )
          v16 = &v25;
        v23 = v18 / 4;
        if ( v25 >= v18 / 4 )
          v16 = &v23;
      }
      v19 = *v16;
      v20 = (char *)(*v5 - 4 * *v16);
      v21 = (int)&v20[4 * (*v16 + 1)];
      *v5 = (int)v20;
      Function_20d50d8((char *)(*v8 + 4 - 4 * ((v21 - (int)v20) / 4)), v20, 4 * ((v21 - (int)v20) / 4));
      *v8 -= 4 * v19;
      v6 = *v5;
    }
    while ( *v4 != *v5 );
  }
  *v7 = *v8;
  v7[1] = v8[1];
  v7[2] = v8[2];
  result = v8[3];
  v7[3] = result;
  return result;
}

//----- (022407A8) --------------------------------------------------------
int __fastcall Function_22407a8(uint *a1, int a2, uint *a3, int a4)
{
  int v4;
  uint *v5;
  uint *v6;
  int v7;
  char *v8;
  uint v9;
  uint v10;
  int *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int result;
  int v19;
  int v20;
  int v21;

  v4 = a2;
  v5 = a3;
  v6 = a1;
  v7 = a4;
  while ( *(uint *)v4 != *v5 )
  {
    v21 = (*(uint *)(v7 + 12) - *(uint *)v7) / 4;
    v8 = *(char **)v4;
    v9 = *(uint *)(v4 + 8);
    v10 = *v5;
    if ( *(uint *)v4 >= v9 )
      a4 = 1;
    if ( *(uint *)v4 < v9 )
      a4 = 0;
    if ( a4 == v10 >= v5[2] )
    {
      v12 = v10 - (uint)v8;
      v11 = (int *)(v10 - (uint)v8 + ((uint)((int)(v10 - (uint)v8) >> 1) >> 30));
      if ( v21 < (int)(v10 - (uint)v8) / 4 )
        v11 = &v21;
      v20 = v12 / 4;
      if ( v21 >= v12 / 4 )
        v11 = &v20;
    }
    else
    {
      v13 = *(uint *)(v4 + 12) - (uint)v8;
      v11 = (int *)(v13 + ((uint)(v13 >> 1) >> 30));
      v14 = v13 / 4;
      if ( v21 < v13 / 4 )
        v11 = &v21;
      v19 = v14;
      if ( v21 >= v13 / 4 )
        v11 = &v19;
    }
    v15 = *v11;
    Function_20d50d8(*(char **)v7, *(char **)v4, 4 * (4 * *v11 / 4));
    v16 = *(uint *)v4 + 4 * (v15 - 1) + 4;
    *(uint *)v4 = v16;
    if ( v16 == *(uint *)(v4 + 12) )
      *(uint *)v4 = *(uint *)(v4 + 4);
    v17 = *(uint *)v7 + 4 * (v15 - 1) + 4;
    *(uint *)v7 = v17;
    if ( v17 == *(uint *)(v7 + 12) )
      *(uint *)v7 = *(uint *)(v7 + 4);
  }
  *v6 = *(uint *)v7;
  v6[1] = *(uint *)(v7 + 4);
  v6[2] = *(uint *)(v7 + 8);
  result = *(uint *)(v7 + 12);
  v6[3] = result;
  return result;
}

//----- (0224091C) --------------------------------------------------------
uint *__fastcall Function_224091c(uint *a1)
{
  int v1;
  uint *v2;
  int v3;
  int v4;
  uint *v5;
  int v6;
  uint *v7;
  int v8;

  v1 = 0;
  v2 = a1;
  a1[1] = 0;
  if ( a1[4] )
  {
    v3 = a1[5];
    if ( v3 )
    {
      u32_div_f(a1[3] + a1[4], v3);
      v1 = v4;
    }
    v5 = (uint *)v2[2];
    v6 = (int)&v5[v1];
    v7 = &v5[v2[3]];
    v8 = (int)&v5[v2[5]];
    while ( v7 != (uint *)v6 )
    {
      if ( *v7 )
        ((void (__fastcall *)(uint))dword_21D77C4[0])(0);
      ++v7;
      if ( v7 == (uint *)v8 )
        v7 = v5;
    }
  }
  Function_223c41c(v2 + 2);
  return v2;
}

//----- (022409BC) --------------------------------------------------------
uint *__fastcall Function_22409bc(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( *a1 )
  {
    a1[2] -= a1[2];
    if ( *a1 )
      ((void (__cdecl *)(uint))dword_21D77C4[0])(0);
  }
  return v1;
}

//----- (02240A0C) --------------------------------------------------------
int __fastcall Function_2240a0c(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  int result;

  v2 = a1;
  v3 = dword_225B6C0[3];
  v4 = a2;
  if ( !(dword_225B6C0[3] & 1) )
  {
    a2 = dword_225B6C0[3] | 1;
    v3 = 1073741822;
    dword_22590A0 = 1073741822;
    dword_225B6C0[3] |= 1u;
  }
  if ( v4 )
    Function_223fc14(0, a2, (int)&dword_225B6C0[3], v3);
  *v2 = Function_2246290(4 * (v4 + 1));
  result = v4 + 1;
  v2[3] = v4 + 1;
  return result;
}

//----- (02240A74) --------------------------------------------------------
int __fastcall Function_2240a74(uint *a1, char **a2, uint *a3)
{
  uint *v3;
  char **v4;
  uint *v5;
  uint v6;
  char *v7;
  int v8;
  int v9;
  int result;
  char *v11;
  int v12;
  int v13;
  int v14;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = *a3;
  v7 = *a2;
  v8 = *a1 + 4 * a1[1];
  if ( (uint)v7 > v6 )
  {
    v11 = (char *)v5[1];
    v12 = v8 - 4 * ((int)(v6 - (uint)v11) / 4);
    Function_20d50d8(
      (char *)(v8 - 4 * ((int)(v6 - (uint)v11) / 4)),
      v11,
      4 * ((int)(v6 - (uint)v11) / 4));
    v13 = (v4[3] - *v4) / 4;
    Function_20d50d8((char *)(v12 - 4 * v13), *v4, 4 * v13);
    v14 = (v4[3] - *v4) / 4 + (*v5 - v5[1]) / 4;
    v3[1] -= v14;
    result = v3[2] + v14;
    v3[2] = result;
  }
  else
  {
    Function_20d50d8(
      (char *)(v8 - 4 * ((int)(v6 - (uint)v7) / 4)),
      v7,
      4 * ((int)(v6 - (uint)v7) / 4));
    v9 = *v5 - (uint)*v4;
    v3[2] += v9 / 4;
    result = v3[1] - v9 / 4;
    v3[1] = result;
  }
  return result;
}

//----- (02240B80) --------------------------------------------------------
int __fastcall Function_2240b80(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  int v6;
  char *v7;
  char *v8;
  int result;
  int v10;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  u32_div_f(a1[1] + a1[2], a1[3]);
  v7 = (char *)(*v3 + 4 * v6);
  v8 = *(char **)v4;
  if ( *(uint *)v4 > *(uint *)v5 )
  {
    v10 = (*(uint *)(v4 + 12) - (int)v8) / 4;
    Function_20d50d8(v7, v8, 4 * v10);
    Function_20d50d8(&v7[4 * v10], *(char **)(v5 + 4), 4 * ((*(uint *)v5 - *(uint *)(v5 + 4)) / 4));
    result = v3[2] + (*(uint *)v5 - *(uint *)(v5 + 4)) / 4 + (*(uint *)(v4 + 12) - *(uint *)v4) / 4;
  }
  else
  {
    Function_20d50d8(v7, v8, 4 * ((*(uint *)v5 - (int)v8) / 4));
    result = v3[2] + (*(uint *)v5 - *(uint *)v4) / 4;
  }
  v3[2] = result;
  return result;
}

//----- (02240C80) --------------------------------------------------------
uint *__fastcall Function_2240c80(uint *result, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = result[1];
  v3 = result[3] - v2;
  v4 = a2 + (*result - v2) / 4;
  if ( v4 >= 0 )
  {
    if ( v4 >= v3 / 4 )
      v4 -= v3 / 4;
  }
  else
  {
    v4 += v3 / 4;
  }
  *result = v2 + 4 * v4;
  return result;
}

//----- (02240CC4) --------------------------------------------------------
int __fastcall Function_2240cc4(uint *a1, uint *a2)
{
  uint v2;
  uint v3;
  int v4;

  v2 = *a2;
  v3 = a1[2];
  v4 = (int)(*a1 - *a2) / 4;
  if ( *a1 < v3 )
  {
    if ( v2 >= v3 )
      v4 += (int)(a1[3] - a1[1]) / 4;
  }
  else if ( v2 < v3 )
  {
    v4 -= (int)(a1[3] - a1[1]) / 4;
  }
  return v4;
}

//----- (02240D38) --------------------------------------------------------
int __fastcall Function_2240d38(int *a1, uint a2)
{
  uint v2;
  int *v3;
  int result;

  v2 = a2;
  v3 = a1;
  if ( a2 > 0x1FFFFFFF )
    Function_20dfbdc();
  result = Function_2246290(8 * v2);
  *v3 = result;
  v3[2] = v2;
  return result;
}

//----- (02240D68) --------------------------------------------------------
int __fastcall Function_2240d68(int *a1, uint a2)
{
  uint v2;
  int *v3;
  int result;

  v2 = a2;
  v3 = a1;
  if ( a2 > 0x1FFFFFFF )
    Function_20dfbdc();
  result = Function_2246290(8 * v2);
  *v3 = result;
  v3[2] = v2;
  return result;
}

//----- (02240D98) --------------------------------------------------------
int Function_2240d98()
{
  return Function_2240d9c();
}

//----- (02240D9C) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02240E38) --------------------------------------------------------
int *__fastcall Function_2240e38(int *result, int *a2, int *a3, int a4)
{
  int *v4;
  int v5;
  int *v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int *v12;
  int v13;
  int v14;
  int *v15;
  int v16;
  int v17;
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
  int v43;
  int v44;
  int v45;
  int v46;

  v46 = a4;
  v4 = result;
  v5 = *result;
  v6 = a2;
  v7 = a3;
  if ( *result )
  {
    u32_div_f(result[1] + result[2], result[3]);
    v9 = v5 + 4 * v8;
    v10 = Function_2241110(v7, v6);
    v29 = v10;
    v11 = *v4 + 4 * v4[3] - v9;
    v13 = v11;
    v12 = (int *)(v11 + ((uint)(v11 >> 1) >> 30));
    v14 = v11 / 4;
    if ( v10 < v13 / 4 )
      v12 = &v29;
    v28 = v14;
    if ( v10 >= v13 / 4 )
      v12 = &v28;
    v28 = *v12;
    v4[2] += v10;
    v34 = *v6;
    v35 = v6[1];
    v36 = v6[2];
    v37 = v6[3];
    v15 = (int *)Function_22410cc(&v34, v28);
    v16 = v15[1];
    v17 = v15[2];
    v18 = v15[3];
    v42 = *v15;
    v43 = v16;
    v44 = v17;
    v45 = v18;
    Function_2240fb0(*v6, v6[1], v6[2], v6[3], v42, v16, v17, v18, v9);
    result = (int *)(v29 - v28);
    v29 -= v28;
    if ( v29 )
    {
      v30 = *v6;
      v31 = v6[1];
      v32 = v6[2];
      v33 = v6[3];
      v19 = (int *)Function_22410cc(&v30, v28);
      v20 = v19[1];
      v21 = v19[2];
      v22 = v19[3];
      v23 = *v7;
      v24 = v7[1];
      v25 = v7[2];
      v26 = v7[3];
      v27 = *v4;
      v38 = *v19;
      v39 = v20;
      v40 = v21;
      v41 = v22;
      result = (int *)Function_2240fb0(v38, v20, v21, v22, v23, v24, v25, v26, v27);
    }
  }
  return result;
}

//----- (02240FB0) --------------------------------------------------------
int Function_2240fb0()
{
  return Function_2240fb4();
}

//----- (02240FB4) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02241064) --------------------------------------------------------
int __fastcall Function_2241064(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  int result;

  v2 = a1;
  v3 = dword_225B6C0[4];
  v4 = a2;
  if ( !(dword_225B6C0[4] & 1) )
  {
    a2 = dword_225B6C0[4] | 1;
    v3 = 1073741822;
    dword_22590A4 = 1073741822;
    dword_225B6C0[4] |= 1u;
  }
  if ( v4 )
    Function_223fc14(0, a2, (int)&dword_225B6C0[4], v3);
  *v2 = Function_2246290(4 * (v4 + 1));
  result = v4 + 1;
  v2[3] = v4 + 1;
  return result;
}

//----- (022410CC) --------------------------------------------------------
uint *__fastcall Function_22410cc(uint *result, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = result[1];
  v3 = result[3] - v2;
  v4 = a2 + (*result - v2) / 4;
  if ( v4 >= 0 )
  {
    if ( v4 >= v3 / 4 )
      v4 -= v3 / 4;
  }
  else
  {
    v4 += v3 / 4;
  }
  *result = v2 + 4 * v4;
  return result;
}

//----- (02241110) --------------------------------------------------------
int __fastcall Function_2241110(uint *a1, uint *a2)
{
  uint v2;
  uint v3;
  int v4;

  v2 = *a2;
  v3 = a1[2];
  v4 = (int)(*a1 - *a2) / 4;
  if ( *a1 < v3 )
  {
    if ( v2 >= v3 )
      v4 += (int)(a1[3] - a1[1]) / 4;
  }
  else if ( v2 < v3 )
  {
    v4 -= (int)(a1[3] - a1[1]) / 4;
  }
  return v4;
}

//----- (02241184) --------------------------------------------------------
int __fastcall Function_2241184(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint v8;
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
  char *v21;
  int v22;
  char *v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  char *v32;
  int v33;
  int v34;
  int v35;
  uint v36;
  int v37;
  int v38;
  int *v39;
  int v40;
  int v41;
  uint v42;
  int v43;
  char v44;
  char v45;
  char v46;
  char v47;
  char v48;
  char v49;
  int v50;
  int v51;
  int v52;
  char v53;
  char v54;
  char v55;
  char v56;
  char v57;
  char v58;
  char v59;
  uint *v60;
  uint v61;
  uchar *v62;
  int v63;

  v2 = a2;
  v3 = a1;
  Function_223ba6c((int)&v59, "  ");
  Function_223a3b0(&v62, v3, &v59, 2);
  Function_223badc(&v59);
  if ( v63 != 2 )
  {
    Function_223b578(&v62, v4, v5, v6);
    return 0;
  }
  if ( *(uint *)v62 & 1 )
    v8 = *((uint *)v62 + 1);
  else
    v8 = (uint)*v62 << 24 >> 25;
  if ( v8 > 0x28 )
  {
    Function_223b578(&v62, (int)v62, v5, v6);
    return 0;
  }
  if ( *((uint *)v62 + 3) & 1 )
    v9 = *((uint *)v62 + 4);
  else
    v9 = (uint)v62[12] << 24 >> 25;
  if ( v9 > 0x190 )
  {
    Function_223b578(&v62, (int)v62, v5, v6);
    return 0;
  }
  Function_223ba6c((int)&v58, " ");
  Function_223a3b0(&v60, (int)v62, &v58, 0);
  Function_223badc(&v58);
  if ( v61 < 6 )
  {
    Function_223b578(&v60, v10, v11, v12);
    Function_223b578(&v62, v13, v14, v15);
    return 0;
  }
  if ( *v60 & 1 )
    v16 = v60[2];
  else
    v16 = (int)v60 + 1;
  Function_20dacac(v16, &v53, 16, v12);
  *v2 = v18;
  if ( v60[3] & 1 )
    v19 = v60[5];
  else
    v19 = (int)v60 + 13;
  Function_20dacac(v19, &v53, 16, v17);
  v2[1] = v20;
  if ( v60[6] & 1 )
    v21 = (char *)v60[8];
  else
    v21 = (char *)v60 + 25;
  Function_223ba6c((int)&v56, v21);
  Function_223ba6c((int)&v57, "B");
  v22 = Function_224154c(&v56, &v57, 1);
  Function_223badc(&v57);
  Function_223badc(&v56);
  v2[2] = v22 == 0;
  if ( v60[9] & 1 )
    v23 = (char *)v60[11];
  else
    v23 = (char *)v60 + 37;
  Function_223ba6c((int)&v54, v23);
  Function_223ba6c((int)&v55, "S");
  v24 = Function_224154c(&v54, &v55, 1);
  Function_223badc(&v55);
  Function_223badc(&v54);
  v2[3] = v24 != 0;
  if ( v60[12] & 1 )
    v26 = v60[14];
  else
    v26 = (int)v60 + 49;
  Function_20dad44(v26, &v53, 16, v25);
  v2[4] = v27;
  Function_223b578(&v60, v28, v29, v30);
  if ( v2[2] == 1 )
  {
    if ( *((uint *)v62 + 3) & 1 )
      v32 = (char *)*((uint *)v62 + 5);
    else
      v32 = (char *)(v62 + 13);
    if ( !Function_2237ef8(v32, v2 + 6) )
    {
      Function_223b578(&v62, v33, v34, v35);
      return 0;
    }
  }
  else
  {
    if ( *((uint *)v62 + 3) & 1 )
      v36 = *((uint *)v62 + 4);
    else
      v36 = (uint)v62[12] << 24 >> 25;
    if ( !(*((uint *)v62 + 3) & 1) )
      v31 = (int)(v62 + 13);
    if ( *((uint *)v62 + 3) & 1 )
      v31 = *((uint *)v62 + 5);
    if ( *((uint *)v62 + 3) & 1 )
      v37 = *((uint *)v62 + 5);
    else
      v37 = (int)(v62 + 13);
    v38 = v31 + v36;
    v48 = 0;
    v49 = 0;
    v47 = 0;
    v44 = 0;
    v39 = &v43 - 1;
    v40 = v52;
    *v39 = v38;
    v39[1] = v40;
    v41 = *(&v43 - 1);
    v50 = v37;
    v51 = v38;
    Function_22366cc();
    v45 = 0;
    v42 = v2[7];
    if ( v42 >= v2[8] )
    {
      v46 = 0;
      *((uchar *)&v43 - 4) = 0;
      Function_2241944(v2 + 6, &byte_22590D9, *(&v43 - 1));
    }
    else
    {
      v35 = v42 + 1;
      v2[7] = v42 + 1;
      v33 = v2[6];
      v34 = 0;
      *(uchar *)(v33 + v35 - 1) = 0;
    }
  }
  Function_223b578(&v62, v33, v34, v35);
  return 1;
}

//----- (0224154C) --------------------------------------------------------
int __fastcall Function_224154c(uint *a1, uint *a2, int a3, int a4)
{
  uint *v4;
  uint *v5;
  int v6;
  uint v7;
  int v8;
  int *v9;
  int v10;
  char *v11;
  uchar *v12;
  int v13;
  uint v14;
  int v15;
  int *v16;
  int v17;
  char *v18;
  uchar *v19;
  int v20;
  int v22;
  int v23;
  char *v24;
  char *v25;
  int v26;
  char *v27;
  char *v28;
  int v29;

  v29 = a4;
  v4 = a1;
  v5 = a2;
  v6 = a3;
  if ( *a1 & 1 )
  {
    v7 = a1[1];
    v8 = v4[2];
  }
  else
  {
    v8 = (int)a1 + 1;
    v7 = (uint)*(uchar *)a1 << 24 >> 25;
  }
  v27 = (char *)(v8 + v7);
  v9 = (int *)&v27;
  if ( (*v4 & 1) == 0 )
    v10 = (int)v4 + 1;
  else
    v10 = v4[2];
  v23 = (int)v27;
  if ( (*v4 & 1) == 0 )
    v11 = (char *)v4 + 1;
  else
    v11 = (char *)v4[2];
  v26 = v10;
  v28 = v11;
  if ( v11 != v27 )
  {
    v12 = (uchar *)v10;
    do
    {
      v13 = *v11++;
      *v12++ = Function_22416bc(v13, v9);
    }
    while ( v11 != (char *)v23 );
  }
  if ( *v5 & 1 )
  {
    v14 = v5[1];
    v15 = v5[2];
  }
  else
  {
    v15 = (int)v5 + 1;
    v14 = (uint)*(uchar *)v5 << 24 >> 25;
  }
  v24 = (char *)(v15 + v14);
  v16 = (int *)&v24;
  if ( (*v5 & 1) == 0 )
    v17 = (int)v5 + 1;
  else
    v17 = v5[2];
  v22 = (int)v24;
  if ( (*v5 & 1) == 0 )
    v18 = (char *)v5 + 1;
  else
    v18 = (char *)v5[2];
  v25 = v18;
  if ( v18 != v24 )
  {
    v19 = (uchar *)v17;
    do
    {
      v20 = *v18++;
      *v19++ = Function_22416bc(v20, v16);
    }
    while ( v18 != (char *)v22 );
  }
  return Function_2241a5c(v4, 0, v6, v5);
}

//----- (022416BC) --------------------------------------------------------
int __fastcall Function_22416bc(int result)
{
  if ( result >= 0 && result < 128 )
    result = (uchar)Unknown_20fe764[result];
  return result;
}

//----- (022416DC) --------------------------------------------------------
int __fastcall Function_22416dc(int a1, int a2, int a3, int a4, uint a5, int a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  char v11;
  char v12;
  char v13;
  char v14;
  char v15;

  v6 = a1;
  v7 = a2;
  v8 = a3;
  v9 = a4;
  if ( !a1 && a5 > 0x190 )
    return 0;
  if ( a1 == 1 && a5 > 0x12C )
    return 0;
  Function_22419dc(a6, &dword_22590EC);
  Function_2236a38((int)&v14, 3, (const char *)&dword_22590F0, 0);
  Function_2241974(a6, &v14);
  Function_223badc(&v14);
  Function_22419a8(a6, " ");
  Function_2236a38((int)&v13, 2, (const char *)&dword_22590F0, 6);
  Function_2241974(a6, &v13);
  Function_223badc(&v13);
  Function_22419a8(a6, " ");
  if ( v6 )
  {
    if ( v6 != 1 )
      return 0;
    Function_22419a8(a6, "B");
  }
  else
  {
    Function_22419a8(a6, "S");
  }
  Function_22419a8(a6, " ");
  if ( v7 )
  {
    if ( v7 != 1 )
      return 0;
    Function_22419a8(a6, &dword_22590F4);
  }
  else
  {
    Function_22419a8(a6, "S");
  }
  Function_22419a8(a6, " ");
  Function_2236a38((int)&v12, 8, (const char *)&dword_22590F0, v8);
  Function_2241974(a6, &v12);
  Function_223badc(&v12);
  Function_22419a8(a6, " ");
  Function_22419a8(a6, &dword_22590F8);
  Function_22419a8(a6, "  ");
  if ( v6 )
  {
    if ( v6 != 1 )
      return 0;
    MI_CpuFill8(&v15, 0, 0x191u);
    if ( ((int (__fastcall *)(int, uint, char *, int))dword_21D99D4[1677])(v9, a5, &v15, 401) == -1 )
      return 0;
    Function_22419a8(a6, &v15);
  }
  else
  {
    Function_2236a38((int)&v11, a5, (const char *)&dword_22590FC, v9);
    Function_2241974(a6, &v11);
    Function_223badc(&v11);
  }
  return 1;
}

//----- (02241944) --------------------------------------------------------
int __fastcall Function_2241944(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  Function_223b7a4();
  return Function_2241a94(v3, 1, v2);
}

//----- (02241974) --------------------------------------------------------
int __fastcall Function_2241974(uint *a1, uint *a2)
{
  uint *v2;
  int v3;

  v2 = a2;
  if ( *a1 & 1 )
    v3 = a1[1];
  else
    v3 = (uint)*(uchar *)a1 << 24 >> 25;
  return Function_223bcc8((int)a1, v3, 0, v2);
}

//----- (022419A8) --------------------------------------------------------
int __fastcall Function_22419a8(uint *a1)
{
  int v1;
  uint v2;

  if ( *a1 & 1 )
    v1 = a1[1];
  else
    v2 = (uint)*(uchar *)a1 << 24 >> 25;
  return Function_2241a10();
}

//----- (022419DC) --------------------------------------------------------
int __fastcall Function_22419dc(uint *a1)
{
  int v1;
  uint v2;

  if ( *a1 & 1 )
    v1 = a1[1];
  else
    v2 = (uint)*(uchar *)a1 << 24 >> 25;
  return Function_2241a10();
}

//----- (02241A10) --------------------------------------------------------
int __fastcall Function_2241a10(int a1, int a2, int a3, char *a4)
{
  int v4;

  v4 = (int)&a4[strlen(a4)];
  return Function_223c018();
}

//----- (02241A5C) --------------------------------------------------------
int __fastcall Function_2241a5c(int a1, int a2, int a3, uint *a4)
{
  int v4;
  uint v5;

  if ( *a4 & 1 )
    v4 = a4[1];
  else
    v5 = (uint)*(uchar *)a4 << 24 >> 25;
  return Function_223bf38();
}

//----- (02241A94) --------------------------------------------------------
int __fastcall Function_2241a94(int a1, uint a2, uchar *a3, int a4)
{
  int v4;
  uint v5;
  int v6;
  uchar *v7;
  int v8;
  int v9;
  int v10;
  char *v11;
  int v12;
  uint v13;
  int v14;
  int v15;
  int v16;
  char v18;
  char v19;
  char v20;
  char v21;
  char v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;

  v28 = a4;
  v4 = a1;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v27 = 0;
  v26 = a1 + 8;
  v5 = a2;
  v6 = *(uint *)(a1 + 4) + a2 - *(uint *)(a1 + 8);
  v7 = a3;
  v8 = Function_223b7a4();
  v21 = 0;
  *(&v18 - 4) = 0;
  v9 = *((uint *)&v18 - 1);
  v22 = 0;
  Function_223c8e0(&v23, v8);
  v10 = *(uint *)(v4 + 4);
  v20 = 0;
  v27 = v10;
  Call_FillMemWithValue((int *)(v23 + v10 + v24), *v7, v5);
  v24 += v5;
  v11 = *(char **)v4;
  v12 = *(uint *)(v4 + 4);
  v19 = 0;
  v13 = v12;
  v27 -= v12;
  memcpy((uchar *)(v23 + v27), v11, v12);
  Call_FillMemWithValue((int *)v11, 0, v13);
  v24 += v13;
  v18 = 0;
  *(uint *)(v4 + 4) = 0;
  v14 = *(uint *)(v4 + 8);
  *(uint *)(v4 + 8) = v25;
  v25 = v14;
  v15 = *(uint *)v4;
  *(uint *)v4 = v23;
  v23 = v15;
  v16 = *(uint *)(v4 + 4);
  *(uint *)(v4 + 4) = v24;
  v24 = v16;
  return Function_223c8c4((int)&v23);
}

//----- (02241BD8) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x2241BF8 for case 0"

//----- (02241BE8) --------------------------------------------------------
void Function_2241be8()
{
  JUMPOUT(&loc_2241BF8);
}

//----- (02241BEC) --------------------------------------------------------
void Function_2241bec()
{
  JUMPOUT(&loc_2241C1C);
}

//----- (02241BF0) --------------------------------------------------------
void Function_2241bf0()
{
  JUMPOUT(&loc_2241C30);
}

//----- (02241BF4) --------------------------------------------------------
// jumptable 02241BE0 case 3
void Function_2241bf4()
{
  ;
}

//----- (02241C44) --------------------------------------------------------
int __fastcall Function_2241c44(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint *v6;
  uint *v7;
  int v8;
  int v10;
  char v11;
  int v12;
  char v13;
  uint *v14;
  char v15;
  char v16;
  int v17;

  v17 = a4;
  v4 = a1;
  v5 = a2;
  v6 = (uint *)Function_2246290(60);
  v7 = v6;
  if ( v6 )
  {
    *v6 = off_2258EB0;
    v6[1] = 5;
    v6[2] = 0;
    v6[3] = 0;
    v6[4] = 0;
    ((void (__fastcall *)(char *, char *))dword_21D806C[0])(&v16, &v15);
    v7[2] = RTC_ConvertDateTimeToSecond((int *)&v16, &v15);
    v7[3] = v8;
    v7[5] = 1;
    v7[6] = 0;
    v7[7] = 0;
    v7[8] = 0;
    v7[9] = 1;
    v7[10] = 0;
    v7[11] = v5;
    v7[12] = 0;
    v7[13] = 0;
    v7[14] = 0;
  }
  v14 = v7;
  Function_2242550(&v10, v4 + 4, &v14);
  v12 = v10;
  v13 = v11;
  if ( v11 )
    return 1;
  if ( v14 )
    (*(void (__cdecl **)(uint *))(*v14 + 4))(v14);
  return 1;
}

//----- (02241D40) --------------------------------------------------------
int __fastcall Function_2241d40(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint *v7;
  char v9;
  int v10;
  int v11;

  v11 = a4;
  v4 = a1;
  v5 = *(uint *)(a1 + 12);
  v6 = a2;
  v10 = v5;
  if ( v5 == v4 + 8 )
    return 0;
  while ( 1 )
  {
    v7 = *(uint **)(v5 + 12);
    if ( v6 == v7[11] )
      break;
    Function_223ad6c(&v10);
    v5 = v10;
    if ( v10 == v4 + 8 )
      return 0;
  }
  if ( v7 )
    (*(void (**)(void))(*v7 + 4))();
  Function_22425f0(&v9, v4 + 4, v10);
  return 1;
}

//----- (02241DCC) --------------------------------------------------------
int __fastcall Function_2241dcc(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int result;
  int v7;
  int v8;
  bool v9;
  int i;
  int v11;
  int v12;
  int v13;
  int v14;

  v14 = a4;
  v4 = a1;
  v5 = a2;
  if ( a2 == *(uint *)(a1 + 60) )
    return a1 + 16;
  v7 = *(uint *)(a1 + 12);
  v8 = v4 + 8;
  v11 = a2;
  v12 = v4 + 8;
  v13 = v7;
  for ( i = v7; ; Function_223ad6c(&i) )
  {
    v9 = i == v8;
    if ( i != v8 )
      v9 = v5 == *(uint *)(*(uint *)(i + 12) + 44);
    if ( v9 )
      break;
  }
  if ( i == v4 + 8 )
    result = 0;
  else
    result = *(uint *)(i + 12);
  return result;
}

//----- (02241E54) --------------------------------------------------------
int __fastcall Function_2241e54(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;
  char v7;
  int v8;
  int i;
  int v10;

  v10 = a4;
  v4 = a1;
  result = *(uint *)(a1 + 12);
  for ( i = result; i != v4 + 8; result = i )
  {
    v6 = *(uint *)(result + 12);
    if ( v6 )
      (*(void (**)(void))(*(uint *)v6 + 4))();
    v8 = i;
    Function_223ad6c(&i);
    Function_22425f0(&v7, v4 + 4, v8);
  }
  return result;
}

//----- (02241ED0) --------------------------------------------------------
int __fastcall Function_2241ed0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  char v7;
  int v8;
  int v9;

  v9 = a4;
  v4 = 0;
  v5 = 0;
  if ( *(uint *)(a1 + 4) == 19 )
  {
    Function_2241f2c(&v7);
    v4 = 1;
    if ( v8 == 19 )
      v5 = 1;
  }
  if ( v4 )
    Function_223b5d0(&v7);
  return v5;
}

//----- (02241F2C) --------------------------------------------------------
int __fastcall Function_2241f2c(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int result;
  char *v5;
  int v6;
  uint v7;
  char v8;
  char v9;
  int v10;
  int v11;

  v2 = a1;
  *a1 = 0;
  a1[1] = 0;
  v3 = a2;
  a1[2] = 0;
  if ( *(uint *)(a2 + 4) )
    Function_2242738();
  result = *(uint *)(v3 + 12);
  v11 = result;
  if ( result != v3 + 8 )
  {
    v5 = &v8 - 4;
    do
    {
      v6 = *(uint *)(result + 12);
      if ( *(uint *)(v6 + 56) )
      {
        v10 = *(uint *)(v6 + 44);
        v8 = 0;
        v7 = v2[1];
        if ( v7 >= v2[2] )
        {
          v9 = 0;
          *v5 = 0;
          Function_2242818(v2, &v10, *(uint *)v5);
        }
        else
        {
          v2[1] = v7 + 1;
          *(uint *)(*v2 + 4 * (v7 + 1) - 4) = v10;
        }
      }
      Function_223ad6c(&v11);
      result = v11;
    }
    while ( v11 != v3 + 8 );
  }
  return result;
}

//----- (02242008) --------------------------------------------------------
int __fastcall Function_2242008(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint *v10;
  int v11;
  int v12;
  int v13;
  uchar *v14;
  uchar *v15;
  char *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  uint *v21;
  int v22;
  int *v23;
  int v24;
  int v25;
  char *v26;
  int v27;
  int v28;
  int v29;
  uchar *v30;
  uchar *v31;
  char *v32;
  int v33;
  int v34;
  int result;
  int v36;
  char v37;
  char v38;
  char v39;
  char v40;
  char v41;
  char v42;
  char v43;
  int v44;
  int v45;
  int v46;
  char *v47;
  int v48;
  int v49;
  char *v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  char v59;
  char v60;
  char v61;
  char v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int (**v67)();
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  char *v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  uchar savedregs[36];

  *(uint *)savedregs = a4;
  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v67 = off_2258EB0;
  v68 = 5;
  v69 = 0;
  v70 = 0;
  v71 = 0;
  ((void (__fastcall *)(char *, char *))dword_21D806C[0])(&v62, &v61);
  v8 = RTC_ConvertDateTimeToSecond((int *)&v62, &v61);
  v78 = v5;
  v69 = v8;
  v70 = v9;
  v72 = 1;
  v76 = 1;
  v73 = 0;
  v74 = 0;
  v75 = 0;
  v77 = 0;
  v79 = 0;
  v80 = 0;
  v81 = 0;
  if ( Function_20d5190((uchar *)(v4 + 20), (uchar *)&v68, 16) != 0 )
  {
    *(uint *)(v4 + 20) = v68;
    v10 = (uint *)(v4 + 24);
    v11 = v70;
    *v10 = v69;
    v10[1] = v11;
    *(uint *)(v4 + 32) = v71;
    *(uint *)(v4 + 36) = 1;
  }
  v12 = *(uint *)(v4 + 44);
  v13 = 0;
  if ( v12 == v74 )
  {
    if ( !v12
      || (v14 = (uchar *)Function_2235b8c((int *)(v4 + 40)),
          v15 = (uchar *)Function_2235b8c((int *)&v73),
          !Function_20d5190(v14, v15, v12)) )
    {
      v13 = 1;
    }
  }
  if ( !v13 )
  {
    if ( (char **)(v4 + 40) != &v73 )
    {
      v16 = v73;
      v17 = v74;
      v43 = 0;
      *((uchar *)&v36 - 4) = 0;
      v18 = *(&v36 - 1);
      Function_2236674(v4 + 40, v16, (int)&v16[v17]);
    }
    *(uint *)(v4 + 52) = 1;
  }
  *(uint *)(v4 + 56) = v77;
  *(uint *)(v4 + 60) = v78;
  *(uint *)(v4 + 64) = v79;
  *(uint *)(v4 + 68) = v80;
  *(uint *)(v4 + 72) = v81;
  Function_223b8e8(&v73);
  v63 = 5;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  ((void (__fastcall *)(char *, char *))dword_21D806C[0])(&v60, &v59);
  v19 = RTC_ConvertDateTimeToSecond((int *)&v60, &v59);
  v65 = v20;
  v64 = v19;
  v54 = v63;
  v55 = v19;
  v56 = v20;
  v57 = v66;
  v58 = 1;
  if ( Function_20d5190((uchar *)(v4 + 20), (uchar *)&v54, 16) != 0 )
  {
    *(uint *)(v4 + 20) = v54;
    v21 = (uint *)(v4 + 24);
    v22 = v56;
    *v21 = v55;
    v21[1] = v22;
    *(uint *)(v4 + 32) = v57;
    *(uint *)(v4 + 36) = 1;
  }
  *(uint *)(v4 + 64) = 1;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v39 = 0;
  v40 = 0;
  v38 = 0;
  v37 = 0;
  v23 = &v36 - 1;
  v24 = v46;
  *v23 = v6 + v7;
  v23[1] = v24;
  v25 = *(&v36 - 1);
  v44 = v6;
  v45 = v6 + v7;
  Function_22366cc();
  v26 = v47;
  v27 = v48;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  *((uchar *)&v36 - 4) = v42;
  Function_223c2f4((int *)&v50, v26, (int)&v26[v27], *(&v36 - 1));
  v53 = 1;
  v28 = *(uint *)(v4 + 44);
  v29 = 0;
  if ( v28 == v51 )
  {
    if ( !v28
      || (v30 = (uchar *)Function_2235b8c((int *)(v4 + 40)),
          v31 = (uchar *)Function_2235b8c((int *)&v50),
          !Function_20d5190(v30, v31, v28)) )
    {
      v29 = 1;
    }
  }
  if ( !v29 )
  {
    if ( (char **)(v4 + 40) != &v50 )
    {
      v32 = v50;
      v33 = v51;
      v41 = 0;
      *((uchar *)&v36 - 4) = 0;
      v34 = *(&v36 - 1);
      Function_2236674(v4 + 40, v32, (int)&v32[v33]);
    }
    *(uint *)(v4 + 52) = 1;
  }
  Function_223b8e8(&v50);
  *(uint *)(v4 + 68) = 1;
  Function_223b8e8(&v47);
  result = 1;
  *(uint *)(v4 + 72) = 1;
  return result;
}

//----- (0224239C) --------------------------------------------------------
BOOL __fastcall Function_224239c(int a1)
{
  return *(uint *)(a1 + 40) >= 1;
}

//----- (022423B0) --------------------------------------------------------
BOOL __fastcall Function_22423b0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int i;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a1;
  v5 = *(uint *)(a1 + 12);
  v8 = 35922844;
  v9 = 0;
  v10 = v4 + 8;
  v11 = v5;
  for ( i = v5; i != v4 + 8 && Function_224239c(*(uint *)(i + 12)); Function_223ad6c(&i) )
    ;
  return i == v4 + 8;
}

//----- (02242460) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x2242534 for case 0"

//----- (022424AC) --------------------------------------------------------
void Function_22424ac()
{
  JUMPOUT(&loc_2242534);
}

//----- (022424B0) --------------------------------------------------------
void Function_22424b0()
{
  JUMPOUT(&loc_2242534);
}

//----- (022424B4) --------------------------------------------------------
void Function_22424b4()
{
  JUMPOUT(&loc_22424BC);
}

//----- (022424B8) --------------------------------------------------------
void Function_22424b8()
{
  int v0;
  int v1;
  int v2;

  Function_223ad6c(&v1);
  if ( v1 != v0 )
    JUMPOUT(&loc_224248C);
  JUMPOUT(__CS__, v2);
}

//----- (02242550) --------------------------------------------------------
int __fastcall Function_2242550(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int result;
  uchar v9;
  uchar v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a3;
  v5 = a2;
  v6 = a1;
  v7 = Function_2242848(a2, a3, &v11, &v10, &v9);
  if ( v11 && *(uint *)(*(uint *)(v11 + 12) + 44) >= *(uint *)(*(uint *)v4 + 44) )
  {
    *(uint *)v6 = v11;
    result = 0;
    *(uchar *)(v6 + 4) = 0;
  }
  else
  {
    *(uint *)v6 = Function_2242660(v5, v7, v10, v9, v4);
    result = 1;
    *(uchar *)(v6 + 4) = 1;
  }
  return result;
}

//----- (022425F0) --------------------------------------------------------
int Function_22425f0()
{
  return Function_22425f4();
}

//----- (022425F4) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02242660) --------------------------------------------------------
uint *__fastcall Function_2242660(uint *a1, int a2, int a3, int a4, uint *a5)
{
  uint *v5;
  uint *v6;
  int v7;
  int v8;
  uint *v9;
  uint *v10;
  int v11;

  v5 = a1;
  v6 = (uint *)a2;
  v7 = a3;
  v8 = a4;
  if ( *a1 == -1 )
  {
    Function_20d7350("tree::insert length error", a2, a3, a4);
    Function_20d3da0();
  }
  v9 = (uint *)Function_2246290(16);
  v10 = v5 + 1;
  if ( v9 != (uint *)-12 )
    v10 = a5;
  if ( v9 != (uint *)-12 )
    v10 = (uint *)*v10;
  if ( v9 != (uint *)-12 )
    v9[3] = v10;
  v9[1] = 0;
  *v9 = 0;
  if ( v9 != (uint *)-8 )
    v9[2] = v6;
  if ( v7 )
    *v6 = v9;
  else
    v6[1] = v9;
  ++*v5;
  v11 = v5[1];
  Function_223add8();
  if ( v8 )
    v5[2] = v9;
  return v9;
}

//----- (02242738) --------------------------------------------------------
int __fastcall Function_2242738(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  uint v7;
  char *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  char v14;
  char v15;
  char v16;
  int v17;
  int v18;
  int v19;
  int v20;

  v20 = a4;
  v4 = a1;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v16 = 0;
  *(&v14 - 4) = 0;
  Function_224290c(&v17, a2, *((uint *)&v14 - 1));
  v5 = *(int **)v4;
  v6 = 4 * *(uint *)(v4 + 4);
  v7 = 4 * (4 * *(uint *)(v4 + 4) / 4);
  v8 = *(char **)v4;
  v9 = 4 * (4 * *(uint *)(v4 + 4) / 4);
  v15 = 0;
  memcpy((uchar *)(v17 + 4 * v18), v8, v9);
  Call_FillMemWithValue(v5, 0, v7);
  v18 += v6 / 4;
  v14 = 0;
  *(uint *)(v4 + 4) = 0;
  v10 = *(uint *)(v4 + 8);
  *(uint *)(v4 + 8) = v19;
  v19 = v10;
  v11 = *(uint *)v4;
  *(uint *)v4 = v17;
  v17 = v11;
  v12 = *(uint *)(v4 + 4);
  *(uint *)(v4 + 4) = v18;
  v18 = v12;
  return Function_22428bc(&v17);
}

//----- (02242818) --------------------------------------------------------
int __fastcall Function_2242818(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  Function_224293c();
  return Function_2242a08(v3, 1, v2);
}

//----- (02242848) --------------------------------------------------------
int __fastcall Function_2242848(int a1, int a2, uint *a3, uchar *a4, uchar *a5)
{
  uint *v5;
  int result;

  *a3 = 0;
  v5 = *(uint **)(a1 + 4);
  *a4 = 1;
  *a5 = 1;
  result = a1 + 4;
  while ( v5 )
  {
    result = (int)v5;
    if ( *(uint *)(*(uint *)a2 + 44) >= *(uint *)(v5[3] + 44) )
    {
      *a3 = v5;
      v5 = (uint *)v5[1];
      *a4 = 0;
      *a5 = 0;
    }
    else
    {
      v5 = (uint *)*v5;
      *a4 = 1;
    }
  }
  return result;
}

//----- (022428BC) --------------------------------------------------------
uint *__fastcall Function_22428bc(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( *a1 )
  {
    a1[1] -= a1[1];
    if ( *a1 )
      ((void (__cdecl *)(uint))dword_21D77C4[0])(0);
  }
  return v1;
}

//----- (0224290C) --------------------------------------------------------
int __fastcall Function_224290c(int *a1, uint a2)
{
  uint v2;
  int *v3;
  int result;

  v2 = a2;
  v3 = a1;
  if ( a2 > 0x3FFFFFFF )
    Function_20dfbdc();
  result = Function_2246290(4 * v2);
  *v3 = result;
  v3[2] = v2;
  return result;
}

//----- (0224293C) --------------------------------------------------------
int Function_224293c()
{
  return Function_2242940();
}

//----- (02242940) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02242A08) --------------------------------------------------------
int __fastcall Function_2242a08(int a1, int a2, uint *a3)
{
  int v3;
  int v4;
  int v5;
  uint *v6;
  int v7;
  int v8;
  int v9;
  uint *i;
  int *v11;
  int v12;
  int v13;
  int v14;
  char *v15;
  int v16;
  int v17;
  int v18;
  char v20;
  char v21;
  char v22;
  char v23;
  char v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;

  v3 = a1;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v29 = 0;
  v28 = a1 + 8;
  v4 = a2;
  v5 = *(uint *)(a1 + 4) + a2 - *(uint *)(a1 + 8);
  v6 = a3;
  v7 = Function_224293c();
  v23 = 0;
  *(&v20 - 4) = 0;
  v8 = *((uint *)&v20 - 1);
  v24 = 0;
  Function_2242b88(&v25, v7, v8);
  v9 = v4;
  v29 = *(uint *)(v3 + 4);
  v22 = 0;
  for ( i = (uint *)(v25 + 4 * v29 + 4 * v26); v9; ++i )
  {
    --v9;
    *i = *v6;
  }
  v26 += v4;
  v11 = *(int **)v3;
  v12 = 4 * *(uint *)(v3 + 4);
  v13 = v29 - 4 * *(uint *)(v3 + 4) / 4;
  v14 = 4 * (4 * *(uint *)(v3 + 4) / 4);
  v15 = *(char **)v3;
  v21 = 0;
  v29 = v13;
  memcpy((uchar *)(v25 + 4 * v13), v15, v14);
  Call_FillMemWithValue(v11, 0, v14);
  v26 += v12 / 4;
  v20 = 0;
  *(uint *)(v3 + 4) = 0;
  v16 = *(uint *)(v3 + 8);
  *(uint *)(v3 + 8) = v27;
  v27 = v16;
  v17 = *(uint *)v3;
  *(uint *)v3 = v25;
  v25 = v17;
  v18 = *(uint *)(v3 + 4);
  *(uint *)(v3 + 4) = v26;
  v26 = v18;
  return Function_2242b6c(&v25);
}

//----- (02242B6C) --------------------------------------------------------
int __fastcall Function_2242b6c(int a1)
{
  int v1;

  v1 = a1;
  *(uint *)(a1 + 4) = 0;
  Function_2242bb8();
  return v1;
}

//----- (02242B88) --------------------------------------------------------
int __fastcall Function_2242b88(int *a1, uint a2)
{
  uint v2;
  int *v3;
  int result;

  v2 = a2;
  v3 = a1;
  if ( a2 > 0x3FFFFFFF )
    Function_20dfbdc();
  result = Function_2246290(4 * v2);
  *v3 = result;
  v3[2] = v2;
  return result;
}

//----- (02242BB8) --------------------------------------------------------
uint *__fastcall Function_2242bb8(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( *a1 )
  {
    a1[1] -= a1[1];
    if ( *a1 )
      ((void (__cdecl *)(uint))dword_21D77C4[0])(0);
  }
  return v1;
}

//----- (02242C08) --------------------------------------------------------
int Function_2242c08()
{
  int result;

  result = dword_225B6C0[7];
  if ( dword_225B6C0[7] )
    result = *(uint *)(dword_225B6C0[7] + 4);
  return result;
}

//----- (02242C24) --------------------------------------------------------
int *__fastcall Function_2242c24(int a1, int a2, int a3, int a4)
{
  int *result;
  int v5;
  int v6;

  v6 = a4;
  if ( !dword_225B6C0[7] || (result = *(int **)(dword_225B6C0[7] + 4), result != (int *)5) )
  {
    v5 = 0;
    Function_2236ca0(dword_225B6C0[7] + 156, (int)&v5, 0, dword_225B6C0[7]);
    result = &dword_225B6C0[7];
    if ( *(uint *)(dword_225B6C0[7] + 4) == 4 )
    {
      if ( dword_225B6C0[7] )
      {
        Function_2246754(dword_225B6C0[7]);
        if ( dword_225B6C0[7] )
          ((void (*)(void))dword_21D77C4[0])();
        result = &dword_225B6C0[7];
        dword_225B6C0[7] = 0;
      }
    }
    else
    {
      *(uint *)(dword_225B6C0[7] + 88) = 3;
      *(uint *)(dword_225B6C0[7] + 4) = 5;
      result = (int *)dword_225B6C0[7];
      *(uint *)(dword_225B6C0[7] + 96) = 1;
    }
  }
  return result;
}

//----- (02242CE0) --------------------------------------------------------
uint *__fastcall Function_2242ce0(int a1, char *a2, char *a3, int a4, int a5)
{
  char *v5;
  char *v6;
  int v7;
  uint *result;
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
  void (*v23)(void);
  int v24;
  int v25;
  int v26;
  int v27;
  char v28;
  char v29;
  char v30;
  char v31;
  int (__fastcall *v32)(int, char *, int);
  int v33;
  int v34;
  char v35;
  int v36;
  void (*v37)(void);
  int v38;
  char v39;
  char v40;
  int v41;
  int v42;
  int v43;

  v43 = a4;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( !dword_225B6C0[7] || (result = *(uint **)(dword_225B6C0[7] + 4), result != (uint *)5) )
  {
    Function_223ba6c((int)&v30, a2);
    Function_223ba6c((int)&v31, "SERVER");
    v10 = Function_224154c(&v30, &v31, 6, v9);
    Function_223badc(&v31);
    result = Function_223badc(&v30);
    if ( v10 )
    {
      if ( v7 == 3 )
      {
        Function_223ba6c((int)&v35, v5);
        v25 = Function_22474f4(dword_225B6C0[7], &v35);
        Function_223badc(&v35);
        result = (uint *)-1;
        if ( v25 != -1 )
        {
          v26 = *(uint *)(dword_225B6C0[7] + 104);
          v27 = *(uint *)(dword_225B6C0[7] + 108);
          v32 = *(int (__fastcall **)(int, char *, int))(dword_225B6C0[7] + 100);
          v33 = v26;
          v34 = v27;
          result = (uint *)v32(v25, v6, a5);
        }
      }
    }
    else
    {
      Function_223ba6c((int)&v28, v6);
      Function_223ba6c((int)&v29, "Excess Flood");
      v12 = Function_224154c(&v28, &v29, 12, v11);
      Function_223badc(&v29);
      result = Function_223badc(&v28);
      if ( !v12 )
      {
        Function_223ba6c((int)&v40, v6);
        Function_223ba6c((int)&v39, " :");
        Function_2242f08(&v41, &v40, &v39, 0);
        Function_223badc(&v39);
        Function_223badc(&v40);
        if ( v42 )
        {
          v16 = 12 * (v42 - 1);
          v17 = v41 + v16;
          if ( *(uint *)(v41 + v16) & 1 )
            v18 = *(uint *)(v17 + 8);
          else
            v18 = v17 + 1;
          Function_20dae0c(v18, v17, v16, v15);
          if ( v22 )
          {
            v23 = *(void (**)(void))(dword_225B6C0[7] + 104);
            v24 = *(uint *)(dword_225B6C0[7] + 108);
            v36 = *(uint *)(dword_225B6C0[7] + 100);
            v37 = v23;
            v38 = v24;
            v23();
          }
          result = Function_223b578(&v41, v19, v20, v21);
        }
        else
        {
          result = Function_223b578(&v41, v13, v14, v15);
        }
      }
    }
  }
  return result;
}

//----- (02242F08) --------------------------------------------------------
uint *__fastcall Function_2242f08(uint *a1, uint *a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int *v6;
  uint v7;
  uint *v8;
  int v9;
  uint v10;
  int v11;
  uint v12;
  uint v13;
  uint *v14;
  int v15;
  int v17;
  int v18;
  char v19;
  char v20;
  char v21;
  char v22;
  char v23;
  char v24;
  int v25;
  uint v26;
  int v27;

  v27 = a4;
  v4 = a1;
  *a1 = 0;
  a1[1] = 0;
  v17 = a3;
  v18 = a4;
  a1[2] = 0;
  v5 = 1;
  Function_223b938(&v25, a2);
  v6 = &v17 - 1;
  while ( v5 != v18 )
  {
    v11 = Function_2246150(&v25, v17, 0);
    if ( v11 == -1 )
      break;
    if ( v11 )
    {
      Function_223a594();
      v22 = 0;
      v7 = v4[1];
      if ( v7 >= v4[2] )
      {
        v21 = 0;
        *(uchar *)v6 = 0;
        v9 = *v6;
        Function_223b548((int)v4, (int)&v24);
      }
      else
      {
        v8 = (uint *)(*v4 + 12 * v7);
        if ( v8 )
          Function_223b938(v8, &v24);
        ++v4[1];
      }
      Function_223badc(&v24);
      ++v5;
    }
    Function_223a594();
    Function_223bc5c(&v25, &v23, v10);
    Function_223badc(&v23);
  }
  if ( v25 & 1 )
    v12 = v26;
  else
    v12 = (uint)(uchar)v25 << 24 >> 25;
  if ( v12 )
  {
    v20 = 0;
    v13 = v4[1];
    if ( v13 >= v4[2] )
    {
      v19 = 0;
      *((uchar *)&v17 - 4) = 0;
      v15 = *(&v17 - 1);
      Function_223b548((int)v4, (int)&v25);
    }
    else
    {
      v14 = (uint *)(*v4 + 12 * v13);
      if ( v14 )
        Function_223b938(v14, &v25);
      ++v4[1];
    }
  }
  return Function_223badc(&v25);
}

//----- (022430D0) --------------------------------------------------------
int Function_22430d0()
{
  int result;

  result = dword_225B6C0[7];
  if ( dword_225B6C0[7] )
    result = *(uint *)(dword_225B6C0[7] + 4);
  return result;
}

//----- (022430EC) --------------------------------------------------------
uint *__fastcall Function_22430ec(int a1, char *a2, char *a3, int a4, uint *a5)
{
  char *v5;
  int v6;
  uint *result;
  int v8;
  int v9;
  char *v10;
  int v11;
  char *v12;
  char v13;
  char v14;
  char v15;
  int v16;

  v16 = a4;
  v5 = a2;
  v6 = a4;
  if ( !dword_225B6C0[7] || (result = *(uint **)(dword_225B6C0[7] + 4), result != (uint *)5) )
  {
    result = a5;
    if ( a5 == (uint *)3 )
    {
      Function_223ba6c((int)&v15, a3);
      v8 = Function_22474f4(dword_225B6C0[7], &v15);
      Function_223badc(&v15);
      Function_223ba6c((int)&v14, v5);
      v9 = Function_2246b38(dword_225B6C0[7], &v14);
      Function_223badc(&v14);
      Function_223ba6c((int)&v13, v5);
      Function_22467d4(&v11, dword_225B6C0[7], &v13);
      if ( v11 & 1 )
        v10 = v12;
      else
        v10 = (char *)&v11 + 1;
      (*(void (__fastcall **)(char *, int, int, uint))(v9 + 8))(v10, v8, v6, *(uint *)(v9 + 20));
      Function_223badc(&v11);
      result = Function_223badc(&v13);
    }
  }
  return result;
}

//----- (022431E0) --------------------------------------------------------
uint *__fastcall Function_22431e0(int a1, char *a2)
{
  uint *result;
  char v3;

  if ( !dword_225B6C0[7] || (result = *(uint **)(dword_225B6C0[7] + 4), result != (uint *)5) )
  {
    Function_223ba6c((int)&v3, a2);
    Function_2247258(dword_225B6C0[7], &v3);
    result = Function_223badc(&v3);
  }
  return result;
}

//----- (02243234) --------------------------------------------------------
uint *__fastcall Function_2243234(int a1, char *a2, char *a3, int a4)
{
  char *v4;
  char *v5;
  uint *result;
  int v7;
  int v8;
  int v9;
  int v10;
  char *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  char *v16;
  int v17;
  char *v18;
  char v19;
  char v20;
  char v21;
  char v22;
  char v23;
  char v24;
  int v25;
  char *v26;
  char v27;
  char v28;
  char v29;
  char v30;
  char v31;
  char v32;
  int v33;

  v33 = a4;
  v4 = a2;
  v5 = a3;
  if ( !dword_225B6C0[7] || (result = *(uint **)(dword_225B6C0[7] + 4), result != (uint *)5) )
  {
    Function_223ba6c((int)&v31, a2);
    v7 = Function_2247704(dword_225B6C0[7], &v31);
    Function_223badc(&v31);
    if ( !v7 || (result = (uint *)Function_2254e58(*(uint *)dword_225B6C0[7], v4), (int)result <= v7) )
    {
      Function_223ba6c((int)&v30, v5);
      v8 = Function_2246928(&v30);
      Function_2247578(&v32, dword_225B6C0[7], v8);
      Function_223badc(&v30);
      Function_223ba6c((int)&v29, v4);
      v9 = Function_224717c(dword_225B6C0[7], &v32, &v29);
      Function_223badc(&v29);
      if ( v9 )
      {
        Function_223ba6c((int)&v28, v4);
        v10 = Function_2246b38(dword_225B6C0[7], &v28);
        Function_223badc(&v28);
        Function_223ba6c((int)&v27, v4);
        Function_22467d4(&v25, dword_225B6C0[7], &v27);
        Function_223ba6c((int)&v24, v5);
        if ( v25 & 1 )
          v11 = v26;
        else
          v11 = (char *)&v25 + 1;
        v12 = Function_2246928(&v24);
        (*(void (__fastcall **)(char *, int, uint))(v10 + 4))(v11, v12, *(uint *)(v10 + 20));
        Function_223badc(&v24);
        Function_223badc(&v25);
        Function_223badc(&v27);
      }
      Function_223ba6c((int)&v23, v5);
      Function_223ba6c((int)&v22, v4);
      v13 = Function_2246c2c(dword_225B6C0[7], &v23, &v22);
      Function_223badc(&v22);
      Function_223badc(&v23);
      if ( v13 == -1 )
      {
        result = Function_223badc(&v32);
      }
      else
      {
        Function_223ba6c((int)&v21, v4);
        v14 = Function_2247690(dword_225B6C0[7], &v21);
        Function_223badc(&v21);
        if ( v14 )
        {
          Function_223ba6c((int)&v20, v4);
          v15 = Function_2246b38(dword_225B6C0[7], &v20);
          Function_223badc(&v20);
          Function_223ba6c((int)&v19, v4);
          Function_22467d4(&v17, dword_225B6C0[7], &v19);
          if ( v17 & 1 )
            v16 = v18;
          else
            v16 = (char *)&v17 + 1;
          (*(void (__fastcall **)(char *, int, uint))v15)(v16, v13, *(uint *)(v15 + 20));
          Function_223badc(&v17);
          Function_223badc(&v19);
        }
        result = Function_223badc(&v32);
      }
    }
  }
  return result;
}

//----- (022434D0) --------------------------------------------------------
uint *__fastcall Function_22434d0(int a1, char *a2, char *a3, int a4)
{
  char *v4;
  char *v5;
  uint *result;
  int v7;
  int v8;
  char *v9;
  char v10;
  char v11;
  int v12;
  char *v13;
  char v14;
  char v15;
  char v16;
  int v17;

  v17 = a4;
  v4 = a2;
  v5 = a3;
  if ( !dword_225B6C0[7] || (result = *(uint **)(dword_225B6C0[7] + 4), result != (uint *)5) )
  {
    Function_223ba6c((int)&v16, a3);
    v7 = Function_22474f4(dword_225B6C0[7], &v16);
    Function_223badc(&v16);
    result = (uint *)-1;
    if ( v7 != -1 )
    {
      Function_223ba6c((int)&v15, v4);
      v8 = Function_2246b38(dword_225B6C0[7], &v15);
      Function_223badc(&v15);
      Function_223ba6c((int)&v14, v4);
      Function_22467d4(&v12, dword_225B6C0[7], &v14);
      if ( v12 & 1 )
        v9 = v13;
      else
        v9 = (char *)&v12 + 1;
      (*(void (__fastcall **)(char *, int, uint))(v8 + 4))(v9, v7, *(uint *)(v8 + 20));
      Function_223badc(&v12);
      Function_223badc(&v14);
      Function_223ba6c((int)&v11, v5);
      Function_223ba6c((int)&v10, v4);
      Function_224717c(dword_225B6C0[7], &v11, &v10);
      Function_223badc(&v10);
      result = Function_223badc(&v11);
    }
  }
  return result;
}

//----- (022435FC) --------------------------------------------------------
uint *__fastcall Function_22435fc(int a1, int a2, char *a3, char *a4)
{
  char *v4;
  uint *result;
  char v6;
  char v7;

  v4 = a4;
  if ( !dword_225B6C0[7] || (result = *(uint **)(dword_225B6C0[7] + 4), result != (uint *)5) )
  {
    Function_223ba6c((int)&v7, a3);
    Function_223ba6c((int)&v6, v4);
    Function_22475dc(dword_225B6C0[7], &v7, &v6);
    Function_223badc(&v6);
    result = Function_223badc(&v7);
  }
  return result;
}

//----- (02243670) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x22436D0 for case 0"

//----- (022436C0) --------------------------------------------------------
void Function_22436c0()
{
  JUMPOUT(&loc_22436D0);
}

//----- (022436C4) --------------------------------------------------------
void Function_22436c4()
{
  JUMPOUT(&loc_22436E0);
}

//----- (022436C8) --------------------------------------------------------
void Function_22436c8()
{
  JUMPOUT(&loc_22436F0);
}

//----- (022436CC) --------------------------------------------------------
void Function_22436cc()
{
  char v0;
  int v1;

  Function_22419dc(&v0);
  Function_223badc(&v0);
  JUMPOUT(__CS__, v1);
}

//----- (02243744) --------------------------------------------------------
uint *__fastcall Function_2243744(int a1, char *a2, int a3, int a4)
{
  char *v4;
  int v5;
  uint *result;
  int v7;
  char *v8;
  int v9;
  char *v10;
  char v11;
  char v12;
  int v13;

  v13 = a4;
  v4 = a2;
  v5 = a3;
  if ( !dword_225B6C0[7] || (result = *(uint **)(dword_225B6C0[7] + 4), result != (uint *)5) )
  {
    Function_223ba6c((int)&v12, a2);
    v7 = Function_2246b38(dword_225B6C0[7], &v12);
    Function_223badc(&v12);
    Function_223ba6c((int)&v11, v4);
    Function_22467d4(&v9, dword_225B6C0[7], &v11);
    if ( v9 & 1 )
      v8 = v10;
    else
      v8 = (char *)&v9 + 1;
    (*(void (__fastcall **)(char *, int, uint))(v7 + 16))(v8, v5, *(uint *)(v7 + 20));
    Function_223badc(&v9);
    result = Function_223badc(&v11);
  }
  return result;
}

//----- (022437FC) --------------------------------------------------------
int Function_22437fc()
{
  int result;

  result = dword_225B6C0[7];
  if ( dword_225B6C0[7] )
    result = *(uint *)(dword_225B6C0[7] + 4);
  return result;
}

//----- (02243818) --------------------------------------------------------
int Function_2243818()
{
  int result;

  result = dword_225B6C0[7];
  if ( dword_225B6C0[7] )
    result = *(uint *)(dword_225B6C0[7] + 4);
  return result;
}

//----- (02243834) --------------------------------------------------------
int __fastcall Function_2243834(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;

  v7 = a4;
  v4 = a2;
  if ( !dword_225B6C0[7] || (result = *(uint *)(dword_225B6C0[7] + 4), result != 5) )
  {
    v6 = 0;
    Function_2236ca0(dword_225B6C0[7] + 156, (int)&v6, 0, dword_225B6C0[7]);
    if ( v4 )
    {
      result = *(uint *)(dword_225B6C0[7] + 4);
      if ( result != 5 )
      {
        result = 2;
        *(uint *)(dword_225B6C0[7] + 4) = 2;
      }
    }
    else
    {
      *(uint *)(dword_225B6C0[7] + 88) = 3;
      *(uint *)(dword_225B6C0[7] + 4) = 5;
      result = dword_225B6C0[7];
      *(uint *)(dword_225B6C0[7] + 96) = 1;
    }
  }
  return result;
}

//----- (022438CC) --------------------------------------------------------
uint *__fastcall Function_22438cc(int a1, int a2, uchar *a3, int a4)
{
  uchar *v4;
  uint *result;
  char *v6;
  int v7;
  char *v8;
  int v9;

  v9 = a4;
  v4 = a3;
  if ( !dword_225B6C0[7] || (result = *(uint **)(dword_225B6C0[7] + 4), result != (uint *)5) )
  {
    Function_2243934(&v7);
    if ( v7 & 1 )
      v6 = v8;
    else
      v6 = (char *)&v7 + 1;
    strncpy(v4, v6, 127);
    result = Function_223badc(&v7);
  }
  return result;
}

//----- (02243934) --------------------------------------------------------
uint *__fastcall Function_2243934(uint *a1, int a2)
{
  return Function_223b938(a1, (uint *)(a2 + 24));
}

//----- (02243944) --------------------------------------------------------
uint *__fastcall Function_2243944(int a1, int a2)
{
  int v2;
  uint *result;
  uint v4;
  char *v5;
  uint v6;
  char *v7;
  uint v8;
  char *v9;
  uint v10;
  char *v11;
  int v12;
  char *v13;
  char v14;
  int v15;
  char *v16;
  char v17;
  int v18;
  char *v19;
  char v20;
  int v21;
  char *v22;
  char v23;

  v2 = a1;
  if ( !dword_225B6C0[7] || (result = *(uint **)(dword_225B6C0[7] + 4), result != (uint *)5) )
  {
    if ( a2 == 1 )
    {
      Function_22468dc(&v23, *(uint *)(dword_225B6C0[7] + 8));
      Function_223bc5c((uint *)(dword_225B6C0[7] + 12), &v23, v4);
      Function_223badc(&v23);
      Function_2243b64(&v21, dword_225B6C0[7]);
      if ( v21 & 1 )
        v5 = v22;
      else
        v5 = (char *)&v21 + 1;
      Function_2254258(v2, v5);
      result = Function_223badc(&v21);
    }
    else if ( a2 == 2 )
    {
      Function_22468dc(&v20, *(uint *)(dword_225B6C0[7] + 8));
      Function_223bc5c((uint *)(dword_225B6C0[7] + 12), &v20, v6);
      Function_223badc(&v20);
      Function_2243b64(&v18, dword_225B6C0[7]);
      if ( v18 & 1 )
        v7 = v19;
      else
        v7 = (char *)&v18 + 1;
      Function_2254258(v2, v7);
      result = Function_223badc(&v18);
    }
    else
    {
      result = (uint *)(a2 - 3);
      if ( (uint)(a2 - 3) > 1 )
      {
        if ( a2 != 5 && a2 == 6 )
        {
          Function_22468dc(&v14, *(uint *)(dword_225B6C0[7] + 8));
          Function_223bc5c((uint *)(dword_225B6C0[7] + 12), &v14, v10);
          Function_223badc(&v14);
          Function_2243b64(&v12, dword_225B6C0[7]);
          if ( v12 & 1 )
            v11 = v13;
          else
            v11 = (char *)&v12 + 1;
          Function_2254258(v2, v11);
          result = Function_223badc(&v12);
        }
      }
      else
      {
        Function_22468dc(&v17, *(uint *)(dword_225B6C0[7] + 8));
        Function_223bc5c((uint *)(dword_225B6C0[7] + 12), &v17, v8);
        Function_223badc(&v17);
        Function_2243b64(&v15, dword_225B6C0[7]);
        if ( v15 & 1 )
          v9 = v16;
        else
          v9 = (char *)&v15 + 1;
        Function_2254320(v2, 2, v9, &dword_2259204);
        result = Function_223badc(&v15);
      }
    }
  }
  return result;
}

//----- (02243B64) --------------------------------------------------------
uint *__fastcall Function_2243b64(uint *a1, int a2)
{
  return Function_223b938(a1, (uint *)(a2 + 12));
}

//----- (02243B74) --------------------------------------------------------
uint *__fastcall Function_2243b74(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7;
  int v8;
  uint *result;
  uint *v10;
  bool v11;
  void (__fastcall *v12)(int, int, int, int, int, int);
  int v13;
  int v14;
  int (***v15)();
  int v16;
  int (**v17)();
  int v18;
  int v19;
  char v20;
  int v21;

  v21 = a4;
  v7 = a2;
  v8 = a3;
  if ( !dword_225B6C0[7] || (result = *(uint **)(dword_225B6C0[7] + 4), result != (uint *)5) )
  {
    Function_224680c(&v20);
    v17 = off_2259138;
    v18 = a7;
    v19 = 0;
    v15 = &v17;
    Function_2243c94(&v16, dword_225B6C0[7] + 144, &v15);
    if ( v16 == dword_225B6C0[7] + 148 )
      v10 = 0;
    else
      v10 = *(uint **)(v16 + 12);
    v11 = v7 == 1;
    if ( v7 == 1 )
      v7 = 1;
    v12 = (void (__fastcall *)(int, int, int, int, int, int))v10[3];
    if ( !v11 )
      v7 = 0;
    v13 = Function_2243c7c(&v20);
    v14 = (*(int (**)(void))(*v10 + 12))();
    v12(v7, v8, v13, a5, a6, v14);
    Function_224640c(dword_225B6C0[7] + 144, a7);
    result = Function_223b5d0(&v20);
  }
  return result;
}

//----- (02243C74) --------------------------------------------------------
int __fastcall Function_2243c74(int a1)
{
  return *(uint *)(a1 + 8);
}

//----- (02243C7C) --------------------------------------------------------
int __fastcall Function_2243c7c(int *a1)
{
  int result;

  if ( a1[1] )
    result = *a1;
  else
    result = 0;
  return result;
}

//----- (02243C90) --------------------------------------------------------
void Function_2243c90()
{
  ;
}

//----- (02243C94) --------------------------------------------------------
int __fastcall Function_2243c94(int *a1, int a2, int a3)
{
  int v3;
  int v4;
  int *v5;
  int v6;
  int result;

  v3 = a2;
  v4 = a3;
  v5 = a1;
  v6 = *(uint *)(a2 + 4);
  result = Function_2243cf0();
  if ( result != v3 + 4 && *(uint *)(*(uint *)v4 + 4) >= *(uint *)(*(uint *)(result + 12) + 4) )
  {
    *v5 = result;
  }
  else
  {
    result = v3 + 4;
    *v5 = v3 + 4;
  }
  return result;
}

//----- (02243CF0) --------------------------------------------------------
uint *__fastcall Function_2243cf0(int a1, int a2, uint *a3, uint *a4)
{
  uint v4;

  if ( a3 )
  {
    v4 = *(uint *)(*(uint *)a2 + 4);
    do
    {
      if ( *(uint *)(a3[3] + 4) < v4 )
      {
        a3 = (uint *)a3[1];
      }
      else
      {
        a4 = a3;
        a3 = (uint *)*a3;
      }
    }
    while ( a3 );
  }
  return a4;
}

//----- (02243D28) --------------------------------------------------------
void Function_2243d28()
{
  ;
}

//----- (02243D30) --------------------------------------------------------
uint *__fastcall Function_2243d30(int a1, int a2, char *a3, int a4, int a5, int a6, int a7)
{
  int v7;
  int v8;
  char *v9;
  int v10;
  uint *result;
  int v12;
  uint *v13;
  int v14;
  char *v15;
  void (__fastcall *v16)(int, char *, int, int, int);
  int v17;
  int v18;
  int v19;
  char v20;
  int (***v21)();
  int v22;
  int (**v23)();
  int v24;
  int v25;
  int v26;
  char *v27;
  char v28;
  int v29;
  char v30;
  int v31;
  int v32;
  int v33;

  v8 = a2;
  v9 = a3;
  v10 = a4;
  if ( !dword_225B6C0[7] || (result = *(uint **)(dword_225B6C0[7] + 4), result != (uint *)5) )
  {
    v31 = 0;
    v32 = 0;
    v33 = 0;
    if ( a4 )
    {
      Function_223ba6c((int)&v30, a3);
      Function_2246df0(&v29, dword_225B6C0[7], v10, a5, &v30);
      if ( &v31 != &v29 )
      {
        v20 = 0;
        *((uchar *)&v19 - 4) = 0;
        v12 = *(&v19 - 1);
        Function_2243ef0();
      }
      Function_223b5d0(&v29);
      Function_223badc(&v30);
    }
    v23 = off_2259138;
    v24 = a7;
    v25 = 0;
    v21 = &v23;
    Function_2243c94(&v22, dword_225B6C0[7] + 144, (int)&v21);
    if ( v22 == dword_225B6C0[7] + 148 )
      v13 = 0;
    else
      v13 = *(uint **)(v22 + 12);
    Function_223ba6c((int)&v28, v9);
    Function_22467d4(&v26, dword_225B6C0[7], &v28);
    v14 = v32;
    if ( v26 & 1 )
      v15 = v27;
    else
      v15 = (char *)&v26 + 1;
    if ( v8 == 1 )
      v7 = 1;
    v16 = (void (__fastcall *)(int, char *, int, int, int))v13[3];
    if ( v8 != 1 )
      v7 = 0;
    v17 = Function_22364b0(&v31);
    v18 = (*(int (**)(void))(*v13 + 12))();
    v16(v7, v15, v14, v17, v18);
    Function_223badc(&v26);
    Function_223badc(&v28);
    Function_224640c(dword_225B6C0[7] + 144, a7);
    result = Function_223b5d0(&v31);
  }
  return result;
}

//----- (02243EF0) --------------------------------------------------------
char *__fastcall Function_2243ef0(int a1, char *a2, int a3)
{
  char *v3;
  int v4;
  int v5;
  uint v6;
  int v7;
  char *result;

  v3 = a2;
  v4 = a3;
  v5 = a1;
  v6 = (a3 - (int)a2) / 4;
  if ( *(uint *)(a1 + 8) < v6 )
  {
    v7 = Function_224293c();
    Function_22460e0(v5, v6, v7);
  }
  result = Function_20d50d8(*(char **)v5, v3, 4 * ((v4 - (int)v3) / 4));
  *(uint *)(v5 + 4) = v6;
  return result;
}

//----- (02243F64) --------------------------------------------------------
uint *__fastcall Function_2243f64(int a1, int a2, char *a3, int a4, int a5, int a6, int a7)
{
  int v7;
  int v8;
  char *v9;
  int v10;
  uint *result;
  uint *v12;
  void (__fastcall *v13)(int, uint, char *, int);
  char *v14;
  int v15;
  char *v16;
  int (***v17)();
  int v18;
  int (**v19)();
  int v20;
  int v21;
  int v22;
  char *v23;
  char v24;
  int v25;
  char *v26;
  char v27;
  char v28;
  char v29;
  char v30;
  int v31;

  v31 = a4;
  v8 = a2;
  v9 = a3;
  v10 = a4;
  if ( !dword_225B6C0[7] || (result = *(uint **)(dword_225B6C0[7] + 4), result != (uint *)5) )
  {
    if ( a2 == 1 )
    {
      Function_223ba6c((int)&v30, a3);
      Function_2246df0(&v29, dword_225B6C0[7], v10, a5, &v30);
      Function_223b5d0(&v29);
      Function_223badc(&v30);
    }
    Function_223ba6c((int)&v28, v9);
    Function_22476c8(dword_225B6C0[7], &v28);
    Function_223badc(&v28);
    v19 = off_2259138;
    v21 = 0;
    v17 = &v19;
    v20 = a7;
    Function_2243c94(&v18, dword_225B6C0[7] + 144, (int)&v17);
    if ( v18 == dword_225B6C0[7] + 148 )
      v12 = 0;
    else
      v12 = *(uint **)(v18 + 12);
    Function_223ba6c((int)&v27, v9);
    Function_22467d4(&v25, dword_225B6C0[7], &v27);
    v13 = (void (__fastcall *)(int, uint, char *, int))v12[3];
    if ( v25 & 1 )
      v14 = v26;
    else
      v14 = (char *)&v25 + 1;
    if ( v8 == 1 )
      v7 = 1;
    if ( v8 != 1 )
      v7 = 0;
    v15 = (*(int (**)(void))(*v12 + 12))();
    v13(v7, 0, v14, v15);
    Function_223badc(&v25);
    Function_223badc(&v27);
    result = (uint *)Function_224640c(dword_225B6C0[7] + 144, a7);
    if ( !v8 )
    {
      Function_223ba6c((int)&v24, v9);
      Function_22467d4(&v22, dword_225B6C0[7], &v24);
      if ( v22 & 1 )
        v16 = v23;
      else
        v16 = (char *)&v22 + 1;
      Function_22451c8(v16);
      Function_223badc(&v22);
      result = Function_223badc(&v24);
    }
  }
  return result;
}

//----- (0224413C) --------------------------------------------------------
int __fastcall Function_224413c(int a1, int a2, int a3, char *a4, int a5)
{
  int v5;
  int v6;
  int v7;
  char *v8;
  int result;
  int v10;
  int v11;
  char *v12;
  uint *v13;
  char *v14;
  int (*v15)(void);
  void (__fastcall *v16)(uint, int, char *, int);
  int v17;
  int (***v18)();
  int v19;
  int (**v20)();
  int v21;
  int v22;
  int v23;
  char *v24;
  char v25;
  int v26;
  char *v27;
  char v28;
  char v29;
  char v30;
  char v31;
  char *v32;

  v32 = a4;
  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  if ( !dword_225B6C0[7] || (result = *(uint *)(dword_225B6C0[7] + 4), result != 5) )
  {
    if ( a2 == 1 )
    {
      Function_223ba6c((int)&v31, a4);
      v10 = Function_2247704(dword_225B6C0[7], &v31);
      Function_223badc(&v31);
      if ( v10 )
      {
        v11 = Function_2254e58(*(uint *)dword_225B6C0[7], v8);
        if ( v10 == -1 )
        {
          v6 = 0;
          v7 = 7;
        }
        else if ( v11 <= v10 && v11 != -1 )
        {
          Function_2254d68(*(uint *)dword_225B6C0[7], v8, v10);
        }
        else
        {
          v6 = 0;
          v7 = 2;
        }
      }
    }
    if ( v6 == 1 )
    {
      Function_2243b64(&v30, dword_225B6C0[7]);
      Function_223ba6c((int)&v29, v8);
      Function_2246c2c(dword_225B6C0[7], &v30, &v29);
      Function_223badc(&v29);
      Function_223badc(&v30);
      result = Function_2255104(v5, v8, Function_2243f64, a5, 0);
    }
    else
    {
      Function_223ba6c((int)&v28, v8);
      Function_22467d4(&v26, dword_225B6C0[7], &v28);
      if ( v26 & 1 )
        v12 = v27;
      else
        v12 = (char *)&v26 + 1;
      Function_22451c8(v12);
      Function_223badc(&v26);
      Function_223badc(&v28);
      v20 = off_2259138;
      v22 = 0;
      v18 = &v20;
      v21 = a5;
      Function_2243c94(&v19, dword_225B6C0[7] + 144, (int)&v18);
      if ( v19 == dword_225B6C0[7] + 148 )
        v13 = 0;
      else
        v13 = *(uint **)(v19 + 12);
      Function_223ba6c((int)&v25, v8);
      Function_22467d4(&v23, dword_225B6C0[7], &v25);
      if ( v23 & 1 )
        v14 = v24;
      else
        v14 = (char *)&v23 + 1;
      v15 = *(int (**)(void))(*v13 + 12);
      v16 = (void (__fastcall *)(uint, int, char *, int))v13[3];
      v17 = v15();
      v16(0, v7, v14, v17);
      Function_223badc(&v23);
      Function_223badc(&v25);
      result = Function_224640c(dword_225B6C0[7] + 144, a5);
    }
  }
  return result;
}

//----- (0224439C) --------------------------------------------------------
int __fastcall Function_224439c(int a1, int a2, char *a3, char *a4, int a5, int *a6, int *a7, int a8)
{
  int v8;
  int v9;
  int result;
  char *v11;
  int v12;
  int v13;
  uint *v14;
  int v15;
  char *v16;
  bool v17;
  void (__fastcall *v18)(int, char *, int, int, int, int);
  int v19;
  int (***v20)();
  int v21;
  int (**v22)();
  int v23;
  int v24;
  int v25;
  char *v26;
  char v27;
  char v28;
  char *v29;

  v29 = a4;
  v9 = a2;
  result = dword_225B6C0[7];
  v11 = a3;
  if ( !dword_225B6C0[7] || (result = *(uint *)(dword_225B6C0[7] + 4), result != 5) )
  {
    if ( a3 )
    {
      if ( a4 )
      {
        Function_223ba6c((int)&v28, a4);
        v12 = Function_22474f4(dword_225B6C0[7], &v28);
        Function_223badc(&v28);
      }
      else
      {
        v12 = -1;
      }
      v22 = off_2259138;
      v23 = a8;
      v24 = 0;
      v20 = &v22;
      Function_2243c94(&v21, dword_225B6C0[7] + 144, (int)&v20);
      v13 = 0;
      if ( v21 == dword_225B6C0[7] + 148 )
        v14 = 0;
      else
        v14 = *(uint **)(v21 + 12);
      v15 = 0;
      if ( v9 == 1 && a5 > 0 )
      {
        v13 = *a6;
        v15 = *a7;
      }
      Function_223ba6c((int)&v27, v11);
      Function_22467d4(&v25, dword_225B6C0[7], &v27);
      if ( v25 & 1 )
        v16 = v26;
      else
        v16 = (char *)&v25 + 1;
      v17 = v9 == 1;
      if ( v9 == 1 )
        v8 = 1;
      v18 = (void (__fastcall *)(int, char *, int, int, int, int))v14[3];
      if ( !v17 )
        v8 = 0;
      v19 = (*(int (**)(void))(*v14 + 12))();
      v18(v8, v16, v12, v13, v15, v19);
      Function_223badc(&v25);
      Function_223badc(&v27);
      result = Function_224640c(dword_225B6C0[7] + 144, a8);
    }
  }
  return result;
}

//----- (02244528) --------------------------------------------------------
uint *__fastcall Function_2244528(int a1, char *a2, char *a3, int a4, int a5)
{
  char *v5;
  int v6;
  uint *result;
  int v8;
  int v9;
  char *v10;
  int v11;
  char *v12;
  char v13;
  char v14;
  char v15;

  v5 = a2;
  v6 = a4;
  if ( !dword_225B6C0[7] || (result = *(uint **)(dword_225B6C0[7] + 4), result != (uint *)5) )
  {
    if ( a3 )
    {
      Function_223ba6c((int)&v15, a3);
      v8 = Function_22474f4(dword_225B6C0[7], &v15);
      Function_223badc(&v15);
    }
    else
    {
      v8 = -1;
    }
    Function_223ba6c((int)&v14, v5);
    v9 = Function_2246b38(dword_225B6C0[7], &v14);
    Function_223badc(&v14);
    Function_223ba6c((int)&v13, v5);
    Function_22467d4(&v11, dword_225B6C0[7], &v13);
    if ( v11 & 1 )
      v10 = v12;
    else
      v10 = (char *)&v11 + 1;
    (*(void (__fastcall **)(char *, int, int, int, uint))(v9 + 12))(v10, v8, v6, a5, *(uint *)(v9 + 20));
    Function_223badc(&v11);
    result = Function_223badc(&v13);
  }
  return result;
}

//----- (02244620) --------------------------------------------------------
void __fastcall Function_2244620(int a1, int a2, char *a3, int a4, int a5)
{
  int v5;
  char *v6;
  int v7;
  uint *v8;
  void (__fastcall *v9)(int, char *, int, int);
  char *v10;
  bool v11;
  int v12;
  int (***v13)();
  int v14;
  int (**v15)();
  int v16;
  int v17;
  int v18;
  char *v19;
  char v20;

  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( (!dword_225B6C0[7] || *(uint *)(dword_225B6C0[7] + 4) != 5) && a2 )
  {
    Function_22437fc();
    v15 = off_2259138;
    v16 = a5;
    v17 = 0;
    v13 = &v15;
    Function_2243c94(&v14, dword_225B6C0[7] + 144, (int)&v13);
    if ( v14 == dword_225B6C0[7] + 148 )
      v8 = 0;
    else
      v8 = *(uint **)(v14 + 12);
    Function_223ba6c((int)&v20, v6);
    Function_22467d4(&v18, dword_225B6C0[7], &v20);
    v9 = (void (__fastcall *)(int, char *, int, int))v8[3];
    if ( v18 & 1 )
      v10 = v19;
    else
      v10 = (char *)&v18 + 1;
    v11 = v5 == 1;
    if ( v5 == 1 )
      v5 = 1;
    if ( !v11 )
      v5 = 0;
    v12 = (*(int (**)(void))(*v8 + 12))();
    v9(v5, v10, v7, v12);
    Function_223badc(&v18);
    Function_223badc(&v20);
    Function_224640c(dword_225B6C0[7] + 144, a5);
  }
}

//----- (02244758) --------------------------------------------------------
int Function_2244758()
{
  *(uint *)(dword_225B6C0[7] + 88) = 3;
  *(uint *)(dword_225B6C0[7] + 4) = 5;
  return 0;
}

//----- (0224477C) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x2244948 for case 0"

//----- (02244908) --------------------------------------------------------
void Function_2244908()
{
  JUMPOUT(&loc_2244948);
}

//----- (0224490C) --------------------------------------------------------
void Function_224490c()
{
  JUMPOUT(&loc_2244948);
}

//----- (02244910) --------------------------------------------------------
void Function_2244910()
{
  JUMPOUT(&loc_224491C);
}

//----- (02244914) --------------------------------------------------------
void Function_2244914()
{
  JUMPOUT(&loc_2244948);
}

//----- (02244918) --------------------------------------------------------
void Function_2244918()
{
  int v0;
  int v1;

  v0 = *(uint *)(dword_225B6C0[7] + 4);
  JUMPOUT(__CS__, v1);
}

//----- (02244960) --------------------------------------------------------
int Function_2244960()
{
  int result;

  if ( dword_225B6C0[7] )
    result = *(uint *)(dword_225B6C0[7] + 88);
  else
    result = 0;
  return result;
}

//----- (0224497C) --------------------------------------------------------
int __fastcall Function_224497c(int a1)
{
  return a1 + 42000;
}

//----- (02244988) --------------------------------------------------------
int __fastcall Function_2244988(char *a1)
{
  int v1;
  char *v3;
  int v4;
  int v5;
  char *v6;
  char v7;

  if ( !dword_225B6C0[7] )
    return 0;
  Function_223ba6c((int)&v7, a1);
  Function_22467c4(&v5, dword_225B6C0[7], &v7);
  if ( !(v5 & 1) )
    v3 = (char *)&v5 + 1;
  if ( v5 & 1 )
    v3 = v6;
  v4 = Function_2254f20(*(uint *)dword_225B6C0[7], v3);
  if ( v4 == 1 )
    v1 = 1;
  if ( v4 != 1 )
    v1 = 0;
  Function_223badc(&v5);
  Function_223badc(&v7);
  return v1;
}

//----- (02244A18) --------------------------------------------------------
int __fastcall Function_2244a18(char *a1, char *a2, int a3, int a4, int a5)
{
  char *v5;
  char *v6;
  int v7;
  int v8;
  int v10;
  int v11;
  int v12;
  int v13;
  int (*v14)();
  char *v15;
  char *v16;
  char *v17;
  char *v18;
  int v19;
  int v20;
  char v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int (*v27)();
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
  char v42;
  char v43;
  int v44;
  char *v45;
  int v46;
  int (*v47)();
  int v48;
  char *v49;
  int v50;
  char *v51;
  int v52;
  char *v53;
  char v54;
  char v55;
  char v56;
  char v57;
  int (*v58)();
  int *(__fastcall *v59)(int, int, int, int);
  uint *(__fastcall *v60)(int, char *, char *, int, int);
  int (*v61)();
  int v62;
  char v63;
  char v64;
  char v65;
  int v66;

  v66 = a4;
  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  if ( dword_225B6C0[7] )
    return 4;
  Function_22468dc(&v65, a5);
  Function_223ba6c((int)&v64, "DWCUser");
  Function_223ba6c((int)&v63, "DWCName");
  v10 = 0;
  v11 = 0;
  v12 = Function_2246290(172);
  if ( v12 )
  {
    Function_223ba6c((int)&v57, v6);
    v10 = 1;
    Function_223ba6c((int)&v56, v5);
    v11 = 1;
    v12 = Function_2246588(v12, &v56, &v57, v7, a5, &v65, &v64, &v63, v8);
  }
  dword_225B6C0[7] = v12;
  if ( v11 )
    Function_223badc(&v56);
  if ( v10 )
    Function_223badc(&v57);
  if ( !dword_225B6C0[7] )
  {
    Function_223badc(&v63);
    Function_223badc(&v64);
    Function_223badc(&v65);
    return 1;
  }
  if ( !Function_2246368() )
  {
    v13 = 1;
LABEL_37:
    Function_22463d8();
    if ( dword_225B6C0[7] )
    {
      if ( dword_225B6C0[7] )
      {
        Function_2246754(dword_225B6C0[7]);
        if ( dword_225B6C0[7] )
          ((void (*)(void))dword_21D77C4[0])();
      }
      dword_225B6C0[7] = 0;
    }
    Function_223badc(&v63);
    Function_223badc(&v64);
    Function_223badc(&v65);
    return v13;
  }
  MI_CpuFill8(&v58, 0, 0x14u);
  v14 = Function_2242c08;
  v61 = Function_22430d0;
  v58 = Function_2242c08;
  v59 = Function_2242c24;
  v60 = Function_2242ce0;
  v62 = *(uint *)(v8 + 8);
  Function_2244e68(&v55, dword_225B6C0[7]);
  Function_22379d0((int)&v54, &v55, ".");
  Function_22379d0((int)&v52, &v54, "peerchat.gs.nintendowifi.net");
  Function_2243b64(&v50, dword_225B6C0[7]);
  Function_2244e78(&v48, dword_225B6C0[7]);
  Function_2244e68(&v46, dword_225B6C0[7]);
  Function_2244e88(&v44, dword_225B6C0[7]);
  if ( !(v44 & 1) )
    v15 = (char *)&v44 + 1;
  if ( v44 & 1 )
    v15 = v45;
  if ( !(v46 & 1) )
    v14 = (int (*)())((char *)&v46 + 1);
  if ( v46 & 1 )
    v14 = v47;
  if ( !(v48 & 1) )
    v17 = (char *)&v48 + 1;
  if ( v48 & 1 )
    v17 = v49;
  if ( !(v50 & 1) )
    v16 = (char *)&v50 + 1;
  if ( v50 & 1 )
    v16 = v51;
  if ( v52 & 1 )
    v18 = v53;
  else
    v18 = (char *)&v52 + 1;
  v19 = Function_22541cc(
          v18,
          6667,
          v16,
          v17,
          v14,
          v15,
          &v58,
          Function_2243944,
          Function_22438cc,
          Function_2243834,
          *(uint *)(v8 + 8),
          0);
  Function_223badc(&v44);
  Function_223badc(&v46);
  Function_223badc(&v48);
  Function_223badc(&v50);
  Function_223badc(&v52);
  Function_223badc(&v54);
  Function_223badc(&v55);
  if ( !v19 )
  {
    v13 = 2;
    goto LABEL_37;
  }
  *(uint *)dword_225B6C0[7] = v19;
  if ( *(uint *)(dword_225B6C0[7] + 4) != 5 )
    *(uint *)(dword_225B6C0[7] + 4) = 1;
  ((void (__fastcall *)(char *, char *))dword_21D806C[0])(&v43, &v42);
  v22 = RTC_ConvertDateTimeToSecond((int *)&v43, &v42);
  v23 = v20;
  v24 = 30;
  v25 = 0;
  v26 = dword_225B6C0[7];
  v27 = Function_2244758;
  Function_22369fc(&v28, 0, &v22);
  v35 = v28;
  v36 = v29;
  v37 = v30;
  v38 = v31;
  v39 = v32;
  v41 = v34;
  v40 = v33;
  Function_223aabc((int)&v21, dword_225B6C0[7] + 156, &v35, v32);
  Function_223badc(&v63);
  Function_223badc(&v64);
  Function_223badc(&v65);
  return 0;
}

//----- (02244E68) --------------------------------------------------------
uint *__fastcall Function_2244e68(uint *a1, int a2)
{
  return Function_223b938(a1, (uint *)(a2 + 48));
}

//----- (02244E78) --------------------------------------------------------
uint *__fastcall Function_2244e78(uint *a1, int a2)
{
  return Function_223b938(a1, (uint *)(a2 + 36));
}

//----- (02244E88) --------------------------------------------------------
uint *__fastcall Function_2244e88(uint *a1, int a2)
{
  return Function_223b938(a1, (uint *)(a2 + 60));
}

//----- (02244E98) --------------------------------------------------------
int Function_2244e98()
{
  if ( !dword_225B6C0[7] )
    return 0;
  if ( *(uint *)(dword_225B6C0[7] + 4) == 4 )
    return 0;
  Function_22463d8();
  if ( *(uint *)(dword_225B6C0[7] + 96) )
  {
    Function_22543dc(*(uint *)dword_225B6C0[7]);
    if ( dword_225B6C0[7] )
    {
      if ( dword_225B6C0[7] )
      {
        Function_2246754(dword_225B6C0[7]);
        if ( dword_225B6C0[7] )
          ((void (*)(void))dword_21D77C4[0])();
      }
      dword_225B6C0[7] = 0;
    }
  }
  else
  {
    *(uint *)(dword_225B6C0[7] + 4) = 4;
    Function_22543dc(*(uint *)dword_225B6C0[7]);
  }
  return 0;
}

//----- (02244F44) --------------------------------------------------------
int __fastcall Function_2244f44(char *a1, int a2, int a3, int a4, int a5, int a6)
{
  char *v6;
  int v7;
  int v8;
  int v9;
  uint *v11;
  int v12;
  char *v13;
  char *v14;
  uint *v15;
  char v16;
  int v17;
  char *v18;
  char v19;
  char v20;
  int v21;
  char *v22;
  char v23;
  uint *(__fastcall *v24)(int, char *, char *, int, uint *);
  uint *(__fastcall *v25)(int, char *);
  uint *(__fastcall *v26)(int, char *, char *, int);
  uint *(__fastcall *v27)(int, char *, char *, int);
  uint *(__fastcall *v28)(int, int, char *, char *);
  uint *(__fastcall *v29)(int, char *, int, int);
  int (*v30)();
  int (*v31)();
  int (*v32)();
  uint *(__fastcall *v33)(int, char *, char *, int, int);
  int v34;

  v6 = a1;
  v7 = a2;
  v8 = a3;
  v9 = a4;
  if ( !dword_225B6C0[7] )
    return 4;
  if ( dword_225B6C0[7] && *(uint *)(dword_225B6C0[7] + 4) == 5 )
    return 7;
  if ( dword_225B6C0[7] && *(uint *)(dword_225B6C0[7] + 4) != 3 )
    return 4;
  strlen(a1);
  v11 = (uint *)Function_2246290(16);
  if ( v11 )
  {
    *v11 = off_2259138;
    v11[1] = 0;
    v11[2] = a6;
    v11[1] = dword_225B6C0[8];
    *v11 = off_2259180;
    ++dword_225B6C0[8];
    v11[3] = a5;
  }
  v15 = v11;
  Function_2245f68(&v16, dword_225B6C0[7] + 144, &v15);
  v12 = (*(int (**)(void))(*v15 + 8))();
  Function_223ba6c((int)&v23, v6);
  Function_22467c4(&v21, dword_225B6C0[7], &v23);
  if ( v21 & 1 )
    v13 = v22;
  else
    v13 = (char *)&v21 + 1;
  Function_223ba6c((int)&v20, v13);
  Function_22469c8(dword_225B6C0[7], &v20, v9, v8);
  Function_223badc(&v20);
  Function_223badc(&v21);
  Function_223badc(&v23);
  MI_CpuFill8(&v24, 0, 0x30u);
  v30 = Function_22437fc;
  v24 = Function_22430ec;
  v29 = Function_2243744;
  v25 = Function_22431e0;
  v26 = Function_2243234;
  v27 = Function_22434d0;
  v31 = Function_2243670;
  v32 = Function_2243818;
  v33 = Function_2244528;
  v28 = Function_22435fc;
  v34 = *(uint *)(v9 + 20);
  Function_223ba6c((int)&v19, v6);
  Function_22467c4(&v17, dword_225B6C0[7], &v19);
  if ( v17 & 1 )
    v14 = v18;
  else
    v14 = (char *)&v17 + 1;
  Function_2254584(*(uint *)dword_225B6C0[7], v14, v7, &v24, Function_224413c, v12, 0);
  Function_223badc(&v17);
  Function_223badc(&v19);
  return 0;
}

//----- (022451C0) --------------------------------------------------------
int __fastcall Function_22451c0(int a1)
{
  return *(uint *)(a1 + 4);
}

//----- (022451C8) --------------------------------------------------------
int __fastcall Function_22451c8(char *a1)
{
  char *v1;
  char *v3;
  char v4;
  char v5;
  int v6;
  char *v7;
  char v8;

  v1 = a1;
  if ( !dword_225B6C0[7] )
    return 4;
  if ( dword_225B6C0[7] && *(uint *)(dword_225B6C0[7] + 4) == 5 )
    return 7;
  if ( dword_225B6C0[7] && *(uint *)(dword_225B6C0[7] + 4) != 3 )
    return 4;
  Function_223ba6c((int)&v8, a1);
  Function_22467c4(&v6, dword_225B6C0[7], &v8);
  if ( !(v6 & 1) )
    v3 = (char *)&v6 + 1;
  if ( v6 & 1 )
    v3 = v7;
  Function_22546d4(*(uint *)dword_225B6C0[7], v3, 0);
  Function_223badc(&v6);
  Function_223badc(&v8);
  Function_223ba6c((int)&v5, v1);
  Function_22467c4(&v4, dword_225B6C0[7], &v5);
  Function_2247258(dword_225B6C0[7], &v4);
  Function_223badc(&v4);
  Function_223badc(&v5);
  return 0;
}

//----- (022452D0) --------------------------------------------------------
int __fastcall Function_22452d0(char *a1, char *a2, int a3, int a4)
{
  char *v4;
  char *v5;
  char *v7;
  int v8;
  char *v9;
  char v10;
  int v11;

  v11 = a4;
  v4 = a1;
  v5 = a2;
  if ( !dword_225B6C0[7] )
    return 4;
  if ( dword_225B6C0[7] && *(uint *)(dword_225B6C0[7] + 4) == 5 )
    return 7;
  if ( dword_225B6C0[7] && *(uint *)(dword_225B6C0[7] + 4) != 3 )
    return 4;
  if ( (uint)(strlen(a2) + 1) > 0x190 )
    return 3;
  Function_223ba6c((int)&v10, v4);
  Function_22467c4(&v8, dword_225B6C0[7], &v10);
  if ( !(v8 & 1) )
    v7 = (char *)&v8 + 1;
  if ( v8 & 1 )
    v7 = v9;
  Function_2254798(*(uint *)dword_225B6C0[7], v7, v5, 3);
  Function_223badc(&v8);
  Function_223badc(&v10);
  return 0;
}

//----- (022453BC) --------------------------------------------------------
int __fastcall Function_22453bc(int a1, char *a2, int a3, int a4)
{
  int v4;
  char *v5;
  int result;
  char *v7;
  int v8;
  char *v9;
  int v10;

  v10 = a4;
  v4 = a1;
  v5 = a2;
  if ( !dword_225B6C0[7] )
    return 4;
  if ( dword_225B6C0[7] && *(uint *)(dword_225B6C0[7] + 4) == 5 )
    return 7;
  if ( dword_225B6C0[7] && *(uint *)(dword_225B6C0[7] + 4) != 3 )
    return 4;
  if ( (uint)(strlen(a2) + 1) > 0x190 )
    return 3;
  Function_2247578(&v8, dword_225B6C0[7], v4);
  if ( Function_223beec(&v8, (char *)&dword_2259204) == 0 )
  {
    Function_223badc(&v8);
    result = 3;
  }
  else
  {
    if ( !(v8 & 1) )
      v7 = (char *)&v8 + 1;
    if ( v8 & 1 )
      v7 = v9;
    Function_225524c(*(uint *)dword_225B6C0[7], v7, v5, 3);
    Function_223badc(&v8);
    result = 0;
  }
  return result;
}

//----- (022454C8) --------------------------------------------------------
int Function_22454c8()
{
  return Function_22454cc();
}

//----- (022454CC) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (022456B0) --------------------------------------------------------
int Function_22456b0()
{
  return Function_22456b4();
}

//----- (022456B4) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0224591C) --------------------------------------------------------
int __fastcall Function_224591c(char *a1, int a2, int a3, int a4)
{
  char *v4;
  int v5;
  int v6;
  uint *v8;
  int v9;
  char *v10;
  uint *v11;
  char v12;
  int v13;
  char *v14;
  char v15;
  int v16;

  v16 = a4;
  v4 = a1;
  v5 = a2;
  v6 = a3;
  if ( !dword_225B6C0[7] )
    return 4;
  if ( dword_225B6C0[7] && *(uint *)(dword_225B6C0[7] + 4) == 5 )
    return 7;
  if ( dword_225B6C0[7] && *(uint *)(dword_225B6C0[7] + 4) != 3 )
    return 4;
  v8 = (uint *)Function_2246290(16);
  if ( v8 )
  {
    *v8 = off_2259138;
    v8[1] = 0;
    v8[2] = v6;
    *v8 = off_22591B0;
    v8[1] = dword_225B6C0[8]++;
    v8[3] = v5;
  }
  v11 = v8;
  Function_2245f68(&v12, dword_225B6C0[7] + 144, &v11);
  v9 = (*(int (**)(void))(*v11 + 8))();
  Function_223ba6c((int)&v15, v4);
  Function_22467c4(&v13, dword_225B6C0[7], &v15);
  if ( v13 & 1 )
    v10 = v14;
  else
    v10 = (char *)&v13 + 1;
  Function_225449c(*(uint *)dword_225B6C0[7], v10, Function_2243d28, Function_2243b74, v9, 0);
  Function_223badc(&v13);
  Function_223badc(&v15);
  return 0;
}

//----- (02245A80) --------------------------------------------------------
int __fastcall Function_2245a80(char *a1, int a2, int a3)
{
  int v3;
  char *v4;
  int v5;
  int v6;
  char *v8;
  int v9;
  uint *v10;
  int v11;
  char *v12;
  uint *v13;
  char v14;
  int v15;
  char *v16;
  char v17;
  int v18;
  char *v19;
  char v20;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  if ( !dword_225B6C0[7] )
    return 4;
  if ( dword_225B6C0[7] && *(uint *)(dword_225B6C0[7] + 4) == 5 )
    return 7;
  if ( dword_225B6C0[7] && *(uint *)(dword_225B6C0[7] + 4) != 3 )
    return 4;
  Function_223ba6c((int)&v20, a1);
  Function_22467c4(&v18, dword_225B6C0[7], &v20);
  if ( !(v18 & 1) )
    v8 = (char *)&v18 + 1;
  if ( v18 & 1 )
    v8 = v19;
  v9 = Function_2254f20(*(uint *)dword_225B6C0[7], v8);
  if ( !v9 )
    v3 = 1;
  if ( v9 )
    v3 = 0;
  Function_223badc(&v18);
  Function_223badc(&v20);
  if ( v3 )
    return 5;
  v10 = (uint *)Function_2246290(16);
  if ( v10 )
  {
    *v10 = off_2259138;
    v10[1] = 0;
    v10[2] = v6;
    *v10 = off_2259198;
    v10[1] = dword_225B6C0[8]++;
    v10[3] = v5;
  }
  v13 = v10;
  Function_2245f68(&v14, dword_225B6C0[7] + 144, &v13);
  v11 = (*(int (**)(void))(*v13 + 8))();
  Function_223ba6c((int)&v17, v4);
  Function_22467c4(&v15, dword_225B6C0[7], &v17);
  if ( v15 & 1 )
    v12 = v16;
  else
    v12 = (char *)&v15 + 1;
  Function_2255104(*(uint *)dword_225B6C0[7], v12, Function_2243d30, v11, 0);
  Function_223badc(&v15);
  Function_223badc(&v17);
  return 0;
}

//----- (02245C54) --------------------------------------------------------
int __fastcall Function_2245c54(char *a1, int a2)
{
  int v2;
  char *v4;
  int v5;
  char *v6;
  char v7;

  v2 = a2;
  if ( !dword_225B6C0[7] )
    return 4;
  if ( dword_225B6C0[7] && *(uint *)(dword_225B6C0[7] + 4) == 5 )
    return 7;
  if ( dword_225B6C0[7] && *(uint *)(dword_225B6C0[7] + 4) != 3 )
    return 4;
  Function_223ba6c((int)&v7, a1);
  Function_22467c4(&v5, dword_225B6C0[7], &v7);
  if ( !(v5 & 1) )
    v4 = (char *)&v5 + 1;
  if ( v5 & 1 )
    v4 = v6;
  Function_225497c(*(uint *)dword_225B6C0[7], v4, v2);
  Function_223badc(&v5);
  Function_223badc(&v7);
  return 0;
}

//----- (02245D20) --------------------------------------------------------
int __fastcall Function_2245d20(char *a1, int a2, int a3)
{
  char *v3;
  int v4;
  int v5;
  uint *v7;
  int v8;
  char *v9;
  uint *v10;
  char v11;
  int v12;
  char *v13;
  char v14;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( !dword_225B6C0[7] )
    return 4;
  if ( dword_225B6C0[7] && *(uint *)(dword_225B6C0[7] + 4) == 5 )
    return 7;
  if ( dword_225B6C0[7] && *(uint *)(dword_225B6C0[7] + 4) != 3 )
    return 4;
  v7 = (uint *)Function_2246290(16);
  if ( v7 )
  {
    *v7 = off_2259138;
    v7[1] = 0;
    v7[2] = v5;
    *v7 = off_2259150;
    v7[1] = dword_225B6C0[8]++;
    v7[3] = v4;
  }
  v10 = v7;
  Function_2245f68(&v11, dword_225B6C0[7] + 144, &v10);
  v8 = (*(int (**)(void))(*v10 + 8))();
  Function_223ba6c((int)&v14, v3);
  Function_22467c4(&v12, dword_225B6C0[7], &v14);
  if ( v12 & 1 )
    v9 = v13;
  else
    v9 = (char *)&v12 + 1;
  Function_2254b7c(*(uint *)dword_225B6C0[7], v9, Function_2244620, v8, 0);
  Function_223badc(&v12);
  Function_223badc(&v14);
  return 0;
}

//----- (02245E7C) --------------------------------------------------------
int __fastcall Function_2245e7c(int a1)
{
  int v1;

  v1 = a1;
  if ( a1 )
    ((void (*)(void))dword_21D77C4[0])();
  return v1;
}

//----- (02245EA0) --------------------------------------------------------
void Function_2245ea0()
{
  ;
}

//----- (02245EA4) --------------------------------------------------------
int __fastcall Function_2245ea4(int a1)
{
  int v1;

  v1 = a1;
  if ( a1 )
    ((void (*)(void))dword_21D77C4[0])();
  return v1;
}

//----- (02245EC8) --------------------------------------------------------
void Function_2245ec8()
{
  ;
}

//----- (02245ECC) --------------------------------------------------------
int __fastcall Function_2245ecc(int a1)
{
  int v1;

  v1 = a1;
  if ( a1 )
    ((void (*)(void))dword_21D77C4[0])();
  return v1;
}

//----- (02245EF0) --------------------------------------------------------
void Function_2245ef0()
{
  ;
}

//----- (02245EF4) --------------------------------------------------------
int __fastcall Function_2245ef4(int a1)
{
  int v1;

  v1 = a1;
  if ( a1 )
    ((void (*)(void))dword_21D77C4[0])();
  return v1;
}

//----- (02245F18) --------------------------------------------------------
void Function_2245f18()
{
  ;
}

//----- (02245F1C) --------------------------------------------------------
int __fastcall Function_2245f1c(int a1)
{
  int v1;

  v1 = a1;
  if ( a1 )
    ((void (*)(void))dword_21D77C4[0])();
  return v1;
}

//----- (02245F40) --------------------------------------------------------
void Function_2245f40()
{
  ;
}

//----- (02245F44) --------------------------------------------------------
int __fastcall Function_2245f44(int a1)
{
  int v1;

  v1 = a1;
  if ( a1 )
    ((void (*)(void))dword_21D77C4[0])();
  return v1;
}

//----- (02245F68) --------------------------------------------------------
int __fastcall Function_2245f68(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int result;
  uchar v9;
  uchar v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a3;
  v5 = a2;
  v6 = a1;
  v7 = Function_224621c(a2, a3, &v11, &v10, &v9);
  if ( v11 && *(uint *)(*(uint *)(v11 + 12) + 4) >= *(uint *)(*(uint *)v4 + 4) )
  {
    *(uint *)v6 = v11;
    result = 0;
    *(uchar *)(v6 + 4) = 0;
  }
  else
  {
    *(uint *)v6 = Function_2246008(v5, v7, v10, v9, v4);
    result = 1;
    *(uchar *)(v6 + 4) = 1;
  }
  return result;
}

//----- (02246008) --------------------------------------------------------
uint *__fastcall Function_2246008(uint *a1, int a2, int a3, int a4, uint *a5)
{
  uint *v5;
  uint *v6;
  int v7;
  int v8;
  uint *v9;
  uint *v10;
  int v11;

  v5 = a1;
  v6 = (uint *)a2;
  v7 = a3;
  v8 = a4;
  if ( *a1 == -1 )
  {
    Function_20d7350("tree::insert length error", a2, a3, a4);
    Function_20d3da0();
  }
  v9 = (uint *)Function_2246290(16);
  v10 = v5 + 1;
  if ( v9 != (uint *)-12 )
    v10 = a5;
  if ( v9 != (uint *)-12 )
    v10 = (uint *)*v10;
  if ( v9 != (uint *)-12 )
    v9[3] = v10;
  v9[1] = 0;
  *v9 = 0;
  if ( v9 != (uint *)-8 )
    v9[2] = v6;
  if ( v7 )
    *v6 = v9;
  else
    v6[1] = v9;
  ++*v5;
  v11 = v5[1];
  Function_223add8();
  if ( v8 )
    v5[2] = v9;
  return v9;
}

//----- (022460E0) --------------------------------------------------------
int __fastcall Function_22460e0(int *a1, int a2, uint a3, int a4)
{
  int *v4;
  int v5;
  uint v6;
  int v7;
  int v9;

  v9 = a4;
  v4 = a1;
  v5 = a1[1];
  BYTE2(v9) = 0;
  v6 = a3;
  v4[1] -= v5;
  if ( *a1 )
  {
    if ( *a1 )
      ((void (__cdecl *)(uint))dword_21D77C4[0])(0);
    *v4 = 0;
    v4[2] = 0;
  }
  LOBYTE(v9) = 0;
  *((uchar *)&v9 - 4) = 0;
  v7 = *(&v9 - 1);
  BYTE1(v9) = 0;
  return Function_224290c(v4, v6);
}

//----- (02246150) --------------------------------------------------------
int __fastcall Function_2246150(int a1, uint *a2, int a3)
{
  uint v3;
  int v4;

  if ( *a2 & 1 )
  {
    v3 = a2[1];
    v4 = a2[2];
  }
  else
  {
    v4 = (int)a2 + 1;
    v3 = (uint)*(uchar *)a2 << 24 >> 25;
  }
  return Function_2246184(a1, v4, a3, v3);
}

//----- (02246184) --------------------------------------------------------
int __fastcall Function_2246184(uint *a1, char *a2, uint a3, uint a4)
{
  int v4;
  uint v5;
  char *v6;
  char *v7;
  uint v8;

  if ( *a1 & 1 )
  {
    v4 = a1[2];
    v5 = a1[1];
  }
  else
  {
    v4 = (int)a1 + 1;
    v5 = (uint)*(uchar *)a1 << 24 >> 25;
  }
  if ( a3 >= v5 )
    return -1;
  if ( !a4 )
    return -1;
  v6 = (char *)(v4 + a3);
  if ( v4 + a3 >= v4 + v5 )
    return -1;
  while ( 1 )
  {
    v7 = a2;
    v8 = 0;
    if ( a4 )
      break;
LABEL_11:
    if ( (uint)++v6 >= v4 + v5 )
      return -1;
  }
  while ( *v6 != *v7 )
  {
    ++v8;
    ++v7;
    if ( v8 >= a4 )
      goto LABEL_11;
  }
  return (int)&v6[-v4];
}

//----- (0224621C) --------------------------------------------------------
int __fastcall Function_224621c(int a1, int a2, uint *a3, uchar *a4, uchar *a5)
{
  uint *v5;
  int result;

  *a3 = 0;
  v5 = *(uint **)(a1 + 4);
  *a4 = 1;
  *a5 = 1;
  result = a1 + 4;
  while ( v5 )
  {
    result = (int)v5;
    if ( *(uint *)(*(uint *)a2 + 4) >= *(uint *)(v5[3] + 4) )
    {
      *a3 = v5;
      v5 = (uint *)v5[1];
      *a4 = 0;
      *a5 = 0;
    }
    else
    {
      v5 = (uint *)*v5;
      *a4 = 1;
    }
  }
  return result;
}

//----- (02246290) --------------------------------------------------------
int __fastcall Function_2246290(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( !a1 )
    v1 = 1;
  while ( 1 )
  {
    result = ((int (__fastcall *)(uint, int))dword_21D7780[0])(0, v1);
    if ( result )
      break;
    if ( !dword_225B6C0[9] )
      return 0;
    ((void (*)(void))dword_225B6C0[9])();
  }
  return result;
}

//----- (022462DC) --------------------------------------------------------
int *Function_22462dc()
{
  int *result;

  Function_22543dc(*(uint *)dword_225B6C0[10]);
  result = &dword_225B6C0[9];
  dword_225B6C0[9] = 0;
  return result;
}

//----- (02246308) --------------------------------------------------------
int *Function_2246308()
{
  int *result;

  if ( dword_225B6C0[11] )
  {
    ((void (*)(void))dword_21D77C4[0])();
    dword_225B6C0[11] = 0;
  }
  *(uint *)(dword_225B6C0[10] + 88) = 2;
  result = &dword_225B6C0[9];
  *(uint *)(dword_225B6C0[10] + 4) = 5;
  dword_225B6C0[9] = (int)Function_22462dc;
  return result;
}

//----- (02246368) --------------------------------------------------------
int __fastcall Function_2246368(int a1)
{
  int result;

  dword_225B6C0[10] = a1;
  if ( dword_225B6C0[11] )
  {
    ((void (*)(void))dword_21D77C4[0])();
    dword_225B6C0[11] = 0;
  }
  dword_225B6C0[11] = ((int (__fastcall *)(uint, int))dword_21D7780[0])(0, 1024);
  if ( !dword_225B6C0[11] )
    return 0;
  result = 1;
  dword_225B6C0[9] = (int)Function_2246308;
  return result;
}

//----- (022463D8) --------------------------------------------------------
int *Function_22463d8()
{
  int *result;

  result = &dword_225B6C0[10];
  if ( dword_225B6C0[11] )
  {
    ((void (*)(void))dword_21D77C4[0])();
    result = &dword_225B6C0[10];
    dword_225B6C0[11] = 0;
  }
  return result;
}

//----- (0224640C) --------------------------------------------------------
int __fastcall Function_224640c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v6;
  char v7;
  int v8;
  int (***v9)();
  int v10;
  int (**v11)();
  int v12;
  int v13;
  int v14;

  v14 = a4;
  v4 = a1;
  v12 = a2;
  v11 = off_2259138;
  v13 = 0;
  v9 = &v11;
  Function_2243c94(&v8, a1, (int)&v9);
  v10 = v8;
  if ( v8 == v4 + 4 )
    return 0;
  v6 = *(uint *)(v8 + 12);
  if ( v6 )
    (*(void (**)(void))(*(uint *)v6 + 4))();
  Function_2246518(&v7, v4, v10);
  return 1;
}

//----- (0224649C) --------------------------------------------------------
int __fastcall Function_224649c(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;
  char v7;
  int v8;
  int i;
  int v10;

  v10 = a4;
  v4 = a1;
  result = *(uint *)(a1 + 8);
  for ( i = result; i != v4 + 4; result = i )
  {
    v6 = *(uint *)(result + 12);
    if ( v6 )
      (*(void (**)(void))(*(uint *)v6 + 4))();
    v8 = i;
    Function_223ad6c(&i);
    Function_2246518(&v7, v4, v8);
  }
  return result;
}

//----- (02246518) --------------------------------------------------------
int Function_2246518()
{
  return Function_224651c();
}

//----- (0224651C) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02246588) --------------------------------------------------------
uint *__fastcall Function_2246588(uint *a1, uint *a2, uint *a3, int a4, int a5, uint *a6, uint *a7, uint *a8, uint *a9)
{
  uint *v9;
  uint *v10;
  uint *v11;
  int v12;
  uint v13;
  uint *v14;
  int v15;
  int v16;
  uint v17;
  char v19;
  char v20;
  char v21;
  char v22;
  char v23;
  char v24;
  char v25;
  int *v26;
  int *v27;
  int *v28;
  int *v29;
  int *v30;
  int *v31;
  int *v32;
  int *v33;
  int *v34;
  int *v35;
  int *v36;
  int *v37;

  v9 = a1;
  v10 = a2;
  *a1 = 0;
  a1[1] = 0;
  v11 = a3;
  v12 = a4;
  a1[2] = a5;
  Function_223b938(a1 + 3, a6);
  Function_223b938(v9 + 6, a7);
  Function_223b938(v9 + 9, a8);
  Function_223b938(v9 + 12, v10);
  Function_223b938(v9 + 15, v11);
  v13 = 0;
  do
    v9[v13++ + 18] = 0;
  while ( v13 < 3 );
  v9[21] = 0;
  v9[22] = 0;
  v9[23] = 0;
  v9[24] = 0;
  v14 = v9 + 25;
  v15 = a9[1];
  v16 = a9[2];
  *v14 = *a9;
  v14[1] = v15;
  v14[2] = v16;
  v9[28] = 0;
  v9[29] = 0;
  v9[31] = v9 + 29;
  v9[32] = 0;
  v9[33] = 0;
  v9[35] = v9 + 33;
  v9[36] = 0;
  v9[37] = 0;
  v9[38] = v9 + 37;
  v9[39] = 0;
  v9[40] = 0;
  v9[42] = v9 + 40;
  v26 = &dword_2259268;
  v27 = &dword_2259270;
  v28 = &dword_2259284;
  v29 = &dword_2259288;
  v30 = &dword_225928C;
  v31 = &dword_2259290;
  v32 = &dword_2259294;
  v33 = &dword_225927C;
  v34 = &dword_2259274;
  v35 = &dword_2259278;
  v36 = &dword_2259280;
  v37 = &dword_225926C;
  Function_223ba6c((int)&v25, "#GSP");
  Function_22379d0((int)&v24, &v25, (char *)&dword_2259298);
  Function_2237908((int)&v23, &v24, v9 + 12);
  Function_22379d0((int)&v22, &v23, (char *)&dword_2259298);
  Function_223ba6c((int)&v21, (char *)(&v26)[v12]);
  Function_2237908((int)&v20, &v22, &v21);
  Function_22379d0((int)&v19, &v20, (char *)&dword_2259298);
  Function_223bc5c(v9 + 18, &v19, v17);
  Function_223badc(&v19);
  Function_223badc(&v20);
  Function_223badc(&v21);
  Function_223badc(&v22);
  Function_223badc(&v23);
  Function_223badc(&v24);
  Function_223badc(&v25);
  return v9;
}

//----- (02246754) --------------------------------------------------------
uint *__fastcall Function_2246754(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  Function_223abc4((int)(a1 + 39));
  Function_223ad4c((int)(v1 + 39));
  Function_224649c((int)(v1 + 36), v2, v3, v4);
  Function_224804c(v1 + 36);
  Function_2247994(v1 + 32);
  Function_224802c(v1 + 28);
  Function_223badc(v1 + 18);
  Function_223badc(v1 + 15);
  Function_223badc(v1 + 12);
  Function_223badc(v1 + 9);
  Function_223badc(v1 + 6);
  Function_223badc(v1 + 3);
  return v1;
}

//----- (022467C4) --------------------------------------------------------
int __fastcall Function_22467c4(int a1, int a2, uint *a3)
{
  return Function_2237908(a1, (uint *)(a2 + 72), a3);
}

//----- (022467D4) --------------------------------------------------------
int __fastcall Function_22467d4(int a1, int a2)
{
  int v2;
  uint v3;

  if ( *(uint *)(a2 + 72) & 1 )
    v2 = *(uint *)(a2 + 76);
  else
    v3 = (uint)*(uchar *)(a2 + 72) << 24 >> 25;
  return Function_223a594();
}

//----- (0224680C) --------------------------------------------------------
uint *__fastcall Function_224680c(uint *result, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  char *v9;
  uint v10;
  uint v11;
  int v12;
  char v13;
  char v14;
  uint v15;
  int v16;

  v16 = a4;
  v4 = result;
  v5 = 0;
  *result = 0;
  v6 = a3;
  result[1] = 0;
  v7 = a2;
  v8 = a4;
  result[2] = 0;
  if ( a3 > 0 )
  {
    v9 = &v13 - 4;
    do
    {
      if ( *(uint *)(v7 + 72) & 1 )
        v10 = *(uint *)(v7 + 76);
      else
        v10 = (uint)*(uchar *)(v7 + 72) << 24 >> 25;
      v15 = *(uint *)(v8 + 4 * v5) + v10;
      v13 = 0;
      v11 = v4[1];
      if ( v11 >= v4[2] )
      {
        v14 = 0;
        *v9 = 0;
        v12 = *(uint *)v9;
        result = (uint *)Function_2242818((int)v4, (int)&v15);
      }
      else
      {
        v4[1] = v11 + 1;
        result = (uint *)(*v4 + 4 * (v11 + 1));
        *(result - 1) = v15;
      }
      ++v5;
    }
    while ( v5 < v6 );
  }
  return result;
}

//----- (022468DC) --------------------------------------------------------
int __fastcall Function_22468dc(int a1, int a2)
{
  int v2;
  int v3;
  uint v4;

  v2 = a1;
  v3 = a2;
  v4 = ((int (__cdecl *)(int))dword_21EA840[0])(a1);
  return Function_2236a38(v2, 20, "N_%d_%u", v3, v4 % 0x3E8);
}

//----- (02246928) --------------------------------------------------------
int __fastcall Function_2246928(uint *a1)
{
  uint *v1;
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
  char v12;
  int v13;
  uint v14;

  v1 = a1;
  Function_223ba6c((int)&v12, "_");
  Function_2242f08(&v13, v1, (int)&v12, 0);
  Function_223badc(&v12);
  if ( v14 >= 2 )
  {
    if ( *(uint *)(v13 + 12) & 1 )
      v6 = *(uint *)(v13 + 20);
    else
      v6 = v13 + 13;
    Function_20dae0c(v6, v13, v3, v4);
    v11 = v10;
    if ( v10 )
    {
      Function_223b578(&v13, v7, v8, v9);
      result = v11;
    }
    else
    {
      Function_223b578(&v13, v7, v8, v9);
      result = -1;
    }
  }
  else
  {
    Function_223b578(&v13, v2, v3, v4);
    result = -1;
  }
  return result;
}

//----- (022469C8) --------------------------------------------------------
int __fastcall Function_22469c8(int a1, uint *a2, int *a3, int a4)
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
  char v14;
  uchar v15;
  char v16;
  int v17;
  int v18;
  int v19;
  int *v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  char v28;
  int v29;
  char v30;
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
  int *v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  char v49;
  int v50;

  v50 = a4;
  v4 = a1;
  v5 = a3;
  v6 = a4;
  Function_223b938(&v49, a2);
  v41 = &v40;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v42 = v6;
  v7 = *v5;
  v8 = v5[1];
  v9 = v5[2];
  v10 = v5[3];
  v5 += 4;
  v43 = v7;
  v44 = v8;
  v45 = v9;
  v46 = v10;
  v11 = v5[1];
  v47 = *v5;
  v48 = v11;
  Function_2246adc(&v28, &v49, &v38);
  Function_223b938(&v16, &v28);
  v17 = v29;
  v18 = 0;
  v20 = &v19;
  v19 = 0;
  Function_2247abc(&v18, &v30);
  v21 = v31;
  v22 = v32;
  v23 = v33;
  v24 = v34;
  v25 = v35;
  v26 = v36;
  v27 = v37;
  Function_224773c(&v14, v4 + 128, &v16);
  v12 = v15;
  Function_2247e18(&v18);
  Function_223badc(&v16);
  Function_2247e18(&v30);
  Function_223badc(&v28);
  Function_2247e18(&v39);
  Function_223badc(&v49);
  return v12;
}

//----- (02246ADC) --------------------------------------------------------
int __fastcall Function_2246adc(uint *a1, uint *a2, uint *a3)
{
  uint *v3;
  uint *v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  uint *v9;
  int result;
  int v11;

  v3 = a3;
  v4 = a1;
  Function_223b938(a1, a2);
  v4[3] = *v3;
  v4[4] = 0;
  v4[5] = 0;
  v4[6] = v4 + 5;
  Function_2247abc(v4 + 4, v3 + 1);
  v4[7] = v3[4];
  v5 = v4 + 8;
  v6 = v3[6];
  v7 = v3[7];
  v8 = v3[8];
  *v5 = v3[5];
  v5[1] = v6;
  v5[2] = v7;
  v5[3] = v8;
  v9 = v4 + 12;
  result = v3[9];
  v11 = v3[10];
  *v9 = result;
  v9[1] = v11;
  return result;
}

//----- (02246B38) --------------------------------------------------------
int __fastcall Function_2246b38(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;

  v7 = a4;
  v4 = a1;
  Function_2246b70(&v6, a1 + 128, a2);
  if ( v6 == v4 + 132 )
    result = 0;
  else
    result = v6 + 44;
  return result;
}

//----- (02246B70) --------------------------------------------------------
int __fastcall Function_2246b70(int *a1, int a2, uint *a3)
{
  int v3;
  uint *v4;
  int *v5;
  int v6;
  int v7;
  int result;

  v3 = a2;
  v4 = a3;
  v5 = a1;
  v6 = *(uint *)(a2 + 4);
  v7 = Function_2246bd8();
  if ( v7 == v3 + 4 || (Function_223be90(v4, (uint *)(v7 + 12)) >= 0 ? (result = 0) : (result = 1), result) )
  {
    result = v3 + 4;
    *v5 = v3 + 4;
  }
  else
  {
    *v5 = v7;
  }
  return result;
}

//----- (02246BD8) --------------------------------------------------------
uint *__fastcall Function_2246bd8(int a1, uint *a2, uint *a3, uint *a4)
{
  uint *v4;
  uint *v5;
  uint *v6;
  BOOL v7;

  v4 = a3;
  v5 = a2;
  v6 = a4;
  while ( v4 )
  {
    v7 = Function_223be90(v4 + 3, v5) < 0;
    if ( v7 )
    {
      v4 = (uint *)v4[1];
    }
    else
    {
      v6 = v4;
      v4 = (uint *)*v4;
    }
  }
  return v6;
}

//----- (02246C2C) --------------------------------------------------------
int __fastcall Function_2246c2c(int a1, uint *a2, uint *a3, int a4)
{
  uint *v4;
  int v5;
  uint *v6;
  int v8;
  uint v9;
  char v10;
  int v11;
  int v12;
  int v13;

  v13 = a4;
  v4 = a2;
  v5 = a1;
  v6 = a3;
  v12 = Function_2246928(a2);
  if ( v12 == -1 )
    return -1;
  Function_2246b70(&v11, v5 + 128, v6);
  if ( v11 == v5 + 132 )
    return -1;
  Function_22479b4(&v10, v11 + 28, &v12);
  v8 = Function_2246cc8(v5 + 112, &v12);
  Function_223bc5c((uint *)(v8 + 4), v4, v9);
  return v12;
}

//----- (02246CC8) --------------------------------------------------------
int __fastcall Function_2246cc8(int a1, int *a2)
{
  int v2;
  int *v3;
  int v4;
  uint v5;
  int v6;
  uchar v8;
  uchar v9;
  int v10;
  int v11;
  char v12;
  uint v13[1];

  v2 = a1;
  v3 = a2;
  v4 = Function_2246d84(a1);
  if ( v10 && *(uint *)(v10 + 12) >= *v3 )
    return v10 + 12;
  v5 = 0;
  do
    v13[v5++] = 0;
  while ( v5 < 3 );
  v11 = *v3;
  Function_223b938(&v12, v13);
  v6 = Function_2247f48(v2, v4, v9, v8, &v11);
  Function_223badc(&v12);
  Function_223badc(v13);
  return v6 + 12;
}

//----- (02246D84) --------------------------------------------------------
int __fastcall Function_2246d84(int a1, uint *a2, uint *a3, uchar *a4, uchar *a5)
{
  uint *v5;
  int result;

  *a3 = 0;
  v5 = *(uint **)(a1 + 4);
  *a4 = 1;
  *a5 = 1;
  result = a1 + 4;
  while ( v5 )
  {
    result = (int)v5;
    if ( *a2 >= v5[3] )
    {
      *a3 = v5;
      v5 = (uint *)v5[1];
      *a4 = 0;
      *a5 = 0;
    }
    else
    {
      v5 = (uint *)*v5;
      *a4 = 1;
    }
  }
  return result;
}

//----- (02246DF0) --------------------------------------------------------
int __fastcall Function_2246df0(uint *a1, int a2, int a3, int a4, uint *a5)
{
  int v5;
  uint *v6;
  int v7;
  int result;
  int v9;
  int *v10;
  int v11;
  int v12;
  int v13;
  char *v14;
  int v15;
  uint v16;
  int v17;
  int v18;
  int v19;
  char v20;
  char v21;
  int v22;
  char v23;
  char v24;
  char v25;

  v5 = a2;
  v6 = a1;
  *a1 = 0;
  a1[1] = 0;
  v18 = a3;
  v7 = a4;
  a1[2] = 0;
  if ( a3 )
    Function_2242738((int)a1, a3, a3, a4);
  result = v18;
  v9 = 0;
  if ( v18 > 0 )
  {
    v10 = &v18 - 1;
    v19 = -1;
    do
    {
      Function_223ba6c((int)&v25, *(char **)(v7 + 4 * v9));
      v11 = 0;
      v12 = *(uint *)(v5 + 8);
      v13 = 0;
      if ( Function_2246928(&v25) == v12 )
      {
        v14 = *(char **)(v7 + 4 * v9);
        Function_2243b64(&v24, v5);
        v11 = 1;
        if ( Function_223beec(&v24, v14) != 0 )
          v13 = 1;
      }
      if ( v11 )
        Function_223badc(&v24);
      Function_223badc(&v25);
      if ( !v13 )
      {
        Function_223ba6c((int)&v23, *(char **)(v7 + 4 * v9));
        v22 = Function_2246c2c(v5, &v23, a5, v15);
        Function_223badc(&v23);
        if ( v22 != v19 )
        {
          v20 = 0;
          v16 = v6[1];
          if ( v16 >= v6[2] )
          {
            v21 = 0;
            *(uchar *)v10 = 0;
            v17 = *v10;
            Function_2242818((int)v6, (int)&v22);
          }
          else
          {
            v6[1] = v16 + 1;
            *(uint *)(*v6 + 4 * (v16 + 1) - 4) = v22;
          }
        }
      }
      result = v18;
      ++v9;
    }
    while ( v9 < v18 );
  }
  return result;
}

//----- (02246F78) --------------------------------------------------------
int Function_2246f78()
{
  return Function_2246f7c();
}

//----- (02246F7C) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02247024) --------------------------------------------------------
int __fastcall Function_2247024(int *a1, int a2, uint *a3)
{
  int v3;
  uint *v4;
  int *v5;
  int v6;
  int result;

  v3 = a2;
  v4 = a3;
  v5 = a1;
  v6 = *(uint *)(a2 + 4);
  result = Function_2247078();
  if ( result != v3 + 4 && *v4 >= *(uint *)(result + 12) )
  {
    *v5 = result;
  }
  else
  {
    result = v3 + 4;
    *v5 = v3 + 4;
  }
  return result;
}

//----- (02247078) --------------------------------------------------------
uint *__fastcall Function_2247078(int a1, int *a2, uint *a3, uint *a4)
{
  int v4;

  if ( a3 )
  {
    v4 = *a2;
    do
    {
      if ( a3[3] < v4 )
      {
        a3 = (uint *)a3[1];
      }
      else
      {
        a4 = a3;
        a3 = (uint *)*a3;
      }
    }
    while ( a3 );
  }
  return a4;
}

//----- (022470A8) --------------------------------------------------------
int __fastcall Function_22470a8(int a1, int a2, int a3, int a4)
{
  int v4;
  char v6;
  int v7;
  int v8;

  v8 = a4;
  v4 = a1;
  Function_22470f8(&v7, a1, a2);
  if ( v7 == v4 + 4 )
    return 0;
  Function_2247ed0(&v6, v4);
  return 1;
}

//----- (022470F8) --------------------------------------------------------
int __fastcall Function_22470f8(int *a1, int a2, uint *a3)
{
  int v3;
  uint *v4;
  int *v5;
  int result;

  v3 = a2;
  v4 = a3;
  v5 = a1;
  result = Function_224714c(a2, a3, *(uint *)(a2 + 4), a2 + 4);
  if ( result != v3 + 4 && *v4 >= *(uint *)(result + 12) )
  {
    *v5 = result;
  }
  else
  {
    result = v3 + 4;
    *v5 = v3 + 4;
  }
  return result;
}

//----- (0224714C) --------------------------------------------------------
uint *__fastcall Function_224714c(int a1, int *a2, uint *a3, uint *a4)
{
  int v4;

  if ( a3 )
  {
    v4 = *a2;
    do
    {
      if ( a3[3] < v4 )
      {
        a3 = (uint *)a3[1];
      }
      else
      {
        a4 = a3;
        a3 = (uint *)*a3;
      }
    }
    while ( a3 );
  }
  return a4;
}

//----- (0224717C) --------------------------------------------------------
int __fastcall Function_224717c(int a1, uint *a2, uint *a3, int a4)
{
  int v4;
  uint *v5;
  int v7;
  int v8;
  int v9;

  v9 = a4;
  v4 = a1;
  v5 = a3;
  v8 = Function_2246928(a2);
  if ( v8 == -1 )
    return 0;
  Function_2246b70(&v7, v4 + 128, v5);
  if ( v7 == v4 + 132 )
    return 0;
  if ( !Function_2247208(v7 + 28, &v8) )
    return 0;
  Function_2246f78();
  return 1;
}

//----- (02247208) --------------------------------------------------------
int __fastcall Function_2247208(int a1, uint *a2, int a3, int a4)
{
  int v4;
  char v6;
  int v7;
  int v8;

  v8 = a4;
  v4 = a1;
  Function_2247024(&v7, a1, a2);
  if ( v7 == v4 + 4 )
    return 0;
  Function_2247a4c(&v6, v4);
  return 1;
}

//----- (02247258) --------------------------------------------------------
int __fastcall Function_2247258(int a1, uint *a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int result;
  int v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  uint *v12;
  int v13;
  uint *v14;
  void (__fastcall *v15)(uint *, uint);
  int v16;
  char v17;
  char v18;
  char v19;
  char v20;
  uint *v21;
  uint *v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  uint *v29;
  uint *v30;
  int v31;
  int v32;
  int v33;
  char *v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  uint *v40;
  int v41;
  int v42;
  int v43;

  v43 = a4;
  v4 = a1;
  v5 = a2;
  Function_2246b70(&v33, a1 + 128, a2);
  result = 0;
  if ( v33 != v4 + 132 )
  {
    v40 = 0;
    v41 = 0;
    v42 = 0;
    v7 = *(uint *)(v33 + 36);
    v8 = v33 + 32;
    v19 = 0;
    v20 = 0;
    v18 = 0;
    v17 = 0;
    v9 = &v16 - 1;
    v10 = v26;
    *v9 = v33 + 32;
    v9[1] = v10;
    v11 = *(&v16 - 1);
    v23 = v7;
    v31 = v8;
    v27 = v8;
    v32 = v7;
    v28 = v7;
    v25 = v8;
    Function_22473bc(&v40, v7, v24, v11);
    Function_22474a4(v4 + 128, v5);
    v37 = 35942264;
    v39 = v4;
    v38 = 0;
    v34 = (uchar *)Function_2246f78;
    v35 = 0;
    v36 = v4;
    v29 = &v40[v41];
    v21 = &v40[v41];
    v30 = v40;
    v22 = v40;
    if ( v40 != &v40[v41] )
    {
      v12 = v22;
      v13 = (int)v21;
      do
      {
        v14 = (uint *)(v36 + (v35 >> 1));
        if ( v35 & 1 )
          v15 = *(void (__fastcall **)(uint *, uint))&v34[*v14];
        else
          v15 = (void (__fastcall *)(uint *, uint))v34;
        v15(v14, *v12);
        ++v12;
      }
      while ( v12 != (uint *)v13 );
      v22 = v12;
    }
    Function_223b5d0(&v40);
    result = 1;
  }
  return result;
}

//----- (022473BC) --------------------------------------------------------
int Function_22473bc()
{
  return Function_22473c0();
}

//----- (022473C0) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (022474A4) --------------------------------------------------------
int __fastcall Function_22474a4(int a1, uint *a2, int a3, int a4)
{
  int v4;
  char v6;
  int v7;
  int v8;

  v8 = a4;
  v4 = a1;
  Function_2246b70(&v7, a1, a2);
  if ( v7 == v4 + 4 )
    return 0;
  Function_22477ec(&v6, v4);
  return 1;
}

//----- (022474F4) --------------------------------------------------------
int __fastcall Function_22474f4(int a1, uint *a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v7;
  int v8;
  int v9;

  v9 = a4;
  v4 = a2;
  v5 = a1;
  v8 = Function_2246928(a2);
  if ( v8 == -1 )
    return -1;
  Function_22470f8(&v7, v5 + 112, &v8);
  if ( v7 == v5 + 116 )
    return -1;
  if ( Function_223800c((uint *)(v7 + 16), v4) == 0 )
    return -1;
  return v8;
}

//----- (02247578) --------------------------------------------------------
int Function_2247578()
{
  return Function_224757c();
}

//----- (0224757C) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (022475DC) --------------------------------------------------------
int __fastcall Function_22475dc(int a1, uint *a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  int result;
  char v10;
  uchar v11;
  int v12;
  int v13;
  char v14;
  int v15;
  char v16;
  char v17;

  v4 = a1;
  v5 = (uint *)a3;
  v12 = Function_22474f4(a1, a2, a3, a4);
  Function_22470a8(v4 + 112, (int)&v12, v6, v7);
  Function_223b938(&v17, v5);
  Function_224767c(&v15, v12, &v17);
  v13 = v15;
  Function_223b938(&v14, &v16);
  Function_2247e38(&v10, v4 + 112, &v13);
  v8 = v11;
  Function_223badc(&v14);
  Function_223badc(&v16);
  Function_223badc(&v17);
  if ( v8 )
    result = v12;
  else
    result = -1;
  return result;
}

//----- (0224767C) --------------------------------------------------------
uint *__fastcall Function_224767c(uint *a1, int a2, uint *a3)
{
  *a1 = a2;
  return Function_223b938(a1 + 1, a3);
}

//----- (02247690) --------------------------------------------------------
int __fastcall Function_2247690(int a1, uint *a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;

  v7 = a4;
  v4 = a1;
  Function_2246b70(&v6, a1 + 128, a2);
  if ( v6 == v4 + 132 )
    result = 0;
  else
    result = *(uint *)(v6 + 24);
  return result;
}

//----- (022476C8) --------------------------------------------------------
int __fastcall Function_22476c8(int a1, uint *a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;

  v7 = a4;
  v4 = a1;
  Function_2246b70(&v6, a1 + 128, a2);
  if ( v6 == v4 + 132 )
    return 0;
  result = 1;
  *(uint *)(v6 + 24) = 1;
  return result;
}

//----- (02247704) --------------------------------------------------------
int __fastcall Function_2247704(int a1, uint *a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;

  v7 = a4;
  v4 = a1;
  Function_2246b70(&v6, a1 + 128, a2);
  if ( v6 == v4 + 132 )
    result = -1;
  else
    result = *(uint *)(v6 + 40);
  return result;
}

//----- (0224773C) --------------------------------------------------------
int __fastcall Function_224773c(int a1, int a2, uint *a3)
{
  uint *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int result;
  uchar v9;
  uchar v10;
  int v11;

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = Function_224806c(a2, a3, &v11, &v10, &v9);
  if ( v11 && (Function_223be90((uint *)(v11 + 12), v3) >= 0 ? (v7 = 0) : (v7 = 1), !v7) )
  {
    *(uint *)v5 = v11;
    result = 0;
    *(uchar *)(v5 + 4) = 0;
  }
  else
  {
    *(uint *)v5 = Function_224786c(v4, v6, v10, v9, v3);
    result = 1;
    *(uchar *)(v5 + 4) = 1;
  }
  return result;
}

//----- (022477EC) --------------------------------------------------------
int Function_22477ec()
{
  return Function_22477f0();
}

//----- (022477F0) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0224786C) --------------------------------------------------------
uint *__fastcall Function_224786c(uint *a1, int a2, int a3, int a4, uint *a5)
{
  uint *v5;
  uint *v6;
  int v7;
  int v8;
  int v9;
  uint *v10;
  uint *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  uint *v18;

  v5 = a1;
  v6 = (uint *)a2;
  v7 = a3;
  v8 = a4;
  if ( *a1 == -1 )
  {
    Function_20d7350("tree::insert length error", a2, a3, a4);
    Function_20d3da0();
  }
  v9 = Function_2246290(68);
  v18 = (uint *)v9;
  v10 = (uint *)(v9 + 12);
  if ( v9 != -12 )
  {
    Function_223b938((uint *)(v9 + 12), a5);
    v10[3] = a5[3];
    v10[4] = 0;
    v10[5] = 0;
    v10[6] = v10 + 5;
    Function_2247abc(v10 + 4, a5 + 4);
    v10[7] = a5[7];
    v11 = v10 + 8;
    v12 = a5[9];
    v13 = a5[10];
    v14 = a5[11];
    *v11 = a5[8];
    v11[1] = v12;
    v11[2] = v13;
    v11[3] = v14;
    v11 += 4;
    v15 = a5[13];
    *v11 = a5[12];
    v11[1] = v15;
  }
  v18[1] = 0;
  *v18 = 0;
  if ( v18 != (uint *)-8 )
    v18[2] = v6;
  if ( v7 )
    *v6 = v18;
  else
    v6[1] = v18;
  ++*v5;
  v16 = v5[1];
  Function_223add8();
  if ( v8 )
    v5[3] = v18;
  return v18;
}

//----- (02247994) --------------------------------------------------------
int __fastcall Function_2247994(int a1)
{
  int v1;

  v1 = a1;
  if ( *(uint *)(a1 + 4) )
    Function_22481d0();
  return v1;
}

//----- (022479B4) --------------------------------------------------------
int __fastcall Function_22479b4(int a1, int a2, uint *a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  int result;
  uchar v9;
  uchar v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a3;
  v5 = a2;
  v6 = a1;
  v7 = Function_22480f8(a2, a3, &v11, &v10, &v9);
  if ( v11 && *(uint *)(v11 + 12) >= *v4 )
  {
    *(uint *)v6 = v11;
    result = 0;
    *(uchar *)(v6 + 4) = 0;
  }
  else
  {
    *(uint *)v6 = Function_2247d40(v5, v7, v10, v9, v4);
    result = 1;
    *(uchar *)(v6 + 4) = 1;
  }
  return result;
}

//----- (02247A4C) --------------------------------------------------------
int Function_2247a4c()
{
  return Function_2247a50();
}

//----- (02247A50) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02247ABC) --------------------------------------------------------
int __fastcall Function_2247abc(int result, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  bool v7;
  uint *v8;
  int v9;
  int v10;
  int v11;
  uint v12;
  int *v13;
  int v14;
  int *v15;
  int *v16;
  int v17;

  v17 = a4;
  v4 = a2;
  v5 = result;
  if ( *(uint *)(a2 + 4) )
  {
    v6 = Function_2246290(16);
    v13 = (int *)v6;
    v8 = (uint *)(v6 + 12);
    v7 = v6 == -12;
    v9 = *(uint *)(v4 + 4);
    if ( !v7 )
      v9 = *(uint *)(v9 + 12);
    v10 = 0;
    if ( !v7 )
      *v8 = v9;
    v14 = 0;
    v15 = 0;
    v16 = (int *)&v15;
    v13[1] = 0;
    *v13 = 0;
    v13[2] = (uint)&v15 | v13[2] & 1;
    if ( *(uint *)(*(uint *)(v4 + 4) + 8) & 1 )
      v10 = 1;
    v11 = v13[2];
    if ( v10 )
      v12 = v11 | 1;
    else
      v12 = v11 & 0xFFFFFFFE;
    v13[2] = v12;
    v15 = v13;
    v14 = 1;
    v16 = v13;
    if ( *(uint *)(*(uint *)(v4 + 4) + 4) )
      Function_2247bf4(&v14);
    if ( **(uint **)(v4 + 4) )
      Function_2247bf4(&v14);
    Function_224824c(v5, &v14);
    result = Function_224822c(&v14);
  }
  return result;
}

//----- (02247BF4) --------------------------------------------------------
int __fastcall Function_2247bf4(uint *a1, uint *a2, int **a3, int a4)
{
  uint *v4;
  uint v5;
  int **v6;
  int v7;
  uint *v8;
  uint *v9;
  int *v10;
  int v11;
  uint v12;
  int result;

  v4 = a1;
  v5 = (uint)a2;
  v6 = a3;
  v7 = a4;
  v8 = (uint *)Function_2246290(16);
  v8[1] = 0;
  *v8 = 0;
  v8[2] = v5 | v8[2] & 1;
  if ( v7 )
  {
    if ( v8 != (uint *)-12 )
      v8[3] = (*v6)[3];
    v4[2] = v8;
    *(uint *)v5 = v8;
    v9 = v8;
    v10 = *v6;
  }
  else
  {
    if ( v8 != (uint *)-12 )
      v8[3] = v6[1][3];
    *(uint *)(v5 + 4) = v8;
    v10 = v6[1];
    v9 = v8;
  }
  v11 = v9[2];
  if ( v10[2] & 1 )
    v12 = v11 | 1;
  else
    v12 = v11 & 0xFFFFFFFE;
  v9[2] = v12;
  ++*v4;
  if ( v10[1] )
    Function_2247bf4(v4);
  result = *v10;
  if ( *v10 )
    result = Function_2247bf4(v4);
  return result;
}

//----- (02247D40) --------------------------------------------------------
uint *__fastcall Function_2247d40(uint *a1, int a2, int a3, int a4, uint *a5)
{
  uint *v5;
  uint *v6;
  int v7;
  int v8;
  uint *v9;
  uint *v10;
  int v11;

  v5 = a1;
  v6 = (uint *)a2;
  v7 = a3;
  v8 = a4;
  if ( *a1 == -1 )
  {
    Function_20d7350("tree::insert length error", a2, a3, a4);
    Function_20d3da0();
  }
  v9 = (uint *)Function_2246290(16);
  v10 = v5 + 1;
  if ( v9 != (uint *)-12 )
    v10 = a5;
  if ( v9 != (uint *)-12 )
    v10 = (uint *)*v10;
  if ( v9 != (uint *)-12 )
    v9[3] = v10;
  v9[1] = 0;
  *v9 = 0;
  if ( v9 != (uint *)-8 )
    v9[2] = v6;
  if ( v7 )
    *v6 = v9;
  else
    v6[1] = v9;
  ++*v5;
  v11 = v5[1];
  Function_223add8();
  if ( v8 )
    v5[2] = v9;
  return v9;
}

//----- (02247E18) --------------------------------------------------------
int __fastcall Function_2247e18(int a1)
{
  int v1;

  v1 = a1;
  if ( *(uint *)(a1 + 4) )
    Function_22482d8();
  return v1;
}

//----- (02247E38) --------------------------------------------------------
int __fastcall Function_2247e38(int a1, int a2, uint *a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  int result;
  uchar v9;
  uchar v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a3;
  v5 = a2;
  v6 = a1;
  v7 = Function_2248164(a2, a3, &v11, &v10, &v9);
  if ( v11 && *(uint *)(v11 + 12) >= *v4 )
  {
    *(uint *)v6 = v11;
    result = 0;
    *(uchar *)(v6 + 4) = 0;
  }
  else
  {
    *(uint *)v6 = Function_2247f48(v5, v7, v10, v9, v4);
    result = 1;
    *(uchar *)(v6 + 4) = 1;
  }
  return result;
}

//----- (02247ED0) --------------------------------------------------------
int Function_2247ed0()
{
  return Function_2247ed4();
}

//----- (02247ED4) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02247F48) --------------------------------------------------------
uint *__fastcall Function_2247f48(uint *a1, int a2, int a3, int a4, uint *a5)
{
  uint *v5;
  uint *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint *v13;

  v5 = a1;
  v6 = (uint *)a2;
  v7 = a3;
  v8 = a4;
  if ( *a1 == -1 )
  {
    Function_20d7350("tree::insert length error", a2, a3, a4);
    Function_20d3da0();
  }
  v9 = Function_2246290(28);
  v13 = (uint *)v9;
  if ( v9 != -12 )
  {
    *(uint *)(v9 + 12) = *a5;
    Function_223b938((uint *)(v9 + 16), a5 + 1);
  }
  v13[1] = 0;
  *v13 = 0;
  if ( v13 != (uint *)-8 )
    v13[2] = v6;
  if ( v7 )
    *v6 = v13;
  else
    v6[1] = v13;
  ++*v5;
  v10 = v5[1];
  Function_223add8();
  if ( v8 )
    v5[3] = v13;
  return v13;
}

//----- (0224802C) --------------------------------------------------------
int __fastcall Function_224802c(int a1)
{
  int v1;

  v1 = a1;
  if ( *(uint *)(a1 + 4) )
    Function_2248324();
  return v1;
}

//----- (0224804C) --------------------------------------------------------
int __fastcall Function_224804c(int a1)
{
  int v1;

  v1 = a1;
  if ( *(uint *)(a1 + 4) )
    Function_2248378();
  return v1;
}

//----- (0224806C) --------------------------------------------------------
int __fastcall Function_224806c(int a1, uint *a2, uint *a3, uchar *a4, uchar *a5)
{
  uint *v5;
  uint *v6;
  uchar *v7;
  uint *v8;
  int v9;
  BOOL v10;

  v5 = a3;
  *a3 = 0;
  v6 = *(uint **)(a1 + 4);
  v7 = a4;
  *a4 = 1;
  v8 = a2;
  *a5 = 1;
  v9 = a1 + 4;
  while ( v6 )
  {
    v9 = (int)v6;
    v10 = Function_223be90(v8, v6 + 3) < 0;
    if ( v10 )
    {
      v6 = (uint *)*v6;
      *v7 = 1;
    }
    else
    {
      *v5 = v6;
      v6 = (uint *)v6[1];
      *v7 = 0;
      *a5 = 0;
    }
  }
  return v9;
}

//----- (022480F8) --------------------------------------------------------
int __fastcall Function_22480f8(int a1, uint *a2, uint *a3, uchar *a4, uchar *a5)
{
  uint *v5;
  int result;

  *a3 = 0;
  v5 = *(uint **)(a1 + 4);
  *a4 = 1;
  *a5 = 1;
  result = a1 + 4;
  while ( v5 )
  {
    result = (int)v5;
    if ( *a2 >= v5[3] )
    {
      *a3 = v5;
      v5 = (uint *)v5[1];
      *a4 = 0;
      *a5 = 0;
    }
    else
    {
      v5 = (uint *)*v5;
      *a4 = 1;
    }
  }
  return result;
}

//----- (02248164) --------------------------------------------------------
int __fastcall Function_2248164(int a1, uint *a2, uint *a3, uchar *a4, uchar *a5)
{
  uint *v5;
  int result;

  *a3 = 0;
  v5 = *(uint **)(a1 + 4);
  *a4 = 1;
  *a5 = 1;
  result = a1 + 4;
  while ( v5 )
  {
    result = (int)v5;
    if ( *a2 >= v5[3] )
    {
      *a3 = v5;
      v5 = (uint *)v5[1];
      *a4 = 0;
      *a5 = 0;
    }
    else
    {
      v5 = (uint *)*v5;
      *a4 = 1;
    }
  }
  return result;
}

//----- (022481D0) --------------------------------------------------------
uint *__fastcall Function_22481d0(int a1, uint *a2)
{
  uint *v2;
  int v3;
  uint *result;

  v2 = a2;
  v3 = a1;
  if ( *a2 )
    ((void (*)(void))Function_22481d0)();
  if ( v2[1] )
    Function_22481d0(v3);
  Function_2247e18((int)(v2 + 7));
  result = Function_223badc(v2 + 3);
  if ( v2 )
    result = (uint *)((int (*)(void))dword_21D77C4[0])();
  return result;
}

//----- (0224822C) --------------------------------------------------------
int __fastcall Function_224822c(int a1)
{
  int v1;

  v1 = a1;
  if ( *(uint *)(a1 + 4) )
    Function_22482d8();
  return v1;
}

//----- (0224824C) --------------------------------------------------------
int *__fastcall Function_224824c(int *result, int *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  if ( result != a2 )
  {
    v2 = *result;
    *result = *a2;
    *a2 = v2;
    v3 = result[1];
    result[1] = a2[1];
    a2[1] = v3;
    v4 = result[2];
    result[2] = a2[2];
    a2[2] = v4;
    v5 = result[1];
    if ( v5 )
      *(uint *)(v5 + 8) = (uint)(result + 1) | *(uint *)(v5 + 8) & 1;
    else
      result[2] = (int)(result + 1);
    v6 = a2[1];
    if ( v6 )
    {
      result = (int *)((uint)(a2 + 1) | *(uint *)(v6 + 8) & 1);
      *(uint *)(v6 + 8) = result;
    }
    else
    {
      result = a2 + 1;
      a2[2] = (int)(a2 + 1);
    }
  }
  return result;
}

//----- (022482D8) --------------------------------------------------------
int __fastcall Function_22482d8(int result, uint *a2)
{
  uint *v2;
  int v3;

  v2 = a2;
  v3 = result;
  if ( *a2 )
    result = ((int (*)(void))Function_22482d8)();
  if ( v2[1] )
    result = Function_22482d8(v3);
  if ( v2 )
    result = ((int (*)(void))dword_21D77C4[0])();
  return result;
}

//----- (02248324) --------------------------------------------------------
uint *__fastcall Function_2248324(int a1, uint *a2)
{
  uint *v2;
  int v3;
  uint *result;

  v2 = a2;
  v3 = a1;
  if ( *a2 )
    ((void (*)(void))Function_2248324)();
  if ( v2[1] )
    Function_2248324(v3);
  result = Function_223badc(v2 + 4);
  if ( v2 )
    result = (uint *)((int (*)(void))dword_21D77C4[0])();
  return result;
}

//----- (02248378) --------------------------------------------------------
int __fastcall Function_2248378(int result, uint *a2)
{
  uint *v2;
  int v3;

  v2 = a2;
  v3 = result;
  if ( *a2 )
    result = ((int (*)(void))Function_2248378)();
  if ( v2[1] )
    result = Function_2248378(v3);
  if ( v2 )
    result = ((int (*)(void))dword_21D77C4[0])();
  return result;
}

//----- (022483C4) --------------------------------------------------------
int __fastcall Function_22483c4(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    Function_20d407c((int)"data != NULL", (int)"chatCallbacks.c", (int)"ciCallbacksArrayElementFreeFn");
  return ((int (__fastcall *)(uint))dword_21D78B0[0])(*(uint *)(v1 + 20));
}

//----- (022483FC) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x224854C for case 0"

//----- (022484CC) --------------------------------------------------------
void Function_22484cc()
{
  JUMPOUT(&loc_224854C);
}

//----- (022484D0) --------------------------------------------------------
void Function_22484d0()
{
  JUMPOUT(&loc_224855C);
}

//----- (022484D4) --------------------------------------------------------
void Function_22484d4()
{
  JUMPOUT(&loc_224856C);
}

//----- (022484D8) --------------------------------------------------------
void Function_22484d8()
{
  JUMPOUT(&loc_2248584);
}

//----- (022484DC) --------------------------------------------------------
void Function_22484dc()
{
  JUMPOUT(&loc_224859C);
}

//----- (022484E0) --------------------------------------------------------
void Function_22484e0()
{
  JUMPOUT(&loc_22485BC);
}

//----- (022484E4) --------------------------------------------------------
void Function_22484e4()
{
  JUMPOUT(&loc_22485DC);
}

//----- (022484E8) --------------------------------------------------------
void Function_22484e8()
{
  JUMPOUT(&loc_22485F4);
}

//----- (022484EC) --------------------------------------------------------
void Function_22484ec()
{
  JUMPOUT(&loc_224861C);
}

//----- (022484F0) --------------------------------------------------------
void Function_22484f0()
{
  JUMPOUT(&loc_224863C);
}

//----- (022484F4) --------------------------------------------------------
void Function_22484f4()
{
  JUMPOUT(&loc_2248654);
}

//----- (022484F8) --------------------------------------------------------
void Function_22484f8()
{
  JUMPOUT(&loc_224866C);
}

//----- (022484FC) --------------------------------------------------------
void Function_22484fc()
{
  JUMPOUT(&loc_2248684);
}

//----- (02248500) --------------------------------------------------------
void Function_2248500()
{
  JUMPOUT(&loc_2248694);
}

//----- (02248504) --------------------------------------------------------
void Function_2248504()
{
  JUMPOUT(&loc_22486AC);
}

//----- (02248508) --------------------------------------------------------
void Function_2248508()
{
  JUMPOUT(&loc_2248704);
}

//----- (0224850C) --------------------------------------------------------
void Function_224850c()
{
  JUMPOUT(&loc_2248714);
}

//----- (02248510) --------------------------------------------------------
void Function_2248510()
{
  JUMPOUT(&loc_224872C);
}

//----- (02248514) --------------------------------------------------------
void Function_2248514()
{
  JUMPOUT(&loc_2248744);
}

//----- (02248518) --------------------------------------------------------
void Function_2248518()
{
  JUMPOUT(&loc_224875C);
}

//----- (0224851C) --------------------------------------------------------
void Function_224851c()
{
  JUMPOUT(&loc_22487A8);
}

//----- (02248520) --------------------------------------------------------
void Function_2248520()
{
  JUMPOUT(&loc_2248804);
}

//----- (02248524) --------------------------------------------------------
void Function_2248524()
{
  JUMPOUT(&loc_2248824);
}

//----- (02248528) --------------------------------------------------------
void Function_2248528()
{
  JUMPOUT(&loc_224884C);
}

//----- (0224852C) --------------------------------------------------------
void Function_224852c()
{
  JUMPOUT(&loc_2248864);
}

//----- (02248530) --------------------------------------------------------
void Function_2248530()
{
  JUMPOUT(&loc_22488A8);
}

//----- (02248534) --------------------------------------------------------
void Function_2248534()
{
  JUMPOUT(&loc_22488EC);
}

//----- (02248538) --------------------------------------------------------
void Function_2248538()
{
  JUMPOUT(&loc_2248904);
}

//----- (0224853C) --------------------------------------------------------
void Function_224853c()
{
  JUMPOUT(&loc_2248950);
}

//----- (02248540) --------------------------------------------------------
void Function_2248540()
{
  JUMPOUT(&loc_2248978);
}

//----- (02248544) --------------------------------------------------------
void Function_2248544()
{
  JUMPOUT(&loc_22489D8);
}

//----- (02248548) --------------------------------------------------------
void Function_2248548()
{
  int v0;
  int v1;

  ((void (__fastcall *)(uint))dword_21D78B0[0])(*(uint *)(*(uint *)(v0 + 8) + 4));
  ((void (__fastcall *)(uint))dword_21D78B0[0])(*(uint *)(v0 + 8));
  JUMPOUT(__CS__, v1);
}

//----- (02248A98) --------------------------------------------------------
BOOL __fastcall Function_2248a98(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = ((int (__fastcall *)(int, int, int (__fastcall *)(int)))dword_21E9A8C[0])(
         24,
         128,
         Function_22483c4);
  *(uint *)(v1 + 2080) = v2;
  return v2 != 0;
}

//----- (02248AC8) --------------------------------------------------------
int __fastcall Function_2248ac8(int a1)
{
  int v1;
  int result;
  int v3;
  int i;
  uint *v5;

  v1 = a1;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatCallbacks.c", (int)"ciCleanupCallbacks");
  result = *(uint *)(v1 + 2080);
  if ( result )
  {
    v3 = ((int (*)(void))dword_21E9BBC[0])();
    for ( i = 0; i < v3; ++i )
    {
      v5 = (uint *)((int (__fastcall *)(uint, int))dword_21E9BC4[0])(*(uint *)(v1 + 2080), i);
      if ( !v5 )
        Function_20d407c((int)"data != NULL", (int)"chatCallbacks.c", (int)"ciCleanupCallbacks");
      if ( *v5 < 0 )
        Function_20d407c((int)"data->type >= 0", (int)"chatCallbacks.c", (int)"ciCleanupCallbacks");
      if ( *v5 >= 32 )
        Function_20d407c((int)"data->type < CALLBACK_NUM", (int)"chatCallbacks.c", (int)"ciCleanupCallbacks");
      if ( !v5[1] )
        Function_20d407c((int)"data->callback != NULL", (int)"chatCallbacks.c", (int)"ciCleanupCallbacks");
      if ( !v5[2] )
        Function_20d407c((int)"data->callbackParams != NULL", (int)"chatCallbacks.c", (int)"ciCleanupCallbacks");
      if ( v5[4] < 0 )
        Function_20d407c((int)"data->ID >= 0", (int)"chatCallbacks.c", (int)"ciCleanupCallbacks");
      Function_22483fc(v5);
    }
    result = ((int (__fastcall *)(uint))dword_21E9B50[0])(*(uint *)(v1 + 2080));
  }
  return result;
}

//----- (02248C2C) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x2248E6C for case 0"

//----- (02248DEC) --------------------------------------------------------
void Function_2248dec()
{
  JUMPOUT(&loc_2248E6C);
}

//----- (02248DF0) --------------------------------------------------------
void Function_2248df0()
{
  JUMPOUT(&loc_2248EA8);
}

//----- (02248DF4) --------------------------------------------------------
void Function_2248df4()
{
  JUMPOUT(&loc_2248EE4);
}

//----- (02248DF8) --------------------------------------------------------
void Function_2248df8()
{
  JUMPOUT(&loc_2248F58);
}

//----- (02248DFC) --------------------------------------------------------
void Function_2248dfc()
{
  JUMPOUT(&loc_2248FCC);
}

//----- (02248E00) --------------------------------------------------------
void Function_2248e00()
{
  JUMPOUT(&loc_2249078);
}

//----- (02248E04) --------------------------------------------------------
void Function_2248e04()
{
  JUMPOUT(&loc_2249124);
}

//----- (02248E08) --------------------------------------------------------
void Function_2248e08()
{
  JUMPOUT(&loc_2249198);
}

//----- (02248E0C) --------------------------------------------------------
void Function_2248e0c()
{
  JUMPOUT(&loc_224927C);
}

//----- (02248E10) --------------------------------------------------------
void Function_2248e10()
{
  JUMPOUT(&loc_2249328);
}

//----- (02248E14) --------------------------------------------------------
void Function_2248e14()
{
  JUMPOUT(&loc_224939C);
}

//----- (02248E18) --------------------------------------------------------
void Function_2248e18()
{
  JUMPOUT(&loc_2249424);
}

//----- (02248E1C) --------------------------------------------------------
void Function_2248e1c()
{
  JUMPOUT(&loc_2249498);
}

//----- (02248E20) --------------------------------------------------------
void Function_2248e20()
{
  JUMPOUT(&loc_22494D4);
}

//----- (02248E24) --------------------------------------------------------
void Function_2248e24()
{
  JUMPOUT(&loc_2249548);
}

//----- (02248E28) --------------------------------------------------------
void Function_2248e28()
{
  JUMPOUT(&loc_22497E0);
}

//----- (02248E2C) --------------------------------------------------------
void Function_2248e2c()
{
  JUMPOUT(&loc_224981C);
}

//----- (02248E30) --------------------------------------------------------
void Function_2248e30()
{
  JUMPOUT(&loc_2249890);
}

//----- (02248E34) --------------------------------------------------------
void Function_2248e34()
{
  JUMPOUT(&loc_2249918);
}

//----- (02248E38) --------------------------------------------------------
void Function_2248e38()
{
  JUMPOUT(&loc_224998C);
}

//----- (02248E3C) --------------------------------------------------------
void Function_2248e3c()
{
  JUMPOUT(&loc_2249BC0);
}

//----- (02248E40) --------------------------------------------------------
void Function_2248e40()
{
  JUMPOUT(&loc_2249DA8);
}

//----- (02248E44) --------------------------------------------------------
void Function_2248e44()
{
  JUMPOUT(&loc_2249E54);
}

//----- (02248E48) --------------------------------------------------------
void Function_2248e48()
{
  JUMPOUT(&loc_2249F38);
}

//----- (02248E4C) --------------------------------------------------------
void Function_2248e4c()
{
  JUMPOUT(&loc_2249FAC);
}

//----- (02248E50) --------------------------------------------------------
void Function_2248e50()
{
  JUMPOUT(&loc_224A0EC);
}

//----- (02248E54) --------------------------------------------------------
void Function_2248e54()
{
  JUMPOUT(&loc_224A22C);
}

//----- (02248E58) --------------------------------------------------------
void Function_2248e58()
{
  JUMPOUT(&loc_224A2A0);
}

//----- (02248E5C) --------------------------------------------------------
void Function_2248e5c()
{
  JUMPOUT(&loc_224A470);
}

//----- (02248E60) --------------------------------------------------------
void Function_2248e60()
{
  JUMPOUT(&loc_224A554);
}

//----- (02248E64) --------------------------------------------------------
void Function_2248e64()
{
  JUMPOUT(&loc_224A794);
}

//----- (02248E68) --------------------------------------------------------
void Function_2248e68()
{
  int v0;
  int v1;
  int v2;
  int v3;
  int v4;
  char v5;
  int v6;
  int v7;
  int v8;

  v2 = *(uint *)(v0 + 4);
  v3 = v6;
  if ( v2 )
  {
    v4 = ((int (*)(void))dword_21EA8AC[0])();
    *(uint *)(v6 + 4) = v4;
    if ( !v4 )
    {
      ((void (__fastcall *)(int))dword_21D78B0[0])(v3);
      ((void (__fastcall *)(int))dword_21D78B0[0])(v7);
      JUMPOUT(__CS__, v8);
    }
  }
  ((void (__fastcall *)(uint, char *))dword_21E9C2C[0])(*(uint *)(v1 + 2080), &v5);
  JUMPOUT(__CS__, v8);
}

//----- (0224AAA0) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x224AC18 for case 0"

//----- (0224AB98) --------------------------------------------------------
void Function_224ab98()
{
  JUMPOUT(&loc_224AC18);
}

//----- (0224AB9C) --------------------------------------------------------
void Function_224ab9c()
{
  JUMPOUT(&loc_224AC34);
}

//----- (0224ABA0) --------------------------------------------------------
void Function_224aba0()
{
  JUMPOUT(&loc_224AC50);
}

//----- (0224ABA4) --------------------------------------------------------
void Function_224aba4()
{
  JUMPOUT(&loc_224AC6C);
}

//----- (0224ABA8) --------------------------------------------------------
void Function_224aba8()
{
  JUMPOUT(&loc_224AC88);
}

//----- (0224ABAC) --------------------------------------------------------
void Function_224abac()
{
  JUMPOUT(&loc_224ACA8);
}

//----- (0224ABB0) --------------------------------------------------------
void Function_224abb0()
{
  JUMPOUT(&loc_224ACC4);
}

//----- (0224ABB4) --------------------------------------------------------
void Function_224abb4()
{
  JUMPOUT(&loc_224ACE0);
}

//----- (0224ABB8) --------------------------------------------------------
void Function_224abb8()
{
  JUMPOUT(&loc_224AD08);
}

//----- (0224ABBC) --------------------------------------------------------
void Function_224abbc()
{
  JUMPOUT(&loc_224AD24);
}

//----- (0224ABC0) --------------------------------------------------------
void Function_224abc0()
{
  JUMPOUT(&loc_224AD40);
}

//----- (0224ABC4) --------------------------------------------------------
void Function_224abc4()
{
  JUMPOUT(&loc_224AD5C);
}

//----- (0224ABC8) --------------------------------------------------------
void Function_224abc8()
{
  JUMPOUT(&loc_224AD78);
}

//----- (0224ABCC) --------------------------------------------------------
void Function_224abcc()
{
  JUMPOUT(&loc_224AD94);
}

//----- (0224ABD0) --------------------------------------------------------
void Function_224abd0()
{
  JUMPOUT(&loc_224ADBC);
}

//----- (0224ABD4) --------------------------------------------------------
void Function_224abd4()
{
  JUMPOUT(&loc_224ADE4);
}

//----- (0224ABD8) --------------------------------------------------------
void Function_224abd8()
{
  JUMPOUT(&loc_224AE0C);
}

//----- (0224ABDC) --------------------------------------------------------
void Function_224abdc()
{
  JUMPOUT(&loc_224AE28);
}

//----- (0224ABE0) --------------------------------------------------------
void Function_224abe0()
{
  JUMPOUT(&loc_224AE44);
}

//----- (0224ABE4) --------------------------------------------------------
void Function_224abe4()
{
  JUMPOUT(&loc_224AE64);
}

//----- (0224ABE8) --------------------------------------------------------
void Function_224abe8()
{
  JUMPOUT(&loc_224AE8C);
}

//----- (0224ABEC) --------------------------------------------------------
void Function_224abec()
{
  JUMPOUT(&loc_224AEC8);
}

//----- (0224ABF0) --------------------------------------------------------
void Function_224abf0()
{
  JUMPOUT(&loc_224AEE8);
}

//----- (0224ABF4) --------------------------------------------------------
void Function_224abf4()
{
  JUMPOUT(&loc_224AF10);
}

//----- (0224ABF8) --------------------------------------------------------
void Function_224abf8()
{
  JUMPOUT(&loc_224AF30);
}

//----- (0224ABFC) --------------------------------------------------------
void Function_224abfc()
{
  JUMPOUT(&loc_224AF50);
}

//----- (0224AC00) --------------------------------------------------------
void Function_224ac00()
{
  JUMPOUT(&loc_224AF70);
}

//----- (0224AC04) --------------------------------------------------------
void Function_224ac04()
{
  JUMPOUT(&loc_224AF8C);
}

//----- (0224AC08) --------------------------------------------------------
void Function_224ac08()
{
  JUMPOUT(&loc_224AFAC);
}

//----- (0224AC0C) --------------------------------------------------------
void Function_224ac0c()
{
  JUMPOUT(&loc_224AFCC);
}

//----- (0224AC10) --------------------------------------------------------
void Function_224ac10()
{
  JUMPOUT(&loc_224AFF4);
}

//----- (0224AC14) --------------------------------------------------------
void Function_224ac14()
{
  int v0;
  int v1;
  int v2;
  int v3;

  (*(void (__fastcall **)(int, uint, uint, int))(v1 + 4))(
    v2,
    **(uint **)(v1 + 8),
    *(uint *)(*(uint *)(v1 + 8) + 4),
    v0);
  Function_22483fc(v1);
  JUMPOUT(__CS__, v3);
}

//----- (0224B09C) --------------------------------------------------------
int __fastcall Function_224b09c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;
  int *v8;
  bool v9;
  int v10;
  int *v11;
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

  v22 = a4;
  v4 = a1;
  v5 = a2;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatCallbacks.c", (int)"ciCallCallbacks");
  v6 = 0;
  result = ((int (__fastcall *)(uint))dword_21E9BBC[0])(*(uint *)(v4 + 2080));
  if ( result > 0 )
  {
    do
    {
      v8 = (int *)((int (__fastcall *)(uint, int))dword_21E9BC4[0])(*(uint *)(v4 + 2080), v6);
      if ( !v8 )
        Function_20d407c((int)"data != NULL", (int)"chatCallbacks.c", (int)"ciCallCallbacks");
      if ( *v8 < 0 )
        Function_20d407c((int)"data->type >= 0", (int)"chatCallbacks.c", (int)"ciCallCallbacks");
      if ( *v8 >= 32 )
        Function_20d407c((int)"data->type < CALLBACK_NUM", (int)"chatCallbacks.c", (int)"ciCallCallbacks");
      if ( !v8[1] )
        Function_20d407c((int)"data->callback != NULL", (int)"chatCallbacks.c", (int)"ciCallCallbacks");
      if ( !v8[2] )
        Function_20d407c((int)"data->callbackParams != NULL", (int)"chatCallbacks.c", (int)"ciCallCallbacks");
      if ( v8[4] < 0 )
        Function_20d407c((int)"data->ID >= 0", (int)"chatCallbacks.c", (int)"ciCallCallbacks");
      if ( !v8[5] || Function_224c134(v4) )
      {
        if ( v8[5] && !Function_224c518(v4) )
          goto LABEL_31;
        v9 = v5 == 0;
        if ( v5 )
          v9 = v8[4] == v5;
        if ( v9 )
        {
          v10 = *v8;
          v12 = v8[1];
          v13 = v8[2];
          v14 = v8[3];
          v11 = v8 + 4;
          v16 = v10;
          v17 = v12;
          v18 = v13;
          v19 = v14;
          v15 = v11[1];
          v20 = *v11;
          v21 = v15;
          ((void (__fastcall *)(uint, int))dword_21E9E40[0])(*(uint *)(v4 + 2080), v6);
          result = Function_224aaa0(v4, &v16);
          if ( v5 )
            return result;
        }
        else
        {
LABEL_31:
          ++v6;
        }
      }
      else
      {
        Function_22483fc(v8);
        ((void (__fastcall *)(uint, int))dword_21E9E40[0])(*(uint *)(v4 + 2080), v6);
      }
      result = ((int (__fastcall *)(uint))dword_21E9BBC[0])(*(uint *)(v4 + 2080));
    }
    while ( v6 < result );
  }
  return result;
}

//----- (0224B298) --------------------------------------------------------
int __fastcall Function_224b298(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  uint *v6;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatCallbacks.c", (int)"ciGetCallbackIndexByID");
  v4 = ((int (__fastcall *)(uint))dword_21E9BBC[0])(*(uint *)(v2 + 2080));
  v5 = 0;
  if ( v4 <= 0 )
    return -1;
  while ( 1 )
  {
    v6 = (uint *)((int (__fastcall *)(uint, int))dword_21E9BC4[0])(*(uint *)(v2 + 2080), v5);
    if ( !v6 )
      Function_20d407c((int)"data != NULL", (int)"chatCallbacks.c", (int)"ciGetCallbackIndexByID");
    if ( *v6 < 0 )
      Function_20d407c((int)"data->type >= 0", (int)"chatCallbacks.c", (int)"ciGetCallbackIndexByID");
    if ( *v6 >= 32 )
      Function_20d407c((int)"data->type < CALLBACK_NUM", (int)"chatCallbacks.c", (int)"ciGetCallbackIndexByID");
    if ( !v6[1] )
      Function_20d407c((int)"data->callback != NULL", (int)"chatCallbacks.c", (int)"ciGetCallbackIndexByID");
    if ( !v6[2] )
      Function_20d407c((int)"data->callbackParams != NULL", (int)"chatCallbacks.c", (int)"ciGetCallbackIndexByID");
    if ( v6[4] < 0 )
      Function_20d407c((int)"data->ID >= 0", (int)"chatCallbacks.c", (int)"ciGetCallbackIndexByID");
    if ( v6[4] == v3 )
      break;
    if ( ++v5 >= v4 )
      return -1;
  }
  return v5;
}

//----- (0224B3F8) --------------------------------------------------------
BOOL __fastcall Function_224b3f8(int a1, int a2)
{
  return Function_224b298(a1, a2) != -1;
}

//----- (0224B414) --------------------------------------------------------
int __fastcall Function_224b414(uchar *a1, int a2)
{
  uchar *v2;
  int v3;
  int v4;
  char *v5;
  int v6;
  uint v7;
  int v8;
  int v9;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    Function_20d407c((int)"str != NULL", (int)"chatChannel.c", (int)"ciHashString");
  if ( !*v2 )
    Function_20d407c((int)"str[0] != '\\0'", (int)"chatChannel.c", (int)"ciHashString");
  v6 = (char)*v2;
  v5 = v2 + 1;
  v4 = v6;
  v7 = 0;
  if ( v6 )
  {
    do
    {
      if ( v4 >= 0 && v4 < 128 )
        v4 = (uchar)Unknown_20fe764[v4];
      v7 += v4;
      v8 = *v5++;
      v4 = v8;
    }
    while ( v8 );
  }
  s32_div_f(v7, v3);
  return v9;
}

//----- (0224B4B4) --------------------------------------------------------
int __fastcall Function_224b4b4(int a1, char *a2, int a3, int a4)
{
  int v4;
  char v6;
  char v7;
  int v8;

  v8 = a4;
  v4 = a1;
  strncpy(&v6, a2, 257);
  v7 = 0;
  return ((int (__fastcall *)(uint, char *))dword_21EA598[0])(*(uint *)(v4 + 2060), &v6);
}

//----- (0224B4EC) --------------------------------------------------------
int __fastcall Function_224b4ec(uchar *a1, int a2)
{
  uchar *v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    Function_20d407c((int)"elem != NULL", (int)"chatChannel.c", (int)"ciChannelTableHashFn");
  if ( v3 <= 0 )
    Function_20d407c((int)"numBuckets > 0", (int)"chatChannel.c", (int)"ciChannelTableHashFn");
  return Function_224b414(v2, v3);
}

//----- (0224B54C) --------------------------------------------------------
int __fastcall Function_224b54c(uchar *a1, uchar *a2)
{
  uchar *v2;
  uchar *v3;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    Function_20d407c((int)"elem1 != NULL", (int)"chatChannel.c", (int)"ciChannelTableCompareFn");
  if ( !v3 )
    Function_20d407c((int)"elem2 != NULL", (int)"chatChannel.c", (int)"ciChannelTableCompareFn");
  if ( !v2 )
    Function_20d407c((int)"str1 != NULL", (int)"chatChannel.c", (int)"ciChannelTableCompareFn");
  if ( !v3 )
    Function_20d407c((int)"str2 != NULL", (int)"chatChannel.c", (int)"ciChannelTableCompareFn");
  if ( !v2 )
    Function_20d407c((int)"str1 != NULL", (int)"chatChannel.c", (int)"ciChannelTableCompareFn");
  if ( !*v2 )
    Function_20d407c((int)"str1[0] != '\\0'", (int)"chatChannel.c", (int)"ciChannelTableCompareFn");
  if ( !v3 )
    Function_20d407c((int)"str2 != NULL", (int)"chatChannel.c", (int)"ciChannelTableCompareFn");
  if ( !*v3 )
    Function_20d407c((int)"str2[0] != '\\0'", (int)"chatChannel.c", (int)"ciChannelTableCompareFn");
  return Function_20df9b0(v2, v3);
}

//----- (0224B66C) --------------------------------------------------------
int __fastcall Function_224b66c(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( !a1 )
    Function_20d407c((int)"elem != NULL", (int)"chatChannel.c", (int)"ciChannelTableElementFreeFn");
  ((void (__fastcall *)(uint))dword_21D78B0[0])(*(uint *)(v1 + 348));
  result = *(uint *)(v1 + 308);
  if ( result )
    result = ((int (*)(void))dword_21EA364[0])();
  return result;
}

//----- (0224B6B4) --------------------------------------------------------
int __fastcall Function_224b6b4(uchar *a1, int a2)
{
  uchar *v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    Function_20d407c((int)"elem != NULL", (int)"chatChannel.c", (int)"ciUserTableHashFn");
  if ( v3 <= 0 )
    Function_20d407c((int)"numBuckets > 0", (int)"chatChannel.c", (int)"ciUserTableHashFn");
  return Function_224b414(v2, v3);
}

//----- (0224B714) --------------------------------------------------------
int __fastcall Function_224b714(uint a1, uint a2)
{
  ull v2;
  bool v3;
  int result;

  v2 = __PAIR__(a1, a2);
  if ( !a1 )
    Function_20d407c((int)"elem1 != NULL", (int)"chatChannel.c", (int)"ciUserTableCompareFn");
  if ( !(uint)v2 )
    Function_20d407c((int)"elem2 != NULL", (int)"chatChannel.c", (int)"ciUserTableCompareFn");
  v3 = HIDWORD(v2) == 0;
  if ( HIDWORD(v2) )
    v3 = (uint)v2 == 0;
  if ( v3 )
  {
    if ( v2 )
    {
      if ( HIDWORD(v2) )
        result = 1;
      else
        result = -1;
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    if ( !HIDWORD(v2) )
      Function_20d407c((int)"str1 != NULL", (int)"chatChannel.c", (int)"ciUserTableCompareFn");
    if ( !*(uchar *)HIDWORD(v2) )
      Function_20d407c((int)"str1[0] != '\\0'", (int)"chatChannel.c", (int)"ciUserTableCompareFn");
    if ( !(uint)v2 )
      Function_20d407c((int)"str2 != NULL", (int)"chatChannel.c", (int)"ciUserTableCompareFn");
    if ( !*(uchar *)v2 )
      Function_20d407c((int)"str2[0] != '\\0'", (int)"chatChannel.c", (int)"ciUserTableCompareFn");
    result = Function_20df9b0((uchar *)HIDWORD(v2), (uchar *)v2);
  }
  return result;
}

//----- (0224B830) --------------------------------------------------------
int __fastcall Function_224b830(int result)
{
  if ( !result )
    result = Function_20d407c((int)"elem != NULL", (int)"chatChannel.c", (int)"ciUserTableElementFreeFn");
  return result;
}

//----- (0224B864) --------------------------------------------------------
int __fastcall Function_224b864(int a1)
{
  int v1;
  int v2;
  int v4;

  v1 = a1;
  v2 = ((int (__fastcall *)(int, int, int, int (__fastcall *)(uchar *, int), int (__fastcall *)(uchar *, uchar *), int (__fastcall *)(int)))dword_21EA224[0])(
         484,
         7,
         2,
         Function_224b4ec,
         Function_224b54c,
         Function_224b66c);
  *(uint *)(v1 + 2060) = v2;
  if ( !v2 )
    return 0;
  v4 = ((int (__fastcall *)(int))dword_21E9A8C[0])(484);
  *(uint *)(v1 + 2064) = v4;
  if ( v4 )
    return 1;
  ((void (__fastcall *)(uint))dword_21EA364[0])(*(uint *)(v1 + 2060));
  return 0;
}

//----- (0224B8EC) --------------------------------------------------------
int __fastcall Function_224b8ec(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatChannel.c", (int)"ciCleanupChannels");
  if ( *(uint *)(v1 + 2060) )
    ((void (*)(void))dword_21EA364[0])();
  result = *(uint *)(v1 + 2064);
  if ( result )
    result = ((int (*)(void))dword_21E9B50[0])();
  return result;
}

//----- (0224B940) --------------------------------------------------------
int __fastcall Function_224b940(int a1, char *a2)
{
  int v2;
  char *v3;
  char *v4;
  int v5;
  uint *v6;
  char v8;
  char v9;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatChannel.c", (int)"ciChannelEntering");
  v4 = &v8;
  v5 = 15;
  do
  {
    *(uint *)v4 = 0;
    *((uint *)v4 + 1) = 0;
    *((uint *)v4 + 2) = 0;
    *((uint *)v4 + 3) = 0;
    v6 = v4 + 16;
    *v6 = 0;
    v6[1] = 0;
    v6[2] = 0;
    v6[3] = 0;
    v4 = (char *)(v6 + 4);
    --v5;
  }
  while ( v5 );
  *(uint *)v4 = 0;
  strncpy(&v8, v3, 257);
  v9 = 0;
  return ((int (__fastcall *)(uint, char *))dword_21E9C2C[0])(*(uint *)(v2 + 2064), &v8);
}

//----- (0224B9D0) --------------------------------------------------------
int __fastcall Function_224b9d0(uchar *a1, uchar *a2)
{
  return Function_20df9b0(a1, a2);
}

//----- (0224B9DC) --------------------------------------------------------
int __fastcall Function_224b9dc(int a1, uchar *a2)
{
  int v2;
  uchar *v3;
  int v4;
  int v5;
  uchar *v6;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatChannel.c", (int)"ciIsEnteringChannel");
  v4 = ((int (__fastcall *)(uint))dword_21E9BBC[0])(*(uint *)(v2 + 2064));
  v5 = 0;
  if ( v4 <= 0 )
    return 0;
  while ( 1 )
  {
    v6 = (uchar *)((int (__fastcall *)(uint, int))dword_21E9BC4[0])(*(uint *)(v2 + 2064), v5);
    if ( !v6 )
      Function_20d407c((int)"chatChannel", (int)"chatChannel.c", (int)"ciIsEnteringChannel");
    if ( !Function_20df9b0(v6, v3) )
      break;
    if ( ++v5 >= v4 )
      return 0;
  }
  return 1;
}

//----- (0224BA90) --------------------------------------------------------
uchar *__fastcall Function_224ba90(int a1, char *a2, int *a3)
{
  int v3;
  char *v4;
  int *v5;
  uchar *result;
  int v7;
  char *v8;
  int v9;
  uint *v10;
  int v11;
  int *v12;
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
  char v23;
  char v24;
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
  uchar *v37;
  int v38;
  int v39;
  int v40;
  char v41;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatChannel.c", (int)"ciChannelEntered");
  if ( !v4 )
    Function_20d407c((int)"channel != NULL", (int)"chatChannel.c", (int)"ciChannelEntered");
  if ( !*v4 )
    Function_20d407c((int)"channel[0] != '\\0'", (int)"chatChannel.c", (int)"ciChannelEntered");
  if ( (uint)strlen(v4) >= 0x101 )
    Function_20d407c((int)"strlen(channel) < MAX_CHANNEL", (int)"chatChannel.c", (int)"ciChannelEntered");
  if ( !v5 )
    Function_20d407c((int)"callbacks != NULL", (int)"chatChannel.c", (int)"ciChannelEntered");
  result = (uchar *)((int (__fastcall *)(int))dword_21D7880[0])(2);
  v7 = (int)result;
  if ( result )
  {
    v8 = &v23;
    *result = 0;
    v9 = 15;
    do
    {
      *(uint *)v8 = 0;
      *((uint *)v8 + 1) = 0;
      *((uint *)v8 + 2) = 0;
      *((uint *)v8 + 3) = 0;
      v10 = v8 + 16;
      *v10 = 0;
      v10[1] = 0;
      v10[2] = 0;
      v10[3] = 0;
      v8 = (char *)(v10 + 4);
      --v9;
    }
    while ( v9 );
    *(uint *)v8 = 0;
    v11 = *v5;
    v13 = v5[1];
    v14 = v5[2];
    v15 = v5[3];
    v12 = v5 + 4;
    v25 = v11;
    v26 = v13;
    v27 = v14;
    v28 = v15;
    v16 = *v12;
    v17 = v12[1];
    v18 = v12[2];
    v19 = v12[3];
    v12 += 4;
    v29 = v16;
    v30 = v17;
    v31 = v18;
    v32 = v19;
    v20 = v12[1];
    v21 = v12[2];
    v22 = v12[3];
    v33 = *v12;
    v34 = v20;
    v35 = v21;
    v36 = v22;
    strncpy(&v23, v4, 257);
    v24 = 0;
    result = (uchar *)((int (__fastcall *)(int, int, int, int (__fastcall *)(uchar *, int), int (__fastcall *)(uint, uint), int (__fastcall *)(int)))dword_21EA224[0])(
                        224,
                        61,
                        2,
                        Function_224b6b4,
                        Function_224b714,
                        Function_224b830);
    v37 = result;
    if ( result )
    {
      v38 = 0;
      v39 = v7;
      v40 = 0;
      v41 = 0;
      if ( ((int (__fastcall *)(uint, char *, int (__fastcall *)(uchar *, uchar *)))dword_21E9E40[54])(
             *(uint *)(v3 + 2064),
             &v23,
             Function_224b9d0) != -1 )
        ((void (__fastcall *)(uint))dword_21E9C2C[97])(*(uint *)(v3 + 2064));
      result = (uchar *)((int (__fastcall *)(uint, char *))dword_21EA364[58])(*(uint *)(v3 + 2060), &v23);
    }
  }
  return result;
}

//----- (0224BC80) --------------------------------------------------------
int __fastcall Function_224bc80(int a1, char *a2, int a3, int a4)
{
  int v4;
  char *v5;
  int result;
  char v7;
  char v8;
  int v9;

  v9 = a4;
  v4 = a1;
  v5 = a2;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatChannel.c", (int)"ciChannelLeft");
  if ( !v5 )
    Function_20d407c((int)"channel != NULL", (int)"chatChannel.c", (int)"ciChannelLeft");
  if ( !*v5 )
    Function_20d407c((int)"channel[0] != '\\0'", (int)"chatChannel.c", (int)"ciChannelLeft");
  if ( (uint)strlen(v5) >= 0x101 )
    Function_20d407c((int)"strlen(channel) < MAX_CHANNEL", (int)"chatChannel.c", (int)"ciChannelLeft");
  strncpy(&v7, v5, 257);
  v8 = 0;
  if ( ((int (__fastcall *)(uint, char *, int (__fastcall *)(uchar *, uchar *)))dword_21E9E40[54])(
         *(uint *)(v4 + 2064),
         &v7,
         Function_224b9d0) == -1 )
    result = ((int (__fastcall *)(uint, char *))dword_21EA364[100])(*(uint *)(v4 + 2060), &v7);
  else
    result = ((int (__fastcall *)(uint))dword_21E9C2C[97])(*(uint *)(v4 + 2064));
  return result;
}

//----- (0224BD94) --------------------------------------------------------
int __fastcall Function_224bd94(int a1, char *a2)
{
  int v2;
  char *v3;
  uint v4;
  int v5;
  int v6;
  int v7;
  int result;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatChannel.c", (int)"ciGetChannelCallbacks");
  if ( !v3 )
    Function_20d407c((int)"channel != NULL", (int)"chatChannel.c", (int)"ciGetChannelCallbacks");
  if ( !*v3 )
    Function_20d407c((int)"channel[0] != '\\0'", (int)"chatChannel.c", (int)"ciGetChannelCallbacks");
  v4 = strlen(v3);
  v6 = 257;
  if ( v4 >= 0x101 )
    Function_20d407c((int)"strlen(channel) < MAX_CHANNEL", (int)"chatChannel.c", (int)"ciGetChannelCallbacks");
  v7 = Function_224b4b4(v2, v3, v5, v6);
  if ( v7 )
    result = v7 + 260;
  else
    result = 0;
  return result;
}

//----- (0224BE5C) --------------------------------------------------------
int __fastcall Function_224be5c(int a1, uint *a2)
{
  int v2;
  uint *v3;
  int v4;
  int result;
  int v6;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    Function_20d407c((int)"elem != NULL", (int)"chatChannel.c", (int)"ciChannelListUsersMap");
  if ( !v3 )
    Function_20d407c((int)"clientData != NULL", (int)"chatChannel.c", (int)"ciChannelListUsersMap");
  if ( !v2 )
    Function_20d407c((int)"user->name != NULL", (int)"chatChannel.c", (int)"ciChannelListUsersMap");
  if ( !*(uchar *)v2 )
    Function_20d407c((int)"user->name[0] != '\\0'", (int)"chatChannel.c", (int)"ciChannelListUsersMap");
  if ( (uint)strlen((char *)v2) >= 0x80 )
    Function_20d407c((int)"strlen(user->name) < MAX_NAME", (int)"chatChannel.c", (int)"ciChannelListUsersMap");
  if ( v3[1] < 0 )
    Function_20d407c((int)"data->numUsers >= 0", (int)"chatChannel.c", (int)"ciChannelListUsersMap");
  v4 = ((int (__fastcall *)(uint, int))dword_21D7894[0])(v3[2], 4 * (v3[1] + 1));
  if ( !v4 )
    return Function_20d407c((int)"0", (int)"chatChannel.c", (int)"ciChannelListUsersMap");
  v3[2] = v4;
  v6 = ((int (__fastcall *)(uint, int))dword_21D7894[0])(v3[3], 4 * (v3[1] + 1));
  if ( !v6 )
    return Function_20d407c((int)"0", (int)"chatChannel.c", (int)"ciChannelListUsersMap");
  v3[3] = v6;
  *(uint *)(v3[2] + 4 * v3[1]) = v2;
  *(uint *)(v3[3] + 4 * v3[1]) = *(uint *)(v2 + 220);
  result = v3[1] + 1;
  v3[1] = result;
  return result;
}

//----- (0224BFE8) --------------------------------------------------------
int __fastcall Function_224bfe8(int a1, char *a2, void (__fastcall *a3)(int, char *, int, int, int, int), int a4)
{
  int v4;
  char *v5;
  void (__fastcall *v6)(int, char *, int, int, int, int);
  int v7;
  uint v8;
  int v9;
  int v10;
  int result;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v16 = a4;
  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatChannel.c", (int)"ciChannelListUsers");
  if ( !v5 )
    Function_20d407c((int)"channel != NULL", (int)"chatChannel.c", (int)"ciChannelListUsers");
  if ( !*v5 )
    Function_20d407c((int)"channel[0] != '\\0'", (int)"chatChannel.c", (int)"ciChannelListUsers");
  v8 = strlen(v5);
  v10 = 257;
  if ( v8 >= 0x101 )
    Function_20d407c((int)"strlen(channel) < MAX_CHANNEL", (int)"chatChannel.c", (int)"ciChannelListUsers");
  if ( !v6 )
    Function_20d407c((int)"callback != NULL", (int)"chatChannel.c", (int)"ciChannelListUsers");
  result = Function_224b4b4(v4, v5, v9, v10);
  if ( result )
  {
    v12 = v4;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    ((void (__fastcall *)(uint, int (__fastcall *)(int, uint *), int *))dword_21EA638[0])(
      *(uint *)(result + 308),
      Function_224be5c,
      &v12);
    v6(v4, v5, v13, v14, v15, v7);
    ((void (__fastcall *)(int))dword_21D78B0[0])(v14);
    result = ((int (__fastcall *)(int))dword_21D78B0[0])(v15);
  }
  return result;
}

//----- (0224C134) --------------------------------------------------------
BOOL __fastcall Function_224c134(int a1, char *a2, int a3, int a4)
{
  int v4;
  char *v5;

  v4 = a1;
  v5 = a2;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatChannel.c", (int)"ciInChannel");
  return Function_224b4b4(v4, v5, a3, a4) != 0;
}

//----- (0224C184) --------------------------------------------------------
int __fastcall Function_224c184(int a1, char *a2, uchar *a3)
{
  int v3;
  char *v4;
  uchar *v5;
  int v6;
  int v7;
  int v8;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatChannel.c", (int)"ciGetChannelMode");
  if ( !v4 )
    Function_20d407c((int)"channel != NULL", (int)"chatChannel.c", (int)"ciGetChannelMode");
  if ( !*v4 )
    Function_20d407c((int)"channel[0] != '\\0'", (int)"chatChannel.c", (int)"ciGetChannelMode");
  if ( (uint)strlen(v4) >= 0x101 )
    Function_20d407c((int)"strlen(channel) < MAX_CHANNEL", (int)"chatChannel.c", (int)"ciGetChannelMode");
  v8 = Function_224b4b4(v3, v4, v6, v7);
  if ( !v8 )
    return 0;
  if ( !*(uint *)(v8 + 344) )
    return 0;
  memcpy(v5, (char *)(v8 + 312), 32);
  return 1;
}

//----- (0224C270) --------------------------------------------------------
uchar *__fastcall Function_224c270(int a1, char *a2, char *a3)
{
  int v3;
  char *v4;
  char *v5;
  uint v6;
  int v7;
  int v8;
  uchar *result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatChannel.c", (int)"ciSetChannelMode");
  if ( !v4 )
    Function_20d407c((int)"channel != NULL", (int)"chatChannel.c", (int)"ciSetChannelMode");
  if ( !*v4 )
    Function_20d407c((int)"channel[0] != '\\0'", (int)"chatChannel.c", (int)"ciSetChannelMode");
  v6 = strlen(v4);
  v8 = 257;
  if ( v6 >= 0x101 )
    Function_20d407c((int)"strlen(channel) < MAX_CHANNEL", (int)"chatChannel.c", (int)"ciSetChannelMode");
  result = (uchar *)Function_224b4b4(v3, v4, v7, v8);
  if ( result )
  {
    *((uint *)result + 86) = 1;
    result = memcpy(result + 312, v5, 32);
  }
  return result;
}

//----- (0224C350) --------------------------------------------------------
uchar *__fastcall Function_224c350(int a1, char *a2, char *a3)
{
  int v3;
  char *v4;
  char *v5;
  int v6;
  int v7;
  uchar *result;
  uchar *v9;
  int v10;
  int v11;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatChannel.c", (int)"ciSetChannelPassword");
  if ( !v4 )
    Function_20d407c((int)"channel != NULL", (int)"chatChannel.c", (int)"ciSetChannelPassword");
  if ( !*v4 )
    Function_20d407c((int)"channel[0] != '\\0'", (int)"chatChannel.c", (int)"ciSetChannelPassword");
  if ( (uint)strlen(v4) >= 0x101 )
    Function_20d407c((int)"strlen(channel) < MAX_CHANNEL", (int)"chatChannel.c", (int)"ciSetChannelPassword");
  result = (uchar *)Function_224b4b4(v3, v4, v6, v7);
  v9 = result;
  if ( result )
  {
    ((void (__fastcall *)(uint))dword_21D78B0[0])(*((uint *)result + 87));
    if ( !v5 )
      v5 = &byte_225992C;
    v10 = strlen(v5);
    v11 = v10;
    result = (uchar *)((int (__fastcall *)(int))dword_21D7880[0])(v10 + 1);
    *((uint *)v9 + 87) = result;
    if ( result )
      result = memcpy(result, v5, v11 + 1);
  }
  return result;
}

//----- (0224C454) --------------------------------------------------------
int __fastcall Function_224c454(int a1, char *a2)
{
  int v2;
  char *v3;
  int v4;
  int v5;
  int result;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatChannel.c", (int)"ciJoinCallbackCalled");
  if ( !v3 )
    Function_20d407c((int)"channel != NULL", (int)"chatChannel.c", (int)"ciJoinCallbackCalled");
  if ( !*v3 )
    Function_20d407c((int)"channel[0] != '\\0'", (int)"chatChannel.c", (int)"ciJoinCallbackCalled");
  if ( (uint)strlen(v3) >= 0x101 )
    Function_20d407c((int)"strlen(channel) < MAX_CHANNEL", (int)"chatChannel.c", (int)"ciJoinCallbackCalled");
  result = Function_224b4b4(v2, v3, v4, v5);
  if ( result )
    *(uint *)(result + 352) = 1;
  return result;
}

//----- (0224C518) --------------------------------------------------------
int __fastcall Function_224c518(int a1, char *a2)
{
  int v2;
  char *v3;
  int v4;
  int v5;
  int v6;
  int result;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatChannel.c", (int)"ciWasJoinCallbackCalled");
  if ( !v3 )
    Function_20d407c((int)"channel != NULL", (int)"chatChannel.c", (int)"ciWasJoinCallbackCalled");
  if ( !*v3 )
    Function_20d407c((int)"channel[0] != '\\0'", (int)"chatChannel.c", (int)"ciWasJoinCallbackCalled");
  if ( (uint)strlen(v3) >= 0x101 )
    Function_20d407c((int)"strlen(channel) < MAX_CHANNEL", (int)"chatChannel.c", (int)"ciWasJoinCallbackCalled");
  v6 = Function_224b4b4(v2, v3, v4, v5);
  if ( v6 )
    result = *(uint *)(v6 + 352);
  else
    result = 0;
  return result;
}

//----- (0224C5DC) --------------------------------------------------------
int __fastcall Function_224c5dc(int a1, char *a2, char *a3)
{
  int v3;
  char *v4;
  char *v5;
  int v6;
  int v7;
  int result;
  int v9;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatChannel.c", (int)"ciSetChannelTopic");
  if ( !v4 )
    Function_20d407c((int)"channel != NULL", (int)"chatChannel.c", (int)"ciSetChannelTopic");
  if ( !*v4 )
    Function_20d407c((int)"channel[0] != '\\0'", (int)"chatChannel.c", (int)"ciSetChannelTopic");
  if ( (uint)strlen(v4) >= 0x101 )
    Function_20d407c((int)"strlen(channel) < MAX_CHANNEL", (int)"chatChannel.c", (int)"ciSetChannelTopic");
  result = Function_224b4b4(v3, v4, v6, v7);
  v9 = result;
  if ( result )
  {
    strncpy((uchar *)(result + 356), v5, 128);
    result = 0;
    *(uchar *)(v9 + 483) = 0;
  }
  return result;
}

//----- (0224C6B8) --------------------------------------------------------
int __fastcall Function_224c6b8(int a1, char *a2)
{
  int v2;
  char *v3;
  int v4;
  int v5;
  int v6;
  int result;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatChannel.c", (int)"ciGetChannelNumUsers");
  if ( !v3 )
    Function_20d407c((int)"channel != NULL", (int)"chatChannel.c", (int)"ciGetChannelNumUsers");
  if ( !*v3 )
    Function_20d407c((int)"channel[0] != '\\0'", (int)"chatChannel.c", (int)"ciGetChannelNumUsers");
  if ( (uint)strlen(v3) >= 0x101 )
    Function_20d407c((int)"strlen(channel) < MAX_CHANNEL", (int)"chatChannel.c", (int)"ciGetChannelNumUsers");
  v6 = Function_224b4b4(v2, v3, v4, v5);
  if ( v6 )
    result = ((int (__fastcall *)(uint))dword_21EA364[29])(*(uint *)(v6 + 308));
  else
    result = -1;
  return result;
}

//----- (0224C784) --------------------------------------------------------
int __fastcall Function_224c784(int a1, char *a2, char *a3, int a4, char *a5, char *a6)
{
  int v6;
  char *v7;
  char *v8;
  int v9;
  int v10;
  int v11;
  int result;
  int v13;
  char *v14;
  int v15;
  uint *v16;
  bool v17;
  char v18;
  char v19;
  char v20;
  char v21;
  char v22;
  char v23;
  int v24;
  int v25;
  int v26;

  v26 = a4;
  v6 = a1;
  v7 = a2;
  v8 = a3;
  v9 = a4;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatChannel.c", (int)"ciUserEnteredChannel");
  if ( !v7 )
    Function_20d407c((int)"name != NULL", (int)"chatChannel.c", (int)"ciUserEnteredChannel");
  if ( !*v7 )
    Function_20d407c((int)"name[0] != '\\0'", (int)"chatChannel.c", (int)"ciUserEnteredChannel");
  if ( (uint)strlen(v7) >= 0x80 )
    Function_20d407c((int)"strlen(name) < MAX_NAME", (int)"chatChannel.c", (int)"ciUserEnteredChannel");
  if ( !v8 )
    Function_20d407c((int)"channel != NULL", (int)"chatChannel.c", (int)"ciUserEnteredChannel");
  if ( !*v8 )
    Function_20d407c((int)"channel[0] != '\\0'", (int)"chatChannel.c", (int)"ciUserEnteredChannel");
  if ( v9 < 0 || v9 > 3 )
    Function_20d407c((int)"(mode >= 0) && (mode <= 3)", (int)"chatChannel.c", (int)"ciUserEnteredChannel");
  result = Function_224b4b4(v6, v8, v10, v11);
  v13 = result;
  if ( result )
  {
    v14 = &v18;
    v15 = 7;
    do
    {
      *(uint *)v14 = 0;
      *((uint *)v14 + 1) = 0;
      *((uint *)v14 + 2) = 0;
      *((uint *)v14 + 3) = 0;
      v16 = v14 + 16;
      *v16 = 0;
      v16[1] = 0;
      v16[2] = 0;
      v16[3] = 0;
      v14 = (char *)(v16 + 4);
      --v15;
    }
    while ( v15 );
    strncpy(&v18, v7, 128);
    v19 = 0;
    v17 = a5 == 0;
    if ( a5 )
      v17 = a6 == 0;
    if ( v17 )
    {
      v24 = 0;
    }
    else
    {
      strncpy(&v20, a5, 24);
      v21 = 0;
      strncpy(&v22, a6, 64);
      v23 = 0;
      v24 = 1;
    }
    v25 = v9;
    ((void (__fastcall *)(uint, char *))dword_21EA364[58])(*(uint *)(v13 + 308), &v18);
    result = ((int (__fastcall *)(uint, char *))dword_21EA598[0])(*(uint *)(v13 + 308), &v18);
    if ( !result )
      result = Function_20d407c(
                 (int)"TableLookup(chatChannel->users, &chatUser) != NULL",
                 (int)"chatChannel.c",
                 (int)"ciUserEnteredChannel");
  }
  return result;
}

//----- (0224C994) --------------------------------------------------------
int __fastcall Function_224c994(int a1, char *a2, char *a3)
{
  int v3;
  char *v4;
  char *v5;
  int v6;
  int v7;
  int result;
  int v9;
  char v10;
  char v11;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatChannel.c", (int)"ciUserLeftChannel");
  if ( !v4 )
    Function_20d407c((int)"user != NULL", (int)"chatChannel.c", (int)"ciUserLeftChannel");
  if ( !*v4 )
    Function_20d407c((int)"user[0] != '\\0'", (int)"chatChannel.c", (int)"ciUserLeftChannel");
  if ( (uint)strlen(v4) >= 0x80 )
    Function_20d407c((int)"strlen(user) < MAX_NAME", (int)"chatChannel.c", (int)"ciUserLeftChannel");
  if ( !v5 )
    Function_20d407c((int)"channel != NULL", (int)"chatChannel.c", (int)"ciUserLeftChannel");
  if ( !*v5 )
    Function_20d407c((int)"channel[0] != '\\0'", (int)"chatChannel.c", (int)"ciUserLeftChannel");
  result = Function_224b4b4(v3, v5, v6, v7);
  v9 = result;
  if ( result )
  {
    strncpy(&v10, v4, 128);
    v11 = 0;
    result = ((int (__fastcall *)(uint, char *))dword_21EA364[100])(*(uint *)(v9 + 308), &v10);
  }
  return result;
}

//----- (0224CAC8) --------------------------------------------------------
int __fastcall Function_224cac8(int a1, uint *a2)
{
  int v2;
  uint *v3;
  int result;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    Function_20d407c((int)"elem != NULL", (int)"chatChannel.c", (int)"ciUserEnumChannelsMap");
  if ( !v3 )
    Function_20d407c((int)"clientData != NULL", (int)"chatChannel.c", (int)"ciUserEnumChannelsMap");
  if ( !*(uint *)(v2 + 308) )
    Function_20d407c((int)"channel->users != NULL", (int)"chatChannel.c", (int)"ciUserEnumChannelsMap");
  if ( !v3[1] )
    Function_20d407c((int)"data->user != NULL", (int)"chatChannel.c", (int)"ciUserEnumChannelsMap");
  if ( !*(uchar *)v3[1] )
    Function_20d407c((int)"data->user->name[0] != '\\0'", (int)"chatChannel.c", (int)"ciUserEnumChannelsMap");
  if ( !v3[2] )
    Function_20d407c((int)"data->callback != NULL", (int)"chatChannel.c", (int)"ciUserEnumChannelsMap");
  result = ((int (__fastcall *)(uint, uint))dword_21EA598[0])(*(uint *)(v2 + 308), v3[1]);
  if ( result )
    result = ((int (__fastcall *)(uint, uint, int, uint))v3[2])(*v3, v3[1], v2, v3[3]);
  return result;
}

//----- (0224CBE4) --------------------------------------------------------
int __fastcall Function_224cbe4(int a1, char *a2, int a3, int a4)
{
  int v4;
  char *v5;
  int v6;
  int v7;
  int v9;
  char *v10;
  int v11;
  int v12;
  char v13;
  char v14;
  int v15;

  v15 = a4;
  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatChannel.c", (int)"ciUserEnumChannels");
  if ( !v5 )
    Function_20d407c((int)"user != NULL", (int)"chatChannel.c", (int)"ciUserEnumChannels");
  if ( !*v5 )
    Function_20d407c((int)"user[0] != '\\0'", (int)"chatChannel.c", (int)"ciUserEnumChannels");
  if ( (uint)strlen(v5) >= 0x80 )
    Function_20d407c((int)"strlen(user) < MAX_NAME", (int)"chatChannel.c", (int)"ciUserEnumChannels");
  if ( !v6 )
    Function_20d407c((int)"callback != NULL", (int)"chatChannel.c", (int)"ciUserEnumChannels");
  strncpy(&v13, v5, 128);
  v14 = 0;
  v9 = v4;
  v11 = v6;
  v12 = v7;
  v10 = &v13;
  return ((int (__fastcall *)(uint, int (__fastcall *)(int, uint *), int *))dword_21EA638[0])(
           *(uint *)(v4 + 2060),
           Function_224cac8,
           &v9);
}

//----- (0224CCFC) --------------------------------------------------------
char *__fastcall Function_224ccfc(int a1, int *a2, int a3, int a4)
{
  int v4;
  int *v5;
  char *result;
  char *v7;
  bool v8;
  int v9;
  char v10;
  char v11;
  int v12;

  v12 = a4;
  v4 = a1;
  v5 = a2;
  if ( !a1 )
    Function_20d407c((int)"elem != NULL", (int)"chatChannel.c", (int)"ciUserChangeNickMap");
  if ( !v5 )
    Function_20d407c((int)"clientData != NULL", (int)"chatChannel.c", (int)"ciUserChangeNickMap");
  if ( !*(uint *)(v4 + 308) )
    Function_20d407c((int)"channel->users != NULL", (int)"chatChannel.c", (int)"ciUserChangeNickMap");
  if ( !v5[2] )
    Function_20d407c((int)"data->newNick != NULL", (int)"chatChannel.c", (int)"ciUserChangeNickMap");
  if ( !*(uchar *)v5[2] )
    Function_20d407c((int)"data->newNick[0] != '\\0'", (int)"chatChannel.c", (int)"ciUserChangeNickMap");
  if ( (uint)strlen((char *)v5[2]) >= 0x80 )
    Function_20d407c((int)"strlen(data->newNick) < MAX_NAME", (int)"chatChannel.c", (int)"ciUserChangeNickMap");
  if ( !v5[1] )
    Function_20d407c((int)"data->oldNick != NULL", (int)"chatChannel.c", (int)"ciUserChangeNickMap");
  if ( !*(uchar *)v5[1] )
    Function_20d407c((int)"data->oldNick[0] != '\\0'", (int)"chatChannel.c", (int)"ciUserChangeNickMap");
  if ( (uint)strlen((char *)v5[1]) >= 0x80 )
    Function_20d407c((int)"strlen(data->oldNick) < MAX_NAME", (int)"chatChannel.c", (int)"ciUserChangeNickMap");
  result = (char *)((int (__fastcall *)(uint, int))dword_21EA598[0])(*(uint *)(v4 + 308), v5[1]);
  v7 = result;
  if ( result )
  {
    memcpy(&v10, result, 224);
    if ( !((int (__fastcall *)(uint, char *))dword_21EA364[100])(*(uint *)(v4 + 308), v7) )
      Function_20d407c((int)"rcode != 0", (int)"chatChannel.c", (int)"ciUserChangeNickMap");
    strncpy(&v10, (char *)v5[2], 128);
    v11 = 0;
    ((void (__fastcall *)(uint, char *))dword_21EA364[58])(*(uint *)(v4 + 308), &v10);
    result = (char *)Function_224c518(*v5, (char *)v4);
    v8 = result == 0;
    if ( result )
    {
      result = *(char **)(v4 + 276);
      v8 = result == 0;
    }
    if ( !v8 )
    {
      v9 = v4;
      result = (char *)Function_2248c2c(
                         *v5,
                         8,
                         *(uint *)(v4 + 276),
                         &v9,
                         *(uint *)(v4 + 304),
                         0,
                         v4,
                         12,
                         v4,
                         v5[1],
                         v5[2]);
    }
  }
  return result;
}

//----- (0224CF50) --------------------------------------------------------
int __fastcall Function_224cf50(int a1, char *a2, char *a3, int a4)
{
  int v4;
  char *v5;
  char *v6;
  int v8;
  char *v9;
  char *v10;
  int v11;

  v11 = a4;
  v4 = a1;
  v5 = a2;
  v6 = a3;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatChannel.c", (int)"ciUserChangedNick");
  if ( !v5 )
    Function_20d407c((int)"oldNick != NULL", (int)"chatChannel.c", (int)"ciUserChangedNick");
  if ( !*v5 )
    Function_20d407c((int)"oldNick[0] != '\\0'", (int)"chatChannel.c", (int)"ciUserChangedNick");
  if ( (uint)strlen(v5) >= 0x80 )
    Function_20d407c((int)"strlen(oldNick) < MAX_NAME", (int)"chatChannel.c", (int)"ciUserChangedNick");
  if ( !v6 )
    Function_20d407c((int)"newNick != NULL", (int)"chatChannel.c", (int)"ciUserChangedNick");
  if ( !*v6 )
    Function_20d407c((int)"newNick[0] != '\\0'", (int)"chatChannel.c", (int)"ciUserChangedNick");
  if ( (uint)strlen(v6) >= 0x80 )
    Function_20d407c((int)"strlen(newNick) < MAX_NAME", (int)"chatChannel.c", (int)"ciUserChangedNick");
  v8 = v4;
  v9 = v5;
  v10 = v6;
  return ((int (__fastcall *)(uint, char *(__fastcall *)(int, int *, int, int), int *))dword_21EA638[0])(
           *(uint *)(v4 + 2060),
           Function_224ccfc,
           &v8);
}

//----- (0224D090) --------------------------------------------------------
int __fastcall Function_224d090(int a1, char *a2, char *a3, int a4, int a5)
{
  int v5;
  char *v6;
  char *v7;
  int v8;
  int result;
  uint *v10;
  int v11;
  int v12;
  int v13;
  char *v14;
  char *v15;
  char v16;
  char v17;
  char v18;
  char v19;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatChannel.c", (int)"ciUserChangedMode");
  if ( !v6 )
    Function_20d407c((int)"user != NULL", (int)"chatChannel.c", (int)"ciUserChangedMode");
  if ( !*v6 )
    Function_20d407c((int)"user[0] != '\\0'", (int)"chatChannel.c", (int)"ciUserChangedMode");
  if ( (uint)strlen(v6) >= 0x80 )
    Function_20d407c((int)"strlen(user) < MAX_NAME", (int)"chatChannel.c", (int)"ciUserChangedMode");
  if ( !v7 )
    Function_20d407c((int)"channel != NULL", (int)"chatChannel.c", (int)"ciUserChangedMode");
  if ( !*v7 )
    Function_20d407c((int)"channel[0] != '\\0'", (int)"chatChannel.c", (int)"ciUserChangedMode");
  if ( v8 < 0 || v8 > 3 )
    Function_20d407c((int)"(mode >= 0) && (mode <= 3)", (int)"chatChannel.c", (int)"ciUserChangedMode");
  strncpy(&v18, v7, 257);
  v19 = 0;
  result = ((int (__fastcall *)(uint, char *))dword_21EA598[0])(*(uint *)(v5 + 2060), &v18);
  v10 = (uint *)result;
  if ( result )
  {
    strncpy(&v16, v6, 128);
    v17 = 0;
    result = ((int (__fastcall *)(uint, char *))dword_21EA598[0])(v10[77], &v16);
    if ( result )
    {
      v12 = a5;
      if ( a5 )
        v12 = *(uint *)(result + 220);
      else
        v11 = *(uint *)(result + 220);
      if ( a5 )
        v13 = v12 | v8;
      else
        v13 = v11 & ~v8;
      *(uint *)(result + 220) = v13;
      if ( v10[72] )
      {
        v14 = v7;
        v15 = v6;
        result = Function_2248c2c(v5, 11, v10[72], &v14, v10[76], 0, v7, 12, v7, v6, *(uint *)(result + 220));
      }
    }
  }
  return result;
}

//----- (0224D28C) --------------------------------------------------------
int __fastcall Function_224d28c(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    Function_20d407c((int)"elem != NULL", (int)"chatChannel.c", (int)"ciSetUserBasicInfoMap");
  if ( !v3 )
    Function_20d407c((int)"clientData != NULL", (int)"chatChannel.c", (int)"ciSetUserBasicInfoMap");
  if ( !*(uint *)(v2 + 308) )
    Function_20d407c((int)"channel->users != NULL", (int)"chatChannel.c", (int)"ciSetUserBasicInfoMap");
  result = ((int (__fastcall *)(uint, uint))dword_21EA598[0])(*(uint *)(v2 + 308), *(uint *)v3);
  v5 = result;
  if ( result )
  {
    strncpy((uchar *)(result + 128), *(char **)(v3 + 4), 24);
    *(uchar *)(v5 + 151) = 0;
    strncpy((uchar *)(v5 + 152), *(char **)(v3 + 8), 64);
    *(uchar *)(v5 + 215) = 0;
    result = 1;
    *(uint *)(v5 + 216) = 1;
  }
  return result;
}

//----- (0224D35C) --------------------------------------------------------
int __fastcall Function_224d35c(int a1, char *a2, int a3, int a4)
{
  int v4;
  char *v5;
  int v6;
  int v7;
  char *v9;
  int v10;
  int v11;
  char v12;
  char v13;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatChannel.c", (int)"ciSetUserBasicInfo");
  if ( !v5 )
    Function_20d407c((int)"nick != NULL", (int)"chatChannel.c", (int)"ciSetUserBasicInfo");
  if ( !*v5 )
    Function_20d407c((int)"nick[0] != '\\0'", (int)"chatChannel.c", (int)"ciSetUserBasicInfo");
  if ( (uint)strlen(v5) >= 0x80 )
    Function_20d407c((int)"strlen(nick) < MAX_NAME", (int)"chatChannel.c", (int)"ciSetUserBasicInfo");
  strncpy(&v12, v5, 128);
  v13 = 0;
  v10 = v6;
  v11 = v7;
  v9 = &v12;
  return ((int (__fastcall *)(uint, int (__fastcall *)(int, int), char **))dword_21EA638[0])(
           *(uint *)(v4 + 2060),
           Function_224d28c,
           &v9);
}

//----- (0224D450) --------------------------------------------------------
int __fastcall Function_224d450(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int result;
  int v8;
  int v9;
  int v10;
  uchar v11;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = 0;
  do
  {
    *(uchar *)(a3 + 255 - v6) = v6;
    ++v6;
  }
  while ( v6 < 256 );
  result = 0;
  *(uchar *)(a3 + 256) = 0;
  v8 = 0;
  v9 = 0;
  *(uchar *)(a3 + 257) = 0;
  do
  {
    v10 = *(uchar *)(v5 + v9);
    v8 = (uchar)((v8 + *(uchar *)(v4 + result) + v10 < 0)
                         + __ROR4__(
                             ((v8 + *(uchar *)(v4 + result) + v10) << 24)
                           - ((v8 + (uint)*(uchar *)(v4 + result) + v10) >> 31),
                             24));
    *(uchar *)(v5 + v9) = *(uchar *)(v5 + v8);
    *(uchar *)(v5 + v8) = v10;
    s32_div_f(result + 1, v3);
    ++v9;
    result = v11;
  }
  while ( v9 < 256 );
  return result;
}

//----- (0224D4D8) --------------------------------------------------------
int __fastcall Function_224d4d8(int result, int a2, int a3)
{
  int v3;
  int v4;
  int i;
  int v6;

  v3 = *(uchar *)(a3 + 256);
  v4 = *(uchar *)(a3 + 257);
  for ( i = 0; i < a2; ++i )
  {
    v3 = (uchar)((v3 + 1 < 0) + __ROR4__(((v3 + 1) << 24) - ((uint)(v3 + 1) >> 31), 24));
    v6 = *(uchar *)(a3 + v3);
    v4 = (uchar)((v4 + v6 < 0) + __ROR4__(((v4 + v6) << 24) - ((uint)(v4 + v6) >> 31), 24));
    *(uchar *)(a3 + v3) = *(uchar *)(a3 + v4);
    *(uchar *)(a3 + v4) = v6;
    *(uchar *)(result + i) ^= *(uchar *)(a3
                                       + (uchar)((*(uchar *)(a3 + v3) + v6 < 0)
                                                         + __ROR4__(
                                                             ((*(uchar *)(a3 + v3) + v6) << 24)
                                                           - (((uint)*(uchar *)(a3 + v3) + v6) >> 31),
                                                             24)));
  }
  *(uchar *)(a3 + 256) = v3;
  *(uchar *)(a3 + 257) = v4;
  return result;
}

//----- (0224D568) --------------------------------------------------------
int __fastcall Function_224d568(int result, int a2, uchar *a3)
{
  uchar *v3;
  int v4;
  int v5;

  v3 = a3;
  v4 = 0;
  while ( v4 < a2 )
  {
    *(uchar *)(result + v4) ^= *v3;
    v5 = (char)(v3++)[1];
    ++v4;
    if ( !v5 )
      v3 = a3;
  }
  return result;
}

//----- (0224D5A8) --------------------------------------------------------
int __fastcall Function_224d5a8(int a1, int a2, uint *a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  uint *v7;
  int v8;
  uchar *v9;
  uchar *v10;
  uchar *v11;
  bool v12;
  bool v13;
  bool v14;
  bool v15;
  int v16;
  int result;
  uint *v18;

  v3 = a1;
  v4 = a2;
  v18 = a3;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatHandlers.c", (int)"ciFindFilter");
  if ( v4 <= 0 )
    Function_20d407c((int)"numMatches > 0", (int)"chatHandlers.c", (int)"ciFindFilter");
  if ( !v18 )
    Function_20d407c((int)"matches", (int)"chatHandlers.c", (int)"ciFindFilter");
  v5 = *(uint *)(v3 + 2068);
  if ( !v5 )
    return 0;
  while ( 1 )
  {
    v6 = 0;
    if ( v4 > 0 )
      break;
LABEL_32:
    v5 = *(uint *)(v5 + 36);
    if ( !v5 )
      return 0;
  }
  v7 = v18;
  while ( 1 )
  {
    v8 = 0;
    if ( *v7 >= 0 && *v7 < 17 )
      v8 = 1;
    if ( !v8 )
      Function_20d407c(
        (int)"(matches[i].type >= 0) && (matches[i].type < NUM_TYPES)",
        (int)"chatHandlers.c",
        (int)"ciFindFilter");
    v9 = *(uchar **)v5;
    if ( *(uint *)v5 == *v7 )
    {
      v10 = (uchar *)v7[1];
      v11 = (uchar *)v7[2];
      v12 = v10 == 0;
      if ( !v10 )
      {
        v9 = *(uchar **)(v5 + 8);
        v12 = v9 == 0;
      }
      if ( v12 )
        goto LABEL_36;
      v13 = v10 == 0;
      if ( v10 )
      {
        v9 = *(uchar **)(v5 + 8);
        v13 = v9 == 0;
      }
      if ( !v13 && !Function_20df9b0(v10, v9) )
      {
LABEL_36:
        v14 = v11 == 0;
        if ( !v11 )
          v14 = *(uint *)(v5 + 12) == 0;
        if ( v14 )
          break;
        v15 = v11 == 0;
        if ( v11 )
        {
          v9 = *(uchar **)(v5 + 12);
          v15 = v9 == 0;
        }
        if ( !v15 && !Function_20df9b0(v11, v9) )
          break;
      }
    }
    ++v6;
    v7 += 3;
    if ( v6 >= v4 )
      goto LABEL_32;
  }
  v16 = ((int (*)(void))dword_21EA840[0])() + 60000;
  result = v5;
  *(uint *)(v5 + 4) = v16;
  return result;
}

//----- (0224D738) --------------------------------------------------------
int __fastcall Function_224d738(int a1, uchar *a2)
{
  int v2;
  uchar *v3;
  uint *v4;
  int result;
  bool v6;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatHandlers.c", (int)"ciFindGetKeyFilter");
  if ( !v3 )
    Function_20d407c((int)"channel", (int)"chatHandlers.c", (int)"ciFindGetKeyFilter");
  if ( !*v3 )
    Function_20d407c((int)"channel[0]", (int)"chatHandlers.c", (int)"ciFindGetKeyFilter");
  v4 = *(uint **)(v2 + 2068);
  if ( !v4 )
    return 0;
  while ( 1 )
  {
    if ( *v4 == 12 )
    {
      result = Function_20df9b0(*(uchar **)(v4[7] + 8), v3);
      v6 = result == 0;
      if ( !result )
        result = (int)v4;
      if ( v6 )
        break;
    }
    v4 = (uint *)v4[9];
    if ( !v4 )
      return 0;
  }
  return result;
}

//----- (0224D800) --------------------------------------------------------
int __fastcall Function_224d800(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( !a1 )
    Function_20d407c((int)"filter != NULL", (int)"chatHandlers.c", (int)"ciDestroyFilter");
  ((void (__fastcall *)(uint))dword_21D78B0[0])(v1[7]);
  ((void (__fastcall *)(uint))dword_21D78B0[0])(v1[2]);
  ((void (__fastcall *)(uint))dword_21D78B0[0])(v1[3]);
  return ((int (__fastcall *)(uint *))dword_21D78B0[0])(v1);
}

//----- (0224D854) --------------------------------------------------------
uint *__fastcall Function_224d854(int a1, uint *a2)
{
  int v2;
  uint *v3;
  uint *v4;
  uint *v5;
  uint *result;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatHandlers.c", (int)"ciRemoveFilter");
  if ( !v3 )
    Function_20d407c((int)"filter != NULL", (int)"chatHandlers.c", (int)"ciRemoveFilter");
  v5 = *(uint **)(v2 + 2068);
  result = v5;
  if ( v5 )
  {
    while ( result != v3 )
    {
      v4 = result;
      result = (uint *)result[9];
      if ( !result )
        return result;
    }
    if ( v5 == result )
      *(uint *)(v2 + 2068) = result[9];
    if ( *(uint **)(v2 + 2072) == result )
      *(uint *)(v2 + 2072) = v4;
    if ( v4 )
      v4[9] = result[9];
    result = (uint *)Function_224d800(result);
  }
  return result;
}

//----- (0224D908) --------------------------------------------------------
uint *__fastcall Function_224d908(int a1, int *a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint *v10;
  int jj;
  int v12;
  int v13;
  int v14;
  uint *v15;
  int i;
  int v17;
  uint *v18;
  int j;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  uint *v25;
  int k;
  int v27;
  int v28;
  uint *v29;
  int l;
  int v31;
  uint *v32;
  int m;
  int v34;
  uint *v35;
  int n;
  int v37;
  uint *v38;
  int ii;
  int v40;
  int v42;

  v42 = a4;
  v4 = a2;
  v5 = a1;
  v6 = a3;
  if ( !a2 )
    Function_20d407c((int)"filter", (int)"chatHandlers.c", (int)"ciFinishFilter");
  v7 = 0;
  if ( *v4 >= 0 && *v4 < 17 )
    v7 = 1;
  if ( !v7 )
    Function_20d407c(
      (int)"(filter->type >= 0) && (filter->type < NUM_TYPES)",
      (int)"chatHandlers.c",
      (int)"ciFinishFilter");
  v8 = *v4;
  if ( *v4 )
  {
    switch ( v8 )
    {
      case 1:
        v12 = v4[4];
        if ( v12 )
          Function_2248c2c(v5, 15, v12, v6, v4[6], v4[8], 0, 12, v42);
        break;
      case 2:
        v13 = v4[4];
        if ( v13 )
          Function_2248c2c(v5, 16, v13, v6, v4[6], v4[8], *(uint *)(v6 + 4), 12, v42);
        break;
      case 3:
        v14 = v4[4];
        v15 = (uint *)v4[7];
        if ( v14 )
          Function_2248c2c(v5, 19, v14, v6, v4[6], v4[8], 0, 20, v42);
        for ( i = 0; i < v15[1]; ++i )
          ((void (__fastcall *)(uint))dword_21D78B0[0])(*(uint *)(v15[2] + 4 * i));
        ((void (__fastcall *)(uint))dword_21D78B0[0])(v15[2]);
        ((void (__fastcall *)(uint))dword_21D78B0[0])(v15[3]);
        break;
      case 4:
        v17 = v4[4];
        v18 = (uint *)v4[7];
        if ( v17 )
          Function_2248c2c(v5, 20, v17, v6, v4[6], v4[8], 0, 28, v42);
        for ( j = 0; j < v18[3]; ++j )
          ((void (__fastcall *)(uint))dword_21D78B0[0])(*(uint *)(v18[4] + 4 * j));
        ((void (__fastcall *)(uint))dword_21D78B0[0])(v18[4]);
        ((void (__fastcall *)(uint))dword_21D78B0[0])(v18[1]);
        ((void (__fastcall *)(uint))dword_21D78B0[0])(v18[2]);
        ((void (__fastcall *)(uint))dword_21D78B0[0])(*v18);
        break;
      case 10:
        v20 = v4[4];
        if ( v20 )
          Function_2248c2c(v5, 21, v20, v6, v4[6], v4[8], 0, 16, v42);
        break;
      case 11:
        v21 = v4[4];
        if ( v21 )
          Function_2248c2c(v5, 22, v21, v6, v4[6], v4[8], 0, 16, v42);
        break;
      case 5:
        v22 = v4[4];
        if ( v22 )
          Function_2248c2c(v5, 17, v22, v6, v4[6], v4[8], 0, 12, v42);
        break;
      case 6:
        v23 = v4[4];
        if ( v23 )
          Function_2248c2c(v5, 23, v23, v6, v4[6], v4[8], 0, 16, v42);
        break;
      case 7:
        ((void (__fastcall *)(uint))dword_21D78B0[0])(*(uint *)v4[7]);
        break;
      case 8:
        v24 = v4[4];
        v25 = (uint *)v4[7];
        if ( v24 )
          Function_2248c2c(v5, 24, v24, v6, v4[6], v4[8], 0, 16, v42);
        for ( k = 0; k < *v25; ++k )
          ((void (__fastcall *)(uint))dword_21D78B0[0])(*(uint *)(v25[1] + 4 * k));
        break;
      case 9:
        v27 = v4[4];
        if ( v27 )
          Function_2248c2c(v5, 26, v27, v6, v4[6], v4[8], 0, 12, v42);
        break;
      case 12:
        v28 = v4[4];
        v29 = (uint *)v4[7];
        if ( v28 )
          Function_2248c2c(v5, 29, v28, v6, v4[6], v4[8], 0, 20, v42);
        ((void (__fastcall *)(uint))dword_21D78B0[0])(v29[2]);
        for ( l = 0; l < *v29; ++l )
          ((void (__fastcall *)(uint))dword_21D78B0[0])(*(uint *)(v29[1] + 4 * l));
        ((void (__fastcall *)(uint))dword_21D78B0[0])(v29[1]);
        break;
      case 13:
        v31 = v4[4];
        v32 = (uint *)v4[7];
        if ( v31 )
          Function_2248c2c(v5, 30, v31, v6, v4[6], v4[8], 0, 24, v42);
        for ( m = 0; m < *v32; ++m )
          ((void (__fastcall *)(uint))dword_21D78B0[0])(*(uint *)(v32[1] + 4 * m));
        ((void (__fastcall *)(uint))dword_21D78B0[0])(v32[1]);
        break;
      case 14:
        v34 = v4[4];
        v35 = (uint *)v4[7];
        if ( v34 )
          Function_2248c2c(v5, 30, v34, v6, v4[6], v4[8], 0, 24, v42);
        for ( n = 0; n < *v35; ++n )
          ((void (__fastcall *)(uint))dword_21D78B0[0])(*(uint *)(v35[1] + 4 * n));
        ((void (__fastcall *)(uint))dword_21D78B0[0])(v35[1]);
        break;
      case 15:
        v37 = v4[4];
        v38 = (uint *)v4[7];
        if ( v37 )
          Function_2248c2c(v5, 27, v37, v6, v4[6], v4[8], 0, 16, v42);
        for ( ii = 0; ii < v38[1]; ++ii )
          ((void (__fastcall *)(uint))dword_21D78B0[0])(*(uint *)(v38[2] + 4 * ii));
        ((void (__fastcall *)(uint))dword_21D78B0[0])(v38[2]);
        ((void (__fastcall *)(uint))dword_21D78B0[0])(v38[3]);
        break;
      case 16:
        v40 = v4[4];
        if ( v40 )
          Function_2248c2c(v5, 31, v40, v6, v4[6], v4[8], 0, 8, v42);
        break;
      default:
        Function_20d407c((int)"0", (int)"chatHandlers.c", (int)"ciFinishFilter");
        break;
    }
  }
  else
  {
    v9 = v4[5];
    v10 = (uint *)v4[7];
    if ( v9 )
      Function_2248c2c(v5, 14, v9, v6, v4[6], v4[8], 0, 20, v42);
    for ( jj = 0; jj < v10[1]; ++jj )
    {
      ((void (__fastcall *)(uint))dword_21D78B0[0])(*(uint *)(v10[2] + 4 * jj));
      ((void (__fastcall *)(uint))dword_21D78B0[0])(*(uint *)(v10[4] + 4 * jj));
    }
    ((void (__fastcall *)(uint))dword_21D78B0[0])(v10[2]);
    ((void (__fastcall *)(uint))dword_21D78B0[0])(v10[4]);
    ((void (__fastcall *)(uint))dword_21D78B0[0])(v10[3]);
  }
  return Function_224d854(v5, v4);
}

//----- (0224E048) --------------------------------------------------------
uint *__fastcall Function_224e048(int a1, int *a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int v7;
  uint *result;
  int v9;
  const char *v10;
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
  char v30;
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
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;

  v4 = a2;
  v5 = a1;
  if ( !a2 )
    Function_20d407c((int)"filter", (int)"chatHandlers.c", (int)"ciFilterTimedout");
  v6 = 0;
  if ( *v4 >= 0 && *v4 < 17 )
    v6 = 1;
  if ( !v6 )
    Function_20d407c(
      (int)"(filter->type >= 0) && (filter->type < NUM_TYPES)",
      (int)"chatHandlers.c",
      (int)"ciFilterTimedout");
  v7 = *v4;
  if ( *v4 )
  {
    switch ( v7 )
    {
      case 1:
        v65 = 0;
        v66 = 7;
        result = Function_224d908(v5, v4, (int)&v65, v4[2]);
        break;
      case 2:
        v62 = 0;
        v63 = v4[2];
        v64 = 0;
        result = Function_224d908(v5, v4, (int)&v62, v63);
        break;
      case 3:
        v57 = 0;
        v58 = v4[2];
        v59 = 0;
        v60 = 0;
        v61 = 0;
        result = Function_224d908(v5, v4, (int)&v57, v58);
        break;
      case 4:
        v50 = 0;
        v51 = v4[2];
        v52 = 0;
        v53 = 0;
        v54 = 0;
        v55 = 0;
        v56 = 0;
        result = Function_224d908(v5, v4, (int)&v50, v51);
        break;
      case 10:
        v46 = 0;
        v47 = v4[2];
        v48 = 0;
        v49 = 0;
        result = Function_224d908(v5, v4, (int)&v46, v47);
        break;
      case 11:
        v41 = 0;
        v42 = v4[2];
        v43 = 0;
        v44 = 0;
        v45 = 0;
        result = Function_224d908(v5, v4, (int)&v41, v42);
        break;
      case 5:
        v38 = 0;
        v39 = v4[2];
        v40 = 0;
        result = Function_224d908(v5, v4, (int)&v38, v39);
        break;
      case 6:
        v34 = 0;
        v35 = v4[3];
        v36 = v4[2];
        v37 = 0;
        result = Function_224d908(v5, v4, (int)&v34, v36);
        break;
      case 7:
        result = Function_224d908(v5, v4, 0, a4);
        break;
      case 8:
        v31 = v4[2];
        v32 = 0;
        v33 = 0;
        result = Function_224d908(v5, v4, (int)&v30, 0);
        break;
      case 9:
        v28 = 0;
        v29 = v4[2];
        result = Function_224d908(v5, v4, (int)&v28, v4[3]);
        break;
      case 12:
        v23 = 0;
        v24 = 0;
        v25 = 0;
        v26 = 0;
        v27 = 0;
        result = Function_224d908(v5, v4, (int)&v23, 0);
        break;
      case 13:
        v17 = 0;
        v18 = 0;
        v19 = 0;
        v20 = 0;
        v21 = 0;
        v22 = 0;
        result = Function_224d908(v5, v4, (int)&v17, 0);
        break;
      case 14:
        v11 = 0;
        v12 = 0;
        v13 = 0;
        v14 = 0;
        v15 = 0;
        v16 = 0;
        result = Function_224d908(v5, v4, (int)&v11, 0);
        break;
      case 15:
        result = Function_224d854(v5, v4);
        break;
      case 16:
        v9 = 0;
        v10 = "Timed out";
        result = Function_224d908(v5, v4, (int)&v9, (int)"Timed out");
        break;
      default:
        result = (uint *)Function_20d407c((int)"0", (int)"chatHandlers.c", (int)"ciFilterTimedout");
        break;
    }
  }
  else
  {
    v67 = 0;
    v68 = 0;
    v69 = 0;
    v70 = 0;
    v71 = 0;
    result = Function_224d908(v5, v4, (int)&v67, 0);
  }
  return result;
}

//----- (0224E474) --------------------------------------------------------
uint *__fastcall Function_224e474(int a1)
{
  int v1;
  uint *result;
  int v3;
  int v4;
  int *v5;
  uint *v6;
  int *v7;

  v1 = a1;
  if ( !a1 )
    a1 = Function_20d407c((int)"chat != NULL", (int)"chatHandlers.c", (int)"ciFilterThink");
  result = (uint *)((int (__fastcall *)(int))dword_21EA840[0])(a1);
  v5 = *(int **)(v1 + 2068);
  v6 = result;
  if ( v5 )
  {
    do
    {
      result = (uint *)v5[1];
      v7 = (int *)v5[9];
      if ( v6 > result )
        result = Function_224e048(v1, v5, v3, v4);
      v5 = v7;
    }
    while ( v7 );
  }
  return result;
}

//----- (0224E4E0) --------------------------------------------------------
int __fastcall Function_224e4e0(int a1)
{
  int v1;
  int result;
  int v3;

  v1 = a1;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatHandlers.c", (int)"ciGetNextID");
  result = *(uint *)(v1 + 2076);
  if ( result == 0x7FFFFFFF )
    v3 = 1;
  else
    v3 = result + 1;
  *(uint *)(v1 + 2076) = v3;
  return result;
}

//----- (0224E52C) --------------------------------------------------------
int __fastcall Function_224e52c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatHandlers.c", (int)"ciCheckFiltersForID");
  if ( v3 <= 0 )
    Function_20d407c((int)"ID > 0", (int)"chatHandlers.c", (int)"ciCheckFiltersForID");
  v4 = *(uint *)(v2 + 2068);
  if ( !v4 )
    return 0;
  while ( *(uint *)(v4 + 32) != v3 )
  {
    v4 = *(uint *)(v4 + 36);
    if ( !v4 )
      return 0;
  }
  return 1;
}

//----- (0224E5B0) --------------------------------------------------------
uint *__fastcall Function_224e5b0(uint *result, int a2, int a3, int a4)
{
  int v4;
  int *i;

  v4 = (int)result;
  if ( !result )
    result = (uint *)Function_20d407c((int)"chat != NULL", (int)"chatHandlers.c", (int)"ciCleanupFilters");
  for ( i = *(int **)(v4 + 2068); i; i = *(int **)(v4 + 2068) )
    result = Function_224e048(v4, i, a3, a4);
  return result;
}

//----- (0224E604) --------------------------------------------------------
int __fastcall Function_224e604(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8;
  int v9;
  int v10;
  int v11;
  int *v12;
  int *v13;
  int *v15;
  int v16;
  int v17;

  v8 = a1;
  v9 = a2;
  v10 = a3;
  v11 = a4;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatHandlers.c", (int)"ciAddFilter");
  v12 = (int *)((int (__fastcall *)(int))dword_21D7880[0])(40);
  v13 = v12;
  if ( !v12 )
    return 0;
  v15 = Call_FillMemWithValue(v12, 0, 0x28u);
  *v13 = v9;
  v13[1] = ((int (__fastcall *)(int *))dword_21EA840[0])(v15) + 60000;
  v13[4] = a5;
  v13[5] = a6;
  v13[6] = a7;
  v13[7] = a8;
  if ( v10 )
    v16 = ((int (__fastcall *)(int))dword_21EA8AC[0])(v10);
  else
    v16 = 0;
  v13[2] = v16;
  if ( v11 )
    v17 = ((int (__fastcall *)(int))dword_21EA8AC[0])(v11);
  else
    v17 = 0;
  v13[3] = v17;
  v13[8] = Function_224e4e0(v8);
  if ( *(uint *)(v8 + 2068) )
    *(uint *)(*(uint *)(v8 + 2072) + 36) = v13;
  else
    *(uint *)(v8 + 2068) = v13;
  *(uint *)(v8 + 2072) = v13;
  return v13[8];
}

//----- (0224E6EC) --------------------------------------------------------
int __fastcall Function_224e6ec(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uchar *v10;
  int v11;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = ((int (__fastcall *)(int))dword_21D7880[0])(20);
  if ( !v8 )
    return 0;
  v10 = (uchar *)v8;
  v11 = 5;
  do
  {
    *v10 = 0;
    v10[1] = 0;
    v10[2] = 0;
    v10[3] = 0;
    v10 += 4;
    --v11;
  }
  while ( v11 );
  return Function_224e604(v4, 0, 0, 0, v5, v6, v7, v8);
}

//----- (0224E770) --------------------------------------------------------
int __fastcall Function_224e770(int a1, int a2, int a3, int a4, uint *a5, char *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int *v10;
  int v11;
  int v13;
  int v14;
  int v15;
  uint *v16;
  int v17;
  int v18;
  int v19;
  uint *v20;
  int v21;
  int v22;
  int v23;
  int v24;

  v6 = a1;
  v7 = a2;
  v8 = a3;
  v9 = a4;
  if ( !a6 )
    Function_20d407c((int)"password != NULL", (int)"chatHandlers.c", (int)"ciAddJOINFilter");
  if ( (uint)strlen(a6) >= 0x20 )
    Function_20d407c((int)"strlen(password) < MAX_PASSWORD", (int)"chatHandlers.c", (int)"ciAddJOINFilter");
  v10 = (int *)((int (__fastcall *)(int))dword_21D7880[0])(84);
  v11 = (int)v10;
  if ( !v10 )
    return 0;
  Call_FillMemWithValue(v10, 0, 0x54u);
  v13 = a5[1];
  v14 = a5[2];
  v15 = a5[3];
  *(uint *)v11 = *a5;
  *(uint *)(v11 + 4) = v13;
  *(uint *)(v11 + 8) = v14;
  *(uint *)(v11 + 12) = v15;
  v16 = (uint *)(v11 + 16);
  v17 = a5[5];
  v18 = a5[6];
  v19 = a5[7];
  *v16 = a5[4];
  v16[1] = v17;
  v16[2] = v18;
  v16[3] = v19;
  v20 = (uint *)(v11 + 32);
  v21 = a5[9];
  v22 = a5[10];
  v23 = a5[11];
  *v20 = a5[8];
  v20[1] = v21;
  v20[2] = v22;
  v20[3] = v23;
  strncpy((uchar *)(v11 + 52), a6, 32);
  *(uchar *)(v11 + 83) = 0;
  v24 = Function_224e604(v6, 1, v7, 0, v8, 0, v9, v11);
  if ( !v24 )
    ((void (__fastcall *)(int))dword_21D78B0[0])(v11);
  return v24;
}

//----- (0224E874) --------------------------------------------------------
int __fastcall Function_224e874(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uchar *v10;
  int v11;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = ((int (__fastcall *)(int))dword_21D7880[0])(16);
  if ( !v8 )
    return 0;
  v10 = (uchar *)v8;
  v11 = 4;
  do
  {
    *v10 = 0;
    v10[1] = 0;
    v10[2] = 0;
    v10[3] = 0;
    v10 += 4;
    --v11;
  }
  while ( v11 );
  return Function_224e604(v4, 3, v5, 0, v6, 0, v7, v8);
}

//----- (0224E8F4) --------------------------------------------------------
int __fastcall Function_224e8f4(int a1, int a2, int a3, int a4)
{
  return Function_224e604(a1, 5, a2, 0, a3, 0, a4, 0);
}

//----- (0224E928) --------------------------------------------------------
int __fastcall Function_224e928(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8;
  int v9;
  int v10;
  int *v11;
  int result;
  int *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int i;
  int v20;

  v8 = a1;
  v20 = a2;
  v9 = a3;
  v10 = a4;
  v11 = (int *)((int (__fastcall *)(int))dword_21D7880[0])(16);
  result = 0;
  if ( !v11 )
    return result;
  v13 = v11;
  v14 = 4;
  do
  {
    *(uchar *)v13 = 0;
    *((uchar *)v13 + 1) = 0;
    *((uchar *)v13 + 2) = 0;
    *((uchar *)v13 + 3) = 0;
    ++v13;
    --v14;
  }
  while ( v14 );
  v11[3] = a6;
  *v11 = v9;
  v11[2] = a5;
  if ( a6 )
    --*v11;
  v15 = ((int (__fastcall *)(int))dword_21D7880[0])(4 * *v11);
  v11[1] = v15;
  if ( !v15 )
  {
    ((void (__fastcall *)(int *))dword_21D78B0[0])(v11);
    return 0;
  }
  v16 = 0;
  v17 = 0;
  if ( v9 <= 0 )
  {
LABEL_16:
    *v11 = v17;
    return Function_224e604(v8, 13, v20, 0, a7, 0, a8, (int)v11);
  }
  while ( 1 )
  {
    v18 = *(uint *)(v10 + 4 * v16);
    if ( Function_20d8d14(*(int **)(v10 + 4 * v16), "b_*") )
      break;
LABEL_15:
    if ( ++v16 >= v9 )
      goto LABEL_16;
  }
  *(uint *)(v11[1] + 4 * v17) = ((int (__fastcall *)(int))dword_21EA8AC[0])(v18);
  if ( *(uint *)(v11[1] + 4 * v17) )
  {
    ++v17;
    goto LABEL_15;
  }
  for ( i = v17 - 1; i >= 0; --i )
    ((void (__fastcall *)(uint))dword_21D78B0[0])(*(uint *)(v11[1] + 4 * i));
  ((void (__fastcall *)(int))dword_21D78B0[0])(v11[1]);
  ((void (__fastcall *)(int *))dword_21D78B0[0])(v11);
  return 0;
}

//----- (0224EA9C) --------------------------------------------------------
int __fastcall Function_224ea9c(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7;
  int v8;
  int v9;
  uchar *v10;
  uint *v11;
  int v13;
  int v14;
  int v15;
  int v16;
  int i;
  int v18;

  v7 = a1;
  v18 = a2;
  v8 = a3;
  v9 = a4;
  v10 = (uchar *)((int (__fastcall *)(int))dword_21D7880[0])(12);
  v11 = v10;
  if ( !v10 )
    return 0;
  *v10 = 0;
  v10[1] = 0;
  v10[2] = 0;
  v10[3] = 0;
  v10[4] = 0;
  v10[5] = 0;
  v10[6] = 0;
  v10[7] = 0;
  v10[8] = 0;
  v10[9] = 0;
  v10[10] = 0;
  v10[11] = 0;
  *((uint *)v10 + 2) = a5;
  *(uint *)v10 = v8;
  if ( a5 )
    --*(uint *)v10;
  if ( !*(uint *)v10 )
    return Function_224e604(v7, 14, v18, 0, a6, 0, a7, (int)v11);
  v13 = ((int (__fastcall *)(int))dword_21D7880[0])(4 * *(uint *)v10);
  v11[1] = v13;
  if ( !v13 )
  {
    ((void (__fastcall *)(uint *))dword_21D78B0[0])(v11);
    return 0;
  }
  v14 = 0;
  v15 = 0;
  if ( v8 <= 0 )
  {
LABEL_16:
    *v11 = v15;
    return Function_224e604(v7, 14, v18, 0, a6, 0, a7, (int)v11);
  }
  while ( 1 )
  {
    v16 = *(uint *)(v9 + 4 * v14);
    if ( Function_20d8d14(*(int **)(v9 + 4 * v14), "b_*") )
      break;
LABEL_15:
    if ( ++v14 >= v8 )
      goto LABEL_16;
  }
  *(uint *)(v11[1] + 4 * v15) = ((int (__fastcall *)(int))dword_21EA8AC[0])(v16);
  if ( *(uint *)(v11[1] + 4 * v15) )
  {
    ++v15;
    goto LABEL_15;
  }
  for ( i = v15 - 1; i >= 0; --i )
    ((void (__fastcall *)(uint))dword_21D78B0[0])(*(uint *)(v11[1] + 4 * i));
  ((void (__fastcall *)(uint))dword_21D78B0[0])(v11[1]);
  ((void (__fastcall *)(uint *))dword_21D78B0[0])(v11);
  return 0;
}

//----- (0224EC20) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x224EDE8 for case 0"

//----- (0224ECDC) --------------------------------------------------------
void Function_224ecdc()
{
  JUMPOUT(&loc_224EDE8);
}

//----- (0224ECE0) --------------------------------------------------------
void Function_224ece0()
{
  JUMPOUT(&loc_224EDF4);
}

//----- (0224ECE4) --------------------------------------------------------
void Function_224ece4()
{
  JUMPOUT(&loc_224EDF4);
}

//----- (0224ECE8) --------------------------------------------------------
void Function_224ece8()
{
  JUMPOUT(&loc_224EDF4);
}

//----- (0224ECEC) --------------------------------------------------------
void Function_224ecec()
{
  JUMPOUT(&loc_224ED4C);
}

//----- (0224ECF0) --------------------------------------------------------
void Function_224ecf0()
{
  JUMPOUT(&loc_224EDF4);
}

//----- (0224ECF4) --------------------------------------------------------
void Function_224ecf4()
{
  JUMPOUT(&loc_224ED7C);
}

//----- (0224ECF8) --------------------------------------------------------
void Function_224ecf8()
{
  JUMPOUT(&loc_224ED58);
}

//----- (0224ECFC) --------------------------------------------------------
void Function_224ecfc()
{
  JUMPOUT(&loc_224ED88);
}

//----- (0224ED00) --------------------------------------------------------
void Function_224ed00()
{
  JUMPOUT(&loc_224ED94);
}

//----- (0224ED04) --------------------------------------------------------
void Function_224ed04()
{
  JUMPOUT(&loc_224EDAC);
}

//----- (0224ED08) --------------------------------------------------------
void Function_224ed08()
{
  JUMPOUT(&loc_224ED64);
}

//----- (0224ED0C) --------------------------------------------------------
void Function_224ed0c()
{
  JUMPOUT(&loc_224EDF4);
}

//----- (0224ED10) --------------------------------------------------------
void Function_224ed10()
{
  JUMPOUT(&loc_224EDF4);
}

//----- (0224ED14) --------------------------------------------------------
void Function_224ed14()
{
  JUMPOUT(&loc_224ED70);
}

//----- (0224ED18) --------------------------------------------------------
void Function_224ed18()
{
  JUMPOUT(&loc_224EDA0);
}

//----- (0224ED1C) --------------------------------------------------------
void Function_224ed1c()
{
  JUMPOUT(&loc_224EDD0);
}

//----- (0224ED20) --------------------------------------------------------
void Function_224ed20()
{
  JUMPOUT(&loc_224EDB8);
}

//----- (0224ED24) --------------------------------------------------------
void Function_224ed24()
{
  int v0;
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  uchar *v6;
  int v7;

  if ( 13 != v0 )
  {
    v4 = ((int (__fastcall *)(int))dword_21D7894[0])(12 * (v2 + 1));
    if ( !v4 )
    {
      ((void (__fastcall *)())dword_21D78B0[0])();
      JUMPOUT(__CS__, v7);
    }
    v5 = 12 * v2;
    *(uchar *)(v4 + v5) = 0;
    v6 = (uchar *)(v4 + 12 * v2);
    v6[1] = 0;
    v6[2] = 0;
    v6[3] = 0;
    v6[4] = 0;
    v6[5] = 0;
    v6[6] = 0;
    v6[7] = 0;
    v6[8] = 0;
    v6[9] = 0;
    v6[10] = 0;
    v6[11] = 0;
    *((uint *)v6 + 1) = v3;
    *(uint *)(v4 + v5) = 13;
  }
  if ( v1 )
    JUMPOUT(&loc_224EC8C);
  JUMPOUT(__CS__, v7);
}

//----- (0224EED4) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x224EFC4 for case 0"

//----- (0224EF10) --------------------------------------------------------
void Function_224ef10()
{
  JUMPOUT(&loc_224EFC4);
}

//----- (0224EF14) --------------------------------------------------------
void Function_224ef14()
{
  JUMPOUT(&loc_224EFD8);
}

//----- (0224EF18) --------------------------------------------------------
void Function_224ef18()
{
  JUMPOUT(&loc_224EF4C);
}

//----- (0224EF1C) --------------------------------------------------------
void Function_224ef1c()
{
  JUMPOUT(&loc_224EF58);
}

//----- (0224EF20) --------------------------------------------------------
void Function_224ef20()
{
  JUMPOUT(&loc_224EF7C);
}

//----- (0224EF24) --------------------------------------------------------
void Function_224ef24()
{
  JUMPOUT(&loc_224EF88);
}

//----- (0224EF28) --------------------------------------------------------
void Function_224ef28()
{
  JUMPOUT(&loc_224EFD8);
}

//----- (0224EF2C) --------------------------------------------------------
void Function_224ef2c()
{
  JUMPOUT(&loc_224EF94);
}

//----- (0224EF30) --------------------------------------------------------
void Function_224ef30()
{
  JUMPOUT(&loc_224EFA0);
}

//----- (0224EF34) --------------------------------------------------------
void Function_224ef34()
{
  JUMPOUT(&loc_224EFAC);
}

//----- (0224EF38) --------------------------------------------------------
void Function_224ef38()
{
  JUMPOUT(&loc_224EFD8);
}

//----- (0224EF3C) --------------------------------------------------------
void Function_224ef3c()
{
  JUMPOUT(&loc_224EFD8);
}

//----- (0224EF40) --------------------------------------------------------
void Function_224ef40()
{
  JUMPOUT(&loc_224EFD8);
}

//----- (0224EF44) --------------------------------------------------------
void Function_224ef44()
{
  JUMPOUT(&loc_224EFD8);
}

//----- (0224EF48) --------------------------------------------------------
void Function_224ef48()
{
  int v0;
  int v1;
  int v2;

  *(uint *)(v1 + 24) = *(uint *)(v0 + 4);
  if ( *(uint *)(v0 + 12) )
    JUMPOUT(&loc_224EF00);
  JUMPOUT(__CS__, v2);
}

//----- (0224EFF8) --------------------------------------------------------
int __fastcall Function_224eff8(int a1, uint *a2)
{
  int v2;
  uint *v3;
  int v4;
  int result;
  char **v6;
  int v7;
  char *v8;
  char *v9;
  int v10;
  int *v11;
  int v12;
  char *v13;
  bool v14;
  char *v15;
  int v16;
  char *v17;
  BOOL v18;
  int v19;
  char *v20;
  BOOL v21;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatHandlers.c", (int)"ciPrivmsgHandler");
  if ( v3[9] != 2 )
    Function_20d407c((int)"message->numParams == 2", (int)"chatHandlers.c", (int)"ciPrivmsgHandler");
  result = v3[9];
  if ( result == 2 )
  {
    v6 = (char **)v3[8];
    v7 = v3[2];
    v8 = *v6;
    v9 = v6[1];
    v10 = strlen(v6[1]);
    v11 = (int *)&byte_225A608;
    if ( *v9 == 1 )
    {
      if ( (v12 = v9[1], v12 >= 65) && v12 <= 90 || v12 >= 97 && v12 <= 122 )
      {
        if ( v9[v10 - 1] == 1 )
        {
          v9[v10 - 1] = 0;
          v13 = strchr(v9, 32);
          if ( v13 )
          {
            v11 = (int *)(v9 + 1);
            *v13 = 0;
            v9 = v13 + 1;
          }
        }
      }
    }
    if ( Function_20d8d14(v11, "ACTION") )
    {
      result = *(char *)v11;
      if ( *(uchar *)v11 )
        return result;
    }
    else
    {
      v4 = 1;
    }
    if ( Function_20df9b0((uchar *)v8, (uchar *)(v2 + 876)) )
    {
      result = Function_224bd94(v2, v8);
      v14 = result == 0;
      if ( result )
        v14 = *(uint *)result == 0;
      if ( !v14 )
      {
        v18 = v4 != 0;
        v15 = v8;
        v16 = v7;
        v17 = v9;
        result = Function_2248c2c(v2, 4, *(uint *)result, &v15, *(uint *)(result + 44), 0, v8, 16, v8);
      }
    }
    else
    {
      result = *(uint *)(v2 + 2048);
      if ( result )
      {
        v21 = v4 != 0;
        v19 = v7;
        v20 = v9;
        result = Function_2248c2c(v2, 2, *(uint *)(v2 + 2048), &v19, *(uint *)(v2 + 2056), 0, 0, 12, v15);
      }
    }
  }
  return result;
}

//----- (0224F20C) --------------------------------------------------------
uint *__fastcall Function_224f20c(int a1, uint *a2)
{
  int v2;
  uint *v3;
  uint *result;
  int v5;
  uchar *v6;
  int v7;
  bool v8;
  uchar *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatHandlers.c", (int)"ciNoticeHandler");
  if ( v3[9] != 2 )
    Function_20d407c((int)"message->numParams == 2", (int)"chatHandlers.c", (int)"ciNoticeHandler");
  result = (uint *)v3[9];
  if ( result == (uint *)2 )
  {
    v5 = v3[8];
    v6 = *(uchar **)v5;
    v7 = *(uint *)(v5 + 4);
    if ( Function_20df9b0(*(uchar **)v5, (uchar *)(v2 + 876)) )
    {
      result = (uint *)Function_224bd94(v2, (char *)v6);
      v8 = result == 0;
      if ( result )
        v8 = *result == 0;
      if ( !v8 )
      {
        v9 = v6;
        if ( v3[2] )
          v10 = v3[2];
        else
          v10 = 0;
        v12 = 2;
        v11 = v7;
        result = (uint *)Function_2248c2c(v2, 4, *result, &v9, result[11], 0, v6, 16, v9);
      }
    }
    else
    {
      result = *(uint **)(v2 + 2048);
      if ( result )
      {
        if ( v3[2] )
          v13 = v3[2];
        else
          v13 = 0;
        v14 = v7;
        v15 = 2;
        result = (uint *)Function_2248c2c(v2, 2, *(uint *)(v2 + 2048), &v13, *(uint *)(v2 + 2056), 0, 0, 12, v9);
      }
    }
  }
  return result;
}

//----- (0224F370) --------------------------------------------------------
uint *__fastcall Function_224f370(int a1, uint *a2)
{
  int v2;
  uint *v3;
  uint *result;
  int v5;
  uchar *v6;
  int v7;
  bool v8;
  uchar *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatHandlers.c", (int)"ciUTMHandler");
  if ( v3[9] != 2 )
    Function_20d407c((int)"message->numParams == 2", (int)"chatHandlers.c", (int)"ciUTMHandler");
  result = (uint *)v3[9];
  if ( result == (uint *)2 )
  {
    v5 = v3[8];
    v6 = *(uchar **)v5;
    v7 = *(uint *)(v5 + 4);
    if ( Function_20df9b0(*(uchar **)v5, (uchar *)(v2 + 876)) )
    {
      result = (uint *)Function_224bd94(v2, (char *)v6);
      v8 = result == 0;
      if ( result )
        v8 = *result == 0;
      if ( !v8 )
      {
        v9 = v6;
        if ( v3[2] )
          v10 = v3[2];
        else
          v10 = 0;
        v12 = 3;
        v11 = v7;
        result = (uint *)Function_2248c2c(v2, 4, *result, &v9, result[11], 0, v6, 16, v9);
      }
    }
    else
    {
      result = *(uint **)(v2 + 2048);
      if ( result )
      {
        if ( v3[2] )
          v13 = v3[2];
        else
          v13 = 0;
        v15 = 3;
        v14 = v7;
        result = (uint *)Function_2248c2c(v2, 2, *(uint *)(v2 + 2048), &v13, *(uint *)(v2 + 2056), 0, 0, 12, v9);
      }
    }
  }
  return result;
}

//----- (0224F4DC) --------------------------------------------------------
uint *__fastcall Function_224f4dc(int a1, uint *a2)
{
  int v2;
  uint *v3;
  uint *result;
  int v5;
  uchar *v6;
  int v7;
  bool v8;
  uchar *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatHandlers.c", (int)"ciATMHandler");
  if ( v3[9] != 2 )
    Function_20d407c((int)"message->numParams == 2", (int)"chatHandlers.c", (int)"ciATMHandler");
  result = (uint *)v3[9];
  if ( result == (uint *)2 )
  {
    v5 = v3[8];
    v6 = *(uchar **)v5;
    v7 = *(uint *)(v5 + 4);
    if ( Function_20df9b0(*(uchar **)v5, (uchar *)(v2 + 876)) )
    {
      result = (uint *)Function_224bd94(v2, (char *)v6);
      v8 = result == 0;
      if ( result )
        v8 = *result == 0;
      if ( !v8 )
      {
        v9 = v6;
        if ( v3[2] )
          v10 = v3[2];
        else
          v10 = 0;
        v11 = v7;
        v12 = 4;
        result = (uint *)Function_2248c2c(v2, 4, *result, &v9, result[11], 0, v6, 16, v9);
      }
    }
    else
    {
      result = *(uint **)(v2 + 2048);
      if ( result )
      {
        if ( v3[2] )
          v13 = v3[2];
        else
          v13 = 0;
        v15 = 4;
        v14 = v7;
        result = (uint *)Function_2248c2c(v2, 2, *(uint *)(v2 + 2048), &v13, *(uint *)(v2 + 2056), 0, 0, 12, v9);
      }
    }
  }
  return result;
}

//----- (0224F644) --------------------------------------------------------
int __fastcall Function_224f644(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatHandlers.c", (int)"ciPingHandler");
  return Function_2256e70(v2 + 28, "PONG %s", *(uint *)(v3 + 28));
}

//----- (0224F690) --------------------------------------------------------
int __fastcall Function_224f690(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  char *v5;
  uchar *v6;
  char *v7;
  int v8;
  int *v9;
  int v10;
  char *v11;
  char *v12;
  int v13;
  char *v14;
  char *v15;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatHandlers.c", (int)"ciNickHandler");
  if ( *(uint *)(v3 + 36) != 1 )
    Function_20d407c((int)"message->numParams == 1", (int)"chatHandlers.c", (int)"ciNickHandler");
  result = *(uint *)(v3 + 36);
  if ( result == 1 )
  {
    v5 = *(char **)(v3 + 8);
    v6 = *(uchar **)(v3 + 8);
    v7 = **(char ***)(v3 + 32);
    if ( !Function_20df9b0(v6, (uchar *)(v2 + 876)) )
    {
      if ( (uint)strlen(v7) >= 0x40 )
        Function_20d407c((int)"strlen(newNick) < MAX_NICK", (int)"chatHandlers.c", (int)"ciNickHandler");
      strncpy((uchar *)(v2 + 876), v7, 64);
      *(uchar *)(v2 + 939) = 0;
      v13 = 9;
      v14 = v5;
      v15 = v7;
      v9 = (int *)Function_224d5a8(v2, 1, &v13);
      if ( v9 )
      {
        v10 = 1;
        v11 = v5;
        v12 = v7;
        Function_224d908(v2, v9, (int)&v10, 1);
      }
    }
    result = Function_224cf50(v2, v5, v7, v8);
  }
  return result;
}

//----- (0224F7CC) --------------------------------------------------------
uint *__fastcall Function_224f7cc(int a1, int a2)
{
  int v2;
  int v3;
  uint *result;
  char *v5;
  int v6;
  char *v7;
  char *v8;
  char *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uint *v16;
  char *v17;
  char *v18;
  char *v19;
  int v20;
  int v21;
  char *v22;
  int v23;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatHandlers.c", (int)"ciJoinHandler");
  if ( *(uint *)(v3 + 36) != 1 )
    Function_20d407c((int)"message->numParams == 1", (int)"chatHandlers.c", (int)"ciJoinHandler");
  result = *(uint **)(v3 + 36);
  if ( result == (uint *)1 )
  {
    v5 = *(char **)(v3 + 8);
    v6 = *v5;
    v7 = **(char ***)(v3 + 32);
    v8 = *(char **)(v3 + 12);
    v9 = *(char **)(v3 + 16);
    if ( v6 == 64 )
    {
      v10 = (v5++)[1];
      v11 = 2;
      if ( !v10 )
        Function_20d407c((int)"*nick != '\\0'", (int)"chatHandlers.c", (int)"ciJoinHandler");
    }
    else if ( v6 == 43 )
    {
      v12 = (v5++)[1];
      v11 = 1;
      if ( !v12 )
        Function_20d407c((int)"*nick != '\\0'", (int)"chatHandlers.c", (int)"ciJoinHandler");
    }
    else
    {
      v11 = 0;
    }
    if ( Function_20d8d14((int *)v5, (uint *)(v2 + 876)) )
    {
      if ( Function_224c134(v2, v7, v13, v14) )
        Function_224c784(v2, v5, v7, v11, v8, v9);
      result = (uint *)Function_224c518(v2, v7);
      if ( result )
      {
        result = (uint *)Function_224bd94(v2, v7);
        v16 = result;
        if ( result )
        {
          if ( result[2] )
          {
            v18 = v7;
            v19 = v5;
            v20 = v11;
            Function_2248c2c(v2, 6, result[2], &v18, result[11], 0, v7, 12, v17);
          }
          result = (uint *)v16[8];
          if ( result )
          {
            v17 = v7;
            result = (uint *)Function_2248c2c(v2, 12, v16[8], &v17, v16[11], 0, v7, 4, v7);
          }
        }
      }
    }
    else
    {
      result = (uint *)Function_224b9dc(v2, (uchar *)v7);
      if ( result )
      {
        v23 = 0;
        v21 = 1;
        v22 = v7;
        result = (uint *)Function_224d5a8(v2, 1, &v21);
        if ( result )
        {
          v15 = result[7];
          Function_224ba90(v2, v7, (int *)v15);
          Function_224c350(v2, v7, (char *)(v15 + 52));
          *(uint *)(v15 + 48) = 1;
          result = (uint *)Function_2256e70(v2 + 28, "MODE %s", v7);
        }
      }
    }
  }
  return result;
}

//----- (0224FA48) --------------------------------------------------------
int __fastcall Function_224fa48(int a1, uint *a2)
{
  char *v2;
  int v3;
  uint *v4;
  char **v5;
  int v6;
  int *v7;
  char *v8;
  int result;
  int v10;
  char *v11;
  char *v12;
  int *v13;
  int v14;
  char *v15;
  int v16;

  v3 = a1;
  v4 = a2;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatHandlers.c", (int)"ciPartHandler");
  v5 = (char **)v4[8];
  v6 = v4[9];
  v7 = (int *)v4[2];
  if ( v6 > 1 )
    v2 = v5[1];
  v8 = *v5;
  if ( v6 <= 1 )
    v2 = &byte_225A608;
  result = Function_20d8d14(v7, (uint *)(v3 + 876));
  if ( result )
  {
    Function_224c994(v3, (char *)v7, v8);
    result = Function_224c518(v3, v8);
    if ( result )
    {
      result = Function_224bd94(v3, v8);
      v10 = result;
      if ( result )
      {
        if ( *(uint *)(result + 12) )
        {
          v12 = v8;
          v13 = v7;
          v14 = 0;
          v15 = v2;
          v16 = 0;
          Function_2248c2c(v3, 7, *(uint *)(result + 12), &v12, *(uint *)(result + 44), 0, v8, 20, v11);
        }
        result = *(uint *)(v10 + 32);
        if ( result )
        {
          v11 = v8;
          result = Function_2248c2c(v3, 12, *(uint *)(v10 + 32), &v11, *(uint *)(v10 + 44), 0, v8, 4, v8);
        }
      }
    }
  }
  return result;
}

//----- (0224FB88) --------------------------------------------------------
int __fastcall Function_224fb88(int a1, uint *a2)
{
  char *v2;
  int v3;
  uint *v4;
  int result;
  int v6;
  bool v7;
  int v8;
  bool v9;
  char **v10;
  char *v11;
  char *v12;
  int v13;
  uint *v14;
  int v15;
  int v16;
  char *v17;
  char *v18;
  char *v19;
  int v20;
  char *v21;
  int v22;
  char *v23;
  int v24;
  char *v25;

  v3 = a1;
  v4 = a2;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatHandlers.c", (int)"ciKickHandler");
  result = v4[9];
  v6 = 1;
  v7 = result == 2;
  if ( result != 2 )
    v7 = result == 3;
  if ( !v7 )
    v6 = 0;
  if ( !v6 )
    result = Function_20d407c(
               (int)"(message->numParams == 2) || (message->numParams == 3)",
               (int)"chatHandlers.c",
               (int)"ciKickHandler");
  v8 = v4[9];
  v9 = v8 == 2;
  if ( v8 != 2 )
    v9 = v8 == 3;
  if ( v9 )
  {
    v10 = (char **)v4[8];
    if ( v8 == 3 )
      v2 = v10[2];
    v11 = *v10;
    v12 = v10[1];
    v13 = v4[2];
    if ( v8 != 3 )
      v2 = &byte_225A608;
    Function_224c994(v3, v12, v11);
    result = Function_224bd94(v3, v11);
    v14 = (uint *)result;
    if ( result )
    {
      if ( Function_20df9b0((uchar *)v12, (uchar *)(v3 + 876)) )
      {
        result = Function_224c518(v3, v11);
        if ( result )
        {
          if ( v14[3] )
          {
            v20 = 2;
            v18 = v11;
            v19 = v12;
            v21 = v2;
            v22 = v13;
            Function_2248c2c(v3, 7, v14[3], &v18, v14[11], 0, v11, 20, v17);
          }
          result = v14[8];
          if ( result )
          {
            v17 = v11;
            result = Function_2248c2c(v3, 12, v14[8], &v17, v14[11], 0, v11, 4, v11);
          }
        }
      }
      else
      {
        if ( v14[1] )
        {
          v23 = v11;
          v24 = v13;
          v25 = v2;
          Function_2248c2c(v3, 5, v14[1], &v23, v14[11], 0, 0, 12, v17);
        }
        result = Function_224bc80(v3, v11, v15, v16);
      }
    }
  }
  return result;
}

//----- (0224FD70) --------------------------------------------------------
int __fastcall Function_224fd70(int a1, char *a2, char *a3, int a4)
{
  char *v4;
  int v5;
  char *v6;
  int v7;
  int result;
  int v9;
  char *v10;
  char *v11;
  char *v12;
  int v13;
  int v14;
  int v15;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  if ( !a2 )
    Function_20d407c((int)"user != NULL", (int)"chatHandlers.c", (int)"ciQuitEnumChannelsCallback");
  if ( !*v4 )
    Function_20d407c((int)"user[0] != '\\0'", (int)"chatHandlers.c", (int)"ciQuitEnumChannelsCallback");
  if ( !v6 )
    Function_20d407c((int)"channel != NULL", (int)"chatHandlers.c", (int)"ciQuitEnumChannelsCallback");
  if ( !*v6 )
    Function_20d407c((int)"channel[0] != '\\0'", (int)"chatHandlers.c", (int)"ciQuitEnumChannelsCallback");
  if ( !v7 )
    Function_20d407c((int)"reason != NULL", (int)"chatHandlers.c", (int)"ciQuitEnumChannelsCallback");
  Function_224c994(v5, v4, v6);
  result = Function_224c518(v5, v6);
  if ( result )
  {
    result = Function_224bd94(v5, v6);
    v9 = result;
    if ( result )
    {
      if ( *(uint *)(result + 12) )
      {
        v13 = 1;
        v11 = v6;
        v12 = v4;
        v14 = v7;
        v15 = 0;
        Function_2248c2c(v5, 7, *(uint *)(result + 12), &v11, *(uint *)(result + 44), 0, v6, 20, v10);
      }
      result = *(uint *)(v9 + 32);
      if ( result )
      {
        v10 = v6;
        result = Function_2248c2c(v5, 12, *(uint *)(v9 + 32), &v10, *(uint *)(v9 + 44), 0, v6, 4, v6);
      }
    }
  }
  return result;
}

//----- (0224FF14) --------------------------------------------------------
int __fastcall Function_224ff14(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatHandlers.c", (int)"ciQuitHandler");
  if ( *(uint *)(v3 + 36) != 1 )
    Function_20d407c((int)"message->numParams == 1", (int)"chatHandlers.c", (int)"ciQuitHandler");
  result = *(uint *)(v3 + 36);
  if ( result == 1 )
    result = Function_224cbe4(v2, *(char **)(v3 + 8), (int)Function_224fd70, **(uint **)(v3 + 32));
  return result;
}

//----- (0224FF9C) --------------------------------------------------------
int __fastcall Function_224ff9c(int a1, char *a2, char *a3, int a4)
{
  char *v4;
  int v5;
  char *v6;
  int v7;
  int result;
  int v9;
  char *v10;
  char *v11;
  char *v12;
  int v13;
  int v14;
  int v15;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  if ( !a2 )
    Function_20d407c((int)"user != NULL", (int)"chatHandlers.c", (int)"ciKillEnumChannelsCallback");
  if ( !*v4 )
    Function_20d407c((int)"user[0] != '\\0'", (int)"chatHandlers.c", (int)"ciKillEnumChannelsCallback");
  if ( !v6 )
    Function_20d407c((int)"channel != NULL", (int)"chatHandlers.c", (int)"ciKillEnumChannelsCallback");
  if ( !*v6 )
    Function_20d407c((int)"channel[0] != '\\0'", (int)"chatHandlers.c", (int)"ciKillEnumChannelsCallback");
  if ( !v7 )
    Function_20d407c((int)"reason != NULL", (int)"chatHandlers.c", (int)"ciKillEnumChannelsCallback");
  Function_224c994(v5, v4, v6);
  result = Function_224c518(v5, v6);
  if ( result )
  {
    result = Function_224bd94(v5, v6);
    v9 = result;
    if ( result )
    {
      if ( *(uint *)(result + 12) )
      {
        v13 = 3;
        v11 = v6;
        v12 = v4;
        v14 = v7;
        v15 = 0;
        Function_2248c2c(v5, 7, *(uint *)(result + 12), &v11, *(uint *)(result + 44), 0, v6, 20, v10);
      }
      result = *(uint *)(v9 + 32);
      if ( result )
      {
        v10 = v6;
        result = Function_2248c2c(v5, 12, *(uint *)(v9 + 32), &v10, *(uint *)(v9 + 44), 0, v6, 4, v6);
      }
    }
  }
  return result;
}

//----- (02250140) --------------------------------------------------------
int __fastcall Function_2250140(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a1;
  if ( *(uint *)(a2 + 36) != 2 )
    Function_20d407c((int)"message->numParams == 2", (int)"chatHandlers.c", (int)"ciKillHandler");
  result = *(uint *)(v2 + 36);
  if ( result == 2 )
    result = Function_224cbe4(v3, **(char ***)(v2 + 32), (int)Function_224ff9c, *(uint *)(*(uint *)(v2 + 32) + 4));
  return result;
}

//----- (022501A4) --------------------------------------------------------
int __fastcall Function_22501a4(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  char **v5;
  char *v6;
  char *v7;
  bool v8;
  char *v9;
  char *v10;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatHandlers.c", (int)"ciTopicHandler");
  if ( *(uint *)(v3 + 36) != 2 )
    Function_20d407c((int)"message->numParams == 2", (int)"chatHandlers.c", (int)"ciTopicHandler");
  result = *(uint *)(v3 + 36);
  if ( result == 2 )
  {
    v5 = *(char ***)(v3 + 32);
    v6 = *v5;
    v7 = v5[1];
    Function_224c5dc(v2, *v5, v7);
    result = Function_224bd94(v2, v6);
    v8 = result == 0;
    if ( result )
      v8 = *(uint *)(result + 20) == 0;
    if ( !v8 )
    {
      v9 = v6;
      v10 = v7;
      result = Function_2248c2c(v2, 9, *(uint *)(result + 20), &v9, *(uint *)(result + 44), 0, v6, 8, v6);
    }
  }
  return result;
}

//----- (02250284) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x2250404 for case 0"

//----- (02250344) --------------------------------------------------------
void Function_2250344()
{
  JUMPOUT(&loc_2250404);
}

//----- (02250348) --------------------------------------------------------
void Function_2250348()
{
  JUMPOUT(&loc_2250418);
}

//----- (0225034C) --------------------------------------------------------
void Function_225034c()
{
  JUMPOUT(&loc_2250418);
}

//----- (02250350) --------------------------------------------------------
void Function_2250350()
{
  JUMPOUT(&loc_2250418);
}

//----- (02250354) --------------------------------------------------------
void Function_2250354()
{
  JUMPOUT(&loc_2250418);
}

//----- (02250358) --------------------------------------------------------
void Function_2250358()
{
  JUMPOUT(&loc_2250418);
}

//----- (0225035C) --------------------------------------------------------
void Function_225035c()
{
  JUMPOUT(&loc_2250380);
}

//----- (02250360) --------------------------------------------------------
void Function_2250360()
{
  JUMPOUT(&loc_2250418);
}

//----- (02250364) --------------------------------------------------------
void Function_2250364()
{
  JUMPOUT(&loc_2250418);
}

//----- (02250368) --------------------------------------------------------
void Function_2250368()
{
  JUMPOUT(&loc_2250418);
}

//----- (0225036C) --------------------------------------------------------
void Function_225036c()
{
  JUMPOUT(&loc_22503B4);
}

//----- (02250370) --------------------------------------------------------
void Function_2250370()
{
  JUMPOUT(&loc_22503DC);
}

//----- (02250374) --------------------------------------------------------
void Function_2250374()
{
  JUMPOUT(&loc_2250418);
}

//----- (02250378) --------------------------------------------------------
void Function_2250378()
{
  JUMPOUT(&loc_2250418);
}

//----- (0225037C) --------------------------------------------------------
void Function_225037c()
{
  int v0;
  char *v1;
  int v2;
  char v3;
  int v4;

  if ( *(uint *)(v0 + 12) )
    JUMPOUT(&loc_2250334);
  if ( !Function_224c184(v2, v1, &v3) )
  {
    ((void (__fastcall *)())dword_21D78B0[0])();
    JUMPOUT(__CS__, v4);
  }
  ((void (__fastcall *)(char *))Function_224eed4)(&v3);
  Function_224c270(v2, v1, &v3);
  ((void (__fastcall *)())dword_21D78B0[0])();
  JUMPOUT(__CS__, v4);
}

//----- (02250490) --------------------------------------------------------
int __fastcall Function_2250490(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatHandlers.c", (int)"ciErrorHandler");
  if ( *(uint *)(v3 + 36) != 1 )
    Function_20d407c((int)"message->numParams == 1", (int)"chatHandlers.c", (int)"ciErrorHandler");
  result = *(uint *)(v3 + 36);
  if ( result == 1 )
    result = Function_2253598(v2, **(uint **)(v3 + 32));
  return result;
}

//----- (0225050C) --------------------------------------------------------
int __fastcall Function_225050c(int a1, uint *a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int result;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v11 = a4;
  v4 = a1;
  v5 = a2;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatHandlers.c", (int)"ciInviteHandler");
  if ( v5[9] != 2 )
    Function_20d407c((int)"message->numParams == 2", (int)"chatHandlers.c", (int)"ciInviteHandler");
  result = v5[9];
  if ( result == 2 )
  {
    v7 = v5[8];
    v8 = v5[2];
    result = *(uint *)(v7 + 4);
    if ( *(uint *)(v4 + 2052) )
    {
      v9 = *(uint *)(v7 + 4);
      v10 = v8;
      result = Function_2248c2c(v4, 3, *(uint *)(v4 + 2052), &v9, *(uint *)(v4 + 2056), 0, 0, 8, v9);
    }
  }
  return result;
}

//----- (022505D8) --------------------------------------------------------
char *__fastcall Function_22505d8(int a1, int a2, int a3, int a4)
{
  int v4;
  uint *v5;
  char *result;
  int v7;
  char *v8;
  char *v9;
  char *v10;
  char *i;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  uchar *v18;
  uchar *v19;
  bool v20;
  int v21;
  int v22;
  char *v23;
  int v24;
  int v25;
  char *v26;
  int v27;
  int v28;
  char *v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;

  v34 = a4;
  v4 = a2;
  v21 = a1;
  v5 = 0;
  if ( *(uint *)(a2 + 36) != 4 )
    Function_20d407c((int)"message->numParams == 4", (int)"chatHandlers.c", (int)"ciNameReplyHandler");
  result = *(char **)(v4 + 36);
  if ( result == (char *)4 )
  {
    v7 = *(uint *)(v4 + 32);
    v8 = *(char **)(v7 + 8);
    v9 = *(char **)(v7 + 12);
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v32 = 0;
    v33 = 0;
    v22 = 1;
    v23 = v8;
    v25 = 15;
    v26 = v8;
    v28 = 3;
    v29 = v8;
    v31 = 3;
    result = (char *)Function_224d5a8(v21, 4, &v22);
    v10 = result;
    if ( result )
    {
      if ( *(uint *)result != 1 )
        v5 = (uint *)*((uint *)result + 7);
      result = Function_20d8f58(v9, " ");
      for ( i = result; result; i = result )
      {
        if ( !*i )
          Function_20d407c((int)"nick[0] != '\\0'", (int)"chatHandlers.c", (int)"ciNameReplyHandler");
        v12 = *i;
        if ( v12 == 64 )
        {
          if ( !i[1] )
            Function_20d407c((int)"nick[1] != '\\0'", (int)"chatHandlers.c", (int)"ciNameReplyHandler");
          v13 = 2;
          ++i;
        }
        else if ( v12 == 43 )
        {
          if ( !i[1] )
            Function_20d407c((int)"nick[1] != '\\0'", (int)"chatHandlers.c", (int)"ciNameReplyHandler");
          v13 = 1;
          ++i;
        }
        else
        {
          v13 = 0;
        }
        if ( *(uint *)v10 != 1 )
        {
          if ( v5[1] == *v5 )
          {
            v14 = ((int (__fastcall *)(uint, int))dword_21D7894[0])(v5[2], 4 * (*v5 + 100));
            if ( !v14 )
              return (char *)Function_20d407c((int)"0", (int)"chatHandlers.c", (int)"ciNameReplyHandler");
            v5[2] = v14;
            v15 = ((int (__fastcall *)(uint, int))dword_21D7894[0])(v5[3], 4 * (*v5 + 100));
            if ( !v15 )
              return (char *)Function_20d407c((int)"0", (int)"chatHandlers.c", (int)"ciNameReplyHandler");
            v5[3] = v15;
            *v5 += 100;
          }
          v16 = strlen(i);
          v17 = v16;
          v18 = (uchar *)((int (__fastcall *)(int))dword_21D7880[0])(v16 + 1);
          v19 = v18;
          if ( !v18 )
            return (char *)Function_20d407c((int)"0", (int)"chatHandlers.c", (int)"ciNameReplyHandler");
          memcpy(v18, i, v17 + 1);
          *(uint *)(v5[2] + 4 * v5[1]) = v19;
          *(uint *)(v5[3] + 4 * v5[1]++) = v13;
        }
        v20 = *(uint *)v10 == 1;
        if ( *(uint *)v10 != 1 )
          v20 = *(uint *)v10 == 15;
        if ( v20 )
          Function_224c784(v21, i, v8, v13, 0, 0);
        result = Function_20d8f58(0, " ");
      }
    }
  }
  return result;
}

//----- (022508D4) --------------------------------------------------------
int *__fastcall Function_22508d4(int a1, int a2)
{
  int v2;
  int v3;
  int *result;
  char *v5;
  int v6;
  int v7;
  int *v8;
  uint *v9;
  uint *v10;
  int v11;
  char *v12;
  int v13;
  int v14;
  char *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  char *v20;
  int v21;
  char *v22;
  int v23;
  int v24;
  char *v25;
  int v26;
  int v27;
  char *v28;
  int v29;
  int v30;
  int v31;
  int v32;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatHandlers.c", (int)"ciEndOfNamesHandler");
  if ( *(uint *)(v3 + 36) != 3 )
    Function_20d407c((int)"message->numParams == 3", (int)"chatHandlers.c", (int)"ciEndOfNamesHandler");
  result = *(int **)(v3 + 36);
  if ( result == (int *)3 )
  {
    v5 = *(char **)(*(uint *)(v3 + 32) + 4);
    v6 = Function_20d8d14(*(int **)(*(uint *)(v3 + 32) + 4), "*");
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    if ( !v6 )
      v5 = 0;
    v21 = 1;
    v22 = v5;
    v24 = 15;
    v25 = v5;
    v27 = 3;
    v28 = v5;
    v30 = 3;
    result = (int *)Function_224d5a8(v2, 4, &v21);
    v8 = result;
    if ( result )
    {
      result = (int *)*result;
      if ( *v8 == 1 )
      {
        v18 = 1;
        v19 = 0;
        v20 = v5;
        if ( !v8[4] )
          Function_224c454(v2, v5);
        result = Function_224d908(v2, v8, (int)&v18, v7);
      }
      else if ( result == (int *)15 )
      {
        v9 = (uint *)v8[7];
        v15 = v5;
        v16 = v9[1];
        v17 = v9[2];
        result = Function_224d908(v2, v8, (int)&v15, v9[3]);
      }
      else if ( result == (int *)3 )
      {
        v10 = (uint *)v8[7];
        v12 = v5;
        v11 = 1;
        v13 = v10[1];
        v14 = v10[2];
        result = Function_224d908(v2, v8, (int)&v11, v10[3]);
      }
    }
  }
  return result;
}

//----- (02250AA8) --------------------------------------------------------
uint *__fastcall Function_2250aa8(int a1, int a2)
{
  int v2;
  int v3;
  uint *result;
  int v5;
  char *v6;
  char *v7;
  int *v8;
  bool v9;
  char *v10;
  char *v11;
  int v12;
  char *v13;
  char *v14;
  int v15;
  char *v16;
  int v17;

  v2 = a2;
  v3 = a1;
  if ( *(uint *)(a2 + 36) != 3 )
    Function_20d407c((int)"message->numParams == 3", (int)"chatHandlers.c", (int)"ciRplTopicHandler");
  result = *(uint **)(v2 + 36);
  if ( result == (uint *)3 )
  {
    v5 = *(uint *)(v2 + 32);
    v6 = *(char **)(v5 + 4);
    v7 = *(char **)(v5 + 8);
    Function_224c5dc(v3, *(char **)(v5 + 4), v7);
    v17 = 0;
    v15 = 2;
    v16 = v6;
    v8 = (int *)Function_224d5a8(v3, 1, &v15);
    if ( v8 )
    {
      v12 = 1;
      v13 = v6;
      v14 = v7;
      result = Function_224d908(v3, v8, (int)&v12, 1);
    }
    else
    {
      result = (uint *)Function_224bd94(v3, v6);
      v9 = result == 0;
      if ( result )
        v9 = result[5] == 0;
      if ( !v9 )
      {
        v10 = v6;
        v11 = v7;
        result = (uint *)Function_2248c2c(v3, 9, result[5], &v10, result[11], 0, v6, 8, v6);
      }
    }
  }
  return result;
}

//----- (02250BC4) --------------------------------------------------------
uint *__fastcall Function_2250bc4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint *result;
  char *v7;
  int *v8;
  bool v9;
  char *v10;
  char *v11;
  int v12;
  char *v13;
  char *v14;
  int v15;
  char *v16;
  int v17;
  int v18;

  v18 = a4;
  v4 = a2;
  v5 = a1;
  if ( *(uint *)(a2 + 36) < 2 )
    Function_20d407c((int)"message->numParams >= 2", (int)"chatHandlers.c", (int)"ciRplNoTopicHandler");
  result = *(uint **)(v4 + 36);
  if ( (int)result >= 2 )
  {
    v7 = *(char **)(*(uint *)(v4 + 32) + 4);
    v17 = 0;
    v15 = 2;
    v16 = v7;
    v8 = (int *)Function_224d5a8(v5, 1, &v15);
    if ( v8 )
    {
      v12 = 1;
      v13 = v7;
      v14 = &byte_225A608;
      result = Function_224d908(v5, v8, (int)&v12, (int)&byte_225A608);
    }
    else
    {
      result = (uint *)Function_224bd94(v5, v7);
      v9 = result == 0;
      if ( result )
        v9 = result[5] == 0;
      if ( !v9 )
      {
        v10 = v7;
        v11 = &byte_225A608;
        result = (uint *)Function_2248c2c(v5, 9, result[5], &v10, result[11], 0, v7, 8, v7);
      }
    }
  }
  return result;
}

//----- (02250CDC) --------------------------------------------------------
uint *__fastcall Function_2250cdc(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint *result;
  int *v7;
  int v8;
  int v9;
  int *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;

  v17 = a4;
  v4 = a1;
  v5 = a2;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatHandlers.c", (int)"ciErrNickInUseHandler");
  if ( *(uint *)(v5 + 36) != 3 )
    Function_20d407c((int)"message->numParams == 3", (int)"chatHandlers.c", (int)"ciErrNickInUseHandler");
  result = *(uint **)(v5 + 36);
  if ( result == (uint *)3 )
  {
    v7 = *(int **)(v5 + 32);
    v8 = *v7;
    v9 = v7[1];
    v14 = 9;
    v15 = v8;
    v16 = v9;
    v10 = (int *)Function_224d5a8(v4, 1, &v14);
    if ( v10 )
    {
      v11 = 0;
      v12 = v8;
      v13 = v9;
      result = Function_224d908(v4, v10, (int)&v11, 0);
    }
    else
    {
      if ( !*(uint *)(v4 + 4) )
        Function_20d407c((int)"connection->connecting", (int)"chatHandlers.c", (int)"ciErrNickInUseHandler");
      result = *(uint **)(v4 + 4);
      if ( result )
        result = (uint *)Function_2255a08(v4, 1, v4 + 876);
    }
  }
  return result;
}

//----- (02250E08) --------------------------------------------------------
int *__fastcall Function_2250e08(int a1, int a2)
{
  int v2;
  int v3;
  int *result;
  uint *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  char *v10;
  int v11;
  int v12;
  int *v13;
  char *v14;
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

  v2 = a2;
  v3 = a1;
  if ( *(uint *)(a2 + 36) != 8 )
    Function_20d407c((int)"message->numParams == 8", (int)"chatHandlers.c", (int)"ciRplWhoReplyHandler");
  result = *(int **)(v2 + 36);
  if ( result == (int *)8 )
  {
    v5 = *(uint **)(v2 + 32);
    v6 = v5[2];
    v7 = v5[3];
    v8 = v5[5];
    v9 = v5[2];
    v10 = (char *)v5[5];
    v11 = v5[3];
    v12 = v5[1];
    Function_224d35c(v3, v10, v9, v11);
    v34 = 0;
    v37 = 0;
    v29 = 6;
    v32 = 10;
    v35 = 11;
    v30 = v8;
    v31 = v12;
    v33 = v8;
    v36 = v12;
    result = (int *)Function_224d5a8(v3, 3, &v29);
    v13 = result;
    if ( result )
    {
      result = (int *)*result;
      if ( *v13 == 6 )
      {
        v14 = *(char **)(*(uint *)(v2 + 32) + 24);
        v15 = 0;
        if ( strchr(*(char **)(*(uint *)(v2 + 32) + 24), 64) )
          v15 = 2;
        if ( strchr(v14, 43) )
          v15 |= 1u;
        v25 = 1;
        v26 = v12;
        v27 = v8;
        v28 = v15;
        result = Function_224d908(v3, v13, (int)&v25, 1);
      }
      else if ( result == (int *)10 )
      {
        v22 = v8;
        v23 = v6;
        v24 = v7;
        v21 = 1;
        Function_2248c2c(v3, 21, v13[4], &v21, v13[6], v13[8], 0, 16, v16);
        result = 0;
        v13[4] = 0;
      }
      else if ( result == (int *)11 )
      {
        result = (int *)v13[4];
        if ( result )
        {
          v16 = 1;
          v17 = v13[2];
          v18 = v8;
          v19 = v6;
          v20 = v7;
          result = (int *)Function_2248c2c(v3, 22, v13[4], &v16, v13[6], v13[8], 0, 20, 1);
        }
      }
    }
  }
  return result;
}

//----- (02251024) --------------------------------------------------------
int *__fastcall Function_2251024(int a1, int a2)
{
  int v2;
  int v3;
  int *result;
  int v5;
  int *v6;
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

  v2 = a2;
  v3 = a1;
  if ( *(uint *)(a2 + 36) != 3 )
    Function_20d407c((int)"message->numParams == 3", (int)"chatHandlers.c", (int)"ciRplEndOfWhoHandler");
  result = *(int **)(v2 + 36);
  if ( result == (int *)3 )
  {
    v5 = *(uint *)(*(uint *)(v2 + 32) + 4);
    v18 = 0;
    v21 = 0;
    v16 = 10;
    v17 = v5;
    v19 = 11;
    v20 = v5;
    result = (int *)Function_224d5a8(v3, 2, &v16);
    v6 = result;
    if ( result )
    {
      result = (int *)*result;
      if ( *v6 == 10 )
      {
        v12 = 0;
        v13 = v5;
        v14 = 0;
        v15 = 0;
        result = Function_224d908(v3, v6, (int)&v12, 0);
      }
      else if ( result == (int *)11 )
      {
        v7 = 1;
        v8 = v5;
        v9 = 0;
        v10 = 0;
        v11 = 0;
        result = Function_224d908(v3, v6, (int)&v7, 0);
      }
    }
  }
  return result;
}

//----- (0225113C) --------------------------------------------------------
uchar *__fastcall Function_225113c(uchar *a1, uint *a2)
{
  uchar *v2;
  uint *v3;
  uchar *result;
  int i;
  int v6;
  bool v7;
  uchar *v8;
  uchar *v9;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    Function_20d407c((int)"flags", (int)"chatHandlers.c", (int)"ciParseValue");
  if ( !v3 )
    Function_20d407c((int)"len", (int)"chatHandlers.c", (int)"ciParseValue");
  if ( !v2 || *v2 != 92 )
    return 0;
  for ( i = 0; ; ++i )
  {
    v6 = (char)v2[i + 1];
    v7 = v6 == 0;
    if ( v2[i + 1] )
      v7 = v6 == 92;
    if ( v7 )
      break;
  }
  v8 = (uchar *)((int (__fastcall *)(int))dword_21D7880[0])(i + 1);
  v9 = v8;
  if ( !v8 )
    return 0;
  memcpy(v8, v2 + 1, i);
  v9[i] = 0;
  result = v9;
  *v3 = i + 1;
  return result;
}

//----- (02251208) --------------------------------------------------------
int __fastcall Function_2251208(int a1, int a2)
{
  int v2;
  int result;
  uint *v4;
  int v5;
  uchar *v6;
  int *v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int i;
  uchar *v13;
  int v14;
  int j;
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

  v2 = a2;
  v16 = a1;
  if ( *(uint *)(a2 + 36) != 4 )
    Function_20d407c((int)"message->numParams == 4", (int)"chatHandlers.c", (int)"ciRplGetKeyHandler");
  result = *(uint *)(v2 + 36);
  if ( result == 4 )
  {
    v4 = *(uint **)(v2 + 32);
    v5 = v4[2];
    v6 = (uchar *)v4[3];
    v17 = v4[1];
    v26 = 0;
    v24 = 12;
    v25 = v5;
    result = Function_224d5a8(v16, 1, &v24);
    v7 = (int *)result;
    if ( result )
    {
      v8 = *(int **)(result + 28);
      v9 = *v8;
      result = ((int (__fastcall *)(int))dword_21D7880[0])(4 * *v8);
      v11 = result;
      if ( result )
      {
        for ( i = 0; i < v9; ++i )
        {
          v13 = Function_225113c(v6, &v18);
          if ( v13 )
          {
            *(uint *)(v11 + 4 * i) = v13;
            v6 += v18;
          }
          else
          {
            *(uint *)(v11 + 4 * i) = ((int (__fastcall *)(char *))dword_21EA8AC[0])(&byte_225A608);
          }
        }
        v19 = 1;
        v21 = v9;
        v20 = v17;
        v14 = v8[1];
        v23 = v11;
        v22 = v14;
        if ( v8[2] )
          Function_2248c2c(v16, 29, v7[4], &v19, v7[6], v7[8], 0, 20, v16);
        else
          Function_224d908(v16, v7, (int)&v19, v10);
        for ( j = 0; j < v9; ++j )
          ((void (__fastcall *)(uint))dword_21D78B0[0])(*(uint *)(v11 + 4 * j));
        result = ((int (__fastcall *)(int))dword_21D78B0[0])(v11);
      }
    }
  }
  return result;
}

//----- (022513B8) --------------------------------------------------------
int *__fastcall Function_22513b8(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int *result;
  int v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;

  v17 = a4;
  v4 = a2;
  v5 = a1;
  if ( *(uint *)(a2 + 36) != 4 )
    Function_20d407c((int)"message->numParams == 4", (int)"chatHandlers.c", (int)"ciRplEndGetKeyHandler");
  result = *(int **)(v4 + 36);
  if ( result == (int *)4 )
  {
    v7 = *(uint *)(*(uint *)(v4 + 32) + 8);
    v16 = 0;
    v14 = 12;
    v15 = v7;
    result = (int *)Function_224d5a8(v5, 1, &v14);
    if ( result )
    {
      v8 = (int *)result[7];
      v10 = 0;
      v9 = 1;
      v11 = *v8;
      v12 = v8[1];
      v13 = 0;
      result = Function_224d908(v5, result, (int)&v9, v12);
    }
  }
  return result;
}

//----- (02251484) --------------------------------------------------------
int __fastcall Function_2251484(int a1, int a2)
{
  int v2;
  int result;
  int v4;
  int v5;
  char *v6;
  uchar *v7;
  int v8;
  bool v9;
  int v10;
  uchar *j;
  int v12;
  bool v13;
  int v14;
  int v15;
  bool v16;
  int *v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  bool v23;
  uchar *v24;
  uchar *v25;
  uchar *v26;
  int v27;
  int v28;
  int v29;
  int i;
  int v31;
  int v32;
  int *v33;
  int v34;
  int v35;
  char *v36;
  int v37;
  int v38;
  int v39;
  int v40;
  char *v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;

  v2 = a2;
  v31 = a1;
  if ( *(uint *)(a2 + 36) != 5 )
    Function_20d407c((int)"message->numParams == 5", (int)"chatHandlers.c", (int)"ciRplGetCKeyHandler");
  result = *(uint *)(v2 + 36);
  if ( result == 5 )
  {
    v4 = *(uint *)(v2 + 32);
    v5 = *(uint *)(v4 + 12);
    v6 = *(char **)(v4 + 4);
    v32 = *(uint *)(v4 + 8);
    v7 = *(uchar **)(v4 + 16);
    if ( Function_20d8d14(*(int **)(v4 + 12), "BCAST") )
    {
      v47 = 0;
      v45 = 13;
      v46 = v5;
      result = Function_224d5a8(v31, 1, &v45);
      v33 = (int *)result;
      if ( result )
      {
        v17 = *(int **)(result + 28);
        v18 = *v17;
        result = ((int (__fastcall *)(int))dword_21D7880[0])(4 * *v17);
        v20 = result;
        if ( result )
        {
          v21 = 0;
          while ( v21 < v18 )
          {
            v22 = (int)Function_225113c(v7, &v34);
            *(uint *)(v20 + 4 * v21) = v22;
            v23 = v22 == 0;
            if ( v22 )
              v22 = v34;
            ++v21;
            if ( !v23 )
              v7 += v22;
          }
          if ( v17[3] )
          {
            v24 = Function_225113c(v7, &v34);
            if ( v24 )
            {
              while ( 1 )
              {
                v25 = &v7[v34];
                v26 = Function_225113c(v25, &v34);
                if ( !v26 )
                  break;
                v7 = &v25[v34];
                v27 = ((int (__fastcall *)(int, int))dword_21D7894[0])(v17[1], 4 * (v18 + 1));
                if ( v27 )
                {
                  v17[1] = v27;
                  v28 = ((int (__fastcall *)(int, int))dword_21D7894[0])(v20, 4 * (v18 + 1));
                  if ( v28 )
                  {
                    v20 = v28;
                    *(uint *)(v17[1] + 4 * v18) = v24;
                    *(uint *)(v28 + 4 * v18++) = v26;
                  }
                  else
                  {
                    ((void (__fastcall *)(uchar *))dword_21D78B0[0])(v24);
                    ((void (__fastcall *)(uchar *))dword_21D78B0[0])(v26);
                  }
                }
                else
                {
                  ((void (__fastcall *)(uchar *))dword_21D78B0[0])(v24);
                  ((void (__fastcall *)(uchar *))dword_21D78B0[0])(v26);
                }
                v24 = Function_225113c(v7, &v34);
                if ( !v24 )
                  goto LABEL_40;
              }
              ((void (__fastcall *)(uchar *))dword_21D78B0[0])(v24);
            }
LABEL_40:
            *v17 = v18;
          }
          v35 = 1;
          v36 = v6;
          v38 = v18;
          v37 = v32;
          v29 = v17[1];
          v40 = v20;
          v39 = v29;
          if ( v17[2] )
            Function_2248c2c(v31, 30, v33[4], &v35, v33[6], v33[8], 0, 24, v31);
          else
            Function_224d908(v31, v33, (int)&v35, v19);
          for ( i = 0; i < v18; ++i )
            ((void (__fastcall *)(uint))dword_21D78B0[0])(*(uint *)(v20 + 4 * i));
          result = ((int (__fastcall *)(int))dword_21D78B0[0])(v20);
        }
      }
    }
    else
    {
      result = Function_224bd94(v31, v6);
      v10 = result;
      v9 = result == 0;
      if ( result )
      {
        result = *(uint *)(result + 40);
        v9 = result == 0;
      }
      if ( !v9 )
      {
        v43 = 0;
        v44 = 0;
        v41 = v6;
        v42 = v32;
        for ( result = (char)*v7; *v7; result = (char)*v7 )
        {
          result = (int)Function_20d90b0(v7, "b_", v8);
          for ( j = (uchar *)result; ; ++j )
          {
            v12 = (char)*j;
            v13 = v12 == 0;
            if ( *j )
              v13 = v12 == 92;
            if ( v13 )
              break;
          }
          if ( !*j )
            break;
          *j = 0;
          v7 = j + 1;
          v14 = (int)v7;
          while ( 1 )
          {
            v15 = (char)*v7;
            v16 = v15 == 0;
            if ( *v7 )
              v16 = v15 == 92;
            if ( v16 )
              break;
            ++v7;
          }
          *v7 = 0;
          v43 = result;
          v44 = v14;
          Function_2248c2c(v31, 28, *(uint *)(v10 + 40), &v41, *(uint *)(v10 + 44), 0, v6, 16, v31);
          *v7 = v15;
        }
      }
    }
  }
  return result;
}

//----- (02251820) --------------------------------------------------------
int *__fastcall Function_2251820(int a1, int a2)
{
  int v2;
  int v3;
  int *result;
  int v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;

  v2 = a2;
  v3 = a1;
  if ( *(uint *)(a2 + 36) != 4 )
    Function_20d407c((int)"message->numParams == 4", (int)"chatHandlers.c", (int)"ciRplEndGetCKeyHandler");
  result = *(int **)(v2 + 36);
  if ( result == (int *)4 )
  {
    v5 = *(uint *)(v2 + 32);
    v6 = *(uint *)(v5 + 4);
    v7 = *(uint *)(v5 + 8);
    v17 = 0;
    v15 = 13;
    v16 = v7;
    result = (int *)Function_224d5a8(v3, 1, &v15);
    if ( result )
    {
      v8 = (int *)result[7];
      v10 = v6;
      v11 = 0;
      v9 = 1;
      v12 = *v8;
      v13 = v8[1];
      v14 = 0;
      result = Function_224d908(v3, result, (int)&v9, v13);
    }
  }
  return result;
}

//----- (022518EC) --------------------------------------------------------
int __fastcall Function_22518ec(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  uchar *v8;
  int v9;
  bool j;
  int v11;
  uchar *l;
  int v13;
  bool v14;
  int v15;
  int v16;
  bool v17;
  int *v18;
  int i;
  int v20;
  int v21;
  int v22;
  bool v23;
  uchar *v24;
  uchar *v25;
  uchar *v26;
  int v27;
  int v28;
  int v29;
  uchar *v30;
  uchar *v31;
  int v32;
  int v33;
  int v34;
  bool v35;
  int k;
  int v37;
  uchar *v38;
  char *v39;
  int *v40;
  int v41;
  int v42;
  char *v43;
  int v44;
  int v45;
  int v46;
  int v47;
  char *v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;

  v55 = a4;
  v4 = a2;
  v37 = a1;
  if ( *(uint *)(a2 + 36) != 4 )
    Function_20d407c((int)"message->numParams == 4", (int)"chatHandlers.c", (int)"ciRplGetChanKeyHandler");
  result = *(uint *)(v4 + 36);
  if ( result == 4 )
  {
    v6 = *(uint *)(v4 + 32);
    v7 = *(uint *)(v6 + 8);
    v39 = *(char **)(v6 + 4);
    v8 = *(uchar **)(v6 + 12);
    if ( Function_20d8d14(*(int **)(v6 + 8), "BCAST") )
    {
      v54 = 0;
      v52 = 14;
      v53 = v7;
      result = Function_224d5a8(v37, 1, &v52);
      v40 = (int *)result;
      if ( !result )
        return result;
      v18 = *(int **)(result + 28);
      i = *v18;
      if ( *v18 )
      {
        result = ((int (__fastcall *)(int))dword_21D7880[0])(4 * i);
        v20 = result;
        if ( !result )
          return result;
        v21 = 0;
        while ( v21 < i )
        {
          v22 = (int)Function_225113c(v8, &v41);
          *(uint *)(v20 + 4 * v21) = v22;
          v23 = v22 == 0;
          if ( v22 )
            v22 = v41;
          ++v21;
          if ( !v23 )
            v8 += v22;
        }
        if ( v18[2] )
        {
          v24 = Function_225113c(v8, &v41);
          if ( v24 )
          {
            while ( 1 )
            {
              v25 = &v8[v41];
              v26 = Function_225113c(v25, &v41);
              if ( !v26 )
                break;
              v8 = &v25[v41];
              v27 = ((int (__fastcall *)(int, int))dword_21D7894[0])(v18[1], 4 * (i + 1));
              if ( v27 )
              {
                v18[1] = v27;
                v28 = ((int (__fastcall *)(int, int))dword_21D7894[0])(v20, 4 * (i + 1));
                if ( v28 )
                {
                  v20 = v28;
                  *(uint *)(v18[1] + 4 * i) = v24;
                  *(uint *)(v28 + 4 * i++) = v26;
                }
                else
                {
                  ((void (__fastcall *)(uchar *))dword_21D78B0[0])(v24);
                  ((void (__fastcall *)(uchar *))dword_21D78B0[0])(v26);
                }
              }
              else
              {
                ((void (__fastcall *)(uchar *))dword_21D78B0[0])(v24);
                ((void (__fastcall *)(uchar *))dword_21D78B0[0])(v26);
              }
              v24 = Function_225113c(v8, &v41);
              if ( !v24 )
                goto LABEL_41;
            }
            ((void (__fastcall *)(uchar *))dword_21D78B0[0])(v24);
          }
LABEL_41:
          *v18 = i;
        }
      }
      else
      {
        v29 = 0;
        v20 = 0;
        for ( i = 0; ; ++i )
        {
          v30 = Function_225113c(v8, &v41);
          if ( !v30 )
            break;
          v31 = &v8[v41];
          v38 = Function_225113c(v31, &v41);
          if ( !v38 )
          {
            ((void (__fastcall *)(uchar *))dword_21D78B0[0])(v30);
            break;
          }
          v8 = &v31[v41];
          v32 = ((int (__fastcall *)(int, int))dword_21D7894[0])(v29, 4 * (i + 1));
          v33 = ((int (__fastcall *)(int, int))dword_21D7894[0])(v20, 4 * (i + 1));
          v34 = v33;
          v35 = v32 == 0;
          if ( v32 )
            v35 = v33 == 0;
          if ( v35 )
          {
            ((void (__fastcall *)(uchar *))dword_21D78B0[0])(v30);
            ((void (__fastcall *)(uchar *))dword_21D78B0[0])(v38);
            for ( j = i-- == 0; !j; --i )
            {
              ((void (__fastcall *)(uint))dword_21D78B0[0])(*(uint *)(v29 + 4 * i));
              ((void (__fastcall *)(uint))dword_21D78B0[0])(*(uint *)(v20 + 4 * i));
              j = i == 0;
            }
            if ( v32 )
              ((void (__fastcall *)(int))dword_21D78B0[0])(v32);
            else
              ((void (__fastcall *)(int))dword_21D78B0[0])(v29);
            if ( v34 )
              ((void (__fastcall *)(int))dword_21D78B0[0])(v34);
            else
              ((void (__fastcall *)(int))dword_21D78B0[0])(v20);
          }
          *(uint *)(v32 + 4 * i) = v30;
          *(uint *)(v34 + 4 * i) = v38;
          v29 = v32;
          v20 = v34;
        }
        *v18 = i;
        v18[1] = v29;
      }
      v42 = 1;
      v43 = v39;
      v44 = 0;
      v45 = i;
      v46 = v18[1];
      v47 = v20;
      Function_224d908(v37, v40, (int)&v42, v46);
      for ( k = 0; k < i; ++k )
        ((void (__fastcall *)(uint))dword_21D78B0[0])(*(uint *)(v20 + 4 * k));
      result = ((int (__fastcall *)(int))dword_21D78B0[0])(v20);
    }
    else
    {
      result = Function_224bd94(v37, v39);
      v11 = result;
      j = result == 0;
      if ( result )
      {
        result = *(uint *)(result + 40);
        j = result == 0;
      }
      if ( !j )
      {
        v50 = 0;
        v51 = 0;
        v49 = 0;
        v48 = v39;
        for ( result = (char)*v8; *v8; result = (char)*v8 )
        {
          result = (int)Function_20d90b0(v8, "b_", v9);
          for ( l = (uchar *)result; ; ++l )
          {
            v13 = (char)*l;
            v14 = v13 == 0;
            if ( *l )
              v14 = v13 == 92;
            if ( v14 )
              break;
          }
          if ( !*l )
            break;
          *l = 0;
          v8 = l + 1;
          v15 = (int)v8;
          while ( 1 )
          {
            v16 = (char)*v8;
            v17 = v16 == 0;
            if ( *v8 )
              v17 = v16 == 92;
            if ( v17 )
              break;
            ++v8;
          }
          *v8 = 0;
          v50 = result;
          v51 = v15;
          Function_2248c2c(v37, 28, *(uint *)(v11 + 40), &v48, *(uint *)(v11 + 44), 0, v39, 16, v37);
          *v8 = v16;
        }
      }
    }
  }
  return result;
}

//----- (02251D6C) --------------------------------------------------------
int __fastcall Function_2251d6c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int result;
  char *v7;
  bool v8;
  int v9;
  char v10;
  int v11;

  v11 = a4;
  v4 = a1;
  v5 = a2;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatHandlers.c", (int)"ciRplUserIPHandler");
  if ( *(uint *)(v5 + 36) < 1 )
    Function_20d407c((int)"message->numParams >= 1", (int)"chatHandlers.c", (int)"ciRplUserIPHandler");
  result = *(uint *)(v5 + 36);
  if ( result >= 1 )
  {
    v7 = strchr(*(char **)(*(uint *)(v5 + 32) + 4 * (result - 1)), 64);
    v8 = v7 == 0;
    if ( v7 )
      v8 = *(uint *)(v4 + 16) == 0;
    if ( !v8 )
    {
      v9 = ((int (__fastcall *)(char *))dword_21EAF1C[0])(v7 + 1);
      (*(void (__fastcall **)(int, int, char *, uint))(v4 + 16))(v4, v9, &v10, *(uint *)(v4 + 24));
      strncpy((uchar *)(v4 + 1068), &v10, 128);
      *(uchar *)(v4 + 1195) = 0;
    }
    result = Function_225389c(v4);
  }
  return result;
}

//----- (02251E4C) --------------------------------------------------------
int __fastcall Function_2251e4c(int a1, int a2, int a3, int a4)
{
  int result;
  uint *v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v9 = a4;
  v7 = 0;
  v8 = 0;
  v6 = 0;
  result = Function_224d5a8(a1, 1, &v6);
  if ( result )
  {
    v5 = *(uint **)(result + 28);
    if ( !v5 )
      Function_20d407c((int)"data != NULL", (int)"chatHandlers.c", (int)"ciRplListStartHandler");
    result = 1;
    *v5 = 1;
  }
  return result;
}

//----- (02251EC0) --------------------------------------------------------
int __fastcall Function_2251ec0(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  bool v5;
  uint *v6;
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
  uchar *v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;

  v2 = a2;
  v3 = a1;
  if ( *(uint *)(a2 + 36) != 4 )
    Function_20d407c((int)"message->numParams == 4", (int)"chatHandlers.c", (int)"ciRplListHandler");
  result = *(uint *)(v2 + 36);
  if ( result == 4 )
  {
    v26 = 0;
    v27 = 0;
    v25 = 0;
    result = Function_224d5a8(v3, 1, &v25);
    v6 = (uint *)result;
    v5 = result == 0;
    if ( result )
    {
      result = *(uint *)(result + 16);
      v5 = result == 0;
    }
    if ( !v5 )
    {
      v7 = v6[7];
      if ( !v7 )
        Function_20d407c((int)"data != NULL", (int)"chatHandlers.c", (int)"ciRplListHandler");
      v8 = strlen(*(char **)(*(uint *)(v2 + 32) + 4));
      v9 = v8;
      result = ((int (__fastcall *)(int))dword_21D7880[0])(v8 + 1);
      v10 = result;
      if ( result )
      {
        memcpy((uchar *)result, *(char **)(*(uint *)(v2 + 32) + 4), v9 + 1);
        Function_20dae0c(*(uint *)(*(uint *)(v2 + 32) + 8), v11, v12, v13);
        v15 = v14;
        v16 = strlen(*(char **)(*(uint *)(v2 + 32) + 12));
        v17 = v16;
        v18 = (uchar *)((int (__fastcall *)(int))dword_21D7880[0])(v16 + 1);
        v19 = (int)v18;
        if ( v18 )
        {
          memcpy(v18, *(char **)(*(uint *)(v2 + 32) + 12), v17 + 1);
          v21 = *(uint *)(v7 + 4);
          v22 = v10;
          v23 = v19;
          v24 = v15;
          v20 = 1;
          Function_2248c2c(v3, 13, v6[4], &v20, v6[6], v6[8], 0, 24, 1);
          if ( ((int (__fastcall *)(uint, int))dword_21D7894[0])(*(uint *)(v7 + 8), 4 * (*(uint *)(v7 + 4) + 1)) )
          {
            result = ReadPkmnBattleData1();
          }
          else
          {
            ((void (__fastcall *)(int))dword_21D78B0[0])(v10);
            result = ((int (__fastcall *)(int))dword_21D78B0[0])(v19);
          }
        }
        else
        {
          result = ((int (__fastcall *)(int))dword_21D78B0[0])(v10);
        }
      }
    }
  }
  return result;
}

//----- (02252060) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0225210C) --------------------------------------------------------
int *__fastcall Function_225210c(int a1)
{
  int v1;
  int *result;
  uint *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v1 = a1;
  v9 = 0;
  v10 = 0;
  v8 = 0;
  result = (int *)Function_224d5a8(a1, 1, &v8);
  if ( result )
  {
    v3 = (uint *)result[7];
    v4 = 1;
    v5 = v3[1];
    v6 = v3[2];
    v7 = v3[3];
    result = Function_224d908(v1, result, (int)&v4, v3[4]);
  }
  return result;
}

//----- (02252184) --------------------------------------------------------
int __fastcall Function_2252184(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  char *v6;
  int v7;
  int v8;
  bool v9;
  int *v10;
  char *v11;
  int *v12;
  int v13;
  char *v14;
  int *v15;
  int v16;
  char *v17;
  int v18;
  char v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;

  v2 = a2;
  v3 = a1;
  if ( *(uint *)(a2 + 36) < 3 )
    Function_20d407c((int)"message->numParams >=3", (int)"chatHandlers.c", (int)"ciRplChannelModeIsHandler");
  result = *(uint *)(v2 + 36);
  if ( result >= 3 )
  {
    v5 = *(uint *)(v2 + 32);
    v6 = *(char **)(v5 + 4);
    result = Function_224ec20(*(uint *)(v5 + 8), v5 + 12, result - 3);
    v7 = result;
    if ( result )
    {
      v20 = 0;
      v21 = 0;
      v22 = 0;
      v23 = 0;
      v24 = 0;
      v25 = 0;
      v26 = 0;
      v27 = 0;
      Function_224eed4(&v20, result);
      if ( !Function_224c184(v3, v6, &v19) )
      {
        Function_224c270(v3, v6, (char *)&v20);
        v8 = Function_224bd94(v3, v6);
        v9 = v8 == 0;
        if ( v8 )
          v9 = *(uint *)(v8 + 24) == 0;
        if ( !v9 )
        {
          v12 = &v20;
          v11 = v6;
          Function_2248c2c(v3, 10, *(uint *)(v8 + 24), &v11, *(uint *)(v8 + 44), 0, v6, 8, v6);
        }
      }
      v18 = 0;
      v16 = 5;
      v17 = v6;
      v10 = (int *)Function_224d5a8(v3, 1, &v16);
      if ( v10 )
      {
        v13 = 1;
        v14 = v6;
        v15 = &v20;
        Function_224d908(v3, v10, (int)&v13, (int)&v20);
      }
      result = ((int (__fastcall *)(int, int *))dword_21D78B0[0])(v7, v10);
    }
  }
  return result;
}

//----- (02252304) --------------------------------------------------------
int *__fastcall Function_2252304(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int *result;
  int v7;
  int *v8;
  uint *v9;
  int **v10;
  int v11;
  int v12;
  uint *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;

  v21 = a4;
  v4 = a1;
  v5 = a2;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatHandlers.c", (int)"ciRplWhoisUserHandler");
  if ( *(uint *)(v5 + 36) != 6 )
    Function_20d407c((int)"message->numParams == 6", (int)"chatHandlers.c", (int)"ciRplWhoisUserHandler");
  result = *(int **)(v5 + 36);
  if ( result == (int *)6 )
  {
    v7 = *(uint *)(*(uint *)(v5 + 32) + 4);
    v17 = 0;
    v20 = 0;
    v15 = 4;
    v16 = v7;
    v18 = 7;
    v19 = v7;
    result = (int *)Function_224d5a8(v4, 2, &v15);
    v8 = result;
    if ( result )
    {
      result = (int *)*result;
      if ( *v8 == 4 )
      {
        v9 = *(uint **)(v5 + 32);
        v10 = (int **)v8[7];
        v11 = v9[5];
        v12 = v9[3];
        result = (int *)((int (__fastcall *)(uint))dword_21EA8AC[0])(v9[2]);
        *v10 = result;
        if ( result )
        {
          result = (int *)((int (__fastcall *)(int))dword_21EA8AC[0])(v11);
          v10[1] = result;
          if ( result )
          {
            result = (int *)((int (__fastcall *)(int))dword_21EA8AC[0])(v12);
            v10[2] = result;
          }
        }
      }
      else if ( result == (int *)7 )
      {
        v13 = (uint *)v8[7];
        if ( !v13 )
          Function_20d407c((int)"data != NULL", (int)"chatHandlers.c", (int)"ciRplWhoisUserHandler");
        if ( !*v13 )
          Function_20d407c((int)"data->channel != NULL", (int)"chatHandlers.c", (int)"ciRplWhoisUserHandler");
        if ( !*(uchar *)*v13 )
          Function_20d407c((int)"data->channel[0] != '\\0'", (int)"chatHandlers.c", (int)"ciRplWhoisUserHandler");
        Function_2256e70(v4 + 28, "MODE %s +b *!*@%s", *v13, *(uint *)(*(uint *)(v5 + 32) + 12));
        result = Function_224d908(v4, v8, 0, v14);
      }
    }
  }
  return result;
}

//----- (022524E8) --------------------------------------------------------
char *__fastcall Function_22524e8(int a1, int a2)
{
  int v2;
  int v3;
  char *result;
  int v5;
  int v6;
  int v7;
  bool v8;
  char *v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v2 = a2;
  v3 = a1;
  if ( *(uint *)(a2 + 36) != 3 )
    Function_20d407c((int)"message->numParams == 3", (int)"chatHandlers.c", (int)"ciRplWhoisChannelsHandler");
  result = *(char **)(v2 + 36);
  if ( result == (char *)3 )
  {
    v5 = *(uint *)(*(uint *)(v2 + 32) + 4);
    v13 = 0;
    v11 = 4;
    v12 = v5;
    result = (char *)Function_224d5a8(v3, 1, &v11);
    if ( result )
    {
      v6 = *((uint *)result + 7);
      for ( result = Function_20d8f58(*(char **)(*(uint *)(v2 + 32) + 8), " "); result; result = Function_20d8f58(
                                                                                                     0,
                                                                                                     " ") )
      {
        if ( *result == 45 )
          ++result;
        v7 = *result;
        v8 = v7 == 64;
        if ( v7 != 64 )
          v8 = v7 == 43;
        if ( v8 )
          ++result;
        result = (char *)((int (__fastcall *)(char *))dword_21EA8AC[0])(result);
        v9 = result;
        if ( !result )
          break;
        v10 = ((int (__fastcall *)(uint, int))dword_21D7894[0])(*(uint *)(v6 + 16), 4 * (*(uint *)(v6 + 12) + 1));
        if ( !v10 )
          return (char *)((int (__fastcall *)(char *))dword_21D78B0[0])(v9);
        *(uint *)(v6 + 16) = v10;
        *(uint *)(v10 + 4 * (*(uint *)(v6 + 12))++) = v9;
      }
    }
  }
  return result;
}

//----- (02252630) --------------------------------------------------------
int *__fastcall Function_2252630(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int *result;
  int v7;
  int *v8;
  int *v9;
  BOOL v10;
  BOOL v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;

  v20 = a4;
  v4 = a2;
  v5 = a1;
  if ( *(uint *)(a2 + 36) != 3 )
    Function_20d407c((int)"message->numParams == 3", (int)"chatHandlers.c", (int)"ciRplEndOfWhoisHandler");
  result = *(int **)(v4 + 36);
  if ( result == (int *)3 )
  {
    v7 = *(uint *)(*(uint *)(v4 + 32) + 4);
    v19 = 0;
    v17 = 4;
    v18 = v7;
    result = (int *)Function_224d5a8(v5, 1, &v17);
    v8 = result;
    if ( result )
    {
      v9 = (int *)result[7];
      v10 = *v9 != 0;
      v12 = v7;
      v11 = v10;
      v13 = *v9;
      v14 = v9[1];
      v15 = v9[2];
      v16 = v9[3];
      result = Function_224d908(v5, v8, (int)&v11, v9[4]);
    }
  }
  return result;
}

//----- (02252718) --------------------------------------------------------
int __fastcall Function_2252718(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  int v6;
  char *v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v2 = a2;
  v3 = a1;
  if ( *(uint *)(a2 + 36) < 3 )
    Function_20d407c((int)"message->numParams >= 3", (int)"chatHandlers.c", (int)"ciRplBanListHandler");
  result = *(uint *)(v2 + 36);
  if ( result >= 3 )
  {
    v5 = *(uint *)(v2 + 32);
    v6 = *(uint *)(v5 + 4);
    v7 = *(char **)(v5 + 8);
    v14 = 0;
    v12 = 8;
    v13 = v6;
    result = Function_224d5a8(v3, 1, &v12);
    if ( result )
    {
      v8 = *(int **)(result + 28);
      if ( !v8 )
        Function_20d407c((int)"data != NULL", (int)"chatHandlers.c", (int)"ciRplBanListHandler");
      if ( *v8 < 0 )
        Function_20d407c((int)"data->numBans >= 0", (int)"chatHandlers.c", (int)"ciRplBanListHandler");
      result = ((int (__fastcall *)(int, int))dword_21D7894[0])(v8[1], 4 * (*v8 + 1));
      if ( result )
      {
        v8[1] = result;
        v9 = strlen(v7);
        v10 = v9;
        result = ((int (__fastcall *)(int))dword_21D7880[0])(v9 + 1);
        v11 = result;
        if ( result )
        {
          memcpy((uchar *)result, v7, v10 + 1);
          *(uint *)(v8[1] + 4 * *v8) = v11;
          result = *v8 + 1;
          *v8 = result;
        }
      }
    }
  }
  return result;
}

//----- (02252864) --------------------------------------------------------
int *__fastcall Function_2252864(int a1, int a2)
{
  int v2;
  int v3;
  int *result;
  int v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v2 = a2;
  v3 = a1;
  if ( *(uint *)(a2 + 36) != 3 )
    Function_20d407c((int)"message->numParams == 3", (int)"chatHandlers.c", (int)"ciRplEndOfBanListHandler");
  result = *(int **)(v2 + 36);
  if ( result == (int *)3 )
  {
    v5 = *(uint *)(*(uint *)(v2 + 32) + 4);
    v12 = 0;
    v10 = 8;
    v11 = v5;
    result = (int *)Function_224d5a8(v3, 1, &v10);
    if ( result )
    {
      v6 = (int *)result[7];
      v8 = v5;
      v7 = 1;
      v9 = *v6;
      result = Function_224d908(v3, result, (int)&v7, v6[1]);
    }
  }
  return result;
}

//----- (02252928) --------------------------------------------------------
int __fastcall Function_2252928(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  char *v5;
  int (__fastcall *v6)(int);
  int v7;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatHandlers.c", (int)"ciRplWelcomeHandler");
  if ( *(uint *)(v3 + 36) != 2 )
    Function_20d407c((int)"message->numParams == 2", (int)"chatHandlers.c", (int)"ciRplWelcomeHandler");
  result = *(uint *)(v3 + 36);
  if ( result == 2 )
  {
    v5 = **(char ***)(v3 + 32);
    result = Function_20d8d14((int *)(v2 + 876), v5);
    if ( result )
    {
      strncpy((uchar *)(v2 + 876), v5, 64);
      result = 0;
      *(uchar *)(v2 + 939) = 0;
    }
    *(uint *)(v2 + 4) = 0;
    *(uint *)v2 = 1;
    v6 = *(int (__fastcall **)(int))(v2 + 20);
    if ( v6 )
    {
      v7 = *(uint *)(v2 + 24);
      result = v6(v2);
    }
  }
  return result;
}

//----- (022529F0) --------------------------------------------------------
int __fastcall Function_22529f0(int a1)
{
  if ( !a1 )
    a1 = Function_20d407c((int)"chat != NULL", (int)"chatHandlers.c", (int)"ciRplSecureKeyHandler");
  return ChangePkmnBattleDataWithTrainerNr(a1);
}

//----- (02252A14) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02252B10) --------------------------------------------------------
int *__fastcall Function_2252b10(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int *result;
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

  v18 = a4;
  v4 = a2;
  v5 = *(uint *)(a2 + 36);
  v6 = a1;
  if ( v5 != 3 )
    Function_20d407c((int)"message->numParams == 3", (int)"chatHandlers.c", (int)"ciRplCDKeyHandler");
  result = *(int **)(v4 + 36);
  if ( result == (int *)3 )
  {
    Function_20dae0c(*(uint *)(*(uint *)(v4 + 32) + 4), v5, a3, a4);
    v8 = *(uint *)(v4 + 32);
    v10 = v9;
    v11 = *(uint *)(v8 + 8);
    v16 = 0;
    v17 = 0;
    v15 = 16;
    result = (int *)Function_224d5a8(v6, 1, &v15);
    if ( result )
    {
      v13 = v10;
      v14 = v11;
      result = Function_224d908(v6, result, (int)&v13, v12);
    }
  }
  return result;
}

//----- (02252BC8) --------------------------------------------------------
int __fastcall Function_2252bc8(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int result;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v4 = a1;
  v5 = a2;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatHandlers.c", (int)"ciRplLoginHandler");
  if ( *(uint *)(v5 + 36) < 3 )
    Function_20d407c((int)"message->numParams >= 3", (int)"chatHandlers.c", (int)"ciRplLoginHandler");
  result = *(uint *)(v5 + 36);
  if ( result >= 3 )
  {
    Function_20dae0c(*(uint *)(*(uint *)(v5 + 32) + 4), a2, a3, a4);
    v4[555] = v7;
    Function_20dae0c(*(uint *)(*(uint *)(v5 + 32) + 8), v8, v9, v10);
    v4[556] = v11;
    if ( v4[4] )
      result = Function_2256bb0(v4 + 7, "USRIP");
    else
      result = Function_225389c(v4);
  }
  return result;
}

//----- (02252C7C) --------------------------------------------------------
int *__fastcall Function_2252c7c(int a1, int a2)
{
  int v2;
  int v3;
  int *result;
  uchar *v5;
  int *v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  uchar *v15;
  int v16;
  int v17;
  int v18;
  uchar *v19;
  int v20;
  uchar *v21;
  int v22;
  int v23;
  uchar *v24;

  v2 = a2;
  v3 = a1;
  if ( *(uint *)(a2 + 36) != 3 )
    Function_20d407c((int)"message->numParams == 3", (int)"chatHandlers.c", (int)"ciErrNoSuchChannelHandler");
  result = *(int **)(v2 + 36);
  if ( result == (int *)3 )
  {
    v5 = *(uchar **)(*(uint *)(v2 + 32) + 4);
    v22 = 0;
    v20 = 1;
    v21 = v5;
    v23 = 5;
    v24 = v5;
    v6 = (int *)Function_224d5a8(v3, 2, &v20);
    v7 = v6;
    if ( !v6 )
      goto LABEL_13;
    v8 = *v6;
    if ( *v7 == 1 )
    {
      v17 = 0;
      v18 = 1;
      v19 = v5;
      return Function_224d908(v3, v7, (int)&v17, 1);
    }
    if ( v8 == 5 )
    {
      v14 = 0;
      v15 = v5;
      v16 = 0;
      result = Function_224d908(v3, v7, (int)&v14, 0);
    }
    else
    {
LABEL_13:
      result = (int *)Function_224d738(v3, v5);
      if ( result )
      {
        v9 = 0;
        v10 = 0;
        v11 = 0;
        v12 = 0;
        v13 = 0;
        result = Function_224d908(v3, result, (int)&v9, 0);
      }
    }
  }
  return result;
}

//----- (02252DB8) --------------------------------------------------------
int *__fastcall Function_2252db8(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int *result;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v14 = a4;
  v4 = a2;
  v5 = a1;
  if ( *(uint *)(a2 + 36) != 3 )
    Function_20d407c((int)"message->numParams == 3", (int)"chatHandlers.c", (int)"ciErrTooManyChannelsHandler");
  result = *(int **)(v4 + 36);
  if ( result == (int *)3 )
  {
    v7 = *(uint *)(*(uint *)(v4 + 32) + 4);
    v13 = 0;
    v11 = 1;
    v12 = v7;
    result = (int *)Function_224d5a8(v5, 1, &v11);
    if ( result )
    {
      v8 = 0;
      v9 = 6;
      v10 = v7;
      result = Function_224d908(v5, result, (int)&v8, 6);
    }
  }
  return result;
}

//----- (02252E6C) --------------------------------------------------------
int *__fastcall Function_2252e6c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int *result;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v14 = a4;
  v4 = a2;
  v5 = a1;
  if ( *(uint *)(a2 + 36) != 3 )
    Function_20d407c((int)"message->numParams == 3", (int)"chatHandlers.c", (int)"ciErrChannelIsFullHandler");
  result = *(int **)(v4 + 36);
  if ( result == (int *)3 )
  {
    v7 = *(uint *)(*(uint *)(v4 + 32) + 4);
    v13 = 0;
    v11 = 1;
    v12 = v7;
    result = (int *)Function_224d5a8(v5, 1, &v11);
    if ( result )
    {
      v8 = 0;
      v9 = 2;
      v10 = v7;
      result = Function_224d908(v5, result, (int)&v8, 2);
    }
  }
  return result;
}

//----- (02252F20) --------------------------------------------------------
int *__fastcall Function_2252f20(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int *result;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v14 = a4;
  v4 = a2;
  v5 = a1;
  if ( *(uint *)(a2 + 36) != 3 )
    Function_20d407c((int)"message->numParams == 3", (int)"chatHandlers.c", (int)"ciErrInviteOnlyChanHandler");
  result = *(int **)(v4 + 36);
  if ( result == (int *)3 )
  {
    v7 = *(uint *)(*(uint *)(v4 + 32) + 4);
    v13 = 0;
    v11 = 1;
    v12 = v7;
    result = (int *)Function_224d5a8(v5, 1, &v11);
    if ( result )
    {
      v8 = 0;
      v9 = 3;
      v10 = v7;
      result = Function_224d908(v5, result, (int)&v8, 3);
    }
  }
  return result;
}

//----- (02252FD4) --------------------------------------------------------
int *__fastcall Function_2252fd4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int *result;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v14 = a4;
  v4 = a2;
  v5 = a1;
  if ( *(uint *)(a2 + 36) != 3 )
    Function_20d407c((int)"message->numParams == 3", (int)"chatHandlers.c", (int)"ciErrBannedFromChanHandler");
  result = *(int **)(v4 + 36);
  if ( result == (int *)3 )
  {
    v7 = *(uint *)(*(uint *)(v4 + 32) + 4);
    v13 = 0;
    v11 = 1;
    v12 = v7;
    result = (int *)Function_224d5a8(v5, 1, &v11);
    if ( result )
    {
      v8 = 0;
      v9 = 4;
      v10 = v7;
      result = Function_224d908(v5, result, (int)&v8, 4);
    }
  }
  return result;
}

//----- (02253088) --------------------------------------------------------
int *__fastcall Function_2253088(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int *result;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v14 = a4;
  v4 = a2;
  v5 = a1;
  if ( *(uint *)(a2 + 36) != 3 )
    Function_20d407c((int)"message->numParams == 3", (int)"chatHandlers.c", (int)"ciErrBadChannelKeyHandler");
  result = *(int **)(v4 + 36);
  if ( result == (int *)3 )
  {
    v7 = *(uint *)(*(uint *)(v4 + 32) + 4);
    v13 = 0;
    v11 = 1;
    v12 = v7;
    result = (int *)Function_224d5a8(v5, 1, &v11);
    if ( result )
    {
      v8 = 0;
      v9 = 5;
      v10 = v7;
      result = Function_224d908(v5, result, (int)&v8, 5);
    }
  }
  return result;
}

//----- (0225313C) --------------------------------------------------------
int *__fastcall Function_225313c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int *result;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v14 = a4;
  v4 = a2;
  v5 = a1;
  if ( *(uint *)(a2 + 36) != 3 )
    Function_20d407c((int)"message->numParams == 3", (int)"chatHandlers.c", (int)"ciErrBadChanMaskHandler");
  result = *(int **)(v4 + 36);
  if ( result == (int *)3 )
  {
    v7 = *(uint *)(*(uint *)(v4 + 32) + 4);
    v13 = 0;
    v11 = 1;
    v12 = v7;
    result = (int *)Function_224d5a8(v5, 1, &v11);
    if ( result )
    {
      v8 = 0;
      v9 = 8;
      v10 = v7;
      result = Function_224d908(v5, result, (int)&v8, 8);
    }
  }
  return result;
}

//----- (022531F0) --------------------------------------------------------
void Function_22531f0()
{
  ;
}

//----- (022531F4) --------------------------------------------------------
int __fastcall Function_22531f4(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatHandlers.c", (int)"ciErrErroneusNicknameHandler");
  result = *(uint *)(v1 + 4);
  if ( result )
    result = Function_2255a08(v1, 2, v1 + 876);
  return result;
}

//----- (02253258) --------------------------------------------------------
int __fastcall Function_2253258(uint *a1)
{
  uint *v1;
  int result;
  int (__fastcall *v3)(uint *);
  int v4;

  v1 = a1;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatHandlers.c", (int)"ciErrLoginFailedHandler");
  result = v1[1];
  if ( result )
  {
    v1[1] = 0;
    v3 = (int (__fastcall *)(uint *))v1[5];
    if ( v3 )
    {
      v4 = v1[6];
      result = v3(v1);
    }
  }
  return result;
}

//----- (022532BC) --------------------------------------------------------
int __fastcall Function_22532bc(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatHandlers.c", (int)"ciErrNoUniqueNickHandler");
  result = *(uint *)(v1 + 4);
  if ( result )
    result = Function_2255a08(v1, 4, &byte_225A608);
  return result;
}

//----- (02253324) --------------------------------------------------------
int __fastcall Function_2253324(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatHandlers.c", (int)"ciErrUniqueNickExpiredHandler");
  result = *(uint *)(v1 + 4);
  if ( result )
    result = Function_2255a08(v1, 3, &byte_225A608);
  return result;
}

//----- (0225338C) --------------------------------------------------------
void __fastcall Function_225338c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  char *v7;
  int v8;
  int v9;
  char *v10;
  int i;
  int v12;
  int j;

  v4 = a1;
  v5 = a2;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatHandlers.c", (int)"ciErrRegisterNickFailedHandler");
  if ( *(uint *)(v5 + 36) != 4 )
    Function_20d407c((int)"message->numParams == 4", (int)"chatHandlers.c", (int)"ciErrRegisterNickFailedHandler");
  if ( *(uint *)(v5 + 36) == 4 )
  {
    Function_20dae0c(*(uint *)(*(uint *)(v5 + 32) + 4), a2, a3, a4);
    v7 = *(char **)(*(uint *)(v5 + 32) + 8);
    v8 = v6;
    if ( *(uint *)(v4 + 4) )
    {
      v9 = ((int (__fastcall *)(int))dword_21D7880[0])(4 * v6);
      if ( v9 )
      {
        v10 = Function_20d8f58(v7, "\\");
        for ( i = 0; i < v8; ++i )
        {
          if ( !v10 )
            break;
          v12 = ((int (*)(void))dword_21EA8AC[0])();
          *(uint *)(v9 + 4 * i) = v12;
          if ( !v12 )
            break;
          v10 = Function_20d8f58(0, "\\");
        }
        Function_2255a08(v4, 5, v4 + 1296);
        for ( j = 0; j < i; ++j )
          ((void (__fastcall *)(uint))dword_21D78B0[0])(*(uint *)(v9 + 4 * j));
        ((void (__fastcall *)(int))dword_21D78B0[0])(v9);
      }
    }
  }
}

//----- (022534B8) --------------------------------------------------------
int __fastcall Function_22534b8(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  void (__fastcall *v5)(int, int);

  v2 = a2;
  v3 = a1;
  if ( !a2 )
    Function_20d407c((int)"message != NULL", (int)"chatMain.c", (int)"ciProcessServerMessage");
  v4 = 0;
  while ( Function_20df9b0(*(uchar **)(v2 + 20), (uchar *)(&off_225A310)[2 * v4]) )
  {
    if ( ++v4 >= 54 )
      return 0;
  }
  v5 = (void (__fastcall *)(int, int))*(&off_225A314 + 2 * v4);
  if ( v5 )
    v5(v3, v2);
  return 1;
}

//----- (0225355C) --------------------------------------------------------
BOOL __fastcall Function_225355c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  return Function_224e52c(a1, a2) || Function_224b3f8(v2, v3);
}

//----- (02253598) --------------------------------------------------------
int __fastcall Function_2253598(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int result;
  int (__fastcall *v5)(uint *);
  int v6;
  int v7;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatMain.c", (int)"ciHandleDisconnect");
  result = v2[2];
  if ( !result )
  {
    *v2 = 0;
    v2[1] = 0;
    v2[2] = 1;
    result = v2[1];
    if ( result )
    {
      v5 = (int (__fastcall *)(uint *))v2[5];
      if ( v5 )
      {
        v6 = v2[6];
        result = v5(v2);
      }
    }
    else
    {
      result = v2[511];
      if ( result )
      {
        v7 = v3;
        result = Function_2248c2c(v2, 1, v2[511], &v7, v2[514], 0, 0, 4, v3);
      }
    }
  }
  return result;
}

//----- (0225366C) --------------------------------------------------------
int __fastcall Function_225366c(uint *a1, int a2)
{
  uint *v2;
  int v3;
  uint *i;
  int v5;
  int v6;
  int v8;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatMain.c", (int)"ciThink");
  if ( v2[8] == 1 )
  {
    Function_225699c(v2 + 7);
    for ( i = (uint *)Function_2257a58(v2 + 7); i; i = (uint *)Function_2257a58(v2 + 7) )
    {
      if ( v2[510] )
        Function_2248c2c(v2, 0, v2[510], &v8, v2[514], 0, 0, 4, *i);
      Function_22534b8((int)v2, (int)i);
    }
    if ( v2[8] == 2 )
      Function_2253598(v2, (int)"Disconnected");
  }
  Function_224e474((int)v2);
  return Function_224b09c((int)v2, v3, v5, v6);
}

//----- (0225375C) --------------------------------------------------------
int __fastcall Function_225375c(int a1)
{
  int v1;
  int v2;
  int v3;
  const char *v5;
  bool v6;
  int v7;

  v1 = a1;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatMain.c", (int)"ciSendNick");
  v2 = *(uint *)(v1 + 2216);
  if ( v2 )
  {
    v6 = v2 == 2;
    if ( v2 == 2 )
      v6 = *(uint *)(v1 + 1196) == 0;
    if ( v6 )
    {
      v7 = Function_2255988(v1 + 1264);
      if ( v7 )
        return Function_2255a08(v1, v7, v1 + 1264);
      v5 = (const char *)(v1 + 1264);
    }
    else
    {
      v5 = "*";
    }
  }
  else
  {
    v3 = Function_2255988(v1 + 876);
    if ( v3 )
      return Function_2255a08(v1, v3, v1 + 876);
    v5 = (const char *)(v1 + 876);
  }
  return Function_2256e70(v1 + 28, "NICK %s", v5);
}

//----- (02253830) --------------------------------------------------------
int __fastcall Function_2253830(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatMain.c", (int)"ciSendUser");
  return Function_2256e70(v1 + 28, "USER %s %s %s :%s", v1 + 1068, "127.0.0.1", v1 + 1908, v1 + 940);
}

//----- (0225389C) --------------------------------------------------------
int __fastcall Function_225389c(int a1)
{
  int v1;

  v1 = a1;
  Function_2253830(a1);
  return Function_225375c(v1);
}

//----- (022538B4) --------------------------------------------------------
int __fastcall Function_22538b4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v6;
  int v7;
  char v8;
  int v9;

  v9 = a4;
  v4 = a1;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatMain.c", (int)"ciSendLogin");
  if ( *(uint *)(v4 + 2216) == 3 )
    return Function_2256e70(v4 + 28, "LOGINPREAUTH %s %s", v4 + 1392, v4 + 1648);
  v6 = strlen((char *)(v4 + 1360));
  ((void (__fastcall *)(int, int, char *))dword_21EA714[56])(v4 + 1360, v6, &v8);
  v7 = *(uint *)(v4 + 2216);
  if ( v7 == 1 )
    return Function_2256e70(v4 + 28, "LOGIN %d %s %s", *(uint *)(v4 + 1196), v4 + 1296, &v8);
  if ( v7 == 2 )
    return Function_2256e70(v4 + 28, "LOGIN %d * %s :%s@%s", *(uint *)(v4 + 1196), &v8, v4 + 1264, v4 + 1200);
  return Function_20d407c((int)"0", (int)"chatMain.c", (int)"ciSendLogin");
}

//----- (022539B8) --------------------------------------------------------
int __fastcall Function_22539b8(int a1, char *a2, int a3, char *a4, char *a5, char *a6, int a7, char *a8, char *a9, char *a10, char *a11, char *a12, char *a13, uchar *a14, char *a15, uint *a16, int a17, int a18, uint a19, int a20, int a21)
{
  int v21;
  char *v22;
  uint v23;
  bool v24;
  int result;
  bool v26;
  bool v27;
  bool v28;
  bool v29;
  bool v30;
  bool v31;
  bool v32;
  bool v33;
  bool v34;
  bool v35;
  bool v36;
  bool v37;
  bool v38;
  bool v39;
  bool v40;
  bool v41;
  bool v42;
  bool v43;
  int *v44;
  int v45;
  uint *v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  bool v54;
  char *v55;
  int v56;
  char *v57;

  v21 = a1;
  v55 = a2;
  v56 = a3;
  v22 = a4;
  v57 = &byte_225AB2C;
  if ( !a2 )
    Function_20d407c((int)"serverAddress != NULL", (int)"chatMain.c", (int)"chatConnectDoit");
  if ( !a16 )
    Function_20d407c((int)"callbacks != NULL", (int)"chatMain.c", (int)"chatConnectDoit");
  v23 = a19;
  if ( !a19 )
    v23 = Function_20d407c((int)"connectCallback != NULL", (int)"chatMain.c", (int)"chatConnectDoit");
  if ( v21 )
  {
    switch ( v21 )
    {
      case 1:
        if ( a7 <= 0 )
          Function_20d407c((int)"namespaceID > 0", (int)"chatMain.c", (int)"chatConnectDoit");
        v23 = a7;
        if ( a7 <= 0 )
          return 0;
        v26 = a10 == 0;
        if ( a10 )
        {
          v23 = *a10;
          v26 = v23 == 0;
        }
        if ( v26 )
          v23 = Function_20d407c((int)"uniquenick && uniquenick[0]", (int)"chatMain.c", (int)"chatConnectDoit");
        v27 = a10 == 0;
        if ( a10 )
        {
          v23 = *a10;
          v27 = v23 == 0;
        }
        if ( v27 )
          return 0;
        v28 = a11 == 0;
        if ( a11 )
        {
          v23 = *a11;
          v28 = v23 == 0;
        }
        if ( v28 )
          v23 = Function_20d407c((int)"password && password[0]", (int)"chatMain.c", (int)"chatConnectDoit");
        v29 = a11 == 0;
        if ( a11 )
        {
          v23 = *a11;
          v29 = v23 == 0;
        }
        if ( v29 )
          return 0;
        v57 = a10;
        break;
      case 2:
        if ( a7 < 0 )
          Function_20d407c((int)"namespaceID >= 0", (int)"chatMain.c", (int)"chatConnectDoit");
        if ( a7 < 0 )
          return 0;
        v30 = a8 == 0;
        if ( a8 )
          v30 = *a8 == 0;
        if ( v30 )
          Function_20d407c((int)"email && email[0]", (int)"chatMain.c", (int)"chatConnectDoit");
        v23 = (uint)a8;
        v31 = a8 == 0;
        if ( a8 )
        {
          v23 = *a8;
          v31 = v23 == 0;
        }
        if ( v31 )
          return 0;
        v32 = a9 == 0;
        if ( a9 )
        {
          v23 = *a9;
          v32 = v23 == 0;
        }
        if ( v32 )
          v23 = Function_20d407c((int)"profilenick && profilenick[0]", (int)"chatMain.c", (int)"chatConnectDoit");
        v33 = a9 == 0;
        if ( a9 )
        {
          v23 = *a9;
          v33 = v23 == 0;
        }
        if ( v33 )
          return 0;
        v34 = a11 == 0;
        if ( a11 )
        {
          v23 = *a11;
          v34 = v23 == 0;
        }
        if ( v34 )
          v23 = Function_20d407c((int)"password && password[0]", (int)"chatMain.c", (int)"chatConnectDoit");
        v35 = a11 == 0;
        if ( a11 )
        {
          v23 = *a11;
          v35 = v23 == 0;
        }
        if ( v35 )
          return 0;
        v57 = a9;
        break;
      case 3:
        v36 = a12 == 0;
        if ( a12 )
          v36 = *a12 == 0;
        if ( v36 )
          Function_20d407c((int)"authtoken && authtoken[0]", (int)"chatMain.c", (int)"chatConnectDoit");
        v37 = a12 == 0;
        if ( a12 )
          v37 = *a12 == 0;
        if ( v37 )
          return 0;
        v38 = a13 == 0;
        if ( a13 )
          v38 = *a13 == 0;
        if ( v38 )
          Function_20d407c((int)"partnerchallenge && partnerchallenge[0]", (int)"chatMain.c", (int)"chatConnectDoit");
        v39 = a13 == 0;
        if ( a13 )
          v39 = *a13 == 0;
        if ( v39 )
          return 0;
        v23 = (uint)"preauth";
        v57 = "preauth";
        break;
    }
  }
  else
  {
    if ( !v22 )
      Function_20d407c((int)"nick != NULL", (int)"chatMain.c", (int)"chatConnectDoit");
    if ( !*v22 )
      Function_20d407c((int)"nick[0] != '\\0'", (int)"chatMain.c", (int)"chatConnectDoit");
    v23 = strlen(v22);
    if ( v23 >= 0x40 )
      v23 = Function_20d407c((int)"strlen(nick) < MAX_NICK", (int)"chatMain.c", (int)"chatConnectDoit");
    v24 = v22 == 0;
    if ( v22 )
    {
      v23 = *v22;
      v24 = v23 == 0;
    }
    if ( v24 )
      return 0;
    v57 = v22;
  }
  if ( !v21 )
    goto LABEL_160;
  v40 = a14 == 0;
  if ( a14 )
  {
    v23 = (char)*a14;
    v40 = v23 == 0;
  }
  if ( v40 )
    v23 = Function_20d407c((int)"gamename && gamename[0]", (int)"chatMain.c", (int)"chatConnectDoit");
  v41 = a14 == 0;
  if ( a14 )
  {
    v23 = (char)*a14;
    v41 = v23 == 0;
  }
  if ( v41 )
    return 0;
  v42 = a15 == 0;
  if ( a15 )
  {
    v23 = *a15;
    v42 = v23 == 0;
  }
  if ( v42 )
    v23 = Function_20d407c((int)"secretKey && secretKey[0]", (int)"chatMain.c", (int)"chatConnectDoit");
  v43 = a15 == 0;
  if ( a15 )
  {
    v23 = *a15;
    v43 = v23 == 0;
  }
  if ( v43 )
    return 0;
LABEL_160:
  ((void (__fastcall *)(uint))dword_21EA8A4)(v23);
  v44 = (int *)((int (__fastcall *)(int))dword_21D7880[0])(2228);
  v45 = (int)v44;
  if ( !v44 )
    return 0;
  Call_FillMemWithValue(v44, 0, 0x8B4u);
  *(uint *)(v45 + 2216) = v21;
  if ( v22 )
  {
    strncpy((uchar *)(v45 + 876), v22, 64);
    *(uchar *)(v45 + 939) = 0;
  }
  if ( a5 )
  {
    strncpy((uchar *)(v45 + 1068), a5, 128);
    *(uchar *)(v45 + 1195) = 0;
  }
  if ( a6 )
  {
    strncpy((uchar *)(v45 + 940), a6, 128);
    *(uchar *)(v45 + 1067) = 0;
  }
  *(uint *)(v45 + 1196) = a7;
  if ( a8 )
  {
    strncpy((uchar *)(v45 + 1200), a8, 64);
    *(uchar *)(v45 + 1263) = 0;
  }
  if ( a9 )
  {
    strncpy((uchar *)(v45 + 1264), a9, 32);
    *(uchar *)(v45 + 1295) = 0;
  }
  if ( a10 )
  {
    strncpy((uchar *)(v45 + 1296), a10, 64);
    *(uchar *)(v45 + 1359) = 0;
  }
  if ( a11 )
  {
    strncpy((uchar *)(v45 + 1360), a11, 32);
    *(uchar *)(v45 + 1391) = 0;
  }
  if ( a12 )
  {
    strncpy((uchar *)(v45 + 1392), a12, 256);
    *(uchar *)(v45 + 1647) = 0;
  }
  if ( a13 )
  {
    strncpy((uchar *)(v45 + 1648), a13, 256);
    *(uchar *)(v45 + 1903) = 0;
  }
  strncpy((uchar *)(v45 + 1908), v55, 128);
  *(uchar *)(v45 + 2035) = 0;
  *(uint *)(v45 + 2036) = v56;
  v46 = (uint *)(v45 + 2040);
  v47 = a16[1];
  v48 = a16[2];
  v49 = a16[3];
  *v46 = *a16;
  v46[1] = v47;
  v46[2] = v48;
  v46[3] = v49;
  *(uint *)(v45 + 2056) = a16[4];
  *(uint *)(v45 + 2076) = 1;
  *(uint *)(v45 + 4) = 1;
  *(uint *)(v45 + 2084) = 0;
  if ( Function_224b864(v45) )
  {
    if ( Function_2248a98(v45) )
    {
      if ( Function_2255dec(v45 + 28, v57) )
      {
        if ( Function_2255e68(v45 + 28, v55, v56) )
        {
          *(uint *)(v45 + 12) = a17;
          *(uint *)(v45 + 16) = a18;
          *(uint *)(v45 + 20) = a19;
          *(uint *)(v45 + 24) = a20;
          v54 = a14 == 0;
          if ( a14 )
            v54 = *a14 == 0;
          if ( !v54 )
          {
            v54 = a15 == 0;
            if ( a15 )
              v54 = *a15 == 0;
          }
          if ( v54 )
          {
            if ( *(uint *)(v45 + 16) )
              Function_2256bb0(v45 + 28, "USRIP");
            else
              Function_225389c(v45);
          }
          else
          {
            strncpy((uchar *)(v45 + 2088), a15, 128);
            *(uchar *)(v45 + 2215) = 0;
            Function_2256e70(v45 + 28, "CRYPT des %d %s", 1, a14);
          }
          if ( a21 )
          {
            do
            {
              Function_225366c((uint *)v45, 0);
              ((void (__fastcall *)(int))dword_21EA898[0])(10);
            }
            while ( *(uint *)(v45 + 4) );
            if ( !*(uint *)v45 )
            {
              Function_22543dc(v45);
              v45 = 0;
            }
          }
          result = v45;
        }
        else
        {
          Function_22561b0(v45 + 28);
          Function_2248ac8(v45);
          Function_224b8ec(v45);
          v53 = ((int (__fastcall *)(int))dword_21D78B0[0])(v45);
          ((void (__fastcall *)(int))dword_21EA8A8)(v53);
          result = 0;
        }
      }
      else
      {
        Function_2248ac8(v45);
        Function_224b8ec(v45);
        v52 = ((int (__fastcall *)(int))dword_21D78B0[0])(v45);
        ((void (__fastcall *)(int))dword_21EA8A8)(v52);
        result = 0;
      }
    }
    else
    {
      Function_224b8ec(v45);
      v51 = ((int (__fastcall *)(int))dword_21D78B0[0])(v45);
      ((void (__fastcall *)(int))dword_21EA8A8)(v51);
      result = 0;
    }
  }
  else
  {
    v50 = ((int (__fastcall *)(int))dword_21D78B0[0])(v45);
    ((void (__fastcall *)(int))dword_21EA8A8)(v50);
    result = 0;
  }
  return result;
}

//----- (022541CC) --------------------------------------------------------
int __fastcall Function_22541cc(char *a1, int a2, char *a3, char *a4, uchar *a5, char *a6, uint *a7, int a8, int a9, uint a10, int a11, int a12)
{
  return Function_22539b8(0, a1, a2, a3, 0, a4, 0, 0, 0, 0, 0, 0, 0, a5, a6, a7, a8, a9, a10, a11, a12);
}

//----- (02254258) --------------------------------------------------------
int __fastcall Function_2254258(int a1, char *a2)
{
  int v2;
  char *v3;
  int result;
  int (__fastcall *v5)(int);
  int v6;
  int v7;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatMain.c", (int)"chatRetryWithNickA");
  result = *(uint *)v2;
  if ( !*(uint *)v2 )
  {
    if ( v3 )
    {
      strncpy((uchar *)(v2 + 876), v3, 64);
      *(uchar *)(v2 + 939) = 0;
      v7 = Function_2255988(v3);
      if ( v7 )
        result = Function_2255a08(v2, v7, v3);
      else
        result = Function_2256e70(v2 + 28, "NICK :%s", v3);
    }
    else
    {
      *(uint *)(v2 + 4) = 0;
      v5 = *(int (__fastcall **)(int))(v2 + 20);
      if ( v5 )
      {
        v6 = *(uint *)(v2 + 24);
        result = v5(v2);
      }
    }
  }
  return result;
}

//----- (02254320) --------------------------------------------------------
int __fastcall Function_2254320(int a1, int a2, char *a3, char *a4)
{
  int v4;
  int v5;
  char *v6;
  char *v7;
  int result;
  int (__fastcall *v9)(int);
  int v10;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatMain.c", (int)"chatRegisterUniqueNickA");
  result = *(uint *)v4;
  if ( !*(uint *)v4 )
  {
    if ( v6 )
    {
      if ( !v7 )
        v7 = &byte_225AB2C;
      Function_2256e70(v4 + 28, "REGISTERNICK %d %s %s", v5, v6, v7);
      strncpy((uchar *)(v4 + 1296), v6, 64);
      result = 0;
      *(uchar *)(v4 + 1359) = 0;
    }
    else
    {
      *(uint *)(v4 + 4) = 0;
      v9 = *(int (__fastcall **)(int))(v4 + 20);
      if ( v9 )
      {
        v10 = *(uint *)(v4 + 24);
        result = v9(v4);
      }
    }
  }
  return result;
}

//----- (022543DC) --------------------------------------------------------
int __fastcall Function_22543dc(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  void (__fastcall *v5)(uint *, char *, uint);
  int v6;

  v4 = a1;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatMain.c", (int)"chatDisconnect");
  Function_224e5b0(v4, a2, a3, a4);
  if ( !v4[2] )
  {
    v5 = (void (__fastcall *)(uint *, char *, uint))v4[511];
    if ( v5 )
      v5(v4, &byte_225AB2C, v4[514]);
  }
  if ( *v4 )
  {
    Function_2256bb0(v4 + 7, "QUIT :Later!");
    Function_225699c(v4 + 7);
  }
  Function_224b8ec((int)v4);
  Function_2248ac8((int)v4);
  Function_22561b0(v4 + 7);
  v6 = ((int (__fastcall *)(uint *))dword_21D78B0[0])(v4);
  return ((int (__fastcall *)(int))dword_21EA8A8)(v6);
}

//----- (0225448C) --------------------------------------------------------
int __fastcall Function_225448c(uint *a1)
{
  return Function_225366c(a1, 0);
}

//----- (0225449C) --------------------------------------------------------
int __fastcall Function_225449c(int result, char *a2, int a3, int a4, int a5, int a6)
{
  int *v6;
  char *v7;
  int v8;
  int v9;
  bool v10;
  bool v11;
  int v12;

  v6 = (int *)result;
  v7 = a2;
  v8 = a3;
  v9 = a4;
  if ( !result )
    result = Function_20d407c((int)"chat != NULL", (int)"chatMain.c", (int)"chatEnumChannelsA");
  v10 = v6 == 0;
  if ( v6 )
  {
    result = *v6;
    v10 = *v6 == 0;
  }
  if ( !v10 )
  {
    v11 = v9 == 0;
    if ( !v9 )
      v11 = v8 == 0;
    if ( v11 )
      Function_20d407c(
        (int)"(callbackAll != NULL) || (callbackEach != NULL)",
        (int)"chatMain.c",
        (int)"chatEnumChannelsA");
    if ( !v7 )
      v7 = &byte_225AB2C;
    Function_2256e70(v6 + 7, "LIST %s", v7);
    result = Function_224e6ec((int)v6, v8, v9, a5);
    v12 = result;
    if ( a6 )
    {
      do
      {
        Function_225366c(v6, v12);
        ((void (__fastcall *)(int))dword_21EA898[0])(10);
        result = Function_225355c((int)v6, v12);
      }
      while ( result );
    }
  }
  return result;
}

//----- (02254584) --------------------------------------------------------
int __fastcall Function_2254584(int result, char *a2, char *a3, uint *a4, int a5, int a6, int a7)
{
  int *v7;
  char *v8;
  char *v9;
  uint *v10;
  bool v11;
  int v12;

  v7 = (int *)result;
  v8 = a2;
  v9 = a3;
  v10 = a4;
  if ( !result )
    result = Function_20d407c((int)"chat != NULL", (int)"chatMain.c", (int)"chatEnterChannelA");
  v11 = v7 == 0;
  if ( v7 )
  {
    result = *v7;
    v11 = *v7 == 0;
  }
  if ( !v11 )
  {
    if ( !v8 )
      Function_20d407c((int)"channel != NULL", (int)"chatMain.c", (int)"chatEnterChannelA");
    if ( !*v8 )
      Function_20d407c((int)"channel[0] != '\\0'", (int)"chatMain.c", (int)"chatEnterChannelA");
    if ( !v10 )
      Function_20d407c((int)"callbacks != NULL", (int)"chatMain.c", (int)"chatEnterChannelA");
    if ( !v9 )
      v9 = &byte_225AB2C;
    Function_2256e70(v7 + 7, "JOIN %s %s", v8, v9);
    v12 = Function_224e770((int)v7, (int)v8, a5, a6, v10, v9);
    Function_224b940((int)v7, v8);
    for ( result = a7; result; result = Function_225355c((int)v7, v12) )
    {
      Function_225366c(v7, v12);
      ((void (__fastcall *)(int))dword_21EA898[0])(10);
    }
  }
  return result;
}

//----- (022546D4) --------------------------------------------------------
int __fastcall Function_22546d4(int result, char *a2, char *a3)
{
  int *v3;
  char *v4;
  char *v5;
  bool v6;
  int v7;
  int v8;

  v3 = (int *)result;
  v4 = a2;
  v5 = a3;
  if ( !result )
    result = Function_20d407c((int)"chat != NULL", (int)"chatMain.c", (int)"chatLeaveChannelA");
  v6 = v3 == 0;
  if ( v3 )
  {
    result = *v3;
    v6 = *v3 == 0;
  }
  if ( !v6 )
  {
    if ( !v4 )
      Function_20d407c((int)"channel != NULL", (int)"chatMain.c", (int)"chatLeaveChannelA");
    if ( !*v4 )
      Function_20d407c((int)"channel[0] != '\\0'", (int)"chatMain.c", (int)"chatLeaveChannelA");
    if ( !v5 )
      v5 = &byte_225AB2C;
    Function_2256e70(v3 + 7, "PART %s :%s", v4, v5);
    result = Function_224bc80((int)v3, v4, v7, v8);
  }
  return result;
}

//----- (02254798) --------------------------------------------------------
int __fastcall Function_2254798(int result, char *a2, char *a3, int a4)
{
  int *v4;
  char *v5;
  char *v6;
  uint v7;
  bool v8;
  bool v9;
  char *v10;
  uint *v11;
  char *v12;
  uint v13;
  int v14;

  v14 = a4;
  v4 = (int *)result;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( !result )
    result = Function_20d407c((int)"chat != NULL", (int)"chatMain.c", (int)"chatSendChannelMessageA");
  v8 = v4 == 0;
  if ( v4 )
  {
    result = *v4;
    v8 = *v4 == 0;
  }
  if ( !v8 )
  {
    if ( !v5 )
      Function_20d407c((int)"channel != NULL", (int)"chatMain.c", (int)"chatSendChannelMessageA");
    result = *v5;
    if ( !*v5 )
      result = Function_20d407c((int)"channel[0] != '\\0'", (int)"chatMain.c", (int)"chatSendChannelMessageA");
    if ( v7 > 4 )
      result = Function_20d407c(
                 (int)"(type == CHAT_MESSAGE) || (type == CHAT_ACTION) || (type == CHAT_NOTICE) || (type == CHAT_UTM) || "
                      "(type == CHAT_ATM)",
                 (int)"chatMain.c",
                 (int)"chatSendChannelMessageA");
    v9 = v6 == 0;
    if ( v6 )
    {
      result = *v6;
      v9 = result == 0;
    }
    if ( !v9 )
    {
      if ( v7 )
      {
        switch ( v7 )
        {
          case 1u:
            Function_2256e70(v4 + 7, (const char *)dword_225AE60, v5, v6);
            break;
          case 2u:
            Function_2256e70(v4 + 7, "NOTICE %s :%s", v5, v6);
            break;
          case 3u:
            Function_2256e70(v4 + 7, "UTM %s :%s", v5, v6);
            break;
          case 4u:
            Function_2256e70(v4 + 7, "ATM %s :%s", v5, v6);
            break;
          default:
            return result;
        }
      }
      else
      {
        Function_2256e70(v4 + 7, "PRIVMSG %s :%s", v5, v6);
      }
      result = Function_224bd94((int)v4, v5);
      if ( result )
      {
        v11 = v4 + 219;
        v10 = v5;
        v12 = v6;
        v13 = v7;
        result = Function_2248c2c(v4, 4, *(uint *)result, &v10, *(uint *)(result + 44), 0, v5, 16, v5);
      }
    }
  }
  return result;
}

//----- (0225497C) --------------------------------------------------------
int __fastcall Function_225497c(int result, uchar *a2, uint *a3)
{
  int *v3;
  uchar *v4;
  uint *v5;
  bool v6;
  const char *v7;
  char *v8;
  int v9;
  char v10;
  char v11;
  int v12;
  char v13[2];
  char v14;
  char v15;
  char v16;
  char v17;
  char v18;
  char v19;
  char v20;

  v3 = (int *)result;
  v4 = a2;
  v5 = a3;
  if ( !result )
    result = Function_20d407c((int)"chat != NULL", (int)"chatMain.c", (int)"chatSetChannelModeA");
  v6 = v3 == 0;
  if ( v3 )
  {
    result = *v3;
    v6 = *v3 == 0;
  }
  if ( !v6 )
  {
    if ( !v4 )
      Function_20d407c((int)"channel != NULL", (int)"chatMain.c", (int)"chatSetChannelModeA");
    if ( !*v4 )
      Function_20d407c((int)"channel[0] != '\\0'", (int)"chatMain.c", (int)"chatSetChannelModeA");
    if ( !v5 )
      Function_20d407c((int)"mode != NULL", (int)"chatMain.c", (int)"chatSetChannelModeA");
    v7 = "XiXpXsXmXnXtXlXe";
    v8 = v13;
    v9 = 8;
    do
    {
      v10 = *v7;
      v11 = v7[1];
      v7 += 2;
      *v8 = v10;
      v8[1] = v11;
      v8 += 2;
      --v9;
    }
    while ( v9 );
    *v8 = *v7;
    if ( *v5 )
      v13[0] = 43;
    else
      v13[0] = 45;
    if ( v5[1] )
      v14 = 43;
    else
      v14 = 45;
    if ( v5[2] )
      v15 = 43;
    else
      v15 = 45;
    if ( v5[3] )
      v16 = 43;
    else
      v16 = 45;
    if ( v5[4] )
      v17 = 43;
    else
      v17 = 45;
    if ( v5[5] )
      v18 = 43;
    else
      v18 = 45;
    if ( v5[7] <= 0 )
      v19 = 45;
    else
      v19 = 43;
    if ( v5[6] )
      v20 = 43;
    else
      v20 = 45;
    if ( v5[7] > 0 )
    {
      v12 = strlen(v13);
      Function_20d7510((int)&v13[v12], " %d");
    }
    result = Function_2256e70(
               v3 + 7,
               "MODE %s %s",
               v4,
               v13,
               *(uint *)v13,
               *(uint *)&v15,
               *(uint *)&v17,
               *(uint *)&v19);
  }
  return result;
}

//----- (02254B7C) --------------------------------------------------------
int __fastcall Function_2254b7c(int result, char *a2, int a3, int a4, int a5)
{
  int *v5;
  char *v6;
  int v7;
  int v8;
  bool v9;
  int v10;
  int v11;
  int v12;
  char *v13;
  char *v14;
  char v15;
  int v16;

  v16 = a4;
  v5 = (int *)result;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  if ( !result )
    result = Function_20d407c((int)"chat != NULL", (int)"chatMain.c", (int)"chatGetChannelModeA");
  v9 = v5 == 0;
  if ( v5 )
  {
    result = *v5;
    v9 = *v5 == 0;
  }
  if ( !v9 )
  {
    if ( !v6 )
      Function_20d407c((int)"channel != NULL", (int)"chatMain.c", (int)"chatGetChannelModeA");
    if ( !*v6 )
      Function_20d407c((int)"channel[0] != '\\0'", (int)"chatMain.c", (int)"chatGetChannelModeA");
    if ( !v7 )
      Function_20d407c((int)"callback != NULL", (int)"chatMain.c", (int)"chatGetChannelModeA");
    if ( Function_224c134((int)v5, v6, a3, a4) && Function_224c184((int)v5, v6, &v15) )
    {
      v14 = &v15;
      v13 = v6;
      v10 = Function_224e4e0((int)v5);
      Function_2248c2c(v5, 17, v7, &v12, v8, v10, 0, 12, 1);
      for ( result = a5; result; result = Function_225355c((int)v5, v10) )
      {
        Function_225366c(v5, v10);
        ((void (__fastcall *)(int))dword_21EA898[0])(10);
      }
    }
    else
    {
      Function_2256e70(v5 + 7, "MODE %s", v6);
      result = Function_224e8f4((int)v5, (int)v6, v7, v8);
      v11 = result;
      if ( a5 )
      {
        do
        {
          Function_225366c(v5, v11);
          ((void (__fastcall *)(int))dword_21EA898[0])(10);
          result = Function_225355c((int)v5, v11);
        }
        while ( result );
      }
    }
  }
  return result;
}

//----- (02254D68) --------------------------------------------------------
int __fastcall Function_2254d68(int result, uchar *a2, int a3)
{
  int *v3;
  uchar *v4;
  int v5;
  bool v6;

  v3 = (int *)result;
  v4 = a2;
  v5 = a3;
  if ( !result )
    result = Function_20d407c((int)"chat != NULL", (int)"chatMain.c", (int)"chatSetChannelLimitA");
  v6 = v3 == 0;
  if ( v3 )
  {
    result = *v3;
    v6 = *v3 == 0;
  }
  if ( !v6 )
  {
    if ( !v4 )
      Function_20d407c((int)"channel != NULL", (int)"chatMain.c", (int)"chatSetChannelLimitA");
    if ( !*v4 )
      Function_20d407c((int)"channel[0] != '\\0'", (int)"chatMain.c", (int)"chatSetChannelLimitA");
    if ( v5 < 0 )
      Function_20d407c((int)"limit >= 0", (int)"chatMain.c", (int)"chatSetChannelLimitA");
    if ( v5 )
      result = Function_2256e70(v3 + 7, "MODE %s +l %d", v4, v5);
    else
      result = Function_2256e70(v3 + 7, "MODE %s -l", v4);
  }
  return result;
}

//----- (02254E58) --------------------------------------------------------
int __fastcall Function_2254e58(uint *a1, char *a2, int a3, int a4)
{
  uint *v4;
  char *v5;
  bool v7;

  v4 = a1;
  v5 = a2;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatMain.c", (int)"chatGetChannelNumUsersA");
  if ( !*v4 )
    return -1;
  if ( !v5 )
    Function_20d407c((int)"channel != NULL", (int)"chatMain.c", (int)"chatGetChannelNumUsersA");
  if ( !*v5 )
    Function_20d407c((int)"channel[0] != '\\0'", (int)"chatMain.c", (int)"chatGetChannelNumUsersA");
  v7 = v5 == 0;
  if ( v5 )
    v7 = *v5 == 0;
  if ( v7 )
    return -1;
  if ( Function_224c134((int)v4, v5, a3, a4) )
    return Function_224c6b8((int)v4, v5);
  return -1;
}

//----- (02254F20) --------------------------------------------------------
BOOL __fastcall Function_2254f20(uint *a1, char *a2, int a3, int a4)
{
  uint *v4;
  char *v5;
  BOOL result;
  bool v7;

  v4 = a1;
  v5 = a2;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatMain.c", (int)"chatInChannelA");
  if ( !*v4 )
    return 0;
  if ( !v5 )
    Function_20d407c((int)"channel != NULL", (int)"chatMain.c", (int)"chatInChannelA");
  if ( !*v5 )
    Function_20d407c((int)"channel[0] != '\\0'", (int)"chatMain.c", (int)"chatInChannelA");
  v7 = v5 == 0;
  if ( v5 )
    v7 = *v5 == 0;
  if ( v7 )
    result = 0;
  else
    result = Function_224c134((int)v4, v5, a3, a4);
  return result;
}

//----- (02254FD0) --------------------------------------------------------
int __fastcall Function_2254fd0(int a1, uchar *a2, int a3, int a4, int a5, uint *a6)
{
  int v6;
  uchar *v7;
  int v8;
  int v9;

  v6 = a1;
  v7 = a2;
  v8 = a3;
  v9 = a4;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatMain.c", (int)"ciEnumUsersCallback");
  if ( !v7 )
    Function_20d407c((int)"channel != NULL", (int)"chatMain.c", (int)"ciEnumUsersCallback");
  if ( !*v7 )
    Function_20d407c((int)"channel[0] != '\\0'", (int)"chatMain.c", (int)"ciEnumUsersCallback");
  if ( v8 < 0 )
    Function_20d407c((int)"numUsers >= 0", (int)"chatMain.c", (int)"ciEnumUsersCallback");
  if ( !a6 )
    Function_20d407c((int)"param != NULL", (int)"chatMain.c", (int)"ciEnumUsersCallback");
  if ( !*a6 )
    Function_20d407c((int)"data->callback != NULL", (int)"chatMain.c", (int)"ciEnumUsersCallback");
  return ((int (__fastcall *)(int, int, uchar *, int, int, int, uint))*a6)(v6, 1, v7, v8, v9, a5, a6[1]);
}

//----- (02255104) --------------------------------------------------------
int __fastcall Function_2255104(int result, char *a2, int a3, int a4, int a5)
{
  int *v5;
  char *v6;
  int v7;
  int v8;
  bool v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v13 = a4;
  v5 = (int *)result;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  if ( !result )
    result = Function_20d407c((int)"chat != NULL", (int)"chatMain.c", (int)"chatEnumUsersA");
  v9 = v5 == 0;
  if ( v5 )
  {
    result = *v5;
    v9 = *v5 == 0;
  }
  if ( !v9 )
  {
    if ( !v7 )
      Function_20d407c((int)"callback != NULL", (int)"chatMain.c", (int)"chatEnumUsersA");
    if ( !v6 )
      v6 = &byte_225AB2C;
    if ( *v6 && Function_224c134((int)v5, v6, a3, a4) )
    {
      v11 = v7;
      v12 = v8;
      result = Function_224bfe8(
                 (int)v5,
                 v6,
                 (void (__fastcall *)(int, char *, int, int, int, int))Function_2254fd0,
                 (int)&v11);
    }
    else
    {
      Function_2256e70(v5 + 7, "NAMES %s", v6);
      if ( !*v6 )
        v6 = 0;
      result = Function_224e874((int)v5, (int)v6, v7, v8);
      v10 = result;
      if ( a5 )
      {
        do
        {
          Function_225366c(v5, v10);
          ((void (__fastcall *)(int))dword_21EA898[0])(10);
          result = Function_225355c((int)v5, v10);
        }
        while ( result );
      }
    }
  }
  return result;
}

//----- (0225524C) --------------------------------------------------------
uint __fastcall Function_225524c(uint result, char *a2, char *a3, uint a4)
{
  uint *v4;
  char *v5;
  char *v6;
  uint v7;
  bool v8;
  bool v9;
  uint v10;

  v10 = a4;
  v4 = (uint *)result;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( !result )
    result = Function_20d407c((int)"chat != NULL", (int)"chatMain.c", (int)"chatSendUserMessageA");
  v8 = v4 == 0;
  if ( v4 )
  {
    result = *v4;
    v8 = *v4 == 0;
  }
  if ( !v8 )
  {
    if ( !v5 )
      Function_20d407c((int)"user != NULL", (int)"chatMain.c", (int)"chatSendUserMessageA");
    if ( !*v5 )
      Function_20d407c((int)"user[0] != '\\0'", (int)"chatMain.c", (int)"chatSendUserMessageA");
    result = strlen(v5);
    if ( result >= 0x80 )
      result = Function_20d407c((int)"strlen(user) < MAX_USER", (int)"chatMain.c", (int)"chatSendUserMessageA");
    if ( v7 > 4 )
      result = Function_20d407c(
                 (int)"(type == CHAT_MESSAGE) || (type == CHAT_ACTION) || (type == CHAT_NOTICE) || (type == CHAT_UTM) || "
                      "(type == CHAT_ATM)",
                 (int)"chatMain.c",
                 (int)"chatSendUserMessageA");
    v9 = v6 == 0;
    if ( v6 )
    {
      result = *v6;
      v9 = result == 0;
    }
    if ( !v9 )
    {
      if ( v7 )
      {
        switch ( v7 )
        {
          case 1u:
            result = Function_2256e70(v4 + 7, (const char *)dword_225AE60, v5, v6, v10);
            break;
          case 2u:
            result = Function_2256e70(v4 + 7, "NOTICE %s :%s", v5, v6, v10);
            break;
          case 3u:
            result = Function_2256e70(v4 + 7, "UTM %s :%s", v5, v6, v10);
            break;
          case 4u:
            result = Function_2256e70(v4 + 7, "ATM %s :%s", v5, v6, v10);
            break;
        }
      }
      else
      {
        result = Function_2256e70(v4 + 7, "PRIVMSG %s :%s", v5, v6, v10);
      }
    }
  }
  return result;
}

//----- (022553F0) --------------------------------------------------------
int *Function_22553f0()
{
  int *result;

  ++dword_225B6C0[13];
  Function_20d7510((int)&dword_225B6C0[12], "%03d");
  result = &dword_225B6C0[12];
  dword_225B6C0[13] %= 1000;
  return result;
}

//----- (02255450) --------------------------------------------------------
int __fastcall Function_2255450(int result, int a2, uchar *a3, int a4, int a5, int a6)
{
  int *v6;
  uchar *v7;
  int v8;
  bool v9;
  bool v10;
  int i;
  int v12;
  int v13;
  char v14[512];
  int v15;

  v15 = a4;
  v6 = (int *)result;
  v7 = a3;
  v8 = a4;
  if ( !result )
    result = Function_20d407c((int)"chat != NULL", (int)"chatMain.c", (int)"chatSetChannelKeysA");
  v9 = v6 == 0;
  if ( v6 )
  {
    result = *v6;
    v9 = *v6 == 0;
  }
  if ( !v9 )
  {
    v10 = v7 == 0;
    if ( v7 )
      v10 = *v7 == 0;
    if ( v10 )
      Function_20d7510((int)v14, "SETCHANKEY %s :");
    else
      Function_20d7510((int)v14, "SETCKEY %s %s :");
    for ( i = 0; i < v8; ++i )
    {
      *(uint *)(a6 + 4 * i);
      v12 = strlen(v14);
      v13 = *(uint *)(a5 + 4 * i);
      Function_20d7510((int)&v14[v12], "\\%s\\%s");
    }
    result = Function_2256bb0(v6 + 7, v14);
  }
  return result;
}

//----- (0225554C) --------------------------------------------------------
int __fastcall Function_225554c(int a1, uchar *a2, uchar *a3, int a4, int a5, int a6)
{
  uchar *v6;
  uchar *v7;
  bool v8;
  bool v9;
  bool v10;
  int v11;
  int i;
  char *v13;
  bool v14;
  int v15;
  int v16;
  char *v17;
  int j;
  char *v19;
  bool v20;
  int v22;
  uchar *v23;
  int v24;
  char v25[512];
  int v26;

  v26 = a4;
  v22 = a1;
  v6 = a2;
  v23 = a3;
  v7 = (uchar *)a4;
  v24 = 0;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatMain.c", (int)"ciSendGetChannelKey");
  v8 = v6 == 0;
  if ( v6 )
    v8 = *v6 == 0;
  if ( v8 )
    Function_20d407c((int)"channel && channel[0]", (int)"chatMain.c", (int)"ciSendGetChannelKey");
  v9 = v7 == 0;
  if ( v7 )
    v9 = *v7 == 0;
  if ( v9 )
    Function_20d407c((int)"cookie && cookie[0]", (int)"chatMain.c", (int)"ciSendGetChannelKey");
  if ( a5 && !a6 )
    Function_20d407c((int)"!num || keys", (int)"chatMain.c", (int)"ciSendGetChannelKey");
  v10 = v23 == 0;
  if ( v23 )
    v10 = *v23 == 0;
  if ( v10 )
    Function_20d7510((int)v25, "GETCHANKEY %s %s 0 :");
  else
    Function_20d7510((int)v25, "GETCKEY %s %s %s 0 :");
  v11 = strlen(v25);
  for ( i = 0; i < a5; ++i )
  {
    v13 = *(char **)(a6 + 4 * i);
    v14 = v13 == 0;
    if ( v13 )
      v14 = *v13 == 0;
    if ( !v14 )
    {
      if ( Function_20d8d14(*(int **)(a6 + 4 * i), "b_*") )
      {
        v15 = strlen(v13);
        if ( v11 + v15 + 1 < 512 )
        {
          v25[v11] = 92;
          v16 = v11 + 1;
          v17 = &v25[v16];
          memcpy(&v25[v16], *(char **)(a6 + 4 * i), v15);
          for ( j = v16; j < v16 + v15; ++v17 )
          {
            ++j;
            if ( *v17 == 92 )
              *v17 = 47;
          }
          v11 = v16 + v15;
          v25[v11] = 0;
        }
      }
      else
      {
        v24 = 1;
      }
    }
  }
  if ( v24 && v11 + 4 < 512 )
  {
    v25[v11] = aB_2[0];
    v19 = &v25[v11];
    v19[1] = aB_2[1];
    v19[2] = aB_2[2];
    v11 += 4;
    v19[3] = aB_2[3];
    v19[4] = aB_2[4];
  }
  if ( !a5 )
  {
    v20 = v23 == 0;
    if ( v23 )
      v20 = *v23 == 0;
    if ( v20 )
      strcpy(&v25[v11], "*");
  }
  Function_2256bb0(v22 + 28, v25);
  return v24;
}

//----- (022557EC) --------------------------------------------------------
int __fastcall Function_22557ec(int result, uchar *a2, int *a3, int a4, int a5, int a6, int a7, int a8)
{
  int *v8;
  uchar *v9;
  int *v10;
  int v11;
  bool v12;
  int *v13;
  int v14;
  bool v15;
  int v16;
  int v17;
  int v18;

  v8 = (int *)result;
  v9 = a2;
  v10 = a3;
  v11 = a4;
  if ( !result )
    result = Function_20d407c((int)"chat != NULL", (int)"chatMain.c", (int)"chatGetChannelKeysA");
  v12 = v8 == 0;
  if ( v8 )
  {
    result = *v8;
    v12 = *v8 == 0;
  }
  if ( !v12 )
  {
    if ( v11 < 0 )
      Function_20d407c((int)"num >= 0", (int)"chatMain.c", (int)"chatGetChannelKeysA");
    if ( v11 && !a5 )
      Function_20d407c((int)"!num || keys", (int)"chatMain.c", (int)"chatGetChannelKeysA");
    v13 = Function_22553f0();
    v14 = Function_225554c((int)v8, v9, v10, (int)v13, v11, a5);
    v15 = v10 == 0;
    if ( v10 )
      v15 = *(uchar *)v10 == 0;
    if ( v15 )
    {
      v17 = Function_224ea9c((int)v8, (int)v13, v11, a5, v14, a6, a7);
    }
    else
    {
      v16 = Function_20d8d14(v10, "*") == 0;
      v17 = Function_224e928((int)v8, (int)v13, v11, a5, v16, v14, a6, a7);
    }
    v18 = v17;
    for ( result = a8; result; result = Function_225355c((int)v8, v18) )
    {
      Function_225366c(v8, v18);
      ((void (__fastcall *)(int))dword_21EA898[0])(10);
    }
  }
  return result;
}

//----- (02255988) --------------------------------------------------------
int __fastcall Function_2255988(char *a1)
{
  char *v1;
  uint v2;
  bool v4;
  bool v5;
  int v6;

  v1 = a1;
  v2 = strlen(a1);
  if ( v2 >= 0x15 )
    return 6;
  v4 = v1 == 0;
  if ( v1 )
  {
    v2 = *v1;
    v4 = v2 == 0;
  }
  if ( v4 )
    return 2;
  v5 = v2 == 64;
  if ( v2 != 64 )
    v5 = v2 == 35;
  if ( !v5 )
  {
    v5 = v2 == 43;
    if ( v2 != 43 )
      v5 = v2 == 58;
  }
  if ( v5 )
    return 2;
  if ( !v2 )
    return 0;
  while ( 1 )
  {
    v6 = *v1++;
    if ( !strchr("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789\"#$%&'()*+,-./:;<=>?@[]^_`{|}~", v6) )
      break;
    if ( !*v1 )
      return 0;
  }
  return 2;
}

//----- (02255A08) --------------------------------------------------------
int __fastcall Function_2255a08(uint *a1, int a2, int a3, int a4, int a5)
{
  uint *v5;
  int v6;
  int v7;
  int v8;
  int result;
  int (__fastcall *v10)(uint *);
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v16 = a4;
  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  if ( !a1 )
    Function_20d407c((int)"chat != NULL", (int)"chatMain.c", (int)"ciNickError");
  result = v5[3];
  if ( result )
  {
    v15 = a5;
    v12 = v6;
    v13 = v7;
    v14 = v8;
    result = Function_2248c2c(v5, 25, v5[3], &v12, v5[6], 0, 0, 16, v6);
  }
  else
  {
    v5[1] = 0;
    v10 = (int (__fastcall *)(uint *))v5[5];
    if ( v10 )
    {
      v11 = v5[6];
      result = v10(v5);
    }
  }
  return result;
}

//----- (02255ADC) --------------------------------------------------------
int __fastcall Function_2255adc(uint *a1)
{
  uint *v1;
  uchar *v2;

  v1 = a1;
  if ( !a1 )
    Function_20d407c((int)"buffer != NULL", (int)"chatSocket.c", (int)"ciBufferInit");
  v1[1] = 0;
  v1[2] = 0x2000;
  v2 = (uchar *)((int (__fastcall *)(int))dword_21D7880[0])(8193);
  *v1 = v2;
  if ( !v2 )
    return 0;
  *v2 = 0;
  return 1;
}

//----- (02255B3C) --------------------------------------------------------
void __fastcall Function_2255b3c(int *a1)
{
  int v1;

  v1 = *a1;
  JUMPOUT(dword_21D78B0);
}

//----- (02255B4C) --------------------------------------------------------
int __fastcall Function_2255b4c(int *a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  uint v6;
  int v7;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    Function_20d407c((int)"(buffer) != NULL", (int)"chatSocket.c", (int)"ciBufferPreAppend");
  if ( v2[2] < 0 )
    Function_20d407c((int)"(buffer)->size >= 0", (int)"chatSocket.c", (int)"ciBufferPreAppend");
  if ( ((uint)v2[2] >> 31) + __ROR4__((v2[2] << 19) - ((uint)v2[2] >> 31), 19) )
    Function_20d407c((int)"((buffer)->size % BUFFER_INC) == 0", (int)"chatSocket.c", (int)"ciBufferPreAppend");
  if ( v2[1] < 0 )
    Function_20d407c((int)"(buffer)->length >= 0", (int)"chatSocket.c", (int)"ciBufferPreAppend");
  if ( v2[1] > v2[2] )
    Function_20d407c((int)"(buffer)->length <= (buffer)->size", (int)"chatSocket.c", (int)"ciBufferPreAppend");
  if ( v3 < 0 )
    Function_20d407c((int)"len >= 0", (int)"chatSocket.c", (int)"ciBufferPreAppend");
  if ( v3 > 0x7FFF )
    Function_20d407c((int)"len <= SHRT_MAX", (int)"chatSocket.c", (int)"ciBufferPreAppend");
  v4 = v2[1] + v3;
  if ( v4 <= v2[2] )
    return 1;
  v6 = v4
     + 0x2000
     - (((uint)(v4 + 0x2000) >> 31)
      + __ROR4__(((v4 + 0x2000) << 19) - ((uint)(v4 + 0x2000) >> 31), 19));
  v7 = ((int (__fastcall *)(int, uint))dword_21D7894[0])(*v2, v6 + 1);
  if ( !v7 )
    return 0;
  *v2 = v7;
  v2[2] = v6;
  return 1;
}

//----- (02255CB0) --------------------------------------------------------
int __fastcall Function_2255cb0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    Function_20d407c((int)"(buffer) != NULL", (int)"chatSocket.c", (int)"ciBufferClipFront");
  if ( *(uint *)(v2 + 8) < 0 )
    Function_20d407c((int)"(buffer)->size >= 0", (int)"chatSocket.c", (int)"ciBufferClipFront");
  if ( (*(uint *)(v2 + 8) >> 31) + __ROR4__((*(uint *)(v2 + 8) << 19) - (*(uint *)(v2 + 8) >> 31), 19) )
    Function_20d407c((int)"((buffer)->size % BUFFER_INC) == 0", (int)"chatSocket.c", (int)"ciBufferClipFront");
  if ( *(uint *)(v2 + 4) < 0 )
    Function_20d407c((int)"(buffer)->length >= 0", (int)"chatSocket.c", (int)"ciBufferClipFront");
  if ( *(uint *)(v2 + 4) > *(uint *)(v2 + 8) )
    Function_20d407c((int)"(buffer)->length <= (buffer)->size", (int)"chatSocket.c", (int)"ciBufferClipFront");
  if ( v3 < 0 )
    Function_20d407c((int)"len >= 0", (int)"chatSocket.c", (int)"ciBufferClipFront");
  if ( v3 > *(uint *)(v2 + 4) )
    Function_20d407c((int)"len <= buffer->length", (int)"chatSocket.c", (int)"ciBufferClipFront");
  v4 = *(uint *)(v2 + 4) - v3;
  *(uint *)(v2 + 4) = v4;
  Function_20d50d8(*(char **)v2, (char *)(*(uint *)v2 + v3), v4);
  result = *(uint *)(v2 + 4);
  *(uchar *)(*(uint *)v2 + result) = 0;
  return result;
}

//----- (02255DEC) --------------------------------------------------------
int __fastcall Function_2255dec(int *a1)
{
  int *v1;

  v1 = a1;
  if ( !a1 )
    Function_20d407c((int)"sock != NULL", (int)"chatSocket.c", (int)"ciSocketInit");
  Call_FillMemWithValue(v1, 0, 0x350u);
  *v1 = -1;
  if ( !Function_2255adc(v1 + 66) )
    return 0;
  if ( Function_2255adc(v1 + 69) )
    return 1;
  Function_2255b3c(v1 + 66);
  return 0;
}

//----- (02255E68) --------------------------------------------------------
int __fastcall Function_2255e68(int a1, char *a2, int a3)
{
  int v3;
  char *v4;
  int v5;
  int v6;
  int v7;
  int result;
  int v9;
  int v10;
  int v11;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( !a1 )
    Function_20d407c((int)"(sock) != NULL", (int)"chatSocket.c", (int)"ciSocketConnect");
  if ( *(uint *)(v3 + 4) > 2u )
    Function_20d407c(
      (int)"((sock)->connectState == ciNotConnected) || ((sock)->connectState == ciConnected) || ((sock)->connectState =="
           " ciDisconnected)",
      (int)"chatSocket.c",
      (int)"ciSocketConnect");
  if ( v3 == -264 )
    Function_20d407c((int)"(&(sock)->inputQueue) != NULL", (int)"chatSocket.c", (int)"ciSocketConnect");
  if ( *(uint *)(v3 + 272) < 0 )
    Function_20d407c((int)"(&(sock)->inputQueue)->size >= 0", (int)"chatSocket.c", (int)"ciSocketConnect");
  if ( (*(uint *)(v3 + 272) >> 31) + __ROR4__((*(uint *)(v3 + 272) << 19) - (*(uint *)(v3 + 272) >> 31), 19) )
    Function_20d407c(
      (int)"((&(sock)->inputQueue)->size % BUFFER_INC) == 0",
      (int)"chatSocket.c",
      (int)"ciSocketConnect");
  if ( *(uint *)(v3 + 268) < 0 )
    Function_20d407c((int)"(&(sock)->inputQueue)->length >= 0", (int)"chatSocket.c", (int)"ciSocketConnect");
  if ( *(uint *)(v3 + 268) > *(uint *)(v3 + 272) )
    Function_20d407c(
      (int)"(&(sock)->inputQueue)->length <= (&(sock)->inputQueue)->size",
      (int)"chatSocket.c",
      (int)"ciSocketConnect");
  if ( v3 == -276 )
    Function_20d407c((int)"(&(sock)->outputQueue) != NULL", (int)"chatSocket.c", (int)"ciSocketConnect");
  if ( *(uint *)(v3 + 284) < 0 )
    Function_20d407c((int)"(&(sock)->outputQueue)->size >= 0", (int)"chatSocket.c", (int)"ciSocketConnect");
  if ( (*(uint *)(v3 + 284) >> 31) + __ROR4__((*(uint *)(v3 + 284) << 19) - (*(uint *)(v3 + 284) >> 31), 19) )
    Function_20d407c(
      (int)"((&(sock)->outputQueue)->size % BUFFER_INC) == 0",
      (int)"chatSocket.c",
      (int)"ciSocketConnect");
  if ( *(uint *)(v3 + 280) < 0 )
    Function_20d407c((int)"(&(sock)->outputQueue)->length >= 0", (int)"chatSocket.c", (int)"ciSocketConnect");
  if ( *(uint *)(v3 + 280) > *(uint *)(v3 + 284) )
    Function_20d407c(
      (int)"(&(sock)->outputQueue)->length <= (&(sock)->outputQueue)->size",
      (int)"chatSocket.c",
      (int)"ciSocketConnect");
  if ( !v4 )
    Function_20d407c((int)"serverAddress != NULL", (int)"chatSocket.c", (int)"ciSocketConnect");
  if ( v5 < 0 )
    Function_20d407c((int)"port >= 0", (int)"chatSocket.c", (int)"ciSocketConnect");
  if ( v5 > 0xFFFF )
    Function_20d407c((int)"port <= USHRT_MAX", (int)"chatSocket.c", (int)"ciSocketConnect");
  if ( *(uint *)(v3 + 4) )
    Function_20d407c((int)"sock->connectState == ciNotConnected", (int)"chatSocket.c", (int)"ciSocketConnect");
  strncpy((uchar *)(v3 + 8), v4, 255);
  *(uchar *)(v3 + 262) = 0;
  v6 = ((int (__fastcall *)(char *))dword_21EAF1C[0])(v4);
  if ( v6 == -1 )
  {
    v7 = ((int (__fastcall *)(char *))dword_220854C[0])(v4);
    if ( !v7 )
      return 0;
    v6 = ***(uint ***)(v7 + 12);
  }
  v10 = 0;
  v11 = v6;
  HIWORD(v10) = BYTE1(v5) | ((ushort)v5 << 8) & 0xFF00;
  BYTE1(v10) = 2;
  v9 = ((int (__fastcall *)(int, int))dword_21EACDC[0])(2, 1);
  *(uint *)v3 = v9;
  if ( v9 == -1 )
    return 0;
  if ( ((int (*)(void))dword_21EAD78[0])() == -1 )
  {
    ((void (__fastcall *)(uint))dword_21EACF0[0])(*(uint *)v3);
    result = 0;
  }
  else
  {
    result = 1;
    *(uint *)(v3 + 4) = 1;
  }
  return result;
}

//----- (022561B0) --------------------------------------------------------
int __fastcall Function_22561b0(uint *a1)
{
  uint *v1;
  int i;

  v1 = a1;
  if ( !a1 )
    Function_20d407c((int)"(sock) != NULL", (int)"chatSocket.c", (int)"ciSocketDisconnect");
  if ( v1[1] > 2u )
    Function_20d407c(
      (int)"((sock)->connectState == ciNotConnected) || ((sock)->connectState == ciConnected) || ((sock)->connectState =="
           " ciDisconnected)",
      (int)"chatSocket.c",
      (int)"ciSocketDisconnect");
  if ( v1 == (uint *)-264 )
    Function_20d407c((int)"(&(sock)->inputQueue) != NULL", (int)"chatSocket.c", (int)"ciSocketDisconnect");
  if ( v1[68] < 0 )
    Function_20d407c((int)"(&(sock)->inputQueue)->size >= 0", (int)"chatSocket.c", (int)"ciSocketDisconnect");
  if ( (v1[68] >> 31) + __ROR4__((v1[68] << 19) - (v1[68] >> 31), 19) )
    Function_20d407c(
      (int)"((&(sock)->inputQueue)->size % BUFFER_INC) == 0",
      (int)"chatSocket.c",
      (int)"ciSocketDisconnect");
  if ( v1[67] < 0 )
    Function_20d407c((int)"(&(sock)->inputQueue)->length >= 0", (int)"chatSocket.c", (int)"ciSocketDisconnect");
  if ( v1[67] > v1[68] )
    Function_20d407c(
      (int)"(&(sock)->inputQueue)->length <= (&(sock)->inputQueue)->size",
      (int)"chatSocket.c",
      (int)"ciSocketDisconnect");
  if ( v1 == (uint *)-276 )
    Function_20d407c((int)"(&(sock)->outputQueue) != NULL", (int)"chatSocket.c", (int)"ciSocketDisconnect");
  if ( v1[71] < 0 )
    Function_20d407c((int)"(&(sock)->outputQueue)->size >= 0", (int)"chatSocket.c", (int)"ciSocketDisconnect");
  if ( (v1[71] >> 31) + __ROR4__((v1[71] << 19) - (v1[71] >> 31), 19) )
    Function_20d407c(
      (int)"((&(sock)->outputQueue)->size % BUFFER_INC) == 0",
      (int)"chatSocket.c",
      (int)"ciSocketDisconnect");
  if ( v1[70] < 0 )
    Function_20d407c((int)"(&(sock)->outputQueue)->length >= 0", (int)"chatSocket.c", (int)"ciSocketDisconnect");
  if ( v1[70] > v1[71] )
    Function_20d407c(
      (int)"(&(sock)->outputQueue)->length <= (&(sock)->outputQueue)->size",
      (int)"chatSocket.c",
      (int)"ciSocketDisconnect");
  if ( *v1 != -1 )
  {
    ((void (*)(void))dword_21EAD04[0])();
    ((void (__fastcall *)(uint))dword_21EACF0[0])(*v1);
  }
  v1[1] = 2;
  Function_2255b3c(v1 + 66);
  Function_2255b3c(v1 + 69);
  ((void (__fastcall *)(uint))dword_21D78B0[0])(v1[202]);
  ((void (__fastcall *)(uint))dword_21D78B0[0])(v1[203]);
  ((void (__fastcall *)(uint))dword_21D78B0[0])(v1[204]);
  ((void (__fastcall *)(uint))dword_21D78B0[0])(v1[205]);
  ((void (__fastcall *)(uint))dword_21D78B0[0])(v1[206]);
  ((void (__fastcall *)(uint))dword_21D78B0[0])(v1[207]);
  ((void (__fastcall *)(uint))dword_21D78B0[0])(v1[208]);
  ((void (__fastcall *)(uint))dword_21D78B0[0])(v1[209]);
  for ( i = 0; i < v1[211]; ++i )
    ((void (__fastcall *)(uint))dword_21D78B0[0])(*(uint *)(v1[210] + 4 * i));
  return ((int (__fastcall *)(uint))dword_21D78B0[0])(v1[210]);
}

//----- (0225642C) --------------------------------------------------------
int __fastcall Function_225642c(int a1, uint *a2, uint *a3, int a4)
{
  uint *v4;
  uint *v5;
  uint *v6;
  int result;
  int v8;
  int v9;
  int v10;
  int v11;

  v11 = a4;
  v4 = a2;
  v5 = a3;
  v6 = (uint *)a4;
  v10 = 0;
  v9 = 0;
  v8 = 0;
  result = ((int (__fastcall *)(int, int *, int *, int *))dword_21EAA74[0])(a1, &v10, &v9, &v8);
  if ( v4 )
  {
    result = v10;
    *v4 = v10;
  }
  if ( v5 )
  {
    result = v9;
    *v5 = v9;
  }
  if ( v6 )
  {
    result = v8;
    *v6 = v8;
  }
  return result;
}

//----- (0225648C) --------------------------------------------------------
int __fastcall Function_225648c(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int result;
  int v6;
  bool v7;
  int v8;

  v8 = a4;
  v4 = a1;
  if ( !a1 )
    Function_20d407c((int)"(sock) != NULL", (int)"chatSocket.c", (int)"ciSocketThinkSend");
  if ( (uint)v4[1] > 2 )
    Function_20d407c(
      (int)"((sock)->connectState == ciNotConnected) || ((sock)->connectState == ciConnected) || ((sock)->connectState =="
           " ciDisconnected)",
      (int)"chatSocket.c",
      (int)"ciSocketThinkSend");
  if ( v4 == (int *)-264 )
    Function_20d407c((int)"(&(sock)->inputQueue) != NULL", (int)"chatSocket.c", (int)"ciSocketThinkSend");
  if ( v4[68] < 0 )
    Function_20d407c((int)"(&(sock)->inputQueue)->size >= 0", (int)"chatSocket.c", (int)"ciSocketThinkSend");
  if ( ((uint)v4[68] >> 31) + __ROR4__((v4[68] << 19) - ((uint)v4[68] >> 31), 19) )
    Function_20d407c(
      (int)"((&(sock)->inputQueue)->size % BUFFER_INC) == 0",
      (int)"chatSocket.c",
      (int)"ciSocketThinkSend");
  if ( v4[67] < 0 )
    Function_20d407c((int)"(&(sock)->inputQueue)->length >= 0", (int)"chatSocket.c", (int)"ciSocketThinkSend");
  if ( v4[67] > v4[68] )
    Function_20d407c(
      (int)"(&(sock)->inputQueue)->length <= (&(sock)->inputQueue)->size",
      (int)"chatSocket.c",
      (int)"ciSocketThinkSend");
  if ( v4 == (int *)-276 )
    Function_20d407c((int)"(&(sock)->outputQueue) != NULL", (int)"chatSocket.c", (int)"ciSocketThinkSend");
  if ( v4[71] < 0 )
    Function_20d407c((int)"(&(sock)->outputQueue)->size >= 0", (int)"chatSocket.c", (int)"ciSocketThinkSend");
  if ( ((uint)v4[71] >> 31) + __ROR4__((v4[71] << 19) - ((uint)v4[71] >> 31), 19) )
    Function_20d407c(
      (int)"((&(sock)->outputQueue)->size % BUFFER_INC) == 0",
      (int)"chatSocket.c",
      (int)"ciSocketThinkSend");
  if ( v4[70] < 0 )
    Function_20d407c((int)"(&(sock)->outputQueue)->length >= 0", (int)"chatSocket.c", (int)"ciSocketThinkSend");
  if ( v4[70] > v4[71] )
    Function_20d407c(
      (int)"(&(sock)->outputQueue)->length <= (&(sock)->outputQueue)->size",
      (int)"chatSocket.c",
      (int)"ciSocketThinkSend");
  if ( v4[1] != 1 )
    Function_20d407c((int)"(sock)->connectState == ciConnected", (int)"chatSocket.c", (int)"ciSocketThinkSend");
  for ( result = v4[70]; result > 0; result = v4[70] )
  {
    Function_225642c(*v4, 0, &v8, 0);
    result = v8;
    if ( !v8 )
      break;
    v6 = v4[70];
    if ( v6 >= 1024 )
      v6 = 1024;
    result = ((int (__fastcall *)(int, int, int, uint))dword_21EAE48[0])(*v4, v4[69], v6, 0);
    v7 = result == 0;
    if ( result )
      v7 = result == -1;
    if ( v7 )
      break;
    Function_2255cb0((int)(v4 + 69), result);
  }
  return result;
}

//----- (022566FC) --------------------------------------------------------
int __fastcall Function_22566fc(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v10 = a4;
  v4 = a1;
  if ( !a1 )
    Function_20d407c((int)"(sock) != NULL", (int)"chatSocket.c", (int)"ciSocketThinkRecv");
  if ( (uint)v4[1] > 2 )
    Function_20d407c(
      (int)"((sock)->connectState == ciNotConnected) || ((sock)->connectState == ciConnected) || ((sock)->connectState =="
           " ciDisconnected)",
      (int)"chatSocket.c",
      (int)"ciSocketThinkRecv");
  if ( v4 == (int *)-264 )
    Function_20d407c((int)"(&(sock)->inputQueue) != NULL", (int)"chatSocket.c", (int)"ciSocketThinkRecv");
  if ( v4[68] < 0 )
    Function_20d407c((int)"(&(sock)->inputQueue)->size >= 0", (int)"chatSocket.c", (int)"ciSocketThinkRecv");
  if ( ((uint)v4[68] >> 31) + __ROR4__((v4[68] << 19) - ((uint)v4[68] >> 31), 19) )
    Function_20d407c(
      (int)"((&(sock)->inputQueue)->size % BUFFER_INC) == 0",
      (int)"chatSocket.c",
      (int)"ciSocketThinkRecv");
  if ( v4[67] < 0 )
    Function_20d407c((int)"(&(sock)->inputQueue)->length >= 0", (int)"chatSocket.c", (int)"ciSocketThinkRecv");
  if ( v4[67] > v4[68] )
    Function_20d407c(
      (int)"(&(sock)->inputQueue)->length <= (&(sock)->inputQueue)->size",
      (int)"chatSocket.c",
      (int)"ciSocketThinkRecv");
  if ( v4 == (int *)-276 )
    Function_20d407c((int)"(&(sock)->outputQueue) != NULL", (int)"chatSocket.c", (int)"ciSocketThinkRecv");
  if ( v4[71] < 0 )
    Function_20d407c((int)"(&(sock)->outputQueue)->size >= 0", (int)"chatSocket.c", (int)"ciSocketThinkRecv");
  if ( ((uint)v4[71] >> 31) + __ROR4__((v4[71] << 19) - ((uint)v4[71] >> 31), 19) )
    Function_20d407c(
      (int)"((&(sock)->outputQueue)->size % BUFFER_INC) == 0",
      (int)"chatSocket.c",
      (int)"ciSocketThinkRecv");
  if ( v4[70] < 0 )
    Function_20d407c((int)"(&(sock)->outputQueue)->length >= 0", (int)"chatSocket.c", (int)"ciSocketThinkRecv");
  if ( v4[70] > v4[71] )
    Function_20d407c(
      (int)"(&(sock)->outputQueue)->length <= (&(sock)->outputQueue)->size",
      (int)"chatSocket.c",
      (int)"ciSocketThinkRecv");
  if ( v4[1] != 1 )
    Function_20d407c((int)"(sock)->connectState == ciConnected", (int)"chatSocket.c", (int)"ciSocketThinkRecv");
  while ( 1 )
  {
    Function_225642c(*v4, &v10, 0, 0);
    result = v10;
    if ( !v10 )
      break;
    result = Function_2255b4c(v4 + 66, 4096);
    if ( !result )
      break;
    v6 = v4[66];
    v7 = v4[67];
    v8 = ((int (__fastcall *)(int, int, int, uint))dword_21EAE04[0])(*v4, v6 + v7, 4096, 0);
    if ( v8 <= 0 )
    {
      result = 2;
      v4[1] = 2;
      return result;
    }
    if ( v4[72] )
      Function_224d4d8(v6 + v7, v8, (int)(v4 + 73));
    v9 = v4[67] + v8;
    v4[67] = v9;
    *(uchar *)(v4[66] + v9) = 0;
  }
  return result;
}

//----- (02256954) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0225699C) --------------------------------------------------------
int __fastcall Function_225699c(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int result;
  int v7;
  int v8;
  int v9;

  v4 = a1;
  if ( !a1 )
    Function_20d407c((int)"(sock) != NULL", (int)"chatSocket.c", (int)"ciSocketThink");
  if ( (uint)v4[1] > 2 )
    Function_20d407c(
      (int)"((sock)->connectState == ciNotConnected) || ((sock)->connectState == ciConnected) || ((sock)->connectState =="
           " ciDisconnected)",
      (int)"chatSocket.c",
      (int)"ciSocketThink");
  if ( v4 == (int *)-264 )
    Function_20d407c((int)"(&(sock)->inputQueue) != NULL", (int)"chatSocket.c", (int)"ciSocketThink");
  if ( v4[68] < 0 )
    Function_20d407c((int)"(&(sock)->inputQueue)->size >= 0", (int)"chatSocket.c", (int)"ciSocketThink");
  if ( ((uint)v4[68] >> 31) + __ROR4__((v4[68] << 19) - ((uint)v4[68] >> 31), 19) )
    Function_20d407c((int)"((&(sock)->inputQueue)->size % BUFFER_INC) == 0", (int)"chatSocket.c", (int)"ciSocketThink");
  if ( v4[67] < 0 )
    Function_20d407c((int)"(&(sock)->inputQueue)->length >= 0", (int)"chatSocket.c", (int)"ciSocketThink");
  if ( v4[67] > v4[68] )
    Function_20d407c(
      (int)"(&(sock)->inputQueue)->length <= (&(sock)->inputQueue)->size",
      (int)"chatSocket.c",
      (int)"ciSocketThink");
  if ( v4 == (int *)-276 )
    Function_20d407c((int)"(&(sock)->outputQueue) != NULL", (int)"chatSocket.c", (int)"ciSocketThink");
  if ( v4[71] < 0 )
    Function_20d407c((int)"(&(sock)->outputQueue)->size >= 0", (int)"chatSocket.c", (int)"ciSocketThink");
  if ( ((uint)v4[71] >> 31) + __ROR4__((v4[71] << 19) - ((uint)v4[71] >> 31), 19) )
    Function_20d407c((int)"((&(sock)->outputQueue)->size % BUFFER_INC) == 0", (int)"chatSocket.c", (int)"ciSocketThink");
  if ( v4[70] < 0 )
    Function_20d407c((int)"(&(sock)->outputQueue)->length >= 0", (int)"chatSocket.c", (int)"ciSocketThink");
  v5 = v4[70];
  if ( v5 > v4[71] )
    Function_20d407c(
      (int)"(&(sock)->outputQueue)->length <= (&(sock)->outputQueue)->size",
      (int)"chatSocket.c",
      (int)"ciSocketThink");
  if ( v4[1] != 1 )
    Function_20d407c((int)"(sock)->connectState == ciConnected", (int)"chatSocket.c", (int)"ciSocketThink");
  result = v4[1];
  if ( result != 2 )
  {
    Function_225648c(v4, v5, a3, a4);
    result = Function_22566fc(v4, v7, v8, v9);
  }
  return result;
}

//----- (02256BB0) --------------------------------------------------------
int __fastcall Function_2256bb0(uint *a1, char *a2)
{
  uint *v2;
  char *v3;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    Function_20d407c((int)"(sock) != NULL", (int)"chatSocket.c", (int)"ciSocketSend");
  if ( v2[1] > 2u )
    Function_20d407c(
      (int)"((sock)->connectState == ciNotConnected) || ((sock)->connectState == ciConnected) || ((sock)->connectState =="
           " ciDisconnected)",
      (int)"chatSocket.c",
      (int)"ciSocketSend");
  if ( v2 == (uint *)-264 )
    Function_20d407c((int)"(&(sock)->inputQueue) != NULL", (int)"chatSocket.c", (int)"ciSocketSend");
  if ( v2[68] < 0 )
    Function_20d407c((int)"(&(sock)->inputQueue)->size >= 0", (int)"chatSocket.c", (int)"ciSocketSend");
  if ( (v2[68] >> 31) + __ROR4__((v2[68] << 19) - (v2[68] >> 31), 19) )
    Function_20d407c((int)"((&(sock)->inputQueue)->size % BUFFER_INC) == 0", (int)"chatSocket.c", (int)"ciSocketSend");
  if ( v2[67] < 0 )
    Function_20d407c((int)"(&(sock)->inputQueue)->length >= 0", (int)"chatSocket.c", (int)"ciSocketSend");
  if ( v2[67] > v2[68] )
    Function_20d407c(
      (int)"(&(sock)->inputQueue)->length <= (&(sock)->inputQueue)->size",
      (int)"chatSocket.c",
      (int)"ciSocketSend");
  if ( v2 == (uint *)-276 )
    Function_20d407c((int)"(&(sock)->outputQueue) != NULL", (int)"chatSocket.c", (int)"ciSocketSend");
  if ( v2[71] < 0 )
    Function_20d407c((int)"(&(sock)->outputQueue)->size >= 0", (int)"chatSocket.c", (int)"ciSocketSend");
  if ( (v2[71] >> 31) + __ROR4__((v2[71] << 19) - (v2[71] >> 31), 19) )
    Function_20d407c((int)"((&(sock)->outputQueue)->size % BUFFER_INC) == 0", (int)"chatSocket.c", (int)"ciSocketSend");
  if ( v2[70] < 0 )
    Function_20d407c((int)"(&(sock)->outputQueue)->length >= 0", (int)"chatSocket.c", (int)"ciSocketSend");
  if ( v2[70] > v2[71] )
    Function_20d407c(
      (int)"(&(sock)->outputQueue)->length <= (&(sock)->outputQueue)->size",
      (int)"chatSocket.c",
      (int)"ciSocketSend");
  if ( v2[1] != 1 )
    Function_20d407c((int)"(sock)->connectState == ciConnected", (int)"chatSocket.c", (int)"ciSocketSend");
  if ( !v3 )
    Function_20d407c((int)"buffer != NULL", (int)"chatSocket.c", (int)"ciSocketSend");
  if ( v2[1] == 2 )
    return 1;
  v5 = strlen(v3);
  if ( !Function_2255b4c(v2 + 69, v5 + 2) )
    return 0;
  v6 = v2[69];
  v7 = v2[70];
  memcpy((uchar *)(v6 + v7), v3, v5);
  v8 = v2[70] + v5;
  v2[70] = v8 + 1;
  *(uchar *)(v2[69] + v8) = 13;
  v9 = v2[70];
  v2[70] = v9 + 1;
  *(uchar *)(v2[69] + v9) = 10;
  if ( v2[72] )
    Function_224d4d8(v6 + v7, v5 + 2, (int)v2 + 550);
  return 1;
}

//----- (02256E70) --------------------------------------------------------
int Function_2256e70(int a1, const char *a2, ...)
{
  return Function_2256e74();
}

//----- (02256E74) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (022570D4) --------------------------------------------------------
int __fastcall Function_22570d4(char *a1, uint *a2)
{
  bool v2;
  char *v3;
  char *v4;
  uint *v5;
  char *v6;
  int v7;
  int v8;
  int v9;
  int result;
  char *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uchar *v16;
  uchar *v17;
  uchar *v18;

  v3 = a1;
  v2 = a1 == 0;
  if ( a1 )
    a1 = (char *)*a1;
  v4 = 0;
  v5 = a2;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  if ( !v2 && a1 )
  {
    v11 = v3;
    while ( *v11 )
    {
      if ( *v11 == 33 )
      {
        v13 = (v11++)[1];
        v12 = v13;
        v4 = v11;
        if ( v13 )
        {
          do
          {
            if ( v12 == 64 )
            {
              v14 = (v11++)[1];
              v6 = v11;
              if ( v14 )
              {
                do
                {
                  v15 = (v11++)[1];
                  ++v9;
                }
                while ( v15 );
              }
            }
            else
            {
              ++v11;
              ++v8;
            }
            v12 = *v11;
          }
          while ( *v11 );
        }
      }
      else
      {
        ++v11;
        ++v7;
      }
    }
    if ( v7 )
    {
      v16 = (uchar *)((int (__fastcall *)(int, char *))dword_21D7880[0])(v7 + 1, v11);
      v5[2] = v16;
      if ( v16 )
      {
        memcpy(v16, v3, v7);
        *(uchar *)(v5[2] + v7) = 0;
      }
    }
    else
    {
      v5[2] = 0;
    }
    if ( v8 )
    {
      v17 = (uchar *)((int (__fastcall *)(int))dword_21D7880[0])(v8 + 1);
      v5[3] = v17;
      if ( v17 )
      {
        memcpy(v17, v4, v8);
        *(uchar *)(v5[3] + v8) = 0;
      }
    }
    else
    {
      v5[3] = 0;
    }
    if ( v9 )
    {
      v18 = (uchar *)((int (__fastcall *)(int))dword_21D7880[0])(v9 + 1);
      v5[4] = v18;
      if ( v18 )
      {
        memcpy(v18, v6, v9);
        *(uchar *)(v5[4] + v9) = 0;
      }
    }
    else
    {
      v5[4] = 0;
    }
    result = 1;
  }
  else
  {
    Function_20d407c((int)"0", (int)"chatSocket.c", (int)"ciParseUser");
    result = 0;
  }
  return result;
}

//----- (02257270) --------------------------------------------------------
int __fastcall Function_2257270(char *a1, int a2)
{
  int v2;
  char *v3;
  int v4;
  int result;
  int v6;
  uchar *v7;
  uchar *v8;
  int v9;

  v2 = a2;
  v3 = a1;
  v4 = ((int (__fastcall *)(uint, int))dword_21D7894[0])(*(uint *)(a2 + 32), 4 * (*(uint *)(a2 + 36) + 1));
  if ( !v4 )
    return 0;
  *(uint *)(v2 + 32) = v4;
  v6 = strlen(v3);
  v7 = (uchar *)((int (__fastcall *)(int))dword_21D7880[0])(v6 + 1);
  v8 = v7;
  if ( !v7 )
    return 0;
  Function_20d8b7c(v7, (int *)v3);
  v9 = *(uint *)(v2 + 36);
  result = 1;
  *(uint *)(v2 + 36) = v9 + 1;
  *(uint *)(*(uint *)(v2 + 32) + 4 * v9) = v8;
  return result;
}

//----- (022572E0) --------------------------------------------------------
int __fastcall Function_22572e0(char *a1, int a2)
{
  char *v2;
  int v3;
  int v4;
  uchar *v5;
  uchar *v6;
  int result;
  int v8;
  char *v9;
  char *v10;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    Function_20d407c((int)"pText != NULL", (int)"chatSocket.c", (int)"ciParseParam");
  if ( !v3 )
    Function_20d407c((int)"message != NULL", (int)"chatSocket.c", (int)"ciParseParam");
  v4 = strlen(v2);
  v5 = (uchar *)((int (__fastcall *)(int))dword_21D7880[0])(v4 + 1);
  v6 = v5;
  if ( !v5 )
    return 0;
  Function_20d8b7c(v5, (int *)v2);
  if ( *v6 == 58 )
  {
    *v6 = 0;
    v9 = (char *)(v6 + 1);
  }
  else
  {
    v9 = (char *)Function_20d90b0(v6, " :", v8);
    if ( v9 )
    {
      *v9 = 0;
      v9 += 2;
    }
  }
  v10 = Function_20d8f58((char *)v6, " ");
  if ( v10 )
  {
    while ( Function_2257270(v10, v3) )
    {
      v10 = Function_20d8f58(0, " ");
      if ( !v10 )
        goto LABEL_15;
    }
    ((void (__fastcall *)(uchar *))dword_21D78B0[0])(v6);
    result = 0;
  }
  else
  {
LABEL_15:
    if ( !v9 || Function_2257270(v9, v3) )
    {
      ((void (__fastcall *)(uchar *))dword_21D78B0[0])(v6);
      result = 1;
    }
    else
    {
      ((void (__fastcall *)(uchar *))dword_21D78B0[0])(v6);
      result = 0;
    }
  }
  return result;
}

//----- (02257424) --------------------------------------------------------
int __fastcall Function_2257424(int a1, char *a2)
{
  char *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v9;
  uchar *v10;
  int v11;
  bool v12;
  bool v13;
  int v14;
  bool v15;
  int v16;
  bool v17;
  bool v18;
  int v19;
  bool v20;
  int v21;
  char *v22;
  uchar *v23;
  char *v24;
  uchar *v25;
  char *v26;
  uchar *v27;
  char *v28;
  uchar *v29;

  v2 = a2;
  v3 = a1;
  if ( a2 )
    a1 = *a2;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( !a2 || !a1 )
  {
    Function_20d407c((int)"0", (int)"chatSocket.c", (int)"ciParseMessage");
    return 0;
  }
  v9 = strlen(a2);
  v10 = (uchar *)((int (__fastcall *)(int))dword_21D7880[0])(v9 + 1);
  *(uint *)(v3 + 808) = v10;
  if ( !v10 )
    return 0;
  memcpy(v10, v2, v9);
  *(uchar *)(*(uint *)(v3 + 808) + v9) = 0;
  while ( 1 )
  {
    v11 = *v2;
    v12 = v11 == 10;
    if ( v11 != 10 )
      v12 = v11 == 13;
    if ( !v12 )
      break;
    ++v2;
  }
  if ( v11 == 58 )
  {
    *(uint *)(v3 + 812) = ++v2;
    v11 = *v2;
    if ( *v2 )
    {
      while ( 1 )
      {
        v11 = *v2;
        v13 = v11 == 32;
        if ( v11 != 32 )
          v13 = v11 == 0;
        if ( v13 )
          break;
        ++v4;
        ++v2;
      }
    }
  }
  if ( v11 == 32 )
  {
    do
    {
      v14 = (v2++)[1];
      v11 = v14;
    }
    while ( v14 == 32 );
  }
  if ( v11 )
  {
    *(uint *)(v3 + 828) = v2;
    while ( 1 )
    {
      v11 = *v2;
      v15 = v11 == 32;
      if ( v11 != 32 )
        v15 = v11 == 0;
      if ( v15 )
        break;
      ++v5;
      ++v2;
    }
  }
  if ( v11 == 32 )
  {
    do
    {
      v16 = (v2++)[1];
      v11 = v16;
    }
    while ( v16 == 32 );
  }
  v17 = v11 == 58;
  if ( v11 != 58 )
    v17 = v11 == 0;
  if ( !v17 )
  {
    *(uint *)(v3 + 832) = v2;
    while ( 1 )
    {
      v11 = *v2;
      v18 = v11 == 32;
      if ( v11 != 32 )
        v18 = v11 == 0;
      if ( v18 )
        break;
      ++v6;
      ++v2;
    }
  }
  if ( v11 == 32 )
  {
    do
    {
      v19 = (v2++)[1];
      v11 = v19;
    }
    while ( v19 == 32 );
  }
  v20 = v11 == 0;
  if ( v11 )
  {
    *(uint *)(v3 + 836) = v2;
    v20 = *v2 == 0;
  }
  if ( !v20 )
  {
    do
    {
      v21 = (v2++)[1];
      ++v7;
    }
    while ( v21 );
  }
  if ( v4 )
  {
    v22 = *(char **)(v3 + 812);
    v23 = (uchar *)((int (__fastcall *)(int))dword_21D7880[0])(v4 + 1);
    *(uint *)(v3 + 812) = v23;
    if ( v23 )
    {
      memcpy(v23, v22, v4);
      *(uchar *)(*(uint *)(v3 + 812) + v4) = 0;
    }
    if ( !Function_22570d4(*(char **)(v3 + 812), (uint *)(v3 + 808)) )
    {
      if ( *(uint *)(v3 + 808) )
      {
        ((void (*)(void))dword_21D78B0[0])();
        *(uint *)(v3 + 808) = 0;
      }
      if ( *(uint *)(v3 + 812) )
      {
        ((void (*)(void))dword_21D78B0[0])();
        *(uint *)(v3 + 812) = 0;
      }
      return 0;
    }
  }
  else
  {
    *(uint *)(v3 + 812) = 0;
    *(uint *)(v3 + 816) = 0;
    *(uint *)(v3 + 820) = 0;
    *(uint *)(v3 + 824) = 0;
  }
  if ( v6 )
  {
    if ( !Function_22572e0(*(char **)(v3 + 832), v3 + 808) )
    {
      if ( *(uint *)(v3 + 808) )
      {
        ((void (*)(void))dword_21D78B0[0])();
        *(uint *)(v3 + 808) = 0;
      }
      if ( *(uint *)(v3 + 812) )
      {
        ((void (*)(void))dword_21D78B0[0])();
        *(uint *)(v3 + 812) = 0;
      }
      if ( *(uint *)(v3 + 816) )
      {
        ((void (*)(void))dword_21D78B0[0])();
        *(uint *)(v3 + 816) = 0;
      }
      if ( *(uint *)(v3 + 820) )
      {
        ((void (*)(void))dword_21D78B0[0])();
        *(uint *)(v3 + 820) = 0;
      }
      if ( *(uint *)(v3 + 824) )
      {
        ((void (*)(void))dword_21D78B0[0])();
        *(uint *)(v3 + 824) = 0;
      }
      return 0;
    }
    goto LABEL_81;
  }
  if ( !v7 )
  {
    *(uint *)(v3 + 840) = 0;
    *(uint *)(v3 + 844) = 0;
    goto LABEL_81;
  }
  if ( Function_22572e0(*(char **)(v3 + 836), v3 + 808) )
  {
LABEL_81:
    if ( v7 )
    {
      v24 = *(char **)(v3 + 836);
      v25 = (uchar *)((int (__fastcall *)(int))dword_21D7880[0])(v7 + 1);
      *(uint *)(v3 + 836) = v25;
      if ( v25 )
      {
        memcpy(v25, v24, v7);
        *(uchar *)(*(uint *)(v3 + 836) + v7) = 0;
      }
    }
    else
    {
      *(uint *)(v3 + 836) = 0;
    }
    if ( v5 )
    {
      v26 = *(char **)(v3 + 828);
      v27 = (uchar *)((int (__fastcall *)(int))dword_21D7880[0])(v5 + 1);
      *(uint *)(v3 + 828) = v27;
      if ( v27 )
      {
        memcpy(v27, v26, v5);
        *(uchar *)(*(uint *)(v3 + 828) + v5) = 0;
      }
    }
    else
    {
      *(uint *)(v3 + 828) = 0;
    }
    if ( v6 )
    {
      v28 = *(char **)(v3 + 832);
      v29 = (uchar *)((int (__fastcall *)(int))dword_21D7880[0])(v6 + 1);
      *(uint *)(v3 + 832) = v29;
      if ( v29 )
      {
        memcpy(v29, v28, v6);
        *(uchar *)(*(uint *)(v3 + 832) + v6) = 0;
      }
    }
    else
    {
      *(uint *)(v3 + 832) = 0;
    }
    return 1;
  }
  if ( *(uint *)(v3 + 808) )
  {
    ((void (*)(void))dword_21D78B0[0])();
    *(uint *)(v3 + 808) = 0;
  }
  if ( *(uint *)(v3 + 812) )
  {
    ((void (*)(void))dword_21D78B0[0])();
    *(uint *)(v3 + 812) = 0;
  }
  if ( *(uint *)(v3 + 816) )
  {
    ((void (*)(void))dword_21D78B0[0])();
    *(uint *)(v3 + 816) = 0;
  }
  if ( *(uint *)(v3 + 820) )
  {
    ((void (*)(void))dword_21D78B0[0])();
    *(uint *)(v3 + 820) = 0;
  }
  if ( *(uint *)(v3 + 824) )
  {
    ((void (*)(void))dword_21D78B0[0])();
    *(uint *)(v3 + 824) = 0;
  }
  return 0;
}

//----- (02257864) --------------------------------------------------------
int __fastcall Function_2257864(int a1)
{
  uint *v1;
  char *v2;
  int v3;
  bool v4;
  char *v5;
  char *v6;
  int v7;
  bool v8;
  char v9;
  int i;
  int result;

  v1 = (uint *)a1;
  v2 = *(char **)(a1 + 264);
  if ( !*v2 )
    return 0;
  while ( 1 )
  {
    v3 = *v2;
    v4 = v3 == 13;
    if ( v3 != 13 )
      v4 = v3 == 10;
    if ( !v4 )
      break;
    ++v2;
  }
  if ( !*v2 )
    return 0;
  v5 = v2;
  v6 = v2;
  while ( 1 )
  {
    v7 = *v5;
    v8 = v7 == 10;
    if ( v7 != 10 )
      v8 = v7 == 13;
    if ( v8 || !*v5 )
      break;
    if ( v7 != 32 )
      v6 = v5;
    ++v5;
  }
  if ( !*v5 )
    return 0;
  v9 = v6[1];
  v6[1] = 0;
  if ( v1[202] )
  {
    ((void (*)(void))dword_21D78B0[0])();
    v1[202] = 0;
  }
  if ( v1[203] )
  {
    ((void (*)(void))dword_21D78B0[0])();
    v1[203] = 0;
  }
  if ( v1[204] )
  {
    ((void (*)(void))dword_21D78B0[0])();
    v1[204] = 0;
  }
  if ( v1[205] )
  {
    ((void (*)(void))dword_21D78B0[0])();
    v1[205] = 0;
  }
  if ( v1[206] )
  {
    ((void (*)(void))dword_21D78B0[0])();
    v1[206] = 0;
  }
  if ( v1[207] )
  {
    ((void (*)(void))dword_21D78B0[0])();
    v1[207] = 0;
  }
  if ( v1[208] )
  {
    ((void (*)(void))dword_21D78B0[0])();
    v1[208] = 0;
  }
  if ( v1[209] )
  {
    ((void (*)(void))dword_21D78B0[0])();
    v1[209] = 0;
  }
  for ( i = 0; i < v1[211]; ++i )
  {
    if ( *(uint *)(v1[210] + 4 * i) )
    {
      ((void (*)(void))dword_21D78B0[0])();
      *(uint *)(v1[210] + 4 * i) = 0;
    }
  }
  if ( v1[210] )
  {
    ((void (*)(void))dword_21D78B0[0])();
    v1[210] = 0;
  }
  v1[211] = 0;
  Call_FillMemWithValue(v1 + 202, 0, 0x28u);
  if ( Function_2257424((int)v1, v2) )
  {
    v6[1] = v9;
    Function_2255cb0((int)(v1 + 66), (int)&v5[-v1[66]]);
    result = 1;
  }
  else
  {
    Call_FillMemWithValue(v1 + 202, 0, 0x28u);
    result = 0;
  }
  return result;
}

//----- (02257A58) --------------------------------------------------------
int __fastcall Function_2257a58(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( !a1 )
    Function_20d407c((int)"(sock) != NULL", (int)"chatSocket.c", (int)"ciSocketRecv");
  if ( v1[1] > 2u )
    Function_20d407c(
      (int)"((sock)->connectState == ciNotConnected) || ((sock)->connectState == ciConnected) || ((sock)->connectState =="
           " ciDisconnected)",
      (int)"chatSocket.c",
      (int)"ciSocketRecv");
  if ( v1 == (uint *)-264 )
    Function_20d407c((int)"(&(sock)->inputQueue) != NULL", (int)"chatSocket.c", (int)"ciSocketRecv");
  if ( v1[68] < 0 )
    Function_20d407c((int)"(&(sock)->inputQueue)->size >= 0", (int)"chatSocket.c", (int)"ciSocketRecv");
  if ( (v1[68] >> 31) + __ROR4__((v1[68] << 19) - (v1[68] >> 31), 19) )
    Function_20d407c((int)"((&(sock)->inputQueue)->size % BUFFER_INC) == 0", (int)"chatSocket.c", (int)"ciSocketRecv");
  if ( v1[67] < 0 )
    Function_20d407c((int)"(&(sock)->inputQueue)->length >= 0", (int)"chatSocket.c", (int)"ciSocketRecv");
  if ( v1[67] > v1[68] )
    Function_20d407c(
      (int)"(&(sock)->inputQueue)->length <= (&(sock)->inputQueue)->size",
      (int)"chatSocket.c",
      (int)"ciSocketRecv");
  if ( v1 == (uint *)-276 )
    Function_20d407c((int)"(&(sock)->outputQueue) != NULL", (int)"chatSocket.c", (int)"ciSocketRecv");
  if ( v1[71] < 0 )
    Function_20d407c((int)"(&(sock)->outputQueue)->size >= 0", (int)"chatSocket.c", (int)"ciSocketRecv");
  if ( (v1[71] >> 31) + __ROR4__((v1[71] << 19) - (v1[71] >> 31), 19) )
    Function_20d407c((int)"((&(sock)->outputQueue)->size % BUFFER_INC) == 0", (int)"chatSocket.c", (int)"ciSocketRecv");
  if ( v1[70] < 0 )
    Function_20d407c((int)"(&(sock)->outputQueue)->length >= 0", (int)"chatSocket.c", (int)"ciSocketRecv");
  if ( v1[70] > v1[71] )
    Function_20d407c(
      (int)"(&(sock)->outputQueue)->length <= (&(sock)->outputQueue)->size",
      (int)"chatSocket.c",
      (int)"ciSocketRecv");
  if ( !v1[67] )
    return 0;
  if ( Function_2257864((int)v1) )
    return (int)(v1 + 202);
  return 0;
}

//----- (02257C4C) --------------------------------------------------------
int __fastcall Function_2257c4c(uint a1)
{
  int v1;
  ll v2;

  v1 = 3;
  if ( a1 % 3 )
    v1 = 1;
  v2 = 2863311531LL * a1;
  if ( !(a1 % 3) )
    v1 = 0;
  return 4 * (v1 + (HIDWORD(v2) >> 1));
}

//----- (02257C84) --------------------------------------------------------
int __fastcall Function_2257c84(int a1)
{
  int result;

  result = a1 | (a1 << 16);
  dword_225B6C0[1038] = result;
  return result;
}

//----- (02257C98) --------------------------------------------------------
int Function_2257c98()
{
  int v0;

  u32_div_f(0, 0);
  dword_225B6C0[1038] = v0;
  return (v0 >> 16) & 0xFF;
}

//----- (02257CD8) --------------------------------------------------------
int __fastcall Function_2257cd8(char *a1, char *a2, int a3, int a4, uint a5, int a6)
{
  char *v6;
  char *v7;
  int v8;
  int v9;
  int result;
  int v11;
  int v12;
  int v13;
  char *v14;
  int v15;
  char v16;
  char v17;

  dword_225B538 = 0;
  v6 = a1;
  v7 = a2;
  v8 = a3;
  v9 = a4;
  if ( (uint)strlen(a1) >= 0x20 )
    return 0;
  if ( strlen(v7) != 20 )
    return 0;
  if ( (v8 - 5) & 7 )
    return 0;
  if ( !(v9 & 1) )
    return 0;
  v11 = 0;
  v12 = 0;
  do
  {
    v13 = (a5 >> v12++) & 1;
    if ( v13 == 1 )
      ++v11;
  }
  while ( v12 < 32 );
  if ( v11 != 1 )
    return 0;
  strncpy(dword_225B53C, v6, 32);
  v14 = &byte_225B55C;
  v15 = 10;
  do
  {
    v16 = *v7;
    v17 = v7[1];
    v7 += 2;
    --v15;
    *v14 = v16;
    v14[1] = v17;
    v14 += 2;
  }
  while ( v15 );
  dword_225B570 = v8;
  dword_225B574 = v9;
  dword_225B578 = a5;
  dword_225B57C = a6;
  result = 1;
  dword_225B538 = 1;
  return result;
}

//----- (02257DD4) --------------------------------------------------------
int __fastcall Function_2257dd4(int a1, int a2)
{
  const char *v2;
  char *v3;
  int v4;
  int v5;
  int v6;
  char v7;
  char v8;
  int result;
  int v10;
  int v11;
  int v12;
  char *v13;
  char *v14;
  int v15;
  char v16;
  char v17;
  int v18;
  char *v19;
  char *v20;
  int v21;
  char v22;
  char v23;
  int v24;
  int v25;
  char *v26;
  int v27;
  int v28;
  char v29;
  char v30[17];
  char v31;
  char v32[40];
  char v33;

  v2 = "0123456789abcdef";
  v3 = v30;
  v4 = a1;
  v5 = a2;
  v6 = 8;
  do
  {
    v7 = *v2;
    v8 = v2[1];
    v2 += 2;
    *v3 = v7;
    v3[1] = v8;
    v3 += 2;
    --v6;
  }
  while ( v6 );
  *v3 = *v2;
  if ( v5 <= 40 )
    return 0;
  v10 = Function_2257c4c(v5 - 40);
  v11 = ((int (__fastcall *)(int, int))dword_21D7780[0])(7, v10 + 41);
  v12 = v11;
  if ( !v11 )
    return 0;
  v13 = &byte_225B55C;
  v14 = (char *)v11;
  v15 = 10;
  do
  {
    v16 = *v13;
    v17 = v13[1];
    v13 += 2;
    --v15;
    *v14 = v16;
    v14[1] = v17;
    v14 += 2;
  }
  while ( v15 );
  ((void (__fastcall *)(int, int, int, int))dword_21EAF50[104])(v4, v12 + 20, v5 - 40, 2);
  v18 = Function_2257c4c(v5 - 40);
  v19 = &byte_225B55C;
  v20 = (char *)(v12 + 20 + v18);
  v21 = 10;
  do
  {
    v22 = *v19;
    v23 = v19[1];
    v19 += 2;
    --v21;
    *v20 = v22;
    v20[1] = v23;
    v20 += 2;
  }
  while ( v21 );
  v24 = Function_2257c4c(v5 - 40);
  Function_20d3068((int)&v31, v12, v24 + 40);
  ((void (__fastcall *)(int, int, uint))dword_21D77C4[0])(7, v12, 0);
  v25 = 0;
  v26 = &v31;
  v27 = 0;
  do
  {
    v28 = (uchar)*v26++;
    ++v25;
    v29 = v30[v28 & 0xF];
    v32[v27] = v30[v28 >> 4];
    v32[v27 + 1] = v29;
    v27 += 2;
  }
  while ( v25 < 20 );
  v33 = 0;
  if ( Function_20d8e28((uchar *)(v4 + v5 - 40), (uchar *)v32, 40) )
    return 0;
  result = 1;
  dword_225B594 = v4;
  dword_225B598 = v5 - 40;
  return result;
}

//----- (02257F84) --------------------------------------------------------
void Function_2257f84()
{
  ;
}

//----- (02257F88) --------------------------------------------------------
int __fastcall Function_2257f88(int result, int a2, int a3, int a4)
{
  int v25;

  v25 = a4;
  dword_225B534 = -1;
  if ( a3 )
    result = Function_22584b8(result);
  return result;
}

//----- (022581F0) --------------------------------------------------------
int __fastcall Function_22581f0(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uchar *v11;
  int i;
  char v14;
  int v15;
  int j;
  char v17;
  int v18;
  int k;
  int v20;
  int l;
  char v22;
  int v23;
  char v24;

  v5 = a3;
  v6 = a5 + a3;
  v7 = a1;
  v8 = a2;
  v9 = a4;
  v10 = 0;
  v11 = (uchar *)((int (__fastcall *)(int, int))dword_21D7780[0])(7, a5 + a3 + 4);
  if ( !v11 )
    return 2;
  for ( i = 0; i < v5; *(uchar *)(v15 + 4) = v14 )
  {
    v14 = *(uchar *)(v8 + i);
    v15 = (int)&v11[i++];
  }
  for ( j = 0; j < a5; *(uchar *)(v18 + 4) = v17 )
  {
    v17 = *(uchar *)(v9 + j);
    v18 = (int)&v11[v5 + j++];
  }
  for ( k = 0; k < v6; v10 += v20 )
    v20 = (uchar)v11[k++ + 4];
  Function_2257c84(v10);
  for ( l = 0; l < v6; *(uchar *)(v23 + 4) = v24 ^ v22 )
  {
    v22 = Function_2257c98();
    v23 = (int)&v11[l];
    v24 = v11[l++ + 4];
  }
  *v11 = HIBYTE(v10);
  v11[1] = BYTE2(v10);
  v11[2] = BYTE1(v10);
  v11[3] = v10;
  ((void (__fastcall *)(uchar *, int, int, int))dword_21EAF50[104])(v11, v7, v6 + 4, 2);
  ((void (__fastcall *)(int, uchar *, uint))dword_21D77C4[0])(7, v11, 0);
  *(uchar *)(v7 + Function_2257c4c(v6 + 4)) = 0;
  return 0;
}

//----- (02258338) --------------------------------------------------------
int *__fastcall Function_2258338(int a1, char *a2, int a3, int a4)
{
  char *v4;
  uchar *v5;
  int v6;
  int v7;
  int v8;
  uchar *v9;
  int v10;
  int v11;
  int v12;
  uchar *v13;
  int v14;
  uint v15;
  uint v16;
  uchar *v17;
  int v18;
  int v19;
  int *result;
  char v21;
  char v22;
  char v23;
  char v24;
  char v25;
  char v26;
  char v27;
  char v28;
  char v29;
  char v30;
  char v31;
  int v32;

  v32 = a4;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  dword_225B534 = -1;
  dword_225B580 = 0;
  dword_225B584 = 0;
  dword_225B588 = 0;
  dword_225B58C = 0;
  v4 = a2;
  dword_225B590 = 0;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      dword_225B528 = (int)"http://sdkdev.gamespy.com/games/";
    }
    else if ( a1 == 2 )
    {
      dword_225B528 = (int)"http://ishikawa.servebeer.com/games/";
    }
  }
  else
  {
    dword_225B528 = (int)"http://gamestats2.gs.nintendowifi.net/";
  }
  strncpy(&v30, a2, 20);
  v31 = 0;
  v5 = strncpy(&v21, v4 + 20, 8);
  Function_20dacac((int)v5, 0, 16, v6);
  v8 = v7;
  v9 = strncpy(&v21, v4 + 28, 8);
  Function_20dacac((int)v9, 0, 16, v10);
  v12 = v11;
  v13 = strncpy(&v21, v4 + 36, 8);
  Function_20dacac((int)v13, 0, 16, v14);
  v16 = v15;
  v17 = strncpy(&v21, v4 + 44, 8);
  Function_20dacac((int)v17, 0, 16, v18);
  Function_2257cd8(v4 + 52, &v30, v8, v12, v16, v19);
  ((void (__fastcall *)(uint))dword_21E2064[3402])(0);
  result = &dword_225B52C;
  dword_225B52C = 3;
  dword_225B530 = 1;
  return result;
}

//----- (022584B8) --------------------------------------------------------
int *Function_22584b8()
{
  int *result;

  if ( !((int (*)(void))dword_21D76E8[8])() )
    ((void (__fastcall *)(int, int))dword_21D76E8[15])(6, -90040);
  result = &dword_225B52C;
  dword_225B52C = 1;
  return result;
}

//----- (022584EC) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x22585D8 for case 0"

//----- (02258508) --------------------------------------------------------
void Function_2258508()
{
  JUMPOUT(&loc_22585D8);
}

//----- (0225850C) --------------------------------------------------------
void Function_225850c()
{
  JUMPOUT(&loc_225852C);
}

//----- (02258510) --------------------------------------------------------
void Function_2258510()
{
  JUMPOUT(&loc_22585D8);
}

//----- (02258514) --------------------------------------------------------
void Function_2258514()
{
  JUMPOUT(&loc_22585D8);
}

//----- (02258518) --------------------------------------------------------
void Function_2258518()
{
  JUMPOUT(&loc_2258534);
}

//----- (0225851C) --------------------------------------------------------
void Function_225851c()
{
  JUMPOUT(&loc_2258574);
}

//----- (02258520) --------------------------------------------------------
void Function_2258520()
{
  JUMPOUT(&loc_2258588);
}

//----- (02258524) --------------------------------------------------------
void Function_2258524()
{
  JUMPOUT(&loc_22585C8);
}

//----- (02258528) --------------------------------------------------------
void Function_2258528()
{
  int v0;

  JUMPOUT(__CS__, v0);
}

//----- (022585F4) --------------------------------------------------------
int *Function_22585f4()
{
  int *result;

  ((void (__fastcall *)(uint, uint))dword_21E2064[3411])(0, 0);
  result = &dword_225B52C;
  dword_225B52C = 2;
  dword_225B530 = 0;
  return result;
}

//----- (02258664) --------------------------------------------------------
int __fastcall Function_2258664(uint *a1)
{
  *a1 = 0;
  return 0;
}

//----- (0225867C) --------------------------------------------------------
int Function_225867c()
{
  return 3;
}

//----- (022588D0) --------------------------------------------------------
int Function_22588d0()
{
  return Function_225867c();
}

//----- (022588F4) --------------------------------------------------------
int Function_22588f4()
{
  return Function_225867c();
}

