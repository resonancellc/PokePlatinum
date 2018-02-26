//----- (021D0D80) --------------------------------------------------------
int __fastcall MoveTutor_Init(int a1)
{
  int v1;
  int *v2;

  v1 = a1;
  Function_2017fc8(3, 67, 0x20000);
  v2 = (int *)MallocSomeDataAndStorePtrInOverlayData1c(v1, 392, 0x43u);
  Call_FillMemWithValue(v2, 0, 0x188u);
  *v2 = LoadPtrToOverWorldDataIn18(v1);
  Function_21d0ed8(v2);
  Function_21d2548(v2, *(ushort *)(*v2 + 16) & 0xFF, 0);
  Function_21d1c10(v2, 0);
  Function_21d1580(v2, 12, 1, 66063);
  v2[96] = 1;
  Function_201a9a4((int)(v2 + 50));
  Function_21d2594(v2);
  SetMainLoopFunctionCall((int)Function_21d0f9c, (int)v2);
  return 1;
}

//----- (021D0E08) --------------------------------------------------------
int __fastcall MoveTutor_Loop(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int result;

  v2 = a2;
  v3 = LoadOverlayData1c(a1);
  v6 = v3;
  switch ( (uchar)*v2 )
  {
    case 0u:
      *v2 = Function_21d1214();
      goto LABEL_15;
    case 1u:
      *v2 = Function_21d122c();
      goto LABEL_15;
    case 2u:
      *v2 = Function_21d134c();
      goto LABEL_15;
    case 3u:
      *v2 = Function_21d136c();
      goto LABEL_15;
    case 4u:
      *v2 = Function_21d1394();
      goto LABEL_15;
    case 5u:
      *v2 = Function_21d13e4();
      goto LABEL_15;
    case 6u:
      *v2 = Function_21d1438();
      goto LABEL_15;
    case 7u:
      *v2 = Function_21d1450();
      goto LABEL_15;
    case 8u:
      *v2 = Function_21d1480();
      goto LABEL_15;
    case 9u:
      return 1;
    case 0xAu:
      *v2 = Function_21d2604(v3, *v2, v4, v5);
      goto LABEL_15;
    case 0xBu:
      *v2 = Function_21d261c();
      result = 0;
      break;
    case 0xCu:
      *v2 = Function_21d26ac();
      result = 0;
      break;
    default:
LABEL_15:
      Function_21d20e8(v6);
      Function_200c7ec(*(int **)(v6 + 276));
      result = 0;
      break;
  }
  return result;
}

//----- (021D0EBC) --------------------------------------------------------
int __fastcall MoveTutor_End(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  Function_21d0f6c(v2);
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(67);
  return 1;
}

//----- (021D0ED8) --------------------------------------------------------
uint __fastcall Function_21d0ed8(int a1)
{
  int v1;
  int v2;
  int v3;
  int *v4;

  v1 = a1;
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  Function_201ff00();
  Function_201ff68();
  REG_DISPCNT &= 0xFFFFE0FF;
  REG_DISPCNT_SUB &= 0xFFFFE0FF;
  *(uint *)(v1 + 4) = Function_2018340(0x43u);
  Function_208c120(0, 67);
  v4 = LoadFromNARC_8(113, 0x43u, v2, v3);
  Function_21d0fc4();
  Function_21d0fe4(*(uint *)(v1 + 4));
  Function_21d10c8(v1, v4);
  Function_21d2508(v1, v4);
  Function_21d11b8(v1);
  Function_21d1154(v1);
  Function_21d1784(v1);
  Function_21d1498(v1);
  SetMainLoopFunctionCall((int)Function_21d0f9c, v1);
  return Call_FS_CloseFile(v4);
}

//----- (021D0F6C) --------------------------------------------------------
int __fastcall Function_21d0f6c(int a1)
{
  int v1;

  v1 = a1;
  Function_21d1868();
  Function_21d11a0(v1);
  Function_21d1098(*(uint *)(v1 + 4));
  Function_21d11f0(v1);
  Function_21d20b4(v1);
  Function_201dc3c();
  return SetMainLoopFunctionCall(0, 0);
}

//----- (021D0F9C) --------------------------------------------------------
int __fastcall Function_21d0f9c(int a1)
{
  int result;

  Function_201c2b8(*(uint *)(a1 + 4));
  Function_201dcac();
  Function_200c800();
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (021D0FC4) --------------------------------------------------------
char *Function_21d0fc4()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_21D2804;
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

//----- (021D0FE4) --------------------------------------------------------
uint __fastcall Function_21d0fe4(uint *a1)
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

  v1 = a1;
  v24 = 1;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  SetGraphicsModes(&v24);
  v17 = 0;
  v18 = 0;
  v19 = 2048;
  v20 = 0;
  v21 = 2031617;
  v22 = 0;
  v23 = 0;
  Function_20183c4(v1, 0, &v17, 0);
  Function_2019ebc(v1, 0);
  v10 = 0;
  v11 = 0;
  v12 = 2048;
  v13 = 0;
  v14 = 1966081;
  v15 = 256;
  v16 = 0;
  Function_20183c4(v1, 1u, &v10, 0);
  Function_2019ebc(v1, 1u);
  v3 = 0;
  v4 = 0;
  v5 = 4096;
  v6 = 0;
  v7 = 68943875;
  v8 = 512;
  v9 = 0;
  Function_20183c4(v1, 2u, &v3, 0);
  Function_2019ebc(v1, 2u);
  return Function_2019690(0, 32, 0, 0x43u);
}

//----- (021D1098) --------------------------------------------------------
uint __fastcall Function_21d1098(int a1)
{
  int v1;

  v1 = a1;
  Function_201ff0c(0x17u, 0);
  Function_2019044(v1, 2);
  Function_2019044(v1, 1);
  Function_2019044(v1, 0);
  return Function_2018238(0x43u, v1);
}

