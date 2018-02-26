//----- (021D0D80) --------------------------------------------------------
int __fastcall Function_92_21d0d80(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  SetMainLoopFunctionCall(0, 0);
  Function_20177bc(0, 0);
  Function_201ff00();
  Function_201ff68();
  REG_DISPCNT &= 0xFFFFE0FF;
  REG_DISPCNT_SUB &= 0xFFFFE0FF;
  Function_2017fc8(3, 50, (uint)&REG_DISPCNT_SUB << 7);
  v2 = (int *)MallocSomeDataAndStorePtrInOverlayData1c(v1, 49964, 0x32u);
  Call_FillMemWithValue(v2, 0, 0xC32Cu);
  *v2 = 50;
  v2[12476] = CountryOfOriginValue == 1;
  v3 = LoadPtrToOverWorldDataIn18(v1);
  v4 = v3;
  v5 = Function_202c878(v3);
  v2[1] = v5;
  v2[12485] = Function_202c8c0(v5);
  v2[12486] = Function_202c8c4(v2[1]);
  v2[12489] = Function_202c990(v2[1]);
  v2[2] = LoadPlayerDataAdress(v4);
  v6 = Function_21d14f0();
  Function_21d1510(v6);
  Function_201caf4(*v2 & 0xFF);
  v2[12292] = Function_2018340(*v2);
  Function_201ffd0();
  Function_201d710();
  v2[12316] = (int)Function_200b368(8u, 64, *v2);
  v2[12467] = Function_20203ac(*v2);
  v2[12474] = 0;
  byte_21BF6E1 = 1;
  Function_201ffe8();
  Function_2017dd4(4, 8);
  Function_2002ac8(1);
  Function_2002ae4(0);
  Function_2002b20(0);
  Function_21d1530(v2);
  return 1;
}

