//----- (021D0D80) --------------------------------------------------------
int __fastcall Function_81_21d0d80(int a1)
{
  int v1;
  int v2;
  int *v3;
  uint *v4;

  v1 = a1;
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  Function_201ff00();
  Function_201ff68();
  REG_DISPCNT &= 0xFFFFE0FF;
  REG_DISPCNT_SUB &= 0xFFFFE0FF;
  REG_BLDCNT = 0;
  REG_BLDCNT_SUB = 0;
  Function_2017dd4(4, 8);
  Function_2017fc8(3, 42, 0x20000);
  v2 = LoadPtrToOverWorldDataIn18(v1);
  v3 = (int *)MallocSomeDataAndStorePtrInOverlayData1c(v1, 4200, 0x2Au);
  Call_FillMemWithValue(v3, 0, 0x1068u);
  *v3 = Function_2018340(0x2Au);
  v3[19] = v2;
  v3[17] = LoadVariableAreaAdress_12(v2);
  v3[18] = LoadTrainerDataAdress(v2);
  Function_208c120(0, 42);
  v4 = Function_2002bec(0);
  Function_21d0f20(v4);
  Function_21d0f40(*v3);
  Function_21d1050(v3);
  Function_21d1130(v3);
  Function_21d1610(v3);
  Function_21d164c(v3, 0);
  Function_21d1434(v3);
  SetMainLoopFunctionCall((int)Function_21d0f00, (int)v3);
  Function_201ffd0();
  Function_2039734();
  Function_201ff0c(0x10u, 1);
  Function_2004550(0x43u, 0);
  return 1;
}

//----- (021D0E70) --------------------------------------------------------
int __fastcall Function_81_21d0e70(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int result;

  v2 = a2;
  v3 = LoadOverlayData1c(a1);
  switch ( (uchar)*v2 )
  {
    case 0u:
      *v2 = Function_21d1174(v3);
      goto LABEL_8;
    case 1u:
      *v2 = Function_21d1188(v3);
      goto LABEL_8;
    case 2u:
      *v2 = Function_21d120c(v3);
      goto LABEL_8;
    case 3u:
      *v2 = Function_21d12e8(v3);
      goto LABEL_8;
    case 4u:
      if ( Function_21d1358(v3) != 1 )
        goto LABEL_8;
      result = 1;
      break;
    default:
LABEL_8:
      result = 0;
      break;
  }
  return result;
}

//----- (021D0EC4) --------------------------------------------------------
int __fastcall Function_81_21d0ec4(int a1)
{
  int v1;
  uint *v2;

  v1 = a1;
  v2 = (uint *)LoadOverlayData1c(a1);
  SetMainLoopFunctionCall(0, 0);
  Function_21d1634(v2);
  Function_21d101c(*v2);
  Function_21d115c(v2);
  Function_2002c28(0);
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(42);
  return 1;
}

