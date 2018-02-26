//----- (02246C20) --------------------------------------------------------
int __fastcall Function_2246c20(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  Function_2017fc8(3, 108, 163840);
  Function_2017fc8(0, 91, 768);
  v2 = MallocSomeDataAndStorePtrInOverlayData1c(v1, 284, 0x6Cu);
  MI_CpuFill8((ushort *)v2, 0, 0x11Cu);
  v3 = *(uint *)(LoadPtrToOverWorldDataIn18(v1) + 8);
  *(uint *)(v2 + 4) = v3;
  *(uint *)(v2 + 8) = LoadPlayerDataAdress(v3);
  *(uint *)(v2 + 272) = Function_2023790(100, 0x6Cu);
  *(uint *)(v2 + 276) = Function_2023790(100, 0x6Cu);
  Function_2004550(0x11u, 0x497u);
  *(uint *)(v2 + 136) = 0;
  return 1;
}

//----- (02246C98) --------------------------------------------------------
int __fastcall Function_2246c98(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int result;

  v2 = a2;
  v6 = (int *)LoadOverlayData1c(a1);
  if ( v6[31] == 1 )
  {
    v7 = ((int (*)(void))dword_21D8018[0])();
    v8 = ((int (__fastcall *)(int))dword_223B140[7])(v7);
    v9 = ((int (__fastcall *)(int))dword_21D7EAC[0])(v8);
    Function_20397b0(3 - v9);
  }
  switch ( (uchar)*v2 )
  {
    case 0u:
      Function_2246e08(v6);
      *v2 = 1;
      goto LABEL_17;
    case 1u:
      if ( Function_20334a4() )
      {
        dword_2249E20[0] = v6[4];
        ((void (__fastcall *)(int (*)(), int (*)()))dword_21D776C[0])(Function_2246eac, Function_2246ed4);
        v6[31] = 1;
        *v2 = 2;
      }
      goto LABEL_17;
    case 2u:
      v10 = ((int (__fastcall *)(int *))*(&off_2249B4C + 4 * v6[34]))(v6);
      *v6 = (int)AllocAndInitOverlayData((int *)*(&off_2249B54 + 4 * v6[34]), v10, 0x6Cu);
      v6[32] = v6[34];
      v6[34] = 6;
      *v2 = 3;
      goto LABEL_17;
    case 3u:
      if ( CallOverlayDataJumpTable(*v6, v3, v4, v5) == 1 )
      {
        ((void (__fastcall *)(int *))*(&off_2249B50 + 4 * v6[32]))(v6);
        Call_free2(*v6);
        v11 = v6[34];
        if ( v11 == 6 )
        {
          *v2 = 4;
        }
        else if ( dword_2249B58[4 * v11] == 1 )
        {
          Function_2246e54(v6);
          *v2 = 2;
        }
        else if ( v6[31] == 1 )
        {
          *v2 = 2;
        }
        else
        {
          *v2 = 0;
        }
      }
      goto LABEL_17;
    case 4u:
      result = 1;
      break;
    default:
LABEL_17:
      result = 0;
      break;
  }
  return result;
}

//----- (02246DC0) --------------------------------------------------------
int __fastcall Function_2246dc0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  Function_2246e54(v2);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 276), v3);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 272), v4);
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(108);
  Function_201807c(91);
  SetOverlayJumpTableDataToLoad(77, (int)dword_21D742C);
  return 1;
}

//----- (02246E08) --------------------------------------------------------
int __fastcall Function_2246e08(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;
  uint *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v4 = a1;
  result = *(uint *)(a1 + 124);
  if ( !result )
  {
    LoadOverlay(94, 2, a3, a4);
    v6 = malloc(0x6Cu, 131104);
    *(uint *)(v4 + 12) = v6;
    v7 = NNS_FndCreateExpHeapEx((v6 + 31) & 0xFFFFFFE0, 0x20000, 0);
    *(uint *)(v4 + 16) = v7;
    v10 = LoadOverlay4((int)v7, v8, v9);
    LoadOverlay60(v10, v11, v12);
    Function_2033478();
    result = Function_2017b8c(4);
  }
  return result;
}

//----- (02246E54) --------------------------------------------------------
int __fastcall Function_2246e54(uint *a1)
{
  uint *v1;
  int result;
  int v3;
  int v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v1 = a1;
  result = a1[31];
  if ( result == 1 )
  {
    Function_20a543c(v1[4]);
    v3 = free(v1[3]);
    v6 = UnloadOverlay60(v3, v4, v5);
    UnloadOverlay4((int)v6, v7, v8);
    Function_20334cc();
    UnloadOverlay(94, v9, v10, v11);
    result = 0;
    v1[31] = 0;
  }
  return result;
}

//----- (02246E88) --------------------------------------------------------
uint *__fastcall Function_2246e88(int a1, int a2, int a3)
{
  uint *result;

  *(uint *)(a1 + 136) = a2;
  result = (uint *)(a1 + 140);
  *result = a3;
  return result;
}

//----- (02246E94) --------------------------------------------------------
uint *__fastcall Function_2246e94(int a1)
{
  uint *result;

  result = (uint *)(a1 + 136);
  *result = 6;
  return result;
}

//----- (02246E9C) --------------------------------------------------------
uchar *__fastcall Function_2246e9c(int a1, char a2)
{
  uchar *result;

  result = (uchar *)(a1 + 122);
  *result = a2;
  return result;
}

//----- (02246EA4) --------------------------------------------------------
int __fastcall Function_2246ea4(int a1)
{
  return *(uchar *)(a1 + 122);
}

//----- (02246EAC) --------------------------------------------------------
int __fastcall Function_2246eac(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;

  v3 = a2;
  v4 = a3;
  v5 = OS_DisableInterrupts();
  v6 = NNS_FndAllocFromExpHeapEx(dword_2249E20[0], v3, v4);
  OS_RestoreInterrupts(v5);
  return v6;
}

//----- (02246ED4) --------------------------------------------------------
void __fastcall Function_2246ed4(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  if ( a2 )
  {
    v3 = OS_DisableInterrupts();
    Function_20a55d8(dword_2249E20[0], v2, v4, v5);
    OS_RestoreInterrupts(v3);
  }
}

//----- (02246EF8) --------------------------------------------------------
uint __fastcall Function_2246ef8(int a1)
{
  int v1;
  int *v2;

  v1 = a1;
  v2 = (int *)malloc(0x6Cu, 100);
  Function_22499c8(*(uint *)(v1 + 272), v2, 108);
  Function_2030d38(*(uint *)(v1 + 4), v2);
  return free((int)v2);
}

//----- (02246F24) --------------------------------------------------------
int __fastcall Function_2246f24(int a1)
{
  int v1;

  v1 = a1;
  Function_2030d5c(*(uint *)(a1 + 4), 1u, *(ushort *)(a1 + 120));
  return Function_2030d5c(*(uint *)(v1 + 4), 2u, *(uint *)(v1 + 264));
}

//----- (02246F48) --------------------------------------------------------
int __fastcall Function_2246f48(int a1)
{
  return Function_2030d5c(*(uint *)(a1 + 4), 3u, *(uint *)(a1 + 260));
}

//----- (02246F5C) --------------------------------------------------------
int __fastcall Function_2246f5c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_2030e48(*(uint *)(a1 + 4), a1 + 152);
  return Function_2246f94(v1, v2);
}

//----- (02246F74) --------------------------------------------------------
int __fastcall Function_2246f74(int a1)
{
  return Function_22499c8(*(uint *)(a1 + 272), a1 + 188, 108);
}

//----- (02246F88) --------------------------------------------------------
ushort *__fastcall Function_2246f88(int a1)
{
  int v1;
  ushort *result;

  v1 = *(uint *)(a1 + 264);
  result = (ushort *)(a1 + 250);
  *result = v1;
  return result;
}

//----- (02246F94) --------------------------------------------------------
ushort *__fastcall Function_2246f94(int a1, short a2)
{
  ushort *result;

  result = (ushort *)(a1 + 120);
  *result = a2;
  return result;
}

//----- (02246F9C) --------------------------------------------------------
int __fastcall Function_2246f9c(int a1)
{
  return *(uint *)(a1 + 264);
}

//----- (02246FA4) --------------------------------------------------------
int __fastcall Function_2246fa4(int a1)
{
  return *(uint *)(a1 + 260);
}

//----- (02246FAC) --------------------------------------------------------
int __fastcall Function_2246fac(int result, char a2)
{
  *(uchar *)(result + 268) = a2;
  return result;
}

//----- (02246FB4) --------------------------------------------------------
int __fastcall Function_2246fb4(int a1)
{
  return *(uchar *)(a1 + 268);
}

//----- (02246FBC) --------------------------------------------------------
void Function_2246fbc()
{
  ;
}

//----- (02246FC0) --------------------------------------------------------
void Function_2246fc0()
{
  ;
}

//----- (02246FC4) --------------------------------------------------------
int __fastcall Function_2246fc4(int a1)
{
  int v1;
  int v2;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = a1;
  v4 = 4;
  v5 = 4;
  v6 = 4;
  v7 = 4;
  v2 = LoadPlayerDataAdress(*(uint *)(a1 + 4));
  *(uint *)(v1 + 148) = Function_2089400(0x6Cu, 16, &v4, v2, 4, 0);
  return *(uint *)(v1 + 148);
}

//----- (02246FFC) --------------------------------------------------------
uint *__fastcall Function_2246ffc(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = *(uint *)(a1 + 148);
  if ( Function_2249a80(*(uint *)(v2 + 28), 108) )
  {
    Function_2246fac(v1, 1);
  }
  else if ( Function_2246fb4(v1) == 2 )
  {
    if ( Function_2023be0(*(uint *)(v1 + 272), *(uint *)(v2 + 28)) )
      Function_2246fac(v1, 3);
    else
      Function_2246fac(v1, 0);
  }
  else
  {
    Function_2023810(*(ushort **)(v1 + 272), *(uint *)(v2 + 28));
    Function_2246fac(v1, 2);
  }
  Function_2089438(v2, v3);
  return Function_2246e88(v1, 0, 0);
}