//----- (021D0EB8) --------------------------------------------------------
int __fastcall Function_92_21d0eb8(int a1, int *a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  uint v15;
  int v16;
  int v17;
  int v18;
  int v19;
  uint v20;
  int v21;
  int v22;
  int v23;
  int v24;

  v2 = a2;
  v3 = LoadOverlayData1c(a1);
  v4 = *v2;
  v5 = v3;
  v6 = 0;
  if ( (uint)*v2 <= 0x12 )
    JUMPOUT(__CS__, *((short *)&off_21D0EDA + v4) + 35458780);
  switch ( (uchar)v4 )
  {
    case 0:
      *(uint *)(v3 + 49248) = LoadFromMsgNARC(1, 26, 356, *(uint *)v3);
      v9 = LoadFromNARC_8(129, *(uint *)v5, v7, v8);
      Function_21d2150(v5, v9);
      Function_21d1888(v5, v9);
      Call_FS_CloseFile(v9);
      *(uint *)(v5 + 49900) = 0;
      Function_200f174(0, 1, 1, 0, 6, 1, *(uint *)v5);
      Function_201ff0c(4u, 1);
      Function_201ff74(4u, 1);
      Function_201ff0c(8u, 1);
      Function_201ff74(8u, 1);
      *v2 = 1;
      break;
    case 1:
      if ( Function_200f2ac() == 1 )
        *v2 = 2;
      break;
    case 2:
      if ( Function_21d1b70() == 1 )
      {
        if ( *(uint *)(v5 + 49940) )
          *v2 = 14;
        else
          *v2 = 3;
      }
      break;
    case 3:
      if ( Function_21d1b70() == 1 )
      {
        Function_21d1c4c(v5, v5 + 49188, dword_21D290C, dword_21D29A8, dword_21D2958);
        *v2 = 4;
      }
      break;
    case 4:
      v10 = Function_2001288(*(uint *)(v3 + 49236));
      if ( v10 != -1 )
      {
        Function_21d1db4(v5);
        Function_2005748(0x5DCu);
        switch ( (uchar)v10 + 2 )
        {
          case 0:
          case 4:
            *v2 = 17;
            break;
          case 3:
            *v2 = 5;
            break;
          default:
            *v2 = 14;
            break;
        }
      }
      break;
    case 5:
      if ( Function_21d1b70() == 1 )
      {
        *(uint *)(v5 + 49244) = Function_2002100(
                                    *(uint **)(v5 + 49168),
                                    (uchar *)dword_21D292C,
                                    473,
                                    7,
                                    *(uint *)v5);
        *v2 = 6;
      }
      break;
    case 6:
      v11 = Function_2002114(*(uint *)(v3 + 49244), *(uint *)v3);
      if ( v11 )
      {
        if ( v11 == -2 )
          *v2 = 3;
      }
      else if ( *(uint *)(v5 + 49904) == 1 )
      {
        *(uint *)(v5 + 49948) = 103;
        *v2 = 9;
      }
      else
      {
        *v2 = 7;
      }
      break;
    case 7:
      if ( Function_21d1b70() == 1 )
      {
        *(uint *)(v5 + 49948) = 0;
        v12 = Function_2099780(0);
        v13 = Function_209979c(0);
        Function_21d1cf4(v5, v5 + 49188, dword_21D2914, dword_21D29C8, 694, v12, v13);
        *v2 = 8;
      }
      break;
    case 8:
      v14 = Function_2001288(*(uint *)(v3 + 49236));
      if ( v14 != -1 )
      {
        Function_21d1db4(v5);
        Function_2005748(0x5DCu);
        if ( v14 != -2 )
          v14 = *(uchar *)(Function_2099780(0) + v14);
        if ( v14 == -2 )
        {
          *v2 = 3;
        }
        else
        {
          *(uint *)(v5 + 49948) = v14;
          if ( Function_21d2854(*(uint *)(v5 + 49948)) == 1 )
          {
            *v2 = 9;
          }
          else
          {
            *(uint *)(v5 + 49952) = 0;
            *v2 = 11;
          }
        }
      }
      break;
    case 9:
      if ( Function_21d1b70() == 1 )
      {
        *(uint *)(v5 + 49952) = 0;
        v15 = Function_20996d4(*(uint *)(v5 + 49948));
        v16 = Function_209972c(v15);
        v17 = Function_2099780(v15);
        v18 = Function_209979c(v15);
        Function_21d1cf4(v5, v5 + 49188, dword_21D2914, dword_21D29C8, v16, v17, v18);
        *v2 = 10;
      }
      break;
    case 0xA:
      v19 = Function_2001288(*(uint *)(v3 + 49236));
      if ( v19 != -1 )
      {
        Function_21d1db4(v5);
        Function_2005748(0x5DCu);
        if ( v19 != -2 )
        {
          v20 = Function_20996d4(*(uint *)(v5 + 49948));
          v19 = *(uchar *)(Function_2099780(v20) + v19);
        }
        if ( v19 == -2 )
        {
          if ( *(uint *)(v5 + 49904) == 1 )
            *v2 = 3;
          else
            *v2 = 7;
        }
        else
        {
          *(uint *)(v5 + 49952) = v19;
          *v2 = 11;
        }
      }
      break;
    case 0xB:
      v21 = *(uint *)(v3 + 49948);
      v22 = *(uint *)(v3 + 49952);
      Function_21d1ebc();
      *v2 = 12;
      break;
    case 0xC:
      if ( Function_21d1b70() == 1 )
      {
        *(uint *)(v5 + 49244) = Function_2002100(
                                    *(uint **)(v5 + 49168),
                                    (uchar *)dword_21D292C,
                                    473,
                                    7,
                                    *(uint *)v5);
        *v2 = 13;
      }
      break;
    case 0xD:
      v23 = Function_2002114(*(uint *)(v3 + 49244), *(uint *)v3);
      if ( v23 )
      {
        if ( v23 == -2 )
        {
          Function_21d1f74(v5);
          *v2 = 3;
        }
      }
      else
      {
        Function_21d1f74(v5);
        Function_202c88c(*(uint *)(v5 + 4), *(uint *)(v5 + 49948), *(uint *)(v5 + 49952));
        *(uint *)(v5 + 49940) = *(uint *)(v5 + 49948);
        *(uint *)(v5 + 49944) = *(uint *)(v5 + 49952);
        *v2 = 14;
      }
      break;
    case 0xE:
      *(ushort *)(v3 + 49908) = *(uint *)(v3 + 49904) != 1 || *(uint *)(v3 + 49956);
      Function_21d2254(v3);
      Function_21d16a8(v5);
      Function_21d22b0(v5);
      Function_21d2334(v5);
      Function_201ae78(v5 + 49172, 15, 0, 0, 0xD8u, 0x20u);
      Function_200dc48(v5 + 49204, 0, 473, 7u);
      if ( *(uint *)(v5 + 49940) )
        Function_21d1dec(v5);
      Function_21d1f90(v5);
      *(uint *)(v5 + 49960) = 0;
      *(uint *)(v5 + 49896) = 1;
      *v2 = 15;
      break;
    case 0xF:
      v24 = *(ushort *)(v3 + 49880);
      Function_21d1700();
      if ( dword_21BF6C4 & 2 || *(uint *)(v5 + 49912) & 2 )
      {
        Function_200dc9c(v5 + 49204, 0);
        Function_2005748(0x5DDu);
        Function_201ae78(v5 + 49172, 15, 0, 0, 0xD8u, 0x20u);
        if ( *(uint *)(v5 + 49940) )
        {
          Function_21d1f74(v5);
          *v2 = 17;
        }
        else
        {
          *(uint *)(v5 + 49896) = 2;
          *v2 = 3;
        }
      }
      else if ( !(dword_21BF6C4 & 0x400) || *(uint *)(v5 + 49960) )
      {
        if ( dword_21BF6C4 & 0x403 && *(uint *)(v5 + 49960) == 1 )
        {
          *(uint *)(v5 + 49960) = 0;
          Function_21d1f90(v5);
        }
        else
        {
          if ( Function_21d2460(v5) == 1 && *(uint *)(v5 + 49960) == 1 )
          {
            *(uint *)(v5 + 49960) = 0;
            Function_21d1f90(v5);
          }
          if ( v24 != *(ushort *)(v5 + 49880) )
          {
            *v2 = 16;
            Function_2005748(0x5C2u);
          }
        }
      }
      else
      {
        *(uint *)(v5 + 49960) = 1;
        Function_21d1f90(v5);
        if ( *(uint *)(v5 + 49960) == 1 )
          Function_2005748(0x5DDu);
      }
      break;
    case 0x10:
      if ( Function_21d2644() == 1 )
        *v2 = 15;
      break;
    case 0x11:
      *(uint *)(v3 + 49900) = 0;
      Function_200f174(0, 0, 0, 0, 6, 1, *(uint *)v3);
      *v2 = 18;
      break;
    case 0x12:
      if ( Function_200f2ac() == 1 )
      {
        *(uint *)(v5 + 49896) = 1;
        Function_21d1b24(v5);
        Function_21d2210(v5);
        Function_200b190(*(ushort **)(v5 + 49248));
        *v2 = 0;
        v6 = 1;
      }
      break;
    default:
      break;
  }
  Function_21d26d0(v5);
  return v6;
}

//----- (021D1478) --------------------------------------------------------
int __fastcall Function_92_21d1478(int a1)
{
  int v1;
  int *v2;
  int *v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = (int *)LoadOverlayData1c(a1);
  v3 = v2;
  v4 = *v2;
  Function_201ff0c(4u, 0);
  Function_201ff74(4u, 0);
  Function_201ff0c(8u, 0);
  Function_201ff74(8u, 0);
  Call_free5(v3[12467]);
  Function_200b3f0((uint *)v3[12316], v5);
  Function_201cba0();
  free(v3[12292]);
  SetMainLoopFunctionCall(0, 0);
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(v4);
  byte_21BF6E1 = 0;
  return 1;
}

//----- (021D14F0) --------------------------------------------------------
char *Function_21d14f0()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_21D2A78;
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

//----- (021D1510) --------------------------------------------------------
int *Function_21d1510()
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = 1;
  v2 = 0;
  v3 = 0;
  v4 = 1;
  return SetGraphicsModes(&v1);
}

