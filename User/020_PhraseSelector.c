//----- (021D0D80) --------------------------------------------------------
int __fastcall Function_20_21d0d80(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  char v7;

  v2 = a2;
  v3 = *a2;
  v4 = a1;
  if ( !v3 )
  {
    Function_2004550(0x3Eu, 0);
    Function_2017fc8(3, 34, 0x8000);
    Function_2017fc8(3, 35, 163840);
    v5 = *(uint *)(Function_21d0ec8(v4) + 20);
    Function_21d21a0(v5, 0);
    ++*v2;
    return 0;
  }
  if ( v3 != 1 )
    return 0;
  v6 = LoadOverlayData1c(a1);
  if ( !Function_21d21f8(*(uint *)(v6 + 20)) )
    return 0;
  if ( *(uint *)(v6 + 4) == 2 )
    v7 = Function_21d2df4(*(uint *)(v6 + 20));
  else
    v7 = 0;
  *(uchar *)(v6 + 100) = v7;
  return 1;
}

//----- (021D0DF8) --------------------------------------------------------
int __fastcall Function_20_21d0df8(int a1)
{
  int v1;
  void (__fastcall *v2)(int, int);

  v1 = LoadOverlayData1c(a1);
  *(ushort *)(v1 + 48) = dword_21BF6C4;
  *(ushort *)(v1 + 50) = dword_21BF6C0;
  *(ushort *)(v1 + 52) = dword_21BF6C8;
  Function_202404c(*(int **)(v1 + 64));
  v2 = *(void (__fastcall **)(int, int))(v1 + 44);
  if ( !v2 )
    return (*(int (__fastcall **)(int, int))(v1 + 32))(v1, v1 + 28);
  v2(v1, v1 + 40);
  return 0;
}

//----- (021D0E38) --------------------------------------------------------
int __fastcall Function_21d0e38(int result, char a2, int a3)
{
  int v3;

  v3 = a3;
  switch ( a2 )
  {
    case 0:
      *(uint *)(a3 + 56) = result;
      if ( result == 2 )
      {
        result = Function_21d21a0(*(uint *)(a3 + 20), 25);
      }
      else if ( result == 3 )
      {
        result = Function_21d21a0(*(uint *)(a3 + 20), 26);
      }
      break;
    case 1:
    case 3:
      if ( result == 2 )
      {
        Function_21d21a0(*(uint *)(a3 + 20), 27);
      }
      else if ( result == 3 )
      {
        Function_21d21a0(*(uint *)(a3 + 20), 28);
      }
      result = 4;
      *(uint *)(v3 + 56) = 4;
      break;
    case 2:
      if ( (uint)(result - 2) <= 1 )
        *(uint *)(a3 + 56) = result;
      break;
    default:
      result = 4;
      *(uint *)(a3 + 56) = 4;
      break;
  }
  return result;
}

//----- (021D0EA8) --------------------------------------------------------
int __fastcall Function_20_21d0ea8(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  Function_21d1014(v2, v1);
  Function_201807c(34);
  Function_201807c(35);
  return 1;
}

//----- (021D0EC8) --------------------------------------------------------
int __fastcall Function_21d0ec8(int a1)
{
  int v1;
  int v2;
  uchar *v3;

  v1 = a1;
  v2 = MallocSomeDataAndStorePtrInOverlayData1c(a1, 104, 0x22u);
  v3 = (uchar *)LoadPtrToOverWorldDataIn18(v1);
  *(uint *)v2 = v3;
  *(uint *)(v2 + 4) = Function_2097550(v3);
  Function_209756c(*(uchar **)v2, (ushort *)(v2 + 16), (ushort *)(v2 + 8));
  if ( *(uint *)(v2 + 4) == 2 )
    Function_21d0f64(v2 + 96, v2 + 8);
  *(uint *)(v2 + 24) = Function_20998ec(0x22u, *(uint *)v2);
  *(uint *)(v2 + 20) = Function_21d2098(v2, *(uint *)(v2 + 24));
  *(uint *)(v2 + 64) = Function_2023fcc((int)dword_21D5154, 5u, (int)Function_21d0e38, v2, 0x22u);
  *(uint *)(v2 + 68) = 0;
  *(uint *)(v2 + 72) = 0;
  *(uchar *)(v2 + 101) = 0;
  *(uint *)(v2 + 44) = 0;
  *(uint *)(v2 + 40) = 0;
  *(uint *)(v2 + 32) = Function_21d103c;
  *(uint *)(v2 + 28) = 0;
  *(ushort *)(v2 + 78) = 0;
  Function_21d1c4c(v2, Function_21d1c5c);
  return v2;
}

//----- (021D0F64) --------------------------------------------------------
int __fastcall Function_21d0f64(ushort *a1, ushort *a2)
{
  int v2;
  short *v3;
  int result;

  v2 = (int)a2;
  v3 = a1;
  *a1 = Function_2014c80(a2);
  *((uchar *)v3 + 3) = Function_2014cd4(*v3);
  result = Function_2014c84(v2);
  *((uchar *)v3 + 2) = result;
  return result;
}

//----- (021D0F88) --------------------------------------------------------
uint __fastcall Function_21d0f88(short *a1, uint a2)
{
  short *v2;
  uint v3;

  v2 = a1;
  v3 = a2;
  ++*((uchar *)v2 + 2);
  if ( *((char *)a1 + 2) >= *((char *)a1 + 3) )
  {
    *((uchar *)a1 + 2) = 0;
    if ( ++*a1 >= 5 )
      *a1 = 0;
    *((uchar *)a1 + 3) = Function_2014cd4(*a1);
  }
  return Function_2014ce0(v3, *v2, *((char *)v2 + 2));
}

//----- (021D0FCC) --------------------------------------------------------
uint __fastcall Function_21d0fcc(short *a1, uint a2)
{
  short *v2;
  uint v3;

  v2 = a1;
  v3 = a2;
  if ( (char)--*((uchar *)a1 + 2) < 0 )
  {
    if ( --*a1 < 0 )
      *a1 = 4;
    *((uchar *)a1 + 3) = Function_2014cd4(*a1);
    *((uchar *)v2 + 2) = *((uchar *)v2 + 3) - 1;
  }
  return Function_2014ce0(v3, *v2, *((char *)v2 + 2));
}

//----- (021D1014) --------------------------------------------------------
int __fastcall Function_21d1014(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_2024034(*(uint *)(a1 + 64));
  Function_21d2128(*(uint *)(v2 + 20));
  Function_209992c(*(uint *)(v2 + 24));
  return FreeSomeDataAndStore0InOverlayData1c(v3);
}

//----- (021D1034) --------------------------------------------------------
int __fastcall Function_21d1034(int result, int a2)
{
  *(uint *)(result + 32) = a2;
  *(uint *)(result + 28) = 0;
  return result;
}

//----- (021D103C) --------------------------------------------------------
int __fastcall Function_21d103c(int a1)
{
  return ((int (*)(void))*(&off_21D5148 + *(uint *)(a1 + 4)))();
}

//----- (021D1050) --------------------------------------------------------
int __fastcall Function_21d1050(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  short v6;

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  if ( *a2 )
  {
    if ( v4 == 1 )
    {
      if ( Function_21d21f8(*(uint *)(v3 + 20)) )
        Function_21d1034(v3, (int)Function_21d1468);
    }
    else if ( v4 == 2 && Function_21d21f8(*(uint *)(v3 + 20)) )
    {
      Function_21d1034(v3, (int)Function_21d15a0);
    }
  }
  else
  {
    v5 = *(uint *)(v3 + 56);
    if ( !v5 && *(uchar *)(v3 + 101) || v5 == 1 && *(uchar *)(v3 + 101) != 1 || (v6 = *(ushort *)(v3 + 48), v6 & 4) )
    {
      Function_21d1c4c(v3, Function_21d1f38);
    }
    else if ( v6 & 0x88 )
    {
      Function_2005748(0x5DCu);
      *(ushort *)(v3 + 76) = 0;
      Function_21d21a0(*(uint *)(v3 + 20), 4);
      *v2 = 1;
    }
    else if ( v6 & 2 )
    {
      Function_2005748(0x5DCu);
      Function_21d1c4c(v3, Function_21d1dbc);
    }
    else if ( v6 & 1 )
    {
      Function_2005748(0x5DCu);
      *(ushort *)(v3 + 80) = 0;
      Function_21d21a0(*(uint *)(v3 + 20), 6);
      *v2 = 2;
    }
  }
  return 0;
}

//----- (021D1130) --------------------------------------------------------
int __fastcall Function_21d1130(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  short v6;

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  if ( *a2 )
  {
    if ( v4 == 1 )
    {
      if ( Function_21d21f8(*(uint *)(v3 + 20)) )
        Function_21d1034(v3, (int)Function_21d1468);
    }
    else if ( v4 == 2 && Function_21d21f8(*(uint *)(v3 + 20)) )
    {
      Function_21d1034(v3, (int)Function_21d15a0);
    }
  }
  else
  {
    v5 = *(uint *)(v3 + 56);
    if ( !v5 && *(uchar *)(v3 + 101) || v5 == 1 && *(uchar *)(v3 + 101) != 1 || (v6 = *(ushort *)(v3 + 48), v6 & 4) )
    {
      Function_21d1c4c(v3, Function_21d1f38);
    }
    else if ( v6 & 0x88 )
    {
      Function_2005748(0x5DCu);
      *(ushort *)(v3 + 76) = 0;
      Function_21d21a0(*(uint *)(v3 + 20), 4);
      *v2 = 1;
    }
    else if ( v6 & 0x20 )
    {
      if ( *(ushort *)(v3 + 78) )
      {
        Function_2005748(0x5DCu);
        *(ushort *)(v3 + 78) = 0;
        Function_21d21a0(*(uint *)(v3 + 20), 12);
      }
    }
    else if ( v6 & 0x10 )
    {
      if ( !*(ushort *)(v3 + 78) )
      {
        Function_2005748(0x5DCu);
        *(ushort *)(v3 + 78) = 1;
        Function_21d21a0(*(uint *)(v3 + 20), 12);
      }
    }
    else if ( v6 & 2 )
    {
      Function_2005748(0x5DCu);
      Function_21d1c4c(v3, Function_21d1dbc);
    }
    else if ( v6 & 1 )
    {
      Function_2005748(0x5DCu);
      *(ushort *)(v3 + 80) = 0;
      Function_21d21a0(*(uint *)(v3 + 20), 6);
      *v2 = 2;
    }
  }
  return 0;
}

//----- (021D1260) --------------------------------------------------------
int __fastcall Function_21d1260(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  short v5;
  short v6;
  short v7;

  v2 = a2;
  v3 = a1;
  switch ( (uchar)*a2 )
  {
    case 0u:
      *(uchar *)(a1 + 100) = Function_21d2df4(*(uint *)(a1 + 20));
      *v2 = 1;
      goto LABEL_3;
    case 1u:
LABEL_3:
      v4 = *(uint *)(v3 + 56);
      if ( !v4 && *(uchar *)(v3 + 101) || v4 == 1 && *(uchar *)(v3 + 101) != 1 || (v5 = *(ushort *)(v3 + 48), v5 & 4) )
      {
        Function_21d1c4c(v3, Function_21d1f38);
        return 0;
      }
      if ( v5 & 0x40 )
      {
        if ( *(uchar *)(v3 + 100) && *(ushort *)(v3 + 78) )
        {
          Function_2005748(0x5DCu);
          --*(ushort *)(v3 + 78);
          Function_21d21a0(*(uint *)(v3 + 20), 12);
        }
      }
      else
      {
        if ( v5 & 0x80 )
        {
          Function_2005748(0x5DCu);
          if ( !*(uchar *)(v3 + 100) || *(ushort *)(v3 + 78) >= *(uchar *)(v3 + 100) - 1 )
          {
            *(ushort *)(v3 + 76) = 0;
            Function_21d21a0(*(uint *)(v3 + 20), 4);
            *v2 = 3;
            return 0;
          }
          ++*(ushort *)(v3 + 78);
          Function_21d21a0(*(uint *)(v3 + 20), 12);
        }
        v6 = *(ushort *)(v3 + 48);
        if ( v6 & 8 || v6 & 1 && !*(uchar *)(v3 + 100) )
        {
          Function_2005748(0x5DCu);
          *(ushort *)(v3 + 76) = 0;
          Function_21d21a0(*(uint *)(v3 + 20), 4);
          *v2 = 3;
        }
        else
        {
          v7 = *(ushort *)(v3 + 52);
          if ( v7 & 0x20 )
          {
            Function_2005748(0x5DCu);
            *(ushort *)(v3 + 78) = 0;
            Function_21d0fcc((short *)(v3 + 96), v3 + 8);
            Function_21d21a0(*(uint *)(v3 + 20), 3);
            *v2 = 2;
          }
          else if ( v7 & 0x10 )
          {
            Function_2005748(0x5DCu);
            *(ushort *)(v3 + 78) = 0;
            Function_21d0f88((short *)(v3 + 96), v3 + 8);
            Function_21d21a0(*(uint *)(v3 + 20), 3);
            *v2 = 2;
          }
          else if ( v6 & 2 )
          {
            Function_2005748(0x5DCu);
            Function_21d1c4c(v3, Function_21d1dbc);
          }
          else if ( v6 & 1 )
          {
            Function_2005748(0x5DCu);
            *(ushort *)(v3 + 80) = 0;
            Function_21d21a0(*(uint *)(v3 + 20), 6);
            *v2 = 4;
          }
        }
      }
      return 0;
    case 2u:
      if ( Function_21d2210(*(uint *)(a1 + 20), 3) )
        *v2 = 0;
      return 0;
    case 3u:
      if ( Function_21d21f8(*(uint *)(a1 + 20)) )
        Function_21d1034(v3, (int)Function_21d1468);
      return 0;
    case 4u:
      if ( Function_21d21f8(*(uint *)(a1 + 20)) )
        Function_21d1034(v3, (int)Function_21d15a0);
      return 0;
    default:
      return 0;
  }
}

//----- (021D1468) --------------------------------------------------------
int __fastcall Function_21d1468(int a1, uint *a2)
{
  uint *v2;
  uint v3;
  int v4;
  int v5;
  short v6;

  v2 = a2;
  v3 = *a2;
  v4 = a1;
  if ( v3 <= 5 )
    JUMPOUT(__CS__, *((short *)&off_21D1482 + v3) + 35460228);
  switch ( (uchar)v3 )
  {
    case 0:
      if ( Function_21d21f8(*(uint *)(a1 + 20)) )
      {
        v5 = *(uint *)(v4 + 56);
        if ( !v5 && *(uchar *)(v4 + 101) || v5 == 1 && *(uchar *)(v4 + 101) != 1 || (v6 = *(ushort *)(v4 + 48), v6 & 4) )
        {
          Function_21d1c4c(v4, Function_21d1f38);
        }
        else if ( v6 & 0x30 )
        {
          Function_2005748(0x5DCu);
          *(ushort *)(v4 + 76) ^= 1u;
          Function_21d21a0(*(uint *)(v4 + 20), 13);
        }
        else if ( v6 & 8 )
        {
          Function_2005748(0x5DCu);
          *(ushort *)(v4 + 76) = 0;
          Function_21d21a0(*(uint *)(v4 + 20), 13);
        }
        else if ( v6 & 0x40 )
        {
          Function_2005748(0x5DCu);
          Function_21d21a0(*(uint *)(v4 + 20), 5);
          *v2 = 5;
        }
        else if ( v6 & 1 )
        {
          Function_2005748(0x5DCu);
          if ( *(ushort *)(v4 + 76) )
            *v2 = 2;
          else
            *v2 = 1;
        }
        else if ( v6 & 2 )
        {
          Function_2005748(0x5DCu);
          *v2 = 2;
        }
      }
      break;
    case 1:
      *v2 = 3;
      Function_21d1c4c(a1, Function_21d1c90);
      break;
    case 2:
      *v2 = 4;
      Function_21d1c4c(a1, Function_21d1dbc);
      break;
    case 3:
    case 4:
      *v2 = 0;
      break;
    case 5:
      if ( Function_21d21f8(*(uint *)(a1 + 20)) )
        Function_21d1034(v4, (int)Function_21d103c);
      break;
    default:
      return 0;
  }
  return 0;
}