//----- (021D0F00) --------------------------------------------------------
int __fastcall Function_21d0f00(int *a1)
{
  int result;

  Function_201c2b8(*a1);
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (021D0F20) --------------------------------------------------------
char *Function_21d0f20()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_21D33C0;
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

//----- (021D0F40) --------------------------------------------------------
uint __fastcall Function_21d0f40(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
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

  v38 = a4;
  v4 = a1;
  v34 = 1;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  SetGraphicsModes(&v34);
  v27 = 0;
  v28 = 0;
  v29 = 2048;
  v30 = 0;
  v31 = 69140481;
  v32 = 0;
  v33 = 0;
  Function_20183c4(v4, 0, &v27, 0);
  Function_2019ebc(v4, 0);
  v20 = 0;
  v21 = 0;
  v22 = 2048;
  v23 = 0;
  v24 = 136183809;
  v25 = 512;
  v26 = 0;
  Function_20183c4(v4, 1u, &v20, 0);
  Function_2019ebc(v4, 1u);
  v13 = 0;
  v14 = 0;
  v15 = 2048;
  v16 = 0;
  v17 = 1900545;
  v18 = 256;
  v19 = 0;
  Function_20183c4(v4, 2u, &v13, 0);
  v6 = 0;
  v7 = 0;
  v8 = 2048;
  v9 = 0;
  v10 = 1835009;
  v11 = 768;
  v12 = 0;
  Function_20183c4(v4, 3u, &v6, 0);
  Function_2019690(0, 32, 0, 0x2Au);
  return Function_2019690(1u, 32, 0, 0x2Au);
}

//----- (021D101C) --------------------------------------------------------
uint __fastcall Function_21d101c(int a1)
{
  int v1;

  v1 = a1;
  Function_201ff00();
  Function_2019044(v1, 3);
  Function_2019044(v1, 2);
  Function_2019044(v1, 1);
  Function_2019044(v1, 0);
  return Function_2018238(0x2Au, v1);
}

//----- (021D1050) --------------------------------------------------------
uint __fastcall Function_21d1050(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  short v7;

  v4 = a1;
  v5 = LoadFromNARC_8(80, 0x2Au, a3, a4);
  if ( GetGender(*(uint *)(v4 + 72)) )
  {
    Function_20070e8((int)v5, 3u, *(uint **)v4, 2u, 0, 0, 0, 42);
    Function_200710c((int)v5, 1u, *(uint **)v4, 2u, 0, 0, 0, 42);
    Function_2007130((int)v5, 5u, 0, 0, 0, 42);
  }
  else
  {
    Function_20070e8((int)v5, 2u, *(uint **)v4, 2u, 0, 0, 0, 42);
    Function_200710c((int)v5, 0, *(uint **)v4, 2u, 0, 0, 0, 42);
    Function_2007130((int)v5, 4u, 0, 0, 0, 42);
  }
  Call_FS_CloseFile(v5);
  v6 = Function_2019fe4(*(uint *)v4, 2);
  MIi_CpuCopy16(v6, v4 + 92, 2048, v7);
  Function_2019574(*(uint *)v4, 3, (int *)(v4 + 92), 2048);
  LoadFromNARC_PlFont1(0, 480, 42);
  return Function_201975c(4u, 0);
}

//----- (021D1130) --------------------------------------------------------
int __fastcall Function_21d1130(int a1)
{
  int v1;
  int result;

  v1 = a1;
  *(uint *)(a1 + 80) = LoadFromMsgNARC(0, 26, 366, 0x2Au);
  *(uint *)(v1 + 84) = Function_200b358(0x2Au);
  result = Function_2023790(128, 0x2Au);
  *(uint *)(v1 + 88) = result;
  return result;
}

//----- (021D115C) --------------------------------------------------------
uint __fastcall Function_21d115c(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  Function_200b190(*(ushort **)(a1 + 80));
  Function_200b3f0(*(uint **)(v1 + 84), v2);
  return Function_20237bc_FreeMsg(*(uint *)(v1 + 88), v3);
}

//----- (021D1174) --------------------------------------------------------
BOOL Function_21d1174()
{
  return Function_200f2ac() == 1;
}

//----- (021D1188) --------------------------------------------------------
int __fastcall Function_21d1188(int a1)
{
  int result;

  if ( dword_21BF6C4 & 0x20 )
  {
    if ( Function_21d13cc(a1, -1) == 1 )
      result = 2;
    else
      result = 1;
  }
  else if ( dword_21BF6C4 & 0x11 )
  {
    if ( Function_21d13cc(a1, 1) == 1 )
      result = 3;
    else
      result = 1;
  }
  else
  {
    if ( dword_21BF6C4 & 2 )
    {
      if ( !*(uchar *)(a1 + 4188) )
      {
        Function_208c120(1, 42);
        return 4;
      }
      if ( ((int (*)(void))Function_21d13cc)() == 1 )
        return 2;
    }
    if ( dword_21BF6C4 & 8 )
    {
      Function_208c120(1, 42);
      result = 4;
    }
    else
    {
      result = 1;
    }
  }
  return result;
}

//----- (021D120C) --------------------------------------------------------
int __fastcall Function_21d120c(int a1)
{
  int v1;

  v1 = a1;
  if ( *(uchar *)(a1 + 4190) )
  {
    if ( *(uchar *)(a1 + 4190) == 1 && Function_21d14e0() == 1 )
    {
      *(uchar *)(v1 + 4191) = 0;
      *(uchar *)(v1 + 4190) = 0;
      *(uchar *)(v1 + 4192) ^= 1u;
      Function_20198c0(*(uint *)v1, *(uchar *)(v1 + 4194), v1 + 2140, 0, 0, 0x20u, 0x20u);
      Function_20198c0(*(uint *)v1, *(uchar *)(v1 + 4193), v1 + 92, 0, 0, 0x20u, 0x20u);
      Function_201c3c0(*(uint *)v1, *(uchar *)(v1 + 4194));
      Function_201c3c0(*(uint *)v1, *(uchar *)(v1 + 4193));
      return 1;
    }
  }
  else
  {
    Function_21d1360();
    Function_21d140c(v1, *(uchar *)(v1 + 4195), (*(char *)(v1 + 4188) - 1) & 0xFF);
    --*(uchar *)(v1 + 4188);
    Function_21d164c(v1, *(char *)(v1 + 4192) ^ 1);
    *(uchar *)(v1 + 4190) = 1;
    Function_2005748(0x691u);
  }
  return 2;
}

//----- (021D12E8) --------------------------------------------------------
int __fastcall Function_21d12e8(uchar *a1)
{
  uchar *v1;
  int result;

  v1 = a1;
  if ( a1[4190] )
  {
    if ( a1[4190] == 1 && Function_21d156c() == 1 )
    {
      v1[4191] = 0;
      v1[4190] = 0;
      result = 1;
      v1[4192] ^= 1u;
      return result;
    }
  }
  else
  {
    Function_21d1360();
    ++v1[4188];
    Function_21d164c(v1, (char)v1[4192] ^ 1);
    v1[4190] = 1;
    Function_2005748(0x691u);
  }
  return 3;
}

//----- (021D1358) --------------------------------------------------------
BOOL Function_21d1358()
{
  return Function_200f2ac();
}

//----- (021D1360) --------------------------------------------------------
uchar *__fastcall Function_21d1360(uchar *result)
{
  if ( result[4192] )
  {
    result[4194] = 1;
    result[4193] = 3;
    result[4196] = 0;
    result[4195] = 2;
  }
  else
  {
    result[4194] = 0;
    result[4193] = 2;
    result[4196] = 1;
    result[4195] = 3;
  }
  return result;
}

//----- (021D13A0) --------------------------------------------------------
BOOL __fastcall Function_21d13a0(int a1, int a2, int a3, int a4)
{
  int v5;

  v5 = a4;
  Function_202c2a4(*(uint *)(a1 + 68), (int)&v5, 0, a2);
  return v5 & 0x7F || (uint)(v5 << 21) >> 28 || (uint)(v5 << 13) >> 27;
}

//----- (021D13CC) --------------------------------------------------------
int __fastcall Function_21d13cc(int a1, int a2, int a3, int a4)
{
  int v4;

  if ( a2 == 1 )
  {
    v4 = *(char *)(a1 + 4188);
    if ( v4 != 9 && Function_21d13a0(a1, (v4 + 1) & 0xFF, a3, a4) == 1 )
      return 1;
  }
  else if ( *(uchar *)(a1 + 4188) && Function_21d13a0(a1, (*(char *)(a1 + 4188) - 1) & 0xFF, a3, a4) == 1 )
  {
    return 1;
  }
  return 0;
}

//----- (021D140C) --------------------------------------------------------
int __fastcall Function_21d140c(int *a1, int a2, uchar a3)
{
  int *v3;
  char v4;

  v3 = a1;
  v4 = a2;
  Function_2019e2c(*a1, a2, 0, 0, 0x20u, 0x20u, a3);
  return Function_201c3c0(*v3, v4);
}

//----- (021D1434) --------------------------------------------------------
int __fastcall Function_21d1434(int *a1)
{
  int *v1;
  int v2;
  short v3;

  v1 = a1;
  v2 = Function_2019fe4(*a1, 0);
  return MIi_CpuCopy16(v2, (int)(v1 + 535), 2048, v3);
}

//----- (021D1450) --------------------------------------------------------
int __fastcall Function_21d1450(int *a1, int a2, uchar a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int *v7;
  uint v8;
  uint v9;
  uchar v11;
  int v12;

  v11 = a3;
  v4 = a2;
  v5 = a1;
  v6 = a4;
  v12 = Function_2019fe4(*a1, a3);
  v7 = &dword_21D33E8[8 * v6];
  v8 = 0;
  do
  {
    if ( *((uchar *)v7 + v8) == 255 )
    {
      Function_2019cb8(*v5, v11, 0, (uchar)v8, 0, 1u, 0x20u, 0);
    }
    else
    {
      v9 = 0;
      do
      {
        *(ushort *)(v12 + 2 * v8 + (v9 << 6)) = *(ushort *)(v4 + 2 * (32 * v9 + *((uchar *)v7 + v8)));
        v9 = (v9 + 1) & 0xFFFF;
      }
      while ( v9 < 0x20 );
    }
    v8 = (v8 + 1) & 0xFFFF;
  }
  while ( v8 < 0x20 );
  return Function_201c3c0(*v5, v11);
}

//----- (021D14E0) --------------------------------------------------------
int __fastcall Function_21d14e0(int a1)
{
  int v1;

  v1 = a1;
  Function_21d1450((int *)a1, a1 + 2140, *(uchar *)(a1 + 4194), *(char *)(a1 + 4191));
  Function_21d1450((int *)v1, v1 + 92, *(uchar *)(v1 + 4193), *(char *)(v1 + 4191));
  Function_21d140c((int *)v1, *(uchar *)(v1 + 4193), *(uchar *)(v1 + 4188) + 1);
  if ( ++*(uchar *)(v1 + 4191) != 9 )
    return 0;
  Function_2019060(*(uchar *)(v1 + 4196), 0);
  Function_2019060(*(uchar *)(v1 + 4195), 1);
  Function_2019060(*(uchar *)(v1 + 4194), 2);
  Function_2019060(*(uchar *)(v1 + 4193), 3);
  return 1;
}

//----- (021D156C) --------------------------------------------------------
BOOL __fastcall Function_21d156c(int a1)
{
  int v1;

  v1 = a1;
  Function_21d1450((int *)a1, a1 + 2140, *(uchar *)(a1 + 4196), (8 - *(char *)(a1 + 4191)) & 0xFFFF);
  Function_21d1450((int *)v1, v1 + 92, *(uchar *)(v1 + 4195), (8 - *(char *)(v1 + 4191)) & 0xFFFF);
  Function_21d140c((int *)v1, *(uchar *)(v1 + 4195), *(uchar *)(v1 + 4188));
  if ( *(uchar *)(v1 + 4191) == 1 )
  {
    Function_2019060(*(uchar *)(v1 + 4196), 0);
    Function_2019060(*(uchar *)(v1 + 4195), 1);
    Function_2019060(*(uchar *)(v1 + 4194), 2);
    Function_2019060(*(uchar *)(v1 + 4193), 3);
  }
  return ++*(uchar *)(v1 + 4191) == 9;
}

//----- (021D1610) --------------------------------------------------------
int __fastcall Function_21d1610(uint **a1)
{
  uint **v1;
  uchar *v2;
  uint v3;
  int v4;
  int result;

  v1 = a1;
  v2 = (uchar *)dword_21D3508;
  v3 = 0;
  v4 = (int)(a1 + 1);
  do
  {
    result = Function_201a8d4(*v1, v4, v2);
    ++v3;
    v2 += 8;
    v4 += 16;
  }
  while ( v3 < 4 );
  return result;
}

//----- (021D1634) --------------------------------------------------------
uint __fastcall Function_21d1634(int a1)
{
  uint v1;
  int v2;
  uint result;

  v1 = 0;
  v2 = a1 + 4;
  do
  {
    result = Function_201a8fc(v2);
    ++v1;
    v2 += 16;
  }
  while ( v1 < 4 );
  return result;
}

//----- (021D164C) --------------------------------------------------------
int __fastcall Function_21d164c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  if ( a2 )
  {
    v3 = a1 + 36;
    v4 = a1 + 52;
  }
  else
  {
    v3 = a1 + 4;
    v4 = a1 + 20;
  }
  Function_201ada4_ClearTextBox(v3, 0);
  Function_201ada4_ClearTextBox(v4, 0);
  if ( Function_21d16b0(v2, v3, v4) == 1 )
  {
    Function_21d17c8(v2, v4);
    Function_21d1a90(v2, v4);
    Function_21d1ad4(v2, v4);
    Function_21d1c10(v2, v4);
  }
  Function_201a9a4(v3);
  return Function_201a9a4(v4);
}

