//----- (021D0D80) --------------------------------------------------------
int __fastcall Function_90_21d0d80(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = LoadPtrToOverWorldDataIn18(a1);
  Function_2017fc8(3, 74, 0x10000);
  v3 = MallocSomeDataAndStorePtrInOverlayData1c(v1, 692, 0x4Au);
  Call_FillMemWithValue((int *)v3, 0, 0x2B4u);
  *(ushort *)(v3 + 8) = *(ushort *)(v2 + 4);
  *(uchar *)(v3 + 10) = *(ushort *)(v2 + 6);
  *(uint *)(v3 + 24) = LoadPlayerDataAdress(*(uint *)v2);
  *(uint *)(v3 + 28) = LoadVariableAreaAdress_17(*(uint *)v2);
  *(uint *)(v3 + 32) = Function_202d750(*(uint *)v2);
  *(uint *)(v3 + 36) = Function_202d764(*(uint *)v2);
  *(uint *)v3 = 74;
  Function_2017dd4(4, 8);
  return 1;
}

//----- (021D0DE8) --------------------------------------------------------
int __fastcall Function_90_21d0de8(int a1)
{
  int v1;
  int *v2;

  v1 = a1;
  v2 = (int *)LoadOverlayData1c(a1);
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(*v2);
  return 1;
}

//----- (021D0E04) --------------------------------------------------------
int __fastcall Function_90_21d0e04(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int *v4;
  int v5;
  int result;

  v2 = a2;
  v3 = LoadOverlayData1c(a1);
  v4 = (int *)v3;
  switch ( (uchar)*v2 )
  {
    case 0u:
      if ( Function_21d0ecc() )
      {
        Function_200f174(3u, 1, 1, 0, 6, 1, *v4);
        ++*v2;
      }
      goto LABEL_15;
    case 1u:
      if ( Function_200f2ac() )
        ++*v2;
      goto LABEL_15;
    case 2u:
      if ( *(ushort *)(v3 + 8) )
        v5 = Function_21d1080();
      else
        v5 = Function_21d105c();
      if ( v5 )
      {
        Function_200f174(3u, 0, 0, 0, 6, 1, *v4);
        ++*v2;
      }
      goto LABEL_15;
    case 3u:
      if ( Function_200f2ac() )
        ++*v2;
      goto LABEL_15;
    case 4u:
      if ( !Function_21d0f98() )
        goto LABEL_15;
      result = 1;
      break;
    default:
LABEL_15:
      if ( *v2 >= 1 && *v2 <= 3 )
        Function_21d1b90(v4);
      result = 0;
      break;
  }
  return result;
}

//----- (021D0ECC) --------------------------------------------------------
int __fastcall Function_21d0ecc(int a1)
{
  int v1;
  int result;

  v1 = a1;
  switch ( (uchar)*(uint *)(a1 + 4) )
  {
    case 0u:
      SetMainLoopFunctionCall(0, 0);
      Function_20177a4();
      Function_201ff00();
      Function_201ff68();
      REG_DISPCNT &= 0xFFFFE0FF;
      REG_DISPCNT_SUB &= 0xFFFFE0FF;
      Function_21d1014();
      Function_200f32c(0);
      Function_200f32c(1);
      Function_21d11ec(v1);
      goto LABEL_9;
    case 1u:
      Function_21d12b0();
      Function_21d13d8(v1);
      goto LABEL_9;
    case 2u:
      Function_21d1340();
      if ( *(ushort *)(v1 + 8) )
      {
        Function_21d1750(v1);
        Function_21d18bc(v1);
      }
      else
      {
        Function_21d15d0(v1);
        ++*(uint *)(v1 + 4);
      }
      goto LABEL_9;
    case 3u:
      Function_21d1abc();
      Function_21d1bac(v1);
      Function_21d1984(v1);
      goto LABEL_9;
    case 4u:
      SetMainLoopFunctionCall((int)Function_21d1034, a1);
      *(uint *)(v1 + 4) = 0;
      result = 1;
      break;
    default:
LABEL_9:
      ++*(uint *)(v1 + 4);
      result = 0;
      break;
  }
  return result;
}