//----- (021D15A0) --------------------------------------------------------
int __fastcall Function_21d15a0(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  short v6;

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  if ( *a2 )
  {
    if ( v4 == 1 )
    {
      if ( Function_21d21f8(*(uint *)(v3 + 20)) )
        Function_21d1034(v3, *(uint *)(v3 + 36));
    }
    else if ( v4 == 2 && Function_21d2210(*(uint *)(v3 + 20), 24) )
    {
      *v2 = 0;
    }
  }
  else if ( Function_21d2210(*(uint *)(v3 + 20), 15) )
  {
    v5 = *(uint *)(v3 + 56);
    if ( !v5 && *(uchar *)(v3 + 101) || v5 == 1 && *(uchar *)(v3 + 101) != 1 || (v6 = *(ushort *)(v3 + 48), v6 & 4) )
    {
      Function_2005748(0x5E4u);
      *(uchar *)(v3 + 101) ^= 1u;
      *(ushort *)(v3 + 80) = 0;
      Function_21d21a0(*(uint *)(v3 + 20), 24);
      *v2 = 2;
    }
    else if ( v6 & 2 )
    {
      Function_2005748(0x5DCu);
      Function_21d21a0(*(uint *)(v3 + 20), 7);
      *(uint *)(v3 + 36) = Function_21d103c;
      *v2 = 1;
    }
    else if ( v6 & 1 )
    {
      if ( *(ushort *)(v3 + 80) == 254 )
      {
        Function_2005748(0x5DCu);
        Function_21d21a0(*(uint *)(v3 + 20), 7);
        *(uint *)(v3 + 36) = Function_21d103c;
        *v2 = 1;
      }
      else if ( Function_21d16e8(v3) )
      {
        Function_2005748(0x5DCu);
        Function_21d1884(v3 + 84, v3);
        *(uint *)(v3 + 36) = Function_21d18e4;
        Function_21d21a0(*(uint *)(v3 + 20), 8);
        *v2 = 1;
      }
      else
      {
        Function_2005748(0x5F2u);
      }
    }
    else if ( Function_21d1720(v3) )
    {
      Function_2005748(0x5DCu);
      Function_21d21a0(*(uint *)(v3 + 20), 14);
    }
  }
  return 0;
}

//----- (021D16E8) --------------------------------------------------------
BOOL __fastcall Function_21d16e8(int a1)
{
  int v1;
  bool v2;
  int v3;
  BOOL result;

  v1 = a1;
  v2 = *(uchar *)(a1 + 101) == 0;
  v3 = *(uint *)(a1 + 24);
  if ( v2 )
    result = Function_2099ca0(v3, *(ushort *)(v1 + 80)) != 0;
  else
    result = Function_2099cdc(v3, *(ushort *)(v1 + 80)) != 0;
  return result;
}

//----- (021D1720) --------------------------------------------------------
int __fastcall Function_21d1720(int a1)
{
  return ((int (*)(void))*(&off_21D5140 + *(uchar *)(a1 + 101)))();
}

//----- (021D1738) --------------------------------------------------------
int __fastcall Function_21d1738(ushort *a1)
{
  ushort *v1;
  int v2;
  int v3;
  short v4;
  short v6;
  short v7;
  short v8;

  v1 = a1;
  v2 = (ushort)a1[40];
  v3 = (ushort)a1[40];
  if ( v2 == 254 )
    v3 = 12;
  if ( v2 == 254 )
  {
    v6 = a1[26];
    if ( v6 & 0x40 )
    {
      s32_div_f((ushort)a1[41], 3);
      v1[40] = v7 + 9;
      return 1;
    }
    if ( v6 & 0x80 )
    {
      s32_div_f((ushort)a1[41], 3);
      v1[40] = v8;
      return 1;
    }
  }
  else
  {
    a1[41] = v2;
    v4 = a1[26];
    if ( v4 & 0x40 )
    {
      v1[40] = LOBYTE(dword_21D5154[v3 + 5]);
      return 1;
    }
    if ( v4 & 0x80 )
    {
      v1[40] = BYTE1(dword_21D5154[v3 + 5]);
      return 1;
    }
    if ( v4 & 0x20 )
    {
      v1[40] = BYTE2(dword_21D5154[v3 + 5]);
      return 1;
    }
    if ( v4 & 0x10 )
    {
      v1[40] = HIBYTE(dword_21D5154[v3 + 5]);
      return 1;
    }
  }
  return 0;
}

//----- (021D17F0) --------------------------------------------------------
int __fastcall Function_21d17f0(ushort *a1)
{
  ushort *v1;
  short v2;
  int v3;
  short v5;

  v1 = a1;
  if ( a1[40] == 254 )
  {
    v5 = a1[26];
    if ( v5 & 0x40 )
    {
      a1[40] = Function_21d5124((ushort)a1[41]);
      return 1;
    }
    if ( v5 & 0x80 )
    {
      a1[40] = Function_21d5108((ushort)a1[41]);
      return 1;
    }
  }
  else
  {
    v2 = a1[26];
    v3 = 255;
    if ( v2 & 0x40 )
    {
      v3 = Function_21d5098();
    }
    else if ( v2 & 0x80 )
    {
      v3 = Function_21d50b4();
    }
    else if ( v2 & 0x10 )
    {
      v3 = Function_21d50ec();
    }
    else if ( v2 & 0x20 )
    {
      v3 = Function_21d50d0();
    }
    if ( v3 != 255 )
    {
      v1[41] = v1[40];
      v1[40] = v3;
      return 1;
    }
  }
  return 0;
}

//----- (021D1884) --------------------------------------------------------
int __fastcall Function_21d1884(int a1, int a2)
{
  int v2;
  int result;
  uint v4;

  v2 = a1;
  *(ushort *)a1 = 0;
  *(uchar *)(a1 + 6) = 0;
  *(uchar *)(a1 + 7) = 0;
  *(ushort *)(a1 + 4) = Function_21d1fe4(a2);
  result = 0;
  *(uint *)(v2 + 8) = 0;
  v4 = *(ushort *)(v2 + 4);
  if ( v4 <= 0xA )
  {
    *(ushort *)(v2 + 2) = 0;
  }
  else
  {
    result = (int)(v4 - 10) / 2 + (v4 & 1);
    *(ushort *)(v2 + 2) = result;
  }
  return result;
}

//----- (021D18BC) --------------------------------------------------------
int __fastcall Function_21d18bc(int a1)
{
  return *(uchar *)(a1 + 6) + 2 * *(uchar *)(a1 + 7);
}

//----- (021D18C8) --------------------------------------------------------
int __fastcall Function_21d18c8(ushort *a1)
{
  return 2 * *a1 + Function_21d18bc((int)a1);
}

//----- (021D18D8) --------------------------------------------------------
int __fastcall Function_21d18d8(int a1)
{
  return *(uint *)(a1 + 8);
}

//----- (021D18DC) --------------------------------------------------------
int __fastcall Function_21d18dc(ushort *a1)
{
  return *a1;
}

//----- (021D18E0) --------------------------------------------------------
int __fastcall Function_21d18e0(int a1)
{
  return *(ushort *)(a1 + 2);
}

//----- (021D18E4) --------------------------------------------------------
int __fastcall Function_21d18e4(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int result;
  short v8;

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  if ( *a2 <= 3u )
    JUMPOUT(__CS__, *((short *)&off_21D18FE + v4) + 35461376);
  switch ( (uchar)v4 )
  {
    case 0:
      v5 = *(uint *)(v3 + 56);
      if ( !v5 && *(uchar *)(v3 + 101) || v5 == 1 && *(uchar *)(v3 + 101) != 1 || *(ushort *)(v3 + 48) & 4 )
      {
        Function_2005748(0x5E4u);
        *(ushort *)(v3 + 80) = 0;
        *(uchar *)(v3 + 101) ^= 1u;
        Function_21d21a0(*(uint *)(v3 + 20), 9);
        *(uint *)(v3 + 36) = Function_21d15a0;
        *v2 = 3;
        return 0;
      }
      if ( v5 == 2 )
      {
        v6 = Function_21d1b48(v3 + 84);
      }
      else if ( v5 == 3 )
      {
        v6 = Function_21d1b70(v3 + 84);
      }
      else
      {
        v6 = Function_21d1a68(v3 + 84, *(ushort *)(v3 + 52));
      }
      switch ( v6 )
      {
        case 1:
          Function_2005748(0x5DCu);
          Function_21d21a0(*(uint *)(v3 + 20), 15);
          result = 0;
          break;
        case 2:
          Function_2005748(0x5DCu);
          Function_21d21a0(*(uint *)(v3 + 20), 16);
          *v2 = 1;
          result = 0;
          break;
        case 3:
          Function_2005748(0x5DCu);
          Function_21d21a0(*(uint *)(v3 + 20), 16);
          *v2 = 2;
          result = 0;
          break;
        default:
          v8 = *(ushort *)(v3 + 48);
          if ( v8 & 2 )
          {
            Function_2005748(0x5DCu);
            Function_21d21a0(*(uint *)(v3 + 20), 9);
            *(uint *)(v3 + 36) = Function_21d15a0;
            *v2 = 3;
          }
          else if ( v8 & 1 )
          {
            Function_2005748(0x5DCu);
            Function_21d1bb0(v3);
            *(uint *)(v3 + 36) = Function_21d103c;
            Function_21d21a0(*(uint *)(v3 + 20), 10);
            *v2 = 3;
          }
          return 0;
      }
      return result;
    case 1:
      if ( Function_21d2210(*(uint *)(v3 + 20), 16) )
        *v2 = 0;
      return 0;
    case 2:
      if ( Function_21d2210(*(uint *)(v3 + 20), 16) )
      {
        Function_21d21a0(*(uint *)(v3 + 20), 15);
        *v2 = 0;
      }
      break;
    case 3:
      if ( Function_21d21f8(*(uint *)(v3 + 20)) )
      {
        Function_21d1034(v3, *(uint *)(v3 + 36));
        *v2 = 0;
      }
      break;
    default:
      return 0;
  }
  return 0;
}

//----- (021D1A68) --------------------------------------------------------
int __fastcall Function_21d1a68(ushort *a1, short a2)
{
  ushort *v2;
  uint v3;
  uint v4;
  uint v5;
  int result;
  char v7;

  v2 = a1;
  if ( a2 & 0x80 )
  {
    v3 = *((uchar *)a1 + 7);
    if ( v3 >= 4 )
    {
      if ( *a1 >= (uint)a1[1] )
      {
        result = 4;
      }
      else
      {
        *((uint *)a1 + 2) = 1;
        ++*a1;
        if ( Function_21d18c8(a1) >= (uint)a1[2] )
        {
          *((uchar *)v2 + 6) = 0;
          result = 3;
        }
        else
        {
          result = 2;
        }
      }
    }
    else
    {
      *((uchar *)a1 + 7) = v3 + 1;
      v4 = Function_21d18c8(a1);
      v5 = v2[2];
      if ( v4 >= v5 )
      {
        if ( v4 == v5 && v4 & 1 )
        {
          *((uchar *)v2 + 6) = 0;
          result = 1;
        }
        else
        {
          --*((uchar *)v2 + 7);
          result = 4;
        }
      }
      else
      {
        result = 1;
      }
    }
  }
  else if ( a2 & 0x40 )
  {
    v7 = *((uchar *)a1 + 7);
    if ( *((uchar *)v2 + 7) )
    {
      *((uchar *)v2 + 7) = v7 - 1;
      result = 1;
    }
    else if ( *v2 )
    {
      *((uint *)v2 + 2) = -1;
      --*v2;
      result = 2;
    }
    else
    {
      result = 4;
    }
  }
  else if ( a2 & 0x30 )
  {
    *((uchar *)a1 + 6) ^= 1u;
    if ( Function_21d18c8(a1) >= (uint)a1[2] )
    {
      *((uchar *)v2 + 6) ^= 1u;
      result = 4;
    }
    else
    {
      result = 1;
    }
  }
  else if ( a2 & 0x200 )
  {
    result = Function_21d1b48(a1);
  }
  else if ( a2 & 0x100 )
  {
    result = Function_21d1b70(a1);
  }
  else
  {
    result = 0;
  }
  return result;
}

//----- (021D1B48) --------------------------------------------------------
int __fastcall Function_21d1b48(ushort *a1)
{
  uint v1;

  v1 = *a1;
  if ( !*a1 )
    return 4;
  if ( v1 < 5 )
  {
    *((uint *)a1 + 2) = -v1;
    *a1 = 0;
  }
  else
  {
    *a1 = v1 - 5;
    *((uint *)a1 + 2) = -5;
  }
  return 2;
}

//----- (021D1B70) --------------------------------------------------------
int __fastcall Function_21d1b70(ushort *a1)
{
  ushort *v1;
  int v2;
  uint v3;
  ushort v4;

  v1 = a1;
  v2 = a1[1];
  v3 = *a1;
  if ( v3 >= v2 )
    return 4;
  if ( (int)(v3 + 5) > v2 )
  {
    *((uint *)a1 + 2) = v2 - v3;
    v4 = a1[1];
  }
  else
  {
    *((uint *)a1 + 2) = 5;
    v4 = *a1 + 5;
  }
  *v1 = v4;
  if ( Function_21d18c8(v1) < (uint)v1[2] )
    return 2;
  *((uchar *)v1 + 6) = 0;
  return 3;
}

//----- (021D1BB0) --------------------------------------------------------
int __fastcall Function_21d1bb0(int a1)
{
  int v1;
  int v2;
  int v3;
  short v4;
  short v5;
  int v6;

  v1 = a1;
  v2 = Function_21d18c8((ushort *)(a1 + 84));
  v3 = *(uint *)(v1 + 24);
  if ( *(uchar *)(v1 + 101) )
    v4 = Function_2099d14(v3, *(ushort *)(v1 + 80), v2);
  else
    v4 = Function_2099cc8(v3, *(ushort *)(v1 + 80), v2);
  v5 = v4;
  v6 = *(uint *)(v1 + 4);
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      *(ushort *)(v1 + 2 * *(ushort *)(v1 + 78) + 16) = v5;
    }
    else if ( v6 == 2 )
    {
      Function_2014cf8(v1 + 8, *(ushort *)(v1 + 78), v5);
    }
  }
  else
  {
    *(ushort *)(v1 + 16) = v5;
  }
  return Function_21d1e8c(v1);
}

//----- (021D1C18) --------------------------------------------------------
int __fastcall Function_21d1c18(int a1, uint *a2)
{
  uint *v2;
  int v3;

  v2 = a2;
  v3 = *a2;
  if ( v3 )
  {
    if ( v3 == 1 && Function_21d21f8(*(uint *)(a1 + 20)) )
      return 1;
  }
  else
  {
    Function_21d21a0(*(uint *)(a1 + 20), 1);
    ++*v2;
  }
  return 0;
}

//----- (021D1C4C) --------------------------------------------------------
int __fastcall Function_21d1c4c(int result, int a2)
{
  *(uint *)(result + 44) = a2;
  *(uint *)(result + 40) = 0;
  return result;
}

//----- (021D1C54) --------------------------------------------------------
int __fastcall Function_21d1c54(int result)
{
  *(uint *)(result + 44) = 0;
  return result;
}

//----- (021D1C5C) --------------------------------------------------------
int __fastcall Function_21d1c5c(int a1, int *a2)
{
  int *v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a1;
  result = *a2;
  if ( *a2 )
  {
    if ( result == 1 )
    {
      result = Function_21d21f8(*(uint *)(v3 + 20));
      if ( result )
        result = Function_21d1c54(v3);
    }
  }
  else
  {
    Function_21d21a0(*(uint *)(v3 + 20), 2);
    result = *v2 + 1;
    *v2 = result;
  }
  return result;
}

//----- (021D1C90) --------------------------------------------------------
int __fastcall Function_21d1c90(int result, uint *a2)
{
  uint *v2;
  uint v3;
  int v4;
  short v5;

  v2 = a2;
  v3 = *a2;
  v4 = result;
  if ( v3 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_21D1CAA + v3) + 35462316);
  switch ( (uchar)v3 )
  {
    case 0:
      if ( Function_21d1e70() || Function_2097568(*(uint *)v4) )
      {
        if ( Function_21d1e8c(v4) )
        {
          Function_21d1ed4(v4 + 102, 1, 0);
          Function_21d21a0(*(uint *)(v4 + 20), 18);
          result = 1;
          *v2 = 1;
        }
        else
        {
          Function_21d21a0(*(uint *)(v4 + 20), 20);
          result = 2;
          *v2 = 2;
        }
      }
      else
      {
        result = Function_21d1c4c(v4, (int)Function_21d1dbc);
      }
      break;
    case 1:
      result = Function_21d2210(*(uint *)(result + 20), 21);
      if ( result )
      {
        result = Function_21d1edc(v4 + 102, *(ushort *)(v4 + 48)) + 3;
        switch ( (uchar)result )
        {
          case 0:
            Function_2005748(0x5DCu);
            result = Function_21d21a0(*(uint *)(v4 + 20), 21);
            break;
          case 1:
          case 4:
            Function_2005748(0x5DCu);
            Function_21d21a0(*(uint *)(v4 + 20), 22);
            result = 3;
            *v2 = 3;
            break;
          case 3:
            Function_2005748(0x5DCu);
            if ( *(uint *)(v4 + 4) == 2 )
              Function_2014d10((ushort *)(v4 + 8));
            Function_20975e4(*(uint *)v4, (ushort *)(v4 + 16), (ushort *)(v4 + 8));
            Function_21d1034(v4, (int)Function_21d1c18);
            result = 3;
            *v2 = 3;
            break;
          default:
            return result;
        }
      }
      break;
    case 2:
      v5 = *(ushort *)(result + 48);
      result = 243;
      if ( v5 & 0xF3 )
      {
        Function_21d21a0(*(uint *)(v4 + 20), 17);
        result = 3;
        *v2 = 3;
      }
      break;
    case 3:
      result = Function_21d21f8(*(uint *)(result + 20));
      if ( result )
        result = Function_21d1c54(v4);
      break;
    default:
      return result;
  }
  return result;
}

