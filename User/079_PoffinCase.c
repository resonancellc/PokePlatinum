//----- (021D0D80) --------------------------------------------------------
int __fastcall Function_79_21d0d80(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = LoadPtrToOverWorldDataIn18(a1);
  Function_2017fc8(3, 45, 0x20000);
  v3 = MallocSomeDataAndStorePtrInOverlayData1c(v1, 512, 0x2Du);
  MI_CpuFill8((ushort *)v3, 0, 0x200u);
  *(uint *)v3 = 45;
  *(uint *)(v3 + 32) = v2;
  *(uchar *)(v3 + 27) = *(uchar *)(v2 + 3);
  *(ushort *)(v3 + 20) = -1;
  return 1;
}

//----- (021D0DC4) --------------------------------------------------------
BOOL __fastcall Function_79_21d0dc4(int a1)
{
  int v1;

  v1 = LoadOverlayData1c(a1);
  return Function_21d0e1c(v1) != 0;
}

//----- (021D0DDC) --------------------------------------------------------
int __fastcall Function_79_21d0ddc(int a1)
{
  int v1;
  int v2;
  int *v3;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  v3 = (int *)v2;
  *(uchar *)(*(uint *)(v2 + 32) + 1) = *(uchar *)(v2 + 26);
  *(uchar *)(*(uint *)(v2 + 32) + 2) = *(uint *)(v2 + 16);
  *(uchar *)(*(uint *)(v2 + 32) + 3) = *(uchar *)(v2 + 27);
  *(ushort *)(*(uint *)(v2 + 32) + 4) = *(ushort *)(v2 + 128);
  *(ushort *)(*(uint *)(v2 + 32) + 6) = *(ushort *)(v2 + 130);
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(*v3);
  return 1;
}

//----- (021D0E1C) --------------------------------------------------------
int __fastcall Function_21d0e1c(int a1)
{
  int v1;
  uint v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 4);
  if ( v2 <= 6 )
    JUMPOUT(__CS__, *((short *)&off_21D0E36 + v2) + 35458616);
  switch ( (uchar)v2 )
  {
    case 0:
      SetMainLoopFunctionCall(0, 0);
      Function_20177a4();
      Function_201ff00();
      Function_201ff68();
      REG_DISPCNT &= 0xFFFFE0FF;
      REG_DISPCNT_SUB &= 0xFFFFE0FF;
      SetBrightnessWithValue(0, 0);
      SetBrightnessWithValue(1, 0);
      Function_200f32c(0);
      Function_200f32c(1);
      Function_201e3d8();
      Function_201e450(4u);
      goto LABEL_19;
    case 1:
      if ( !Function_21d122c() )
        return 0;
      *(uint *)(v1 + 12) = 0;
      Function_200f174(0, 1, 1, 0, 6, 1, *(uint *)v1);
      goto LABEL_19;
    case 2:
      Function_21d21f8();
      if ( Function_200f2ac() )
        goto LABEL_19;
      return 0;
    case 3:
      Function_21d21f8();
      if ( !((int (__fastcall *)(int))dword_21D3938[*(ushort *)(v1 + 24) + 5])(v1) )
        return 0;
      *(uint *)(v1 + 12) = 0;
      Function_200f174(0, 0, 0, 0, 6, 1, *(uint *)v1);
LABEL_19:
      ++*(uint *)(v1 + 4);
      return 0;
    case 4:
      Function_21d21f8();
      if ( Function_200f2ac() )
        goto LABEL_19;
      return 0;
    case 5:
      if ( Function_21d12a0() )
        goto LABEL_19;
      return 0;
    case 6:
      Function_201e530();
      SetBrightnessWithValue(0, 0);
      SetBrightnessWithValue(1, 0);
      SetMainLoopFunctionCall(0, 0);
      Function_201ff00();
      Function_201ff68();
      REG_DISPCNT &= 0xFFFFE0FF;
      REG_DISPCNT_SUB &= 0xFFFFE0FF;
      goto LABEL_19;
    default:
      return 1;
  }
}