//----- (021D0F98) --------------------------------------------------------
int __fastcall Function_21d0f98(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 4);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      SetMainLoopFunctionCall(0, 0);
      Function_20177a4();
      Function_201ff00();
      Function_201ff68();
      REG_DISPCNT &= 0xFFFFE0FF;
      REG_DISPCNT_SUB &= 0xFFFFE0FF;
      *(uint *)(v1 + 4) = 0;
      return 1;
    }
  }
  else
  {
    if ( *(ushort *)(a1 + 8) )
    {
      Function_21d1c28();
      Function_21d1b6c(v1);
      Function_21d17dc(v1);
    }
    Function_21d13a8(v1);
    Function_21d146c(v1);
    Function_21d1280(v1);
  }
  ++*(uint *)(v1 + 4);
  return 0;
}

//----- (021D1014) --------------------------------------------------------
char *Function_21d1014()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_21D1DD4;
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

//----- (021D1034) --------------------------------------------------------
int __fastcall Function_21d1034(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_21d1ba4();
  NNS_GfdDoVramTransfer();
  Function_201c2b8(*(uint *)(v1 + 16));
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (021D105C) --------------------------------------------------------
int Function_21d105c()
{
  if ( !(dword_21BF6C4 & 3) )
    return 0;
  Function_2005748(0x5DCu);
  return 1;
}

//----- (021D1080) --------------------------------------------------------
int __fastcall Function_21d1080(uchar *a1)
{
  uchar *v1;
  int v2;
  uint v4;
  uint v5;
  char v6;
  char v7;

  v1 = a1;
  v2 = 0;
  if ( dword_21BF6C4 & 2 )
  {
    Function_2005748(0x5DCu);
    return 1;
  }
  if ( dword_21BF6C4 & 1 )
  {
    Function_2005748(0x5DCu);
    if ( (uchar)v1[11] >= 0xAu )
      return 1;
    v2 = 1;
    v1[13] = ((uchar)v1[13] + 1 < 0)
           + __ROR4__((((uchar)v1[13] + 1) << 31) - (((uint)(uchar)v1[13] + 1) >> 31), 31);
  }
  else
  {
    if ( dword_21BF6C8 & 0x40 )
    {
      if ( a1[11] )
      {
        --a1[11];
        if ( a1[15] )
        {
          --a1[15];
          v2 = 1;
        }
        else
        {
          v2 = 1;
          --a1[14];
        }
      }
      if ( v2 )
        Function_2005748(0x5DCu);
    }
    else if ( dword_21BF6C8 & 0x80 )
    {
      v4 = (uchar)a1[11];
      if ( v4 < 0xA )
      {
        v1[11] = v4 + 1;
        v5 = (uchar)v1[15];
        if ( v5 <= 1 )
        {
          v1[15] = v5 + 1;
          v2 = 1;
        }
        else
        {
          v2 = 1;
          ++v1[14];
        }
      }
      if ( v2 )
        Function_2005748(0x5DCu);
    }
    else if ( dword_21BF6C8 & 0x20 )
    {
      s32_div_f((uchar)a1[12] + 2, 3);
      v1[12] = v6;
      v2 = 1;
      if ( v1[11] != 10 )
        Function_2005748(0x5DCu);
    }
    else if ( dword_21BF6C8 & 0x10 )
    {
      s32_div_f((uchar)a1[12] + 1, 3);
      v1[12] = v7;
      v2 = 1;
      if ( v1[11] != 10 )
        Function_2005748(0x5DCu);
    }
    if ( v1[11] == 10 )
      v1[12] = 2;
  }
  if ( !v2 )
    return 0;
  Function_21d1c90(v1, (uchar)v1[11], (uchar)v1[12], (uchar)v1[15]);
  Function_21d17f8(
    v1 + 188,
    v1 + 124,
    *((uint *)v1 + 13),
    (uchar)v1[14],
    (uchar)v1[11],
    (uchar)v1[12]);
  if ( v1[11] == 10 )
  {
    Function_21d1a9c(v1);
  }
  else if ( v1[13] )
  {
    if ( v1[13] == 1 )
      Function_21d1a48(v1);
    else
      ErrorHandler();
  }
  else
  {
    Function_21d1984(v1);
  }
  return 0;
}

//----- (021D11EC) --------------------------------------------------------
uint __fastcall Function_21d11ec(uint *a1)
{
  uint *v1;
  int *v2;
  char *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uchar v8;
  int v9;
  int *v10;
  uint result;
  int v12;
  int v13;
  int v14;
  int v15;
  char v16;

  v1 = a1;
  a1[4] = Function_2018340(*a1);
  v12 = 1;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  SetGraphicsModes(&v12);
  v2 = &dword_21D1E2C;
  v3 = &v16;
  v4 = 10;
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
  v7 = *v2;
  v8 = 0;
  *(uint *)v3 = v7;
  v9 = 0;
  if ( *((ushort *)v1 + 4) + 2 > 0 )
  {
    v10 = (int *)&v16;
    do
    {
      Function_20183c4((uint *)v1[4], v8, v10, 0);
      Function_2019ebc((uint *)v1[4], v8);
      ++v9;
      ++v8;
      v10 += 7;
    }
    while ( v9 < *((ushort *)v1 + 4) + 2 );
  }
  Function_2019690(0, 32, 0, *v1);
  result = *((ushort *)v1 + 4);
  if ( *((ushort *)v1 + 4) )
    result = Function_2019690(2u, 32, 0, *v1);
  return result;
}

//----- (021D1280) --------------------------------------------------------
uint __fastcall Function_21d1280(int a1)
{
  int v1;
  int v2;
  int i;
  int v4;

  v1 = a1;
  v2 = 0;
  for ( i = 0; i < *(ushort *)(v1 + 8) + 2; ++i )
  {
    v4 = (uchar)v2++;
    Function_2019044(*(uint *)(v1 + 16), v4);
  }
  return free(*(uint *)(v1 + 16));
}

//----- (021D12B0) --------------------------------------------------------
int __fastcall Function_21d12b0(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int *v5;
  uint v6;

  v4 = a1;
  v5 = LoadFromNARC_8(123, *a1, a3, a4);
  Function_208c210((uint *)v4[4], *v4, (int)v5, 123, 5u, 1u, 0, 0, 0);
  Function_208c210((uint *)v4[4], *v4, (int)v5, 123, 4u, 1u, 2, 64, 0);
  if ( *((ushort *)v4 + 4) == 1 )
  {
    v6 = 7;
  }
  else if ( *((uchar *)v4 + 10) == 2 )
  {
    v6 = 8;
  }
  else
  {
    v6 = 6;
  }
  Function_208c210((uint *)v4[4], *v4, (int)v5, 123, v6, 1u, 1, 0, 0);
  Call_FS_CloseFile(v5);
  return Function_201c3c0(v4[4], 1);
}

//----- (021D1340) --------------------------------------------------------
int __fastcall Function_21d1340(int a1)
{
  int v1;
  uchar *v2;
  int v3;
  int v4;
  uchar *v5;
  int v6;
  int v7;

  v1 = a1;
  if ( *(ushort *)(a1 + 8) )
  {
    v5 = (uchar *)dword_21D1D80;
    v6 = 0;
    v7 = a1 + 108;
    do
    {
      Function_201a8d4(*(uint **)(v1 + 16), v7, v5);
      Function_201ada4_ClearTextBox(v7, 0);
      ++v6;
      v5 += 8;
      v7 += 16;
    }
    while ( v6 < 3 );
  }
  else
  {
    v2 = (uchar *)dword_21D1DFC;
    v3 = 0;
    v4 = a1 + 108;
    do
    {
      Function_201a8d4(*(uint **)(v1 + 16), v4, v2);
      Function_201ada4_ClearTextBox(v4, 0);
      ++v3;
      v2 += 8;
      v4 += 16;
    }
    while ( v3 < 5 );
  }
  return LoadFromNARC_PlFont1(0, 64, *(uint *)v1);
}

//----- (021D13A8) --------------------------------------------------------
uint __fastcall Function_21d13a8(uint result)
{
  int v1;
  int v2;
  int v3;

  if ( *(ushort *)(result + 8) )
    v1 = 3;
  else
    v1 = 5;
  v2 = 0;
  if ( v1 > 0 )
  {
    v3 = result + 108;
    do
    {
      Function_201acf4(v3);
      result = Function_201a8fc(v3);
      ++v2;
      v3 += 16;
    }
    while ( v2 < v1 );
  }
  return result;
}

//----- (021D13D8) --------------------------------------------------------
ushort *__fastcall Function_21d13d8(uint *a1)
{
  uint *v1;
  int v2;
  uint *v3;
  ushort *result;

  v1 = a1;
  a1[10] = LoadFromMsgNARC(0, 26, 22, *a1);
  v1[11] = (uint)Function_200b368(2u, 76, *v1);
  v1[12] = Function_2023790(76, *v1);
  v2 = 0;
  v3 = v1;
  do
  {
    v3[19] = (uint)Function_200b1ec_CallMsgDecrypt((ushort **)v1[10], v2++ + 9);
    ++v3;
  }
  while ( v2 < 6 );
  v1[14] = (uint)Function_200b1ec_CallMsgDecrypt((ushort **)v1[10], 0xFu);
  v1[15] = (uint)Function_200b1ec_CallMsgDecrypt((ushort **)v1[10], 0x11u);
  v1[13] = (uint)Function_200b1ec_CallMsgDecrypt((ushort **)v1[10], 0x12u);
  v1[16] = (uint)Function_200b1ec_CallMsgDecrypt((ushort **)v1[10], 0x13u);
  v1[17] = (uint)Function_200b1ec_CallMsgDecrypt((ushort **)v1[10], 0x14u);
  v1[18] = (uint)Function_200b1ec_CallMsgDecrypt((ushort **)v1[10], 0x15u);
  v1[25] = (uint)Function_200b1ec_CallMsgDecrypt((ushort **)v1[10], 0x16u);
  result = Function_200b1ec_CallMsgDecrypt((ushort **)v1[10], 0x17u);
  v1[26] = (uint)result;
  return result;
}

//----- (021D146C) --------------------------------------------------------
ushort *__fastcall Function_21d146c(int a1, int a2)
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

  v2 = a1;
  Function_20237bc_FreeMsg(*(uint *)(a1 + 104), a2);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 100), v3);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 72), v4);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 68), v5);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 64), v6);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 52), v7);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 60), v8);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 56), v9);
  v11 = 0;
  v12 = v2;
  do
  {
    Function_20237bc_FreeMsg(*(uint *)(v12 + 76), v10);
    ++v11;
    v12 += 4;
  }
  while ( v11 < 6 );
  Function_20237bc_FreeMsg(*(uint *)(v2 + 48), v10);
  Function_200b3f0(*(uint **)(v2 + 44), v13);
  return Function_200b190(*(ushort **)(v2 + 40));
}

