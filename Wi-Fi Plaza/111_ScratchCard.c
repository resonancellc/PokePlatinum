//----- (021D0D80) --------------------------------------------------------
int __fastcall Function_111_21d0d80(int a1, uint *a2)
{
  int v2;
  uint *v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v2 = a1;
  v3 = a2;
  Function_21d1d30();
  Function_2017fc8(3, 115, 294912);
  v4 = MallocSomeDataAndStorePtrInOverlayData1c(v2, 39428, 0x73u);
  Call_FillMemWithValue((int *)v4, 0, 0x9A04u);
  *(uint *)(v4 + 88) = Function_2018340(0x73u);
  *(uint *)v4 = v2;
  v5 = LoadPtrToOverWorldDataIn18(v2);
  *(uint *)(v4 + 360) = *(uint *)v5;
  *(uchar *)(v4 + 9) = *(uchar *)(v5 + 4);
  *(uint *)(v4 + 884) = v5 + 20;
  *(uint *)(v4 + 356) = LoadPlayerDataAdress(*(uint *)(v4 + 360));
  *(uint *)(v4 + 888) = v5 + 8;
  *(uint *)(v4 + 892) = v5 + 14;
  Function_21d27bc(v4);
  v6 = 0;
  v7 = 0;
  do
  {
    ++v6;
    *(ushort *)(*(uint *)(v4 + 888) + v7) = 0;
    *(ushort *)(*(uint *)(v4 + 892) + v7) = 0;
    v7 += 2;
  }
  while ( v6 < 3 );
  *(uchar *)(v4 + 933) = 0;
  Function_21d1d68(v4);
  *v3 = 0;
  Function_2004550(0x44u, 0);
  return 1;
}

//----- (021D0E34) --------------------------------------------------------
int __fastcall Function_111_21d0e34(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int result;

  v2 = a2;
  v3 = LoadOverlayData1c(a1);
  switch ( (uchar)*v2 )
  {
    case 0u:
      if ( Function_21d0f7c() == 1 )
        Function_21d26e4(v3, v2, 1);
      goto LABEL_22;
    case 1u:
      if ( Function_21d0fc8() == 1 )
        Function_21d26e4(v3, v2, 2);
      goto LABEL_22;
    case 2u:
      if ( Function_21d10b8() == 1 )
        Function_21d26e4(v3, v2, 3);
      goto LABEL_22;
    case 3u:
      if ( Function_21d116c() == 1 )
      {
        if ( *(uchar *)(v3 + 14) < 3u )
        {
          Function_21d26e4(v3, v2, 1);
        }
        else
        {
          *(uchar *)(v3 + 14) = 0;
          Function_21d1bec(v3);
          Function_21d1af4(v3);
          Function_21d1b44(v3);
          Function_21d26e4(v3, v2, 4);
        }
      }
      goto LABEL_22;
    case 4u:
      if ( Function_21d1284() == 1 )
        Function_21d26e4(v3, v2, 5);
      goto LABEL_22;
    case 5u:
      if ( Function_21d1508() == 1 )
      {
        if ( *(uchar *)(v3 + 14) < 3u )
          Function_21d26e4(v3, v2, 6);
        else
          Function_21d26e4(v3, v2, 7);
      }
      goto LABEL_22;
    case 6u:
      if ( Function_21d1980() == 1 )
        Function_21d26e4(v3, v2, 4);
      goto LABEL_22;
    case 7u:
      if ( Function_21d1a88() != 1 )
        goto LABEL_22;
      result = 1;
      break;
    default:
LABEL_22:
      Function_20219f8(*(uint *)(v3 + 364));
      result = 0;
      break;
  }
  return result;
}

//----- (021D0F40) --------------------------------------------------------
int __fastcall Function_111_21d0f40(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  Function_201e530();
  **(ushort **)(v2 + 884) = *(uchar *)(v2 + 12);
  Function_201dc3c();
  Function_21d1c0c(v2);
  FreeSomeDataAndStore0InOverlayData1c(v1);
  SetMainLoopFunctionCall(0, 0);
  Function_201807c(115);
  return 1;
}

//----- (021D0F7C) --------------------------------------------------------
int __fastcall Function_21d0f7c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 8);
  if ( v2 )
  {
    if ( v2 == 1 && Function_200f2ac() == 1 )
    {
      *(uchar *)(v1 + 14) = 0;
      return 1;
    }
  }
  else
  {
    Function_200f174(0, 1, 1, 0, 6, 3, 115);
    ++*(uchar *)(v1 + 8);
  }
  return 0;
}

//----- (021D0FC8) --------------------------------------------------------
int __fastcall Function_21d0fc8(int a1)
{
  int v1;
  int v2;
  short *v3;
  int v4;
  int v5;
  uint v6;

  v1 = a1;
  v2 = *(uchar *)(a1 + 8);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      *(ushort *)(v1 + 16) += 32;
      Function_21d3474(
        *(uint *)(v1 + 4 * *(short *)(v1 + 18) + 812),
        *(short *)(v1 + 16) + word_21D362C[2 * *(short *)(v1 + 18)],
        word_21D362E[2 * *(short *)(v1 + 18)]);
      if ( *(short *)(v1 + 16) >= 0 )
      {
        if ( *(ushort *)(v1 + 18) )
        {
          Function_2005748(0x54Fu);
          --*(ushort *)(v1 + 18);
          *(ushort *)(v1 + 16) = -256;
        }
        else
        {
          *(uchar *)(v1 + 8) = 2;
        }
      }
    }
    else if ( v2 == 2 )
    {
      *(ushort *)(v1 + 16) = 0;
      return 1;
    }
  }
  else
  {
    v3 = word_21D362C;
    *(ushort *)(v1 + 16) = -256;
    v4 = 0;
    v5 = v1;
    do
    {
      Function_21d3474(*(uint *)(v5 + 812), *(short *)(v1 + 16) + *v3, v3[1]);
      Function_21d3468(*(uint *)(v5 + 812), v4++ + 20);
      v3 += 2;
      v5 += 4;
    }
    while ( v4 < 4 );
    v6 = Function_2027b50(*(ushort **)(v1 + 356));
    Function_21d35c0(v1 + 332, v6);
    Function_21d24d4(v1);
    Function_201ff74(1u, 1);
    *(ushort *)(v1 + 18) = 3;
    Function_2005748(0x54Fu);
    *(uchar *)(v1 + 8) = 1;
  }
  return 0;
}

//----- (021D10B8) --------------------------------------------------------
int __fastcall Function_21d10b8(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  char v8;
  char v9;
  int v10;

  v10 = a4;
  v4 = a1;
  v5 = *(uchar *)(a1 + 8);
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      if ( *(uchar *)(v4 + 15) )
      {
        --*(uchar *)(v4 + 15);
      }
      else
      {
        Function_201ff0c(4u, 0);
        Function_21d345c(*(uint *)(v4 + 832), 0);
      }
      v6 = Function_2022644((uchar *)dword_21D364C);
      if ( v6 != -1 )
      {
        Function_201ff0c(4u, 0);
        Function_21d345c(*(uint *)(v4 + 832), 0);
        Function_2005748(0x5E4u);
        *(uchar *)(v4 + (uchar)(*(uchar *)(v4 + 14))++ + 21) = v6;
        Function_20227a4(&v9, &v8);
        Function_200e084(v4 + 332, 0);
        Function_201ff74(1u, 0);
        *(uchar *)(v4 + 8) = 2;
      }
    }
    else if ( v5 == 2 )
    {
      return 1;
    }
  }
  else
  {
    Function_201ff0c(4u, 1);
    *(uchar *)(v4 + 15) = 30;
    *(uchar *)(v4 + 8) = 1;
  }
  return 0;
}

//----- (021D116C) --------------------------------------------------------
int __fastcall Function_21d116c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int result;
  int v9;
  int v10;
  int v11;

  v11 = a4;
  v4 = a1;
  v5 = *(uchar *)(a1 + *(uchar *)(a1 + 14) - 1 + 21);
  switch ( *(uchar *)(a1 + 8) )
  {
    case 0:
      *(uint *)(a1 + 28) = 4096;
      *(uint *)(a1 + 32) = 4096;
      *(uint *)(a1 + 36) = 4096;
      *(ushort *)(a1 + 16) = 0;
      *(uchar *)(a1 + 936) &= 1u;
      Function_21d3468(*(uint *)(a1 + 4 * v5 + 812), 0);
      *(uchar *)(v4 + 8) = 1;
      goto LABEL_10;
    case 1:
      Function_21d2868();
      *(uint *)(v4 + 28) += 256;
      *(uint *)(v4 + 32) += 256;
      *(uint *)(v4 + 36) += 256;
      ++*(ushort *)(v4 + 16);
      Function_21d34f4(*(uint *)(v4 + 4 * v5 + 812), v4 + 28);
      if ( *(uint *)(v4 + 28) == 6144 )
      {
        *(ushort *)(v4 + 16) = 0;
        *(uint *)(v4 + 28) = 4096;
        *(uint *)(v4 + 32) = 4096;
        *(uint *)(v4 + 36) = 4096;
        Function_2005748(0x54Fu);
        *(uchar *)(v4 + 8) = 2;
      }
      goto LABEL_10;
    case 2:
      v6 = 0;
      v7 = a1;
      *(ushort *)(a1 + 16) += 16;
      do
      {
        Function_21d349c(*(uint *)(v7 + 812), &v10, &v9);
        Function_21d3474(*(uint *)(v7 + 812), v10 + 16, v9);
        ++v6;
        v7 += 4;
      }
      while ( v6 < 4 );
      if ( *(short *)(v4 + 16) >= 256 )
      {
        Function_21d34e0(*(uint *)(v4 + 4 * v5 + 812), 0);
        *(uchar *)(v4 + 8) = 3;
      }
      goto LABEL_10;
    case 3:
      *(ushort *)(a1 + 16) = 0;
      result = 1;
      break;
    default:
LABEL_10:
      result = 0;
      break;
  }
  return result;
}