//----- (021D0F7C) --------------------------------------------------------
int __fastcall Function_21d0f7c(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( *(uint *)(a1 + 440) )
    Function_200c800();
  Function_201dcac();
  Function_201c2b8(*(uint *)(v1 + 36));
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (021D0FB0) --------------------------------------------------------
int __fastcall Function_21d0fb0(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = Function_2022664((uchar *)&dword_21D3938[11]);
  if ( result == -1 )
  {
    if ( Function_2022644((uchar *)&dword_21D3938[11]) == -1 && *(ushort *)(v1 + 20) == 1 )
      Function_21d1b24(v1, *(uchar *)(v1 + 27), 2);
    result = -1;
  }
  return result;
}

//----- (021D0FEC) --------------------------------------------------------
int __fastcall Function_21d0fec(int a1)
{
  int v1;
  int v2;
  int result;
  int v4;

  v1 = a1;
  v2 = -1;
  if ( !*(uint *)(a1 + 196) )
    return 0;
  v4 = Function_21d0fb0(a1);
  if ( dword_21BF6C0 )
  {
    if ( !*(ushort *)(v1 + 20) )
      v2 = Function_2001288(*(uint *)(v1 + 196));
    if ( v2 == -1 )
    {
      result = 0;
    }
    else if ( dword_21BF6C4 & 2 )
    {
      Function_2005748(0x5DCu);
      *(uchar *)(v1 + 26) = -1;
      *(uint *)(v1 + 16) = 0;
      result = 1;
    }
    else if ( dword_21BF6C4 & 1 )
    {
      Function_2005748(0x5DCu);
      if ( v2 != 255 && v2 != -2 && v2 != -1 )
      {
        *(uchar *)(v1 + 26) = v2;
        *(ushort *)(v1 + 24) = 1;
        result = 0;
      }
      else
      {
        *(uchar *)(v1 + 26) = -1;
        *(uint *)(v1 + 16) = 0;
        result = 1;
      }
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    if ( v4 >= 0 )
      Function_21d1c44(v1, (uchar)v4);
    result = 0;
  }
  return result;
}

//----- (021D10A0) --------------------------------------------------------
int __fastcall Function_21d10a0(int a1)
{
  int v1;

  v1 = a1;
  Function_21d2214();
  Function_21d1ed8(v1);
  *(ushort *)(v1 + 24) = 2;
  return 0;
}

//----- (021D10B8) --------------------------------------------------------
int __fastcall Function_21d10b8(int a1)
{
  int v1;
  uint v2;
  int result;

  v1 = a1;
  v2 = Function_2001288(*(uint *)(a1 + 200));
  if ( dword_21BF6C4 & 2 )
  {
    Function_2005748(0x5DCu);
    Function_21d1f60(v1);
    Function_21d2214(v1, 0);
    result = 0;
    *(ushort *)(v1 + 24) = 0;
    return result;
  }
  if ( dword_21BF6C4 & 1 )
  {
    Function_2005748(0x5DCu);
    if ( v2 > 0xFFFFFFFE || v2 >= 0xFFFFFFFE || v2 > 1 )
      goto LABEL_17;
    if ( !v2 )
    {
      result = 1;
      *(uint *)(v1 + 16) = 1;
      return result;
    }
    if ( v2 == 1 )
    {
      Function_21d1f60(v1);
      Function_21d1fbc(v1);
      *(ushort *)(v1 + 24) = 3;
    }
    else
    {
LABEL_17:
      Function_21d1f60(v1);
      Function_21d2214(v1, 0);
      *(ushort *)(v1 + 24) = 0;
    }
  }
  return 0;
}

//----- (021D114C) --------------------------------------------------------
int __fastcall Function_21d114c(int a1)
{
  int v1;

  v1 = a1;
  if ( !Function_201d724(*(uchar *)(a1 + 31)) )
  {
    Function_21d2054(v1);
    *(ushort *)(v1 + 24) = 4;
  }
  return 0;
}

//----- (021D116C) --------------------------------------------------------
int __fastcall Function_21d116c(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = Function_2002114(*(uint *)(a1 + 212), *(uint *)a1);
  if ( v2 )
  {
    if ( v2 == -2 )
    {
      Function_2005748(0x5DCu);
      Function_200e084(v1 + 264, 0);
      *(ushort *)(v1 + 24) = 1;
    }
    result = 0;
  }
  else
  {
    Function_2005748(0x5DCu);
    Function_21d2008(v1);
    *(ushort *)(v1 + 24) = 5;
    result = 0;
  }
  return result;
}

//----- (021D11C0) --------------------------------------------------------
int __fastcall Function_21d11c0(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( Function_201d724(*(uchar *)(a1 + 31)) )
    return 0;
  if ( !(dword_21BF6C4 & 3) )
    return 0;
  Function_200e084(v1 + 264, 1);
  Function_201acf4(v1 + 264);
  *(uchar *)(*(uint *)(v1 + 32) + 32 + 8 * *(uchar *)(v1 + 26)) |= 0x40u;
  *(uchar *)(*(uint *)(v1 + 32) + 2) = 1;
  Function_21d1ab8(v1, 0);
  Function_21d196c(v1);
  Function_21d2214(v1, 0);
  result = 0;
  *(ushort *)(v1 + 24) = 0;
  return result;
}

//----- (021D122C) --------------------------------------------------------
int __fastcall Function_21d122c(int a1)
{
  int v1;
  int result;

  v1 = a1;
  switch ( (uchar)*(uint *)(a1 + 8) )
  {
    case 0u:
      Function_21d132c();
      goto LABEL_8;
    case 1u:
      Function_21d13c4();
      goto LABEL_8;
    case 2u:
      Function_21d1568();
      Function_21d14a4(v1);
      goto LABEL_8;
    case 3u:
      Function_21d20f4();
      goto LABEL_8;
    case 4u:
      Function_21d167c();
      goto LABEL_8;
    case 5u:
      Function_21d196c(a1);
      Function_21d1b24(v1, *(uchar *)(v1 + 27), 4);
      SetMainLoopFunctionCall((int)Function_21d0f7c, v1);
      *(uint *)(v1 + 8) = 0;
      result = 1;
      break;
    default:
LABEL_8:
      ++*(uint *)(v1 + 8);
      result = 0;
      break;
  }
  return result;
}

//----- (021D12A0) --------------------------------------------------------
int __fastcall Function_21d12a0(int a1)
{
  int v1;
  int result;

  v1 = a1;
  switch ( (uchar)*(uint *)(a1 + 8) )
  {
    case 0u:
      if ( *(uint *)(a1 + 208) )
        Function_21d1f60(a1);
      Function_21d1ab8(v1, 1);
      goto LABEL_10;
    case 1u:
      Function_21d17e8();
      Function_21d21cc(v1);
      goto LABEL_10;
    case 2u:
      Function_21d1548();
      Function_21d1618(v1);
      goto LABEL_10;
    case 3u:
      Function_21d14a0();
      goto LABEL_10;
    case 4u:
      Function_21d13a4();
      goto LABEL_10;
    case 5u:
      result = 1;
      break;
    default:
LABEL_10:
      ++*(uint *)(v1 + 8);
      result = 0;
      break;
  }
  return result;
}

//----- (021D130C) --------------------------------------------------------
char *Function_21d130c()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_21D3980;
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

//----- (021D132C) --------------------------------------------------------
uint __fastcall Function_21d132c(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  char *v6;
  int v7;
  int v8;
  int v9;
  uchar v10;
  int v11;
  int *v12;
  uint result;
  int v14;
  int v15;
  int v16;
  int v17;
  char v18;
  int v19;

  v19 = a4;
  v4 = a1;
  Function_21d130c();
  *(uint *)(v4 + 36) = Function_2018340(*(uint *)v4);
  v14 = 1;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  SetGraphicsModes(&v14);
  v5 = dword_21D3A10;
  v6 = &v18;
  v7 = 21;
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
  v10 = 0;
  v11 = 0;
  v12 = (int *)&v18;
  do
  {
    Function_20183c4(*(uint **)(v4 + 36), v10, v12, 0);
    Function_2019ebc(*(uint **)(v4 + 36), v10);
    result = Function_2019690(v10, 32, 0, *(uint *)v4);
    ++v11;
    ++v10;
    v12 += 7;
  }
  while ( v11 < 6 );
  return result;
}

//----- (021D13A4) --------------------------------------------------------
uint __fastcall Function_21d13a4(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = 0;
  do
    Function_2019044(*(uint *)(v1 + 36), (uchar)v2++);
  while ( v2 < 6 );
  return free(*(uint *)(v1 + 36));
}

//----- (021D13C4) --------------------------------------------------------
int __fastcall Function_21d13c4(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int *v5;

  v4 = a1;
  v5 = LoadFromNARC_8(83, *a1, a3, a4);
  Function_208c210((uint *)v4[9], *v4, (int)v5, 83, 2u, 0, 0, 0, 0);
  Function_208c210((uint *)v4[9], *v4, (int)v5, 83, 3u, 5u, 0, 0, 0);
  Function_208c210((uint *)v4[9], *v4, (int)v5, 83, 0, 0, 2, 384, 0);
  Function_208c210((uint *)v4[9], *v4, (int)v5, 83, 0, 4u, 2, 384, 0);
  Function_208c210((uint *)v4[9], *v4, (int)v5, 83, 0xAu, 3u, 1, 0, 0);
  Function_208c210((uint *)v4[9], *v4, (int)v5, 83, 0xBu, 5u, 1, 0, 0);
  Call_FS_CloseFile(v5);
  Function_201c3c0(v4[9], 3);
  return Function_201c3c0(v4[9], 5);
}

//----- (021D14A0) --------------------------------------------------------
void Function_21d14a0()
{
  ;
}

//----- (021D14A4) --------------------------------------------------------
int __fastcall Function_21d14a4(int a1)
{
  int v1;
  uchar v2;
  char *v3;
  int v4;
  int v5;

  v1 = a1;
  Function_200daa4(*(uint **)(a1 + 36), 1u, 31, 15, 0, *(uint *)a1);
  v2 = Function_2027b50(*(ushort **)(*(uint *)(v1 + 32) + 24));
  Function_200dd0c(*(uint **)(v1 + 36), 1u, 1, 14, v2, *(uint *)v1);
  LoadFromNARC_PlFont1(0, 416, *(uint *)v1);
  LoadFromNARC_PlFont2(0, 384, *(uint *)v1);
  LoadFromNARC_PlFont1(4u, 416, *(uint *)v1);
  v3 = &byte_21D39A8;
  v4 = 0;
  v5 = v1 + 232;
  do
  {
    Function_201a7e8(
      *(uint **)(v1 + 36),
      v5,
      (uchar)*v3,
      v3[1],
      v3[2],
      v3[3],
      v3[4],
      v3[5],
      *((ushort *)v3 + 3));
    Function_201ada4_ClearTextBox(v5, 0);
    ++v4;
    v3 += 8;
    v5 += 16;
  }
  while ( v4 < 13 );
  return Function_21d2078(v1);
}

//----- (021D1548) --------------------------------------------------------
uint __fastcall Function_21d1548(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = 0;
  v2 = a1 + 232;
  do
  {
    Function_201acf4(v2);
    result = Function_201a8fc(v2);
    ++v1;
    v2 += 16;
  }
  while ( v1 < 13 );
  return result;
}

//----- (021D1568) --------------------------------------------------------
int __fastcall Function_21d1568(uint *a1)
{
  uint *v1;
  int v2;
  uint *v3;
  int result;

  v1 = a1;
  Function_2002bb8(2, *a1);
  v1[11] = LoadFromMsgNARC(0, 26, 463, *v1);
  v1[10] = (uint)Function_20158a8(*v1);
  v1[12] = (uint)Function_200b368(2u, 64, *v1);
  v1[13] = Function_2023790(64, *v1);
  v1[14] = (uint)Function_200b1ec_CallMsgDecrypt((ushort **)v1[11], 6u);
  v1[15] = (uint)Function_200b1ec_CallMsgDecrypt((ushort **)v1[11], 0x16u);
  v1[16] = (uint)Function_200b1ec_CallMsgDecrypt((ushort **)v1[11], 4u);
  v1[17] = (uint)Function_200b1ec_CallMsgDecrypt((ushort **)v1[11], 7u);
  v1[18] = (uint)Function_200b1ec_CallMsgDecrypt((ushort **)v1[11], 8u);
  v1[19] = (uint)Function_200b1ec_CallMsgDecrypt((ushort **)v1[11], 0);
  v2 = 0;
  v3 = v1;
  do
  {
    v3[20] = (uint)Function_200b1ec_CallMsgDecrypt((ushort **)v1[11], v2 + 11);
    if ( v2 >= 5 )
      break;
    v3[26] = (uint)Function_200b1ec_CallMsgDecrypt((ushort **)v1[11], v2++ + 17);
    ++v3;
  }
  while ( v2 < 6 );
  result = Function_2027ac0(*(ushort **)(v1[8] + 24));
  *((uchar *)v1 + 124) = result;
  return result;
}

//----- (021D1618) --------------------------------------------------------
uint *__fastcall Function_21d1618(int a1, int a2)
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

  v2 = a1;
  v3 = 0;
  v4 = a1;
  do
  {
    Function_20237bc_FreeMsg(*(uint *)(v4 + 80), a2);
    if ( v3 >= 5 )
      break;
    Function_20237bc_FreeMsg(*(uint *)(v4 + 104), a2);
    ++v3;
    v4 += 4;
  }
  while ( v3 < 6 );
  Function_20237bc_FreeMsg(*(uint *)(v2 + 76), a2);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 72), v5);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 68), v6);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 64), v7);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 60), v8);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 56), v9);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 52), v10);
  Function_200b3f0(*(uint **)(v2 + 48), v11);
  Function_20158f4(*(ushort ***)(v2 + 40), v12);
  Function_200b190(*(ushort **)(v2 + 44));
  return Function_2002c60(2);
}

//----- (021D167C) --------------------------------------------------------
uint __fastcall Function_21d167c(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  short *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  short *v10;
  int v11;
  int v12;
  uint v14;

  v1 = a1;
  v2 = &dword_21D3AB8;
  v3 = 0;
  v4 = a1;
  do
  {
    *(uint *)(v4 + 448) = Function_200ca08(*(int **)(v1 + 440), *(uint *)(v1 + 444), (int)v2);
    Function_2021cac(*(uint *)(v4 + 448), 1);
    ++v3;
    v2 += 10;
    v4 += 4;
  }
  while ( v3 < 3 );
  Function_2021cc8(*(uint *)(v1 + 448), 0);
  Function_2021cc8(*(uint *)(v1 + 452), 1);
  Function_2021cc8(*(uint *)(v1 + 456), 1);
  v5 = &word_21D3920;
  v6 = 0;
  v7 = v1;
  do
  {
    *(uint *)(v7 + 460) = Function_200ca08(*(int **)(v1 + 440), *(uint *)(v1 + 444), (int)&dword_21D3B30);
    Function_2021cac(*(uint *)(v7 + 460), 1);
    Function_2021d6c(*(uint *)(v7 + 460), v6 + 3);
    Function_200d494(*(uint *)(v7 + 460), *v5, v5[1], v8);
    ++v6;
    v7 += 4;
    v5 += 2;
  }
  while ( v6 < 5 );
  v9 = 0;
  v10 = &word_21D3934;
  v11 = v1;
  v14 = 0;
  do
  {
    *(uint *)(v11 + 480) = Function_200ca08(*(int **)(v1 + 440), *(uint *)(v1 + 444), (int)dword_21D3B58);
    Function_2021cac(*(uint *)(v11 + 480), 1);
    Function_2021d6c(*(uint *)(v11 + 480), v14);
    Function_2021ce4(*(uint *)(v11 + 480), 0x2000);
    Function_2021e90(*(uint *)(v11 + 480), v9 + 2);
    Function_2021cc8(*(uint *)(v11 + 480), 0);
    Function_200d494(*(uint *)(v11 + 480), *v10, v10[1], v12);
    ++v9;
    v11 += 4;
    v10 += 2;
    v14 += 3;
  }
  while ( v9 < 6 );
  *(uint *)(v1 + 508) = Function_209916c(*(uint *)(v1 + 504), 0, 231, 76, 0, 1u, 0, 0);
  return Function_200d3f4(*(uint **)(*(uint *)(v1 + 508) + 4), 0);
}

//----- (021D17E8) --------------------------------------------------------
int __fastcall Function_21d17e8(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int result;

  v1 = a1;
  Function_2099370(*(uint *)(a1 + 504), *(ushort **)(a1 + 508));
  v2 = 0;
  v3 = v1;
  do
  {
    Function_200c7e4(*(uint *)(v3 + 480));
    ++v2;
    v3 += 4;
  }
  while ( v2 < 6 );
  v4 = 0;
  v5 = v1;
  do
  {
    Function_200c7e4(*(uint *)(v5 + 460));
    ++v4;
    v5 += 4;
  }
  while ( v4 < 5 );
  v6 = 0;
  do
  {
    result = Function_200c7e4(*(uint *)(v1 + 448));
    ++v6;
    v1 += 4;
  }
  while ( v6 < 3 );
  return result;
}

//----- (021D183C) --------------------------------------------------------
uchar *__fastcall Function_21d183c(uchar *result)
{
  result[4] &= 0xDFu;
  result[6] = -1;
  result[7] = result[6];
  return result;
}