//----- (021D14C8) --------------------------------------------------------
int __fastcall Function_21d14c8(int *a1, int a2, int a3, int a4)
{
  int *v4;
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

  v4 = a1;
  v5 = a4;
  v6 = a2;
  v7 = a3;
  v8 = Function_2030698(a1[7], a4, 255);
  v9 = Function_2030698(v4[7], v5 + 1, 255);
  v10 = *(int *)((char *)v4 + (4 * Function_202d414(v4[8], (v7 + 8) & 0xFFFF, 0) & 0x3FFFF) + 76);
  Function_201d78c(v6, 0);
  Function_200b60c(v4[11], 0, v9, 4, 1, 1);
  Function_200c388((uint *)v4[11], v4[12], v4[23]);
  Function_2002d7c(0, v4[12], 0);
  v11 = v4[12];
  Function_201d78c(v6, 0);
  v12 = v4[21];
  Function_201d78c(v6, 0);
  Function_200b60c(v4[11], 0, v8, 4, 1, 1);
  Function_200c388((uint *)v4[11], v4[12], v4[23]);
  Function_2002d7c(0, v4[12], 0);
  v13 = v4[12];
  Function_201d78c(v6, 0);
  return Function_201a954(v6, v14);
}

//----- (021D15D0) --------------------------------------------------------
int __fastcall Function_21d15d0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;
  int v6;
  int v7;
  int v8;

  v1 = a1;
  Function_200b1b8_CallMsgDecrypt(
    *(ushort ***)(a1 + 40),
    *(uchar *)(a1 + 10),
    *(ushort **)(a1 + 48));
  Function_2002d7c(0, *(uint *)(v1 + 48), 0);
  v2 = *(uint *)(v1 + 48);
  Function_201d78c(v1 + 108, 0);
  Function_200b1b8_CallMsgDecrypt(
    *(ushort ***)(v1 + 40),
    *(uchar *)(v1 + 10) + 3,
    *(ushort **)(v1 + 48));
  v3 = *(uint *)(v1 + 48);
  Function_201d78c(v1 + 124, 0);
  Function_200b1b8_CallMsgDecrypt(
    *(ushort ***)(v1 + 40),
    *(uchar *)(v1 + 10) + 6,
    *(ushort **)(v1 + 48));
  v4 = *(uint *)(v1 + 48);
  Function_201d78c(v1 + 140, 0);
  result = *(uchar *)(v1 + 10);
  if ( *(uchar *)(v1 + 10) )
  {
    if ( result == 1 )
    {
      Function_21d14c8((int *)v1, v1 + 156, 2, 4);
      result = Function_21d14c8((int *)v1, v1 + 172, 3, 6);
    }
    else if ( result == 2 )
    {
      Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 40), 0xCu, *(ushort **)(v1 + 48));
      v6 = *(uint *)(v1 + 48);
      Function_201d78c(v1 + 156, 0);
      v7 = Function_202d2c0(*(uint *)(v1 + 32), 0);
      Function_200b60c(*(uint *)(v1 + 44), 0, v7, 2, 0, 1);
      Function_200c388(*(uint **)(v1 + 44), *(uint *)(v1 + 48), *(uint *)(v1 + 96));
      Function_2002d7c(0, *(uint *)(v1 + 48), 0);
      v8 = *(uint *)(v1 + 48);
      Function_201d78c(v1 + 156, 0);
      result = Function_21d14c8((int *)v1, v1 + 172, 4, 8);
    }
  }
  else
  {
    Function_21d14c8((int *)v1, v1 + 156, 0, 0);
    result = Function_21d14c8((int *)v1, v1 + 172, 1, 2);
  }
  return result;
}