//----- (021D10C8) --------------------------------------------------------
int __fastcall Function_21d10c8(uint **a1, int a2)
{
  uint **v2;
  int v3;
  uchar v4;

  v2 = a1;
  v3 = a2;
  Function_20070e8(a2, 0xAu, a1[1], 2u, 0, 0, 0, 67);
  Function_200710c(v3, 0xBu, v2[1], 2u, 0, 0, 0, 67);
  Function_2007130(v3, 0xCu, 0, 0, 0, 67);
  LoadFromNARC_PlFont2(0, 448, 67);
  Function_200daa4(v2[1], 0, 1, 12, 0, 67);
  v4 = Function_2027b50((ushort *)(*v2)[2]);
  return Function_200dd0c(v2[1], 0, 10, 13, v4, 67);
}

//----- (021D1154) --------------------------------------------------------
uint __fastcall Function_21d1154(int a1)
{
  int v1;
  uchar *v2;
  uint v3;
  int v4;

  v1 = a1;
  v2 = (uchar *)dword_21D2884;
  v3 = 0;
  v4 = a1 + 8;
  do
  {
    Function_201a8d4(*(uint **)(v1 + 4), v4, v2);
    Function_201ada4_ClearTextBox(v4, 0);
    ++v3;
    v2 += 8;
    v4 += 16;
  }
  while ( v3 < 0xF );
  Function_21d1664(v1);
  Function_201ada4_ClearTextBox(v1 + 200, 15);
  return Function_200e060(v1 + 200, 0, 10, 0xDu);
}

//----- (021D11A0) --------------------------------------------------------
uint __fastcall Function_21d11a0(int a1)
{
  uint v1;
  int v2;
  uint result;

  v1 = 0;
  v2 = a1 + 8;
  do
  {
    result = Function_201a8fc(v2);
    ++v1;
    v2 += 16;
  }
  while ( v1 < 0xF );
  return result;
}

//----- (021D11B8) --------------------------------------------------------
int __fastcall Function_21d11b8(int a1)
{
  int v1;
  int result;

  v1 = a1;
  *(uint *)(a1 + 248) = LoadFromMsgNARC(0, 26, 645, 0x43u);
  *(uint *)(v1 + 252) = Function_200b358(0x43u);
  result = Function_2023790(256, 0x43u);
  *(uint *)(v1 + 256) = result;
  return result;
}

//----- (021D11F0) --------------------------------------------------------
uint __fastcall Function_21d11f0(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  Function_200b190(*(ushort **)(a1 + 248));
  Function_200b3f0(*(uint **)(v1 + 252), v2);
  return Function_20237bc_FreeMsg(*(uint *)(v1 + 256), v3);
}

//----- (021D1214) --------------------------------------------------------
int __fastcall Function_21d1214(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( Function_200f2ac() == 1 )
    result = *(uint *)(v1 + 384);
  else
    result = 0;
  return result;
}

//----- (021D122C) --------------------------------------------------------
int __fastcall Function_21d122c(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int result;
  int v6;
  int v7;
  char v8;
  int v9;

  v9 = a4;
  v4 = a1;
  if ( dword_21BF6C4 & 0x30 )
  {
    Function_2005748(0x5DDu);
    *(uchar *)(*v4 + 20) ^= 1u;
    Function_21d1498(v4);
    result = 1;
  }
  else
  {
    Function_20014dc(a1[65], (ushort *)&v9 + 1, &v9);
    v6 = Function_2001288(v4[65]);
    Function_20014dc(v4[65], (ushort *)(*v4 + 18), (ushort *)(*v4 + 16));
    Function_21d237c(v4, HIWORD(v9), *(ushort *)(*v4 + 18));
    v7 = *(ushort *)(*v4 + 16);
    if ( v7 != (ushort)v9 )
      Function_21d2548(v4, (uchar)v7, 0);
    Function_21d2594(v4);
    if ( v6 == -2 )
    {
      Function_2005748(0x5DDu);
      Function_21d2548(v4, *(ushort *)(*v4 + 16) & 0xFF, 1);
      Function_21d25e4(v4);
      Function_21d1df8(v4, 2);
      *((uchar *)v4 + 390) = 1;
      v4[96] = 3;
      result = 2;
    }
    else if ( v6 == -1 )
    {
      result = 1;
    }
    else
    {
      Function_2005748(0x5DDu);
      Function_21d2548(v4, *(ushort *)(*v4 + 16) & 0xFF, 1);
      Function_21d25e4(v4);
      if ( (uint)Function_21d1ea0(v4) >= 4 )
      {
        Function_21d1df8(v4, 4);
        v8 = 2;
      }
      else
      {
        Function_21d1df8(v4, 1);
        v8 = 0;
      }
      *((uchar *)v4 + 390) = v8;
      v4[96] = 3;
      result = 2;
    }
  }
  return result;
}

//----- (021D134C) --------------------------------------------------------
int __fastcall Function_21d134c(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( Function_201d724(*(uchar *)(a1 + 389)) )
    result = 2;
  else
    result = *(uint *)(v1 + 384);
  return result;
}

//----- (021D136C) --------------------------------------------------------
int __fastcall Function_21d136c(int a1)
{
  *(uint *)(a1 + 268) = Function_2002100(*(uint **)(a1 + 4), (uchar *)dword_21D28F4, 1, 12, 0x43u);
  return 4;
}

//----- (021D1394) --------------------------------------------------------
int __fastcall Function_21d1394(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_2002114(*(uint *)(a1 + 268), 0x43u);
  if ( !v2 )
    return ((int (__fastcall *)(int))*(&off_21D27DC + 2 * *(uchar *)(v1 + 390)))(v1);
  if ( v2 == -2 )
    return ((int (__fastcall *)(int))*(&off_21D27E0 + 2 * *(uchar *)(v1 + 390)))(v1);
  return 4;
}

