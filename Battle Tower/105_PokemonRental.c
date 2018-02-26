//----- (02241AE0) --------------------------------------------------------
int __fastcall Function_2241ae0(int a1, uint *a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int v6;
  int v7;
  int v8;

  v4 = a1;
  v5 = a2;
  v6 = LoadOverlay(104, 2, a3, a4);
  Function_22452e4(v6);
  Function_2017fc8(3, 93, 0x20000);
  v7 = MallocSomeDataAndStorePtrInOverlayData1c(v4, 864, 0x5Du);
  Call_FillMemWithValue((int *)v7, 0, 0x360u);
  *(uint *)(v7 + 292) = Function_2024220(0x5Du, 0, 2, 0, 2, (void (*)(void))Function_2245cd0);
  *(uint *)(v7 + 76) = Function_2018340(0x5Du);
  *(uint *)v7 = v4;
  v8 = LoadPtrToOverWorldDataIn18(v4);
  *(uint *)(v7 + 316) = *(uint *)v8;
  *(uchar *)(v7 + 9) = *(uchar *)(v8 + 4);
  *(uchar *)(v7 + 10) = *(uchar *)(v8 + 5);
  *(uchar *)(v7 + 11) = *(uchar *)(v8 + 6);
  *(uint *)(v7 + 696) = *(uint *)(v8 + 8);
  *(uint *)(v7 + 700) = *(uint *)(v8 + 12);
  *(uint *)(v7 + 716) = v8 + 16;
  *(uint *)(v7 + 312) = LoadPlayerDataAdress(*(uint *)(v7 + 316));
  *(uint *)(v7 + 20) = 8;
  if ( Function_22454f8(v7, 0) == 1 )
  {
    *(uchar *)(v7 + 18) = 6;
  }
  else if ( ((int (__fastcall *)(uint))dword_223AED4[0])(*(uchar *)(v7 + 9)) == 1 )
  {
    *(uchar *)(v7 + 18) = 2;
    *(uchar *)(v7 + 26) = 3;
    *(uchar *)(v7 + 27) = 6;
  }
  else
  {
    *(uchar *)(v7 + 18) = 3;
    *(uchar *)(v7 + 26) = 4;
    *(uchar *)(v7 + 27) = 5;
  }
  Function_224531c(v7);
  if ( ((int (__fastcall *)(uint))dword_223AED4[0])(*(uchar *)(v7 + 9)) == 1 )
    Function_209ba80(v7);
  *v5 = 0;
  return 1;
}

//----- (02241BD8) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02241F54) --------------------------------------------------------
int __fastcall Function_2241f54(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  short v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v13;

  v13 = a1;
  v1 = LoadOverlayData1c(a1);
  if ( Function_22454f8(v1, 0) == 1 )
  {
    v2 = 0;
    if ( Function_2245508(*(uchar *)(v1 + 9)) > 0 )
    {
      v3 = v1;
      v4 = 0;
      do
      {
        v5 = *(ushort *)(v3 + 704);
        v3 += 2;
        *(ushort *)(*(uint *)(v1 + 716) + v4) = v5;
        v4 += 2;
        ++v2;
      }
      while ( v2 < Function_2245508(*(uchar *)(v1 + 9)) );
    }
  }
  else
  {
    v6 = 0;
    v7 = v1;
    v8 = 0;
    do
    {
      ++v6;
      *(ushort *)(*(uint *)(v1 + 716) + v8) = *(ushort *)(v7 + 704);
      v7 += 2;
      v8 += 2;
    }
    while ( v6 < 2 );
    if ( !(*(uchar *)(v1 + 19) & 8) )
    {
      **(ushort **)(v1 + 716) = 255;
      *(ushort *)(*(uint *)(v1 + 716) + 2) = 255;
    }
  }
  Function_22451b4(v1);
  FreeSomeDataAndStore0InOverlayData1c(v13);
  SetMainLoopFunctionCall(0, 0);
  Function_201807c(93);
  UnloadOverlay(104, v9, v10, v11);
  return 1;
}

//----- (02241FF4) --------------------------------------------------------
int __fastcall Function_2241ff4(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int result;

  v1 = a1;
  switch ( *(uchar *)(a1 + 8) )
  {
    case 0:
      if ( ((int (__fastcall *)(uint))dword_223AED4[0])(*(uchar *)(a1 + 9)) == 1 )
      {
        Function_20365f4();
        Function_20364f0(237);
      }
      ++*(uchar *)(v1 + 8);
      goto LABEL_27;
    case 1:
      if ( ((int (__fastcall *)(uint))dword_223AED4[0])(*(uchar *)(a1 + 9)) == 1 )
      {
        if ( Function_2036540(237) == 1 )
        {
          Function_20365f4();
          ++*(uchar *)(v1 + 8);
        }
      }
      else
      {
        ++*(uchar *)(v1 + 8);
      }
      goto LABEL_27;
    case 2:
      v2 = 0;
      if ( (int)*(uchar *)(a1 + 18) > 0 )
      {
        v3 = a1;
        do
        {
          Function_2245f2c(*(uint *)(v3 + 656));
          Function_2245f5c(*(uint *)(v3 + 656));
          ++v2;
          v3 += 4;
        }
        while ( v2 < *(uchar *)(v1 + 18) );
      }
      Function_2019184(*(uint *)(v1 + 76), 2u, 0, 264);
      Function_2007dec(*(uint *)(v1 + 300), 6u, 1);
      Function_200f174(0, 1, 1, 0, 6, 3, 93);
      ++*(uchar *)(v1 + 8);
      goto LABEL_27;
    case 3:
      if ( Function_200f2ac() )
      {
        Function_2005748(0x612u);
        *(uchar *)(v1 + 25) = 0;
        ++*(uchar *)(v1 + 8);
      }
      goto LABEL_27;
    case 4:
      if ( Function_2244780() == 1 )
      {
        Function_20057a4(1554, 0);
        Function_2005748(0x679u);
        v4 = 0;
        if ( (int)*(uchar *)(v1 + 18) > 0 )
        {
          v5 = v1;
          do
          {
            Function_2245f90(*(uint *)(v5 + 656), 10);
            ++v4;
            v5 += 4;
          }
          while ( v4 < *(uchar *)(v1 + 18) );
        }
        Function_2244924(v1, 0);
        *(uint *)(v1 + 20) = 8;
        *(uchar *)(v1 + 25) = 0;
        ++*(uchar *)(v1 + 8);
      }
      goto LABEL_27;
    case 5:
      if ( Function_2245e48(*(uint *)(a1 + 688)) != 1 )
      {
        Function_2245a30(v1);
        *(uchar *)(v1 + 25) = 0;
        ++*(uchar *)(v1 + 8);
      }
      goto LABEL_27;
    case 6:
      if ( !*(uchar *)(a1 + 25) )
      {
        Function_2244b90();
        Function_201ff0c(2u, 0);
        v6 = Function_2245538(v1, 1, 0);
        Function_22448f4(v1, 3, v6, 21, 11);
        Function_2007dec(*(uint *)(v1 + 300), 6u, 0);
        Function_200872c(*(uint *)(v1 + 296), 16, 0, 1u, 0xFFFF);
      }
      Function_20087b4(*(uint *)(v1 + 300));
      if ( (uchar)++*(uchar *)(v1 + 25) < 2u )
        goto LABEL_27;
      v7 = Function_2245538(v1, 2, 0);
      Function_22448f4(v1, 3, v7, 21, 11);
      *(uchar *)(v1 + 25) = 0;
      Function_2245a64(v1);
      result = 1;
      break;
    default:
LABEL_27:
      result = 0;
      break;
  }
  return result;
}

//----- (022421F0) --------------------------------------------------------
int __fastcall Function_22421f0(uchar *a1)
{
  uchar *v1;

  v1 = a1;
  if ( a1[8] )
  {
    if ( a1[8] == 1 && Function_200f2ac() == 1 )
      return 1;
  }
  else
  {
    if ( Function_22454f8(a1, 0) == 1 )
      Function_224227c(v1);
    else
      Function_22424cc(v1);
    if ( ((int (__fastcall *)(uint))dword_223AED4[0])((uchar)v1[9]) == 1 )
      Function_2244f84(v1, v1 + 96);
    if ( (uint)(uchar)v1[19] << 27 >> 31 == 1 )
      Function_200f174(0, 1, 1, 0, 6, 3, 93);
    v1[19] |= 0x10u;
    ++v1[8];
  }
  return 0;
}

//----- (0224227C) --------------------------------------------------------
uint __fastcall Function_224227c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint v7;
  uint result;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v1 = a1;
  v14 = ((int (__fastcall *)(uint))dword_223AA50[0])(*(uchar *)(a1 + 9));
  Function_2245528(v1, 0);
  v2 = *(uchar *)(v1 + 18);
  v3 = *(uint *)(v1 + 720) & 0xFF;
  *(uint *)(v1 + 680) = Function_2245fb8(v1 + 324);
  Function_2244f0c(v1, v1 + 80);
  v4 = 0;
  if ( (int)*(uchar *)(v1 + 17) > 0 )
  {
    v5 = v1;
    do
    {
      Function_2245f44(*(uint *)(v1 + 4 * *(ushort *)(v5 + 704) + 656));
      Function_2245fac(*(uint *)(v1 + 4 * *(ushort *)(v5 + 704) + 656), 0);
      Function_2245f90(*(uint *)(v1 + 4 * *(ushort *)(v5 + 704) + 656), 7);
      Function_2244ff8(
        v1,
        v1 + 80 + 16 * (v4++ + 2),
        *(ushort *)(v5 + 704) & 0xFF,
        0,
        0,
        15,
        2,
        0,
        0,
        *(uint *)(v1 + 696));
      v5 += 2;
    }
    while ( v4 < *(uchar *)(v1 + 17) );
  }
  v6 = Function_22461a0(*(uint *)(v1 + 680));
  Function_2244ff8(v1, v1 + 80 + 16 * (*(uchar *)(v1 + 17) + 2), v6, 0, 0, 15, 2, 0, 0, *(uint *)(v1 + 696));
  v7 = Function_2027b50(*(ushort **)(v1 + 312));
  Function_224628c(v1 + 160, v7);
  Function_2244ee8(v1, 0, *(uchar *)(v1 + 17) + 1);
  *(uchar *)(v1 + 16) = Function_2244d14(v1, 0);
  result = (uint)*(uchar *)(v1 + 19) << 30 >> 31;
  if ( result == 1 )
  {
    Function_22461a4(*(uint *)(v1 + 680), 1);
    Function_2244df0(v1);
    *(uint *)(v1 + 684) = Function_2245fb8(v1 + 324);
    result = *(uchar *)(v1 + 24);
    if ( *(uchar *)(v1 + 24) )
    {
      result = v14;
      v9 = 0;
      if ( v14 > 0 )
      {
        v10 = v1;
        v11 = v1 + 80;
        do
        {
          v15 = 16 * (v9 + 8);
          Function_201ada4_ClearTextBox(v11 + v15, 0);
          if ( v9 < *(uchar *)(v1 + 24) )
          {
            v12 = *(ushort *)(v10 + 850);
            v13 = *(ushort *)(v10 + 854) & 0xFF;
            Function_22450dc(v1, v11 + v15);
          }
          Function_201a9a4(v11 + v15);
          result = v14;
          ++v9;
          v10 += 2;
        }
        while ( v9 < v14 );
      }
    }
  }
  return result;
}

//----- (0224246C) --------------------------------------------------------
int __fastcall Function_224246c(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;

  v1 = a1;
  result = *(uchar *)(a1 + 18);
  v3 = 0;
  if ( result > 0 )
  {
    v4 = v1;
    do
    {
      *(uint *)(v4 + 656) = Function_2245934(v1, v3);
      Function_2245ebc(*(uint *)(v4 + 656), 1);
      result = *(uchar *)(v1 + 18);
      ++v3;
      v4 += 4;
    }
    while ( v3 < result );
  }
  return result;
}

//----- (022424A0) --------------------------------------------------------
int __fastcall Function_22424a0(int a1)
{
  int v1;

  v1 = a1;
  GetAdrOfPkmnInParty(*(uint **)(a1 + 696), *(uint *)(a1 + 720));
  return Function_22455c4(v1);
}

//----- (022424CC) --------------------------------------------------------
uint __fastcall Function_22424cc(int a1)
{
  int v1;
  uint v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint result;

  v1 = a1;
  Function_2245528(a1, 0);
  v2 = Function_2027b50(*(ushort **)(v1 + 312));
  Function_224628c(v1 + 160, v2);
  if ( ((int (__fastcall *)(uint))dword_223AED4[0])(*(uchar *)(v1 + 9)) )
    v5 = *(uint *)(v1 + 720) & 0xFF;
  else
    v3 = *(uint *)(v1 + 720) & 0xFF;
  v4 = *(uchar *)(v1 + 26);
  *(uint *)(v1 + 680) = Function_2245fb8(v1 + 324);
  Function_2244f0c(v1, v1 + 80);
  v6 = Function_22461a0(*(uint *)(v1 + 680));
  Function_2244ff8(v1, v1 + 112, v6, 0, 0, 15, 2, 0, 0, *(uint *)(v1 + 696));
  Function_2246260(*(uint *)(v1 + 76), v1 + 192);
  *(uchar *)(v1 + 16) = Function_2244c60(v1, v1 + 192, 19);
  Function_201a9a4(v1 + 192);
  *(uchar *)(v1 + 16) = Function_2244d14(v1, 9);
  result = (uint)*(uchar *)(v1 + 19) << 30 >> 31;
  if ( result == 1 )
  {
    Function_2244df0(v1);
    result = Function_2245fb8(v1 + 324);
    *(uint *)(v1 + 684) = result;
  }
  return result;
}

//----- (0224260C) --------------------------------------------------------
int __fastcall Function_224260c(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;

  v1 = a1;
  result = *(uchar *)(a1 + 18);
  v3 = 0;
  if ( result > 0 )
  {
    v4 = v1;
    do
    {
      *(uint *)(v4 + 656) = Function_2245934(v1, v3);
      Function_2245ebc(*(uint *)(v4 + 656), 1);
      if ( !(*(uchar *)(v1 + 19) & 4) )
      {
        Function_2245f44(*(uint *)(v4 + 656));
        Function_2245fac(*(uint *)(v4 + 656), 0);
        Function_2245f90(*(uint *)(v4 + 656), 6);
      }
      result = *(uchar *)(v1 + 18);
      ++v3;
      v4 += 4;
    }
    while ( v3 < result );
  }
  return result;
}

//----- (0224266C) --------------------------------------------------------
int __fastcall Function_224266c(int a1)
{
  int v1;

  v1 = a1;
  GetAdrOfPkmnInParty(*(uint **)(a1 + 696), *(uint *)(a1 + 720));
  return Function_22455c4(v1);
}

//----- (02242698) --------------------------------------------------------
int __fastcall Function_2242698(int a1, int a2, int a3, int a4)
{
  int v4;

  v4 = a1;
  if ( *(uchar *)(a1 + 8) || CallOverlayDataJumpTable(*(uint *)(a1 + 4), a2, a3, a4) != 1 )
    return 0;
  *(uint *)(v4 + 720) = *(uchar *)(*(uint *)(v4 + 320) + 20);
  free(*(uint *)(v4 + 320));
  free(*(uint *)(v4 + 4));
  *(uint *)(v4 + 4) = 0;
  Function_22452a0(v4);
  *(uchar *)(v4 + 19) &= 0xBFu;
  return 1;
}

