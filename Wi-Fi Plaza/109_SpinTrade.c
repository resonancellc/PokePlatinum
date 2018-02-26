//----- (021D0D80) --------------------------------------------------------
int __fastcall Function_109_21d0d80(int a1)
{
  int v1;
  int v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v1 = a1;
  v2 = LoadPtrToOverWorldDataIn18(a1);
  Function_20388f4(1, 1);
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  Function_2017de0(2);
  Function_2017fc8(3, 95, 0x80000);
  v3 = (int *)MallocSomeDataAndStorePtrInOverlayData1c(v1, 3532, 0x5Fu);
  Call_FillMemWithValue(v3, 0, 0xDCCu);
  *(uint *)(v2 + 56) = v3;
  v3[51] = v2;
  v3[52] = *(uint *)(v2 + 52);
  v3[9] = LoadPokePartyAdress(*(uint *)(v3[51] + 28));
  v3[864] = (int)LoadFromNARC_8(154, 0x5Fu, v4, v5);
  Function_201dbec(8, 0x5Fu);
  Function_201e3d8();
  Function_201e450(4u);
  Function_21d1c28(v3);
  SetMainLoopFunctionCall((int)Function_21d1c00, (int)v3);
  Function_21d29cc(v3);
  Function_21d2af0(v3);
  v6 = 0;
  v7 = 0;
  v8 = Function_203608c();
  v9 = v3[51];
  do
  {
    if ( (1 << v6) & *(uint *)(v9 + 12) )
    {
      if ( v6 == v8 )
        break;
      ++v7;
    }
    ++v6;
  }
  while ( v6 < 5 );
  v3[69] = *((ushort *)dword_21D5C44 + 5 * *(uint *)(v9 + 8) + v7) << 12;
  v3[7] = Function_20041fc();
  Function_21d31a8(v3);
  Function_21d32dc(v3);
  Function_21d3414(v3);
  Function_21d3584(v3);
  Function_21d379c(v3);
  Function_21d3884(v3);
  Function_200f174(0, 1, 1, 0, 8, 1, 95);
  return 1;
}

//----- (021D0EB4) --------------------------------------------------------
int __fastcall Function_109_21d0eb4(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  if ( Function_201e530() != 1 )
    ErrorHandler();
  Function_21d31e0(v2);
  Function_21d3318(v2);
  Function_21d3450(v2);
  Function_21d35bc(v2);
  Function_21d37e0(v2);
  Function_21d38bc(v2);
  Function_21d2a58(v2);
  Function_21d2af8(v2);
  Function_21d1c68(v2);
  SetMainLoopFunctionCall(0, 0);
  Function_201dc3c();
  Call_FS_CloseFile(*(int **)(v2 + 3456));
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(95);
  Function_2017df0(2);
  return 1;
}

//----- (021D0F2C) --------------------------------------------------------
int __fastcall Function_109_21d0f2c(int a1)
{
  uint *v1;
  int v2;

  v1 = (uint *)LoadOverlayData1c(a1);
  Function_21d294c();
  do
    v2 = ((int (__fastcall *)(uint *))*(&off_21D5CBC + *v1))(v1);
  while ( v2 == 1 );
  if ( v2 == 2 )
    return 1;
  Function_21d2a68(v1);
  Function_21d2c38(v1);
  Function_21d1c90(v1);
  Function_21d0f70(v1);
  return 0;
}

//----- (021D0F70) --------------------------------------------------------
int __fastcall Function_21d0f70(int result)
{
  *(uint *)(result + 52) = 0;
  *(uint *)(result + 60) = 0;
  return result;
}

//----- (021D0F78) --------------------------------------------------------
int __fastcall Function_21d0f78(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_21d2634();
  *v1 = 1;
  return 0;
}

//----- (021D0F8C) --------------------------------------------------------
int __fastcall Function_21d0f8c(int *a1)
{
  int *v1;
  int v2;

  v1 = a1;
  if ( !Function_200f2ac() )
    return 0;
  if ( Function_203608c() )
    v2 = 8;
  else
    v2 = 2;
  *v1 = v2;
  return 1;
}

//----- (021D0FB0) --------------------------------------------------------
int __fastcall Function_21d0fb0(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( !Function_21d3acc() )
    return 0;
  *v1 = 3;
  return 1;
}

//----- (021D0FC8) --------------------------------------------------------
int __fastcall Function_21d0fc8(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  short v6;
  int v7;

  v7 = a4;
  v4 = a1;
  v6 = 1;
  if ( Function_209bebc(a1[52], 8u, (char *)&v6, 2) != 1 )
    return 0;
  *v4 = 4;
  return 1;
}

//----- (021D0FF8) --------------------------------------------------------
int __fastcall Function_21d0ff8(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  v2 = Function_21d3b04() + 1;
  if ( v2 != Function_2035e18() )
    return 0;
  *v1 = 5;
  return 1;
}

//----- (021D1018) --------------------------------------------------------
int __fastcall Function_21d1018(int a1)
{
  int v1;

  v1 = a1;
  *(uint *)(a1 + 48) = Function_21d3b04() + 1;
  if ( Function_209bebc(*(uint *)(v1 + 208), 0xDu, (char *)(v1 + 48), 4) == 1 )
  {
    *(uint *)(v1 + 20) = 0;
    *(uint *)v1 = 6;
  }
  return 0;
}

//----- (021D1048) --------------------------------------------------------
int __fastcall Function_21d1048(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v7;
  int v8;
  short v9;
  short v10;
  int v11;

  v11 = a4;
  v4 = a1;
  v5 = a1[5];
  if ( !v5 )
  {
    v10 = 0;
    v9 = 0;
    if ( Function_209bebc(a1[52], 0xCu, (char *)&v9, 4) == 1 )
      ++v4[5];
    return 0;
  }
  v7 = 1;
  v8 = 1;
  while ( !((1 << v7) & *(ushort *)(v4[52] + 66)) )
  {
LABEL_11:
    if ( ++v7 >= 5 )
      goto LABEL_12;
  }
  if ( v8 < v5 )
  {
    ++v8;
    goto LABEL_11;
  }
  v10 = v7;
  v9 = v4[5];
  if ( Function_209bebc(v4[52], 0xCu, (char *)&v9, 4) == 1 )
    ++v4[5];
LABEL_12:
  if ( v4[5] >= v4[12] )
    *v4 = 7;
  return 0;
}

//----- (021D10D8) --------------------------------------------------------
int __fastcall Function_21d10d8(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  short v6;
  int v7;

  v7 = a4;
  v4 = a1;
  v6 = 8;
  if ( Function_209bebc(a1[52], 8u, (char *)&v6, 2) == 1 )
    *v4 = 10;
  return 0;
}

//----- (021D1100) --------------------------------------------------------
int __fastcall Function_21d1100(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  if ( Function_209bebc(a1[52], 9u, 0, 0) != 1 )
    return 0;
  result = 0;
  v1[4] = 0;
  *v1 = 9;
  return result;
}

//----- (021D1124) --------------------------------------------------------
int __fastcall Function_21d1124(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( Function_21d3ab8() == 1 )
  {
    if ( v1[12] < 2 )
      ErrorHandler();
    if ( !v1[11] )
      ErrorHandler();
    *v1 = 10;
  }
  return 0;
}

//----- (021D1150) --------------------------------------------------------
int __fastcall Function_21d1150(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_20364f0(202);
  *v1 = 11;
  return 0;
}

//----- (021D1164) --------------------------------------------------------
int __fastcall Function_21d1164(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( Function_2036540(202) )
    *v1 = 12;
  return 0;
}

//----- (021D117C) --------------------------------------------------------
int __fastcall Function_21d117c(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( Function_209bebc(a1[52], 0xEu, (char *)(a1[51] + 4), 4) )
    *v1 = 13;
  return 0;
}

//----- (021D11A0) --------------------------------------------------------
int __fastcall Function_21d11a0(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( Function_203597c(131, a1[9], 1424) )
    *v1 = 14;
  return 0;
}

//----- (021D11BC) --------------------------------------------------------
int __fastcall Function_21d11bc(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( a1[12] == Function_21d3bc4() )
  {
    if ( Function_21d3cd8(v1) == 1 )
    {
      Function_209bebc(v1[52], 0x10u, 0, 0);
      *v1 = 46;
    }
    else
    {
      Function_209bebc(v1[52], 0x11u, 0, 0);
      *v1 = 15;
    }
  }
  return 0;
}

//----- (021D1204) --------------------------------------------------------
int __fastcall Function_21d1204(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( Function_21d3d3c() == 1 )
  {
    *v1 = 46;
  }
  else if ( v1[12] == Function_21d3d1c(v1) )
  {
    *v1 = 16;
  }
  return 0;
}

//----- (021D122C) --------------------------------------------------------
int __fastcall Function_21d122c(uint *a1)
{
  uint *v1;
  uint *v2;
  int v3;
  int v4;
  uint *v5;

  v1 = a1;
  v2 = (uint *)Function_21d3a94();
  v2[4] = v1[11];
  v3 = v1[12];
  v2[5] = v3;
  v4 = 0;
  v5 = v1;
  v2[1] = *((ushort *)dword_21D5C44 + 5 * v3 + v1[11]);
  do
  {
    if ( Function_21d3b54(v1, v4) )
    {
      v5[33] = Function_2032ee8(v4);
      Function_2025ef4((ushort *)v5[33], (ushort *)v5[38]);
    }
    ++v4;
    ++v5;
  }
  while ( v4 < 8 );
  v1[69] = v2[1] << 12;
  *v1 = 17;
  Function_2004550(0xFu, 0x4BAu);
  Function_21d2788(v1);
  return 1;
}

//----- (021D12B0) --------------------------------------------------------
int __fastcall Function_21d12b0(uint *a1)
{
  uint *v1;
  int v2;
  int *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint v9;
  int v10;
  int v11;

  v1 = a1;
  v2 = a1[3] - 1;
  a1[3] = v2;
  if ( v2 > 0 )
    return 0;
  a1[3] = 15;
  v4 = (int *)Function_21d3ab4();
  v5 = v4[4];
  v6 = *((ushort *)dword_21D5C80 + 5 * v4[5] + v5);
  v7 = v4[1];
  v8 = *v4;
  Function_21d2fe0(v1, HIWORD(v1[v5 + 28]));
  v9 = v4[4] + 1;
  v4[4] = v9;
  s32_div_f(v9, v4[5]);
  v4[4] = v10;
  v11 = *v4 + 1;
  *v4 = v11;
  if ( v11 == v4[5] )
  {
    v1[3] = 0;
    *v1 = 18;
  }
  return 0;
}

//----- (021D1334) --------------------------------------------------------
int __fastcall Function_21d1334(uint *a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = 0;
  v2 = (int)(a1 + 100);
  v3 = a1[12];
  v4 = 0;
  do
  {
    if ( *(uint *)(v2 + 328) == 1 )
      ++v4;
    ++v1;
    v2 += 176;
  }
  while ( v1 < v3 );
  if ( v4 != v3 )
    return 0;
  *a1 = 19;
  return 1;
}

//----- (021D1368) --------------------------------------------------------
int __fastcall Function_21d1368(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  v2 = a1[3] + 1;
  v1[3] = v2;
  if ( v2 > 30 )
  {
    v1[3] = 0;
    if ( Function_203608c() )
      *v1 = 21;
    else
      *v1 = 20;
  }
  return 0;
}

//----- (021D1390) --------------------------------------------------------
int __fastcall Function_21d1390(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  short v6;
  int v7;

  v7 = a4;
  v4 = a1;
  v6 = 4;
  if ( Function_209bebc(a1[52], 8u, (char *)&v6, 2) == 1 )
    *v4 = 22;
  return 0;
}

//----- (021D13BC) --------------------------------------------------------
int __fastcall Function_21d13bc(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( Function_21d3ab8() != 1 )
    return 0;
  *v1 = 22;
  return 1;
}

//----- (021D13D8) --------------------------------------------------------
int __fastcall Function_21d13d8(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_20364f0(202);
  *v1 = 23;
  return 0;
}

//----- (021D13EC) --------------------------------------------------------
int __fastcall Function_21d13ec(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( Function_2036540(202) )
    *v1 = 24;
  return 0;
}

//----- (021D1404) --------------------------------------------------------
int __fastcall Function_21d1404(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_21d3990();
  Function_21d3684(v1);
  *v1 = 25;
  return 0;
}

//----- (021D141C) --------------------------------------------------------
int __fastcall Function_21d141c(uint *a1)
{
  uint *v1;
  int v2;
  int result;
  int i;

  v1 = a1;
  v2 = a1[3] + 1;
  v1[3] = v2;
  if ( v2 < 95 )
    return 0;
  for ( i = 0; i < v1[12]; ++i )
    Function_21d28a0(v1, i);
  result = 0;
  v1[3] = 0;
  *v1 = 26;
  return result;
}

//----- (021D1450) --------------------------------------------------------
int __fastcall Function_21d1450(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_203608c();
  *v1 = 27;
  return 0;
}

//----- (021D1460) --------------------------------------------------------
int __fastcall Function_21d1460(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;
  bool v7;
  uchar v8;
  int v9;
  int v10;
  int v11;
  int v12;
  char v13;
  short v14;
  short v15;
  short v16;
  int v17;

  v17 = a4;
  v4 = a1;
  if ( Function_21d3a14() != 1 || Function_21d35f4(v4) )
  {
    if ( *(uint *)(v4 + 52) && !Function_21d35f4(v4) )
      Function_21d35cc(v4);
    if ( !Function_21d37f0(v4) && Function_21d29ac(v4) == 1 )
    {
      if ( !Function_21d35f4(v4) )
      {
        Function_21d35cc(v4);
        *(uint *)(v4 + 56) = 1;
      }
      Function_21d37fc(v4);
    }
    if ( *(uint *)(v4 + 56)
      && Function_209bebc(*(uint *)(*(uint *)(v4 + 204) + 52), 0xAu, (char *)(v4 + 56), 1) == 1 )
    {
      *(uint *)(v4 + 56) = 0;
    }
    v6 = *(uint *)(v4 + 8);
    v8 = __OFSUB__(v6, 300);
    v7 = v6 - 300 < 0;
    v9 = *(uint *)(v4 + 284);
    if ( v7 ^ v8 )
    {
      v10 = v9 + 191;
      *(uint *)(v4 + 284) = v10;
      if ( v10 >= 57344 )
        *(uint *)(v4 + 284) = 57344;
    }
    else
    {
      v11 = v9 - 191;
      *(uint *)(v4 + 284) = v11;
      if ( v11 < 0x4000 )
        *(uint *)(v4 + 284) = 0x4000;
    }
    v12 = *(uint *)(v4 + 284);
    if ( Function_21d35e8(v4) == 1 )
      Function_21d2ae4(v4 + 212, 2 * v12);
    else
      Function_21d39fc(v4, v12);
    v14 = *(uint *)(v4 + 8);
    v15 = *(uint *)(v4 + 284) / 4096;
    v16 = *(uint *)(v4 + 272) / 4096;
    Function_209bebc(*(uint *)(v4 + 208), 0xBu, &v13, 8);
    result = 0;
  }
  else
  {
    *(uint *)v4 = 29;
    result = 1;
  }
  return result;
}

//----- (021D1570) --------------------------------------------------------
int __fastcall Function_21d1570(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( *(uint *)(a1 + 60) == 1 )
  {
    *(uint *)(a1 + 272) = *(ushort *)(a1 + 94) << 12;
    *(uint *)(a1 + 284) = *(short *)(a1 + 92) << 12;
    *(uint *)(a1 + 8) = *(ushort *)(a1 + 90);
  }
  if ( Function_21d3a14(a1) != 1 || Function_21d35f4(v1) )
  {
    if ( *(uint *)(v1 + 52) && !Function_21d35f4(v1) )
      Function_21d35cc(v1);
    if ( !Function_21d37f0(v1) && Function_21d29ac(v1) == 1 )
    {
      if ( !Function_21d35f4(v1) )
      {
        Function_21d35cc(v1);
        *(uint *)(v1 + 56) = 1;
      }
      Function_21d37fc(v1);
    }
    if ( *(uint *)(v1 + 56)
      && Function_209bebc(*(uint *)(*(uint *)(v1 + 204) + 52), 0xAu, (char *)(v1 + 56), 1) == 1 )
    {
      *(uint *)(v1 + 56) = 0;
    }
    if ( Function_21d35e8(v1) == 1 )
      Function_21d2ae4(v1 + 212, 2 * *(uint *)(v1 + 284));
    else
      Function_21d39fc(v1, *(uint *)(v1 + 284));
    result = 0;
  }
  else
  {
    *(uint *)v1 = 29;
    result = 1;
  }
  return result;
}

//----- (021D1648) --------------------------------------------------------
int __fastcall Function_21d1648(int *a1)
{
  int *v1;
  int v2;

  v1 = a1;
  Function_21d3990();
  v1[10] = Function_21d2df8(v1);
  if ( *(uint *)(v1[10] + 12) == Function_203608c() )
    v2 = 30;
  else
    v2 = 31;
  *v1 = v2;
  Function_2005748(0x5F1u);
  return 1;
}

//----- (021D167C) --------------------------------------------------------
int __fastcall Function_21d167c(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_21d39fc(a1, 0x4000);
  v1[10] = Function_21d2df8(v1);
  if ( *(uint *)(v1[10] + 12) != Function_203608c() )
    *v1 = 31;
  return 0;
}

//----- (021D16A4) --------------------------------------------------------
int __fastcall Function_21d16a4(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v10;
  int v11;

  v11 = a4;
  v4 = a1;
  v5 = *(uint *)(a1[10] + 28);
  v6 = 0x4000;
  v7 = *((ushort *)dword_21D5C80 + 5 * a1[12] + a1[11]) << 12;
  v10 = v5;
  v8 = v7 - v5;
  if ( v7 - v5 < 0 )
    v8 = v7 + 1474560 - v5;
  if ( v8 <= 0x10000 )
    v6 = 0x2000;
  if ( v8 < v6 )
    v6 = v8;
  Function_21d2ae4(a1 + 53, v6);
  Function_21d2d44(v4, v6);
  Function_21d39d4(&v10, v6);
  if ( v10 / 4096 == v7 / 4096 )
    *v4 = 32;
  return 0;
}

//----- (021D1720) --------------------------------------------------------
int __fastcall Function_21d1720(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_20364f0(202);
  *v1 = 33;
  return 0;
}

//----- (021D1734) --------------------------------------------------------
int __fastcall Function_21d1734(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( Function_2036540(202) )
  {
    if ( Function_203608c() )
      *v1 = 35;
    else
      *v1 = 34;
  }
  return 0;
}

