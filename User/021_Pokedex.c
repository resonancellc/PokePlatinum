//----- (021D0D80) --------------------------------------------------------
int __fastcall Pokedex_Init(int a1, int a2, int a3, int a4)
{
  int v4;
  uchar *v5;
  int *v6;
  int *v7;
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

  v18 = a4;
  v4 = a1;
  Function_2004550(0x36u, 0);
  Function_2017fc8(3, 37, 0x40000);
  v5 = (uchar *)MallocSomeDataAndStorePtrInOverlayData1c(v4, 4, 0x25u);
  if ( !v5 )
    ErrorHandler();
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  Function_201dbec(8, 0x25u);
  v6 = (int *)LoadPtrToOverWorldDataIn18(v4);
  v7 = v6;
  v8 = Function_202756c((uint *)*v6, 487, 0);
  Function_2098988(v8);
  SetMainLoopFunctionCall((int)Function_21d0f04, (int)v5);
  Function_20177a4();
  Function_201e3d8();
  if ( Function_201e450(4u) != 1 )
    ErrorHandler();
  Function_21d12b0(37);
  v10 = *v7;
  v11 = v7[1];
  v12 = v7[2];
  v13 = v7[3];
  v16 = v7[6];
  v14 = v7[4];
  v15 = v7[5];
  v17 = v7[7];
  *(uint *)v5 = Function_21d0f60(37, &v10);
  Function_200544c(1, 42);
  return 1;
}

//----- (021D0E3C) --------------------------------------------------------
int __fastcall Pokedex_Loop(int a1, uint *a2, int a3, int a4, int a5, int a6, int a7, int (__fastcall *a8)(int))
{
  uint *v8;
  uint *v9;
  uint *v10;
  int result;

  v8 = a2;
  v9 = (uint *)LoadOverlayData1c(a1);
  v10 = v9;
  switch ( (uchar)*v8 )
  {
    case 0u:
      Function_21d0f18();
      Function_200ab4c(-16, 63, 3);
      ++*v8;
      goto LABEL_8;
    case 1u:
      if ( Function_21d10b8(*v9) == 1 )
      {
        *v10 = 0;
        ++*v8;
      }
      goto LABEL_8;
    case 2u:
      Function_21d0f38();
      ++*v8;
      goto LABEL_8;
    case 3u:
      if ( !Function_21d0f58() )
        goto LABEL_8;
      Function_200f32c(0);
      Function_200f32c(1);
      REG_BLDCNT = 0;
      REG_BLDCNT_SUB = 0;
      result = a8(1);
      break;
    default:
LABEL_8:
      result = 0;
      break;
  }
  return result;
}

//----- (021D0EC8) --------------------------------------------------------
int __fastcall Pokedex_End(int a1)
{
  int v1;
  uint v2;

  v1 = a1;
  LoadOverlayData1c(a1);
  SetMainLoopFunctionCall(0, 0);
  v2 = Function_201e530();
  if ( v2 != 1 )
    v2 = ErrorHandler();
  Function_21d12c4(v2);
  Function_201dc3c();
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(37);
  Function_200544c(1, 127);
  return 1;
}

//----- (021D0F04) --------------------------------------------------------
int __fastcall Function_21d0f04(uint *a1)
{
  if ( *a1 )
    Function_21d12d8();
  return Function_201dcac();
}

//----- (021D0F18) --------------------------------------------------------
int *Function_21d0f18()
{
  return Function_200f174(0, 1, 1, 0, 6, 1, 37);
}

//----- (021D0F38) --------------------------------------------------------
int *Function_21d0f38()
{
  return Function_200f174(0, 0, 0, 0, 6, 1, 37);
}

//----- (021D0F58) --------------------------------------------------------
BOOL Function_21d0f58()
{
  return Function_200f2ac();
}

//----- (021D0F60) --------------------------------------------------------
int *__fastcall Function_21d0f60(uint a1, int *a2)
{
  int *v2;
  uint v3;
  int *v4;
  int *v5;
  int v6;
  int *v7;
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

  v2 = a2;
  v3 = a1;
  v4 = (int *)malloc(a1, 7440);
  if ( !v4 )
    ErrorHandler();
  Call_FillMemWithValue(v4, 0, 0x1D10u);
  v4[1] = v3;
  v4[2] = v2[7];
  v4[1667] = Function_21d423c(v3);
  v4[1668] = Function_21d423c(v3);
  v4[1669] = Function_21d423c(v3);
  v4[1670] = Function_21d423c(v3);
  v4[1856] = Function_21d3fe0(v3);
  v4[1857] = Function_21d3fe0(v3);
  v4[1858] = Function_21d3fe0(v3);
  v4[1859] = Function_21d3fe0(v3);
  v12 = *v2;
  v13 = v2[1];
  v14 = v2[2];
  v15 = v2[3];
  v16 = v2[4];
  v17 = v2[5];
  v18 = v2[6];
  v19 = Function_209ace4(v2[7]);
  v20 = Function_209acec(v2[7]);
  Function_21d3208(v4 + 3, &v12, v3);
  Function_21d1fa4(v4 + 1503, v3);
  v11 = 0;
  v5 = &dword_21E9B74;
  v6 = (int)(v4 + 1676);
  do
  {
    if ( *v5 )
      ((void (__fastcall *)(int, int *, uint))*v5)(v6, v4, v3);
    ++v5;
    v6 += 40;
    ++v11;
  }
  while ( v11 < 10 );
  v10 = 0;
  v7 = &dword_21E9B34;
  v8 = (int)(v4 + 1776);
  do
  {
    if ( *v7 )
      ((void (__fastcall *)(int, int *, uint))*v7)(v8, v4, v3);
    ++v7;
    v8 += 40;
    ++v10;
  }
  while ( v10 < 8 );
  Function_21d47f0(v3, v4 + 1671, v4, 1);
  Function_21d1eec(v4);
  return v4;
}

//----- (021D10B8) --------------------------------------------------------
int __fastcall Function_21d10b8(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  Function_21d3960(v1 + 3);
  if ( Function_21d42d4(v1[1669])
    || Function_21d42d4(v1[1667])
    || Function_21d42d4(v1[1670])
    || Function_21d42d4(v1[1668]) )
  {
    Function_21d4194(v1[1858], 1);
    Function_21d4194(v1[1859], 1);
    Function_21d4194(v1[1856], 1);
    Function_21d4194(v1[1857], 1);
  }
  else
  {
    Function_21d4194(v1[1858], 0);
    Function_21d4194(v1[1859], 0);
    Function_21d4194(v1[1856], 0);
    Function_21d4194(v1[1857], 0);
  }
  Function_21d4078(v1[1858]);
  Function_21d4078(v1[1859]);
  Function_21d4078(v1[1856]);
  Function_21d4078(v1[1857]);
  Function_21d4100(v1[1858]);
  Function_21d4100(v1[1859]);
  Function_21d4100(v1[1856]);
  Function_21d4100(v1[1857]);
  if ( !Function_21d42d4(v1[1667]) && !Function_21d42d4(v1[1670]) && !Function_21d42d4(v1[1668]) )
    Function_21d4284(v1[1669], v1[1665]);
  if ( !Function_21d42d4(v1[1669]) && !Function_21d42d4(v1[1670]) && !Function_21d42d4(v1[1668]) )
    Function_21d4284(v1[1667], v1[1663]);
  if ( !Function_21d42d4(v1[1669]) && !Function_21d42d4(v1[1667]) && !Function_21d42d4(v1[1668]) )
    Function_21d4284(v1[1670], v1[1666]);
  if ( !Function_21d42d4(v1[1669]) && !Function_21d42d4(v1[1667]) && !Function_21d42d4(v1[1670]) )
    Function_21d4284(v1[1668], v1[1664]);
  Call_G3X_Reset();
  Function_21d2124(v1 + 1503);
  Function_20241bc(0, 0);
  result = 0;
  v1[1665] = 0;
  v1[1666] = 0;
  v1[1663] = 0;
  v1[1664] = 0;
  if ( *v1 == 1 )
  {
    Function_21d1d08(v1);
    result = 1;
  }
  return result;
}

//----- (021D12B0) --------------------------------------------------------
int __fastcall Function_21d12b0(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  Function_21d1e74();
  v2 = Function_21d1e94(v1);
  return Function_21d1f10(v2);
}

//----- (021D12C4) --------------------------------------------------------
int Function_21d12c4()
{
  int *v0;

  Function_200a878();
  Function_201e958();
  v0 = Function_201f8b4();
  return Function_21d1f84(v0);
}

//----- (021D12D8) --------------------------------------------------------
int __fastcall Function_21d12d8(int a1)
{
  Function_21d214c(a1 + 6012);
  return Function_200a858();
}

//----- (021D12EC) --------------------------------------------------------
int __fastcall Function_21d12ec(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return *(uint *)(v1 + 7424);
}

//----- (021D1300) --------------------------------------------------------
int __fastcall Function_21d1300(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return *(uint *)(v1 + 7428);
}

//----- (021D1314) --------------------------------------------------------
int __fastcall Function_21d1314(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return *(uint *)(v1 + 7432);
}

//----- (021D1328) --------------------------------------------------------
int __fastcall Function_21d1328(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return *(uint *)(v1 + 7436);
}

//----- (021D133C) --------------------------------------------------------
int __fastcall Function_21d133c(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return *(uint *)(v1 + 6668);
}

//----- (021D1350) --------------------------------------------------------
int __fastcall Function_21d1350(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return *(uint *)(v1 + 6672);
}

//----- (021D1364) --------------------------------------------------------
int __fastcall Function_21d1364(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return *(uint *)(v1 + 6676);
}

//----- (021D1378) --------------------------------------------------------
int __fastcall Function_21d1378(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return *(uint *)(v1 + 6680);
}

//----- (021D138C) --------------------------------------------------------
int __fastcall Function_21d138c(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return v1 + 6652;
}

//----- (021D13A0) --------------------------------------------------------
int __fastcall Function_21d13a0(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return v1 + 6656;
}

//----- (021D13B4) --------------------------------------------------------
int __fastcall Function_21d13b4(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return v1 + 6660;
}

//----- (021D13C8) --------------------------------------------------------
int __fastcall Function_21d13c8(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return v1 + 6664;
}

//----- (021D13DC) --------------------------------------------------------
int __fastcall Function_21d13dc(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return v1;
}

//----- (021D13EC) --------------------------------------------------------
int __fastcall Function_21d13ec(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return v1 + 12;
}

//----- (021D13FC) --------------------------------------------------------
int __fastcall Function_21d13fc(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return v1 + 6012;
}

//----- (021D1410) --------------------------------------------------------
int __fastcall Function_21d1410(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 10 )
    ErrorHandler();
  return v3 + 6704 + 40 * v2;
}

//----- (021D1430) --------------------------------------------------------
int __fastcall Function_21d1430(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 8 )
    ErrorHandler();
  return v3 + 7104 + 40 * v2;
}

//----- (021D144C) --------------------------------------------------------
int __fastcall Function_21d144c(int result, char a2)
{
  int v2;

  v2 = result;
  switch ( a2 )
  {
    case 0:
      result = Function_2021e50(result, 1u);
      break;
    case 1:
      result = Function_2021e50(result, 3u);
      break;
    case 2:
      result = Function_2021e50(result, 2u);
      break;
    case 3:
    case 4:
      result = Function_2021e74(result);
      if ( result )
        result = Function_2021e2c(v2, -8192);
      break;
    default:
      return result;
  }
  return result;
}

//----- (021D1498) --------------------------------------------------------
uint __fastcall Function_21d1498(int a1, int *a2, int a3, int a4)
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

  v13 = a4;
  v4 = a2;
  v5 = a3;
  result = Function_2021e74(a1);
  switch ( (uchar)result )
  {
    case 0:
      Function_20129a4(*v4, &v12, &v11);
      v11 = v5;
      result = Function_20128c4((uint *)*v4, v12, v5, v7);
      break;
    case 1:
      Function_20129a4(*v4, &v12, &v11);
      v11 = v5 - 2;
      result = Function_20128c4((uint *)*v4, v12, v5 - 2, v8);
      break;
    case 2:
      Function_20129a4(*v4, &v12, &v11);
      v11 = v5 - 4;
      result = Function_20128c4((uint *)*v4, v12, v5 - 4, v9);
      break;
    case 3:
      Function_20129a4(*v4, &v12, &v11);
      v11 = v5 - 2;
      result = Function_20128c4((uint *)*v4, v12, v5 - 2, v10);
      break;
    default:
      return result;
  }
  return result;
}

//----- (021D1524) --------------------------------------------------------
int __fastcall Function_21d1524(int a1, int *a2, int a3, int a4, char a5)
{
  int v5;
  int *v6;
  char v7;
  uint v8;
  bool v9;
  uchar v10;
  uint *v11;
  int result;

  v5 = a1;
  v6 = a2;
  v7 = a4;
  Function_21d1498(a1, a2, a3, a4);
  v8 = Function_2021e74(v5);
  v10 = __OFSUB__(v8, 2);
  v9 = (int)(v8 - 2) < 0;
  v11 = (uint *)*v6;
  if ( v9 ^ v10 )
    result = Function_2012ac0(v11, v7);
  else
    result = Function_2012ac0(v11, a5);
  return result;
}

//----- (021D154C) --------------------------------------------------------
uchar *__fastcall Function_21d154c(uchar *result, char a2, char a3, char a4, char a5)
{
  *result = a2;
  result[1] = a3;
  result[2] = a4;
  result[3] = a5;
  return result;
}

//----- (021D1558) --------------------------------------------------------
uint *__fastcall Function_21d1558(uint *result, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  *result = a2;
  result[2] = a3;
  result[1] = a4;
  result[3] = a5;
  result[5] = a6 - a5;
  result[4] = a7;
  result[6] = a8 - a7;
  result[8] = a9;
  result[7] = 0;
  return result;
}

//----- (021D157C) --------------------------------------------------------
int __fastcall Function_21d157c(int *a1)
{
  int *v1;
  int v2;
  int v3;
  uint v4;
  uint v5;
  int v6;
  int v7;

  v1 = a1;
  if ( a1[7] > a1[8] )
    return 1;
  Function_2019cb8(*a1, a1[2] & 0xFF, 0, 0, 0, 0x20u, 0x18u, 0x10u);
  v2 = v1[7];
  v3 = v1[8];
  v4 = s32_div_f(v1[5] * v2, v1[8]);
  v5 = s32_div_f(v1[6] * v2, v3);
  v6 = v4 + v1[3];
  v7 = v5 + v1[4];
  if ( v6 > 0 )
    Function_20198e8(*v1, v1[2] & 0xFF, 0, 0, 0x20u, v6, v1[1] + 12, 0, 32 - v6, 0x20u, 0x20u);
  if ( 32 - v7 > 0 )
    Function_20198e8(*v1, v1[2] & 0xFF, 0, (uchar)(32 - v7), 0x20u, v7, v1[1] + 12, 0, 0, 0x20u, 0x20u);
  Function_201c3c0(*v1, v1[2]);
  ++v1[7];
  return 0;
}

//----- (021D1650) --------------------------------------------------------
int __fastcall Function_21d1650(int a1, int a2, int a3, uint a4)
{
  int v4;
  int v5;
  uint v6;
  ushort *v7;
  int v8;
  int v9;
  int v11;

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v11 = a3;
  if ( a2 <= 0 )
  {
    v7 = (ushort *)Function_21d1ce0(100, a4);
  }
  else
  {
    v7 = (ushort *)Function_2023790(4, a4);
    Function_20238a0(v7, v4, 3, 2, 1);
  }
  v8 = Function_21d561c(v11, 2, v6);
  Function_201d78c(v5, 2);
  Function_201d78c(v5, 2);
  Function_20237bc_FreeMsg((int)v7, v9);
  return Function_21d5600(v8);
}

//----- (021D16D8) --------------------------------------------------------
int __fastcall Function_21d16d8(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;

  v4 = a1;
  v5 = a3;
  v6 = a4;
  if ( Function_21d36d8(a2) )
    result = Function_21d170c(*(uint *)(v4 + 336), v5, v6);
  else
    result = Function_21d172c(*(uint *)(v4 + 336), v5, v6);
  return result;
}

//----- (021D170C) --------------------------------------------------------
int __fastcall Function_21d170c(int a1, uint a2, int a3)
{
  uint v3;
  int v4;
  int v5;

  v3 = a2;
  v4 = a3;
  v5 = Function_21d4d6c(a1, 15, 2);
  Function_21d1650(v5, v4, v4, v3);
  return v5;
}

//----- (021D172C) --------------------------------------------------------
int __fastcall Function_21d172c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint v6;
  int v7;
  int v8;

  v4 = a3;
  v5 = a1;
  v6 = a2;
  v7 = Function_20775a4((ushort)a3, a2, a3, a4);
  if ( v4 != 377 && v4 != 378 && v4 != 379 && v7 <= 0 )
    ErrorHandler();
  v8 = Function_21d4d6c(v5, 15, 2);
  Function_21d1650(v8, v7, v4, v6);
  return v8;
}

//----- (021D1778) --------------------------------------------------------
int __fastcall Function_21d1778(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int v7;
  int v8;
  int *v9;
  uint *v10;
  int *v11;
  int v12;
  int v13;
  int v15;
  int v16;
  uint *v17;
  int v18;
  int v19;
  int v20;
  int v21;
  uchar *v22;
  uint *v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;

  v6 = a2;
  v7 = a1;
  v8 = a4;
  v15 = a3;
  v16 = Function_21d36d8(a2);
  v9 = (int *)Function_21d37dc(v6, v8);
  v10 = (uint *)Function_21d22a8(v7);
  v17 = (uint *)Function_21d22c4(v7);
  v18 = a5;
  v19 = a6;
  Function_2021c50(v10, &v18);
  Function_2021cac((uint)v10, 1);
  if ( v9[1] == 2 )
  {
    v18 = a5 - 221184;
    v19 = a6;
    Function_2021c50(v17, &v18);
    Function_2021cac((uint)v17, 1);
  }
  else
  {
    Function_2021cac((uint)v17, 0);
  }
  v11 = (int *)Function_21d2344(v7, 1);
  v20 = *(uint *)(v7 + 336);
  v22 = Function_200a72c(v11, 0);
  v24 = -64;
  v25 = -8;
  v26 = 0;
  v27 = 0;
  v28 = 1;
  v23 = v10;
  v29 = v15;
  v12 = Function_21d16d8(v7, v6, v15, *v9);
  v13 = v12;
  v21 = v12;
  Function_21d22e0(v7, &v20, 0, *v9, v16);
  return Function_21d4da0(v13);
}

//----- (021D1848) --------------------------------------------------------
int __fastcall Function_21d1848(int a1)
{
  return Function_21d1858(a1 + 436);
}

//----- (021D1858) --------------------------------------------------------
uint *__fastcall Function_21d1858(uint **a1, int a2, int a3, int a4)
{
  uint **v4;
  int v5;
  int v6;
  int v7;
  uint *result;
  int v9;
  int v10;
  int v11;

  v11 = a4;
  v4 = a1;
  v9 = a2 << 12;
  v10 = a3 << 12;
  Function_2021c50(*a1, &v9);
  v9 -= 221184;
  Function_2021c50(v4[1], &v9);
  result = (uint *)*v4[2];
  if ( result )
    result = (uint *)Function_2012938(result, v5, v6, v7);
  return result;
}

//----- (021D1890) --------------------------------------------------------
int __fastcall Function_21d1890(int a1, int a2, int a3, int a4, int a5, int a6)
{
  if ( a3 > 422 )
  {
    if ( a3 > 479 )
    {
      if ( a3 > 487 )
      {
        if ( a3 == 492 )
          return Function_21d1bd8(a1, a2, a4, a5, a6, 0, 0);
      }
      else if ( a3 == 487 )
      {
        return Function_21d1c30(a1, a2, a4, a5, a6, 0, 0);
      }
    }
    else
    {
      if ( a3 >= 479 )
        return Function_21d1c88(a1, a2, a4, a5, a6, 0, 0);
      if ( a3 == 423 )
        return Function_21d1ac0(a1, a2, a4, a5, a6, 0, 0);
    }
  }
  else
  {
    if ( a3 >= 422 )
      return Function_21d1a78(a1, a2, a4, a5, a6, 0, 0);
    if ( a3 > 386 )
    {
      if ( a3 <= 413 && a3 >= 412 )
      {
        if ( a3 == 412 )
          return Function_21d1b08(a1, a2, a4, a5, a6, 0, 0);
        if ( a3 == 413 )
          return Function_21d1b4c(a1, a2, a4, a5, a6, 0, 0);
      }
    }
    else
    {
      if ( a3 >= 386 )
        return Function_21d1b94(a1, a2, a4, a5, a6, 0, 0);
      if ( a3 == 201 )
        return Function_21d1a34(a1, a2, a4, a5, a6, 0, 0);
    }
  }
  return Function_21d19d8(a1, a2, a3, a4, a5, a6, 0, 0);
}

//----- (021D19D8) --------------------------------------------------------
int __fastcall Function_21d19d8(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v14;

  v8 = a1;
  v9 = a3;
  v10 = a2;
  v11 = 0;
  v14 = a4;
  if ( a3 == 327 )
    v11 = Function_21d33f8(a2);
  v12 = Function_21d334c(v10, v9, a7);
  if ( v12 != -1 )
    Function_21d2188(v8, v9, v12, v14, 0, 0, v11, a5, a6, a8);
  return v12;
}

//----- (021D1A34) --------------------------------------------------------
int __fastcall Function_21d1a34(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7;
  int v8;
  int v9;
  int v10;

  v7 = a1;
  v8 = a3;
  v9 = a4;
  v10 = Function_21d335c(a2, a6);
  if ( v10 != -1 )
    Function_21d2188(v7, 201, 2, v8, 0, (uchar)v10, 0, v9, a5, a7);
  return v10;
}

//----- (021D1A78) --------------------------------------------------------
int __fastcall Function_21d1a78(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7;
  int v8;
  int v9;
  int v10;

  v7 = a1;
  v8 = a3;
  v9 = a4;
  v10 = Function_21d3374(a2, a6);
  if ( v10 != -1 )
    Function_21d2188(v7, 422, 0, v8, 0, (uchar)v10, 0, v9, a5, a7);
  return v10;
}

//----- (021D1AC0) --------------------------------------------------------
int __fastcall Function_21d1ac0(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7;
  int v8;
  int v9;
  int v10;

  v7 = a1;
  v8 = a3;
  v9 = a4;
  v10 = Function_21d338c(a2, a6);
  if ( v10 != -1 )
    Function_21d2188(v7, 423, 0, v8, 0, (uchar)v10, 0, v9, a5, a7);
  return v10;
}

//----- (021D1B08) --------------------------------------------------------
int __fastcall Function_21d1b08(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7;
  int v8;
  int v9;
  int v10;

  v7 = a1;
  v8 = a3;
  v9 = a4;
  v10 = Function_21d33a4(a2, a6);
  if ( v10 != -1 )
    Function_21d2188(v7, 412, 0, v8, 0, (uchar)v10, 0, v9, a5, a7);
  return v10;
}

//----- (021D1B4C) --------------------------------------------------------
int __fastcall Function_21d1b4c(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7;
  int v8;
  int v9;
  int v10;

  v7 = a1;
  v8 = a3;
  v9 = a4;
  v10 = Function_21d33bc(a2, a6);
  if ( v10 != -1 )
    Function_21d2188(v7, 413, 1, v8, 0, (uchar)v10, 0, v9, a5, a7);
  return v10;
}

//----- (021D1B94) --------------------------------------------------------
int __fastcall Function_21d1b94(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v7 = a1;
  v8 = a3;
  v9 = a4;
  v10 = Function_21d3404(a2, a6);
  v11 = v10;
  if ( v10 != 15 )
    Function_21d2188(v7, 386, 1, v8, 0, (uchar)v10, 0, v9, a5, a7);
  return v11;
}

//----- (021D1BD8) --------------------------------------------------------
int __fastcall Function_21d1bd8(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v7 = a2;
  v8 = a1;
  v9 = a3;
  v10 = a4;
  if ( Function_21d341c(a2, 492) <= a6 )
    return -1;
  v11 = Function_21d3410(v7, 492);
  Function_21d2188(v8, 492, 1, v9, 0, (uchar)v11, 0, v10, a5, a7);
  return v11;
}

//----- (021D1C30) --------------------------------------------------------
int __fastcall Function_21d1c30(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v7 = a2;
  v8 = a1;
  v9 = a3;
  v10 = a4;
  if ( Function_21d341c(a2, 487) <= a6 )
    return -1;
  v11 = Function_21d3410(v7, 487);
  Function_21d2188(v8, 487, 1, v9, 0, (uchar)v11, 0, v10, a5, a7);
  return v11;
}

//----- (021D1C88) --------------------------------------------------------
int __fastcall Function_21d1c88(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v7 = a2;
  v8 = a1;
  v9 = a3;
  v10 = a4;
  if ( Function_21d341c(a2, 479) <= a6 )
    return -1;
  v11 = Function_21d3410(v7, 479);
  Function_21d2188(v8, 479, 1, v9, 0, (uchar)v11, 0, v10, a5, a7);
  return v11;
}

//----- (021D1CE0) --------------------------------------------------------
ushort *__fastcall Function_21d1ce0(uint a1, uint a2)
{
  uint v2;
  ushort **v3;
  ushort *v4;

  v2 = a1;
  v3 = (ushort **)LoadFromMsgNARC(0, 26, 697, a2);
  v4 = Function_200b1ec_CallMsgDecrypt(v3, v2);
  Function_200b190((ushort *)v3);
  return v4;
}

//----- (021D1D08) --------------------------------------------------------
uint __fastcall Function_21d1d08(int *a1)
{
  int *v1;
  int *v2;
  int v3;
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v1 = a1;
  Function_21d4660(a1 + 1671);
  if ( !v1[1667] )
    ErrorHandler();
  free(v1[1667]);
  if ( !v1[1668] )
    ErrorHandler();
  free(v1[1668]);
  if ( !v1[1669] )
    ErrorHandler();
  free(v1[1669]);
  if ( !v1[1670] )
    ErrorHandler();
  free(v1[1670]);
  if ( !v1[1856] )
    ErrorHandler();
  free(v1[1856]);
  if ( !v1[1857] )
    ErrorHandler();
  free(v1[1857]);
  if ( !v1[1858] )
    ErrorHandler();
  free(v1[1858]);
  if ( !v1[1859] )
    ErrorHandler();
  free(v1[1859]);
  v2 = &dword_21E9B9C;
  v3 = 0;
  v4 = (int)(v1 + 1676);
  do
  {
    if ( *v2 )
      ((void (__fastcall *)(int))*v2)(v4);
    ++v3;
    ++v2;
    v4 += 40;
  }
  while ( v3 < 10 );
  v5 = &dword_21E9B54;
  v6 = 0;
  v7 = (int)(v1 + 1776);
  do
  {
    if ( *v5 )
      ((void (__fastcall *)(int))*v5)(v7);
    ++v6;
    ++v5;
    v7 += 40;
  }
  while ( v6 < 8 );
  v8 = Function_21d3440(v1 + 3);
  Function_209ace8((uint *)v1[2], v8);
  if ( Function_21d36a4(v1 + 3, 1) == 1 )
  {
    v9 = Function_21d3458(v1 + 3);
    Function_209acf0(v1[2], v9);
  }
  else
  {
    Function_209acf0(v1[2], 2);
  }
  Function_21d3320(v1 + 3);
  Function_21d2098(v1 + 1503);
  return free((int)v1);
}

//----- (021D1E74) --------------------------------------------------------
char *Function_21d1e74()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_21E9BC4;
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

//----- (021D1E94) --------------------------------------------------------
int __fastcall Function_21d1e94(uint a1)
{
  uint v1;
  int v3;
  int v4;
  int v5;
  uint v6;

  v1 = a1;
  Function_20a7944();
  Function_200a784(0, 128, 0, 32, 0, 0x80u, 0, 0x20u, v1);
  v3 = 32;
  v4 = 81920;
  v5 = 0x4000;
  v6 = v1;
  Function_201e88c(&v3, 2097168, 16);
  Function_201f834(32, v1);
  Function_201e994();
  return Function_201f8e4();
}

//----- (021D1EEC) --------------------------------------------------------
int __fastcall Function_21d1eec(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_21d426c(*(uint *)(a1 + 6668), a1 + 6684, 1);
  result = 6652;
  *(uint *)(v1 + 6652) = 1;
  return result;
}

//----- (021D1F10) --------------------------------------------------------
int *Function_21d1f10()
{
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
  return Function_20a5d88(0x4000, 1);
}

//----- (021D1F84) --------------------------------------------------------
int *Function_21d1f84()
{
  Function_20a5b1c();
  return Function_20a5f50();
}

//----- (021D1F90) --------------------------------------------------------
int Function_21d1f90()
{
  return 70;
}

//----- (021D1F94) --------------------------------------------------------
int __fastcall Function_21d1f94(int a1)
{
  return a1 + 3;
}

//----- (021D1F98) --------------------------------------------------------
int Function_21d1f98()
{
  return 0;
}

//----- (021D1F9C) --------------------------------------------------------
int Function_21d1f9c()
{
  return 2;
}

//----- (021D1FA0) --------------------------------------------------------
int Function_21d1fa0()
{
  return 1;
}

//----- (021D1FA4) --------------------------------------------------------
int __fastcall Function_21d1fa4(int *a1, uint a2, int a3, int a4)
{
  int *v4;
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

  v16 = a4;
  v4 = a1;
  v5 = a2;
  a1[159] = (int)LoadFromNARC_8(69, a2, a3, a4);
  *v4 = Function_2018340(v5);
  v13 = 0;
  v12 = 1;
  v14 = 1;
  v15 = 1;
  SetGraphicsModes(&v12);
  Function_21d2830(*v4, v5);
  Function_21d29d0(v4, v5);
  v4[79] = (int)Function_20095c4(128, (int)(v4 + 5), v5, v6);
  v4[80] = (int)Function_2009714(32, 0, v5);
  v4[81] = (int)Function_2009714(32, (int *)1, v5);
  v4[82] = (int)Function_2009714(32, (int *)2, v5);
  v4[83] = (int)Function_2009714(32, (int *)3, v5);
  Function_201ff0c(0x10u, 1);
  Function_201ff74(0x10u, 1);
  v8 = v4[79];
  v9 = *v4;
  v10 = 16;
  v11 = v5;
  v4[84] = Function_21d4c0c(&v8);
  Function_2002bb8(2, v5);
  Function_21d2a0c(v4, v5);
  Function_21d2ae8(v4, v5);
  Function_21d2c8c(v4, v5);
  Function_21d2e70(v4, v5);
  return Function_21d2f5c(v4, v5);
}

//----- (021D2098) --------------------------------------------------------
int *__fastcall Function_21d2098(int *a1)
{
  int *v1;

  v1 = a1;
  Function_21d2d4c();
  Function_21d2c10(v1);
  Function_21d300c(v1);
  Function_21d2f14(v1);
  Function_21d2a00(v1);
  Function_21d299c(*v1);
  free(*v1);
  Function_2021964((int *)v1[79]);
  Function_2009754((int *)v1[80]);
  Function_2009754((int *)v1[81]);
  Function_2009754((int *)v1[82]);
  Function_2009754((int *)v1[83]);
  Function_21d4c6c(v1[84]);
  Function_2002c60(2);
  Function_21d2ab4(v1);
  Call_FS_CloseFile((int *)v1[159]);
  return Call_FillMemWithValue(v1, 0, 0x280u);
}

//----- (021D2124) --------------------------------------------------------
int *__fastcall Function_21d2124(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = Function_20219f8(*(uint *)(a1 + 316));
  Function_20a73c0(v2, v3, v4, v5);
  Function_2007768(*(uint *)(v1 + 340));
  return Function_20150ec(*(uint **)(v1 + 360));
}

//----- (021D214C) --------------------------------------------------------
int __fastcall Function_21d214c(int *a1)
{
  int *v1;

  v1 = a1;
  Function_201c2b8(*a1);
  return Function_2008a94(v1[85]);
}

//----- (021D2164) --------------------------------------------------------
int __fastcall Function_21d2164(int a1, int a2, int a3)
{
  return Function_21d222c(a1, a2, a3, 0);
}

//----- (021D2170) --------------------------------------------------------
int __fastcall Function_21d2170(int a1)
{
  return Function_21d2274(a1, 0);
}

//----- (021D217C) --------------------------------------------------------
int __fastcall Function_21d217c(int a1, int a2)
{
  return Function_21d2280(a1, a2, 0);
}

//----- (021D2188) --------------------------------------------------------
int __fastcall Function_21d2188(int a1, ushort a2, int a3, int a4, uchar a5, uchar a6, int a7, short a8, short a9, int a10)
{
  ushort v10;
  int v11;
  int v12;
  uint *v13;
  int v14;
  short v15;
  int result;
  int v17;
  char v18;
  int v19;

  v19 = a4;
  v10 = a2;
  v17 = a1;
  v11 = a1 + 344;
  v12 = a3;
  v13 = *(uint **)(a1 + 344 + 4 * a10);
  v14 = a4;
  if ( v13 )
    Function_2007dc8(v13);
  if ( v12 == -1 )
    LOBYTE(v12) = Function_2075dac(v10, 0);
  Function_2075fb4((int)&v18, v10, (uchar)v12, (uchar)v14, a5, a6, a7);
  if ( v14 )
    v15 = 0;
  else
    v15 = Function_2076648(v10, (uchar)v12, 0, a6);
  result = Function_2007c34(*(uint **)(v17 + 340), &v18, a8, a9 + v15, 0, 0, 0, 0);
  *(uint *)(v11 + 4 * a10) = result;
  return result;
}

//----- (021D222C) --------------------------------------------------------
int __fastcall Function_21d222c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;

  v4 = a1 + 344;
  v5 = 4 * a4;
  v6 = a3;
  Function_2007dec(*(uint *)(a1 + 344 + 4 * a4), 0, a2);
  return Function_2007dec(*(uint *)(v4 + v5), 1u, v6);
}

//----- (021D2250) --------------------------------------------------------
int __fastcall Function_21d2250(int a1, int *a2, int *a3, int a4)
{
  int v4;
  int v5;
  int *v6;
  int result;

  v4 = a1 + 344;
  v5 = 4 * a4;
  v6 = a3;
  *a2 = Function_20080c0(*(uint *)(a1 + 344 + 4 * a4), 0);
  result = Function_20080c0(*(uint *)(v4 + v5), 1u);
  *v6 = result;
  return result;
}

//----- (021D2274) --------------------------------------------------------
int __fastcall Function_21d2274(int a1, int a2)
{
  return *(uint *)(a1 + 4 * a2 + 344);
}

//----- (021D2280) --------------------------------------------------------
int __fastcall Function_21d2280(int a1, int a2, int a3)
{
  int result;

  result = *(uint *)(a1 + 4 * a3 + 344);
  if ( result )
  {
    if ( a2 == 1 )
      result = Function_2007dec(result, 6u, 0);
    else
      result = Function_2007dec(result, 6u, 1);
  }
  return result;
}

//----- (021D22A8) --------------------------------------------------------
int __fastcall Function_21d22a8(int a1)
{
  int v1;

  v1 = a1;
  if ( !*(uint *)(a1 + 436) )
    ErrorHandler();
  return *(uint *)(v1 + 436);
}

//----- (021D22C4) --------------------------------------------------------
int __fastcall Function_21d22c4(int a1)
{
  int v1;

  v1 = a1;
  if ( !*(uint *)(a1 + 440) )
    ErrorHandler();
  return *(uint *)(v1 + 440);
}

//----- (021D22E0) --------------------------------------------------------
int __fastcall Function_21d22e0(int a1)
{
  return Function_21d22f8(a1 + 436);
}

//----- (021D22F8) --------------------------------------------------------
int __fastcall Function_21d22f8(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int result;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  if ( a4 == *(uint *)(a1 + 40) && a5 == *(uint *)(a1 + 44) )
    return Function_20129d0(**(uint ***)(a1 + 8), 1);
  *(uint *)(a1 + 40) = a4;
  *(uint *)(a1 + 44) = a5;
  if ( *(uint *)(a1 + 8) )
    Function_21d4d1c();
  if ( v7 )
    result = Function_21d4cb8(v6, v7);
  else
    result = Function_21d4ca0(v6);
  *(uint *)(v5 + 8) = result;
  return result;
}

//----- (021D2344) --------------------------------------------------------
int __fastcall Function_21d2344(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( a2 > 3 )
    ErrorHandler();
  return *(uint *)(v3 + 4 * v2 + 448);
}

//----- (021D2360) --------------------------------------------------------
int __fastcall Function_21d2360(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_2021fe0(*(uint *)(a1 + 436), a2);
  Function_2021fe0(*(uint *)(v2 + 440), v3);
  return Function_2012af0(**(uint ***)(v2 + 444), v3);
}

//----- (021D238C) --------------------------------------------------------
int __fastcall Function_21d238c(int a1, char a2)
{
  int v2;
  char v3;

  v2 = a1;
  v3 = a2;
  Function_2021e80(*(uint *)(a1 + 436), a2);
  Function_2021e80(*(uint *)(v2 + 440), v3);
  return Function_2012a00(**(uint ***)(v2 + 444), v3);
}

//----- (021D23C0) --------------------------------------------------------
uint *__fastcall Function_21d23c0(int a1, int a2)
{
  int v2;
  uint v3;
  int v4;
  uint v5;
  uint *result;

  v2 = a1;
  v3 = *(uint *)(a1 + 436);
  v4 = a2;
  if ( v3 )
    Function_2021cac(v3, a2);
  v5 = *(uint *)(v2 + 440);
  if ( v5 )
    Function_2021cac(v5, v4);
  result = **(uint ***)(v2 + 444);
  if ( result )
    result = (uint *)Function_20129d0(result, v4);
  return result;
}

//----- (021D23F8) --------------------------------------------------------
uint *__fastcall Function_21d23f8(uint *result, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  *result = a9;
  result[1] = a7;
  result[2] = a8 | 0x20;
  result[3] = a3;
  result[4] = a4 - a3;
  result[5] = a5;
  result[6] = a6 - a5;
  result[7] = a2;
  result[8] = 0;
  return result;
}

//----- (021D2424) --------------------------------------------------------
int __fastcall Function_21d2424(uint *a1)
{
  uint *v1;
  short v2;
  int v3;

  v1 = a1;
  if ( !((int (*)(void))Function_21d24ec)() )
  {
    v2 = Function_21d2484(v1);
    v3 = Function_21d24b8(v1);
    if ( *v1 )
      Function_20bf5a0(&REG_BLDCNT_SUB, v1[1], v1[2], v2, 0, v3);
    else
      Function_20bf5a0(&REG_BLDCNT, v1[1], v1[2], v2, 0, v3);
    ++v1[8];
  }
  return Function_21d24ec(v1);
}

//----- (021D2484) --------------------------------------------------------
int __fastcall Function_21d2484(int a1)
{
  int v1;
  long long v2;

  v1 = a1;
  v2 = ll_mul((int)(*(uint *)(a1 + 24) << 12), (int)(*(uint *)(a1 + 32) << 12));
  return (FX_Div((v2 + 2048) >> 12, *(uint *)(v1 + 28) << 12) >> 12) + *(uint *)(v1 + 20);
}

//----- (021D24B8) --------------------------------------------------------
int __fastcall Function_21d24b8(int a1)
{
  int v1;
  long long v2;

  v1 = a1;
  v2 = ll_mul((int)(*(uint *)(a1 + 16) << 12), (int)(*(uint *)(a1 + 32) << 12));
  return (FX_Div((v2 + 2048) >> 12, *(uint *)(v1 + 28) << 12) >> 12) + *(uint *)(v1 + 12);
}

//----- (021D24EC) --------------------------------------------------------
BOOL __fastcall Function_21d24ec(int a1)
{
  return *(uint *)(a1 + 32) > *(uint *)(a1 + 28);
}

//----- (021D24FC) --------------------------------------------------------
int __fastcall Function_21d24fc(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = -Function_21d24b8(a2);
  v4 = Function_21d2170(v2);
  return Function_20086fc(v4, v3, v3, 0, 0);
}

//----- (021D251C) --------------------------------------------------------
int __fastcall Function_21d251c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;

  v3 = a1;
  v4 = a3;
  v5 = -Function_21d24b8(a2);
  v6 = Function_21d2274(v3, v4);
  return Function_20086fc(v6, v5, v5, 0, 0);
}

//----- (021D2544) --------------------------------------------------------
int __fastcall Function_21d2544(int a1, int a2)
{
  int v2;
  int v3;
  int v5;
  int v6;
  int v7;
  int v8;

  v2 = a2;
  v3 = a1;
  Function_21d4f94();
  Function_21d4fbc(v3, &v6, &v5);
  return Function_21d2574(v2, v8, v7, v6, v5);
}

//----- (021D2574) --------------------------------------------------------
int __fastcall Function_21d2574(int a1)
{
  return Function_21d3124(a1);
}

//----- (021D2584) --------------------------------------------------------
uint __fastcall Function_21d2584(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  uint result;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    result = Function_2021cac(*v2, v3);
    ++v4;
    ++v2;
  }
  while ( v4 < 4 );
  return result;
}

//----- (021D25A0) --------------------------------------------------------
int __fastcall Function_21d25a0(int *a1)
{
  return Function_2021d34(*a1);
}

//----- (021D25AC) --------------------------------------------------------
int __fastcall Function_21d25ac(int result, int a2)
{
  *(uint *)(result + 48) = a2;
  if ( !a2 )
    *(uint *)(result + 52) = 0;
  return result;
}

//----- (021D25B8) --------------------------------------------------------
int __fastcall Function_21d25b8(int a1, int a2)
{
  int v2;
  int v3;
  int v5;
  int v6;
  int v7;
  int v8;

  v2 = a2;
  v3 = a1;
  Function_21d4f94();
  Function_21d4fbc(v3, &v6, &v5);
  return Function_21d25e8(v2, v8, v7, v6, v5);
}

//----- (021D25E8) --------------------------------------------------------
int __fastcall Function_21d25e8(uint *a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  uint *v7;
  int v8;
  int v9;
  int result;

  v5 = a4;
  v6 = a2;
  v7 = a1;
  v8 = a3;
  a1[129] = a2;
  a1[130] = a3;
  a1[131] = a4;
  a1[132] = a5;
  v9 = a1[132];
  Function_21d30d8(a1 + 121, a1[129], a1[130], a1[131]);
  v7[152] = v6;
  v7[153] = v8;
  v7[154] = v5;
  v7[155] = a5;
  result = 624;
  v7[156] = 0;
  return result;
}

//----- (021D2648) --------------------------------------------------------
uint *__fastcall Function_21d2648(uint *result, int a2, int a3, int a4, int a5, int a6)
{
  *result = a2;
  result[1] = a4;
  result[2] = a2;
  result[3] = a4;
  result[4] = a3 - a2;
  result[5] = a5 - a4;
  result[7] = a6;
  result[6] = 0;
  return result;
}

//----- (021D2664) --------------------------------------------------------
int __fastcall Function_21d2664(uint *a1)
{
  uint *v1;
  long long v2;
  int v3;
  long long v4;
  int v5;
  int v6;
  int v7;
  int result;

  v1 = a1;
  v2 = ll_mul((int)(a1[4] << 12), (int)(a1[6] << 12));
  v3 = FX_Div((v2 + 2048) >> 12, v1[7] << 12);
  v4 = ll_mul((int)(v1[5] << 12), (int)(v1[6] << 12));
  v5 = FX_Div((v4 + 2048) >> 12, v1[7] << 12);
  *v1 = (v3 >> 12) + v1[2];
  v1[1] = (v5 >> 12) + v1[3];
  v6 = v1[7];
  v7 = v1[6] + 1;
  if ( v7 > v6 )
  {
    v1[6] = v6;
    result = 1;
  }
  else
  {
    v1[6] = v7;
    result = 0;
  }
  return result;
}

//----- (021D26E0) --------------------------------------------------------
int __fastcall Function_21d26e0(int a1)
{
  return *(uint *)(a1 + 636);
}

//----- (021D26E8) --------------------------------------------------------
uint *__fastcall Function_21d26e8(int a1, uint a2, int a3, uint a4)
{
  int v4;
  uint v5;
  uint *v6;
  uint *v7;

  v4 = a3;
  v5 = a4;
  v6 = (uint *)Function_2006cb8_LoadFileInMemory(*(uint *)(a1 + 636), a2, a4);
  if ( v6 && v4 )
  {
    v7 = (uint *)malloc(v5, *v6 >> 8);
    if ( v7 )
    {
      MI_UncompressLZ8(v6, v7);
      free((int)v6);
    }
    v6 = v7;
  }
  return v6;
}

//----- (021D2724) --------------------------------------------------------
int __fastcall Function_21d2724(int a1, uint a2, uint *a3, int a4, int a5, int a6, int a7, uint a8)
{
  uint *v8;
  uchar v9;
  int v10;
  uint *v11;
  int v12;
  int v14;
  int v15;

  v15 = a4;
  v8 = a3;
  v9 = a4;
  v10 = a6;
  v11 = Function_21d26e8(a1, a2, a7, a8);
  v12 = (int)v11;
  if ( v11 )
  {
    if ( Function_20a7164((int)v11, &v14) )
    {
      if ( !a6 )
        v10 = *(uint *)(v14 + 16);
      Function_201958c(v8, v9, *(int **)(v14 + 20), v10, a5);
    }
    free(v12);
  }
  return v10;
}

//----- (021D276C) --------------------------------------------------------
uint *__fastcall Function_21d276c(int a1, uint a2, int a3, int a4, int a5, uint a6)
{
  int v6;
  int v7;
  int v8;
  uint *result;
  int v10;
  int v11;

  v11 = a4;
  v6 = a4;
  v7 = a3;
  v8 = a5;
  result = Function_21d26e8(a1, a2, 0, a6);
  v10 = (int)result;
  if ( result )
  {
    if ( Function_20a71b0((int)result, &v11) )
    {
      if ( !a5 )
        v8 = *(uint *)(v11 + 8);
      DC_FlushRange(*(uint *)(v11 + 12), v8);
      ((void (__fastcall *)(uint, int, int))off_21E9CA4[v7])(*(uint *)(v11 + 12), v6, v8);
    }
    result = (uint *)free(v10);
  }
  return result;
}

//----- (021D27B8) --------------------------------------------------------
int __fastcall Function_21d27b8(int a1, uint a2, int a3, uint *a4, uint a5)
{
  uint *v5;
  uint *v6;
  int v7;

  v5 = a4;
  v6 = Function_21d26e8(a1, a2, a3, a5);
  v7 = (int)v6;
  if ( !v6 || Function_20a7248((int)v6, v5) )
    return v7;
  free(v7);
  return 0;
}

//----- (021D27E0) --------------------------------------------------------
int __fastcall Function_21d27e0(int a1, uint a2, uint *a3, uint a4)
{
  uint *v4;
  uint *v5;
  int v6;

  v4 = a3;
  v5 = Function_21d26e8(a1, a2, 0, a4);
  v6 = (int)v5;
  if ( !v5 || Function_20a71b0((int)v5, v4) )
    return v6;
  free(v6);
  return 0;
}

//----- (021D2808) --------------------------------------------------------
int __fastcall Function_21d2808(int a1, uint a2, int a3, uint *a4, uint a5)
{
  uint *v5;
  uint *v6;
  int v7;

  v5 = a4;
  v6 = Function_21d26e8(a1, a2, a3, a5);
  v7 = (int)v6;
  if ( !v6 || Function_20a7164((int)v6, v5) )
    return v7;
  free(v7);
  return 0;
}

//----- (021D2830) --------------------------------------------------------
int __fastcall Function_21d2830(uint *a1, uint a2)
{
  uint *v2;
  uint v3;
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
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;

  v2 = a1;
  v3 = a2;
  v40 = 0;
  v41 = 0;
  v42 = 2048;
  v43 = 0;
  v44 = 16777217;
  v45 = 0;
  v46 = 0;
  Function_20183c4(a1, 1u, &v40, 0);
  Function_2019690(1u, 32, 0, v3);
  Function_2019ebc(v2, 1u);
  v33 = 0;
  v34 = 0;
  v35 = 2048;
  v36 = 0;
  v37 = 50397185;
  v38 = 256;
  v39 = 0;
  Function_20183c4(v2, 2u, &v33, 0);
  Function_2019690(2u, 32, 0, v3);
  Function_2019ebc(v2, 2u);
  Function_2019060(0, 2);
  Function_201ff0c(1u, 1);
  v26 = 0;
  v27 = 0;
  v28 = 2048;
  v29 = 0;
  v30 = 84017153;
  v31 = 768;
  v32 = 0;
  Function_20183c4(v2, 3u, &v26, 0);
  Function_2019690(3u, 32, 0, v3);
  Function_2019ebc(v2, 3u);
  v19 = 0;
  v20 = 0;
  v21 = 2048;
  v22 = 0;
  v23 = 16777217;
  v24 = 0;
  v25 = 0;
  Function_20183c4(v2, 5u, &v19, 0);
  Function_2019690(5u, 32, 0, v3);
  Function_2019ebc(v2, 5u);
  v12 = 0;
  v13 = 0;
  v14 = 2048;
  v15 = 0;
  v16 = 33685505;
  v17 = 512;
  v18 = 0;
  Function_20183c4(v2, 6u, &v12, 0);
  Function_2019690(6u, 32, 0, v3);
  Function_2019ebc(v2, 6u);
  v5 = 0;
  v6 = 0;
  v7 = 1024;
  v8 = 0;
  v9 = 67174657;
  v10 = 256;
  v11 = 0;
  Function_20183c4(v2, 7u, &v5, 1);
  Function_2019690(7u, 64, 0, v3);
  return Function_2019ebc(v2, 7u);
}

//----- (021D299C) --------------------------------------------------------
int __fastcall Function_21d299c(int a1)
{
  int v1;

  v1 = a1;
  Function_2019044(a1, 1);
  Function_2019044(v1, 2);
  Function_2019044(v1, 3);
  Function_2019044(v1, 5);
  Function_2019044(v1, 7);
  return Function_2019044(v1, 6);
}

//----- (021D29D0) --------------------------------------------------------
int __fastcall Function_21d29d0(uint **a1)
{
  uint **v1;
  int v2;

  v1 = a1;
  Function_201a7e8(*a1, (int)(a1 + 1), 1, 0, 0, 0x20u, 0x20u, 0, 0);
  Function_201ada4_ClearTextBox((int)(v1 + 1), 0);
  return Function_201a954((int)(v1 + 1), v2);
}

//----- (021D2A00) --------------------------------------------------------
uint __fastcall Function_21d2a00(int a1)
{
  return Function_201a8fc(a1 + 4);
}

//----- (021D2A0C) --------------------------------------------------------
int *__fastcall Function_21d2a0c(int a1, uint a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int *result;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v15 = a4;
  v4 = a2;
  v5 = a1;
  *(uint *)(a1 + 340) = Function_200762c(a2, a2, a3, a4);
  v6 = Function_20a5a2c();
  v7 = Function_20a5a3c();
  Function_2008a78(*(uint *)(v5 + 340), 8 * v6 & 0x7FFFF, 16 * ((v6 & 0x7FFF0000u) >> 16));
  Function_2008a84(*(uint *)(v5 + 340), 8 * v7 & 0x7FFFF, 8 * ((v7 & 0xFFFF0000) >> 16));
  v8 = 0;
  v9 = v5;
  do
  {
    ++v8;
    *(uint *)(v9 + 344) = 0;
    v9 += 4;
  }
  while ( v8 < 4 );
  v11 = 8;
  v12 = 8;
  v13 = 8;
  v14 = v4;
  result = Function_2015064((int)&v11);
  *(uint *)(v5 + 360) = result;
  return result;
}

//----- (021D2AB4) --------------------------------------------------------
uint __fastcall Function_21d2ab4(int a1)
{
  int v1;
  int v2;
  int v3;
  uint *v4;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    v4 = *(uint **)(v3 + 344);
    if ( v4 )
      Function_2007dc8(v4);
    ++v2;
    v3 += 4;
  }
  while ( v2 < 4 );
  Function_2007b6c(*(uint *)(v1 + 340));
  return Function_20150a8(*(int **)(v1 + 360));
}

//----- (021D2AE8) --------------------------------------------------------
int *__fastcall Function_21d2ae8(int a1, uint a2)
{
  uint v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int *v7;
  int *v8;
  int *result;

  v2 = a2;
  v3 = (int *)a1;
  v4 = a1 + 436;
  v5 = Function_21d26e0(a1);
  v6 = v5;
  v7 = Function_2009a4c(v3[80], v5, 0x4Eu, 1, 3000, 1, v2);
  *(uint *)(v4 + 12) = v7;
  Function_200a3dc(v7);
  Function_2009d4c(*(int **)(v4 + 12));
  v8 = Function_2009b04(v3[81], v6, 3u, 0, 3000, 1, 1, v2);
  *(uint *)(v4 + 16) = v8;
  Function_200a640(v8);
  Function_2009d4c(*(int **)(v4 + 16));
  *(uint *)(v4 + 20) = Function_2009bc4(v3[82], v6, 0x4Cu, 1, 3000, 2u, v2);
  result = Function_2009bc4(v3[83], v6, 0x4Du, 1, 3000, 3u, v2);
  *(uint *)(v4 + 24) = result;
  return result;
}

//----- (021D2B88) --------------------------------------------------------
int *__fastcall Function_21d2b88(int a1, int *a2, uint a3, int a4)
{
  int v4;
  int v5;
  uint v6;
  int *v7;
  int *v8;
  int *v9;
  int *result;

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = Function_2009a4c(*a2, a4, 0x4Eu, 1, 3000, 1, a3);
  *(uint *)(v4 + 12) = v8;
  Function_200a3dc(v8);
  Function_2009d4c(*(int **)(v4 + 12));
  v9 = Function_2009b04(v7[1], v5, 3u, 0, 3000, 1, 1, v6);
  *(uint *)(v4 + 16) = v9;
  Function_200a640(v9);
  Function_2009d4c(*(int **)(v4 + 16));
  *(uint *)(v4 + 20) = Function_2009bc4(v7[2], v5, 0x4Cu, 1, 3000, 2u, v6);
  result = Function_2009bc4(v7[3], v5, 0x4Du, 1, 3000, 3u, v6);
  *(uint *)(v4 + 24) = result;
  return result;
}

//----- (021D2C10) --------------------------------------------------------
int __fastcall Function_21d2c10(int **a1)
{
  int **v1;
  int v2;

  v1 = a1;
  v2 = (int)(a1 + 109);
  Function_200a4e4(a1[112]);
  Function_200a6dc(*(int **)(v2 + 16));
  Function_2009d68(v1[80], *(uint ***)(v2 + 12));
  Function_2009d68(v1[81], *(uint ***)(v2 + 16));
  Function_2009d68(v1[82], *(uint ***)(v2 + 20));
  return Function_2009d68(v1[83], *(uint ***)(v2 + 24));
}

//----- (021D2C58) --------------------------------------------------------
int __fastcall Function_21d2c58(int a1, int **a2)
{
  int v2;
  int **v3;

  v2 = a1;
  v3 = a2;
  Function_200a4e4(*(int **)(a1 + 12));
  Function_200a6dc(*(int **)(v2 + 16));
  Function_2009d68(*v3, *(uint ***)(v2 + 12));
  Function_2009d68(v3[1], *(uint ***)(v2 + 16));
  Function_2009d68(v3[2], *(uint ***)(v2 + 20));
  return Function_2009d68(v3[3], *(uint ***)(v2 + 24));
}

//----- (021D2C8C) --------------------------------------------------------
int __fastcall Function_21d2c8c(int *a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int result;
  int v7;
  char *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  char v14;
  int v15;

  v15 = a4;
  v4 = a2;
  v5 = a1;
  Function_20093b4((int)&v14, 3000, 3000, 3000, 3000, -1, -1, 0, 0, a1[80], a1[81], a1[82], a1[83], 0, 0);
  v7 = v5[79];
  v8 = &v14;
  v12 = 1;
  v11 = 0;
  v13 = v4;
  v9 = 0;
  v10 = 0;
  v5[109] = Function_2021b90(&v7);
  Function_2021cac(v5[109], 0);
  Function_2021f58(v5[109], 1);
  v9 = 0;
  v10 = 0;
  v5[110] = Function_2021b90(&v7);
  Function_2021cac(v5[110], 0);
  Function_2021d6c(v5[110], 1u);
  v5[111] = 0;
  result = 476;
  v5[119] = 0;
  v5[120] = 0;
  return result;
}

//----- (021D2D4C) --------------------------------------------------------
int __fastcall Function_21d2d4c(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  Function_2021bd4(a1[109]);
  v1[109] = 0;
  Function_2021bd4(v1[110]);
  v1[110] = 0;
  result = v1[111];
  if ( result )
  {
    Function_21d4d1c();
    result = 444;
    v1[111] = 0;
  }
  return result;
}

//----- (021D2D88) --------------------------------------------------------
int __fastcall Function_21d2d88(int *a1, int a2, int *a3, int a4, int a5)
{
  int v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  int result;
  int v11;
  char *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  char v18;

  v5 = a2;
  v6 = a1;
  v7 = a4;
  Function_20093b4((int)&v18, 3000, 3000, 3000, 3000, -1, -1, 0, a5, *a3, a3[1], a3[2], a3[3], 0, 0);
  v12 = &v18;
  v16 = 1;
  v11 = v5;
  v15 = 0;
  v17 = v7;
  v13 = 0;
  v14 = 0;
  v8 = Function_2021b90(&v11);
  *v6 = v8;
  Function_2021cac(v8, 0);
  Function_2021f58(*v6, 1);
  v13 = 0;
  v14 = 0;
  v9 = Function_2021b90(&v11);
  v6[1] = v9;
  Function_2021cac(v9, 0);
  Function_2021d6c(v6[1], 1u);
  result = 0;
  v6[2] = 0;
  v6[10] = 0;
  v6[11] = 0;
  return result;
}

//----- (021D2E1C) --------------------------------------------------------
int __fastcall Function_21d2e1c(int *a1)
{
  int *v1;
  int result;

  v1 = a1;
  Function_2021bd4(*a1);
  *v1 = 0;
  Function_2021bd4(v1[1]);
  v1[1] = 0;
  result = v1[2];
  if ( result )
  {
    Function_21d4d1c();
    result = 0;
    v1[2] = 0;
  }
  return result;
}

//----- (021D2E44) --------------------------------------------------------
uint *__fastcall Function_21d2e44(uint *a1, int a2)
{
  uint *v2;
  uint v3;
  int v4;
  uint v5;
  uint *result;

  v2 = a1;
  v3 = *a1;
  v4 = a2;
  if ( v3 )
    Function_2021cac(v3, a2);
  v5 = v2[1];
  if ( v5 )
    Function_2021cac(v5, v4);
  result = *(uint **)v2[2];
  if ( result )
    result = (uint *)Function_20129d0(result, v4);
  return result;
}

//----- (021D2E70) --------------------------------------------------------
int *__fastcall Function_21d2e70(int a1, uint a2)
{
  uint v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int *v7;
  int *v8;
  int *result;

  v2 = a2;
  v3 = (int *)a1;
  v4 = a1 + 484;
  v5 = Function_21d26e0(a1);
  v6 = v5;
  v7 = Function_2009a4c(v3[80], v5, 0x77u, 1, 12000, 2, v2);
  *(uint *)(v4 + 16) = v7;
  Function_200a3dc(v7);
  Function_2009d4c(*(int **)(v4 + 16));
  v8 = Function_2009b04(v3[81], v6, 0x15u, 0, 12000, 2, 1, v2);
  *(uint *)(v4 + 20) = v8;
  Function_200a640(v8);
  Function_2009d4c(*(int **)(v4 + 20));
  *(uint *)(v4 + 24) = Function_2009bc4(v3[82], v6, 0x78u, 1, 12000, 2u, v2);
  result = Function_2009bc4(v3[83], v6, 0x76u, 1, 12000, 3u, v2);
  *(uint *)(v4 + 28) = result;
  return result;
}

//----- (021D2F14) --------------------------------------------------------
int __fastcall Function_21d2f14(int **a1)
{
  int **v1;
  int v2;

  v1 = a1;
  v2 = (int)(a1 + 121);
  Function_200a4e4(a1[125]);
  Function_200a6dc(*(int **)(v2 + 20));
  Function_2009d68(v1[80], *(uint ***)(v2 + 16));
  Function_2009d68(v1[81], *(uint ***)(v2 + 20));
  Function_2009d68(v1[82], *(uint ***)(v2 + 24));
  return Function_2009d68(v1[83], *(uint ***)(v2 + 28));
}

//----- (021D2F5C) --------------------------------------------------------
int __fastcall Function_21d2f5c(int *a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int *v7;
  int v8;
  int v10;
  char *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  char v17;
  int v18;

  v18 = a4;
  v4 = a2;
  v5 = a1;
  Function_20093b4((int)&v17, 12000, 12000, 12000, 12000, -1, -1, 0, 0, a1[80], a1[81], a1[82], a1[83], 0, 0);
  v6 = 0;
  v10 = v5[79];
  v11 = &v17;
  v15 = 2;
  v13 = 1196032;
  v12 = 409600;
  v16 = v4;
  v14 = 0;
  v7 = v5 + 121;
  do
  {
    v8 = Function_2021b90(&v10);
    *v7 = v8;
    ++v7;
    Function_2021d6c(v8, v6++);
  }
  while ( v6 < 4 );
  Function_21d2584((uint *)v5 + 121, 0);
  Function_21d3034(v5);
  return Function_21d31d0(v5);
}

//----- (021D300C) --------------------------------------------------------
int __fastcall Function_21d300c(int a1)
{
  int v1;
  int v2;
  int *v3;
  int result;

  v1 = a1;
  Function_21d31f0();
  Function_21d3054(v1);
  v2 = 0;
  v3 = (int *)(v1 + 484);
  do
  {
    result = Function_2021bd4(*v3);
    ++v2;
    ++v3;
  }
  while ( v2 < 4 );
  return result;
}

//----- (021D3034) --------------------------------------------------------
uint *__fastcall Function_21d3034(int a1)
{
  int v1;
  uint *result;

  v1 = a1;
  result = AddTaskToTaskList1((int)Function_21d3064, a1 + 484, 1u);
  *(uint *)(v1 + 628) = result;
  return result;
}

//----- (021D3054) --------------------------------------------------------
int __fastcall Function_21d3054(int a1)
{
  return Call_RemoveTaskFromTaskList(*(int **)(a1 + 628));
}

//----- (021D3064) --------------------------------------------------------
int __fastcall Function_21d3064(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int result;
  int v5;
  long long v6;
  int v7;
  int v8;

  v2 = a2;
  if ( a2[12] )
  {
    v3 = a2[11];
    result = Function_21d30d8(a2, a2[8], a2[9], a2[10]);
  }
  else
  {
    v5 = ((uint)(a2[13] + 1) >> 31) + __ROR4__(((a2[13] + 1) << 26) - ((uint)(a2[13] + 1) >> 31), 26);
    a2[13] = v5;
    if ( v5 >= 32 )
      v5 = 63 - v5;
    HIDWORD(v6) = (ull)(v5 << 12) >> 18;
    LODWORD(v6) = v5 << 26;
    v7 = FX_Div((v6 + 2048) >> 12, 0x20000);
    v8 = v2[11] + (v7 >> 12);
    result = Function_21d30d8(v2, v2[8], v2[9], v2[10] + (v7 >> 12));
  }
  return result;
}

//----- (021D30D8) --------------------------------------------------------
int __fastcall Function_21d30d8(uint **a1, int a2, int a3, int a4, int a5)
{
  uint **v5;
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
  v5 = a1;
  v9 = a2;
  v6 = a3;
  v10 = a4;
  v7 = 0;
  do
  {
    Function_21d4ffc(v7, &v12, &v11, v9, v6, v10, a5);
    v13 = v12 << 12;
    v14 = (v11 << 12) + 786432;
    result = Function_2021c50(*v5, &v13);
    ++v7;
    ++v5;
  }
  while ( v7 < 4 );
  return result;
}

//----- (021D3124) --------------------------------------------------------
int *__fastcall Function_21d3124(int *result, int a2, int a3, int a4, int a5)
{
  int v5;
  uint *v6;
  int v7;
  int v8;

  v5 = a2;
  v6 = result + 135;
  v7 = a3;
  v8 = a4;
  if ( result[152] != a2 || result[153] != a3 || result[154] != a4 || result[155] != a5 )
  {
    *v6 = result + 121;
    Function_21d2648(result + 136, result[129], a2, result[130], a3, 3);
    Function_21d2648(v6 + 9, *(uint *)(*v6 + 40), v8, *(uint *)(*v6 + 44), a5, 3);
    v6[17] = v5;
    v6[18] = v7;
    v6[19] = v8;
    v6[20] = a5;
    result = (int *)1;
    v6[21] = 1;
  }
  return result;
}

//----- (021D3194) --------------------------------------------------------
int __fastcall Function_21d3194(int a1, uint *a2)
{
  uint *v2;
  int result;
  int v4;

  v2 = a2;
  result = a2[21];
  if ( result )
  {
    v4 = Function_21d2664(a2 + 1);
    Function_21d2664(v2 + 9);
    *(uint *)(*v2 + 32) = v2[1];
    *(uint *)(*v2 + 36) = v2[2];
    *(uint *)(*v2 + 40) = v2[9];
    result = *v2;
    *(uint *)(*v2 + 44) = v2[10];
    if ( v4 == 1 )
    {
      result = 0;
      v2[21] = 0;
    }
  }
  return result;
}

//----- (021D31D0) --------------------------------------------------------
uint *__fastcall Function_21d31d0(int a1)
{
  int v1;
  uint *result;

  v1 = a1;
  result = AddTaskToTaskList1((int)Function_21d3194, a1 + 540, 0);
  *(uint *)(v1 + 632) = result;
  return result;
}

//----- (021D31F0) --------------------------------------------------------
int __fastcall Function_21d31f0(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Call_RemoveTaskFromTaskList(*(int **)(a1 + 632));
  result = 632;
  *(uint *)(v1 + 632) = 0;
  return result;
}

//----- (021D3208) --------------------------------------------------------
int __fastcall Function_21d3208(int *a1, int *a2, uint a3)
{
  uint v3;
  int *v4;
  int *v5;
  int v6;
  int v7;
  int result;

  v3 = a3;
  v4 = a2;
  v5 = a1;
  Call_FillMemWithValue(a1, 0, 0x1770u);
  *v5 = *v4;
  v5[1489] = v4[2];
  v5[1485] = Function_2027474((uint *)*v5) != 0;
  v6 = v4[8];
  if ( v6 == 2 )
    v6 = v5[1485] != 0;
  v5[1484] = v6 == 1;
  if ( !Function_21d3684(v5, 0, 0, 0, 0, 0, v5[1484], v3) )
    ErrorHandler();
  Function_21d3794(v5, v4[7]);
  Function_21d3434(v5, v4[7]);
  Function_21d344c(v5, v4[8]);
  v5[1491] = Function_2025fcc(v4[1]);
  v5[1492] = GetGender(v4[1]);
  v5[1493] = (int)Function_2025f04((ushort *)v4[1], v3);
  v5[1490] = Function_2098700(v3);
  v7 = v5[1490];
  if ( v5[1492] )
    Function_209872c(v7, 1, v3);
  else
    Function_209872c(v7, 0, v3);
  v5[1496] = v4[3];
  v5[1497] = v4[4];
  v5[1498] = v4[5];
  result = v4[6];
  v5[1499] = result;
  return result;
}

//----- (021D3320) --------------------------------------------------------
int __fastcall Function_21d3320(int a1, int a2)
{
  int v2;
  int result;

  v2 = a1;
  Function_20237bc_FreeMsg(*(uint *)(a1 + 5972), a2);
  Function_20987bc(*(int **)(v2 + 5960));
  Function_2098718(*(uint *)(v2 + 5960));
  result = 5960;
  *(uint *)(v2 + 5960) = 0;
  return result;
}

//----- (021D334C) --------------------------------------------------------
int __fastcall Function_21d334c(uint **a1, ushort a2, int a3)
{
  return Function_2027058(*a1, a2, a3);
}

//----- (021D335C) --------------------------------------------------------
int __fastcall Function_21d335c(uint **a1, int a2)
{
  int v2;
  uint **v3;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 28 )
    ErrorHandler();
  return Function_20270ac(*v3, v2);
}

//----- (021D3374) --------------------------------------------------------
int __fastcall Function_21d3374(uint **a1, int a2)
{
  int v2;
  uint **v3;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 2 )
    ErrorHandler();
  return Function_20270f8(*v3, v2);
}

//----- (021D338C) --------------------------------------------------------
int __fastcall Function_21d338c(uint **a1, int a2)
{
  int v2;
  uint **v3;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 2 )
    ErrorHandler();
  return Function_2027154(*v3, v2);
}

//----- (021D33A4) --------------------------------------------------------
int __fastcall Function_21d33a4(uint **a1, int a2)
{
  int v2;
  uint **v3;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 3 )
    ErrorHandler();
  return Function_20271b0(*v3, v2);
}

//----- (021D33BC) --------------------------------------------------------
int __fastcall Function_21d33bc(uint **a1, int a2)
{
  int v2;
  uint **v3;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 3 )
    ErrorHandler();
  return Function_2027208(*v3, v2);
}

//----- (021D33D4) --------------------------------------------------------
int __fastcall Function_21d33d4(uint **a1, int a2)
{
  return Function_202756c(*a1, a2, 0);
}

//----- (021D33E0) --------------------------------------------------------
int __fastcall Function_21d33e0(uint **a1, ushort a2)
{
  int result;

  if ( Function_21d334c(a1, a2, 1) == -1 )
    result = 1;
  else
    result = 2;
  return result;
}

//----- (021D33F8) --------------------------------------------------------
int __fastcall Function_21d33f8(uint **a1)
{
  return Function_202702c(*a1, 0);
}

//----- (021D3404) --------------------------------------------------------
int __fastcall Function_21d3404(uint **a1, uchar a2)
{
  return Function_2027264(*a1, a2);
}

//----- (021D3410) --------------------------------------------------------
int __fastcall Function_21d3410(uint **a1, int a2, uint a3)
{
  return Function_202756c(*a1, a2, a3);
}

//----- (021D341C) --------------------------------------------------------
int __fastcall Function_21d341c(uint **a1, int a2)
{
  return Function_20276c8(*a1, a2);
}

//----- (021D3428) --------------------------------------------------------
int __fastcall Function_21d3428(uint **a1)
{
  return Function_2027474(*a1);
}

//----- (021D3434) --------------------------------------------------------
int __fastcall Function_21d3434(int result, short a2)
{
  *(ushort *)(result + 5980) = a2;
  return result;
}

//----- (021D3440) --------------------------------------------------------
int __fastcall Function_21d3440(int a1)
{
  return *(ushort *)(a1 + 5980);
}

//----- (021D344C) --------------------------------------------------------
int __fastcall Function_21d344c(int result, short a2)
{
  *(ushort *)(result + 5982) = a2;
  return result;
}

//----- (021D3458) --------------------------------------------------------
int __fastcall Function_21d3458(int a1)
{
  return *(ushort *)(a1 + 5982);
}

//----- (021D3464) --------------------------------------------------------
int __fastcall Function_21d3464(uint *a1, int a2, int a3, int a4, int a5, int a6, int a7, uint a8, int a9)
{
  uint *v9;
  int *v10;
  int *v11;
  int v12;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;

  v21 = a4;
  v14 = a2;
  v9 = a1;
  v15 = a3;
  v16 = a4;
  v10 = (int *)malloc2(a8, 986);
  if ( !v10 )
    ErrorHandler();
  Call_FillMemWithValue(v10, 0, 0x3DAu);
  v20 = 0;
  v11 = (int *)malloc2(a8, 986);
  if ( !v11 )
    ErrorHandler();
  Call_FillMemWithValue(v11, 0, 0x3DAu);
  v19 = 0;
  v17 = Function_21d3b64(a8);
  Function_21d39a4(v10, &v20, *v9, v17, v18);
  Function_21d3b98(v14, v11, &v19, v10, v20, a8, *v9);
  memcpy(v10, (char *)v11, 2 * v19);
  v20 = v19;
  Call_FillMemWithValue(v11, 0, 2 * v19);
  v19 = 0;
  Function_21d3c48(v15, v11, &v19, v10, v20, a8, *v9);
  if ( v19 )
  {
    memcpy(v10, (char *)v11, 2 * v19);
    v20 = v19;
    Call_FillMemWithValue(v11, 0, 2 * v19);
    v19 = 0;
    Function_21d3d2c(v16, v11, &v19, v10, v20, a8, *v9);
    if ( v19 )
    {
      memcpy(v10, (char *)v11, 2 * v19);
      v20 = v19;
      Call_FillMemWithValue(v11, 0, 2 * v19);
      v19 = 0;
      Function_21d3d2c(a5, v11, &v19, v10, v20, a8, *v9);
      if ( v19 )
      {
        memcpy(v10, (char *)v11, 2 * v19);
        v20 = v19;
        Call_FillMemWithValue(v11, 0, 2 * v19);
        v19 = 0;
        Function_21d3e80(a6, v11, &v19, v10, v20, a8, *v9);
        if ( v19 )
        {
          memcpy(v10, (char *)v11, 2 * v19);
          v20 = v19;
          Call_FillMemWithValue(v11, 0, 2 * v19);
          v19 = 0;
          Function_21d3a60(v9 + 1, *v9, v10, v20);
          if ( v14 || v15 || v16 || a5 || a6 )
            a9 = 1;
          if ( a9 )
            Function_21d3b28(v9 + 1);
          else
            Function_21d3ab8(v9 + 1, v17, v18);
          v12 = 1;
        }
        else
        {
          v12 = 0;
        }
      }
      else
      {
        v12 = 0;
      }
    }
    else
    {
      v12 = 0;
    }
  }
  else
  {
    v12 = 0;
  }
  Function_21d3fa8(v9 + 1, v9 + 1486, v9 + 1487);
  free((int)v10);
  free((int)v11);
  free(v17);
  return v12;
}

//----- (021D3684) --------------------------------------------------------
int __fastcall Function_21d3684(uint *a1, int a2, int a3, int a4, int a5, int a6, int a7, uint a8)
{
  return Function_21d3464(a1, a2, a3, a4, a5, a6, a7, a8, 0);
}

//----- (021D36A4) --------------------------------------------------------
BOOL __fastcall Function_21d36a4(int a1, int a2)
{
  BOOL result;

  if ( a2 )
    result = *(uint *)(a1 + 5940) != 0;
  else
    result = 1;
  return result;
}

//----- (021D36C0) --------------------------------------------------------
BOOL __fastcall Function_21d36c0(int a1, int a2)
{
  int v2;
  int v3;
  BOOL result;

  v2 = a1;
  v3 = a2;
  result = Function_21d36a4(a1, a2);
  if ( result )
    *(uint *)(v2 + 5936) = v3;
  return result;
}

//----- (021D36D8) --------------------------------------------------------
int __fastcall Function_21d36d8(int a1)
{
  return *(uint *)(a1 + 5936);
}

//----- (021D36E4) --------------------------------------------------------
BOOL __fastcall Function_21d36e4(int a1, int a2)
{
  return a2 >= 0 && a2 < *(uint *)(a1 + 3952);
}

//----- (021D36FC) --------------------------------------------------------
int __fastcall Function_21d36fc(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( !Function_21d36e4(a1, a2) )
    return 0;
  *(uint *)(v2 + 3948) = v3;
  return 1;
}

//----- (021D371C) --------------------------------------------------------
int __fastcall Function_21d371c(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;

  v2 = a2;
  v3 = a1;
  if ( Function_21d36e4(a1, *(uint *)(a1 + 3948) + a2) )
  {
    *(uint *)(v3 + 3948) += v2;
    result = 1;
  }
  else
  {
    if ( v2 < 0 )
      v5 = 0;
    else
      v5 = *(uint *)(v3 + 3952) - 1;
    *(uint *)(v3 + 3948) = v5;
    result = 0;
  }
  return result;
}

//----- (021D375C) --------------------------------------------------------
int __fastcall Function_21d375c(int a1)
{
  return *(uint *)(a1 + 3948);
}

//----- (021D3768) --------------------------------------------------------
int __fastcall Function_21d3768(int a1)
{
  return *(uint *)(a1 + 3952);
}

//----- (021D3770) --------------------------------------------------------
int __fastcall Function_21d3770(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int i;

  v2 = a1;
  v3 = a2;
  v4 = Function_21d3768(a1);
  for ( i = 0; i < v4; v2 += 8 )
  {
    if ( *(uint *)(v2 + 4) == v3 )
      break;
    ++i;
  }
  return i;
}

//----- (021D3794) --------------------------------------------------------
int __fastcall Function_21d3794(int a1, int a2)
{
  int v2;
  int v3;
  uint v4;
  uint v5;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = Function_21d3768(a1);
  v5 = Function_21d3770(v2, v3);
  if ( v4 <= v5 )
    result = 0;
  else
    result = Function_21d36fc(v2, v5);
  return result;
}

//----- (021D37BC) --------------------------------------------------------
int __fastcall Function_21d37bc(int a1)
{
  return *(uint *)(a1 + 8 * *(uint *)(a1 + 3948) + 4);
}

//----- (021D37CC) --------------------------------------------------------
int __fastcall Function_21d37cc(int a1)
{
  return *(uint *)(a1 + 8 * *(uint *)(a1 + 3948) + 8);
}

//----- (021D37DC) --------------------------------------------------------
int __fastcall Function_21d37dc(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a1;
  v3 = a2;
  if ( Function_21d36e4(a1, a2) )
    result = v2 + 4 + 8 * v3;
  else
    result = 0;
  return result;
}

//----- (021D37F8) --------------------------------------------------------
BOOL __fastcall Function_21d37f8(int a1, int a2)
{
  return *(uint *)(a1 + 5932) > a2 && a2 >= 0;
}

//----- (021D3810) --------------------------------------------------------
int __fastcall Function_21d3810(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( !Function_21d37f8(a1, a2) )
    return 0;
  *(uint *)(v2 + 5928) = v3;
  Function_21d36fc(v2, *(uint *)(v2 + 4 * *(uint *)(v2 + 5928) + 3956));
  return 1;
}

//----- (021D3844) --------------------------------------------------------
int __fastcall Function_21d3844(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( !Function_21d387c() )
    return 0;
  *(uint *)(v2 + 5928) += v3;
  Function_21d36fc(v2, *(uint *)(v2 + 4 * *(uint *)(v2 + 5928) + 3956));
  return 1;
}

//----- (021D387C) --------------------------------------------------------
BOOL __fastcall Function_21d387c(int a1, int a2)
{
  return Function_21d37f8(a1, *(uint *)(a1 + 5928) + a2) != 0;
}

//----- (021D3898) --------------------------------------------------------
int __fastcall Function_21d3898(int a1)
{
  return *(uint *)(a1 + 5928);
}

//----- (021D38A4) --------------------------------------------------------
int __fastcall Function_21d38a4(int a1)
{
  return *(uint *)(a1 + 5932);
}

//----- (021D38B0) --------------------------------------------------------
int __fastcall Function_21d38b0(int a1, int a2)
{
  return *(uint *)(a1 + 4 * a2 + 3956);
}

//----- (021D38C0) --------------------------------------------------------
int __fastcall Function_21d38c0(int a1)
{
  int v1;
  int v2;
  int result;
  int v4;

  v1 = a1;
  v2 = 0;
  result = *(uint *)(a1 + 5932);
  if ( result > 0 )
  {
    while ( 1 )
    {
      v4 = Function_21d38b0(v1, v2);
      if ( v4 == Function_21d375c(v1) )
        break;
      result = *(uint *)(v1 + 5932);
      if ( ++v2 >= result )
        return result;
    }
    result = Function_21d3810(v1, v2);
  }
  return result;
}

//----- (021D38FC) --------------------------------------------------------
int __fastcall Function_21d38fc(int a1)
{
  return *(uint *)(a1 + 5944);
}

//----- (021D3908) --------------------------------------------------------
int __fastcall Function_21d3908(int a1)
{
  return *(uint *)(a1 + 5948);
}

//----- (021D3914) --------------------------------------------------------
int __fastcall Function_21d3914(int a1)
{
  return *(uint *)(a1 + 5972);
}

//----- (021D3920) --------------------------------------------------------
int __fastcall Function_21d3920(int a1)
{
  return *(uint *)(a1 + 5968);
}

//----- (021D392C) --------------------------------------------------------
int __fastcall Function_21d392c(int a1, uint a2)
{
  int *v2;
  uint v3;
  ushort v4;
  int result;

  v2 = (int *)a1;
  v3 = a2;
  v4 = Function_21d37bc(a1);
  if ( Function_2027514(*v2) )
    result = Function_20274d0((uint *)*v2, v4, v3);
  else
    result = 0;
  return result;
}

//----- (021D3954) --------------------------------------------------------
int __fastcall Function_21d3954(uint **a1)
{
  return Function_2027494(*a1);
}

//----- (021D3960) --------------------------------------------------------
int __fastcall Function_21d3960(int result)
{
  if ( word_21BF6DE )
  {
    *(uint *)(result + 5976) = 0;
  }
  else if ( dword_21BF6C4 )
  {
    if ( *(uint *)(result + 5976) )
      *(uint *)(result + 5976) = 2;
    else
      *(uint *)(result + 5976) = 1;
  }
  return result;
}

//----- (021D3998) --------------------------------------------------------
int __fastcall Function_21d3998(int a1)
{
  return *(uint *)(a1 + 5976);
}

//----- (021D39A4) --------------------------------------------------------
int __fastcall Function_21d39a4(int result, int *a2, uint *a3, ushort *a4, int a5)
{
  int *v5;
  int v6;
  ushort *v7;
  int v8;
  uint *v9;

  v5 = a2;
  v6 = 0;
  v7 = a4;
  v8 = result;
  v9 = a3;
  for ( *a2 = 0; v6 < a5; ++v7 )
  {
    result = WasPkmnSeen(v9, (ushort)*v7);
    if ( result )
    {
      *(ushort *)(v8 + 2 * *v5) = *v7;
      result = *v5 + 1;
      *v5 = result;
    }
    ++v6;
  }
  return result;
}

//----- (021D39E4) --------------------------------------------------------
int __fastcall Function_21d39e4(int a1, uint *a2, ushort *a3, int a4, ushort *a5, int a6, int a7, uint *a8)
{
  ushort *v8;
  int result;
  int v10;
  ushort *v11;
  uint v12;
  int v13;
  uint *v14;
  int v15;
  int i;

  v13 = a1;
  v14 = a2;
  v8 = a3;
  v15 = a4;
  *a2 = 0;
  result = a4;
  for ( i = 0; i < v15; ++i )
  {
    v10 = 0;
    if ( a6 > 0 )
    {
      v11 = a5;
      do
      {
        v12 = (ushort)*v8;
        if ( v12 == *v11 && (a7 == 1 || HasPokemonBeenCaughtBefore(a8, v12)) )
          break;
        ++v10;
        ++v11;
      }
      while ( v10 < a6 );
    }
    if ( v10 < a6 )
      *(ushort *)(v13 + 2 * (*v14)++) = *v8;
    ++v8;
    result = v15;
  }
  return result;
}

//----- (021D3A60) --------------------------------------------------------
int __fastcall Function_21d3a60(int a1, uint *a2, ushort *a3, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  ushort *v8;
  int v9;
  int v10;
  uint *v11;

  v4 = a1;
  result = 3948;
  v6 = 0;
  v7 = a4;
  v8 = a3;
  v11 = a2;
  for ( *(uint *)(v4 + 3948) = 0; v6 < v7; ++*(uint *)(v4 + 3948) )
  {
    if ( HasPokemonBeenCaughtBefore(v11, *v8) )
    {
      v9 = v4 + 8 * *(uint *)(v4 + 3948);
      v10 = 2;
    }
    else
    {
      v9 = v4 + 8 * *(uint *)(v4 + 3948);
      v10 = 1;
    }
    *(uint *)(v9 + 4) = v10;
    ++v6;
    *(uint *)(v4 + 8 * *(uint *)(v4 + 3948)) = *v8;
    ++v8;
    result = 3948;
  }
  return result;
}

//----- (021D3AB8) --------------------------------------------------------
uint *__fastcall Function_21d3ab8(uint *result, ushort *a2, int a3)
{
  ushort *v3;
  int v4;
  int v5;
  uint *v6;

  v3 = a2;
  v4 = 0;
  result[1482] = 0;
  v5 = 0;
  if ( a3 > 0 )
  {
    v6 = result;
    do
    {
      if ( v4 < result[987] )
      {
        if ( *v6 == *v3 )
        {
          v6 += 2;
          result[result[1482] + 988] = v4++;
        }
        else
        {
          result[result[1482] + 988] = 494;
        }
        ++result[1482];
      }
      ++v3;
      ++v5;
    }
    while ( v5 < a3 );
  }
  return result;
}

//----- (021D3B28) --------------------------------------------------------
int __fastcall Function_21d3b28(int result)
{
  int v1;

  v1 = 0;
  for ( *(uint *)(result + 5928) = 0; v1 < *(uint *)(result + 3948); ++*(uint *)(result + 5928) )
    *(uint *)(result + 4 * *(uint *)(result + 5928) + 3952) = v1++;
  return result;
}

//----- (021D3B64) --------------------------------------------------------
uint *__fastcall Function_21d3b64(int a1, int a2, uint *a3, int a4)
{
  int v4;
  int v5;
  uint *v6;
  int v7;
  uint *result;
  uint v9;
  int v10;

  v10 = a4;
  v4 = a2;
  v5 = a1;
  v6 = a3;
  if ( a2 >= 47 )
    ErrorHandler();
  v7 = Function_20989b8();
  result = Function_2007068(v7, v4 + 11, 0, v5, 0, (int *)&v9);
  *v6 = v9 >> 1;
  return result;
}

//----- (021D3B98) --------------------------------------------------------
uint __fastcall Function_21d3b98(int a1, uchar *a2, int *a3, int a4, int a5, int a6, uint *a7)
{
  uint *v7;
  int *v8;
  int v9;
  uint result;
  uchar *v11;
  ushort *v12;
  int v13;
  int v14;

  v11 = a2;
  v8 = a3;
  v9 = 0;
  v12 = (ushort *)a4;
  switch ( (uchar)a2 )
  {
    case 0:
      v7 = 0;
      break;
    case 1:
      v7 = Function_21d3b64(a6, 2, (uint *)&v13, a4);
      v9 = 1;
      break;
    case 2:
      v7 = Function_21d3b64(a6, 3, (uint *)&v13, a4);
      break;
    case 3:
      v7 = Function_21d3b64(a6, 4, (uint *)&v13, a4);
      break;
    case 4:
      v7 = Function_21d3b64(a6, 5, (uint *)&v13, a4);
      break;
    case 5:
      v7 = Function_21d3b64(a6, 6, (uint *)&v13, a4);
      break;
    default:
      ErrorHandler();
      break;
  }
  if ( v7 )
  {
    Function_21d39e4((int)v11, v8, v7, v13, v12, a5, v9, a7);
    result = free((int)v7);
  }
  else
  {
    memcpy(v11, (char *)v12, 2 * v14);
    result = a5;
    *v8 = a5;
  }
  return result;
}

//----- (021D3C48) --------------------------------------------------------
uint __fastcall Function_21d3c48(int a1, uchar *a2, int *a3, int a4, int a5, int a6, uint *a7)
{
  ushort *v7;
  uchar *v8;
  int *v9;
  uint result;
  char *v11;
  int v12;
  int v13;

  v13 = a4;
  v8 = a2;
  v9 = a3;
  v11 = (char *)a4;
  switch ( (uchar)a2 )
  {
    case 0:
      v7 = 0;
      break;
    case 1:
      v7 = (ushort *)Function_21d3b64(a6, 7, (uint *)&v12, a4);
      break;
    case 2:
      v7 = (ushort *)Function_21d3b64(a6, 8, (uint *)&v12, a4);
      break;
    case 3:
      v7 = (ushort *)Function_21d3b64(a6, 9, (uint *)&v12, a4);
      break;
    case 4:
      v7 = (ushort *)Function_21d3b64(a6, 10, (uint *)&v12, a4);
      break;
    case 5:
      v7 = (ushort *)Function_21d3b64(a6, 11, (uint *)&v12, a4);
      break;
    case 6:
      v7 = (ushort *)Function_21d3b64(a6, 12, (uint *)&v12, a4);
      break;
    case 7:
      v7 = (ushort *)Function_21d3b64(a6, 13, (uint *)&v12, a4);
      break;
    case 8:
      v7 = (ushort *)Function_21d3b64(a6, 14, (uint *)&v12, a4);
      break;
    case 9:
      v7 = (ushort *)Function_21d3b64(a6, 15, (uint *)&v12, a4);
      break;
    default:
      ErrorHandler();
      break;
  }
  if ( v7 )
  {
    Function_21d39e4((int)v8, v9, v11, a5, v7, v12, 1, a7);
    result = free((int)v7);
  }
  else
  {
    memcpy(v8, v11, 2 * v13);
    result = a5;
    *v9 = a5;
  }
  return result;
}

//----- (021D3D2C) --------------------------------------------------------
uint __fastcall Function_21d3d2c(int a1, uchar *a2, int *a3, int a4, int a5, int a6, uint *a7)
{
  ushort *v7;
  uchar *v8;
  int *v9;
  uint result;
  char *v11;
  int v12;
  int v13;

  v13 = a4;
  v8 = a2;
  v9 = a3;
  v11 = (char *)a4;
  switch ( (uchar)a2 )
  {
    case 0:
      v7 = 0;
      break;
    case 1:
      v7 = (ushort *)Function_21d3b64(a6, 16, (uint *)&v12, a4);
      break;
    case 2:
      v7 = (ushort *)Function_21d3b64(a6, 17, (uint *)&v12, a4);
      break;
    case 3:
      v7 = (ushort *)Function_21d3b64(a6, 18, (uint *)&v12, a4);
      break;
    case 4:
      v7 = (ushort *)Function_21d3b64(a6, 19, (uint *)&v12, a4);
      break;
    case 5:
      v7 = (ushort *)Function_21d3b64(a6, 20, (uint *)&v12, a4);
      break;
    case 6:
      v7 = (ushort *)Function_21d3b64(a6, 21, (uint *)&v12, a4);
      break;
    case 7:
      v7 = (ushort *)Function_21d3b64(a6, 22, (uint *)&v12, a4);
      break;
    case 8:
      v7 = (ushort *)Function_21d3b64(a6, 23, (uint *)&v12, a4);
      break;
    case 9:
      v7 = (ushort *)Function_21d3b64(a6, 24, (uint *)&v12, a4);
      break;
    case 0xA:
      v7 = (ushort *)Function_21d3b64(a6, 25, (uint *)&v12, a4);
      break;
    case 0xB:
      v7 = (ushort *)Function_21d3b64(a6, 26, (uint *)&v12, a4);
      break;
    case 0xC:
      v7 = (ushort *)Function_21d3b64(a6, 27, (uint *)&v12, a4);
      break;
    case 0xD:
      v7 = (ushort *)Function_21d3b64(a6, 28, (uint *)&v12, a4);
      break;
    case 0xE:
      v7 = (ushort *)Function_21d3b64(a6, 29, (uint *)&v12, a4);
      break;
    case 0xF:
      v7 = (ushort *)Function_21d3b64(a6, 30, (uint *)&v12, a4);
      break;
    case 0x10:
      v7 = (ushort *)Function_21d3b64(a6, 31, (uint *)&v12, a4);
      break;
    case 0x11:
      v7 = (ushort *)Function_21d3b64(a6, 32, (uint *)&v12, a4);
      break;
    default:
      ErrorHandler();
      break;
  }
  if ( v7 )
  {
    Function_21d39e4((int)v8, v9, v11, a5, v7, v12, 0, a7);
    result = free((int)v7);
  }
  else
  {
    memcpy(v8, v11, 2 * v13);
    result = a5;
    *v9 = a5;
  }
  return result;
}

//----- (021D3E80) --------------------------------------------------------
uint __fastcall Function_21d3e80(int a1, uchar *a2, int *a3, int a4, int a5, int a6, uint *a7)
{
  ushort *v7;
  uchar *v8;
  int *v9;
  uint result;
  char *v11;
  int v12;
  int v13;

  v13 = a4;
  v8 = a2;
  v9 = a3;
  v11 = (char *)a4;
  switch ( (uchar)a2 )
  {
    case 0:
      v7 = 0;
      break;
    case 1:
      v7 = (ushort *)Function_21d3b64(a6, 33, (uint *)&v12, a4);
      break;
    case 2:
      v7 = (ushort *)Function_21d3b64(a6, 34, (uint *)&v12, a4);
      break;
    case 3:
      v7 = (ushort *)Function_21d3b64(a6, 35, (uint *)&v12, a4);
      break;
    case 4:
      v7 = (ushort *)Function_21d3b64(a6, 36, (uint *)&v12, a4);
      break;
    case 5:
      v7 = (ushort *)Function_21d3b64(a6, 37, (uint *)&v12, a4);
      break;
    case 6:
      v7 = (ushort *)Function_21d3b64(a6, 38, (uint *)&v12, a4);
      break;
    case 7:
      v7 = (ushort *)Function_21d3b64(a6, 39, (uint *)&v12, a4);
      break;
    case 8:
      v7 = (ushort *)Function_21d3b64(a6, 40, (uint *)&v12, a4);
      break;
    case 9:
      v7 = (ushort *)Function_21d3b64(a6, 41, (uint *)&v12, a4);
      break;
    case 0xA:
      v7 = (ushort *)Function_21d3b64(a6, 42, (uint *)&v12, a4);
      break;
    case 0xB:
      v7 = (ushort *)Function_21d3b64(a6, 43, (uint *)&v12, a4);
      break;
    case 0xC:
      v7 = (ushort *)Function_21d3b64(a6, 44, (uint *)&v12, a4);
      break;
    case 0xD:
      v7 = (ushort *)Function_21d3b64(a6, 45, (uint *)&v12, a4);
      break;
    case 0xE:
      v7 = (ushort *)Function_21d3b64(a6, 46, (uint *)&v12, a4);
      break;
    default:
      ErrorHandler();
      break;
  }
  if ( v7 )
  {
    Function_21d39e4((int)v8, v9, v11, a5, v7, v12, 1, a7);
    result = free((int)v7);
  }
  else
  {
    memcpy(v8, v11, 2 * v13);
    result = a5;
    *v9 = a5;
  }
  return result;
}

//----- (021D3FA8) --------------------------------------------------------
int __fastcall Function_21d3fa8(int result, uint *a2, uint *a3)
{
  int v3;
  int v4;

  v3 = 0;
  *a2 = 0;
  *a3 = 0;
  if ( *(uint *)(result + 3948) > 0 )
  {
    v4 = result;
    do
    {
      if ( *(uint *)(v4 + 4) == 2 )
        ++*a3;
      ++v3;
      ++*a2;
      v4 += 8;
    }
    while ( v3 < *(uint *)(result + 3948) );
  }
  return result;
}

//----- (021D3FE0) --------------------------------------------------------
int *__fastcall Function_21d3fe0(uint a1)
{
  uint v1;
  int *v2;

  v1 = a1;
  v2 = (int *)malloc(a1, 72);
  if ( !v2 )
    ErrorHandler();
  Call_FillMemWithValue(v2, 0, 0x48u);
  v2[2] = 5;
  v2[17] = v1;
  return v2;
}

//----- (021D4008) --------------------------------------------------------
int __fastcall Function_21d4008(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int result;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    ErrorHandler();
  if ( !v3 )
    ErrorHandler();
  if ( !Function_21d41a8(v2) )
    ErrorHandler();
  *v2 = *(uint *)v3;
  v2[1] = *(uint *)(v3 + 4);
  v2[2] = 0;
  Function_21d41d8(v2 + 3);
  v2[4] = v2[17];
  Function_21d41e4(v2 + 11);
  v2[12] = v2[17];
  v2[8] = **(uint **)(v3 + 8);
  v2[9] = *(uint *)(*(uint *)(v3 + 8) + 4);
  v2[10] = *(uint *)(*(uint *)(v3 + 8) + 8);
  v2[14] = **(uint **)(v3 + 12);
  v2[15] = *(uint *)(*(uint *)(v3 + 12) + 4);
  result = *(uint *)(*(uint *)(v3 + 12) + 8);
  v2[16] = result;
  return result;
}

//----- (021D4078) --------------------------------------------------------
int __fastcall Function_21d4078(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  switch ( (uchar)v1[2] )
  {
    case 0u:
      if ( Function_21d41ec(v1[8], v1 + 3, *v1) == 1 )
      {
        ++v1[2];
        v1[3] = 0;
      }
      goto LABEL_12;
    case 1u:
    case 3u:
      goto LABEL_12;
    case 2u:
      if ( Function_21d41ec(v1[9], v1 + 3, *v1) == 1 )
      {
        ++v1[2];
        v1[3] = 0;
        v1[11] = 0;
      }
      goto LABEL_12;
    case 4u:
      if ( Function_21d41ec(v1[10], v1 + 3, *v1) == 1 )
        ++v1[2];
      goto LABEL_12;
    case 5u:
      result = 1;
      break;
    default:
      ErrorHandler();
LABEL_12:
      result = 0;
      break;
  }
  return result;
}

//----- (021D4100) --------------------------------------------------------
int __fastcall Function_21d4100(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  switch ( (uchar)v1[2] )
  {
    case 0u:
    case 4u:
      goto LABEL_11;
    case 1u:
      if ( Function_21d420c(v1[14], v1[1], v1 + 11, *v1, v1 + 3) == 1 )
      {
        ++v1[2];
        v1[11] = 0;
      }
      goto LABEL_11;
    case 2u:
      Function_21d420c(v1[15], v1[1], v1 + 11, *v1, v1 + 3);
      goto LABEL_11;
    case 3u:
      if ( Function_21d420c(v1[16], v1[1], v1 + 11, *v1, v1 + 3) == 1 )
        ++v1[2];
      goto LABEL_11;
    case 5u:
      result = 1;
      break;
    default:
      ErrorHandler();
LABEL_11:
      result = 0;
      break;
  }
  return result;
}

//----- (021D4194) --------------------------------------------------------
int __fastcall Function_21d4194(int result, int a2)
{
  *(uint *)(result + 28) = a2;
  return result;
}

//----- (021D4198) --------------------------------------------------------
int __fastcall Function_21d4198(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  result = 1;
  *(uint *)(v1 + 24) = 1;
  return result;
}

//----- (021D41A8) --------------------------------------------------------
BOOL __fastcall Function_21d41a8(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return *(uint *)(v1 + 8) == 5;
}

//----- (021D41C0) --------------------------------------------------------
BOOL __fastcall Function_21d41c0(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return *(uint *)(v1 + 8) == 2;
}

//----- (021D41D8) --------------------------------------------------------
uint *__fastcall Function_21d41d8(uint *result)
{
  *result = 0;
  result[2] = 0;
  result[3] = 0;
  return result;
}

//----- (021D41E4) --------------------------------------------------------
uint *__fastcall Function_21d41e4(uint *result)
{
  *result = 0;
  result[2] = 0;
  return result;
}

//----- (021D41EC) --------------------------------------------------------
int __fastcall Function_21d41ec(int (__fastcall *a1)(int, int), int a2, int a3)
{
  int (__fastcall *v3)(int, int);
  int v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( !a1 )
    ErrorHandler();
  if ( !v4 )
    ErrorHandler();
  return v3(v4, v5);
}

//----- (021D420C) --------------------------------------------------------
int __fastcall Function_21d420c(int (__fastcall *a1)(int, int, int, int), int a2, int a3, int a4, int a5)
{
  int (__fastcall *v5)(int, int, int, int);
  int v6;
  int v7;
  int v8;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  if ( !a1 )
    ErrorHandler();
  if ( !v7 )
    ErrorHandler();
  if ( !a5 )
    ErrorHandler();
  return v5(v6, v7, v8, a5);
}

//----- (021D423C) --------------------------------------------------------
uchar *__fastcall Function_21d423c(uint a1)
{
  uchar *v1;

  v1 = (uchar *)malloc(a1, 12);
  if ( !v1 )
    ErrorHandler();
  *v1 = 0;
  v1[1] = 0;
  v1[2] = 0;
  v1[3] = 0;
  v1[4] = 0;
  v1[5] = 0;
  v1[6] = 0;
  v1[7] = 0;
  v1[8] = 0;
  v1[9] = 0;
  v1[10] = 0;
  v1[11] = 0;
  return v1;
}

//----- (021D426C) --------------------------------------------------------
uint __fastcall Function_21d426c(uint result, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;

  v3 = (uint *)result;
  v4 = a2;
  v5 = a3;
  if ( !result )
    result = ErrorHandler();
  *v3 = v4;
  v3[1] = v5;
  return result;
}

//----- (021D4284) --------------------------------------------------------
int __fastcall Function_21d4284(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    ErrorHandler();
  if ( !Function_21d42ec(v2) )
  {
    v4 = Function_21d42fc(v2, v3);
    if ( v4 )
      Function_21d4334(v2, v4);
  }
  if ( Function_21d42ec(v2) == 1 && (*(int (__fastcall **)(int))(*(uint *)(v2 + 8) + 4))(*(uint *)(v2 + 8) + 8) == 1 )
    Function_21d4334(v2, 0);
  return *(uint *)(v2 + 8);
}

//----- (021D42D4) --------------------------------------------------------
BOOL __fastcall Function_21d42d4(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return *(uint *)(v1 + 8) != 0;
}

//----- (021D42EC) --------------------------------------------------------
BOOL __fastcall Function_21d42ec(int a1)
{
  return *(uint *)(a1 + 8) != 0;
}

//----- (021D42FC) --------------------------------------------------------
int __fastcall Function_21d42fc(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  if ( a1[1] <= 0 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( !*v2 )
      ErrorHandler();
    if ( *(uint *)(*v2 + v5) & v3 )
      break;
    ++v4;
    v5 += 20;
    if ( v4 >= v2[1] )
      return 0;
  }
  return *v2 + 20 * v4;
}

//----- (021D4334) --------------------------------------------------------
int __fastcall Function_21d4334(int result, int a2)
{
  *(uint *)(result + 8) = a2;
  if ( a2 )
  {
    result = 0;
    *(uint *)(a2 + 8) = 0;
  }
  return result;
}

//----- (021D4340) --------------------------------------------------------
int __fastcall Function_21d4340(uint *a1)
{
  uint *v1;
  uint *v2;
  int result;

  v1 = a1;
  v2 = (uint *)a1[2];
  switch ( (uchar)*a1 )
  {
    case 0u:
      Function_21d4198(v2[1]);
      ++*v1;
      goto LABEL_9;
    case 1u:
      if ( Function_21d41a8(v2[1]) == 1 )
        ++*v1;
      goto LABEL_9;
    case 2u:
      Function_21d4628(*v2, v2[2], v2[1]);
      ++*v1;
      goto LABEL_9;
    case 3u:
      if ( Function_21d41c0(v2[1]) != 1 )
        goto LABEL_9;
      result = 1;
      break;
    default:
      ErrorHandler();
LABEL_9:
      result = 0;
      break;
  }
  return result;
}

//----- (021D43A8) --------------------------------------------------------
int __fastcall Function_21d43a8(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  BOOL *v8;
  int result;
  BOOL v10;
  BOOL v11;
  BOOL v12;
  BOOL v13;
  int v14;

  v14 = a4;
  v4 = a1;
  v5 = *a1;
  v6 = v4[2];
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      v10 = Function_21d41a8(*(uint *)v6);
      v11 = Function_21d41a8(*(uint *)(v6 + 4));
      v12 = Function_21d41a8(*(uint *)(v6 + 8));
      v13 = Function_21d41a8(*(uint *)(v6 + 12));
      v7 = 0;
      v8 = &v10;
      do
      {
        if ( !*v8 )
          break;
        ++v7;
        ++v8;
      }
      while ( v7 < 4 );
      if ( v7 >= 4 )
        ++*v4;
    }
    else
    {
      if ( v5 == 2 )
      {
        result = 1;
        **(uint **)(v6 + 16) = 1;
        return result;
      }
      ErrorHandler();
    }
  }
  else
  {
    Function_21d4198(*(uint *)v6);
    Function_21d4198(*(uint *)(v6 + 4));
    Function_21d4198(*(uint *)(v6 + 8));
    Function_21d4198(*(uint *)(v6 + 12));
    ++*v4;
  }
  return 0;
}

//----- (021D4434) --------------------------------------------------------
int __fastcall Function_21d4434(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  uint v5;
  int *v6;
  int v7;
  BOOL *v8;
  int v9;
  BOOL *v10;
  int result;
  BOOL v12;
  BOOL v13;
  BOOL v14;
  BOOL v15;
  int v16;

  v16 = a4;
  v4 = a1;
  v5 = *a1;
  v6 = (int *)v4[2];
  if ( v5 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_21D4450 + v5) + 35472466);
  switch ( (uchar)v5 )
  {
    case 0:
      Function_21d4198(*v6);
      Function_21d4198(v6[1]);
      Function_21d4198(v6[2]);
      Function_21d4198(v6[3]);
      ++*v4;
      goto LABEL_28;
    case 1:
      v12 = Function_21d41a8(*v6);
      v13 = Function_21d41a8(v6[1]);
      v14 = Function_21d41a8(v6[2]);
      v15 = Function_21d41a8(v6[3]);
      v7 = 0;
      v8 = &v12;
      do
      {
        if ( !*v8 )
          break;
        ++v7;
        ++v8;
      }
      while ( v7 < 4 );
      if ( v7 >= 4 )
        ++*v4;
      goto LABEL_28;
    case 2:
      Function_21d4628(v6[8], v6[4], *v6);
      Function_21d4628(v6[9], v6[5], v6[1]);
      Function_21d4628(v6[10], v6[6], v6[2]);
      Function_21d4628(v6[11], v6[7], v6[3]);
      ++*v4;
      goto LABEL_28;
    case 3:
      if ( v6[8] )
        v12 = Function_21d41c0(*v6);
      else
        v12 = 1;
      if ( v6[9] )
        v13 = Function_21d41c0(v6[1]);
      if ( v6[10] )
        v14 = Function_21d41c0(v6[2]);
      else
        v14 = 1;
      if ( v6[11] )
        v15 = Function_21d41c0(v6[3]);
      else
        v15 = 1;
      v9 = 0;
      v10 = &v12;
      do
      {
        if ( !*v10 )
          break;
        ++v9;
        ++v10;
      }
      while ( v9 < 4 );
      if ( v9 < 4 )
        goto LABEL_28;
      result = 1;
      break;
    default:
      ErrorHandler();
LABEL_28:
      result = 0;
      break;
  }
  return result;
}

//----- (021D4558) --------------------------------------------------------
int __fastcall Function_21d4558(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int *v5;
  int v6;
  BOOL *v7;
  int v8;
  BOOL *v9;
  int result;
  BOOL v11;
  BOOL v12;
  int v13;

  v13 = a4;
  v4 = a1;
  v5 = (int *)a1[2];
  switch ( (uchar)*a1 )
  {
    case 0u:
      Function_21d4198(*v5);
      Function_21d4198(v5[1]);
      ++*v4;
      goto LABEL_21;
    case 1u:
      v11 = Function_21d41a8(*v5);
      v12 = Function_21d41a8(v5[1]);
      v6 = 0;
      v7 = &v11;
      do
      {
        if ( !*v7 )
          break;
        ++v6;
        ++v7;
      }
      while ( v6 < 2 );
      if ( v6 >= 2 )
        ++*v4;
      goto LABEL_21;
    case 2u:
      Function_21d4628(v5[4], v5[2], *v5);
      Function_21d4628(v5[5], v5[3], v5[1]);
      ++*v4;
      goto LABEL_21;
    case 3u:
      if ( v5[4] )
        v11 = Function_21d41c0(*v5);
      else
        v11 = 1;
      if ( v5[5] )
        v12 = Function_21d41c0(v5[1]);
      else
        v12 = 1;
      v8 = 0;
      v9 = &v11;
      do
      {
        if ( !*v9 )
          break;
        ++v8;
        ++v9;
      }
      while ( v8 < 2 );
      if ( v8 < 2 )
        goto LABEL_21;
      result = 1;
      break;
    default:
      ErrorHandler();
LABEL_21:
      result = 0;
      break;
  }
  return result;
}

//----- (021D4628) --------------------------------------------------------
int *__fastcall Function_21d4628(int *result, uint a2, uint *a3, int a4)
{
  int *v4;
  uint v5;
  int v6;
  int v7;
  int *v8;
  int *v9;
  int v10;

  v10 = a4;
  v4 = result;
  v5 = a2;
  if ( result )
  {
    v6 = *result;
    v7 = result[1];
    v8 = result + 2;
    v9 = result + 5;
    Function_21d4008(a3, (int)&v6);
    result = (int *)Function_21d426c(v5, v4[8], v4[9]);
  }
  return result;
}

//----- (021D4660) --------------------------------------------------------
int __fastcall Function_21d4660(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( !*(uint *)(a1 + 16) )
    ErrorHandler();
  free(*(uint *)(v1 + 16));
  result = 0;
  *(uint *)(v1 + 16) = 0;
  return result;
}

//----- (021D467C) --------------------------------------------------------
int __fastcall Function_21d467c(uint a1, uint *a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int *v6;
  int result;

  v4 = a2;
  *a2 = a4;
  a2[1] = Function_21d4434;
  v5 = a3;
  v6 = (int *)malloc(a1, 48);
  if ( !v6 )
    ErrorHandler();
  Call_FillMemWithValue(v6, 0, 0x30u);
  *v6 = Function_21d12ec(v5);
  v6[1] = Function_21d1300(v5);
  v6[2] = Function_21d1314(v5);
  v6[3] = Function_21d1328(v5);
  v6[4] = Function_21d133c(v5);
  v6[5] = Function_21d1350(v5);
  v6[6] = Function_21d1364(v5);
  v6[7] = Function_21d1378(v5);
  v6[8] = Function_21d1410(v5, 1);
  v6[9] = Function_21d1430(v5, 1);
  result = 0;
  v6[10] = 0;
  v6[11] = 0;
  v4[4] = v6;
  return result;
}

//----- (021D4704) --------------------------------------------------------
int __fastcall Function_21d4704(uint a1, uint *a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int *v6;
  int *v7;
  int v8;
  int result;

  v4 = a2;
  *a2 = a4;
  a2[1] = Function_21d43a8;
  v5 = a3;
  v6 = (int *)malloc(a1, 20);
  if ( !v6 )
    ErrorHandler();
  v7 = v6;
  v8 = 20;
  do
  {
    *(uchar *)v7 = 0;
    v7 = (int *)((char *)v7 + 1);
    --v8;
  }
  while ( v8 );
  *v6 = Function_21d12ec(v5);
  v6[1] = Function_21d1300(v5);
  v6[2] = Function_21d1314(v5);
  v6[3] = Function_21d1328(v5);
  result = Function_21d13dc(v5);
  v6[4] = result;
  v4[4] = v6;
  return result;
}

//----- (021D475C) --------------------------------------------------------
int __fastcall Function_21d475c(uint a1, uint *a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int *v6;
  int result;

  v4 = a2;
  *a2 = a4;
  a2[1] = Function_21d4434;
  v5 = a3;
  v6 = (int *)malloc(a1, 48);
  if ( !v6 )
    ErrorHandler();
  Call_FillMemWithValue(v6, 0, 0x30u);
  *v6 = Function_21d12ec(v5);
  v6[1] = Function_21d1300(v5);
  v6[2] = Function_21d1314(v5);
  v6[3] = Function_21d1328(v5);
  v6[4] = Function_21d133c(v5);
  v6[5] = Function_21d1350(v5);
  v6[6] = Function_21d1364(v5);
  v6[7] = Function_21d1378(v5);
  v6[8] = Function_21d1410(v5, 2);
  v6[9] = Function_21d1430(v5, 2);
  v6[10] = Function_21d1410(v5, 5);
  result = Function_21d1430(v5, 3);
  v6[11] = result;
  v4[4] = v6;
  return result;
}

//----- (021D47F0) --------------------------------------------------------
int __fastcall Function_21d47f0(uint a1, uint *a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int *v6;
  int result;

  v4 = a2;
  *a2 = a4;
  a2[1] = Function_21d4434;
  v5 = a3;
  v6 = (int *)malloc(a1, 48);
  if ( !v6 )
    ErrorHandler();
  Call_FillMemWithValue(v6, 0, 0x30u);
  *v6 = Function_21d12ec(v5);
  v6[1] = Function_21d1300(v5);
  v6[2] = Function_21d1314(v5);
  v6[3] = Function_21d1328(v5);
  v6[4] = Function_21d133c(v5);
  v6[5] = Function_21d1350(v5);
  v6[6] = Function_21d1364(v5);
  v6[7] = Function_21d1378(v5);
  v6[8] = Function_21d1410(v5, 0);
  v6[9] = Function_21d1430(v5, 0);
  result = 0;
  v6[10] = 0;
  v6[11] = 0;
  v4[4] = v6;
  return result;
}

//----- (021D4878) --------------------------------------------------------
int __fastcall Function_21d4878(uint *a1, int a2, uint a3, int a4)
{
  uint *v4;
  int v5;
  int *v6;
  int result;

  v4 = a1;
  *a1 = a4;
  v5 = a2;
  a1[1] = Function_21d4340;
  v6 = (int *)malloc(a3, 12);
  if ( !v6 )
    ErrorHandler();
  *v6 = Function_21d1410(v5, 0);
  v6[1] = Function_21d12ec(v5);
  result = Function_21d133c(v5);
  v6[2] = result;
  v4[4] = v6;
  return result;
}

//----- (021D48B8) --------------------------------------------------------
int __fastcall Function_21d48b8(uint a1, uint *a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int *v6;
  int *v7;
  int v8;
  int result;

  v4 = a2;
  *a2 = a4;
  a2[1] = Function_21d4558;
  v5 = a3;
  v6 = (int *)malloc(a1, 24);
  if ( !v6 )
    ErrorHandler();
  v7 = v6;
  v8 = 24;
  do
  {
    *(uchar *)v7 = 0;
    v7 = (int *)((char *)v7 + 1);
    --v8;
  }
  while ( v8 );
  *v6 = Function_21d12ec(v5);
  v6[1] = Function_21d1300(v5);
  v6[2] = Function_21d133c(v5);
  v6[3] = Function_21d1350(v5);
  v6[4] = Function_21d1410(v5, 6);
  result = Function_21d1430(v5, 4);
  v6[5] = result;
  v4[4] = v6;
  return result;
}

//----- (021D491C) --------------------------------------------------------
int __fastcall Function_21d491c(uint a1, uint *a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int *v6;
  int *v7;
  int v8;
  int result;

  v4 = a2;
  *a2 = a4;
  a2[1] = Function_21d4558;
  v5 = a3;
  v6 = (int *)malloc(a1, 24);
  if ( !v6 )
    ErrorHandler();
  v7 = v6;
  v8 = 24;
  do
  {
    *(uchar *)v7 = 0;
    v7 = (int *)((char *)v7 + 1);
    --v8;
  }
  while ( v8 );
  *v6 = Function_21d12ec(v5);
  v6[1] = Function_21d1300(v5);
  v6[2] = Function_21d133c(v5);
  v6[3] = Function_21d1350(v5);
  v6[4] = Function_21d1410(v5, 7);
  result = Function_21d1430(v5, 5);
  v6[5] = result;
  v4[4] = v6;
  return result;
}

//----- (021D4980) --------------------------------------------------------
int __fastcall Function_21d4980(uint a1, uint *a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int *v6;
  int *v7;
  int v8;
  int result;

  v4 = a2;
  *a2 = a4;
  a2[1] = Function_21d4558;
  v5 = a3;
  v6 = (int *)malloc(a1, 24);
  if ( !v6 )
    ErrorHandler();
  v7 = v6;
  v8 = 24;
  do
  {
    *(uchar *)v7 = 0;
    v7 = (int *)((char *)v7 + 1);
    --v8;
  }
  while ( v8 );
  *v6 = Function_21d12ec(v5);
  v6[1] = Function_21d1300(v5);
  v6[2] = Function_21d133c(v5);
  v6[3] = Function_21d1350(v5);
  v6[4] = Function_21d1410(v5, 8);
  result = Function_21d1430(v5, 6);
  v6[5] = result;
  v4[4] = v6;
  return result;
}

//----- (021D49E4) --------------------------------------------------------
int __fastcall Function_21d49e4(uint a1, uint *a2, int a3, int a4)
{
  uint *v4;
  int v5;
  uchar *v6;
  int result;

  v4 = a2;
  *a2 = a4;
  a2[1] = Function_21d4340;
  v5 = a3;
  v6 = (uchar *)malloc(a1, 12);
  if ( !v6 )
    ErrorHandler();
  *v6 = 0;
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
  *((uint *)v6 + 1) = Function_21d12ec(v5);
  *((uint *)v6 + 2) = Function_21d133c(v5);
  result = Function_21d1410(v5, 8);
  *(uint *)v6 = result;
  v4[4] = v6;
  return result;
}

//----- (021D4A3C) --------------------------------------------------------
int __fastcall Function_21d4a3c(uint a1, uint *a2, int a3, int a4)
{
  uint *v4;
  int v5;
  uchar *v6;
  int result;

  v4 = a2;
  *a2 = a4;
  a2[1] = Function_21d4340;
  v5 = a3;
  v6 = (uchar *)malloc(a1, 12);
  if ( !v6 )
    ErrorHandler();
  *v6 = 0;
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
  *((uint *)v6 + 1) = Function_21d12ec(v5);
  *((uint *)v6 + 2) = Function_21d133c(v5);
  result = Function_21d1410(v5, 9);
  *(uint *)v6 = result;
  v4[4] = v6;
  return result;
}

//----- (021D4A94) --------------------------------------------------------
int __fastcall Function_21d4a94(uint a1, uint *a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int *v6;
  int *v7;
  int v8;
  int result;

  v4 = a2;
  *a2 = a4;
  a2[1] = Function_21d4558;
  v5 = a3;
  v6 = (int *)malloc(a1, 24);
  if ( !v6 )
    ErrorHandler();
  v7 = v6;
  v8 = 24;
  do
  {
    *(uchar *)v7 = 0;
    v7 = (int *)((char *)v7 + 1);
    --v8;
  }
  while ( v8 );
  *v6 = Function_21d12ec(v5);
  v6[1] = Function_21d1300(v5);
  v6[2] = Function_21d133c(v5);
  v6[3] = Function_21d1350(v5);
  v6[4] = Function_21d1410(v5, 2);
  result = Function_21d1430(v5, 2);
  v6[5] = result;
  v4[4] = v6;
  return result;
}

//----- (021D4AF8) --------------------------------------------------------
int __fastcall Function_21d4af8(uint a1, uint *a2, int a3, int a4)
{
  uint *v4;
  int v5;
  uchar *v6;
  int result;

  v4 = a2;
  *a2 = a4;
  a2[1] = Function_21d4340;
  v5 = a3;
  v6 = (uchar *)malloc(a1, 12);
  if ( !v6 )
    ErrorHandler();
  *v6 = 0;
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
  *((uint *)v6 + 1) = Function_21d12ec(v5);
  *((uint *)v6 + 2) = Function_21d133c(v5);
  result = Function_21d1410(v5, 2);
  *(uint *)v6 = result;
  v4[4] = v6;
  return result;
}

//----- (021D4B50) --------------------------------------------------------
int __fastcall Function_21d4b50(uint a1, uint *a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int *v6;
  int *v7;
  int v8;
  int result;

  v4 = a2;
  *a2 = a4;
  a2[1] = Function_21d4558;
  v5 = a3;
  v6 = (int *)malloc(a1, 24);
  if ( !v6 )
    ErrorHandler();
  v7 = v6;
  v8 = 24;
  do
  {
    *(uchar *)v7 = 0;
    v7 = (int *)((char *)v7 + 1);
    --v8;
  }
  while ( v8 );
  *v6 = Function_21d12ec(v5);
  v6[1] = Function_21d1300(v5);
  v6[2] = Function_21d133c(v5);
  v6[3] = Function_21d1350(v5);
  v6[4] = Function_21d1410(v5, 3);
  result = Function_21d1430(v5, 7);
  v6[5] = result;
  v4[4] = v6;
  return result;
}

//----- (021D4BB4) --------------------------------------------------------
int __fastcall Function_21d4bb4(uint a1, uint *a2, int a3, int a4)
{
  uint *v4;
  int v5;
  uchar *v6;
  int result;

  v4 = a2;
  *a2 = a4;
  a2[1] = Function_21d4340;
  v5 = a3;
  v6 = (uchar *)malloc(a1, 12);
  if ( !v6 )
    ErrorHandler();
  *v6 = 0;
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
  *((uint *)v6 + 1) = Function_21d12ec(v5);
  *((uint *)v6 + 2) = Function_21d133c(v5);
  result = Function_21d1410(v5, 4);
  *(uint *)v6 = result;
  v4[4] = v6;
  return result;
}

//----- (021D4C0C) --------------------------------------------------------
int __fastcall Function_21d4c0c(uint *a1)
{
  uint *v1;
  int v2;
  uchar *v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = malloc(a1[3], 24);
  if ( !v2 )
    ErrorHandler();
  v3 = (uchar *)v2;
  v4 = 24;
  do
  {
    *v3++ = 0;
    --v4;
  }
  while ( v4 );
  *(uint *)v2 = Function_2012744(v1[2], v1[3]);
  v5 = malloc(v1[3], 16 * v1[2]);
  *(uint *)(v2 + 12) = v5;
  if ( !v5 )
    ErrorHandler();
  Call_FillMemWithValue(*(int **)(v2 + 12), 0, 16 * v1[2]);
  *(uint *)(v2 + 16) = v1[2];
  *(uint *)(v2 + 4) = *v1;
  *(uint *)(v2 + 8) = v1[1];
  *(uint *)(v2 + 20) = v1[3];
  return v2;
}

//----- (021D4C6C) --------------------------------------------------------
uint __fastcall Function_21d4c6c(int *a1)
{
  int *v1;
  int *v2;
  int v3;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  Function_21d4d3c(v1);
  free(v1[3]);
  Function_20127bc(*v1);
  v2 = v1;
  v3 = 24;
  do
  {
    *(uchar *)v2 = 0;
    v2 = (int *)((char *)v2 + 1);
    --v3;
  }
  while ( v3 );
  return free((int)v1);
}

//----- (021D4CA0) --------------------------------------------------------
int __fastcall Function_21d4ca0(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_2012898(*(uint *)(a1 + 4), *(uint *)(v1 + 32), *(uint *)(v1 + 36));
  return Function_21d4cb8(v1, v2);
}

//----- (021D4CB8) --------------------------------------------------------
int **__fastcall Function_21d4cb8(int **a1, uint a2)
{
  int **v2;
  uint v3;
  int **v4;
  int v6;
  int *v7;
  int v8;
  int *v9;
  int *v10;
  int *v11;
  int *v12;
  int *v13;
  int *v14;
  int *v15;
  int *v16;
  int *v17;

  v2 = a1;
  v3 = a2;
  v4 = (int **)Function_21d4eb4(*a1);
  if ( !v4 )
    ErrorHandler();
  Function_201ed94(v3, 1, (int)v2[8], (int)(v4 + 1));
  v6 = **v2;
  v7 = v2[1];
  v8 = (*v2)[1];
  v9 = v2[2];
  v10 = v2[3];
  v11 = v4[2];
  v12 = v2[4];
  v13 = v2[5];
  v14 = v2[6];
  v15 = v2[7];
  v16 = v2[8];
  v17 = v2[9];
  *v4 = Function_20127e8(&v6);
  return v4;
}

//----- (021D4D1C) --------------------------------------------------------
int __fastcall Function_21d4d1c(int **a1)
{
  int **v1;
  int v2;
  int result;

  v1 = a1;
  Function_2012870(*a1);
  Function_201ee28((int)(v1 + 1));
  v2 = 16;
  result = 0;
  do
  {
    *(uchar *)v1 = 0;
    v1 = (int **)((char *)v1 + 1);
    --v2;
  }
  while ( v2 );
  return result;
}

//----- (021D4D3C) --------------------------------------------------------
int __fastcall Function_21d4d3c(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;

  v1 = a1;
  result = *(uint *)(a1 + 16);
  v3 = 0;
  if ( result > 0 )
  {
    v4 = 0;
    do
    {
      if ( Function_21d4ea4(*(uint *)(v1 + 12) + v4) )
        Function_21d4d1c((int **)(*(uint *)(v1 + 12) + v4));
      result = *(uint *)(v1 + 16);
      ++v3;
      v4 += 16;
    }
    while ( v3 < result );
  }
  return result;
}

//----- (021D4D6C) --------------------------------------------------------
int __fastcall Function_21d4d6c(int a1, uchar a2, uchar a3)
{
  int v3;
  uchar v4;
  uchar v5;
  int v6;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_201a778(*(uint *)(a1 + 20), 1);
  Function_201a7a0(v6);
  Function_201a870(*(uint **)(v3 + 8), v6, v4, v5, 0, 0);
  return v6;
}

//----- (021D4DA0) --------------------------------------------------------
uint __fastcall Function_21d4da0(int a1)
{
  return Function_201a928(a1, 1);
}

//----- (021D4DAC) --------------------------------------------------------
int __fastcall Function_21d4dac(int a1, int a2, int a3, uint a4)
{
  uint v4;
  int v5;
  ushort **v6;
  ushort *v7;
  int v8;
  int v9;

  v4 = a4;
  v5 = a2;
  v6 = (ushort **)LoadFromMsgNARC(0, 26, a3, *(uint *)(a1 + 20));
  if ( !v6 )
    ErrorHandler();
  v7 = Function_200b1ec_CallMsgDecrypt(v6, v4);
  Function_201d78c(v5, 2);
  v8 = Function_2002d7c(2, (int)v7, 0);
  Function_20237bc_FreeMsg((int)v7, v9);
  Function_200b190((ushort *)v6);
  return v8;
}

//----- (021D4E10) --------------------------------------------------------
ushort *__fastcall Function_21d4e10(int a1, int a2, int a3, uint a4)
{
  uint v4;
  int v5;
  ushort **v6;
  ushort *v7;
  int v8;

  v4 = a4;
  v5 = a2;
  v6 = (ushort **)LoadFromMsgNARC(0, 26, a3, *(uint *)(a1 + 20));
  if ( !v6 )
    ErrorHandler();
  v7 = Function_200b1ec_CallMsgDecrypt(v6, v4);
  Function_2002d7c(2, (int)v7, 0);
  Function_201c294(v5);
  Function_201d78c(v5, 2);
  Function_20237bc_FreeMsg((int)v7, v8);
  return Function_200b190((ushort *)v6);
}

//----- (021D4E80) --------------------------------------------------------
int __fastcall Function_21d4e80(int a1, int a2)
{
  return Function_201d78c(a2, 2);
}

//----- (021D4EA4) --------------------------------------------------------
BOOL __fastcall Function_21d4ea4(uint *a1)
{
  return *a1 != 0;
}

//----- (021D4EB4) --------------------------------------------------------
int __fastcall Function_21d4eb4(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = 0;
  if ( *(uint *)(a1 + 16) <= 0 )
    return 0;
  v3 = 0;
  while ( Function_21d4ea4((uint *)(*(uint *)(v1 + 12) + v3)) )
  {
    ++v2;
    v3 += 16;
    if ( v2 >= *(uint *)(v1 + 16) )
      return 0;
  }
  return *(uint *)(v1 + 12) + 16 * v2;
}

//----- (021D4EE4) --------------------------------------------------------
long long __fastcall Function_21d4ee4(uint a1)
{
  long long result;
  uchar *v2;
  int v3;

  result = (uint)malloc(a1, 20);
  v2 = (uchar *)result;
  v3 = 20;
  do
  {
    *v2++ = 0;
    --v3;
  }
  while ( v3 );
  return result;
}

//----- (021D4EFC) --------------------------------------------------------
uint __fastcall Function_21d4efc(int a1)
{
  return free(a1);
}

//----- (021D4F04) --------------------------------------------------------
uint *__fastcall Function_21d4f04(uint *result, int a2, int a3, int a4)
{
  uchar *v4;
  int v5;

  v4 = result;
  v5 = 20;
  do
  {
    *v4++ = 0;
    --v5;
  }
  while ( v5 );
  *result = a2;
  result[1] = a3;
  result[2] = a4;
  return result;
}

//----- (021D4F20) --------------------------------------------------------
int __fastcall Function_21d4f20(int result, char a2, int a3)
{
  int v3;
  int v4;

  v3 = result;
  v4 = a3;
  switch ( a2 )
  {
    case 0:
      result = Function_21d50e0();
      break;
    case 1:
      result = Function_21d5110();
      break;
    case 2:
      if ( a3 < 0 || (result = *(uint *)(result + 4), a3 >= result) )
        result = ErrorHandler();
      *(uint *)(v3 + 12) = v4;
      break;
    case 3:
      if ( a3 < 0 || (result = *(uint *)(result + 8), a3 >= result) )
        result = ErrorHandler();
      *(uint *)(v3 + 16) = v4;
      break;
    case 4:
      result = Function_21d5140();
      break;
    default:
      return result;
  }
  return result;
}

//----- (021D4F7C) --------------------------------------------------------
int __fastcall Function_21d4f7c(uint *a1)
{
  return *(uint *)(*a1 + 28 * (a1[4] * a1[1] + a1[3]) + 24);
}

//----- (021D4F94) --------------------------------------------------------
int __fastcall Function_21d4f94(uint *a1, uint *a2, uint *a3)
{
  int v3;
  int result;

  v3 = 28 * (a1[4] * a1[1] + a1[3]);
  *a2 = *(uint *)(*a1 + v3);
  result = *(uint *)(*a1 + v3 + 4);
  *a3 = result;
  return result;
}

//----- (021D4FBC) --------------------------------------------------------
int __fastcall Function_21d4fbc(uint *a1, uint *a2, uint *a3)
{
  int v3;
  int result;

  v3 = 28 * (a1[4] * a1[1] + a1[3]);
  *a2 = *(uint *)(*a1 + v3 + 8);
  result = *(uint *)(*a1 + v3 + 12);
  *a3 = result;
  return result;
}

//----- (021D4FE4) --------------------------------------------------------
uint *__fastcall Function_21d4fe4(uint *result, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  *result = a2;
  result[1] = a3;
  result[2] = a4;
  result[3] = a5;
  result[4] = a6;
  result[5] = a7;
  result[6] = a8;
  return result;
}

//----- (021D4FFC) --------------------------------------------------------
int __fastcall Function_21d4ffc(uint a1, int *a2, int *a3, int a4, int a5, int a6, int a7)
{
  int v7;
  int result;
  int v9;

  if ( a1 && a1 != 2 )
    v7 = a4 + a6 / 2;
  else
    v7 = a4 - a6 / 2;
  if ( a1 > 1 )
  {
    result = a7 / 2;
    v9 = a5 + a7 / 2;
  }
  else
  {
    result = a7 / 2;
    v9 = a5 - a7 / 2;
  }
  *a2 = v7;
  *a3 = v9;
  return result;
}

//----- (021D5040) --------------------------------------------------------
int __fastcall Function_21d5040(uint *a1, int a2)
{
  int v2;
  uint *v3;
  int v4;
  int result;

  v3 = a1;
  v4 = a2;
  if ( a2 != -1 && a2 != 1 )
    ErrorHandler();
  result = v3[3];
  do
  {
    result += v4;
    if ( result < 0 )
      break;
    if ( result >= v3[1] )
      break;
    v2 = *v3 + 28 * (v3[1] * v3[4] + result);
  }
  while ( *(uint *)(v2 + 16) == 2 );
  if ( result >= 0 && result < v3[1] && !*(uint *)(v2 + 16) )
    v3[3] = result;
  return result;
}

//----- (021D5090) --------------------------------------------------------
int __fastcall Function_21d5090(uint *a1, int a2)
{
  int v2;
  uint *v3;
  int v4;
  int result;

  v3 = a1;
  v4 = a2;
  if ( a2 != -1 && a2 != 1 )
    ErrorHandler();
  result = v3[4];
  do
  {
    result += v4;
    if ( result < 0 )
      break;
    if ( result >= v3[2] )
      break;
    v2 = *v3 + 28 * (result * v3[1] + v3[3]);
  }
  while ( *(uint *)(v2 + 20) == 2 );
  if ( result >= 0 && result < v3[2] && !*(uint *)(v2 + 16) )
    v3[4] = result;
  return result;
}

//----- (021D50E0) --------------------------------------------------------
uint __fastcall Function_21d50e0(uint *a1, int a2)
{
  uint *v2;
  int v3;
  uint result;
  int v5;
  int i;

  v2 = a1;
  if ( a2 >= 0 )
    v3 = a2;
  else
    v3 = -a2;
  result = s32_div_f(a2, v3);
  v5 = result;
  for ( i = 0; i < v3; ++i )
    result = Function_21d5040(v2, v5);
  return result;
}

//----- (021D5110) --------------------------------------------------------
uint __fastcall Function_21d5110(uint *a1, int a2)
{
  uint *v2;
  int v3;
  uint result;
  int v5;
  int i;

  v2 = a1;
  if ( a2 >= 0 )
    v3 = a2;
  else
    v3 = -a2;
  result = s32_div_f(a2, v3);
  v5 = result;
  for ( i = 0; i < v3; ++i )
    result = Function_21d5090(v2, v5);
  return result;
}

//----- (021D5140) --------------------------------------------------------
uint __fastcall Function_21d5140(int *a1, int a2)
{
  int *v2;
  int v3;
  uint result;
  int v5;
  int v6;
  int v7;
  int v8;

  v2 = a1;
  v3 = a1[1];
  result = a1[2];
  v5 = v3 * result;
  v6 = 0;
  if ( (int)(v3 * result) > 0 )
  {
    v7 = *v2;
    while ( 1 )
    {
      result = *(uint *)(v7 + 24);
      if ( a2 == result )
        break;
      ++v6;
      v7 += 28;
      if ( v6 >= v5 )
        return result;
    }
    s32_div_f(v6, v3);
    v2[3] = v8;
    result = s32_div_f(v6, v2[1]);
    v2[4] = result;
  }
  return result;
}

//----- (021D517C) --------------------------------------------------------
int __fastcall Function_21d517c(int a1, int a2, int a3, int a4, uchar a5, int a6, uchar a7, uchar a8, ushort a9, ushort a10)
{
  int result;
  int v11;
  int v12;
  uchar *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;

  v14 = a1;
  v16 = a3;
  v15 = a2;
  v17 = a4;
  v20 = 0;
  result = a8;
  if ( (int)a8 > 0 )
  {
    v19 = 0;
    v18 = 0;
    do
    {
      v11 = 0;
      if ( (int)a7 > 0 )
      {
        v12 = 0;
        v13 = (uchar *)(a6 + v18);
        do
        {
          Function_21d5248(v14, v15, v16, v17, a5, *v13, (a9 + v12) & 0xFF, (a10 + v19) & 0xFF);
          ++v11;
          v12 += a5;
          ++v13;
        }
        while ( v11 < a7 );
      }
      v19 += a5;
      v18 += a8;
      result = a8;
      ++v20;
    }
    while ( v20 < a8 );
  }
  return result;
}

//----- (021D5214) --------------------------------------------------------
int __fastcall Function_21d5214(int result, int a2, int a3)
{
  int v3;
  int v4;
  int i;
  int j;
  int v7;

  v3 = a3;
  v7 = result;
  v4 = a2;
  for ( i = 0; i < v3; ++i )
  {
    for ( j = 0; j < v4; ++j )
      result = Function_21d52a0(v7, j, i, v4, v3);
  }
  return result;
}

//----- (021D5248) --------------------------------------------------------
int __fastcall Function_21d5248(int result, int a2, int a3, short a4, int a5, int a6, uchar a7, uchar a8)
{
  int v8;
  short v9;
  ushort v10;
  ushort v11;
  int v12;
  int v13;

  v13 = a2;
  v12 = result;
  v8 = a3;
  v9 = a4;
  if ( a6 )
  {
    v10 = s32_div_f(a6 * a5, a3);
    s32_div_f(a6 * a5, v8);
    result = Function_201addc(v12, v13, v11, v10, v8, v9, a7, a8, a5, a5);
  }
  return result;
}

//----- (021D52A0) --------------------------------------------------------
int __fastcall Function_21d52a0(int result, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;

  v4 = result;
  v5 = a2 + a3 * a4;
  if ( !*(uchar *)(result + v5) )
  {
    Function_21d5304(result, &v6);
    result = Function_21d5424(v6);
    *(uchar *)(v4 + v5) = result;
  }
  return result;
}

//----- (021D52D4) --------------------------------------------------------
int __fastcall Function_21d52d4(int a1, int a2, int a3, int a4, int a5)
{
  if ( a2 < 0 || a2 >= a4 )
    return -1;
  if ( a3 >= 0 && a3 < a5 )
    return *(uchar *)(a1 + a2 + a4 * a3);
  return -1;
}

//----- (021D5304) --------------------------------------------------------
int __fastcall Function_21d5304(int a1, int *a2, int a3, int a4, int a5, int a6)
{
  int *v6;
  int v7;
  int v8;
  int v9;
  int result;
  int v11;

  v6 = a2;
  v7 = a3;
  v8 = a4;
  *a2 = 0;
  v11 = a1;
  if ( Function_21d52d4(a1, a3, a4 - 1, a5, a6) == 1 )
    *v6 |= 1u;
  if ( Function_21d52d4(v11, v7, v8 + 1, a5, a6) == 1 )
    *v6 |= 2u;
  if ( Function_21d52d4(v11, v7 - 1, v8, a5, a6) == 1 )
    *v6 |= 4u;
  if ( Function_21d52d4(v11, v7 + 1, v8, a5, a6) == 1 )
    *v6 |= 8u;
  v9 = *v6;
  if ( !(*v6 & 1) && !(v9 & 4) && Function_21d52d4(v11, v7 - 1, v8 - 1, a5, a6) == 1 )
    *v6 |= 0x10u;
  if ( !(*v6 & 1) && !(*v6 & 8) && Function_21d52d4(v11, v7 + 1, v8 - 1, a5, a6) == 1 )
    *v6 |= 0x20u;
  if ( !(*v6 & 2) && !(*v6 & 4) && Function_21d52d4(v11, v7 - 1, v8 + 1, a5, a6) == 1 )
    *v6 |= 0x40u;
  result = *v6;
  if ( !(*v6 & 2) && !(result & 8) )
  {
    result = Function_21d52d4(v11, v7 + 1, v8 + 1, a5, a6);
    if ( result == 1 )
    {
      result = *v6 | 0x80;
      *v6 = result;
    }
  }
  return result;
}

//----- (021D5424) --------------------------------------------------------
int __fastcall Function_21d5424(int a1, char a2)
{
  int v2;

  if ( a1 > 132 )
  {
    if ( a1 > 176 )
    {
      if ( a1 > 208 )
      {
        if ( a1 > 224 )
        {
          if ( a1 == 240 )
            return 31;
        }
        else if ( a1 == 224 )
        {
          return 30;
        }
      }
      else
      {
        if ( a1 >= 208 )
          return 29;
        if ( a1 > 192 )
        {
          if ( a1 == 193 )
            return 32;
        }
        else if ( a1 == 192 )
        {
          return 26;
        }
      }
    }
    else
    {
      if ( a1 >= 176 )
        return 28;
      if ( a1 > 144 )
      {
        if ( a1 > 160 )
        {
          if ( a1 == 164 )
            return 34;
        }
        else if ( a1 == 160 )
        {
          return 25;
        }
      }
      else
      {
        if ( a1 >= 144 )
          return 23;
        if ( a1 == 133 )
          return 36;
      }
    }
    goto LABEL_92;
  }
  if ( a1 >= 132 )
    return 45;
  if ( a1 > 88 )
  {
    if ( a1 > 112 )
    {
      if ( a1 > 128 )
      {
        if ( a1 == 129 )
          return 41;
      }
      else if ( a1 == 128 )
      {
        return 20;
      }
    }
    else
    {
      if ( a1 >= 112 )
        return 27;
      if ( a1 == 96 )
        return 24;
    }
LABEL_92:
    ErrorHandler();
    return v2;
  }
  if ( a1 >= 88 )
    return 35;
  if ( a1 > 72 )
  {
    if ( a1 > 73 )
    {
      if ( a1 == 80 )
        return 22;
    }
    else if ( a1 == 73 )
    {
      return 37;
    }
    goto LABEL_92;
  }
  if ( a1 >= 72 )
    return 47;
  switch ( a2 )
  {
    case 0:
      v2 = 0;
      break;
    case 1:
      v2 = 2;
      break;
    case 2:
      v2 = 3;
      break;
    case 3:
      v2 = 6;
      break;
    case 4:
      v2 = 4;
      break;
    case 5:
      v2 = 7;
      break;
    case 6:
      v2 = 9;
      break;
    case 7:
      v2 = 12;
      break;
    case 8:
      v2 = 5;
      break;
    case 9:
      v2 = 8;
      break;
    case 10:
      v2 = 10;
      break;
    case 11:
      v2 = 13;
      break;
    case 12:
      v2 = 11;
      break;
    case 13:
      v2 = 14;
      break;
    case 14:
      v2 = 15;
      break;
    case 15:
      v2 = 16;
      break;
    case 16:
      v2 = 17;
      break;
    case 17:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 25:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 33:
    case 35:
    case 37:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
    case 49:
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
    case 57:
    case 58:
    case 59:
    case 60:
    case 61:
    case 62:
    case 63:
      goto LABEL_92;
    case 18:
      v2 = 42;
      break;
    case 24:
      v2 = 46;
      break;
    case 26:
      v2 = 39;
      break;
    case 32:
      v2 = 18;
      break;
    case 34:
      v2 = 43;
      break;
    case 36:
      v2 = 44;
      break;
    case 38:
      v2 = 38;
      break;
    case 48:
      v2 = 21;
      break;
    case 50:
      v2 = 33;
      break;
    case 64:
      v2 = 19;
      break;
    case 65:
      v2 = 40;
      break;
  }
  return v2;
}

//----- (021D5600) --------------------------------------------------------
uint __fastcall Function_21d5600(int a1, int a2)
{
  return Function_20237bc_FreeMsg(a1, a2);
}

//----- (021D5608) --------------------------------------------------------
int __fastcall Function_21d5608(int a1)
{
  return Function_20986e8(*((uchar *)dword_21E9CC4 + a1 + 1));
}

//----- (021D561C) --------------------------------------------------------
ushort *__fastcall Function_21d561c(uint a1, int a2, uint a3)
{
  uint v3;
  uint v4;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v3 = a3;
  v4 = a1;
  Function_21d5764(a1);
  if ( v7 == 6 )
    return Function_200b32c(v4, v3);
  v9 = 717;
  v10 = 712;
  v11 = 713;
  v12 = 714;
  v13 = 715;
  v14 = 716;
  v6 = *(&v9 + v7);
  v7 = v8;
  return (ushort *)Function_21d5724(v6);
}

//----- (021D566C) --------------------------------------------------------
int __fastcall Function_21d566c(int a1)
{
  int v1;
  int v2;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v1 = a1;
  Function_21d5764(a1);
  if ( v4 == 6 )
  {
    v4 = v1;
    v2 = 711;
  }
  else
  {
    v6 = 723;
    v7 = 718;
    v8 = 719;
    v9 = 720;
    v10 = 721;
    v11 = 722;
    v2 = *(&v6 + v4);
    v4 = v5;
  }
  return Function_21d5724(v2);
}

//----- (021D56BC) --------------------------------------------------------
int __fastcall Function_21d56bc(int a1, int a2, int a3)
{
  int v3;
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

  v3 = a3;
  v4 = a1;
  Function_21d5764(a1);
  if ( v7 == 6 )
  {
    if ( v3 >= 1 )
      ErrorHandler();
    v7 = v4 + v3;
    v5 = 706;
  }
  else
  {
    v9 = 705;
    v10 = 700;
    v11 = 701;
    v12 = 702;
    v13 = 703;
    v14 = 704;
    if ( v3 >= 1 )
      ErrorHandler();
    v5 = *(&v9 + v7);
    v7 = v8 + v3;
  }
  return Function_21d5724(v5);
}

//----- (021D5724) --------------------------------------------------------
ushort *__fastcall Function_21d5724(int a1, uint a2, uint a3)
{
  uint v3;
  uint v4;
  ushort **v5;
  ushort *v6;

  v3 = a3;
  v4 = a2;
  v5 = (ushort **)LoadFromMsgNARC(1, 26, a1, a3);
  if ( !v5 )
    return 0;
  v6 = (ushort *)Function_2023790(256, v3);
  if ( v6 )
    Function_200b1b8_CallMsgDecrypt(v5, v4, v6);
  Function_200b190((ushort *)v5);
  return v6;
}

//----- (021D5764) --------------------------------------------------------
uint __fastcall Function_21d5764(int a1, int a2, uint *a3, int *a4, int *a5)
{
  int v5;
  uint *v6;
  int *v7;
  int v8;
  int v9;
  uint result;

  v5 = a1;
  v6 = a3;
  v7 = a4;
  v8 = Function_20986cc(a2);
  *v7 = v8;
  if ( v8 >= 6 )
    ErrorHandler();
  *v6 = v5;
  v9 = *v7;
  if ( v9 >= 6 )
    ErrorHandler();
  if ( v9 == 1 )
    v9 = 6;
  *a5 = v9;
  result = *v6 <= 493 || v9 == 6;
  if ( !result )
    result = ErrorHandler();
  return result;
}

//----- (021D57B4) --------------------------------------------------------
uint __fastcall Function_21d57b4(uint **a1, int a2, int a3, int a4)
{
  int v4;
  uint **v5;
  uint result;
  uint v7;

  v5 = a1;
  switch ( (uchar)a1 )
  {
    case 0:
      v4 = 4;
      break;
    case 1:
      v4 = 499;
      break;
    case 2:
      v4 = 994;
      break;
    case 3:
      v4 = 1489;
      break;
    case 4:
      v4 = 1984;
      break;
    case 5:
      v4 = 2479;
      break;
    case 6:
      v4 = 2974;
      break;
    case 7:
      v4 = 3469;
      break;
    case 8:
      v4 = 3964;
      break;
    case 9:
      v4 = 4459;
      break;
    default:
      break;
  }
  *a1 = Function_2007068(188, v4 + a2, 0, a4, 0, (int *)&v7);
  result = v7 >> 2;
  v5[1] = (uint *)(v7 >> 2);
  return result;
}

//----- (021D5844) --------------------------------------------------------
int __fastcall Function_21d5844(int *a1)
{
  int *v1;
  int result;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  if ( !*v1 )
    ErrorHandler();
  free(*v1);
  result = 0;
  *v1 = 0;
  v1[1] = 0;
  return result;
}

//----- (021D5868) --------------------------------------------------------
uint *__fastcall Function_21d5868(int a1, uint *a2, int a3, int a4)
{
  uint *v4;
  uint *result;
  uint v6;
  int v7;

  v7 = a4;
  v4 = a2;
  result = Function_2007068(188, 0, 0, a1, 0, (int *)&v6);
  if ( v4 )
    *v4 = v6 >> 2;
  return result;
}

//----- (021D5890) --------------------------------------------------------
uint *__fastcall Function_21d5890(int a1, int *a2)
{
  int *v2;
  uint *v3;
  int v5;

  v2 = a2;
  v3 = Function_2007068(188, 2, 0, a1, 0, &v5);
  if ( v2 )
    *v2 = u32_div_f(v5, 36);
  return v3;
}

//----- (021D58C0) --------------------------------------------------------
int __fastcall Function_21d58c0(int a1, int a2, int a3, uchar *a4)
{
  uchar *v4;
  int v5;
  int result;
  int v7;
  int v8;
  int v9;
  int v10;
  uchar *v11;
  int v12;
  int v13;
  int v14;

  v14 = a2;
  v4 = a4;
  v13 = a1;
  if ( a4[1] + a4[3] >= a3 )
    ErrorHandler();
  if ( *v4 + v4[2] >= v14 )
    ErrorHandler();
  v5 = v4[1];
  result = v5 + v4[3];
  if ( v5 < result )
  {
    v7 = v14 * v5;
    do
    {
      v8 = *v4;
      v9 = v4[2];
      v10 = v8;
      if ( v8 < v8 + v9 )
      {
        v11 = (uchar *)(v13 + v7 + v8);
        do
        {
          v12 = v10++ - v8;
          *v11 |= v4[v12 + 4 + (v5 - v4[1]) * v9];
          v9 = v4[2];
          v8 = *v4;
          ++v11;
        }
        while ( v10 < v8 + v9 );
      }
      v7 += v14;
      ++v5;
      result = v4[1] + v4[3];
    }
    while ( v5 < result );
  }
  return result;
}

//----- (021D5948) --------------------------------------------------------
int __fastcall Function_21d5948(int a1, uchar a2, uchar a3, int a4, uint *a5, int a6, uint a7)
{
  int v7;
  uint v8;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v10 = a1;
  v11 = a4;
  v12 = 0;
  v13 = 0;
  if ( a5[1] - 1 > 0 )
  {
    v14 = a2;
    v7 = 0;
    v15 = a3;
    do
    {
      if ( !*(uint *)(*a5 + v7) )
        ErrorHandler();
      v8 = 0;
      if ( a7 )
      {
        do
        {
          if ( *(uint *)(*a5 + v7) == *(uchar *)(a6 + v8) )
            break;
          ++v8;
        }
        while ( v8 < a7 );
      }
      if ( v8 >= a7 )
      {
        Function_21d58c0(v10, v14, v15, (uchar *)(v11 + 36 * *(uint *)(*a5 + v7)));
        ++v12;
      }
      v7 += 4;
      ++v13;
    }
    while ( v13 < a5[1] - 1 );
  }
  return v12;
}

//----- (021D59D8) --------------------------------------------------------
int __fastcall Function_21d59d8(uint *a1, int a2, int a3, int a4, int a5, uchar *a6, uint a7, uint a8)
{
  int v8;
  int v9;
  int result;
  int v11;
  int v12;
  int v13;

  v13 = a4;
  v8 = (int)a1;
  v11 = a2 + a4 * *a6;
  v9 = a3 + a5 * a6[1];
  v11 <<= 12;
  v12 = v9 << 12;
  Function_2021c50(a1, &v11);
  if ( a6[2] )
    result = Function_2021d6c(v8, a8);
  else
    result = Function_2021d6c(v8, a7);
  return result;
}

//----- (021D5A20) --------------------------------------------------------
int __fastcall Function_21d5a20(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, uint *a9, uint a10, uint a11, int a12, uint a13, uint *a14)
{
  int v14;
  uint v15;
  int v17;
  int v18;
  int v19;
  uint **v20;
  int v21;
  int v22;

  v17 = a2;
  v18 = a3;
  v19 = a4;
  v21 = 0;
  v22 = 0;
  if ( a9[1] - 1 > 0 )
  {
    v14 = 0;
    v20 = (uint **)(a1 + 4 * a2);
    do
    {
      if ( !*(uint *)(*a9 + v14) )
        ErrorHandler();
      if ( v17 >= v18 )
        ErrorHandler();
      v15 = 0;
      if ( a13 )
      {
        do
        {
          if ( *(uint *)(*a9 + v14) == *(uchar *)(a12 + v15) )
            break;
          ++v15;
        }
        while ( v15 < a13 );
      }
      if ( v15 >= a13 )
      {
        Function_21d59d8(*v20, v19, a5, a6, a7, (uchar *)(a8 + 4 * *(uint *)(*a9 + v14)), a10, a11);
        ++v20;
        ++v17;
        ++v21;
      }
      v14 += 4;
      ++v22;
    }
    while ( v22 < a9[1] - 1 );
  }
  *a14 = v21;
  return v17;
}

//----- (021D5AEC) --------------------------------------------------------
int (*__fastcall Function_21d5aec(int *a1, int a2, int a3))()
{
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int (*result)();

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Function_21d5b90(a3);
  v7 = Function_21d5be0(v4, v5);
  v8 = Function_21d5c1c(v4, v3, v5);
  *v3 = v6;
  v3[1] = v7;
  v3[8] = v8;
  v3[9] = Function_21d5cb4();
  v3[2] = (int)Function_21d5cb8;
  v3[3] = (int)Function_21d5d04;
  v3[4] = (int)Function_21d5d34;
  v3[5] = (int)Function_21d5d48;
  v3[6] = (int)Function_21d5e2c;
  result = Function_21d5ea8;
  v3[7] = (int)Function_21d5ea8;
  return result;
}

//----- (021D5B50) --------------------------------------------------------
int __fastcall Function_21d5b50(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_21d5bcc(*a1);
  Function_21d5c08(v1[1]);
  return Function_21d5c7c(v1[8]);
}

//----- (021D5B68) --------------------------------------------------------
BOOL __fastcall Function_21d5b68(uint *a1)
{
  return a1[9] != 1 && a1[10] != 1 && a1[11] != 1 && a1[12] != 1 && a1[13] != 1;
}

//----- (021D5B90) --------------------------------------------------------
int *__fastcall Function_21d5b90(uint a1, int a2)
{
  int v2;
  int *v3;

  v2 = a2;
  v3 = (int *)malloc(a1, 56);
  if ( !v3 )
    ErrorHandler();
  Call_FillMemWithValue(v3, 0, 0x38u);
  *v3 = Function_21d138c(v2);
  v3[1] = Function_21d13ec(v2);
  v3[4] = 0;
  v3[5] = 0;
  v3[7] = 1;
  return v3;
}

//----- (021D5BCC) --------------------------------------------------------
uint __fastcall Function_21d5bcc(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return free(v1);
}

//----- (021D5BE0) --------------------------------------------------------
uchar *__fastcall Function_21d5be0(uint a1, int a2)
{
  int v2;
  uchar *v3;

  v2 = a2;
  v3 = (uchar *)malloc(a1, 4);
  if ( !v3 )
    ErrorHandler();
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  *(uint *)v3 = Function_21d13fc(v2);
  return v3;
}

//----- (021D5C08) --------------------------------------------------------
uint __fastcall Function_21d5c08(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return free(v1);
}

//----- (021D5C1C) --------------------------------------------------------
uint *__fastcall Function_21d5c1c(uint a1, int a2, int a3)
{
  uint v3;
  int v4;
  int v5;
  uint *v6;

  v3 = a1;
  v4 = a3;
  v5 = Function_21d5cb4();
  v6 = (uint *)malloc(v3, 20 * v5);
  Function_21d467c(v3, v6, v4, 1);
  Function_21d475c(v3, v6 + 5, v4, 2);
  Function_21d4704(v3, v6 + 10, v4, 4);
  Function_21d4878(v6 + 15, v4, v3, 8);
  Function_21d47f0(v3, v6 + 20, v4, 16);
  return v6;
}

//----- (021D5C7C) --------------------------------------------------------
uint __fastcall Function_21d5c7c(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  Function_21d4660(v1);
  Function_21d4660(v1 + 20);
  Function_21d4660(v1 + 40);
  Function_21d4660(v1 + 60);
  Function_21d4660(v1 + 80);
  return free(v1);
}

//----- (021D5CB4) --------------------------------------------------------
int Function_21d5cb4()
{
  return 5;
}

//----- (021D5CB8) --------------------------------------------------------
int __fastcall Function_21d5cb8(int a1, int *a2)
{
  int v2;
  int *v3;
  int v4;

  v2 = a1;
  v3 = a2;
  v4 = malloc(*(uint *)(a1 + 4), 36);
  *(uint *)(v2 + 8) = v4;
  if ( !v4 )
    ErrorHandler();
  Call_FillMemWithValue(*(int **)(v2 + 8), 0, 0x24u);
  Function_21d5f58(v3, *(uint *)(v2 + 8));
  Function_21d38c0(v3[1]);
  v3[7] = 1;
  v3[8] = 0;
  if ( v3[6] == 1 )
    v3[4] = 1;
  Function_21d5fc4(v3);
  return 1;
}

//----- (021D5D04) --------------------------------------------------------
int __fastcall Function_21d5d04(uint *a1, int a2)
{
  if ( a1[3] == 1 )
    return 1;
  if ( *a1 )
  {
    Function_21d5f7c(a2, a1[2], a1[1]);
  }
  else
  {
    *(uint *)(a2 + 24) = 0;
    *a1 = 1;
  }
  return 0;
}

//----- (021D5D34) --------------------------------------------------------
int __fastcall Function_21d5d34(int a1)
{
  int v1;

  v1 = a1;
  free(*(uint *)(a1 + 8));
  *(uint *)(v1 + 8) = 0;
  return 1;
}

//----- (021D5D48) --------------------------------------------------------
int __fastcall Function_21d5d48(uint *a1, uint *a2, int a3)
{
  uint *v3;
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = a2[2];
  switch ( (uchar)*a2 )
  {
    case 0u:
      v7 = malloc(a2[1], 328);
      if ( !v7 )
        ErrorHandler();
      v3[2] = v7;
      Function_21d6c24(v7, v5);
      Function_21d68c8(v7, *v4, v5);
      ++*v3;
      goto LABEL_19;
    case 1u:
      if ( *(uint *)(*(uint *)(a3 + 4) + 5952) )
      {
        v9 = a2[1];
        Function_21d61f4(v6, *a1);
      }
      else
      {
        v8 = a2[1];
        Function_21d6114(v6, *a1);
      }
      if ( *(uint *)(v5 + 20) )
        Function_21d7248(v6, v4, v5, 1);
      else
        Function_21d71a8(v6, v4, v5, 1);
      ++*v3;
      goto LABEL_19;
    case 2u:
      if ( *(uint *)(a3 + 20) )
        v10 = Function_21d72d4(a2[2], a1);
      else
        v10 = Function_21d71e4(a2[2], a1);
      if ( v10 )
        ++*v3;
      goto LABEL_19;
    case 3u:
      G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 1, 8, 0, 16);
      result = 1;
      break;
    default:
      ErrorHandler();
LABEL_19:
      result = 0;
      break;
  }
  return result;
}

//----- (021D5E2C) --------------------------------------------------------
int __fastcall Function_21d5e2c(uint *a1, int a2, int a3)
{
  int v3;
  uint *v4;
  int v5;
  int v6;
  int v8;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = *(uint *)(a2 + 8);
  if ( !*(uint *)(a3 + 28) )
    return 0;
  v8 = Function_21d3898(*(uint *)(a3 + 4));
  if ( *(uint *)(v6 + 324) != v8 )
  {
    *(uint *)(v6 + 324) = v8;
    Function_21d6a58(v6, v3);
    Function_21d6cc8(v6, *v4, v3, *(uint *)(v5 + 4));
    Function_21d68c8(v6, *v4, v3);
  }
  Function_21d69a0(v6, v3);
  Function_21d6ae4(v6, v3);
  Function_21d6bb0(v6, v3);
  Function_21d6c44(v6, *v4, v3, *(uint *)(v5 + 4));
  Function_21d6f20(v6, *v4, v3);
  Function_21d6f74(v3);
  return 0;
}

//----- (021D5EA8) --------------------------------------------------------
int __fastcall Function_21d5ea8(uint *a1, uint *a2, int a3)
{
  uint *v3;
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = a2[2];
  switch ( (uchar)*a2 )
  {
    case 0u:
      REG_BLDCNT = 0;
      if ( *(uint *)(a3 + 20) )
      {
        v7 = a2[1];
        Function_21d7160(v6, *a1);
        Function_21d6f64(*v4, v5);
        Function_21d7248(v6, v4, v5, 0);
      }
      else
      {
        Function_21d71a8(v6, a1, a3, 0);
      }
      ++*v3;
      goto LABEL_14;
    case 1u:
      if ( *(uint *)(a3 + 20) )
        v8 = Function_21d72d4(a2[2], a1);
      else
        v8 = Function_21d71e4(a2[2], a1);
      if ( v8 )
        ++*v3;
      goto LABEL_14;
    case 2u:
      Function_21d61d8(v6, *a1);
      free(v6);
      ++*v3;
      goto LABEL_14;
    case 3u:
      result = 1;
      break;
    default:
      ErrorHandler();
LABEL_14:
      result = 0;
      break;
  }
  return result;
}

//----- (021D5F58) --------------------------------------------------------
int __fastcall Function_21d5f58(int a1, uint *a2)
{
  int result;

  *(uint *)(a1 + 8) = 0;
  *a2 = 0;
  a2[1] = 60;
  result = 4;
  a2[2] = 4;
  a2[3] = 4;
  return result;
}

//----- (021D5F6C) --------------------------------------------------------
int __fastcall Function_21d5f6c(int a1, uint *a2)
{
  int result;

  a2[1] = 640;
  result = 0;
  a2[2] = 0;
  a2[3] = 0;
  return result;
}

//----- (021D5F7C) --------------------------------------------------------
int __fastcall Function_21d5f7c(int a1, uint *a2)
{
  int v2;
  uint *v3;
  int result;

  v2 = a1;
  v3 = a2;
  result = Function_21d601c();
  if ( result != 1 )
  {
    Function_21d5fc4(v2);
    if ( !*v3 )
    {
      if ( v3[5] == 1 )
        Function_21d7590(v3, v2);
      else
        Function_21d75dc(v3, v2);
    }
    if ( *(uint *)(v2 + 32) )
      Function_21d60a4(v2, v3);
    result = Function_21d5fd4(v2);
  }
  return result;
}

//----- (021D5FC4) --------------------------------------------------------
uint *__fastcall Function_21d5fc4(uint *result)
{
  result[9] = 0;
  result[10] = 0;
  result[11] = 0;
  result[12] = 0;
  result[13] = 0;
  return result;
}

//----- (021D5FD4) --------------------------------------------------------
uint *__fastcall Function_21d5fd4(uint *result)
{
  if ( dword_21BF6C4 & 2 )
  {
    if ( *(uint *)(result[1] + 5952) )
      result[9] = 1;
    else
      result[10] = 1;
  }
  else if ( dword_21BF6C4 & 1 )
  {
    result[11] = 1;
  }
  else if ( dword_21BF6C4 & 0x400 )
  {
    result[13] = 1;
  }
  else if ( dword_21BF6C4 & 4 )
  {
    result[12] = 1;
  }
  return result;
}

//----- (021D601C) --------------------------------------------------------
int __fastcall Function_21d601c(int *a1, int a2, int a3)
{
  int *v3;
  int v4;
  int v5;
  int result;
  int v7;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( a1[10] )
  {
    Function_21d744c();
    Function_2005748(0x5DDu);
    result = 1;
  }
  else if ( a1[9] )
  {
    Function_21d7538();
    Function_2005748(0x5DDu);
    result = 1;
  }
  else if ( a1[11] && (v7 = Function_21d3898(a1[1]), Function_21d38b0(v3[1], v7) != 494) )
  {
    Function_21d7464(v4, v3);
    Function_2005748(0x5DDu);
    result = 1;
  }
  else if ( v3[13] )
  {
    result = Function_21d747c(v3);
  }
  else if ( v3[12] )
  {
    result = Function_21d74b0(v3, v5);
  }
  else
  {
    result = 0;
  }
  return result;
}

//----- (021D60A4) --------------------------------------------------------
int __fastcall Function_21d60a4(int result, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v2 = a2;
  if ( *a2 )
  {
    v3 = *(uint *)(result + 12) - a2[1];
    if ( v3 <= 0 )
    {
      *(uint *)(result + 12) = 0;
      *v2 = 0;
      result = v2[3];
      if ( result > 0 )
      {
        result = v2[2] - 1;
        if ( result <= 0 )
        {
          v4 = fflt(v2[1]);
          v5 = fmul(v4, 0x3FCCCCCDu);
          v2[1] = ffix(v5);
          v6 = 5 - v2[3]--;
          result = 4 * v6;
        }
        v2[2] = result;
      }
    }
    else
    {
      *(uint *)(result + 12) = v3;
    }
  }
  return result;
}

//----- (021D60FC) --------------------------------------------------------
int __fastcall Function_21d60fc(int result, uint *a2, int a3)
{
  *(uint *)(result + 12) = 640;
  *a2 = a3;
  *(uint *)(result + 8) = a3;
  return result;
}

//----- (021D6108) --------------------------------------------------------
int __fastcall Function_21d6108(int a1, int a2)
{
  return Function_21d3844(*(uint *)(a1 + 4), a2);
}

//----- (021D6114) --------------------------------------------------------
int __fastcall Function_21d6114(int a1, int a2, int a3, uint a4)
{
  int v4;
  int v5;
  int v6;
  uint v7;
  int v8;
  int v9;
  int v10;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  Function_21d276c(a2, 0, 0, 0, 0, a4);
  Function_21d62e4(v4, v7);
  v8 = Function_21d36d8(*(uint *)(v6 + 4));
  Function_21d637c(v5, v4, v7, v8);
  v9 = Function_21d38fc(*(uint *)(v6 + 4));
  v10 = Function_21d3908(*(uint *)(v6 + 4));
  Function_21d63dc(v4, v7, v9, v10);
  Function_21d6538(v5, v7);
  Function_21d65dc(v5, v4, v7);
  Function_21d6744(v5, v4, v7);
  *(uint *)(v5 + 76) = Function_21d70c0(v4, v7);
  Function_21d67ec(v5, v4, v6, v7);
  Function_21d6994(v5, v6);
  Function_21d69a0(v5, v6);
  Function_21d6ae4(v5, v6);
  Function_21d6b94(v5, v6);
  Function_21d6bb0(v5, v6);
  Function_21d6c44(v5, v4, v6, v7);
  return Function_21d6f20(v5, v4, v6);
}

//----- (021D61D8) --------------------------------------------------------
int __fastcall Function_21d61d8(int a1)
{
  int v1;

  v1 = a1;
  Function_21d695c();
  Function_21d6580(v1);
  Function_21d6940(v1);
  return Function_21d63c0(v1);
}

//----- (021D61F4) --------------------------------------------------------
int __fastcall Function_21d61f4(int a1, int a2, int a3, uint a4)
{
  int v4;
  int v5;
  int v6;
  uint v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v13;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  Function_21d276c(a2, 4u, 0, 0, 32, a4);
  v8 = Function_21d27e0(v5, 0, &v13, v7);
  v9 = *(uint *)(v13 + 12);
  DC_FlushRange(*(uint *)(v13 + 12), 512);
  GX_LoadBGPltt(v9 + 32, 32, 0x1E0u);
  free(v8);
  Function_21d62e4(v5, v7);
  v10 = Function_21d36d8(*(uint *)(v6 + 4));
  Function_21d637c(v4, v5, v7, v10);
  Function_21d6538(v4, v7);
  Function_21d65dc(v4, v5, v7);
  Function_21d6744(v4, v5, v7);
  *(uint *)(v4 + 76) = Function_21d70c0(v5, v7);
  Function_21d67ec(v4, v5, v6, v7);
  v11 = Function_21d38fc(*(uint *)(v6 + 4));
  Function_21d64b0(v5, v7, v11);
  Function_21d6994(v4, v6);
  Function_21d69a0(v4, v6);
  Function_21d6ae4(v4, v6);
  Function_21d6b94(v4, v6);
  Function_21d6bb0(v4, v6);
  Function_21d6c44(v4, v5, v6, v7);
  return Function_21d6f20(v4, v5, v6);
}

//----- (021D62E4) --------------------------------------------------------
int __fastcall Function_21d62e4(uint **a1, uint a2, int a3, int a4)
{
  uint v4;
  int *v5;
  int v6;
  int v7;
  ushort *v9;
  int v10;

  v10 = a4;
  v4 = a2;
  v5 = (int *)a1;
  Function_21d2724((int)a1, 0x1Cu, *a1, 3, 0, 0, 1, a2);
  v6 = Function_21d27b8((int)v5, 0x26u, 1, &v9, v4);
  Function_20198c0(*v5, 3, (int)(v9 + 6), 0, 0, (uint)*v9 << 21 >> 24, (uint)v9[1] << 21 >> 24);
  free(v6);
  v7 = Function_21d27b8((int)v5, 0x27u, 1, &v9, v4);
  Function_20198c0(*v5, 3, (int)(v9 + 6), 1, 4u, (uint)*v9 << 21 >> 24, (uint)v9[1] << 21 >> 24);
  free(v7);
  return Function_201c3c0(*v5, 3);
}

//----- (021D637C) --------------------------------------------------------
int __fastcall Function_21d637c(int a1, uint **a2, uint a3, int a4)
{
  int v4;
  int v5;
  uint v6;
  int v7;
  uint v8;
  int result;

  v4 = a1;
  v5 = (int)a2;
  v6 = a3;
  v7 = a4;
  Function_21d2724((int)a2, 0x1Cu, *a2, 2, 0, 0, 1, a3);
  if ( v7 == 1 )
    v8 = 42;
  else
    v8 = 40;
  result = Function_21d27b8(v5, v8, 1, (uint *)(v4 + 220), v6);
  *(uint *)(v4 + 216) = result;
  return result;
}

//----- (021D63C0) --------------------------------------------------------
int __fastcall Function_21d63c0(int a1)
{
  int v1;
  int result;

  v1 = a1;
  free(*(uint *)(a1 + 216));
  result = v1 + 216;
  *(uint *)(v1 + 216) = 0;
  *(uint *)(v1 + 220) = 0;
  return result;
}

//----- (021D63DC) --------------------------------------------------------
int __fastcall Function_21d63dc(int *a1, uint a2, int a3, int a4)
{
  int *v4;
  uint v5;
  int v6;
  int v7;
  ushort *v8;
  ushort **v9;
  int v10;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = (ushort *)Function_2023790(32, a2);
  v9 = (ushort **)LoadFromMsgNARC(0, 26, 697, v5);
  Function_200b1b8_CallMsgDecrypt(v9, 0, v8);
  Function_201d78c((int)(v4 + 1), 0);
  Function_200b1b8_CallMsgDecrypt(v9, 1u, v8);
  Function_201d78c((int)(v4 + 1), 0);
  Function_20238a0(v8, v6, 3, 2, 1);
  Function_201d78c((int)(v4 + 1), 0);
  Function_20238a0(v8, v7, 3, 2, 1);
  Function_201d78c((int)(v4 + 1), 0);
  Function_20237bc_FreeMsg((int)v8, v10);
  Function_200b190((ushort *)v9);
  return Function_201c3c0(*v4, 1);
}

//----- (021D64B0) --------------------------------------------------------
int __fastcall Function_21d64b0(int *a1, uint a2, int a3)
{
  int *v3;
  uint v4;
  int v5;
  ushort *v6;
  ushort **v7;
  int v8;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = (ushort *)Function_2023790(32, a2);
  v7 = (ushort **)LoadFromMsgNARC(0, 26, 697, v4);
  Function_200b1b8_CallMsgDecrypt(v7, 0x6Du, v6);
  Function_201d78c((int)(v3 + 1), 0);
  Function_20238a0(v6, v5, 3, 2, 1);
  Function_201d78c((int)(v3 + 1), 0);
  Function_20237bc_FreeMsg((int)v6, v8);
  Function_200b190((ushort *)v7);
  return Function_201c3c0(*v3, 1);
}

//----- (021D6538) --------------------------------------------------------
int **__fastcall Function_21d6538(uint *a1, uint a2)
{
  uint v2;
  uint *v3;
  int **result;

  v2 = a2;
  v3 = a1;
  a1[32] = Function_2009714(2, 0, a2);
  v3[33] = Function_2009714(2, (int *)1, v2);
  v3[34] = Function_2009714(2, (int *)2, v2);
  result = Function_2009714(2, (int *)3, v2);
  v3[35] = result;
  return result;
}

//----- (021D6580) --------------------------------------------------------
uint __fastcall Function_21d6580(int a1)
{
  int v1;
  int *v2;
  int *v3;
  int *v4;

  v1 = a1;
  v2 = (int *)Function_2009dc8(*(uint *)(a1 + 128), 81);
  Function_200a4e4(v2);
  v3 = (int *)Function_2009dc8(*(uint *)(v1 + 132), 3);
  Function_200a6dc(v3);
  v4 = (int *)Function_2009dc8(*(uint *)(v1 + 128), 111);
  Function_200a4e4(v4);
  Function_2009754(*(int **)(v1 + 128));
  Function_2009754(*(int **)(v1 + 132));
  Function_2009754(*(int **)(v1 + 136));
  return Function_2009754(*(int **)(v1 + 140));
}

//----- (021D65DC) --------------------------------------------------------
int __fastcall Function_21d65dc(int *a1, int a2, uint a3)
{
  int *v3;
  uint v4;
  int v5;
  int *v6;
  int *v7;
  int *v8;

  v3 = a1;
  v4 = a3;
  v5 = Function_21d26e0(a2);
  v6 = Function_2009a4c(v3[32], v5, 0x51u, 1, 81, 1, v4);
  Function_200a3dc(v6);
  Function_2009d4c(v6);
  v7 = Function_2009b04(v3[33], v5, 3u, 0, 3, 1, 12, v4);
  Function_200a640(v7);
  Function_2009d4c(v7);
  Function_2009bc4(v3[34], v5, 0x4Fu, 1, 79, 2u, v4);
  Function_2009bc4(v3[35], v5, 0x50u, 1, 80, 3u, v4);
  Function_20093b4((int)(v3 + 36), 81, 3, 79, 80, -1, -1, 0, 2, v3[32], v3[33], v3[34], v3[35], 0, 0);
  v8 = Function_2009a4c(v3[32], v5, 0x6Fu, 1, 111, 1, v4);
  Function_200a3dc(v8);
  Function_2009d4c(v8);
  Function_2009bc4(v3[34], v5, 0x6Du, 1, 109, 2u, v4);
  Function_2009bc4(v3[35], v5, 0x6Eu, 1, 110, 3u, v4);
  return Function_20093b4((int)(v3 + 45), 111, 3, 109, 110, -1, -1, 0, 2, v3[32], v3[33], v3[34], v3[35], 0, 0);
}

//----- (021D6744) --------------------------------------------------------
int __fastcall Function_21d6744(int *a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int *v6;
  int v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  int v12;
  int v14;
  uint *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;

  v22 = a4;
  v4 = 0;
  v5 = a1;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v6 = a1;
  v14 = *(uint *)(a2 + 316);
  v15 = a1 + 36;
  v20 = 1;
  v21 = a3;
  v19 = 32;
  do
  {
    v7 = Function_2021b90(&v14);
    *v6 = v7;
    ++v6;
    Function_2021d6c(v7, 0);
    ++v4;
  }
  while ( v4 < 9 );
  v8 = 0;
  v19 = 0;
  v9 = v5;
  do
  {
    v10 = Function_2021b90(&v14);
    v9[20] = v10;
    Function_2021d6c(v10, 1u);
    ++v8;
    ++v9;
  }
  while ( v8 < 9 );
  v19 = 0;
  v11 = Function_2021b90(&v14);
  v5[29] = v11;
  Function_2021d6c(v11, 2u);
  v19 = 0;
  v16 = 229376;
  v17 = 327680;
  v15 = v5 + 45;
  v12 = Function_2021b90(&v14);
  v5[31] = v12;
  Function_2021cac(v12, 0);
  return Function_2021fe0(v5[31], 1);
}

//----- (021D67EC) --------------------------------------------------------
int __fastcall Function_21d67ec(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int **v8;
  int v9;
  int *v10;
  int v11;
  int v12;
  int result;
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

  v15 = a2;
  v14 = a1;
  v19 = *(uint *)(a2 + 336);
  v4 = a3;
  v16 = a4;
  v21 = *(uint *)(a1 + 152);
  v25 = 2;
  v27 = 1;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v26 = 0;
  v28 = a4;
  v5 = Function_21d3898(*(uint *)(a3 + 4)) - 4;
  v6 = *(uint *)(v14 + 36);
  v17 = Function_21d38a4(*(uint *)(v4 + 4));
  v18 = 0;
  do
  {
    v7 = v14 + 4 * v6;
    v8 = *(int ***)(v7 + 40);
    if ( v8 )
    {
      Function_21d4d1c(v8);
      *(uint *)(v7 + 40) = 0;
    }
    if ( v5 < 0 || v5 >= v17 )
    {
      *(uint *)(v7 + 40) = 0;
    }
    else
    {
      v9 = Function_21d38b0(*(uint *)(v4 + 4), v5);
      if ( v9 == 494 )
      {
        Function_21d6df4(v14, v15, v16, v6, v5 + 1);
      }
      else
      {
        v10 = (int *)Function_21d37dc(*(uint *)(v4 + 4), v9);
        v20 = Function_21d16d8(v15, *(uint *)(v4 + 4), v16, *v10);
        v11 = v20;
        *(uint *)(v7 + 40) = Function_21d4cb8((int **)&v19, *(uint *)(v14 + 76));
        Function_21d4da0(v11);
      }
    }
    s32_div_f(v6 + 1, 9);
    v6 = v12;
    result = v18 + 1;
    ++v5;
    v18 = result;
  }
  while ( result < 9 );
  return result;
}

//----- (021D68C8) --------------------------------------------------------
uint __fastcall Function_21d68c8(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  uint result;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = Function_21d3898(*(uint *)(a3 + 4));
  v7 = Function_21d375c(*(uint *)(v3 + 4));
  v8 = (int *)Function_21d37dc(*(uint *)(v3 + 4), v7);
  if ( Function_21d38b0(*(uint *)(v3 + 4), v6) == 494 )
  {
    Function_21d217c(v5, 0);
    result = *(uint *)(v4 + 124);
    if ( result )
      result = Function_2021cac(result, 1);
  }
  else
  {
    Function_21d1890(v5, *(uint *)(v3 + 4), *v8, 2, 56, 80);
    Function_21d217c(v5, 1);
    result = *(uint *)(v4 + 124);
    if ( result )
      result = Function_2021cac(result, 0);
  }
  return result;
}

//----- (021D6940) --------------------------------------------------------
int **__fastcall Function_21d6940(int a1)
{
  int v1;
  int v2;
  int **result;

  v1 = a1;
  v2 = 0;
  do
  {
    result = *(int ***)(v1 + 40);
    if ( result )
      result = (int **)Function_21d4d1c(result);
    ++v2;
    v1 += 4;
  }
  while ( v2 < 9 );
  return result;
}

//----- (021D695C) --------------------------------------------------------
int __fastcall Function_21d695c(int *a1)
{
  int *v1;
  int v2;
  int *v3;
  int v4;
  int *v5;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    Function_2021bd4(*v3);
    ++v2;
    ++v3;
  }
  while ( v2 < 9 );
  v4 = 0;
  v5 = v1;
  do
  {
    Function_2021bd4(v5[20]);
    ++v4;
    ++v5;
  }
  while ( v4 < 9 );
  Function_2021bd4(v1[29]);
  return Function_2021bd4(v1[31]);
}

//----- (021D6994) --------------------------------------------------------
int __fastcall Function_21d6994(int a1)
{
  *(uint *)(a1 + 36) = 0;
  return Function_21d6ed0();
}

//----- (021D69A0) --------------------------------------------------------
uint __fastcall Function_21d69a0(int a1, int a2, int a3, int a4)
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
  short v13;
  int v14;
  uint result;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;

  v21 = a4;
  v4 = a1;
  v17 = a2;
  v18 = *(uint *)(a1 + 36);
  v5 = 0;
  do
  {
    if ( *(uint *)(v17 + 8) == 1 )
      v6 = v5 + 2;
    else
      v6 = v5;
    v7 = v5 + 1;
    v8 = v6;
    v9 = *(uint *)(v17 + 12);
    v19 = Function_21d6bf8(dword_21E9D14[v6], dword_21E9D14[v7]);
    v10 = *(uint *)(v17 + 12);
    v20 = Function_21d6bf8(dword_21E9D40[v8], dword_21E9D40[v7]);
    v11 = 4 * v18;
    Function_2021c50(*(uint **)(v4 + 4 * v18), &v19);
    v12 = 4 - v5;
    if ( 4 - v5 < 0 )
      v12 = v5 - 4;
    v13 = 2 * v12;
    if ( v12 & 0x40000000 )
      v13 = -2 * v12;
    Function_2021f58(*(uint *)(v4 + v11), v13 + 32);
    if ( v5 == 4 )
    {
      Function_2021f24(*(uint *)(v4 + v11), 0);
    }
    else
    {
      v14 = *(uint *)(v4 + v11);
      if ( v12 + 6 >= 9 )
        Function_2021f24(v14, 9);
      else
        Function_2021f24(v14, v12 + 6);
    }
    result = s32_div_f(v18 + 1, 9);
    ++v5;
    v18 = v16;
  }
  while ( v5 < 9 );
  return result;
}

//----- (021D6A58) --------------------------------------------------------
uint __fastcall Function_21d6a58(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint result;
  int v10;
  int v11;

  v2 = a2;
  v3 = a1;
  v4 = Function_21d3898(*(uint *)(a2 + 4));
  v5 = Function_21d38a4(*(uint *)(v2 + 4));
  v6 = *(uint *)(v2 + 8);
  if ( v6 == 1 )
  {
    v7 = *(uint *)(v3 + 36) + 1;
    if ( v7 >= 9 )
      v7 = 0;
    *(uint *)(v3 + 36) = v7;
    s32_div_f(*(uint *)(v3 + 36) + 8, 9);
    if ( v4 + 4 < v5 )
      result = Function_2021cac(*(uint *)(v3 + 4 * v8), 1);
    else
      result = Function_2021cac(*(uint *)(v3 + 4 * v8), 0);
  }
  else if ( v6 == 2 )
  {
    v10 = *(uint *)(v3 + 36) - 1;
    if ( v10 < 0 )
      v10 = 8;
    *(uint *)(v3 + 36) = v10;
    v11 = *(uint *)(v3 + 36);
    if ( v4 - 4 >= 0 )
      result = Function_2021cac(*(uint *)(v3 + 4 * v11), 1);
    else
      result = Function_2021cac(*(uint *)(v3 + 4 * v11), 0);
  }
  else
  {
    result = Function_21d6ed0(v3, v2);
  }
  return result;
}

//----- (021D6AE4) --------------------------------------------------------
uint __fastcall Function_21d6ae4(int a1, int a2, int a3, int a4)
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
  uint result;
  int v14;
  uint *v15;
  char v16;
  short v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;

  v23 = a4;
  v4 = a2;
  v18 = a1;
  v5 = Function_21d3898(*(uint *)(a2 + 4));
  v19 = Function_21d38a4(*(uint *)(v4 + 4));
  v6 = 0;
  v20 = v5 - 4;
  do
  {
    s32_div_f(*(uint *)(v18 + 36) + v6, 9);
    v8 = v7;
    v9 = 0;
    v10 = v20 + v6;
    if ( v20 + v6 >= 0 && v10 < v19 )
    {
      v11 = Function_21d38b0(*(uint *)(v4 + 4), v10);
      if ( v11 != 494 && *(uint *)(Function_21d37dc(*(uint *)(v4 + 4), v11) + 4) == 2 )
        v9 = 1;
    }
    v12 = v18 + 4 * v8;
    result = Function_2021cac(*(uint *)(v12 + 80), v9);
    if ( v9 )
    {
      v14 = *(uint *)v12;
      Function_2021d28();
      v21 = *v15 - 221184;
      v22 = v15[1];
      Function_2021c50(*(uint **)(v12 + 80), &v21);
      v16 = Function_2021f48(*(uint *)v12);
      Function_2021ef0(*(uint *)(v12 + 80), v16);
      v17 = Function_2021f74(*(uint *)v12);
      result = Function_2021f58(*(uint *)(v12 + 80), v17 - 1);
    }
    ++v6;
  }
  while ( v6 < 9 );
  return result;
}

//----- (021D6B94) --------------------------------------------------------
int __fastcall Function_21d6b94(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a1;
  v3 = Function_21d38a4(*(uint *)(a2 + 4));
  result = FX_Div(221184, v3 << 12);
  *(uint *)(v2 + 120) = result;
  return result;
}

//----- (021D6BB0) --------------------------------------------------------
int __fastcall Function_21d6bb0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v7;
  int v8;
  int v9;

  v9 = a4;
  v4 = a1;
  v5 = Function_21d3898(*(uint *)(a2 + 4));
  v8 = (ull)((ll_mul(*(int *)(v4 + 120), v5 << 12) + 2048) >> 12) + 237568;
  v7 = 1015808;
  return Function_2021c50(*(uint **)(v4 + 116), &v7);
}

//----- (021D6BF8) --------------------------------------------------------
int __fastcall Function_21d6bf8(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  long long v6;

  v4 = a1;
  v5 = a3;
  v6 = ll_mul(a2 - a1, a4 << 12);
  return FX_Div((v6 + 2048) >> 12, v5 << 12) + v4;
}

//----- (021D6C24) --------------------------------------------------------
int __fastcall Function_21d6c24(int *a1, int a2)
{
  int v2;
  int *v3;
  int result;

  v2 = a2;
  v3 = a1;
  Call_FillMemWithValue(a1, 0, 0x148u);
  result = Function_21d3898(*(uint *)(v2 + 4));
  v3[81] = result;
  return result;
}

//----- (021D6C44) --------------------------------------------------------
uint __fastcall Function_21d6c44(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  short v9;
  char v10;
  uint result;
  int v12;
  int v13;
  int v14;
  int v15;

  v15 = a4;
  v4 = a1;
  v5 = *(uint *)(a1 + 36);
  v6 = 0;
  do
  {
    v7 = v4 + 4 * v5;
    if ( *(uint *)(v7 + 40) )
    {
      Function_21d6ca4(*(uint *)v7, &v14, &v13);
      Function_20128c4(**(uint ***)(v7 + 40), v14, v13, v8);
      v9 = Function_2021f74(*(uint *)v7);
      Function_2012a30(**(uint ***)(v7 + 40), v9 - 1);
      v10 = Function_2021f48(*(uint *)v7);
      Function_2012a90(**(uint ***)(v7 + 40), v10);
    }
    result = s32_div_f(v5 + 1, 9);
    ++v6;
    v5 = v12;
  }
  while ( v6 < 9 );
  return result;
}

//----- (021D6CA4) --------------------------------------------------------
int __fastcall Function_21d6ca4(int a1, uint *a2, uint *a3)
{
  uint *v3;
  uint *v4;
  uint *v5;
  int result;

  v3 = a2;
  v4 = a3;
  Function_2021d28();
  *v3 = *v5 >> 12;
  *v4 = v5[1] >> 12;
  *v3 -= 64;
  result = *v4 - 8;
  *v4 = result;
  return result;
}

//----- (021D6CC8) --------------------------------------------------------
int **__fastcall Function_21d6cc8(int a1, int a2, int a3, int a4)
{
  uint v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int **result;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;

  v6 = a3;
  v7 = a1;
  v15 = a2;
  v16 = a4;
  v18 = Function_21d3898(*(uint *)(a3 + 4));
  v8 = Function_21d38a4(*(uint *)(v6 + 4));
  v9 = *(uint *)(v6 + 8);
  v17 = v8;
  if ( v9 == 1 )
  {
    v4 = *(uint *)(v7 + 36) + 8;
    v5 = v18 + 4;
  }
  else if ( v9 == 2 )
  {
    v4 = *(uint *)(v7 + 36);
    v5 = v18 - 4;
  }
  if ( !v9 )
    return (int **)Function_21d67ec(v7, v15, v6, v16);
  s32_div_f(v4, 9);
  v12 = v11;
  if ( v5 >= v17 || v5 < 0 )
  {
    v14 = v7 + 40;
    result = *(int ***)(v14 + 4 * v11);
    if ( result )
    {
      Function_21d4d1c(result);
      result = 0;
      *(uint *)(v14 + 4 * v12) = 0;
    }
  }
  else
  {
    v13 = Function_21d38b0(*(uint *)(v6 + 4), v5);
    if ( v13 == 494 )
      result = (int **)Function_21d6df4(v7, v15, v16, v12, v5 + 1);
    else
      result = (int **)Function_21d6d78(v7, v15, v6, v16, v12, v13);
  }
  return result;
}

//----- (021D6D78) --------------------------------------------------------
uint __fastcall Function_21d6d78(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int **v11;
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

  v6 = a3;
  v7 = a1;
  v8 = a2;
  v9 = a4;
  v13 = (int *)Function_21d37dc(*(uint *)(a3 + 4), a6);
  if ( !v13 )
    ErrorHandler();
  v14 = *(uint *)(v8 + 336);
  v16 = *(uint *)(v7 + 152);
  v20 = 2;
  v22 = 1;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v21 = 0;
  v23 = v9;
  v10 = Function_21d16d8(v8, *(uint *)(v6 + 4), v9, *v13);
  v11 = *(int ***)(v7 + 40 + 4 * a5);
  if ( v11 )
    Function_21d4d1c(v11);
  v15 = v10;
  *(uint *)(v7 + 40 + 4 * a5) = Function_21d4cb8((int **)&v14, *(uint *)(v7 + 76));
  return Function_21d4da0(v10);
}

//----- (021D6DF4) --------------------------------------------------------
ushort *__fastcall Function_21d6df4(int a1, int a2, uint a3, int a4, int a5)
{
  uint v5;
  int v6;
  int v7;
  ushort *v8;
  int v9;
  int v10;
  int **v11;
  int v12;
  int v14;
  ushort **v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  uint v25;
  int v26;

  v26 = a4;
  v5 = a3;
  v14 = a1;
  v6 = a2;
  v7 = a4;
  v8 = (ushort *)Function_2023790(32, a3);
  v15 = (ushort **)LoadFromMsgNARC(0, 26, 697, v5);
  v16 = *(uint *)(v6 + 336);
  v18 = *(uint *)(v14 + 152);
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v23 = 0;
  v22 = 2;
  v25 = v5;
  v24 = 1;
  v9 = Function_21d4d6c(*(uint *)(v6 + 336), 0xFu, 2u);
  Function_20238a0(v8, a5, 3, 2, 1);
  Function_201d78c(v9, 2);
  Function_200b1b8_CallMsgDecrypt(v15, 0x63u, v8);
  Function_201d78c(v9, 2);
  v10 = 4 * v7;
  v11 = *(int ***)(v14 + 40 + v10);
  if ( v11 )
    Function_21d4d1c(v11);
  v17 = v9;
  *(uint *)(v14 + 40 + v10) = Function_21d4cb8((int **)&v16, *(uint *)(v14 + 76));
  Function_21d4da0(v9);
  Function_20237bc_FreeMsg((int)v8, v12);
  return Function_200b190((ushort *)v15);
}

//----- (021D6ED0) --------------------------------------------------------
uint __fastcall Function_21d6ed0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint result;
  int v10;
  int v11;

  v2 = a2;
  v3 = a1;
  v4 = Function_21d3898(*(uint *)(a2 + 4));
  v5 = Function_21d38a4(*(uint *)(v2 + 4));
  v6 = v4 - 4;
  v7 = *(uint *)(v3 + 36);
  v11 = v5;
  v8 = 0;
  do
  {
    if ( v6 < 0 || v6 >= v11 )
      Function_2021cac(*(uint *)(v3 + 4 * v7), 0);
    else
      Function_2021cac(*(uint *)(v3 + 4 * v7), 1);
    result = s32_div_f(v7 + 1, 9);
    ++v8;
    v7 = v10;
    ++v6;
  }
  while ( v8 < 9 );
  return result;
}

//----- (021D6F20) --------------------------------------------------------
int __fastcall Function_21d6f20(int a1, int a2, int a3)
{
  int v3;
  long long v4;
  int v5;
  int v6;

  v3 = a2;
  v4 = ll_mul((640 - *(uint *)(a3 + 12)) << 12, 126976LL);
  v5 = FX_Div((v4 + 2048) >> 12, 2621440);
  v6 = Function_21d2170(v3);
  return Function_2007dec(v6, 0x17u, v5 >> 12);
}

//----- (021D6F64) --------------------------------------------------------
int __fastcall Function_21d6f64(int a1)
{
  int v1;

  v1 = Function_21d2170(a1);
  return Function_2007dec(v1, 0x17u, 31);
}

//----- (021D6F74) --------------------------------------------------------
short *__fastcall Function_21d6f74(int a1)
{
  int v1;
  int v2;
  short *result;

  v1 = FX_Div(
         ((uint)(((640 - *(uint *)(a1 + 12)) << 28) + 2048) >> 12) | ((__CFADD__(
                                                                                   (640 - *(uint *)(a1 + 12)) << 28,
                                                                                   2048)
                                                                               + (uint)((ull)((640 - *(uint *)(a1 + 12)) << 12) >> 16)) << 20),
         2621440);
  v2 = (v1 >> 12) | ((16 - (v1 >> 12)) << 8);
  result = &REG_BLDALPHA;
  REG_BLDALPHA = v2;
  return result;
}

//----- (021D6FB4) --------------------------------------------------------
uint *__fastcall Function_21d6fb4(int a1, int **a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v10;
  int **v11;
  int v12;

  v10 = a1;
  v4 = a3;
  v11 = a2;
  v5 = a4;
  Function_2005748(0x685u);
  if ( *(uint *)(v4 + 16) )
  {
    if ( v5 )
      return Function_21d1558((uint *)(v10 + 224), **v11, 2, *(uint *)(v10 + 220), 12, 3, 20, 14, 4);
    v12 = 3;
    v7 = 14;
    v6 = 12;
    v8 = 20;
  }
  else
  {
    if ( !v5 )
      return Function_21d1558((uint *)(v10 + 224), **v11, 2, *(uint *)(v10 + 220), 3, 0, 14, 0, 4);
    v6 = 3;
    v7 = 0;
    v12 = 0;
    v8 = 14;
    Function_2019184(**v11, 1u, 3u, 192);
  }
  return Function_21d1558((uint *)(v10 + 224), **v11, 2, *(uint *)(v10 + 220), v12, v6, v7, v8, 4);
}

//----- (021D7044) --------------------------------------------------------
int __fastcall Function_21d7044(uint *a1, int **a2)
{
  uint *v2;
  int **v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = a2;
  v4 = Function_21d157c(a1 + 56);
  if ( !v4 )
  {
    v5 = 8 * (s32_div_f((v2[63] - 1) * v2[62], v2[64]) + v2[60]) - 112;
    if ( v5 < -48 )
      v5 = -48;
    Function_201c63c(**v3, 1, 3u, v5);
  }
  return v4;
}

//----- (021D7094) --------------------------------------------------------
uint __fastcall Function_21d7094(int **a1, int a2, int a3)
{
  uint result;

  if ( !*(uint *)(a2 + 16) && !a3 )
    Function_2019184(**a1, 1u, 3u, 0);
  result = REG_DISPCNT & 0xFFFF1FFF;
  REG_DISPCNT &= 0xFFFF1FFF;
  return result;
}

//----- (021D70C0) --------------------------------------------------------
int __fastcall Function_21d70c0(int a1, uint a2)
{
  uint v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = Function_21d4d6c(*(uint *)(a1 + 336), 0xFu, 2u);
  v4 = Function_2012898(v3, 1, v2);
  Function_21d4da0(v3);
  return v4;
}

//----- (021D70E8) --------------------------------------------------------
uint **__fastcall Function_21d70e8(int *a1)
{
  int *v1;
  int v2;
  uint **result;

  v1 = a1;
  Function_2021fe0(a1[29], 1);
  v2 = 0;
  do
  {
    Function_2021fe0(*v1, 1);
    Function_2021fe0(v1[20], 1);
    result = (uint **)v1[10];
    if ( result )
      result = (uint **)Function_2012af0(*result, 1);
    ++v2;
    ++v1;
  }
  while ( v2 < 9 );
  return result;
}

//----- (021D7124) --------------------------------------------------------
uint **__fastcall Function_21d7124(int *a1)
{
  int *v1;
  int v2;
  uint **result;

  v1 = a1;
  Function_2021fe0(a1[29], 0);
  v2 = 0;
  do
  {
    Function_2021fe0(*v1, 0);
    Function_2021fe0(v1[20], 0);
    result = (uint **)v1[10];
    if ( result )
      result = (uint **)Function_2012af0(*result, 0);
    ++v2;
    ++v1;
  }
  while ( v2 < 9 );
  return result;
}

//----- (021D7160) --------------------------------------------------------
int __fastcall Function_21d7160(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int *v10;
  int *v11;
  int v12;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  s32_div_f(*(uint *)(a1 + 36) + 4, 9);
  v9 = *(uint *)(v4 + 4 * v8);
  Function_2021d28();
  v11 = v10;
  v12 = Function_21d375c(*(uint *)(v6 + 4));
  Function_21d1778(v5, *(uint *)(v6 + 4), v7, v12, *v11, v11[1]);
  return Function_21d238c(v5, 0);
}

//----- (021D71A8) --------------------------------------------------------
int __fastcall Function_21d71a8(int a1, int **a2, int a3, int a4)
{
  int v4;
  int v5;
  int result;

  v4 = a3;
  v5 = a4;
  Function_21d6fb4(a1, a2, a3, a4);
  result = *(uint *)(v4 + 16);
  if ( result != 1 )
  {
    if ( v5 )
      result = Function_200aae0(4, 0, -16, 57, 1);
    else
      result = Function_200aae0(4, -16, 0, 57, 1);
  }
  return result;
}

//----- (021D71E4) --------------------------------------------------------
int __fastcall Function_21d71e4(uint *a1, int **a2, int a3, int a4)
{
  int v4;
  uint ***v5;
  int v6;
  int v7;
  int v8;

  v4 = a3;
  v5 = (uint ***)a2;
  v6 = a4;
  v7 = Function_21d7044(a1, a2);
  if ( *(uint *)(v4 + 16) == 1 )
    v8 = 1;
  else
    v8 = Function_200ac1c(1);
  if ( v7 != 1 || v8 != 1 )
    return 0;
  if ( *(uint *)(v4 + 16) != 1 && !v6 )
  {
    Function_200ab4c(-16, 63, 1);
    Function_201ada4_ClearTextBox((int)(*v5 + 1), 0);
    Function_2019ebc(**v5, 1u);
  }
  Function_21d7094((int **)v5, v4, v6);
  return 1;
}

//----- (021D7248) --------------------------------------------------------
uint *__fastcall Function_21d7248(int *a1, int **a2, int a3, int a4)
{
  int v4;
  int **v5;
  int v6;
  int v7;
  uint *result;

  v4 = (int)a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  Function_21d70e8(a1);
  Function_21d6fb4(v4, v5, v6, v7);
  if ( !v7 )
  {
    Function_21d7394(v4, v5);
    Function_21d73f0(v4, v5);
  }
  result = *(uint **)(v6 + 16);
  if ( result != (uint *)1 )
  {
    if ( v7 )
      result = Function_21d23f8(*v5 + 91, 4, -16, 0, 0, 16, 40, 8, 0);
    else
      result = Function_21d23f8(*v5 + 91, 4, 0, -16, 16, 0, 40, 8, 0);
  }
  return result;
}

//----- (021D72D4) --------------------------------------------------------
int __fastcall Function_21d72d4(int *a1, int **a2, int a3, int a4)
{
  int v4;
  int *v5;
  int *v6;
  int v7;
  int v8;
  int *v9;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v15 = a4;
  v4 = a3;
  v5 = a1;
  v6 = (int *)a2;
  v7 = a4;
  v11 = Function_21d7044(a1, a2);
  if ( *(uint *)(v4 + 16) != 1 )
    v12 = Function_21d2424((uint *)(*v6 + 364));
  if ( v7 )
  {
    v13 = 1;
    v14 = 1;
  }
  else
  {
    v13 = Function_21d73c8(v5, v6);
    v14 = Function_21d7424(v5, v6);
  }
  v8 = 0;
  v9 = &v11;
  do
  {
    if ( !*v9 )
      break;
    ++v8;
    ++v9;
  }
  while ( v8 < 4 );
  if ( v8 != 4 )
    return 0;
  if ( v7 )
  {
    Function_21d7124(v5);
    Function_21d23c0(*v6, 0);
    Function_21d2360(*v6, 0);
  }
  else if ( *(uint *)(v4 + 16) != 1 )
  {
    Function_20bf5a0(&REG_BLDCNT, 46, 8, 0, 0, -16);
    Function_201ada4_ClearTextBox(*v6 + 4, 0);
    Function_2019ebc(*(uint **)*v6, 1u);
  }
  Function_21d7094((int **)v6, v4, v7);
  return 1;
}

//----- (021D7394) --------------------------------------------------------
int __fastcall Function_21d7394(int a1, int *a2)
{
  int *v2;
  int v3;

  v2 = a2;
  v3 = a1;
  Function_21d2648((uint *)(a1 + 260), 56, 48, 80, 72, 4);
  return Function_21d2164(*v2, *(uint *)(v3 + 260), *(uint *)(v3 + 264));
}

//----- (021D73C8) --------------------------------------------------------
int __fastcall Function_21d73c8(int a1, int *a2)
{
  int v2;
  int *v3;
  int v4;

  v2 = a1;
  v3 = a2;
  v4 = Function_21d2664((uint *)(a1 + 260));
  Function_21d2164(*v3, *(uint *)(v2 + 260), *(uint *)(v2 + 264));
  return v4;
}

//----- (021D73F0) --------------------------------------------------------
int __fastcall Function_21d73f0(int a1, int *a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = a2;
  Function_21d2648((uint *)(a1 + 292), 170, 172, 82, 32, 4);
  v4 = *(uint *)(v2 + 292);
  v5 = *(uint *)(v2 + 296);
  return Function_21d1848(*v3);
}

//----- (021D7424) --------------------------------------------------------
int __fastcall Function_21d7424(int a1, int *a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v2 = a1;
  v3 = a2;
  v4 = Function_21d2664((uint *)(a1 + 292));
  v5 = *(uint *)(v2 + 292);
  v6 = v4;
  v7 = *(uint *)(v2 + 296);
  Function_21d1848(*v3);
  return v6;
}

//----- (021D744C) --------------------------------------------------------
int __fastcall Function_21d744c(int result)
{
  **(uint **)result |= 4u;
  *(uint *)(result + 16) = 0;
  *(uint *)(result + 20) = 0;
  *(uint *)(result + 32) = 2;
  return result;
}

//----- (021D7464) --------------------------------------------------------
int __fastcall Function_21d7464(int a1, int a2)
{
  int result;

  result = 2;
  **(uint **)a2 |= 2u;
  *(uint *)(a2 + 16) = 0;
  *(uint *)(a2 + 20) = 1;
  *(uint *)(a2 + 12) = 0;
  *(uint *)(a2 + 32) = 2;
  return result;
}

//----- (021D747C) --------------------------------------------------------
int __fastcall Function_21d747c(int a1)
{
  if ( *(uint *)(*(uint *)(a1 + 4) + 5952) )
    return 0;
  **(uint **)a1 |= 1u;
  *(uint *)(a1 + 16) = 0;
  *(uint *)(a1 + 20) = 0;
  *(uint *)(a1 + 32) = 2;
  Function_2005748(0x5DDu);
  return 1;
}

//----- (021D74B0) --------------------------------------------------------
int __fastcall Function_21d74b0(int a1, uint a2)
{
  int v2;
  uint v3;
  int v4;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = *(uint *)(a1 + 4);
  if ( *(uint *)(v4 + 5952) == 1 )
    return 0;
  v6 = Function_21d36d8(v4) == 0;
  if ( !Function_21d36a4(*(uint *)(v2 + 4), v6) )
    return 0;
  Function_21d36c0(*(uint *)(v2 + 4), v6);
  Function_2005748(0x5DDu);
  Function_21d3684(*(uint **)(v2 + 4), 0, 0, 0, 0, 0, v6, v3);
  Function_21d36fc(*(uint *)(v2 + 4), 0);
  *(uint *)(v2 + 12) = 0;
  **(uint **)v2 |= 0x10u;
  *(uint *)(v2 + 16) = 0;
  *(uint *)(v2 + 20) = 0;
  *(uint *)(v2 + 32) = 2;
  *(uint *)(v2 + 28) = 0;
  return 1;
}

//----- (021D7538) --------------------------------------------------------
int __fastcall Function_21d7538(int a1, uint a2)
{
  int v2;
  uint v3;
  int v4;
  int v5;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = Function_21d37bc(*(uint *)(a1 + 4));
  v5 = Function_21d36d8(*(uint *)(v2 + 4));
  Function_21d3684(*(uint **)(v2 + 4), 0, 0, 0, 0, 0, v5, v3);
  **(uint **)v2 |= 0x10u;
  Function_21d3794(*(uint *)(v2 + 4), v4);
  *(uint *)(v2 + 12) = 0;
  *(uint *)(*(uint *)(v2 + 4) + 5952) = 0;
  *(uint *)(v2 + 16) = 0;
  *(uint *)(v2 + 20) = 0;
  *(uint *)(v2 + 8) = 0;
  result = 2;
  *(uint *)(v2 + 32) = 2;
  *(uint *)(v2 + 28) = 0;
  return result;
}

//----- (021D7590) --------------------------------------------------------
int __fastcall Function_21d7590(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = a1[6] - 1;
  v2[6] = v4;
  if ( v4 < 0 )
  {
    Function_21d5f58(a2, v2);
    result = 0;
    v2[5] = 0;
    *(uint *)(v3 + 32) = 0;
  }
  else if ( Function_21d6108(a2, v2[7]) )
  {
    Function_21d60fc(v3, v2, v2[8]);
    *(uint *)(v3 + 32) = 1;
    result = Function_2005748(0x68Bu);
  }
  else
  {
    result = 0;
    v2[6] = 0;
  }
  return result;
}

//----- (021D75DC) --------------------------------------------------------
int __fastcall Function_21d75dc(uint *a1, int a2)
{
  int v2;
  uint *v3;
  int result;

  v2 = a2;
  v3 = a1;
  if ( dword_21BF6C0 & 0x40 )
  {
    if ( Function_21d6108(a2, -1) )
    {
      Function_21d60fc(v2, v3, 2);
      *(uint *)(v2 + 32) = 1;
      result = Function_2005748(0x68Bu);
    }
    else
    {
      Function_21d5f58(v2, v3);
      result = 0;
      *(uint *)(v2 + 32) = 0;
    }
  }
  else if ( dword_21BF6C0 & 0x80 )
  {
    if ( Function_21d6108(a2, 1) )
    {
      Function_21d60fc(v2, v3, 1);
      *(uint *)(v2 + 32) = 1;
      result = Function_2005748(0x68Bu);
    }
    else
    {
      Function_21d5f58(v2, v3);
      result = 0;
      *(uint *)(v2 + 32) = 0;
    }
  }
  else if ( dword_21BF6C4 & 0x20 )
  {
    a1[5] = 1;
    a1[6] = 5;
    a1[7] = -1;
    a1[8] = 2;
    result = Function_21d5f6c(a2, a1);
  }
  else if ( dword_21BF6C4 & 0x10 )
  {
    a1[5] = 1;
    a1[6] = 5;
    a1[7] = 1;
    a1[8] = 1;
    result = Function_21d5f6c(a2, a1);
  }
  else
  {
    result = *(uint *)(a2 + 32);
    if ( result == 1 )
    {
      Function_21d5f58(a2, v3);
      result = 0;
      *(uint *)(v2 + 32) = 0;
    }
  }
  return result;
}

//----- (021D76B0) --------------------------------------------------------
int (*__fastcall Function_21d76b0(int *a1, int a2, int a3))()
{
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int (*result)();

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Function_21d7728(a3);
  v7 = Function_21d7770(v4, v5);
  v8 = Function_21d7798(v4, v5);
  *v3 = v6;
  v3[1] = v7;
  v3[8] = v8;
  v3[9] = Function_21d7814();
  v3[2] = (int)Function_21d7818;
  v3[3] = (int)Function_21d7860;
  v3[4] = (int)Function_21d78ac;
  v3[5] = (int)Function_21d78c0;
  v3[6] = (int)Function_21d7950;
  result = Function_21d79e4;
  v3[7] = (int)Function_21d79e4;
  return result;
}

//----- (021D7710) --------------------------------------------------------
int __fastcall Function_21d7710(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_21d77d4(*a1);
  Function_21d77e8(*v1);
  return Function_21d77fc(v1[8]);
}

//----- (021D7728) --------------------------------------------------------
int *__fastcall Function_21d7728(uint a1, int a2)
{
  int v2;
  uint v3;
  int *v4;
  int *v5;
  int v6;
  int *v7;

  v2 = a2;
  v3 = a1;
  v4 = (int *)malloc(a1, 40);
  if ( !v4 )
    ErrorHandler();
  Call_FillMemWithValue(v4, 0, 0x28u);
  v5 = (int *)Function_21d1410(v2, 0);
  v6 = 0;
  v4[7] = *v5;
  v7 = v4;
  do
  {
    ++v6;
    *v7 = 4;
    ++v7;
  }
  while ( v6 < 7 );
  v4[8] = Function_21d13a0(v2);
  v4[9] = v3;
  return v4;
}

//----- (021D7770) --------------------------------------------------------
uchar *__fastcall Function_21d7770(uint a1, int a2)
{
  int v2;
  uchar *v3;

  v2 = a2;
  v3 = (uchar *)malloc(a1, 4);
  if ( !v3 )
    ErrorHandler();
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  *(uint *)v3 = Function_21d13fc(v2);
  return v3;
}

//----- (021D7798) --------------------------------------------------------
int *__fastcall Function_21d7798(uint a1, int a2)
{
  uint v2;
  int v3;
  int v4;
  int *v5;

  v2 = a1;
  v3 = a2;
  v4 = 20 * Function_21d7814();
  v5 = (int *)malloc(v2, v4);
  if ( !v5 )
    ErrorHandler();
  Call_FillMemWithValue(v5, 0, v4);
  Function_21d4878(v5, v3, v2, 1);
  return v5;
}

//----- (021D77D4) --------------------------------------------------------
uint __fastcall Function_21d77d4(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return free(v1);
}

//----- (021D77E8) --------------------------------------------------------
uint __fastcall Function_21d77e8(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return free(v1);
}

//----- (021D77FC) --------------------------------------------------------
uint __fastcall Function_21d77fc(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  Function_21d4660(v1);
  return free(v1);
}

//----- (021D7814) --------------------------------------------------------
int Function_21d7814()
{
  return 1;
}

//----- (021D7818) --------------------------------------------------------
int __fastcall Function_21d7818(int a1, uint *a2)
{
  int v2;
  uint *v3;
  int v4;
  uint *v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = malloc(*(uint *)(a1 + 4), 36);
  *(uint *)(v2 + 8) = v4;
  if ( !v4 )
    ErrorHandler();
  Call_FillMemWithValue(*(int **)(v2 + 8), 0, 0x24u);
  v5 = v3;
  *(uint *)(*(uint *)(v2 + 8) + 28) = 1229;
  v6 = 0;
  do
  {
    ++v6;
    *v5 = 4;
    ++v5;
  }
  while ( v6 < 7 );
  Function_21d7a64(*(uint *)(v2 + 8), v3, *(uint *)(v2 + 4));
  return 1;
}

//----- (021D7860) --------------------------------------------------------
int __fastcall Function_21d7860(uint *a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1[2];
  if ( a1[3] == 1 )
    return 1;
  if ( a1[4] == 1 )
    return 0;
  Function_21d8434(v3, *(uint *)(*(uint *)(a2 + 28) + 12), *(uint *)(*(uint *)(a2 + 28) + 8));
  Function_21d7b20(v3, v2);
  if ( *(uint *)(*(uint *)(v2 + 28) + 32) )
  {
    *(uint *)(v3 + 12) = 0;
    *(uint *)(v3 + 16) = 0;
  }
  else
  {
    Function_21d82a8(v3, v2);
  }
  return 0;
}

//----- (021D78AC) --------------------------------------------------------
int __fastcall Function_21d78ac(int a1)
{
  int v1;

  v1 = a1;
  Function_21d7b70(*(uint *)(a1 + 8));
  free(*(uint *)(v1 + 8));
  return 1;
}

//----- (021D78C0) --------------------------------------------------------
int __fastcall Function_21d78c0(int a1, uint *a2, int a3)
{
  char v3;
  uint *v4;
  int v5;
  int v6;
  int result;

  v4 = a2;
  v5 = *a2;
  switch ( v3 )
  {
    case 0:
      v6 = malloc(v4[1], 60);
      v4[2] = v6;
      if ( !v6 )
        ErrorHandler();
      Call_FillMemWithValue((int *)v4[2], 0, 0x3Cu);
      ++*v4;
      goto LABEL_10;
    case 1:
      Function_21d7c64(v4[2], a1, a3, v4[1]);
      ++*v4;
      goto LABEL_10;
    case 2:
      Function_200aae0(4, 0, -16, 63, 2);
      ++*v4;
      goto LABEL_10;
    case 3:
      if ( Function_200ac1c(2) )
        ++*v4;
      goto LABEL_10;
    case 4:
      *v4 = v5 + 1;
      result = 1;
      break;
    default:
LABEL_10:
      result = 0;
      break;
  }
  return result;
}

//----- (021D7950) --------------------------------------------------------
int __fastcall Function_21d7950(int a1, int a2, uint *a3, int a4)
{
  int *v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  uint v9;

  v4 = *(int **)(a2 + 8);
  v5 = a3;
  v6 = a1;
  v7 = *(uint *)(a4 + 8);
  Function_21d144c(*v4, *a3);
  Function_21d144c(v4[1], v5[1]);
  Function_21d144c(v4[2], v5[2]);
  Function_21d144c(v4[6], v5[3]);
  Function_21d144c(v4[7], v5[4]);
  Function_21d84a8(*v4, v4[3], -14, 3, 5);
  Function_21d84a8(v4[1], v4[4], -14, 3, 5);
  Function_21d84a8(v4[2], v4[5], -14, 2, 5);
  v8 = *(uint *)(v5[7] + 32);
  if ( v8 )
  {
    if ( v8 == 1 )
      Function_21d83c0(v4, v6, v5);
  }
  else
  {
    v9 = Function_201d580(524, *(uint *)(v7 + 12));
    Function_21d8354(v4, v6, v9, *(uint *)(v7 + 28));
  }
  return 0;
}

//----- (021D79E4) --------------------------------------------------------
int __fastcall Function_21d79e4(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = a2[2];
  switch ( (uchar)*a2 )
  {
    case 0u:
      Function_200aae0(4, -16, 0, 63, 2);
      ++*v2;
      goto LABEL_8;
    case 1u:
      if ( Function_200ac1c(2) )
        ++*v2;
      goto LABEL_8;
    case 2u:
      Function_21d7cac(v4, v3, a2[1]);
      ++*v2;
      goto LABEL_8;
    case 3u:
      free(v4);
      v2[2] = 0;
      ++*v2;
      goto LABEL_8;
    case 4u:
      result = 1;
      break;
    default:
LABEL_8:
      result = 0;
      break;
  }
  return result;
}

//----- (021D7A64) --------------------------------------------------------
int __fastcall Function_21d7a64(int *a1, int *a2, uint a3)
{
  uint v3;
  int *v4;
  int *v5;
  int **v6;
  int result;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  a1[2] = malloc(a3, 28);
  Function_21d154c((uchar *)v4[2], 16, 64, 0, 96);
  Function_21d154c((uchar *)(v4[2] + 4), 64, 112, 0, 96);
  Function_21d154c((uchar *)(v4[2] + 8), 112, 192, 0, 96);
  Function_21d154c((uchar *)(v4[2] + 12), 56, 72, 116, 132);
  Function_21d154c((uchar *)(v4[2] + 16), 138, 154, 116, 132);
  *(uchar *)(v4[2] + 20) = -2;
  *(uchar *)(v4[2] + 21) = -8;
  *(uchar *)(v4[2] + 22) = 104;
  *(uchar *)(v4[2] + 23) = 104;
  Function_21d154c((uchar *)(v4[2] + 24), 0, 16, 116, 180);
  v6 = (int **)malloc(v3, 8);
  *v6 = v4;
  v6[1] = v5;
  v4[1] = (int)v6;
  result = Function_2023fcc(v4[2], 7u, (int)Function_21d7b8c, (int)v6, v3);
  *v4 = result;
  return result;
}

//----- (021D7B20) --------------------------------------------------------
int __fastcall Function_21d7b20(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  uint *v5;
  int v6;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = 0;
  v5 = v2;
  do
  {
    ++v4;
    *v5 = 4;
    ++v5;
  }
  while ( v4 < 7 );
  Function_21d84b8(v2);
  Function_202404c(*(int **)v3);
  if ( !Function_21d84e0(v3, *(uint *)(v2[7] + 4)) )
    *(uint *)(v3 + 12) = 0;
  v6 = *(uint *)(v3 + 28);
  if ( v2[5] == 4 )
    result = Function_21d8580(v6, 0);
  else
    result = Function_21d8580(v6, *(uint *)(v3 + 12));
  *(uint *)(v3 + 28) = result;
  return result;
}

//----- (021D7B70) --------------------------------------------------------
int __fastcall Function_21d7b70(int *a1)
{
  int *v1;
  int result;

  v1 = a1;
  Function_2024034(*a1);
  free(v1[1]);
  free(v1[2]);
  result = 0;
  v1[2] = 0;
  return result;
}

//----- (021D7B8C) --------------------------------------------------------
int __fastcall Function_21d7b8c(int a1, int a2, uint *a3)
{
  int v3;
  int v4;
  uint *v5;
  int v6;
  int v7;
  uint *v8;
  int v9;
  int result;

  v3 = a3[1];
  v4 = a1;
  v5 = (uint *)*a3;
  v6 = *(uint *)(*(uint *)(v3 + 28) + 4);
  *(uint *)(v3 + 4 * v4) = a2;
  if ( a2 )
  {
    if ( a2 == 2 )
    {
      switch ( 2 )
      {
        case 0:
          *(uint *)(*(uint *)(v3 + 28) + 52) = 1;
          break;
        case 1:
          *(uint *)(*(uint *)(v3 + 28) + 48) = 1;
          break;
        case 2:
          *(uint *)(*(uint *)(v3 + 28) + 44) = 1;
          break;
        case 3:
          if ( !v5[8] )
            Function_21d853c(v3, 0);
          break;
        case 4:
          if ( !v5[8] )
          {
            v7 = Function_21d3768(v6);
            Function_21d853c(v3, v7 - 1);
          }
          break;
        case 6:
          v8 = *(uint **)(v3 + 28);
          if ( *(uint *)(v8[1] + 5952) )
            v8[9] = 1;
          else
            v8[10] = 1;
          break;
        default:
          break;
      }
      if ( v4 == 5 )
      {
        if ( !*(uint *)(*(uint *)(v3 + 28) + 32) )
        {
          Function_21d8324(v5);
          v9 = v5[3];
          if ( v9 <= 16 && v9 >= -16 )
            v5[3] = 0;
        }
        v5[5] = (ushort)word_21BF6D8;
        v5[6] = (ushort)word_21BF6DA;
      }
      result = 1;
      v5[8] = 1;
    }
    else
    {
      result = 0;
      v5[8] = 0;
    }
  }
  else
  {
    v5[5] = (ushort)word_21BF6D8;
    result = (ushort)word_21BF6DA;
    v5[6] = (ushort)word_21BF6DA;
  }
  return result;
}

//----- (021D7C64) --------------------------------------------------------
uint __fastcall Function_21d7c64(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = a1;
  Function_21d7cd8(a2, a3, a4);
  Function_21d820c(v4, v6);
  Function_21d7d8c(v7, v4, v6);
  Function_21d7e80(v7, v4, v5, v6);
  Function_21d8018(v7, v4, v5, v6);
  return Function_2019060(7u, 3);
}

//----- (021D7CAC) --------------------------------------------------------
uint __fastcall Function_21d7cac(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_21d81ec();
  Function_21d7fec(v3);
  Function_21d7e3c(v3, v4);
  Function_21d828c(v4, v5);
  return Function_2019060(7u, 1);
}

//----- (021D7CD8) --------------------------------------------------------
int __fastcall Function_21d7cd8(uint ***a1, int a2, uint a3)
{
  int *v3;
  uint **v4;
  int v5;
  uint *v6;
  uint v7;
  int v8;
  int v9;
  ushort *v11;

  v3 = (int *)a1;
  v4 = *a1;
  v5 = a2;
  v6 = *v4;
  v7 = a3;
  Function_21d276c((int)v4, 0, 4, 0, 0, a3);
  v8 = *(uint *)(*(uint *)(v5 + 28) + 4);
  if ( *(uint *)(v8 + 5952) == 1 )
  {
    Function_21d276c(*v3, 1u, 4, 96, 32, v7);
  }
  else if ( Function_21d36d8(v8) == 1 )
  {
    Function_21d276c(*v3, 0x19u, 4, 96, 32, v7);
  }
  Function_21d2724(*v3, 0x1Du, v6, 6, 0, 0, 1, v7);
  v9 = Function_21d27b8(*v3, 0x29u, 1, &v11, v7);
  Function_20198c0((int)v6, 6, (int)(v11 + 6), 0, 0, (uint)*v11 << 21 >> 24, (uint)v11[1] << 21 >> 24);
  free(v9);
  return Function_201c3c0((int)v6, 6);
}

//----- (021D7D8C) --------------------------------------------------------
int *__fastcall Function_21d7d8c(int a1, int *a2, uint a3)
{
  int *v3;
  int v4;
  uint v5;
  int v6;
  int v7;
  int *v8;
  int *v9;
  int *result;

  v3 = (int *)*a2;
  v4 = a1;
  v5 = a3;
  v6 = Function_21d26e0(*a2);
  v7 = v6;
  v8 = Function_2009a4c(v3[80], v6, 0x54u, 1, 1084, 2, v5);
  *(uint *)(v4 + 44) = v8;
  Function_200a3dc(v8);
  Function_2009d4c(*(int **)(v4 + 44));
  v9 = Function_2009b04(v3[81], v7, 3u, 0, 1003, 2, 12, v5);
  *(uint *)(v4 + 48) = v9;
  Function_200a640(v9);
  Function_2009d4c(*(int **)(v4 + 48));
  *(uint *)(v4 + 52) = Function_2009bc4(v3[82], v7, 0x52u, 1, 1082, 2u, v5);
  result = Function_2009bc4(v3[83], v7, 0x53u, 1, 1083, 3u, v5);
  *(uint *)(v4 + 56) = result;
  return result;
}

//----- (021D7E3C) --------------------------------------------------------
int __fastcall Function_21d7e3c(int a1, int ***a2)
{
  int v2;
  int **v3;

  v2 = a1;
  v3 = *a2;
  Function_200a4e4(*(int **)(a1 + 44));
  Function_200a6dc(*(int **)(v2 + 48));
  Function_2009d68(v3[80], *(uint ***)(v2 + 44));
  Function_2009d68(v3[81], *(uint ***)(v2 + 48));
  Function_2009d68(v3[82], *(uint ***)(v2 + 52));
  return Function_2009d68(v3[83], *(uint ***)(v2 + 56));
}

//----- (021D7E80) --------------------------------------------------------
int __fastcall Function_21d7e80(uint *a1, int a2, int a3, int a4)
{
  int v4;
  uint *v5;
  uint *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v15;
  char *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  char v22;
  int v23;

  v23 = a4;
  v4 = a4;
  v5 = a1;
  v6 = *(uint **)a2;
  v7 = a3;
  Function_20093b4(
    (int)&v22,
    1084,
    1003,
    1082,
    1083,
    -1,
    -1,
    0,
    0,
    *(uint *)(*(uint *)a2 + 320),
    *(uint *)(*(uint *)a2 + 324),
    v6[82],
    v6[83],
    0,
    0);
  v15 = v6[79];
  v16 = &v22;
  v19 = 8;
  v20 = 2;
  v17 = 196608;
  v18 = 950272;
  v21 = v4;
  v8 = Function_2021b90(&v15);
  *v5 = v8;
  Function_2021d6c(v8, 2u);
  if ( *(uint *)(*(uint *)(*(uint *)(v7 + 28) + 4) + 5952) == 1 )
    Function_2021cac(*v5, 0);
  v17 = 196608;
  v18 = 1146880;
  v9 = Function_2021b90(&v15);
  v5[1] = v9;
  Function_2021d6c(v9, 0);
  if ( !Function_21d36a4(*(uint *)(*(uint *)(v7 + 28) + 4), 1)
    || *(uint *)(*(uint *)(*(uint *)(v7 + 28) + 4) + 5952) == 1 )
  {
    Function_2021cac(v5[1], 0);
  }
  v17 = 196608;
  v18 = 1409024;
  v10 = Function_2021b90(&v15);
  v5[2] = v10;
  Function_2021d6c(v10, 1u);
  v17 = 507904;
  v18 = 0x100000;
  v11 = Function_2021b90(&v15);
  v5[6] = v11;
  Function_2021d6c(v11, 3u);
  v17 = 507904;
  v18 = 1384448;
  v12 = Function_2021b90(&v15);
  v5[7] = v12;
  Function_2021d6c(v12, 4u);
  v17 = 507904;
  v18 = 819200;
  v13 = Function_2021b90(&v15);
  v5[8] = v13;
  return Function_2021d6c(v13, 5u);
}

//----- (021D7FEC) --------------------------------------------------------
int __fastcall Function_21d7fec(int *a1)
{
  int *v1;

  v1 = a1;
  Function_2021bd4(*a1);
  Function_2021bd4(v1[1]);
  Function_2021bd4(v1[2]);
  Function_2021bd4(v1[6]);
  Function_2021bd4(v1[7]);
  return Function_2021bd4(v1[8]);
}

//----- (021D8018) --------------------------------------------------------
uint __fastcall Function_21d8018(int *a1, int *a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  char v9;
  uint **v10;
  uint **v11;
  int v12;
  uint **v13;
  uint **v14;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  uchar *v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;

  v29 = a4;
  v4 = a1;
  v5 = a3;
  v6 = a4;
  v7 = *a2;
  if ( !*a1 )
    ErrorHandler();
  v8 = (int *)Function_2009dc8(*(uint *)(v7 + 324), 1003);
  v19 = *(uint *)(v7 + 336);
  v23 = -40;
  v24 = -14;
  v25 = 0;
  v26 = 0;
  v21 = Function_200a72c(v8, 0);
  v27 = 2;
  v28 = v6;
  v9 = Function_201fab4(v21, 2);
  v18 = Function_21d4d6c(*(uint *)(v7 + 336), 0xAu, 4u);
  Function_21d4dac(*(uint *)(v7 + 336), v18, 697, 7u);
  v20 = v18;
  v22 = *v4;
  v10 = (uint **)Function_21d4ca0((int)&v19);
  v4[3] = (int)v10;
  Function_2012a60(*v10, v9 + 3);
  if ( *(uint *)(*(uint *)(*(uint *)(v5 + 28) + 4) + 5952) == 1 )
    Function_20129d0(*(uint **)v4[3], 0);
  Function_21d4da0(v18);
  v16 = Function_21d4d6c(*(uint *)(v7 + 336), 0xAu, 4u);
  Function_21d4dac(*(uint *)(v7 + 336), v16, 697, 5u);
  v20 = v16;
  v22 = v4[1];
  v11 = (uint **)Function_21d4ca0((int)&v19);
  v4[4] = (int)v11;
  Function_2012a60(*v11, v9 + 3);
  if ( !Function_21d36a4(*(uint *)(*(uint *)(v5 + 28) + 4), 1)
    || *(uint *)(*(uint *)(*(uint *)(v5 + 28) + 4) + 5952) == 1 )
  {
    Function_20129d0(*(uint **)v4[4], 0);
  }
  Function_21d4da0(v16);
  v12 = Function_21d4d6c(*(uint *)(v7 + 336), 0xAu, 4u);
  Function_21d4dac(*(uint *)(v7 + 336), v12, 697, 0x1Du);
  v20 = v12;
  v22 = v4[2];
  v13 = (uint **)Function_21d4ca0((int)&v19);
  v4[5] = (int)v13;
  Function_2012a60(*v13, v9 + 2);
  Function_21d4da0(v12);
  v17 = Function_21d4d6c(*(uint *)(v7 + 336), 0xEu, 2u);
  if ( *(uint *)(*(uint *)(*(uint *)(v5 + 28) + 4) + 5952) )
    Function_21d4dac(*(uint *)(v7 + 336), v17, 697, 0x6Cu);
  else
    Function_21d4dac(*(uint *)(v7 + 336), v17, 697, 0x6Bu);
  v20 = v17;
  v22 = v4[8];
  v23 = 10;
  v24 = -8;
  v14 = (uint **)Function_21d4ca0((int)&v19);
  v4[9] = (int)v14;
  Function_2012a60(*v14, v9 + 1);
  return Function_21d4da0(v17);
}

//----- (021D81EC) --------------------------------------------------------
int __fastcall Function_21d81ec(int ***a1)
{
  int ***v1;

  v1 = a1;
  Function_21d4d1c(a1[3]);
  Function_21d4d1c(v1[4]);
  Function_21d4d1c(v1[5]);
  return Function_21d4d1c(v1[9]);
}

//----- (021D820C) --------------------------------------------------------
void __fastcall Function_21d820c(uint ***a1, uint a2, int a3, int a4)
{
  int *v4;
  uint **v5;
  uint v6;
  uint *v7;
  int v8;
  ushort *v9;
  int v10;

  v10 = a4;
  v4 = (int *)a1;
  v5 = *a1;
  v6 = a2;
  v7 = *v5;
  Function_21d2724((int)v5, 0x1Bu, *v5, 7, 0, 0, 1, a2);
  v8 = Function_21d27b8(*v4, 0x25u, 1, &v9, v6);
  Function_20198c0((int)v7, 7, (int)(v9 + 6), 0, 0, (uint)*v9 << 21 >> 24, (uint)v9[1] << 21 >> 24);
  free(v8);
  Function_201c3c0((int)v7, 7);
  Function_2019184((int)v7, 7u, 0, -120);
  Function_2019184((int)v7, 7u, 3u, 0);
}

//----- (021D828C) --------------------------------------------------------
int __fastcall Function_21d828c(uint ***a1, uint a2)
{
  uint *v2;

  v2 = **a1;
  Function_2019690(7u, 64, 0, a2);
  return Function_2019ebc(v2, 7u);
}

//----- (021D82A8) --------------------------------------------------------
int __fastcall Function_21d82a8(int a1, int a2)
{
  int v2;
  uint *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int result;
  int v9;
  int v10;

  v2 = a2;
  v3 = *(uint **)(a2 + 28);
  v4 = a1;
  v5 = v3[1];
  if ( v3[3] <= 0 )
  {
    if ( *(uint *)(a1 + 16) )
    {
      if ( Function_21d8508() )
      {
        *(uint *)(*(uint *)(v2 + 28) + 12) = 640;
        Function_2005748(0x68Bu);
      }
      else
      {
        Function_21d8530(v4, v2);
      }
    }
    else
    {
      v3[2] = 0;
    }
  }
  v6 = *(uint *)(v4 + 16);
  if ( v6 >= 0 )
  {
    if ( v6 > 0 )
      *(uint *)(*(uint *)(v2 + 28) + 8) = 2;
  }
  else
  {
    *(uint *)(*(uint *)(v2 + 28) + 8) = 1;
  }
  v7 = *(uint *)(v2 + 28);
  result = *(uint *)(v7 + 8);
  if ( result )
  {
    v9 = *(uint *)(v4 + 16);
    if ( v9 < 0 )
      v9 = -v9;
    *(uint *)(v7 + 12) -= v9;
    v10 = *(uint *)(v2 + 28);
    result = *(uint *)(v10 + 12);
    if ( result < 0 )
    {
      result = 0;
      *(uint *)(v10 + 12) = 0;
    }
  }
  return result;
}

//----- (021D8324) --------------------------------------------------------
int __fastcall Function_21d8324(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = Function_201d4cc(
             *(uint *)(a1 + 20) - 248,
             *(uint *)(a1 + 24) - 104,
             (ushort)word_21BF6D8 - 248,
             (ushort)word_21BF6DA - 104);
  *(uint *)(v1 + 12) = 10 * result;
  return result;
}

//----- (021D8354) --------------------------------------------------------
int __fastcall Function_21d8354(int a1, int **a2, int a3, int a4)
{
  int v4;
  int **v5;
  uint v6;
  short v7;
  int result;

  v4 = a1;
  v5 = a2;
  *(ushort *)(v4 + 40) += (int)((ll_mul(a3 << 12, a4) + 2048) >> 12) >> 12;
  v6 = *(ushort *)(v4 + 40);
  *(ushort *)(v4 + 40) = v6;
  v7 = s32_div_f(v6, 182);
  Function_201c660(**v5, 7, 0, v7);
  Function_201c718(**v5, 7, 9, 128);
  Function_201c718(**v5, 7, 12, 104);
  result = *(ushort *)(v4 + 40);
  *(ushort *)(v4 + 42) = result;
  return result;
}

//----- (021D83C0) --------------------------------------------------------
int __fastcall Function_21d83c0(int a1, int **a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int **v6;
  uint v7;
  uint v8;
  short v9;
  int result;

  v3 = a3;
  v4 = *(uint *)(a3 + 28);
  v5 = a1;
  v6 = a2;
  v7 = s32_div_f(4551 * (640 - *(uint *)(v4 + 12)), 640);
  if ( *(uint *)(v4 + 8) == 1 )
    v7 = -v7;
  *(ushort *)(v5 + 40) = *(ushort *)(v5 + 42) + v7;
  v8 = *(ushort *)(v5 + 40);
  *(ushort *)(v5 + 40) = v8;
  v9 = s32_div_f(v8, 182);
  Function_201c660(**v6, 7, 0, v9);
  Function_201c718(**v6, 7, 9, 128);
  Function_201c718(**v6, 7, 12, 104);
  result = *(uint *)(*(uint *)(v3 + 28) + 12);
  if ( !result )
  {
    result = *(ushort *)(v5 + 40);
    *(ushort *)(v5 + 42) = result;
  }
  return result;
}

//----- (021D8434) --------------------------------------------------------
uint *__fastcall Function_21d8434(uint *result, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;

  v3 = result[3];
  if ( v3 <= 0 )
  {
    if ( v3 + 2 > -4 )
      result[3] = -4;
    else
      result[3] = v3 + 2;
  }
  else
  {
    v4 = v3 - 2;
    if ( v4 < 4 )
      result[3] = 4;
    else
      result[3] = v4;
  }
  result[4] = result[3];
  v5 = result[3];
  if ( v5 <= 33 && v5 >= -33 )
  {
    if ( a2 )
    {
      if ( a3 == 1 )
      {
        result[4] = -33;
        result[3] = -33;
      }
      else
      {
        result[4] = 33;
        result[3] = 33;
      }
    }
    else
    {
      result[4] = 0;
      v6 = result[3];
      if ( v6 <= 4 && v6 >= -4 )
      {
        result[3] = 0;
        result[7] = 1229;
      }
    }
  }
  return result;
}

//----- (021D84A8) --------------------------------------------------------
int __fastcall Function_21d84a8(int a1, int *a2, int a3, int a4, char a5)
{
  return Function_21d1524(a1, a2, a3, a4, a5);
}

//----- (021D84B8) --------------------------------------------------------
uint *__fastcall Function_21d84b8(uint *result)
{
  uint *v1;

  v1 = (uint *)result[7];
  if ( v1[11] )
  {
    result[2] = 2;
  }
  else if ( v1[13] )
  {
    *result = 2;
  }
  else if ( v1[12] )
  {
    result[1] = 2;
  }
  return result;
}

//----- (021D84E0) --------------------------------------------------------
BOOL __fastcall Function_21d84e0(int a1, int a2)
{
  int v2;
  int v3;
  BOOL result;

  v2 = *(uint *)(a1 + 12);
  result = 1;
  if ( v2 )
  {
    v3 = v2 < 0 ? 1 : -1;
    if ( !Function_21d387c(a2, v3) )
      result = 0;
  }
  return result;
}

//----- (021D8508) --------------------------------------------------------
BOOL __fastcall Function_21d8508(int a1, int a2)
{
  int v2;
  int v3;
  BOOL result;

  v2 = *(uint *)(a1 + 16);
  result = 1;
  if ( v2 )
  {
    v3 = v2 < 0 ? 1 : -1;
    if ( !Function_21d3844(a2, v3) )
      result = 0;
  }
  return result;
}

//----- (021D8530) --------------------------------------------------------
int __fastcall Function_21d8530(int a1, int a2)
{
  int result;

  *(uint *)(a1 + 16) = 0;
  *(uint *)(a1 + 12) = 0;
  result = *(uint *)(a2 + 28);
  *(uint *)(result + 8) = 0;
  return result;
}

//----- (021D853C) --------------------------------------------------------
BOOL __fastcall Function_21d853c(int a1, int a2)
{
  int v2;
  int v3;
  BOOL result;

  v2 = a1;
  v3 = a2;
  result = Function_21d5b68(*(uint **)(a1 + 28));
  if ( result )
  {
    Function_21d36fc(*(uint *)(*(uint *)(v2 + 28) + 4), v3);
    **(uint **)(v2 + 32) |= 1u;
    result = 0;
    *(uint *)(*(uint *)(v2 + 28) + 12) = 0;
    *(uint *)(*(uint *)(v2 + 28) + 32) = 2;
    *(uint *)(*(uint *)(v2 + 28) + 16) = 1;
    *(uint *)(*(uint *)(v2 + 28) + 20) = 0;
    *(uint *)(*(uint *)(v2 + 28) + 8) = 0;
    *(uint *)(*(uint *)(v2 + 28) + 28) = 0;
  }
  return result;
}

//----- (021D8580) --------------------------------------------------------
int __fastcall Function_21d8580(int result, int a2)
{
  if ( a2 < 0 )
    a2 = -a2;
  if ( a2 >= 64 )
  {
    if ( result + 819 <= 4096 )
      result += 819;
  }
  else if ( result - 41 >= 1229 )
  {
    result -= 41;
  }
  return result;
}

//----- (021D85B0) --------------------------------------------------------
int (*__fastcall Function_21d85b0(int *a1, int a2, int a3))()
{
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int (*result)();

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Function_21d86e8(a3);
  v7 = Function_21d8724(v4, v5);
  v8 = Function_21d874c(v4, v5);
  *v3 = v6;
  v3[1] = v7;
  v3[8] = v8;
  v3[9] = Function_21d87c8();
  v3[2] = (int)Function_21d87cc;
  v3[3] = (int)Function_21d8804;
  v3[4] = (int)Function_21d8928;
  v3[5] = (int)Function_21d893c;
  v3[6] = (int)Function_21d89b8;
  result = Function_21d89f4;
  v3[7] = (int)Function_21d89f4;
  return result;
}

//----- (021D8610) --------------------------------------------------------
int __fastcall Function_21d8610(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_21d8788(*a1);
  Function_21d879c(v1[1]);
  return Function_21d87b0(v1[8]);
}

//----- (021D8628) --------------------------------------------------------
int *__fastcall Function_21d8628(int *result, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = *result;
  if ( a2 >= 4 )
    result = (int *)ErrorHandler();
  *(uint *)(v3 + 12) = v2;
  return result;
}

//----- (021D863C) --------------------------------------------------------
int __fastcall Function_21d863c(int a1)
{
  return *(uint *)(*(uint *)a1 + 12);
}

//----- (021D8644) --------------------------------------------------------
int *__fastcall Function_21d8644(int *result, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = *result;
  if ( a2 >= 6 )
    result = (int *)ErrorHandler();
  *(uint *)(v3 + 16) = v2;
  return result;
}

//----- (021D8658) --------------------------------------------------------
int __fastcall Function_21d8658(int a1)
{
  return *(uint *)(*(uint *)a1 + 16);
}

//----- (021D8660) --------------------------------------------------------
int *__fastcall Function_21d8660(int *result, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = *result;
  if ( a2 >= 10 )
    result = (int *)ErrorHandler();
  *(uint *)(v3 + 20) = v2;
  return result;
}

//----- (021D8674) --------------------------------------------------------
int __fastcall Function_21d8674(int a1)
{
  return *(uint *)(*(uint *)a1 + 20);
}

//----- (021D867C) --------------------------------------------------------
int *__fastcall Function_21d867c(int *result, int a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a2;
  v4 = a3;
  v5 = *result;
  if ( a2 >= 18 )
    result = (int *)ErrorHandler();
  if ( v4 )
    *(uint *)(v5 + 28) = v3;
  else
    *(uint *)(v5 + 24) = v3;
  return result;
}

//----- (021D8698) --------------------------------------------------------
int __fastcall Function_21d8698(int *a1, int a2)
{
  int v2;
  int result;

  v2 = *a1;
  if ( a2 )
    result = *(uint *)(v2 + 28);
  else
    result = *(uint *)(v2 + 24);
  return result;
}

//----- (021D86A8) --------------------------------------------------------
int *__fastcall Function_21d86a8(int *result, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = *result;
  if ( a2 >= 15 )
    result = (int *)ErrorHandler();
  *(uint *)(v3 + 32) = v2;
  return result;
}

//----- (021D86BC) --------------------------------------------------------
int __fastcall Function_21d86bc(int a1)
{
  return *(uint *)(*(uint *)a1 + 32);
}

//----- (021D86C4) --------------------------------------------------------
int __fastcall Function_21d86c4(int *a1, int a2)
{
  int v2;
  int result;

  v2 = *a1;
  result = 1;
  *(uint *)(v2 + 36) = 1;
  *(uint *)(v2 + 40) = a2;
  return result;
}

//----- (021D86D0) --------------------------------------------------------
int __fastcall Function_21d86d0(int a1)
{
  return *(uint *)(*(uint *)a1 + 40);
}

//----- (021D86D8) --------------------------------------------------------
int __fastcall Function_21d86d8(int a1)
{
  return *(uint *)(*(uint *)a1 + 48);
}

//----- (021D86E0) --------------------------------------------------------
int __fastcall Function_21d86e0(int a1)
{
  return *(uint *)(*(uint *)a1 + 52);
}

//----- (021D86E8) --------------------------------------------------------
int *__fastcall Function_21d86e8(uint a1, int a2)
{
  int v2;
  int *v3;

  v2 = a2;
  v3 = (int *)malloc(a1, 56);
  if ( !v3 )
    ErrorHandler();
  Call_FillMemWithValue(v3, 0, 0x38u);
  *v3 = Function_21d138c(v2);
  v3[1] = Function_21d13ec(v2);
  v3[2] = *(uint *)Function_21d1410(v2, 0);
  return v3;
}

//----- (021D8724) --------------------------------------------------------
uchar *__fastcall Function_21d8724(uint a1, int a2)
{
  int v2;
  uchar *v3;

  v2 = a2;
  v3 = (uchar *)malloc(a1, 4);
  if ( !v3 )
    ErrorHandler();
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  *(uint *)v3 = Function_21d13fc(v2);
  return v3;
}

//----- (021D874C) --------------------------------------------------------
int *__fastcall Function_21d874c(uint a1, int a2)
{
  uint v2;
  int v3;
  int v4;
  int *v5;

  v2 = a1;
  v3 = a2;
  v4 = 20 * Function_21d87c8();
  v5 = (int *)malloc(v2, v4);
  if ( !v5 )
    ErrorHandler();
  Call_FillMemWithValue(v5, 0, v4);
  Function_21d47f0(v2, v5, v3, 2);
  return v5;
}

//----- (021D8788) --------------------------------------------------------
uint __fastcall Function_21d8788(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return free(v1);
}

//----- (021D879C) --------------------------------------------------------
uint __fastcall Function_21d879c(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return free(v1);
}

//----- (021D87B0) --------------------------------------------------------
uint __fastcall Function_21d87b0(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  Function_21d4660(v1);
  return free(v1);
}

//----- (021D87C8) --------------------------------------------------------
int Function_21d87c8()
{
  return 1;
}

//----- (021D87CC) --------------------------------------------------------
int __fastcall Function_21d87cc(int a1, uint *a2)
{
  int v2;
  uint *v3;
  uchar *v4;

  v2 = a1;
  v3 = a2;
  v4 = (uchar *)malloc(*(uint *)(a1 + 4), 4);
  if ( !v4 )
    ErrorHandler();
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  *(uint *)(v2 + 8) = v4;
  v3[3] = 0;
  v3[4] = 0;
  v3[5] = 0;
  v3[6] = 0;
  v3[7] = 0;
  v3[8] = 0;
  v3[9] = 0;
  v3[10] = 0;
  v3[12] = 0;
  return 1;
}

//----- (021D8804) --------------------------------------------------------
int __fastcall Function_21d8804(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v5;
  int v6;
  int v7;
  int v8;

  v2 = a1;
  v3 = a2;
  if ( a1[3] == 1 )
    return 1;
  if ( a1[4] == 1 )
    return 0;
  switch ( (uchar)*a1 )
  {
    case 0u:
      if ( *(uint *)(a2 + 44) )
        *(uint *)(a2 + 44) = 0;
      if ( *(uint *)(a2 + 36) == 1 )
      {
        if ( *(uint *)(a2 + 40) )
        {
          *(uint *)(a2 + 48) = 1;
          *(uint *)(a2 + 52) = 4;
          ++*a1;
        }
        else
        {
          **(uint **)a2 |= 2u;
          *(uint *)(a2 + 48) = 4;
        }
      }
      break;
    case 1u:
      v5 = *(uint *)(a2 + 52) - 1;
      *(uint *)(a2 + 52) = v5;
      if ( v5 < 0 )
      {
        ++*v2;
        *(uint *)(a2 + 48) = 2;
        *(uint *)(a2 + 52) = 32;
        Function_2005748(0x5FFu);
      }
      break;
    case 2u:
      v6 = *(uint *)(a2 + 52) - 1;
      *(uint *)(a2 + 52) = v6;
      if ( v6 < 0 )
        ++*v2;
      break;
    case 3u:
      v7 = Function_21d36d8(*(uint *)(a2 + 4));
      if ( Function_21d3464(
             *(uint **)(v3 + 4),
             *(uint *)(v3 + 16),
             *(uint *)(v3 + 20),
             *(uint *)(v3 + 24),
             *(uint *)(v3 + 28),
             *(uint *)(v3 + 32),
             v7,
             v2[1],
             1) == 1 )
      {
        **(uint **)v3 |= 2u;
        Function_21d3810(*(uint *)(v3 + 4), 0);
        *(uint *)(*(uint *)(v3 + 4) + 5952) = 1;
        *(uint *)(*(uint *)(v3 + 8) + 24) = 1;
      }
      else
      {
        *(uint *)(v3 + 40) = 0;
        *(uint *)(v3 + 36) = 0;
        *(uint *)(v3 + 44) = 1;
        *(uint *)(v3 + 48) = 3;
        *(uint *)(v3 + 52) = 4;
        ++*v2;
      }
      break;
    case 4u:
      v8 = *(uint *)(a2 + 52) - 1;
      *(uint *)(a2 + 52) = v8;
      if ( v8 < 0 )
      {
        *(uint *)(a2 + 48) = 0;
        *(uint *)(a2 + 52) = 0;
        *v2 = 0;
      }
      break;
    default:
      ErrorHandler();
      break;
  }
  return 0;
}

//----- (021D8928) --------------------------------------------------------
int __fastcall Function_21d8928(int a1)
{
  int v1;

  v1 = a1;
  free(*(uint *)(a1 + 8));
  *(uint *)(v1 + 8) = 0;
  return 1;
}

//----- (021D893C) --------------------------------------------------------
int __fastcall Function_21d893c(int a1, uint *a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int *v6;
  int result;

  v4 = a2;
  v5 = *(uint *)(a4 + 8);
  switch ( (uchar)*a2 )
  {
    case 0u:
      v6 = (int *)malloc(a2[1], 100);
      v4[2] = v6;
      Call_FillMemWithValue(v6, 0, 0x64u);
      ++*v4;
      goto LABEL_7;
    case 1u:
      Function_21d8a7c(a2[2], a1, a3, v5, a2[1]);
      Function_200aae0(1, 0, -16, 63, 1);
      ++*v4;
      goto LABEL_7;
    case 2u:
      if ( Function_200ac1c(1) )
        ++*v4;
      goto LABEL_7;
    case 3u:
      result = 1;
      break;
    default:
LABEL_7:
      result = 0;
      break;
  }
  return result;
}

//----- (021D89B8) --------------------------------------------------------
int __fastcall Function_21d89b8(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v3 = a2;
  v4 = *(uint *)(a3 + 48);
  v5 = a1;
  v6 = *(uint *)(v3 + 8);
  if ( v4 )
  {
    if ( v4 != 1 && v4 != 3 )
    {
      if ( v4 != 4 )
      {
        v9 = *(uint *)(v3 + 4);
        Function_21d9390(v6, v5);
      }
    }
    else
    {
      v8 = *(uint *)(v3 + 4);
      Function_21d9320(v6, v5);
    }
  }
  else
  {
    v7 = *(uint *)(v3 + 4);
    Function_21d8ed4(v6, v5);
  }
  return 0;
}

//----- (021D89F4) --------------------------------------------------------
int __fastcall Function_21d89f4(int a1, uint *a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a2[2];
  switch ( (uchar)*a2 )
  {
    case 0u:
      if ( *(uint *)(a3 + 40) )
      {
        *a2 = 2;
      }
      else
      {
        Function_200aae0(6, -16, 0, 63, 1);
        ++*v3;
      }
      goto LABEL_10;
    case 1u:
      if ( Function_200ac1c(1) )
        ++*v3;
      goto LABEL_10;
    case 2u:
      Function_21d8b40(v5, v4);
      ++*v3;
      goto LABEL_10;
    case 3u:
      free(v5);
      v3[2] = 0;
      ++*v3;
      goto LABEL_10;
    case 4u:
      result = 1;
      break;
    default:
LABEL_10:
      result = 0;
      break;
  }
  return result;
}

//----- (021D8A7C) --------------------------------------------------------
uint __fastcall Function_21d8a7c(int a1, uint ***a2, int *a3, int a4, int a5)
{
  uint ***v5;
  int v6;
  int *v7;

  v5 = a2;
  v6 = a1;
  v7 = a3;
  Function_2019ebc(**a2, 2u);
  Function_2019ebc(**v5, 1u);
  Function_201ada4_ClearTextBox((int)(*v5 + 1), 0);
  Function_201c2b4((int)(*v5 + 1), 7);
  Function_21d8c00(v5);
  Function_21d8b8c(v5, v7, a5);
  Function_21d36d8(v7[1]);
  Function_21d8bc4(v6, v5, v7, a5);
  Function_21d8c1c(v6, v5, a5);
  Function_21d8d0c(v6, v5, v7, a5);
  Function_21d8dd4(v5, v7[3], a5);
  Function_21d8f98(v5, v7[3], a5);
  Function_21d9054(v5, v7[4], a5);
  Function_21d90b4(v5, v7[5], a5);
  Function_21d9234(v5, v7[6], a5);
  Function_21d9240(v5, v7[7], a5);
  Function_21d924c(v6, v7[8]);
  Function_2019060(1u, 1);
  return Function_2019060(2u, 0);
}

//----- (021D8B40) --------------------------------------------------------
uint __fastcall Function_21d8b40(int a1, uint ***a2)
{
  int v2;
  uint ***v3;

  v2 = a1;
  v3 = a2;
  Function_21d8dc0();
  Function_21d8cc8(v2, v3);
  Function_21d8bec(v2, v3);
  Function_2019ebc(**v3, 1u);
  Function_201ada4_ClearTextBox((int)(*v3 + 1), 0);
  Function_201c2b4((int)(*v3 + 1), 0);
  Function_2019060(1u, 0);
  return Function_2019060(2u, 1);
}

//----- (021D8B8C) --------------------------------------------------------
uint *__fastcall Function_21d8b8c(int *a1, int a2, uint a3)
{
  int *v3;
  uint v4;

  v3 = a1;
  v4 = a3;
  Function_21d2724(*a1, 0x1Cu, *(uint **)*a1, 3, 0, 0, 1, a3);
  return Function_21d276c(*v3, 5u, 0, 0, 32, v4);
}

//----- (021D8BC4) --------------------------------------------------------
int __fastcall Function_21d8bc4(int a1, int *a2, int a3, uint a4, int a5)
{
  int v5;
  uint v6;
  int result;

  v5 = a1;
  if ( a5 == 1 )
    v6 = 42;
  else
    v6 = 40;
  result = Function_21d27b8(*a2, v6, 1, (uint *)(a1 + 96), a4);
  *(uint *)(v5 + 92) = result;
  return result;
}

//----- (021D8BEC) --------------------------------------------------------
int __fastcall Function_21d8bec(int a1)
{
  int v1;
  int result;

  v1 = a1;
  free(*(uint *)(a1 + 92));
  result = 0;
  *(uint *)(v1 + 92) = 0;
  *(uint *)(v1 + 96) = 0;
  return result;
}

//----- (021D8C00) --------------------------------------------------------
int __fastcall Function_21d8c00(int *a1)
{
  int v1;

  v1 = Function_21d2170(*a1);
  Function_2007dec(v1, 6u, 1);
  return Function_2008780(v1);
}

//----- (021D8C1C) --------------------------------------------------------
int *__fastcall Function_21d8c1c(int a1, int *a2, uint a3)
{
  int *v3;
  int v4;
  uint v5;
  int v6;
  int v7;
  int *v8;
  int *v9;
  int *result;

  v3 = (int *)*a2;
  v4 = a1;
  v5 = a3;
  v6 = Function_21d26e0(*a2);
  v7 = v6;
  v8 = Function_2009a4c(v3[80], v6, 0x51u, 1, 15081, 1, v5);
  *(uint *)(v4 + 36) = v8;
  Function_200a3dc(v8);
  Function_2009d4c(*(int **)(v4 + 36));
  v9 = Function_2009b04(v3[81], v7, 3u, 0, 15003, 1, 12, v5);
  *(uint *)(v4 + 40) = v9;
  Function_200a640(v9);
  Function_2009d4c(*(int **)(v4 + 40));
  *(uint *)(v4 + 44) = Function_2009bc4(v3[82], v7, 0x4Fu, 1, 15079, 2u, v5);
  result = Function_2009bc4(v3[83], v7, 0x50u, 1, 15080, 3u, v5);
  *(uint *)(v4 + 48) = result;
  return result;
}

//----- (021D8CC8) --------------------------------------------------------
int __fastcall Function_21d8cc8(int a1, int ***a2)
{
  int v2;
  int **v3;

  v2 = a1;
  v3 = *a2;
  Function_200a4e4(*(int **)(a1 + 36));
  Function_200a6dc(*(int **)(v2 + 40));
  Function_2009d68(v3[80], *(uint ***)(v2 + 36));
  Function_2009d68(v3[81], *(uint ***)(v2 + 40));
  Function_2009d68(v3[82], *(uint ***)(v2 + 44));
  return Function_2009d68(v3[83], *(uint ***)(v2 + 48));
}

//----- (021D8D0C) --------------------------------------------------------
char *__fastcall Function_21d8d0c(int a1, int *a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v10;
  char *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  char v17;

  v4 = a4;
  v5 = *a2;
  v6 = a1;
  Function_20093b4(
    (int)&v17,
    15081,
    15003,
    15079,
    15080,
    -1,
    -1,
    0,
    2,
    *(uint *)(*a2 + 320),
    *(uint *)(*a2 + 324),
    *(uint *)(*a2 + 328),
    *(uint *)(*a2 + 332),
    0,
    0);
  v10 = *(uint *)(v5 + 316);
  v11 = &v17;
  v14 = 31;
  v15 = 1;
  v12 = 0x80000;
  v13 = 671744;
  v16 = v4;
  v7 = Function_2021b90(&v10);
  *(uint *)(v6 + 32) = v7;
  Function_2021d6c(v7, 3u);
  v12 = 0x80000;
  v13 = 393216;
  v8 = Function_2021b90(&v10);
  *(uint *)(v6 + 88) = v8;
  Function_2021d6c(v8, 0x11u);
  Function_2021cac(*(uint *)(v6 + 88), 0);
  Function_2021cf8(*(uint *)(v6 + 88), 1);
  return Function_2021e80(*(uint *)(v6 + 88), 0);
}

//----- (021D8DC0) --------------------------------------------------------
int __fastcall Function_21d8dc0(int a1)
{
  int v1;

  v1 = a1;
  Function_2021bd4(*(uint *)(a1 + 32));
  return Function_2021bd4(*(uint *)(v1 + 88));
}

//----- (021D8DD4) --------------------------------------------------------
uint __fastcall Function_21d8dd4(int *a1, int a2, uint a3)
{
  uint v3;
  int v4;
  uint v5;
  ushort *v6;
  uint v7;
  int v8;

  v4 = *a1;
  v5 = a3;
  switch ( (uchar)Function_201ae78(*a1 + 4, 0, 24, 8, 0xD0u, 0x20u) )
  {
    case 0u:
      v3 = 90;
      break;
    case 1u:
      v3 = 87;
      break;
    case 2u:
      v3 = 88;
      break;
    case 3u:
      v3 = 89;
      break;
    default:
      break;
  }
  v6 = Function_21d1ce0(v3, v5);
  Function_2002eb4(0, (int)v6, 0);
  v7 = ((uint)(32 - 16 * Function_2023c5c((int)v6)) >> 1) + 8;
  Function_201d78c(v4 + 4, 0);
  return Function_20237bc_FreeMsg((int)v6, v8);
}

//----- (021D8E68) --------------------------------------------------------
uint __fastcall Function_21d8e68(int *a1, uint a2)
{
  int v2;
  uint v3;
  ushort *v4;
  uint v5;
  int v6;

  v2 = *a1;
  v3 = a2;
  Function_201ae78(*a1 + 4, 0, 24, 8, 0xD0u, 0x20u);
  v4 = Function_21d1ce0(0x5Du, v3);
  Function_2002eb4(0, (int)v4, 0);
  v5 = ((uint)(32 - 16 * Function_2023c5c((int)v4)) >> 1) + 8;
  Function_201d78c(v2 + 4, 0);
  return Function_20237bc_FreeMsg((int)v4, v6);
}

//----- (021D8ED4) --------------------------------------------------------
int __fastcall Function_21d8ed4(uint *a1, int *a2, int *a3, uint a4)
{
  uint *v4;
  int *v5;
  int *v6;
  int v7;
  uint v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int result;

  v4 = a1;
  v5 = a3;
  v6 = a2;
  v7 = a3[11];
  v8 = a4;
  if ( v7 != a1[6] )
  {
    a1[6] = v7;
    if ( v7 == 1 )
    {
      a1[7] = 64;
      Function_21d8e68(v6, a4);
    }
  }
  v9 = v4[7];
  if ( v9 <= 0 )
  {
    if ( !v9 )
    {
      Function_21d8dd4(v6, v5[3], v8);
      --v4[7];
    }
  }
  else
  {
    v4[7] = v9 - 1;
  }
  v10 = v5[3];
  if ( *v4 != v10 )
  {
    Function_21d8f98(v6, v10, v8);
    Function_21d8dd4(v6, v5[3], v8);
    *v4 = v5[3];
  }
  v11 = v5[4];
  if ( v4[1] != v11 )
  {
    Function_21d9054(v6, v11, v8);
    v4[1] = v5[4];
  }
  v12 = v5[5];
  if ( v4[2] != v12 )
  {
    Function_21d90b4(v6, v12, v8);
    v4[2] = v5[5];
  }
  v13 = v5[6];
  if ( v4[3] != v13 )
  {
    Function_21d9234(v6, v13, v8);
    v4[3] = v5[6];
  }
  v14 = v5[7];
  if ( v4[4] != v14 )
  {
    Function_21d9240(v6, v14, v8);
    v4[4] = v5[7];
  }
  v15 = v5[8];
  result = v4[5];
  if ( result != v15 )
  {
    Function_21d924c(v4, v15);
    result = v5[8];
    v4[5] = result;
  }
  return result;
}

//----- (021D8F98) --------------------------------------------------------
int __fastcall Function_21d8f98(int *a1, int a2, uint a3, int a4)
{
  uchar v4;
  uint v5;
  int **v6;
  int v7;
  int v8;
  uint v10;
  ushort *v11;
  int v12;

  v12 = a4;
  v6 = (int **)a1;
  v10 = a3;
  v7 = Function_21d27b8(*a1, 0x2Bu, 1, &v11, a3);
  Function_20198c0(**v6, 3, (int)(v11 + 6), 0, 0, (uint)*v11 << 21 >> 24, (uint)v11[1] << 21 >> 24);
  switch ( (uchar)free(v7) )
  {
    case 0u:
      v4 = 6;
      v5 = 44;
      break;
    case 1u:
      v4 = 9;
      v5 = 45;
      break;
    case 2u:
      v4 = 12;
      v5 = 46;
      break;
    case 3u:
      v4 = 17;
      v5 = 47;
      break;
    default:
      break;
  }
  v8 = Function_21d27b8((int)*v6, v5, 1, &v11, v10);
  Function_20198c0(**v6, 3, (int)(v11 + 6), 6, v4, (uint)*v11 << 21 >> 24, (uint)v11[1] << 21 >> 24);
  free(v8);
  return Function_201c3c0(**v6, 3);
}

//----- (021D9054) --------------------------------------------------------
uint __fastcall Function_21d9054(int *a1, int a2, uint a3)
{
  int v3;
  int v4;
  uint v5;
  ushort *v6;
  int v7;

  v3 = *a1;
  v4 = a2;
  v5 = a3;
  Function_201ae78(*a1 + 4, 0, 88, 52, 0x50u, 0x10u);
  v6 = Function_21d1ce0(v4 + 81, v5);
  Function_2002eec(0, (int)v6, 0, 0x50u);
  Function_201d78c(v3 + 4, 0);
  return Function_20237bc_FreeMsg((int)v6, v7);
}

//----- (021D90B4) --------------------------------------------------------
uint __fastcall Function_21d90b4(int *a1, int a2, uint a3)
{
  uint v3;
  int v4;
  uint v5;
  ushort *v6;
  int v7;

  v4 = *a1;
  v5 = a3;
  switch ( (uchar)Function_201ae78(*a1 + 4, 0, 88, 77, 0x50u, 0x10u) )
  {
    case 0u:
      v3 = 126;
      break;
    case 1u:
      v3 = 54;
      break;
    case 2u:
      v3 = 55;
      break;
    case 3u:
      v3 = 56;
      break;
    case 4u:
      v3 = 57;
      break;
    case 5u:
      v3 = 58;
      break;
    case 6u:
      v3 = 59;
      break;
    case 7u:
      v3 = 60;
      break;
    case 8u:
      v3 = 61;
      break;
    case 9u:
      v3 = 62;
      break;
    default:
      break;
  }
  v6 = Function_21d1ce0(v3, v5);
  Function_2002eec(0, (int)v6, 0, 0x50u);
  Function_201d78c(v4 + 4, 0);
  return Function_20237bc_FreeMsg((int)v6, v7);
}

//----- (021D915C) --------------------------------------------------------
uint __fastcall Function_21d915c(int *a1, int a2, uint a3, ushort a4)
{
  uint v4;
  int v5;
  ushort *v6;
  int v7;
  uint v9;

  v5 = *a1;
  v9 = a3;
  switch ( (uchar)Function_201ae78(*a1 + 4, 0, 88, a4, 0x50u, 0x10u) )
  {
    case 0u:
      v4 = 53;
      break;
    case 1u:
      v4 = 64;
      break;
    case 2u:
      v4 = 70;
      break;
    case 3u:
      v4 = 73;
      break;
    case 4u:
      v4 = 71;
      break;
    case 5u:
      v4 = 72;
      break;
    case 6u:
      v4 = 76;
      break;
    case 7u:
      v4 = 75;
      break;
    case 8u:
      v4 = 77;
      break;
    case 9u:
      v4 = 80;
      break;
    case 0xAu:
      v4 = 65;
      break;
    case 0xBu:
      v4 = 66;
      break;
    case 0xCu:
      v4 = 68;
      break;
    case 0xDu:
      v4 = 67;
      break;
    case 0xEu:
      v4 = 74;
      break;
    case 0xFu:
      v4 = 69;
      break;
    case 0x10u:
      v4 = 78;
      break;
    case 0x11u:
      v4 = 79;
      break;
    default:
      break;
  }
  v6 = Function_21d1ce0(v4, v9);
  Function_2002eec(0, (int)v6, 0, 0x50u);
  Function_201d78c(v5 + 4, 0);
  return Function_20237bc_FreeMsg((int)v6, v7);
}

//----- (021D9234) --------------------------------------------------------
uint __fastcall Function_21d9234(int *a1, int a2, uint a3)
{
  return Function_21d915c(a1, a2, a3, 0x66u);
}

//----- (021D9240) --------------------------------------------------------
uint __fastcall Function_21d9240(int *a1, int a2, uint a3)
{
  return Function_21d915c(a1, a2, a3, 0x78u);
}

//----- (021D924C) --------------------------------------------------------
uint __fastcall Function_21d924c(int a1, int a2)
{
  int v2;
  uint v3;
  uint result;

  v2 = a1;
  v3 = *(uint *)(a1 + 32);
  if ( !a2 )
    return Function_2021cac(v3, 0);
  result = Function_2021cac(v3, 1);
  switch ( (uchar)result )
  {
    case 1:
      result = Function_2021d6c(*(uint *)(v2 + 32), 3u);
      break;
    case 2:
      result = Function_2021d6c(*(uint *)(v2 + 32), 4u);
      break;
    case 3:
      result = Function_2021d6c(*(uint *)(v2 + 32), 5u);
      break;
    case 4:
      result = Function_2021d6c(*(uint *)(v2 + 32), 6u);
      break;
    case 5:
      result = Function_2021d6c(*(uint *)(v2 + 32), 7u);
      break;
    case 6:
      result = Function_2021d6c(*(uint *)(v2 + 32), 8u);
      break;
    case 7:
      result = Function_2021d6c(*(uint *)(v2 + 32), 9u);
      break;
    case 8:
      result = Function_2021d6c(*(uint *)(v2 + 32), 0xAu);
      break;
    case 9:
      result = Function_2021d6c(*(uint *)(v2 + 32), 0xBu);
      break;
    case 0xA:
      result = Function_2021d6c(*(uint *)(v2 + 32), 0xCu);
      break;
    case 0xB:
      result = Function_2021d6c(*(uint *)(v2 + 32), 0xDu);
      break;
    case 0xC:
      result = Function_2021d6c(*(uint *)(v2 + 32), 0xEu);
      break;
    case 0xD:
      result = Function_2021d6c(*(uint *)(v2 + 32), 0xFu);
      break;
    case 0xE:
      result = Function_2021d6c(*(uint *)(v2 + 32), 0x10u);
      break;
    default:
      return result;
  }
  return result;
}

//----- (021D9320) --------------------------------------------------------
int __fastcall Function_21d9320(int a1, int **a2, int a3, int a4)
{
  int v4;
  int **v5;

  v4 = a1;
  v5 = a2;
  if ( *(uint *)(a3 + 52) == 4 )
  {
    if ( *(uint *)(a3 + 48) == 1 )
    {
      Function_21d1558((uint *)(a1 + 52), **a2, 2, *(uint *)(a1 + 96), 0, 12, 0, 20, 4);
    }
    else
    {
      Function_21d9454(a2, a1, a4);
      Function_21d1558((uint *)(v4 + 52), **v5, 2, *(uint *)(v4 + 96), 12, 0, 20, 0, 4);
    }
  }
  return Function_21d157c((int *)(v4 + 52));
}

//----- (021D9390) --------------------------------------------------------
int __fastcall Function_21d9390(int a1, uint *a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint *v7;
  int v8;

  v4 = a3;
  v5 = a1;
  v6 = *(uint *)(a3 + 52);
  v7 = a2;
  v8 = a4;
  if ( v6 == 32 )
  {
    Function_2021cac(*(uint *)(v5 + 88), 1);
    Function_21d93f4(v7, v8);
  }
  else if ( !v6 )
  {
    Function_2021cac(*(uint *)(v5 + 88), 0);
    Function_201ada4_ClearTextBox(*v7 + 4, 0);
    Function_201a9a4(*v7 + 4);
  }
  return Function_2021c94(
           *(uint *)(v5 + 88),
           (0x7FFF * (4 - *(uint *)(v4 + 52)) + ((uint)(0x7FFF * (4 - *(uint *)(v4 + 52)) >> 1) >> 30)) >> 2);
}

//----- (021D93F4) --------------------------------------------------------
uint __fastcall Function_21d93f4(int *a1, uint a2)
{
  int v2;
  uint v3;
  ushort *v4;
  int v5;

  v2 = *a1;
  v3 = a2;
  Function_201ada4_ClearTextBox(*a1 + 4, 0);
  v4 = Function_21d1ce0(0x5Eu, v3);
  Function_2002eb4(0, (int)v4, 0);
  Function_201d78c(v2 + 4, 0);
  Function_20237bc_FreeMsg((int)v4, v5);
  Function_2019060(1u, 0);
  return Function_2019060(2u, 1);
}

//----- (021D9454) --------------------------------------------------------
uint __fastcall Function_21d9454(int *a1, int *a2, uint a3)
{
  int *v3;
  int *v4;
  uint v5;
  int v6;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_2019060(1u, 1);
  Function_2019060(2u, 0);
  Function_201ada4_ClearTextBox(*v3 + 4, 0);
  Function_21d8f98(v3, *v4, v5, v6);
  Function_21d8dd4(v3, *v4, v5);
  Function_21d9054(v3, v4[1], v5);
  Function_21d90b4(v3, v4[2], v5);
  Function_21d9234(v3, v4[3], v5);
  Function_21d9240(v3, v4[4], v5);
  return Function_21d924c((int)v4, v4[5]);
}

//----- (021D94BC) --------------------------------------------------------
int (*__fastcall Function_21d94bc(int *a1, int a2, int a3))()
{
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int (*result)();

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Function_21d9534(a3);
  v7 = Function_21d957c(v4, v5);
  v8 = Function_21d95b4(v4, v5);
  *v3 = v6;
  v3[1] = v7;
  v3[8] = v8;
  v3[9] = Function_21d95e4();
  v3[2] = (int)Function_21d95e8;
  v3[3] = (int)Function_21d964c;
  v3[4] = (int)Function_21d9780;
  v3[5] = (int)Function_21d97a0;
  v3[6] = (int)Function_21d9830;
  result = Function_21d9960;
  v3[7] = (int)Function_21d9960;
  return result;
}

//----- (021D951C) --------------------------------------------------------
int __fastcall Function_21d951c(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_21d95b8(*a1);
  Function_21d95cc(v1[1]);
  return Function_21d95e0(v1[8]);
}

//----- (021D9534) --------------------------------------------------------
int *__fastcall Function_21d9534(uint a1, int a2)
{
  int v2;
  int *v3;
  int *v4;
  int v5;

  v2 = a2;
  v3 = (int *)malloc(a1, 16);
  if ( !v3 )
    ErrorHandler();
  v4 = v3;
  v5 = 16;
  do
  {
    *(uchar *)v4 = 0;
    v4 = (int *)((char *)v4 + 1);
    --v5;
  }
  while ( v5 );
  *v3 = Function_21d138c(v2);
  v3[1] = Function_21d13ec(v2);
  v3[2] = Function_21d1410(v2, 1);
  v3[3] = Function_21d1430(v2, 1);
  return v3;
}

//----- (021D957C) --------------------------------------------------------
uchar *__fastcall Function_21d957c(uint a1, int a2)
{
  int v2;
  uchar *v3;

  v2 = a2;
  v3 = (uchar *)malloc(a1, 12);
  if ( !v3 )
    ErrorHandler();
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  v3[4] = 0;
  v3[5] = 0;
  v3[6] = 0;
  v3[7] = 0;
  v3[8] = 0;
  v3[9] = 0;
  v3[10] = 0;
  v3[11] = 0;
  *(uint *)v3 = Function_21d13fc(v2);
  return v3;
}

//----- (021D95B4) --------------------------------------------------------
int Function_21d95b4()
{
  return 0;
}

//----- (021D95B8) --------------------------------------------------------
uint __fastcall Function_21d95b8(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return free(v1);
}

//----- (021D95CC) --------------------------------------------------------
uint __fastcall Function_21d95cc(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return free(v1);
}

//----- (021D95E0) --------------------------------------------------------
void Function_21d95e0()
{
  ;
}

//----- (021D95E4) --------------------------------------------------------
int Function_21d95e4()
{
  return 0;
}

//----- (021D95E8) --------------------------------------------------------
int __fastcall Function_21d95e8(int a1, int a2)
{
  int v2;
  int v3;
  int *v4;
  int v5;

  v2 = a1;
  v3 = a2;
  v4 = (int *)malloc(*(uint *)(a1 + 4), 156);
  if ( !v4 )
    ErrorHandler();
  Call_FillMemWithValue(v4, 0, 0x9Cu);
  *(uint *)(v2 + 8) = v4;
  v4[32] = 0xFFFF;
  Function_21dc35c(v4, v3);
  Function_21d9adc(v4, v3, *(uint *)(v2 + 4));
  Function_21db3e0(v4, *(uint *)(v2 + 4));
  Function_21db428(v4, v3);
  v5 = 0;
  do
  {
    ++v5;
    v4[11] = 4;
    ++v4;
  }
  while ( v5 < 6 );
  return 1;
}

//----- (021D964C) --------------------------------------------------------
int __fastcall Function_21d964c(int *a1, int a2)
{
  int v2;
  int *v3;
  uint *v4;
  int v5;
  int v7;
  char v8;
  int v9;
  int v10;

  v2 = a2;
  v3 = a1;
  v4 = (uint *)a1[2];
  v5 = *(uint *)(*(uint *)(a2 + 12) + 4);
  if ( a1[3] == 1 )
    return 1;
  if ( a1[4] == 1 )
    return 0;
  if ( Function_21d86d8(*(uint *)(a2 + 8)) )
    return 0;
  v10 = Function_21d863c(*(uint *)(v2 + 8));
  v7 = *v3;
  switch ( v8 )
  {
    case 0:
      if ( v4[9] == v10 && v4[10] == v4[8] )
      {
        Function_21d9b98(v4, v2);
        if ( Function_21d3998(*(uint *)(v2 + 4)) == 2 )
          Function_21db2fc(v4, v2);
        Function_21dc368(v4, v2);
      }
      else
      {
        v4[38] = 0;
        *(uint *)(v5 + 4) = 2;
        *(uint *)(v5 + 8) = v4 + 38;
        Function_21d9ca8(v4);
        Function_21d9cb8(v4, v10);
        ++*v3;
      }
      break;
    case 1:
      if ( v4[38] )
        *v3 = v7 + 1;
      break;
    case 2:
      v9 = v4[9];
      v4[9] = v10;
      v4[10] = v4[8];
      Function_21d9b34(v4, v2, v3[1]);
      Function_21db468(v4, v3[1]);
      Function_21dc35c(v4, v2);
      if ( v9 != v4[9] )
        Function_21db428(v4, v2);
      v4[38] = 0;
      *(uint *)(v5 + 4) = 1;
      *(uint *)(v5 + 8) = v4 + 38;
      Function_21d9d68(v4);
      ++*v3;
      break;
    case 3:
      if ( v4[38] )
        *v3 = v7 + 1;
      break;
    case 4:
      *v3 = 0;
      break;
    default:
      return 0;
  }
  return 0;
}

//----- (021D9780) --------------------------------------------------------
int __fastcall Function_21d9780(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 8);
  Function_21d9b24(*(uint *)(a1 + 8));
  Function_21db3c8(v2);
  free(v2);
  *(uint *)(v1 + 8) = 0;
  return 1;
}

//----- (021D97A0) --------------------------------------------------------
int __fastcall Function_21d97a0(int a1, uint *a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  int result;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = *(uint *)(a4 + 8);
  switch ( (uchar)*a2 )
  {
    case 0u:
      v8 = (int *)malloc(a2[1], 312);
      v4[2] = v8;
      Call_FillMemWithValue(v8, 0, 0x138u);
      ++*v4;
      goto LABEL_7;
    case 1u:
      v9 = a2[1];
      Function_21d9a08(a2[2], a1);
      Function_200aae0(1, 0, -16, 63, 2);
      Function_21db480(v5, v7, v6);
      ++*v4;
      goto LABEL_7;
    case 2u:
      if ( Function_200ac1c(2) )
        ++*v4;
      goto LABEL_7;
    case 3u:
      result = 1;
      break;
    default:
LABEL_7:
      result = 0;
      break;
  }
  return result;
}

//----- (021D9830) --------------------------------------------------------
int __fastcall Function_21d9830(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint *v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  int *v11;
  int *v12;
  int v13;
  int v14;
  int v15;
  int *v16;
  int v17;
  int v19;
  uint *v20;

  v4 = a1;
  v5 = a2;
  v19 = a3;
  v6 = *(uint **)(a4 + 8);
  v7 = *(int **)(a2 + 8);
  if ( Function_21d86d8(*(uint *)(a3 + 8)) )
  {
    Function_21dc96c(v7, v4, v19);
  }
  else
  {
    Function_21dc7c0(v7, v4);
    v8 = v6[9];
    v9 = v7[65];
    if ( v9 != v8 || v7[66] != v6[10] )
    {
      v7[65] = v8;
      v7[66] = v6[10];
      if ( v9 == 3 )
      {
        Function_21db6c8(v7, v4);
        Function_21dbda0(v7);
      }
      Function_21db79c(v7, v4, *(uint *)(v5 + 4));
      Function_21dbe3c(v7, v4, *(uint *)(v5 + 4));
      if ( v7[65] == 3 )
      {
        Function_21db634(v7, v4, *(uint *)(v5 + 4));
        Function_21dbbe4(v7, v4, *(uint *)(v5 + 4));
      }
      Function_21dc8b4(v7, 1, v7[65], v7[66]);
    }
    Function_21db49c(v4, v6, v19);
  }
  v10 = 0;
  v20 = v6;
  v11 = v7;
  do
  {
    Function_21d144c(*v11, v20[11]);
    v12 = (int *)v11[6];
    if ( v12 )
    {
      if ( v10 == 5 )
        v13 = 1;
      else
        v13 = 3;
      Function_21d1524(*v11, v12, -6, v13, 5);
    }
    ++v10;
    ++v11;
    ++v20;
  }
  while ( v10 < 6 );
  v14 = 0;
  do
  {
    v15 = v7[12];
    if ( v15 )
      Function_21d144c(v15, v6[17]);
    v16 = (int *)v7[27];
    if ( v16 )
      Function_21d1524(v7[12], v16, -6, 11, 6);
    v17 = v7[42];
    if ( v17 )
      Function_21d144c(v17, v6[17]);
    ++v14;
    ++v7;
    ++v6;
  }
  while ( v14 < 15 );
  return 0;
}

//----- (021D9960) --------------------------------------------------------
int __fastcall Function_21d9960(int a1, uint *a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a2[2];
  switch ( (uchar)*a2 )
  {
    case 0u:
      if ( Function_21d86d0(*(uint *)(a3 + 8)) == 1 )
      {
        *v3 = 2;
      }
      else
      {
        Function_200aae0(6, -16, 0, 63, 2);
        ++*v3;
      }
      goto LABEL_12;
    case 1u:
      if ( Function_200ac1c(2) )
        ++*v3;
      goto LABEL_12;
    case 2u:
      Function_21d9a4c(a2[2], a1);
      if ( *(uint *)(v5 + 260) == 3 )
      {
        Function_21db6c8(v5, v4);
        Function_21dbda0(v5);
      }
      ++*v3;
      goto LABEL_12;
    case 3u:
      free(a2[2]);
      v3[2] = 0;
      ++*v3;
      goto LABEL_12;
    case 4u:
      result = 1;
      break;
    default:
LABEL_12:
      result = 0;
      break;
  }
  return result;
}

//----- (021D9A08) --------------------------------------------------------
int __fastcall Function_21d9a08(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;

  v5 = a2;
  v6 = a1;
  Function_21d9a74(a2, a3, a5);
  Function_21db50c(v6, v5, a5);
  Function_21db708(v6, v5, a5);
  Function_21dbdc8(v6, v5, a5);
  return Function_21dc8b4(v6, 1, *(uint *)(v6 + 260), *(uint *)(v6 + 264));
}

//----- (021D9A4C) --------------------------------------------------------
uint __fastcall Function_21d9a4c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_21dbe2c();
  Function_21db78c(v2);
  Function_21db5dc(v2, v3);
  return Function_21d2584((uint *)(*(uint *)v3 + 484), 0);
}

//----- (021D9A74) --------------------------------------------------------
int __fastcall Function_21d9a74(int *a1, int a2, uint a3)
{
  int *v3;
  uint v4;
  int v5;
  ushort *v7;

  v3 = a1;
  v4 = a3;
  Function_21d2724(*a1, 0x1Du, *(uint **)*a1, 6, 0, 0, 1, a3);
  v5 = Function_21d27b8(*v3, 0x4Bu, 1, &v7, v4);
  Function_20198c0(
    *(uint *)*v3,
    6,
    (int)(v7 + 6),
    0,
    0,
    (uint)*v7 << 21 >> 24,
    (uint)v7[1] << 21 >> 24);
  free(v5);
  return Function_201c3c0(*(uint *)*v3, 6);
}

//----- (021D9ADC) --------------------------------------------------------
int __fastcall Function_21d9adc(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_21d9bec();
  Function_21d9b58(v3, v4, v5, *(uint *)(v3 + 36), *(uint *)(v3 + 40));
  return Function_21d9b04(v3);
}

//----- (021D9B04) --------------------------------------------------------
int __fastcall Function_21d9b04(int result)
{
  int v1;
  int v2;
  int v3;

  v1 = 0;
  v2 = result;
  do
  {
    ++v1;
    *(uint *)(v2 + 44) = 3;
    v2 += 4;
  }
  while ( v1 < 6 );
  v3 = 0;
  do
  {
    ++v3;
    *(uint *)(result + 68) = 3;
    result += 4;
  }
  while ( v3 < 15 );
  return result;
}

//----- (021D9B24) --------------------------------------------------------
int __fastcall Function_21d9b24(int a1)
{
  int v1;

  v1 = a1;
  Function_21d9d00();
  return Function_21d9d50(v1);
}

//----- (021D9B34) --------------------------------------------------------
int __fastcall Function_21d9b34(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_21d9d50(a1);
  return Function_21d9b58(v3, v4, v5, *(uint *)(v3 + 36), *(uint *)(v3 + 40));
}

//----- (021D9B58) --------------------------------------------------------
int __fastcall Function_21d9b58(int result, int a2, int a3, char a4, int a5)
{
  switch ( a4 )
  {
    case 0:
      result = Function_21d9d78();
      break;
    case 1:
      result = Function_21d9eb4(result, a2);
      break;
    case 2:
      if ( a5 )
        result = Function_21da1c8();
      else
        result = Function_21da018();
      break;
    case 3:
      result = Function_21da38c();
      break;
    default:
      return result;
  }
  return result;
}

//----- (021D9B98) --------------------------------------------------------
int __fastcall Function_21d9b98(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_21d9c90();
  return Function_21d9bb0(v2, v3, *(uint *)(v2 + 36), *(uint *)(v2 + 40));
}

//----- (021D9BB0) --------------------------------------------------------
int __fastcall Function_21d9bb0(int result, int a2, char a3, int a4)
{
  switch ( a3 )
  {
    case 0:
      result = Function_21d9e08();
      break;
    case 1:
      result = Function_21d9f44(result, a2);
      break;
    case 2:
      if ( a4 )
        result = Function_21da280();
      else
        result = Function_21da0bc();
      break;
    case 3:
      result = Function_21da41c();
      break;
    default:
      return result;
  }
  return result;
}

//----- (021D9BEC) --------------------------------------------------------
int __fastcall Function_21d9bec(int *a1, int a2, uint a3)
{
  uint v3;
  int *v4;
  int v5;
  int result;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  a1[1] = malloc(a3, 24);
  Function_21d154c((uchar *)(v4[1] + 4), 32, 64, 192, 0);
  Function_21d154c((uchar *)v4[1], 0, 32, 188, 236);
  Function_21d154c((uchar *)(v4[1] + 8), 64, 96, 192, 0);
  Function_21d154c((uchar *)(v4[1] + 12), 96, 128, 192, 0);
  Function_21d154c((uchar *)(v4[1] + 16), 128, 160, 192, 0);
  Function_21d154c((uchar *)(v4[1] + 20), 160, 192, 172, 252);
  v4[4] = v5;
  v4[5] = (int)v4;
  result = Function_2023fcc(v4[1], 6u, (int)Function_21d9d18, (int)(v4 + 4), v3);
  *v4 = result;
  return result;
}

//----- (021D9C90) --------------------------------------------------------
int __fastcall Function_21d9c90(int a1)
{
  int v1;

  v1 = a1;
  Function_21d9ca8(a1);
  Function_202404c(*(int **)v1);
  return Function_21d9cb8(v1, *(uint *)(v1 + 36));
}

//----- (021D9CA8) --------------------------------------------------------
int __fastcall Function_21d9ca8(int result)
{
  int v1;

  v1 = 0;
  do
  {
    ++v1;
    *(uint *)(result + 44) = 3;
    result += 4;
  }
  while ( v1 < 6 );
  return result;
}

//----- (021D9CB8) --------------------------------------------------------
uint *__fastcall Function_21d9cb8(uint *result, char a2)
{
  switch ( a2 )
  {
    case 0:
      if ( result[12] != 2 )
        result[12] = 1;
      break;
    case 1:
      if ( result[13] != 2 )
        result[13] = 1;
      break;
    case 2:
      if ( result[14] != 2 )
        result[14] = 1;
      break;
    case 3:
      if ( result[15] != 2 )
        result[15] = 1;
      break;
    default:
      return result;
  }
  return result;
}

//----- (021D9D00) --------------------------------------------------------
int __fastcall Function_21d9d00(int *a1)
{
  int *v1;
  int result;

  v1 = a1;
  Function_2024034(*a1);
  free(v1[1]);
  result = 0;
  v1[1] = 0;
  return result;
}

//----- (021D9D18) --------------------------------------------------------
int __fastcall Function_21d9d18(int a1, int a2, int a3)
{
  int v3;
  int *v4;
  int result;

  v3 = a1;
  v4 = *(int **)(a3 + 4);
  v4[a1 + 11] = a2;
  if ( a2 == 2 )
  {
    Function_21d4f20(v4[6], 4, a1);
    v4[32] = v3;
    result = v4[37] + 1;
    v4[37] = result;
  }
  else
  {
    result = 0;
    v4[37] = 0;
  }
  return result;
}

//----- (021D9D50) --------------------------------------------------------
int __fastcall Function_21d9d50(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_2024034(*(uint *)(a1 + 8));
  free(*(uint *)(v1 + 12));
  result = 0;
  *(uint *)(v1 + 12) = 0;
  return result;
}

//----- (021D9D68) --------------------------------------------------------
int __fastcall Function_21d9d68(int result)
{
  int v1;

  v1 = 0;
  do
  {
    ++v1;
    *(uint *)(result + 68) = 3;
    result += 4;
  }
  while ( v1 < 15 );
  return result;
}

//----- (021D9D78) --------------------------------------------------------
int __fastcall Function_21d9d78(uint *a1, int a2, uint a3)
{
  int v3;
  int v4;
  char v5;
  int result;
  uint *v7;
  int v8;
  uint v9;
  char v10;
  int v11;

  v7 = a1;
  v8 = a2;
  v9 = a3;
  a1[3] = malloc(a3, 24);
  v11 = 0;
  v3 = 0;
  v10 = 48;
  do
  {
    v4 = 0;
    v5 = 48;
    do
    {
      Function_21d154c((uchar *)(v7[3] + 4 * (v4++ + v3)), v10 - 16, v10 + 16, v5 - 40, v5 + 40);
      v5 += 80;
    }
    while ( v4 < 2 );
    v3 += 2;
    v10 += 32;
    ++v11;
  }
  while ( v11 < 3 );
  v7[4] = v8;
  v7[5] = v7;
  result = Function_2023fcc(v7[3], 6u, (int)Function_21d9e90, (int)(v7 + 4), v9);
  v7[2] = result;
  return result;
}

//----- (021D9E08) --------------------------------------------------------
int __fastcall Function_21d9e08(int a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  int result;

  v2 = (uint *)a1;
  v3 = a2;
  v4 = 0;
  v5 = a1;
  do
  {
    ++v4;
    *(uint *)(v5 + 68) = 3;
    v5 += 4;
  }
  while ( v4 < 6 );
  Function_202404c(*(int **)(a1 + 8));
  result = Function_21d8658(*(uint *)(v3 + 8));
  switch ( (uchar)result )
  {
    case 0:
      result = v2[17];
      if ( result != 2 )
      {
        result = 1;
        v2[17] = 1;
      }
      break;
    case 1:
      result = v2[18];
      if ( result != 2 )
      {
        result = 1;
        v2[18] = 1;
      }
      break;
    case 2:
      result = v2[19];
      if ( result != 2 )
      {
        result = 1;
        v2[19] = 1;
      }
      break;
    case 3:
      result = v2[20];
      if ( result != 2 )
      {
        result = 1;
        v2[20] = 1;
      }
      break;
    case 4:
      result = v2[21];
      if ( result != 2 )
      {
        result = 1;
        v2[21] = 1;
      }
      break;
    case 5:
      result = v2[22];
      if ( result != 2 )
      {
        result = 1;
        v2[22] = 1;
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (021D9E90) --------------------------------------------------------
int __fastcall Function_21d9e90(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int result;

  v3 = a1;
  v4 = *(uint *)(a3 + 4);
  result = v4 + 4 * a1;
  *(uint *)(result + 68) = a2;
  if ( a2 == 2 )
  {
    result = Function_21d4f20(*(uint *)(v4 + 24), 4, v3 + 8);
    *(uint *)(v4 + 132) = v3;
  }
  return result;
}

//----- (021D9EB4) --------------------------------------------------------
int __fastcall Function_21d9eb4(uint *a1, int a2, uint a3)
{
  int v3;
  int v4;
  char v5;
  int result;
  uint *v7;
  int v8;
  uint v9;
  char v10;
  int v11;

  v7 = a1;
  v8 = a2;
  v9 = a3;
  a1[3] = malloc(a3, 40);
  v11 = 0;
  v3 = 0;
  v10 = 16;
  do
  {
    v4 = 0;
    v5 = 48;
    do
    {
      Function_21d154c((uchar *)(v7[3] + 4 * (v4++ + v3)), v10 - 16, v10 + 16, v5 - 40, v5 + 40);
      v5 += 80;
    }
    while ( v4 < 2 );
    v3 += 2;
    v10 += 32;
    ++v11;
  }
  while ( v11 < 5 );
  v7[4] = v8;
  v7[5] = v7;
  result = Function_2023fcc(v7[3], 0xAu, (int)Function_21d9ff8, (int)(v7 + 4), v9);
  v7[2] = result;
  return result;
}

//----- (021D9F44) --------------------------------------------------------
int __fastcall Function_21d9f44(int a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  int result;

  v2 = (uint *)a1;
  v3 = a2;
  v4 = 0;
  v5 = a1;
  do
  {
    ++v4;
    *(uint *)(v5 + 68) = 3;
    v5 += 4;
  }
  while ( v4 < 10 );
  Function_202404c(*(int **)(a1 + 8));
  result = Function_21d8674(*(uint *)(v3 + 8));
  switch ( (uchar)result )
  {
    case 1:
      result = v2[17];
      if ( result != 2 )
      {
        result = 1;
        v2[17] = 1;
      }
      break;
    case 2:
      result = v2[18];
      if ( result != 2 )
      {
        result = 1;
        v2[18] = 1;
      }
      break;
    case 3:
      result = v2[19];
      if ( result != 2 )
      {
        result = 1;
        v2[19] = 1;
      }
      break;
    case 4:
      result = v2[20];
      if ( result != 2 )
      {
        result = 1;
        v2[20] = 1;
      }
      break;
    case 5:
      result = v2[21];
      if ( result != 2 )
      {
        result = 1;
        v2[21] = 1;
      }
      break;
    case 6:
      result = v2[22];
      if ( result != 2 )
      {
        result = 1;
        v2[22] = 1;
      }
      break;
    case 7:
      result = v2[23];
      if ( result != 2 )
      {
        result = 1;
        v2[23] = 1;
      }
      break;
    case 8:
      result = v2[24];
      if ( result != 2 )
      {
        result = 1;
        v2[24] = 1;
      }
      break;
    case 9:
      result = v2[25];
      if ( result != 2 )
      {
        result = 1;
        v2[25] = 1;
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (021D9FF8) --------------------------------------------------------
int __fastcall Function_21d9ff8(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int result;

  v3 = a1;
  v4 = *(uint *)(a3 + 4);
  result = v4 + 4 * a1;
  *(uint *)(result + 68) = a2;
  if ( a2 == 2 )
  {
    result = Function_21d4f20(*(uint *)(v4 + 24), 4, v3 + 6);
    *(uint *)(v4 + 132) = v3;
  }
  return result;
}

//----- (021DA018) --------------------------------------------------------
int __fastcall Function_21da018(uint *a1, int a2, uint a3)
{
  int v3;
  int v4;
  char v5;
  int result;
  uint *v7;
  int v8;
  uint v9;
  char v10;
  int v11;

  v7 = a1;
  v8 = a2;
  v9 = a3;
  a1[3] = malloc(a3, 44);
  v11 = 0;
  v3 = 0;
  v10 = 16;
  do
  {
    v4 = 0;
    v5 = 48;
    do
    {
      Function_21d154c((uchar *)(v7[3] + 4 * (v4++ + v3)), v10 - 16, v10 + 16, v5 - 40, v5 + 40);
      v5 += 80;
    }
    while ( v4 < 2 );
    v3 += 2;
    v10 += 32;
    ++v11;
  }
  while ( v11 < 5 );
  Function_21d154c((uchar *)(v7[3] + 40), 160, 192, 8, 40);
  v7[4] = v8;
  v7[5] = v7;
  result = Function_2023fcc(v7[3], 0xBu, (int)Function_21da18c, (int)(v7 + 4), v9);
  v7[2] = result;
  return result;
}

//----- (021DA0BC) --------------------------------------------------------
int __fastcall Function_21da0bc(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  v5 = a1;
  do
  {
    ++v4;
    *(uint *)(v5 + 68) = 3;
    v5 += 4;
  }
  while ( v4 < 11 );
  Function_202404c(*(int **)(a1 + 8));
  v6 = Function_21d8698(*(int **)(v3 + 8), 0);
  Function_21da0fc(v2, v6);
  v7 = Function_21d8698(*(int **)(v3 + 8), 1);
  return Function_21da0fc(v2, v7);
}

//----- (021DA0FC) --------------------------------------------------------
uint *__fastcall Function_21da0fc(uint *result, char a2)
{
  switch ( a2 )
  {
    case 1:
      if ( result[17] != 2 )
        result[17] = 1;
      break;
    case 2:
      if ( result[18] != 2 )
        result[18] = 1;
      break;
    case 3:
      if ( result[19] != 2 )
        result[19] = 1;
      break;
    case 4:
      if ( result[20] != 2 )
        result[20] = 1;
      break;
    case 5:
      if ( result[21] != 2 )
        result[21] = 1;
      break;
    case 6:
      if ( result[22] != 2 )
        result[22] = 1;
      break;
    case 7:
      if ( result[23] != 2 )
        result[23] = 1;
      break;
    case 8:
      if ( result[24] != 2 )
        result[24] = 1;
      break;
    case 9:
      if ( result[25] != 2 )
        result[25] = 1;
      break;
    default:
      return result;
  }
  return result;
}

//----- (021DA18C) --------------------------------------------------------
int __fastcall Function_21da18c(int a1, int a2, int a3)
{
  int v3;
  int *v4;
  int result;

  v3 = a1;
  v4 = *(int **)(a3 + 4);
  v4[a1 + 17] = a2;
  if ( a2 == 2 )
  {
    result = v4[36];
    if ( !result )
    {
      Function_21d4f20(v4[6], 4, v3 + 6);
      v4[33] = v3;
      result = 1;
      v4[36] = 1;
    }
  }
  else
  {
    result = 0;
    v4[36] = 0;
  }
  return result;
}

//----- (021DA1C8) --------------------------------------------------------
int __fastcall Function_21da1c8(uint *a1, int a2, uint a3)
{
  int v3;
  int v4;
  char v5;
  int result;
  uint *v7;
  int v8;
  uint v9;
  char v10;
  int v11;

  v7 = a1;
  v8 = a2;
  v9 = a3;
  a1[3] = malloc(a3, 40);
  v11 = 0;
  v3 = 0;
  v10 = 16;
  do
  {
    v4 = 0;
    v5 = 48;
    do
    {
      Function_21d154c((uchar *)(v7[3] + 4 * (v4++ + v3)), v10 - 16, v10 + 16, v5 - 40, v5 + 40);
      v5 += 80;
    }
    while ( v4 < 2 );
    v3 += 2;
    v10 += 32;
    ++v11;
  }
  while ( v11 < 4 );
  Function_21d154c((uchar *)(v7[3] + 32), 128, 160, 88, 168);
  Function_21d154c((uchar *)(v7[3] + 36), 160, 192, 8, 40);
  v7[4] = v8;
  v7[5] = v7;
  result = Function_2023fcc(v7[3], 0xAu, (int)Function_21da2c0, (int)(v7 + 4), v9);
  v7[2] = result;
  return result;
}

//----- (021DA280) --------------------------------------------------------
int __fastcall Function_21da280(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  v5 = a1;
  do
  {
    ++v4;
    *(uint *)(v5 + 68) = 3;
    v5 += 4;
  }
  while ( v4 < 10 );
  Function_202404c(*(int **)(a1 + 8));
  v6 = Function_21d8698(*(int **)(v3 + 8), 0);
  Function_21da308(v2, v6);
  v7 = Function_21d8698(*(int **)(v3 + 8), 1);
  return Function_21da308(v2, v7);
}

//----- (021DA2C0) --------------------------------------------------------
int __fastcall Function_21da2c0(int a1, int a2, int a3)
{
  int v3;
  uint *v4;
  int result;
  int v6;

  v3 = a1;
  v4 = *(uint **)(a3 + 4);
  v4[a1 + 17] = a2;
  if ( a2 == 2 )
  {
    result = v4[36];
    if ( !result )
    {
      v6 = v4[6];
      if ( v3 == 8 )
        Function_21d4f20(v6, 4, 15);
      else
        Function_21d4f20(v6, 4, v3 + 6);
      v4[33] = v3;
      result = 1;
      v4[36] = 1;
    }
  }
  else
  {
    result = 0;
    v4[36] = 0;
  }
  return result;
}

//----- (021DA308) --------------------------------------------------------
uint *__fastcall Function_21da308(uint *result, char a2)
{
  switch ( a2 )
  {
    case 10:
      if ( result[17] != 2 )
        result[17] = 1;
      break;
    case 11:
      if ( result[18] != 2 )
        result[18] = 1;
      break;
    case 12:
      if ( result[19] != 2 )
        result[19] = 1;
      break;
    case 13:
      if ( result[20] != 2 )
        result[20] = 1;
      break;
    case 14:
      if ( result[21] != 2 )
        result[21] = 1;
      break;
    case 15:
      if ( result[22] != 2 )
        result[22] = 1;
      break;
    case 16:
      if ( result[23] != 2 )
        result[23] = 1;
      break;
    case 17:
      if ( result[24] != 2 )
        result[24] = 1;
      break;
    default:
      return result;
  }
  return result;
}

//----- (021DA38C) --------------------------------------------------------
int __fastcall Function_21da38c(uint *a1, int a2, uint a3)
{
  int v3;
  int v4;
  char v5;
  int result;
  uint *v7;
  int v8;
  uint v9;
  char v10;
  int v11;

  v7 = a1;
  v8 = a2;
  v9 = a3;
  a1[3] = malloc(a3, 60);
  v11 = 0;
  v3 = 0;
  v10 = 16;
  do
  {
    v4 = 0;
    v5 = 28;
    do
    {
      Function_21d154c((uchar *)(v7[3] + 4 * (v4++ + v3)), v10 - 16, v10 + 16, v5 - 24, v5 + 24);
      v5 += 56;
    }
    while ( v4 < 3 );
    v3 += 3;
    v10 += 32;
    ++v11;
  }
  while ( v11 < 5 );
  v7[4] = v8;
  v7[5] = v7;
  result = Function_2023fcc(v7[3], 0xFu, (int)Function_21da514, (int)(v7 + 4), v9);
  v7[2] = result;
  return result;
}

//----- (021DA41C) --------------------------------------------------------
int __fastcall Function_21da41c(int a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  int result;

  v2 = (uint *)a1;
  v3 = a2;
  v4 = 0;
  v5 = a1;
  do
  {
    ++v4;
    *(uint *)(v5 + 68) = 3;
    v5 += 4;
  }
  while ( v4 < 15 );
  Function_202404c(*(int **)(a1 + 8));
  result = Function_21d86bc(*(uint *)(v3 + 8));
  switch ( (uchar)result )
  {
    case 1:
      result = v2[24];
      if ( result != 2 )
      {
        result = 1;
        v2[24] = 1;
      }
      break;
    case 2:
      result = v2[28];
      if ( result != 2 )
      {
        result = 1;
        v2[28] = 1;
      }
      break;
    case 3:
      result = v2[22];
      if ( result != 2 )
      {
        result = 1;
        v2[22] = 1;
      }
      break;
    case 4:
      result = v2[18];
      if ( result != 2 )
      {
        result = 1;
        v2[18] = 1;
      }
      break;
    case 5:
      result = v2[29];
      if ( result != 2 )
      {
        result = 1;
        v2[29] = 1;
      }
      break;
    case 6:
      result = v2[25];
      if ( result != 2 )
      {
        result = 1;
        v2[25] = 1;
      }
      break;
    case 7:
      result = v2[30];
      if ( result != 2 )
      {
        result = 1;
        v2[30] = 1;
      }
      break;
    case 8:
      result = v2[21];
      if ( result != 2 )
      {
        result = 1;
        v2[21] = 1;
      }
      break;
    case 9:
      result = v2[20];
      if ( result != 2 )
      {
        result = 1;
        v2[20] = 1;
      }
      break;
    case 0xA:
      result = v2[23];
      if ( result != 2 )
      {
        result = 1;
        v2[23] = 1;
      }
      break;
    case 0xB:
      result = v2[26];
      if ( result != 2 )
      {
        result = 1;
        v2[26] = 1;
      }
      break;
    case 0xC:
      result = v2[19];
      if ( result != 2 )
      {
        result = 1;
        v2[19] = 1;
      }
      break;
    case 0xD:
      result = v2[17];
      if ( result != 2 )
      {
        result = 1;
        v2[17] = 1;
      }
      break;
    case 0xE:
      result = v2[27];
      if ( result != 2 )
      {
        result = 1;
        v2[27] = 1;
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (021DA514) --------------------------------------------------------
int __fastcall Function_21da514(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int result;

  v3 = a1;
  v4 = *(uint *)(a3 + 4);
  result = v4 + 4 * a1;
  *(uint *)(result + 68) = a2;
  if ( a2 == 2 )
  {
    result = Function_21d4f20(*(uint *)(v4 + 24), 4, v3 + 6);
    *(uint *)(v4 + 132) = v3;
  }
  return result;
}

//----- (021DA534) --------------------------------------------------------
uint *__fastcall Function_21da534(int a1, int a2, int a3, int a4)
{
  char v4;
  int v5;
  uint *v6;

  v5 = a2;
  v6 = (uint *)a1;
  switch ( v4 )
  {
    case 0:
      a3 = 16;
      a2 = 212;
      a4 = 28;
      a1 = 16;
      break;
    case 1:
      a2 = 224;
      a3 = 48;
      a4 = 44;
      a1 = 16;
      break;
    case 2:
      a2 = 224;
      a3 = 80;
      a4 = 44;
      a1 = 16;
      break;
    case 3:
      a2 = 224;
      a3 = 112;
      a4 = 44;
      a1 = 16;
      break;
    case 4:
      a2 = 224;
      a3 = 144;
      a4 = 44;
      a1 = 16;
      break;
    case 5:
      a2 = 212;
      a3 = 176;
      a4 = 60;
      a1 = 16;
      break;
    default:
      return Function_21d4fe4(v6, a2, a3, a4, a1, 0, 0, v5);
  }
  return Function_21d4fe4(v6, a2, a3, a4, a1, 0, 0, v5);
}

//----- (021DA5A8) --------------------------------------------------------
int __fastcall Function_21da5a8(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( dword_21BF6C0 & 1 )
  {
    if ( !*(uint *)(a1 + 140) )
    {
      switch ( (uchar)Function_21d4f7c(*(uint **)(a1 + 24)) )
      {
        case 0u:
          *(uint *)(v1 + 128) = 0;
          *(uint *)(v1 + 4 * *(uint *)(v1 + 128) + 44) = 2;
          break;
        case 1u:
          *(uint *)(v1 + 128) = 1;
          *(uint *)(v1 + 4 * *(uint *)(v1 + 128) + 44) = 2;
          break;
        case 2u:
          *(uint *)(v1 + 128) = 2;
          *(uint *)(v1 + 4 * *(uint *)(v1 + 128) + 44) = 2;
          break;
        case 3u:
          *(uint *)(v1 + 128) = 3;
          *(uint *)(v1 + 4 * *(uint *)(v1 + 128) + 44) = 2;
          break;
        case 4u:
          *(uint *)(v1 + 128) = 4;
          *(uint *)(v1 + 4 * *(uint *)(v1 + 128) + 44) = 2;
          break;
        case 5u:
          *(uint *)(v1 + 128) = 5;
          *(uint *)(v1 + 4 * *(uint *)(v1 + 128) + 44) = 2;
          break;
        default:
          break;
      }
      ++*(uint *)(v1 + 148);
    }
  }
  else
  {
    *(uint *)(a1 + 148) = 0;
    *(uint *)(a1 + 140) = 0;
  }
  result = dword_21BF6C4;
  if ( dword_21BF6C4 & 2 )
  {
    *(uint *)(v1 + 128) = 0;
    result = v1 + 4 * *(uint *)(v1 + 128);
    *(uint *)(result + 44) = 2;
  }
  return result;
}

//----- (021DA6B0) --------------------------------------------------------
uint *__fastcall Function_21da6b0(int a1, uint a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint *v7;
  int v9;
  uint v10;
  int v11;
  int v12;
  int v13;

  v9 = a1;
  v10 = a2;
  *(uint *)(a1 + 28) = malloc(a2, 504);
  v13 = 0;
  v12 = 16;
  v3 = 0;
  v11 = 6;
  do
  {
    v4 = 0;
    v5 = 48;
    do
    {
      v6 = v4 + v11;
      switch ( (uchar)v13 )
      {
        case 0:
          if ( v4 == 2 )
            v6 = 0;
          else
            v2 = 1;
          break;
        case 1:
          if ( v4 == 2 )
            v6 = 1;
          else
            v2 = 0;
          break;
        case 2:
          if ( v4 == 2 )
            v6 = 2;
          else
            v2 = 0;
          break;
        case 3:
          if ( v4 == 2 )
            v6 = 3;
          else
            v2 = 0;
          break;
        case 4:
          if ( v4 == 2 )
            v6 = 4;
          else
            v2 = 1;
          break;
        case 5:
          if ( v4 == 2 )
            v6 = 5;
          else
            v2 = 1;
          break;
        default:
          break;
      }
      if ( v4 >= 2 )
        Function_21da534(*(uint *)(v9 + 28) + 28 * (v4 + v3), v6, v4 + v3, *(uint *)(v9 + 28));
      else
        Function_21d4fe4((uint *)(*(uint *)(v9 + 28) + 28 * (v4 + v3)), v5, v12, 60, 16, v2, v2, v6);
      ++v4;
      v5 += 80;
    }
    while ( v4 < 3 );
    v3 += 3;
    v12 += 32;
    v11 += 2;
    ++v13;
  }
  while ( v13 < 6 );
  v7 = (uint *)Function_21d4ee4(v10);
  *(uint *)(v9 + 24) = v7;
  return Function_21d4f04(v7, *(uint *)(v9 + 28), 3, 6);
}

//----- (021DA7B0) --------------------------------------------------------
int __fastcall Function_21da7b0(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( dword_21BF6C0 & 1 )
  {
    result = *(uint *)(a1 + 140);
    if ( !result )
    {
      result = Function_21d4f7c(*(uint **)(v1 + 24)) - 8;
      switch ( (uchar)result )
      {
        case 0:
          *(uint *)(v1 + 132) = 0;
          result = v1 + 4 * *(uint *)(v1 + 132);
          *(uint *)(result + 68) = 2;
          break;
        case 1:
          *(uint *)(v1 + 132) = 1;
          result = v1 + 4 * *(uint *)(v1 + 132);
          *(uint *)(result + 68) = 2;
          break;
        case 2:
          *(uint *)(v1 + 132) = 2;
          result = v1 + 4 * *(uint *)(v1 + 132);
          *(uint *)(result + 68) = 2;
          break;
        case 3:
          *(uint *)(v1 + 132) = 3;
          result = v1 + 4 * *(uint *)(v1 + 132);
          *(uint *)(result + 68) = 2;
          break;
        case 4:
          *(uint *)(v1 + 132) = 4;
          result = v1 + 4 * *(uint *)(v1 + 132);
          *(uint *)(result + 68) = 2;
          break;
        case 5:
          *(uint *)(v1 + 132) = 5;
          result = v1 + 4 * *(uint *)(v1 + 132);
          *(uint *)(result + 68) = 2;
          break;
        default:
          return result;
      }
    }
  }
  else
  {
    result = 0;
    *(uint *)(v1 + 140) = 0;
  }
  return result;
}

//----- (021DA888) --------------------------------------------------------
uint *__fastcall Function_21da888(int a1, uint a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint *v7;
  int v9;
  uint v10;
  int v11;
  int v12;
  int v13;

  v9 = a1;
  v10 = a2;
  *(uint *)(a1 + 28) = malloc(a2, 504);
  v13 = 0;
  v12 = 16;
  v3 = 0;
  v11 = 6;
  do
  {
    v4 = 0;
    v5 = 48;
    do
    {
      v6 = v4 + v11;
      switch ( (uchar)v13 )
      {
        case 0:
          if ( v4 == 2 )
            v6 = 0;
          else
            v2 = 0;
          break;
        case 1:
          if ( v4 == 2 )
            v6 = 1;
          else
            v2 = 0;
          break;
        case 2:
          if ( v4 == 2 )
            v6 = 2;
          else
            v2 = 0;
          break;
        case 3:
          if ( v4 == 2 )
            v6 = 3;
          else
            v2 = 0;
          break;
        case 4:
          if ( v4 == 2 )
            v6 = 4;
          else
            v2 = 0;
          break;
        case 5:
          if ( v4 == 2 )
            v6 = 5;
          else
            v2 = 1;
          break;
        default:
          break;
      }
      if ( v4 >= 2 )
        Function_21da534(*(uint *)(v9 + 28) + 28 * (v4 + v3), v6, v4 + v3, *(uint *)(v9 + 28));
      else
        Function_21d4fe4((uint *)(*(uint *)(v9 + 28) + 28 * (v4 + v3)), v5, v12, 60, 16, v2, v2, v6);
      ++v4;
      v5 += 80;
    }
    while ( v4 < 3 );
    v3 += 3;
    v12 += 32;
    v11 += 2;
    ++v13;
  }
  while ( v13 < 6 );
  v7 = (uint *)Function_21d4ee4(v10);
  *(uint *)(v9 + 24) = v7;
  return Function_21d4f04(v7, *(uint *)(v9 + 28), 3, 6);
}

//----- (021DA988) --------------------------------------------------------
uint __fastcall Function_21da988(int a1)
{
  int v1;
  uint result;

  v1 = a1;
  if ( dword_21BF6C0 & 1 )
  {
    result = *(uint *)(a1 + 140);
    if ( !result )
    {
      result = Function_21d4f7c(*(uint **)(v1 + 24));
      if ( result <= 0xF )
        JUMPOUT(__CS__, *((short *)&off_21DA9BA + result) + 35498428);
    }
    switch ( (uchar)result )
    {
      case 6:
        *(uint *)(v1 + 132) = 0;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      case 7:
        *(uint *)(v1 + 132) = 1;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      case 8:
        *(uint *)(v1 + 132) = 2;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      case 9:
        *(uint *)(v1 + 132) = 3;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      case 0xA:
        *(uint *)(v1 + 132) = 4;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      case 0xB:
        *(uint *)(v1 + 132) = 5;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      case 0xC:
        *(uint *)(v1 + 132) = 6;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      case 0xD:
        *(uint *)(v1 + 132) = 7;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      case 0xE:
        *(uint *)(v1 + 132) = 8;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      case 0xF:
        *(uint *)(v1 + 132) = 9;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      default:
        return result;
    }
  }
  else
  {
    result = 0;
    *(uint *)(v1 + 140) = 0;
  }
  return result;
}

//----- (021DAAD4) --------------------------------------------------------
uint *__fastcall Function_21daad4(int a1, uint a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint *v8;
  int v10;
  uint v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v10 = a1;
  v11 = a2;
  *(uint *)(a1 + 28) = malloc(a2, 504);
  v16 = 0;
  v15 = 16;
  v14 = 6;
  v13 = 0;
  do
  {
    v5 = 0;
    v12 = 48;
    do
    {
      v6 = v12;
      v7 = v5 + v14;
      switch ( (uchar)v16 )
      {
        case 0:
          if ( v5 == 2 )
          {
            v7 = 0;
          }
          else
          {
            v2 = 0;
            v4 = 60;
            v3 = 16;
          }
          break;
        case 1:
          if ( v5 == 2 )
          {
            v7 = 1;
          }
          else
          {
            v2 = 0;
            v4 = 60;
            v3 = 16;
          }
          break;
        case 2:
          if ( v5 == 2 )
          {
            v7 = 2;
          }
          else
          {
            v2 = 0;
            v4 = 60;
            v3 = 16;
          }
          break;
        case 3:
          if ( v5 == 2 )
          {
            v7 = 3;
          }
          else
          {
            v2 = 0;
            v4 = 60;
            v3 = 16;
          }
          break;
        case 4:
          if ( v5 == 2 )
          {
            v7 = 4;
          }
          else
          {
            v2 = 0;
            v4 = 60;
            v3 = 16;
          }
          break;
        case 5:
          if ( v5 == 2 )
          {
            v7 = 5;
          }
          else if ( v5 )
          {
            v2 = 1;
            v4 = 60;
            v3 = 16;
          }
          else
          {
            v4 = 16;
            v2 = 0;
            v3 = 16;
            v6 = 24;
          }
          break;
        default:
          break;
      }
      if ( v5 >= 2 )
        Function_21da534(*(uint *)(v10 + 28) + 28 * (v5 + v13), v7, v5 + v13, *(uint *)(v10 + 28));
      else
        Function_21d4fe4((uint *)(*(uint *)(v10 + 28) + 28 * (v5 + v13)), v6, v15, v4, v3, v2, v2, v7);
      ++v5;
      v12 += 80;
    }
    while ( v5 < 3 );
    v15 += 32;
    v14 += 2;
    v13 += 3;
    ++v16;
  }
  while ( v16 < 6 );
  v8 = (uint *)Function_21d4ee4(v11);
  *(uint *)(v10 + 24) = v8;
  return Function_21d4f04(v8, *(uint *)(v10 + 28), 3, 6);
}

//----- (021DAC08) --------------------------------------------------------
uint __fastcall Function_21dac08(int a1)
{
  int v1;
  uint result;

  v1 = a1;
  if ( dword_21BF6C0 & 1 )
  {
    result = *(uint *)(a1 + 140);
    if ( !result )
    {
      result = Function_21d4f7c(*(uint **)(v1 + 24));
      if ( result <= 0x10 )
        JUMPOUT(__CS__, *((short *)&off_21DAC3A + result) + 35499068);
    }
    switch ( (uchar)result )
    {
      case 6:
        *(uint *)(v1 + 132) = 0;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      case 7:
        *(uint *)(v1 + 132) = 1;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      case 8:
        *(uint *)(v1 + 132) = 2;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      case 9:
        *(uint *)(v1 + 132) = 3;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      case 0xA:
        *(uint *)(v1 + 132) = 4;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      case 0xB:
        *(uint *)(v1 + 132) = 5;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      case 0xC:
        *(uint *)(v1 + 132) = 6;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      case 0xD:
        *(uint *)(v1 + 132) = 7;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      case 0xE:
        *(uint *)(v1 + 132) = 8;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      case 0xF:
        *(uint *)(v1 + 132) = 9;
        *(uint *)(v1 + 4 * *(uint *)(v1 + 132) + 68) = 2;
        result = 1;
        *(uint *)(v1 + 140) = 1;
        break;
      case 0x10:
        *(uint *)(v1 + 132) = 10;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      default:
        return result;
    }
  }
  else
  {
    result = 0;
    *(uint *)(v1 + 140) = 0;
  }
  return result;
}

//----- (021DAD74) --------------------------------------------------------
uint *__fastcall Function_21dad74(int a1, uint a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint *v8;
  int v10;
  uint v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;

  v10 = a1;
  v11 = a2;
  *(uint *)(a1 + 28) = malloc(a2, 504);
  v17 = 0;
  v15 = 16;
  v14 = 6;
  v13 = 0;
  do
  {
    v5 = 0;
    v12 = 48;
    do
    {
      v6 = v12;
      v7 = v5 + v14;
      switch ( (uchar)v17 )
      {
        case 0:
          if ( v5 == 2 )
          {
            v7 = 0;
          }
          else
          {
            v3 = 0;
            v2 = 0;
            v16 = 60;
            v4 = 16;
          }
          break;
        case 1:
          if ( v5 == 2 )
          {
            v7 = 1;
          }
          else
          {
            v3 = 0;
            v2 = 0;
            v16 = 60;
            v4 = 16;
          }
          break;
        case 2:
          if ( v5 == 2 )
          {
            v7 = 2;
          }
          else
          {
            v3 = 0;
            v2 = 0;
            v16 = 60;
            v4 = 16;
          }
          break;
        case 3:
          if ( v5 == 2 )
          {
            v7 = 3;
          }
          else
          {
            v3 = 0;
            v2 = 0;
            v16 = 60;
            v4 = 16;
          }
          break;
        case 4:
          if ( v5 == 2 )
          {
            v7 = 4;
          }
          else
          {
            if ( v5 )
            {
              v3 = 0;
              v2 = 0;
            }
            else
            {
              v3 = 1;
              v2 = 2;
            }
            v16 = 60;
            v4 = 16;
          }
          break;
        case 5:
          if ( v5 == 2 )
          {
            v7 = 5;
          }
          else if ( v5 )
          {
            v3 = 1;
            v2 = 1;
            v16 = 60;
            v4 = 16;
          }
          else
          {
            v3 = 0;
            v2 = 0;
            v16 = 16;
            v4 = 16;
            v6 = 24;
          }
          break;
        default:
          break;
      }
      if ( v5 >= 2 )
        Function_21da534(*(uint *)(v10 + 28) + 28 * (v5 + v13), v7, v5 + v13, *(uint *)(v10 + 28));
      else
        Function_21d4fe4((uint *)(*(uint *)(v10 + 28) + 28 * (v5 + v13)), v6, v15, v16, v4, v3, v2, v7);
      ++v5;
      v12 += 80;
    }
    while ( v5 < 3 );
    v15 += 32;
    v14 += 2;
    v13 += 3;
    ++v17;
  }
  while ( v17 < 6 );
  v8 = (uint *)Function_21d4ee4(v11);
  *(uint *)(v10 + 24) = v8;
  return Function_21d4f04(v8, *(uint *)(v10 + 28), 3, 6);
}

//----- (021DAED8) --------------------------------------------------------
uint __fastcall Function_21daed8(int a1)
{
  int v1;
  uint result;

  v1 = a1;
  if ( dword_21BF6C0 & 1 )
  {
    result = *(uint *)(a1 + 140);
    if ( !result )
    {
      result = Function_21d4f7c(*(uint **)(v1 + 24));
      if ( result <= 0x10 )
        JUMPOUT(__CS__, *((short *)&off_21DAF0A + result) + 35499788);
    }
    switch ( (uchar)result )
    {
      case 6:
        *(uint *)(v1 + 132) = 0;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      case 7:
        *(uint *)(v1 + 132) = 1;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      case 8:
        *(uint *)(v1 + 132) = 2;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      case 9:
        *(uint *)(v1 + 132) = 3;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      case 0xA:
        *(uint *)(v1 + 132) = 4;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      case 0xB:
        *(uint *)(v1 + 132) = 5;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      case 0xC:
        *(uint *)(v1 + 132) = 6;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      case 0xD:
        *(uint *)(v1 + 132) = 7;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      case 0xF:
        *(uint *)(v1 + 132) = 8;
        *(uint *)(v1 + 4 * *(uint *)(v1 + 132) + 68) = 2;
        result = 1;
        *(uint *)(v1 + 140) = 1;
        break;
      case 0x10:
        *(uint *)(v1 + 132) = 9;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      default:
        return result;
    }
  }
  else
  {
    result = 0;
    *(uint *)(v1 + 140) = 0;
  }
  return result;
}

//----- (021DB02C) --------------------------------------------------------
uint *__fastcall Function_21db02c(int a1, uint a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint *v7;
  int v9;
  uint v10;
  int v11;
  int v12;
  int v13;

  v9 = a1;
  v10 = a2;
  *(uint *)(a1 + 28) = malloc(a2, 672);
  v13 = 0;
  v12 = 16;
  v3 = 0;
  v11 = 6;
  do
  {
    v4 = 0;
    v5 = 28;
    do
    {
      v6 = v4 + v11;
      switch ( (uchar)v13 )
      {
        case 0:
          if ( v4 == 3 )
            v6 = 0;
          else
            v2 = 0;
          break;
        case 1:
          if ( v4 == 3 )
            v6 = 1;
          else
            v2 = 0;
          break;
        case 2:
          if ( v4 == 3 )
            v6 = 2;
          else
            v2 = 0;
          break;
        case 3:
          if ( v4 == 3 )
            v6 = 3;
          else
            v2 = 0;
          break;
        case 4:
          if ( v4 == 3 )
            v6 = 4;
          else
            v2 = 0;
          break;
        case 5:
          if ( v4 == 3 )
            v6 = 5;
          else
            v2 = 1;
          break;
        default:
          break;
      }
      if ( v4 >= 3 )
        Function_21da534(*(uint *)(v9 + 28) + 28 * (v4 + v3), v6, v4 + v3, *(uint *)(v9 + 28));
      else
        Function_21d4fe4((uint *)(*(uint *)(v9 + 28) + 28 * (v4 + v3)), v5, v12, 32, 20, v2, v2, v6);
      ++v4;
      v5 += 56;
    }
    while ( v4 < 4 );
    v3 += 4;
    v12 += 32;
    v11 += 3;
    ++v13;
  }
  while ( v13 < 6 );
  v7 = (uint *)Function_21d4ee4(v10);
  *(uint *)(v9 + 24) = v7;
  return Function_21d4f04(v7, *(uint *)(v9 + 28), 4, 6);
}

//----- (021DB12C) --------------------------------------------------------
uint __fastcall Function_21db12c(int a1)
{
  int v1;
  uint result;

  v1 = a1;
  if ( dword_21BF6C0 & 1 )
  {
    result = *(uint *)(a1 + 140);
    if ( !result )
    {
      result = Function_21d4f7c(*(uint **)(v1 + 24));
      if ( result <= 0x14 )
        JUMPOUT(__CS__, *((short *)&off_21DB15E + result) + 35500384);
    }
    switch ( (uchar)result )
    {
      case 6:
        *(uint *)(v1 + 132) = 0;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      case 7:
        *(uint *)(v1 + 132) = 1;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      case 8:
        *(uint *)(v1 + 132) = 2;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      case 9:
        *(uint *)(v1 + 132) = 3;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      case 0xA:
        *(uint *)(v1 + 132) = 4;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      case 0xB:
        *(uint *)(v1 + 132) = 5;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      case 0xC:
        *(uint *)(v1 + 132) = 6;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      case 0xD:
        *(uint *)(v1 + 132) = 7;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      case 0xE:
        *(uint *)(v1 + 132) = 8;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      case 0xF:
        *(uint *)(v1 + 132) = 9;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      case 0x10:
        *(uint *)(v1 + 132) = 10;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      case 0x11:
        *(uint *)(v1 + 132) = 11;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      case 0x12:
        *(uint *)(v1 + 132) = 12;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      case 0x13:
        *(uint *)(v1 + 132) = 13;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      case 0x14:
        *(uint *)(v1 + 132) = 14;
        result = v1 + 4 * *(uint *)(v1 + 132);
        *(uint *)(result + 68) = 2;
        break;
      default:
        return result;
    }
  }
  else
  {
    result = 0;
    *(uint *)(v1 + 140) = 0;
  }
  return result;
}

//----- (021DB2FC) --------------------------------------------------------
int __fastcall Function_21db2fc(int *a1, int a2)
{
  int *v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( dword_21BF6C4 & 0x10 )
  {
    Function_21d4f20(a1[6], 0, 1);
    v2[35] = 1;
  }
  if ( dword_21BF6C4 & 0x20 )
  {
    Function_21d4f20(v2[6], 0, -1);
    v2[35] = 1;
  }
  if ( dword_21BF6C4 & 0x40 )
  {
    Function_21d4f20(v2[6], 1, -1);
    v2[35] = 1;
  }
  if ( dword_21BF6C4 & 0x80 )
  {
    Function_21d4f20(v2[6], 1, 1);
    v2[35] = 1;
  }
  Function_21da5a8((int)v2);
  return Function_21db38c(v2, v3, v2[9], v2[10]);
}

//----- (021DB38C) --------------------------------------------------------
int __fastcall Function_21db38c(int result, int a2, char a3, int a4)
{
  switch ( a3 )
  {
    case 0:
      result = Function_21da7b0(result);
      break;
    case 1:
      result = Function_21da988(result);
      break;
    case 2:
      if ( a4 )
        result = Function_21daed8(result);
      else
        result = Function_21dac08(result);
      break;
    case 3:
      result = Function_21db12c(result);
      break;
    default:
      return result;
  }
  return result;
}

//----- (021DB3C8) --------------------------------------------------------
int __fastcall Function_21db3c8(int a1)
{
  int v1;
  int result;

  v1 = a1;
  free(*(uint *)(a1 + 28));
  Function_21d4efc(*(uint *)(v1 + 24));
  result = 0;
  *(uint *)(v1 + 24) = 0;
  *(uint *)(v1 + 28) = 0;
  return result;
}

//----- (021DB3E0) --------------------------------------------------------
int __fastcall Function_21db3e0(int a1)
{
  int v1;
  int v2;

  v1 = *(uint *)(a1 + 36);
  v2 = *(uint *)(a1 + 40);
  return Function_21db3ec();
}

//----- (021DB3EC) --------------------------------------------------------
uint *__fastcall Function_21db3ec(uint *result, uint a2, char a3, int a4)
{
  switch ( a3 )
  {
    case 0:
      result = Function_21da6b0((int)result, a2);
      break;
    case 1:
      result = Function_21da888((int)result, a2);
      break;
    case 2:
      if ( a4 )
        result = Function_21dad74((int)result, a2);
      else
        result = Function_21daad4((int)result, a2);
      break;
    case 3:
      result = Function_21db02c((int)result, a2);
      break;
    default:
      return result;
  }
  return result;
}

//----- (021DB428) --------------------------------------------------------
int __fastcall Function_21db428(int a1)
{
  int v1;
  int v2;

  v2 = a1;
  switch ( (uchar)*(uint *)(a1 + 36) )
  {
    case 0u:
      v1 = 1;
      break;
    case 1u:
      v1 = 2;
      break;
    case 2u:
      v1 = 3;
      break;
    case 3u:
      v1 = 4;
      break;
    default:
      ErrorHandler();
      break;
  }
  return Function_21d4f20(*(uint *)(v2 + 24), 4, v1);
}

//----- (021DB468) --------------------------------------------------------
uint *__fastcall Function_21db468(int a1, uint a2)
{
  uint *v2;
  uint v3;

  v2 = (uint *)a1;
  v3 = a2;
  Function_21db3c8(a1);
  return Function_21db3ec(v2, v3, v2[9], v2[10]);
}

//----- (021DB480) --------------------------------------------------------
int __fastcall Function_21db480(int *a1, int a2, int a3)
{
  int *v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_21d25b8(*(uint *)(a2 + 24), *a1);
  return Function_21db49c(v3, v4, v5);
}

//----- (021DB49C) --------------------------------------------------------
int __fastcall Function_21db49c(int *a1, int a2, int a3)
{
  int *v3;
  int v4;

  v3 = a1;
  v4 = a2;
  if ( !Function_21d3998(*(uint *)(a3 + 4)) )
    return Function_21db4e4(v3, 0);
  if ( Function_21db4e4(v3, 1) )
    Function_21d25b8(*(uint *)(v4 + 24), *v3);
  return Function_21db4d4(v3, v4);
}

//----- (021DB4D4) --------------------------------------------------------
int __fastcall Function_21db4d4(int *a1, int a2)
{
  return Function_21d2544(*(uint *)(a2 + 24), *a1);
}

//----- (021DB4E4) --------------------------------------------------------
int __fastcall Function_21db4e4(int *a1, int a2)
{
  int v2;
  int v3;

  v2 = *a1;
  v3 = a2;
  if ( a2 == Function_21d25a0((int *)(*a1 + 484)) )
    return 0;
  Function_21d2584((uint *)(v2 + 484), v3);
  return 1;
}

//----- (021DB50C) --------------------------------------------------------
int *__fastcall Function_21db50c(int a1, int *a2, uint a3)
{
  int *v3;
  int v4;
  uint v5;
  int v6;
  int *result;

  v3 = (int *)*a2;
  v4 = a1;
  v5 = a3;
  v6 = Function_21d26e0(*a2);
  *(uint *)(v4 + 228) = Function_2009a4c(v3[80], v6, 0x7Du, 1, 16125, 2, v5);
  Function_200a3dc(*(int **)(v4 + 228));
  Function_2009d4c(*(int **)(v4 + 228));
  *(uint *)(v4 + 232) = Function_2009b04(v3[81], v6, 3u, 0, 16003, 2, 6, v5);
  Function_200a640(*(int **)(v4 + 232));
  Function_2009d4c(*(int **)(v4 + 232));
  *(uint *)(v4 + 236) = Function_2009bc4(v3[82], v6, 0x7Eu, 1, 16126, 2u, v5);
  result = Function_2009bc4(v3[83], v6, 0x7Cu, 1, 16124, 3u, v5);
  *(uint *)(v4 + 240) = result;
  return result;
}

//----- (021DB5DC) --------------------------------------------------------
int __fastcall Function_21db5dc(int a1, int ***a2)
{
  int v2;
  int **v3;

  v2 = a1;
  v3 = *a2;
  Function_200a4e4(*(int **)(a1 + 228));
  Function_200a6dc(*(int **)(v2 + 232));
  Function_2009d68(v3[80], *(uint ***)(v2 + 228));
  Function_2009d68(v3[81], *(uint ***)(v2 + 232));
  Function_2009d68(v3[82], *(uint ***)(v2 + 236));
  return Function_2009d68(v3[83], *(uint ***)(v2 + 240));
}

//----- (021DB634) --------------------------------------------------------
int *__fastcall Function_21db634(int a1, int *a2, uint a3)
{
  int *v3;
  int v4;
  uint v5;
  int v6;
  int *result;

  v3 = (int *)*a2;
  v4 = a1;
  v5 = a3;
  v6 = Function_21d26e0(*a2);
  *(uint *)(v4 + 244) = Function_2009a4c(v3[80], v6, 0x80u, 1, 16128, 2, v5);
  Function_200a3dc(*(int **)(v4 + 244));
  Function_2009d4c(*(int **)(v4 + 244));
  *(uint *)(v4 + 252) = Function_2009bc4(v3[82], v6, 0x81u, 1, 16129, 2u, v5);
  result = Function_2009bc4(v3[83], v6, 0x7Fu, 1, 16127, 3u, v5);
  *(uint *)(v4 + 256) = result;
  return result;
}

//----- (021DB6C8) --------------------------------------------------------
int __fastcall Function_21db6c8(int a1, int ***a2)
{
  uint ***v2;
  int **v3;

  v2 = (uint ***)a1;
  v3 = *a2;
  Function_200a4e4(*(int **)(a1 + 244));
  Function_2009d68(v3[80], v2[61]);
  Function_2009d68(v3[82], v2[63]);
  return Function_2009d68(v3[83], v2[64]);
}

//----- (021DB708) --------------------------------------------------------
int __fastcall Function_21db708(int a1, int *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v7;
  char *v8;
  int v9;
  int v10;
  int v11;
  char v12;

  v3 = *a2;
  v4 = a1;
  v5 = a3;
  Function_20093b4(
    (int)&v12,
    16125,
    16003,
    16126,
    16124,
    -1,
    -1,
    0,
    0,
    *(uint *)(*a2 + 320),
    *(uint *)(*a2 + 324),
    *(uint *)(*a2 + 328),
    *(uint *)(*a2 + 332),
    0,
    0);
  v7 = *(uint *)(v3 + 316);
  v8 = &v12;
  v9 = 32;
  v10 = 2;
  v11 = v5;
  Function_21db858(v4, &v7);
  return Function_21db81c(v4, &v7, *(uint *)(v4 + 260), *(uint *)(v4 + 264));
}

//----- (021DB78C) --------------------------------------------------------
int __fastcall Function_21db78c(int a1)
{
  int v1;

  v1 = a1;
  Function_21db90c();
  return Function_21db924(v1);
}

//----- (021DB79C) --------------------------------------------------------
int __fastcall Function_21db79c(int a1, int *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v7;
  char *v8;
  int v9;
  int v10;
  int v11;
  char v12;

  v3 = *a2;
  v4 = a1;
  v5 = a3;
  Function_20093b4(
    (int)&v12,
    16125,
    16003,
    16126,
    16124,
    -1,
    -1,
    0,
    0,
    *(uint *)(*a2 + 320),
    *(uint *)(*a2 + 324),
    *(uint *)(*a2 + 328),
    *(uint *)(*a2 + 332),
    0,
    0);
  v7 = *(uint *)(v3 + 316);
  v8 = &v12;
  v9 = 32;
  v10 = 2;
  v11 = v5;
  Function_21db924(v4);
  return Function_21db81c(v4, &v7, *(uint *)(v4 + 260), *(uint *)(v4 + 264));
}

//----- (021DB81C) --------------------------------------------------------
int __fastcall Function_21db81c(int result, int a2, char a3, int a4)
{
  switch ( a3 )
  {
    case 0:
      result = Function_21db944();
      break;
    case 1:
      result = Function_21db9b4(result, a2);
      break;
    case 2:
      if ( a4 )
        result = Function_21dbab8();
      else
        result = Function_21dba24();
      break;
    case 3:
      result = Function_21dbb74();
      break;
    default:
      return result;
  }
  return result;
}

//----- (021DB858) --------------------------------------------------------
int __fastcall Function_21db858(int result, int *a2)
{
  int *v2;
  int *v3;
  int v4;

  v2 = (int *)result;
  v3 = a2;
  v4 = 0;
  do
  {
    switch ( (uchar)result )
    {
      case 0:
        v3[3] = 851968;
        v3[2] = 868352;
        break;
      case 1:
        v3[3] = 983040;
        v3[2] = 917504;
        break;
      case 2:
        v3[3] = 1114112;
        v3[2] = 917504;
        break;
      case 3:
        v3[3] = 1245184;
        v3[2] = 917504;
        break;
      case 4:
        v3[3] = 1376256;
        v3[2] = 917504;
        break;
      case 5:
        v3[3] = 1507328;
        v3[2] = 868352;
        break;
      default:
        break;
    }
    result = Function_2021b90(v3);
    *v2 = result;
    switch ( (uchar)result )
    {
      case 0:
        result = Function_2021d6c(*v2, 3u);
        break;
      case 1:
      case 2:
      case 3:
      case 4:
        result = Function_2021d6c(*v2, 2u);
        break;
      case 5:
        result = Function_2021d6c(*v2, 1u);
        break;
      default:
        break;
    }
    ++v4;
    ++v2;
  }
  while ( v4 < 6 );
  return result;
}

//----- (021DB90C) --------------------------------------------------------
int __fastcall Function_21db90c(int *a1)
{
  int *v1;
  int v2;
  int result;

  v1 = a1;
  v2 = 0;
  do
  {
    result = Function_2021bd4(*v1);
    ++v2;
    ++v1;
  }
  while ( v2 < 6 );
  return result;
}

//----- (021DB924) --------------------------------------------------------
int __fastcall Function_21db924(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = 0;
  v2 = a1;
  do
  {
    result = *(uint *)(v2 + 48);
    if ( result )
    {
      result = Function_2021bd4(result);
      *(uint *)(v2 + 48) = 0;
    }
    ++v1;
    v2 += 4;
  }
  while ( v1 < 15 );
  return result;
}

//----- (021DB944) --------------------------------------------------------
int __fastcall Function_21db944(int a1, int *a2)
{
  int *v2;
  uint *v3;
  int v4;
  int v5;
  int v6;
  int result;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v8 = a1;
  v12 = 0;
  v2 = a2;
  v10 = 48;
  v9 = 0;
  v3 = a2 + 2;
  do
  {
    v4 = 48;
    v2[3] = (v10 << 12) + 786432;
    v11 = 0;
    v5 = v8 + 4 * v9;
    do
    {
      v2[2] = v4;
      *v3 <<= 12;
      v6 = Function_2021b90(v2);
      *(uint *)(v5 + 48) = v6;
      Function_2021d6c(v6, 0);
      v4 += 80;
      v5 += 4;
      ++v11;
    }
    while ( v11 < 2 );
    v10 += 32;
    v9 += 2;
    result = v12 + 1;
    v12 = result;
  }
  while ( result < 3 );
  return result;
}

//----- (021DB9B4) --------------------------------------------------------
int __fastcall Function_21db9b4(int a1, int *a2)
{
  int *v2;
  uint *v3;
  int v4;
  int v5;
  int v6;
  int result;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v8 = a1;
  v12 = 0;
  v2 = a2;
  v10 = 16;
  v9 = 0;
  v3 = a2 + 2;
  do
  {
    v4 = 48;
    v2[3] = (v10 << 12) + 786432;
    v11 = 0;
    v5 = v8 + 4 * v9;
    do
    {
      v2[2] = v4;
      *v3 <<= 12;
      v6 = Function_2021b90(v2);
      *(uint *)(v5 + 48) = v6;
      Function_2021d6c(v6, 0);
      v4 += 80;
      v5 += 4;
      ++v11;
    }
    while ( v11 < 2 );
    v10 += 32;
    v9 += 2;
    result = v12 + 1;
    v12 = result;
  }
  while ( result < 5 );
  return result;
}

//----- (021DBA24) --------------------------------------------------------
int __fastcall Function_21dba24(int a1, int *a2)
{
  int *v2;
  uint *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v9 = a1;
  v13 = 0;
  v2 = a2;
  v11 = 16;
  v10 = 0;
  v3 = a2 + 2;
  do
  {
    v4 = 48;
    v2[3] = (v11 << 12) + 786432;
    v12 = 0;
    v5 = v9 + 4 * v10;
    do
    {
      v2[2] = v4;
      *v3 <<= 12;
      v6 = Function_2021b90(v2);
      *(uint *)(v5 + 48) = v6;
      Function_2021d6c(v6, 0);
      v4 += 80;
      v5 += 4;
      ++v12;
    }
    while ( v12 < 2 );
    v11 += 32;
    v10 += 2;
    ++v13;
  }
  while ( v13 < 5 );
  v2[3] = 176;
  v2[2] = 98304;
  v2[3] = (v2[3] << 12) + 786432;
  v7 = Function_2021b90(v2);
  *(uint *)(v9 + 88) = v7;
  return Function_2021d6c(v7, 5u);
}

//----- (021DBAB8) --------------------------------------------------------
int __fastcall Function_21dbab8(int a1, int *a2)
{
  int *v2;
  uint *v3;
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

  v10 = a1;
  v14 = 0;
  v2 = a2;
  v12 = 16;
  v11 = 0;
  v3 = a2 + 2;
  do
  {
    v4 = 48;
    v2[3] = (v12 << 12) + 786432;
    v13 = 0;
    v5 = v10 + 4 * v11;
    do
    {
      v2[2] = v4;
      *v3 <<= 12;
      v6 = Function_2021b90(v2);
      *(uint *)(v5 + 48) = v6;
      Function_2021d6c(v6, 0);
      v4 += 80;
      v5 += 4;
      ++v13;
    }
    while ( v13 < 2 );
    v12 += 32;
    v11 += 2;
    ++v14;
  }
  while ( v14 < 4 );
  v2[3] = 144;
  v2[2] = 0x80000;
  v2[3] = (v2[3] << 12) + 786432;
  v7 = Function_2021b90(v2);
  *(uint *)(v10 + 80) = v7;
  Function_2021d6c(v7, 0);
  v2[3] = 176;
  v2[2] = 98304;
  v2[3] = (v2[3] << 12) + 786432;
  v8 = Function_2021b90(v2);
  *(uint *)(v10 + 84) = v8;
  return Function_2021d6c(v8, 4u);
}

//----- (021DBB74) --------------------------------------------------------
int __fastcall Function_21dbb74(int a1, int *a2)
{
  int *v2;
  uint *v3;
  int v4;
  int v5;
  int v6;
  int result;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v8 = a1;
  v12 = 0;
  v2 = a2;
  v10 = 16;
  v9 = 0;
  v3 = a2 + 2;
  do
  {
    v4 = 28;
    v2[3] = (v10 << 12) + 786432;
    v11 = 0;
    v5 = v8 + 4 * v9;
    do
    {
      v2[2] = v4;
      *v3 <<= 12;
      v6 = Function_2021b90(v2);
      *(uint *)(v5 + 48) = v6;
      Function_2021d6c(v6, 6u);
      v4 += 56;
      v5 += 4;
      ++v11;
    }
    while ( v11 < 3 );
    v10 += 32;
    v9 += 3;
    result = v12 + 1;
    v12 = result;
  }
  while ( result < 5 );
  return result;
}

//----- (021DBBE4) --------------------------------------------------------
int __fastcall Function_21dbbe4(int a1, int *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int result;
  int v10;
  int v11;
  int v12;
  int v13;
  char *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  char v20;

  v3 = *a2;
  v10 = a1;
  v4 = a3;
  Function_20093b4(
    (int)&v20,
    16128,
    16003,
    16129,
    16127,
    -1,
    -1,
    0,
    0,
    *(uint *)(*a2 + 320),
    *(uint *)(*a2 + 324),
    *(uint *)(*a2 + 328),
    *(uint *)(*a2 + 332),
    0,
    0);
  v13 = *(uint *)(v3 + 316);
  v14 = &v20;
  v17 = 15;
  v18 = 2;
  v12 = 0;
  v5 = 0;
  v19 = v4;
  v11 = 16;
  do
  {
    v6 = 0;
    v16 = (v11 << 12) + 786432;
    v7 = 28;
    v8 = v10 + 4 * v5;
    do
    {
      v15 = v7 << 12;
      *(uint *)(v8 + 168) = Function_2021b90(&v13);
      switch ( (uchar)v6 + (uchar)v5 )
      {
        case 0:
          Function_2021d6c(*(uint *)(v8 + 168), 0);
          break;
        case 1:
          Function_2021d6c(*(uint *)(v8 + 168), 5u);
          break;
        case 2:
          Function_2021d6c(*(uint *)(v8 + 168), 0xAu);
          break;
        case 3:
          Function_2021d6c(*(uint *)(v8 + 168), 1u);
          break;
        case 4:
          Function_2021d6c(*(uint *)(v8 + 168), 6u);
          break;
        case 5:
          Function_2021d6c(*(uint *)(v8 + 168), 0xBu);
          break;
        case 6:
          Function_2021d6c(*(uint *)(v8 + 168), 2u);
          break;
        case 7:
          Function_2021d6c(*(uint *)(v8 + 168), 9u);
          break;
        case 8:
          Function_2021d6c(*(uint *)(v8 + 168), 0xCu);
          break;
        case 9:
          Function_2021d6c(*(uint *)(v8 + 168), 3u);
          break;
        case 10:
          Function_2021d6c(*(uint *)(v8 + 168), 8u);
          break;
        case 11:
          Function_2021d6c(*(uint *)(v8 + 168), 0xDu);
          break;
        case 12:
          Function_2021d6c(*(uint *)(v8 + 168), 4u);
          break;
        case 13:
          Function_2021d6c(*(uint *)(v8 + 168), 7u);
          break;
        case 14:
          Function_2021cac(*(uint *)(v8 + 168), 0);
          break;
        default:
          break;
      }
      ++v6;
      v7 += 56;
      v8 += 4;
    }
    while ( v6 < 3 );
    v5 += 3;
    v11 += 32;
    result = v12 + 1;
    v12 = result;
  }
  while ( result < 5 );
  return result;
}

//----- (021DBDA0) --------------------------------------------------------
int __fastcall Function_21dbda0(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = 0;
  v2 = a1;
  do
  {
    result = *(uint *)(v2 + 168);
    if ( result )
    {
      Function_2021bd4(result);
      result = v2 + 168;
      *(uint *)(v2 + 168) = 0;
    }
    ++v1;
    v2 += 4;
  }
  while ( v1 < 15 );
  return result;
}

//----- (021DBDC8) --------------------------------------------------------
int __fastcall Function_21dbdc8(int a1, int *a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int *v7;
  int v9;
  uchar *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v15 = a4;
  v4 = a1;
  v5 = *a2;
  v6 = a3;
  v7 = (int *)Function_2009dc8(*(uint *)(*a2 + 324), 16003);
  v9 = *(uint *)(v5 + 336);
  v10 = Function_200a72c(v7, 0);
  v11 = 0;
  v12 = 0;
  v13 = 2;
  v14 = v6;
  Function_21dbec8(v4, &v9, *(uint *)(v5 + 336));
  return Function_21dbe98(v4, &v9, *(uint *)(v5 + 336), *(uint *)(v4 + 260), *(uint *)(v4 + 264), v9);
}

//----- (021DBE2C) --------------------------------------------------------
int __fastcall Function_21dbe2c(int a1)
{
  int v1;

  v1 = a1;
  Function_21dc04c();
  return Function_21dc068(v1);
}

//----- (021DBE3C) --------------------------------------------------------
int __fastcall Function_21dbe3c(int a1, int *a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int *v7;
  int v9;
  uchar *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v15 = a4;
  v4 = a1;
  v5 = *a2;
  v6 = a3;
  v7 = (int *)Function_2009dc8(*(uint *)(*a2 + 324), 16003);
  v9 = *(uint *)(v5 + 336);
  v10 = Function_200a72c(v7, 0);
  v11 = 0;
  v12 = 0;
  v13 = 2;
  v14 = v6;
  Function_21dc068(v4);
  return Function_21dbe98(v4, &v9, *(uint *)(v5 + 336), *(uint *)(v4 + 260), *(uint *)(v4 + 264), v9);
}

//----- (021DBE98) --------------------------------------------------------
int __fastcall Function_21dbe98(int a1, int a2, int a3, int a4, int a5)
{
  int result;

  switch ( a4 )
  {
    case 0:
      return Function_21dc088();
    case 1:
      return Function_21dc12c();
    case 2:
      if ( a5 )
        result = Function_21dc2a4();
      else
        result = Function_21dc1e8();
      break;
  }
  return result;
}

//----- (021DBEC8) --------------------------------------------------------
uint __fastcall Function_21dbec8(uint *a1, int a2, int a3)
{
  uint *v3;
  uint *v4;
  int v5;
  char v6;
  int v7;
  int v8;
  int v9;
  uint **v10;
  int v11;
  int v12;
  int v13;
  uint **v14;
  int v15;
  int v16;
  int v17;
  uint **v18;
  int v19;
  int v20;
  int v21;
  uint **v22;
  int v23;
  int v24;
  int v25;
  uint **v26;

  v3 = (uint *)a2;
  v4 = a1;
  v5 = a3;
  v6 = Function_201fab4(*(uint **)(a2 + 8), 2);
  v7 = Function_21d4d6c(v5, 8u, 2u);
  v8 = v7;
  v9 = Function_21d4dac(v5, v7, 697, 0x32u);
  v3[1] = v8;
  v3[3] = v4[1];
  v3[4] = (uint)-v9 >> 1;
  v3[5] = -6;
  v10 = (uint **)Function_21d4ca0((int)v3);
  v4[7] = v10;
  Function_2012a60(*v10, v6 + 3);
  Function_21d4da0(v8);
  v11 = Function_21d4d6c(v5, 8u, 2u);
  v12 = v11;
  v13 = Function_21d4dac(v5, v11, 697, 0x2Fu);
  v3[1] = v12;
  v3[3] = v4[2];
  v3[4] = (uint)-v13 >> 1;
  v3[5] = -6;
  v14 = (uint **)Function_21d4ca0((int)v3);
  v4[8] = v14;
  Function_2012a60(*v14, v6 + 3);
  Function_21d4da0(v12);
  v15 = Function_21d4d6c(v5, 8u, 2u);
  v16 = v15;
  v17 = Function_21d4dac(v5, v15, 697, 0x30u);
  v3[1] = v16;
  v3[3] = v4[3];
  v3[4] = (uint)-v17 >> 1;
  v3[5] = -6;
  v18 = (uint **)Function_21d4ca0((int)v3);
  v4[9] = v18;
  Function_2012a60(*v18, v6 + 3);
  Function_21d4da0(v16);
  v19 = Function_21d4d6c(v5, 8u, 2u);
  v20 = v19;
  v21 = Function_21d4dac(v5, v19, 697, 0x31u);
  v3[1] = v20;
  v3[3] = v4[4];
  v3[4] = (uint)-v21 >> 1;
  v3[5] = -6;
  v22 = (uint **)Function_21d4ca0((int)v3);
  v4[10] = v22;
  Function_2012a60(*v22, v6 + 3);
  Function_21d4da0(v20);
  v23 = Function_21d4d6c(v5, 8u, 2u);
  v24 = v23;
  v25 = Function_21d4dac(v5, v23, 697, 0x33u);
  v3[1] = v24;
  v3[3] = v4[5];
  v3[4] = (uint)-v25 >> 1;
  v3[5] = -6;
  v26 = (uint **)Function_21d4ca0((int)v3);
  v4[11] = v26;
  Function_2012a60(*v26, v6 + 1);
  return Function_21d4da0(v24);
}

//----- (021DC04C) --------------------------------------------------------
int **__fastcall Function_21dc04c(int a1)
{
  int v1;
  int v2;
  int **result;

  v1 = a1;
  v2 = 0;
  do
  {
    result = *(int ***)(v1 + 24);
    if ( result )
      result = (int **)Function_21d4d1c(result);
    ++v2;
    v1 += 4;
  }
  while ( v2 < 6 );
  return result;
}

//----- (021DC068) --------------------------------------------------------
int **__fastcall Function_21dc068(int a1)
{
  int v1;
  int v2;
  int **result;

  v1 = 0;
  v2 = a1;
  do
  {
    result = *(int ***)(v2 + 108);
    if ( result )
    {
      result = (int **)Function_21d4d1c(result);
      *(uint *)(v2 + 108) = 0;
    }
    ++v1;
    v2 += 4;
  }
  while ( v1 < 15 );
  return result;
}

//----- (021DC088) --------------------------------------------------------
uint __fastcall Function_21dc088(int a1, int a2, int a3)
{
  uint v3;
  int v4;
  int v5;
  int v6;
  uint **v7;
  uint result;
  uint *v9;
  int v10;
  int v11;

  v4 = a1;
  v9 = (uint *)a2;
  v10 = a3;
  v5 = 0;
  v11 = Function_201fab4(*(uint **)(a2 + 8), 2) + 11;
  do
  {
    v6 = Function_21d4d6c(v10, 0xAu, 2u);
    switch ( (uchar)v6 )
    {
      case 0:
        v3 = 81;
        break;
      case 1:
        v3 = 82;
        break;
      case 2:
        v3 = 83;
        break;
      case 3:
        v3 = 84;
        break;
      case 4:
        v3 = 85;
        break;
      case 5:
        v3 = 86;
        break;
      default:
        break;
    }
    v9[4] = (uint)-Function_21d4dac(v10, v6, 697, v3) >> 1;
    v9[1] = v6;
    v9[3] = *(uint *)(v4 + 48);
    v9[5] = -6;
    v7 = (uint **)Function_21d4ca0((int)v9);
    *(uint *)(v4 + 108) = v7;
    Function_2012a60(*v7, v11);
    result = Function_21d4da0(v6);
    ++v5;
    v4 += 4;
  }
  while ( v5 < 6 );
  return result;
}

//----- (021DC12C) --------------------------------------------------------
uint __fastcall Function_21dc12c(int a1, int a2, int a3)
{
  uint v3;
  int v4;
  int v5;
  int v6;
  uint **v7;
  uint result;
  uint *v9;
  int v10;
  int v11;

  v4 = a1;
  v9 = (uint *)a2;
  v10 = a3;
  v5 = 0;
  v11 = Function_201fab4(*(uint **)(a2 + 8), 2) + 11;
  do
  {
    v6 = Function_21d4d6c(v10, 0xAu, 2u);
    switch ( (uchar)v6 )
    {
      case 0:
        v3 = 54;
        break;
      case 1:
        v3 = 55;
        break;
      case 2:
        v3 = 56;
        break;
      case 3:
        v3 = 57;
        break;
      case 4:
        v3 = 58;
        break;
      case 5:
        v3 = 59;
        break;
      case 6:
        v3 = 60;
        break;
      case 7:
        v3 = 61;
        break;
      case 8:
        v3 = 62;
        break;
      case 9:
        v3 = 126;
        break;
      default:
        break;
    }
    v9[4] = (uint)-Function_21d4dac(v10, v6, 697, v3) >> 1;
    v9[1] = v6;
    v9[3] = *(uint *)(v4 + 48);
    v9[5] = -6;
    v7 = (uint **)Function_21d4ca0((int)v9);
    *(uint *)(v4 + 108) = v7;
    Function_2012a60(*v7, v11);
    result = Function_21d4da0(v6);
    ++v5;
    v4 += 4;
  }
  while ( v5 < 10 );
  return result;
}

//----- (021DC1E8) --------------------------------------------------------
uint __fastcall Function_21dc1e8(int a1, int a2, int a3)
{
  uint v3;
  int v4;
  int v5;
  int v6;
  uint **v7;
  uint result;
  uint *v9;
  int v10;
  int v11;

  v4 = a1;
  v9 = (uint *)a2;
  v10 = a3;
  v5 = 0;
  v11 = Function_201fab4(*(uint **)(a2 + 8), 2) + 11;
  do
  {
    v6 = Function_21d4d6c(v10, 0xAu, 2u);
    switch ( (uchar)v6 )
    {
      case 0:
        v3 = 64;
        break;
      case 1:
        v3 = 70;
        break;
      case 2:
        v3 = 73;
        break;
      case 3:
        v3 = 71;
        break;
      case 4:
        v3 = 72;
        break;
      case 5:
        v3 = 76;
        break;
      case 6:
        v3 = 75;
        break;
      case 7:
        v3 = 77;
        break;
      case 8:
        v3 = 80;
        break;
      case 9:
        v3 = 127;
        break;
      default:
        break;
    }
    v9[4] = (uint)-Function_21d4dac(v10, v6, 697, v3) >> 1;
    v9[1] = v6;
    v9[3] = *(uint *)(v4 + 48);
    v9[5] = -6;
    v7 = (uint **)Function_21d4ca0((int)v9);
    *(uint *)(v4 + 108) = v7;
    Function_2012a60(*v7, v11);
    result = Function_21d4da0(v6);
    ++v5;
    v4 += 4;
  }
  while ( v5 < 10 );
  return result;
}

//----- (021DC2A4) --------------------------------------------------------
uint __fastcall Function_21dc2a4(int a1, int a2, int a3)
{
  uint v3;
  int v4;
  int v5;
  int v6;
  uint **v7;
  uint result;
  uint *v9;
  int v10;
  int v11;

  v4 = a1;
  v9 = (uint *)a2;
  v10 = a3;
  v5 = 0;
  v11 = Function_201fab4(*(uint **)(a2 + 8), 2) + 11;
  do
  {
    v6 = Function_21d4d6c(v10, 0xAu, 2u);
    switch ( (uchar)v6 )
    {
      case 0:
        v3 = 65;
        break;
      case 1:
        v3 = 66;
        break;
      case 2:
        v3 = 68;
        break;
      case 3:
        v3 = 67;
        break;
      case 4:
        v3 = 74;
        break;
      case 5:
        v3 = 69;
        break;
      case 6:
        v3 = 78;
        break;
      case 7:
        v3 = 79;
        break;
      case 8:
        v3 = 127;
        break;
      default:
        break;
    }
    v9[4] = (uint)-Function_21d4dac(v10, v6, 697, v3) >> 1;
    v9[1] = v6;
    v9[3] = *(uint *)(v4 + 48);
    v9[5] = -6;
    v7 = (uint **)Function_21d4ca0((int)v9);
    *(uint *)(v4 + 108) = v7;
    Function_2012a60(*v7, v11);
    result = Function_21d4da0(v6);
    ++v5;
    v4 += 4;
  }
  while ( v5 < 9 );
  return result;
}

//----- (021DC35C) --------------------------------------------------------
uint *__fastcall Function_21dc35c(int a1)
{
  uint *result;

  result = (uint *)(a1 + 132);
  *result = 0xFFFF;
  return result;
}

//----- (021DC368) --------------------------------------------------------
int __fastcall Function_21dc368(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_21dc3bc();
  return Function_21dc380(v2, v3, *(uint *)(v2 + 36), *(uint *)(v2 + 40));
}

//----- (021DC380) --------------------------------------------------------
int __fastcall Function_21dc380(int result, int a2, char a3, int a4)
{
  switch ( a3 )
  {
    case 0:
      result = Function_21dc48c();
      break;
    case 1:
      result = Function_21dc4f8(result, a2);
      break;
    case 2:
      if ( a4 )
        result = Function_21dc600();
      else
        result = Function_21dc57c();
      break;
    case 3:
      result = Function_21dc720();
      break;
    default:
      return result;
  }
  return result;
}

//----- (021DC3BC) --------------------------------------------------------
int __fastcall Function_21dc3bc(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a1;
  v3 = a2;
  switch ( (uchar)*(uint *)(a1 + 128) )
  {
    case 0u:
      Function_21d86c4(*(int **)(a2 + 8), 0);
      Function_2005748(0x5DDu);
      break;
    case 1u:
      if ( Function_21d863c(*(uint *)(a2 + 8)) )
      {
        Function_21d8628(*(int **)(v3 + 8), 0);
        Function_2005748(0x5DDu);
      }
      break;
    case 2u:
      if ( Function_21d863c(*(uint *)(a2 + 8)) != 1 )
      {
        Function_21d8628(*(int **)(v3 + 8), 1);
        Function_2005748(0x5DDu);
      }
      break;
    case 3u:
      if ( Function_21d863c(*(uint *)(a2 + 8)) != 2 )
      {
        Function_21d8628(*(int **)(v3 + 8), 2);
        Function_2005748(0x5DDu);
        *(uint *)(v2 + 136) = 0;
      }
      break;
    case 4u:
      if ( Function_21d863c(*(uint *)(a2 + 8)) != 3 )
      {
        Function_21d8628(*(int **)(v3 + 8), 3);
        Function_2005748(0x5DDu);
      }
      break;
    case 5u:
      if ( *(uint *)(a1 + 148) <= 1 )
      {
        Function_21d86c4(*(int **)(a2 + 8), 1);
        Function_2005748(0x5DDu);
      }
      break;
    default:
      break;
  }
  result = 0xFFFF;
  *(uint *)(v2 + 128) = 0xFFFF;
  return result;
}

//----- (021DC48C) --------------------------------------------------------
int __fastcall Function_21dc48c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = 100;
  switch ( (uchar)*(uint *)(a1 + 132) )
  {
    case 0u:
      v4 = 0;
      break;
    case 1u:
      v4 = 1;
      break;
    case 2u:
      v4 = 2;
      break;
    case 3u:
      v4 = 3;
      break;
    case 4u:
      v4 = 4;
      break;
    case 5u:
      v4 = 5;
      break;
    default:
      break;
  }
  if ( v4 != 100 && v4 != Function_21d8658(*(uint *)(a2 + 8)) )
  {
    Function_2005748(0x5DDu);
    Function_21d8644(*(int **)(v3 + 8), v4);
  }
  result = 0xFFFF;
  *(uint *)(v2 + 132) = 0xFFFF;
  return result;
}

//----- (021DC4F8) --------------------------------------------------------
int __fastcall Function_21dc4f8(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = 100;
  switch ( (uchar)*(uint *)(a1 + 132) )
  {
    case 0u:
      v4 = 1;
      break;
    case 1u:
      v4 = 2;
      break;
    case 2u:
      v4 = 3;
      break;
    case 3u:
      v4 = 4;
      break;
    case 4u:
      v4 = 5;
      break;
    case 5u:
      v4 = 6;
      break;
    case 6u:
      v4 = 7;
      break;
    case 7u:
      v4 = 8;
      break;
    case 8u:
      v4 = 9;
      break;
    case 9u:
      v4 = 0;
      break;
    default:
      break;
  }
  if ( v4 != 100 && v4 != Function_21d8674(*(uint *)(a2 + 8)) )
  {
    Function_2005748(0x5DDu);
    Function_21d8660(*(int **)(v3 + 8), v4);
  }
  result = 0xFFFF;
  *(uint *)(v2 + 132) = 0xFFFF;
  return result;
}

//----- (021DC57C) --------------------------------------------------------
int __fastcall Function_21dc57c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = 100;
  switch ( (uchar)*(uint *)(a1 + 132) )
  {
    case 0u:
      v4 = 1;
      break;
    case 1u:
      v4 = 2;
      break;
    case 2u:
      v4 = 3;
      break;
    case 3u:
      v4 = 4;
      break;
    case 4u:
      v4 = 5;
      break;
    case 5u:
      v4 = 6;
      break;
    case 6u:
      v4 = 7;
      break;
    case 7u:
      v4 = 8;
      break;
    case 8u:
      v4 = 9;
      break;
    case 9u:
      v4 = 0;
      break;
    case 0xAu:
      *(uint *)(a1 + 32) = 1;
      Function_2005748(0x5DDu);
      break;
    default:
      break;
  }
  if ( v4 != 100 )
    Function_21dc67c(v2, v3, v4);
  result = 0xFFFF;
  *(uint *)(v2 + 132) = 0xFFFF;
  return result;
}

//----- (021DC600) --------------------------------------------------------
int __fastcall Function_21dc600(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = 100;
  switch ( (uchar)*(uint *)(a1 + 132) )
  {
    case 0u:
      v4 = 10;
      break;
    case 1u:
      v4 = 11;
      break;
    case 2u:
      v4 = 12;
      break;
    case 3u:
      v4 = 13;
      break;
    case 4u:
      v4 = 14;
      break;
    case 5u:
      v4 = 15;
      break;
    case 6u:
      v4 = 16;
      break;
    case 7u:
      v4 = 17;
      break;
    case 8u:
      v4 = 0;
      break;
    case 9u:
      *(uint *)(a1 + 32) = 0;
      Function_2005748(0x5DDu);
      break;
    default:
      break;
  }
  if ( v4 != 100 )
    Function_21dc67c(v2, v3, v4);
  result = 0xFFFF;
  *(uint *)(v2 + 132) = 0xFFFF;
  return result;
}

//----- (021DC67C) --------------------------------------------------------
int __fastcall Function_21dc67c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int *v6;
  int result;
  bool v8;
  int *v9;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = *(int **)(a2 + 8);
  if ( a3 )
  {
    result = Function_21d8698(v6, 0);
    if ( v5 != result )
    {
      result = Function_21d8698(*(int **)(v3 + 8), 1);
      if ( v5 != result )
      {
        result = Function_21d8698(*(int **)(v3 + 8), *(uint *)(v4 + 136));
        if ( v5 != result )
        {
          Function_21d867c(*(int **)(v3 + 8), v5, *(uint *)(v4 + 136));
          *(uint *)(v4 + 136) = ((uint)(*(uint *)(v4 + 136) + 1) >> 31)
                                + __ROR4__(
                                    ((*(uint *)(v4 + 136) + 1) << 31)
                                  - ((uint)(*(uint *)(v4 + 136) + 1) >> 31),
                                    31);
          result = Function_2005748(0x5DDu);
        }
      }
    }
  }
  else
  {
    v8 = Function_21d8698(v6, 0) == 0;
    v9 = *(int **)(v3 + 8);
    if ( v8 )
    {
      if ( Function_21d8698(v9, 1) )
      {
        Function_21d867c(*(int **)(v3 + 8), v5, 1);
        Function_2005748(0x5DDu);
      }
    }
    else
    {
      Function_21d867c(v9, v5, 0);
      Function_2005748(0x5DDu);
    }
    result = 0;
    *(uint *)(v4 + 136) = 0;
  }
  return result;
}

//----- (021DC720) --------------------------------------------------------
int __fastcall Function_21dc720(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = 100;
  switch ( (uchar)*(uint *)(a1 + 132) )
  {
    case 0u:
      v4 = 13;
      break;
    case 1u:
      v4 = 4;
      break;
    case 2u:
      v4 = 12;
      break;
    case 3u:
      v4 = 9;
      break;
    case 4u:
      v4 = 8;
      break;
    case 5u:
      v4 = 3;
      break;
    case 6u:
      v4 = 10;
      break;
    case 7u:
      v4 = 1;
      break;
    case 8u:
      v4 = 6;
      break;
    case 9u:
      v4 = 11;
      break;
    case 0xAu:
      v4 = 14;
      break;
    case 0xBu:
      v4 = 2;
      break;
    case 0xCu:
      v4 = 5;
      break;
    case 0xDu:
      v4 = 7;
      break;
    case 0xEu:
      v4 = 0;
      break;
    default:
      break;
  }
  if ( v4 != 100 && v4 != Function_21d86bc(*(uint *)(a2 + 8)) )
  {
    Function_2005748(0x5DDu);
    Function_21d86a8(*(int **)(v3 + 8), v4);
  }
  result = 0xFFFF;
  *(uint *)(v2 + 132) = 0xFFFF;
  return result;
}

//----- (021DC7C0) --------------------------------------------------------
uint *__fastcall Function_21dc7c0(uint *result, int a2)
{
  int v2;

  if ( result[75] )
    return (uint *)Function_21dc7f4();
  v2 = *(uint *)(a2 + 4);
  if ( v2 > 0 )
  {
    result[75] = v2;
    result[76] = 0;
    result[77] = *(uint *)(a2 + 8);
    result = (uint *)result[77];
    *result = 0;
    *(uint *)(a2 + 4) = 0;
  }
  return result;
}

//----- (021DC7F4) --------------------------------------------------------
int __fastcall Function_21dc7f4(int result)
{
  int v1;
  int v2;

  v1 = result;
  v2 = *(uint *)(result + 300);
  if ( v2 )
  {
    result = *(uint *)(result + 304);
    if ( result )
    {
      if ( result == 1 )
      {
        result = Function_21d2664((uint *)(v1 + 268));
        REG_BLDALPHA_SUB = *(ushort *)(v1 + 268) | ((16 - *(ushort *)(v1 + 268)) << 8);
        if ( result == 1 )
        {
          if ( *(uint *)(v1 + 300) == 1 )
            REG_BLDCNT_SUB = 0;
          **(uint **)(v1 + 308) = 1;
          result = 304;
          *(uint *)(v1 + 304) = 0;
          *(uint *)(v1 + 300) = 0;
        }
      }
    }
    else
    {
      if ( v2 == 1 )
        Function_21d2648((uint *)(v1 + 268), 0, 16, 0, 0, 2);
      else
        Function_21d2648((uint *)(v1 + 268), 16, 0, 0, 0, 2);
      G2x_SetBlendAlpha_((int *)&REG_BLDCNT_SUB, 0, 4, *(uint *)(v1 + 268), 16 - *(uint *)(v1 + 268));
      result = 304;
      ++*(uint *)(v1 + 304);
    }
  }
  return result;
}

//----- (021DC8B4) --------------------------------------------------------
int __fastcall Function_21dc8b4(int a1, int a2, int a3, int a4)
{
  if ( a3 != 2 )
    return Function_21dc8d0();
  if ( a4 )
    return Function_21dc93c();
  return Function_21dc90c();
}

//----- (021DC8D0) --------------------------------------------------------
int __fastcall Function_21dc8d0(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  uint **v6;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    v5 = v2[12];
    if ( v5 )
      Function_2021fe0(v5, v3);
    v6 = (uint **)v2[27];
    if ( v6 )
      Function_2012af0(*v6, v3);
    result = v2[42];
    if ( result )
      result = Function_2021fe0(result, v3);
    ++v4;
    ++v2;
  }
  while ( v4 < 15 );
  return result;
}

//----- (021DC90C) --------------------------------------------------------
uint **__fastcall Function_21dc90c(uint **result, int a2)
{
  uint **v2;
  int v3;
  int v4;
  int v5;

  v2 = result;
  v3 = a2;
  v4 = 0;
  do
  {
    if ( v4 != 10 )
    {
      v5 = (int)v2[12];
      if ( v5 )
        Function_2021fe0(v5, v3);
      result = (uint **)v2[27];
      if ( result )
        result = (uint **)Function_2012af0(*result, v3);
    }
    ++v4;
    ++v2;
  }
  while ( v4 < 15 );
  return result;
}

//----- (021DC93C) --------------------------------------------------------
uint **__fastcall Function_21dc93c(uint **result, int a2)
{
  uint **v2;
  int v3;
  int v4;
  int v5;

  v2 = result;
  v3 = a2;
  v4 = 0;
  do
  {
    if ( v4 != 9 )
    {
      v5 = (int)v2[12];
      if ( v5 )
        Function_2021fe0(v5, v3);
      result = (uint **)v2[27];
      if ( result )
        result = (uint **)Function_2012af0(*result, v3);
    }
    ++v4;
    ++v2;
  }
  while ( v4 < 15 );
  return result;
}

//----- (021DC96C) --------------------------------------------------------
int __fastcall Function_21dc96c(int a1, int a2, int a3)
{
  int v3;
  int result;

  v3 = a3;
  result = Function_21d86e0(*(uint *)(a3 + 8));
  if ( result == 4 )
  {
    if ( Function_21d86d8(*(uint *)(v3 + 8)) == 3 )
    {
      result = Function_200aae0(4, 0, -16, 63, 2);
    }
    else
    {
      result = Function_21d86d8(*(uint *)(v3 + 8));
      if ( result == 1 )
        result = Function_200aae0(4, -16, 0, 63, 2);
    }
  }
  return result;
}

//----- (021DC9BC) --------------------------------------------------------
int (*__fastcall Function_21dc9bc(int *a1, int a2, int a3))()
{
  int v3;
  int *v4;
  int v5;
  int v6;
  int v7;
  int (*result)();

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = Function_21dca5c(a3);
  v7 = Function_21dcaa0(v3, v5);
  *v4 = v6;
  v4[1] = v7;
  v4[8] = 0;
  v4[9] = Function_21dcaf4();
  v4[2] = (int)Function_21dcaf8;
  v4[3] = (int)Function_21dcb6c;
  v4[4] = (int)Function_21dcba8;
  v4[5] = (int)Function_21dcbd8;
  v4[6] = (int)Function_21dccd8;
  result = Function_21dcd04;
  v4[7] = (int)Function_21dcd04;
  return result;
}

//----- (021DCA14) --------------------------------------------------------
int __fastcall Function_21dca14(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_21dcacc(*a1);
  return Function_21dcae0(v1[1]);
}

//----- (021DCA28) --------------------------------------------------------
int __fastcall Function_21dca28(int a1)
{
  return *(uint *)(*(uint *)a1 + 4);
}

//----- (021DCA30) --------------------------------------------------------
int *__fastcall Function_21dca30(int *result, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = *result;
  if ( a2 >= 3 )
    result = (int *)ErrorHandler();
  *(uint *)(v3 + 4) = v2;
  return result;
}

//----- (021DCA44) --------------------------------------------------------
int __fastcall Function_21dca44(int a1, int a2, int a3)
{
  int result;

  result = *(uint *)(a1 + 4);
  *(uint *)(result + 4) = a2;
  *(uint *)(result + 8) = a3;
  return result;
}

//----- (021DCA4C) --------------------------------------------------------
int __fastcall Function_21dca4c(int a1, int a2)
{
  int result;

  result = *(uint *)(a1 + 4);
  *(uint *)(result + 12) = a2;
  return result;
}

//----- (021DCA54) --------------------------------------------------------
int __fastcall Function_21dca54(int a1, int a2)
{
  int result;

  result = *(uint *)(a1 + 4);
  *(uint *)(result + 16) = a2;
  return result;
}

//----- (021DCA5C) --------------------------------------------------------
uchar *__fastcall Function_21dca5c(uint a1, int a2)
{
  int v2;
  uchar *v3;

  v2 = a2;
  v3 = (uchar *)malloc(a1, 12);
  if ( !v3 )
    ErrorHandler();
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  v3[4] = 0;
  v3[5] = 0;
  v3[6] = 0;
  v3[7] = 0;
  v3[8] = 0;
  v3[9] = 0;
  v3[10] = 0;
  v3[11] = 0;
  *(uint *)v3 = Function_21d13ec(v2);
  *((uint *)v3 + 2) = Function_21d1410(v2, 5);
  return v3;
}

//----- (021DCAA0) --------------------------------------------------------
int *__fastcall Function_21dcaa0(uint a1, int a2)
{
  int v2;
  int *v3;
  int *v4;
  int v5;

  v2 = a2;
  v3 = (int *)malloc(a1, 20);
  if ( !v3 )
    ErrorHandler();
  v4 = v3;
  v5 = 20;
  do
  {
    *(uchar *)v4 = 0;
    v4 = (int *)((char *)v4 + 1);
    --v5;
  }
  while ( v5 );
  *v3 = Function_21d13fc(v2);
  return v3;
}

//----- (021DCACC) --------------------------------------------------------
uint __fastcall Function_21dcacc(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return free(v1);
}

//----- (021DCAE0) --------------------------------------------------------
uint __fastcall Function_21dcae0(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return free(v1);
}

//----- (021DCAF4) --------------------------------------------------------
int Function_21dcaf4()
{
  return 0;
}

//----- (021DCAF8) --------------------------------------------------------
int __fastcall Function_21dcaf8(int a1, uint *a2)
{
  int v2;
  uint *v3;
  int *v4;
  int v5;

  v2 = a1;
  v3 = a2;
  v4 = (int *)malloc(*(uint *)(a1 + 4), 52);
  if ( !v4 )
    ErrorHandler();
  Call_FillMemWithValue(v4, 0, 0x34u);
  *(uint *)(v2 + 8) = v4;
  v5 = *(uint *)(*v3 + 5956);
  if ( v5 )
  {
    if ( (uint)(v5 - 1) > 1 )
      v3[1] = 2;
    else
      v3[1] = 1;
  }
  else
  {
    v3[1] = 0;
  }
  v4[1] = Function_21dd900(*(uint *)(v2 + 4), v3, v4 + 3);
  v4[2] = Function_21dd908(*(uint *)(v2 + 4), v3, v4 + 4);
  Function_21ddabc(v4, v3, *(uint *)(v2 + 4));
  *v4 = v3[1];
  return 1;
}

//----- (021DCB6C) --------------------------------------------------------
int __fastcall Function_21dcb6c(uint *a1, int a2)
{
  uint *v2;
  int v3;
  uint *v4;

  v2 = a1;
  v3 = a2;
  v4 = (uint *)a1[2];
  if ( a1[3] == 1 )
    return 1;
  if ( a1[4] == 1 )
    return 0;
  if ( *v4 != *(uint *)(a2 + 4) )
  {
    Function_21ddb68(a1[2]);
    Function_21ddabc(v4, v3, v2[1]);
    *v4 = *(uint *)(v3 + 4);
  }
  return 0;
}

//----- (021DCBA8) --------------------------------------------------------
int __fastcall Function_21dcba8(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = *(uint *)(a1 + 8);
  v3 = *(uint *)(v2 + 4);
  if ( v3 )
    free(v3);
  v4 = *(uint *)(v2 + 8);
  if ( v4 )
    free(v4);
  Function_21ddb68(v2);
  free(v2);
  *(uint *)(v1 + 8) = 0;
  return 1;
}

//----- (021DCBD8) --------------------------------------------------------
int __fastcall Function_21dcbd8(int a1, uint *a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int v6;
  int v7;
  int *v8;
  uint *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int result;
  int v15;

  v4 = a1;
  v5 = a2;
  v15 = *(uint *)(a4 + 8);
  v6 = a3;
  v7 = a2[2];
  switch ( (uchar)*a2 )
  {
    case 0u:
      v8 = (int *)malloc(a2[1], 2116);
      v5[2] = v8;
      Call_FillMemWithValue(v8, 0, 0x844u);
      v9 = (uint *)v5[2];
      *v9 = *(uint *)(v6 + 4);
      v9[513] = Function_21d5868(v5[1], 0, v10, v11);
      v9[514] = Function_21d5890(v5[1], 0);
      ++*v5;
      goto LABEL_13;
    case 1u:
      v12 = a2[1];
      Function_21dcdd0(v7, a1);
      Function_21dd710(v5[2], v6, v15, v5[1]);
      Function_21dd9e8(v5[2], v15);
      Function_21ddb8c(v7);
      Function_21dd964(v7, v4);
      if ( *(uint *)(v4 + 12) )
        Function_21dd554(v7, v4, v6, 1);
      else
        Function_21dd490(v7, v4, v6, 1);
      ++*v5;
      goto LABEL_13;
    case 2u:
      if ( *(uint *)(a1 + 12) )
        v13 = Function_21dd5e4(a2[2], a1);
      else
        v13 = Function_21dd508(a2[2], a1);
      if ( v13 )
        ++*v5;
      goto LABEL_13;
    case 3u:
      Function_21ddbcc(a2[2]);
      result = 1;
      break;
    default:
LABEL_13:
      result = 0;
      break;
  }
  return result;
}

//----- (021DCCD8) --------------------------------------------------------
int __fastcall Function_21dccd8(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = *(uint *)(a4 + 8);
  v8 = *(uint *)(a2 + 8);
  Function_21ddc14();
  Function_21dda80(v8, v5, v6, v7, *(uint *)(v4 + 4));
  return 0;
}

//----- (021DCD04) --------------------------------------------------------
int __fastcall Function_21dcd04(int a1, uint *a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = a2[2];
  switch ( (uchar)*a2 )
  {
    case 0u:
      Function_21ddb8c(a2[2]);
      if ( *(uint *)(v4 + 12) )
        Function_21dd554(v6, v4, v5, 0);
      else
        Function_21dd490(v6, v4, v5, 0);
      ++*v3;
      goto LABEL_14;
    case 1u:
      if ( *(uint *)(a1 + 12) )
        v7 = Function_21dd5e4(a2[2], a1);
      else
        v7 = Function_21dd508(a2[2], a1);
      if ( v7 )
        ++*v3;
      goto LABEL_14;
    case 2u:
      Function_21dd8b4(a2[2]);
      Function_21dce20(v6, v4);
      ++*v3;
      goto LABEL_14;
    case 3u:
      Function_201ff0c(2u, 1);
      free(*(uint *)(v6 + 2052));
      free(*(uint *)(v6 + 2056));
      free(v3[2]);
      v3[2] = 0;
      ++*v3;
      goto LABEL_14;
    case 4u:
      result = 1;
      break;
    default:
LABEL_14:
      result = 0;
      break;
  }
  return result;
}

//----- (021DCDD0) --------------------------------------------------------
int __fastcall Function_21dcdd0(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;

  v5 = a3;
  v6 = a2;
  v7 = a1;
  Function_21dce40(a2, a3, a5);
  Function_21dd668(v7, v6, a5);
  Function_21dcfc8(v7, v6, a5);
  Function_21dd1a8(v7, v6, a5);
  Function_21dd2e0(v7, v6, v5, a5);
  Function_21dda48(v7, *(uint *)(v5 + 4));
  return Function_21ddcf4(v6, v5);
}

//----- (021DCE20) --------------------------------------------------------
int __fastcall Function_21dce20(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_21dd6c0();
  Function_21dd3fc(v2);
  Function_21dd2b8(v2);
  return Function_21dd114(v2, v3);
}

//----- (021DCE40) --------------------------------------------------------
int __fastcall Function_21dce40(int *a1, int a2, uint a3)
{
  int *v3;
  int v4;
  uint v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  ushort *v12;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_21d2724(*a1, 0x21u, *(uint **)*a1, 3, 0, 0, 1, a3);
  v6 = Function_21d27b8(*v3, 0x40u, 1, &v12, v5);
  Function_20198c0(
    *(uint *)*v3,
    3,
    (int)(v12 + 6),
    0,
    0,
    (uint)*v12 << 21 >> 24,
    (uint)v12[1] << 21 >> 24);
  free(v6);
  if ( *(uint *)(*(uint *)v4 + 5988) )
  {
    v7 = Function_21d27b8(*v3, 0x41u, 1, &v12, v5);
    Function_20198c0(
      *(uint *)*v3,
      3,
      (int)(v12 + 6),
      13,
      8u,
      (uint)*v12 << 21 >> 24,
      (uint)v12[1] << 21 >> 24);
    free(v7);
  }
  if ( *(uint *)(*(uint *)v4 + 5996) )
  {
    v8 = Function_21d27b8(*v3, 0x42u, 1, &v12, v5);
    Function_20198c0(
      *(uint *)*v3,
      3,
      (int)(v12 + 6),
      28,
      7u,
      (uint)*v12 << 21 >> 24,
      (uint)v12[1] << 21 >> 24);
    free(v8);
  }
  if ( *(uint *)(*(uint *)v4 + 5984) )
  {
    v9 = Function_21d27b8(*v3, 0x43u, 1, &v12, v5);
    Function_20198c0(
      *(uint *)*v3,
      3,
      (int)(v12 + 6),
      11,
      8u,
      (uint)*v12 << 21 >> 24,
      (uint)v12[1] << 21 >> 24);
    free(v9);
  }
  if ( *(uint *)(*(uint *)v4 + 5992) )
  {
    v10 = Function_21d27b8(*v3, 0x44u, 1, &v12, v5);
    Function_20198c0(
      *(uint *)*v3,
      3,
      (int)(v12 + 6),
      25,
      0x10u,
      (uint)*v12 << 21 >> 24,
      (uint)v12[1] << 21 >> 24);
    free(v10);
  }
  return Function_201c3c0(*(uint *)*v3, 3);
}

//----- (021DCFC8) --------------------------------------------------------
int *__fastcall Function_21dcfc8(int a1, int *a2, uint a3)
{
  int *v3;
  int v4;
  uint v5;
  int v6;
  int *result;

  v3 = (int *)*a2;
  v4 = a1;
  v5 = a3;
  v6 = Function_21d26e0(*a2);
  *(uint *)(v4 + 180) = Function_2009a4c(v3[80], v6, 0x6Cu, 1, 6108, 1, v5);
  Function_200a3dc(*(int **)(v4 + 180));
  Function_2009d4c(*(int **)(v4 + 180));
  *(uint *)(v4 + 188) = Function_2009bc4(v3[82], v6, 0x6Au, 1, 6106, 2u, v5);
  *(uint *)(v4 + 192) = Function_2009bc4(v3[83], v6, 0x6Bu, 1, 6107, 3u, v5);
  *(uint *)(v4 + 208) = Function_2009a4c(v3[80], v6, 0x5Du, 1, 6093, 1, v5);
  Function_200a3dc(*(int **)(v4 + 208));
  Function_2009d4c(*(int **)(v4 + 208));
  *(uint *)(v4 + 212) = Function_2009b04(v3[81], v6, 0xEu, 0, 6014, 1, 5, v5);
  Function_200a640(*(int **)(v4 + 212));
  Function_2009d4c(*(int **)(v4 + 212));
  *(uint *)(v4 + 216) = Function_2009bc4(v3[82], v6, 0x5Bu, 1, 6091, 2u, v5);
  result = Function_2009bc4(v3[83], v6, 0x5Cu, 1, 6092, 3u, v5);
  *(uint *)(v4 + 220) = result;
  return result;
}

//----- (021DD114) --------------------------------------------------------
int __fastcall Function_21dd114(int a1, int ***a2)
{
  int v2;
  int **v3;

  v2 = a1;
  v3 = *a2;
  Function_200a4e4(*(int **)(a1 + 180));
  Function_2009d68(v3[80], *(uint ***)(v2 + 180));
  Function_2009d68(v3[82], *(uint ***)(v2 + 188));
  Function_2009d68(v3[83], *(uint ***)(v2 + 192));
  Function_200a4e4(*(int **)(v2 + 208));
  Function_200a6dc(*(int **)(v2 + 212));
  Function_2009d68(v3[80], *(uint ***)(v2 + 208));
  Function_2009d68(v3[81], *(uint ***)(v2 + 212));
  Function_2009d68(v3[82], *(uint ***)(v2 + 216));
  return Function_2009d68(v3[83], *(uint ***)(v2 + 220));
}

//----- (021DD1A8) --------------------------------------------------------
int __fastcall Function_21dd1a8(int a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int result;
  int v11;
  char *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  char v18;
  int v19;

  v19 = a4;
  v4 = *(uint **)a2;
  v5 = a1;
  v6 = a3;
  Function_20093b4(
    (int)&v18,
    6093,
    6014,
    6091,
    6092,
    -1,
    -1,
    0,
    1,
    *(uint *)(*(uint *)a2 + 320),
    *(uint *)(*(uint *)a2 + 324),
    *(uint *)(*(uint *)a2 + 328),
    *(uint *)(*(uint *)a2 + 332),
    0,
    0);
  v11 = v4[79];
  v12 = &v18;
  v15 = 31;
  v16 = 1;
  v13 = 655360;
  v14 = 393216;
  v17 = v6;
  *(uint *)(v5 + 200) = Function_2021b90(&v11);
  Function_2021d6c(*(uint *)(v5 + 200), 2u);
  Function_20093b4((int)&v18, 6108, 6014, 6106, 6107, -1, -1, 0, 0, v4[80], v4[81], v4[82], v4[83], 0, 0);
  v7 = v4[79];
  v8 = 0;
  v11 = v7;
  v12 = &v18;
  v15 = 31;
  v16 = 1;
  v17 = v6;
  v13 = 0;
  v14 = 0;
  do
  {
    v9 = Function_2021b90(&v11);
    *(uint *)(v5 + 4) = v9;
    Function_2021cac(v9, 0);
    result = Function_2021fe0(*(uint *)(v5 + 4), 1);
    ++v8;
    v5 += 4;
  }
  while ( v8 < 44 );
  return result;
}

//----- (021DD2B8) --------------------------------------------------------
int __fastcall Function_21dd2b8(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  Function_2021bd4(*(uint *)(a1 + 200));
  v2 = 0;
  *(uint *)(v1 + 200) = 0;
  do
  {
    result = Function_2021bd4(*(uint *)(v1 + 4));
    *(uint *)(v1 + 4) = 0;
    ++v2;
    v1 += 4;
  }
  while ( v2 < 44 );
  return result;
}

//----- (021DD2E0) --------------------------------------------------------
uint __fastcall Function_21dd2e0(uint *a1, uint *a2, int a3, int a4)
{
  uint *v4;
  uint *v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  int v10;
  uint v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  uint result;
  char v18;
  int v19;
  int v20;
  uchar *v21;
  int v22;
  uint v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;

  v4 = a1;
  v5 = a2;
  v6 = a4;
  v7 = *a2;
  if ( !a1[50] )
    ErrorHandler();
  v8 = (int *)Function_2009dc8(*(uint *)(*v5 + 324), 6014);
  v19 = *(uint *)(v7 + 336);
  v21 = Function_200a72c(v8, 0);
  v25 = 1;
  v26 = 30;
  v27 = 1;
  v28 = v6;
  v18 = Function_201fab4(v21, 1);
  v9 = Function_21d4d6c(*(uint *)(v7 + 336), 0x10u, 2u);
  v10 = v9;
  v11 = Function_21d4dac(*(uint *)(v7 + 336), v9, 697, 0x23u);
  v20 = v10;
  v12 = v4[50];
  v23 = -(v11 >> 1);
  v24 = -8;
  v22 = v12;
  v4[51] = Function_21d4ca0((int)&v19);
  Function_2012a60(*(uint **)v4[51], v18 + 2);
  Function_21d4da0(v10);
  v13 = 0;
  do
  {
    v14 = Function_21d4d6c(*(uint *)(v7 + 336), 9u, 2u);
    v15 = v14;
    v16 = Function_21d4dac(*(uint *)(v7 + 336), v14, 697, v13 + 36);
    v22 = 0;
    v23 = ((uint)(72 - v16) >> 1) + 8;
    v24 = 32;
    v20 = v15;
    v4[56] = Function_21d4ca0((int)&v19);
    Function_2012a60(*(uint **)v4[56], v18 + 2);
    result = Function_21d4da0(v15);
    ++v13;
    ++v4;
  }
  while ( v13 < 3 );
  return result;
}

//----- (021DD3FC) --------------------------------------------------------
int __fastcall Function_21dd3fc(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  Function_21d4d1c(*(int ***)(a1 + 204));
  v2 = 0;
  do
  {
    result = Function_21d4d1c(*(int ***)(v1 + 224));
    ++v2;
    v1 += 4;
  }
  while ( v2 < 3 );
  return result;
}

//----- (021DD420) --------------------------------------------------------
int __fastcall Function_21dd420(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  Function_2021fe0(*(uint *)(a1 + 200), 1);
  Function_2012af0(**(uint ***)(v1 + 204), 1);
  v2 = 0;
  do
  {
    result = Function_2012af0(**(uint ***)(v1 + 224), 1);
    ++v2;
    v1 += 4;
  }
  while ( v2 < 3 );
  return result;
}

//----- (021DD458) --------------------------------------------------------
int __fastcall Function_21dd458(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  Function_2021fe0(*(uint *)(a1 + 200), 0);
  Function_2012af0(**(uint ***)(v1 + 204), 0);
  v2 = 0;
  do
  {
    result = Function_2012af0(**(uint ***)(v1 + 224), 0);
    ++v2;
    v1 += 4;
  }
  while ( v2 < 3 );
  return result;
}

//----- (021DD490) --------------------------------------------------------
int __fastcall Function_21dd490(int a1, int *a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;

  v4 = a3;
  v5 = a2;
  v6 = a4;
  Function_21dd420(a1);
  if ( Function_21e2a54(*(uint *)(v4 + 8)) )
  {
    if ( v6 )
      Function_21d23f8((uint *)(*v5 + 364), 1, -16, 0, 0, 16, 42, 47, 0);
    else
      Function_21d23f8((uint *)(*v5 + 364), 1, 0, -16, 16, 0, 42, 47, 0);
  }
  return Function_21d24fc(*v5, *v5 + 364);
}

//----- (021DD508) --------------------------------------------------------
int __fastcall Function_21dd508(int a1, int *a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int result;

  v4 = a1;
  v5 = a2;
  v6 = a4;
  v7 = Function_21e2a54(*(uint *)(a3 + 8));
  v8 = *v5;
  if ( v7 )
    v9 = Function_21d2424((uint *)(v8 + 364));
  else
    v9 = Function_21d24ec(v8 + 364);
  if ( v9 )
  {
    if ( v6 )
      Function_21dd458(v4);
    result = 1;
  }
  else
  {
    Function_21d24fc(*v5, *v5 + 364);
    result = 0;
  }
  return result;
}

//----- (021DD554) --------------------------------------------------------
uint *__fastcall Function_21dd554(int a1, int *a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  uint *result;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  Function_21dd420(a1);
  if ( !v7 )
    Function_21d2648((uint *)(v4 + 2068), 40, v5[1], 120, v5[2], v5[4]);
  result = (uint *)Function_21e2a54(*(uint *)(v6 + 8));
  if ( result )
  {
    if ( v7 )
      result = Function_21d23f8((uint *)(*v5 + 364), v5[4] & 0xFF, -16, 0, 0, 16, 42, 47, 0);
    else
      result = Function_21d23f8((uint *)(*v5 + 364), v5[4] & 0xFF, 0, -16, 16, 0, 42, 47, 0);
  }
  return result;
}

//----- (021DD5E4) --------------------------------------------------------
int __fastcall Function_21dd5e4(int a1, int *a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int *v11;
  int v13;
  int v14;
  int v15;

  v15 = a4;
  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( a4 )
  {
    v13 = 1;
  }
  else
  {
    v13 = Function_21d2664((uint *)(a1 + 2068));
    Function_21d2164(*v5, *(uint *)(v4 + 2068), *(uint *)(v4 + 2072));
  }
  v8 = Function_21e2a54(*(uint *)(v6 + 8));
  v9 = *v5;
  if ( v8 )
    v14 = Function_21d2424((uint *)(v9 + 364));
  else
    v14 = Function_21d24ec(v9 + 364);
  v10 = 0;
  v11 = &v13;
  do
  {
    if ( !*v11 )
      break;
    ++v10;
    ++v11;
  }
  while ( v10 < 2 );
  if ( v10 != 2 )
    return 0;
  if ( v7 == 1 )
    Function_21dd458(v4);
  return 1;
}

//----- (021DD668) --------------------------------------------------------
int __fastcall Function_21dd668(uint *a1, int *a2, uint a3)
{
  int *v3;
  uint *v4;
  uint v5;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  Function_201ada4_ClearTextBox(*a2 + 4, 0);
  v4[509] = Function_21d2808(*v3, 0x1Eu, 1, v4 + 510, v5);
  v4[511] = Function_21d2808(*v3, 0x1Fu, 1, v4 + 512, v5);
  return Function_201c2b4(*v3 + 4, 8);
}

//----- (021DD6C0) --------------------------------------------------------
int __fastcall Function_21dd6c0(int *a1, uint ***a2)
{
  uint ***v2;
  int *v3;

  v2 = a2;
  v3 = a1;
  Function_201ada4_ClearTextBox((int)(*a2 + 1), 0);
  Function_2019ebc(**v2, 1u);
  free(v3[509]);
  v3[509] = 0;
  v3[510] = 0;
  free(v3[511]);
  v3[511] = 0;
  v3[512] = 0;
  return Function_201c2b4((int)(*v2 + 1), 0);
}

//----- (021DD710) --------------------------------------------------------
uint __fastcall Function_21dd710(int *a1, int *a2, uint *a3, uint a4)
{
  uint *v4;
  int *v5;
  int v6;
  int v7;
  int i;
  uint v9;
  int v10;
  uint v11;
  int v12;
  int v13;
  int j;
  uint v15;
  int v16;
  int *v18;
  uint v19;
  int v20;
  uint v21;

  v4 = a3;
  v5 = a1;
  v18 = a2;
  v19 = a4;
  Function_21dd8b4(a1);
  v5[526] = Function_21d5948((int)(v5 + 59), 0x1Eu, 0x1Eu, v5[514], v4 + 7, v4[1], v4[3]);
  v6 = v4[8] - 1 + v4[3];
  v7 = malloc2(v19, v6);
  for ( i = 0; i < v6; ++i )
  {
    v9 = v4[3];
    if ( i >= v9 )
      v10 = *(uint *)(v4[7] + 4 * (i - v9));
    else
      LOBYTE(v10) = *(uchar *)(v4[1] + i);
    *(uchar *)(v7 + i) = v10;
  }
  v5[528] = Function_21d5948((int)(v5 + 284), 0x1Eu, 0x1Eu, v5[514], v4 + 11, v7, v6);
  free(v7);
  Function_21d5214((int)(v5 + 59), 30, 30);
  Function_21d5214((int)(v5 + 284), 30, 30);
  if ( Function_21d37bc(*v18) == 349 )
  {
    v21 = 5;
    v11 = 4;
    v20 = 14;
  }
  else
  {
    v21 = 1;
    v11 = 0;
    v20 = 32;
  }
  v5[49] = 0;
  v5[49] = Function_21d5a20((int)(v5 + 1), v5[49], 44, 92, v20, 5, 5, v5[513], v4 + 5, 2u, v11, v4[2], v4[4], v5 + 525);
  v12 = v4[6] - 1 + v4[4];
  v13 = malloc2(v19, v12);
  for ( j = 0; j < v12; ++j )
  {
    v15 = v4[4];
    if ( j >= v15 )
      v16 = *(uint *)(v4[5] + 4 * (j - v15));
    else
      LOBYTE(v16) = *(uchar *)(v4[2] + j);
    *(uchar *)(v13 + j) = v16;
  }
  v5[49] = Function_21d5a20((int)(v5 + 1), v5[49], 44, 92, v20, 5, 5, v5[513], v4 + 9, 3u, v21, v13, v12, v5 + 527);
  return free(v13);
}

//----- (021DD8B4) --------------------------------------------------------
int __fastcall Function_21dd8b4(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  Call_FillMemWithValue((int *)(a1 + 236), 0, 0x384u);
  Call_FillMemWithValue((int *)(v1 + 1136), 0, 0x384u);
  v2 = 0;
  if ( *(uint *)(v1 + 196) > 0 )
  {
    v3 = v1;
    do
    {
      Function_2021cac(*(uint *)(v3 + 4), 0);
      ++v2;
      v3 += 4;
    }
    while ( v2 < *(uint *)(v1 + 196) );
  }
  result = 0;
  *(uint *)(v1 + 196) = 0;
  return result;
}

//----- (021DD900) --------------------------------------------------------
int __fastcall Function_21dd900(int a1, int a2, uint *a3)
{
  int result;

  result = 0;
  *a3 = 0;
  return result;
}

//----- (021DD908) --------------------------------------------------------
int __fastcall Function_21dd908(uint a1, int a2, int *a3)
{
  int v3;
  int *v4;
  int v5;
  short *v6;
  int result;
  int v8;
  short *v9;
  short v10;

  v3 = a2;
  v4 = a3;
  v5 = 0;
  if ( !*(uint *)(*(uint *)a2 + 5992) )
  {
    v6 = &word_21E9D7A;
    do
    {
      ++v6;
      ++v5;
    }
    while ( (ushort)*v6 != 0xFFFF );
  }
  if ( v5 )
    result = malloc(a1, v5);
  else
    result = 0;
  *v4 = v5;
  v8 = 0;
  if ( !*(uint *)(*(uint *)v3 + 5992) )
  {
    v9 = &word_21E9D7A;
    do
    {
      v10 = *v9;
      ++v9;
      *(uchar *)(result + v8++) = v10;
    }
    while ( (ushort)*v9 != 0xFFFF );
  }
  return result;
}

//----- (021DD964) --------------------------------------------------------
int __fastcall Function_21dd964(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = a1;
  Function_201ada4_ClearTextBox(*a2 + 4, 0);
  Function_21d517c(
    *v2 + 4,
    *(uint *)(*(uint *)(v3 + 2048) + 20),
    8 * *(ushort *)(*(uint *)(v3 + 2048) + 2) & 0xFFFF,
    8 * **(ushort **)(v3 + 2048) & 0xFFFF,
    5u,
    v3 + 1136,
    0x1Eu,
    0x1Eu,
    0x59u,
    0x1Eu);
  Function_21d517c(
    *v2 + 4,
    *(uint *)(*(uint *)(v3 + 2040) + 20),
    8 * *(ushort *)(*(uint *)(v3 + 2040) + 2) & 0xFFFF,
    8 * **(ushort **)(v3 + 2040) & 0xFFFF,
    5u,
    v3 + 236,
    0x1Eu,
    0x1Eu,
    0x59u,
    0x1Eu);
  return Function_201a954(*v2 + 4, v4);
}

//----- (021DD9E8) --------------------------------------------------------
int __fastcall Function_21dd9e8(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  if ( a1[525] || a1[526] || a1[527] || a1[528] )
  {
    Function_2021cac(a1[50], 0);
    result = Function_20129d0(*(uint **)v1[51], 0);
  }
  else
  {
    Function_2021cac(a1[50], 1);
    result = Function_20129d0(*(uint **)v1[51], 1);
  }
  return result;
}

//----- (021DDA48) --------------------------------------------------------
int __fastcall Function_21dda48(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    if ( v4 == v3 )
      result = Function_20129d0(**(uint ***)(v2 + 224), 1);
    else
      result = Function_20129d0(**(uint ***)(v2 + 224), 0);
    ++v4;
    v2 += 4;
  }
  while ( v4 < 3 );
  return result;
}

//----- (021DDA80) --------------------------------------------------------
int *__fastcall Function_21dda80(int *result, uint *a2, int *a3, int **a4, uint a5)
{
  uint *v5;
  int *v6;
  int **v7;
  uint *v8;

  v5 = (uint *)result;
  v6 = a3;
  v7 = a4;
  v8 = a2;
  if ( (int *)*result != *a4 )
  {
    Function_21dd710(result, a3, a4, a5);
    Function_21dd964((int)v5, v8);
    Function_21dda48((int)v5, v6[1]);
    Function_21dd9e8(v5);
    result = *v7;
    *v5 = (uint)*v7;
  }
  return result;
}

//----- (021DDABC) --------------------------------------------------------
uint __fastcall Function_21ddabc(uint **a1, int *a2, int a3)
{
  int *v3;
  uint **v4;
  int v5;
  int v6;
  int v7;
  uint result;
  int v9;
  int v10;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = Function_21d37bc(*a2);
  v7 = v3[1];
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      v9 = 6;
      Function_21d57b4(v4 + 5, v6, 1, v5);
    }
    else if ( v7 == 2 )
    {
      v9 = 7;
      Function_21d57b4(v4 + 5, v6, 2, v5);
    }
    else
    {
      ErrorHandler();
      Function_21d57b4(v4 + 5, v6, v10, v5);
    }
  }
  else
  {
    v9 = 5;
    Function_21d57b4(v4 + 5, v6, 0, v5);
  }
  Function_21d57b4(v4 + 7, v6, v9, v5);
  if ( Function_21d3428((uint **)*v3) )
  {
    Function_21d57b4(v4 + 9, v6, 4, v5);
    result = Function_21d57b4(v4 + 11, v6, 9, v5);
  }
  else
  {
    Function_21d57b4(v4 + 9, v6, 3, v5);
    result = Function_21d57b4(v4 + 11, v6, 8, v5);
  }
  return result;
}

//----- (021DDB68) --------------------------------------------------------
int __fastcall Function_21ddb68(int *a1)
{
  int *v1;

  v1 = a1;
  Function_21d5844(a1 + 5);
  Function_21d5844(v1 + 7);
  Function_21d5844(v1 + 9);
  return Function_21d5844(v1 + 11);
}

//----- (021DDB8C) --------------------------------------------------------
int __fastcall Function_21ddb8c(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;

  v1 = a1;
  *(uint *)(a1 + 2060) = 0;
  *(uint *)(a1 + 2064) = 0;
  Function_201ff0c(2u, 0);
  result = *(uint *)(v1 + 196);
  v3 = 0;
  if ( result > 0 )
  {
    v4 = v1;
    do
    {
      Function_2021cac(*(uint *)(v4 + 4), 0);
      result = *(uint *)(v1 + 196);
      ++v3;
      v4 += 4;
    }
    while ( v3 < result );
  }
  return result;
}

//----- (021DDBCC) --------------------------------------------------------
int __fastcall Function_21ddbcc(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;

  v1 = a1;
  G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 10, 8, 0, 16);
  Function_201ff0c(2u, 1);
  result = *(uint *)(v1 + 196);
  v3 = 0;
  if ( result > 0 )
  {
    v4 = v1;
    do
    {
      Function_2021cac(*(uint *)(v4 + 4), 0);
      result = *(uint *)(v1 + 196);
      ++v3;
      v4 += 4;
    }
    while ( v3 < result );
  }
  return result;
}

//----- (021DDC14) --------------------------------------------------------
int __fastcall Function_21ddc14(uint *a1)
{
  uint *v1;
  int v2;
  uint *v3;
  int v4;
  long long v5;
  int result;
  int v7;
  uint *v8;

  v1 = a1;
  if ( a1[515] >= 32 )
  {
    v2 = 0;
    a1[515] = 0;
    if ( a1[516] )
    {
      Function_201ff0c(2u, 1);
      v1[516] = 0;
    }
    else
    {
      if ( a1[49] > 0 )
      {
        v3 = a1;
        do
        {
          Function_2021cac(v3[1], 1);
          ++v2;
          ++v3;
        }
        while ( v2 < v1[49] );
      }
      v1[516] = 1;
    }
  }
  v4 = v1[515];
  if ( v4 >= 16 )
    v4 = 32 - v4;
  HIDWORD(v5) = (ull)(v4 << 12) >> 16;
  LODWORD(v5) = v4 << 28;
  REG_BLDALPHA = (FX_Div((v5 + 2048) >> 12, 0x10000) >> 12) | 0x1000;
  result = 2060;
  if ( ++v1[515] >= 32 )
  {
    if ( v1[516] )
    {
      result = v1[49];
      v7 = 0;
      if ( result > 0 )
      {
        v8 = v1;
        do
        {
          Function_2021cac(v8[1], 0);
          result = v1[49];
          ++v7;
          ++v8;
        }
        while ( v7 < result );
      }
    }
    else
    {
      result = Function_201ff0c(2u, 0);
    }
  }
  return result;
}

//----- (021DDCF4) --------------------------------------------------------
int __fastcall Function_21ddcf4(int *a1, int *a2)
{
  int *v2;
  int *v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = a2;
  v4 = Function_21d2170(*a1);
  v5 = Function_21d37bc(*v3);
  Function_21d1890(*v2, *v3, v5, 2, 40, 120);
  return Function_2007dec(v4, 6u, 0);
}

//----- (021DDD2C) --------------------------------------------------------
int (*__fastcall Function_21ddd2c(int *a1, int a2, int a3))()
{
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int (*result)();

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Function_21ddda4(a3);
  v7 = Function_21dddf0(v4, v5);
  v8 = Function_21dde18(v4, v5);
  *v3 = v6;
  v3[1] = v7;
  v3[8] = v8;
  v3[9] = Function_21dde48();
  v3[2] = (int)Function_21dde4c;
  v3[3] = (int)Function_21dde84;
  v3[4] = (int)Function_21ddeb4;
  v3[5] = (int)Function_21ddec8;
  v3[6] = (int)Function_21ddf80;
  result = Function_21ddfb4;
  v3[7] = (int)Function_21ddfb4;
  return result;
}

//----- (021DDD8C) --------------------------------------------------------
int __fastcall Function_21ddd8c(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_21dde1c(*a1);
  Function_21dde30(v1[1]);
  return Function_21dde44(v1[8]);
}

//----- (021DDDA4) --------------------------------------------------------
uchar *__fastcall Function_21ddda4(uint a1, int a2)
{
  int v2;
  uchar *v3;

  v2 = a2;
  v3 = (uchar *)malloc(a1, 12);
  if ( !v3 )
    ErrorHandler();
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  v3[4] = 0;
  v3[5] = 0;
  v3[6] = 0;
  v3[7] = 0;
  v3[8] = 0;
  v3[9] = 0;
  v3[10] = 0;
  v3[11] = 0;
  *(uint *)v3 = Function_21d1410(v2, 6);
  *((uint *)v3 + 2) = Function_21d1430(v2, 3);
  *((uint *)v3 + 1) = Function_21d13ec(v2);
  return v3;
}

//----- (021DDDF0) --------------------------------------------------------
uchar *__fastcall Function_21dddf0(uint a1, int a2)
{
  int v2;
  uchar *v3;

  v2 = a2;
  v3 = (uchar *)malloc(a1, 4);
  if ( !v3 )
    ErrorHandler();
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  *(uint *)v3 = Function_21d13fc(v2);
  return v3;
}

//----- (021DDE18) --------------------------------------------------------
int Function_21dde18()
{
  return 0;
}

//----- (021DDE1C) --------------------------------------------------------
uint __fastcall Function_21dde1c(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return free(v1);
}

//----- (021DDE30) --------------------------------------------------------
uint __fastcall Function_21dde30(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return free(v1);
}

//----- (021DDE44) --------------------------------------------------------
void Function_21dde44()
{
  ;
}

//----- (021DDE48) --------------------------------------------------------
int Function_21dde48()
{
  return 0;
}

//----- (021DDE4C) --------------------------------------------------------
int __fastcall Function_21dde4c(int a1, int a2)
{
  int v2;
  int v3;
  int *v4;

  v2 = a1;
  v3 = a2;
  v4 = (int *)malloc(*(uint *)(a1 + 4), 40);
  if ( !v4 )
    ErrorHandler();
  Call_FillMemWithValue(v4, 0, 0x28u);
  *(uint *)(v2 + 8) = v4;
  Function_21de5a4(v4, v3);
  Function_21de2ec(v4, v3, *(uint *)(v2 + 4));
  return 1;
}

//----- (021DDE84) --------------------------------------------------------
int __fastcall Function_21dde84(uint *a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1[2];
  if ( a1[3] == 1 )
    return 1;
  if ( a1[4] == 1 )
    return 0;
  if ( Function_21e33ac(*(uint *)(a2 + 8)) )
    Function_21de334(v3, v2);
  return 0;
}

//----- (021DDEB4) --------------------------------------------------------
int __fastcall Function_21ddeb4(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 8);
  Function_21de484(*(uint *)(a1 + 8));
  free(v1);
  return 1;
}

//----- (021DDEC8) --------------------------------------------------------
int __fastcall Function_21ddec8(uint *a1, uint *a2, int a3, int a4)
{
  uint *v4;
  uint *v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int result;
  int v13;

  v4 = a1;
  v5 = a2;
  v13 = *(uint *)(a4 + 8);
  v6 = a3;
  v7 = a2[2];
  switch ( (uchar)*a2 )
  {
    case 0u:
      v8 = (int *)malloc(a2[1], 44);
      v5[2] = v8;
      Call_FillMemWithValue(v8, 0, 0x2Cu);
      ++*v5;
      goto LABEL_7;
    case 1u:
      Function_21de100(a2[2], a1, a2[1]);
      Function_21de49c(v7, v6, v13);
      v9 = v5[1];
      Function_21de4d4(v7, v4);
      Function_21de058(v7, v4, v6, 1);
      ++*v5;
      goto LABEL_7;
    case 2u:
      v10 = a2[1];
      Function_21de4d4(a2[2], a1);
      if ( Function_21de0c4(v7, v4, v6, 1) )
        ++*v5;
      goto LABEL_7;
    case 3u:
      v11 = a2[1];
      Function_21de4d4(a2[2], a1);
      Function_21d25ac(*v4 + 484, 0);
      result = 1;
      break;
    default:
LABEL_7:
      result = 0;
      break;
  }
  return result;
}

//----- (021DDF80) --------------------------------------------------------
int __fastcall Function_21ddf80(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = *(uint *)(a4 + 8);
  v8 = *(uint *)(a2 + 8);
  Function_21de49c(*(uint *)(a2 + 8), a3, *(uint *)(a4 + 8));
  Function_21de630(v4, v7, v6);
  v9 = *(uint *)(v5 + 4);
  Function_21de4d4(v8, v4);
  return 0;
}

//----- (021DDFB4) --------------------------------------------------------
int __fastcall Function_21ddfb4(uint *a1, uint *a2, int a3)
{
  uint *v3;
  uint *v4;
  int v5;
  int v6;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = a2[2];
  switch ( (uchar)*a2 )
  {
    case 0u:
      Function_21d25ac(*a1 + 484, 1);
      Function_21de058(v6, v4, v5, 0);
      ++*v3;
      goto LABEL_8;
    case 1u:
      if ( Function_21de0c4(a2[2], a1, a3, 0) )
        ++*v3;
      goto LABEL_8;
    case 2u:
      Function_21de128(a2[2], a1, a2[1]);
      ++*v3;
      goto LABEL_8;
    case 3u:
      free(*(uint *)(v6 + 20));
      free(v3[2]);
      ++*v3;
      goto LABEL_8;
    case 4u:
      result = 1;
      break;
    default:
LABEL_8:
      result = 0;
      break;
  }
  return result;
}

//----- (021DE040) --------------------------------------------------------
int __fastcall Function_21de040(int *a1)
{
  return Function_2021fe0(*a1, 1);
}

//----- (021DE04C) --------------------------------------------------------
int __fastcall Function_21de04c(int *a1)
{
  return Function_2021fe0(*a1, 0);
}

//----- (021DE058) --------------------------------------------------------
uint *__fastcall Function_21de058(int *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint *result;

  v4 = a3;
  v5 = a2;
  v6 = a4;
  Function_21de040(a1);
  result = (uint *)Function_21e33a4(*(uint *)(v4 + 8));
  if ( result )
  {
    if ( v6 )
      result = Function_21d23f8((uint *)(*(uint *)v5 + 400), 1, -16, 0, 0, 16, 44, 47, 1);
    else
      result = Function_21d23f8((uint *)(*(uint *)v5 + 400), 1, 0, -16, 16, 0, 44, 47, 1);
  }
  return result;
}

//----- (021DE0C4) --------------------------------------------------------
int __fastcall Function_21de0c4(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int v7;

  v4 = a1;
  v5 = a2;
  v6 = a4;
  if ( Function_21e33a4(*(uint *)(a3 + 8)) )
    v7 = Function_21d2424((uint *)(*(uint *)v5 + 400));
  else
    v7 = Function_200ac1c(2);
  if ( !v7 )
    return 0;
  if ( v6 )
    Function_21de04c(v4);
  return 1;
}

//----- (021DE100) --------------------------------------------------------
int __fastcall Function_21de100(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a2;
  v4 = a3;
  v5 = a1;
  Function_21de13c(a2, a3);
  Function_21de1a4(v5, v3, v4);
  return Function_21de258(v5, v3, v4);
}

//----- (021DE128) --------------------------------------------------------
int __fastcall Function_21de128(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_21de2e0();
  return Function_21de224(v2, v3);
}

//----- (021DE13C) --------------------------------------------------------
int __fastcall Function_21de13c(int *a1, uint a2)
{
  int *v2;
  uint v3;
  int v4;
  ushort *v6;

  v2 = a1;
  v3 = a2;
  Function_21d2724(*a1, 0x22u, *(uint **)*a1, 6, 0, 0, 1, a2);
  v4 = Function_21d27b8(*v2, 0x45u, 1, &v6, v3);
  Function_20198c0(
    *(uint *)*v2,
    6,
    (int)(v6 + 6),
    0,
    0,
    (uint)*v6 << 21 >> 24,
    (uint)v6[1] << 21 >> 24);
  free(v4);
  return Function_201c3c0(*(uint *)*v2, 6);
}

//----- (021DE1A4) --------------------------------------------------------
int *__fastcall Function_21de1a4(int a1, int *a2, uint a3)
{
  int *v3;
  int v4;
  uint v5;
  int v6;
  int v7;
  int *v8;
  int *result;

  v3 = (int *)*a2;
  v4 = a1;
  v5 = a3;
  v6 = Function_21d26e0(*a2);
  v7 = v6;
  v8 = Function_2009a4c(v3[80], v6, 0x69u, 1, 6105, 2, v5);
  *(uint *)(v4 + 4) = v8;
  Function_200a3dc(v8);
  Function_2009d4c(*(int **)(v4 + 4));
  *(uint *)(v4 + 12) = Function_2009bc4(v3[82], v7, 0x67u, 1, 6103, 2u, v5);
  result = Function_2009bc4(v3[83], v7, 0x68u, 1, 6104, 3u, v5);
  *(uint *)(v4 + 16) = result;
  return result;
}

//----- (021DE224) --------------------------------------------------------
int __fastcall Function_21de224(int a1, int ***a2)
{
  uint ***v2;
  int **v3;

  v2 = (uint ***)a1;
  v3 = *a2;
  Function_200a4e4(*(int **)(a1 + 4));
  Function_2009d68(v3[80], v2[1]);
  Function_2009d68(v3[82], v2[3]);
  return Function_2009d68(v3[83], v2[4]);
}

//----- (021DE258) --------------------------------------------------------
int __fastcall Function_21de258(int *a1, int *a2, int a3)
{
  int v3;
  int *v4;
  int v5;
  int v6;
  int v8;
  char *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  char v15;

  v3 = *a2;
  v4 = a1;
  v5 = a3;
  Function_20093b4(
    (int)&v15,
    6105,
    2111,
    6103,
    6104,
    -1,
    -1,
    0,
    1,
    *(uint *)(*a2 + 320),
    *(uint *)(*a2 + 324),
    *(uint *)(*a2 + 328),
    *(uint *)(*a2 + 332),
    0,
    0);
  v8 = *(uint *)(v3 + 316);
  v9 = &v15;
  v12 = 31;
  v13 = 2;
  v11 = 786432;
  v14 = v5;
  v10 = 0;
  v6 = Function_2021b90(&v8);
  *v4 = v6;
  return Function_2021d6c(v6, 0);
}

//----- (021DE2E0) --------------------------------------------------------
int __fastcall Function_21de2e0(int *a1)
{
  return Function_2021bd4(*a1);
}

//----- (021DE2EC) --------------------------------------------------------
int __fastcall Function_21de2ec(uint *a1, int a2, uint a3)
{
  uint v3;
  uint *v4;
  int v5;
  uchar *v6;
  int result;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = (uchar *)malloc(a3, 4);
  v4[5] = v6;
  *v6 = -2;
  *(uchar *)(v4[5] + 1) = *v4;
  *(uchar *)(v4[5] + 2) = v4[1];
  *(uchar *)(v4[5] + 3) = 32;
  v4[6] = v5;
  v4[7] = v4;
  result = Function_2023fcc(v4[5], 1u, (int)Function_21de44c, (int)(v4 + 6), v3);
  v4[4] = result;
  return result;
}

//----- (021DE334) --------------------------------------------------------
int __fastcall Function_21de334(int a1, int a2)
{
  uint *v2;
  int v3;
  int result;

  v2 = (uint *)a1;
  v3 = a2;
  Function_202404c(*(int **)(a1 + 16));
  Function_21de3d0(v2, v3);
  *(uchar *)(v2[5] + 1) = *v2;
  result = v2[5];
  *(uchar *)(result + 2) = v2[1];
  return result;
}

//----- (021DE358) --------------------------------------------------------
int __fastcall Function_21de358(int a1, int *a2)
{
  int v2;
  int *v3;
  int result;
  int v5;
  int v6;

  v2 = a1;
  v3 = a2;
  result = (ushort)word_21BF6DE;
  if ( !word_21BF6DE )
  {
    result = Function_21e33bc(a2[2]);
    if ( result == 1 )
    {
      result = Function_21d3998(v3[1]);
      if ( result == 2 )
      {
        result = Function_21dca28(*v3);
        if ( dword_21BF6C4 & 0x20 )
        {
          v5 = result - 1;
          if ( result - 1 < 0 )
            v5 = 0;
          Function_21dca30((int *)*v3, v5);
          Function_21de5a4(v2, v3);
          result = 1;
          *(uint *)(v2 + 36) = 1;
        }
        else if ( dword_21BF6C4 & 0x10 )
        {
          v6 = result + 1;
          if ( result + 1 >= 3 )
            v6 = 2;
          Function_21dca30((int *)*v3, v6);
          Function_21de5a4(v2, v3);
          result = 1;
          *(uint *)(v2 + 36) = 1;
        }
      }
    }
  }
  return result;
}

//----- (021DE3D0) --------------------------------------------------------
int *__fastcall Function_21de3d0(int a1, int *a2)
{
  uint *v2;
  int **v3;
  int *result;
  int v5;
  int v6;

  v2 = (uint *)a1;
  *(uint *)(a1 + 36) = 0;
  v3 = (int **)a2;
  if ( !*(uint *)(a1 + 32) )
    return (int *)Function_21de358(a1, a2);
  result = &dword_21BF6BC;
  if ( word_21BF6DE )
  {
    *v2 = (ushort)word_21BF6D8 - v2[2];
    v2[1] = (ushort)word_21BF6DA - v2[3];
    if ( (int)*v2 < 24 )
      *v2 = 24;
    if ( (int)*v2 > 246 )
      *v2 = 246;
    if ( (int)v2[1] < 64 )
      v2[1] = 64;
    v5 = Function_21de5dc(*v2) + 132;
    if ( (int)v2[1] > v5 )
      v2[1] = v5;
    v6 = s32_div_f(*v2, 85);
    if ( v6 > 2 )
      v6 = 2;
    result = Function_21dca30(*v3, v6);
  }
  else
  {
    v2[8] = 0;
  }
  return result;
}

//----- (021DE44C) --------------------------------------------------------
int __fastcall Function_21de44c(int a1, int a2, int *a3)
{
  int result;
  uint *v4;

  result = *a3;
  v4 = (uint *)a3[1];
  if ( !a2 )
  {
    Function_21e33b4(*(uint *)(result + 8), 1);
    Function_2005748(0x5DDu);
    v4[8] = 1;
    v4[2] = (ushort)word_21BF6D8 - *v4;
    result = (ushort)word_21BF6DA - v4[1];
    v4[3] = result;
  }
  return result;
}

//----- (021DE484) --------------------------------------------------------
int __fastcall Function_21de484(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_2024034(*(uint *)(a1 + 16));
  free(*(uint *)(v1 + 20));
  result = 0;
  *(uint *)(v1 + 20) = 0;
  return result;
}

//----- (021DE49C) --------------------------------------------------------
int __fastcall Function_21de49c(int *a1, int *a2, uint *a3)
{
  int *v3;
  int *v4;
  int v5;
  int v7;
  int v8;

  v3 = a1;
  v4 = a2;
  v7 = *a3 << 12;
  v8 = (a3[1] << 12) + 786432;
  Function_2021c50((uint *)*a1, &v7);
  v5 = Function_21dca28(*v4);
  return Function_2021d6c(*v3, v5);
}

//----- (021DE4D4) --------------------------------------------------------
uint __fastcall Function_21de4d4(uint *a1, int *a2, int *a3, uint a4)
{
  uint *v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint result;
  int v11;
  int v12;
  int v13;
  int v14;
  uint v15;

  v4 = a1;
  v5 = a2;
  v15 = a4;
  v6 = 0;
  v7 = Function_21dca28(*a3);
  v8 = v4[6];
  v9 = v7;
  if ( v8 != v7 || !v4[5] || (result = v4[7], result != v8) )
  {
    v11 = v4[7];
    if ( v11 != v9 )
    {
      v4[6] = v11;
      v4[9] = 0;
    }
    v12 = v4[9];
    if ( v12 )
    {
      if ( v12 == 1 )
      {
        v14 = v4[5];
        if ( v14 )
          free(v14);
        v4[5] = Function_21d27e0(*v5, v4[7] + 15, v4 + 8, v15);
        v4[10] = 0;
        if ( v4[6] >= v4[7] )
          v6 = 2;
        else
          v6 = 1;
        ++v4[9];
      }
      else if ( v12 == 2 )
      {
        v6 = 0;
        v4[9] = 0;
        v4[6] = v4[7];
      }
    }
    else
    {
      v4[7] = v9;
      v13 = v4[5];
      if ( v13 )
        free(v13);
      v4[5] = Function_21d27e0(*v5, v4[6] + 15, v4 + 8, v15);
      v4[10] = 0;
      if ( v4[6] <= v9 )
        v6 = 2;
      else
        v6 = 1;
      ++v4[9];
    }
    result = Function_201dc68(31, 64, *(uint *)(v4[8] + 12) + 32 * v6, 32);
    if ( !result )
      result = ErrorHandler();
  }
  return result;
}

//----- (021DE5A4) --------------------------------------------------------
int __fastcall Function_21de5a4(uint *a1, int *a2)
{
  uint *v2;
  int result;

  v2 = a1;
  result = Function_21dca28(*a2);
  if ( result )
  {
    if ( result == 1 )
    {
      *v2 = 128;
      result = 96;
      v2[1] = 96;
    }
    else if ( result == 2 )
    {
      *v2 = 224;
      result = 128;
      v2[1] = 128;
    }
  }
  else
  {
    *v2 = 32;
    result = 128;
    v2[1] = 128;
  }
  return result;
}

//----- (021DE5DC) --------------------------------------------------------
int __fastcall Function_21de5dc(int a1)
{
  ushort v2;

  if ( a1 < 40 || a1 > 216 )
    return 48;
  v2 = s32_div_f(0x7FFF * (a1 - 40), 176);
  return 48 - ((int)((ll_mul(SLOWORD(Unknown_20f983c[(int)v2 >> 4]), 196608LL) + 2048) >> 12) >> 12);
}

//----- (021DE630) --------------------------------------------------------
int __fastcall Function_21de630(uint **a1, int *a2, int a3)
{
  uint *v3;
  int *v4;
  int result;
  int v6;
  int v7;

  v3 = *a1;
  v4 = a2;
  result = Function_21e33bc(*(uint *)(a3 + 8));
  if ( result == 1 )
  {
    if ( v4[9] )
    {
      result = Function_21d25e8(v3, *v4, v4[1], 32, 32);
    }
    else
    {
      v6 = *v4;
      v7 = v4[1];
      result = Function_21d2574((int)v3);
    }
  }
  return result;
}

//----- (021DE668) --------------------------------------------------------
int (*__fastcall Function_21de668(int *a1, int a2, int a3))()
{
  int v3;
  int *v4;
  int v5;
  int v6;
  int v7;
  int (*result)();

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = Function_21de6e8(a3);
  v7 = Function_21de724(v3, v5);
  *v4 = v6;
  v4[1] = v7;
  v4[8] = 0;
  v4[9] = Function_21de774();
  v4[2] = (int)Function_21de778;
  v4[3] = (int)Function_21de79c;
  v4[4] = (int)Function_21de7f8;
  v4[5] = (int)Function_21de804;
  v4[6] = (int)Function_21de8e4;
  result = Function_21de8e8;
  v4[7] = (int)Function_21de8e8;
  return result;
}

//----- (021DE6C0) --------------------------------------------------------
int __fastcall Function_21de6c0(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_21de74c(*a1);
  return Function_21de760(v1[1]);
}

//----- (021DE6D4) --------------------------------------------------------
int Function_21de6d4()
{
  return 0;
}

//----- (021DE6D8) --------------------------------------------------------
int __fastcall Function_21de6d8(int a1, int a2)
{
  int v2;

  v2 = 1;
  if ( a2 == 1 )
  {
    a2 = 0;
    v2 = 0;
  }
  *(uint *)(a1 + 24) = a2;
  return v2;
}

//----- (021DE6E8) --------------------------------------------------------
int *__fastcall Function_21de6e8(uint a1, int a2)
{
  int v2;
  int *v3;

  v2 = a2;
  v3 = (int *)malloc(a1, 32);
  if ( !v3 )
    ErrorHandler();
  Call_FillMemWithValue(v3, 0, 0x20u);
  *v3 = Function_21d138c(v2);
  v3[1] = Function_21d13ec(v2);
  v3[4] = Function_21d1410(v2, 5);
  return v3;
}

//----- (021DE724) --------------------------------------------------------
uchar *__fastcall Function_21de724(uint a1, int a2)
{
  int v2;
  uchar *v3;

  v2 = a2;
  v3 = (uchar *)malloc(a1, 4);
  if ( !v3 )
    ErrorHandler();
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  *(uint *)v3 = Function_21d13fc(v2);
  return v3;
}

//----- (021DE74C) --------------------------------------------------------
uint __fastcall Function_21de74c(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return free(v1);
}

//----- (021DE760) --------------------------------------------------------
uint __fastcall Function_21de760(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return free(v1);
}

//----- (021DE774) --------------------------------------------------------
int Function_21de774()
{
  return 0;
}

//----- (021DE778) --------------------------------------------------------
int __fastcall Function_21de778(int a1, int a2)
{
  int v2;
  short v3;
  short v4;

  v2 = a2;
  v3 = Function_21d37bc(*(uint *)(a2 + 4));
  Function_21d3434(*(uint *)(v2 + 4), v3);
  v4 = Function_21d36d8(*(uint *)(v2 + 4));
  Function_21d344c(*(uint *)(v2 + 4), v4);
  return 1;
}

//----- (021DE79C) --------------------------------------------------------
int __fastcall Function_21de79c(uint *a1, int a2)
{
  uint *v2;
  int v3;
  ushort v5;

  v2 = a1;
  v3 = a2;
  if ( a1[3] == 1 )
    return 1;
  if ( a1[4] == 1 )
    return 0;
  if ( !*a1 )
  {
    if ( *(uint *)(a2 + 28) == 1 )
    {
      v5 = Function_21d37bc(*(uint *)(a2 + 4));
      Function_20059d0(0xEu, v5, 511, 511, 511, 0);
      *(uint *)(v3 + 28) = 0;
    }
    ++*v2;
  }
  return 0;
}

//----- (021DE7F8) --------------------------------------------------------
int Function_21de7f8()
{
  Function_200592c(0);
  return 1;
}

//----- (021DE804) --------------------------------------------------------
int __fastcall Function_21de804(int a1, uint *a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = a2[2];
  switch ( (uchar)*a2 )
  {
    case 0u:
      v7 = (int *)malloc(a2[1], 116);
      v3[2] = v7;
      Call_FillMemWithValue(v7, 0, 0x74u);
      ++*v3;
      goto LABEL_21;
    case 1u:
      v8 = a2[1];
      Function_21de9a4(a2[2], a1);
      v9 = *(uint *)(v5 + 20);
      if ( v9 )
      {
        if ( v9 == 1 )
        {
          Function_21df374(v6, v4, v5, 1);
        }
        else if ( v9 == 2 )
        {
          Function_21df548(v6, v4, v5, 1);
        }
      }
      else
      {
        Function_21df44c(v6, v4, v5, 1);
      }
      ++*v3;
      goto LABEL_21;
    case 2u:
      v10 = *(uint *)(a3 + 20);
      if ( v10 )
      {
        if ( v10 == 1 )
        {
          a2 = (uint *)Function_21df3f0(a2[2], v4);
        }
        else if ( v10 == 2 )
        {
          a2 = (uint *)Function_21df5d0(a2[2], v4);
        }
      }
      else
      {
        a2 = (uint *)Function_21df4d0(a2[2], v4);
      }
      if ( a2 )
        ++*v3;
      goto LABEL_21;
    case 3u:
      REG_BLDCNT = 0;
      result = 1;
      break;
    default:
LABEL_21:
      result = 0;
      break;
  }
  return result;
}

//----- (021DE8E4) --------------------------------------------------------
int Function_21de8e4()
{
  return 0;
}

//----- (021DE8E8) --------------------------------------------------------
int __fastcall Function_21de8e8(int a1, uint *a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a2[2];
  switch ( (uchar)*a2 )
  {
    case 0u:
      v6 = *(uint *)(a3 + 20);
      if ( v6 )
      {
        if ( v6 == 1 )
        {
          Function_21df374(v5, v4, a3, 0);
        }
        else if ( v6 == 2 )
        {
          Function_21df548(v5, v4, a3, 0);
        }
      }
      else
      {
        Function_21df44c(v5, v4, a3, 0);
      }
      ++*v3;
      goto LABEL_22;
    case 1u:
      v7 = *(uint *)(a3 + 20);
      if ( v7 )
      {
        if ( v7 == 1 )
        {
          a3 = Function_21df3f0(v5, v4);
        }
        else if ( v7 == 2 )
        {
          a3 = Function_21df5d0(v5, v4);
        }
      }
      else
      {
        a3 = Function_21df4d0(v5, v4);
      }
      if ( a3 )
        ++*v3;
      goto LABEL_22;
    case 2u:
      Function_21dea0c(v5, v4);
      ++*v3;
      goto LABEL_22;
    case 3u:
      free(v5);
      ++*v3;
      goto LABEL_22;
    case 4u:
      result = 1;
      break;
    default:
LABEL_22:
      result = 0;
      break;
  }
  return result;
}

//----- (021DE9A4) --------------------------------------------------------
int __fastcall Function_21de9a4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int result;

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = a1;
  Function_21def08(a2, a3, a4);
  Function_21def54(v4, v5);
  Function_21defa8(v7, v4, v6);
  Function_21df214(v7, v4, v5, v6);
  Function_21dea44(v4, v6);
  Function_21deb58(v4, v5, v6);
  result = Function_21d37cc(*(uint *)(v5 + 4));
  if ( result == 2 )
  {
    Function_21ded24(v7, v4, v5, v6);
    result = Function_21df098(v7, v4, v5, v6);
  }
  return result;
}

//----- (021DEA0C) --------------------------------------------------------
int __fastcall Function_21dea0c(int a1, uint ***a2)
{
  uint ***v2;
  int v3;

  v2 = a2;
  v3 = a1;
  Function_21df35c();
  Function_201ada4_ClearTextBox((int)(*v2 + 1), 0);
  Function_21ded68(v3, v2);
  Function_21df1f8(v3);
  Function_21df054(v3, v2);
  return Function_2019ebc(**v2, 1u);
}

//----- (021DEA44) --------------------------------------------------------
int __fastcall Function_21dea44(int *a1, uint a2, int a3, int a4)
{
  int *v4;
  uint v5;
  int v6;
  int v7;
  int v8;
  int v9;
  ushort *v11;
  int v12;

  v12 = a4;
  v4 = a1;
  v5 = a2;
  Function_21d2724(*a1, 0x21u, *(uint **)*a1, 3, 0, 0, 1, a2);
  v6 = Function_21d27b8(*v4, 0x32u, 1, &v11, v5);
  Function_20198c0(
    *(uint *)*v4,
    3,
    (int)(v11 + 6),
    0,
    0,
    (uint)*v11 << 21 >> 24,
    (uint)v11[1] << 21 >> 24);
  free(v6);
  v7 = Function_21d27b8(*v4, 0x33u, 1, &v11, v5);
  Function_20198c0(
    *(uint *)*v4,
    3,
    (int)(v11 + 6),
    0,
    3u,
    (uint)*v11 << 21 >> 24,
    (uint)v11[1] << 21 >> 24);
  free(v7);
  v8 = Function_21d27b8(*v4, 0x34u, 1, &v11, v5);
  Function_20198c0(
    *(uint *)*v4,
    3,
    (int)(v11 + 6),
    12,
    8u,
    (uint)*v11 << 21 >> 24,
    (uint)v11[1] << 21 >> 24);
  free(v8);
  v9 = Function_21d27b8(*v4, 0x36u, 1, &v11, v5);
  Function_20198c0(
    *(uint *)*v4,
    3,
    (int)(v11 + 6),
    0,
    0x10u,
    (uint)*v11 << 21 >> 24,
    (uint)v11[1] << 21 >> 24);
  free(v9);
  return Function_201c3c0(*(uint *)*v4, 3);
}

//----- (021DEB58) --------------------------------------------------------
int __fastcall Function_21deb58(uint *a1, int a2, int a3)
{
  int v3;
  uint *v4;
  int v5;
  int v6;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = Function_21d37bc(*(uint *)(a2 + 4));
  if ( Function_21d37cc(*(uint *)(v3 + 4)) != 2 )
    v6 = 0;
  return Function_21deb8c(*v4 + 4, v6, v5, *(uint *)(v3 + 24));
}

//----- (021DEB8C) --------------------------------------------------------
int __fastcall Function_21deb8c(int a1, int a2, uint a3, int a4, int a5)
{
  uint v5;
  int v6;
  int v7;
  int v8;
  ushort *v9;
  ushort **v10;
  int v11;

  v5 = a3;
  v6 = a1;
  v7 = a2;
  v8 = a4;
  v9 = (ushort *)Function_2023790(64, a3);
  v10 = (ushort **)LoadFromMsgNARC(0, 26, 697, v5);
  Function_200b1b8_CallMsgDecrypt(v10, 9u, v9);
  Function_201d78c(v6, 0);
  Function_200b1b8_CallMsgDecrypt(v10, 0xAu, v9);
  Function_201d78c(v6, 0);
  Function_20237bc_FreeMsg((int)v9, v11);
  Function_200b190((ushort *)v10);
  Function_21dec2c(v6, v5, v7, a5, 104, 0, a5, 0);
  Function_21dec80(v6, v5, v7, a5);
  return Function_21decd4(v6, v5, v7, v8, a5);
}

//----- (021DEC2C) --------------------------------------------------------
ushort *__fastcall Function_21dec2c(int a1, uint a2, uint a3)
{
  int v3;
  uint v4;
  uint v5;
  ushort *v6;
  int v7;
  ushort **v8;
  int v9;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = (ushort *)Function_2023790(64, a2);
  v7 = Function_20989d0();
  v8 = (ushort **)LoadFromMsgNARC(0, 26, v7, v4);
  Function_200b1b8_CallMsgDecrypt(v8, v5, v6);
  Function_201d78c(v3, 0);
  Function_20237bc_FreeMsg((int)v6, v9);
  return Function_200b190((ushort *)v8);
}

//----- (021DEC80) --------------------------------------------------------
ushort *__fastcall Function_21dec80(int a1, uint a2, uint a3)
{
  int v3;
  uint v4;
  uint v5;
  ushort *v6;
  int v7;
  ushort **v8;
  int v9;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = (ushort *)Function_2023790(64, a2);
  v7 = Function_20989c4();
  v8 = (ushort **)LoadFromMsgNARC(0, 26, v7, v4);
  Function_200b1b8_CallMsgDecrypt(v8, v5, v6);
  Function_201d78c(v3, 0);
  Function_20237bc_FreeMsg((int)v6, v9);
  return Function_200b190((ushort *)v8);
}

//----- (021DECD4) --------------------------------------------------------
uint __fastcall Function_21decd4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;

  v4 = a1;
  v5 = Function_21d56bc(a3, 2, a4);
  Function_2002eb4(0, v5, 0);
  Function_201d78c(v4, 0);
  return Function_21d5600(v5, v6);
}

//----- (021DED24) --------------------------------------------------------
int __fastcall Function_21ded24(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v10;

  v4 = a3;
  v5 = a1;
  v6 = a2;
  v10 = a4;
  v7 = Function_21d37bc(*(uint *)(a3 + 4));
  v8 = Function_21d33d4(*(uint ***)(v4 + 4), v7);
  if ( v7 == 487 && v8 > 0 )
    v7 = 11;
  Function_21ded7c(v5, v6, v10, v7);
  return Function_21dee80(v5, v6, v10);
}

//----- (021DED68) --------------------------------------------------------
int __fastcall Function_21ded68(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_21deef8();
  return Function_21dee38(v2, v3);
}

//----- (021DED7C) --------------------------------------------------------
int *__fastcall Function_21ded7c(int a1, int **a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int *v13;
  int *v14;
  int *result;

  v4 = a4;
  v5 = a1;
  v6 = a3;
  v7 = *a2;
  v8 = Function_21d1f90();
  v9 = Function_21d1f94(v4);
  v10 = Function_21d1f98();
  v11 = Function_21d1f9c();
  v12 = Function_21d1fa0();
  v13 = Function_200985c(v7[80], v8, v9, 1, 4000, 1, v6);
  *(uint *)(v5 + 36) = v13;
  Function_200a3dc(v13);
  Function_2009d4c(*(int **)(v5 + 36));
  v14 = Function_20098b8(v7[81], v8, v10, 0, 4000, 1, 1, v6);
  *(uint *)(v5 + 40) = v14;
  Function_200a640(v14);
  Function_2009d4c(*(int **)(v5 + 40));
  *(uint *)(v5 + 44) = Function_2009918(v7[82], v8, v11, 1, 4000, 2u, v6);
  result = Function_2009918(v7[83], v8, v12, 1, 4000, 3u, v6);
  *(uint *)(v5 + 48) = result;
  return result;
}

//----- (021DEE38) --------------------------------------------------------
int *__fastcall Function_21dee38(int a1, int ***a2)
{
  int v2;
  int *result;
  int **v4;

  v2 = a1;
  result = *(int **)(a1 + 36);
  v4 = *a2;
  if ( result )
  {
    Function_200a4e4(result);
    Function_200a6dc(*(int **)(v2 + 40));
    Function_2009d68(v4[80], *(uint ***)(v2 + 36));
    Function_2009d68(v4[81], *(uint ***)(v2 + 40));
    Function_2009d68(v4[82], *(uint ***)(v2 + 44));
    result = (int *)Function_2009d68(v4[83], *(uint ***)(v2 + 48));
  }
  return result;
}

//----- (021DEE80) --------------------------------------------------------
int __fastcall Function_21dee80(int *a1, uint *a2, int a3)
{
  uint *v3;
  int *v4;
  int v5;
  int result;
  int v7;
  char *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  char v14;

  v3 = (uint *)*a2;
  v4 = a1;
  v5 = a3;
  Function_20093b4((int)&v14, 4000, 4000, 4000, 4000, -1, -1, 0, 0, v3[80], v3[81], v3[82], v3[83], 0, 0);
  v7 = v3[79];
  v8 = &v14;
  v11 = 32;
  v12 = 1;
  v10 = 360448;
  v9 = 491520;
  v13 = v5;
  result = Function_2021b90(&v7);
  *v4 = result;
  return result;
}

//----- (021DEEF8) --------------------------------------------------------
int __fastcall Function_21deef8(int *a1)
{
  int result;

  result = *a1;
  if ( result )
    result = Function_2021bd4(result);
  return result;
}

//----- (021DEF08) --------------------------------------------------------
int __fastcall Function_21def08(int *a1, int a2, int a3)
{
  int v3;
  int *v4;
  int v5;
  int v6;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = Function_21d375c(*(uint *)(a2 + 4));
  Function_21d1778(*v4, *(uint *)(v3 + 4), v5, v6, 704512, 0x20000);
  return Function_21d238c(*v4, 0);
}

//----- (021DEF3C) --------------------------------------------------------
int __fastcall Function_21def3c(int *a1)
{
  int *v1;

  v1 = a1;
  Function_21d23c0(*a1, 0);
  return Function_21d2360(*v1, 0);
}

//----- (021DEF54) --------------------------------------------------------
int __fastcall Function_21def54(int *a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = a2;
  v4 = Function_21d2170(*a1);
  v5 = Function_21d37bc(*(uint *)(v3 + 4));
  Function_21d1890(*v2, *(uint *)(v3 + 4), v5, 2, 48, 72);
  return Function_2007dec(v4, 6u, 0);
}

//----- (021DEF8C) --------------------------------------------------------
int __fastcall Function_21def8c(int *a1)
{
  int v1;

  v1 = Function_21d2170(*a1);
  Function_2007dec(v1, 6u, 1);
  return Function_2008780(v1);
}

//----- (021DEFA8) --------------------------------------------------------
int *__fastcall Function_21defa8(int a1, int *a2, uint a3)
{
  int *v3;
  int v4;
  uint v5;
  int v6;
  int v7;
  int *v8;
  int *v9;
  int *result;

  v3 = (int *)*a2;
  v4 = a1;
  v5 = a3;
  v6 = Function_21d26e0(*a2);
  v7 = v6;
  v8 = Function_2009a4c(v3[80], v6, 0x5Au, 1, 4090, 1, v5);
  *(uint *)(v4 + 20) = v8;
  Function_200a3dc(v8);
  Function_2009d4c(*(int **)(v4 + 20));
  v9 = Function_2009b04(v3[81], v7, 0xDu, 0, 4013, 1, 5, v5);
  *(uint *)(v4 + 24) = v9;
  Function_200a640(v9);
  Function_2009d4c(*(int **)(v4 + 24));
  *(uint *)(v4 + 28) = Function_2009bc4(v3[82], v7, 0x58u, 1, 4088, 2u, v5);
  result = Function_2009bc4(v3[83], v7, 0x59u, 1, 4089, 3u, v5);
  *(uint *)(v4 + 32) = result;
  return result;
}

//----- (021DF054) --------------------------------------------------------
int __fastcall Function_21df054(int a1, int ***a2)
{
  int v2;
  int **v3;

  v2 = a1;
  v3 = *a2;
  Function_200a4e4(*(int **)(a1 + 20));
  Function_200a6dc(*(int **)(v2 + 24));
  Function_2009d68(v3[80], *(uint ***)(v2 + 20));
  Function_2009d68(v3[81], *(uint ***)(v2 + 24));
  Function_2009d68(v3[82], *(uint ***)(v2 + 28));
  return Function_2009d68(v3[83], *(uint ***)(v2 + 32));
}

//----- (021DF098) --------------------------------------------------------
int __fastcall Function_21df098(int a1, uint *a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint *v7;
  int v8;
  int v9;
  uint v10;
  uint v11;
  uint v12;
  uint v13;
  int v14;
  int v15;
  int result;
  int v17;
  char *v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  char v24;
  int v25;

  v25 = a4;
  v4 = a3;
  v5 = a1;
  v6 = a4;
  v7 = (uint *)*a2;
  v8 = Function_21d37bc(*(uint *)(a3 + 4));
  v9 = Function_21d33d4(*(uint ***)(v4 + 4), v8);
  v10 = GetPkmnBaseData2(v8, v9, 6u);
  v11 = GetPkmnBaseData2(v8, v9, 7u);
  v12 = Function_21df180(v10);
  v13 = Function_21df180(v11);
  Function_20093b4((int)&v24, 4090, 4013, 4088, 4089, -1, -1, 0, 0, v7[80], v7[81], v7[82], v7[83], 0, 0);
  v17 = v7[79];
  v18 = &v24;
  v21 = 32;
  v22 = 1;
  v23 = v6;
  v19 = 696320;
  v20 = 294912;
  v14 = Function_2021b90(&v17);
  *(uint *)(v5 + 4) = v14;
  Function_2021d6c(v14, v12);
  if ( v12 == v13 )
  {
    result = 0;
    *(uint *)(v5 + 8) = 0;
  }
  else
  {
    v19 = 901120;
    v20 = 294912;
    v15 = Function_2021b90(&v17);
    *(uint *)(v5 + 8) = v15;
    result = Function_2021d6c(v15, v13);
  }
  return result;
}

//----- (021DF180) --------------------------------------------------------
void Function_21df180()
{
  ;
}

//----- (021DF1F8) --------------------------------------------------------
int __fastcall Function_21df1f8(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = *(uint *)(a1 + 4);
  if ( v2 )
    Function_2021bd4(v2);
  result = *(uint *)(v1 + 8);
  if ( result )
    result = Function_2021bd4(result);
  return result;
}

//----- (021DF214) --------------------------------------------------------
uint __fastcall Function_21df214(int a1, int *a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  uint *v8;
  int v9;
  int v10;
  int *v11;
  int v13;
  int v14;
  int v15;
  uchar *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  char *v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  char v31;
  int v32;

  v32 = a4;
  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = (uint *)*a2;
  v13 = Function_21d37bc(*(uint *)(a3 + 4));
  Function_20093b4((int)&v31, 4090, 4013, 4088, 4089, -1, -1, 0, 0, v8[80], v8[81], v8[82], v8[83], 0, 0);
  v24 = v8[79];
  v25 = &v31;
  v28 = 32;
  v29 = 1;
  v26 = 786432;
  v27 = 212992;
  v30 = v7;
  v9 = Function_2021b90(&v24);
  *(uint *)(v4 + 12) = v9;
  Function_2021d6c(v9, 0x11u);
  if ( Function_21d37cc(*(uint *)(v6 + 4)) != 2 )
    v13 = 0;
  v10 = Function_21df30c(*(uint *)(*v5 + 336), v13, v7);
  v11 = (int *)Function_21d2344(*v5, 1);
  v14 = *(uint *)(*v5 + 336);
  v16 = Function_200a72c(v11, 0);
  v17 = *(uint *)(v4 + 12);
  v18 = -78;
  v19 = -8;
  v20 = 0;
  v21 = 31;
  v22 = 1;
  v23 = v7;
  v15 = v10;
  *(uint *)(v4 + 16) = Function_21d4ca0((int)&v14);
  return Function_21d4da0(v10);
}

//----- (021DF30C) --------------------------------------------------------
int __fastcall Function_21df30c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v2 = a2;
  v3 = a1;
  v4 = Function_21d4d6c(a1, 0x12u, 2u);
  v5 = Function_21d566c(v2);
  Function_2002d7c(2, v5, 0);
  Function_21d4e80(v3, v4);
  Function_21d5600(v5, v6);
  return v4;
}

//----- (021DF35C) --------------------------------------------------------
int __fastcall Function_21df35c(int a1)
{
  int v1;

  v1 = a1;
  Function_2021bd4(*(uint *)(a1 + 12));
  *(uint *)(v1 + 12) = 0;
  return Function_21d4d1c(*(int ***)(v1 + 16));
}

//----- (021DF374) --------------------------------------------------------
int __fastcall Function_21df374(int a1, int *a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int v7;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  Function_21d2360(*a2, 1);
  Function_21df64c(v5);
  if ( Function_21e2a54(*(uint *)(v6 + 16)) )
  {
    if ( v7 )
      Function_21d23f8((uint *)(*v4 + 364), 1, -16, 0, 0, 16, 43, 8, 0);
    else
      Function_21d23f8((uint *)(*v4 + 364), 1, 0, -16, 16, 0, 43, 8, 0);
  }
  return Function_21df6b4(v4);
}

//----- (021DF3F0) --------------------------------------------------------
int __fastcall Function_21df3f0(int a1, int *a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v4 = a1;
  v5 = a2;
  v6 = a4;
  v7 = Function_21e2a54(*(uint *)(a3 + 16));
  v8 = *v5;
  if ( v7 )
    v9 = Function_21d2424((uint *)(v8 + 364));
  else
    v9 = Function_21d24ec(v8 + 364);
  v10 = v9;
  if ( v9 == 1 )
  {
    if ( v6 == 1 )
    {
      Function_21df680(v4);
      Function_21d2360(*v5, 0);
    }
    else
    {
      Function_21def8c(v5);
      Function_21def3c(v5);
    }
  }
  else
  {
    Function_21df6b4(v5);
  }
  return v10;
}

//----- (021DF44C) --------------------------------------------------------
uint *__fastcall Function_21df44c(int a1, int a2, uint *a3, int a4)
{
  int v4;
  int v5;
  uint *v6;
  int v7;
  uint *result;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  Function_21df64c(a1);
  if ( !v7 )
  {
    Function_21df6c4(v4, v6[2], v6[3], 4);
    Function_21df6fc(v4);
  }
  result = (uint *)Function_21e2a54(v6[4]);
  if ( result )
  {
    if ( v7 )
      result = Function_21d23f8((uint *)(*(uint *)v5 + 364), 4, -16, 0, 0, 16, 42, 47, 0);
    else
      result = Function_21d23f8((uint *)(*(uint *)v5 + 364), 4, 0, -16, 16, 0, 42, 47, 0);
  }
  return result;
}

//----- (021DF4D0) --------------------------------------------------------
int __fastcall Function_21df4d0(int a1, int *a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int *v11;
  int v13;
  int v14;
  int v15;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( a4 )
  {
    v13 = 1;
    v14 = 1;
  }
  else
  {
    v13 = Function_21df6e0();
    v14 = Function_21df718(v4, v5);
  }
  v8 = Function_21e2a54(*(uint *)(v6 + 16));
  v9 = *v5;
  if ( v8 )
    v15 = Function_21d2424((uint *)(v9 + 364));
  else
    v15 = Function_21d24ec(v9 + 364);
  v10 = 0;
  v11 = &v13;
  do
  {
    if ( !*v11 )
      break;
    ++v10;
    ++v11;
  }
  while ( v10 < 3 );
  if ( v10 != 3 )
    return 0;
  if ( v7 == 1 )
    Function_21df680(v4);
  return 1;
}

//----- (021DF548) --------------------------------------------------------
uint *__fastcall Function_21df548(int a1, int *a2, uint *a3, int a4)
{
  int *v4;
  int v5;
  uint *v6;
  int v7;
  uint *result;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  Function_21df64c(a1);
  Function_21d2360(*v4, 1);
  if ( !v7 )
    Function_21df6c4(v5, v6[2], v6[3], 1);
  result = (uint *)Function_21e2a54(v6[4]);
  if ( result )
  {
    if ( v7 )
      result = Function_21d23f8((uint *)(*v4 + 364), 1, -16, 0, 0, 16, 42, 47, 0);
    else
      result = Function_21d23f8((uint *)(*v4 + 364), 1, 0, -16, 16, 0, 42, 47, 0);
  }
  return result;
}

//----- (021DF5D0) --------------------------------------------------------
int __fastcall Function_21df5d0(int a1, int *a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int *v11;
  int v13;
  int v14;
  int v15;

  v15 = a4;
  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( a4 )
    v13 = 1;
  else
    v13 = Function_21df6e0();
  v8 = Function_21e2a54(*(uint *)(v6 + 16));
  v9 = *v5;
  if ( v8 )
    v14 = Function_21d2424((uint *)(v9 + 364));
  else
    v14 = Function_21d24ec(v9 + 364);
  v10 = 0;
  v11 = &v13;
  do
  {
    if ( !*v11 )
      break;
    ++v10;
    ++v11;
  }
  while ( v10 < 2 );
  if ( v10 != 2 )
    return 0;
  if ( v7 == 1 )
  {
    Function_21df680(v4);
    Function_21d2360(*v5, 0);
  }
  else
  {
    Function_21def3c(v5);
  }
  return 1;
}

//----- (021DF64C) --------------------------------------------------------
int __fastcall Function_21df64c(int *a1)
{
  int *v1;
  int v2;
  int *v3;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    if ( *v3 )
      Function_2021fe0(*v3, 1);
    ++v2;
    ++v3;
  }
  while ( v2 < 3 );
  Function_2021fe0(v1[3], 1);
  return Function_2012af0(*(uint **)v1[4], 1);
}

//----- (021DF680) --------------------------------------------------------
int __fastcall Function_21df680(int *a1)
{
  int *v1;
  int v2;
  int *v3;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    if ( *v3 )
      Function_2021fe0(*v3, 0);
    ++v2;
    ++v3;
  }
  while ( v2 < 3 );
  Function_2021fe0(v1[3], 0);
  return Function_2012af0(*(uint **)v1[4], 0);
}

//----- (021DF6B4) --------------------------------------------------------
int __fastcall Function_21df6b4(int *a1)
{
  return Function_21d24fc(*a1, *a1 + 364);
}

//----- (021DF6C4) --------------------------------------------------------
uint *__fastcall Function_21df6c4(int a1, int a2, int a3, int a4)
{
  return Function_21d2648((uint *)(a1 + 52), 48, a2, 72, a3, a4);
}

//----- (021DF6E0) --------------------------------------------------------
int __fastcall Function_21df6e0(int a1, int *a2)
{
  int v2;
  int *v3;
  int v4;

  v2 = a1;
  v3 = a2;
  v4 = Function_21d2664((uint *)(a1 + 52));
  Function_21d2164(*v3, *(uint *)(v2 + 52), *(uint *)(v2 + 56));
  return v4;
}

//----- (021DF6FC) --------------------------------------------------------
uint *__fastcall Function_21df6fc(int a1)
{
  return Function_21d2648((uint *)(a1 + 84), 172, 170, 32, 82, 4);
}

//----- (021DF718) --------------------------------------------------------
int __fastcall Function_21df718(int a1, int *a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = Function_21d2664((uint *)(a1 + 84));
  v5 = *(uint *)(v2 + 84);
  v6 = *(uint *)(v2 + 88);
  Function_21d1848(*v3);
  return v4;
}

//----- (021DF734) --------------------------------------------------------
int (*__fastcall Function_21df734(int *a1, int a2, int a3))()
{
  int v3;
  int *v4;
  int v5;
  int v6;
  int v7;
  int (*result)();

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = Function_21df7cc(a3);
  v7 = Function_21df80c(v3, v5);
  *v4 = v6;
  v4[1] = v7;
  v4[8] = 0;
  v4[9] = Function_21df86c();
  v4[2] = (int)Function_21df888;
  v4[3] = (int)Function_21df8b0;
  v4[4] = (int)Function_21df8c0;
  v4[5] = (int)Function_21df8c4;
  v4[6] = (int)Function_21df958;
  result = Function_21dfa18;
  v4[7] = (int)Function_21dfa18;
  return result;
}

//----- (021DF78C) --------------------------------------------------------
int __fastcall Function_21df78c(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_21df844(*a1);
  return Function_21df858(v1[1]);
}

//----- (021DF7A0) --------------------------------------------------------
BOOL __fastcall Function_21df7a0(uint *a1, int a2)
{
  uint *v2;
  int v4;
  int v5;

  v2 = (uint *)*a1;
  if ( *(uint *)(a1[1] + 4) == 1 )
    return 0;
  v4 = v2[5];
  v5 = Function_21df870(v2[3], v2[5], a2, v2[4]);
  v2[5] = v5;
  return v4 != v5;
}

//----- (021DF7CC) --------------------------------------------------------
int *__fastcall Function_21df7cc(uint a1, int a2)
{
  int v2;
  int *v3;
  int *v4;
  int v5;

  v2 = a2;
  v3 = (int *)malloc(a1, 24);
  if ( !v3 )
    ErrorHandler();
  v4 = v3;
  v5 = 24;
  do
  {
    *(uchar *)v4 = 0;
    v4 = (int *)((char *)v4 + 1);
    --v5;
  }
  while ( v5 );
  *v3 = Function_21d138c(v2);
  v3[1] = Function_21d13ec(v2);
  v3[2] = Function_21d1410(v2, 5);
  return v3;
}

//----- (021DF80C) --------------------------------------------------------
uchar *__fastcall Function_21df80c(uint a1, int a2)
{
  int v2;
  uchar *v3;

  v2 = a2;
  v3 = (uchar *)malloc(a1, 12);
  if ( !v3 )
    ErrorHandler();
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  v3[4] = 0;
  v3[5] = 0;
  v3[6] = 0;
  v3[7] = 0;
  v3[8] = 0;
  v3[9] = 0;
  v3[10] = 0;
  v3[11] = 0;
  *(uint *)v3 = Function_21d13fc(v2);
  return v3;
}

//----- (021DF844) --------------------------------------------------------
uint __fastcall Function_21df844(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return free(v1);
}

//----- (021DF858) --------------------------------------------------------
uint __fastcall Function_21df858(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return free(v1);
}

//----- (021DF86C) --------------------------------------------------------
int Function_21df86c()
{
  return 0;
}

//----- (021DF870) --------------------------------------------------------
int __fastcall Function_21df870(int a1, int a2, int a3, int a4)
{
  if ( a3 <= 0 )
  {
    if ( a2 + a3 < 0 )
      a3 = a4 - 1;
  }
  else
  {
    a3 += a2;
    if ( a3 >= a4 )
      a3 = 0;
  }
  return a3;
}

//----- (021DF888) --------------------------------------------------------
int __fastcall Function_21df888(int a1, uint *a2)
{
  uint *v2;
  int v3;

  v2 = a2;
  v3 = Function_21d37bc(a2[1]);
  v2[3] = Function_21e01cc();
  v2[4] = Function_21e0268(v3, v2);
  v2[5] = 0;
  return 1;
}

//----- (021DF8B0) --------------------------------------------------------
BOOL __fastcall Function_21df8b0(int a1)
{
  return *(uint *)(a1 + 12) == 1;
}

//----- (021DF8C0) --------------------------------------------------------
int Function_21df8c0()
{
  return 1;
}

//----- (021DF8C4) --------------------------------------------------------
int __fastcall Function_21df8c4(int a1, uint *a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = a2[2];
  switch ( (uchar)*a2 )
  {
    case 0u:
      v7 = (int *)malloc(a2[1], 208);
      v3[2] = v7;
      Call_FillMemWithValue(v7, 0, 0xD0u);
      *(uint *)(v3[2] + 200) = *(uint *)(v5 + 12);
      *(uint *)(v4 + 4) = 0;
      *(uint *)(v4 + 8) = 0;
      ++*v3;
      goto LABEL_7;
    case 1u:
      v8 = a2[1];
      Function_21dfa84(a2[2], a1);
      Function_21dff38(v6, v4, v5, 1);
      ++*v3;
      goto LABEL_7;
    case 2u:
      if ( Function_21dffa8(a2[2], a1) )
        ++*v3;
      goto LABEL_7;
    case 3u:
      REG_BLDCNT = 0;
      result = 1;
      break;
    default:
LABEL_7:
      result = 0;
      break;
  }
  return result;
}

//----- (021DF958) --------------------------------------------------------
int __fastcall Function_21df958(int a1, uint *a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v3 = a2;
  v4 = a1;
  v5 = *a2;
  v6 = a3;
  v7 = a2[2];
  if ( *a2 )
  {
    if ( v5 == 1 )
    {
      if ( Function_21e00b8(a2[2], v4) == 1 )
      {
        *(uint *)(v4 + 8) = 1;
        ++*v3;
      }
    }
    else if ( v5 == 2 )
    {
      if ( *(uint *)(v4 + 8) == 1 )
      {
        v9 = *(uint *)(a3 + 12);
        v10 = *(uint *)(a3 + 20);
        v11 = a2[1];
        Function_21e0944(v7, v4);
        Function_21dfbb4(v7, v4, v6);
        *(uint *)(v4 + 8) = 0;
        *(uint *)(v4 + 4) = 0;
        *v3 = 0;
      }
    }
    else
    {
      ErrorHandler();
    }
  }
  else
  {
    v8 = *(uint *)(a3 + 20);
    if ( v8 != *(uint *)(v7 + 204) )
    {
      *(uint *)(v7 + 204) = v8;
      *(uint *)(v7 + 184) = ((uint)(*(uint *)(v7 + 184) + 1) >> 31)
                            + __ROR4__(
                                ((*(uint *)(v7 + 184) + 1) << 31) - ((uint)(*(uint *)(v7 + 184) + 1) >> 31),
                                31);
      Function_21e0094(v7, v4);
      Function_21e0c10(v7);
      *(uint *)(v4 + 4) = 1;
      Function_2005748(0x68Bu);
      ++*v3;
    }
  }
  Function_21e0c30(v7);
  return 0;
}

//----- (021DFA18) --------------------------------------------------------
int __fastcall Function_21dfa18(int a1, uint *a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a2[2];
  switch ( (uchar)*a2 )
  {
    case 0u:
      Function_21dff38(v5, v4, a3, 0);
      ++*v3;
      goto LABEL_8;
    case 1u:
      if ( Function_21dffa8(v5, v4) )
        ++*v3;
      goto LABEL_8;
    case 2u:
      Function_21dfacc(v5, v4);
      ++*v3;
      goto LABEL_8;
    case 3u:
      free(v5);
      ++*v3;
      goto LABEL_8;
    case 4u:
      result = 1;
      break;
    default:
LABEL_8:
      result = 0;
      break;
  }
  return result;
}

//----- (021DFA84) --------------------------------------------------------
int __fastcall Function_21dfa84(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;

  v4 = a1;
  v5 = a2;
  v6 = a4;
  v7 = a3;
  Function_21dfb50();
  Function_21dfd1c(v4, v5, v6);
  Function_21dfae8(v5, v6);
  Function_21dfe0c(v4, v5, v7, v6);
  return Function_21e08d0(v4, v5, v7, v6, *(uint *)(v7 + 12), *(uint *)(v7 + 20));
}

//----- (021DFACC) --------------------------------------------------------
int __fastcall Function_21dfacc(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_21e0bf8();
  Function_21dff18(v2);
  return Function_21dfdc8(v2, v3);
}

//----- (021DFAE8) --------------------------------------------------------
int __fastcall Function_21dfae8(int *a1, uint a2)
{
  int *v2;
  uint v3;
  int v4;
  ushort *v6;

  v2 = a1;
  v3 = a2;
  Function_21d2724(*a1, 0x21u, *(uint **)*a1, 3, 0, 0, 1, a2);
  v4 = Function_21d27b8(*v2, 0x32u, 1, &v6, v3);
  Function_20198c0(
    *(uint *)*v2,
    3,
    (int)(v6 + 6),
    0,
    0,
    (uint)*v6 << 21 >> 24,
    (uint)v6[1] << 21 >> 24);
  free(v4);
  return Function_201c3c0(*(uint *)*v2, 3);
}

//----- (021DFB50) --------------------------------------------------------
int __fastcall Function_21dfb50(int a1, int *a2, int *a3)
{
  int *v3;
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int result;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = Function_21d37bc(a3[1]);
  Function_21dfbec(v4, v5, v3, v6, v3[3], v3[5], 0);
  v7 = Function_21df870(v3[3], v3[5], 1, v3[4]);
  Function_21dfbec(v4, v5, v3, v6, v3[3], v7, 2);
  v8 = 0;
  do
    result = Function_21d2280(*v5, 1, v8++);
  while ( v8 < 4 );
  return result;
}

//----- (021DFBB4) --------------------------------------------------------
int __fastcall Function_21dfbb4(int a1, int a2, int *a3)
{
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = Function_21d37bc(a3[1]);
  v7 = Function_21df870(v3[3], v3[5], 1, v3[4]);
  return Function_21dfbec(v4, v5, v3, v6, v3[3], v7, 2);
}

//----- (021DFBEC) --------------------------------------------------------
uint __fastcall Function_21dfbec(int a1, int a2, int a3, int a4, char a5, int a6, int a7)
{
  int v7;
  int v8;
  uint result;
  int v10;
  int v11;

  v7 = a1;
  v8 = a2;
  v10 = a3;
  v11 = a4;
  if ( a7 > 2 )
    ErrorHandler();
  switch ( a5 )
  {
    case 0:
    case 1:
    case 2:
    case 3:
      result = Function_21e0354(v7, v8, v10, v11, a6, a7);
      break;
    case 4:
      result = Function_21e0504(v7, v8, v10, v11, a6, a7);
      break;
    case 5:
      result = Function_21e0590(v7, v8, v10, v11, a6, a7);
      break;
    case 6:
      result = ((int (__fastcall *)(int, int, int, int, int))Function_21e03ec)(v7, v8, v11, a6, a7);
      break;
    case 7:
      result = Function_21e0478(v7, v8, v10, v11, a6, a7);
      break;
    case 8:
      result = Function_21e061c(v7, v8, v10, v11, a6, a7);
      break;
    case 9:
      result = Function_21e06a8(v7, v8, v10, v11, a6, a7);
      break;
    case 10:
      result = Function_21e072c(v7, v8, v10, v11, a6, a7);
      break;
    case 11:
      result = Function_21e07b8(v7, v8, v10, v11, a6, a7);
      break;
    case 12:
      result = Function_21e0844(v7, v8, v10, v11, a6, a7);
      break;
    default:
      result = ErrorHandler();
      break;
  }
  return result;
}

//----- (021DFD00) --------------------------------------------------------
int __fastcall Function_21dfd00(int *a1)
{
  int v1;
  int *v2;
  int result;

  v1 = 0;
  v2 = a1;
  do
    result = Function_21d2280(*v2, 0, v1++);
  while ( v1 < 4 );
  return result;
}

//----- (021DFD1C) --------------------------------------------------------
int *__fastcall Function_21dfd1c(int a1, int *a2, uint a3)
{
  int *v3;
  int v4;
  uint v5;
  int v6;
  int v7;
  int *v8;
  int *v9;
  int *result;

  v3 = (int *)*a2;
  v4 = a1;
  v5 = a3;
  v6 = Function_21d26e0(*a2);
  v7 = v6;
  v8 = Function_2009a4c(v3[80], v6, 0x7Au, 1, 14122, 1, v5);
  *(uint *)(v4 + 16) = v8;
  Function_200a3dc(v8);
  Function_2009d4c(*(int **)(v4 + 16));
  v9 = Function_2009b04(v3[81], v7, 0x16u, 0, 14022, 1, 1, v5);
  *(uint *)(v4 + 20) = v9;
  Function_200a640(v9);
  Function_2009d4c(*(int **)(v4 + 20));
  *(uint *)(v4 + 24) = Function_2009bc4(v3[82], v7, 0x7Bu, 1, 14123, 2u, v5);
  result = Function_2009bc4(v3[83], v7, 0x79u, 1, 14121, 3u, v5);
  *(uint *)(v4 + 28) = result;
  return result;
}

//----- (021DFDC8) --------------------------------------------------------
int __fastcall Function_21dfdc8(int a1, int ***a2)
{
  int v2;
  int **v3;

  v2 = a1;
  v3 = *a2;
  Function_200a4e4(*(int **)(a1 + 16));
  Function_200a6dc(*(int **)(v2 + 20));
  Function_2009d68(v3[80], *(uint ***)(v2 + 16));
  Function_2009d68(v3[81], *(uint ***)(v2 + 20));
  Function_2009d68(v3[82], *(uint ***)(v2 + 24));
  return Function_2009d68(v3[83], *(uint ***)(v2 + 28));
}

//----- (021DFE0C) --------------------------------------------------------
int __fastcall Function_21dfe0c(int *a1, int *a2, int a3, int a4)
{
  int v4;
  int v5;
  int *v6;
  int v7;
  uint v8;
  int *v9;
  int v10;
  int result;
  int v12;
  int v13;
  int v14;
  int v15;
  char *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  char v22;

  v4 = a4;
  v5 = *a2;
  v6 = a1;
  v12 = a3;
  Function_20093b4(
    (int)&v22,
    14122,
    14022,
    14123,
    14121,
    -1,
    -1,
    0,
    3,
    *(uint *)(*a2 + 320),
    *(uint *)(*a2 + 324),
    *(uint *)(*a2 + 328),
    *(uint *)(*a2 + 332),
    0,
    0);
  v7 = *(uint *)(v5 + 316);
  v8 = 0;
  v15 = v7;
  v16 = &v22;
  v19 = 32;
  v21 = v4;
  v20 = 1;
  v17 = 0;
  v18 = 0;
  v9 = v6;
  do
  {
    Function_21e0b24(v8, &v14, &v13);
    v17 = v14 << 12;
    v18 = (v13 + 8) << 12;
    *v9 = Function_2021b90(&v15);
    v10 = *v9;
    if ( (v8 >> 31) + __ROR4__((v8 << 31) - (v8 >> 31), 31) )
      Function_2021d6c(v10, 2u);
    else
      Function_2021d6c(v10, 0);
    ++v8;
    ++v9;
  }
  while ( (int)v8 < 4 );
  v17 = 1015808;
  v18 = 393216;
  v19 = 0;
  v6[47] = Function_2021b90(&v15);
  Function_2021d6c(v6[47], 1u);
  Function_2021cc8(v6[47], 1);
  Function_2021e80(v6[47], 0);
  result = *(uint *)(v12 + 16);
  if ( result <= 1 )
    result = Function_2021cac(v6[47], 0);
  return result;
}

//----- (021DFF18) --------------------------------------------------------
int __fastcall Function_21dff18(int *a1)
{
  int *v1;
  int v2;
  int *v3;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    Function_2021bd4(*v3);
    ++v2;
    ++v3;
  }
  while ( v2 < 4 );
  return Function_2021bd4(v1[47]);
}

//----- (021DFF38) --------------------------------------------------------
int __fastcall Function_21dff38(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;

  v4 = a3;
  v5 = a2;
  v6 = a4;
  Function_21dfff8();
  if ( Function_21e2a54(*(uint *)(v4 + 8)) )
  {
    if ( v6 )
      Function_21d23f8((uint *)(*(uint *)v5 + 364), 1, -16, 0, 0, 16, 43, 8, 0);
    else
      Function_21d23f8((uint *)(*(uint *)v5 + 364), 1, 0, -16, 16, 0, 43, 8, 0);
  }
  return Function_21e0078(v5);
}

//----- (021DFFA8) --------------------------------------------------------
int __fastcall Function_21dffa8(int a1, int *a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v4 = a1;
  v5 = a2;
  v6 = a4;
  v7 = Function_21e2a54(*(uint *)(a3 + 8));
  v8 = *v5;
  if ( v7 )
    v9 = Function_21d2424((uint *)(v8 + 364));
  else
    v9 = Function_21d24ec(v8 + 364);
  v10 = v9;
  if ( v9 == 1 )
  {
    if ( v6 == 1 )
      Function_21e0038(v4);
    else
      Function_21dfd00(v5);
  }
  else
  {
    Function_21e0078(v5);
  }
  return v10;
}

//----- (021DFFF8) --------------------------------------------------------
int __fastcall Function_21dfff8(int *a1)
{
  int *v1;
  int v2;
  int *v3;
  int v4;
  int result;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    Function_2021fe0(*v3, 1);
    ++v2;
    ++v3;
  }
  while ( v2 < 4 );
  Function_2021fe0(v1[47], 1);
  v4 = 0;
  do
  {
    result = Function_2012af0(*(uint **)v1[8], 1);
    ++v4;
    ++v1;
  }
  while ( v4 < 2 );
  return result;
}

//----- (021E0038) --------------------------------------------------------
int __fastcall Function_21e0038(int *a1)
{
  int *v1;
  int v2;
  int *v3;
  int v4;
  int result;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    Function_2021fe0(*v3, 0);
    ++v2;
    ++v3;
  }
  while ( v2 < 4 );
  Function_2021fe0(v1[47], 0);
  v4 = 0;
  do
  {
    result = Function_2012af0(*(uint **)v1[8], 0);
    ++v4;
    ++v1;
  }
  while ( v4 < 2 );
  return result;
}

//----- (021E0078) --------------------------------------------------------
int __fastcall Function_21e0078(int *a1)
{
  int *v1;
  int v2;
  int result;

  v1 = a1;
  v2 = 0;
  do
    result = Function_21d251c(*v1, *v1 + 364, v2++);
  while ( v2 < 4 );
  return result;
}

//----- (021E0094) --------------------------------------------------------
int __fastcall Function_21e0094(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    result = Function_21e00f4(v2, v3, -256, 0);
    ++v4;
  }
  while ( v4 < 4 );
  return result;
}

//----- (021E00B8) --------------------------------------------------------
int __fastcall Function_21e00b8(int a1, int a2)
{
  int v2;
  int v3;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v2 = a2;
  v3 = a1;
  if ( !*(uint *)(a2 + 4) )
    return 1;
  v5 = 0;
  do
  {
    v6 = Function_21e015c(v3, v2, v5++);
    v10 = v6;
  }
  while ( v5 < 4 );
  v11 = 0;
  do
  {
    Function_2012938(**(uint ***)(v3 + 32), v7, v8, v9);
    ++v11;
    v3 += 4;
  }
  while ( v11 < 2 );
  return v10;
}

//----- (021E00F4) --------------------------------------------------------
uint *__fastcall Function_21e00f4(int a1, int *a2, int a3, int a4, int a5)
{
  int v5;
  int *v6;
  int v7;
  uint *result;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  char v14;
  int v15;

  v15 = a4;
  v5 = a1;
  v6 = a2;
  v9 = a3;
  v10 = a4;
  if ( *(uint *)(a1 + 184) )
  {
    v7 = a5 - 2;
    if ( a5 - 2 < 0 )
      v7 = a5 + 2;
  }
  else
  {
    v7 = a5;
  }
  Function_21e0b24(a5, &v12, &v11);
  Function_21d2250(*v6, (int *)&v14, &v13, v7);
  Function_21d2648((uint *)(v5 + 40 + 32 * a5), v12 + v9, v12, v11 + v10, v11, 16);
  result = (uint *)(v5 + 4 * a5 + 168);
  *result = v13 - v11;
  return result;
}

//----- (021E015C) --------------------------------------------------------
int __fastcall Function_21e015c(int a1, int *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int *v7;
  int v8;
  int v9;
  int v10;

  v3 = a1;
  v4 = a3;
  v7 = a2;
  v8 = a3;
  if ( *(uint *)(a1 + 184) )
  {
    v4 = a3 - 2;
    if ( a3 - 2 < 0 )
      v4 = a3 + 2;
  }
  v5 = Function_21d2664((uint *)(a1 + 40 + 32 * a3));
  Function_21d222c(
    *v7,
    *(uint *)(v3 + 40 + 32 * v8),
    *(uint *)(v3 + 44 + 32 * v8) + *(uint *)(v3 + 4 * v8 + 168),
    v4);
  v9 = *(uint *)(v3 + 40 + 32 * v8) << 12;
  v10 = (*(uint *)(v3 + 44 + 32 * v8) + 8) << 12;
  Function_2021c50(*(uint **)(v3 + 4 * v4), &v9);
  return v5;
}

//----- (021E01CC) --------------------------------------------------------
int __fastcall Function_21e01cc(int a1)
{
  if ( a1 > 422 )
  {
    if ( a1 > 479 )
    {
      if ( a1 > 487 )
      {
        if ( a1 == 492 )
          return 10;
      }
      else if ( a1 == 487 )
      {
        return 11;
      }
    }
    else
    {
      if ( a1 >= 479 )
        return 12;
      if ( a1 == 423 )
        return 5;
    }
  }
  else
  {
    if ( a1 >= 422 )
      return 4;
    if ( a1 > 386 )
    {
      if ( a1 <= 413 && a1 >= 412 )
      {
        if ( a1 == 412 )
          return 6;
        if ( a1 == 413 )
          return 7;
      }
    }
    else
    {
      if ( a1 >= 386 )
        return 9;
      if ( a1 == 201 )
        return 8;
    }
  }
  return Function_21e02f0();
}

//----- (021E0268) --------------------------------------------------------
int __fastcall Function_21e0268(int a1, int a2)
{
  if ( a1 <= 422 )
  {
    if ( a1 < 422 )
    {
      if ( a1 > 386 )
      {
        if ( a1 > 413 || a1 < 412 || a1 != 412 && a1 != 413 )
          return Function_21d33e0(*(uint ***)(a2 + 4), a1);
      }
      else if ( a1 < 386 && a1 != 201 )
      {
        return Function_21d33e0(*(uint ***)(a2 + 4), a1);
      }
    }
    return Function_21d341c(*(uint ***)(a2 + 4), a1);
  }
  if ( a1 <= 479 )
  {
    if ( a1 < 479 && a1 != 423 )
      return Function_21d33e0(*(uint ***)(a2 + 4), a1);
    return Function_21d341c(*(uint ***)(a2 + 4), a1);
  }
  if ( a1 > 487 )
  {
    if ( a1 == 492 )
      return Function_21d341c(*(uint ***)(a2 + 4), a1);
  }
  else if ( a1 == 487 )
  {
    return Function_21d341c(*(uint ***)(a2 + 4), a1);
  }
  return Function_21d33e0(*(uint ***)(a2 + 4), a1);
}

//----- (021E02F0) --------------------------------------------------------
int __fastcall Function_21e02f0(int a1, int a2)
{
  int v2;
  ushort v3;
  uint v4;
  int result;
  int v6;

  v2 = a2;
  v3 = a1;
  v4 = GetPkmnBaseData1(a1, 0x12u);
  switch ( v4 )
  {
    case 0u:
      return 1;
    case 0xFEu:
      return 2;
    case 0xFFu:
      return 3;
  }
  if ( Function_21d33e0(*(uint ***)(v2 + 4), v3) != 1 )
    goto LABEL_19;
  v6 = Function_21d334c(*(uint ***)(v2 + 4), v3, 0);
  if ( v6 == -1 )
    ErrorHandler();
  if ( !v6 )
    return 1;
  if ( v6 == 254 )
    return 2;
  if ( v6 != 255 )
LABEL_19:
    result = 0;
  else
    result = 3;
  return result;
}

//----- (021E0354) --------------------------------------------------------
uint __fastcall Function_21e0354(int a1, int *a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  uint result;
  int v12;
  int v13;
  int v14;

  v6 = a1;
  v7 = a2;
  v8 = a3;
  v12 = a4;
  Function_21e0b24(a6, &v14, &v13);
  if ( *(uint *)(v6 + 184) )
  {
    v9 = a6 - 2;
    if ( a6 - 2 < 0 )
      v9 = a6 + 2;
  }
  else
  {
    v9 = a6;
  }
  if ( Function_21d19d8(*v7, *(uint *)(v8 + 4), v12, 2, v14, v13, a5, v9) == -1 )
    ErrorHandler();
  Function_21e0b24(a6 + 1, &v14, &v13);
  v10 = a6 + 1;
  if ( *(uint *)(v6 + 184) )
  {
    v10 = a6 - 1;
    if ( a6 - 1 < 0 )
      v10 = a6 + 3;
  }
  result = Function_21d19d8(*v7, *(uint *)(v8 + 4), v12, 0, v14, v13, a5, v10);
  if ( result == -1 )
    result = ErrorHandler();
  return result;
}

//----- (021E03EC) --------------------------------------------------------
uint __fastcall Function_21e03ec(int a1, int *a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  uint result;
  int v12;
  int v13;

  v6 = a1;
  v7 = a2;
  v8 = a3;
  Function_21e0b24(a6, &v13, &v12);
  if ( *(uint *)(v6 + 184) )
  {
    v9 = a6 - 2;
    if ( a6 - 2 < 0 )
      v9 = a6 + 2;
  }
  else
  {
    v9 = a6;
  }
  if ( Function_21d1b08(*v7, *(uint *)(v8 + 4), 2, v13, v12, a5, v9) == -1 )
    ErrorHandler();
  Function_21e0b24(a6 + 1, &v13, &v12);
  v10 = a6 + 1;
  if ( *(uint *)(v6 + 184) )
  {
    v10 = a6 - 1;
    if ( a6 - 1 < 0 )
      v10 = a6 + 3;
  }
  result = Function_21d1b08(*v7, *(uint *)(v8 + 4), 0, v13, v12, a5, v10);
  if ( result == -1 )
    result = ErrorHandler();
  return result;
}

//----- (021E0478) --------------------------------------------------------
uint __fastcall Function_21e0478(int a1, int *a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  uint result;
  int v12;
  int v13;

  v6 = a1;
  v7 = a2;
  v8 = a3;
  Function_21e0b24(a6, &v13, &v12);
  if ( *(uint *)(v6 + 184) )
  {
    v9 = a6 - 2;
    if ( a6 - 2 < 0 )
      v9 = a6 + 2;
  }
  else
  {
    v9 = a6;
  }
  if ( Function_21d1b4c(*v7, *(uint *)(v8 + 4), 2, v13, v12, a5, v9) == -1 )
    ErrorHandler();
  Function_21e0b24(a6 + 1, &v13, &v12);
  v10 = a6 + 1;
  if ( *(uint *)(v6 + 184) )
  {
    v10 = a6 - 1;
    if ( a6 - 1 < 0 )
      v10 = a6 + 3;
  }
  result = Function_21d1b4c(*v7, *(uint *)(v8 + 4), 0, v13, v12, a5, v10);
  if ( result == -1 )
    result = ErrorHandler();
  return result;
}

//----- (021E0504) --------------------------------------------------------
uint __fastcall Function_21e0504(int a1, int *a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  uint result;
  int v12;
  int v13;

  v6 = a1;
  v7 = a2;
  v8 = a3;
  Function_21e0b24(a6, &v13, &v12);
  if ( *(uint *)(v6 + 184) )
  {
    v9 = a6 - 2;
    if ( a6 - 2 < 0 )
      v9 = a6 + 2;
  }
  else
  {
    v9 = a6;
  }
  if ( Function_21d1a78(*v7, *(uint *)(v8 + 4), 2, v13, v12, a5, v9) == -1 )
    ErrorHandler();
  Function_21e0b24(a6 + 1, &v13, &v12);
  v10 = a6 + 1;
  if ( *(uint *)(v6 + 184) )
  {
    v10 = a6 - 1;
    if ( a6 - 1 < 0 )
      v10 = a6 + 3;
  }
  result = Function_21d1a78(*v7, *(uint *)(v8 + 4), 0, v13, v12, a5, v10);
  if ( result == -1 )
    result = ErrorHandler();
  return result;
}

//----- (021E0590) --------------------------------------------------------
uint __fastcall Function_21e0590(int a1, int *a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  uint result;
  int v12;
  int v13;

  v6 = a1;
  v7 = a2;
  v8 = a3;
  Function_21e0b24(a6, &v13, &v12);
  if ( *(uint *)(v6 + 184) )
  {
    v9 = a6 - 2;
    if ( a6 - 2 < 0 )
      v9 = a6 + 2;
  }
  else
  {
    v9 = a6;
  }
  if ( Function_21d1ac0(*v7, *(uint *)(v8 + 4), 2, v13, v12, a5, v9) == -1 )
    ErrorHandler();
  Function_21e0b24(a6 + 1, &v13, &v12);
  v10 = a6 + 1;
  if ( *(uint *)(v6 + 184) )
  {
    v10 = a6 - 1;
    if ( a6 - 1 < 0 )
      v10 = a6 + 3;
  }
  result = Function_21d1ac0(*v7, *(uint *)(v8 + 4), 0, v13, v12, a5, v10);
  if ( result == -1 )
    result = ErrorHandler();
  return result;
}

//----- (021E061C) --------------------------------------------------------
uint __fastcall Function_21e061c(int a1, int *a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  uint result;
  int v12;
  int v13;

  v6 = a1;
  v7 = a2;
  v8 = a3;
  Function_21e0b24(a6, &v13, &v12);
  if ( *(uint *)(v6 + 184) )
  {
    v9 = a6 - 2;
    if ( a6 - 2 < 0 )
      v9 = a6 + 2;
  }
  else
  {
    v9 = a6;
  }
  if ( Function_21d1a34(*v7, *(uint *)(v8 + 4), 2, v13, v12, a5, v9) == -1 )
    ErrorHandler();
  Function_21e0b24(a6 + 1, &v13, &v12);
  v10 = a6 + 1;
  if ( *(uint *)(v6 + 184) )
  {
    v10 = a6 - 1;
    if ( a6 - 1 < 0 )
      v10 = a6 + 3;
  }
  result = Function_21d1a34(*v7, *(uint *)(v8 + 4), 0, v13, v12, a5, v10);
  if ( result == -1 )
    result = ErrorHandler();
  return result;
}

//----- (021E06A8) --------------------------------------------------------
uint __fastcall Function_21e06a8(int a1, int *a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  uint result;
  int v12;
  int v13;

  v6 = a1;
  v7 = a2;
  v8 = a3;
  Function_21e0b24(a6, &v13, &v12);
  if ( *(uint *)(v6 + 184) )
  {
    v9 = a6 - 2;
    if ( a6 - 2 < 0 )
      v9 = a6 + 2;
  }
  else
  {
    v9 = a6;
  }
  if ( Function_21d1b94(*v7, *(uint *)(v8 + 4), 2, v13, v12, a5, v9) == 15 )
    ErrorHandler();
  Function_21e0b24(a6 + 1, &v13, &v12);
  v10 = a6 + 1;
  if ( *(uint *)(v6 + 184) )
  {
    v10 = a6 - 1;
    if ( a6 - 1 < 0 )
      v10 = a6 + 3;
  }
  result = Function_21d1b94(*v7, *(uint *)(v8 + 4), 0, v13, v12, a5, v10);
  if ( result == 15 )
    result = ErrorHandler();
  return result;
}

//----- (021E072C) --------------------------------------------------------
uint __fastcall Function_21e072c(int a1, int *a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  uint result;
  int v12;
  int v13;

  v6 = a1;
  v7 = a2;
  v8 = a3;
  Function_21e0b24(a6, &v13, &v12);
  if ( *(uint *)(v6 + 184) )
  {
    v9 = a6 - 2;
    if ( a6 - 2 < 0 )
      v9 = a6 + 2;
  }
  else
  {
    v9 = a6;
  }
  if ( Function_21d1bd8(*v7, *(uint *)(v8 + 4), 2, v13, v12, a5, v9) == -1 )
    ErrorHandler();
  Function_21e0b24(a6 + 1, &v13, &v12);
  v10 = a6 + 1;
  if ( *(uint *)(v6 + 184) )
  {
    v10 = a6 - 1;
    if ( a6 - 1 < 0 )
      v10 = a6 + 3;
  }
  result = Function_21d1bd8(*v7, *(uint *)(v8 + 4), 0, v13, v12, a5, v10);
  if ( result == -1 )
    result = ErrorHandler();
  return result;
}

//----- (021E07B8) --------------------------------------------------------
uint __fastcall Function_21e07b8(int a1, int *a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  uint result;
  int v12;
  int v13;

  v6 = a1;
  v7 = a2;
  v8 = a3;
  Function_21e0b24(a6, &v13, &v12);
  if ( *(uint *)(v6 + 184) )
  {
    v9 = a6 - 2;
    if ( a6 - 2 < 0 )
      v9 = a6 + 2;
  }
  else
  {
    v9 = a6;
  }
  if ( Function_21d1c30(*v7, *(uint *)(v8 + 4), 2, v13, v12, a5, v9) == -1 )
    ErrorHandler();
  Function_21e0b24(a6 + 1, &v13, &v12);
  v10 = a6 + 1;
  if ( *(uint *)(v6 + 184) )
  {
    v10 = a6 - 1;
    if ( a6 - 1 < 0 )
      v10 = a6 + 3;
  }
  result = Function_21d1c30(*v7, *(uint *)(v8 + 4), 0, v13, v12, a5, v10);
  if ( result == -1 )
    result = ErrorHandler();
  return result;
}

//----- (021E0844) --------------------------------------------------------
uint __fastcall Function_21e0844(int a1, int *a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  uint result;
  int v12;
  int v13;

  v6 = a1;
  v7 = a2;
  v8 = a3;
  Function_21e0b24(a6, &v13, &v12);
  if ( *(uint *)(v6 + 184) )
  {
    v9 = a6 - 2;
    if ( a6 - 2 < 0 )
      v9 = a6 + 2;
  }
  else
  {
    v9 = a6;
  }
  if ( Function_21d1c88(*v7, *(uint *)(v8 + 4), 2, v13, v12, a5, v9) == -1 )
    ErrorHandler();
  Function_21e0b24(a6 + 1, &v13, &v12);
  v10 = a6 + 1;
  if ( *(uint *)(v6 + 184) )
  {
    v10 = a6 - 1;
    if ( a6 - 1 < 0 )
      v10 = a6 + 3;
  }
  result = Function_21d1c88(*v7, *(uint *)(v8 + 4), 0, v13, v12, a5, v10);
  if ( result == -1 )
    result = ErrorHandler();
  return result;
}

//----- (021E08D0) --------------------------------------------------------
int __fastcall Function_21e08d0(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int v7;
  int v8;

  v6 = a1;
  v7 = a2;
  v8 = a3;
  *(uint *)(a1 + 184);
  Function_21e09a4(a1, a2);
  Function_21df870(a5, a6, 1, *(uint *)(v8 + 16));
  *(uint *)(v6 + 184);
  return Function_21e09a4(v6, v7);
}

//----- (021E0944) --------------------------------------------------------
int __fastcall Function_21e0944(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int v7;

  v6 = a1;
  v7 = a2;
  Function_21df870(a5, a6, 1, *(uint *)(a3 + 16));
  Function_21d4d1c(*(int ***)(v6
                            + 4
                            * (((uint)(*(uint *)(v6 + 184) + 1) >> 31)
                             + __ROR4__(
                                 ((*(uint *)(v6 + 184) + 1) << 31) - ((uint)(*(uint *)(v6 + 184) + 1) >> 31),
                                 31))
                            + 32));
  return Function_21e09a4(v6, v7);
}

//----- (021E09A4) --------------------------------------------------------
uint __fastcall Function_21e09a4(int a1, uint *a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8;
  uint *v9;
  int v10;
  uint v11;
  uchar *v12;
  char v13;
  int v14;
  int v15;
  int v16;
  int v18;
  int v19;
  int v20;
  int v21;
  uchar *v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;

  v30 = a4;
  v8 = a1;
  v9 = a2;
  v18 = a3;
  v19 = a4;
  v10 = *a2;
  if ( !*(uint *)(a1 + 4 * a7) )
    ErrorHandler();
  v11 = Function_21e0b64(v9, v18, a5, a6);
  v20 = *(uint *)(v10 + 336);
  v12 = Function_200a72c(*(int **)(v8 + 20), 0);
  v24 = -12;
  v25 = 40;
  v26 = 3;
  v27 = 0;
  v22 = v12;
  v28 = 1;
  v29 = v19;
  v13 = Function_201fab4(v12, 1);
  v14 = Function_21d4d6c(*(uint *)(v10 + 336), 0x10u, 2u);
  Function_21d4e10(*(uint *)(v10 + 336), v14, 697, v11);
  v21 = v14;
  v15 = *(uint *)(v8 + 4 * a7);
  v16 = v8 + 32;
  v23 = v15;
  *(uint *)(v16 + 4 * a8) = Function_21d4ca0((int)&v20);
  Function_2012a60(**(uint ***)(v16 + 4 * a8), v13);
  return Function_21d4da0(v14);
}

//----- (021E0A4C) --------------------------------------------------------
int __fastcall Function_21e0a4c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  ushort v6;
  int v7;

  v4 = a2;
  v5 = a3;
  v6 = Function_21d37bc(*(uint *)(a2 + 4));
  v7 = Function_21d334c(*(uint ***)(v4 + 4), v6, v5);
  if ( v7 == -1 )
    ErrorHandler();
  if ( !v7 )
    return 13;
  if ( v7 == 1 )
    return 14;
  ErrorHandler();
  return v3;
}

//----- (021E0A8C) --------------------------------------------------------
int Function_21e0a8c()
{
  return 13;
}

//----- (021E0A90) --------------------------------------------------------
int Function_21e0a90()
{
  return 14;
}

//----- (021E0A94) --------------------------------------------------------
int Function_21e0a94()
{
  return 21;
}

//----- (021E0A98) --------------------------------------------------------
int __fastcall Function_21e0a98(int a1, int a2, int a3)
{
  return Function_21d33a4(*(uint ***)(a2 + 4), a3) + 17;
}

//----- (021E0AA8) --------------------------------------------------------
int __fastcall Function_21e0aa8(int a1, int a2, int a3)
{
  return Function_21d33bc(*(uint ***)(a2 + 4), a3) + 17;
}

//----- (021E0AB8) --------------------------------------------------------
int __fastcall Function_21e0ab8(int a1, int a2, int a3)
{
  return Function_21d3374(*(uint ***)(a2 + 4), a3) + 15;
}

//----- (021E0AC8) --------------------------------------------------------
int __fastcall Function_21e0ac8(int a1, int a2, int a3)
{
  return Function_21d338c(*(uint ***)(a2 + 4), a3) + 15;
}

//----- (021E0AD8) --------------------------------------------------------
int Function_21e0ad8()
{
  return 20;
}

//----- (021E0ADC) --------------------------------------------------------
int __fastcall Function_21e0adc(int a1, int a2, uchar a3)
{
  return Function_21d3404(*(uint ***)(a2 + 4), a3) + 111;
}

//----- (021E0AEC) --------------------------------------------------------
int __fastcall Function_21e0aec(int a1, int a2, uint a3)
{
  return Function_21d3410(*(uint ***)(a2 + 4), 492, a3) + 115;
}

//----- (021E0AFC) --------------------------------------------------------
int __fastcall Function_21e0afc(int a1, int a2, uint a3)
{
  return Function_21d3410(*(uint ***)(a2 + 4), 487, a3) + 117;
}

//----- (021E0B10) --------------------------------------------------------
int __fastcall Function_21e0b10(int a1, int a2, uint a3)
{
  return Function_21d3410(*(uint ***)(a2 + 4), 479, a3) + 119;
}

//----- (021E0B24) --------------------------------------------------------
uint __fastcall Function_21e0b24(uint result, int *a2, int *a3)
{
  int v3;
  int *v4;
  int *v5;
  int v6;

  v3 = 0;
  v4 = a2;
  v5 = a3;
  v6 = 0;
  switch ( (uchar)result )
  {
    case 0:
      goto LABEL_3;
    case 1:
      v3 = 104;
LABEL_3:
      v3 += 76;
      v6 = 88;
      break;
    case 2:
      goto LABEL_5;
    case 3:
      v3 = 104;
LABEL_5:
      result = 332;
      v3 += 332;
      v6 = 88;
      break;
    default:
      result = ErrorHandler();
      break;
  }
  *v4 = v3;
  *v5 = v6;
  return result;
}

//----- (021E0B64) --------------------------------------------------------
int __fastcall Function_21e0b64(int result, int a2, char a3, char a4)
{
  switch ( a3 )
  {
    case 0:
      result = Function_21e0a4c(result, a2, a4);
      break;
    case 1:
      result = Function_21e0a8c();
      break;
    case 2:
      result = Function_21e0a90();
      break;
    case 3:
      result = Function_21e0a94();
      break;
    case 4:
      result = Function_21e0ab8(result, a2, a4);
      break;
    case 5:
      result = Function_21e0ac8(result, a2, a4);
      break;
    case 6:
      result = Function_21e0a98(result, a2, a4);
      break;
    case 7:
      result = Function_21e0aa8(result, a2, a4);
      break;
    case 8:
      result = Function_21e0ad8();
      break;
    case 9:
      result = Function_21e0adc(result, a2, a4);
      break;
    case 10:
      result = Function_21e0aec(result, a2, a4);
      break;
    case 11:
      result = Function_21e0afc(result, a2, a4);
      break;
    case 12:
      result = Function_21e0b10(result, a2, a4);
      break;
    default:
      return result;
  }
  return result;
}

//----- (021E0BF8) --------------------------------------------------------
int __fastcall Function_21e0bf8(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = 0;
  do
  {
    result = Function_21d4d1c(*(int ***)(v1 + 32));
    ++v2;
    v1 += 4;
  }
  while ( v2 < 2 );
  return result;
}

//----- (021E0C10) --------------------------------------------------------
int __fastcall Function_21e0c10(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_2021cac(*(uint *)(a1 + 188), 0);
  *(uint *)(v1 + 192) = 24;
  result = 1;
  *(uint *)(v1 + 196) = 1;
  return result;
}

//----- (021E0C30) --------------------------------------------------------
int __fastcall Function_21e0c30(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  result = a1[49];
  if ( result )
  {
    result = --v1[48];
    if ( result <= 0 )
    {
      Function_2021cac(v1[47], 1);
      result = 0;
      v1[49] = 0;
    }
  }
  return result;
}

//----- (021E0C68) --------------------------------------------------------
int (*__fastcall Function_21e0c68(int *a1, int a2, int a3))()
{
  int v3;
  int *v4;
  int v5;
  int v6;
  int v7;
  int (*result)();

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = Function_21e0d04(a3);
  v7 = Function_21e0d40(v3, v5);
  *v4 = v6;
  v4[1] = v7;
  v4[8] = 0;
  v4[9] = Function_21e0d90();
  v4[2] = (int)Function_21e0d94;
  v4[3] = (int)Function_21e0d98;
  v4[4] = (int)Function_21e0da8;
  v4[5] = (int)Function_21e0dac;
  v4[6] = (int)Function_21e0e8c;
  result = Function_21e0e90;
  v4[7] = (int)Function_21e0e90;
  return result;
}

//----- (021E0CC0) --------------------------------------------------------
int __fastcall Function_21e0cc0(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_21e0d68(*a1);
  return Function_21e0d7c(v1[1]);
}

//----- (021E0CD4) --------------------------------------------------------
int __fastcall Function_21e0cd4(int *a1, int a2, int a3)
{
  int result;

  result = *a1;
  *(uint *)(result + 8) = a2;
  *(uint *)(result + 12) = a3;
  return result;
}

//----- (021E0CDC) --------------------------------------------------------
int __fastcall Function_21e0cdc(int *a1, int a2)
{
  int result;

  result = *a1;
  *(uint *)(result + 20) = a2;
  return result;
}

//----- (021E0CE4) --------------------------------------------------------
int Function_21e0ce4()
{
  return 0;
}

//----- (021E0CE8) --------------------------------------------------------
int __fastcall Function_21e0ce8(int *a1, int a2)
{
  int v2;
  int result;

  v2 = *a1;
  result = 1;
  if ( a2 == 1 )
  {
    a2 = 0;
    result = 0;
  }
  *(uint *)(v2 + 28) = a2;
  return result;
}

//----- (021E0CF8) --------------------------------------------------------
int __fastcall Function_21e0cf8(int *a1, int a2)
{
  int v2;
  int result;

  v2 = *a1;
  result = 0;
  *(uint *)(v2 + 24) = a2;
  *(uint *)(v2 + 28) = 0;
  return result;
}

//----- (021E0D04) --------------------------------------------------------
int *__fastcall Function_21e0d04(uint a1, int a2)
{
  int v2;
  int *v3;

  v2 = a2;
  v3 = (int *)malloc(a1, 32);
  if ( !v3 )
    ErrorHandler();
  Call_FillMemWithValue(v3, 0, 0x20u);
  *v3 = Function_21d138c(v2);
  v3[1] = Function_21d13ec(v2);
  v3[4] = Function_21d1410(v2, 5);
  return v3;
}

//----- (021E0D40) --------------------------------------------------------
uchar *__fastcall Function_21e0d40(uint a1, int a2)
{
  int v2;
  uchar *v3;

  v2 = a2;
  v3 = (uchar *)malloc(a1, 4);
  if ( !v3 )
    ErrorHandler();
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  *(uint *)v3 = Function_21d13fc(v2);
  return v3;
}

//----- (021E0D68) --------------------------------------------------------
uint __fastcall Function_21e0d68(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return free(v1);
}

//----- (021E0D7C) --------------------------------------------------------
uint __fastcall Function_21e0d7c(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return free(v1);
}

//----- (021E0D90) --------------------------------------------------------
int Function_21e0d90()
{
  return 0;
}

//----- (021E0D94) --------------------------------------------------------
int Function_21e0d94()
{
  return 1;
}

//----- (021E0D98) --------------------------------------------------------
BOOL __fastcall Function_21e0d98(int a1)
{
  return *(uint *)(a1 + 12) == 1;
}

//----- (021E0DA8) --------------------------------------------------------
int Function_21e0da8()
{
  return 1;
}

//----- (021E0DAC) --------------------------------------------------------
int __fastcall Function_21e0dac(int a1, uint *a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = a2[2];
  switch ( (uchar)*a2 )
  {
    case 0u:
      v7 = (int *)malloc(a2[1], 88);
      v3[2] = v7;
      Call_FillMemWithValue(v7, 0, 0x58u);
      ++*v3;
      goto LABEL_21;
    case 1u:
      v8 = a2[1];
      Function_21e0f4c(a2[2], a1);
      v9 = *(uint *)(v5 + 20);
      if ( v9 )
      {
        if ( v9 == 1 )
        {
          Function_21e14d4(v6, v4, v5, 1);
        }
        else if ( v9 == 2 )
        {
          Function_21e16a8(v6, v4, v5, 1);
        }
      }
      else
      {
        Function_21e15ac(v6, v4, v5, 1);
      }
      ++*v3;
      goto LABEL_21;
    case 2u:
      v10 = *(uint *)(a3 + 20);
      if ( v10 )
      {
        if ( v10 == 1 )
        {
          a2 = (uint *)Function_21e1550(a2[2], v4);
        }
        else if ( v10 == 2 )
        {
          a2 = (uint *)Function_21e1730(a2[2], v4);
        }
      }
      else
      {
        a2 = (uint *)Function_21e1630(a2[2], v4);
      }
      if ( a2 )
        ++*v3;
      goto LABEL_21;
    case 3u:
      REG_BLDCNT = 0;
      result = 1;
      break;
    default:
LABEL_21:
      result = 0;
      break;
  }
  return result;
}

//----- (021E0E8C) --------------------------------------------------------
int Function_21e0e8c()
{
  return 0;
}

//----- (021E0E90) --------------------------------------------------------
int __fastcall Function_21e0e90(int a1, uint *a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a2[2];
  switch ( (uchar)*a2 )
  {
    case 0u:
      v6 = *(uint *)(a3 + 20);
      if ( v6 )
      {
        if ( v6 == 1 )
        {
          Function_21e14d4(v5, v4, a3, 0);
        }
        else if ( v6 == 2 )
        {
          Function_21e16a8(v5, v4, a3, 0);
        }
      }
      else
      {
        Function_21e15ac(v5, v4, a3, 0);
      }
      ++*v3;
      goto LABEL_22;
    case 1u:
      v7 = *(uint *)(a3 + 20);
      if ( v7 )
      {
        if ( v7 == 1 )
        {
          a3 = Function_21e1550(v5, v4);
        }
        else if ( v7 == 2 )
        {
          a3 = Function_21e1730(v5, v4);
        }
      }
      else
      {
        a3 = Function_21e1630(v5, v4);
      }
      if ( a3 )
        ++*v3;
      goto LABEL_22;
    case 2u:
      Function_21e0f94(v5, v4);
      ++*v3;
      goto LABEL_22;
    case 3u:
      free(v5);
      ++*v3;
      goto LABEL_22;
    case 4u:
      result = 1;
      break;
    default:
LABEL_22:
      result = 0;
      break;
  }
  return result;
}

//----- (021E0F4C) --------------------------------------------------------
int __fastcall Function_21e0f4c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = a1;
  Function_21e11dc(a2, a3, a4);
  Function_21e1228(v4, v5);
  Function_21e127c(v7, v4, v6);
  Function_21e136c(v7, v4, v5, v6);
  Function_21e0fbc(v4, v6);
  return Function_21e10d0(v4, v5, v6);
}

//----- (021E0F94) --------------------------------------------------------
int __fastcall Function_21e0f94(int a1, uint ***a2)
{
  uint ***v2;
  int v3;

  v2 = a2;
  v3 = a1;
  Function_21e14bc();
  Function_201ada4_ClearTextBox((int)(*v2 + 1), 0);
  Function_21e1328(v3, v2);
  return Function_2019ebc(**v2, 1u);
}

//----- (021E0FBC) --------------------------------------------------------
int __fastcall Function_21e0fbc(int *a1, uint a2, int a3, int a4)
{
  int *v4;
  uint v5;
  int v6;
  int v7;
  int v8;
  int v9;
  ushort *v11;
  int v12;

  v12 = a4;
  v4 = a1;
  v5 = a2;
  Function_21d2724(*a1, 0x21u, *(uint **)*a1, 3, 0, 0, 1, a2);
  v6 = Function_21d27b8(*v4, 0x32u, 1, &v11, v5);
  Function_20198c0(
    *(uint *)*v4,
    3,
    (int)(v11 + 6),
    0,
    0,
    (uint)*v11 << 21 >> 24,
    (uint)v11[1] << 21 >> 24);
  free(v6);
  v7 = Function_21d27b8(*v4, 0x33u, 1, &v11, v5);
  Function_20198c0(
    *(uint *)*v4,
    3,
    (int)(v11 + 6),
    0,
    3u,
    (uint)*v11 << 21 >> 24,
    (uint)v11[1] << 21 >> 24);
  free(v7);
  v8 = Function_21d27b8(*v4, 0x37u, 1, &v11, v5);
  Function_20198c0(
    *(uint *)*v4,
    3,
    (int)(v11 + 6),
    0,
    0x10u,
    (uint)*v11 << 21 >> 24,
    (uint)v11[1] << 21 >> 24);
  free(v8);
  v9 = Function_21d27b8(*v4, 0x38u, 1, &v11, v5);
  Function_20198c0(
    *(uint *)*v4,
    3,
    (int)(v11 + 6),
    12,
    8u,
    (uint)*v11 << 21 >> 24,
    (uint)v11[1] << 21 >> 24);
  free(v9);
  return Function_201c3c0(*(uint *)*v4, 3);
}

//----- (021E10D0) --------------------------------------------------------
int __fastcall Function_21e10d0(uint *a1, int *a2, uint a3)
{
  uint *v3;
  int *v4;
  int v5;
  uint v6;
  int v7;
  uint v9;
  ushort **v10;
  ushort *v11;

  v3 = a1;
  v4 = a2;
  v9 = a3;
  v11 = (ushort *)Function_2023790(64, a3);
  v10 = (ushort **)LoadFromMsgNARC(0, 26, 697, v9);
  v5 = Function_21d37bc(v4[1]);
  if ( Function_21d37cc(v4[1]) != 2 )
  {
    v5 = 0;
    ErrorHandler();
  }
  v6 = Function_21e185c(v4[6]);
  Function_200b1b8_CallMsgDecrypt(v10, v6, v11);
  Function_2002d7c(0, (int)v11, 0);
  Function_201d78c(*v3 + 4, 0);
  Function_20237bc_FreeMsg((int)v11, v7);
  Function_200b190((ushort *)v10);
  Function_21e1188(v3, v9, v5, v4[6], v4[7], 0, 131328, 0);
  Function_21e18a0(v3, v9, v5, v4[6]);
  return Function_21e18dc(v3, v9, v5, v4[6]);
}

//----- (021E1188) --------------------------------------------------------
uint __fastcall Function_21e1188(uint *a1, int a2, int a3, int a4, int a5)
{
  uint *v5;
  int v6;
  int v7;

  v5 = a1;
  v6 = Function_21d56bc(a3, a4, a5);
  Function_2002eb4(0, v6, 0);
  Function_201d78c(*v5 + 4, 0);
  return Function_21d5600(v6, v7);
}

//----- (021E11DC) --------------------------------------------------------
int __fastcall Function_21e11dc(int *a1, int a2, int a3)
{
  int v3;
  int *v4;
  int v5;
  int v6;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = Function_21d375c(*(uint *)(a2 + 4));
  Function_21d1778(*v4, *(uint *)(v3 + 4), v5, v6, 704512, 0x20000);
  return Function_21d238c(*v4, 0);
}

//----- (021E1210) --------------------------------------------------------
int __fastcall Function_21e1210(int *a1)
{
  int *v1;

  v1 = a1;
  Function_21d23c0(*a1, 0);
  return Function_21d2360(*v1, 0);
}

//----- (021E1228) --------------------------------------------------------
int __fastcall Function_21e1228(int *a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = a2;
  v4 = Function_21d2170(*a1);
  v5 = Function_21d37bc(*(uint *)(v3 + 4));
  Function_21d1890(*v2, *(uint *)(v3 + 4), v5, 2, 48, 72);
  return Function_2007dec(v4, 6u, 0);
}

//----- (021E1260) --------------------------------------------------------
int __fastcall Function_21e1260(int *a1)
{
  int v1;

  v1 = Function_21d2170(*a1);
  Function_2007dec(v1, 6u, 1);
  return Function_2008780(v1);
}

//----- (021E127C) --------------------------------------------------------
int *__fastcall Function_21e127c(int a1, int *a2, uint a3)
{
  int *v3;
  int v4;
  uint v5;
  int v6;
  int v7;
  int *v8;
  int *v9;
  int *result;

  v3 = (int *)*a2;
  v4 = a1;
  v5 = a3;
  v6 = Function_21d26e0(*a2);
  v7 = v6;
  v8 = Function_2009a4c(v3[80], v6, 0x5Au, 1, 4090, 1, v5);
  *(uint *)(v4 + 8) = v8;
  Function_200a3dc(v8);
  Function_2009d4c(*(int **)(v4 + 8));
  v9 = Function_2009b04(v3[81], v7, 0xDu, 0, 4013, 1, 5, v5);
  *(uint *)(v4 + 12) = v9;
  Function_200a640(v9);
  Function_2009d4c(*(int **)(v4 + 12));
  *(uint *)(v4 + 16) = Function_2009bc4(v3[82], v7, 0x58u, 1, 4088, 2u, v5);
  result = Function_2009bc4(v3[83], v7, 0x59u, 1, 4089, 3u, v5);
  *(uint *)(v4 + 20) = result;
  return result;
}

//----- (021E1328) --------------------------------------------------------
int __fastcall Function_21e1328(int a1, int ***a2)
{
  int v2;
  int **v3;

  v2 = a1;
  v3 = *a2;
  Function_200a4e4(*(int **)(a1 + 8));
  Function_200a6dc(*(int **)(v2 + 12));
  Function_2009d68(v3[80], *(uint ***)(v2 + 8));
  Function_2009d68(v3[81], *(uint ***)(v2 + 12));
  Function_2009d68(v3[82], *(uint ***)(v2 + 16));
  return Function_2009d68(v3[83], *(uint ***)(v2 + 20));
}

//----- (021E136C) --------------------------------------------------------
uint __fastcall Function_21e136c(int *a1, int *a2, int a3, int a4)
{
  int *v4;
  int *v5;
  int v6;
  int v7;
  uint *v8;
  int v9;
  int v10;
  int *v11;
  int v13;
  int v14;
  int v15;
  uchar *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  char *v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  char v31;
  int v32;

  v32 = a4;
  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = (uint *)*a2;
  v13 = Function_21d37bc(*(uint *)(a3 + 4));
  Function_20093b4((int)&v31, 4090, 4013, 4088, 4089, -1, -1, 0, 0, v8[80], v8[81], v8[82], v8[83], 0, 0);
  v24 = v8[79];
  v25 = &v31;
  v28 = 32;
  v29 = 1;
  v26 = 786432;
  v27 = 212992;
  v30 = v7;
  v9 = Function_2021b90(&v24);
  *v4 = v9;
  Function_2021d6c(v9, 0x11u);
  if ( Function_21d37cc(*(uint *)(v6 + 4)) != 2 )
    v13 = 0;
  v10 = Function_21e1460(v5, v13, v7);
  v11 = (int *)Function_21d2344(*v5, 1);
  v14 = *(uint *)(*v5 + 336);
  v16 = Function_200a72c(v11, 0);
  v17 = *v4;
  v18 = -78;
  v19 = -8;
  v20 = 0;
  v21 = 31;
  v22 = 1;
  v23 = v7;
  v15 = v10;
  v4[1] = Function_21d4ca0((int)&v14);
  return Function_21d4da0(v10);
}

//----- (021E1460) --------------------------------------------------------
int __fastcall Function_21e1460(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = Function_21d4d6c(*(uint *)(*(uint *)a1 + 336), 0x12u, 2u);
  v5 = Function_21d566c(v3);
  Function_2002d7c(2, v5, 0);
  Function_21d4e80(*(uint *)(*(uint *)v2 + 336), v4);
  Function_21d5600(v5, v6);
  return v4;
}

//----- (021E14BC) --------------------------------------------------------
int __fastcall Function_21e14bc(int *a1)
{
  int *v1;

  v1 = a1;
  Function_2021bd4(*a1);
  *v1 = 0;
  return Function_21d4d1c((int **)v1[1]);
}

//----- (021E14D4) --------------------------------------------------------
int __fastcall Function_21e14d4(int a1, int *a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int v7;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  Function_21d2360(*a2, 1);
  Function_21e17ac(v5);
  if ( Function_21e2a54(*(uint *)(v6 + 16)) )
  {
    if ( v7 )
      Function_21d23f8((uint *)(*v4 + 364), 1, -16, 0, 0, 16, 43, 8, 0);
    else
      Function_21d23f8((uint *)(*v4 + 364), 1, 0, -16, 16, 0, 43, 8, 0);
  }
  return Function_21e17dc(v4);
}

//----- (021E1550) --------------------------------------------------------
int __fastcall Function_21e1550(int a1, int *a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v4 = a1;
  v5 = a2;
  v6 = a4;
  v7 = Function_21e2a54(*(uint *)(a3 + 16));
  v8 = *v5;
  if ( v7 )
    v9 = Function_21d2424((uint *)(v8 + 364));
  else
    v9 = Function_21d24ec(v8 + 364);
  v10 = v9;
  if ( v9 == 1 )
  {
    if ( v6 == 1 )
    {
      Function_21e17c4(v4);
      Function_21d2360(*v5, 0);
    }
    else
    {
      Function_21e1260(v5);
      Function_21e1210(v5);
    }
  }
  else
  {
    Function_21e17dc(v5);
  }
  return v10;
}

//----- (021E15AC) --------------------------------------------------------
uint *__fastcall Function_21e15ac(int a1, int a2, uint *a3, int a4)
{
  int v4;
  int v5;
  uint *v6;
  int v7;
  uint *result;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  Function_21e17ac(a1);
  if ( !v7 )
  {
    Function_21e17ec(v4, v6[2], v6[3], 4);
    Function_21e1824(v4);
  }
  result = (uint *)Function_21e2a54(v6[4]);
  if ( result )
  {
    if ( v7 )
      result = Function_21d23f8((uint *)(*(uint *)v5 + 364), 1, -16, 0, 0, 16, 42, 47, 0);
    else
      result = Function_21d23f8((uint *)(*(uint *)v5 + 364), 1, 0, -16, 16, 0, 42, 47, 0);
  }
  return result;
}

//----- (021E1630) --------------------------------------------------------
int __fastcall Function_21e1630(int a1, int *a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int *v11;
  int v13;
  int v14;
  int v15;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( a4 )
  {
    v13 = 1;
    v14 = 1;
  }
  else
  {
    v13 = Function_21e1808();
    v14 = Function_21e1840(v4, v5);
  }
  v8 = Function_21e2a54(*(uint *)(v6 + 16));
  v9 = *v5;
  if ( v8 )
    v15 = Function_21d2424((uint *)(v9 + 364));
  else
    v15 = Function_21d24ec(v9 + 364);
  v10 = 0;
  v11 = &v13;
  do
  {
    if ( !*v11 )
      break;
    ++v10;
    ++v11;
  }
  while ( v10 < 3 );
  if ( v10 != 3 )
    return 0;
  if ( v7 == 1 )
    Function_21e17c4(v4);
  return 1;
}

//----- (021E16A8) --------------------------------------------------------
uint *__fastcall Function_21e16a8(int a1, int *a2, uint *a3, int a4)
{
  int *v4;
  int v5;
  uint *v6;
  int v7;
  uint *result;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  Function_21e17ac(a1);
  Function_21d2360(*v4, 1);
  if ( !v7 )
    Function_21e17ec(v5, v6[2], v6[3], 1);
  result = (uint *)Function_21e2a54(v6[4]);
  if ( result )
  {
    if ( v7 )
      result = Function_21d23f8((uint *)(*v4 + 364), 1, -16, 0, 0, 16, 42, 47, 0);
    else
      result = Function_21d23f8((uint *)(*v4 + 364), 1, 0, -16, 16, 0, 42, 47, 0);
  }
  return result;
}

//----- (021E1730) --------------------------------------------------------
int __fastcall Function_21e1730(int a1, int *a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int *v11;
  int v13;
  int v14;
  int v15;

  v15 = a4;
  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( a4 )
    v13 = 1;
  else
    v13 = Function_21e1808();
  v8 = Function_21e2a54(*(uint *)(v6 + 16));
  v9 = *v5;
  if ( v8 )
    v14 = Function_21d2424((uint *)(v9 + 364));
  else
    v14 = Function_21d24ec(v9 + 364);
  v10 = 0;
  v11 = &v13;
  do
  {
    if ( !*v11 )
      break;
    ++v10;
    ++v11;
  }
  while ( v10 < 2 );
  if ( v10 != 2 )
    return 0;
  if ( v7 == 1 )
  {
    Function_21e17c4(v4);
    Function_21d2360(*v5, 0);
  }
  else
  {
    Function_21e1210(v5);
  }
  return 1;
}

//----- (021E17AC) --------------------------------------------------------
int __fastcall Function_21e17ac(int *a1)
{
  int *v1;

  v1 = a1;
  Function_2021fe0(*a1, 1);
  return Function_2012af0(*(uint **)v1[1], 1);
}

//----- (021E17C4) --------------------------------------------------------
int __fastcall Function_21e17c4(int *a1)
{
  int *v1;

  v1 = a1;
  Function_2021fe0(*a1, 0);
  return Function_2012af0(*(uint **)v1[1], 0);
}

//----- (021E17DC) --------------------------------------------------------
int __fastcall Function_21e17dc(int *a1)
{
  return Function_21d24fc(*a1, *a1 + 364);
}

//----- (021E17EC) --------------------------------------------------------
uint *__fastcall Function_21e17ec(int a1, int a2, int a3, int a4)
{
  return Function_21d2648((uint *)(a1 + 24), 48, a2, 72, a3, a4);
}

//----- (021E1808) --------------------------------------------------------
int __fastcall Function_21e1808(int a1, int *a2)
{
  int v2;
  int *v3;
  int v4;

  v2 = a1;
  v3 = a2;
  v4 = Function_21d2664((uint *)(a1 + 24));
  Function_21d2164(*v3, *(uint *)(v2 + 24), *(uint *)(v2 + 28));
  return v4;
}

//----- (021E1824) --------------------------------------------------------
uint *__fastcall Function_21e1824(int a1)
{
  return Function_21d2648((uint *)(a1 + 56), 172, 170, 32, 82, 4);
}

//----- (021E1840) --------------------------------------------------------
int __fastcall Function_21e1840(int a1, int *a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = Function_21d2664((uint *)(a1 + 56));
  v5 = *(uint *)(v2 + 56);
  v6 = *(uint *)(v2 + 60);
  Function_21d1848(*v3);
  return v4;
}

//----- (021E185C) --------------------------------------------------------
int __fastcall Function_21e185c(char a1)
{
  int v1;

  switch ( a1 )
  {
    case 1:
      v1 = 125;
      break;
    case 2:
      v1 = 22;
      break;
    case 3:
      v1 = 23;
      break;
    case 4:
      v1 = 25;
      break;
    case 5:
      v1 = 24;
      break;
    case 7:
      v1 = 26;
      break;
    default:
      ErrorHandler();
      break;
  }
  return v1;
}

//----- (021E18A0) --------------------------------------------------------
uint __fastcall Function_21e18a0(uint *a1, uint a2, uint a3, int a4)
{
  uint *v4;
  ushort *v5;
  int v6;

  v4 = a1;
  v5 = Function_21d561c(a3, a4, a2);
  Function_201d78c(*v4 + 4, 0);
  return Function_21d5600((int)v5, v6);
}

//----- (021E18DC) --------------------------------------------------------
uint __fastcall Function_21e18dc(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = Function_21d566c(a3);
  Function_2002d7c(0, v4, 0);
  Function_201d78c(*v3 + 4, 0);
  return Function_21d5600(v4, v5);
}

//----- (021E1924) --------------------------------------------------------
int (*__fastcall Function_21e1924(int *a1, int a2, int a3))()
{
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int (*result)();

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Function_21e199c(a3);
  v7 = Function_21e19fc(v4, v5);
  v8 = Function_21e1a24(v4, v5);
  *v3 = v6;
  v3[1] = v7;
  v3[8] = v8;
  v3[9] = Function_21e1acc();
  v3[2] = (int)Function_21e1ad0;
  v3[3] = (int)Function_21e1b14;
  v3[4] = (int)Function_21e1b54;
  v3[5] = (int)Function_21e1b68;
  v3[6] = (int)Function_21e1bfc;
  result = Function_21e1cb8;
  v3[7] = (int)Function_21e1cb8;
  return result;
}

//----- (021E1984) --------------------------------------------------------
int __fastcall Function_21e1984(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_21e1a7c(*a1);
  Function_21e1a90(*v1);
  return Function_21e1aa4(v1[8]);
}

//----- (021E199C) --------------------------------------------------------
int *__fastcall Function_21e199c(uint a1, int a2)
{
  int v2;
  int *v3;
  int *v4;
  int v5;

  v2 = a2;
  v3 = (int *)malloc(a1, 24);
  if ( !v3 )
    ErrorHandler();
  v4 = v3;
  v5 = 24;
  do
  {
    *(uchar *)v4 = 0;
    v4 = (int *)((char *)v4 + 1);
    --v5;
  }
  while ( v5 );
  *v3 = Function_21d13a0(v2);
  v3[1] = Function_21d13ec(v2);
  v3[5] = Function_21d1430(v2, 3);
  v3[2] = *(uint *)Function_21d1410(v2, 2);
  v3[3] = Function_21d1410(v2, 3);
  v3[4] = Function_21d1410(v2, 4);
  return v3;
}

//----- (021E19FC) --------------------------------------------------------
uchar *__fastcall Function_21e19fc(uint a1, int a2)
{
  int v2;
  uchar *v3;

  v2 = a2;
  v3 = (uchar *)malloc(a1, 4);
  if ( !v3 )
    ErrorHandler();
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  *(uint *)v3 = Function_21d13fc(v2);
  return v3;
}

//----- (021E1A24) --------------------------------------------------------
int *__fastcall Function_21e1a24(uint a1, int a2)
{
  uint v2;
  int v3;
  int v4;
  int *v5;

  v2 = a1;
  v3 = a2;
  v4 = 20 * Function_21e1acc();
  v5 = (int *)malloc(v2, v4);
  if ( !v5 )
    ErrorHandler();
  Call_FillMemWithValue(v5, 0, v4);
  Function_21d4a94(v2, v5, v3, 1);
  Function_21d4bb4(v2, v5 + 5, v3, 2);
  Function_21d4af8(v2, v5 + 10, v3, 4);
  return v5;
}

//----- (021E1A7C) --------------------------------------------------------
uint __fastcall Function_21e1a7c(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return free(v1);
}

//----- (021E1A90) --------------------------------------------------------
uint __fastcall Function_21e1a90(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return free(v1);
}

//----- (021E1AA4) --------------------------------------------------------
uint __fastcall Function_21e1aa4(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  Function_21d4660(v1);
  Function_21d4660(v1 + 20);
  Function_21d4660(v1 + 40);
  return free(v1);
}

//----- (021E1ACC) --------------------------------------------------------
int Function_21e1acc()
{
  return 3;
}

//----- (021E1AD0) --------------------------------------------------------
int __fastcall Function_21e1ad0(int a1, int a2)
{
  int v2;
  int v3;
  int *v4;
  int v5;
  int *v6;

  v2 = a1;
  v3 = a2;
  v4 = (int *)malloc(*(uint *)(a1 + 4), 60);
  Call_FillMemWithValue(v4, 0, 0x3Cu);
  v5 = 0;
  v6 = v4;
  do
  {
    ++v5;
    v6[5] = 4;
    ++v6;
  }
  while ( v5 < 8 );
  v4[4] = 0;
  Function_21e1d40(v4, v3, *(uint *)(v2 + 4));
  Function_21e2968(v4, v3);
  *(uint *)(v2 + 8) = v4;
  return 1;
}

//----- (021E1B14) --------------------------------------------------------
int __fastcall Function_21e1b14(uint *a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1[2];
  if ( a1[3] == 1 )
    return 1;
  if ( a1[4] == 1 )
    return 0;
  if ( Function_21e33ac(*(uint *)(a2 + 20)) )
  {
    Function_21e28a8(v3);
    Function_21e1e00(v3, v2);
    Function_21e2864(v3, v2);
  }
  return 0;
}

//----- (021E1B54) --------------------------------------------------------
int __fastcall Function_21e1b54(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 8);
  Function_21e1e74(*(uint *)(a1 + 8));
  free(v1);
  return 1;
}

//----- (021E1B68) --------------------------------------------------------
int __fastcall Function_21e1b68(uint *a1, uint *a2, int a3, int a4)
{
  uint *v4;
  uint *v5;
  int v6;
  int v7;
  int *v8;
  int result;
  int v10;

  v4 = a2;
  v5 = a1;
  v10 = a3;
  v6 = *(uint *)(a4 + 8);
  v7 = a2[2];
  switch ( (uchar)*a2 )
  {
    case 0u:
      v8 = (int *)malloc(a2[1], 196);
      v4[2] = v8;
      Call_FillMemWithValue(v8, 0, 0xC4u);
      ++*v4;
      goto LABEL_7;
    case 1u:
      Function_21e2014(a2[2], a1, a2[1]);
      Function_21e28d0(v7, v6);
      Function_21e25f8(v7, v5, v10, 1);
      ++*v4;
      goto LABEL_7;
    case 2u:
      if ( Function_21e2664(a2[2], a1) )
        ++*v4;
      goto LABEL_7;
    case 3u:
      Function_21d25ac(*a1 + 484, 0);
      result = 1;
      break;
    default:
LABEL_7:
      result = 0;
      break;
  }
  return result;
}

//----- (021E1BFC) --------------------------------------------------------
int __fastcall Function_21e1bfc(int a1, int a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v12;
  int v13;
  int v14;
  uint *v15;
  uint *v16;
  int v17;

  v12 = a1;
  v4 = *(uint *)(a4 + 8);
  v15 = *(uint **)(a2 + 8);
  v13 = a2;
  if ( v15[48] != *(uint *)(v4 + 56) )
  {
    Function_21e28d0(v15, v4);
    v15[48] = *(uint *)(v4 + 56);
  }
  v17 = 0;
  v5 = v15;
  v14 = (int)(v15 + 40);
  v6 = (int)(v15 + 32);
  v7 = v4;
  do
  {
    if ( v17 )
      v8 = 5;
    else
      v8 = 4;
    Function_21e26a0(v12, *v5, v5[8], *(uint *)(v7 + 20), -6, v8, v6, *(uint *)(v13 + 4), 4, 1, v14);
    Function_21d144c(v5[20], *(uint *)(v7 + 20));
    v6 += 4;
    v14 += 4;
    v7 += 4;
    ++v5;
    ++v17;
  }
  while ( v17 <= 1 );
  v9 = 2;
  v10 = v4 + 8;
  v16 = v15 + 2;
  do
  {
    Function_21e29a4(*v16, *(uint *)(v10 + 20), v9++);
    v10 += 4;
    ++v16;
  }
  while ( v9 < 8 );
  return 0;
}

//----- (021E1CB8) --------------------------------------------------------
int __fastcall Function_21e1cb8(uint *a1, uint *a2, int a3)
{
  uint *v3;
  uint *v4;
  int v5;
  int v6;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = a2[2];
  switch ( (uchar)*a2 )
  {
    case 0u:
      Function_21d25ac(*a1 + 484, 1);
      Function_21e25f8(v6, v4, v5, 0);
      ++*v3;
      goto LABEL_8;
    case 1u:
      if ( Function_21e2664(a2[2], a1) )
        ++*v3;
      goto LABEL_8;
    case 2u:
      Function_21e2044(a2[2], a1, a2[1]);
      ++*v3;
      goto LABEL_8;
    case 3u:
      free(a2[2]);
      ++*v3;
      goto LABEL_8;
    case 4u:
      result = 1;
      break;
    default:
LABEL_8:
      result = 0;
      break;
  }
  return result;
}

//----- (021E1D40) --------------------------------------------------------
int __fastcall Function_21e1d40(int *a1, int a2, uint a3)
{
  uint v3;
  int *v4;
  int v5;
  int result;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  a1[1] = malloc(a3, 32);
  Function_21d154c((uchar *)v4[1], 112, 152, 48, 208);
  Function_21d154c((uchar *)(v4[1] + 4), 56, 96, 48, 208);
  Function_21d154c((uchar *)(v4[1] + 8), 160, 192, 8, 48);
  Function_21d154c((uchar *)(v4[1] + 12), 160, 192, 48, 88);
  Function_21d154c((uchar *)(v4[1] + 16), 160, 192, 88, 128);
  Function_21d154c((uchar *)(v4[1] + 20), 160, 192, 128, 168);
  Function_21d154c((uchar *)(v4[1] + 24), 160, 192, 168, 208);
  Function_21d154c((uchar *)(v4[1] + 28), 160, 192, 208, 248);
  v4[2] = v5;
  v4[3] = (int)v4;
  result = Function_2023fcc(v4[1], 8u, (int)Function_21e1e8c, (int)(v4 + 2), v3);
  *v4 = result;
  return result;
}

//----- (021E1E00) --------------------------------------------------------
int __fastcall Function_21e1e00(int **a1)
{
  int **v1;
  int v2;
  int **v3;
  int result;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    ++v2;
    v3[5] = (int *)3;
    ++v3;
  }
  while ( v2 < 8 );
  Function_202404c(*a1);
  switch ( (uchar)v1[4] )
  {
    case 0u:
      v1[7] = (int *)1;
      break;
    case 1u:
      v1[8] = (int *)1;
      break;
    case 2u:
      v1[9] = (int *)1;
      break;
    case 3u:
      v1[10] = (int *)1;
      break;
    case 4u:
      v1[11] = (int *)1;
      break;
    case 5u:
      v1[12] = (int *)1;
      break;
    default:
      break;
  }
  result = (int)v1[13];
  if ( result )
  {
    if ( result == 1 )
    {
      result = 2;
      v1[6] = (int *)2;
    }
  }
  else
  {
    result = 2;
    v1[5] = (int *)2;
  }
  return result;
}

//----- (021E1E74) --------------------------------------------------------
int __fastcall Function_21e1e74(int *a1)
{
  int *v1;
  int result;

  v1 = a1;
  Function_2024034(*a1);
  free(v1[1]);
  result = 0;
  v1[1] = 0;
  return result;
}

//----- (021E1E8C) --------------------------------------------------------
int __fastcall Function_21e1e8c(int result, int a2, int *a3)
{
  uint *v3;
  int v4;

  v3 = (uint *)a3[1];
  v4 = *a3;
  v3[result + 5] = a2;
  if ( a2 == 2 )
  {
    switch ( (uchar)result )
    {
      case 0:
        result = 0;
        v3[13] = 0;
        break;
      case 1:
        result = 1;
        v3[13] = 1;
        break;
      case 2:
        result = v3[14];
        if ( result & 1 )
        {
          if ( v3[4] )
          {
            Function_21de6d8(*(uint *)(v4 + 8), 0);
            result = 1;
          }
          else
          {
            result = Function_21de6d4();
          }
          if ( result )
          {
            Function_21e27c0(v3, v4, v3[4], 0);
            result = Function_2005748(0x68Bu);
          }
        }
        break;
      case 3:
        result = 2;
        if ( v3[14] & 2 )
        {
          if ( v3[4] == 1 )
          {
            result = Function_21e0ce4();
          }
          else
          {
            Function_21e0ce8(*(int **)(v4 + 16), 0);
            result = 1;
          }
          if ( result )
          {
            Function_21e27c0(v3, v4, v3[4], 1);
            result = Function_2005748(0x68Bu);
          }
        }
        break;
      case 4:
        result = 4;
        if ( v3[14] & 4 )
        {
          if ( v3[4] == 2 )
          {
            result = Function_21e0ce4();
          }
          else
          {
            Function_21e0ce8(*(int **)(v4 + 16), 0);
            result = 1;
          }
          if ( result )
          {
            Function_21e27c0(v3, v4, v3[4], 2);
            result = Function_2005748(0x68Bu);
          }
        }
        break;
      case 5:
        result = 8;
        if ( v3[14] & 8 )
        {
          if ( v3[4] == 3 )
          {
            result = Function_21e0ce4();
          }
          else
          {
            Function_21e0ce8(*(int **)(v4 + 16), 0);
            result = 1;
          }
          if ( result )
          {
            Function_21e27c0(v3, v4, v3[4], 3);
            result = Function_2005748(0x68Bu);
          }
        }
        break;
      case 6:
        result = 16;
        if ( v3[14] & 0x10 )
        {
          if ( v3[4] == 4 )
          {
            result = Function_21e0ce4();
          }
          else
          {
            Function_21e0ce8(*(int **)(v4 + 16), 0);
            result = 1;
          }
          if ( result )
          {
            Function_21e27c0(v3, v4, v3[4], 4);
            result = Function_2005748(0x68Bu);
          }
        }
        break;
      case 7:
        result = 32;
        if ( v3[14] & 0x20 )
        {
          if ( v3[4] == 5 )
          {
            result = Function_21e0ce4();
          }
          else
          {
            Function_21e0ce8(*(int **)(v4 + 16), 0);
            result = 1;
          }
          if ( result )
          {
            Function_21e27c0(v3, v4, v3[4], 5);
            result = Function_2005748(0x68Bu);
          }
        }
        break;
      default:
        return result;
    }
  }
  return result;
}

//----- (021E2014) --------------------------------------------------------
int __fastcall Function_21e2014(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a2;
  v4 = a3;
  v5 = a1;
  Function_21e20a4(a2, a3);
  Function_21e2180(v5, v3, v4);
  Function_21e22c8(v5, v3, v4);
  return Function_21e2478(v5, v3, v4);
}

//----- (021E2044) --------------------------------------------------------
int __fastcall Function_21e2044(int a1, int *a2, uint a3)
{
  int v3;
  uint v4;
  int *v5;
  int v6;
  int result;

  v3 = a1;
  v4 = a3;
  v5 = a2;
  Function_21d276c(*a2, 9u, 4, 128, 32, a3);
  Function_21d276c(*v5, 9u, 4, 160, 32, v4);
  Function_21e2458(v3);
  Function_21e256c(v3, v5);
  Function_21e226c(v3, v5);
  v6 = 0;
  do
  {
    result = *(uint *)(v3 + 160);
    if ( result )
      result = free(result);
    ++v6;
    v3 += 4;
  }
  while ( v6 < 8 );
  return result;
}

//----- (021E20A4) --------------------------------------------------------
int __fastcall Function_21e20a4(int *a1, uint a2, int a3, int a4)
{
  int *v4;
  uint v5;
  int v6;
  int v7;
  int v8;
  ushort *v10;
  int v11;

  v11 = a4;
  v4 = a1;
  v5 = a2;
  Function_21d2724(*a1, 0x22u, *(uint **)*a1, 6, 0, 0, 1, a2);
  v6 = Function_21d27b8(*v4, 0x3Eu, 1, &v10, v5);
  Function_20198c0(
    *(uint *)*v4,
    6,
    (int)(v10 + 6),
    0,
    0,
    (uint)*v10 << 21 >> 24,
    (uint)v10[1] << 21 >> 24);
  free(v6);
  v7 = Function_21d27b8(*v4, 0x3Cu, 1, &v10, v5);
  Function_20198c0(
    *(uint *)*v4,
    6,
    (int)(v10 + 6),
    6,
    0xEu,
    (uint)*v10 << 21 >> 24,
    (uint)v10[1] << 21 >> 24);
  free(v7);
  v8 = Function_21d27b8(*v4, 0x3Fu, 1, &v10, v5);
  Function_20198c0(
    *(uint *)*v4,
    6,
    (int)(v10 + 6),
    6,
    7u,
    (uint)*v10 << 21 >> 24,
    (uint)v10[1] << 21 >> 24);
  free(v8);
  return Function_201c3c0(*(uint *)*v4, 6);
}

//----- (021E2180) --------------------------------------------------------
int *__fastcall Function_21e2180(int a1, int *a2, uint a3)
{
  int *v3;
  int v4;
  uint v5;
  int v6;
  int v7;
  int *v8;
  int *v9;
  int *result;

  v3 = (int *)*a2;
  v4 = a1;
  v5 = a3;
  v6 = Function_21d26e0(*a2);
  v7 = v6;
  v8 = Function_2009a4c(v3[80], v6, 0x66u, 1, 5102, 2, v5);
  *(uint *)(v4 + 64) = v8;
  Function_200a3dc(v8);
  Function_2009d4c(*(int **)(v4 + 64));
  *(uint *)(v4 + 72) = Function_2009bc4(v3[82], v7, 0x64u, 1, 5100, 2u, v5);
  *(uint *)(v4 + 76) = Function_2009bc4(v3[83], v7, 0x65u, 1, 5101, 3u, v5);
  v9 = Function_2009a4c(v3[80], v7, 0x63u, 1, 5099, 2, v5);
  *(uint *)(v4 + 112) = v9;
  Function_200a3dc(v9);
  Function_2009d4c(*(int **)(v4 + 112));
  *(uint *)(v4 + 120) = Function_2009bc4(v3[82], v7, 0x61u, 1, 5097, 2u, v5);
  result = Function_2009bc4(v3[83], v7, 0x62u, 1, 5098, 3u, v5);
  *(uint *)(v4 + 124) = result;
  return result;
}

//----- (021E226C) --------------------------------------------------------
int __fastcall Function_21e226c(int a1, int ***a2)
{
  int v2;
  int **v3;

  v2 = a1;
  v3 = *a2;
  Function_200a4e4(*(int **)(a1 + 64));
  Function_2009d68(v3[80], *(uint ***)(v2 + 64));
  Function_2009d68(v3[82], *(uint ***)(v2 + 72));
  Function_2009d68(v3[83], *(uint ***)(v2 + 76));
  Function_200a4e4(*(int **)(v2 + 112));
  Function_2009d68(v3[80], *(uint ***)(v2 + 112));
  Function_2009d68(v3[82], *(uint ***)(v2 + 120));
  return Function_2009d68(v3[83], *(uint ***)(v2 + 124));
}

//----- (021E22C8) --------------------------------------------------------
int __fastcall Function_21e22c8(int *a1, int a2, int a3)
{
  uint *v3;
  int *v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  uint *v9;
  int *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int result;
  int v17;
  int v18;
  char *v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  char v25;

  v3 = *(uint **)a2;
  v4 = a1;
  v5 = a3;
  Function_20093b4(
    (int)&v25,
    5102,
    2111,
    5100,
    5101,
    -1,
    -1,
    0,
    2,
    *(uint *)(*(uint *)a2 + 320),
    *(uint *)(*(uint *)a2 + 324),
    *(uint *)(*(uint *)a2 + 328),
    *(uint *)(*(uint *)a2 + 332),
    0,
    0);
  v18 = v3[79];
  v19 = &v25;
  v22 = 31;
  v23 = 2;
  v20 = 0x80000;
  v21 = 1327104;
  v24 = v5;
  v6 = Function_2021b90(&v18);
  *v4 = v6;
  Function_2021d6c(v6, 0);
  v20 = 0x80000;
  v21 = 1097728;
  v7 = Function_2021b90(&v18);
  v4[1] = v7;
  Function_2021d6c(v7, 0);
  Function_20093b4((int)&v25, 5099, 2111, 5097, 5098, -1, -1, 0, 2, v3[80], v3[81], v3[82], v3[83], 0, 0);
  v19 = &v25;
  v21 = 1507328;
  v8 = &dword_21E9D80;
  v9 = (uint *)&dword_21E9D98;
  v17 = 0;
  v10 = v4;
  do
  {
    v20 = *v8;
    v11 = Function_2021b90(&v18);
    v10[2] = v11;
    Function_2021d6c(v11, *v9);
    ++v8;
    ++v10;
    ++v9;
    ++v17;
  }
  while ( v17 < 6 );
  v22 = 30;
  v20 = 655360;
  v21 = 1335296;
  v12 = Function_2021b90(&v18);
  v4[20] = v12;
  Function_2021d6c(v12, 0xDu);
  v20 = 393216;
  v21 = 1105920;
  v13 = Function_2021b90(&v18);
  v4[21] = v13;
  Function_2021d6c(v13, 0xCu);
  v14 = 2;
  v15 = (int)(v4 + 2);
  result = 0;
  do
  {
    ++v14;
    *(uint *)(v15 + 80) = 0;
    v15 += 4;
  }
  while ( v14 < 8 );
  return result;
}

//----- (021E2458) --------------------------------------------------------
int __fastcall Function_21e2458(int *a1)
{
  int *v1;
  int v2;
  int result;

  v1 = a1;
  v2 = 0;
  do
  {
    Function_2021bd4(*v1);
    result = v1[20];
    if ( result )
      result = Function_2021bd4(result);
    ++v2;
    ++v1;
  }
  while ( v2 < 8 );
  return result;
}

//----- (021E2478) --------------------------------------------------------
int __fastcall Function_21e2478(int *a1, int *a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int *v7;
  char v8;
  int v9;
  uint **v10;
  int v11;
  int v12;
  int v13;
  uint **v14;
  int v15;
  int v16;
  int result;
  int v18;
  int v19;
  uchar *v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;

  v28 = a4;
  v4 = a1;
  v5 = a3;
  v6 = *a2;
  if ( !*a1 )
    ErrorHandler();
  v7 = (int *)Function_2009dc8(*(uint *)(v6 + 324), 2111);
  v18 = *(uint *)(v6 + 336);
  v23 = -6;
  v20 = Function_200a72c(v7, 0);
  v24 = 2;
  v25 = 0;
  v26 = 2;
  v27 = v5;
  v8 = Function_201fab4(v20, 2);
  v9 = Function_21d4d6c(*(uint *)(v6 + 336), 8u, 4u);
  Function_21d4dac(*(uint *)(v6 + 336), v9, 697, 0x21u);
  v19 = v9;
  v21 = *v4;
  v22 = -32;
  v10 = (uint **)Function_21d4ca0((int)&v18);
  v4[8] = (int)v10;
  Function_2012a60(*v10, v8 + 4);
  Function_21d4da0(v9);
  v11 = Function_21d4d6c(*(uint *)(v6 + 336), 8u, 4u);
  v12 = v11;
  v13 = Function_21d4dac(*(uint *)(v6 + 336), v11, 697, 0x22u);
  v19 = v12;
  v22 = 32 - v13;
  v21 = v4[1];
  v14 = (uint **)Function_21d4ca0((int)&v18);
  v4[9] = (int)v14;
  Function_2012a60(*v14, v8 + 4);
  Function_21d4da0(v12);
  v15 = 2;
  v16 = (int)(v4 + 2);
  result = 0;
  do
  {
    ++v15;
    *(uint *)(v16 + 32) = 0;
    v16 += 4;
  }
  while ( v15 < 8 );
  return result;
}

//----- (021E256C) --------------------------------------------------------
int **__fastcall Function_21e256c(int a1)
{
  int v1;
  int v2;
  int **result;

  v1 = a1;
  v2 = 0;
  do
  {
    result = *(int ***)(v1 + 32);
    if ( result )
      result = (int **)Function_21d4d1c(result);
    ++v2;
    v1 += 4;
  }
  while ( v2 < 8 );
  return result;
}

//----- (021E2588) --------------------------------------------------------
int __fastcall Function_21e2588(int *a1)
{
  int *v1;
  int v2;
  uint **v3;
  int result;

  v1 = a1;
  v2 = 0;
  do
  {
    Function_2021fe0(*v1, 1);
    v3 = (uint **)v1[8];
    if ( v3 )
      Function_2012af0(*v3, 1);
    result = v1[20];
    if ( result )
      result = Function_2021fe0(result, 1);
    ++v2;
    ++v1;
  }
  while ( v2 < 8 );
  return result;
}

//----- (021E25C0) --------------------------------------------------------
int __fastcall Function_21e25c0(int *a1)
{
  int v1;
  int *v2;
  uint **v3;
  int result;

  v1 = 0;
  v2 = a1;
  do
  {
    Function_2021fe0(*v2, 0);
    v3 = (uint **)v2[8];
    if ( v3 )
      Function_2012af0(*v3, 0);
    result = v2[20];
    if ( result )
      result = Function_2021fe0(result, 0);
    ++v1;
    ++v2;
  }
  while ( v1 < 8 );
  return result;
}

//----- (021E25F8) --------------------------------------------------------
uint *__fastcall Function_21e25f8(int *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint *result;

  v4 = a3;
  v5 = a2;
  v6 = a4;
  Function_21e2588(a1);
  result = (uint *)Function_21e33a4(*(uint *)(v4 + 20));
  if ( result )
  {
    if ( v6 )
      result = Function_21d23f8((uint *)(*(uint *)v5 + 400), 1, -16, 0, 0, 16, 44, 47, 1);
    else
      result = Function_21d23f8((uint *)(*(uint *)v5 + 400), 1, 0, -16, 16, 0, 44, 47, 1);
  }
  return result;
}

//----- (021E2664) --------------------------------------------------------
int __fastcall Function_21e2664(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int v7;

  v4 = a1;
  v5 = a2;
  v6 = a4;
  if ( Function_21e33a4(*(uint *)(a3 + 20)) )
    v7 = Function_21d2424((uint *)(*(uint *)v5 + 400));
  else
    v7 = Function_200ac1c(2);
  if ( !v7 )
    return 0;
  if ( v6 )
    Function_21e25c0(v4);
  return 1;
}

//----- (021E26A0) --------------------------------------------------------
int __fastcall Function_21e26a0(int *a1, int a2, int a3, char a4, int a5, int a6, int *a7, uint a8, int a9, int a10, int *a11)
{
  uint v11;
  int v12;
  int v13;
  int v14;
  int result;
  int *v16;
  int v17;

  v16 = a1;
  v12 = a2;
  v13 = a3;
  v14 = 0;
  Function_21d144c(a2, a4);
  Function_21e274c(v12, v13, a5, a9, a10);
  result = Function_2021e74(v12);
  switch ( (uchar)result )
  {
    case 0:
    case 1:
      result = *a7;
      if ( *a7 )
      {
        result = 0;
        v14 = 1;
        v11 = 9;
        *a7 = 0;
      }
      break;
    case 2:
      result = *a7;
      if ( *a7 != 1 )
      {
        v14 = 1;
        v11 = 10;
        *a7 = 1;
      }
      break;
    case 3:
      result = *a7;
      if ( *a7 != 2 )
      {
        result = 2;
        v14 = 1;
        v11 = 8;
        *a7 = 2;
      }
      break;
    default:
      break;
  }
  if ( v14 )
  {
    if ( *a11 )
      free(*a11);
    *a11 = Function_21d27e0(*v16, v11, &v17, a8);
    result = Function_201dc68(31, 32 * a6, *(uint *)(v17 + 12), 32);
    if ( !result )
      result = ErrorHandler();
  }
  return result;
}

//----- (021E274C) --------------------------------------------------------
int __fastcall Function_21e274c(int a1, int *a2, int a3, int a4, char a5)
{
  return Function_21d1524(a1, a2, a3, a4, a5);
}

//----- (021E275C) --------------------------------------------------------
int __fastcall Function_21e275c(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  *(uint *)(*(uint *)(a2 + 8) + 28) = 1;
  **(uint **)a2 |= 4u;
  *(uint *)(a1 + 16) = 0;
  result = *(uint *)(a2 + 8);
  *(uint *)(result + 20) = 2;
  switch ( (uchar)result )
  {
    case 0:
      *(uint *)(*(uint *)(a2 + 8) + 8) = 48;
      *(uint *)(*(uint *)(a2 + 8) + 12) = 72;
      result = *(uint *)(a2 + 8);
      *(uint *)(result + 20) = 1;
      break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      Function_21e0cd4(*(int **)(a2 + 16), 48, 72);
      result = Function_21e0cdc(*(int **)(v2 + 16), 1);
      break;
    default:
      return result;
  }
  return result;
}

//----- (021E27C0) --------------------------------------------------------
int __fastcall Function_21e27c0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int result;
  int v10;

  v6 = a4;
  v7 = a2;
  v10 = a3;
  switch ( (uchar)a2 )
  {
    case 0:
      v5 = 48;
      **(uint **)a2 |= 4u;
      *(uint *)(a1 + 16) = 0;
      v4 = 72;
      *(uint *)(*(uint *)(a2 + 8) + 20) = 2;
      break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      v5 = 48;
      **(uint **)a2 |= 2u;
      *(uint *)(a1 + 16) = a4;
      v4 = 72;
      Function_21e0cdc(*(int **)(a2 + 16), 2);
      v8 = Function_21d5608(v6 - 1);
      Function_21e0cf8(*(int **)(v7 + 16), v8);
      break;
    default:
      break;
  }
  result = v10;
  switch ( (uchar)v10 )
  {
    case 0:
      *(uint *)(*(uint *)(v7 + 8) + 8) = v5;
      *(uint *)(*(uint *)(v7 + 8) + 12) = v4;
      result = *(uint *)(v7 + 8);
      *(uint *)(result + 20) = 2;
      break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      Function_21e0cd4(*(int **)(v7 + 16), v5, v4);
      result = Function_21e0cdc(*(int **)(v7 + 16), 2);
      break;
    default:
      return result;
  }
  return result;
}

//----- (021E2864) --------------------------------------------------------
int __fastcall Function_21e2864(int a1, int a2)
{
  int v2;
  int result;
  int v4;
  bool v5;
  int v6;
  int v7;

  v2 = a1;
  result = *(uint *)(a1 + 52);
  v4 = a2;
  if ( result != 8 )
  {
    v5 = result == 1;
    v6 = *(uint *)(a2 + 4);
    if ( v5 )
      result = Function_21d371c(v6, -1);
    else
      result = Function_21d371c(v6, 1);
    if ( result == 1 )
    {
      v7 = *(uint *)(v2 + 16);
      Function_21e275c(v2, v4);
      Function_21e2968(v2, v4);
      result = Function_2005748(0x68Bu);
    }
  }
  return result;
}

//----- (021E28A8) --------------------------------------------------------
int __fastcall Function_21e28a8(int result)
{
  if ( dword_21BF6C4 & 0x40 )
  {
    *(uint *)(result + 52) = 1;
  }
  else if ( dword_21BF6C4 & 0x80 )
  {
    *(uint *)(result + 52) = 0;
  }
  else
  {
    *(uint *)(result + 52) = 8;
  }
  return result;
}

//----- (021E28D0) --------------------------------------------------------
uint __fastcall Function_21e28d0(uint *a1, int a2)
{
  int v2;
  uint *v3;
  uint v4;
  uint v5;
  uint v6;
  uint v7;
  uint v8;
  uint v9;
  uint result;

  v2 = a2;
  v3 = a1;
  v4 = a1[2];
  if ( *(uint *)(a2 + 56) & 1 )
    Function_2021cac(v4, 1);
  else
    Function_2021cac(v4, 0);
  v5 = v3[3];
  if ( *(uint *)(v2 + 56) & 2 )
    Function_2021cac(v5, 1);
  else
    Function_2021cac(v5, 0);
  v6 = v3[4];
  if ( *(uint *)(v2 + 56) & 4 )
    Function_2021cac(v6, 1);
  else
    Function_2021cac(v6, 0);
  v7 = v3[5];
  if ( *(uint *)(v2 + 56) & 8 )
    Function_2021cac(v7, 1);
  else
    Function_2021cac(v7, 0);
  v8 = v3[6];
  if ( *(uint *)(v2 + 56) & 0x10 )
    Function_2021cac(v8, 1);
  else
    Function_2021cac(v8, 0);
  v9 = v3[7];
  if ( *(uint *)(v2 + 56) & 0x20 )
    result = Function_2021cac(v9, 1);
  else
    result = Function_2021cac(v9, 0);
  return result;
}

//----- (021E2968) --------------------------------------------------------
int __fastcall Function_21e2968(int a1, int a2)
{
  int v2;
  int v3;
  int *v4;
  int v5;
  int result;

  v2 = 0;
  v3 = a2;
  *(uint *)(a1 + 56) = 0;
  v4 = (int *)(a1 + 56);
  do
  {
    v5 = Function_21d5608(v2);
    result = Function_21d392c(*(uint *)(v3 + 4), v5);
    if ( result )
    {
      result = *v4 | 1 | (1 << (v2 + 1));
      *v4 = result;
    }
    ++v2;
  }
  while ( v2 < 5 );
  return result;
}

//----- (021E29A4) --------------------------------------------------------
int __fastcall Function_21e29a4(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  uint v6;
  int result;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  if ( a3 < 2 || a3 >= 8 )
    ErrorHandler();
  v6 = dword_21E9D98[v3 - 2];
  if ( v5 == 1 )
    result = Function_2021d6c(v4, v6 + 1);
  else
    result = Function_2021d6c(v4, v6);
  return result;
}

//----- (021E29DC) --------------------------------------------------------
int (*__fastcall Function_21e29dc(int *a1, int a2, int a3))()
{
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int (*result)();

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Function_21e2a5c(a3);
  v7 = Function_21e2ae0(v4, v5);
  v8 = Function_21e2b08(v4, v5);
  *v3 = v6;
  v3[1] = v7;
  v3[8] = v8;
  v3[9] = Function_21e2c20();
  v3[2] = (int)Function_21e2c24;
  v3[3] = (int)Function_21e2c2c;
  v3[4] = (int)Function_21e2c5c;
  v3[5] = (int)Function_21e2c64;
  v3[6] = (int)Function_21e2d10;
  result = Function_21e2d38;
  v3[7] = (int)Function_21e2d38;
  return result;
}

//----- (021E2A3C) --------------------------------------------------------
int __fastcall Function_21e2a3c(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_21e2ba8(*a1);
  Function_21e2bbc(v1[1]);
  return Function_21e2bd0(v1[8]);
}

//----- (021E2A54) --------------------------------------------------------
int __fastcall Function_21e2a54(int a1)
{
  return *(uint *)(*(uint *)a1 + 40);
}

//----- (021E2A5C) --------------------------------------------------------
int *__fastcall Function_21e2a5c(uint a1, int a2)
{
  int v2;
  int *v3;

  v2 = a2;
  v3 = (int *)malloc(a1, 52);
  if ( !v3 )
    ErrorHandler();
  Call_FillMemWithValue(v3, 0, 0x34u);
  *v3 = Function_21d13b4(v2);
  v3[1] = Function_21d13ec(v2);
  v3[2] = 0;
  v3[4] = *(uint *)Function_21d1410(v2, 2);
  v3[5] = Function_21d1410(v2, 3);
  v3[6] = Function_21d1410(v2, 4);
  v3[7] = Function_21d1410(v2, 6);
  v3[8] = Function_21d1410(v2, 7);
  v3[9] = Function_21d1430(v2, 6);
  v3[3] = *(uint *)Function_21d1410(v2, 0);
  v3[11] = 1;
  v3[12] = 1;
  return v3;
}

//----- (021E2AE0) --------------------------------------------------------
uchar *__fastcall Function_21e2ae0(uint a1, int a2)
{
  int v2;
  uchar *v3;

  v2 = a2;
  v3 = (uchar *)malloc(a1, 4);
  if ( !v3 )
    ErrorHandler();
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  *(uint *)v3 = Function_21d13fc(v2);
  return v3;
}

//----- (021E2B08) --------------------------------------------------------
int *__fastcall Function_21e2b08(uint a1, int a2)
{
  uint v2;
  int v3;
  int v4;
  int *v5;

  v2 = a1;
  v3 = a2;
  v4 = 20 * Function_21e2c20();
  v5 = (int *)malloc(v2, v4);
  if ( !v5 )
    ErrorHandler();
  Call_FillMemWithValue(v5, 0, v4);
  Function_21d47f0(v2, v5, v3, 2);
  Function_21d4a94(v2, v5 + 5, v3, 4);
  Function_21d48b8(v2, v5 + 10, v3, 8);
  Function_21d491c(v2, v5 + 15, v3, 16);
  Function_21d4980(v2, v5 + 20, v3, 32);
  Function_21d49e4(v2, v5 + 25, v3, 64);
  Function_21d4a3c(v2, v5 + 30, v3, 128);
  Function_21d4b50(v2, v5 + 35, v3, 256);
  return v5;
}

//----- (021E2BA8) --------------------------------------------------------
uint __fastcall Function_21e2ba8(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return free(v1);
}

//----- (021E2BBC) --------------------------------------------------------
uint __fastcall Function_21e2bbc(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return free(v1);
}

//----- (021E2BD0) --------------------------------------------------------
uint __fastcall Function_21e2bd0(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  Function_21d4660(v1);
  Function_21d4660(v1 + 20);
  Function_21d4660(v1 + 40);
  Function_21d4660(v1 + 60);
  Function_21d4660(v1 + 80);
  Function_21d4660(v1 + 100);
  Function_21d4660(v1 + 120);
  Function_21d4660(v1 + 140);
  return free(v1);
}

//----- (021E2C20) --------------------------------------------------------
int Function_21e2c20()
{
  return 8;
}

//----- (021E2C24) --------------------------------------------------------
int __fastcall Function_21e2c24(int a1, int a2)
{
  int result;

  result = 1;
  *(uint *)(*(uint *)(a2 + 16) + 28) = 1;
  return result;
}

//----- (021E2C2C) --------------------------------------------------------
int __fastcall Function_21e2c2c(uint *a1, int a2)
{
  uint *v2;

  v2 = a1;
  if ( a1[3] == 1 )
    return 1;
  if ( a1[4] == 1 )
    return 0;
  if ( !*a1 )
  {
    Function_21e3320(a2);
    ++*v2;
  }
  return 0;
}

//----- (021E2C5C) --------------------------------------------------------
int __fastcall Function_21e2c5c(int a1, int a2)
{
  *(uint *)(a2 + 8) = 0;
  return 1;
}

//----- (021E2C64) --------------------------------------------------------
int __fastcall Function_21e2c64(int a1, uint *a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = a2[2];
  switch ( (uchar)*a2 )
  {
    case 0u:
      v7 = (int *)malloc(a2[1], 40);
      v3[2] = v7;
      Call_FillMemWithValue(v7, 0, 0x28u);
      *(uint *)v3[2] = *(uint *)(v5 + 8);
      ++*v3;
      goto LABEL_8;
    case 1u:
      v8 = a2[1];
      Function_21e3080();
      Function_21e3be0(v6);
      Function_21d23f8((uint *)(*(uint *)v4 + 364), 4, -16, 0, 0, 16, 47, 47, 0);
      ++*v3;
      goto LABEL_8;
    case 2u:
      if ( Function_21d2424((uint *)(*(uint *)a1 + 364)) )
        ++*v3;
      goto LABEL_8;
    case 3u:
      Function_21e3bfc(a2[2]);
      result = 1;
      break;
    default:
      ErrorHandler();
LABEL_8:
      result = 0;
      break;
  }
  return result;
}

//----- (021E2D10) --------------------------------------------------------
int __fastcall Function_21e2d10(int a1, int a2, int a3)
{
  uint *v3;
  int v4;

  v3 = *(uint **)(a2 + 8);
  v4 = a3;
  if ( *v3 != *(uint *)(a3 + 8) )
  {
    Function_21e331c(v3);
    Function_21e3fc0(v3, *(uint *)(v4 + 8), *v3);
    *v3 = *(uint *)(v4 + 8);
  }
  return 0;
}

//----- (021E2D38) --------------------------------------------------------
int __fastcall Function_21e2d38(int a1, uint *a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  int v6;
  int result;

  v3 = a2;
  v4 = *a2;
  v5 = a1;
  v6 = a2[2];
  switch ( (uchar)v4 )
  {
    case 0:
      if ( *(uint *)(a3 + 44) )
      {
        Function_21e3be0(v6);
        Function_21d23f8((uint *)(*(uint *)v5 + 364), 4, 0, -16, 16, 0, 47, 47, 0);
      }
      else
      {
        Function_21d23f8((uint *)(*(uint *)a1 + 364), 4, 0, -16, 16, 0, 63, 0, 0);
      }
      ++*v3;
      goto LABEL_12;
    case 1:
      if ( Function_21d2424((uint *)(*(uint *)a1 + 364)) )
        ++*v3;
      goto LABEL_12;
    case 2:
      Function_21e30bc();
      ++*v3;
      goto LABEL_12;
    case 3:
      free(v6);
      v3[2] = 0;
      ++*v3;
      goto LABEL_12;
    case 4:
      result = 1;
      break;
    default:
      ErrorHandler();
LABEL_12:
      result = 0;
      break;
  }
  return result;
}

//----- (021E2E00) --------------------------------------------------------
int __fastcall Function_21e2e00(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_21e2e10();
  result = 1;
  *(uint *)(v1 + 48) = 1;
  return result;
}

//----- (021E2E10) --------------------------------------------------------
int __fastcall Function_21e2e10(int a1)
{
  int v1;
  int result;

  v1 = a1;
  **(uint **)a1 |= 2u;
  *(uint *)(a1 + 40) = 0;
  *(uint *)(*(uint *)(a1 + 16) + 20) = 0;
  Function_21e0cdc(*(int **)(a1 + 24), 0);
  result = *(uint *)(v1 + 8);
  switch ( (uchar)result )
  {
    case 0:
      *(uint *)(*(uint *)(v1 + 16) + 8) = 56;
      *(uint *)(*(uint *)(v1 + 16) + 12) = 80;
      Function_21e0cd4(*(int **)(v1 + 24), 56, 80);
      result = *(uint *)(v1 + 12);
      *(uint *)(result + 20) = 1;
      *(uint *)(v1 + 44) = 1;
      break;
    case 1:
      Function_21dca4c(*(uint *)(v1 + 28), 1);
      Function_21dca54(*(uint *)(v1 + 28), 4);
      Function_21dca44(*(uint *)(v1 + 28), 56, 80);
      result = *(uint *)(v1 + 12);
      *(uint *)(result + 20) = 1;
      *(uint *)(v1 + 44) = 1;
      break;
    case 2:
      Function_21e4070(*(uint *)(v1 + 32), 1);
      Function_21e4078(*(uint *)(v1 + 32), 4);
      Function_21e4068(*(uint *)(v1 + 32), 56, 80);
      result = *(uint *)(v1 + 12);
      *(uint *)(result + 20) = 1;
      *(uint *)(v1 + 44) = 1;
      break;
    case 3:
      result = *(uint *)(v1 + 12);
      *(uint *)(result + 20) = 0;
      *(uint *)(v1 + 44) = 0;
      break;
    case 4:
      result = *(uint *)(v1 + 12);
      *(uint *)(result + 20) = 0;
      *(uint *)(v1 + 44) = 0;
      break;
    default:
      return result;
  }
  return result;
}

//----- (021E2EC0) --------------------------------------------------------
int Function_21e2ec0()
{
  return 0;
}

//----- (021E2EC4) --------------------------------------------------------
int __fastcall Function_21e2ec4(int a1, int a2, char a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  bool v7;
  int v8;
  int v9;
  int v10;
  int v11;
  char v13;
  int v14;

  v5 = a1;
  v13 = a3;
  v14 = 1;
  switch ( 1 )
  {
    case 0:
      if ( Function_21e2ec0() )
        v6 = 2;
      else
        v6 = 1;
      v4 = 48;
      *(uint *)(*(uint *)(v5 + 16) + 20) = v6;
      v3 = 72;
      **(uint **)v5 |= 4u;
      *(uint *)(v5 + 8) = 0;
      break;
    case 1:
      v7 = Function_21e2ec0() == 0;
      v8 = *(uint *)(v5 + 28);
      if ( v7 )
      {
        Function_21dca4c(v8, 0);
      }
      else
      {
        Function_21dca4c(v8, 1);
        Function_21dca54(*(uint *)(v5 + 28), 1);
      }
      v4 = 40;
      **(uint **)v5 |= 8u;
      *(uint *)(v5 + 8) = 1;
      v3 = 120;
      break;
    case 2:
      v7 = Function_21e2ec0() == 0;
      v9 = *(uint *)(v5 + 32);
      if ( v7 )
      {
        Function_21e4070(v9, 0);
      }
      else
      {
        Function_21e4070(v9, 1);
        Function_21e4078(*(uint *)(v5 + 32), 1);
      }
      v4 = 48;
      **(uint **)v5 |= 0x10u;
      *(uint *)(v5 + 8) = 2;
      v3 = 64;
      break;
    case 3:
      if ( Function_21d37cc(*(uint *)(a1 + 4)) == 2 )
      {
        **(uint **)v5 |= 0x20u;
        *(uint *)(v5 + 8) = 3;
      }
      else
      {
        v14 = 0;
      }
      break;
    case 4:
      if ( Function_21d3954(*(uint ***)(a1 + 4)) == 1 )
      {
        **(uint **)v5 |= 0x100u;
        *(uint *)(v5 + 8) = 4;
      }
      else
      {
        v14 = 0;
      }
      break;
    default:
      ErrorHandler();
      break;
  }
  switch ( v13 )
  {
    case 0:
      if ( Function_21e2ec0() )
      {
        *(uint *)(*(uint *)(v5 + 16) + 20) = 2;
        Function_21e0cdc(*(int **)(v5 + 24), 2);
      }
      else
      {
        *(uint *)(*(uint *)(v5 + 16) + 20) = 1;
        Function_21e0cdc(*(int **)(v5 + 24), 1);
      }
      *(uint *)(*(uint *)(v5 + 16) + 8) = v4;
      *(uint *)(*(uint *)(v5 + 16) + 12) = v3;
      Function_21e0cd4(*(int **)(v5 + 24), v4, v3);
      break;
    case 1:
      v7 = Function_21e2ec0() == 0;
      v10 = *(uint *)(v5 + 28);
      if ( v7 )
      {
        Function_21dca4c(v10, 0);
      }
      else
      {
        Function_21dca4c(v10, 1);
        Function_21dca54(*(uint *)(v5 + 28), 1);
      }
      Function_21dca44(*(uint *)(v5 + 28), v4, v3);
      break;
    case 2:
      v7 = Function_21e2ec0() == 0;
      v11 = *(uint *)(v5 + 32);
      if ( v7 )
      {
        Function_21e4070(v11, 0);
      }
      else
      {
        Function_21e4070(v11, 1);
        Function_21e4078(*(uint *)(v5 + 32), 1);
      }
      Function_21e4068(*(uint *)(v5 + 32), v4, v3);
      break;
    case 3:
    case 4:
      return v14;
    default:
      ErrorHandler();
      break;
  }
  return v14;
}

//----- (021E3080) --------------------------------------------------------
int __fastcall Function_21e3080(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;

  v4 = a4;
  v5 = a2;
  v6 = a1;
  Function_21e30e4();
  Function_21e3178(v6, v5, v4);
  Function_21e3268(v6, v5, v4);
  Function_21e3270(v6, v5, v4);
  return Function_21e3fc0(v5, 0, 1);
}

//----- (021E30BC) --------------------------------------------------------
int __fastcall Function_21e30bc(uint ***a1, int a2)
{
  int v2;
  uint ***v3;

  v2 = a2;
  v3 = a1;
  Function_21e326c(a2);
  Function_21e3224(v3, v2);
  Function_21e3304(v2);
  return Function_2019ebc(**v3, 2u);
}

//----- (021E30E4) --------------------------------------------------------
int __fastcall Function_21e30e4(int *a1, int a2, uint a3, int a4)
{
  uint v4;
  int *v5;
  int v6;
  int v7;
  ushort *v9;
  int v10;

  v10 = a4;
  v4 = a3;
  v5 = a1;
  v6 = a2;
  Function_21d276c(*a1, 6u, 0, 0, 0, a3);
  if ( Function_21d36d8(*(uint *)(v6 + 4)) == 1 )
    Function_21d276c(*v5, 0x18u, 0, 0, 32, v4);
  Function_21d2724(*v5, 0x21u, *(uint **)*v5, 2, 0, 0, 1, v4);
  v7 = Function_21d27b8(*v5, 0x39u, 1, &v9, v4);
  Function_20198c0(
    *(uint *)*v5,
    2,
    (int)(v9 + 6),
    0,
    0,
    (uint)*v9 << 21 >> 24,
    (uint)v9[1] << 21 >> 24);
  free(v7);
  return Function_201c3c0(*(uint *)*v5, 2);
}

//----- (021E3178) --------------------------------------------------------
int *__fastcall Function_21e3178(int *a1, int a2, uint a3)
{
  int *v3;
  int v4;
  uint v5;
  int v6;
  int v7;
  int *v8;
  int *v9;
  int *result;

  v3 = (int *)*a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_21d26e0(*a1);
  v7 = v6;
  v8 = Function_2009a4c(v3[80], v6, 0x57u, 1, 2087, 1, v5);
  *(uint *)(v4 + 24) = v8;
  Function_200a3dc(v8);
  Function_2009d4c(*(int **)(v4 + 24));
  v9 = Function_2009b04(v3[81], v7, 0xCu, 0, 2012, 1, 1, v5);
  *(uint *)(v4 + 28) = v9;
  Function_200a640(v9);
  Function_2009d4c(*(int **)(v4 + 28));
  *(uint *)(v4 + 32) = Function_2009bc4(v3[82], v7, 0x55u, 1, 2085, 2u, v5);
  result = Function_2009bc4(v3[83], v7, 0x56u, 1, 2086, 3u, v5);
  *(uint *)(v4 + 36) = result;
  return result;
}

//----- (021E3224) --------------------------------------------------------
int __fastcall Function_21e3224(int ***a1, int a2)
{
  int v2;
  int **v3;

  v2 = a2;
  v3 = *a1;
  Function_200a4e4(*(int **)(a2 + 24));
  Function_200a6dc(*(int **)(v2 + 28));
  Function_2009d68(v3[80], *(uint ***)(v2 + 24));
  Function_2009d68(v3[81], *(uint ***)(v2 + 28));
  Function_2009d68(v3[82], *(uint ***)(v2 + 32));
  return Function_2009d68(v3[83], *(uint ***)(v2 + 36));
}

//----- (021E3268) --------------------------------------------------------
void Function_21e3268()
{
  ;
}

//----- (021E326C) --------------------------------------------------------
void Function_21e326c()
{
  ;
}

//----- (021E3270) --------------------------------------------------------
uint __fastcall Function_21e3270(int *a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  uchar *v6;
  int v7;
  int v8;
  uint **v9;
  uint result;
  char v11;
  int v12;
  int v13;
  uchar *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;

  v3 = *a1;
  v4 = a2;
  v12 = *(uint *)(*a1 + 336);
  v5 = a3;
  v6 = Function_200a72c(*(int **)(a2 + 28), 0);
  v16 = 16;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v15 = 0;
  v14 = v6;
  v20 = 1;
  v21 = v5;
  v11 = Function_201fab4(v6, 1);
  v7 = 0;
  do
  {
    v8 = Function_21d4d6c(*(uint *)(v3 + 336), 8u, 2u);
    Function_21d4dac(*(uint *)(v3 + 336), v8, 697, v7 + 102);
    v13 = v8;
    v9 = (uint **)Function_21d4ca0((int)&v12);
    *(uint *)(v4 + 4) = v9;
    Function_2012a60(*v9, v11);
    Function_20129d0(**(uint ***)(v4 + 4), 0);
    result = Function_21d4da0(v8);
    ++v7;
    v4 += 4;
  }
  while ( v7 < 5 );
  return result;
}

//----- (021E3304) --------------------------------------------------------
int __fastcall Function_21e3304(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = 0;
  do
  {
    result = Function_21d4d1c(*(int ***)(v1 + 4));
    ++v2;
    v1 += 4;
  }
  while ( v2 < 5 );
  return result;
}

//----- (021E331C) --------------------------------------------------------
void Function_21e331c()
{
  ;
}

//----- (021E3320) --------------------------------------------------------
int __fastcall Function_21e3320(int a1)
{
  int result;

  *(uint *)(a1 + 40) = 1;
  result = *(uint *)(a1 + 16);
  *(uint *)(result + 20) = 1;
  return result;
}

//----- (021E332C) --------------------------------------------------------
int (*__fastcall Function_21e332c(int *a1, int a2, int a3))()
{
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int (*result)();

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Function_21e33c4(a3);
  v7 = Function_21e3400(v4, v5);
  v8 = Function_21e3428(v4, v5);
  *v3 = v6;
  v3[1] = v7;
  v3[8] = v8;
  v3[9] = Function_21e3458();
  v3[2] = (int)Function_21e345c;
  v3[3] = (int)Function_21e34ac;
  v3[4] = (int)Function_21e3520;
  v3[5] = (int)Function_21e3540;
  v3[6] = (int)Function_21e35d0;
  result = Function_21e3604;
  v3[7] = (int)Function_21e3604;
  return result;
}

//----- (021E338C) --------------------------------------------------------
int __fastcall Function_21e338c(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_21e342c(*a1);
  Function_21e3440(v1[1]);
  return Function_21e3454(v1[8]);
}

//----- (021E33A4) --------------------------------------------------------
int __fastcall Function_21e33a4(int a1)
{
  return *(uint *)(*(uint *)a1 + 36);
}

//----- (021E33AC) --------------------------------------------------------
int __fastcall Function_21e33ac(int a1)
{
  return *(uint *)(*(uint *)a1 + 40);
}

//----- (021E33B4) --------------------------------------------------------
int __fastcall Function_21e33b4(int *a1, int a2)
{
  int result;

  result = *a1;
  *(uint *)(result + 48) = a2;
  return result;
}

//----- (021E33BC) --------------------------------------------------------
int __fastcall Function_21e33bc(int a1)
{
  return *(uint *)(*(uint *)a1 + 48);
}

//----- (021E33C4) --------------------------------------------------------
int *__fastcall Function_21e33c4(uint a1, int a2)
{
  int v2;
  int *v3;

  v2 = a2;
  v3 = (int *)malloc(a1, 52);
  if ( !v3 )
    ErrorHandler();
  Call_FillMemWithValue(v3, 0, 0x34u);
  *v3 = Function_21d13c8(v2);
  v3[1] = *(uint *)Function_21d1410(v2, 5);
  v3[2] = Function_21d13ec(v2);
  return v3;
}

//----- (021E3400) --------------------------------------------------------
uchar *__fastcall Function_21e3400(uint a1, int a2)
{
  int v2;
  uchar *v3;

  v2 = a2;
  v3 = (uchar *)malloc(a1, 4);
  if ( !v3 )
    ErrorHandler();
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  *(uint *)v3 = Function_21d13fc(v2);
  return v3;
}

//----- (021E3428) --------------------------------------------------------
int Function_21e3428()
{
  return 0;
}

//----- (021E342C) --------------------------------------------------------
uint __fastcall Function_21e342c(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return free(v1);
}

//----- (021E3440) --------------------------------------------------------
uint __fastcall Function_21e3440(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return free(v1);
}

//----- (021E3454) --------------------------------------------------------
void Function_21e3454()
{
  ;
}

//----- (021E3458) --------------------------------------------------------
int Function_21e3458()
{
  return 0;
}

//----- (021E345C) --------------------------------------------------------
int __fastcall Function_21e345c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uchar *v5;
  int v6;
  int v7;

  v2 = a1;
  v3 = a2;
  v4 = malloc(*(uint *)(a1 + 4), 28);
  v5 = (uchar *)v4;
  v6 = 28;
  do
  {
    *v5++ = 0;
    --v6;
  }
  while ( v6 );
  Function_21e3688(v4, v3, *(uint *)(v2 + 4));
  Function_21e3c6c(v4, v3, *(uint *)(v2 + 4));
  Function_21e3e8c(v4, v3);
  v7 = 0;
  do
  {
    ++v7;
    *(uint *)(v3 + 12) = 4;
    v3 += 4;
  }
  while ( v7 < 6 );
  *(uint *)(v2 + 8) = v4;
  return 1;
}

//----- (021E34AC) --------------------------------------------------------
int __fastcall Function_21e34ac(uint *a1, uint *a2)
{
  uint *v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a1[2];
  if ( a1[3] == 1 )
  {
    a2[9] = 0;
    result = 1;
  }
  else if ( a1[4] == 1 )
  {
    result = 0;
  }
  else
  {
    if ( *a1 )
    {
      a2[10] = 1;
      Function_21e3c2c(a2);
      Function_21e3eec(v3, v2);
      Function_21e3724(v2);
      if ( Function_21d3998(v2[2]) == 2 && !v2[12] )
        Function_21e3d48(v3, v2);
      Function_21e3734(v3, v2);
    }
    else
    {
      a2[9] = 1;
      *(uint *)(a2[1] + 48) = 0;
      a2[10] = 1;
      ++*a1;
    }
    result = 0;
  }
  return result;
}

//----- (021E3520) --------------------------------------------------------
int __fastcall Function_21e3520(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 8);
  Function_21e37b4(*(uint *)(a1 + 8));
  Function_21e3e74(v2);
  free(*(uint *)(v1 + 8));
  *(uint *)(v1 + 8) = 0;
  return 1;
}

//----- (021E3540) --------------------------------------------------------
int __fastcall Function_21e3540(int a1, uint *a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  int result;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = *(uint *)(a4 + 8);
  switch ( (uchar)*a2 )
  {
    case 0u:
      v8 = (int *)malloc(a2[1], 40);
      v4[2] = v8;
      Call_FillMemWithValue(v8, 0, 0x28u);
      ++*v4;
      goto LABEL_8;
    case 1u:
      v9 = a2[1];
      Function_21e3900(a2[2], a1);
      ++*v4;
      goto LABEL_8;
    case 2u:
      Function_200aae0(4, 0, -16, 63, 2);
      Function_21e3f2c(v5, v7, v6);
      ++*v4;
      goto LABEL_8;
    case 3u:
      if ( Function_200ac1c(2) )
        ++*v4;
      goto LABEL_8;
    case 4u:
      result = 1;
      break;
    default:
LABEL_8:
      result = 0;
      break;
  }
  return result;
}

//----- (021E35D0) --------------------------------------------------------
int __fastcall Function_21e35d0(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  int v9;
  int v10;

  v9 = a1;
  v4 = a3;
  v5 = *(int **)(a2 + 8);
  v10 = *(uint *)(a4 + 8);
  v6 = 0;
  v7 = a3;
  do
  {
    Function_21d144c(*v5, *(uint *)(v7 + 12));
    ++v6;
    v7 += 4;
    ++v5;
  }
  while ( v6 < 6 );
  Function_21e3f48(v9, v10, v4);
  return 0;
}

//----- (021E3604) --------------------------------------------------------
int __fastcall Function_21e3604(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = a2[2];
  switch ( (uchar)*a2 )
  {
    case 0u:
      Function_200aae0(4, -16, 0, 63, 2);
      ++*v2;
      goto LABEL_8;
    case 1u:
      if ( Function_200ac1c(2) )
        ++*v2;
      goto LABEL_8;
    case 2u:
      Function_21e393c(v4, v3);
      Function_21d2584((uint *)(*(uint *)v3 + 484), 0);
      ++*v2;
      goto LABEL_8;
    case 3u:
      free(v4);
      v2[2] = 0;
      ++*v2;
      goto LABEL_8;
    case 4u:
      result = 1;
      break;
    default:
LABEL_8:
      result = 0;
      break;
  }
  return result;
}

//----- (021E3688) --------------------------------------------------------
int __fastcall Function_21e3688(int *a1, int a2, uint a3)
{
  uint v3;
  int *v4;
  int v5;
  int result;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  a1[1] = malloc(a3, 24);
  Function_21d154c((uchar *)v4[1], 8, 40, 8, 48);
  Function_21d154c((uchar *)(v4[1] + 20), 8, 40, 208, 248);
  Function_21d154c((uchar *)(v4[1] + 4), 8, 40, 48, 88);
  Function_21d154c((uchar *)(v4[1] + 8), 8, 40, 88, 128);
  Function_21d154c((uchar *)(v4[1] + 12), 8, 40, 128, 168);
  Function_21d154c((uchar *)(v4[1] + 16), 8, 40, 168, 208);
  v4[2] = v5;
  v4[3] = (int)v4;
  result = Function_2023fcc(v4[1], 6u, (int)Function_21e37cc, (int)(v4 + 2), v3);
  *v4 = result;
  return result;
}

//----- (021E3724) --------------------------------------------------------
int __fastcall Function_21e3724(int result)
{
  int v1;

  v1 = 0;
  do
  {
    ++v1;
    *(uint *)(result + 12) = 3;
    result += 4;
  }
  while ( v1 < 6 );
  return result;
}

//----- (021E3734) --------------------------------------------------------
uint __fastcall Function_21e3734(int **a1, uint *a2)
{
  uint *v2;
  uint result;

  v2 = a2;
  if ( !a2[11] )
    Function_202404c(*a1);
  if ( v2[11] && v2[8] != 2 )
    v2[8] = 1;
  switch ( (uchar)*(uint *)(v2[1] + 8) )
  {
    case 0u:
      result = v2[3];
      if ( result != 2 )
      {
        result = 1;
        v2[3] = 1;
      }
      break;
    case 1u:
      result = v2[4];
      if ( result != 2 )
      {
        result = 1;
        v2[4] = 1;
      }
      break;
    case 2u:
      result = v2[5];
      if ( result != 2 )
      {
        result = 1;
        v2[5] = 1;
      }
      break;
    case 3u:
      result = v2[6];
      if ( result != 2 )
      {
        result = 1;
        v2[6] = 1;
      }
      break;
    case 4u:
      result = v2[7];
      if ( result != 2 )
      {
        result = 1;
        v2[7] = 1;
      }
      break;
    default:
      result = ErrorHandler();
      break;
  }
  return result;
}

//----- (021E37B4) --------------------------------------------------------
int __fastcall Function_21e37b4(int *a1)
{
  int *v1;
  int result;

  v1 = a1;
  Function_2024034(*a1);
  free(v1[1]);
  result = 0;
  v1[1] = 0;
  return result;
}

//----- (021E37CC) --------------------------------------------------------
int __fastcall Function_21e37cc(int a1, int a2, uint *a3)
{
  int v3;
  int v4;
  int result;
  int v6;
  int v7;

  v3 = *a3;
  v4 = a1;
  result = *a3 + 4 * a1;
  v6 = a3[1];
  v7 = *(uint *)(*a3 + 4);
  *(uint *)(result + 12) = a2;
  if ( a2 )
  {
    if ( a2 == 2 )
    {
      result = Function_21d4f20(*(uint *)(v6 + 20), 2, v4);
      switch ( (uchar)result )
      {
        case 0:
          if ( *(uint *)(v7 + 8) )
          {
            Function_21e3c18(v3, 0);
            Function_21e3e8c(v6, v3);
            result = Function_2005748(0x68Bu);
          }
          break;
        case 1:
          if ( *(uint *)(v7 + 8) != 1 )
          {
            Function_21e3c18(v3, 1);
            Function_21e3e8c(v6, v3);
            result = Function_2005748(0x68Bu);
          }
          break;
        case 2:
          if ( *(uint *)(v7 + 8) != 2 )
          {
            Function_21e3c18(v3, 2);
            Function_21e3e8c(v6, v3);
            result = Function_2005748(0x68Bu);
          }
          break;
        case 3:
          if ( *(uint *)(v7 + 8) != 3 )
          {
            if ( Function_21e3c18(v3, 3) )
            {
              Function_21e3e8c(v6, v3);
              result = Function_2005748(0x68Bu);
            }
            else
            {
              result = *(uint *)(v6 + 16);
              if ( !result )
              {
                if ( *(uint *)(v7 + 8) != 2 )
                  Function_2005748(0x5DDu);
                result = 1;
                *(uint *)(v6 + 16) = 1;
              }
            }
          }
          break;
        case 4:
          if ( *(uint *)(v7 + 8) != 4 )
          {
            if ( Function_21e3c18(v3, 4) )
            {
              Function_21e3e8c(v6, v3);
              result = Function_2005748(0x68Bu);
            }
            else
            {
              result = *(uint *)(v6 + 16);
              if ( !result )
              {
                if ( Function_21d3954(*(uint ***)(v7 + 4)) == 1 && *(uint *)(v7 + 8) != 2 )
                  Function_2005748(0x5DDu);
                result = 0;
                *(uint *)(v6 + 16) = 0;
              }
            }
          }
          break;
        case 5:
          Function_21e2e00(v7);
          result = Function_2005748(0x5DDu);
          break;
        default:
          return result;
      }
    }
  }
  else
  {
    result = 0;
    *(uint *)(v6 + 16) = 0;
  }
  return result;
}

//----- (021E3900) --------------------------------------------------------
int __fastcall Function_21e3900(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = a1;
  Function_21e3960(a2, a3, a4);
  Function_21e39fc(v7, v4, v6);
  Function_21e3af0(v7, v4, v6);
  Function_21e3bd8(v7, v4, v6);
  return Function_21e3fe4(v7, v5);
}

//----- (021E393C) --------------------------------------------------------
int __fastcall Function_21e393c(int a1, uint ***a2)
{
  int v2;
  uint ***v3;

  v2 = a1;
  v3 = a2;
  Function_21e3bdc();
  Function_21e3bc0(v2);
  Function_21e3aac(v2, v3);
  return Function_2019ebc(**v3, 5u);
}

//----- (021E3960) --------------------------------------------------------
int __fastcall Function_21e3960(int *a1, int a2, uint a3, int a4)
{
  int v4;
  int *v5;
  uint v6;
  int v7;
  ushort *v9;
  int v10;

  v10 = a4;
  v4 = a2;
  v5 = a1;
  v6 = a3;
  if ( *(uint *)(*(uint *)(a2 + 4) + 48) )
  {
    Function_21d276c(*a1, 6u, 4, 0, 0, a3);
    if ( Function_21d36d8(*(uint *)(v4 + 8)) == 1 )
      Function_21d276c(*v5, 0x18u, 4, 0, 32, v6);
  }
  Function_21d2724(*v5, 0x22u, *(uint **)*v5, 5, 0, 0, 1, v6);
  v7 = Function_21d27b8(*v5, 0x3Bu, 1, &v9, v6);
  Function_20198c0(
    *(uint *)*v5,
    5,
    (int)(v9 + 6),
    0,
    0,
    (uint)*v9 << 21 >> 24,
    (uint)v9[1] << 21 >> 24);
  free(v7);
  return Function_201c3c0(*(uint *)*v5, 5);
}

//----- (021E39FC) --------------------------------------------------------
int *__fastcall Function_21e39fc(int a1, int *a2, uint a3)
{
  int *v3;
  int v4;
  uint v5;
  int v6;
  int v7;
  int *v8;
  int *v9;
  int *result;

  v3 = (int *)*a2;
  v4 = a1;
  v5 = a3;
  v6 = Function_21d26e0(*a2);
  v7 = v6;
  v8 = Function_2009a4c(v3[80], v6, 0x60u, 1, 2196, 2, v5);
  *(uint *)(v4 + 24) = v8;
  Function_200a3dc(v8);
  Function_2009d4c(*(int **)(v4 + 24));
  v9 = Function_2009b04(v3[81], v7, 0xBu, 0, 2111, 2, 6, v5);
  *(uint *)(v4 + 28) = v9;
  Function_200a640(v9);
  Function_2009d4c(*(int **)(v4 + 28));
  *(uint *)(v4 + 32) = Function_2009bc4(v3[82], v7, 0x5Eu, 1, 2194, 2u, v5);
  result = Function_2009bc4(v3[83], v7, 0x5Fu, 1, 2195, 3u, v5);
  *(uint *)(v4 + 36) = result;
  return result;
}

//----- (021E3AAC) --------------------------------------------------------
int __fastcall Function_21e3aac(int a1, int ***a2)
{
  int v2;
  int **v3;

  v2 = a1;
  v3 = *a2;
  Function_200a4e4(*(int **)(a1 + 24));
  Function_200a6dc(*(int **)(v2 + 28));
  Function_2009d68(v3[80], *(uint ***)(v2 + 24));
  Function_2009d68(v3[81], *(uint ***)(v2 + 28));
  Function_2009d68(v3[82], *(uint ***)(v2 + 32));
  return Function_2009d68(v3[83], *(uint ***)(v2 + 36));
}

//----- (021E3AF0) --------------------------------------------------------
int __fastcall Function_21e3af0(int *a1, int *a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int result;
  int v8;
  int v9;
  int v10;
  char *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  char v17;
  int v18;

  v18 = a4;
  v4 = *a2;
  v5 = a1;
  v6 = a3;
  Function_20093b4(
    (int)&v17,
    2196,
    2111,
    2194,
    2195,
    -1,
    -1,
    0,
    0,
    *(uint *)(*a2 + 320),
    *(uint *)(*a2 + 324),
    *(uint *)(*a2 + 328),
    *(uint *)(*a2 + 332),
    0,
    0);
  v10 = *(uint *)(v4 + 316);
  v11 = &v17;
  v14 = 32;
  v15 = 2;
  v16 = v6;
  LOBYTE(result) = 0;
  v13 = 884736;
  v8 = 0;
  do
  {
    switch ( (uchar)result )
    {
      case 0:
        v12 = 114688;
        break;
      case 1:
        v12 = 278528;
        break;
      case 2:
        v12 = 442368;
        break;
      case 3:
        v12 = 606208;
        break;
      case 4:
        v12 = 770048;
        break;
      case 5:
        v12 = 933888;
        break;
      default:
        break;
    }
    v9 = Function_2021b90(&v10);
    *v5 = v9;
    ++v5;
    result = Function_2021d6c(v9, v8++);
  }
  while ( v8 < 6 );
  return result;
}

//----- (021E3BC0) --------------------------------------------------------
int __fastcall Function_21e3bc0(int *a1)
{
  int *v1;
  int v2;
  int result;

  v1 = a1;
  v2 = 0;
  do
  {
    result = Function_2021bd4(*v1);
    ++v2;
    ++v1;
  }
  while ( v2 < 6 );
  return result;
}

//----- (021E3BD8) --------------------------------------------------------
void Function_21e3bd8()
{
  ;
}

//----- (021E3BDC) --------------------------------------------------------
void Function_21e3bdc()
{
  ;
}

//----- (021E3BE0) --------------------------------------------------------
int __fastcall Function_21e3be0(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = 0;
  do
  {
    result = Function_2012af0(**(uint ***)(v1 + 4), 1);
    ++v2;
    v1 += 4;
  }
  while ( v2 < 5 );
  return result;
}

//----- (021E3BFC) --------------------------------------------------------
int __fastcall Function_21e3bfc(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = 0;
  v2 = a1;
  do
  {
    result = Function_2012af0(**(uint ***)(v2 + 4), 0);
    ++v1;
    v2 += 4;
  }
  while ( v1 < 5 );
  return result;
}

//----- (021E3C18) --------------------------------------------------------
int __fastcall Function_21e3c18(int a1, int a2, char a3)
{
  int v3;
  int result;

  v3 = a1;
  result = Function_21e2ec4(*(uint *)(a1 + 4), a2, a3);
  if ( result == 1 )
    *(uint *)(v3 + 40) = 0;
  return result;
}

//----- (021E3C2C) --------------------------------------------------------
int Function_21e3c2c()
{
  return Function_21e3c34();
}

//----- (021E3C34) --------------------------------------------------------
int __fastcall Function_21e3c34(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = *(uint *)(a1 + 4);
  Function_21e3c64();
  result = 2;
  if ( dword_21BF6C4 & 2 )
  {
    Function_21e2e00(v2);
    *(uint *)(v1 + 44) = 1;
    result = Function_2005748(0x5DDu);
  }
  return result;
}

//----- (021E3C64) --------------------------------------------------------
int __fastcall Function_21e3c64(int result)
{
  *(uint *)(result + 44) = 0;
  return result;
}

//----- (021E3C6C) --------------------------------------------------------
uint *__fastcall Function_21e3c6c(int a1, int a2, uint a3)
{
  uint v3;
  int v4;
  int v5;
  int v6;
  uint *v7;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  *(uint *)(a1 + 24) = malloc(a3, 168);
  Function_21d4fe4(*(uint **)(v4 + 24), 28, 24, 24, 16, 0, 0, 0);
  Function_21d4fe4((uint *)(*(uint *)(v4 + 24) + 28), 68, 24, 24, 16, 0, 0, 1);
  Function_21d4fe4((uint *)(*(uint *)(v4 + 24) + 56), 108, 24, 24, 16, 0, 0, 2);
  Function_21d4fe4((uint *)(*(uint *)(v4 + 24) + 84), 148, 24, 24, 16, 0, 0, 3);
  if ( Function_21d3954(*(uint ***)(v5 + 8)) == 1 )
    v6 = 0;
  else
    v6 = 2;
  Function_21d4fe4((uint *)(*(uint *)(v4 + 24) + 112), 188, 24, 24, 16, v6, v6, 4);
  Function_21d4fe4((uint *)(*(uint *)(v4 + 24) + 140), 228, 24, 24, 16, 0, 0, 5);
  v7 = (uint *)Function_21d4ee4(v3);
  *(uint *)(v4 + 20) = v7;
  return Function_21d4f04(v7, *(uint *)(v4 + 24), 6, 1);
}

//----- (021E3D48) --------------------------------------------------------
int __fastcall Function_21e3d48(int a1, uint *a2)
{
  uint *v2;
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
  result = a2[11];
  v5 = a2[1];
  if ( !result )
  {
    if ( dword_21BF6C4 & 0x10 )
      Function_21d4f20(*(uint *)(v3 + 20), 0, 1);
    if ( dword_21BF6C4 & 0x20 )
      Function_21d4f20(*(uint *)(v3 + 20), 0, -1);
    result = 1;
    if ( dword_21BF6C4 & 1 )
    {
      result = Function_21d4f7c(*(uint **)(v3 + 20));
      switch ( (uchar)result )
      {
        case 0:
          v6 = *(uint *)(v5 + 8);
          if ( v6 )
          {
            Function_21e3c18((int)v2, 0, v6);
            v2[3] = 2;
            result = Function_2005748(0x68Bu);
          }
          break;
        case 1:
          v7 = *(uint *)(v5 + 8);
          if ( v7 != 1 )
          {
            Function_21e3c18((int)v2, 1, v7);
            v2[4] = 2;
            result = Function_2005748(0x68Bu);
          }
          break;
        case 2:
          v8 = *(uint *)(v5 + 8);
          if ( v8 != 2 )
          {
            Function_21e3c18((int)v2, 2, v8);
            v2[5] = 2;
            result = Function_2005748(0x68Bu);
          }
          break;
        case 3:
          v9 = *(uint *)(v5 + 8);
          if ( v9 != 3 )
          {
            if ( Function_21e3c18((int)v2, 3, v9) )
            {
              v2[6] = 2;
              result = Function_2005748(0x68Bu);
            }
            else
            {
              result = *(uint *)(v5 + 8);
              if ( result != 2 )
                result = Function_2005748(0x5DDu);
            }
          }
          break;
        case 4:
          v10 = *(uint *)(v5 + 8);
          if ( v10 != 4 )
          {
            if ( Function_21e3c18((int)v2, 4, v10) )
            {
              v2[7] = 2;
              result = Function_2005748(0x68Bu);
            }
            else
            {
              result = *(uint *)(v5 + 8);
              if ( result != 2 )
                result = Function_2005748(0x5DDu);
            }
          }
          break;
        case 5:
          Function_21e2e00(v5);
          v2[11] = 1;
          v2[8] = 2;
          result = Function_2005748(0x5DDu);
          break;
        default:
          return result;
      }
    }
  }
  return result;
}

//----- (021E3E74) --------------------------------------------------------
int __fastcall Function_21e3e74(int a1)
{
  int v1;
  int result;

  v1 = a1;
  free(*(uint *)(a1 + 24));
  Function_21d4efc(*(uint *)(v1 + 20));
  result = 0;
  *(uint *)(v1 + 20) = 0;
  *(uint *)(v1 + 24) = 0;
  return result;
}

//----- (021E3E8C) --------------------------------------------------------
int __fastcall Function_21e3e8c(int result, int a2)
{
  int v2;

  v2 = *(uint *)(a2 + 4);
  *(uint *)(a2 + 48) = 0;
  switch ( (uchar)*(uint *)(v2 + 8) )
  {
    case 0u:
      result = Function_21d4f20(*(uint *)(result + 20), 4, 0);
      break;
    case 1u:
      result = Function_21d4f20(*(uint *)(result + 20), 4, 1);
      break;
    case 2u:
      result = Function_21d4f20(*(uint *)(result + 20), 4, 2);
      break;
    case 3u:
      result = Function_21d4f20(*(uint *)(result + 20), 4, 3);
      break;
    case 4u:
      result = Function_21d4f20(*(uint *)(result + 20), 4, 4);
      break;
    default:
      return result;
  }
  return result;
}

//----- (021E3EEC) --------------------------------------------------------
int __fastcall Function_21e3eec(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  result = *(uint *)(*(uint *)(a2 + 4) + 8);
  if ( result )
  {
    result = Function_21d3998(*(uint *)(a2 + 8));
    if ( result == 2 )
    {
      if ( *(uint *)(v2 + 48) )
      {
        result = 64;
        if ( dword_21BF6C4 & 0x40 )
        {
          result = 0;
          *(uint *)(v2 + 48) = 0;
        }
      }
      else
      {
        result = 128;
        if ( dword_21BF6C4 & 0x80 )
        {
          result = 1;
          *(uint *)(v2 + 48) = 1;
        }
      }
    }
  }
  return result;
}

//----- (021E3F2C) --------------------------------------------------------
int __fastcall Function_21e3f2c(int *a1, int a2, int a3)
{
  int *v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_21d25b8(*(uint *)(a2 + 20), *a1);
  return Function_21e3f48(v3, v4, v5);
}

//----- (021E3F48) --------------------------------------------------------
int __fastcall Function_21e3f48(int *a1, int a2, int a3)
{
  int v3;
  int *v4;
  int v5;
  int result;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  if ( !Function_21d3998(*(uint *)(a3 + 8)) )
    return Function_21e3f98(v4, 0);
  result = Function_21e3f98(v4, 1);
  if ( !*(uint *)(v3 + 48) )
  {
    if ( result )
      Function_21d25b8(*(uint *)(v5 + 20), *v4);
    result = Function_21e3f88(v4, v5);
  }
  return result;
}

//----- (021E3F88) --------------------------------------------------------
int __fastcall Function_21e3f88(int *a1, int a2)
{
  return Function_21d2544(*(uint *)(a2 + 20), *a1);
}

//----- (021E3F98) --------------------------------------------------------
int __fastcall Function_21e3f98(int *a1, int a2)
{
  int v2;
  int v3;

  v2 = *a1;
  v3 = a2;
  if ( a2 == Function_21d25a0((int *)(*a1 + 484)) )
    return 0;
  Function_21d2584((uint *)(v2 + 484), v3);
  return 1;
}

//----- (021E3FC0) --------------------------------------------------------
int __fastcall Function_21e3fc0(int a1, int a2, int a3)
{
  int v3;
  int v4;

  v3 = a1;
  v4 = a2;
  Function_20129d0(**(uint ***)(a1 + 4 * a3 + 4), 0);
  return Function_20129d0(**(uint ***)(v3 + 4 * v4 + 4), 1);
}

//----- (021E3FE4) --------------------------------------------------------
uint __fastcall Function_21e3fe4(int a1, int a2)
{
  int v2;
  uint result;

  v2 = a1;
  result = Function_21d3954(*(uint ***)(a2 + 8));
  if ( !result )
    result = Function_2021cac(*(uint *)(v2 + 16), 0);
  return result;
}

//----- (021E3FFC) --------------------------------------------------------
int (*__fastcall Function_21e3ffc(int *a1, int a2, int a3))()
{
  int v3;
  int *v4;
  int v5;
  int v6;
  int v7;
  int (*result)();

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = Function_21e4080(a3);
  v7 = Function_21e40c8(v3, v5);
  *v4 = v6;
  v4[1] = v7;
  v4[8] = 0;
  v4[9] = Function_21e411c();
  v4[2] = (int)Function_21e4120;
  v4[3] = (int)Function_21e4168;
  v4[4] = (int)Function_21e4194;
  v4[5] = (int)Function_21e41a8;
  v4[6] = (int)Function_21e4268;
  result = Function_21e4288;
  v4[7] = (int)Function_21e4288;
  return result;
}

//----- (021E4054) --------------------------------------------------------
int __fastcall Function_21e4054(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_21e40f4(*a1);
  return Function_21e4108(v1[1]);
}

//----- (021E4068) --------------------------------------------------------
int __fastcall Function_21e4068(int a1, int a2, int a3)
{
  int result;

  result = *(uint *)(a1 + 4);
  *(uint *)(result + 4) = a2;
  *(uint *)(result + 8) = a3;
  return result;
}

//----- (021E4070) --------------------------------------------------------
int __fastcall Function_21e4070(int a1, int a2)
{
  int result;

  result = *(uint *)(a1 + 4);
  *(uint *)(result + 12) = a2;
  return result;
}

//----- (021E4078) --------------------------------------------------------
int __fastcall Function_21e4078(int a1, int a2)
{
  int result;

  result = *(uint *)(a1 + 4);
  *(uint *)(result + 16) = a2;
  return result;
}

//----- (021E4080) --------------------------------------------------------
int *__fastcall Function_21e4080(uint a1, int a2)
{
  int v2;
  int *v3;
  int *v4;
  int v5;

  v2 = a2;
  v3 = (int *)malloc(a1, 16);
  if ( !v3 )
    ErrorHandler();
  v4 = v3;
  v5 = 16;
  do
  {
    *(uchar *)v4 = 0;
    v4 = (int *)((char *)v4 + 1);
    --v5;
  }
  while ( v5 );
  *v3 = Function_21d138c(v2);
  v3[1] = Function_21d13ec(v2);
  v3[2] = Function_21d1410(v2, 5);
  v3[3] = Function_21d1430(v2, 5);
  return v3;
}

//----- (021E40C8) --------------------------------------------------------
int *__fastcall Function_21e40c8(uint a1, int a2)
{
  int v2;
  int *v3;
  int *v4;
  int v5;

  v2 = a2;
  v3 = (int *)malloc(a1, 20);
  if ( !v3 )
    ErrorHandler();
  v4 = v3;
  v5 = 20;
  do
  {
    *(uchar *)v4 = 0;
    v4 = (int *)((char *)v4 + 1);
    --v5;
  }
  while ( v5 );
  *v3 = Function_21d13fc(v2);
  return v3;
}

//----- (021E40F4) --------------------------------------------------------
uint __fastcall Function_21e40f4(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return free(v1);
}

//----- (021E4108) --------------------------------------------------------
uint __fastcall Function_21e4108(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return free(v1);
}

//----- (021E411C) --------------------------------------------------------
int Function_21e411c()
{
  return 0;
}

//----- (021E4120) --------------------------------------------------------
int __fastcall Function_21e4120(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int *v5;
  int *v6;
  int v7;
  int v8;

  v2 = a2;
  v3 = a1;
  v4 = Function_21d37bc(*(uint *)(a2 + 4));
  v5 = (int *)malloc(*(uint *)(v3 + 4), 24);
  if ( !v5 )
    ErrorHandler();
  v6 = v5;
  v7 = 24;
  do
  {
    *(uchar *)v6 = 0;
    v6 = (int *)((char *)v6 + 1);
    --v7;
  }
  while ( v7 );
  *(uint *)(v3 + 8) = v5;
  v8 = Function_20050f8(v4);
  *v5 = v8;
  v5[2] = Function_20050ec(v8);
  Function_21e4898(v5, v2);
  return 1;
}

//----- (021E4168) --------------------------------------------------------
int __fastcall Function_21e4168(uint *a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1[2];
  if ( a1[3] == 1 )
    return 1;
  if ( a1[4] != 1 )
  {
    Function_21e4898(v3, a2);
    Function_21e4c68(v3, v2);
  }
  return 0;
}

//----- (021E4194) --------------------------------------------------------
int __fastcall Function_21e4194(int a1)
{
  int v1;

  v1 = a1;
  free(*(uint *)(a1 + 8));
  *(uint *)(v1 + 8) = 0;
  return 1;
}

//----- (021E41A8) --------------------------------------------------------
int __fastcall Function_21e41a8(int a1, uint *a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  int result;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = *(uint *)(a4 + 8);
  v8 = a2[2];
  switch ( (uchar)*a2 )
  {
    case 0u:
      v9 = (int *)malloc(a2[1], 816);
      v4[2] = v9;
      Call_FillMemWithValue(v9, 0, 0x330u);
      ++*v4;
      goto LABEL_14;
    case 1u:
      v10 = a2[1];
      Function_21e4590(v8, a1);
      if ( *(uint *)(v5 + 12) )
        Function_21e448c(v8, v5, v6, 1);
      else
        Function_21e43c8(v8, v5, v6, 1);
      Function_200564c(0, 3);
      ++*v4;
      goto LABEL_14;
    case 2u:
      if ( *(uint *)(a1 + 12) )
        v11 = Function_21e4518(a2[2], a1);
      else
        v11 = Function_21e4440(a2[2], a1);
      if ( v11 == 1 && !Function_2005684() )
      {
        Function_20049f4((uint *)1, 1);
        ++*v4;
      }
      goto LABEL_14;
    case 3u:
      result = 1;
      break;
    default:
LABEL_14:
      result = 0;
      break;
  }
  return result;
}

//----- (021E4268) --------------------------------------------------------
int __fastcall Function_21e4268(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;

  v4 = *(uint *)(a4 + 8);
  v5 = *(uint *)(a2 + 8);
  Function_21e4a28(v5, a1, *(uint *)(a4 + 8));
  Function_21e4b10(v5, v4);
  return 0;
}

//----- (021E4288) --------------------------------------------------------
int __fastcall Function_21e4288(int a1, uint *a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  int v6;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a2[2];
  switch ( (uchar)*a2 )
  {
    case 0u:
      if ( *(uint *)(v4 + 12) )
        Function_21e448c(v5, v4, a3, 0);
      else
        Function_21e43c8(v5, v4, a3, 0);
      Function_20049f4((uint *)1, 0);
      Function_200560c(127, 3, 0);
      ++*v3;
      goto LABEL_14;
    case 1u:
      if ( *(uint *)(v4 + 12) )
        v6 = Function_21e4518(v5, v4);
      else
        v6 = Function_21e4440(v5, v4);
      if ( v6 )
        ++*v3;
      goto LABEL_14;
    case 2u:
      Function_21e45dc(v5, v4);
      ++*v3;
      goto LABEL_14;
    case 3u:
      free(v5);
      v3[2] = 0;
      ++*v3;
      goto LABEL_14;
    case 4u:
      result = 1;
      break;
    default:
LABEL_14:
      result = 0;
      break;
  }
  return result;
}

//----- (021E4328) --------------------------------------------------------
int __fastcall Function_21e4328(int *a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = a2;
  v4 = Function_21d2170(*a1);
  v5 = Function_21d37bc(*(uint *)(v3 + 4));
  Function_21d1890(*v2, *(uint *)(v3 + 4), v5, 2, 48, 64);
  return Function_2007dec(v4, 6u, 0);
}

//----- (021E4360) --------------------------------------------------------
int __fastcall Function_21e4360(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;
  int v5;

  v1 = a1;
  v5 = 0;
  do
  {
    v2 = 0;
    v3 = v1;
    do
    {
      Function_2021fe0(*(uint *)(v3 + 32), 1);
      ++v2;
      v3 += 8;
    }
    while ( v2 < 9 );
    Function_2021fe0(*(uint *)(v1 + 104), 1);
    v1 += 84;
    result = v5 + 1;
    v5 = result;
  }
  while ( result < 9 );
  return result;
}

//----- (021E4394) --------------------------------------------------------
int __fastcall Function_21e4394(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;
  int v5;

  v1 = a1;
  v5 = 0;
  do
  {
    v2 = 0;
    v3 = v1;
    do
    {
      Function_2021fe0(*(uint *)(v3 + 32), 0);
      ++v2;
      v3 += 8;
    }
    while ( v2 < 9 );
    Function_2021fe0(*(uint *)(v1 + 104), 0);
    v1 += 84;
    result = v5 + 1;
    v5 = result;
  }
  while ( result < 9 );
  return result;
}

//----- (021E43C8) --------------------------------------------------------
int __fastcall Function_21e43c8(int a1, int *a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;

  v4 = a3;
  v5 = a2;
  v6 = a4;
  Function_21e4360(a1);
  if ( Function_21e2a54(*(uint *)(v4 + 8)) )
  {
    if ( v6 )
      Function_21d23f8((uint *)(*v5 + 364), 3, -16, 0, 0, 16, 42, 47, 0);
    else
      Function_21d23f8((uint *)(*v5 + 364), 3, 0, -16, 16, 0, 42, 47, 0);
  }
  return Function_21d24fc(*v5, *v5 + 364);
}

//----- (021E4440) --------------------------------------------------------
int __fastcall Function_21e4440(int a1, int *a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int result;

  v4 = a1;
  v5 = a2;
  v6 = a4;
  v7 = Function_21e2a54(*(uint *)(a3 + 8));
  v8 = *v5;
  if ( v7 )
    v9 = Function_21d2424((uint *)(v8 + 364));
  else
    v9 = Function_21d24ec(v8 + 364);
  if ( v9 )
  {
    if ( v6 )
      Function_21e4394(v4);
    result = 1;
  }
  else
  {
    Function_21d24fc(*v5, *v5 + 364);
    result = 0;
  }
  return result;
}

//----- (021E448C) --------------------------------------------------------
uint *__fastcall Function_21e448c(int a1, int *a2, int a3, int a4)
{
  uint *v4;
  int *v5;
  int v6;
  int v7;
  uint *result;

  v4 = (uint *)a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  Function_21e4360(a1);
  if ( !v7 )
    Function_21d2648(v4, 48, v5[1], 64, v5[2], v5[4]);
  result = (uint *)Function_21e2a54(*(uint *)(v6 + 8));
  if ( result )
  {
    if ( v7 )
      result = Function_21d23f8((uint *)(*v5 + 364), v5[4] & 0xFF, -16, 0, 0, 16, 42, 47, 0);
    else
      result = Function_21d23f8((uint *)(*v5 + 364), v5[4] & 0xFF, 0, -16, 16, 0, 42, 47, 0);
  }
  return result;
}

//----- (021E4518) --------------------------------------------------------
int __fastcall Function_21e4518(int *a1, int *a2, int a3, int a4)
{
  int *v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int *v11;
  int v13;
  int v14;
  int v15;

  v15 = a4;
  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( a4 )
  {
    v13 = 1;
  }
  else
  {
    v13 = Function_21d2664(a1);
    Function_21d2164(*v5, *v4, v4[1]);
  }
  v8 = Function_21e2a54(*(uint *)(v6 + 8));
  v9 = *v5;
  if ( v8 )
    v14 = Function_21d2424((uint *)(v9 + 364));
  else
    v14 = Function_21d24ec(v9 + 364);
  v10 = 0;
  v11 = &v13;
  do
  {
    if ( !*v11 )
      break;
    ++v10;
    ++v11;
  }
  while ( v10 < 2 );
  if ( v10 != 2 )
    return 0;
  if ( v7 == 1 )
    Function_21e4394((int)v4);
  return 1;
}

//----- (021E4590) --------------------------------------------------------
int __fastcall Function_21e4590(int a1, int *a2, int a3, int a4, int a5)
{
  int v5;
  int *v6;
  int v7;

  v5 = a3;
  v6 = a2;
  v7 = a1;
  Function_21e45fc(a2, a3, a5);
  Function_21e46a8(v7, v6, a5);
  Function_21e47cc(v7, v6, a5);
  Function_21e4890(v7, v6, v5, a5);
  Function_21e4328(v6, v5);
  Function_21e4abc(v7, v6);
  return Function_21e4af4(v7);
}

//----- (021E45DC) --------------------------------------------------------
int __fastcall Function_21e45dc(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_21e4894();
  Function_21e4868(v2);
  Function_21e4770(v2, v3);
  return Function_21e4664(v3);
}

//----- (021E45FC) --------------------------------------------------------
int __fastcall Function_21e45fc(int *a1, int a2, uint a3)
{
  int *v3;
  uint v4;
  int v5;
  ushort *v7;

  v3 = a1;
  v4 = a3;
  Function_21d2724(*a1, 0x21u, *(uint **)*a1, 3, 0, 0, 1, a3);
  v5 = Function_21d27b8(*v3, 0x46u, 1, &v7, v4);
  Function_20198c0(
    *(uint *)*v3,
    3,
    (int)(v7 + 6),
    0,
    0,
    (uint)*v7 << 21 >> 24,
    (uint)v7[1] << 21 >> 24);
  free(v5);
  return Function_201c3c0(*(uint *)*v3, 3);
}

//----- (021E4664) --------------------------------------------------------
int __fastcall Function_21e4664(int **a1)
{
  uint ***v1;

  v1 = (uint ***)a1;
  Function_201c63c(**a1, 1, 0, 0);
  Function_201ae78((int)(*v1 + 1), 0, 0, 0, 0x100u, 0xC0u);
  Function_2019ebc(**v1, 1u);
  return Function_201c2b4((int)(*v1 + 1), 0);
}

//----- (021E46A8) --------------------------------------------------------
int *__fastcall Function_21e46a8(int a1, int *a2, uint a3)
{
  int *v3;
  int v4;
  uint v5;
  int v6;
  int *result;

  v3 = (int *)*a2;
  v4 = a1;
  v5 = a3;
  v6 = Function_21d26e0(*a2);
  *(uint *)(v4 + 788) = Function_2009a4c(v3[80], v6, 0x74u, 1, 11116, 1, v5);
  Function_200a3dc(*(int **)(v4 + 788));
  Function_2009d4c(*(int **)(v4 + 788));
  *(uint *)(v4 + 792) = Function_2009b04(v3[81], v6, 0x13u, 0, 11019, 1, 1, v5);
  Function_200a640(*(int **)(v4 + 792));
  Function_2009d4c(*(int **)(v4 + 792));
  *(uint *)(v4 + 796) = Function_2009bc4(v3[82], v6, 0x75u, 1, 11117, 2u, v5);
  result = Function_2009bc4(v3[83], v6, 0x73u, 1, 11115, 3u, v5);
  *(uint *)(v4 + 800) = result;
  return result;
}

//----- (021E4770) --------------------------------------------------------
int __fastcall Function_21e4770(int a1, int ***a2)
{
  int v2;
  int **v3;

  v2 = a1;
  v3 = *a2;
  Function_200a4e4(*(int **)(a1 + 788));
  Function_200a6dc(*(int **)(v2 + 792));
  Function_2009d68(v3[80], *(uint ***)(v2 + 788));
  Function_2009d68(v3[81], *(uint ***)(v2 + 792));
  Function_2009d68(v3[82], *(uint ***)(v2 + 796));
  return Function_2009d68(v3[83], *(uint ***)(v2 + 800));
}

//----- (021E47CC) --------------------------------------------------------
int __fastcall Function_21e47cc(int a1, int *a2, int a3)
{
  int v3;
  int v4;
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
  char v17;

  v3 = *a2;
  v4 = a1;
  v5 = a3;
  Function_20093b4(
    (int)&v17,
    11116,
    11019,
    11117,
    11115,
    -1,
    -1,
    0,
    0,
    *(uint *)(*a2 + 320),
    *(uint *)(*a2 + 324),
    *(uint *)(*a2 + 328),
    *(uint *)(*a2 + 332),
    0,
    0);
  v10 = *(uint *)(v3 + 316);
  v11 = &v17;
  v14 = 17;
  v15 = 1;
  v16 = v5;
  v9 = 0;
  v12 = 0;
  v13 = 0;
  do
  {
    v6 = 0;
    v7 = v4;
    do
    {
      *(uint *)(v7 + 32) = Function_2021b90(&v10);
      ++v6;
      v7 += 8;
    }
    while ( v6 < 9 );
    *(uint *)(v4 + 104) = Function_2021b90(&v10);
    v4 += 84;
    result = v9 + 1;
    v9 = result;
  }
  while ( result < 9 );
  return result;
}

//----- (021E4868) --------------------------------------------------------
int __fastcall Function_21e4868(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;

  v1 = a1;
  v2 = 0;
  do
  {
    v3 = 0;
    v4 = v1;
    do
    {
      Function_2021bd4(*(uint *)(v4 + 32));
      ++v3;
      v4 += 8;
    }
    while ( v3 < 9 );
    result = Function_2021bd4(*(uint *)(v1 + 104));
    ++v2;
    v1 += 84;
  }
  while ( v2 < 9 );
  return result;
}

//----- (021E4890) --------------------------------------------------------
void Function_21e4890()
{
  ;
}

//----- (021E4894) --------------------------------------------------------
void Function_21e4894()
{
  ;
}

//----- (021E4898) --------------------------------------------------------
uint __fastcall Function_21e4898(int *a1, int a2)
{
  int *v2;
  uint v3;
  uint result;

  v2 = a1;
  v3 = Function_21e4d1c(*(uint *)(a2 + 12));
  result = Function_2005188(1, *v2, v3);
  v2[1] = result;
  return result;
}

//----- (021E48B0) --------------------------------------------------------
int __fastcall Function_21e48b0(int a1, uint *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9;
  int v10;
  int result;
  int v12;
  long long v13;
  int v14;
  uint *v15;
  int v16;
  int v17;

  v15 = a2;
  v16 = a4;
  v9 = a7;
  v17 = Function_20050e0(a3);
  Function_201ae78(*v15 + 4, 0, (ushort)a7, (a8 - 32) & 0xFFFF, a6, 0x40u);
  v10 = 0;
  result = a5 - v16;
  if ( a6 > 0 )
  {
    v12 = 0;
    do
    {
      v13 = ll_mul((a5 - v16) << 12, v12);
      v14 = FX_Div((v13 + 2048) >> 12, a6 << 12);
      Function_21e495c(*v15 + 4, *(uchar *)(v17 + (v14 >> 12) + v16), v9, a8, a9);
      result = 4096;
      ++v10;
      ++v9;
      v12 += 4096;
    }
    while ( v10 < a6 );
  }
  return result;
}

//----- (021E495C) --------------------------------------------------------
int __fastcall Function_21e495c(int a1, uint a2, ushort a3, int a4, int *a5)
{
  int v5;
  ushort v6;
  int v7;
  short v8;
  int v9;
  int v10;
  short v11;
  int result;
  int v13;

  v5 = a2;
  v13 = a1;
  v6 = a3;
  v7 = a4;
  if ( a2 > 0x7F )
    v5 = a2 - 255;
  if ( v5 )
    v5 = FX_Div(
           ((uint)((v5 << 29) + 2048) >> 12) | ((ull)(((ll)(v5 << 12) << 17) + 2048) >> 32 << 20),
           520192) >> 12;
  v8 = v7 + v5;
  v9 = v7 + *a5;
  if ( v7 + v5 <= v9 )
  {
    LOWORD(v10) = v7 + v5;
    v11 = v9 - v8;
  }
  else
  {
    v10 = v7 + *a5;
    v11 = v8 - v9;
  }
  result = Function_201ae78(v13, 6, v6, (ushort)v10, 1u, v11 + 1);
  *a5 = v5;
  return result;
}

//----- (021E49D0) --------------------------------------------------------
int __fastcall Function_21e49d0(uint *a1, int a2, int a3, ushort a4, int a5, int *a6)
{
  uint *v6;
  int v7;
  int v8;
  ushort v9;
  int result;

  v6 = a1;
  v7 = a2;
  v8 = a3;
  v9 = a4;
  for ( result = Function_201ae78(*a1 + 4, 0, a4, (a5 - 32) & 0xFFFF, a3 - a2, 0x40u); v7 < v8; ++v9 )
  {
    result = Function_21e495c(*v6 + 4, 0, v9, a5, a6);
    ++v7;
  }
  return result;
}

//----- (021E4A28) --------------------------------------------------------
int __fastcall Function_21e4a28(uint *a1, int **a2, int *a3)
{
  uint *v3;
  int **v4;
  int *v5;
  int v6;
  int v7;
  int result;

  v3 = a1;
  v4 = a2;
  a1[201] += 4;
  v5 = a3;
  a1[201] = (a1[201] >> 31) + __ROR4__((a1[201] << 24) - (a1[201] >> 31), 24);
  v6 = a1[201] - 8 + ((char)-(a1[201] - 8 < 0) & 0x100);
  v7 = a1[203];
  if ( v7 == a3[1] )
    Function_21e49d0(a2, 0, 4, v6, 151, a1 + 202);
  else
    Function_21e48b0((int)a1, a2, *a3, v7, a3[1], 4, v6, 151, (int)(a1 + 202));
  Function_201c63c(**v4, 1, 0, v3[201]);
  Function_201a9a4((int)(*v4 + 1));
  result = 812;
  v3[203] = v5[1];
  return result;
}

//----- (021E4ABC) --------------------------------------------------------
int __fastcall Function_21e4abc(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = a1;
  Function_201c2b4(*a2 + 4, 9);
  Function_21e49d0(v2, 0, 256, 0, 151, (int *)(v3 + 808));
  return Function_201a954(*v2 + 4, v4);
}

//----- (021E4AF4) --------------------------------------------------------
int __fastcall Function_21e4af4(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = 0;
  v2 = a1 + 32;
  do
  {
    result = Function_21e4b30(v2, v1++);
    v2 += 84;
  }
  while ( v1 < 9 );
  return result;
}

//----- (021E4B10) --------------------------------------------------------
int __fastcall Function_21e4b10(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a2;
  v3 = 0;
  v4 = a1 + 32;
  do
  {
    result = Function_21e4b94(v4, *(uchar *)(v2 + v3++ + 12));
    v4 += 84;
  }
  while ( v3 < 9 );
  return result;
}

//----- (021E4B30) --------------------------------------------------------
uint __fastcall Function_21e4b30(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  uint *v7;
  int v8;
  int v9;
  uchar savedregs[24];

  *(uint *)savedregs = a4;
  v7 = a1;
  v8 = (16 * a2 + 112) << 12;
  v4 = a1;
  v9 = 393216;
  v5 = 0;
  do
  {
    Function_2021c50((uint *)*v4, &v8);
    Function_2021cac(*v4, 0);
    v9 -= 0x8000;
    Function_2021d6c(*v4, 1u);
    ++v5;
    v4 += 2;
  }
  while ( v5 < 9 );
  v9 = 393216;
  Function_2021c50((uint *)v7[18], &v8);
  return Function_2021cac(v7[18], 0);
}

//----- (021E4B94) --------------------------------------------------------
uint __fastcall Function_21e4b94(uint *a1, int a2)
{
  int v2;
  int v3;
  uint *v4;
  uint *v5;
  int v6;
  uint *v7;
  int v8;
  int v9;
  int v10;
  uint result;
  int v12;

  v2 = 0;
  v3 = a2;
  v4 = a1;
  v12 = 0;
  if ( a2 > 0 )
  {
    v5 = a1;
    do
    {
      Function_2021cac(*v5, 1);
      v5[1] = 2 * ++v2;
      v5 += 2;
    }
    while ( v2 < v3 );
  }
  v6 = 0;
  v7 = v4;
  do
  {
    if ( Function_2021d34(*v7) )
    {
      if ( (int)(v7[1] - 1) <= 0 )
      {
        Function_2021cac(*v7, 0);
      }
      else
      {
        --v7[1];
        v12 = v6 + 1;
      }
    }
    ++v6;
    v7 += 2;
  }
  while ( v6 < 9 );
  if ( (int)v4[19] <= v12 )
  {
    Function_21e4c38(v4[18], v12);
    v4[20] = 16;
    if ( (int)v4[19] < v12 )
      Function_2021cac(v4[18], 1);
    v4[19] = v12;
  }
  v8 = v4[19];
  if ( v8 <= 0 )
    return Function_2021cac(v4[18], 0);
  v9 = v4[20];
  if ( v9 >= 0 )
  {
    result = v9 - 1;
    v4[20] = result;
  }
  else
  {
    v10 = v8 - 1;
    v4[19] = v10;
    result = Function_21e4c38(v4[18], v10);
  }
  return result;
}

//----- (021E4C38) --------------------------------------------------------
int __fastcall Function_21e4c38(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int *v6;
  int v7;
  int v9;
  int v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a1;
  v5 = a2;
  Function_2021d28();
  v7 = v6[1];
  v9 = *v6;
  v10 = v7;
  v11 = v6[2];
  v10 = (-8 * v5 + 96) << 12;
  return Function_2021c50(v4, &v9);
}

//----- (021E4C68) --------------------------------------------------------
uint __fastcall Function_21e4c68(int a1, int a2)
{
  int v2;
  uint v3;
  uchar *v4;
  uint result;

  v2 = a1;
  v3 = Function_21e4d1c(*(uint *)(a2 + 12));
  v4 = (uchar *)(v2 + 12);
  *(uchar *)(v2 + 12) = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v4[4] = 0;
  v4[5] = 0;
  v4[6] = 0;
  v4[7] = 0;
  v4[8] = 0;
  result = Function_200598c();
  if ( result )
    result = Function_20051d0(*(uint *)v2, v2 + 12, 9, v3);
  return result;
}

//----- (021E4CA4) --------------------------------------------------------
int (*__fastcall Function_21e4ca4(int *a1, int a2, int a3))()
{
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int (*result)();

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Function_21e4d24(a3);
  v7 = Function_21e4d64(v4, v5);
  v8 = Function_21e4d8c(v4, v5);
  *v3 = v6;
  v3[1] = v7;
  v3[8] = v8;
  v3[9] = Function_21e4dbc();
  v3[2] = (int)Function_21e4dc0;
  v3[3] = (int)Function_21e4e00;
  v3[4] = (int)Function_21e4e84;
  v3[5] = (int)Function_21e4e98;
  v3[6] = (int)Function_21e4f20;
  result = Function_21e4f78;
  v3[7] = (int)Function_21e4f78;
  return result;
}

//----- (021E4D04) --------------------------------------------------------
int __fastcall Function_21e4d04(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_21e4d90(*a1);
  Function_21e4da4(v1[1]);
  return Function_21e4db8(v1[8]);
}

//----- (021E4D1C) --------------------------------------------------------
int __fastcall Function_21e4d1c(int a1)
{
  return *(uint *)(*(uint *)a1 + 12);
}

//----- (021E4D24) --------------------------------------------------------
int *__fastcall Function_21e4d24(uint a1, int a2)
{
  int v2;
  int *v3;
  int *v4;
  int v5;

  v2 = a2;
  v3 = (int *)malloc(a1, 16);
  if ( !v3 )
    ErrorHandler();
  v4 = v3;
  v5 = 16;
  do
  {
    *(uchar *)v4 = 0;
    v4 = (int *)((char *)v4 + 1);
    --v5;
  }
  while ( v5 );
  *v3 = Function_21d13a0(v2);
  v3[1] = Function_21d13ec(v2);
  v3[2] = Function_21d1430(v2, 3);
  return v3;
}

//----- (021E4D64) --------------------------------------------------------
uchar *__fastcall Function_21e4d64(uint a1, int a2)
{
  int v2;
  uchar *v3;

  v2 = a2;
  v3 = (uchar *)malloc(a1, 4);
  if ( !v3 )
    ErrorHandler();
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  *(uint *)v3 = Function_21d13fc(v2);
  return v3;
}

//----- (021E4D8C) --------------------------------------------------------
int Function_21e4d8c()
{
  return 0;
}

//----- (021E4D90) --------------------------------------------------------
uint __fastcall Function_21e4d90(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return free(v1);
}

//----- (021E4DA4) --------------------------------------------------------
uint __fastcall Function_21e4da4(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return free(v1);
}

//----- (021E4DB8) --------------------------------------------------------
void Function_21e4db8()
{
  ;
}

//----- (021E4DBC) --------------------------------------------------------
int Function_21e4dbc()
{
  return 0;
}

//----- (021E4DC0) --------------------------------------------------------
int __fastcall Function_21e4dc0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int *v5;

  v2 = a2;
  v3 = a1;
  v4 = Function_21d37bc(*(uint *)(a2 + 4));
  v5 = (int *)malloc(*(uint *)(v3 + 4), 112);
  Call_FillMemWithValue(v5, 0, 0x70u);
  Function_21e5128(v5, v2, *(uint *)(v3 + 4));
  Function_21e51dc(v5, v2);
  v5[27] = Function_20050f8(v4);
  *(uint *)(v3 + 8) = v5;
  return 1;
}

//----- (021E4E00) --------------------------------------------------------
int __fastcall Function_21e4e00(uint *a1, int a2)
{
  int v2;
  uint *v3;
  int result;

  v2 = a2;
  v3 = (uint *)a1[2];
  if ( a1[3] == 1 )
  {
    Function_21e5e18(a1[2]);
    Function_21e5e28(v3);
    result = 1;
  }
  else if ( a1[4] == 1 )
  {
    result = 0;
  }
  else
  {
    *(uint *)(a2 + 12) = v3[15];
    if ( Function_21e33ac(*(uint *)(a2 + 8)) )
    {
      if ( !Function_200598c() && !v3[25] )
        Function_21e5e18(v3);
      Function_21e51dc(v3, v2);
      if ( Function_21e33bc(*(uint *)(v2 + 8)) && Function_21d3998(*(uint *)(v2 + 4)) == 2 )
        Function_21e5f5c(v3, v2);
      if ( v3[25] )
      {
        if ( v3[11] )
          Function_21e5e48(v3, v2);
      }
    }
    result = 0;
  }
  return result;
}

//----- (021E4E84) --------------------------------------------------------
int __fastcall Function_21e4e84(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 8);
  Function_21e5200(*(uint *)(a1 + 8));
  free(v1);
  return 1;
}

//----- (021E4E98) --------------------------------------------------------
int __fastcall Function_21e4e98(uint *a1, uint *a2, int a3)
{
  uint *v3;
  uint *v4;
  int v5;
  int v6;
  int *v7;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = a2[2];
  switch ( (uchar)*a2 )
  {
    case 0u:
      v7 = (int *)malloc(a2[1], 116);
      v3[2] = v7;
      Call_FillMemWithValue(v7, 0, 0x74u);
      ++*v3;
      goto LABEL_7;
    case 1u:
      Function_21e54d4(a2[2], a1, a2[1]);
      Function_21e507c(v6, v4, v5, 1);
      ++*v3;
      goto LABEL_7;
    case 2u:
      if ( Function_21e50ec(a2[2], a1) )
        ++*v3;
      goto LABEL_7;
    case 3u:
      Function_21d25ac(*a1 + 484, 0);
      result = 1;
      break;
    default:
LABEL_7:
      result = 0;
      break;
  }
  return result;
}

//----- (021E4F20) --------------------------------------------------------
int __fastcall Function_21e4f20(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;

  v4 = a3;
  v5 = a1;
  v6 = *(uint *)(a4 + 8);
  v7 = *(uint *)(a2 + 8);
  if ( Function_21e33ac(*(uint *)(a3 + 8)) )
  {
    Function_21e59b4(v7, v6);
    Function_21e5a04(v7, v6);
    Function_21e5a2c(v7, v6);
    Function_21e5b50(v7, v6);
    Function_21e5b6c(v7, v5, v6);
    Function_21e5c4c(v7);
    Function_21e5f38(v7, v6);
    Function_21e5fd0(v5, v4);
  }
  return 0;
}

//----- (021E4F78) --------------------------------------------------------
int __fastcall Function_21e4f78(uint *a1, uint *a2, int a3)
{
  uint *v3;
  uint *v4;
  int v5;
  int v6;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = a2[2];
  switch ( (uchar)*a2 )
  {
    case 0u:
      Function_21d25ac(*a1 + 484, 1);
      Function_21e5ec0(v6);
      Function_21e507c(v6, v4, v5, 0);
      ++*v3;
      goto LABEL_8;
    case 1u:
      if ( Function_21e50ec(a2[2], a1) )
        ++*v3;
      goto LABEL_8;
    case 2u:
      Function_21e5510(a2[2], a1, a2[1]);
      ++*v3;
      goto LABEL_8;
    case 3u:
      free(a2[2]);
      ++*v3;
      goto LABEL_8;
    case 4u:
      result = 1;
      break;
    default:
LABEL_8:
      result = 0;
      break;
  }
  return result;
}

//----- (021E5004) --------------------------------------------------------
int __fastcall Function_21e5004(int *a1)
{
  int *v1;

  v1 = a1;
  Function_2021fe0(*a1, 1);
  Function_2021fe0(v1[15], 1);
  Function_2021fe0(v1[1], 1);
  Function_2021fe0(v1[8], 1);
  Function_2012af0(*(uint **)v1[20], 1);
  return Function_2012af0(*(uint **)v1[21], 1);
}

//----- (021E5040) --------------------------------------------------------
int __fastcall Function_21e5040(int *a1)
{
  int *v1;

  v1 = a1;
  Function_2021fe0(*a1, 0);
  Function_2021fe0(v1[15], 0);
  Function_2021fe0(v1[1], 0);
  Function_2021fe0(v1[8], 0);
  Function_2012af0(*(uint **)v1[20], 0);
  return Function_2012af0(*(uint **)v1[21], 0);
}

//----- (021E507C) --------------------------------------------------------
uint *__fastcall Function_21e507c(int *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint *result;

  v4 = a3;
  v5 = a2;
  v6 = a4;
  Function_21e5004(a1);
  result = (uint *)Function_21e33a4(*(uint *)(v4 + 8));
  if ( result )
  {
    if ( v6 )
      result = Function_21d23f8((uint *)(*(uint *)v5 + 400), 3, -16, 0, 0, 16, 44, 47, 1);
    else
      result = Function_21d23f8((uint *)(*(uint *)v5 + 400), 3, 0, -16, 16, 0, 44, 47, 1);
  }
  return result;
}

//----- (021E50EC) --------------------------------------------------------
int __fastcall Function_21e50ec(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int v7;

  v4 = a1;
  v5 = a2;
  v6 = a4;
  if ( Function_21e33a4(*(uint *)(a3 + 8)) )
    v7 = Function_21d2424((uint *)(*(uint *)v5 + 400));
  else
    v7 = Function_200ac1c(2);
  if ( !v7 )
    return 0;
  if ( v6 )
    Function_21e5040(v4);
  return 1;
}

//----- (021E5128) --------------------------------------------------------
int __fastcall Function_21e5128(int *a1, int a2, uint a3)
{
  uint v3;
  int *v4;
  int v5;
  int result;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  a1[1] = malloc(a3, 12);
  v4[4] = malloc(v3, 8);
  Function_21d154c((uchar *)v4[1], 53, 81, 22, 106);
  *(uchar *)(v4[1] + 4) = -2;
  *(uchar *)(v4[1] + 5) = 51;
  *(uchar *)(v4[1] + 6) = -99;
  *(uchar *)(v4[1] + 7) = 32;
  *(uchar *)(v4[1] + 8) = -2;
  *(uchar *)(v4[1] + 9) = -77;
  *(uchar *)(v4[1] + 10) = 123;
  *(uchar *)(v4[1] + 11) = 72;
  Function_21d154c((uchar *)v4[4], 107, 155, 156, 204);
  Function_21d154c((uchar *)(v4[4] + 4), 150, 182, 214, 246);
  v4[2] = v5;
  v4[3] = (int)v4;
  *v4 = Function_2023fcc(v4[1], 3u, (int)Function_21e5228, (int)(v4 + 2), v3);
  result = Function_2023fcc(v4[4], 2u, (int)Function_21e5268, (int)(v4 + 2), v3);
  v4[5] = result;
  return result;
}

//----- (021E51DC) --------------------------------------------------------
uint __fastcall Function_21e51dc(int **a1)
{
  int **v1;
  int v2;
  int **v3;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    ++v2;
    v3[6] = (int *)100;
    ++v3;
  }
  while ( v2 < 2 );
  Function_202404c(*a1);
  return Function_202404c(v1[5]);
}

//----- (021E5200) --------------------------------------------------------
int __fastcall Function_21e5200(int *a1)
{
  int *v1;
  int result;

  v1 = a1;
  Function_2024034(*a1);
  Function_2024034(v1[5]);
  free(v1[1]);
  v1[1] = 0;
  free(v1[4]);
  result = 0;
  v1[4] = 0;
  return result;
}

//----- (021E5228) --------------------------------------------------------
int __fastcall Function_21e5228(int result, char a2, int *a3)
{
  int v3;
  int v4;

  v3 = *a3;
  v4 = a3[1];
  switch ( a2 )
  {
    case 0:
      result = Function_21e530c(result, v3, v4);
      break;
    case 1:
      result = Function_21e545c(result, v3, v4);
      break;
    case 2:
      result = Function_21e537c(result, v3, v4);
      break;
    case 3:
      result = Function_21e5498(result, v3, v4);
      break;
    default:
      return result;
  }
  return result;
}

//----- (021E5268) --------------------------------------------------------
int __fastcall Function_21e5268(int a1, int a2, uint *a3)
{
  int v3;
  int v4;
  uint *v5;
  int v6;
  int result;
  int v8;
  int v9;

  v3 = *a3;
  v4 = a1;
  v5 = (uint *)a3[1];
  v6 = a2;
  v9 = Function_21d37bc(*(uint *)(*a3 + 4));
  result = (int)&v5[v4];
  *(uint *)(result + 24) = v6;
  switch ( (uchar)result )
  {
    case 0:
      Function_21e33b4(*(int **)(v3 + 8), 1);
      result = 0;
      v5[9] = 0;
      break;
    case 2:
      result = v5[9];
      if ( !result )
      {
        v5[9] = 1;
        if ( v4 )
        {
          if ( v4 == 1 )
          {
            v5[10] = 2;
            Function_21e5e78(v5, v5[25] ^ 1);
            result = Function_2005748(0x5DDu);
          }
        }
        else
        {
          v8 = v5[11];
          if ( v5[25] == 1 )
          {
            if ( v8 )
              result = Function_21e5e18(v5);
            else
              result = Function_21e5de8(v5, v3, v9);
          }
          else
          {
            if ( v8 == 1 )
              Function_200592c(0);
            result = Function_21e5de8(v5, v3, v9);
          }
        }
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (021E530C) --------------------------------------------------------
int __fastcall Function_21e530c(int result, int a2, int a3)
{
  uint *v3;

  v3 = (uint *)a3;
  if ( result )
  {
    if ( result == 1 )
    {
      if ( *(uint *)(a3 + 44) == 1 )
        Function_21e5e18(a3);
      v3[19] = 1;
      v3[21] = (ushort)word_21BF6D8;
      result = (ushort)word_21BF6DA;
      v3[22] = (ushort)word_21BF6DA;
    }
    else if ( result == 2 )
    {
      if ( *(uint *)(a3 + 44) )
      {
        *(uint *)(a3 + 32) = Function_2022734(*(uchar **)(a3 + 16));
        result = Function_2022734((uchar *)(v3[4] + 4)) | v3[8];
        v3[8] = result;
      }
      else
      {
        result = 1;
        *(uint *)(a3 + 32) = 1;
      }
    }
  }
  else
  {
    if ( *(uint *)(a3 + 44) == 1 )
      Function_21e5e18(a3);
    v3[14] = (ushort)word_21BF6D8;
    result = 1;
    v3[12] = 1;
  }
  return result;
}

//----- (021E537C) --------------------------------------------------------
int __fastcall Function_21e537c(int result, int a2, uint *a3)
{
  uint *v3;
  int v4;

  v3 = a3;
  if ( result )
  {
    if ( result == 1 )
    {
      result = a3[19];
      if ( result == 1 )
      {
        Function_21e5a44(a3);
        Function_21e5aac(v3);
        Function_21e5ad8(v3);
        v3[21] = (ushort)word_21BF6D8;
        result = (ushort)word_21BF6DA;
        v3[22] = (ushort)word_21BF6DA;
      }
    }
    else if ( result == 2 )
    {
      result = a3[8];
      if ( !result )
      {
        if ( a3[11] )
        {
          if ( (ushort)word_21BF6DA >= 0x83u )
          {
            Function_21e5ef0(a3, 0);
            v3[15] = -1536;
          }
          else
          {
            if ( a3[13] )
              Function_21e5c18(a3, (ushort)word_21BF6D8);
            else
              Function_21e5be4(a3, (ushort)word_21BF6D8);
            v3[15] = 0;
            Function_21e5ed8(v3, 1);
          }
        }
        else
        {
          a3[8] = 1;
          Function_21e5ed8(a3, 0);
        }
        result = Function_21e5f00(v3);
      }
    }
  }
  else
  {
    result = a3[12];
    if ( result == 1 )
    {
      v4 = (ushort)word_21BF6D8 - a3[14];
      result = v3[13];
      if ( result )
      {
        result = -12;
        if ( v4 <= -12 )
        {
          v3[13] = 0;
          v3[14] = (ushort)word_21BF6D8;
          result = Function_2005748(0x5F7u);
        }
      }
      else if ( v4 >= 12 )
      {
        v3[13] = 1;
        v3[14] = (ushort)word_21BF6D8;
        result = Function_2005748(0x5F7u);
      }
    }
  }
  return result;
}

//----- (021E545C) --------------------------------------------------------
int __fastcall Function_21e545c(int result, int a2, uint *a3)
{
  uint *v3;

  v3 = a3;
  if ( result )
  {
    if ( result == 1 )
    {
      a3[23] = 4 * a3[24];
      result = 0;
      a3[19] = 0;
    }
    else if ( result == 2 )
    {
      result = a3[8];
      if ( !result )
      {
        Function_21e5ed8(a3, 0);
        result = Function_21e5f00(v3);
      }
    }
  }
  else
  {
    result = 0;
    a3[12] = 0;
  }
  return result;
}

//----- (021E5498) --------------------------------------------------------
int __fastcall Function_21e5498(int result, int a2, uint *a3)
{
  uint *v3;

  v3 = a3;
  if ( result )
  {
    if ( result == 1 )
    {
      a3[23] = 4 * a3[24];
      result = 0;
      a3[19] = 0;
    }
    else if ( result == 2 )
    {
      result = a3[8];
      if ( !result )
      {
        Function_21e5ed8(a3, 0);
        result = Function_21e5f00(v3);
      }
    }
  }
  else
  {
    result = 0;
    a3[12] = 0;
  }
  return result;
}

//----- (021E54D4) --------------------------------------------------------
int __fastcall Function_21e54d4(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a2;
  v4 = a3;
  v5 = a1;
  Function_21e5538(a2, a3);
  Function_21e5644(v5, v3, v4);
  Function_21e5734(v5, v3, v4);
  Function_21e58b8(v5, v3, v4);
  return Function_21e5e80(v5, v3, v4);
}

//----- (021E5510) --------------------------------------------------------
int __fastcall Function_21e5510(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_21e5898();
  Function_21e599c(v2, v3);
  Function_21e56f0(v2, v3);
  Function_21e5620(v3);
  return Function_21e5e98(v2);
}

//----- (021E5538) --------------------------------------------------------
uint __fastcall Function_21e5538(int *a1, uint a2, int a3, int a4)
{
  int *v4;
  uint v5;
  int v6;
  int v7;
  ushort *v9;
  int v10;

  v10 = a4;
  v4 = a1;
  v5 = a2;
  Function_21d2724(*a1, 0x22u, *(uint **)*a1, 6, 0, 0, 1, a2);
  v6 = Function_21d27b8(*v4, 0x47u, 1, &v9, v5);
  Function_20198c0(
    *(uint *)*v4,
    6,
    (int)(v9 + 6),
    0,
    0,
    (uint)*v9 << 21 >> 24,
    (uint)v9[1] << 21 >> 24);
  free(v6);
  Function_201c3c0(*(uint *)*v4, 6);
  Function_21d2724(*v4, 0x23u, *(uint **)*v4, 7, 0, 0, 1, v5);
  v7 = Function_21d27b8(*v4, 0x48u, 1, &v9, v5);
  Function_20198c0(
    *(uint *)*v4,
    7,
    (int)(v9 + 6),
    0,
    0,
    (uint)*v9 << 21 >> 24,
    (uint)v9[1] << 21 >> 24);
  free(v7);
  Function_201c3c0(*(uint *)*v4, 7);
  Function_2019184(*(uint *)*v4, 7u, 0, -48);
  Function_2019184(*(uint *)*v4, 7u, 3u, -16);
  return Function_2019060(7u, 3);
}

//----- (021E5620) --------------------------------------------------------
uint __fastcall Function_21e5620(uint ***a1)
{
  uint ***v1;

  v1 = a1;
  Function_2019ebc(**a1, 6u);
  Function_2019ebc(**v1, 7u);
  return Function_2019060(7u, 1);
}

//----- (021E5644) --------------------------------------------------------
int *__fastcall Function_21e5644(int a1, int *a2, uint a3)
{
  int *v3;
  int v4;
  uint v5;
  int v6;
  int v7;
  int *v8;
  int *v9;
  int *result;

  v3 = (int *)*a2;
  v4 = a1;
  v5 = a3;
  v6 = Function_21d26e0(*a2);
  v7 = v6;
  v8 = Function_2009a4c(v3[80], v6, 0x71u, 1, 10113, 2, v5);
  *(uint *)(v4 + 88) = v8;
  Function_200a3dc(v8);
  Function_2009d4c(*(int **)(v4 + 88));
  v9 = Function_2009b04(v3[81], v7, 0x12u, 0, 10018, 2, 3, v5);
  *(uint *)(v4 + 92) = v9;
  Function_200a640(v9);
  Function_2009d4c(*(int **)(v4 + 92));
  *(uint *)(v4 + 96) = Function_2009bc4(v3[82], v7, 0x72u, 1, 10114, 2u, v5);
  result = Function_2009bc4(v3[83], v7, 0x70u, 1, 10112, 3u, v5);
  *(uint *)(v4 + 100) = result;
  return result;
}

//----- (021E56F0) --------------------------------------------------------
int __fastcall Function_21e56f0(int a1, int ***a2)
{
  int v2;
  int **v3;

  v2 = a1;
  v3 = *a2;
  Function_200a4e4(*(int **)(a1 + 88));
  Function_200a6dc(*(int **)(v2 + 92));
  Function_2009d68(v3[80], *(uint ***)(v2 + 88));
  Function_2009d68(v3[81], *(uint ***)(v2 + 92));
  Function_2009d68(v3[82], *(uint ***)(v2 + 96));
  return Function_2009d68(v3[83], *(uint ***)(v2 + 100));
}

//----- (021E5734) --------------------------------------------------------
int __fastcall Function_21e5734(uint *a1, int *a2, int a3)
{
  int v3;
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int result;
  int v11;
  char *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  char v18;

  v3 = *a2;
  v4 = a1;
  v5 = a3;
  Function_20093b4(
    (int)&v18,
    10113,
    10018,
    10114,
    10112,
    -1,
    -1,
    0,
    2,
    *(uint *)(*a2 + 320),
    *(uint *)(*a2 + 324),
    *(uint *)(*a2 + 328),
    *(uint *)(*a2 + 332),
    0,
    0);
  v11 = *(uint *)(v3 + 316);
  v12 = &v18;
  v15 = 31;
  v16 = 2;
  v13 = 0x40000;
  v14 = 1060864;
  v17 = v5;
  v6 = Function_2021b90(&v11);
  v4[15] = v6;
  Function_2021d6c(v6, 4u);
  Function_2021cc8(v4[15], 1);
  Function_2021ce4(v4[15], 0x2000);
  Function_2021e50(v4[15], 8u);
  v13 = 208896;
  v14 = 1429504;
  v7 = Function_2021b90(&v11);
  *v4 = v7;
  Function_2021d6c(v7, 1u);
  Function_2021cf8(*v4, 1);
  v13 = 737280;
  v14 = 1323008;
  v8 = Function_2021b90(&v11);
  v4[1] = v8;
  Function_2021d6c(v8, 3u);
  Function_2021cc8(v4[1], 1);
  Function_2021ce4(v4[1], 0x2000);
  Function_2021e50(v4[1], 5u);
  v4[2] = 3;
  v4[3] = 2;
  v4[4] = 3;
  v4[6] = 5;
  v4[7] = 2;
  v13 = 942080;
  v14 = 1466368;
  v9 = Function_2021b90(&v11);
  v4[8] = v9;
  Function_2021d6c(v9, 6u);
  Function_2021cc8(v4[8], 1);
  Function_2021ce4(v4[8], 0x2000);
  Function_2021e50(v4[8], 5u);
  v4[9] = 6;
  v4[10] = 5;
  v4[11] = 6;
  v4[13] = 5;
  result = 2;
  v4[14] = 2;
  return result;
}

//----- (021E5898) --------------------------------------------------------
int __fastcall Function_21e5898(int *a1)
{
  int *v1;

  v1 = a1;
  Function_2021bd4(*a1);
  Function_2021bd4(v1[15]);
  Function_2021bd4(v1[1]);
  return Function_2021bd4(v1[8]);
}

//----- (021E58B8) --------------------------------------------------------
int __fastcall Function_21e58b8(int a1, int *a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int *v7;
  char v8;
  int v9;
  uint **v10;
  int v11;
  uint **v12;
  int v14;
  int v15;
  uchar *v16;
  int v17;
  uint v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;

  v24 = a4;
  v4 = a1;
  v5 = *a2;
  v6 = a3;
  v7 = (int *)Function_2009dc8(*(uint *)(*a2 + 324), 10018);
  v14 = *(uint *)(v5 + 336);
  v19 = 276;
  v16 = Function_200a72c(v7, 0);
  v17 = 0;
  v20 = 2;
  v21 = 0;
  v22 = 2;
  v23 = v6;
  v8 = Function_201fab4(v16, 2);
  v9 = Function_21d4d6c(*(uint *)(v5 + 336), 8u, 2u);
  v18 = 64 - ((uint)Function_21d4dac(*(uint *)(v5 + 336), v9, 697, 0x29u) >> 1);
  v15 = v9;
  v10 = (uint **)Function_21d4ca0((int)&v14);
  *(uint *)(v4 + 80) = v10;
  Function_2012a60(*v10, v8);
  Function_21d4da0(v9);
  v11 = Function_21d4d6c(*(uint *)(v5 + 336), 8u, 2u);
  v18 = 64 - ((uint)Function_21d4dac(*(uint *)(v5 + 336), v11, 697, 0x2Au) >> 1);
  v15 = v11;
  v12 = (uint **)Function_21d4ca0((int)&v14);
  *(uint *)(v4 + 84) = v12;
  Function_2012a60(*v12, v8);
  Function_21d4da0(v11);
  return Function_20129d0(**(uint ***)(v4 + 84), 0);
}

//----- (021E599C) --------------------------------------------------------
int __fastcall Function_21e599c(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = 0;
  do
  {
    result = Function_21d4d1c(*(int ***)(v1 + 80));
    ++v2;
    v1 += 4;
  }
  while ( v2 < 2 );
  return result;
}

//----- (021E59B4) --------------------------------------------------------
int __fastcall Function_21e59b4(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;
  uint v6;
  int v7;

  v2 = a1;
  v3 = a2;
  v4 = *(uint *)(a1 + 64);
  result = *(uint *)(v3 + 52);
  if ( v4 != result )
  {
    v6 = Function_2021e74(*(uint *)(v2 + 60));
    v7 = *(uint *)(v2 + 60);
    if ( *(uint *)(v3 + 52) )
      Function_2021d6c(v7, 0);
    else
      Function_2021d6c(v7, 4u);
    Function_2021e50(*(uint *)(v2 + 60), (8 - v6) & 0xFFFF);
    result = *(uint *)(v3 + 52);
    *(uint *)(v2 + 64) = result;
  }
  return result;
}

//----- (021E5A04) --------------------------------------------------------
int __fastcall Function_21e5a04(int a1, uint *a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a1;
  v3 = a2[6];
  v4 = *(uint *)(a1 + 4);
  if ( a2[25] )
    result = Function_21e5c80(v4, v2 + 8, a2[11], v3);
  else
    result = Function_21e5cf8(v4, v2 + 8, 0, v3);
  return result;
}

//----- (021E5A2C) --------------------------------------------------------
int __fastcall Function_21e5a2c(int a1, int a2)
{
  return Function_21e5c80(*(uint *)(a1 + 32), a1 + 36, *(uint *)(a2 + 100), *(uint *)(a2 + 28));
}

//----- (021E5A44) --------------------------------------------------------
int __fastcall Function_21e5a44(int a1)
{
  int v1;
  int result;
  int v3;
  uint *v4;
  bool v5;
  uint v6;
  int v7;

  v1 = a1;
  result = Function_201d4cc(
             *(uint *)(a1 + 84) - 51,
             *(uint *)(a1 + 88) - 157,
             (ushort)word_21BF6D8 - 51,
             (ushort)word_21BF6DA - 157);
  v3 = result;
  if ( result < 0 )
    result = -result;
  if ( result >= 1 )
  {
    v4 = (uint *)(v1 + 92);
    v5 = *(uint *)(v1 + 92) + v3 < 0;
    *(uint *)(v1 + 92) += v3;
    v6 = *(uint *)(v1 + 92);
    if ( v5 )
    {
      *v4 = v6 + 88;
    }
    else
    {
      s32_div_f(v6, 88);
      *v4 = v7;
    }
    result = *(uint *)(v1 + 92);
    if ( result >= 32 && result <= 56 )
    {
      if ( v3 <= 0 )
      {
        result = 56;
        *(uint *)(v1 + 92) = 56;
      }
      else
      {
        result = 32;
        *(uint *)(v1 + 92) = 32;
      }
    }
  }
  return result;
}

//----- (021E5AAC) --------------------------------------------------------
int __fastcall Function_21e5aac(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = *(uint *)(a1 + 92) / 4;
  result = *(uint *)(a1 + 96);
  if ( v2 != result )
  {
    Function_2005748(0x5F7u);
    result = *(uint *)(v1 + 92) / 4;
    *(uint *)(v1 + 96) = result;
  }
  return result;
}

//----- (021E5AD8) --------------------------------------------------------
uchar *__fastcall Function_21e5ad8(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  uchar *result;
  int v6;
  int v7;

  v3 = a1;
  v4 = a1[23];
  if ( !v4 )
    return (uchar *)Function_21e5e28(a1);
  if ( v4 <= 0 || v4 > 44 )
  {
    if ( a1[20] == 2 )
      Function_2004f44(2, v4, a3);
    if ( v3[20] != 1 )
    {
      Function_2004ec8(0);
      v3[20] = 1;
    }
    if ( !v3[23] )
      v3[23] = 88;
    v7 = 8 * (22 - v3[24]);
    if ( v7 > 0 )
      --v7;
    result = (uchar *)Function_2004ef4(v7, 0);
  }
  else
  {
    if ( a1[20] == 1 )
      Function_2004eec(0);
    if ( v3[20] != 2 )
    {
      Function_2004efc();
      v3[20] = 2;
    }
    v6 = v3[24];
    if ( !v6 )
      v6 = 1;
    result = Function_2004f4c(v6);
  }
  return result;
}

//----- (021E5B50) --------------------------------------------------------
int __fastcall Function_21e5b50(int *a1, int a2)
{
  int *v2;
  short v3;

  v2 = a1;
  v3 = Function_201d580(14, *(uint *)(a2 + 92));
  return Function_2021c94(*v2, v3);
}

//----- (021E5B6C) --------------------------------------------------------
int __fastcall Function_21e5b6c(int a1, int **a2, int a3)
{
  int **v3;
  int v4;
  uint v5;
  short v6;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = Function_2005188(1, *(uint *)(a3 + 108), *(uint *)(a3 + 60));
  if ( !v5 )
    *(uint *)(v4 + 72) = 0;
  *(ushort *)(v4 + 76) -= 16 * (v5 - *(ushort *)(v4 + 72));
  *(ushort *)(v4 + 76) = *(ushort *)(v4 + 76);
  v6 = s32_div_f(*(ushort *)(v4 + 76), 182);
  Function_201c660(**v3, 7, 0, v6);
  Function_201c718(**v3, 7, 9, 131);
  result = Function_201c718(**v3, 7, 12, 99);
  *(uint *)(v4 + 72) = v5;
  return result;
}

//----- (021E5BE4) --------------------------------------------------------
int __fastcall Function_21e5be4(int a1, int a2)
{
  int v2;
  long long v3;
  int result;

  v2 = a1;
  v3 = ll_mul((a2 - 107) << 12, 520192LL);
  result = FX_Div((v3 + 2048) >> 12, 589824) >> 12;
  *(uint *)(v2 + 68) = result;
  return result;
}

//----- (021E5C18) --------------------------------------------------------
int __fastcall Function_21e5c18(int a1, int a2)
{
  int v2;
  long long v3;
  int result;

  v2 = a1;
  v3 = ll_mul((a2 - 179) << 12, 520192LL);
  result = FX_Div((v3 + 2048) >> 12, 294912) >> 12;
  *(uint *)(v2 + 64) = result;
  return result;
}

//----- (021E5C4C) --------------------------------------------------------
int __fastcall Function_21e5c4c(int a1)
{
  int v1;
  bool v2;
  uint **v3;
  int result;

  v1 = a1;
  v2 = *(uint *)(a1 + 64) == 0;
  v3 = *(uint ***)(a1 + 80);
  if ( v2 )
  {
    Function_20129d0(*v3, 1);
    result = Function_20129d0(**(uint ***)(v1 + 84), 0);
  }
  else
  {
    Function_20129d0(*v3, 0);
    result = Function_20129d0(**(uint ***)(v1 + 84), 1);
  }
  return result;
}

//----- (021E5C80) --------------------------------------------------------
int __fastcall Function_21e5c80(int a1, int a2, int a3, int a4)
{
  int v4;
  uint v5;
  int v6;
  int v7;
  int result;
  int v9;
  int v10;

  v4 = a4;
  v5 = a1;
  v6 = a2;
  v7 = a3;
  if ( a4 == 3 )
    v4 = 1;
  v10 = Function_2021e74(a1);
  result = *(uint *)(v6 + 12);
  if ( result != v7 )
  {
    result = Function_21e5d90(v5, v6, v7);
    *(uint *)(v6 + 12) = v7;
  }
  if ( v4 > 2 )
  {
    if ( v4 != 100 )
      return result;
    goto LABEL_15;
  }
  if ( v4 < 0 || !v4 )
    return result;
  if ( v4 == 1 )
  {
LABEL_15:
    Function_21e5d90(v5, v6, v7);
    return Function_2021ce4(v5, 0x2000);
  }
  if ( v4 == 2 )
  {
    v9 = *(uint *)(v6 + 20);
    result = v10;
    if ( v10 > v9 )
    {
      Function_2021e50(v5, (ushort)v9);
      result = Function_2021ce4(v5, 0);
    }
  }
  return result;
}

//----- (021E5CF8) --------------------------------------------------------
int __fastcall Function_21e5cf8(int a1, int a2, int a3, int a4)
{
  int v4;
  uint v5;
  int v6;
  int v7;
  int result;

  v4 = a4;
  v5 = a1;
  v6 = a2;
  v7 = a3;
  if ( a4 == 1 )
    v4 = 3;
  Function_2021e74(a1);
  result = *(uint *)(v6 + 12);
  if ( result != v7 )
  {
    result = Function_21e5d90(v5, v6, v7);
    *(uint *)(v6 + 12) = v7;
  }
  if ( v4 > 3 )
  {
    if ( v4 != 100 )
      return result;
    goto LABEL_18;
  }
  if ( v4 < 0 )
    return result;
  switch ( v4 )
  {
    case 0:
      if ( v7 == 1 )
        Function_21e5d90(v5, v6, 0);
      else
        Function_21e5d90(v5, v6, 1);
      return Function_2021e50(v5, (*(uint *)(v6 + 20) - 1) & 0xFFFF);
    case 2:
      Function_2021e50(v5, *(uint *)(v6 + 20) & 0xFFFF);
      return Function_2021ce4(v5, 0);
    case 3:
LABEL_18:
      Function_21e5d90(v5, v6, v7);
      result = Function_2021ce4(v5, 0x2000);
      break;
  }
  return result;
}

//----- (021E5D90) --------------------------------------------------------
uint __fastcall Function_21e5d90(int a1, uint *a2, int a3)
{
  int v3;
  uint *v4;
  int v5;
  uint v6;
  uint v7;
  uint result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_2021e74(a1);
  v7 = v4[2];
  if ( v5 == 1 )
  {
    result = *v4;
    if ( v7 == *v4 )
    {
      Function_2021d6c(v3, v4[1]);
      v4[2] = v4[1];
      result = Function_2021e50(v3, (v4[4] - v6) & 0xFFFF);
    }
  }
  else
  {
    result = v4[1];
    if ( v7 == result )
    {
      Function_2021d6c(v3, *v4);
      v4[2] = *v4;
      result = Function_2021e50(v3, (v4[4] - v6) & 0xFFFF);
    }
  }
  return result;
}

//----- (021E5DE8) --------------------------------------------------------
int __fastcall Function_21e5de8(int a1, int a2, ushort a3)
{
  int v3;

  v3 = a1;
  *(uint *)(a1 + 44) = 1;
  Function_20059d0(0xDu, a3, 0, 127, 511, 0);
  return Function_21e5f00(v3);
}

//----- (021E5E18) --------------------------------------------------------
int __fastcall Function_21e5e18(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_200592c(0);
  result = 0;
  *(uint *)(v1 + 44) = 0;
  return result;
}

//----- (021E5E28) --------------------------------------------------------
int __fastcall Function_21e5e28(int a1, int a2, int a3)
{
  int v3;
  int result;

  v3 = a1;
  if ( *(uint *)(a1 + 80) == 1 )
    Function_2004eec(0);
  if ( *(uint *)(v3 + 80) == 2 )
    Function_2004f44(2, a2, a3);
  result = 0;
  *(uint *)(v3 + 80) = 0;
  return result;
}

//----- (021E5E48) --------------------------------------------------------
int __fastcall Function_21e5e48(int a1, int a2)
{
  int v2;
  int v3;
  ushort v4;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = Function_21d37bc(*(uint *)(a2 + 4));
  result = Function_200598c();
  if ( !result )
  {
    result = *(uint *)(v3 + 104) - 1;
    *(uint *)(v3 + 104) = result;
    if ( !result )
    {
      Function_21e5de8(v3, v2, v4);
      result = 10;
      *(uint *)(v3 + 104) = 10;
    }
  }
  return result;
}

//----- (021E5E78) --------------------------------------------------------
int __fastcall Function_21e5e78(int result, int a2)
{
  *(uint *)(result + 100) = a2;
  *(uint *)(result + 104) = 10;
  return result;
}

//----- (021E5E80) --------------------------------------------------------
int __fastcall Function_21e5e80(int a1, int *a2, uint a3)
{
  int v3;
  int result;

  v3 = a1;
  result = Function_21d27e0(*a2, 0x14u, (uint *)(a1 + 108), a3);
  *(uint *)(v3 + 104) = result;
  return result;
}

//----- (021E5E98) --------------------------------------------------------
int __fastcall Function_21e5e98(int a1)
{
  int v1;
  int result;

  v1 = a1;
  free(*(uint *)(a1 + 104));
  result = 0;
  *(uint *)(v1 + 104) = 0;
  *(uint *)(v1 + 108) = 0;
  return result;
}

//----- (021E5EAC) --------------------------------------------------------
int __fastcall Function_21e5eac(int a1)
{
  return Function_201dc68(31, 224, *(uint *)(*(uint *)(a1 + 108) + 12), 32);
}

//----- (021E5EC0) --------------------------------------------------------
int __fastcall Function_21e5ec0(int a1)
{
  return Function_201dc68(31, 224, *(uint *)(*(uint *)(a1 + 108) + 12) + 32, 32);
}

//----- (021E5ED8) --------------------------------------------------------
int __fastcall Function_21e5ed8(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a1;
  v3 = a2;
  result = Function_21e5ef0(a1, a2);
  if ( !v3 )
    result = Function_21e5ef4(v2);
  return result;
}

//----- (021E5EF0) --------------------------------------------------------
int __fastcall Function_21e5ef0(int result, int a2)
{
  *(uint *)(result + 72) = a2;
  return result;
}

//----- (021E5EF4) --------------------------------------------------------
uint *__fastcall Function_21e5ef4(uint *result)
{
  result[15] = 0;
  result[16] = 0;
  result[17] = 0;
  return result;
}

//----- (021E5F00) --------------------------------------------------------
int __fastcall Function_21e5f00(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  result = a1[11];
  if ( result )
  {
    Function_21e5ff4(v1[15]);
    Function_2004f94(1, 0xFFFF, v1[16]);
    result = Function_21e5f28(v1[17]);
  }
  return result;
}

//----- (021E5F28) --------------------------------------------------------
int __fastcall Function_21e5f28(int a1)
{
  return Function_2004a54(8, a1, 0);
}

//----- (021E5F38) --------------------------------------------------------
int __fastcall Function_21e5f38(int result, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = result;
  v4 = *(uint *)(a2 + 72);
  if ( v4 != *(uint *)(result + 112) )
  {
    if ( v4 == 1 )
      Function_21e5eac(result);
    else
      Function_21e5ec0(result);
    result = *(uint *)(v2 + 72);
    *(uint *)(v3 + 112) = result;
  }
  return result;
}

//----- (021E5F5C) --------------------------------------------------------
int __fastcall Function_21e5f5c(uint *a1, int a2)
{
  int v2;
  uint *v3;
  ushort v4;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = Function_21d37bc(*(uint *)(a2 + 4));
  if ( dword_21BF6C4 & 1 )
  {
    v3[10] = 1;
    v3[6] = 0;
    if ( v3[25] )
    {
      if ( v3[11] )
        result = Function_21e5e18((int)v3);
      else
        result = Function_21e5de8((int)v3, v2, v4);
    }
    else
    {
      if ( v3[11] == 1 )
        Function_200592c(0);
      result = Function_21e5de8((int)v3, v2, v4);
    }
  }
  else
  {
    result = v3[10];
    if ( result == 1 )
    {
      result = 2;
      v3[10] = 2;
      v3[6] = 2;
    }
    else if ( result == 2 )
    {
      result = 0;
      v3[10] = 0;
      v3[6] = 1;
    }
  }
  return result;
}

//----- (021E5FD0) --------------------------------------------------------
int __fastcall Function_21e5fd0(int *a1, int a2)
{
  int v2;
  int result;

  v2 = *a1;
  result = Function_21e33bc(*(uint *)(a2 + 8));
  if ( result == 1 )
    result = Function_21d2574(v2);
  return result;
}

//----- (021E5FF4) --------------------------------------------------------
uint *__fastcall Function_21e5ff4(int a1)
{
  int v1;

  v1 = a1;
  Function_2004f68(1, 0xFFFF, a1);
  return Function_2004f68(8, 0xFFFF, v1 + 20);
}

//----- (021E6014) --------------------------------------------------------
int (*__fastcall Function_21e6014(int *a1, int a2, int a3))()
{
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int (*result)();

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Function_21e608c(a3);
  v7 = Function_21e60d8(v4, v5);
  v8 = Function_21e6100(v4, v5);
  *v3 = v6;
  v3[1] = v7;
  v3[8] = v8;
  v3[9] = Function_21e6130();
  v3[2] = (int)Function_21e6134;
  v3[3] = (int)Function_21e6158;
  v3[4] = (int)Function_21e6168;
  v3[5] = (int)Function_21e617c;
  v3[6] = (int)Function_21e6200;
  result = Function_21e6204;
  v3[7] = (int)Function_21e6204;
  return result;
}

//----- (021E6074) --------------------------------------------------------
int __fastcall Function_21e6074(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_21e6104(*a1);
  Function_21e6118(v1[1]);
  return Function_21e612c(v1[8]);
}

//----- (021E608C) --------------------------------------------------------
uchar *__fastcall Function_21e608c(uint a1, int a2)
{
  int v2;
  uchar *v3;

  v2 = a2;
  v3 = (uchar *)malloc(a1, 12);
  if ( !v3 )
    ErrorHandler();
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  v3[4] = 0;
  v3[5] = 0;
  v3[6] = 0;
  v3[7] = 0;
  v3[8] = 0;
  v3[9] = 0;
  v3[10] = 0;
  v3[11] = 0;
  *(uint *)v3 = Function_21d138c(v2);
  *((uint *)v3 + 1) = Function_21d13ec(v2);
  *((uint *)v3 + 2) = Function_21d1410(v2, 5);
  return v3;
}

//----- (021E60D8) --------------------------------------------------------
uchar *__fastcall Function_21e60d8(uint a1, int a2)
{
  int v2;
  uchar *v3;

  v2 = a2;
  v3 = (uchar *)malloc(a1, 4);
  if ( !v3 )
    ErrorHandler();
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  *(uint *)v3 = Function_21d13fc(v2);
  return v3;
}

//----- (021E6100) --------------------------------------------------------
int Function_21e6100()
{
  return 0;
}

//----- (021E6104) --------------------------------------------------------
uint __fastcall Function_21e6104(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return free(v1);
}

//----- (021E6118) --------------------------------------------------------
uint __fastcall Function_21e6118(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return free(v1);
}

//----- (021E612C) --------------------------------------------------------
void Function_21e612c()
{
  ;
}

//----- (021E6130) --------------------------------------------------------
int Function_21e6130()
{
  return 0;
}

//----- (021E6134) --------------------------------------------------------
int __fastcall Function_21e6134(int a1)
{
  int v1;
  uchar *v2;

  v1 = a1;
  v2 = (uchar *)malloc(*(uint *)(a1 + 4), 4);
  if ( !v2 )
    ErrorHandler();
  *v2 = 0;
  v2[1] = 0;
  v2[2] = 0;
  v2[3] = 0;
  *(uint *)(v1 + 8) = v2;
  return 1;
}

//----- (021E6158) --------------------------------------------------------
BOOL __fastcall Function_21e6158(int a1)
{
  return *(uint *)(a1 + 12) == 1;
}

//----- (021E6168) --------------------------------------------------------
int __fastcall Function_21e6168(int a1)
{
  int v1;

  v1 = a1;
  free(*(uint *)(a1 + 8));
  *(uint *)(v1 + 8) = 0;
  return 1;
}

//----- (021E617C) --------------------------------------------------------
int __fastcall Function_21e617c(int a1, uint *a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uchar *v9;
  int v10;
  int v11;
  int result;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = *(uint *)(a4 + 8);
  v8 = a2[2];
  switch ( (uchar)*a2 )
  {
    case 0u:
      v9 = (uchar *)malloc(a2[1], 20);
      v4[2] = v9;
      v10 = 20;
      do
      {
        *v9++ = 0;
        --v10;
      }
      while ( v10 );
      ++*v4;
      goto LABEL_9;
    case 1u:
      v11 = a2[1];
      Function_21e6338(v8, a1);
      Function_21e628c(v8, v5, v6, 1);
      ++*v4;
      goto LABEL_9;
    case 2u:
      if ( Function_21e62f8(a2[2], a1) )
        ++*v4;
      goto LABEL_9;
    case 3u:
      result = 1;
      break;
    default:
LABEL_9:
      result = 0;
      break;
  }
  return result;
}

//----- (021E6200) --------------------------------------------------------
int Function_21e6200()
{
  return 0;
}

//----- (021E6204) --------------------------------------------------------
int __fastcall Function_21e6204(int a1, uint *a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a2[2];
  switch ( (uchar)*a2 )
  {
    case 0u:
      Function_21e628c(v5, v4, a3, 0);
      ++*v3;
      goto LABEL_8;
    case 1u:
      if ( Function_21e62f8(v5, v4) )
        ++*v3;
      goto LABEL_8;
    case 2u:
      Function_21e638c(v5, v4);
      ++*v3;
      goto LABEL_8;
    case 3u:
      free(v5);
      v3[2] = 0;
      ++*v3;
      goto LABEL_8;
    case 4u:
      result = 1;
      break;
    default:
LABEL_8:
      result = 0;
      break;
  }
  return result;
}

//----- (021E6274) --------------------------------------------------------
int __fastcall Function_21e6274(int a1)
{
  return Function_2021fe0(*(uint *)(a1 + 16), 1);
}

//----- (021E6280) --------------------------------------------------------
int __fastcall Function_21e6280(int a1)
{
  return Function_2021fe0(*(uint *)(a1 + 16), 0);
}

//----- (021E628C) --------------------------------------------------------
uint *__fastcall Function_21e628c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint *result;

  v4 = a3;
  v5 = a2;
  v6 = a4;
  Function_21e6274(a1);
  result = (uint *)Function_21e2a54(*(uint *)(v4 + 8));
  if ( result )
  {
    if ( v6 )
      result = Function_21d23f8((uint *)(*(uint *)v5 + 364), 1, -16, 0, 0, 16, 42, 47, 0);
    else
      result = Function_21d23f8((uint *)(*(uint *)v5 + 364), 1, 0, -16, 16, 0, 42, 47, 0);
  }
  return result;
}

//----- (021E62F8) --------------------------------------------------------
int __fastcall Function_21e62f8(int a1, int *a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v4 = a1;
  v5 = a2;
  v6 = a4;
  v7 = Function_21e2a54(*(uint *)(a3 + 8));
  v8 = *v5;
  if ( v7 )
    v9 = Function_21d2424((uint *)(v8 + 364));
  else
    v9 = Function_21d24ec(v8 + 364);
  if ( !v9 )
    return 0;
  if ( v6 )
    Function_21e6280(v4);
  return 1;
}

//----- (021E6338) --------------------------------------------------------
int __fastcall Function_21e6338(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;

  v5 = a3;
  v6 = a2;
  v7 = a1;
  Function_21e63c0(a2, a3, a5);
  Function_21e6600(v6, a5);
  Function_21e66b0(v6, v5, a5);
  Function_21e6428(v7, v6, a5);
  Function_21e6518(v7, v6, v5, a5);
  Function_21e65f8(v7, v6, v5, a5);
  return Function_21e67c8(v6, v5);
}

//----- (021E638C) --------------------------------------------------------
int __fastcall Function_21e638c(int a1, uint ***a2)
{
  int v2;
  uint ***v3;

  v2 = a1;
  v3 = a2;
  Function_21e65fc();
  Function_21e65ec(v2);
  Function_21e64d4(v2, v3);
  Function_201ada4_ClearTextBox((int)(*v3 + 1), 0);
  Function_2019ebc(**v3, 1u);
  return Function_21e6844(v3);
}

//----- (021E63C0) --------------------------------------------------------
int __fastcall Function_21e63c0(int *a1, int a2, uint a3)
{
  int *v3;
  uint v4;
  int v5;
  ushort *v7;

  v3 = a1;
  v4 = a3;
  Function_21d2724(*a1, 0x21u, *(uint **)*a1, 3, 0, 0, 1, a3);
  v5 = Function_21d27b8(*v3, 0x4Au, 1, &v7, v4);
  Function_20198c0(
    *(uint *)*v3,
    3,
    (int)(v7 + 6),
    0,
    0,
    (uint)*v7 << 21 >> 24,
    (uint)v7[1] << 21 >> 24);
  free(v5);
  return Function_201c3c0(*(uint *)*v3, 3);
}

//----- (021E6428) --------------------------------------------------------
int *__fastcall Function_21e6428(int a1, int *a2, uint a3)
{
  int *v3;
  int v4;
  uint v5;
  int v6;
  int v7;
  int *v8;
  int *v9;
  int *result;

  v3 = (int *)*a2;
  v4 = a1;
  v5 = a3;
  v6 = Function_21d26e0(*a2);
  v7 = v6;
  v8 = Function_2009a4c(v3[80], v6, 0x5Du, 1, 7093, 1, v5);
  *(uint *)v4 = v8;
  Function_200a3dc(v8);
  Function_2009d4c(*(int **)v4);
  v9 = Function_2009b04(v3[81], v7, 0xEu, 0, 7014, 1, 5, v5);
  *(uint *)(v4 + 4) = v9;
  Function_200a640(v9);
  Function_2009d4c(*(int **)(v4 + 4));
  *(uint *)(v4 + 8) = Function_2009bc4(v3[82], v7, 0x5Bu, 1, 7091, 2u, v5);
  result = Function_2009bc4(v3[83], v7, 0x5Cu, 1, 7092, 3u, v5);
  *(uint *)(v4 + 12) = result;
  return result;
}

//----- (021E64D4) --------------------------------------------------------
int __fastcall Function_21e64d4(int **a1, int ***a2)
{
  int **v2;
  int **v3;

  v2 = a1;
  v3 = *a2;
  Function_200a4e4(*a1);
  Function_200a6dc(v2[1]);
  Function_2009d68(v3[80], (uint **)*v2);
  Function_2009d68(v3[81], (uint **)v2[1]);
  Function_2009d68(v3[82], (uint **)v2[2]);
  return Function_2009d68(v3[83], (uint **)v2[3]);
}

//----- (021E6518) --------------------------------------------------------
int __fastcall Function_21e6518(int a1, uint *a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint *v7;
  int v8;
  int v9;
  int v10;
  bool v11;
  int v12;
  int v14;
  char *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  char v21;

  v4 = a3;
  v5 = a1;
  v6 = a4;
  v7 = (uint *)*a2;
  v8 = Function_21d37bc(*(uint *)(a3 + 4));
  Function_20093b4((int)&v21, 7093, 7014, 7091, 7092, -1, -1, 0, 1, v7[80], v7[81], v7[82], v7[83], 0, 0);
  v14 = v7[79];
  v15 = &v21;
  v18 = 31;
  v19 = 1;
  v20 = v6;
  v9 = Function_2098848(*(uint *)(*(uint *)(v4 + 4) + 5960), v8);
  v10 = Function_2098888(*(uint *)(*(uint *)(v4 + 4) + 5960), v8);
  v16 = 688128;
  v17 = (v9 + 88) << 12;
  *(uint *)(v5 + 16) = Function_2021b90(&v14);
  v11 = Function_21d3920(*(uint *)(v4 + 4)) == 0;
  v12 = *(uint *)(v5 + 16);
  if ( v11 )
    Function_2021d6c(v12, 5u);
  else
    Function_2021d6c(v12, 6u);
  Function_21e6860(*(uint *)(v5 + 16), v9);
  return Function_21e688c(*(uint *)(v5 + 16), v10);
}

//----- (021E65EC) --------------------------------------------------------
int __fastcall Function_21e65ec(int a1)
{
  return Function_2021bd4(*(uint *)(a1 + 16));
}

//----- (021E65F8) --------------------------------------------------------
void Function_21e65f8()
{
  ;
}

//----- (021E65FC) --------------------------------------------------------
void Function_21e65fc()
{
  ;
}

//----- (021E6600) --------------------------------------------------------
ushort *__fastcall Function_21e6600(uint *a1, uint a2)
{
  uint *v2;
  uint v3;
  ushort *v4;
  ushort **v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = (ushort *)Function_2023790(32, a2);
  v5 = (ushort **)LoadFromMsgNARC(0, 26, 697, v3);
  Function_200b1b8_CallMsgDecrypt(v5, 0x2Bu, v4);
  Function_2002eec(0, (int)v4, 0, 0x100u);
  Function_201d78c(*v2 + 4, 0);
  Function_200b1b8_CallMsgDecrypt(v5, 9u, v4);
  Function_201d78c(*v2 + 4, 0);
  Function_200b1b8_CallMsgDecrypt(v5, 9u, v4);
  Function_201d78c(*v2 + 4, 0);
  Function_20237bc_FreeMsg((int)v4, v6);
  return Function_200b190((ushort *)v5);
}

//----- (021E66B0) --------------------------------------------------------
ushort *__fastcall Function_21e66b0(uint *a1, int a2, uint a3)
{
  uint v3;
  uint *v4;
  int v5;
  ushort *v6;
  int v7;
  ushort *v8;
  int v9;
  ushort **v10;
  int v11;
  ushort **v12;
  int v13;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = (ushort *)Function_2023790(32, a3);
  v7 = Function_21d37bc(*(uint *)(v5 + 4));
  v8 = Function_200b32c(v7, v3);
  v9 = Function_20989d0();
  v10 = (ushort **)LoadFromMsgNARC(0, 26, v9, v3);
  Function_201d78c(*v4 + 4, 0);
  Function_200b1b8_CallMsgDecrypt(v10, v7, v6);
  Function_2002d7c(0, (int)v6, 0);
  Function_201d78c(*v4 + 4, 0);
  Function_20237bc_FreeMsg((int)v8, v11);
  Function_200b190((ushort *)v10);
  v12 = (ushort **)LoadFromMsgNARC(0, 26, 697, v3);
  Function_21d3914(*(uint *)(v5 + 4));
  Function_201d78c(*v4 + 4, 0);
  if ( Function_21d3920(*(uint *)(v5 + 4)) )
    Function_200b1b8_CallMsgDecrypt(v12, 0x60u, v6);
  else
    Function_200b1b8_CallMsgDecrypt(v12, 0x5Fu, v6);
  Function_2002d7c(0, (int)v6, 0);
  Function_201d78c(*v4 + 4, 0);
  Function_20237bc_FreeMsg((int)v6, v13);
  return Function_200b190((ushort *)v12);
}

//----- (021E67C8) --------------------------------------------------------
int __fastcall Function_21e67c8(int *a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v2 = a1;
  v3 = a2;
  v4 = Function_21d2170(*a1);
  v5 = Function_21d37bc(*(uint *)(v3 + 4));
  v6 = Function_2098868(*(uint *)(*(uint *)(v3 + 4) + 5960), v5);
  v7 = Function_20988a8(*(uint *)(*(uint *)(v3 + 4) + 5960), v5);
  Function_21d1890(*v2, *(uint *)(v3 + 4), v5, 2, 88, v6 + 88);
  Function_2007dec(v4, 6u, 0);
  Function_20086fc(v4, 15, 15, 0, 0);
  Function_21e687c(v4, v6);
  return Function_21e68b0(v4, v7);
}

//----- (021E6844) --------------------------------------------------------
int __fastcall Function_21e6844(int *a1)
{
  int v1;

  v1 = Function_21d2170(*a1);
  Function_2007dec(v1, 6u, 1);
  return Function_2008780(v1);
}

//----- (021E6860) --------------------------------------------------------
int __fastcall Function_21e6860(uint *a1, int a2)
{
  int v3;
  int v4;

  v4 = (a2 + 88) << 12;
  v3 = 688128;
  return Function_2021c50(a1, &v3);
}

//----- (021E687C) --------------------------------------------------------
int __fastcall Function_21e687c(int a1, int a2)
{
  return Function_2007dec(a1, 1u, a2 + 88);
}

//----- (021E688C) --------------------------------------------------------
uint __fastcall Function_21e688c(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v7;
  int v8;
  int v9;

  v9 = a4;
  v4 = a1;
  v5 = FX_Div(0x100000, a2 << 12);
  v7 = v5;
  v8 = v5;
  return Function_2021c80(v4, &v7, 2);
}

//----- (021E68B0) --------------------------------------------------------
int __fastcall Function_21e68b0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = (int)(16 * (ull)((((ll)FX_Div(0x100000, a2 << 12) << 20) + 2048) >> 12)) >> 16;
  Function_2007dec(v2, 0xCu, v3);
  return Function_2007dec(v2, 0xDu, v3);
}

//----- (021E68F4) --------------------------------------------------------
int (*__fastcall Function_21e68f4(int *a1, int a2, int a3))()
{
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int (*result)();

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Function_21e696c(a3);
  v7 = Function_21e69b0(v4, v5);
  v8 = Function_21e69d8(v4, v5);
  *v3 = v6;
  v3[1] = v7;
  v3[8] = v8;
  v3[9] = Function_21e6a68();
  v3[2] = (int)Function_21e6a6c;
  v3[3] = (int)Function_21e6ab8;
  v3[4] = (int)Function_21e6b0c;
  v3[5] = (int)Function_21e6b20;
  v3[6] = (int)Function_21e6ba8;
  result = Function_21e6bd8;
  v3[7] = (int)Function_21e6bd8;
  return result;
}

//----- (021E6954) --------------------------------------------------------
int __fastcall Function_21e6954(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_21e6a20(*a1);
  Function_21e6a34(v1[1]);
  return Function_21e6a48(v1[8]);
}

//----- (021E696C) --------------------------------------------------------
int *__fastcall Function_21e696c(uint a1, int a2)
{
  int v2;
  int *v3;
  int *v4;
  int v5;

  v2 = a2;
  v3 = (int *)malloc(a1, 16);
  if ( !v3 )
    ErrorHandler();
  v4 = v3;
  v5 = 16;
  do
  {
    *(uchar *)v4 = 0;
    v4 = (int *)((char *)v4 + 1);
    --v5;
  }
  while ( v5 );
  *v3 = Function_21d13a0(v2);
  v3[3] = Function_21d1430(v2, 3);
  v3[1] = 0;
  v3[2] = Function_21d13ec(v2);
  return v3;
}

//----- (021E69B0) --------------------------------------------------------
uchar *__fastcall Function_21e69b0(uint a1, int a2)
{
  int v2;
  uchar *v3;

  v2 = a2;
  v3 = (uchar *)malloc(a1, 4);
  if ( !v3 )
    ErrorHandler();
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  *(uint *)v3 = Function_21d13fc(v2);
  return v3;
}

//----- (021E69D8) --------------------------------------------------------
int *__fastcall Function_21e69d8(uint a1, int a2)
{
  uint v2;
  int v3;
  int v4;
  int *v5;

  v2 = a1;
  v3 = a2;
  v4 = 20 * Function_21e6a68();
  v5 = (int *)malloc(v2, v4);
  if ( !v5 )
    ErrorHandler();
  Call_FillMemWithValue(v5, 0, v4);
  Function_21d49e4(v2, v5, v3, 1);
  Function_21d4a3c(v2, v5 + 5, v3, 2);
  return v5;
}

//----- (021E6A20) --------------------------------------------------------
uint __fastcall Function_21e6a20(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return free(v1);
}

//----- (021E6A34) --------------------------------------------------------
uint __fastcall Function_21e6a34(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return free(v1);
}

//----- (021E6A48) --------------------------------------------------------
uint __fastcall Function_21e6a48(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  Function_21d4660(v1);
  Function_21d4660(v1 + 20);
  return free(v1);
}

//----- (021E6A68) --------------------------------------------------------
int Function_21e6a68()
{
  return 2;
}

//----- (021E6A6C) --------------------------------------------------------
int __fastcall Function_21e6a6c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uchar *v5;
  int v6;
  int v7;
  int v8;

  v2 = a1;
  v3 = a2;
  v4 = malloc(*(uint *)(a1 + 4), 24);
  v5 = (uchar *)v4;
  v6 = 24;
  do
  {
    *v5++ = 0;
    --v6;
  }
  while ( v6 );
  v7 = 0;
  v8 = v4;
  do
  {
    ++v7;
    *(uint *)(v8 + 16) = 4;
    v8 += 4;
  }
  while ( v7 < 2 );
  *(uint *)(v3 + 4) = 0;
  Function_21e6d58(v4, v3, *(uint *)(v2 + 4));
  Function_21e6dbc(v4, v3);
  *(uint *)(v2 + 8) = v4;
  return 1;
}

//----- (021E6AB8) --------------------------------------------------------
int __fastcall Function_21e6ab8(uint *a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1[2];
  if ( a1[3] == 1 )
    return 1;
  if ( a1[4] == 1 )
    return 0;
  if ( Function_21e33ac(*(uint *)(a2 + 12)) )
  {
    Function_21e6dac(v3);
    if ( Function_21e33bc(*(uint *)(v2 + 12)) )
    {
      if ( Function_21d3998(*(uint *)(v2 + 8)) == 2 )
        Function_21e72e8(v3, v2);
    }
    Function_21e6dbc(v3, v2);
  }
  return 0;
}

//----- (021E6B0C) --------------------------------------------------------
int __fastcall Function_21e6b0c(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 8);
  Function_21e6dec(*(uint *)(a1 + 8));
  free(v1);
  return 1;
}

//----- (021E6B20) --------------------------------------------------------
int __fastcall Function_21e6b20(uint *a1, uint *a2, int a3)
{
  uint *v3;
  uint *v4;
  int v5;
  int v6;
  int *v7;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = a2[2];
  switch ( (uchar)*a2 )
  {
    case 0u:
      v7 = (int *)malloc(a2[1], 64);
      v3[2] = v7;
      Call_FillMemWithValue(v7, 0, 0x40u);
      ++*v3;
      goto LABEL_7;
    case 1u:
      Function_21e6e64(a2[2], a1, a2[1]);
      Function_21e6cb0(v6, v4, v5, 1);
      ++*v3;
      goto LABEL_7;
    case 2u:
      if ( Function_21e6d1c(a2[2], a1) )
        ++*v3;
      goto LABEL_7;
    case 3u:
      Function_21d25ac(*a1 + 484, 0);
      result = 1;
      break;
    default:
LABEL_7:
      result = 0;
      break;
  }
  return result;
}

//----- (021E6BA8) --------------------------------------------------------
int __fastcall Function_21e6ba8(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v9;

  v4 = a1;
  v5 = a3;
  v9 = *(uint *)(a4 + 8);
  v6 = a2;
  v7 = *(uint *)(a2 + 8);
  if ( Function_21e33ac(*(uint *)(a3 + 12)) )
  {
    Function_21e728c(v7, v4, v9, *(uint *)(v6 + 4));
    Function_21e732c(v4, v5);
  }
  return 0;
}

//----- (021E6BD8) --------------------------------------------------------
int __fastcall Function_21e6bd8(uint *a1, uint *a2, int a3)
{
  uint *v3;
  uint *v4;
  int v5;
  int v6;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = a2[2];
  switch ( (uchar)*a2 )
  {
    case 0u:
      Function_21d25ac(*a1 + 484, 1);
      Function_21e6cb0(v6, v4, v5, 0);
      ++*v3;
      goto LABEL_8;
    case 1u:
      if ( Function_21e6d1c(a2[2], a1) )
        ++*v3;
      goto LABEL_8;
    case 2u:
      Function_21e6e94(a2[2], a1, a2[1]);
      ++*v3;
      goto LABEL_8;
    case 3u:
      free(a2[2]);
      ++*v3;
      goto LABEL_8;
    case 4u:
      result = 1;
      break;
    default:
LABEL_8:
      result = 0;
      break;
  }
  return result;
}

//----- (021E6C60) --------------------------------------------------------
int __fastcall Function_21e6c60(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = 0;
  do
  {
    Function_2021fe0(*(uint *)v1, 1);
    result = Function_2012af0(**(uint ***)(v1 + 8), 1);
    ++v2;
    v1 += 4;
  }
  while ( v2 < 2 );
  return result;
}

//----- (021E6C88) --------------------------------------------------------
int __fastcall Function_21e6c88(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = 0;
  v2 = a1;
  do
  {
    Function_2021fe0(*(uint *)v2, 0);
    result = Function_2012af0(**(uint ***)(v2 + 8), 0);
    ++v1;
    v2 += 4;
  }
  while ( v1 < 2 );
  return result;
}

//----- (021E6CB0) --------------------------------------------------------
uint *__fastcall Function_21e6cb0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint *result;

  v4 = a3;
  v5 = a2;
  v6 = a4;
  Function_21e6c60(a1);
  result = (uint *)Function_21e33a4(*(uint *)(v4 + 12));
  if ( result )
  {
    if ( v6 )
      result = Function_21d23f8((uint *)(*(uint *)v5 + 400), 1, -16, 0, 0, 16, 44, 47, 1);
    else
      result = Function_21d23f8((uint *)(*(uint *)v5 + 400), 1, 0, -16, 16, 0, 44, 47, 1);
  }
  return result;
}

//----- (021E6D1C) --------------------------------------------------------
int __fastcall Function_21e6d1c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;

  v4 = a1;
  v5 = a2;
  v6 = a4;
  if ( Function_21e33a4(*(uint *)(a3 + 12)) )
    v7 = Function_21d2424((uint *)(*(uint *)v5 + 400));
  else
    v7 = Function_200ac1c(2);
  if ( !v7 )
    return 0;
  if ( v6 )
    Function_21e6c88(v4);
  return 1;
}

//----- (021E6D58) --------------------------------------------------------
int __fastcall Function_21e6d58(int *a1, int a2, uint a3)
{
  uint v3;
  int *v4;
  int v5;
  int result;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  a1[1] = malloc(a3, 8);
  Function_21d154c((uchar *)v4[1], 64, 176, 8, 128);
  Function_21d154c((uchar *)(v4[1] + 4), 64, 176, 128, 248);
  v4[2] = v5;
  v4[3] = (int)v4;
  result = Function_2023fcc(v4[1], 2u, (int)Function_21e6e04, (int)(v4 + 2), v3);
  *v4 = result;
  return result;
}

//----- (021E6DAC) --------------------------------------------------------
int __fastcall Function_21e6dac(int result)
{
  int v1;

  v1 = 0;
  do
  {
    ++v1;
    *(uint *)(result + 16) = 3;
    result += 4;
  }
  while ( v1 < 2 );
  return result;
}

//----- (021E6DBC) --------------------------------------------------------
int __fastcall Function_21e6dbc(int **a1, int a2)
{
  int **v2;
  int v3;
  int result;

  v2 = a1;
  v3 = a2;
  Function_202404c(*a1);
  result = *(uint *)(v3 + 4);
  if ( result )
  {
    if ( result == 1 )
    {
      result = (int)v2[5];
      if ( result != 2 )
      {
        result = 1;
        v2[5] = (int *)1;
      }
    }
  }
  else
  {
    result = (int)v2[4];
    if ( result != 2 )
    {
      result = 1;
      v2[4] = (int *)1;
    }
  }
  return result;
}

//----- (021E6DEC) --------------------------------------------------------
int __fastcall Function_21e6dec(int *a1)
{
  int *v1;
  int result;

  v1 = a1;
  Function_2024034(*a1);
  free(v1[1]);
  result = 0;
  v1[1] = 0;
  return result;
}

//----- (021E6E04) --------------------------------------------------------
int __fastcall Function_21e6e04(int a1, int a2, int *a3)
{
  int v3;
  int v4;
  int result;

  v3 = a1;
  v4 = *a3;
  result = a3[1] + 4 * a1;
  *(uint *)(result + 16) = a2;
  if ( a2 == 2 )
  {
    result = Function_21e33b4(*(int **)(v4 + 12), 1);
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        result = *(uint *)(v4 + 4);
        if ( result != 1 )
        {
          Function_2005748(0x5DDu);
          *(uint *)(v4 + 4) = 1;
          result = **(uint **)v4 | 2;
          **(uint **)v4 = result;
        }
      }
    }
    else
    {
      result = *(uint *)(v4 + 4);
      if ( result )
      {
        Function_2005748(0x5DDu);
        *(uint *)(v4 + 4) = 0;
        result = **(uint **)v4 | 1;
        **(uint **)v4 = result;
      }
    }
  }
  return result;
}

//----- (021E6E64) --------------------------------------------------------
int __fastcall Function_21e6e64(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a2;
  v4 = a3;
  v5 = a1;
  Function_21e6ef0(a2, a3);
  Function_21e6f58(v5, v3, v4);
  Function_21e700c(v5, v3, v4);
  return Function_21e70d4(v5, v3, v4);
}

//----- (021E6E94) --------------------------------------------------------
int __fastcall Function_21e6e94(int a1, int *a2, uint a3)
{
  int v3;
  uint v4;
  int *v5;
  int v6;
  int result;

  v3 = a1;
  v4 = a3;
  v5 = a2;
  Function_21d276c(*a2, 9u, 4, 128, 32, a3);
  Function_21d276c(*v5, 9u, 4, 160, 32, v4);
  Function_21e70bc(v3);
  Function_21e71b8(v3, v5);
  Function_21e6fd8(v3, v5);
  v6 = 0;
  do
  {
    result = *(uint *)(v3 + 56);
    if ( result )
      result = free(result);
    ++v6;
    v3 += 4;
  }
  while ( v6 < 2 );
  return result;
}

//----- (021E6EF0) --------------------------------------------------------
int __fastcall Function_21e6ef0(int *a1, uint a2)
{
  int *v2;
  uint v3;
  int v4;
  ushort *v6;

  v2 = a1;
  v3 = a2;
  Function_21d2724(*a1, 0x22u, *(uint **)*a1, 6, 0, 0, 1, a2);
  v4 = Function_21d27b8(*v2, 0x3Du, 1, &v6, v3);
  Function_20198c0(
    *(uint *)*v2,
    6,
    (int)(v6 + 6),
    0,
    0,
    (uint)*v6 << 21 >> 24,
    (uint)v6[1] << 21 >> 24);
  free(v4);
  return Function_201c3c0(*(uint *)*v2, 6);
}

//----- (021E6F58) --------------------------------------------------------
int *__fastcall Function_21e6f58(int a1, int *a2, uint a3)
{
  int *v3;
  int v4;
  uint v5;
  int v6;
  int v7;
  int *v8;
  int *result;

  v3 = (int *)*a2;
  v4 = a1;
  v5 = a3;
  v6 = Function_21d26e0(*a2);
  v7 = v6;
  v8 = Function_2009a4c(v3[80], v6, 0x66u, 1, 9102, 2, v5);
  *(uint *)(v4 + 16) = v8;
  Function_200a3dc(v8);
  Function_2009d4c(*(int **)(v4 + 16));
  *(uint *)(v4 + 24) = Function_2009bc4(v3[82], v7, 0x64u, 1, 9100, 2u, v5);
  result = Function_2009bc4(v3[83], v7, 0x65u, 1, 9101, 3u, v5);
  *(uint *)(v4 + 28) = result;
  return result;
}

//----- (021E6FD8) --------------------------------------------------------
int __fastcall Function_21e6fd8(int a1, int ***a2)
{
  uint ***v2;
  int **v3;

  v2 = (uint ***)a1;
  v3 = *a2;
  Function_200a4e4(*(int **)(a1 + 16));
  Function_2009d68(v3[80], v2[4]);
  Function_2009d68(v3[82], v2[6]);
  return Function_2009d68(v3[83], v2[7]);
}

//----- (021E700C) --------------------------------------------------------
int __fastcall Function_21e700c(int *a1, int *a2, int a3)
{
  int v3;
  int *v4;
  int v5;
  int v6;
  int v7;
  int v9;
  char *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  char v16;

  v3 = *a2;
  v4 = a1;
  v5 = a3;
  Function_20093b4(
    (int)&v16,
    9102,
    2111,
    9100,
    9101,
    -1,
    -1,
    0,
    2,
    *(uint *)(*a2 + 320),
    *(uint *)(*a2 + 324),
    *(uint *)(*a2 + 328),
    *(uint *)(*a2 + 332),
    0,
    0);
  v9 = *(uint *)(v3 + 316);
  v10 = &v16;
  v13 = 31;
  v14 = 2;
  v11 = 278528;
  v12 = 1277952;
  v15 = v5;
  v6 = Function_2021b90(&v9);
  *v4 = v6;
  Function_2021d6c(v6, 1u);
  v11 = 770048;
  v12 = 1277952;
  v7 = Function_2021b90(&v9);
  v4[1] = v7;
  return Function_2021d6c(v7, 1u);
}

//----- (021E70BC) --------------------------------------------------------
int __fastcall Function_21e70bc(int *a1)
{
  int *v1;
  int v2;
  int result;

  v1 = a1;
  v2 = 0;
  do
  {
    result = Function_2021bd4(*v1);
    ++v2;
    ++v1;
  }
  while ( v2 < 2 );
  return result;
}

//----- (021E70D4) --------------------------------------------------------
uint __fastcall Function_21e70d4(int *a1, int *a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int *v7;
  char v8;
  int v9;
  int v10;
  uint v11;
  uint **v12;
  int v13;
  int v14;
  uint v15;
  uint **v16;
  int v18;
  int v19;
  uchar *v20;
  int v21;
  uint v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;

  v28 = a4;
  v4 = a1;
  v5 = a3;
  v6 = *a2;
  if ( !*a1 )
    ErrorHandler();
  v7 = (int *)Function_2009dc8(*(uint *)(v6 + 324), 2111);
  v18 = *(uint *)(v6 + 336);
  v23 = -8;
  v20 = Function_200a72c(v7, 0);
  v24 = 2;
  v25 = 0;
  v26 = 2;
  v27 = v5;
  v8 = Function_201fab4(v20, 2);
  v9 = Function_21d4d6c(*(uint *)(v6 + 336), 0xCu, 2u);
  v10 = v9;
  v11 = Function_21d4dac(*(uint *)(v6 + 336), v9, 697, 0x2Du);
  v19 = v10;
  v22 = -(v11 >> 1);
  v21 = *v4;
  v12 = (uint **)Function_21d4ca0((int)&v18);
  v4[2] = (int)v12;
  Function_2012a60(*v12, v8 + 4);
  Function_21d4da0(v10);
  v13 = Function_21d4d6c(*(uint *)(v6 + 336), 0xCu, 2u);
  v14 = v13;
  v15 = Function_21d4dac(*(uint *)(v6 + 336), v13, 697, 0x2Eu);
  v19 = v14;
  v22 = -(v15 >> 1);
  v21 = v4[1];
  v16 = (uint **)Function_21d4ca0((int)&v18);
  v4[3] = (int)v16;
  Function_2012a60(*v16, v8 + 4);
  return Function_21d4da0(v14);
}

//----- (021E71B8) --------------------------------------------------------
int __fastcall Function_21e71b8(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = 0;
  do
  {
    result = Function_21d4d1c(*(int ***)(v1 + 8));
    ++v2;
    v1 += 4;
  }
  while ( v2 < 2 );
  return result;
}

//----- (021E71D0) --------------------------------------------------------
int __fastcall Function_21e71d0(int *a1, int a2, int a3, char a4, int a5, int a6, int *a7, uint a8, int a9, int a10, int *a11)
{
  uint v11;
  int v12;
  int v13;
  int v14;
  int result;
  int *v16;
  int v17;

  v16 = a1;
  v12 = a2;
  v13 = a3;
  v14 = 0;
  Function_21d144c(a2, a4);
  Function_21e727c(v12, v13, a5, a9, a10);
  result = Function_2021e74(v12);
  switch ( (uchar)result )
  {
    case 0:
    case 1:
      result = *a7;
      if ( *a7 )
      {
        result = 0;
        v14 = 1;
        v11 = 9;
        *a7 = 0;
      }
      break;
    case 2:
      result = *a7;
      if ( *a7 != 1 )
      {
        v14 = 1;
        v11 = 10;
        *a7 = 1;
      }
      break;
    case 3:
      result = *a7;
      if ( *a7 != 2 )
      {
        result = 2;
        v14 = 1;
        v11 = 8;
        *a7 = 2;
      }
      break;
    default:
      break;
  }
  if ( v14 )
  {
    if ( *a11 )
      free(*a11);
    *a11 = Function_21d27e0(*v16, v11, &v17, a8);
    result = Function_201dc68(31, 32 * a6, *(uint *)(v17 + 12), 32);
    if ( !result )
      result = ErrorHandler();
  }
  return result;
}

//----- (021E727C) --------------------------------------------------------
int __fastcall Function_21e727c(int a1, int *a2, int a3, int a4, char a5)
{
  return Function_21d1524(a1, a2, a3, a4, a5);
}

//----- (021E728C) --------------------------------------------------------
int __fastcall Function_21e728c(int *a1, int *a2, int a3, uint a4)
{
  int *v4;
  int v5;
  int *v6;
  int *v7;
  int v8;
  int result;
  int *v10;
  int v11;
  uint v12;

  v4 = a1;
  v10 = a2;
  v11 = a3;
  v12 = a4;
  v5 = 0;
  v6 = a1 + 14;
  v7 = a1 + 12;
  do
  {
    if ( v5 )
      v8 = 5;
    else
      v8 = 4;
    Function_21e71d0(v10, *v4, v4[2], *(uint *)(v11 + 16), -8, v8, v7, v12, 4, 1, v6);
    ++v5;
    result = v11 + 4;
    ++v6;
    ++v7;
    ++v4;
    v11 += 4;
  }
  while ( v5 < 2 );
  return result;
}

//----- (021E72E8) --------------------------------------------------------
int __fastcall Function_21e72e8(int result, int a2)
{
  if ( dword_21BF6C4 & 1 )
  {
    if ( *(uint *)(a2 + 4) == 1 )
    {
      *(uint *)(a2 + 4) = 0;
      **(uint **)a2 |= 1u;
      *(uint *)(result + 16) = 2;
    }
    else
    {
      *(uint *)(a2 + 4) = 1;
      **(uint **)a2 |= 2u;
      *(uint *)(result + 20) = 2;
    }
    result = Function_2005748(0x5DDu);
  }
  return result;
}

//----- (021E732C) --------------------------------------------------------
int __fastcall Function_21e732c(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a1;
  result = Function_21e33bc(*(uint *)(a2 + 12));
  if ( result == 1 )
  {
    if ( *(uint *)(v2 + 4) )
      result = Function_21e7368(v3, 68, 120, 104);
    else
      result = Function_21e7368(v3, 188, 120, 104);
  }
  return result;
}

//----- (021E7368) --------------------------------------------------------
int __fastcall Function_21e7368(int *a1)
{
  return Function_21d2574(*a1);
}

//----- (021E737C) --------------------------------------------------------
int (*__fastcall Function_21e737c(int *a1, int a2, int a3))()
{
  int v3;
  int *v4;
  int v5;
  int v6;
  int v7;
  int (*result)();

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = Function_21e73e8(a3);
  v7 = Function_21e7424(v3, v5);
  *v4 = v6;
  v4[1] = v7;
  v4[8] = 0;
  v4[9] = Function_21e749c();
  v4[2] = (int)Function_21e74a0;
  v4[3] = (int)Function_21e750c;
  v4[4] = (int)Function_21e751c;
  v4[5] = (int)Function_21e7530;
  v4[6] = (int)Function_21e75d4;
  result = Function_21e7694;
  v4[7] = (int)Function_21e7694;
  return result;
}

//----- (021E73D4) --------------------------------------------------------
int __fastcall Function_21e73d4(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_21e7468(*a1);
  return Function_21e747c(v1[1]);
}

//----- (021E73E8) --------------------------------------------------------
uchar *__fastcall Function_21e73e8(uint a1, int a2)
{
  int v2;
  uchar *v3;

  v2 = a2;
  v3 = (uchar *)malloc(a1, 8);
  if ( !v3 )
    ErrorHandler();
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  v3[4] = 0;
  v3[5] = 0;
  v3[6] = 0;
  v3[7] = 0;
  *(uint *)v3 = Function_21d13ec(v2);
  *((uint *)v3 + 1) = Function_21d1410(v2, 5);
  return v3;
}

//----- (021E7424) --------------------------------------------------------
int __fastcall Function_21e7424(uint a1, int a2)
{
  int v2;
  uint v3;
  int v4;

  v2 = a2;
  v3 = a1;
  v4 = malloc(a1, 32);
  if ( !v4 )
    ErrorHandler();
  Call_FillMemWithValue((int *)v4, 0, 0x20u);
  *(uint *)v4 = Function_21d13fc(v2);
  Function_21e7ec0(v4, v3);
  Function_21e7f40(v4, v3);
  Function_2015240(*(uint *)(v4 + 12), 0);
  return v4;
}

//----- (021E7468) --------------------------------------------------------
uint __fastcall Function_21e7468(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return free(v1);
}

//----- (021E747C) --------------------------------------------------------
uint __fastcall Function_21e747c(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  Function_21e7f20(v1);
  Function_21e7f7c(v1);
  return free(v1);
}

//----- (021E749C) --------------------------------------------------------
int Function_21e749c()
{
  return 0;
}

//----- (021E74A0) --------------------------------------------------------
int __fastcall Function_21e74a0(int a1, int *a2)
{
  int v2;
  int *v3;
  uchar *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v2 = a1;
  v3 = a2;
  v4 = (uchar *)malloc(*(uint *)(a1 + 4), 8);
  if ( !v4 )
    ErrorHandler();
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v4[4] = 0;
  v4[5] = 0;
  v4[6] = 0;
  v4[7] = 0;
  *(uint *)(v2 + 8) = v4;
  v5 = Function_21d37bc(*v3);
  v6 = Function_2098828(*(uint *)(*v3 + 5960), v5);
  if ( Function_21d3920(*v3) )
    v7 = 85;
  else
    v7 = 95;
  v8 = 4 * v7;
  if ( v6 < v8 )
  {
    *(uint *)v4 = v8 - v6;
    v9 = 0;
  }
  else
  {
    *(uint *)v4 = v6 - v8;
    v9 = 1;
  }
  *((uint *)v4 + 1) = v9;
  return 1;
}

//----- (021E750C) --------------------------------------------------------
BOOL __fastcall Function_21e750c(int a1)
{
  return *(uint *)(a1 + 12) == 1;
}

//----- (021E751C) --------------------------------------------------------
int __fastcall Function_21e751c(int a1)
{
  int v1;

  v1 = a1;
  free(*(uint *)(a1 + 8));
  *(uint *)(v1 + 8) = 0;
  return 1;
}

//----- (021E7530) --------------------------------------------------------
int __fastcall Function_21e7530(int a1, uint *a2, int a3, int a4)
{
  uint *v4;
  int v5;
  uint *v6;
  int v7;
  int *v8;
  int v9;
  int result;
  int v11;

  v4 = a2;
  v5 = a1;
  v11 = a3;
  v6 = *(uint **)(a4 + 8);
  v7 = a2[2];
  switch ( (uchar)*a2 )
  {
    case 0u:
      v8 = (int *)malloc(a2[1], 196);
      v4[2] = v8;
      Call_FillMemWithValue(v8, 0, 0xC4u);
      *(uint *)(v4[2] + 184) = 1;
      ++*v4;
      goto LABEL_7;
    case 1u:
      v9 = a2[1];
      Function_21e7800(v7, a1);
      Function_21e771c(v7, v5, v11, 1);
      ++*v4;
      goto LABEL_7;
    case 2u:
      if ( Function_21e77a4(a2[2], a1) )
        ++*v4;
      goto LABEL_7;
    case 3u:
      *(uint *)(v7 + 52) = Function_21e83d8(&dword_21E9DB0, 17, *v6);
      *(uint *)(v7 + 56) = v6[1];
      result = 1;
      break;
    default:
LABEL_7:
      result = 0;
      break;
  }
  return result;
}

//----- (021E75D4) --------------------------------------------------------
int __fastcall Function_21e75d4(int a1, uint *a2, int a3, char a4)
{
  uint *v4;
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

  v4 = a2;
  v5 = *a2;
  v6 = (uint *)v4[2];
  switch ( a4 )
  {
    case 0:
      v6[46] = 1;
      if ( *(uint *)(v6[13] + 4) )
        *v4 = 1;
      else
        *v4 = 3;
      break;
    case 1:
      v7 = v6[14];
      Function_21e7f88();
      ++*v4;
      break;
    case 2:
      if ( v6[46] == 1 )
        *v4 = v5 + 1;
      break;
    case 3:
      v8 = v6[13];
      v9 = v6[14];
      v10 = *(ushort *)(v8 + 8);
      v11 = *(ushort *)(v8 + 10);
      Function_21e8188(v6);
      ++*v4;
      break;
    case 4:
      if ( v6[46] == 1 )
        *v4 = v5 + 1;
      break;
    case 5:
      v12 = v6[13];
      if ( *(uint *)(v12 + 12) )
      {
        v13 = *(uint *)(v12 + 16);
        v14 = v6[14];
        Function_21e8258();
        ++*v4;
      }
      else
      {
        *v4 = 7;
      }
      break;
    case 6:
      if ( v6[46] == 1 )
        *v4 = v5 + 1;
      break;
    default:
      return 0;
  }
  return 0;
}

//----- (021E7694) --------------------------------------------------------
int __fastcall Function_21e7694(int a1, uint *a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a2[2];
  switch ( (uchar)*a2 )
  {
    case 0u:
      Function_21e771c(v5, v4, a3, 0);
      ++*v3;
      goto LABEL_10;
    case 1u:
      if ( Function_21e77a4(v5, v4) )
        ++*v3;
      goto LABEL_10;
    case 2u:
      Function_21e785c(v5, v4);
      ++*v3;
      goto LABEL_10;
    case 3u:
      if ( !*(uint *)(v5 + 184) )
        Call_RemoveTaskFromTaskList(*(int **)(v5 + 60));
      free(v3[2]);
      v3[2] = 0;
      ++*v3;
      goto LABEL_10;
    case 4u:
      result = 1;
      break;
    default:
LABEL_10:
      result = 0;
      break;
  }
  return result;
}

//----- (021E7714) --------------------------------------------------------
void Function_21e7714()
{
  ;
}

//----- (021E7718) --------------------------------------------------------
void Function_21e7718()
{
  ;
}

//----- (021E771C) --------------------------------------------------------
uint *__fastcall Function_21e771c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  uint *result;
  int v9;

  v4 = a3;
  v5 = a1;
  v6 = a2;
  v7 = a4;
  Function_21e7714();
  result = (uint *)Function_21e2a54(*(uint *)(v4 + 4));
  if ( result )
  {
    if ( v7 )
    {
      Function_21d23f8((uint *)(*(uint *)v6 + 364), 1, -16, 0, 0, 16, 43, 0, 0);
      v9 = Function_21d24b8(*(uint *)v6 + 364);
      result = (uint *)Function_21e8400(v5, 255 * v9 & 0xFF, 0);
    }
    else
    {
      result = Function_21d23f8((uint *)(*(uint *)v6 + 364), 1, 0, -16, 16, 0, 43, 0, 0);
    }
  }
  return result;
}

//----- (021E77A4) --------------------------------------------------------
int __fastcall Function_21e77a4(int a1, int *a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int result;
  int v11;

  v4 = a1;
  v5 = a2;
  v6 = a4;
  v7 = Function_21e2a54(*(uint *)(a3 + 4));
  v8 = *v5;
  if ( v7 )
    v9 = Function_21d2424((uint *)(v8 + 364));
  else
    v9 = Function_21d24ec(v8 + 364);
  if ( v9 )
  {
    if ( v6 )
      Function_21e7718();
    result = 1;
  }
  else
  {
    v11 = Function_21d24b8(*v5 + 364);
    Function_21e8400(v4, 255 * v11 & 0xFF, 0);
    result = 0;
  }
  return result;
}

//----- (021E7800) --------------------------------------------------------
uint __fastcall Function_21e7800(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;

  v5 = a3;
  v6 = a2;
  v7 = a1;
  Function_21e789c(a2, a3, a5);
  Function_21e7cf8(v6, a5);
  Function_21e7da8(v6, v5, a5);
  Function_21e7904(v7, v6, v5, a5);
  Function_21e7b34(v7, v6, v5, a5);
  Function_21e7cf0(v7, v6, v5, a5);
  Function_20152bc(*(uint *)(v6 + 12), 0);
  return Function_2015240(*(uint *)(v6 + 12), 1);
}

//----- (021E785C) --------------------------------------------------------
int __fastcall Function_21e785c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_21e7cf4();
  Function_21e7ccc(v2);
  Function_21e7aa0(v2, v3);
  Function_201ada4_ClearTextBox(*(uint *)v3 + 4, 0);
  Function_2019ebc(**(uint ***)v3, 1u);
  Function_2015240(*(uint *)(v3 + 12), 0);
  return Function_20152bc(*(uint *)(v3 + 12), 0);
}

//----- (021E789C) --------------------------------------------------------
int __fastcall Function_21e789c(int *a1, int a2, uint a3)
{
  int *v3;
  uint v4;
  int v5;
  ushort *v7;

  v3 = a1;
  v4 = a3;
  Function_21d2724(*a1, 0x21u, *(uint **)*a1, 3, 0, 0, 1, a3);
  v5 = Function_21d27b8(*v3, 0x49u, 1, &v7, v4);
  Function_20198c0(
    *(uint *)*v3,
    3,
    (int)(v7 + 6),
    0,
    0,
    (uint)*v7 << 21 >> 24,
    (uint)v7[1] << 21 >> 24);
  free(v5);
  return Function_201c3c0(*(uint *)*v3, 3);
}

//----- (021E7904) --------------------------------------------------------
uint __fastcall Function_21e7904(int a1, int *a2, int *a3, uint a4)
{
  int v4;
  int *v5;
  int *v6;
  uint v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int *v12;
  uchar v13;
  uint v14;
  int v15;
  int *v16;
  int *v17;
  int *v18;
  int *v19;
  int v21;
  int v22;
  int v23;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = (int *)*a2;
  v9 = Function_21d37bc(*a3);
  v21 = Function_21d26e0(*v5);
  v12 = LoadFromNARC_8(19, v7, v10, v11);
  v13 = Function_21d33d4((uint **)*v6, v9);
  v14 = Function_2079d8c(v9, 0, v13);
  v15 = Function_2079fd0();
  v23 = Function_2079fd4();
  v22 = Function_2079fe0();
  v16 = Function_2009a4c(v8[80], (int)v12, v14, 0, 8000, 1, v7);
  *(uint *)(v4 + 20) = v16;
  Function_200a450(v16);
  Function_2009d4c(*(int **)(v4 + 20));
  v17 = Function_2009b04(v8[81], (int)v12, v15, 0, 8000, 1, 3, v7);
  *(uint *)(v4 + 24) = v17;
  if ( !Function_200a640(v17) )
    ErrorHandler();
  *(uint *)(v4 + 188) = malloc(v7, 96);
  *(uint *)(v4 + 28) = Function_2009bc4(v8[82], (int)v12, v23, 0, 8000, 2u, v7);
  *(uint *)(v4 + 32) = Function_2009bc4(v8[83], (int)v12, v22, 0, 8000, 3u, v7);
  v18 = Function_2009a4c(v8[80], v21, 0x5Du, 1, 7093, 1, v7);
  *(uint *)(v4 + 36) = v18;
  Function_200a3dc(v18);
  Function_2009d4c(*(int **)(v4 + 36));
  v19 = Function_2009b04(v8[81], v21, 0xEu, 0, 7014, 1, 5, v7);
  *(uint *)(v4 + 40) = v19;
  Function_200a640(v19);
  *(uint *)(v4 + 192) = malloc(v7, 160);
  *(uint *)(v4 + 44) = Function_2009bc4(v8[82], v21, 0x5Bu, 1, 7091, 2u, v7);
  *(uint *)(v4 + 48) = Function_2009bc4(v8[83], v21, 0x5Cu, 1, 7092, 3u, v7);
  return Call_FS_CloseFile(v12);
}

//----- (021E7AA0) --------------------------------------------------------
uint __fastcall Function_21e7aa0(int a1, int ***a2)
{
  int v2;
  int **v3;

  v2 = a1;
  v3 = *a2;
  Function_200a4e4(*(int **)(a1 + 20));
  Function_200a6dc(*(int **)(v2 + 24));
  Function_2009d68(v3[80], *(uint ***)(v2 + 20));
  Function_2009d68(v3[81], *(uint ***)(v2 + 24));
  Function_2009d68(v3[82], *(uint ***)(v2 + 28));
  Function_2009d68(v3[83], *(uint ***)(v2 + 32));
  Function_200a4e4(*(int **)(v2 + 36));
  Function_200a6dc(*(int **)(v2 + 40));
  Function_2009d68(v3[80], *(uint ***)(v2 + 36));
  Function_2009d68(v3[81], *(uint ***)(v2 + 40));
  Function_2009d68(v3[82], *(uint ***)(v2 + 44));
  Function_2009d68(v3[83], *(uint ***)(v2 + 48));
  free(*(uint *)(v2 + 188));
  return free(*(uint *)(v2 + 192));
}

//----- (021E7B34) --------------------------------------------------------
int __fastcall Function_21e7b34(int a1, uint *a2, int *a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  uint *v7;
  bool v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  char v17;
  int v19;
  int v20;
  int v21;
  char *v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  char v28;
  int v29;

  v29 = a4;
  v4 = a3;
  v5 = a1;
  v6 = a4;
  v7 = (uint *)*a2;
  v19 = Function_21d37bc(*a3);
  v20 = Function_21d33d4((uint **)*v4, v19);
  Function_20093b4((int)&v28, 7093, 7014, 7091, 7092, -1, -1, 0, 3, v7[80], v7[81], v7[82], v7[83], 0, 0);
  v21 = v7[79];
  v22 = &v28;
  v25 = 31;
  v23 = 753664;
  v24 = 0x40000;
  v26 = 1;
  v27 = v6;
  *(uint *)v5 = Function_2021b90(&v21);
  v8 = Function_21d3920(*v4) == 0;
  v9 = *(uint *)v5;
  if ( v8 )
    Function_2021d6c(v9, 3u);
  else
    Function_2021d6c(v9, 4u);
  v23 = 0x80000;
  v24 = 434176;
  v10 = Function_2021b90(&v21);
  *(uint *)(v5 + 8) = v10;
  Function_2021d6c(v10, 1u);
  Function_2021e80(*(uint *)(v5 + 8), 1);
  v23 = 753664;
  v24 = 360448;
  v11 = Function_2021b90(&v21);
  *(uint *)(v5 + 12) = v11;
  Function_2021d6c(v11, 0);
  v23 = 294912;
  v24 = 360448;
  v12 = Function_2021b90(&v21);
  *(uint *)(v5 + 16) = v12;
  Function_2021d6c(v12, 0);
  v13 = Function_2009e08(*(int **)(v5 + 20));
  v14 = Function_2009e08(*(int **)(v5 + 24));
  v15 = Function_2009e08(*(int **)(v5 + 28));
  v16 = Function_2009e08(*(int **)(v5 + 32));
  Function_20093b4((int)&v28, v13, v14, v15, v16, -1, -1, 0, 3, v7[80], v7[81], v7[82], v7[83], 0, 0);
  v21 = v7[79];
  v22 = &v28;
  v25 = 31;
  v23 = 294912;
  v24 = 0x40000;
  v26 = 1;
  v27 = v6;
  *(uint *)(v5 + 4) = Function_2021b90(&v21);
  v17 = Function_2079edc(v19, v20, 0);
  return Function_2021ec4(*(uint *)(v5 + 4), v17);
}

//----- (021E7CCC) --------------------------------------------------------
int __fastcall Function_21e7ccc(int *a1)
{
  int *v1;

  v1 = a1;
  Function_2021bd4(*a1);
  Function_2021bd4(v1[1]);
  Function_2021bd4(v1[2]);
  Function_2021bd4(v1[3]);
  return Function_2021bd4(v1[4]);
}

//----- (021E7CF0) --------------------------------------------------------
void Function_21e7cf0()
{
  ;
}

//----- (021E7CF4) --------------------------------------------------------
void Function_21e7cf4()
{
  ;
}

//----- (021E7CF8) --------------------------------------------------------
ushort *__fastcall Function_21e7cf8(uint *a1, uint a2)
{
  uint *v2;
  uint v3;
  ushort *v4;
  ushort **v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = (ushort *)Function_2023790(32, a2);
  v5 = (ushort **)LoadFromMsgNARC(0, 26, 697, v3);
  Function_200b1b8_CallMsgDecrypt(v5, 0x2Cu, v4);
  Function_2002eec(0, (int)v4, 0, 0x100u);
  Function_201d78c(*v2 + 4, 0);
  Function_200b1b8_CallMsgDecrypt(v5, 0xAu, v4);
  Function_201d78c(*v2 + 4, 0);
  Function_200b1b8_CallMsgDecrypt(v5, 0xAu, v4);
  Function_201d78c(*v2 + 4, 0);
  Function_20237bc_FreeMsg((int)v4, v6);
  return Function_200b190((ushort *)v5);
}

//----- (021E7DA8) --------------------------------------------------------
ushort *__fastcall Function_21e7da8(uint *a1, int *a2, uint a3)
{
  uint v3;
  uint *v4;
  int *v5;
  ushort *v6;
  int v7;
  ushort *v8;
  int v9;
  ushort **v10;
  int v11;
  ushort **v12;
  int v13;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = (ushort *)Function_2023790(32, a3);
  v7 = Function_21d37bc(*v5);
  v8 = Function_200b32c(v7, v3);
  v9 = Function_20989c4();
  v10 = (ushort **)LoadFromMsgNARC(0, 26, v9, v3);
  Function_201d78c(*v4 + 4, 0);
  Function_200b1b8_CallMsgDecrypt(v10, v7, v6);
  Function_2002d7c(0, (int)v6, 0);
  Function_201d78c(*v4 + 4, 0);
  Function_20237bc_FreeMsg((int)v8, v11);
  Function_200b190((ushort *)v10);
  v12 = (ushort **)LoadFromMsgNARC(0, 26, 697, v3);
  Function_21d3914(*v5);
  Function_201d78c(*v4 + 4, 0);
  if ( Function_21d3920(*v5) )
    Function_200b1b8_CallMsgDecrypt(v12, 0x62u, v6);
  else
    Function_200b1b8_CallMsgDecrypt(v12, 0x61u, v6);
  Function_2002d7c(0, (int)v6, 0);
  Function_201d78c(*v4 + 4, 0);
  Function_20237bc_FreeMsg((int)v6, v13);
  return Function_200b190((ushort *)v12);
}

//----- (021E7EC0) --------------------------------------------------------
int *__fastcall Function_21e7ec0(int *a1, uint a2, int a3, int a4)
{
  uint v4;
  int *v5;
  int *result;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a2;
  v5 = a1;
  a1[4] = Function_21d2808(*a1, 0x24u, 1, a1 + 6, a2);
  v5[5] = Function_21d27e0(*v5, 6u, v5 + 7, v4);
  v7 = *(uint *)(*v5 + 360);
  v8 = v5[6];
  v5[1] = (int)Function_2015128(&v7);
  v9 = *(uint *)(*v5 + 360);
  v10 = v5[7];
  v11 = 16;
  result = Function_20151a4(&v9);
  v5[2] = (int)result;
  return result;
}

//----- (021E7F20) --------------------------------------------------------
uint __fastcall Function_21e7f20(int a1)
{
  int v1;

  v1 = a1;
  Function_2015164(*(uint **)(a1 + 4));
  Function_20151d4(*(uint **)(v1 + 8));
  free(*(uint *)(v1 + 16));
  return free(*(uint *)(v1 + 20));
}

//----- (021E7F40) --------------------------------------------------------
int __fastcall Function_21e7f40(uint *a1)
{
  uint *v1;
  int result;
  int v3;
  int v4;
  int v5;
  short v6;
  short v7;
  short v8;
  int v9;
  int v10;
  short v11;

  v1 = a1;
  v3 = *(uint *)(*a1 + 360);
  v4 = a1[1];
  v5 = a1[2];
  v6 = 64;
  v7 = 88;
  v8 = 0;
  v9 = 31;
  v10 = 0;
  v11 = 0;
  result = Function_2015214((int **)&v3);
  v1[3] = result;
  return result;
}

//----- (021E7F7C) --------------------------------------------------------
int __fastcall Function_21e7f7c(int a1)
{
  return Function_2015238(*(int **)(a1 + 12));
}

//----- (021E7F88) --------------------------------------------------------
uint *__fastcall Function_21e7f88(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  uint *result;

  v3 = a1;
  a1[16] = *(uint *)(a2 + 12);
  v3[17] = v3[3];
  v3[18] = v3[4];
  v3[19] = *v3;
  v3[20] = v3[1];
  a1[27] = 0;
  v3[28] = v3 + 46;
  a1[46] = 0;
  if ( a3 )
    v4 = 1;
  else
    v4 = -1;
  v3[21] = v4;
  result = AddTaskToTaskList1((int)Function_21e7fd0, (int)(v3 + 16), 0);
  v3[15] = result;
  return result;
}

//----- (021E7FD0) --------------------------------------------------------
int *__fastcall Function_21e7fd0(int *result, uint *a2)
{
  uint *v2;
  int v3;
  int v4;

  v2 = a2;
  switch ( (uchar)a2[11] )
  {
    case 0u:
      result = (int *)2;
      a2[6] = 2;
      a2[11] = 2;
      break;
    case 1u:
      result = (int *)Function_21e8084(a2);
      break;
    case 2u:
      a2[9] = -546 * a2[5];
      a2[8] = -182 * a2[5];
      a2[10] = 3;
      a2[11] = 1;
      result = (int *)Function_21e8084(a2);
      break;
    case 3u:
      a2[9] = 546 * a2[5];
      a2[8] = 182 * a2[5];
      a2[10] = 4;
      a2[11] = 1;
      result = (int *)Function_21e8084(a2);
      break;
    case 4u:
      a2[9] = 0;
      a2[8] = -182 * a2[5];
      a2[11] = 1;
      v3 = a2[6] - 1;
      a2[6] = v3;
      if ( v3 <= 0 )
        v4 = 5;
      else
        v4 = 2;
      a2[10] = v4;
      result = (int *)Function_21e8084(a2);
      break;
    case 5u:
      Call_RemoveTaskFromTaskList(result);
      result = (int *)v2[12];
      *result = 1;
      break;
    default:
      return result;
  }
  return result;
}

//----- (021E8084) --------------------------------------------------------
int __fastcall Function_21e8084(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = a1[8];
  v3 = a1[9];
  if ( v2 >= 0 )
  {
    v5 = a1[7] + v2;
    if ( v5 > v3 )
    {
      v1[7] = v3;
      v1[11] = v1[10];
    }
    else
    {
      v1[7] = v5;
    }
  }
  else
  {
    v4 = a1[7] + v2;
    if ( v4 < v3 )
    {
      v1[7] = v3;
      v1[11] = v1[10];
    }
    else
    {
      v1[7] = v4;
    }
  }
  return Function_21e80d4(*v1, v1[1], v1[2], v1[3], v1[4], v1[7] & 0xFFFF);
}

//----- (021E80D4) --------------------------------------------------------
int __fastcall Function_21e80d4(int a1, uint *a2, uint *a3, int a4, uint *a5, ushort a6)
{
  uint *v6;
  uint *v7;
  uint *v8;
  int v9;
  int v10;
  int v12;
  int v13;
  int v14;

  v14 = a4;
  v6 = a2;
  v7 = a3;
  v8 = (uint *)a4;
  Function_20152bc(a1, a6);
  v9 = (ll_mul(*((short *)Unknown_20f983c + 2 * ((int)a6 >> 4) + 1), 229376LL) + 2048) >> 12;
  v10 = (ll_mul(SLOWORD(Unknown_20f983c[(int)a6 >> 4]), 229376LL) + 2048) >> 12;
  v12 = v9 + 0x80000;
  v13 = v10 + 0x40000;
  Function_2021c50(v8, &v12);
  v13 += 98304;
  Function_2021c50(v6, &v12);
  v13 = 0x40000 - v10;
  v12 = 0x80000 - v9;
  Function_2021c50(a5, &v12);
  v13 += 98304;
  return Function_2021c50(v7, &v12);
}

//----- (021E8188) --------------------------------------------------------
uint *__fastcall Function_21e8188(uint *a1, int a2, int a3, int a4, int a5)
{
  uint *v5;
  uint *result;

  v5 = a1;
  a1[29] = *(uint *)(a2 + 12);
  a1[30] = a1[3];
  a1[31] = a1[4];
  a1[32] = *a1;
  a1[33] = a1[1];
  a1[34] = 0;
  v5[37] = v5 + 46;
  a1[46] = 0;
  if ( a5 )
  {
    a1[35] = -a3;
    a1[36] = -a4;
  }
  else
  {
    a1[35] = a3;
    a1[36] = a4;
  }
  result = AddTaskToTaskList1((int)Function_21e81f8, (int)(a1 + 29), 0);
  v5[15] = result;
  return result;
}

//----- (021E81F8) --------------------------------------------------------
uint *__fastcall Function_21e81f8(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint *result;

  v2 = a2;
  v3 = a1;
  v4 = *(uint *)(a2 + 24);
  v5 = 0;
  v6 = *(uint *)(a2 + 28);
  if ( v4 >= 0 )
  {
    v8 = *(uint *)(a2 + 20) + v4;
    if ( v8 > v6 )
    {
      *(uint *)(a2 + 20) = v6;
      v5 = 1;
    }
    else
    {
      *(uint *)(a2 + 20) = v8;
    }
  }
  else
  {
    v7 = *(uint *)(a2 + 20) + v4;
    if ( v7 < v6 )
    {
      *(uint *)(a2 + 20) = v6;
      v5 = 1;
    }
    else
    {
      *(uint *)(a2 + 20) = v7;
    }
  }
  result = (uint *)Function_21e80d4(
                       *(uint *)a2,
                       *(uint **)(a2 + 4),
                       *(uint **)(a2 + 8),
                       *(uint *)(a2 + 12),
                       *(uint **)(a2 + 16),
                       *(uint *)(a2 + 20));
  if ( v5 == 1 )
  {
    Call_RemoveTaskFromTaskList(v3);
    result = *(uint **)(v2 + 32);
    *result = 1;
  }
  return result;
}

//----- (021E8258) --------------------------------------------------------
uint *__fastcall Function_21e8258(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  int v6;
  uint *v7;
  uint *result;

  v3 = a1;
  v4 = a2;
  if ( a3 )
    v5 = *a1;
  else
    v5 = a1[1];
  a1[38] = v5;
  a1[42] = -2 * v4;
  v6 = a1[38];
  Function_2021d28();
  v3[39] = *v7;
  v3[40] = v7[1];
  v3[43] = 0;
  *((ushort *)v3 + 82) = v4;
  v3[44] = 0;
  v3[45] = v3 + 46;
  v3[46] = 0;
  result = AddTaskToTaskList1((int)Function_21e82c8, (int)(v3 + 38), 0);
  v3[15] = result;
  return result;
}

//----- (021E82C8) --------------------------------------------------------
uint *__fastcall Function_21e82c8(int *a1, uint **a2)
{
  uint **v2;
  int *v3;
  uint *result;
  int v5;
  int v6;
  int v7;
  uint *v8;
  uint *v9;

  v2 = a2;
  v3 = a1;
  result = a2[6];
  switch ( (uchar)result )
  {
    case 0:
      v5 = (int)a2[5] + 1;
      a2[5] = (uint *)v5;
      v6 = *((short *)a2 + 6) * v5 + v5 * v5 / 2;
      v8 = a2[1];
      v9 = &a2[2][1024 * v6];
      Function_2021c50(*a2, (int *)&v8);
      result = v2[4];
      if ( (int)v2[5] >= (int)result )
      {
        v2[5] = 0;
        v2[4] = (uint *)(*((short *)v2 + 6) / 2 + 1);
        result = (uint *)((char *)v2[6] + 1);
        v2[6] = result;
      }
      break;
    case 1:
      if ( !a2[5] )
      {
        v8 = a2[1] + 2048;
        v9 = a2[2];
        Function_2021c50(*a2, (int *)&v8);
      }
      result = (uint *)((char *)v2[5] + 1);
      v2[5] = result;
      if ( (int)result > 1 )
      {
        v2[5] = 0;
        result = (uint *)((char *)v2[6] + 1);
        v2[6] = result;
      }
      break;
    case 2:
      if ( !a2[5] )
      {
        v8 = a2[1] - 2048;
        v9 = a2[2];
        Function_2021c50(*a2, (int *)&v8);
      }
      result = (uint *)((char *)v2[5] + 1);
      v2[5] = result;
      if ( (int)result > 1 )
      {
        v7 = (int)v2[4] - 1;
        v2[4] = (uint *)v7;
        if ( v7 <= 0 )
        {
          result = (uint *)((char *)v2[6] + 1);
          v2[6] = result;
        }
        else
        {
          v2[5] = 0;
          result = (uint *)1;
          v2[6] = (uint *)1;
        }
      }
      break;
    case 3:
      v8 = a2[1];
      v9 = a2[2];
      Function_2021c50(*a2, (int *)&v8);
      Call_RemoveTaskFromTaskList(v3);
      result = v2[7];
      *result = 1;
      break;
    default:
      return result;
  }
  return result;
}

//----- (021E83D8) --------------------------------------------------------
int __fastcall Function_21e83d8(uint *a1, int a2, int a3)
{
  int v3;
  uint *v4;

  v3 = 0;
  if ( a2 <= 0 )
    return 0;
  v4 = a1;
  while ( *v4 < a3 )
  {
    ++v3;
    v4 += 5;
    if ( v3 >= a2 )
      return 0;
  }
  return (int)&a1[5 * v3];
}

//----- (021E8400) --------------------------------------------------------
int __fastcall Function_21e8400(int a1, int a2, ushort a3)
{
  int v3;
  int v4;
  ushort v5;
  int v6;
  uchar *v7;
  int v8;
  int v9;
  uchar *v10;
  int v11;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_2009e34(*(uint *)(a1 + 24));
  v7 = Function_200a72c(*(int **)(v3 + 24), 0);
  Function_200393c(*(uint *)(v6 + 12), *(uint *)(v3 + 188), 0x30u, v4, v5);
  v8 = NNS_G2dGetImagePaletteLocation((int)v7, 1);
  Function_201dc68(14, v8, *(uint *)(v3 + 188), 96);
  v9 = Function_2009e34(*(uint *)(v3 + 40));
  v10 = Function_200a72c(*(int **)(v3 + 40), 0);
  Function_200393c(*(uint *)(v9 + 12), *(uint *)(v3 + 192), 0x50u, v4, v5);
  v11 = NNS_G2dGetImagePaletteLocation((int)v10, 1);
  return Function_201dc68(14, v11, *(uint *)(v3 + 192), 160);
}

//----- (021E8484) --------------------------------------------------------
int (*__fastcall Function_21e8484(int *a1, int a2, int a3))()
{
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int (*result)();

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Function_21e84fc(a3);
  v7 = Function_21e8544(v4, v5);
  v8 = Function_21e856c(v4, v5);
  *v3 = v6;
  v3[1] = v7;
  v3[8] = v8;
  v3[9] = Function_21e859c();
  v3[2] = (int)Function_21e85a0;
  v3[3] = (int)Function_21e85dc;
  v3[4] = (int)Function_21e8640;
  v3[5] = (int)Function_21e8654;
  v3[6] = (int)Function_21e86dc;
  result = Function_21e870c;
  v3[7] = (int)Function_21e870c;
  return result;
}

//----- (021E84E4) --------------------------------------------------------
int __fastcall Function_21e84e4(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_21e8570(*a1);
  Function_21e8584(v1[1]);
  return Function_21e8598(v1[8]);
}

//----- (021E84FC) --------------------------------------------------------
int *__fastcall Function_21e84fc(uint a1, int a2)
{
  int v2;
  int *v3;
  int *v4;
  int v5;

  v2 = a2;
  v3 = (int *)malloc(a1, 16);
  if ( !v3 )
    ErrorHandler();
  v4 = v3;
  v5 = 16;
  do
  {
    *(uchar *)v4 = 0;
    v4 = (int *)((char *)v4 + 1);
    --v5;
  }
  while ( v5 );
  *v3 = Function_21d13a0(v2);
  v3[2] = Function_21d1430(v2, 3);
  v3[3] = Function_21d1410(v2, 3);
  v3[1] = Function_21d13ec(v2);
  return v3;
}

//----- (021E8544) --------------------------------------------------------
uchar *__fastcall Function_21e8544(uint a1, int a2)
{
  int v2;
  uchar *v3;

  v2 = a2;
  v3 = (uchar *)malloc(a1, 4);
  if ( !v3 )
    ErrorHandler();
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  *(uint *)v3 = Function_21d13fc(v2);
  return v3;
}

//----- (021E856C) --------------------------------------------------------
int Function_21e856c()
{
  return 0;
}

//----- (021E8570) --------------------------------------------------------
uint __fastcall Function_21e8570(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return free(v1);
}

//----- (021E8584) --------------------------------------------------------
uint __fastcall Function_21e8584(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return free(v1);
}

//----- (021E8598) --------------------------------------------------------
void Function_21e8598()
{
  ;
}

//----- (021E859C) --------------------------------------------------------
int Function_21e859c()
{
  return 0;
}

//----- (021E85A0) --------------------------------------------------------
int __fastcall Function_21e85a0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uchar *v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = malloc(*(uint *)(a1 + 4), 24);
  v5 = (uchar *)v4;
  v6 = 24;
  do
  {
    *v5++ = 0;
    --v6;
  }
  while ( v6 );
  *(uint *)(v4 + 16) = 4;
  Function_21e886c(v4, v3, *(uint *)(v2 + 4));
  Function_21e88b8(v4, v3);
  *(uint *)(v2 + 8) = v4;
  return 1;
}

//----- (021E85DC) --------------------------------------------------------
int __fastcall Function_21e85dc(uint *a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1[2];
  if ( a1[3] == 1 )
    return 1;
  if ( a1[4] == 1 )
    return 0;
  if ( Function_21e33ac(*(uint *)(a2 + 8)) )
  {
    Function_21e88b0(v3);
    if ( Function_21e33bc(*(uint *)(v2 + 8)) && Function_21d3998(*(uint *)(v2 + 4)) == 2 )
      Function_21e8cf0(v3, v2);
    Function_21e88b8(v3, v2);
    if ( *(uint *)(v3 + 20) )
    {
      Function_21e8d3c(v2);
      *(uint *)(v3 + 20) = 0;
    }
  }
  return 0;
}

//----- (021E8640) --------------------------------------------------------
int __fastcall Function_21e8640(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 8);
  Function_21e88d0(*(uint *)(a1 + 8));
  free(v1);
  return 1;
}

//----- (021E8654) --------------------------------------------------------
int __fastcall Function_21e8654(uint *a1, uint *a2, int a3)
{
  uint *v3;
  uint *v4;
  int v5;
  int v6;
  int *v7;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = a2[2];
  switch ( (uchar)*a2 )
  {
    case 0u:
      v7 = (int *)malloc(a2[1], 48);
      v3[2] = v7;
      Call_FillMemWithValue(v7, 0, 0x30u);
      ++*v3;
      goto LABEL_7;
    case 1u:
      Function_21e891c(a2[2], a1, a2[1]);
      Function_21e87c4(v6, v4, v5, 1);
      ++*v3;
      goto LABEL_7;
    case 2u:
      if ( Function_21e8830(a2[2], a1) )
        ++*v3;
      goto LABEL_7;
    case 3u:
      Function_21d25ac(*a1 + 484, 0);
      result = 1;
      break;
    default:
LABEL_7:
      result = 0;
      break;
  }
  return result;
}

//----- (021E86DC) --------------------------------------------------------
int __fastcall Function_21e86dc(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v9;

  v4 = a1;
  v5 = a3;
  v9 = *(uint *)(a4 + 8);
  v6 = a2;
  v7 = *(uint *)(a2 + 8);
  if ( Function_21e33ac(*(uint *)(a3 + 8)) )
  {
    Function_21e8cbc(v4, v7, v9, *(uint *)(v6 + 4));
    Function_21e8d04(v4, v5);
  }
  return 0;
}

//----- (021E870C) --------------------------------------------------------
int __fastcall Function_21e870c(uint *a1, uint *a2, int a3)
{
  uint *v3;
  uint *v4;
  int v5;
  int v6;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = a2[2];
  switch ( (uchar)*a2 )
  {
    case 0u:
      Function_21d25ac(*a1 + 484, 1);
      Function_21e87c4(v6, v4, v5, 0);
      ++*v3;
      goto LABEL_8;
    case 1u:
      if ( Function_21e8830(a2[2], a1) )
        ++*v3;
      goto LABEL_8;
    case 2u:
      Function_21e894c(a2[2], a1, a2[1]);
      ++*v3;
      goto LABEL_8;
    case 3u:
      free(a2[2]);
      ++*v3;
      goto LABEL_8;
    case 4u:
      result = 1;
      break;
    default:
LABEL_8:
      result = 0;
      break;
  }
  return result;
}

//----- (021E8794) --------------------------------------------------------
int __fastcall Function_21e8794(int *a1)
{
  int *v1;

  v1 = a1;
  Function_2021fe0(*a1, 1);
  return Function_2012af0(*(uint **)v1[1], 1);
}

//----- (021E87AC) --------------------------------------------------------
int __fastcall Function_21e87ac(int *a1)
{
  int *v1;

  v1 = a1;
  Function_2021fe0(*a1, 0);
  return Function_2012af0(*(uint **)v1[1], 0);
}

//----- (021E87C4) --------------------------------------------------------
uint *__fastcall Function_21e87c4(int *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint *result;

  v4 = a3;
  v5 = a2;
  v6 = a4;
  Function_21e8794(a1);
  result = (uint *)Function_21e33a4(*(uint *)(v4 + 8));
  if ( result )
  {
    if ( v6 )
      result = Function_21d23f8((uint *)(*(uint *)v5 + 400), 1, -16, 0, 0, 16, 44, 47, 1);
    else
      result = Function_21d23f8((uint *)(*(uint *)v5 + 400), 1, 0, -16, 16, 0, 44, 47, 1);
  }
  return result;
}

//----- (021E8830) --------------------------------------------------------
int __fastcall Function_21e8830(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int v7;

  v4 = a1;
  v5 = a2;
  v6 = a4;
  if ( Function_21e33a4(*(uint *)(a3 + 8)) )
    v7 = Function_21d2424((uint *)(*(uint *)v5 + 400));
  else
    v7 = Function_200ac1c(2);
  if ( !v7 )
    return 0;
  if ( v6 )
    Function_21e87ac(v4);
  return 1;
}

//----- (021E886C) --------------------------------------------------------
int __fastcall Function_21e886c(int *a1, int a2, uint a3)
{
  uint v3;
  int *v4;
  int v5;
  int result;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  a1[1] = malloc(a3, 4);
  Function_21d154c((uchar *)v4[1], 104, 184, 8, 248);
  v4[2] = v5;
  v4[3] = (int)v4;
  result = Function_2023fcc(v4[1], 1u, (int)Function_21e88e8, (int)(v4 + 2), v3);
  *v4 = result;
  return result;
}

//----- (021E88B0) --------------------------------------------------------
int __fastcall Function_21e88b0(int result)
{
  *(uint *)(result + 16) = 3;
  return result;
}

//----- (021E88B8) --------------------------------------------------------
int __fastcall Function_21e88b8(int **a1)
{
  int **v1;
  int result;

  v1 = a1;
  Function_202404c(*a1);
  result = (int)v1[5];
  if ( result )
  {
    result = 2;
    v1[4] = (int *)2;
  }
  return result;
}

//----- (021E88D0) --------------------------------------------------------
int __fastcall Function_21e88d0(int *a1)
{
  int *v1;
  int result;

  v1 = a1;
  Function_2024034(*a1);
  free(v1[1]);
  result = 0;
  v1[1] = 0;
  return result;
}

//----- (021E88E8) --------------------------------------------------------
int __fastcall Function_21e88e8(int result, int a2, int *a3)
{
  int v3;
  int v4;

  v3 = a3[1];
  v4 = *a3;
  *(uint *)(v3 + 4 * result + 16) = a2;
  if ( a2 )
  {
    if ( a2 == 2 && !result )
    {
      result = 1;
      *(uint *)(v3 + 20) = 1;
    }
  }
  else if ( !result )
  {
    Function_21e33b4(*(int **)(v4 + 8), 1);
    result = 1;
    *(uint *)(v3 + 20) = 1;
  }
  return result;
}

//----- (021E891C) --------------------------------------------------------
int __fastcall Function_21e891c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a2;
  v4 = a3;
  v5 = a1;
  Function_21e898c(a2, a3);
  Function_21e89f4(v5, v3, v4);
  Function_21e8aa8(v5, v3, v4);
  return Function_21e8b40(v5, v3, v4);
}

//----- (021E894C) --------------------------------------------------------
int __fastcall Function_21e894c(int a1, int *a2, uint a3)
{
  int v3;
  int *v4;
  int result;

  v3 = a1;
  v4 = a2;
  Function_21d276c(*a2, 9u, 4, 128, 32, a3);
  Function_21e8b34(v3);
  Function_21e8bdc(v3, v4);
  Function_21e8a74(v3, v4);
  result = *(uint *)(v3 + 44);
  if ( result )
    result = free(result);
  return result;
}

//----- (021E898C) --------------------------------------------------------
int __fastcall Function_21e898c(int *a1, uint a2)
{
  int *v2;
  uint v3;
  int v4;
  ushort *v6;

  v2 = a1;
  v3 = a2;
  Function_21d2724(*a1, 0x22u, *(uint **)*a1, 6, 0, 0, 1, a2);
  v4 = Function_21d27b8(*v2, 0x3Au, 1, &v6, v3);
  Function_20198c0(
    *(uint *)*v2,
    6,
    (int)(v6 + 6),
    0,
    0,
    (uint)*v6 << 21 >> 24,
    (uint)v6[1] << 21 >> 24);
  free(v4);
  return Function_201c3c0(*(uint *)*v2, 6);
}

//----- (021E89F4) --------------------------------------------------------
int *__fastcall Function_21e89f4(int a1, int *a2, uint a3)
{
  int *v3;
  int v4;
  uint v5;
  int v6;
  int v7;
  int *v8;
  int *result;

  v3 = (int *)*a2;
  v4 = a1;
  v5 = a3;
  v6 = Function_21d26e0(*a2);
  v7 = v6;
  v8 = Function_2009a4c(v3[80], v6, 0x66u, 1, 13102, 2, v5);
  *(uint *)(v4 + 8) = v8;
  Function_200a3dc(v8);
  Function_2009d4c(*(int **)(v4 + 8));
  *(uint *)(v4 + 16) = Function_2009bc4(v3[82], v7, 0x64u, 1, 13100, 2u, v5);
  result = Function_2009bc4(v3[83], v7, 0x65u, 1, 13101, 3u, v5);
  *(uint *)(v4 + 20) = result;
  return result;
}

//----- (021E8A74) --------------------------------------------------------
int __fastcall Function_21e8a74(int a1, int ***a2)
{
  uint ***v2;
  int **v3;

  v2 = (uint ***)a1;
  v3 = *a2;
  Function_200a4e4(*(int **)(a1 + 8));
  Function_2009d68(v3[80], v2[2]);
  Function_2009d68(v3[82], v2[4]);
  return Function_2009d68(v3[83], v2[5]);
}

//----- (021E8AA8) --------------------------------------------------------
int __fastcall Function_21e8aa8(int *a1, int *a2, int a3)
{
  int v3;
  int *v4;
  int v5;
  int v6;
  int v8;
  char *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  char v15;

  v3 = *a2;
  v4 = a1;
  v5 = a3;
  Function_20093b4(
    (int)&v15,
    13102,
    2111,
    13100,
    13101,
    -1,
    -1,
    0,
    2,
    *(uint *)(*a2 + 320),
    *(uint *)(*a2 + 324),
    *(uint *)(*a2 + 328),
    *(uint *)(*a2 + 332),
    0,
    0);
  v8 = *(uint *)(v3 + 316);
  v9 = &v15;
  v12 = 31;
  v13 = 2;
  v10 = 0x80000;
  v11 = 1376256;
  v14 = v5;
  v6 = Function_2021b90(&v8);
  *v4 = v6;
  return Function_2021d6c(v6, 2u);
}

//----- (021E8B34) --------------------------------------------------------
int __fastcall Function_21e8b34(int *a1)
{
  return Function_2021bd4(*a1);
}

//----- (021E8B40) --------------------------------------------------------
uint __fastcall Function_21e8b40(int *a1, int *a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int *v7;
  char v8;
  int v9;
  int v10;
  uint v11;
  uint **v12;
  int v14;
  int v15;
  uchar *v16;
  int v17;
  uint v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;

  v24 = a4;
  v4 = a1;
  v5 = a3;
  v6 = *a2;
  if ( !*a1 )
    ErrorHandler();
  v7 = (int *)Function_2009dc8(*(uint *)(v6 + 324), 2111);
  v14 = *(uint *)(v6 + 336);
  v19 = -8;
  v16 = Function_200a72c(v7, 0);
  v20 = 2;
  v21 = 0;
  v22 = 2;
  v23 = v5;
  v8 = Function_201fab4(v16, 2);
  v9 = Function_21d4d6c(*(uint *)(v6 + 336), 0x10u, 2u);
  v10 = v9;
  v11 = Function_21d4dac(*(uint *)(v6 + 336), v9, 697, 0x65u);
  v15 = v10;
  v18 = -(v11 >> 1);
  v17 = *v4;
  v12 = (uint **)Function_21d4ca0((int)&v14);
  v4[1] = (int)v12;
  Function_2012a60(*v12, v8 + 4);
  return Function_21d4da0(v10);
}

//----- (021E8BDC) --------------------------------------------------------
int __fastcall Function_21e8bdc(int a1)
{
  return Function_21d4d1c(*(int ***)(a1 + 4));
}

//----- (021E8BE8) --------------------------------------------------------
int __fastcall Function_21e8be8(int *a1, int a2, int a3, char a4, int a5, int a6, int *a7, uint a8, int a9, int a10, int *a11)
{
  uint v11;
  int v12;
  int v13;
  int v14;
  int result;
  int *v16;
  int v17;

  v16 = a1;
  v12 = a2;
  v13 = a3;
  v14 = 0;
  Function_21d144c(a2, a4);
  Function_21e8c94(v12, v13, a5, a9, a10);
  result = Function_2021e74(v12);
  switch ( (uchar)result )
  {
    case 0:
    case 1:
      result = *a7;
      if ( *a7 )
      {
        result = 0;
        v14 = 1;
        v11 = 9;
        *a7 = 0;
      }
      break;
    case 2:
      result = *a7;
      if ( *a7 != 1 )
      {
        v14 = 1;
        v11 = 10;
        *a7 = 1;
      }
      break;
    case 3:
      result = *a7;
      if ( *a7 != 2 )
      {
        result = 2;
        v14 = 1;
        v11 = 8;
        *a7 = 2;
      }
      break;
    default:
      break;
  }
  if ( v14 )
  {
    if ( *a11 )
      free(*a11);
    *a11 = Function_21d27e0(*v16, v11, &v17, a8);
    result = Function_201dc68(31, 32 * a6, *(uint *)(v17 + 12), 32);
    if ( !result )
      result = ErrorHandler();
  }
  return result;
}

//----- (021E8C94) --------------------------------------------------------
int __fastcall Function_21e8c94(int a1, int *a2, int a3, int a4, char a5)
{
  int v5;
  int *v6;
  char v7;
  uint v8;
  bool v9;
  uchar v10;
  uint *v11;
  int result;

  v5 = a1;
  v6 = a2;
  v7 = a4;
  Function_21d1498(a1, a2, a3, a4);
  v8 = Function_2021e74(v5);
  v10 = __OFSUB__(v8, 2);
  v9 = (int)(v8 - 2) < 0;
  v11 = (uint *)*v6;
  if ( v9 ^ v10 )
    result = Function_2012ac0(v11, v7);
  else
    result = Function_2012ac0(v11, a5);
  return result;
}

//----- (021E8CBC) --------------------------------------------------------
int __fastcall Function_21e8cbc(int *a1, int *a2, int a3, uint a4)
{
  return Function_21e8be8(a1, *a2, a2[1], *(uint *)(a3 + 16), -8, 4, a2 + 10, a4, 4, 1, a2 + 11);
}

//----- (021E8CF0) --------------------------------------------------------
int __fastcall Function_21e8cf0(int result)
{
  if ( dword_21BF6C0 & 1 )
    *(uint *)(result + 20) = 1;
  return result;
}

//----- (021E8D04) --------------------------------------------------------
int __fastcall Function_21e8d04(int a1, int a2)
{
  int v2;
  int result;

  v2 = a1;
  result = Function_21e33bc(*(uint *)(a2 + 8));
  if ( result == 1 )
    result = Function_21e8d28(v2, 128, 144, 228, 64);
  return result;
}

//----- (021E8D28) --------------------------------------------------------
int __fastcall Function_21e8d28(int *a1)
{
  return Function_21d2574(*a1);
}

//----- (021E8D3C) --------------------------------------------------------
BOOL __fastcall Function_21e8d3c(int a1)
{
  return Function_21df7a0(*(uint **)(a1 + 12), 1);
}

//----- (021E8D48) --------------------------------------------------------
int *__fastcall Function_21_21e8d48(int a1)
{
  int v1;
  int *v2;
  uint v3;
  int v4;

  v1 = a1;
  v2 = (int *)malloc(*(uint *)(a1 + 12), 488);
  Call_FillMemWithValue(v2, 0, 0x1E8u);
  v3 = GetPkmnData(*(int **)(v1 + 16), 5u, 0);
  v4 = GetPkmnData(*(int **)(v1 + 16), 0x70u, 0);
  if ( v3 == 487 )
    Function_2098988(v4);
  else
    Function_2098988(1);
  Function_21e8e0c(v2, v1);
  Function_21e98d8(v2[2], v2[3]);
  Function_21e98f8(v2[2], v2[3], 10, 15, 0, 0, 0);
  v2[112] = (int)AddTaskToTaskList1((int)Function_21e9828, (int)v2, 0);
  return v2;
}

//----- (021E8DD0) --------------------------------------------------------
uint __fastcall Function_21_21e8dd0(int a1)
{
  int v1;

  v1 = a1;
  Function_21e900c();
  Call_RemoveTaskFromTaskList(*(int **)(v1 + 448));
  return free(v1);
}

//----- (021E8DEC) --------------------------------------------------------
BOOL __fastcall Function_21_21e8dec(int a1)
{
  return *(uint *)(a1 + 440) == 4;
}

//----- (021E8E00) --------------------------------------------------------
int __fastcall Function_21_21e8e00(int a1)
{
  return *(uint *)(a1 + 12);
}

//----- (021E8E04) --------------------------------------------------------
int __fastcall Function_21_21e8e04(int result, int a2)
{
  *(uint *)(result + 484) = a2;
  return result;
}

//----- (021E8E0C) --------------------------------------------------------
uint __fastcall Function_21e8e0c(int *a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v12;
  int v13;
  int v14;
  int v15;

  v4 = a2;
  v5 = a1;
  v6 = LoadFromNARC_8(69, *(uint *)(a2 + 12), a3, a4);
  v5[111] = GetPkmnData(*(int **)(v4 + 16), 5u, 0);
  v7 = GetPkmnData(*(int **)(v4 + 16), 0x70u, 0);
  *v5 = *(uint *)v4;
  v5[78] = (int)Function_20095c4(32, (int)(v5 + 4), *(uint *)(v4 + 12), v8);
  Function_2022014(*(uint *)(v4 + 12));
  Function_21e9a0c(*(uint *)(v4 + 12));
  v5[3] = Function_21e99e0(*(uint *)(v4 + 8), *(uint *)(v4 + 16), 48, 72, *(uint *)(v4 + 12));
  v5[2] = *(uint *)(v4 + 4);
  v12 = v5[78];
  v13 = *v5;
  v14 = 3;
  v15 = *(uint *)(v4 + 12);
  v5[83] = Function_21d4c0c(&v12);
  Function_21e90b0(*v5, *(uint *)(v4 + 12));
  G2x_SetBlendBrightness_(&REG_BLDCNT, 63, -16);
  v5[1] = Function_21e91b0(*v5, *(uint *)(v4 + 12));
  Function_21e9208(v5 + 79, *(uint *)(v4 + 12));
  Function_21d2b88((int)(v5 + 84), v5 + 79, *(uint *)(v4 + 12), (int)v6);
  Function_21d2d88(v5 + 84, v5[78], v5 + 79, *(uint *)(v4 + 12), 2);
  Function_21e9240(v5 + 84, v5[83], *(uint *)(v4 + 12), v5[111], *(uint *)(v4 + 20));
  Function_21d1858((uint **)v5 + 84, 172, 32, v9);
  Function_21d2e44((uint *)v5 + 84, 1);
  v10 = v5[111];
  if ( v10 == 487 && v7 > 0 )
    v10 = 11;
  Function_21e9458(v5 + 96, v5 + 79, v10, *(uint *)(v4 + 12));
  Function_21e94b0(v5 + 96, v5[78], v5 + 79, *(uint *)(v4 + 12));
  Function_21e95bc(v5 + 103, v5 + 79, v5[111], *(uint *)(v4 + 12), v6);
  Function_21e95f8(v5 + 103, v5[78], v5 + 79, *(uint *)(v4 + 12), v5[111]);
  Function_21e9504(v5 + 101, v5[78], v5 + 79, *(uint *)(v4 + 12), v5 + 105);
  Function_21e9560(v5 + 101, v5[83], *(uint *)(v4 + 12), v5[111], v5[88]);
  Function_21e96a8(*v5, *(uint *)(v4 + 12), v6);
  Function_21e97c4(*v5, *(uint *)(v4 + 12), v6);
  Function_21e9968(v5[1], *(uint *)(v4 + 12), v5[111]);
  Function_21e9a40(v5 + 113, *(uint *)(v4 + 12), *(uint *)(v4 + 20), v6);
  v5[121] = 1;
  return Call_FS_CloseFile(v6);
}

//----- (021E900C) --------------------------------------------------------
int __fastcall Function_21e900c(int a1)
{
  int v1;
  uint v2;

  v1 = a1;
  Function_21e9ac8(a1 + 452);
  Function_21e968c(v1 + 412);
  Function_21e95ec(v1 + 412, v1 + 316);
  Function_21e95b0(v1 + 404);
  Function_21e9554(v1 + 404);
  Function_21e94f8(v1 + 384);
  Function_21e94a4(v1 + 384, v1 + 316);
  Function_21e92b0(v1 + 336);
  Function_21d2e1c((int *)(v1 + 336));
  Function_21d2c58(v1 + 336, (int **)(v1 + 316));
  Function_21e9228(v1 + 316);
  Function_2021964(*(int **)(v1 + 312));
  Function_21e91f0(*(uint *)(v1 + 4));
  Function_21e9194(*(uint *)v1);
  v2 = Function_21d4c6c(*(int **)(v1 + 332));
  return Function_21e9a38(v2);
}

//----- (021E90B0) --------------------------------------------------------
int __fastcall Function_21e90b0(int a1, uint a2)
{
  uint *v2;
  uint v3;
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

  v2 = (uint *)a1;
  v3 = a2;
  v19 = 0;
  v20 = 0;
  v21 = 2048;
  v22 = 0;
  v23 = 16777217;
  v24 = 256;
  v25 = 0;
  Function_2019044(a1, 1);
  Function_20183c4(v2, 1u, &v19, 0);
  Function_2019690(1u, 32, 0, v3);
  Function_2019ebc(v2, 1u);
  v12 = 0;
  v13 = 0;
  v14 = 2048;
  v15 = 0;
  v16 = 50397185;
  v17 = 512;
  v18 = 0;
  Function_2019044((int)v2, 2);
  Function_20183c4(v2, 2u, &v12, 0);
  Function_2019690(2u, 32, 0, v3);
  Function_2019ebc(v2, 2u);
  Function_2019060(0, 0);
  Function_201ff0c(1u, 1);
  Function_2019044((int)v2, 0);
  v5 = 0;
  v6 = 0;
  v7 = 2048;
  v8 = 0;
  v9 = 84017153;
  v10 = 768;
  v11 = 0;
  Function_2019044((int)v2, 3);
  Function_20183c4(v2, 3u, &v5, 0);
  Function_2019690(3u, 32, 0, v3);
  return Function_2019ebc(v2, 3u);
}

//----- (021E9194) --------------------------------------------------------
int __fastcall Function_21e9194(int a1)
{
  int v1;

  v1 = a1;
  Function_2019044(a1, 1);
  Function_2019044(v1, 2);
  return Function_2019044(v1, 3);
}

//----- (021E91B0) --------------------------------------------------------
int __fastcall Function_21e91b0(uint *a1, uint a2)
{
  uint *v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = Function_201a778(a2, 1);
  Function_201a7e8(v2, v3, 1, 0, 0, 0x20u, 0x20u, 12, 0);
  Function_201ada4_ClearTextBox(v3, 0);
  Function_201a954(v3, v4);
  return v3;
}

//----- (021E91F0) --------------------------------------------------------
uint __fastcall Function_21e91f0(int a1)
{
  int v1;

  v1 = a1;
  Function_201acf4(a1);
  Function_201a8fc(v1);
  return Function_201a928(v1, 1);
}

//----- (021E9208) --------------------------------------------------------
int **__fastcall Function_21e9208(int ***a1, uint a2)
{
  int ***v2;
  uint v3;
  int *v4;
  int **result;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    result = Function_2009714(8, v4, v3);
    v4 = (int *)((char *)v4 + 1);
    *v2 = result;
    ++v2;
  }
  while ( (int)v4 < 4 );
  return result;
}

//----- (021E9228) --------------------------------------------------------
uint __fastcall Function_21e9228(int **a1)
{
  int v1;
  int **v2;
  uint result;

  v1 = 0;
  v2 = a1;
  do
  {
    result = Function_2009754(*v2);
    ++v1;
    *v2 = 0;
    ++v2;
  }
  while ( v1 < 4 );
  return result;
}

//----- (021E9240) --------------------------------------------------------
uint __fastcall Function_21e9240(int a1, int a2, int a3, int a4, int a5)
{
  int *v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v14;
  int v15;
  uchar *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;

  v5 = (int *)a1;
  v6 = *(int **)(a1 + 16);
  v7 = a2;
  v14 = a2;
  v8 = a3;
  v9 = a4;
  v16 = Function_200a72c(v6, 0);
  v17 = *v5;
  v18 = -64;
  v19 = -8;
  v20 = 2;
  v21 = 0;
  v22 = 1;
  v23 = v8;
  if ( a5 )
    v11 = Function_21d170c(v7, v8, v9);
  else
    v11 = Function_21d172c(v7, v8, v9, v10);
  v12 = v11;
  v15 = v11;
  Function_21d22f8((int)v5, (int)&v14, 0, v9, a5);
  return Function_21d4da0(v12);
}

//----- (021E92B0) --------------------------------------------------------
int **__fastcall Function_21e92b0(int a1)
{
  int v1;
  int **result;

  v1 = a1;
  result = *(int ***)(a1 + 8);
  if ( result )
  {
    Function_21d4d1c(result);
    result = 0;
    *(uint *)(v1 + 8) = 0;
  }
  return result;
}

//----- (021E92C4) --------------------------------------------------------
int *__fastcall Function_21e92c4(int a1, int *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10;
  int v11;
  int *v12;
  int v13;
  int *v14;
  int *v15;
  int *result;

  v10 = a4;
  v11 = a3;
  v12 = a2;
  v13 = a1;
  v14 = Function_200985c(*a2, a4, a5, 1, a10, 1, a3);
  *(uint *)v13 = v14;
  Function_200a3dc(v14);
  Function_2009d4c(*(int **)v13);
  v15 = Function_20098b8(v12[1], v10, a6, 0, a10, 1, a9, v11);
  *(uint *)(v13 + 4) = v15;
  Function_200a640(v15);
  Function_2009d4c(*(int **)(v13 + 4));
  *(uint *)(v13 + 8) = Function_2009918(v12[2], v10, a7, 1, a10, 2u, v11);
  result = Function_2009918(v12[3], v10, a8, 1, a10, 3u, v11);
  *(uint *)(v13 + 12) = result;
  return result;
}

//----- (021E9344) --------------------------------------------------------
int *__fastcall Function_21e9344(int a1, int *a2, uint a3, int a4, uint a5, uint a6, uint a7, uint a8, int a9, int a10)
{
  int v10;
  uint v11;
  int *v12;
  int v13;
  int *v14;
  int *v15;
  int *result;

  v10 = a4;
  v11 = a3;
  v12 = a2;
  v13 = a1;
  v14 = Function_2009a4c(*a2, a4, a5, 1, a10, 1, a3);
  *(uint *)v13 = v14;
  Function_200a3dc(v14);
  Function_2009d4c(*(int **)v13);
  v15 = Function_2009b04(v12[1], v10, a6, 0, a10, 1, a9, v11);
  *(uint *)(v13 + 4) = v15;
  Function_200a640(v15);
  Function_2009d4c(*(int **)(v13 + 4));
  *(uint *)(v13 + 8) = Function_2009bc4(v12[2], v10, a7, 1, a10, 2u, v11);
  result = Function_2009bc4(v12[3], v10, a8, 1, a10, 3u, v11);
  *(uint *)(v13 + 12) = result;
  return result;
}

//----- (021E93C4) --------------------------------------------------------
int __fastcall Function_21e93c4(int **a1, int **a2)
{
  int **v2;
  int **v3;

  v2 = a1;
  v3 = a2;
  Function_200a4e4(*a1);
  Function_200a6dc(v2[1]);
  Function_2009d68(*v3, (uint **)*v2);
  Function_2009d68(v3[1], (uint **)v2[1]);
  Function_2009d68(v3[2], (uint **)v2[2]);
  return Function_2009d68(v3[3], (uint **)v2[3]);
}

//----- (021E93F8) --------------------------------------------------------
int __fastcall Function_21e93f8(int **a1, int *a2, int a3, int a4)
{
  int **v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = Function_2009e08(*a1);
  v9 = Function_2009e08(v4[1]);
  v10 = Function_2009e08(v4[2]);
  v11 = Function_2009e08(v4[3]);
  return Function_20093b4(v6, v8, v9, v10, v11, -1, -1, 0, v7, *v5, v5[1], v5[2], v5[3], 0, 0);
}

//----- (021E9458) --------------------------------------------------------
int *__fastcall Function_21e9458(int a1, int *a2, int a3, int a4)
{
  int v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v4 = a3;
  v5 = a1;
  v6 = a2;
  v7 = a4;
  v8 = Function_21d1f90();
  v9 = Function_21d1f94(v4);
  v10 = Function_21d1f98();
  v11 = Function_21d1f9c();
  v12 = Function_21d1fa0();
  return Function_21e92c4(v5 + 4, v6, v7, v8, v9, v10, v11, v12, 1, 4000);
}

//----- (021E94A4) --------------------------------------------------------
int __fastcall Function_21e94a4(int a1, int **a2)
{
  return Function_21e93c4((int **)(a1 + 4), a2);
}

//----- (021E94B0) --------------------------------------------------------
uint __fastcall Function_21e94b0(int a1, int a2, int *a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  uint result;
  char v8;
  int v9;
  char *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v16 = a4;
  v4 = (uint *)a1;
  v5 = a2;
  v6 = a4;
  Function_21e93f8((int **)(a1 + 4), a3, (int)&v8, 2);
  v10 = &v8;
  v14 = 1;
  v13 = 32;
  v11 = 491520;
  v12 = 360448;
  v9 = v5;
  v15 = v6;
  result = Function_2021b90(&v9);
  *v4 = result;
  if ( !result )
    result = ErrorHandler();
  return result;
}

//----- (021E94F8) --------------------------------------------------------
int __fastcall Function_21e94f8(int *a1)
{
  return Function_2021bd4(*a1);
}

//----- (021E9504) --------------------------------------------------------
int __fastcall Function_21e9504(int *a1, int a2, int *a3, int a4, int **a5)
{
  int *v5;
  int v6;
  int v7;
  int v8;
  char v10;
  int v11;
  char *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;

  v18 = a4;
  v5 = a1;
  v6 = a2;
  v7 = a4;
  Function_21e93f8(a5, a3, (int)&v10, 2);
  v12 = &v10;
  v16 = 1;
  v15 = 32;
  v13 = 786432;
  v14 = 212992;
  v11 = v6;
  v17 = v7;
  v8 = Function_2021b90(&v11);
  *v5 = v8;
  if ( !v8 )
    ErrorHandler();
  return Function_2021d6c(*v5, 0x11u);
}

//----- (021E9554) --------------------------------------------------------
int __fastcall Function_21e9554(int *a1)
{
  return Function_2021bd4(*a1);
}

//----- (021E9560) --------------------------------------------------------
uint __fastcall Function_21e9560(int *a1, int a2, int a3, int a4, int *a5)
{
  int v5;
  int *v6;
  int v7;
  int v8;
  int v10;
  int v11;
  uchar *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;

  v20 = a4;
  v5 = a2;
  v6 = a1;
  v7 = a3;
  v8 = Function_21df30c(a2, a4);
  v10 = v5;
  v12 = Function_200a72c(a5, 0);
  v13 = *v6;
  v14 = -78;
  v15 = -8;
  v16 = 2;
  v17 = 31;
  v18 = 1;
  v19 = v7;
  v11 = v8;
  v6[1] = Function_21d4ca0((int)&v10);
  return Function_21d4da0(v8);
}

//----- (021E95B0) --------------------------------------------------------
int __fastcall Function_21e95b0(int a1)
{
  return Function_21d4d1c(*(int ***)(a1 + 4));
}

//----- (021E95BC) --------------------------------------------------------
int *__fastcall Function_21e95bc(int a1, int *a2, int a3, uint a4, int a5)
{
  return Function_21e9344(a1 + 8, a2, a4, a5, 0x5Au, 0xDu, 0x58u, 0x59u, 5, 17000);
}

//----- (021E95EC) --------------------------------------------------------
int __fastcall Function_21e95ec(int a1, int **a2)
{
  return Function_21e93c4((int **)(a1 + 8), a2);
}

//----- (021E95F8) --------------------------------------------------------
int __fastcall Function_21e95f8(int a1, int a2, int *a3, int a4, int a5)
{
  int v5;
  int v6;
  int *v7;
  int v8;
  uint v9;
  uint v10;
  uint v11;
  uint v12;
  int v13;
  int v14;
  int result;
  char v16;
  int v17;
  char *v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  GetPkmnBaseData1(a5, 6u);
  GetPkmnBaseData1(a5, 7u);
  Function_21df180();
  v10 = v9;
  Function_21df180();
  v12 = v11;
  Function_21e93f8((int **)(v5 + 8), v7, (int)&v16, 2);
  v18 = &v16;
  v22 = 1;
  v21 = 32;
  v17 = v6;
  v23 = v8;
  v19 = 696320;
  v20 = 294912;
  v13 = Function_2021b90(&v17);
  *(uint *)v5 = v13;
  Function_2021d6c(v13, v10);
  if ( v10 == v12 )
  {
    result = 0;
    *(uint *)(v5 + 4) = 0;
  }
  else
  {
    v19 = 901120;
    v20 = 294912;
    v14 = Function_2021b90(&v17);
    *(uint *)(v5 + 4) = v14;
    result = Function_2021d6c(v14, v12);
  }
  return result;
}

//----- (021E968C) --------------------------------------------------------
int __fastcall Function_21e968c(int *a1)
{
  int *v1;
  int v2;
  int result;

  v1 = a1;
  v2 = *a1;
  if ( v2 )
    Function_2021bd4(v2);
  result = v1[1];
  if ( result )
    result = Function_2021bd4(result);
  return result;
}

//----- (021E96A8) --------------------------------------------------------
int __fastcall Function_21e96a8(uint *a1, int a2, int a3)
{
  int v3;
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  ushort *v11;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  Function_2007130(a3, 6u, 0, 0, 0, a2);
  Function_20070e8(v3, 0x21u, v4, 3u, 0, 0, 1, v5);
  v6 = Function_20071d0(v3, 0x32u, 1, &v11, v5);
  Function_20198c0((int)v4, 3, (int)(v11 + 6), 0, 0, (uint)*v11 << 21 >> 24, (uint)v11[1] << 21 >> 24);
  free(v6);
  v7 = Function_20071d0(v3, 0x33u, 1, &v11, v5);
  Function_20198c0((int)v4, 3, (int)(v11 + 6), 0, 3u, (uint)*v11 << 21 >> 24, (uint)v11[1] << 21 >> 24);
  free(v7);
  v8 = Function_20071d0(v3, 0x34u, 1, &v11, v5);
  Function_20198c0((int)v4, 3, (int)(v11 + 6), 12, 8u, (uint)*v11 << 21 >> 24, (uint)v11[1] << 21 >> 24);
  free(v8);
  v9 = Function_20071d0(v3, 0x36u, 1, &v11, v5);
  Function_20198c0(
    (int)v4,
    3,
    (int)(v11 + 6),
    0,
    0x10u,
    (uint)*v11 << 21 >> 24,
    (uint)v11[1] << 21 >> 24);
  free(v9);
  return Function_201c3c0((int)v4, 3);
}

//----- (021E97C4) --------------------------------------------------------
int __fastcall Function_21e97c4(uint *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  ushort *v9;
  int v10;

  v10 = a4;
  v4 = (int)a1;
  v5 = a2;
  v6 = a3;
  Function_20070e8(a3, 0x21u, a1, 2u, 0, 0, 1, a2);
  v7 = Function_20071d0(v6, 0x39u, 1, &v9, v5);
  Function_20198c0(v4, 2, (int)(v9 + 6), 0, 0, (uint)*v9 << 21 >> 24, (uint)v9[1] << 21 >> 24);
  free(v7);
  return Function_201c3c0(v4, 2);
}

//----- (021E9828) --------------------------------------------------------
int __fastcall Function_21e9828(int a1, int *a2)
{
  int *v2;

  v2 = a2;
  switch ( (uchar)a2[110] )
  {
    case 0u:
      REG_BLDCNT = 0;
      ++a2[110];
      break;
    case 1u:
      if ( Function_21e9948(a2[2], a2[3]) )
        ++v2[110];
      break;
    case 2u:
      if ( !Function_20059d0(0xEu, a2[111] & 0xFFFF, 511, 511, 511, 0) )
        ErrorHandler();
      ++v2[110];
      break;
    case 3u:
      if ( !Function_200598c() )
        ++v2[110];
      break;
    default:
      break;
  }
  if ( v2[121] )
    Function_21e9a9c(v2 + 113);
  return Function_20219f8(v2[78]);
}

//----- (021E98D8) --------------------------------------------------------
uint __fastcall Function_21e98d8(int a1)
{
  int v1;

  v1 = a1;
  GetPaletteAdresses(a1, 0, 0, 512);
  return GetPaletteAdresses(v1, 2u, 0, 448);
}

//----- (021E98F8) --------------------------------------------------------
int __fastcall Function_21e98f8(int a1, int a2, char a3, uchar a4, uchar a5, char a6, int a7)
{
  int v7;
  uchar v8;

  v7 = a1;
  v8 = a4;
  Function_20086fc(a2, a3, a5, a6, a7);
  Function_2003178(v7, 5, 0xFFFF, a6, v8, a5, (ushort)a7);
  return Function_2003858(v7, 0);
}

//----- (021E9948) --------------------------------------------------------
BOOL __fastcall Function_21e9948(int a1, int a2)
{
  int v2;
  uint v3;
  BOOL v4;

  v2 = a2;
  v3 = Function_200384c(a1);
  v4 = Function_20087b4(v2);
  return !v3 && !v4;
}

//----- (021E9968) --------------------------------------------------------
int __fastcall Function_21e9968(int a1, uint a2, int a3)
{
  uint v3;
  int v4;

  v3 = a2;
  v4 = a1;
  Function_21deb8c(a1, a3, a2, 0, 131328);
  return Function_21e998c(v4, v3);
}

//----- (021E998C) --------------------------------------------------------
ushort *__fastcall Function_21e998c(int a1, uint a2)
{
  int v2;
  uint v3;
  ushort *v4;
  ushort **v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = (ushort *)Function_2023790(64, a2);
  v5 = (ushort **)LoadFromMsgNARC(0, 26, 697, v3);
  Function_200b1b8_CallMsgDecrypt(v5, 0x6Eu, v4);
  Function_201d78c(v2, 0);
  Function_20237bc_FreeMsg((int)v4, v6);
  return Function_200b190((ushort *)v5);
}

//----- (021E99E0) --------------------------------------------------------
int __fastcall Function_21e99e0(uint *a1, int a2, short a3, short a4)
{
  uint *v4;
  short v5;
  short v6;
  char v8;

  v4 = a1;
  v5 = a3;
  v6 = a4;
  Function_2075ef4((int)&v8, a2, 2u);
  return Function_2007c34(v4, &v8, v5, v6, 0, 0, 0, 0);
}

//----- (021E9A0C) --------------------------------------------------------
int *__fastcall Function_21e9a0c(int a1, int a2, int a3, int a4)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v9 = a4;
  v5 = 32;
  v6 = 0x10000;
  v7 = 0x4000;
  v8 = a1;
  return Function_201e88c(&v5, 2097168, 16);
}

//----- (021E9A38) --------------------------------------------------------
int *Function_21e9a38()
{
  return Function_201e958();
}

//----- (021E9A40) --------------------------------------------------------
int __fastcall Function_21e9a40(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int *v9;

  v4 = a1;
  v5 = a2;
  v6 = a4;
  if ( a3 )
    v7 = Function_20071ec(a4, 0x18u, a1 + 2, a2);
  else
    v7 = Function_20071ec(a4, 0x17u, a1 + 2, a2);
  *v4 = v7;
  v4[1] = Function_20071ec(v6, 0x1Au, v4 + 3, v5);
  v8 = 0;
  v4[4] = 0;
  v4[7] = 0;
  v9 = v4;
  do
  {
    v9[5] = 16 * ++v8;
    ++v9;
  }
  while ( v8 < 2 );
  return Function_21e9ae8(v4, v4[7], v9);
}

//----- (021E9A9C) --------------------------------------------------------
int __fastcall Function_21e9a9c(int result)
{
  int v1;
  int v2;
  int v3;

  v1 = *(uint *)(result + 28);
  v2 = *(uint *)(result + 16);
  if ( *(uint *)(result + 4 * v1 + 20) > v2 )
  {
    *(uint *)(result + 16) = v2 + 1;
  }
  else
  {
    *(uint *)(result + 28) = v1 + 1;
    if ( v1 + 1 >= 2 )
    {
      *(uint *)(result + 28) = 0;
      *(uint *)(result + 16) = 0;
    }
    v3 = *(uint *)(result + 28);
    result = Function_21e9b08();
  }
  return result;
}

//----- (021E9AC8) --------------------------------------------------------
int *__fastcall Function_21e9ac8(int *a1)
{
  int *v1;
  int v2;

  v1 = a1;
  v2 = 0;
  do
  {
    free(*v1);
    ++v2;
  }
  while ( v2 < 2 );
  return Call_FillMemWithValue(v1, 0, 0x20u);
}

//----- (021E9AE8) --------------------------------------------------------
uint __fastcall Function_21e9ae8(int a1, int a2)
{
  int v2;
  int v3;

  v2 = 4 * a2;
  v3 = a1 + 8;
  DC_FlushRange(*(uint *)(*(uint *)(a1 + 8 + 4 * a2) + 12), 32);
  return GX_LoadBGPltt(*(uint *)(*(uint *)(v3 + v2) + 12), 0, 0x20u);
}

//----- (021E9B08) --------------------------------------------------------
int __fastcall Function_21e9b08(int a1, int a2)
{
  return Function_201dc68(15, 0, *(uint *)(*(uint *)(a1 + 4 * a2 + 8) + 12), 32);
}