//----- (022426E0) --------------------------------------------------------
int __fastcall Function_22426e0(int a1)
{
  int v1;
  uint v2;
  char v3;
  int v4;
  uint v6;

  v1 = a1;
  v2 = *(uchar *)(a1 + 8);
  if ( v2 <= 5 )
    JUMPOUT(__CS__, *((short *)&off_22426FA + v2) + 35923708);
  switch ( (uchar)v2 )
  {
    case 0:
      if ( *(uchar *)(v1 + 19) & 2 )
        v3 = 2;
      else
        v3 = 1;
      *(uchar *)(v1 + 8) = v3;
      *(uchar *)(v1 + 19) &= 0xFDu;
      return 0;
    case 1:
      Function_2246080(*(uint *)(v1 + 680));
      if ( dword_21BF6C4 & 0x30 )
      {
        Function_2005748(0x5DCu);
        v4 = Function_22461a0(*(uint *)(v1 + 680));
        Function_22453f8(v1, *(uchar *)(v1 + 17), v4, 0, *(uint *)(v1 + 696));
      }
      if ( dword_21BF6C4 & 1 )
      {
        Function_2005748(0x5DCu);
        Function_22461a4(*(uint *)(v1 + 680), 1);
        Function_2244df0(v1);
        *(uint *)(v1 + 684) = Function_2245fb8(v1 + 324);
        ++*(uchar *)(v1 + 8);
        return 0;
      }
      if ( !(dword_21BF6C4 & 2) || !*(uchar *)(v1 + 17) )
        return 0;
      Function_2005748(0x5DCu);
      Function_224296c(v1);
      if ( ((int (__fastcall *)(uint))dword_223AED4[0])(*(uchar *)(v1 + 9)) == 1 )
        Function_2245620(v1, 8, 0);
      return 1;
    case 2:
      v6 = Function_2001be0(*(uint *)(v1 + 252));
      Function_2246080(*(uint *)(v1 + 684));
      if ( v6 <= 0xFFFFFFFE )
      {
        if ( v6 < 0xFFFFFFFE )
        {
          switch ( -2 )
          {
            case 0:
              Function_2001bc4(*(uint *)(v1 + 252), 0);
              Function_2245a98(*(uint *)(v1 + 244));
              Function_2246060(*(uint *)(v1 + 684));
              *(uint *)(v1 + 684) = 0;
              *(uchar *)(v1 + 19) |= 0x40u;
              Function_200f174(0, 0, 0, 0, 6, 1, 93);
              ++*(uchar *)(v1 + 8);
              return 0;
            case 1:
              Function_2001bc4(*(uint *)(v1 + 252), 0);
              Function_2245a98(*(uint *)(v1 + 244));
              Function_2242a58(v1);
              if ( ((int (__fastcall *)(uint))dword_223AED4[0])(*(uchar *)(v1 + 9)) == 1 )
                Function_2245620(v1, 8, 0);
              return 1;
            case 3:
              Function_2001bc4(*(uint *)(v1 + 252), 0);
              Function_2245a98(*(uint *)(v1 + 244));
              Function_2242b54(v1);
              if ( ((int (__fastcall *)(uint))dword_223AED4[0])(*(uchar *)(v1 + 9)) == 1 )
                Function_2245620(v1, 8, 0);
              return 1;
            default:
              goto LABEL_30;
          }
        }
        goto LABEL_30;
      }
      if ( v6 != -1 )
      {
LABEL_30:
        Function_2001bc4(*(uint *)(v1 + 252), 0);
        Function_2245a98(*(uint *)(v1 + 244));
        Function_22461a4(*(uint *)(v1 + 680), 0);
        Function_2246060(*(uint *)(v1 + 684));
        *(uint *)(v1 + 684) = 0;
        return 1;
      }
      return 0;
    case 3:
      if ( Function_200f2ac() != 1 )
        return 0;
      Function_2245464(v1);
      Function_22451b4(v1);
      *(uint *)(v1 + 4) = AllocAndInitOverlayData((int *)&Unknown_20f410c, *(uint *)(v1 + 320), 0x5Du);
      *(uchar *)(v1 + 19) |= 2u;
      return 1;
    case 4:
      if ( *(uint *)(v1 + 4) )
        return 0;
      return 1;
    case 5:
      if ( Function_200f2ac() == 1 )
        *(uchar *)(v1 + 8) = 2;
      return 0;
    default:
      return 0;
  }
}

//----- (0224296C) --------------------------------------------------------
int __fastcall Function_224296c(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  Function_201ada4_ClearTextBox(a1 + 80 + 16 * (*(uchar *)(a1 + 17) + 2), 0);
  Function_201a9a4(v1 + 80 + 16 * (*(uchar *)(v1 + 17) + 2));
  Function_201ada4_ClearTextBox(v1 + 80 + 16 * ((uchar)--*(uchar *)(v1 + 17) + 2), 0);
  v2 = Function_22461a0(*(uint *)(v1 + 680));
  Function_2244ff8(v1, v1 + 80 + 16 * (*(uchar *)(v1 + 17) + 2), v2, 0, 0, 15, 2, 0, 0, *(uint *)(v1 + 696));
  Function_2244ee8(v1, 0, *(uchar *)(v1 + 17) + 1);
  *(uchar *)(v1 + 16) = Function_2244d14(v1, 0);
  Function_2245f50(*(uint *)(v1 + 4 * *(ushort *)(v1 + 2 * *(uchar *)(v1 + 17) + 704) + 656));
  Function_2245fac(*(uint *)(v1 + 4 * *(ushort *)(v1 + 2 * *(uchar *)(v1 + 17) + 704) + 656), 1);
  Function_2245f90(*(uint *)(v1 + 4 * *(ushort *)(v1 + 2 * *(uchar *)(v1 + 17) + 704) + 656), 6);
  result = 704;
  *(ushort *)(v1 + 2 * *(uchar *)(v1 + 17) + 704) = 0;
  return result;
}

//----- (02242A58) --------------------------------------------------------
int __fastcall Function_2242a58(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;
  int v6;

  v1 = a1;
  v2 = Function_22461a0(*(uint *)(a1 + 680));
  Function_2245f44(*(uint *)(v1 + 4 * v2 + 656));
  v3 = *(uint *)(v1 + 4 * Function_22461a0(*(uint *)(v1 + 680)) + 656);
  Function_2245fac(v3, 0);
  v4 = Function_22461a0(*(uint *)(v1 + 680));
  Function_2245f90(*(uint *)(v1 + 4 * v4 + 656), 7);
  *(ushort *)(v1 + 2 * (uchar)(*(uchar *)(v1 + 17))++ + 704) = Function_22461a0(*(uint *)(v1 + 680));
  if ( *(uchar *)(v1 + 17) == Function_2245508(*(uchar *)(v1 + 9)) )
  {
    Function_2246060(*(uint *)(v1 + 684));
    result = 684;
    *(uint *)(v1 + 684) = 0;
  }
  else
  {
    Function_22461a4(*(uint *)(v1 + 680), 0);
    Function_2246060(*(uint *)(v1 + 684));
    *(uint *)(v1 + 684) = 0;
    v6 = Function_22461a0(*(uint *)(v1 + 680));
    Function_2244ff8(
      v1,
      v1 + 80 + 16 * (*(uchar *)(v1 + 17) + 2),
      v6,
      0,
      0,
      15,
      2,
      0,
      0,
      *(uint *)(v1 + 696));
    Function_2244ee8(v1, 0, *(uchar *)(v1 + 17) + 1);
    result = Function_2244d14(v1, 0);
    *(uchar *)(v1 + 16) = result;
  }
  return result;
}

//----- (02242B54) --------------------------------------------------------
int __fastcall Function_2242b54(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int i;
  int v8;
  int v9;
  int v10;
  int j;
  int result;

  v1 = a1;
  v2 = Function_22461a0(*(uint *)(a1 + 680));
  Function_2245f50(*(uint *)(v1 + 4 * v2 + 656));
  v3 = Function_22461a0(*(uint *)(v1 + 680));
  Function_2245fac(*(uint *)(v1 + 4 * v3 + 656), 1);
  v4 = Function_22461a0(*(uint *)(v1 + 680));
  Function_2245f90(*(uint *)(v1 + 4 * v4 + 656), 6);
  if ( *(uchar *)(v1 + 17) >= 2u && *(ushort *)(v1 + 704) == Function_22461a0(*(uint *)(v1 + 680)) )
  {
    *(ushort *)(v1 + 704) = *(ushort *)(v1 + 706);
    Function_2007dc8(*(uint **)(v1 + 300));
    v5 = Function_22461a0(*(uint *)(v1 + 680));
    GetAdrOfPkmnInParty(*(uint **)(v1 + 696), v5);
    Function_22455c4(v1);
  }
  *(ushort *)(v1 + 2 * (uchar)--*(uchar *)(v1 + 17) + 704) = 0;
  Function_22461a4(*(uint *)(v1 + 680), 0);
  Function_2246060(*(uint *)(v1 + 684));
  *(uint *)(v1 + 684) = 0;
  v6 = Function_2245508(*(uchar *)(v1 + 9));
  for ( i = 0; i < v6; ++i )
    Function_201ada4_ClearTextBox(v1 + 80 + 16 * (i + 2), 0);
  v8 = 0;
  if ( (int)*(uchar *)(v1 + 17) > 0 )
  {
    v9 = v1;
    do
    {
      Function_2244ff8(
        v1,
        v1 + 80 + 16 * (v8++ + 2),
        *(ushort *)(v9 + 704) & 0xFF,
        0,
        0,
        15,
        2,
        0,
        0,
        *(uint *)(v1 + 696));
      v9 += 2;
    }
    while ( v8 < *(uchar *)(v1 + 17) );
  }
  v10 = Function_22461a0(*(uint *)(v1 + 680));
  Function_2244ff8(
    v1,
    v1 + 80 + 16 * (*(uchar *)(v1 + 17) + 2),
    v10,
    0,
    0,
    15,
    2,
    0,
    0,
    *(uint *)(v1 + 696));
  for ( j = 0; j < v6; ++j )
    Function_201a9a4(v1 + 80 + 16 * (j + 2));
  Function_2244ee8(v1, 0, *(uchar *)(v1 + 17) + 1);
  result = Function_2244d14(v1, 0);
  *(uchar *)(v1 + 16) = result;
  return result;
}

//----- (02242D04) --------------------------------------------------------
int __fastcall Function_2242d04(int a1, int a2, int a3, int a4)
{
  int v4;
  uint v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
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
  uint v21;
  int result;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;

  v28 = a4;
  v4 = a1;
  v23 = ((int (__fastcall *)(uint))dword_223AA50[0])(*(uchar *)(a1 + 9));
  v5 = *(uchar *)(v4 + 8);
  if ( v5 <= 7 )
    JUMPOUT(__CS__, *((short *)&off_2242D26 + v5) + 35925288);
  switch ( (uchar)v5 )
  {
    case 0:
      Function_2246074(*(uint *)(v4 + 680), 0);
      *(uchar *)(v4 + 19) |= 0x20u;
      Function_201acf4(v4 + 96);
      Function_201acf4(v4 + 208);
      Function_201acf4(v4 + 224);
      v6 = 0;
      if ( (int)*(uchar *)(v4 + 17) > 0 )
      {
        v7 = v4 + 80;
        do
        {
          v8 = 16 * (v6 + 2);
          Function_201ada4_ClearTextBox(v7 + v8, 0);
          Function_201a9a4(v7 + v8);
          ++v6;
        }
        while ( v6 < *(uchar *)(v4 + 17) );
      }
      Function_201ada4_ClearTextBox(v4 + 80, 0);
      Function_201a9a4(v4 + 80);
      v9 = Function_2245538(v4, 1, 0);
      Function_22448f4(v4, 3, v9, 21, 11);
      Function_200872c(*(uint *)(v4 + 296), 0, 16, 0, 0xFFFF);
      *(uchar *)(v4 + 25) = 0;
      ++*(uchar *)(v4 + 8);
      goto LABEL_51;
    case 1:
      if ( (uchar)++*(uchar *)(v4 + 25) >= 2u )
      {
        Function_2007dec(*(uint *)(v4 + 300), 6u, 1);
        Function_2244924(v4, 1);
        v10 = Function_2245538(v4, 0, 0);
        Function_22448f4(v4, 3, v10, 21, 11);
        Function_2244be4(v4, 3);
        *(uchar *)(v4 + 25) = 0;
        ++*(uchar *)(v4 + 8);
      }
      goto LABEL_51;
    case 2:
      Function_20087b4(*(uint *)(v4 + 300));
      if ( Function_2245e48(*(uint *)(v4 + 688)) != 1 )
      {
        Function_2245a30(v4);
        Function_2007dc8(*(uint **)(v4 + 300));
        v25 = 44;
        v26 = 128;
        v27 = 212;
        v11 = 0;
        if ( v23 > 0 )
        {
          v12 = &v25;
          v24 = v4;
          v13 = v4;
          do
          {
            GetAdrOfPkmnInParty(*(uint **)(v4 + 696), *(ushort *)(v24 + 704));
            v14 = *v12;
            Function_22455c4(v4);
            Function_2007dec(*(uint *)(v13 + 300), 6u, 1);
            ++v11;
            v24 += 2;
            ++v12;
            v13 += 4;
          }
          while ( v11 < v23 );
        }
        Function_2244924(v4, 4);
        ++*(uchar *)(v4 + 8);
      }
      goto LABEL_51;
    case 3:
      if ( Function_2245e48(*(uint *)(v4 + 688)) != 1 )
      {
        Function_2245a30(v4);
        *(uchar *)(v4 + 25) = 0;
        ++*(uchar *)(v4 + 8);
      }
      goto LABEL_51;
    case 4:
      if ( !*(uchar *)(v4 + 25) )
      {
        Function_2244c0c(v4, 3);
        v15 = 0;
        if ( v23 > 0 )
        {
          v16 = v4;
          do
          {
            Function_2007dec(*(uint *)(v16 + 300), 6u, 0);
            ++v15;
            v16 += 4;
          }
          while ( v15 < v23 );
        }
        if ( ((int (__fastcall *)(uint))dword_223AED4[0])(*(uchar *)(v4 + 9)) )
        {
          v18 = Function_2245538(v4, 1, 1);
          Function_22448f4(v4, 3, v18, 21, 11);
        }
        else
        {
          v17 = Function_2245538(v4, 1, 1);
          Function_22448f4(v4, 3, v17, 32, 11);
        }
        Function_200872c(*(uint *)(v4 + 296), 16, 0, 1u, 0xFFFF);
      }
      Function_20087b4(*(uint *)(v4 + 300));
      if ( (uchar)++*(uchar *)(v4 + 25) >= 0x15u )
      {
        if ( ((int (__fastcall *)(uint))dword_223AED4[0])(*(uchar *)(v4 + 9)) )
        {
          v20 = Function_2245538(v4, 2, 1);
          Function_22448f4(v4, 3, v20, 21, 11);
        }
        else
        {
          v19 = Function_2245538(v4, 2, 1);
          Function_22448f4(v4, 3, v19, 32, 11);
        }
        *(uchar *)(v4 + 19) &= 0xDFu;
        if ( ((int (__fastcall *)(uint))dword_223AED4[0])(*(uchar *)(v4 + 9)) == 1 )
        {
          *(uchar *)(v4 + 859) = 1;
          Function_22457c0(v4);
        }
        Function_2244ee8(v4, 0, v23);
        *(uchar *)(v4 + 16) = Function_2244d14(v4, 1);
        Function_2244e94(v4);
        *(uint *)(v4 + 684) = Function_2245fb8(v4 + 324);
        *(uchar *)(v4 + 25) = 0;
        ++*(uchar *)(v4 + 8);
      }
      goto LABEL_51;
    case 5:
      v21 = Function_2001be0(*(uint *)(v4 + 252));
      Function_2246080(*(uint *)(v4 + 684));
      if ( v21 > 0xFFFFFFFE )
      {
        if ( v21 == -1 )
          goto LABEL_51;
      }
      else if ( v21 < 0xFFFFFFFE && v21 <= 1 && !v21 )
      {
        Function_2001bc4(*(uint *)(v4 + 252), 0);
        Function_2245a98(*(uint *)(v4 + 244));
        Function_2246060(*(uint *)(v4 + 684));
        *(uint *)(v4 + 684) = 0;
        ++*(uchar *)(v4 + 8);
        goto LABEL_51;
      }
      Function_2246074(*(uint *)(v4 + 680), 1);
      Function_2001bc4(*(uint *)(v4 + 252), 0);
      Function_2245a98(*(uint *)(v4 + 244));
      Function_2246060(*(uint *)(v4 + 684));
      *(uint *)(v4 + 684) = 0;
      *(ushort *)(v4 + 2 * (uchar)--*(uchar *)(v4 + 17) + 704) = 0;
      if ( ((int (__fastcall *)(uint))dword_223AED4[0])(*(uchar *)(v4 + 9)) == 1 )
        Function_2245620(v4, 8, 0);
      result = 1;
      break;
    case 6:
      if ( ((int (__fastcall *)(uint))dword_223AED4[0])(*(uchar *)(v4 + 9)) )
      {
        if ( Function_2245620(v4, 8, 0) == 1 )
        {
          *(uchar *)(v4 + 16) = Function_2244d14(v4, 2);
          Function_20365f4();
          Function_20364f0(164);
          ++*(uchar *)(v4 + 8);
        }
LABEL_51:
        result = 0;
      }
      else
      {
        result = 1;
      }
      break;
    case 7:
      if ( Function_2036540(164) != 1 )
        goto LABEL_51;
      Function_20365f4();
      return 1;
    default:
      goto LABEL_51;
  }
  return result;
}