//----- (021D16B0) --------------------------------------------------------
int __fastcall Function_21d16b0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  ushort *v7;
  int v8;
  int v9;
  ushort *v10;
  int v11;
  ushort *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  uint v17;
  int v18;

  v18 = a4;
  v4 = a1;
  v5 = a2;
  v16 = a3;
  Function_202c2a4(*(uint *)(a1 + 68), (int)&v17, 0, *(uchar *)(a1 + 4188));
  if ( !(v17 & 0x7F) && !(v17 << 21 >> 28) && !(v17 << 13 >> 27) )
    return 0;
  v7 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v4 + 80), 1u);
  Function_200c2e0(*(uint *)(v4 + 84), 0, v17 << 21 >> 28);
  Function_200b60c(*(uint *)(v4 + 84), 1u, v17 << 13 >> 27, 2, 0, 1);
  Function_200c388(*(uint **)(v4 + 84), *(uint *)(v4 + 88), (int)v7);
  Function_20237bc_FreeMsg((int)v7, v8);
  v9 = *(uint *)(v4 + 88);
  Function_201d78c(v5, 0);
  Function_2002d7c(0, *(uint *)(v4 + 88), 0);
  v10 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v4 + 80), (v17 << 18 >> 29) + 2);
  Function_201d78c(v5, 0);
  Function_20237bc_FreeMsg((int)v10, v11);
  v12 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v4 + 80), 0);
  v13 = GetMapName(v17 >> 19);
  Function_200b8c8(*(uint *)(v4 + 84), 0, v13);
  Function_200c388(*(uint **)(v4 + 84), *(uint *)(v4 + 88), (int)v12);
  v14 = *(uint *)(v4 + 88);
  Function_201d78c(v16, 0);
  Function_20237bc_FreeMsg((int)v12, v15);
  return 1;
}

//----- (021D17C8) --------------------------------------------------------
uint __fastcall Function_21d17c8(int a1, int a2)
{
  int v2;
  int v3;
  char v4;
  uint v5;
  char *v6;
  uint result;
  char v8;

  v2 = a1;
  v3 = a2;
  Function_202c2a4(*(uint *)(a1 + 68), (int)&v8, 1u, *(uchar *)(a1 + 4188));
  v5 = 0;
  v6 = &v8;
  do
  {
    result = (uchar)*v6;
    if ( result <= 0x28 )
      JUMPOUT(__CS__, (char *)&off_21D17F6 + *((short *)&off_21D17F6 + result) + 2);
    switch ( v4 )
    {
      case 0:
        return result;
      case 1:
        result = Function_21d1e04(v2, v3, v6, (uchar)v5);
        break;
      case 2:
        result = Function_21d1e40(v2, v3, v6, (uchar)v5);
        break;
      case 3:
        result = Function_21d1e7c(v2, v3, v6, (uchar)v5);
        break;
      case 4:
        result = Function_21d1eb8(v2, v3, v6, (uchar)v5);
        break;
      case 5:
        result = Function_21d1ef4(v2, v3, v6, (uchar)v5);
        break;
      case 6:
        result = Function_21d1f30(v2, v3, v6, (uchar)v5);
        break;
      case 7:
        result = Function_21d1f6c(v2, v3, v6, (uchar)v5);
        break;
      case 8:
        result = Function_21d1fa8(v2, v3, v6, (uchar)v5);
        break;
      case 9:
        result = Function_21d1fe4(v2, v3, v6, (uchar)v5);
        break;
      case 10:
        result = Function_21d2038(v2, v3, v6, (uchar)v5);
        break;
      case 11:
        result = Function_21d2098(v2, v3, v6, (uchar)v5);
        break;
      case 12:
        result = Function_21d20ec(v2, v3, v6, (uchar)v5);
        break;
      case 13:
        result = Function_21d2140(v2, v3, v6, (uchar)v5);
        break;
      case 14:
        result = Function_21d219c(v2, v3, v6, (uchar)v5);
        break;
      case 15:
        result = Function_21d2208(v2, v3, v6, (uchar)v5);
        break;
      case 16:
        result = Function_21d2270(v2, v3, v6, (uchar)v5);
        break;
      case 17:
        result = Function_21d22ac(v2, v3, v6, (uchar)v5);
        break;
      case 18:
        result = Function_21d22e8(v2, v3, v6, (uchar)v5);
        break;
      case 19:
        result = Function_21d2398(v2, v3, v6, (uchar)v5);
        break;
      case 20:
        result = Function_21d23f4(v2, v3, v6, (uchar)v5);
        break;
      case 21:
        result = Function_21d2508(v2, v3, v6, (uchar)v5);
        break;
      case 22:
        result = Function_21d24ac(v2, v3, v6, (uchar)v5);
        break;
      case 23:
        result = Function_21d2450(v2, v3, v6, (uchar)v5);
        break;
      case 24:
        result = Function_21d233c(v2, v3, v6, (uchar)v5);
        break;
      case 25:
        result = Function_21d25c0(v2, v3, v6, (uchar)v5);
        break;
      case 26:
        result = Function_21d2564(v2, v3, v6, (uchar)v5);
        break;
      case 27:
        result = Function_21d261c(v2, v3, v6, (uchar)v5);
        break;
      case 28:
        result = Function_21d2678(v2, v3, v6, (uchar)v5);
        break;
      case 29:
        result = Function_21d26d4(v2, v3, v6, (uchar)v5);
        break;
      case 30:
        result = Function_21d2730(v2, v3, v6, (uchar)v5);
        break;
      case 32:
        result = Function_21d27a8(v2, v3, v6, (uchar)v5);
        break;
      case 33:
        result = Function_21d276c(v2, v3, v6, (uchar)v5);
        break;
      case 34:
        result = Function_21d27e4(v2, v3, v6, (uchar)v5);
        break;
      case 35:
        result = Function_21d2820(v2, v3, v6, (uchar)v5);
        break;
      case 36:
      case 37:
      case 38:
      case 39:
      case 40:
        result = Function_21d285c(v2, v3, v6, (uchar)v5, (uchar)*v6);
        break;
      default:
        break;
    }
    ++v5;
    v6 += 8;
  }
  while ( v5 < 4 );
  return result;
}

//----- (021D1A90) --------------------------------------------------------
int __fastcall Function_21d1a90(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int result;
  int v7;

  v7 = a4;
  v4 = a1;
  v5 = a2;
  Function_202c2a4(*(uint *)(a1 + 68), (int)&v7, 2u, *(uchar *)(a1 + 4188));
  result = (uchar)v7;
  if ( (uchar)v7 )
  {
    if ( (uchar)v7 == 1 )
    {
      result = Function_21d2908(v4, v5, &v7);
    }
    else if ( (uchar)v7 == 2 )
    {
      result = Function_21d29b4(v4, v5, &v7);
    }
  }
  return result;
}