//----- (021D1750) --------------------------------------------------------
uint __fastcall Function_21d1750(int a1)
{
  uint *v1;
  uint v2;
  uchar *v3;
  int v4;
  ushort *v5;
  ushort *v6;
  int v8;
  int v9;

  v1 = (uint *)a1;
  v8 = Function_202d71c(*(uint *)(a1 + 36), *(uint *)a1);
  v3 = (uchar *)v8;
  v9 = 0;
  v4 = (int)(v1 + 47);
  v5 = (ushort *)v8;
  do
  {
    *(uchar *)(v4 + 4) = (v3[32] & 2) != 0;
    *(uchar *)(v4 + 5) = v3[18];
    *(uchar *)(v4 + 6) = v3[19];
    *(uchar *)(v4 + 7) = v3[32] & 1;
    MI_CpuCopy8((int)(v3 + 24), v4 + 8, 8u, v2);
    *(uint *)v4 = Function_2023790(8, *v1);
    v6 = *(ushort **)v4;
    if ( *(uchar *)(v4 + 7) )
      Function_2023810(v6, v1[*(uchar *)(v4 + 4) + 25]);
    else
      Function_2023d28(v6, v5);
    v4 += 16;
    v3 += 34;
    v5 += 17;
    ++v9;
  }
  while ( v9 < 30 );
  return free(v8);
}