//----- (021D13E4) --------------------------------------------------------
int __fastcall Function_21d13e4(int **a1, int a2, int a3, int a4)
{
  int **v4;
  int v5;
  uint v7;
  int v8;

  v8 = a4;
  v4 = a1;
  v7 = ((int (*)(void))Function_21d1dd0)();
  SetPkmnData(**v4, *((uchar *)*v4 + 23) + 54, (ushort *)&v7);
  v7 = 0;
  SetPkmnData(**v4, *((uchar *)*v4 + 23) + 62, (ushort *)&v7);
  v5 = Function_21d1dd0(v4);
  v7 = CalcMovePP(v5, 0);
  SetPkmnData(**v4, *((uchar *)*v4 + 23) + 58, (ushort *)&v7);
  *((uchar *)*v4 + 22) = 0;
  return 8;
}

//----- (021D1438) --------------------------------------------------------
int __fastcall Function_21d1438(int a1)
{
  int v1;

  v1 = a1;
  Function_21d1df8(a1, 6);
  *(uint *)(v1 + 384) = 5;
  return 2;
}

//----- (021D1450) --------------------------------------------------------
int __fastcall Function_21d1450(int a1)
{
  int v1;
  char v2;

  v1 = a1;
  if ( *(uchar *)(*(uint *)a1 + 23) >= 4u )
  {
    Function_21d1df8(a1, 7);
    v2 = 3;
  }
  else
  {
    Function_21d1df8(a1, 10);
    v2 = 4;
  }
  *(uchar *)(v1 + 390) = v2;
  *(uint *)(v1 + 384) = 3;
  return 2;
}

//----- (021D1480) --------------------------------------------------------
int __fastcall Function_21d1480(int a1)
{
  int v1;

  v1 = a1;
  Function_208c120(1, 67);
  *(uint *)(v1 + 384) = 9;
  return 0;
}

//----- (021D1498) --------------------------------------------------------
int __fastcall Function_21d1498(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = Function_21d1dd0(a1);
  v3 = *(uint *)(v1 + 4);
  if ( *(uchar *)(*(uint *)v1 + 20) )
  {
    Function_201c63c(v3, 2, 0, 256);
    Function_201ad10(v1 + 8);
    Function_201ad10(v1 + 40);
    Function_201ad10(v1 + 56);
    Function_201ad10(v1 + 72);
    Function_201ad10(v1 + 88);
    Function_201ad10(v1 + 168);
    Function_201ad10(v1 + 120);
    Function_201ad10(v1 + 136);
    Function_201ad10(v1 + 152);
    Function_201a9a4(v1 + 24);
    if ( v2 == 0xFFFF )
      Function_21d1a68(v1, -2);
    else
      Function_21d1a68(v1, v2);
    Function_200d3f4(*(uint **)(v1 + 300), 0);
  }
  else
  {
    Function_201c63c(v3, 2, 0, 0);
    Function_201ad10(v1 + 24);
    Function_201ad10(v1 + 104);
    Function_201ad10(v1 + 184);
    Function_201a9a4(v1 + 8);
    if ( v2 == 0xFFFF )
      Function_21d18c8(v1, -2);
    else
      Function_21d18c8(v1, v2);
  }
  return Function_21d2314(v1);
}

//----- (021D1580) --------------------------------------------------------
int __fastcall Function_21d1580(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v11;

  v5 = a1;
  v6 = a2;
  v11 = a3;
  if ( a5 )
  {
    if ( a5 == 1 )
    {
      v7 = (uchar)Function_2002d7c(0, *(uint *)(a1 + 256), 0);
      Function_201c294(v5 + 8 + 16 * v6);
    }
    else if ( a5 == 2 )
    {
      v8 = (uchar)Function_2002d7c(0, *(uint *)(a1 + 256), 0);
      Function_201c294(v5 + 8 + 16 * v6);
    }
  }
  v9 = *(uint *)(v5 + 256);
  return Function_201d78c(v5 + 8 + 16 * v6, v11);
}

//----- (021D1618) --------------------------------------------------------
uint __fastcall Function_21d1618(int a1, uint a2, int a3, int a4, uchar a5)
{
  int v5;
  int v6;
  int v7;
  ushort *v8;
  int v9;

  v5 = a1;
  v6 = a3;
  v7 = a4;
  v8 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 248), a2);
  Function_200b60c(*(uint *)(v5 + 252), 0, v6, v7, a5, 1);
  Function_200c388(*(uint **)(v5 + 252), *(uint *)(v5 + 256), (int)v8);
  return Function_20237bc_FreeMsg((int)v8, v9);
}

//----- (021D1664) --------------------------------------------------------
int __fastcall Function_21d1664(int a1)
{
  int v1;

  v1 = a1;
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(a1 + 248), 0x1Au, *(ushort **)(a1 + 256));
  Function_21d1580(v1, 0, 0, 986624, 2);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 248), 0x1Cu, *(ushort **)(v1 + 256));
  Function_21d1580(v1, 1, 0, 986624, 2);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 248), 0x16u, *(ushort **)(v1 + 256));
  Function_21d1580(v1, 2, 0, 986624, 0);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 248), 0x17u, *(ushort **)(v1 + 256));
  Function_21d1580(v1, 3, 0, 986624, 0);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 248), 0x18u, *(ushort **)(v1 + 256));
  Function_21d1580(v1, 4, 0, 986624, 0);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 248), 0x19u, *(ushort **)(v1 + 256));
  Function_21d1580(v1, 5, 0, 66048, 0);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 248), 0x1Bu, *(ushort **)(v1 + 256));
  return Function_21d1580(v1, 6, 0, 986624, 2);
}

//----- (021D175C) --------------------------------------------------------
uint __fastcall Function_21d175c(int a1)
{
  ushort *v1;
  uint v2;

  v1 = *(ushort **)(*(uint *)a1 + 12);
  v2 = 0;
  do
  {
    if ( *v1 == 0xFFFF )
      break;
    ++v2;
    ++v1;
  }
  while ( v2 < 0x100 );
  return v2;
}