//----- (021D1530) --------------------------------------------------------
uint __fastcall Function_21d1530(uint *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  ushort *i;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  short *j;
  int v14;
  int v15;
  int *v17;
  int v18;
  int v19;
  uint *v20;
  uint *v21;
  int *v22;
  uint v23;
  int v24;
  int v25;

  v25 = a4;
  v17 = (int *)a1;
  v4 = LoadFromNARC_8(102, *a1, a3, a4);
  v17[3] = 0;
  v22 = v4;
  v21 = Function_2007250((int)v4, 0x12u, 0, *v17, 0, &v24);
  v5 = u32_div_f(v24, 6);
  v6 = 1;
  for ( i = (ushort *)((char *)v21 + 6); v6 < v5; i += 3 )
  {
    if ( *i != 2 )
    {
      v8 = (short)i[1];
      v9 = (short)i[2];
      Function_21d1634(v17, v17[3]);
      ++v17[3];
    }
    ++v6;
  }
  free((int)v21);
  v10 = 1;
  v19 = Function_20996d0();
  if ( v19 > 1 )
  {
    do
    {
      v11 = Function_2099764(v10);
      v20 = Function_2007250((int)v22, v11, 0, *v17, 0, (int *)&v23);
      v12 = 1;
      v18 = v23 >> 2;
      for ( j = (short *)(v20 + 1); v12 < v18; j += 2 )
      {
        Function_2099748(v10);
        v14 = *j;
        v15 = j[1];
        Function_21d1634(v17, v17[3]);
        ++v12;
        ++v17[3];
      }
      free((int)v20);
      ++v10;
    }
    while ( v10 < v19 );
  }
  return Call_FS_CloseFile(v22);
}

//----- (021D1634) --------------------------------------------------------
int __fastcall Function_21d1634(int a1, int a2, int a3, int a4, ushort a5, ushort a6)
{
  int *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  char *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  char *v17;
  uint *v18;
  int v19;
  int v20;
  int v21;
  short v22;
  ushort *v23;
  int result;
  int v25;
  int v26;
  int v27;
  char v28;
  int v29;

  v29 = a4;
  v6 = dword_21D2A30;
  v7 = a3;
  v8 = a4;
  v9 = a1;
  v10 = a2;
  v11 = &v28;
  v12 = 4;
  do
  {
    v13 = *v6;
    v14 = v6[1];
    v6 += 2;
    *(uint *)v11 = v13;
    *((uint *)v11 + 1) = v14;
    v11 += 8;
    --v12;
  }
  while ( v12 );
  *(uint *)v11 = *v6;
  v15 = 48 * v10;
  v16 = v9 + 48 * v10;
  *(ushort *)(v16 + 16) = v7;
  *(ushort *)(v16 + 18) = v8;
  v27 = 0;
  v25 = v7;
  v26 = v8;
  Function_21d23e8(&v28, &v25);
  v17 = &v28;
  v18 = (uint *)(v9 + v15 + 20);
  v19 = 4;
  do
  {
    v20 = *(uint *)v17;
    v21 = *((uint *)v17 + 1);
    v17 += 8;
    *v18 = v20;
    v18[1] = v21;
    v18 += 2;
    --v19;
  }
  while ( v19 );
  *v18 = *(uint *)v17;
  v22 = Function_202c8c8(*(uint *)(v9 + 4), a5, a6);
  v23 = (ushort *)(v9 + v15);
  v23[28] = v22;
  v23[29] = a5;
  result = a6;
  v23[30] = a6;
  return result;
}

//----- (021D16A8) --------------------------------------------------------
uint *__fastcall Function_21d16a8(uint *result)
{
  uint v1;
  ushort *v2;

  v1 = 0;
  if ( result[3] )
  {
    v2 = result;
    do
    {
      if ( result[12485] == (ushort)v2[29] && result[12486] == (ushort)v2[30] )
      {
        v2[28] = 3;
        result[12461] = (short)v2[8];
        result[12462] = (short)v2[9];
      }
      ++v1;
      v2 += 24;
    }
    while ( v1 < result[3] );
  }
  return result;
}

//----- (021D16F8) --------------------------------------------------------
uint __fastcall Function_21d16f8(int a1)
{
  return Function_20996d4(a1);
}

//----- (021D1700) --------------------------------------------------------
int __fastcall Function_21d1700(uint *a1)
{
  uint *v1;
  int result;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = a1;
  result = 49912;
  v1[12478] = 0;
  if ( word_21BF6DC )
  {
    if ( (ushort)word_21BF6D8 >= 0xC8u
      && (ushort)word_21BF6D8 <= 0xF8u
      && (ushort)word_21BF6DA >= 0xA8u
      && (ushort)word_21BF6DA <= 0xB8u )
    {
      v1[12478] = 2;
      return result;
    }
    v1[12479] = 0;
    v1[12482] = 0;
    v1[12483] = 0;
    v1[12484] = 0;
    v1[12478] = 0;
    v1[12480] = (ushort)word_21BF6D8;
    v1[12481] = (ushort)word_21BF6DA;
    v1[12484] = 4;
  }
  result = (ushort)word_21BF6DE;
  if ( word_21BF6DE )
  {
    v3 = v1[12479];
    if ( v3 )
    {
      if ( v3 != 1 )
        return result;
    }
    else if ( v1[12484] )
    {
      --v1[12484];
    }
    else
    {
      v1[12479] = 1;
    }
    Function_21d1818(v1[12480], v1[12481], &v7, &v6, &v5, &v4);
    v1[12478] = v5 | v7;
    v1[12482] = v6;
    v1[12483] = v4;
    v1[12480] = (ushort)word_21BF6D8;
    result = (ushort)word_21BF6DA;
    v1[12481] = (ushort)word_21BF6DA;
    return result;
  }
  if ( v1[12484] )
    v1[12478] = 1;
  v1[12479] = 0;
  v1[12482] = 0;
  result = 49932;
  v1[12483] = 0;
  v1[12484] = 0;
  return result;
}

//----- (021D1818) --------------------------------------------------------
int *__fastcall Function_21d1818(int a1, int a2, int *a3, int a4, int *a5, int *a6)
{
  int v6;
  int v7;
  int *v8;
  int *v9;
  int v10;
  int v11;
  int *result;

  v6 = a2;
  v7 = 0;
  v8 = a3;
  v9 = (int *)a4;
  v10 = 0;
  LOBYTE(a4) = 0;
  LOBYTE(v11) = 0;
  if ( (ushort)word_21BF6D8 != 0xFFFF )
  {
    a4 = (ushort)word_21BF6D8 - a1;
    if ( a4 >= 0 )
    {
      if ( a4 > 0 )
        v7 = 32;
    }
    else
    {
      LOBYTE(a4) = ~(uchar)a4;
      v7 = 16;
    }
  }
  *v8 = v7;
  *v9 = a4 & 0x3F;
  if ( (ushort)word_21BF6DA != 0xFFFF )
  {
    v11 = (ushort)word_21BF6DA - v6;
    if ( v11 >= 0 )
    {
      if ( v11 > 0 )
        v10 = 64;
    }
    else
    {
      LOBYTE(v11) = ~(uchar)v11;
      v10 = 128;
    }
  }
  *a5 = v10;
  result = a6;
  *a6 = v11 & 0x3F;
  return result;
}