//----- (021D1758) --------------------------------------------------------
int __fastcall Function_21d1758(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  uint *v6;
  uint *v7;
  short v9;
  short v10;
  int v11;

  v11 = a4;
  v4 = a1;
  v5 = 0;
  v9 = a1[68] / 4096;
  a1[8] = 0;
  if ( a1[12] > 0 )
  {
    v6 = a1 + 180;
    v7 = a1 + 8;
    do
    {
      if ( !*v6 )
        ErrorHandler();
      *(&v9 + v6[4] + 2) = v6[7] / 4096;
      if ( Function_21d3c08(v4, v6[7], v4[12]) == 1 )
        *v7 |= 1 << v6[3];
      ++v5;
      v6 += 44;
    }
    while ( v5 < v4[12] );
  }
  v10 = v4[8];
  if ( Function_209bebc(v4[52], 0xFu, (char *)&v9, 16) == 1 )
    *v4 = 36;
  return 0;
}

//----- (021D17EC) --------------------------------------------------------
int __fastcall Function_21d17ec(int a1)
{
  int v1;
  int v2;
  uint *v3;

  v1 = a1;
  if ( *(uint *)(a1 + 64) == 1 )
  {
    *(uint *)(a1 + 272) = *(ushort *)(a1 + 96) << 12;
    v2 = 0;
    if ( *(uint *)(a1 + 48) > 0 )
    {
      v3 = (uint *)(a1 + 720);
      do
      {
        if ( !*v3 )
          ErrorHandler();
        ++v2;
        v3[7] = *(ushort *)(v1 + 96 + 2 * v3[4] + 4) << 12;
        v3 += 44;
      }
      while ( v2 < *(uint *)(v1 + 48) );
    }
    *(uint *)(v1 + 32) = *(ushort *)(v1 + 98);
    Function_21d2a68(v1);
    Function_21d2c38(v1);
    *(uint *)(v1 + 40) = Function_21d2df8(v1);
    *(uint *)v1 = 36;
  }
  return 0;
}

//----- (021D1858) --------------------------------------------------------
int __fastcall Function_21d1858(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int result;

  v1 = a1;
  v2 = 0;
  v3 = *(uint *)(a1[10] + 16);
  if ( a1[12] > 0 )
  {
    do
    {
      Function_21d2874(v1, v1[v1[44 * v3 + 183] + 38], v2);
      v4 = v1[12];
      s32_div_f(v3 + 1, v1[12]);
      ++v2;
      v3 = v5;
    }
    while ( v2 < v4 );
  }
  result = 0;
  v1[3] = 0;
  *v1 = 37;
  return result;
}

//----- (021D18A0) --------------------------------------------------------
int __fastcall Function_21d18a0(uint *a1)
{
  uint *v1;
  int v2;
  int v4;

  v1 = a1;
  v2 = a1[3] + 1;
  v1[3] = v2;
  if ( v2 < 120 )
    return 0;
  v4 = 0;
  for ( v1[3] = 0; v4 < v1[12]; ++v4 )
    Function_21d28a0(v1, v4);
  Function_21d268c(v1, 2, v1[*(uint *)(v1[10] + 12) + 33]);
  Function_2006150(0x486u);
  *v1 = 38;
  return 0;
}

//----- (021D18F4) --------------------------------------------------------
int __fastcall Function_21d18f4(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  v2 = a1[3];
  if ( v2 >= 120 )
  {
    if ( !Function_20061e4() )
    {
      v1[3] = 0;
      *v1 = 39;
    }
  }
  else
  {
    v1[3] = v2 + 1;
  }
  return 0;
}

//----- (021D1918) --------------------------------------------------------
int __fastcall Function_21d1918(int *a1)
{
  int *v1;
  int result;
  int v3;
  int v4;
  uint v5;
  int v6;
  int v7;
  uint v8;
  int v9;
  int v10;
  int v11;

  v1 = a1;
  Function_21d38f8();
  if ( v1[8] & (1 << *(uint *)(v1[10] + 12)) )
  {
    v3 = 2 * v1[12];
    v4 = dword_21D5BE4[v3];
    v5 = dword_21D5BE8[v3];
    v6 = PRNG();
    u32_div_f(v6, v5 - v4 + 1);
    v8 = v4 + v7;
    if ( v8 >= dword_21D5BE4[v3] )
    {
      if ( v8 > v5 )
        v8 = v5;
    }
    else
    {
      v8 = dword_21D5BE4[v3];
    }
    Function_21d2714(v1, 3, v8);
    v9 = LoadVariableAreaAdressItemList(*(uint *)(v1[51] + 28));
    v10 = TakeItem(v9, (ushort)v8, 1, 0x5Fu);
    Function_2006150(0x486u);
    if ( v10 == 1 )
      v11 = 40;
    else
      v11 = 41;
    *v1 = v11;
    result = 0;
  }
  else
  {
    *v1 = 43;
    result = 0;
  }
  return result;
}

//----- (021D19AC) --------------------------------------------------------
int __fastcall Function_21d19ac(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  v2 = a1[3];
  if ( v2 >= 120 )
  {
    if ( !Function_20061e4() )
    {
      v1[3] = 0;
      *v1 = 43;
    }
  }
  else
  {
    v1[3] = v2 + 1;
  }
  return 0;
}

//----- (021D19D0) --------------------------------------------------------
int __fastcall Function_21d19d0(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  v2 = a1[3];
  if ( v2 >= 120 )
  {
    if ( !Function_20061e4() )
    {
      v1[3] = 0;
      *v1 = 40;
      Function_21d2634(v1, 4);
    }
  }
  else
  {
    v1[3] = v2 + 1;
  }
  return 0;
}

//----- (021D19FC) --------------------------------------------------------
int __fastcall Function_21d19fc(uint *a1)
{
  int v1;

  v1 = a1[3];
  if ( v1 >= 120 )
  {
    a1[3] = 0;
    *a1 = 43;
  }
  else
  {
    a1[3] = v1 + 1;
  }
  return 0;
}

//----- (021D1A14) --------------------------------------------------------
int __fastcall Function_21d1a14(uint *a1)
{
  uint *v1;
  int *v2;

  v1 = a1;
  v2 = Function_202c244(0x5Fu, 17);
  Function_202b758(*(uint *)(v1[51] + 44), (int)v2, 4u);
  Function_202cf28(*(uint *)(v1[51] + 40), 119);
  Function_202cfec(*(uint *)(v1[51] + 40), 45);
  Function_21d2634(v1, 11);
  Function_20364f0(202);
  byte_21BF6E4 = 1;
  *v1 = 44;
  return 0;
}

//----- (021D1A6C) --------------------------------------------------------
int __fastcall Function_21d1a6c(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( Function_2036540(202) )
  {
    Function_21d3b70(v1, *(uint *)(v1[10] + 12));
    Function_2038ed4(v1 + 1);
    v1[882] = Function_200e7fc(v1 + 810, 10);
    *v1 = 45;
  }
  return 0;
}

//----- (021D1AA8) --------------------------------------------------------
int __fastcall Function_21d1aa8(uint *a1, int a2, int a3, int a4)
{
  uint *v4;

  v4 = a1;
  if ( Function_2038edc(*(uint *)(a1[51] + 28), 2, a1 + 1, a4) )
  {
    byte_21BF6E4 = 0;
    Function_200eba0(v4[882]);
    *v4 = 48;
  }
  return 0;
}

//----- (021D1ADC) --------------------------------------------------------
int __fastcall Function_21d1adc(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_21d2634(a1, 12);
  *v1 = 47;
  return 0;
}

//----- (021D1AF0) --------------------------------------------------------
int __fastcall Function_21d1af0(uint *a1)
{
  int v1;

  v1 = a1[3] + 1;
  a1[3] = v1;
  if ( v1 < 120 )
    return 0;
  a1[3] = 0;
  *a1 = 48;
  return 1;
}

//----- (021D1B0C) --------------------------------------------------------
int __fastcall Function_21d1b0c(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( !a1[6] )
    Function_20364f0(202);
  Function_21d2634(v1, 10);
  *v1 = 49;
  return 0;
}

//----- (021D1B2C) --------------------------------------------------------
int __fastcall Function_21d1b2c(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  if ( a1[6] )
  {
    v2 = a1[3] + 1;
    v1[3] = v2;
    if ( v2 >= 120 )
    {
      v1[3] = 0;
      if ( !*(uint *)(v1[52] + 60) )
      {
        Function_20388f4(0, 0);
        Function_2037b58(1);
        Function_2036ac4();
      }
      *v1 = 50;
    }
  }
  else if ( Function_2036540(202) )
  {
    Function_20388f4(0, 0);
    Function_2037b58(1);
    Function_2036ac4();
    *v1 = 50;
  }
  return 0;
}

//----- (021D1B8C) --------------------------------------------------------
int __fastcall Function_21d1b8c(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( Function_2035e18() > 1 )
    return 0;
  *v1 = 51;
  return 1;
}

//----- (021D1BA4) --------------------------------------------------------
int __fastcall Function_21d1ba4(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  Function_200f174(2u, 0, 0, 0, 8, 1, 95);
  v2 = v1[7];
  if ( v2 != Function_20041fc() )
    Function_2004550(4u, (ushort)v2);
  *v1 = 52;
  return 0;
}

//----- (021D1BE4) --------------------------------------------------------
int __fastcall Function_21d1be4(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( !Function_200f2ac() )
    return 0;
  *v1 = 53;
  return 1;
}

//----- (021D1BFC) --------------------------------------------------------
int Function_21d1bfc()
{
  return 2;
}

//----- (021D1C00) --------------------------------------------------------
int __fastcall Function_21d1c00(int a1)
{
  int v1;

  v1 = a1;
  Function_201dcac();
  Function_200c800();
  Function_2003694(*(uint *)(v1 + 3484));
  return Function_201c2b8(*(uint *)(v1 + 3460));
}

//----- (021D1C28) --------------------------------------------------------
int __fastcall Function_21d1c28(int a1)
{
  int v1;

  v1 = a1;
  Function_21d1cf0();
  Function_21d1e1c(v1);
  Function_21d28c4(v1);
  Function_21d1ec8(v1);
  Function_21d22b0(v1);
  Function_21d2368(v1);
  Function_21d2004(v1);
  Function_21d24f8(v1);
  Function_21d2408(v1);
  return Function_21d1d10(v1);
}

//----- (021D1C68) --------------------------------------------------------
int __fastcall Function_21d1c68(int a1)
{
  int v1;

  v1 = a1;
  Function_21d1dc8();
  Function_21d24c0(v1);
  Function_21d25e8(v1);
  Function_21d2204(v1);
  Function_21d2308(v1);
  return Function_21d293c(v1);
}

//----- (021D1C90) --------------------------------------------------------
int __fastcall Function_21d1c90(int a1)
{
  int v1;

  v1 = a1;
  Call_G3X_Reset();
  Function_20203ec();
  Function_20af51c(0, 0, -4096, 0);
  Function_20af558(0, 0x7FFF);
  Function_20af56c(0x7FFF, 0x7FFF, 0);
  Function_20af590(0x7FFF, 0x7FFF, 0);
  Function_21d2ac8(v1);
  Function_21d2ccc(v1);
  Function_20241bc(0, 0);
  return Function_200c7ec(*(int **)(v1 + 3480));
}

//----- (021D1CF0) --------------------------------------------------------
char *Function_21d1cf0()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_21D5BBC;
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

//----- (021D1D10) --------------------------------------------------------
int *Function_21d1d10()
{
  Function_201ff0c(1u, 1);
  Function_201ff0c(2u, 1);
  Function_201ff0c(4u, 1);
  Function_201ff0c(8u, 1);
  Function_201ff0c(0x10u, 1);
  Function_201ff74(1u, 0);
  Function_201ff74(2u, 0);
  Function_201ff74(4u, 1);
  Function_201ff74(8u, 1);
  Function_201ff74(0x10u, 1);
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 1;
  REG_BG1CNT &= 0xFFFCu;
  REG_BG2CNT = REG_BG2CNT & 0xFFFC | 2;
  REG_BG3CNT = REG_BG3CNT & 0xFFFC | 3;
  REG_BG0CNT_SUB &= 0xFFFCu;
  REG_BG1CNT_SUB = REG_BG1CNT_SUB & 0xFFFC | 1;
  REG_BG2CNT_SUB = REG_BG2CNT_SUB & 0xFFFC | 2;
  REG_BG3CNT_SUB = REG_BG3CNT_SUB & 0xFFFC | 3;
  return G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 4, 40, 11, 10);
}

//----- (021D1DC8) --------------------------------------------------------
uint Function_21d1dc8()
{
  Function_201ff0c(1u, 0);
  Function_201ff0c(2u, 0);
  Function_201ff0c(4u, 0);
  Function_201ff0c(8u, 0);
  Function_201ff0c(0x10u, 0);
  Function_201ff74(1u, 0);
  Function_201ff74(2u, 0);
  Function_201ff74(4u, 0);
  Function_201ff74(8u, 0);
  return Function_201ff74(0x10u, 0);
}

//----- (021D1E1C) --------------------------------------------------------
int *__fastcall Function_21d1e1c(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  Function_20b28cc();
  G3X_InitMtxStack();
  GFX_CONTROL = GFX_CONTROL & 0xCFFD | 0x10;
  GFX_CONTROL &= 0xCFFBu;
  GFX_CONTROL = GFX_CONTROL & 0xCFFF | 8;
  v2 = v1;
  GFX_CONTROL = GFX_CONTROL & 0xCFFF | 0x20;
  v3 = 0;
  do
  {
    ++v3;
    *(ushort *)(v2 + 3488) = 4228;
    v2 += 2;
  }
  while ( v3 < 8 );
  SetEdgeTable(v1 + 3488, 4228, v3, v2);
  G3X_SetClearColor(0x7FFF, 0, 0x7FFF, 63, 0);
  GFX_FLUSH = 2;
  GFX_VIEWPORT = -1073807360;
  Function_20a5a94(1u, 1);
  return Function_20a5d88(0x4000, 1);
}

//----- (021D1EC8) --------------------------------------------------------
int __fastcall Function_21d1ec8(int a1)
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

  v1 = a1;
  *(uint *)(a1 + 3460) = Function_2018340(0x5Fu);
  REG_POWERCNT |= (uint)&REG_POWERCNT >> 11;
  v38 = 1;
  v39 = 0;
  v40 = 0;
  v41 = 1;
  SetGraphicsModes(&v38);
  v31 = 0;
  v32 = 0;
  v33 = 2048;
  v34 = 0;
  v35 = 16777217;
  v36 = 0;
  v37 = 0;
  Function_20183c4(*(uint **)(v1 + 3460), 1u, &v31, 0);
  Function_2019ebc(*(uint **)(v1 + 3460), 1u);
  Function_2019690(1u, 32, 0, 0x5Fu);
  v24 = 0;
  v25 = 0;
  v26 = 2048;
  v27 = 0;
  v28 = 50397185;
  v29 = 512;
  v30 = 0;
  Function_20183c4(*(uint **)(v1 + 3460), 2u, &v24, 0);
  Function_2019ebc(*(uint **)(v1 + 3460), 2u);
  v17 = 0;
  v18 = 0;
  v19 = 2048;
  v20 = 0;
  v21 = 50462721;
  v22 = 768;
  v23 = 0;
  Function_20183c4(*(uint **)(v1 + 3460), 3u, &v17, 0);
  Function_2019ebc(*(uint **)(v1 + 3460), 3u);
  v10 = 0;
  v11 = 0;
  v12 = 2048;
  v13 = 0;
  v14 = 84017153;
  v15 = 512;
  v16 = 0;
  Function_20183c4(*(uint **)(v1 + 3460), 6u, &v10, 0);
  Function_2019ebc(*(uint **)(v1 + 3460), 6u);
  v3 = 0;
  v4 = 0;
  v5 = 2048;
  v6 = 0;
  v7 = 117637121;
  v8 = 768;
  v9 = 0;
  Function_20183c4(*(uint **)(v1 + 3460), 7u, &v3, 0);
  return Function_2019ebc(*(uint **)(v1 + 3460), 7u);
}

//----- (021D2004) --------------------------------------------------------
uint __fastcall Function_21d2004(int a1)
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

  v1 = a1;
  v2 = Function_21d3a2c(a1);
  Function_20a71b0(v2, (uint *)(v1 + 3472));
  Function_2002fbc(*(uint *)(v1 + 3484), *(uint *)(*(uint *)(v1 + 3472) + 12), 0, 0, 0x40u);
  free(v2);
  v3 = Function_21d3a2c(v1);
  Function_20a71b0(v3, (uint *)(v1 + 3472));
  Function_2002fbc(*(uint *)(v1 + 3484), *(uint *)(*(uint *)(v1 + 3472) + 12), 1, 0, 0x40u);
  free(v3);
  Function_2003a2c(*(uint *)(v1 + 3484), 1, 0xFFFFu, 8u, 0);
  v4 = Function_21d3a2c(v1);
  NNS_G2dGetUnpackedPaletteData(v4, (uint *)(v1 + 3468));
  Function_201958c(
    *(uint **)(v1 + 3460),
    3u,
    *(int **)(*(uint *)(v1 + 3468) + 20),
    *(uint *)(*(uint *)(v1 + 3468) + 16),
    0);
  free(v4);
  v5 = Function_21d3a2c(v1);
  NNS_G2dGetUnpackedPaletteData(v5, (uint *)(v1 + 3468));
  Function_201958c(
    *(uint **)(v1 + 3460),
    6u,
    *(int **)(*(uint *)(v1 + 3468) + 20),
    *(uint *)(*(uint *)(v1 + 3468) + 16),
    0);
  free(v5);
  v6 = Function_21d3a2c(v1);
  NNS_G2dGetUnpackedPaletteData(v6, (uint *)(v1 + 3468));
  Function_201958c(
    *(uint **)(v1 + 3460),
    7u,
    *(int **)(*(uint *)(v1 + 3468) + 20),
    *(uint *)(*(uint *)(v1 + 3468) + 16),
    0);
  free(v6);
  v7 = Function_21d3a2c(v1);
  Function_20a7248(v7, (uint *)(v1 + 3464));
  Function_2019574(
    *(uint *)(v1 + 3460),
    2,
    (int *)(*(uint *)(v1 + 3464) + 12),
    *(uint *)(*(uint *)(v1 + 3464) + 8));
  Function_2019448(*(uint **)(v1 + 3460), 2u);
  free(v7);
  v8 = Function_21d3a2c(v1);
  Function_20a7248(v8, (uint *)(v1 + 3464));
  Function_2019574(
    *(uint *)(v1 + 3460),
    3,
    (int *)(*(uint *)(v1 + 3464) + 12),
    *(uint *)(*(uint *)(v1 + 3464) + 8));
  Function_2019448(*(uint **)(v1 + 3460), 3u);
  free(v8);
  v9 = Function_21d3a2c(v1);
  Function_20a7248(v9, (uint *)(v1 + 3464));
  Function_2019574(
    *(uint *)(v1 + 3460),
    6,
    (int *)(*(uint *)(v1 + 3464) + 12),
    *(uint *)(*(uint *)(v1 + 3464) + 8));
  Function_2019448(*(uint **)(v1 + 3460), 6u);
  free(v9);
  v10 = Function_21d3a2c(v1);
  Function_20a7248(v10, (uint *)(v1 + 3464));
  Function_2019574(
    *(uint *)(v1 + 3460),
    7,
    (int *)(*(uint *)(v1 + 3464) + 12),
    *(uint *)(*(uint *)(v1 + 3464) + 8));
  Function_2019448(*(uint **)(v1 + 3460), 7u);
  return free(v10);
}