//----- (021D1784) --------------------------------------------------------
int __fastcall Function_21d1784(int a1, int a2, int a3, int a4)
{
  int v4;
  ushort **v5;
  uint v6;
  int v7;
  uint v8;
  int v10;
  int (*v11)();
  int (*v12)();
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;

  v18 = a4;
  v4 = a1;
  *(uchar *)(a1 + 388) = Function_21d175c(a1) + 1;
  *(uint *)(v4 + 264) = Function_2013a04(*(uchar *)(v4 + 388), 0x43u);
  v5 = (ushort **)LoadFromMsgNARC(0, 26, 647, 0x43u);
  v6 = 0;
  if ( *(uchar *)(v4 + 388) )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = *(ushort *)(*(uint *)(*(uint *)v4 + 12) + v7);
      if ( v8 == 0xFFFF )
        break;
      Function_2013a4c(*(uint **)(v4 + 264), v5, v8, *(ushort *)(*(uint *)(*(uint *)v4 + 12) + v7));
      ++v6;
      v7 += 2;
      if ( v6 >= *(uchar *)(v4 + 388) )
        goto LABEL_7;
    }
    Function_2013a4c(*(uint **)(v4 + 264), *(ushort ***)(v4 + 248), 0x20u, -2);
  }
LABEL_7:
  Function_200b190((ushort *)v5);
  v10 = 0;
  v11 = Function_21d188c;
  v12 = Function_21d18c4;
  v13 = 0;
  v14 = 458752;
  v15 = 268435968;
  v16 = -2147483616;
  v17 = 0;
  v10 = *(uint *)(v4 + 264);
  v13 = v4 + 216;
  LOWORD(v14) = *(uchar *)(v4 + 388);
  v17 = v4;
  *(uint *)(v4 + 260) = Function_200112c(&v10, *(ushort *)(*(uint *)v4 + 18), *(ushort *)(*(uint *)v4 + 16), 0x43u);
  return Function_201a9a4(v4 + 216);
}

//----- (021D1868) --------------------------------------------------------
uint __fastcall Function_21d1868(int *a1)
{
  int *v1;

  v1 = a1;
  Function_2001384(a1[65], (ushort *)(*a1 + 18), (ushort *)(*a1 + 16));
  return Function_2013a3c((int *)v1[66]);
}

//----- (021D188C) --------------------------------------------------------
int __fastcall Function_21d188c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  uint v5;
  int result;

  v3 = a2;
  v4 = a3;
  v5 = Function_2001504(a1, 0x13u);
  if ( v4 != 1 )
    Function_2005748(0x5DDu);
  if ( *(uchar *)(*(uint *)v5 + 20) )
    result = Function_21d1a68(v5, v3);
  else
    result = Function_21d18c8(v5, v3);
  return result;
}

//----- (021D18C4) --------------------------------------------------------
void Function_21d18c4()
{
  ;
}

//----- (021D18C8) --------------------------------------------------------
int __fastcall Function_21d18c8(int a1, uint a2)
{
  int v2;
  uint v3;
  uint v4;
  int v5;
  int v6;
  ushort **v7;

  v2 = a1;
  v3 = a2;
  Function_201ada4_ClearTextBox(a1 + 168, 0);
  Function_201ada4_ClearTextBox(v2 + 120, 0);
  Function_201ada4_ClearTextBox(v2 + 136, 0);
  Function_201ada4_ClearTextBox(v2 + 152, 0);
  Function_200d3f4(*(uint **)(v2 + 300), 0);
  if ( v3 == -2 )
  {
    Function_201ad10(v2 + 40);
    Function_201ad10(v2 + 56);
    Function_201ad10(v2 + 72);
    Function_201ad10(v2 + 88);
  }
  else
  {
    v4 = LoadMoveData(v3, 2u);
    if ( v4 > 1 )
      Function_21d1618(v2, 0x1Du, v4, 3, 1u);
    else
      Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v2 + 248), 0x21u, *(ushort **)(v2 + 256));
    Function_21d1580(v2, 7, 0, 66048, 2);
    v5 = LoadMoveData(v3, 4u);
    if ( v5 )
      Function_21d1618(v2, 0x1Eu, v5, 3, 1u);
    else
      Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v2 + 248), 0x21u, *(ushort **)(v2 + 256));
    Function_21d1580(v2, 8, 0, 66048, 2);
    v6 = CalcMovePP((ushort)v3, 0);
    Function_21d1618(v2, 0x1Fu, v6, 2, 0);
    Function_21d1580(v2, 9, 0, 66048, 2);
    v7 = (ushort **)LoadFromMsgNARC(1, 26, 646, 0x43u);
    Function_200b1b8_CallMsgDecrypt(v7, v3, *(ushort **)(v2 + 256));
    Function_21d1580(v2, 10, 0, 66048, 0);
    Function_200b190((ushort *)v7);
    Function_21d24b4(v2, (ushort)v3);
    Function_200d3f4(*(uint **)(v2 + 300), 1);
    Function_201a9a4(v2 + 40);
    Function_201a9a4(v2 + 56);
    Function_201a9a4(v2 + 72);
    Function_201a9a4(v2 + 88);
  }
  Function_201a9a4(v2 + 168);
  Function_201a9a4(v2 + 120);
  Function_201a9a4(v2 + 136);
  return Function_201a9a4(v2 + 152);
}

//----- (021D1A68) --------------------------------------------------------
int __fastcall Function_21d1a68(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint v5;
  ushort **v6;
  int v7;

  v2 = a1;
  v3 = a2;
  Function_201ada4_ClearTextBox(a1 + 184, 0);
  if ( v3 == -2 )
  {
    Function_21d1bbc(v2, 0xFFFF);
    Function_201ad10(v2 + 104);
  }
  else
  {
    v4 = LoadMoveData(v3, 0xAu);
    v5 = Function_209577c(v4);
    v6 = (ushort **)LoadFromMsgNARC(0, 26, 210, 0x43u);
    Function_200b1b8_CallMsgDecrypt(v6, v5, *(ushort **)(v2 + 256));
    v7 = *(uint *)(v2 + 256);
    Function_201d78c(v2 + 184, 0);
    Function_200b190((ushort *)v6);
    Function_21d1bbc(v2, (ushort)v3);
    Function_201a9a4(v2 + 104);
  }
  return Function_201a9a4(v2 + 184);
}