//----- (021D1888) --------------------------------------------------------
uint *__fastcall Function_21d1888(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uchar v6;
  ushort *v7;
  int v8;
  short v10;
  short v11;
  short v12;
  short v13;
  int v14;

  v14 = a4;
  v4 = a1;
  v5 = a2;
  Function_20183c4(*(uint **)(a1 + 49168), 6u, dword_21D2970, 0);
  Function_2019ebc(*(uint **)(v4 + 49168), 6u);
  Function_20183c4(*(uint **)(v4 + 49168), 7u, dword_21D298C, 0);
  Function_20070e8(v5, 5u, *(uint **)(v4 + 49168), 7u, 0, 0, 0, *(uint *)v4);
  Function_2007130(v5, 6u, 4u, 0, 128, *(uint *)v4);
  Function_200710c(v5, 7u, *(uint **)(v4 + 49168), 7u, 0, 0, 0, *(uint *)v4);
  v6 = Function_2027b50(*(ushort **)(v4 + 8));
  Function_200dd0c(*(uint **)(v4 + 49168), 6u, 482, 6, v6, *(uint *)v4);
  Function_200daa4(*(uint **)(v4 + 49168), 6u, 473, 7, 0, *(uint *)v4);
  LoadFromNARC_PlFont1(4u, 128, *(uint *)v4);
  Function_2019690(6u, 32, 0, *(uint *)v4);
  Function_201975c(6u, 18259);
  Function_201a8d4(*(uint **)(v4 + 49168), v4 + 49172, (uchar *)dword_21D2934);
  Function_201ae78(v4 + 49172, 15, 0, 0, 0xD8u, 0x20u);
  Function_200e060(v4 + 49172, 0, 482, 6u);
  *(uint *)(v4 + 49252) = 0;
  Function_20183c4(*(uint **)(v4 + 49168), 2u, dword_21D2970, 0);
  Function_2019ebc(*(uint **)(v4 + 49168), 2u);
  Function_20183c4(*(uint **)(v4 + 49168), 3u, dword_21D298C, 0);
  Function_20070e8(v5, 5u, *(uint **)(v4 + 49168), 3u, 0, 0, 0, *(uint *)v4);
  Function_2007130(v5, 6u, 0, 0, 128, *(uint *)v4);
  Function_200710c(v5, 7u, *(uint **)(v4 + 49168), 3u, 0, 0, 0, *(uint *)v4);
  Function_200daa4(*(uint **)(v4 + 49168), 2u, 473, 7, 0, *(uint *)v4);
  LoadFromNARC_PlFont1(0, 128, *(uint *)v4);
  Function_2019690(2u, 32, 0, *(uint *)v4);
  Function_201975c(2u, 0);
  v7 = (ushort *)Function_2023790(16, *(uint *)v4);
  Function_2002bb8(2, *(uint *)v4);
  v13 = 20054;
  v12 = 13681;
  v11 = 8332;
  v10 = 0x7FFF;
  Function_201972c(2u, (int)&v13, 2, 130);
  Function_201972c(2u, (int)&v12, 2, 132);
  Function_201972c(2u, (int)&v11, 2, 134);
  Function_201972c(2u, (int)&v10, 2, 158);
  Function_201a8d4(*(uint **)(v4 + 49168), v4 + 49204, (uchar *)dword_21D2924);
  Function_201ae78(v4 + 49204, 15, 0, 0, 0xD8u, 0x20u);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v4 + 49248), 0xCu, v7);
  Function_2002eec(2, (int)v7, 0, 0x30u);
  Function_201d738_CallInitTextInterpreter(v4 + 49204, 2);
  Function_20237bc_FreeMsg((int)v7, v8);
  return Function_2002c60(2);
}

//----- (021D1B24) --------------------------------------------------------
int __fastcall Function_21d1b24(int a1)
{
  int v1;

  v1 = a1;
  Function_201a8fc(a1 + 49204);
  Function_201a8fc(v1 + 49172);
  Function_2019044(*(uint *)(v1 + 49168), 2);
  Function_2019044(*(uint *)(v1 + 49168), 6);
  Function_2019044(*(uint *)(v1 + 49168), 3);
  return Function_2019044(*(uint *)(v1 + 49168), 7);
}

//----- (021D1B70) --------------------------------------------------------
int __fastcall Function_21d1b70(int a1, uint a2, int a3)
{
  int v3;
  uint v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v3 = a1;
  v4 = a2;
  v5 = *(uint *)(a1 + 49252);
  v6 = 0;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      if ( !Function_201d724(*(uint *)(a1 + 49256) & 0xFF) )
      {
        Function_20237bc_FreeMsg(*(uint *)(v3 + 49260), v8);
        *(uint *)(v3 + 49252) = 2;
      }
    }
    else if ( v5 == 2 && (a3 || dword_21BF6C4 & 1) )
    {
      *(uint *)(a1 + 49252) = 0;
      v6 = 1;
    }
  }
  else
  {
    Function_201ae78(a1 + 49172, 15, 0, 0, 0xD8u, 0x20u);
    *(uint *)(v3 + 49260) = Function_2023790(1024, *(uint *)v3);
    Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v3 + 49248), v4, *(ushort **)(v3 + 49260));
    Function_2027ac0(*(ushort **)(v3 + 8));
    v7 = *(uint *)(v3 + 49260);
    *(uint *)(v3 + 49256) = Function_201d738_CallInitTextInterpreter(v3 + 49172, 1);
    *(uint *)(v3 + 49252) = 1;
  }
  return v6;
}

//----- (021D1C38) --------------------------------------------------------
int __fastcall Function_21d1c38(int a1, int a2, int a3)
{
  int result;

  if ( !a3 )
    result = Function_2005748(0x5DCu);
  return result;
}