//----- (021D1AD4) --------------------------------------------------------
char *__fastcall Function_21d1ad4(int a1, int a2)
{
  int v2;
  int v3;
  char *result;
  int v5;
  ushort *v6;
  int v7;
  int v8;
  int v9;
  ushort *v10;
  uint v11;
  int v12;
  ushort *v13;
  int v14;
  ushort *v15;
  ushort **v16;
  int v17;
  int v18;
  int v19;
  ushort v20;
  ushort v21;

  v2 = a1;
  v3 = a2;
  Function_202c2a4(*(uint *)(a1 + 68), (int)&v20, 3u, *(uchar *)(a1 + 4188));
  result = (char *)&v20;
  if ( v20 & 1 )
  {
    v5 = GetMapName(v21);
    v6 = Function_200b010_LoadFromNARCCallMsgDecrypt(26, 0x1B1u, v5, 0x2Au);
    v7 = Function_2023c3c((int)v6);
    Function_20237bc_FreeMsg((int)v6, v8);
    GetNPCTrainerData((uint)v20 << 16 >> 17, 1u);
    if ( v9 == 63 )
    {
      v10 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 80), 0x3Du);
      Function_200b4bc(*(uint *)(v2 + 84), 1u, *(uint *)(v2 + 76));
      Function_200c388(*(uint **)(v2 + 84), *(uint *)(v2 + 88), (int)v10);
      v11 = v7 + Function_2023c3c(*(uint *)(v2 + 88));
      Function_20237bc_FreeMsg((int)v10, v12);
    }
    else
    {
      v13 = Function_200b010_LoadFromNARCCallMsgDecrypt(26, 0x26Au, (uint)v20 << 16 >> 17, 0x2Au);
      v11 = v7 + Function_2023c3c((int)v13);
      Function_20237bc_FreeMsg((int)v13, v14);
      Function_200ba08(*(uint *)(v2 + 84), 1u, (uint)v20 << 16 >> 17);
    }
    if ( v11 > 0xE )
    {
      if ( v11 > 0x10 )
      {
        v16 = *(ushort ***)(v2 + 80);
        if ( v11 > 0x13 )
          v15 = Function_200b1ec_CallMsgDecrypt(v16, 0x3Cu);
        else
          v15 = Function_200b1ec_CallMsgDecrypt(v16, 0x3Bu);
      }
      else
      {
        v15 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 80), 0x3Au);
      }
    }
    else
    {
      v15 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 80), 0x39u);
    }
    v17 = GetMapName(v21);
    Function_200b8c8(*(uint *)(v2 + 84), 0, v17);
    Function_200c388(*(uint **)(v2 + 84), *(uint *)(v2 + 88), (int)v15);
    v18 = *(uint *)(v2 + 88);
    Function_201d78c(v3, 0);
    result = (char *)Function_20237bc_FreeMsg((int)v15, v19);
  }
  return result;
}

//----- (021D1C10) --------------------------------------------------------
uint __fastcall Function_21d1c10(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  char v6;
  uint v7;
  char *v8;
  uint result;
  char v10;
  int v11;

  v11 = a4;
  v4 = a1;
  v5 = a2;
  Function_202c2a4(*(uint *)(a1 + 68), (int)&v10, 4u, *(uchar *)(a1 + 4188));
  v7 = 0;
  v8 = &v10;
  do
  {
    result = (uchar)*v8;
    if ( result <= 0x1D )
      JUMPOUT(__CS__, (char *)&off_21D1C3E + *((short *)&off_21D1C3E + result) + 2);
    switch ( v6 )
    {
      case 0:
        return result;
      case 1:
        result = Function_21d2a9c(v4, v5, v8, (uchar)v7);
        break;
      case 2:
        result = Function_21d2b20(v4, v5, v8, (uchar)v7);
        break;
      case 3:
        result = Function_21d2ba4(v4, v5, v8, (uchar)v7);
        break;
      case 4:
        result = Function_21d2c38(v4, v5, v8, (uchar)v7);
        break;
      case 5:
        result = Function_21d2cbc(v4, v5, v8, (uchar)v7);
        break;
      case 6:
        result = Function_21d2d50(v4, v5, v8, (uchar)v7);
        break;
      case 7:
        result = Function_21d2dac(v4, v5, v8, (uchar)v7);
        break;
      case 8:
        result = Function_21d2e18(v4, v5, v8, (uchar)v7);
        break;
      case 9:
        result = Function_21d2e54(v4, v5, v8, (uchar)v7);
        break;
      case 10:
        result = Function_21d2eb0(v4, v5, v8, (uchar)v7);
        break;
      case 11:
        result = Function_21d2eec(v4, v5, v8, (uchar)v7);
        break;
      case 12:
        result = Function_21d2f70(v4, v5, v8, (uchar)v7);
        break;
      case 13:
        result = Function_21d2fac(v4, v5, v8, (uchar)v7);
        break;
      case 14:
        result = Function_21d300c(v4, v5, v8, (uchar)v7);
        break;
      case 15:
        result = Function_21d3048(v4, v5, v8, (uchar)v7);
        break;
      case 16:
        result = Function_21d30b4(v4, v5, v8, (uchar)v7);
        break;
      case 17:
        result = Function_21d30f0(v4, v5, v8, (uchar)v7);
        break;
      case 18:
      case 19:
      case 20:
      case 21:
        result = Function_21d312c(v4, v5, v8, (uchar)v7, (uchar)*v8);
        break;
      case 22:
        result = Function_21d3190(v4, v5, v8, (uchar)v7);
        break;
      case 23:
        result = Function_21d31ec(v4, v5, v8, (uchar)v7);
        break;
      case 24:
        result = Function_21d3248(v4, v5, v8, (uchar)v7);
        break;
      case 25:
      case 26:
      case 27:
      case 28:
        result = Function_21d32a0(v4, v5, v8, (uchar)v7, (uchar)*v8);
        break;
      case 29:
        result = Function_21d3304(v4, v5, v8, (uchar)v7);
        break;
      default:
        break;
    }
    ++v7;
    v8 += 58;
  }
  while ( v7 < 2 );
  return result;
}

//----- (021D1E04) --------------------------------------------------------
uint __fastcall Function_21d1e04(int a1, int a2)
{
  int v2;
  ushort *v3;
  int v4;

  v2 = a2;
  v3 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 9u);
  Function_201d78c(v2, 0);
  return Function_20237bc_FreeMsg((int)v3, v4);
}

//----- (021D1E40) --------------------------------------------------------
uint __fastcall Function_21d1e40(int a1, int a2)
{
  int v2;
  ushort *v3;
  int v4;

  v2 = a2;
  v3 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0xAu);
  Function_201d78c(v2, 0);
  return Function_20237bc_FreeMsg((int)v3, v4);
}

//----- (021D1E7C) --------------------------------------------------------
uint __fastcall Function_21d1e7c(int a1, int a2)
{
  int v2;
  ushort *v3;
  int v4;

  v2 = a2;
  v3 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0xBu);
  Function_201d78c(v2, 0);
  return Function_20237bc_FreeMsg((int)v3, v4);
}

//----- (021D1EB8) --------------------------------------------------------
uint __fastcall Function_21d1eb8(int a1, int a2)
{
  int v2;
  ushort *v3;
  int v4;

  v2 = a2;
  v3 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0xCu);
  Function_201d78c(v2, 0);
  return Function_20237bc_FreeMsg((int)v3, v4);
}

//----- (021D1EF4) --------------------------------------------------------
uint __fastcall Function_21d1ef4(int a1, int a2)
{
  int v2;
  ushort *v3;
  int v4;

  v2 = a2;
  v3 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0xDu);
  Function_201d78c(v2, 0);
  return Function_20237bc_FreeMsg((int)v3, v4);
}

//----- (021D1F30) --------------------------------------------------------
uint __fastcall Function_21d1f30(int a1, int a2)
{
  int v2;
  ushort *v3;
  int v4;

  v2 = a2;
  v3 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0xEu);
  Function_201d78c(v2, 0);
  return Function_20237bc_FreeMsg((int)v3, v4);
}

//----- (021D1F6C) --------------------------------------------------------
uint __fastcall Function_21d1f6c(int a1, int a2)
{
  int v2;
  ushort *v3;
  int v4;

  v2 = a2;
  v3 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0xFu);
  Function_201d78c(v2, 0);
  return Function_20237bc_FreeMsg((int)v3, v4);
}