//----- (021D2204) --------------------------------------------------------
uint __fastcall Function_21d2204(int a1)
{
  int v1;

  v1 = a1;
  Function_2019044(*(uint *)(a1 + 3460), 1);
  Function_2019044(*(uint *)(v1 + 3460), 2);
  Function_2019044(*(uint *)(v1 + 3460), 3);
  Function_2019044(*(uint *)(v1 + 3460), 6);
  Function_2019044(*(uint *)(v1 + 3460), 7);
  return free(*(uint *)(v1 + 3460));
}

//----- (021D2248) --------------------------------------------------------
uint __fastcall Function_21d2248(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_21d3a2c(a1);
  Function_20a7248(v2, (uint *)(v1 + 3464));
  Function_2019574(
    *(uint *)(v1 + 3460),
    6,
    (int *)(*(uint *)(v1 + 3464) + 12),
    *(uint *)(*(uint *)(v1 + 3464) + 8));
  Function_2019448(*(uint **)(v1 + 3460), 6u);
  return free(v2);
}

//----- (021D228C) --------------------------------------------------------
uint __fastcall Function_21d228c(int a1)
{
  return Function_21d2248(a1);
}

//----- (021D2298) --------------------------------------------------------
uint __fastcall Function_21d2298(int a1)
{
  return Function_21d2248(a1);
}

//----- (021D22A4) --------------------------------------------------------
uint __fastcall Function_21d22a4(int a1)
{
  return Function_21d2248(a1);
}

//----- (021D22B0) --------------------------------------------------------
int __fastcall Function_21d22b0(int a1)
{
  int v1;

  v1 = a1;
  *(uint *)(a1 + 3484) = MallocFill120(0x5Fu);
  Function_2003858(*(uint *)(v1 + 3484), 1);
  Function_2002f70(*(uint *)(v1 + 3484), 0, 512, 0x5Fu);
  Function_2002f70(*(uint *)(v1 + 3484), 2, 512, 0x5Fu);
  Function_2002f70(*(uint *)(v1 + 3484), 1, 512, 0x5Fu);
  return Function_2002f70(*(uint *)(v1 + 3484), 3, 512, 0x5Fu);
}

//----- (021D2308) --------------------------------------------------------
uint __fastcall Function_21d2308(int a1)
{
  int v1;

  v1 = a1;
  Function_2002fa0(*(uint *)(a1 + 3484), 0);
  Function_2002fa0(*(uint *)(v1 + 3484), 2);
  Function_2002fa0(*(uint *)(v1 + 3484), 1);
  Function_2002fa0(*(uint *)(v1 + 3484), 3);
  return Call_free1(*(uint *)(v1 + 3484));
}

//----- (021D2344) --------------------------------------------------------
uint __fastcall Function_21d2344(int a1, uchar a2)
{
  return Function_2003a2c(*(uint *)(a1 + 3484), 1, 0xFFFFu, a2, 0);
}

//----- (021D2368) --------------------------------------------------------
uint __fastcall Function_21d2368(int a1, int a2, int a3, int a4)
{
  int v4;
  uint result;
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

  v25 = a4;
  v4 = a1;
  v17 = 0;
  v18 = 128;
  v19 = 0;
  v20 = 32;
  v21 = 0;
  v22 = 128;
  v23 = 0;
  v24 = 32;
  v12 = 96;
  v13 = 0x10000;
  v14 = 0x4000;
  v15 = 1048592;
  v16 = 16;
  *(uint *)(a1 + 3476) = Function_200c6e4(0x5Fu);
  Function_200c73c(*(uint **)(v4 + 3476), &v17, &v12, 32);
  v6 = 96;
  v7 = 32;
  v8 = 64;
  v9 = 64;
  v10 = 16;
  v11 = 16;
  *(uint *)(v4 + 3480) = Function_200c704(*(uint **)(v4 + 3476));
  if ( !Function_200c7c0(*(int **)(v4 + 3476), *(int ***)(v4 + 3480), 255) )
    ErrorHandler();
  result = Function_200cb30(*(uint **)(v4 + 3476), *(uint *)(v4 + 3480), &v6);
  if ( !result )
    result = ErrorHandler();
  return result;
}

//----- (021D2408) --------------------------------------------------------
uint __fastcall Function_21d2408(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int *v6;
  int v7;
  int v9;

  v1 = (uint *)a1[869];
  v2 = a1[870];
  v3 = a1[871];
  Function_2009704(1);
  v6 = LoadFromNARC_8(122, 0x5Fu, v4, v5);
  Function_200cc3c(v1, v2, (int)v6, 0xEu, 0, 1, 4);
  Function_200cdc4(v3, 2u, v1, v2, (int)v6, 8u, 0, 1, 1, 5);
  Function_200ce24(v1, v2, (int)v6, 0xDu, 0, 6);
  Function_200ce54(v1, v2, (int)v6, 0xCu, 0, 7);
  Call_FS_CloseFile(v6);
  Function_2039734();
  v7 = Function_20394a8(0x5Fu);
  Function_20a71b0(v7, &v9);
  Function_2002fbc(v3, *(uint *)(v9 + 12), 2, 224, 0x20u);
  return free(v7);
}

//----- (021D24C0) --------------------------------------------------------
uint __fastcall Function_21d24c0(int a1)
{
  int v1;

  v1 = a1;
  Function_200d0b0(*(uint *)(a1 + 3476), *(int ***)(a1 + 3480));
  return Function_200c8d4(*(uint *)(v1 + 3476));
}

//----- (021D24E0) --------------------------------------------------------
int *__fastcall Function_21d24e0(int a1, short *a2)
{
  return Function_200ce6c(*(uint **)(a1 + 3476), *(uint *)(a1 + 3480), a2);
}

//----- (021D24F8) --------------------------------------------------------
int __fastcall Function_21d24f8(int a1)
{
  int v1;
  uint *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int *v7;

  v1 = a1;
  v2 = (uint *)(a1 + 3228);
  Function_200daa4(*(uint **)(a1 + 3460), 1u, 1, 15, 0, 95);
  Function_200dd0c(*(uint **)(v1 + 3460), 1u, 10, 14, *(uint *)(*(uint *)(v1 + 204) + 24), 95);
  v3 = Function_200dd08(*(uint *)(*(uint *)(v1 + 204) + 24));
  Function_2003050(*(uint *)(v1 + 3484), 38, v3, 95, 0, 32, 0xE0u);
  Function_2003050(*(uint *)(v1 + 3484), 14, 7, 95, 0, 32, 0xF0u);
  v2[1] = LoadFromMsgNARC(0, 26, 376, 0x5Fu);
  v2[2] = Function_200b358(0x5Fu);
  Function_201a8d4(*(uint **)(v1 + 3460), (int)(v2 + 3), (uchar *)&dword_21D59AC[3]);
  v2[27] = Function_2023790(256, 0x5Fu);
  v4 = 0;
  v5 = v1;
  do
  {
    v6 = Function_2023790(8, 0x5Fu);
    v7 = (int *)(v5 + 152);
    ++v4;
    v5 += 4;
    *v7 = v6;
  }
  while ( v4 < 5 );
  return Function_21d27ac(v1, *(uint *)(*(uint *)(v1 + 204) + 8));
}

//----- (021D25E8) --------------------------------------------------------
uint __fastcall Function_21d25e8(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint result;

  v1 = a1;
  v2 = a1 + 3228;
  v3 = a1 + 3240;
  Function_201acf4(a1 + 3240);
  Function_201a8fc(v3);
  Function_21d27f0(v1);
  Function_200b190(*(ushort **)(v2 + 4));
  Function_200b3f0(*(uint **)(v2 + 8), v4);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 108), v5);
  v7 = 0;
  do
  {
    result = Function_20237bc_FreeMsg(*(uint *)(v1 + 152), v6);
    ++v7;
    v1 += 4;
  }
  while ( v7 < 5 );
  return result;
}

//----- (021D2634) --------------------------------------------------------
int __fastcall Function_21d2634(int a1, uint a2)
{
  uint v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = a1 + 3228;
  v4 = a1 + 3240;
  Function_201ada4_ClearTextBox(a1 + 3240, 15);
  Function_200e060(v4, 1, 10, 0xEu);
  Function_201ada4_ClearTextBox(v4, 15);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v3 + 4), v2, *(ushort **)(v3 + 108));
  v5 = *(uint *)(v3 + 108);
  Function_201d738_CallInitTextInterpreter(v4, 1);
  return Function_201a9a4(v4);
}

//----- (021D268C) --------------------------------------------------------
int __fastcall Function_21d268c(int a1, uint a2)
{
  uint v2;
  int v3;
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;

  v2 = a2;
  v3 = a1 + 3228;
  v4 = a1 + 3240;
  v5 = Function_203608c();
  Function_2032ee8(v5);
  Function_200b498(*(uint *)(v3 + 8), 1u);
  Function_200b498(*(uint *)(v3 + 8), 2u);
  v6 = (ushort *)Function_2023790(256, 0x5Fu);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v3 + 4), v2, v6);
  Function_200c388(*(uint **)(v3 + 8), *(uint *)(v3 + 108), (int)v6);
  Function_20237bc_FreeMsg((int)v6, v7);
  Function_200e060(v4, 1, 10, 0xEu);
  Function_201ada4_ClearTextBox(v4, 15);
  v8 = *(uint *)(v3 + 108);
  Function_201d738_CallInitTextInterpreter(v4, 1);
  return Function_201a9a4(v4);
}

//----- (021D2714) --------------------------------------------------------
int __fastcall Function_21d2714(int a1, uint a2, uint a3)
{
  uint v3;
  int v4;
  ushort *v5;
  int v6;
  int v7;

  v3 = a2;
  v4 = a1 + 3228;
  Function_200b70c(*(uint *)(a1 + 3236), 0, a3);
  v5 = (ushort *)Function_2023790(256, 0x5Fu);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v4 + 4), v3, v5);
  Function_200c388(*(uint **)(v4 + 8), *(uint *)(v4 + 108), (int)v5);
  Function_20237bc_FreeMsg((int)v5, v6);
  Function_200e060(v4 + 12, 1, 10, 0xEu);
  Function_201ada4_ClearTextBox(v4 + 12, 15);
  v7 = *(uint *)(v4 + 108);
  Function_201d738_CallInitTextInterpreter(v4 + 12, 1);
  return Function_201a9a4(v4 + 12);
}

//----- (021D2788) --------------------------------------------------------
int __fastcall Function_21d2788(int a1)
{
  int v1;

  v1 = a1;
  Function_200e084(a1 + 3240, 1);
  Function_201ada4_ClearTextBox(v1 + 3240, 0);
  return Function_201a9a4(v1 + 3240);
}

//----- (021D27AC) --------------------------------------------------------
int __fastcall Function_21d27ac(int a1, int a2)
{
  int v2;
  int v3;
  uchar *v4;
  int result;
  int v6;
  int v7;

  v7 = a2;
  v2 = a1;
  v3 = 0;
  v4 = (uchar *)dword_21D5A68[a2];
  result = a2;
  *(uint *)(v2 + 3228) = a2;
  if ( a2 > 0 )
  {
    v6 = v2 + 3256;
    do
    {
      Function_201a8d4(*(uint **)(v2 + 3460), v6, v4);
      result = v7;
      ++v3;
      v4 += 8;
      v6 += 16;
    }
    while ( v3 < v7 );
  }
  return result;
}

//----- (021D27F0) --------------------------------------------------------
int __fastcall Function_21d27f0(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;

  v1 = a1;
  result = *(uint *)(a1 + 3228);
  v3 = 0;
  if ( result > 0 )
  {
    v4 = v1 + 3256;
    do
    {
      Function_201acf4(v4);
      Function_201a8fc(v4);
      result = *(uint *)(v1 + 3228);
      ++v3;
      v4 += 16;
    }
    while ( v3 < result );
  }
  return result;
}

//----- (021D2820) --------------------------------------------------------
int __fastcall Function_21d2820(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a2;
  v4 = 16 * a3;
  v5 = a1 + 3256;
  Function_200dc48(a1 + 3256 + 16 * a3, 1, 1, 0xEu);
  Function_201ada4_ClearTextBox(v5 + v4, 15);
  Function_2002eec(0, v3, 0, 0x40u);
  Function_201d78c(v5 + v4, 0);
  return Function_201a9a4(v5 + v4);
}

//----- (021D2874) --------------------------------------------------------
int __fastcall Function_21d2874(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_203608c();
  return Function_21d2820(v3, v4, v5);
}

//----- (021D28A0) --------------------------------------------------------
int __fastcall Function_21d28a0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = 16 * a2;
  v3 = a1 + 3256;
  Function_200e084(a1 + 3256 + 16 * a2, 1);
  Function_201ada4_ClearTextBox(v3 + v2, 0);
  return Function_201a9a4(v3 + v2);
}

//----- (021D28C4) --------------------------------------------------------
int __fastcall Function_21d28c4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v7;
  int v8;
  int v9;
  int v10;

  v10 = a4;
  v4 = a1;
  v5 = a1 + 3340;
  *(uint *)(v5 + 28) = Function_20203ac(0x5Fu);
  *(uint *)(v5 + 8) = 0;
  *(uint *)(v5 + 12) = 0;
  *(uint *)(v5 + 16) = 0;
  *(ushort *)(v5 + 20) = -5825;
  *(ushort *)(v5 + 22) = 0;
  *(ushort *)(v5 + 24) = 0;
  *(uint *)(v4 + 3340) = 1323008;
  *(uint *)(v5 + 4) = 1092;
  Function_20206d0(
    (uint *)(v5 + 8),
    *(uint *)(v4 + 3340),
    (ushort *)(v5 + 20),
    *(uint *)(v5 + 4) & 0xFFFF,
    0,
    1,
    *(uint *)(v5 + 28));
  v8 = 4096;
  v7 = 0;
  v9 = 0;
  Function_2020680(&v7, *(uint **)(v5 + 28));
  return Function_20203d4(*(uint *)(v5 + 28));
}

//----- (021D293C) --------------------------------------------------------
uint __fastcall Function_21d293c(int a1)
{
  return Call_free5(*(uint *)(a1 + 3368));
}

//----- (021D294C) --------------------------------------------------------
int __fastcall Function_21d294c(int a1)
{
  int v1;
  uint *v2;
  int v3;
  ushort *v4;
  int result;

  v1 = 0;
  v2 = (uint *)(a1 + 3372);
  v3 = 3;
  Function_201e564((ushort *)(a1 + 3388), 2u, 0);
  v4 = (ushort *)(v2 + 6);
  do
  {
    if ( v4[11] == 1 )
    {
      v1 = 1;
      *v2 = v4[9];
      v2[1] = v4[10];
    }
    v4 -= 4;
    --v3;
  }
  while ( v3 >= 0 );
  result = (v2[3] ^ v1) & v1;
  v2[2] = result;
  v2[3] = v1;
  return result;
}

//----- (021D2990) --------------------------------------------------------
BOOL __fastcall Function_21d2990(int *a1)
{
  int v1;
  int v2;

  v1 = *a1;
  v2 = a1[1];
  return v2 >= 32 && v2 <= 159 && v1 >= 64 && v1 <= 191;
}

//----- (021D29AC) --------------------------------------------------------
BOOL __fastcall Function_21d29ac(int a1)
{
  int *v1;

  v1 = (int *)(a1 + 3372);
  return v1[2] && Function_21d2990(v1) == 1;
}

//----- (021D29CC) --------------------------------------------------------
int __fastcall Function_21d29cc(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  uint *v6;
  int result;

  v1 = a1;
  v2 = *(uint *)(*(uint *)(a1 + 204) + 8);
  v3 = a1 + 212;
  Function_207389c((uchar *)(a1 + 296), 0, *(uint *)(a1 + 3456), dword_21D5A80[v2], 95, 0);
  Function_20738ec(v3 + 84);
  Function_2073b70((int *)(v3 + 104), v3 + 84);
  v4 = dword_21D5A98[v2];
  *(uint *)(v3 + 60) = 0;
  *(uint *)(v3 + 68) = v4;
  *(uint *)(v3 + 24) = 4096;
  *(uint *)(v3 + 28) = 4096;
  *(uint *)(v3 + 32) = 4096;
  *(ushort *)(v3 + 76) = 0;
  *(ushort *)(v3 + 78) = 0;
  *(ushort *)(v3 + 80) = 0;
  *(uint *)(v1 + 212) = 0;
  *(uint *)(v3 + 4) = -147456;
  *(uint *)(v3 + 8) = 0;
  v5 = *(uint *)(v3 + 4);
  v6 = (uint *)(v3 + 12);
  *v6 = *(uint *)v3;
  v6[1] = v5;
  result = *(uint *)(v3 + 8);
  *(uint *)(v3 + 20) = result;
  return result;
}

//----- (021D2A58) --------------------------------------------------------
uchar *__fastcall Function_21d2a58(int a1)
{
  return Function_207395c(a1 + 296);
}

//----- (021D2A68) --------------------------------------------------------
int __fastcall Function_21d2a68(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  short v6;
  int result;
  int v8;

  v8 = a4;
  v4 = a1;
  v5 = a1 + 212;
  v8 = *(uint *)(a1 + 272);
  Function_21d39d4(&v8, *(uint *)(a1 + 276));
  Function_21d39d4(&v8, *(uint *)(v5 + 68));
  s32_div_f(360 - v8 / 4096, 360);
  *(ushort *)(v5 + 78) = v6;
  *(uint *)(v5 + 12) = *(uint *)(v5 + 36) + *(uint *)(v4 + 212) + *(uint *)(v5 + 48);
  *(uint *)(v5 + 16) = *(uint *)(v5 + 40) + *(uint *)(v5 + 4) + *(uint *)(v5 + 52);
  result = *(uint *)(v5 + 44) + *(uint *)(v5 + 8) + *(uint *)(v5 + 56);
  *(uint *)(v5 + 20) = result;
  return result;
}

//----- (021D2AC8) --------------------------------------------------------
int *__fastcall Function_21d2ac8(int a1)
{
  return Function_2073bc8((uint *)(a1 + 316), (int *)(a1 + 224), (int *)(a1 + 236), (ushort *)(a1 + 288));
}

//----- (021D2AE4) --------------------------------------------------------
int __fastcall Function_21d2ae4(int a1, int a2)
{
  return Function_21d39d4(a1 + 60, a2);
}

//----- (021D2AF0) --------------------------------------------------------
int Function_21d2af0()
{
  return Function_21d2b00();
}

//----- (021D2AF8) --------------------------------------------------------
int Function_21d2af8()
{
  return Function_21d2bd4();
}