//----- (021D1C4C) --------------------------------------------------------
int __fastcall Function_21d1c4c(int a1, int a2, uchar *a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int *v10;
  int (__fastcall *v11)(int, int, int);
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v19;
  int v20;
  int (__fastcall *v21)(int, int, int);
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;

  v5 = a1;
  v6 = a4;
  v19 = a2;
  Function_201a8d4(*(uint **)(a1 + 49168), a2, a3);
  v7 = 0;
  *(uint *)(v5 + 49240) = Function_2013a04(*(ushort *)(v6 + 16), *(uint *)v5);
  if ( (int)*(ushort *)(v6 + 16) > 0 )
  {
    v8 = a5;
    do
    {
      Function_2013a4c(
        *(uint **)(v5 + 49240),
        *(ushort ***)(v5 + 49248),
        *(uint *)v8,
        *(uint *)(v8 + 4));
      ++v7;
      v8 += 8;
    }
    while ( v7 < *(ushort *)(v6 + 16) );
  }
  v9 = *(uint *)v6;
  v11 = *(int (__fastcall **)(int, int, int))(v6 + 4);
  v10 = (int *)(v6 + 8);
  v20 = v9;
  v21 = v11;
  v12 = *v10;
  v13 = v10[1];
  v10 += 2;
  v22 = v12;
  v23 = v13;
  v14 = *v10;
  v15 = v10[1];
  v10 += 2;
  v24 = v14;
  v25 = v15;
  v16 = v10[1];
  v26 = *v10;
  v27 = v16;
  v20 = *(uint *)(v5 + 49240);
  v23 = v19;
  v21 = Function_21d1c38;
  *(uint *)(v5 + 49236) = Function_200112c(&v20, 0, 0, *(uint *)v5 & 0xFF);
  Function_200dc48(v23, 1, 473, 7u);
  return Function_201a954(v19, v17);
}

//----- (021D1CF4) --------------------------------------------------------
int __fastcall Function_21d1cf4(int a1, int a2, uchar *a3, int *a4, int a5, int a6, uint a7)
{
  uint *v7;
  uint v8;
  int (__fastcall *v9)(int, int, int);
  int *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v16;
  int *v17;
  ushort **v18;
  int v19;
  int (__fastcall *v20)(int, int, int);
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;

  v7 = (uint *)a1;
  v16 = a2;
  v17 = a4;
  Function_201a8d4(*(uint **)(a1 + 49168), a2, a3);
  v18 = (ushort **)LoadFromMsgNARC(0, 26, a5, *v7);
  v8 = 0;
  v7[12310] = (uint)Function_2013a04(a7, *v7);
  if ( a7 )
  {
    do
    {
      Function_2013a4c((uint *)v7[12310], v18, *(uchar *)(a6 + v8), v8);
      ++v8;
    }
    while ( v8 < a7 );
  }
  Function_200b190((ushort *)v18);
  v9 = (int (__fastcall *)(int, int, int))v17[1];
  v19 = *v17;
  v20 = v9;
  v10 = v17 + 2;
  v11 = v10[1];
  v21 = *v10;
  v22 = v11;
  v10 += 2;
  v12 = v10[1];
  v23 = *v10;
  v24 = v12;
  v10 += 2;
  v13 = v10[1];
  v25 = *v10;
  v26 = v13;
  v19 = v7[12310];
  LOWORD(v23) = a7;
  v22 = v16;
  v20 = Function_21d1c38;
  v7[12309] = Function_200112c(&v19, 0, 0, *v7 & 0xFF);
  Function_200dc48(v22, 1, 473, 7u);
  return Function_201a954(v16, v14);
}

//----- (021D1DB4) --------------------------------------------------------
uint __fastcall Function_21d1db4(int a1)
{
  int v1;

  v1 = a1;
  Function_200dc9c(a1 + 49188, 0);
  Function_201a8fc(v1 + 49188);
  Function_2001384(*(uint *)(v1 + 49236), 0, 0);
  return Function_2013a3c(*(int **)(v1 + 49240));
}

//----- (021D1DEC) --------------------------------------------------------
int __fastcall Function_21d1dec(uint *a1)
{
  uint *v1;
  int v2;
  ushort *v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  v2 = Function_2023790(1024, *a1);
  v3 = (ushort *)Function_2023790(1024, *v1);
  Function_201a8d4((uint *)v1[12292], (int)(v1 + 12305), (uchar *)dword_21D291C);
  Function_201ae78((int)(v1 + 12305), 15, 0, 0, 0xD8u, 0x30u);
  Function_200dc48((int)(v1 + 12305), 0, 473, 7u);
  Function_200bdd0(v1[12316], 0, v1[12485]);
  Function_200be08(v1[12316], 1u, v1[12485], v1[12486]);
  Function_200b1b8_CallMsgDecrypt((ushort **)v1[12312], 0xDu, v3);
  Function_200c388((uint *)v1[12316], v2, (int)v3);
  Function_201d738_CallInitTextInterpreter((int)(v1 + 12305), 0);
  Function_20237bc_FreeMsg((int)v3, v4);
  Function_20237bc_FreeMsg(v2, v5);
  return Function_201a954((int)(v1 + 12305), v6);
}

//----- (021D1EBC) --------------------------------------------------------
int __fastcall Function_21d1ebc(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_2023790(64, *a1);
  v7 = Function_2023790(64, *v3);
  Function_201a8d4((uint *)v3[12292], (int)(v3 + 12305), (uchar *)dword_21D291C);
  Function_201ae78((int)(v3 + 12305), 15, 0, 0, 0xD8u, 0x30u);
  Function_200dc48((int)(v3 + 12305), 0, 473, 7u);
  Function_21d27e8(v4, v5, v6, v7, *v3);
  if ( v5 )
    Function_201d738_CallInitTextInterpreter((int)(v3 + 12305), 0);
  Function_201d738_CallInitTextInterpreter((int)(v3 + 12305), 0);
  Function_20237bc_FreeMsg(v7, v8);
  Function_20237bc_FreeMsg(v6, v9);
  return Function_201a954((int)(v3 + 12305), v10);
}

//----- (021D1F74) --------------------------------------------------------
uint __fastcall Function_21d1f74(int a1)
{
  int v1;

  v1 = a1;
  Function_200dc9c(a1 + 49220, 0);
  return Function_201a8fc(v1 + 49220);
}