//----- (021D1DBC) --------------------------------------------------------
int __fastcall Function_21d1dbc(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a1;
  result = *a2;
  if ( *a2 )
  {
    if ( result == 1 )
    {
      result = Function_21d2210(*(uint *)(v3 + 20), 21);
      if ( result )
      {
        result = Function_21d1edc(v3 + 102, *(ushort *)(v3 + 48)) + 3;
        switch ( (uchar)result )
        {
          case 0:
            Function_2005748(0x5DCu);
            result = Function_21d21a0(*(uint *)(v3 + 20), 21);
            break;
          case 1:
          case 4:
            Function_2005748(0x5DCu);
            Function_21d21a0(*(uint *)(v3 + 20), 22);
            result = 2;
            *v2 = 2;
            break;
          case 3:
            Function_2005748(0x5DCu);
            Function_21d1034(v3, (int)Function_21d1c18);
            result = 2;
            *v2 = 2;
            break;
          default:
            return result;
        }
      }
    }
    else if ( result == 2 )
    {
      result = Function_21d21f8(*(uint *)(v3 + 20));
      if ( result )
        result = Function_21d1c54(v3);
    }
  }
  else
  {
    Function_21d1ed4(v3 + 102, 1, 1);
    Function_21d21a0(*(uint *)(v3 + 20), 19);
    result = 1;
    *v2 = 1;
  }
  return result;
}

//----- (021D1E70) --------------------------------------------------------
BOOL __fastcall Function_21d1e70(int a1)
{
  return Function_20975a0(*(uint *)a1, (ushort *)(a1 + 16), (ushort *)(a1 + 8)) == 0;
}

//----- (021D1E8C) --------------------------------------------------------
int __fastcall Function_21d1e8c(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 4);
  switch ( v1 )
  {
    case 0:
      return *(ushort *)(a1 + 16) != 0xFFFF;
    case 1:
      return *(ushort *)(a1 + 16) != 0xFFFF && *(ushort *)(a1 + 18) != 0xFFFF;
    case 2:
      return Function_2014bd0((ushort *)(a1 + 8));
  }
  return 0;
}

//----- (021D1ED4) --------------------------------------------------------
uchar *__fastcall Function_21d1ed4(uchar *result, char a2, char a3)
{
  *result = a3;
  result[1] = a2;
  return result;
}

//----- (021D1EDC) --------------------------------------------------------
int __fastcall Function_21d1edc(uchar *a1, char a2)
{
  int result;
  int v3;

  if ( a2 & 0x40 )
  {
    if ( *a1 )
    {
      --*a1;
      result = -3;
    }
    else
    {
      result = -4;
    }
  }
  else if ( a2 & 0x80 )
  {
    v3 = *a1;
    if ( v3 == a1[1] )
    {
      result = -4;
    }
    else
    {
      *a1 = v3 + 1;
      result = -3;
    }
  }
  else if ( a2 & 1 )
  {
    result = *a1;
  }
  else if ( a2 & 2 )
  {
    result = -2;
  }
  else
  {
    result = -1;
  }
  return result;
}

//----- (021D1F34) --------------------------------------------------------
int __fastcall Function_21d1f34(uchar *a1)
{
  return *a1;
}

//----- (021D1F38) --------------------------------------------------------
int __fastcall Function_21d1f38(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a1;
  result = *a2;
  if ( *a2 )
  {
    if ( result == 1 )
    {
      result = Function_21d21f8(*(uint *)(v3 + 20));
      if ( result )
        result = Function_21d1c54(v3);
    }
  }
  else
  {
    Function_2005748(0x5E4u);
    *(uchar *)(v3 + 101) ^= 1u;
    Function_21d21a0(*(uint *)(v3 + 20), 23);
    result = 1;
    *v2 = 1;
  }
  return result;
}

//----- (021D1F84) --------------------------------------------------------
int __fastcall Function_21d1f84(int a1)
{
  return *(uint *)(a1 + 4);
}

//----- (021D1F88) --------------------------------------------------------
int __fastcall Function_21d1f88(int *a1)
{
  return Function_2097554(*a1);
}

//----- (021D1F94) --------------------------------------------------------
int __fastcall Function_21d1f94(int a1)
{
  return *(uchar *)(a1 + 101);
}

//----- (021D1F9C) --------------------------------------------------------
int __fastcall Function_21d1f9c(int a1)
{
  return Function_2014c80((ushort *)(a1 + 8));
}

//----- (021D1FA8) --------------------------------------------------------
int __fastcall Function_21d1fa8(int a1, int a2)
{
  int result;

  if ( *(uint *)(a1 + 4) == 2 )
    result = Function_2014c78(a1 + 8, a2);
  else
    result = *(ushort *)(a1 + 2 * a2 + 16);
  return result;
}

//----- (021D1FC0) --------------------------------------------------------
ushort *__fastcall Function_21d1fc0(int a1, uint a2)
{
  return Function_2014ba0((ushort *)(a1 + 8), a2);
}

//----- (021D1FCC) --------------------------------------------------------
int __fastcall Function_21d1fcc(int a1)
{
  return *(ushort *)(a1 + 78);
}

//----- (021D1FD4) --------------------------------------------------------
int __fastcall Function_21d1fd4(int a1)
{
  return *(ushort *)(a1 + 76);
}

//----- (021D1FDC) --------------------------------------------------------
int __fastcall Function_21d1fdc(int a1)
{
  return *(ushort *)(a1 + 80);
}

//----- (021D1FE4) --------------------------------------------------------
int __fastcall Function_21d1fe4(int a1)
{
  int v1;
  bool v2;
  int v3;
  int result;

  v1 = a1;
  v2 = *(uchar *)(a1 + 101) == 0;
  v3 = *(uint *)(a1 + 24);
  if ( v2 )
    result = Function_2099ca0(v3, *(ushort *)(v1 + 80));
  else
    result = Function_2099cdc(v3, *(ushort *)(v1 + 80));
  return result;
}

//----- (021D2008) --------------------------------------------------------
char *__fastcall Function_21d2008(int a1, int a2, ushort *a3)
{
  int v3;
  bool v4;
  char *v5;
  char *result;

  v3 = a1;
  v4 = *(uchar *)(a1 + 101) == 0;
  v5 = *(char **)(a1 + 24);
  if ( v4 )
    result = Function_2099ca8((int)v5, *(ushort *)(v3 + 80), a2, a3);
  else
    result = Function_2099cec(v5, *(ushort *)(v3 + 80), a2, a3);
  return result;
}

//----- (021D2034) --------------------------------------------------------
int __fastcall Function_21d2034(int a1)
{
  return Function_21d18bc(a1 + 84);
}

//----- (021D2040) --------------------------------------------------------
int __fastcall Function_21d2040(int a1)
{
  return Function_21d18d8(a1 + 84);
}

//----- (021D204C) --------------------------------------------------------
BOOL __fastcall Function_21d204c(int a1)
{
  return Function_21d18dc((ushort *)(a1 + 84)) != 0;
}

//----- (021D2060) --------------------------------------------------------
BOOL __fastcall Function_21d2060(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_21d18dc((ushort *)(a1 + 84));
  return v2 < Function_21d18e0(v1 + 84);
}

//----- (021D2080) --------------------------------------------------------
int __fastcall Function_21d2080(int *a1)
{
  return Function_2097558(*a1);
}

//----- (021D208C) --------------------------------------------------------
int __fastcall Function_21d208c(int a1)
{
  return Function_21d1f34((uchar *)(a1 + 102));
}

//----- (021D2098) --------------------------------------------------------
uint *__fastcall Function_21d2098(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;
  int v5;
  int v6;
  int v7;
  uint *v8;

  v2 = a2;
  v3 = a1;
  v4 = (uint *)malloc(0x23u, 500);
  if ( v4 )
  {
    SetMainLoopFunctionCall(0, 0);
    Function_20177a4();
    v4[6] = v3;
    v4[7] = v2;
    Function_20a7944();
    Function_200a784(0, 128, 0, 32, 0, 0x80u, 0, 0x20u, 0x23u);
    v4[9] = Function_20095c4(128, (int)(v4 + 10), 35, v5);
    v4[8] = Function_2018340(0x23u);
    *v4 = AddTaskToTaskList1((int)Function_21d2178, (int)v4, 2u);
    v6 = Function_21d2170(Function_21d217c, v4, 1);
    v7 = 0;
    v4[1] = v6;
    v8 = v4;
    do
    {
      ++v7;
      v8[2] = 0;
      ++v8;
    }
    while ( v7 < 4 );
  }
  return v4;
}

//----- (021D2128) --------------------------------------------------------
uint __fastcall Function_21d2128(uint result)
{
  int v1;
  int v2;
  int v3;
  int *v4;

  v1 = result;
  if ( result )
  {
    SetMainLoopFunctionCall(0, 0);
    v2 = 0;
    v3 = v1;
    do
    {
      v4 = *(int **)(v3 + 8);
      if ( v4 )
        Call_RemoveTaskFromTaskList(v4);
      ++v2;
      v3 += 4;
    }
    while ( v2 < 4 );
    Call_RemoveTaskFromTaskList(*(int **)v1);
    Call_RemoveTaskFromTaskList(*(int **)(v1 + 4));
    Function_200a878();
    Function_2021964(*(int **)(v1 + 36));
    free(*(uint *)(v1 + 32));
    result = free(v1);
  }
  return result;
}

//----- (021D2170) --------------------------------------------------------
uint *__fastcall Function_21d2170(int a1, int a2, uint a3)
{
  return AddTaskToTaskList2(a1, a2, a3);
}

//----- (021D2178) --------------------------------------------------------
void Function_21d2178()
{
  ;
}

//----- (021D217C) --------------------------------------------------------
int __fastcall Function_21d217c(int a1, int a2)
{
  int result;

  Function_20219f8(*(uint *)(a2 + 36));
  Function_200a858();
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (021D21A0) --------------------------------------------------------
uint *__fastcall Function_21d21a0(int a1, uint a2)
{
  uint v2;
  int v3;
  uint *result;
  int v5;
  int v6;
  int v7;
  int v8;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0x1D )
    return (uint *)ErrorHandler();
  result = (uint *)malloc(0x23u, 24);
  v5 = (int)result;
  if ( result )
  {
    v6 = 0;
    result[5] = 0;
    result[3] = v2;
    *result = v3;
    v7 = v3;
    result[1] = *(uint *)(v3 + 24);
    result[2] = *(uint *)(v3 + 28);
    while ( 1 )
    {
      result = *(uint **)(v7 + 8);
      if ( !result )
        break;
      ++v6;
      v7 += 4;
      if ( v6 >= 4 )
        return result;
    }
    v8 = dword_21D5258[v2 + 2];
    *(uint *)(v5 + 16) = v6;
    result = AddTaskToTaskList1(v8, v5, 1u);
    *(uint *)(v3 + 4 * v6 + 8) = result;
  }
  return result;
}

//----- (021D21F8) --------------------------------------------------------
int __fastcall Function_21d21f8(int a1)
{
  int v1;

  v1 = 0;
  do
  {
    if ( *(uint *)(a1 + 8) )
      return 0;
    ++v1;
    a1 += 4;
  }
  while ( v1 < 4 );
  return 1;
}

//----- (021D2210) --------------------------------------------------------
int __fastcall Function_21d2210(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    v5 = *(uint *)(v2 + 8);
    if ( v5 && *(uint *)(Function_201ced0(v5) + 12) == v3 )
      return 0;
    ++v4;
    v2 += 4;
  }
  while ( v4 < 4 );
  return 1;
}

//----- (021D2238) --------------------------------------------------------
uint __fastcall Function_21d2238(uint *a1)
{
  uint *v1;

  v1 = a1;
  Call_RemoveTaskFromTaskList(*(int **)(*a1 + 4 * a1[4] + 8));
  *(uint *)(*v1 + 4 * v1[4] + 8) = 0;
  return free((int)v1);
}

//----- (021D2260) --------------------------------------------------------
uint __fastcall Function_21d2260(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int *v4;

  v2 = a2;
  Function_201ff00();
  Function_201ff68();
  REG_DISPCNT &= 0xFFFFE0FF;
  REG_DISPCNT_SUB &= 0xFFFFE0FF;
  REG_DISPCNT = REG_DISPCNT & 0xFFCFFFEF | 0x100010;
  v3 = REG_DISPCNT_SUB & 0xFFCFFFEF;
  REG_DISPCNT_SUB = REG_DISPCNT_SUB & 0xFFCFFFEF | 0x10;
  v4 = LoadFromNARC_8(76, 0x23u, v3, -3145745);
  Function_21d24ec(v2);
  Function_21d2370(v2, v4);
  *(uint *)(*v2 + 480) = Function_21d2ea4(*v2, v2[1], v2[2]);
  Function_21d2f50(*(uint *)(*v2 + 480), v4);
  *(uint *)(*v2 + 484) = Function_21d3864(*v2, v2[1], v2[2]);
  Function_21d3898(*(uint *)(*v2 + 484), v4);
  *(uint *)(*v2 + 488) = Function_21d3a54(*v2, v2[1], v2[2]);
  Function_21d3a98(*(uint *)(*v2 + 488), v4);
  *(uint *)(*v2 + 492) = Function_21d40e8(*v2, v2[1], v2[2]);
  Function_21d41a8(*(uint *)(*v2 + 492));
  *(uint *)(*v2 + 496) = Function_21d4728(*v2, v2[1], v2[2]);
  Function_21d4774(*(uint *)(*v2 + 496), v4);
  Function_201ff0c(0x10u, 1);
  Function_201ff74(0x10u, 1);
  GX_DispOn();
  Call_FS_CloseFile(v4);
  return Function_21d2238(v2);
}

//----- (021D2370) --------------------------------------------------------
int __fastcall Function_21d2370(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int result;

  v2 = (uint *)*a1;
  v3 = a2;
  NNS_G2dInitImagePaletteProxy(*a1 + 408);
  NNS_G2dInitImagePaletteProxy((int)(v2 + 107));
  NNS_G2dInitImageProxy((int)(v2 + 84));
  NNS_G2dInitImageProxy((int)(v2 + 93));
  Function_200718c(v3, 9u, 1, 0, 0, 1, 0, 35, (int)(v2 + 84));
  Function_200716c(v3, 0xAu, 1, 0, 35, (int)(v2 + 102));
  v2[116] = Function_2007204(v3, 7u, 1, v2 + 112, 35);
  v2[118] = Function_2007220(v3, 8u, 1, v2 + 114, 35);
  v2[117] = 0;
  result = 476;
  v2[119] = 0;
  return result;
}

//----- (021D2414) --------------------------------------------------------
int __fastcall Function_21d2414(int a1, uint *a2)
{
  uint *v2;
  int result;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v2 = a2;
  result = a2[5];
  v4 = *a2;
  if ( result )
  {
    if ( result == 1 )
    {
      result = Function_200f2ac();
      if ( result )
      {
        Function_21d2ef0(*(uint *)(*v2 + 480));
        Function_21d3880(*(uint *)(*v2 + 484));
        Function_21d3a80(*(uint *)(*v2 + 488));
        Function_21d4164(*(uint *)(*v2 + 492));
        Function_21d4764(*(uint *)(*v2 + 496));
        v5 = 0;
        v6 = v4;
        do
        {
          v7 = *(uint *)(v6 + 464);
          if ( v7 )
            free(v7);
          v8 = *(uint *)(v6 + 472);
          if ( v8 )
            free(v8);
          ++v5;
          v6 += 4;
        }
        while ( v5 < 2 );
        Function_2019044(*(uint *)(v4 + 32), 0);
        Function_2019044(*(uint *)(v4 + 32), 1);
        Function_2019044(*(uint *)(v4 + 32), 2);
        Function_2019044(*(uint *)(v4 + 32), 3);
        Function_2019044(*(uint *)(v4 + 32), 4);
        result = Function_21d2238(v2);
      }
    }
  }
  else
  {
    Function_200f174(0, 0, 0, 0, 5, 1, 35);
    result = v2[5] + 1;
    v2[5] = result;
  }
  return result;
}

//----- (021D24EC) --------------------------------------------------------
void __fastcall Function_21d24ec(int *a1)
{
  int v1;

  v1 = *a1;
  REG_POWERCNT |= (uint)&REG_POWERCNT >> 11;
  GX_SetGraphicsMode(1, 0, 1);
  GX_SetBanks(dword_21D5238);
  SetGraphicsModes(dword_21D519C);
  Function_20183c4(*(uint **)(v1 + 32), 0, dword_21D51E4, 0);
  Function_20183c4(*(uint **)(v1 + 32), 1u, dword_21D51AC, 0);
  Function_20183c4(*(uint **)(v1 + 32), 2u, dword_21D521C, 0);
  Function_20183c4(*(uint **)(v1 + 32), 3u, dword_21D51C8, 0);
  Function_20183c4(*(uint **)(v1 + 32), 4u, &dword_21D5200, 0);
}