//----- (021D1284) --------------------------------------------------------
int __fastcall Function_21d1284(int a1)
{
  int v1;
  uint v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  short *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  short *v16;
  int v17;
  int v18;
  int result;

  v1 = a1;
  v2 = *(uchar *)(a1 + 8);
  if ( v2 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_21D129C + v2) + 35459742);
  switch ( (uchar)v2 )
  {
    case 0:
      Function_21d2eb4();
      Function_201958c(*(uint **)(v1 + 88), 0, *(int **)(v1 + 916), *(uint *)(*(uint *)(v1 + 912) + 16), 0);
      Function_2019448(*(uint **)(v1 + 88), 0);
      *(ushort *)(v1 + 18) = 256;
      Function_2019184(*(uint *)(v1 + 88), 6u, 0, *(short *)(v1 + 18));
      Function_2019184(*(uint *)(v1 + 88), 0, 0, *(short *)(v1 + 18));
      Function_2019184(*(uint *)(v1 + 88), 1u, 0, *(short *)(v1 + 18));
      Function_201ff0c(1u, 1);
      Function_201ff0c(2u, 1);
      Function_201ff74(4u, 1);
      *(ushort *)(v1 + 16) = -256;
      v3 = 0;
      *(uchar *)(v1 + *(uchar *)(v1 + 14) + 25) = 0;
      do
      {
        v4 = v1 + v3++;
        *(uchar *)(v4 + 1026) = 0;
      }
      while ( v3 < 38400 );
      *(uchar *)(v1 + 937) = 0;
      Function_21d27bc(v1);
      Function_21d27ac(v1, *(uchar *)(v1 + *(uchar *)(v1 + 14) + 25));
      Function_21d27d4(v1, *(uchar *)(v1 + *(uchar *)(v1 + 14) + 25));
      Function_21d2940(v1);
      Function_21d295c(v1);
      *(uchar *)(v1 + 8) = 1;
      goto LABEL_22;
    case 1:
      v5 = 0;
      v6 = 26;
      v7 = a1;
      do
      {
        Function_21d3474(*(uint *)(v7 + 760), *(short *)(v1 + 16) + 60, v6);
        Function_21d345c(*(uint *)(v7 + 760), 1);
        ++v5;
        v6 += 42;
        v7 += 4;
      }
      while ( v5 < 4 );
      v8 = 0;
      v9 = v1;
      do
      {
        Function_21d3500(*(uint *)(v9 + 836), 1);
        ++v8;
        v9 += 4;
      }
      while ( v8 < 3 );
      v10 = 0;
      *(uchar *)(v1 + 933) = 0;
      v11 = &word_21D3770;
      *(uchar *)(v1 + 936) &= 0xFEu;
      *(uchar *)(v1 + 938) = -79;
      *(uchar *)(v1 + 939) = -78;
      *(uchar *)(v1 + 940) = -77;
      v12 = v1;
      do
      {
        Function_21d3474(*(uint *)(v12 + 776), *(short *)(v1 + 16) + *v11, v11[1]);
        Function_21d345c(*(uint *)(v12 + 776), 1);
        Function_21d34c4(*(uint *)(v12 + 776), *(uchar *)(v1 + v10++ + 864));
        v11 += 2;
        v12 += 4;
      }
      while ( v10 < 9 );
      Function_21d28e8(v1, 1, (*(uchar *)(v1 + *(uchar *)(v1 + 14) + 21) + 4) & 0xFF, 32, 24);
      Function_21d28e8(v1, 6, (*(uchar *)(v1 + *(uchar *)(v1 + 14) + 21) + 1) & 0xFF, 32, 24);
      Function_2005748(0x54Fu);
      *(uchar *)(v1 + 8) = 2;
      goto LABEL_22;
    case 2:
      Function_2019184(*(uint *)(a1 + 88), 6u, 0, *(short *)(a1 + 18));
      Function_2019184(*(uint *)(v1 + 88), 0, 0, *(short *)(v1 + 18));
      Function_2019184(*(uint *)(v1 + 88), 1u, 0, *(short *)(v1 + 18));
      *(ushort *)(v1 + 18) -= 16;
      if ( *(short *)(v1 + 16) < 0 )
      {
        v13 = 0;
        v14 = 26;
        v15 = v1;
        do
        {
          Function_21d3474(*(uint *)(v15 + 760), *(short *)(v1 + 16) + 60, v14);
          ++v13;
          v14 += 42;
          v15 += 4;
        }
        while ( v13 < 4 );
        v16 = &word_21D3770;
        v17 = 0;
        v18 = v1;
        do
        {
          Function_21d3474(*(uint *)(v18 + 776), *(short *)(v1 + 16) + *v16, v16[1]);
          ++v17;
          v16 += 2;
          v18 += 4;
        }
        while ( v17 < 9 );
      }
      else
      {
        *(uchar *)(v1 + 8) = 3;
      }
      *(ushort *)(v1 + 16) += 16;
      goto LABEL_22;
    case 3:
      *(ushort *)(a1 + 16) = 0;
      *(ushort *)(a1 + 18) = 0;
      result = 1;
      break;
    default:
LABEL_22:
      result = 0;
      break;
  }
  return result;
}