//----- (021D2B00) --------------------------------------------------------
int __fastcall Function_21d2b00(int a1)
{
  int v1;
  uchar *v2;
  int *v3;
  int v4;
  int result;
  uint *v6;
  uint *v7;
  int v8;

  v1 = a1;
  Function_207389c((uchar *)(a1 + 400), 0, *(uint *)(a1 + 3456), 0, 95, 0);
  Function_20738ec(v1 + 400);
  Function_207389c((uchar *)(v1 + 420), 0, *(uint *)(v1 + 3456), 5u, 95, 0);
  Function_20738ec(v1 + 420);
  v2 = (uchar *)(v1 + 440);
  v7 = (uint *)&dword_21D5A00[5];
  v6 = (uint *)dword_21D5A3C;
  v8 = 0;
  v3 = (int *)(v1 + 540);
  v4 = v1 + 440;
  do
  {
    Function_207389c(v2, 0, *(uint *)(v1 + 3456), *v7, 95, 0);
    Function_20738ec((int)v2);
    Function_20739b4(v3, 0, *(uint *)(v1 + 3456), *v6, 95, 0);
    Function_2073a3c((int)v3, v4, 0x5Fu);
    Function_2073a5c((int)v3, v4);
    v2 += 20;
    ++v8;
    v3 += 9;
    ++v7;
    v4 += 20;
    ++v6;
    result = v8;
  }
  while ( v8 < 5 );
  return result;
}

//----- (021D2BD4) --------------------------------------------------------
int __fastcall Function_21d2bd4(int a1)
{
  int v1;
  int v2;
  int v3;
  uint *v4;
  int result;

  v1 = a1;
  Function_207395c(a1 + 400);
  Function_207395c(v1 + 420);
  v1 += 400;
  v2 = 0;
  v3 = v1 + 40;
  v4 = (uint *)(v1 + 140);
  do
  {
    Function_207395c(v3);
    result = Function_20739f0(v4);
    ++v2;
    v3 += 20;
    v4 += 9;
  }
  while ( v2 < 5 );
  return result;
}

//----- (021D2C0C) --------------------------------------------------------
int __fastcall Function_21d2c0c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  Function_2073b70((int *)(a2 + 92), a1 + 400);
  *(uint *)(v2 + 4) = 1;
  Function_21d2ec0(v3, v2);
  return Function_21d2f68(v3, v2);
}

//----- (021D2C38) --------------------------------------------------------
int __fastcall Function_21d2c38(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v1 = a1;
  v10 = 0;
  result = *(uint *)(a1 + 48);
  v3 = v1 + 400;
  v9 = result;
  if ( result > 0 )
  {
    v8 = v1 + 720;
    v6 = v1 + 1600;
    v7 = v1 + 400;
    v4 = v1 + 400;
    v5 = v1 + 2220;
    do
    {
      if ( *(uint *)(v3 + 320) )
        Function_21d2d78(v8, v1 + 260);
      if ( *(uint *)(v7 + 1200) )
        Function_21d2ef4(v1, v6);
      if ( *(uint *)(v4 + 1820) )
        Function_21d2fa4(v1, v5);
      v3 += 176;
      v8 += 176;
      v4 += 104;
      v7 += 124;
      v5 += 104;
      v6 += 124;
      result = v9;
      ++v10;
    }
    while ( v10 < v9 );
  }
  return result;
}

//----- (021D2CCC) --------------------------------------------------------
int __fastcall Function_21d2ccc(int a1)
{
  int v1;
  int v2;
  int v3;
  uint *v4;
  int result;
  int v6;
  int v7;

  v1 = 0;
  v7 = *(uint *)(a1 + 48);
  v2 = a1 + 400;
  v3 = a1 + 1600;
  v4 = (uint *)(a1 + 2220);
  result = v7;
  v6 = v2 + 320;
  if ( v7 > 0 )
  {
    do
    {
      if ( *(uint *)(v6 + 4) )
        Function_2073bc8((uint *)(v6 + 92), (int *)(v6 + 68), (int *)(v6 + 56), (ushort *)(v6 + 36));
      if ( *(uint *)v3 )
        Function_2073bc8((uint *)(v3 + 36), (int *)(v3 + 24), (int *)(v3 + 12), (ushort *)(v3 + 4));
      if ( *v4 )
        Function_2073bb4(v4 + 4, v4 + 1);
      result = v7;
      ++v1;
      v6 += 176;
      v3 += 124;
      v4 += 26;
    }
    while ( v1 < v7 );
  }
  return result;
}

//----- (021D2D44) --------------------------------------------------------
int __fastcall Function_21d2d44(int result, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v6 = a2;
  v2 = *(uint *)(result + 48);
  v3 = 0;
  v4 = result + 400;
  if ( v2 > 0 )
  {
    v5 = result + 748;
    do
    {
      result = *(uint *)(v4 + 320);
      if ( result )
        result = Function_21d39d4(v5, v6);
      ++v3;
      v4 += 176;
      v5 += 176;
    }
    while ( v3 < v2 );
  }
  return result;
}

//----- (021D2D78) --------------------------------------------------------
int __fastcall Function_21d2d78(int a1, uint *a2, int a3, int a4)
{
  int v4;
  uint *v5;
  uint v6;
  int result;
  int v8;
  int v9;

  v9 = a4;
  v4 = a1;
  v5 = a2;
  v8 = *(uint *)(a1 + 28);
  Function_21d39d4(&v8, *(uint *)(a1 + 32));
  v6 = 16 * (v8 + ((uint)(v8 >> 11) >> 20)) >> 16;
  *(uint *)(v4 + 68) = *(uint *)(v4 + 80) + *v5 + 22 * Function_201d1d4(v6);
  *(uint *)(v4 + 72) = *(uint *)(v4 + 84) - 24576 + v5[1];
  *(uint *)(v4 + 76) = *(uint *)(v4 + 88) + v5[2] + 22 * Function_201d15c(v6);
  *(ushort *)(v4 + 36) = *(uint *)(v4 + 44) / 4096;
  *(ushort *)(v4 + 38) = *(uint *)(v4 + 48) / 4096;
  result = *(uint *)(v4 + 52) / 4096;
  *(ushort *)(v4 + 40) = result;
  return result;
}

//----- (021D2DF8) --------------------------------------------------------
int __fastcall Function_21d2df8(int a1)
{
  int v1;
  int v2;
  int v3;
  int *v4;
  int v5;
  char *v6;
  int v7;
  int v8;
  char *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int *v16;
  int *v18;
  int v19;
  char v20;
  uint v21[1];

  v1 = *(uint *)(a1 + 48);
  v2 = a1 + 400;
  v3 = 0;
  v4 = &v19;
  v5 = *((ushort *)dword_21D5C80 + 5 * v1 + *(uint *)(a1 + 44)) << 12;
  v6 = (char *)v21;
  do
  {
    *v4 = v3;
    ++v4;
    ++v3;
    *(uint *)v6 = 0xFFFF;
    v6 += 4;
  }
  while ( v3 < v1 );
  v7 = 0;
  if ( v1 > 0 )
  {
    v8 = a1 + 400;
    v9 = (char *)v21;
    do
    {
      v10 = *(uint *)(v8 + 348);
      v11 = v5 - v10;
      if ( v5 - v10 < 0 )
        v11 = v5 + 1474560 - v10;
      ++v7;
      *(uint *)v9 = v11 / 4096;
      v9 += 4;
      v8 += 176;
    }
    while ( v7 < v1 );
  }
  v12 = 1;
  if ( v1 > 1 )
  {
    v18 = (int *)&v20;
    do
    {
      v13 = *v18;
      v14 = v21[*v18];
      v15 = v12 - 1;
      v16 = &v19 + v12 - 1;
      while ( v15 >= 0 && v21[*v16] > v14 )
      {
        v16[1] = *v16;
        --v16;
        --v15;
      }
      *(&v19 + v15 + 1) = v13;
      ++v12;
      ++v18;
    }
    while ( v12 < v1 );
  }
  return v2 + 320 + 176 * v19;
}

//----- (021D2EC0) --------------------------------------------------------
int __fastcall Function_21d2ec0(int a1, int a2)
{
  int v2;
  uint *v3;

  v2 = a1;
  v3 = (uint *)(a1 + 1600 + 124 * *(uint *)(a2 + 16));
  *v3 = 1;
  v3[30] = a2;
  Function_2073b70(v3 + 9, a1 + 420);
  return Function_21d2ef4(v2, v3);
}

//----- (021D2EF4) --------------------------------------------------------
int __fastcall Function_21d2ef4(int a1, int a2)
{
  uint *v2;
  uint *v3;
  uint *v4;
  int v5;
  int v6;
  int v7;
  int result;

  v2 = (uint *)a2;
  *(ushort *)(a2 + 4) = 0;
  *(ushort *)(a2 + 6) = 0;
  *(ushort *)(a2 + 8) = 0;
  v3 = (uint *)(*(uint *)(a2 + 120) + 68);
  v4 = (uint *)(a2 + 24);
  v5 = *(uint *)(*(uint *)(a2 + 120) + 72);
  *v4 = *v3;
  v4[1] = v5;
  v4[2] = v3[2];
  *v4 -= *(uint *)(v2[30] + 80);
  v2[7] -= *(uint *)(v2[30] + 84);
  v2[8] -= *(uint *)(v2[30] + 88);
  v2[7] += 0x2000;
  v6 = *(uint *)(v2[30] + 84);
  if ( v6 < 0 )
    v6 = -v6;
  v7 = v6 / 128;
  if ( v7 > 2048 )
    v7 = 2048;
  result = 4096 - v7;
  v2[3] = 4096 - v7;
  v2[4] = 4096 - v7;
  v2[5] = 4096 - v7;
  return result;
}

//----- (021D2F68) --------------------------------------------------------
uint __fastcall Function_21d2f68(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a1 + 400;
  v3 = 104 * *(uint *)(a2 + 16);
  *(uint *)(a1 + 2220 + v3) = 1;
  v4 = a1 + 400;
  v5 = a1 + 2220 + v3;
  *(uint *)(v5 + 100) = a2;
  return Function_2073b90((int *)(v5 + 16), v4 + 40 + 20 * *(uint *)(a2 + 16), v2 + 140 + 36 * *(uint *)(a2 + 16));
}

//----- (021D2FA4) --------------------------------------------------------
int __fastcall Function_21d2fa4(int a1, uint *a2)
{
  uint *v2;
  uint *v3;
  int v4;
  uint *v5;

  v2 = a2;
  v3 = (uint *)(a2[25] + 68);
  v4 = *(uint *)(a2[25] + 72);
  v5 = v2 + 1;
  *v5 = *v3;
  v5[1] = v4;
  v2[3] = v3[2];
  v2[2] += 81920;
  return Function_2073ac0((int *)(a1 + 540 + 36 * *(uint *)(v2[25] + 16)), 4096, 1);
}

//----- (021D2FE0) --------------------------------------------------------
uint *__fastcall Function_21d2fe0(int a1, int a2, int a3, int a4, int a5, int a6, uint *a7)
{
  int v7;
  int v8;
  uchar *v9;
  int v10;

  v7 = a1;
  a7[3] = a2;
  a7[4] = a3;
  a7[5] = a4;
  a7[6] = a3;
  a7[7] = a5 << 12;
  a7[8] = a6 << 12;
  *a7 = 1;
  a7[2] = 0;
  v8 = malloc2(0x5Fu, 24);
  v9 = (uchar *)v8;
  v10 = 24;
  do
  {
    *v9++ = 0;
    --v10;
  }
  while ( v10 );
  *(uint *)(v8 + 20) = v7;
  *(uint *)(v8 + 16) = a7;
  return AddTaskToTaskList1((int)Function_21d302c, v8, 0);
}

//----- (021D302C) --------------------------------------------------------
int __fastcall Function_21d302c(int *a1, uint *a2)
{
  int *v2;
  uint *v3;
  int result;

  v2 = a1;
  v3 = a2;
  do
    result = ((int (__fastcall *)(uint *))*(&off_21D59D8 + *v3))(v3);
  while ( result == 1 );
  if ( result == 2 )
  {
    *(uint *)(v3[4] + 8) = 1;
    free((int)v3);
    result = Call_RemoveTaskFromTaskList(v2);
  }
  return result;
}

//----- (021D3060) --------------------------------------------------------
int __fastcall Function_21d3060(uint *a1)
{
  uint *v1;
  uint *v2;

  v1 = a1;
  v2 = (uint *)a1[4];
  v2[14] = 4096;
  v2[15] = 4096;
  v2[16] = 4096;
  v2[21] = 786432;
  Function_21d2c0c(a1[5], (int)v2);
  v1[3] = 0x8000;
  *v1 = 1;
  return 0;
}

//----- (021D308C) --------------------------------------------------------
int __fastcall Function_21d308c(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  v2 = a1[4];
  *(uint *)(v2 + 84) -= a1[3];
  if ( !a1[2] && *(uint *)(v2 + 84) <= 425984 )
  {
    a1[2] = 1;
    Function_2005748(0x650u);
  }
  if ( *(uint *)(v2 + 84) <= 0x20000 )
  {
    *(uint *)(v2 + 84) = 0x20000;
    *v1 = 2;
  }
  return 0;
}

//----- (021D30CC) --------------------------------------------------------
int __fastcall Function_21d30cc(uint *a1)
{
  int v1;
  uint *v2;
  int v3;
  int v4;

  v1 = a1[3];
  v2 = (uint *)a1[4];
  if ( v1 > 4096 )
  {
    v3 = v1 - 4096;
    a1[3] = v3;
    if ( v3 < 4096 )
      a1[3] = 4096;
  }
  v4 = v2[21] - a1[3];
  v2[21] = v4;
  if ( v4 > 0 )
    return 0;
  v2[21] = 0;
  Function_21d2874(a1[5], *(uint *)(a1[5] + 4 * v2[3] + 152), v2[5]);
  return 2;
}

//----- (021D3110) --------------------------------------------------------
int *__fastcall Function_21d3110(int *result, int *a2)
{
  int *v2;
  int v3;
  int *v4;
  int v5;

  v2 = a2;
  v3 = a2[1];
  v4 = result;
  v5 = v2[7];
  if ( v3 )
  {
    if ( v3 != 1 )
      return result;
  }
  else
  {
    Function_21d3328();
    v2[4] = 0x4000;
    v2[5] = -1092;
    ++v2[1];
  }
  *(uint *)(v5 + 84) += v2[4];
  v2[4] += v2[5];
  result = (int *)(v2[2] + 1);
  v2[2] = (int)result;
  if ( (int)result >= 15 )
  {
    v2[2] = 0;
    v2[4] = 0;
    if ( v2[3] )
    {
      *(uint *)(v5 + 84) = 0;
      Function_21d3460(v4, v5);
      result = Call_FillMemWithValue(v2, 0, 0x20u);
    }
    else
    {
      result = (int *)1;
      v2[3] = 1;
    }
  }
  return result;
}

//----- (021D3180) --------------------------------------------------------
int *__fastcall Function_21d3180(int a1, int *a2)
{
  int *v2;
  int *v3;
  int v4;
  int *result;

  v2 = a2;
  v3 = a2 + 685;
  v4 = 0;
  do
  {
    result = (int *)*v3;
    if ( *v3 )
      result = Function_21d3110(v2, v3);
    ++v4;
    v3 += 8;
  }
  while ( v4 < 5 );
  return result;
}

//----- (021D31A8) --------------------------------------------------------
uint __fastcall Function_21d31a8(int a1)
{
  int v1;
  uint result;

  v1 = a1;
  Call_FillMemWithValue((int *)(a1 + 2740), 0, 0xA0u);
  *(uint *)(v1 + 3504) = AddTaskToTaskList1((int)Function_21d3180, v1, 0x100u);
  result = *(uint *)(v1 + 3504);
  if ( !result )
    result = ErrorHandler();
  return result;
}

//----- (021D31E0) --------------------------------------------------------
int __fastcall Function_21d31e0(int a1)
{
  return Call_RemoveTaskFromTaskList(*(int **)(a1 + 3504));
}

//----- (021D31F0) --------------------------------------------------------
uint __fastcall Function_21d31f0(int a1, int a2)
{
  uint *v2;
  int v3;
  uint result;

  v2 = (uint *)(a1 + 2740);
  v3 = 0;
  do
  {
    if ( !*v2 )
    {
      result = 1;
      *v2 = 1;
      v2[7] = a2;
      return result;
    }
    ++v3;
    v2 += 8;
  }
  while ( v3 < 5 );
  return ErrorHandler();
}

//----- (021D3218) --------------------------------------------------------
uint __fastcall Function_21d3218(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  uint result;
  int v6;

  v1 = a1 + 400;
  v2 = *(uint *)(a1 + 48);
  v6 = a1;
  v3 = 0;
  v4 = a1 + 720;
  do
  {
    result = *(uint *)(v1 + 320);
    if ( result )
      result = Function_21d31f0(v6, v4);
    ++v3;
    v1 += 176;
    v4 += 176;
  }
  while ( v3 < v2 );
  return result;
}

//----- (021D3248) --------------------------------------------------------
int __fastcall Function_21d3248(int a1)
{
  uint *v1;
  int v2;

  v1 = (uint *)(a1 + 2740);
  v2 = 0;
  do
  {
    if ( *v1 )
      return 1;
    ++v2;
    v1 += 8;
  }
  while ( v2 < 5 );
  return 0;
}

//----- (021D3268) --------------------------------------------------------
int __fastcall Function_21d3268(uint *a1)
{
  uint *v1;
  int result;
  int v3;
  int v4;

  v1 = a1;
  result = a1[1];
  v3 = v1[4];
  if ( result )
  {
    if ( result != 1 )
      return result;
  }
  else
  {
    v1[3] = 98304;
    *(uint *)(v3 + 48) = 0;
    ++v1[1];
  }
  Function_21d39d4(v3 + 48, v1[3]);
  result = 0x4000;
  if ( *(uint *)(v3 + 48) < 0x4000 )
  {
    v4 = v1[3] >> 1;
    v1[3] = v4;
    if ( v4 < 0x4000 )
    {
      *(uint *)(v3 + 48) = 0;
      result = 20;
      do
      {
        *(uchar *)v1 = 0;
        v1 = (uint *)((char *)v1 + 1);
        --result;
      }
      while ( result );
    }
  }
  return result;
}

//----- (021D32B8) --------------------------------------------------------
int __fastcall Function_21d32b8(int a1, int a2)
{
  int v2;
  int *v3;
  int result;

  v2 = 0;
  v3 = (int *)(a2 + 2900);
  do
  {
    result = *v3;
    if ( *v3 )
      result = Function_21d3268(v3);
    ++v2;
    v3 += 5;
  }
  while ( v2 < 5 );
  return result;
}