//----- (021D2570) --------------------------------------------------------
int __fastcall Function_21d2570(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a2[5];
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      result = Function_200f2ac();
      if ( result )
      {
        result = v2[5] + 1;
        v2[5] = result;
      }
    }
    else
    {
      result = Function_21d2238(a2);
    }
  }
  else
  {
    Function_200f174(0, 1, 1, 0, 5, 1, 35);
    result = v2[5] + 1;
    v2[5] = result;
  }
  return result;
}

//----- (021D25C0) --------------------------------------------------------
uint __fastcall Function_21d25c0(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = *a2;
  Function_21d3228(*(uint *)(*a2 + 480));
  v4 = Function_21d1fcc(v2[1]);
  Function_21d3700(*(uint *)(v3 + 480), v4);
  return Function_21d2238(v2);
}

//----- (021D25EC) --------------------------------------------------------
uint __fastcall Function_21d25ec(int a1, uint *a2)
{
  uint *v2;
  int *v3;
  int v4;

  v2 = a2;
  v3 = (int *)*a2;
  Function_21d369c(*(uint *)(*a2 + 480), 0);
  Function_21d36b0(v3[120]);
  Function_21d39d4(v3[121], 1);
  v4 = Function_21d1fd4(v3[6]);
  Function_21d39ec(v3[121], v4);
  return Function_21d2238(v2);
}

//----- (021D2630) --------------------------------------------------------
uint __fastcall Function_21d2630(int a1, uint *a2)
{
  uint *v2;
  int v3;

  v2 = a2;
  v3 = *a2;
  Function_21d39d4(*(uint *)(*a2 + 484), 0);
  Function_21d36d0(*(uint *)(v3 + 480));
  Function_21d369c(*(uint *)(v3 + 480), 1);
  return Function_21d2238(v2);
}

//----- (021D2660) --------------------------------------------------------
uint __fastcall Function_21d2660(int a1, uint *a2)
{
  uint *v2;
  uint result;
  int *v4;
  int v5;

  v2 = a2;
  result = a2[5];
  v4 = (int *)*a2;
  if ( result )
  {
    if ( result == 1 )
    {
      result = Function_21d3f10(v4[122]);
      if ( result )
      {
        Function_21d3a2c(v4[121]);
        v5 = Function_21d1fdc(v4[6]);
        Function_21d3e74(v4[122], v5);
        Function_21d3e48(v4[122], 1);
        result = Function_21d2238(v2);
      }
    }
  }
  else
  {
    Function_21d3684(v4[120]);
    Function_21d36b0(v4[120]);
    Function_21d3ef8(v4[122]);
    result = v2[5] + 1;
    v2[5] = result;
  }
  return result;
}

//----- (021D26D8) --------------------------------------------------------
uint __fastcall Function_21d26d8(int a1, uint *a2)
{
  uint *v2;
  uint result;
  int v4;

  v2 = a2;
  result = a2[5];
  v4 = *a2;
  if ( result )
  {
    if ( result == 1 )
    {
      Function_21d40a8(*(uint *)(v4 + 488));
      result = v2[5] + 1;
      v2[5] = result;
    }
    else if ( result == 2 )
    {
      result = Function_21d40dc(*(uint *)(v4 + 488));
      if ( result )
      {
        result = Function_21d4c2c(*(uint *)(v4 + 496));
        if ( result )
        {
          Function_21d4084(*(uint *)(v4 + 488));
          result = Function_21d2238(v2);
        }
      }
    }
  }
  else
  {
    Function_21d4ba4(*(uint *)(v4 + 496));
    result = v2[5] + 1;
    v2[5] = result;
  }
  return result;
}