//----- (02247070) --------------------------------------------------------
int __fastcall Function_2247070(int a1)
{
  int v1;
  int v2;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = a1;
  v4 = 3;
  v5 = 4;
  v6 = 0;
  v7 = 0;
  v2 = LoadPlayerDataAdress(*(uint *)(a1 + 4));
  *(uint *)(v1 + 148) = Function_208941c(0x6Cu, 7, &v4, v2, 5, 1, 1, *(ushort *)(v1 + 120));
  return *(uint *)(v1 + 148);
}

//----- (022470B8) --------------------------------------------------------
uint *__fastcall Function_22470b8(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint v9;
  int v10;
  int v12;

  v12 = a4;
  v4 = a1;
  v5 = a1 + 148;
  v6 = *(uint *)v5;
  v7 = Function_2023b38(*(uint *)(*(uint *)v5 + 28), &v12);
  v9 = ull_mod(v7, v8, 10000LL);
  v10 = 264;
  *(uint *)(v4 + 264) = v9;
  if ( !v12 )
    ErrorHandler();
  Function_2089438(v6, v10);
  return Function_2246e88(v4, 0, 0);
}

//----- (022470F8) --------------------------------------------------------
int __fastcall Function_22470f8(int a1)
{
  int v1;
  int v2;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = a1;
  v4 = 4;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v2 = LoadPlayerDataAdress(*(uint *)(a1 + 4));
  *(uint *)(v1 + 148) = Function_2089400(0x6Cu, 4, &v4, v2, 6, 0);
  return *(uint *)(v1 + 148);
}

//----- (02247134) --------------------------------------------------------
uint *__fastcall Function_2247134(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v10;

  v10 = a4;
  v4 = a1;
  v5 = a1 + 148;
  v6 = *(uint *)v5;
  v7 = Function_2023b38(*(uint *)(*(uint *)v5 + 28), &v10);
  v8 = 260;
  *(uint *)(v4 + 260) = v7;
  if ( !v10 )
    ErrorHandler();
  Function_2089438(v6, v8);
  return Function_2246e88(v4, 0, 0);
}

//----- (02247168) --------------------------------------------------------
int __fastcall Function_2247168(int *a1)
{
  int *v1;
  int v2;

  v1 = a1;
  v2 = malloc(0x6Cu, 12);
  MI_CpuFill8((ushort *)v2, 0, 0xCu);
  *(uint *)v2 = v1[1];
  *(uint *)(v2 + 4) = 1;
  v1[31] = 0;
  v1 += 37;
  *v1 = v2;
  return *v1;
}

//----- (02247198) --------------------------------------------------------
uint *__fastcall Function_2247198(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  if ( Function_2039074(*(uint *)(a1 + 4)) )
  {
    v2 = LoadFlagAdress(*(uint *)(v1 + 4));
    Function_206af5c(v2);
  }
  free(*(uint *)(v1 + 148));
  return Function_2246e88(v1, 0, 0);
}

//----- (022471C8) --------------------------------------------------------
int __fastcall Function_22471c8(int a1)
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
  Function_2017fc8(3, 109, 458752);
  v2 = MallocSomeDataAndStorePtrInOverlayData1c(v1, 1048, 0x6Du);
  MI_CpuFill8((ushort *)v2, 0, 0x418u);
  *(uint *)v2 = LoadPtrToOverWorldDataIn18(v1);
  *(uint *)(v2 + 4) = Function_2018340(0x6Du);
  Function_201dbec(64, 0x6Du);
  Function_2017dd4(4, 8);
  Function_2247510(*(uint *)(v2 + 4));
  Function_201e3d8();
  Function_201e450(4u);
  *(uint *)(v2 + 32) = Function_200b368(0xBu, 64, 0x6Du);
  *(uint *)(v2 + 36) = LoadFromMsgNARC(0, 26, 671, 0x6Du);
  *(uint *)(v2 + 44) = LoadFromMsgNARC(0, 26, 674, 0x6Du);
  *(uint *)(v2 + 48) = LoadFromMsgNARC(0, 26, 695, 0x6Du);
  *(uint *)(v2 + 40) = LoadFromMsgNARC(0, 26, 412, 0x6Du);
  *(uint *)(v2 + 52) = LoadFromMsgNARC(0, 26, 358, 0x6Du);
  *(uint *)(v2 + 56) = Function_2023790(180, 0x6Du);
  *(uint *)(v2 + 64) = Function_2023790(256, 0x6Du);
  *(uint *)(v2 + 60) = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 36), 0x1Fu);
  Function_2247704(v2);
  Function_2247a24(v2);
  v3 = Function_2246ea4(*(uint *)v2);
  if ( v3 == 12 )
  {
    if ( ((int (*)(void))dword_21D7A8C[0])() || Function_2039074(*(uint *)(*(uint *)v2 + 4)) != 1 )
    {
      *(uint *)(v2 + 8) = 0;
    }
    else
    {
      *(uint *)(v2 + 8) = 12;
      Function_2038548(*(uint *)(*(uint *)v2 + 4));
      Function_2039734();
    }
  }
  else
  {
    if ( v3 == 22 )
    {
      *(uint *)(v2 + 232) = 0;
      Function_2039734();
    }
    *(uint *)(v2 + 8) = Function_2246ea4(*(uint *)v2);
  }
  Function_2246e9c(*(uint *)v2, 0);
  Function_200f174(0, 1, 1, 0, 6, 1, 109);
  Function_201ff0c(1u, 1);
  Function_201ff0c(2u, 1);
  Function_201ff74(1u, 1);
  Function_201ff74(2u, 1);
  Function_201ff0c(0x10u, 1);
  Function_201ff74(0x10u, 1);
  byte_21BF6E1 = 0;
  Function_201ffe8();
  Function_2002ac8(1);
  Function_2002ae4(0);
  Function_2002b20(0);
  SetMainLoopFunctionCall((int)Function_22474e8, v2);
  return 1;
}

//----- (022473D8) --------------------------------------------------------
int __fastcall Function_22473d8(int a1, int *a2)
{
  int *v2;
  int v3;
  int v4;
  uint *v5;
  int v6;
  int v7;

  v2 = a2;
  v3 = LoadOverlayData1c(a1);
  v4 = *v2;
  v5 = (uint *)v3;
  if ( *v2 )
  {
    if ( v4 == 1 )
    {
      v6 = *(uint *)(v3 + 8);
      v7 = ((int (*)(void))*(&off_2249D70 + v6))();
      if ( v6 != v5[2] )
      {
        v5[37] = 0;
        v5[39] = 0;
        v5[38] = 0;
      }
      if ( v7 == 1 )
        *v2 = 2;
    }
    else if ( v4 == 2 && Function_200f2ac() == 1 )
    {
      return 1;
    }
  }
  else if ( Function_200f2ac() == 1 )
  {
    *v2 = 1;
  }
  return 0;
}

//----- (02247440) --------------------------------------------------------
int __fastcall Function_2247440(int a1)
{
  int v1;
  int v2;
  int v3;
  int *v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  v3 = v2;
  v4 = *(int **)(v2 + 236);
  if ( v4 )
  {
    Call_RemoveTaskFromTaskList(v4);
    *(uint *)(v3 + 236) = 0;
    *(uint *)(v3 + 240) = 0;
  }
  Function_200b190(*(ushort **)(v3 + 52));
  Function_200b190(*(ushort **)(v3 + 40));
  Function_200b190(*(ushort **)(v3 + 48));
  Function_200b190(*(ushort **)(v3 + 44));
  Function_200b190(*(ushort **)(v3 + 36));
  Function_200b3f0(*(uint **)(v3 + 32), v5);
  Function_20237bc_FreeMsg(*(uint *)(v3 + 60), v6);
  Function_20237bc_FreeMsg(*(uint *)(v3 + 64), v7);
  Function_20237bc_FreeMsg(*(uint *)(v3 + 56), v8);
  Function_2247acc(v3);
  free(*(uint *)(v3 + 4));
  Function_22476d0(*(uint *)(v3 + 4));
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  Function_201dc3c();
  Function_201e530();
  Function_2002ac8(0);
  Function_2002ae4(0);
  Function_2002b20(0);
  Function_2039794();
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(109);
  return 1;
}

//----- (022474E8) --------------------------------------------------------
int __fastcall Function_22474e8(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_201dcac();
  Function_200a858();
  Function_201c2b8(*(uint *)(v1 + 4));
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (02247510) --------------------------------------------------------
uint __fastcall Function_2247510(uint *a1, int a2, int a3, int a4)
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
  int v23;
  int v24;
  int v25;
  int v26;
  char v27;
  char v28;
  char v29;
  char v30;
  char v31;
  int v32;

  v32 = a4;
  v4 = a1;
  Function_201ff00();
  Function_201ff68();
  v5 = dword_2249C4C;
  v6 = &v27;
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
  GX_SetBanks((int *)&v27);
  MIi_CpuClear32(0, (uint *)0x6000000, 0x80000);
  MIi_CpuClear32(0, (uint *)0x6200000, 0x20000);
  MIi_CpuClear32(0, (uint *)0x6400000, 0x40000);
  MIi_CpuClear32(0, (uint *)0x6600000, 0x20000);
  v23 = 1;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  SetGraphicsModes(&v23);
  v10 = dword_2249CAC;
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
  Function_20183c4(v4, 0, (int *)&v28, 0);
  Function_2019ebc(v4, 0);
  Function_2019184((int)v4, 0, 0, 0);
  Function_2019184((int)v4, 0, 3u, 0);
  Function_20183c4(v4, 1u, (int *)&v29, 0);
  Function_2019ebc(v4, 1u);
  Function_2019184((int)v4, 1u, 0, 0);
  Function_2019184((int)v4, 1u, 3u, 0);
  Function_20183c4(v4, 2u, (int *)&v30, 0);
  Function_2019ebc(v4, 2u);
  Function_2019184((int)v4, 2u, 0, 0);
  Function_2019184((int)v4, 2u, 3u, 0);
  Function_20183c4(v4, 3u, (int *)&v31, 0);
  Function_2019ebc(v4, 3u);
  Function_2019184((int)v4, 3u, 0, 0);
  Function_2019184((int)v4, 3u, 3u, 0);
  v15 = dword_2249C74;
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
  Function_2019ebc(v4, 4u);
  Function_2019184((int)v4, 4u, 0, 0);
  Function_2019184((int)v4, 4u, 3u, 0);
  Function_20183c4(v4, 5u, (int *)&v22, 0);
  Function_2019ebc(v4, 5u);
  Function_2019184((int)v4, 5u, 0, 0);
  Function_2019184((int)v4, 5u, 3u, 0);
  Function_2019690(0, 32, 0, 0x6Du);
  return Function_2019690(4u, 32, 0, 0x6Du);
}