//----- (021D1850) --------------------------------------------------------
int __fastcall Function_21d1850(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;

  v4 = a1;
  if ( a4 )
    Function_200e060(a1 + 264, 1, 1, 0xEu);
  Function_201ae78(v4 + 264, 255, 0, 0, 0xD8u, 0x20u);
  Function_2002ac8(1);
  Function_2002ae4(0);
  result = Function_201d78c(v4 + 264, 1);
  *(uchar *)(v4 + 31) = result;
  return result;
}

//----- (021D18B4) --------------------------------------------------------
int __fastcall Function_21d18b4(uchar *a1, uchar *a2)
{
  uchar *v2;
  int v3;
  int v4;
  int i;
  int v6;
  uchar *v7;
  uchar v8;
  uchar *v10;
  int v11;
  int v12;

  v10 = a1;
  v11 = 0;
  v2 = a2;
  a2[30] = -1;
  a2[29] = a2[30];
  v3 = a2[27];
  if ( v3 == 5 )
  {
    LOBYTE(v4) = 31;
  }
  else
  {
    v4 = 1;
    for ( i = 0; i < v3; i = (i + 1) & 0xFFFF )
      v4 = 2 * v4 & 0xFF;
  }
  v6 = 0;
  if ( (int)*a1 > 0 )
  {
    v12 = (int)(a1 + 28);
    do
    {
      v7 = (uchar *)(v12 + 8 * v6);
      Function_21d183c((uchar *)(v12 + 8 * v6));
      if ( v7[4] & 0x80 && !(v7[4] & 0x40) && v7[4] & 0x1F & (uchar)v4 )
      {
        v7[4] |= 0x20u;
        v8 = v7[5];
        if ( v2[29] == 255 )
          v2[29] = v8;
        else
          v10[8 * v2[30] + 35] = v8;
        v7[6] = v2[30];
        v2[30] = v7[5];
        v11 = (v11 + 1) & 0xFFFF;
      }
      v6 = (v6 + 1) & 0xFFFF;
    }
    while ( v6 < *v10 );
  }
  return (v11 + 1) & 0xFFFF;
}

//----- (021D196C) --------------------------------------------------------
int __fastcall Function_21d196c(int a1)
{
  int v1;
  int v2;
  int v3;
  uchar *v4;
  int v5;
  int v6;
  uint v7;
  int result;

  v1 = a1;
  *(uchar *)(a1 + 28) = Function_21d18b4(*(uchar **)(a1 + 32), (uchar *)a1);
  *(uint *)(v1 + 204) = Function_2013a04(*(uchar *)(v1 + 28), *(uint *)v1);
  v3 = *(uchar *)(v1 + 30);
  while ( v3 != 255 )
  {
    v4 = (uchar *)(*(uint *)(v1 + 32) + 28 + 8 * v3);
    v3 = v4[6];
    v5 = Function_2015918(*(uint *)(v1 + 40), v4[2]);
    Function_200b48c(*(int **)(v1 + 48), 0, v5);
    Function_200b60c(*(uint *)(v1 + 48), 1u, v4[1], 2, 2, 1);
    Function_200c388(*(uint **)(v1 + 48), *(uint *)(v1 + 52), *(uint *)(v1 + 60));
    Function_2013a6c(*(uint **)(v1 + 204), *(uint *)(v1 + 52), v4[5], v6);
  }
  Function_2013a6c(*(uint **)(v1 + 204), *(uint *)(v1 + 56), 255, v2);
  MI_CpuCopy8((int)&dword_21D3BA0[4], v1 + 132, 0x20u, v7);
  *(ushort *)(v1 + 130) = *(ushort *)(*(uint *)(v1 + 32) + 6);
  *(ushort *)(v1 + 128) = *(ushort *)(*(uint *)(v1 + 32) + 4);
  if ( *(uchar *)(*(uint *)(v1 + 32) + 2) )
  {
    if ( *(ushort *)(v1 + 128) )
    {
      if ( *(ushort *)(v1 + 128) + 6 >= *(uchar *)(v1 + 28) )
        --*(ushort *)(v1 + 128);
    }
    else if ( *(ushort *)(v1 + 130) && *(ushort *)(v1 + 130) >= *(uchar *)(v1 + 28) - 1 )
    {
      --*(ushort *)(v1 + 130);
    }
    *(uchar *)(*(uint *)(v1 + 32) + 2) = 0;
  }
  *(uint *)(v1 + 144) = v1 + 232;
  *(uint *)(v1 + 132) = *(uint *)(v1 + 204);
  *(uint *)(v1 + 160) = v1;
  *(ushort *)(v1 + 148) = *(uchar *)(v1 + 28);
  *(ushort *)(v1 + 22) = 0;
  *(uint *)(v1 + 196) = Function_200112c(
                            (uint *)(v1 + 132),
                            *(ushort *)(v1 + 128),
                            *(ushort *)(v1 + 130),
                            *(uint *)v1 & 0xFF);
  result = 1;
  *(ushort *)(v1 + 22) = 1;
  return result;
}

//----- (021D1AB8) --------------------------------------------------------
int __fastcall Function_21d1ab8(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a1;
  v3 = a2;
  Function_201ae78(a1 + 232, 0, 0, 0, 0xB0u, 0x60u);
  if ( v3 )
    Function_201acf4(v2 + 232);
  Function_2001384(*(uint *)(v2 + 196), (ushort *)(v2 + 128), (ushort *)(v2 + 130));
  Function_2013a3c(*(int **)(v2 + 204));
  *(ushort *)(*(uint *)(v2 + 32) + 4) = *(ushort *)(v2 + 128);
  *(ushort *)(*(uint *)(v2 + 32) + 6) = *(ushort *)(v2 + 130);
  result = v2 + 196;
  *(uint *)(v2 + 196) = 0;
  *(uint *)(v2 + 204) = 0;
  return result;
}

//----- (021D1B24) --------------------------------------------------------
int __fastcall Function_21d1b24(int a1, int a2, uint a3)
{
  int v3;
  int v4;

  v3 = a1;
  v4 = a2;
  if ( a3 <= 4 )
    JUMPOUT(__CS__, (char *)&off_21D1B3C + *((short *)&off_21D1B3C + a3) + 2);
  switch ( (uchar)a1 )
  {
    case 0:
      Function_2021d6c(*(uint *)(a1 + 480 + 4 * a2), 3 * a2);
      Function_2021cc8(*(uint *)(v3 + 480 + 4 * v4), 0);
      Function_201c04c(v3 + 232 + 16 * (v4 + 7), 1u, 2, 0);
      break;
    case 1:
      Function_2021de0(*(uint *)(a1 + 480 + 4 * a2), a2, a3);
      Function_2021cc8(*(uint *)(v3 + 480 + 4 * v4), 1);
      Function_201c04c(v3 + 232 + 16 * (v4 + 7), 0, 4, 0);
      *(ushort *)(v3 + 20) = 1;
      break;
    case 2:
      Function_2021d6c(*(uint *)(a1 + 4 * a2 + 480), 3 * a2 + 1);
      Function_201c04c(v3 + 232 + 16 * (v4 + 7), 1u, 2, 0);
      *(ushort *)(v3 + 20) = 0;
      break;
    case 3:
      Function_2021d6c(*(uint *)(a1 + 4 * a2 + 480), 3 * a2 + 2);
      Function_201c04c(v3 + 232 + 16 * (v4 + 7), 0, 2, 0);
      *(ushort *)(v3 + 20) = 1;
      break;
    case 4:
      Function_2021d6c(*(uint *)(a1 + 480 + 4 * a2), 3 * a2 + 1);
      Function_2021cc8(*(uint *)(v3 + 480 + 4 * v4), 1);
      Function_201c04c(v3 + 232 + 16 * (v4 + 7), 0, 2, 0);
      *(ushort *)(v3 + 20) = 0;
      break;
    default:
      return Function_201a954(v3 + 232 + 16 * (v4 + 7), a2);
  }
  return Function_201a954(v3 + 232 + 16 * (v4 + 7), a2);
}

//----- (021D1C44) --------------------------------------------------------
int __fastcall Function_21d1c44(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v6;
  int v7;

  v2 = a1;
  v3 = a2;
  Function_2005748(0x5E4u);
  if ( *(ushort *)(v2 + 20) != 0xFFFF )
  {
    v4 = *(uchar *)(v2 + 27);
    if ( v3 == v4 )
      return Function_21d1b24(v2, v3, 3u);
    Function_21d1b24(v2, v4, 0);
  }
  Function_21d1b24(v2, v3, 1u);
  *(uchar *)(v2 + 27) = v3;
  Function_21d1ab8(v2, 0);
  *(ushort *)(v2 + 130) = 0;
  *(ushort *)(v2 + 128) = *(ushort *)(v2 + 130);
  *(ushort *)(*(uint *)(v2 + 32) + 6) = 0;
  *(ushort *)(*(uint *)(v2 + 32) + 4) = *(ushort *)(*(uint *)(v2 + 32) + 6);
  Function_21d196c(v2);
  Function_201ae78(v2 + 328, 0, 0, 0, 0xA0u, 0x18u);
  v6 = *(uchar *)(v2 + 27);
  if ( v6 == 5 )
    return Function_201a954(v2 + 328, 5);
  Function_2002d7c(0, *(uint *)(v2 + 4 * v6 + 104), 0);
  v7 = *(uint *)(v2 + 4 * *(uchar *)(v2 + 27) + 104);
  return Function_201d78c(v2 + 328, 0);
}

//----- (021D1D20) --------------------------------------------------------
uint __fastcall Function_21d1d20(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint v5;
  uint result;
  uint v7;

  v2 = a1;
  v3 = a2;
  v4 = 1;
  if ( a2 )
  {
    v7 = 0;
    do
    {
      if ( *(uchar *)(v3 + 4) & (uchar)v4 )
        Function_2021cac(*(uint *)(v2 + 4 * v7 + 460), 1);
      else
        Function_2021cac(*(uint *)(v2 + 4 * v7 + 460), 0);
      v4 = 2 * v4 & 0xFF;
      result = (v7 + 1) << 24;
      v7 = (v7 + 1) & 0xFF;
    }
    while ( v7 < 5 );
  }
  else
  {
    v5 = 0;
    do
    {
      Function_2021cac(*(uint *)(v2 + 4 * v5 + 460), 0);
      result = (v5 + 1) << 24;
      v5 = result >> 24;
    }
    while ( result >> 24 < 5 );
  }
  return result;
}

//----- (021D1D88) --------------------------------------------------------
uint __fastcall Function_21d1d88(int a1)
{
  return Function_2001504(a1, 0x13u);
}