//----- (021D1508) --------------------------------------------------------
int __fastcall Function_21d1508(int a1)
{
  int v1;
  uint v2;
  int v3;
  char v4;
  int v5;
  short v6;
  char v7;
  int result;
  int v9;
  int v10;
  char v11;
  char v12;
  int v13;
  int v14;

  v1 = a1;
  v2 = *(uchar *)(a1 + 8);
  if ( v2 <= 0xB )
    JUMPOUT(__CS__, *((short *)&off_21D1520 + v2) + 35460386);
  switch ( (uchar)v2 )
  {
    case 0:
      if ( *(uchar *)(a1 + 14) == 2 )
      {
        Function_201acf4(a1 + 300);
        Function_21d263c(v1);
        Function_21d3474(*(uint *)(v1 + 828), 88, 160);
        Function_21d34c4(*(uint *)(v1 + 828), 0);
      }
      else
      {
        Function_201acf4(a1 + 316);
        Function_21d2604(v1);
      }
      *(uchar *)(v1 + 15) = 30;
      Function_21d345c(*(uint *)(v1 + 832), 1);
      Function_21d2518(v1);
      v3 = 0;
      do
        Function_21d2674(v1, (uchar)v3++);
      while ( v3 < 4 );
      Function_21d345c(*(uint *)(v1 + 828), 1);
      Function_21d350c(*(uint *)(v1 + 828), 0);
      Function_2005748(0x551u);
      *(uchar *)(v1 + 8) = 1;
      goto LABEL_67;
    case 1:
      Function_201ff0c(4u, 1);
      Function_201ff74(1u, 1);
      *(uchar *)(v1 + 8) = 2;
      goto LABEL_67;
    case 2:
      v4 = *(uchar *)(a1 + 15);
      if ( *(uchar *)(v1 + 15) )
      {
        *(uchar *)(v1 + 15) = v4 - 1;
      }
      else
      {
        Function_21d345c(*(uint *)(v1 + 832), 0);
        Function_201ada4_ClearTextBox(v1 + 252, 0);
        Function_201a9a4(v1 + 252);
        *(uchar *)(v1 + 8) = 3;
      }
      goto LABEL_67;
    case 3:
      Function_201e564((ushort *)(a1 + 960), 4u, 2u);
      v5 = Function_2022644((uchar *)dword_21D3794);
      if ( v5 == -1 )
      {
        Function_20057a4(1358, 0);
      }
      else
      {
        if ( (uint)Function_21d2918(v1) < 3 )
          *(uchar *)(v1 + v5 + 924) = 1;
        if ( *(uchar *)(v1 + v5 + 924) == 1 )
        {
          Function_21d29d8(v1);
          Function_21d2a68(v1, (uchar)v5);
          Function_21d297c(v1, v5);
          if ( !Function_20057d4(0x54Eu) )
            Function_2005748(0x54Eu);
        }
        if ( Function_21d2bbc(v1) == 1 )
        {
          Function_20057a4(1358, 0);
          Function_21d345c(*(uint *)(v1 + 832), 1);
          *(ushort *)(*(uint *)(v1 + 888) + 2 * *(uchar *)(v1 + 14)) = *(ushort *)(v1
                                                                                           + 2
                                                                                           * *(uchar *)(v1 + 935)
                                                                                           + 874);
          if ( *(ushort *)(v1 + 2 * *(uchar *)(v1 + 935) + 874) == 92 )
            v6 = 1;
          else
            v6 = 3;
          *(ushort *)(*(uint *)(v1 + 892) + 2 * *(uchar *)(v1 + 14)) = v6;
          if ( Function_21d2d14(v1) == 1 )
            v7 = 30;
          else
            v7 = 0;
          *(uchar *)(v1 + 15) = v7;
          Function_21d255c(v1);
          *(uchar *)(v1 + 8) = 4;
          return 0;
        }
        if ( *(uchar *)(v1 + 937) >= 3u )
        {
          Function_20057a4(1358, 0);
          *(uchar *)(v1 + 15) = 60;
          Function_21d345c(*(uint *)(v1 + 832), 1);
          Function_21d25bc(v1);
          *(uchar *)(v1 + 8) = 7;
          return 0;
        }
      }
      if ( (*(uchar *)(v1 + 936) & 1) == 1 )
        Function_21d2b20(v1);
      if ( *(uchar *)(v1 + 14) == 2 )
      {
        if ( Function_2022664((uchar *)dword_21D3610) != -1 )
        {
          Function_21d350c(*(uint *)(v1 + 828), 1);
          Function_21d2494(v1);
          Function_2005748(0x5E4u);
          Function_21d34c4(*(uint *)(v1 + 828), 0);
          Function_21d1f70(v1);
          Function_21d1f84(v1);
          *(uchar *)(v1 + 8) = 10;
        }
      }
      else if ( Function_2022664((uchar *)dword_21D3618) != -1 )
      {
        Function_21d350c(*(uint *)(v1 + 828), 1);
        Function_21d2494(v1);
        Function_2005748(0x5E4u);
        Function_21d34c4(*(uint *)(v1 + 828), 1);
        Function_21d1f70(v1);
        Function_21d1f84(v1);
        *(uchar *)(v1 + 8) = 9;
      }
      goto LABEL_67;
    case 4:
      if ( *(uchar *)(a1 + 15) )
      {
        --*(uchar *)(a1 + 15);
      }
      else if ( !Function_21d2d60() )
      {
        *(uchar *)(v1 + 8) = 5;
      }
      goto LABEL_67;
    case 5:
      if ( !Function_21d2d60() )
      {
        *(uchar *)(v1 + 15) = 0;
        *(uchar *)(v1 + 8) = 6;
      }
      goto LABEL_67;
    case 6:
      if ( Function_21d353c(*(uint *)(a1 + 860)) == 1 )
        goto LABEL_67;
      if ( *(uchar *)(v1 + 15) )
      {
        --*(uchar *)(v1 + 15);
        goto LABEL_67;
      }
      v9 = 0;
      v10 = v1;
      do
      {
        Function_21d345c(*(uint *)(v10 + 848), 0);
        ++v9;
        v10 += 4;
      }
      while ( v9 < 3 );
      Function_21d345c(*(uint *)(v1 + 860), 0);
      Function_21d2e20(v1);
      Function_21d2e28(v1);
      return 1;
    case 7:
      v11 = *(uchar *)(a1 + 15);
      if ( *(uchar *)(v1 + 15) )
      {
        *(uchar *)(v1 + 15) = v11 - 1;
      }
      else
      {
        Function_201ff0c(1u, 0);
        Function_21d2e20(v1);
        Function_21d2e28(v1);
        *(uchar *)(v1 + 15) = 30;
        *(uchar *)(v1 + 8) = 8;
      }
      goto LABEL_67;
    case 8:
      v12 = *(uchar *)(a1 + 15);
      if ( !*(uchar *)(v1 + 15) )
        return 1;
      *(uchar *)(v1 + 15) = v12 - 1;
      goto LABEL_67;
    case 9:
      v13 = Function_20159c0(*(uint *)(a1 + 920));
      if ( v13 == 1 )
      {
        Function_21d350c(*(uint *)(v1 + 828), 0);
        Function_200dc9c(v1 + 92, 0);
        Function_201acf4(v1 + 92);
        Function_21d2e20(v1);
        Function_21d1fb4(v1);
        return 1;
      }
      if ( v13 == 2 )
      {
        Function_21d350c(*(uint *)(v1 + 828), 0);
        Function_200dc9c(v1 + 92, 0);
        Function_201acf4(v1 + 92);
        Function_21d1fb4(v1);
        *(uchar *)(v1 + 8) = 11;
      }
      goto LABEL_67;
    case 0xA:
      v14 = Function_20159c0(*(uint *)(a1 + 920));
      if ( v14 == 1 )
      {
        Function_21d350c(*(uint *)(v1 + 828), 0);
        Function_200dc9c(v1 + 92, 0);
        Function_201acf4(v1 + 92);
        Function_21d2e18(v1);
        Function_21d1fb4(v1);
        result = 1;
      }
      else
      {
        if ( v14 == 2 )
        {
          Function_21d350c(*(uint *)(v1 + 828), 0);
          Function_200dc9c(v1 + 92, 0);
          Function_201acf4(v1 + 92);
          Function_21d1fb4(v1);
          *(uchar *)(v1 + 8) = 11;
        }
LABEL_67:
        result = 0;
      }
      return result;
    case 0xB:
      if ( !Function_202278c() )
        *(uchar *)(v1 + 8) = 3;
      goto LABEL_67;
    default:
      goto LABEL_67;
  }
}

//----- (021D1980) --------------------------------------------------------
int __fastcall Function_21d1980(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  short *v8;
  int v9;
  int v10;

  v1 = a1;
  v2 = *(uchar *)(a1 + 8);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      Function_2019184(*(uint *)(v1 + 88), 6u, 0, *(short *)(v1 + 18));
      Function_2019184(*(uint *)(v1 + 88), 0, 0, *(short *)(v1 + 18));
      Function_2019184(*(uint *)(v1 + 88), 1u, 0, *(short *)(v1 + 18));
      *(ushort *)(v1 + 18) -= 16;
      if ( *(short *)(v1 + 16) < 256 )
      {
        v3 = 0;
        v4 = 26;
        v5 = v1;
        do
        {
          Function_21d3474(*(uint *)(v5 + 760), *(short *)(v1 + 16) + 60, v4);
          ++v3;
          v4 += 42;
          v5 += 4;
        }
        while ( v3 < 4 );
        v6 = 0;
        v7 = v1;
        do
        {
          Function_21d345c(*(uint *)(v7 + 836), 0);
          ++v6;
          v7 += 4;
        }
        while ( v6 < 3 );
        v8 = &word_21D3770;
        v9 = 0;
        v10 = v1;
        do
        {
          Function_21d3474(*(uint *)(v10 + 776), *(short *)(v1 + 16) + *v8, v8[1]);
          ++v9;
          v8 += 2;
          v10 += 4;
        }
        while ( v9 < 9 );
      }
      else
      {
        *(uchar *)(v1 + 8) = 2;
      }
      *(ushort *)(v1 + 16) += 16;
    }
    else if ( v2 == 2 )
    {
      *(ushort *)(v1 + 16) = 0;
      *(ushort *)(v1 + 18) = 0;
      return 1;
    }
  }
  else
  {
    Function_201ff0c(4u, 0);
    Function_201ff74(1u, 0);
    Function_21d345c(*(uint *)(v1 + 828), 0);
    *(ushort *)(v1 + 16) = 0;
    *(ushort *)(v1 + 18) = 0;
    Function_2005748(0x54Fu);
    *(uchar *)(v1 + 8) = 1;
  }
  return 0;
}

//----- (021D1A88) --------------------------------------------------------
int __fastcall Function_21d1a88(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 8);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      if ( !--*(uchar *)(v1 + 13) )
      {
        Function_200e084(v1 + 92, 0);
        Function_200f174(0, 0, 0, 0, 6, 1, 115);
        ++*(uchar *)(v1 + 8);
      }
    }
    else if ( v2 == 2 && Function_200f2ac() == 1 )
    {
      return 1;
    }
  }
  else
  {
    *(uchar *)(v1 + 13) = 10;
    ++*(uchar *)(v1 + 8);
  }
  return 0;
}

//----- (021D1AF4) --------------------------------------------------------
int __fastcall Function_21d1af4(int a1)
{
  int v1;
  short *v2;
  int v3;
  int v4;
  int result;

  v1 = a1;
  v2 = &word_21D3770;
  v3 = 0;
  v4 = a1 + 364;
  do
  {
    *(uint *)(v1 + 836) = Function_21d33f4(v4, 3, 2, (ushort)*v2, (ushort)v2[1], 0, 2, 11);
    result = Function_21d345c(*(uint *)(v1 + 836), 0);
    ++v3;
    v2 += 2;
    v1 += 4;
  }
  while ( v3 < 3 );
  return result;
}

//----- (021D1B44) --------------------------------------------------------
int __fastcall Function_21d1b44(int a1)
{
  int v1;
  const short *v2;
  int v3;
  int v4;
  int result;

  v1 = a1;
  v2 = a4dld;
  v3 = 0;
  v4 = a1 + 364;
  do
  {
    *(uint *)(v1 + 848) = Function_21d33f4(v4, 1, 0, *(ushort *)v2, *((ushort *)v2 + 1), 0, 0, 0);
    result = Function_21d345c(*(uint *)(v1 + 848), 0);
    ++v3;
    v2 += 2;
    v1 += 4;
  }
  while ( v3 < 3 );
  return result;
}

//----- (021D1B90) --------------------------------------------------------
int __fastcall Function_21d1b90(int a1)
{
  int v1;

  v1 = a1;
  *(uint *)(a1 + 828) = Function_21d33f4(a1 + 364, 3, 1, 68, 160, 0, 1, 0);
  Function_21d345c(*(uint *)(v1 + 828), 0);
  *(uint *)(v1 + 832) = Function_21d33f4(v1 + 364, 3, 3, 68, 68, 0, 1, 0);
  return Function_21d345c(*(uint *)(v1 + 832), 0);
}

//----- (021D1BEC) --------------------------------------------------------
int __fastcall Function_21d1bec(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = 0;
  do
  {
    result = *(uint *)(v1 + 812);
    if ( result )
      result = Function_21d3448();
    ++v2;
    v1 += 4;
  }
  while ( v2 < 4 );
  return result;
}