//----- (021D32DC) --------------------------------------------------------
uint __fastcall Function_21d32dc(int a1)
{
  int v1;
  uint result;

  v1 = a1;
  Call_FillMemWithValue((int *)(a1 + 2900), 0, 0x64u);
  *(uint *)(v1 + 3508) = AddTaskToTaskList1((int)Function_21d32b8, v1, 0x101u);
  result = *(uint *)(v1 + 3508);
  if ( !result )
    result = ErrorHandler();
  return result;
}

//----- (021D3318) --------------------------------------------------------
int __fastcall Function_21d3318(int a1)
{
  return Call_RemoveTaskFromTaskList(*(int **)(a1 + 3508));
}

//----- (021D3328) --------------------------------------------------------
uint *__fastcall Function_21d3328(int a1, int a2)
{
  int v2;
  uint *result;
  uint *v4;
  int v5;

  v2 = 0;
  result = (uint *)(a1 + 2900);
  v4 = result;
  do
  {
    if ( *v4 == 1 && v4[4] == a2 )
    {
      result = 0;
      v4[1] = 0;
      return result;
    }
    ++v2;
    v4 += 5;
  }
  while ( v2 < 5 );
  v5 = 0;
  do
  {
    if ( !*result )
    {
      *result = 1;
      result[4] = a2;
      return result;
    }
    ++v5;
    result += 5;
  }
  while ( v5 < 5 );
  return (uint *)ErrorHandler();
}

//----- (021D3370) --------------------------------------------------------
int __fastcall Function_21d3370(uint *a1)
{
  uint *v1;
  int result;
  int v3;
  uint v4;
  int v5;
  int v6;

  v1 = a1;
  result = a1[1];
  v3 = v1[5];
  if ( result )
  {
    if ( result != 1 )
      return result;
  }
  else
  {
    *(uint *)(v3 + 52) = 0;
    v1[4] = 0;
    v1[2] = 122880;
    v1[3] = 81920;
    ++v1[1];
  }
  v4 = Function_201d15c((uint)(16 * (v1[4] + (v1[4] >> 11 >> 20))) >> 16);
  v5 = v1[2];
  *(uint *)(v3 + 52) = 0;
  Function_21d39d4(v3 + 52, v5 / 4096 * v4);
  v6 = v1[4];
  Function_21d39d4(v1 + 4, v1[3]);
  result = v1[4];
  if ( result < v6 )
  {
    result = v1[2] >> 1;
    v1[2] = result;
    if ( !result )
    {
      *(uint *)(v3 + 52) = 0;
      result = 24;
      do
      {
        *(uchar *)v1 = 0;
        v1 = (uint *)((char *)v1 + 1);
        --result;
      }
      while ( result );
    }
  }
  return result;
}

//----- (021D33F0) --------------------------------------------------------
int __fastcall Function_21d33f0(int a1, int a2)
{
  int v2;
  int *v3;
  int result;

  v2 = 0;
  v3 = (int *)(a2 + 3000);
  do
  {
    result = *v3;
    if ( *v3 )
      result = Function_21d3370(v3);
    ++v2;
    v3 += 6;
  }
  while ( v2 < 5 );
  return result;
}

//----- (021D3414) --------------------------------------------------------
uint __fastcall Function_21d3414(int a1)
{
  int v1;
  uint result;

  v1 = a1;
  Call_FillMemWithValue((int *)(a1 + 3000), 0, 0x78u);
  *(uint *)(v1 + 3512) = AddTaskToTaskList1((int)Function_21d33f0, v1, 0x102u);
  result = *(uint *)(v1 + 3512);
  if ( !result )
    result = ErrorHandler();
  return result;
}

//----- (021D3450) --------------------------------------------------------
int __fastcall Function_21d3450(int a1)
{
  return Call_RemoveTaskFromTaskList(*(int **)(a1 + 3512));
}

//----- (021D3460) --------------------------------------------------------
uint *__fastcall Function_21d3460(int a1, int a2)
{
  int v2;
  uint *result;
  uint *v4;
  int v5;

  v2 = 0;
  result = (uint *)(a1 + 3000);
  v4 = result;
  do
  {
    if ( *v4 == 1 && v4[5] == a2 )
    {
      result = 0;
      v4[1] = 0;
      return result;
    }
    ++v2;
    v4 += 6;
  }
  while ( v2 < 5 );
  v5 = 0;
  do
  {
    if ( !*result )
    {
      *result = 1;
      result[5] = a2;
      return result;
    }
    ++v5;
    result += 6;
  }
  while ( v5 < 5 );
  return (uint *)ErrorHandler();
}