//----- (021D17DC) --------------------------------------------------------
uint __fastcall Function_21d17dc(int a1, int a2)
{
  int v2;
  int v3;
  uint result;

  v2 = a1;
  v3 = 0;
  do
  {
    result = Function_20237bc_FreeMsg(*(uint *)(v2 + 188), a2);
    ++v3;
    v2 += 16;
  }
  while ( v3 < 30 );
  return result;
}

//----- (021D17F8) --------------------------------------------------------
int __fastcall Function_21d17f8(int a1, int a2, int a3, uint a4)
{
  int v4;
  uint v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;

  v14 = a1;
  v15 = a2;
  v4 = a3;
  v5 = a4;
  Function_201ada4_ClearTextBox(a2, 0);
  if ( v5 < 8 )
  {
    v16 = 3;
  }
  else
  {
    v16 = 2;
    Function_2002d7c(0, v4, 0);
    Function_201d78c(v15, 0);
  }
  v17 = 3 * v5;
  v18 = 0;
  if ( v16 > 0 )
  {
    v7 = 0;
    v8 = 4;
    do
    {
      v9 = 0;
      v10 = 0;
      do
      {
        v11 = v14 + 16 * (v17 + v9 + v7);
        *(uchar *)(v11 + 4);
        v12 = *(uint *)v11;
        Function_201d78c(v15, 0);
        ++v9;
        v10 += 72;
      }
      while ( v9 < 3 );
      v7 += 3;
      v6 = v18 + 1;
      v8 += 24;
      v18 = v6;
    }
    while ( v6 < v16 );
  }
  return Function_201a954(v15, v6);
}