//----- (021D1C0C) --------------------------------------------------------
uint __fastcall Function_21d1c0c(int a1)
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

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    if ( *(uint *)(v3 + 760) )
      Function_21d3448();
    ++v2;
    v3 += 4;
  }
  while ( v2 < 4 );
  v4 = 0;
  v5 = v1;
  do
  {
    if ( *(uint *)(v5 + 776) )
      Function_21d3448();
    ++v4;
    v5 += 4;
  }
  while ( v4 < 9 );
  if ( *(uint *)(v1 + 828) )
    Function_21d3448();
  if ( *(uint *)(v1 + 832) )
    Function_21d3448();
  v6 = 0;
  v7 = v1;
  do
  {
    if ( *(uint *)(v7 + 836) )
      Function_21d3448();
    ++v6;
    v7 += 4;
  }
  while ( v6 < 3 );
  v8 = 0;
  v9 = v1;
  do
  {
    if ( *(uint *)(v9 + 848) )
      Function_21d3448();
    ++v8;
    v9 += 4;
  }
  while ( v8 < 3 );
  if ( *(uint *)(v1 + 860) )
    Function_21d3448();
  Function_2002c60(2);
  Function_2002fa0(*(uint *)(v1 + 348), 2);
  Function_2002fa0(*(uint *)(v1 + 348), 0);
  Call_free1(*(uint *)(v1 + 348));
  *(uint *)(v1 + 348) = 0;
  Function_21d3320(v1 + 364);
  Function_2015760(*(int **)(v1 + 52));
  Function_200b190(*(ushort **)(v1 + 56));
  Function_200b3f0(*(uint **)(v1 + 60), v10);
  Function_20237bc_FreeMsg(*(uint *)(v1 + 64), v11);
  Function_20237bc_FreeMsg(*(uint *)(v1 + 68), v12);
  Function_200c560(*(int **)(v1 + 352));
  free(*(uint *)(v1 + 908));
  free(*(uint *)(v1 + 916));
  Function_21d3578(v1 + 92);
  Function_21d2044(*(uint *)(v1 + 88));
  return Call_FS_CloseFile(*(int **)(v1 + 896));
}

//----- (021D1D30) --------------------------------------------------------
uint Function_21d1d30()
{
  uint result;

  SetMainLoopFunctionCall(0, 0);
  Function_20177bc(0, 0);
  Function_201ff00();
  Function_201ff68();
  REG_DISPCNT &= 0xFFFFE0FF;
  result = REG_DISPCNT_SUB & 0xFFFFE0FF;
  REG_DISPCNT_SUB &= 0xFFFFE0FF;
  return result;
}

//----- (021D1D68) --------------------------------------------------------
int __fastcall Function_21d1d68(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  ushort v6;
  uint *v7;
  short *v8;
  int v9;
  uint *v10;
  short *v11;
  int v12;
  uint *v13;

  v4 = a1;
  a1[224] = LoadFromNARC_8(184, 0x73u, a3, a4);
  Function_21d1fc4(v4);
  Function_21d2034(v4);
  v4[14] = LoadFromMsgNARC(1, 26, 540, 0x73u);
  v4[15] = Function_200b358(0x73u);
  v4[16] = Function_2023790(600, 0x73u);
  v4[17] = Function_2023790(600, 0x73u);
  LoadFromNARC_PlFont1(0, 416, 115);
  LoadFromNARC_PlFont1(4u, 416, 115);
  LoadFromNARC_PlFont2(0, 384, 115);
  LoadFromNARC_PlFont2(4u, 384, 115);
  Function_2002bb8(2, 0x73u);
  v4[88] = Function_200c440(15, 14, 0, 0x73u);
  Function_21d3548(v4[22], v4 + 23);
  v4[13] = Function_201567c(0, 1, 12, 0x73u);
  Function_21d2e4c(v4);
  Function_21d2e8c(v4);
  Function_21d2eb4(v4);
  Function_201ffd0();
  v5 = 0;
  v6 = 26;
  v7 = v4;
  do
  {
    v7[190] = Function_21d33f4(v4 + 91, 0, v5, 60, v6, 1, 0, 0);
    Function_21d345c(v7[190], 0);
    ++v5;
    v6 += 42;
    ++v7;
  }
  while ( v5 < 4 );
  v8 = &word_21D3770;
  v9 = 0;
  v10 = v4;
  do
  {
    v10[194] = Function_21d33f4(v4 + 91, 1, 0, (ushort)*v8, (ushort)v8[1], 0, 2, 10);
    Function_21d345c(v10[194], 0);
    ++v9;
    v8 += 2;
    ++v10;
  }
  while ( v9 < 9 );
  Function_21d1b90((int)v4);
  v11 = word_21D362C;
  v12 = 0;
  v13 = v4;
  do
  {
    v13[203] = Function_21d33f4(v4 + 91, 2, v12, (ushort)*v11, (ushort)v11[1], 0, 1, 0);
    Function_21d3474(v13[203], *v11 - 256, v11[1]);
    Function_21d3468(v13[203], v12++ + 20);
    v11 += 2;
    ++v13;
  }
  while ( v12 < 4 );
  v4[215] = Function_21d33f4(v4 + 91, 4, 0, 38, 56, 0, 0, 10);
  Function_21d345c(v4[215], 0);
  REG_POWERCNT &= 0x7FFFu;
  Function_201e3d8();
  Function_201e450(1u);
  return SetMainLoopFunctionCall((int)Function_21d2090, (int)v4);
}

//----- (021D1F70) --------------------------------------------------------
int *__fastcall Function_21d1f70(int a1)
{
  int v1;
  int *result;

  v1 = a1;
  result = Function_2015920(0x73u);
  *(uint *)(v1 + 920) = result;
  return result;
}

//----- (021D1F84) --------------------------------------------------------
int __fastcall Function_21d1f84(int a1)
{
  int v2;
  int v3;
  int v4;
  int v5;
  char v6;
  char v7;

  v2 = *(uint *)(a1 + 88);
  v3 = 2;
  v4 = 896;
  v5 = 10;
  v6 = 24;
  v7 = 8;
  return Function_2015958(*(uint *)(a1 + 920), (int)&v2);
}

//----- (021D1FB4) --------------------------------------------------------
uint __fastcall Function_21d1fb4(int a1)
{
  return Function_2015938(*(uint *)(a1 + 920));
}

//----- (021D1FC4) --------------------------------------------------------
uint __fastcall Function_21d1fc4(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  Function_21d20cc();
  Function_21d20ec(*(uint *)(v1 + 88));
  *(uint *)(v1 + 348) = MallocFill120(0x73u);
  Function_2002f70(*(uint *)(v1 + 348), 2, 512, 0x73u);
  Function_2002f70(*(uint *)(v1 + 348), 0, 512, 0x73u);
  v2 = Function_21d2248(v1, 7);
  Function_21d22d0(v2);
  Function_21d228c(v1, 6);
  v3 = Function_21d233c(v1, 1);
  Function_21d2304(v3);
  Function_21d2380(v1, 0);
  Function_201ff0c(4u, 0);
  return Function_201ff74(1u, 0);
}

//----- (021D2034) --------------------------------------------------------
int __fastcall Function_21d2034(int a1)
{
  return Function_21d2f80(a1 + 364);
}

//----- (021D2044) --------------------------------------------------------
uint __fastcall Function_21d2044(int a1)
{
  int v1;

  v1 = a1;
  Function_201ff0c(0x1Fu, 0);
  Function_201ff74(0x1Fu, 0);
  Function_2019044(v1, 7);
  Function_2019044(v1, 6);
  Function_2019044(v1, 4);
  Function_2019044(v1, 1);
  Function_2019044(v1, 0);
  Function_2019044(v1, 2);
  return free(v1);
}

//----- (021D2090) --------------------------------------------------------
int __fastcall Function_21d2090(int a1)
{
  int v1;
  int result;
  int v3;

  v1 = a1;
  result = *(uint *)(a1 + 4);
  if ( !result )
  {
    v3 = *(uint *)(v1 + 348);
    if ( v3 )
      Function_2003694(v3);
    Function_201c2b8(*(uint *)(v1 + 88));
    Function_201dcac();
    Function_200a858();
    result = dword_27E3FF8 | 1;
    dword_27E3FF8 |= 1u;
  }
  return result;
}

//----- (021D20CC) --------------------------------------------------------
char *Function_21d20cc()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_21D37BC;
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

//----- (021D20EC) --------------------------------------------------------
uint __fastcall Function_21d20ec(uint *a1, int a2, int a3, int a4)
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

  v52 = a4;
  v4 = a1;
  v48 = 1;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  SetGraphicsModes(&v48);
  v41 = 0;
  v42 = 0;
  v43 = 4096;
  v44 = 0;
  v45 = 16777217;
  v46 = 0;
  v47 = 0;
  Function_20183c4(v4, 4u, &v41, 0);
  Function_2019690(4u, 32, 0, 0x73u);
  Function_2019ebc(v4, 4u);
  v34 = 0;
  v35 = 0;
  v36 = 4096;
  v37 = 0;
  v38 = 50462721;
  v39 = 768;
  v40 = 0;
  Function_20183c4(v4, 7u, &v34, 0);
  Function_2019ebc(v4, 7u);
  v27 = 0;
  v28 = 0;
  v29 = 4096;
  v30 = 0;
  v31 = 84279299;
  v32 = 512;
  v33 = 0;
  Function_20183c4(v4, 6u, &v27, 0);
  Function_2019ebc(v4, 6u);
  v20 = 0;
  v21 = 0;
  v22 = 4096;
  v23 = 0;
  v24 = 16777219;
  v25 = 512;
  v26 = 0;
  Function_20183c4(v4, 1u, &v20, 0);
  Function_2019ebc(v4, 1u);
  v13 = 0;
  v14 = 0;
  v15 = 4096;
  v16 = 0;
  v17 = 50462723;
  v18 = 256;
  v19 = 0;
  Function_20183c4(v4, 0, &v13, 0);
  Function_2019ebc(v4, 0);
  v6 = 0;
  v7 = 0;
  v8 = 2048;
  v9 = 0;
  v10 = 84148225;
  v11 = 0;
  v12 = 0;
  Function_20183c4(v4, 2u, &v6, 0);
  Function_2019690(2u, 32, 0, 0x73u);
  Function_2019ebc(v4, 2u);
  Function_201ff0c(1u, 0);
  Function_201ff0c(2u, 0);
  return Function_201ff74(4u, 0);
}