//----- (021D1F90) --------------------------------------------------------
uint __fastcall Function_21d1f90(int a1, int a2, int a3, int a4)
{
  short *v4;
  ushort *v5;
  int v6;
  uint result;
  int v8;
  uint v9;
  uint v10;
  uint v11;
  uint v12;
  short *v13;
  int v14;
  int v15;
  uint v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  uint v22;
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

  v32 = a4;
  v4 = (short *)a1;
  if ( *(uint *)(a1 + 49960) )
  {
    v27 = 0;
    v26 = (short)(*(ushort *)(a1 + 49844) - 128);
    v25 = (short)(*(uint *)(a1 + 49844) + 128);
    v8 = *(uint *)(a1 + 49848);
    v24 = (short)(v8 - 128);
    v23 = (short)(v8 + 128);
    v9 = *(uint *)(a1 + 12);
    v10 = 256;
    v30 = *(uint *)(a1 + 49844);
    v22 = v9;
    v31 = *(uint *)(a1 + 49848);
    Function_21d2868(&v30);
    v11 = *((uint *)v4 + 3);
    v12 = 0;
    if ( v11 )
    {
      v13 = v4;
      do
      {
        v14 = v13[8];
        if ( v14 > v26 && v14 < v25 )
        {
          v15 = v13[9];
          if ( v15 > v24 && v15 < v23 )
          {
            if ( v13[28] )
            {
              v28 = v13[8];
              v29 = v13[9];
              Function_21d2868(&v28);
              v16 = Function_21d28c0(&v30, &v28);
              if ( v16 < v10 )
              {
                v10 = v16;
                v22 = v12;
              }
            }
          }
        }
        v11 = *((uint *)v4 + 3);
        ++v12;
        v13 += 24;
      }
      while ( v12 < v11 );
    }
    if ( v22 != v11 )
    {
      v21 = Function_2023790(64, *(uint *)v4);
      v17 = Function_2023790(64, *(uint *)v4);
      Function_201ae78((int)(v4 + 24586), 15, 0, 0, 0xD8u, 0x30u);
      v18 = 24 * v22;
      Function_21d27e8(
        (ushort)v4[24 * v22 + 29],
        (ushort)v4[24 * v22 + 30],
        v21,
        v17,
        *(uint *)v4);
      if ( v4[24 * v22 + 30] )
        Function_201d738_CallInitTextInterpreter((int)(v4 + 24586), 1);
      Function_201d738_CallInitTextInterpreter((int)(v4 + 24586), 1);
      Function_20237bc_FreeMsg(v17, v19);
      Function_20237bc_FreeMsg(v21, v20);
      *((uint *)v4 + 12461) = v4[v18 + 8];
      *((uint *)v4 + 12462) = v4[v18 + 9];
      v27 = 1;
    }
    result = v27;
    if ( !v27 )
    {
      result = 49960;
      *((uint *)v4 + 12490) = 0;
    }
  }
  else
  {
    v5 = (ushort *)Function_2023790(1024, *(uint *)a1);
    Function_201ae78((int)(v4 + 24586), 15, 0, 0, 0xD8u, 0x30u);
    Function_200b1b8_CallMsgDecrypt(*((ushort ***)v4 + 12312), 0xEu, v5);
    Function_201d738_CallInitTextInterpreter((int)(v4 + 24586), 1);
    result = Function_20237bc_FreeMsg((int)v5, v6);
  }
  return result;
}

//----- (021D2150) --------------------------------------------------------
int (__fastcall *__fastcall Function_21d2150(uint *a1, int a2))(uint *a1, int a2, uint a3, int a4)
{
  uint *v2;
  int v3;

  v2 = a1;
  v3 = a2;
  a1[12339] = Function_2006cb8_LoadFileInMemory(a2, 0, *a1);
  Function_201ca3c(v2 + 12317, (int *)v2 + 12338, (int *)v2 + 12339);
  v2[12453] = Function_2006cb8_LoadFileInMemory(v3, 1u, *v2);
  Function_201ca3c(v2 + 12403, (int *)v2 + 12448, (int *)v2 + 12453);
  v2[12454] = Function_2006cb8_LoadFileInMemory(v3, 2u, *v2);
  Function_201ca3c(v2 + 12424, (int *)v2 + 12449, (int *)v2 + 12454);
  v2[12451] = Function_2006cb8_LoadFileInMemory(v3, 3u, *v2);
  Function_201ca3c(v2 + 12361, (int *)v2 + 12446, (int *)v2 + 12451);
  v2[12452] = Function_2006cb8_LoadFileInMemory(v3, 4u, *v2);
  return Function_201ca3c(v2 + 12382, (int *)v2 + 12447, (int *)v2 + 12452);
}

//----- (021D2210) --------------------------------------------------------
uint __fastcall Function_21d2210(int *a1)
{
  int *v1;

  v1 = a1;
  free(a1[12452]);
  free(v1[12451]);
  free(v1[12454]);
  free(v1[12453]);
  return free(v1[12339]);
}

//----- (021D2254) --------------------------------------------------------
uint *__fastcall Function_21d2254(uint *result)
{
  result[12455] = 0;
  result[12456] = 0;
  result[12457] = 0;
  result[12458] = 4096;
  result[12459] = 4096;
  result[12460] = 4096;
  result[12461] = 6720;
  result[12462] = 31744;
  result[12463] = 0;
  result[12464] = 4096;
  result[12465] = 4096;
  result[12466] = 4096;
  return result;
}

//----- (021D22B0) --------------------------------------------------------
int __fastcall Function_21d22b0(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uchar savedregs[24];

  *(uint *)savedregs = a4;
  v4 = a1;
  v6 = 0;
  v7 = 0;
  v8 = 1212416;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  Function_2020784(&v9, &v6, 1473, 0, 0, *(uint *)(a1 + 49868));
  Function_20206bc(0, 409600, *(uint *)(v4 + 49868));
  Function_2020854(0, *(int **)(v4 + 49868));
  Function_20203d4(*(uint *)(v4 + 49868));
  if ( *(ushort *)(v4 + 49908) )
    *(ushort *)(v4 + 49880) = 0;
  else
    *(ushort *)(v4 + 49880) = 1;
  do
    result = Function_21d2644(v4);
  while ( result != 1 );
  return result;
}