//----- (021D18BC) --------------------------------------------------------
int __fastcall Function_21d18bc(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  uchar v6;
  uchar v7;

  v1 = a1;
  Function_202d708(*(uint *)(a1 + 36), &v6);
  Function_20237e8(*(uint *)(v1 + 48), v2);
  Function_200b60c(*(uint *)(v1 + 44), 0, v6, 2, 0, 1);
  Function_200b60c(*(uint *)(v1 + 44), 1u, v7, 3, 2, 1);
  Function_200c388(*(uint **)(v1 + 44), *(uint *)(v1 + 48), *(uint *)(v1 + 56));
  Function_2002d7c(0, *(uint *)(v1 + 48), 0);
  v3 = *(uint *)(v1 + 48);
  Function_201d78c(v1 + 108, 0);
  Function_200b1b8_CallMsgDecrypt(
    *(ushort ***)(v1 + 40),
    *(uchar *)(v1 + 10) + 16,
    *(ushort **)(v1 + 48));
  Function_2002d7c(0, *(uint *)(v1 + 48), 0);
  v4 = *(uint *)(v1 + 48);
  Function_201d78c(v1 + 108, 0);
  return Function_21d17f8(v1 + 188, v1 + 124, *(uint *)(v1 + 52), 0);
}

//----- (021D1984) --------------------------------------------------------
int __fastcall Function_21d1984(int a1)
{
  int *v1;
  int v2;
  uint v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = (int *)a1;
  v2 = a1 + 188 + 16 * (*(uchar *)(a1 + 12) + 3 * *(uchar *)(a1 + 11));
  Function_201ada4_ClearTextBox(a1 + 140, 0);
  v3 = *(uchar *)(v2 + 5);
  if ( *(uchar *)(v2 + 5) )
  {
    v6 = v1[11];
    if ( *(uchar *)(v2 + 6) )
    {
      Function_200bdd0(v6, 0, v3);
      Function_200be08(v1[11], 1u, *(uchar *)(v2 + 5), *(uchar *)(v2 + 6));
      Function_200c388((uint *)v1[11], v1[12], v1[16]);
    }
    else
    {
      Function_200bdd0(v6, 0, v3);
      Function_200c388((uint *)v1[11], v1[12], v1[17]);
    }
    v7 = v1[12];
    Function_201d78c((int)(v1 + 35), 0);
  }
  else
  {
    v4 = v1[18];
    Function_201d78c((int)(v1 + 35), 0);
  }
  Function_201a954((int)(v1 + 35), v5);
  return Function_21d1c44(v1, 0);
}

//----- (021D1A48) --------------------------------------------------------
uint __fastcall Function_21d1a48(int a1)
{
  int v1;
  ushort *v2;
  int v3;

  v1 = a1;
  v2 = Function_2014b34(
         (ushort *)(a1 + 188 + 16 * (*(uchar *)(a1 + 12) + 3 * *(uchar *)(a1 + 11)) + 8),
         *(uint *)a1);
  Function_201ada4_ClearTextBox(v1 + 140, 0);
  Function_201d78c(v1 + 140, 0);
  return Function_20237bc_FreeMsg((int)v2, v3);
}

//----- (021D1A9C) --------------------------------------------------------
int __fastcall Function_21d1a9c(int a1)
{
  int v1;

  v1 = a1;
  Function_201ada4_ClearTextBox(a1 + 140, 0);
  Function_201acf4(v1 + 140);
  return Function_21d1c44(v1, 1);
}

//----- (021D1ABC) --------------------------------------------------------
uint __fastcall Function_21d1abc(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  const char *v6;
  const char *v7;
  const char *v8;
  const char *v9;
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

  v26 = a4;
  v4 = a1;
  Function_201dbec(32, *a1);
  v4[167] = (uint)Function_200c6e4(*v4);
  v4[168] = Function_200c704((uint *)v4[167]);
  v18 = 0;
  v19 = 128;
  v20 = 0;
  v21 = 32;
  v22 = 0;
  v23 = 128;
  v24 = 0;
  v25 = 32;
  v13 = 1;
  v14 = 2048;
  v15 = 2048;
  v16 = 16;
  v17 = 16;
  Function_200c73c((uint *)v4[167], &v18, &v13, 32);
  Function_200c7c0((int *)v4[167], (int **)v4[168], 4);
  Function_200a93c(*v4);
  Function_200a944(*v4);
  v6 = "data/btower_chr.resdat";
  v7 = "data/btower_pal.resdat";
  v8 = "data/btower_cell.resdat";
  v9 = "data/btower_canm.resdat";
  v10 = 0;
  v11 = 0;
  v12 = 35463072;
  Function_200c8f0((uint *)v4[167], v4[168], (int)&v6);
  return Function_201ff0c(0x10u, 1);
}