//----- (022476D0) --------------------------------------------------------
int __fastcall Function_22476d0(int a1)
{
  int v1;

  v1 = a1;
  Function_2019044(a1, 5);
  Function_2019044(v1, 4);
  Function_2019044(v1, 3);
  Function_2019044(v1, 2);
  Function_2019044(v1, 1);
  return Function_2019044(v1, 0);
}

//----- (02247704) --------------------------------------------------------
uint __fastcall Function_2247704(int a1, int a2, int a3, int a4)
{
  uchar v4;
  int v5;
  short v6;
  short v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int *v14;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int *v23;
  uint *v24;
  int v25;
  int v26;

  v26 = a4;
  v16 = a1;
  v24 = *(uint **)(a1 + 4);
  v23 = LoadFromNARC_8(92, 0x6Du, a3, a4);
  Function_2007130((int)v23, 3u, 0, 0, 0, 109);
  Function_2007130((int)v23, 3u, 4u, 0, 0, 109);
  LoadFromNARC_PlFont2(0, 416, 109);
  LoadFromNARC_PlFont2(4u, 416, 109);
  v4 = Function_2027b50(*(ushort **)(*(uint *)v16 + 8));
  Function_200dd0c(v24, 0, 1, 10, v4, 109);
  Function_200daa4(v24, 0, 31, 11, 0, 109);
  Function_200daa4(v24, 2u, 31, 11, 0, 109);
  Function_20070e8((int)v23, 2u, v24, 1u, 0, 0, 0, 109);
  Function_200710c((int)v23, 5u, v24, 1u, 0, 1536, 0, 109);
  Function_20070e8((int)v23, 0xAu, v24, 5u, 0, 0, 0, 109);
  Function_200710c((int)v23, 0xBu, v24, 5u, 0, 1536, 0, 109);
  Function_201975c(0, 0);
  Function_201975c(4u, 0);
  MI_CpuFill8((ushort *)(v16 + 236), 0, 0x32Cu);
  v5 = Function_20071ec((int)v23, 4u, &v25, 109);
  MIi_CpuCopy16(*(uint *)(v25 + 12), v16 + 244, 128, v6);
  MIi_CpuCopy16(*(uint *)(v25 + 12), v16 + 372, 128, v7);
  free(v5);
  v21 = 0;
  v22 = 0;
  v18 = v16 + 372;
  v17 = v16 + 244;
  do
  {
    v20 = 0;
    v19 = 0;
    while ( 1 )
    {
      if ( v21 >= 21 )
        ErrorHandler();
      v8 = 1;
      v9 = v16 + 32 * (v22 + 1) + 2;
      v10 = v18 + 2;
      v11 = v17 + 2;
      do
      {
        Function_200393c(v11, v10, 1u, (v20 >> 8) & 0xFF, *(ushort *)(v9 + 244));
        ++v8;
        v9 += 2;
        v10 += 2;
        v11 += 2;
      }
      while ( v8 < 16 );
      v18 += 32;
      ++v21;
      if ( v19 == 1 )
        break;
      v20 += 768;
      if ( v20 >= 4096 )
      {
        v20 = 4096;
        v19 = 1;
      }
    }
    v17 += 32;
    ++v22;
  }
  while ( v22 < 3 );
  DC_FlushRange(v16 + 372, 672);
  *(uint *)(v16 + 240) = 1;
  *(uint *)(v16 + 236) = AddTaskToTaskList2((int)Function_2247990, v16 + 236, 0x14u);
  Call_FS_CloseFile(v23);
  v14 = LoadFromNARC_8(170, 0x6Du, v12, v13);
  Function_201ff0c(8u, 0);
  Function_20070e8((int)v14, 0xBu, v24, 3u, 0, 0, 0, 109);
  Function_200710c((int)v14, 0xAu, v24, 3u, 0, 0, 0, 109);
  Function_2007130((int)v14, 0xCu, 0, 288, 32, 109);
  return Call_FS_CloseFile(v14);
}

//----- (02247990) --------------------------------------------------------
int __fastcall Function_2247990(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  result = *(uint *)(a2 + 4);
  if ( result )
  {
    result = 811;
    *(uchar *)(a2 + 811) ^= 1u;
    if ( !(*(uchar *)(a2 + 811) & 1) )
    {
      GX_LoadBGPltt(a2 + 136 + 32 * *(short *)(a2 + 808), 0, 0x20u);
      GXS_LoadBGPltt(v2 + 136 + 32 * *(short *)(v2 + 808), 0, 0x20u);
      result = 810;
      if ( *(uchar *)(v2 + 810) )
      {
        if ( (short)--*(ushort *)(v2 + 808) < 0 )
        {
          *(ushort *)(v2 + 808) = 1;
          *(uchar *)(v2 + 810) ^= 1u;
        }
      }
      else if ( (short)++*(ushort *)(v2 + 808) >= 21 )
      {
        *(ushort *)(v2 + 808) = 19;
        *(uchar *)(v2 + 810) ^= 1u;
      }
    }
  }
  return result;
}

//----- (02247A24) --------------------------------------------------------
int __fastcall Function_2247a24(int a1)
{
  int v1;

  v1 = a1;
  Function_201a7e8(*(uint **)(a1 + 4), a1 + 104, 0, 4, 4, 0x17u, 0x10u, 13, 148);
  Function_201ada4_ClearTextBox(v1 + 104, 0);
  Function_201a7e8(*(uint **)(v1 + 4), v1 + 88, 0, 4, 1, 0x18u, 2u, 13, 516);
  Function_201ada4_ClearTextBox(v1 + 88, 0);
  Function_22498cc(v1 + 88, *(uint *)(v1 + 60), 0);
  Function_201a7e8(*(uint **)(v1 + 4), v1 + 72, 0, 2, 19, 0x1Bu, 4u, 13, 40);
  return Function_201ada4_ClearTextBox(v1 + 72, 0);
}

//----- (02247ACC) --------------------------------------------------------
uint __fastcall Function_2247acc(int a1)
{
  int v1;

  v1 = a1;
  Function_201a8fc(a1 + 72);
  Function_201a8fc(v1 + 88);
  return Function_201a8fc(v1 + 104);
}

//----- (02247AE8) --------------------------------------------------------
int __fastcall Function_2247ae8(int result, int a2, int a3)
{
  *(uint *)(result + 8) = a2;
  *(uint *)(result + 12) = a3;
  return result;
}

//----- (02247AF0) --------------------------------------------------------
int __fastcall Function_2247af0(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = *(uint *)(a1 + 140);
  if ( !result )
  {
    result = Function_200e7fc((int *)(v1 + 72), 1);
    *(uint *)(v1 + 140) = result;
  }
  return result;
}

//----- (02247B0C) --------------------------------------------------------
int __fastcall Function_2247b0c(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = *(uint *)(a1 + 140);
  if ( result )
  {
    Function_200eba0(result);
    result = 0;
    *(uint *)(v1 + 140) = 0;
  }
  return result;
}

//----- (02247B24) --------------------------------------------------------
int __fastcall Function_2247b24(uint *a1, char a2, short a3, int a4)
{
  short v5;
  short v6;
  short v7;
  short v8;
  int v9;

  v9 = a4;
  v5 = 5888;
  v6 = 1805;
  v7 = 3332;
  LOBYTE(v6) = a2;
  v8 = a3;
  return Function_2002100(a1, (uchar *)&v5, 31, 11, 0x6Du);
}

//----- (02247B58) --------------------------------------------------------
int __fastcall Function_2247b58(uint *a1, char a2, short a3, int a4)
{
  short v5;
  short v6;
  short v7;
  short v8;
  uchar savedregs[24];

  *(uint *)savedregs = a4;
  v5 = 5888;
  v6 = 1805;
  v7 = 3332;
  LOBYTE(v6) = a2;
  v8 = a3;
  return Function_2002054(a1, (uchar *)&v5, 31, 11, a4, 0x6Du);
}

//----- (02247B98) --------------------------------------------------------
int __fastcall Function_2247b98(int a1)
{
  int v1;
  int v2;
  char *v3;
  int *v4;
  int v5;
  int *v6;
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
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;

  v1 = a1;
  v2 = *(uint *)(a1 + 148);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      v17 = Function_2001288(*(uint *)(v1 + 164));
      if ( v17 == -2 )
      {
        Function_2005748(0x5DCu);
        Function_2246e88(*(uint *)v1, 6, 0);
        *(uint *)(v1 + 156) = 29;
        ++*(uint *)(v1 + 148);
      }
      else if ( v17 != -1 )
      {
        Function_2005748(0x5DCu);
        *(uint *)(v1 + 156) = v17;
        ++*(uint *)(v1 + 148);
      }
    }
    else
    {
      Function_2013a3c(*(int **)(v1 + 160));
      Function_2001384(*(uint *)(v1 + 164), 0, 0);
      Function_200dc9c(v1 + 120, 1);
      Function_201acf4(v1 + 120);
      Function_201a8fc(v1 + 120);
      *(uint *)(v1 + 8) = *(uint *)(v1 + 156);
    }
  }
  else
  {
    if ( Function_2030d20(*(uint *)(*(uint *)v1 + 4)) == 1 )
    {
      v3 = &byte_2249BC0;
      v4 = &dword_2249BEC;
      v5 = 4;
      v6 = &dword_2249C0C;
    }
    else
    {
      v3 = &byte_2249BBC;
      v4 = &dword_2249BDC;
      v6 = &dword_2249C2C;
      v5 = 2;
    }
    v7 = *v6;
    v9 = v6[1];
    v8 = v6 + 2;
    v19 = v7;
    v20 = v9;
    v10 = *v8;
    v11 = v8[1];
    v8 += 2;
    v21 = v10;
    v22 = v11;
    v12 = *v8;
    v13 = v8[1];
    v8 += 2;
    v23 = v12;
    v24 = v13;
    v14 = v8[1];
    v25 = *v8;
    v26 = v14;
    Function_201a7e8(*(uint **)(v1 + 4), v1 + 120, 0, *v3, v3[1], v3[2], v3[3], 13, 148);
    v15 = 0;
    for ( *(uint *)(v1 + 160) = Function_2013a04(v5, 0x6Du); v15 < v5; v4 += 2 )
    {
      Function_2013a4c(*(uint **)(v1 + 160), *(ushort ***)(v1 + 52), *v4, v4[1]);
      ++v15;
    }
    v22 = v1 + 120;
    v19 = *(uint *)(v1 + 160);
    *(uint *)(v1 + 164) = Function_200112c(&v19, 0, 0, 0x6Du);
    Function_200dc48(v1 + 120, 1, 31, 0xBu);
    Function_200e084(v1 + 72, 1);
    Function_201a954(v1 + 120, v16);
    ++*(uint *)(v1 + 148);
  }
  return 0;
}