//----- (02243144) --------------------------------------------------------
int __fastcall Function_2243144(int a1)
{
  int v1;
  int v2;
  uint v3;
  short v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int result;

  v1 = a1;
  v2 = ((int (__fastcall *)(uint))dword_223AA50[0])(*(uchar *)(a1 + 9));
  v3 = *(uchar *)(v1 + 8);
  if ( v3 <= 4 )
  {
    v4 = *((ushort *)&off_2243166 + v3);
    JUMPOUT(__CS__, v4 + 35926376);
  }
  switch ( (uchar)v3 )
  {
    case 0:
      *(uchar *)(v1 + 19) |= 0x20u;
      Function_201acf4(v1 + 96);
      Function_201acf4(v1 + 208);
      Function_201acf4(v1 + 224);
      if ( ((int (__fastcall *)(uint))dword_223AED4[0])(*(uchar *)(v1 + 9)) )
      {
        v6 = Function_2245538(v1, 1, 1);
        Function_22448f4(v1, 3, v6, 21, 11);
      }
      else
      {
        v5 = Function_2245538(v1, 1, 1);
        Function_22448f4(v1, 3, v5, 32, 11);
      }
      Function_200872c(*(uint *)(v1 + 296), 0, 16, 0, 0xFFFF);
      *(uchar *)(v1 + 25) = 0;
      ++*(uchar *)(v1 + 8);
      goto LABEL_28;
    case 1:
      if ( (uchar)++*(uchar *)(v1 + 25) >= 2u )
      {
        v7 = 0;
        if ( v2 > 0 )
        {
          v8 = v1;
          do
          {
            Function_2007dc8(*(uint **)(v8 + 300));
            ++v7;
            v8 += 4;
          }
          while ( v7 < v2 );
        }
        Function_2244924(v1, 5);
        if ( ((int (__fastcall *)(uint))dword_223AED4[0])(*(uchar *)(v1 + 9)) )
        {
          v10 = Function_2245538(v1, 0, 0);
          Function_22448f4(v1, 3, v10, 21, 11);
        }
        else
        {
          v9 = Function_2245538(v1, 0, 0);
          Function_22448f4(v1, 3, v9, 32, 11);
        }
        Function_2244be4(v1, 3);
        *(uchar *)(v1 + 25) = 0;
        ++*(uchar *)(v1 + 8);
      }
      goto LABEL_28;
    case 2:
      Function_20087b4(*(uint *)(v1 + 300));
      if ( Function_2245e48(*(uint *)(v1 + 688)) != 1 )
      {
        Function_2245a30(v1);
        v11 = Function_22461a0(*(uint *)(v1 + 680));
        GetAdrOfPkmnInParty(*(uint **)(v1 + 696), v11);
        Function_22455c4(v1);
        Function_2007dec(*(uint *)(v1 + 300), 6u, 1);
        Function_2244924(v1, 0);
        ++*(uchar *)(v1 + 8);
      }
      goto LABEL_28;
    case 3:
      if ( Function_2245e48(*(uint *)(v1 + 688)) != 1 )
      {
        Function_2245a30(v1);
        *(uchar *)(v1 + 25) = 0;
        ++*(uchar *)(v1 + 8);
      }
      goto LABEL_28;
    case 4:
      if ( !*(uchar *)(v1 + 25) )
      {
        Function_2244b90(v1, 3);
        Function_2007dec(*(uint *)(v1 + 300), 6u, 0);
        v12 = Function_2245538(v1, 1, 0);
        Function_22448f4(v1, 3, v12, 21, 11);
        Function_200872c(*(uint *)(v1 + 296), 16, 0, 1u, 0xFFFF);
      }
      Function_20087b4(*(uint *)(v1 + 300));
      if ( (uchar)++*(uchar *)(v1 + 25) < 0x15u )
        goto LABEL_28;
      v13 = Function_2245538(v1, 2, 0);
      Function_22448f4(v1, 3, v13, 21, 11);
      *(uchar *)(v1 + 19) &= 0xDFu;
      if ( ((int (__fastcall *)(uint))dword_223AED4[0])(*(uchar *)(v1 + 9)) == 1 )
      {
        *(uchar *)(v1 + 859) = 1;
        Function_22457c0(v1);
      }
      Function_22433ac(v1);
      result = 1;
      break;
    default:
LABEL_28:
      result = 0;
      break;
  }
  return result;
}

//----- (022433AC) --------------------------------------------------------
int __fastcall Function_22433ac(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int result;

  v1 = a1;
  ((void (__fastcall *)(uint))dword_223AA50[0])(*(uchar *)(a1 + 9));
  v2 = 0;
  if ( (int)*(uchar *)(v1 + 17) > 0 )
  {
    v3 = v1;
    do
    {
      Function_2244ff8(
        v1,
        v1 + 80 + 16 * (v2++ + 2),
        *(ushort *)(v3 + 704) & 0xFF,
        0,
        0,
        15,
        2,
        0,
        0,
        *(uint *)(v1 + 696));
      v3 += 2;
    }
    while ( v2 < *(uchar *)(v1 + 17) );
  }
  v4 = Function_22461a0(*(uint *)(v1 + 680));
  Function_2244ff8(v1, v1 + 80 + 16 * (*(uchar *)(v1 + 17) + 2), v4, 0, 0, 15, 2, 0, 0, *(uint *)(v1 + 696));
  Function_2244f0c(v1, v1 + 80);
  Function_22461a4(*(uint *)(v1 + 680), 0);
  v5 = Function_22461a0(*(uint *)(v1 + 680));
  Function_2245f50(*(uint *)(v1 + 4 * v5 + 656));
  v6 = Function_22461a0(*(uint *)(v1 + 680));
  Function_2245fac(*(uint *)(v1 + 4 * v6 + 656), 1);
  v7 = Function_22461a0(*(uint *)(v1 + 680));
  Function_2245f90(*(uint *)(v1 + 4 * v7 + 656), 6);
  Function_2244ee8(v1, 0, *(uchar *)(v1 + 17) + 1);
  result = Function_2244d14(v1, 0);
  *(uchar *)(v1 + 16) = result;
  return result;
}

//----- (022434BC) --------------------------------------------------------
int __fastcall Function_22434bc(int a1)
{
  int v1;
  uint v2;
  char v3;
  int v4;
  uint v6;

  v1 = a1;
  v2 = *(uchar *)(a1 + 8);
  if ( v2 <= 5 )
    JUMPOUT(__CS__, *((short *)&off_22434D6 + v2) + 35927256);
  switch ( (uchar)v2 )
  {
    case 0:
      Function_2245528(a1, 0);
      if ( *(uchar *)(v1 + 19) & 2 )
        v3 = 2;
      else
        v3 = 1;
      *(uchar *)(v1 + 8) = v3;
      *(uchar *)(v1 + 19) &= 0xFDu;
      return 0;
    case 1:
      Function_2246080(*(uint *)(a1 + 680));
      if ( dword_21BF6C4 & 0xF0 )
      {
        Function_2005748(0x5DCu);
        v4 = Function_22461a0(*(uint *)(v1 + 680));
        Function_22453f8(v1, *(uchar *)(v1 + 17), v4, 1, *(uint *)(v1 + 696));
      }
      if ( dword_21BF6C4 & 1 )
      {
        Function_2005748(0x5DCu);
        if ( *(uchar *)(v1 + 26) - 1 == Function_22461a0(*(uint *)(v1 + 680)) )
        {
          Function_2245528(v1, 1);
          return 1;
        }
        Function_22461a4(*(uint *)(v1 + 680), 1);
        Function_2244df0(v1);
        *(uint *)(v1 + 684) = Function_2245fb8(v1 + 324);
        ++*(uchar *)(v1 + 8);
        return 0;
      }
      if ( !(dword_21BF6C4 & 2) )
        return 0;
      Function_2005748(0x5DCu);
      Function_2245528(v1, 1);
      return 1;
    case 2:
      v6 = Function_2001be0(*(uint *)(a1 + 252));
      Function_2246080(*(uint *)(v1 + 684));
      if ( v6 > 0xFFFFFFFE )
      {
        if ( v6 == -1 )
          return 0;
      }
      else if ( v6 < 0xFFFFFFFE && v6 <= 4 )
      {
        if ( !v6 )
        {
          Function_2001bc4(*(uint *)(v1 + 252), 0);
          Function_2245a98(*(uint *)(v1 + 244));
          Function_2246060(*(uint *)(v1 + 684));
          *(uint *)(v1 + 684) = 0;
          *(uchar *)(v1 + 19) |= 0x40u;
          Function_200f174(0, 0, 0, 0, 6, 1, 93);
          ++*(uchar *)(v1 + 8);
          return 0;
        }
        if ( v6 != 2 && v6 == 4 )
        {
          Function_2001bc4(*(uint *)(v1 + 252), 0);
          Function_2245a98(*(uint *)(v1 + 244));
          Function_2243738(v1);
          return 1;
        }
      }
      Function_2001bc4(*(uint *)(v1 + 252), 0);
      Function_2245a98(*(uint *)(v1 + 244));
      Function_22461a4(*(uint *)(v1 + 680), 0);
      Function_2246060(*(uint *)(v1 + 684));
      *(uint *)(v1 + 684) = 0;
      Function_2246260(*(uint *)(v1 + 76), v1 + 192);
      *(uchar *)(v1 + 16) = Function_2244c60(v1, v1 + 192, 19);
      Function_201a9a4(v1 + 192);
      *(uchar *)(v1 + 8) = 1;
      return 0;
    case 3:
      if ( Function_200f2ac() != 1 )
        return 0;
      Function_2245464(v1);
      Function_22451b4(v1);
      *(uint *)(v1 + 4) = AllocAndInitOverlayData((int *)&Unknown_20f410c, *(uint *)(v1 + 320), 0x5Du);
      *(uchar *)(v1 + 19) |= 2u;
      return 1;
    case 4:
      if ( *(uint *)(a1 + 4) )
        return 0;
      return 1;
    case 5:
      if ( Function_200f2ac() == 1 )
        *(uchar *)(v1 + 8) = 2;
      return 0;
    default:
      return 0;
  }
}

//----- (02243738) --------------------------------------------------------
int __fastcall Function_2243738(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = Function_22461a0(*(uint *)(a1 + 680));
  Function_2245f44(*(uint *)(v1 + 4 * v2 + 656));
  v3 = Function_22461a0(*(uint *)(v1 + 680));
  Function_2245fac(*(uint *)(v1 + 4 * v3 + 656), 0);
  v4 = Function_22461a0(*(uint *)(v1 + 680));
  Function_2245f90(*(uint *)(v1 + 4 * v4 + 656), 6);
  v5 = Function_22461a0(*(uint *)(v1 + 680));
  Function_2244ff8(v1, v1 + 80 + 16 * (*(uchar *)(v1 + 17) + 2), v5, 0, 0, 15, 2, 0, 0, *(uint *)(v1 + 696));
  *(ushort *)(v1 + 2 * (uchar)(*(uchar *)(v1 + 17))++ + 704) = Function_22461a0(*(uint *)(v1 + 680));
  Function_2246060(*(uint *)(v1 + 684));
  *(uint *)(v1 + 684) = 0;
  Function_2246060(*(uint *)(v1 + 680));
  *(uint *)(v1 + 680) = 0;
  *(uchar *)(v1 + 19) |= 4u;
  Function_201ada4_ClearTextBox(v1 + 112, 0);
  return Function_201a9a4(v1 + 112);
}

//----- (02243818) --------------------------------------------------------
int __fastcall Function_2243818(int a1)
{
  int v1;
  int v2;
  uint v3;

  v1 = a1;
  v2 = *(uchar *)(a1 + 8);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      v3 = Function_2001be0(*(uint *)(v1 + 252));
      Function_2246080(*(uint *)(v1 + 684));
      if ( v3 > 0xFFFFFFFE )
      {
        if ( v3 == -1 )
          return 0;
      }
      else if ( v3 < 0xFFFFFFFE && v3 <= 1 && !v3 )
      {
        Function_2001bc4(*(uint *)(v1 + 252), 0);
        Function_2245a98(*(uint *)(v1 + 244));
        Function_2246060(*(uint *)(v1 + 684));
        *(uint *)(v1 + 684) = 0;
        *(uchar *)(v1 + 19) &= 0xF7u;
        if ( ((int (__fastcall *)(uint))dword_223AED4[0])(*(uchar *)(v1 + 9)) == 1 )
          *(uchar *)(v1 + 16) = Function_2244d14(v1, 2);
        ++*(uchar *)(v1 + 8);
        return 0;
      }
      Function_2001bc4(*(uint *)(v1 + 252), 0);
      Function_2245a98(*(uint *)(v1 + 244));
      Function_2246060(*(uint *)(v1 + 684));
      *(uint *)(v1 + 684) = 0;
      Function_224396c(v1);
      ++*(uchar *)(v1 + 8);
      return 0;
    }
    if ( v2 == 2 )
      return 1;
  }
  else
  {
    Function_201ada4_ClearTextBox(v1 + 112, 0);
    Function_201a9a4(v1 + 80 + 16 * (*(uchar *)(v1 + 17) + 2));
    Function_2007dc8(*(uint **)(v1 + 300));
    *(uchar *)(v1 + 16) = Function_2244d14(v1, 10);
    Function_2246074(*(uint *)(v1 + 680), 0);
    Function_22461a4(*(uint *)(v1 + 680), 1);
    Function_2244e94(v1);
    *(uint *)(v1 + 684) = Function_2245fb8(v1 + 324);
    ++*(uchar *)(v1 + 8);
  }
  return 0;
}