//----- (021D1FA8) --------------------------------------------------------
uint __fastcall Function_21d1fa8(int a1, int a2)
{
  int v2;
  ushort *v3;
  int v4;

  v2 = a2;
  v3 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x10u);
  Function_201d78c(v2, 0);
  return Function_20237bc_FreeMsg((int)v3, v4);
}

//----- (021D1FE4) --------------------------------------------------------
uint __fastcall Function_21d1fe4(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x11u);
  Function_200bd60(*(uint *)(v3 + 84), 0, *(ushort *)(v5 + 2));
  Function_200c388(*(uint **)(v3 + 84), *(uint *)(v3 + 88), (int)v6);
  v7 = *(uint *)(v3 + 88);
  Function_201d78c(v4, 0);
  return Function_20237bc_FreeMsg((int)v6, v8);
}

//----- (021D2038) --------------------------------------------------------
uint __fastcall Function_21d2038(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x12u);
  Function_200bd60(*(uint *)(v3 + 84), 0, *(ushort *)(v5 + 2));
  Function_200ba08(*(uint *)(v3 + 84), 1u, *(ushort *)(v5 + 4));
  Function_200c388(*(uint **)(v3 + 84), *(uint *)(v3 + 88), (int)v6);
  v7 = *(uint *)(v3 + 88);
  Function_201d78c(v4, 0);
  return Function_20237bc_FreeMsg((int)v6, v8);
}

//----- (021D2098) --------------------------------------------------------
uint __fastcall Function_21d2098(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x13u);
  Function_200ba08(*(uint *)(v3 + 84), 0, *(ushort *)(v5 + 4));
  Function_200c388(*(uint **)(v3 + 84), *(uint *)(v3 + 88), (int)v6);
  v7 = *(uint *)(v3 + 88);
  Function_201d78c(v4, 0);
  return Function_20237bc_FreeMsg((int)v6, v8);
}

//----- (021D20EC) --------------------------------------------------------
uint __fastcall Function_21d20ec(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x14u);
  Function_200ba08(*(uint *)(v3 + 84), 0, *(ushort *)(v5 + 4));
  Function_200c388(*(uint **)(v3 + 84), *(uint *)(v3 + 88), (int)v6);
  v7 = *(uint *)(v3 + 88);
  Function_201d78c(v4, 0);
  return Function_20237bc_FreeMsg((int)v6, v8);
}

//----- (021D2140) --------------------------------------------------------
uint __fastcall Function_21d2140(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;
  int v9;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x15u);
  v7 = GetMapName(*(ushort *)(v5 + 2));
  Function_200b8c8(*(uint *)(v3 + 84), 0, v7);
  Function_200c388(*(uint **)(v3 + 84), *(uint *)(v3 + 88), (int)v6);
  v8 = *(uint *)(v3 + 88);
  Function_201d78c(v4, 0);
  return Function_20237bc_FreeMsg((int)v6, v9);
}

//----- (021D219C) --------------------------------------------------------
uint __fastcall Function_21d219c(int a1, int a2, int a3)
{
  uint v3;
  int v4;
  ushort *v5;
  int v6;
  int v7;
  int v9;

  v3 = *(ushort *)(a3 + 2);
  v4 = a1;
  v9 = a2;
  if ( v3 != 47 && v3 != 64 && v3 != 49 )
    v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x16u);
  else
    v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x17u);
  Function_200b8c8(*(uint *)(v4 + 84), 0, v3);
  Function_200c388(*(uint **)(v4 + 84), *(uint *)(v4 + 88), (int)v5);
  v6 = *(uint *)(v4 + 88);
  Function_201d78c(v9, 0);
  return Function_20237bc_FreeMsg((int)v5, v7);
}

//----- (021D2208) --------------------------------------------------------
uint __fastcall Function_21d2208(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  bool v5;
  ushort **v6;
  ushort *v7;
  int v8;
  int v9;
  int v10;
  uint v12;

  v3 = a1;
  v4 = a2;
  v12 = *(ushort *)(a3 + 2);
  v5 = Function_202c6a4(v12) == 0;
  v6 = (ushort **)v3[20];
  if ( v5 )
    v7 = Function_200b1ec_CallMsgDecrypt(v6, 0x17u);
  else
    v7 = Function_200b1ec_CallMsgDecrypt(v6, 0x18u);
  v8 = (int)v7;
  Function_200b8c8(v3[21], 0, v12);
  Function_200c388((uint *)v3[21], v3[22], v8);
  v9 = v3[22];
  Function_201d78c(v4, 0);
  return Function_20237bc_FreeMsg(v8, v10);
}

//----- (021D2270) --------------------------------------------------------
uint __fastcall Function_21d2270(int a1, int a2)
{
  int v2;
  ushort *v3;
  int v4;

  v2 = a2;
  v3 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x1Eu);
  Function_201d78c(v2, 0);
  return Function_20237bc_FreeMsg((int)v3, v4);
}

//----- (021D22AC) --------------------------------------------------------
uint __fastcall Function_21d22ac(int a1, int a2)
{
  int v2;
  ushort *v3;
  int v4;

  v2 = a2;
  v3 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x1Fu);
  Function_201d78c(v2, 0);
  return Function_20237bc_FreeMsg((int)v3, v4);
}

//----- (021D22E8) --------------------------------------------------------
uint __fastcall Function_21d22e8(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x22u);
  Function_200b70c(*(uint *)(v3 + 84), 0, *(ushort *)(v5 + 6));
  Function_200c388(*(uint **)(v3 + 84), *(uint *)(v3 + 88), (int)v6);
  v7 = *(uint *)(v3 + 88);
  Function_201d78c(v4, 0);
  return Function_20237bc_FreeMsg((int)v6, v8);
}

//----- (021D233C) --------------------------------------------------------
uint __fastcall Function_21d233c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;
  int v9;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x28u);
  v7 = GetMapName(*(ushort *)(v5 + 2));
  Function_200b8c8(*(uint *)(v3 + 84), 0, v7);
  Function_200c388(*(uint **)(v3 + 84), *(uint *)(v3 + 88), (int)v6);
  v8 = *(uint *)(v3 + 88);
  Function_201d78c(v4, 0);
  return Function_20237bc_FreeMsg((int)v6, v9);
}

//----- (021D2398) --------------------------------------------------------
uint __fastcall Function_21d2398(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;
  int v9;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x23u);
  v7 = GetMapName(*(ushort *)(v5 + 2));
  Function_200b8c8(*(uint *)(v3 + 84), 0, v7);
  Function_200c388(*(uint **)(v3 + 84), *(uint *)(v3 + 88), (int)v6);
  v8 = *(uint *)(v3 + 88);
  Function_201d78c(v4, 0);
  return Function_20237bc_FreeMsg((int)v6, v9);
}

//----- (021D23F4) --------------------------------------------------------
uint __fastcall Function_21d23f4(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;
  int v9;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x24u);
  v7 = GetMapName(*(ushort *)(v5 + 2));
  Function_200b8c8(*(uint *)(v3 + 84), 0, v7);
  Function_200c388(*(uint **)(v3 + 84), *(uint *)(v3 + 88), (int)v6);
  v8 = *(uint *)(v3 + 88);
  Function_201d78c(v4, 0);
  return Function_20237bc_FreeMsg((int)v6, v9);
}

//----- (021D2450) --------------------------------------------------------
uint __fastcall Function_21d2450(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;
  int v9;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x2Bu);
  v7 = GetMapName(*(ushort *)(v5 + 2));
  Function_200b8c8(*(uint *)(v3 + 84), 0, v7);
  Function_200c388(*(uint **)(v3 + 84), *(uint *)(v3 + 88), (int)v6);
  v8 = *(uint *)(v3 + 88);
  Function_201d78c(v4, 0);
  return Function_20237bc_FreeMsg((int)v6, v9);
}

//----- (021D24AC) --------------------------------------------------------
uint __fastcall Function_21d24ac(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;
  int v9;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x26u);
  v7 = GetMapName(*(ushort *)(v5 + 2));
  Function_200b8c8(*(uint *)(v3 + 84), 0, v7);
  Function_200c388(*(uint **)(v3 + 84), *(uint *)(v3 + 88), (int)v6);
  v8 = *(uint *)(v3 + 88);
  Function_201d78c(v4, 0);
  return Function_20237bc_FreeMsg((int)v6, v9);
}