//----- (021D2248) --------------------------------------------------------
int __fastcall Function_21d2248(int a1, uchar a2)
{
  int v2;
  uchar v3;

  v2 = a1;
  v3 = a2;
  Function_20070e8(*(uint *)(a1 + 896), 0x23u, *(uint **)(a1 + 88), a2, 0, 0, 0, 115);
  return Function_200710c(*(uint *)(v2 + 896), 0x25u, *(uint **)(v2 + 88), v3, 0, 0, 0, 115);
}

//----- (021D228C) --------------------------------------------------------
int __fastcall Function_21d228c(int a1, uchar a2)
{
  int v2;
  uchar v3;

  v2 = a1;
  v3 = a2;
  Function_20070e8(*(uint *)(v2 + 896), 0x26u, *(uint **)(v2 + 88), a2, 0, 0, 0, 115);
  return Function_200710c(*(uint *)(v2 + 896), 0x28u, *(uint **)(v2 + 88), v3, 0, 0, 0, 115);
}

//----- (021D22D0) --------------------------------------------------------
uint __fastcall Function_21d22d0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v6;
  int v7;

  v7 = a4;
  v4 = Function_2006f88(184, 34, &v6, 115);
  DC_FlushRange(*(uint *)(v6 + 12), 160);
  GXS_LoadBGPltt(*(uint *)(v6 + 12), 0, 0xA0u);
  return free(v4);
}

//----- (021D2304) --------------------------------------------------------
uint __fastcall Function_21d2304(int a1, int a2, int a3, int a4)
{
  int v4;
  int v6;
  int v7;

  v7 = a4;
  v4 = Function_2006f88(184, 0, &v6, 115);
  DC_FlushRange(*(uint *)(v6 + 12), 288);
  GX_LoadBGPltt(*(uint *)(v6 + 12), 0, 0x140u);
  return free(v4);
}

//----- (021D233C) --------------------------------------------------------
int __fastcall Function_21d233c(int a1, uchar a2)
{
  int v2;
  uchar v3;

  v2 = a1;
  v3 = a2;
  Function_20070e8(*(uint *)(a1 + 896), 4u, *(uint **)(a1 + 88), a2, 0, 0, 0, 115);
  return Function_200710c(*(uint *)(v2 + 896), 6u, *(uint **)(v2 + 88), v3, 0, 0, 0, 115);
}

//----- (021D2380) --------------------------------------------------------
int __fastcall Function_21d2380(int a1, uchar a2)
{
  int v2;
  uchar v3;

  v2 = a1;
  v3 = a2;
  Function_20070e8(*(uint *)(v2 + 896), 7u, *(uint **)(v2 + 88), a2, 0, 0, 0, 115);
  return Function_200710c(*(uint *)(v2 + 896), 9u, *(uint **)(v2 + 88), v3, 0, 0, 0, 115);
}

//----- (021D23C4) --------------------------------------------------------
int __fastcall Function_21d23c4(int a1, int a2, uint a3, int a4, int a5, int a6, int a7, int a8, uchar a9, uchar a10)
{
  int v10;
  int v11;
  uint v12;
  int v13;

  v10 = a2;
  v11 = a1;
  v12 = a3;
  Function_201ada4_ClearTextBox(a2, a9);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v11 + 56), v12, *(ushort **)(v11 + 68));
  Function_200c388(*(uint **)(v11 + 60), *(uint *)(v11 + 64), *(uint *)(v11 + 68));
  v13 = *(uint *)(v11 + 64);
  return Function_201d78c(v10, a10);
}

//----- (021D2424) --------------------------------------------------------
int __fastcall Function_21d2424(int a1, int a2, uint a3, int a4, int a5, int a6, int a7, int a8, uchar a9, uchar a10)
{
  int v10;
  int v11;
  uint v12;
  int v13;

  v10 = a2;
  v11 = a1;
  v12 = a3;
  Function_201ada4_ClearTextBox(a2, a9);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v11 + 56), v12, *(ushort **)(v11 + 68));
  Function_200c388(*(uint **)(v11 + 60), *(uint *)(v11 + 64), *(uint *)(v11 + 68));
  Function_2002d7c(a10, *(uint *)(v11 + 64), 0);
  v13 = *(uint *)(v11 + 64);
  return Function_201d78c(v10, a10);
}

//----- (021D2494) --------------------------------------------------------
int __fastcall Function_21d2494(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  Function_21d3594(*(uint *)(a1 + 88), a1 + 92);
  v2 = Function_21d23c4(v1, v1 + 92, 6u, 1, 1, 0, 1, 2, 0xFu, 0);
  Function_201a9a4(v1 + 92);
  return v2;
}

//----- (021D24D4) --------------------------------------------------------
int __fastcall Function_21d24d4(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = *(uchar *)(a1 + 14);
  Function_21d26cc();
  v3 = Function_21d23c4(v1, v1 + 332, 0xCu, 1, 1, 0, 1, 2, 0xFu, 1u);
  Function_201a9a4(v1 + 332);
  return v3;
}

//----- (021D2518) --------------------------------------------------------
int __fastcall Function_21d2518(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = *(uchar *)(a1 + 14);
  Function_21d26cc();
  v3 = Function_21d2424(v1, v1 + 252, 9u, 48, 5, 0, 1, 2, 0, 0);
  Function_201a9a4(v1 + 252);
  return v3;
}

//----- (021D255C) --------------------------------------------------------
int __fastcall Function_21d255c(int a1)
{
  int v1;
  uint v2;
  int v3;

  v1 = a1;
  v2 = 0;
  do
  {
    v3 = v1 + 4 * v2;
    Function_21d34c4(*(uint *)(v3 + 848), *(uchar *)(v1 + *(uchar *)(v1 + v2 + 938) + 864));
    Function_21d345c(*(uint *)(v3 + 848), 1);
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 < 3 );
  Function_21d345c(*(uint *)(v1 + 860), 1);
  Function_21d350c(*(uint *)(v1 + 860), 1);
  Function_2005748(0x550u);
  return 0;
}

//----- (021D25BC) --------------------------------------------------------
int __fastcall Function_21d25bc(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  Function_2005748(0x5F3u);
  v2 = Function_21d2424(v1, v1 + 284, 0xBu, 48, 5, 0, 1, 2, 0, 0);
  Function_201a9a4(v1 + 284);
  return v2;
}

//----- (021D2604) --------------------------------------------------------
int __fastcall Function_21d2604(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_21d2424(a1, a1 + 300, 4u, 48, 1, 0, 1, 1, 0, 2u);
  Function_201a9a4(v1 + 300);
  return v2;
}

//----- (021D263C) --------------------------------------------------------
int __fastcall Function_21d263c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_21d2424(a1, a1 + 316, 5u, 24, 1, 0, 1, 1, 0, 2u);
  Function_201a9a4(v1 + 316);
  return v2;
}

//----- (021D2674) --------------------------------------------------------
int __fastcall Function_21d2674(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v2 = a2;
  v3 = a1;
  Function_200b70c(*(uint *)(a1 + 60), 0, *(ushort *)(a1 + 2 * a2 + 874));
  v4 = 16 * (v2 + 2);
  v5 = v3 + 92;
  v6 = Function_21d2424(v3, v3 + 92 + v4, 1u, 44, *((uchar *)&dword_21D3814 + v2), 0, 1, 2, 0, 0);
  Function_201a9a4(v5 + v4);
  return v6;
}

//----- (021D26CC) --------------------------------------------------------
uint __fastcall Function_21d26cc(int a1, uint a2, int a3)
{
  return Function_200b60c(*(uint *)(a1 + 60), a2, a3, 1, 0, 1);
}

//----- (021D26E4) --------------------------------------------------------
int __fastcall Function_21d26e4(int result, uint *a2, int a3)
{
  *(uchar *)(result + 8) = 0;
  *a2 = a3;
  return result;
}

//----- (021D26EC) --------------------------------------------------------
int __fastcall Function_21d26ec(int a1)
{
  int v1;
  int v2;
  uint v3;
  uchar v4;
  int v5;
  int result;

  v1 = a1;
  v2 = 0;
  do
  {
    do
    {
      v3 = PRNG();
      s32_div_f(v3, 9);
      v5 = v1 + v4;
    }
    while ( *(uchar *)(v5 + 864) != 176 );
    result = 864;
    ++v2;
    *(uchar *)(v5 + 864) = 4;
  }
  while ( v2 < 2 );
  return result;
}

//----- (021D271C) --------------------------------------------------------
int __fastcall Function_21d271c(int a1)
{
  int v1;
  uint v2;
  int v3;
  int v4;
  int v5;
  uint v6;
  int v7;
  int result;
  int v9;

  v1 = a1;
  v2 = PRNG();
  v3 = 0;
  v4 = ((v2 >> 31) + __ROR4__((v2 << 30) - (v2 >> 31), 30)) & 0xFF;
  v5 = 0;
  while ( 1 )
  {
    v6 = PRNG();
    s32_div_f(v6, 9);
    result = 864;
    if ( *(uchar *)(v1 + v7 + 864) == 176 )
    {
      v3 = 0;
      *(uchar *)(v1 + v7 + 864) = v4;
      if ( v5 == 2 || v5 == 4 || v5 == 6 )
      {
        result = (v4 + 1) << 24;
        v4 = (v4 + 1) & 0xFF;
        if ( v4 == 4 )
          v4 = 0;
      }
      goto LABEL_17;
    }
    if ( ++v3 >= 30 )
    {
      v3 = 0;
      v9 = 0;
      while ( *(uchar *)(v1 + v9 + 864) != 176 )
      {
        if ( ++v9 >= 9 )
          goto LABEL_17;
      }
      result = 864;
      *(uchar *)(v1 + v9 + 864) = v4;
      if ( v5 == 2 || v5 == 4 || v5 == 6 )
      {
        result = (v4 + 1) << 24;
        v4 = (v4 + 1) & 0xFF;
        if ( v4 == 4 )
          v4 = 0;
      }
LABEL_17:
      if ( ++v5 >= 9 )
        return result;
    }
  }
}