//----- (021D34A8) --------------------------------------------------------
int __fastcall Function_21d34a8(int result, int *a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v2 = a2;
  v3 = *a2;
  v4 = result + 212;
  switch ( (uchar)v3 )
  {
    case 1:
      v2[4] = 0x4000;
      v2[3] = 0;
      ++*v2;
      goto LABEL_3;
    case 2:
LABEL_3:
      v5 = *(uint *)(result + 264) - 4096;
      result = -32768;
      *(uint *)(v4 + 52) = v5;
      if ( v5 <= -32768 )
      {
        result = *v2 + 1;
        *v2 = result;
      }
      break;
    case 3:
      v6 = *(uint *)(result + 264);
      *(uint *)(result + 264) = v6 + 0x2000;
      if ( v6 + 0x2000 >= 0 )
      {
        *(uint *)(result + 264) = 0;
        Function_21d3218(result);
        v2[1] = 1;
        ++*v2;
        result = Function_2005748(0x657u);
      }
      break;
    case 4:
      *(uint *)(result + 252) = v2[4];
      v2[4] = -v2[4];
      v7 = v2[3] + 1;
      result = 3;
      v2[3] = v7;
      if ( !(v7 & 3) )
      {
        v8 = v2[4];
        if ( v8 > 4096 )
        {
          result = v8 >> 1;
          v2[4] = v8 >> 1;
        }
        else
        {
          *(uint *)(v4 + 40) = 0;
          result = *v2 + 1;
          *v2 = result;
        }
      }
      break;
    case 5:
      result = Function_21d3248(result);
      if ( !result )
      {
        v2[2] = 0;
        v2[1] = 0;
        *v2 = 0;
        result = Function_2005748(0x631u);
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (021D3574) --------------------------------------------------------
int __fastcall Function_21d3574(int a1, int a2)
{
  return Function_21d34a8(a2, (int *)(a2 + 3120));
}

//----- (021D3584) --------------------------------------------------------
uint __fastcall Function_21d3584(int a1)
{
  int v1;
  uchar *v2;
  int v3;
  uint result;

  v1 = a1;
  v2 = (uchar *)(a1 + 3120);
  v3 = 20;
  do
  {
    *v2++ = 0;
    --v3;
  }
  while ( v3 );
  *(uint *)(a1 + 3516) = AddTaskToTaskList1((int)Function_21d3574, a1, 0xFFu);
  result = *(uint *)(v1 + 3516);
  if ( !result )
    result = ErrorHandler();
  return result;
}

//----- (021D35BC) --------------------------------------------------------
int __fastcall Function_21d35bc(int a1)
{
  return Call_RemoveTaskFromTaskList(*(int **)(a1 + 3516));
}

//----- (021D35CC) --------------------------------------------------------
int __fastcall Function_21d35cc(int a1)
{
  uint *v1;
  int result;

  v1 = (uint *)(a1 + 3120);
  if ( *(uint *)(a1 + 3124) )
    ErrorHandler();
  result = 1;
  v1[2] = 1;
  *v1 = 1;
  return result;
}

//----- (021D35E8) --------------------------------------------------------
int __fastcall Function_21d35e8(int a1)
{
  return *(uint *)(a1 + 3124);
}

//----- (021D35F4) --------------------------------------------------------
int __fastcall Function_21d35f4(int a1)
{
  return *(uint *)(a1 + 3128);
}

//----- (021D3600) --------------------------------------------------------
int __fastcall Function_21d3600(int *a1, int *a2, int a3, int a4)
{
  int v4;
  int *v5;
  int result;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = (int)a2;
  v5 = a1;
  result = *a2;
  if ( *a2 )
  {
    if ( result == 1 )
    {
      Function_200d0f4(a2[5]);
      free(v4);
      result = Call_RemoveTaskFromTaskList(v5);
    }
  }
  else
  {
    if ( a2[3] < 4 )
    {
      v8 = 1501;
      v9 = 1501;
      v10 = 1501;
      v11 = 1603;
      v7 = a2[1] - 1;
      a2[1] = v7;
      if ( v7 <= 0 )
      {
        a2[1] = 30;
        Function_2005748(*(&v8 + a2[3]) & 0xFFFF);
        ++*(uint *)(v4 + 12);
      }
    }
    Function_200d34c(*(int **)(v4 + 20), 6144);
    result = Function_200d3b8(*(int **)(v4 + 20));
    if ( !result )
    {
      result = *(uint *)v4 + 1;
      *(uint *)v4 = result;
    }
  }
  return result;
}

//----- (021D3684) --------------------------------------------------------
uint *__fastcall Function_21d3684(int a1)
{
  int v1;
  int v2;
  uchar *v3;
  int v4;
  int *v5;
  uint *v6;
  short v8;
  short v9;
  short v10;
  short v11;
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
  v2 = malloc2(0x5Fu, 24);
  v3 = (uchar *)v2;
  v4 = 24;
  do
  {
    *v3++ = 0;
    --v4;
  }
  while ( v4 );
  v8 = 128;
  v9 = 100;
  v10 = 0;
  v11 = 0;
  v14 = 1;
  v15 = 4;
  v16 = 5;
  v17 = 6;
  v18 = 7;
  v12 = 0;
  v13 = 0;
  v21 = 0;
  v22 = 0;
  v19 = -1;
  v20 = -1;
  v5 = Function_21d24e0(v1, &v8);
  *(uint *)(v2 + 20) = v5;
  Function_200d330(v5);
  *(uint *)(v2 + 16) = v1;
  v6 = AddTaskToTaskList1((int)Function_21d3600, v2, 0);
  if ( !v6 )
    ErrorHandler();
  return v6;
}

//----- (021D3700) --------------------------------------------------------
int __fastcall Function_21d3700(int result, ushort *a2)
{
  ushort *v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = result;
  switch ( (uchar)*a2 )
  {
    case 1u:
      Function_21d228c(result);
      Function_2005748(0x5E4u);
      *((uint *)v2 + 1) = 0;
      ++*v2;
      goto LABEL_3;
    case 2u:
LABEL_3:
      result = *((uint *)v2 + 1) + 1;
      *((uint *)v2 + 1) = result;
      if ( result >= 2 )
      {
        *((uint *)v2 + 1) = 0;
        ++*v2;
        result = Function_21d22a4(v3);
      }
      break;
    case 3u:
      v4 = *((uint *)a2 + 1) + 1;
      *((uint *)v2 + 1) = v4;
      if ( v4 >= 4 )
      {
        Function_21d228c(result);
        *((uint *)v2 + 1) = 0;
        result = *v2 + 1;
        *v2 = result;
      }
      break;
    case 4u:
      v5 = *((uint *)a2 + 1) + 1;
      *((uint *)v2 + 1) = v5;
      if ( v5 >= 2 )
      {
        Function_21d2298(result);
        result = 0;
        v2[1] = 0;
        *v2 = 0;
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (021D3788) --------------------------------------------------------
int __fastcall Function_21d3788(int a1, int a2)
{
  return Function_21d3700(a2, (ushort *)(a2 + 3140));
}

//----- (021D379C) --------------------------------------------------------
uint __fastcall Function_21d379c(int a1)
{
  int v1;
  uchar *v2;
  uint result;

  v1 = a1;
  v2 = (uchar *)(a1 + 3140);
  *v2 = 0;
  v2[1] = 0;
  v2[2] = 0;
  v2[3] = 0;
  v2[4] = 0;
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  *(uint *)(a1 + 3520) = AddTaskToTaskList1((int)Function_21d3788, a1, 0x103u);
  result = *(uint *)(v1 + 3520);
  if ( !result )
    result = ErrorHandler();
  return result;
}

//----- (021D37E0) --------------------------------------------------------
int __fastcall Function_21d37e0(int a1)
{
  return Call_RemoveTaskFromTaskList(*(int **)(a1 + 3520));
}

//----- (021D37F0) --------------------------------------------------------
int __fastcall Function_21d37f0(int a1)
{
  return *(ushort *)(a1 + 3142);
}

//----- (021D37FC) --------------------------------------------------------
int __fastcall Function_21d37fc(int a1)
{
  ushort *v1;
  int result;

  v1 = (ushort *)(a1 + 3140);
  if ( *(ushort *)(a1 + 3142) )
    ErrorHandler();
  result = 1;
  v1[1] = 1;
  *v1 = 1;
  return result;
}

//----- (021D3818) --------------------------------------------------------
int __fastcall Function_21d3818(int a1, int *a2)
{
  int result;

  result = *a2;
  if ( *a2 )
  {
    if ( result == 1 )
    {
      *(uint *)(a2[3] + 84) = dword_21D5F20[a2[1]] << 12;
      result = a2[1] + 1;
      a2[1] = result;
      if ( result >= 16 )
      {
        a2[1] = 0;
        result = *a2 + 1;
        *a2 = result;
      }
    }
    else if ( result == 2 )
    {
      result = a2[2] + 1;
      a2[2] = result;
      if ( result >= 15 )
      {
        a2[2] = 0;
        result = 1;
        *a2 = 1;
      }
    }
  }
  return result;
}

//----- (021D3864) --------------------------------------------------------
int __fastcall Function_21d3864(int a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  int result;

  v2 = a2;
  v3 = (int *)(a2 + 3148);
  v4 = 0;
  do
  {
    result = Function_21d3818(v2, v3);
    ++v4;
    v3 += 4;
  }
  while ( v4 < 5 );
  return result;
}

//----- (021D3884) --------------------------------------------------------
uint __fastcall Function_21d3884(int a1)
{
  int v1;
  uint result;

  v1 = a1;
  Call_FillMemWithValue((int *)(a1 + 3148), 0, 0x50u);
  *(uint *)(v1 + 3524) = AddTaskToTaskList1((int)Function_21d3864, v1, 0x104u);
  result = *(uint *)(v1 + 3524);
  if ( !result )
    result = ErrorHandler();
  return result;
}

//----- (021D38BC) --------------------------------------------------------
int __fastcall Function_21d38bc(int a1)
{
  return Call_RemoveTaskFromTaskList(*(int **)(a1 + 3524));
}

//----- (021D38CC) --------------------------------------------------------
int __fastcall Function_21d38cc(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;
  int result;

  v2 = a2;
  v3 = *(uint *)(a2 + 12);
  v4 = (uint *)(a1 + 3148 + 16 * v3);
  if ( v3 >= 5 )
    ErrorHandler();
  if ( *v4 )
    ErrorHandler();
  result = 1;
  *v4 = 1;
  v4[3] = v2;
  return result;
}

//----- (021D38F8) --------------------------------------------------------
int __fastcall Function_21d38f8(int result)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v5 = result;
  v6 = *(uint *)(result + 32);
  v1 = *(uint *)(result + 48);
  v2 = 0;
  v3 = result + 400;
  if ( v1 > 0 )
  {
    v4 = result + 720;
    do
    {
      result = *(uint *)(v3 + 320);
      if ( result )
      {
        result = v6;
        if ( v6 & (1 << *(uint *)(v3 + 332)) )
          result = Function_21d38cc(v5, v4);
      }
      ++v2;
      v3 += 176;
      v4 += 176;
    }
    while ( v2 < v1 );
  }
  return result;
}

//----- (021D3948) --------------------------------------------------------
uint __fastcall Function_21d3948(int *a1, int *a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint result;

  v2 = (int)a2;
  v3 = a1;
  v4 = 0;
  v5 = a2[2];
  if ( a2[1] == 1 )
  {
    v6 = v5 - 1;
    a2[2] = v6;
    if ( v6 <= 0 )
    {
      a2[2] = 0;
      v4 = 1;
    }
  }
  else
  {
    v7 = v5 + 1;
    a2[2] = v7;
    if ( v7 >= 8 )
    {
      a2[2] = 8;
      v4 = 1;
    }
  }
  result = Function_21d2344(*a2, a2[2]);
  if ( v4 == 1 )
  {
    free(v2);
    result = Call_RemoveTaskFromTaskList(v3);
  }
  return result;
}

//----- (021D3990) --------------------------------------------------------
uint *__fastcall Function_21d3990(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint *v6;
  int v7;
  int v8;
  uint *result;
  int v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a1;
  v5 = a2;
  v10 = 0;
  v11 = 8;
  v6 = (uint *)malloc2(0x5Fu, 12);
  v7 = (int)v6;
  *v6 = v4;
  v8 = *(&v10 + v5);
  *(uint *)(v7 + 4) = v5;
  *(uint *)(v7 + 8) = v8;
  result = AddTaskToTaskList1((int)Function_21d3948, v7, 0);
  if ( !result )
    result = (uint *)ErrorHandler();
  return result;
}

//----- (021D39D4) --------------------------------------------------------
uint __fastcall Function_21d39d4(uint *a1, int a2)
{
  uint *v2;
  int v3;
  bool v4;
  uint result;
  uint v6;

  v2 = a1;
  v3 = *a1 + a2;
  *v2 = v3;
  if ( v3 < 0 )
  {
    do
    {
      v4 = (int)(*v2 + 1474560) < 0;
      *v2 += 1474560;
    }
    while ( v4 );
  }
  result = s32_div_f(*v2, 1474560);
  *v2 = v6;
  return result;
}

//----- (021D39FC) --------------------------------------------------------
int __fastcall Function_21d39fc(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_21d2ae4(a1 + 212, a2);
  return Function_21d2d44(v2, v3);
}

//----- (021D3A14) --------------------------------------------------------
int __fastcall Function_21d3a14(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 8) + 1;
  *(uint *)(a1 + 8) = v1;
  if ( v1 < 600 )
    return 0;
  *(uint *)(a1 + 8) = 600;
  return 1;
}

//----- (021D3A2C) --------------------------------------------------------
int __fastcall Function_21d3a2c(int a1, uint a2, int a3, int a4)
{
  int v4;
  uint v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = Function_2006d84_GetFilesize(*(uint *)(a1 + 3456), a2, a3, a4);
  if ( v6 == 1 )
    v8 = malloc(0x5Fu, v7);
  else
    v8 = malloc2(0x5Fu, v7);
  v9 = v8;
  LoadFileFromNARCFileHandler(*(uint *)(v4 + 3456), v5, v8);
  return v9;
}

//----- (021D3A68) --------------------------------------------------------
int __fastcall Function_21d3a68(int result, int a2)
{
  if ( a2 )
    *(uint *)(result + 52) = a2;
  return result;
}

//----- (021D3A70) --------------------------------------------------------
ushort *__fastcall Function_109_21d3a70(int a1, ushort *a2)
{
  ushort *v2;
  ushort *result;

  *(uint *)(a1 + 60) = 1;
  *(ushort *)(a1 + 88) = *a2;
  *(ushort *)(a1 + 90) = a2[1];
  v2 = (ushort *)(a1 + 92);
  result = (ushort *)(a1 + 94);
  *v2 = a2[2];
  *result = a2[3];
  return result;
}

//----- (021D3A94) --------------------------------------------------------
int __fastcall Function_21d3a94(int a1, uint a2)
{
  int v2;

  v2 = a1;
  if ( a2 >= 0x20 )
    ErrorHandler();
  Call_FillMemWithValue((int *)(v2 + 172), 0, 0x20u);
  return v2 + 172;
}

//----- (021D3AB4) --------------------------------------------------------
int __fastcall Function_21d3ab4(int a1)
{
  return a1 + 172;
}

//----- (021D3AB8) --------------------------------------------------------
BOOL __fastcall Function_21d3ab8(int a1, short a2)
{
  return (ushort)(*(ushort *)(*(uint *)(a1 + 208) + 64) & a2) != 0;
}

//----- (021D3ACC) --------------------------------------------------------
BOOL __fastcall Function_21d3acc(int a1)
{
  int v1;
  ushort *v2;
  uint v3;
  int i;

  v1 = a1;
  v2 = (ushort *)(*(uint *)(a1 + 208) + 66);
  v3 = *v2;
  for ( i = 0; v3; v3 >>= 1 )
    i += v3 & 1;
  return i >= *(uint *)(*(uint *)(v1 + 204) + 8) - 1;
}

//----- (021D3B04) --------------------------------------------------------
int __fastcall Function_21d3b04(int a1)
{
  int v1;
  ushort *v2;
  uint i;

  v1 = 0;
  v2 = (ushort *)(*(uint *)(a1 + 208) + 66);
  for ( i = *v2; i; i >>= 1 )
    v1 += i & 1;
  return v1;
}

//----- (021D3B24) --------------------------------------------------------
int __fastcall Function_21d3b24(int a1, ushort *a2)
{
  ushort *v2;
  int v3;
  ushort v4;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  *(ushort *)(a1 + 4 * v4 + 112) = v4;
  *(ushort *)(a1 + 4 * v4 + 114) = v2[1];
  result = Function_203608c();
  if ( v2[1] == result )
  {
    result = *v2;
    *(uint *)(v3 + 44) = result;
  }
  return result;
}

//----- (021D3B50) --------------------------------------------------------
int __fastcall Function_21d3b50(int result, int a2)
{
  *(uint *)(result + 48) = a2;
  return result;
}

//----- (021D3B54) --------------------------------------------------------
BOOL __fastcall Function_21d3b54(int a1, int a2)
{
  return !a2 || (1 << a2) & *(ushort *)(*(uint *)(a1 + 208) + 66);
}

//----- (021D3B70) --------------------------------------------------------
int __fastcall Function_21d3b70(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;
  uint *v5;
  int v6;
  int *v7;
  int *v8;
  int v9;
  int v10;

  v2 = a1;
  v3 = a2;
  v4 = *(uint **)(a1 + 36);
  v5 = (uint *)Function_209c188(*(uint *)(a1 + 208), a2);
  v6 = *(uint *)(v2 + 4 * v3 + 68);
  v7 = GetAdrOfPkmnInParty(v4, *(uint *)(*(uint *)(v2 + 204) + 4));
  v8 = GetAdrOfPkmnInParty(v5, v6);
  v9 = Function_203608c();
  v10 = Function_2032ee8(v9);
  Function_209304c((int)v8, v10, 5u, 0, 0xBu);
  return Function_20775ec(v8, v7);
}

//----- (021D3BC4) --------------------------------------------------------
int __fastcall Function_21d3bc4(int a1)
{
  int v1;
  uint v2;
  int v3;

  v1 = *(uint *)(a1 + 208);
  v2 = *(short *)(v1 + 70);
  v3 = 0;
  if ( *(ushort *)(v1 + 70) )
  {
    do
    {
      v3 += v2 & 1;
      v2 >>= 1;
    }
    while ( v2 );
  }
  return v3;
}

//----- (021D3BE4) --------------------------------------------------------
int __fastcall Function_21d3be4(int a1, int a2, int a3)
{
  int result;

  result = a1 + 4 * a2;
  *(uint *)(result + 68) = a3;
  return result;
}

//----- (021D3BEC) --------------------------------------------------------
int __fastcall Function_21d3bec(int result, short *a2)
{
  ushort *v2;
  int v3;
  short v4;

  v2 = (ushort *)(result + 96);
  v3 = 8;
  do
  {
    v4 = *a2;
    ++a2;
    *v2 = v4;
    ++v2;
    --v3;
  }
  while ( v3 );
  *(uint *)(result + 64) = 1;
  return result;
}

//----- (021D3C08) --------------------------------------------------------
int Function_21d3c08()
{
  return Function_21d3c0a();
}

//----- (021D3C0A) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (021D3C94) --------------------------------------------------------
int __fastcall Function_21d3c94(int a1)
{
  uint *v1;
  int v2;
  int v3;
  int *v4;

  v1 = (uint *)a1;
  v2 = GetNrOfPkmnInParty(a1);
  v3 = 0;
  if ( v2 <= 0 )
    return 0;
  while ( 1 )
  {
    v4 = GetAdrOfPkmnInParty(v1, v3);
    if ( GetPkmnData(v4, 0x4Cu, 0) )
    {
      if ( GetPkmnData(v4, 3u, 0) )
        break;
    }
    if ( ++v3 >= v2 )
      return 0;
  }
  return 1;
}

//----- (021D3CD8) --------------------------------------------------------
int __fastcall Function_21d3cd8(int a1)
{
  int v1;
  int v3;
  int v4;

  v1 = a1;
  if ( Function_21d3c94(*(uint *)(a1 + 36)) == 1 )
    return 1;
  v3 = 0;
  do
  {
    if ( Function_21d3b54(v1, v3) )
    {
      v4 = Function_209c188(*(uint *)(v1 + 208), v3);
      if ( Function_21d3c94(v4) == 1 )
        return 1;
    }
    ++v3;
  }
  while ( v3 < 5 );
  return 0;
}

//----- (021D3D1C) --------------------------------------------------------
int __fastcall Function_21d3d1c(int a1)
{
  int v1;
  ushort *v2;
  uint i;

  v1 = 0;
  v2 = (ushort *)(*(uint *)(a1 + 208) + 74);
  for ( i = *v2; i; i >>= 1 )
    v1 += i & 1;
  return v1;
}

//----- (021D3D3C) --------------------------------------------------------
BOOL __fastcall Function_21d3d3c(int a1)
{
  return *(ushort *)(*(uint *)(a1 + 208) + 72) != 0;
}

//----- (021D3D50) --------------------------------------------------------
int __fastcall Function_109_21d3d50(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int *v7;
  int *v8;
  int v9;
  int v10;

  v2 = a2;
  v3 = a1;
  v4 = LoadPtrToOverWorldDataIn18(a1);
  if ( *v2 )
  {
    if ( *v2 == 1 )
    {
      *v2 = 0;
      return 1;
    }
  }
  else
  {
    SetMainLoopFunctionCall(0, 0);
    Function_20177a4();
    Function_201ff00();
    Function_201ff68();
    REG_DISPCNT &= 0xFFFFE0FF;
    REG_DISPCNT_SUB &= 0xFFFFE0FF;
    Function_2017fc8(3, 95, (uint)&REG_DISPCNT_SUB << 7);
    v7 = LoadFromNARC_8(86, 0x5Fu, v5, v6);
    if ( !v7 )
      ErrorHandler();
    v8 = (int *)MallocSomeDataAndStorePtrInOverlayData1c(v3, 19120, 0x5Fu);
    Call_FillMemWithValue(v8, 0, 0x4AB0u);
    *(uint *)(v4 + 60) = v8;
    v8[3] = v4;
    v8[4] = *(uint *)(v4 + 52);
    v8[5] = Function_2018340(0x5Fu);
    v8[13] = (int)Function_200b358(0x5Fu);
    v8[14] = LoadFromMsgNARC(0, 26, 377, 0x5Fu);
    v9 = Function_2017dd4(4, 8);
    Function_21d40d0(v9);
    Function_21d40f0(v8[5]);
    Function_200f174(0, 17, 17, 0, 16, 1, 95);
    Function_21d4300(v8, v7);
    SetMainLoopFunctionCall((int)Function_21d40a8, (int)v8);
    v10 = Function_21d41f8(v8, v7);
    Function_21d43ec(v10);
    Function_21d441c(v8, v7);
    Function_21d4518(v8);
    Function_21d45f4(v8);
    Function_2004550(0x34u, 0);
    Function_209be50(*(uint *)(v4 + 52));
    Function_20378b8();
    Function_2037b58(3);
    if ( !Function_203608c() )
      Function_205bea8(0xDu);
    Function_2039734();
    v8[12] = (int)AddTaskToTaskList2((int)Function_21d4044, (int)v8, 5u);
    Call_FS_CloseFile(v7);
    ++*v2;
  }
  return 0;
}

//----- (021D3EB0) --------------------------------------------------------
int __fastcall Function_109_21d3eb0(int a1)
{
  int *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int (__fastcall *v6)(int *);
  int v7;
  int (__fastcall *v8)(int *);
  int result;

  v1 = (int *)LoadOverlayData1c(a1);
  v2 = Function_203608c();
  if ( !v2 )
  {
    v2 = *(uint *)(v1[4] + 48);
    if ( v2 )
    {
      v3 = Function_20318ec();
      v4 = v1[4];
      v2 = v3 & *(uint *)(v4 + 48);
      *(uint *)(v4 + 48) = v2;
    }
  }
  v5 = *v1;
  switch ( (uchar)v2 )
  {
    case 0:
      if ( Function_200f2ac() )
      {
        *v1 = 1;
        if ( Function_203608c() )
        {
          if ( Function_21d548c() > 2 )
            Function_209bebc(v1[4], 4u, 0, 0);
        }
      }
      goto LABEL_20;
    case 1:
      v6 = (int (__fastcall *)(int *))*(&off_21D5E9C + v1[213]);
      if ( v6 )
        *v1 = v6(v1);
      if ( !*(uint *)(v1[4] + 36) )
        Function_21d537c(v1 + 170, 0, 66304, v1);
      Function_21d5668(v1);
      if ( !Function_203608c() )
      {
        v7 = Function_21d58ac(v1, 1);
        if ( *v1 == 1 )
          *v1 = v7;
      }
      goto LABEL_20;
    case 2:
      v8 = (int (__fastcall *)(int *))*(&off_21D5E9C + v1[213]);
      if ( v8 )
        *v1 = v8(v1);
      goto LABEL_20;
    case 3:
      if ( !Function_200f2ac() )
        goto LABEL_20;
      result = 1;
      break;
    default:
LABEL_20:
      Function_20219f8(v1[24]);
      result = 0;
      break;
  }
  return result;
}

//----- (021D3F9C) --------------------------------------------------------
int __fastcall Function_109_21d3f9c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v6;

  v6 = a1;
  v1 = LoadOverlayData1c(a1);
  Call_RemoveTaskFromTaskList(*(int **)(v1 + 48));
  Function_200a4e4(*(int **)(v1 + 444));
  Function_200a6dc(*(int **)(v1 + 448));
  v2 = 0;
  v3 = v1;
  do
  {
    Function_2009754(*(int **)(v3 + 396));
    ++v2;
    v3 += 4;
  }
  while ( v2 < 4 );
  Function_2021964(*(int **)(v1 + 96));
  Function_200a878();
  Function_201e958();
  Function_201f8b4();
  Function_21d471c(v1);
  Function_21d42cc(*(uint *)(v1 + 20));
  Function_200b190(*(ushort **)(v1 + 56));
  Function_200b3f0(*(uint **)(v1 + 52), v4);
  REG_POWERCNT |= (uint)&REG_POWERCNT >> 11;
  SetMainLoopFunctionCall(0, 0);
  *(uint *)(*(uint *)(v1 + 12) + 16) = *(uint *)(v1 + 8);
  *(uint *)(*(uint *)(v1 + 12) + 8) = Function_21d548c();
  *(uint *)(*(uint *)(v1 + 12) + 12) = Function_21d54a8();
  Function_21d4294(v1);
  FreeSomeDataAndStore0InOverlayData1c(v6);
  Function_201807c(95);
  return 1;
}

//----- (021D4044) --------------------------------------------------------
int __fastcall Function_21d4044(int a1, int a2)
{
  int v2;
  int result;
  uint *v4;
  int v5;

  v2 = a2;
  result = *(uint *)(a2 + 28);
  v4 = (uint *)(a2 + 28);
  if ( result )
  {
    if ( v4[2] <= (int)*((uchar *)&dword_21D5D9C[2] + 2 * v4[1] + 2) )
    {
      ++*(uint *)(v2 + 36);
    }
    else
    {
      v4[2] = 0;
      v5 = v4[1] + 1;
      v4[1] = v5;
      if ( *((uchar *)&dword_21D5D9C[2] + 2 * v5 + 3) == 255 )
        v4[1] = 0;
      GX_LoadOBJPltt(*(uint *)(v4[4] + 12) + 32 * *((uchar *)&dword_21D5D9C[2] + 2 * v4[1] + 3), 0, 0x20u);
    }
    result = Function_21d5314(v2 + 948);
  }
  return result;
}

//----- (021D40A8) --------------------------------------------------------
int __fastcall Function_21d40a8(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_201dcac();
  Function_200a858();
  Function_201c2b8(v1);
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (021D40D0) --------------------------------------------------------
char *Function_21d40d0()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_21D5E74;
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

//----- (021D40F0) --------------------------------------------------------
uint __fastcall Function_21d40f0(uint *a1)
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

  v1 = a1;
  v38 = 1;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  SetGraphicsModes(&v38);
  v31 = 0;
  v32 = 0;
  v33 = 2048;
  v34 = 0;
  v35 = 69074945;
  v36 = 0;
  v37 = 0;
  Function_20183c4(v1, 4u, &v31, 0);
  Function_2019ebc(v1, 4u);
  v24 = 0;
  v25 = 0;
  v26 = 2048;
  v27 = 0;
  v28 = 2031617;
  v29 = 256;
  v30 = 0;
  Function_20183c4(v1, 5u, &v24, 0);
  Function_2019ebc(v1, 5u);
  v17 = 0;
  v18 = 0;
  v19 = 2048;
  v20 = 0;
  v21 = 35323905;
  v22 = 512;
  v23 = 0;
  Function_20183c4(v1, 6u, &v17, 0);
  v10 = 0;
  v11 = 0;
  v12 = 2048;
  v13 = 0;
  v14 = 2031617;
  v15 = 0;
  v16 = 0;
  Function_20183c4(v1, 0, &v10, 0);
  Function_2019ebc(v1, 0);
  v3 = 0;
  v4 = 0;
  v5 = 2048;
  v6 = 0;
  v7 = 35520513;
  v8 = 256;
  v9 = 0;
  Function_20183c4(v1, 1u, &v3, 0);
  Function_2019690(0, 32, 0, 0x5Fu);
  return Function_2019690(4u, 32, 0, 0x5Fu);
}

//----- (021D41F8) --------------------------------------------------------
int __fastcall Function_21d41f8(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int result;
  int v10;

  v2 = a1;
  v10 = a2;
  v3 = 0;
  v4 = a1;
  v5 = a1;
  do
  {
    *(uint *)(v4 + 60) = Function_2023790(8, 0x5Fu);
    *(uint *)(v5 + 884) = 0;
    *(uint *)(v5 + 888) = 0;
    *(uint *)(v4 + 924) = 0;
    ++v3;
    v4 += 4;
    v5 += 8;
  }
  while ( v3 < 5 );
  *(uint *)(v2 + 84) = Function_2023790(180, 0x5Fu);
  *(uint *)(v2 + 88) = Function_2023790(40, 0x5Fu);
  *(uint *)(v2 + 852) = 0;
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v2 + 56), 0x11u, *(ushort **)(v2 + 88));
  Function_21d577c(v2, v10);
  *(uint *)(v2 + 952) = Function_205ca4c(95, v6, v7, v8);
  *(uint *)(v2 + 28) = 0;
  *(uint *)(v2 + 36) = 0;
  *(uint *)(v2 + 32) = 0;
  *(uint *)(v2 + 40) = Function_20071ec(v10, 1u, (uint *)(v2 + 44), 95);
  *(uint *)(v2 + 19012) = 0;
  *(uint *)(v2 + 816) = 0;
  result = *(uint *)(v2 + 16);
  *(uint *)(result + 44) = 2;
  return result;
}

//----- (021D4294) --------------------------------------------------------
uint __fastcall Function_21d4294(int *a1)
{
  int *v1;
  int v2;
  int v3;
  int *v4;
  int v5;

  v1 = a1;
  Function_21d5824();
  free(v1[10]);
  free(v1[238]);
  v3 = 0;
  v4 = v1;
  do
  {
    Function_20237bc_FreeMsg(v4[15], v2);
    ++v3;
    ++v4;
  }
  while ( v3 < 5 );
  Function_20237bc_FreeMsg(v1[22], v2);
  return Function_20237bc_FreeMsg(v1[21], v5);
}

//----- (021D42CC) --------------------------------------------------------
uint __fastcall Function_21d42cc(int a1)
{
  int v1;

  v1 = a1;
  Function_2019044(a1, 6);
  Function_2019044(v1, 5);
  Function_2019044(v1, 4);
  Function_2019044(v1, 1);
  Function_2019044(v1, 0);
  return free(v1);
}

//----- (021D4300) --------------------------------------------------------
int __fastcall Function_21d4300(int a1, int a2)
{
  int v2;
  uint *v3;
  int v4;
  uchar v5;

  v2 = a1;
  v3 = *(uint **)(a1 + 20);
  v4 = a2;
  Function_2007130(a2, 0, 0, 0, 512, 95);
  Call_LoadFromNARC_RLCN(12, 12, 4u, 0, 32, 95);
  LoadFromNARC_PlFont2(0, 416, 95);
  LoadFromNARC_PlFont2(4u, 416, 95);
  LoadFromNARC_RGCN(12, 10, v3, 6u, 0, 0, 1, 95);
  LoadFromNARC_RCSN(12, 11, v3, 6u, 0, 0, 1, 95);
  Function_20070e8(v4, 2u, v3, 1u, 0, 0x2000, 1, 95);
  Function_200710c(v4, 3u, v3, 1u, 0, 1536, 1, 95);
  v5 = Function_2027b50(*(ushort **)(*(uint *)(v2 + 12) + 36));
  Function_200dd0c(v3, 0, 1, 10, v5, 95);
  return Function_200daa4(v3, 0, 31, 11, 0, 95);
}

//----- (021D43EC) --------------------------------------------------------
int Function_21d43ec()
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = 20;
  v2 = 2048;
  v3 = 2048;
  v4 = 95;
  Function_201e86c(&v1);
  Function_201f834(20, 0x5Fu);
  Function_201e994();
  return Function_201f8e4();
}