//----- (0224396C) --------------------------------------------------------
int __fastcall Function_224396c(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  Function_22461c0(*(uint *)(a1 + 680), 0);
  v2 = Function_22461a0(*(uint *)(v1 + 680));
  Function_2244ff8(v1, v1 + 112, v2, 0, 0, 15, 2, 0, 0, *(uint *)(v1 + 696));
  v3 = Function_22461a0(*(uint *)(v1 + 680));
  GetAdrOfPkmnInParty(*(uint **)(v1 + 696), v3);
  Function_22455c4(v1);
  Function_2246074(*(uint *)(v1 + 680), 1);
  Function_22461a4(*(uint *)(v1 + 680), 0);
  Function_2245528(v1, 1);
  Function_2246260(*(uint *)(v1 + 76), v1 + 192);
  *(uchar *)(v1 + 16) = Function_2244c60(v1, v1 + 192, 19);
  Function_201a9a4(v1 + 192);
  result = Function_2244d14(v1, 9);
  *(uchar *)(v1 + 16) = result;
  return result;
}

//----- (02243A3C) --------------------------------------------------------
int __fastcall Function_2243a3c(int a1)
{
  int v1;
  uint v2;
  int v3;
  int v4;
  uint v5;
  int v6;
  int v7;
  uint v9;

  v1 = a1;
  v2 = *(uchar *)(a1 + 8);
  if ( v2 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_2243A56 + v2) + 35928664);
  switch ( (uchar)v2 )
  {
    case 0:
      Function_2246260(*(uint *)(v1 + 76), v1 + 192);
      *(uchar *)(v1 + 16) = Function_2244c60(v1, v1 + 192, 23);
      *(uchar *)(v1 + 16) = Function_2244cc0(v1, v1 + 192, 24);
      Function_201a9a4(v1 + 192);
      ((int (__fastcall *)(uint))dword_223AED4[0])(*(uchar *)(v1 + 9));
      v3 = *(uchar *)(v1 + 27);
      *(uint *)(v1 + 680) = Function_2245fb8(v1 + 324);
      v4 = Function_22461a0(*(uint *)(v1 + 680));
      Function_2244ff8(v1, v1 + 112, v4, 0, 0, 15, 2, 0, 0, *(uint *)(v1 + 700));
      v5 = Function_2027b50(*(ushort **)(v1 + 312));
      Function_224628c(v1 + 160, v5);
      *(uchar *)(v1 + 16) = Function_2244d14(v1, 13);
      ++*(uchar *)(v1 + 8);
      return 0;
    case 1:
      Function_2246080(*(uint *)(v1 + 680));
      if ( dword_21BF6C4 & 0xC0 )
      {
        Function_2005748(0x5DCu);
        v6 = Function_22461a0(*(uint *)(v1 + 680));
        Function_22453f8(v1, 0, v6, 0, *(uint *)(v1 + 700));
      }
      if ( dword_21BF6C4 & 0x30 )
      {
        Function_2005748(0x5DCu);
        v7 = Function_22461a0(*(uint *)(v1 + 680));
        Function_22453f8(v1, 0, v7, 0, *(uint *)(v1 + 700));
      }
      if ( dword_21BF6C4 & 1 )
      {
        Function_2005748(0x5DCu);
        if ( *(uchar *)(v1 + 27) - 1 == Function_22461a0(*(uint *)(v1 + 680)) )
        {
          Function_2245528(v1, 1);
          return 1;
        }
        if ( *(uchar *)(v1 + 27) - 2 == Function_22461a0(*(uint *)(v1 + 680)) )
        {
          Function_2243d20(v1);
          return 1;
        }
        Function_22461a4(*(uint *)(v1 + 680), 1);
        Function_2244e94(v1);
        *(uint *)(v1 + 684) = Function_2245fb8(v1 + 324);
        *(uchar *)(v1 + 16) = Function_2244d14(v1, 14);
        ++*(uchar *)(v1 + 8);
        return 0;
      }
      if ( !(dword_21BF6C4 & 2) )
        return 0;
      Function_2005748(0x5DCu);
      Function_2245528(v1, 1);
      return 1;
    case 2:
      v9 = Function_2001be0(*(uint *)(v1 + 252));
      Function_2246080(*(uint *)(v1 + 684));
      if ( v9 > 0xFFFFFFFE )
      {
        if ( v9 == -1 )
          return 0;
        goto LABEL_27;
      }
      if ( v9 >= 0xFFFFFFFE || v9 > 1 || v9 )
      {
LABEL_27:
        Function_2001bc4(*(uint *)(v1 + 252), 0);
        Function_2245a98(*(uint *)(v1 + 244));
        Function_2243de4(v1);
        *(uchar *)(v1 + 8) = 1;
        return 0;
      }
      Function_2001bc4(*(uint *)(v1 + 252), 0);
      Function_2245a98(*(uint *)(v1 + 244));
      Function_2243d84(v1);
      if ( ((int (__fastcall *)(uint))dword_223AED4[0])(*(uchar *)(v1 + 9)) == 1 )
        *(uchar *)(v1 + 16) = Function_2244d14(v1, 2);
      ++*(uchar *)(v1 + 8);
      return 0;
    case 3:
      return 1;
    default:
      return 0;
  }
}

//----- (02243D20) --------------------------------------------------------
int __fastcall Function_2243d20(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_2246060(*(uint *)(a1 + 680));
  *(uint *)(v1 + 680) = 0;
  *(uchar *)(v1 + 19) &= 0xFBu;
  Function_201ada4_ClearTextBox(v1 + 112, 0);
  Function_201a9a4(v1 + 112);
  Function_2007dc8(*(uint **)(v1 + 300));
  Function_201ada4_ClearTextBox(v1 + 192, 15);
  Function_200e084(v1 + 192, 1);
  Function_201ad10(v1 + 192);
  --*(uchar *)(v1 + 17);
  result = 704;
  *(ushort *)(v1 + 704) = 0;
  return result;
}

//----- (02243D84) --------------------------------------------------------
uint *__fastcall Function_2243d84(int a1)
{
  int v1;

  v1 = a1;
  *(uchar *)(a1 + 19) |= 8u;
  *(ushort *)(v1 + 2 * (uchar)(*(uchar *)(v1 + 17))++ + 704) = Function_22461a0(*(uint *)(a1 + 680));
  Function_2246060(*(uint *)(v1 + 684));
  *(uint *)(v1 + 684) = 0;
  Function_2246074(*(uint *)(v1 + 680), 0);
  Function_201ada4_ClearTextBox(v1 + 112, 0);
  Function_201a9a4(v1 + 112);
  return Function_2007dc8(*(uint **)(v1 + 300));
}

//----- (02243DE4) --------------------------------------------------------
int __fastcall Function_2243de4(int a1)
{
  int v1;
  uint v2;

  v1 = a1;
  Function_2246060(*(uint *)(a1 + 684));
  *(uint *)(v1 + 684) = 0;
  Function_22461a4(*(uint *)(v1 + 680), 0);
  Function_2246260(*(uint *)(v1 + 76), v1 + 192);
  *(uchar *)(v1 + 16) = Function_2244c60(v1, v1 + 192, 23);
  *(uchar *)(v1 + 16) = Function_2244cc0(v1, v1 + 192, 24);
  v2 = Function_2027b50(*(ushort **)(v1 + 312));
  Function_224628c(v1 + 160, v2);
  *(uchar *)(v1 + 16) = Function_2244d14(v1, 13);
  return Function_201a9a4(v1 + 192);
}

//----- (02243E84) --------------------------------------------------------
int __fastcall Function_2243e84(int a1)
{
  int v1;
  int v2;
  uint v3;
  uint v4;

  v1 = a1;
  v2 = *(uchar *)(a1 + 8);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      v4 = Function_2001be0(*(uint *)(v1 + 252));
      Function_2246080(*(uint *)(v1 + 684));
      if ( v4 > 0xFFFFFFFE )
      {
        if ( v4 == -1 )
          return 0;
      }
      else if ( v4 < 0xFFFFFFFE && v4 <= 1 && !v4 )
      {
        Function_2001bc4(*(uint *)(v1 + 252), 0);
        Function_2245a98(*(uint *)(v1 + 244));
        Function_2246060(*(uint *)(v1 + 684));
        *(uint *)(v1 + 684) = 0;
        *(uchar *)(v1 + 19) &= 0xF7u;
        if ( ((int (__fastcall *)(uint))dword_223AED4[0])(*(uchar *)(v1 + 9)) == 1 )
          *(uchar *)(v1 + 16) = Function_2244d14(v1, 2);
        ++*(uchar *)(v1 + 8);
        return 0;
      }
      Function_2001bc4(*(uint *)(v1 + 252), 0);
      Function_2246060(*(uint *)(v1 + 680));
      *(uint *)(v1 + 680) = 0;
      Function_2246060(*(uint *)(v1 + 684));
      *(uint *)(v1 + 684) = 0;
      Function_2243fdc(v1);
      ++*(uchar *)(v1 + 8);
      return 0;
    }
    if ( v2 == 2 )
      return 1;
  }
  else
  {
    Function_201ada4_ClearTextBox(v1 + 112, 0);
    Function_201a9a4(v1 + 112);
    Function_2007dc8(*(uint **)(v1 + 300));
    v3 = Function_2027b50(*(ushort **)(v1 + 312));
    Function_224628c(v1 + 160, v3);
    *(uchar *)(v1 + 16) = Function_2244d14(v1, 10);
    Function_2246074(*(uint *)(v1 + 680), 0);
    Function_2244e94(v1);
    *(uint *)(v1 + 684) = Function_2245fb8(v1 + 324);
    ++*(uchar *)(v1 + 8);
  }
  return 0;
}

//----- (02243FDC) --------------------------------------------------------
int __fastcall Function_2243fdc(int a1)
{
  int v1;

  v1 = a1;
  GetAdrOfPkmnInParty(*(uint **)(a1 + 700), 0);
  Function_22455c4(v1);
  return Function_2245528(v1, 1);
}

//----- (0224400C) --------------------------------------------------------
int __fastcall Function_224400c(int a1)
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
  int result;

  v1 = a1;
  ((void (__fastcall *)(uint))dword_223AA50[0])(*(uchar *)(a1 + 9));
  switch ( *(uchar *)(v1 + 8) )
  {
    case 0:
      *(uchar *)(v1 + 19) |= 0x20u;
      Function_201acf4(v1 + 96);
      Function_201acf4(v1 + 208);
      Function_201acf4(v1 + 224);
      Function_201ada4_ClearTextBox(v1 + 80, 0);
      Function_201a9a4(v1 + 80);
      Function_200e084(v1 + 160, 1);
      Function_201ad10(v1 + 160);
      Function_2246244(v1 + 80);
      v2 = Function_2245538(v1, 1, 0);
      Function_22448f4(v1, 3, v2, 21, 11);
      Function_200872c(*(uint *)(v1 + 296), 0, 16, 0, 0xFFFF);
      *(uchar *)(v1 + 25) = 0;
      ++*(uchar *)(v1 + 8);
      goto LABEL_36;
    case 1:
      if ( (uchar)++*(uchar *)(v1 + 25) >= 2u )
      {
        Function_2007dc8(*(uint **)(v1 + 300));
        Function_2244924(v1, 1);
        v3 = Function_2245538(v1, 0, 0);
        Function_22448f4(v1, 3, v3, 21, 11);
        Function_2244be4(v1, 3);
        *(uchar *)(v1 + 25) = 0;
        ++*(uchar *)(v1 + 8);
      }
      goto LABEL_36;
    case 2:
      Function_20087b4(*(uint *)(v1 + 300));
      if ( Function_2245e48(*(uint *)(v1 + 688)) != 1 )
      {
        Function_2245a30(v1);
        Function_2244aa8(v1, 1);
        Function_2244a60(v1, 2);
        Function_2244a18(v1, 3);
        Function_2019184(*(uint *)(v1 + 76), 2u, 0, *(uint *)(v1 + 12));
        Function_2005748(0x612u);
        *(uchar *)(v1 + 25) = 0;
        ++*(uchar *)(v1 + 8);
      }
      goto LABEL_36;
    case 3:
      if ( Function_2244830(v1) == 1 )
      {
        Function_20057a4(1554, 0);
        Function_2005748(0x679u);
        *(uint *)(v1 + 20) = 8;
        v4 = 0;
        if ( (int)*(uchar *)(v1 + 18) > 0 )
        {
          v5 = v1;
          do
          {
            *(uint *)(v5 + 656) = Function_2245ea8(*(uint *)(v5 + 656));
            *(uint *)(v5 + 656) = 0;
            ++v4;
            v5 += 4;
          }
          while ( v4 < *(uchar *)(v1 + 18) );
        }
        if ( ((int (__fastcall *)(uint))dword_223AED4[0])(*(uchar *)(v1 + 9)) == 1 )
        {
          if ( *(uchar *)(v1 + 18) == 2 )
            *(uchar *)(v1 + 18) = 4;
          else
            *(uchar *)(v1 + 18) = 2;
        }
        Function_224260c(v1);
        v6 = 0;
        if ( (int)*(uchar *)(v1 + 18) > 0 )
        {
          v7 = v1;
          do
          {
            Function_2245f5c(*(uint *)(v7 + 656));
            ++v6;
            v7 += 4;
          }
          while ( v6 < *(uchar *)(v1 + 18) );
        }
        Function_2005748(0x612u);
        *(uchar *)(v1 + 25) = 0;
        ++*(uchar *)(v1 + 8);
      }
      goto LABEL_36;
    case 4:
      if ( Function_2244780(v1) == 1 )
      {
        Function_20057a4(1554, 0);
        Function_2005748(0x679u);
        v8 = 0;
        if ( (int)*(uchar *)(v1 + 18) > 0 )
        {
          v9 = v1;
          do
          {
            Function_2245f90(*(uint *)(v9 + 656), 10);
            ++v8;
            v9 += 4;
          }
          while ( v8 < *(uchar *)(v1 + 18) );
        }
        *(uint *)(v1 + 20) = 8;
        Function_2244924(v1, 0);
        *(uchar *)(v1 + 25) = 0;
        ++*(uchar *)(v1 + 8);
      }
      goto LABEL_36;
    case 5:
      if ( Function_2245e48(*(uint *)(v1 + 688)) != 1 )
      {
        Function_2245a30(v1);
        *(uchar *)(v1 + 25) = 0;
        ++*(uchar *)(v1 + 8);
      }
      goto LABEL_36;
    case 6:
      if ( !*(uchar *)(v1 + 25) )
      {
        Function_2244b90(v1, 3);
        Function_201ff0c(2u, 0);
        if ( *(uchar *)(v1 + 19) & 4 )
        {
          GetAdrOfPkmnInParty(*(uint **)(v1 + 700), 0);
          Function_22455c4(v1);
        }
        else
        {
          Function_224266c(v1);
        }
        Function_2007dec(*(uint *)(v1 + 300), 6u, 0);
        Function_200872c(*(uint *)(v1 + 296), 16, 0, 1u, 0xFFFF);
        v10 = Function_2245538(v1, 1, 1);
        Function_22448f4(v1, 3, v10, 21, 11);
      }
      Function_20087b4(*(uint *)(v1 + 300));
      if ( (uchar)++*(uchar *)(v1 + 25) < 0x15u )
        goto LABEL_36;
      v11 = Function_2245538(v1, 2, 1);
      Function_22448f4(v1, 3, v11, 21, 11);
      Function_2245a64(v1);
      *(uchar *)(v1 + 19) &= 0xDFu;
      if ( ((int (__fastcall *)(uint))dword_223AED4[0])(*(uchar *)(v1 + 9)) == 1 )
      {
        *(uchar *)(v1 + 859) = 1;
        Function_22457c0(v1);
      }
      *(uchar *)(v1 + 25) = 0;
      result = 1;
      break;
    default:
LABEL_36:
      result = 0;
      break;
  }
  return result;
}

