//----- (0207CF48) --------------------------------------------------------
int __fastcall LoadFromNARC_ItemData(uint a1, int a2, uint a3)
{
  uint v3

  v3 = a1;
  if ( a1 > 0x1D3 )
    v3 = 0;
  switch ( a2 )
  {
    case 0:
      return LoadFromNARC_2(15, LOWORD(Unknown_20f0cc4[2 * v3]), a3);
    case 1:
      return LoadFromNARC_2(16, HIWORD(Unknown_20f0cc4[2 * v3]), a3);
    case 2:
      return LoadFromNARC_2(16, LOWORD(dword_20F0CC8[2 * v3]), a3);
  }
  return 0;
}

//----- (0207CFA0) --------------------------------------------------------
ushort *__fastcall Function_207cfa0(ushort *a1, uint a2, uint a3)
{
  ushort *v3
  uint v4
  ushort **v5

  v3 = a1;
  v4 = a2;
  v5 = (ushort **)LoadFromMsgNARC(1, 26, 392, a3);
  Function_200b1b8_CallMsgDecrypt(v5, v4, v3);
  return Function_200b190((ushort *)v5);
}

//----- (0207CFC8) --------------------------------------------------------
ushort *__fastcall Function_207cfc8(ushort *a1, uint a2, uint a3)
{
  ushort *v3
  uint v4
  ushort **v5

  v3 = a1;
  v4 = a2;
  v5 = (ushort **)LoadFromMsgNARC(1, 26, 391, a3);
  Function_200b1b8_CallMsgDecrypt(v5, v4, v3);
  return Function_200b190((ushort *)v5);
}

//----- (0207CFF0) --------------------------------------------------------
int __fastcall GetItemData(uint a1, uint a2, uint a3)
{
  uint v3
  uint v4
  int v5
  int v6
  char v7
  int v8
  int v9

  v3 = a2;
  v4 = a3;
  v5 = LoadFromNARC_ItemData(a1, 0, a3);
  v6 = v5;
  ReadItemData1(v5, v3, v7);
  v9 = v8;
  Function_2018238(v4, v6);
  return v9;
}

//----- (0207D014) --------------------------------------------------------
void __fastcall ReadItemData1(int a1, uint a2, char a3)
{
  int v3
  int v4
  int v5
  uint v6
  uint v7
  uint v8
  int v9
  int v10
  int v11
  int v12
  int v13
  int v14
  int v15
  uint v16
  int v17
  int v18

  switch ( a3 )
  {
    case 0:
      v3 = *(ushort *)a1;
      break;
    case 1:
      v4 = *(uchar *)(a1 + 2);
      break;
    case 2:
      v5 = *(uchar *)(a1 + 3);
      break;
    case 3:
      v6 = (uint)*(ushort *)(a1 + 8) << 26 >> 31;
      break;
    case 4:
      v7 = (uint)*(ushort *)(a1 + 8) << 25 >> 31;
      break;
    case 5:
      v8 = (uint)*(ushort *)(a1 + 8) << 21 >> 28;
      break;
    case 6:
      v9 = *(uchar *)(a1 + 10);
      break;
    case 7:
      v10 = *(uchar *)(a1 + 11);
      break;
    case 8:
      v11 = *(uchar *)(a1 + 4);
      break;
    case 9:
      v12 = *(uchar *)(a1 + 5);
      break;
    case 10:
      v13 = *(uchar *)(a1 + 6);
      break;
    case 11:
      v14 = *(uchar *)(a1 + 7);
      break;
    case 12:
      v15 = *(ushort *)(a1 + 8) & 0x1F;
      break;
    case 13:
      v16 = (uint)*(ushort *)(a1 + 8) << 16 >> 27;
      break;
    case 14:
      v17 = *(uchar *)(a1 + 12);
      break;
    default:
      if ( *(uchar *)(a1 + 12) )
      {
        if ( *(uchar *)(a1 + 12) == 1 )
          ReadItemData2(a1 + 14, a2);
      }
      else
      {
        v18 = *(uchar *)(a1 + 14);
      }
      break;
  }
}