//----- (02247D30) --------------------------------------------------------
int __fastcall Function_2247d30(int *a1)
{
  int *v1;

  v1 = a1;
  Function_2246e88(*a1, 4, 3);
  Function_2246e9c(*v1, 38);
  v1[2] = 29;
  return 0;
}

//----- (02247D50) --------------------------------------------------------
int __fastcall Function_2247d50(int a1)
{
  int v1;
  int v2;
  int v4;

  v1 = a1;
  if ( Function_224977c(*(uint *)(a1 + 68)) == 1 )
    return 0;
  switch ( (uchar)*(uint *)(v1 + 148) )
  {
    case 0u:
      Function_2249714(v1, *(uint *)(v1 + 52), 25, 1, 3855);
      ++*(uint *)(v1 + 148);
      break;
    case 1u:
      *(uint *)(v1 + 136) = Function_2247b24(*(uint **)(v1 + 4), 13, 564, v2);
      ++*(uint *)(v1 + 148);
      break;
    case 2u:
      v4 = Function_2002114(*(uint *)(v1 + 136), 0x6Du);
      if ( v4 != -1 )
      {
        if ( v4 == -2 )
        {
          Function_2249714(v1, *(uint *)(v1 + 52), 27, 1, 3855);
          Function_2030d5c(*(uint *)(*(uint *)v1 + 4), 0, 0);
        }
        else
        {
          Function_2249714(v1, *(uint *)(v1 + 52), 26, 1, 3855);
          Function_2030d5c(*(uint *)(*(uint *)v1 + 4), 0, 1);
        }
        ++*(uint *)(v1 + 148);
      }
      break;
    case 3u:
      Function_2247ae8(v1, 25, 0);
      break;
    default:
      return 0;
  }
  return 0;
}

//----- (02247E38) --------------------------------------------------------
int __fastcall Function_2247e38(int a1)
{
  int v1;
  int v3;

  v1 = a1;
  if ( Function_224977c(*(uint *)(a1 + 68)) == 1 )
    return 0;
  switch ( (uchar)*(uint *)(v1 + 148) )
  {
    case 0u:
      Function_2249714(v1, *(uint *)(v1 + 52), 28, 1, 3855);
      ++*(uint *)(v1 + 148);
      break;
    case 1u:
      *(uint *)(v1 + 136) = Function_2247b58(*(uint **)(v1 + 4), 13, 564, 1);
      ++*(uint *)(v1 + 148);
      break;
    case 2u:
      v3 = Function_2002114(*(uint *)(v1 + 136), 0x6Du);
      if ( v3 != -1 )
      {
        if ( v3 == -2 )
        {
          *(uint *)(v1 + 8) = 0;
        }
        else
        {
          Function_2249714(v1, *(uint *)(v1 + 52), 29, 1, 3855);
          Function_2030d10(*(uint *)(*(uint *)v1 + 4));
          ++*(uint *)(v1 + 148);
        }
      }
      break;
    case 3u:
      Function_2247ae8(v1, 25, 0);
      break;
    default:
      return 0;
  }
  return 0;
}

//----- (02247F08) --------------------------------------------------------
int __fastcall Function_2247f08(int a1)
{
  int v1;
  ushort *v2;
  int v3;
  ushort *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v1 = a1;
  Function_201ada4_ClearTextBox(a1 + 212, 15);
  v2 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 52), 0x2Au);
  Function_201d738_CallInitTextInterpreter(v1 + 212, 0);
  Function_20237bc_FreeMsg((int)v2, v3);
  v4 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 52), 0x2Bu);
  Function_201d738_CallInitTextInterpreter(v1 + 212, 0);
  Function_20237bc_FreeMsg((int)v4, v5);
  v6 = 2 * *(uint *)(v1 + 176);
  v7 = dword_2249D60[v6];
  v8 = dword_2249D64[v6];
  Function_2014a58(*(int **)(v1 + 228), v1 + 212);
  return Function_201a954(v1 + 212, v9);
}

//----- (02247FA4) --------------------------------------------------------
int __fastcall Function_2247fa4(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  Function_201ada4_ClearTextBox(a1 + 212, 15);
  return Function_201a954(v1 + 212, v2);
}

//----- (02247FBC) --------------------------------------------------------
int __fastcall Function_2247fbc(int *a1)
{
  int *v1;
  int result;

  v1 = a1;
  result = ++a1[47];
  if ( result == 8 )
  {
    v1[48] ^= 1u;
    v1[47] = 0;
    if ( v1[43] + 6 == v1[45] )
    {
      Function_2019cb8(v1[1], 3, 0, 0xEu, 0x11u, 4u, 2u, 9u);
    }
    else
    {
      Function_2019cb8(v1[1], 3, 20 * *((ushort *)v1 + 96) + 1, 0xEu, 0x11u, 1u, 1u, 9u);
      Function_2019cb8(v1[1], 3, 20 * *((ushort *)v1 + 96) + 2, 0xFu, 0x11u, 1u, 1u, 9u);
      Function_2019cb8(v1[1], 3, 20 * *((ushort *)v1 + 96) + 3, 0x10u, 0x11u, 1u, 1u, 9u);
      Function_2019cb8(v1[1], 3, 20 * *((ushort *)v1 + 96) + 4, 0x11u, 0x11u, 1u, 1u, 9u);
      Function_2019cb8(v1[1], 3, 20 * *((ushort *)v1 + 96) + 11, 0xEu, 0x12u, 1u, 1u, 9u);
      Function_2019cb8(v1[1], 3, 20 * *((ushort *)v1 + 96) + 12, 0xFu, 0x12u, 1u, 1u, 9u);
      Function_2019cb8(v1[1], 3, 20 * *((ushort *)v1 + 96) + 13, 0x10u, 0x12u, 1u, 1u, 9u);
      Function_2019cb8(v1[1], 3, 20 * *((ushort *)v1 + 96) + 14, 0x11u, 0x12u, 1u, 1u, 9u);
    }
    if ( v1[43] )
    {
      Function_2019cb8(v1[1], 3, 20 * *((ushort *)v1 + 96) + 5, 0xEu, 3u, 1u, 1u, 9u);
      Function_2019cb8(v1[1], 3, 20 * *((ushort *)v1 + 96) + 6, 0xFu, 3u, 1u, 1u, 9u);
      Function_2019cb8(v1[1], 3, 20 * *((ushort *)v1 + 96) + 7, 0x10u, 3u, 1u, 1u, 9u);
      Function_2019cb8(v1[1], 3, 20 * *((ushort *)v1 + 96) + 8, 0x11u, 3u, 1u, 1u, 9u);
      Function_2019cb8(v1[1], 3, 20 * *((ushort *)v1 + 96) + 15, 0xEu, 4u, 1u, 1u, 9u);
      Function_2019cb8(v1[1], 3, 20 * *((ushort *)v1 + 96) + 16, 0xFu, 4u, 1u, 1u, 9u);
      Function_2019cb8(v1[1], 3, 20 * *((ushort *)v1 + 96) + 17, 0x10u, 4u, 1u, 1u, 9u);
      Function_2019cb8(v1[1], 3, 20 * *((ushort *)v1 + 96) + 18, 0x11u, 4u, 1u, 1u, 9u);
    }
    else
    {
      Function_2019cb8(v1[1], 3, 0, 0xEu, 3u, 4u, 2u, 9u);
    }
    result = Function_201c3c0(v1[1], 3);
  }
  return result;
}

//----- (022482CC) --------------------------------------------------------
int __fastcall Function_22482cc(int a1)
{
  int v1;
  ushort *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v11;

  v1 = a1;
  Function_201ada4_ClearTextBox(a1 + 196, 15);
  v2 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 52), 0x2Cu);
  v11 = (int)v2;
  v3 = Function_2023c3c((int)v2);
  v5 = Function_2023790(v3, 0x6Du);
  v6 = *(uint *)(v1 + 172);
  if ( __OFSUB__(v6, v6 + 6) ^ 1 )
  {
    v7 = 0;
    do
    {
      Function_2023c9c(v5, v11, v6);
      Function_201d738_CallInitTextInterpreter(v1 + 196, 0);
      ++v6;
      v7 += 16;
    }
    while ( v6 < *(uint *)(v1 + 172) + 6 );
  }
  Function_20237bc_FreeMsg(v11, v4);
  Function_20237bc_FreeMsg(v5, v8);
  return Function_201a954(v1 + 196, v9);
}