//----- (021D2740) --------------------------------------------------------
uint __fastcall Function_21d2740(int a1, uint *a2)
{
  uint *v2;
  uint result;
  int *v4;
  int v5;

  v2 = a2;
  result = a2[5];
  v4 = (int *)*a2;
  switch ( (uchar)result )
  {
    case 0:
      Function_21d4ba4(v4[124]);
      result = v2[5] + 1;
      v2[5] = result;
      break;
    case 1:
      Function_21d3e48(v4[122], 0);
      Function_21d40a8(v4[122]);
      result = v2[5] + 1;
      v2[5] = result;
      break;
    case 2:
      result = Function_21d40dc(v4[122]);
      if ( result )
      {
        Function_21d4084(v4[122]);
        result = v2[5] + 1;
        v2[5] = result;
      }
      break;
    case 3:
      result = Function_21d4c2c(v4[124]);
      if ( result )
      {
        v5 = Function_21d1fdc(v4[6]);
        Function_21d3e74(v4[122], v5);
        Function_21d3e48(v4[122], 1);
        result = Function_21d2238(v2);
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (021D27E4) --------------------------------------------------------
uint __fastcall Function_21d27e4(int a1, uint *a2)
{
  uint *v2;
  uint result;
  uint *v4;

  v2 = a2;
  result = a2[5];
  v4 = (uint *)*a2;
  if ( result )
  {
    if ( result == 1 )
    {
      result = Function_21d3f84(v4[122]);
      if ( result )
      {
        Function_21d36d0(v4[120]);
        Function_21d3690(v4[120]);
        result = Function_21d2238(v2);
      }
    }
  }
  else
  {
    Function_21d3a40(v4[121]);
    Function_21d3e48(v4[122], 0);
    Function_21d3f60(v4[122]);
    result = v2[5] + 1;
    v2[5] = result;
  }
  return result;
}

//----- (021D2848) --------------------------------------------------------
uint __fastcall Function_21d2848(int a1, uint *a2)
{
  uint *v2;
  uint result;
  int *v4;
  int v5;

  v2 = a2;
  result = a2[5];
  v4 = (int *)*a2;
  if ( result )
  {
    if ( result == 1 )
    {
      result = Function_21d4020(v4[122]);
      if ( result )
      {
        Function_21d42e4(v4[123]);
        result = v2[5] + 1;
        v2[5] = result;
      }
    }
    else if ( result == 2 )
    {
      result = Function_21d4390(v4[123]);
      if ( result )
      {
        v5 = Function_21d2034(v4[6]);
        Function_21d4480(v4[123], v5);
        Function_21d4440(v4[123], 1);
        Function_21d4dbc(v4[124], 1);
        result = Function_21d2238(v2);
      }
    }
  }
  else
  {
    Function_21d4294(v4[123]);
    Function_21d3e48(v4[122], 0);
    Function_21d4004(v4[122]);
    result = v2[5] + 1;
    v2[5] = result;
  }
  return result;
}

//----- (021D28E8) --------------------------------------------------------
uint __fastcall Function_21d28e8(int a1, uint *a2)
{
  uint *v2;
  uint result;
  int *v4;
  int v5;

  v2 = a2;
  result = a2[5];
  v4 = (int *)*a2;
  switch ( (uchar)result )
  {
    case 0:
      Function_21d4ba4(v4[124]);
      result = v2[5] + 1;
      v2[5] = result;
      break;
    case 1:
      Function_21d4440(v4[123], 0);
      Function_21d4dbc(v4[124], 0);
      Function_21d43b4(v4[123]);
      result = v2[5] + 1;
      v2[5] = result;
      break;
    case 2:
      result = Function_21d43d8(v4[123]);
      if ( result )
      {
        Function_21d4084(v4[122]);
        result = v2[5] + 1;
        v2[5] = result;
      }
      break;
    case 3:
      Function_21d403c(v4[122]);
      result = v2[5] + 1;
      v2[5] = result;
      break;
    case 4:
      result = Function_21d4078(v4[122]);
      if ( result )
      {
        result = Function_21d4c2c(v4[124]);
        if ( result )
        {
          v5 = Function_21d1fdc(v4[6]);
          Function_21d3e74(v4[122], v5);
          Function_21d3e48(v4[122], 1);
          result = Function_21d2238(v2);
        }
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (021D29BC) --------------------------------------------------------
uint __fastcall Function_21d29bc(int a1, uint *a2)
{
  uint *v2;
  uint result;
  uint *v4;

  v2 = a2;
  result = a2[5];
  v4 = (uint *)*a2;
  switch ( (uchar)result )
  {
    case 0:
      Function_21d3a40(v4[121]);
      Function_21d4440(v4[123], 0);
      Function_21d4dbc(v4[124], 0);
      Function_21d43b4(v4[123]);
      result = v2[5] + 1;
      v2[5] = result;
      break;
    case 1:
      result = Function_21d43d8(v4[123]);
      if ( result )
      {
        Function_21d3fd0(v4[122]);
        Function_21d403c(v4[122]);
        result = v2[5] + 1;
        v2[5] = result;
      }
      break;
    case 2:
      result = Function_21d4078(v4[122]);
      if ( result )
      {
        Function_21d3fe0(v4[122]);
        result = v2[5] + 1;
        v2[5] = result;
      }
      break;
    case 3:
      result = Function_21d3ff8(v4[122]);
      if ( result )
      {
        Function_21d3228(v4[120]);
        Function_21d369c(v4[120], 1);
        Function_21d36d0(v4[120]);
        Function_21d3690(v4[120]);
        result = Function_21d2238(v2);
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (021D2A9C) --------------------------------------------------------
uint __fastcall Function_21d2a9c(int a1, uint *a2)
{
  uint *v2;
  uint result;
  uint *v4;

  v2 = a2;
  result = a2[5];
  v4 = (uint *)*a2;
  switch ( (uchar)result )
  {
    case 0:
      Function_21d3a40(v4[121]);
      Function_21d4440(v4[123], 0);
      Function_21d4dbc(v4[124], 0);
      Function_21d43b4(v4[123]);
      result = v2[5] + 1;
      v2[5] = result;
      break;
    case 1:
      result = Function_21d43d8(v4[123]);
      if ( result )
      {
        Function_21d3fd0(v4[122]);
        Function_21d403c(v4[122]);
        result = v2[5] + 1;
        v2[5] = result;
      }
      break;
    case 2:
      result = Function_21d4078(v4[122]);
      if ( result )
      {
        Function_21d3fe0(v4[122]);
        result = v2[5] + 1;
        v2[5] = result;
      }
      break;
    case 3:
      result = Function_21d3ff8(v4[122]);
      if ( result )
      {
        Function_21d3228(v4[120]);
        Function_21d369c(v4[120], 0);
        Function_21d39d4(v4[121], 1);
        result = Function_21d2238(v2);
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (021D2B74) --------------------------------------------------------
uint __fastcall Function_21d2b74(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = *a2;
  v4 = Function_21d1fcc(*(uint *)(*a2 + 24));
  Function_21d3700(*(uint *)(v3 + 480), v4);
  return Function_21d2238(v2);
}

//----- (021D2B94) --------------------------------------------------------
uint __fastcall Function_21d2b94(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = *a2;
  v4 = Function_21d1fd4(*(uint *)(*a2 + 24));
  Function_21d39ec(*(uint *)(v3 + 484), v4);
  return Function_21d2238(v2);
}

//----- (021D2BB4) --------------------------------------------------------
uint __fastcall Function_21d2bb4(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = *a2;
  v4 = Function_21d1fdc(*(uint *)(*a2 + 24));
  Function_21d3e74(*(uint *)(v3 + 488), v4);
  return Function_21d2238(v2);
}

//----- (021D2BD4) --------------------------------------------------------
uint __fastcall Function_21d2bd4(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = *a2;
  v4 = Function_21d2034(*(uint *)(*a2 + 24));
  Function_21d4480(*(uint *)(v3 + 492), v4);
  return Function_21d2238(v2);
}

//----- (021D2BF4) --------------------------------------------------------
uint __fastcall Function_21d2bf4(int a1, uint *a2)
{
  uint *v2;
  uint result;
  int *v4;
  int v5;

  v2 = a2;
  result = a2[5];
  v4 = (int *)*a2;
  if ( result )
  {
    if ( result == 1 )
    {
      result = Function_21d4578(v4[123]);
      if ( result )
      {
        Function_21d4dbc(v4[124], 1);
        result = Function_21d2238(v2);
      }
    }
  }
  else
  {
    v5 = Function_21d2040(v4[6]);
    Function_21d44bc(v4[123], v5);
    result = v2[5] + 1;
    v2[5] = result;
  }
  return result;
}

//----- (021D2C44) --------------------------------------------------------
uint __fastcall Function_21d2c44(int a1, uint *a2)
{
  uint *v2;

  v2 = a2;
  Function_21d3578(*(uint *)(*a2 + 480), 0);
  return Function_21d2238(v2);
}

//----- (021D2C60) --------------------------------------------------------
uint __fastcall Function_21d2c60(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = *a2;
  Function_21d3578(*(uint *)(*a2 + 480), 2);
  v4 = Function_21d208c(v2[1]);
  Function_21d3790(*(uint *)(v3 + 480), v4);
  if ( Function_21d39e0(*(uint *)(v3 + 484)) )
    Function_21d39bc(*(uint *)(v3 + 484));
  else
    Function_21d3684(*(uint *)(v3 + 480));
  return Function_21d2238(v2);
}

//----- (021D2CB0) --------------------------------------------------------
uint __fastcall Function_21d2cb0(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = *a2;
  Function_21d3578(*(uint *)(*a2 + 480), 3);
  v4 = Function_21d208c(v2[1]);
  Function_21d3790(*(uint *)(v3 + 480), v4);
  if ( Function_21d39e0(*(uint *)(v3 + 484)) )
    Function_21d39bc(*(uint *)(v3 + 484));
  else
    Function_21d3684(*(uint *)(v3 + 480));
  return Function_21d2238(v2);
}

//----- (021D2D00) --------------------------------------------------------
uint __fastcall Function_21d2d00(int a1, uint *a2)
{
  uint *v2;

  v2 = a2;
  Function_21d3578(*(uint *)(*a2 + 480), 1);
  return Function_21d2238(v2);
}

//----- (021D2D1C) --------------------------------------------------------
uint __fastcall Function_21d2d1c(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = *a2;
  v4 = Function_21d208c(a2[1]);
  Function_21d381c(*(uint *)(v3 + 480), v4);
  return Function_21d2238(v2);
}

//----- (021D2D3C) --------------------------------------------------------
uint __fastcall Function_21d2d3c(int a1, uint *a2)
{
  uint *v2;
  int v3;

  v2 = a2;
  v3 = *a2;
  Function_21d3578(*(uint *)(*a2 + 480), 0);
  Function_21d384c(*(uint *)(v3 + 480));
  if ( Function_21d39e0(*(uint *)(v3 + 484)) )
    Function_21d39c8(*(uint *)(v3 + 484));
  else
    Function_21d3690(*(uint *)(v3 + 480));
  return Function_21d2238(v2);
}

//----- (021D2D84) --------------------------------------------------------
uint __fastcall Function_21d2d84(int a1, uint *a2)
{
  uint *v2;

  v2 = a2;
  Function_21d4df4(*(uint *)(*a2 + 496), 0, 1);
  return Function_21d2238(v2);
}

//----- (021D2DA0) --------------------------------------------------------
uint __fastcall Function_21d2da0(int a1, uint *a2)
{
  uint *v2;

  v2 = a2;
  Function_21d4df4(*(uint *)(*a2 + 496), 1, 1);
  return Function_21d2238(v2);
}

//----- (021D2DBC) --------------------------------------------------------
uint __fastcall Function_21d2dbc(int a1, uint *a2)
{
  uint *v2;

  v2 = a2;
  Function_21d4df4(*(uint *)(*a2 + 496), 0, 0);
  return Function_21d2238(v2);
}

//----- (021D2DD8) --------------------------------------------------------
uint __fastcall Function_21d2dd8(int a1, uint *a2)
{
  uint *v2;

  v2 = a2;
  Function_21d4df4(*(uint *)(*a2 + 496), 1, 0);
  return Function_21d2238(v2);
}

//----- (021D2DF4) --------------------------------------------------------
int __fastcall Function_21d2df4(int a1)
{
  return Function_21d3574(*(uint *)(a1 + 480));
}

//----- (021D2E04) --------------------------------------------------------
int __fastcall Function_21d2e04(int a1)
{
  return *(uint *)(a1 + 32);
}

//----- (021D2E08) --------------------------------------------------------
int __fastcall Function_21d2e08(int a1)
{
  return *(uint *)(a1 + 36);
}

//----- (021D2E0C) --------------------------------------------------------
int __fastcall Function_21d2e0c(int a1, int a2, int a3, char a4)
{
  int v4;
  int v5;
  int result;

  *(uint *)a2 = a1 + 336 + 36 * a3;
  v4 = a1 + 408 + 20 * a3;
  v5 = a1 + 4 * a3;
  *(uint *)(a2 + 8) = v4;
  *(uint *)(a2 + 12) = *(uint *)(v5 + 448);
  *(uint *)(a2 + 16) = *(uint *)(v5 + 456);
  *(uchar *)(a2 + 32) = a4;
  result = 0;
  *(uint *)(a2 + 4) = 0;
  *(uint *)(a2 + 20) = 0;
  *(uint *)(a2 + 24) = 0;
  *(uint *)(a2 + 28) = 0;
  return result;
}

//----- (021D2E50) --------------------------------------------------------
int __fastcall Function_21d2e50(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int v7;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;

  v17 = a4;
  v9 = *(uint *)(a1 + 36);
  v11 = a3 << 12;
  v12 = a4 << 12;
  v13 = 0;
  v10 = a2;
  v14 = a5;
  v15 = a6;
  v16 = 35;
  v6 = OS_DisableInterrupts();
  v7 = Function_2021b90(&v9);
  OS_RestoreInterrupts(v6);
  if ( v7 )
  {
    Function_2021cc8(v7, 1);
    Function_2021ce4(v7, 4096);
  }
  return v7;
}

//----- (021D2EA4) --------------------------------------------------------
uint *__fastcall Function_21d2ea4(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  uint *v6;
  uint *v7;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = (uint *)malloc(0x23u, 432);
  v7 = v6;
  *v6 = v4;
  v6[1] = v3;
  v6[2] = v5;
  v6[15] = 0;
  v6[16] = 0;
  v6[17] = 0;
  v6[19] = Function_2023790(128, 0x23u);
  v7[18] = LoadFromMsgNARC(0, 26, 437, 0x23u);
  v7[20] = Function_20149f0(0x23u);
  return v7;
}

//----- (021D2EF0) --------------------------------------------------------
uint __fastcall Function_21d2ef0(uint *a1, int a2)
{
  uint *v2;
  uint v3;
  int v4;
  int v5;
  int v6;
  ushort *v7;
  int v8;

  v2 = a1;
  v3 = a1[20];
  if ( v3 )
    Function_2014a20(v3, a2);
  v4 = v2[15];
  if ( v4 )
    Function_2021bd4(v4);
  v5 = v2[16];
  if ( v5 )
    Function_2021bd4(v5);
  v6 = v2[17];
  if ( v6 )
    Function_2021bd4(v6);
  v7 = (ushort *)v2[18];
  if ( v7 )
    Function_200b190(v7);
  v8 = v2[19];
  if ( v8 )
    Function_20237bc_FreeMsg(v8, a2);
  Function_201a8fc((int)(v2 + 3));
  Function_201a8fc((int)(v2 + 7));
  Function_201a8fc((int)(v2 + 11));
  return free((int)v2);
}

//----- (021D2F50) --------------------------------------------------------
int __fastcall Function_21d2f50(int *a1, int a2)
{
  int *v2;
  int v3;
  uint *v4;
  uint v5;
  uchar v6;

  v2 = a1;
  v3 = a2;
  v4 = (uint *)Function_21d2e04(*a1);
  Function_21d30a4(v2, v3);
  Function_200710c(v3, 0, v4, 0, 0, 0, 1, 35);
  v5 = (uint)Function_20070e8(v3, 1u, v4, 0, 0, 0, 1, 35) >> 5;
  Function_201a7e8(v4, (int)(v2 + 3), 0, 3, 1, 0x1Bu, 4u, 0, v5);
  Function_201a7e8(v4, (int)(v2 + 7), 0, 2, 21, 0x1Bu, 2u, 11, v5 + 108);
  Function_201a7e8(v4, (int)(v2 + 11), 0, 23, 15, 8u, 4u, 11, v5 + 162);
  LoadFromNARC_RGCN(38, 0, v4, 0, v5 + 194, 0, 0, 35);
  v2[24] = v5 + 194;
  Call_LoadFromNARC_RLCN(38, 24, 0, 448, 32, 35);
  v6 = Function_21d2080((int *)v2[1]);
  Function_200dd0c(v4, 0, (v5 + 203) & 0xFFFF, 15, v6, 35);
  Function_200e010((int)(v2 + 7), v5 + 203, 0xFu);
  Function_201a9f4((int)(v2 + 3));
  Function_201a9f4((int)(v2 + 7));
  Function_21d312c(v2);
  Function_21d3228(v2);
  Function_21d3578(v2, 0);
  Function_21d3184(v2);
  return Function_2019448(v4, 0);
}

//----- (021D30A4) --------------------------------------------------------
uint __fastcall Function_21d30a4(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  short v5;
  int v7;

  v2 = a1;
  v3 = a2;
  Function_2007130(a2, 6u, 0, 0, 448, 35);
  v4 = Function_20071ec(v3, 6u, &v7, 35);
  MIi_CpuCopy16(*(uint *)(v7 + 12), v2 + 112, 320, v5);
  DC_FlushRange(v2 + 112, 320);
  return free(v4);
}

//----- (021D30F8) --------------------------------------------------------
uint __fastcall Function_21d30f8(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  if ( Function_21d1f84(*(uint *)(a1 + 4)) != 2 )
    return GX_LoadBGPltt(v1 + 112, 0, 0x20u);
  v2 = Function_21d1f9c(*(uint *)(v1 + 4));
  return GX_LoadBGPltt(v1 + 112 + 32 * (v2 + 1), 0, 0x20u);
}

//----- (021D312C) --------------------------------------------------------
int __fastcall Function_21d312c(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = Function_21d1f84(*(uint *)(a1 + 4));
  if ( result )
  {
    if ( result == 1 )
    {
      *(ushort *)(v1 + 84) = 48;
      *(ushort *)(v1 + 86) = 16;
      *(ushort *)(v1 + 88) = 160;
      *(ushort *)(v1 + 90) = 16;
      result = 2;
      *(uint *)(v1 + 92) = 2;
    }
    else if ( result == 2 )
    {
      result = 0;
      *(uint *)(v1 + 92) = 0;
    }
  }
  else
  {
    *(ushort *)(v1 + 84) = 104;
    *(ushort *)(v1 + 86) = 16;
    result = 1;
    *(uint *)(v1 + 92) = 1;
  }
  return result;
}

//----- (021D3184) --------------------------------------------------------
uint __fastcall Function_21d3184(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  uint result;
  short v8;
  short v9;
  char v10;
  int v11;

  v11 = a4;
  v4 = a1;
  if ( a1[23] )
  {
    Function_21d34e0(a1 + 21, &v8);
  }
  else
  {
    v8 = 128;
    v9 = 24;
  }
  Function_21d2e0c(*v4, (int)&v10, 0, 0);
  v4[15] = Function_21d2e50(*v4, (int)&v10, v8, v9, 0, 1);
  Function_21d375c(v4, 1);
  v5 = Function_21d2e50(*v4, (int)&v10, 6, 24, 1, 1);
  v4[16] = v5;
  Function_2021d6c(v5, 0xDu);
  v6 = Function_21d2e50(*v4, (int)&v10, 250, 24, 1, 1);
  v4[17] = v6;
  Function_2021d6c(v6, 0xCu);
  result = Function_21d1f84(v4[1]);
  if ( result != 2 )
  {
    Function_2021cac(v4[17], 0);
    result = Function_2021cac(v4[16], 0);
  }
  return result;
}

//----- (021D3228) --------------------------------------------------------
int *__fastcall Function_21d3228(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  Function_21d30f8(a1);
  Function_201ada4_ClearTextBox(v1 + 12, 13);
  v2 = Function_21d1f84(*(uint *)(v1 + 4));
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      Function_21d34f4(v1 + 12, v1 + 84);
      Function_21d34f4(v1 + 12, v1 + 88);
      v4 = Function_21d1fa8(*(uint *)(v1 + 4), 0);
      Function_21d351c(v1, v1 + 12, v1 + 84, v4);
      v5 = Function_21d1fa8(*(uint *)(v1 + 4), 1);
      Function_21d351c(v1, v1 + 12, v1 + 88, v5);
    }
    else if ( v2 == 2 )
    {
      *(uint *)(v1 + 92) = Function_21d32d0(v1);
    }
  }
  else
  {
    Function_21d34f4(v1 + 12, v1 + 84);
    v3 = Function_21d1fa8(*(uint *)(v1 + 4), 0);
    Function_21d351c(v1, v1 + 12, v1 + 84, v3);
  }
  return Function_201accc(v1 + 12);
}

//----- (021D32D0) --------------------------------------------------------
int __fastcall Function_21d32d0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v10;
  int v11;
  int v12;
  int v13;
  ushort *v14;
  int v15;

  v11 = a1;
  v1 = 0;
  v14 = Function_21d1fc0(*(uint *)(a1 + 4), 0x23u);
  v12 = 1;
  v13 = 0;
  v2 = 0;
  Function_21d33c8(v11 + 100, v11);
  v3 = v11;
  v15 = v11 + 12;
  v4 = v11 + 84;
  do
  {
    switch ( (uchar)Function_21d3400(v11 + 100, v14) )
    {
      case 0u:
        v10 = v1;
        Function_201d78c(v15, 1);
        v2 += Function_2002d7c(1, (int)v14, 0);
        break;
      case 1u:
        *(ushort *)(v3 + 84) = v2 + 50;
        *(ushort *)(v3 + 86) = v1 + 8;
        Function_21d34f4(v15, v4);
        v7 = Function_21d1fa8(*(uint *)(v11 + 4), v13);
        if ( v7 != 0xFFFF )
          Function_21d351c(v11, v15, v4, v7);
        v3 += 4;
        v4 += 4;
        ++v13;
        v2 += 100;
        break;
      case 2u:
        v1 += 16;
        v2 = 0;
        break;
      case 3u:
        v12 = 0;
        break;
      default:
        break;
    }
  }
  while ( v12 );
  Function_21d33f4(v11 + 100, v5, v6, v7, v10);
  Function_20237bc_FreeMsg((int)v14, v8);
  return v13;
}

//----- (021D33C8) --------------------------------------------------------
int __fastcall Function_21d33c8(ushort **a1, int a2)
{
  ushort **v2;
  ushort *v3;
  int v4;
  ushort *v5;
  int result;

  v2 = a1;
  v3 = Function_21d1fc0(*(uint *)(a2 + 4), 0x23u);
  *v2 = v3;
  v5 = (ushort *)Function_2023e2c((int)v3, v4);
  v2[1] = v5;
  if ( *v5 == 65534 )
  {
    result = 1;
    v2[2] = (ushort *)1;
  }
  else
  {
    result = 0;
    v2[2] = 0;
  }
  return result;
}

//----- (021D33F4) --------------------------------------------------------
uint __fastcall Function_21d33f4(int *a1, int a2)
{
  return Function_20237bc_FreeMsg(*a1, a2);
}

//----- (021D3400) --------------------------------------------------------
int __fastcall Function_21d3400(int a1, ushort *a2)
{
  int v2;
  char *v3;
  int v4;
  int v5;
  int result;
  int v7;

  v2 = a1;
  v3 = *(char **)(a1 + 4);
  v4 = *(uint *)(a1 + 8);
  switch ( (uchar)a2 )
  {
    case 0:
      if ( !v4 )
      {
        do
        {
          v5 = **(ushort **)(v2 + 4);
          switch ( v5 )
          {
            case 0xE000:
              *(uint *)(v2 + 8) = 2;
              break;
            case 0xFFFE:
              *(uint *)(v2 + 8) = 1;
              break;
            case 0xFFFF:
              *(uint *)(v2 + 8) = 3;
              break;
            default:
              *(uint *)(v2 + 4) += 2;
              break;
          }
        }
        while ( !*(uint *)(v2 + 8) );
      }
      Function_2023d8c(a2, v3, (*(uint *)(v2 + 4) - (int)v3) / 2 + 1);
      result = 0;
      break;
    case 1:
      *(uint *)(v2 + 4) = Function_201d0c8((ushort *)v3);
      result = 1;
      goto LABEL_15;
    case 2:
      *(uint *)(v2 + 4) = v3 + 2;
      result = 2;
LABEL_15:
      v7 = **(ushort **)(v2 + 4);
      switch ( v7 )
      {
        case 0xE000:
          *(uint *)(v2 + 8) = 2;
          break;
        case 0xFFFE:
          *(uint *)(v2 + 8) = 1;
          break;
        case 0xFFFF:
          *(uint *)(v2 + 8) = 3;
          break;
        default:
          *(uint *)(v2 + 8) = 0;
          break;
      }
      break;
    default:
      result = 3;
      break;
  }
  return result;
}

//----- (021D34CC) --------------------------------------------------------
int __fastcall Function_21d34cc(ushort *a1, ushort *a2)
{
  int result;

  *a2 = *a1 - 48;
  result = (short)a1[1] - 8;
  a2[1] = result;
  return result;
}

//----- (021D34E0) --------------------------------------------------------
int __fastcall Function_21d34e0(ushort *a1, ushort *a2)
{
  int result;

  *a2 = *a1 + 24;
  result = (short)a1[1] + 8;
  a2[1] = result;
  return result;
}

//----- (021D34F4) --------------------------------------------------------
int __fastcall Function_21d34f4(int a1, ushort *a2, int a3, int a4)
{
  int v4;
  ushort v6;
  ushort v7;
  int v8;

  v8 = a4;
  v4 = a1;
  Function_21d34cc(a2, &v6);
  return Function_201ae78(v4, 14, v6, v7, 0x60u, 0x10u);
}

//----- (021D351C) --------------------------------------------------------
int __fastcall Function_21d351c(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  char v11;
  int v12;

  v12 = a4;
  v4 = a1;
  result = 0xFFFF;
  v6 = a4;
  v7 = a2;
  if ( a4 != 0xFFFF )
  {
    Function_21d34cc(a3, &v11);
    Function_2014db8(v6, *(uint *)(v4 + 76), v8, v9);
    Function_2002d7c(1, *(uint *)(v4 + 76), 0);
    v10 = *(uint *)(v4 + 76);
    result = Function_201d78c(v7, 1);
  }
  return result;
}

//----- (021D3574) --------------------------------------------------------
int __fastcall Function_21d3574(int a1)
{
  return *(uint *)(a1 + 92);
}

//----- (021D3578) --------------------------------------------------------
int *__fastcall Function_21d3578(int a1)
{
  int v1;
  uint *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v1 = a1;
  switch ( (uchar)Function_201ada4_ClearTextBox(a1 + 28, 9) )
  {
    case 0u:
      v2 = Function_200b368(2u, 60, 0);
      v3 = Function_2023790(300, 0);
      Function_200b7b4((int)v2, 0, 0);
      v4 = Function_21d1f88(*(int **)(v1 + 4));
      Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 72), v4, *(ushort **)(v1 + 76));
      Function_200c388(v2, v3, *(uint *)(v1 + 76));
      Function_201d78c(v1 + 28, 1);
      Function_20237bc_FreeMsg(v3, v5);
      Function_200b3f0(v2, v6);
      break;
    case 1u:
      Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 72), 7u, *(ushort **)(v1 + 76));
      v8 = *(uint *)(v1 + 76);
      Function_201d78c(v1 + 28, 1);
      break;
    case 2u:
      Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 72), 6u, *(ushort **)(v1 + 76));
      v7 = *(uint *)(v1 + 76);
      Function_201d78c(v1 + 28, 1);
      break;
    case 3u:
      Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 72), 8u, *(ushort **)(v1 + 76));
      v9 = *(uint *)(v1 + 76);
      Function_201d78c(v1 + 28, 1);
      break;
    default:
      return Function_201accc(v1 + 28);
  }
  return Function_201accc(v1 + 28);
}

//----- (021D3684) --------------------------------------------------------
int __fastcall Function_21d3684(int a1)
{
  return Function_21d375c(a1, 0);
}

//----- (021D3690) --------------------------------------------------------
int __fastcall Function_21d3690(int a1)
{
  return Function_21d375c(a1, 1);
}

//----- (021D369C) --------------------------------------------------------
int __fastcall Function_21d369c(int a1, int a2)
{
  int v2;

  v2 = a1;
  Function_2021cac(*(uint *)(a1 + 60), a2);
  return Function_21d375c(v2, 1);
}

//----- (021D36B0) --------------------------------------------------------
uint __fastcall Function_21d36b0(int a1)
{
  int v1;
  uint result;

  v1 = a1;
  result = Function_21d1f84(*(uint *)(a1 + 4));
  if ( result == 2 )
  {
    Function_2021cac(*(uint *)(v1 + 64), 0);
    result = Function_2021cac(*(uint *)(v1 + 68), 0);
  }
  return result;
}

//----- (021D36D0) --------------------------------------------------------
int __fastcall Function_21d36d0(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = Function_21d1f84(*(uint *)(a1 + 4));
  if ( result == 2 )
  {
    Function_2021cac(*(uint *)(v1 + 64), 1);
    Function_2021cac(*(uint *)(v1 + 68), 1);
    Function_2021d6c(*(uint *)(v1 + 64), 0xDu);
    result = Function_2021d6c(*(uint *)(v1 + 68), 0xCu);
  }
  return result;
}

//----- (021D3700) --------------------------------------------------------
int __fastcall Function_21d3700(int a1, int a2)
{
  int v2;
  short v4;
  short v5;
  int v6;
  int v7;
  int v8;

  v2 = a1;
  if ( *(uint *)(a1 + 92) )
  {
    Function_21d34e0((ushort *)(a1 + 84 + 4 * a2), &v4);
    v6 = v4 << 12;
    v7 = v5 << 12;
    v8 = 0;
  }
  else
  {
    v6 = 0x80000;
    v7 = 98304;
    v8 = 0;
    Function_2021c50(*(uint **)(a1 + 60), &v6);
  }
  Function_2021c50(*(uint **)(v2 + 60), &v6);
  return Function_21d375c(v2, 1);
}

//----- (021D375C) --------------------------------------------------------
int __fastcall Function_21d375c(int a1, int a2)
{
  int v2;
  int result;
  int v4;

  if ( *(uint *)(a1 + 92) )
  {
    v2 = *(uint *)(a1 + 60);
    if ( a2 )
      result = Function_2021d6c(v2, 0);
    else
      result = Function_2021d6c(v2, 1u);
  }
  else
  {
    v4 = *(uint *)(a1 + 60);
    if ( a2 )
      result = Function_2021d6c(v4, 0xEu);
    else
      result = Function_2021d6c(v4, 0xFu);
  }
  return result;
}

//----- (021D3790) --------------------------------------------------------
int __fastcall Function_21d3790(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  Function_201ada4_ClearTextBox(a1 + 44, 9);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 72), 9u, *(ushort **)(v1 + 76));
  v2 = *(uint *)(v1 + 76);
  Function_201d78c(v1 + 44, 0);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 72), 0xAu, *(ushort **)(v1 + 76));
  v3 = *(uint *)(v1 + 76);
  Function_201d78c(v1 + 44, 0);
  Function_200dc48(v1 + 44, 0, *(uint *)(v1 + 96), 0xEu);
  Function_2014a58(*(int **)(v1 + 80), v1 + 44);
  return Function_201a954(v1 + 44, v4);
}