//----- (021D2508) --------------------------------------------------------
uint __fastcall Function_21d2508(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;
  int v9;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x25u);
  v7 = GetMapName(*(ushort *)(v5 + 2));
  Function_200b8c8(*(uint *)(v3 + 84), 0, v7);
  Function_200c388(*(uint **)(v3 + 84), *(uint *)(v3 + 88), (int)v6);
  v8 = *(uint *)(v3 + 88);
  Function_201d78c(v4, 0);
  return Function_20237bc_FreeMsg((int)v6, v9);
}

//----- (021D2564) --------------------------------------------------------
uint __fastcall Function_21d2564(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;
  int v9;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x2Au);
  v7 = GetMapName(*(ushort *)(v5 + 2));
  Function_200b8c8(*(uint *)(v3 + 84), 0, v7);
  Function_200c388(*(uint **)(v3 + 84), *(uint *)(v3 + 88), (int)v6);
  v8 = *(uint *)(v3 + 88);
  Function_201d78c(v4, 0);
  return Function_20237bc_FreeMsg((int)v6, v9);
}

//----- (021D25C0) --------------------------------------------------------
uint __fastcall Function_21d25c0(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;
  int v9;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x29u);
  v7 = GetMapName(*(ushort *)(v5 + 2));
  Function_200b8c8(*(uint *)(v3 + 84), 0, v7);
  Function_200c388(*(uint **)(v3 + 84), *(uint *)(v3 + 88), (int)v6);
  v8 = *(uint *)(v3 + 88);
  Function_201d78c(v4, 0);
  return Function_20237bc_FreeMsg((int)v6, v9);
}

//----- (021D261C) --------------------------------------------------------
uint __fastcall Function_21d261c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;
  int v9;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x27u);
  v7 = GetMapName(*(ushort *)(v5 + 2));
  Function_200b8c8(*(uint *)(v3 + 84), 0, v7);
  Function_200c388(*(uint **)(v3 + 84), *(uint *)(v3 + 88), (int)v6);
  v8 = *(uint *)(v3 + 88);
  Function_201d78c(v4, 0);
  return Function_20237bc_FreeMsg((int)v6, v9);
}

//----- (021D2678) --------------------------------------------------------
uint __fastcall Function_21d2678(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;
  int v9;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x2Eu);
  v7 = GetMapName(*(ushort *)(v5 + 2));
  Function_200b8c8(*(uint *)(v3 + 84), 0, v7);
  Function_200c388(*(uint **)(v3 + 84), *(uint *)(v3 + 88), (int)v6);
  v8 = *(uint *)(v3 + 88);
  Function_201d78c(v4, 0);
  return Function_20237bc_FreeMsg((int)v6, v9);
}

//----- (021D26D4) --------------------------------------------------------
uint __fastcall Function_21d26d4(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;
  int v9;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x2Cu);
  v7 = GetMapName(*(ushort *)(v5 + 2));
  Function_200b8c8(*(uint *)(v3 + 84), 0, v7);
  Function_200c388(*(uint **)(v3 + 84), *(uint *)(v3 + 88), (int)v6);
  v8 = *(uint *)(v3 + 88);
  Function_201d78c(v4, 0);
  return Function_20237bc_FreeMsg((int)v6, v9);
}

//----- (021D2730) --------------------------------------------------------
uint __fastcall Function_21d2730(int a1, int a2)
{
  int v2;
  ushort *v3;
  int v4;

  v2 = a2;
  v3 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x2Du);
  Function_201d78c(v2, 0);
  return Function_20237bc_FreeMsg((int)v3, v4);
}

//----- (021D276C) --------------------------------------------------------
uint __fastcall Function_21d276c(int a1, int a2)
{
  int v2;
  ushort *v3;
  int v4;

  v2 = a2;
  v3 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x2Fu);
  Function_201d78c(v2, 0);
  return Function_20237bc_FreeMsg((int)v3, v4);
}

//----- (021D27A8) --------------------------------------------------------
uint __fastcall Function_21d27a8(int a1, int a2)
{
  int v2;
  ushort *v3;
  int v4;

  v2 = a2;
  v3 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x30u);
  Function_201d78c(v2, 0);
  return Function_20237bc_FreeMsg((int)v3, v4);
}

//----- (021D27E4) --------------------------------------------------------
uint __fastcall Function_21d27e4(int a1, int a2)
{
  int v2;
  ushort *v3;
  int v4;

  v2 = a2;
  v3 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x20u);
  Function_201d78c(v2, 0);
  return Function_20237bc_FreeMsg((int)v3, v4);
}

//----- (021D2820) --------------------------------------------------------
uint __fastcall Function_21d2820(int a1, int a2)
{
  int v2;
  ushort *v3;
  int v4;

  v2 = a2;
  v3 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x21u);
  Function_201d78c(v2, 0);
  return Function_20237bc_FreeMsg((int)v3, v4);
}

//----- (021D285C) --------------------------------------------------------
uint __fastcall Function_21d285c(int a1, int a2, int a3, int a4, char a5)
{
  int v5;
  uint v6;
  ushort *v7;
  int v8;

  v5 = a2;
  switch ( a5 )
  {
    case 36:
      v6 = 25;
      break;
    case 37:
      v6 = 26;
      break;
    case 38:
      v6 = 27;
      break;
    case 39:
      v6 = 28;
      break;
    default:
      v6 = 29;
      break;
  }
  v7 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), v6);
  Function_201d78c(v5, 0);
  return Function_20237bc_FreeMsg((int)v7, v8);
}

//----- (021D28C8) --------------------------------------------------------
uint __fastcall Function_21d28c8(int a1, int a2, int a3, uint a4)
{
  int v4;
  int v5;
  uint v6;
  int v7;
  int *v8;
  int v9;

  v4 = a1;
  v5 = a3;
  v6 = a4;
  v7 = a2;
  v8 = AllocPkmnData(0x2Au);
  Function_2074088(v8, v7, 1, 32, v5, 0, 0);
  Function_2076b10_Dummy();
  Function_200b538(*(uint *)(v4 + 84), v6, v9);
  return free((int)v8);
}

//----- (021D2908) --------------------------------------------------------
uint __fastcall Function_21d2908(int a1, int a2, int a3)
{
  int v3;
  int v4;
  char v5;
  int v6;
  ushort *v7;
  uint v8;
  bool v9;
  ushort **v10;
  int v11;
  int v12;

  v3 = a3;
  v4 = a1;
  v5 = *(uchar *)(a3 + 1);
  v6 = a2;
  if ( v5 & 3 )
  {
    if ( (v5 & 3) == 1 )
    {
      v7 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v4 + 80), 0x32u);
    }
    else
    {
      v8 = (uint)*(uchar *)(a3 + 1) << 24 >> 30;
      if ( v8 )
      {
        v9 = v8 == 1;
        v10 = *(ushort ***)(v4 + 80);
        if ( v9 )
          v7 = Function_200b1ec_CallMsgDecrypt(v10, 0x34u);
        else
          v7 = Function_200b1ec_CallMsgDecrypt(v10, 0x31u);
      }
      else
      {
        v7 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v4 + 80), 0x33u);
      }
    }
  }
  else
  {
    v7 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v4 + 80), 0x31u);
  }
  Function_21d28c8(v4, *(ushort *)(v3 + 2), (uint)*(uchar *)(v3 + 1) << 24 >> 30, 0);
  Function_200bd98(*(uint *)(v4 + 84), 1u, (uint)*(uchar *)(v3 + 1) << 26 >> 28);
  Function_200c388(*(uint **)(v4 + 84), *(uint *)(v4 + 88), (int)v7);
  v11 = *(uint *)(v4 + 88);
  Function_201d78c(v6, 0);
  return Function_20237bc_FreeMsg((int)v7, v12);
}