//----- (021D1B6C) --------------------------------------------------------
int *__fastcall Function_21d1b6c(int a1)
{
  int v1;

  v1 = a1;
  Function_200c8b0(*(uint *)(a1 + 668), *(int ***)(a1 + 672));
  Function_200c8d4(*(uint *)(v1 + 668));
  return Function_201dc3c();
}

//----- (021D1B90) --------------------------------------------------------
int *__fastcall Function_21d1b90(int a1)
{
  int *result;

  result = *(int **)(a1 + 672);
  if ( result )
    result = (int *)Function_200c7ec(result);
  return result;
}

//----- (021D1BA4) --------------------------------------------------------
int Function_21d1ba4()
{
  return Function_200c800();
}

//----- (021D1BAC) --------------------------------------------------------
char *__fastcall Function_21d1bac(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = &dword_21D1E80;
  v3 = 0;
  v4 = a1;
  do
  {
    *(uint *)(v4 + 676) = Function_200ca08(*(int **)(v1 + 668), *(uint *)(v1 + 672), (int)v2);
    ++v3;
    v2 += 10;
    v4 += 4;
  }
  while ( v3 < 4 );
  Function_2021cac(*(uint *)(v1 + 684), 0);
  Function_2021cac(*(uint *)(v1 + 680), 0);
  Function_2021cc8(*(uint *)(v1 + 676), 1);
  Function_2021cc8(*(uint *)(v1 + 684), 1);
  Function_2021cc8(*(uint *)(v1 + 688), 1);
  return Function_2021e80(*(uint *)(v1 + 680), 3);
}

//----- (021D1C28) --------------------------------------------------------
int __fastcall Function_21d1c28(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = 0;
  do
  {
    result = Function_200c7e4(*(uint *)(v1 + 676));
    ++v2;
    v1 += 4;
  }
  while ( v2 < 4 );
  return result;
}

//----- (021D1C44) --------------------------------------------------------
uint __fastcall Function_21d1c44(int a1, int a2)
{
  uint *v2;
  int v3;

  v2 = (uint *)a1;
  if ( a2 )
  {
    Function_2021e90(*(uint *)(a1 + 676), 0);
    v3 = 1;
  }
  else
  {
    Function_2021e90(*(uint *)(a1 + 676), 1);
    v3 = 0;
  }
  Function_2021cc8(v2[169], v3);
  Function_2021cc8(v2[171], v3);
  return Function_2021cc8(v2[172], v3);
}

//----- (021D1C90) --------------------------------------------------------
int __fastcall Function_21d1c90(int a1, int a2, short a3, short a4)
{
  int v4;
  int v5;
  short v6;
  short v7;
  int v8;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( *(uchar *)(a1 + 14) == 8 )
  {
    Function_2021cac(*(uint *)(a1 + 680), 1);
    if ( v5 == 10 )
    {
      Function_2021e50(*(uint *)(v4 + 680), 1u);
      Function_2021cac(*(uint *)(v4 + 676), 0);
    }
    else
    {
      Function_2021e50(*(uint *)(v4 + 680), 0);
      Function_2021cac(*(uint *)(v4 + 676), 1);
    }
  }
  else
  {
    Function_2021cac(*(uint *)(a1 + 676), 1);
    Function_2021cac(*(uint *)(v4 + 680), 0);
  }
  if ( *(uchar *)(v4 + 14) )
  {
    if ( *(uchar *)(v4 + 14) == 8 )
    {
      Function_2021cac(*(uint *)(v4 + 688), 0);
    }
    else
    {
      Function_2021cac(*(uint *)(v4 + 684), 1);
      Function_2021cac(*(uint *)(v4 + 688), 1);
    }
  }
  else
  {
    Function_2021cac(*(uint *)(v4 + 684), 0);
  }
  return Function_200d494(*(uint *)(v4 + 676), (short)(72 * v6 + 54), (short)(24 * v7 + 68), v8);
}