//----- (021D381C) --------------------------------------------------------
int *__fastcall Function_21d381c(int a1)
{
  int v1;

  v1 = a1;
  Function_201ae78(a1 + 44, 9, 0, 0, 0xEu, 0x20u);
  return Function_2014a58(*(int **)(v1 + 80), v1 + 44);
}

//----- (021D384C) --------------------------------------------------------
int __fastcall Function_21d384c(int a1)
{
  int v1;

  v1 = a1;
  Function_200dc9c(a1 + 44, 0);
  return Function_201acf4(v1 + 44);
}

//----- (021D3864) --------------------------------------------------------
uint *__fastcall Function_21d3864(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  uint *result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  result = (uint *)malloc(0x23u, 16);
  *result = v3;
  result[1] = v4;
  result[2] = v5;
  result[3] = 0;
  return result;
}

//----- (021D3880) --------------------------------------------------------
uint __fastcall Function_21d3880(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 12);
  if ( v2 )
    Function_2021bd4(v2);
  return free(v1);
}

//----- (021D3898) --------------------------------------------------------
int __fastcall Function_21d3898(int *a1, int a2)
{
  int *v2;
  int v3;
  uint *v4;

  v2 = a1;
  v3 = a2;
  v4 = (uint *)Function_21d2e04(*a1);
  Function_200710c(v3, 4u, v4, 3u, 0, 0, 1, 35);
  Function_20070e8(v3, 5u, v4, 3u, 0, 0, 1, 35);
  Function_21d390c(v4, dword_21D52D4, 0);
  Function_21d390c(v4, dword_21D52DC, 1);
  Function_21d3980(v2);
  return Function_2019448(v4, 3u);
}

//----- (021D390C) --------------------------------------------------------
uint __fastcall Function_21d390c(uint *a1, uchar *a2, int a3, int a4)
{
  uchar *v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;
  char v10;
  int v11;

  v11 = a4;
  v4 = a2;
  v5 = a3;
  Function_201a8d4(a1, (int)&v10, a2);
  Function_201a9f4((int)&v10);
  Function_201ada4_ClearTextBox((int)&v10, 14);
  v6 = Function_200b010_LoadFromNARCCallMsgDecrypt(26, 0x1B6u, v5, 0x23u);
  Function_2002d7c(0, (int)v6, 0);
  v7 = 8 * v4[3];
  Function_201d78c((int)&v10, 0);
  Function_201accc((int)&v10);
  Function_20237bc_FreeMsg((int)v6, v8);
  return Function_201a8fc((int)&v10);
}

//----- (021D3980) --------------------------------------------------------
uint __fastcall Function_21d3980(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  char v7;
  int v8;

  v8 = a4;
  v4 = a1;
  Function_21d2e0c(*a1, (int)&v7, 0, 3);
  v5 = Function_21d2e50(*v4, (int)&v7, 64, 56, 5, 1);
  v4[3] = v5;
  Function_2021d6c(v5, 2u);
  return Function_2021cac(v4[3], 0);
}

//----- (021D39BC) --------------------------------------------------------
int __fastcall Function_21d39bc(int a1)
{
  return Function_2021d6c(*(uint *)(a1 + 12), 3u);
}

//----- (021D39C8) --------------------------------------------------------
int __fastcall Function_21d39c8(int a1)
{
  return Function_2021d6c(*(uint *)(a1 + 12), 2u);
}

//----- (021D39D4) --------------------------------------------------------
uint __fastcall Function_21d39d4(int a1, int a2)
{
  return Function_2021cac(*(uint *)(a1 + 12), a2);
}

//----- (021D39E0) --------------------------------------------------------
int __fastcall Function_21d39e0(int a1)
{
  return Function_2021d34(*(uint *)(a1 + 12));
}

//----- (021D39EC) --------------------------------------------------------
int __fastcall Function_21d39ec(int a1, int a2, int a3, int a4)
{
  int v4;
  int v6;
  int v7;
  int v8;
  int v9;

  v9 = a4;
  v4 = a1;
  v8 = 0;
  if ( a2 && a2 == 1 )
  {
    v6 = 786432;
    v7 = 229376;
  }
  else
  {
    v6 = 0x40000;
    v7 = 229376;
  }
  Function_2021c50(*(uint **)(a1 + 12), &v6);
  return Function_2021d6c(*(uint *)(v4 + 12), 2u);
}

//----- (021D3A2C) --------------------------------------------------------
void __fastcall Function_21d3a2c(int *a1)
{
  int v1;

  v1 = Function_21d2e04(*a1);
  Function_2019184(v1, 3u, 3u, 64);
}

//----- (021D3A40) --------------------------------------------------------
void __fastcall Function_21d3a40(int *a1)
{
  int v1;

  v1 = Function_21d2e04(*a1);
  Function_2019184(v1, 3u, 3u, 0);
}

//----- (021D3A54) --------------------------------------------------------
int *__fastcall Function_21d3a54(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int *v6;
  int *v7;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = (int *)malloc(0x23u, 96);
  v7 = v6;
  *v6 = v3;
  v6[1] = v4;
  v6[2] = v5;
  v6[3] = Function_21d2e04(v3);
  v7[4] = 0;
  v7[6] = 0;
  v7[23] = 0;
  return v7;
}

//----- (021D3A80) --------------------------------------------------------
uint __fastcall Function_21d3a80(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 92);
  if ( v2 )
    Function_2021bd4(v2);
  return free(v1);
}

//----- (021D3A98) --------------------------------------------------------
int __fastcall Function_21d3a98(int *a1, int a2)
{
  int *v2;
  int v3;
  uint *v4;
  uint v5;
  int v6;
  int v7;

  v2 = a1;
  v3 = a2;
  v4 = (uint *)Function_21d2e04(*a1);
  Function_200710c(v3, 2u, v4, 1u, 0, 0, 1, 35);
  v5 = Function_20070e8(v3, 3u, v4, 1u, 0, 0, 1, 35);
  v6 = Function_21d3b74(v2, v4, v5 >> 5);
  v7 = Function_21d3c78(v2, v4, v6);
  Function_21d3d44(v2, v4, v7);
  Function_2019184((int)v4, 1u, 0, -4);
  Function_2019184((int)v4, 1u, 3u, 2);
  Function_21d3e0c(v2);
  G2x_SetBlendBrightness_(&REG_BLDCNT, 2, -10);
  WIN_IN = WIN_IN & 0xFFC0 | 0x3F;
  WIN_OUT = WIN_OUT & 0xFFC0 | 0x3D;
  WIN0_X1 = 255;
  WIN0_Y1 = 160;
  REG_DISPCNT = REG_DISPCNT & 0xFFFF1FFF | 0x2000;
  return Function_2019448(v4, 1u);
}

//----- (021D3B74) --------------------------------------------------------
uint __fastcall Function_21d3b74(int a1, uint *a2, uint a3, int a4)
{
  uint v4;
  char v5;
  int v6;
  int v7;
  ushort *v8;
  int v9;
  int v11;
  uint *v12;
  ushort **v13;
  char v14;
  char v15;
  int v16;

  v16 = a4;
  v4 = a3;
  v11 = a1;
  v12 = a2;
  v13 = (ushort **)LoadFromMsgNARC(1, 26, 436, 0x23u);
  v5 = 1;
  v14 = 9;
  v6 = 0;
  do
  {
    if ( v6 )
    {
      s32_div_f(v6, 3);
      if ( !v7 )
      {
        v5 = 1;
        v14 += 3;
      }
    }
    if ( Function_2099ca0(*(uint *)(v11 + 8), v6) )
      v8 = Function_200b1ec_CallMsgDecrypt(v13, v6);
    else
      v8 = Function_200b1ec_CallMsgDecrypt(v13, 0xCu);
    if ( v4 >= 0x3EE )
      ErrorHandler();
    Function_201a7e8(v12, (int)&v15, 1, v5, v14, 9u, 2u, 11, v4);
    Function_201ada4_ClearTextBox((int)&v15, 15);
    Function_2002d7c(0, (int)v8, 0);
    Function_201d78c((int)&v15, 0);
    Function_201a9f4((int)&v15);
    Function_201accc((int)&v15);
    Function_20237bc_FreeMsg((int)v8, v9);
    Function_201a8fc((int)&v15);
    ++v6;
    v4 += 18;
    v5 += 10;
  }
  while ( v6 < 12 );
  Function_200b190((ushort *)v13);
  return v4;
}

//----- (021D3C78) --------------------------------------------------------
int __fastcall Function_21d3c78(int a1, uint *a2, uint a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  uint v8;
  uint v9;
  int v10;
  uint v12;
  int v13;
  int v14;
  char v15;
  int v16;

  v16 = a4;
  v4 = a2;
  v5 = a1;
  v12 = a3;
  if ( a3 >= 0x338 )
    ErrorHandler();
  Function_201a7e8(v4, (int)&v15, 1, 34, 10, 0x19u, 8u, 11, v12);
  v6 = Function_2023790(4, 0x23u);
  v7 = Function_201ada4_ClearTextBox((int)&v15, 15);
  v8 = Function_21d5044(v7);
  v9 = 0;
  if ( v8 )
  {
    do
    {
      Function_21d5048(v9, v6);
      Function_21d506c(v9, &v14, &v13);
      Function_2099cdc(*(uint *)(v5 + 8), v9);
      Function_201d78c((int)&v15, 0);
      ++v9;
    }
    while ( v9 < v8 );
  }
  Function_201accc((int)&v15);
  Function_201a9f4((int)&v15);
  Function_20237bc_FreeMsg(v6, v10);
  Function_201a8fc((int)&v15);
  return v12 + 200;
}

//----- (021D3D44) --------------------------------------------------------
uint __fastcall Function_21d3d44(int a1, uint *a2, uint a3)
{
  uint v3;
  short *v4;
  uint v5;
  uint v6;
  int v7;
  uint *v9;
  ushort *v10;
  ushort **v11;
  char v12;

  v3 = a3;
  v9 = a2;
  v11 = (ushort **)LoadFromMsgNARC(1, 26, 436, 0x23u);
  v10 = Function_200b1ec_CallMsgDecrypt(v11, 0xDu);
  v4 = &word_21D52E4;
  v5 = (uint)(64 - Function_2002d7c(0, (int)v10, 0)) >> 1;
  v6 = 0;
  do
  {
    if ( v3 >= 0x3F0 )
      ErrorHandler();
    Function_201a7e8(v9, (int)&v12, 1, *v4, v4[1], 8u, 2u, 11, v3);
    Function_201ada4_ClearTextBox((int)&v12, 15);
    Function_201d78c((int)&v12, 0);
    Function_201a9f4((int)&v12);
    Function_201accc((int)&v12);
    Function_201a8fc((int)&v12);
    ++v6;
    v3 += 16;
    v4 += 2;
  }
  while ( v6 < 2 );
  Function_20237bc_FreeMsg((int)v10, v7);
  Function_200b190((ushort *)v11);
  return v3;
}

//----- (021D3E0C) --------------------------------------------------------
uint __fastcall Function_21d3e0c(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  char v7;
  int v8;

  v8 = a4;
  v4 = a1;
  Function_21d2e0c(*a1, (int)&v7, 0, 1);
  v5 = Function_21d2e50(*v4, (int)&v7, 48, 54, 2, 1);
  v4[23] = v5;
  Function_2021d6c(v5, 4u);
  return Function_2021cac(v4[23], 0);
}

//----- (021D3E48) --------------------------------------------------------
uint __fastcall Function_21d3e48(int a1, int a2)
{
  int v2;
  int v3;
  uint result;
  bool v5;
  int v6;

  v2 = a1;
  v3 = a2;
  result = Function_2021cac(*(uint *)(a1 + 92), a2);
  if ( v3 )
  {
    v5 = Function_21d1f94(*(uint *)(v2 + 4)) == 0;
    v6 = *(uint *)(v2 + 92);
    if ( v5 )
      result = Function_2021d6c(v6, 4u);
    else
      result = Function_2021d6c(v6, 6u);
  }
  return result;
}

//----- (021D3E74) --------------------------------------------------------
int __fastcall Function_21d3e74(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint v5;
  int v6;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v2 = a1;
  v3 = a2;
  v4 = Function_21d1f94(*(uint *)(a1 + 4));
  v12 = 0;
  if ( v3 == 254 )
  {
    v10 = 132;
    v11 = 150;
    v5 = 16;
  }
  else if ( v4 )
  {
    Function_21d506c(v3, &v9, &v8);
    v5 = 6;
    v10 = v9 + 26;
    v11 = v8 + 62;
  }
  else
  {
    u32_div_f(v3, 3);
    v10 = 80 * v6 + 48;
    v11 = 24 * u32_div_f(v3, 3) + 54;
    v5 = 4;
  }
  v10 <<= 12;
  v11 <<= 12;
  Function_2021c50(*(uint **)(v2 + 92), &v10);
  return Function_2021d6c(*(uint *)(v2 + 92), v5);
}

//----- (021D3EF8) --------------------------------------------------------
int __fastcall Function_21d3ef8(int a1)
{
  *(uint *)(a1 + 20) = 0;
  return Function_21d4fb0(a1 + 28);
}

//----- (021D3F10) --------------------------------------------------------
int __fastcall Function_21d3f10(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 20);
  if ( v2 )
  {
    if ( v2 == 1 )
      return Function_21d4e8c(v1 + 60);
  }
  else if ( Function_21d4ff0(v1 + 28) )
  {
    Function_21d4e38(v1 + 60, *(uint *)(v1 + 12));
    ++*(uint *)(v1 + 20);
  }
  return 0;
}

//----- (021D3F60) --------------------------------------------------------
int __fastcall Function_21d3f60(int a1)
{
  *(uint *)(a1 + 20) = 0;
  return Function_21d4e38(a1 + 60, *(uint *)(a1 + 12));
}

//----- (021D3F84) --------------------------------------------------------
int __fastcall Function_21d3f84(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 20);
  if ( v2 )
  {
    if ( v2 == 1 )
      return Function_21d4ff0(v1 + 28);
  }
  else if ( Function_21d4e8c(v1 + 60) )
  {
    Function_21d4fb0(v1 + 28);
    ++*(uint *)(v1 + 20);
  }
  return 0;
}

//----- (021D3FD0) --------------------------------------------------------
void __fastcall Function_21d3fd0(int a1)
{
  Function_2019184(*(uint *)(a1 + 12), 1u, 3u, 2);
}

//----- (021D3FE0) --------------------------------------------------------
int __fastcall Function_21d3fe0(int a1)
{
  return Function_21d4fb0(a1 + 28);
}

//----- (021D3FF8) --------------------------------------------------------
int __fastcall Function_21d3ff8(int a1)
{
  return Function_21d4ff0(a1 + 28);
}

//----- (021D4004) --------------------------------------------------------
int __fastcall Function_21d4004(int a1)
{
  return Function_21d4f1c(a1 + 28, 2, 63, 124, 0, 12);
}

//----- (021D4020) --------------------------------------------------------
int __fastcall Function_21d4020(int a1)
{
  if ( !Function_21d4f4c(a1 + 28) )
    return 0;
  Function_2019120(1u, 0);
  return 1;
}

//----- (021D403C) --------------------------------------------------------
int __fastcall Function_21d403c(int a1)
{
  int v1;

  v1 = a1;
  G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 2, 63, 0, 16);
  Function_2019120(1u, 1);
  return Function_21d4f1c(v1 + 28, 2, 63, 0, 124, 12);
}