//----- (0207D0B0) --------------------------------------------------------
int __fastcall ReadItemData2(int a1, int a2)
{
  uint v2
  int result

  v2 = a2 - 15;
  if ( v2 <= 0x2B )
    return ((int (__fastcall *)(int))((char *)&off_207D0C4 + *((short *)&off_207D0C4 + v2) + 2))(a1);
  switch ( (uchar)v2 )
  {
    case 0:
      result = *(uchar *)a1 & 1;
      break;
    case 1:
      result = (uint)*(uchar *)a1 << 30 >> 31;
      break;
    case 2:
      result = (uint)*(uchar *)a1 << 29 >> 31;
      break;
    case 3:
      result = (uint)*(uchar *)a1 << 28 >> 31;
      break;
    case 4:
      result = (uint)*(uchar *)a1 << 27 >> 31;
      break;
    case 5:
      result = (uint)*(uchar *)a1 << 26 >> 31;
      break;
    case 6:
      result = (uint)*(uchar *)a1 << 25 >> 31;
      break;
    case 7:
      result = (uint)*(uchar *)a1 << 24 >> 31;
      break;
    case 8:
      result = *(uchar *)(a1 + 1) & 1;
      break;
    case 9:
      result = (uint)*(uchar *)(a1 + 1) << 30 >> 31;
      break;
    case 0xA:
      result = (uint)*(uchar *)(a1 + 1) << 29 >> 31;
      break;
    case 0xB:
      result = (uint)*(uchar *)(a1 + 1) << 28 >> 31;
      break;
    case 0xC:
      result = (uint)*(uchar *)(a1 + 1) << 24 >> 28;
      break;
    case 0xD:
      result = *(uchar *)(a1 + 2) & 0xF;
      break;
    case 0xE:
      result = (uint)*(uchar *)(a1 + 2) << 24 >> 28;
      break;
    case 0xF:
      result = *(uchar *)(a1 + 3) & 0xF;
      break;
    case 0x10:
      result = (uint)*(uchar *)(a1 + 3) << 24 >> 28;
      break;
    case 0x11:
      result = *(uchar *)(a1 + 4) & 0xF;
      break;
    case 0x12:
      result = (uint)*(uchar *)(a1 + 4) << 26 >> 30;
      break;
    case 0x13:
      result = (uint)*(uchar *)(a1 + 4) << 25 >> 31;
      break;
    case 0x14:
      result = (uint)*(uchar *)(a1 + 4) << 24 >> 31;
      break;
    case 0x15:
      result = *(uchar *)(a1 + 5) & 1;
      break;
    case 0x16:
      result = (uint)*(uchar *)(a1 + 5) << 30 >> 31;
      break;
    case 0x17:
      result = (uint)*(uchar *)(a1 + 5) << 29 >> 31;
      break;
    case 0x18:
      result = (uint)*(uchar *)(a1 + 5) << 28 >> 31;
      break;
    case 0x19:
      result = (uint)*(uchar *)(a1 + 5) << 27 >> 31;
      break;
    case 0x1A:
      result = (uint)*(uchar *)(a1 + 5) << 26 >> 31;
      break;
    case 0x1B:
      result = (uint)*(uchar *)(a1 + 5) << 25 >> 31;
      break;
    case 0x1C:
      result = (uint)*(uchar *)(a1 + 5) << 24 >> 31;
      break;
    case 0x1D:
      result = *(uchar *)(a1 + 6) & 1;
      break;
    case 0x1E:
      result = (uint)*(uchar *)(a1 + 6) << 30 >> 31;
      break;
    case 0x1F:
      result = (uint)*(uchar *)(a1 + 6) << 29 >> 31;
      break;
    case 0x20:
      result = (uint)*(uchar *)(a1 + 6) << 28 >> 31;
      break;
    case 0x21:
      result = *(char *)(a1 + 7);
      break;
    case 0x22:
      result = *(char *)(a1 + 8);
      break;
    case 0x23:
      result = *(char *)(a1 + 9);
      break;
    case 0x24:
      result = *(char *)(a1 + 10);
      break;
    case 0x25:
      result = *(char *)(a1 + 11);
      break;
    case 0x26:
      result = *(char *)(a1 + 12);
      break;
    case 0x27:
      result = *(uchar *)(a1 + 13);
      break;
    case 0x28:
      result = *(uchar *)(a1 + 14);
      break;
    case 0x29:
      result = *(char *)(a1 + 15);
      break;
    case 0x2A:
      result = *(char *)(a1 + 16);
      break;
    case 0x2B:
      result = *(char *)(a1 + 17);
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

//----- (0207D268) --------------------------------------------------------
int __fastcall Function_207d268(uint a1)
{
  int result

  if ( a1 >= 0x148 && a1 <= 0x1AB )
    result = *(ushort *)((char *)Unknown_20f0bfc + (2 * (a1 - 328) & 0x1FFFF));
  else
    result = 0;
  return result;
}

//----- (0207D28C) --------------------------------------------------------
int __fastcall Function_207d28c(int a1)
{
  uint v1

  v1 = 0;
  do
  {
    if ( a1 == *((ushort *)&Unknown_20f0bfc[46] + v1) )
      return 1;
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 < 8 );
  return 0;
}

//----- (0207D2B4) --------------------------------------------------------
uint __fastcall Function_207d2b4(uint a1)
{
  uint result

  if ( a1 >= 0x148 && a1 <= 0x1AB )
    result = (a1 - 328) & 0xFF;
  else
    result = 0;
  return result;
}

//----- (0207D2D0) --------------------------------------------------------
int __fastcall Function_207d2d0(int a1)
{
  short *v1
  uint v2

  v1 = Unknown_20f0b64;
  v2 = 0;
  do
  {
    if ( a1 == (ushort)*v1 )
      return 1;
    ++v2;
    ++v1;
  }
  while ( v2 < 0xC );
  return 0;
}

//----- (0207D2F0) --------------------------------------------------------
int __fastcall Function_207d2f0(int a1)
{
  short *v1
  uint v2

  v1 = Unknown_20f0b64;
  v2 = 0;
  do
  {
    if ( a1 == (ushort)*v1 )
      return (uchar)v2;
    ++v2;
    ++v1;
  }
  while ( v2 < 0xC );
  return 0;
}

//----- (0207D310) --------------------------------------------------------
int __fastcall Function_207d310(uint a1)
{
  int result

  if ( a1 < 0xC )
    result = (ushort)Unknown_20f0b64[a1];
  else
    result = 0;
  return result;
}

//----- (0207D324) --------------------------------------------------------
int __fastcall Function_207d324(int a1)
{
  short *v1
  uint v2

  v1 = Unknown_20f0b7c;
  v2 = 0;
  do
  {
    if ( a1 == (ushort)*v1 )
      return 1;
    ++v2;
    ++v1;
  }
  while ( v2 < 0x40 );
  return 0;
}

//----- (0207D344) --------------------------------------------------------
uint __fastcall Function_207d344(uint a1)
{
  uint result

  if ( a1 >= 0x95 )
    result = (a1 - 149) & 0xFF;
  else
    result = 255;
  return result;
}

//----- (0207D354) --------------------------------------------------------
int __fastcall Function_207d354(uint a1)
{
  int result

  if ( a1 < 0x40 )
    result = (ushort)Unknown_20f0b7c[a1];
  else
    result = 0xFFFF;
  return result;
}

//----- (0207D36C) --------------------------------------------------------
BOOL __fastcall Function_207d36c(int a1)
{
  return ((a1 + 65502) & 0xFFFFu) <= 3;
}

//----- (0207D388) --------------------------------------------------------
int __fastcall Function_207d388(uint a1)
{
  uint v1
  int v2

  v1 = a1;
  v2 = Function_207ce78(467, 0);
  return LoadFromNARC_5(15, 0, v1, 0, 36 * v2);
}

//----- (0207D3B0) --------------------------------------------------------
int __fastcall Function_207d3b0(int a1, int a2)
{
  return a1 + 36 * a2;
}

//----- (0207D3B8) --------------------------------------------------------
int GetItemListSize()
{
  return 1908;
}

//----- (0207D3C0) --------------------------------------------------------
int __fastcall AllocItemList(uint a1)
{
  int v1

  v1 = malloc(a1, 1908);
  ClearItemList(v1);
  return v1;
}

//----- (0207D3D8) --------------------------------------------------------
int __fastcall ClearItemList(int a1)
{
  return MIi_CpuClear16(0, a1, 1908);
}

//----- (0207D3EC) --------------------------------------------------------
int __fastcall CopyItemList(int a1, uint a2)
{
  return MI_CpuCopy8(a1, a2, 0x774u, (uint)MI_CpuCopy8);
}

//----- (0207D3FC) --------------------------------------------------------
int __fastcall Function_207d3fc(int a1)
{
  return *(uint *)(a1 + 1904);
}

//----- (0207D404) --------------------------------------------------------
int __fastcall Function_207d404(int result, int a2)
{
  *(uint *)(result + 1904) = a2;
  return result;
}

//----- (0207D40C) --------------------------------------------------------
int __fastcall GetItemListAdrAndSizeAndReturnPocket(int a1, uint a2, int a3, int a4, uint a5)
{
  int *v5
  int v6
  uint *v7
  int result
  char v9

  v5 = (int *)a3;
  v6 = a1;
  v7 = (uint *)a4;
  result = GetItemData(a2, 5u, a5);
  switch ( v9 )
  {
    case 0:
      *v5 = v6;
      *v7 = 165;
      break;
    case 1:
      *v5 = v6 + 1308;
      *v7 = 40;
      break;
    case 2:
      *v5 = v6 + 1724;
      *v7 = 15;
      break;
    case 3:
      *v5 = v6 + 860;
      *v7 = 100;
      break;
    case 4:
      *v5 = v6 + 1468;
      *v7 = 64;
      break;
    case 5:
      *v5 = v6 + 1260;
      *v7 = 12;
      break;
    case 6:
      *v5 = v6 + 1784;
      *v7 = 30;
      break;
    case 7:
      *v5 = v6 + 660;
      *v7 = 50;
      break;
    default:
      return result;
  }
  return result;
}

//----- (0207D4B4) --------------------------------------------------------
ushort *__fastcall Function_207d4b4(ushort *a1, uint a2, int a3, int a4, ushort a5)
{
  uint v5
  ushort *v6
  int v7
  int v8
  uint v9
  ushort *v10
  ushort *result

  v5 = a2;
  v6 = a1;
  v7 = a3;
  v8 = -1;
  v9 = 0;
  if ( v5 )
  {
    v10 = v6;
    while ( v7 != *v10 )
    {
      if ( v8 == -1 && !*v10 && !v10[1] )
        v8 = v9;
      ++v9;
      v10 += 2;
      if ( v9 >= v5 )
        goto LABEL_11;
    }
    result = &v6[2 * v9];
    if ( a4 + result[1] > a5 )
      result = 0;
  }
  else
  {
LABEL_11:
    if ( v8 == -1 )
      result = 0;
    else
      result = &v6[2 * v8];
  }
  return result;
}

//----- (0207D518) --------------------------------------------------------
ushort *__fastcall Function_207d518(int a1, uint a2, int a3, uint a4)
{
  int v4
  int v5
  ushort *result
  uint v7
  ushort *v8

  v4 = a3;
  v5 = a2;
  if ( GetItemListAdrAndSizeAndReturnPocket(a1, a2, (int)&v8, (int)&v7, a4) == 3 )
    result = Function_207d4b4(v8, v7, v5, v4, 0x63u);
  else
    result = Function_207d4b4(v8, v7, v5, v4, 0x3E7u);
  return result;
}

//----- (0207D55C) --------------------------------------------------------
BOOL __fastcall CheckStoreItem(int a1, uint a2, int a3, uint a4)
{
  return Function_207d518(a1, a2, a3, a4) != 0;
}

//----- (0207D570) --------------------------------------------------------
int __fastcall TakeItem(int a1, uint a2, int a3, uint a4)
{
  int v4
  uint v5
  short v6
  uint v7
  ushort *v8
  uint v10
  short *v11

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = Function_207d518(a1, a2, a3, a4);
  v11 = (short *)v8;
  if ( !v8 )
    return 0;
  *v8 = v5;
  v11[1] += v6;
  if ( (uint)(GetItemListAdrAndSizeAndReturnPocket(v4, v5, (int)&v11, (int)&v10, v7) - 3) <= 1 )
    Function_207d7cc(v11, v10);
  return 1;
}

//----- (0207D5B8) --------------------------------------------------------
ushort *__fastcall GetAdrToItemInItemPocketList(ushort *a1, uint a2, int a3, uint a4)
{
  uint v4
  ushort *v5
  ushort *result

  v4 = 0;
  if ( !a2 )
    return 0;
  v5 = a1;
  while ( a3 != *v5 )
  {
    ++v4;
    v5 += 2;
    if ( v4 >= a2 )
      return 0;
  }
  result = &a1[2 * v4];
  if ( result[1] < a4 )
    result = 0;
  return result;
}

//----- (0207D5E8) --------------------------------------------------------
ushort *__fastcall GetAdrToItemInItemList(int a1, uint a2, uint a3, uint a4)
{
  uint v4
  int v5
  uint v7
  ushort *v8

  v4 = a3;
  v5 = a2;
  GetItemListAdrAndSizeAndReturnPocket(a1, a2, (int)&v8, (int)&v7, a4);
  return GetAdrToItemInItemPocketList(v8, v7, v5, v4);
}

//----- (0207D60C) --------------------------------------------------------
int __fastcall GiveItem(int a1, uint a2, uint a3, uint a4)
{
  int v4
  uint v5
  short v6
  uint v7
  ushort *v8
  uint v10
  short *v11

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = GetAdrToItemInItemList(a1, a2, a3, a4);
  v11 = (short *)v8;
  if ( !v8 )
    return 0;
  v8[1] -= v6;
  if ( !v11[1] )
    *v11 = 0;
  GetItemListAdrAndSizeAndReturnPocket(v4, v5, (int)&v11, (int)&v10, v7);
  Function_207d780(v11, v10);
  return 1;
}

//----- (0207D658) --------------------------------------------------------
int __fastcall Function_207d658(ushort *a1, uint a2, int a3, uint a4)
{
  short *v4
  uint v5
  short v6
  ushort *v7

  v4 = (short *)a1;
  v5 = a2;
  v6 = a4;
  v7 = GetAdrToItemInItemPocketList(a1, a2, a3, a4);
  if ( !v7 )
    return 0;
  v7[1] -= v6;
  if ( !v7[1] )
    *v7 = 0;
  Function_207d780(v4, v5);
  return 1;
}

//----- (0207D688) --------------------------------------------------------
BOOL __fastcall CheckItem(int a1, uint a2, uint a3, uint a4)
{
  return GetAdrToItemInItemList(a1, a2, a3, a4) != 0;
}

//----- (0207D69C) --------------------------------------------------------
int __fastcall Function_207d69c(int a1, uint a2)
{
  uint v2
  uint v4

  switch ( (uchar)a2 )
  {
    case 0:
      v2 = 165;
      goto LABEL_11;
    case 1:
      v2 = 40;
      a1 += 1308;
      goto LABEL_11;
    case 2:
      v2 = 15;
      a1 += 1724;
      goto LABEL_11;
    case 3:
      a1 += 860;
      v2 = 100;
      goto LABEL_11;
    case 4:
      v2 = 64;
      a1 += 1468;
      goto LABEL_11;
    case 5:
      v2 = 12;
      a1 += 1260;
      goto LABEL_11;
    case 6:
      v2 = 30;
      a1 += 1784;
      goto LABEL_11;
    case 7:
      a1 += 660;
      v2 = 50;
LABEL_11:
      v4 = 0;
      if ( !v2 )
        return 0;
      break;
    default:
      return 0;
  }
  do
  {
    if ( *(ushort *)a1 )
      return 1;
    ++v4;
    a1 += 4;
  }
  while ( v4 < v2 );
  return 0;
}

//----- (0207D730) --------------------------------------------------------
int __fastcall Function_207d730(int a1, uint a2, uint a3)
{
  ushort *v3
  int result

  v3 = GetAdrToItemInItemList(a1, a2, 1u, a3);
  if ( v3 )
    result = v3[1];
  else
    result = 0;
  return result;
}

//----- (0207D748) --------------------------------------------------------
int __fastcall Function_207d748(ushort *a1, uint a2, int a3)
{
  ushort *v3
  int result

  v3 = GetAdrToItemInItemPocketList(a1, a2, a3, 1u);
  if ( v3 )
    result = v3[1];
  else
    result = 0;
  return result;
}

//----- (0207D75C) --------------------------------------------------------
int __fastcall SwitchItemData(short *a1, short *a2)
{
  short v2
  ushort v3
  int result

  v2 = *a1;
  v3 = a1[1];
  *a1 = *a2;
  a1[1] = a2[1];
  *a2 = v2;
  result = v3;
  a2[1] = v3;
  return result;
}

//----- (0207D780) --------------------------------------------------------
uint __fastcall Function_207d780(short *a1, uint a2)
{
  uint v2
  uint result
  short *v4
  uint v5
  short *v6
  short *v7
  uint v8
  uint v9

  v7 = a1;
  v2 = a2;
  v8 = 0;
  result = a2 - 1;
  v9 = a2 - 1;
  if ( a2 != 1 )
  {
    v4 = v7;
    do
    {
      v5 = v8 + 1;
      if ( v8 + 1 < v2 )
      {
        v6 = &v7[2 * v5];
        do
        {
          if ( !v4[1] )
            SwitchItemData(v4, v6);
          ++v5;
          v6 += 2;
        }
        while ( v5 < v2 );
      }
      v4 += 2;
      result = v9;
      ++v8;
    }
    while ( v8 < v9 );
  }
  return result;
}

//----- (0207D7CC) --------------------------------------------------------
uint __fastcall Function_207d7cc(short *a1, uint a2)
{
  uint v2
  uint result
  short *v4
  uint v5
  short *v6
  short *v7
  uint v8
  uint v9

  v7 = a1;
  v2 = a2;
  v8 = 0;
  result = a2 - 1;
  v9 = a2 - 1;
  if ( a2 != 1 )
  {
    v4 = v7;
    do
    {
      v5 = v8 + 1;
      if ( v8 + 1 < v2 )
      {
        v6 = &v7[2 * v5];
        do
        {
          if ( !v4[1] || v6[1] && (ushort)*v4 > (uint)(ushort)*v6 )
            SwitchItemData(v4, v6);
          ++v5;
          v6 += 2;
        }
        while ( v5 < v2 );
      }
      v4 += 2;
      result = v9;
      ++v8;
    }
    while ( v8 < v9 );
  }
  return result;
}