//----- (021D29B4) --------------------------------------------------------
uint __fastcall Function_21d29b4(int a1, int a2, int a3)
{
  int v3;
  int v4;
  char v5;
  int v6;
  ushort *v7;
  uint v8;
  bool v9;
  ushort **v10;
  int v11;
  int v12;

  v3 = a3;
  v4 = a1;
  v5 = *(uchar *)(a3 + 1);
  v6 = a2;
  if ( v5 & 3 )
  {
    if ( (v5 & 3) == 1 )
    {
      v7 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v4 + 80), 0x36u);
    }
    else
    {
      v8 = (uint)*(uchar *)(a3 + 1) << 24 >> 30;
      if ( v8 )
      {
        v9 = v8 == 1;
        v10 = *(ushort ***)(v4 + 80);
        if ( v9 )
          v7 = Function_200b1ec_CallMsgDecrypt(v10, 0x38u);
        else
          v7 = Function_200b1ec_CallMsgDecrypt(v10, 0x35u);
      }
      else
      {
        v7 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v4 + 80), 0x37u);
      }
    }
  }
  else
  {
    v7 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v4 + 80), 0x35u);
  }
  Function_21d28c8(v4, *(ushort *)(v3 + 2), (uint)*(uchar *)(v3 + 1) << 24 >> 30, 0);
  Function_200bd98(*(uint *)(v4 + 84), 1u, (uint)*(uchar *)(v3 + 1) << 26 >> 28);
  Function_200c388(*(uint **)(v4 + 84), *(uint *)(v4 + 88), (int)v7);
  v11 = *(uint *)(v4 + 88);
  Function_201d78c(v6, 0);
  return Function_20237bc_FreeMsg((int)v7, v12);
}

//----- (021D2A60) --------------------------------------------------------
uint __fastcall Function_21d2a60(int a1, ushort *a2, int a3, uint a4)
{
  int v4;
  ushort *v5;
  uint v6;
  ushort *v7;
  int v8;

  v4 = a1;
  v5 = a2;
  v6 = a4;
  v7 = (ushort *)Function_2023790(32, 0x2Au);
  Function_2023d28(v7, v5);
  Function_200b48c(*(int **)(v4 + 84), v6, (int)v7);
  return Function_20237bc_FreeMsg((int)v7, v8);
}

//----- (021D2A9C) --------------------------------------------------------
uint __fastcall Function_21d2a9c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  ushort *v5;
  int v6;
  int v7;
  int v9;

  v3 = a3;
  v4 = a1;
  v9 = a2;
  if ( *(uchar *)(a3 + 1) & 0xF )
  {
    if ( (*(uchar *)(a3 + 1) & 0xF) == 1 )
      v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x3Fu);
    else
      v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x40u);
  }
  else
  {
    v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x3Eu);
  }
  Function_21d2a60(v4, (ushort *)(v3 + 2), (uint)*(uchar *)(v3 + 1) << 27 >> 31, 0);
  Function_200c388(*(uint **)(v4 + 84), *(uint *)(v4 + 88), (int)v5);
  v6 = *(uint *)(v4 + 88);
  Function_201d78c(v9, 0);
  return Function_20237bc_FreeMsg((int)v5, v7);
}

//----- (021D2B20) --------------------------------------------------------
uint __fastcall Function_21d2b20(int a1, int a2, int a3)
{
  int v3;
  int v4;
  ushort *v5;
  int v6;
  int v7;
  int v9;

  v3 = a3;
  v4 = a1;
  v9 = a2;
  if ( *(uchar *)(a3 + 1) & 0xF )
  {
    if ( (*(uchar *)(a3 + 1) & 0xF) == 1 )
      v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x42u);
    else
      v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x43u);
  }
  else
  {
    v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x41u);
  }
  Function_21d2a60(v4, (ushort *)(v3 + 2), (uint)*(uchar *)(v3 + 1) << 27 >> 31, 0);
  Function_200c388(*(uint **)(v4 + 84), *(uint *)(v4 + 88), (int)v5);
  v6 = *(uint *)(v4 + 88);
  Function_201d78c(v9, 0);
  return Function_20237bc_FreeMsg((int)v5, v7);
}

//----- (021D2BA4) --------------------------------------------------------
uint __fastcall Function_21d2ba4(int a1, int a2, int a3)
{
  int v3;
  int v4;
  ushort *v5;
  int v6;
  int v7;
  int v9;

  v3 = a3;
  v4 = a1;
  v9 = a2;
  if ( *(uchar *)(a3 + 1) & 0xF )
  {
    if ( (*(uchar *)(a3 + 1) & 0xF) == 1 )
      v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x45u);
    else
      v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x46u);
  }
  else
  {
    v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x44u);
  }
  Function_21d2a60(v4, (ushort *)(v3 + 2), (uint)*(uchar *)(v3 + 1) << 27 >> 31, 0);
  Function_21d2a60(v4, (ushort *)(v3 + 18), (uint)*(uchar *)(v3 + 1) << 26 >> 31, 1u);
  Function_200c388(*(uint **)(v4 + 84), *(uint *)(v4 + 88), (int)v5);
  v6 = *(uint *)(v4 + 88);
  Function_201d78c(v9, 0);
  return Function_20237bc_FreeMsg((int)v5, v7);
}

//----- (021D2C38) --------------------------------------------------------
uint __fastcall Function_21d2c38(int a1, int a2, int a3)
{
  int v3;
  int v4;
  ushort *v5;
  int v6;
  int v7;
  int v9;

  v3 = a3;
  v4 = a1;
  v9 = a2;
  if ( *(uchar *)(a3 + 1) & 0xF )
  {
    if ( (*(uchar *)(a3 + 1) & 0xF) == 1 )
      v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x48u);
    else
      v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x49u);
  }
  else
  {
    v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x47u);
  }
  Function_21d2a60(v4, (ushort *)(v3 + 2), (uint)*(uchar *)(v3 + 1) << 27 >> 31, 0);
  Function_200c388(*(uint **)(v4 + 84), *(uint *)(v4 + 88), (int)v5);
  v6 = *(uint *)(v4 + 88);
  Function_201d78c(v9, 0);
  return Function_20237bc_FreeMsg((int)v5, v7);
}

//----- (021D2CBC) --------------------------------------------------------
uint __fastcall Function_21d2cbc(int a1, int a2, int a3)
{
  int v3;
  int v4;
  ushort *v5;
  int v6;
  int v7;
  int v9;

  v3 = a3;
  v4 = a1;
  v9 = a2;
  if ( *(uchar *)(a3 + 1) & 0xF )
  {
    if ( (*(uchar *)(a3 + 1) & 0xF) == 1 )
      v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x4Bu);
    else
      v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x4Cu);
  }
  else
  {
    v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x4Au);
  }
  Function_21d2a60(v4, (ushort *)(v3 + 2), (uint)*(uchar *)(v3 + 1) << 27 >> 31, 0);
  Function_21d2a60(v4, (ushort *)(v3 + 18), (uint)*(uchar *)(v3 + 1) << 26 >> 31, 1u);
  Function_200c388(*(uint **)(v4 + 84), *(uint *)(v4 + 88), (int)v5);
  v6 = *(uint *)(v4 + 88);
  Function_201d78c(v9, 0);
  return Function_20237bc_FreeMsg((int)v5, v7);
}

//----- (021D2D50) --------------------------------------------------------
uint __fastcall Function_21d2d50(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x4Du);
  Function_21d2a60(v3, (ushort *)(v5 + 2), (uint)*(uchar *)(v5 + 1) << 27 >> 31, 0);
  Function_200c388(*(uint **)(v3 + 84), *(uint *)(v3 + 88), (int)v6);
  v7 = *(uint *)(v3 + 88);
  Function_201d78c(v4, 0);
  return Function_20237bc_FreeMsg((int)v6, v8);
}