//----- (021D1B00) --------------------------------------------------------
char *__fastcall Function_21d1b00(int a1, short a2, int a3)
{
  int v3;
  uchar v4;
  short v5;
  int v6;

  v3 = a1;
  v4 = 2 * a3;
  v5 = a2;
  v6 = 2 * a3 + 34;
  Function_2019cb8(*(uint *)(a1 + 4), 2, a2, (uchar)v6, 5u, 1u, 1u, 0x10u);
  v4 += 35;
  Function_2019cb8(*(uint *)(v3 + 4), 2, v5 + 1, v4, 5u, 1u, 1u, 0x10u);
  Function_2019cb8(*(uint *)(v3 + 4), 2, v5 + 32, (uchar)v6, 6u, 1u, 1u, 0x10u);
  return Function_2019cb8(*(uint *)(v3 + 4), 2, v5 + 33, v4, 6u, 1u, 1u, 0x10u);
}

//----- (021D1B94) --------------------------------------------------------
int __fastcall Function_21d1b94(int a1)
{
  int v1;
  uint v2;

  v1 = a1;
  v2 = 0;
  do
  {
    Function_21d1b00(v1, 18, (uchar)v2);
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 < 6 );
  return Function_201c3c0(*(uint *)(v1 + 4), 2);
}

//----- (021D1BBC) --------------------------------------------------------
int __fastcall Function_21d1bbc(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int i;

  v2 = a1;
  v3 = a2;
  Function_21d1b94(a1);
  if ( v3 != 0xFFFF )
  {
    v4 = LoadMoveData(v3, 0xAu);
    v5 = Function_2095734(v4);
    v6 = (char)s32_div_f(v5, 10);
    for ( i = 0; i < v6; i = (i + 1) & 0xFFFF )
      Function_21d1b00(v2, 14, (uchar)i);
  }
  return Function_201c3c0(*(uint *)(v2 + 4), 2);
}

//----- (021D1C10) --------------------------------------------------------
uint __fastcall Function_21d1c10(int **a1, uint a2)
{
  uint v2;
  int **v3;
  int v4;
  int v5;
  uint v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint v11;
  int v12;
  int v13;
  uint v14;
  int v15;
  int v16;
  uint v17;
  int v18;
  int v19;
  uint v20;
  uint v21;
  int v22;
  int v23;
  uint v24;
  int v25;
  uint v26;
  ushort *v27;
  int v28;

  v2 = a2;
  v3 = a1;
  if ( a2 <= 0xA )
    JUMPOUT(__CS__, (char *)&off_21D1C28 + *((short *)&off_21D1C28 + a2) + 2);
  switch ( (uchar)a2 )
  {
    case 0:
      v4 = **a1;
      Function_2076b10_Dummy();
      Function_200b5cc(v3[63], 0, v5);
      break;
    case 1:
      v6 = Function_21d1dd0(a1);
      Function_200b630((int)v3[63], 1u, v6);
      break;
    case 2:
      v7 = **a1;
      Function_2076b10_Dummy();
      Function_200b5cc(v3[63], 0, v8);
      break;
    case 3:
      v9 = **a1;
      Function_2076b10_Dummy();
      Function_200b5cc(v3[63], 0, v10);
      v11 = Function_21d1dd0(v3);
      Function_200b630((int)v3[63], 1u, v11);
      break;
    case 4:
      v12 = **a1;
      Function_2076b10_Dummy();
      Function_200b5cc(v3[63], 0, v13);
      v14 = Function_21d1dd0(v3);
      Function_200b630((int)v3[63], 1u, v14);
      break;
    case 5:
      v15 = **a1;
      Function_2076b10_Dummy();
      Function_200b5cc(v3[63], 0, v16);
      v17 = Function_21d1de0(v3);
      Function_200b630((int)v3[63], 1u, v17);
      break;
    case 6:
      v18 = **a1;
      Function_2076b10_Dummy();
      Function_200b5cc(v3[63], 0, v19);
      v20 = Function_21d1dd0(v3);
      Function_200b630((int)v3[63], 1u, v20);
      break;
    case 7:
      v21 = Function_21d1dd0(a1);
      Function_200b630((int)v3[63], 1u, v21);
      break;
    case 8:
      v22 = **a1;
      Function_2076b10_Dummy();
      Function_200b5cc(v3[63], 0, v23);
      v24 = Function_21d1dd0(v3);
      Function_200b630((int)v3[63], 1u, v24);
      break;
    case 9:
      v25 = (*a1)[1];
      Function_200b498((int)a1[63], 2u);
      break;
    case 0xA:
      v26 = ((int (*)(void))Function_21d1de0)();
      Function_200b630((int)v3[63], 0, v26);
      break;
    default:
      break;
  }
  v27 = Function_200b1ec_CallMsgDecrypt(
          (ushort **)v3[62],
          dword_21D282C[11 * *((uchar *)*v3 + 21) + v2]);
  Function_200c388((uint *)v3[63], (int)v3[64], (int)v27);
  return Function_20237bc_FreeMsg((int)v27, v28);
}

//----- (021D1DD0) --------------------------------------------------------
int __fastcall Function_21d1dd0(int a1)
{
  return *(ushort *)(*(uint *)(*(uint *)a1 + 12)
                             + 2
                             * (*(ushort *)(*(uint *)a1 + 18) + *(ushort *)(*(uint *)a1 + 16)));
}

//----- (021D1DE0) --------------------------------------------------------
int __fastcall Function_21d1de0(int ***a1)
{
  return (ushort)GetPkmnData(**a1, *((uchar *)*a1 + 23) + 54, 0);
}