//----- (0224435C) --------------------------------------------------------
int __fastcall Function_224435c(uchar *a1)
{
  uchar *v1;

  v1 = a1;
  if ( a1[8] )
  {
    if ( a1[8] == 1 && (uchar)a1[858] >= 2u )
    {
      a1[858] = 0;
      return 1;
    }
  }
  else if ( Function_2245620(a1, 10, (uint)(uchar)a1[19] << 28 >> 31) == 1 )
  {
    ++v1[8];
  }
  return 0;
}

//----- (0224439C) --------------------------------------------------------
int __fastcall Function_224439c(int a1)
{
  int v1;

  v1 = a1;
  if ( *(uchar *)(a1 + 8) )
  {
    if ( *(uchar *)(a1 + 8) == 1 && Function_2036540(165) == 1 )
    {
      Function_20365f4();
      return 1;
    }
  }
  else
  {
    *(uchar *)(a1 + 16) = Function_2244d14(a1, 15);
    Function_20365f4();
    Function_20364f0(165);
    ++*(uchar *)(v1 + 8);
  }
  return 0;
}

//----- (022443DC) --------------------------------------------------------
int __fastcall Function_22443dc(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 8);
  if ( v2 )
  {
    if ( v2 == 1 && Function_200f2ac() == 1 )
      return 1;
  }
  else
  {
    Function_200f174(0, 0, 0, 0, 6, 1, 93);
    ++*(uchar *)(v1 + 8);
  }
  return 0;
}

//----- (02244424) --------------------------------------------------------
int __fastcall Function_2244424(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  uint v5;
  ushort *v6;

  v1 = a1;
  v2 = *(uchar *)(a1 + 8);
  if ( v2 )
  {
    if ( v2 == 1 && !Function_201d724(*(uchar *)(v1 + 16)) )
    {
      *(uchar *)(v1 + 25) = 0;
      return 1;
    }
  }
  else
  {
    if ( *(uint *)(v1 + 684) )
    {
      Function_2001bc4(*(uint *)(v1 + 252), 0);
      Function_2245a98(*(uint *)(v1 + 244));
      Function_2246060(*(uint *)(v1 + 684));
      *(uint *)(v1 + 684) = 0;
    }
    ((void (__fastcall *)(uint, uint))dword_222E5D0[0])(*(uint *)(v1 + 32), 0);
    GetAdrOfPkmnInParty(*(uint **)(v1 + 696), *(ushort *)(v1 + 704) + 2);
    Function_2076b10_Dummy();
    Function_2244f00(v1, 1, v3);
    GetAdrOfPkmnInParty(*(uint **)(v1 + 700), *(ushort *)(v1 + 706));
    Function_2076b10_Dummy();
    Function_2244f00(v1, 2, v4);
    v5 = Function_2027b50(*(ushort **)(v1 + 312));
    Function_224628c(v1 + 160, v5);
    v6 = (ushort *)LoadPlayerDataAdress(*(uint *)(v1 + 316));
    Function_2027ac0(v6);
    *(uchar *)(v1 + 16) = Function_2244c60(v1, v1 + 160, 16);
    Function_201a9a4(v1 + 160);
    *(uchar *)(v1 + 25) = 80;
    ++*(uchar *)(v1 + 8);
  }
  return 0;
}

//----- (0224451C) --------------------------------------------------------
int __fastcall Function_224451c(int *a1)
{
  int *v1;
  int result;
  int v3;

  v1 = a1;
  result = a1[1];
  if ( !result )
  {
    Function_2008a94(v1[74]);
    v3 = v1[72];
    if ( v3 )
      Function_2003694(v3);
    Function_201c2b8(v1[19]);
    Function_201dcac();
    Function_200a858();
    result = dword_27E3FF8 | 1;
    dword_27E3FF8 |= 1u;
  }
  return result;
}

//----- (02244564) --------------------------------------------------------
char *Function_2244564()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_224641C;
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

//----- (02244584) --------------------------------------------------------
uint __fastcall Function_2244584(uint *a1, int a2, int a3, int a4)
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
  v37 = 1;
  SetGraphicsModes(&v34);
  v27 = 0;
  v28 = 0;
  v29 = 2048;
  v30 = 0;
  v31 = 16777217;
  v32 = 256;
  v33 = 0;
  Function_20183c4(v4, 1u, &v27, 0);
  Function_2019690(1u, 32, 0, 0x5Du);
  Function_2019ebc(v4, 1u);
  v20 = 0;
  v21 = 0;
  v22 = 2048;
  v23 = 0;
  v24 = 50528257;
  v25 = 512;
  v26 = 0;
  Function_20183c4(v4, 2u, &v20, 0);
  Function_2019ebc(v4, 2u);
  v13 = 0;
  v14 = 0;
  v15 = 2048;
  v16 = 0;
  v17 = 50659329;
  v18 = 768;
  v19 = 0;
  Function_20183c4(v4, 3u, &v13, 0);
  Function_2019ebc(v4, 3u);
  v6 = 0;
  v7 = 0;
  v8 = 2048;
  v9 = 0;
  v10 = 67567617;
  v11 = 0;
  v12 = 0;
  Function_20183c4(v4, 4u, &v6, 0);
  Function_2019ebc(v4, 4u);
  REG_BG0CNT &= 0xFFFCu;
  return Function_201ff0c(1u, 1);
}

//----- (02244678) --------------------------------------------------------
int __fastcall Function_2244678(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  Function_2244564();
  Function_2244584(*(uint **)(v1 + 76), v2, v3, v4);
  *(uint *)(v1 + 288) = MallocFill120(0x5Du);
  Function_2002f70(*(uint *)(v1 + 288), 2, 512, 0x5Du);
  v5 = Function_2002f70(*(uint *)(v1 + 288), 0, 512, 0x5Du);
  Function_2244af8(v5);
  if ( *(uchar *)(v1 + 19) & 0x10 )
  {
    Function_22449a4(v1, 3);
    Function_2244a60(v1, 2);
    Function_2019184(*(uint *)(v1 + 76), 2u, 0, *(uint *)(v1 + 12));
    Function_201ff0c(8u, 1);
    Function_201ff0c(4u, 1);
    Function_201ff0c(2u, 1);
  }
  else
  {
    Function_2244aa8(v1, 1);
    Function_2244a60(v1, 2);
    Function_2244a18(v1, 3);
    Function_201ff0c(2u, 1);
    Function_201ff0c(4u, 1);
    Function_201ff0c(8u, 1);
  }
  return Function_2244b30(v1, 4);
}

//----- (0224472C) --------------------------------------------------------
int __fastcall Function_224472c(int a1)
{
  return Function_2245aac(a1 + 324);
}

//----- (0224473C) --------------------------------------------------------
uint __fastcall Function_224473c(int a1)
{
  int v1;

  v1 = a1;
  Function_201ff0c(0x1Fu, 0);
  Function_201ff74(0x1Fu, 0);
  Function_2019044(v1, 3);
  Function_2019044(v1, 2);
  Function_2019044(v1, 1);
  Function_2019044(v1, 4);
  return free(v1);
}

//----- (02244778) --------------------------------------------------------
int __fastcall Function_2244778(int result, uint *a2, int a3)
{
  *(uchar *)(result + 8) = 0;
  *a2 = a3;
  return result;
}

//----- (02244780) --------------------------------------------------------
BOOL __fastcall Function_2244780(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint *v7;
  int v8;
  int v9;
  int v11;
  char v12;
  int v13;

  v13 = a4;
  v4 = a1;
  v11 = 0;
  Function_2019184(*(uint *)(a1 + 76), 2u, 1u, 8);
  *(uint *)(v4 + 12) = Function_20192ec(*(uint *)(v4 + 76), 2);
  v5 = 0;
  if ( (int)*(uchar *)(v4 + 18) > 0 )
  {
    v6 = v4;
    do
    {
      v7 = (uint *)Function_2245f2c(*(uint *)(v6 + 656));
      if ( *v7 / 4096 - 8 > Function_2245f88(*(uint *)(v6 + 656)) )
      {
        Function_2245ec8(&v12, *(uint *)(v6 + 656), -8, 0);
      }
      else
      {
        v8 = Function_2245f88(*(uint *)(v6 + 656));
        v9 = Function_2245f8c(*(uint *)(v6 + 656));
        Function_2245f14(*(uint *)(v6 + 656), v8, v9);
        v11 = 1;
      }
      ++v5;
      v6 += 4;
    }
    while ( v5 < *(uchar *)(v4 + 18) );
  }
  Function_22448bc(v4);
  return v11 == 1;
}

//----- (02244830) --------------------------------------------------------
BOOL __fastcall Function_2244830(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v1 = a1;
  v2 = 0;
  Function_2019184(*(uint *)(a1 + 76), 2u, 1u, 8);
  *(uint *)(v1 + 12) = Function_20192ec(*(uint *)(v1 + 76), 2);
  v3 = 0;
  if ( (int)*(uchar *)(v1 + 18) > 0 )
  {
    v4 = v1;
    do
    {
      if ( *(uint *)Function_2245f2c(*(uint *)(v4 + 656)) / 4096 - 8 >= -24 )
      {
        Function_2245ec8(&v6, *(uint *)(v4 + 656), -8, 0);
      }
      else
      {
        Function_2245ebc(*(uint *)(v4 + 656), 0);
        ++v2;
      }
      ++v3;
      v4 += 4;
    }
    while ( v3 < *(uchar *)(v1 + 18) );
  }
  Function_22448bc(v1);
  return v2 == *(uchar *)(v1 + 18);
}

//----- (022448BC) --------------------------------------------------------
int __fastcall Function_22448bc(int a1)
{
  int v1;
  uint v2;
  int result;

  v1 = a1;
  v2 = *(uint *)(a1 + 20);
  if ( !(v2 & 3) )
  {
    if ( v2 >> 2 >= 4 )
      *(uint *)(a1 + 20) = 0;
    Function_22448f4(a1, 1, ((*(uint *)(a1 + 20) >> 2) + 6) & 0xFF, 32, 32);
  }
  result = *(uint *)(v1 + 20) + 1;
  *(uint *)(v1 + 20) = result;
  return result;
}

//----- (022448F4) --------------------------------------------------------
int __fastcall Function_22448f4(int a1, uchar a2, uchar a3, uchar a4, uchar a5)
{
  int v5;
  char v6;

  v5 = a1;
  v6 = a2;
  Function_2019e2c(*(uint *)(a1 + 76), a2, 0, 0, a4, a5, a3);
  return Function_201c3c0(*(uint *)(v5 + 76), v6);
}

//----- (02244924) --------------------------------------------------------
int __fastcall Function_2244924(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;

  v3 = a2;
  v4 = a1;
  switch ( (uchar)a1 )
  {
    case 0:
      Function_2005748(0x5EEu);
      v2 = 2;
      break;
    case 1:
      Function_2005748(0x5EFu);
      v2 = 3;
      break;
    case 4:
      Function_2005748(0x5EEu);
      v2 = 2;
      break;
    case 5:
      Function_2005748(0x5EFu);
      v2 = 3;
      break;
    default:
      break;
  }
  v5 = Function_2245584(v4, v3);
  *(uint *)(v4 + 688) = Function_22459b0(v4, v5);
  result = ((int (__fastcall *)(uint))dword_223AED4[0])(*(uchar *)(v4 + 9));
  if ( result == 1 )
  {
    result = Function_2245a04(v4, v2);
    *(uint *)(v4 + 692) = result;
  }
  return result;
}

//----- (022449A4) --------------------------------------------------------
int __fastcall Function_22449a4(int a1, uchar a2)
{
  int v2;
  uchar v3;
  int result;

  v2 = a1;
  v3 = a2;
  Function_20070e8(*(uint *)(a1 + 724), 4u, *(uint **)(a1 + 76), a2, 0, 0, 1, 93);
  if ( ((int (__fastcall *)(uint))dword_223AED4[0])(*(uchar *)(v2 + 9)) )
    result = Function_200710c(*(uint *)(v2 + 724), 0xBu, *(uint **)(v2 + 76), v3, 0, 0, 1, 93);
  else
    result = Function_200710c(*(uint *)(v2 + 724), 5u, *(uint **)(v2 + 76), v3, 0, 0, 1, 93);
  return result;
}

//----- (02244A18) --------------------------------------------------------
int __fastcall Function_2244a18(int a1, uchar a2)
{
  int v2;
  uchar v3;

  v2 = a1;
  v3 = a2;
  Function_20070e8(*(uint *)(a1 + 724), 4u, *(uint **)(a1 + 76), a2, 0, 0, 1, 93);
  return Function_200710c(*(uint *)(v2 + 724), 7u, *(uint **)(v2 + 76), v3, 0, 0, 1, 93);
}

//----- (02244A60) --------------------------------------------------------
int __fastcall Function_2244a60(int a1, uchar a2)
{
  int v2;
  uchar v3;

  v2 = a1;
  v3 = a2;
  Function_20070e8(*(uint *)(a1 + 724), 4u, *(uint **)(a1 + 76), a2, 0, 0, 1, 93);
  return Function_200710c(*(uint *)(v2 + 724), 8u, *(uint **)(v2 + 76), v3, 0, 0, 1, 93);
}

//----- (02244AA8) --------------------------------------------------------
uint __fastcall Function_2244aa8(int a1, uchar a2)
{
  int v2;
  uchar v3;

  v2 = a1;
  v3 = a2;
  Function_20070e8(*(uint *)(a1 + 724), 4u, *(uint **)(a1 + 76), a2, 0, 0, 1, 93);
  Function_200710c(*(uint *)(v2 + 724), 9u, *(uint **)(v2 + 76), v3, 0, 0, 1, 93);
  return Function_2019060(1u, 2);
}

//----- (02244AF8) --------------------------------------------------------
uint __fastcall Function_2244af8(int a1, int a2, int a3, int a4)
{
  int v4;
  int v6;
  int v7;

  v7 = a4;
  v4 = Function_2006f88(150, 130, &v6, 93);
  DC_FlushRange(*(uint *)(v6 + 12), 352);
  GX_LoadBGPltt(*(uint *)(v6 + 12), 0, 0x160u);
  return free(v4);
}

//----- (02244B30) --------------------------------------------------------
int __fastcall Function_2244b30(int a1, uchar a2)
{
  int v2;
  uchar v3;

  v2 = a1;
  v3 = a2;
  Function_20070e8(*(uint *)(a1 + 724), 0x7Du, *(uint **)(a1 + 76), a2, 0, 0, 1, 93);
  Function_200710c(*(uint *)(v2 + 724), 0x7Eu, *(uint **)(v2 + 76), v3, 0, 0, 1, 93);
  return Function_2007130(*(uint *)(v2 + 724), 0xABu, 4u, 0, 32, 93);
}

//----- (02244B90) --------------------------------------------------------
int __fastcall Function_2244b90(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( ((int (__fastcall *)(uint))dword_223AED4[0])(*(uchar *)(a1 + 9)) )
    result = Function_200710c(*(uint *)(v1 + 724), 0xBu, *(uint **)(v1 + 76), 3u, 0, 0, 1, 93);
  else
    result = Function_200710c(*(uint *)(v1 + 724), 5u, *(uint **)(v1 + 76), 3u, 0, 0, 1, 93);
  return result;
}

//----- (02244BE4) --------------------------------------------------------
int __fastcall Function_2244be4(int a1)
{
  return Function_200710c(*(uint *)(a1 + 724), 7u, *(uint **)(a1 + 76), 3u, 0, 0, 1, 93);
}