//----- (021D441C) --------------------------------------------------------
int __fastcall Function_21d441c(int a1, int a2)
{
  int v2;
  int v3;
  int *v4;
  int v5;
  int *v6;
  int v7;
  int v9;

  v2 = a1;
  v9 = a2;
  Function_20a7944();
  Function_200a784(0, 126, 0, 32, 0, 0x7Eu, 0, 0x20u, 0x5Fu);
  v4 = Function_20095c4(30, v2 + 100, 95, v3);
  *(uint *)(v2 + 96) = v4;
  if ( !v4 )
    ErrorHandler();
  Function_200964c(v2 + 100, 0, 0x100000, v5);
  v6 = 0;
  v7 = v2;
  do
  {
    *(uint *)(v7 + 396) = Function_2009714(3, v6, 0x5Fu);
    v6 = (int *)((char *)v6 + 1);
    v7 += 4;
  }
  while ( (int)v6 < 4 );
  *(uint *)(v2 + 444) = Function_2009a4c(*(uint *)(v2 + 396), v9, 0xCu, 1, 2, 1, 0x5Fu);
  *(uint *)(v2 + 448) = Function_2009b04(*(uint *)(v2 + 400), v9, 1u, 0, 2, 1, 15, 0x5Fu);
  *(uint *)(v2 + 452) = Function_2009bc4(*(uint *)(v2 + 404), v9, 0xDu, 1, 2, 2u, 0x5Fu);
  *(uint *)(v2 + 456) = Function_2009bc4(*(uint *)(v2 + 408), v9, 0xEu, 1, 2, 3u, 0x5Fu);
  Function_200a328(*(int **)(v2 + 444));
  return Function_200a5c8(*(int **)(v2 + 448));
}

//----- (021D4518) --------------------------------------------------------
uint __fastcall Function_21d4518(uint *a1)
{
  uint *v1;
  int v2;
  int *v3;
  int v5;
  uint *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  short v13;
  int v14;
  int v15;
  int v16;

  v1 = a1;
  Function_20093b4((int)(v1 + 133), 2, 2, 2, 2, -1, -1, 0, 1, a1[99], v1[100], v1[101], v1[102], 0, 0);
  v2 = 0;
  v5 = v1[24];
  v6 = v1 + 133;
  v9 = 0;
  v10 = 4096;
  v11 = 4096;
  v12 = 4096;
  v13 = 0;
  v14 = 1;
  v15 = 1;
  v3 = &dword_21D5DD0;
  v16 = 95;
  do
  {
    v7 = *((ushort *)v3 + 2) << 12;
    v8 = *((ushort *)v3 + 3) << 12;
    v1[143] = Function_2021aa0((uint **)&v5);
    Function_2021cc8(v1[143], 1);
    Function_2021d6c(v1[143], 2 * (v2 - 1) + 27);
    Function_2021cac(v1[143], 0);
    ++v2;
    ++v3;
    ++v1;
  }
  while ( v2 < 5 );
  v7 = 98304;
  v8 = 1703936;
  Function_201ff0c(0x10u, 1);
  return Function_201ff74(0x10u, 1);
}

//----- (021D45F4) --------------------------------------------------------
int __fastcall Function_21d45f4(int a1)
{
  int v1;

  v1 = a1;
  Function_201a7e8(*(uint **)(a1 + 20), a1 + 776, 5, 26, 20, 6u, 2u, 13, 451);
  Function_201ada4_ClearTextBox(v1 + 776, 0);
  Function_201a7e8(*(uint **)(v1 + 20), v1 + 760, 0, 2, 19, 0x1Bu, 4u, 13, 40);
  Function_201ada4_ClearTextBox(v1 + 760, 15);
  Function_201a7e8(*(uint **)(v1 + 20), v1 + 792, 0, 3, 1, 0x1Au, 2u, 15, 148);
  Function_21d46d8(v1 + 792, *(uint *)(v1 + 88), 0);
  Function_201a7e8(*(uint **)(v1 + 20), v1 + 680, 0, 2, 6, 0x10u, 0xBu, 15, 200);
  Function_201ada4_ClearTextBox(v1 + 680, 0);
  return Function_21d537c(v1 + 680, 0, 66304, v1);
}

//----- (021D46D8) --------------------------------------------------------
int __fastcall Function_21d46d8(int a1, int a2)
{
  int v2;

  v2 = a1;
  Function_2002d7c(1, a2, 0);
  Function_201ada4_ClearTextBox(v2, 0);
  return Function_201d78c(v2, 1);
}

//----- (021D471C) --------------------------------------------------------
uint __fastcall Function_21d471c(int a1)
{
  int v1;

  v1 = a1;
  Function_201a8fc(a1 + 680);
  Function_201a8fc(v1 + 792);
  Function_201a8fc(v1 + 776);
  return Function_201a8fc(v1 + 760);
}

//----- (021D474C) --------------------------------------------------------
int __fastcall Function_21d474c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_20388f4(0, 1);
  if ( Function_203608c() )
  {
    Function_21d55a8(v2, 8, 0);
  }
  else if ( Function_2035e18() >= 2 )
  {
    Function_21d55a8(v2, 2, 0);
  }
  Function_21d48ec(v2, 3);
  return v3;
}

//----- (021D478C) --------------------------------------------------------
int __fastcall Function_21d478c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_21d47b8();
  if ( Function_203608c() )
  {
    Function_21d5488(v2);
  }
  else if ( Function_21d5360() != 1 )
  {
    Function_21d5488(v2);
  }
  return v3;
}

//----- (021D47B8) --------------------------------------------------------
int __fastcall Function_21d47b8(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  int v8;

  v8 = a4;
  v4 = a1;
  if ( dword_21BF6C4 & 1 )
  {
    result = Function_203608c();
    if ( !result )
    {
      v6 = *(uint *)(v4 + 16);
      if ( *(uint *)(v6 + 44) != Function_21d548c(0) || *(uint *)(v6 + 48) )
      {
        result = Function_2005748(0x5F2u);
      }
      else
      {
        BYTE2(v8) = 1;
        Function_21d55a8(v4, 3, 0);
        Function_21d48ec(v4, 22);
        Function_209bebc(*(uint *)(v4 + 16), 7u, (char *)&v8 + 2, 1);
        result = Function_21d5858(v4, 0);
      }
    }
  }
  else if ( dword_21BF6C4 & 2 )
  {
    if ( Function_203608c() )
    {
      if ( *(uint *)(*(uint *)(v4 + 16) + 40) )
      {
        result = Function_2005748(0x5F2u);
      }
      else
      {
        Function_21d55a8(v4, 4, 0);
        result = Function_21d48ec(v4, 4);
      }
    }
    else
    {
      v7 = *(uint *)(v4 + 16);
      if ( *(uint *)(v7 + 44) != Function_2035e18() || *(uint *)(v7 + 48) )
      {
        result = Function_2005748(0x5F2u);
      }
      else
      {
        BYTE1(v8) = 1;
        Function_21d55a8(v4, 4, 0);
        Function_21d48ec(v4, 4);
        Function_209bebc(*(uint *)(v4 + 16), 7u, (char *)&v8 + 1, 1);
        result = Function_21d5858(v4, 0);
      }
    }
  }
  else
  {
    result = *(uint *)(a1 + 19016);
    if ( !result )
    {
      result = Function_203608c();
      if ( !result )
      {
        result = Function_2035e18();
        if ( *(uint *)(*(uint *)(v4 + 16) + 44) == result )
        {
          LOBYTE(v8) = 0;
          result = Function_209bebc(*(uint *)(v4 + 16), 7u, (char *)&v8, 1);
        }
      }
    }
  }
  return result;
}

//----- (021D48D0) --------------------------------------------------------
void Function_21d48d0()
{
  ;
}

//----- (021D48D4) --------------------------------------------------------
int __fastcall Function_21d48d4(int a1, int a2)
{
  int v2;

  v2 = a2;
  Function_21d48ec(a1, 2);
  Function_21d48d0();
  return v2;
}

//----- (021D48EC) --------------------------------------------------------
int __fastcall Function_21d48ec(int result, int a2)
{
  *(uint *)(result + 852) = 30;
  *(uint *)(result + 856) = a2;
  return result;
}

//----- (021D48FC) --------------------------------------------------------
int __fastcall Function_21d48fc(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( Function_21d5638(*(uint *)(a1 + 92)) )
    *(uint *)(v2 + 852) = *(uint *)(v2 + 856);
  Function_21d48d0();
  return v3;
}

//----- (021D4920) --------------------------------------------------------
int __fastcall Function_21d4920(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v7;

  v7 = a4;
  v4 = a1;
  v5 = a2;
  if ( !Function_203608c() )
  {
    v7 = 0;
    Function_209bebc(*(uint *)(v4 + 16), 7u, (char *)&v7, 1);
  }
  *(uint *)(v4 + 852) = 3;
  Function_21d48d0();
  return v5;
}

//----- (021D4950) --------------------------------------------------------
int __fastcall Function_21d4950(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  *(uint *)(a1 + 816) = Function_2002100(*(uint **)(a1 + 20), (uchar *)dword_21D5D94, 31, 11, 0x5Fu);
  *(uint *)(v2 + 852) = 5;
  Function_21d48d0();
  return v3;
}

//----- (021D4980) --------------------------------------------------------
int __fastcall Function_21d4980(int a1, int a2)
{
  int v2;
  int v3;
  bool v4;
  int v5;
  int v6;
  int result;
  int v8;
  int v9;
  char v10;
  char v11;
  int v12;

  v2 = a1;
  v3 = a2;
  v4 = Function_203608c() == 0;
  v5 = *(uint *)(v2 + 16);
  if ( !v4 )
  {
    v6 = *(uint *)(v5 + 40);
    if ( v6 )
    {
      if ( dword_21BF6C4 & 0xC3 )
        Function_2005748(0x5F2u);
      Function_21d48d0();
      return v3;
    }
    goto LABEL_10;
  }
  v6 = *(uint *)(v5 + 48);
  if ( !v6 )
  {
LABEL_10:
    v8 = Function_21d548c(v6);
    if ( v8 == Function_2035e18() )
    {
      v9 = Function_2002114(*(uint *)(v2 + 816), 0x5Fu);
      if ( v9 != -1 )
      {
        if ( v9 == -2 )
        {
          if ( !Function_203608c() )
          {
            v12 = 0;
            Function_209bebc(*(uint *)(v2 + 16), 7u, (char *)&v12, 1);
            Function_21d5858(v2, 1);
          }
          Function_21d48ec(v2, 0);
        }
        else if ( Function_203608c() )
        {
          MI_CpuFill8(&v10, 0, 4u);
          v11 = 0;
          v10 = Function_203608c();
          *(uchar *)(v2 + 19024) = 1;
          *(ushort *)(v2 + 19036) = 0;
          *(uint *)(v2 + 852) = 6;
          Function_209bebc(*(uint *)(v2 + 16), 2u, &v10, 4);
        }
        else
        {
          Function_21d48ec(v2, 11);
          Function_21d55a8(v2, 14, 0);
        }
        *(uint *)(v2 + 816) = 0;
      }
      Function_21d48d0();
      result = v3;
    }
    else
    {
      Function_21d48d0();
      result = v3;
    }
    return result;
  }
  if ( dword_21BF6C4 & 0xC3 )
    Function_2005748(0x5F2u);
  Function_21d48d0();
  return v3;
}

//----- (021D4AA8) --------------------------------------------------------
int __fastcall Function_21d4aa8(int a1, int a2)
{
  int v2;

  v2 = a2;
  *(ushort *)(a1 + 19036) = 0;
  Function_21d48d0();
  return v2;
}

//----- (021D4AC0) --------------------------------------------------------
int __fastcall Function_21d4ac0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;
  int v8;

  v8 = a4;
  v4 = a1;
  v5 = a2;
  v6 = Function_2035e18();
  if ( *(ushort *)(*(uint *)(v4 + 16) + 56) == v6
    && *(ushort *)(*(uint *)(v4 + 16) + 56) == Function_21d548c(v6) )
  {
    if ( (short)++*(ushort *)(v4 + 19036) > 30 )
    {
      MI_CpuFill8(&v8, 0, 4u);
      BYTE2(v8) = 1;
      LOBYTE(v8) = Function_203608c();
      Function_209bebc(*(uint *)(v4 + 16), 2u, (char *)&v8, 4);
      *(ushort *)(v4 + 19036) = 0;
      *(uint *)(v4 + 852) = 9;
    }
    Function_21d48d0();
    result = v5;
  }
  else
  {
    *(ushort *)(v4 + 19036) = 0;
    *(uint *)(v4 + 852) = 8;
    Function_21d48d0();
    result = v5;
  }
  return result;
}

//----- (021D4B44) --------------------------------------------------------
int __fastcall Function_21d4b44(int a1, int a2)
{
  int v2;

  v2 = a2;
  *(uchar *)(a1 + 19024) = 0;
  Function_21d48ec(a1, 0);
  Function_21d48d0();
  return v2;
}

//----- (021D4B64) --------------------------------------------------------
int __fastcall Function_21d4b64(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  *(uint *)(a1 + 816) = Function_2002100(*(uint **)(a1 + 20), (uchar *)dword_21D5D94, 31, 11, 0x5Fu);
  *(uint *)(v2 + 852) = 23;
  Function_21d48d0();
  return v3;
}

//----- (021D4B94) --------------------------------------------------------
int __fastcall Function_21d4b94(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;
  int v8;
  int v9;
  int v10;

  v10 = a4;
  v4 = a1;
  v5 = *(uint *)(a1 + 16);
  v6 = a2;
  if ( *(uint *)(v5 + 44) != Function_21d548c(a1) || *(uint *)(v5 + 48) )
  {
    if ( dword_21BF6C4 & 0xC3 )
      Function_2005748(0x5F2u);
    Function_21d48d0();
    result = v6;
  }
  else
  {
    v8 = Function_2002114(*(uint *)(v4 + 816), 0x5Fu);
    if ( v8 != -1 )
    {
      if ( v8 == -2 )
      {
        v9 = 0;
        Function_209bebc(*(uint *)(v4 + 16), 7u, (char *)&v9, 1);
        Function_21d5858(v4, 1);
        Function_21d48ec(v4, 0);
      }
      else if ( Function_203608c() )
      {
        ErrorHandler();
      }
      else
      {
        *(uint *)(v4 + 852) = 24;
        *(uchar *)(v4 + 19026) = Function_21d548c(852);
        Function_205bea8(0xCu);
      }
      *(uint *)(v4 + 816) = 0;
    }
    Function_21d48d0();
    result = v6;
  }
  return result;
}

//----- (021D4C4C) --------------------------------------------------------
int __fastcall Function_21d4c4c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( !*(uchar *)(a1 + 19027) && Function_209bebc(*(uint *)(a1 + 16), 5u, 0, 0) == 1 )
    *(uint *)(v2 + 852) = 31;
  return v3;
}

//----- (021D4C7C) --------------------------------------------------------
int __fastcall Function_21d4c7c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( !Function_203608c() )
    Function_2035e18();
  if ( *(uint *)(*(uint *)(v2 + 16) + 32) == Function_2035e18() )
    *(uint *)(v2 + 852) = 31;
  return v3;
}

//----- (021D4CA8) --------------------------------------------------------
int __fastcall Function_21d4ca8(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_21d59a8(*(uint *)(*(uint *)(a1 + 12) + 28), a1 + 3968);
  *(uint *)(v2 + 852) = 27;
  return v3;
}

//----- (021D4CC8) --------------------------------------------------------
int __fastcall Function_21d4cc8(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int *v4;
  int *v5;

  v2 = a1;
  v3 = a2;
  byte_21BF6E4 = 1;
  v4 = Function_202c1b4(0x5Fu);
  Function_202b758(*(uint *)(v2[3] + 44), (int)v4, 4u);
  v5 = Function_202c244(0x5Fu, 17);
  Function_202b758(*(uint *)(v2[3] + 44), (int)v5, 4u);
  Function_202cfec(*(uint *)(v2[3] + 40), 20);
  Function_2038ed4(v2 + 236);
  v2[213] = 28;
  return v3;
}

//----- (021D4D20) --------------------------------------------------------
int __fastcall Function_21d4d20(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = a2;
  if ( !Function_203608c() )
    Function_2035e18();
  if ( Function_2038edc(*(uint *)(v2[3] + 28), 2, v2 + 236, v4) )
  {
    Function_20057a4(1624, 8);
    Function_21d55a8(v2, 13, 0);
    Function_21d48ec((int)v2, 29);
    v2[7] = 0;
    v2[216] = 0;
    byte_21BF6E4 = 0;
    *(uint *)(v2[4] + 36) = 0;
  }
  return v3;
}

//----- (021D4D80) --------------------------------------------------------
int __fastcall Function_21d4d80(int a1, int a2)
{
  int v2;

  v2 = *(uint *)(a1 + 864);
  *(uint *)(a1 + 864) = v2 + 1;
  if ( v2 > 60 )
    *(uint *)(a1 + 852) = 15;
  return a2;
}

//----- (021D4D9C) --------------------------------------------------------
int __fastcall Function_21d4d9c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  Function_21d55a8(a1, 5, 0);
  Function_21d48ec(v3, 10);
  Function_21d48d0();
  return v2;
}

//----- (021D4DBC) --------------------------------------------------------
int __fastcall Function_21d4dbc(int a1, int a2)
{
  int v2;

  v2 = a2;
  if ( ++*(uint *)(a1 + 864) > 60 )
  {
    Function_200f174(0, 16, 16, 0, 16, 1, 95);
    v2 = 3;
  }
  Function_21d48d0();
  return v2;
}

//----- (021D4DF8) --------------------------------------------------------
int __fastcall Function_21d4df8(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  *(uint *)(a1 + 816) = Function_2002100(*(uint **)(a1 + 20), (uchar *)dword_21D5D94, 31, 11, 0x5Fu);
  *(uint *)(v2 + 852) = 12;
  Function_21d48d0();
  return v3;
}

//----- (021D4E28) --------------------------------------------------------
int __fastcall Function_21d4e28(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int result;
  int v8;
  int v9;
  int v10;

  v10 = a4;
  v4 = a1;
  v5 = a1[4];
  v6 = a2;
  if ( *(uint *)(v5 + 44) != Function_21d548c(a1) || *(uint *)(v5 + 48) )
  {
    if ( dword_21BF6C4 & 0xC3 )
      Function_2005748(0x5F2u);
    Function_21d48d0();
    result = v6;
  }
  else
  {
    v8 = Function_2002114(v4[204], 0x5Fu);
    if ( v8 != -1 )
    {
      if ( v8 == -2 )
      {
        v9 = 0;
        v4[213] = 0;
        Function_209bebc(v4[4], 7u, (char *)&v9, 1);
        Function_21d5858(v4, 1);
      }
      else
      {
        v4[213] = 13;
        Function_209bebc(v4[4], 3u, 0, 0);
        Function_2032ee8(0);
        Function_200b498(v4[13], 0);
      }
      v4[204] = 0;
    }
    Function_21d48d0();
    result = v6;
  }
  return result;
}