//----- (021D1DF8) --------------------------------------------------------
int __fastcall Function_21d1df8(int a1, uint a2)
{
  int v2;
  uint v3;
  int v4;
  int result;

  v2 = a1;
  v3 = a2;
  Function_201ada4_ClearTextBox(a1 + 200, 15);
  Function_21d1c10((int **)v2, v3);
  Function_2002ac8(1);
  Function_2002ae4(0);
  Function_2027ac0(*(ushort **)(*(uint *)v2 + 8));
  v4 = *(uint *)(v2 + 256);
  result = Function_201d738_CallInitTextInterpreter(v2 + 200, 1);
  *(uchar *)(v2 + 389) = result;
  return result;
}

//----- (021D1E50) --------------------------------------------------------
int __fastcall Function_21d1e50(char a1)
{
  int result;

  switch ( a1 )
  {
    case 1:
      return Function_20057e0();
    case 2:
      return Function_20061e4();
    case 3:
      Function_2005748(0x5E6u);
      goto LABEL_7;
    case 4:
      Function_2006150(0x483u);
      goto LABEL_7;
    case 5:
      result = Function_20057d4(0x5E6u);
      break;
    default:
LABEL_7:
      result = 0;
      break;
  }
  return result;
}

//----- (021D1EA0) --------------------------------------------------------
uint __fastcall Function_21d1ea0(int ***a1)
{
  uint v1;
  int ***v2;

  v1 = 0;
  v2 = a1;
  do
  {
    if ( !GetPkmnData(**v2, v1 + 54, 0) )
      break;
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 < 4 );
  return v1;
}

//----- (021D1EC8) --------------------------------------------------------
int __fastcall Function_21d1ec8(int a1)
{
  int v1;

  v1 = a1;
  Function_21d1df8(a1, 3u);
  *(uchar *)(*(uint *)v1 + 23) = Function_21d1ea0((int ***)v1);
  *(uint *)(v1 + 384) = 5;
  return 2;
}

//----- (021D1EE8) --------------------------------------------------------
int __fastcall Function_21d1ee8(int **a1)
{
  int **v1;

  v1 = a1;
  Function_201ada4_ClearTextBox((int)(a1 + 50), 15);
  Function_21d1c10(v1, 0);
  Function_21d1580((int)v1, 12, 1, 66063, 0);
  Function_201a9a4((int)(v1 + 50));
  Function_21d2548(v1, (*v1)[4] & 0xFF, 0);
  Function_21d2574(v1, 1);
  return 1;
}

//----- (021D1F38) --------------------------------------------------------
int __fastcall Function_21d1f38(int a1)
{
  *(uchar *)(*(uint *)a1 + 22) = 1;
  return 8;
}

//----- (021D1F44) --------------------------------------------------------
int __fastcall Function_21d1f44(int **a1)
{
  int **v1;

  v1 = a1;
  Function_201ada4_ClearTextBox((int)(a1 + 50), 15);
  Function_21d1c10(v1, 0);
  Function_21d1580((int)v1, 12, 1, 66063, 0);
  Function_201a9a4((int)(v1 + 50));
  Function_21d2548(v1, (*v1)[4] & 0xFF, 0);
  Function_21d2574(v1, 1);
  return 1;
}

//----- (021D1F94) --------------------------------------------------------
int __fastcall Function_21d1f94(int a1)
{
  *(uint *)(a1 + 384) = 10;
  return 0;
}

//----- (021D1FA0) --------------------------------------------------------
int __fastcall Function_21d1fa0(int a1)
{
  int v1;

  v1 = a1;
  Function_21d1df8(a1, 7u);
  *(uchar *)(v1 + 390) = 3;
  *(uint *)(v1 + 384) = 3;
  return 2;
}

//----- (021D1FBC) --------------------------------------------------------
int __fastcall Function_21d1fbc(int a1)
{
  uint *v1;

  v1 = (uint *)a1;
  Function_21d1df8(a1, 8u);
  v1[96] = 8;
  *(uchar *)(*v1 + 22) = 1;
  return 2;
}

//----- (021D1FD8) --------------------------------------------------------
int __fastcall Function_21d1fd8(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_21d1df8(a1, 4u);
  result = 2;
  *(uchar *)(v1 + 390) = 2;
  *(uint *)(v1 + 384) = 3;
  return result;
}

//----- (021D1FF4) --------------------------------------------------------
int __fastcall Function_21d1ff4(int a1)
{
  int v1;

  v1 = a1;
  Function_21d1df8(a1, 5u);
  *(uint *)(v1 + 384) = 6;
  return 2;
}

//----- (021D2008) --------------------------------------------------------
int __fastcall Function_21d2008(int a1)
{
  *(uint *)(a1 + 384) = 10;
  return 0;
}

//----- (021D2014) --------------------------------------------------------
uint __fastcall Function_21d2014(int a1)
{
  int v1;
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

  v1 = a1;
  v16 = 11;
  v17 = 2;
  v18 = 4;
  v19 = 4;
  v20 = 0;
  v21 = 0;
  Function_201dbec(64, 0x43u);
  *(uint *)(v1 + 272) = Function_200c6e4(0x43u);
  *(uint *)(v1 + 276) = Function_200c704(*(uint **)(v1 + 272));
  v8 = 0;
  v9 = 128;
  v10 = 0;
  v11 = 32;
  v12 = 0;
  v13 = 128;
  v14 = 0;
  v15 = 32;
  v3 = 13;
  v4 = 0x20000;
  v5 = 0x4000;
  v6 = 16;
  v7 = 16;
  Function_200c73c(*(uint **)(v1 + 272), &v8, &v3, 32);
  Function_200c7c0(*(int **)(v1 + 272), *(int ***)(v1 + 276), 13);
  Function_200cb30(*(uint **)(v1 + 272), *(uint *)(v1 + 276), &v16);
  return Function_201ff0c(0x10u, 1);
}