//----- (021D27AC) --------------------------------------------------------
int __fastcall Function_21d27ac(int a1)
{
  int v1;

  v1 = a1;
  Function_21d26ec(a1);
  return Function_21d271c(v1);
}

//----- (021D27BC) --------------------------------------------------------
int __fastcall Function_21d27bc(int result)
{
  int v1;
  int v2;

  v1 = 0;
  do
  {
    v2 = result + v1++;
    *(uchar *)(v2 + 864) = -80;
  }
  while ( v1 < 9 );
  return result;
}

//----- (021D27D4) --------------------------------------------------------
int __fastcall Function_21d27d4(int a1, int a2, int a3, int a4)
{
  int v4;
  char *v5;
  uint v6;
  char *v7;
  int v8;
  int v9;
  short v10;
  int v11;
  char *v12;
  int result;
  int v14;
  int v15;
  char v16;
  int v17;

  v17 = a4;
  v14 = a1;
  v4 = 0;
  v5 = &v16;
  do
  {
    ++v4;
    *(ushort *)v5 = 255;
    v5 += 2;
  }
  while ( v4 < 4 );
  v6 = PRNG();
  v7 = &v16;
  v15 = ((v6 >> 31) + __ROR4__((v6 << 30) - (v6 >> 31), 30)) & 0xFFFF;
  v8 = 0;
  do
  {
    if ( v8 == v15 )
    {
      *(ushort *)(v14 + 874) = 92;
    }
    else
    {
      do
      {
        v9 = PRNG();
        u32_div_f(v9, 23);
        *(ushort *)v7 = v10;
        v11 = 0;
        if ( v8 > 0 )
        {
          v12 = &v16;
          do
          {
            if ( *(ushort *)v12 == *(ushort *)v7 )
              break;
            ++v11;
            v12 += 2;
          }
          while ( v11 < v8 );
        }
      }
      while ( v11 != v8 );
      *(ushort *)(v14 + 874) = *((ushort *)dword_21D37E4 + *(ushort *)v7);
    }
    ++v8;
    result = v14 + 2;
    v7 += 2;
    v14 += 2;
  }
  while ( v8 < 4 );
  return result;
}

//----- (021D2868) --------------------------------------------------------
int __fastcall Function_21d2868(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v7;
  uint v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v14 = a4;
  v4 = a1;
  v5 = a2;
  if ( (uint)*(uchar *)(a1 + 936) << 24 >> 25 >= 8 )
    return 1;
  Function_21d349c(*(uint *)(a1 + 812 + 4 * a2), &v13, &v12);
  v7 = *(uchar *)(v4 + 936);
  v8 = (uint)(v7 << 24) >> 25;
  v9 = *((char *)dword_21D3818 + v8);
  v10 = v12;
  v11 = v13;
  *(uchar *)(v4 + 936) = 2 * (v8 + 1) | v7 & 1;
  Function_21d3474(*(uint *)(v4 + 812 + 4 * v5), v11 + *((char *)&dword_21D3708[2 * v5] + v8), v10 + v9);
  return 0;
}

//----- (021D28E8) --------------------------------------------------------
int __fastcall Function_21d28e8(int a1, uchar a2, uchar a3, uchar a4, uchar a5)
{
  int v5;
  char v6;

  v5 = a1;
  v6 = a2;
  Function_2019e2c(*(uint *)(a1 + 88), a2, 0, 0, a4, a5, a3);
  return Function_201c3c0(*(uint *)(v5 + 88), v6);
}

//----- (021D2918) --------------------------------------------------------
int __fastcall Function_21d2918(int a1)
{
  int v1;
  uint v2;

  v1 = 0;
  v2 = 0;
  do
  {
    if ( *(uchar *)(a1 + v2 + 924) == 1 )
      v1 = (v1 + 1) & 0xFF;
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 < 9 );
  return v1;
}

//----- (021D2940) --------------------------------------------------------
int __fastcall Function_21d2940(int result)
{
  uint v1;

  v1 = 0;
  do
  {
    *(uchar *)(result + v1 + 924) = 0;
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 < 9 );
  return result;
}

//----- (021D295C) --------------------------------------------------------
int __fastcall Function_21d295c(int result)
{
  uint v1;

  v1 = 0;
  do
  {
    *(uchar *)(result + v1 + 941) = 0;
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 < 9 );
  return result;
}

//----- (021D297C) --------------------------------------------------------
int __fastcall Function_21d297c(int a1, int a2)
{
  int v2;
  int result;
  int v4;
  uchar *v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v2 = a1;
  result = *(ushort *)(a1 + 960);
  v4 = 0;
  if ( result > 0 )
  {
    v5 = (uchar *)&dword_21D3728[a2];
    v6 = v2;
    v9 = v5[2];
    do
    {
      v7 = *(ushort *)(v6 + 962);
      v8 = *(ushort *)(v6 + 964);
      if ( v9 <= v7 && v7 <= v5[3] && *v5 <= v8 && v8 <= v5[1] )
        Function_21d2ecc(v2);
      result = *(ushort *)(v2 + 960);
      ++v4;
      v6 += 8;
    }
    while ( v4 < result );
  }
  return result;
}

//----- (021D29D8) --------------------------------------------------------
int __fastcall Function_21d29d8(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;

  v1 = a1;
  result = *(ushort *)(a1 + 960);
  v3 = 0;
  if ( result > 0 )
  {
    v4 = v1;
    do
    {
      Function_21d2a18(v1, *(ushort *)(v4 + 962) & 0xFF, *(ushort *)(v4 + 964) & 0xFF);
      result = *(ushort *)(v1 + 960);
      ++v3;
      v4 += 8;
    }
    while ( v3 < result );
  }
  return result;
}

//----- (021D2A18) --------------------------------------------------------
int __fastcall Function_21d2a18(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int result;
  int v8;

  v3 = a2;
  v4 = -3;
  v5 = a1 + a2;
  do
  {
    v6 = a3 + v4;
    result = -3;
    v8 = v5 + 240 * (a3 + v4) - 3;
    do
    {
      if ( v3 + result > 0 && v3 + result < 240 && v6 > 0 && v6 < 160 )
        *(uchar *)(v8 + 1026) = 1;
      ++result;
      ++v8;
    }
    while ( result < 3 );
    ++v4;
  }
  while ( v4 < 3 );
  return result;
}

//----- (021D2A68) --------------------------------------------------------
int __fastcall Function_21d2a68(int a1, int a2)
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
  int result;
  int v12;
  int v13;
  int v14;

  v13 = a2;
  v12 = a1;
  v2 = 0;
  v3 = 2 * a2;
  v4 = aU[v3];
  v14 = *(short *)(v3 * 2 + 35469134);
  v5 = v14 + 20;
  if ( v14 < v14 + 20 )
  {
    v6 = 240 * v14;
    v7 = v4 + 25;
    do
    {
      v8 = aU[v3];
      if ( v4 < v7 )
      {
        v9 = a1 + v6 + v4;
        do
        {
          if ( *(uchar *)(v9 + 1026) == 1 )
            ++v2;
          ++v8;
          ++v9;
        }
        while ( v8 < v7 );
      }
      v6 += 240;
      ++v14;
    }
    while ( v14 < v5 );
  }
  if ( v2 < 380 )
    return 0;
  v10 = a1 + 941;
  if ( !*(uchar *)(a1 + 941 + v13) )
  {
    Function_2005748(0x5E2u);
    *(uchar *)(v12 + (uchar)(*(uchar *)(v12 + 937))++ + 938) = v13;
  }
  result = 1;
  *(uchar *)(v10 + v13) = 1;
  return result;
}

//----- (021D2B20) --------------------------------------------------------
uint __fastcall Function_21d2b20(uchar *a1)
{
  uchar *v1;
  uint result;
  int v3;
  uchar *v4;
  int v5;

  v1 = a1;
  result = (uchar)++a1[934];
  if ( result >= 1 )
  {
    v1[934] = 0;
    if ( (uchar)++v1[933] >= 8u )
      v1[933] = 0;
    if ( v1[937] == 2 )
    {
      v3 = 0;
      v4 = v1;
      do
      {
        Function_21d3500(*((uint *)v4 + 209), 3);
        Function_21d345c(*((uint *)v4 + 209), 1);
        v5 = 2 * (uchar)v1[v3 + 938];
        Function_21d3474(*((uint *)v4 + 209), word_21D3770[v5] - 36, word_21D3770[v5 + 1] - 10);
        ++v3;
        v4 += 4;
      }
      while ( v3 < 2 );
    }
    result = Function_21d33b0(v1 + 364, (uchar)v1[933]);
  }
  return result;
}