//----- (02248350) --------------------------------------------------------
int __fastcall Function_2248350(int a1)
{
  int v1;
  int v2;
  ushort *v3;
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

  v1 = a1;
  v2 = *(uint *)(a1 + 168);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      v13 = *(uint *)(a1 + 172);
      if ( dword_21BF6C8 & 0x40 )
      {
        if ( v13 )
        {
          --*(uint *)(a1 + 172);
          Function_2005748(0x5DCu);
        }
      }
      else if ( dword_21BF6C8 & 0x80 )
      {
        if ( v13 + 6 < *(uint *)(a1 + 180) )
        {
          ++*(uint *)(a1 + 172);
          Function_2005748(0x5DCu);
        }
        if ( *(uint *)(v1 + 172) + 6 == *(uint *)(v1 + 180) )
        {
          Function_2247f08(v1);
          ++*(uint *)(v1 + 168);
          Function_2005748(0x5DCu);
        }
      }
      else if ( dword_21BF6C4 & 2 )
      {
        Function_2005748(0x5DCu);
        *(uint *)(v1 + 184) = 2;
        *(uint *)(v1 + 168) = 255;
      }
      if ( v13 != *(uint *)(v1 + 172) )
        Function_22482cc(v1);
    }
    else
    {
      if ( v2 != 2 )
      {
        Function_200dc9c(a1 + 196, 0);
        Function_201acf4(v1 + 196);
        Function_201a8fc(v1 + 196);
        Function_200dc9c(v1 + 212, 0);
        Function_201acf4(v1 + 212);
        Function_201a8fc(v1 + 212);
        Function_2014a20(*(uint *)(v1 + 228), v14);
        Function_2019ebc(*(uint **)(v1 + 4), 3u);
        Function_201ff0c(8u, 0);
        *(uint *)(v1 + 168) = 0;
        return *(uint *)(v1 + 184);
      }
      if ( dword_21BF6C4 & 0x10 || dword_21BF6C4 & 0x20 )
      {
        *(uint *)(a1 + 176) ^= 1u;
        Function_2005748(0x5DCu);
        Function_2247f08(v1);
      }
      else if ( dword_21BF6C4 & 1 )
      {
        *(uint *)(a1 + 184) = 2 - *(uint *)(a1 + 176);
        Function_2005748(0x5DCu);
        ++*(uint *)(v1 + 168);
      }
      else if ( dword_21BF6C4 & 2 )
      {
        *(uint *)(a1 + 184) = 2;
        Function_2005748(0x5DCu);
        ++*(uint *)(v1 + 168);
      }
      else if ( dword_21BF6C4 & 0x40 )
      {
        Function_2247fa4(a1);
        Function_2005748(0x5DCu);
        --*(uint *)(v1 + 168);
        --*(uint *)(v1 + 172);
        Function_22482cc(v1);
      }
    }
  }
  else
  {
    v3 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 52), 0x2Cu);
    v16 = (int)v3;
    v4 = Function_2023c5c((int)v3);
    *(uint *)(v1 + 172) = 0;
    *(uint *)(v1 + 176) = 0;
    *(uint *)(v1 + 184) = 0;
    *(uint *)(v1 + 180) = v4;
    Function_201a7e8(*(uint **)(v1 + 4), v1 + 196, 2, 1, 5, 0x1Eu, 0xCu, 13, 148);
    Function_201a7e8(*(uint **)(v1 + 4), v1 + 212, 2, 1, 19, 0x1Eu, 4u, 13, 508);
    Function_201ada4_ClearTextBox(v1 + 196, 15);
    v5 = Function_2023c3c(v16);
    v6 = Function_2023790(v5, 0x6Du);
    v7 = 0;
    v8 = 0;
    do
    {
      Function_2023c9c(v6, v16, v7);
      Function_201d738_CallInitTextInterpreter(v1 + 196, 0);
      ++v7;
      v8 += 16;
    }
    while ( v7 < 6 );
    Function_20237bc_FreeMsg(v16, v9);
    Function_20237bc_FreeMsg(v6, v10);
    Function_200dc48(v1 + 196, 1, 31, 0xBu);
    Function_201a954(v1 + 196, v11);
    Function_201ada4_ClearTextBox(v1 + 212, 15);
    Function_200dc48(v1 + 212, 1, 31, 0xBu);
    Function_201a954(v1 + 212, v12);
    *(uint *)(v1 + 228) = Function_20149f0(0x6Du);
    Function_201ada4_ClearTextBox(v1 + 72, 15);
    Function_200e084(v1 + 72, 1);
    Function_201acf4(v1 + 72);
    Function_201ff0c(8u, 1);
    *(uint *)(v1 + 188) = 0;
    *(uint *)(v1 + 192) = 0;
    ++*(uint *)(v1 + 168);
  }
  Function_2247fbc((int *)v1);
  return 0;
}

//----- (02248684) --------------------------------------------------------
int __fastcall Function_2248684(int a1)
{
  int v1;
  int v2;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  if ( Function_224977c(*(uint *)(a1 + 68)) == 1 )
    return 0;
  switch ( (uchar)*(uint *)(v1 + 148) )
  {
    case 0u:
      *(uint *)(v1 + 148) = 3;
      break;
    case 1u:
      ++*(uint *)(v1 + 148);
      break;
    case 2u:
      v4 = Function_2002114(*(uint *)(v1 + 136), 0x6Du);
      if ( v4 != -1 )
      {
        if ( v4 == -2 )
        {
          ++*(uint *)(v1 + 148);
        }
        else
        {
          Function_2249714(v1, *(uint *)(v1 + 52), 9, 1, 3855);
          *(uint *)(v1 + 148) = 4;
        }
      }
      break;
    case 3u:
      v5 = Function_2248350(v1);
      if ( v5 == 1 )
      {
        Function_2249714(v1, *(uint *)(v1 + 52), 9, 1, 3855);
        ++*(uint *)(v1 + 148);
      }
      else if ( v5 == 2 )
      {
        Function_2247ae8(v1, 34, 0);
      }
      break;
    case 4u:
      *(uint *)(v1 + 136) = Function_2247b24(*(uint **)(v1 + 4), 13, 564, v2);
      ++*(uint *)(v1 + 148);
      break;
    default:
      v6 = Function_2002114(*(uint *)(v1 + 136), 0x6Du);
      if ( v6 != -1 )
      {
        if ( v6 == -2 )
        {
          Function_2249714(v1, *(uint *)(v1 + 52), 10, 1, 3855);
          Function_2247ae8(v1, 34, 0);
        }
        else
        {
          *(uint *)(v1 + 8) = 5;
        }
      }
      break;
  }
  return 0;
}

//----- (022487AC) --------------------------------------------------------
int __fastcall Function_22487ac(int *a1)
{
  int *v1;

  v1 = a1;
  Function_2246e88(*a1, 1, 0);
  Function_2246e9c(*v1, 6);
  v1[2] = 29;
  return 0;
}

//----- (022487CC) --------------------------------------------------------
int __fastcall Function_22487cc(int *a1)
{
  int *v1;
  int v2;
  int result;

  v1 = a1;
  v2 = Function_2246fb4(*a1);
  if ( v2 == 1 )
  {
    result = 0;
    v1[2] = 0;
  }
  else if ( v2 == 2 || v2 == 3 )
  {
    v1[2] = 37;
    result = 0;
  }
  else
  {
    if ( !v1[37] )
      v1[2] = 7;
    result = 0;
  }
  return result;
}

//----- (02248804) --------------------------------------------------------
int __fastcall Function_2248804(int a1)
{
  int v1;
  int v2;
  int result;
  int v4;

  v1 = a1;
  if ( Function_224977c(*(uint *)(a1 + 68)) == 1 )
    return 0;
  switch ( (uchar)*(uint *)(v1 + 148) )
  {
    case 0u:
      ++*(uint *)(v1 + 148);
      goto LABEL_14;
    case 1u:
      Function_2249714(v1, *(uint *)(v1 + 52), 11, 1, 3855);
      ++*(uint *)(v1 + 148);
      goto LABEL_14;
    case 2u:
      *(uint *)(v1 + 136) = Function_2247b24(*(uint **)(v1 + 4), 13, 564, v2);
      ++*(uint *)(v1 + 148);
      goto LABEL_14;
    case 3u:
      v4 = Function_2002114(*(uint *)(v1 + 136), 0x6Du);
      if ( v4 != -1 )
      {
        if ( v4 == -2 )
          Function_2247ae8(v1, 34, 0);
        else
          ++*(uint *)(v1 + 148);
      }
      goto LABEL_14;
    case 4u:
      if ( Function_2039074(*(uint *)(*(uint *)v1 + 4)) )
      {
        Function_2247ae8(v1, 34, 12);
LABEL_14:
        result = 0;
      }
      else
      {
        Function_2246e88(*(uint *)v1, 5, 0);
        Function_2246e9c(*(uint *)v1, 12);
        *(uint *)(v1 + 8) = 29;
        result = 0;
      }
      break;
    default:
      goto LABEL_14;
  }
  return result;
}

//----- (022488F8) --------------------------------------------------------
int __fastcall Function_22488f8(int *a1)
{
  int *v1;
  int v2;

  v1 = a1;
  v2 = Function_2002114(a1[34], 0x6Du);
  if ( v2 != -1 )
  {
    if ( v2 == -2 )
    {
      Function_203859c();
      Function_2246e88(*v1, 6, 0);
      v1[2] = 29;
    }
    else
    {
      Function_2249714(v1, v1[11], 1, 1, 3855);
      Function_2247ae8((int)v1, 34, 12);
      Function_2247af0((int)v1);
    }
  }
  return 0;
}

//----- (02248954) --------------------------------------------------------
int __fastcall Function_2248954(int a1)
{
  int v1;

  v1 = a1;
  Function_2249714(a1, *(uint *)(a1 + 48), 26, 1, 3855);
  Function_2247ae8(v1, 34, 10);
  return 0;
}

//----- (0224897C) --------------------------------------------------------
int __fastcall Function_224897c(uint *a1)
{
  uint *v1;
  uint v2;

  v1 = a1;
  v2 = Function_203859c();
  ((void (__fastcall *)(uint))dword_21D7DB0[0])(v2);
  Function_2039794();
  Function_2017b8c(4);
  if ( *(uint *)(*v1 + 280) == 1 )
  {
    ((void (*)(void))dword_223B7AC[0])();
    *(uint *)(*v1 + 280) = 0;
  }
  v1[2] = 11;
  return 0;
}

//----- (022489B4) --------------------------------------------------------
int __fastcall Function_22489b4(int a1)
{
  int v1;

  v1 = a1;
  Function_2249714(a1, *(uint *)(a1 + 48), 27, 1, 3855);
  Function_2247ae8(v1, 35, 29);
  return 0;
}

//----- (022489DC) --------------------------------------------------------
int __fastcall Function_22489dc(uint *a1)
{
  uint *v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = a1[37];
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      if ( !Function_224977c(v1[17]) )
        ++v1[37];
    }
    else if ( v2 == 2 )
    {
      Function_2017b7c(4);
      ((void (__fastcall *)(int, int, int, int))dword_21D78C8[0])(*v1 + 20, 2, 1, 20);
      v3 = ((int (__fastcall *)(int))dword_21D792C[0])(2);
      ((void (__fastcall *)(int))dword_21D797C[0])(v3);
      v1[2] = 13;
    }
  }
  else
  {
    Function_2038548(*(uint *)(*v1 + 4));
    Function_2039734();
    Function_2249714(v1, v1[11], 1, 1, 3855);
    Function_2247af0((int)v1);
    ++v1[37];
  }
  return 0;
}