//----- (021D1D94) --------------------------------------------------------
uint __fastcall Function_21d1d94(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint result;
  int v10;
  int v11;
  uint v12;
  int v13;
  char v14;
  ushort v15;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = Function_2001504(a1, 0x13u);
  if ( !v5 )
    Function_2005748(0x5DCu);
  Function_20014dc(v4, &v15, &v14);
  Function_200d494(*(uint *)(v6 + 448), 105, (short)(16 * *(ushort *)&v14 + 40), v7);
  if ( v15 )
    Function_2021cac(*(uint *)(v6 + 452), 1);
  else
    Function_2021cac(*(uint *)(v6 + 452), 0);
  if ( v15 >= *(uchar *)(v6 + 28) - 6 )
    Function_2021cac(*(uint *)(v6 + 456), 0);
  else
    Function_2021cac(*(uint *)(v6 + 456), 1);
  Function_201ae78(v6 + 248, 0, 0, 0, 0x50u, 0x10u);
  if ( v3 == 255 )
  {
    Function_21d1d20(v6, 0);
    Function_201a954(v6 + 248, v8);
    result = Function_200d3f4(*(uint **)(*(uint *)(v6 + 508) + 4), 0);
  }
  else
  {
    v10 = 8 * v3;
    Function_21d1d20(v6, *(uint *)(v6 + 32) + 28 + v10);
    Function_20237e8(*(uint *)(v6 + 52), v11);
    v12 = *(uchar *)(*(uint *)(v6 + 32) + v10 + 31);
    if ( v12 > 0x63 )
      v12 = 99;
    Function_200b60c(*(uint *)(v6 + 48), 0, v12, 2, 0, 1);
    Function_200c388(*(uint **)(v6 + 48), *(uint *)(v6 + 52), *(uint *)(v6 + 64));
    v13 = *(uint *)(v6 + 52);
    Function_201d78c(v6 + 248, 0);
    Function_209933c(
      *(uint *)(v6 + 504),
      *(ushort **)(v6 + 508),
      *(uchar *)(*(uint *)(v6 + 32) + v10 + 30));
    result = Function_200d3f4(*(uint **)(*(uint *)(v6 + 508) + 4), 1);
  }
  return result;
}

//----- (021D1ED8) --------------------------------------------------------
int __fastcall Function_21d1ed8(uint *a1)
{
  uint *v1;
  uint v2;
  uint v3;
  int result;

  v1 = a1;
  a1[52] = (uint)Function_2013a04(3u, *a1);
  v2 = 0;
  do
  {
    Function_2013a4c((uint *)v1[52], (ushort **)v1[11], v2 + 1, v2);
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 < 3 );
  MI_CpuCopy8((int)&dword_21D3B84[3], (uint)(v1 + 41), 0x20u, v3);
  v1[44] = (uint)(v1 + 70);
  v1[41] = v1[52];
  v1[48] = (uint)v1;
  *((ushort *)v1 + 90) = 3;
  Function_200dc48((int)(v1 + 70), 1, 31, 0xFu);
  result = Function_200112c(v1 + 41, 0, 0, *v1 & 0xFF);
  v1[50] = result;
  return result;
}

//----- (021D1F60) --------------------------------------------------------
int __fastcall Function_21d1f60(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  char v6;
  short v7;
  int v8;

  v8 = a4;
  v4 = a1;
  Function_200dc9c(a1 + 280, 0);
  Function_201acf4(v4 + 280);
  Function_2001384(*(uint *)(v4 + 200), &v6, &v7);
  Function_2013a3c(*(int **)(v4 + 208));
  result = v4 + 200;
  *(uint *)(v4 + 200) = 0;
  *(uint *)(v4 + 208) = 0;
  return result;
}

//----- (021D1FA8) --------------------------------------------------------
int __fastcall Function_21d1fa8(int a1, int a2, int a3)
{
  int result;

  if ( !a3 )
    result = Function_2005748(0x5DCu);
  return result;
}

//----- (021D1FBC) --------------------------------------------------------
int __fastcall Function_21d1fbc(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  Function_20237e8(*(uint *)(a1 + 52), a2);
  v3 = Function_2015918(
         *(uint *)(v2 + 40),
         *(uchar *)(*(uint *)(v2 + 32) + 8 * *(uchar *)(v2 + 26) + 30));
  Function_200b48c(*(int **)(v2 + 48), 0, v3);
  Function_200c388(*(uint **)(v2 + 48), *(uint *)(v2 + 52), *(uint *)(v2 + 68));
  return Function_21d1850(v2, *(uint *)(v2 + 52), *(uchar *)(v2 + 124), 1);
}

//----- (021D2008) --------------------------------------------------------
int __fastcall Function_21d2008(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  Function_20237e8(*(uint *)(a1 + 52), a2);
  v3 = Function_2015918(
         *(uint *)(v2 + 40),
         *(uchar *)(*(uint *)(v2 + 32) + 8 * *(uchar *)(v2 + 26) + 30));
  Function_200b48c(*(int **)(v2 + 48), 0, v3);
  Function_200c388(*(uint **)(v2 + 48), *(uint *)(v2 + 52), *(uint *)(v2 + 72));
  return Function_21d1850(v2, *(uint *)(v2 + 52), *(uchar *)(v2 + 124), 0);
}

//----- (021D2054) --------------------------------------------------------
int __fastcall Function_21d2054(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = Function_2002100(*(uint **)(a1 + 36), (uchar *)&dword_21D3B84[1], 31, 15, *(uint *)a1);
  *(uint *)(v1 + 212) = result;
  return result;
}

//----- (021D2078) --------------------------------------------------------
int __fastcall Function_21d2078(int a1)
{
  int v1;
  int v2;
  char *v3;
  int v4;
  int v5;
  int v6;
  int result;
  int v8;

  v1 = a1;
  v2 = *(uint *)(a1 + 76);
  Function_201d78c(a1 + 312, 0);
  v3 = &byte_21D3B80;
  v4 = 0;
  v8 = v1 + 232;
  do
  {
    Function_2002d7c(2, *(uint *)(v1 + 80), 0);
    v5 = (uchar)*v3;
    v6 = *(uint *)(v1 + 80);
    result = Function_201d78c(v8 + 16 * (v4++ + 7), 2);
    v1 += 4;
    ++v3;
  }
  while ( v4 < 6 );
  return result;
}

//----- (021D20F4) --------------------------------------------------------
uint __fastcall Function_21d20f4(uint *a1)
{
  uint *v1;
  const char *v3;
  const char *v4;
  const char *v5;
  const char *v6;
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

  v1 = a1;
  Function_201dbec(32, *a1);
  v1[110] = (uint)Function_200c6e4(*v1);
  v1[111] = Function_200c704((uint *)v1[110]);
  v15 = 0;
  v16 = 128;
  v17 = 0;
  v18 = 32;
  v19 = 0;
  v20 = 128;
  v21 = 0;
  v22 = 32;
  v10 = 3;
  v11 = 1024;
  v12 = 1024;
  v13 = 16;
  v14 = 16;
  Function_200c73c((uint *)v1[110], &v15, &v10, 32);
  Function_200c7c0((int *)v1[110], (int **)v1[111], 14);
  Function_200a93c(*v1);
  Function_200a944(*v1);
  v3 = "data/porucase_chr.resdat";
  v4 = "data/porucase_pal.resdat";
  v5 = "data/porucase_cell.resdat";
  v6 = "data/porucase_canm.resdat";
  v7 = 0;
  v8 = 0;
  v9 = 35470704;
  Function_200c8f0((uint *)v1[110], v1[111], (int)&v3);
  v1[126] = Function_2098ffc(*v1, 1u, 1, 1, 0);
  if ( Function_2035e38() )
    Function_2039734();
  Function_201ff0c(0x10u, 1);
  return Function_201ff74(0x10u, 1);
}

//----- (021D21CC) --------------------------------------------------------
int *__fastcall Function_21d21cc(int a1)
{
  int v1;

  v1 = a1;
  Function_209903c(*(uint *)(a1 + 504));
  Function_200c8b0(*(uint *)(v1 + 440), *(int ***)(v1 + 444));
  Function_200c8d4(*(uint *)(v1 + 440));
  return Function_201dc3c();
}

//----- (021D21F8) --------------------------------------------------------
int __fastcall Function_21d21f8(int a1)
{
  int v1;

  v1 = a1;
  Function_200c7ec(*(int **)(a1 + 444));
  return Function_2099160(*(uint *)(v1 + 504));
}

//----- (021D2214) --------------------------------------------------------
uint __fastcall Function_21d2214(int a1, int a2)
{
  int v2;
  uint result;

  v2 = a1;
  if ( a2 )
  {
    Function_2021e90(*(uint *)(a1 + 448), 9);
    Function_2021cc8(*(uint *)(v2 + 452), 0);
    result = Function_2021cc8(*(uint *)(v2 + 456), 0);
  }
  else
  {
    Function_2021e90(*(uint *)(a1 + 448), 0);
    Function_2021cc8(*(uint *)(v2 + 452), 1);
    result = Function_2021cc8(*(uint *)(v2 + 456), 1);
  }
  return result;
}

//----- (021D2268) --------------------------------------------------------
int __fastcall Function_21d2268(uint *a1, int *a2, int *a3, int a4)
{
  uint *v4;
  int *v5;
  int *v6;
  int v7;
  int result;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  *a2 = FX_Div(*a3, a4);
  v5[1] = FX_Div(v6[1], v7);
  v5[2] = FX_Div(v6[2], v7);
  *v4 = 0;
  v4[1] = 0;
  result = 0;
  v4[2] = 0;
  return result;
}

//----- (021D22AC) --------------------------------------------------------
int __fastcall Function_79_21d22ac(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = LoadPtrToOverWorldDataIn18(a1);
  Function_2017fc8(3, 46, 0x10000);
  v3 = MallocSomeDataAndStorePtrInOverlayData1c(v1, 444, 0x2Eu);
  MI_CpuFill8((ushort *)v3, 0, 0x1BCu);
  *(uint *)v3 = 46;
  *(uint *)(v3 + 16) = v2;
  return 1;
}