//----- (021D4078) --------------------------------------------------------
int __fastcall Function_21d4078(int a1)
{
  return Function_21d4f4c(a1 + 28);
}

//----- (021D4084) --------------------------------------------------------
void __fastcall Function_21d4084(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  if ( Function_21d1f94(*(uint *)(a1 + 4)) )
    v2 = 252;
  else
    v2 = -4;
  Function_2019184(*(uint *)(v1 + 12), 1u, 0, v2);
}

//----- (021D40A8) --------------------------------------------------------
int __fastcall Function_21d40a8(int a1)
{
  int v1;

  v1 = a1;
  Function_21d1f94(*(uint *)(a1 + 4));
  return Function_21d4e38(v1 + 60, *(uint *)(v1 + 12));
}

//----- (021D40DC) --------------------------------------------------------
int __fastcall Function_21d40dc(int a1)
{
  return Function_21d4e8c(a1 + 60);
}

//----- (021D40E8) --------------------------------------------------------
int *__fastcall Function_21d40e8(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int *v6;
  int *v7;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = (int *)malloc(0x23u, 148);
  v7 = v6;
  *v6 = v3;
  v6[1] = v4;
  v6[2] = v5;
  v6[3] = Function_21d2e04(v3);
  v7[15] = Function_2023790(32, 0x23u);
  Function_201a7e8((uint *)v7[3], (int)(v7 + 4), 2, 4, 0, 0x1Au, 0x20u, 12, 1);
  Function_201a7e8((uint *)v7[3], (int)(v7 + 8), 2, 0, 0, 0xCu, 4u, 12, 1);
  v7[12] = 0;
  v7[13] = 0;
  v7[14] = 0;
  return v7;
}

//----- (021D4164) --------------------------------------------------------
uint __fastcall Function_21d4164(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v2 = a1;
  v3 = a1[12];
  if ( v3 )
    Function_2021bd4(v3);
  v4 = v2[13];
  if ( v4 )
    Function_2021bd4(v4);
  v5 = v2[14];
  if ( v5 )
    Function_2021bd4(v5);
  v6 = v2[15];
  if ( v6 )
    Function_20237bc_FreeMsg(v6, a2);
  Function_201a8fc((int)(v2 + 8));
  Function_201a8fc((int)(v2 + 4));
  return free((int)v2);
}

//----- (021D41A8) --------------------------------------------------------
uint __fastcall Function_21d41a8(int *a1)
{
  int *v1;
  uint *v2;

  v1 = a1;
  v2 = (uint *)Function_21d2e04(*a1);
  Function_2019690(2u, 32, 0, 0x23u);
  Function_2019cb8((int)v2, 2, 0, 0, 0, 0x20u, 0x20u, 0xCu);
  Function_201ada4_ClearTextBox((int)(v1 + 4), 0);
  Function_201a9f4((int)(v1 + 4));
  Function_201accc((int)(v1 + 4));
  Function_2019448(v2, 2u);
  Function_21d4210(v1);
  return Function_2019120(2u, 0);
}

//----- (021D4210) --------------------------------------------------------
uint __fastcall Function_21d4210(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int v7;
  char v9;
  int v10;

  v10 = a4;
  v4 = a1;
  Function_21d2e0c(*a1, (int)&v9, 0, 2);
  v5 = Function_21d2e50(*v4, (int)&v9, 72, 56, 3, 1);
  v4[12] = v5;
  Function_2021d6c(v5, 8u);
  Function_2021cac(v4[12], 0);
  v6 = Function_21d2e50(*v4, (int)&v9, 240, 64, 4, 1);
  v4[13] = v6;
  Function_2021d6c(v6, 0xBu);
  Function_2021cac(v4[13], 0);
  v7 = Function_21d2e50(*v4, (int)&v9, 240, 144, 4, 1);
  v4[14] = v7;
  Function_2021d6c(v7, 0xAu);
  return Function_2021cac(v4[14], 0);
}

//----- (021D4294) --------------------------------------------------------
int *__fastcall Function_21d4294(int a1)
{
  int v1;
  uint v2;
  uint v3;
  int v4;

  v1 = a1;
  Function_201ada4_ClearTextBox(a1 + 16, 0);
  Function_21d4638(v1);
  v2 = Function_21d1fe4(*(uint *)(v1 + 4));
  if ( v2 > 0xA )
    v2 = 10;
  v3 = 0;
  v4 = *(uint *)(v1 + 140);
  if ( v2 )
  {
    do
    {
      Function_21d4658(v1, v3, v4);
      if ( v3 & 1 )
        v4 += 24;
      ++v3;
    }
    while ( v3 < v2 );
  }
  return Function_201accc(v1 + 16);
}

//----- (021D42E4) --------------------------------------------------------
int __fastcall Function_21d42e4(int a1)
{
  int v1;

  v1 = a1;
  G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 4, 63, 0, 16);
  Function_2019120(2u, 1);
  WIN_IN = ((uint)&WIN_IN >> 13) | WIN_IN & 0xC0FF | 0x1F00;
  *(uchar *)(v1 + 132) = WIN_OUT;
  *(uint *)(v1 + 136) = (REG_DISPCNT & 0xE000u) >> 13;
  WIN_OUT = WIN_OUT & 0xFFC0 | 0x3B;
  WIN1_X1 = 255;
  WIN1_Y1 = 11952;
  REG_DISPCNT = REG_DISPCNT & 0xFFFF1FFF | 0x4000;
  *(uint *)(v1 + 128) = 0;
  return Function_21d4f1c(v1 + 64, 4, 63, 0, 124, 12);
}

//----- (021D4390) --------------------------------------------------------
BOOL __fastcall Function_21d4390(int a1)
{
  BOOL result;

  if ( *(uint *)(a1 + 128) )
    result = 1;
  else
    result = Function_21d4f4c(a1 + 64) != 0;
  return result;
}

//----- (021D43B4) --------------------------------------------------------
int __fastcall Function_21d43b4(int a1)
{
  *(uint *)(a1 + 128) = 0;
  return Function_21d4f1c(a1 + 64, 4, 63, 124, 0, 12);
}

//----- (021D43D8) --------------------------------------------------------
int __fastcall Function_21d43d8(int a1)
{
  int v1;
  short v2;

  v1 = a1;
  if ( *(uint *)(a1 + 128) )
    return 1;
  if ( !Function_21d4f4c(a1 + 64) )
    return 0;
  Function_2019120(2u, 0);
  v2 = *(uchar *)(v1 + 132) & 0x1F | WIN_OUT & 0xFFC0;
  if ( *(uchar *)(v1 + 132) & 0x20 )
    v2 |= 0x20u;
  WIN_OUT = v2;
  REG_DISPCNT = (*(uint *)(v1 + 136) << 13) | REG_DISPCNT & 0xFFFF1FFF;
  return 1;
}

//----- (021D4440) --------------------------------------------------------
uint __fastcall Function_21d4440(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  uint result;

  v2 = a1;
  v3 = a2;
  Function_2021cac(*(uint *)(a1 + 48), a2);
  if ( v3 )
  {
    v4 = Function_21d204c(*(uint *)(v2 + 4));
    Function_2021cac(*(uint *)(v2 + 52), v4);
    v5 = Function_21d2060(*(uint *)(v2 + 4));
    result = Function_2021cac(*(uint *)(v2 + 56), v5);
  }
  else
  {
    Function_2021cac(*(uint *)(v2 + 52), 0);
    result = Function_2021cac(*(uint *)(v2 + 56), 0);
  }
  return result;
}

//----- (021D4480) --------------------------------------------------------
int __fastcall Function_21d4480(int a1, uint a2, int a3, int a4)
{
  int v4;
  uint v6;
  uint v7;
  int v8;
  int v9;

  v9 = a4;
  v4 = a1;
  v6 = (112 * (a2 & 1) + 72) << 12;
  v7 = (24 * (a2 >> 1) + 56) << 12;
  v8 = 0;
  Function_2021c50(*(uint **)(a1 + 48), (int *)&v6);
  return Function_2021d6c(*(uint *)(v4 + 48), 8u);
}

//----- (021D44BC) --------------------------------------------------------
int __fastcall Function_21d44bc(int *a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int i;
  int v10;
  int v11;
  int v12;
  int v13;

  v2 = a1;
  v3 = a2;
  Function_21d45ac();
  v4 = v2[36];
  v5 = 2 * v3;
  v10 = v4;
  v12 = v4 + 2 * v3;
  v6 = v2[35];
  v13 = (v6 + 24 * v3) & 0xFF;
  if ( v3 >= 0 )
  {
    v7 = (v6 + 120) & 0xFF;
    v11 = v10 + 10;
    if ( v5 + v11 > (uint)Function_21d1fe4(v2[1]) )
      --v5;
  }
  else
  {
    v7 = (v6 + 24 * v3) & 0xFF;
    v11 = v12;
    v5 = -2 * v3;
  }
  for ( i = 0; i < v5; ++i )
  {
    Function_21d4658(v2, v11 + i, v7);
    if ( i & 1 )
      v7 = (uchar)(v7 + 24);
  }
  v2[35] = v13;
  v2[36] = v12;
  Function_201accc((int)(v2 + 4));
  return Function_21d4e38(v2 + 24, v2[3]);
}

//----- (021D4578) --------------------------------------------------------
int __fastcall Function_21d4578(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  if ( !Function_21d4e8c(a1 + 96) )
    return 0;
  v2 = Function_21d204c(*(uint *)(v1 + 4));
  Function_2021cac(*(uint *)(v1 + 52), v2);
  v3 = Function_21d2060(*(uint *)(v1 + 4));
  Function_2021cac(*(uint *)(v1 + 56), v3);
  return 1;
}

//----- (021D45AC) --------------------------------------------------------
int __fastcall Function_21d45ac(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  if ( a2 <= 0 )
  {
    v4 = *(uint *)(a1 + 140);
    v3 = (v4 + 24 * a2) & 0xFF;
  }
  else
  {
    v3 = (*(uint *)(a1 + 140) + 120) & 0xFF;
    v4 = (v3 + 24 * a2) & 0xFF;
  }
  if ( v3 < v4 )
    return Function_201ae78(a1 + 16, 0, 0, (ushort)v3, 0xD0u, v4 - v3);
  Function_201ae78(a1 + 16, 0, 0, (ushort)v3, 0xD0u, 256 - v3);
  return Function_201ae78(v2 + 16, 0, 0, 0, 0xD0u, v4);
}

//----- (021D4638) --------------------------------------------------------
void __fastcall Function_21d4638(int *a1)
{
  a1[35] = 48;
  a1[36] = 0;
  Function_2019184(a1[3], 2u, 3u, 0);
}

//----- (021D4658) --------------------------------------------------------
int __fastcall Function_21d4658(int a1, int a2, uint a3)
{
  int v3;
  uint v4;
  char v5;
  int v6;
  int result;
  int v8;
  ushort v9;

  v3 = a1;
  v4 = a3;
  v5 = a2;
  Function_21d2008(*(uint *)(a1 + 4), a2, *(ushort **)(a1 + 60));
  if ( v4 > 0xF0 )
  {
    Function_201ada4_ClearTextBox(v3 + 32, 0);
    v8 = *(uint *)(v3 + 60);
    Function_201d78c(v3 + 32, 0);
    v9 = 112 * (v5 & 1);
    Function_201addc(v3 + 16, *(uint *)(v3 + 44), 0, 0, 96, 16, v9, v4, 0x60u, 256 - v4);
    result = Function_201addc(
               v3 + 16,
               *(uint *)(v3 + 44),
               0,
               (ushort)(256 - v4),
               96,
               16,
               v9,
               0,
               0x60u,
               v4 - 240);
  }
  else
  {
    v6 = *(uint *)(v3 + 60);
    result = Function_201d78c(v3 + 16, 0);
  }
  return result;
}

//----- (021D4728) --------------------------------------------------------
int *__fastcall Function_21d4728(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int *v6;
  int *v7;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = (int *)malloc(0x23u, 1280);
  v7 = v6;
  *v6 = v4;
  v6[1] = v3;
  v6[2] = v5;
  v6[3] = Function_21d2e04(v4);
  v7[4] = Function_21d2e08(v4);
  v7[5] = 0;
  v7[6] = 0;
  v7[319] = 0;
  return v7;
}

//----- (021D4764) --------------------------------------------------------
uint __fastcall Function_21d4764(int a1)
{
  int v1;

  v1 = a1;
  Function_21d4ad4();
  return free(v1);
}

//----- (021D4774) --------------------------------------------------------
int __fastcall Function_21d4774(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_2007130(a2, 0x15u, 4u, 0, 64, 35);
  Function_200710c(v3, 0xBu, *(uint **)(v2 + 12), 4u, 0, 0, 1, 35);
  Function_21d4874(v2, v3);
  Function_21d48c4(v2, v3);
  if ( Function_21d1f94(*(uint *)(v2 + 4)) )
  {
    Function_20198e8(*(uint *)(v2 + 12), 4, 3, 3, 0xBu, 7u, v2 + 44, 0, 0, 0xBu, 7u);
    Function_20198e8(*(uint *)(v2 + 12), 4, 3, 14, 0xBu, 7u, v2 + 1122, 0, 0, 0xBu, 7u);
  }
  else
  {
    Function_20198e8(*(uint *)(v2 + 12), 4, 3, 3, 0xBu, 7u, v2 + 506, 0, 0, 0xBu, 7u);
    Function_20198e8(*(uint *)(v2 + 12), 4, 3, 14, 0xBu, 7u, v2 + 660, 0, 0, 0xBu, 7u);
  }
  Function_21d4a24(v2, v3);
  return Function_2019448(*(uint **)(v2 + 12), 4u);
}

//----- (021D4874) --------------------------------------------------------
uint __fastcall Function_21d4874(int a1, int a2)
{
  short *v2;
  uint v3;
  int v4;
  uint result;
  short v6;
  int v7;
  int v8;
  int v9;

  v2 = &word_21D52F4;
  v8 = a2;
  v3 = 0;
  v4 = a1 + 44;
  do
  {
    result = Function_20071d0(v8, (ushort)*v2, 1, &v9, 35);
    v7 = result;
    if ( result )
    {
      MIi_CpuCopy16(v9 + 12, v4, 154, v6);
      DC_FlushRange(v4, 154);
      result = free(v7);
    }
    ++v3;
    ++v2;
    v4 += 154;
  }
  while ( v3 < 8 );
  return result;
}

//----- (021D48C4) --------------------------------------------------------
uint *__fastcall Function_21d48c4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  ushort *v6;
  ushort *v7;
  int v8;
  int v9;
  int v10;
  int v12;
  int v13;
  char v14;
  char v15;
  short v16;
  int v17;
  int v18;

  v18 = a4;
  v4 = a1;
  v5 = a2;
  Function_2002bb8(2, 0);
  v6 = Function_200b010_LoadFromNARCCallMsgDecrypt(26, 0x1B5u, 11, 0x23u);
  v7 = Function_200b010_LoadFromNARCCallMsgDecrypt(26, 0x1B5u, 12, 0x23u);
  v9 = Function_20071b4(v5, 0x14u, 1, &v12, 35);
  if ( v9 )
  {
    Function_201a7a0((int)&v13);
    v13 = *(uint *)(v4 + 12);
    v14 = 11;
    v15 = 57;
    v16 &= 0x7FFFu;
    v17 = *(uint *)(v12 + 20);
    Function_21d498c(&v13, *(uint *)(v4 + 12), v6, 0);
    v17 = *(uint *)(v12 + 20) + 9856;
    Function_21d498c(&v13, *(uint *)(v4 + 12), v7, 0);
    DC_FlushRange(*(uint *)(v12 + 20), *(uint *)(v12 + 16));
    Function_201958c(*(uint **)(v4 + 12), 4u, *(int **)(v12 + 20), *(uint *)(v12 + 16), 0);
    free(v9);
  }
  Function_20237bc_FreeMsg((int)v7, v8);
  Function_20237bc_FreeMsg((int)v6, v10);
  return Function_2002c60(2);
}

//----- (021D498C) --------------------------------------------------------
uint __fastcall Function_21d498c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint v6;
  uint v7;
  short *v8;
  uint v9;
  int v10;
  int v12;
  int v13;
  uint v14;
  int v15;

  v12 = a1;
  v13 = a3;
  v4 = a4;
  v14 = Function_2023c5c(a3);
  v5 = Function_2023790(32, 0x23u);
  v6 = 2;
  v7 = v4 + (16 * (2 - v14) >> 1);
  v15 = 0;
  if ( v14 )
  {
    do
    {
      Function_2023c9c(v5, v13, v15);
      v8 = &word_21D52EC;
      Function_2002eec(2, v5, 0, 0x58u);
      v9 = 0;
      do
      {
        v10 = v7 + *v8;
        Function_201d78c(v12, 2);
        ++v9;
        ++v8;
      }
      while ( v9 < 4 );
      v7 += 16;
      v6 = v15 + 1;
      v15 = v6;
    }
    while ( v6 < v14 );
  }
  return Function_20237bc_FreeMsg(v5, v6);
}