//----- (021D2334) --------------------------------------------------------
int __fastcall Function_21d2334(uint *a1)
{
  a1[12471] = 0;
  a1[12472] = 0;
  a1[12473] = -4095;
  return Function_20af51c(0, (short)a1[12471], (short)a1[12472], (short)a1[12473]);
}

//----- (021D2370) --------------------------------------------------------
int __fastcall Function_21d2370(int *a1, uint *a2)
{
  uint *v2;
  int *v3;
  int v4;
  int v5;
  char v7;

  v2 = a2;
  v3 = a1;
  MTX_RotY33_(
    a1,
    SLOWORD(Unknown_20f983c[(a2[1] & 0xFFFF) >> 4]),
    *((short *)Unknown_20f983c + 2 * ((a2[1] & 0xFFFF) >> 4) + 1));
  MTX_RotX33_(
    &v7,
    SLOWORD(Unknown_20f983c[(*v2 & 0xFFFF) >> 4]),
    *((short *)Unknown_20f983c + 2 * ((*v2 & 0xFFFF) >> 4) + 1));
  MTX_Concat33(v3, (int *)&v7, v3, v4);
  MTX_RotZ33_(
    &v7,
    SLOWORD(Unknown_20f983c[(v2[2] & 0xFFFF) >> 4]),
    *((short *)Unknown_20f983c + 2 * ((v2[2] & 0xFFFF) >> 4) + 1));
  return MTX_Concat33(v3, (int *)&v7, v3, v5);
}

//----- (021D23E8) --------------------------------------------------------
int __fastcall Function_21d23e8(int *a1, uint *a2)
{
  uint *v2;
  int *v3;
  int v4;
  int v5;
  char v7;

  v2 = a2;
  v3 = a1;
  MTX_RotY33_(
    a1,
    SLOWORD(Unknown_20f983c[(*a2 & 0xFFFF) >> 4]),
    *((short *)Unknown_20f983c + 2 * ((*a2 & 0xFFFF) >> 4) + 1));
  MTX_RotX33_(
    &v7,
    SLOWORD(Unknown_20f983c[(0xFFFF * v2[1] & 0xFFFF) >> 4]),
    *((short *)Unknown_20f983c + 2 * ((0xFFFF * v2[1] & 0xFFFF) >> 4) + 1));
  MTX_Concat33(v3, (int *)&v7, v3, v4);
  MTX_RotZ33_(
    &v7,
    *((short *)Unknown_20f983c + 2 * ((v2[2] & 0xFFFF) >> 4) + 1),
    SLOWORD(Unknown_20f983c[(v2[2] & 0xFFFF) >> 4]));
  return MTX_Concat33(v3, (int *)&v7, v3, v5);
}

//----- (021D2460) --------------------------------------------------------
int __fastcall Function_21d2460(int a1, char a2, char a3)
{
  int v3;
  char v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int result;
  int v10;
  int v11;
  int v12;
  int v13;

  v3 = a1;
  v4 = a3;
  v5 = (short)*(uint *)(a1 + 49848);
  v6 = 0;
  v7 = (short)*(uint *)(a1 + 49844);
  if ( a2 & 1 || (v8 = *(uint *)(a1 + 49912), v8 & 1) )
  {
    if ( *(ushort *)(a1 + 49908) == 1 )
    {
      if ( *(ushort *)(a1 + 49880) )
        *(ushort *)(a1 + 49880) = 0;
      else
        *(ushort *)(a1 + 49880) = 1;
    }
    result = 1;
  }
  else
  {
    if ( *(ushort *)(a1 + 49880) )
    {
      v13 = *(uint *)(a1 + 49928);
      if ( v13 || *(uint *)(a1 + 49932) )
      {
        v11 = 10 * v13 & 0xFFFF;
        v12 = 10 * *(uint *)(v3 + 49932) & 0xFFFF;
      }
      else
      {
        v11 = 32;
        v12 = 32;
      }
    }
    else
    {
      v10 = *(uint *)(a1 + 49928);
      if ( v10 || *(uint *)(a1 + 49932) )
      {
        v11 = 85 * v10 & 0xFFFF;
        v12 = 85 * *(uint *)(v3 + 49932) & 0xFFFF;
      }
      else
      {
        v11 = 512;
        v12 = 512;
      }
    }
    if ( v4 & 0x20 || v8 & 0x20 )
    {
      if ( *(ushort *)(v3 + 49908) == 1 )
      {
        *(uint *)(v3 + 49848) += v11;
      }
      else if ( v5 < -10208 )
      {
        *(uint *)(v3 + 49848) += v11;
      }
      v6 = 1;
    }
    if ( v4 & 0x10 || *(uint *)(v3 + 49912) & 0x10 )
    {
      if ( *(ushort *)(v3 + 49908) == 1 )
      {
        *(uint *)(v3 + 49848) -= v11;
      }
      else if ( v5 > -13184 )
      {
        *(uint *)(v3 + 49848) -= v11;
      }
      v6 = 1;
    }
    if ( v4 & 0x40 || *(uint *)(v3 + 49912) & 0x40 )
    {
      if ( *(ushort *)(v3 + 49908) == 1 )
      {
        if ( v7 + v12 >= 15872 )
          *(uint *)(v3 + 49844) = 15872;
        else
          *(uint *)(v3 + 49844) += v12;
      }
      else if ( v7 < 8224 )
      {
        *(uint *)(v3 + 49844) += v12;
      }
      v6 = 1;
    }
    if ( v4 & 0x80 || *(uint *)(v3 + 49912) & 0x80 )
    {
      if ( *(ushort *)(v3 + 49908) == 1 )
      {
        if ( v7 - v12 <= -15872 )
          *(uint *)(v3 + 49844) = -15872;
        else
          *(uint *)(v3 + 49844) -= v12;
      }
      else if ( v7 > 4864 )
      {
        *(uint *)(v3 + 49844) -= v12;
      }
      v6 = 1;
    }
    result = v6;
  }
  return result;
}