//----- (021D22E4) --------------------------------------------------------
int __fastcall Function_79_21d22e4(int a1, int *a2)
{
  int *v2;
  int *v3;
  int v4;
  int v6;

  v2 = a2;
  v3 = (int *)LoadOverlayData1c(a1);
  if ( *v2 >= 2 && *v2 <= 5 )
  {
    Function_21d3820(v3 + 16);
    Function_2099160(v3[23]);
  }
  v4 = *v2;
  if ( (uint)*v2 <= 7 )
    JUMPOUT(__CS__, *((short *)&off_21D231C + v4) + 35463966);
  switch ( (uchar)v4 )
  {
    case 0:
      SetMainLoopFunctionCall(0, 0);
      Function_20177a4();
      Function_201ff00();
      Function_201ff68();
      REG_DISPCNT &= 0xFFFFE0FF;
      REG_DISPCNT_SUB &= 0xFFFFE0FF;
      SetBrightnessWithValue(0, 0);
      SetBrightnessWithValue(1, 0);
      Function_200f32c(0);
      Function_200f32c(1);
      goto LABEL_25;
    case 1:
      if ( !Function_21d247c(v3) )
        return 0;
      SetMainLoopFunctionCall((int)Function_21d252c, (int)v3);
      goto LABEL_25;
    case 2:
      v6 = v3[1];
      v3[1] = v6 + 1;
      if ( v6 < 4 )
        return 0;
      v3[1] = 0;
      Function_200f174(0, 1, 1, 0, 6, 1, *v3);
      goto LABEL_25;
    case 3:
      if ( Function_200f2ac() )
        goto LABEL_25;
      return 0;
    case 4:
      if ( !Function_21d2928(v3) )
        return 0;
      Function_200f174(0, 0, 0, 0, 6, 1, *v3);
LABEL_25:
      ++*v2;
      return 0;
    case 5:
      if ( Function_200f2ac() )
        goto LABEL_25;
      return 0;
    case 6:
      if ( Function_21d24d4(v3) )
        goto LABEL_25;
      return 0;
    case 7:
      SetBrightnessWithValue(0, 0);
      SetBrightnessWithValue(1, 0);
      SetMainLoopFunctionCall(0, 0);
      Function_201ff00();
      Function_201ff68();
      REG_DISPCNT &= 0xFFFFE0FF;
      REG_DISPCNT_SUB &= 0xFFFFE0FF;
      goto LABEL_25;
    default:
      return 1;
  }
}

//----- (021D2460) --------------------------------------------------------
int __fastcall Function_79_21d2460(int a1)
{
  int v1;
  int *v2;

  v1 = a1;
  v2 = (int *)LoadOverlayData1c(a1);
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(*v2);
  return 1;
}

//----- (021D247C) --------------------------------------------------------
int __fastcall Function_21d247c(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  v2 = a1[1];
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      Function_21d2768();
      Function_21d270c(v1);
    }
    else if ( v2 == 2 )
    {
      Function_21d27d8();
      Function_21d3768(v1 + 16, v1 + 12, *v1);
      Function_21d2864(v1);
      v1[1] = 0;
      return 1;
    }
  }
  else
  {
    Function_21d257c();
    Function_21d2634(v1);
  }
  ++v1[1];
  return 0;
}

//----- (021D24D4) --------------------------------------------------------
int __fastcall Function_21d24d4(int a1)
{
  int v1;
  int result;

  v1 = a1;
  switch ( (uchar)*(uint *)(a1 + 4) )
  {
    case 0u:
      Function_21d2908();
      Function_21d385c(v1 + 64);
      Function_21d2858(v1);
      goto LABEL_6;
    case 1u:
      Function_21d2754();
      Function_21d27ac(v1);
      goto LABEL_6;
    case 2u:
      Function_21d260c();
      goto LABEL_6;
    case 3u:
      *(uint *)(a1 + 4) = 0;
      result = 1;
      break;
    default:
LABEL_6:
      ++*(uint *)(v1 + 4);
      result = 0;
      break;
  }
  return result;
}

//----- (021D252C) --------------------------------------------------------
int __fastcall Function_21d252c(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_201c2b8(*(uint *)(a1 + 104));
  Function_2008a94(*(uint *)(v1 + 68));
  Function_200c800();
  Function_201dcac();
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (021D255C) --------------------------------------------------------
char *Function_21d255c()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_21D3C70;
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

//----- (021D257C) --------------------------------------------------------
int __fastcall Function_21d257c(int a1)
{
  int v1;
  int *v2;
  char *v3;
  int v4;
  int v5;
  int v6;
  char *v7;
  int *v8;
  uint v9;
  int result;
  int v11;
  char v12;
  char v13;
  char v14;
  int v15;
  int v16;
  int v17;
  int v18;
  char v19;

  v1 = a1;
  Function_21d255c();
  *(uint *)(v1 + 104) = Function_2018340(*(uint *)v1);
  v15 = 1;
  v16 = 0;
  v17 = 0;
  v18 = 1;
  SetGraphicsModes(&v15);
  v2 = dword_21D3C98;
  v3 = &v19;
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
  *(uint *)v3 = *v2;
  v12 = 1;
  v7 = &v12;
  v13 = 2;
  v14 = 4;
  v11 = 0;
  v8 = (int *)&v19;
  do
  {
    v9 = (uchar)*v7;
    Function_20183c4(*(uint **)(v1 + 104), v9, v8, 0);
    Function_2019ebc(*(uint **)(v1 + 104), v9);
    Function_2019690(v9, 32, 0, *(uint *)v1);
    ++v7;
    result = v11 + 1;
    v8 += 7;
    v11 = result;
  }
  while ( result < 3 );
  return result;
}

//----- (021D260C) --------------------------------------------------------
uint __fastcall Function_21d260c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = 1;
  do
    Function_2019044(*(uint *)(v1 + 104), (uchar)v2++);
  while ( v2 < 3 );
  Function_2019044(*(uint *)(v1 + 104), 4);
  return free(*(uint *)(v1 + 104));
}

//----- (021D2634) --------------------------------------------------------
int __fastcall Function_21d2634(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int *v5;

  v4 = a1;
  v5 = LoadFromNARC_8(87, *a1, a3, a4);
  Function_208c210((uint *)v4[26], *v4, (int)v5, 87, 2u, 2u, 0, 0, 0);
  Function_208c210((uint *)v4[26], *v4, (int)v5, 87, 3u, 4u, 0, 0, 0);
  Function_208c210((uint *)v4[26], *v4, (int)v5, 87, 0, 2u, 2, 32, 0);
  Function_208c210((uint *)v4[26], *v4, (int)v5, 87, 1u, 4u, 2, 160, 0);
  Function_208c210((uint *)v4[26], *v4, (int)v5, 87, 4u, 2u, 1, 0, 0);
  Function_208c210((uint *)v4[26], *v4, (int)v5, 87, 5u, 4u, 1, 0, 0);
  Call_FS_CloseFile(v5);
  Function_201c3c0(v4[26], 2);
  return Function_201c3c0(v4[26], 4);
}

//----- (021D270C) --------------------------------------------------------
int __fastcall Function_21d270c(int a1)
{
  int v1;

  v1 = a1;
  Function_201a8d4(*(uint **)(a1 + 104), a1 + 108, (uchar *)dword_21D3C24);
  Function_201ada4_ClearTextBox(v1 + 108, 0);
  Function_200dd0c(*(uint **)(v1 + 104), 1u, 1, 14, *(uchar *)(*(uint *)(v1 + 16) + 11), *(uint *)v1);
  return LoadFromNARC_PlFont2(0, 480, *(uint *)v1);
}

//----- (021D2754) --------------------------------------------------------
uint __fastcall Function_21d2754(int a1)
{
  int v1;

  v1 = a1;
  Function_201acf4(a1 + 108);
  return Function_201a8fc(v1 + 108);
}

//----- (021D2768) --------------------------------------------------------
ushort *__fastcall Function_21d2768(uint *a1)
{
  uint *v1;
  int v2;
  uint *v3;
  ushort *result;

  v1 = a1;
  a1[6] = LoadFromMsgNARC(0, 26, 462, *a1);
  v1[7] = (uint)Function_200b368(1u, 64, *v1);
  v1[8] = Function_2023790(64, *v1);
  v2 = 0;
  v3 = v1;
  do
  {
    result = Function_200b1ec_CallMsgDecrypt((ushort **)v1[6], v2);
    v3[9] = (uint)result;
    ++v2;
    ++v3;
  }
  while ( v2 < 3 );
  return result;
}

//----- (021D27AC) --------------------------------------------------------
ushort *__fastcall Function_21d27ac(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = 0;
  v4 = a1;
  do
  {
    Function_20237bc_FreeMsg(*(uint *)(v4 + 36), a2);
    ++v3;
    v4 += 4;
  }
  while ( v3 < 3 );
  Function_20237bc_FreeMsg(*(uint *)(v2 + 32), a2);
  Function_200b3f0(*(uint **)(v2 + 28), v5);
  return Function_200b190(*(ushort **)(v2 + 24));
}

//----- (021D27D8) --------------------------------------------------------
int __fastcall Function_21d27d8(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;

  v1 = a1;
  *(uint *)(a1 + 48) = **(uint **)(a1 + 16);
  *(ushort *)(a1 + 52) = GetPkmnData(**(int ***)(a1 + 16), 5u, 0);
  *(uchar *)(v1 + 55) = Call_DecidePkmnGender(**(uint **)(v1 + 16));
  *(uchar *)(v1 + 54) = Function_2075bcc(**(uint **)(v1 + 16));
  v2 = GetPkmnData(**(int ***)(v1 + 16), 0x70u, 0);
  *(uchar *)(v1 + 56) = GetPkmnBaseData2(*(ushort *)(v1 + 52), v2, 0x1Cu) ^ 1;
  *(uint *)(v1 + 60) = Function_2023790(12, *(uint *)v1);
  GetPkmnData(**(int ***)(v1 + 16), 0x77u, *(ushort **)(v1 + 60));
  result = Function_2098eac(*(uchar **)(*(uint *)(v1 + 16) + 4), *(uchar *)(v1 + 54), v3, v4);
  *(uchar *)(v1 + 57) = result;
  return result;
}

//----- (021D2858) --------------------------------------------------------
uint __fastcall Function_21d2858(int a1, int a2)
{
  return Function_20237bc_FreeMsg(*(uint *)(a1 + 60), a2);
}

//----- (021D2864) --------------------------------------------------------
uint __fastcall Function_21d2864(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
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

  v20 = a4;
  v4 = a1;
  Function_201dbec(32, *a1);
  v4[31] = (uint)Function_200c6e4(*v4);
  v12 = 0;
  v13 = 128;
  v14 = 0;
  v15 = 31;
  v16 = 0;
  v17 = 1;
  v18 = 0;
  v19 = 31;
  v7 = 3;
  v8 = 0;
  v9 = 0;
  v10 = 16;
  v11 = 16;
  Function_200c73c((uint *)v4[31], &v12, &v7, 32);
  Function_200a93c(*v4);
  v4[23] = Function_2098ffc(*v4, 2u, 2, 1, 0);
  v5 = Function_209916c(v4[23], *(ushort *)(v4[4] + 8), 100, 90, 0, 1u, 0, 0);
  v4[24] = v5;
  Function_200d3f4(*(uint **)(v5 + 4), 0);
  if ( Function_2035e38() )
    Function_2039734();
  return Function_201ff0c(0x10u, 1);
}