//----- (021D4A24) --------------------------------------------------------
uint __fastcall Function_21d4a24(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  char v7;
  char v8;

  v2 = a1;
  v3 = a2;
  NNS_G2dInitImagePaletteProxy((int)&v8);
  NNS_G2dInitImageProxy((int)&v7);
  Function_200716c(v3, 0x19u, 2, 0, 35, (int)&v8);
  Function_200718c(v3, 0x18u, 1, 0, 0, 2, 0, 35, (int)&v7);
  Function_21d4af8(v2 + 28, v3, 22, 23);
  v4 = Function_21d4b40(v2, &v7, &v8, v2 + 28, 192, 56, 0, 0);
  *(uint *)(v2 + 20) = v4;
  Function_2021d6c(v4, 0);
  Function_2021cac(*(uint *)(v2 + 20), 0);
  v5 = Function_21d4b40(v2, &v7, &v8, v2 + 28, 192, 136, 0, 0);
  *(uint *)(v2 + 24) = v5;
  Function_2021d6c(v5, 2u);
  return Function_2021cac(*(uint *)(v2 + 24), 0);
}

//----- (021D4AD4) --------------------------------------------------------
int __fastcall Function_21d4ad4(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = *(uint *)(a1 + 20);
  if ( v2 )
    Function_2021bd4(v2);
  v3 = *(uint *)(v1 + 24);
  if ( v3 )
    Function_2021bd4(v3);
  return Function_21d4b2c(v1 + 28);
}

//----- (021D4AF8) --------------------------------------------------------
int __fastcall Function_21d4af8(int *a1, int a2, uint a3, uint a4)
{
  int *v4;
  int v5;
  uint v6;
  int result;

  v4 = a1;
  v5 = a2;
  v6 = a4;
  *a1 = Function_2007204(a2, a3, 1, a1 + 1, 35);
  result = Function_2007220(v5, v6, 1, v4 + 3, 35);
  v4[2] = result;
  return result;
}

//----- (021D4B2C) --------------------------------------------------------
uint __fastcall Function_21d4b2c(int *a1)
{
  int *v1;

  v1 = a1;
  free(*a1);
  return free(v1[2]);
}

//----- (021D4B40) --------------------------------------------------------
uint __fastcall Function_21d4b40(int a1, int a2, int a3, int a4, int a5, int a6, char a7, int a8)
{
  int v8;
  uint v9;
  int v11;
  int *v12;
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
  char v27;
  int v28;

  v28 = a4;
  v21 = a3;
  v19 = a2;
  v22 = *(uint *)(a4 + 4);
  v23 = *(uint *)(a4 + 12);
  v27 = a7;
  v20 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v11 = *(uint *)(a1 + 16);
  v12 = &v19;
  v15 = 0;
  v13 = a5 << 12;
  v14 = (a6 + 192) << 12;
  v16 = a8;
  v17 = 2;
  v18 = 35;
  v8 = Function_2021b90(&v11);
  v9 = v8;
  if ( v8 )
  {
    Function_2021cc8(v8, 1);
    Function_2021ce4(v9, 4096);
  }
  return v9;
}

//----- (021D4BA4) --------------------------------------------------------
uint *__fastcall Function_21d4ba4(int a1)
{
  int v1;
  int v2;
  int v3;
  uint *result;

  v1 = a1;
  v2 = malloc(0x23u, 24);
  if ( v2 )
  {
    v3 = Function_21d1f94(*(uint *)(v1 + 4));
    *(uint *)v2 = v1;
    *(uint *)(v2 + 4) = 0;
    *(ushort *)(v2 + 8) = 0;
    *(ushort *)(v2 + 10) = *((ushort *)&dword_21D5304 + 7 * v3);
    *(ushort *)(v2 + 12) = *((ushort *)&dword_21D5304 + 7 * v3 + 1);
    *(ushort *)(v2 + 14) = *((ushort *)&dword_21D5308 + 7 * v3);
    *(ushort *)(v2 + 16) = *((ushort *)&dword_21D5308 + 7 * v3 + 1);
    *(ushort *)(v2 + 18) = *((ushort *)&dword_21D530C + 7 * v3);
    *(ushort *)(v2 + 20) = *((ushort *)&dword_21D530C + 7 * v3 + 1);
    *(ushort *)(v2 + 22) = *((ushort *)dword_21D5310 + 7 * v3);
    result = AddTaskToTaskList1((int)Function_21d4c40, v2, 1u);
    *(uint *)(v1 + 1276) = result;
  }
  else
  {
    result = (uint *)1276;
    *(uint *)(v1 + 1276) = 0;
  }
  return result;
}

//----- (021D4C2C) --------------------------------------------------------
BOOL __fastcall Function_21d4c2c(int a1)
{
  return *(uint *)(a1 + 1276) == 0;
}

//----- (021D4C40) --------------------------------------------------------
uint __fastcall Function_21d4c40(int *a1, int a2)
{
  int v2;
  int *v3;
  uint result;

  v2 = a2;
  v3 = a1;
  result = *(uint *)(a2 + 4);
  if ( result <= 3 )
    JUMPOUT(__CS__, *((short *)&off_21D4C5C + result) + 35474526);
  switch ( (uchar)result )
  {
    case 0:
      Function_20198e8(
        *(uint *)(*(uint *)a2 + 12),
        4,
        *(ushort *)(a2 + 14) & 0xFF,
        *(ushort *)(a2 + 16) & 0xFF,
        0xBu,
        7u,
        *(uint *)a2 + 44 + 154 * *(ushort *)(a2 + 10),
        0,
        0,
        0xBu,
        7u);
      Function_20198e8(
        *(uint *)(*(uint *)v2 + 12),
        4,
        *(ushort *)(v2 + 20) & 0xFF,
        *(ushort *)(v2 + 22) & 0xFF,
        0xBu,
        7u,
        *(uint *)v2 + 44 + 154 * *(ushort *)(v2 + 18),
        0,
        0,
        0xBu,
        7u);
      Function_2019448(*(uint **)(*(uint *)v2 + 12), 4u);
      ++*(ushort *)(v2 + 10);
      result = *(uint *)(v2 + 4) + 1;
      *(uint *)(v2 + 4) = result;
      break;
    case 1:
      result = (ushort)++*(ushort *)(a2 + 8);
      if ( result >= 2 )
      {
        Function_20198e8(
          *(uint *)(*(uint *)a2 + 12),
          4,
          *(ushort *)(a2 + 14) & 0xFF,
          *(ushort *)(a2 + 16) & 0xFF,
          0xBu,
          7u,
          *(uint *)a2 + 44 + 154 * *(ushort *)(a2 + 10),
          0,
          0,
          0xBu,
          7u);
        Function_2019448(*(uint **)(*(uint *)v2 + 12), 4u);
        *(ushort *)(v2 + 8) = 0;
        ++*(ushort *)(v2 + 10);
        result = *(uint *)(v2 + 4) + 1;
        *(uint *)(v2 + 4) = result;
      }
      break;
    case 2:
      result = (ushort)++*(ushort *)(a2 + 8);
      if ( result >= 4 )
      {
        Function_20198e8(
          *(uint *)(*(uint *)a2 + 12),
          4,
          *(ushort *)(a2 + 14) & 0xFF,
          *(ushort *)(a2 + 16) & 0xFF,
          0xBu,
          7u,
          *(uint *)a2 + 44 + 154 * *(ushort *)(a2 + 10),
          0,
          0,
          0xBu,
          7u);
        Function_2019448(*(uint **)(*(uint *)v2 + 12), 4u);
        result = *(uint *)(v2 + 4) + 1;
        *(uint *)(v2 + 4) = result;
      }
      break;
    case 3:
      *(uint *)(*(uint *)a2 + 1276) = 0;
      free(a2);
      result = Call_RemoveTaskFromTaskList(v3);
      break;
    default:
      return result;
  }
  return result;
}

//----- (021D4DBC) --------------------------------------------------------
uint __fastcall Function_21d4dbc(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint result;

  v2 = a1;
  if ( a2 )
  {
    v3 = Function_21d204c(*(uint *)(a1 + 4));
    Function_2021cac(*(uint *)(v2 + 20), v3);
    v4 = Function_21d2060(*(uint *)(v2 + 4));
    result = Function_2021cac(*(uint *)(v2 + 24), v4);
  }
  else
  {
    Function_2021cac(*(uint *)(a1 + 20), 0);
    result = Function_2021cac(*(uint *)(v2 + 24), 0);
  }
  return result;
}

//----- (021D4DF4) --------------------------------------------------------
int __fastcall Function_21d4df4(int result, int a2, int a3)
{
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      if ( a3 )
      {
        if ( a3 == 1 )
          result = Function_2021d6c(*(uint *)(result + 24), 3u);
      }
      else
      {
        result = Function_2021d6c(*(uint *)(result + 24), 2u);
      }
    }
  }
  else if ( a3 )
  {
    if ( a3 == 1 )
      result = Function_2021d6c(*(uint *)(result + 20), 1u);
  }
  else
  {
    result = Function_2021d6c(*(uint *)(result + 20), 0);
  }
  return result;
}

//----- (021D4E38) --------------------------------------------------------
int __fastcall Function_21d4e38(int *a1, int a2, int a3, int a4, int a5, int a6)
{
  int *v6;
  int v7;
  int result;

  v6 = a1;
  *a1 = a2;
  a1[1] = a3;
  if ( a4 )
  {
    a1[3] = Function_20192f8(a2, a3);
    v7 = 3;
  }
  else
  {
    a1[3] = Function_20192ec(a2, a3);
    v7 = 0;
  }
  v6[2] = v7;
  v6[4] = (v6[3] + a5) & 0x1FF;
  v6[3] <<= 12;
  v6[5] = s32_div_f(a5 << 12, a6);
  *((ushort *)v6 + 12) = a6;
  result = 0;
  *((ushort *)v6 + 13) = 0;
  return result;
}

//----- (021D4E8C) --------------------------------------------------------
int __fastcall Function_21d4e8c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(ushort *)(a1 + 26);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      if ( !*(ushort *)(v1 + 24) )
      {
        Call_RemoveTaskFromTaskList(*(int **)(v1 + 28));
        ++*(ushort *)(v1 + 26);
        return 1;
      }
    }
    else if ( v2 == 2 )
    {
      return 1;
    }
  }
  else
  {
    *(uint *)(v1 + 28) = Function_21d2170((int)Function_21d4ed8, v1, 0);
    ++*(ushort *)(v1 + 26);
  }
  return 0;
}

//----- (021D4ED8) --------------------------------------------------------
void __fastcall Function_21d4ed8(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  if ( *(ushort *)(a2 + 24) )
  {
    v3 = *(uint *)(a2 + 12) + *(uint *)(a2 + 20);
    *(uint *)(a2 + 12) = v3;
    Function_2019184(*(uint *)a2, *(uint *)(a2 + 4) & 0xFF, *(uint *)(a2 + 8) & 0xFF, v3 >> 12);
    --*(ushort *)(v2 + 24);
  }
  else
  {
    Function_2019184(*(uint *)a2, *(uint *)(a2 + 4) & 0xFF, *(uint *)(a2 + 8) & 0xFF, *(uint *)(a2 + 16));
  }
}

//----- (021D4F1C) --------------------------------------------------------
uint *__fastcall Function_21d4f1c(uint *a1, int a2, int a3, int a4, int a5, int a6)
{
  uint *v6;
  uint *result;

  v6 = a1;
  *a1 = a2;
  a1[1] = a3;
  a1[5] = a6;
  a1[2] = a4;
  a1[4] = s32_div_f(a5 - a4, a6);
  v6[3] = a5;
  v6[6] = 0;
  result = Function_21d2170((int)Function_21d4f74, (int)v6, 0);
  v6[7] = result;
  return result;
}

//----- (021D4F4C) --------------------------------------------------------
int __fastcall Function_21d4f4c(int a1)
{
  int v1;

  v1 = a1;
  if ( *(uint *)(a1 + 24) )
    return 1;
  if ( *(uint *)(a1 + 20) )
    return 0;
  Call_RemoveTaskFromTaskList(*(int **)(a1 + 28));
  ++*(uint *)(v1 + 24);
  return 1;
}

//----- (021D4F74) --------------------------------------------------------
int *__fastcall Function_21d4f74(int a1, int *a2)
{
  int v2;
  int v3;

  if ( a2[5] )
  {
    v2 = a2[2] + a2[4];
    a2[2] = v2;
    v3 = v2 >> 3;
    --a2[5];
  }
  else
  {
    v3 = a2[3] >> 3;
  }
  if ( v3 > 16 )
    v3 = 16;
  return G2x_SetBlendAlpha_((int *)&REG_BLDCNT, *a2, a2[1], v3, 16 - v3);
}

//----- (021D4FB0) --------------------------------------------------------
uint *__fastcall Function_21d4fb0(uint *a1, int a2, int a3, int a4, int a5)
{
  uint *v5;
  int v6;
  int v7;
  int v8;
  uint *result;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  G2x_SetBlendBrightness_(&REG_BLDCNT, a2, a3);
  *v5 = v6;
  v5[5] = a5;
  v5[2] = v7 << 12;
  v5[3] = v8 << 12;
  v5[4] = s32_div_f((v8 << 12) - v5[2], a5);
  v5[6] = 0;
  result = Function_21d2170((int)Function_21d5018, (int)v5, 0);
  v5[7] = result;
  return result;
}

//----- (021D4FF0) --------------------------------------------------------
int __fastcall Function_21d4ff0(int a1)
{
  int v1;

  v1 = a1;
  if ( *(uint *)(a1 + 24) )
    return 1;
  if ( *(uint *)(a1 + 20) )
    return 0;
  Call_RemoveTaskFromTaskList(*(int **)(a1 + 28));
  ++*(uint *)(v1 + 24);
  return 1;
}

//----- (021D5018) --------------------------------------------------------
ushort *__fastcall Function_21d5018(int a1, uint *a2)
{
  int v2;
  int v3;

  if ( a2[5] )
  {
    v2 = a2[2] + a2[4];
    a2[2] = v2;
    v3 = v2 >> 12;
    --a2[5];
  }
  else
  {
    v3 = a2[3] >> 12;
  }
  return G2x_SetBlendBrightness_(&REG_BLDCNT, *a2, v3);
}

//----- (021D5044) --------------------------------------------------------
int Function_21d5044()
{
  return 27;
}

//----- (021D5048) --------------------------------------------------------
ushort *__fastcall Function_21d5048(uint a1, ushort *a2)
{
  uint v2;
  ushort *v3;

  v2 = a1;
  v3 = a2;
  if ( a1 >= 0x1B )
    ErrorHandler();
  return Function_2023d8c(v3, (char *)&dword_21D5320 + 10 * v2, 2u);
}

//----- (021D506C) --------------------------------------------------------
int __fastcall Function_21d506c(uint a1, uint *a2, uint *a3)
{
  uint v3;
  uint *v4;
  uint *v5;
  int result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( a1 >= 0x1B )
    ErrorHandler();
  *v4 = *((uchar *)&dword_21D5320 + 10 * v3 + 2);
  result = *((uchar *)&dword_21D5320 + 10 * v3 + 3);
  *v5 = result;
  return result;
}

//----- (021D5098) --------------------------------------------------------
int __fastcall Function_21d5098(uint a1)
{
  uint v1;

  v1 = a1;
  if ( a1 >= 0x1B )
    ErrorHandler();
  return *((uchar *)&dword_21D5324 + 10 * v1);
}

//----- (021D50B4) --------------------------------------------------------
int __fastcall Function_21d50b4(uint a1)
{
  uint v1;

  v1 = a1;
  if ( a1 >= 0x1B )
    ErrorHandler();
  return *((uchar *)&dword_21D5324 + 10 * v1 + 1);
}

//----- (021D50D0) --------------------------------------------------------
int __fastcall Function_21d50d0(uint a1)
{
  uint v1;

  v1 = a1;
  if ( a1 >= 0x1B )
    ErrorHandler();
  return *((uchar *)&dword_21D5324 + 10 * v1 + 2);
}

//----- (021D50EC) --------------------------------------------------------
int __fastcall Function_21d50ec(uint a1)
{
  uint v1;

  v1 = a1;
  if ( a1 >= 0x1B )
    ErrorHandler();
  return *((uchar *)&dword_21D5324 + 10 * v1 + 3);
}

//----- (021D5108) --------------------------------------------------------
int __fastcall Function_21d5108(uint a1)
{
  uint v1;

  v1 = a1;
  if ( a1 >= 0x1B )
    ErrorHandler();
  return *((uchar *)dword_21D5328 + 10 * v1);
}

//----- (021D5124) --------------------------------------------------------
int __fastcall Function_21d5124(uint a1)
{
  uint v1;

  v1 = a1;
  if ( a1 >= 0x1B )
    ErrorHandler();
  return *((uchar *)dword_21D5328 + 10 * v1 + 1);
}