//----- (02248A68) --------------------------------------------------------
int __fastcall Function_2248a68(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  char v5;
  int v6;
  int v7;
  char v8;

  v1 = a1;
  v2 = ((int (*)(void))dword_21D7AE4[0])();
  if ( ((int (__fastcall *)(int))dword_21D7A8C[0])(v2) )
  {
    switch ( ((uchar (*)(void))dword_21D7BFC[0])() )
    {
      case 4u:
        ((void (__fastcall *)(char *))dword_21D7EB8[0])(&v8);
        v1[2] = 14;
        break;
      case 7u:
        v1[5] = ((int (__fastcall *)(int *, int *))dword_21D75F4[0])(&v7, &v6);
        v1[6] = v7;
        v1[7] = v6;
        v3 = ((int (*)(void))dword_21D76E8[0])();
        ((void (__fastcall *)(int))dword_21D7DB0[0])(v3);
        Function_2039794();
        Function_203859c();
        Function_2017b8c(4);
        if ( *(uint *)(*v1 + 280) == 1 )
        {
          ((void (*)(void))dword_223B7AC[0])();
          *(uint *)(*v1 + 280) = 0;
        }
        Function_2247b0c((int)v1);
        v1[2] = 27;
        break;
      default:
        ((void (__fastcall *)(char *))dword_21D742C[106])(&v5);
        Function_2247b0c((int)v1);
        v1[2] = 32;
        v1[4] = -2;
        break;
    }
  }
  return 0;
}

//----- (02248B14) --------------------------------------------------------
int __fastcall Function_2248b14(int a1)
{
  int v1;

  v1 = a1;
  ((void (*)(void))dword_21D81DC[0])();
  *(uint *)(v1 + 8) = 15;
  return 0;
}

//----- (02248B24) --------------------------------------------------------
int __fastcall Function_2248b24(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;
  int result;
  int v6;
  int v7;

  v1 = a1;
  switch ( ((uchar (*)(void))dword_21D82A0[0])() )
  {
    case 0u:
    case 4u:
    case 5u:
      Function_2247b0c((int)v1);
      v1[5] = ((int (__fastcall *)(int *, int *))dword_21D75F4[0])(&v7, &v6);
      v1[6] = v7;
      v2 = ((int (*)(void))dword_21D76E8[0])();
      ((void (__fastcall *)(int))dword_21D7DB0[0])(v2);
      Function_2039794();
      Function_203859c();
      Function_2017b8c(4);
      if ( *(uint *)(*v1 + 280) == 1 )
      {
        ((void (*)(void))dword_223B7AC[0])();
        v3 = 0;
        *(uint *)(*v1 + 280) = 0;
      }
      v1[2] = 27;
      switch ( (uchar)v6 )
      {
        case 1:
        case 2:
          v1[2] = 27;
          break;
        case 3:
          ((void (*)(void))dword_21D8E8C[0])();
          v1[2] = 27;
          break;
        case 4:
          ((void (*)(void))dword_21E55B0[0])();
          v1[2] = 27;
          break;
        case 5:
        case 7:
          Function_2038a0c(27, v6, v3, v4);
          return result;
        case 6:
          v1[2] = 27;
          break;
        default:
          break;
      }
      if ( v7 < -20000 && v7 >= -29999 )
        v1[2] = 27;
      break;
    case 3u:
      v1[2] = 16;
      break;
    default:
      return 0;
  }
  return 0;
}

//----- (02248BFC) --------------------------------------------------------
int __fastcall Function_2248bfc(uint *a1)
{
  uint *v1;
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

  v1 = a1;
  v2 = LoadVariableAreaAdress_1d(*(uint *)(*a1 + 4));
  v3 = LoadVariableAreaAdress_0(*(uint *)(*v1 + 4));
  Function_202ad28();
  v5 = v4;
  if ( !Function_2025d74(v3) )
  {
    v9 = Function_2039058(v2, v6, v7, v8);
    Function_2025d78(v3, v9);
  }
  v10 = Function_2025d74(v3);
  v11 = Function_20a471c(v5);
  ((void (__fastcall *)(int, int, int))dword_223B140[0])(v10, v11, v12);
  *(uint *)(*v1 + 280) = 1;
  v1[2] = 17;
  return 0;
}

//----- (02248C60) --------------------------------------------------------
int __fastcall Function_2248c60(int *a1)
{
  int *v1;
  int result;

  v1 = a1;
  Function_2246f5c(*a1);
  Function_2246f74(*v1);
  ((void (__fastcall *)(int, int))dword_223BB84[0])(*v1 + 152, *v1 + 252);
  v1[2] = 18;
  result = 0;
  v1[58] = 0;
  return result;
}

//----- (02248C88) --------------------------------------------------------
int __fastcall Function_2248c88(int *a1)
{
  int *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint v8;
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
  int result;

  v1 = a1;
  if ( ((int (*)(void))dword_223B7AC[3])() )
  {
    v4 = ((int (*)(void))dword_223B7AC[11])();
    v7 = v4;
    v1[58] = 0;
    v8 = v4 + 15;
    if ( v8 <= 0x11 )
      JUMPOUT(__CS__, *((short *)&off_2248CBA + v8) + 35949756);
    switch ( (uchar)v8 )
    {
      case 0:
      case 3:
        Function_2247b0c((int)v1);
        v1[4] = v7;
        v1[2] = 32;
        break;
      case 1:
      case 0xD:
        Function_2247b0c((int)v1);
        v1[4] = v7;
        v1[2] = 32;
        break;
      case 0xE:
      case 0x11:
        Function_2247b0c((int)v1);
        v1[4] = v7;
        v1[2] = 32;
        break;
      case 0xF:
        v9 = *v1;
        v10 = *(uint *)(*v1 + 252);
        if ( v10 )
        {
          if ( v10 == 1 )
          {
            Function_2247b0c((int)v1);
            v1[4] = -5004;
            v1[2] = 32;
          }
          else
          {
            if ( v10 != 2 )
            {
              v12 = Function_2247b0c((int)v1);
              Function_2038a0c(v12, v13, v14, v15);
            }
            Function_2247b0c((int)v1);
            v1[4] = -5005;
            v1[2] = 32;
          }
        }
        else
        {
          v11 = *(uint *)(v9 + 256);
          switch ( (uchar)v11 )
          {
            case 0:
              Function_2247b0c((int)v1);
              v1[4] = -5002;
              v1[2] = 32;
              break;
            case 1:
              v1[2] = 19;
              break;
            case 2:
              Function_2247b0c((int)v1);
              v1[4] = -5001;
              v1[2] = 32;
              break;
            case 3:
              Function_2247b0c((int)v1);
              v1[4] = -5003;
              v1[2] = 32;
              break;
            default:
              Function_2038a0c(v11, v9, v5, v6);
              return result;
          }
        }
        break;
      case 0x10:
        Function_2247b0c((int)v1);
        v1[4] = v7;
        v1[2] = 32;
        break;
      default:
        v16 = Function_2247b0c((int)v1);
        Function_2038a0c(v16, v17, v18, v19);
        return result;
    }
  }
  else if ( ++v1[58] == 3600 )
  {
    Function_2038a0c(3600, 3600, v2, v3);
  }
  return 0;
}

//----- (02248DF4) --------------------------------------------------------
int __fastcall Function_2248df4(int a1)
{
  int v1;
  int v2;
  int v4;

  v1 = a1;
  if ( Function_224977c(*(uint *)(a1 + 68)) == 1 )
    return 0;
  switch ( (uchar)*(uint *)(v1 + 148) )
  {
    case 0u:
      Function_2247b0c(v1);
      Function_2249714(v1, *(uint *)(v1 + 52), 13, 1, 3855);
      ++*(uint *)(v1 + 148);
      break;
    case 1u:
      *(uint *)(v1 + 136) = Function_2247b24(*(uint **)(v1 + 4), 13, 564, v2);
      ++*(uint *)(v1 + 148);
      break;
    case 2u:
      v4 = Function_2002114(*(uint *)(v1 + 136), 0x6Du);
      if ( v4 != -1 )
      {
        if ( v4 == -2 )
          *(uint *)(v1 + 8) = 21;
        else
          ++*(uint *)(v1 + 148);
      }
      break;
    case 3u:
      Function_2249714(v1, *(uint *)(v1 + 52), 17, 1, 3855);
      Function_2247ae8(v1, 34, 20);
      break;
    default:
      return 0;
  }
  return 0;
}

//----- (02248EC0) --------------------------------------------------------
int __fastcall Function_2248ec0(int *a1)
{
  int *v1;

  v1 = a1;
  Function_2246e88(*a1, 2, 1);
  Function_2246e9c(*v1, 22);
  v1[2] = 30;
  return 0;
}

//----- (02248EE0) --------------------------------------------------------
int __fastcall Function_2248ee0(int a1)
{
  int v1;
  int v2;
  int v4;
  int v5;

  v1 = a1;
  if ( Function_224977c(*(uint *)(a1 + 68)) == 1 )
    return 0;
  v4 = *(uint *)(v1 + 148);
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      *(uint *)(v1 + 136) = Function_2247b24(*(uint **)(v1 + 4), 13, 564, v2);
      ++*(uint *)(v1 + 148);
    }
    else if ( v4 == 2 )
    {
      v5 = Function_2002114(*(uint *)(v1 + 136), 0x6Du);
      if ( v5 != -1 )
      {
        if ( v5 == -2 )
          *(uint *)(v1 + 8) = 19;
        else
          Function_2247ae8(v1, 26, 0);
      }
    }
  }
  else
  {
    Function_2249714(v1, *(uint *)(v1 + 52), 14, 1, 3855);
    ++*(uint *)(v1 + 148);
  }
  return 0;
}