//----- (021D20B4) --------------------------------------------------------
uint __fastcall Function_21d20b4(int a1)
{
  int v1;
  uint v2;
  int v3;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    Function_200d0f4(*(uint *)(v3 + 280));
    ++v2;
    v3 += 4;
  }
  while ( v2 < 0xD );
  Function_200d0b0(*(uint *)(v1 + 272), *(int ***)(v1 + 276));
  return Function_200c8d4(*(uint *)(v1 + 272));
}

//----- (021D20E8) --------------------------------------------------------
int __fastcall Function_21d20e8(int a1)
{
  int v1;
  uint v2;
  int result;

  v1 = a1;
  v2 = 0;
  do
  {
    Function_2021e2c(**(uint **)(v1 + 4 * v2 + 280), 4096);
    result = (v2 + 1) << 16;
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 < 0xD );
  return result;
}

//----- (021D2110) --------------------------------------------------------
int __fastcall Function_21d2110(int a1, int a2)
{
  int v2;
  int v3;
  uint v4;

  v2 = a1;
  v3 = a2;
  Function_200cc3c(*(uint **)(a1 + 272), *(uint *)(a1 + 276), a2, 5u, 0, 1, 47272);
  Function_200cc3c(*(uint **)(v2 + 272), *(uint *)(v2 + 276), v3, 8u, 0, 1, 47273);
  Function_200cc3c(*(uint **)(v2 + 272), *(uint *)(v2 + 276), v3, 2u, 0, 1, 47274);
  v4 = 47276;
  do
    Function_207c948(*(int **)(v2 + 272), *(uint *)(v2 + 276), 1, 0, v4++);
  while ( v4 <= 0xB8B2 );
  Function_207cac4(*(int **)(v2 + 272), *(uint *)(v2 + 276), 1, 0, 47275);
  Function_200cd0c(*(uint **)(v2 + 272), *(uint *)(v2 + 276), v3, 9u, 0, 2, 1, 47272);
  Function_207c97c(*(int **)(v2 + 272), *(uint *)(v2 + 276), 1, 47273);
  Function_200ce24(*(uint **)(v2 + 272), *(uint *)(v2 + 276), v3, 4u, 0, 47272);
  Function_200ce24(*(uint **)(v2 + 272), *(uint *)(v2 + 276), v3, 7u, 0, 47273);
  Function_200ce24(*(uint **)(v2 + 272), *(uint *)(v2 + 276), v3, 1u, 0, 47274);
  Function_200ce54(*(uint **)(v2 + 272), *(uint *)(v2 + 276), v3, 3u, 0, 47272);
  Function_200ce54(*(uint **)(v2 + 272), *(uint *)(v2 + 276), v3, 6u, 0, 47273);
  Function_200ce54(*(uint **)(v2 + 272), *(uint *)(v2 + 276), v3, 0, 0, 47274);
  return Function_207c9ec(*(int **)(v2 + 272), *(uint *)(v2 + 276), 47275, 47275);
}

//----- (021D22A0) --------------------------------------------------------
int __fastcall Function_21d22a0(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  char v8;

  v3 = a1;
  v4 = a3;
  if ( *(uchar *)(*(uint *)a1 + 20) )
    v5 = LoadMoveData(a2, 0xBu) + 18;
  else
    v5 = LoadMoveData(a2, 3u);
  v6 = Function_207c944();
  v7 = Function_207c908(v5);
  Function_200d948(*(int **)(v3 + 272), *(uint *)(v3 + 276), v6, v7, 1, v4 + 47276);
  v8 = Function_207c92c(v5);
  return Function_200d41c(*(int **)(v3 + 4 * (v4 + 6) + 280), v8 + 2);
}

//----- (021D2314) --------------------------------------------------------
uint __fastcall Function_21d2314(uchar *a1)
{
  uchar *v1;
  uint v2;
  short v3;
  uchar *v4;
  uint result;

  v1 = a1;
  v2 = 0;
  v3 = 32;
  v4 = a1;
  do
  {
    Function_200d4c4(*((int **)v4 + 76), 152, v3);
    if ( *(ushort *)(*(uint *)v1 + 18) + v2 < (uint)v1[388] - 1 )
    {
      Function_200d3f4(*((uint **)v4 + 76), 1);
      result = Function_21d22a0(
                 (int)v1,
                 *(ushort *)(*(uint *)(*(uint *)v1 + 12)
                                     + 2 * (*(ushort *)(*(uint *)v1 + 18) + v2)),
                 (ushort)v2);
    }
    else
    {
      result = Function_200d3f4(*((uint **)v4 + 76), 0);
    }
    ++v2;
    v3 += 16;
    v4 += 4;
  }
  while ( v2 < 7 );
  return result;
}

//----- (021D237C) --------------------------------------------------------
uint __fastcall Function_21d237c(uchar *a1, uint a2, uint a3, int a4)
{
  uchar *v4;
  uint v5;
  uchar *v6;
  int v7;
  uint result;
  uint v9;
  uchar *v10;
  int v11;
  uint v12;
  uchar *v13;
  uint v14;
  int v15;
  int v16;
  short v17[2];
  int v18;
  int v19;

  v19 = a4;
  v4 = a1;
  v14 = a3;
  if ( a2 >= a3 )
  {
    result = a3;
    if ( a2 <= a3 )
      return result;
    v9 = 0;
    v10 = v4;
    v16 = 2 * a3;
    do
    {
      Function_200d550(*((int **)v10 + 76), &v18, v17);
      if ( v17[0] == 128 )
      {
        v17[0] = 32;
        v11 = *(ushort *)(v16 + *(uint *)(*(uint *)v4 + 12));
        if ( v11 != 0xFFFF )
          Function_21d22a0((int)v4, v11, (ushort)v9);
      }
      else
      {
        v17[0] += 16;
      }
      Function_200d4c4(*((int **)v10 + 76), (short)v18, v17[0]);
      ++v9;
      v10 += 4;
    }
    while ( v9 < 7 );
  }
  else
  {
    v5 = 0;
    v6 = a1;
    v15 = 2 * (a3 + 6);
    do
    {
      Function_200d550(*((int **)v6 + 76), &v18, v17);
      if ( v17[0] == 32 )
      {
        v17[0] = 128;
        v7 = *(ushort *)(v15 + *(uint *)(*(uint *)v4 + 12));
        if ( v7 != 0xFFFF )
          Function_21d22a0((int)v4, v7, (ushort)v5);
      }
      else
      {
        v17[0] -= 16;
      }
      Function_200d4c4(*((int **)v6 + 76), (short)v18, v17[0]);
      ++v5;
      v6 += 4;
    }
    while ( v5 < 7 );
  }
  v12 = 0;
  v13 = v4;
  do
  {
    Function_200d550(*((int **)v13 + 76), &v18, v17);
    v17[0] = (v17[0] - 32) / 16;
    if ( (int)(v14 + v17[0]) < v4[388] - 1 )
      result = Function_200d3f4(*((uint **)v13 + 76), 1);
    else
      result = Function_200d3f4(*((uint **)v13 + 76), 0);
    ++v12;
    v13 += 4;
  }
  while ( v12 < 7 );
  return result;
}