//----- (021D2644) --------------------------------------------------------
int __fastcall Function_21d2644(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = Function_2020a90(*(uint *)(a1 + 49868));
  v3 = 0;
  if ( *(ushort *)(v1 + 49880) )
  {
    if ( *(ushort *)(v1 + 49880) == 1 )
    {
      if ( v2 <= 360448 )
      {
        v2 = 327680;
        v3 = 1;
      }
      else
      {
        v2 -= 0x8000;
        *(uint *)(v1 + 49856) -= 128;
        *(uint *)(v1 + 49860) = *(uint *)(v1 + 49856);
      }
    }
  }
  else if ( v2 >= 1179648 )
  {
    v2 = 1212416;
    v3 = 1;
  }
  else
  {
    v2 += 0x8000;
    *(uint *)(v1 + 49856) += 128;
    *(uint *)(v1 + 49860) = *(uint *)(v1 + 49856);
  }
  Function_2020a50(v2, *(uint *)(v1 + 49868));
  return v3;
}

//----- (021D26D0) --------------------------------------------------------
int __fastcall Function_21d26d0(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int *v5;
  char *v6;
  int v7;
  int v8;
  int v9;
  int result;
  int *v11;
  char *v12;
  int v13;
  int v14;
  int v15;
  int *v16;
  char *v17;
  int v18;
  int v19;
  int v20;
  uint v21;
  int *v22;
  int *v23;
  int v24[9];
  char v25;
  int v26[9];
  int v27;

  v27 = a4;
  v4 = dword_21D29E8;
  v5 = a1;
  v6 = (char *)v26;
  v7 = 4;
  do
  {
    v8 = *v4;
    v9 = v4[1];
    v4 += 2;
    *(uint *)v6 = v8;
    *((uint *)v6 + 1) = v9;
    v6 += 8;
    --v7;
  }
  while ( v7 );
  *(uint *)v6 = *v4;
  result = v5[12474];
  if ( result )
  {
    if ( result == 1 )
    {
      Call_G3X_Reset();
      Function_20203ec();
      Function_21d2370(v26, v5 + 12461);
      Function_201ca74(v5 + 12317, v5 + 12455, v26, v5 + 12458);
      v11 = dword_21D2A54;
      v12 = &v25;
      v13 = 4;
      do
      {
        v14 = *v11;
        v15 = v11[1];
        v11 += 2;
        *(uint *)v12 = v14;
        *((uint *)v12 + 1) = v15;
        v12 += 8;
        --v13;
      }
      while ( v13 );
      *(uint *)v12 = *v11;
      Function_201ca74(v5 + 12424, v5 + 12455, (int *)&v25, v5 + 12464);
      v16 = dword_21D2A0C;
      v17 = (char *)v24;
      v18 = 4;
      do
      {
        v19 = *v16;
        v20 = v16[1];
        v16 += 2;
        *(uint *)v17 = v19;
        *((uint *)v17 + 1) = v20;
        v17 += 8;
        --v18;
      }
      while ( v18 );
      v21 = 0;
      *(uint *)v17 = *v16;
      if ( v5[3] )
      {
        v22 = v5 + 5;
        v23 = v5;
        do
        {
          MTX_Concat33(v22, v26, v24, (int)v17);
          if ( *((ushort *)v23 + 28) )
            Function_201ca74(&v5[21 * *((ushort *)v23 + 28) + 12340], v5 + 12455, v24, v5 + 12464);
          ++v21;
          v22 += 12;
          v23 += 12;
        }
        while ( v21 < v5[3] );
      }
      result = Function_20241bc(0, 1);
    }
    else if ( result == 2 )
    {
      Call_G3X_Reset();
      Function_20241bc(0, 1);
      result = 49896;
      v5[12474] = 0;
    }
  }
  return result;
}

//----- (021D27E8) --------------------------------------------------------
int __fastcall Function_21d27e8(int a1, uint a2, ushort *a3, ushort *a4, uint a5)
{
  uint v5;
  ushort *v6;
  int v7;
  ushort **v8;
  int v9;
  int v10;
  ushort **v11;
  uint v13;
  ushort *v14;

  v5 = a1;
  v13 = a2;
  v6 = a3;
  v14 = a4;
  v7 = Function_21d16f8(a1);
  v8 = (ushort **)LoadFromMsgNARC(0, 26, 694, a5);
  Function_200b1b8_CallMsgDecrypt(v8, v5, v6);
  Function_200b190((ushort *)v8);
  if ( v7 )
  {
    v9 = 1;
  }
  else
  {
    v9 = 0;
    v7 = 1;
    v13 = 0;
  }
  v10 = Function_209972c(v7);
  v11 = (ushort **)LoadFromMsgNARC(0, 26, v10, a5);
  Function_200b1b8_CallMsgDecrypt(v11, v13, v14);
  Function_200b190((ushort *)v11);
  return v9;
}

//----- (021D2854) --------------------------------------------------------
BOOL __fastcall Function_21d2854(int a1)
{
  return Function_21d16f8(a1) != 0;
}

//----- (021D2868) --------------------------------------------------------
uint __fastcall Function_21d2868(int *a1)
{
  int *v1;
  int v2;
  int v3;
  int v4;
  uint result;
  int v6;

  v1 = a1;
  v2 = *a1;
  if ( v2 < 0 )
  {
    if ( v2 < 0 )
      v2 = -v2;
    *v1 += 0xFFFF * (s32_div_f(v2, 0xFFFF) + 1);
  }
  else
  {
    s32_div_f(v2, 0xFFFF);
    *v1 = v3;
  }
  v4 = v1[1];
  if ( v4 < 0 )
  {
    if ( v4 < 0 )
      v4 = -v4;
    result = v1[1] + 0xFFFF * (s32_div_f(v4, 0xFFFF) + 1);
    v1[1] = result;
  }
  else
  {
    result = s32_div_f(v4, 0xFFFF);
    v1[1] = v6;
  }
  return result;
}

//----- (021D28C0) --------------------------------------------------------
int __fastcall Function_21d28c0(uint *a1, uint *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = *a1 - *a2;
  if ( v2 < 0 )
    v2 = *a2 - *a1;
  v3 = a1[1];
  v4 = a2[1];
  v5 = v3 - v4;
  if ( v3 - v4 < 0 )
    v5 = v4 - v3;
  if ( v2 > (int)Function_201d278(0xB4u) )
    v2 = 0xFFFF - v2;
  if ( v5 > (int)Function_201d278(0xB4u) )
    v5 = 0xFFFF - v5;
  return (int)FX_Sqrt((v2 * v2 + v5 * v5) << 12) >> 12;
}