//----- (021D2908) --------------------------------------------------------
int *__fastcall Function_21d2908(int a1)
{
  int v1;

  v1 = a1;
  Function_2099370(*(uint *)(a1 + 92), *(ushort **)(a1 + 96));
  Function_209903c(*(uint *)(v1 + 92));
  Function_200c8d4(*(uint *)(v1 + 124));
  return Function_201dc3c();
}

//----- (021D2928) --------------------------------------------------------
int __fastcall Function_21d2928(int a1)
{
  int result;

  switch ( (uchar)*(uint *)(a1 + 4) )
  {
    case 0u:
      *(uint *)(a1 + 4) = Function_21d2a04();
      goto LABEL_11;
    case 1u:
      *(uint *)(a1 + 4) = Function_21d2ae0();
      goto LABEL_11;
    case 2u:
      *(uint *)(a1 + 4) = Function_21d2af0();
      goto LABEL_11;
    case 3u:
      *(uint *)(a1 + 4) = Function_21d2b3c();
      goto LABEL_11;
    case 4u:
      *(uint *)(a1 + 4) = Function_21d2b54();
      goto LABEL_11;
    case 5u:
      *(uint *)(a1 + 4) = Function_21d2b84();
      goto LABEL_11;
    case 6u:
      *(uint *)(a1 + 4) = Function_21d2b94();
      goto LABEL_11;
    case 7u:
      *(uint *)(a1 + 4) = Function_21d2c08();
LABEL_11:
      result = 0;
      break;
    default:
      *(uint *)(a1 + 4) = 0;
      result = 1;
      break;
  }
  return result;
}

//----- (021D29B4) --------------------------------------------------------
int __fastcall Function_21d29b4(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;

  v3 = a1;
  v4 = a3;
  v5 = a1 + 204 + 28 * a2;
  MI_CpuFill8((ushort *)v5, 0, 0x1Cu);
  *(uint *)(v5 + 20) = v3;
  *(uint *)(v5 + 24) = AddTaskToTaskList1(v4, v5, 0);
  result = *(uint *)(v3 + 4) + 1;
  *(uint *)(v3 + 4) = result;
  return result;
}

//----- (021D29E4) --------------------------------------------------------
int __fastcall Function_21d29e4(int a1)
{
  int v1;

  v1 = a1;
  Call_RemoveTaskFromTaskList(*(int **)(a1 + 24));
  --*(uint *)(*(uint *)(v1 + 20) + 4);
  MI_CpuFill8((ushort *)v1, 0, 0x1Cu);
  return 0;
}

//----- (021D2A04) --------------------------------------------------------
int __fastcall Function_21d2a04(int a1, int *a2, int a3, int a4)
{
  int *v4;
  int v5;
  char v7;
  int v8[3];
  int v9;

  v9 = a4;
  v4 = a2;
  v5 = a1;
  MI_CpuFill8(a2, 0, 0x13Cu);
  v4[49] = **(uint **)(*(uint *)(v5 + 96) + 4);
  v4[50] = *(uint *)(v5 + 88);
  v4[2] = *(uchar *)(v5 + 57);
  *v4 = 24;
  v4[3] = 0x80000;
  v4[4] = 917504;
  v4[6] = 0x80000;
  v4[7] = 393216;
  v4[12] = 4096;
  v4[13] = 4096;
  v4[15] = 2048;
  v4[16] = 2048;
  v4[25] = 24;
  v4[24] = 0;
  Function_2021c50((uint *)v4[49], v4 + 3);
  VEC_Subtract(v4 + 3, v4 + 6, v8);
  Function_21d2268(&v7, v4 + 18, v8, 98304);
  Function_2021cf8(v4[49], 1);
  Function_2021c70((uint *)v4[49], v4 + 12);
  Function_21d29b4((int)v4, 0, (int)Function_21d2c50);
  Function_21d29b4((int)v4, 1, (int)Function_21d2d7c);
  Function_21d29b4((int)v4, 2, (int)Function_21d2f4c);
  Function_21d29b4((int)v4, 3, (int)Function_21d3094);
  return 1;
}

//----- (021D2AE0) --------------------------------------------------------
int __fastcall Function_21d2ae0(int a1, int a2)
{
  int result;

  if ( *(uint *)(a2 + 4) )
    result = 1;
  else
    result = 2;
  return result;
}

//----- (021D2AF0) --------------------------------------------------------
int __fastcall Function_21d2af0(int a1)
{
  int v1;
  uchar v2;

  v1 = a1;
  v2 = GetPkmnData(*(int **)(a1 + 48), 0x70u, 0);
  if ( *(uchar *)(v1 + 57) == 1 )
    Function_20059d0(0xBu, *(ushort *)(v1 + 52), 0, 127, *(uint *)v1, v2);
  else
    Function_20059d0(0, *(ushort *)(v1 + 52), 0, 127, *(uint *)v1, v2);
  return 3;
}

//----- (021D2B3C) --------------------------------------------------------
int Function_21d2b3c()
{
  if ( Function_200598c() )
    return 3;
  Function_200592c(0);
  return 4;
}

//----- (021D2B54) --------------------------------------------------------
int __fastcall Function_21d2b54(int a1, int a2)
{
  int v2;

  v2 = a2;
  MI_CpuFill8((ushort *)(a2 + 104), 0, 0x5Cu);
  Function_21d29b4(v2, 0, (int)Function_21d3290);
  Function_21d29b4(v2, 1, (int)Function_21d33dc);
  return 5;
}

//----- (021D2B84) --------------------------------------------------------
int __fastcall Function_21d2b84(int a1, int a2)
{
  int result;

  if ( *(uint *)(a2 + 4) )
    result = 5;
  else
    result = 6;
  return result;
}

//----- (021D2B94) --------------------------------------------------------
int __fastcall Function_21d2b94(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  Function_200e060(a1 + 108, 1, 1, 0xEu);
  Function_201ada4_ClearTextBox(v1 + 108, 255);
  Function_20237e8(*(uint *)(v1 + 32), v2);
  Function_200b48c(*(int **)(v1 + 28), 0, *(uint *)(v1 + 60));
  Function_200c388(
    *(uint **)(v1 + 28),
    *(uint *)(v1 + 32),
    *(uint *)(v1 + 4 * *(uchar *)(v1 + 57) + 36));
  v3 = *(uchar *)(*(uint *)(v1 + 16) + 10);
  v4 = *(uint *)(v1 + 32);
  *(ushort *)(v1 + 12) = Function_201d78c(v1 + 108, 1);
  *(ushort *)(v1 + 14) = 0;
  return 7;
}

//----- (021D2C08) --------------------------------------------------------
int __fastcall Function_21d2c08(int a1)
{
  int v1;
  uint v3;

  v1 = a1;
  if ( Function_201d724(*(ushort *)(a1 + 12) & 0xFF) )
    return 7;
  if ( !(dword_21BF6C4 & 3) )
  {
    v3 = *(ushort *)(v1 + 14);
    *(ushort *)(v1 + 14) = v3 + 1;
    if ( v3 < 0x5A )
      return 7;
  }
  Function_200e084(v1 + 108, 1);
  Function_201acf4(v1 + 108);
  return 8;
}

//----- (021D2C50) --------------------------------------------------------
int __fastcall Function_21d2c50(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  uint *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  char v15;
  int v16[3];
  int v17;

  v17 = a4;
  v4 = a2;
  v5 = *(uint *)(a2 + 20);
  v6 = a1;
  v7 = *(uint *)(a2 + 20);
  *(uint *)(a2 + 4) = 24;
  v8 = (uint *)(v7 + 12);
  v8[9] = 4096;
  v8[10] = 4096;
  v8[12] = 2048;
  v8[13] = 2048;
  VEC_Subtract(v8 + 9, v8 + 12, v16);
  v9 = *(uint *)(v4 + 4);
  if ( v9 <= 0 )
  {
    v12 = fflt(v9 << 12);
    v11 = fsub(v12, 1056964608);
  }
  else
  {
    v10 = fflt(v9 << 12);
    v11 = fadd(0x3F000000u, v10);
  }
  v13 = ffix(v11);
  Function_21d2268(&v15, v8 + 15, v16, v13);
  Function_2021cac(*(uint *)(v5 + 196), 1);
  Function_2021cf8(*(uint *)(v5 + 196), 1);
  Function_2021c70(*(uint **)(v5 + 196), v8 + 9);
  return Function_201cecc(v6, (int)Function_21d2cec);
}

//----- (021D2CEC) --------------------------------------------------------
int __fastcall Function_21d2cec(int a1, int a2)
{
  int v2;
  uint *v3;
  int result;
  int v5;
  int v6;
  int v7;

  v2 = a2;
  v3 = *(uint **)(a2 + 20);
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v5 = v3[12] - (ull)((ll_mul((int)v3[18], *(int *)(a2 + 12)) + 2048) >> 12);
  v6 = v3[13] - (ull)((ll_mul((int)v3[19], *(int *)(v2 + 12)) + 2048) >> 12);
  Function_2021c70((uint *)v3[49], &v5);
  *(uint *)(v2 + 12) += 4096;
  result = *(uint *)(v2 + 4) - 1;
  *(uint *)(v2 + 4) = result;
  if ( !result )
  {
    Function_2021cac(v3[49], 0);
    result = Function_21d29e4(v2);
  }
  return result;
}

//----- (021D2D7C) --------------------------------------------------------
int __fastcall Function_21d2d7c(int a1, int a2, int a3, int a4)
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
  char v24;
  int v25;
  int v26;
  int v27;
  int v28;

  v28 = a4;
  v4 = a2;
  v5 = *(uint *)(a2 + 20);
  v6 = a1;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  *(uint *)(a2 + 4) = 24;
  v7 = (int *)(v5 + 12);
  *(uint *)(v5 + 12) = 0x80000;
  v7[1] = 917504;
  v7[3] = 0x80000;
  v7[4] = 393216;
  VEC_Subtract((uint *)(v5 + 24), (uint *)(v5 + 12), &v25);
  v8 = *(uint *)(v4 + 4);
  if ( v8 <= 0 )
  {
    v11 = fflt(v8 << 12);
    v10 = fsub(v11, 1056964608);
  }
  else
  {
    v9 = fflt(v8 << 12);
    v10 = fadd(0x3F000000u, v9);
  }
  v12 = ffix(v10);
  Function_21d2268(&v24, (int *)(v5 + 36), &v25, v12);
  v13 = *(uint *)(v4 + 4);
  if ( v13 <= 0 )
  {
    v16 = fflt(v13 << 12);
    v15 = fsub(v16, 1056964608);
  }
  else
  {
    v14 = fflt(v13 << 12);
    v15 = fadd(0x3F000000u, v14);
  }
  v17 = ffix(v15);
  *(uint *)(v5 + 84) = FX_Div(737280, v17);
  v18 = *(uint *)(v4 + 4);
  if ( v18 <= 0 )
  {
    v21 = fflt(v18 << 12);
    v20 = fsub(v21, 1056964608);
  }
  else
  {
    v19 = fflt(v18 << 12);
    v20 = fadd(0x3F000000u, v19);
  }
  v22 = ffix(v20);
  *(uint *)(v5 + 88) = FX_Div(4096, v22);
  Function_2021c50(*(uint **)(v5 + 196), v7);
  return Function_201cecc(v6, (int)Function_21d2e74);
}