//----- (02248F7C) --------------------------------------------------------
int __fastcall Function_2248f7c(int *a1)
{
  int *v1;
  int result;
  uint v3;
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

  v1 = a1;
  if ( Function_2246f9c(*a1) == -1 )
  {
    v1[2] = 21;
    result = 0;
  }
  else
  {
    v3 = v1[37];
    if ( v3 <= 3 )
      JUMPOUT(__CS__, *((short *)&off_2248FAE + v3) + 35950512);
    switch ( (uchar)v3 )
    {
      case 0:
        Function_2249714(v1, v1[13], 18, 0, 3855);
        Function_2247af0((int)v1);
        Function_2246f88(*v1);
        ((void (__fastcall *)(int, int))dword_223BB84[0])(*v1 + 152, *v1 + 252);
        ++v1[37];
        break;
      case 1:
        if ( ((int (*)(void))dword_223B7AC[3])() )
        {
          v6 = ((int (*)(void))dword_223B7AC[11])();
          v1[58] = 0;
          Function_2247b0c((int)v1);
          switch ( (uchar)v6 + 15 )
          {
            case 0:
            case 3:
              v1[4] = v6;
              v1[2] = 32;
              break;
            case 1:
            case 13:
              v1[4] = v6;
              v1[2] = 32;
              break;
            case 14:
            case 17:
              v1[4] = v6;
              v1[2] = 32;
              break;
            case 15:
              v10 = *v1;
              v11 = *(uint *)(*v1 + 252);
              if ( v11 )
              {
                if ( v11 == 1 )
                {
                  v1[4] = -5010;
                  v1[2] = 32;
                }
                else
                {
                  if ( v11 != 2 )
                  {
                    v13 = ErrorHandler();
                    Function_2038a0c(v13, v14, v15, v16);
                  }
                  v1[4] = -5011;
                  v1[2] = 32;
                }
              }
              else
              {
                v12 = *(uint *)(v10 + 256);
                switch ( (uchar)v12 )
                {
                  case 0:
                    ++v1[37];
                    break;
                  case 1:
                    v1[4] = -5006;
                    v1[2] = 32;
                    break;
                  case 2:
                    v1[4] = -5007;
                    v1[2] = 32;
                    break;
                  case 3:
                    Function_2249714(v1, v1[13], 19, 1, 3855);
                    Function_2247ae8((int)v1, 34, 21);
                    break;
                  default:
                    Function_2038a0c(v12, v10, v8, v9);
                    return result;
                }
              }
              break;
            case 16:
              v1[4] = v6;
              v1[2] = 32;
              break;
            default:
              Function_2038a0c(v6 + 15, v7, v8, v9);
              return result;
          }
        }
        else if ( ++v1[58] == 3600 )
        {
          Function_2038a0c(3600, 3600, v4, v5);
        }
        return result;
      case 2:
        Function_2249714(v1, v1[13], 20, 1, 3855);
        ++v1[37];
        break;
      case 3:
        if ( !Function_224977c(v1[17]) )
          Function_2247ae8((int)v1, 26, 23);
        break;
      default:
        break;
    }
    result = 0;
  }
  return result;
}

//----- (02249168) --------------------------------------------------------
int __fastcall Function_2249168(int *a1)
{
  int *v1;
  int v3;

  v1 = a1;
  if ( Function_224977c(a1[17]) == 1 )
    return 0;
  v3 = v1[37];
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      Function_2246e88(*v1, 3, 2);
      Function_2246e9c(*v1, 24);
      v1[2] = 30;
    }
  }
  else
  {
    Function_2249714(v1, v1[13], 21, 1, 3855);
    ++v1[37];
  }
  return 0;
}

//----- (022491CC) --------------------------------------------------------
int __fastcall Function_22491cc(int *a1)
{
  int *v1;
  int v3;

  v1 = a1;
  if ( Function_224977c(a1[17]) == 1 )
    return 0;
  v3 = v1[37];
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      Function_2246ef8(*v1);
      Function_2246f24(*v1);
      Function_2246f48(*v1);
      Function_2247ae8((int)v1, 25, 0);
    }
  }
  else
  {
    Function_2249714(v1, v1[13], 24, 1, 3855);
    ++v1[37];
  }
  return 0;
}

//----- (02249238) --------------------------------------------------------
int __fastcall Function_2249238(int *a1)
{
  int *v1;

  v1 = a1;
  switch ( (uchar)a1[37] )
  {
    case 0u:
      Function_2249714(a1, a1[13], 32, 0, 3855);
      Function_2247af0((int)v1);
      ++v1[37];
      break;
    case 1u:
      if ( Function_20246e0(*(uint **)(*a1 + 4)) == 2 )
      {
        LoadTrainerDataAdress(*(uint *)(*v1 + 4));
        Function_200b498(v1[8], 0);
        Function_2249714(v1, v1[13], 33, 0, 3855);
        Function_2005748(0x61Bu);
      }
      else
      {
        Function_2249714(v1, v1[13], 34, 0, 3855);
      }
      Function_2247b0c((int)v1);
      ++v1[37];
      break;
    case 2u:
      if ( !Function_224977c(a1[17]) )
        ++v1[37];
      break;
    case 3u:
      if ( ++a1[38] > 60 )
      {
        a1[38] = 0;
        a1[2] = a1[3];
      }
      break;
    default:
      return 0;
  }
  return 0;
}

//----- (02249320) --------------------------------------------------------
int __fastcall Function_2249320(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( Function_224977c(a1[17]) == 1 )
    return 0;
  switch ( (uchar)v1[37] )
  {
    case 0u:
      Function_2249714(v1, v1[13], 15, 1, 3855);
      ++v1[37];
      break;
    case 1u:
      ((void (*)(void))dword_21D7DB0[0])();
      Function_2039794();
      Function_203859c();
      Function_2017b8c(4);
      if ( *(uint *)(*v1 + 280) == 1 )
      {
        ((void (*)(void))dword_223B7AC[0])();
        *(uint *)(*v1 + 280) = 0;
      }
      ++v1[37];
      break;
    case 2u:
      if ( !Function_224977c(v1[17]) )
      {
        Function_2249714(v1, v1[13], 16, 1, 3855);
        ++v1[37];
      }
      break;
    case 3u:
      if ( !Function_224977c(v1[17]) )
        ++v1[37];
      break;
    case 4u:
      if ( ++v1[36] > 30 )
        v1[2] = v1[3];
      break;
    default:
      return 0;
  }
  return 0;
}

//----- (02249414) --------------------------------------------------------
int __fastcall Function_2249414(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = ((int (__fastcall *)(int, uint))dword_21D1E30[67])(-*(uint *)(a1 + 24), *(uint *)(a1 + 28));
  Function_2249964(v1, v2, -*(uint *)(v1 + 24));
  *(uint *)(v1 + 8) = 28;
  return 0;
}

//----- (02249438) --------------------------------------------------------
int __fastcall Function_2249438(int a1)
{
  int v1;

  v1 = a1;
  if ( dword_21BF6C4 & 1 || dword_21BF6C4 & 2 )
  {
    Function_200dc9c(a1 + 104, 0);
    *(uint *)(v1 + 8) = 0;
  }
  return 0;
}

//----- (02249464) --------------------------------------------------------
int __fastcall Function_2249464(int a1)
{
  int v1;

  v1 = a1;
  if ( *(uint *)(a1 + 8) != 30 )
    Function_203859c();
  Function_2039794();
  Function_2247b0c(v1);
  Function_200f174(0, 0, 0, 0, 6, 1, 109);
  *(uint *)(v1 + 8) = 0;
  return 1;
}

//----- (022494A0) --------------------------------------------------------
int __fastcall Function_22494a0(int a1, int a2, int a3, int a4)
{
  int v4;

  v4 = a1;
  *(uint *)(a1 + 136) = Function_2247b24(*(uint **)(a1 + 4), 13, 564, a4);
  *(uint *)(v4 + 8) = *(uint *)(v4 + 12);
  return 0;
}

//----- (022494C0) --------------------------------------------------------
int __fastcall Function_22494c0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = 0;
  v3 = *(uint *)(a1 + 16);
  if ( v3 > -5 )
  {
    if ( v3 > -1 )
    {
      if ( v3 <= 1 )
      {
        if ( v3 == 1 )
        {
          v4 = 54;
          goto LABEL_33;
        }
        goto LABEL_23;
      }
      if ( v3 != 2 )
      {
LABEL_23:
        v4 = 56;
        goto LABEL_33;
      }
    }
    else if ( v3 < -1 )
    {
      if ( v3 <= -3 || v3 != -2 )
        goto LABEL_23;
      goto LABEL_22;
    }
    v4 = 55;
    goto LABEL_33;
  }
  if ( v3 >= -5 )
    goto LABEL_23;
  if ( v3 > -15 )
  {
    if ( v3 > -14 || v3 != -14 )
      goto LABEL_23;
LABEL_22:
    v4 = 57;
    goto LABEL_33;
  }
  if ( v3 >= -15 )
    goto LABEL_23;
  switch ( (uchar)v3 )
  {
    case 0x6D:
      v4 = 176;
      v2 = 1;
      break;
    case 0x6E:
      v4 = 175;
      v2 = 1;
      break;
    case 0x71:
      v4 = 174;
      v2 = 1;
      break;
    case 0x72:
      v4 = 174;
      v2 = 1;
      break;
    case 0x73:
      v4 = 176;
      v2 = 1;
      break;
    case 0x74:
      v4 = 175;
      v2 = 1;
      break;
    case 0x75:
      v4 = 174;
      v2 = 1;
      break;
    case 0x76:
      v4 = 174;
      v2 = 1;
      break;
    case 0x77:
      v4 = 173;
      v2 = 1;
      break;
    default:
      goto LABEL_23;
  }
LABEL_33:
  if ( v2 )
    Function_2249714(v1, *(uint *)(v1 + 36), v4, 1, 3855);
  else
    Function_2249714(v1, *(uint *)(v1 + 52), v4, 1, 3855);
  Function_2247ae8(v1, 34, 33);
  return 0;
}

//----- (022495C4) --------------------------------------------------------
int __fastcall Function_22495c4(int *a1)
{
  int *v1;
  uint v2;

  v1 = a1;
  switch ( (uchar)a1[37] )
  {
    case 0u:
      Function_2249714(a1, a1[13], 15, 1, 3855);
      ++v1[37];
      break;
    case 1u:
      if ( !Function_224977c(a1[17]) )
      {
        v2 = Function_203859c();
        ((void (__fastcall *)(uint))dword_21D7DB0[0])(v2);
        Function_2039794();
        Function_2017b8c(4);
        if ( *(uint *)(*v1 + 280) == 1 )
        {
          ((void (*)(void))dword_223B7AC[0])();
          *(uint *)(*v1 + 280) = 0;
        }
        ++v1[37];
      }
      break;
    case 2u:
      Function_2249714(a1, a1[13], 16, 1, 3855);
      ++v1[37];
      break;
    case 3u:
      if ( !Function_224977c(a1[17]) )
        ++v1[37];
      break;
    default:
      if ( ++a1[36] > 30 )
      {
        Function_2246e94(*a1);
        v1[2] = 29;
      }
      break;
  }
  return 0;
}