//----- (02244C0C) --------------------------------------------------------
int __fastcall Function_2244c0c(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( ((int (__fastcall *)(uint))dword_223AED4[0])(*(uchar *)(a1 + 9)) )
    result = Function_200710c(*(uint *)(v1 + 724), 0xCu, *(uint **)(v1 + 76), 3u, 0, 0, 1, 93);
  else
    result = Function_200710c(*(uint *)(v1 + 724), 0xAu, *(uint **)(v1 + 76), 3u, 0, 0, 1, 93);
  return result;
}

//----- (02244C60) --------------------------------------------------------
int __fastcall Function_2244c60(int a1, int a2, uint a3, int a4, int a5, int a6, int a7, int a8, uchar a9, uchar a10)
{
  int v10;
  int v11;
  uint v12;
  int v13;

  v10 = a2;
  v11 = a1;
  v12 = a3;
  Function_201ada4_ClearTextBox(a2, a9);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v11 + 28), v12, *(ushort **)(v11 + 40));
  Function_200c388(*(uint **)(v11 + 32), *(uint *)(v11 + 36), *(uint *)(v11 + 40));
  v13 = *(uint *)(v11 + 36);
  return Function_201d78c(v10, a10);
}

//----- (02244CC0) --------------------------------------------------------
int __fastcall Function_2244cc0(int a1, int a2, uint a3, int a4, int a5, int a6, int a7, int a8, int a9, uchar a10)
{
  int v10;
  int v11;
  int v12;

  v10 = a1;
  v11 = a2;
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(a1 + 28), a3, *(ushort **)(a1 + 40));
  Function_200c388(*(uint **)(v10 + 32), *(uint *)(v10 + 36), *(uint *)(v10 + 40));
  v12 = *(uint *)(v10 + 36);
  return Function_201d78c(v11, a10);
}

//----- (02244D14) --------------------------------------------------------
int __fastcall Function_2244d14(int a1, uint a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = Function_2244c60(a1, a1 + 160, a2, 1, 1, 255, 1, 2, 0xFu, 1u);
  Function_201a9a4(v2 + 160);
  return v3;
}

//----- (02244D48) --------------------------------------------------------
uchar *__fastcall Function_2244d48(int a1, int a2, char a3)
{
  int v3;
  int v4;
  char v5;
  uchar *result;

  v3 = 0;
  v4 = a1;
  do
  {
    *(uint *)(v4 + 256) = 0;
    *(uint *)(v4 + 260) = 0;
    ++v3;
    v4 += 8;
  }
  while ( v3 < 4 );
  *(uint *)(a1 + 240) = a1 + 256;
  *(uint *)(a1 + 244) = a2;
  *(uchar *)(a1 + 248) = 0;
  *(uchar *)(a1 + 249) = 1;
  *(uchar *)(a1 + 250) = a3;
  *(uchar *)(a1 + 251) &= 0xF0u;
  *(uchar *)(a1 + 251) = *(uchar *)(a1 + 251) & 0xCF | 0x10;
  v5 = *(uchar *)(a1 + 251);
  result = (uchar *)(a1 + 251);
  *result = v5 & 0x3F | 0x40;
  return result;
}

//----- (02244DC4) --------------------------------------------------------
int __fastcall Function_2244dc4(int a1, int a2, int a3, uint a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int result;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a1 + 44;
  v8 = 4 * a2;
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(a1 + 28), a4, *(ushort **)(a1 + 44 + 4 * a2));
  v9 = v4 + 8 * v5;
  *(uint *)(v9 + 256) = *(uint *)(v7 + v8);
  result = v6;
  *(uint *)(v9 + 260) = v6;
  return result;
}

//----- (02244DF0) --------------------------------------------------------
int __fastcall Function_2244df0(uint *a1)
{
  uint *v1;
  int v2;
  int result;

  v1 = a1;
  Function_2246260(a1[19], a1 + 48);
  Function_2244d48((int)v1, (int)(v1 + 48), 3);
  Function_2244dc4((int)v1, 0, 0, 5u);
  if ( Function_22454f8(v1, 0) == 1 )
  {
    v2 = Function_22461a0(v1[170]);
    if ( Function_2245f3c(v1[v2 + 164]) )
      Function_2244dc4((int)v1, 1, 3, 8u);
    else
      Function_2244dc4((int)v1, 1, 1, 6u);
  }
  else
  {
    Function_2244dc4((int)v1, 1, 4, 0x15u);
  }
  Function_2244dc4((int)v1, 2, 2, 7u);
  result = Function_2001b7c(v1 + 60, 0, 0, 0, 0x5Du, 2);
  v1[63] = result;
  return result;
}

//----- (02244E94) --------------------------------------------------------
int __fastcall Function_2244e94(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_2246260(*(uint *)(a1 + 76), a1 + 192);
  Function_2244d48(v1, v1 + 192, 2);
  Function_2244dc4(v1, 0, 0, 3u);
  Function_2244dc4(v1, 1, 1, 4u);
  result = Function_2001b7c((uint *)(v1 + 240), 0, 0, 0, 0x5Du, 2);
  *(uint *)(v1 + 252) = result;
  return result;
}

//----- (02244EE8) --------------------------------------------------------
uint __fastcall Function_2244ee8(int a1, uint a2, int a3)
{
  return Function_200b60c(*(uint *)(a1 + 32), a2, a3, 1, 0, 1);
}

//----- (02244F00) --------------------------------------------------------
ushort *__fastcall Function_2244f00(int a1, uint a2, int a3)
{
  return Function_200b538(*(uint *)(a1 + 32), a2, a3);
}

//----- (02244F0C) --------------------------------------------------------
int __fastcall Function_2244f0c(int a1, int a2, int a3, int a4, uchar a5)
{
  int v5;
  int v6;
  ushort *v7;
  ushort *v8;
  int v9;

  v5 = a2;
  v6 = LoadTrainerDataAdress(*(uint *)(a1 + 316));
  v7 = (ushort *)Function_2023790(8, 0x5Du);
  Function_201ada4_ClearTextBox(v5, 0);
  Function_2025ef0_Dummy();
  Function_2023d28(v7, v8);
  GetGender(v6);
  Function_201d78c(v5, a5);
  Function_20237bc_FreeMsg((int)v7, v9);
  return Function_201a9a4(v5);
}

//----- (02244F84) --------------------------------------------------------
int __fastcall Function_2244f84(int a1, int a2, int a3, int a4, uchar a5)
{
  int v5;
  int v6;
  ushort *v7;
  ushort *v8;
  int v9;

  v5 = a2;
  v6 = Function_203608c();
  v7 = (ushort *)Function_2032ee8(1 - v6);
  v8 = (ushort *)Function_2023790(8, 0x5Du);
  Function_201ada4_ClearTextBox(v5, 0);
  Function_2025ef4(v7, v8);
  GetGender((int)v7);
  Function_201d78c(v5, a5);
  Function_20237bc_FreeMsg((int)v8, v9);
  return Function_201a9a4(v5);
}

//----- (02244FF8) --------------------------------------------------------
int __fastcall Function_2244ff8(int a1, int a2, int a3, int a4, int a5, int a6, int a7, uchar a8, uchar a9, uint *a10)
{
  int v10;
  int *v11;
  ushort *v12;
  int v13;
  int v14;
  uint v15;
  int v16;
  int v18;
  uint v19;
  char v20;
  int v21;

  v21 = a4;
  v18 = a1;
  v10 = a2;
  v11 = GetAdrOfPkmnInParty(a10, a3);
  GetPkmnData(v11, 0xB3u, (ushort *)&v20);
  Function_201ada4_ClearTextBox(v10, a8);
  v12 = (ushort *)Function_2023790(11, 0x5Du);
  Function_2023d28(v12, (ushort *)&v20);
  Function_201d78c(v10, a9);
  v13 = (Function_201c294(v10) - 1) & 0xFF;
  v15 = GetPkmnData(v11, 0x6Fu, 0);
  if ( v15 )
    v19 = 26;
  else
    v19 = 25;
  Function_20237e8((int)v12, v14);
  if ( v15 != 2 )
  {
    Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v18 + 28), v19, v12);
    Function_201d78c(v10, a9);
  }
  Function_20237bc_FreeMsg((int)v12, v16);
  return Function_201a9a4(v10);
}

//----- (022450DC) --------------------------------------------------------
uint __fastcall Function_22450dc(int a1, int a2, int a3, int a4, int a5, int a6, uchar a7, uchar a8, ushort a9, char a10)
{
  int v10;
  ushort **v11;
  ushort *v12;
  int v13;
  int v14;
  int v15;
  int v17;
  uint v18;

  v10 = a2;
  v17 = a1;
  Function_201ada4_ClearTextBox(a2, a7);
  v11 = (ushort **)LoadFromMsgNARC(1, 26, 412, 0x5Du);
  v12 = Function_200b1ec_CallMsgDecrypt(v11, a9);
  Function_200b190((ushort *)v11);
  Function_201d78c(v10, a8);
  v14 = (Function_201c294(v10) - 1) & 0xFF;
  if ( a10 )
    v18 = 26;
  else
    v18 = 25;
  Function_20237e8((int)v12, v13);
  if ( a10 != 2 )
  {
    Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v17 + 28), v18, v12);
    Function_201d78c(v10, a8);
  }
  return Function_20237bc_FreeMsg((int)v12, v15);
}

//----- (022451B4) --------------------------------------------------------
uint __fastcall Function_22451b4(int a1)
{
  int v1;
  int v2;
  int v3;
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

  v1 = a1;
  v2 = 0;
  if ( (int)*(uchar *)(a1 + 18) > 0 )
  {
    v3 = a1;
    do
    {
      v4 = *(uint *)(v3 + 656);
      if ( v4 )
        *(uint *)(v3 + 656) = Function_2245ea8(v4);
      ++v2;
      v3 += 4;
    }
    while ( v2 < *(uchar *)(v1 + 18) );
  }
  v5 = *(uint *)(v1 + 680);
  if ( v5 )
  {
    Function_2246060(v5);
    *(uint *)(v1 + 680) = 0;
  }
  Function_2039794();
  Function_2002fa0(*(uint *)(v1 + 288), 2);
  Function_2002fa0(*(uint *)(v1 + 288), 0);
  Call_free1(*(uint *)(v1 + 288));
  *(uint *)(v1 + 288) = 0;
  Function_2245c50(v1 + 324);
  v6 = 0;
  v7 = v1;
  do
  {
    v8 = *(uint **)(v7 + 300);
    if ( v8 )
      Function_2007dc8(v8);
    ++v6;
    v7 += 4;
  }
  while ( v6 < 3 );
  Function_2007b6c(*(uint *)(v1 + 296));
  Function_200b190(*(ushort **)(v1 + 28));
  Function_200b3f0(*(uint **)(v1 + 32), v9);
  Function_20237bc_FreeMsg(*(uint *)(v1 + 36), v10);
  Function_20237bc_FreeMsg(*(uint *)(v1 + 40), v11);
  v13 = 0;
  v14 = v1;
  do
  {
    Function_20237bc_FreeMsg(*(uint *)(v14 + 44), v12);
    ++v13;
    v14 += 4;
  }
  while ( v13 < 4 );
  Function_2246244(v1 + 80);
  Function_224473c(*(uint *)(v1 + 76));
  Call_FS_CloseFile(*(int **)(v1 + 724));
  return Function_20242c4(*(uint *)(v1 + 292));
}

//----- (022452A0) --------------------------------------------------------
int __fastcall Function_22452a0(int a1)
{
  int v1;

  v1 = a1;
  Function_22452e4(a1);
  *(uint *)(v1 + 292) = Function_2024220(0x5Du, 0, 2, 0, 2, (void (*)(void))Function_2245cd0);
  *(uint *)(v1 + 76) = Function_2018340(0x5Du);
  Function_224531c(v1);
  return Function_2246214(*(uint *)(v1 + 76), v1 + 80);
}

//----- (022452E4) --------------------------------------------------------
uint Function_22452e4()
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

//----- (0224531C) --------------------------------------------------------
int __fastcall Function_224531c(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  uint *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v4 = a1;
  a1[181] = LoadFromNARC_8(150, 0x5Du, a3, a4);
  Function_2244678((int)v4);
  Function_224472c((int)v4);
  v4[7] = LoadFromMsgNARC(1, 26, 364, 0x5Du);
  v4[8] = Function_200b358(0x5Du);
  v4[9] = Function_2023790(800, 0x5Du);
  v4[10] = Function_2023790(800, 0x5Du);
  v5 = 0;
  v6 = v4;
  do
  {
    v6[11] = Function_2023790(64, 0x5Du);
    ++v5;
    ++v6;
  }
  while ( v5 < 4 );
  LoadFromNARC_PlFont1(0, 416, 93);
  LoadFromNARC_PlFont2(0, 384, 93);
  v4[74] = Function_200762c(0x5Du, v7, v8, v9);
  if ( Function_2035e38() )
  {
    Function_200966c(1, 16, v10, v11);
    Function_2009704(1);
    Function_2039734();
  }
  if ( Function_22454f8(v4, 0) == 1 )
  {
    Function_224246c((int)v4);
    Function_22424a0((int)v4);
  }
  else
  {
    Function_224260c((int)v4);
    Function_224266c((int)v4);
  }
  Function_201ffd0();
  return SetMainLoopFunctionCall((int)Function_224451c, (int)v4);
}

//----- (022453F8) --------------------------------------------------------
uint __fastcall Function_22453f8(int a1, int a2, int a3, int a4, uint *a5)
{
  int v5;
  int v6;
  int v7;
  uint result;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  result = Function_22461a0(*(uint *)(a1 + 680));
  if ( result < *(uchar *)(v5 + 18) )
  {
    Function_2007dc8(*(uint **)(v5 + 300));
    GetAdrOfPkmnInParty(a5, v7);
    Function_22455c4(v5);
    result = Function_2244ff8(v5, v5 + 80 + 16 * (v6 + 2), (uchar)v7, 0, 0, 15, 2, 0, 0, a5);
  }
  return result;
}

//----- (02245464) --------------------------------------------------------
int __fastcall Function_2245464(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  *(uint *)(a1 + 320) = malloc(0x5Du, 48);
  Call_FillMemWithValue(*(int **)(v1 + 320), 0, 0x30u);
  **(uint **)(v1 + 320) = *(uint *)(v1 + 696);
  *(uint *)(*(uint *)(v1 + 320) + 4) = *(uint *)(v1 + 312);
  *(uchar *)(*(uint *)(v1 + 320) + 17) = 1;
  *(uchar *)(*(uint *)(v1 + 320) + 18) = 1;
  *(uchar *)(*(uint *)(v1 + 320) + 19) = *(uchar *)(v1 + 18);
  *(uchar *)(*(uint *)(v1 + 320) + 20) = Function_22461a0(*(uint *)(v1 + 680));
  *(ushort *)(*(uint *)(v1 + 320) + 24) = 0;
  *(uint *)(*(uint *)(v1 + 320) + 28) = Function_207a274(*(uint *)(v1 + 316));
  *(uint *)(*(uint *)(v1 + 320) + 44) = 0;
  Function_208d720(*(uint *)(v1 + 320), (int)dword_22462DC);
  v2 = LoadTrainerDataAdress(*(uint *)(v1 + 316));
  return Function_208e9c0(*(uint *)(v1 + 320), v2);
}

//----- (022454F8) --------------------------------------------------------
BOOL __fastcall Function_22454f8(int a1, int a2)
{
  return *(uchar *)(a1 + 11) == a2;
}

//----- (02245508) --------------------------------------------------------
int __fastcall Function_2245508(int a1)
{
  int result;

  if ( a1 && a1 != 1 )
    result = 2;
  else
    result = 3;
  return result;
}

//----- (02245518) --------------------------------------------------------
BOOL __fastcall Function_2245518(int a1)
{
  return (*(uchar *)(a1 + 19) & 1) != 0;
}