//----- (021D2E74) --------------------------------------------------------
int __fastcall Function_21d2e74(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;
  long long v5;
  int v6;
  long long v7;
  int result;
  int v9;
  int v10;

  v2 = a2;
  v3 = *(uint *)(a2 + 20);
  v4 = (uint *)(*(uint *)(a2 + 20) + 12);
  v9 = *(uint *)(v3 + 12)
     + (ull)((ll_mul(*(int *)(*(uint *)(a2 + 20) + 36), *(int *)(a2 + 12)) + 2048) >> 12);
  v10 = v4[1] + (ull)((ll_mul((int)v4[7], *(int *)(v2 + 12)) + 2048) >> 12);
  v5 = ll_mul((int)v4[18], *(int *)(v2 + 12));
  v6 = Function_201d250(16 * (uint)((v5 + 2048) >> 12) >> 16);
  v7 = ll_mul(v6, -262144LL);
  v10 += ((((uint)((v7 + 2048) >> 12) << 12) + 2048) >> 12) | ((__CFADD__(
                                                                          (uint)((v7 + 2048) >> 12) << 12,
                                                                          2048)
                                                                      + (uint)((ull)(int)((v7 + 2048) >> 12) >> 20)) << 20);
  Function_2021c50(*(uint **)(v3 + 196), &v9);
  *(uint *)(v2 + 12) += 4096;
  result = *(uint *)(v2 + 4) - 1;
  *(uint *)(v2 + 4) = result;
  if ( !result )
    result = Function_21d29e4(v2);
  return result;
}

//----- (021D2F4C) --------------------------------------------------------
int __fastcall Function_21d2f4c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  char v14;
  int v15[3];
  int v16;

  v16 = a4;
  v4 = a2;
  v5 = *(uint *)(a2 + 20);
  v6 = a1;
  v7 = (uint *)(*(uint *)(a2 + 20) + 104);
  *(uint *)(a2 + 4) = 24;
  v7[9] = 4096;
  v7[10] = 4096;
  v7[12] = 6144;
  v7[13] = 6144;
  VEC_Subtract(v7 + 12, v7 + 9, v15);
  v8 = *(uint *)(v4 + 4);
  if ( v8 <= 0 )
  {
    v11 = fflt(v8 << 12);
    v10 = fsub(v11, 1056964608);
  }
  else
  {
    v9 = fflt(v8 << 12);
    v10 = fadd(0x3F000000u, v9);
  }
  v12 = ffix(v10);
  Function_21d2268(&v14, v7 + 15, v15, v12);
  Function_2007dec(*(uint *)(v5 + 200), 0xCu, 256);
  Function_2007dec(*(uint *)(v5 + 200), 0xDu, 256);
  return Function_201cecc(v6, (int)Function_21d2fe0);
}

//----- (021D2FE0) --------------------------------------------------------
int __fastcall Function_21d2fe0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint *v5;
  uint v6;
  int v7;
  int v8;
  long long v9;
  int result;

  v2 = a2;
  v3 = *(uint *)(a2 + 20);
  v4 = *(uint *)(a2 + 12);
  v5 = (uint *)(*(uint *)(a2 + 20) + 104);
  v6 = v4;
  v7 = v4 >> 31;
  v8 = v5[10] + (ull)((ll_mul(*(int *)(*(uint *)(a2 + 20) + 168), v4) + 2048) >> 12);
  v9 = ll_mul((int)v5[15], __PAIR__(v7, v6));
  Function_2007dec(*(uint *)(v3 + 200), 0xCu, (int)(v5[9] + (ull)((v9 + 2048) >> 12)) >> 4);
  Function_2007dec(*(uint *)(v3 + 200), 0xDu, v8 >> 4);
  *(uint *)(v2 + 12) += 4096;
  result = *(uint *)(v2 + 4) - 1;
  *(uint *)(v2 + 4) = result;
  if ( !result )
  {
    Function_2007dec(*(uint *)(v3 + 200), 0, 128);
    Function_2007dec(*(uint *)(v3 + 200), 1u, 96);
    result = Function_21d29e4(v2);
  }
  return result;
}

//----- (021D3094) --------------------------------------------------------
int __fastcall Function_21d3094(int a1, int a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int v6;
  uint *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  char v14;
  int v15[3];
  int v16;

  v16 = a4;
  v4 = a2;
  v5 = *(uint **)(a2 + 20);
  v6 = a1;
  *(uint *)(a2 + 4) = 24;
  v7 = v5 + 26;
  v5[26] = 0x80000;
  v7[1] = 393216;
  v7[3] = 0x80000;
  v7[4] = 458752;
  VEC_Subtract(v5 + 29, v5 + 26, v15);
  v8 = *(uint *)(v4 + 4);
  if ( v8 <= 0 )
  {
    v11 = fflt(v8 << 12);
    v10 = fsub(v11, 1056964608);
  }
  else
  {
    v9 = fflt(v8 << 12);
    v10 = fadd(0x3F000000u, v9);
  }
  v12 = ffix(v10);
  Function_21d2268(&v14, v5 + 32, v15, v12);
  Function_2007dec(v5[50], 0, *v7 >> 12);
  Function_2007dec(v5[50], 1u, v5[27] >> 12);
  return Function_201cecc(v6, (int)Function_21d312c);
}

//----- (021D312C) --------------------------------------------------------
int __fastcall Function_21d312c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  long long v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  long long v13;
  int v14;
  int result;
  int v16;

  v2 = a2;
  v3 = *(uint *)(a2 + 20);
  v4 = *(uint *)(a2 + 12);
  v16 = a1;
  v5 = *(uint *)(a2 + 20) + 104;
  v6 = *(uint *)(v5 + 4) + (ull)((ll_mul(*(int *)(*(uint *)(a2 + 20) + 132), v4) + 2048) >> 12);
  v7 = ll_mul(*(int *)(v5 + 24), v4);
  Function_2007dec(
    *(uint *)(v3 + 200),
    0,
    (int)(*(uint *)(v3 + 104)
               + (((uint)(v7 + 2048) >> 12) | ((__CFADD__((uint)v7, 2048) + HIDWORD(v7)) << 20))) >> 12);
  Function_2007dec(*(uint *)(v3 + 200), 1u, v6 >> 12);
  v8 = (*(ushort *)(v5 + 80) - 4) * (*(ushort *)(v5 + 80) - 4) - 16;
  if ( v8 <= 0 )
  {
    v11 = fflt(v8 << 12);
    v10 = fsub(v11, 1056964608);
  }
  else
  {
    v9 = fflt(v8 << 12);
    v10 = fadd(0x3F000000u, v9);
  }
  v12 = ffix(v10);
  v13 = ll_mul(v12, 5734LL);
  Function_2007dec(*(uint *)(v3 + 200), 4u, (int)((v13 + 2048) >> 12) >> 12);
  if ( (ushort)++*(ushort *)(v5 + 80) > 8u )
    *(ushort *)(v5 + 80) = 0;
  *(uint *)(v2 + 12) += 4096;
  v14 = *(uint *)(v2 + 4);
  result = v14 - 1;
  *(uint *)(v2 + 4) = v14 - 1;
  if ( !v14 )
  {
    Function_2007dec(*(uint *)(v3 + 200), 4u, 0);
    *(ushort *)(v5 + 80) = 0;
    result = Function_201cecc(v16, (int)Function_21d326c);
  }
  return result;
}

//----- (021D326C) --------------------------------------------------------
int __fastcall Function_21d326c(int a1, int a2)
{
  uint v2;
  int result;

  v2 = *(ushort *)(*(uint *)(a2 + 20) + 184);
  result = v2 + 1;
  *(ushort *)(*(uint *)(a2 + 20) + 184) = result;
  if ( v2 >= 4 )
    result = Function_21d29e4(a2);
  return result;
}

//----- (021D3290) --------------------------------------------------------
int __fastcall Function_21d3290(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  char v14;
  int v15[3];
  int v16;

  v16 = a4;
  v4 = a2;
  v5 = *(uint *)(a2 + 20);
  v6 = a1;
  v7 = (uint *)(*(uint *)(a2 + 20) + 104);
  *(uint *)(a2 + 4) = 8;
  v7[9] = 6144;
  v7[10] = 6144;
  v7[12] = 4096;
  v7[13] = 4096;
  VEC_Subtract(v7 + 12, v7 + 9, v15);
  v8 = *(uint *)(v4 + 4);
  if ( v8 <= 0 )
  {
    v11 = fflt(v8 << 12);
    v10 = fsub(v11, 1056964608);
  }
  else
  {
    v9 = fflt(v8 << 12);
    v10 = fadd(0x3F000000u, v9);
  }
  v12 = ffix(v10);
  Function_21d2268(&v14, v7 + 15, v15, v12);
  Function_2007dec(*(uint *)(v5 + 200), 0xCu, 384);
  Function_2007dec(*(uint *)(v5 + 200), 0xDu, 384);
  return Function_201cecc(v6, (int)Function_21d3324);
}

//----- (021D3324) --------------------------------------------------------
int __fastcall Function_21d3324(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint *v5;
  uint v6;
  int v7;
  int v8;
  long long v9;
  int result;

  v2 = a2;
  v3 = *(uint *)(a2 + 20);
  v4 = *(uint *)(a2 + 12);
  v5 = (uint *)(*(uint *)(a2 + 20) + 104);
  v6 = v4;
  v7 = v4 >> 31;
  v8 = v5[10] + (ull)((ll_mul(*(int *)(*(uint *)(a2 + 20) + 168), v4) + 2048) >> 12);
  v9 = ll_mul((int)v5[15], __PAIR__(v7, v6));
  Function_2007dec(*(uint *)(v3 + 200), 0xCu, (int)(v5[9] + (ull)((v9 + 2048) >> 12)) >> 4);
  Function_2007dec(*(uint *)(v3 + 200), 0xDu, v8 >> 4);
  *(uint *)(v2 + 12) += 4096;
  result = *(uint *)(v2 + 4) - 1;
  *(uint *)(v2 + 4) = result;
  if ( !result )
  {
    Function_2007dec(*(uint *)(v3 + 200), 0xCu, 256);
    Function_2007dec(*(uint *)(v3 + 200), 0xDu, 256);
    result = Function_21d29e4(v2);
  }
  return result;
}