//----- (021D4ED8) --------------------------------------------------------
int __fastcall Function_21d4ed8(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( Function_203608c() )
  {
    Function_2032ee8(0);
    Function_200b498(*(uint *)(v2 + 52), 0);
    Function_21d55a8(v2, 16, 0);
  }
  else
  {
    Function_21d55a8(v2, 5, 0);
  }
  Function_21d48ec(v2, 14);
  *(uint *)(v2 + 864) = 0;
  Function_21d48d0();
  return v3;
}

//----- (021D4F28) --------------------------------------------------------
int __fastcall Function_21d4f28(int a1, int a2)
{
  int v2;

  v2 = a2;
  if ( ++*(uint *)(a1 + 864) > 45 )
    *(uint *)(a1 + 852) = 15;
  Function_21d48d0();
  return v2;
}

//----- (021D4F4C) --------------------------------------------------------
int __fastcall Function_21d4f4c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_20364f0(202);
  *(uint *)(v2 + 852) = 16;
  Function_21d48d0();
  return v3;
}

//----- (021D4F6C) --------------------------------------------------------
int __fastcall Function_21d4f6c(int a1, int a2)
{
  int v2;

  v2 = a2;
  if ( Function_2036540(202) )
  {
    Function_20388f4(0, 0);
    Function_200f174(0, 16, 16, 0, 16, 1, 95);
    v2 = 3;
  }
  Function_21d48d0();
  return v2;
}

//----- (021D4FAC) --------------------------------------------------------
int __fastcall Function_21d4fac(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( Function_21d5638(*(uint *)(a1 + 92)) )
    Function_21d55a8(v2, 9, 0);
  *(uint *)(v2 + 852) = 18;
  Function_21d48d0();
  return v3;
}

//----- (021D4FD8) --------------------------------------------------------
int __fastcall Function_21d4fd8(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( Function_21d5638(*(uint *)(a1 + 92)) )
    *(uint *)(v2 + 852) = 10;
  Function_21d48d0();
  return v3;
}

//----- (021D4FFC) --------------------------------------------------------
int __fastcall Function_21d4ffc(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = a1[23];
  v4 = a2;
  if ( v3 != 255 && !Function_21d5638(v3) )
    Call_RemoveTextInterpreterTaskFromTaskList(v2[23] & 0xFF);
  Function_21d55a8(v2, 15, 1);
  v2[213] = 20;
  if ( !Function_203608c() )
    Function_21d5858(v2, 0);
  v2[4758] = Function_2035e18();
  v2[4757] = 300;
  Function_21d48d0();
  return v4;
}

//----- (021D505C) --------------------------------------------------------
int __fastcall Function_21d505c(uint *a1, int a2)
{
  uint *v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( a1[4758] && a1[4758] != Function_2035e18() )
    v2[4758] = 0;
  v2[213] = 21;
  v2[216] = 0;
  Function_21d48d0();
  return v3;
}

//----- (021D5098) --------------------------------------------------------
int __fastcall Function_21d5098(uint *a1, int a2)
{
  uint *v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( a1[4758] && a1[4758] != Function_2035e18() )
    v2[4758] = 0;
  if ( --v2[4757] < 0 )
    v2[4758] = 0;
  if ( ++v2[216] > 60 && !v2[4758] )
  {
    v2[213] = 0;
    if ( !Function_203608c() )
      Function_21d5858(v2, 1);
  }
  Function_21d48d0();
  return v3;
}

//----- (021D510C) --------------------------------------------------------
int __fastcall Function_21d510c(int a1)
{
  int v1;

  v1 = a1;
  Function_205bea8(0xCu);
  Function_200f174(0, 16, 16, 0, 16, 1, 95);
  *(uint *)(v1 + 8) = 1;
  Function_21d48d0();
  return 3;
}

//----- (021D5140) --------------------------------------------------------
int __fastcall Function_21d5140(int result, int a2, int a3)
{
  int v3;
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v3 = a2;
  v4 = (uint *)result;
  v5 = a3;
  if ( a2 > 19 )
  {
    if ( a2 > 25 )
    {
      if ( a2 != 31 )
        return result;
      if ( !Function_21d5638(*(uint *)(result + 92)) )
        Call_RemoveTextInterpreterTaskFromTaskList(v4[23] & 0xFF);
      v9 = v4[204];
      if ( v9 )
      {
        Function_2002154(v9, 0x5Fu);
        v4[204] = 0;
      }
    }
    else
    {
      if ( a2 != 25 )
        return result;
      if ( !Function_21d5638(*(uint *)(result + 92)) )
        Call_RemoveTextInterpreterTaskFromTaskList(v4[23] & 0xFF);
      Function_21d55a8(v4, 12, 0);
      v7 = v4[204];
      if ( v7 )
      {
        Function_2002154(v7, 0x5Fu);
        v4[204] = 0;
      }
    }
    goto LABEL_33;
  }
  if ( a2 < 19 )
  {
    if ( a2 > 8 )
    {
      if ( a2 != 13 )
        return result;
      v6 = *(uint *)(result + 816);
      if ( v6 )
      {
        Function_2002154(v6, 0x5Fu);
        v4[204] = 0;
      }
    }
    else
    {
      if ( a2 < 2 )
        return result;
      if ( a2 == 2 )
      {
        Function_21d5658();
      }
      else if ( a2 != 7 && a2 != 8 )
      {
        return result;
      }
    }
LABEL_33:
    result = 852;
    v4[213] = v3;
    return result;
  }
  result = *(uchar *)(result + 19024);
  if ( result != 1 )
  {
    Function_2032ee8(a3);
    Function_200b498(v4[13], 0);
    result = Function_203608c();
    if ( v5 != result )
    {
      v8 = v4[204];
      if ( v8 )
      {
        Function_2002154(v8, 0x5Fu);
        v4[204] = 0;
      }
      if ( !Function_203608c() )
        *(uint *)(v4[4] + 48) &= v5 ^ 0xFFFF;
      goto LABEL_33;
    }
  }
  return result;
}

//----- (021D5258) --------------------------------------------------------
int __fastcall Function_109_21d5258(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int result;
  int v6;
  int v7;
  int v8;

  v8 = a4;
  v4 = a1;
  result = a1[213];
  v6 = a3;
  if ( result == 3 )
  {
    if ( a2 == 1 )
    {
      Function_2032ee8(a3);
      Function_200b498(v4[13], 0);
      Function_21d5858(v4, 1);
      v4[213] = 1;
      *(uint *)(v4[4] + 44) = Function_2035e18();
      *(uint *)(v4[4] + 48) = 0;
      result = Function_203608c();
      if ( !result )
      {
        v7 = 1;
        result = Function_209bebc(v4[4], 7u, (char *)&v7, 1);
      }
    }
    else if ( a2 == 19 )
    {
      Function_2032ee8(a3);
      Function_200b498(v4[13], 0);
      result = Function_203608c();
      if ( v6 != result )
      {
        if ( !Function_203608c() )
          *(uint *)(v4[4] + 48) &= v6 ^ 0xFFFF;
        result = 852;
        v4[213] = 19;
      }
    }
    else
    {
      result = ErrorHandler();
    }
  }
  else if ( a2 == 1 )
  {
    *(uint *)(v4[4] + 48) = 0;
    result = Function_2035e18();
    *(uint *)(v4[4] + 44) = result;
  }
  return result;
}

//----- (021D5314) --------------------------------------------------------
uint __fastcall Function_21d5314(ushort *a1, int a2, int a3, int a4)
{
  int v5;

  v5 = a4;
  *a1 += 10;
  if ( (ushort)*a1 > 0x168u )
    *a1 = 0;
  LOWORD(v5) = 32 * ((int)(10 * Function_201d250((ushort)*a1)) / 4096 + 15) | 0x1D;
  GX_LoadOBJPltt((int)&v5, 10, 2u);
  return GX_LoadOBJPltt((int)&v5, 42, 2u);
}

//----- (021D5360) --------------------------------------------------------
int Function_21d5360()
{
  int v0;
  int v1;

  v0 = 0;
  v1 = 0;
  do
  {
    if ( Function_2032ee8(v1) )
      ++v0;
    ++v1;
  }
  while ( v1 < 5 );
  return v0;
}

//----- (021D537C) --------------------------------------------------------
int __fastcall Function_21d537c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  ushort *v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v15 = a4;
  v4 = a1;
  Function_203608c();
  if ( !Function_21d54cc(v15) )
    return 0;
  Function_201ada4_ClearTextBox(v4, 0);
  v7 = v15;
  v16 = 0;
  v8 = v15;
  v9 = 1;
  do
  {
    v10 = *(uint *)(v7 + 884);
    if ( v10 )
    {
      v11 = GetSecretTrainerID(v10);
      Function_2025ef4(*(ushort **)(v7 + 884), *(ushort **)(v8 + 60));
      Function_200b60c(*(uint *)(v15 + 52), 0, v11, 5, 2, 1);
      v12 = Function_200b29c(*(uint **)(v15 + 52), *(ushort ***)(v15 + 56), 1u, 0x5Fu);
      v13 = *(uint *)(v8 + 60);
      Function_201d78c(v4, 0);
      Function_201d78c(v4, 0);
      Function_20237bc_FreeMsg((int)v12, v14);
    }
    v7 += 8;
    v8 += 4;
    v9 += 18;
    ++v16;
  }
  while ( v16 < 5 );
  Function_201a954(v4, v6);
  return 1;
}

//----- (021D5488) --------------------------------------------------------
void Function_21d5488()
{
  ;
}

//----- (021D548C) --------------------------------------------------------
int Function_21d548c()
{
  int v0;
  int v1;

  v0 = 0;
  v1 = 0;
  do
  {
    if ( Function_2032ee8(v1) )
      ++v0;
    ++v1;
  }
  while ( v1 < 5 );
  return v0;
}

//----- (021D54A8) --------------------------------------------------------
int Function_21d54a8()
{
  int v0;
  int v1;

  v0 = 0;
  v1 = 0;
  do
  {
    if ( Function_2032ee8(v1) )
      v0 |= 1 << v1;
    ++v1;
  }
  while ( v1 < 5 );
  return v0;
}

//----- (021D54CC) --------------------------------------------------------
int __fastcall Function_21d54cc(uint *a1)
{
  uint *v1;
  int v2;
  uint *v3;
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint *v9;
  uint *v10;
  int v11;
  int v13;

  v1 = a1;
  v2 = 0;
  v13 = 0;
  v3 = a1;
  v4 = a1;
  do
  {
    v3[222] = v3[221];
    v3[221] = Function_2032ee8(v2);
    v5 = v4[4761];
    v4[4762] = v4[4760];
    v4[4763] = v5;
    v6 = v3[221];
    if ( v6 )
    {
      v4[4760] = GetTrainerID(v6);
      v7 = 1;
    }
    else
    {
      v7 = 0;
      v4[4760] = 0;
    }
    ++v2;
    v4[4761] = v7;
    v3 += 2;
    v4 += 4;
  }
  while ( v2 < 5 );
  v8 = 0;
  v9 = v1;
  v10 = v1;
  do
  {
    v11 = v1[221];
    if ( v1[222] == v11 )
    {
      if ( *((ull *)v10 + 2381) != *((ull *)v10 + 2380) )
      {
        v13 = 1;
        if ( v10[4761] )
          v9[231] = 1;
        else
          v9[231] = 3;
      }
    }
    else
    {
      v13 = 1;
      if ( v11 )
        v9[231] = 1;
      else
        v9[231] = 3;
    }
    ++v8;
    v1 += 2;
    ++v9;
    v10 += 4;
  }
  while ( v8 < 5 );
  return v13;
}

//----- (021D55A8) --------------------------------------------------------
int __fastcall Function_21d55a8(int a1, uint a2, int a3)
{
  int v3;
  uint v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;
  int result;
  int v10;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = (ushort *)Function_2023790(180, 0x5Fu);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v3 + 56), v4, v6);
  Function_200c388(*(uint **)(v3 + 52), *(uint *)(v3 + 84), (int)v6);
  Function_20237bc_FreeMsg((int)v6, v7);
  Function_201ada4_ClearTextBox(v3 + 760, 15);
  Function_200e060(v3 + 760, 0, 1, 0xAu);
  if ( v5 )
  {
    v10 = *(uint *)(v3 + 84);
    Function_201d738_CallInitTextInterpreter(v3 + 760, 1);
    result = 255;
    *(uint *)(v3 + 92) = 255;
  }
  else
  {
    Function_21d5854(v3);
    v8 = *(uint *)(v3 + 84);
    result = Function_201d738_CallInitTextInterpreter(v3 + 760, 1);
    *(uint *)(v3 + 92) = result;
  }
  return result;
}

//----- (021D5638) --------------------------------------------------------
BOOL __fastcall Function_21d5638(int a1)
{
  BOOL result;

  if ( a1 == 255 )
    result = 1;
  else
    result = Function_201d724((uchar)a1) == 0;
  return result;
}

//----- (021D5658) --------------------------------------------------------
char *__fastcall Function_21d5658(int a1)
{
  return Function_200e084(a1 + 760, 0);
}

//----- (021D5668) --------------------------------------------------------
int __fastcall Function_21d5668(int a1)
{
  int v1;
  int v2;
  int v3;
  uint v4;
  int v5;
  int result;
  uint v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v1 = a1;
  v7 = 27;
  v11 = a1 + 828;
  v2 = 0;
  v8 = 0;
  v3 = a1;
  v4 = 28;
  v12 = a1 + 844;
  do
  {
    switch ( (uchar)*(uint *)(v1 + 924) )
    {
      case 1u:
        if ( !*(uint *)(v3 + 884) )
          ErrorHandler();
        v9 = GetGender(*(uint *)(v3 + 884));
        v10 = Function_2025f8c(*(uint *)(v3 + 884));
        if ( v2 == Function_203608c() )
        {
          Function_2021d6c(*(uint *)(v1 + 572), 2 * v9 + 38);
        }
        else
        {
          Function_21d57e0(v11, v12, v2, v10, v9);
          Function_2021d6c(*(uint *)(v1 + 572), v7);
        }
        Function_2021cac(*(uint *)(v1 + 572), 1);
        *(uint *)(v1 + 924) = 2;
        v8 = 1;
        break;
      case 3u:
        if ( v2 == Function_203608c() )
        {
          v5 = GetGender(*(uint *)(v3 + 884));
          Function_2021d6c(*(uint *)(v1 + 572), 2 * v5 + 39);
        }
        else
        {
          Function_2021d6c(*(uint *)(v1 + 572), v4);
        }
        *(uint *)(v1 + 924) = 0;
        break;
      default:
        break;
    }
    ++v2;
    v1 += 4;
    v3 += 8;
    v4 += 2;
    v7 += 2;
  }
  while ( v2 < 5 );
  result = v8;
  if ( v8 )
    result = Function_2005748(0x64Fu);
  return result;
}

//----- (021D577C) --------------------------------------------------------
int __fastcall Function_21d577c(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int result;

  v2 = a1;
  v3 = a2;
  a1[209] = Function_2006f88(104, 8, a1 + 211, 95);
  v2[210] = Function_20071ec(v3, 7u, v2 + 212, 95);
  v2[205] = Function_2006f50(104, 32, 1, v2 + 207, 95);
  result = Function_20071b4(v3, 9u, 1, v2 + 208, 95);
  v2[206] = result;
  return result;
}

//----- (021D57E0) --------------------------------------------------------
uint __fastcall Function_21d57e0(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = Function_205ca0c(a5, a4);
  v9 = *(uint *)(*(uint *)(v6 + 4) + 12);
  GX_LoadOBJ(
    (int *)(*(uint *)(*(uint *)(v5 + 4) + 20) + 1536 * v8),
    *((ushort *)dword_21D5D9C + v7),
    0x600u);
  return GX_LoadOBJPltt(v9 + 32 * v8, 32 * (v7 + 7), 0x20u);
}

//----- (021D5824) --------------------------------------------------------
uint __fastcall Function_21d5824(int *a1)
{
  int *v1;

  v1 = a1;
  free(a1[209]);
  free(v1[210]);
  free(v1[205]);
  return free(v1[206]);
}

//----- (021D5854) --------------------------------------------------------
int Function_21d5854()
{
  return 1;
}

//----- (021D5858) --------------------------------------------------------
int __fastcall Function_21d5858(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;

  v2 = a1;
  v3 = a2;
  result = Function_203608c();
  if ( !result )
  {
    if ( v3 == -1 )
    {
      Function_2037b58(1);
    }
    else
    {
      v5 = v3 + Function_2035e18();
      if ( v5 > 5 )
        v5 = 5;
      Function_2037b58(v5);
    }
    result = 19025;
    if ( v3 == -1 )
    {
      *(uchar *)(v2 + 19025) = 2;
    }
    else if ( v3 )
    {
      *(uchar *)(v2 + 19025) = 0;
    }
    else
    {
      *(uchar *)(v2 + 19025) = 1;
    }
  }
  return result;
}

//----- (021D58AC) --------------------------------------------------------
int __fastcall Function_21d58ac(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v10;
  char v11;
  int v12;

  v12 = a4;
  v4 = a1;
  v5 = a2;
  v6 = Function_21d548c();
  if ( v6 <= *(uint *)(*(uint *)(v4 + 16) + 44) )
  {
    v7 = 0;
  }
  else
  {
    v11 = 1;
    Function_209bebc(*(uint *)(v4 + 16), 7u, &v11, 1);
    v7 = 1;
  }
  *(uint *)(v4 + 19016) = v7;
  v8 = *(uint *)(v4 + 19012);
  if ( v6 == v8 )
    return 1;
  switch ( (uchar)v8 )
  {
    case 1:
      if ( Function_2035e18() > 1 || (uint)Function_20318ec() > 1 )
        return 1;
      *(uint *)(v4 + 852) = 17;
      Function_21d5858(v4, -1);
      v10 = *(uint *)(v4 + 816);
      if ( v10 )
      {
        Function_2002154(v10, 0x5Fu);
        *(uint *)(v4 + 816) = 0;
      }
      return 2;
    case 2:
    case 3:
    case 4:
      Function_205bea8(0xDu);
      if ( v6 < *(uint *)(v4 + 19012) )
      {
        if ( *(uchar *)(v4 + 19025) )
        {
          if ( *(uchar *)(v4 + 19025) == 1 )
            Function_21d5858(v4, 0);
        }
        else
        {
          Function_21d5858(v4, v5);
        }
        *(uint *)(*(uint *)(v4 + 16) + 44) = Function_2035e18();
      }
      break;
    case 5:
      Function_205bea8(0xCu);
      Function_21d5858(v4, v5);
      break;
    default:
      break;
  }
  *(uint *)(v4 + 19012) = Function_21d548c();
  return 1;
}

//----- (021D59A8) --------------------------------------------------------
void Function_21d59a8()
{
  ;
}