//----- (02245528) --------------------------------------------------------
int __fastcall Function_2245528(int result, char a2)
{
  *(uchar *)(result + 19) = a2 & 1 | *(uchar *)(result + 19) & 0xFE;
  return result;
}

//----- (02245538) --------------------------------------------------------
int __fastcall Function_2245538(int a1, int a2, int a3)
{
  int v3;

  v3 = 0;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      if ( a3 != 1 )
        ((void (__fastcall *)(uint))dword_223AED4[0])(*(uchar *)(a1 + 9));
      v3 = 1;
    }
    else if ( a2 == 2 )
    {
      if ( a3 != 1 )
        ((void (__fastcall *)(uint))dword_223AED4[0])(*(uchar *)(a1 + 9));
      v3 = 2;
    }
  }
  else
  {
    if ( a3 != 1 )
      ((void (__fastcall *)(uint))dword_223AED4[0])(*(uchar *)(a1 + 9));
    v3 = 2;
  }
  return v3;
}

//----- (02245584) --------------------------------------------------------
int __fastcall Function_2245584(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  switch ( (uchar)a2 )
  {
    case 4:
      if ( ((int (__fastcall *)(uint))dword_223AED4[0])(*(uchar *)(a1 + 9)) != 1 )
        goto LABEL_6;
      result = 11;
      break;
    case 5:
      if ( ((int (__fastcall *)(uint))dword_223AED4[0])(*(uchar *)(a1 + 9)) != 1 )
        goto LABEL_6;
      result = 12;
      break;
    default:
LABEL_6:
      result = v2;
      break;
  }
  return result;
}

//----- (022455C4) --------------------------------------------------------
uint __fastcall Function_22455c4(int a1, int a2, int *a3, int a4, int a5, int a6)
{
  int v6;
  int v7;
  int *v8;
  int v9;
  int v10;
  uint result;

  v6 = 4 * a2;
  v7 = a1 + 300;
  v8 = a3;
  *(uint *)(v7 + v6) = Function_2245d88(*(uint *)(a1 + 296), 0);
  Function_2007dec(*(uint *)(v7 + v6), 6u, 0);
  v9 = GetPkmnData(v8, 5u, 0);
  v10 = GetPkmnData(v8, 0x70u, 0);
  result = GetPkmnBaseData2(v9, v10, 0x1Cu);
  if ( !result )
    result = Function_2245db8(*(uint *)(v7 + v6), a6);
  return result;
}

//----- (02245620) --------------------------------------------------------
BOOL __fastcall Function_2245620(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  if ( !((int (__fastcall *)(uint))dword_223AED4[0])(*(uchar *)(a1 + 9)) )
    return 0;
  switch ( v5 )
  {
    case 7:
      v3 = 29;
      Function_2245684(v4, 7);
      break;
    case 8:
      v3 = 30;
      Function_22456a8(v4, 8, v6);
      break;
    case 10:
      v3 = 32;
      Function_2245884(v4, 10, v6);
      break;
  }
  return Function_20359dc(v3, v4 + 728, 60) == 1;
}

//----- (02245684) --------------------------------------------------------
int __fastcall Function_2245684(int a1, short a2)
{
  int v2;
  short v3;
  int result;

  v2 = a1;
  v3 = a2;
  LoadTrainerDataAdress(*(uint *)(a1 + 316));
  result = 728;
  *(ushort *)(v2 + 728) = v3;
  return result;
}

//----- (0224569C) --------------------------------------------------------
int Function_105_224569c()
{
  return Function_203608c();
}

//----- (022456A8) --------------------------------------------------------
int __fastcall Function_22456a8(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;
  int v6;
  int v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int *v12;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  v4 = 0;
  do
  {
    ++v2;
    *(ushort *)(v3 + 728) = 0;
    v3 += 2;
  }
  while ( v2 < 60 );
  *(ushort *)(a1 + 728) = *(uchar *)(a1 + 17);
  result = *(uchar *)(a1 + 17);
  if ( result > 0 )
  {
    v6 = v1;
    v7 = v1 + 2;
    do
    {
      v8 = GetAdrOfPkmnInParty(*(uint **)(v1 + 696), *(ushort *)(v6 + 704));
      *(ushort *)(v7 + 728) = GetPkmnData(v8, 5u, 0);
      result = *(uchar *)(v1 + 17);
      ++v4;
      v6 += 2;
      v7 += 2;
    }
    while ( v4 < result );
  }
  v9 = 0;
  if ( result > 0 )
  {
    v10 = v1;
    v11 = v1 + 2 * (result + 1);
    do
    {
      v12 = GetAdrOfPkmnInParty(*(uint **)(v1 + 696), *(ushort *)(v10 + 704));
      *(ushort *)(v11 + 728) = GetPkmnData(v12, 0x6Fu, 0);
      result = *(uchar *)(v1 + 17);
      ++v9;
      v10 += 2;
      v11 += 2;
    }
    while ( v9 < result );
  }
  return result;
}

//----- (02245744) --------------------------------------------------------
int __fastcall Function_105_2245744(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  int v5;
  ushort *v6;
  int result;
  int v8;
  int v9;
  short *v10;
  int v11;
  short v12;
  int v13;
  short *v14;
  int v15;
  short v16;

  v4 = a4;
  v5 = a1;
  v6 = a3;
  ((void (__fastcall *)(uint))dword_223AA50[0])(*(uchar *)(a4 + 9));
  result = Function_203608c();
  if ( v5 != result )
  {
    *(uchar *)(v4 + 24) = *v6;
    v8 = *(uchar *)(v4 + 24);
    v9 = 0;
    if ( v8 > 0 )
    {
      v10 = v6 + 1;
      v11 = v4;
      do
      {
        v12 = *v10;
        ++v9;
        ++v10;
        *(ushort *)(v11 + 850) = v12;
        v8 = *(uchar *)(v4 + 24);
        v11 += 2;
      }
      while ( v9 < v8 );
    }
    v13 = 0;
    if ( v8 > 0 )
    {
      v14 = &v6[v8 + 1];
      v15 = v4;
      do
      {
        v16 = *v14;
        ++v13;
        ++v14;
        *(ushort *)(v15 + 854) = v16;
        v15 += 2;
      }
      while ( v13 < *(uchar *)(v4 + 24) );
    }
    result = 859;
    *(uchar *)(v4 + 859) = 1;
  }
  return result;
}

//----- (022457B8) --------------------------------------------------------
uint Function_105_22457b8()
{
  return ErrorHandler();
}

//----- (022457C0) --------------------------------------------------------
int __fastcall Function_22457c0(uchar *a1)
{
  uchar *v1;
  int result;
  int v3;
  uchar *v4;
  int v5;
  int v6;
  int v7;

  v1 = a1;
  v6 = ((int (__fastcall *)(uint))dword_223AA50[0])(a1[9]);
  if ( (uint)v1[19] << 26 >> 31 == 1 )
  {
    Function_201acf4((int)(v1 + 96));
    Function_201acf4((int)(v1 + 208));
    result = Function_201acf4((int)(v1 + 224));
  }
  else
  {
    if ( v1[859] == 1 )
    {
      v3 = 0;
      if ( v6 > 0 )
      {
        v4 = v1;
        v5 = (int)(v1 + 80);
        do
        {
          v7 = 16 * (v3 + 8);
          Function_201ada4_ClearTextBox(v5 + v7, 0);
          if ( v3 < v1[24] )
            Function_22450dc((int)v1, v5 + v7, 0, 0, 15, 2, 0, 0, *((ushort *)v4 + 425), *((ushort *)v4 + 427));
          Function_201a9a4(v5 + v7);
          ++v3;
          v4 += 2;
        }
        while ( v3 < v6 );
      }
      Function_2244f84((int)v1, (int)(v1 + 96), 0, 0, 0);
    }
    result = 859;
    v1[859] = 0;
  }
  return result;
}

//----- (02245884) --------------------------------------------------------
ushort *__fastcall Function_2245884(ushort *result, short a2, short a3)
{
  result[364] = a2;
  result[365] = a3;
  result[366] = result[352];
  result[367] = result[353];
  return result;
}

//----- (022458A4) --------------------------------------------------------
int __fastcall Function_105_22458a4(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  int v5;
  ushort *v6;
  int result;

  v4 = a1;
  v5 = a4;
  v6 = a3;
  ++*(uchar *)(a4 + 858);
  result = Function_203608c();
  if ( v4 != result )
  {
    *(ushort *)(v5 + 848) = v6[1] & 0xFF;
    if ( Function_203608c() )
    {
      result = *(ushort *)(v5 + 848);
      if ( result == 1 )
      {
        *(uchar *)(v5 + 19) &= 0xF7u;
        *(ushort *)(v5 + 704) = v6[2] & 0xFF;
        result = v6[3] & 0xFF;
        *(ushort *)(v5 + 706) = result;
      }
    }
    else if ( (uint)*(uchar *)(v5 + 19) << 28 >> 31 == 1 )
    {
      result = 848;
      *(ushort *)(v5 + 848) = 0;
    }
    else
    {
      result = *(ushort *)(v5 + 848);
      if ( result == 1 )
      {
        *(ushort *)(v5 + 704) = v6[2] & 0xFF;
        result = v6[3] & 0xFF;
        *(ushort *)(v5 + 706) = result;
      }
    }
  }
  return result;
}

//----- (02245934) --------------------------------------------------------
int __fastcall Function_2245934(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = a1;
  if ( Function_22454f8(a1, 0) == 1 )
  {
    v4 = LOWORD(dword_2246364[v2]);
    v5 = HIWORD(dword_2246364[v2]);
  }
  else if ( ((int (__fastcall *)(uint))dword_223AED4[0])(*(uchar *)(v3 + 9)) )
  {
    if ( *(uchar *)(v3 + 18) == 2 )
    {
      v4 = LOWORD(dword_22462EC[v2]);
      v5 = HIWORD(dword_22462EC[v2]);
    }
    else
    {
      v4 = (ushort)aPxpPPP[2 * v2 + 6];
      v5 = (ushort)aPxpPPP[2 * v2 + 7];
    }
  }
  else
  {
    v4 = (ushort)aPxpPPP[2 * v2];
    v5 = (ushort)aPxpPPP[2 * v2 + 1];
  }
  return Function_2245e54(v3 + 324, v4, v5, 93);
}

//----- (022459B0) --------------------------------------------------------
int __fastcall Function_22459b0(int a1, int a2, int a3, int a4)
{
  char v4;

  switch ( v4 )
  {
    case 0:
    case 1:
      a3 = 80;
      a4 = 40;
      break;
    case 4:
    case 5:
      a3 = 128;
      a4 = 40;
      break;
    case 11:
      a3 = 80;
      a4 = 40;
      break;
    case 12:
      a3 = 80;
      a4 = 40;
      break;
    default:
      return Function_2245dc4(a1 + 324, a2, a3, a4, 93);
  }
  return Function_2245dc4(a1 + 324, a2, a3, a4, 93);
}

//----- (02245A04) --------------------------------------------------------
int __fastcall Function_2245a04(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = a1;
  if ( a2 != 2 && a2 != 3 )
  {
    ErrorHandler();
    v4 = 0;
    v5 = 0;
  }
  else
  {
    v4 = 216;
    v5 = 40;
  }
  return Function_2245dc4(v3 + 324, v2, v4, v5, 93);
}

//----- (02245A30) --------------------------------------------------------
int __fastcall Function_2245a30(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( *(uint *)(a1 + 688) )
  {
    Function_2245e1c();
    *(uint *)(v1 + 688) = 0;
  }
  result = *(uint *)(v1 + 692);
  if ( result )
  {
    Function_2245e1c();
    result = 692;
    *(uint *)(v1 + 692) = 0;
  }
  return result;
}

//----- (02245A64) --------------------------------------------------------
uint __fastcall Function_2245a64(int a1)
{
  int v1;

  v1 = a1;
  Function_2019060(1u, 1);
  Function_2019690(1u, 32, 0, 0x5Du);
  Function_2019ebc(*(uint **)(v1 + 76), 1u);
  Function_2246214(*(uint *)(v1 + 76), v1 + 80);
  return Function_201ff0c(2u, 1);
}

//----- (02245A98) --------------------------------------------------------
int __fastcall Function_2245a98(int a1)
{
  int v1;

  v1 = a1;
  Function_200dc9c(a1, 1);
  return Function_201ad10(v1);
}

//----- (02245AAC) --------------------------------------------------------
uint __fastcall Function_2245aac(int a1)
{
  int v1;
  int v2;
  char *v3;
  int *v4;
  int v5;

  v1 = a1;
  Function_2245c98();
  Function_20a7944();
  Function_200a784(0, 128, 0, 32, 0, 0x80u, 0, 0x20u, 0x5Du);
  v3 = &byte_2246444;
  *(uint *)v1 = Function_20095c4(9, v1 + 4, 93, v2);
  v4 = 0;
  v5 = v1;
  do
  {
    *(uint *)(v5 + 300) = Function_2009714((uchar)*v3, v4, 0x5Du);
    v4 = (int *)((char *)v4 + 1);
    ++v3;
    v5 += 4;
  }
  while ( (int)v4 < 4 );
  *(uint *)(v1 + 316) = Function_200985c(*(uint *)(v1 + 300), 151, 0, 1, 0, 1, 93);
  *(uint *)(v1 + 320) = Function_20098b8(*(uint *)(v1 + 304), 151, 36, 0, 0, 1, 8, 93);
  *(uint *)(v1 + 324) = Function_2009918(*(uint *)(v1 + 308), 151, 2, 1, 0, 2u, 93);
  *(uint *)(v1 + 328) = Function_2009918(*(uint *)(v1 + 312), 151, 1, 1, 0, 3u, 93);
  Function_200a328(*(int **)(v1 + 316));
  Function_200a5c8(*(int **)(v1 + 320));
  Function_201ff74(0x10u, 1);
  return Function_201ff0c(0x10u, 1);
}

//----- (02245BA4) --------------------------------------------------------
int __fastcall Function_2245ba4(int *a1, int a2, uint a3, int a4, int a5, char a6)
{
  int *v6;
  int v7;
  uint v8;
  int v9;
  int v11;
  char *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  short v19;
  int v20;
  int v21;
  int v22;
  char v23;

  v6 = a1;
  v7 = a4;
  v8 = a3;
  Function_20093b4((int)&v23, a2, a2, a2, a2, -1, -1, 0, a5, a1[75], a1[76], a1[77], a1[78], 0, 0);
  v11 = *v6;
  v12 = &v23;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 4096;
  v17 = 4096;
  v18 = 4096;
  v19 = 0;
  v20 = v7;
  if ( a6 )
    v21 = 2;
  else
    v21 = 1;
  v22 = 93;
  if ( a6 == 1 )
    v14 += 786432;
  v9 = Function_2021aa0((uint **)&v11);
  Function_2021cc8(v9, 1);
  Function_2021d6c(v9, v8);
  return v9;
}

//----- (02245C50) --------------------------------------------------------
int *__fastcall Function_2245c50(int **a1)
{
  int **v1;
  uint v2;

  v1 = a1;
  Function_200a4e4(a1[79]);
  Function_200a6dc(v1[80]);
  v2 = 0;
  do
  {
    Function_2009754(v1[v2 + 75]);
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 < 4 );
  Function_2021964(*v1);
  Function_200a878();
  Function_201e958();
  return Function_201f8b4();
}

//----- (02245C98) --------------------------------------------------------
int Function_2245c98()
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = 32;
  v2 = 2048;
  v3 = 2048;
  v4 = 93;
  Function_201e88c(&v1, 1048592, 1048592);
  Function_201f834(8, 0x5Du);
  Function_201e994();
  return Function_201f8e4();
}