//----- (021D2BBC) --------------------------------------------------------
int __fastcall Function_21d2bbc(uchar *a1)
{
  int v1;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v1 = 0;
  if ( (uchar)a1[937] <= 1u )
    return 0;
  v3 = (uchar)a1[(uchar)a1[939] + 864];
  v4 = (uchar)a1[(uchar)a1[938] + 864];
  if ( v4 == v3 )
  {
    a1[936] = a1[936] & 0xFE | 1;
  }
  else if ( v4 == 4 )
  {
    a1[936] = a1[936] & 0xFE | 1;
  }
  else if ( v3 == 4 )
  {
    a1[936] = a1[936] & 0xFE | 1;
  }
  if ( (uchar)a1[937] <= 2u )
    return 0;
  v5 = (uchar)a1[(uchar)a1[939] + 864];
  v6 = (uchar)a1[(uchar)a1[938] + 864];
  if ( v6 == v5 && v6 == (uchar)a1[(uchar)a1[940] + 864] )
    v1 = 1;
  if ( v6 == 4 && v5 == 4 )
    v1 = 1;
  if ( v6 == 4 && a1[(uchar)a1[940] + 864] == 4 )
    v1 = 1;
  if ( v5 == 4 && a1[(uchar)a1[940] + 864] == 4 )
    v1 = 1;
  if ( v6 == 4 && v5 == (uchar)a1[(uchar)a1[940] + 864] )
    v1 = 1;
  if ( v5 == 4 && v6 == (uchar)a1[(uchar)a1[940] + 864] )
    v1 = 1;
  if ( a1[(uchar)a1[940] + 864] == 4 && v6 == v5 )
    v1 = 1;
  if ( v1 != 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = (uchar)a1[(uchar)a1[v7 + 938] + 864];
    if ( v8 != 4 )
      break;
    if ( ++v7 >= 3 )
      return 1;
  }
  a1[935] = v8;
  return 1;
}

//----- (021D2D14) --------------------------------------------------------
int __fastcall Function_21d2d14(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;

  v1 = a1;
  result = 0;
  v3 = 0;
  v4 = v1;
  do
  {
    if ( *(uchar *)(v1 + *(uchar *)(v1 + v3 + 938) + 864) == 4 )
    {
      Function_21d3530(*(uint *)(v4 + 848), 1);
      result = 1;
    }
    ++v3;
    v4 += 4;
  }
  while ( v3 < 3 );
  *(uchar *)(v1 + 20) = 0;
  REG_MOSAIC_OBJ = *(uchar *)(v1 + 20) | 16 * *(uchar *)(v1 + 20);
  return result;
}

//----- (021D2D60) --------------------------------------------------------
int __fastcall Function_21d2d60(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  uint v5;
  int v6;
  int v7;
  int v8;

  v2 = a1;
  v3 = 0;
  do
  {
    if ( *(uchar *)(v2 + *(uchar *)(v2 + v3 + 938) + 864) == 4 )
      break;
    ++v3;
  }
  while ( v3 < 3 );
  if ( v3 == 3 )
    return 0;
  if ( a2 )
  {
    if ( *(uchar *)(v2 + 20) )
    {
      --*(uchar *)(v2 + 20);
      goto LABEL_21;
    }
    v8 = 0;
    do
    {
      Function_21d3530(*(uint *)(v2 + 848), 0);
      ++v8;
      v2 += 4;
    }
    while ( v8 < 3 );
    result = 0;
  }
  else
  {
    if ( !*(uchar *)(v2 + 20) )
      Function_2005748(0x552u);
    v5 = *(uchar *)(v2 + 20);
    if ( v5 < 4 )
    {
      *(uchar *)(v2 + 20) = v5 + 1;
LABEL_21:
      REG_MOSAIC_OBJ = *(uchar *)(v2 + 20) | 16 * *(uchar *)(v2 + 20);
      return 1;
    }
    v6 = 0;
    v7 = v2;
    do
    {
      if ( *(uchar *)(v2 + *(uchar *)(v2 + v6 + 938) + 864) == 4 )
        Function_21d34c4(*(uint *)(v7 + 848), *(uchar *)(v2 + 935));
      ++v6;
      v7 += 4;
    }
    while ( v6 < 3 );
    result = 0;
  }
  return result;
}

//----- (021D2E18) --------------------------------------------------------
int __fastcall Function_21d2e18(int result)
{
  ++*(uchar *)(result + 14);
  return result;
}

//----- (021D2E20) --------------------------------------------------------
int __fastcall Function_21d2e20(int result)
{
  ++*(uchar *)(result + 14);
  return result;
}

//----- (021D2E28) --------------------------------------------------------
int __fastcall Function_21d2e28(int a1)
{
  int v1;

  v1 = a1;
  Function_21d345c(*(uint *)(a1 + 832), 0);
  Function_201ada4_ClearTextBox(v1 + 252, 0);
  return Function_201a9a4(v1 + 252);
}

//----- (021D2E4C) --------------------------------------------------------
int __fastcall Function_21d2e4c(int a1)
{
  int v1;

  v1 = a1;
  *(uint *)(a1 + 908) = Function_2006f50(184, 7, 0, (uint *)(a1 + 912), 115);
  Function_201958c(
    *(uint **)(v1 + 88),
    0,
    *(int **)(*(uint *)(v1 + 912) + 20),
    *(uint *)(*(uint *)(v1 + 912) + 16),
    0);
  return Function_2019448(*(uint **)(v1 + 88), 0);
}

//----- (021D2E8C) --------------------------------------------------------
uint __fastcall Function_21d2e8c(int a1)
{
  int v1;
  uint result;

  v1 = a1;
  *(uint *)(a1 + 916) = malloc(0x73u, *(uint *)(*(uint *)(a1 + 912) + 16));
  result = *(uint *)(v1 + 916);
  if ( !result )
    result = ErrorHandler();
  return result;
}

//----- (021D2EB4) --------------------------------------------------------
uchar *__fastcall Function_21d2eb4(int a1)
{
  return memcpy(*(uchar **)(a1 + 916), *(char **)(*(uint *)(a1 + 912) + 20), *(uint *)(*(uint *)(a1 + 912) + 16));
}

//----- (021D2ECC) --------------------------------------------------------
int __fastcall Function_21d2ecc(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v8;
  int v9;

  v3 = a1;
  v4 = a2;
  v8 = a3;
  v9 = -3;
  do
  {
    v5 = -3;
    v6 = v8 + v9;
    do
    {
      if ( v4 + v5 > 0 && v4 + v5 < 256 && v6 > 0 && v6 < 192 )
        Function_21d2f38(v3);
      ++v5;
    }
    while ( v5 < 3 );
    ++v9;
  }
  while ( v9 < 3 );
  Function_201958c(*(uint **)(v3 + 88), 0, *(int **)(v3 + 916), *(uint *)(*(uint *)(v3 + 912) + 16), 0);
  return Function_2019448(*(uint **)(v3 + 88), 0);
}

//----- (021D2F38) --------------------------------------------------------
int __fastcall Function_21d2f38(int a1, uint a2, uint a3)
{
  int v3;
  int v4;
  int v5;
  uint v6;
  uint v7;
  int v8;
  int result;

  if ( a2 & 1 )
    v3 = 240;
  else
    v3 = 15;
  v4 = (v3 ^ 0xFF) & 0xFF;
  v5 = 32 * (a2 >> 3);
  v6 = a3 >> 3 << 10;
  v7 = (a2 & 7) >> 1;
  if ( a3 >= 8 )
    v8 = 4 * a3 & 0x1F;
  else
    v8 = 4 * a3;
  result = *(uint *)(a1 + 916);
  *(uchar *)(result + v8 + v7 + v6 + v5) &= v4;
  return result;
}

//----- (021D2F80) --------------------------------------------------------
uint __fastcall Function_21d2f80(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  char *v5;
  int *v6;
  int v7;
  int v8;

  v1 = a1;
  v2 = Function_201dbec(32, 0x73u);
  Function_21d3378(v2);
  Function_20a7944();
  Function_200a784(0, 128, 0, 32, 0, 0x80u, 0, 0x20u, 0x73u);
  *(uint *)v1 = Function_20095c4(40, v1 + 4, 115, v3);
  Function_200964c(v1 + 4, 0, 0x200000, v4);
  v5 = &byte_21D3820;
  v6 = 0;
  v7 = v1;
  do
  {
    *(uint *)(v7 + 300) = Function_2009714((uchar)*v5, v6, 0x73u);
    v6 = (int *)((char *)v6 + 1);
    ++v5;
    v7 += 4;
  }
  while ( (int)v6 < 4 );
  Function_21d304c(v1, 1);
  Function_21d30d8(v1);
  Function_21d3168(v1, 1);
  Function_21d31f4(v1, 1);
  Function_21d30d8(v1);
  v8 = 0;
  do
  {
    Function_200a328(*(int **)(v1 + 316));
    Function_200a5c8(*(int **)(v1 + 320));
    ++v8;
    v1 += 16;
  }
  while ( v8 < 5 );
  Function_201ff74(0x10u, 1);
  return Function_201ff0c(0x10u, 1);
}

//----- (021D304C) --------------------------------------------------------
int *__fastcall Function_21d304c(int *a1)
{
  int *v1;
  int *result;

  v1 = a1;
  a1[87] = (int)Function_200985c(a1[75], 184, 12, 0, 2, 1, 115);
  v1[88] = (int)Function_20098b8(v1[76], 184, 13, 0, 2, 1, 4, 115);
  v1[89] = (int)Function_2009918(v1[77], 184, 11, 0, 2, 2u, 115);
  result = Function_2009918(v1[78], 184, 10, 0, 2, 3u, 115);
  v1[90] = (int)result;
  return result;
}