//----- (021D33DC) --------------------------------------------------------
int __fastcall Function_21d33dc(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  uint *v8;
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
  char v20;
  int v21[3];
  int v22;

  v22 = a4;
  v4 = a2;
  v5 = *(uint *)(a2 + 20);
  v6 = a1;
  v7 = *(uint *)(a2 + 20);
  *(uint *)(a2 + 4) = 8;
  v8 = (uint *)(v7 + 104);
  *(uint *)(v5 + 104) = 0x80000;
  v8[1] = 458752;
  v8[3] = 0x80000;
  v8[4] = 393216;
  VEC_Subtract(v8 + 3, v8, v21);
  v9 = *(uint *)(v4 + 4);
  if ( v9 <= 0 )
  {
    v12 = fflt(v9 << 12);
    v11 = fsub(v12, 1056964608);
  }
  else
  {
    v10 = fflt(v9 << 12);
    v11 = fadd(0x3F000000u, v10);
  }
  v13 = ffix(v11);
  Function_21d2268(&v20, v8 + 6, v21, v13);
  v14 = *(uint *)(v4 + 4);
  if ( v14 <= 0 )
  {
    v17 = fflt(v14 << 12);
    v16 = fsub(v17, 1056964608);
  }
  else
  {
    v15 = fflt(v14 << 12);
    v16 = fadd(0x3F000000u, v15);
  }
  v18 = ffix(v16);
  v8[18] = FX_Div(737280, v18);
  Function_2007dec(*(uint *)(v5 + 200), 0, *v8 >> 12);
  Function_2007dec(*(uint *)(v5 + 200), 1u, v8[1] >> 12);
  return Function_201cecc(v6, (int)Function_21d34a8);
}

//----- (021D34A8) --------------------------------------------------------
int __fastcall Function_21d34a8(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint *v5;
  int v6;
  long long v7;
  long long v8;
  int v9;
  long long v10;
  int result;
  int v12;

  v2 = a2;
  v3 = *(uint *)(a2 + 20);
  v4 = *(uint *)(a2 + 12);
  v12 = a1;
  v5 = (uint *)(*(uint *)(a2 + 20) + 104);
  v6 = v5[1] + (ull)((ll_mul(*(int *)(*(uint *)(a2 + 20) + 132), v4) + 2048) >> 12);
  v7 = ll_mul((int)v5[6], v4);
  Function_2007dec(
    *(uint *)(v3 + 200),
    0,
    (int)(*(uint *)(v3 + 104)
               + (((uint)(v7 + 2048) >> 12) | ((__CFADD__((uint)v7, 2048) + HIDWORD(v7)) << 20))) >> 12);
  Function_2007dec(*(uint *)(v3 + 200), 1u, v6 >> 12);
  v8 = ll_mul((int)v5[18], *(int *)(v2 + 12));
  v9 = Function_201d250(16 * (uint)((v8 + 2048) >> 12) >> 16);
  v10 = ll_mul(v9, -24576LL);
  Function_2007dec(
    *(uint *)(v3 + 200),
    4u,
    (int)(((uint)(v10 + 2048) >> 12) | ((__CFADD__((uint)v10, 2048) + HIDWORD(v10)) << 20)) >> 12);
  *(uint *)(v2 + 12) += 4096;
  result = *(uint *)(v2 + 4) - 1;
  *(uint *)(v2 + 4) = result;
  if ( !result )
  {
    Function_2007dec(*(uint *)(v3 + 200), 4u, 0);
    result = Function_201cecc(v12, (int)Function_21d35b0);
  }
  return result;
}

//----- (021D35B0) --------------------------------------------------------
int __fastcall Function_21d35b0(int result, int a2)
{
  int v2;
  int v3;

  v2 = *(uint *)(a2 + 4);
  *(uint *)(a2 + 4) = v2 + 1;
  if ( v2 >= 4 )
  {
    v3 = *(uint *)(*(uint *)(a2 + 20) + 8);
    if ( v3 )
    {
      if ( v3 == 1 )
        result = Function_201cecc(result, (int)Function_21d36cc);
      else
        result = Function_21d29e4(a2);
    }
    else
    {
      result = Function_201cecc(result, (int)Function_21d35ec);
    }
  }
  return result;
}

//----- (021D35EC) --------------------------------------------------------
int __fastcall Function_21d35ec(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  MI_CpuFill8((ushort *)(*(uint *)(a2 + 20) + 104), 0, 0x5Cu);
  *(uint *)(v2 + 4) = 3;
  return Function_201cecc(v3, (int)Function_21d3610);
}

//----- (021D3610) --------------------------------------------------------
int __fastcall Function_21d3610(int a1, int a2)
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
  long long v11;
  int result;

  v2 = a2;
  v3 = *(uint *)(a2 + 20);
  v4 = *(uint *)(a2 + 20) + 104;
  v5 = *(ushort *)(*(uint *)(a2 + 20) + 184) - 4;
  v6 = v5 * v5 - 16;
  if ( v6 <= 0 )
  {
    v9 = fflt(v6 << 12);
    v8 = fsub(v9, 1056964608);
  }
  else
  {
    v7 = fflt(v6 << 12);
    v8 = fadd(0x3F000000u, v7);
  }
  v10 = ffix(v8);
  v11 = ll_mul(v10, 5734LL);
  Function_2007dec(*(uint *)(v3 + 200), 4u, (int)((v11 + 2048) >> 12) >> 12);
  *(ushort *)(v4 + 82) = 0;
  if ( (ushort)++*(ushort *)(v4 + 80) > 8u )
  {
    *(ushort *)(v4 + 80) = 0;
    --*(uint *)(v2 + 4);
  }
  result = *(uint *)(v2 + 4);
  if ( !result )
  {
    Function_2007dec(*(uint *)(v3 + 200), 4u, 0);
    result = Function_21d29e4(v2);
  }
  return result;
}

//----- (021D36CC) --------------------------------------------------------
int __fastcall Function_21d36cc(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  MI_CpuFill8((ushort *)(*(uint *)(a2 + 20) + 104), 0, 0x5Cu);
  *(uint *)(v2 + 4) = 32;
  return Function_201cecc(v3, (int)Function_21d36f0);
}

//----- (021D36F0) --------------------------------------------------------
int __fastcall Function_21d36f0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  short v8;
  int result;

  v2 = a2;
  v3 = *(uint *)(a2 + 20);
  v4 = *(uint *)(a2 + 20) + 104;
  v5 = Function_201d250(*(ushort *)(*(uint *)(a2 + 20) + 184));
  v6 = (ull)v5 >> 19;
  v7 = v5 << 13;
  v8 = 0;
  if ( *(ushort *)(v4 + 80) <= 0x167u )
    v8 = *(ushort *)(v4 + 80) + 90;
  *(ushort *)(v4 + 80) = v8;
  Function_2007dec(
    *(uint *)(v3 + 200),
    3u,
    (int)(((uint)(v7 + 2048) >> 12) | ((__CFADD__(v7, 2048) + v6) << 20)) >> 12);
  result = *(uint *)(v2 + 4) - 1;
  *(uint *)(v2 + 4) = result;
  if ( !result )
  {
    Function_2007dec(*(uint *)(v3 + 200), 3u, 0);
    result = Function_21d29e4(v2);
  }
  return result;
}

//----- (021D3768) --------------------------------------------------------
int __fastcall Function_21d3768(ushort *a1, int a2, int a3)
{
  int v3;
  int v4;
  ushort *v5;
  int v6;
  int result;

  v3 = a2;
  v4 = a3;
  v5 = a1;
  MI_CpuFill8(a1, 0, 0x1Cu);
  Function_20b28cc();
  G3X_Init();
  G3X_InitMtxStack();
  GFX_CONTROL &= 0xCFFDu;
  GFX_CONTROL &= 0xCFFBu;
  GFX_CONTROL = (GFX_CONTROL & 0xCFFF | 8) & 0xCFFF | 0x10;
  GFX_CONTROL &= 0xCFDFu;
  G3X_SetFog(0, 0, 0, 0);
  G3X_SetClearColor(0, 0, 0x7FFF, 63, 0);
  GFX_FLUSH = 2;
  GFX_VIEWPORT = -1073807360;
  Function_21d3870(v5, v4);
  Function_21d38d0(v5, v3, v4);
  Function_201ff0c(1u, 1);
  v6 = REG_BG0CNT & 0xFFFC;
  result = v6 | 1;
  REG_BG0CNT = v6 | 1;
  return result;
}

//----- (021D3820) --------------------------------------------------------
int *__fastcall Function_21d3820(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int v5;
  int *result;

  v1 = a1;
  Call_G3X_Reset();
  Function_20203ec();
  MATRIX_CONTROL = 2;
  MATRIX_IDENTITY = 0;
  v2 = Function_20af480();
  Function_20a73c0((int)v2, v3, v4, v5);
  Function_2007768(*(uint *)(v1 + 4));
  result = &GFX_FLUSH;
  GFX_FLUSH = 1;
  return result;
}

//----- (021D385C) --------------------------------------------------------
uint __fastcall Function_21d385c(int *a1)
{
  int *v1;

  v1 = a1;
  Call_free5(*a1);
  return Function_2007b6c(v1[1]);
}

//----- (021D3870) --------------------------------------------------------
int __fastcall Function_21d3870(int *a1, uint a2)
{
  int *v2;
  short v4;
  short v5;
  short v6;
  short v7;
  int v8;
  int v9;
  int v10;

  v2 = a1;
  v8 = 0;
  v9 = 0;
  v10 = 0x10000;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  *a1 = Function_20203ac(a2);
  Function_2020738(&v8, 0x10000, &v4, 1473, 1u, *v2);
  Function_20206bc(0, 409600, *v2);
  Function_20206b0((uint *)*v2);
  return Function_20203d4(*v2);
}

//----- (021D38D0) --------------------------------------------------------
int __fastcall Function_21d38d0(int a1, int a2, uint a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;
  char v8;

  v4 = a1;
  v5 = a2;
  *(uint *)(a1 + 4) = Function_200762c(a3, a2, a3, a4);
  Function_2075ef4((int)&v8, *(uint *)v5, 2u);
  v6 = Function_2007c34(*(uint **)(v4 + 4), &v8, 128, 96, 0, 0, 0, 0);
  result = Function_2007dec(v6, 0x23u, *(uchar *)(v5 + 8));
  *(uint *)(v4 + 24) = v6;
  return result;
}