//----- (02245CD0) --------------------------------------------------------
int *Function_2245cd0()
{
  int *result;

  Function_201ff0c(1u, 1);
  REG_BG0CNT &= 0xFFFCu;
  GFX_CONTROL &= 0xCFFDu;
  GFX_CONTROL = GFX_CONTROL & 0xCFFF | 0x10;
  GFX_CONTROL &= 0xCFFBu;
  GFX_CONTROL = GFX_CONTROL & 0xCFFF | 8;
  GFX_CONTROL &= 0xCFDFu;
  G3X_SetFog(0, 0, 0, 0);
  G3X_SetClearColor(0, 0, 0x7FFF, 63, 0);
  result = &GFX_VIEWPORT;
  GFX_VIEWPORT = -1073807360;
  return result;
}

//----- (02245D50) --------------------------------------------------------
int *__fastcall Function_2245d50(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int v5;
  int *result;

  v1 = a1;
  Call_G3X_Reset();
  MATRIX_CONTROL = 2;
  MATRIX_IDENTITY = 0;
  v2 = Function_20af480();
  Function_20a73c0((int)v2, v3, v4, v5);
  Function_2007768(v1);
  result = &GFX_FLUSH;
  GFX_FLUSH = 1;
  return result;
}

//----- (02245D88) --------------------------------------------------------
int __fastcall Function_2245d88(uint *a1, int a2, int a3, short a4, short a5, int a6)
{
  uint *v6;
  int v7;
  short v8;
  char v10;

  v6 = a1;
  v7 = a2;
  v8 = a4;
  Function_2075ef4((int)&v10, a3, 2u);
  return Function_2007c34(v6, &v10, v8, a5, a6, v7, 0, 0);
}

//----- (02245DB8) --------------------------------------------------------
int __fastcall Function_2245db8(int a1, int a2)
{
  return Function_2007dec(a1, 0x23u, a2);
}

//----- (02245DC4) --------------------------------------------------------
uchar *__fastcall Function_2245dc4(int *a1, uint a2, int a3, int a4, uint a5)
{
  int *v5;
  uint v6;
  int v7;
  int v8;
  uchar *v9;
  uchar *v10;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  v9 = (uchar *)malloc(a5, 12);
  v10 = v9;
  *v9 = 0;
  v9[1] = 0;
  v9[2] = 0;
  v9[3] = 0;
  v9[4] = 0;
  v9[5] = 0;
  v9[6] = 0;
  v9[7] = 0;
  v9[8] = 0;
  v9[9] = 0;
  v9[10] = 0;
  v9[11] = 0;
  *(uint *)v9 = v7;
  *((uint *)v9 + 1) = v8;
  *((uint *)v9 + 2) = Function_2245ba4(v5, 0, v6, 0, 1, 0);
  Function_2245e30(v10, v7, v8);
  return v10;
}

//----- (02245E1C) --------------------------------------------------------
int __fastcall Function_2245e1c(int a1)
{
  int v1;

  v1 = a1;
  Function_2021bd4(*(uint *)(a1 + 8));
  free(v1);
  return 0;
}

//----- (02245E30) --------------------------------------------------------
int __fastcall Function_2245e30(int a1, int a2, int a3)
{
  int v4;
  int v5;

  v4 = a2 << 12;
  v5 = a3 << 12;
  return Function_2021c50(*(uint **)(a1 + 8), &v4);
}

//----- (02245E48) --------------------------------------------------------
int __fastcall Function_2245e48(int a1)
{
  return Function_2021fd0(*(uint *)(a1 + 8));
}

//----- (02245E54) --------------------------------------------------------
int __fastcall Function_2245e54(int *a1, int a2, int a3, uint a4)
{
  int *v4;
  int v5;
  int v6;
  int v7;
  uchar *v8;
  int v9;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = malloc(a4, 16);
  v8 = (uchar *)v7;
  v9 = 16;
  do
  {
    *v8++ = 0;
    --v9;
  }
  while ( v9 );
  *(ushort *)v7 = 0;
  *(uint *)(v7 + 4) = v5;
  *(uint *)(v7 + 8) = v6;
  *(uint *)(v7 + 12) = Function_2245ba4(v4, 0, 6u, 0, 0, 0);
  Function_2245f14(v7, v5, v6);
  Function_2021e90(*(uint *)(v7 + 12), 1);
  return v7;
}

//----- (02245EA8) --------------------------------------------------------
int __fastcall Function_2245ea8(int a1)
{
  int v1;

  v1 = a1;
  Function_2021bd4(*(uint *)(a1 + 12));
  free(v1);
  return 0;
}

//----- (02245EBC) --------------------------------------------------------
uint __fastcall Function_2245ebc(int a1, int a2)
{
  return Function_2021cac(*(uint *)(a1 + 12), a2);
}

//----- (02245EC8) --------------------------------------------------------
int __fastcall Function_2245ec8(uint *a1, int a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  uint *v12;
  uint *v13;
  int v14;
  int result;
  int v16;
  int v17;
  int v18;

  v4 = a2;
  v5 = a1;
  v6 = *(uint *)(a2 + 12);
  v7 = a3;
  v8 = a4;
  Function_2021d28();
  v10 = v9[1];
  v16 = *v9;
  v17 = v10;
  v18 = v9[2];
  v16 += v7 << 12;
  v17 = v10 + (v8 << 12);
  Function_2021c50(*(uint **)(v4 + 12), &v16);
  v11 = *(uint *)(v4 + 12);
  Function_2021d28();
  v14 = v12[1];
  v13 = v12 + 2;
  *v5 = *v12;
  v5[1] = v14;
  result = v12[2];
  v5[2] = *v13;
  return result;
}

//----- (02245F14) --------------------------------------------------------
int __fastcall Function_2245f14(int a1, int a2, int a3)
{
  int v4;
  int v5;

  v4 = a2 << 12;
  v5 = a3 << 12;
  return Function_2021c50(*(uint **)(a1 + 12), &v4);
}

//----- (02245F2C) --------------------------------------------------------
void __fastcall Function_2245f2c(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 12);
  Function_2021d28();
}

//----- (02245F38) --------------------------------------------------------
ushort *__fastcall Function_2245f38(ushort *result, short a2)
{
  *result = a2;
  return result;
}

//----- (02245F3C) --------------------------------------------------------
int __fastcall Function_2245f3c(ushort *a1)
{
  return *a1 & 0xFF;
}

//----- (02245F44) --------------------------------------------------------
ushort *__fastcall Function_2245f44(ushort *a1)
{
  return Function_2245f38(a1, 1);
}

//----- (02245F50) --------------------------------------------------------
ushort *__fastcall Function_2245f50(ushort *a1)
{
  return Function_2245f38(a1, 0);
}

//----- (02245F5C) --------------------------------------------------------
int __fastcall Function_2245f5c(int a1, int a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int v7;
  int v8;
  int v9;

  v9 = a4;
  v4 = a1;
  Function_2245f2c(a1);
  v7 = (*v5 / 4096 + 248) << 12;
  v8 = v5[1];
  return Function_2021c50(*(uint **)(v4 + 12), &v7);
}

//----- (02245F88) --------------------------------------------------------
int __fastcall Function_2245f88(int a1)
{
  return *(uint *)(a1 + 4);
}

//----- (02245F8C) --------------------------------------------------------
int __fastcall Function_2245f8c(int a1)
{
  return *(uint *)(a1 + 8);
}

//----- (02245F90) --------------------------------------------------------
int __fastcall Function_2245f90(int a1, uint a2)
{
  int v2;
  uint v3;

  v2 = a1;
  v3 = a2;
  Function_2021ce4(*(uint *)(a1 + 12), 4096);
  return Function_2021d6c(*(uint *)(v2 + 12), v3);
}

//----- (02245FAC) --------------------------------------------------------
int __fastcall Function_2245fac(int a1, char a2)
{
  return Function_2021e90(*(uint *)(a1 + 12), a2);
}

//----- (02245FB8) --------------------------------------------------------
int __fastcall Function_2245fb8(int *a1, char a2, char a3, int a4, uchar a5, int a6, int a7)
{
  int *v7;
  char v8;
  int v9;
  int v10;
  uchar *v11;
  int v12;
  char v14;
  int v15;
  int v16;
  int v17;

  v17 = a4;
  v7 = a1;
  v8 = a2;
  v14 = a3;
  v9 = a4;
  v10 = malloc(0x5Du, 20);
  v11 = (uchar *)v10;
  v12 = 20;
  do
  {
    *v11++ = 0;
    --v12;
  }
  while ( v12 );
  *(uchar *)v10 = v8;
  *(uchar *)(v10 + 16) = v14;
  *(uchar *)(v10 + 1) = v9;
  *(uchar *)(v10 + 2) = a5;
  *(uint *)(v10 + 4) = a6;
  *(uint *)(v10 + 8) = a7;
  if ( a7 )
  {
    *(uint *)(v10 + 12) = Function_2245ba4(v7, 0, *(uchar *)(*(uint *)(v10 + 8) + a5), 0, 0, 0);
  }
  else if ( v9 )
  {
    *(uint *)(v10 + 12) = Function_2245ba4(v7, 0, 9u, 0, 0, 0);
  }
  else
  {
    *(uint *)(v10 + 12) = Function_2245ba4(v7, 0, 8u, 0, 0, 0);
  }
  v15 = *(short *)(*(uint *)(v10 + 4) + 4 * *(uchar *)(v10 + 2)) << 12;
  v16 = *(short *)(*(uint *)(v10 + 4) + 4 * *(uchar *)(v10 + 2) + 2) << 12;
  Function_2021c50(*(uint **)(v10 + 12), &v15);
  return v10;
}

//----- (02246060) --------------------------------------------------------
int __fastcall Function_2246060(int a1)
{
  int v1;

  v1 = a1;
  Function_2021bd4(*(uint *)(a1 + 12));
  free(v1);
  return 0;
}

//----- (02246074) --------------------------------------------------------
uint __fastcall Function_2246074(int a1, int a2)
{
  return Function_2021cac(*(uint *)(a1 + 12), a2);
}

//----- (02246080) --------------------------------------------------------
int __fastcall Function_2246080(uchar *a1)
{
  uchar *v1;
  int result;
  int v3;
  uint v4;
  uint v5;
  uint v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int *v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v1 = a1;
  result = a1[3];
  if ( result != 1 )
  {
    result = dword_21BF6C4;
    if ( dword_21BF6C4 )
    {
      if ( v1[1] == 2 )
      {
        if ( dword_21BF6C4 & 0x20 )
        {
          if ( v1[2] )
            --v1[2];
          else
            v1[2] = *v1 - 1;
        }
        else if ( dword_21BF6C4 & 0x10 )
        {
          v3 = v1[2];
          if ( v3 == *v1 - 1 )
            v1[2] = 0;
          else
            v1[2] = v3 + 1;
        }
        else if ( dword_21BF6C4 & 0x80 )
        {
          v4 = v1[16];
          v5 = v1[2];
          if ( v5 >= v4 )
          {
            if ( v5 == *v1 - 1 )
              v1[2] = 0;
            else
              v1[2] = v5 + 1;
          }
          else
          {
            v1[2] = v4;
          }
        }
        else if ( dword_21BF6C4 & 0x40 )
        {
          v6 = v1[2];
          if ( v6 >= v1[16] )
            v1[2] = v6 - 1;
          else
            v1[2] = *v1 - 1;
        }
      }
      else
      {
        if ( v1[1] )
        {
          v7 = 128;
          v8 = 64;
        }
        else
        {
          v7 = 16;
          v8 = 32;
        }
        if ( v7 & dword_21BF6C4 )
        {
          if ( ++v1[2] >= (uint)*v1 )
            v1[2] = 0;
        }
        else if ( dword_21BF6C4 & v8 )
        {
          if ( !v1[2] )
            v1[2] = *v1;
          --v1[2];
        }
      }
      v9 = *((uint *)v1 + 2);
      if ( v9 )
        Function_2021dcc(*((uint *)v1 + 3), *(uchar *)(v9 + v1[2]));
      v10 = *((uint *)v1 + 3);
      Function_2021d28();
      v12 = v11[1];
      v13 = *v11;
      v14 = v12;
      v15 = v11[2];
      v13 = *(short *)(*((uint *)v1 + 1) + 4 * v1[2]) << 12;
      v14 = *(short *)(*((uint *)v1 + 1) + 4 * v1[2] + 2) << 12;
      result = Function_2021c50(*((uint **)v1 + 3), &v13);
    }
  }
  return result;
}

//----- (022461A0) --------------------------------------------------------
int __fastcall Function_22461a0(int a1)
{
  return *(uchar *)(a1 + 2);
}

//----- (022461A4) --------------------------------------------------------
int __fastcall Function_22461a4(int a1, int a2)
{
  int v2;
  int result;

  *(uchar *)(a1 + 3) = a2;
  v2 = *(uint *)(a1 + 12);
  if ( a2 )
    result = Function_2021dcc(v2, 0xDu);
  else
    result = Function_2021dcc(v2, 8u);
  return result;
}

//----- (022461C0) --------------------------------------------------------
int __fastcall Function_22461c0(int a1, char a2)
{
  int v2;
  int v3;
  int v4;
  int *v5;
  int v6;
  int v8;
  int v9;
  int v10;

  v2 = a1;
  *(uchar *)(a1 + 2) = a2;
  v3 = *(uint *)(a1 + 8);
  if ( v3 )
    Function_2021dcc(*(uint *)(a1 + 12), *(uchar *)(v3 + *(uchar *)(a1 + 2)));
  v4 = *(uint *)(v2 + 12);
  Function_2021d28();
  v6 = v5[1];
  v8 = *v5;
  v9 = v6;
  v10 = v5[2];
  v8 = *(short *)(*(uint *)(v2 + 4) + 4 * *(uchar *)(v2 + 2)) << 12;
  v9 = *(short *)(*(uint *)(v2 + 4) + 4 * *(uchar *)(v2 + 2) + 2) << 12;
  return Function_2021c50(*(uint **)(v2 + 12), &v8);
}

//----- (02246214) --------------------------------------------------------
int __fastcall Function_2246214(uint *a1, int a2)
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
    Function_201a8d4(v2, v3 + 16 * v4, (uchar *)&dword_2246458[2 * v4]);
    Function_201ada4_ClearTextBox(v3 + 16 * v4, 0);
    result = (v4 + 1) << 24;
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 < 0xA );
  return result;
}

//----- (02246244) --------------------------------------------------------
uint __fastcall Function_2246244(int a1)
{
  int v1;
  uint v2;
  uint result;

  v1 = a1;
  v2 = 0;
  do
  {
    Function_201a8fc(v1 + 16 * v2);
    result = (v2 + 1) << 16;
    v2 = result >> 16;
  }
  while ( result >> 16 < 0xA );
  return result;
}

//----- (02246260) --------------------------------------------------------
char *__fastcall Function_2246260(uint *a1, int a2)
{
  int v2;

  v2 = a2;
  Function_200daa4(a1, 1u, 1015, 11, 0, 93);
  return Function_200dc48(v2, 1, 1015, 0xBu);
}

//----- (0224628C) --------------------------------------------------------
uint __fastcall Function_224628c(int a1, uchar a2)
{
  uchar v2;
  uint **v3;
  int v4;

  v2 = a2;
  v3 = (uint **)a1;
  v4 = Function_201c290(a1);
  Function_200dd0c(*v3, v4, 985, 10, v2, 93);
  Function_201ada4_ClearTextBox((int)v3, 15);
  return Function_200e060((int)v3, 1, 985, 0xAu);
}