//----- (021D30D8) --------------------------------------------------------
int *__fastcall Function_21d30d8(int *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int *v6;
  int v7;
  int *result;

  v4 = a3;
  v5 = a4;
  v6 = a1;
  v7 = 4 * a2;
  a1[v7 + 79] = (int)Function_200985c(a1[75], 184, 32, 0, a3, a4, 115);
  v6[v7 + 80] = (int)Function_20098b8(v6[76], 184, 33, 0, v4, v5, 5, 115);
  v6[v7 + 81] = (int)Function_2009918(v6[77], 184, 31, 0, v4, 2u, 115);
  result = Function_2009918(v6[78], 184, 30, 0, v4, 3u, 115);
  v6[v7 + 82] = (int)result;
  return result;
}

//----- (021D3168) --------------------------------------------------------
int *__fastcall Function_21d3168(int *a1)
{
  int *v1;
  int *result;

  v1 = a1;
  a1[91] = (int)Function_200985c(a1[75], 184, 16, 0, 3, 1, 115);
  v1[92] = (int)Function_20098b8(v1[76], 184, 17, 0, 3, 1, 4, 115);
  v1[93] = (int)Function_2009918(v1[77], 184, 15, 0, 3, 2u, 115);
  result = Function_2009918(v1[78], 184, 14, 0, 3, 3u, 115);
  v1[94] = (int)result;
  return result;
}

//----- (021D31F4) --------------------------------------------------------
int *__fastcall Function_21d31f4(int *a1)
{
  int *v1;
  int *result;

  v1 = a1;
  a1[95] = (int)Function_200985c(a1[75], 184, 20, 0, 4, 1, 115);
  v1[96] = (int)Function_20098b8(v1[76], 184, 21, 0, 4, 1, 1, 115);
  v1[97] = (int)Function_2009918(v1[77], 184, 19, 0, 4, 2u, 115);
  result = Function_2009918(v1[78], 184, 18, 0, 4, 3u, 115);
  v1[98] = (int)result;
  return result;
}

//----- (021D3280) --------------------------------------------------------
int __fastcall Function_21d3280(int *a1, int a2, uint a3, int a4, int a5, char a6)
{
  int *v6;
  uint v7;
  int v8;
  int v10;
  char *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  short v18;
  int v19;
  int v20;
  int v21;
  char v22;
  int v23;

  v23 = a4;
  v6 = a1;
  v7 = a3;
  Function_20093b4((int)&v22, a2, a2, a2, a2, -1, -1, 0, a4, a1[75], a1[76], a1[77], a1[78], 0, 0);
  v10 = *v6;
  v11 = &v22;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 4096;
  v16 = 4096;
  v17 = 4096;
  v18 = 0;
  v19 = a5;
  v21 = 115;
  if ( a6 )
    v20 = 2;
  else
    v20 = 1;
  v8 = Function_2021aa0((uint **)&v10);
  Function_2021cc8(v8, 0);
  Function_2021ce4(v8, 4096);
  Function_2021d6c(v8, v7);
  return v8;
}

//----- (021D3320) --------------------------------------------------------
int *__fastcall Function_21d3320(int **a1)
{
  int **v1;
  uint v2;
  int v3;
  uint v4;

  v1 = a1;
  v2 = 0;
  do
  {
    v3 = (int)&v1[4 * v2];
    Function_200a4e4(*(int **)(v3 + 316));
    Function_200a6dc(*(int **)(v3 + 320));
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 < 5 );
  v4 = 0;
  do
  {
    Function_2009754(v1[v4 + 75]);
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 < 4 );
  Function_2021964(*v1);
  Function_200a878();
  Function_201e958();
  return Function_201f8b4();
}

//----- (021D3378) --------------------------------------------------------
int Function_21d3378()
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = 5;
  v2 = 3000;
  v3 = 5120;
  v4 = 115;
  Function_201e88c(&v1, 2097168, 2097168);
  Function_201f834(14, 0x73u);
  Function_201e994();
  return Function_201f8e4();
}

//----- (021D33B0) --------------------------------------------------------
int __fastcall Function_21d33b0(int a1, int a2)
{
  int v2;
  int v3;
  int *v4;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 8 )
    ErrorHandler();
  v4 = (int *)Function_2009dc8(*(uint *)(v3 + 304), 3);
  Function_20099d4(*(int **)(v3 + 304), v4, 184, *((uchar *)dword_21D3940 + v2), 0, 115);
  return Function_200a6b8(v4);
}

//----- (021D33F4) --------------------------------------------------------
int __fastcall Function_21d33f4(int *a1, int a2, uint a3, int a4, ushort a5, char a6, int a7, int a8)
{
  int *v8;
  int v9;
  uint v10;
  int v11;
  uchar *v12;
  int v13;
  int v15;

  v8 = a1;
  v9 = a2;
  v10 = a3;
  v15 = a4;
  v11 = malloc(0x73u, 16);
  v12 = (uchar *)v11;
  v13 = 16;
  do
  {
    *v12++ = 0;
    --v13;
  }
  while ( v13 );
  *(uint *)(v11 + 12) = Function_21d3280(v8, v9, v10, a7, a8, a6);
  *(uchar *)(v11 + 2) = a6;
  Function_21d3474(v11, v15, a5);
  return v11;
}

//----- (021D3448) --------------------------------------------------------
int __fastcall Function_21d3448(int a1)
{
  int v1;

  v1 = a1;
  Function_2021bd4(*(uint *)(a1 + 12));
  free(v1);
  return 0;
}

//----- (021D345C) --------------------------------------------------------
uint __fastcall Function_21d345c(int a1, int a2)
{
  return Function_2021cac(*(uint *)(a1 + 12), a2);
}

//----- (021D3468) --------------------------------------------------------
int __fastcall Function_21d3468(int a1, short a2)
{
  return Function_2021f58(*(uint *)(a1 + 12), a2);
}

//----- (021D3474) --------------------------------------------------------
int __fastcall Function_21d3474(int a1, int a2, int a3)
{
  int v3;
  int v5;
  int v6;

  v3 = a3 << 12;
  v6 = v3;
  v5 = a2 << 12;
  if ( *(uchar *)(a1 + 2) == 1 )
    v6 = v3 + 0x200000;
  return Function_2021c50(*(uint **)(a1 + 12), &v5);
}

//----- (021D349C) --------------------------------------------------------
int __fastcall Function_21d349c(int a1, int *a2, int *a3)
{
  int v3;
  int *v4;
  int *v5;
  uint *v6;
  int result;

  v3 = *(uint *)(a1 + 12);
  v4 = a2;
  v5 = a3;
  Function_2021d28();
  *v4 = *v6 / 4096;
  result = v6[1] / 4096;
  *v5 = result;
  return result;
}

//----- (021D34C4) --------------------------------------------------------
int __fastcall Function_21d34c4(int a1, uint a2)
{
  int v2;
  uint v3;

  v2 = a1;
  v3 = a2;
  Function_2021ce4(*(uint *)(a1 + 12), 4096);
  return Function_2021dcc(*(uint *)(v2 + 12), v3);
}

//----- (021D34E0) --------------------------------------------------------
uint __fastcall Function_21d34e0(int a1)
{
  return Function_2021c80(*(uint **)(a1 + 12), dword_21D3834, 1);
}

//----- (021D34F4) --------------------------------------------------------
uint __fastcall Function_21d34f4(int a1, int *a2)
{
  return Function_2021c80(*(uint **)(a1 + 12), a2, 2);
}

//----- (021D3500) --------------------------------------------------------
int __fastcall Function_21d3500(int a1, char a2)
{
  return Function_2021ec4(*(uint *)(a1 + 12), a2);
}

//----- (021D350C) --------------------------------------------------------
int __fastcall Function_21d350c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  Function_2021cc8(*(uint *)(a1 + 12), a2);
  Function_2021ce4(*(uint *)(v2 + 12), 4096);
  v3 = Function_2021e24(*(uint *)(v2 + 12));
  return Function_2021d6c(*(uint *)(v2 + 12), v3);
}

//----- (021D3530) --------------------------------------------------------
uchar *__fastcall Function_21d3530(int a1, int a2)
{
  return Function_2021fa0(*(uint *)(a1 + 12), a2);
}

//----- (021D353C) --------------------------------------------------------
int __fastcall Function_21d353c(int a1)
{
  return Function_2021fd0(*(uint *)(a1 + 12));
}

//----- (021D3548) --------------------------------------------------------
int __fastcall Function_21d3548(uint *a1, int a2)
{
  uint *v2;
  int v3;
  uint v4;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    Function_201a8d4(v2, v3 + 16 * v4, (uchar *)&dword_21D38B8[2 * v4]);
    Function_201ada4_ClearTextBox(v3 + 16 * v4, 0);
    result = (v4 + 1) << 24;
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 < 0x10 );
  return result;
}

//----- (021D3578) --------------------------------------------------------
int __fastcall Function_21d3578(int a1)
{
  int v1;
  uint v2;
  int result;

  v1 = a1;
  v2 = 0;
  do
  {
    Function_201a8fc(v1 + 16 * v2);
    result = (v2 + 1) << 16;
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 < 0x10 );
  return result;
}

//----- (021D3594) --------------------------------------------------------
char *__fastcall Function_21d3594(uint *a1, int a2)
{
  int v2;

  v2 = a2;
  Function_200daa4(a1, 2u, 1015, 11, 0, 115);
  return Function_200dc48(v2, 1, 1015, 0xBu);
}

//----- (021D35C0) --------------------------------------------------------
uint __fastcall Function_21d35c0(int a1, uchar a2)
{
  uchar v2;
  uint **v3;
  int v4;

  v2 = a2;
  v3 = (uint **)a1;
  v4 = Function_201c290(a1);
  Function_200dd0c(*v3, v4, 985, 10, v2, 115);
  Function_201ada4_ClearTextBox((int)v3, 15);
  return Function_200e060((int)v3, 0, 985, 0xAu);
}

