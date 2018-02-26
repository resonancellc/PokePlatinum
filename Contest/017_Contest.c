//----- (0223B140) --------------------------------------------------------
int __fastcall Function_17_223b140(int a1)
{
  int v1;
  int *v2;
  int v3;
  ushort *v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int *v15;
  int v16;
  int v17;
  int *v18;
  int v19;
  char *v20;
  char v22;

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
  Function_2017fc8(3, 21, 458752);
  v2 = (int *)MallocSomeDataAndStorePtrInOverlayData1c(v1, 5720, 0x15u);
  MI_CpuFill8(v2, 0, 0x1658u);
  v2[2] = Function_223f140(21);
  v3 = LoadPtrToOverWorldDataIn18(v1);
  *v2 = v3;
  *(uint *)(v3 + 364) = v2;
  *(uchar *)(*v2 + 368) = 2;
  v2[3] = *v2;
  Function_223b8c4(v2);
  v4 = MallocFill120(0x15u);
  v2[23] = (int)v4;
  Function_2003858((int)v4, 1);
  Function_2002f70(v2[23], 0, 512, 0x15u);
  Function_2002f70(v2[23], 1, 512, 0x15u);
  Function_2002f70(v2[23], 2, 448, 0x15u);
  Function_2002f70(v2[23], 3, 512, 0x15u);
  v2[12] = Function_2018340(0x15u);
  Function_201dbec(64, 0x15u);
  Function_2017dd4(4, 8);
  v2[519] = Function_223f88c(*v2, v2 + 3, v2 + 140);
  Function_223b728(v2[12]);
  Function_201e3d8();
  Function_201e450(4u);
  Function_2002bb8(2, 0x15u);
  v5 = Function_200c6e4(0x15u);
  v2[9] = (int)v5;
  Function_200c73c(v5, &dword_2252DC8, dword_2252D9C, 32);
  Function_200966c(1, 1048592, v6, v7);
  Function_2009704(1);
  v2[10] = Function_200c704((uint *)v2[9]);
  Function_200c7c0((int *)v2[9], (int **)v2[10], 128);
  Function_200cb30((uint *)v2[9], v2[10], dword_2252DB0);
  v8 = Function_200c738(v2[9]);
  Function_200964c(v8, 0, 1114112, v9);
  v2[4] = Function_200762c(0x15u, v10, v11, v12);
  Function_223b884();
  v2[11] = ((int (__fastcall *)(int))dword_221FCDC[0])(21);
  ((void (*)(void))dword_221FDC0[0])();
  v2[17] = LoadFromMsgNARC(0, 26, 204, 0x15u);
  v2[18] = LoadFromMsgNARC(0, 26, 205, 0x15u);
  v2[19] = LoadFromMsgNARC(0, 26, 210, 0x15u);
  v2[20] = LoadFromMsgNARC(0, 26, 211, 0x15u);
  v2[24] = Function_2012744(8, 0x15u);
  v2[21] = (int)Function_200b358(0x15u);
  v2[22] = Function_2023790(480, 0x15u);
  v15 = LoadFromNARC_8(45, 0x15u, v13, v14);
  v18 = LoadFromNARC_8(46, 0x15u, v16, v17);
  Function_223bba8(v2, v15);
  Function_223bce0(v2, v15);
  Function_223b858(v2);
  Function_2241428(v2);
  Function_223b8f8(v2, v18);
  Function_223ba10(v2, v18);
  Call_FS_CloseFile(v15);
  Call_FS_CloseFile(v18);
  v19 = 0;
  v20 = &v22;
  do
  {
    *(ushort *)v20 = GetPkmnData(*(int **)(*v2 + 4 * *(uchar *)(*v2 + 291)), v19++ + 54, 0);
    v20 += 2;
  }
  while ( v19 < 4 );
  Function_2240a80(v2[519], &v22);
  Function_223f9c4(v2[519]);
  Function_22415e4(v2 + 3);
  Function_2039734();
  Function_200f174(1u, 31, 31, 0, 6, 1, 21);
  v2[1] = (int)AddTaskToTaskList1((int)Function_223b6f0, (int)v2, 0xEA60u);
  *((uchar *)v2 + 2084) = 1;
  Function_201ffd0();
  Function_201ff0c(0x10u, 1);
  Function_201ff74(0x10u, 1);
  Function_2004550(6u, 0x46Fu);
  Function_20959f4(*(uchar *)(*v2 + 369));
  SetMainLoopFunctionCall((int)Function_223b6bc, (int)v2);
  return 1;
}

//----- (0223B444) --------------------------------------------------------
int __fastcall Function_17_223b444(int a1, int *a2)
{
  int *v2;
  int v3;
  uchar *v4;
  int v5;
  int v6;
  short v7;

  v2 = a2;
  v3 = LoadOverlayData1c(a1);
  v4 = *(uchar **)v3;
  Call_PRNG();
  v5 = *v2;
  if ( !*v2 )
  {
    if ( Function_200f2ac() == 1 )
      *v2 = 1;
    return 0;
  }
  if ( v5 == 1 )
  {
    if ( Function_2094edc(*(uchar **)v3) == 1 )
    {
      v6 = ((int (__fastcall *)(int, int))*(&off_2252E10 + *(ushort *)(v3 + 2082)))(v3, v3 + 5704);
      if ( (uint)(v6 - 1) > 1 )
      {
        if ( v6 == 3 && *(uchar *)(v3 + 5712) == 1 )
        {
          *v2 = 2;
          MI_CpuFill8((ushort *)(v3 + 5704), 0, 8u);
          Function_200f174(2u, 32, 32, 0, 6, 1, 21);
          return 0;
        }
      }
      else
      {
        if ( v6 == 1 )
          v7 = *(ushort *)(v3 + 2082) + 1;
        else
          v7 = *(ushort *)(v3 + 5706);
        *(ushort *)(v3 + 2082) = v7;
        MI_CpuFill8((ushort *)(v3 + 5704), 0, 8u);
      }
    }
    Function_224f35c(v3 + 3120);
    Function_224f3d8(v3 + 3120, v3);
    if ( *(uchar *)(v3 + 5712) == 1 && !Function_224f3d0(v3 + 3120) && !Function_2094edc(*(uchar **)v3) )
    {
      *v2 = 2;
      MI_CpuFill8((ushort *)(v3 + 5704), 0, 8u);
      Function_200f174(2u, 32, 32, 0, 6, 1, 21);
    }
    return 0;
  }
  if ( v5 == 2 && *(uchar *)(v3 + 5712) == 1 && Function_200f2ac() == 1 )
    return 1;
  return 0;
}

//----- (0223B580) --------------------------------------------------------
int __fastcall Function_17_223b580(int a1)
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
  int v10;
  int v11;
  int v12;
  int v13;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  Function_20141e4();
  ((void (__fastcall *)(uint))dword_221FDF4[0])(*(uint *)(v2 + 44));
  Function_223b9a4(v2);
  Function_223bad0(v2);
  Function_223bcdc(v2);
  Function_223bce4(v2);
  Function_201a8fc(v2 + 52);
  Function_201ff0c(1u, 0);
  Function_201ff0c(2u, 0);
  Function_2019044(*(uint *)(v2 + 48), 1);
  Function_2019044(*(uint *)(v2 + 48), 2);
  Function_2019044(*(uint *)(v2 + 48), 3);
  Function_223f864(*(uint *)(v2 + 48));
  Function_223f960(*(uint *)(v2 + 2076));
  Function_200d0b0(*(uint *)(v2 + 36), *(int ***)(v2 + 40));
  Function_200c8d4(*(uint *)(v2 + 36));
  Function_201dc3c();
  Function_22416e4(v2 + 12);
  Function_2007b6c(*(uint *)(v2 + 16));
  Function_2002c60(2);
  Function_20127bc(*(uint *)(v2 + 96));
  Function_2002fa0(*(uint *)(v2 + 92), 0);
  Function_2002fa0(*(uint *)(v2 + 92), 1);
  Function_2002fa0(*(uint *)(v2 + 92), 2);
  Function_2002fa0(*(uint *)(v2 + 92), 3);
  Call_free1(*(uint *)(v2 + 92));
  Function_20237bc_FreeMsg(*(uint *)(v2 + 88), v3);
  Function_200b3f0(*(uint **)(v2 + 84), v4);
  Function_200b190(*(ushort **)(v2 + 68));
  Function_200b190(*(ushort **)(v2 + 72));
  Function_200b190(*(ushort **)(v2 + 76));
  Function_200b190(*(ushort **)(v2 + 80));
  free(*(uint *)(v2 + 48));
  Call_RemoveTaskFromTaskList(*(int **)(v2 + 4));
  Function_223f1e0(*(uint *)(v2 + 8));
  Function_201e530();
  FreeSomeDataAndStore0InOverlayData1c(v1);
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  Function_201807c(21);
  Function_2095a24();
  Function_2039794();
  UnloadOverlay(11, v5, v6, v7);
  UnloadOverlay(12, v8, v9, v10);
  UnloadOverlay(22, v11, v12, v13);
  return 1;
}

//----- (0223B6BC) --------------------------------------------------------
int __fastcall Function_223b6bc(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_2008a94(*(uint *)(a1 + 16));
  Function_201dcac();
  Function_200c800();
  Function_2003694(*(uint *)(v1 + 92));
  Function_201c2b8(*(uint *)(v1 + 48));
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (0223B6F0) --------------------------------------------------------
void __fastcall Function_223b6f0(int a1, int a2)
{
  int v2;
  int *v3;
  int v4;

  v2 = a2;
  if ( *(uchar *)(a2 + 2084) == 1 )
  {
    v3 = Function_2007768(*(uint *)(a2 + 16));
    ((void (__fastcall *)(int *))dword_221F8F0[0])(v3);
    Function_200c7ec(*(int **)(v2 + 40));
    Function_200c808();
    GFX_FLUSH = 1;
  }
  v4 = *(uint *)(v2 + 48);
  Function_2038a1c();
}

//----- (0223B728) --------------------------------------------------------
int __fastcall Function_223b728(uint *a1)
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
  int v13;
  int v14;
  int v15;
  int v16;
  char v17;
  char v18;
  char v19;
  char v20;

  v1 = a1;
  Function_201ff00();
  v2 = dword_2252DE8;
  v3 = &v17;
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
  GX_SetBanks((int *)&v17);
  MIi_CpuClear32(0, (uint *)0x6000000, 0x80000);
  MIi_CpuClear32(0, (uint *)0x6200000, 0x20000);
  MIi_CpuClear32(0, (uint *)0x6400000, 0x40000);
  MIi_CpuClear32(0, (uint *)0x6600000, 0x20000);
  v13 = 1;
  v14 = 0;
  v15 = 0;
  v16 = 1;
  SetGraphicsModes(&v13);
  v7 = dword_2252E50;
  v8 = &v18;
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
  Function_20183c4(v1, 1u, (int *)&v18, 0);
  Function_2019ebc(v1, 1u);
  Function_2019184((int)v1, 1u, 0, 0);
  Function_2019184((int)v1, 1u, 3u, 0);
  Function_20183c4(v1, 2u, (int *)&v19, 0);
  Function_2019ebc(v1, 2u);
  Function_2019184((int)v1, 2u, 0, 0);
  Function_2019184((int)v1, 2u, 3u, 0);
  Function_20183c4(v1, 3u, (int *)&v20, 0);
  Function_2019ebc(v1, 3u);
  Function_2019184((int)v1, 3u, 0, 0);
  Function_2019184((int)v1, 3u, 3u, 0);
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 2;
  Function_201ff0c(1u, 1);
  return Function_223f80c(v1);
}

//----- (0223B858) --------------------------------------------------------
int __fastcall Function_223b858(int a1)
{
  return Function_201a7e8(*(uint **)(a1 + 48), a1 + 52, 1, 11, 19, 0x14u, 4u, 13, 768);
}

//----- (0223B884) --------------------------------------------------------
int Function_223b884()
{
  int v0;
  int v1;

  v0 = Function_20a5a2c();
  v1 = Function_20a5a3c();
  if ( !v0 )
    ErrorHandler();
  if ( !v1 )
    ErrorHandler();
  return Function_2014000();
}

//----- (0223B8C4) --------------------------------------------------------
int __fastcall Function_223b8c4(uint *a1)
{
  uint *v1;
  int v2;
  char v3;
  int v4;

  v1 = a1;
  if ( !*a1 )
    ErrorHandler();
  v2 = 0;
  do
  {
    v3 = *(uchar *)(*v1 + v2 + 370);
    v4 = (int)v1 + v2++;
    *(uchar *)(v4 + 561) = v3;
  }
  while ( v2 < 4 );
  return Function_2243c28(v1);
}

//----- (0223B8F8) --------------------------------------------------------
int __fastcall Function_223b8f8(uint *a1, int a2)
{
  int v2;
  uint *v3;

  v2 = a2;
  v3 = a1;
  Function_200cdc4(a1[23], 2u, (uint *)v3[9], v3[10], a2, 0, 0, 6, 1, 33001);
  Function_200cdc4(v3[23], 2u, (uint *)v3[9], v3[10], v2, 9u, 0, 1, 1, 33005);
  Function_2243040(v3[9], v3[10], v2);
  Function_2242fa4(v3);
  Function_2241928(v3 + 3, *v3, v2);
  Function_2241d94(v3 + 3, *(uchar *)(*v3 + 286), v2);
  Function_22419ac(v3[23], v3[9], v3[10], v2);
  Function_2241a24(v3 + 3);
  Function_2241e58(v3[9], v3[10], v2);
  return Function_2242154(v3[9], v3[10], v2);
}

//----- (0223B9A4) --------------------------------------------------------
int __fastcall Function_223b9a4(int a1)
{
  int v1;

  v1 = a1;
  Function_2241e24(a1 + 12);
  Function_224197c(v1 + 12);
  Function_2242fc0(v1);
  Function_22430f8(v1 + 12);
  Function_224308c(*(uint *)(v1 + 40));
  Function_200d080(*(uint *)(v1 + 40), 33001);
  Function_200d080(*(uint *)(v1 + 40), 33005);
  Function_2241a64(v1 + 12);
  Function_2241a00(*(uint *)(v1 + 40));
  Function_2241ea4(*(uint *)(v1 + 40));
  Function_2241ef0(v1 + 12);
  Function_22421e0(*(uint *)(v1 + 40));
  return Function_2242248(v1 + 12);
}

//----- (0223BA10) --------------------------------------------------------
int __fastcall Function_223ba10(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int result;

  v2 = a2;
  v3 = a1;
  Function_200cdc4(*(uint *)(a1 + 92), 3u, *(uint **)(v3 + 36), *(uint *)(v3 + 40), a2, 4u, 0, 3, 2, 33007);
  Function_200cdc4(*(uint *)(v3 + 92), 3u, *(uint **)(v3 + 36), *(uint *)(v3 + 40), v2, 9u, 0, 1, 2, 33008);
  Function_224131c(*(uint *)(v3 + 36), *(uint *)(v3 + 40), v2);
  Function_2241270(*(uint *)(v3 + 36), *(uint *)(v3 + 40), v2);
  Function_224f0f0(*(uint *)(v3 + 36), *(uint *)(v3 + 40));
  v4 = 0;
  do
  {
    v5 = GetPkmnData(*(int **)(*(uint *)v3 + 4 * *(uchar *)(*(uint *)v3 + 291)), v4 + 54, 0);
    if ( v5 )
      v6 = LoadMoveData(v5, 0xBu);
    else
      v6 = 0;
    result = Function_224f0bc(*(uint *)(v3 + 36), *(uint *)(v3 + 40), 2, v6, v4++ + 33014);
  }
  while ( v4 < 4 );
  return result;
}

//----- (0223BAD0) --------------------------------------------------------
int __fastcall Function_223bad0(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  Function_200d080(*(uint *)(a1 + 40), 33007);
  Function_22413b4(*(uint *)(v1 + 40));
  Function_22412f0(*(uint *)(v1 + 40));
  Function_224f140(*(uint *)(v1 + 40));
  v2 = 0;
  do
    result = Function_224f138(*(uint *)(v1 + 40), v2++ + 33014);
  while ( v2 < 4 );
  return result;
}

//----- (0223BB14) --------------------------------------------------------
uint __fastcall Function_223bb14(int a1, int a2, int a3)
{
  int v3;
  int v4;
  uint result;

  v3 = a1;
  v4 = a3;
  if ( a2 )
  {
    Function_2019690(2u, 0x4000, 0, 0x15u);
    Function_2019ebc(*(uint **)(v3 + 48), 2u);
    Function_2019060(1u, 0);
    result = Function_2019060(2u, 1);
  }
  else
  {
    LoadFromNARC_RGCN(45, 3, *(uint **)(a1 + 48), 2u, 0, 0x4000, 1, 21);
    LoadFromNARC_RCSN(45, 5, *(uint **)(v3 + 48), 2u, 0, 0, 1, 21);
    Function_2019060(1u, 1);
    Function_2019060(2u, 0);
    result = Function_2241428(v3);
    if ( v4 == 1 )
      result = Function_201ff0c(4u, 1);
  }
  return result;
}

//----- (0223BBA8) --------------------------------------------------------
uint __fastcall Function_223bba8(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  short v8;
  short v9;
  short v10;
  short v11;
  short v12;
  short v13;

  v2 = a1;
  v3 = a2;
  Function_20070e8(a2, 1u, *(uint **)(a1 + 48), 3u, 0, 0, 1, 21);
  Function_200710c(v3, 2u, *(uint **)(v2 + 48), 3u, 0, 0, 1, 21);
  Function_20070e8(v3, 3u, *(uint **)(v2 + 48), 1u, 0, 0, 1, 21);
  Function_200710c(v3, 4u, *(uint **)(v2 + 48), 1u, 0, 0, 1, 21);
  Function_223bb14(v2, 0, 0);
  Function_2003050(*(uint *)(v2 + 92), 45, 30, 21, 0, 0, 0);
  v4 = malloc(0x15u, 32);
  v5 = malloc(0x15u, 32);
  v6 = Function_2003164(*(uint *)(v2 + 92), 0);
  v7 = Function_200316c(*(uint *)(v2 + 92), 0);
  MIi_CpuCopy16(v6 + 192, v4, 32, v8);
  MIi_CpuCopy16(v6 + 32 * (uchar)byte_22536B4[*(uchar *)(*(uint *)v2 + 291)], v5, 32, v9);
  MIi_CpuCopy16(v4, v6 + 32 * (uchar)byte_22536B4[*(uchar *)(*(uint *)v2 + 291)], 32, v10);
  MIi_CpuCopy16(v5, v6 + 192, 32, v11);
  MIi_CpuCopy16(v4, v7 + 32 * (uchar)byte_22536B4[*(uchar *)(*(uint *)v2 + 291)], 32, v12);
  MIi_CpuCopy16(v5, v7 + 192, 32, v13);
  free(v4);
  return free(v5);
}

//----- (0223BCDC) --------------------------------------------------------
void Function_223bcdc()
{
  ;
}

//----- (0223BCE0) --------------------------------------------------------
void Function_223bce0()
{
  ;
}

//----- (0223BCE4) --------------------------------------------------------
void Function_223bce4()
{
  ;
}

//----- (0223BCE8) --------------------------------------------------------
int __fastcall Function_223bce8(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = a1;
  if ( *(ushort *)a2 )
  {
    if ( Function_224f4b8(
           a1 + 3120,
           *(uchar *)(*(uint *)a1 + 295),
           *(uchar *)(*(uint *)a1 + 291),
           *(uchar *)(*(uint *)a1 + 284)) == 1 )
      return 1;
  }
  else if ( *(uchar *)(*(uint *)a1 + 375) && (v4 = *(uint *)(a2 + 4), v4 < 120) )
  {
    *(uint *)(a2 + 4) = v4 + 1;
  }
  else if ( Function_224f30c(v3 + 3120, v3, 2, 0) == 1 )
  {
    *(uint *)(v2 + 4) = 0;
    ++*(ushort *)v2;
  }
  return 0;
}

//----- (0223BD58) --------------------------------------------------------
int __fastcall Function_223bd58(int *a1, ushort *a2)
{
  int *v2;
  ushort *v3;

  v2 = a1;
  v3 = a2;
  if ( !Function_209590c(*a1) )
    return 1;
  if ( *v3 )
  {
    if ( Function_224f4b8(
           v2 + 780,
           *(uchar *)(*v2 + 295),
           *(uchar *)(*v2 + 291),
           *(uchar *)(*v2 + 284)) == 1 )
      return 1;
  }
  else
  {
    *((uchar *)v2 + 1036) = 0;
    *((uchar *)v2 + 1038) = 0;
    *((uchar *)v2 + 1039) = 0;
    if ( Function_224f30c(v2 + 780, v2, 20, v2 + 202) == 1 )
      ++*v3;
  }
  return 0;
}

//----- (0223BDCC) --------------------------------------------------------
int __fastcall Function_223bdcc(int *a1, ushort *a2)
{
  ushort *v2;
  int *v3;

  v2 = a2;
  v3 = a1;
  if ( *a2 )
  {
    if ( Function_224f4b8(
           a1 + 780,
           *(uchar *)(*a1 + 295),
           *(uchar *)(*a1 + 291),
           *(uchar *)(*a1 + 284)) == 1 )
      return 1;
  }
  else
  {
    if ( Function_209590c(*a1) == 1 )
      *((uchar *)v3 + 1036) = 45;
    else
      *((uchar *)v3 + 1036) = Function_2243944(*(uchar *)(*v3 + 287));
    *((uchar *)v3 + 1038) = 0;
    *((uchar *)v3 + 1039) = 0;
    if ( Function_224f30c(v3 + 780, v3, 20, v3 + 202) == 1 )
      ++*v2;
  }
  return 0;
}

//----- (0223BE54) --------------------------------------------------------
int Function_223be54()
{
  return 1;
}

//----- (0223BE58) --------------------------------------------------------
int __fastcall Function_223be58(int a1, ushort *a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  char *v7;
  int v8;
  char *v9;
  short v10;
  int v11;
  ushort *v13;
  char v14[12];
  int v15;

  v15 = a4;
  v13 = a2;
  v4 = *a2;
  v5 = a1;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      if ( Function_224f4b8(
             a1 + 3120,
             *(uchar *)(*(uint *)a1 + 295),
             *(uchar *)(*(uint *)a1 + 291),
             *(uchar *)(*(uint *)a1 + 284)) == 1 )
        ++*v13;
    }
    else
    {
      if ( v4 != 2 )
      {
        Function_2245f44();
        return 1;
      }
      Function_2246ecc();
      v6 = *(uchar *)(*(uint *)v5 + 295);
      if ( v6 < 4 )
      {
        v7 = &v14[2 * v6];
        v8 = v5 + 2 * v6;
        v9 = &v14[v6];
        do
        {
          v10 = *(ushort *)v7;
          v7 += 2;
          *(ushort *)(v8 + 566) = v10;
          v11 = v5 + v6++;
          *(uchar *)(v11 + 574) = v9[8];
          v8 += 2;
          ++v9;
        }
        while ( v6 < 4 );
      }
      ++*v13;
    }
  }
  else if ( Function_224f30c(a1 + 3120, a1, 8, 0) == 1 )
  {
    ++*v13;
  }
  return 0;
}

//----- (0223BF1C) --------------------------------------------------------
int __fastcall Function_223bf1c(uchar *a1)
{
  uchar *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v8;

  v1 = a1;
  v2 = (uchar)a1[(uchar)a1[565] + 561];
  v1[808] = v2;
  v8 = v2;
  v1[809] = v1[565];
  v3 = (int)&v1[v2];
  v1[810] = v1[v2 + 574];
  v4 = 0;
  v5 = 811;
  v1[811] = 0;
  if ( (int)(uchar)v1[565] > 0 )
  {
    v5 = 574;
    do
    {
      if ( v1[(uchar)v1[v4 + 561] + 574] == *(uchar *)(v3 + 574) )
        v1[811] = 1;
      ++v4;
    }
    while ( v4 < (uchar)v1[565] );
  }
  Function_2243120(v1, v1 + 1024, v8, v5);
  Function_2243120(v1, v1 + 1030, v8, v6);
  return 1;
}

//----- (0223BFB0) --------------------------------------------------------
int __fastcall Function_223bfb0(int a1, ushort *a2)
{
  ushort *v2;

  v2 = a2;
  if ( *a2 )
  {
    if ( Function_224f4b8(
           a1 + 3120,
           *(uchar *)(*(uint *)a1 + 295),
           *(uchar *)(*(uint *)a1 + 291),
           *(uchar *)(*(uint *)a1 + 284)) == 1 )
      return 1;
  }
  else if ( Function_224f30c(a1 + 3120, a1, 4, a1 + 808) == 1 )
  {
    ++*v2;
  }
  return 0;
}

//----- (0223C004) --------------------------------------------------------
int __fastcall Function_223c004(uchar *a1, ushort *a2)
{
  ushort *v2;
  uchar *v3;

  v2 = a2;
  v3 = a1;
  if ( *a2 )
  {
    if ( Function_224f4b8(
           a1 + 3120,
           *(uchar *)(*(uint *)a1 + 295),
           *(uchar *)(*(uint *)a1 + 291),
           *(uchar *)(*(uint *)a1 + 284)) == 1 )
    {
      v3[1036] = 0;
      return 1;
    }
  }
  else
  {
    a1[1036] = 0;
    if ( Function_224f30c(a1 + 3120, a1, 6, a1 + 808) == 1 )
      ++*v2;
  }
  return 0;
}

//----- (0223C068) --------------------------------------------------------
int __fastcall Function_223c068(uchar *a1, ushort *a2)
{
  ushort *v2;
  uchar *v3;
  char v4;

  v2 = a2;
  v3 = a1;
  if ( !*a2 )
  {
    a1[1036] = 4;
    if ( a1[811] == 1 )
      v4 = 5;
    else
      v4 = 0;
    a1[1037] = v4;
    Function_22460dc(a1, a1 + 824, a1[808]);
    ++*v2;
    goto LABEL_8;
  }
  if ( *a2 == 1 )
  {
LABEL_8:
    if ( Function_224f30c(v3 + 3120, v3, 7, v3 + 808) == 1 )
      ++*v2;
    return 0;
  }
  if ( Function_224f4b8(
         a1 + 3120,
         *(uchar *)(*(uint *)a1 + 295),
         *(uchar *)(*(uint *)a1 + 291),
         *(uchar *)(*(uint *)a1 + 284)) == 1 )
  {
    v3[1036] = 0;
    v3[1037] = 0;
    return 1;
  }
  return 0;
}

//----- (0223C100) --------------------------------------------------------
int __fastcall Function_223c100(uchar *a1, ushort *a2)
{
  ushort *v2;
  uint v3;
  uchar *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int result;

  v2 = a2;
  v3 = *a2;
  v4 = a1;
  if ( v3 <= 0xC )
    JUMPOUT(__CS__, *((short *)&off_223C11A + v3) + 35897628);
  switch ( (uchar)v3 )
  {
    case 0:
      v5 = a1[808];
      Function_2245fb4();
      ++*v2;
      goto LABEL_27;
    case 1:
      v6 = a1[808];
      Function_2246138();
      ++*v2;
      goto LABEL_6;
    case 2:
LABEL_6:
      if ( Function_224f30c(v4 + 3120, v4, 10, v4 + 808) == 1 )
        ++*v2;
      goto LABEL_27;
    case 3:
      if ( Function_224f4b8(
             a1 + 3120,
             *(uchar *)(*(uint *)a1 + 295),
             *(uchar *)(*(uint *)a1 + 291),
             *(uchar *)(*(uint *)a1 + 284)) == 1 )
        ++*v2;
      goto LABEL_27;
    case 4:
      v7 = a1[808];
      v8 = a1[809];
      Function_2246160();
      ++*v2;
      goto LABEL_12;
    case 5:
LABEL_12:
      if ( Function_224f30c(v4 + 3120, v4, 11, v4 + 808) == 1 )
        ++*v2;
      goto LABEL_27;
    case 6:
      if ( Function_224f4b8(
             a1 + 3120,
             *(uchar *)(*(uint *)a1 + 295),
             *(uchar *)(*(uint *)a1 + 291),
             *(uchar *)(*(uint *)a1 + 284)) == 1 )
        ++*v2;
      goto LABEL_27;
    case 7:
      v9 = a1[808];
      v10 = a1[809];
      Function_2246228();
      ++*v2;
      goto LABEL_17;
    case 8:
LABEL_17:
      if ( Function_224f30c(v4 + 3120, v4, 12, v4 + 808) == 1 )
        ++*v2;
      goto LABEL_27;
    case 9:
      if ( Function_224f4b8(
             a1 + 3120,
             *(uchar *)(*(uint *)a1 + 295),
             *(uchar *)(*(uint *)a1 + 291),
             *(uchar *)(*(uint *)a1 + 284)) == 1 )
        ++*v2;
      goto LABEL_27;
    case 0xA:
      v11 = a1[808];
      Function_22463c4();
      ++*v2;
      goto LABEL_22;
    case 0xB:
LABEL_22:
      if ( Function_224f30c(v4 + 3120, v4, 13, v4 + 808) == 1 )
        ++*v2;
      goto LABEL_27;
    case 0xC:
      if ( Function_224f4b8(
             a1 + 3120,
             *(uchar *)(*(uint *)a1 + 295),
             *(uchar *)(*(uint *)a1 + 291),
             *(uchar *)(*(uint *)a1 + 284)) == 1 )
        ++*v2;
LABEL_27:
      result = 0;
      break;
    default:
      v12 = a1[808];
      Function_2246018();
      result = 1;
      break;
  }
  return result;
}

//----- (0223C2DC) --------------------------------------------------------
int __fastcall Function_223c2dc(int a1, ushort *a2)
{
  ushort *v2;

  v2 = a2;
  if ( *a2 )
  {
    if ( Function_224f4b8(
           a1 + 3120,
           *(uchar *)(*(uint *)a1 + 295),
           *(uchar *)(*(uint *)a1 + 291),
           *(uchar *)(*(uint *)a1 + 284)) == 1 )
      return 1;
  }
  else if ( Function_224f30c(a1 + 3120, a1, 5, a1 + 808) == 1 )
  {
    ++*v2;
  }
  return 0;
}

//----- (0223C330) --------------------------------------------------------
int __fastcall Function_223c330(int a1, int a2)
{
  if ( (uchar)++*(uchar *)(a1 + 565) >= 4u )
    return 1;
  *(ushort *)(a2 + 2) = 5;
  return 2;
}

//----- (0223C350) --------------------------------------------------------
int __fastcall Function_223c350(uchar *a1, ushort *a2)
{
  ushort *v2;
  uint v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  char *v9;
  char *v10;
  char *v11;
  int v12;
  char *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  char *v19;
  char *v20;
  int v21;
  int v22;
  char *v23;
  char *v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int result;
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
  uchar *v43;
  char v44[48];
  char v45[8];
  char v46;
  char v47[8];
  char v48;

  v2 = a2;
  v3 = *a2;
  v43 = a1;
  if ( v3 <= 0x18 )
    JUMPOUT(__CS__, (char *)&off_223C36C + *((short *)&off_223C36C + v3) + 2);
  switch ( (uchar)a1 )
  {
    case 0:
      *v2 = v3 + 1;
      return 0;
    case 1:
      a1[808] = a1[*((uint *)v2 + 1) + 561];
      a1[809] = *((uint *)v2 + 1);
      ++*v2;
      goto LABEL_6;
    case 2:
LABEL_6:
      v4 = (uchar)a1[808];
      v5 = (uchar)a1[809];
      if ( Function_22462a4() == 1 )
        ++*v2;
      else
        *v2 = 5;
      return 0;
    case 3:
      if ( Function_224f30c(a1 + 3120, a1, 14, a1 + 808) == 1 )
        ++*v2;
      return 0;
    case 4:
      if ( Function_224f4b8(
             a1 + 3120,
             *(uchar *)(*(uint *)a1 + 295),
             *(uchar *)(*(uint *)a1 + 291),
             *(uchar *)(*(uint *)a1 + 284)) == 1 )
        ++*v2;
      return 0;
    case 5:
      v6 = *((uint *)v2 + 1) + 1;
      *((uint *)v2 + 1) = v6;
      if ( v6 < 4 )
      {
        *v2 = 1;
      }
      else
      {
        *((uint *)v2 + 1) = 0;
        ++*v2;
      }
      return 0;
    case 6:
      v7 = 0;
      do
      {
        Function_2246518();
        ++v7;
      }
      while ( v7 < 4 );
      ++*v2;
      return 0;
    case 7:
      v8 = 0;
      v9 = v47;
      v10 = v45;
      v11 = v44;
      do
      {
        v12 = 0;
        *(uint *)v9 = 0;
        *(uint *)v10 = v8;
        v13 = v11;
        do
        {
          ++v12;
          *(uint *)v13 = 4;
          v13 += 4;
        }
        while ( v12 < 4 );
        ++v8;
        v9 += 4;
        v10 += 4;
        v11 += 16;
      }
      while ( v8 < 3 );
      v14 = 0;
      break;
    case 8:
LABEL_46:
      ++*v2;
      return 0;
    case 9:
      if ( Function_224f30c(a1 + 3120, a1, 16, a1 + 808) == 1 )
        ++*v2;
      return 0;
    case 0xA:
      if ( Function_224f4b8(
             a1 + 3120,
             *(uchar *)(*(uint *)a1 + 295),
             *(uchar *)(*(uint *)a1 + 291),
             *(uchar *)(*(uint *)a1 + 284)) == 1 )
      {
        v43[1036] = 0;
        v43[1037] = 0;
        ++*v2;
      }
      return 0;
    case 0xB:
      v35 = *((uint *)v2 + 1) + 1;
      *((uint *)v2 + 1) = v35;
      if ( v35 >= 3 )
        ++*v2;
      else
        *v2 = 7;
      return 0;
    case 0xC:
      *((uint *)v2 + 1) = 0;
      ++*v2;
      return 0;
    case 0xD:
      a1[808] = a1[*((uint *)v2 + 1) + 561];
      a1[809] = *((uint *)v2 + 1);
      ++*v2;
      goto LABEL_56;
    case 0xE:
LABEL_56:
      v36 = (uchar)a1[808];
      v37 = (uchar)a1[809];
      if ( Function_2246304() )
        ++*v2;
      else
        *v2 = 17;
      return 0;
    case 0xF:
      if ( Function_224f30c(a1 + 3120, a1, 17, a1 + 808) == 1 )
        ++*v2;
      return 0;
    case 0x10:
      if ( Function_224f4b8(
             a1 + 3120,
             *(uchar *)(*(uint *)a1 + 295),
             *(uchar *)(*(uint *)a1 + 291),
             *(uchar *)(*(uint *)a1 + 284)) == 1 )
      {
        v43[1036] = 0;
        v43[1037] = 0;
        ++*v2;
      }
      return 0;
    case 0x11:
      v38 = *((uint *)v2 + 1) + 1;
      *((uint *)v2 + 1) = v38;
      if ( v38 >= 4 )
        ++*v2;
      else
        *v2 = 13;
      return 0;
    case 0x12:
      *((uint *)v2 + 1) = 0;
      ++*v2;
      return 0;
    case 0x13:
      Function_22460c8(a1 + 824);
      ++*v2;
      goto LABEL_69;
    case 0x14:
LABEL_69:
      v43[808] = v43[*((uint *)v2 + 1) + 561];
      v43[809] = *((uint *)v2 + 1);
      ++*v2;
      goto LABEL_70;
    case 0x15:
LABEL_70:
      v39 = (uchar)v43[808];
      v40 = (uchar)v43[809];
      if ( Function_2246364() == 1 )
        ++*v2;
      else
        *v2 = 24;
      return 0;
    case 0x16:
      if ( Function_224f30c(a1 + 3120, a1, 15, a1 + 808) == 1 )
        ++*v2;
      return 0;
    case 0x17:
      if ( Function_224f4b8(
             a1 + 3120,
             *(uchar *)(*(uint *)a1 + 295),
             *(uchar *)(*(uint *)a1 + 291),
             *(uchar *)(*(uint *)a1 + 284)) == 1 )
        ++*v2;
      return 0;
    case 0x18:
      v41 = *((uint *)v2 + 1) + 1;
      *((uint *)v2 + 1) = v41;
      if ( v41 < 4 )
      {
        *v2 = 20;
      }
      else
      {
        *((uint *)v2 + 1) = 0;
        ++*v2;
      }
      return 0;
    default:
      return 1;
  }
  do
  {
    v15 = (uchar)v43[v14 + 561];
    v16 = 4 * (uchar)v43[v15 + 574];
    ++*(uint *)&v47[v16];
    v17 = 0;
    v18 = 16 * (uchar)v43[v15 + 574];
    v19 = &v44[v18];
    v20 = &v44[v18];
    while ( *(uint *)v20 != 4 )
    {
      ++v17;
      v20 += 4;
      if ( v17 >= 4 )
        goto LABEL_29;
    }
    *(uint *)&v19[4 * v17] = v15;
LABEL_29:
    ++v14;
  }
  while ( v14 < 4 );
  v21 = 0;
  do
  {
    v22 = 2;
    if ( v21 < 2 )
    {
      v23 = &v48;
      v24 = &v46;
      do
      {
        v25 = *(uint *)v23;
        v26 = *((uint *)v23 - 1);
        if ( v26 < *(uint *)v23 )
        {
          *(uint *)v23 = v26;
          *((uint *)v23 - 1) = v25;
          v27 = *(uint *)v24;
          *(uint *)v24 = *((uint *)v24 - 1);
          *((uint *)v24 - 1) = v27;
        }
        --v22;
        v23 -= 4;
        v24 -= 4;
      }
      while ( v22 > v21 );
    }
    ++v21;
  }
  while ( v21 < 2 );
  v43[1040] = *(uint *)&v45[4 * *((uint *)v2 + 1)];
  v28 = 0;
  v29 = 0;
  do
  {
    v30 = (int)&v43[v28];
    v31 = *(uint *)&v44[16 * *(uint *)&v45[4 * *((uint *)v2 + 1)] + v29];
    ++v28;
    v29 += 4;
    *(uchar *)(v30 + 1041) = v31;
  }
  while ( v28 < 4 );
  switch ( (uchar)*(uint *)&v47[4 * *((uint *)v2 + 1)] )
  {
    case 1u:
      v43[1036] = 10;
      goto LABEL_45;
    case 2u:
      v43[1036] = 7;
      goto LABEL_45;
    case 3u:
      v43[1036] = 8;
      goto LABEL_45;
    case 4u:
      v43[1036] = 9;
LABEL_45:
      *(uchar *)(v42 + 1037) = 0;
      v33 = *(uchar *)(v42 + 808);
      Function_2243120(v42, v42 + 1024);
      v34 = *(uchar *)(v42 + 808);
      Function_2243120(v42, v42 + 1030);
      ++*v2;
      goto LABEL_46;
    default:
      *v2 = 12;
      result = 0;
      break;
  }
  return result;
}

//----- (0223C81C) --------------------------------------------------------
int __fastcall Function_223c81c(int a1, ushort *a2)
{
  ushort *v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = a1;
  v4 = (ushort)*a2;
  if ( *a2 )
  {
    if ( v4 == 1 )
    {
      if ( Function_224f30c(v3 + 3120, v3, 18, v3 + 808) == 1 )
        ++*v2;
    }
    else
    {
      if ( v4 != 2 )
        return 1;
      if ( Function_224f4b8(
             v3 + 3120,
             *(uchar *)(*(uint *)v3 + 295),
             *(uchar *)(*(uint *)v3 + 291),
             *(uchar *)(*(uint *)v3 + 284)) == 1 )
        ++*v2;
    }
  }
  else
  {
    *a2 = v4 + 1;
  }
  return 0;
}

//----- (0223C888) --------------------------------------------------------
int __fastcall Function_223c888(uchar *a1, ushort *a2)
{
  ushort *v2;
  uint v3;
  uchar *v4;
  int v5;
  int v6;
  uint *v7;
  int v8;
  uchar *v9;
  int result;

  v2 = a2;
  v3 = *a2;
  v4 = a1;
  if ( v3 <= 6 )
    JUMPOUT(__CS__, *((short *)&off_223C8A2 + v3) + 35899556);
  switch ( (uchar)v3 )
  {
    case 0:
      if ( Function_224f30c(a1 + 3120, a1, 21, a1 + 808) == 1 )
        ++*v2;
      goto LABEL_32;
    case 1:
      if ( Function_224f4b8(
             a1 + 3120,
             *(uchar *)(*(uint *)a1 + 295),
             *(uchar *)(*(uint *)a1 + 291),
             *(uchar *)(*(uint *)a1 + 284)) == 1 )
        ++*v2;
      goto LABEL_32;
    case 2:
      v5 = 0;
      v6 = 0;
      v7 = v4 + 864;
      do
      {
        if ( *v7 << 26 >> 30 )
          ++v5;
        ++v6;
        v7 += 11;
      }
      while ( v6 < 4 );
      if ( v4[560] >= 3u || v5 >= 4 )
        v4[1036] = 0;
      else
        v4[1036] = 42;
      v4[1038] = 0;
      v4[1039] = 0;
      if ( Function_224f30c(v4 + 3120, v4, 20, v4 + 808) == 1 )
        ++*v2;
      goto LABEL_32;
    case 3:
      if ( Function_224f4b8(
             a1 + 3120,
             *(uchar *)(*(uint *)a1 + 295),
             *(uchar *)(*(uint *)a1 + 291),
             *(uchar *)(*(uint *)a1 + 284)) == 1 )
        ++*v2;
      goto LABEL_32;
    case 4:
      Function_2246044();
      Function_2243b0c(v4 + 560);
      v8 = 0;
      v9 = v4;
      do
      {
        ++v8;
        *((ushort *)v9 + 299) = *((ushort *)v9 + 283);
        v9 += 2;
      }
      while ( v8 < 4 );
      ++v4[560];
      ++*v2;
      goto LABEL_32;
    case 5:
      if ( Function_224f30c(a1 + 3120, a1, 19, a1 + 560) == 1 )
        ++*v2;
      goto LABEL_32;
    case 6:
      if ( Function_224f4b8(
             a1 + 3120,
             *(uchar *)(*(uint *)a1 + 295),
             *(uchar *)(*(uint *)a1 + 291),
             *(uchar *)(*(uint *)a1 + 284)) == 1 )
        ++*v2;
LABEL_32:
      result = 0;
      break;
    default:
      if ( a1[560] < 4u )
      {
        a1[565] = 0;
        v2[1] = 3;
      }
      else
      {
        v2[1] = 15;
      }
      result = 2;
      break;
  }
  return result;
}

//----- (0223CA30) --------------------------------------------------------
int __fastcall Function_223ca30(uchar *a1, ushort *a2)
{
  ushort *v2;
  int v3;
  uchar *v4;
  int v5;
  int result;

  v2 = a2;
  switch ( (uchar)*a2 )
  {
    case 0u:
      v3 = 0;
      v4 = a1;
      v5 = 0;
      do
      {
        ++v3;
        *(ushort *)(*(uint *)a1 + v5 + 302) = *((ushort *)v4 + 289);
        v4 += 2;
        v5 += 12;
      }
      while ( v3 < 4 );
      ++*v2;
      goto LABEL_5;
    case 1u:
LABEL_5:
      a1[1036] = 43;
      a1[1037] = 0;
      if ( Function_224f30c(a1 + 3120, a1, 3, a1 + 808) == 1 )
        ++*v2;
      goto LABEL_13;
    case 2u:
      if ( Function_224f4b8(
             a1 + 3120,
             *(uchar *)(*(uint *)a1 + 295),
             *(uchar *)(*(uint *)a1 + 291),
             *(uchar *)(*(uint *)a1 + 284)) == 1 )
        ++*v2;
      goto LABEL_13;
    case 3u:
      if ( Function_224f30c(a1 + 3120, a1, 1, 0) == 1 )
        ++*v2;
      goto LABEL_13;
    default:
      if ( Function_224f4b8(
             a1 + 3120,
             *(uchar *)(*(uint *)a1 + 295) - *(uchar *)(*(uint *)a1 + 375) - 1,
             *(uchar *)(*(uint *)a1 + 291),
             *(uchar *)(*(uint *)a1 + 284)) == 1 )
        result = 3;
      else
LABEL_13:
        result = 0;
      return result;
  }
}

//----- (0223CB1C) --------------------------------------------------------
int __fastcall Function_17_223cb1c(int a1)
{
  int v1;
  int v2;
  int v3;
  ushort *v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int *v15;
  int v16;
  int v17;
  int *v18;

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
  Function_2017fc8(3, 22, 458752);
  v2 = MallocSomeDataAndStorePtrInOverlayData1c(v1, 3944, 0x16u);
  MI_CpuFill8((ushort *)v2, 0, 0xF68u);
  *(uint *)(v2 + 8) = Function_223f140(22);
  v3 = LoadPtrToOverWorldDataIn18(v1);
  *(uint *)v2 = v3;
  *(uint *)(v3 + 364) = v2;
  *(uchar *)(*(uint *)v2 + 368) = 0;
  *(uint *)(v2 + 12) = *(uint *)v2;
  Function_223d390(v2);
  v4 = MallocFill120(0x16u);
  *(uint *)(v2 + 80) = v4;
  Function_2003858((int)v4, 1);
  Function_2002f70(*(uint *)(v2 + 80), 0, 512, 0x16u);
  Function_2002f70(*(uint *)(v2 + 80), 1, 512, 0x16u);
  Function_2002f70(*(uint *)(v2 + 80), 2, 448, 0x16u);
  Function_2002f70(*(uint *)(v2 + 80), 3, 512, 0x16u);
  *(uint *)(v2 + 48) = Function_2018340(0x16u);
  Function_201dbec(64, 0x16u);
  Function_2017dd4(4, 8);
  Function_223d1b8(*(uint *)(v2 + 48));
  Function_201e3d8();
  Function_201e450(4u);
  Function_2002bb8(2, 0x16u);
  v5 = Function_200c6e4(0x16u);
  *(uint *)(v2 + 40) = v5;
  Function_200c73c(v5, (int *)&unk_2252EFC, &dword_2252EB0[1], 32);
  Function_200966c(1, 1048592, v6, v7);
  Function_2009704(1);
  *(uint *)(v2 + 44) = Function_200c704(*(uint **)(v2 + 40));
  Function_200c7c0(*(int **)(v2 + 40), *(int ***)(v2 + 44), 128);
  Function_200cb30(*(uint **)(v2 + 40), *(uint *)(v2 + 44), &dword_2252EB0[6]);
  v8 = Function_200c738(*(uint *)(v2 + 40));
  Function_200964c(v8, 0, 0x100000, v9);
  *(uint *)(v2 + 16) = Function_200762c(0x16u, v10, v11, v12);
  Function_223d350();
  *(uint *)(v2 + 68) = LoadFromMsgNARC(0, 26, 209, 0x16u);
  *(uint *)(v2 + 72) = Function_200b358(0x16u);
  *(uint *)(v2 + 76) = Function_2023790(320, 0x16u);
  v15 = LoadFromNARC_8(45, 0x16u, v13, v14);
  v18 = LoadFromNARC_8(46, 0x16u, v16, v17);
  Function_223d4a8(v2, v15);
  Function_223d5b0(v2, v15);
  Function_223d324(v2);
  Function_223d3b8(v2, v18);
  Function_223d468(v2, v18);
  Call_FS_CloseFile(v15);
  Call_FS_CloseFile(v18);
  Function_20038b0(*(uint *)(v2 + 80), 0, 0, 0x7FFF, 1, 0x100u);
  Function_20038b0(*(uint *)(v2 + 80), 1, 0, 0x7FFF, 1, 0x100u);
  Function_20038b0(*(uint *)(v2 + 80), 2, 0, 0x7FFF, 0, 0xE0u);
  Function_20038b0(*(uint *)(v2 + 80), 3, 0, 0x7FFF, 0, 0x100u);
  Function_2039734();
  Function_200f174(1u, 27, 27, 0, 6, 1, 22);
  *(uint *)(v2 + 4) = AddTaskToTaskList1((int)Function_223d164, v2, 0xEA60u);
  *(uchar *)(v2 + 1272) = 1;
  Function_201ffd0();
  Function_201ff0c(0x10u, 1);
  Function_201ff74(0x10u, 1);
  Function_2004234(0);
  Function_2004550(6u, 0x46Fu);
  Function_20959f4(*(uchar *)(*(uint *)v2 + 369));
  SetMainLoopFunctionCall((int)Function_223d0c8, v2);
  Function_2005748(0x605u);
  return 1;
}

//----- (0223CDDC) --------------------------------------------------------
int __fastcall Function_17_223cddc(int a1, int *a2)
{
  int *v2;
  int v3;
  uchar *v4;
  int v5;
  int v6;
  short v7;

  v2 = a2;
  v3 = LoadOverlayData1c(a1);
  v4 = *(uchar **)v3;
  Call_PRNG();
  v5 = *v2;
  if ( !*v2 )
  {
    if ( Function_200f2ac() == 1 )
    {
      Function_2003178(*(uint *)(v3 + 80), 1, 0xFFFF, 6, 16, 0, 0x7FFF);
      Function_2003178(*(uint *)(v3 + 80), 2, 0xFFFF, 6, 16, 0, 0x7FFF);
      Function_2003178(*(uint *)(v3 + 80), 4, 0x3FFF, 6, 16, 0, 0x7FFF);
      Function_2003178(*(uint *)(v3 + 80), 8, 0xFFFF, 6, 16, 0, 0x7FFF);
      Function_2005748(0x6E5u);
      *v2 = 1;
    }
    return 0;
  }
  if ( v5 == 1 )
  {
    if ( Function_2094edc(*(uchar **)v3) == 1 )
    {
      v6 = ((int (__fastcall *)(int, int))*(&off_2252F44 + *(ushort *)(v3 + 1270)))(v3, v3 + 3860);
      if ( (uint)(v6 - 1) > 1 )
      {
        if ( v6 == 3 && *(uchar *)(v3 + 3868) == 1 )
        {
          *v2 = 2;
          MI_CpuFill8((ushort *)(v3 + 3860), 0, 8u);
          Function_200f174(2u, 16, 36, 0, 6, 1, 22);
          return 0;
        }
      }
      else
      {
        if ( v6 == 1 )
          v7 = *(ushort *)(v3 + 1270) + 1;
        else
          v7 = *(ushort *)(v3 + 3862);
        *(ushort *)(v3 + 1270) = v7;
        MI_CpuFill8((ushort *)(v3 + 3860), 0, 8u);
      }
    }
    Function_224f35c(v3 + 1276);
    Function_224f3d8(v3 + 1276, v3);
    if ( *(uchar *)(v3 + 3868) == 1 && !Function_224f3d0(v3 + 1276) && !Function_2094edc(*(uchar **)v3) )
    {
      *v2 = 2;
      MI_CpuFill8((ushort *)(v3 + 3860), 0, 8u);
      Function_200f174(2u, 16, 36, 0, 6, 1, 22);
    }
    return 0;
  }
  if ( v5 == 2 && *(uchar *)(v3 + 3868) == 1 && Function_200f2ac() == 1 )
    return 1;
  return 0;
}

//----- (0223CF8C) --------------------------------------------------------
int __fastcall Function_17_223cf8c(int a1)
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
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v16;

  v16 = a1;
  v1 = LoadOverlayData1c(a1);
  Function_20141e4();
  Function_223d434(v1);
  Function_223d498(v1);
  Function_223d5ac(v1);
  Function_223d608(v1);
  Function_201a8fc(v1 + 52);
  Function_201ff0c(1u, 0);
  Function_201ff0c(2u, 0);
  Function_2019044(*(uint *)(v1 + 48), 1);
  Function_2019044(*(uint *)(v1 + 48), 2);
  Function_2019044(*(uint *)(v1 + 48), 3);
  Function_2019120(4u, 0);
  Function_2019044(*(uint *)(v1 + 48), 4);
  Function_200d0b0(*(uint *)(v1 + 40), *(int ***)(v1 + 44));
  Function_200c8d4(*(uint *)(v1 + 40));
  Function_201dc3c();
  v2 = 0;
  v3 = v1;
  do
  {
    if ( *(uint *)(v3 + 3872) )
      ((void (*)(void))dword_225B020[0])();
    ++v2;
    v3 += 16;
  }
  while ( v2 < 4 );
  Function_2247734(v1 + 12);
  Function_2247918(v1);
  Function_2007b6c(*(uint *)(v1 + 16));
  Function_2002c60(2);
  Function_2002fa0(*(uint *)(v1 + 80), 0);
  Function_2002fa0(*(uint *)(v1 + 80), 1);
  Function_2002fa0(*(uint *)(v1 + 80), 2);
  Function_2002fa0(*(uint *)(v1 + 80), 3);
  Call_free1(*(uint *)(v1 + 80));
  Function_200b3f0(*(uint **)(v1 + 72), v4);
  Function_20237bc_FreeMsg(*(uint *)(v1 + 76), v5);
  Function_200b190(*(ushort **)(v1 + 68));
  free(*(uint *)(v1 + 48));
  Call_RemoveTaskFromTaskList(*(int **)(v1 + 4));
  Function_223f1e0(*(uint *)(v1 + 8));
  Function_201e530();
  FreeSomeDataAndStore0InOverlayData1c(v16);
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  Function_201807c(22);
  Function_2095a24();
  Function_2039794();
  UnloadOverlay(11, v6, v7, v8);
  UnloadOverlay(12, v9, v10, v11);
  UnloadOverlay(22, v12, v13, v14);
  return 1;
}

//----- (0223D0C8) --------------------------------------------------------
int __fastcall Function_223d0c8(int a1)
{
  int v1;
  short v2;
  short v3;
  short v4;
  short v5;
  int v6;
  int v7;
  int result;

  v1 = a1;
  v2 = *(uchar *)(a1 + 3937);
  v3 = *(uchar *)(a1 + 3939);
  WIN0_X1 = (*(uchar *)(v1 + 3936) << 8) & 0xFF00 | *(uchar *)(v1 + 3938);
  WIN0_Y1 = (v2 << 8) & 0xFF00 | v3;
  v4 = *(uchar *)(a1 + 3943);
  v5 = *(uchar *)(a1 + 3941);
  WIN1_X1 = *(uchar *)(a1 + 3942) | (*(uchar *)(a1 + 3940) << 8) & 0xFF00;
  WIN1_Y1 = (v5 << 8) & 0xFF00 | v4;
  Function_2008a94(*(uint *)(a1 + 16));
  v6 = 0;
  v7 = v1;
  do
  {
    if ( *(uint *)(v7 + 3872) )
      ((void (*)(void))dword_225B06C[0])();
    ++v6;
    v7 += 16;
  }
  while ( v6 < 4 );
  Function_201dcac();
  Function_200c800();
  Function_2003694(*(uint *)(v1 + 80));
  Function_201c2b8(*(uint *)(v1 + 48));
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (0223D164) --------------------------------------------------------
void __fastcall Function_223d164(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v2 = a2;
  if ( *(uchar *)(a2 + 1272) == 1 )
  {
    Function_2007768(*(uint *)(a2 + 16));
    v3 = 0;
    v4 = v2;
    do
    {
      v5 = *(uint *)(v4 + 3872);
      if ( v5 )
        v5 = ((int (*)(void))dword_225AFF8[0])();
      ++v3;
      v4 += 16;
    }
    while ( v3 < 4 );
    ((void (__fastcall *)(int))dword_221F8F0[0])(v5);
    Function_200c7ec(*(int **)(v2 + 44));
    Function_200c808();
    GFX_FLUSH = 1;
  }
  v6 = *(uint *)(v2 + 48);
  Function_2038a1c();
}

//----- (0223D1B8) --------------------------------------------------------
void __fastcall Function_223d1b8(uint *a1, int a2, int a3, int a4)
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
  char v26;
  char v27;
  char v28;
  char v29;
  int v30;

  v30 = a4;
  v4 = a1;
  Function_201ff00();
  v5 = dword_2252F1C;
  v6 = &v26;
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
  GX_SetBanks((int *)&v26);
  MIi_CpuClear32(0, (uint *)0x6000000, 0x80000);
  MIi_CpuClear32(0, (uint *)0x6200000, 0x20000);
  MIi_CpuClear32(0, (uint *)0x6400000, 0x40000);
  MIi_CpuClear32(0, (uint *)0x6600000, 0x20000);
  v22 = 1;
  v23 = 0;
  v24 = 0;
  v25 = 1;
  SetGraphicsModes(&v22);
  v10 = dword_2252F70;
  v11 = &v27;
  v12 = 10;
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
  *(uint *)v11 = *v10;
  Function_20183c4(v4, 1u, (int *)&v27, 0);
  Function_2019ebc(v4, 1u);
  Function_2019184((int)v4, 1u, 0, 0);
  Function_2019184((int)v4, 1u, 3u, 0);
  Function_20183c4(v4, 2u, (int *)&v28, 0);
  Function_2019ebc(v4, 2u);
  Function_2019184((int)v4, 2u, 0, 0);
  Function_2019184((int)v4, 2u, 3u, 0);
  Function_20183c4(v4, 3u, (int *)&v29, 0);
  Function_2019ebc(v4, 3u);
  Function_2019184((int)v4, 3u, 0, 0);
  Function_2019184((int)v4, 3u, 3u, 0);
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 1;
  Function_201ff0c(1u, 1);
  v15 = 0;
  v16 = 0;
  v17 = 2048;
  v18 = 0;
  v19 = 983041;
  v20 = 768;
  v21 = 0;
  Function_20183c4(v4, 4u, &v15, 0);
  Function_2019ebc(v4, 4u);
  Function_2019184((int)v4, 4u, 0, 0);
  Function_2019184((int)v4, 4u, 3u, 0);
}

//----- (0223D324) --------------------------------------------------------
int __fastcall Function_223d324(int a1)
{
  return Function_201a7e8(*(uint **)(a1 + 48), a1 + 52, 1, 2, 19, 0x1Bu, 4u, 13, 31);
}

//----- (0223D350) --------------------------------------------------------
int Function_223d350()
{
  int v0;
  int v1;

  v0 = Function_20a5a2c();
  v1 = Function_20a5a3c();
  if ( !v0 )
    ErrorHandler();
  if ( !v1 )
    ErrorHandler();
  return Function_2014000();
}

//----- (0223D390) --------------------------------------------------------
int __fastcall Function_223d390(uint *a1)
{
  uint *v1;
  int v2;
  char v3;
  uchar *v4;

  v1 = a1;
  if ( !*a1 )
    ErrorHandler();
  v2 = 0;
  do
  {
    v3 = 3 - v2;
    v4 = (char *)v1 + v2++ + 212;
    *v4 = v3;
  }
  while ( v2 < 4 );
  return Function_2247a48(v1);
}

//----- (0223D3B8) --------------------------------------------------------
int __fastcall Function_223d3b8(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  Function_200cdc4(*(uint *)(a1 + 80), 2u, *(uint **)(v3 + 40), *(uint *)(v3 + 44), a2, 7u, 0, 3, 1, 33001);
  Function_224774c(*(uint *)(v3 + 40), *(uint *)(v3 + 44), v2);
  Function_223f560(*(uint *)(v3 + 40), *(uint *)(v3 + 44), *(uint *)(v3 + 80));
  return Function_223f630(v3 + 180, *(uint *)(v3 + 40), *(uint *)(v3 + 44));
}

//----- (0223D434) --------------------------------------------------------
int __fastcall Function_223d434(int a1)
{
  int v1;

  v1 = a1;
  Function_2247798(*(uint *)(a1 + 44));
  Function_223f6c4(v1 + 180);
  Function_223f5e8(*(uint *)(v1 + 44));
  return Function_200d080(*(uint *)(v1 + 44), 33001);
}

//----- (0223D468) --------------------------------------------------------
int __fastcall Function_223d468(int a1)
{
  return Function_200cd7c(*(uint *)(a1 + 80), 3u, *(int **)(a1 + 40), *(uint *)(a1 + 44), 46, 8, 0, 2, 2, 33002);
}

//----- (0223D498) --------------------------------------------------------
int __fastcall Function_223d498(int a1)
{
  return Function_200d080(*(uint *)(a1 + 44), 33002);
}

//----- (0223D4A8) --------------------------------------------------------
uint __fastcall Function_223d4a8(int a1, int a2)
{
  int v2;
  int v3;
  uint v4;
  int v5;

  v2 = a1;
  v3 = a2;
  Function_20070e8(a2, 0x17u, *(uint **)(a1 + 48), 3u, 0, 0, 1, 22);
  Function_200710c(v3, 0x16u, *(uint **)(v2 + 48), 3u, 0, 0, 1, 22);
  Function_2019ebc(*(uint **)(v2 + 48), 1u);
  Function_2003050(*(uint *)(v2 + 80), 45, 35, 22, 0, 0, 0);
  Function_2003050(*(uint *)(v2 + 80), 45, 36, 22, 0, 32, 0xD0u);
  v4 = Function_2027b50(*(ushort **)(*(uint *)v2 + 6536));
  Function_200dd0c(*(uint **)(v2 + 48), 1u, 1, 15, v4, 22);
  v5 = Function_200dd08(v4);
  Function_2003050(*(uint *)(v2 + 80), 38, v5, 22, 0, 32, 0xE0u);
  Function_20070e8(v3, 0x18u, *(uint **)(v2 + 48), 2u, 0, 0, 1, 22);
  Function_200710c(v3, 0x15u, *(uint **)(v2 + 48), 2u, 0, 0, 1, 22);
  return Function_2003050(*(uint *)(v2 + 80), 45, 37, 22, 0, 32, 0xC0u);
}

//----- (0223D5AC) --------------------------------------------------------
void Function_223d5ac()
{
  ;
}

//----- (0223D5B0) --------------------------------------------------------
uint __fastcall Function_223d5b0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_20070e8(a2, 0x13u, *(uint **)(a1 + 48), 4u, 0, 0, 1, 22);
  Function_200710c(v3, 0x14u, *(uint **)(v2 + 48), 4u, 0, 0, 1, 22);
  return Function_2003050(*(uint *)(v2 + 80), 45, 34, 22, 1, 0, 0);
}

//----- (0223D608) --------------------------------------------------------
void Function_223d608()
{
  ;
}

//----- (0223D60C) --------------------------------------------------------
int __fastcall Function_223d60c(uint *a1, ushort *a2)
{
  ushort *v2;
  uint *v3;

  v2 = a2;
  v3 = a1;
  if ( *a2 )
    return 1;
  if ( !Function_200384c(a1[20]) )
  {
    Function_223f334(*v3, 22);
    Function_223f374(*v3);
    ++*v2;
  }
  return 0;
}

//----- (0223D640) --------------------------------------------------------
int __fastcall Function_223d640(int *a1, ushort *a2)
{
  ushort *v2;
  int *v3;
  char v4;

  v2 = a2;
  v3 = a1;
  if ( *a2 )
  {
    if ( Function_224f4b8(
           a1 + 319,
           *(uchar *)(*a1 + 295),
           *(uchar *)(*a1 + 291),
           *(uchar *)(*a1 + 284)) == 1 )
      return 1;
  }
  else
  {
    if ( Function_209590c(*a1) == 1 )
      v4 = 2;
    else
      v4 = 1;
    *((uchar *)v3 + 233) = v4;
    *((uchar *)v3 + 234) = 0;
    *((uchar *)v3 + 235) = 0;
    if ( Function_224f30c(v3 + 319, v3, 13, (char *)v3 + 226) == 1 )
      ++*v2;
  }
  return 0;
}

//----- (0223D6B8) --------------------------------------------------------
int __fastcall Function_223d6b8(uchar *a1, ushort *a2)
{
  ushort *v2;

  v2 = a2;
  if ( *a2 )
  {
    if ( Function_224f4b8(
           a1 + 1276,
           *(uchar *)(*(uint *)a1 + 295),
           *(uchar *)(*(uint *)a1 + 291),
           *(uchar *)(*(uint *)a1 + 284)) == 1 )
      return 1;
  }
  else
  {
    a1[226] = a1[a1[216] + 212];
    if ( Function_224f30c(a1 + 1276, a1, 0, a1 + 226) == 1 )
      ++*v2;
  }
  return 0;
}

//----- (0223D71C) --------------------------------------------------------
int __fastcall Function_223d71c(int a1, ushort *a2)
{
  ushort *v2;

  v2 = a2;
  if ( *a2 )
  {
    if ( Function_224f4b8(
           a1 + 1276,
           *(uchar *)(*(uint *)a1 + 295),
           *(uchar *)(*(uint *)a1 + 291),
           *(uchar *)(*(uint *)a1 + 284)) == 1 )
      return 1;
  }
  else
  {
    *(uchar *)(a1 + 236) = 0;
    *(uchar *)(a1 + 237) = -16;
    *(uchar *)(a1 + 238) = 16;
    *(ushort *)(a1 + 240) = 0;
    if ( Function_224f30c(a1 + 1276, a1, 14, a1 + 226) == 1 )
      ++*v2;
  }
  return 0;
}

//----- (0223D78C) --------------------------------------------------------
int __fastcall Function_223d78c(int a1, ushort *a2)
{
  ushort *v2;

  v2 = a2;
  if ( *a2 )
  {
    if ( Function_224f4b8(
           a1 + 1276,
           *(uchar *)(*(uint *)a1 + 295),
           *(uchar *)(*(uint *)a1 + 291),
           *(uchar *)(*(uint *)a1 + 284)) == 1 )
      return 1;
  }
  else if ( Function_224f30c(a1 + 1276, a1, 15, 0) == 1 )
  {
    ++*v2;
  }
  return 0;
}

//----- (0223D7DC) --------------------------------------------------------
int __fastcall Function_223d7dc(int a1, ushort *a2)
{
  ushort *v2;

  v2 = a2;
  if ( *a2 )
  {
    if ( Function_224f4b8(
           a1 + 1276,
           *(uchar *)(*(uint *)a1 + 295),
           *(uchar *)(*(uint *)a1 + 291),
           *(uchar *)(*(uint *)a1 + 284)) == 1 )
      return 1;
  }
  else if ( Function_224f30c(a1 + 1276, a1, 2, a1 + 226) == 1 )
  {
    ++*v2;
  }
  return 0;
}

//----- (0223D82C) --------------------------------------------------------
int __fastcall Function_223d82c(uchar *a1, ushort *a2)
{
  ushort *v2;
  uchar *v3;
  int v4;

  v2 = a2;
  v3 = a1;
  if ( !*a2 )
  {
    v4 = a1[216];
    if ( v3[216] )
    {
      if ( v4 == 1 )
      {
        v3[233] = 4;
      }
      else if ( v4 == 2 )
      {
        v3[233] = 5;
      }
      else
      {
        v3[233] = 6;
      }
    }
    else
    {
      v3[233] = 3;
    }
    v3[234] = 0;
    v3[235] = 0;
    v3[229] = v3[226];
    ++*a2;
    goto LABEL_12;
  }
  if ( *a2 == 1 )
  {
LABEL_12:
    if ( Function_224f30c(v3 + 1276, v3, 13, v3 + 226) == 1 )
      ++*v2;
    return 0;
  }
  if ( Function_224f4b8(
         a1 + 1276,
         *(uchar *)(*(uint *)a1 + 295),
         *(uchar *)(*(uint *)a1 + 291),
         *(uchar *)(*(uint *)a1 + 284)) == 1 )
    return 1;
  return 0;
}

//----- (0223D8DC) --------------------------------------------------------
int __fastcall Function_223d8dc(int a1, ushort *a2)
{
  ushort *v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = a1;
  v4 = (ushort)*a2;
  if ( !*a2 )
  {
    *(uchar *)(v3 + 227) = Function_2095928(*(uint *)v3, *(uchar *)(v3 + 226));
    *(uchar *)(v3 + 228) = Function_209598c(*(uint *)v3, *(uchar *)(v3 + 226));
    ++*v2;
LABEL_6:
    if ( Function_224f30c(v3 + 1276, v3, 6, v3 + 226) == 1 )
      ++*v2;
    return 0;
  }
  if ( v4 == 1 )
    goto LABEL_6;
  if ( v4 != 2 )
    return 1;
  if ( Function_224f4b8(
         v3 + 1276,
         *(uchar *)(*(uint *)v3 + 295),
         *(uchar *)(*(uint *)v3 + 291),
         *(uchar *)(*(uint *)v3 + 284)) == 1 )
    ++*v2;
  return 0;
}

//----- (0223D96C) --------------------------------------------------------
int __fastcall Function_223d96c(int a1, ushort *a2)
{
  int result;

  if ( *a2 )
  {
    if ( *(uchar *)(a1 + 216) < 4u )
    {
      result = 2;
      a2[1] = 2;
    }
    else
    {
      result = 1;
    }
  }
  else
  {
    ++*(uchar *)(a1 + 216);
    ++*a2;
    result = 0;
  }
  return result;
}

//----- (0223D99C) --------------------------------------------------------
int __fastcall Function_223d99c(uchar *a1, ushort *a2)
{
  ushort *v2;
  char v3;
  int result;

  v2 = a2;
  switch ( (uchar)*a2 )
  {
    case 0u:
      *((ushort *)a1 + 121) = 1765;
      if ( Function_224f30c(a1 + 1276, a1, 16, a1 + 226) == 1 )
        ++*v2;
      goto LABEL_14;
    case 1u:
      if ( Function_224f4b8(
             a1 + 1276,
             *(uchar *)(*(uint *)a1 + 295),
             *(uchar *)(*(uint *)a1 + 291),
             *(uchar *)(*(uint *)a1 + 284)) == 1 )
        ++*v2;
      goto LABEL_14;
    case 2u:
      if ( *(uchar *)(*(uint *)a1 + 289) == 2 )
        v3 = 7;
      else
        v3 = 0;
      a1[233] = v3;
      a1[234] = 0;
      a1[235] = 0;
      ++*v2;
      goto LABEL_10;
    case 3u:
LABEL_10:
      if ( Function_224f30c(a1 + 1276, a1, 13, a1 + 226) == 1 )
        ++*v2;
      goto LABEL_14;
    default:
      if ( Function_224f4b8(
             a1 + 1276,
             *(uchar *)(*(uint *)a1 + 295),
             *(uchar *)(*(uint *)a1 + 291),
             *(uchar *)(*(uint *)a1 + 284)) == 1 )
        result = 1;
      else
LABEL_14:
        result = 0;
      return result;
  }
}

//----- (0223DA78) --------------------------------------------------------
int __fastcall Function_223da78(int a1, ushort *a2)
{
  ushort *v2;

  v2 = a2;
  if ( *a2 )
  {
    if ( Function_224f4b8(
           a1 + 1276,
           *(uchar *)(*(uint *)a1 + 295) - *(uchar *)(*(uint *)a1 + 375) - 1,
           *(uchar *)(*(uint *)a1 + 291),
           *(uchar *)(*(uint *)a1 + 284)) == 1 )
      return 3;
  }
  else if ( Function_224f30c(a1 + 1276, a1, 1, 0) == 1 )
  {
    ++*v2;
  }
  return 0;
}

//----- (0223DAD0) --------------------------------------------------------
int __fastcall Function_17_223dad0(int a1)
{
  int v1;
  int *v2;
  int v3;
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int *v14;
  int v15;
  int v16;
  int *v17;

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
  Function_2017fc8(3, 23, 655360);
  v2 = (int *)MallocSomeDataAndStorePtrInOverlayData1c(v1, 7184, 0x17u);
  MI_CpuFill8(v2, 0, 0x1C10u);
  v2[4] = Function_223f140(23);
  v3 = LoadPtrToOverWorldDataIn18(v1);
  *v2 = v3;
  *(uint *)(v3 + 364) = v2;
  *(uchar *)(*v2 + 368) = 1;
  v2[5] = *v2;
  Function_223e458(v2);
  v2[41] = (int)MallocFill120(0x17u);
  Function_2003858(v2[41], 1);
  Function_2002f70(v2[41], 0, 512, 0x17u);
  Function_2002f70(v2[41], 1, 512, 0x17u);
  Function_2002f70(v2[41], 2, 448, 0x17u);
  Function_2002f70(v2[41], 3, 512, 0x17u);
  v2[1098] = malloc(0x17u, 512);
  Function_224cdb4(v2, 1);
  v2[29] = Function_2018340(0x17u);
  Function_201dbec(64, 0x17u);
  Function_2017dd4(4, 8);
  v2[1107] = Function_2249380(*v2, v2 + 5);
  Function_223e250(v2[29]);
  Function_201e3d8();
  Function_201e450(4u);
  Function_2002bb8(2, 0x17u);
  v4 = Function_200c6e4(0x17u);
  v2[27] = (int)v4;
  Function_200c73c(v4, &dword_2253008, dword_2252FDC, 32);
  Function_200966c(1, 1048592, v5, v6);
  Function_2009704(1);
  v2[28] = Function_200c704((uint *)v2[27]);
  Function_200c7c0((int *)v2[27], (int **)v2[28], 128);
  Function_200cb30((uint *)v2[27], v2[28], dword_2252FF0);
  v7 = Function_200c738(v2[27]);
  Function_200964c(v7, 0, 0x100000, v8);
  v2[22] = Function_200762c(0x17u, v9, v10, v11);
  Function_223e450();
  v2[38] = LoadFromMsgNARC(0, 26, 206, 0x17u);
  v2[39] = (int)Function_200b358(0x17u);
  v2[40] = Function_2023790(320, 0x17u);
  v2[42] = Function_2012744(9, 0x17u);
  v14 = LoadFromNARC_8(45, 0x17u, v12, v13);
  v17 = LoadFromNARC_8(46, 0x17u, v15, v16);
  Function_223e67c(v2, v14);
  Function_223e770(v2, v14);
  Function_223e380(v2);
  Function_223e4b0(v2, v17);
  Function_223e60c(v2, v17);
  Function_2249640(v2[1107]);
  Call_FS_CloseFile(v14);
  Call_FS_CloseFile(v17);
  Function_224a134(v2);
  Function_224b0cc(v2 + 5);
  Function_223e778(v2);
  Function_224aa38(v2);
  Function_224b59c(v2);
  Function_2039734();
  Function_200f174(1u, 17, 37, 0, 6, 1, 23);
  v2[1] = (int)AddTaskToTaskList1((int)Function_223e1fc, (int)v2, 0x13880u);
  *((uchar *)v2 + 4464) = 1;
  Function_201ffd0();
  Function_201ff0c(0x10u, 1);
  Function_201ff74(0x10u, 1);
  Function_2004550(6u, 0x46Fu);
  Function_20959f4(*(uchar *)(*v2 + 369));
  G2x_SetBlendBrightness_(&REG_BLDCNT, 57, -6);
  Function_2005748(0x6E5u);
  SetMainLoopFunctionCall((int)Function_223e09c, (int)v2);
  return 1;
}

//----- (0223DDD4) --------------------------------------------------------
int __fastcall Function_17_223ddd4(int a1, int *a2)
{
  int *v2;
  int v3;
  uchar *v4;
  int v5;
  int v6;
  short v7;

  v2 = a2;
  v3 = LoadOverlayData1c(a1);
  v4 = *(uchar **)v3;
  Call_PRNG();
  v5 = *v2;
  if ( !*v2 )
  {
    if ( Function_200f2ac() == 1 )
      *v2 = 1;
    return 0;
  }
  if ( v5 == 1 )
  {
    if ( Function_2094edc(*(uchar **)v3) == 1 )
    {
      v6 = ((int (__fastcall *)(int, int))*(&off_2253050 + *(ushort *)(v3 + 4462)))(v3, v3 + 7172);
      if ( (uint)(v6 - 1) > 1 )
      {
        if ( v6 == 3 && *(uchar *)(v3 + 7180) == 1 )
        {
          *v2 = 2;
          MI_CpuFill8((ushort *)(v3 + 7172), 0, 8u);
          Function_200f174(2u, 30, 30, 0, 6, 1, 23);
          return 0;
        }
      }
      else
      {
        if ( v6 == 1 )
          v7 = *(ushort *)(v3 + 4462) + 1;
        else
          v7 = *(ushort *)(v3 + 7174);
        *(ushort *)(v3 + 4462) = v7;
        MI_CpuFill8((ushort *)(v3 + 7172), 0, 8u);
      }
    }
    Function_224f35c(v3 + 4468);
    Function_224f3d8(v3 + 4468, v3);
    if ( *(uchar *)(v3 + 7180) == 1 && !Function_224f3d0(v3 + 4468) && !Function_2094edc(*(uchar **)v3) )
    {
      *v2 = 2;
      MI_CpuFill8((ushort *)(v3 + 7172), 0, 8u);
      Function_200f174(2u, 30, 30, 0, 6, 1, 23);
    }
    return 0;
  }
  if ( v5 == 2 && *(uchar *)(v3 + 7180) == 1 && Function_200f2ac() == 1 )
    return 1;
  return 0;
}

//----- (0223DF0C) --------------------------------------------------------
int __fastcall Function_17_223df0c(int a1)
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
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  if ( Function_2014710(*(uint *)(v2 + 12)) )
    ErrorHandler();
  Function_223e7e0(v2);
  Function_20141e4();
  Function_224a95c(v2 + 20);
  Function_224aa58(v2);
  Function_224b5b8(v2);
  Function_224bd00(v2);
  Function_223e588(v2);
  Function_223e678(v2);
  Function_223e76c(v2);
  Function_223e774(v2);
  v3 = 0;
  v4 = v2 + 120;
  do
  {
    Function_201a8fc(v4);
    ++v3;
    v4 += 16;
  }
  while ( v3 < 2 );
  Function_201ff0c(1u, 0);
  Function_201ff0c(2u, 0);
  Function_2019044(*(uint *)(v2 + 116), 1);
  Function_2019044(*(uint *)(v2 + 116), 2);
  Function_2019044(*(uint *)(v2 + 116), 3);
  Function_2249358(*(uint *)(v2 + 116));
  Function_22493a4(*(uint *)(v2 + 4428));
  Function_200d0b0(*(uint *)(v2 + 108), *(int ***)(v2 + 112));
  Function_200c8d4(*(uint *)(v2 + 108));
  Function_201dc3c();
  Function_224a1ec(v2 + 20);
  Function_2007b6c(*(uint *)(v2 + 88));
  Function_20127bc(*(uint *)(v2 + 168));
  Function_2002c60(2);
  free(*(uint *)(v2 + 4392));
  Function_2002fa0(*(uint *)(v2 + 164), 0);
  Function_2002fa0(*(uint *)(v2 + 164), 1);
  Function_2002fa0(*(uint *)(v2 + 164), 2);
  Function_2002fa0(*(uint *)(v2 + 164), 3);
  Call_free1(*(uint *)(v2 + 164));
  Function_20237bc_FreeMsg(*(uint *)(v2 + 160), v5);
  Function_200b3f0(*(uint **)(v2 + 156), v6);
  Function_200b190(*(ushort **)(v2 + 152));
  free(*(uint *)(v2 + 116));
  Call_RemoveTaskFromTaskList(*(int **)(v2 + 4));
  Function_223f1e0(*(uint *)(v2 + 16));
  Function_201e530();
  FreeSomeDataAndStore0InOverlayData1c(v1);
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  Function_201807c(23);
  Function_2095a24();
  Function_2039794();
  UnloadOverlay(11, v7, v8, v9);
  UnloadOverlay(12, v10, v11, v12);
  UnloadOverlay(22, v13, v14, v15);
  return 1;
}

//----- (0223E09C) --------------------------------------------------------
int __fastcall Function_223e09c(int a1)
{
  int *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int *v6;
  int result;

  v1 = (int *)a1;
  if ( *(uchar *)(a1 + 4432) )
  {
    ++*(ull *)(a1 + 4436);
    v2 = Function_20051c4(7);
    v3 = u32_div_f(v2 * v1[709] + 5000, 10000);
    v4 = v3 + 1;
    v1[1114] = v3;
    if ( *(ull *)(v1 + 1109) != v3 + 1 )
    {
      if ( (uint)v1[1113] <= 0x12 && (ull)(uint)v4 - *(ull *)(v1 + 1109) <= 1 )
      {
        ++v1[1113];
      }
      else
      {
        v1[1109] = v4;
        v1[1110] = 0;
        v1[1113] = 0;
      }
    }
    else
    {
      v1[1113] = 0;
    }
  }
  Function_2008a94(v1[22]);
  v5 = 0;
  v6 = v1;
  do
  {
    if ( v6[6] )
      ((void (*)(void))dword_225B06C[0])();
    ++v5;
    v6 += 4;
  }
  while ( v5 < 4 );
  Function_201dcac();
  Function_200c800();
  Function_2003694(v1[41]);
  Function_201c2b8(v1[29]);
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (0223E18C) --------------------------------------------------------
int __fastcall Function_223e18c(int result)
{
  int v1;
  int v2;
  short v3;
  int v4;
  int v5;
  int v6;

  v1 = result + 4392;
  if ( *(uchar *)(result + 4409) )
  {
    v2 = Function_200316c(*(uint *)(result + 164), 0);
    MIi_CpuCopy16(*(uint *)v1, v2, 512, v3);
    result = *(uchar *)(v1 + 16);
    if ( result == 1 )
    {
      Function_20039f8(
        *(uint *)v1,
        v2,
        *(ushort *)(v1 + 6),
        ((int)*(ushort *)(v1 + 8) >> 8) & 0xFF,
        *(ushort *)(v1 + 14));
      v4 = *(ushort *)(v1 + 10);
      v5 = *(ushort *)(v1 + 8);
      if ( v5 == v4 )
      {
        result = 0;
        *(uchar *)(v1 + 16) = 0;
      }
      else
      {
        v6 = *(short *)(v1 + 12);
        result = v5 + v6;
        if ( v6 > 0 && result >= v4 || v6 < 0 && result <= v4 )
          result = *(ushort *)(v1 + 10);
        *(ushort *)(v1 + 8) = result;
      }
    }
  }
  return result;
}

//----- (0223E1FC) --------------------------------------------------------
void __fastcall Function_223e1fc(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v2 = a2;
  Function_223e18c(a2);
  if ( *(uchar *)(v2 + 4464) == 1 )
  {
    Function_2007768(*(uint *)(v2 + 88));
    v3 = 0;
    v4 = v2;
    do
    {
      v5 = *(uint *)(v4 + 24);
      if ( v5 )
        v5 = ((int (*)(void))dword_225AFF8[0])();
      ++v3;
      v4 += 16;
    }
    while ( v3 < 4 );
    ((void (__fastcall *)(int))dword_221F8F0[0])(v5);
    Function_200c7ec(*(int **)(v2 + 112));
    Function_200c808();
    GFX_FLUSH = 1;
  }
  v6 = *(uint *)(v2 + 116);
  Function_2038a1c();
}

//----- (0223E250) --------------------------------------------------------
int __fastcall Function_223e250(uint *a1)
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
  int v13;
  int v14;
  int v15;
  int v16;
  char v17;
  char v18;
  char v19;
  char v20;

  v1 = a1;
  Function_201ff00();
  v2 = dword_2253028;
  v3 = &v17;
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
  GX_SetBanks((int *)&v17);
  MIi_CpuClear32(0, (uint *)0x6000000, 0x80000);
  MIi_CpuClear32(0, (uint *)0x6200000, 0x20000);
  MIi_CpuClear32(0, (uint *)0x6400000, 0x40000);
  MIi_CpuClear32(0, (uint *)0x6600000, 0x20000);
  v13 = 1;
  v14 = 0;
  v15 = 0;
  v16 = 1;
  SetGraphicsModes(&v13);
  v7 = (int *)&loc_22530D8;
  v8 = &v18;
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
  Function_20183c4(v1, 1u, (int *)&v18, 0);
  Function_2019ebc(v1, 1u);
  Function_2019184((int)v1, 1u, 0, 0);
  Function_2019184((int)v1, 1u, 3u, 0);
  Function_20183c4(v1, 2u, (int *)&v19, 0);
  Function_2019ebc(v1, 2u);
  Function_2019184((int)v1, 2u, 0, 0);
  Function_2019184((int)v1, 2u, 3u, 0);
  Function_20183c4(v1, 3u, (int *)&v20, 0);
  Function_2019ebc(v1, 3u);
  Function_2019184((int)v1, 3u, 0, 0);
  Function_2019184((int)v1, 3u, 3u, 0);
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 2;
  Function_201ff0c(1u, 1);
  return Function_2249300(v1);
}

//----- (0223E380) --------------------------------------------------------
int __fastcall Function_223e380(int a1)
{
  int v1;

  v1 = a1;
  Function_201a7e8(*(uint **)(a1 + 116), a1 + 120, 1, 2, 19, 0x1Bu, 4u, 13, 31);
  return Function_201a7e8(*(uint **)(v1 + 116), v1 + 136, 1, 2, 11, 0x1Bu, 2u, 13, 31);
}

//----- (0223E3CC) --------------------------------------------------------
int __fastcall Function_223e3cc(uchar *a1, uint *a2, uint *a3)
{
  int result;

  a1[7182] = *(uchar *)(*(uint *)a1 + 369) == 1 && *(uchar *)(*(uint *)a1 + 375);
  if ( a1[7182] == 1 )
  {
    result = 1;
    *a2 = 1;
    *a3 = 0;
  }
  else
  {
    *a2 = *((uint *)&loc_225312C
          + 10 * *(uchar *)(*(uint *)a1 + 288)
          + 2 * *(uchar *)(*(uint *)a1 + 287));
    *a3 = *((uint *)&loc_2253130
          + 10 * *(uchar *)(*(uint *)a1 + 288)
          + 2 * *(uchar *)(*(uint *)a1 + 287));
    result = 0;
  }
  return result;
}

//----- (0223E450) --------------------------------------------------------
int Function_223e450()
{
  return Function_2014000();
}

//----- (0223E458) --------------------------------------------------------
int __fastcall Function_223e458(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint v7;
  int result;
  int v9;

  v1 = a1;
  if ( !*a1 )
    ErrorHandler();
  v2 = 0;
  do
  {
    v3 = (int)v1 + v2;
    v4 = (3 - v2) & 0xFF;
    *(uchar *)(v3 + 2796) = 3 - v2++;
    *(uchar *)(v3 + 2801) = v4;
  }
  while ( v2 < 4 );
  Function_224cfb8(v1);
  v5 = 0;
  v6 = 0;
  do
  {
    v7 = GetPkmnData(*(int **)(*v1 + v6), 5u, 0);
    result = Function_224cfa8(v7);
    v9 = (int)v1 + v5++;
    v6 += 4;
    *(uchar *)(v9 + 2768) = result;
  }
  while ( v5 < 4 );
  return result;
}

//----- (0223E4B0) --------------------------------------------------------
int __fastcall Function_223e4b0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  Function_200cdc4(
    *(uint *)(a1 + 164),
    2u,
    *(uint **)(v3 + 108),
    *(uint *)(v3 + 112),
    a2,
    6u,
    0,
    8,
    1,
    33001);
  Function_224a20c(*(uint *)(v3 + 108), *(uint *)(v3 + 112));
  Function_224a390(*(uint *)(v3 + 108), *(uint *)(v3 + 112), v2);
  Function_224a5a8(*(uint *)(v3 + 108), *(uint *)(v3 + 112), v2);
  Function_224a61c(v3 + 20, *(uint *)(v3 + 108), *(uint *)(v3 + 112));
  Function_224a674(v3 + 20);
  Function_224a984(*(uint *)(v3 + 108), *(uint *)(v3 + 112), v2);
  Function_224a9f8(v3 + 20, *(uint *)(v3 + 108), *(uint *)(v3 + 112));
  Function_224c310(*(uint *)(v3 + 108), *(uint *)(v3 + 112), v2);
  Function_224c384(v3, *(uint *)(v3 + 108), *(uint *)(v3 + 112));
  Function_224aa94(*(uint *)(v3 + 108), *(uint *)(v3 + 112), v2);
  Function_224ab08(v3 + 20, *(uint *)(v3 + 108), *(uint *)(v3 + 112));
  Function_224ac80(*(uint *)(v3 + 108), *(uint *)(v3 + 112), v2);
  Function_224acf4(v3 + 20, *(uint *)(v3 + 108), *(uint *)(v3 + 112));
  Function_224acfc(*(uint *)(v3 + 108), *(uint *)(v3 + 112), v2);
  Function_224afa8(*(uint *)(v3 + 108), *(uint *)(v3 + 112), v2);
  return Function_224b01c(v3);
}

//----- (0223E588) --------------------------------------------------------
int __fastcall Function_223e588(int a1)
{
  int v1;

  v1 = a1;
  Function_224a210(*(uint *)(a1 + 112));
  Function_224a428(*(uint *)(v1 + 112));
  Function_224a580(v1 + 20);
  Function_224a5f8(*(uint *)(v1 + 112));
  Function_224a650(v1 + 20);
  Function_224a7b8(v1 + 20);
  Function_224a9d4(*(uint *)(v1 + 112));
  Function_224aa1c(v1 + 20);
  Function_224c3e4(v1);
  Function_224c360(*(uint *)(v1 + 112));
  Function_224aae4(*(uint *)(v1 + 112));
  Function_224abb0(v1 + 20);
  Function_224acd0(*(uint *)(v1 + 112));
  Function_224acf8(v1 + 20);
  Function_224ad4c(*(uint *)(v1 + 112));
  Function_224aff8(*(uint *)(v1 + 112));
  Function_224b058(v1);
  return Function_200d080(*(uint *)(v1 + 112), 33001);
}

//----- (0223E60C) --------------------------------------------------------
int __fastcall Function_223e60c(int a1)
{
  int v1;

  v1 = a1;
  Function_200cd7c(*(uint *)(a1 + 164), 3u, *(int **)(v1 + 108), *(uint *)(v1 + 112), 46, 6, 0, 2, 2, 33002);
  Function_200cd7c(*(uint *)(v1 + 164), 3u, *(int **)(v1 + 108), *(uint *)(v1 + 112), 46, 9, 0, 1, 2, 33003);
  return Function_22493c4(*(uint *)(v1 + 4428));
}

//----- (0223E678) --------------------------------------------------------
void Function_223e678()
{
  ;
}

//----- (0223E67C) --------------------------------------------------------
int __fastcall Function_223e67c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint v6;
  uint v7;
  int v8;
  int v9;
  short v10;
  int v12;
  char v13;
  int v14;

  v14 = a4;
  v4 = a1;
  v5 = a2;
  Function_20070e8(a2, 0xDu, *(uint **)(a1 + 116), 3u, 0, 0, 1, 23);
  Function_223e3cc((uchar *)v4, &v13, &v12);
  v6 = Function_223f0bc(v12, 0);
  Function_200710c(v5, v6, *(uint **)(v4 + 116), 3u, 0, 0, 1, 23);
  Function_2003050(*(uint *)(v4 + 164), 45, 32, 23, 0, 0, 0);
  Function_2003050(*(uint *)(v4 + 164), 45, 36, 23, 0, 32, 0xD0u);
  v7 = Function_2027b50(*(ushort **)(*(uint *)v4 + 6536));
  Function_200dd0c(*(uint **)(v4 + 116), 1u, 1, 15, v7, 23);
  v8 = Function_200dd08(v7);
  Function_2003050(*(uint *)(v4 + 164), 38, v8, 23, 0, 32, 0xE0u);
  Function_224c848(v4);
  v9 = Function_2003164(*(uint *)(v4 + 164), 0);
  return MIi_CpuCopy16(v9, *(uint *)(v4 + 4392), 512, v10);
}

//----- (0223E76C) --------------------------------------------------------
void Function_223e76c()
{
  ;
}

//----- (0223E770) --------------------------------------------------------
void Function_223e770()
{
  ;
}

//----- (0223E774) --------------------------------------------------------
void Function_223e774()
{
  ;
}

//----- (0223E778) --------------------------------------------------------
int *__fastcall Function_223e778(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  if ( *(uint *)(a1 + 12) )
    ErrorHandler();
  v2 = (int *)malloc(0x17u, 18432);
  v3 = Function_2014014((int)Function_223e800, (int)Function_223e81c, v2, 0x4800u, 1, 0x17u);
  *(uint *)(v1 + 12) = v3;
  v4 = Function_2014784(v3);
  Function_20206bc(4096, 3686400, v4);
  v5 = Call2_LoadFromNARC_2(61, 3, 0x17u);
  return Function_20144cc(*(uint **)(v1 + 12), v5, 10, 1);
}

//----- (0223E7E0) --------------------------------------------------------
int __fastcall Function_223e7e0(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = Function_2014730(*(uint *)(a1 + 12));
  Function_201411c(*(uint ***)(v1 + 12));
  free(v2);
  result = 0;
  *(uint *)(v1 + 12) = 0;
  return result;
}

//----- (0223E800) --------------------------------------------------------
int Function_223e800()
{
  int v0;

  v0 = Function_20a5a2c();
  Function_20145b4(v0);
  return 8 * v0 & 0x7FFFF;
}

//----- (0223E81C) --------------------------------------------------------
int Function_223e81c()
{
  int v0;

  v0 = Function_20a5a3c();
  Function_20145f4(v0);
  return 8 * v0 & 0x7FFFF;
}

//----- (0223E838) --------------------------------------------------------
int __fastcall Function_223e838(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = a1;
  if ( *(ushort *)a2 )
  {
    if ( Function_224f4b8(
           a1 + 4468,
           *(uchar *)(*(uint *)a1 + 295),
           *(uchar *)(*(uint *)a1 + 291),
           *(uchar *)(*(uint *)a1 + 284)) == 1 )
      return 1;
  }
  else if ( *(uchar *)(*(uint *)a1 + 375) && (v4 = *(uint *)(a2 + 4), v4 < 120) )
  {
    *(uint *)(a2 + 4) = v4 + 1;
  }
  else if ( Function_224f30c(v3 + 4468, v3, 10, v3 + 2796) == 1 )
  {
    *(uint *)(v2 + 4) = 0;
    ++*(ushort *)v2;
  }
  return 0;
}

//----- (0223E8AC) --------------------------------------------------------
int __fastcall Function_223e8ac(uchar *a1, ushort *a2)
{
  ushort *v2;
  uchar *v3;
  char v4;

  v2 = a2;
  v3 = a1;
  if ( *a2 )
  {
    if ( *a2 != 1 )
      return 1;
    if ( Function_224f4b8(
           a1 + 4468,
           *(uchar *)(*(uint *)a1 + 295),
           *(uchar *)(*(uint *)a1 + 291),
           *(uchar *)(*(uint *)a1 + 284)) == 1 )
      ++*v2;
  }
  else
  {
    a1[2899] = 0;
    a1[2900] = 0;
    a1[2892] = *(uchar *)(*(uint *)a1 + 291);
    a1[2896] = Function_224c57c(*(uchar *)(*(uint *)a1 + 288));
    if ( Function_209590c(*(uint *)v3) == 1 )
      v4 = 2;
    else
      v4 = 1;
    v3[2898] = v4;
    if ( Function_224f30c(v3 + 4468, v3, 9, v3 + 2844) == 1 )
      ++*v2;
  }
  return 0;
}

//----- (0223E954) --------------------------------------------------------
int __fastcall Function_223e954(int a1, ushort *a2)
{
  ushort *v2;

  v2 = a2;
  if ( *a2 )
  {
    if ( Function_224f4b8(
           a1 + 4468,
           *(uchar *)(*(uint *)a1 + 295),
           *(uchar *)(*(uint *)a1 + 291),
           *(uchar *)(*(uint *)a1 + 284)) == 1 )
      return 1;
  }
  else if ( Function_224f30c(a1 + 4468, a1, 3, 0) == 1 )
  {
    ++*v2;
  }
  return 0;
}

//----- (0223E9A4) --------------------------------------------------------
int __fastcall Function_223e9a4(uchar *a1, ushort *a2)
{
  ushort *v2;
  uint v3;
  uchar *v4;
  int v5;
  int v6;
  ushort *v7;
  int result;
  int v9;
  int v10;

  v2 = a2;
  v3 = *a2;
  v4 = a1;
  if ( v3 <= 4 )
    JUMPOUT(__CS__, *((short *)&off_223E9C0 + v3) + 35908034);
  switch ( (uchar)v3 )
  {
    case 0:
      Function_223e3cc(a1, &v10, &v9);
      *((uint *)v4 + 691) = (char *)&loc_2253084 + 12 * v10;
      *((uint *)v4 + 705) = s32_div_f(0x112A880u, *((ushort *)&loc_2253086 + 6 * v10));
      v5 = Function_223f0bc(v9, 1) * *((uint *)v4 + 705) + 5000;
      ll_udiv();
      *((uint *)v4 + 706) = v6;
      *((ushort *)v4 + 1420) = *((ushort *)&loc_2253086 + 6 * v10);
      *((uint *)v4 + 707) = *((uint *)v4 + 705) * *((uchar *)&loc_225308A + 12 * v10);
      *((uint *)v4 + 708) = *((uint *)v4 + 705) * *((uchar *)&loc_225308A + 12 * v10);
      *((uint *)v4 + 709) = u32_div_f(*((uint *)v4 + 705), 48);
      v4[2842] = *((uchar *)&loc_2253088 + 12 * v10);
      *((uint *)v4 + 704) = *((ushort *)&loc_2253084 + 6 * v10);
      v4[2843] = v9;
      v7 = (ushort *)*((uint *)v4 + 691);
      *((ushort *)v4 + 1440) = *v7;
      *((ushort *)v4 + 1441) = v7[1];
      *((ushort *)v4 + 1442) = v7[2];
      *((ushort *)v4 + 1443) = v7[3];
      *((ushort *)v4 + 1444) = v7[4];
      *((ushort *)v4 + 1445) = v7[5];
      *((uint *)v4 + 713) = *((uint *)v4 + 705);
      *((uint *)v4 + 714) = *((uint *)v4 + 706);
      *((ushort *)v4 + 1430) = *((ushort *)v4 + 1420);
      ++*v2;
      goto LABEL_14;
    case 1:
      if ( Function_224f30c(a1 + 4468, a1, 10, a1 + 2796) == 1 )
        ++*v2;
      goto LABEL_14;
    case 2:
      if ( Function_224f4b8(
             a1 + 4468,
             *(uchar *)(*(uint *)a1 + 295),
             *(uchar *)(*(uint *)a1 + 291),
             *(uchar *)(*(uint *)a1 + 284)) == 1 )
        ++*v2;
      goto LABEL_14;
    case 3:
      if ( Function_224f30c(a1 + 4468, a1, 11, a1 + 2844) == 1 )
        ++*v2;
      goto LABEL_14;
    case 4:
      if ( Function_224f4b8(
             a1 + 4468,
             *(uchar *)(*(uint *)a1 + 295),
             *(uchar *)(*(uint *)a1 + 291),
             *(uchar *)(*(uint *)a1 + 284)) == 1 )
        ++*v2;
LABEL_14:
      result = 0;
      break;
    default:
      result = 1;
      break;
  }
  return result;
}

//----- (0223EBB0) --------------------------------------------------------
int __fastcall Function_223ebb0(uchar *a1, ushort *a2)
{
  uchar *v2;
  int v3;
  int v4;
  uchar v5;
  int v6;
  int v7;
  int v8;
  ushort *v10;

  v2 = a1;
  v10 = a2;
  if ( *a2 )
    return 1;
  v3 = 0;
  a1[2844] = a1[a1[2800] + 2796];
  do
  {
    v4 = (int)&a1[v3];
    v5 = a1[v3++ + 2801];
    *(uchar *)(v4 + 2846) = v5;
  }
  while ( v3 < 4 );
  v6 = *(uchar *)(*(uint *)a1 + 295);
  if ( v6 < 4 )
  {
    v7 = (int)&a1[4 * v6];
    do
    {
      v8 = *(uint *)v2;
      *(uint *)(v7 + 2864) = Call_PRNG();
      ++v6;
      v7 += 4;
    }
    while ( v6 < 4 );
  }
  ++*v10;
  return 0;
}

//----- (0223EC20) --------------------------------------------------------
int __fastcall Function_223ec20(int a1, ushort *a2)
{
  ushort *v2;

  v2 = a2;
  if ( *a2 )
  {
    if ( Function_224f4b8(
           a1 + 4468,
           *(uchar *)(*(uint *)a1 + 295),
           *(uchar *)(*(uint *)a1 + 291),
           *(uchar *)(*(uint *)a1 + 284)) == 1 )
      return 1;
  }
  else if ( Function_224f30c(a1 + 4468, a1, 7, a1 + 2844) == 1 )
  {
    ++*v2;
  }
  return 0;
}

//----- (0223EC74) --------------------------------------------------------
int __fastcall Function_223ec74(int a1, ushort *a2)
{
  ushort *v2;

  v2 = a2;
  if ( *a2 )
  {
    if ( Function_224f4b8(
           a1 + 4468,
           *(uchar *)(*(uint *)a1 + 295),
           *(uchar *)(*(uint *)a1 + 291),
           *(uchar *)(*(uint *)a1 + 284)) == 1 )
      return 1;
  }
  else if ( Function_224f30c(a1 + 4468, a1, 5, a1 + 2844) == 1 )
  {
    ++*v2;
  }
  return 0;
}

//----- (0223ECC8) --------------------------------------------------------
int __fastcall Function_223ecc8(int a1, ushort *a2)
{
  ushort *v2;

  v2 = a2;
  if ( *a2 )
  {
    if ( Function_224f4b8(
           a1 + 4468,
           *(uchar *)(*(uint *)a1 + 295),
           *(uchar *)(*(uint *)a1 + 291),
           *(uchar *)(*(uint *)a1 + 284)) == 1 )
      return 1;
  }
  else if ( Function_224f30c(a1 + 4468, a1, 8, a1 + 2844) == 1 )
  {
    ++*v2;
  }
  return 0;
}

//----- (0223ED1C) --------------------------------------------------------
int __fastcall Function_223ed1c(uchar *a1, ushort *a2)
{
  ushort *v2;
  uchar *v3;

  v2 = a2;
  v3 = a1;
  if ( *a2 )
  {
    if ( Function_224f4b8(
           a1 + 4468,
           *(uchar *)(*(uint *)a1 + 295),
           *(uchar *)(*(uint *)a1 + 291),
           *(uchar *)(*(uint *)a1 + 284)) == 1 )
      return 1;
  }
  else
  {
    if ( a1[2800] >= 3u )
      return 1;
    a1[2892] = a1[2802];
    a1[2896] = Function_224c57c(*(uchar *)(*(uint *)a1 + 288));
    v3[2898] = 0;
    if ( Function_224f30c(v3 + 4468, v3, 6, v3 + 2844) == 1 )
      ++*v2;
  }
  return 0;
}

//----- (0223ED9C) --------------------------------------------------------
int __fastcall Function_223ed9c(uchar *a1, ushort *a2)
{
  ushort *v2;
  uchar *v3;
  int v4;
  uchar v5;
  int v6;
  int v7;
  uchar v8;

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  if ( !*a2 )
  {
    v5 = v3[2801];
    v6 = 0;
    do
    {
      v7 = (int)&v3[v6];
      v8 = v3[v6++ + 2802];
      *(uchar *)(v7 + 2801) = v8;
    }
    while ( v6 < 3 );
    v3[2804] = v5;
    ++v3[2800];
    ++*a2;
LABEL_8:
    if ( Function_224f30c(v3 + 4468, v3, 10, v3 + 2796) == 1 )
      ++*v2;
    return 0;
  }
  if ( v4 == 1 )
    goto LABEL_8;
  if ( v4 == 2 )
  {
    if ( Function_224f4b8(
           v3 + 4468,
           *(uchar *)(*(uint *)v3 + 295),
           *(uchar *)(*(uint *)v3 + 291),
           *(uchar *)(*(uint *)v3 + 284)) == 1 )
      ++*v2;
    return 0;
  }
  if ( v3[2800] >= 4u )
    return 1;
  ++v3[2845];
  a2[1] = 4;
  return 2;
}

//----- (0223EE54) --------------------------------------------------------
int __fastcall Function_223ee54(int a1, ushort *a2)
{
  ushort *v2;

  v2 = a2;
  if ( *a2 )
  {
    if ( *a2 != 1 )
      return 1;
    if ( Function_224f4b8(
           a1 + 4468,
           *(uchar *)(*(uint *)a1 + 295),
           *(uchar *)(*(uint *)a1 + 291),
           *(uchar *)(*(uint *)a1 + 284)) == 1 )
      ++*v2;
  }
  else if ( Function_224f30c(a1 + 4468, a1, 12, a1 + 2844) == 1 )
  {
    ++*v2;
  }
  return 0;
}

//----- (0223EEB8) --------------------------------------------------------
int __fastcall Function_223eeb8(uchar *a1, ushort *a2)
{
  int v2;
  int v3;
  uchar *v4;
  int v5;
  int v6;
  int v7;
  char *v8;
  char *v9;
  char *v10;
  char *v11;
  short v12;
  short v13;
  int v14;
  int v15;
  short *v16;
  char *v17;
  int v18;
  int v19;
  char v20;
  int v21;
  char *v22;
  char v23;
  int v24;
  int v25;
  uchar *v27;
  ushort *v28;
  char v29;
  char v30;
  char v31;
  short v32;
  char v33;
  char v34;

  v27 = a1;
  v2 = (ushort)*a2;
  v28 = a2;
  if ( !*a2 )
  {
    v3 = 0;
    v4 = v27;
    v5 = 0;
    do
    {
      ++v3;
      *(ushort *)(*(uint *)v27 + v5 + 300) = *((ushort *)v4 + 1403);
      v4 += 2;
      v5 += 12;
    }
    while ( v3 < 4 );
    Function_2251930(*(uint *)v27, 0, &v34, v5);
    Function_2251930(*(uint *)v27, 1, &v33, v6);
    v7 = 0;
    v8 = &v33;
    v9 = &v34;
    v10 = &v31;
    v11 = &v29;
    do
    {
      v12 = *(ushort *)v9;
      v13 = *(ushort *)v8;
      *v11 = v7++;
      *(ushort *)v10 = v12 + v13;
      v8 += 2;
      v9 += 2;
      v10 += 2;
      ++v11;
    }
    while ( v7 < 4 );
    v14 = 0;
    do
    {
      v15 = 3;
      if ( v14 < 3 )
      {
        v16 = &v32;
        v17 = &v30;
        do
        {
          v18 = *v16;
          v19 = *(v16 - 1);
          if ( v19 < v18 )
          {
            *v16 = v19;
            *(v16 - 1) = v18;
            v20 = *v17;
            *v17 = *(v17 - 1);
            *(v17 - 1) = v20;
          }
          --v15;
          --v16;
          --v17;
        }
        while ( v15 > v14 );
      }
      ++v14;
    }
    while ( v14 < 3 );
    v21 = 0;
    v22 = &v29;
    do
    {
      v23 = *v22++;
      v24 = *(uint *)v27 + v21++;
      *(uchar *)(v24 + 370) = v23;
    }
    while ( v21 < 4 );
    v27[2899] = 0;
    v27[2900] = 0;
    v27[2892] = *(uchar *)(*(uint *)v27 + 370);
    v25 = *(uchar *)(*(uint *)v27 + 289);
    if ( *(uchar *)(*(uint *)v27 + 289) && v25 != 1 && v25 != 2 )
      v27[2898] = 0;
    else
      v27[2898] = 6;
    ++*v28;
    goto LABEL_24;
  }
  if ( v2 == 1 )
  {
LABEL_24:
    if ( Function_224f30c(v27 + 4468, v27, 9, v27 + 2844) == 1 )
      ++*v28;
    return 0;
  }
  if ( v2 != 2 )
    return 1;
  if ( Function_224f4b8(
         v27 + 4468,
         *(uchar *)(*(uint *)v27 + 295),
         *(uchar *)(*(uint *)v27 + 291),
         *(uchar *)(*(uint *)v27 + 284)) == 1 )
    ++*v28;
  return 0;
}

//----- (0223F03C) --------------------------------------------------------
int __fastcall Function_223f03c(int a1, ushort *a2, int a3, int a4)
{
  ushort *v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  char v9;
  int v11;

  v11 = a4;
  v4 = a2;
  v5 = a1;
  v6 = (ushort)*a2;
  if ( !*a2 )
  {
    *a2 = v6 + 1;
LABEL_5:
    v7 = 0;
    v8 = &v11;
    do
    {
      v9 = *(uchar *)(*(uint *)v5 + v7++ + 370);
      *(uchar *)v8 = v9;
      v8 = (int *)((char *)v8 + 1);
    }
    while ( v7 < 4 );
    if ( Function_224f30c(v5 + 4468, v5, 4, &v11) == 1 )
      ++*v4;
    return 0;
  }
  if ( v6 == 1 )
    goto LABEL_5;
  if ( Function_224f4b8(
         v5 + 4468,
         *(uchar *)(*(uint *)v5 + 295) - *(uchar *)(*(uint *)v5 + 375) - 1,
         *(uchar *)(*(uint *)v5 + 291),
         *(uchar *)(*(uint *)v5 + 284)) == 1 )
    return 3;
  return 0;
}

//----- (0223F0BC) --------------------------------------------------------
int __fastcall Function_223f0bc(int a1, char a2)
{
  int result;

  switch ( a2 )
  {
    case 0:
      result = LOWORD(dword_2252FC4[a1]);
      break;
    case 1:
      result = BYTE2(dword_2252FC4[a1]);
      break;
    case 2:
      result = HIBYTE(dword_2252FC4[a1]);
      break;
    case 3:
      result = 8 * HIBYTE(dword_2252FC4[a1]);
      break;
    case 4:
      result = 2 * BYTE2(dword_2252FC4[a1]);
      break;
    default:
      ErrorHandler();
      result = 0;
      break;
  }
  return result;
}

//----- (0223F118) --------------------------------------------------------
int __fastcall Function_223f118(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;

  LoadOverlay(11, 2, a3, a4);
  LoadOverlay(12, 2, v4, v5);
  return LoadOverlay(22, 2, v6, v7);
}

//----- (0223F140) --------------------------------------------------------
int __fastcall Function_223f140(uint a1)
{
  return Function_2024220(a1, 0, 2, 0, 2, (void (*)(void))Function_223f15c);
}

//----- (0223F15C) --------------------------------------------------------
int *Function_223f15c()
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

//----- (0223F1E0) --------------------------------------------------------
uint __fastcall Function_223f1e0(int a1)
{
  return Function_20242c4(a1);
}

//----- (0223F1E8) --------------------------------------------------------
int __fastcall Function_223f1e8(uint a1, uint *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15)
{
  int v15;
  int v16;
  int v17;
  int v18;
  int *v19;
  int v20;
  int *v21;
  int v22;
  uint *v23;
  int result;
  uint v25;
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
  uint v44;

  v25 = a1;
  v26 = a2;
  v27 = a3;
  v28 = a4;
  v15 = a11;
  v16 = Function_2002d7c(a7, a6, 0);
  v17 = v16 / 8;
  if ( Function_20bd140(v16, 8) )
    LOBYTE(v17) = v17 + 1;
  Function_201a7a0((int)&v32);
  Function_201a870(v26, (int)&v32, (uchar)v17, 2, 0, 0);
  Function_201d7e0((int)&v32, a7);
  v18 = Function_2012898((int)&v32, 1, v25);
  Function_201ed94(v18, 1, 1, (int)&v29);
  if ( a13 == 1 )
    v15 = a11 - v16 / 2;
  v33 = v28;
  v34 = &v32;
  v35 = Function_200d9b0(v27);
  v36 = Function_200d04c(v27, a10);
  v37 = 0;
  v39 = v15;
  v38 = v30;
  v40 = a12 - 8;
  v41 = a14;
  v42 = a15;
  v43 = 1;
  v44 = v25;
  v19 = Function_20127e8(&v33);
  v21 = v19;
  if ( a9 )
    Function_2012a90(v19, a9);
  Function_20128c4(v21, v15, a12 - 8, v20);
  Function_201a8fc((int)&v32);
  *(uint *)a5 = v21;
  v22 = v30;
  v23 = (uint *)(a5 + 4);
  *v23 = *(uint *)&v29;
  v23[1] = v22;
  result = v31;
  *(uint *)(a5 + 12) = v31;
  *(ushort *)(a5 + 16) = v16;
  return result;
}

//----- (0223F2E4) --------------------------------------------------------
uint __fastcall Function_223f2e4(int **a1)
{
  int **v1;

  v1 = a1;
  Function_2012870(*a1);
  return Function_201ee28((int)(v1 + 1));
}

//----- (0223F2F8) --------------------------------------------------------
int __fastcall Function_223f2f8(int a1, int a2, int a3, int a4)
{
  if ( a4 == 1 )
    a2 -= (uint)*(ushort *)(a1 + 16) >> 1;
  return Function_20128c4(*(uint **)a1, a2, a3 - 8, (int)Function_20128c4);
}

//----- (0223F310) --------------------------------------------------------
ushort *__fastcall Function_223f310(uint a1, uint a2)
{
  uint v2;
  ushort **v3;
  ushort *v4;

  v2 = a1;
  v3 = (ushort **)LoadFromMsgNARC(1, 26, 207, a2);
  v4 = Function_200b1ec_CallMsgDecrypt(v3, v2);
  Function_200b190((ushort *)v3);
  return v4;
}

//----- (0223F334) --------------------------------------------------------
uint __fastcall Function_223f334(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = Function_2252a9c(a2, *(uchar *)(a1 + 290));
  v4 = 0;
  v5 = v2;
  do
  {
    ++v4;
    *(ushort *)(v5 + 298) = Function_2252a70(*(uint *)(v2 + 248), v3);
    v2 += 4;
    v5 += 12;
  }
  while ( v4 < 4 );
  return free(v3);
}

//----- (0223F374) --------------------------------------------------------
int __fastcall Function_223f374(int **a1)
{
  int **v1;
  int v2;
  uint v3;
  uint v4;
  uint v5;
  int result;
  uint v7;
  int **v8;
  int **v9;
  uint v10;
  uint v11;
  int v12;

  v8 = a1;
  v1 = a1;
  v12 = 0;
  v9 = a1;
  while ( 1 )
  {
    v2 = 100;
    v3 = GetPkmnData(*v1, 6u, 0);
    v4 = *((uchar *)v8 + 287);
    if ( v4 <= 4 )
      break;
    switch ( (uchar)v4 )
    {
      case 0:
        v11 = GetPkmnData(*v1, 0x13u, 0);
        v10 = GetPkmnData(*v1, 0x17u, 0);
        v5 = GetPkmnData(*v1, 0x14u, 0);
        if ( v3 == 260 )
        {
          v2 = 110;
        }
        else if ( v3 == 261 || v3 == 264 )
        {
          v2 = 105;
        }
        goto LABEL_35;
      case 1:
        v11 = GetPkmnData(*v1, 0x14u, 0);
        v10 = GetPkmnData(*v1, 0x13u, 0);
        v5 = GetPkmnData(*v1, 0x15u, 0);
        switch ( v3 )
        {
          case 0x104u:
            goto LABEL_16;
          case 0x105u:
            v2 = 110;
            break;
          case 0x106u:
LABEL_16:
            v2 = 105;
            break;
        }
        goto LABEL_35;
      case 2:
        v11 = GetPkmnData(*v1, 0x15u, 0);
        v10 = GetPkmnData(*v1, 0x14u, 0);
        v5 = GetPkmnData(*v1, 0x16u, 0);
        switch ( v3 )
        {
          case 0x105u:
            goto LABEL_22;
          case 0x106u:
            v2 = 110;
            break;
          case 0x107u:
LABEL_22:
            v2 = 105;
            break;
        }
        goto LABEL_35;
      case 3:
        v11 = GetPkmnData(*v1, 0x16u, 0);
        v10 = GetPkmnData(*v1, 0x15u, 0);
        v5 = GetPkmnData(*v1, 0x17u, 0);
        switch ( v3 )
        {
          case 0x106u:
            goto LABEL_28;
          case 0x107u:
            v2 = 110;
            break;
          case 0x108u:
LABEL_28:
            v2 = 105;
            break;
        }
        goto LABEL_35;
      case 4:
        v11 = GetPkmnData(*v1, 0x17u, 0);
        v10 = GetPkmnData(*v1, 0x16u, 0);
        v5 = GetPkmnData(*v1, 0x13u, 0);
        if ( v3 == 260 || v3 == 263 )
        {
          v2 = 105;
        }
        else if ( v3 == 264 )
        {
          v2 = 110;
        }
LABEL_35:
        v7 = GetPkmnData(*v1, 0x18u, 0);
        *((ushort *)v9 + 148) = s32_div_f((v11 + (int)(v7 + v10 + v5) / 2) * v2, 100);
        v9 += 3;
        ++v1;
        result = v12 + 1;
        v12 = result;
        if ( result >= 4 )
          return result;
        break;
      default:
        return ErrorHandler();
    }
  }
  JUMPOUT(__CS__, *((short *)&off_223F3AC + v4) + 35910574);
  return result;
}

//----- (0223F560) --------------------------------------------------------
int __fastcall Function_223f560(int *a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7;
  int *v8;
  int v9;
  int result;

  v7 = a3;
  v8 = a1;
  v9 = a2;
  if ( a4 != -1 )
    Function_200cbdc(a1, a2, 46, 73, 1, 1, a4);
  if ( a5 != -1 )
    Function_200cd7c(v7, 2u, v8, v9, 46, 7, 0, 1, 1, a5);
  if ( a6 != -1 )
    Function_200ce0c(v8, v9, 46, 74, 1, a6);
  result = -1;
  if ( a7 != -1 )
    result = Function_200ce3c(v8, v9, 46, 75, 1, a7);
  return result;
}

//----- (0223F5E8) --------------------------------------------------------
int __fastcall Function_223f5e8(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int result;

  v5 = a3;
  v6 = a1;
  v7 = a4;
  if ( a2 != -1 )
    Function_200d070(a1, a2);
  if ( v5 != -1 )
    Function_200d080(v6, v5);
  if ( v7 != -1 )
    Function_200d090(v6, v7);
  result = -1;
  if ( a5 != -1 )
    result = Function_200d0a0(v6, a5);
  return result;
}

//----- (0223F630) --------------------------------------------------------
uint *__fastcall Function_223f630(int a1, uint *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, uint a11)
{
  int *v11;
  uint *v12;
  char *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  short *v18;
  int **v19;
  int v20;
  int *v21;
  uint *result;
  int v23;
  int v24;
  char v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;

  v11 = dword_22531FC;
  v24 = a3;
  v23 = a1;
  v12 = a2;
  v13 = &v25;
  v14 = 6;
  do
  {
    v15 = *v11;
    v16 = v11[1];
    v11 += 2;
    *(uint *)v13 = v15;
    *((uint *)v13 + 1) = v16;
    v13 += 8;
    --v14;
  }
  while ( v14 );
  v17 = *v11;
  v18 = &word_22531CC;
  *(uint *)v13 = v17;
  v19 = (int **)v23;
  v29 = a5;
  v28 = a4;
  v30 = a6;
  v20 = 0;
  v31 = a7;
  v27 = a8;
  v26 = a9;
  v32 = a10;
  do
  {
    v21 = Function_200ce6c(v12, v24, (short *)&v25);
    *v19 = v21;
    Function_200d4c4(v21, *v18, v18[1]);
    Function_200d364(*v19, *((uchar *)v18 + 6));
    Function_200d6a4((uint *)*v19, 1);
    Function_200d324(**v19);
    ++v20;
    ++v19;
    v18 += 4;
  }
  while ( v20 < 6 );
  result = AddTaskToTaskList1((int)Function_223f6e8, v23, a11);
  *(uint *)(v23 + 24) = result;
  return result;
}

//----- (0223F6C4) --------------------------------------------------------
int __fastcall Function_223f6c4(int *a1)
{
  int *v1;
  int v2;
  int *v3;
  int result;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    Function_200d0f4(*v3);
    ++v2;
    ++v3;
  }
  while ( v2 < 6 );
  Call_RemoveTaskFromTaskList((int *)v1[6]);
  result = 0;
  v1[6] = 0;
  return result;
}

//----- (0223F6E8) --------------------------------------------------------
int __fastcall Function_223f6e8(int a1, int **a2)
{
  short *v2;
  int **v3;
  int v4;
  int result;

  v2 = &word_22531CC;
  v3 = a2;
  v4 = 0;
  do
  {
    result = Function_200d7c0(*v3, v2[2]);
    ++v4;
    v2 += 4;
    ++v3;
  }
  while ( v4 < 6 );
  return result;
}

//----- (0223F70C) --------------------------------------------------------
int __fastcall Function_223f70c(uint a1, int a2, int a3, char a4, char a5, uint a6)
{
  int v6;
  int v7;
  char v8;
  int v9;

  v6 = a2;
  v7 = a3;
  v8 = a4;
  v9 = malloc(a1, 20);
  MI_CpuFill8((ushort *)v9, 0, 0x14u);
  *(uint *)(v9 + 4) = v6;
  *(uint *)(v9 + 12) = v7;
  *(uchar *)(v9 + 16) = v8;
  *(uchar *)(v9 + 18) = a5;
  *(uint *)v9 = AddTaskToTaskList1((int)Function_223f774, v9, a6);
  return v9;
}

//----- (0223F744) --------------------------------------------------------
uint __fastcall Function_223f744(int **a1)
{
  int **v1;

  v1 = a1;
  if ( !*a1 )
    ErrorHandler();
  Call_RemoveTaskFromTaskList(*v1);
  return free((int)v1);
}

//----- (0223F760) --------------------------------------------------------
BOOL Function_223f760()
{
  return Function_200ac1c(1) == 1;
}

//----- (0223F774) --------------------------------------------------------
uint __fastcall Function_223f774(int a1, int a2)
{
  int v2;
  uint result;
  int v4;
  int v5;

  v2 = a2;
  result = Function_200ac1c(1);
  if ( result )
  {
    v4 = *(uint *)(v2 + 8) + 1;
    *(uint *)(v2 + 8) = v4;
    result = *(ushort *)(*(uint *)(v2 + 12) + 2 * *(uchar *)(v2 + 17));
    if ( v4 > (int)result )
    {
      Function_200aae0(6, 0, 4, 63, 1);
      Function_2005748(0x5F8u);
      *(uint *)(v2 + 8) = 0;
      ++*(uchar *)(v2 + 17);
      result = *(uchar *)(v2 + 16);
      if ( *(uchar *)(v2 + 17) >= result )
      {
        v5 = *(uchar *)(v2 + 18);
        if ( *(uchar *)(v2 + 18) )
        {
          if ( v5 != 255 )
            *(uchar *)(v2 + 18) = v5 - 1;
          result = 0;
          *(uchar *)(v2 + 17) = 0;
        }
        else
        {
          result = Function_223f744((int **)v2);
        }
      }
    }
  }
  return result;
}

//----- (0223F7E4) --------------------------------------------------------
int Function_223f7e4()
{
  int v0;

  v0 = malloc(0x15u, 800);
  MI_CpuFill8((ushort *)v0, 0, 0x320u);
  *(uchar *)(v0 + 736) = -1;
  return v0;
}

//----- (0223F80C) --------------------------------------------------------
void __fastcall Function_223f80c(uint *a1)
{
  uint v1;
  int *v2;
  uint *v3;

  v1 = 0;
  v2 = dword_2253448;
  v3 = a1;
  do
  {
    Function_20183c4(v3, (v1 + 4) & 0xFF, v2, 0);
    Function_2019ee0(v3, (v1 + 4) & 0xFF, 0);
    Function_2019184((int)v3, (v1 + 4) & 0xFF, 0, 0);
    Function_2019184((int)v3, (v1++ + 4) & 0xFF, 3u, 0);
    v2 += 7;
  }
  while ( v1 < 4 );
}

//----- (0223F864) --------------------------------------------------------
int __fastcall Function_223f864(int a1)
{
  uint v1;
  int v2;
  int result;

  v1 = 0;
  v2 = a1;
  do
  {
    Function_2019120((v1 + 4) & 0xFF, 0);
    result = Function_2019044(v2, (v1++ + 4) & 0xFF);
  }
  while ( v1 < 4 );
  return result;
}

//----- (0223F88C) --------------------------------------------------------
uint *__fastcall Function_223f88c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  uint *v6;
  int v7;
  int v8;
  int i;
  int v10;
  int v11;
  int j;
  int v13;
  short v14;
  int *v16;
  int v17;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = (uint *)Function_223f7e4();
  *v6 = v3;
  v6[1] = v4;
  v6[2] = v5;
  v6[15] = Function_2012744(12, 0x15u);
  v16 = LoadFromNARC_8(45, 0x15u, v7, v8);
  for ( i = 0; i < 5; ++i )
  {
    v6[i + 8] = malloc(0x15u, 2048);
    v10 = Function_20071d0((int)v16, *((ushort *)dword_2253250 + i), 1, &v17, 21);
    MI_CpuCopy32((int *)(v17 + 12), (uint *)v6[i + 8], 2048);
    free(v10);
  }
  v11 = *(uint *)(v6[1] + 80);
  for ( j = 0; j < 2; ++j )
  {
    v6[j + 13] = malloc(0x15u, 512);
    Function_2003050(v11, 45, *((ushort *)&dword_2253238 + j), 21, 1, 0, 0);
    v13 = Function_2003164(v11, 1);
    MIi_CpuCopy16(v13, v6[j + 13], 512, v14);
  }
  Call_FS_CloseFile(v16);
  return v6;
}

//----- (0223F960) --------------------------------------------------------
uint __fastcall Function_223f960(uint *a1)
{
  uint *v1;
  int v2;
  uint *v3;
  int v4;
  uint *v5;

  v1 = a1;
  Function_22404b0();
  Function_20127bc(v1[15]);
  Function_2252b20(*(uint *)(v1[1] + 28), 33021, 33009);
  Function_2252bcc(v1[197]);
  v2 = 0;
  v3 = v1;
  do
  {
    free(v3[8]);
    ++v2;
    ++v3;
  }
  while ( v2 < 5 );
  v4 = 0;
  v5 = v1;
  do
  {
    free(v5[13]);
    ++v4;
    ++v5;
  }
  while ( v4 < 2 );
  Function_22409f4(v1);
  return free((int)v1);
}

//----- (0223F9C4) --------------------------------------------------------
uint *__fastcall Function_223f9c4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int *v7;
  int *v8;
  int *v9;
  int v10;
  int v11;
  void (__fastcall *v12)(int, int, int);
  int v13;
  int v15;
  int v16;
  int v17;
  int *v18;
  int *v19;

  v4 = a1;
  *(uint *)(a1 + 12) = a4;
  v16 = a3;
  v15 = a2;
  v17 = *(uint *)(*(uint *)(a1 + 4) + 36);
  v5 = *(char *)(a1 + 736);
  if ( v5 == -1 )
  {
    v16 = 1;
    v18 = 0;
  }
  else
  {
    v18 = &dword_2253558[12 * v5];
  }
  v19 = &dword_2253558[12 * a2];
  v6 = 0;
  v7 = &dword_2253558[12 * a2];
  do
  {
    Function_2019060((v6++ + 4) & 0xFF, v7[3] & 0xFF);
    v7 = (int *)((char *)v7 + 2);
  }
  while ( v6 < 4 );
  Function_2002fbc(
    *(uint *)(*(uint *)(v4 + 4) + 80),
    *(uint *)(v4 + 4 * *((ushort *)v19 + 1) + 52),
    1,
    0,
    0x200u);
  v8 = v19;
  v9 = v18;
  v10 = 0;
  do
  {
    v11 = *((ushort *)v8 + 2);
    if ( v11 != 0xFFFF && (v16 == 1 || v11 != *((ushort *)v9 + 2)) )
    {
      Function_2019574(v17, (v10 + 4) & 0xFF, *(int **)(v4 + 4 * v11 + 32), 2048);
      Function_201c3c0(v17, v10 + 4);
    }
    ++v10;
    v8 = (int *)((char *)v8 + 2);
    v9 = (int *)((char *)v9 + 2);
  }
  while ( v10 < 4 );
  *(uchar *)(v4 + 736) = v15;
  Function_22404b0(v4);
  v12 = (void (__fastcall *)(int, int, int))v19[10];
  if ( v12 )
    v12(v4, v15, v16);
  v13 = *(ushort *)v19;
  if ( v13 != 0xFFFF && (v16 == 1 || v13 != *(ushort *)v18) )
  {
    *(uint *)(v4 + 728) = Function_2006f50(45, v13, 1, (uint *)(v4 + 732), 21);
    AddTaskToTaskList3((int)Function_22411e4, v4, 0xAu);
  }
  return AddTaskToTaskList3((int)Function_2241220, v4, 0xAu);
}

//----- (0223FAF8) --------------------------------------------------------
int __fastcall Function_223faf8(int a1)
{
  int v1;
  int v2;
  int *v3;
  int v5;
  int v6;
  int (__fastcall *v7)(int, int, int);
  void (__fastcall *v8)(int, int);
  int v9;

  v1 = a1;
  v2 = 0;
  if ( *(char *)(a1 + 736) == -1 )
    ErrorHandler();
  v3 = &dword_2253558[12 * *(char *)(v1 + 736)];
  if ( !v3[5] )
    return -1;
  if ( !v3[6] )
    ErrorHandler();
  v5 = Function_2022664((uchar *)v3[5]);
  if ( v5 == -1 )
  {
    v5 = Function_2240c90(v1);
    v2 = 1;
  }
  v9 = -1;
  if ( v5 == -1 )
  {
    v6 = 255;
  }
  else
  {
    v9 = *(uint *)(v3[6] + 4 * v5);
    v6 = *(uchar *)(v3[7] + v5);
  }
  v7 = (int (__fastcall *)(int, int, int))v3[11];
  if ( v7 )
  {
    v9 = v7(v1, v9, v6);
    if ( v9 != -1 )
    {
      v8 = (void (__fastcall *)(int, int))v3[9];
      if ( v8 )
        v8(v1, v5);
      MI_CpuFill8((ushort *)(v1 + 792), 0, 4u);
      Function_2252c9c(*(uint *)(v1 + 788));
      *(uchar *)(v1 + 796) = v2 > 0;
    }
  }
  return v9;
}

//----- (0223FBC0) --------------------------------------------------------
BOOL __fastcall Function_223fbc0(int a1)
{
  return !*(uint *)(a1 + 16) && !*(uint *)(a1 + 20);
}

//----- (0223FBD4) --------------------------------------------------------
uint __fastcall Function_223fbd4(uint **a1)
{
  uint **v1;
  int v2;
  int v3;
  ushort *v4;
  ushort *v5;
  int v6;
  int v7;

  v1 = a1;
  v2 = Function_2095848(
         *(uchar *)(*a1[1] + 288),
         *(uchar *)(*a1[1] + 289),
         *((uchar *)*a1 + 369));
  v3 = Function_20958c4(*(uchar *)(*v1[1] + 287), *(uchar *)(*v1[1] + 289));
  v4 = Function_200b1ec_CallMsgDecrypt((ushort **)v1[1][14], v2);
  v5 = Function_200b1ec_CallMsgDecrypt((ushort **)v1[1][14], v3);
  Function_2240138(v1, v1 + 16, v4);
  Function_2240138(v1, v1 + 21, v5);
  Function_20237bc_FreeMsg((int)v4, v6);
  Function_20237bc_FreeMsg((int)v5, v7);
  return Function_2002fec(v1[1][20], 45, 38, 21, 1, 32, 0x20u, 16 * *(uchar *)(*v1[1] + 287));
}

//----- (0223FCAC) --------------------------------------------------------
int __fastcall Function_223fcac(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  short v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int *v10;
  int i;
  int j;
  int result;
  int k;
  int v15;
  int v16;
  int l;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  char v27[8];
  ushort v28[1];

  v1 = a1;
  v2 = a1 + 420;
  *(uchar *)(a1 + 737) = -1;
  v3 = 0;
  v4 = a1 + 64;
  v26 = a1 + 580;
  while ( v3 < 4 )
  {
    v28[v3] = GetPkmnData(
                *(int **)(**(uint **)(v1 + 4) + 4 * *(uchar *)(**(uint **)(v1 + 4) + 291)),
                v3 + 54,
                0);
    if ( v28[v3] )
      v5 = *(uchar *)(v2 + v3 + 300);
    else
      v5 = 0;
    *(ushort *)&v27[2 * v3] = v5;
    v6 = LOWORD(dword_2253278[v3]);
    v7 = HIWORD(dword_2253278[v3]);
    Function_2240138(v1, v4 + 20 * v3, 0);
    v8 = LOWORD(dword_2253314[2 * v3]);
    v9 = HIWORD(dword_2253314[2 * v3]);
    Function_2240138(v1, v4 + 20 * (v3 + 4), 0);
    v18 = 0;
    v19 = 33008;
    v10 = &dword_2253314[2 * v3];
    v20 = *((ushort *)v10 + 2);
    v21 = *((ushort *)v10 + 3);
    v22 = 0;
    v23 = v26 + 20 * v3;
    Function_2240138(v1, v4 + 20 * (v3 + 8), 0);
    if ( !v28[v3] )
    {
      Function_20129d0(*(uint **)(v1 + 20 * v3 + 64), 0);
      Function_20129d0(*(uint **)(v1 + 20 * (v3 + 4) + 64), 0);
      Function_20129d0(*(uint **)(v1 + 20 * (v3 + 8) + 64), 0);
    }
    ++v3;
  }
  for ( i = 0; i < 4; ++i )
  {
    if ( v28[i] )
      Function_2240424(v1, *(uchar *)(v2 + i + 304), i);
    else
      Function_2240424(v1, -1, i);
  }
  for ( j = 0; j < 4; ++j )
  {
    if ( v28[j] && !Function_2243a98(*(uint *)(v1 + 8), *(uchar *)(**(uint **)(v1 + 4) + 291)) )
    {
      Function_2002fbc(
        *(uint *)(*(uint *)(v1 + 4) + 80),
        *(uint *)(v1 + 56) + 256,
        1,
        16 * (j + 4) & 0xFFFF,
        0x20u);
      if ( *(uchar *)(v1 + 737) != 255 )
        ErrorHandler();
      *(uchar *)(v1 + 737) = j;
    }
  }
  result = Function_22402e8(v1, v28);
  for ( k = 0; k < 4; ++k )
  {
    result = v28[k];
    if ( v28[k] )
    {
      v15 = Function_2095734(*(ushort *)&v27[2 * k]);
      v25 = v15;
      if ( v15 < 0 )
        v15 = -v15;
      v24 = s32_div_f(v15, 10);
      if ( v24 > 6 )
        ErrorHandler();
      v16 = v1 + 24 * k;
      for ( l = 0; ; ++l )
      {
        result = v24;
        if ( l >= v24 )
          break;
        if ( *(uint *)(v16 + 4 * l + 324) )
          ErrorHandler();
        *(uint *)(v16 + 4 * l + 324) = Function_224136c(
                                           *(uint *)(*(uint *)(v1 + 4) + 24),
                                           *(uint *)(*(uint *)(v1 + 4) + 28),
                                           dword_2253334[2 * k] + 8 * l,
                                           dword_2253334[2 * k + 1],
                                           v25,
                                           v18,
                                           v19,
                                           v20,
                                           v21,
                                           v22,
                                           v23);
      }
    }
  }
  return result;
}

//----- (0223FF38) --------------------------------------------------------
int __fastcall Function_223ff38(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int result;

  v1 = a1;
  v2 = 0;
  v3 = a1 + 64;
  while ( v2 < 3 )
  {
    v4 = LOWORD(dword_225325C[v2]);
    v5 = HIWORD(dword_225325C[v2]);
    Function_2240138(v1, v3 + 20 * v2++, 0);
  }
  v6 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(*(uint *)(v1 + 4) + 56), 0x35u);
  Function_2240138(v1, v1 + 64 + 20 * v2, v6);
  Function_20237bc_FreeMsg((int)v6, v7);
  result = Function_22412c0(
             *(uint *)(*(uint *)(v1 + 4) + 24),
             *(uint *)(*(uint *)(v1 + 4) + 28),
             *(uchar *)(**(uint **)(v1 + 4) + 286));
  *(uint *)(v1 + 320) = result;
  return result;
}

//----- (0223FFF4) --------------------------------------------------------
int __fastcall Function_223fff4(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int result;
  int v6;

  v3 = a2;
  v4 = a1;
  v6 = a3;
  switch ( (uchar)a2 + 1 )
  {
    case 1:
    case 2:
    case 3:
    case 4:
      if ( GetPkmnData(
             *(int **)(**(uint **)(a1 + 4) + 4 * *(uchar *)(**(uint **)(a1 + 4) + 291)),
             a2 + 54,
             0)
        && *(uchar *)(v4 + 737) != v3 )
      {
        Function_2240930(v4, v6);
        Function_22404cc(Function_2240658, v4);
        *(uint *)(v4 + 756) = (char *)dword_22532E4 + 6 * v3;
        *(uint *)(v4 + 760) = &dword_2253388[4 * v3];
        *(uchar *)(v4 + 768) = 2;
        *(uint *)(v4 + 764) = v3;
        result = v3;
      }
      else
      {
        result = -1;
      }
      break;
    default:
      result = -1;
      break;
  }
  return result;
}

//----- (02240094) --------------------------------------------------------
int __fastcall Function_2240094(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int result;
  char v6;
  BOOL v7;

  v3 = a2;
  v4 = a1;
  switch ( (uchar)a2 + 1 )
  {
    case 1:
      v6 = 0;
      goto LABEL_7;
    case 2:
      v6 = 1;
      goto LABEL_7;
    case 3:
      v6 = 2;
      goto LABEL_7;
    case 4:
      v6 = 3;
LABEL_7:
      v7 = a2 == *(uchar *)(**(uint **)(a1 + 4) + 286);
      Function_2240930(a1, a3);
      Function_22404cc(Function_224051c, v4);
      *(uint *)(v4 + 756) = (char *)dword_22532FC + 6 * v3;
      *(uint *)(v4 + 760) = &dword_22533C8[4 * v3];
      *(uchar *)(v4 + 768) = 3;
      *(uint *)(v4 + 764) = v3;
      *(uchar *)(v4 + 769) = v6;
      if ( v7 == 1 )
        *(uint *)(v4 + 744) = *(uint *)(v4 + 320);
      result = v3;
      break;
    default:
      result = a2;
      break;
  }
  return result;
}

//----- (02240138) --------------------------------------------------------
int __fastcall Function_2240138(int a1, int **a2, int a3, int a4, int a5, char a6, int a7, int a8, int a9, int a10, int a11)
{
  int **v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int *v18;
  int v19;
  uint *v20;
  int result;
  int v22;
  int v23;
  int v24;
  uint *v25;
  int v26;
  int v27;
  char v28;
  int v29;
  int *v30;
  char v31;
  int v32;
  int v33;
  int v34;
  int v35;
  char *v36;
  int v37;
  uchar *v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;

  v11 = a2;
  v12 = a1;
  v22 = a3;
  v23 = a4;
  v13 = a8;
  if ( *a2 )
    ErrorHandler();
  v14 = *(uint *)(v12 + 4);
  v25 = *(uint **)(v14 + 36);
  v24 = *(uint *)(v14 + 28);
  if ( a11 )
  {
    v27 = *(ushort *)(a11 + 18);
    v26 = *(ushort *)(a11 + 16);
  }
  else
  {
    Function_2240c60(v22, v23, &v27, &v26);
  }
  if ( a11 )
  {
    v15 = *(uint *)(a11 + 4);
    *(uint *)&v31 = *(uint *)a11;
    v32 = v15;
    v16 = *(uint *)(a11 + 12);
    v33 = *(uint *)(a11 + 8);
    v34 = v16;
  }
  else
  {
    Function_201a7a0((int)&v31);
    Function_201a870(v25, (int)&v31, (uchar)v26, 2, 0, 0);
    Function_201d7e0((int)&v31, v23);
  }
  v17 = Function_2012898((int)&v31, 2, 0x15u);
  Function_201ed94(v17, 1, 2, (int)&v28);
  if ( a10 == 1 )
    v13 = a8 - v27 / 2;
  v35 = *(uint *)(v12 + 60);
  v36 = &v31;
  v37 = Function_200d9b0(v24);
  v38 = Function_200d04c(v24, a7);
  v39 = 0;
  v43 = 0;
  v40 = v29;
  v44 = 100;
  v45 = 2;
  v46 = 21;
  v41 = v13;
  v42 = a9 + 264;
  v18 = Function_20127e8(&v35);
  Function_2012ac0(v18, a6);
  Function_20128c4(v18, v13, a9 + 264, a9);
  if ( !a11 )
    Function_201a8fc((int)&v31);
  *v11 = v18;
  v19 = v29;
  v20 = v11 + 1;
  *v20 = *(uint *)&v28;
  v20[1] = v19;
  v11[3] = v30;
  result = v27;
  *((ushort *)v11 + 8) = v27;
  return result;
}

//----- (02240260) --------------------------------------------------------
int *__fastcall Function_2240260(int a1)
{
  int v1;
  int v2;
  int v3;
  int *result;

  v1 = a1;
  v2 = 0;
  v3 = a1 + 68;
  do
  {
    result = *(int **)(v1 + 64);
    if ( result )
    {
      Function_2012870(result);
      result = (int *)Function_201ee28(v3);
      *(uint *)(v1 + 64) = 0;
    }
    ++v2;
    v1 += 20;
    v3 += 20;
  }
  while ( v2 < 12 );
  return result;
}

//----- (0224028C) --------------------------------------------------------
int __fastcall Function_224028c(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = *(uint *)(a1 + 320);
  if ( result )
  {
    Function_2241314();
    result = 320;
    *(uint *)(v1 + 320) = 0;
  }
  return result;
}

//----- (022402A8) --------------------------------------------------------
int __fastcall Function_22402a8(int a1)
{
  int v1;
  int v2;
  int result;
  int v4;
  int v5;

  v4 = a1;
  v5 = 0;
  do
  {
    v1 = v4;
    v2 = 0;
    do
    {
      if ( *(uint *)(v1 + 324) )
      {
        Function_22413ac();
        *(uint *)(v1 + 324) = 0;
      }
      ++v2;
      v1 += 4;
    }
    while ( v2 < 6 );
    v4 += 24;
    result = v5 + 1;
    v5 = result;
  }
  while ( result < 4 );
  return result;
}

//----- (022402E8) --------------------------------------------------------
int __fastcall Function_22402e8(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int *v5;
  char *v6;
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
  short v17;
  short v18;
  int v19;

  v2 = a1;
  v3 = a2;
  v4 = *(uint *)(a1 + 4);
  v5 = dword_2253354;
  v6 = (char *)&v17;
  v16 = *(uint *)(v4 + 24);
  v7 = 6;
  v15 = *(uint *)(v4 + 28);
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
  result = *v5;
  v11 = 0;
  *(uint *)v6 = result;
  while ( v11 < 4 )
  {
    if ( *(uint *)(v2 + 4 * v11 + 304) )
      ErrorHandler();
    result = *(ushort *)(v3 + 2 * v11);
    if ( *(ushort *)(v3 + 2 * v11) )
    {
      v12 = *(uchar *)(v2 + v11 + 724);
      v19 = v11 + 33014;
      v17 = dword_2253298[v11];
      v18 = HIWORD(dword_2253298[v11]);
      v13 = Function_224f154(v16, v15, v12, &v17);
      v14 = v2 + 4 * v11;
      *(uint *)(v14 + 304) = v13;
      result = Function_200d500(*(int **)(v14 + 304), v17, v18, 1114112);
    }
    ++v11;
  }
  return result;
}

//----- (02240388) --------------------------------------------------------
int __fastcall Function_2240388(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = 0;
  v2 = a1;
  do
  {
    result = *(uint *)(v2 + 304);
    if ( result )
    {
      Function_224f184();
      result = 304;
      *(uint *)(v2 + 304) = 0;
    }
    ++v1;
    v2 += 4;
  }
  while ( v1 < 4 );
  return result;
}

//----- (022403B0) --------------------------------------------------------
int __fastcall Function_22403b0(int a1, int a2, int *a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  short v12;
  int v13;
  int v14;
  short *v15;
  ushort *v16;
  short v17;
  int v19;
  int v20;

  v5 = a1;
  v6 = a2;
  v7 = a4;
  v8 = a3;
  v20 = *(uint *)(*(uint *)(a1 + 4) + 36);
  v9 = Function_2019fe4(v20, 4);
  v10 = *(uint *)(v5 + 4 * v7 + 32);
  v11 = *v8;
  v19 = v10;
  v12 = *(ushort *)(v6 + 2 * a5);
  if ( *v8 <= v8[1] )
  {
    v13 = 32 * v11;
    do
    {
      v14 = v8[2];
      if ( v14 <= v8[3] )
      {
        v15 = (short *)(v19 + 2 * v13 + 2 * v14);
        v16 = (ushort *)(v9 + 2 * v13 + 2 * v14);
        do
        {
          v17 = *v15;
          ++v14;
          ++v15;
          *v16 = v12 + v17;
          ++v16;
        }
        while ( v14 <= v8[3] );
      }
      ++v11;
      v13 += 32;
    }
    while ( v11 <= v8[1] );
  }
  return Function_201c3c0(v20, 4);
}

//----- (02240424) --------------------------------------------------------
int __fastcall Function_2240424(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int *v7;
  int *v8;
  int *v9;
  int *v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a3;
  v5 = a1;
  v7 = dword_2253518;
  v8 = dword_2253538;
  v9 = dword_22534D8;
  v10 = dword_22534F8;
  v11 = 35992760;
  if ( a2 != -1 )
    return Function_2002fbc(*(uint *)(*(uint *)(a1 + 4) + 80), (int)(&v7)[a2], 1, 16 * (a3 + 4) & 0xFFFF, 0x20u);
  Function_22403b0(a1, (int)&off_2253248 + 2 * a3, &dword_2253408[4 * a3], 2, 0);
  return Function_2002fbc(
           *(uint *)(*(uint *)(v5 + 4) + 80),
           *(uint *)(v5 + 56) + 256,
           1,
           16 * (v4 + 4) & 0xFFFF,
           0x20u);
}

//----- (022404A8) --------------------------------------------------------
int __fastcall Function_22404a8(int a1)
{
  return Function_22404b0(a1);
}

//----- (022404B0) --------------------------------------------------------
int *__fastcall Function_22404b0(int a1)
{
  int v1;

  v1 = a1;
  Function_224028c(a1);
  Function_22402a8(v1);
  Function_2240388(v1);
  return Function_2240260(v1);
}

//----- (022404CC) --------------------------------------------------------
uint *__fastcall Function_22404cc(int a1, int a2)
{
  int v2;
  int v3;
  uint *result;

  v2 = a2;
  v3 = a1;
  if ( *(uint *)(a2 + 16) )
    ErrorHandler();
  MI_CpuFill8((ushort *)(v2 + 740), 0, 0x20u);
  result = AddTaskToTaskList1(v3, v2, 0x514u);
  *(uint *)(v2 + 16) = result;
  return result;
}

//----- (022404FC) --------------------------------------------------------
int *__fastcall Function_22404fc(int a1)
{
  int v1;
  int *result;

  v1 = a1;
  result = *(int **)(a1 + 16);
  if ( result )
  {
    Call_RemoveTaskFromTaskList(result);
    *(uint *)(v1 + 16) = 0;
    result = (int *)MI_CpuFill8((ushort *)(v1 + 740), 0, 0x20u);
  }
  return result;
}

//----- (0224051C) --------------------------------------------------------
int *__fastcall Function_224051c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint **v8;
  int *result;
  int v10;
  int v11;
  int v12;
  int v13;
  uint **v14;
  int v15;
  int v16;

  v2 = a2;
  v3 = *(short *)(a2 + 740);
  if ( *(ushort *)(a2 + 740) )
  {
    if ( v3 == 1 )
    {
      result = (int *)(short)++*(ushort *)(a2 + 742);
      if ( (int)result <= 0 )
        return result;
      *(ushort *)(a2 + 742) = 0;
      ++*(ushort *)(a2 + 740);
    }
    else if ( v3 != 2 )
    {
      result = (int *)(short)++*(ushort *)(a2 + 742);
      if ( (int)result > 0 )
      {
        Function_22404a8(a2);
        result = Function_22404fc(v2);
      }
      return result;
    }
    Function_22403b0(a2, *(uint *)(a2 + 756), *(int **)(a2 + 760), *(uchar *)(a2 + 768), 1);
    Function_20129a4(*(uint *)(v2 + 20 * *(uchar *)(v2 + 769) + 64), &v16, &v15);
    Function_20128c4(*(uint **)(v2 + 20 * *(uchar *)(v2 + 769) + 64), v16, v15 + 1, v10);
    v12 = 0;
    v13 = v2;
    do
    {
      v14 = *(uint ***)(v13 + 744);
      if ( v14 )
        Function_200d5ac(*v14, 0, 1, v11);
      ++v12;
      v13 += 4;
    }
    while ( v12 < 3 );
    result = (int *)740;
    ++*(ushort *)(v2 + 740);
  }
  else
  {
    Function_22403b0(a2, *(uint *)(a2 + 756), *(int **)(a2 + 760), *(uchar *)(a2 + 768), 2);
    Function_20129a4(*(uint *)(v2 + 20 * *(uchar *)(v2 + 769) + 64), &v16, &v15);
    Function_20128c4(*(uint **)(v2 + 20 * *(uchar *)(v2 + 769) + 64), v16, v15 - 2, v4);
    v6 = 0;
    v7 = v2;
    do
    {
      v8 = *(uint ***)(v7 + 744);
      if ( v8 )
        Function_200d5ac(*v8, 0, -2, v5);
      ++v6;
      v7 += 4;
    }
    while ( v6 < 3 );
    result = (int *)740;
    ++*(ushort *)(v2 + 740);
  }
  return result;
}

//----- (02240658) --------------------------------------------------------
int *__fastcall Function_2240658(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
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
  uint **v17;
  int *result;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  uint **v26;
  int v27;
  int v28;
  int v29;
  char v30;
  ushort v31;
  ushort v32;
  ushort v33;
  int v34;
  int v35;
  int v36;

  v36 = a4;
  v4 = a2;
  v5 = 0;
  v6 = &v30;
  do
  {
    *(ushort *)v6 = GetPkmnData(
                     *(int **)(**(uint **)(v4 + 4) + 4 * *(uchar *)(**(uint **)(v4 + 4) + 291)),
                     v5++ + 54,
                     0);
    v6 += 2;
  }
  while ( v5 < 4 );
  switch ( (uchar)*(uint *)(v4 + 764) )
  {
    case 0u:
      v29 = 8;
      v7 = 0;
      v8 = 4;
      v28 = *(ushort *)&v30;
      v27 = 0;
      break;
    case 1u:
      v29 = 9;
      v7 = 1;
      v8 = 5;
      v28 = v31;
      v27 = 1;
      break;
    case 2u:
      v29 = 10;
      v7 = 2;
      v8 = 6;
      v28 = v32;
      v27 = 2;
      break;
    case 3u:
      v29 = 11;
      v7 = 3;
      v8 = 7;
      v28 = v33;
      v27 = 3;
      break;
    default:
      v7 = 0;
      v8 = 0;
      v29 = 0;
      v28 = 0;
      break;
  }
  v9 = *(short *)(v4 + 740);
  if ( *(ushort *)(v4 + 740) )
  {
    if ( v9 == 1 )
    {
      result = (int *)(short)++*(ushort *)(v4 + 742);
      if ( (int)result <= 0 )
        return result;
      *(ushort *)(v4 + 742) = 0;
      ++*(ushort *)(v4 + 740);
    }
    else if ( v9 != 2 )
    {
      result = (int *)(short)++*(ushort *)(v4 + 742);
      if ( (int)result > 0 )
      {
        Function_22404a8(v4);
        result = Function_22404fc(v4);
      }
      return result;
    }
    Function_22403b0(v4, *(uint *)(v4 + 756), *(int **)(v4 + 760), *(uchar *)(v4 + 768), 1);
    Function_20129a4(*(uint *)(v4 + 64 + 20 * v7), &v35, &v34);
    Function_20128c4(*(uint **)(v4 + 64 + 20 * v7), v35, v34 + 1, v19);
    Function_20129a4(*(uint *)(v4 + 64 + 20 * v8), &v35, &v34);
    Function_20128c4(*(uint **)(v4 + 64 + 20 * v8), v35, v34 + 1, v20);
    Function_20129a4(*(uint *)(v4 + 64 + 20 * v29), &v35, &v34);
    Function_20128c4(*(uint **)(v4 + 64 + 20 * v29), v35, v34 + 1, v21);
    if ( v28 )
    {
      Function_200d5ac(**(uint ***)(v4 + 4 * v7 + 304), 0, 1, v22);
      v24 = 0;
      v25 = v4 + 24 * v27;
      do
      {
        v26 = *(uint ***)(v25 + 324);
        if ( v26 )
          Function_200d5ac(*v26, 0, 1, v23);
        ++v24;
        v25 += 4;
      }
      while ( v24 < 6 );
    }
    result = (int *)740;
    ++*(ushort *)(v4 + 740);
  }
  else
  {
    Function_22403b0(v4, *(uint *)(v4 + 756), *(int **)(v4 + 760), *(uchar *)(v4 + 768), 2);
    Function_20129a4(*(uint *)(v4 + 64 + 20 * v7), &v35, &v34);
    Function_20128c4(*(uint **)(v4 + 64 + 20 * v7), v35, v34 - 2, v10);
    Function_20129a4(*(uint *)(v4 + 64 + 20 * v8), &v35, &v34);
    Function_20128c4(*(uint **)(v4 + 64 + 20 * v8), v35, v34 - 2, v11);
    Function_20129a4(*(uint *)(v4 + 64 + 20 * v29), &v35, &v34);
    Function_20128c4(*(uint **)(v4 + 64 + 20 * v29), v35, v34 - 2, v12);
    if ( v28 )
    {
      Function_200d5ac(**(uint ***)(v4 + 4 * v7 + 304), 0, -2, v13);
      v15 = 0;
      v16 = v4 + 24 * v27;
      do
      {
        v17 = *(uint ***)(v16 + 324);
        if ( v17 )
          Function_200d5ac(*v17, 0, -2, v14);
        ++v15;
        v16 += 4;
      }
      while ( v15 < 6 );
    }
    result = (int *)740;
    ++*(ushort *)(v4 + 740);
  }
  return result;
}

//----- (022408E0) --------------------------------------------------------
uint *__fastcall Function_22408e0(int a1, int a2)
{
  int v2;
  int v3;
  uint *result;

  v2 = a2;
  v3 = a1;
  if ( *(uint *)(a2 + 20) )
    ErrorHandler();
  MI_CpuFill8((ushort *)(v2 + 772), 0, 0xCu);
  result = AddTaskToTaskList1(v3, v2, 0x528u);
  *(uint *)(v2 + 20) = result;
  return result;
}

//----- (02240910) --------------------------------------------------------
int *__fastcall Function_2240910(int a1)
{
  int v1;
  int *result;

  v1 = a1;
  result = *(int **)(a1 + 20);
  if ( result )
  {
    Call_RemoveTaskFromTaskList(result);
    *(uint *)(v1 + 20) = 0;
    result = (int *)MI_CpuFill8((ushort *)(v1 + 772), 0, 0xCu);
  }
  return result;
}

//----- (02240930) --------------------------------------------------------
int __fastcall Function_2240930(int result, int a2)
{
  char v2;
  int v3;

  v2 = a2;
  v3 = result;
  if ( a2 != 255 )
  {
    Function_22408e0((int)Function_2240950, result);
    result = 781;
    *(uchar *)(v3 + 781) = v2;
  }
  return result;
}

//----- (02240950) --------------------------------------------------------
uint __fastcall Function_2240950(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint result;
  int v6;

  v2 = a2;
  v3 = 0;
  v4 = *(uint *)(*(uint *)(a2 + 4) + 80);
  result = *(uchar *)(a2 + 780);
  if ( *(uchar *)(a2 + 780) )
  {
    if ( result != 1 )
      return result;
  }
  else
  {
    *(ushort *)(a2 + 776) = 2560;
    *(ushort *)(a2 + 778) = -1280;
    *(ushort *)(a2 + 776) -= *(ushort *)(a2 + 778);
    ++*(uchar *)(a2 + 780);
  }
  *(ushort *)(a2 + 776) += *(ushort *)(a2 + 778);
  v6 = *(short *)(a2 + 778);
  if ( v6 < 0 || *(short *)(a2 + 776) < 4096 )
  {
    if ( v6 < 0 && *(short *)(a2 + 776) <= 0 )
    {
      *(ushort *)(a2 + 776) = 0;
      v3 = 1;
    }
  }
  else
  {
    *(ushort *)(a2 + 776) = 4096;
    v3 = 1;
  }
  result = Function_20039b0(
             v4,
             1,
             (ushort)(16 * *(uchar *)(a2 + 781)),
             0x10u,
             *(ushort *)(a2 + 776) >> 8,
             0x7FFFu);
  if ( v3 == 1 )
    result = (uint)Function_2240910(v2);
  return result;
}

//----- (022409F4) --------------------------------------------------------
uint __fastcall Function_22409f4(uint *a1)
{
  uint *v1;
  uint *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint result;
  int v8;
  int v9;

  v1 = a1;
  v9 = 0;
  v8 = (int)(a1 + 105);
  v2 = a1;
  v3 = (int)(a1 + 125);
  v4 = (int)(a1 + 145);
  do
  {
    if ( v2[108] )
      Function_201a8fc(v8);
    if ( v2[128] )
      Function_201a8fc(v3);
    if ( v2[148] )
      Function_201a8fc(v4);
    v2 += 5;
    v8 += 20;
    v3 += 20;
    v4 += 20;
    ++v9;
  }
  while ( v9 < 4 );
  v5 = 0;
  v6 = (int)(v1 + 165);
  do
  {
    result = v1[168];
    if ( result )
      result = Function_201a8fc(v6);
    ++v5;
    v1 += 5;
    v6 += 20;
  }
  while ( v5 < 3 );
  return result;
}

//----- (02240A80) --------------------------------------------------------
int __fastcall Function_2240a80(int a1, ushort *a2, int a3, int a4)
{
  int v4;
  int v5;
  ushort *v6;
  int v7;
  ushort *v8;
  int v9;
  ushort *v10;
  ushort *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  ushort *v17;
  int v18;
  int result;
  int v20;
  int v21;
  int v22;
  int v23;
  uint v24;
  uint v25;
  int v26;

  v26 = a4;
  v4 = a1;
  v23 = 0;
  v21 = a1 + 500;
  v5 = a1 + 420;
  v6 = a2;
  v22 = a1 + 420;
  v20 = a1 + 580;
  do
  {
    if ( *v6 )
    {
      v7 = v5 + v23;
      *(uchar *)(v7 + 300) = LoadMoveData((ushort)*v6, 0xAu);
      *(uchar *)(v7 + 304) = LoadMoveData((ushort)*v6, 0xBu);
    }
    else
    {
      v7 = v5 + v23;
      *(uchar *)(v7 + 300) = 0;
      *(uchar *)(v7 + 304) = 0;
    }
    v8 = Function_200b2ec((ushort)*v6, 0x15u);
    Function_2240bf4(v4, v8, 2, v22, 67336);
    Function_20237bc_FreeMsg((int)v8, v9);
    Function_2095750(*(uchar *)(v7 + 300), &v25, &v24);
    v10 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(*(uint *)(v4 + 4) + 64), v25);
    v11 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(*(uint *)(v4 + 4) + 64), v24);
    Function_2240bf4(v4, v10, 0, v21, 66048);
    Function_2240bf4(v4, v11, 0, v20, 66048);
    Function_20237bc_FreeMsg((int)v10, v12);
    Function_20237bc_FreeMsg((int)v11, v13);
    ++v6;
    v22 += 20;
    v21 += 20;
    v20 += 20;
    ++v23;
  }
  while ( v23 < 4 );
  v14 = 0;
  v15 = 0;
  v16 = v5 + 240;
  do
  {
    v17 = Function_223f310(*(ushort *)(**(uint **)(v4 + 4) + v15 + 208), 0x15u);
    Function_2240bf4(v4, v17, 2, v16, 67850);
    Function_20237bc_FreeMsg((int)v17, v18);
    ++v14;
    v15 += 8;
    v16 += 20;
  }
  while ( v14 < 3 );
  Function_2252ab0(
    *(uint *)(*(uint *)(v4 + 4) + 24),
    *(uint *)(*(uint *)(v4 + 4) + 28),
    *(uint *)(*(uint *)(v4 + 4) + 80),
    33021,
    33009,
    33016,
    33016);
  result = Function_2252b48(
             *(uint *)(*(uint *)(v4 + 4) + 24),
             *(uint *)(*(uint *)(v4 + 4) + 28),
             21,
             33021,
             33009,
             33016,
             33016,
             5,
             0);
  *(uint *)(v4 + 788) = result;
  return result;
}

//----- (02240BF4) --------------------------------------------------------
int __fastcall Function_2240bf4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v8;
  int v9;
  int v10;

  v10 = a4;
  v4 = a3;
  v5 = a1;
  v6 = a4;
  Function_2240c60(a2, a3, &v9, &v8);
  *(ushort *)(v6 + 18) = v9;
  *(ushort *)(v6 + 16) = v8;
  if ( *(uint *)(v6 + 12) )
    Function_201a8fc(v6);
  Function_201a7a0(v6);
  Function_201a870(*(uint **)(*(uint *)(v5 + 4) + 36), v6, (uchar)v8, 2, 0, 0);
  return Function_201d7e0(v6, v4);
}

//----- (02240C60) --------------------------------------------------------
int __fastcall Function_2240c60(int a1, int a2, int *a3, int *a4)
{
  int *v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int result;

  v4 = a3;
  v5 = a4;
  v6 = Function_2002d7c(a2, a1, 0);
  v7 = v6;
  v8 = v6 / 8;
  result = Function_20bd140(v6, 8);
  if ( result )
    ++v8;
  *v4 = v7;
  *v5 = v8;
  return result;
}

//----- (02240C90) --------------------------------------------------------
int __fastcall Function_2240c90(char *a1)
{
  char *v1;
  int *v2;
  int (*v3)(void);

  v1 = a1;
  v2 = &dword_2253558[12 * a1[736]];
  v3 = (int (*)(void))v2[8];
  if ( !v3 )
    return -1;
  if ( a1[792] )
    return v3();
  if ( a1[796] == 1 || dword_21BF6C4 & 0xCF3 )
  {
    if ( !a1[796] )
      Function_2005748(0x5DCu);
    v1[792] = 1;
    v1[796] = 0;
    ((void (__fastcall *)(char *))v2[8])(v1);
  }
  return -1;
}

//----- (02240D04) --------------------------------------------------------
int __fastcall Function_2240d04(int a1, int a2, int a3, uint a4)
{
  int v4;
  int v5;
  int *v6;
  int i;
  int v8;
  int v9;
  uint v11;
  int v12;
  int v13;
  uchar *v14;
  char v15[8];
  char v16;

  v13 = a2;
  v4 = a1;
  v14 = (uchar *)(a1 + 784);
  v5 = a1 + 792;
  v6 = &dword_2253558[12 * *(char *)(a1 + 736)];
  for ( i = 0; i < 4; ++i )
    *(ushort *)&v15[2 * i] = GetPkmnData(
                              *(int **)(**(uint **)(v4 + 4) + 4 * *(uchar *)(**(uint **)(v4 + 4) + 291)),
                              i + 54,
                              0);
  if ( v13 != 1 )
  {
    MI_CpuCopy8((int)&dword_225323C, (uint)&v16, 4u, a4);
    v11 = Function_2241004(v5);
    if ( v11 > 0x20 )
    {
      if ( v11 > 0x40 )
      {
        if ( v11 != 128 )
          return -1;
      }
      else if ( v11 != 64 )
      {
        return -1;
      }
    }
    else if ( v11 < 0x20 )
    {
      if ( v11 <= 2 )
      {
        if ( v11 >= 1 && v11 == 1 )
          return *((uchar *)&dword_225323C + 2 * *(char *)(v5 + 1) + *(char *)(v5 + 2));
        return -1;
      }
      if ( v11 != 16 )
        return -1;
    }
    v12 = 4 * *((uchar *)&dword_225323C + 2 * *(char *)(v5 + 1) + *(char *)(v5 + 2));
    Function_2252c78(
      *(uint *)(v4 + 788),
      *(uchar *)(v6[5] + v12 + 2) + 8,
      *(uchar *)(v6[5] + v12 + 3) - 8,
      *(uchar *)(v6[5] + v12) + 8,
      *(uchar *)(v6[5] + v12 + 1) - 8,
      1114112);
    return -1;
  }
  *(uchar *)(v5 + 2) = *v14;
  *(uchar *)(v5 + 1) = v14[1];
  v8 = *((uchar *)&dword_225323C + 2 * *(char *)(v5 + 1) + *(char *)(v5 + 2));
  if ( !*(ushort *)&v15[2 * v8] )
  {
    *v14 = 0;
    v14[1] = 0;
    *(uchar *)(v5 + 2) = 0;
    *(uchar *)(v5 + 1) = 0;
    v8 = *((uchar *)&dword_225323C + 2 * *(char *)(v5 + 1) + *(char *)(v5 + 2));
  }
  v9 = 4 * v8;
  Function_2252c78(
    *(uint *)(v4 + 788),
    *(uchar *)(v6[5] + v9 + 2) + 8,
    *(uchar *)(v6[5] + v9 + 3) - 8,
    *(uchar *)(v6[5] + v9) + 8,
    *(uchar *)(v6[5] + v9 + 1) - 8,
    1114112);
  return -1;
}

//----- (02240E68) --------------------------------------------------------
int __fastcall Function_2240e68(int a1, int a2)
{
  int v2;
  uchar *v3;
  int result;
  int i;

  v2 = 0;
  v3 = (uchar *)(a1 + 784);
  result = 0;
  while ( v2 < 2 )
  {
    for ( i = 0; i < 2; ++i )
    {
      if ( a2 == *((uchar *)&dword_225323C + 2 * v2 + i) )
      {
        *v3 = i;
        v3[1] = v2;
        return result;
      }
    }
    ++v2;
  }
  return result;
}

//----- (02240EA4) --------------------------------------------------------
int __fastcall Function_2240ea4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  uint v10;
  int v11;
  char v12;
  int v13;

  v13 = a4;
  v4 = a1;
  v5 = a1 + 792;
  v6 = 12 * *(char *)(a1 + 736);
  v7 = &dword_2253558[v6];
  if ( a2 == 1 )
  {
    *(uchar *)(a1 + 794) = *(uchar *)(a1 + 786);
    *(uchar *)(a1 + 793) = *(uchar *)(a1 + 787);
    v8 = 4 * *((uchar *)dword_2253240 + 3 * *(char *)(a1 + 793) + *(char *)(a1 + 794));
    Function_2252c78(
      *(uint *)(a1 + 788),
      *(uchar *)(v7[5] + v8 + 2) + 8,
      *(uchar *)(v7[5] + v8 + 3) - 8,
      *(uchar *)(v7[5] + v8) + 8,
      *(uchar *)(v7[5] + v8 + 1) - 8,
      1114112);
    return -1;
  }
  MI_CpuCopy8((int)dword_2253240, (uint)&v12, 6u, v6 * 4);
  v10 = Function_2241004(v5);
  if ( v10 > 0x20 )
  {
    if ( v10 > 0x40 )
    {
      if ( v10 != 128 )
        return -1;
    }
    else if ( v10 != 64 )
    {
      return -1;
    }
LABEL_16:
    v11 = 4 * *((uchar *)dword_2253240 + 3 * *(char *)(v5 + 1) + *(char *)(v5 + 2));
    Function_2252c78(
      *(uint *)(v4 + 788),
      *(uchar *)(v7[5] + v11 + 2) + 8,
      *(uchar *)(v7[5] + v11 + 3) - 8,
      *(uchar *)(v7[5] + v11) + 8,
      *(uchar *)(v7[5] + v11 + 1) - 8,
      1114112);
    return -1;
  }
  if ( v10 >= 0x20 )
    goto LABEL_16;
  if ( v10 > 2 )
  {
    if ( v10 != 16 )
      return -1;
    goto LABEL_16;
  }
  if ( v10 >= 1 )
  {
    if ( v10 == 1 )
      return *((uchar *)dword_2253240 + 3 * *(char *)(v5 + 1) + *(char *)(v5 + 2));
    if ( v10 == 2 )
      return 3;
  }
  return -1;
}

//----- (02240FC4) --------------------------------------------------------
int *__fastcall Function_2240fc4(int *result, int a2)
{
  int v2;
  int v3;
  int i;

  if ( a2 != 3 )
  {
    v2 = (int)(result + 196);
    v3 = 0;
    result = dword_2253240;
    while ( v3 < 2 )
    {
      for ( i = 0; i < 3; ++i )
      {
        if ( a2 == *((uchar *)dword_2253240 + 3 * v3 + i) )
        {
          *(uchar *)(v2 + 2) = i;
          *(uchar *)(v2 + 3) = v3;
          return result;
        }
      }
      ++v3;
    }
  }
  return result;
}

//----- (02241004) --------------------------------------------------------
int __fastcall Function_2241004(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v13;

  v4 = 1;
  v5 = a3;
  v13 = *(char *)(a1 + 2);
  v6 = a4;
  v7 = *(char *)(a1 + 1);
  if ( dword_21BF6C4 & 0x40 )
  {
    *(uchar *)(a1 + 1) = v7 - 1;
    if ( *(char *)(a1 + 1) < 0 )
      *(uchar *)(a1 + 1) = 0;
    if ( a4 && *(uchar *)(a4 + *(char *)(a1 + 2) + *(char *)(a1 + 1) * a2) == 255 )
    {
      while ( 1 )
      {
        v8 = (char)--*(uchar *)(a1 + 1);
        if ( v8 < 0 )
          break;
        if ( *(uchar *)(v8 * a2 + v6 + *(char *)(a1 + 2)) != 255 )
          goto LABEL_9;
      }
      *(uchar *)(a1 + 1) = v7;
    }
LABEL_9:
    v4 = 64;
  }
  else if ( dword_21BF6C4 & 0x80 )
  {
    *(uchar *)(a1 + 1) = v7 + 1;
    if ( *(char *)(a1 + 1) >= v5 )
      *(uchar *)(a1 + 1) = v5 - 1;
    if ( a4 && *(uchar *)(a4 + *(char *)(a1 + 2) + *(char *)(a1 + 1) * a2) == 255 )
    {
      while ( 1 )
      {
        v9 = (char)++*(uchar *)(a1 + 1);
        if ( v9 >= v5 )
          break;
        if ( *(uchar *)(v9 * a2 + v6 + *(char *)(a1 + 2)) != 255 )
          goto LABEL_18;
      }
      *(uchar *)(a1 + 1) = v7;
    }
LABEL_18:
    v4 = 128;
  }
  else if ( dword_21BF6C4 & 0x20 )
  {
    *(uchar *)(a1 + 2) = v13 - 1;
    if ( *(char *)(a1 + 2) < 0 )
      *(uchar *)(a1 + 2) = 0;
    if ( a4 && *(uchar *)(a4 + *(char *)(a1 + 2) + *(char *)(a1 + 1) * a2) == 255 )
    {
      while ( 1 )
      {
        v10 = (char)--*(uchar *)(a1 + 2);
        if ( v10 < 0 )
          break;
        if ( *(uchar *)(*(char *)(a1 + 1) * a2 + v6 + v10) != 255 )
          goto LABEL_27;
      }
      *(uchar *)(a1 + 2) = v13;
    }
LABEL_27:
    v4 = 32;
  }
  else if ( dword_21BF6C4 & 0x10 )
  {
    *(uchar *)(a1 + 2) = v13 + 1;
    if ( *(char *)(a1 + 2) >= a2 )
      *(uchar *)(a1 + 2) = a2 - 1;
    if ( a4 && *(uchar *)(a4 + *(char *)(a1 + 2) + *(char *)(a1 + 1) * a2) == 255 )
    {
      while ( 1 )
      {
        v11 = (char)++*(uchar *)(a1 + 2);
        if ( v11 >= a2 )
          break;
        if ( *(uchar *)(*(char *)(a1 + 1) * a2 + v6 + v11) != 255 )
          goto LABEL_36;
      }
      *(uchar *)(a1 + 2) = v13;
    }
LABEL_36:
    v4 = 16;
  }
  else if ( !(dword_21BF6C4 & 1) )
  {
    if ( !(dword_21BF6C4 & 2) )
      return 0;
    v4 = 2;
  }
  if ( v6
    && *(uchar *)(v6 + v13 + a2 * v7) == *(uchar *)(v6 + *(char *)(a1 + 2) + *(char *)(a1 + 1) * a2) )
  {
    *(uchar *)(a1 + 2) = v13;
    *(uchar *)(a1 + 1) = v7;
  }
  if ( *(char *)(a1 + 2) == v13 && *(char *)(a1 + 1) == v7 )
  {
    if ( v4 & 0xF0 )
      return 0;
  }
  else
  {
    Function_2005748(0x5DCu);
  }
  return v4;
}

//----- (022411E4) --------------------------------------------------------
int __fastcall Function_22411e4(int *a1, int a2)
{
  int *v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_201958c(*(uint **)(*(uint *)(a2 + 4) + 36), 4u, *(int **)(*(uint *)(a2 + 732) + 20), 24576, 0);
  free(*(uint *)(v3 + 728));
  *(uint *)(v3 + 728) = 0;
  return Call_RemoveTaskFromTaskList(v2);
}

//----- (02241220) --------------------------------------------------------
int __fastcall Function_2241220(int *a1, int a2)
{
  int v2;
  int *v3;
  int *v5;

  v5 = a1;
  v2 = 0;
  v3 = &dword_2253558[12 * *(char *)(a2 + 736)];
  do
  {
    if ( *((ushort *)v3 + 2) == 0xFFFF )
      Function_2019120((v2 + 4) & 0xFF, 0);
    else
      Function_2019120((v2 + 4) & 0xFF, 1);
    ++v2;
    v3 = (int *)((char *)v3 + 2);
  }
  while ( v2 < 4 );
  return Call_RemoveTaskFromTaskList(v5);
}

//----- (02241270) --------------------------------------------------------
int __fastcall Function_2241270(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_200cc3c(a1, a2, a3, 0x2Au, 1, 2, 33019);
  Function_200ce24(v3, v4, v5, 0x2Bu, 1, 33014);
  return Function_200ce54(v3, v4, v5, 0x2Cu, 1, 33014);
}

//----- (022412C0) --------------------------------------------------------
int *__fastcall Function_22412c0(uint *a1, int a2, short a3)
{
  short v3;
  int *v4;

  v3 = a3;
  v4 = Function_200ce6c(a1, a2, L"(`");
  Function_200d500(v4, (short)(88 * v3 + 40), 96, 1114112);
  Function_200d324(*v4);
  return v4;
}

//----- (022412F0) --------------------------------------------------------
int __fastcall Function_22412f0(int a1)
{
  int v1;

  v1 = a1;
  Function_200d070(a1, 33019);
  Function_200d090(v1, 33014);
  return Function_200d0a0(v1, 33014);
}

//----- (02241314) --------------------------------------------------------
uint __fastcall Function_2241314(int a1)
{
  return Function_200d0f4(a1);
}

//----- (0224131C) --------------------------------------------------------
int __fastcall Function_224131c(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_200cc3c(a1, a2, a3, 0x2Du, 1, 2, 33018);
  Function_200ce24(v3, v4, v5, 0x2Eu, 1, 33013);
  return Function_200ce54(v3, v4, v5, 0x2Fu, 1, 33013);
}

//----- (0224136C) --------------------------------------------------------
int *__fastcall Function_224136c(uint *a1, int a2, short a3, short a4, int a5)
{
  short v5;
  short v6;
  int *v7;
  int *v8;

  v5 = a3;
  v6 = a4;
  if ( a5 < 0 )
    v7 = Function_200ce6c(a1, a2, (short *)dword_2253680);
  else
    v7 = Function_200ce6c(a1, a2, (short *)dword_2253618);
  v8 = v7;
  Function_200d500(v7, v5, v6, 1114112);
  Function_200d324(*v8);
  return v8;
}

//----- (022413AC) --------------------------------------------------------
uint __fastcall Function_22413ac(int a1)
{
  return Function_200d0f4(a1);
}

//----- (022413B4) --------------------------------------------------------
int __fastcall Function_22413b4(int a1)
{
  int v1;

  v1 = a1;
  Function_200d070(a1, 33018);
  Function_200d090(v1, 33013);
  return Function_200d0a0(v1, 33013);
}

//----- (022413D8) --------------------------------------------------------
short *Function_17_22413d8()
{
  short *result;

  result = &REG_BLDCNT;
  REG_BLDCNT = 0;
  return result;
}

//----- (022413E4) --------------------------------------------------------
int __fastcall Function_22413e4(int a1, int a2, short a3)
{
  int v3;
  short v4;
  int v5;
  int v6;
  int result;
  int v8;
  short v9;
  int v10;
  ushort *v11;

  v3 = a2;
  v4 = a3;
  v5 = Function_2019fe4(*(uint *)(a1 + 48), 2);
  v6 = 0;
  result = v5 + 384 * v3;
  v8 = 0;
  v9 = v4 << 12;
  do
  {
    v10 = 0;
    v11 = (ushort *)(result + 2 * v8);
    do
    {
      ++v10;
      *v11 = *v11 & 0xFFF | v9;
      ++v11;
    }
    while ( v10 < 10 );
    ++v6;
    v8 += 32;
  }
  while ( v6 < 6 );
  return result;
}

//----- (02241428) --------------------------------------------------------
int __fastcall Function_2241428(int a1)
{
  int v1;
  int i;

  v1 = a1;
  for ( i = 0; i < 4; ++i )
    Function_22413e4(v1, i, (uchar)byte_22536B4[*(uchar *)(v1 + i + 561)]);
  return Function_201c3c0(*(uint *)(v1 + 48), 2);
}

//----- (0224145C) --------------------------------------------------------
int __fastcall Function_224145c(int a1, char a2)
{
  int v2;
  char v3;
  int v4;

  v2 = a1;
  v3 = a2;
  v4 = malloc(0x15u, 12);
  MI_CpuFill8((ushort *)v4, 0, 0xCu);
  *(uint *)v4 = *(uint *)(v2 + 92);
  *(uchar *)(v4 + 10) = v3;
  *(uint *)(v4 + 4) = AddTaskToTaskList1((int)Function_22414c0, v4, 0x9CA4u);
  return v4;
}

//----- (02241494) --------------------------------------------------------
uint __fastcall Function_2241494(int a1)
{
  int v1;

  v1 = a1;
  if ( *(uchar *)(a1 + 11) )
    ErrorHandler();
  Call_RemoveTaskFromTaskList(*(int **)(v1 + 4));
  return free(v1);
}

//----- (022414B0) --------------------------------------------------------
int __fastcall Function_22414b0(int result)
{
  *(uchar *)(result + 11) = 1;
  *(ushort *)(result + 8) = 2560;
  return result;
}

//----- (022414BC) --------------------------------------------------------
int __fastcall Function_22414bc(int a1)
{
  return *(uchar *)(a1 + 11);
}

//----- (022414C0) --------------------------------------------------------
int __fastcall Function_22414c0(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  result = *(uchar *)(a2 + 11);
  if ( *(uchar *)(a2 + 11) )
  {
    Function_20039b0(
      *(uint *)a2,
      0,
      (16 * (uchar)byte_22536B4[*(uchar *)(a2 + 10)] + 1) & 0xFFFF,
      4u,
      *(ushort *)(a2 + 8) >> 8,
      0x7FFFu);
    if ( *(ushort *)(v2 + 8) )
    {
      *(ushort *)(v2 + 8) -= 640;
      result = *(short *)(v2 + 8);
      if ( result < 0 )
      {
        result = 0;
        *(ushort *)(v2 + 8) = 0;
      }
    }
    else
    {
      result = 0;
      *(uchar *)(v2 + 11) = 0;
    }
  }
  return result;
}

//----- (02241524) --------------------------------------------------------
int __fastcall Function_2241524(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint v5;
  uint v6;
  int result;
  int v8;
  int v9;

  v2 = a1;
  v8 = a1 + 8;
  v3 = a2;
  v9 = 4 * a2;
  Function_2007dc8(*(uint **)(a1 + 8 + 4 * a2));
  if ( !*(uint *)(v2 + 16 * v3 + 88) )
    ErrorHandler();
  MI_CpuFill8(*(ushort **)(v2 + 88 + 16 * v3), 0, 0xC80u);
  v4 = 4 * v3;
  *(uint *)(v2 + 8 + v4) = Function_2095484(
                               *(uint **)(v2 + 4),
                               v3,
                               *(uint *)(*(uint *)v2 + 4 * v3),
                               0,
                               (int *)(v2 + 88 + 16 * v3),
                               0x15u,
                               216 - 32 * v3,
                               112 - 32 * v3,
                               -512);
  Function_2007dec(*(uint *)(v2 + 8 + 4 * v3), 6u, 1);
  Function_2007dec(*(uint *)(v2 + 8 + 4 * v3), 0x25u, 1);
  v5 = GetPkmnData(*(int **)(*(uint *)v2 + 4 * v3), 5u, 0);
  v6 = GetPkmnData(*(int **)(*(uint *)v2 + v4), 0x70u, 0);
  result = ((int (__fastcall *)(uint, uint))dword_2236760[1892])(v5, v6);
  if ( result == 1 )
    result = Function_2007dec(*(uint *)(v8 + v9), 0x23u, 1);
  return result;
}

//----- (022415E4) --------------------------------------------------------
int __fastcall Function_22415e4(int a1)
{
  int v1;
  short v2;
  int v3;
  int v4;
  int v5;
  uint v6;
  uint v7;
  int *v9;
  int v10;
  int v11;

  v1 = a1;
  v11 = 0;
  v2 = 0;
  v3 = 0;
  v10 = a1;
  v9 = (int *)(a1 + 88);
  v4 = a1;
  do
  {
    if ( *(uint *)(v10 + 88) )
      ErrorHandler();
    *(uint *)(v10 + 88) = malloc(0x15u, 3200);
    v5 = Function_2095484(
           *(uint **)(v1 + 4),
           v11,
           *(uint *)(*(uint *)v1 + v3),
           0,
           v9,
           0x15u,
           216 - v2,
           112 - v2,
           -512);
    *(uint *)(v4 + 8) = v5;
    Function_2007dec(v5, 6u, 1);
    Function_2007dec(*(uint *)(v4 + 8), 0x25u, 1);
    v6 = GetPkmnData(*(int **)(*(uint *)v1 + v3), 5u, 0);
    v7 = GetPkmnData(*(int **)(*(uint *)v1 + v3), 0x70u, 0);
    if ( ((int (__fastcall *)(uint, uint))dword_2236760[1892])(v6, v7) == 1 )
      Function_2007dec(*(uint *)(v4 + 8), 0x23u, 1);
    v2 += 32;
    v10 += 16;
    v3 += 4;
    v9 += 4;
    v4 += 4;
    ++v11;
  }
  while ( v11 < 4 );
  if ( *(uint *)(v1 + 152) )
    ErrorHandler();
  *(uint *)(v1 + 152) = malloc(0x15u, 3200);
  *(uint *)(v1 + 160) = *(uint *)(v1 + 96);
  *(uint *)(v1 + 156) = *(uint *)(v1 + 92);
  return MIi_CpuClear32(0, *(uint **)(v1 + 152), 3200);
}

//----- (022416E4) --------------------------------------------------------
int __fastcall Function_22416e4(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;
  int v5;

  v1 = 0;
  v5 = a1;
  v2 = a1;
  v3 = a1;
  do
  {
    Function_2007dc8(*(uint **)(v2 + 8));
    free(*(uint *)(v3 + 88));
    *(uint *)(v3 + 88) = 0;
    ++v1;
    v2 += 4;
    v3 += 16;
  }
  while ( v1 < 4 );
  free(*(uint *)(v5 + 152));
  result = v5 + 152;
  *(uint *)(v5 + 152) = 0;
  return result;
}

//----- (02241720) --------------------------------------------------------
int *__fastcall Function_2241720(int a1, uint *a2, int a3, int a4, int a5, int a6)
{
  uint *v6;
  uint v7;
  uint v8;
  const short *v9;
  char *v10;
  int v11;
  int v12;
  int v13;
  int *v14;
  int v16;
  int v17;
  uint v18;
  uint v19;
  short v20;
  short v21;
  int v22;
  int v23;
  int v24;
  int v25;

  v6 = a2;
  v16 = a1;
  v17 = a3;
  if ( a5 )
  {
    if ( a5 == 1 )
    {
      v19 = 38;
      v7 = 37;
      v8 = 3;
      v18 = 36;
    }
    else
    {
      v19 = 35;
      v7 = 34;
      v8 = 2;
      v18 = 33;
    }
  }
  else
  {
    v19 = 32;
    v7 = 31;
    v8 = 1;
    v18 = 30;
  }
  Function_200cc3c(a2, a3, a6, v7, 1, 1, a5 + 33001);
  Function_200cdc4(v16, 2u, v6, v17, a6, v8, 0, 1, 1, a5 + 33002);
  Function_200ce24(v6, v17, a6, v19, 1, a5 + 33001);
  Function_200ce54(v6, v17, a6, v18, 1, a5 + 33001);
  v9 = L"`(";
  v10 = (char *)&v20;
  v11 = 6;
  do
  {
    v12 = *(uint *)v9;
    v13 = *((uint *)v9 + 1);
    v9 += 4;
    *(uint *)v10 = v12;
    *((uint *)v10 + 1) = v13;
    v10 += 8;
    --v11;
  }
  while ( v11 );
  *(uint *)v10 = *(uint *)v9;
  v23 = a5 + 33002;
  v22 = a5 + 33001;
  v24 = a5 + 33001;
  v25 = a5 + 33001;
  v20 = 32 * a5 + 96;
  v21 = 40;
  v14 = Function_200ce6c(v6, v17, &v20);
  Function_200d324(*v14);
  return v14;
}

//----- (02241814) --------------------------------------------------------
int __fastcall Function_2241814(int a1, int a2, int a3)
{
  int v3;
  int v4;

  v3 = a1;
  v4 = a3;
  Function_200d0f4(a2);
  Function_200d070(v3, v4 + 33001);
  Function_200d080(v3, v4 + 33002);
  Function_200d090(v3, v4 + 33001);
  return Function_200d0a0(v3, v4 + 33001);
}

//----- (02241854) --------------------------------------------------------
int __fastcall Function_2241854(int a1, uint *a2, int a3, int a4)
{
  int v4;
  int v5;
  uint *v6;

  v4 = a4;
  v5 = a3;
  v6 = a2;
  Function_200cc3c(a2, a3, a4, 0x27u, 1, 1, 33004);
  Function_200ce24(v6, v5, v4, 0x28u, 1, 33004);
  return Function_200ce54(v6, v5, v4, 0x29u, 1, 33004);
}

//----- (022418A4) --------------------------------------------------------
int *__fastcall Function_22418a4(uint *a1, int a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int v6;
  const short *v7;
  short *v8;
  int v9;
  int v10;
  int v11;
  int *v12;
  int v14;
  int v15;
  int v16;
  short v17;
  short v18;
  int v19;
  int v20;

  v20 = a4;
  v4 = a3;
  v5 = a1;
  v6 = a2;
  v14 = 2;
  v15 = 4;
  v7 = L"` ";
  v16 = 5;
  v8 = &v17;
  v9 = 6;
  do
  {
    v10 = *(uint *)v7;
    v11 = *((uint *)v7 + 1);
    v7 += 4;
    *(uint *)v8 = v10;
    *((uint *)v8 + 1) = v11;
    v8 += 4;
    --v9;
  }
  while ( v9 );
  *(uint *)v8 = *(uint *)v7;
  v17 = 32 * v4 + 96;
  v18 = 32;
  v19 = *(&v14 + v4);
  v12 = Function_200ce6c(v5, v6, &v17);
  Function_200d324(*v12);
  return v12;
}

//----- (02241900) --------------------------------------------------------
uint __fastcall Function_2241900(int a1)
{
  return Function_200d0f4(a1);
}

//----- (02241908) --------------------------------------------------------
int __fastcall Function_2241908(int a1)
{
  int v1;

  v1 = a1;
  Function_200d070(a1, 33004);
  Function_200d090(v1, 33004);
  return Function_200d0a0(v1, 33004);
}

//----- (02241928) --------------------------------------------------------
int *__fastcall Function_2241928(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int *result;
  int v10;

  v3 = a1;
  v10 = a3;
  v4 = a2;
  Function_2241854(*(uint *)(a1 + 80), *(uint **)(v3 + 24), *(uint *)(v3 + 28), a3);
  v6 = 0;
  v7 = v3;
  v8 = v4 + 208;
  do
  {
    *(uint *)(v7 + 180) = Function_22418a4(*(uint **)(v3 + 24), *(uint *)(v3 + 28), v6, v5);
    result = Function_2241720(*(uint *)(v3 + 80), *(uint **)(v3 + 24), *(uint *)(v3 + 28), v8, v6++, v10);
    *(uint *)(v7 + 168) = result;
    v7 += 4;
    v8 += 8;
  }
  while ( v6 < 3 );
  return result;
}

//----- (0224197C) --------------------------------------------------------
int __fastcall Function_224197c(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    Function_2241814(*(uint *)(v1 + 28), *(uint *)(v3 + 168), v2);
    Function_2241900(*(uint *)(v3 + 180));
    ++v2;
    v3 += 4;
  }
  while ( v2 < 3 );
  return Function_2241908(*(uint *)(v1 + 28));
}

//----- (022419AC) --------------------------------------------------------
int __fastcall Function_22419ac(int a1, uint *a2, int a3, int a4)
{
  int v4;
  int v5;
  uint *v6;

  v4 = a4;
  v5 = a3;
  v6 = a2;
  Function_200cc3c(a2, a3, a4, 0xEu, 1, 1, 33013);
  Function_200ce24(v6, v5, v4, 0xDu, 1, 33011);
  return Function_200ce54(v6, v5, v4, 0xCu, 1, 33011);
}

//----- (02241A00) --------------------------------------------------------
int __fastcall Function_2241a00(int a1)
{
  int v1;

  v1 = a1;
  Function_200d070(a1, 33013);
  Function_200d090(v1, 33011);
  return Function_200d0a0(v1, 33011);
}

//----- (02241A24) --------------------------------------------------------
int __fastcall Function_2241a24(int a1)
{
  int *v1;
  int v2;
  char *v3;
  int v4;
  int v5;
  int v6;
  int *v7;
  int result;
  char v9;

  v1 = dword_22537B8;
  v2 = a1;
  v3 = &v9;
  v4 = 6;
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
  *(uint *)v3 = *v1;
  v7 = Function_200ce6c(*(uint **)(v2 + 24), *(uint *)(v2 + 28), (short *)&v9);
  Function_200d3f4((uint *)v7, 0);
  Function_200d324(*v7);
  result = 380;
  *(uint *)(v2 + 380) = v7;
  return result;
}

//----- (02241A64) --------------------------------------------------------
int __fastcall Function_2241a64(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( !*(uint *)(a1 + 380) )
    ErrorHandler();
  Function_200d0f4(*(uint *)(v1 + 380));
  result = 380;
  *(uint *)(v1 + 380) = 0;
  return result;
}

//----- (02241A8C) --------------------------------------------------------
uint __fastcall Function_2241a8c(int a1, int a2, uint a3)
{
  int v3;
  int v4;
  uint v5;
  uint result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( !*(uint *)(a1 + 380) )
    ErrorHandler();
  Function_200d4c4(*(int **)(v3 + 380), SLOWORD(dword_22536E4[v4]), SHIWORD(dword_22536E4[v4]));
  Function_200d364(*(int **)(v3 + 380), v5);
  result = Function_200d3f4(*(uint **)(v3 + 380), 1);
  switch ( (uchar)result )
  {
    case 0:
      result = Function_2005748(0x6E1u);
      break;
    case 1:
      result = Function_2005748(0x6DFu);
      break;
    case 2:
      result = Function_2005748(0x5DDu);
      break;
    case 3:
      result = Function_2005748(0x5DDu);
      break;
    default:
      return result;
  }
  return result;
}

//----- (02241B1C) --------------------------------------------------------
uint __fastcall Function_2241b1c(int a1)
{
  int v1;

  v1 = a1;
  if ( !*(uint *)(a1 + 380) )
    ErrorHandler();
  return Function_200d3f4(*(uint **)(v1 + 380), 0);
}

//----- (02241B3C) --------------------------------------------------------
uint *__fastcall Function_2241b3c(int a1, int a2, int a3, uchar *a4)
{
  int v4;
  int v5;
  uchar *v6;
  int v7;
  uint *result;

  v4 = a1;
  v5 = a2;
  v6 = a4;
  v7 = malloc(0x15u, 40);
  MI_CpuFill8((ushort *)v7, 0, 0x28u);
  *v6 = 0;
  *(uint *)(v7 + 4) = v6;
  *(uint *)v7 = v4;
  *(uchar *)(v7 + 8) = v5;
  switch ( (uchar)Function_200d550(*(int **)(v4 + 4 * v5 + 180), (ushort *)(v7 + 12), (ushort *)(v7 + 14)) )
  {
    case 1u:
      result = AddTaskToTaskList1((int)Function_2241c2c, v7, 0x9C40u);
      break;
    case 2u:
      *(ushort *)(v7 + 36) = -768;
      result = AddTaskToTaskList1((int)Function_2241cf0, v7, 0x9C40u);
      break;
    case 3u:
      *(ushort *)(v7 + 36) = -1024;
      result = AddTaskToTaskList1((int)Function_2241cf0, v7, 0x9C40u);
      break;
    case 4u:
      *(ushort *)(v7 + 36) = -1152;
      result = AddTaskToTaskList1((int)Function_2241cf0, v7, 0x9C40u);
      break;
    case 5u:
      *(ushort *)(v7 + 36) = -640;
      result = AddTaskToTaskList1((int)Function_2241cf0, v7, 0x9C40u);
      break;
    case 6u:
      *(ushort *)(v7 + 36) = -256;
      result = AddTaskToTaskList1((int)Function_2241cf0, v7, 0x9C40u);
      break;
    default:
      *(uchar *)(v7 + 24) = 1;
      *(ushort *)(v7 + 36) = -512;
      *(ushort *)(v7 + 38) = -512;
      result = AddTaskToTaskList1((int)Function_2241cf0, v7, 0x9C40u);
      break;
  }
  return result;
}

//----- (02241C2C) --------------------------------------------------------
int __fastcall Function_2241c2c(int *a1, int a2)
{
  int *v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = *(uchar *)(a2 + 10);
  if ( !*(uchar *)(a2 + 10) )
  {
    *(uint *)(a2 + 16) = *(short *)(a2 + 12) << 8;
    *(uint *)(a2 + 20) = *(short *)(a2 + 14) << 8;
    ++*(uchar *)(a2 + 10);
    goto LABEL_6;
  }
  if ( v3 == 1 )
  {
LABEL_6:
    if ( *(uchar *)(a2 + 24) & 1 )
      v4 = (*(short *)(a2 + 12) << 8) + 512;
    else
      v4 = (*(short *)(a2 + 12) << 8) - 512;
    *(uint *)(a2 + 16) = v4;
    if ( (uchar)++*(uchar *)(a2 + 24) > 4u )
    {
      *(uint *)(a2 + 16) = *(short *)(a2 + 12) << 8;
      *(uchar *)(a2 + 24) = 0;
      ++*(uchar *)(a2 + 10);
    }
    return Function_200d4c4(
             *(int **)(*(uint *)a2 + 4 * *(uchar *)(a2 + 8) + 180),
             (*(uint *)(a2 + 16) + (*(uint *)(a2 + 16) >> 7 >> 24)) << 8 >> 16,
             (*(uint *)(a2 + 20) + (*(uint *)(a2 + 20) >> 7 >> 24)) << 8 >> 16);
  }
  if ( v3 != 2 )
  {
    **(uchar **)(a2 + 4) = 1;
    free(a2);
    return Call_RemoveTaskFromTaskList(v2);
  }
  if ( (char)++*(uchar *)(a2 + 9) > 15 )
  {
    *(uchar *)(a2 + 9) = 0;
    ++*(uchar *)(a2 + 10);
  }
  return Function_200d4c4(
           *(int **)(*(uint *)a2 + 4 * *(uchar *)(a2 + 8) + 180),
           (*(uint *)(a2 + 16) + (*(uint *)(a2 + 16) >> 7 >> 24)) << 8 >> 16,
           (*(uint *)(a2 + 20) + (*(uint *)(a2 + 20) >> 7 >> 24)) << 8 >> 16);
}

//----- (02241CF0) --------------------------------------------------------
int __fastcall Function_2241cf0(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;

  v2 = a2;
  v3 = a1;
  if ( *(uchar *)(a2 + 10) )
  {
    if ( *(uchar *)(a2 + 10) != 1 )
    {
      **(uchar **)(a2 + 4) = 1;
      free(a2);
      return Call_RemoveTaskFromTaskList(v3);
    }
  }
  else
  {
    *(uint *)(a2 + 16) = *(short *)(a2 + 12) << 8;
    *(uint *)(a2 + 20) = *(short *)(a2 + 14) << 8;
    ++*(uchar *)(a2 + 10);
  }
  *(uint *)(a2 + 20) += *(short *)(a2 + 36);
  *(ushort *)(a2 + 36) += 128;
  v4 = *(short *)(a2 + 14) << 8;
  if ( *(uint *)(v2 + 20) >= v4 )
  {
    *(uint *)(v2 + 20) = v4;
    if ( *(uchar *)(v2 + 24) )
    {
      *(ushort *)(v2 + 36) = *(ushort *)(v2 + 38);
      --*(uchar *)(v2 + 24);
      --*(uchar *)(v2 + 10);
    }
    else
    {
      ++*(uchar *)(v2 + 10);
    }
  }
  return Function_200d4c4(
           *(int **)(*(uint *)v2 + 4 * *(uchar *)(v2 + 8) + 180),
           (*(uint *)(v2 + 16) + (*(uint *)(v2 + 16) >> 7 >> 24)) << 8 >> 16,
           (*(uint *)(v2 + 20) + (*(uint *)(v2 + 20) >> 7 >> 24)) << 8 >> 16);
}

//----- (02241D94) --------------------------------------------------------
int __fastcall Function_2241d94(int a1, short a2, int a3)
{
  int v3;
  short v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( *(uint *)(a1 + 192) )
    ErrorHandler();
  Function_200cc3c(*(uint **)(v3 + 24), *(uint *)(v3 + 28), v5, 0x14u, 1, 1, 33005);
  Function_200ce24(*(uint **)(v3 + 24), *(uint *)(v3 + 28), v5, 0x13u, 1, 33005);
  Function_200ce54(*(uint **)(v3 + 24), *(uint *)(v3 + 28), v5, 0x12u, 1, 33005);
  *(uint *)(v3 + 192) = Function_200ce6c(
                            *(uint **)(v3 + 24),
                            *(uint *)(v3 + 28),
                            (short *)dword_2253854);
  Function_200d324(**(uint **)(v3 + 192));
  return Function_200d4c4(*(int **)(v3 + 192), (short)(32 * v4 + 96), 56);
}

//----- (02241E24) --------------------------------------------------------
int __fastcall Function_2241e24(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_200d070(*(uint *)(a1 + 28), 33005);
  Function_200d090(*(uint *)(v1 + 28), 33005);
  Function_200d0a0(*(uint *)(v1 + 28), 33005);
  Function_200d0f4(*(uint *)(v1 + 192));
  result = 0;
  *(uint *)(v1 + 192) = 0;
  return result;
}

//----- (02241E58) --------------------------------------------------------
int __fastcall Function_2241e58(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_200cc3c(a1, a2, a3, 0x11u, 1, 1, 33006);
  Function_200ce24(v3, v4, v5, 0x10u, 1, 33006);
  return Function_200ce54(v3, v4, v5, 0xFu, 1, 33006);
}

//----- (02241EA4) --------------------------------------------------------
int __fastcall Function_2241ea4(int a1)
{
  int v1;

  v1 = a1;
  Function_200d070(a1, 33006);
  Function_200d090(v1, 33006);
  return Function_200d0a0(v1, 33006);
}

//----- (02241EC4) --------------------------------------------------------
int __fastcall Function_2241ec4(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = 0;
  v3 = a1 + 24 * a2;
  do
  {
    result = *(uint *)(v3 + 196);
    if ( result )
    {
      Function_200d0f4(result);
      result = v3 + 196;
      *(uint *)(v3 + 196) = 0;
    }
    ++v2;
    v3 += 4;
  }
  while ( v2 < 6 );
  return result;
}

//----- (02241EF0) --------------------------------------------------------
int __fastcall Function_2241ef0(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = 0;
  do
    result = Function_2241ec4(v1, v2++);
  while ( v2 < 4 );
  return result;
}

//----- (02241F08) --------------------------------------------------------
int *__fastcall Function_2241f08(uint *a1, int a2, short a3, short a4)
{
  short v4;
  short v5;
  int *v6;

  v4 = a3;
  v5 = a4;
  v6 = Function_200ce6c(a1, a2, (short *)dword_2253888);
  Function_200d324(*v6);
  Function_200d4c4(v6, v4, v5);
  return v6;
}

//----- (02241F34) --------------------------------------------------------
uint *__fastcall Function_2241f34(int a1, int a2, int a3, uint a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int *v12;
  int v14;
  int v15;
  int v16;
  uint v17;

  v14 = a1;
  v4 = a2;
  v15 = a3;
  v16 = s32_div_f(a4, 10);
  if ( v16 > 24 )
    v16 = 24;
  v5 = v16;
  v6 = v14 + 24 * v4;
  while ( v5 < 6 )
  {
    v7 = *(uint *)(v6 + 4 * v5 + 196);
    if ( v7 )
    {
      Function_200d0f4(v7);
      *(uint *)(v6 + 4 * v5 + 196) = 0;
    }
    ++v5;
  }
  v8 = v16 - 1;
  v9 = v14 + 24 * v4;
  while ( v8 > -1 )
  {
    s32_div_f(v8, 6);
    v11 = v10;
    v17 = s32_div_f(v8, 6);
    v12 = *(int **)(v9 + 4 * v11 + 196);
    if ( v12 )
    {
      if ( Function_200d37c(v12) < v17 )
      {
        Function_200d364(*(int **)(v9 + 4 * v11 + 196), v17);
        Function_2242048(*(uint *)(v9 + 4 * v11 + 196));
      }
    }
    else
    {
      *(uint *)(v9 + 4 * v11 + 196) = Function_2241f08(
                                          *(uint **)(v14 + 24),
                                          *(uint *)(v14 + 28),
                                          LOWORD(dword_225370C[v15]) + 8 * v11,
                                          HIWORD(dword_225370C[v15]));
      Function_200d364(*(int **)(v9 + 4 * v11 + 196), v17);
      Function_2242048(*(uint *)(v9 + 4 * v11 + 196));
    }
    --v8;
  }
  Function_2005748(0x6E1u);
  return Function_2004f7c(0x6E1u, 0xFFFF, (v16 - 1) << 6);
}

//----- (02242048) --------------------------------------------------------
uint *__fastcall Function_2242048(uint *a1)
{
  uint *v1;
  ushort *v2;

  v1 = a1;
  v2 = (ushort *)malloc(0x15u, 16);
  MI_CpuFill8(v2, 0, 0x10u);
  *(uint *)v2 = v1;
  Function_200d3f4(v1, 0);
  return AddTaskToTaskList1((int)Function_224207c, (int)v2, 0x9C40u);
}

//----- (0224207C) --------------------------------------------------------
int __fastcall Function_224207c(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  uchar v5;
  char v6;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = *(uchar *)(a2 + 12);
  if ( *(uchar *)(a2 + 12) )
  {
    if ( v4 != 1 )
    {
      if ( v4 == 2 )
      {
        *(uint *)(a2 + 4) = fsub(*(uint *)(a2 + 4), 1050253722);
        *(uint *)(v2 + 8) = fsub(*(uint *)(v2 + 8), 1050253722);
        Function_200d6e8(*(int **)v2, *(uint *)(v2 + 4), *(uint *)(v2 + 8));
        Function_200d7c0(*(int **)v2, 0);
        result = Function_20e1164(*(uint *)(v2 + 4), 1065353216);
        if ( !(!v6 & v5) )
        {
          Function_200d6e8(*(int **)v2, 0x3F800000u, 0x3F800000u);
          Function_200d79c(*(int **)v2, 0);
          result = *(uchar *)(v2 + 12) + 1;
          *(uchar *)(v2 + 12) = result;
        }
      }
      else
      {
        Function_200d6a4(*(uint **)a2, 0);
        free(v2);
        result = Call_RemoveTaskFromTaskList(v3);
      }
      return result;
    }
  }
  else
  {
    Function_200d6a4(*(uint **)a2, 2);
    *(uint *)(v2 + 4) = 1036831949;
    *(uint *)(v2 + 8) = 1036831949;
    Function_200d3f4(*(uint **)v2, 1);
    ++*(uchar *)(v2 + 12);
  }
  *(uint *)(v2 + 4) = fadd(*(uint *)(v2 + 4), 1050253722);
  *(uint *)(v2 + 8) = fadd(*(uint *)(v2 + 8), 1050253722);
  Function_200d6e8(*(int **)v2, *(uint *)(v2 + 4), *(uint *)(v2 + 8));
  Function_200d7c0(*(int **)v2, 0);
  result = Function_20e10ac(*(uint *)(v2 + 4), 1069547520);
  if ( v5 )
  {
    result = *(uchar *)(v2 + 12) + 1;
    *(uchar *)(v2 + 12) = result;
  }
  return result;
}

//----- (02242154) --------------------------------------------------------
int __fastcall Function_2242154(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_200cc3c(a1, a2, a3, 0x1Au, 1, 1, 33008);
  Function_200ce24(v3, v4, v5, 0x19u, 1, 33008);
  Function_200ce54(v3, v4, v5, 0x18u, 1, 33008);
  Function_200cc3c(v3, v4, v5, 0x1Du, 1, 1, 33007);
  Function_200ce24(v3, v4, v5, 0x1Cu, 1, 33007);
  return Function_200ce54(v3, v4, v5, 0x1Bu, 1, 33007);
}

//----- (022421E0) --------------------------------------------------------
int __fastcall Function_22421e0(int a1)
{
  int v1;

  v1 = a1;
  Function_200d070(a1, 33008);
  Function_200d090(v1, 33008);
  Function_200d0a0(v1, 33008);
  Function_200d070(v1, 33007);
  Function_200d090(v1, 33007);
  return Function_200d0a0(v1, 33007);
}

//----- (0224221C) --------------------------------------------------------
int __fastcall Function_224221c(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = 0;
  v3 = a1 + 20 * a2;
  do
  {
    result = *(uint *)(v3 + 292);
    if ( result )
    {
      Function_200d0f4(result);
      result = 292;
      *(uint *)(v3 + 292) = 0;
    }
    ++v2;
    v3 += 4;
  }
  while ( v2 < 5 );
  return result;
}

//----- (02242248) --------------------------------------------------------
int __fastcall Function_2242248(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = 0;
  do
    result = Function_224221c(v1, v2++);
  while ( v2 < 3 );
  return result;
}

//----- (02242260) --------------------------------------------------------
int *__fastcall Function_2242260(uint *a1, int a2, short a3, short a4)
{
  short v4;
  short v5;
  int *v6;

  v4 = a3;
  v5 = a4;
  v6 = Function_200ce6c(a1, a2, (short *)dword_22537EC);
  Function_200d324(*v6);
  Function_200d4c4(v6, v4, v5);
  return v6;
}

//----- (0224228C) --------------------------------------------------------
int *__fastcall Function_224228c(uint *a1, int a2, short a3, short a4)
{
  short v4;
  short v5;
  int *v6;

  v4 = a3;
  v5 = a4;
  v6 = Function_200ce6c(a1, a2, (short *)dword_225371C);
  Function_200d324(*v6);
  Function_200d4c4(v6, v4, v5);
  return v6;
}

//----- (022422B8) --------------------------------------------------------
int __fastcall Function_22422b8(int *a1, int a2)
{
  int v2;
  int *v3;
  uint v4;
  int v5;
  int v6;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = *(uchar *)(a2 + 46);
  if ( v4 <= 5 )
    JUMPOUT(__CS__, *((short *)&off_22422D6 + v4) + 35922648);
  switch ( (uchar)v4 )
  {
    case 0:
      Function_200d6a4(*(uint **)(a2 + 4), 1);
      *(uint *)(v2 + 32) = *(uint *)(v2 + 16) + 0x2000;
      *(uint *)(v2 + 36) = *(uint *)(v2 + 20) + 18432;
      *(ushort *)(v2 + 40) = s32_div_f(*(uint *)(v2 + 32) - *(uint *)(v2 + 16), 10);
      *(ushort *)(v2 + 42) = s32_div_f(*(uint *)(v2 + 36) - *(uint *)(v2 + 20), 10);
      ++*(uchar *)(v2 + 46);
      goto LABEL_5;
    case 1:
LABEL_5:
      *(uint *)(v2 + 16) += *(short *)(v2 + 40);
      *(uint *)(v2 + 20) += *(short *)(v2 + 42);
      v5 = *(short *)(v2 + 40);
      if ( v5 > 0 && *(uint *)(v2 + 16) >= *(uint *)(v2 + 32)
        || v5 < 0 && *(uint *)(v2 + 16) <= *(uint *)(v2 + 32) )
      {
        ++*(uchar *)(v2 + 46);
      }
      goto LABEL_22;
    case 2:
      if ( (uchar)++*(uchar *)(a2 + 47) > 3u )
      {
        *(uchar *)(a2 + 47) = 0;
        ++*(uchar *)(a2 + 46);
      }
      goto LABEL_22;
    case 3:
      *(uint *)(a2 + 32) = *(uchar *)(a2 + 44) << 8;
      *(uint *)(a2 + 36) = *(uchar *)(a2 + 45) << 8;
      *(ushort *)(a2 + 40) = s32_div_f(*(uint *)(a2 + 32) - *(uint *)(a2 + 16), 6);
      *(ushort *)(v2 + 42) = s32_div_f(*(uint *)(v2 + 36) - *(uint *)(v2 + 20), 6);
      ++*(uchar *)(v2 + 46);
      goto LABEL_14;
    case 4:
LABEL_14:
      *(uint *)(v2 + 16) += *(short *)(v2 + 40);
      *(uint *)(v2 + 20) += *(short *)(v2 + 42);
      v6 = *(short *)(v2 + 40);
      if ( v6 > 0 && *(uint *)(v2 + 16) >= *(uint *)(v2 + 32)
        || v6 < 0 && *(uint *)(v2 + 16) <= *(uint *)(v2 + 32) )
      {
        *(uint *)(v2 + 16) = *(uchar *)(v2 + 44) << 8;
        *(uint *)(v2 + 20) = *(uchar *)(v2 + 45) << 8;
        ++*(uchar *)(v2 + 46);
      }
      goto LABEL_22;
    case 5:
      if ( (uchar)++*(uchar *)(a2 + 47) > 2u )
      {
        *(uchar *)(a2 + 47) = 0;
        ++*(uchar *)(a2 + 46);
      }
LABEL_22:
      Function_200d7c0(*(int **)(v2 + 4), 0x2000);
      result = Function_200d4c4(
                 *(int **)(v2 + 4),
                 (*(uint *)(v2 + 16) + (*(uint *)(v2 + 16) >> 7 >> 24)) << 8 >> 16,
                 (*(uint *)(v2 + 20) + (*(uint *)(v2 + 20) >> 7 >> 24)) << 8 >> 16);
      break;
    default:
      Function_200d0f4(*(uint *)(a2 + 4));
      Function_200d3f4(*(uint **)(v2 + 8), 1);
      Function_2005748(0x6E0u);
      free(v2);
      result = Call_RemoveTaskFromTaskList(v3);
      break;
  }
  return result;
}

//----- (022424A8) --------------------------------------------------------
int __fastcall Function_22424a8(int a1, int a2)
{
  int v2;
  int v3;
  int *v4;

  v2 = 0;
  v3 = a1 + 20 * a2;
  do
  {
    v4 = *(int **)(v3 + 292);
    if ( v4 && !Function_200d408(v4) )
      return 0;
    ++v2;
    v3 += 4;
  }
  while ( v2 < 5 );
  return 1;
}

//----- (022424D4) --------------------------------------------------------
int __fastcall Function_22424d4(int a1, int a2, uint a3)
{
  char v3;
  int v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  int result;
  int v10;
  int v11;
  int v12;
  int v13;
  int *v14;
  int *v15;
  char v16;
  int v17;

  v3 = a3;
  v17 = a1;
  v11 = a2;
  v12 = s32_div_f(a3, 10);
  if ( v12 > 5 )
    ErrorHandler();
  v4 = v11;
  v5 = 0;
  v14 = &dword_22536D8[v11];
  v13 = v17 + 20 * v11;
  v15 = &dword_22536E4[v11];
  v16 = v3;
  while ( v5 < v12 )
  {
    if ( !*(uint *)(v13 + 4 * v5 + 292) )
    {
      v6 = Function_2242260(
             *(uint **)(v17 + 24),
             *(uint *)(v17 + 28),
             LOWORD(dword_22536D8[v4]) + 5 * v5,
             *((ushort *)v14 + 1));
      v7 = v13 + 4 * v5;
      *(uint *)(v7 + 292) = v6;
      Function_200d3f4(*(uint **)(v7 + 292), 0);
      v8 = malloc(0x15u, 52);
      MI_CpuFill8((ushort *)v8, 0, 0x34u);
      *(uint *)v8 = v17;
      *(uint *)(v8 + 8) = *(uint *)(v13 + 4 * v5 + 292);
      *(uint *)(v8 + 4) = Function_224228c(
                              *(uint **)(v17 + 24),
                              *(uint *)(v17 + 28),
                              dword_22536E4[v4],
                              *((ushort *)v15 + 1));
      *(uint *)(v8 + 16) = SLOWORD(dword_22536E4[v4]) << 8;
      *(uint *)(v8 + 20) = *((short *)v15 + 1) << 8;
      *(uchar *)(v8 + 44) = LOWORD(dword_22536D8[v4]) + 5 * v5;
      *(uchar *)(v8 + 45) = *((ushort *)v14 + 1);
      *(uchar *)(v8 + 48) = v11;
      *(uchar *)(v8 + 49) = v16;
      AddTaskToTaskList1((int)Function_22422b8, v8, 0x9C40u);
    }
    ++v5;
  }
  result = v17;
  v10 = v17 + 20 * v11;
  while ( v5 < 5 )
  {
    result = *(uint *)(v10 + 4 * v5 + 292);
    if ( result )
    {
      Function_200d0f4(result);
      result = 0;
      *(uint *)(v10 + 4 * v5 + 292) = 0;
    }
    ++v5;
  }
  return result;
}

//----- (0224262C) --------------------------------------------------------
int __fastcall Function_224262c(int a1, int a2, int a3)
{
  int v3;
  BOOL v4;
  int v5;
  int v6;
  int *v7;
  int *v8;
  int result;
  int v10;
  int v11;
  int v12;
  int v13;

  v3 = a2;
  v10 = a1;
  v4 = a3 == 1;
  v13 = 0;
  v12 = a1;
  v11 = a1;
  do
  {
    v5 = v10;
    v6 = 0;
    do
    {
      v7 = *(int **)(v5 + 208);
      if ( v7 )
      {
        Function_200d810(v7, v3);
        Function_200d3f4(*(uint **)(v5 + 208), v4);
      }
      ++v6;
      v5 += 4;
    }
    while ( v6 < 6 );
    v8 = *(int **)(v12 + 364);
    if ( v8 )
    {
      Function_200d810(v8, v3);
      Function_200d3f4(*(uint **)(v12 + 364), v4);
    }
    Function_2012af0(*(uint **)(v11 + 396), v3);
    Function_2012af0(*(uint **)(v11 + 476), v3);
    Function_20129d0(*(uint **)(v11 + 396), v4);
    Function_20129d0(*(uint **)(v11 + 476), v4);
    v10 += 24;
    v12 += 4;
    v11 += 20;
    result = v13 + 1;
    v13 = result;
  }
  while ( result < 4 );
  return result;
}

//----- (022426E8) --------------------------------------------------------
uint *__fastcall Function_22426e8(int a1, char a2, uchar *a3)
{
  int v3;
  char v4;
  uchar *v5;
  int v6;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  *a3 = 0;
  v6 = malloc(0x15u, 16);
  MI_CpuFill8((ushort *)v6, 0, 0x10u);
  *(uint *)v6 = v3;
  *(uchar *)(v6 + 13) = v4;
  *(uint *)(v6 + 4) = v5;
  return AddTaskToTaskList1((int)Function_2242720, v6, 0x3E8u);
}

//----- (02242720) --------------------------------------------------------
uint __fastcall Function_2242720(int *a1, int a2)
{
  int v2;
  int *v3;
  uint result;
  int v5;
  int v6;

  v2 = a2;
  v3 = a1;
  result = *(uchar *)(a2 + 12);
  if ( result <= 3 )
    JUMPOUT(__CS__, *((short *)&off_224273A + result) + 35923772);
  switch ( (uchar)result )
  {
    case 0:
      if ( *(uchar *)(a2 + 13) )
      {
        *(ushort *)(a2 + 8) = 0;
        *(ushort *)(a2 + 10) = 4096;
        G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 4, 14, 0, 16);
        Function_223bb14(*(uint *)v2, 0, 1);
      }
      else
      {
        *(ushort *)(a2 + 8) = 4096;
        *(ushort *)(a2 + 10) = 0;
        G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 0, 14, 16, 0);
        Function_224262c(*(uint *)v2, 1, 1);
      }
      AddTaskToTaskList3((int)Function_2242884, v2, 0xAu);
      result = *(uchar *)(v2 + 12) + 1;
      *(uchar *)(v2 + 12) = result;
      break;
    case 1:
      v5 = *(uchar *)(a2 + 13);
      if ( *(uchar *)(v2 + 13) || (result = *(short *)(v2 + 8), *(ushort *)(v2 + 8)) )
      {
        if ( v5 == 1 )
        {
          result = *(short *)(v2 + 10);
          if ( !*(ushort *)(v2 + 10) )
          {
            result = *(uchar *)(v2 + 12) + 1;
            *(uchar *)(v2 + 12) = result;
          }
        }
      }
      else
      {
        Function_224262c(*(uint *)v2, 0, 0);
        result = *(uchar *)(v2 + 12) + 1;
        *(uchar *)(v2 + 12) = result;
      }
      break;
    case 2:
      if ( *(uchar *)(a2 + 13) )
      {
        *(ushort *)(a2 + 8) = 0;
        *(ushort *)(a2 + 10) = 4096;
        G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 0, 14, 0, 16);
        Function_224262c(*(uint *)v2, 1, 1);
      }
      else
      {
        *(ushort *)(a2 + 8) = 4096;
        *(ushort *)(a2 + 10) = 0;
        G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 4, 14, 16, 0);
      }
      AddTaskToTaskList3((int)Function_2242884, v2, 0xAu);
      result = *(uchar *)(v2 + 12) + 1;
      *(uchar *)(v2 + 12) = result;
      break;
    case 3:
      v6 = *(uchar *)(a2 + 13);
      if ( *(uchar *)(v2 + 13) || (result = *(short *)(v2 + 8), *(ushort *)(v2 + 8)) )
      {
        if ( v6 == 1 )
        {
          result = *(short *)(v2 + 10);
          if ( !*(ushort *)(v2 + 10) )
          {
            Function_224262c(*(uint *)v2, 0, 1);
            result = *(uchar *)(v2 + 12) + 1;
            *(uchar *)(v2 + 12) = result;
          }
        }
      }
      else
      {
        Function_223bb14(*(uint *)v2, 1, 1);
        result = *(uchar *)(v2 + 12) + 1;
        *(uchar *)(v2 + 12) = result;
      }
      break;
    default:
      Function_17_22413d8();
      **(uchar **)(v2 + 4) = 1;
      free(v2);
      result = Call_RemoveTaskFromTaskList(v3);
      break;
  }
  return result;
}

//----- (02242884) --------------------------------------------------------
int *__fastcall Function_2242884(int *result, int a2)
{
  int v2;

  v2 = 0;
  if ( *(uchar *)(a2 + 13) )
  {
    *(ushort *)(a2 + 8) += 2048;
    *(ushort *)(a2 + 10) -= 2048;
    if ( *(short *)(a2 + 8) >= 4096 )
    {
      *(ushort *)(a2 + 8) = 4096;
      v2 = 1;
    }
    if ( *(short *)(a2 + 10) <= 0 )
      *(ushort *)(a2 + 10) = 0;
  }
  else
  {
    *(ushort *)(a2 + 8) -= 2048;
    *(ushort *)(a2 + 10) += 2048;
    if ( *(short *)(a2 + 8) <= 0 )
    {
      *(ushort *)(a2 + 8) = 0;
      v2 = 1;
    }
    if ( *(short *)(a2 + 10) >= 4096 )
      *(ushort *)(a2 + 10) = 4096;
  }
  REG_BLDALPHA = *(ushort *)(a2 + 10) & 0xFF00 | (*(ushort *)(a2 + 8) >> 8);
  if ( v2 > 0 )
    result = (int *)Call_RemoveTaskFromTaskList(result);
  return result;
}

//----- (0224290C) --------------------------------------------------------
uint __fastcall Function_224290c(uint result, int a2, uchar *a3, uchar *a4)
{
  uint v4;
  uint v5;
  uchar *v6;
  uchar *v7;
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

  v4 = a2;
  v5 = result;
  v6 = a3;
  v7 = a4;
  if ( a2 >= 2 && !a3 )
    result = ErrorHandler();
  if ( v4 <= 0x1C )
    JUMPOUT(__CS__, (char *)&off_2242936 + *((short *)&off_2242936 + v4) + 2);
  switch ( (uchar)result )
  {
    case 0:
      return result;
    case 1:
      v8 = *(uint *)(*(uint *)(v5 + 12) + 4 * *(uchar *)(v5 + 808));
      Function_2076b10_Dummy();
      result = Function_200b5cc(*(int **)(v5 + 84), 0, v9);
      break;
    case 2:
      v10 = *(uint *)(*(uint *)(v5 + 12) + 4 * *v6);
      Function_2076b10_Dummy();
      result = Function_200b5cc(*(int **)(v5 + 84), 0, v11);
      break;
    case 3:
      v12 = *(uint *)(*(uint *)(v5 + 12) + 4 * v6[1]);
      Function_2076b10_Dummy();
      result = Function_200b5cc(*(int **)(v5 + 84), 0, v13);
      break;
    case 4:
      result = (uint)Function_200b630(*(uint *)(v5 + 84), 0, *((ushort *)v6 + 1));
      break;
    case 5:
      result = Function_200b60c(*(uint *)(v5 + 84), 0, v6[4], 1, 0, 1);
      break;
    case 6:
      result = (uint)Function_200bb74(
                               *(uint *)(v5 + 84),
                               0,
                               *(ushort *)(*(uint *)(v5 + 12) + 8 * v6[5] + 208));
      break;
    case 7:
      v14 = *(uint *)(*(uint *)(v5 + 12) + 4 * *v6);
      Function_2076b10_Dummy();
      Function_200b5cc(*(int **)(v5 + 84), 0, v15);
      v16 = *(uint *)(*(uint *)(v5 + 12) + 4 * v6[1]);
      Function_2076b10_Dummy();
      result = Function_200b5cc(*(int **)(v5 + 84), 1u, v17);
      break;
    case 8:
      v18 = *(uint *)(*(uint *)(v5 + 12) + 4 * *v6);
      Function_2076b10_Dummy();
      Function_200b5cc(*(int **)(v5 + 84), 0, v19);
      result = (uint)Function_200b630(*(uint *)(v5 + 84), 1u, *((ushort *)v6 + 1));
      break;
    case 9:
      v20 = *(uint *)(*(uint *)(v5 + 12) + 4 * *v6);
      Function_2076b10_Dummy();
      Function_200b5cc(*(int **)(v5 + 84), 0, v21);
      result = Function_200b60c(*(uint *)(v5 + 84), 1u, v6[4], 1, 0, 1);
      break;
    case 0xA:
      v22 = *(uint *)(*(uint *)(v5 + 12) + 4 * *v6);
      Function_2076b10_Dummy();
      Function_200b5cc(*(int **)(v5 + 84), 0, v23);
      result = (uint)Function_200bb74(
                               *(uint *)(v5 + 84),
                               1u,
                               *(ushort *)(*(uint *)(v5 + 12) + 8 * v6[5] + 208));
      break;
    case 0xB:
      v24 = *(uint *)(*(uint *)(v5 + 12) + 4 * v6[1]);
      Function_2076b10_Dummy();
      Function_200b5cc(*(int **)(v5 + 84), 0, v25);
      v26 = *(uint *)(*(uint *)(v5 + 12) + 4 * *v6);
      Function_2076b10_Dummy();
      result = Function_200b5cc(*(int **)(v5 + 84), 1u, v27);
      break;
    case 0xC:
      v28 = *(uint *)(*(uint *)(v5 + 12) + 4 * v6[1]);
      Function_2076b10_Dummy();
      Function_200b5cc(*(int **)(v5 + 84), 0, v29);
      result = (uint)Function_200b630(*(uint *)(v5 + 84), 1u, *((ushort *)v6 + 1));
      break;
    case 0xD:
      v30 = *(uint *)(*(uint *)(v5 + 12) + 4 * v6[1]);
      Function_2076b10_Dummy();
      Function_200b5cc(*(int **)(v5 + 84), 0, v31);
      result = Function_200b60c(*(uint *)(v5 + 84), 1u, v6[4], 1, 0, 1);
      break;
    case 0xE:
      v32 = *(uint *)(*(uint *)(v5 + 12) + 4 * v6[1]);
      Function_2076b10_Dummy();
      Function_200b5cc(*(int **)(v5 + 84), 0, v33);
      v34 = *(uint *)(*(uint *)(v5 + 12) + 4 * *v6);
      Function_2076b10_Dummy();
      result = Function_200b5cc(*(int **)(v5 + 84), 1u, v35);
      break;
    case 0xF:
      Function_200b630(*(uint *)(v5 + 84), 0, *((ushort *)v6 + 1));
      v36 = *(uint *)(*(uint *)(v5 + 12) + 4 * *v6);
      Function_2076b10_Dummy();
      result = Function_200b5cc(*(int **)(v5 + 84), 1u, v37);
      break;
    case 0x10:
      Function_200b630(*(uint *)(v5 + 84), 0, *((ushort *)v6 + 1));
      v38 = *(uint *)(*(uint *)(v5 + 12) + 4 * v6[1]);
      Function_2076b10_Dummy();
      result = Function_200b5cc(*(int **)(v5 + 84), 1u, v39);
      break;
    case 0x11:
      Function_200b630(*(uint *)(v5 + 84), 0, *((ushort *)v6 + 1));
      result = Function_200b60c(*(uint *)(v5 + 84), 1u, v6[4], 1, 0, 1);
      break;
    case 0x12:
      Function_200b630(*(uint *)(v5 + 84), 0, *((ushort *)v6 + 1));
      v40 = *(uint *)(*(uint *)(v5 + 12) + 4 * *v6);
      Function_2076b10_Dummy();
      result = Function_200b5cc(*(int **)(v5 + 84), 1u, v41);
      break;
    case 0x13:
      Function_200b60c(*(uint *)(v5 + 84), 0, v6[4], 1, 0, 1);
      v42 = *(uint *)(*(uint *)(v5 + 12) + 4 * *v6);
      Function_2076b10_Dummy();
      result = Function_200b5cc(*(int **)(v5 + 84), 1u, v43);
      break;
    case 0x14:
      Function_200b60c(*(uint *)(v5 + 84), 0, v6[4], 1, 0, 1);
      v44 = *(uint *)(*(uint *)(v5 + 12) + 4 * v6[1]);
      Function_2076b10_Dummy();
      result = Function_200b5cc(*(int **)(v5 + 84), 1u, v45);
      break;
    case 0x15:
      Function_200b60c(*(uint *)(v5 + 84), 0, v6[4], 1, 0, 1);
      result = (uint)Function_200b630(*(uint *)(v5 + 84), 1u, *((ushort *)v6 + 1));
      break;
    case 0x16:
      Function_200b60c(*(uint *)(v5 + 84), 0, v6[4], 1, 0, 1);
      v46 = *(uint *)(*(uint *)(v5 + 12) + 4 * *v6);
      Function_2076b10_Dummy();
      result = Function_200b5cc(*(int **)(v5 + 84), 1u, v47);
      break;
    case 0x17:
      Function_200bb74(*(uint *)(v5 + 84), 0, *(ushort *)(*(uint *)(v5 + 12) + 8 * v6[5] + 208));
      v48 = *(uint *)(*(uint *)(v5 + 12) + 4 * *v6);
      Function_2076b10_Dummy();
      result = Function_200b5cc(*(int **)(v5 + 84), 1u, v49);
      break;
    case 0x18:
      Function_200bb74(*(uint *)(v5 + 84), 0, *(ushort *)(*(uint *)(v5 + 12) + 8 * v6[5] + 208));
      v50 = *(uint *)(*(uint *)(v5 + 12) + 4 * v6[1]);
      Function_2076b10_Dummy();
      result = Function_200b5cc(*(int **)(v5 + 84), 1u, v51);
      break;
    case 0x19:
      Function_200bb74(*(uint *)(v5 + 84), 0, *(ushort *)(*(uint *)(v5 + 12) + 8 * v6[5] + 208));
      result = (uint)Function_200b630(*(uint *)(v5 + 84), 1u, *((ushort *)v6 + 1));
      break;
    case 0x1A:
      Function_200bb74(*(uint *)(v5 + 84), 0, *(ushort *)(*(uint *)(v5 + 12) + 8 * v6[5] + 208));
      result = Function_200b60c(*(uint *)(v5 + 84), 1u, v6[4], 1, 0, 1);
      break;
    case 0x1B:
      v52 = *(uint *)(*(uint *)(v5 + 12) + 4 * *v6);
      Function_2076b10_Dummy();
      Function_200b5cc(*(int **)(v5 + 84), 0, v53);
      Function_200bb74(*(uint *)(v5 + 84), 1u, *(ushort *)(*(uint *)(v5 + 12) + 8 * v6[5] + 208));
      result = (uint)Function_200b630(*(uint *)(v5 + 84), 2u, *((ushort *)v6 + 1));
      break;
    case 0x1C:
      Function_200bb74(*(uint *)(v5 + 84), 0, *(ushort *)(*(uint *)(v5 + 12) + 8 * *v7 + 208));
      v54 = 0;
      do
      {
        result = v7[v54 + 1];
        if ( result == 4 )
          break;
        v55 = *(uint *)(*(uint *)(v5 + 12) + 4 * result);
        Function_2076b10_Dummy();
        result = Function_200b5cc(*(int **)(v5 + 84), v54++ + 1, v56);
      }
      while ( v54 < 4 );
      break;
    default:
      result = ErrorHandler();
      break;
  }
  return result;
}

//----- (02242DA8) --------------------------------------------------------
int __fastcall Function_2242da8(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  Function_201ada4_ClearTextBox(a1 + 52, 255);
  return Function_201a954(v1 + 52, v2);
}

//----- (02242DC0) --------------------------------------------------------
uint __fastcall Function_2242dc0(uint a1, ushort **a2, uint a3, int a4, uchar *a5, uchar *a6, int a7)
{
  uint v7;
  ushort **v8;
  uint v9;
  int v10;
  ushort *v11;
  int v12;
  int v13;
  int v15;

  v7 = a1;
  v8 = a2;
  v9 = a3;
  v15 = a4;
  if ( a7 == 1 )
  {
    v10 = 0;
  }
  else if ( *(uchar *)(*(uint *)a1 + 369) )
  {
    v10 = 1;
  }
  else
  {
    v10 = Function_2027ac0(*(ushort **)(*(uint *)a1 + 6536));
  }
  v11 = Function_200b1ec_CallMsgDecrypt(v8, v9);
  Function_224290c(v7, v15, a5, a6);
  Function_200c388(*(uint **)(v7 + 84), *(uint *)(v7 + 88), (int)v11);
  Function_201ada4_ClearTextBox(v7 + 52, 255);
  v12 = *(uint *)(v7 + 88);
  *(uchar *)(v7 + 556) = Function_201d738_CallInitTextInterpreter(v7 + 52, 1);
  if ( !v10 )
  {
    *(uchar *)(v7 + 556) = -1;
    Function_201a954(v7 + 52, 556);
  }
  Function_20192ec(*(uint *)(v7 + 48), 1);
  return Function_20237bc_FreeMsg((int)v11, v13);
}

//----- (02242E5C) --------------------------------------------------------
uint __fastcall Function_2242e5c(uint a1, uint a2, uchar *a3, uchar *a4)
{
  uint v4;
  uint v5;
  uchar *v6;
  uchar *v7;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  if ( a2 >= 0x2F )
    ErrorHandler();
  return Function_2242dc0(
           v5,
           *(ushort ***)(v5 + 68),
           LOWORD(dword_22538F0[v4]),
           BYTE2(dword_22538F0[v4]),
           v6,
           v7,
           HIBYTE(dword_22538F0[v4]));
}

//----- (02242E9C) --------------------------------------------------------
uint __fastcall Function_2242e9c(uint a1, uint a2, uint a3, uchar *a4, uchar *a5)
{
  uint v5;
  uchar *v6;
  int v8;
  uint v9;

  v5 = a1;
  v6 = a4;
  Function_2095790(a2, a3, &v9, &v8);
  return Function_2242dc0(v5, *(ushort ***)(v5 + 80), v9, v8, v6, a5, 0);
}

//----- (02242ECC) --------------------------------------------------------
int __fastcall Function_2242ecc(int a1)
{
  int v1;
  int result;

  v1 = *(uchar *)(a1 + 556);
  if ( v1 == 255 )
    result = 0;
  else
    result = Function_201d724(v1);
  return result;
}

//----- (02242EE4) --------------------------------------------------------
uint __fastcall Function_2242ee4(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  ushort *v7;

  v2 = a1;
  v3 = a2;
  v7 = (ushort *)Function_2023790(12, 0x15u);
  GetPkmnData(*(int **)(*(uint *)(v2 + 12) + 4 * v3), 0x77u, v7);
  if ( v3 == *(uchar *)(*(uint *)v2 + 291) )
    v4 = 66048;
  else
    v4 = 329216;
  Function_223f1e8(
    0x15u,
    *(uint **)(v2 + 48),
    *(uint *)(v2 + 40),
    *(uint *)(v2 + 96),
    v2 + 476 + 20 * v3,
    (int)v7,
    0,
    v4,
    0,
    33005,
    0,
    0,
    0,
    0,
    15);
  Function_223f1e8(
    0x15u,
    *(uint **)(v2 + 48),
    *(uint *)(v2 + 40),
    *(uint *)(v2 + 96),
    v2 + 396 + 20 * v3,
    *(uint *)(*(uint *)v2 + 4 * v3 + 232),
    0,
    v4,
    0,
    33005,
    0,
    0,
    0,
    0,
    15);
  return Function_20237bc_FreeMsg((int)v7, v5);
}

//----- (02242FA4) --------------------------------------------------------
int __fastcall Function_2242fa4(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = 0;
  do
    Function_2242ee4(v1, v2++);
  while ( v2 < 4 );
  return Function_2242fe8(v1);
}

//----- (02242FC0) --------------------------------------------------------
uint __fastcall Function_2242fc0(int a1)
{
  int **v1;
  int v2;
  int **v3;
  uint result;

  v1 = (int **)(a1 + 476);
  v2 = 0;
  v3 = (int **)(a1 + 396);
  do
  {
    Function_223f2e4(v1);
    result = Function_223f2e4(v3);
    ++v2;
    v1 += 5;
    v3 += 5;
  }
  while ( v2 < 4 );
  return result;
}

//----- (02242FE8) --------------------------------------------------------
int __fastcall Function_2242fe8(int a1)
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
  v7 = a1 + 476;
  v1 = 0;
  v2 = 12;
  v3 = 28;
  v8 = a1 + 396;
  do
  {
    v4 = 20 * *(uchar *)(v6 + v1 + 561);
    Function_223f2f8(v7 + v4, 1, v2, 0);
    result = Function_223f2f8(v8 + v4, 1, v3, 0);
    ++v1;
    v2 += 48;
    v3 += 48;
  }
  while ( v1 < 4 );
  return result;
}

//----- (02243040) --------------------------------------------------------
int __fastcall Function_2243040(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_200cc3c(a1, a2, a3, 0x17u, 1, 1, 33009);
  Function_200ce24(v3, v4, v5, 0x16u, 1, 33009);
  return Function_200ce54(v3, v4, v5, 0x15u, 1, 33009);
}

//----- (0224308C) --------------------------------------------------------
int __fastcall Function_224308c(int a1)
{
  int v1;

  v1 = a1;
  Function_200d070(a1, 33009);
  Function_200d090(v1, 33009);
  return Function_200d0a0(v1, 33009);
}

//----- (022430AC) --------------------------------------------------------
uint __fastcall Function_22430ac(int a1, int a2, uint a3)
{
  short v3;
  int v4;
  int v5;
  uint v6;

  v3 = a2;
  v4 = 4 * a2;
  v5 = a1 + 352;
  v6 = a3;
  if ( !*(uint *)(a1 + 352 + 4 * a2) )
    *(uint *)(v5 + v4) = Function_200ce6c(
                             *(uint **)(a1 + 24),
                             *(uint *)(a1 + 28),
                             (short *)dword_2253750);
  Function_200d364(*(int **)(v5 + v4), v6);
  Function_200d4c4(*(int **)(v5 + v4), 64, (short)(48 * v3 + 42));
  return Function_200d324(**(uint **)(v5 + v4));
}

//----- (022430F8) --------------------------------------------------------
int __fastcall Function_22430f8(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = 0;
  v2 = a1;
  do
  {
    result = *(uint *)(v2 + 352);
    if ( result )
    {
      Function_200d0f4(result);
      result = 352;
      *(uint *)(v2 + 352) = 0;
    }
    ++v1;
    v2 += 4;
  }
  while ( v1 < 4 );
  return result;
}

//----- (02243120) --------------------------------------------------------
int __fastcall Function_2243120(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  MI_CpuFill8((ushort *)a2, 0, 6u);
  *(uchar *)v3 = v5;
  *(ushort *)(v3 + 2) = *(ushort *)(v4 + 2 * v5 + 566);
  result = *(uchar *)(v4 + v5 + 574);
  *(uchar *)(v3 + 5) = result;
  return result;
}

//----- (0224314C) --------------------------------------------------------
int __fastcall Function_224314c(char a1, int a2, uchar *a3)
{
  *a3 = a1;
  if ( a2 <= 0 )
    return 31;
  if ( a2 <= 20 )
    return 32;
  if ( a2 <= 50 )
    return 33;
  if ( a2 > 90 )
    return 35;
  return 34;
}

//----- (02243174) --------------------------------------------------------
int __fastcall Function_2243174(uint a1)
{
  uint v1;
  int v2;

  v1 = s32_div_f(a1, 50);
  if ( v1 >= 4 )
    v1 = 3;
  v2 = dword_22536FC[v1];
  if ( v2 < 0 )
    ErrorHandler();
  if ( v2 > 127 )
    ErrorHandler();
  return v2;
}

//----- (022431A0) --------------------------------------------------------
uint *__fastcall Function_22431a0(int a1, char a2, char a3, int a4, char a5, uchar *a6)
{
  int v6;
  char v7;
  char v8;
  int v9;
  int v10;

  v6 = a1;
  v7 = a2;
  *a6 = 0;
  v8 = a3;
  v9 = a4;
  v10 = malloc(0x15u, 20);
  MI_CpuFill8((ushort *)v10, 0, 0x14u);
  *(uint *)v10 = v6;
  *(uint *)(v10 + 16) = a6;
  *(uchar *)(v10 + 13) = v8;
  *(uchar *)(v10 + 11) = v7;
  *(uint *)(v10 + 4) = v9;
  *(uchar *)(v10 + 14) = a5;
  return AddTaskToTaskList1((int)Function_22431e8, v10, 0xBB8u);
}

//----- (022431E8) --------------------------------------------------------
int __fastcall Function_22431e8(int *a1, uchar *a2)
{
  int v2;
  int *v3;
  int v4;
  int result;
  int v6;
  int v7;
  uchar v8;

  v2 = (int)a2;
  v3 = a1;
  v4 = a2[8];
  if ( !a2[8] )
  {
    if ( a2[13] )
    {
      result = a2[13] - 1;
      a2[13] = result;
      return result;
    }
    Function_2005748(0x6E5u);
    Function_2004ad4(0x6E5u, *(uint *)(v2 + 4));
    ++*(uchar *)(v2 + 8);
    goto LABEL_8;
  }
  if ( v4 == 1 )
  {
LABEL_8:
    if ( *(uchar *)(v2 + 9) )
      v6 = 2;
    else
      v6 = 0;
    LoadFromNARC_RCSN(45, v6, *(uint **)(*(uint *)v2 + 48), 3u, 0, 0, 1, 21);
    result = *(uchar *)(v2 + 8) + 1;
    *(uchar *)(v2 + 8) = result;
    return result;
  }
  if ( v4 == 2 )
  {
    if ( ++a2[12] <= 2u || (a2[12] = 0, a2[9] ^= 1u, --a2[8], a2[9]) || (++a2[10], a2[10] <= 2u) )
    {
      result = a2[14];
      if ( result == 1 )
      {
        result = s32_div_f(16 * a2[11], 50);
        v7 = *(char *)(v2 + 15);
        if ( v7 < result )
        {
          *(uchar *)(v2 + 15) = v7 + 2;
          if ( *(char *)(v2 + 15) > result )
            *(uchar *)(v2 + 15) = result;
          result = Function_20039b0(*(uint *)(*(uint *)v2 + 92), 0, 1, 2u, *(uchar *)(v2 + 15), 0x237Eu);
        }
      }
    }
    else
    {
      result = 255;
      a2[8] = -1;
    }
  }
  else if ( a2[14] == 1 && (v8 = a2[15], *(uchar *)(v2 + 15)) )
  {
    *(uchar *)(v2 + 15) = v8 - 2;
    if ( *(char *)(v2 + 15) < 0 )
      *(uchar *)(v2 + 15) = 0;
    result = Function_20039b0(*(uint *)(*(uint *)v2 + 92), 0, 1, 2u, *(uchar *)(v2 + 15), 0x237Eu);
  }
  else
  {
    **(uchar **)(v2 + 16) = 1;
    free(v2);
    result = Call_RemoveTaskFromTaskList(v3);
  }
  return result;
}

//----- (0224331C) --------------------------------------------------------
int __fastcall Function_224331c(int a1, int a2, int a3, uchar *a4, int a5)
{
  uchar *v5;
  int v6;
  int *v7;
  int v8;
  uchar v9;
  char v10;
  int v11;
  uint v12;
  int v13;
  uint v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int result;
  int v22;
  uint v23;
  uint v24;
  int v25;
  int v26;
  int v27;
  char v28;
  char v29;
  short v30;
  short v31;
  short v32[11];

  v5 = a4;
  v24 = 0;
  *a4 = 0;
  LOWORD(v23) = 0;
  v25 = 0;
  v6 = a1 + 24 * a2;
  v26 = 48 * a3 + 24;
  v28 = 48 * a3 + 24;
  do
  {
    v7 = *(int **)(v6 + 208);
    if ( v7 )
    {
      if ( !*v5 )
      {
        Function_200d550(v7, v32, &v31);
        v24 = Function_208c0a4() << 8;
        v27 = fflt(v32[0] - 40);
        v8 = fflt(v31 - v26);
        Function_20e1108(v27, 0);
        if ( !v10 & v9 )
        {
          v11 = fmul(0x45800000u, v27);
          v22 = fadd(0x3F000000u, v11);
        }
        else
        {
          v12 = fmul(0x45800000u, v27);
          v22 = fsub(v12, 1056964608);
        }
        Function_20e1108(v8, 0);
        if ( !v10 & v9 )
        {
          v13 = fmul(0x45800000u, v8);
          v15 = fadd(0x3F000000u, v13);
        }
        else
        {
          v14 = fmul(0x45800000u, v8);
          v15 = fsub(v14, 1056964608);
        }
        v16 = ffix(v15);
        v17 = ffix(v22);
        v18 = FX_Atan2Idx(v16, v17);
        v23 = s32_div_f(36000 * v18, 0xFFFF) & 0xFFFF;
      }
      v19 = malloc(0x15u, 40);
      MI_CpuFill8((ushort *)v19, 0, 0x28u);
      *(uint *)(v19 + 4) = a5;
      *(uint *)(v19 + 8) = *(uint *)(v6 + 208);
      *(uint *)(v19 + 16) = v24;
      *(ushort *)(v19 + 30) = v23;
      *(uint *)(v19 + 20) = 2048;
      *(uchar *)(v19 + 33) = 40;
      *(uchar *)(v19 + 34) = v28;
      *(uint *)(v19 + 12) = v5;
      *(uchar *)(v19 + 35) = v32[0];
      *(uchar *)(v19 + 36) = v31;
      Function_200d550(*(int **)(v6 + 208), &v30, &v29);
      v20 = v32[0] - v30;
      if ( v20 < 0 )
        v20 = v30 - v32[0];
      *(ushort *)(v19 + 28) = s32_div_f(v20 << 8, 3 * (uchar)*v5);
      *(uint *)(v19 + 24) = v30 << 8;
      AddTaskToTaskList1((int)Function_22434e0, v19, 0x9C40u);
      ++*v5;
    }
    v6 += 4;
    result = v25 + 1;
    v25 = result;
  }
  while ( result < 6 );
  return result;
}

//----- (022434E0) --------------------------------------------------------
int __fastcall Function_22434e0(int *a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  uint v8;
  int v9;
  int v10;
  ushort v11;
  int v12;
  long long v13;
  ushort v14;
  int v15;
  long long v16;
  int v17;
  int v18;
  long long v19;
  int result;
  short v21[2];
  short v22[2];
  int v23;

  v23 = a4;
  v4 = a2;
  v5 = a1;
  if ( *(uchar *)(a2 + 32) )
  {
    if ( *(uchar *)(a2 + 32) == 1 )
    {
      *(ushort *)(a2 + 30) += *(uint *)(a2 + 20);
      if ( *(ushort *)(a2 + 30) >= 0x8CA0u )
        *(ushort *)(a2 + 30) += 29536;
      v8 = *(uint *)(a2 + 16);
      if ( v8 <= 0x300 )
        v9 = 0;
      else
        v9 = v8 - 768;
      *(uint *)(v4 + 16) = v9;
      if ( *(uint *)(v4 + 16) <= 0x200u )
        ++*(uchar *)(v4 + 32);
      v10 = *(uint *)(v4 + 16) >> 8;
      v11 = s32_div_f(*(ushort *)(v4 + 30), 100);
      v12 = Function_201d1d4(v11);
      v13 = v10 << 12;
      v14 = s32_div_f(*(ushort *)(v4 + 30), 100);
      v15 = Function_201d15c(v14);
      v16 = ll_mul(v12, v13);
      v17 = v16;
      LODWORD(v16) = v15;
      v18 = HIDWORD(v16);
      HIDWORD(v16) = v15 >> 31;
      v19 = ll_mul(v16, v13);
      result = Function_200d4c4(
                 *(int **)(v4 + 8),
                 (short)(*(uchar *)(v4 + 33)
                                + (ushort)((int)(((uint)(v17 + 2048) >> 12) | ((__CFADD__(v17, 2048) + v18) << 20))
                                                   / 4096)),
                 (short)(*(uchar *)(v4 + 34)
                                + (ushort)((int)(((uint)(v19 + 2048) >> 12) | ((__CFADD__((uint)v19, 2048) + HIDWORD(v19)) << 20))
                                                   / 4096)));
    }
    else
    {
      Function_200d3f4(*(uint **)(a2 + 8), 0);
      Function_2005748(0x5E1u);
      Function_22414b0(*(uint *)(v4 + 4));
      --**(uchar **)(v4 + 12);
      free(v4);
      result = Call_RemoveTaskFromTaskList(v5);
    }
  }
  else
  {
    v6 = *(uint *)(a2 + 24) - *(ushort *)(a2 + 28);
    *(uint *)(v4 + 24) = v6;
    v7 = *(uchar *)(v4 + 35) << 8;
    if ( v6 <= v7 )
    {
      *(uint *)(v4 + 24) = *(uchar *)(v4 + 35) << 8;
      ++*(uchar *)(v4 + 32);
    }
    Function_200d550(*(int **)(v4 + 8), v22, v21);
    result = Function_200d4c4(*(int **)(v4 + 8), (short)(*(uint *)(v4 + 24) >> 8), v21[0]);
  }
  return result;
}

//----- (0224365C) --------------------------------------------------------
int __fastcall Function_224365c(int a1, char a2)
{
  int v2;
  char v3;
  int v4;

  v2 = a1;
  v3 = a2;
  v4 = malloc(0x15u, 12);
  MI_CpuFill8((ushort *)v4, 0, 0xCu);
  *(uint *)v4 = v2;
  *(uchar *)(v4 + 8) = v3;
  *(uint *)(v4 + 4) = AddTaskToTaskList1((int)Function_22436a4, v4, 0x9C40u);
  return v4;
}

//----- (02243690) --------------------------------------------------------
uint __fastcall Function_2243690(int a1)
{
  int v1;

  v1 = a1;
  Call_RemoveTaskFromTaskList(*(int **)(a1 + 4));
  return free(v1);
}

//----- (022436A4) --------------------------------------------------------
int *__fastcall Function_22436a4(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int *result;

  v2 = 0;
  v3 = a2;
  v4 = 0;
  do
  {
    result = *(int **)(v4 + *(uint *)v3 + 20 * *(uchar *)(v3 + 8) + 304);
    if ( result )
      result = (int *)Function_200d330(result);
    ++v2;
    v4 += 4;
  }
  while ( v2 < 5 );
  return result;
}

//----- (022436D0) --------------------------------------------------------
int __fastcall Function_22436d0(int a1, int a2, int a3, int a4, uchar *a5)
{
  int v5;
  int v6;
  int result;
  int v8;
  int v9;
  int v10;

  v9 = a1;
  v5 = 0;
  *a5 = 0;
  v6 = a1 + 20 * a4;
  v10 = (48 * a3 + 24) & 0xFF;
  do
  {
    result = *(uint *)(v6 + 304);
    if ( result )
    {
      v8 = malloc(0x15u, 40);
      MI_CpuFill8((ushort *)v8, 0, 0x28u);
      *(uint *)v8 = v9;
      *(uint *)(v8 + 4) = *(uint *)(v6 + 304);
      *(uint *)(v8 + 8) = a5;
      *(uchar *)(v8 + 15) = 40;
      *(uchar *)(v8 + 16) = v10;
      *(ushort *)(v8 + 36) = 12 * (uchar)*a5;
      AddTaskToTaskList1((int)Function_2243750, v8, 0x9C40u);
      result = (uchar)*a5 + 1;
      *a5 = result;
    }
    ++v5;
    v6 += 4;
  }
  while ( v5 < 5 );
  return result;
}

//----- (02243750) --------------------------------------------------------
int __fastcall Function_2243750(int *a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  ushort v8;
  int v9;
  ushort v10;
  int v11;
  long long v12;
  long long v13;
  int v14;
  int v15;
  int v16;
  int v17;
  uint v18;
  int v19;
  int v20;
  int v21;
  int result;
  short v23[2];
  short v24[2];
  int v25;

  v25 = a4;
  v4 = a2;
  v5 = a1;
  v6 = *(uchar *)(a2 + 14);
  if ( *(uchar *)(a2 + 14) )
  {
    if ( v6 != 1 )
    {
      if ( v6 == 2 )
      {
        *(uint *)(a2 + 28) -= *(uint *)(a2 + 20);
        *(uint *)(a2 + 32) += *(uint *)(a2 + 24);
        v21 = *(uchar *)(a2 + 15) << 8;
        if ( *(uint *)(v4 + 28) <= v21 )
        {
          *(uint *)(v4 + 28) = v21;
          ++*(uchar *)(v4 + 14);
        }
        result = Function_200d4c4(*(int **)(v4 + 4), *(uint *)(v4 + 28) << 8 >> 16, *(uint *)(v4 + 32) << 8 >> 16);
      }
      else
      {
        Function_200d3f4(*(uint **)(a2 + 4), 0);
        Function_2005748(0x5E1u);
        --**(uchar **)(v4 + 8);
        free(v4);
        result = Call_RemoveTaskFromTaskList(v5);
      }
      return result;
    }
  }
  else
  {
    v7 = *(short *)(a2 + 36);
    if ( v7 > 0 )
    {
      result = v7 - 1;
      *(ushort *)(a2 + 36) = result;
      return result;
    }
    Function_200d550(*(int **)(a2 + 4), v24, v23);
    v23[0] += 6;
    *(uint *)(v4 + 28) = v24[0] << 8;
    *(uint *)(v4 + 32) = v23[0] << 8;
    Function_2005748(0x7F9u);
    ++*(uchar *)(v4 + 14);
  }
  *(ushort *)(v4 + 12) += 2048;
  if ( *(ushort *)(v4 + 12) >= 0x8CA0u )
    *(ushort *)(v4 + 12) += 29536;
  v8 = s32_div_f(*(ushort *)(v4 + 12), 100);
  v9 = Function_201d15c(v8);
  v10 = s32_div_f(*(ushort *)(v4 + 12), 100);
  v11 = Function_201d1d4(v10);
  *(uint *)(v4 + 32) += 128;
  v12 = ll_mul(v9, 49152LL);
  v13 = ll_mul(v11, 24576LL);
  Function_200d4c4(
    *(int **)(v4 + 4),
    (short)((*(uint *)(v4 + 28) >> 8)
                   + (int)(((uint)(v12 + 2048) >> 12) | ((__CFADD__((uint)v12, 2048) + HIDWORD(v12)) << 20))
                   / 4096),
    (short)((*(uint *)(v4 + 32) >> 8)
                   + (int)(((uint)(v13 + 2048) >> 12) | ((__CFADD__((uint)v13, 2048) + HIDWORD(v13)) << 20))
                   / 4096));
  result = (short)++*(ushort *)(v4 + 36);
  if ( result > 80 )
  {
    *(ushort *)(v4 + 36) = 0;
    Function_200d550(*(int **)(v4 + 4), v24, v23);
    v14 = v24[0];
    *(uint *)(v4 + 28) = v24[0] << 8;
    v15 = v23[0];
    *(uint *)(v4 + 32) = v23[0] << 8;
    v16 = v14 - *(uchar *)(v4 + 15);
    if ( v16 < 0 )
      v16 = -v16;
    v17 = *(uchar *)(v4 + 16);
    v18 = v16 << 8;
    v19 = v15 - v17;
    if ( v15 - v17 < 0 )
      v19 = v17 - v15;
    *(uint *)(v4 + 20) = 768;
    v20 = s32_div_f(v18, 768);
    *(uint *)(v4 + 24) = s32_div_f(v19 << 8, v20);
    if ( *(uchar *)(v4 + 16) < v15 )
      *(uint *)(v4 + 24) = -*(uint *)(v4 + 24);
    Function_2005748(0x6EAu);
    result = *(uchar *)(v4 + 14) + 1;
    *(uchar *)(v4 + 14) = result;
  }
  return result;
}

//----- (02243944) --------------------------------------------------------
int __fastcall Function_2243944(int a1)
{
  short v2;
  short v3;
  short v4;
  short v5;
  short v6;

  v2 = 41;
  v3 = 40;
  v4 = 36;
  v5 = 38;
  v6 = 39;
  return (ushort)*(&v2 + a1);
}

//----- (02243970) --------------------------------------------------------
int __fastcall Function_2243970(int a1)
{
  short v2;
  short v3;
  short v4;
  short v5;
  short v6;

  v2 = 12;
  v3 = 13;
  v4 = 14;
  v5 = 15;
  v6 = 16;
  return (ushort)*(&v2 + a1);
}

//----- (0224399C) --------------------------------------------------------
int __fastcall Function_224399c(int a1)
{
  short v2;
  short v3;
  short v4;
  short v5;
  short v6;

  v2 = 18;
  v3 = 19;
  v4 = 20;
  v5 = 21;
  v6 = 22;
  return (ushort)*(&v2 + a1);
}

//----- (022439C8) --------------------------------------------------------
ushort *__fastcall Function_22439c8(int a1, int a2, int a3, ushort *a4)
{
  ushort *v4;
  int v5;
  int v6;
  int v7;
  ushort *result;
  int v9;
  uint v10;
  uint v11;

  v4 = a4;
  v5 = a1;
  v6 = a2;
  v7 = a3;
  result = MI_CpuFill8(a4, 0, 0xCu);
  v4[2] = v7;
  if ( v7 > 143 )
  {
    if ( v7 > 267 )
    {
      result = (ushort *)280;
      if ( v7 > 280 )
      {
        if ( v7 == 467 )
        {
          *((uchar *)v4 + 6) = 1;
          result = (ushort *)537133248;
          *(uint *)v4 = 537133248;
        }
      }
      else if ( v7 == 280 )
      {
        result = (ushort *)1;
        *((uchar *)v4 + 7) = 1;
      }
    }
    else if ( v7 < 267 )
    {
      if ( v7 > 174 )
      {
        if ( v7 <= 218 && v7 >= 216 )
        {
          if ( v7 == 216 )
          {
            result = (ushort *)255;
            *((uchar *)v4 + 8) = -1;
          }
          else if ( v7 == 218 )
          {
            result = 0;
            *((uchar *)v4 + 8) = 0;
          }
        }
      }
      else if ( v7 == 174 )
      {
        v9 = 4 * v6;
        v10 = GetPkmnData(*(int **)(v5 + 4 * v6), 0xB1u, 0);
        v11 = GetPkmnData(*(int **)(v5 + v9), 0xB2u, 0);
        if ( v10 != 7 && v11 != 7 )
        {
          result = 0;
          *((uchar *)v4 + 7) = 0;
        }
        else
        {
          result = (ushort *)1;
          *((uchar *)v4 + 7) = 1;
        }
      }
    }
    else
    {
      result = (ushort *)161;
      v4[2] = 161;
    }
  }
  else
  {
    if ( v7 >= 143 )
      goto LABEL_31;
    if ( v7 <= 76 )
    {
      if ( v7 < 76 && v7 != 13 )
        return result;
LABEL_31:
      result = (ushort *)1;
      *((uchar *)v4 + 6) = 1;
      return result;
    }
    if ( v7 > 119 )
    {
      if ( v7 != 130 )
        return result;
      goto LABEL_31;
    }
    if ( v7 == 119 )
    {
      result = (ushort *)1;
      v4[2] = 1;
    }
  }
  return result;
}

//----- (02243A98) --------------------------------------------------------
int __fastcall Function_2243a98(int a1, int a2, int a3)
{
  if ( !a3 )
    return 0;
  if ( a3 != *(ushort *)(a1 + 2 * a2 + 38) || a3 == (*(uint *)(a1 + 4 * a2 + 224) & 0xFFFF) )
    return 1;
  return 0;
}

//----- (02243AC4) --------------------------------------------------------
int __fastcall Function_2243ac4(int a1, int a2)
{
  int v2;
  int v3;

  v2 = 0;
  v3 = 0;
  do
  {
    if ( *(uchar *)(a1 + v3 + 14) == *(uchar *)(a1 + a2 + 14) )
      ++v2;
    ++v3;
  }
  while ( v3 < 4 );
  return v2 - 1;
}

//----- (02243AE4) --------------------------------------------------------
int __fastcall Function_2243ae4(int a1)
{
  return *((uchar *)&dword_22539AC + a1);
}

//----- (02243AF0) --------------------------------------------------------
int __fastcall Function_2243af0(int a1, int a2)
{
  return *((char *)dword_22539C8 + 5 * a1 + LoadMoveData(a2, 0xBu));
}

//----- (02243B0C) --------------------------------------------------------
int __fastcall Function_2243b0c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  short v6;
  int i;
  int v8;
  int result;
  int v10;
  int j;
  int k;
  int v13;
  short v14;
  char v15;
  int l;
  char v17[4];
  char v18[4];
  char v19[8];
  int v20;

  v20 = a4;
  v4 = 0;
  v5 = a1;
  while ( v4 < 4 )
  {
    v6 = *(ushort *)(a1 + 2 * v4 + 26);
    v18[v4] = v4;
    *(ushort *)&v19[2 * v4] = v6;
    for ( i = 0; i < 4; ++i )
    {
      if ( v4 == *(uchar *)(a1 + i + 1) )
      {
        v17[v4] = i;
        break;
      }
    }
    ++v4;
  }
  v8 = 0;
  result = (int)dword_22539B0;
  while ( v8 < 4 )
  {
    v10 = *(uint *)(v5 + 44 * v8 + 88);
    switch ( (uint)(v10 << 26) >> 30 )
    {
      case 1u:
        *(ushort *)&v19[2 * v8] = *((ushort *)dword_22539C0 + ((uint)(v10 << 24) >> 30));
        break;
      case 2u:
        *(ushort *)&v19[2 * v8] = *((ushort *)dword_22539B0 + ((uint)(v10 << 24) >> 30));
        break;
      case 3u:
        *(ushort *)&v19[2 * v8] = *((ushort *)dword_22539B8 + ((uint)(v10 << 24) >> 30));
        break;
      default:
        break;
    }
    ++v8;
  }
  for ( j = 0; j < 3; ++j )
  {
    for ( k = 3; k > j; --k )
    {
      result = *(short *)&v19[2 * (k - 1)];
      v13 = *(short *)&v19[2 * k];
      if ( result <= v13 )
      {
        if ( result != v13 )
          continue;
        result = (uchar)v17[k];
        if ( (uchar)v17[k - 1] >= (uint)result )
          continue;
      }
      result = k - 1;
      v14 = *(ushort *)&v19[2 * k];
      *(ushort *)&v19[2 * k] = *(ushort *)&v19[2 * (k - 1)];
      *(ushort *)&v19[2 * (k - 1)] = v14;
      LOBYTE(v14) = v18[k];
      v18[k] = v18[k - 1];
      v18[result] = v14;
      v15 = v17[k];
      v17[k] = v17[k - 1];
      v17[result] = v15;
    }
  }
  for ( l = 0; l < 4; ++l )
  {
    result = v5 + l;
    *(uchar *)(v5 + l + 1) = v18[l];
  }
  return result;
}

//----- (02243C28) --------------------------------------------------------
int __fastcall Function_2243c28(int a1, int a2, int a3, int a4)
{
  void **v5;
  short v6;
  char v7;
  char v8;
  char v9;
  int v10;

  v10 = a4;
  v5 = &off_22539E4;
  v6 = 22;
  v7 = *(uchar *)(*(uint *)a1 + 291);
  v9 = *(uchar *)(*(uint *)a1 + 284);
  v8 = *(uchar *)(*(uint *)a1 + 369);
  return Function_224f18c(a1 + 3120, &v5);
}

//----- (02243C68) --------------------------------------------------------
int __fastcall Function_2243c68(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a2 + 3120, 255, a3);
}

//----- (02243C80) --------------------------------------------------------
int __fastcall Function_2243c80(int a1, int a2, int a3)
{
  return Function_224f26c(a2 + 3120, a3);
}

//----- (02243C94) --------------------------------------------------------
void Function_2243c94()
{
  ;
}

//----- (02243C98) --------------------------------------------------------
int __fastcall Function_2243c98(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a2 + 3120, 255, a3);
}

//----- (02243CB0) --------------------------------------------------------
int __fastcall Function_2243cb0(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int result;

  v3 = a2;
  *(uchar *)(a2 + 5712) = 1;
  v4 = a3;
  result = Function_2094edc(*(uchar **)a2);
  if ( !result )
    result = Function_224f26c(v3 + 3120, v4);
  return result;
}

//----- (02243CDC) --------------------------------------------------------
int __fastcall Function_2243cdc(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a2 + 3120, 255, a3);
}

//----- (02243CF4) --------------------------------------------------------
uint *__fastcall Function_2243cf4(int a1, int a2, ushort *a3)
{
  int v3;
  ushort *v4;
  ushort *v5;

  v3 = a2;
  v4 = a3;
  v5 = (ushort *)malloc(0x15u, 16);
  MI_CpuFill8(v5, 0, 0x10u);
  *(uint *)v5 = v3;
  v5[2] = *v4;
  v5[3] = v4[1];
  v5[4] = v4[2];
  v5[5] = v4[3];
  return AddTaskToTaskList1((int)Function_2243d34, (int)v5, 0x7530u);
}

//----- (02243D34) --------------------------------------------------------
uint __fastcall Function_2243d34(int *a1, int a2)
{
  int v2;
  int v3;
  int *v4;
  uint result;

  v2 = a2;
  v3 = *(uchar *)(a2 + 15);
  v4 = a1;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      result = (ushort)++*(ushort *)(v2 + 12);
      if ( result > 0x1E )
      {
        *(ushort *)(v2 + 12) = 0;
        result = *(uchar *)(v2 + 15) + 1;
        *(uchar *)(v2 + 15) = result;
      }
    }
    else if ( v3 == 2 )
    {
      result = *(uchar *)(v2 + 14);
      if ( result == 1 )
      {
        result = 3;
        *(uchar *)(v2 + 15) = 3;
      }
    }
    else
    {
      Function_224f26c(*(uint *)v2 + 3120, v2 + 4);
      free(v2);
      result = Call_RemoveTaskFromTaskList(v4);
    }
  }
  else
  {
    Function_22431a0(*(uint *)v2, 0, 0, 70, 0, (uchar *)(v2 + 14));
    result = *(uchar *)(v2 + 15) + 1;
    *(uchar *)(v2 + 15) = result;
  }
  return result;
}

//----- (02243DB4) --------------------------------------------------------
int __fastcall Function_2243db4(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a2 + 3120, 255, a3);
}

//----- (02243DCC) --------------------------------------------------------
uint *__fastcall Function_2243dcc(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  ushort *v5;
  int v6;
  int v7;

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = malloc(0x15u, 28);
  MI_CpuFill8((ushort *)v7, 0, 0x1Cu);
  *(uint *)v7 = v4;
  *(ushort *)(v7 + 4) = *v5;
  *(ushort *)(v7 + 6) = v5[1];
  *(ushort *)(v7 + 8) = v5[2];
  *(ushort *)(v7 + 10) = v5[3];
  *(uchar *)(v7 + 24) = *(uchar *)(v6 + 228);
  *(ushort *)(v7 + 18) = *(ushort *)(v6 + 216);
  *(ushort *)(v7 + 20) = *(ushort *)(v6 + 218);
  *(ushort *)(v7 + 22) = *(ushort *)(v6 + 220);
  return AddTaskToTaskList1((int)Function_2243e2c, v7, 0x7530u);
}

//----- (02243E2C) --------------------------------------------------------
uint __fastcall Function_2243e2c(int *a1, int a2)
{
  int v2;
  int *v3;
  uint result;
  uint v5;

  v2 = a2;
  v3 = a1;
  result = *(uchar *)(a2 + 12);
  switch ( (uchar)a2 )
  {
    case 0:
      v5 = *(uchar *)(a2 + 24);
      if ( *(uchar *)(v2 + 24) )
        Function_2242e5c(*(uint *)v2, v5, (uchar *)(v2 + 18), 0);
      Function_2005748(0x6F9u);
      result = *(uchar *)(v2 + 12) + 1;
      *(uchar *)(v2 + 12) = result;
      break;
    case 1:
      if ( !*(uchar *)(a2 + 24) || (result = Function_2242ecc(*(uint *)a2)) == 0 )
      {
        result = *(uchar *)(v2 + 12) + 1;
        *(uchar *)(v2 + 12) = result;
      }
      break;
    case 2:
      result = (ushort)++*(ushort *)(a2 + 14);
      if ( result > 0x1E )
      {
        *(ushort *)(a2 + 14) = 0;
        result = *(uchar *)(a2 + 12) + 1;
        *(uchar *)(a2 + 12) = result;
      }
      break;
    case 3:
      Function_22431a0(*(uint *)a2, 0, 0, 70, 0, (uchar *)(a2 + 16));
      result = *(uchar *)(v2 + 12) + 1;
      *(uchar *)(v2 + 12) = result;
      break;
    case 4:
      if ( *(uchar *)(a2 + 16) == 1 )
        *(uchar *)(a2 + 12) = ++result;
      break;
    default:
      Function_224f26c(*(uint *)a2 + 3120, a2 + 4);
      free(v2);
      result = Call_RemoveTaskFromTaskList(v3);
      break;
  }
  return result;
}

//----- (02243EF8) --------------------------------------------------------
int __fastcall Function_2243ef8(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a2 + 3120, 255, a3);
}

//----- (02243F10) --------------------------------------------------------
int __fastcall Function_2243f10(int a1, int a2, ushort *a3, uchar *a4)
{
  int v4;
  ushort *v5;
  uchar *v6;
  int v7;

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = malloc(0x15u, 28);
  MI_CpuFill8((ushort *)v7, 0, 0x1Cu);
  *(uint *)v7 = v4;
  *(ushort *)(v7 + 4) = *v5;
  *(ushort *)(v7 + 6) = v5[1];
  *(ushort *)(v7 + 8) = v5[2];
  *(ushort *)(v7 + 10) = v5[3];
  *(uchar *)(v7 + 21) = *v6;
  Function_22426e8(v4, 0, (uchar *)(v7 + 22));
  AddTaskToTaskList1((int)Function_2243f68, v7, 0x7530u);
  return Function_2242da8(v4);
}

//----- (02243F68) --------------------------------------------------------
int __fastcall Function_2243f68(int *a1, uchar *a2)
{
  int v2;
  int *v3;
  int v4;
  uint v5;
  int result;
  int v7;
  int v8;

  v2 = (int)a2;
  v3 = a1;
  v4 = Function_20765ac(*(uint *)(*(uint *)(*(uint *)a2 + 12) + 4 * a2[21]), 0);
  v5 = *(uchar *)(v2 + 20);
  if ( v5 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_2243F94 + v5) + 35930006);
  switch ( (uchar)v5 )
  {
    case 0:
      result = (short)++*(ushort *)(v2 + 24);
      if ( result > 10 )
      {
        *(ushort *)(v2 + 24) = 0;
        result = *(uchar *)(v2 + 20) + 1;
        *(uchar *)(v2 + 20) = result;
      }
      break;
    case 1:
      v7 = 4 * *(uchar *)(v2 + 21);
      v8 = Function_20765ac(*(uint *)(*(uint *)(*(uint *)v2 + 12) + v7), 0);
      Function_2007dec(*(uint *)(*(uint *)v2 + v7 + 20), 0x25u, 0);
      Function_2007dec(*(uint *)(*(uint *)v2 + v7 + 20), 6u, 0);
      Function_2007dec(*(uint *)(*(uint *)v2 + v7 + 20), 0, 256);
      Function_2007dec(*(uint *)(*(uint *)v2 + v7 + 20), 1u, v8 + 172);
      *(uint *)(v2 + 12) = 0x10000;
      *(uint *)(v2 + 16) = 44032;
      result = *(uchar *)(v2 + 20) + 1;
      *(uchar *)(v2 + 20) = result;
      break;
    case 2:
      if ( *(uchar *)(v2 + 21) == *(uchar *)(**(uint **)v2 + 291) )
        Function_2005748(0x6F8u);
      ++*(uchar *)(v2 + 20);
      goto LABEL_10;
    case 3:
LABEL_10:
      *(uint *)(v2 + 12) -= 1462;
      *(uint *)(v2 + 16) -= 2194;
      if ( *(uint *)(v2 + 12) >> 8 <= 216 || *(uint *)(v2 + 16) >> 8 <= 112 )
      {
        *(uint *)(v2 + 12) = 55296;
        *(uint *)(v2 + 16) = 28672;
        ++*(uchar *)(v2 + 20);
      }
      Function_2007dec(
        *(uint *)(*(uint *)v2 + 4 * *(uchar *)(v2 + 21) + 20),
        0,
        *(uint *)(v2 + 12) >> 8);
      result = Function_2007dec(
                 *(uint *)(*(uint *)v2 + 4 * *(uchar *)(v2 + 21) + 20),
                 1u,
                 (*(uint *)(v2 + 16) >> 8) + v4);
      break;
    default:
      result = *(uchar *)(v2 + 22);
      if ( result == 1 )
      {
        Function_224f26c(*(uint *)v2 + 3120, v2 + 4);
        free(v2);
        result = Call_RemoveTaskFromTaskList(v3);
      }
      break;
  }
  return result;
}

//----- (022440C8) --------------------------------------------------------
int __fastcall Function_22440c8(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a2 + 3120, 255, a3);
}

//----- (022440E0) --------------------------------------------------------
uint *__fastcall Function_22440e0(int a1, int a2, ushort *a3, uchar *a4)
{
  int v4;
  ushort *v5;
  uchar *v6;
  int v7;
  int v8;

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = malloc(0x15u, 28);
  MI_CpuFill8((ushort *)v7, 0, 0x1Cu);
  *(uint *)v7 = v4;
  *(ushort *)(v7 + 4) = *v5;
  *(ushort *)(v7 + 6) = v5[1];
  *(ushort *)(v7 + 8) = v5[2];
  *(ushort *)(v7 + 10) = v5[3];
  v8 = *v6;
  *(uchar *)(v7 + 21) = v8;
  Function_20765ac(*(uint *)(*(uint *)(v4 + 12) + 4 * v8), 0);
  *(uint *)(v7 + 12) = 55296;
  *(uint *)(v7 + 16) = 28672;
  return AddTaskToTaskList1((int)Function_224413c, v7, 0x7530u);
}

//----- (0224413C) --------------------------------------------------------
int __fastcall Function_224413c(int *a1, uchar *a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int result;

  v2 = (int)a2;
  v3 = a1;
  v4 = 4 * a2[21];
  v5 = Function_20765ac(*(uint *)(*(uint *)(*(uint *)a2 + 12) + v4), 0);
  if ( *(uchar *)(v2 + 20) )
  {
    if ( *(uchar *)(v2 + 20) == 1 )
    {
      v6 = *(uchar *)(v2 + 21);
      if ( *(uchar *)(*(uint *)v2 + v6 + 5714) == 1 )
      {
        Function_2241524(*(uint *)v2 + 12, v6);
        *(uchar *)(*(uint *)v2 + *(uchar *)(v2 + 21) + 5714) = 0;
      }
      result = *(uchar *)(v2 + 20) + 1;
      *(uchar *)(v2 + 20) = result;
    }
    else
    {
      Function_224f26c(*(uint *)v2 + 3120, v2 + 4);
      free(v2);
      result = Call_RemoveTaskFromTaskList(v3);
    }
  }
  else
  {
    *(uint *)(v2 + 12) += 1462;
    *(uint *)(v2 + 16) += 2194;
    if ( *(uint *)(v2 + 12) >> 8 >= 256 || *(uint *)(v2 + 16) >> 8 >= 172 )
    {
      Function_2007dec(*(uint *)(*(uint *)v2 + v4 + 20), 0x25u, 1);
      Function_2007dec(*(uint *)(*(uint *)v2 + v4 + 20), 6u, 1);
      ++*(uchar *)(v2 + 20);
    }
    Function_2007dec(*(uint *)(*(uint *)v2 + 4 * *(uchar *)(v2 + 21) + 20), 0, *(uint *)(v2 + 12) >> 8);
    result = Function_2007dec(
               *(uint *)(*(uint *)v2 + 4 * *(uchar *)(v2 + 21) + 20),
               1u,
               (*(uint *)(v2 + 16) >> 8) + v5);
  }
  return result;
}

//----- (02244228) --------------------------------------------------------
int __fastcall Function_2244228(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a2 + 3120, 255, a3);
}

//----- (02244240) --------------------------------------------------------
uint *__fastcall Function_2244240(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  ushort *v5;
  int v6;
  int v7;

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = malloc(0x15u, 28);
  MI_CpuFill8((ushort *)v7, 0, 0x1Cu);
  *(uint *)v7 = v4;
  *(ushort *)(v7 + 4) = *v5;
  *(ushort *)(v7 + 6) = v5[1];
  *(ushort *)(v7 + 8) = v5[2];
  *(ushort *)(v7 + 10) = v5[3];
  *(uchar *)(v7 + 13) = *(uchar *)v6;
  *(uchar *)(v7 + 14) = *(uchar *)(v6 + 2);
  *(uchar *)(v7 + 26) = *(uchar *)(v6 + 228);
  *(ushort *)(v7 + 20) = *(ushort *)(v6 + 216);
  *(ushort *)(v7 + 22) = *(ushort *)(v6 + 218);
  *(ushort *)(v7 + 24) = *(ushort *)(v6 + 220);
  *(uchar *)(v7 + 16) = *(uchar *)(v6 + 3);
  return AddTaskToTaskList1((int)Function_22442ac, v7, 0x7530u);
}

//----- (022442AC) --------------------------------------------------------
uint __fastcall Function_22442ac(int *a1, int a2)
{
  int v2;
  int *v3;
  uint result;
  int v5;
  uint v6;

  v2 = a2;
  v3 = a1;
  result = *(uchar *)(a2 + 12);
  switch ( (uchar)a2 )
  {
    case 0:
      v5 = Function_2243174(*(short *)(*(uint *)a2 + 2 * *(uchar *)(a2 + 13) + 578));
      if ( v5 <= 0 )
      {
        result = 2;
        *(uchar *)(v2 + 12) = 2;
      }
      else
      {
        Function_22431a0(*(uint *)v2, 0, 0, v5, 0, (uchar *)(v2 + 18));
        result = *(uchar *)(v2 + 12) + 1;
        *(uchar *)(v2 + 12) = result;
      }
      break;
    case 1:
      if ( *(uchar *)(a2 + 18) == 1 )
        *(uchar *)(a2 + 12) = ++result;
      break;
    case 2:
      *(uchar *)(a2 + 12) = ++result;
      break;
    case 3:
      v6 = *(uchar *)(a2 + 26);
      if ( *(uchar *)(v2 + 26) )
      {
        Function_2242e5c(*(uint *)v2, v6, (uchar *)(v2 + 20), 0);
        result = *(uchar *)(v2 + 12) + 1;
        *(uchar *)(v2 + 12) = result;
      }
      else
      {
        result = 5;
        *(uchar *)(v2 + 12) = 5;
      }
      break;
    case 4:
      result = Function_2242ecc(*(uint *)a2);
      if ( !result )
      {
        result = *(uchar *)(v2 + 12) + 1;
        *(uchar *)(v2 + 12) = result;
      }
      break;
    case 5:
      *(uchar *)(a2 + 12) = ++result;
      break;
    case 6:
      Function_2241a8c(*(uint *)a2 + 12, *(uchar *)(a2 + 14), *(uchar *)(a2 + 16));
      Function_2241b3c(*(uint *)v2, *(uchar *)(v2 + 14), *(uchar *)(v2 + 16), (uchar *)(v2 + 15));
      result = *(uchar *)(v2 + 12) + 1;
      *(uchar *)(v2 + 12) = result;
      break;
    case 7:
      if ( *(uchar *)(a2 + 15) == 1 )
        *(uchar *)(a2 + 12) = ++result;
      break;
    case 8:
      result = (uchar)++*(uchar *)(a2 + 17);
      if ( result > 5 )
      {
        Function_2241b1c(*(uint *)a2 + 12);
        result = *(uchar *)(v2 + 12) + 1;
        *(uchar *)(v2 + 12) = result;
      }
      break;
    default:
      Function_224f26c(*(uint *)a2 + 3120, a2 + 4);
      free(v2);
      result = Call_RemoveTaskFromTaskList(v3);
      break;
  }
  return result;
}

//----- (022443E0) --------------------------------------------------------
int __fastcall Function_22443e0(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a2 + 3120, 255, a3);
}

//----- (022443F8) --------------------------------------------------------
uint *__fastcall Function_22443f8(int a1, int a2, ushort *a3, uchar *a4)
{
  int v4;
  ushort *v5;
  uchar *v6;
  int v7;
  uint *v8;
  int v9;
  int v10;
  int v11;

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = malloc(0x15u, 292);
  MI_CpuFill8((ushort *)v7, 0, 0x124u);
  *(uint *)v7 = v4;
  v8 = (uint *)(v7 + 20);
  *(ushort *)(v7 + 4) = *v5;
  *(ushort *)(v7 + 6) = v5[1];
  *(ushort *)(v7 + 8) = v5[2];
  *(ushort *)(v7 + 10) = v5[3];
  *(uchar *)(v7 + 13) = *v6;
  *(ushort *)(v7 + 14) = *(ushort *)&v6[44 * *v6 + 16];
  *(uchar *)(v7 + 270) = v6[228];
  *(ushort *)(v7 + 264) = *((ushort *)v6 + 108);
  *(ushort *)(v7 + 266) = *((ushort *)v6 + 109);
  *(ushort *)(v7 + 268) = *((ushort *)v6 + 110);
  *(uchar *)(v7 + 278) = v6[229];
  *(ushort *)(v7 + 272) = *((ushort *)v6 + 111);
  *(ushort *)(v7 + 274) = *((ushort *)v6 + 112);
  v9 = 30;
  *(ushort *)(v7 + 276) = *((ushort *)v6 + 113);
  do
  {
    v10 = *(uint *)v6;
    v11 = *((uint *)v6 + 1);
    v6 += 8;
    *v8 = v10;
    v8[1] = v11;
    v8 += 2;
    --v9;
  }
  while ( v9 );
  *v8 = *(uint *)v6;
  return AddTaskToTaskList1((int)&Function_22444bc, v7, 5u);
}

//----- (022444BC) --------------------------------------------------------
uint __fastcall Function_22444bc(int *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int *v6;
  uchar *v7;
  uint result;
  int v9;
  short v10;
  int v11;
  uint v12;
  int v13;
  short *v14;
  int *v15;
  int v16;
  int *v17;
  int *v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  uint v25;
  char v26;
  char v27;
  char v28;
  short v29;
  char v30;
  char v31;
  char v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  char v38;
  char v39;
  int v40;
  int v41;
  int v42;
  short v43;
  char v44;
  char v45;
  char v46;
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
  short v57;
  short v58;
  int v59;
  short v60;
  short v61;
  short v62;
  int v63;
  short v64;
  short v65;
  short v66;
  int v67;
  int v68;

  v68 = a4;
  v4 = a2;
  v5 = *(uchar *)(a2 + 13);
  v6 = a1;
  v7 = (uchar *)(v4 + 36 + 44 * v5);
  result = *(uchar *)(v4 + 12);
  if ( result <= 0xE )
    JUMPOUT(__CS__, (char *)&off_22444E6 + *((short *)&off_22444E6 + result) + 2);
  switch ( (uchar)v4 + 36 )
  {
    case 0:
      if ( *(uchar *)(v4 + 270) )
      {
        Function_2242e5c(*(uint *)v4, *(uchar *)(v4 + 270), (uchar *)(v4 + 264), 0);
        result = *(uchar *)(v4 + 12) + 1;
        *(uchar *)(v4 + 12) = result;
      }
      else
      {
        result = 2;
        *(uchar *)(v4 + 12) = 2;
      }
      break;
    case 1:
      result = Function_2242ecc(*(uint *)v4);
      if ( !result )
      {
        result = *(uchar *)(v4 + 12) + 1;
        *(uchar *)(v4 + 12) = result;
      }
      break;
    case 2:
      *(uchar *)(v4 + 12) = ++result;
      break;
    case 3:
      if ( v7[18] )
      {
        Function_2242e9c(*(uint *)v4, v7[18], v7[19], v7 + 12, 0);
        result = *(uchar *)(v4 + 12) + 1;
        *(uchar *)(v4 + 12) = result;
      }
      else
      {
        result = 5;
        *(uchar *)(v4 + 12) = 5;
      }
      break;
    case 4:
      result = Function_2242ecc(*(uint *)v4);
      if ( !result )
      {
        result = *(uchar *)(v4 + 12) + 1;
        *(uchar *)(v4 + 12) = result;
      }
      break;
    case 5:
      *(uchar *)(v4 + 12) = ++result;
      break;
    case 6:
      if ( *(uchar *)(v4 + 278) )
      {
        Function_2242e5c(*(uint *)v4, *(uchar *)(v4 + 278), (uchar *)(v4 + 264), 0);
        result = *(uchar *)(v4 + 12) + 1;
        *(uchar *)(v4 + 12) = result;
      }
      else
      {
        result = 8;
        *(uchar *)(v4 + 12) = 8;
      }
      break;
    case 7:
      result = Function_2242ecc(*(uint *)v4);
      if ( !result )
      {
        result = *(uchar *)(v4 + 12) + 1;
        *(uchar *)(v4 + 12) = result;
      }
      break;
    case 8:
      *(uchar *)(v4 + 12) = ++result;
      break;
    case 9:
      Function_22439c8(**(uint **)v4, v5, *(ushort *)(v4 + 14), (ushort *)(v4 + 280));
      ++*(uchar *)(v4 + 12);
      goto LABEL_24;
    case 10:
LABEL_24:
      v9 = *(uchar *)(v4 + 13) + 1;
      if ( v9 >= 4 )
        v9 = 0;
      MI_CpuFill8(&v57, 0, 0x58u);
      MI_CpuFill8(&v33, 0, 0x90u);
      v10 = GetPkmnData(*(int **)(*(uint *)(*(uint *)v4 + 12) + 4 * *(uchar *)(v4 + 13)), 5u, 0);
      v32 = GetPkmnData(*(int **)(*(uint *)(*(uint *)v4 + 12) + 4 * *(uchar *)(v4 + 13)), 0x6Fu, 0);
      v31 = Call_CheckIfShinyPkmn_2(*(uint *)(*(uint *)(*(uint *)v4 + 12) + 4 * *(uchar *)(v4 + 13)));
      v30 = GetPkmnData(*(int **)(*(uint *)(*(uint *)v4 + 12) + 4 * *(uchar *)(v4 + 13)), 0x70u, 0);
      v25 = GetPkmnData(*(int **)(*(uint *)(*(uint *)v4 + 12) + 4 * *(uchar *)(v4 + 13)), 0, 0);
      v11 = 4 * v9;
      v29 = GetPkmnData(*(int **)(*(uint *)(*(uint *)v4 + 12) + v11), 5u, 0);
      v28 = GetPkmnData(*(int **)(*(uint *)(*(uint *)v4 + 12) + v11), 0x6Fu, 0);
      v27 = Call_CheckIfShinyPkmn_2(*(uint *)(*(uint *)(*(uint *)v4 + 12) + v11));
      v26 = GetPkmnData(*(int **)(*(uint *)(*(uint *)v4 + 12) + v11), 0x70u, 0);
      v12 = GetPkmnData(*(int **)(*(uint *)(*(uint *)v4 + 12) + v11), 0, 0);
      v13 = 0;
      v14 = &v57;
      v57 = 0;
      v24 = v12;
      v58 = *(ushort *)(v4 + 284);
      v59 = 1;
      v60 = 10;
      v61 = *(uchar *)(v4 + 287);
      v62 = *(uchar *)(v4 + 288);
      v63 = 0;
      v64 = 0;
      v65 = 1;
      v67 = 9;
      do
      {
        ++v13;
        v14[12] = v10;
        ++v14;
      }
      while ( v13 < 4 );
      v66 = v29;
      v34 = *(uint *)(*(uint *)v4 + 48);
      v35 = *(uint *)(*(uint *)v4 + 92);
      v36 = *(uint *)v4 + 100 + 16 * *(uchar *)(v4 + 13);
      v37 = *(uint *)v4 + 164;
      v15 = &v33;
      v16 = 0;
      v17 = &v33;
      v18 = &v33;
      do
      {
        *((uchar *)v15 + 28) = -1;
        *((ushort *)v17 + 26) = v10;
        *((uchar *)v15 + 60) = v32;
        *((uchar *)v15 + 64) = v31;
        *((uchar *)v15 + 68) = v30;
        ++v16;
        v18[18] = v25;
        v18[22] = 0;
        v15 = (int *)((char *)v15 + 1);
        v17 = (int *)((char *)v17 + 2);
        ++v18;
      }
      while ( v16 < 4 );
      v48 = *(uint *)(v4 + 280);
      v38 = 0;
      v19 = 1;
      v39 = 1;
      v43 = v29;
      v44 = v28;
      v45 = v27;
      v46 = v26;
      v47 = v24;
      v40 = *(uint *)(*(uint *)v4 + 4 * *(uchar *)(v4 + 13) + 20);
      if ( *(uchar *)(v4 + 13) )
        v19 = 0;
      v20 = 4 * v19;
      v21 = *(uint *)(*(uint *)v4 + 4 * v19 + 20);
      v49 = 8;
      v50 = 45;
      v51 = 1;
      v41 = v21;
      v52 = 30;
      v42 = 0;
      v54 = 0;
      v53 = 2;
      v55 = 3;
      v33 = *(uint *)(*(uint *)v4 + 36);
      v56 = *(uint *)(**(uint **)v4 + 4 * *(uchar *)(v4 + 13) + 348);
      ((void (__fastcall *)(uint, short *, uint, int *))dword_221FE30[0])(
        *(uint *)(*(uint *)v4 + 44),
        &v57,
        *(ushort *)(v4 + 284),
        &v33);
      v22 = Function_20765ac(*(uint *)(*(uint *)(*(uint *)v4 + 12) + 4 * *(uchar *)(v4 + 13)), 0);
      if ( *(uint *)(v4 + 280) != -537133249 )
        Function_2007dec(*(uint *)(*(uint *)v4 + 4 * *(uchar *)(v4 + 13) + 20), 6u, 0);
      Function_2007dec(*(uint *)(*(uint *)v4 + 4 * *(uchar *)(v4 + 13) + 20), 0x25u, 0);
      Function_2007dec(*(uint *)(*(uint *)v4 + 4 * *(uchar *)(v4 + 13) + 20), 0, 216);
      Function_2007dec(*(uint *)(*(uint *)v4 + 4 * *(uchar *)(v4 + 13) + 20), 1u, v22 + 112);
      Function_2007dec(*(uint *)(*(uint *)v4 + v20 + 20), 0x25u, 1);
      Function_2007dec(*(uint *)(*(uint *)v4 + v20 + 20), 0, 80);
      Function_2007dec(*(uint *)(*(uint *)v4 + v20 + 20), 1u, 42);
      result = *(uchar *)(v4 + 12) + 1;
      *(uchar *)(v4 + 12) = result;
      break;
    case 11:
      ((void (__fastcall *)(uint))dword_222016C[0])(*(uint *)(*(uint *)v4 + 44));
      result = ((int (__fastcall *)(uint))dword_2220188[0])(*(uint *)(*(uint *)v4 + 44));
      if ( !result )
      {
        ((void (__fastcall *)(uint))dword_2220198[0])(*(uint *)(*(uint *)v4 + 44));
        if ( *(uchar *)(v4 + 286) )
        {
          --*(uchar *)(v4 + 286);
          ++*(uchar *)(v4 + 287);
          if ( *(uint *)(v4 + 280) == 537133248 )
            *(uint *)(v4 + 280) = -537133249;
          result = 10;
          *(uchar *)(v4 + 12) = 10;
        }
        else
        {
          result = *(uchar *)(v4 + 12) + 1;
          *(uchar *)(v4 + 12) = result;
        }
      }
      break;
    case 12:
      v23 = *(ushort *)(v4 + 284);
      if ( v23 == 144 || v23 == 164 )
        *(uchar *)(*(uint *)v4 + v5 + 5714) = 1;
      result = *(uchar *)(v4 + 12) + 1;
      *(uchar *)(v4 + 12) = result;
      break;
    case 13:
      Function_22426e8(*(uint *)v4, 1, (uchar *)(v4 + 16));
      result = *(uchar *)(v4 + 12) + 1;
      *(uchar *)(v4 + 12) = result;
      break;
    case 14:
      if ( *(uchar *)(v4 + 16) == 1 )
        *(uchar *)(v4 + 12) = ++result;
      break;
    default:
      Function_224f26c(*(uint *)v4 + 3120, v4 + 4);
      free(v4);
      result = Call_RemoveTaskFromTaskList(v6);
      break;
  }
  return result;
}

//----- (02244958) --------------------------------------------------------
int __fastcall Function_2244958(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a2 + 3120, 255, a3);
}

//----- (02244970) --------------------------------------------------------
uint *__fastcall Function_2244970(int a1, int a2, ushort *a3)
{
  int v3;
  ushort *v4;
  int v5;

  v3 = a2;
  v4 = a3;
  v5 = malloc(0x15u, 20);
  MI_CpuFill8((ushort *)v5, 0, 0x14u);
  *(uint *)v5 = v3;
  *(ushort *)(v5 + 4) = *v4;
  *(ushort *)(v5 + 6) = v4[1];
  *(ushort *)(v5 + 8) = v4[2];
  *(ushort *)(v5 + 10) = v4[3];
  *(uchar *)(v5 + 13) = *(uchar *)(*(uint *)(v3 + 12) + 291);
  return AddTaskToTaskList1((int)Function_22449b8, v5, 0x64u);
}

//----- (022449B8) --------------------------------------------------------
int __fastcall Function_22449b8(int *a1, uchar *a2)
{
  uchar *v2;
  int *v3;
  uint v4;
  int result;
  int v6;
  uint v7;
  int v8;
  int v9;
  char v10;
  short v11;
  char v12;

  v2 = a2;
  v3 = a1;
  v4 = a2[12];
  if ( v4 <= 0xA )
    JUMPOUT(__CS__, *((short *)&off_22449D4 + v4) + 35932630);
  switch ( (uchar)v4 )
  {
    case 0:
      Function_223f9c4(*(uint *)(*(uint *)a2 + 2076), 1, 0, 0);
      result = v2[12] + 1;
      v2[12] = result;
      return result;
    case 1:
      Function_223f9c4(*(uint *)(*(uint *)a2 + 2076), 2, 0, 0);
      v6 = *(uchar *)(*(uint *)v2 + 560);
      if ( v6 == 3 )
        v7 = 3;
      else
        v7 = 2;
      v12 = v6 + 1;
      Function_2242e5c(*(uint *)v2, v7, (uchar *)&v11, 0);
      if ( *(uchar *)(*(uint *)v2 + 560) == 3 && !v2[14] )
      {
        Function_2005748(0x6F6u);
        ++v2[14];
      }
      result = v2[12] + 1;
      v2[12] = result;
      return result;
    case 2:
      result = Function_2242ecc(*(uint *)a2);
      if ( !result )
      {
        ++v2[12];
        goto LABEL_14;
      }
      return result;
    case 3:
LABEL_14:
      v8 = Function_223faf8(*(uint *)(*(uint *)v2 + 2076));
      result = -1;
      if ( v8 != -1 )
      {
        *((ushort *)v2 + 8) = GetPkmnData(*(int **)(*(uint *)(*(uint *)v2 + 12) + 4 * v2[13]), v8 + 54, 0);
        Function_2005748(0x5DDu);
        result = v2[12] + 1;
        v2[12] = result;
      }
      return result;
    case 4:
      result = Function_223fbc0(*(uint *)(*(uint *)a2 + 2076));
      if ( result )
      {
        ++v2[12];
        goto LABEL_19;
      }
      return result;
    case 5:
LABEL_19:
      ++v2[12];
      goto LABEL_20;
    case 6:
LABEL_20:
      Function_223f9c4(*(uint *)(*(uint *)v2 + 2076), 3, 0, 0);
      v10 = *(uchar *)(*(uint *)v2 + 560) + 1;
      Function_2242e5c(*(uint *)v2, 1u, (uchar *)&v9, 0);
      result = v2[12] + 1;
      v2[12] = result;
      return result;
    case 7:
      result = Function_2242ecc(*(uint *)a2);
      if ( result )
        return result;
      ++v2[12];
      goto LABEL_23;
    case 8:
LABEL_23:
      result = Function_223faf8(*(uint *)(*(uint *)v2 + 2076));
      if ( result != -1 )
      {
        *((ushort *)v2 + 9) = result;
        Function_2005748(0x5DDu);
        result = v2[12] + 1;
        v2[12] = result;
      }
      return result;
    case 9:
      result = Function_223fbc0(*(uint *)(*(uint *)a2 + 2076));
      if ( !result )
        return result;
      if ( *((ushort *)v2 + 9) == 3 )
      {
        result = 1;
        v2[12] = 1;
      }
      else
      {
        ++v2[12];
LABEL_29:
        ++v2[12];
LABEL_30:
        if ( *(uchar *)(**(uint **)v2 + 369) == 1 )
          Function_2242e5c(*(uint *)v2, 0x2Eu, 0, 0);
        Function_224f26c(*(uint *)v2 + 3120, v2 + 4);
        Function_223f9c4(*(uint *)(*(uint *)v2 + 2076), 0, 0, 0);
        free((int)v2);
        result = Call_RemoveTaskFromTaskList(v3);
      }
      return result;
    case 0xA:
      goto LABEL_29;
    default:
      goto LABEL_30;
  }
}

//----- (02244BB0) --------------------------------------------------------
int __fastcall Function_2244bb0(int a1, int a2, int a3, int a4, int a5)
{
  ushort *v5;
  int result;

  v5 = *(ushort **)(a4 + 4 * a5);
  result = a2 + a5;
  *(ushort *)(a2 + 2 * a5 + 566) = *v5;
  *(uchar *)(a2 + a5 + 574) = v5[1];
  return result;
}

//----- (02244BD4) --------------------------------------------------------
int __fastcall Function_2244bd4(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a2 + 3120, 255, a3);
}

//----- (02244BEC) --------------------------------------------------------
void Function_2244bec()
{
  ;
}

//----- (02244BF0) --------------------------------------------------------
int __fastcall Function_2244bf0(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a2 + 3120, 255, a3);
}

//----- (02244C08) --------------------------------------------------------
uint *__fastcall Function_2244c08(int a1, int a2, ushort *a3, int *a4)
{
  int v4;
  ushort *v5;
  int *v6;
  int v7;
  uint *v8;
  int v9;
  int v10;
  int v11;

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = malloc(0x15u, 276);
  MI_CpuFill8((ushort *)v7, 0, 0x114u);
  *(uint *)v7 = v4;
  v8 = (uint *)(v7 + 20);
  *(ushort *)(v7 + 4) = *v5;
  v9 = 30;
  *(ushort *)(v7 + 6) = v5[1];
  *(ushort *)(v7 + 8) = v5[2];
  *(ushort *)(v7 + 10) = v5[3];
  *(uchar *)(v7 + 13) = *(uchar *)v6;
  *(uchar *)(v7 + 14) = *((uchar *)v6 + 1);
  do
  {
    v10 = *v6;
    v11 = v6[1];
    v6 += 2;
    *v8 = v10;
    v8[1] = v11;
    v8 += 2;
    --v9;
  }
  while ( v9 );
  *v8 = *v6;
  return AddTaskToTaskList1((int)Function_2244c68, v7, 0x7530u);
}

//----- (02244C68) --------------------------------------------------------
int __fastcall Function_2244c68(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = *(uchar *)(a2 + 13);
  v5 = *(uchar *)(a2 + 12);
  v6 = v2 + 36 + 44 * v4;
  switch ( (uchar)v2 + 36 )
  {
    case 0:
      *(ushort *)(v2 + 264) = *(ushort *)(v6 + 26);
      result = *(uchar *)(v2 + 12) + 1;
      *(uchar *)(v2 + 12) = result;
      break;
    case 1:
      result = v5 + 1;
      *(uchar *)(v2 + 12) = v5 + 1;
      break;
    case 2:
      if ( *(short *)(v2 + 264) >= *(short *)(v6 + 24) )
      {
        result = 4;
        *(uchar *)(v2 + 12) = 4;
      }
      else
      {
        *(ushort *)(v2 + 264) += 10;
        Function_2241f34(
          *(uint *)v2 + 12,
          *(uchar *)(v2 + 13),
          *(uchar *)(v2 + 14),
          *(short *)(v2 + 264));
        result = *(uchar *)(v2 + 12) + 1;
        *(uchar *)(v2 + 12) = result;
      }
      break;
    case 3:
      result = (char)++*(uchar *)(v2 + 15);
      if ( result > 2 )
      {
        *(uchar *)(v2 + 15) = 0;
        result = *(uchar *)(v2 + 12) - 1;
        *(uchar *)(v2 + 12) = result;
      }
      break;
    default:
      Function_224f26c(*(uint *)v2 + 3120, v2 + 4);
      free(v2);
      result = Call_RemoveTaskFromTaskList(v3);
      break;
  }
  return result;
}

//----- (02244D20) --------------------------------------------------------
int __fastcall Function_2244d20(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a2 + 3120, 255, a3);
}

//----- (02244D38) --------------------------------------------------------
uint *__fastcall Function_2244d38(int a1, int a2, ushort *a3, int *a4)
{
  int v4;
  ushort *v5;
  int *v6;
  int v7;
  uint *v8;
  int v9;
  int v10;
  int v11;

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = malloc(0x15u, 276);
  MI_CpuFill8((ushort *)v7, 0, 0x114u);
  *(uint *)v7 = v4;
  v8 = (uint *)(v7 + 20);
  *(ushort *)(v7 + 4) = *v5;
  v9 = 30;
  *(ushort *)(v7 + 6) = v5[1];
  *(ushort *)(v7 + 8) = v5[2];
  *(ushort *)(v7 + 10) = v5[3];
  *(uchar *)(v7 + 13) = *(uchar *)v6;
  *(uchar *)(v7 + 14) = *((uchar *)v6 + 1);
  do
  {
    v10 = *v6;
    v11 = v6[1];
    v6 += 2;
    *v8 = v10;
    v8[1] = v11;
    v8 += 2;
    --v9;
  }
  while ( v9 );
  *v8 = *v6;
  return AddTaskToTaskList1((int)Function_2244d98, v7, 0x7530u);
}

//----- (02244D98) --------------------------------------------------------
int __fastcall Function_2244d98(int *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint v5;
  int result;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int *v15;

  v2 = a2;
  v3 = *(uchar *)(a2 + 13);
  v15 = a1;
  v4 = v2 + 36 + 44 * v3;
  v5 = *(uchar *)(v2 + 12);
  if ( v5 <= 0x10 )
    JUMPOUT(__CS__, (char *)&off_2244DC0 + *((short *)&off_2244DC0 + v5) + 2);
  switch ( (uchar)v3 )
  {
    case 0:
      *(ushort *)(v2 + 264) = *(ushort *)(v4 + 26);
      result = *(uchar *)(v2 + 12) + 1;
      *(uchar *)(v2 + 12) = result;
      return result;
    case 1:
      if ( *(uchar *)(v4 + 18) )
      {
        Function_2242e9c(
          *(uint *)v2,
          *(uchar *)(v4 + 18),
          *(uchar *)(v4 + 19),
          (uchar *)(v4 + 12),
          0);
        result = *(uchar *)(v2 + 12) + 1;
        *(uchar *)(v2 + 12) = result;
      }
      else
      {
        result = 3;
        *(uchar *)(v2 + 12) = 3;
      }
      return result;
    case 2:
      result = Function_2242ecc(*(uint *)v2);
      if ( !result )
      {
        result = *(uchar *)(v2 + 12) + 1;
        *(uchar *)(v2 + 12) = result;
      }
      return result;
    case 3:
      *(uchar *)(v2 + 12) = v5 + 1;
      goto LABEL_12;
    case 4:
LABEL_12:
      ++*(uchar *)(v2 + 12);
      goto LABEL_13;
    case 5:
LABEL_13:
      v7 = *(short *)(v2 + 264);
      if ( v7 >= *(short *)(v4 + 24) )
      {
        result = 7;
        *(uchar *)(v2 + 12) = 7;
      }
      else
      {
        *(ushort *)(v2 + 264) = v7 + 10;
        Function_2241f34(
          *(uint *)v2 + 12,
          *(uchar *)(v2 + 13),
          *(uchar *)(v2 + 14),
          *(short *)(v2 + 264));
        result = *(uchar *)(v2 + 12) + 1;
        *(uchar *)(v2 + 12) = result;
      }
      return result;
    case 6:
      result = (char)++*(uchar *)(v2 + 15);
      if ( result > 2 )
      {
        *(uchar *)(v2 + 15) = 0;
        result = *(uchar *)(v2 + 12) - 1;
        *(uchar *)(v2 + 12) = result;
      }
      return result;
    case 7:
      *(uchar *)(v2 + 12) = v5 + 1;
      goto LABEL_21;
    case 8:
LABEL_21:
      if ( *(uint *)(v4 + 40) << 28 >> 31 == 1 )
      {
        *(ushort *)(v2 + 266) = *(char *)(v2 + *(uchar *)(v4 + 3) + 228);
        *(uchar *)(v2 + 16) = 0;
        result = *(uchar *)(v2 + 12) + 1;
        *(uchar *)(v2 + 12) = result;
      }
      else
      {
        result = 11;
        *(uchar *)(v2 + 12) = 11;
      }
      return result;
    case 9:
      v8 = 0;
      v9 = 0;
      ++*(uchar *)(v2 + 16);
      do
      {
        v10 = *(char *)(v2 + v9 + 228) - 10 * *(char *)(v2 + 16);
        if ( *(char *)(v2 + v9 + 231) <= v10 )
        {
          ++v8;
          Function_22424d4(*(uint *)v2 + 12, v9, v10);
          Function_2005748(0x6DFu);
        }
        ++v9;
      }
      while ( v9 < 3 );
      if ( v8 <= 0 )
      {
        result = 11;
        *(uchar *)(v2 + 12) = 11;
      }
      else
      {
        result = *(uchar *)(v2 + 12) + 1;
        *(uchar *)(v2 + 12) = result;
      }
      return result;
    case 0xA:
      result = (char)++*(uchar *)(v2 + 15);
      if ( result > 2 )
      {
        *(uchar *)(v2 + 15) = 0;
        result = *(uchar *)(v2 + 12) - 1;
        *(uchar *)(v2 + 12) = result;
      }
      return result;
    case 0xB:
      *(uchar *)(v2 + 12) = v5 + 1;
      goto LABEL_36;
    case 0xC:
LABEL_36:
      ++*(uchar *)(v2 + 12);
      goto LABEL_37;
    case 0xD:
LABEL_37:
      v11 = 0;
      v12 = v2 + 76;
      do
      {
        v13 = 44 * *(uchar *)(*(uint *)v2 + v11 + 561);
        v14 = *(uint *)(v12 + v13);
        if ( (uint)(v14 << 26) >> 30 != (uint)(v14 << 22) >> 30
          || (uint)(v14 << 24) >> 30 != (uint)(v14 << 20) >> 30 )
        {
          Function_22430ac(*(uint *)v2 + 12, v11, *(uint *)(v12 + v13) << 24 >> 30);
          Function_2005748(0x6E2u);
        }
        ++v11;
      }
      while ( v11 < 4 );
      ++*(uchar *)(v2 + 12);
      goto LABEL_43;
    case 0xE:
LABEL_43:
      ++*(uchar *)(v2 + 12);
      goto LABEL_44;
    case 0xF:
LABEL_44:
      ++*(uchar *)(v2 + 12);
      break;
    default:
      break;
  }
  Function_224f26c(*(uint *)v2 + 3120, v2 + 4);
  free(v2);
  return Call_RemoveTaskFromTaskList(v15);
}

//----- (02244FBC) --------------------------------------------------------
int __fastcall Function_2244fbc(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a2 + 3120, 255, a3);
}

//----- (02244FD4) --------------------------------------------------------
uint *__fastcall Function_2244fd4(int a1, int a2, ushort *a3, int *a4)
{
  int v4;
  ushort *v5;
  int *v6;
  int v7;
  uint *v8;
  int v9;
  int v10;
  int v11;

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = malloc(0x15u, 276);
  MI_CpuFill8((ushort *)v7, 0, 0x114u);
  *(uint *)v7 = v4;
  v8 = (uint *)(v7 + 20);
  *(ushort *)(v7 + 4) = *v5;
  v9 = 30;
  *(ushort *)(v7 + 6) = v5[1];
  *(ushort *)(v7 + 8) = v5[2];
  *(ushort *)(v7 + 10) = v5[3];
  *(uchar *)(v7 + 13) = *(uchar *)v6;
  *(uchar *)(v7 + 14) = *((uchar *)v6 + 1);
  do
  {
    v10 = *v6;
    v11 = v6[1];
    v6 += 2;
    *v8 = v10;
    v8[1] = v11;
    v8 += 2;
    --v9;
  }
  while ( v9 );
  *v8 = *v6;
  return AddTaskToTaskList1((int)Function_2245034, v7, 0x7530u);
}

//----- (02245034) --------------------------------------------------------
int __fastcall Function_2245034(int *a1, int a2)
{
  int v2;
  int v3;
  int *v4;
  int v5;
  char v6;
  int result;
  int v8;

  v2 = a2;
  v3 = *(uchar *)(a2 + 13);
  v4 = a1;
  v5 = v2 + 36 + 44 * v3;
  v6 = *(uchar *)(v2 + 12);
  switch ( (uchar)v3 )
  {
    case 0:
      *(ushort *)(v2 + 264) = *(ushort *)(v5 + 26);
      result = *(uchar *)(v2 + 12) + 1;
      *(uchar *)(v2 + 12) = result;
      return result;
    case 1:
      if ( *(uchar *)(v5 + 18) )
      {
        Function_2242e9c(
          *(uint *)v2,
          *(uchar *)(v5 + 18),
          *(uchar *)(v5 + 19),
          (uchar *)(v5 + 12),
          0);
        result = *(uchar *)(v2 + 12) + 1;
        *(uchar *)(v2 + 12) = result;
      }
      else
      {
        result = 3;
        *(uchar *)(v2 + 12) = 3;
      }
      return result;
    case 2:
      result = Function_2242ecc(*(uint *)v2);
      if ( !result )
      {
        result = *(uchar *)(v2 + 12) + 1;
        *(uchar *)(v2 + 12) = result;
      }
      return result;
    case 3:
      *(uchar *)(v2 + 12) = v6 + 1;
      goto LABEL_10;
    case 4:
LABEL_10:
      ++*(uchar *)(v2 + 12);
      goto LABEL_11;
    case 5:
LABEL_11:
      v8 = *(short *)(v2 + 264);
      if ( v8 >= *(short *)(v5 + 24) )
      {
        result = 7;
        *(uchar *)(v2 + 12) = 7;
      }
      else
      {
        *(ushort *)(v2 + 264) = v8 + 10;
        Function_2241f34(
          *(uint *)v2 + 12,
          *(uchar *)(v2 + 13),
          *(uchar *)(v2 + 14),
          *(short *)(v2 + 264));
        result = *(uchar *)(v2 + 12) + 1;
        *(uchar *)(v2 + 12) = result;
      }
      return result;
    case 6:
      result = (char)++*(uchar *)(v2 + 15);
      if ( result > 2 )
      {
        *(uchar *)(v2 + 15) = 0;
        result = *(uchar *)(v2 + 12) - 1;
        *(uchar *)(v2 + 12) = result;
      }
      return result;
    case 7:
      *(uchar *)(v2 + 12) = v6 + 1;
      break;
    default:
      break;
  }
  Function_224f26c(*(uint *)v2 + 3120, v2 + 4);
  free(v2);
  return Call_RemoveTaskFromTaskList(v4);
}

//----- (02245124) --------------------------------------------------------
int __fastcall Function_2245124(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a2 + 3120, 255, a3);
}

//----- (0224513C) --------------------------------------------------------
uint *__fastcall Function_224513c(int a1, int a2, ushort *a3, int *a4)
{
  int v4;
  ushort *v5;
  int *v6;
  int v7;
  uint *v8;
  int v9;
  int v10;
  int v11;

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = malloc(0x15u, 276);
  MI_CpuFill8((ushort *)v7, 0, 0x114u);
  *(uint *)v7 = v4;
  v8 = (uint *)(v7 + 20);
  *(ushort *)(v7 + 4) = *v5;
  v9 = 30;
  *(ushort *)(v7 + 6) = v5[1];
  *(ushort *)(v7 + 8) = v5[2];
  *(ushort *)(v7 + 10) = v5[3];
  *(uchar *)(v7 + 13) = *(uchar *)v6;
  *(uchar *)(v7 + 14) = *((uchar *)v6 + 1);
  do
  {
    v10 = *v6;
    v11 = v6[1];
    v6 += 2;
    *v8 = v10;
    v8[1] = v11;
    v8 += 2;
    --v9;
  }
  while ( v9 );
  *v8 = *v6;
  return AddTaskToTaskList1((int)Function_224519c, v7, 0x7530u);
}

//----- (0224519C) --------------------------------------------------------
int __fastcall Function_224519c(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  uint v5;
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

  v2 = a2;
  v3 = a1;
  v4 = *(uchar *)(a2 + 13);
  v5 = *(uchar *)(a2 + 12);
  v6 = 44 * v4;
  v7 = v2 + 36 + v6;
  if ( v5 <= 0x19 )
    JUMPOUT(__CS__, (char *)&off_22451C6 + *((short *)&off_22451C6 + v5) + 2);
  switch ( (uchar)v6 )
  {
    case 0:
      *(ushort *)(v2 + 266) = *(char *)(v2 + *(uchar *)(v7 + 3) + 228);
      result = *(uchar *)(v2 + 12) + 1;
      *(uchar *)(v2 + 12) = result;
      return result;
    case 1:
      v9 = *(uchar *)(v7 + 3);
      v10 = *(char *)(v2 + v9 + 231);
      if ( v10 <= *(char *)(v2 + v9 + 228) )
      {
        result = 3;
        *(uchar *)(v2 + 12) = 3;
      }
      else
      {
        if ( v10 < 50 )
          v11 = 2;
        else
          v11 = 3;
        Function_2241a8c(*(uint *)v2 + 12, v9, v11);
        Function_2241b3c(*(uint *)v2, *(uchar *)(v7 + 3), v11, (uchar *)(v2 + 270));
        result = *(uchar *)(v2 + 12) + 1;
        *(uchar *)(v2 + 12) = result;
      }
      return result;
    case 2:
      result = *(uchar *)(v2 + 270);
      if ( result == 1 )
      {
        result = v5 + 1;
        *(uchar *)(v2 + 12) = v5 + 1;
      }
      return result;
    case 3:
      *(uchar *)(v2 + 12) = v5 + 1;
      goto LABEL_14;
    case 4:
LABEL_14:
      if ( *(uchar *)(v2 + 248) )
      {
        Function_2242e5c(*(uint *)v2, *(uchar *)(v2 + 248), (uchar *)(v2 + 236), 0);
        result = *(uchar *)(v2 + 12) + 1;
        *(uchar *)(v2 + 12) = result;
      }
      else
      {
        result = 6;
        *(uchar *)(v2 + 12) = 6;
      }
      return result;
    case 5:
      result = Function_2242ecc(*(uint *)v2);
      if ( !result )
      {
        result = *(uchar *)(v2 + 12) + 1;
        *(uchar *)(v2 + 12) = result;
      }
      return result;
    case 6:
      *(uchar *)(v2 + 12) = v5 + 1;
      goto LABEL_21;
    case 7:
LABEL_21:
      v12 = v2 + *(uchar *)(v7 + 3);
      v13 = *(char *)(v12 + 231);
      if ( v13 <= *(char *)(v12 + 228) )
        *(uchar *)(v2 + 17) = 1;
      else
        Function_22431a0(*(uint *)v2, v13, 0, 70, 1, (uchar *)(v2 + 17));
      result = *(uchar *)(v2 + 12) + 1;
      *(uchar *)(v2 + 12) = result;
      return result;
    case 8:
      result = (char)++*(uchar *)(v2 + 15);
      if ( result > 8 )
      {
        *(uchar *)(v2 + 15) = 0;
        result = *(uchar *)(v2 + 12) + 1;
        *(uchar *)(v2 + 12) = result;
      }
      return result;
    case 9:
      *(uchar *)(v2 + 12) = v5 + 1;
      goto LABEL_29;
    case 0xA:
LABEL_29:
      ++*(uchar *)(v2 + 12);
      goto LABEL_30;
    case 0xB:
LABEL_30:
      v14 = v2 + *(uchar *)(v7 + 3);
      v15 = *(char *)(v14 + 231);
      if ( *(short *)(v2 + 266) == v15 )
      {
        result = 14;
        *(uchar *)(v2 + 12) = 14;
      }
      else
      {
        if ( v15 - *(char *)(v14 + 228) <= 0 )
        {
          *(ushort *)(v2 + 266) -= 10;
          Function_22424d4(*(uint *)v2 + 12, *(uchar *)(v7 + 3), *(short *)(v2 + 266));
          Function_2005748(0x6DFu);
        }
        else
        {
          *(ushort *)(v2 + 266) += 10;
          Function_22424d4(*(uint *)v2 + 12, *(uchar *)(v7 + 3), *(short *)(v2 + 266));
        }
        result = *(uchar *)(v2 + 12) + 1;
        *(uchar *)(v2 + 12) = result;
      }
      return result;
    case 0xC:
      result = Function_22424a8(*(uint *)v2 + 12, *(uchar *)(v7 + 3));
      if ( result == 1 )
      {
        result = *(uchar *)(v2 + 12) + 1;
        *(uchar *)(v2 + 12) = result;
      }
      return result;
    case 0xD:
      result = (char)++*(uchar *)(v2 + 15);
      if ( result > 2 )
      {
        *(uchar *)(v2 + 15) = 0;
        result = 11;
        *(uchar *)(v2 + 12) = 11;
      }
      return result;
    case 0xE:
      if ( *(short *)(v2 + 266) >= 50 )
        *(uint *)(v2 + 272) = Function_224365c(*(uint *)v2, *(uchar *)(v7 + 3));
      result = *(uchar *)(v2 + 12) + 1;
      *(uchar *)(v2 + 12) = result;
      return result;
    case 0xF:
      if ( *(uchar *)(v2 + 249) )
      {
        Function_2242e5c(*(uint *)v2, *(uchar *)(v2 + 249), (uchar *)(v2 + 242), 0);
        result = *(uchar *)(v2 + 12) + 1;
        *(uchar *)(v2 + 12) = result;
      }
      else
      {
        result = 17;
        *(uchar *)(v2 + 12) = 17;
      }
      return result;
    case 0x10:
      result = Function_2242ecc(*(uint *)v2);
      if ( !result )
      {
        result = *(uchar *)(v2 + 12) + 1;
        *(uchar *)(v2 + 12) = result;
      }
      return result;
    case 0x11:
      *(uchar *)(v2 + 12) = v5 + 1;
      goto LABEL_51;
    case 0x12:
LABEL_51:
      if ( *(short *)(v2 + 266) < 50 )
      {
        result = 20;
        *(uchar *)(v2 + 12) = 20;
      }
      else
      {
        Function_22436d0(
          *(uint *)v2,
          *(uchar *)(v2 + 13),
          *(uchar *)(v2 + 14),
          *(uchar *)(v7 + 3),
          (uchar *)(v2 + 18));
        result = *(uchar *)(v2 + 12) + 1;
        *(uchar *)(v2 + 12) = result;
      }
      return result;
    case 0x13:
      result = *(uchar *)(v2 + 18);
      if ( !*(uchar *)(v2 + 18) )
      {
        result = v5 + 1;
        *(uchar *)(v2 + 12) = v5 + 1;
      }
      return result;
    case 0x14:
      *(uchar *)(v2 + 12) = v5 + 1;
      goto LABEL_58;
    case 0x15:
LABEL_58:
      *(ushort *)(v2 + 264) = *(ushort *)(v7 + 26);
      result = *(uchar *)(v2 + 12) + 1;
      *(uchar *)(v2 + 12) = result;
      break;
    case 0x16:
      if ( *(short *)(v2 + 264) >= *(short *)(v7 + 24) )
      {
        Function_2241b1c(*(uint *)v2 + 12);
        result = 24;
        *(uchar *)(v2 + 12) = 24;
      }
      else
      {
        *(ushort *)(v2 + 264) += 10;
        Function_2241f34(
          *(uint *)v2 + 12,
          *(uchar *)(v2 + 13),
          *(uchar *)(v2 + 14),
          *(short *)(v2 + 264));
        result = *(uchar *)(v2 + 12) + 1;
        *(uchar *)(v2 + 12) = result;
      }
      break;
    case 0x17:
      result = (char)++*(uchar *)(v2 + 15);
      if ( result > 2 )
      {
        *(uchar *)(v2 + 15) = 0;
        result = *(uchar *)(v2 + 12) - 1;
        *(uchar *)(v2 + 12) = result;
      }
      break;
    case 0x18:
      if ( *(short *)(v2 + 266) >= 50 )
      {
        Function_2243690(*(uint *)(v2 + 272));
        Function_22424d4(*(uint *)v2 + 12, *(uchar *)(v7 + 3), 0);
      }
      result = *(uchar *)(v2 + 12) + 1;
      *(uchar *)(v2 + 12) = result;
      break;
    default:
      result = *(uchar *)(v2 + 17);
      if ( result == 1 )
      {
        Function_224f26c(*(uint *)v2 + 3120, v2 + 4);
        free(v2);
        result = Call_RemoveTaskFromTaskList(v3);
      }
      break;
  }
  return result;
}

//----- (02245510) --------------------------------------------------------
int __fastcall Function_2245510(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a2 + 3120, 255, a3);
}

//----- (02245528) --------------------------------------------------------
uint *__fastcall Function_2245528(int a1, int a2, ushort *a3, int *a4)
{
  int v4;
  ushort *v5;
  int *v6;
  int v7;
  uint *v8;
  int v9;
  int v10;
  int v11;

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = malloc(0x15u, 276);
  MI_CpuFill8((ushort *)v7, 0, 0x114u);
  *(uint *)v7 = v4;
  v8 = (uint *)(v7 + 20);
  *(ushort *)(v7 + 4) = *v5;
  v9 = 30;
  *(ushort *)(v7 + 6) = v5[1];
  *(ushort *)(v7 + 8) = v5[2];
  *(ushort *)(v7 + 10) = v5[3];
  *(uchar *)(v7 + 13) = *(uchar *)v6;
  *(uchar *)(v7 + 14) = *((uchar *)v6 + 1);
  do
  {
    v10 = *v6;
    v11 = v6[1];
    v6 += 2;
    *v8 = v10;
    v8[1] = v11;
    v8 += 2;
    --v9;
  }
  while ( v9 );
  *v8 = *v6;
  return AddTaskToTaskList1((int)Function_2245588, v7, 0x7530u);
}

//----- (02245588) --------------------------------------------------------
int __fastcall Function_2245588(int *a1, int a2)
{
  int v2;
  int v3;
  int *v4;
  int v5;
  char v6;
  int result;
  int v8;

  v2 = a2;
  v3 = *(uchar *)(a2 + 13);
  v4 = a1;
  v5 = v2 + 36 + 44 * v3;
  v6 = *(uchar *)(v2 + 12);
  switch ( (uchar)v3 )
  {
    case 0:
      *(ushort *)(v2 + 264) = *(ushort *)(v5 + 26);
      result = *(uchar *)(v2 + 12) + 1;
      *(uchar *)(v2 + 12) = result;
      return result;
    case 1:
      if ( *(uchar *)(v5 + 18) )
      {
        Function_2242e9c(
          *(uint *)v2,
          *(uchar *)(v5 + 18),
          *(uchar *)(v5 + 19),
          (uchar *)(v5 + 12),
          0);
        result = *(uchar *)(v2 + 12) + 1;
        *(uchar *)(v2 + 12) = result;
      }
      else
      {
        result = 3;
        *(uchar *)(v2 + 12) = 3;
      }
      return result;
    case 2:
      result = Function_2242ecc(*(uint *)v2);
      if ( !result )
      {
        result = *(uchar *)(v2 + 12) + 1;
        *(uchar *)(v2 + 12) = result;
      }
      return result;
    case 3:
      *(uchar *)(v2 + 12) = v6 + 1;
      goto LABEL_10;
    case 4:
LABEL_10:
      ++*(uchar *)(v2 + 12);
      goto LABEL_11;
    case 5:
LABEL_11:
      v8 = *(short *)(v2 + 264);
      if ( v8 >= *(short *)(v5 + 24) )
      {
        *(uchar *)(v2 + 12) = 7;
      }
      else
      {
        *(ushort *)(v2 + 264) = v8 + 10;
        Function_2241f34(
          *(uint *)v2 + 12,
          *(uchar *)(v2 + 13),
          *(uchar *)(v2 + 14),
          *(short *)(v2 + 264));
      }
      result = *(uchar *)(v2 + 12) + 1;
      *(uchar *)(v2 + 12) = result;
      return result;
    case 6:
      result = (char)++*(uchar *)(v2 + 15);
      if ( result > 2 )
      {
        *(uchar *)(v2 + 15) = 0;
        result = *(uchar *)(v2 + 12) - 1;
        *(uchar *)(v2 + 12) = result;
      }
      return result;
    case 7:
      *(uchar *)(v2 + 12) = v6 + 1;
      break;
    default:
      break;
  }
  Function_224f26c(*(uint *)v2 + 3120, v2 + 4);
  free(v2);
  return Call_RemoveTaskFromTaskList(v4);
}

//----- (02245678) --------------------------------------------------------
int __fastcall Function_2245678(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a2 + 3120, 255, a3);
}

//----- (02245690) --------------------------------------------------------
uint *__fastcall Function_2245690(int a1, int a2, ushort *a3, int *a4)
{
  int v4;
  ushort *v5;
  int *v6;
  ushort *v7;
  int *v8;
  int v9;
  int v10;
  int v11;

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = (ushort *)malloc(0x15u, 268);
  MI_CpuFill8(v7, 0, 0x10Cu);
  *(uint *)v7 = v4;
  v8 = (int *)(v7 + 8);
  v7[2] = *v5;
  v9 = 30;
  v7[3] = v5[1];
  v7[4] = v5[2];
  v7[5] = v5[3];
  do
  {
    v10 = *v6;
    v11 = v6[1];
    v6 += 2;
    *v8 = v10;
    v8[1] = v11;
    v8 += 2;
    --v9;
  }
  while ( v9 );
  *v8 = *v6;
  return AddTaskToTaskList1((int)Function_22456e8, (int)v7, 0x7530u);
}

//----- (022456E8) --------------------------------------------------------
int __fastcall Function_22456e8(int *a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int result;
  int v9;
  int v10;
  int v11;
  uint v12;
  int *v13;

  v13 = a1;
  v3 = a2;
  v4 = 0;
  v5 = *(uchar *)(a2 + *(uchar *)(a2 + 262) + 249);
  if ( v5 == 4 )
  {
    v6 = 0;
  }
  else
  {
    v6 = v3 + 32 + 44 * v5;
    v7 = *(uint *)v3;
    a3 = 0;
    while ( v5 != *(uchar *)(v7 + 561) )
    {
      ++a3;
      ++v7;
      if ( a3 >= 4 )
        goto LABEL_8;
    }
    v4 = a3;
  }
LABEL_8:
  result = *(uchar *)(v3 + 12);
  if ( (uint)result <= 0x11 )
    JUMPOUT(__CS__, (char *)&off_224573A + *((short *)&off_224573A + result) + 2);
  switch ( (uchar)a3 )
  {
    case 0:
      *(ushort *)(v3 + 260) = *(ushort *)(v6 + 26);
      ++*(uchar *)(v3 + 12);
      goto LABEL_12;
    case 1:
LABEL_12:
      v9 = *(uchar *)(v6 + 9);
      if ( *(uchar *)(v6 + 9) )
      {
        if ( v9 == 1 )
        {
          v10 = 5;
          Function_2005748(0x6EFu);
        }
        else
        {
          if ( v9 != 2 )
          {
            *(uchar *)(v3 + 12) = 3;
            return Function_2005748(0x6DFu);
          }
          v10 = 6;
          Function_2005748(0x6EEu);
        }
      }
      else
      {
        v10 = 4;
        Function_2005748(0x6F0u);
      }
      Function_2241b3c(*(uint *)v3, *(uchar *)(v6 + 3), v10, (uchar *)(v3 + 263));
      result = *(uchar *)(v3 + 12) + 1;
      *(uchar *)(v3 + 12) = result;
      return result;
    case 2:
      if ( *(uchar *)(v3 + 263) == 1 )
        *(uchar *)(v3 + 12) = ++result;
      return result;
    case 3:
      *(uchar *)(v3 + 12) = result + 1;
      goto LABEL_23;
    case 4:
LABEL_23:
      if ( *(uchar *)(v6 + 18) )
      {
        Function_2242e9c(
          *(uint *)v3,
          *(uchar *)(v6 + 18),
          *(uchar *)(v6 + 19),
          (uchar *)(v6 + 12),
          0);
        result = *(uchar *)(v3 + 12) + 1;
        *(uchar *)(v3 + 12) = result;
      }
      else
      {
        result = 6;
        *(uchar *)(v3 + 12) = 6;
      }
      return result;
    case 5:
      result = Function_2242ecc(*(uint *)v3);
      if ( !result )
      {
        result = *(uchar *)(v3 + 12) + 1;
        *(uchar *)(v3 + 12) = result;
      }
      return result;
    case 6:
      *(uchar *)(v3 + 12) = result + 1;
      goto LABEL_31;
    case 7:
LABEL_31:
      if ( *(uchar *)(v3 + 244) )
      {
        Function_2242e5c(
          *(uint *)v3,
          *(uchar *)(v3 + 244),
          (uchar *)(v3 + 232),
          (uchar *)(v3 + 248));
        result = *(uchar *)(v3 + 12) + 1;
        *(uchar *)(v3 + 12) = result;
      }
      else
      {
        result = 9;
        *(uchar *)(v3 + 12) = 9;
      }
      return result;
    case 8:
      result = Function_2242ecc(*(uint *)v3);
      if ( !result )
      {
        result = *(uchar *)(v3 + 12) + 1;
        *(uchar *)(v3 + 12) = result;
      }
      return result;
    case 9:
      *(uchar *)(v3 + 12) = result + 1;
      goto LABEL_38;
    case 0xA:
LABEL_38:
      if ( *(uchar *)(v3 + 245) )
      {
        Function_2242e5c(*(uint *)v3, *(uchar *)(v3 + 245), (uchar *)(v3 + 238), 0);
        result = *(uchar *)(v3 + 12) + 1;
        *(uchar *)(v3 + 12) = result;
      }
      else
      {
        result = 12;
        *(uchar *)(v3 + 12) = 12;
      }
      return result;
    case 0xB:
      result = Function_2242ecc(*(uint *)v3);
      if ( !result )
      {
        result = *(uchar *)(v3 + 12) + 1;
        *(uchar *)(v3 + 12) = result;
      }
      return result;
    case 0xC:
      *(uchar *)(v3 + 12) = result + 1;
      goto LABEL_45;
    case 0xD:
LABEL_45:
      *(ushort *)(v3 + 260) = *(ushort *)(v6 + 26);
      result = *(uchar *)(v3 + 12) + 1;
      *(uchar *)(v3 + 12) = result;
      return result;
    case 0xE:
      v11 = *(short *)(v3 + 260);
      if ( v11 >= *(short *)(v6 + 24) )
      {
        result = 16;
        *(uchar *)(v3 + 12) = 16;
      }
      else
      {
        *(ushort *)(v3 + 260) = v11 + 10;
        Function_2241f34(*(uint *)v3 + 12, v5, v4, *(short *)(v3 + 260));
        result = *(uchar *)(v3 + 12) + 1;
        *(uchar *)(v3 + 12) = result;
      }
      return result;
    case 0xF:
      result = (char)++*(uchar *)(v3 + 13);
      if ( result > 2 )
      {
        *(uchar *)(v3 + 13) = 0;
        result = *(uchar *)(v3 + 12) - 1;
        *(uchar *)(v3 + 12) = result;
      }
      return result;
    case 0x10:
      v12 = (uchar)++*(uchar *)(v3 + 262);
      if ( v12 >= 4 || *(uchar *)(v3 + v12 + 249) == 4 )
      {
        result = *(uchar *)(v3 + 12) + 1;
        *(uchar *)(v3 + 12) = result;
      }
      else
      {
        result = 13;
        *(uchar *)(v3 + 12) = 13;
      }
      return result;
    default:
      Function_224f26c(*(uint *)v3 + 3120, v3 + 4);
      free(v3);
      return Call_RemoveTaskFromTaskList(v13);
  }
}

//----- (0224595C) --------------------------------------------------------
int __fastcall Function_224595c(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a2 + 3120, 255, a3);
}

//----- (02245974) --------------------------------------------------------
uint *__fastcall Function_2245974(int a1, int a2, ushort *a3, int *a4)
{
  int v4;
  ushort *v5;
  int *v6;
  int v7;
  uint *v8;
  int v9;
  int v10;
  int v11;

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = malloc(0x15u, 276);
  MI_CpuFill8((ushort *)v7, 0, 0x114u);
  *(uint *)v7 = v4;
  v8 = (uint *)(v7 + 20);
  *(ushort *)(v7 + 4) = *v5;
  v9 = 30;
  *(ushort *)(v7 + 6) = v5[1];
  *(ushort *)(v7 + 8) = v5[2];
  *(ushort *)(v7 + 10) = v5[3];
  *(uchar *)(v7 + 13) = *(uchar *)v6;
  *(uchar *)(v7 + 14) = *((uchar *)v6 + 1);
  do
  {
    v10 = *v6;
    v11 = v6[1];
    v6 += 2;
    *v8 = v10;
    v8[1] = v11;
    v8 += 2;
    --v9;
  }
  while ( v9 );
  *v8 = *v6;
  return AddTaskToTaskList1((int)Function_22459d4, v7, 0x7530u);
}

//----- (022459D4) --------------------------------------------------------
int __fastcall Function_22459d4(int *a1, int a2)
{
  int v2;
  int v3;
  int *v4;
  int v5;
  uint v6;
  int result;
  int v8;

  v2 = a2;
  v3 = *(uchar *)(a2 + 13);
  v4 = a1;
  v5 = v2 + 36 + 44 * v3;
  v6 = *(uchar *)(v2 + 12);
  if ( v6 <= 0xE )
    JUMPOUT(__CS__, (char *)&off_22459FA + *((short *)&off_22459FA + v6) + 2);
  switch ( (uchar)v3 )
  {
    case 0:
      *(ushort *)(v2 + 264) = *(ushort *)(v5 + 26);
      result = *(uchar *)(v2 + 12) + 1;
      *(uchar *)(v2 + 12) = result;
      return result;
    case 1:
      if ( *(uchar *)(v5 + 18) )
      {
        Function_2242e9c(
          *(uint *)v2,
          *(uchar *)(v5 + 18),
          *(uchar *)(v5 + 19),
          (uchar *)(v5 + 12),
          0);
        result = *(uchar *)(v2 + 12) + 1;
        *(uchar *)(v2 + 12) = result;
      }
      else
      {
        result = 3;
        *(uchar *)(v2 + 12) = 3;
      }
      return result;
    case 2:
      result = Function_2242ecc(*(uint *)v2);
      if ( !result )
      {
        result = *(uchar *)(v2 + 12) + 1;
        *(uchar *)(v2 + 12) = result;
      }
      return result;
    case 3:
      *(uchar *)(v2 + 12) = v6 + 1;
      goto LABEL_12;
    case 4:
LABEL_12:
      if ( *(uchar *)(v2 + 248) )
      {
        Function_2242e5c(*(uint *)v2, *(uchar *)(v2 + 248), (uchar *)(v2 + 236), 0);
        result = *(uchar *)(v2 + 12) + 1;
        *(uchar *)(v2 + 12) = result;
      }
      else
      {
        result = 6;
        *(uchar *)(v2 + 12) = 6;
      }
      return result;
    case 5:
      result = Function_2242ecc(*(uint *)v2);
      if ( !result )
      {
        result = *(uchar *)(v2 + 12) + 1;
        *(uchar *)(v2 + 12) = result;
      }
      return result;
    case 6:
      *(uchar *)(v2 + 12) = v6 + 1;
      goto LABEL_19;
    case 7:
LABEL_19:
      if ( *(uchar *)(v2 + 249) )
      {
        Function_2242e5c(*(uint *)v2, *(uchar *)(v2 + 249), (uchar *)(v2 + 242), 0);
        result = *(uchar *)(v2 + 12) + 1;
        *(uchar *)(v2 + 12) = result;
      }
      else
      {
        result = 9;
        *(uchar *)(v2 + 12) = 9;
      }
      return result;
    case 8:
      result = Function_2242ecc(*(uint *)v2);
      if ( !result )
      {
        result = *(uchar *)(v2 + 12) + 1;
        *(uchar *)(v2 + 12) = result;
      }
      return result;
    case 9:
      *(uchar *)(v2 + 12) = v6 + 1;
      goto LABEL_26;
    case 0xA:
LABEL_26:
      ++*(uchar *)(v2 + 12);
      goto LABEL_27;
    case 0xB:
LABEL_27:
      v8 = *(short *)(v2 + 264);
      if ( v8 >= *(short *)(v5 + 24) )
      {
        *(uchar *)(v2 + 12) = 13;
      }
      else
      {
        *(ushort *)(v2 + 264) = v8 + 10;
        Function_2241f34(
          *(uint *)v2 + 12,
          *(uchar *)(v2 + 13),
          *(uchar *)(v2 + 14),
          *(short *)(v2 + 264));
      }
      result = *(uchar *)(v2 + 12) + 1;
      *(uchar *)(v2 + 12) = result;
      return result;
    case 0xC:
      result = (char)++*(uchar *)(v2 + 15);
      if ( result > 2 )
      {
        *(uchar *)(v2 + 15) = 0;
        result = *(uchar *)(v2 + 12) - 1;
        *(uchar *)(v2 + 12) = result;
      }
      return result;
    case 0xD:
      *(uchar *)(v2 + 12) = v6 + 1;
      break;
    default:
      break;
  }
  Function_224f26c(*(uint *)v2 + 3120, v2 + 4);
  free(v2);
  return Call_RemoveTaskFromTaskList(v4);
}

//----- (02245B48) --------------------------------------------------------
int __fastcall Function_2245b48(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a2 + 3120, 255, a3);
}

//----- (02245B60) --------------------------------------------------------
uint *__fastcall Function_2245b60(int a1, int a2, ushort *a3, int *a4)
{
  int v4;
  ushort *v5;
  int *v6;
  int v7;
  uint *v8;
  int v9;
  int v10;
  int v11;

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = malloc(0x15u, 276);
  MI_CpuFill8((ushort *)v7, 0, 0x114u);
  *(uint *)v7 = v4;
  v8 = (uint *)(v7 + 20);
  *(ushort *)(v7 + 4) = *v5;
  v9 = 30;
  *(ushort *)(v7 + 6) = v5[1];
  *(ushort *)(v7 + 8) = v5[2];
  *(ushort *)(v7 + 10) = v5[3];
  *(uchar *)(v7 + 13) = *(uchar *)(*(uint *)(v4 + 12) + 291);
  *(uchar *)(v7 + 14) = *((uchar *)v6 + 1);
  do
  {
    v10 = *v6;
    v11 = v6[1];
    v6 += 2;
    *v8 = v10;
    v8[1] = v11;
    v8 += 2;
    --v9;
  }
  while ( v9 );
  *v8 = *v6;
  return AddTaskToTaskList1((int)Function_2245bc8, v7, 0x7530u);
}

//----- (02245BC8) --------------------------------------------------------
int __fastcall Function_2245bc8(int *a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int result;
  char v11;
  int v12;

  v12 = a4;
  v4 = a2;
  v5 = a1;
  v6 = *(uchar *)(a2 + 13);
  v7 = a2 + 36 + 44 * v6;
  v8 = *(uchar *)(a2 + 12);
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      result = Function_2242ecc(*(uint *)v4);
      if ( !result )
      {
        result = *(uchar *)(v4 + 12) + 1;
        *(uchar *)(v4 + 12) = result;
      }
    }
    else if ( v8 == 2 )
    {
      result = 3;
      *(uchar *)(v4 + 12) = 3;
    }
    else
    {
      Function_224f26c(*(uint *)v4 + 3120, v4 + 4);
      free(v4);
      result = Call_RemoveTaskFromTaskList(v5);
    }
  }
  else
  {
    v9 = Function_224314c(v6, *(short *)(v7 + 24), &v11);
    Function_2242e5c(*(uint *)v4, v9, (uchar *)&v11, 0);
    result = *(uchar *)(v4 + 12) + 1;
    *(uchar *)(v4 + 12) = result;
  }
  return result;
}

//----- (02245C4C) --------------------------------------------------------
int __fastcall Function_2245c4c(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a1, 255, a3);
}

//----- (02245C60) --------------------------------------------------------
uint *__fastcall Function_2245c60(int a1, int a2, ushort *a3)
{
  int v3;
  int v4;
  ushort *v5;
  int v6;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = malloc(0x15u, 40);
  MI_CpuFill8((ushort *)v6, 0, 0x28u);
  *(uint *)v6 = v4;
  *(ushort *)(v6 + 4) = *v5;
  *(ushort *)(v6 + 6) = v5[1];
  *(ushort *)(v6 + 8) = v5[2];
  *(ushort *)(v6 + 10) = v5[3];
  *(uint *)(v6 + 12) = v3;
  return AddTaskToTaskList1((int)Function_2245ca4, v6, 0x7530u);
}

//----- (02245CA4) --------------------------------------------------------
int __fastcall Function_2245ca4(int *a1, int a2)
{
  int v2;
  int *v3;
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v2 = a2;
  v3 = a1;
  switch ( *(uchar *)(a2 + 32) )
  {
    case 0:
      Function_22431a0(*(uint *)a2, 0, 0, 70, 0, (uchar *)(a2 + 39));
      result = *(uchar *)(v2 + 32) + 1;
      *(uchar *)(v2 + 32) = result;
      break;
    case 1:
      v5 = 0;
      v6 = a2;
      v7 = a2 + 35;
      do
      {
        v8 = Function_224145c(*(uint *)v2, *(uchar *)(*(uint *)v2 + v5 + 561));
        *(uint *)(v6 + 16) = v8;
        Function_224331c(*(uint *)v2, *(uchar *)(*(uint *)v2 + v5 + 561), v5, (uchar *)(v7 + v5), v8);
        ++v5;
        v6 += 4;
      }
      while ( v5 < 4 );
      result = *(uchar *)(v2 + 32) + 1;
      *(uchar *)(v2 + 32) = result;
      break;
    case 2:
      v9 = 0;
      v10 = 0;
      v11 = a2;
      do
      {
        result = *(uchar *)(v2 + v10 + 35);
        if ( !*(uchar *)(v2 + v10 + 35) )
        {
          result = Function_22414bc(*(uint *)(v11 + 16));
          if ( !result )
            ++v9;
        }
        ++v10;
        v11 += 4;
      }
      while ( v10 < 4 );
      if ( v9 == 4 )
      {
        v12 = 0;
        v13 = v2;
        do
        {
          Function_2241494(*(uint *)(v13 + 16));
          ++v12;
          v13 += 4;
        }
        while ( v12 < 4 );
        result = *(uchar *)(v2 + 32) + 1;
        *(uchar *)(v2 + 32) = result;
      }
      break;
    default:
      result = *(uchar *)(a2 + 39);
      if ( result == 1 )
      {
        Function_224f26c(*(uint *)(a2 + 12), a2 + 4);
        free(v2);
        result = Call_RemoveTaskFromTaskList(v3);
      }
      break;
  }
  return result;
}

//----- (02245DA4) --------------------------------------------------------
int __fastcall Function_2245da4(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a2 + 3120, 255, a3);
}

//----- (02245DBC) --------------------------------------------------------
int __fastcall Function_2245dbc(int a1, int a2, int a3, int *a4)
{
  int v4;
  int v5;
  uint *v6;
  int v7;
  int v8;
  int v9;

  v4 = a2;
  v5 = a3;
  v6 = (uint *)(a2 + 560);
  v7 = 31;
  do
  {
    v8 = *a4;
    v9 = a4[1];
    a4 += 2;
    *v6 = v8;
    v6[1] = v9;
    v6 += 2;
    --v7;
  }
  while ( v7 );
  Function_2241ef0(v4 + 12);
  Function_22430f8(v4 + 12);
  Function_2242fe8(v4);
  Function_2241428(v4);
  return Function_224f26c(v4 + 3120, v5);
}

//----- (02245E00) --------------------------------------------------------
int __fastcall Function_2245e00(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a1, 255, a3);
}

//----- (02245E14) --------------------------------------------------------
uint *__fastcall Function_2245e14(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = malloc(0x15u, 32);
  MI_CpuFill8((ushort *)v8, 0, 0x20u);
  *(uint *)v8 = v5;
  *(ushort *)(v8 + 4) = *v6;
  *(ushort *)(v8 + 6) = v6[1];
  *(ushort *)(v8 + 8) = v6[2];
  *(ushort *)(v8 + 10) = v6[3];
  *(uint *)(v8 + 12) = v4;
  *(uchar *)(v8 + 17) = *(uchar *)v7;
  *(ushort *)(v8 + 20) = *(ushort *)(v7 + 216);
  *(ushort *)(v8 + 22) = *(ushort *)(v7 + 218);
  *(ushort *)(v8 + 24) = *(ushort *)(v7 + 220);
  *(uchar *)(v8 + 26) = *(uchar *)(v7 + 228);
  *(uchar *)(v8 + 28) = *(uchar *)(v7 + 231);
  *(uchar *)(v8 + 27) = *(uchar *)(v7 + 230);
  return AddTaskToTaskList1((int)Function_2245e8c, v8, 0x7530u);
}

//----- (02245E8C) --------------------------------------------------------
uint __fastcall Function_2245e8c(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  uint v5;
  uint result;

  v2 = a2;
  v3 = a1;
  v4 = *(uchar *)(a2 + 16);
  if ( *(uchar *)(a2 + 16) )
  {
    if ( v4 == 1 )
    {
      result = Function_2242ecc(*(uint *)a2);
      if ( !result )
      {
        result = *(uchar *)(v2 + 16) + 1;
        *(uchar *)(v2 + 16) = result;
      }
    }
    else if ( v4 == 2 )
    {
      ++*(uchar *)(a2 + 18);
      if ( *(uchar *)(a2 + 28) == 1 )
      {
        result = *(uchar *)(a2 + 16) + 1;
        *(uchar *)(a2 + 16) = result;
      }
      else
      {
        result = *(uchar *)(a2 + 27);
        if ( *(uchar *)(a2 + 18) >= result )
        {
          result = *(uchar *)(a2 + 16) + 1;
          *(uchar *)(a2 + 16) = result;
        }
      }
    }
    else
    {
      Function_224f26c(*(uint *)(a2 + 12), a2 + 4);
      free(v2);
      result = Call_RemoveTaskFromTaskList(v3);
    }
  }
  else
  {
    v5 = *(uchar *)(a2 + 26);
    if ( *(uchar *)(v2 + 26) )
    {
      Function_2242e5c(*(uint *)v2, v5, (uchar *)(v2 + 20), 0);
      result = *(uchar *)(v2 + 16) + 1;
      *(uchar *)(v2 + 16) = result;
    }
    else
    {
      result = 100;
      *(uchar *)(v2 + 16) = 100;
    }
  }
  return result;
}

//----- (02245F14) --------------------------------------------------------
int __fastcall Function_2245f14(int result, char a2, char a3, int a4, int a5, int a6, int a7)
{
  *(uchar *)(result + 18) = a2;
  *(uchar *)(result + 19) = a3;
  if ( a4 != 30000 )
    *(uchar *)(result + 12) = a4;
  if ( a5 != 30000 )
    *(uchar *)(result + 13) = a5;
  if ( a6 != 30000 )
    *(ushort *)(result + 14) = a6;
  if ( a7 != 30000 )
    *(uchar *)(result + 16) = a7;
  return result;
}

//----- (02245F44) --------------------------------------------------------
int __fastcall Function_2245f44(int a1, uint *a2)
{
  int v2;
  uint *v3;
  int *v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = (int *)(a1 + 608);
  v5 = a2;
  v6 = 25;
  do
  {
    v7 = *v4;
    v8 = v4[1];
    v4 += 2;
    *v5 = v7;
    v5[1] = v8;
    v5 += 2;
    --v6;
  }
  while ( v6 );
  Function_2246540(v3);
  MI_CpuFill8(v3, 0, 0xB0u);
  v9 = 0;
  v10 = v2;
  do
  {
    Function_2243120(v2, (int)(v3 + 3), v9);
    *((uchar *)v3 + 3) = *(uchar *)(v2 + v9 + 574);
    v11 = *(ushort *)(v10 + 566);
    *(ushort *)v3 = v11;
    *((uchar *)v3 + 2) = LoadMoveData(v11, 0xAu);
    result = Function_2243ac4(v2 + 560, v9);
    *((uchar *)v3 + 9) = result;
    ++v9;
    v3 += 11;
    v10 += 2;
  }
  while ( v9 < 4 );
  return result;
}

//----- (02245FB4) --------------------------------------------------------
int __fastcall Function_2245fb4(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  uint v6;
  int result;
  char v8;
  uchar *v9;

  v2 = a2;
  v3 = a1;
  v4 = 0;
  v5 = v2;
  do
  {
    ++v4;
    v6 = (*(uint *)(v5 + 40) << 26 >> 30 << 8) & 0x3FF | *(uint *)(v5 + 40) & 0xFFFFFCFF;
    *(uint *)(v5 + 40) = v6 & 0xFFFFF3FF | (v6 << 24 >> 30 << 10) & 0xFFF;
    v5 += 44;
  }
  while ( v4 < 4 );
  result = 0;
  do
  {
    *(uchar *)(v2 + result + 192) = *(uchar *)(v3 + result + 594);
    v8 = *(uchar *)(v3 + result + 594);
    v9 = (uchar *)(v2 + result++ + 195);
    *v9 = v8;
  }
  while ( result < 3 );
  return result;
}

//----- (02246018) --------------------------------------------------------
int __fastcall Function_2246018(int result, int a2)
{
  int v2;

  v2 = 0;
  do
  {
    *(uchar *)(result + v2 + 594) = *(uchar *)(a2 + v2 + 195);
    if ( *(char *)(result + v2 + 594) >= 50 )
      *(uchar *)(result + v2 + 594) = 0;
    ++v2;
  }
  while ( v2 < 3 );
  return result;
}

//----- (02246044) --------------------------------------------------------
int __fastcall Function_2246044(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  uint *v5;
  int v6;
  short v7;
  uint *v8;
  int v9;
  int result;
  int v11;

  v2 = a2;
  v3 = a1;
  v4 = 0;
  v5 = v2;
  v6 = a1;
  do
  {
    ++v4;
    *(ushort *)(v6 + 578) += *((ushort *)v5 + 12);
    v7 = *((ushort *)v5 + 12);
    v5 += 11;
    *(ushort *)(v6 + 586) = v7;
    v6 += 2;
  }
  while ( v4 < 4 );
  v8 = (uint *)(v3 + 608);
  v9 = 25;
  do
  {
    result = *v2;
    v11 = v2[1];
    v2 += 2;
    *v8 = result;
    v8[1] = v11;
    v8 += 2;
    --v9;
  }
  while ( v9 );
  return result;
}

//----- (02246090) --------------------------------------------------------
int __fastcall Function_2246090(int result, int a2)
{
  ushort *v2;
  int v3;
  char v4;
  uchar *v5;
  int v6;

  v2 = (ushort *)(result + 44 * a2);
  v3 = 0;
  v2[13] = v2[12];
  v2[15] = 0;
  v2[16] = 0;
  do
  {
    v4 = *(uchar *)(result + v3 + 195);
    v5 = (uchar *)(result + v3++ + 192);
    *v5 = v4;
  }
  while ( v3 < 3 );
  v6 = 0;
  do
  {
    *(uchar *)(result + 20) = 0;
    *(uchar *)(result + 18) = 0;
    ++v6;
    result += 44;
  }
  while ( v6 < 4 );
  return result;
}

//----- (022460C8) --------------------------------------------------------
int __fastcall Function_22460c8(int result)
{
  int v1;

  v1 = 0;
  do
  {
    ++v1;
    *(ushort *)(result + 28) = *(ushort *)(result + 24);
    result += 44;
  }
  while ( v1 < 4 );
  return result;
}

//----- (022460DC) --------------------------------------------------------
int __fastcall Function_22460dc(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int result;
  char v6;
  int v7;

  v3 = a2;
  v4 = a3;
  Function_2246090(a2, a3);
  result = *(uchar *)(v3 + 2 + 44 * v4);
  if ( !BYTE1(dword_2253AFC[2 * result]) )
  {
    Function_2095790(result, 4u, &v7, &v6);
    result = 0xFFFF;
    if ( v7 != 0xFFFF )
      result = Function_2245f14(v3 + 44 * v4, *(uchar *)(v3 + 2 + 44 * v4), 4, v4, 30000, 30000, 30000);
  }
  return result;
}

//----- (02246138) --------------------------------------------------------
int __fastcall Function_2246138(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;

  v3 = a2;
  v4 = a3;
  Function_2246090(a2, a3);
  v5 = 44 * v4;
  *(uchar *)(v3 + 4 + v5) = Function_2095734(*(uchar *)(v3 + 44 * v4 + 2));
  result = v3 + 44 * v4;
  *(ushort *)(v3 + v5 + 24) = *(uchar *)(v3 + 4 + v5);
  return result;
}

//----- (02246160) --------------------------------------------------------
int __fastcall Function_2246160(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v4 = a2;
  v10 = a1;
  v11 = a3;
  v12 = a4;
  Function_2246090(a2, a3);
  v5 = 44 * v11;
  v6 = 2 * *(uchar *)(v4 + 44 * v11 + 2);
  if ( LOBYTE(dword_2253AFC[v6]) == 3 )
  {
    (*(void (__fastcall **)(int, int))((char *)&off_2253AF8 + v6 * 4))(v10, v4);
    *(uchar *)(v4 + v5 + 20) = 1;
    *(ushort *)(v4 + 24 + v5) += *(ushort *)(v4 + v5 + 30) + *(ushort *)(v4 + v5 + 32);
  }
  v13 = 0;
  result = v12;
  if ( v12 >= 0 )
  {
    do
    {
      v8 = *(uchar *)(v10 + v13 + 561);
      v9 = v4 + 44 * v8;
      if ( *((uchar *)&off_2253AF8 + 8 * *(uchar *)(v9 + 2) + 4) == 2 )
      {
        Function_2246090(v4, *(uchar *)(v10 + v13 + 561));
        ((void (__fastcall *)(int, int, int, int, int))*(&off_2253AF8 + 2 * *(uchar *)(v9 + 2)))(
          v10,
          v4,
          v11,
          v8,
          v12);
        *(uchar *)(v9 + 20) = 1;
        *(ushort *)(v9 + 24) += *(ushort *)(v9 + 30);
      }
      result = v13 + 1;
      v13 = result;
    }
    while ( result <= v12 );
  }
  return result;
}

//----- (02246228) --------------------------------------------------------
int __fastcall Function_2246228(int a1, int a2, int a3)
{
  int v3;
  int v4;
  uint v5;
  int v6;
  int result;

  v3 = a2;
  v4 = a3;
  Function_2246090(a2, a3);
  if ( *(uint *)(v3 + 176 + 4 * v4) << 8 >> 24 )
  {
    v5 = *(short *)(v3 + 44 * v4 + 24);
    *(ushort *)(v3 + 30 + 44 * v4) += v5;
    v6 = s32_div_f(v5, 10);
    Function_2245f14(v3 + 44 * v4, *(uint *)(v3 + 176 + 4 * v4) << 8 >> 24, 0, v4, 30000, 30000, v6);
  }
  result = *(short *)(v3 + 24 + 44 * v4)
         + *(short *)(v3 + 44 * v4 + 30)
         + *(short *)(v3 + 44 * v4 + 32);
  *(ushort *)(v3 + 24 + 44 * v4) = result;
  return result;
}

//----- (022462A4) --------------------------------------------------------
int __fastcall Function_22462a4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int result;
  int v9;
  int v10;

  v4 = a2;
  v5 = a3;
  v9 = a1;
  v10 = a4;
  Function_2246090(a2, a3);
  v6 = 44 * v5;
  v7 = 2 * *(uchar *)(v4 + 44 * v5 + 2);
  if ( LOBYTE(dword_2253AFC[v7]) != 4 )
    return 0;
  (*(void (__fastcall **)(int, int, int, int, int))((char *)&off_2253AF8 + v7 * 4))(v9, v4, v5, v5, v10);
  result = 1;
  *(uchar *)(v4 + v6 + 20) = 1;
  *(ushort *)(v4 + 24 + v6) += *(ushort *)(v4 + v6 + 30);
  return result;
}

//----- (02246304) --------------------------------------------------------
int __fastcall Function_2246304(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int result;
  int v9;
  int v10;

  v4 = a2;
  v5 = a3;
  v9 = a1;
  v10 = a4;
  Function_2246090(a2, a3);
  v6 = 44 * v5;
  v7 = 2 * *(uchar *)(v4 + 44 * v5 + 2);
  if ( LOBYTE(dword_2253AFC[v7]) != 5 )
    return 0;
  (*(void (__fastcall **)(int, int, int, int, int))((char *)&off_2253AF8 + v7 * 4))(v9, v4, v5, v5, v10);
  result = 1;
  *(uchar *)(v4 + v6 + 20) = 1;
  *(ushort *)(v4 + 24 + v6) += *(ushort *)(v4 + v6 + 30);
  return result;
}

//----- (02246364) --------------------------------------------------------
int __fastcall Function_2246364(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int result;
  int v9;
  int v10;

  v4 = a2;
  v5 = a3;
  v9 = a1;
  v10 = a4;
  Function_2246090(a2, a3);
  v6 = 44 * v5;
  v7 = 2 * *(uchar *)(v4 + 44 * v5 + 2);
  if ( LOBYTE(dword_2253AFC[v7]) != 6 )
    return 0;
  (*(void (__fastcall **)(int, int, int, int, int))((char *)&off_2253AF8 + v7 * 4))(v9, v4, v5, v5, v10);
  result = 1;
  *(uchar *)(v4 + v6 + 20) = 1;
  *(ushort *)(v4 + 24 + v6) += *(ushort *)(v4 + v6 + 30);
  return result;
}

//----- (022463C4) --------------------------------------------------------
int __fastcall Function_22463c4(int a1, int a2, int a3, uchar *a4)
{
  int v4;
  uchar *v5;
  int v6;
  int v7;
  int v8;
  uchar *v9;
  int v10;
  char *v11;
  int v12;
  int v13;
  int v14;
  int result;
  int v16;
  int v17;
  char *v18;
  ushort *v19;
  int v20;

  v4 = a2;
  v16 = a1;
  v17 = a3;
  v5 = a4;
  Function_2246090(a2, a3);
  v5[12] = 0;
  v5[13] = 0;
  v6 = *(uchar *)(v16 + v17 + 574);
  v19 = (ushort *)(v4 + 44 * v17);
  v20 = 44 * v17;
  v7 = *(uchar *)(*(uint *)v16 + 286);
  v8 = Function_2243af0(*(uchar *)(*(uint *)v16 + 287), *(ushort *)(v4 + 44 * v17));
  if ( v8 <= 0 || *((uint *)v19 + 10) & 2 )
  {
    if ( v8 >= 0 || *((uint *)v19 + 10) & 4 || (v9 = (uchar *)(v4 + 195 + v6), v10 = (char)*v9, v10 <= 0) )
    {
      v8 = 0;
    }
    else
    {
      *v9 = v10 + v8;
      if ( (char)*v9 <= 0 )
        *v9 = 0;
    }
  }
  else
  {
    *(uchar *)(v4 + 195 + v6) += v8;
    if ( *(char *)(v4 + 195 + v6) >= 50 )
      *(uchar *)(v4 + 195 + v6) = 50;
  }
  v18 = (char *)(v4 + 195 + v6);
  if ( *v18 >= 50 )
  {
    if ( v6 == *(uchar *)(*(uint *)v16 + 286) )
      *(uchar *)(v4 + v20 + 8) = 80;
    else
      *(uchar *)(v4 + v20 + 8) = 50;
  }
  v11 = (char *)(v4 + 8 + v20);
  v5[10] = s32_div_f(*v11, 10);
  if ( v8 <= 0 )
  {
    if ( v8 < 0 )
    {
      v13 = LoadMoveData(*v19, 0xBu);
      v5[12] = Function_224399c(v13);
    }
  }
  else
  {
    v12 = LoadMoveData(*v19, 0xBu);
    v5[12] = Function_2243970(v12);
    switch ( (uchar)s32_div_f(*v18, 10) )
    {
      case 4u:
        v5[13] = 25;
        break;
      case 5u:
        v5[13] = 26;
        break;
      default:
        break;
    }
  }
  v14 = v4 + 24;
  result = *(short *)(v14 + 44 * v17) + *v11;
  *(ushort *)(v14 + 44 * v17) = result;
  return result;
}

//----- (02246518) --------------------------------------------------------
int __fastcall Function_2246518(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;

  v3 = a2;
  v4 = a3;
  Function_2246090(a2, a3);
  v5 = Function_2243ae4(*(uchar *)(v3 + 44 * v4 + 9));
  v3 += 24;
  result = *(short *)(v3 + 44 * v4) + v5;
  *(ushort *)(v3 + 44 * v4) = result;
  return result;
}

//----- (02246540) --------------------------------------------------------
int __fastcall Function_2246540(int result)
{
  int v1;
  uint *v2;
  uint v3;
  uint v4;

  v1 = 0;
  v2 = (uint *)(result + 176);
  do
  {
    ++v1;
    v3 = *v2 & 0xFFFF0000;
    *v2 = v3;
    v4 = v3 & 0xFF00FFFF | (*(uint *)(result + 40) << 12 >> 24 << 16) & 0xFFFFFF;
    result += 44;
    *v2 = v4;
    ++v2;
  }
  while ( v1 < 4 );
  return result;
}

//----- (02246578) --------------------------------------------------------
int __fastcall Function_2246578(int a1, int a2, int a3, int a4)
{
  int v4;
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
  char *v15;
  int v16;
  int v17;
  int v18;
  int v20;
  char v21;

  v20 = a4;
  v4 = 4;
  v5 = a2;
  v6 = 0;
  v7 = &v21;
  do
  {
    v8 = *(uint *)(a2 + 40);
    if ( (uint)(v8 << 26) >> 30 )
    {
      if ( (uint)(v8 << 26) >> 30 == 1 && !((uint)(v8 << 24) >> 30) )
        v4 = v6;
      *v7 = *(uint *)(a2 + 40) << 24 >> 30;
    }
    else
    {
      *v7 = -1;
    }
    ++v6;
    a2 += 44;
    ++v7;
  }
  while ( v6 < 4 );
  *(&v21 + a4) = -1;
  v9 = 0;
  do
  {
    v10 = 0;
    v11 = &v21;
    v12 = v5;
    while ( 1 )
    {
      v13 = (uchar)*v11;
      if ( v13 != 255 && v9 == v13 && v13 == *(uint *)(v12 + 40) << 24 >> 30 )
        break;
      ++v10;
      ++v11;
      v12 += 44;
      if ( v10 >= 4 )
        goto LABEL_16;
    }
    ++*(&v21 + v10);
LABEL_16:
    if ( v10 == 4 )
      break;
    ++v9;
  }
  while ( v9 < 4 );
  v14 = 0;
  v15 = &v21;
  v16 = v5;
  do
  {
    v17 = (uchar)*v15;
    if ( v17 != 255 )
      *(uint *)(v16 + 40) = *(uint *)(v16 + 40) & 0xFFFFFF3F | (v17 << 6) & 0xFF;
    ++v14;
    ++v15;
    v16 += 44;
  }
  while ( v14 < 4 );
  v18 = v5 + 44 * v20;
  *(uint *)(v18 + 40) = (*(uint *)(v18 + 40) & 0xFFFFFFCF | 0x10) & 0xFFFFFF3F;
  if ( v4 == 4 )
    Function_2245f14(v18, *(uchar *)(v18 + 2), 0, v20, 30000, 30000, 30000);
  else
    Function_2245f14(v18, *(uchar *)(v18 + 2), 1, v20, v4, 30000, 30000);
  return 1;
}

//----- (02246668) --------------------------------------------------------
int __fastcall Function_2246668(int a1, int a2, int a3, int a4)
{
  int v4;
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
  char *v15;
  int v16;
  int v17;
  int v18;
  int v20;
  char v21;

  v20 = a4;
  v4 = 4;
  v5 = a2;
  v6 = 0;
  v7 = &v21;
  do
  {
    v8 = *(uint *)(a2 + 40);
    if ( (uint)(v8 << 26) >> 30 )
    {
      if ( (uint)(v8 << 26) >> 30 == 2 && (uint)(v8 << 24) >> 30 == 3 )
        v4 = v6;
      *v7 = *(uint *)(a2 + 40) << 24 >> 30;
    }
    else
    {
      *v7 = -1;
    }
    v6 = (char)(v6 + 1);
    a2 += 44;
    ++v7;
  }
  while ( v6 < 4 );
  *(&v21 + a4) = -1;
  v9 = 3;
  do
  {
    v10 = 0;
    v11 = &v21;
    v12 = v5;
    while ( 1 )
    {
      v13 = (uchar)*v11;
      if ( v13 != 255 && v9 == v13 && v13 == *(uint *)(v12 + 40) << 24 >> 30 )
        break;
      v10 = (char)(v10 + 1);
      ++v11;
      v12 += 44;
      if ( v10 >= 4 )
        goto LABEL_16;
    }
    --*(&v21 + v10);
LABEL_16:
    if ( v10 == 4 )
      break;
    v9 = (char)(v9 - 1);
  }
  while ( v9 > -1 );
  LOBYTE(v14) = 0;
  v15 = &v21;
  v16 = v5;
  do
  {
    v17 = (uchar)*v15;
    if ( v17 != 255 )
      *(uint *)(v16 + 40) = *(uint *)(v16 + 40) & 0xFFFFFF3F | (v17 << 6) & 0xFF;
    v14 = (char)(v14 + 1);
    ++v15;
    v16 += 44;
  }
  while ( v14 < 4 );
  v18 = v5 + 44 * v20;
  *(uint *)(v18 + 40) = (*(uint *)(v18 + 40) & 0xFFFFFFCF | 0x20) & 0xFFFFFF3F | 0xC0;
  if ( v4 == 4 )
    Function_2245f14(v18, *(uchar *)(v18 + 2), 0, v20, 30000, 30000, 30000);
  else
    Function_2245f14(v18, *(uchar *)(v18 + 2), 1, v20, v4, 30000, 30000);
  return 1;
}

//----- (02246774) --------------------------------------------------------
int __fastcall Function_2246774(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  char v7;

  v4 = a4;
  v5 = 44 * a4;
  *(ushort *)(a2 + 30 + v5) += 20 * *(uchar *)(a2 + 9 + v5);
  v6 = *(uchar *)(a2 + 9 + v5);
  if ( *(uchar *)(a2 + 9 + v5) )
  {
    if ( v6 == 1 )
    {
      v7 = 1;
    }
    else if ( v6 == 2 )
    {
      v7 = 2;
    }
    else
    {
      v7 = 3;
    }
  }
  else
  {
    v7 = 0;
  }
  Function_2245f14(a2 + v5, *(uchar *)(a2 + v5 + 2), v7, v4, 30000, 30000, 30000);
  return 1;
}

//----- (022467CC) --------------------------------------------------------
int __fastcall Function_22467cc(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;
  int v10;

  v10 = a4;
  v4 = 44 * a4;
  v5 = a2;
  v6 = (ushort *)(a2 + 44 * a4);
  v7 = *((uchar *)v6 + 3);
  v8 = *(uchar *)(*(uint *)a1 + 286);
  if ( Function_2243af0(*(uchar *)(*(uint *)a1 + 287), *v6) <= 0 || *((uint *)v6 + 10) & 2 )
    return 0;
  *(ushort *)(v5 + 30 + v4) += 20;
  Function_2245f14((int)v6, *((uchar *)v6 + 2), 0, v10, 30000, *(ushort *)(v5 + v4), 30000);
  return 1;
}

//----- (02246830) --------------------------------------------------------
int Function_2246830()
{
  return 1;
}

//----- (02246834) --------------------------------------------------------
int __fastcall Function_2246834(int a1, int a2, int a3, int a4)
{
  int v4;

  v4 = a2 + 44 * a4;
  if ( *(uchar *)(v4 + 9) )
  {
    Function_2245f14(v4, *(uchar *)(v4 + 2), 1, a4, 30000, 30000, 30000);
  }
  else
  {
    *(ushort *)(a2 + 30 + 44 * a4) += 30;
    Function_2245f14(v4, *(uchar *)(v4 + 2), 0, a4, 30000, 30000, 30000);
  }
  return 1;
}

//----- (0224687C) --------------------------------------------------------
int __fastcall Function_224687c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;

  v4 = a2;
  v5 = *(ushort *)(a2 + 44 * a4);
  if ( v5 == *(ushort *)(a1 + 2 * a4 + 598) )
    return 0;
  *(uint *)(v4 + 176 + 4 * a4) = *(uint *)(v4 + 176 + 4 * a4) & 0xFFFF0000 | (ushort)v5;
  Function_2245f14(v4 + 44 * a4, *(uchar *)(v4 + 44 * a4 + 2), 0, a4, 30000, 30000, 30000);
  return 1;
}

//----- (022468D4) --------------------------------------------------------
int __fastcall Function_22468d4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint v6;
  int v7;

  v4 = a2;
  v5 = 44 * a4;
  v6 = *(char *)(a2 + *(uchar *)(a2 + 44 * a4 + 3) + 192);
  *(ushort *)(a2 + 30 + 44 * a4) += v6;
  v7 = s32_div_f(v6, 10);
  Function_2245f14(v4 + v5, *(uchar *)(v4 + v5 + 2), 0, 30000, 30000, 30000, v7);
  return 1;
}

//----- (02246918) --------------------------------------------------------
int __fastcall Function_2246918(int a1, int a2, int a3, int a4)
{
  int v4;

  v4 = a2 + 44 * a4;
  if ( *(uchar *)(a2 + 44 * a4 + 9) == 3 )
  {
    *(ushort *)(a2 + 30 + 44 * a4) += 150;
    Function_2245f14(v4, *(uchar *)(v4 + 2), 0, a4, 30000, 30000, 30000);
  }
  else
  {
    Function_2245f14(v4, *(uchar *)(v4 + 2), 1, a4, 30000, 30000, 30000);
  }
  return 1;
}

//----- (02246960) --------------------------------------------------------
int __fastcall Function_2246960(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v8;
  int v9;

  v4 = a2;
  v5 = 44 * a4;
  v6 = a2 + 44 * a4;
  if ( *(uint *)(v6 + 40) << 29 >> 31 == 1 )
    return 0;
  v8 = 0;
  do
  {
    if ( *(uchar *)(v4 + v8 + 195) )
      break;
    ++v8;
  }
  while ( v8 < 3 );
  if ( v8 == 3 )
    return 0;
  *(uint *)(v6 + 40) |= 8u;
  v9 = 0;
  do
  {
    if ( *(char *)(v4 + v9 + 195) > 0 )
      *(uchar *)(v4 + v9 + 195) -= 10;
    ++v9;
  }
  while ( v9 < 3 );
  Function_2245f14(v6, *(uchar *)(v4 + v5 + 2), 0, 30000, 30000, 30000, 30000);
  return 1;
}

//----- (022469DC) --------------------------------------------------------
int __fastcall Function_22469dc(int a1, int a2, int a3, int a4)
{
  *(uint *)(a2 + 44 * a4 + 40) = (*(uchar *)(a2 + 44 * a4 + 2) << 12) & 0xFFFFF | *(uint *)(a2 + 44 * a4 + 40) & 0xFFF00FFF;
  return 1;
}

//----- (022469FC) --------------------------------------------------------
int __fastcall Function_22469fc(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int i;
  int v8;

  v5 = a2;
  v6 = a5;
  for ( i = a1; v6 < 4; *(uint *)(v5 + 44 * v8 + 40) |= 2u )
    v8 = *(uchar *)(i + v6++ + 561);
  Function_2245f14(v5 + 44 * a4, *(uchar *)(v5 + 44 * a4 + 2), 0, 30000, 30000, 30000, 30000);
  return 1;
}

//----- (02246A50) --------------------------------------------------------
int __fastcall Function_2246a50(int a1, int a2, int a3, int a4, int a5)
{
  int v6;

  if ( !a5 )
    return 0;
  v6 = *(uchar *)(a1 + a5 - 1 + 561);
  if ( !*(uchar *)(a2 + 44 * v6 + 8) )
    return 0;
  *(ushort *)(a2 + 30 + 44 * a4) += *(char *)(a2 + 44 * v6 + 8);
  Function_2245f14(a2 + 44 * a4, *(uchar *)(a2 + 44 * a4 + 2), 0, a4, v6, 30000, 30000);
  return 1;
}

//----- (02246AB0) --------------------------------------------------------
int __fastcall Function_2246ab0(int *a1, int a2, int a3, int a4)
{
  int *v4;
  char *v5;
  char *v6;
  int v7;
  int v8;
  uint v9;
  uchar v10;
  int v11;
  int v12;
  char *v13;
  int v14;
  int v15;
  char *v16;
  uint v17;
  int v18;
  int v20;
  int v21;
  char v22[4];
  char v23;

  v4 = a1;
  v20 = a2;
  v21 = a4;
  LOBYTE(a4) = 0;
  v5 = &v23;
  v6 = v22;
  do
  {
    *v5 = a4;
    *v6 = a4;
    a4 = (char)(a4 + 1);
    ++v5;
    ++v6;
  }
  while ( a4 < 4 );
  v7 = 0;
  do
  {
    v8 = *v4;
    v9 = Call_PRNG();
    s32_div_f(v9, 4 - v7);
    v11 = v10;
    v12 = 0;
    v13 = v22;
    while ( (uchar)*v13 == 255 )
    {
LABEL_9:
      v12 = (char)(v12 + 1);
      ++v13;
      if ( v12 >= 4 )
        goto LABEL_10;
    }
    if ( v11 )
    {
      v11 = (v11 - 1) & 0xFF;
      goto LABEL_9;
    }
    *(&v23 + v12) = v7;
    v22[v12] = -1;
LABEL_10:
    v7 = (char)(v7 + 1);
  }
  while ( v7 < 4 );
  v14 = v20;
  LOBYTE(v15) = 0;
  v16 = &v23;
  do
  {
    v17 = *(uint *)(v14 + 40) & 0xFFFFFFCF | 0x30;
    *(uint *)(v14 + 40) = v17;
    v18 = (uchar)*v16++;
    *(uint *)(v14 + 40) = v17 & 0xFFFFFF3F | (v18 << 6) & 0xFF;
    v15 = (char)(v15 + 1);
    v14 += 44;
  }
  while ( v15 < 4 );
  Function_2245f14(v20 + 44 * v21, *(uchar *)(v20 + 44 * v21 + 2), 0, 30000, 30000, 30000, 30000);
  return 1;
}

//----- (02246B74) --------------------------------------------------------
int __fastcall Function_2246b74(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;

  v5 = a2;
  if ( a5 != 3 )
    return 0;
  v6 = 44 * a4;
  *(ushort *)(a2 + 30 + 44 * a4) += *(ushort *)(a2 + 24 + 44 * a4);
  v7 = s32_div_f(*(short *)(a2 + 24 + 44 * a4), 10);
  Function_2245f14(v5 + v6, *(uchar *)(v5 + v6 + 2), 0, 30000, 30000, 30000, v7);
  return 1;
}

//----- (02246BC0) --------------------------------------------------------
int __fastcall Function_2246bc0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint v6;
  int v7;

  v4 = a2;
  v5 = 44 * a4;
  v6 = *((uchar *)dword_2253AF0 + s32_div_f(*(char *)(a2 + *(uchar *)(a2 + 44 * a4 + 3) + 192), 10));
  *(ushort *)(v4 + 30 + v5) += v6;
  v7 = s32_div_f(v6, 10);
  Function_2245f14(v4 + v5, *(uchar *)(v4 + v5 + 2), 0, 30000, 30000, 30000, v7);
  return 1;
}

//----- (02246C10) --------------------------------------------------------
int __fastcall Function_2246c10(int a1, int a2, int a3, int a4, int a5)
{
  int v5;

  if ( a5 )
    return 0;
  v5 = 44 * a4;
  *(ushort *)(a2 + 30 + v5) += 20;
  Function_2245f14(a2 + v5, *(uchar *)(a2 + v5 + 2), 0, 30000, 30000, 30000, 30000);
  return 1;
}

//----- (02246C4C) --------------------------------------------------------
int __fastcall Function_2246c4c(int a1, int a2, int a3, int a4, int a5)
{
  int v5;

  if ( a5 != 3 )
    return 0;
  v5 = 44 * a4;
  *(ushort *)(a2 + 30 + v5) = *(ushort *)(a2 + 30 + 44 * a4) + 20;
  Function_2245f14(a2 + v5, *(uchar *)(a2 + v5 + 2), 0, 30000, 30000, 30000, 30000);
  return 1;
}

//----- (02246C88) --------------------------------------------------------
int __fastcall Function_2246c88(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int i;
  int v8;

  v5 = a2;
  v6 = a5;
  for ( i = a1; v6 < 4; *(uint *)(v5 + 44 * v8 + 40) |= 4u )
    v8 = *(uchar *)(i + v6++ + 561);
  Function_2245f14(v5 + 44 * a4, *(uchar *)(v5 + 44 * a4 + 2), 0, 30000, 30000, 30000, 30000);
  return 1;
}

//----- (02246CDC) --------------------------------------------------------
int __fastcall Function_2246cdc(int *a1, int a2, int a3, int a4, int a5)
{
  int *v5;
  int v6;
  ushort *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  ushort *v16;
  int v17;
  int v18;
  int v19;

  v5 = a1;
  v6 = a2;
  v15 = a4;
  if ( !a5 )
    return 0;
  v17 = *((uchar *)a1 + a5 + 560);
  v8 = (ushort *)(a2 + 44 * a4);
  v19 = 44 * a4;
  if ( *((uint *)v8 + 10) & 2 )
    return 0;
  v16 = (ushort *)(a2 + 44 * v17);
  if ( *((uint *)v16 + 10) & 2 )
    return 0;
  v9 = *((uchar *)v8 + 3);
  v10 = *(uchar *)(*a1 + 286);
  v11 = Function_2243af0(*(uchar *)(*a1 + 287), *v8);
  v12 = *v5;
  v18 = v11;
  v13 = *(uchar *)(v6 + 44 * v17 + 3);
  v14 = *(uchar *)(v12 + 286);
  if ( Function_2243af0(*(uchar *)(v12 + 287), *v16) <= 0 || v18 <= 0 )
    return 0;
  *(ushort *)(v6 + 30 + v19) += 30;
  Function_2245f14((int)v8, *(uchar *)(v6 + v19 + 2), 0, v15, v17, 30000, 30000);
  return 1;
}

//----- (02246DA4) --------------------------------------------------------
int __fastcall Function_2246da4(int a1, int a2, int a3, int a4, int a5)
{
  char v5;

  *(ushort *)(a2 + 44 * a4 + 30) += *((uchar *)&dword_2253AEC + a5);
  switch ( (uchar)a5 )
  {
    case 0:
      v5 = 0;
      break;
    case 1:
      v5 = 1;
      break;
    case 2:
      v5 = 2;
      break;
    default:
      v5 = 3;
      break;
  }
  Function_2245f14(a2 + 44 * a4, *(uchar *)(a2 + 44 * a4 + 2), v5, a4, 30000, 30000, 30000);
  return 1;
}

//----- (02246E08) --------------------------------------------------------
int __fastcall Function_2246e08(int a1, int a2, int a3, int a4, int a5)
{
  int v6;

  if ( !a5 )
    return 0;
  v6 = *(char *)(a2 + 44 * *(uchar *)(a1 + a5 - 1 + 561) + 8);
  if ( v6 < 50 && v6 < 80 )
    return 0;
  *(ushort *)(a2 + 30 + 44 * a4) += 30;
  Function_2245f14(a2 + 44 * a4, *(uchar *)(a2 + 44 * a4 + 2), 0, a4, 30000, 30000, 30000);
  return 1;
}

//----- (02246E68) --------------------------------------------------------
int __fastcall Function_2246e68(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;

  v4 = 0;
  v5 = a2;
  v6 = 44 * a4;
  do
  {
    if ( v4 != a4 && *(short *)(v5 + 26) < *(short *)(a2 + 44 * a4 + 28) )
      break;
    ++v4;
    v5 += 44;
  }
  while ( v4 < 4 );
  if ( v4 != 4 )
    return 0;
  *(ushort *)(a2 + 30 + v6) += 30;
  Function_2245f14(a2 + v6, *(uchar *)(a2 + v6 + 2), 0, a4, 30000, 30000, 30000);
  return 1;
}

//----- (02246ECC) --------------------------------------------------------
uint __fastcall Function_2246ecc(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v7;
  int v8;

  v2 = a1;
  v7 = a2;
  v3 = malloc(0x15u, 50);
  v4 = *(uchar *)(*(uint *)v2 + 295);
  if ( v4 < 4 )
  {
    v5 = v7 + 2 * v4;
    v8 = v7 + 8;
    do
    {
      Function_2246f24(v2, v3, v4);
      Function_2246f9c(v2, v3, v4, v5, v8 + v4);
      ++v4;
      v5 += 2;
    }
    while ( v4 < 4 );
  }
  return free(v3);
}

//----- (02246F24) --------------------------------------------------------
int __fastcall Function_2246f24(uint *a1, ushort *a2, int a3)
{
  uint *v3;
  int v4;
  ushort *v5;
  int v6;
  int result;
  ushort *v8;

  v3 = a1;
  v4 = a3;
  v8 = a2;
  MI_CpuFill8(a2, 0, 0x32u);
  v5 = v8;
  v6 = 0;
  do
  {
    *v5 = GetPkmnData(*(int **)(4 * v4 + *v3), v6 + 54, 0);
    if ( Function_2243a98((int)(v3 + 140), v4, *v5) == 1 )
    {
      *((uchar *)v5 + 10) = LoadMoveData(*v5, 0xAu);
      *((uchar *)v5 + 11) = LoadMoveData(*v5, 0xBu);
    }
    else
    {
      *v5 = 0;
    }
    ++v6;
    v5 += 6;
  }
  while ( v6 < 4 );
  result = (int)(v8 + 24);
  *((uchar *)v8 + 48) = *(uchar *)(*v3 + v4 + 268);
  return result;
}

//----- (02246F9C) --------------------------------------------------------
uint __fastcall Function_2246f9c(int *a1, ushort *a2, int a3, ushort *a4, uchar *a5)
{
  int v5;
  short *v6;
  int v7;
  int v8;
  short *v9;
  int v10;
  short *v11;
  short v12;
  int v13;
  ushort *v14;
  int v15;
  int v16;
  ushort *v17;
  short *v18;
  ushort *v19;
  int v20;
  int v21;
  ushort *v22;
  short *v23;
  ushort *v24;
  int v25;
  int v26;
  ushort *v27;
  short *v28;
  int v29;
  short *v30;
  int v31;
  int v32;
  char *v33;
  int v34;
  int v35;
  ushort *v36;
  int v37;
  int v38;
  ushort *v39;
  ushort *v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  char *v50;
  int v51;
  uint result;
  int *v53;
  ushort *v54;
  int v55;
  ushort *v56;
  int v57;
  int *v58;
  int v59;
  int v60;
  int v61;
  char v62;
  char v63;
  char v64;
  char v65;
  char v66[4];
  char v67[4];
  short v68;
  short v69;

  v53 = a1;
  v54 = a2;
  v59 = (int)(a1 + 140);
  v55 = a3;
  v56 = a4;
  v60 = 0;
  do
  {
    if ( a3 == *(uchar *)(v59 + v60 + 1) )
      break;
    ++v60;
  }
  while ( v60 < 4 );
  v57 = 0;
  v58 = dword_2253C30;
  do
  {
    if ( v60 + 1 == *(uchar *)v58 )
    {
      v5 = 0;
      v6 = &v69;
      do
      {
        ++v5;
        *(uchar *)v6 = 0;
        v6 = (short *)((char *)v6 + 1);
      }
      while ( v5 < 3 );
      if ( ((int (__fastcall *)(int, int, ushort *, short *, uint))dword_2253BBC[*((uchar *)v58 + 1)])(
             v59,
             v55,
             v54,
             &v69,
             *(uchar *)(*v53 + 287)) == 1 )
      {
        v7 = *((char *)v58 + 3);
        if ( *((uchar *)v58 + 3) )
        {
          if ( v7 == 2 || v7 == 3 )
          {
            v10 = 0;
            v11 = &v69;
            do
            {
              ++v10;
              *(uchar *)v11 ^= 1u;
              v11 = (short *)((char *)v11 + 1);
            }
            while ( v10 < 3 );
          }
        }
        else
        {
          v8 = 0;
          v9 = &v69;
          do
          {
            ++v8;
            *(uchar *)v9 = 0;
            v9 = (short *)((char *)v9 + 1);
          }
          while ( v8 < 3 );
        }
        v12 = *((ushort *)v58 + *(uchar *)(v55 + *v53 + 268) + 2);
        if ( *(uchar *)(v55 + *v53 + 268) )
          v12 += *((ushort *)v58 + 2);
        v13 = *((uchar *)v58 + 2);
        if ( v13 == 240 )
        {
          v14 = v54;
          v15 = 0;
          do
          {
            if ( *(uchar *)(*v53 + 287) == *((uchar *)v14 + 11) )
            {
              v16 = 0;
              v17 = v14;
              v14[1] += v12;
              v18 = &v69;
              do
              {
                if ( *(uchar *)v18 == 1 )
                  v17[2] += v12;
                ++v16;
                v18 = (short *)((char *)v18 + 1);
                ++v17;
              }
              while ( v16 < 3 );
            }
            ++v15;
            v14 += 6;
          }
          while ( v15 < 4 );
        }
        else if ( v13 == 241 )
        {
          v19 = v54;
          v20 = 0;
          do
          {
            if ( Function_2095734(*((uchar *)v19 + 10)) >= 20 )
            {
              v21 = 0;
              v22 = v19;
              v19[1] += v12;
              v23 = &v69;
              do
              {
                if ( *(uchar *)v23 == 1 )
                  v22[2] += v12;
                ++v21;
                v23 = (short *)((char *)v23 + 1);
                ++v22;
              }
              while ( v21 < 3 );
            }
            ++v20;
            v19 += 6;
          }
          while ( v20 < 4 );
        }
        else
        {
          v24 = v54;
          v25 = 0;
          do
          {
            if ( *((uchar *)v58 + 2) == *((uchar *)v24 + 10) )
            {
              v26 = 0;
              v27 = v24;
              v24[1] += v12;
              v28 = &v69;
              do
              {
                if ( *(uchar *)v28 == 1 )
                  v27[2] += v12;
                ++v26;
                v28 = (short *)((char *)v28 + 1);
                ++v27;
              }
              while ( v26 < 3 );
            }
            ++v25;
            v24 += 6;
          }
          while ( v25 < 4 );
        }
      }
    }
    v58 += 3;
    ++v57;
  }
  while ( v57 < 165 );
  v29 = 0;
  v30 = &v68;
  do
  {
    v31 = *v53;
    *v30 = Call_PRNG();
    ++v29;
    ++v30;
  }
  while ( v29 < 4 );
  v32 = 0;
  v33 = v66;
  do
  {
    v34 = *v53;
    *(ushort *)v33 = Call_PRNG();
    ++v32;
    v33 += 2;
  }
  while ( v32 < 3 );
  v35 = 0;
  if ( !*v54 )
  {
    v36 = v54;
    do
    {
      v36 += 6;
      ++v35;
    }
    while ( !*v36 );
  }
  v37 = v35 + 1;
  v38 = (short)v54[6 * v35 + 1];
  if ( v35 + 1 < 4 )
  {
    v39 = &v54[6 * v37];
    v40 = (ushort *)(&v68 + v37);
    do
    {
      if ( *v39 )
      {
        v41 = (short)v39[1];
        if ( v41 > v38 || v41 == v38 && *v40 > (uint)(ushort)*(&v68 + v35) )
        {
          v35 = v37;
          v38 = (short)v39[1];
        }
      }
      ++v37;
      v39 += 6;
      ++v40;
    }
    while ( v37 < 4 );
  }
  if ( !*(uchar *)(*v53 + 369) )
  {
    v42 = 0;
    v43 = (int)&v54[6 * v35];
    v44 = 0;
    do
    {
      if ( !*(ushort *)(v43 + 4) )
        ++v42;
      ++v44;
      v43 += 2;
    }
    while ( v44 < 3 );
    if ( v42 == 3 )
    {
      v62 = -26;
      v63 = -128;
      v64 = 51;
      v65 = 0;
      if ( (uchar)Call_PRNG() < (int)(uchar)*(&v62 + *(uchar *)(*v53 + 288)) )
      {
        v45 = (int)v53 + *(uchar *)(*v53 + 291);
        v54[6 * v35 + 2 + *(uchar *)(v45 + 574)] -= 100;
      }
    }
  }
  v61 = 0;
  v46 = (int)&v54[6 * v35];
  v47 = *(short *)(v46 + 4);
  v48 = 1;
  v49 = v46 + 2;
  v50 = v67;
  do
  {
    v51 = *(short *)(v49 + 4);
    if ( v51 > v47 || v51 == v47 && *(ushort *)v50 > (uint)*(ushort *)&v66[2 * v61] )
    {
      v61 = v48;
      v47 = *(short *)(v49 + 4);
    }
    ++v48;
    v49 += 2;
    v50 += 2;
  }
  while ( v48 < 3 );
  *v56 = v54[6 * v35];
  *a5 = v61;
  if ( !*v56 )
    ErrorHandler();
  result = (uchar)*a5;
  if ( result >= 3 )
    result = ErrorHandler();
  return result;
}

//----- (022472F8) --------------------------------------------------------
BOOL __fastcall Function_22472f8(uchar *a1)
{
  return *a1 == 4;
}

//----- (02247308) --------------------------------------------------------
BOOL __fastcall Function_2247308(int a1, int a2)
{
  return *(uint *)(a1 + 4 * a2 + 224) << 8 >> 24 != 0;
}

//----- (02247320) --------------------------------------------------------
int __fastcall Function_2247320(int a1, int a2, int a3)
{
  int v3;

  v3 = 0;
  do
  {
    if ( *(uchar *)(a3 + 10) == 5 )
      return 1;
    ++v3;
    a3 += 12;
  }
  while ( v3 < 4 );
  return 0;
}

//----- (02247338) --------------------------------------------------------
int __fastcall Function_2247338(int a1, int a2, int a3)
{
  int v3;

  v3 = 0;
  do
  {
    if ( *(uchar *)(a3 + 10) == 9 )
      return 1;
    ++v3;
    a3 += 12;
  }
  while ( v3 < 4 );
  return 0;
}

//----- (02247350) --------------------------------------------------------
int __fastcall Function_2247350(int a1, int a2, int a3)
{
  int v3;

  v3 = 0;
  do
  {
    if ( *(uchar *)(a3 + 10) == 12 )
      return 1;
    ++v3;
    a3 += 12;
  }
  while ( v3 < 4 );
  return 0;
}

//----- (02247368) --------------------------------------------------------
int __fastcall Function_2247368(int a1, int a2, int a3)
{
  int v3;

  v3 = 0;
  do
  {
    if ( *(uchar *)(a3 + 10) == 15 )
      return 1;
    ++v3;
    a3 += 12;
  }
  while ( v3 < 4 );
  return 0;
}

//----- (02247380) --------------------------------------------------------
int __fastcall Function_2247380(int a1, int a2, int a3)
{
  int v3;

  v3 = 0;
  do
  {
    if ( *(uchar *)(a3 + 10) == 17 )
      return 1;
    ++v3;
    a3 += 12;
  }
  while ( v3 < 4 );
  return 0;
}

//----- (02247398) --------------------------------------------------------
int __fastcall Function_2247398(int a1, int a2, int a3)
{
  int v3;

  v3 = 0;
  do
  {
    if ( *(uchar *)(a3 + 10) == 18 )
      return 1;
    ++v3;
    a3 += 12;
  }
  while ( v3 < 4 );
  return 0;
}

//----- (022473B0) --------------------------------------------------------
int __fastcall Function_22473b0(int a1, int a2, int a3)
{
  int v3;

  v3 = 0;
  do
  {
    if ( *(uchar *)(a3 + 10) == 19 )
      return 1;
    ++v3;
    a3 += 12;
  }
  while ( v3 < 4 );
  return 0;
}

//----- (022473C8) --------------------------------------------------------
int __fastcall Function_22473c8(int a1, int a2, int a3)
{
  int v3;

  v3 = 0;
  do
  {
    if ( *(uchar *)(a3 + 10) == 20 )
      return 1;
    ++v3;
    a3 += 12;
  }
  while ( v3 < 4 );
  return 0;
}

//----- (022473E0) --------------------------------------------------------
int __fastcall Function_22473e0(int a1, int a2, int a3)
{
  int v3;

  v3 = 0;
  do
  {
    if ( *(uchar *)(a3 + 10) == 21 )
      return 1;
    ++v3;
    a3 += 12;
  }
  while ( v3 < 4 );
  return 0;
}

//----- (022473F8) --------------------------------------------------------
BOOL __fastcall Function_22473f8(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 2 * a2;
  v3 = 0;
  do
  {
    if ( *(short *)(v2 + 18) > *(short *)(a1 + 18) )
      break;
    ++v3;
    a1 += 2;
  }
  while ( v3 < 4 );
  return v3 == 4;
}

//----- (02247424) --------------------------------------------------------
int __fastcall Function_2247424(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  if ( *(uchar *)a1 != 4 )
    goto LABEL_10;
  v2 = a1 + 2 * a2;
  v3 = 0;
  do
  {
    if ( *(short *)(v2 + 18) > *(short *)(a1 + 18) )
      break;
    ++v3;
    a1 += 2;
  }
  while ( v3 < 4 );
  if ( v3 != 4 )
LABEL_10:
    result = 0;
  else
    result = 1;
  return result;
}

//----- (02247454) --------------------------------------------------------
int __fastcall Function_2247454(int a1, int a2, int a3, int a4, int a5)
{
  int v5;

  v5 = 0;
  do
  {
    if ( *(uchar *)(a3 + 10) == 4 && a5 == *(uchar *)(a3 + 11) )
      return 1;
    ++v5;
    a3 += 12;
  }
  while ( v5 < 4 );
  return 0;
}

//----- (02247474) --------------------------------------------------------
int __fastcall Function_2247474(int a1, int a2, int a3, int a4, int a5)
{
  int v5;

  v5 = 0;
  do
  {
    if ( a5 == *(uchar *)(a3 + 11) )
      return 1;
    ++v5;
    a3 += 12;
  }
  while ( v5 < 4 );
  return 0;
}

//----- (02247490) --------------------------------------------------------
BOOL __fastcall Function_2247490(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v7;
  int v8;

  v5 = 0;
  do
  {
    if ( a5 == *(uchar *)(a3 + 11) )
      break;
    ++v5;
    a3 += 12;
  }
  while ( v5 < 4 );
  if ( v5 == 4 )
    return 0;
  v7 = 0;
  v8 = 0;
  do
  {
    if ( *(uchar *)(a1 + v8 + 34) == 40 )
    {
      *(uchar *)(a4 + v8) = 1;
      ++v7;
    }
    ++v8;
  }
  while ( v8 < 3 );
  return v7 > 0;
}

//----- (022474D8) --------------------------------------------------------
BOOL __fastcall Function_22474d8(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v7;
  int v8;

  v5 = 0;
  do
  {
    if ( a5 == *(uchar *)(a3 + 11) )
      break;
    ++v5;
    a3 += 12;
  }
  while ( v5 < 4 );
  if ( v5 == 4 )
    return 0;
  v7 = 0;
  v8 = 0;
  do
  {
    if ( *(uchar *)(a1 + v8 + 34) == 30 )
    {
      ++v7;
      *(uchar *)(a4 + v8) = 1;
    }
    ++v8;
  }
  while ( v8 < 3 );
  return v7 > 0;
}

//----- (02247520) --------------------------------------------------------
int __fastcall Function_2247520(int a1, int a2, int a3)
{
  int v3;

  v3 = 0;
  do
  {
    if ( *(uchar *)(a3 + 10) == 8 )
      return 1;
    ++v3;
    a3 += 12;
  }
  while ( v3 < 4 );
  return 0;
}

//----- (02247538) --------------------------------------------------------
int __fastcall Function_2247538(int a1, int a2, int a3)
{
  int v3;

  v3 = 0;
  do
  {
    if ( *(uchar *)(a3 + 10) == 13 )
      return 1;
    ++v3;
    a3 += 12;
  }
  while ( v3 < 4 );
  return 0;
}

//----- (02247550) --------------------------------------------------------
BOOL __fastcall Function_2247550(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;

  v4 = 0;
  v5 = 0;
  do
  {
    if ( *(uchar *)(a1 + v5 + 34) == 40 )
    {
      ++v4;
      *(uchar *)(a4 + v5) = 1;
    }
    ++v5;
  }
  while ( v5 < 3 );
  return v4 > 0;
}

//----- (0224757C) --------------------------------------------------------
BOOL __fastcall Function_224757c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;

  v4 = 0;
  v5 = 0;
  do
  {
    if ( *(uchar *)(a1 + v5 + 34) == 30 )
    {
      ++v4;
      *(uchar *)(a4 + v5) = 1;
    }
    ++v5;
  }
  while ( v5 < 3 );
  return v4 > 0;
}

//----- (022475A8) --------------------------------------------------------
BOOL __fastcall Function_22475a8(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;

  v4 = 0;
  v5 = 0;
  do
  {
    if ( *(char *)(a1 + v5 + 34) <= 10 )
    {
      ++v4;
      *(uchar *)(a4 + v5) = 1;
    }
    ++v5;
  }
  while ( v5 < 3 );
  return v4 > 0;
}

//----- (022475D4) --------------------------------------------------------
int __fastcall Function_22475d4(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;

  v4 = 0;
  do
  {
    if ( *(char *)(a1 + v4 + 34) < 20 )
      return 0;
    ++v4;
  }
  while ( v4 < 3 );
  v6 = 0;
  result = 1;
  do
    *(uchar *)(a4 + v6++) = 1;
  while ( v6 < 3 );
  return result;
}

//----- (02247600) --------------------------------------------------------
int __fastcall Function_2247600(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;

  v4 = 0;
  do
  {
    if ( *(char *)(a1 + v4 + 34) > 20 )
      return 0;
    ++v4;
  }
  while ( v4 < 3 );
  v6 = 0;
  result = 1;
  do
    *(uchar *)(a4 + v6++) = 1;
  while ( v6 < 3 );
  return result;
}

//----- (0224762C) --------------------------------------------------------
BOOL __fastcall Function_224762c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;

  v4 = 0;
  v5 = 0;
  do
  {
    if ( *(char *)(a1 + v5 + 34) <= 20 )
    {
      *(uchar *)(a4 + v5) = 1;
      ++v4;
    }
    ++v5;
  }
  while ( v5 < 3 );
  return v4 == 1;
}

//----- (02247658) --------------------------------------------------------
BOOL __fastcall Function_2247658(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;

  v4 = 0;
  v5 = 0;
  do
  {
    if ( *(uchar *)(a1 + v5 + 34) == 40 )
    {
      *(uchar *)(a4 + v5) = 1;
      ++v4;
    }
    ++v5;
  }
  while ( v5 < 3 );
  return v4 == 2;
}

//----- (02247684) --------------------------------------------------------
BOOL __fastcall Function_2247684(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;

  v4 = 0;
  v5 = 0;
  do
  {
    if ( !*(uchar *)(a1 + v5 + 34) )
    {
      *(uchar *)(a4 + v5) = 1;
      ++v4;
    }
    ++v5;
  }
  while ( v5 < 3 );
  return v4 == 1;
}

//----- (022476B0) --------------------------------------------------------
BOOL __fastcall Function_22476b0(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v7;
  int v8;

  v5 = 0;
  do
  {
    if ( a5 == *(uchar *)(a3 + 11) )
      break;
    ++v5;
    a3 += 12;
  }
  while ( v5 < 4 );
  if ( v5 == 4 )
    return 0;
  v7 = 0;
  v8 = 0;
  do
  {
    if ( *(uchar *)(a1 + v8 + 34) == 40 )
    {
      *(uchar *)(a4 + v8) = 1;
      ++v7;
    }
    ++v8;
  }
  while ( v8 < 3 );
  return v7 > 0;
}

//----- (022476F8) --------------------------------------------------------
uint __fastcall Function_22476f8(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;
  uint result;

  v2 = a2;
  v3 = a1;
  v4 = *(uint **)(a1 + 4 * a2 + 8);
  if ( v4 )
  {
    Function_2007dc8(v4);
    free(*(uint *)(v3 + 72 + 16 * v2));
    result = v3 + 4 * v2;
    *(uint *)(result + 8) = 0;
    *(uint *)(v3 + 72 + 16 * v2) = 0;
  }
  else
  {
    result = *(uint *)(v3 + 16 * a2 + 72);
    if ( result )
      result = ErrorHandler();
  }
  return result;
}

//----- (02247734) --------------------------------------------------------
uint __fastcall Function_2247734(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = a1;
  v2 = 0;
  do
    result = Function_22476f8(v1, v2++);
  while ( v2 < 4 );
  return result;
}

//----- (0224774C) --------------------------------------------------------
int __fastcall Function_224774c(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_200cc3c(a1, a2, a3, 0x43u, 1, 2, 33002);
  Function_200ce24(v3, v4, v5, 0x44u, 1, 33002);
  return Function_200ce54(v3, v4, v5, 0x45u, 1, 33002);
}

//----- (02247798) --------------------------------------------------------
int __fastcall Function_2247798(int a1)
{
  int v1;

  v1 = a1;
  Function_200d070(a1, 33002);
  Function_200d090(v1, 33002);
  return Function_200d0a0(v1, 33002);
}

//----- (022477B8) --------------------------------------------------------
int __fastcall Function_22477b8(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int *v9;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = malloc(0x16u, 24);
  MI_CpuFill8((ushort *)v8, 0, 0x18u);
  v9 = Function_200ce6c(*(uint **)(v5 + 40), *(uint *)(v5 + 44), (short *)dword_22543F8);
  *(uint *)(v8 + 4) = v9;
  Function_200d500(v9, (short)v6, (short)v7, 0x100000);
  if ( a5 == 1 )
    Function_200d364(*(int **)(v8 + 4), 1u);
  Function_200d324(**(uint **)(v8 + 4));
  *(uint *)(v8 + 8) = v6 << 8;
  *(uint *)(v8 + 12) = v7 << 8;
  *(uint *)v8 = v5 + 1273;
  ++*(uchar *)(v5 + 1273);
  AddTaskToTaskList1((int)Function_2247840, v8, 0xC350u);
  return Function_2005748(0x6E1u);
}

//----- (02247840) --------------------------------------------------------
int __fastcall Function_2247840(int *a1, int a2)
{
  int v2;
  int *v3;
  uint v4;
  int v5;
  int result;

  v2 = a2;
  v3 = a1;
  if ( *(uchar *)(a2 + 20) )
  {
    Function_200d0f4(*(uint *)(a2 + 4));
    --**(uchar **)v2;
    free(v2);
    result = Call_RemoveTaskFromTaskList(v3);
  }
  else
  {
    v4 = Function_201d2b8(*(uint *)(a2 + 16));
    *(uint *)(v2 + 16) += 24576;
    v5 = *(uint *)(v2 + 12) - 256;
    *(uint *)(v2 + 12) = v5;
    Function_200d500(
      *(int **)(v2 + 4),
      (short)(*(uint *)(v2 + 8) / 256 + (int)(8 * v4) / 4096),
      (int)((v5 + ((uint)(v5 >> 7) >> 24)) << 8) >> 16,
      0x100000);
    if ( (ushort)++*(ushort *)(v2 + 22) >= 0x3Cu || (result = -8192, *(uint *)(v2 + 12) <= -8192) )
    {
      result = *(uchar *)(v2 + 20) + 1;
      *(uchar *)(v2 + 20) = result;
    }
  }
  return result;
}

//----- (022478D0) --------------------------------------------------------
int __fastcall Function_22478d0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int result;
  char v7;
  int v8;

  v8 = a4;
  v4 = a1;
  v5 = a2;
  if ( *(uint *)(a1 + 36) )
    ErrorHandler();
  Function_207697c((int)&v7, *(ushort *)(*(uint *)v4 + 48 * v5 + 26));
  result = Function_2007c34(*(uint **)(v4 + 16), &v7, 320, 32, -576, 3, 0, 0);
  *(uint *)(v4 + 36) = result;
  return result;
}

//----- (02247918) --------------------------------------------------------
uint *__fastcall Function_2247918(int a1)
{
  int v1;
  uint *result;

  v1 = a1;
  result = *(uint **)(a1 + 36);
  if ( result )
  {
    Function_2007dc8(result);
    result = 0;
    *(uint *)(v1 + 36) = 0;
  }
  return result;
}

//----- (0224792C) --------------------------------------------------------
uint __fastcall Function_224792c(uint result, int a2, uchar *a3)
{
  int v3;
  uint v4;
  uchar *v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v3 = a2;
  v4 = result;
  v5 = a3;
  if ( a2 && !a3 )
    result = ErrorHandler();
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      v6 = *v5;
      v7 = *(uchar *)(*(uint *)v4 + v6 + 264);
      Function_200b48c(*(int **)(v4 + 72), 0, *(uint *)(*(uint *)v4 + 4 * v6 + 232));
      v8 = *(uint *)(*(uint *)(v4 + 12) + 4 * *v5);
      Function_2076b10_Dummy();
      result = Function_200b5cc(*(int **)(v4 + 72), 1u, v9);
    }
    else
    {
      result = ErrorHandler();
    }
  }
  return result;
}

//----- (02247990) --------------------------------------------------------
uint __fastcall Function_2247990(uint a1, ushort **a2, uint a3, int a4, uchar *a5)
{
  uint v5;
  ushort **v6;
  uint v7;
  ushort *v8;
  int v9;
  int v10;
  int v12;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v12 = a4;
  if ( !*(uchar *)(*(uint *)a1 + 369) )
    Function_2027ac0(*(ushort **)(*(uint *)a1 + 6536));
  v8 = Function_200b1ec_CallMsgDecrypt(v6, v7);
  Function_224792c(v5, v12, a5);
  Function_200c388(*(uint **)(v5 + 72), *(uint *)(v5 + 76), (int)v8);
  Function_201ada4_ClearTextBox(v5 + 52, 255);
  v9 = *(uint *)(v5 + 76);
  *(uchar *)(v5 + 208) = Function_201d738_CallInitTextInterpreter(v5 + 52, 1);
  return Function_20237bc_FreeMsg((int)v8, v10);
}

//----- (02247A08) --------------------------------------------------------
uint __fastcall Function_2247a08(uint a1, uint a2, uchar *a3)
{
  uint v3;
  uint v4;
  uchar *v5;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( a2 >= 0xF )
    ErrorHandler();
  return Function_2247990(v4, *(ushort ***)(v4 + 68), LOWORD(dword_225442C[v3]), BYTE2(dword_225442C[v3]), v5);
}

//----- (02247A3C) --------------------------------------------------------
int __fastcall Function_2247a3c(int a1)
{
  return Function_201d724(*(uchar *)(a1 + 208));
}

//----- (02247A48) --------------------------------------------------------
int __fastcall Function_2247a48(int a1, int a2, int a3, int a4)
{
  void **v5;
  short v6;
  char v7;
  char v8;
  char v9;
  int v10;

  v10 = a4;
  v5 = &off_2254488;
  v6 = 17;
  v7 = *(uchar *)(*(uint *)a1 + 291);
  v9 = *(uchar *)(*(uint *)a1 + 284);
  v8 = *(uchar *)(*(uint *)a1 + 369);
  return Function_224f18c(a1 + 1276, &v5);
}

//----- (02247A88) --------------------------------------------------------
int __fastcall Function_2247a88(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a1, 255, a3);
}

//----- (02247A9C) --------------------------------------------------------
int __fastcall Function_2247a9c(int a1, int a2, int a3)
{
  return Function_224f26c(a1, a3);
}

//----- (02247AAC) --------------------------------------------------------
void Function_2247aac()
{
  ;
}

//----- (02247AB0) --------------------------------------------------------
int __fastcall Function_2247ab0(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a1, 255, a3);
}

//----- (02247AC4) --------------------------------------------------------
int __fastcall Function_2247ac4(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int result;

  v3 = a1;
  v4 = a3;
  *(uchar *)(a2 + 3868) = 1;
  result = Function_2094edc(*(uchar **)a2);
  if ( !result )
    result = Function_224f26c(v3, v4);
  return result;
}

//----- (02247AEC) --------------------------------------------------------
int __fastcall Function_2247aec(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a1, 255, a3);
}

//----- (02247B00) --------------------------------------------------------
uint *__fastcall Function_2247b00(int a1, int a2, ushort *a3, uchar *a4)
{
  int v4;
  int v5;
  ushort *v6;
  uchar *v7;
  int v8;
  short v9;
  int v10;
  char v12;
  int v13;
  int v14;
  int v15;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = malloc(0x16u, 28);
  MI_CpuFill8((ushort *)v8, 0, 0x1Cu);
  *(uint *)v8 = v5;
  *(ushort *)(v8 + 4) = *v6;
  *(ushort *)(v8 + 6) = v6[1];
  *(ushort *)(v8 + 8) = v6[2];
  v9 = v6[3];
  v10 = 0;
  *(ushort *)(v8 + 10) = v9;
  *(uint *)(v8 + 12) = v4;
  *(uchar *)(v8 + 17) = *v7;
  while ( v10 < 4 )
  {
    if ( *(uint *)(*(uint *)v8 + 16 * v10 + 3872) )
    {
      ((void (*)(void))dword_225B020[0])();
      *(uint *)(*(uint *)v8 + 16 * v10 + 3872) = 0;
    }
    ++v10;
  }
  Function_20765b8(*(uint *)(*(uint *)(v5 + 12) + 4 * (uchar)*v7), 2u);
  MI_CpuFill8(&v12, 0, 0x10u);
  v15 = 22;
  v13 = 128;
  v14 = 104;
  *(uint *)(v5 + 16 * (uchar)*v7 + 3876) = 128;
  *(uint *)(v5 + 16 * (uchar)*v7 + 3880) = 104;
  *(uint *)(v5 + 16 * (uchar)*v7 + 3872) = ((int (__fastcall *)(char *, uint))dword_225AFD4[0])(
                                                         &v12,
                                                         *(uint *)(*(uint *)v5 + 4 * (uchar)*v7 + 248));
  ((void (__fastcall *)(uint, uint))dword_225B074[0])(*(uint *)(v5 + 16 * (uchar)*v7 + 3872), 0);
  WIN_IN = WIN_IN & 0xFFC0 | 0x3F;
  WIN_OUT = WIN_OUT & 0xFFC0 | 0x1F;
  G2x_SetBlendBrightness_(&REG_BLDCNT, 1, -16);
  REG_DISPCNT = REG_DISPCNT & 0xFFFF1FFF | 0x2000;
  *(uchar *)(v5 + 3936) = 0;
  *(uchar *)(v5 + 3937) = 0;
  *(uchar *)(v5 + 3938) = -1;
  *(uchar *)(v5 + 3939) = -120;
  LoadFromNARC_RCSN(45, 21, *(uint **)(v5 + 48), 2u, 0, 0, 1, 22);
  return AddTaskToTaskList1((int)Function_2247c5c, v8, 0x7530u);
}

//----- (02247C5C) --------------------------------------------------------
int __fastcall Function_2247c5c(int *a1, int a2)
{
  uchar *v2;
  int *v3;
  int v4;
  int result;
  int v6;
  uint *v7;

  v2 = (uchar *)a2;
  v3 = a1;
  v4 = *(uchar *)(a2 + 16);
  switch ( (uchar)a2 )
  {
    case 0:
      result = v4 + 1;
      *(uchar *)(a2 + 16) = result;
      break;
    case 1:
      WIN_IN = WIN_IN & 0xFFC0 | 0x3E;
      v6 = Function_20765b8(*(uint *)(*(uint *)(*(uint *)a2 + 12) + 4 * *(uchar *)(a2 + 17)), 2u);
      v7 = (uint *)(*(uint *)v2 + 16 * v2[17]);
      ((void (__fastcall *)(uint, uint, uint, int))dword_225B158[0])(v7[968], v7[969], v7[970], v6);
      ((void (__fastcall *)(uint, int))dword_225B074[0])(*(uint *)(*(uint *)v2 + 16 * v2[17] + 3872), 1);
      result = v2[16] + 1;
      v2[16] = result;
      break;
    case 2:
      result = v4 + 1;
      *(uchar *)(a2 + 16) = result;
      break;
    case 3:
      WIN_IN = WIN_IN & 0xFFC0 | 0x3F;
      Function_2003a2c(*(uint *)(*(uint *)a2 + 80), 0, 0x1FFFu, 0, 0);
      Function_2003a2c(*(uint *)(*(uint *)v2 + 80), 2, 0x3FFFu, 0, 0);
      Function_2005748(0x6ECu);
      result = v2[16] + 1;
      v2[16] = result;
      break;
    case 4:
      result = (short)++*(ushort *)(a2 + 18);
      if ( result > 10 )
      {
        *(ushort *)(a2 + 18) = 0;
        result = *(uchar *)(a2 + 16) + 1;
        *(uchar *)(a2 + 16) = result;
      }
      break;
    default:
      Function_224f26c(*(uint *)(a2 + 12), a2 + 4);
      free((int)v2);
      result = Call_RemoveTaskFromTaskList(v3);
      break;
  }
  return result;
}

//----- (02247D68) --------------------------------------------------------
int __fastcall Function_2247d68(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a1, 255, a3);
}

//----- (02247D7C) --------------------------------------------------------
uint *__fastcall Function_2247d7c(int a1, int a2, ushort *a3, uchar *a4)
{
  int v4;
  int v5;
  ushort *v6;
  uchar *v7;
  int v8;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = malloc(0x16u, 28);
  MI_CpuFill8((ushort *)v8, 0, 0x1Cu);
  *(uint *)v8 = v5;
  *(ushort *)(v8 + 4) = *v6;
  *(ushort *)(v8 + 6) = v6[1];
  *(ushort *)(v8 + 8) = v6[2];
  *(ushort *)(v8 + 10) = v6[3];
  *(uint *)(v8 + 12) = v4;
  *(uchar *)(v8 + 17) = *v7;
  return AddTaskToTaskList1((int)Function_2247dc8, v8, 0x7530u);
}

//----- (02247DC8) --------------------------------------------------------
int __fastcall Function_2247dc8(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  int result;

  v2 = a2;
  v3 = a1;
  if ( *(uchar *)(a2 + 16) )
  {
    if ( *(uchar *)(a2 + 16) == 1 )
    {
      Function_20765b8(*(uint *)(*(uint *)(*(uint *)a2 + 12) + 4 * *(uchar *)(a2 + 17)), 2u);
      v4 = *(uint *)(v2 + 24) + 256;
      *(uint *)(v2 + 24) = v4;
      if ( v4 >= 0x4000 )
      {
        *(uint *)(v2 + 24) = 0x4000;
        ++*(uchar *)(v2 + 16);
      }
      Function_2007dec(
        *(uint *)(*(uint *)v2 + 4 * *(uchar *)(v2 + 17) + 20),
        0,
        *(uint *)(v2 + 20) >> 8);
      result = Function_2007dec(
                 *(uint *)(*(uint *)v2 + 4 * *(uchar *)(v2 + 17) + 20),
                 1u,
                 *(uint *)(v2 + 24) >> 8);
    }
    else
    {
      Function_224f26c(*(uint *)(a2 + 12), a2 + 4);
      free(v2);
      result = Call_RemoveTaskFromTaskList(v3);
    }
  }
  else
  {
    *(uint *)(a2 + 20) = Function_20080c0(*(uint *)(*(uint *)a2 + 4 * *(uchar *)(a2 + 17) + 20), 0) << 8;
    *(uint *)(v2 + 24) = Function_20080c0(*(uint *)(*(uint *)v2 + 4 * *(uchar *)(v2 + 17) + 20), 1u) << 8;
    result = *(uchar *)(v2 + 16) + 1;
    *(uchar *)(v2 + 16) = result;
  }
  return result;
}

//----- (02247E78) --------------------------------------------------------
int __fastcall Function_2247e78(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a1, 255, a3);
}

//----- (02247E8C) --------------------------------------------------------
uint *__fastcall Function_2247e8c(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = malloc(0x16u, 28);
  MI_CpuFill8((ushort *)v8, 0, 0x1Cu);
  *(uint *)v8 = v5;
  *(ushort *)(v8 + 4) = *v6;
  *(ushort *)(v8 + 6) = v6[1];
  *(ushort *)(v8 + 8) = v6[2];
  *(ushort *)(v8 + 10) = v6[3];
  *(uint *)(v8 + 12) = v4;
  *(uchar *)(v8 + 18) = *(uchar *)(v7 + 1);
  *(uchar *)(v8 + 26) = 0;
  return AddTaskToTaskList1((int)Function_2247f8c, v8, 0x7530u);
}

//----- (02247EDC) --------------------------------------------------------
uint *__fastcall Function_2247edc(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = malloc(0x16u, 28);
  MI_CpuFill8((ushort *)v8, 0, 0x1Cu);
  *(uint *)v8 = v5;
  *(ushort *)(v8 + 4) = *v6;
  *(ushort *)(v8 + 6) = v6[1];
  *(ushort *)(v8 + 8) = v6[2];
  *(ushort *)(v8 + 10) = v6[3];
  *(uint *)(v8 + 12) = v4;
  *(uchar *)(v8 + 18) = *(uchar *)(v7 + 2);
  *(uchar *)(v8 + 26) = 1;
  return AddTaskToTaskList1((int)Function_2247f8c, v8, 0x7530u);
}

//----- (02247F2C) --------------------------------------------------------
uint *__fastcall Function_2247f2c(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = malloc(0x16u, 28);
  MI_CpuFill8((ushort *)v8, 0, 0x1Cu);
  *(uint *)v8 = v5;
  *(ushort *)(v8 + 4) = *v6;
  *(ushort *)(v8 + 6) = v6[1];
  *(ushort *)(v8 + 8) = v6[2];
  *(ushort *)(v8 + 10) = v6[3];
  *(uint *)(v8 + 12) = v4;
  *(uchar *)(v8 + 18) = *(uchar *)(v7 + 1) + *(uchar *)(v7 + 2);
  *(uchar *)(v8 + 20) = *(uchar *)(v7 + 1);
  *(uchar *)(v8 + 21) = *(uchar *)(v7 + 2);
  *(uchar *)(v8 + 26) = 0;
  *(uchar *)(v8 + 27) = 1;
  return AddTaskToTaskList1((int)Function_2247f8c, v8, 0x7530u);
}

//----- (02247F8C) --------------------------------------------------------
uint __fastcall Function_2247f8c(int *a1, int a2)
{
  int **v2;
  int *v3;
  int v4;
  uint v5;
  int v6;
  uint v7;
  short v8;
  int v9;
  uint v10;
  short v11;
  int v12;
  short v13;
  int v14;
  int v15;
  short v16;
  int v17;
  int v18;
  int v19;
  int v20;
  uint result;
  short v22;

  v2 = (int **)a2;
  v3 = a1;
  v4 = *(uchar *)(a2 + 16);
  if ( *(uchar *)(a2 + 16) )
  {
    if ( v4 != 1 )
    {
      if ( v4 == 2 )
      {
        result = (uchar)++*(uchar *)(a2 + 17);
        if ( result > 0x1E )
        {
          *(uchar *)(a2 + 17) = 0;
          result = *(uchar *)(a2 + 16) + 1;
          *(uchar *)(a2 + 16) = result;
        }
      }
      else
      {
        Function_224f26c(*(uint *)(a2 + 12), a2 + 4);
        free((int)v2);
        result = Call_RemoveTaskFromTaskList(v3);
      }
      return result;
    }
  }
  else
  {
    Function_2005748(0x6E5u);
    *((uchar *)v2 + 17) = 15;
    ++*((uchar *)v2 + 16);
  }
  v5 = *((uchar *)v2 + 19);
  if ( v5 < *((uchar *)v2 + 18) )
  {
    if ( *((uchar *)v2 + 27) == 1 && v5 >= *((uchar *)v2 + 20) )
      *((uchar *)v2 + 26) = 1;
    if ( *((uchar *)v2 + 17) )
    {
      result = *((uchar *)v2 + 17) - 1;
      *((uchar *)v2 + 17) = result;
    }
    else
    {
      *((uchar *)v2 + 17) = 3;
      v6 = **v2;
      v7 = Call_PRNG();
      s32_div_f(v7, 96);
      v22 = v8;
      v9 = **v2;
      v10 = Call_PRNG();
      v11 = (v10 >> 31) + __ROR4__((v10 << 26) - (v10 >> 31), 26);
      v12 = **v2;
      if ( Call_PRNG() & 1 )
        v13 = v22 + 128;
      else
        v13 = 128 - v22;
      v14 = v13;
      v15 = **v2;
      if ( Call_PRNG() & 1 )
        v16 = v11 + 96;
      else
        v16 = 96 - v11;
      v17 = v16;
      if ( *((uchar *)v2 + 19) )
      {
        if ( (v18 = *((short *)v2 + 11), v18 < 128) && v14 < 128 || v18 > 128 && v14 > 128 )
        {
          v19 = *((short *)v2 + 12);
          if ( v19 < 96 && v17 < 96 || v19 > 96 && v17 > 96 )
          {
            v20 = **v2;
            if ( Call_PRNG() & 1 )
            {
              if ( v14 >= 128 )
                v14 = (short)(128 - v22);
              else
                v14 = (short)(v22 + 128);
            }
            else if ( v17 >= 96 )
            {
              v17 = (short)(96 - v11);
            }
            else
            {
              v17 = (short)(v11 + 96);
            }
          }
        }
      }
      if ( *((uchar *)v2 + 19) & 1 )
        Function_22477b8((int)*v2, v14, v17, 737280, *((uchar *)v2 + 26));
      else
        Function_22477b8((int)*v2, v14, v17, 0, *((uchar *)v2 + 26));
      *((ushort *)v2 + 11) = v14;
      *((ushort *)v2 + 12) = v17;
      result = *((uchar *)v2 + 19) + 1;
      *((uchar *)v2 + 19) = result;
    }
  }
  else
  {
    *((uchar *)v2 + 17) = 0;
    Function_2005748(0x6E5u);
    result = *((uchar *)v2 + 16) + 1;
    *((uchar *)v2 + 16) = result;
  }
  return result;
}

//----- (02248138) --------------------------------------------------------
int __fastcall Function_2248138(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a1, 255, a3);
}

//----- (0224814C) --------------------------------------------------------
uint *__fastcall Function_224814c(int a1, int a2, ushort *a3, uchar *a4)
{
  int v4;
  int v5;
  ushort *v6;
  uchar *v7;
  int v8;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = malloc(0x16u, 28);
  MI_CpuFill8((ushort *)v8, 0, 0x1Cu);
  *(uint *)v8 = v5;
  *(ushort *)(v8 + 4) = *v6;
  *(ushort *)(v8 + 6) = v6[1];
  *(ushort *)(v8 + 8) = v6[2];
  *(ushort *)(v8 + 10) = v6[3];
  *(uint *)(v8 + 12) = v4;
  *(uchar *)(v8 + 17) = *v7;
  return AddTaskToTaskList1((int)Function_2248198, v8, 0x7530u);
}

//----- (02248198) --------------------------------------------------------
int __fastcall Function_2248198(int *a1, uchar *a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  int result;

  v2 = (int)a2;
  v3 = a1;
  v4 = Function_20765b8(*(uint *)(*(uint *)(*(uint *)a2 + 12) + 4 * a2[17]), 2u);
  if ( *(uchar *)(v2 + 16) )
  {
    if ( *(uchar *)(v2 + 16) == 1 )
    {
      v5 = *(uint *)(v2 + 20) + 768;
      *(uint *)(v2 + 20) = v5;
      if ( v5 >= 76800 )
        ++*(uchar *)(v2 + 16);
      result = ((int (__fastcall *)(uint, uint, uint, int))dword_225B158[0])(
                 *(uint *)(*(uint *)v2 + 16 * *(uchar *)(v2 + 17) + 3872),
                 *(uint *)(v2 + 20) >> 8,
                 *(uint *)(v2 + 24) >> 8,
                 v4);
    }
    else
    {
      ((void (__fastcall *)(uint))dword_225B020[0])(*(uint *)(*(uint *)v2
                                                                + 16 * *(uchar *)(v2 + 17)
                                                                + 3872));
      *(uint *)(*(uint *)v2 + 16 * *(uchar *)(v2 + 17) + 3872) = 0;
      Function_224f26c(*(uint *)(v2 + 12), v2 + 4);
      free(v2);
      result = Call_RemoveTaskFromTaskList(v3);
    }
  }
  else
  {
    *(uint *)(v2 + 20) = *(uint *)(*(uint *)v2 + 16 * *(uchar *)(v2 + 17) + 3876) << 8;
    *(uint *)(v2 + 24) = *(uint *)(*(uint *)v2 + 16 * *(uchar *)(v2 + 17) + 3880) << 8;
    result = *(uchar *)(v2 + 16) + 1;
    *(uchar *)(v2 + 16) = result;
  }
  return result;
}

//----- (02248258) --------------------------------------------------------
int __fastcall Function_2248258(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a1, 255, a3);
}

//----- (0224826C) --------------------------------------------------------
uint *__fastcall Function_224826c(int a1, int a2, ushort *a3)
{
  int v3;
  int v4;
  ushort *v5;
  int v6;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = malloc(0x16u, 24);
  MI_CpuFill8((ushort *)v6, 0, 0x18u);
  *(uint *)v6 = v4;
  *(ushort *)(v6 + 4) = *v5;
  *(ushort *)(v6 + 6) = v5[1];
  *(ushort *)(v6 + 8) = v5[2];
  *(ushort *)(v6 + 10) = v5[3];
  *(uint *)(v6 + 12) = v3;
  return AddTaskToTaskList1((int)Function_22482b0, v6, 0x7530u);
}

//----- (022482B0) --------------------------------------------------------
uint __fastcall Function_22482b0(int *a1, int a2)
{
  int *v2;
  int v3;
  char v4;
  int v5;
  char v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  short v14;
  int v15;
  int v16;
  uint result;
  uchar *v18;
  int v19;
  int j;
  int i;

  v2 = a1;
  v18 = (uchar *)a2;
  if ( *(uchar *)(a2 + 16) )
  {
    Function_224f26c(*(uint *)(a2 + 12), a2 + 4);
    free((int)v18);
    result = Call_RemoveTaskFromTaskList(v2);
  }
  else
  {
    v3 = *(char *)(a2 + 20);
    if ( v3 <= 0 )
    {
      v5 = *(char *)(a2 + 19);
      if ( v5 <= 0 )
      {
        *(uchar *)(a2 + 19) = 1;
        v7 = Function_2019fe4(*(uint *)(*(uint *)a2 + 48), 2);
        for ( i = 0; i < 4; ++i )
        {
          v8 = byte_2254468[(char)v18[17]];
          if ( v8 + i >= 0 )
          {
            v9 = v7 + ((v8 + i) << 6);
            v10 = 0;
            v19 = 0;
            v11 = (ushort)a08[(uchar)v18[18]] + 32 * i;
            while ( v19 < 4 )
            {
              v12 = 0;
              while ( v12 < 8 )
              {
                v13 = 2 * (v10 + v12);
                *(ushort *)(v9 + v13) &= 0xFC00u;
                v14 = v11 + v12++;
                *(ushort *)(v9 + v13) |= v14;
              }
              v10 += 8;
              ++v19;
            }
          }
        }
        v15 = (char)v18[17];
        if ( v15 > 0 && !v18[18] )
        {
          v16 = v7 + (byte_2254468[v15 - 1] << 6);
          for ( j = 0; j < 32; ++j )
            *(ushort *)(v16 + 2 * j) &= 0xFC00u;
        }
        Function_201c3c0(*(uint *)(*(uint *)v18 + 48), 2);
        result = (uchar)++v18[18];
        if ( result >= 0xC )
        {
          v18[18] = 0;
          ++v18[17];
          v18[20] = 0;
          result = (char)v18[17];
          if ( result >= 5 )
          {
            result = (uint)v18;
            ++v18[16];
          }
        }
      }
      else
      {
        v6 = v5 - 1;
        result = (uint)v18;
        v18[19] = v6;
      }
    }
    else
    {
      v4 = v3 - 1;
      result = (uint)v18;
      v18[20] = v4;
    }
  }
  return result;
}

//----- (0224840C) --------------------------------------------------------
int __fastcall Function_224840c(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a1, 255, a3);
}

//----- (02248420) --------------------------------------------------------
uint *__fastcall Function_2248420(int a1, int a2, ushort *a3)
{
  int v3;
  int v4;
  ushort *v5;
  int v6;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = malloc(0x16u, 24);
  MI_CpuFill8((ushort *)v6, 0, 0x18u);
  *(uint *)v6 = v4;
  *(ushort *)(v6 + 4) = *v5;
  *(ushort *)(v6 + 6) = v5[1];
  *(ushort *)(v6 + 8) = v5[2];
  *(ushort *)(v6 + 10) = v5[3];
  *(uint *)(v6 + 12) = v3;
  return AddTaskToTaskList1((int)Function_2248464, v6, 0x7530u);
}

//----- (02248464) --------------------------------------------------------
uint __fastcall Function_2248464(int *a1, int a2)
{
  int *v2;
  int v3;
  char v4;
  int v5;
  char v6;
  int v7;
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
  uint result;
  uchar *v19;
  int v20;
  uint j;
  int i;

  v2 = a1;
  v19 = (uchar *)a2;
  if ( *(uchar *)(a2 + 16) )
  {
    Function_224f26c(*(uint *)(a2 + 12), a2 + 4);
    free((int)v19);
    result = Call_RemoveTaskFromTaskList(v2);
  }
  else
  {
    v3 = *(char *)(a2 + 20);
    if ( v3 <= 0 )
    {
      v5 = *(char *)(a2 + 19);
      if ( v5 <= 0 )
      {
        *(uchar *)(a2 + 19) = 1;
        v7 = Function_2019fe4(*(uint *)(*(uint *)a2 + 48), 2);
        for ( i = 0; i < 4; ++i )
        {
          v8 = byte_2254468[4 - (char)v19[17]];
          if ( v8 + i >= 0 )
          {
            v9 = v7 + ((v8 + i) << 6);
            v10 = 0;
            v20 = 0;
            v11 = (ushort)a08[11 - (uchar)v19[18]] + 32 * i;
            while ( v20 < 4 )
            {
              v12 = 0;
              while ( v12 < 8 )
              {
                v13 = 2 * (v10 + v12);
                *(ushort *)(v9 + v13) &= 0xFC00u;
                v14 = v11 + v12++;
                *(ushort *)(v9 + v13) |= v14;
              }
              v10 += 8;
              ++v20;
            }
          }
        }
        v15 = (char)v19[17];
        if ( v15 > 0 && !v19[18] )
        {
          v16 = v7 + ((byte_2254468[5 - v15] + 3) << 6);
          for ( j = 0; (int)j < 32; ++j )
          {
            v17 = 2 * j;
            *(ushort *)(v16 + v17) = *(ushort *)(v16 + 2 * j) & 0xFC00;
            *(ushort *)(v16 + v17) = ((j >> 31) + __ROR4__((j << 29) - (j >> 31), 29) + 512) | *(ushort *)(v16 + 2 * j);
          }
        }
        Function_201c3c0(*(uint *)(*(uint *)v19 + 48), 2);
        result = (uchar)++v19[18];
        if ( result >= 0xC )
        {
          v19[18] = 0;
          ++v19[17];
          v19[20] = 0;
          result = (char)v19[17];
          if ( result >= 5 )
          {
            result = (uint)v19;
            ++v19[16];
          }
        }
      }
      else
      {
        v6 = v5 - 1;
        result = (uint)v19;
        v19[19] = v6;
      }
    }
    else
    {
      v4 = v3 - 1;
      result = (uint)v19;
      v19[20] = v4;
    }
  }
  return result;
}

//----- (022485E8) --------------------------------------------------------
int __fastcall Function_22485e8(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a1, 255, a3);
}

//----- (022485FC) --------------------------------------------------------
uint *__fastcall Function_22485fc(int a1, int a2, ushort *a3, uchar *a4)
{
  int v4;
  int v5;
  ushort *v6;
  uchar *v7;
  int v8;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = malloc(0x16u, 28);
  MI_CpuFill8((ushort *)v8, 0, 0x1Cu);
  *(uint *)v8 = v5;
  *(ushort *)(v8 + 4) = *v6;
  *(ushort *)(v8 + 6) = v6[1];
  *(ushort *)(v8 + 8) = v6[2];
  *(ushort *)(v8 + 10) = v6[3];
  *(uint *)(v8 + 12) = v4;
  *(uchar *)(v8 + 17) = *v7;
  return AddTaskToTaskList1((int)Function_2248648, v8, 0x7530u);
}

//----- (02248648) --------------------------------------------------------
int __fastcall Function_2248648(int *a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;

  v4 = a2;
  v5 = a1;
  if ( *(uchar *)(a2 + 16) )
  {
    if ( *(uchar *)(a2 + 16) != 1 )
    {
      Function_224f26c(*(uint *)(a2 + 12), a2 + 4);
      free(v4);
      return Call_RemoveTaskFromTaskList(v5);
    }
  }
  else
  {
    Function_22478d0(*(uint *)a2, *(uchar *)(a2 + 17), a3, a4);
    *(uint *)(v4 + 20) = Function_20080c0(*(uint *)(*(uint *)v4 + 36), 0) << 8;
    *(uint *)(v4 + 24) = Function_20080c0(*(uint *)(*(uint *)v4 + 36), 1u) << 8;
    ++*(uchar *)(v4 + 16);
  }
  v6 = *(uint *)(v4 + 20) - 1024;
  *(uint *)(v4 + 20) = v6;
  if ( v6 <= 58880 )
  {
    *(uint *)(v4 + 20) = 58880;
    ++*(uchar *)(v4 + 16);
  }
  Function_2007dec(*(uint *)(*(uint *)v4 + 36), 0, *(uint *)(v4 + 20) / 256);
  return Function_2007dec(*(uint *)(*(uint *)v4 + 36), 1u, *(uint *)(v4 + 24) / 256);
}

//----- (022486E4) --------------------------------------------------------
int __fastcall Function_22486e4(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a1, 255, a3);
}

//----- (022486F8) --------------------------------------------------------
uint *__fastcall Function_22486f8(int a1, int a2, ushort *a3, uchar *a4)
{
  int v4;
  int v5;
  ushort *v6;
  uchar *v7;
  int v8;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = malloc(0x16u, 28);
  MI_CpuFill8((ushort *)v8, 0, 0x1Cu);
  *(uint *)v8 = v5;
  *(ushort *)(v8 + 4) = *v6;
  *(ushort *)(v8 + 6) = v6[1];
  *(ushort *)(v8 + 8) = v6[2];
  *(ushort *)(v8 + 10) = v6[3];
  *(uint *)(v8 + 12) = v4;
  *(uchar *)(v8 + 17) = *v7;
  return AddTaskToTaskList1((int)Function_2248744, v8, 0x7530u);
}

//----- (02248744) --------------------------------------------------------
int __fastcall Function_2248744(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;

  v2 = a2;
  v3 = a1;
  if ( *(uchar *)(a2 + 16) )
  {
    if ( *(uchar *)(a2 + 16) != 1 )
    {
      Function_2247918(*(uint *)a2);
      Function_224f26c(*(uint *)(v2 + 12), v2 + 4);
      free(v2);
      return Call_RemoveTaskFromTaskList(v3);
    }
  }
  else
  {
    if ( !*(uint *)(*(uint *)a2 + 36) )
      ErrorHandler();
    *(uint *)(v2 + 20) = Function_20080c0(*(uint *)(*(uint *)v2 + 36), 0) << 8;
    *(uint *)(v2 + 24) = Function_20080c0(*(uint *)(*(uint *)v2 + 36), 1u) << 8;
    ++*(uchar *)(v2 + 16);
  }
  v4 = *(uint *)(v2 + 20) + 1024;
  *(uint *)(v2 + 20) = v4;
  if ( v4 >= 81920 )
  {
    *(uint *)(v2 + 20) = 81920;
    ++*(uchar *)(v2 + 16);
  }
  Function_2007dec(*(uint *)(*(uint *)v2 + 36), 0, *(uint *)(v2 + 20) / 256);
  return Function_2007dec(*(uint *)(*(uint *)v2 + 36), 1u, *(uint *)(v2 + 24) / 256);
}

//----- (022487E8) --------------------------------------------------------
int __fastcall Function_22487e8(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a1, 255, a3);
}

//----- (022487FC) --------------------------------------------------------
uint *__fastcall Function_22487fc(int a1, int a2, ushort *a3, uchar *a4)
{
  int v4;
  int v5;
  ushort *v6;
  uchar *v7;
  int v8;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = malloc(0x16u, 88);
  MI_CpuFill8((ushort *)v8, 0, 0x58u);
  *(uint *)v8 = v5;
  *(ushort *)(v8 + 4) = *v6;
  *(ushort *)(v8 + 6) = v6[1];
  *(ushort *)(v8 + 8) = v6[2];
  *(ushort *)(v8 + 10) = v6[3];
  *(uint *)(v8 + 12) = v4;
  *(uchar *)(v8 + 17) = *v7;
  *(uint *)(v8 + 44) = v5;
  *(uint *)(v8 + 56) = v5;
  *(uchar *)(v8 + 70) = *v7;
  *(uint *)(v8 + 72) = v5;
  *(uint *)(v8 + 36) = *(uint *)(*(uint *)(v5 + 12) + 4 * (uchar)*v7);
  return AddTaskToTaskList1((int)Function_2248860, v8, 0x7530u);
}

//----- (02248860) --------------------------------------------------------
int __fastcall Function_2248860(int *a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  int result;
  char v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v13 = a4;
  v4 = a2;
  v5 = a1;
  v6 = *(uchar *)(a2 + 16);
  if ( *(uchar *)(a2 + 16) )
  {
    if ( v6 == 1 )
    {
      result = *(uchar *)(a2 + 53);
      if ( result == 1 )
      {
        AddTaskToTaskList1((int)Function_22489c8, a2 + 20, 0x753Au);
        AddTaskToTaskList1((int)Function_2248aa4, v4 + 56, 0x753Au);
        result = *(uchar *)(v4 + 16) + 1;
        *(uchar *)(v4 + 16) = result;
      }
    }
    else if ( v6 == 2 )
    {
      result = *(uchar *)(a2 + 41);
      if ( result == 1 )
      {
        result = *(uchar *)(a2 + 69);
        if ( result == 1 )
        {
          result = *(uchar *)(a2 + 85);
          if ( result == 1 )
          {
            Function_2005748(0x6E5u);
            result = *(uchar *)(v4 + 16) + 1;
            *(uchar *)(v4 + 16) = result;
          }
        }
      }
    }
    else
    {
      Function_224f26c(*(uint *)(a2 + 12), a2 + 4);
      free(v4);
      result = Call_RemoveTaskFromTaskList(v5);
    }
  }
  else
  {
    AddTaskToTaskList1((int)Function_2248a24, a2 + 44, 0x753Au);
    AddTaskToTaskList1((int)Function_2248be0, v4 + 72, 0x753Au);
    v7 = Function_20765b8(*(uint *)(*(uint *)(*(uint *)(v4 + 56) + 12) + 4 * *(uchar *)(v4 + 70)), 2u);
    MI_CpuFill8(&v9, 0, 0x10u);
    v12 = 22;
    v10 = 128;
    v11 = v7 + 64;
    *(uint *)(*(uint *)(v4 + 56) + 16 * *(uchar *)(v4 + 70) + 3872) = ((int (__fastcall *)(char *, uint))dword_225AFD4[0])(
                                                                                      &v9,
                                                                                      *(uint *)(**(uint **)(v4 + 56)
                                                                                                + 4
                                                                                                * *(uchar *)(v4 + 70)
                                                                                                + 248));
    ((void (__fastcall *)(uint, uint))dword_225B074[0])(
      *(uint *)(*(uint *)(v4 + 56) + 16 * *(uchar *)(v4 + 70) + 3872),
      0);
    result = *(uchar *)(v4 + 16) + 1;
    *(uchar *)(v4 + 16) = result;
  }
  return result;
}

//----- (02248990) --------------------------------------------------------
int __fastcall Function_2248990(int result)
{
  *(uint *)(result + 40) = *(uint *)(**(uint **)(result + 32) + 4);
  *(uint *)(result + 44) = *(uint *)(**(uint **)(result + 32) + 8);
  *(uint *)(result + 48) = *(uint *)(**(uint **)(result + 32) + 12);
  return result;
}

//----- (022489C8) --------------------------------------------------------
int __fastcall Function_22489c8(int *a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  if ( *(uchar *)(a2 + 20) )
  {
    if ( *(uchar *)(a2 + 20) == 1 )
    {
      result = ((int (__fastcall *)(uint))dword_223361C[2922])(*(uint *)(a2 + 12));
      if ( !result )
      {
        ((void (__fastcall *)(uint))dword_223361C[2947])(*(uint *)(v2 + 12));
        result = *(uchar *)(v2 + 20) + 1;
        *(uchar *)(v2 + 20) = result;
      }
    }
    else
    {
      *(uchar *)(a2 + 21) = 1;
      result = Call_RemoveTaskFromTaskList(a1);
    }
  }
  else
  {
    *(uint *)a2 = 0;
    *(uint *)(a2 + 8) = *(uint *)(a2 + 16);
    *(uint *)(a2 + 12) = ((int (__fastcall *)(int))dword_223361C[2682])(22);
    ((void (*)(void))dword_223361C[2881])();
    ((void (__fastcall *)(uint, int (__fastcall *)(int)))dword_223361C[2906])(*(uint *)(v2 + 12), Function_2248990);
    result = *(uchar *)(v2 + 20) + 1;
    *(uchar *)(v2 + 20) = result;
  }
  return result;
}

//----- (02248A24) --------------------------------------------------------
uint __fastcall Function_2248a24(int *a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  uint result;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v15 = a4;
  v4 = a2;
  v5 = a1;
  v6 = *(uchar *)(a2 + 8);
  if ( *(uchar *)(a2 + 8) )
  {
    if ( v6 == 1 )
    {
      v8 = 14;
      v9 = 22;
      v10 = 0;
      v11 = 0;
      v13 = *(uint *)(*(uint *)a2 + 40);
      v14 = *(uint *)(*(uint *)a2 + 80);
      v12 = 1;
      *(uint *)(a2 + 4) = ((int (__fastcall *)(int *))dword_2236760[1010])(&v8);
      result = *(uchar *)(v4 + 8) + 1;
      *(uchar *)(v4 + 8) = result;
    }
    else if ( v6 != 2 || (result = ((int (__fastcall *)(uint))dword_2236760[1062])(*(uint *)(a2 + 4)), result != 1) )
    {
      ((void (__fastcall *)(uint))dword_2236760[1079])(*(uint *)(v4 + 4));
      *(uchar *)(v4 + 9) = 1;
      result = Call_RemoveTaskFromTaskList(v5);
    }
  }
  else
  {
    result = (uchar)++*(uchar *)(a2 + 10);
    if ( result >= 1 )
    {
      *(uchar *)(a2 + 10) = 0;
      result = *(uchar *)(a2 + 8) + 1;
      *(uchar *)(a2 + 8) = result;
    }
  }
  return result;
}

//----- (02248AA4) --------------------------------------------------------
int __fastcall Function_2248aa4(int *a1, uchar *a2)
{
  uchar *v2;
  int *v3;
  int v4;
  uint *v5;
  ushort v6;
  uchar v7;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = Function_20765b8(*(uint *)(*(uint *)(*(uint *)a2 + 12) + 4 * a2[14]), 2u);
  if ( v2[12] )
  {
    if ( v2[12] != 1 )
    {
      v2[13] = 1;
      return Call_RemoveTaskFromTaskList(v3);
    }
  }
  else
  {
    *((uint *)v2 + 1) = 0;
    *((uint *)v2 + 2) = 0;
    ((void (__fastcall *)(uint))dword_225B0EC[0])(*(uint *)(*(uint *)v2 + 16 * v2[14] + 3872));
    *(uint *)(*(uint *)v2 + 16 * v2[14] + 3876) = 128;
    *(uint *)(*(uint *)v2 + 16 * v2[14] + 3880) = 104;
    ((void (__fastcall *)(uint, int))dword_225B074[0])(*(uint *)(*(uint *)v2 + 16 * v2[14] + 3872), 1);
    ++v2[12];
  }
  *((uint *)v2 + 1) += 512;
  *((uint *)v2 + 2) += 512;
  if ( *((uint *)v2 + 1) >= 4096 )
  {
    *((uint *)v2 + 1) = 4096;
    *((uint *)v2 + 2) = 4096;
  }
  ((void (__fastcall *)(uint, uint, uint, int))dword_225B0EC[0])(
    *(uint *)(*(uint *)v2 + 16 * v2[14] + 3872),
    *((uint *)v2 + 1),
    *((uint *)v2 + 2),
    4096);
  v5 = (uint *)(*(uint *)v2 + 16 * v2[14]);
  ((void (__fastcall *)(uint, uint, uint, int))dword_225B158[0])(v5[968], v5[969], v5[970], v4);
  result = 4096;
  if ( *((uint *)v2 + 1) >= 4096 )
  {
    v6 = GetPkmnData(*(int **)(*(uint *)(*(uint *)v2 + 12) + 4 * v2[14]), 5u, 0);
    v7 = GetPkmnData(*(int **)(*(uint *)(*(uint *)v2 + 12) + 4 * v2[14]), 0x70u, 0);
    Function_2077d3c(*(uint *)(**(uint **)v2 + 4 * v2[14] + 348), 0, v6, v7, 0, 0x7Fu, 0, 22);
    result = v2[12] + 1;
    v2[12] = result;
  }
  return result;
}

//----- (02248BE0) --------------------------------------------------------
uint __fastcall Function_2248be0(int *a1, int *a2)
{
  int *v2;
  int *v3;
  uint v4;
  uint result;
  int v6;
  int v7;

  v2 = a2;
  v3 = a1;
  v4 = *((uchar *)a2 + 12);
  if ( v4 <= 4 )
    JUMPOUT(__CS__, *((short *)&off_2248BFA + v4) + 35949564);
  switch ( (uchar)v4 )
  {
    case 0:
      if ( !*(uint *)(*a2 + 36) )
        ErrorHandler();
      result = (uchar)++*((uchar *)v2 + 15);
      if ( result > 1 )
      {
        *((uchar *)v2 + 15) = 0;
        result = *((uchar *)v2 + 12) + 1;
        *((uchar *)v2 + 12) = result;
      }
      break;
    case 1:
      a2[1] = Function_20080c0(*(uint *)(*a2 + 36), 0) << 8;
      v2[2] = Function_20080c0(*(uint *)(*v2 + 36), 1u) << 8;
      ++*((uchar *)v2 + 12);
      goto LABEL_9;
    case 2:
LABEL_9:
      v6 = *v2;
      if ( *((uchar *)v2 + 14) & 1 )
      {
        Function_2007dec(*(uint *)(v6 + 36), 0, v2[1] / 256);
        Function_2007dec(*(uint *)(*v2 + 36), 1u, v2[2] / 256);
      }
      else
      {
        Function_2007dec(*(uint *)(v6 + 36), 0, v2[1] / 256);
        Function_2007dec(*(uint *)(*v2 + 36), 1u, v2[2] / 256 - 3);
      }
      result = (uchar)++*((uchar *)v2 + 14);
      if ( result >= 3 )
      {
        result = *((uchar *)v2 + 12) + 1;
        *((uchar *)v2 + 12) = result;
      }
      break;
    case 3:
      result = (uchar)++*((uchar *)a2 + 15);
      if ( result >= 7 )
      {
        *((uchar *)a2 + 15) = 0;
        result = *((uchar *)a2 + 12) + 1;
        *((uchar *)a2 + 12) = result;
      }
      break;
    case 4:
      v7 = a2[1] + 1024;
      v2[1] = v7;
      if ( v7 >= 81920 )
      {
        v2[1] = 81920;
        ++*((uchar *)v2 + 12);
      }
      Function_2007dec(*(uint *)(*v2 + 36), 0, v2[1] / 256);
      result = Function_2007dec(*(uint *)(*v2 + 36), 1u, v2[2] / 256);
      break;
    default:
      Function_2247918(*a2);
      *((uchar *)v2 + 13) = 1;
      result = Call_RemoveTaskFromTaskList(v3);
      break;
  }
  return result;
}

//----- (02248D28) --------------------------------------------------------
int __fastcall Function_2248d28(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a1, 255, a3);
}

//----- (02248D3C) --------------------------------------------------------
uint *__fastcall Function_2248d3c(int a1, int a2, ushort *a3, uchar *a4)
{
  int v4;
  int v5;
  ushort *v6;
  uchar *v7;
  int v8;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = malloc(0x16u, 28);
  MI_CpuFill8((ushort *)v8, 0, 0x1Cu);
  *(uint *)v8 = v5;
  *(ushort *)(v8 + 4) = *v6;
  *(ushort *)(v8 + 6) = v6[1];
  *(ushort *)(v8 + 8) = v6[2];
  *(ushort *)(v8 + 10) = v6[3];
  *(uint *)(v8 + 12) = v4;
  *(uchar *)(v8 + 17) = *v7;
  *(uchar *)(v8 + 19) = v7[3];
  *(uchar *)(v8 + 20) = v7[4];
  *(uchar *)(v8 + 21) = v7[5];
  *(uchar *)(v8 + 22) = v7[6];
  *(uchar *)(v8 + 23) = v7[7];
  *(uchar *)(v8 + 25) = v7[9];
  *(uchar *)(v8 + 24) = v7[8];
  return AddTaskToTaskList1((int)Function_2248da4, v8, 0x7530u);
}

//----- (02248DA4) --------------------------------------------------------
uint __fastcall Function_2248da4(int *a1, int a2)
{
  uchar *v2;
  int *v3;
  int v4;
  uint result;

  v2 = (uchar *)a2;
  v3 = a1;
  v4 = *(uchar *)(a2 + 16);
  if ( *(uchar *)(a2 + 16) )
  {
    if ( v4 == 1 )
    {
      result = Function_2247a3c(*(uint *)a2);
      if ( !result )
      {
        result = v2[16] + 1;
        v2[16] = result;
      }
    }
    else if ( v4 == 2 )
    {
      ++*(uchar *)(a2 + 18);
      if ( *(uchar *)(a2 + 25) == 1 )
      {
        result = *(uchar *)(a2 + 16) + 1;
        *(uchar *)(a2 + 16) = result;
      }
      else
      {
        result = *(uchar *)(a2 + 24);
        if ( *(uchar *)(a2 + 18) >= result )
        {
          Function_200e084(*(uint *)a2 + 52, 1);
          Function_201c3c0(*(uint *)(*(uint *)v2 + 48), 1);
          result = v2[16] + 1;
          v2[16] = result;
        }
      }
    }
    else
    {
      Function_224f26c(*(uint *)(a2 + 12), a2 + 4);
      free((int)v2);
      result = Call_RemoveTaskFromTaskList(v3);
    }
  }
  else if ( *(uchar *)(a2 + 23) )
  {
    Function_200e060(*(uint *)a2 + 52, 1, 1, 0xEu);
    Function_201c3c0(*(uint *)(*(uint *)v2 + 48), 1);
    Function_2247a08(*(uint *)v2, v2[23], v2 + 19);
    result = v2[16] + 1;
    v2[16] = result;
  }
  else
  {
    result = 100;
    *(uchar *)(a2 + 16) = 100;
  }
  return result;
}

//----- (02248E58) --------------------------------------------------------
int __fastcall Function_2248e58(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a1, 255, a3);
}

//----- (02248E6C) --------------------------------------------------------
uint *__fastcall Function_2248e6c(int a1, int a2, ushort *a3, uchar *a4)
{
  int v4;
  int v5;
  ushort *v6;
  uchar *v7;
  int v8;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = malloc(0x16u, 24);
  MI_CpuFill8((ushort *)v8, 0, 0x18u);
  *(uint *)v8 = v5;
  *(ushort *)(v8 + 4) = *v6;
  *(ushort *)(v8 + 6) = v6[1];
  *(ushort *)(v8 + 8) = v6[2];
  *(ushort *)(v8 + 10) = v6[3];
  *(uint *)(v8 + 12) = v4;
  *(uchar *)(v8 + 17) = v7[10];
  *(uchar *)(v8 + 18) = v7[11];
  *(uchar *)(v8 + 19) = v7[12];
  return AddTaskToTaskList1((int)Function_2248ec4, v8, 0x7530u);
}

//----- (02248EC4) --------------------------------------------------------
int __fastcall Function_2248ec4(int *a1, uchar *a2)
{
  uchar *v2;
  int *v3;
  int result;

  v2 = a2;
  v3 = a1;
  if ( a2[16] )
  {
    if ( a2[16] == 1 )
    {
      result = Function_200ac1c(1);
      if ( result == 1 )
      {
        Function_20038b0(*(uint *)(*(uint *)v2 + 80), 0, 0, 0, 0, 0xD0u);
        Function_20038b0(*(uint *)(*(uint *)v2 + 80), 2, 0, 0, 0, 0xE0u);
        result = v2[16] + 1;
        v2[16] = result;
      }
    }
    else
    {
      Function_224f26c(*((uint *)a2 + 3), a2 + 4);
      free((int)v2);
      result = Call_RemoveTaskFromTaskList(v3);
    }
  }
  else
  {
    if ( *(uchar *)(**(uint **)a2 + 369) == 1 )
    {
      WIN_IN = WIN_IN & 0xC0FF | 0x1F00;
      WIN_OUT = WIN_OUT & 0xFFC0 | 0x3F;
      REG_DISPCNT = REG_DISPCNT & 0xFFFF1FFF | 0x4000;
      *(uchar *)(*(uint *)a2 + 3940) = -16;
      *(uchar *)(*(uint *)a2 + 3941) = 0;
      *(uchar *)(*(uint *)a2 + 3942) = -1;
      *(uchar *)(*(uint *)a2 + 3943) = 16;
    }
    Function_200aae0(a2[19], (char)a2[18], (char)a2[17], 61, 1);
    result = v2[16] + 1;
    v2[16] = result;
  }
  return result;
}

//----- (02248FBC) --------------------------------------------------------
int __fastcall Function_2248fbc(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a1, 255, a3);
}

//----- (02248FD0) --------------------------------------------------------
uint *__fastcall Function_2248fd0(int a1, int a2, ushort *a3)
{
  int v3;
  int v4;
  ushort *v5;
  int v6;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = malloc(0x16u, 28);
  MI_CpuFill8((ushort *)v6, 0, 0x1Cu);
  *(uint *)v6 = v4;
  *(ushort *)(v6 + 4) = *v5;
  *(ushort *)(v6 + 6) = v5[1];
  *(ushort *)(v6 + 8) = v5[2];
  *(ushort *)(v6 + 10) = v5[3];
  *(uint *)(v6 + 12) = v3;
  return AddTaskToTaskList1((int)Function_2249014, v6, 0x7530u);
}

//----- (02249014) --------------------------------------------------------
uint __fastcall Function_2249014(int *a1, int a2)
{
  int *v2;
  int v3;
  bool v4;
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
  int v15;
  uint result;
  int v17;
  int v18;
  int j;
  int i;

  v2 = a1;
  v17 = a2;
  v3 = *(uint *)(a2 + 24) + 1;
  *(uint *)(v17 + 24) = v3;
  if ( v3 == 30 )
  {
    *(uchar *)(v17 + 19) = 30;
    *(uchar *)(v17 + 21) = 1;
  }
  if ( !*(uchar *)(**(uint **)v17 + 369) && *(uint *)(v17 + 24) < 30 && (dword_21BF6C4 & 1 || word_21BF6DC) )
  {
    *(uint *)(v17 + 24) = 30;
    v4 = 0;
    *(uchar *)(v17 + 19) = 0;
    *(uchar *)(v17 + 21) = 1;
  }
  else
  {
    v4 = *(uint *)(v17 + 24) <= 30;
  }
  if ( *(uchar *)(v17 + 16) )
  {
    REG_BLDCNT = 0;
    REG_DISPCNT &= 0xFFFF1FFF;
    Function_224f26c(*(uint *)(v17 + 12), v17 + 4);
    free(v17);
    result = Call_RemoveTaskFromTaskList(v2);
  }
  else
  {
    v5 = *(char *)(v17 + 20);
    if ( v5 <= 0 )
    {
      v6 = *(char *)(v17 + 19);
      if ( v6 <= 0 )
      {
        *(uchar *)(v17 + 19) = v4;
        if ( *(uchar *)(v17 + 21) == 1 )
        {
          Function_2005748(0x6EDu);
          *(uchar *)(v17 + 21) = 0;
        }
        v7 = Function_2019fe4(*(uint *)(*(uint *)v17 + 48), 2);
        for ( i = 0; i < 4; ++i )
        {
          v8 = byte_2254468[*(char *)(v17 + 17)];
          if ( v8 + i >= 0 )
          {
            v9 = 0;
            v18 = 0;
            v10 = (ushort)a08[*(uchar *)(v17 + 18)] + 32 * i;
            while ( v18 < 4 )
            {
              v11 = 0;
              while ( v11 < 8 )
              {
                v12 = 2 * (v9 + v11);
                *(ushort *)(v7 + ((v8 + i) << 6) + v12) &= 0xFC00u;
                v13 = v10 + v11++;
                *(ushort *)(v7 + ((v8 + i) << 6) + v12) |= v13;
              }
              v9 += 8;
              ++v18;
            }
          }
        }
        v14 = *(char *)(v17 + 17);
        if ( v14 > 0 && !*(uchar *)(v17 + 18) )
        {
          v15 = v7 + (byte_2254468[*(char *)(v17 + 17) - 1] << 6);
          for ( j = 0; j < 32; ++j )
            *(ushort *)(v15 + 2 * j) &= 0xFC00u;
        }
        Function_201c3c0(*(uint *)(*(uint *)v17 + 48), 2);
        *(uchar *)(*(uint *)v17 + 3939) = 8 * (byte_2254468[*(char *)(v17 + 17)] + 4)
                                          - u32_div_f(32 * *(uchar *)(v17 + 18), 12);
        if ( !*(uchar *)(*(uint *)v17 + 3939) )
        {
          REG_BLDCNT = 0;
          REG_DISPCNT &= 0xFFFF1FFF;
        }
        result = (uchar)++*(uchar *)(v17 + 18);
        if ( result >= 0xC )
        {
          *(uchar *)(v17 + 18) = 0;
          ++*(uchar *)(v17 + 17);
          *(uchar *)(v17 + 20) = 0;
          result = *(char *)(v17 + 17);
          if ( result >= 5 )
          {
            result = v17;
            ++*(uchar *)(v17 + 16);
          }
        }
      }
      else
      {
        result = v17;
        *(uchar *)(v17 + 19) = v6 - 1;
      }
    }
    else
    {
      result = v17;
      *(uchar *)(v17 + 20) = v5 - 1;
    }
  }
  return result;
}

//----- (0224924C) --------------------------------------------------------
int __fastcall Function_224924c(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a1, 255, a3);
}

//----- (02249260) --------------------------------------------------------
uint *__fastcall Function_2249260(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = malloc(0x16u, 20);
  MI_CpuFill8((ushort *)v8, 0, 0x14u);
  *(uint *)v8 = v5;
  *(ushort *)(v8 + 4) = *v6;
  *(ushort *)(v8 + 6) = v6[1];
  *(ushort *)(v8 + 8) = v6[2];
  *(ushort *)(v8 + 10) = v6[3];
  *(uint *)(v8 + 12) = v4;
  Function_2005748(*(ushort *)(v7 + 16));
  return AddTaskToTaskList1((int)Function_22492ac, v8, 0x7530u);
}

//----- (022492AC) --------------------------------------------------------
int __fastcall Function_22492ac(int *a1, int *a2)
{
  int v2;
  int *v3;
  int v4;
  int result;

  v2 = (int)a2;
  v3 = a1;
  v4 = *a2;
  result = *(uchar *)(v4 + 1273);
  if ( !*(uchar *)(v4 + 1273) )
  {
    Function_224f26c(*(uint *)(v2 + 12), v2 + 4);
    free(v2);
    result = Call_RemoveTaskFromTaskList(v3);
  }
  return result;
}

//----- (022492DC) --------------------------------------------------------
int Function_22492dc()
{
  int v0;

  v0 = malloc(0x17u, 244);
  MI_CpuFill8((ushort *)v0, 0, 0xF4u);
  *(uchar *)(v0 + 150) = -1;
  return v0;
}

//----- (02249300) --------------------------------------------------------
void __fastcall Function_2249300(uint *a1)
{
  uint v1;
  int *v2;
  uint *v3;

  v1 = 0;
  v2 = dword_22545C0;
  v3 = a1;
  do
  {
    Function_20183c4(v3, (v1 + 4) & 0xFF, v2, 0);
    Function_2019ee0(v3, (v1 + 4) & 0xFF, 0);
    Function_2019184((int)v3, (v1 + 4) & 0xFF, 0, 0);
    Function_2019184((int)v3, (v1++ + 4) & 0xFF, 3u, 0);
    v2 += 7;
  }
  while ( v1 < 4 );
}

//----- (02249358) --------------------------------------------------------
int __fastcall Function_2249358(int a1)
{
  uint v1;
  int v2;
  int result;

  v1 = 0;
  v2 = a1;
  do
  {
    Function_2019120((v1 + 4) & 0xFF, 0);
    result = Function_2019044(v2, (v1++ + 4) & 0xFF);
  }
  while ( v1 < 4 );
  return result;
}

//----- (02249380) --------------------------------------------------------
uint *__fastcall Function_2249380(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;
  uint *v5;

  v2 = a1;
  v3 = a2;
  v4 = (uint *)Function_22492dc();
  v5 = v4;
  *v4 = v2;
  v4[1] = v3;
  v4[6] = Function_2012744(6, 0x17u);
  Function_22493dc(v5);
  return v5;
}

//----- (022493A4) --------------------------------------------------------
uint __fastcall Function_22493a4(int a1)
{
  int v1;

  v1 = a1;
  Function_22495f8();
  Function_2249d3c(v1, 1);
  Function_20127bc(*(uint *)(v1 + 24));
  return free(v1);
}

//----- (022493C4) --------------------------------------------------------
int __fastcall Function_22493c4(int a1)
{
  int v1;

  v1 = a1;
  Function_2249828();
  Function_22498f4(v1);
  return Function_2249cfc(v1, 0);
}

//----- (022493DC) --------------------------------------------------------
uint __fastcall Function_22493dc(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v13;
  int v14;
  int v15;

  v15 = a4;
  v4 = a1;
  *(uint *)(a1 + 208) = malloc(0x17u, 24576);
  *(uint *)(v4 + 212) = malloc(0x17u, 24576);
  *(uint *)(v4 + 216) = malloc(0x17u, 6912);
  *(uint *)(v4 + 220) = malloc(0x17u, 2048);
  *(uint *)(v4 + 224) = malloc(0x17u, 2048);
  *(uint *)(v4 + 228) = malloc(0x17u, 2048);
  *(uint *)(v4 + 232) = malloc(0x17u, 2048);
  *(uint *)(v4 + 236) = malloc(0x17u, 512);
  *(uint *)(v4 + 240) = malloc(0x17u, 512);
  v5 = Function_2006f50(45, 9, 1, &v14, 23);
  MI_CpuCopy32(*(int **)(v14 + 20), *(uint **)(v4 + 208), 24576);
  free(v5);
  v6 = Function_2006f50(45, 18, 1, &v14, 23);
  MI_CpuCopy32(*(int **)(v14 + 20), *(uint **)(v4 + 212), 24576);
  free(v6);
  v7 = Function_2006f50(45, 16, 1, &v14, 23);
  MI_CpuCopy32(*(int **)(v14 + 20), *(uint **)(v4 + 216), 6912);
  free(v7);
  v8 = Function_2006f6c(45, 7, 1, &v13, 23);
  MI_CpuCopy32((int *)(v13 + 12), *(uint **)(v4 + 220), 2048);
  free(v8);
  v9 = Function_2006f6c(45, 8, 1, &v13, 23);
  MI_CpuCopy32((int *)(v13 + 12), *(uint **)(v4 + 224), 2048);
  free(v9);
  v10 = Function_2006f6c(45, 17, 1, &v13, 23);
  MI_CpuCopy32((int *)(v13 + 12), *(uint **)(v4 + 228), 2048);
  free(v10);
  v11 = Function_2006f6c(45, 28, 1, &v13, 23);
  MI_CpuCopy32((int *)(v13 + 12), *(uint **)(v4 + 232), 2048);
  free(v11);
  Function_20030e4(45, 31, 23, 512, 0, *(uint *)(v4 + 236));
  Function_20030e4(45, 38, 23, 32, 16 * *(uchar *)(**(uint **)(v4 + 4) + 287), *(uint *)(v4 + 236) + 64);
  return Function_20030e4(45, 33, 23, 512, 0, *(uint *)(v4 + 240));
}

//----- (022495F8) --------------------------------------------------------
uint __fastcall Function_22495f8(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint result;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    free(*(uint *)(v3 + 208));
    ++v2;
    v3 += 4;
  }
  while ( v2 < 3 );
  v4 = 0;
  v5 = v1;
  do
  {
    free(*(uint *)(v5 + 220));
    ++v4;
    v5 += 4;
  }
  while ( v4 < 4 );
  v6 = 0;
  do
  {
    result = free(*(uint *)(v1 + 236));
    ++v6;
    v1 += 4;
  }
  while ( v6 < 2 );
  return result;
}

//----- (02249640) --------------------------------------------------------
uint *__fastcall Function_2249640(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int *v6;
  int v7;
  int *v8;
  int v9;
  int *v10;
  int v11;
  int v12;
  void (__fastcall *v13)(int, int, int);
  int v15;
  int v16;
  int v17;
  int *v18;

  v4 = a1;
  *(uint *)(a1 + 8) = a4;
  v16 = a3;
  v15 = a2;
  v17 = *(uint *)(*(uint *)(a1 + 4) + 96);
  v5 = *(char *)(a1 + 150);
  if ( v5 == -1 )
  {
    v16 = 1;
    v6 = 0;
  }
  else
  {
    v6 = &dword_2254578[9 * v5];
  }
  v18 = &dword_2254578[9 * a2];
  v7 = 0;
  v8 = &dword_2254578[9 * a2];
  do
  {
    Function_2019060((v7++ + 4) & 0xFF, v8[3] & 0xFF);
    v8 = (int *)((char *)v8 + 2);
  }
  while ( v7 < 4 );
  *(ushort *)(v4 + 148) = *(ushort *)v18;
  AddTaskToTaskList3((int)Function_224a088, v4, 8u);
  v9 = *((ushort *)v18 + 1);
  if ( v9 != 0xFFFF && (v16 == 1 || v9 != *((ushort *)v6 + 1)) )
    Function_2002fbc(*(uint *)(*(uint *)(v4 + 4) + 144), *(uint *)(v4 + 4 * v9 + 236), 1, 0, 0x200u);
  v10 = v18;
  v11 = 0;
  do
  {
    v12 = *((ushort *)v10 + 2);
    if ( v12 != 0xFFFF && (v16 == 1 || v12 != *((ushort *)v6 + 2)) )
    {
      Function_2019574(v17, (v11 + 4) & 0xFF, *(int **)(v4 + 4 * v12 + 220), 2048);
      Function_201c3c0(v17, v11 + 4);
    }
    ++v11;
    v10 = (int *)((char *)v10 + 2);
    v6 = (int *)((char *)v6 + 2);
  }
  while ( v11 < 4 );
  *(uchar *)(v4 + 150) = v15;
  Function_2249d3c(v4, 0);
  v13 = (void (__fastcall *)(int, int, int))v18[7];
  if ( v13 )
    v13(v4, v15, v16);
  return AddTaskToTaskList3((int)Function_224a038, v4, 0xAu);
}

//----- (02249760) --------------------------------------------------------
int __fastcall Function_2249760(int a1)
{
  int v1;
  int *v2;
  int v4;
  int v5;
  int (__fastcall *v6)(int, int);

  v1 = a1;
  if ( *(char *)(a1 + 150) == -1 )
    ErrorHandler();
  v2 = &dword_2254578[9 * *(char *)(v1 + 150)];
  if ( !v2[5] )
    return -1;
  if ( !v2[6] )
    ErrorHandler();
  v4 = Function_2022664((uchar *)v2[5]);
  if ( v4 == -1 && (int *)v2[6] == &dword_2254554 )
  {
    if ( dword_21BF6C4 & 0x11 )
    {
      v4 = 3;
    }
    else if ( dword_21BF6C4 & 0x82 )
    {
      v4 = 1;
    }
    else if ( dword_21BF6C4 & 0x440 )
    {
      v4 = 0;
    }
    else if ( dword_21BF6C4 & 0x820 )
    {
      v4 = 2;
    }
  }
  v5 = -1;
  if ( v4 != -1 )
    v5 = *(uint *)(v2[6] + 4 * v4);
  v6 = (int (__fastcall *)(int, int))v2[8];
  if ( v6 )
    v5 = v6(v1, v5);
  return v5;
}

//----- (02249804) --------------------------------------------------------
BOOL __fastcall Function_2249804(int a1)
{
  return *(uint *)(a1 + 12) == 0;
}

//----- (02249814) --------------------------------------------------------
int __fastcall Function_2249814(int a1)
{
  return *(char *)(a1 + 150);
}

//----- (0224981C) --------------------------------------------------------
int __fastcall Function_224981c(int a1)
{
  return Function_2249cfc(a1, 1);
}

//----- (02249828) --------------------------------------------------------
ushort *__fastcall Function_2249828(uint **a1)
{
  uint **v1;
  ushort **v2;
  int v3;
  int v4;
  ushort *v5;
  ushort *v6;
  int v7;
  int v8;

  v1 = a1;
  v2 = (ushort **)LoadFromMsgNARC(1, 26, 204, 0x17u);
  v3 = Function_2095848(
         *(uchar *)(*v1[1] + 288),
         *(uchar *)(*v1[1] + 289),
         *((uchar *)*v1 + 369));
  v4 = Function_20958c4(*(uchar *)(*v1[1] + 287), *(uchar *)(*v1[1] + 289));
  v5 = Function_200b1ec_CallMsgDecrypt(v2, v3);
  v6 = Function_200b1ec_CallMsgDecrypt(v2, v4);
  Function_2249bc4(v1, v1 + 7, v5);
  Function_2249bc4(v1, v1 + 12, v6);
  Function_20237bc_FreeMsg((int)v5, v7);
  Function_20237bc_FreeMsg((int)v6, v8);
  return Function_200b190((ushort *)v2);
}

//----- (022498E8) --------------------------------------------------------
int __fastcall Function_22498e8(int a1)
{
  return Function_2249cfc(a1, 1);
}

//----- (022498F4) --------------------------------------------------------
uint __fastcall Function_22498f4(int a1)
{
  ushort ***v1;
  ushort **v2;
  ushort *v3;
  int v4;
  ushort *v5;
  ushort *v6;
  ushort *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v13;

  v1 = *(ushort ****)(a1 + 4);
  v13 = a1;
  v2 = v1[33];
  if ( *((uchar *)v1 + *((uchar *)*v1 + 291) + 2748) == 1 )
    v3 = Function_200b1ec_CallMsgDecrypt(v1[33], 0);
  else
    v3 = Function_200b1ec_CallMsgDecrypt(v1[33], 1u);
  v4 = (int)v3;
  v5 = Function_200b1ec_CallMsgDecrypt(v2, 2u);
  v6 = Function_200b1ec_CallMsgDecrypt(v2, 3u);
  v7 = Function_200b1ec_CallMsgDecrypt(v2, 4u);
  Function_2249bc4(v13, v13 + 68, v4);
  Function_2249bc4(v13, v13 + 88, v5);
  Function_2249bc4(v13, v13 + 108, v6);
  Function_2249bc4(v13, v13 + 128, v7);
  Function_20237bc_FreeMsg(v4, v8);
  Function_20237bc_FreeMsg((int)v5, v9);
  Function_20237bc_FreeMsg((int)v6, v10);
  return Function_20237bc_FreeMsg((int)v7, v11);
}

//----- (02249A0C) --------------------------------------------------------
int __fastcall Function_2249a0c(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  char v5;

  v2 = a2;
  v3 = a1;
  switch ( (uchar)a2 + 1 )
  {
    case 1:
      v5 = 2;
      goto LABEL_7;
    case 2:
      v5 = 3;
      goto LABEL_7;
    case 3:
      v5 = 4;
      goto LABEL_7;
    case 4:
      v5 = 5;
LABEL_7:
      Function_2249d50(Function_2249da0, a1);
      *(uint *)(v3 + 184) = 2;
      *(uint *)(v3 + 188) = 2;
      *(uint *)(v3 + 192) = 2;
      *(ushort *)(v3 + 202) = 18;
      *(ushort *)(v3 + 200) = 45;
      *(uint *)(v3 + 160) = &dword_2254630[3 * v2];
      *(uint *)(v3 + 164) = &dword_2254660[3 * v2];
      *(uint *)(v3 + 168) = &dword_2254690[3 * v2];
      *(uint *)(v3 + 196) = v2;
      *(uchar *)(v3 + 204) = v5;
      result = v2;
      break;
    default:
      result = a2;
      break;
  }
  return result;
}

//----- (02249AAC) --------------------------------------------------------
int __fastcall Function_2249aac(int a1, uchar a2, int a3, int a4, ushort *a5, short a6)
{
  int v6;
  uchar v7;
  int v8;
  int v9;

  v6 = a1;
  v7 = a2;
  v8 = a4;
  v9 = malloc(0x17u, 32);
  MI_CpuFill8((ushort *)v9, 0, 0x20u);
  if ( v8 != -1 )
    *(uint *)(v9 + 12) = *(uint *)(v6 + 4 * v8 + 208);
  *(ushort *)(v9 + 28) = 32 * a6;
  *(ushort *)(v9 + 16) = *a5;
  *(ushort *)(v9 + 18) = a5[1];
  *(ushort *)(v9 + 20) = a5[2];
  *(ushort *)(v9 + 22) = a5[3];
  *(ushort *)(v9 + 24) = a5[4];
  *(ushort *)(v9 + 26) = a5[5];
  *(uint *)(v9 + 4) = Function_2019f28(v7);
  return v9;
}

//----- (02249B08) --------------------------------------------------------
uint *__fastcall Function_2249b08(int a1, uchar a2, int a3, int a4, ushort *a5, short a6)
{
  uint *v6;

  v6 = (uint *)Function_2249aac(a1, a2, a3, a4, a5, a6);
  *v6 = AddTaskToTaskList3((int)Function_224a0c8, (int)v6, 0x14u);
  return v6;
}

//----- (02249B30) --------------------------------------------------------
int __fastcall Function_2249b30(uint *a1)
{
  int v1;
  int v2;

  v1 = (int)a1;
  if ( *a1 )
    return 0;
  v2 = a1[2];
  if ( v2 )
    free(v2);
  free(v1);
  return 1;
}

//----- (02249B54) --------------------------------------------------------
int __fastcall Function_2249b54(ushort *a1)
{
  ushort *v1;
  int v2;
  int v3;
  int result;
  int v5;
  int v6;
  int v7;

  v1 = a1;
  v2 = 0;
  v7 = a1[14] * a1[11];
  v3 = a1[9] << 10;
  result = a1[13];
  if ( result > 0 )
  {
    v5 = 0;
    do
    {
      v6 = *((uint *)v1 + 3);
      if ( v6 )
        MIi_CpuCopy16(
          v6 + 32 * v1[10] + v7 + v1[14] * v2,
          *((uint *)v1 + 1) + 32 * v1[8] + v3 + v5,
          32 * v1[12],
          *((uint *)v1 + 1));
      else
        MIi_CpuClear16(0, *((uint *)v1 + 1) + 32 * v1[8] + v3 + v5, 32 * v1[12]);
      v5 += 1024;
      result = v1[13];
      ++v2;
    }
    while ( v2 < result );
  }
  return result;
}

//----- (02249BC4) --------------------------------------------------------
int __fastcall Function_2249bc4(int a1, int **a2, int a3, int a4, int a5, char a6, int a7, int a8, int a9, int a10)
{
  int **v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int *v16;
  int v17;
  int v18;
  uint *v19;
  int result;
  int v21;
  int v22;
  int v23;
  int v24;
  uint *v25;
  char v26;
  int v27;
  int *v28;
  char v29;
  int v30;
  char *v31;
  int v32;
  uchar *v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;

  v42 = a4;
  v10 = a2;
  v21 = a1;
  v22 = a3;
  v23 = a4;
  v11 = a8;
  if ( *a2 )
    ErrorHandler();
  v12 = *(uint *)(v21 + 4);
  v25 = *(uint **)(v12 + 96);
  v24 = *(uint *)(v12 + 92);
  v13 = Function_2002d7c(v23, v22, 0);
  v14 = v13 / 8;
  if ( Function_20bd140(v13, 8) )
    LOBYTE(v14) = v14 + 1;
  Function_201a7a0((int)&v29);
  Function_201a870(v25, (int)&v29, (uchar)v14, 2, 0, 0);
  Function_201d7e0((int)&v29, v23);
  v15 = Function_2012898((int)&v29, 2, 0x17u);
  Function_201ed94(v15, 1, 2, (int)&v26);
  if ( a10 == 1 )
    v11 = a8 - v13 / 2;
  v30 = *(uint *)(v21 + 24);
  v31 = &v29;
  v32 = Function_200d9b0(v24);
  v33 = Function_200d04c(v24, a7);
  v34 = 0;
  v35 = v27;
  v36 = v11;
  v37 = a9 + 248;
  v39 = 100;
  v40 = 2;
  v41 = 23;
  v38 = 0;
  v16 = Function_20127e8(&v30);
  Function_2012ac0(v16, a6);
  Function_20128c4(v16, v11, a9 + 248, v17);
  Function_201a8fc((int)&v29);
  *v10 = v16;
  v18 = v27;
  v19 = v10 + 1;
  *v19 = *(uint *)&v26;
  v19[1] = v18;
  result = (int)v28;
  v10[3] = v28;
  *((ushort *)v10 + 8) = v13;
  return result;
}

//----- (02249CD0) --------------------------------------------------------
int *__fastcall Function_2249cd0(int a1)
{
  int v1;
  int v2;
  int v3;
  int *result;

  v1 = a1;
  v2 = 0;
  v3 = a1 + 32;
  do
  {
    result = *(int **)(v1 + 28);
    if ( result )
    {
      Function_2012870(result);
      result = (int *)Function_201ee28(v3);
      *(uint *)(v1 + 28) = 0;
    }
    ++v2;
    v1 += 20;
    v3 += 20;
  }
  while ( v2 < 6 );
  return result;
}

//----- (02249CFC) --------------------------------------------------------
int __fastcall Function_2249cfc(int result, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  if ( a2 == 1 )
  {
    if ( *(uchar *)(result + 150) )
    {
      v3 = 2;
      v4 = 5;
    }
    else
    {
      v3 = 0;
      v4 = 1;
    }
  }
  else
  {
    v3 = 0;
    v4 = 5;
  }
  if ( v3 <= v4 )
  {
    v5 = result + 20 * v3;
    do
    {
      result = *(uint *)(v5 + 28);
      if ( result )
        result = Function_20129d0((uint *)result, v2);
      ++v3;
      v5 += 20;
    }
    while ( v3 <= v4 );
  }
  return result;
}

//----- (02249D3C) --------------------------------------------------------
int *__fastcall Function_2249d3c(int a1, int a2)
{
  int *result;

  if ( a2 == 1 )
    result = Function_2249cd0(a1);
  else
    result = (int *)Function_2249cfc(a1, 0);
  return result;
}

//----- (02249D50) --------------------------------------------------------
uint *__fastcall Function_2249d50(int a1, int a2)
{
  int v2;
  int v3;
  uint *result;

  v2 = a2;
  v3 = a1;
  if ( *(uint *)(a2 + 12) )
    ErrorHandler();
  MI_CpuFill8((ushort *)(v2 + 152), 0, 0x38u);
  result = AddTaskToTaskList1(v3, v2, 0x514u);
  *(uint *)(v2 + 12) = result;
  return result;
}

//----- (02249D80) --------------------------------------------------------
int *__fastcall Function_2249d80(int a1)
{
  int v1;
  int *result;

  v1 = a1;
  result = *(int **)(a1 + 12);
  if ( result )
  {
    Call_RemoveTaskFromTaskList(result);
    *(uint *)(v1 + 12) = 0;
    result = (int *)MI_CpuFill8((ushort *)(v1 + 152), 0, 0x38u);
  }
  return result;
}

//----- (02249DA0) --------------------------------------------------------
int __fastcall Function_2249da0(int a1, int a2, int a3, int a4)
{
  int v4;
  uint v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint **v10;
  int result;
  int v12;
  int v13;
  int v14;
  int v15;
  uint **v16;
  int v17;
  int v18;
  int v19;
  int v20;
  uint **v21;
  int v22;
  int v23;
  int v24;

  v24 = a4;
  v4 = a2;
  v5 = *(short *)(a2 + 152);
  if ( v5 <= 8 )
    JUMPOUT(__CS__, *((short *)&off_2249DBC + v5) + 35954110);
  switch ( (uchar)v5 )
  {
    case 0:
      *(uint *)(a2 + 156) = Function_2249b08(
                                a2,
                                4u,
                                *(ushort *)(a2 + 200),
                                *(uint *)(a2 + 184),
                                *(ushort **)(a2 + 160),
                                *(ushort *)(a2 + 202));
      Function_20129a4(*(uint *)(v4 + 20 * *(uchar *)(v4 + 204) + 28), &v23, &v22);
      Function_20128c4(*(uint **)(v4 + 20 * *(uchar *)(v4 + 204) + 28), v23, v22 + 16, v6);
      v8 = 0;
      v9 = v4;
      do
      {
        v10 = *(uint ***)(v9 + 172);
        if ( v10 )
          Function_200d5ac(*v10, 0, 16, v7);
        ++v8;
        v9 += 4;
      }
      while ( v8 < 3 );
      result = *(short *)(v4 + 152) + 1;
      *(ushort *)(v4 + 152) = result;
      break;
    case 1:
      result = Function_2249b30(*(uint **)(a2 + 156));
      if ( result )
      {
        ++*(ushort *)(v4 + 152);
        goto LABEL_11;
      }
      break;
    case 2:
LABEL_11:
      result = (short)++*(ushort *)(v4 + 154);
      if ( result > 2 )
      {
        *(ushort *)(v4 + 154) = 0;
        ++*(ushort *)(v4 + 152);
        goto LABEL_13;
      }
      break;
    case 3:
LABEL_13:
      *(uint *)(v4 + 156) = Function_2249b08(
                                v4,
                                4u,
                                *(ushort *)(v4 + 200),
                                *(uint *)(v4 + 188),
                                *(ushort **)(v4 + 164),
                                *(ushort *)(v4 + 202));
      Function_20129a4(*(uint *)(v4 + 20 * *(uchar *)(v4 + 204) + 28), &v23, &v22);
      Function_20128c4(*(uint **)(v4 + 20 * *(uchar *)(v4 + 204) + 28), v23, v22 - 4, v12);
      v14 = 0;
      v15 = v4;
      do
      {
        v16 = *(uint ***)(v15 + 172);
        if ( v16 )
          Function_200d5ac(*v16, 0, -4, v13);
        ++v14;
        v15 += 4;
      }
      while ( v14 < 3 );
      result = *(short *)(v4 + 152) + 1;
      *(ushort *)(v4 + 152) = result;
      break;
    case 4:
      result = Function_2249b30(*(uint **)(a2 + 156));
      if ( result )
      {
        ++*(ushort *)(v4 + 152);
        goto LABEL_21;
      }
      break;
    case 5:
LABEL_21:
      result = (short)++*(ushort *)(v4 + 154);
      if ( result > 2 )
      {
        *(ushort *)(v4 + 154) = 0;
        ++*(ushort *)(v4 + 152);
        goto LABEL_23;
      }
      break;
    case 6:
LABEL_23:
      *(uint *)(v4 + 156) = Function_2249b08(
                                v4,
                                4u,
                                *(ushort *)(v4 + 200),
                                *(uint *)(v4 + 192),
                                *(ushort **)(v4 + 168),
                                *(ushort *)(v4 + 202));
      Function_20129a4(*(uint *)(v4 + 20 * *(uchar *)(v4 + 204) + 28), &v23, &v22);
      Function_20128c4(*(uint **)(v4 + 20 * *(uchar *)(v4 + 204) + 28), v23, v22 - 12, v17);
      v19 = 0;
      v20 = v4;
      do
      {
        v21 = *(uint ***)(v20 + 172);
        if ( v21 )
          Function_200d5ac(*v21, 0, -12, v18);
        ++v19;
        v20 += 4;
      }
      while ( v19 < 3 );
      result = *(short *)(v4 + 152) + 1;
      *(ushort *)(v4 + 152) = result;
      break;
    case 7:
      result = Function_2249b30(*(uint **)(a2 + 156));
      if ( result )
      {
        ++*(ushort *)(v4 + 152);
        goto LABEL_30;
      }
      break;
    case 8:
LABEL_30:
      result = (short)++*(ushort *)(v4 + 154);
      if ( result > 2 )
      {
        *(ushort *)(v4 + 154) = 0;
        ++*(ushort *)(v4 + 152);
        goto LABEL_32;
      }
      break;
    default:
LABEL_32:
      result = (int)Function_2249d80(v4);
      break;
  }
  return result;
}

//----- (0224A038) --------------------------------------------------------
int __fastcall Function_224a038(int *a1, int a2)
{
  int v2;
  int *v3;
  int *v5;

  v5 = a1;
  v2 = 0;
  v3 = &dword_2254578[9 * *(char *)(a2 + 150)];
  do
  {
    if ( *((ushort *)v3 + 2) == 0xFFFF )
      Function_2019120((v2 + 4) & 0xFF, 0);
    else
      Function_2019120((v2 + 4) & 0xFF, 1);
    ++v2;
    v3 = (int *)((char *)v3 + 2);
  }
  while ( v2 < 4 );
  return Call_RemoveTaskFromTaskList(v5);
}

//----- (0224A088) --------------------------------------------------------
int __fastcall Function_224a088(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;

  v2 = a2;
  v3 = a1;
  v4 = *(ushort *)(a2 + 148);
  if ( v4 != 0xFFFF )
  {
    Function_201958c(*(uint **)(*(uint *)(a2 + 4) + 96), 4u, *(int **)(a2 + 4 * v4 + 208), 24576, 0);
    *(ushort *)(v2 + 148) = -1;
  }
  return Call_RemoveTaskFromTaskList(v3);
}

//----- (0224A0C8) --------------------------------------------------------
int __fastcall Function_224a0c8(int *a1, ushort *a2)
{
  ushort *v2;
  int *v3;

  v2 = a2;
  v3 = a1;
  Function_2249b54(a2);
  *(uint *)v2 = 0;
  return Call_RemoveTaskFromTaskList(v3);
}

//----- (0224A0E0) --------------------------------------------------------
uint __fastcall Function_224a0e0(int a1, ushort a2, uchar a3)
{
  return Function_20039b0(*(uint *)(*(uint *)(a1 + 4) + 144), 1, 0, 0x40u, a3, a2);
}

//----- (0224A0FC) --------------------------------------------------------
int __fastcall Function_224a0fc(int a1)
{
  return *((short *)dword_22546F4 + 3 * a1);
}

//----- (0224A10C) --------------------------------------------------------
int __fastcall Function_224a10c(int a1)
{
  return *((short *)dword_22546F4 + 3 * a1 + 1);
}

//----- (0224A120) --------------------------------------------------------
int __fastcall Function_224a120(int a1)
{
  return *((short *)&dword_22546F4[1] + 3 * a1);
}

//----- (0224A134) --------------------------------------------------------
int __fastcall Function_224a134(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int i;
  int result;
  int j;
  int v8;
  int v9;
  char *v10;
  int v11;
  uint *v12;
  int v13;
  uint *v14;
  int v15;
  int v16;
  char v17;
  int v18;
  int v19;
  int v20;
  int v21;

  v21 = a4;
  v4 = a1;
  for ( i = 0; i < 4; ++i )
  {
    if ( v4[4 * i + 43] )
      ErrorHandler();
  }
  MI_CpuFill8(&v17, 0, 0x10u);
  result = 23;
  v20 = 23;
  for ( j = 0; j < 4; ++j )
  {
    v8 = *((uchar *)v4 + j + 2801);
    v9 = Function_20765b8(*(uint *)(*v4 + 4 * v8), 2u);
    v10 = (char *)dword_22546F4 + 6 * j;
    v11 = *((short *)v10 + 1);
    v18 = *((short *)dword_22546F4 + 3 * j);
    v19 = v9 + v11;
    v12 = &v4[4 * v8];
    v12[7] = v18;
    v12[8] = v19;
    v12[9] = *((short *)v10 + 2);
    v13 = ((int (__fastcall *)(char *, uint))dword_225AFD4[0])(&v17, *(uint *)(*v4 + 4 * v8 + 248));
    v14 = &v4[4 * v8];
    v14[6] = v13;
    v15 = v14[7];
    v16 = v14[8];
    result = ((int (*)(void))dword_225B100[0])();
    if ( j > 0 )
    {
      ((void (__fastcall *)(uint, uint))dword_225B07C[0])(v4[4 * v8 + 6], 0);
      result = ((int (__fastcall *)(uint, int))dword_225B1AC[0])(v4[4 * v8 + 6], -100);
    }
  }
  return result;
}

//----- (0224A1EC) --------------------------------------------------------
uint *__fastcall Function_224a1ec(int a1)
{
  int v1;
  int v2;
  uint *result;

  v1 = 0;
  v2 = a1;
  do
  {
    ((void (__fastcall *)(uint))dword_225B020[0])(*(uint *)(v2 + 4));
    result = (uint *)(v2 + 152);
    ++v1;
    v2 += 16;
    *result = 0;
  }
  while ( v1 < 4 );
  return result;
}

//----- (0224A20C) --------------------------------------------------------
void Function_224a20c()
{
  ;
}

//----- (0224A210) --------------------------------------------------------
void Function_224a210()
{
  ;
}

//----- (0224A214) --------------------------------------------------------
int __fastcall Function_224a214(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint i;
  short v9;
  short v10;
  short v11;
  int v12;
  int v13;
  short v14;
  int v15;
  short v16;
  int v17;
  short v18;
  int v20;
  int v21;
  int v22;

  v20 = a1;
  v3 = a2;
  v21 = a3;
  v4 = Function_223f0bc(a3, 2);
  v5 = Function_223f0bc(v21, 3);
  if ( v3 > v5 )
    v3 = v5;
  v6 = v3 / 8;
  v22 = ((uint)v3 >> 31) + __ROR4__((v3 << 29) - ((uint)v3 >> 31), 29);
  v7 = Function_2019fe4(*(uint *)(v20 + 96), 3) + 2 * ((32 - v4) / 2 + 608);
  if ( v21 )
  {
    v12 = 0;
    while ( v12 < v6 )
    {
      v13 = 2 * v12;
      v14 = *((ushort *)dword_2254898 + v12++);
      *(ushort *)(v7 + v13) = v14 + 8;
    }
    if ( v12 < v4 )
    {
      v15 = 2 * v12;
      v16 = *((ushort *)dword_2254898 + v12++);
      *(ushort *)(v7 + v15) = v22 + v16;
    }
    while ( v12 < v4 )
    {
      v17 = 2 * v12;
      v18 = *((ushort *)dword_2254898 + v12++);
      *(ushort *)(v7 + v17) = v18;
    }
  }
  else
  {
    for ( i = 0; (int)i < v6; ++i )
    {
      if ( (i >> 31) + __ROR4__((i << 29) - (i >> 31), 29) )
      {
        if ( i & 1 )
          v9 = 8244;
        else
          v9 = 8276;
        *(ushort *)(v7 + 2 * i) = v9;
      }
      else
      {
        *(ushort *)(v7 + 2 * i) = 8212;
      }
    }
    if ( (int)i < v4 )
    {
      if ( (i >> 31) + __ROR4__((i << 29) - (i >> 31), 29) )
      {
        if ( i & 1 )
          v10 = 8236;
        else
          v10 = 8268;
        *(ushort *)(v7 + 2 * i) = v22 + v10;
      }
      else
      {
        *(ushort *)(v7 + 2 * i) = v22 + 8204;
      }
      ++i;
    }
    while ( (int)i < v4 )
    {
      if ( (i >> 31) + __ROR4__((i << 29) - (i >> 31), 29) )
      {
        if ( i & 1 )
          v11 = 8236;
        else
          v11 = 8268;
        *(ushort *)(v7 + 2 * i) = v11;
      }
      else
      {
        *(ushort *)(v7 + 2 * i) = 8204;
      }
      ++i;
    }
  }
  return Function_201c3c0(*(uint *)(v20 + 96), 3);
}

//----- (0224A368) --------------------------------------------------------
int __fastcall Function_224a368(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v4 = a4;
  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = Function_223f0bc(a4, 3);
  v9 = s32_div_f(v8 * v6, v7);
  return Function_224a214(v5, v9, v4);
}

//----- (0224A390) --------------------------------------------------------
int __fastcall Function_224a390(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_200cc3c(a1, a2, a3, 0x3Au, 1, 1, 33003);
  Function_200cc3c(v3, v4, v5, 0x3Bu, 1, 1, 33004);
  Function_200cc3c(v3, v4, v5, 0x3Cu, 1, 1, 33005);
  Function_200cc3c(v3, v4, v5, 0x3Du, 1, 1, 33006);
  Function_200ce24(v3, v4, v5, 0x3Eu, 1, 33003);
  return Function_200ce54(v3, v4, v5, 0x3Fu, 1, 33003);
}

//----- (0224A428) --------------------------------------------------------
int __fastcall Function_224a428(int a1)
{
  int v1;

  v1 = a1;
  Function_200d070(a1, 33003);
  Function_200d070(v1, 33004);
  Function_200d070(v1, 33005);
  Function_200d070(v1, 33006);
  Function_200d090(v1, 33003);
  return Function_200d0a0(v1, 33003);
}

//----- (0224A46C) --------------------------------------------------------
int __fastcall Function_224a46c(int a1, uint *a2, int a3, uint a4, char a5, short a6, short a7, char a8)
{
  int *v8;
  int v9;
  uint v10;
  int v11;
  uint *v12;
  char *v13;
  int v14;
  int v15;
  int v16;
  int *v17;
  int result;
  int v19;
  char v20;
  int v21;
  int v22;
  int v23;

  v8 = dword_2254760;
  v9 = a3;
  v10 = a4;
  v11 = a1;
  v12 = a2;
  v13 = &v20;
  v14 = 6;
  do
  {
    v15 = *v8;
    v16 = v8[1];
    v8 += 2;
    *(uint *)v13 = v15;
    *((uint *)v13 + 1) = v16;
    v13 += 8;
    --v14;
  }
  while ( v14 );
  *(uint *)v13 = *v8;
  if ( v10 == 2 )
  {
    v21 += 10;
  }
  else
  {
    switch ( a8 )
    {
      case 1:
        v21 += 3;
        break;
      case 2:
        v21 += 2;
        break;
      case 3:
        ++v21;
        break;
      default:
        break;
    }
  }
  switch ( a5 )
  {
    case 1:
      v23 = 33005;
      v22 = 7;
      break;
    case 3:
      v23 = 33004;
      v22 = 2;
      break;
    case 4:
      v23 = 33006;
      v22 = 6;
      break;
    default:
      v23 = 33003;
      v22 = 2;
      break;
  }
  v17 = Function_200ce6c(v12, v9, (short *)&v20);
  Function_200d364(v17, v10);
  Function_200d324(*v17);
  Function_200d500(v17, a6, a7, 0x100000);
  Function_200d390((uint *)v17, 1);
  result = 0;
  v19 = v11;
  do
  {
    if ( !*(uint *)(v19 + 216) )
    {
      *(uint *)(v11 + 4 * result + 216) = v17;
      return result;
    }
    ++result;
    v19 += 4;
  }
  while ( result < 68 );
  ErrorHandler();
  return 0;
}

//----- (0224A580) --------------------------------------------------------
int __fastcall Function_224a580(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = 0;
  v2 = a1;
  do
  {
    result = *(uint *)(v2 + 216);
    if ( result )
    {
      Function_200d0f4(result);
      result = v2 + 216;
      *(uint *)(v2 + 216) = 0;
    }
    ++v1;
    v2 += 4;
  }
  while ( v1 < 68 );
  return result;
}

//----- (0224A5A8) --------------------------------------------------------
int __fastcall Function_224a5a8(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_200cc3c(a1, a2, a3, 0x37u, 1, 1, 33007);
  Function_200ce24(v3, v4, v5, 0x38u, 1, 33004);
  return Function_200ce54(v3, v4, v5, 0x39u, 1, 33004);
}

//----- (0224A5F8) --------------------------------------------------------
int __fastcall Function_224a5f8(int a1)
{
  int v1;

  v1 = a1;
  Function_200d070(a1, 33007);
  Function_200d090(v1, 33004);
  return Function_200d0a0(v1, 33004);
}

//----- (0224A61C) --------------------------------------------------------
uint __fastcall Function_224a61c(int a1, uint *a2, int a3)
{
  int v3;
  uint *v4;
  int v5;
  int v6;
  uint result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = 0;
  do
  {
    *(uint *)(v3 + 2552) = Function_200ce6c(v4, v5, (short *)dword_2254794);
    result = Function_200d3f4(*(uint **)(v3 + 2552), 0);
    ++v6;
    v3 += 4;
  }
  while ( v6 < 3 );
  return result;
}

//----- (0224A650) --------------------------------------------------------
uint __fastcall Function_224a650(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = 0;
  v2 = a1;
  do
  {
    result = Function_200d0f4(*(uint *)(v2 + 2552));
    *(uint *)(v2 + 2552) = 0;
    ++v1;
    v2 += 4;
  }
  while ( v1 < 3 );
  return result;
}

//----- (0224A674) --------------------------------------------------------
uint __fastcall Function_224a674(int a1)
{
  int v1;
  uint **v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v9;
  ushort *v10;
  ushort *v11;
  ushort *v12;
  int v13;

  v1 = a1;
  v12 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 132), 5u);
  v11 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 132), 6u);
  v10 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 132), 7u);
  v13 = 0;
  v9 = v1 + 2564;
  v2 = (uint **)v1;
  v3 = v1 + 2624;
  v4 = v1 + 2684;
  do
  {
    Function_223f1e8(
      0x17u,
      *(uint **)(v1 + 96),
      *(uint *)(v1 + 92),
      *(uint *)(v1 + 148),
      v9,
      (int)v12,
      0,
      723968,
      0,
      33001,
      0,
      0,
      1,
      1,
      12);
    Function_20129d0(v2[641], 0);
    Function_223f1e8(
      0x17u,
      *(uint **)(v1 + 96),
      *(uint *)(v1 + 92),
      *(uint *)(v1 + 148),
      v3,
      (int)v11,
      0,
      723968,
      0,
      33001,
      0,
      0,
      1,
      1,
      12);
    Function_20129d0(v2[656], 0);
    Function_223f1e8(
      0x17u,
      *(uint **)(v1 + 96),
      *(uint *)(v1 + 92),
      *(uint *)(v1 + 148),
      v4,
      (int)v10,
      0,
      723968,
      0,
      33001,
      0,
      0,
      1,
      1,
      12);
    Function_20129d0(v2[671], 0);
    v2 += 5;
    v9 += 20;
    v3 += 20;
    v4 += 20;
    ++v13;
  }
  while ( v13 < 3 );
  Function_20237bc_FreeMsg((int)v12, v5);
  Function_20237bc_FreeMsg((int)v11, v6);
  return Function_20237bc_FreeMsg((int)v10, v7);
}

//----- (0224A7B8) --------------------------------------------------------
uint __fastcall Function_224a7b8(int a1)
{
  int v1;
  int v2;
  int v3;
  int **v4;
  uint result;

  v1 = 0;
  v2 = a1 + 2564;
  do
  {
    v3 = 0;
    v4 = (int **)v2;
    do
    {
      result = Function_223f2e4(v4);
      ++v3;
      v4 += 5;
    }
    while ( v3 < 3 );
    ++v1;
    v2 += 60;
  }
  while ( v1 < 3 );
  return result;
}

//----- (0224A7E0) --------------------------------------------------------
uint *__fastcall Function_224a7e0(int a1, int a2, int a3, uint a4, int a5, int a6)
{
  int v6;
  int v7;
  int *v8;
  int *v9;
  int i;
  int v11;
  uint *result;
  uint v13;
  int v14;
  int v15;
  int v16;

  v6 = a1;
  v13 = a4;
  if ( a6 )
    v14 = a6 - 1;
  else
    v14 = 0;
  v7 = a1 + 2492 + 20 * v14;
  v8 = *(int **)(v7 + 8);
  if ( v8 )
    Call_RemoveTaskFromTaskList(v8);
  MI_CpuFill8((ushort *)v7, 0, 0x14u);
  v16 = SLOWORD(dword_22546CC[a6]);
  v15 = SHIWORD(dword_22546CC[a6]);
  v9 = *(int **)(v6 + 4 * v14 + 2552);
  *(uint *)v7 = v9;
  Function_200d364(v9, v13);
  Function_200d500(*(int **)v7, (short)v16, (short)v15, 0x100000);
  Function_200d324(**(uint **)v7);
  Function_200d3f4(*(uint **)v7, 1);
  for ( i = 0; i < 3; ++i )
    Function_20129d0(*(uint **)(v6 + 60 * i + 20 * v14 + 2564), 0);
  v11 = v6 + 2564 + 60 * v13 + 20 * v14;
  *(uint *)(v7 + 4) = v11;
  Function_223f2f8(v11, v16, v15, 1);
  Function_20129d0(**(uint ***)(v7 + 4), 1);
  result = AddTaskToTaskList1((int)Function_224a8d4, v7, 0x9D08u);
  *(uint *)(v7 + 8) = result;
  return result;
}

//----- (0224A8D4) --------------------------------------------------------
int __fastcall Function_224a8d4(int *a1, int a2, int a3, int a4)
{
  uint **v4;
  int *v5;
  int v6;
  int result;
  int v8;
  int v9;
  int v10;

  v10 = a4;
  v4 = (uint **)a2;
  v5 = a1;
  if ( *(uchar *)(a2 + 16) )
  {
    if ( *(uchar *)(a2 + 16) == 1 )
    {
      result = *(uint *)(a2 + 12) + 1;
      *(uint *)(a2 + 12) = result;
      if ( result > 14 )
      {
        result = *(uchar *)(a2 + 16) + 1;
        *(uchar *)(a2 + 16) = result;
      }
    }
    else
    {
      Function_20129d0(**(uint ***)(a2 + 4), 0);
      Function_200d3f4(*v4, 0);
      v4[2] = 0;
      result = Call_RemoveTaskFromTaskList(v5);
    }
  }
  else
  {
    Function_20129a4(**(uint **)(a2 + 4), &v9, &v8);
    v8 -= 4;
    Function_20128c4((uint *)*v4[1], v9, v8, v6);
    Function_200d5dc((uint **)*v4, 0, -4);
    result = (int)v4[3] + 1;
    v4[3] = (uint *)result;
    if ( result > 4 )
    {
      v4[3] = 0;
      result = *((uchar *)v4 + 16) + 1;
      *((uchar *)v4 + 16) = result;
    }
  }
  return result;
}

//----- (0224A95C) --------------------------------------------------------
int *__fastcall Function_224a95c(int a1)
{
  int v1;
  int v2;
  int *result;

  v1 = 0;
  v2 = a1;
  do
  {
    result = *(int **)(v2 + 2500);
    if ( result )
    {
      Call_RemoveTaskFromTaskList(result);
      result = (int *)2500;
      *(uint *)(v2 + 2500) = 0;
    }
    ++v1;
    v2 += 20;
  }
  while ( v1 < 3 );
  return result;
}

//----- (0224A984) --------------------------------------------------------
int __fastcall Function_224a984(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_200cc3c(a1, a2, a3, 0x40u, 1, 1, 33008);
  Function_200ce24(v3, v4, v5, 0x41u, 1, 33005);
  return Function_200ce54(v3, v4, v5, 0x42u, 1, 33005);
}

//----- (0224A9D4) --------------------------------------------------------
int __fastcall Function_224a9d4(int a1)
{
  int v1;

  v1 = a1;
  Function_200d070(a1, 33008);
  Function_200d090(v1, 33005);
  return Function_200d0a0(v1, 33005);
}

//----- (0224A9F8) --------------------------------------------------------
int __fastcall Function_224a9f8(int a1, uint *a2, int a3)
{
  int v3;
  int *v4;
  int result;

  v3 = a1;
  v4 = Function_200ce6c(a2, a3, (short *)dword_22547C8);
  Function_200d324(*v4);
  result = 488;
  *(uint *)(v3 + 488) = v4;
  return result;
}

//----- (0224AA1C) --------------------------------------------------------
int __fastcall Function_224aa1c(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = *(uint *)(a1 + 488);
  if ( result )
  {
    Function_200d0f4(result);
    result = 488;
    *(uint *)(v1 + 488) = 0;
  }
  return result;
}

//----- (0224AA38) --------------------------------------------------------
uint *__fastcall Function_224aa38(int a1)
{
  int v1;
  uint *result;

  v1 = a1;
  result = AddTaskToTaskList1((int)Function_224aa68, a1, 0x9CAEu);
  *(uint *)(v1 + 512) = result;
  return result;
}

//----- (0224AA58) --------------------------------------------------------
int __fastcall Function_224aa58(int a1)
{
  return Call_RemoveTaskFromTaskList(*(int **)(a1 + 512));
}

//----- (0224AA68) --------------------------------------------------------
int __fastcall Function_224aa68(int a1, int **a2)
{
  int v2;

  v2 = (int)&a2[4 * *((uchar *)*a2 + 291)];
  return Function_200d500(
           a2[127],
           (short)*(uint *)(v2 + 28),
           (short)(*(uint *)(v2 + 32) - 40),
           0x100000);
}

//----- (0224AA94) --------------------------------------------------------
int __fastcall Function_224aa94(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_200cc3c(a1, a2, a3, 0x5Au, 1, 1, 33010);
  Function_200ce24(v3, v4, v5, 0x59u, 1, 33007);
  return Function_200ce54(v3, v4, v5, 0x58u, 1, 33007);
}

//----- (0224AAE4) --------------------------------------------------------
int __fastcall Function_224aae4(int a1)
{
  int v1;

  v1 = a1;
  Function_200d070(a1, 33010);
  Function_200d090(v1, 33007);
  return Function_200d0a0(v1, 33007);
}

//----- (0224AB08) --------------------------------------------------------
int __fastcall Function_224ab08(uint *a1, uint *a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  int v6;
  uint *v8;
  uint *v9;
  int v10;
  int v11;

  v8 = a1;
  v9 = a2;
  v11 = 0;
  v3 = a1;
  v4 = 0;
  v10 = a3;
  v5 = (int)(a1 + 1);
  v6 = (int)(a1 + 128);
  do
  {
    v3[129] = Function_200ce6c(v9, v10, (short *)dword_2254830);
    Function_200d324(*(uint *)v3[129]);
    Function_200d6a4((uint *)v3[129], 1);
    *((uchar *)v3 + 531) = v11;
    v3[131] = v5;
    *((uchar *)v3 + 532) = Function_20765b8(*(uint *)(*v8 + v4), 2u);
    Function_224ac78(v6);
    v3[128] = AddTaskToTaskList1((int)Function_224abfc, v6, 0xA08Cu);
    v3 += 6;
    v5 += 16;
    v4 += 4;
    v6 += 24;
    ++v11;
  }
  while ( v11 < 4 );
  return Function_224abdc(v8, 0);
}

//----- (0224ABB0) --------------------------------------------------------
int __fastcall Function_224abb0(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = 0;
  v2 = a1;
  do
  {
    Function_200d0f4(*(uint *)(v2 + 516));
    result = Call_RemoveTaskFromTaskList(*(int **)(v2 + 512));
    *(uint *)(v2 + 516) = 0;
    ++v1;
    v2 += 24;
  }
  while ( v1 < 4 );
  return result;
}

//----- (0224ABDC) --------------------------------------------------------
uint __fastcall Function_224abdc(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint result;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    result = Function_200d3f4(*(uint **)(v2 + 516), v3);
    ++v4;
    v2 += 24;
  }
  while ( v4 < 4 );
  return result;
}

//----- (0224ABFC) --------------------------------------------------------
int __fastcall Function_224abfc(int a1, int a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v13;

  v13 = a4;
  v4 = a2;
  v5 = *(uint **)(a2 + 12);
  v6 = v5[1];
  v7 = v5[2];
  v8 = Function_224b06c(v5[3]);
  v9 = v7 + (40 - *(char *)(v4 + 20)) * v8 / 256;
  v10 = fflt(100 * v8 / 256);
  v11 = f_div(v10, 0x42C80000u);
  if ( !*(uchar *)(v4 + 18) )
  {
    Function_200d5a0(*(int **)(v4 + 4), (ushort *)&v13 + 1, &v13, 0x100000);
    LOWORD(v9) = v13;
  }
  Function_200d500(*(int **)(v4 + 4), (short)v6, (short)v9, 0x100000);
  return Function_200d6e8(*(int **)(v4 + 4), v11, v11);
}

//----- (0224AC78) --------------------------------------------------------
int __fastcall Function_224ac78(int result, char a2, char a3)
{
  *(uchar *)(result + 17) = a2;
  *(uchar *)(result + 18) = a3;
  return result;
}

//----- (0224AC80) --------------------------------------------------------
int __fastcall Function_224ac80(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_200cc3c(a1, a2, a3, 0x5Du, 1, 1, 33011);
  Function_200ce24(v3, v4, v5, 0x5Cu, 1, 33008);
  return Function_200ce54(v3, v4, v5, 0x5Bu, 1, 33008);
}

//----- (0224ACD0) --------------------------------------------------------
int __fastcall Function_224acd0(int a1)
{
  int v1;

  v1 = a1;
  Function_200d070(a1, 33011);
  Function_200d090(v1, 33008);
  return Function_200d0a0(v1, 33008);
}

//----- (0224ACF4) --------------------------------------------------------
void Function_224acf4()
{
  ;
}

//----- (0224ACF8) --------------------------------------------------------
void Function_224acf8()
{
  ;
}

//----- (0224ACFC) --------------------------------------------------------
int __fastcall Function_224acfc(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_200cc3c(a1, a2, a3, 0x60u, 1, 1, 33012);
  Function_200ce24(v3, v4, v5, 0x5Fu, 1, 33009);
  return Function_200ce54(v3, v4, v5, 0x5Eu, 1, 33009);
}

//----- (0224AD4C) --------------------------------------------------------
int __fastcall Function_224ad4c(int a1)
{
  int v1;

  v1 = a1;
  Function_200d070(a1, 33012);
  Function_200d090(v1, 33009);
  return Function_200d0a0(v1, 33009);
}

//----- (0224AD70) --------------------------------------------------------
int __fastcall Function_224ad70(int a1, int a2, uint a3)
{
  int *v3;
  int v4;
  int v5;
  int v6;
  int *v8;
  int *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  uint v14;
  int v15;
  int v16;
  uint v17;

  v3 = (int *)a1;
  v4 = a2;
  v5 = a1 + 692 + 448 * a2;
  v17 = a3;
  v6 = 0;
  do
  {
    if ( !*(uint *)v5 )
      break;
    ++v6;
    v5 += 28;
  }
  while ( v6 < 16 );
  if ( v6 == 16 )
    return 0;
  v8 = Function_200ce6c(*(uint **)(a1 + 108), *(uint *)(a1 + 112), (short *)dword_2254864);
  v9 = v8;
  if ( !v8 )
    return 0;
  v10 = (int)&v3[4 * v4];
  v11 = *(uint *)(v10 + 32);
  v12 = *(uint *)(v10 + 28);
  Function_200d364(v8, v17);
  Function_200d500(v9, (short)v12, (short)v11, 0x100000);
  Function_2021cc8(*v9, 1);
  Function_200d324(*v9);
  v13 = *v3;
  v14 = Call_PRNG();
  REG_DIVCNT = 0;
  REG_DIV_NUMER_L = v14;
  REG_DIV_DENOM_L = 1280;
  REG_DIV_DENOM_H = 0;
  MI_CpuFill8((ushort *)v5, 0, 0x1Cu);
  *(uint *)(v5 + 4) = v9;
  *(uint *)(v5 + 8) = v12 << 8;
  *(uint *)(v5 + 12) = v11 << 8;
  while ( (ushort)REG_DIVCNT & (ushort)((uint)&REG_DIVCNT >> 11) )
    ;
  v15 = REG_DIVREM_RESULT_L;
  *(uint *)(v5 + 16) = REG_DIVREM_RESULT_L;
  if ( v15 & 1 )
    *(uint *)(v5 + 16) = -v15;
  v16 = *v3;
  REG_DIV_NUMER_L = Call_PRNG();
  REG_DIV_DENOM_L = 3840;
  REG_DIV_DENOM_H = 0;
  while ( (ushort)REG_DIVCNT & ((uint)&REG_DIVCNT >> 11) )
    ;
  *(uint *)(v5 + 20) = -(REG_DIVREM_RESULT_L + ((uint)&REG_DIVREM_RESULT_L >> 16));
  *(uint *)v5 = AddTaskToTaskList1((int)Function_224ae84, v5, 0x9C40u);
  return 1;
}

//----- (0224AE84) --------------------------------------------------------
int __fastcall Function_224ae84(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  int result;
  uint v6;

  v2 = a2;
  v3 = a1;
  *(uint *)(a2 + 8) += *(uint *)(a2 + 16);
  *(uint *)(a2 + 12) += *(uint *)(a2 + 20);
  *(uint *)(a2 + 20) += 512;
  ++*(ushort *)(v2 + 24);
  if ( *(ushort *)(a2 + 24) <= 0xAu
    && (v4 = *(uint *)(a2 + 8), v4 <= 69632)
    && v4 >= -69632
    && *(uint *)(v2 + 12) <= 53248 )
  {
    REG_DIVCNT = 0;
    REG_DIV_NUMER_L = v4;
    REG_DIV_DENOM_L = (uint)&REG_DIVCNT >> 18;
    REG_DIV_DENOM_H = 0;
    v6 = (uint)&REG_DIVCNT >> 11;
    while ( (ushort)REG_DIVCNT & (ushort)v6 )
      ;
    REG_DIV_NUMER_L = *(uint *)(v2 + 12);
    REG_DIV_DENOM_L = (uint)&REG_DIV_RESULT_L >> 18;
    REG_DIV_DENOM_H = 0;
    while ( (ushort)REG_DIVCNT & (ushort)((uint)&REG_DIVCNT >> 11) )
      ;
    result = Function_200d500(
               *(int **)(v2 + 4),
               (short)REG_DIV_RESULT_L,
               (short)REG_DIV_RESULT_L,
               0x100000);
  }
  else
  {
    Function_200d0f4(*(uint *)(v2 + 4));
    Call_RemoveTaskFromTaskList(v3);
    result = 0;
    *(uint *)(v2 + 4) = 0;
    *(uint *)v2 = 0;
  }
  return result;
}

//----- (0224AF3C) --------------------------------------------------------
int __fastcall Function_224af3c(int result, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint v6;
  int v7;
  int i;
  int v9;

  v4 = result;
  v9 = a2;
  if ( a3 != 2 )
  {
    v5 = result + 2 * a2;
    result = *(short *)(v5 + 2806);
    if ( *(ushort *)(v5 + 2806) )
    {
      v6 = 0;
      REG_DIVCNT = 0;
      REG_DIV_NUMER_L = result;
      REG_DIV_DENOM_L = 2;
      REG_DIV_DENOM_H = 0;
      if ( a4 )
        v6 = 1;
      while ( (ushort)REG_DIVCNT & (ushort)((uint)&REG_DIVCNT >> 11) )
        ;
      result = (int)&REG_DIV_RESULT_L;
      v7 = REG_DIV_RESULT_L;
      if ( REG_DIV_RESULT_L > 16 )
        v7 = 16;
      for ( i = 0; i < v7; ++i )
      {
        result = Function_224ad70(v4, v9, v6);
        if ( !result )
          break;
      }
    }
  }
  return result;
}

//----- (0224AFA8) --------------------------------------------------------
int __fastcall Function_224afa8(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_200cc3c(a1, a2, a3, 0x63u, 1, 1, 33013);
  Function_200ce24(v3, v4, v5, 0x62u, 1, 33010);
  return Function_200ce54(v3, v4, v5, 0x61u, 1, 33010);
}

//----- (0224AFF8) --------------------------------------------------------
int __fastcall Function_224aff8(int a1)
{
  int v1;

  v1 = a1;
  Function_200d070(a1, 33013);
  Function_200d090(v1, 33010);
  return Function_200d0a0(v1, 33010);
}

//----- (0224B01C) --------------------------------------------------------
int __fastcall Function_224b01c(int a1)
{
  int v1;
  int *v2;

  v1 = a1;
  v2 = Function_200ce6c(*(uint **)(a1 + 108), *(uint *)(a1 + 112), (short *)dword_225472C);
  Function_200d500(v2, -1, 176, 0x100000);
  Function_200d324(*v2);
  Function_200d3f4((uint *)v2, 0);
  *(uint *)(v1 + 2488) = v2;
  return 1;
}

//----- (0224B058) --------------------------------------------------------
uint __fastcall Function_224b058(int a1)
{
  return Function_200d0f4(*(uint *)(a1 + 2488));
}

//----- (0224B068) --------------------------------------------------------
void Function_224b068()
{
  ;
}

//----- (0224B06C) --------------------------------------------------------
int __fastcall Function_224b06c(int a1)
{
  if ( a1 == -640 )
    return 192;
  if ( a1 == -512 )
    return 256;
  return ((a1 + 640) << 6) / 128 + 192;
}

//----- (0224B09C) --------------------------------------------------------
int __fastcall Function_224b09c(int a1, uint *a2)
{
  uint *v2;

  v2 = a2;
  Function_224b06c(a2[3]);
  return ((int (__fastcall *)(uint))dword_225B0EC[0])(*v2);
}

//----- (0224B0CC) --------------------------------------------------------
int __fastcall Function_224b0cc(int a1)
{
  int v1;
  int v2;
  uint *v3;
  int result;

  v1 = a1;
  v2 = 0;
  v3 = (uint *)(a1 + 4);
  do
  {
    result = Function_224b09c(*(uint *)(v1 + 72), v3);
    ++v2;
    v3 += 4;
    v1 += 4;
  }
  while ( v2 < 4 );
  return result;
}

//----- (0224B0E8) --------------------------------------------------------
int __fastcall Function_224b0e8(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  uint v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int *v13;
  int v15;
  BOOL v16;
  short v17;
  short v18[2];
  short v19[2];
  int v20;

  v20 = a4;
  v4 = a1;
  v5 = a2;
  v15 = a3;
  v6 = Function_223f0bc(*(uchar *)(a1 + 2843), 3);
  v16 = *(uchar *)(v15 + 2) != v5;
  v7 = Function_223f0bc(*(uchar *)(v4 + 2843), 4);
  v8 = s32_div_f(0x100u, v7);
  v9 = 0;
  v10 = (256 - v6) / 2;
  v11 = v8 * *(uchar *)(v15 + 6) + v10;
  v17 = v10;
  v12 = *((uchar *)&dword_22549BC + *(uchar *)(v15 + 7));
  while ( v9 < 68 )
  {
    v13 = *(int **)(v4 + 4 * v9 + 236);
    if ( v13 )
    {
      Function_200d5a0(v13, v19, v18, 0x100000);
      if ( v19[0] == v11 && v18[0] == v12 && Function_200d37c(*(int **)(v4 + 4 * v9 + 236)) != 2 )
        return 0;
    }
    ++v9;
  }
  Function_224a46c(
    v4 + 20,
    *(uint **)(v4 + 108),
    *(uint *)(v4 + 112),
    v16,
    *(uchar *)(v15 + 3),
    v11,
    v12,
    *(uchar *)(v15 + 7));
  if ( !*(uchar *)(v15 + 7) && v16 == 1 )
    Function_224a46c(
      v4 + 20,
      *(uint **)(v4 + 108),
      *(uint *)(v4 + 112),
      2u,
      *(uchar *)(v15 + 3),
      v11 + 128 - v17,
      *((uchar *)&dword_22549BC + *(uchar *)(v4 + *(uchar *)(*(uint *)v4 + 291) + 2801)),
      *(uchar *)(v4 + *(uchar *)(*(uint *)v4 + 291) + 2801));
  return 1;
}

//----- (0224B20C) --------------------------------------------------------
int __fastcall Function_224b20c(int a1, int a2)
{
  uchar *v2;
  int v3;
  short v4;
  int v5;
  uchar *v6;
  int v7;
  ushort *v8;
  int v9;
  int v10;
  char v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int result;
  int v18;
  int v19;
  ushort *v20;

  v2 = (uchar *)a2;
  v3 = a1;
  switch ( *(uchar *)(a2 + 5) )
  {
    case 0:
      v4 = 2;
      break;
    case 1:
      v4 = 2;
      break;
    case 2:
      v4 = 1;
      break;
    case 3:
      v4 = 1;
      break;
    default:
      v4 = 0;
      break;
  }
  v20 = (ushort *)(a1 + 2806 + 2 * *(uchar *)(a2 + 2));
  *v20 += v4;
  if ( !*(uchar *)(a2 + 7) )
  {
    v5 = 0;
    v6 = (uchar *)(a1 + 7100);
    v7 = a1;
    while ( *v6 & 4 )
    {
      if ( *(uchar *)(a2 + 6) != *(uchar *)(v7 + 7098) )
      {
        ++v5;
        v6 += 10;
        v7 += 10;
        if ( v5 < 8 )
          continue;
      }
      goto LABEL_13;
    }
    v8 = (ushort *)(a1 + 10 * v5);
    v8[3546] = *(ushort *)a2;
    v8[3547] = *(ushort *)(a2 + 2);
    v8[3548] = *(ushort *)(a2 + 4);
    v8[3549] = *(ushort *)(a2 + 6);
    v8[3550] = *(ushort *)(a2 + 8);
  }
LABEL_13:
  if ( *(uchar *)(a2 + 4) )
  {
    v11 = 0;
    *(uchar *)(v3 + *(uchar *)(a2 + 2) + 2773) = 0;
    v9 = 2777;
    v10 = v3 + v2[2];
  }
  else
  {
    ++*(uchar *)(v3 + 2773 + *(uchar *)(a2 + 2));
    v9 = *(uchar *)(a2 + 2);
    v10 = v3 + 2777;
    v11 = *(uchar *)(v3 + 2777 + v9) + 1;
  }
  *(uchar *)(v10 + v9) = v11;
  if ( v2[4] == 2 )
  {
    ++*(uchar *)(v3 + 2781 + v2[2]);
    *(uchar *)(v3 + v2[2] + 2788) = 0;
  }
  else
  {
    ++*(uchar *)(v3 + 2788 + v2[2]);
  }
  if ( v2[7] )
  {
    v12 = v2[4];
    if ( v2[4] )
    {
      if ( v12 == 1 )
      {
        ++*(uchar *)(v3 + 2786);
      }
      else if ( v12 == 2 )
      {
        ++*(uchar *)(v3 + 2787);
      }
    }
    else
    {
      ++*(uchar *)(v3 + 2785);
    }
  }
  Function_224a7e0(v3 + 20, *(uint *)(v3 + 108), *(uint *)(v3 + 112), v2[4], v2[2], v2[7]);
  Function_224b0e8(v3, *(uchar *)(*(uint *)v3 + 291), (int)v2, v13);
  Function_224b528(v3, v2[2], v2[7], v2[3], v2[8] & 1, (short)*v20);
  Function_224af3c(v3, v2[2], v2[4], v2[7]);
  Function_224c89c(v3, v2);
  if ( v2[2] == *(uchar *)(*(uint *)v3 + 291) )
  {
    if ( v2[4] )
    {
      if ( v2[4] == 1 )
        Function_224cb00(v3, v2[6], 0);
    }
    else
    {
      Function_224cb00(v3, v2[6], 1);
    }
  }
  if ( v2[7] || (v2[8] & 1) != 1 )
  {
    if ( v2[7] )
    {
      if ( (v2[8] & 1) == 1 )
      {
        v15 = *(uchar *)(v3 + 2785);
        v16 = 3 * *(uchar *)(v3 + 2842);
        if ( v16 == *(uchar *)(v3 + 2787) + v15 + *(uchar *)(v3 + 2786) )
        {
          if ( v15 == v16 )
          {
            Function_224cb80(v3, 1);
          }
          else if ( !*(uchar *)(v3 + 2787) )
          {
            Function_224cb80(v3, 0);
          }
        }
      }
    }
  }
  else
  {
    v14 = v3 + v2[2];
    if ( *(uchar *)(v3 + 2842) == *(uchar *)(v14 + 2777) )
    {
      Function_224cb80(v3, 1);
    }
    else if ( !*(uchar *)(v14 + 2781) )
    {
      Function_224cb80(v3, 0);
    }
  }
  if ( (v2[8] & 1) == 1 )
    Function_2005748(0x6F5u);
  else
    Function_2005748(0x6F4u);
  if ( !*(uchar *)(v3 + 2792) || !v2[7] || (result = *(uchar *)(*(uint *)v3 + 291), v2[2] == result) )
  {
    result = v2[4];
    if ( v2[4] )
    {
      if ( result == 1 )
      {
        result = Function_2005748(0x6F1u);
      }
      else if ( result == 2 )
      {
        if ( (uint)v2[8] << 30 >> 31 == 1 )
          result = Function_2005748(0x6F2u);
        else
          result = Function_2005748(0x5F6u);
      }
    }
    else
    {
      v18 = *(uchar *)(v3 + v2[2] + 2777);
      v19 = *(uchar *)(v3 + 2842);
      if ( v19 == v18 )
      {
        result = Function_2005748(0x6F0u);
      }
      else if ( v19 - 1 == v18 )
      {
        result = Function_2005748(0x6EFu);
      }
      else
      {
        result = Function_2005748(0x6EEu);
      }
    }
  }
  return result;
}

//----- (0224B528) --------------------------------------------------------
uint __fastcall Function_224b528(int a1, int a2, uchar a3, uchar a4, uchar a5, uint a6)
{
  uchar *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint result;

  v6 = (uchar *)(a1 + 3928 + 76 * a2);
  v7 = v6[32];
  v8 = -1;
  v9 = v7;
  if ( v7 < 32 )
  {
    while ( v6[v9] )
    {
      if ( ++v9 >= 32 )
        goto LABEL_5;
    }
    v8 = v9;
  }
LABEL_5:
  if ( v8 == -1 )
  {
    v10 = 0;
    if ( v7 > 0 )
    {
      while ( v6[v10] )
      {
        if ( ++v10 >= v7 )
          goto LABEL_10;
      }
      v8 = v10;
    }
  }
LABEL_10:
  if ( v8 == -1 )
    return ErrorHandler();
  v6[v8] = a4;
  v6[33] = a3;
  v6[34] = a5;
  result = a6;
  v6[35] = a6;
  return result;
}

//----- (0224B59C) --------------------------------------------------------
uint *__fastcall Function_224b59c(int a1)
{
  int v1;
  uint *result;

  v1 = a1;
  result = AddTaskToTaskList1((int)Function_224b5f0, a1, 0x9862u);
  *(uint *)(v1 + 8) = result;
  return result;
}

//----- (0224B5B8) --------------------------------------------------------
int __fastcall Function_224b5b8(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Call_RemoveTaskFromTaskList(*(int **)(a1 + 8));
  result = 0;
  *(uint *)(v1 + 8) = 0;
  return result;
}

//----- (0224B5C8) --------------------------------------------------------
int __fastcall Function_224b5c8(int a1)
{
  int v1;
  int v2;

  v1 = 0;
  v2 = a1 + 3928;
  do
  {
    if ( *(uchar *)(v2 + *(uchar *)(v2 + 32)) )
      return 0;
    ++v1;
    v2 += 76;
  }
  while ( v1 < 4 );
  return 1;
}

//----- (0224B5F0) --------------------------------------------------------
int __fastcall Function_224b5f0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int result;
  int v8;
  int v9;
  int v10;
  uint v11;

  v8 = a2;
  v10 = 0;
  v2 = a2 + 3928;
  v3 = a2;
  v9 = a2 + 532;
  v4 = a2 + 24;
  do
  {
    v5 = 0;
    v11 = *(uchar *)(v2 + *(uchar *)(v2 + 32));
    if ( *(uchar *)(v2 + *(uchar *)(v2 + 32)) )
    {
      Function_224bd28(v8, v10, 4);
      v6 = u32_div_f(*(uint *)(v8 + 2820), 10000);
      if ( v11 <= 4 )
        JUMPOUT(__CS__, *((short *)&off_224B64A + v11) + 35960396);
      switch ( (uchar)v11 )
      {
        case 1:
          if ( *(uchar *)(v8 + v10 + 2768) == 1 )
            v5 = Function_224b7bc(
                   v2 + 36,
                   *(uint *)(v3 + 92),
                   v4,
                   *(uchar *)(v2 + 33),
                   *(uchar *)(v2 + 34),
                   *(uchar *)(v2 + 35),
                   v9,
                   v6 - 1);
          else
            v5 = Function_224b8d0(
                   v2 + 36,
                   *(uint *)(v3 + 92),
                   v4,
                   *(uchar *)(v2 + 33),
                   *(uchar *)(v2 + 34),
                   *(uchar *)(v2 + 35),
                   0,
                   v6 - 1);
          break;
        case 2:
          v5 = Function_224b8d0(
                 v2 + 36,
                 *(uint *)(v3 + 92),
                 v4,
                 *(uchar *)(v2 + 33),
                 *(uchar *)(v2 + 34),
                 *(uchar *)(v2 + 35),
                 1,
                 v6 - 1);
          break;
        case 3:
          v5 = Function_224ba50(
                 v2 + 36,
                 *(uint *)(v3 + 92),
                 v4,
                 *(uchar *)(v2 + 33),
                 *(uchar *)(v2 + 34),
                 *(uchar *)(v2 + 35),
                 1,
                 v6 - 1);
          break;
        case 4:
          v5 = Function_224ba50(
                 v2 + 36,
                 *(uint *)(v3 + 92),
                 v4,
                 *(uchar *)(v2 + 33),
                 *(uchar *)(v2 + 34),
                 *(uchar *)(v2 + 35),
                 0,
                 v6 - 1);
          break;
        default:
          ErrorHandler();
          break;
      }
      if ( v5 == 1 )
      {
        *(uchar *)(v2 + (uchar)(*(uchar *)(v2 + 32))++) = 0;
        if ( *(uchar *)(v2 + 32) >= 0x20u )
          *(uchar *)(v2 + 32) = 0;
        MI_CpuFill8((ushort *)(v2 + 36), 0, 0x28u);
        Function_224bd28(v8, v10, 3);
      }
    }
    v2 += 76;
    v9 += 24;
    v4 += 16;
    result = v10 + 1;
    v3 += 4;
    v10 = result;
  }
  while ( result < 4 );
  return result;
}

//----- (0224B7BC) --------------------------------------------------------
int __fastcall Function_224b7bc(int *a1, int a2, uint *a3, int a4, int a5, int a6, int a7, uint a8)
{
  int *v8;
  int v9;
  uint *v10;
  int v11;
  int v12;
  int v13;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  uint v22;
  uint v23;
  int v24;

  v8 = a1;
  v24 = 0;
  v9 = *((uchar *)a1 + 16);
  v10 = a3;
  v11 = a4;
  if ( v9 )
  {
    if ( v9 != 1 )
      return 1;
  }
  else
  {
    *v8 = a3[1] << 8;
    v8[1] = a3[2] << 8;
    v8[2] = *v8;
    v8[3] = v8[1];
    v12 = u32_div_f(1280, a8 >> 1);
    if ( a5 == 1 )
    {
      *((ushort *)v8 + 10) = -2560;
      LOWORD(v12) = s32_div_f(200 * v12, 100);
    }
    else
    {
      *((ushort *)v8 + 10) = -1280;
    }
    *((ushort *)v8 + 11) = v12;
    Function_224ac78(a7, 1, 0);
    ++*((uchar *)v8 + 16);
  }
  v8[3] += *((short *)v8 + 10);
  *((ushort *)v8 + 10) += *((ushort *)v8 + 11);
  v13 = v8[1];
  if ( v8[3] >= v13 )
  {
    v8[3] = v13;
    Function_224ac78(a7, 1, 1);
    v24 = 1;
    ++*((uchar *)v8 + 16);
  }
  if ( v11 )
    v15 = 40;
  else
    v15 = 100;
  v16 = a6 << 9;
  if ( a6 << 9 > 25600 )
    v16 = 25600;
  v17 = v15 + (v16 >> 8);
  v18 = *v8;
  v19 = v8[2] - *v8;
  v20 = v8[1];
  v21 = v8[3] - v20;
  v22 = s32_div_f(v19 * v17, 100);
  v23 = s32_div_f(v21 * v17, 100);
  v10[1] = (int)(v18 + v22) / 256;
  v10[2] = (int)(v20 + v23) / 256;
  ((void (__fastcall *)(uint, uint))dword_225B100[0])(*v10, v10[1]);
  return v24;
}

//----- (0224B8D0) --------------------------------------------------------
int __fastcall Function_224b8d0(int *a1, int a2, uint *a3, int a4, int a5, int a6, int a7, int a8)
{
  int *v8;
  int v9;
  uint *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  uint v15;
  int v16;
  int v17;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  uint v26;
  uint v27;
  int v28;
  int v29;
  int v30;

  v8 = a1;
  v30 = 0;
  v9 = *((uchar *)a1 + 16);
  v10 = a3;
  v28 = a4;
  if ( !v9 )
  {
    *v8 = a3[1] << 8;
    v8[1] = a3[2] << 8;
    v8[2] = *v8;
    v8[3] = v8[1];
    v11 = u32_div_f(30 * a8, 100);
    v8[5] = s32_div_f(0x1000u, v11);
    v8[6] = s32_div_f(0x1000u, a8 - v11);
    if ( !a7 )
    {
      v8[5] = -v8[5];
      v8[6] = -v8[6];
    }
    ++*((uchar *)v8 + 16);
    goto LABEL_8;
  }
  if ( v9 == 1 )
  {
LABEL_8:
    if ( a5 == 1 )
    {
      v8[3] += s32_div_f(200 * v8[5], 100);
      v12 = 32;
    }
    else
    {
      v8[3] += v8[5];
      v12 = 16;
    }
    v29 = v12 << 8;
    v13 = v8[1];
    if ( abs(v8[3] - v13) >= v12 << 8 )
    {
      if ( a7 == 1 )
        v14 = v13 + v29;
      else
        v14 = v13 - v29;
      v8[3] = v14;
      ++*((uchar *)v8 + 16);
    }
    goto LABEL_24;
  }
  if ( v9 != 2 )
    return 1;
  if ( a5 == 1 )
  {
    v15 = s32_div_f(200 * v8[6], 100);
    v16 = v8[3];
  }
  else
  {
    v16 = v8[3];
    v15 = v8[6];
  }
  v8[3] = v16 - v15;
  if ( a7 == 1 && (v17 = v8[1], v8[3] <= v17) || !a7 && (v17 = v8[1], v8[3] >= v17) )
  {
    v8[3] = v17;
    ++*((uchar *)v8 + 16);
    v30 = 1;
  }
LABEL_24:
  if ( v28 )
    v19 = 40;
  else
    v19 = 100;
  v20 = a6 << 9;
  if ( a6 << 9 > 25600 )
    v20 = 25600;
  v21 = v19 + (v20 >> 8);
  v22 = *v8;
  v23 = v8[2] - *v8;
  v24 = v8[1];
  v25 = v8[3] - v24;
  v26 = s32_div_f(v23 * v21, 100);
  v27 = s32_div_f(v25 * v21, 100);
  v10[1] = (int)(v22 + v26) / 256;
  v10[2] = (int)(v24 + v27) / 256;
  ((void (__fastcall *)(uint, uint))dword_225B100[0])(*v10, v10[1]);
  return v30;
}

//----- (0224BA50) --------------------------------------------------------
int __fastcall Function_224ba50(int *a1, int a2, uint *a3, int a4, int a5, int a6, int a7, int a8)
{
  int *v8;
  int v9;
  uint *v10;
  int v11;
  uint v12;
  int v13;
  int v14;
  int v15;
  uint v16;
  int v17;
  int v18;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  uint v27;
  uint v28;
  int v29;
  int v30;
  int v31;
  int v32;

  v8 = a1;
  v32 = 0;
  v9 = *((uchar *)a1 + 16);
  v10 = a3;
  v29 = a4;
  if ( !v9 )
  {
    *v8 = a3[1] << 8;
    v8[1] = a3[2] << 8;
    v8[2] = *v8;
    v8[3] = v8[1];
    v11 = u32_div_f(30 * a8, 100);
    v8[6] = s32_div_f(0x38E00u, v11);
    v8[7] = s32_div_f(0xFFFC7200, a8 - v11);
    v8[8] = s32_div_f(0x1000u, v11);
    v8[9] = -s32_div_f(0x1000u, a8 - v11);
    if ( a7 == 1 )
    {
      v8[6] = -v8[6];
      v8[7] = -v8[7];
      v8[8] = -v8[8];
      v8[9] = -v8[9];
    }
    ++*((uchar *)v8 + 16);
    goto LABEL_8;
  }
  if ( v9 == 1 )
  {
LABEL_8:
    if ( a5 == 1 )
    {
      v8[2] += s32_div_f(200 * v8[8], 100);
      v31 = 32;
      v12 = s32_div_f(200 * v8[6], 100);
      v13 = v8[5];
    }
    else
    {
      v8[2] += v8[8];
      v31 = 16;
      v13 = v8[5];
      v12 = v8[6];
    }
    v8[5] = v13 + v12;
    v14 = *v8;
    v30 = v31 << 8;
    if ( abs(v8[2] - *v8) >= v31 << 8 )
    {
      if ( a7 == 1 )
        v15 = v14 - v30;
      else
        v15 = v14 + v30;
      v8[2] = v15;
      v8[3] = v8[1];
      ++*((uchar *)v8 + 16);
    }
    goto LABEL_24;
  }
  if ( v9 != 2 )
    return 1;
  if ( a5 == 1 )
  {
    v8[2] += s32_div_f(200 * v8[9], 100);
    v16 = s32_div_f(200 * v8[7], 100);
    v17 = v8[5];
  }
  else
  {
    v8[2] += v8[9];
    v17 = v8[5];
    v16 = v8[7];
  }
  v8[5] = v17 + v16;
  if ( a7 == 1 && (v18 = *v8, v8[2] >= *v8) || !a7 && (v18 = *v8, v8[2] <= *v8) )
  {
    v8[2] = v18;
    v8[5] = 0;
    ++*((uchar *)v8 + 16);
    v32 = 1;
  }
LABEL_24:
  ((void (__fastcall *)(uint, uint))dword_225B0E4[0])(*v10, (uint)(v8[5] << 8) >> 16);
  if ( v29 )
    v20 = 40;
  else
    v20 = 100;
  v21 = a6 << 9;
  if ( a6 << 9 > 25600 )
    v21 = 25600;
  v22 = v20 + (v21 >> 8);
  v23 = *v8;
  v24 = v8[2] - *v8;
  v25 = v8[1];
  v26 = v8[3] - v25;
  v27 = s32_div_f(v24 * v22, 100);
  v28 = s32_div_f(v26 * v22, 100);
  v10[1] = (int)(v23 + v27) / 256;
  v10[2] = (int)(v25 + v28) / 256;
  ((void (__fastcall *)(uint, uint))dword_225B100[0])(*v10, v10[1]);
  return v32;
}

//----- (0224BC4C) --------------------------------------------------------
int __fastcall Function_224bc4c(int a1)
{
  int v1;
  uchar *v2;
  int result;

  v1 = 0;
  v2 = (uchar *)(a1 + 7100);
  result = 4;
  do
  {
    ++v1;
    *v2 &= 0xFBu;
    v2 += 10;
  }
  while ( v1 < 8 );
  return result;
}

//----- (0224BC68) --------------------------------------------------------
uint *__fastcall Function_224bc68(int a1, int a2, char a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint *result;
  char v10;
  int v11;

  v3 = a1;
  v4 = a2;
  v5 = a1 + 4236;
  v11 = 40 * a2;
  v10 = a3;
  if ( *(uint *)(a1 + 4236 + 40 * a2) )
    ErrorHandler();
  v6 = 40 * v4;
  MI_CpuFill8((ushort *)(v3 + 4232 + 40 * v4), 0, 0x28u);
  v7 = v3 + 40 * v4;
  *(uint *)(v3 + 4232 + v6) = v3;
  *(uchar *)(v7 + 4258) = v4;
  *(uchar *)(v7 + 4257) = v10;
  *(uint *)(v7 + 4240) = *(uint *)(v3 + 4 * v4 + 92);
  *(uint *)(v7 + 4244) = v3 + 24 + 16 * v4;
  v8 = v3 + 4268;
  *(uchar *)(v8 + v6) = *(uchar *)(v3 + 4268 + v6) | 4;
  *(uchar *)(v8 + v6) = *(uchar *)(v3 + 4268 + v6) | 8;
  result = AddTaskToTaskList1((int)Function_224be50, v3 + 4232 + 40 * v4, 0x9858u);
  *(uint *)(v5 + v11) = result;
  return result;
}

//----- (0224BD00) --------------------------------------------------------
int *__fastcall Function_224bd00(int a1)
{
  int v1;
  int v2;
  int *result;

  v1 = 0;
  v2 = a1;
  do
  {
    result = *(int **)(v2 + 4236);
    if ( result )
    {
      Call_RemoveTaskFromTaskList(result);
      result = (int *)4236;
      *(uint *)(v2 + 4236) = 0;
    }
    ++v1;
    v2 += 40;
  }
  while ( v1 < 4 );
  return result;
}

//----- (0224BD28) --------------------------------------------------------
int __fastcall Function_224bd28(int result, int a2, char a3)
{
  int v3;
  int v4;
  int v5;
  char v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v3 = 40 * a2;
  v4 = result + 40 * a2;
  if ( *(uint *)(result + 40 * a2 + 4236) )
  {
    switch ( a3 )
    {
      case 0:
        v5 = result + 4268;
        *(uchar *)(v5 + v3) &= 0xDFu;
        v6 = *(uchar *)(result + 4268 + v3);
        result = 16;
        *(uchar *)(v5 + v3) = v6 & 0xEF;
        break;
      case 1:
        v7 = result + 4268;
        v8 = *(uchar *)(result + 4268 + v3);
        result = v8 | 0x20;
        *(uchar *)(v7 + v3) = v8 | 0x20;
        break;
      case 2:
        v9 = result + 4268;
        v10 = *(uchar *)(result + 4268 + v3);
        result = v10 | 0x10;
        *(uchar *)(v9 + v3) = v10 | 0x10;
        break;
      case 3:
        result += 4268;
        *(uchar *)(result + v3) &= 0xFDu;
        *(uchar *)(result + v3) &= 0xFEu;
        *(uchar *)(result + v3) |= 4u;
        break;
      case 4:
        if ( !(*(uchar *)(v4 + 4268) & 2) )
        {
          *(uchar *)(result + 4268 + v3) |= 2u;
          result = (uint)*(uchar *)(result + 4268 + 40 * a2) << 29 >> 31;
          if ( !result )
          {
            result = *(uint *)(v4 + 4252);
            *(uint *)(v4 + 4264) = result;
          }
        }
        break;
      case 5:
        v11 = result + 4268;
        v12 = *(uchar *)(result + 4268 + v3) & 0xFE;
        result = v12 | 1;
        *(uchar *)(v11 + v3) = v12 | 1;
        break;
      default:
        result = ErrorHandler();
        break;
    }
  }
  return result;
}

//----- (0224BDF0) --------------------------------------------------------
int __fastcall Function_224bdf0(int a1, int a2)
{
  int v2;

  v2 = a1 + 40 * a2;
  if ( !*(uint *)(v2 + 4236) )
    return 1;
  if ( (uint)*(uchar *)(v2 + 4268) << 26 >> 31 != 1 && *(uchar *)(v2 + 4257) )
    return 0;
  return 1;
}

//----- (0224BE24) --------------------------------------------------------
BOOL __fastcall Function_224be24(int a1, int a2)
{
  int v2;
  BOOL result;

  v2 = a1 + 40 * a2;
  if ( *(uint *)(v2 + 4236) )
    result = (uint)*(uchar *)(v2 + 4268) << 30 >> 31 == 1;
  else
    result = 1;
  return result;
}

//----- (0224BE50) --------------------------------------------------------
int __fastcall Function_224be50(int a1, int a2)
{
  int v2;

  v2 = a2;
  Function_224be64(a2);
  return Function_224bf58(v2);
}

//----- (0224BE64) --------------------------------------------------------
uint __fastcall Function_224be64(int *a1)
{
  int *v1;
  uint result;
  int v3;
  long long v4;
  uint v5;
  uint v6;
  uint v7;
  uint v8;
  int v9;
  int v10;
  int v11;
  uint v12;

  v1 = a1;
  result = (uint)*((uchar *)a1 + 36) << 26 >> 31;
  if ( result != 1 )
  {
    result = *((uchar *)v1 + 25);
    if ( *((uchar *)v1 + 25) )
    {
      v3 = *v1;
      v4 = ll_mul(*(ull *)(*v1 + 4436), 10000LL);
      v5 = *(uint *)(v3 + 2820);
      v6 = ull_mod(v4, SHIDWORD(v4), *(uint *)(v3 + 2820));
      v8 = v7;
      ll_udiv();
      v10 = 1;
      if ( __PAIR__(v8, v6) >= v5 >> 1 )
      {
        v10 = 0;
        v9 = 0x4000 - v9;
      }
      v11 = *((uchar *)v1 + 36);
      v1[4] = v9 - 163840;
      v12 = (uint)(v11 << 25) >> 31;
      *((uchar *)v1 + 36) = ((uchar)v10 << 6) & 0x7F | v1[9] & 0xBF;
      if ( (uint)*((uchar *)v1 + 36) << 27 >> 31 == 1 && (v1[4] == -163840 || !v12 && v10 == 1) )
      {
        v1[4] = -163840;
        *((uchar *)v1 + 36) &= 0xEFu;
        *((uchar *)v1 + 36) |= 0x20u;
      }
      *(uint *)(v1[3] + 12) = v1[4] / 256;
      result = Function_224b09c(v1[2], (uint *)v1[3]);
    }
  }
  return result;
}

//----- (0224BF58) --------------------------------------------------------
int __fastcall Function_224bf58(int *a1)
{
  int *v1;
  int v2;
  long long v3;
  uint v4;
  long long v5;
  long long v6;
  int v7;
  uint v8;
  uint v9;
  uint v10;
  int v11;
  int result;
  int v13;
  uint v14;
  uint v15;
  int v16;

  v1 = a1;
  v2 = *a1;
  LODWORD(v3) = *(uint *)(*a1 + 4436);
  HIDWORD(v3) = *(uint *)(v2 + 4440);
  v4 = v1[5];
  v5 = ll_mul(v3, 10000LL);
  LODWORD(v6) = ull_mod(v5, SHIDWORD(v5), (uint)(2 * *(uint *)(*v1 + 2820)));
  ll_mul(v6, 360LL);
  v7 = *(uint *)(*v1 + 2820);
  ll_udiv();
  v9 = v8 << 8;
  v10 = v8 >> 24;
  v1[5] = v8 << 8;
  result = *((uchar *)v1 + 36);
  v13 = (v11 << 8) | v10;
  if ( result & 2 )
    return result;
  if ( (uint)*((uchar *)v1 + 36) << 28 >> 31 == 1 )
  {
    v4 = v9;
    *((uchar *)v1 + 36) &= 0xF7u;
  }
  if ( (uint)*((uchar *)v1 + 36) << 29 >> 31 == 1 )
  {
    if ( __PAIR__((uint)v13, v9) >= v4 )
      v14 = v9;
    else
      v14 = v4 + v9;
    v15 = v1[8];
    if ( v1[8] ^ v9 | v13 && (v4 > v15 || v15 > v14) )
    {
      result = 0;
      if ( __PAIR__((uint)v13, v9) < (uint)v1[8] || __PAIR__((uint)v13, v9) >= v4 )
        return result;
    }
    *((uchar *)v1 + 36) &= 0xFBu;
  }
  if ( (v1[9] & 1) == 1 && (!(v9 | v13) || __PAIR__((uint)v13, v9) < v4) )
  {
    *((uchar *)v1 + 36) &= 0xFEu;
    *((uchar *)v1 + 36) |= 2u;
    v1[8] = 0;
  }
  v16 = *((uchar *)v1 + 25);
  *(uint *)(v1[3] + 4) = (int)(3 * Function_201d1d4((uint)(v1[5] << 8) >> 16)) / 4096
                         + *((short *)dword_22546F4 + 3 * v16)
                         - 3;
  return ((int (__fastcall *)(uint, uint, uint))dword_225B100[0])(
           *(uint *)v1[3],
           *(uint *)(v1[3] + 4),
           *(uint *)(v1[3] + 8));
}

//----- (0224C0C0) --------------------------------------------------------
uint __fastcall Function_224c0c0(uint result, uint a2, uchar *a3)
{
  uint v3;
  uint v4;
  uchar *v5;
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

  v3 = a2;
  v4 = result;
  v5 = a3;
  if ( a2 && !a3 )
    result = ErrorHandler();
  if ( v3 <= 6 )
    JUMPOUT(__CS__, (char *)&off_224C0E8 + *((short *)&off_224C0E8 + v3) + 2);
  switch ( (uchar)result )
  {
    case 0:
      return result;
    case 1:
      v6 = *(uint *)(*(uint *)(v4 + 20) + 4 * *v5);
      Function_2076b10_Dummy();
      result = Function_200b5cc(*(int **)(v4 + 156), 0, v7);
      break;
    case 2:
      v8 = Function_2095848(
             *(uchar *)(*(uint *)v4 + 288),
             *(uchar *)(*(uint *)v4 + 289),
             *(uchar *)(*(uint *)v4 + 369));
      result = (uint)Function_200bba8(*(uint *)(v4 + 156), 0, v8);
      break;
    case 3:
      result = Function_200b60c(*(uint *)(v4 + 156), 0, v5[4], 1, 0, 1);
      break;
    case 4:
      v9 = *v5;
      v10 = *(uchar *)(*(uint *)v4 + v9 + 264);
      Function_200b48c(*(int **)(v4 + 156), 0, *(uint *)(*(uint *)v4 + 4 * v9 + 232));
      v11 = *(uint *)(*(uint *)(v4 + 20) + 4 * *v5);
      Function_2076b10_Dummy();
      result = Function_200b5cc(*(int **)(v4 + 156), 1u, v12);
      break;
    case 5:
      v13 = *(uint *)(*(uint *)(v4 + 20) + 4 * *v5);
      Function_2076b10_Dummy();
      Function_200b5cc(*(int **)(v4 + 156), 0, v14);
      result = Function_200b60c(*(uint *)(v4 + 156), 1u, v5[4], 1, 0, 1);
      break;
    case 6:
      v15 = Function_2095848(
              *(uchar *)(*(uint *)v4 + 288),
              *(uchar *)(*(uint *)v4 + 289),
              *(uchar *)(*(uint *)v4 + 369));
      Function_200bba8(*(uint *)(v4 + 156), 0, v15);
      Function_200b60c(*(uint *)(v4 + 156), 1u, v5[4], 1, 0, 1);
      v16 = *v5;
      v17 = *(uchar *)(*(uint *)v4 + v16 + 264);
      Function_200b48c(*(int **)(v4 + 156), 2u, *(uint *)(*(uint *)v4 + 4 * v16 + 232));
      v18 = *(uint *)(*(uint *)(v4 + 20) + 4 * *v5);
      Function_2076b10_Dummy();
      result = Function_200b5cc(*(int **)(v4 + 156), 3u, v19);
      break;
    default:
      result = ErrorHandler();
      break;
  }
  return result;
}

//----- (0224C244) --------------------------------------------------------
uint __fastcall Function_224c244(uint a1, ushort **a2, uint a3, uint a4, uchar *a5)
{
  uint v5;
  ushort **v6;
  uint v7;
  ushort *v8;
  int v9;
  uint v11;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v11 = a4;
  if ( !*(uchar *)(*(uint *)a1 + 369) )
    Function_2027ac0(*(ushort **)(*(uint *)a1 + 6536));
  v8 = Function_200b1ec_CallMsgDecrypt(v6, v7);
  Function_224c0c0(v5, v11, a5);
  Function_200c388(*(uint **)(v5 + 156), *(uint *)(v5 + 160), (int)v8);
  Function_201ada4_ClearTextBox(v5 + 120, 255);
  v9 = *(uint *)(v5 + 160);
  *(uchar *)(v5 + 2772) = Function_201d738_CallInitTextInterpreter(v5 + 120, 1);
  return Function_20237bc_FreeMsg((int)v8, 2772);
}

//----- (0224C2CC) --------------------------------------------------------
uint __fastcall Function_224c2cc(uint a1, uint a2, uchar *a3)
{
  uint v3;
  uint v4;
  uchar *v5;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( a2 >= 8 )
    ErrorHandler();
  return Function_224c244(
           v4,
           *(ushort ***)(v4 + 152),
           LOWORD(dword_225470C[v3]),
           BYTE2(dword_225470C[v3]),
           v5);
}

//----- (0224C300) --------------------------------------------------------
int __fastcall Function_224c300(int a1)
{
  return Function_201d724(*(uchar *)(a1 + 2772));
}

//----- (0224C310) --------------------------------------------------------
int __fastcall Function_224c310(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_200cc3c(a1, a2, a3, 0x4Cu, 1, 1, 33009);
  Function_200ce24(v3, v4, v5, 0x4Du, 1, 33006);
  return Function_200ce54(v3, v4, v5, 0x4Eu, 1, 33006);
}

//----- (0224C360) --------------------------------------------------------
int __fastcall Function_224c360(int a1)
{
  int v1;

  v1 = a1;
  Function_200d070(a1, 33009);
  Function_200d090(v1, 33006);
  return Function_200d0a0(v1, 33006);
}

//----- (0224C384) --------------------------------------------------------
uint *__fastcall Function_224c384(int a1)
{
  int v1;
  int v2;
  int *v3;
  uint *result;

  v1 = a1;
  if ( *(uint *)(a1 + 528) )
    ErrorHandler();
  v2 = malloc(0x17u, 16);
  MI_CpuFill8((ushort *)v2, 0, 0x10u);
  *(uint *)(v1 + 528) = v2;
  *(uint *)(v2 + 8) = v1;
  v3 = Function_200ce6c(*(uint **)(v1 + 108), *(uint *)(v1 + 112), (short *)dword_22547FC);
  *(uint *)(v2 + 4) = v3;
  Function_200d324(*v3);
  Function_200d3f4(*(uint **)(v2 + 4), 0);
  result = AddTaskToTaskList1((int)Function_224c414, v2, 0x9C4Fu);
  *(uint *)v2 = result;
  return result;
}

//----- (0224C3E4) --------------------------------------------------------
int __fastcall Function_224c3e4(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Call_RemoveTaskFromTaskList(**(int ***)(a1 + 528));
  Function_200d0f4(*(uint *)(*(uint *)(v1 + 528) + 4));
  free(*(uint *)(v1 + 528));
  result = 528;
  *(uint *)(v1 + 528) = 0;
  return result;
}

//----- (0224C414) --------------------------------------------------------
uint __fastcall Function_224c414(int a1, int a2)
{
  if ( !*(uchar *)(a2 + 12) )
    *(uchar *)(a2 + 12) = 1;
  return Function_200d324(**(uint **)(a2 + 4));
}

//----- (0224C434) --------------------------------------------------------
uint __fastcall Function_224c434(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  short v9;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = Function_223f0bc(a4, 3);
  v8 = v7;
  v9 = u32_div_f(v5 * v7, v6);
  Function_200d500(*(int **)(v4 + 4), (short)(v9 - 1 + (256 - v8) / 2), 176, 0x100000);
  return Function_200d3f4(*(uint **)(v4 + 4), 1);
}

//----- (0224C47C) --------------------------------------------------------
uint __fastcall Function_224c47c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_200d500(*(int **)(a1 + 4), -1, 176, 0x100000);
  return Function_200d3f4(*(uint **)(v2 + 4), v3);
}

//----- (0224C49C) --------------------------------------------------------
uint __fastcall Function_224c49c(int a1, int a2, int a3, int a4)
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
  ushort v13;
  uint v14;

  v4 = a4;
  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = Function_223f0bc(a4, 3);
  v9 = u32_div_f(v6 * v8, v7);
  if ( v4 )
  {
    v11 = 10000 * v8 / 8;
  }
  else
  {
    v10 = Function_223f0bc(0, 1);
    v11 = s32_div_f(10000 * v8, v10);
  }
  u32_div_f(10000 * v9, v11);
  v13 = u32_div_f(180 * v12, v11);
  v14 = Function_201d15c(v13);
  Function_200d500(
    *(int **)(v5 + 4),
    (short)(v9 + (256 - v8) / 2),
    (short)(144 - (int)(10 * v14) / 4096),
    0x100000);
  return Function_200d3f4(*(uint **)(v5 + 4), 1);
}

//----- (0224C540) --------------------------------------------------------
uint __fastcall Function_224c540(int a1)
{
  return Function_200d3f4(*(uint **)(a1 + 4), 0);
}

//----- (0224C54C) --------------------------------------------------------
int __fastcall Function_224c54c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = Function_223f0bc(a2, 3);
  Function_200d3f4(*(uint **)(v2 + 4), 1);
  return Function_200d500(
           *(int **)(v2 + 4),
           (int)((256 - v3 + ((uint)(256 - v3) >> 31)) << 15) >> 16,
           144,
           0x100000);
}

//----- (0224C57C) --------------------------------------------------------
int __fastcall Function_224c57c(int a1)
{
  char v2;
  char v3;
  char v4;
  char v5;

  v2 = 3;
  v3 = 3;
  v4 = 4;
  v5 = 4;
  return (uchar)*(&v2 + a1);
}

//----- (0224C5A0) --------------------------------------------------------
int __fastcall Function_224c5a0(uint a1, uint a2, uchar *a3)
{
  uint v3;
  uint v4;
  uchar *v5;
  int result;
  uint v7;
  ushort *v8;
  int v9;
  int v10;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( a2 >= 8 )
    ErrorHandler();
  result = *(uchar *)(v4 + 7181);
  if ( result != 1 )
  {
    Function_200e060(v4 + 136, 1, 1, 0xEu);
    Function_201c3c0(*(uint *)(v4 + 116), 1);
    v7 = v3;
    v8 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v4 + 152), LOWORD(dword_225470C[v7]));
    Function_224c0c0(v4, *(uchar *)(v7 * 4 + 35997454), v5);
    Function_200c388(*(uint **)(v4 + 156), *(uint *)(v4 + 160), (int)v8);
    Function_201ada4_ClearTextBox(v4 + 136, 255);
    v9 = *(uint *)(v4 + 160);
    Function_201d738_CallInitTextInterpreter(v4 + 136, 1);
    Function_20237bc_FreeMsg((int)v8, v10);
    result = 7181;
    *(uchar *)(v4 + 7181) = 1;
  }
  return result;
}

//----- (0224C640) --------------------------------------------------------
int __fastcall Function_224c640(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_200e084(a1 + 136, 1);
  Function_201c3c0(*(uint *)(v1 + 116), 1);
  result = 7181;
  *(uchar *)(v1 + 7181) = 0;
  return result;
}

//----- (0224C660) --------------------------------------------------------
int __fastcall Function_224c660(uint *a1, int a2, int a3)
{
  int v3;

  v3 = a3 * *(uchar *)(a2 + 4) * a1[706];
  return v3 + u32_div_f(a1[707] + (a1[707] + a1[708]) * a3, 10000) - a1[1109];
}

//----- (0224C6A8) --------------------------------------------------------
int __fastcall Function_224c6a8(uint *a1, int a2, int a3)
{
  return Function_224c660(a1, a2, a3);
}

//----- (0224C6B0) --------------------------------------------------------
uint *__fastcall Function_224c6b0(int a1, int a2, uchar *a3)
{
  int v3;
  int v4;
  uchar *v5;
  int v6;
  uint *result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  *a3 = 0;
  v6 = malloc(0x17u, 44);
  MI_CpuFill8((ushort *)v6, 0, 0x2Cu);
  *(uint *)v6 = v3;
  *(uint *)(v6 + 4) = v3 + 24 + 16 * v4;
  *(uint *)(v6 + 8) = v3 + 532 + 24 * v4;
  *(uint *)(v6 + 12) = v5;
  if ( *(uchar *)(v3 + v4 + 2768) == 1 )
    result = AddTaskToTaskList1((int)Function_224c718, v6, 0x9C40u);
  else
    result = AddTaskToTaskList1((int)Function_224c7b8, v6, 0x9C40u);
  return result;
}

//----- (0224C718) --------------------------------------------------------
int __fastcall Function_224c718(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = a1;
  if ( *(uchar *)(a2 + 16) )
  {
    if ( *(uchar *)(a2 + 16) != 1 )
    {
      **(uchar **)(a2 + 12) = 1;
      Function_224ac78(*(uint *)(a2 + 8), 1, 1);
      free(v2);
      return Call_RemoveTaskFromTaskList(v3);
    }
  }
  else
  {
    Function_224ac78(*(uint *)(a2 + 8), 1, 0);
    v4 = *(uint *)(*(uint *)(v2 + 4) + 8) << 8;
    *(uint *)(v2 + 28) = v4;
    *(uint *)(v2 + 24) = v4;
    *(uint *)(v2 + 20) = 1280;
    ++*(uchar *)(v2 + 16);
  }
  *(uint *)(v2 + 24) -= *(uint *)(v2 + 20);
  *(uint *)(v2 + 20) -= 512;
  v5 = *(uint *)(v2 + 28);
  if ( *(uint *)(v2 + 24) >= v5 )
  {
    *(uint *)(v2 + 24) = v5;
    if ( (uchar)++*(uchar *)(v2 + 17) <= 1u )
      *(uchar *)(v2 + 16) = 0;
    else
      ++*(uchar *)(v2 + 16);
  }
  *(uint *)(*(uint *)(v2 + 4) + 8) = *(uint *)(v2 + 24) / 256;
  return ((int (__fastcall *)(uint, uint, uint))dword_225B100[0])(
           **(uint **)(v2 + 4),
           *(uint *)(*(uint *)(v2 + 4) + 4),
           *(uint *)(*(uint *)(v2 + 4) + 8));
}

//----- (0224C7B8) --------------------------------------------------------
int __fastcall Function_224c7b8(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  uint v5;
  int v6;
  int v7;

  v2 = a2;
  v3 = a1;
  if ( *(uchar *)(a2 + 16) )
  {
    if ( *(uchar *)(a2 + 16) != 1 )
    {
      **(uchar **)(a2 + 12) = 1;
      free(a2);
      return Call_RemoveTaskFromTaskList(v3);
    }
  }
  else
  {
    v4 = *(uint *)(*(uint *)(a2 + 4) + 4) << 8;
    *(uint *)(a2 + 40) = v4;
    *(uint *)(a2 + 36) = v4;
    ++*(uchar *)(a2 + 16);
  }
  v5 = Function_201d2b8(*(uint *)(a2 + 32));
  v6 = *(uint *)(v2 + 32) + 204800;
  *(uint *)(v2 + 32) = v6;
  v7 = (int)(4 * v5) / 4096;
  if ( v6 >> 12 >= 360 && (uchar)++*(uchar *)(v2 + 17) > 5u )
  {
    *(uint *)(v2 + 36) = *(uint *)(v2 + 40);
    v7 = 0;
    ++*(uchar *)(v2 + 16);
  }
  *(uint *)(*(uint *)(v2 + 4) + 4) = *(uint *)(v2 + 36) / 256 + v7;
  return ((int (__fastcall *)(uint, uint, uint))dword_225B100[0])(
           **(uint **)(v2 + 4),
           *(uint *)(*(uint *)(v2 + 4) + 4),
           *(uint *)(*(uint *)(v2 + 4) + 8));
}

//----- (0224C848) --------------------------------------------------------
void Function_224c848()
{
  ;
}

//----- (0224C84C) --------------------------------------------------------
int *Function_224c84c()
{
  return G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 1, 62, 0, 0);
}

//----- (0224C864) --------------------------------------------------------
int __fastcall Function_224c864(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = a2;
  v4 = Function_2003164(*(uint *)(a1 + 164), 0);
  return Function_20039f8(v4, *(uint *)(v2 + 4392), 0x1FE3u, HIWORD(dword_22546DC[v3]) & 0xFF, dword_22546DC[v3]);
}

//----- (0224C89C) --------------------------------------------------------
int __fastcall Function_224c89c(int result, uchar *a2)
{
  if ( !a2[7] )
  {
    if ( a2[4] && a2[4] != 1 )
    {
      a2 = (uchar *)5;
    }
    else
    {
      switch ( a2[3] )
      {
        case 1:
          a2 = (uchar *)1;
          break;
        case 2:
          a2 = (uchar *)2;
          break;
        case 3:
          a2 = (uchar *)3;
          break;
        case 4:
          a2 = (uchar *)4;
          break;
        default:
          break;
      }
    }
    result = Function_224c864(result, (int)a2);
  }
  return result;
}

//----- (0224C8E8) --------------------------------------------------------
int __fastcall Function_224c8e8(int a1, int a2)
{
  int v2;
  uchar *v3;
  int v4;
  int v5;
  int result;
  int v7;
  int v8;
  int v9;
  int v10;

  v8 = a2;
  v7 = a1;
  v9 = *(uint *)(a1 + 2820) >> 1;
  v10 = 0;
  v2 = a1;
  v3 = (uchar *)(a1 + 7100);
  while ( 1 )
  {
    if ( (uint)*v3 << 29 >> 31 == 1 )
    {
      v4 = Function_223f0bc(*(uchar *)(v7 + 2843), 4);
      v5 = *(uchar *)(v2 + 7098);
      REG_DIVCNT = 0;
      REG_DIV_NUMER_L = (v5 + v4 / 2) * v9;
      REG_DIV_DENOM_L = 10000;
      REG_DIV_DENOM_H = 0;
      while ( (ushort)REG_DIVCNT & (ushort)((uint)&REG_DIVCNT >> 11) )
        ;
      if ( REG_DIV_RESULT_L == v8 )
        break;
    }
    v3 += 10;
    result = v10 + 1;
    v2 += 10;
    v10 = result;
    if ( result >= 8 )
      return result;
  }
  return Function_224c89c(v7, (uchar *)(v7 + 7092 + 10 * v10));
}

//----- (0224C9A4) --------------------------------------------------------
uint *__fastcall Function_224c9a4(int a1)
{
  int v1;
  uint *result;

  v1 = a1;
  if ( *(uint *)(a1 + 520) )
    ErrorHandler();
  *(uint *)(v1 + 516) = v1;
  result = AddTaskToTaskList1((int)Function_224ca28, v1 + 516, 0x9C40u);
  *(uint *)(v1 + 520) = result;
  return result;
}

//----- (0224C9D4) --------------------------------------------------------
int *__fastcall Function_224c9d4(int a1)
{
  int v1;
  int *result;

  v1 = a1;
  result = *(int **)(a1 + 520);
  if ( result )
  {
    Call_RemoveTaskFromTaskList(result);
    result = (int *)520;
    *(uint *)(v1 + 520) = 0;
  }
  return result;
}

//----- (0224C9F0) --------------------------------------------------------
int __fastcall Function_224c9f0(int a1, int a2)
{
  int v2;
  int v3;
  char v4;

  v2 = a2;
  v3 = a1 + 516;
  if ( !*(uint *)(a1 + 520) )
    ErrorHandler();
  if ( v2 )
    v4 = 48;
  else
    v4 = 64;
  *(uchar *)(v3 + 10) = v4;
  *(uchar *)(v3 + 11) = 1;
  *(ushort *)(v3 + 8) = 2560;
  return Function_2005748(0x6F8u);
}

//----- (0224CA28) --------------------------------------------------------
int __fastcall Function_224ca28(int a1, uchar *a2)
{
  uchar *v2;
  int result;
  int v4;
  uint v5;

  v2 = a2;
  result = a2[11];
  if ( a2[11] )
  {
    v4 = Function_2003164(*(uint *)(*(uint *)a2 + 164), 0);
    Function_200393c(
      v4 + 2 * v2[10],
      *(uint *)(*(uint *)v2 + 4392) + 2 * v2[10],
      0x10u,
      ((int)*((ushort *)v2 + 4) >> 8) & 0xFF,
      0x7FFFu);
    v5 = *((ushort *)v2 + 4);
    if ( *((ushort *)v2 + 4) )
    {
      if ( v5 <= 0x100 )
      {
        result = 0;
        *((ushort *)v2 + 4) = 0;
      }
      else
      {
        result = v5 - 256;
        *((ushort *)v2 + 4) = v5 - 256;
      }
    }
    else
    {
      result = 0;
      v2[11] = 0;
    }
  }
  return result;
}

//----- (0224CA90) --------------------------------------------------------
int __fastcall Function_224ca90(int a1, int a2, int a3, int a4, int a5, int a6)
{
  *(uint *)(a1 + 4412) = a3;
  *(uint *)(a1 + 4416) = a4;
  *(uint *)(a1 + 4420) = a5;
  *(uint *)(a1 + 4424) = a6;
  return Function_20146f4(*(int **)(a1 + 12), a2, (void (__fastcall *)(int))Function_224cac0, a1);
}

//----- (0224CAC0) --------------------------------------------------------
int __fastcall Function_224cac0(int a1)
{
  int v1;
  uint *v2;

  v1 = a1;
  v2 = (uint *)Function_2014764();
  *(uint *)(v1 + 40) = v2[1103] + *(uint *)(**(uint **)(v1 + 32) + 4);
  *(uint *)(v1 + 44) = v2[1104] + *(uint *)(**(uint **)(v1 + 32) + 8);
  *(uint *)(v1 + 48) = v2[1105] + *(uint *)(**(uint **)(v1 + 32) + 12);
  return Function_20147b0(v1, v2[1106]);
}

//----- (0224CB00) --------------------------------------------------------
int __fastcall Function_224cb00(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int result;

  v3 = a1;
  v4 = (**(&off_22546C4 + *(uchar *)(a1 + 2843)))[a2];
  if ( a3 )
  {
    Function_224ca90(a1, 2, v4, -17700, -5248, 4096);
    result = Function_224ca90(v3, 3, v4, -17700, -5248, 4096);
  }
  else
  {
    Function_224ca90(a1, 0, v4, -17700, -5248, 4096);
    result = Function_224ca90(v3, 1, v4, -17700, -5248, 4096);
  }
  return result;
}

//----- (0224CB80) --------------------------------------------------------
int __fastcall Function_224cb80(int a1, int a2)
{
  int v2;

  v2 = a1;
  if ( a2 )
  {
    Function_224ca90(a1, 8, -17000, -6300, -5248, 4096);
    Function_224ca90(v2, 9, -17000, -6300, -5248, 4096);
    Function_224ca90(v2, 10, -17000, -6300, -5248, 4096);
    Function_224ca90(v2, 11, -17000, -6300, -5248, 4096);
    Function_224ca90(v2, 12, -17000, -6300, -5248, 4096);
    Function_224ca90(v2, 8, 16500, -6300, -5248, 4096);
    Function_224ca90(v2, 9, 16500, -6300, -5248, 4096);
    Function_224ca90(v2, 10, 16500, -6300, -5248, 4096);
    Function_224ca90(v2, 11, 16500, -6300, -5248, 4096);
    Function_224ca90(v2, 12, 16500, -6300, -5248, 4096);
  }
  else
  {
    Function_224ca90(a1, 5, -13000, -6300, -5248, 4096);
    Function_224ca90(v2, 6, -13000, -6300, -5248, 4096);
    Function_224ca90(v2, 7, -13000, -6300, -5248, 4096);
    Function_224ca90(v2, 5, 20500, -6300, -5248, 4096);
    Function_224ca90(v2, 6, 20500, -6300, -5248, 4096);
    Function_224ca90(v2, 7, 20500, -6300, -5248, 4096);
  }
  Function_224cd84(v2, 8163, 8, 16, 0, 0x7FFF);
  Function_2003178(*(uint *)(v2 + 164), 4, 0x3FFF, -1, 16, 0, 0x7FFF);
  G2x_SetBlendBrightness_(&REG_BLDCNT, 63, 16);
  AddTaskToTaskList1((int)Function_224cd60, v2, 0x3E8u);
  return Function_2005748(0x6E5u);
}

//----- (0224CD60) --------------------------------------------------------
int __fastcall Function_224cd60(int *a1)
{
  int *v1;

  v1 = a1;
  G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 1, 62, 0, 0);
  return Call_RemoveTaskFromTaskList(v1);
}

//----- (0224CD84) --------------------------------------------------------
int __fastcall Function_224cd84(int a1, short a2, int a3, int a4, int a5, short a6)
{
  int v6;
  int result;

  v6 = a1 + 4392;
  *(ushort *)(v6 + 8) = (ushort)a4 << 8;
  *(ushort *)(v6 + 10) = (ushort)a5 << 8;
  *(ushort *)(v6 + 14) = a6;
  *(ushort *)(v6 + 6) = a2;
  *(ushort *)(v6 + 12) = u32_div_f((a5 - a4) << 8, a3);
  result = 1;
  *(uchar *)(v6 + 16) = 1;
  return result;
}

//----- (0224CDB4) --------------------------------------------------------
int __fastcall Function_224cdb4(int result, char a2)
{
  *(uchar *)(result + 4409) = a2;
  return result;
}

//----- (0224CDC0) --------------------------------------------------------
int __fastcall Function_224cdc0(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v9;

  v3 = a1;
  v9 = a2;
  if ( a3 )
  {
    v4 = 9546;
    v5 = 0x7FFF;
  }
  else
  {
    v4 = 0x7FFF;
    v5 = 9546;
  }
  v6 = 0;
  do
  {
    v7 = *(uint *)(v3 + 24);
    if ( v6 == v9 )
      ((void (__fastcall *)(int, int))dword_225B198[0])(v7, v4);
    else
      ((void (__fastcall *)(int, int))dword_225B198[0])(v7, v5);
    ++v6;
    v3 += 16;
  }
  while ( v6 < 4 );
  return Function_2005748(0x6ECu);
}

//----- (0224CE08) --------------------------------------------------------
int __fastcall Function_224ce08(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = 0;
  do
  {
    result = ((int (__fastcall *)(uint, int))dword_225B198[0])(*(uint *)(v1 + 24), 0x7FFF);
    ++v2;
    v1 += 16;
  }
  while ( v2 < 4 );
  return result;
}

//----- (0224CE28) --------------------------------------------------------
char *__fastcall Function_224ce28(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  short v6;
  int i;
  int j;
  int v9;
  int v10;
  int v11;
  int v12;
  char v13;
  char *result;
  int v15;
  int k;
  int v17;
  char v18[4];
  char v19[4];
  char v20[8];
  int v21;

  v21 = a4;
  v17 = a1;
  v4 = 0;
  while ( v4 < 4 )
  {
    v5 = 2 * v4;
    v6 = *(ushort *)(v17 + 2 * v4 + 2806);
    v19[v4] = v4;
    ++v4;
    *(ushort *)&v20[v5] = v6;
  }
  for ( i = 0; i < 3; ++i )
  {
    for ( j = 3; j > i; --j )
    {
      v9 = j - 1;
      v10 = 2 * (j - 1);
      v11 = *(short *)&v20[v10];
      v12 = *(short *)&v20[2 * j];
      if ( v11 < v12 )
      {
        *(ushort *)&v20[2 * j] = v11;
        *(ushort *)&v20[v10] = v12;
        v13 = v19[j];
        v19[j] = v19[v9];
        v19[v9] = v13;
      }
    }
  }
  result = v18;
  v15 = 1;
  v18[0] = 0;
  while ( v15 < 4 )
  {
    v18[v15] = byte_22549C0[v15];
    result = (char *)*(short *)&v20[2 * v15];
    if ( result == (char *)*(short *)&v20[2 * (v15 - 1)] )
    {
      result = (char *)(uchar)v18[v15 - 1];
      v18[v15] = (char)result;
    }
    ++v15;
  }
  for ( k = 0; k < 4; ++k )
    result = (char *)Function_224cee4(v17, (uchar)v19[k], 0x7FFF, 9546, (uchar)v18[k], 30, 0);
  return result;
}

//----- (0224CEE4) --------------------------------------------------------
uint *__fastcall Function_224cee4(int a1, int a2, int a3, short a4, int a5, int a6, uchar *a7)
{
  int v7;
  int v8;
  int v9;
  short v10;
  uint *v11;

  v7 = a1;
  v8 = a2;
  v9 = a3;
  v10 = a4;
  v11 = (uint *)malloc(0x17u, 20);
  MI_CpuFill8(v11, 0, 0x14u);
  *v11 = *(uint *)(v7 + 16 * v8 + 24);
  *((ushort *)v11 + 4) = v9;
  *((ushort *)v11 + 5) = v10;
  *((uchar *)v11 + 16) = a5;
  *((ushort *)v11 + 6) = s32_div_f(a5 << 8, a6);
  v11[1] = a7;
  if ( a7 )
    *a7 = 0;
  ((void (__fastcall *)(uint, int))dword_225B198[0])(*v11, v9);
  return AddTaskToTaskList1((int)Function_224cf4c, (int)v11, 0x9C40u);
}

//----- (0224CF4C) --------------------------------------------------------
int __fastcall Function_224cf4c(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  int result;
  uchar *v6;
  char v7;

  v2 = a2;
  v3 = a1;
  *(ushort *)(v2 + 14) = *(ushort *)(a2 + 14) + *(ushort *)(v2 + 12);
  v4 = (int)*(ushort *)(a2 + 14) >> 8;
  if ( v4 > *(uchar *)(a2 + 16) )
    v4 = *(uchar *)(a2 + 16);
  Function_200393c(a2 + 8, (int)&v7, 1u, (uchar)v4, *(ushort *)(a2 + 10));
  ((void (__fastcall *)(uint, uint))dword_225B198[0])(*(uint *)v2, *(ushort *)&v7);
  result = *(uchar *)(v2 + 16);
  if ( v4 >= result )
  {
    v6 = *(uchar **)(v2 + 4);
    if ( v6 )
      *v6 = 1;
    free(v2);
    result = Call_RemoveTaskFromTaskList(v3);
  }
  return result;
}

//----- (0224CFA8) --------------------------------------------------------
BOOL __fastcall Function_224cfa8(int a1)
{
  return a1 != 50 && a1 != 51;
}

//----- (0224CFB8) --------------------------------------------------------
int __fastcall Function_224cfb8(int a1, int a2, int a3, int a4)
{
  void **v5;
  short v6;
  char v7;
  char v8;
  char v9;
  int v10;

  v10 = a4;
  v5 = &off_22549E4;
  v6 = 13;
  v7 = *(uchar *)(*(uint *)a1 + 291);
  v9 = *(uchar *)(*(uint *)a1 + 284);
  v8 = *(uchar *)(*(uint *)a1 + 369);
  return Function_224f18c(a1 + 4468, &v5);
}

//----- (0224CFF8) --------------------------------------------------------
int __fastcall Function_224cff8(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a1, 255, a3);
}

//----- (0224D00C) --------------------------------------------------------
int __fastcall Function_224d00c(int a1, int a2, int a3)
{
  return Function_224f26c(a1, a3);
}

//----- (0224D01C) --------------------------------------------------------
void Function_224d01c()
{
  ;
}

//----- (0224D020) --------------------------------------------------------
int __fastcall Function_224d020(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a1, 255, a3);
}

//----- (0224D034) --------------------------------------------------------
uint *__fastcall Function_224d034(int a1, int a2, ushort *a3)
{
  int v3;
  int v4;
  ushort *v5;
  int v6;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = malloc(0x17u, 24);
  MI_CpuFill8((ushort *)v6, 0, 0x18u);
  *(uint *)v6 = v4;
  *(ushort *)(v6 + 4) = *v5;
  *(ushort *)(v6 + 6) = v5[1];
  *(ushort *)(v6 + 8) = v5[2];
  *(ushort *)(v6 + 10) = v5[3];
  *(uint *)(v6 + 12) = v3;
  return AddTaskToTaskList1((int)Function_224d078, v6, 0x7530u);
}

//----- (0224D078) --------------------------------------------------------
uint __fastcall Function_224d078(int *a1, int a2)
{
  int *v2;
  int v3;
  char v4;
  int v5;
  char v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  short v14;
  int v15;
  int v16;
  uint result;
  uchar *v18;
  int v19;
  int j;
  int i;

  v2 = a1;
  v18 = (uchar *)a2;
  if ( *(uchar *)(a2 + 16) )
  {
    Function_224f26c(*(uint *)(a2 + 12), a2 + 4);
    free((int)v18);
    result = Call_RemoveTaskFromTaskList(v2);
  }
  else
  {
    v3 = *(char *)(a2 + 20);
    if ( v3 <= 0 )
    {
      v5 = *(char *)(a2 + 19);
      if ( v5 <= 0 )
      {
        *(uchar *)(a2 + 19) = 1;
        v7 = Function_2019fe4(*(uint *)(*(uint *)a2 + 116), 2);
        for ( i = 0; i < 4; ++i )
        {
          v8 = *((char *)dword_22549C4 + (char)v18[17]);
          if ( v8 + i >= 0 )
          {
            v9 = v7 + ((v8 + i) << 6);
            v10 = 0;
            v19 = 0;
            v11 = (ushort)a08_0[(uchar)v18[18]] + 32 * i;
            while ( v19 < 4 )
            {
              v12 = 0;
              while ( v12 < 8 )
              {
                v13 = 2 * (v10 + v12);
                *(ushort *)(v9 + v13) &= 0xFC00u;
                v14 = v11 + v12++;
                *(ushort *)(v9 + v13) |= v14;
              }
              v10 += 8;
              ++v19;
            }
          }
        }
        v15 = (char)v18[17];
        if ( v15 > 0 && !v18[18] )
        {
          v16 = v7 + (*((char *)dword_22549C4 + v15 - 1) << 6);
          for ( j = 0; j < 32; ++j )
            *(ushort *)(v16 + 2 * j) &= 0xFC00u;
        }
        Function_201c3c0(*(uint *)(*(uint *)v18 + 116), 2);
        result = (uchar)++v18[18];
        if ( result >= 0xC )
        {
          v18[18] = 0;
          ++v18[17];
          v18[20] = 0;
          result = (char)v18[17];
          if ( result >= 5 )
          {
            result = (uint)v18;
            ++v18[16];
          }
        }
      }
      else
      {
        v6 = v5 - 1;
        result = (uint)v18;
        v18[19] = v6;
      }
    }
    else
    {
      v4 = v3 - 1;
      result = (uint)v18;
      v18[20] = v4;
    }
  }
  return result;
}

//----- (0224D1D4) --------------------------------------------------------
int __fastcall Function_224d1d4(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a1, 255, a3);
}

//----- (0224D1E8) --------------------------------------------------------
int __fastcall Function_224d1e8(int a1, int a2, ushort *a3)
{
  int v3;
  int v4;
  ushort *v5;
  int v6;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = malloc(0x17u, 24);
  MI_CpuFill8((ushort *)v6, 0, 0x18u);
  *(uint *)v6 = v4;
  *(ushort *)(v6 + 4) = *v5;
  *(ushort *)(v6 + 6) = v5[1];
  *(ushort *)(v6 + 8) = v5[2];
  *(ushort *)(v6 + 10) = v5[3];
  *(uint *)(v6 + 12) = v3;
  AddTaskToTaskList1((int)Function_224d240, v6, 0x7530u);
  *(uchar *)(v4 + 4432) = 0;
  return Function_200549c(0x46Fu);
}

//----- (0224D240) --------------------------------------------------------
uint __fastcall Function_224d240(int *a1, int a2)
{
  int *v2;
  int v3;
  char v4;
  int v5;
  char v6;
  int v7;
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
  uint result;
  uchar *v19;
  int v20;
  uint j;
  int i;

  v2 = a1;
  v19 = (uchar *)a2;
  if ( *(uchar *)(a2 + 16) )
  {
    Function_224f26c(*(uint *)(a2 + 12), a2 + 4);
    free((int)v19);
    result = Call_RemoveTaskFromTaskList(v2);
  }
  else
  {
    v3 = *(char *)(a2 + 20);
    if ( v3 <= 0 )
    {
      v5 = *(char *)(a2 + 19);
      if ( v5 <= 0 )
      {
        *(uchar *)(a2 + 19) = 1;
        v7 = Function_2019fe4(*(uint *)(*(uint *)a2 + 116), 2);
        for ( i = 0; i < 4; ++i )
        {
          v8 = *((char *)dword_22549C4 + 4 - (char)v19[17]);
          if ( v8 + i >= 0 )
          {
            v9 = v7 + ((v8 + i) << 6);
            v10 = 0;
            v20 = 0;
            v11 = (ushort)a08_0[11 - (uchar)v19[18]] + 32 * i;
            while ( v20 < 4 )
            {
              v12 = 0;
              while ( v12 < 8 )
              {
                v13 = 2 * (v10 + v12);
                *(ushort *)(v9 + v13) &= 0xFC00u;
                v14 = v11 + v12++;
                *(ushort *)(v9 + v13) |= v14;
              }
              v10 += 8;
              ++v20;
            }
          }
        }
        v15 = (char)v19[17];
        if ( v15 > 0 && !v19[18] )
        {
          v16 = v7 + ((*((char *)dword_22549C4 + 5 - v15) + 3) << 6);
          for ( j = 0; (int)j < 32; ++j )
          {
            v17 = 2 * j;
            *(ushort *)(v16 + v17) = *(ushort *)(v16 + 2 * j) & 0xFC00;
            *(ushort *)(v16 + v17) = ((j >> 31) + __ROR4__((j << 29) - (j >> 31), 29) + 512) | *(ushort *)(v16 + 2 * j);
          }
        }
        Function_201c3c0(*(uint *)(*(uint *)v19 + 116), 2);
        result = (uchar)++v19[18];
        if ( result >= 0xC )
        {
          v19[18] = 0;
          ++v19[17];
          v19[20] = 0;
          result = (char)v19[17];
          if ( result >= 5 )
          {
            result = (uint)v19;
            ++v19[16];
          }
        }
      }
      else
      {
        v6 = v5 - 1;
        result = (uint)v19;
        v19[19] = v6;
      }
    }
    else
    {
      v4 = v3 - 1;
      result = (uint)v19;
      v19[20] = v4;
    }
  }
  return result;
}

//----- (0224D3C4) --------------------------------------------------------
int __fastcall Function_224d3c4(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a1, 255, a3);
}

//----- (0224D3D8) --------------------------------------------------------
uint *__fastcall Function_224d3d8(int a1, int a2, ushort *a3)
{
  int v3;
  int v4;
  ushort *v5;
  int v6;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = malloc(0x17u, 20);
  MI_CpuFill8((ushort *)v6, 0, 0x14u);
  *(uint *)v6 = v4;
  *(ushort *)(v6 + 4) = *v5;
  *(ushort *)(v6 + 6) = v5[1];
  *(ushort *)(v6 + 8) = v5[2];
  *(ushort *)(v6 + 10) = v5[3];
  *(uint *)(v6 + 12) = v3;
  return AddTaskToTaskList1((int)Function_224d41c, v6, 0x7530u);
}

//----- (0224D41C) --------------------------------------------------------
int __fastcall Function_224d41c(int *a1, int a2)
{
  int v2;
  int *v3;
  int result;

  v2 = a2;
  v3 = a1;
  result = *(uchar *)(a2 + 16);
  switch ( (uchar)a2 )
  {
    case 0:
      Function_20055d0(1135, 30);
      result = *(uchar *)(v2 + 16) + 1;
      *(uchar *)(v2 + 16) = result;
      break;
    case 1:
      result = Function_2005684();
      if ( !result )
      {
        result = *(uchar *)(v2 + 16) + 1;
        *(uchar *)(v2 + 16) = result;
      }
      break;
    case 2:
      REG_BLDCNT = 0;
      Function_224c84c();
      Function_224abdc(*(uint *)v2 + 20, 1);
      Function_2005748(0x6ECu);
      result = *(uchar *)(v2 + 16) + 1;
      *(uchar *)(v2 + 16) = result;
      break;
    case 3:
      result = (short)++*(ushort *)(a2 + 18);
      if ( result > 30 )
      {
        *(ushort *)(a2 + 18) = 0;
        result = *(uchar *)(a2 + 16) + 1;
        *(uchar *)(a2 + 16) = result;
      }
      break;
    case 4:
      Function_224c6b0(*(uint *)a2, *(uchar *)(**(uint **)a2 + 291), (uchar *)(a2 + 17));
      result = *(uchar *)(v2 + 16) + 1;
      *(uchar *)(v2 + 16) = result;
      break;
    case 5:
      if ( *(uchar *)(a2 + 17) == 1 )
        *(uchar *)(a2 + 16) = ++result;
      break;
    default:
      Function_224f26c(*(uint *)(a2 + 12), a2 + 4);
      free(v2);
      result = Call_RemoveTaskFromTaskList(v3);
      break;
  }
  return result;
}

//----- (0224D4EC) --------------------------------------------------------
int __fastcall Function_224d4ec(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a1, 255, a3);
}

//----- (0224D500) --------------------------------------------------------
int __fastcall Function_224d500(int a1, int a2, int a3, int a4)
{
  int v4;
  uchar **v5;
  int v6;
  int v7;
  char v8;
  int v9;
  int result;

  v4 = a1;
  v5 = (uchar **)a2;
  v6 = a3;
  *(uchar *)(a2 + 7180) = 1;
  v7 = 0;
  do
  {
    v8 = *(uchar *)(a4 + v7);
    v9 = (int)&(*v5)[v7++];
    *(uchar *)(v9 + 370) = v8;
  }
  while ( v7 < 4 );
  result = Function_2094edc(*v5);
  if ( !result )
    result = Function_224f26c(v4, v6);
  return result;
}

//----- (0224D544) --------------------------------------------------------
int __fastcall Function_224d544(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a1, 255, a3);
}

//----- (0224D558) --------------------------------------------------------
int __fastcall Function_224d558(int a1, int a2, ushort *a3, int *a4)
{
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int *v8;
  int v9;
  short v10;
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
  int v22;
  int v23;
  int *v24;
  int v25;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v24 = a4;
  v7 = malloc(0x17u, 348);
  MI_CpuFill8((ushort *)v7, 0, 0x15Cu);
  *(uint *)v7 = v4;
  v8 = (int *)(v7 + 24);
  *(ushort *)(v7 + 4) = *v6;
  v9 = 7;
  *(ushort *)(v7 + 6) = v6[1];
  *(ushort *)(v7 + 8) = v6[2];
  v10 = v6[3];
  v11 = v24;
  *(ushort *)(v7 + 10) = v10;
  *(uint *)(v7 + 12) = v5;
  do
  {
    v12 = *v11;
    v13 = v11[1];
    v11 += 2;
    *v8 = v12;
    v8[1] = v13;
    v8 += 2;
    --v9;
  }
  while ( v9 );
  *v8 = *v11;
  *(uint *)(v7 + 84) = v4;
  AddTaskToTaskList1((int)Function_224d710, v7, 0x7530u);
  v14 = 0;
  v15 = v7;
  do
  {
    if ( v14 >= *(uchar *)(*(uint *)v4 + 295) )
      v16 = Function_224d668(v4, 1);
    else
      v16 = Function_224d668(v4, 0);
    *(uint *)(v15 + 332) = v16;
    ++v14;
    v15 += 4;
  }
  while ( v14 < 4 );
  v17 = 0;
  while ( *(uchar *)(**(uint **)v7 + 291) != *(uchar *)(v7 + v17 + 26) )
  {
    if ( ++v17 >= 4 )
      goto LABEL_12;
  }
  *(uchar *)(*(uint *)v7 + 2792) = v17;
LABEL_12:
  Function_224df54(v4);
  result = 295;
  v19 = *(uchar *)(*(uint *)v4 + 295);
  if ( v19 < 4 )
  {
    v20 = (int)&v24[v19];
    v25 = v7 + 92 + 60 * v19;
    do
    {
      v21 = 0;
      do
      {
        if ( v19 == *(uchar *)(v7 + v21 + 26) )
          break;
        ++v21;
      }
      while ( v21 < 4 );
      v22 = *(uchar *)(*(uint *)v4 + v19 + 268);
      v23 = *(uint *)(v20 + 20);
      Function_224e930(v25, v19++);
      result = v25 + 60;
      v20 += 4;
      v25 += 60;
    }
    while ( v19 < 4 );
  }
  return result;
}

//----- (0224D668) --------------------------------------------------------
int __fastcall Function_224d668(int a1, char a2)
{
  int v2;
  char v3;
  int v4;

  v2 = a1;
  v3 = a2;
  v4 = malloc(0x17u, 20);
  MI_CpuFill8((ushort *)v4, 0, 0x14u);
  *(uint *)(v4 + 4) = v2;
  *(uchar *)(v4 + 18) = v3;
  *(uint *)v4 = AddTaskToTaskList1((int)Function_224d6cc, v4, 0x7594u);
  return v4;
}

//----- (0224D69C) --------------------------------------------------------
uint __fastcall Function_224d69c(int **a1)
{
  int v1;

  v1 = (int)a1;
  Call_RemoveTaskFromTaskList(*a1);
  return free(v1);
}

//----- (0224D6B0) --------------------------------------------------------
int __fastcall Function_224d6b0(int result, ushort *a2)
{
  *(ushort *)(result + 8) = *a2;
  *(ushort *)(result + 10) = a2[1];
  *(ushort *)(result + 12) = a2[2];
  *(ushort *)(result + 14) = a2[3];
  *(ushort *)(result + 16) = a2[4];
  *(uchar *)(result + 19) = 1;
  return result;
}

//----- (0224D6CC) --------------------------------------------------------
int __fastcall Function_224d6cc(int a1, int a2)
{
  int v2;
  int result;
  int v4;

  v2 = a2;
  result = *(uchar *)(a2 + 19);
  if ( *(uchar *)(a2 + 19) )
  {
    v4 = *(uint *)(a2 + 4);
    if ( *(uchar *)(*(uint *)v4 + 369) && *(uchar *)(a2 + 18) != 1 )
    {
      result = Function_20360d0(25, a2 + 8);
      if ( result == 1 )
      {
        result = 0;
        *(uchar *)(v2 + 19) = 0;
      }
    }
    else
    {
      Function_224b20c(v4, a2 + 8);
      result = 0;
      *(uchar *)(v2 + 19) = 0;
    }
  }
  return result;
}

//----- (0224D710) --------------------------------------------------------
int __fastcall Function_224d710(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  uint v7;
  uint v8;
  uint v9;
  int result;
  long long v11;
  int v12;
  uchar v13;
  int v14;
  long long v15;
  uint v16;
  int v17;
  uint *v18;
  int v19;
  int v20;
  int v21;
  uchar v22;
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
  int *v36;
  int *v37;
  BOOL v38;
  uint v39;
  char v40;
  char v41;
  int v42;
  int v43;
  int v44;

  v44 = a4;
  v4 = (int *)a2;
  v5 = *(uint *)a2;
  v37 = a1;
  v6 = *(uchar *)(**(uint **)a2 + 291) != *(uchar *)(a2 + 24);
  v7 = *(uint *)(a2 + 36);
  v39 = *(uint *)(v5 + 4436) - *(uint *)(v5 + 4444);
  v38 = v39 >= v7 >> 1;
  v8 = *(uchar *)(a2 + 16);
  if ( v8 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_224D75E + v8) + 35968864);
  switch ( (uchar)v8 )
  {
    case 0:
      Function_224b068();
      Function_224bc4c(*v4);
      Function_224e990(*v4, &v4[15 * *((uchar *)v4 + 24) + 23], v4[9], v4[8]);
      Function_224c54c(*(uint *)(*v4 + 528), *(uchar *)(*v4 + 2843));
      Function_224c47c(*v4 + 2484, 1);
      Function_224c864(*v4, 0);
      Function_224c9a4(*v4);
      v41 = *((uchar *)v4 + 65);
      v9 = *v4;
      if ( v6 )
        Function_224c5a0(v9, 5u, (uchar *)&v40);
      else
        Function_224c5a0(v9, 4u, (uchar *)&v40);
      result = *((uchar *)v4 + 16) + 1;
      *((uchar *)v4 + 16) = result;
      break;
    case 1:
      LODWORD(v11) = Function_224c6a8((uint *)v5, a2 + 60, *(uchar *)(a2 + 25));
      v13 = __OFSUB__(0, HIDWORD(v11) + ((uint)v11 > 0));
      v12 = (ull)-v11 >> 32;
      result = -(int)v11;
      if ( !((v12 < 0) ^ v13) )
      {
        Function_224c640(*v4);
        v14 = *v4;
        LODWORD(v15) = Function_224c6a8((uint *)*v4, (int)(v4 + 15), *((uchar *)v4 + 25));
        *(ull *)(v14 + 4444) = *(ull *)(v14 + 4436) + v15;
        if ( !v6 )
        {
          Function_224c9f0(*v4, 0);
          ++*((uchar *)v4 + 17);
        }
        Function_224cdc0(*v4, *((uchar *)v4 + 24), 0);
        result = *((uchar *)v4 + 16) + 1;
        *((uchar *)v4 + 16) = result;
      }
      break;
    case 2:
      Function_224a368(v5 + 20, v39, v7, *(uchar *)(v5 + 2843));
      Function_224c49c(
        *(uint *)(*v4 + 528),
        *(uint *)(*v4 + 4436) - *(uint *)(*v4 + 4444),
        v4[9],
        *(uchar *)(*v4 + 2843));
      Function_224c434(
        *v4 + 2484,
        *(uint *)(*v4 + 4436) - *(uint *)(*v4 + 4444),
        v4[9],
        *(uchar *)(*v4 + 2843));
      v16 = v4[9];
      if ( v39 < v16 )
      {
        v23 = *(uchar *)(*v4 + 2792);
        if ( v6 )
        {
          if ( v39 >= v16 >> 1 != 1
            || *((uchar *)v4 + 23) >= (uint)*((uchar *)v4 + 65)
            || v39 >= v16 - u32_div_f((uint)v4[8] >> 2, 10000) )
          {
            Function_224dc1c(v4 + 21, &v42, 1, 1);
          }
          else
          {
            Function_224dc1c(v4 + 21, &v42, 0, 0);
            if ( !*((uchar *)v4 + 17) )
            {
              Function_224c9f0(*v4, v6);
              ++*((uchar *)v4 + 17);
            }
          }
          if ( v42 != -1 )
          {
            v28 = *((uchar *)v4 + 23);
            v29 = *((uchar *)v4 + 65);
            v30 = *(uchar *)(*v4 + 2843);
            v31 = v4[8];
            Function_224de54(*(uchar *)(*(uint *)*v4 + 291));
            Function_224d6b0(v4[*(uchar *)(*(uint *)*v4 + 291) + 83], &v43);
            ++*((uchar *)v4 + 23);
          }
        }
        else
        {
          if ( v39 >= v16 >> 1
            || *((uchar *)v4 + 23) >= (uint)*((uchar *)v4 + 65)
            || v39 >= (v16 >> 1) - u32_div_f((uint)v4[8] >> 2, 10000) )
          {
            Function_224dc1c(v4 + 21, &v42, 1, 1);
          }
          else
          {
            Function_224dc1c(v4 + 21, &v42, 0, 0);
          }
          if ( v42 != -1 )
          {
            v24 = *((uchar *)v4 + 23);
            v25 = *((uchar *)v4 + 65);
            v26 = *(uchar *)(*v4 + 2843);
            v27 = v4[8];
            Function_224de54(*(uchar *)(*(uint *)*v4 + 291));
            Function_224d6b0(v4[*(uchar *)(*(uint *)*v4 + 291) + 83], &v43);
            ++*((uchar *)v4 + 23);
          }
        }
        v32 = *(uchar *)(*(uint *)*v4 + 295);
        if ( v32 < 4 )
        {
          v33 = (int)&v4[v32];
          v34 = (int)&v4[15 * v32 + 23];
          do
          {
            Function_224ed8c(v38, *v4, v34, v39, v4[9], v4[8], v4 + 15, *(uint *)(v33 + 332));
            ++v32;
            v33 += 4;
            v34 += 60;
          }
          while ( v32 < 4 );
        }
        if ( v38 == 1 && !*((uchar *)v4 + 18) )
        {
          Function_224cdc0(*v4, *((uchar *)v4 + 24), 1);
          ++*((uchar *)v4 + 18);
        }
        result = v38;
        if ( v38 == 1 )
          result = Function_224c8e8(*v4, v39);
      }
      else
      {
        ++*((uchar *)v4 + 22);
        v17 = *(uint *)(*v4 + 4440);
        v18 = (uint *)(*v4 + 4444);
        *v18 = *(uint *)(*v4 + 4436);
        v18[1] = v17;
        *((uchar *)v4 + 17) = 0;
        *((uchar *)v4 + 18) = 0;
        Function_224df54(*v4);
        *((uchar *)v4 + 23) = 0;
        v19 = *(uchar *)(*(uint *)*v4 + 295);
        if ( v19 < 4 )
        {
          v20 = (int)&v4[15 * v19 + 23];
          do
          {
            Function_224e958(v20);
            ++v19;
            v20 += 60;
          }
          while ( v19 < 4 );
        }
        Function_224a580(*v4 + 20);
        Function_224bc4c(*v4);
        Function_224e990(*v4, &v4[15 * *((uchar *)v4 + 24) + 23], v4[9], v4[8]);
        Function_224c864(*v4, 0);
        v21 = *v4;
        if ( *((uchar *)v4 + 22) >= (uint)*((uchar *)v4 + 64) )
        {
          Function_224ce08(v21);
          v22 = __CFADD__(*v4, 20);
          Function_224b068();
          result = *((uchar *)v4 + 16) + 1;
          *((uchar *)v4 + 16) = result;
        }
        else
        {
          result = Function_224cdc0(v21, *((uchar *)v4 + 24), 0);
          if ( !v6 )
          {
            result = *((uchar *)v4 + 17);
            if ( !*((uchar *)v4 + 17) )
            {
              Function_224c9f0(*v4, 0);
              result = *((uchar *)v4 + 17) + 1;
              *((uchar *)v4 + 17) = result;
            }
          }
        }
      }
      break;
    case 3:
      result = Function_224dc1c(a2 + 84, &v42, 1, 0);
      if ( result == 1 )
      {
        Function_224a580(*v4 + 20);
        Function_224a368(*v4 + 20, 0, v4[9], *(uchar *)(*v4 + 2843));
        Function_224c540(*(uint *)(*v4 + 528));
        Function_224c47c(*v4 + 2484, 0);
        v22 = __CFADD__(*v4, 20);
        Function_224b068();
        Function_224c864(*v4, 0);
        Function_224c9d4(*v4);
        if ( Function_2249814(*(uint *)(*v4 + 4428)) )
          Function_224a0e0(*(uint *)(*v4 + 4428), 0, 6u);
        result = *((uchar *)v4 + 16) + 1;
        *((uchar *)v4 + 16) = result;
      }
      break;
    default:
      Function_224f26c(*(uint *)(a2 + 12), a2 + 4);
      v35 = 0;
      v36 = v4;
      do
      {
        Function_224d69c((int **)v36[83]);
        ++v35;
        ++v36;
      }
      while ( v35 < 4 );
      free((int)v4);
      result = Call_RemoveTaskFromTaskList(v37);
      break;
  }
  return result;
}

//----- (0224DC1C) --------------------------------------------------------
int __fastcall Function_224dc1c(uchar *a1, int *a2, int a3, int a4)
{
  int v4;
  uchar *v5;
  int *v6;
  int v7;
  uchar v8;
  int v9;
  int v10;
  int v12;

  v4 = 0;
  v5 = a1;
  v6 = a2;
  v7 = a3;
  v12 = a4;
  *a2 = -1;
  if ( !a3 )
  {
    v8 = a1[5];
    if ( v5[5] )
    {
      v5[5] = v8 - 1;
      if ( !v5[5] )
        Function_224a0e0(*(uint *)(*(uint *)v5 + 4428), 0, 0);
    }
  }
  v9 = v5[4];
  if ( v5[4] )
  {
    if ( v9 == 1 )
    {
      if ( v7 == 1 || v5[5] )
      {
        v4 = 1;
      }
      else
      {
        v10 = Function_2249760(*(uint *)(*(uint *)v5 + 4428));
        *v6 = v10;
        if ( v10 == -1 )
        {
          v4 = 1;
        }
        else
        {
          v5[5] = u32_div_f(*(uint *)(*(uint *)v5 + 2820), 10000);
          v5[5] -= 2;
          ++v5[4];
        }
      }
    }
    else if ( v9 == 2 && Function_2249804(*(uint *)(*(uint *)v5 + 4428)) == 1 )
    {
      if ( v5[5] )
        Function_224a0e0(*(uint *)(*(uint *)v5 + 4428), 0, 6u);
      v5[4] = 1;
    }
  }
  else if ( v7 || v12 )
  {
    v4 = 1;
  }
  else
  {
    v5[5] = 0;
    Function_224a0e0(*(uint *)(*(uint *)v5 + 4428), 0, 0);
    ++v5[4];
  }
  if ( v12 == 1 && v4 == 1 && Function_2249814(*(uint *)(*(uint *)v5 + 4428)) )
  {
    Function_224a0e0(*(uint *)(*(uint *)v5 + 4428), 0, 6u);
    v5[4] = 0;
  }
  return v4;
}

//----- (0224DD28) --------------------------------------------------------
int __fastcall Function_224dd28(char a1)
{
  int result;

  switch ( a1 )
  {
    case 0:
      result = 1;
      break;
    case 1:
      result = 2;
      break;
    case 2:
      result = 3;
      break;
    case 3:
      result = 4;
      break;
    default:
      ErrorHandler();
      result = 0;
      break;
  }
  return result;
}

//----- (0224DD5C) --------------------------------------------------------
int __fastcall Function_224dd5c(char a1)
{
  int result;

  switch ( a1 )
  {
    case 1:
      result = 0;
      break;
    case 2:
      result = 1;
      break;
    case 3:
      result = 2;
      break;
    case 4:
      result = 3;
      break;
    default:
      ErrorHandler();
      result = 0;
      break;
  }
  return result;
}

//----- (0224DD90) --------------------------------------------------------
int __fastcall Function_224dd90(int a1, uchar *a2, uchar *a3, uchar *a4)
{
  int result;

  if ( a1 > *a2 )
  {
    if ( a1 > a2[1] )
    {
      if ( a1 > a2[2] )
      {
        if ( a1 > a2[3] )
        {
          *a3 = 2;
          result = 4;
          *a4 = 4;
        }
        else
        {
          *a3 = 1;
          result = 3;
          *a4 = 3;
        }
      }
      else
      {
        *a3 = 1;
        result = 2;
        *a4 = 2;
      }
    }
    else
    {
      *a3 = 0;
      result = 1;
      *a4 = 1;
    }
  }
  else
  {
    result = 0;
    *a3 = 0;
    *a4 = 0;
  }
  return result;
}

//----- (0224DDE4) --------------------------------------------------------
uint *__fastcall Function_224dde4(int a1, uint a2, uint *a3, uint *a4)
{
  uint *v4;
  int v5;
  int v6;
  uint v7;
  uint v8;
  int v9;
  uint v10;
  int v11;
  int v12;
  uint v13;
  int v14;
  uint *result;
  uint *v16;
  int v17;

  v4 = a3;
  v5 = a1;
  v6 = 0;
  v16 = a4;
  v7 = 10000 * v5;
  v8 = a2 >> 1;
  v9 = 0;
  v10 = 0;
  if ( v7 )
  {
    if ( v7 )
    {
      do
      {
        v10 += v8;
        ++v9;
      }
      while ( v10 < v7 );
    }
    v6 = v10 - v8;
  }
  v17 = u32_div_f(v6 + 5000, 10000);
  v11 = u32_div_f(v10 + 5000, 10000);
  v12 = u32_div_f(v7, 10000);
  v13 = v12 - v17;
  if ( v12 - v17 < 0 )
    v13 = v17 - v12;
  v14 = v12 - v11;
  if ( v14 < 0 )
    v14 = -v14;
  if ( v13 > v14 )
    v13 = v14;
  else
    --v9;
  result = v16;
  *v4 = v13;
  *v16 = v9;
  return result;
}

//----- (0224DE54) --------------------------------------------------------
int __fastcall Function_224de54(char a1, char a2, int a3, uint a4, uchar *a5, int a6, int a7, char a8, int a9, int a10, int a11)
{
  uint v11;
  uint v12;
  char v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int result;
  char v20;
  int v21;
  int v22;
  char v23;
  uchar v24[3];
  int v25;
  int v26;

  v20 = a1;
  v21 = a3;
  v12 = a4;
  v13 = 0;
  v22 = Function_224dd28(a2);
  Function_224dde4(v21, v12, (uint *)&v26, &v25);
  if ( a7 )
  {
    v14 = Function_223f0bc(a11, 4);
    v11 = 0;
    v15 = v25 - v14 / 2;
    v16 = a7;
    v17 = a7;
    do
    {
      if ( (uint)*(uchar *)(v16 + 8) << 29 >> 31 == 1 && v15 == *(uchar *)(v17 + 6) )
        break;
      ++v11;
      v16 += 10;
      v17 += 10;
    }
    while ( v11 < 8 );
    if ( v11 == 8 )
      v26 = 255;
  }
  Function_224dd90(v26, a5, v24, &v23);
  if ( a7 && v11 != 8 && (!v24[0] || v24[0] == 1) && v22 != *(uchar *)(a7 + 10 * v11 + 3) )
  {
    v26 = 255;
    v23 = 4;
    v24[0] = 2;
    v13 = 1;
  }
  *(uchar *)(a6 + 2) = v20;
  *(ushort *)a6 = v21;
  *(uchar *)(a6 + 3) = v22;
  *(uchar *)(a6 + 4) = v24[0];
  *(uchar *)(a6 + 5) = v23;
  *(uchar *)(a6 + 6) = v25;
  *(uchar *)(a6 + 7) = a8;
  *(uchar *)(a6 + 8) = (a9 >= a10 - 1) | *(uchar *)(a6 + 8) & 0xFE;
  *(uchar *)(a6 + 8) = 2 * v13 & 3 | *(uchar *)(a6 + 8) & 0xFD;
  v18 = *(uchar *)(a6 + 8);
  result = v18 | 4;
  *(uchar *)(a6 + 8) = v18 | 4;
  return result;
}

//----- (0224DF54) --------------------------------------------------------
uchar *__fastcall Function_224df54(uchar *result)
{
  int v1;
  int v2;

  v1 = 0;
  do
  {
    v2 = (int)&result[v1];
    *(uchar *)(v2 + 2777) = 0;
    ++v1;
    *(uchar *)(v2 + 2781) = 0;
  }
  while ( v1 < 4 );
  result[2785] = 0;
  result[2786] = 0;
  result[2787] = 0;
  return result;
}

//----- (0224DF84) --------------------------------------------------------
void Function_224df84()
{
  ;
}

//----- (0224DF88) --------------------------------------------------------
int __fastcall Function_224df88(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a1, 255, a3);
}

//----- (0224DF9C) --------------------------------------------------------
uint *__fastcall Function_224df9c(int a1, int a2, ushort *a3, int *a4)
{
  int v4;
  int v5;
  ushort *v6;
  int *v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  int v12;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = malloc(0x17u, 260);
  MI_CpuFill8((ushort *)v8, 0, 0x104u);
  *(uint *)v8 = v5;
  v9 = (int *)(v8 + 200);
  v10 = 7;
  *(ushort *)(v8 + 4) = *v6;
  *(ushort *)(v8 + 6) = v6[1];
  *(ushort *)(v8 + 8) = v6[2];
  *(ushort *)(v8 + 10) = v6[3];
  *(uint *)(v8 + 12) = v4;
  do
  {
    v11 = *v7;
    v12 = v7[1];
    v7 += 2;
    *v9 = v11;
    v9[1] = v12;
    v9 += 2;
    --v10;
  }
  while ( v10 );
  *v9 = *v7;
  return AddTaskToTaskList1((int)Function_224dff8, v8, 0x7530u);
}

//----- (0224DFF8) --------------------------------------------------------
int __fastcall Function_224dff8(int *a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  uint v6;
  int v7;
  int result;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  char *v15;
  char v16;
  uint v17;
  int v18;
  int v19;
  int v20;
  char v21;
  int v22;

  v22 = a4;
  v4 = a2;
  v5 = a1;
  v6 = *(uchar *)(a2 + 16);
  if ( v6 <= 5 )
    JUMPOUT(__CS__, *((short *)&off_224E014 + v6) + 35971094);
  switch ( (uchar)v6 )
  {
    case 0:
      Function_224cdb4(*(uint *)a2, 0);
      Function_2003178(*(uint *)(*(uint *)v4 + 164), 1, 8163, -2, 0, 6, 0);
      v7 = 0;
      do
      {
        Function_224cee4(*(uint *)v4, v7, 0x7FFF, 9546, 16, 4, (uchar *)(v4 + 17 + v7));
        ++v7;
      }
      while ( v7 < 4 );
      result = *(uchar *)(v4 + 16) + 1;
      *(uchar *)(v4 + 16) = result;
      break;
    case 1:
      result = Function_200384c(*(uint *)(*(uint *)a2 + 164));
      if ( !result )
      {
        v9 = 0;
        do
        {
          result = *(uchar *)(v4 + v9 + 17);
          if ( !*(uchar *)(v4 + v9 + 17) )
            break;
          ++v9;
        }
        while ( v9 < 4 );
        if ( v9 == 4 )
        {
          result = *(uchar *)(v4 + 16) + 1;
          *(uchar *)(v4 + 16) = result;
        }
      }
      break;
    case 2:
      v10 = 0;
      v19 = a2 + 24;
      do
      {
        v11 = *(uchar *)(v4 + v10 + 202);
        v12 = 44 * v11;
        v13 = v4 + 44 * v11;
        *(uint *)(v13 + 24) = *(uint *)(*(uint *)(*(uint *)v4 + 20) + 4 * v11);
        *(uint *)(v13 + 28) = *(uint *)(*(uint *)v4 + 4 * v11 + 92);
        *(uint *)(v13 + 32) = *(uint *)v4 + 24 + 16 * v11;
        v14 = u32_div_f(*(uint *)(*(uint *)v4 + 2832), 10000);
        *(ushort *)(v13 + 38) = u32_div_f(40 * v14, 100);
        *(uchar *)(v13 + 36) = v10;
        if ( v10 )
        {
          v16 = v10 - 1;
          v15 = (char *)(v13 + 37);
        }
        else
        {
          v15 = (char *)(v13 + 37);
          v16 = 3;
        }
        *v15 = v16;
        AddTaskToTaskList1((int)Function_224e1f4, v19 + v12, 0x9CA4u);
        ++v10;
      }
      while ( v10 < 4 );
      v21 = *(uchar *)(v4 + 241);
      v17 = *(uint *)v4;
      if ( *(uchar *)(v4 + 203) == *(uchar *)(**(uint **)v4 + 291) )
        Function_224c5a0(v17, 4u, (uchar *)&v20);
      else
        Function_224c5a0(v17, 5u, (uchar *)&v20);
      Function_2005748(0x6F7u);
      result = *(uchar *)(v4 + 16) + 1;
      *(uchar *)(v4 + 16) = result;
      break;
    case 3:
      v18 = 0;
      do
      {
        result = *(uchar *)(a2 + 67);
        if ( !*(uchar *)(a2 + 67) )
          break;
        ++v18;
        a2 += 44;
      }
      while ( v18 < 4 );
      if ( v18 == 4 )
      {
        result = *(uchar *)(v4 + 16) + 1;
        *(uchar *)(v4 + 16) = result;
      }
      break;
    case 4:
      Function_2003178(*(uint *)(*(uint *)a2 + 164), 1, 8163, -2, 6, 0, 0);
      result = *(uchar *)(v4 + 16) + 1;
      *(uchar *)(v4 + 16) = result;
      break;
    case 5:
      result = Function_200384c(*(uint *)(*(uint *)a2 + 164));
      if ( !result )
      {
        Function_224cdb4(*(uint *)v4, 1);
        result = *(uchar *)(v4 + 16) + 1;
        *(uchar *)(v4 + 16) = result;
      }
      break;
    default:
      Function_224f26c(*(uint *)(a2 + 12), a2 + 4);
      free(v4);
      result = Call_RemoveTaskFromTaskList(v5);
      break;
  }
  return result;
}

//----- (0224E1F4) --------------------------------------------------------
int __fastcall Function_224e1f4(int *a1, int a2)
{
  int v2;
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
  int result;
  int v18;
  int v19;

  v2 = a2;
  v3 = *(uchar *)(a2 + 42);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      *(uint *)(v2 + 16) += *(uint *)(v2 + 28);
      *(uint *)(v2 + 20) += *(uint *)(v2 + 32);
      *(uint *)(v2 + 24) += *(uint *)(v2 + 36);
      ++*(ushort *)(v2 + 40);
      v10 = *(uchar *)(v2 + 13);
      if ( *(uchar *)(v2 + 13) && v10 != 3 )
      {
        if ( *(uint *)(v2 + 16) < Function_224a0fc(v10) << 8 )
          *(uint *)(v2 + 16) = Function_224a0fc(*(uchar *)(v2 + 13)) << 8;
      }
      else if ( *(ushort *)(v2 + 40) == (uint)*(ushort *)(v2 + 14) >> 1 )
      {
        if ( *(uchar *)(v2 + 13) )
        {
          *(uint *)(v2 + 16) = (Function_224a0fc(v10) + 80) << 8;
          ((void (__fastcall *)(uint, uint))dword_225B07C[0])(**(uint **)(v2 + 8), 0);
          ((void (__fastcall *)(uint, int))dword_225B1AC[0])(**(uint **)(v2 + 8), -100);
        }
        else
        {
          *(uint *)(v2 + 16) = -25600;
          ((void (__fastcall *)(uint, int))dword_225B07C[0])(**(uint **)(v2 + 8), 1);
          ((void (__fastcall *)(uint, int))dword_225B1AC[0])(**(uint **)(v2 + 8), 100);
        }
        v11 = Function_20765b8(*(uint *)v2, 2u);
        *(uint *)(v2 + 20) = (v11 + Function_224a10c(*(uchar *)(v2 + 13))) << 8;
        *(uint *)(v2 + 24) = Function_224a120(*(uchar *)(v2 + 13)) << 8;
        v12 = Function_224a0fc(*(uchar *)(v2 + 13));
        v13 = *(uint *)(v2 + 20);
        v14 = *(ushort *)(v2 + 14) - *(ushort *)(v2 + 40) - 1;
        v15 = *(uint *)(v2 + 24);
        *(uint *)(v2 + 28) = s32_div_f((v12 << 8) - *(uint *)(v2 + 16), v14);
        *(uint *)(v2 + 32) = s32_div_f(v13 - *(uint *)(v2 + 20), v14);
        *(uint *)(v2 + 36) = s32_div_f(v15 - *(uint *)(v2 + 24), v14);
      }
      if ( *(ushort *)(v2 + 40) >= (uint)*(ushort *)(v2 + 14) )
      {
        v16 = Function_20765b8(*(uint *)v2, 2u);
        *(uint *)(v2 + 16) = Function_224a0fc(*(uchar *)(v2 + 13)) << 8;
        *(uint *)(v2 + 20) = (v16 + Function_224a10c(*(uchar *)(v2 + 13))) << 8;
        *(uint *)(v2 + 24) = Function_224a120(*(uchar *)(v2 + 13)) << 8;
        ++*(uchar *)(v2 + 42);
      }
      *(uint *)(*(uint *)(v2 + 8) + 4) = *(uint *)(v2 + 16) / 256;
      *(uint *)(*(uint *)(v2 + 8) + 8) = *(uint *)(v2 + 20) / 256;
      *(uint *)(*(uint *)(v2 + 8) + 12) = *(uint *)(v2 + 24) / 256;
      ((void (__fastcall *)(uint, uint, uint))dword_225B100[0])(
        **(uint **)(v2 + 8),
        *(uint *)(*(uint *)(v2 + 8) + 4),
        *(uint *)(*(uint *)(v2 + 8) + 8));
      result = Function_224b09c(*(uint *)(v2 + 4), *(uint **)(v2 + 8));
    }
    else
    {
      *(uchar *)(v2 + 43) = 1;
      result = Call_RemoveTaskFromTaskList(a1);
    }
  }
  else
  {
    *(uint *)(v2 + 16) = *(uint *)(*(uint *)(v2 + 8) + 4) << 8;
    *(uint *)(v2 + 20) = *(uint *)(*(uint *)(v2 + 8) + 8) << 8;
    *(uint *)(v2 + 24) = *(uint *)(*(uint *)(v2 + 8) + 12) << 8;
    v4 = Function_224a0fc(*(uchar *)(v2 + 12)) << 8;
    v19 = Function_224a10c(*(uchar *)(v2 + 12)) << 8;
    v18 = Function_224a120(*(uchar *)(v2 + 12)) << 8;
    v5 = *(uchar *)(v2 + 13);
    if ( *(uchar *)(v2 + 13) && v5 != 3 )
    {
      v7 = Function_224a0fc(v5) << 8;
      v8 = Function_224a10c(*(uchar *)(v2 + 13)) << 8;
      v9 = Function_224a120(*(uchar *)(v2 + 13)) << 8;
      *(uint *)(v2 + 28) = s32_div_f(v7 - v4, *(ushort *)(v2 + 14));
      *(uint *)(v2 + 32) = s32_div_f(v8 - v19, *(ushort *)(v2 + 14));
      *(uint *)(v2 + 36) = s32_div_f(v9 - v18, *(ushort *)(v2 + 14));
    }
    else
    {
      if ( *(uchar *)(v2 + 13) )
        v6 = 91136;
      else
        v6 = -20480;
      *(uint *)(v2 + 28) = s32_div_f(v6 - v4, (uint)*(ushort *)(v2 + 14) >> 1);
      *(uint *)(v2 + 32) = s32_div_f(0, (uint)*(ushort *)(v2 + 14) >> 1);
      *(uint *)(v2 + 36) = s32_div_f(0, (uint)*(ushort *)(v2 + 14) >> 1);
    }
    result = *(uchar *)(v2 + 42) + 1;
    *(uchar *)(v2 + 42) = result;
  }
  return result;
}

//----- (0224E43C) --------------------------------------------------------
int __fastcall Function_224e43c(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a1, 255, a3);
}

//----- (0224E450) --------------------------------------------------------
uint *__fastcall Function_224e450(int a1, int a2, ushort *a3, int *a4)
{
  int v4;
  int v5;
  ushort *v6;
  int *v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  int v12;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = malloc(0x17u, 80);
  MI_CpuFill8((ushort *)v8, 0, 0x50u);
  *(uint *)v8 = v5;
  v9 = (int *)(v8 + 16);
  v10 = 7;
  *(ushort *)(v8 + 4) = *v6;
  *(ushort *)(v8 + 6) = v6[1];
  *(ushort *)(v8 + 8) = v6[2];
  *(ushort *)(v8 + 10) = v6[3];
  *(uint *)(v8 + 12) = v4;
  do
  {
    v11 = *v7;
    v12 = v7[1];
    v7 += 2;
    *v9 = v11;
    v9[1] = v12;
    v9 += 2;
    --v10;
  }
  while ( v10 );
  *v9 = *v7;
  return AddTaskToTaskList1((int)Function_224e4a8, v8, 0x7530u);
}

//----- (0224E4A8) --------------------------------------------------------
int __fastcall Function_224e4a8(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  int result;

  v2 = a2;
  v3 = a1;
  if ( *(uchar *)(a2 + 76) )
  {
    Function_224f26c(*(uint *)(a2 + 12), a2 + 4);
    free(v2);
    result = Call_RemoveTaskFromTaskList(v3);
  }
  else
  {
    v4 = 0;
    do
    {
      Function_224bc68(*(uint *)v2, *(uchar *)(v2 + v4 + 18), v4);
      ++v4;
    }
    while ( v4 < 4 );
    Function_2249640(*(uint *)(*(uint *)v2 + 4428), 1, 1, 0);
    Function_224a0e0(*(uint *)(*(uint *)v2 + 4428), 0, 6u);
    result = *(uchar *)(v2 + 76) + 1;
    *(uchar *)(v2 + 76) = result;
  }
  return result;
}

//----- (0224E518) --------------------------------------------------------
int __fastcall Function_224e518(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a1, 255, a3);
}

//----- (0224E52C) --------------------------------------------------------
uint *__fastcall Function_224e52c(int a1, int a2, ushort *a3, int *a4)
{
  int v4;
  int v5;
  ushort *v6;
  int *v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  int v12;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = malloc(0x17u, 80);
  MI_CpuFill8((ushort *)v8, 0, 0x50u);
  *(uint *)v8 = v5;
  v9 = (int *)(v8 + 16);
  v10 = 7;
  *(ushort *)(v8 + 4) = *v6;
  *(ushort *)(v8 + 6) = v6[1];
  *(ushort *)(v8 + 8) = v6[2];
  *(ushort *)(v8 + 10) = v6[3];
  *(uint *)(v8 + 12) = v4;
  do
  {
    v11 = *v7;
    v12 = v7[1];
    v7 += 2;
    *v9 = v11;
    v9[1] = v12;
    v9 += 2;
    --v10;
  }
  while ( v10 );
  *v9 = *v7;
  return AddTaskToTaskList1((int)Function_224e584, v8, 0x7530u);
}

//----- (0224E584) --------------------------------------------------------
int __fastcall Function_224e584(int *a1, uchar *a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int result;

  v2 = (int)a2;
  v3 = a1;
  if ( a2[76] )
  {
    if ( a2[76] == 1 )
    {
      v5 = 0;
      v6 = 0;
      do
      {
        if ( Function_224bdf0(*(uint *)v2, v6) == 1 )
          ++v5;
        result = Function_224be24(*(uint *)v2, v6++);
      }
      while ( v6 < 4 );
      if ( v5 >= 4 )
      {
        Function_224bd00(*(uint *)v2);
        result = *(uchar *)(v2 + 76) + 1;
        *(uchar *)(v2 + 76) = result;
      }
    }
    else
    {
      Function_2249640(*(uint *)(*(uint *)a2 + 4428), 0, 1, 0);
      Function_224a0e0(*(uint *)(*(uint *)v2 + 4428), 0, 0);
      Function_224f26c(*(uint *)(v2 + 12), v2 + 4);
      free(v2);
      result = Call_RemoveTaskFromTaskList(v3);
    }
  }
  else
  {
    result = Function_224b5c8(*(uint *)a2);
    if ( result )
    {
      v4 = 0;
      do
      {
        Function_224bd28(*(uint *)v2, v4, 2);
        Function_224bd28(*(uint *)v2, v4++, 5);
      }
      while ( v4 < 4 );
      result = *(uchar *)(v2 + 76) + 1;
      *(uchar *)(v2 + 76) = result;
    }
  }
  return result;
}

//----- (0224E648) --------------------------------------------------------
int __fastcall Function_224e648(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a1, 255, a3);
}

//----- (0224E65C) --------------------------------------------------------
uint *__fastcall Function_224e65c(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = malloc(0x17u, 32);
  MI_CpuFill8((ushort *)v8, 0, 0x20u);
  *(uint *)v8 = v5;
  *(ushort *)(v8 + 4) = *v6;
  *(ushort *)(v8 + 6) = v6[1];
  *(ushort *)(v8 + 8) = v6[2];
  *(ushort *)(v8 + 10) = v6[3];
  *(uint *)(v8 + 12) = v4;
  *(uchar *)(v8 + 17) = *(uchar *)v7;
  *(ushort *)(v8 + 20) = *(ushort *)(v7 + 48);
  *(ushort *)(v8 + 22) = *(ushort *)(v7 + 50);
  *(ushort *)(v8 + 24) = *(ushort *)(v7 + 52);
  *(uchar *)(v8 + 26) = *(uchar *)(v7 + 54);
  *(uchar *)(v8 + 28) = *(uchar *)(v7 + 56);
  *(uchar *)(v8 + 27) = *(uchar *)(v7 + 55);
  return AddTaskToTaskList1((int)Function_224e6c8, v8, 0x7530u);
}

//----- (0224E6C8) --------------------------------------------------------
uint __fastcall Function_224e6c8(int *a1, int a2)
{
  uchar *v2;
  int *v3;
  int v4;
  uint result;

  v2 = (uchar *)a2;
  v3 = a1;
  v4 = *(uchar *)(a2 + 16);
  if ( *(uchar *)(a2 + 16) )
  {
    if ( v4 == 1 )
    {
      result = Function_224c300(*(uint *)a2);
      if ( !result )
      {
        result = v2[16] + 1;
        v2[16] = result;
      }
    }
    else if ( v4 == 2 )
    {
      ++*(uchar *)(a2 + 18);
      if ( *(uchar *)(a2 + 28) == 1 )
      {
        result = *(uchar *)(a2 + 16) + 1;
        *(uchar *)(a2 + 16) = result;
      }
      else
      {
        result = *(uchar *)(a2 + 27);
        if ( *(uchar *)(a2 + 18) >= result )
        {
          Function_200e084(*(uint *)a2 + 120, 1);
          Function_201c3c0(*(uint *)(*(uint *)v2 + 116), 1);
          result = v2[16] + 1;
          v2[16] = result;
        }
      }
    }
    else
    {
      Function_224f26c(*(uint *)(a2 + 12), a2 + 4);
      free((int)v2);
      result = Call_RemoveTaskFromTaskList(v3);
    }
  }
  else if ( *(uchar *)(a2 + 26) )
  {
    Function_200e060(*(uint *)a2 + 120, 1, 1, 0xEu);
    Function_201c3c0(*(uint *)(*(uint *)v2 + 116), 1);
    Function_224c2cc(*(uint *)v2, v2[26], v2 + 20);
    result = v2[16] + 1;
    v2[16] = result;
  }
  else
  {
    result = 100;
    *(uchar *)(a2 + 16) = 100;
  }
  return result;
}

//----- (0224E77C) --------------------------------------------------------
int __fastcall Function_224e77c(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a1, 255, a3);
}

//----- (0224E790) --------------------------------------------------------
int __fastcall Function_224e790(int a1, int a2, int a3, int *a4)
{
  int v4;
  int v5;
  uint *v6;
  int v7;
  int v8;

  v4 = a1;
  v5 = 6;
  v6 = (uint *)(a2 + 2796);
  do
  {
    v7 = *a4;
    v8 = a4[1];
    a4 += 2;
    *v6 = v7;
    v6[1] = v8;
    v6 += 2;
    --v5;
  }
  while ( v5 );
  return Function_224f26c(v4, a3);
}

//----- (0224E7B4) --------------------------------------------------------
int __fastcall Function_224e7b4(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a1, 255, a3);
}

//----- (0224E7C8) --------------------------------------------------------
int __fastcall Function_224e7c8(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint *v9;

  v4 = a4;
  v5 = a1;
  v6 = a2;
  v7 = a3;
  Function_200569c();
  Function_200549c(*(ushort *)(v4 + 36));
  *(uchar *)(v6 + 4432) = 1;
  v8 = *(uint *)(v6 + 4440);
  v9 = (uint *)(v6 + 4444);
  *v9 = *(uint *)(v6 + 4436);
  v9[1] = v8;
  return Function_224f26c(v5, v7);
}

//----- (0224E800) --------------------------------------------------------
int __fastcall Function_224e800(int a1, int a2, ushort a3)
{
  return Function_224f1f8(a1, 255, a3);
}

//----- (0224E814) --------------------------------------------------------
uint *__fastcall Function_224e814(int a1, int a2, ushort *a3, int *a4)
{
  int v4;
  int v5;
  ushort *v6;
  int *v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  int v12;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = malloc(0x17u, 84);
  MI_CpuFill8((ushort *)v8, 0, 0x54u);
  *(uint *)v8 = v5;
  v9 = (int *)(v8 + 16);
  v10 = 7;
  *(ushort *)(v8 + 4) = *v6;
  *(ushort *)(v8 + 6) = v6[1];
  *(ushort *)(v8 + 8) = v6[2];
  *(ushort *)(v8 + 10) = v6[3];
  *(uint *)(v8 + 12) = v4;
  do
  {
    v11 = *v7;
    v12 = v7[1];
    v7 += 2;
    *v9 = v11;
    v9[1] = v12;
    v9 += 2;
    --v10;
  }
  while ( v10 );
  *v9 = *v7;
  return AddTaskToTaskList1((int)Function_224e86c, v8, 0x7530u);
}

//----- (0224E86C) --------------------------------------------------------
uint __fastcall Function_224e86c(int *a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  uint result;

  v4 = a2;
  v5 = a1;
  switch ( *(uchar *)(a2 + 80) )
  {
    case 0:
      *(uchar *)(*(uint *)a2 + 4432) = 0;
      result = *(uchar *)(a2 + 80) + 1;
      *(uchar *)(a2 + 80) = result;
      break;
    case 1:
      result = Function_2005690(*(ushort *)(a2 + 52));
      if ( !result )
      {
        result = *(uchar *)(v4 + 80) + 1;
        *(uchar *)(v4 + 80) = result;
      }
      break;
    case 2:
      Function_224ce28(*(uint *)a2, a2, a3, a4);
      result = *(uchar *)(v4 + 80) + 1;
      *(uchar *)(v4 + 80) = result;
      break;
    case 3:
      result = *(uint *)(a2 + 76) + 1;
      *(uint *)(a2 + 76) = result;
      if ( result > 0x3C )
      {
        *(uint *)(a2 + 76) = 0;
        result = *(uchar *)(a2 + 80) + 1;
        *(uchar *)(a2 + 80) = result;
      }
      break;
    case 4:
      Function_200549c(0x46Fu);
      Function_2005748(0x6E5u);
      result = *(uchar *)(v4 + 80) + 1;
      *(uchar *)(v4 + 80) = result;
      break;
    default:
      Function_224f26c(*(uint *)(a2 + 12), a2 + 4);
      free(v4);
      result = Call_RemoveTaskFromTaskList(v5);
      break;
  }
  return result;
}

//----- (0224E930) --------------------------------------------------------
int __fastcall Function_224e930(ushort *a1, char a2, char a3, int a4, int a5)
{
  char v5;
  char v6;
  ushort *v7;
  int v8;
  int result;

  v5 = a2;
  v6 = a3;
  v7 = a1;
  v8 = a4;
  MI_CpuFill8(a1, 0, 0x3Cu);
  *((uchar *)v7 + 55) = v5;
  *((uchar *)v7 + 56) = v6;
  *((uint *)v7 + 12) = v8;
  result = a5;
  *((uchar *)v7 + 57) = a5;
  return result;
}

//----- (0224E958) --------------------------------------------------------
int __fastcall Function_224e958(int a1)
{
  int v1;
  int v2;
  char v3;
  char v4;
  char v5;
  int result;

  v1 = a1;
  v2 = *(uint *)(a1 + 48);
  v3 = *(uchar *)(a1 + 55);
  v4 = *(uchar *)(a1 + 56);
  v5 = *(uchar *)(a1 + 57);
  MI_CpuFill8((ushort *)a1, 0, 0x3Cu);
  *(uint *)(v1 + 48) = v2;
  *(uchar *)(v1 + 55) = v3;
  result = v1 + 56;
  *(uchar *)(v1 + 56) = v4;
  *(uchar *)(v1 + 57) = v5;
  return result;
}

//----- (0224E990) --------------------------------------------------------
int __fastcall Function_224e990(uchar *a1, int a2, int a3, uint a4)
{
  uchar *v4;
  int v5;
  int v6;
  int i;
  int v8;
  uint v9;
  int v10;
  int v11;
  int v12;
  int j;
  int v14;
  int v15;
  uint v16;
  int v17;
  int v18;
  int v19;
  uint v20;
  int k;
  uint v22;
  int v23;
  uint v24;
  int result;
  uint v26;
  int v27;
  int v28;
  uint v29;
  int v30;
  int v31;
  uint *v32;
  int v33;
  char v34;

  v4 = a1;
  v5 = a2;
  v26 = a4;
  v28 = Function_223f0bc(a1[2843], 4);
  if ( v4[2843] )
  {
    v6 = u32_div_f(v26, 6);
    v29 = u32_div_f(v6 + 5000, 10000);
  }
  else
  {
    v29 = u32_div_f((v26 >> 2) + 5000, 10000);
  }
  if ( *(uchar *)(*(uint *)v4 + 288) && *(uchar *)(*(uint *)v4 + 288) != 1 )
  {
    v30 = 1;
    v31 = v28 / 2;
    v26 >>= 1;
  }
  else
  {
    v30 = 0;
    v31 = v28 / 2 / 2;
  }
  for ( i = 0; i < v28 / 2; ++i )
    *(&v34 + i) = 0;
  v8 = 0;
  v32 = (uint *)(v5 + 48);
  do
  {
    do
    {
      do
      {
        v9 = Function_2094ea0(*(uint *)(v5 + 48), v32);
        s32_div_f(v9, v31);
        v11 = v10;
      }
      while ( !v10 );
    }
    while ( *(&v34 + v10)
         || v30 == 1
         && (v10 == v31 - 1 && *(&v34 + v10 - 1) == 1
          || *(&v34 + v10 - 1) == 1
          || *(&v34 + v10 + 1) == 1
          || v10 & 1 && (int)(uchar)Function_2094ea0(*(uint *)(v5 + 48), v32) < 128) );
    *(&v34 + v11) = 1;
    ++v8;
  }
  while ( v8 < v4[2842] );
  v12 = 0;
  for ( j = 0; j < v28 / 2; ++j )
  {
    if ( *(&v34 + j) == 1 )
      *(uint *)(v5 + 4 * v12++) = u32_div_f(j * v26 + 5000, 10000);
  }
  v14 = Function_224ebe0(*(uchar *)(*(uint *)v4 + 288), *(uchar *)(v5 + 57));
  v15 = 0;
  v33 = v14 / 2 + 1;
  while ( v15 < v4[2842] )
  {
    v16 = Function_2094ea0(*(uint *)(v5 + 48), (uint *)(v5 + 48));
    s32_div_f(v16, v14 + 2);
    v18 = *(uint *)(v5 + 4 * v15) + v17 - v33;
    if ( v18 < 0 )
      v18 = 0;
    v19 = *(uint *)(v5 + 4 * v15);
    if ( v18 - v19 >= v29 )
      v18 = v29 + v19 - 1;
    *(uint *)(v5 + 4 * v15) = v18;
    *(uchar *)(v5 + v15++ + 40) = 1;
  }
  v27 = *((uchar *)&dword_2254A84 + *(uchar *)(*(uint *)v4 + 288));
  v20 = Function_2094ea0(*(uint *)(v5 + 48), (uint *)(v5 + 48));
  *(uchar *)(v5 + 32) = ((v20 & 0x80000000) != 0) + __ROR4__((v20 << 30) - (v20 >> 31), 30);
  for ( k = 1; ; ++k )
  {
    result = v4[2842];
    if ( k >= result )
      break;
    if ( k >= v4[2842] - 1
      || (v22 = Function_2094ea0(*(uint *)(v5 + 48), (uint *)(v5 + 48)), s32_div_f(v22, 100), v27 <= v23) )
    {
      v24 = Function_2094ea0(*(uint *)(v5 + 48), (uint *)(v5 + 48));
      *(uchar *)(v5 + k + 32) = ((v24 & 0x80000000) != 0) + __ROR4__((v24 << 30) - (v24 >> 31), 30);
    }
    else
    {
      *(uchar *)(v5 + k + 32) = *(uchar *)(v5 + k - 1 + 32);
    }
  }
  return result;
}

//----- (0224EBE0) --------------------------------------------------------
int __fastcall Function_224ebe0(int a1, uint a2)
{
  uint v2;
  int result;

  v2 = a2;
  if ( a2 >= 4 )
    ErrorHandler();
  result = *((char *)&dword_2254A80 + v2);
  switch ( (uchar)a2 )
  {
    case 0:
      result *= 2;
      break;
    case 1:
      return result;
    case 2:
      result /= 2;
      break;
    default:
      result = s32_div_f(result, 3);
      break;
  }
  return result;
}

//----- (0224EC24) --------------------------------------------------------
int __fastcall Function_224ec24(int a1, int a2, uint a3, int a4, int a5, int a6, int a7)
{
  int v7;
  int result;
  uint v9;

  v7 = a2;
  v9 = a3;
  if ( a3 >= 4 )
    ErrorHandler();
  result = *((char *)&dword_2254A80 + v9);
  switch ( (uchar)&dword_2254A80 )
  {
    case 0u:
      result *= 2;
      break;
    case 1u:
      result *= 2;
      break;
    case 2u:
      if ( a7 != 1 || v7 != 2 && v7 != 3 )
        result += result / 2;
      else
        result *= 3;
      break;
    default:
      if ( a7 == 1 && (v7 == 2 || v7 == 3) )
        result = result / 2 + 2 * result;
      break;
  }
  if ( result < 0 )
    result = 0;
  return result;
}

//----- (0224ECC4) --------------------------------------------------------
int __fastcall Function_224ecc4(int a1, int a2, char a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8;
  int v9;
  char v10;

  v8 = a2;
  v9 = 0;
  switch ( a3 )
  {
    case 0:
      if ( a6 == 1 )
        v9 = 3;
      break;
    case 1:
      if ( a6 == 2 )
        v9 = 3;
      break;
    case 2:
      if ( a6 == 4 )
        v9 = 3;
      break;
    case 3:
      if ( a6 == 3 )
        v9 = 3;
      break;
    default:
      break;
  }
  if ( a7 && a6 != a7 )
    v9 += 8;
  v10 = -1;
  if ( a5 != -1 )
  {
    if ( (a4 & 1) != (a5 & 1) )
      v9 += 2;
    v10 = a4 - a5;
    if ( a4 - a5 >= 8 )
      v9 += 5;
  }
  switch ( v10 )
  {
    case 0:
      v9 *= 2;
      break;
    case 1:
      v9 *= 2;
      break;
    case 2:
      if ( a8 != 1 || (uint)(v8 - 2) > 1 )
        v9 += v9 / 2;
      else
        v9 *= 2;
      break;
    default:
      if ( a8 == 1 && (uint)(v8 - 2) <= 1 )
        v9 += v9 / 2;
      break;
  }
  return v9;
}

//----- (0224ED8C) --------------------------------------------------------
int __fastcall Function_224ed8c(int result, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  if ( !*(uchar *)(a3 + 56) && !result )
    return Function_224ede0(a2, a3, a4, a5, a6, a7, a8);
  if ( *(uchar *)(a3 + 56) )
  {
    if ( result == 1 )
      result = Function_224ee90(a2, a3, a4, a5, a6, a7, a8);
  }
  return result;
}

//----- (0224EDE0) --------------------------------------------------------
uint __fastcall Function_224ede0(int a1, int a2, uint a3, int a4, uint a5, int a6, int a7)
{
  int v7;
  int v8;
  uint result;
  uint v10;
  int v11;
  int v12;
  char v13;
  int v14;

  v14 = a4;
  v7 = a2;
  v8 = a1;
  result = a2 + 56;
  if ( !*(uchar *)(a2 + 56) )
  {
    result = *(uchar *)(a6 + 5);
    v10 = *(uchar *)(a2 + 54);
    if ( v10 < result )
    {
      v11 = *(short *)(v7 + 52);
      if ( v11 <= 0 )
      {
        v12 = 0;
        do
        {
          if ( *(uchar *)(v7 + v12 + 40) == 1 )
            break;
          ++v12;
        }
        while ( v12 < 8 );
        if ( v12 < 8 && *(uint *)(v7 + 4 * v12) <= a3 )
        {
          Function_224de54(
            *(uchar *)(v7 + 55),
            *(uchar *)(v7 + v12 + 32),
            a3,
            a5,
            (uchar *)(a6 + 8),
            (int)&v13,
            0,
            0,
            v10,
            result,
            *(uchar *)(v8 + 2843));
          Function_224d6b0(a7, &v13);
          *(uchar *)(v7 + v12 + 40) = 0;
          ++*(uchar *)(v7 + 54);
          result = u32_div_f(a5, 10000) - 2;
          *(ushort *)(v7 + 52) = result;
        }
      }
      else
      {
        result = v11 - 1;
        *(ushort *)(v7 + 52) = v11 - 1;
      }
    }
  }
  return result;
}

//----- (0224EE90) --------------------------------------------------------
uint __fastcall Function_224ee90(uchar *a1, int a2, int a3, uint a4, uint a5, int a6, int a7)
{
  uchar *v7;
  int v8;
  uint result;
  uint v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uint v16;
  int v17;
  uint v18;
  int v19;
  uint v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  uint v27;
  char v28;
  uint v29;

  v29 = a4;
  v7 = a1;
  v8 = a2;
  v21 = a3;
  result = *(uchar *)(a2 + 56);
  if ( *(uchar *)(a2 + 56) )
  {
    v10 = *(uchar *)(a2 + 54);
    result = *(uchar *)(a6 + 5);
    if ( v10 < result )
    {
      result = 10 * v10;
      if ( v7[10 * v10 + 7100] & 4 )
      {
        v11 = *(short *)(v8 + 52);
        if ( v11 <= 0 )
        {
          v12 = (int)&v7[result + 7092];
          v27 = v21 - (a4 >> 1);
          if ( !*(uchar *)(v8 + 5) )
          {
            if ( v10 )
            {
              v14 = (int)&v7[10 * (v10 - 1)];
              v13 = *(uchar *)(v14 + 7098);
              v22 = *(uchar *)(v14 + 7095);
            }
            else
            {
              v13 = -1;
              v22 = 0;
            }
            v25 = Function_224ec24(
                    *(uchar *)(*(uint *)v7 + 288),
                    *(uchar *)(*(uint *)v7 + 287),
                    *(uchar *)(v8 + 57),
                    *(uchar *)(v12 + 6),
                    v13,
                    v7[2843],
                    v7[7182]);
            v24 = Function_224ecc4(
                    *(uchar *)(*(uint *)v7 + 288),
                    *(uchar *)(*(uint *)v7 + 287),
                    *(uchar *)(v8 + 57),
                    *(uchar *)(v12 + 6),
                    v13,
                    *(uchar *)(v12 + 3),
                    v22,
                    v7[7182]);
            v15 = u32_div_f((a5 >> 1) * *(uchar *)(v12 + 6) + 5000, 10000);
            v16 = Function_2094ea0(*(uint *)(v8 + 48), (uint *)(v8 + 48));
            s32_div_f(v16, v25 + 2);
            v26 = v17 - (v25 / 2 + 1) + v15;
            if ( v26 < 0 )
              v26 = 0;
            v18 = Function_2094ea0(*(uint *)(v8 + 48), (uint *)(v8 + 48));
            s32_div_f(v18, 100);
            if ( v19 >= v25 + v24 )
            {
              LOBYTE(v23) = Function_224dd5c(*(uchar *)(v12 + 3));
            }
            else
            {
              do
              {
                v20 = Function_2094ea0(*(uint *)(v8 + 48), (uint *)(v8 + 48));
                v23 = (v20 >> 31) + __ROR4__((v20 << 30) - (v20 >> 31), 30);
              }
              while ( *(uchar *)(v12 + 3) == Function_224dd28(v23) );
            }
            *(uint *)v8 = v26;
            *(uchar *)(v8 + 4) = v23;
            *(uchar *)(v8 + 5) = 1;
          }
          result = v27;
          if ( *(uint *)v8 <= v27 )
          {
            Function_224de54(
              *(uchar *)(v8 + 55),
              *(uchar *)(v8 + 4),
              v21,
              a5,
              (uchar *)(a6 + 8),
              (int)&v28,
              (int)(v7 + 7092),
              *(uchar *)(v8 + 56),
              *(uchar *)(v8 + 54),
              *(uchar *)(a6 + 5),
              v7[2843]);
            Function_224d6b0(a7, &v28);
            *(uchar *)(v8 + 5) = 0;
            ++*(uchar *)(v8 + 54);
            result = u32_div_f(a5, 10000) - 2;
            *(ushort *)(v8 + 52) = result;
          }
        }
        else
        {
          result = v11 - 1;
          *(ushort *)(v8 + 52) = v11 - 1;
        }
      }
    }
  }
  return result;
}

//----- (0224F080) --------------------------------------------------------
int __fastcall Function_224f080(uint a1)
{
  uint v1;

  v1 = a1;
  if ( a1 >= 5 )
    ErrorHandler();
  return dword_2254A90[v1];
}

//----- (0224F098) --------------------------------------------------------
int Function_224f098()
{
  return 49;
}

//----- (0224F09C) --------------------------------------------------------
int Function_224f09c()
{
  return 50;
}

//----- (0224F0A0) --------------------------------------------------------
int __fastcall Function_224f0a0(uint a1)
{
  uint v1;

  v1 = a1;
  if ( a1 >= 5 )
    ErrorHandler();
  return *((uchar *)dword_2254A88 + v1);
}

//----- (0224F0B8) --------------------------------------------------------
int Function_224f0b8()
{
  return 46;
}

//----- (0224F0BC) --------------------------------------------------------
BOOL __fastcall Function_224f0bc(int *a1, int a2, int a3, uint a4, int a5)
{
  uint v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v5 = a4;
  v6 = a1;
  v7 = a2;
  v8 = a3;
  v9 = Function_224f0b8();
  v10 = Function_224f080(v5);
  return Function_200cbdc(v6, v7, v9, v10, 1, v8, a5);
}

//----- (0224F0F0) --------------------------------------------------------
int __fastcall Function_224f0f0(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
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
  v8 = Function_224f0b8();
  v9 = Function_224f098();
  Function_200ce0c(v4, v5, v8, v9, 1, v6);
  v10 = Function_224f0b8();
  v11 = Function_224f09c();
  return Function_200ce3c(v4, v5, v10, v11, 1, v7);
}

//----- (0224F138) --------------------------------------------------------
int __fastcall Function_224f138(int a1, int a2)
{
  return Function_200d070(a1, a2);
}

//----- (0224F140) --------------------------------------------------------
int __fastcall Function_224f140(int a1, int a2, int a3)
{
  int v3;
  int v4;

  v3 = a1;
  v4 = a3;
  Function_200d090(a1, a2);
  return Function_200d0a0(v3, v4);
}

//----- (0224F154) --------------------------------------------------------
int *__fastcall Function_224f154(uint *a1, int a2, uint a3, int *a4)
{
  int *v4;
  uint *v5;
  int v6;
  char *v7;
  int v8;
  int v9;
  int v10;
  char v12;
  int v13;

  v4 = a4;
  v5 = a1;
  v6 = a2;
  v7 = &v12;
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
  v13 = Function_224f0a0(a3);
  return Function_200ce6c(v5, v6, (short *)&v12);
}

//----- (0224F184) --------------------------------------------------------
uint __fastcall Function_224f184(int a1)
{
  return Function_200d0f4(a1);
}

//----- (0224F18C) --------------------------------------------------------
int __fastcall Function_224f18c(ushort *a1, int a2)
{
  int v2;
  ushort *v3;
  int result;

  v2 = a2;
  v3 = a1;
  MI_CpuFill8(a1, 0, 0xA18u);
  *(uint *)v3 = *(uint *)v2;
  v3[2] = *(ushort *)(v2 + 4);
  *((uchar *)v3 + 6) = *(uchar *)(v2 + 6);
  *((uchar *)v3 + 7) = *(uchar *)(v2 + 7);
  result = *(uchar *)(v2 + 8);
  *((uchar *)v3 + 8) = result;
  return result;
}

//----- (0224F1B4) --------------------------------------------------------
int __fastcall Function_224f1b4(int a1)
{
  int v1;

  v1 = 0;
  do
  {
    if ( !(*(uint *)(a1 + 12) & (1 << v1)) )
    {
      *(uint *)(a1 + 12) |= 1 << v1;
      return v1;
    }
    ++v1;
  }
  while ( v1 < 32 );
  ErrorHandler();
  return 0;
}

//----- (0224F1E0) --------------------------------------------------------
int __fastcall Function_224f1e0(int result, char a2)
{
  *(uint *)(result + 12) &= ~(1 << a2);
  return result;
}

//----- (0224F1F8) --------------------------------------------------------
int __fastcall Function_224f1f8(int a1, char a2, short a3, int a4, uint a5)
{
  int v5;
  char v6;
  short v7;
  uint v8;
  int v10;
  short v11;
  short v12;
  char v13;
  uchar v14;
  char v15;
  int v16;

  v16 = a4;
  v5 = a1;
  v6 = a2;
  v7 = a3;
  v10 = a4;
  if ( a5 + 8 > 0x200 )
    ErrorHandler();
  MI_CpuFill8((ushort *)(v5 + 16), 0, 0x200u);
  v13 = v6;
  v12 = v7;
  v14 = Function_224f1b4(v5);
  v15 = 0;
  v11 = a5 + 8;
  MI_CpuCopy32((int *)&v11, (uint *)(v5 + 16), 8);
  MI_CpuCopy8(v10, v5 + 24, a5, v8);
  *(uchar *)(v5 + 2581) = 0;
  *(uchar *)(v5 + 2576) = 1;
  return v14;
}

//----- (0224F26C) --------------------------------------------------------
int __fastcall Function_224f26c(int a1, short *a2, int a3, uint a4)
{
  int v4;
  short v5;
  short *v6;
  int v7;
  uint v8;
  int result;
  uint v10;
  short v11;
  short v12;
  short v13;
  short v14;

  v4 = a1;
  v5 = a4 + 8;
  v6 = a2;
  v7 = a3;
  v10 = a4;
  if ( a4 + 8 > 0x200 )
    ErrorHandler();
  MI_CpuFill8((ushort *)(v4 + 16), 0, 0x200u);
  v11 = *v6;
  v12 = v6[1];
  v13 = v6[2];
  v14 = v6[3];
  LOBYTE(v13) = -2;
  LOBYTE(v14) = 1;
  v11 = v5;
  MI_CpuCopy32((int *)&v11, (uint *)(v4 + 16), 8);
  if ( v7 )
    MI_CpuCopy8(v7, v4 + 24, v10, v8);
  result = 2576;
  *(uchar *)(v4 + 2576) = 1;
  return result;
}

//----- (0224F2DC) --------------------------------------------------------
int __fastcall Function_224f2dc(int a1, int a2, uint *a3, int *a4)
{
  int result;

  *a3 = a1 + 528 + (a2 << 9);
  result = a1 + 536 + (a2 << 9);
  *a4 = result;
  return result;
}

//----- (0224F2F8) --------------------------------------------------------
BOOL __fastcall Function_224f2f8(int a1)
{
  return *(uchar *)(a1 + 2576) != 1;
}

//----- (0224F30C) --------------------------------------------------------
int __fastcall Function_224f30c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( !Function_224f2f8(a1) )
    return 0;
  if ( v6 >= *(ushort *)(v4 + 4) )
    ErrorHandler();
  (*(void (__fastcall **)(int, int, int, int))(*(uint *)v4 + 12 * v6))(v4, v5, v6, v7);
  return 1;
}

//----- (0224F344) --------------------------------------------------------
BOOL __fastcall Function_224f344(int a1, int a2, int a3)
{
  return a1 == a3 || a3 == 255 || a3 == 254 && a2 == a1;
}

//----- (0224F35C) --------------------------------------------------------
int __fastcall Function_224f35c(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( !*(uchar *)(a1 + 2576) )
    return 0;
  if ( *(uchar *)(a1 + 7) )
  {
    if ( Function_203597c(24, a1 + 16, *(ushort *)(a1 + 16)) == 1 )
    {
      *(uchar *)(v1 + 2576) = 0;
      result = 1;
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    MI_CpuCopy8(a1 + 16, a1 + 528 + (*(uchar *)(a1 + 6) << 9), 0x200u, a1 + 528);
    *(uchar *)(v1 + *(uchar *)(v1 + 6) + 2577) = 1;
    MI_CpuFill8((ushort *)(v1 + 16), 0, 0x200u);
    *(uchar *)(v1 + 2576) = 0;
    result = 1;
  }
  return result;
}

//----- (0224F3D0) --------------------------------------------------------
int __fastcall Function_224f3d0(int a1)
{
  return *(uchar *)(a1 + 2576);
}

//----- (0224F3D8) --------------------------------------------------------
int __fastcall Function_224f3d8(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  uint v9;
  int v10;
  int v11;
  char v12[16];
  int v13;

  v13 = a4;
  v4 = a1;
  v5 = a2;
  MI_CpuFill8(v12, 0, 0x10u);
  v6 = 0;
  while ( *(uchar *)(v4 + v6 + 2577) != 1 )
  {
    if ( ++v6 >= 4 )
      return 0;
  }
  Function_224f2dc(v4, v6, &v11, &v10);
  if ( Function_224f344(*(uchar *)(v4 + 6), *(uchar *)(v4 + 8), *(uchar *)(v11 + 4)) == 1 )
  {
    v7 = v11;
    v9 = *(ushort *)(v11 + 2);
    if ( v9 < *(ushort *)(v4 + 4) )
    {
      if ( *(uchar *)(v11 + 6) )
      {
        if ( *(uint *)(*(uint *)v4 + 12 * v9 + 8) )
        {
          *(uint *)&v12[4 * v6] = v10;
          (*(void (__fastcall **)(int, int))(*(uint *)v4 + 12 * *(ushort *)(v7 + 2) + 8))(v4, v5);
        }
        Function_224f1e0(v4, *(uchar *)(v11 + 5));
        ++*(uchar *)(v4 + 2581);
      }
      else
      {
        (*(void (__fastcall **)(int, int))(*(uint *)v4 + 12 * v9 + 4))(v4, v5);
      }
    }
  }
  *(uchar *)(v4 + v6 + 2577) = 0;
  MI_CpuFill8((ushort *)(v4 + 528 + (v6 << 9)), 0, 0x200u);
  return 1;
}

//----- (0224F4B8) --------------------------------------------------------
BOOL __fastcall Function_224f4b8(int a1, int a2, int a3, int a4)
{
  BOOL result;

  if ( a3 == a4 )
    result = *(uchar *)(a1 + 2581) >= a2;
  else
    result = 1;
  return result;
}

//----- (0224F4D4) --------------------------------------------------------
int __fastcall Function_17_224f4d4(int a1)
{
  int v1;
  int v2;
  int v3;
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

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
  Function_2017fc8(3, 24, 458752);
  v2 = MallocSomeDataAndStorePtrInOverlayData1c(v1, 4736, 0x18u);
  MI_CpuFill8((ushort *)v2, 0, 0x1280u);
  *(uint *)(v2 + 12) = Function_223f140(0x18u);
  v3 = LoadPtrToOverWorldDataIn18(v1);
  *(uint *)v2 = v3;
  *(uint *)(v3 + 364) = v2;
  *(uchar *)(*(uint *)v2 + 368) = 3;
  *(uint *)(v2 + 16) = *(uint *)v2;
  Function_224fe1c(v2);
  *(uchar *)(v2 + 4735) = 0;
  *(uint *)(v2 + 208) = MallocFill120(0x18u);
  Function_2003858(*(uint *)(v2 + 208), 1);
  Function_2002f70(*(uint *)(v2 + 208), 0, 512, 0x18u);
  Function_2002f70(*(uint *)(v2 + 208), 1, 512, 0x18u);
  Function_2002f70(*(uint *)(v2 + 208), 2, 448, 0x18u);
  Function_2002f70(*(uint *)(v2 + 208), 3, 512, 0x18u);
  *(uint *)(v2 + 48) = Function_2018340(0x18u);
  Function_201dbec(64, 0x18u);
  Function_2017dd4(4, 8);
  Function_224fb34(*(uint *)(v2 + 48));
  Function_201e3d8();
  Function_201e450(4u);
  Function_2002bb8(2, 0x18u);
  v4 = Function_200c6e4(0x18u);
  *(uint *)(v2 + 40) = v4;
  Function_200c73c(v4, &dword_2254B0C, dword_2254AC4, 32);
  Function_200966c(1, 1048592, v5, v6);
  Function_2009704(1);
  *(uint *)(v2 + 44) = Function_200c704(*(uint **)(v2 + 40));
  Function_200c7c0(*(int **)(v2 + 40), *(int ***)(v2 + 44), 128);
  Function_200cb30(*(uint **)(v2 + 40), *(uint *)(v2 + 44), dword_2254AD8);
  *(uint *)(v2 + 20) = Function_200762c(0x18u, v7, v8, v9);
  Function_224fddc();
  *(uint *)(v2 + 196) = LoadFromMsgNARC(0, 26, 218, 0x18u);
  *(uint *)(v2 + 200) = Function_200b358(0x18u);
  *(uint *)(v2 + 204) = Function_2023790(320, 0x18u);
  *(uint *)(v2 + 212) = Function_2012744(10, 0x18u);
  Function_224fe60(v2);
  Function_224fe70(v2);
  Function_224fca0(v2);
  Function_224fe48(v2);
  Function_224fe58(v2);
  Function_2250744(v2);
  Function_2039734();
  Function_200f174(1u, 33, 33, 0, 6, 1, 24);
  *(uint *)(v2 + 4) = AddTaskToTaskList1((int)Function_224fafc, v2, 0x13880u);
  *(uchar *)(v2 + 2128) = 1;
  Function_201ffd0();
  Function_201ff0c(0x10u, 1);
  Function_201ff74(0x10u, 1);
  Function_2004550(6u, 0x46Fu);
  Function_20959f4(*(uchar *)(*(uint *)v2 + 369));
  SetMainLoopFunctionCall((int)Function_224fa24, v2);
  *(uint *)(v2 + 8) = AddTaskToTaskList2((int)Function_224fae4, v2, 0xAu);
  Function_2005748(0x6E5u);
  return 1;
}

//----- (0224F754) --------------------------------------------------------
int __fastcall Function_17_224f754(int a1, int *a2)
{
  int *v2;
  int v3;
  uchar *v4;
  int v5;
  int v6;
  short v7;
  int v8;
  int v9;

  v2 = a2;
  v3 = LoadOverlayData1c(a1);
  v4 = *(uchar **)v3;
  Call_PRNG();
  v5 = *v2;
  if ( !*v2 )
  {
    if ( Function_200f2ac() == 1 )
    {
      Function_20177bc((int (__fastcall *)(uint))Function_224faac, v3);
      *(uint *)(v3 + 2120) = Function_223f70c(0x18u, *(uint *)(v3 + 208), (int)dword_2254AB4, 8, 255, 0xD6D8u);
      *v2 = 1;
    }
    return 0;
  }
  if ( v5 == 1 )
  {
    if ( Function_2094edc(*(uchar **)v3) == 1 )
    {
      v6 = ((int (__fastcall *)(int, int))*(&off_2254B54 + *(ushort *)(v3 + 2126)))(v3, v3 + 4724);
      if ( v6 != 1 && v6 != 2 )
      {
        if ( v6 == 3 )
        {
          *v2 = 2;
          MI_CpuFill8((ushort *)(v3 + 4724), 0, 8u);
          return 0;
        }
      }
      else
      {
        if ( v6 == 1 )
          v7 = *(ushort *)(v3 + 2126) + 1;
        else
          v7 = *(ushort *)(v3 + 4726);
        *(ushort *)(v3 + 2126) = v7;
        MI_CpuFill8((ushort *)(v3 + 4724), 0, 8u);
      }
    }
    Function_224f35c(v3 + 2140);
    Function_224f3d8(v3 + 2140, v3, v8, v9);
    if ( *(uchar *)(v3 + 4732) == 1 )
    {
      *v2 = 2;
      MI_CpuFill8((ushort *)(v3 + 4724), 0, 8u);
    }
    return 0;
  }
  if ( v5 == 2 && Function_200f2ac() == 1 )
    return 1;
  return 0;
}

//----- (0224F86C) --------------------------------------------------------
int __fastcall Function_17_224f86c(int a1)
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
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  Function_20141e4();
  Function_224fe50(v2);
  Function_224fe5c(v2);
  Function_224fe68(v2);
  Function_224fec8(v2);
  v3 = 0;
  v4 = v2 + 52;
  do
  {
    Function_201a8fc(v4);
    ++v3;
    v4 += 16;
  }
  while ( v3 < 9 );
  Function_201ff0c(1u, 0);
  Function_201ff0c(2u, 0);
  Function_2019044(*(uint *)(v2 + 48), 1);
  Function_2019044(*(uint *)(v2 + 48), 2);
  Function_2019044(*(uint *)(v2 + 48), 3);
  Function_2019120(4u, 0);
  Function_2019044(*(uint *)(v2 + 48), 4);
  Function_200d0b0(*(uint *)(v2 + 40), *(int ***)(v2 + 44));
  Function_200c8d4(*(uint *)(v2 + 40));
  Function_201dc3c();
  Function_22507c4(v2 + 16);
  Function_2007b6c(*(uint *)(v2 + 20));
  Function_20127bc(*(uint *)(v2 + 212));
  Function_2002c60(2);
  Function_2002fa0(*(uint *)(v2 + 208), 0);
  Function_2002fa0(*(uint *)(v2 + 208), 1);
  Function_2002fa0(*(uint *)(v2 + 208), 2);
  Function_2002fa0(*(uint *)(v2 + 208), 3);
  Call_free1(*(uint *)(v2 + 208));
  Function_20237bc_FreeMsg(*(uint *)(v2 + 204), v5);
  Function_200b3f0(*(uint **)(v2 + 200), v6);
  Function_200b190(*(ushort **)(v2 + 196));
  free(*(uint *)(v2 + 48));
  Call_RemoveTaskFromTaskList(*(int **)(v2 + 4));
  Call_RemoveTaskFromTaskList(*(int **)(v2 + 8));
  Function_223f1e0(*(uint *)(v2 + 12));
  Function_201e530();
  FreeSomeDataAndStore0InOverlayData1c(v1);
  REG_DISPCNT &= 0xFFFF1FFF;
  REG_DISPCNT_SUB &= 0xFFFF1FFF;
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  Function_201807c(24);
  Function_2095a24();
  MIi_CpuClear16(0x7FFF, 83886080, 512);
  MIi_CpuClear16(0x7FFF, 83886592, 512);
  MIi_CpuClear16(0x7FFF, 83887104, 512);
  MIi_CpuClear16(0x7FFF, 83887616, 512);
  Function_2039794();
  UnloadOverlay(11, v7, v8, v9);
  UnloadOverlay(12, v10, v11, v12);
  UnloadOverlay(22, v13, v14, v15);
  return 1;
}

//----- (0224FA24) --------------------------------------------------------
int __fastcall Function_224fa24(int a1)
{
  int v1;
  short v2;
  short v3;
  short v4;
  short v5;
  int result;

  v1 = a1;
  v2 = *(uchar *)(a1 + 2130);
  v3 = *(uchar *)(a1 + 2132);
  WIN0_X1 = (*(uchar *)(v1 + 2129) << 8) & 0xFF00 | *(uchar *)(v1 + 2131);
  WIN0_Y1 = (v2 << 8) & 0xFF00 | v3;
  v4 = *(uchar *)(a1 + 2136);
  v5 = *(uchar *)(a1 + 2134);
  WIN1_X1 = *(uchar *)(a1 + 2135) | (*(uchar *)(a1 + 2133) << 8) & 0xFF00;
  WIN1_Y1 = (v5 << 8) & 0xFF00 | v4;
  Function_2008a94(*(uint *)(a1 + 20));
  Function_201dcac();
  Function_200c800();
  Function_2003694(*(uint *)(v1 + 208));
  Function_201c2b8(*(uint *)(v1 + 48));
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (0224FAAC) --------------------------------------------------------
uint __fastcall Function_224faac(int a1)
{
  uint result;

  result = *(uchar *)(a1 + 4735);
  if ( result == 1 )
  {
    result = (ushort)REG_VCOUNT;
    if ( (int)(ushort)REG_VCOUNT < 144 || (int)(ushort)REG_VCOUNT > 152 )
    {
      if ( (int)(ushort)REG_VCOUNT < 144 )
        result = Function_2019060(1u, 2);
    }
    else
    {
      result = Function_2019060(1u, 0);
    }
  }
  return result;
}

//----- (0224FAE4) --------------------------------------------------------
uint __fastcall Function_224fae4(int a1, int a2)
{
  uint result;

  result = *(uchar *)(a2 + 4735);
  if ( result == 1 )
    result = Function_2019060(1u, 2);
  return result;
}

//----- (0224FAFC) --------------------------------------------------------
void __fastcall Function_224fafc(int a1, int a2)
{
  int v2;
  int *v3;
  int v4;

  v2 = a2;
  if ( *(uchar *)(a2 + 2128) == 1 )
  {
    v3 = Function_2007768(*(uint *)(a2 + 20));
    ((void (__fastcall *)(int *))dword_221F8F0[0])(v3);
    Function_200c7ec(*(int **)(v2 + 44));
    Function_200c808();
    GFX_FLUSH = 1;
  }
  v4 = *(uint *)(v2 + 48);
  Function_2038a1c();
}

//----- (0224FB34) --------------------------------------------------------
void __fastcall Function_224fb34(uint *a1, int a2, int a3, int a4)
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
  char v26;
  char v27;
  char v28;
  char v29;
  int v30;

  v30 = a4;
  v4 = a1;
  Function_201ff00();
  v5 = dword_2254B2C;
  v6 = &v26;
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
  GX_SetBanks((int *)&v26);
  MIi_CpuClear32(0, (uint *)0x6000000, 0x80000);
  MIi_CpuClear32(0, (uint *)0x6200000, 0x20000);
  MIi_CpuClear32(0, (uint *)0x6400000, 0x40000);
  MIi_CpuClear32(0, (uint *)0x6600000, 0x20000);
  v22 = 1;
  v23 = 0;
  v24 = 0;
  v25 = 1;
  SetGraphicsModes(&v22);
  v10 = dword_2254B80;
  v11 = &v27;
  v12 = 10;
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
  *(uint *)v11 = *v10;
  Function_20183c4(v4, 1u, (int *)&v27, 0);
  Function_2019ebc(v4, 1u);
  Function_2019184((int)v4, 1u, 0, 0);
  Function_2019184((int)v4, 1u, 3u, 0);
  Function_20183c4(v4, 2u, (int *)&v28, 0);
  Function_2019ebc(v4, 2u);
  Function_2019184((int)v4, 2u, 0, 0);
  Function_2019184((int)v4, 2u, 3u, 0);
  Function_20183c4(v4, 3u, (int *)&v29, 0);
  Function_2019ebc(v4, 3u);
  Function_2019184((int)v4, 3u, 0, 0);
  Function_2019184((int)v4, 3u, 3u, 0);
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 1;
  Function_201ff0c(1u, 1);
  v15 = 0;
  v16 = 0;
  v17 = 2048;
  v18 = 0;
  v19 = 983041;
  v20 = 768;
  v21 = 0;
  Function_20183c4(v4, 4u, &v15, 0);
  Function_2019ebc(v4, 4u);
  Function_2019184((int)v4, 4u, 0, 0);
  Function_2019184((int)v4, 4u, 3u, 0);
}

//----- (0224FCA0) --------------------------------------------------------
int __fastcall Function_224fca0(int a1)
{
  int v1;

  v1 = a1;
  Function_201a7e8(*(uint **)(a1 + 48), a1 + 52, 1, 2, 19, 0x1Bu, 4u, 13, 31);
  Function_201a7e8(*(uint **)(v1 + 48), v1 + 68, 1, 6, 1, 8u, 3u, 13, 139);
  Function_201a7e8(*(uint **)(v1 + 48), v1 + 84, 1, 6, 5, 8u, 3u, 13, 163);
  Function_201a7e8(*(uint **)(v1 + 48), v1 + 100, 1, 6, 9, 8u, 3u, 13, 187);
  Function_201a7e8(*(uint **)(v1 + 48), v1 + 116, 1, 6, 13, 8u, 3u, 13, 211);
  Function_201a7e8(*(uint **)(v1 + 48), v1 + 132, 1, 16, 1, 8u, 3u, 13, 235);
  Function_201a7e8(*(uint **)(v1 + 48), v1 + 148, 1, 16, 5, 8u, 3u, 13, 259);
  Function_201a7e8(*(uint **)(v1 + 48), v1 + 164, 1, 16, 9, 8u, 3u, 13, 283);
  return Function_201a7e8(*(uint **)(v1 + 48), v1 + 180, 1, 16, 13, 8u, 3u, 13, 307);
}

//----- (0224FDDC) --------------------------------------------------------
int Function_224fddc()
{
  int v0;
  int v1;

  v0 = Function_20a5a2c();
  v1 = Function_20a5a3c();
  if ( !v0 )
    ErrorHandler();
  if ( !v1 )
    ErrorHandler();
  return Function_2014000();
}

//----- (0224FE1C) --------------------------------------------------------
int __fastcall Function_224fe1c(uint *a1)
{
  uint *v1;
  int v2;
  char v3;
  int v4;

  v1 = a1;
  if ( !*a1 )
    ErrorHandler();
  v2 = 0;
  do
  {
    v3 = 3 - v2;
    v4 = (int)v1 + v2++;
    *(uchar *)(v4 + 972) = v3;
  }
  while ( v2 < 4 );
  return Function_2251d6c(v1, 972);
}

//----- (0224FE48) --------------------------------------------------------
int Function_224fe48()
{
  return Function_2250a88();
}

//----- (0224FE50) --------------------------------------------------------
int Function_224fe50()
{
  return Function_2250d8c();
}

//----- (0224FE58) --------------------------------------------------------
void Function_224fe58()
{
  ;
}

//----- (0224FE5C) --------------------------------------------------------
void Function_224fe5c()
{
  ;
}

//----- (0224FE60) --------------------------------------------------------
int Function_224fe60()
{
  return Function_22509ac();
}

//----- (0224FE68) --------------------------------------------------------
int Function_224fe68()
{
  return Function_2250d24();
}

//----- (0224FE70) --------------------------------------------------------
uint __fastcall Function_224fe70(int a1)
{
  int v1;

  v1 = a1;
  LoadFromNARC_RGCN(45, 19, *(uint **)(a1 + 48), 4u, 0, 0, 1, 24);
  LoadFromNARC_RCSN(45, 20, *(uint **)(v1 + 48), 4u, 0, 0, 1, 24);
  return Function_2003050(*(uint *)(v1 + 208), 45, 34, 24, 1, 0, 0);
}

//----- (0224FEC8) --------------------------------------------------------
void Function_224fec8()
{
  ;
}

//----- (0224FECC) --------------------------------------------------------
int __fastcall Function_224fecc(uchar *a1, ushort *a2)
{
  ushort *v2;
  int v3;
  uchar *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  char v9;
  int v10;
  int v11;
  ushort *v12;
  ushort *v13;
  int v14;

  v2 = a2;
  v3 = *a2;
  v4 = a1;
  if ( !v3 )
  {
    Function_2251a1c();
    v5 = *(uint *)v4;
    v6 = 0;
    do
    {
      if ( !*(uchar *)(v5 + 304) )
        break;
      ++v6;
      v5 += 12;
    }
    while ( v6 < 4 );
    if ( v6 == 4 )
      ErrorHandler();
    v4[1080] = v6;
    v7 = 0;
    do
    {
      v8 = (int)&v4[v7];
      v9 = v4[v7++ + 977];
      *(uchar *)(v8 + 1081) = v9;
    }
    while ( v7 < 4 );
    v10 = 0;
    v11 = 0;
    v12 = v4;
    do
    {
      v13 = (ushort *)(*(uint *)v4 + v11);
      v12[462] = v13[148];
      ++v10;
      v11 += 12;
      v12[463] = v13[149];
      v12[464] = v13[150];
      v12[465] = v13[151];
      v12[466] = v13[152];
      v12[467] = v13[153];
      v12 += 6;
    }
    while ( v10 < 4 );
    ++*v2;
    goto LABEL_15;
  }
  if ( v3 == 1 )
  {
LABEL_15:
    if ( *(uchar *)(*(uint *)v4 + 375) && (v14 = *((uint *)v2 + 1), v14 < 120) )
    {
      *((uint *)v2 + 1) = v14 + 1;
    }
    else if ( Function_224f30c((int)(v4 + 2140), (int)v4, 1, (int)(v4 + 924)) == 1 )
    {
      *((uint *)v2 + 1) = 0;
      ++*v2;
    }
    return 0;
  }
  if ( v3 != 2 )
    return 1;
  if ( Function_224f4b8(
         (int)(a1 + 2140),
         *(uchar *)(*(uint *)a1 + 295),
         *(uchar *)(*(uint *)a1 + 291),
         *(uchar *)(*(uint *)a1 + 284)) == 1 )
    ++*v2;
  return 0;
}

//----- (02250000) --------------------------------------------------------
int __fastcall Function_2250000(uchar *a1, ushort *a2)
{
  ushort *v2;

  v2 = a2;
  if ( *a2 )
  {
    if ( *a2 != 1 )
      return 1;
    if ( Function_224f4b8(
           (int)(a1 + 2140),
           *(uchar *)(*(uint *)a1 + 295),
           *(uchar *)(*(uint *)a1 + 291),
           *(uchar *)(*(uint *)a1 + 284)) == 1 )
      ++*v2;
  }
  else
  {
    a1[1093] = 0;
    a1[1095] = 0;
    a1[1094] = 0;
    a1[1086] = a1[972];
    a1[1092] = 1;
    if ( Function_224f30c((int)(a1 + 2140), (int)a1, 5, (int)(a1 + 1078)) == 1 )
      ++*v2;
  }
  return 0;
}

//----- (02250084) --------------------------------------------------------
int __fastcall Function_2250084(int a1, ushort *a2)
{
  ushort *v2;

  v2 = a2;
  if ( *a2 )
  {
    if ( *a2 != 1 )
      return 1;
    if ( Function_224f4b8(
           a1 + 2140,
           *(uchar *)(*(uint *)a1 + 295),
           *(uchar *)(*(uint *)a1 + 291),
           *(uchar *)(*(uint *)a1 + 284)) == 1 )
      ++*v2;
  }
  else if ( Function_224f30c(a1 + 2140, a1, 6, a1 + 924) == 1 )
  {
    ++*v2;
  }
  return 0;
}

//----- (022500E8) --------------------------------------------------------
int __fastcall Function_22500e8(uchar *a1, ushort *a2)
{
  ushort *v2;
  uchar *v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  if ( *a2 )
  {
    if ( v4 == 1 )
    {
      if ( Function_224f4b8(
             (int)(v3 + 2140),
             *(uchar *)(*(uint *)v3 + 295),
             *(uchar *)(*(uint *)v3 + 291),
             *(uchar *)(*(uint *)v3 + 284)) == 1 )
        ++*v2;
    }
    else
    {
      if ( v4 != 2 )
        return 1;
      v5 = *((uint *)a2 + 1) + 1;
      *((uint *)a2 + 1) = v5;
      if ( v5 > 60 )
        ++*a2;
    }
  }
  else
  {
    v3[1093] = 0;
    v3[1095] = 1;
    v3[1094] = 1;
    v3[1092] = 6;
    if ( Function_224f30c((int)(v3 + 2140), (int)v3, 5, (int)(v3 + 1078)) == 1 )
      ++*v2;
  }
  return 0;
}

//----- (02250178) --------------------------------------------------------
int __fastcall Function_2250178(uchar *a1, int a2)
{
  ushort *v2;
  int result;
  int v4;

  v2 = (ushort *)a2;
  switch ( (uchar)*(ushort *)a2 )
  {
    case 0u:
      switch ( *(uchar *)(*(uint *)a1 + 289) )
      {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
          a1[1093] = 0;
          a1[1095] = 1;
          a1[1094] = 1;
          a1[1092] = 2;
          if ( Function_224f30c((int)(a1 + 2140), (int)a1, 5, (int)(a1 + 1078)) == 1 )
            ++*v2;
          goto LABEL_15;
        default:
          result = 1;
          break;
      }
      return result;
    case 1u:
      if ( Function_224f4b8(
             (int)(a1 + 2140),
             *(uchar *)(*(uint *)a1 + 295),
             *(uchar *)(*(uint *)a1 + 291),
             *(uchar *)(*(uint *)a1 + 284)) == 1 )
        ++*v2;
      goto LABEL_15;
    case 2u:
      a1[1085] = 0;
      if ( Function_224f30c((int)(a1 + 2140), (int)a1, 9, (int)(a1 + 1078)) == 1 )
        ++*v2;
      goto LABEL_15;
    case 3u:
      if ( Function_224f4b8(
             (int)(a1 + 2140),
             *(uchar *)(*(uint *)a1 + 295),
             *(uchar *)(*(uint *)a1 + 291),
             *(uchar *)(*(uint *)a1 + 284)) == 1 )
        ++*v2;
      goto LABEL_15;
    case 4u:
      v4 = *(uint *)(a2 + 4) + 1;
      *(uint *)(a2 + 4) = v4;
      if ( v4 > 60 )
        ++*(ushort *)a2;
LABEL_15:
      result = 0;
      break;
    default:
      result = 1;
      break;
  }
  return result;
}

//----- (02250284) --------------------------------------------------------
int __fastcall Function_2250284(uchar *a1, int a2)
{
  ushort *v2;
  int v3;
  int result;
  int v5;

  v2 = (ushort *)a2;
  v3 = (int)a1;
  switch ( (uchar)*(ushort *)a2 )
  {
    case 0u:
      switch ( *(uchar *)(*(uint *)a1 + 289) )
      {
        case 1:
        case 2:
        case 5:
        case 6:
          a1[1093] = 0;
          a1[1095] = 1;
          a1[1094] = 1;
          a1[1086] = a1[972];
          a1[1090] = Function_20958fc((uchar)a1[972]) + 1;
          *(uchar *)(v3 + 1092) = 3;
          if ( Function_224f30c(v3 + 2140, v3, 5, v3 + 1078) == 1 )
            ++*v2;
          goto LABEL_15;
        default:
          result = 1;
          break;
      }
      return result;
    case 1u:
      if ( Function_224f4b8(
             (int)(a1 + 2140),
             *(uchar *)(*(uint *)a1 + 295),
             *(uchar *)(*(uint *)a1 + 291),
             *(uchar *)(*(uint *)a1 + 284)) == 1 )
        ++*v2;
      goto LABEL_15;
    case 2u:
      a1[1085] = 1;
      if ( Function_224f30c((int)(a1 + 2140), (int)a1, 9, (int)(a1 + 1078)) == 1 )
        ++*v2;
      goto LABEL_15;
    case 3u:
      if ( Function_224f4b8(
             (int)(a1 + 2140),
             *(uchar *)(*(uint *)a1 + 295),
             *(uchar *)(*(uint *)a1 + 291),
             *(uchar *)(*(uint *)a1 + 284)) == 1 )
        ++*v2;
      goto LABEL_15;
    case 4u:
      v5 = *(uint *)(a2 + 4) + 1;
      *(uint *)(a2 + 4) = v5;
      if ( v5 > 90 )
        ++*(ushort *)a2;
LABEL_15:
      result = 0;
      break;
    default:
      result = 1;
      break;
  }
  return result;
}

//----- (022503B0) --------------------------------------------------------
int __fastcall Function_22503b0(uchar *a1, ushort *a2)
{
  ushort *v2;
  uchar *v3;
  uint v4;
  int result;
  int v6;

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  if ( v4 <= 4 )
    JUMPOUT(__CS__, *((short *)&off_22503CA + v4) + 35980236);
  switch ( (uchar)v4 )
  {
    case 0:
      switch ( *(uchar *)(*(uint *)v3 + 289) )
      {
        case 0:
        case 2:
        case 7:
        case 8:
          v3[1093] = 0;
          v3[1095] = 1;
          v3[1094] = 1;
          v3[1086] = v3[972];
          v3[1090] = Function_20958fc((uchar)v3[972]) + 1;
          v3[1092] = 4;
          if ( Function_224f30c((int)(v3 + 2140), (int)v3, 5, (int)(v3 + 1078)) == 1 )
            ++*v2;
          goto LABEL_17;
        default:
          result = 1;
          break;
      }
      return result;
    case 1:
      if ( Function_224f4b8(
             (int)(v3 + 2140),
             *(uchar *)(*(uint *)v3 + 295),
             *(uchar *)(*(uint *)v3 + 291),
             *(uchar *)(*(uint *)v3 + 284)) == 1 )
        ++*v2;
      goto LABEL_17;
    case 2:
      v3[1085] = 2;
      if ( Function_224f30c((int)(v3 + 2140), (int)v3, 9, (int)(v3 + 1078)) == 1 )
        ++*v2;
      goto LABEL_17;
    case 3:
      if ( Function_224f4b8(
             (int)(v3 + 2140),
             *(uchar *)(*(uint *)v3 + 295),
             *(uchar *)(*(uint *)v3 + 291),
             *(uchar *)(*(uint *)v3 + 284)) == 1 )
        ++*v2;
      goto LABEL_17;
    case 4:
      v6 = *((uint *)a2 + 1) + 1;
      *((uint *)a2 + 1) = v6;
      if ( v6 > 15 )
        ++*a2;
LABEL_17:
      result = 0;
      break;
    default:
      result = 1;
      break;
  }
  return result;
}

//----- (022504E4) --------------------------------------------------------
int __fastcall Function_22504e4(int a1, ushort *a2)
{
  ushort *v2;

  v2 = a2;
  if ( *a2 )
  {
    if ( *a2 != 1 )
      return 1;
    if ( Function_224f4b8(
           a1 + 2140,
           *(uchar *)(*(uint *)a1 + 295),
           *(uchar *)(*(uint *)a1 + 291),
           *(uchar *)(*(uint *)a1 + 284)) == 1 )
      ++*v2;
  }
  else if ( Function_224f30c(a1 + 2140, a1, 7, a1 + 1078) == 1 )
  {
    ++*v2;
  }
  return 0;
}

//----- (02250548) --------------------------------------------------------
int __fastcall Function_2250548(uchar *a1, ushort *a2)
{
  ushort *v2;
  int v3;
  int result;

  v2 = a2;
  v3 = (int)a1;
  switch ( (uchar)*a2 )
  {
    case 0u:
      a1[1093] = 0;
      a1[1095] = 1;
      a1[1094] = 1;
      a1[1086] = a1[1080];
      a1[1090] = Function_20958fc((uchar)a1[1080]) + 1;
      *(uchar *)(v3 + 1092) = 5;
      if ( Function_224f30c(v3 + 2140, v3, 5, v3 + 1078) == 1 )
        ++*v2;
      goto LABEL_11;
    case 1u:
      if ( Function_224f4b8(
             (int)(a1 + 2140),
             *(uchar *)(*(uint *)a1 + 295),
             *(uchar *)(*(uint *)a1 + 291),
             *(uchar *)(*(uint *)a1 + 284)) == 1 )
        ++*v2;
      goto LABEL_11;
    case 2u:
      if ( Function_224f30c((int)(a1 + 2140), (int)a1, 8, (int)(a1 + 1078)) == 1 )
        ++*v2;
      goto LABEL_11;
    case 3u:
      if ( Function_224f4b8(
             (int)(a1 + 2140),
             *(uchar *)(*(uint *)a1 + 295),
             *(uchar *)(*(uint *)a1 + 291),
             *(uchar *)(*(uint *)a1 + 284)) == 1 )
        ++*v2;
LABEL_11:
      result = 0;
      break;
    default:
      result = 1;
      break;
  }
  return result;
}

//----- (0225062C) --------------------------------------------------------
int __fastcall Function_225062c(uchar *a1, ushort *a2)
{
  ushort *v2;

  v2 = a2;
  if ( *a2 )
  {
    if ( *a2 != 1 )
      return 1;
    if ( Function_224f4b8(
           (int)(a1 + 2140),
           *(uchar *)(*(uint *)a1 + 295),
           *(uchar *)(*(uint *)a1 + 291),
           *(uchar *)(*(uint *)a1 + 284)) == 1 )
      ++*v2;
  }
  else
  {
    a1[1093] = 0;
    a1[1095] = 0;
    a1[1094] = 0;
    a1[1086] = a1[972];
    a1[1092] = 0;
    if ( Function_224f30c((int)(a1 + 2140), (int)a1, 5, (int)(a1 + 1078)) == 1 )
      ++*v2;
  }
  return 0;
}

//----- (022506AC) --------------------------------------------------------
int __fastcall Function_22506ac(int a1, ushort *a2)
{
  ushort *v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = a1;
  v4 = (ushort)*a2;
  if ( *a2 )
  {
    if ( v4 == 1 )
    {
      if ( Function_224f4b8(
             v3 + 2140,
             *(uchar *)(*(uint *)v3 + 295),
             *(uchar *)(*(uint *)v3 + 291),
             *(uchar *)(*(uint *)v3 + 284)) == 1 )
        ++*v2;
    }
    else if ( v4 == 2 )
    {
      if ( Function_224f30c(v3 + 2140, v3, 4, 0) == 1 )
        ++*v2;
    }
    else if ( Function_224f4b8(
                v3 + 2140,
                *(uchar *)(*(uint *)v3 + 295),
                *(uchar *)(*(uint *)v3 + 291),
                *(uchar *)(*(uint *)v3 + 284)) == 1 )
    {
      return 3;
    }
  }
  else if ( Function_224f30c(v3 + 2140, v3, 10, 0) == 1 )
  {
    ++*v2;
  }
  return 0;
}

//----- (02250744) --------------------------------------------------------
int __fastcall Function_2250744(int result)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = result;
  v2 = 0;
  v3 = result + 216;
  while ( v2 < 4 )
  {
    v4 = *(uchar *)(v1 + v2 + 972);
    if ( *(uint *)(v1 + 16 * v4 + 216) )
      ErrorHandler();
    *(uint *)(v1 + 16 * v4 + 216) = malloc(0x18u, 3200);
    result = Function_2095484(
               *(uint **)(v1 + 20),
               v2,
               *(uint *)(*(uint *)(v1 + 16) + 4 * v4),
               2u,
               (int *)(v3 + 16 * v4),
               0x18u,
               *((ushort *)dword_2254BF4 + 3 * v2),
               *((ushort *)dword_2254BF4 + 3 * v2 + 1),
               *((short *)&dword_2254BF4[1] + 3 * v2));
    *(uint *)(v1 + 4 * v4 + 24) = result;
    ++v2;
  }
  return result;
}

//----- (022507C4) --------------------------------------------------------
int __fastcall Function_22507c4(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    Function_2007dc8(*(uint **)(v1 + 8));
    free(*(uint *)(v3 + 200));
    result = v3 + 200;
    ++v2;
    *(uint *)(v3 + 200) = 0;
    v1 += 4;
    v3 += 16;
  }
  while ( v2 < 4 );
  return result;
}

//----- (022507F0) --------------------------------------------------------
uint __fastcall Function_22507f0(uint result, int a2, uchar *a3)
{
  uint *v3;
  uchar *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v3 = (uint *)result;
  v4 = a3;
  if ( a2 && !a3 )
    result = ErrorHandler();
  switch ( (uchar)result )
  {
    case 0:
      return result;
    case 1:
      v5 = Function_2095848(
             *(uchar *)(*v3 + 288),
             *(uchar *)(*v3 + 289),
             *(uchar *)(*v3 + 369));
      result = (uint)Function_200bba8(v3[50], 0, v5);
      break;
    case 2:
      v6 = *v4;
      v7 = *(uchar *)(*v3 + v6 + 264);
      Function_200b48c((int *)v3[50], 0, *(uint *)(*v3 + 4 * v6 + 232));
      v8 = *(uint *)(v3[4] + 4 * *v4);
      Function_2076b10_Dummy();
      result = Function_200b5cc((int *)v3[50], 1u, v9);
      break;
    case 3:
      Function_200b60c(v3[50], 0, v4[4], 1, 0, 1);
      v10 = *v4;
      v11 = *(uchar *)(*v3 + v10 + 264);
      Function_200b48c((int *)v3[50], 1u, *(uint *)(*v3 + 4 * v10 + 232));
      v12 = *(uint *)(v3[4] + 4 * *v4);
      Function_2076b10_Dummy();
      result = Function_200b5cc((int *)v3[50], 2u, v13);
      break;
    default:
      result = ErrorHandler();
      break;
  }
  return result;
}

//----- (022508E4) --------------------------------------------------------
uint __fastcall Function_22508e4(uint a1, ushort **a2, uint a3, int a4, uchar *a5)
{
  uint v5;
  ushort **v6;
  uint v7;
  ushort *v8;
  int v9;
  int v11;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v11 = a4;
  if ( !*(uchar *)(*(uint *)a1 + 369) )
    Function_2027ac0(*(ushort **)(*(uint *)a1 + 6536));
  v8 = Function_200b1ec_CallMsgDecrypt(v6, v7);
  Function_22507f0(v5, v11, a5);
  Function_200c388(*(uint **)(v5 + 200), *(uint *)(v5 + 204), (int)v8);
  Function_201ada4_ClearTextBox(v5 + 52, 255);
  v9 = *(uint *)(v5 + 204);
  *(uchar *)(v5 + 920) = Function_201d738_CallInitTextInterpreter(v5 + 52, 1);
  return Function_20237bc_FreeMsg((int)v8, 920);
}

//----- (02250968) --------------------------------------------------------
uint __fastcall Function_2250968(uint a1, uint a2, uchar *a3)
{
  uint v3;
  uint v4;
  uchar *v5;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( a2 >= 7 )
    ErrorHandler();
  return Function_22508e4(
           v4,
           *(ushort ***)(v4 + 196),
           LOWORD(dword_2254C0C[v3]),
           BYTE2(dword_2254C0C[v3]),
           v5);
}

//----- (0225099C) --------------------------------------------------------
int __fastcall Function_225099c(int a1)
{
  return Function_201d724(*(uchar *)(a1 + 920));
}

//----- (022509AC) --------------------------------------------------------
uint __fastcall Function_22509ac(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  uint v6;
  int v7;

  v4 = a1;
  v5 = LoadFromNARC_8(45, 0x18u, a3, a4);
  Function_20070e8((int)v5, 0x17u, *(uint **)(v4 + 48), 3u, 0, 0, 1, 24);
  Function_200710c((int)v5, 0x16u, *(uint **)(v4 + 48), 3u, 0, 0, 1, 24);
  Function_2019ebc(*(uint **)(v4 + 48), 1u);
  Function_2003050(*(uint *)(v4 + 208), 45, 35, 24, 0, 0, 0);
  Function_2003050(*(uint *)(v4 + 208), 45, 36, 24, 0, 32, 0xD0u);
  v6 = Function_2027b50(*(ushort **)(*(uint *)v4 + 6536));
  Function_200dd0c(*(uint **)(v4 + 48), 1u, 1, 15, v6, 24);
  v7 = Function_200dd08(v6);
  Function_2003050(*(uint *)(v4 + 208), 38, v7, 24, 0, 32, 0xE0u);
  Function_2019ebc(*(uint **)(v4 + 48), 2u);
  return Call_FS_CloseFile(v5);
}

//----- (02250A84) --------------------------------------------------------
void Function_2250a84()
{
  ;
}

//----- (02250A88) --------------------------------------------------------
uint *__fastcall Function_2250a88(int a1)
{
  int v1;

  v1 = a1;
  Function_223f560(*(int **)(a1 + 40), *(uint *)(v1 + 44), *(uint *)(v1 + 208), 33001, 33002, 33001, 33001);
  return Function_223f630(
           v1 + 280,
           *(uint **)(v1 + 40),
           *(uint *)(v1 + 44),
           33001,
           33002,
           33001,
           33001,
           0,
           200,
           3,
           0xC350u);
}

//----- (02250AD8) --------------------------------------------------------
int __fastcall Function_2250ad8(int a1)
{
  int v1;

  v1 = a1;
  Function_223f6c4((int *)(a1 + 280));
  return Function_223f5e8(*(uint *)(v1 + 44), 33001, 33002, 33001, 33001);
}

//----- (02250B00) --------------------------------------------------------
uint __fastcall Function_2250b00(int a1, int a2, int a3, int a4)
{
  int v4;
  uint v5;
  int v6;
  ushort *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int *v16;

  v4 = a1;
  v16 = LoadFromNARC_8(45, 0x18u, a3, a4);
  Function_20070e8((int)v16, 0x1Bu, *(uint **)(v4 + 48), 3u, 0, 0, 1, 24);
  Function_200710c((int)v16, 0x19u, *(uint **)(v4 + 48), 3u, 0, 0, 1, 24);
  Function_200710c((int)v16, 0x1Au, *(uint **)(v4 + 48), 2u, 0, 0, 1, 24);
  Function_2019ebc(*(uint **)(v4 + 48), 1u);
  Function_2003050(*(uint *)(v4 + 208), 45, 39, 24, 0, 0, 0);
  Function_2003050(*(uint *)(v4 + 208), 45, 36, 24, 0, 32, 0xD0u);
  v5 = Function_2027b50(*(ushort **)(*(uint *)v4 + 6536));
  Function_200dd0c(*(uint **)(v4 + 48), 1u, 1, 15, v5, 24);
  v6 = Function_200dd08(v5);
  Function_2003050(*(uint *)(v4 + 208), 38, v6, 24, 0, 32, 0xE0u);
  v7 = (ushort *)Function_2023790(12, 0x18u);
  v8 = 0;
  v9 = v4 + 52;
  do
  {
    v10 = 4 * *(uchar *)(v4 + v8 + 972);
    GetPkmnData(*(int **)(*(uint *)(v4 + 16) + v10), 0x77u, v7);
    v11 = 16 * (v8 + 1);
    Function_201ada4_ClearTextBox(v9 + v11, 0);
    v12 = 16 * (v8 + 5);
    Function_201ada4_ClearTextBox(v9 + v12, 0);
    Function_201d78c(v9 + v11, 0);
    v13 = *(uint *)(*(uint *)v4 + v10 + 232);
    Function_201d78c(v9 + v12, 0);
    ++v8;
  }
  while ( v8 < 4 );
  Function_20237bc_FreeMsg((int)v7, v14);
  REG_DISPCNT = REG_DISPCNT & 0xFFFF1FFF | 0x6000;
  WIN_IN = WIN_IN & 0xFFC0 | 0x3F;
  WIN_IN = WIN_IN & 0xC0FF | 0x3F00;
  WIN_OUT = WIN_OUT & 0xFFC0 | 0x3B;
  WIN0_X1 = 255;
  WIN0_Y1 = 0;
  WIN1_X1 = 255;
  WIN1_Y1 = 0;
  return Call_FS_CloseFile(v16);
}

//----- (02250CEC) --------------------------------------------------------
int __fastcall Function_2250cec(int a1)
{
  int v1;

  v1 = a1;
  Function_20038b0(*(uint *)(a1 + 208), 1, 2, 0, 0, 0x100u);
  return Function_20038b0(*(uint *)(v1 + 208), 3, 2, 0, 0, 0x100u);
}

//----- (02250D24) --------------------------------------------------------
void Function_2250d24()
{
  ;
}

//----- (02250D28) --------------------------------------------------------
uint __fastcall Function_2250d28(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;

  v4 = a1;
  v5 = LoadFromNARC_8(46, 0x18u, a3, a4);
  Function_200cdc4(
    *(uint *)(v4 + 208),
    2u,
    *(uint **)(v4 + 40),
    *(uint *)(v4 + 44),
    (int)v5,
    0xAu,
    0,
    4,
    1,
    33001);
  Function_2250f68(v4, v5);
  Function_2250db0(v4);
  Function_225122c(v4, v5);
  Function_2251344(v4, v5);
  return Call_FS_CloseFile(v5);
}

//----- (02250D8C) --------------------------------------------------------
int __fastcall Function_2250d8c(int a1)
{
  int v1;

  v1 = a1;
  Function_2250efc();
  Function_22512e0(v1);
  Function_2251544(v1);
  Function_2250fbc(v1);
  return Function_22513c0(v1);
}

//----- (02250DB0) --------------------------------------------------------
uint __fastcall Function_2250db0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  char *v9;
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
  short *v20;
  int v21;
  int *v23;
  char v24;
  int v25;
  int v26;

  v26 = a4;
  v4 = a1;
  v23 = LoadFromNARC_8(19, 0x18u, a3, a4);
  v5 = Function_2079fd0();
  Function_200cdc4(
    *(uint *)(v4 + 208),
    2u,
    *(uint **)(v4 + 40),
    *(uint *)(v4 + 44),
    (int)v23,
    v5,
    0,
    3,
    1,
    33003);
  v6 = Function_2079fdc();
  Function_200ce24(*(uint **)(v4 + 40), *(uint *)(v4 + 44), (int)v23, v6, 0, 33002);
  v7 = Function_2079fe8();
  Function_200ce54(*(uint **)(v4 + 40), *(uint *)(v4 + 44), (int)v23, v7, 0, 33002);
  v8 = dword_2254C5C;
  v9 = &v24;
  v10 = 6;
  do
  {
    v11 = *v8;
    v12 = v8[1];
    v8 += 2;
    *(uint *)v9 = v11;
    *((uint *)v9 + 1) = v12;
    v9 += 8;
    --v10;
  }
  while ( v10 );
  v13 = 0;
  *(uint *)v9 = *v8;
  v14 = 0;
  v15 = v4;
  do
  {
    v16 = *(uint *)(*(uint *)v4 + v14);
    v17 = Function_2079d80();
    Function_200d888(*(int **)(v4 + 40), *(uint *)(v4 + 44), 19, v17, 0, 1, v13 + 33002);
    v25 = v13 + 33002;
    *(uint *)(v15 + 312) = Function_200ce6c(*(uint **)(v4 + 40), *(uint *)(v4 + 44), (short *)&v24);
    Function_200d364(*(int **)(v15 + 312), 1u);
    v18 = *(uint *)(*(uint *)v4 + v14);
    v19 = Function_2079fc4();
    Function_2021f24(**(uint **)(v15 + 312), v19);
    Function_200d330(*(int **)(v15 + 312));
    ++v13;
    v14 += 4;
    v15 += 4;
  }
  while ( v13 < 4 );
  v20 = &word_2254BD4;
  v21 = 0;
  do
  {
    Function_200d4c4(*(int **)(v4 + 4 * *(uchar *)(v4 + v21++ + 972) + 312), *v20, v20[1]);
    v20 += 2;
  }
  while ( v21 < 4 );
  *(uint *)(v4 + 308) = AddTaskToTaskList1((int)Function_2250f4c, v4, 0xC738u);
  return Call_FS_CloseFile(v23);
}

//----- (02250EFC) --------------------------------------------------------
int __fastcall Function_2250efc(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  Function_200d090(*(uint *)(a1 + 44), 33002);
  Function_200d0a0(*(uint *)(v1 + 44), 33002);
  Function_200d080(*(uint *)(v1 + 44), 33003);
  v2 = 0;
  v3 = v1;
  do
  {
    Function_200d070(*(uint *)(v1 + 44), v2 + 33002);
    Function_200d0f4(*(uint *)(v3 + 312));
    ++v2;
    v3 += 4;
  }
  while ( v2 < 4 );
  return Call_RemoveTaskFromTaskList(*(int **)(v1 + 308));
}

//----- (02250F4C) --------------------------------------------------------
uint __fastcall Function_2250f4c(int a1, int a2)
{
  int v2;
  int v3;
  uint result;

  v2 = a2;
  v3 = 0;
  do
  {
    result = Function_200d330(*(int **)(v2 + 312));
    ++v3;
    v2 += 4;
  }
  while ( v3 < 4 );
  return result;
}

//----- (02250F68) --------------------------------------------------------
int __fastcall Function_2250f68(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_200cc3c(*(uint **)(a1 + 40), *(uint *)(a1 + 44), a2, 0x66u, 1, 1, 33007);
  Function_200ce24(*(uint **)(v2 + 40), *(uint *)(v2 + 44), v3, 0x65u, 1, 33004);
  return Function_200ce54(*(uint **)(v2 + 40), *(uint *)(v2 + 44), v3, 0x64u, 1, 33004);
}

//----- (02250FBC) --------------------------------------------------------
int __fastcall Function_2250fbc(int a1)
{
  int v1;

  v1 = a1;
  Function_200d070(*(uint *)(a1 + 44), 33007);
  Function_200d090(*(uint *)(v1 + 44), 33004);
  return Function_200d0a0(*(uint *)(v1 + 44), 33004);
}

//----- (02250FE4) --------------------------------------------------------
uint *__fastcall Function_2250fe4(int a1)
{
  int v1;
  ushort *v2;
  int v3;

  v1 = a1;
  v2 = (ushort *)malloc(0x18u, 8);
  MI_CpuFill8(v2, 0, 8u);
  *(uint *)v2 = v1;
  v3 = 0;
  do
  {
    Function_2251070(v1);
    ++v3;
  }
  while ( v3 < 8 );
  return AddTaskToTaskList1((int)Function_225102c, (int)v2, 0xC35Au);
}

//----- (02251020) --------------------------------------------------------
int __fastcall Function_2251020(int result)
{
  *(uchar *)(result + 4733) = 1;
  return result;
}

//----- (0225102C) --------------------------------------------------------
int __fastcall Function_225102c(int *a1, ushort *a2)
{
  int *v2;
  int result;

  v2 = a1;
  if ( *(uchar *)(*(uint *)a2 + 4733) == 1 )
  {
    free((int)a2);
    result = Call_RemoveTaskFromTaskList(v2);
  }
  else
  {
    result = *(uchar *)(*(uint *)a2 + 4734);
    if ( (uint)result < 0x30 )
    {
      result = (short)++a2[2];
      if ( result > 4 )
      {
        a2[2] = 0;
        result = Function_2251070(*(uint *)a2);
      }
    }
  }
  return result;
}

//----- (02251070) --------------------------------------------------------
int __fastcall Function_2251070(int *a1)
{
  int *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  uint v6;
  int v7;
  int v8;
  uint v9;
  int v10;
  uint v11;
  int v12;
  int v13;
  uint v14;
  short v15;
  int v16;
  uint v17;
  uint v18;
  int result;

  v1 = a1;
  v2 = malloc(0x18u, 32);
  MI_CpuFill8((ushort *)v2, 0, 0x20u);
  *(uint *)v2 = v1;
  *(uint *)(v2 + 4) = Function_200ce6c((uint *)v1[10], v1[11], (short *)dword_2254C28);
  v3 = *v1;
  v4 = (uchar)Call_PRNG();
  v5 = *v1;
  v4 += 20;
  v6 = Call_PRNG();
  s32_div_f(v6, 48);
  *(uint *)(v2 + 8) = v4 << 8;
  *(uint *)(v2 + 12) = (v7 - 16) << 8;
  Function_200d4c4(*(int **)(v2 + 4), (short)v4, (short)(v7 - 16));
  v8 = *v1;
  v9 = Call_PRNG();
  *(uint *)(v2 + 20) = (v9 >> 31) + __ROR4__((v9 << 23) - (v9 >> 31), 23) + 96;
  v10 = *v1;
  v11 = Call_PRNG();
  s32_div_f(v11, 768);
  *(uint *)(v2 + 24) = v12 + 256;
  v13 = *v1;
  v14 = Call_PRNG();
  s32_div_f(v14, 24);
  *(ushort *)(v2 + 18) = v15 + 16;
  v16 = *v1;
  v17 = Call_PRNG();
  s32_div_f(v17, 9);
  Function_200d364(*(int **)(v2 + 4), v18);
  Function_200d330(*(int **)(v2 + 4));
  AddTaskToTaskList1((int)Function_2251140, v2, 0xC35Bu);
  result = 4734;
  ++*((uchar *)v1 + 4734);
  return result;
}

//----- (02251140) --------------------------------------------------------
uint __fastcall Function_2251140(int *a1, int a2)
{
  int v2;
  int *v3;
  uint result;
  int v5;
  int v6;
  int v7;
  int v8;

  v2 = a2;
  v3 = a1;
  if ( *(uchar *)(*(uint *)a2 + 4733) != 1
    && *(uint *)(a2 + 12) / 256 <= 208
    && (*(uint *)(a2 + 8) + (int)*(short *)(a2 + 16)) / 256 >= -16 )
  {
    v5 = *(uint *)(a2 + 28) + *(uint *)(a2 + 24);
    *(uint *)(a2 + 28) = v5;
    if ( v5 >= 92160 )
      *(uint *)(a2 + 28) -= 92160;
    v6 = *(short *)(a2 + 18) << 12;
    v7 = Function_201d15c((uint)((*(uint *)(a2 + 28) + (*(uint *)(a2 + 28) >> 7 >> 24)) << 8) >> 16);
    *(ushort *)(v2 + 16) = (int)((ll_mul(v7, v6) + 2048) >> 12) / 4096;
    *(uint *)(v2 + 8) -= *(uint *)(v2 + 20);
    v8 = *(uint *)(v2 + 12) + 640;
    *(uint *)(v2 + 12) = v8;
    Function_200d4c4(
      *(int **)(v2 + 4),
      (short)(*(uint *)(v2 + 8) / 256 + *(ushort *)(v2 + 16)),
      (int)((v8 + ((uint)(v8 >> 7) >> 24)) << 8) >> 16);
    result = Function_200d330(*(int **)(v2 + 4));
  }
  else
  {
    --*(uchar *)(*(uint *)a2 + 4734);
    Function_200d0f4(*(uint *)(a2 + 4));
    free(v2);
    result = Call_RemoveTaskFromTaskList(v3);
  }
  return result;
}

//----- (0225122C) --------------------------------------------------------
int __fastcall Function_225122c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  short *v6;
  int v7;
  int result;

  v2 = a1;
  v3 = a2;
  Function_200cc3c(*(uint **)(a1 + 40), *(uint *)(a1 + 44), a2, 0x54u, 1, 1, 33006);
  Function_200ce24(*(uint **)(v2 + 40), *(uint *)(v2 + 44), v3, 0x53u, 1, 33003);
  Function_200ce54(*(uint **)(v2 + 40), *(uint *)(v2 + 44), v3, 0x52u, 1, 33003);
  v4 = 0;
  v5 = v2;
  do
  {
    *(uint *)(v5 + 328) = Function_200ce6c(
                              *(uint **)(v2 + 40),
                              *(uint *)(v2 + 44),
                              (short *)dword_2254C90);
    Function_200d330(*(int **)(v5 + 328));
    Function_200d3f4(*(uint **)(v5 + 328), 0);
    ++v4;
    v5 += 4;
  }
  while ( v4 < 4 );
  v6 = &word_2254BE4;
  v7 = 0;
  do
  {
    result = Function_200d4c4(*(int **)(v2 + 4 * *(uchar *)(v2 + v7++ + 972) + 328), *v6, v6[1]);
    v6 += 2;
  }
  while ( v7 < 4 );
  return result;
}

//----- (022512E0) --------------------------------------------------------
uint __fastcall Function_22512e0(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = a1;
  Function_200d070(*(uint *)(a1 + 44), 33006);
  Function_200d090(*(uint *)(v1 + 44), 33003);
  Function_200d0a0(*(uint *)(v1 + 44), 33003);
  v2 = 0;
  do
  {
    result = Function_200d0f4(*(uint *)(v1 + 328));
    ++v2;
    v1 += 4;
  }
  while ( v2 < 4 );
  return result;
}

//----- (0225131C) --------------------------------------------------------
int __fastcall Function_225131c(int a1, int a2, uint a3)
{
  int v3;
  int v4;

  v3 = 4 * a2;
  v4 = a1 + 328;
  Function_200d364(*(int **)(a1 + 328 + 4 * a2), a3);
  Function_200d3f4(*(uint **)(v4 + v3), 1);
  return Function_2005748(0x5DDu);
}

//----- (02251344) --------------------------------------------------------
int __fastcall Function_2251344(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  Function_200cdc4(
    *(uint *)(a1 + 208),
    2u,
    *(uint **)(v3 + 40),
    *(uint *)(v3 + 44),
    a2,
    0xBu,
    0,
    1,
    1,
    33004);
  Function_200cc3c(*(uint **)(v3 + 40), *(uint *)(v3 + 44), v2, 0x57u, 1, 1, 33008);
  Function_200ce24(*(uint **)(v3 + 40), *(uint *)(v3 + 44), v2, 0x56u, 1, 33005);
  return Function_200ce54(*(uint **)(v3 + 40), *(uint *)(v3 + 44), v2, 0x55u, 1, 33005);
}

//----- (022513C0) --------------------------------------------------------
int __fastcall Function_22513c0(int a1)
{
  int v1;

  v1 = a1;
  Function_200d080(*(uint *)(a1 + 44), 33004);
  Function_200d070(*(uint *)(v1 + 44), 33008);
  Function_200d090(*(uint *)(v1 + 44), 33005);
  return Function_200d0a0(*(uint *)(v1 + 44), 33005);
}

//----- (022513F4) --------------------------------------------------------
uint __fastcall Function_22513f4(int a1, int a2, int a3, uint a4, short a5)
{
  int v5;
  short v6;
  int **v7;
  uint result;
  short v9;
  int **v10;
  int v11;
  int **v12;
  int i;
  int v14;
  int v15;
  int v16;
  int v17;

  v5 = a1;
  v14 = a4;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v6 = *(ushort *)(a1 + 2 * a2 + 1054);
      v17 = 17;
      v7 = (int **)(a1 + 536 + 48 * a2);
    }
    else
    {
      if ( a3 != 2 )
        return ErrorHandler();
      v6 = *(ushort *)(a1 + 2 * a2 + 1054) + *(ushort *)(a1 + 2 * a2 + 1062);
      v17 = 33;
      v7 = (int **)(a1 + 728 + 48 * a2);
    }
  }
  else
  {
    v17 = 1;
    v6 = 0;
    v7 = (int **)(a1 + 344 + 48 * a2);
  }
  v9 = v6 + 48;
  v16 = (int)a4 / 16;
  if ( (a4 >> 31) + __ROR4__((a4 << 28) - (a4 >> 31), 28) )
    ++v16;
  if ( v16 > 12 )
    ErrorHandler();
  v15 = 0;
  if ( v16 > 0 )
  {
    v10 = v7;
    do
    {
      if ( !*v10 )
        *v10 = Function_200ce6c(*(uint **)(v5 + 40), *(uint *)(v5 + 44), (short *)dword_2254CC4);
      ++v10;
      ++v15;
    }
    while ( v15 < v16 );
  }
  v11 = 0;
  if ( v14 >= 16 )
  {
    v12 = v7;
    do
    {
      Function_200d364(*v12, v17 + 15);
      ++v12;
      ++v11;
      v14 -= 16;
    }
    while ( v14 >= 16 );
  }
  if ( v14 > 0 && v11 < v16 )
    Function_200d364(v7[v11], v17 + v14 - 1);
  result = v16;
  for ( i = 0; i < v16; ++v7 )
  {
    Function_200d4c4(*v7, v9, (short)(32 * a5 + 32));
    Function_200d330(*v7);
    result = v16;
    ++i;
    v9 += 16;
  }
  return result;
}

//----- (02251544) --------------------------------------------------------
int __fastcall Function_2251544(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int result;
  uint *v7;
  int v8;

  v7 = a1;
  v8 = 0;
  do
  {
    v1 = v7;
    v2 = 0;
    do
    {
      v3 = v1[86];
      if ( v3 )
        Function_200d0f4(v3);
      v4 = v1[134];
      if ( v4 )
        Function_200d0f4(v4);
      v5 = v1[182];
      if ( v5 )
        Function_200d0f4(v5);
      ++v2;
      ++v1;
    }
    while ( v2 < 12 );
    v7 += 12;
    result = v8 + 1;
    v8 = result;
  }
  while ( result < 4 );
  return result;
}

//----- (02251598) --------------------------------------------------------
uint *__fastcall Function_2251598(int a1, int a2, uchar *a3)
{
  int v3;
  int v4;
  uchar *v5;
  int v6;
  uint *result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  *a3 = 0;
  v6 = malloc(0x18u, 20);
  MI_CpuFill8((ushort *)v6, 0, 0x14u);
  *(uint *)v6 = v3;
  *(uint *)(v6 + 4) = v5;
  if ( v4 )
  {
    *(uint *)(v6 + 8) = 12288;
    *(uint *)(v6 + 12) = 36864;
    result = AddTaskToTaskList1((int)Function_2251688, v6, 0xA028u);
  }
  else
  {
    *(uint *)(v6 + 8) = 24576;
    *(uint *)(v6 + 12) = 24576;
    result = AddTaskToTaskList1((int)Function_22515f4, v6, 0xA028u);
  }
  return result;
}

//----- (022515F4) --------------------------------------------------------
int __fastcall Function_22515f4(int *a1, int a2)
{
  int *v2;
  int result;

  v2 = a1;
  if ( *(uchar *)(a2 + 16) )
  {
    **(uchar **)(a2 + 4) = 1;
    free(a2);
    result = Call_RemoveTaskFromTaskList(v2);
  }
  else
  {
    *(uint *)(a2 + 8) -= 1024;
    *(uint *)(a2 + 12) += 1024;
    if ( *(uint *)(a2 + 8) <= 12288 )
    {
      *(uint *)(a2 + 8) = 12288;
      *(uint *)(a2 + 12) = 36864;
      ++*(uchar *)(a2 + 16);
    }
    *(uchar *)(*(uint *)a2 + 2129) = 0;
    *(uchar *)(*(uint *)a2 + 2130) = *(ushort *)(a2 + 8) >> 8;
    *(uchar *)(*(uint *)a2 + 2131) = -1;
    *(uchar *)(*(uint *)a2 + 2132) = *(ushort *)(a2 + 12) >> 8;
    *(uchar *)(*(uint *)a2 + 2133) = 1;
    *(uchar *)(*(uint *)a2 + 2134) = *(ushort *)(a2 + 8) >> 8;
    *(uchar *)(*(uint *)a2 + 2135) = 0;
    result = 2136;
    *(uchar *)(*(uint *)a2 + 2136) = *(ushort *)(a2 + 12) >> 8;
  }
  return result;
}

//----- (02251688) --------------------------------------------------------
int __fastcall Function_2251688(int *a1, int a2)
{
  int *v2;
  int result;

  v2 = a1;
  if ( *(uchar *)(a2 + 16) )
  {
    **(uchar **)(a2 + 4) = 1;
    free(a2);
    result = Call_RemoveTaskFromTaskList(v2);
  }
  else
  {
    *(uint *)(a2 + 8) += 1024;
    *(uint *)(a2 + 12) -= 1024;
    if ( *(uint *)(a2 + 8) >= 24576 )
    {
      *(uint *)(a2 + 8) = 24576;
      *(uint *)(a2 + 12) = 24576;
      ++*(uchar *)(a2 + 16);
    }
    *(uchar *)(*(uint *)a2 + 2129) = 0;
    *(uchar *)(*(uint *)a2 + 2130) = *(ushort *)(a2 + 8) >> 8;
    *(uchar *)(*(uint *)a2 + 2131) = -1;
    *(uchar *)(*(uint *)a2 + 2132) = *(ushort *)(a2 + 12) >> 8;
    *(uchar *)(*(uint *)a2 + 2133) = 1;
    *(uchar *)(*(uint *)a2 + 2134) = *(ushort *)(a2 + 8) >> 8;
    *(uchar *)(*(uint *)a2 + 2135) = 0;
    result = 2136;
    *(uchar *)(*(uint *)a2 + 2136) = *(ushort *)(a2 + 12) >> 8;
  }
  return result;
}

//----- (02251718) --------------------------------------------------------
uint *__fastcall Function_2251718(int a1, int a2, int a3, uchar *a4)
{
  int v4;
  int v5;
  int v6;
  uchar *v7;
  int v8;
  uint *result;

  v4 = a1;
  v5 = a2;
  *a4 = 0;
  v6 = a3;
  v7 = a4;
  v8 = malloc(0x18u, 20);
  MI_CpuFill8((ushort *)v8, 0, 0x14u);
  *(uint *)v8 = *(uint *)(v4 + 4 * v5 + 24);
  *(uint *)(v8 + 4) = v7;
  if ( v6 )
  {
    *(uint *)(v8 + 8) = 0x8000;
    *(uint *)(v8 + 12) = 24576;
    result = AddTaskToTaskList1((int)Function_22517f0, v8, 0xC350u);
  }
  else
  {
    *(uint *)(v8 + 8) = 75776;
    *(uint *)(v8 + 12) = 24576;
    result = AddTaskToTaskList1((int)Function_2251784, v8, 0xC350u);
  }
  return result;
}

//----- (02251784) --------------------------------------------------------
int __fastcall Function_2251784(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;

  v2 = a2;
  v3 = a1;
  if ( *(uchar *)(a2 + 16) )
  {
    if ( *(uchar *)(a2 + 16) != 1 )
    {
      **(uchar **)(a2 + 4) = 1;
      free(a2);
      return Call_RemoveTaskFromTaskList(v3);
    }
  }
  else
  {
    Function_2007dec(*(uint *)a2, 6u, 0);
    ++*(uchar *)(v2 + 16);
  }
  v4 = *(uint *)(v2 + 8) - 2048;
  *(uint *)(v2 + 8) = v4;
  if ( v4 <= 0x8000 )
  {
    *(uint *)(v2 + 8) = 0x8000;
    ++*(uchar *)(v2 + 16);
  }
  Function_2007dec(*(uint *)v2, 0, *(uint *)(v2 + 8) >> 8);
  return Function_2007dec(*(uint *)v2, 1u, *(uint *)(v2 + 12) >> 8);
}

//----- (022517F0) --------------------------------------------------------
int __fastcall Function_22517f0(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = a1;
  v4 = *(uchar *)(a2 + 16);
  if ( *(uchar *)(a2 + 16) )
  {
    if ( v4 != 1 )
    {
      Function_2007dec(*(uint *)a2, 6u, 1);
      **(uchar **)(v2 + 4) = 1;
      free(v2);
      return Call_RemoveTaskFromTaskList(v3);
    }
  }
  else
  {
    *(uchar *)(a2 + 16) = v4 + 1;
  }
  v5 = *(uint *)(a2 + 8) - 2048;
  *(uint *)(v2 + 8) = v5;
  if ( v5 <= -10240 )
    ++*(uchar *)(v2 + 16);
  Function_2007dec(*(uint *)v2, 0, *(uint *)(v2 + 8) / 256);
  return Function_2007dec(*(uint *)v2, 1u, *(uint *)(v2 + 12) >> 8);
}

//----- (02251860) --------------------------------------------------------
int __fastcall Function_2251860(int a1, int a2)
{
  int result;

  switch ( *(uchar *)(a1 + 289) )
  {
    case 0:
      if ( a2 )
      {
        if ( a2 == 2 )
          result = 4000;
        else
          result = 0;
      }
      else
      {
        result = 6000;
      }
      break;
    case 1:
      if ( a2 )
      {
        if ( a2 == 1 )
          result = 3000;
        else
          result = 0;
      }
      else
      {
        result = 7000;
      }
      break;
    case 2:
      if ( a2 )
      {
        if ( a2 == 1 )
        {
          result = 3333;
        }
        else if ( a2 == 2 )
        {
          result = 3333;
        }
        else
        {
          result = 0;
        }
      }
      else
      {
        result = 3333;
      }
      break;
    case 3:
    case 4:
      if ( a2 )
        result = 0;
      else
        result = 10000;
      break;
    case 5:
    case 6:
      if ( a2 == 1 )
        result = 10000;
      else
        result = 0;
      break;
    case 7:
    case 8:
      if ( a2 == 2 )
        result = 10000;
      else
        result = 0;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

//----- (02251914) --------------------------------------------------------
uint __fastcall Function_2251914(int a1, int a2)
{
  int v2;

  v2 = Function_2251860(a1, a2);
  return s32_div_f(192 * v2 + 5000, 10000);
}

//----- (02251930) --------------------------------------------------------
int __fastcall Function_2251930(int a1, int a2, ushort *a3)
{
  int v3;
  int v4;
  ushort *v5;
  char *v6;
  int v7;
  int result;
  int v9;
  int v10;
  char *v11;
  int v12;
  char *v13;
  char *v14;
  int v15;
  int v16;
  char *v17;
  int v18;
  int v19;
  int v20;
  uint v21;
  char v22;
  char v23[4];
  char v24;

  v18 = a1;
  v3 = a1;
  v4 = a2;
  v5 = a3;
  v20 = 0;
  v6 = v23;
  do
  {
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        *(uint *)v6 = *(short *)(v3 + 300);
      }
      else
      {
        if ( v4 != 2 )
          return ErrorHandler();
        *(uint *)v6 = *(short *)(v3 + 302);
      }
    }
    else
    {
      v7 = Function_2095928(v18, v20);
      *(uint *)v6 = v7 + Function_209598c(v18, v20);
    }
    v6 += 4;
    v3 += 12;
    ++v20;
  }
  while ( v20 < 4 );
  v9 = 0;
  v10 = 1;
  v11 = &v24;
  do
  {
    if ( *(uint *)&v23[4 * v9] < *(uint *)v11 )
      v9 = v10;
    ++v10;
    v11 += 4;
  }
  while ( v10 < 4 );
  v12 = Function_2251860(v18, v4);
  v21 = s32_div_f(v12, *(uint *)&v23[4 * v9]);
  v19 = 0;
  v13 = v23;
  v14 = &v22;
  do
  {
    v15 = *(uint *)v13 * v21;
    *(uint *)v14 = v15;
    *(uint *)v14 = s32_div_f(v15 + 50, 100);
    v14 += 4;
    v13 += 4;
    result = v19 + 1;
    v19 = result;
  }
  while ( result < 4 );
  v16 = 0;
  v17 = &v22;
  do
  {
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        result = *(uint *)v17;
        *v5 = *(uint *)v17;
      }
      else if ( v4 == 2 )
      {
        result = *(uint *)v17;
        *v5 = *(uint *)v17;
      }
    }
    else
    {
      result = *(uint *)v17;
      *v5 = *(uint *)v17;
    }
    ++v16;
    v17 += 4;
    ++v5;
  }
  while ( v16 < 4 );
  return result;
}

//----- (02251A1C) --------------------------------------------------------
ll __fastcall Function_2251a1c(int *a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int *v22;
  int v23;
  int v24;
  int *v25;
  uint v26;
  int v27;
  int *v28;
  uint v29;
  int v30;
  int *v31;
  uint v32;
  int v33;
  int *v34;
  int v35;
  int v36;
  char *v37;
  char *v38;
  char *v39;
  int v40;
  int v41;
  int v42;
  char *v43;
  char *v44;
  char *v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  char *v51;
  ll result;
  int v53;
  int *v54;
  int *v55;
  char v56;
  char v57;
  char v58;
  char v59;
  char v60;
  char v61;
  int v62;

  v62 = a4;
  v54 = a1;
  v4 = *a1;
  switch ( *(uchar *)(v4 + 289) )
  {
    case 0:
      Function_2251930(v4, 0, (ushort *)v54 + 491);
      Function_2251930(*v54, 2, (ushort *)v54 + 499);
      break;
    case 1:
      Function_2251930(v4, 0, (ushort *)v54 + 491);
      Function_2251930(*v54, 1, (ushort *)v54 + 495);
      break;
    case 2:
      Function_2251930(v4, 0, (ushort *)v54 + 491);
      Function_2251930(*v54, 1, (ushort *)v54 + 495);
      Function_2251930(*v54, 2, (ushort *)v54 + 499);
      break;
    case 3:
    case 4:
      Function_2251930(v4, 0, (ushort *)v54 + 491);
      break;
    case 5:
    case 6:
      Function_2251930(v4, 1, (ushort *)v54 + 495);
      break;
    case 7:
    case 8:
      Function_2251930(v4, 2, (ushort *)v54 + 499);
      break;
    default:
      break;
  }
  v5 = v54;
  v6 = 0;
  do
  {
    ++v6;
    *((ushort *)v5 + 503) = *((ushort *)v5 + 499) + *((ushort *)v5 + 491) + *((ushort *)v5 + 495);
    v5 = (int *)((char *)v5 + 2);
  }
  while ( v6 < 4 );
  v7 = 0;
  v8 = 1;
  v9 = (int)v54 + 2;
  do
  {
    if ( *((short *)v54 + v7 + 491) < *(short *)(v9 + 982) )
      v7 = v8;
    ++v8;
    v9 += 2;
  }
  while ( v8 < 4 );
  v10 = v54;
  v11 = 0;
  v12 = *((short *)v54 + v7 + 491);
  do
  {
    *((ushort *)v10 + 507) = s32_div_f(100 * *((short *)v10 + 491), v12);
    ++v11;
    v10 = (int *)((char *)v10 + 2);
  }
  while ( v11 < 4 );
  v13 = 0;
  v14 = 1;
  v15 = (int)v54 + 2;
  do
  {
    if ( *((short *)v54 + v13 + 495) < *(short *)(v15 + 990) )
      v13 = v14;
    ++v14;
    v15 += 2;
  }
  while ( v14 < 4 );
  v16 = v54;
  v17 = *((short *)v54 + v13 + 495);
  v18 = 0;
  do
  {
    *((ushort *)v16 + 511) = s32_div_f(100 * *((short *)v16 + 495), v17);
    ++v18;
    v16 = (int *)((char *)v16 + 2);
  }
  while ( v18 < 4 );
  v19 = 0;
  v20 = 1;
  v21 = (int)v54 + 2;
  do
  {
    if ( *((short *)v54 + v19 + 499) < *(short *)(v21 + 998) )
      v19 = v20;
    ++v20;
    v21 += 2;
  }
  while ( v20 < 4 );
  v22 = v54;
  v23 = *((short *)v54 + v19 + 499);
  v24 = 0;
  do
  {
    *((ushort *)v22 + 515) = s32_div_f(100 * *((short *)v22 + 499), v23);
    ++v24;
    v22 = (int *)((char *)v22 + 2);
  }
  while ( v24 < 4 );
  v25 = v54;
  v26 = Function_2251914(*v54, 0);
  v27 = 0;
  do
  {
    *((ushort *)v25 + 527) = s32_div_f(*((short *)v25 + 507) * v26, 100);
    ++v27;
    v25 = (int *)((char *)v25 + 2);
  }
  while ( v27 < 4 );
  v28 = v54;
  v29 = Function_2251914(*v54, 1);
  v30 = 0;
  do
  {
    *((ushort *)v28 + 531) = s32_div_f(*((short *)v28 + 511) * v29, 100);
    ++v30;
    v28 = (int *)((char *)v28 + 2);
  }
  while ( v30 < 4 );
  v31 = v54;
  v32 = Function_2251914(*v54, 2);
  v33 = 0;
  do
  {
    *((ushort *)v31 + 535) = s32_div_f(*((short *)v31 + 515) * v32, 100);
    ++v33;
    v31 = (int *)((char *)v31 + 2);
  }
  while ( v33 < 4 );
  v34 = v54;
  v35 = 0;
  do
  {
    ++v35;
    *((ushort *)v34 + 523) = *((ushort *)v34 + 535) + *((ushort *)v34 + 527) + *((ushort *)v34 + 531);
    v34 = (int *)((char *)v34 + 2);
  }
  while ( v35 < 4 );
  v36 = 0;
  v37 = &v58;
  v55 = v54;
  v38 = &v56;
  v39 = &v60;
  do
  {
    *(uint *)v37 = v36;
    v37 += 4;
    *(uint *)v38 = *((short *)v55 + 523);
    v38 += 4;
    v40 = *v54;
    *(uint *)v39 = Call_PRNG();
    v39 += 4;
    ++v36;
    v55 = (int *)((char *)v55 + 2);
  }
  while ( v36 < 4 );
  v41 = 0;
  do
  {
    v42 = 3;
    if ( v41 < 3 )
    {
      v43 = &v57;
      v44 = &v61;
      v45 = &v59;
      do
      {
        v46 = *(uint *)v43;
        v47 = *((uint *)v43 - 1);
        if ( v47 < *(uint *)v43 || v47 == v46 && *((uint *)v44 - 1) < *(uint *)v44 )
        {
          *(uint *)v43 = v47;
          *((uint *)v43 - 1) = v46;
          v48 = *(uint *)v45;
          *(uint *)v45 = *((uint *)v45 - 1);
          *((uint *)v45 - 1) = v48;
          v49 = *(uint *)v44;
          *(uint *)v44 = *((uint *)v44 - 1);
          *((uint *)v44 - 1) = v49;
        }
        --v42;
        v43 -= 4;
        v44 -= 4;
        v45 -= 4;
      }
      while ( v42 > v41 );
    }
    ++v41;
  }
  while ( v41 < 3 );
  v50 = 0;
  v51 = &v58;
  result = 1305670057996LL;
  do
  {
    *((uchar *)v54 + v50 + 977) = *(uint *)v51;
    v53 = *(uint *)v51;
    v51 += 4;
    *(uchar *)(*v54 + 12 * v53 + 304) = v50++;
  }
  while ( v50 < 4 );
  return result;
}

//----- (02251D6C) --------------------------------------------------------
int __fastcall Function_2251d6c(ushort *a1, int a2, int a3, int a4)
{
  void **v5;
  short v6;
  char v7;
  char v8;
  char v9;
  int v10;

  v10 = a4;
  v5 = &off_2254D18;
  v6 = 11;
  v7 = *(uchar *)(*(uint *)a1 + 291);
  v9 = *(uchar *)(*(uint *)a1 + 284);
  v8 = *(uchar *)(*(uint *)a1 + 369);
  return Function_224f18c(a1 + 1070, (int)&v5);
}

//----- (02251DAC) --------------------------------------------------------
int __fastcall Function_2251dac(int a1, int a2, short a3)
{
  return Function_224f1f8(a1, 255, a3, 0, 0);
}

//----- (02251DC0) --------------------------------------------------------
int __fastcall Function_2251dc0(int a1, int a2, short *a3)
{
  return Function_224f26c(a1, a3, 0, 0);
}

//----- (02251DD0) --------------------------------------------------------
void Function_2251dd0()
{
  ;
}

//----- (02251DD4) --------------------------------------------------------
int __fastcall Function_2251dd4(int a1, int a2, short a3, int a4)
{
  return Function_224f1f8(a1, 255, a3, a4, 0x9Au);
}

//----- (02251DE8) --------------------------------------------------------
int __fastcall Function_2251de8(int a1, int a2, short *a3, short *a4)
{
  uint *v4;
  short *v5;
  short *v6;
  ushort *v7;
  int v8;
  short v9;
  int v10;
  int v11;
  ushort *v12;
  short v13;
  int v15;

  v4 = (uint *)a2;
  v15 = a1;
  v5 = a3;
  v6 = a4;
  v7 = (ushort *)(a2 + 924);
  v8 = 77;
  do
  {
    v9 = *v6;
    ++v6;
    *v7 = v9;
    ++v7;
    --v8;
  }
  while ( v8 );
  v10 = 0;
  v11 = 0;
  do
  {
    v12 = (ushort *)(*v4 + v11);
    ++v10;
    v12[148] = *a4;
    v11 += 12;
    v12[149] = a4[1];
    v12[150] = a4[2];
    v12[151] = a4[3];
    v12[152] = a4[4];
    v13 = a4[5];
    a4 += 6;
    v12[153] = v13;
  }
  while ( v10 < 4 );
  return Function_224f26c(v15, v5, 0, 0);
}

//----- (02251E54) --------------------------------------------------------
int __fastcall Function_2251e54(int a1, int a2, short a3)
{
  return Function_224f1f8(a1, 255, a3, 0, 0);
}

//----- (02251E68) --------------------------------------------------------
uint *__fastcall Function_2251e68(int a1, int a2, ushort *a3)
{
  int v3;
  int v4;
  ushort *v5;
  int v6;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = malloc(0x18u, 24);
  MI_CpuFill8((ushort *)v6, 0, 0x18u);
  *(uint *)v6 = v4;
  *(ushort *)(v6 + 4) = *v5;
  *(ushort *)(v6 + 6) = v5[1];
  *(ushort *)(v6 + 8) = v5[2];
  *(ushort *)(v6 + 10) = v5[3];
  *(uint *)(v6 + 12) = v3;
  return AddTaskToTaskList1((int)Function_2251eac, v6, 0x7530u);
}

//----- (02251EAC) --------------------------------------------------------
uint __fastcall Function_2251eac(int *a1, int a2)
{
  int *v2;
  int v3;
  char v4;
  int v5;
  char v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  short v14;
  int v15;
  int v16;
  uint result;
  uchar *v18;
  int v19;
  int j;
  int i;

  v2 = a1;
  v18 = (uchar *)a2;
  if ( *(uchar *)(a2 + 16) )
  {
    Function_224f26c(*(uint *)(a2 + 12), (short *)(a2 + 4), 0, 0);
    free((int)v18);
    result = Call_RemoveTaskFromTaskList(v2);
  }
  else
  {
    v3 = *(char *)(a2 + 20);
    if ( v3 <= 0 )
    {
      v5 = *(char *)(a2 + 19);
      if ( v5 <= 0 )
      {
        *(uchar *)(a2 + 19) = 1;
        v7 = Function_2019fe4(*(uint *)(*(uint *)a2 + 48), 2);
        for ( i = 0; i < 4; ++i )
        {
          v8 = *((char *)dword_2254CF8 + (char)v18[17]);
          if ( v8 + i >= 0 )
          {
            v9 = v7 + ((v8 + i) << 6);
            v10 = 0;
            v19 = 0;
            v11 = (ushort)a08_1[(uchar)v18[18]] + 32 * i;
            while ( v19 < 4 )
            {
              v12 = 0;
              while ( v12 < 8 )
              {
                v13 = 2 * (v10 + v12);
                *(ushort *)(v9 + v13) &= 0xFC00u;
                v14 = v11 + v12++;
                *(ushort *)(v9 + v13) |= v14;
              }
              v10 += 8;
              ++v19;
            }
          }
        }
        v15 = (char)v18[17];
        if ( v15 > 0 && !v18[18] )
        {
          v16 = v7 + (*((char *)dword_2254CF8 + v15 - 1) << 6);
          for ( j = 0; j < 32; ++j )
            *(ushort *)(v16 + 2 * j) &= 0xFC00u;
        }
        Function_201c3c0(*(uint *)(*(uint *)v18 + 48), 2);
        result = (uchar)++v18[18];
        if ( result >= 0xC )
        {
          v18[18] = 0;
          ++v18[17];
          v18[20] = 0;
          result = (char)v18[17];
          if ( result >= 5 )
          {
            result = (uint)v18;
            ++v18[16];
          }
        }
      }
      else
      {
        v6 = v5 - 1;
        result = (uint)v18;
        v18[19] = v6;
      }
    }
    else
    {
      v4 = v3 - 1;
      result = (uint)v18;
      v18[20] = v4;
    }
  }
  return result;
}

//----- (02252008) --------------------------------------------------------
int __fastcall Function_2252008(int a1, int a2, short a3)
{
  return Function_224f1f8(a1, 255, a3, 0, 0);
}

//----- (0225201C) --------------------------------------------------------
uint *__fastcall Function_225201c(int a1, int a2, ushort *a3)
{
  int v3;
  int v4;
  ushort *v5;
  int v6;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = malloc(0x18u, 24);
  MI_CpuFill8((ushort *)v6, 0, 0x18u);
  *(uint *)v6 = v4;
  *(ushort *)(v6 + 4) = *v5;
  *(ushort *)(v6 + 6) = v5[1];
  *(ushort *)(v6 + 8) = v5[2];
  *(ushort *)(v6 + 10) = v5[3];
  *(uint *)(v6 + 12) = v3;
  return AddTaskToTaskList1((int)ReadPkmnBattleData1, v6, 0x7530u);
}

//----- (02252060) --------------------------------------------------------
uint __fastcall ReadPkmnBattleData1(int *a1, int a2)
{
  int *v2;
  int v3;
  char v4;
  int v5;
  char v6;
  int v7;
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
  uint result;
  uchar *v19;
  int v20;
  uint j;
  int i;

  v2 = a1;
  v19 = (uchar *)a2;
  if ( *(uchar *)(a2 + 16) )
  {
    Function_224f26c(*(uint *)(a2 + 12), (short *)(a2 + 4), 0, 0);
    free((int)v19);
    result = Call_RemoveTaskFromTaskList(v2);
  }
  else
  {
    v3 = *(char *)(a2 + 20);
    if ( v3 <= 0 )
    {
      v5 = *(char *)(a2 + 19);
      if ( v5 <= 0 )
      {
        *(uchar *)(a2 + 19) = 1;
        v7 = Function_2019fe4(*(uint *)(*(uint *)a2 + 48), 2);
        for ( i = 0; i < 4; ++i )
        {
          v8 = *((char *)dword_2254CF8 + 4 - (char)v19[17]);
          if ( v8 + i >= 0 )
          {
            v9 = v7 + ((v8 + i) << 6);
            v10 = 0;
            v20 = 0;
            v11 = (ushort)a08_1[11 - (uchar)v19[18]] + 32 * i;
            while ( v20 < 4 )
            {
              v12 = 0;
              while ( v12 < 8 )
              {
                v13 = 2 * (v10 + v12);
                *(ushort *)(v9 + v13) &= 0xFC00u;
                v14 = v11 + v12++;
                *(ushort *)(v9 + v13) |= v14;
              }
              v10 += 8;
              ++v20;
            }
          }
        }
        v15 = (char)v19[17];
        if ( v15 > 0 && !v19[18] )
        {
          v16 = v7 + ((*((char *)dword_2254CF8 + 5 - v15) + 3) << 6);
          for ( j = 0; (int)j < 32; ++j )
          {
            v17 = 2 * j;
            *(ushort *)(v16 + v17) = *(ushort *)(v16 + 2 * j) & 0xFC00;
            *(ushort *)(v16 + v17) = ((j >> 31) + __ROR4__((j << 29) - (j >> 31), 29) + 512) | *(ushort *)(v16 + 2 * j);
          }
        }
        Function_201c3c0(*(uint *)(*(uint *)v19 + 48), 2);
        result = (uchar)++v19[18];
        if ( result >= 0xC )
        {
          v19[18] = 0;
          ++v19[17];
          v19[20] = 0;
          result = (char)v19[17];
          if ( result >= 5 )
          {
            result = (uint)v19;
            ++v19[16];
          }
        }
      }
      else
      {
        v6 = v5 - 1;
        result = (uint)v19;
        v19[19] = v6;
      }
    }
    else
    {
      v4 = v3 - 1;
      result = (uint)v19;
      v19[20] = v4;
    }
  }
  return result;
}

//----- (022521E4) --------------------------------------------------------
int __fastcall Function_22521e4(int a1, int a2, short a3)
{
  return Function_224f1f8(a1, 255, a3, 0, 0);
}

//----- (022521F8) --------------------------------------------------------
int __fastcall Function_22521f8(int a1, int a2, short *a3)
{
  *(uchar *)(a2 + 4732) = 1;
  return Function_224f26c(a1, a3, 0, 0);
}

//----- (02252210) --------------------------------------------------------
int __fastcall Function_2252210(int a1, int a2, short a3, int a4)
{
  return Function_224f1f8(a1, 255, a3, a4, 0x12u);
}

//----- (02252224) --------------------------------------------------------
uint *__fastcall Function_2252224(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = malloc(0x18u, 32);
  MI_CpuFill8((ushort *)v8, 0, 0x20u);
  *(uint *)v8 = v5;
  *(ushort *)(v8 + 4) = *v6;
  *(ushort *)(v8 + 6) = v6[1];
  *(ushort *)(v8 + 8) = v6[2];
  *(ushort *)(v8 + 10) = v6[3];
  *(uint *)(v8 + 12) = v4;
  *(uchar *)(v8 + 17) = *(uchar *)v7;
  *(ushort *)(v8 + 20) = *(ushort *)(v7 + 8);
  *(ushort *)(v8 + 22) = *(ushort *)(v7 + 10);
  *(ushort *)(v8 + 24) = *(ushort *)(v7 + 12);
  *(uchar *)(v8 + 26) = *(uchar *)(v7 + 14);
  *(uchar *)(v8 + 29) = *(uchar *)(v7 + 17);
  *(uchar *)(v8 + 28) = *(uchar *)(v7 + 16);
  *(uchar *)(v8 + 27) = *(uchar *)(v7 + 15);
  return AddTaskToTaskList1((int)Function_225228c, v8, 0x7530u);
}

//----- (0225228C) --------------------------------------------------------
uint __fastcall Function_225228c(int *a1, int a2)
{
  uchar *v2;
  int *v3;
  int v4;
  uint result;

  v2 = (uchar *)a2;
  v3 = a1;
  v4 = *(uchar *)(a2 + 16);
  if ( *(uchar *)(a2 + 16) )
  {
    if ( v4 == 1 )
    {
      result = Function_225099c(*(uint *)a2);
      if ( !result )
      {
        result = v2[16] + 1;
        v2[16] = result;
      }
    }
    else if ( v4 == 2 )
    {
      ++*(uchar *)(a2 + 18);
      if ( *(uchar *)(a2 + 28) == 1 )
      {
        result = *(uchar *)(a2 + 16) + 1;
        *(uchar *)(a2 + 16) = result;
      }
      else
      {
        result = *(uchar *)(a2 + 27);
        if ( *(uchar *)(a2 + 18) >= result )
        {
          Function_200e084(*(uint *)a2 + 52, 1);
          Function_201c3c0(*(uint *)(*(uint *)v2 + 48), 1);
          result = v2[16] + 1;
          v2[16] = result;
        }
      }
    }
    else
    {
      Function_224f26c(*(uint *)(a2 + 12), (short *)(a2 + 4), 0, 0);
      free((int)v2);
      result = Call_RemoveTaskFromTaskList(v3);
    }
  }
  else if ( *(uchar *)(a2 + 26) )
  {
    if ( !*(uchar *)(a2 + 29) )
    {
      Function_200e060(*(uint *)a2 + 52, 1, 1, 0xEu);
      Function_201c3c0(*(uint *)(*(uint *)v2 + 48), 1);
    }
    Function_2250968(*(uint *)v2, v2[26], v2 + 20);
    result = v2[16] + 1;
    v2[16] = result;
  }
  else
  {
    result = 100;
    *(uchar *)(a2 + 16) = 100;
  }
  return result;
}

//----- (02252344) --------------------------------------------------------
int __fastcall Function_2252344(int a1, int a2, short a3, int a4)
{
  return Function_224f1f8(a1, 255, a3, a4, 0x9Au);
}

//----- (02252358) --------------------------------------------------------
uint *__fastcall Function_2252358(int a1, int a2, ushort *a3, short *a4)
{
  int v4;
  int v5;
  ushort *v6;
  ushort *v7;
  int v8;
  short v9;
  int v10;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = (ushort *)(a2 + 924);
  v8 = 77;
  do
  {
    v9 = *a4;
    ++a4;
    *v7 = v9;
    ++v7;
    --v8;
  }
  while ( v8 );
  v10 = malloc(0x18u, 20);
  MI_CpuFill8((ushort *)v10, 0, 0x14u);
  *(uint *)v10 = v5;
  *(ushort *)(v10 + 4) = *v6;
  *(ushort *)(v10 + 6) = v6[1];
  *(ushort *)(v10 + 8) = v6[2];
  *(ushort *)(v10 + 10) = v6[3];
  *(uint *)(v10 + 12) = v4;
  return AddTaskToTaskList1((int)Function_22523ac, v10, 0x3E8u);
}

//----- (022523AC) --------------------------------------------------------
int __fastcall Function_22523ac(int *a1, int a2)
{
  int v2;
  int *v3;
  uint v4;
  int result;
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

  v2 = a2;
  v3 = a1;
  v4 = *(uchar *)(a2 + 16);
  if ( v4 <= 6 )
    JUMPOUT(__CS__, *((short *)&off_22523C8 + v4) + 35988426);
  switch ( (uchar)v4 )
  {
    case 0:
      Function_223f744(*(int ***)(*(uint *)a2 + 2120));
      result = *(uchar *)(v2 + 16) + 1;
      *(uchar *)(v2 + 16) = result;
      break;
    case 1:
      result = Function_223f760();
      if ( result == 1 )
      {
        result = *(uchar *)(v2 + 16) + 1;
        *(uchar *)(v2 + 16) = result;
      }
      break;
    case 2:
      Function_200f174(0, 0, 0, 0, 6, 1, 24);
      Function_20055d0(1135, 30);
      result = *(uchar *)(v2 + 16) + 1;
      *(uchar *)(v2 + 16) = result;
      break;
    case 3:
      result = Function_200f2ac();
      if ( result == 1 )
      {
        result = *(uchar *)(v2 + 16) + 1;
        *(uchar *)(v2 + 16) = result;
      }
      break;
    case 4:
      v6 = *(uint *)a2;
      Function_2250a84();
      Function_2250ad8(*(uint *)v2);
      Function_2250b00(*(uint *)v2, v7, v8, v9);
      Function_2250d28(*(uint *)v2, v10, v11, v12);
      Function_2250cec(*(uint *)v2);
      Function_200e060(*(uint *)v2 + 52, 0, 1, 0xEu);
      Function_201ada4_ClearTextBox(*(uint *)v2 + 52, 255);
      Function_201a954(*(uint *)v2 + 52, v13);
      v14 = 0;
      v15 = 0;
      do
      {
        Function_2007dec(*(uint *)(*(uint *)v2 + v15 + 24), 6u, 1);
        ++v14;
        v15 += 4;
      }
      while ( v14 < 4 );
      *(uchar *)(*(uint *)v2 + 4735) = 1;
      result = *(uchar *)(v2 + 16) + 1;
      *(uchar *)(v2 + 16) = result;
      break;
    case 5:
      result = Function_2005684();
      if ( !result )
      {
        Function_200f174(0, 1, 1, 0, 6, 1, 24);
        result = *(uchar *)(v2 + 16) + 1;
        *(uchar *)(v2 + 16) = result;
      }
      break;
    case 6:
      result = Function_200f2ac();
      if ( result == 1 )
      {
        Function_200549c(0x49Du);
        result = *(uchar *)(v2 + 16) + 1;
        *(uchar *)(v2 + 16) = result;
      }
      break;
    default:
      Function_224f26c(*(uint *)(a2 + 12), (short *)(a2 + 4), 0, 0);
      free(v2);
      result = Call_RemoveTaskFromTaskList(v3);
      break;
  }
  return result;
}

//----- (02252514) --------------------------------------------------------
int __fastcall Function_2252514(int a1, int a2, short a3, int a4)
{
  return Function_224f1f8(a1, 255, a3, a4, 0x12u);
}

//----- (02252528) --------------------------------------------------------
uint *__fastcall Function_2252528(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;
  int v9;
  char v10;
  int v11;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = malloc(0x18u, 24);
  MI_CpuFill8((ushort *)v8, 0, 0x18u);
  v9 = 0;
  *(uint *)v8 = v5;
  *(ushort *)(v8 + 4) = *v6;
  *(ushort *)(v8 + 6) = v6[1];
  *(ushort *)(v8 + 8) = v6[2];
  *(ushort *)(v8 + 10) = v6[3];
  *(uint *)(v8 + 12) = v4;
  do
  {
    v10 = *(uchar *)(v7 + v9 + 3);
    v11 = v8 + v9++;
    *(uchar *)(v11 + 17) = v10;
  }
  while ( v9 < 4 );
  return AddTaskToTaskList1((int)Function_2252580, v8, 0x7530u);
}

//----- (02252580) --------------------------------------------------------
int __fastcall Function_2252580(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = *(uchar *)(a2 + 16);
  switch ( (uchar)a2 )
  {
    case 0:
      result = v4 + 1;
      *(uchar *)(a2 + 16) = result;
      break;
    case 1:
      Function_225131c(
        *(uint *)a2,
        *(uchar *)(a2 + 3 - *(uchar *)(a2 + 21) + 17),
        3 - *(uchar *)(a2 + 21));
      ++*(uchar *)(v2 + 21);
      result = *(uchar *)(v2 + 16) + 1;
      *(uchar *)(v2 + 16) = result;
      break;
    case 2:
      result = (short)++*(ushort *)(a2 + 22);
      if ( result > 30 )
      {
        *(ushort *)(a2 + 22) = 0;
        result = *(uchar *)(a2 + 16) + 1;
        *(uchar *)(a2 + 16) = result;
      }
      break;
    case 3:
      if ( *(uchar *)(a2 + 21) >= 4u )
      {
        result = v4 + 1;
        *(uchar *)(a2 + 16) = result;
      }
      else
      {
        result = 1;
        *(uchar *)(a2 + 16) = 1;
      }
      break;
    default:
      Function_224f26c(*(uint *)(a2 + 12), (short *)(a2 + 4), 0, 0);
      free(v2);
      result = Call_RemoveTaskFromTaskList(v3);
      break;
  }
  return result;
}

//----- (0225260C) --------------------------------------------------------
int __fastcall Function_225260c(int a1, int a2, short a3, int a4)
{
  return Function_224f1f8(a1, 255, a3, a4, 0x12u);
}

//----- (02252620) --------------------------------------------------------
uint *__fastcall Function_2252620(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = malloc(0x18u, 24);
  MI_CpuFill8((ushort *)v8, 0, 0x18u);
  *(uint *)v8 = v5;
  *(ushort *)(v8 + 4) = *v6;
  *(ushort *)(v8 + 6) = v6[1];
  *(ushort *)(v8 + 8) = v6[2];
  *(ushort *)(v8 + 10) = v6[3];
  *(uint *)(v8 + 12) = v4;
  *(uchar *)(v8 + 17) = *(uchar *)(v7 + 2);
  return AddTaskToTaskList1((int)Function_225266c, v8, 0x7530u);
}

//----- (0225266C) --------------------------------------------------------
int __fastcall Function_225266c(int *a1, int a2)
{
  int v2;
  int *v3;
  int result;
  ushort v5;
  uchar v6;

  v2 = a2;
  v3 = a1;
  result = *(uchar *)(a2 + 16);
  switch ( (uchar)a2 )
  {
    case 0:
      Function_2250fe4(*(uint *)a2);
      Function_2251598(*(uint *)v2, 0, (uchar *)(v2 + 18));
      Function_200549c(0x49Eu);
      Function_2005748(0x6E5u);
      result = *(uchar *)(v2 + 16) + 1;
      *(uchar *)(v2 + 16) = result;
      break;
    case 1:
      if ( *(uchar *)(a2 + 18) == 1 )
        *(uchar *)(a2 + 16) = ++result;
      break;
    case 2:
      Function_2251718(*(uint *)a2, *(uchar *)(a2 + 17), 0, (uchar *)(a2 + 19));
      result = *(uchar *)(v2 + 16) + 1;
      *(uchar *)(v2 + 16) = result;
      break;
    case 3:
      if ( *(uchar *)(a2 + 19) == 1 )
        *(uchar *)(a2 + 16) = ++result;
      break;
    case 4:
      v5 = GetPkmnData(*(int **)(*(uint *)(*(uint *)a2 + 16) + 4 * *(uchar *)(a2 + 17)), 5u, 0);
      v6 = GetPkmnData(*(int **)(*(uint *)(*(uint *)v2 + 16) + 4 * *(uchar *)(v2 + 17)), 0x70u, 0);
      Function_2077d3c(
        *(uint *)(**(uint **)v2 + 4 * *(uchar *)(v2 + 17) + 348),
        0,
        v5,
        v6,
        0,
        0x7Fu,
        0,
        24);
      result = *(uchar *)(v2 + 16) + 1;
      *(uchar *)(v2 + 16) = result;
      break;
    case 5:
      result = Function_200598c();
      if ( !result )
      {
        result = *(uchar *)(v2 + 16) + 1;
        *(uchar *)(v2 + 16) = result;
      }
      break;
    case 6:
      result = (short)++*(ushort *)(a2 + 20);
      if ( result > 60 )
      {
        *(ushort *)(a2 + 20) = 0;
        result = *(uchar *)(a2 + 16) + 1;
        *(uchar *)(a2 + 16) = result;
      }
      break;
    default:
      Function_224f26c(*(uint *)(a2 + 12), (short *)(a2 + 4), 0, 0);
      free(v2);
      result = Call_RemoveTaskFromTaskList(v3);
      break;
  }
  return result;
}

//----- (02252798) --------------------------------------------------------
int __fastcall Function_2252798(int a1, int a2, short a3, int a4)
{
  return Function_224f1f8(a1, 255, a3, a4, 0x12u);
}

//----- (022527AC) --------------------------------------------------------
uint *__fastcall Function_22527ac(int a1, ushort *a2, ushort *a3, int a4)
{
  int v4;
  ushort *v5;
  ushort *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  short v12;
  int v13;
  int v14;
  short v15;
  int v16;
  int v17;
  short v18;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = malloc(0x18u, 36);
  MI_CpuFill8((ushort *)v8, 0, 0x24u);
  *(uint *)v8 = v5;
  *(ushort *)(v8 + 4) = *v6;
  *(ushort *)(v8 + 6) = v6[1];
  *(ushort *)(v8 + 8) = v6[2];
  *(ushort *)(v8 + 10) = v6[3];
  *(uint *)(v8 + 12) = v4;
  *(uchar *)(v8 + 17) = *(uchar *)(v7 + 7);
  v9 = *(uchar *)(v7 + 7);
  if ( *(uchar *)(v7 + 7) )
  {
    if ( v9 == 1 )
    {
      v13 = 0;
      v14 = v8;
      do
      {
        v15 = v5[531];
        ++v13;
        ++v5;
        *(ushort *)(v14 + 20) = v15;
        v14 += 2;
      }
      while ( v13 < 4 );
    }
    else if ( v9 == 2 )
    {
      v16 = 0;
      v17 = v8;
      do
      {
        v18 = v5[535];
        ++v16;
        ++v5;
        *(ushort *)(v17 + 20) = v18;
        v17 += 2;
      }
      while ( v16 < 4 );
    }
    else
    {
      ErrorHandler();
    }
  }
  else
  {
    v10 = 0;
    v11 = v8;
    do
    {
      v12 = v5[527];
      ++v10;
      ++v5;
      *(ushort *)(v11 + 20) = v12;
      v11 += 2;
    }
    while ( v10 < 4 );
  }
  return AddTaskToTaskList1((int)Function_2252858, v8, 0x7530u);
}

//----- (02252858) --------------------------------------------------------
int __fastcall Function_2252858(int *a1, int a2)
{
  int v2;
  int *v3;
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v2 = a2;
  v3 = a1;
  switch ( *(uchar *)(a2 + 16) )
  {
    case 0:
      Function_2005748(0x6FAu);
      result = *(uchar *)(v2 + 16) + 1;
      *(uchar *)(v2 + 16) = result;
      return result;
    case 1:
      result = (short)++*(ushort *)(a2 + 18);
      if ( result > 45 )
      {
        *(ushort *)(a2 + 18) = 0;
        result = *(uchar *)(a2 + 16) + 1;
        *(uchar *)(a2 + 16) = result;
      }
      return result;
    case 2:
      v5 = 0;
      v6 = a2;
      while ( *(short *)(v6 + 20) <= 0 )
      {
        ++v5;
        v6 += 2;
        if ( v5 >= 4 )
          goto LABEL_9;
      }
      Function_2005748(0x6FBu);
LABEL_9:
      ++*(uchar *)(v2 + 16);
      goto LABEL_10;
    case 3:
LABEL_10:
      result = (short)++*(ushort *)(v2 + 18);
      if ( result >= 1 )
      {
        v7 = 0;
        *(ushort *)(v2 + 18) = 0;
        v8 = 0;
        do
        {
          v9 = *(uchar *)(*(uint *)v2 + v8 + 972);
          v10 = v2 + 2 * v9;
          v11 = (short)++*(ushort *)(v10 + 28);
          result = *(short *)(v10 + 20);
          if ( v11 > result )
            ++v7;
          else
            result = Function_22513f4(*(uint *)v2, v9, *(uchar *)(v2 + 17), v11, v8);
          ++v8;
        }
        while ( v8 < 4 );
        if ( v7 >= 4 )
        {
          result = *(uchar *)(v2 + 16) + 1;
          *(uchar *)(v2 + 16) = result;
        }
      }
      return result;
    case 4:
      v12 = 0;
      v13 = a2;
      break;
    default:
      Function_224f26c(*(uint *)(a2 + 12), (short *)(a2 + 4), 0, 0);
      free(v2);
      return Call_RemoveTaskFromTaskList(v3);
  }
  while ( *(short *)(v13 + 20) <= 0 )
  {
    ++v12;
    v13 += 2;
    if ( v12 >= 4 )
      goto LABEL_22;
  }
  Function_2005748(0x6F9u);
LABEL_22:
  Function_20057a4(1786, 0);
  result = *(uchar *)(v2 + 16) + 1;
  *(uchar *)(v2 + 16) = result;
  return result;
}

//----- (02252970) --------------------------------------------------------
int __fastcall Function_2252970(int a1, int a2, short a3)
{
  return Function_224f1f8(a1, 255, a3, 0, 0);
}

//----- (02252984) --------------------------------------------------------
uint *__fastcall Function_2252984(int a1, int a2, ushort *a3)
{
  int v3;
  int v4;
  ushort *v5;
  int v6;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = malloc(0x18u, 20);
  MI_CpuFill8((ushort *)v6, 0, 0x14u);
  *(uint *)v6 = v4;
  *(ushort *)(v6 + 4) = *v5;
  *(ushort *)(v6 + 6) = v5[1];
  *(ushort *)(v6 + 8) = v5[2];
  *(ushort *)(v6 + 10) = v5[3];
  *(uint *)(v6 + 12) = v3;
  return AddTaskToTaskList1((int)Function_22529c8, v6, 0x7530u);
}

//----- (022529C8) --------------------------------------------------------
int __fastcall Function_22529c8(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = *(uchar *)(a2 + 16);
  if ( *(uchar *)(a2 + 16) )
  {
    if ( v4 == 1 )
    {
      result = Function_200ac1c(3);
      if ( result == 1 )
      {
        result = Function_2005684();
        if ( !result )
        {
          Function_2251020(*(uint *)v2);
          GXx_SetMasterBrightness_(&REG_MASTER_BRIGHT, 16);
          GXx_SetMasterBrightness_(&REG_MASTER_BRIGHT_SUB, 16);
          result = *(uchar *)(v2 + 16) + 1;
          *(uchar *)(v2 + 16) = result;
        }
      }
    }
    else if ( v4 == 2 )
    {
      result = (short)++*(ushort *)(a2 + 18);
      if ( result > 60 )
      {
        *(ushort *)(a2 + 18) = 0;
        result = *(uchar *)(a2 + 16) + 1;
        *(uchar *)(a2 + 16) = result;
      }
    }
    else
    {
      Function_224f26c(*(uint *)(a2 + 12), (short *)(a2 + 4), 0, 0);
      free(v2);
      result = Call_RemoveTaskFromTaskList(v3);
    }
  }
  else
  {
    Function_200aae0(90, 16, 0, 63, 3);
    Function_20055d0(1182, 90);
    result = *(uchar *)(v2 + 16) + 1;
    *(uchar *)(v2 + 16) = result;
  }
  return result;
}

//----- (02252A70) --------------------------------------------------------
int __fastcall Function_2252a70(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;

  v2 = 0;
  v3 = a1;
  v4 = a2;
  v5 = 0;
  do
  {
    if ( Function_202a488(v3, v5) == 1 )
      v2 += *(uchar *)(v4 + Function_202a580(v3, v5));
    ++v5;
  }
  while ( v5 < 20 );
  return v2;
}

//----- (02252A9C) --------------------------------------------------------
uint *__fastcall Function_2252a9c(int a1, int a2)
{
  return Function_2006fe8_LoadFromNARC_UncompressLZ8(90, a2 + 3, 0, a1, 0);
}

//----- (02252AB0) --------------------------------------------------------
int __fastcall Function_2252ab0(int *a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int *v7;
  int v8;
  int v9;

  v7 = a1;
  v8 = a2;
  v9 = a4;
  Function_200cd7c(a3, 3u, a1, a2, 27, 80, 0, 1, 2, a5);
  Function_200cbdc(v7, v8, 27, 250, 1, 2, v9);
  Function_200ce0c(v7, v8, 27, 251, 1, a6);
  return Function_200ce3c(v7, v8, 27, 252, 1, a7);
}

//----- (02252B20) --------------------------------------------------------
int __fastcall Function_2252b20(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;

  v5 = a1;
  v6 = a3;
  v7 = a4;
  Function_200d070(a1, a2);
  Function_200d080(v5, v6);
  Function_200d090(v5, v7);
  return Function_200d0a0(v5, a5);
}

//----- (02252B48) --------------------------------------------------------
int __fastcall Function_2252b48(uint *a1, int a2, uint a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9;
  uint v10;
  int *v11;
  uint *v12;
  int v13;
  char *v14;
  int v15;
  int v16;
  int v17;
  int **v18;
  int v19;
  int *v20;
  int v22;
  char v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;

  v30 = a4;
  v9 = a4;
  v10 = a3;
  v11 = dword_2254D9C;
  v12 = a1;
  v13 = a2;
  v14 = &v23;
  v15 = 6;
  do
  {
    v16 = *v11;
    v17 = v11[1];
    v11 += 2;
    *(uint *)v14 = v16;
    *((uint *)v14 + 1) = v17;
    v14 += 8;
    --v15;
  }
  while ( v15 );
  *(uint *)v14 = *v11;
  v25 = v9;
  v26 = a5;
  v27 = a6;
  v28 = a7;
  v24 = a8;
  v29 = a9;
  v22 = malloc(v10, 24);
  MI_CpuFill8((ushort *)v22, 0, 0x18u);
  v18 = (int **)v22;
  v19 = 0;
  do
  {
    v20 = Function_200ce6c(v12, v13, (short *)&v23);
    *v18 = v20;
    ++v18;
    Function_200d3f4((uint *)v20, 0);
    ++v19;
  }
  while ( v19 < 5 );
  *(uint *)(v22 + 20) = AddTaskToTaskList1((int)Function_2252cb8, v22, 0x9C40u);
  return v22;
}

//----- (02252BCC) --------------------------------------------------------
uint __fastcall Function_2252bcc(int *a1)
{
  int v1;
  int v2;
  int *v3;

  v1 = (int)a1;
  v2 = 0;
  v3 = a1;
  do
  {
    Function_200d0f4(*v3);
    ++v2;
    ++v3;
  }
  while ( v2 < 5 );
  Call_RemoveTaskFromTaskList(*(int **)(v1 + 20));
  return free(v1);
}

//----- (02252BF0) --------------------------------------------------------
uint __fastcall Function_2252bf0(int **a1, short a2, short a3, short a4, short a5, short a6, short a7, short a8, short a9, int a10)
{
  int **v10;
  short v11;
  int v12;
  uint result;

  v10 = a1;
  v11 = a4;
  Function_200d500(*a1, a2, a3, a10);
  Function_200d500(v10[1], v11, a5, a10);
  Function_200d500(v10[2], a6, a7, a10);
  Function_200d500(v10[3], a8, a9, a10);
  Function_200d364(*v10, 0);
  Function_200d364(v10[1], 1u);
  Function_200d364(v10[2], 2u);
  Function_200d364(v10[3], 3u);
  v12 = 0;
  do
  {
    result = Function_200d3f4((uint *)*v10, 1);
    ++v12;
    ++v10;
  }
  while ( v12 < 4 );
  return result;
}

//----- (02252C78) --------------------------------------------------------
uint __fastcall Function_2252c78(int **a1, short a2, short a3, short a4, short a5, int a6)
{
  return Function_2252bf0(a1, a2, a4, a3, a4, a2, a5, a3, a5, a6);
}

//----- (02252C9C) --------------------------------------------------------
uint __fastcall Function_2252c9c(uint **a1)
{
  int v1;
  uint **v2;
  uint result;

  v1 = 0;
  v2 = a1;
  do
  {
    result = Function_200d3f4(*v2, 0);
    ++v1;
    ++v2;
  }
  while ( v1 < 5 );
  return result;
}

//----- (02252CB8) --------------------------------------------------------
uint __fastcall Function_2252cb8(int a1, int **a2)
{
  int **v2;
  uint result;
  int v4;
  int **v5;

  v2 = a2;
  result = Function_200d408(*a2);
  if ( result )
  {
    v4 = 0;
    v5 = v2;
    do
    {
      Function_200d330(*v5);
      ++v4;
      ++v5;
    }
    while ( v4 < 4 );
    result = Function_200d408(v2[4]);
    if ( result == 1 )
      result = Function_200d330(v2[4]);
  }
  return result;
}

//----- (02252CEC) --------------------------------------------------------
uint __fastcall Function_2252cec(int a1, int a2, int a3, uint a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  uint result;
  int v9;

  v4 = a1;
  v5 = a2;
  v6 = *(uchar *)(a4 + 368);
  v9 = a3;
  if ( *(uchar *)(a4 + 368) )
  {
    switch ( v6 )
    {
      case 1:
        v7 = *(uint *)(a4 + 364) + 4468;
        break;
      case 2:
        v7 = *(uint *)(a4 + 364) + 3120;
        break;
      case 3:
        v7 = *(uint *)(a4 + 364) + 2140;
        break;
      default:
        return ErrorHandler();
    }
  }
  else
  {
    v7 = *(uint *)(a4 + 364) + 1276;
  }
  if ( v5 > 512 )
    ErrorHandler();
  if ( *(uchar *)(v7 + 2577 + v4) )
    ErrorHandler();
  MI_CpuCopy8(v9, v7 + 528 + (v4 << 9), v5, a4);
  result = 1;
  *(uchar *)(v7 + 2577 + v4) = 1;
  return result;
}

//----- (02252D7C) --------------------------------------------------------
int __fastcall Function_2252d7c(int a1, int a2, int a3, int a4)
{
  return Function_224b20c(*(uint *)(a4 + 364), a3);
}