//----- (021D2DAC) --------------------------------------------------------
uint __fastcall Function_21d2dac(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x4Eu);
  Function_21d2a60(v3, (ushort *)(v5 + 2), (uint)*(uchar *)(v5 + 1) << 27 >> 31, 0);
  Function_21d2a60(v3, (ushort *)(v5 + 34), (uint)*(uchar *)(v5 + 1) << 24 >> 30, 1u);
  Function_200c388(*(uint **)(v3 + 84), *(uint *)(v3 + 88), (int)v6);
  v7 = *(uint *)(v3 + 88);
  Function_201d78c(v4, 0);
  return Function_20237bc_FreeMsg((int)v6, v8);
}

//----- (021D2E18) --------------------------------------------------------
uint __fastcall Function_21d2e18(int a1, int a2)
{
  int v2;
  ushort *v3;
  int v4;

  v2 = a2;
  v3 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x4Fu);
  Function_201d78c(v2, 0);
  return Function_20237bc_FreeMsg((int)v3, v4);
}

//----- (021D2E54) --------------------------------------------------------
uint __fastcall Function_21d2e54(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x50u);
  Function_21d2a60(v3, (ushort *)(v5 + 34), (uint)*(uchar *)(v5 + 1) << 24 >> 30, 0);
  Function_200c388(*(uint **)(v3 + 84), *(uint *)(v3 + 88), (int)v6);
  v7 = *(uint *)(v3 + 88);
  Function_201d78c(v4, 0);
  return Function_20237bc_FreeMsg((int)v6, v8);
}

//----- (021D2EB0) --------------------------------------------------------
uint __fastcall Function_21d2eb0(int a1, int a2)
{
  int v2;
  ushort *v3;
  int v4;

  v2 = a2;
  v3 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x51u);
  Function_201d78c(v2, 0);
  return Function_20237bc_FreeMsg((int)v3, v4);
}

//----- (021D2EEC) --------------------------------------------------------
uint __fastcall Function_21d2eec(int a1, int a2, int a3)
{
  int v3;
  int v4;
  ushort *v5;
  int v6;
  int v7;
  int v9;

  v3 = a3;
  v4 = a1;
  v9 = a2;
  if ( *(uchar *)(a3 + 1) & 0xF )
  {
    if ( (*(uchar *)(a3 + 1) & 0xF) == 1 )
      v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x53u);
    else
      v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x54u);
  }
  else
  {
    v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x52u);
  }
  Function_21d2a60(v4, (ushort *)(v3 + 2), (uint)*(uchar *)(v3 + 1) << 27 >> 31, 0);
  Function_200c388(*(uint **)(v4 + 84), *(uint *)(v4 + 88), (int)v5);
  v6 = *(uint *)(v4 + 88);
  Function_201d78c(v9, 0);
  return Function_20237bc_FreeMsg((int)v5, v7);
}

//----- (021D2F70) --------------------------------------------------------
uint __fastcall Function_21d2f70(int a1, int a2)
{
  int v2;
  ushort *v3;
  int v4;

  v2 = a2;
  v3 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x55u);
  Function_201d78c(v2, 0);
  return Function_20237bc_FreeMsg((int)v3, v4);
}

//----- (021D2FAC) --------------------------------------------------------
uint __fastcall Function_21d2fac(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x57u);
  Function_200b60c(*(uint *)(v3 + 84), 0, *(uchar *)(v5 + 1) & 0xF, 1, 0, 1);
  Function_200c388(*(uint **)(v3 + 84), *(uint *)(v3 + 88), (int)v6);
  v7 = *(uint *)(v3 + 88);
  Function_201d78c(v4, 0);
  return Function_20237bc_FreeMsg((int)v6, v8);
}

//----- (021D300C) --------------------------------------------------------
uint __fastcall Function_21d300c(int a1, int a2)
{
  int v2;
  ushort *v3;
  int v4;

  v2 = a2;
  v3 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x58u);
  Function_201d78c(v2, 0);
  return Function_20237bc_FreeMsg((int)v3, v4);
}

//----- (021D3048) --------------------------------------------------------
uint __fastcall Function_21d3048(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x59u);
  Function_21d2a60(v3, (ushort *)(v5 + 2), (uint)*(uchar *)(v5 + 1) << 27 >> 31, 0);
  Function_21d2a60(v3, (ushort *)(v5 + 34), (uint)*(uchar *)(v5 + 1) << 24 >> 30, 1u);
  Function_200c388(*(uint **)(v3 + 84), *(uint *)(v3 + 88), (int)v6);
  v7 = *(uint *)(v3 + 88);
  Function_201d78c(v4, 0);
  return Function_20237bc_FreeMsg((int)v6, v8);
}

//----- (021D30B4) --------------------------------------------------------
uint __fastcall Function_21d30b4(int a1, int a2)
{
  int v2;
  ushort *v3;
  int v4;

  v2 = a2;
  v3 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x5Eu);
  Function_201d78c(v2, 0);
  return Function_20237bc_FreeMsg((int)v3, v4);
}

//----- (021D30F0) --------------------------------------------------------
uint __fastcall Function_21d30f0(int a1, int a2)
{
  int v2;
  ushort *v3;
  int v4;

  v2 = a2;
  v3 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x56u);
  Function_201d78c(v2, 0);
  return Function_20237bc_FreeMsg((int)v3, v4);
}

//----- (021D312C) --------------------------------------------------------
uint __fastcall Function_21d312c(int a1, int a2, int a3, int a4, char a5)
{
  int v5;
  uint v6;
  ushort *v7;
  int v8;

  v5 = a2;
  switch ( a5 )
  {
    case 18:
      v6 = 90;
      break;
    case 19:
      v6 = 91;
      break;
    case 20:
      v6 = 92;
      break;
    default:
      v6 = 93;
      break;
  }
  v7 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), v6);
  Function_201d78c(v5, 0);
  return Function_20237bc_FreeMsg((int)v7, v8);
}

//----- (021D3190) --------------------------------------------------------
uint __fastcall Function_21d3190(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x5Fu);
  Function_21d2a60(v3, (ushort *)(v5 + 2), (uint)*(uchar *)(v5 + 1) << 27 >> 31, 0);
  Function_200c388(*(uint **)(v3 + 84), *(uint *)(v3 + 88), (int)v6);
  v7 = *(uint *)(v3 + 88);
  Function_201d78c(v4, 0);
  return Function_20237bc_FreeMsg((int)v6, v8);
}

//----- (021D31EC) --------------------------------------------------------
uint __fastcall Function_21d31ec(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x60u);
  Function_21d2a60(v3, (ushort *)(v5 + 2), (uint)*(uchar *)(v5 + 1) << 27 >> 31, 0);
  Function_200c388(*(uint **)(v3 + 84), *(uint *)(v3 + 88), (int)v6);
  v7 = *(uint *)(v3 + 88);
  Function_201d78c(v4, 0);
  return Function_20237bc_FreeMsg((int)v6, v8);
}

//----- (021D3248) --------------------------------------------------------
uint __fastcall Function_21d3248(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x61u);
  Function_200c0b0(*(uint *)(v3 + 84), 0, *(uchar *)(v5 + 1) & 0xF);
  Function_200c388(*(uint **)(v3 + 84), *(uint *)(v3 + 88), (int)v6);
  v7 = *(uint *)(v3 + 88);
  Function_201d78c(v4, 0);
  return Function_20237bc_FreeMsg((int)v6, v8);
}

//----- (021D32A0) --------------------------------------------------------
uint __fastcall Function_21d32a0(int a1, int a2, int a3, int a4, char a5)
{
  int v5;
  uint v6;
  ushort *v7;
  int v8;

  v5 = a2;
  switch ( a5 )
  {
    case 25:
      v6 = 98;
      break;
    case 26:
      v6 = 99;
      break;
    case 27:
      v6 = 100;
      break;
    default:
      v6 = 101;
      break;
  }
  v7 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), v6);
  Function_201d78c(v5, 0);
  return Function_20237bc_FreeMsg((int)v7, v8);
}

//----- (021D3304) --------------------------------------------------------
uint __fastcall Function_21d3304(int a1, int a2)
{
  int v2;
  ushort *v3;
  int v4;

  v2 = a2;
  v3 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 80), 0x66u);
  Function_201d78c(v2, 0);
  return Function_20237bc_FreeMsg((int)v3, v4);
}