//----- (022496A8) --------------------------------------------------------
int __fastcall Function_22496a8(int a1)
{
  int v1;

  v1 = a1;
  if ( !Function_224977c(*(uint *)(a1 + 68)) )
    *(uint *)(v1 + 8) = *(uint *)(v1 + 12);
  return 0;
}

//----- (022496C0) --------------------------------------------------------
int __fastcall Function_22496c0(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( !Function_224977c(a1[17]) )
  {
    if ( v1[36] > 30 )
      v1[2] = v1[3];
    ++v1[36];
  }
  return 0;
}

//----- (022496EC) --------------------------------------------------------
int __fastcall Function_22496ec(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  if ( !Function_224977c(*(uint *)(a1 + 68)) )
  {
    *(uint *)(v1 + 136) = Function_2247b24(*(uint **)(v1 + 4), 13, 564, v2);
    *(uint *)(v1 + 8) = *(uint *)(v1 + 12);
  }
  return 0;
}

//----- (02249714) --------------------------------------------------------
int __fastcall Function_2249714(int a1, ushort **a2, uint a3, int a4)
{
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;
  int result;

  v4 = a1;
  v5 = a4;
  v6 = Function_200b1ec_CallMsgDecrypt(a2, a3);
  Function_200c388(*(uint **)(v4 + 32), *(uint *)(v4 + 56), (int)v6);
  Function_20237bc_FreeMsg((int)v6, v7);
  Function_201ada4_ClearTextBox(v4 + 72, 15);
  Function_200e060(v4 + 72, 0, 1, 0xAu);
  v8 = *(uint *)(v4 + 56);
  *(uint *)(v4 + 68) = Function_201d738_CallInitTextInterpreter(v4 + 72, 1);
  result = v4 + 144;
  *(uint *)(v4 + 144) = 0;
  if ( v5 == 255 || !v5 )
  {
    result = 255;
    *(uint *)(v4 + 68) = 255;
  }
  return result;
}

//----- (0224977C) --------------------------------------------------------
BOOL __fastcall Function_224977c(int a1)
{
  return a1 != 255 && Function_201d724((uchar)a1);
}

//----- (02249798) --------------------------------------------------------
int __fastcall Function_2249798(int a1)
{
  int v1;
  int v3;
  uint v4;

  v1 = a1;
  if ( Function_224977c(*(uint *)(a1 + 68)) == 1 )
    return 0;
  v3 = *(uint *)(v1 + 148);
  if ( v3 )
  {
    if ( v3 == 1 )
      *(uint *)(v1 + 8) = 5;
  }
  else
  {
    if ( Function_2246fb4(*(uint *)v1) == 2 )
      v4 = 38;
    else
      v4 = 39;
    Function_2249714(v1, *(ushort ***)(v1 + 52), v4, 1);
    ++*(uint *)(v1 + 148);
  }
  return 0;
}

//----- (022497F8) --------------------------------------------------------
int __fastcall Function_22497f8(int *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v7;
  int v8;
  int v9;
  uint v10;
  int *v11;
  uint v12;
  char v13;
  int v14;

  v14 = a4;
  v4 = (int)a1;
  v5 = *a1;
  if ( Function_224977c(a1[17]) == 1 )
    return 0;
  v7 = *(uint *)(v4 + 148);
  if ( v7 )
  {
    if ( v7 == 1 )
      *(uint *)(v4 + 8) = 0;
  }
  else
  {
    v8 = Function_2246fa4(v5);
    if ( v8 == Function_2030d98(*(uint *)(v5 + 4), 3u) )
    {
      v9 = LoadVariableAreaAdress_23(*(uint *)(v5 + 4));
      Function_2249acc(v9, &v13, 108);
      v10 = 0;
      v11 = (int *)&v13;
      do
      {
        Function_200b60c(*(uint *)(v4 + 32), v10++, *v11, 4, 2, 1);
        ++v11;
      }
      while ( v10 < 4 );
      v12 = 41;
    }
    else
    {
      v12 = 40;
    }
    Function_2249714(v4, *(ushort ***)(v4 + 52), v12, 1);
    ++*(uint *)(v4 + 148);
  }
  return 0;
}

//----- (02249894) --------------------------------------------------------
int __fastcall Function_2249894(int a1, int a2, int a3, int a4, int a5, int a6)
{
  if ( a4 == 1 )
    return (8 * *(uchar *)(a1 + 7) - Function_2002d7c(a6, a2, 0)) / 2;
  if ( a4 == 2 )
    a3 = 8 * *(uchar *)(a1 + 7) - Function_2002d7c(a6, a2, 0);
  return a3;
}

//----- (022498CC) --------------------------------------------------------
int __fastcall Function_22498cc(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6;

  v6 = a1;
  Function_2249894(a1, a2, a3, a5, a6, 1);
  return Function_201d78c(v6, 1);
}

//----- (02249900) --------------------------------------------------------
uint __fastcall Function_2249900(int a1, uint a2)
{
  int v2;
  uint v3;
  ushort *v4;
  int v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = (ushort *)Function_2023790(256, 0x6Du);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v2 + 48), v3, v4);
  Function_200c388(*(uint **)(v2 + 32), *(uint *)(v2 + 64), (int)v4);
  Function_201ada4_ClearTextBox(v2 + 104, 15);
  Function_200dc48(v2 + 104, 1, 31, 0xBu);
  v5 = *(uint *)(v2 + 64);
  Function_201d738_CallInitTextInterpreter(v2 + 104, 1);
  *(uint *)(v2 + 68) = 255;
  return Function_20237bc_FreeMsg((int)v4, v6);
}

//----- (02249964) --------------------------------------------------------
uint __fastcall Function_2249964(int a1, uint a2, int a3)
{
  int v3;
  uint v4;

  v3 = a1;
  v4 = a2;
  if ( a2 == -1 )
    v4 = 11;
  Function_200b60c(*(uint *)(a1 + 32), 0, a3, 5, 2, 1);
  Function_200e084(v3 + 72, 1);
  return Function_2249900(v3, v4);
}

//----- (022499A0) --------------------------------------------------------
int __fastcall Function_22499a0(int a1, int a2, int a3)
{
  int result;

  if ( !a3 )
    result = Function_2005748(0x5DCu);
  return result;
}

//----- (022499B4) --------------------------------------------------------
int __fastcall Function_22499b4(int a1, int a2, int a3)
{
  int result;

  if ( !a3 )
    result = Function_2005748(0x5DCu);
  return result;
}

//----- (022499C8) --------------------------------------------------------
uint __fastcall Function_22499c8(int a1, int a2, uint a3)
{
  uint v3;
  int v4;
  int v5;
  int *v6;
  int v7;
  char v8;
  ushort *v9;
  int v10;
  int v11;
  short *v12;
  uint v13;
  const char *v14;
  char v15;
  int v17;
  ushort *v18;

  v3 = a3;
  v4 = 0;
  v5 = a2;
  v6 = &dword_2249D1C;
  v17 = a1;
  v7 = 0;
  do
  {
    v8 = *((uchar *)&dword_2249D1C + v7);
    v6 = (int *)((char *)v6 + 1);
    ++v7;
    *(uchar *)(v5 + v4++) = v8;
  }
  while ( *(uchar *)v6 );
  v18 = (ushort *)malloc(v3, 200);
  Function_2023df0(v17, v18, 0x64u);
  v9 = v18;
  v10 = 0;
  while ( *v9 != 0xFFFF )
  {
    v12 = word_2249D2C;
    v13 = 0;
    while ( (ushort)*v12 != v18[v10] )
    {
      ++v13;
      v12 += 2;
      if ( v13 >= 0xA )
        goto LABEL_10;
    }
    *(uchar *)(v5 + v4) = word_2249D2C[2 * v13 + 1];
LABEL_10:
    if ( v13 >= 0xA )
      ErrorHandler();
    ++v4;
    ++v9;
    ++v10;
  }
  v11 = 0;
  *(uchar *)(v5 + v4) = 0;
  v14 = "@wii.com";
  do
  {
    v15 = aWiiCom[v11];
    ++v14;
    ++v11;
    *(uchar *)(v5 + v4++) = v15;
  }
  while ( *v14 );
  *(uchar *)(v5 + v4) = 0;
  return free((int)v18);
}

//----- (02249A80) --------------------------------------------------------
int __fastcall Function_2249a80(int a1, uint a2)
{
  int v2;
  int v3;
  uchar *v4;
  ushort *v5;

  v2 = a1;
  v3 = 1;
  v4 = (uchar *)malloc(a2, 200);
  Function_2023df0(v2, v4, 0x64u);
  if ( *(ushort *)v4 != 0xFFFF )
  {
    v5 = v4;
    while ( *v5 == 289 )
    {
      ++v5;
      if ( (ushort)*v5 == 0xFFFF )
        goto LABEL_6;
    }
    v3 = 0;
  }
LABEL_6:
  free((int)v4);
  return v3;
}

//----- (02249ACC) --------------------------------------------------------
int __fastcall Function_2249acc(int a1, int *a2)
{
  int v2;
  int v3;
  int *v4;
  int v5;
  char *v6;
  int v7;
  int result;
  int i;
  int v10;

  v2 = 0;
  v3 = a1;
  v4 = a2;
  v10 = 0;
  do
  {
    *v4 = 0;
    for ( i = 0; i < 4; ++i )
    {
      while ( 1 )
      {
        v5 = *(char *)(v3 + v2);
        v6 = (char *)(v3 + v2);
        if ( v5 >= 48 && v5 <= 57 )
          break;
        if ( !*(uchar *)(v3 + v2) )
        {
          if ( !*(uchar *)(v3 + v2) )
            ErrorHandler();
          break;
        }
        ++v2;
      }
      v7 = 10 * *v4;
      *v4 = v7;
      ++v2;
      *v4 = v7 + *v6 - 48;
    }
    ++v4;
    result = v10 + 1;
    v10 = result;
  }
  while ( result < 4 );
  return result;
}