//----- (021D24B4) --------------------------------------------------------
int __fastcall Function_21d24b4(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  char v6;

  v2 = a1;
  v3 = LoadMoveData(a2, 1u);
  v4 = Function_207cac0();
  v5 = Function_207ca90(v3);
  Function_200d948(*(int **)(v2 + 272), *(uint *)(v2 + 276), v4, v5, 1, 47275);
  v6 = Function_207caa8(v3);
  return Function_200d41c(*(int **)(v2 + 300), v6 + 2);
}

//----- (021D2508) --------------------------------------------------------
int *__fastcall Function_21d2508(int a1, int a2)
{
  int v2;
  int v3;
  short *v4;
  uint v5;
  int v6;
  int *result;

  v2 = a1;
  v3 = a2;
  Function_21d2014(a1);
  Function_21d2110(v2, v3);
  v4 = (short *)dword_21D28FC;
  v5 = 0;
  v6 = v2;
  do
  {
    result = Function_200ce6c(*(uint **)(v2 + 272), *(uint *)(v2 + 276), v4);
    *(uint *)(v6 + 280) = result;
    ++v5;
    v4 += 26;
    v6 += 4;
  }
  while ( v5 < 0xD );
  return result;
}

//----- (021D2548) --------------------------------------------------------
int __fastcall Function_21d2548(int a1, short a2, char a3)
{
  int v3;
  char v4;

  v3 = a1;
  v4 = a3;
  Function_200d4c4(*(int **)(a1 + 296), 196, (short)(16 * a2 + 32));
  return Function_200d41c(*(int **)(v3 + 296), v4);
}

//----- (021D2574) --------------------------------------------------------
uint __fastcall Function_21d2574(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_200d3f4(*(uint **)(a1 + 280), a2);
  return Function_200d3f4(*(uint **)(v2 + 284), v3);
}

//----- (021D2594) --------------------------------------------------------
uint __fastcall Function_21d2594(uint **a1)
{
  uint **v1;
  uint result;

  v1 = a1;
  if ( *((ushort *)*a1 + 9) )
    Function_200d3f4(a1[72], 1);
  else
    Function_200d3f4(a1[72], 0);
  if ( *((ushort *)*v1 + 9) + 7 >= *((uchar *)v1 + 388) )
    result = Function_200d3f4(v1[73], 0);
  else
    result = Function_200d3f4(v1[73], 1);
  return result;
}

//----- (021D25E4) --------------------------------------------------------
uint __fastcall Function_21d25e4(int a1)
{
  int v1;

  v1 = a1;
  Function_200d3f4(*(uint **)(a1 + 288), 0);
  return Function_200d3f4(*(uint **)(v1 + 292), 0);
}

//----- (021D2604) --------------------------------------------------------
int __fastcall Function_21d2604(int a1)
{
  int v1;

  v1 = a1;
  Function_208c120(1, 67);
  *(uint *)(v1 + 384) = 11;
  return 0;
}

//----- (021D261C) --------------------------------------------------------
int __fastcall Function_21d261c(int a1, int a2, int a3, int a4)
{
  int v4;
  char v6;
  char v7;
  char v8;
  int v9;

  v9 = a4;
  v4 = a1;
  v6 = 3;
  v7 = 5;
  v8 = 8;
  Function_21d0f6c(a1);
  *(uint *)(v4 + 332) = **(uint **)v4;
  *(uint *)(v4 + 336) = *(uint *)(*(uint *)v4 + 8);
  *(uchar *)(v4 + 349) = 0;
  *(uchar *)(v4 + 352) = 0;
  *(uchar *)(v4 + 351) = 1;
  *(ushort *)(v4 + 356) = Function_21d1dd0(v4);
  *(uchar *)(v4 + 350) = 2;
  *(uint *)(v4 + 376) = 1;
  *(uint *)(v4 + 372) = 0;
  Function_208d720(v4 + 332, (int)&v6);
  *(uint *)(v4 + 380) = AllocAndInitOverlayData((int *)&Unknown_20f410c, v4 + 332, 0x43u);
  return 12;
}

//----- (021D26AC) --------------------------------------------------------
int __fastcall Function_21d26ac(int a1, int a2, int a3, int a4)
{
  int v4;

  v4 = a1;
  if ( !CallOverlayDataJumpTable(*(uint *)(a1 + 380), a2, a3, a4) )
    return 12;
  Call_free2(*(uint *)(v4 + 380));
  Function_21d0ed8(v4);
  Function_21d2548(v4, *(ushort *)(*(uint *)v4 + 16) & 0xFF, 1);
  Function_21d2574(v4, 0);
  Function_21d25e4(v4);
  *(uchar *)(*(uint *)v4 + 23) = *(uchar *)(v4 + 354);
  *(uint *)(v4 + 384) = 7;
  return 0;
}

