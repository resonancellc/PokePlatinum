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
  Function_22424c8(v6);
  Function_2017fc8(3, 98, 0x20000);
  v7 = MallocSomeDataAndStorePtrInOverlayData1c(v4, 668, 0x62u);
  Call_FillMemWithValue((int *)v7, 0, 0x29Cu);
  *(uint *)(v7 + 72) = Function_2018340(0x62u);
  *(uint *)v7 = v4;
  v8 = LoadPtrToOverWorldDataIn18(v4);
  *(uint *)(v7 + 184) = *(uint *)v8;
  *(uchar *)(v7 + 9) = *(uchar *)(v8 + 4);
  *(uint *)(v7 + 552) = v8 + 6;
  *(uint *)(v7 + 180) = LoadPlayerDataAdress(*(uint *)(v7 + 184));
  *(uint *)(v7 + 556) = *(uint *)(v8 + 12);
  *(uint *)(v7 + 560) = *(uint *)(v8 + 8);
  *(uint *)(v7 + 564) = *(uint *)(v8 + 20);
  *(ushort *)(v7 + 28) = *(ushort *)(v8 + 24) + 1;
  *(uchar *)(v7 + 13) = *(uchar *)(v8 + 5);
  *(uchar *)(v7 + 660) = -1;
  *(uchar *)(v7 + 24) = -1;
  *(uchar *)(v7 + 31) = 117;
  Function_2242500(v7);
  if ( ((int (__fastcall *)(uint))dword_223B5B0[0])(*(uchar *)(v7 + 9)) == 1 )
    Function_209ba80(v7);
  *v5 = 0;
  return 1;
}

//----- (02241B9C) --------------------------------------------------------
int __fastcall Function_2241b9c(int a1, int *a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = LoadOverlayData1c(a1);
  v4 = v3;
  if ( *(uchar *)(v3 + 24) != 255 && *v2 == 2 && !*(ushort *)(v3 + 16) )
  {
    Function_2243200();
    Function_2242d5c(v4, v2, 3);
  }
  v5 = *v2;
  if ( (uint)*v2 <= 6 )
    JUMPOUT(__CS__, *((short *)&off_2241BDA + v5) + 35920860);
  switch ( (uchar)v5 )
  {
    case 0:
      goto LABEL_11;
    case 1:
      if ( Function_2241e14(v4) != 1 )
        return 0;
      Function_2242d5c(v4, v2, 0);
LABEL_11:
      if ( Function_2241d28(v4) == 1 )
        Function_2242d5c(v4, v2, 2);
      goto LABEL_33;
    case 2:
      if ( Function_2241e5c(v4) != 1 )
        goto LABEL_33;
      if ( *(uchar *)(v4 + 23) == 1 )
      {
        Function_2242d5c(v4, v2, 3);
      }
      else
      {
        if ( *(uchar *)(v4 + 11) == 1 )
        {
          Function_2242d5c(v4, v2, 1);
          return 0;
        }
        if ( ((int (__fastcall *)(uint))dword_223B5B0[0])(*(uchar *)(v4 + 9)) == 1 )
          Function_2242d5c(v4, v2, 4);
        else
          Function_2242d5c(v4, v2, 5);
      }
LABEL_33:
      Function_20219f8(*(uint *)(v4 + 192));
      return 0;
    case 3:
      if ( Function_2242108(v4) == 1 )
      {
        if ( *(uchar *)(v4 + 25) == 1 )
        {
          *(uchar *)(v4 + 25) = 0;
          Function_2242d5c(v4, v2, 2);
        }
        else if ( ((int (__fastcall *)(uint))dword_223B5B0[0])(*(uchar *)(v4 + 9)) == 1 )
        {
          Function_2242d5c(v4, v2, 4);
        }
        else
        {
          Function_2242d5c(v4, v2, 5);
        }
      }
      goto LABEL_33;
    case 4:
      if ( Function_224230c(v4) == 1 )
        Function_2242d5c(v4, v2, 5);
      goto LABEL_33;
    case 5:
      if ( Function_2242344(v4) != 1 )
        goto LABEL_33;
      return 1;
    case 6:
      if ( Function_22423ac(v4) == 1 )
        Function_2242d5c(v4, v2, 4);
      goto LABEL_33;
    default:
      goto LABEL_33;
  }
}

//----- (02241CF0) --------------------------------------------------------
int __fastcall Function_2241cf0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  **(ushort **)(v2 + 552) = *(uchar *)(v2 + 13);
  Function_22423e8();
  FreeSomeDataAndStore0InOverlayData1c(v1);
  SetMainLoopFunctionCall(0, 0);
  Function_201807c(98);
  UnloadOverlay(104, v3, v4, v5);
  return 1;
}

//----- (02241D28) --------------------------------------------------------
int __fastcall Function_2241d28(int a1)
{
  int v1;
  int result;

  v1 = a1;
  switch ( *(uchar *)(a1 + 8) )
  {
    case 0:
      if ( !*(ushort *)(a1 + 18) && ((int (__fastcall *)(uint))dword_223B5B0[0])(*(uchar *)(a1 + 9)) == 1 )
      {
        Function_20365f4();
        Function_20364f0(112);
      }
      ++*(uchar *)(v1 + 8);
      goto LABEL_14;
    case 1:
      if ( *(ushort *)(a1 + 18) || ((int (__fastcall *)(uint))dword_223B5B0[0])(*(uchar *)(a1 + 9)) != 1 )
      {
        ++*(uchar *)(v1 + 8);
      }
      else if ( Function_2036540(112) == 1 )
      {
        Function_20365f4();
        *(ushort *)(v1 + 18) = 1;
        ++*(uchar *)(v1 + 8);
      }
      goto LABEL_14;
    case 2:
      Function_2241dd4();
      Function_200f174(0, 1, 1, 0, 6, 3, 98);
      ++*(uchar *)(v1 + 8);
      goto LABEL_14;
    case 3:
      if ( Function_200f2ac() != 1 )
        goto LABEL_14;
      result = 1;
      break;
    default:
LABEL_14:
      result = 0;
      break;
  }
  return result;
}

//----- (02241DD4) --------------------------------------------------------
int __fastcall Function_2241dd4(int a1)
{
  int v1;

  v1 = a1;
  Function_2242b38(a1, a1 + 124);
  Function_2242c2c(v1, v1 + 124);
  return Function_2242ac4(v1, v1 + 108);
}

//----- (02241E14) --------------------------------------------------------
int __fastcall Function_2241e14(int a1, int a2, int a3, int a4)
{
  int v4;

  v4 = a1;
  if ( *(uchar *)(a1 + 8) || CallOverlayDataJumpTable(*(uint *)(a1 + 4), a2, a3, a4) != 1 )
    return 0;
  *(uint *)(v4 + 548) = *(uchar *)(*(uint *)(v4 + 188) + 20);
  free(*(uint *)(v4 + 188));
  free(*(uint *)(v4 + 4));
  *(uint *)(v4 + 4) = 0;
  Function_224248c(v4);
  *(ushort *)(v4 + 16) = 0;
  return 1;
}

//----- (02241E5C) --------------------------------------------------------
int __fastcall Function_2241e5c(int a1)
{
  int v1;
  bool v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int result;
  uint v8;
  uint v9;
  uint v10;
  int v11;
  uint v12;
  ushort *v13;
  int v14;
  int v15;
  int v16;

  v1 = a1;
  switch ( *(uchar *)(a1 + 8) )
  {
    case 0:
      *(uchar *)(a1 + 11) = 0;
      *(uchar *)(a1 + 8) = 1;
      return 0;
    case 1:
      Function_2242d64();
      if ( !(dword_21BF6C4 & 1) )
        return 0;
      if ( ((int (__fastcall *)(uint))dword_223B5A4[0])(*(uchar *)(v1 + 13)) == 254 )
      {
        Function_2005748(0x5DDu);
        Function_200f174(0, 0, 0, 0, 6, 1, 98);
        *(ushort *)(v1 + 16) = 1;
        *(uchar *)(v1 + 8) = 6;
        return 0;
      }
      v2 = Function_22430b0(v1) == 1;
      v6 = *(uchar *)(v1 + 13);
      if ( v2 )
      {
        if ( ((int (__fastcall *)(int))dword_223B5A4[0])(v6) != 9 )
        {
          Function_2005748(0x5F3u);
          return 0;
        }
      }
      else
      {
        v8 = ((int (__fastcall *)(int, int, int, int))Function_2243090)(v6, v3, v4, v5);
        if ( (uint)Function_20301e0(v8, *(uint *)(v1 + 560)) >= 0xA )
        {
          Function_2005748(0x5F3u);
          return 0;
        }
        if ( ((int (__fastcall *)(uint))dword_223B5A4[0])(*(uchar *)(v1 + 13)) == 9 )
        {
          Function_2005748(0x5F3u);
          return 0;
        }
      }
      Function_2005748(0x5DDu);
      if ( !((int (__fastcall *)(uint))dword_223B5B0[0])(*(uchar *)(v1 + 9)) )
      {
        Function_2242fac(*(uint *)(v1 + 72), *(uchar *)(v1 + 13), 1);
        Function_201c3c0(*(uint *)(v1 + 72), 3);
      }
      *(ushort *)(v1 + 20) = 8;
      *(uchar *)(v1 + 8) = 2;
      return 0;
    case 2:
      if ( --*(ushort *)(a1 + 20) )
        return 0;
      if ( !((int (__fastcall *)(uint))dword_223B5B0[0])(*(uchar *)(a1 + 9)) )
      {
        Function_2243224(v1);
        *(uchar *)(v1 + 8) = 3;
        return 0;
      }
      v9 = Function_2027b50(*(ushort **)(v1 + 180));
      Function_2243758(v1 + 76, v9);
      *(uchar *)(v1 + 10) = Function_2242978(v1, 0, 1);
      *(uchar *)(v1 + 26) = *(uchar *)(v1 + 13);
      result = 1;
      *(uchar *)(v1 + 23) = 1;
      return result;
    case 3:
      v10 = Function_2001be0(*(uint *)(a1 + 152));
      if ( v10 > 0xFFFFFFFE )
        return 0;
      if ( v10 >= 0xFFFFFFFE )
        goto LABEL_34;
      if ( v10 > 1 )
        return 0;
      if ( v10 )
      {
        if ( v10 == 1 )
        {
LABEL_34:
          Function_2243200(v1);
          Function_22432ac(v1);
          *(uchar *)(v1 + 8) = 1;
        }
        return 0;
      }
      Function_2243200(v1);
      if ( Function_2243098(v1) == 1 && !Function_22430b0(v1) )
      {
        *(uchar *)(v1 + 31) = *(uchar *)(v1 + 13);
        *(uchar *)(v1 + 8) = 4;
        return 0;
      }
      Function_20057a4(1500, 0);
      Function_2005748(0x624u);
      v11 = *(uchar *)(v1 + 31);
      if ( v11 != 117 )
        *(uchar *)(v1 + 13) = v11;
      return 1;
    case 4:
      v12 = Function_2027b50(*(ushort **)(a1 + 180));
      Function_2243758(v1 + 76, v12);
      v13 = (ushort *)LoadPlayerDataAdress(*(uint *)(v1 + 184));
      Function_2027ac0(v13);
      *(uchar *)(v1 + 10) = Function_2242918(v1, v1 + 76, 32);
      Function_201a954(v1 + 76, v14);
      *(uchar *)(v1 + 8) = 5;
      return 0;
    case 5:
      if ( !Function_201d724(*(uchar *)(a1 + 10)) )
      {
        *(uchar *)(v1 + 30) = 1;
        Function_22432d4(v1);
        Function_22436b0(*(uint *)(v1 + 540), 1);
        Function_2242fac(*(uint *)(v1 + 72), 19, 0);
        Function_2242f4c(v1, *(uint *)(v1 + 72));
        *(uchar *)(v1 + 13) = 19;
        v15 = Function_2242f24(v1);
        v16 = Function_2242f3c(v1);
        Function_2243670(*(uint *)(v1 + 540), v15, v16);
        *(uchar *)(v1 + 8) = 0;
      }
      return 0;
    case 6:
      if ( Function_200f2ac() != 1 )
        return 0;
      Function_2242ca4(v1);
      Function_22423e8(v1);
      *(uint *)(v1 + 4) = AllocAndInitOverlayData((int *)&Unknown_20f410c, *(uint *)(v1 + 188), 0x62u);
      result = 1;
      *(uchar *)(v1 + 11) = 1;
      return result;
    default:
      return 0;
  }
}

//----- (02242108) --------------------------------------------------------
int __fastcall Function_2242108(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  char v7;
  uint v8;
  int result;
  uint v10;

  v4 = a1;
  v5 = *(uchar *)(a1 + 8);
  switch ( (uchar)v5 )
  {
    case 0:
      v6 = Function_2243090(*(uchar *)(a1 + 26), v5, a3, a4);
      if ( Function_22430b4(v4, 5, v6) == 1 )
      {
        *(uchar *)(v4 + 27) = 0;
        *(uchar *)(v4 + 26) = 0;
        *(uchar *)(v4 + 23) = 0;
        *(uchar *)(v4 + 8) = 1;
      }
      goto LABEL_38;
    case 1:
      v7 = *(uchar *)(a1 + 27);
      if ( *(uchar *)(v4 + 27) )
      {
        *(uchar *)(v4 + 27) = v7 - 1;
      }
      else if ( *(uchar *)(v4 + 22) >= 2u )
      {
        *(uchar *)(v4 + 22) = 0;
        if ( *(uchar *)(v4 + 24) >= 0x14u )
        {
          if ( Function_203608c() )
            *(uchar *)(v4 + 8) = 2;
          else
            *(uchar *)(v4 + 8) = 3;
        }
        else if ( Function_203608c() )
        {
          *(uchar *)(v4 + 8) = 3;
        }
        else
        {
          *(uchar *)(v4 + 8) = 2;
        }
      }
      goto LABEL_38;
    case 2:
      Function_2242fac(*(uint *)(a1 + 72), *(uchar *)(a1 + 13), 1);
      Function_201c3c0(*(uint *)(v4 + 72), 3);
      Function_2243224(v4);
      *(uchar *)(v4 + 8) = 5;
      goto LABEL_38;
    case 3:
      Function_2243664(*(uint *)(a1 + 544), 0);
      v8 = Function_2027b50(*(ushort **)(v4 + 180));
      Function_2243758(v4 + 76, v8);
      ((void (__fastcall *)(uint, uint))dword_221F800[15220])(*(uint *)(v4 + 36), 0);
      *(uchar *)(v4 + 10) = Function_2242978(v4, 11, 1);
      *(uchar *)(v4 + 27) = 10;
      Function_2242fac(*(uint *)(v4 + 72), *(uchar *)(v4 + 660), 2);
      Function_201c3c0(*(uint *)(v4 + 72), 3);
      *(uchar *)(v4 + 8) = 4;
      goto LABEL_38;
    case 4:
      if ( !*(uchar *)(a1 + 661) )
        goto LABEL_38;
      if ( *(uchar *)(a1 + 661) == 1 )
      {
        *(uchar *)(a1 + 13) = *(uchar *)(a1 + 660);
        result = 1;
      }
      else
      {
        Function_22432d4(a1);
        Function_2242fac(*(uint *)(v4 + 72), *(uchar *)(v4 + 660), 0);
        Function_201c3c0(*(uint *)(v4 + 72), 3);
        *(uchar *)(v4 + 660) = -1;
        *(uchar *)(v4 + 661) = 0;
        *(uchar *)(v4 + 24) = -1;
        result = 1;
        *(uchar *)(v4 + 25) = 1;
      }
      return result;
    case 5:
      v10 = Function_2001be0(*(uint *)(a1 + 152));
      if ( v10 > 0xFFFFFFFE )
        goto LABEL_38;
      if ( v10 >= 0xFFFFFFFE )
        goto LABEL_30;
      if ( v10 <= 1 )
      {
        if ( v10 )
        {
          if ( v10 == 1 )
          {
LABEL_30:
            Function_2243200(v4);
            *(uchar *)(v4 + 8) = 7;
          }
        }
        else
        {
          Function_20057a4(1500, 0);
          Function_2005748(0x624u);
          Function_2243200(v4);
          *(uchar *)(v4 + 8) = 6;
        }
      }
      goto LABEL_38;
    case 6:
      if ( Function_22430b4(a1, 6, 1) != 1 )
        goto LABEL_38;
      return 1;
    case 7:
      if ( Function_22430b4(a1, 6, 2) != 1 )
        goto LABEL_38;
      Function_22432ac(v4);
      *(uchar *)(v4 + 660) = -1;
      *(uchar *)(v4 + 24) = -1;
      result = 1;
      *(uchar *)(v4 + 25) = 1;
      return result;
    case 8:
      Function_20365f4();
      Function_20364f0(104);
      *(uchar *)(v4 + 8) = 9;
      goto LABEL_38;
    case 9:
      if ( Function_2036540(104) != 1 )
        goto LABEL_38;
      Function_20365f4();
      Function_20363e8(0x62u);
      *(uchar *)(v4 + 24) = -1;
      result = 1;
      break;
    default:
LABEL_38:
      result = 0;
      break;
  }
  return result;
}

//----- (0224230C) --------------------------------------------------------
int __fastcall Function_224230c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 8);
  if ( v2 )
  {
    if ( v2 == 1 && Function_2036540(104) == 1 )
    {
      Function_20365f4();
      return 1;
    }
  }
  else
  {
    Function_20365f4();
    Function_20364f0(104);
    ++*(uchar *)(v1 + 8);
  }
  return 0;
}

//----- (02242344) --------------------------------------------------------
int __fastcall Function_2242344(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 8);
  if ( *(uchar *)(a1 + 8) )
  {
    if ( v2 == 1 )
    {
      if ( !--*(uchar *)(a1 + 27) )
      {
        Function_22432d4(a1);
        Function_200f174(0, 0, 0, 0, 6, 1, 98);
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
    *(uchar *)(a1 + 27) = 10;
    ++*(uchar *)(a1 + 8);
  }
  return 0;
}

//----- (022423AC) --------------------------------------------------------
int __fastcall Function_22423ac(int a1)
{
  int v1;

  v1 = a1;
  if ( *(uchar *)(a1 + 8) )
  {
    if ( *(uchar *)(a1 + 8) == 1 )
      return 1;
  }
  else
  {
    Function_2243200(a1);
    Function_2243664(*(uint *)(v1 + 544), 1);
    Function_200e084(v1 + 76, 0);
    ++*(uchar *)(v1 + 8);
  }
  return 0;
}

//----- (022423E8) --------------------------------------------------------
uint __fastcall Function_22423e8(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = a1;
  if ( *(uint *)(a1 + 540) )
    Function_2243650();
  if ( *(uint *)(v1 + 544) )
    Function_2243650();
  Function_2039794();
  Function_2002fa0(*(uint *)(v1 + 172), 2);
  Function_2002fa0(*(uint *)(v1 + 172), 0);
  Call_free1(*(uint *)(v1 + 172));
  *(uint *)(v1 + 172) = 0;
  Function_2243570(v1 + 192);
  Function_200b190(*(ushort **)(v1 + 32));
  Function_200b3f0(*(uint **)(v1 + 36), v2);
  Function_20237bc_FreeMsg(*(uint *)(v1 + 40), v3);
  Function_20237bc_FreeMsg(*(uint *)(v1 + 44), v4);
  Function_200c560(*(int **)(v1 + 176));
  v6 = 0;
  v7 = v1;
  do
  {
    Function_20237bc_FreeMsg(*(uint *)(v7 + 48), v5);
    ++v6;
    v7 += 4;
  }
  while ( v6 < 2 );
  Function_2243710(v1 + 76);
  Function_22426a4(*(uint *)(v1 + 72));
  return Call_FS_CloseFile(*(int **)(v1 + 568));
}

//----- (0224248C) --------------------------------------------------------
int __fastcall Function_224248c(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_22424c8(a1);
  *(uint *)(v1 + 72) = Function_2018340(0x62u);
  Function_2242500(v1);
  result = ((int (__fastcall *)(uint))dword_223B5A4[0])(*(uchar *)(v1 + 13));
  if ( result == 254 )
  {
    Function_22436b0(*(uint *)(v1 + 540), 2);
    result = Function_2243670(*(uint *)(v1 + 540), 128, 168);
  }
  return result;
}

//----- (022424C8) --------------------------------------------------------
uint Function_22424c8()
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

//----- (02242500) --------------------------------------------------------
int __fastcall Function_2242500(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  int v9;

  v4 = a1;
  *(uint *)(a1 + 568) = LoadFromNARC_8(150, 0x62u, a3, a4);
  Function_224262c(v4);
  Function_2242688(v4);
  *(uint *)(v4 + 32) = LoadFromMsgNARC(1, 26, 549, 0x62u);
  *(uint *)(v4 + 36) = Function_200b358(0x62u);
  *(uint *)(v4 + 40) = Function_2023790(600, 0x62u);
  *(uint *)(v4 + 44) = Function_2023790(600, 0x62u);
  v5 = 0;
  v6 = v4;
  do
  {
    *(uint *)(v6 + 48) = Function_2023790(32, 0x62u);
    ++v5;
    v6 += 4;
  }
  while ( v5 < 2 );
  LoadFromNARC_PlFont1(0, 416, 98);
  LoadFromNARC_PlFont2(0, 384, 98);
  *(uint *)(v4 + 176) = Function_200c440(15, 14, 0, 0x62u);
  Function_22436e0(*(uint *)(v4 + 72), v4 + 76);
  Function_2242f4c(v4, *(uint *)(v4 + 72));
  Function_201ffd0();
  Function_2242f24(v4);
  Function_2242f3c(v4);
  *(uint *)(v4 + 540) = Function_22435fc(v4 + 192);
  *(uint *)(v4 + 544) = Function_22435fc(v4 + 192);
  v7 = GetAdrOfPkmnInParty(*(uint **)(v4 + 556), 0);
  Function_22436cc(*(uint *)(v4 + 544), v7);
  if ( Function_2035e38() )
  {
    Function_200966c(1, 16, v8, v9);
    Function_2009704(1);
    Function_2039734();
  }
  return SetMainLoopFunctionCall((int)Function_22426e0, v4);
}

//----- (0224262C) --------------------------------------------------------
int __fastcall Function_224262c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  Function_224271c();
  Function_224273c(*(uint *)(v1 + 72));
  *(uint *)(v1 + 172) = MallocFill120(0x62u);
  Function_2002f70(*(uint *)(v1 + 172), 2, 512, 0x62u);
  Function_2002f70(*(uint *)(v1 + 172), 0, 512, 0x62u);
  v2 = Function_224283c(v1, 3);
  Function_2242884(v2);
  Function_201ff0c(4u, 0);
  return Function_22428b8(v1, 4);
}

//----- (02242688) --------------------------------------------------------
int __fastcall Function_2242688(int a1)
{
  int v1;
  int *v2;

  v1 = a1;
  v2 = GetAdrOfPkmnInParty(*(uint **)(a1 + 556), 0);
  return Function_2243310(v1 + 192, v2);
}

//----- (022426A4) --------------------------------------------------------
uint __fastcall Function_22426a4(int a1)
{
  int v1;

  v1 = a1;
  Function_201ff0c(0x1Fu, 0);
  Function_201ff74(0x1Fu, 0);
  Function_2019044(v1, 3);
  Function_2019044(v1, 1);
  Function_2019044(v1, 0);
  Function_2019044(v1, 4);
  return free(v1);
}

//----- (022426E0) --------------------------------------------------------
int __fastcall Function_22426e0(int a1)
{
  int v1;
  int result;
  int v3;

  v1 = a1;
  result = *(uint *)(a1 + 4);
  if ( !result )
  {
    v3 = *(uint *)(v1 + 172);
    if ( v3 )
      Function_2003694(v3);
    Function_201c2b8(*(uint *)(v1 + 72));
    Function_201dcac();
    Function_200a858();
    result = dword_27E3FF8 | 1;
    dword_27E3FF8 |= 1u;
  }
  return result;
}

//----- (0224271C) --------------------------------------------------------
char *Function_224271c()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_2243824;
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

//----- (0224273C) --------------------------------------------------------
uint __fastcall Function_224273c(uint *a1, int a2, int a3, int a4)
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
  v31 = 16777217;
  v32 = 0;
  v33 = 0;
  Function_20183c4(v4, 0, &v27, 0);
  Function_2019690(0, 32, 0, 0x62u);
  Function_2019ebc(v4, 0);
  v20 = 0;
  v21 = 0;
  v22 = 2048;
  v23 = 0;
  v24 = 50397185;
  v25 = 256;
  v26 = 0;
  Function_20183c4(v4, 1u, &v20, 0);
  Function_2019690(1u, 32, 0, 0x62u);
  Function_2019ebc(v4, 1u);
  v13 = 0;
  v14 = 0;
  v15 = 2048;
  v16 = 0;
  v17 = 33816577;
  v18 = 512;
  v19 = 0;
  Function_20183c4(v4, 3u, &v13, 0);
  Function_2019ebc(v4, 3u);
  v6 = 0;
  v7 = 0;
  v8 = 2048;
  v9 = 0;
  v10 = 67502081;
  v11 = 0;
  v12 = 0;
  Function_20183c4(v4, 4u, &v6, 0);
  Function_2019ebc(v4, 4u);
  REG_BG0CNT &= 0xFFFCu;
  return Function_201ff0c(1u, 1);
}

//----- (0224283C) --------------------------------------------------------
int __fastcall Function_224283c(int a1, uchar a2)
{
  int v2;
  uchar v3;

  v2 = a1;
  v3 = a2;
  Function_20070e8(*(uint *)(a1 + 568), 0x17u, *(uint **)(a1 + 72), a2, 0, 0, 1, 98);
  return Function_200710c(*(uint *)(v2 + 568), 0x18u, *(uint **)(v2 + 72), v3, 0, 0, 1, 98);
}

//----- (02242884) --------------------------------------------------------
uint __fastcall Function_2242884(int a1, int a2, int a3, int a4)
{
  int v4;
  int v6;
  int v7;

  v7 = a4;
  v4 = Function_2006f88(150, 134, &v6, 98);
  DC_FlushRange(*(uint *)(v6 + 12), 192);
  GX_LoadBGPltt(*(uint *)(v6 + 12), 0, 0xC0u);
  return free(v4);
}

//----- (022428B8) --------------------------------------------------------
int __fastcall Function_22428b8(int a1, uchar a2)
{
  int v2;
  uchar v3;

  v2 = a1;
  v3 = a2;
  Function_20070e8(*(uint *)(a1 + 568), 0x7Du, *(uint **)(a1 + 72), a2, 0, 0, 1, 98);
  Function_200710c(*(uint *)(v2 + 568), 0x7Eu, *(uint **)(v2 + 72), v3, 0, 0, 1, 98);
  return Function_2007130(*(uint *)(v2 + 568), 0xABu, 4u, 0, 32, 98);
}

//----- (02242918) --------------------------------------------------------
int __fastcall Function_2242918(int a1, int a2, uint a3, int a4, int a5, int a6, int a7, int a8, uchar a9, uchar a10)
{
  int v10;
  int v11;
  uint v12;
  int v13;

  v10 = a2;
  v11 = a1;
  v12 = a3;
  Function_201ada4_ClearTextBox(a2, a9);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v11 + 32), v12, *(ushort **)(v11 + 44));
  Function_200c388(*(uint **)(v11 + 36), *(uint *)(v11 + 40), *(uint *)(v11 + 44));
  v13 = *(uint *)(v11 + 40);
  return Function_201d78c(v10, a10);
}

//----- (02242978) --------------------------------------------------------
int __fastcall Function_2242978(int a1, uint a2, uchar a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = Function_2242918(a1, a1 + 76, a2, 1, 1, 0, 1, 2, 0xFu, a3);
  Function_201a954(v3 + 76, v5);
  return v4;
}

//----- (022429B0) --------------------------------------------------------
uchar *__fastcall Function_22429b0(int a1, int a2, char a3)
{
  int v3;
  int v4;
  uint *v5;
  char v6;
  uchar *result;

  v3 = 0;
  v4 = a1;
  do
  {
    *(uint *)(v4 + 156) = 0;
    v5 = (uint *)(v4 + 160);
    ++v3;
    v4 += 8;
    *v5 = 0;
  }
  while ( v3 < 2 );
  *(uint *)(a1 + 140) = a1 + 156;
  *(uint *)(a1 + 144) = a2;
  *(uchar *)(a1 + 148) = 0;
  *(uchar *)(a1 + 149) = 1;
  *(uchar *)(a1 + 150) = a3;
  *(uchar *)(a1 + 151) &= 0xF0u;
  *(uchar *)(a1 + 151) &= 0xCFu;
  v6 = *(uchar *)(a1 + 151);
  result = (uchar *)(a1 + 151);
  *result = v6 & 0x3F | 0x40;
  return result;
}

//----- (02242A28) --------------------------------------------------------
int __fastcall Function_2242a28(int a1, int a2, int a3, uint a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int result;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a1 + 48;
  v8 = 4 * a2;
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(a1 + 32), a4, *(ushort **)(a1 + 48 + 4 * a2));
  *(uint *)(v4 + 8 * v5 + 156) = *(uint *)(v7 + v8);
  result = v6;
  *(uint *)(v4 + 8 * v5 + 160) = v6;
  return result;
}

//----- (02242A54) --------------------------------------------------------
int __fastcall Function_2242a54(int a1)
{
  int v1;
  int result;

  v1 = a1;
  *(uchar *)(a1 + 15) = 1;
  Function_224372c(*(uint *)(a1 + 72), a1 + 92);
  Function_22429b0(v1, v1 + 92, 2);
  Function_2242a28(v1, 0, 0, 0x1Bu);
  Function_2242a28(v1, 1, 1, 0x1Cu);
  result = Function_2001b7c((uint *)(v1 + 140), 8, 0, 0, 0x62u, 2);
  *(uint *)(v1 + 152) = result;
  return result;
}

//----- (02242AAC) --------------------------------------------------------
uint __fastcall Function_2242aac(int a1, uint a2, int a3)
{
  return Function_200b60c(*(uint *)(a1 + 36), a2, a3, 2, 0, 1);
}

//----- (02242AC4) --------------------------------------------------------
int __fastcall Function_2242ac4(int a1, int a2, int a3, int a4, int a5, int a6, uchar a7, uchar a8)
{
  int v8;
  int *v9;
  ushort *v10;
  int v11;
  int v12;
  char v14;
  int v15;

  v15 = a4;
  v8 = a2;
  v9 = GetAdrOfPkmnInParty(*(uint **)(a1 + 556), 0);
  GetPkmnData(v9, 0xB3u, (ushort *)&v14);
  Function_201ada4_ClearTextBox(v8, a7);
  v10 = (ushort *)Function_2023790(11, 0x62u);
  Function_2023d28(v10, (ushort *)&v14);
  Function_201d78c(v8, a8);
  Function_20237bc_FreeMsg((int)v10, v11);
  return Function_201a954(v8, v12);
}

//----- (02242B38) --------------------------------------------------------
int __fastcall Function_2242b38(int a1, int a2, int a3, int a4, uchar a5, uchar a6)
{
  ushort *v6;
  int v7;
  int v8;
  int v9;
  uint v10;
  int v11;
  int v13;
  int v14;
  int v15;
  ushort **v16;
  int v17;

  v13 = a2;
  Function_201ada4_ClearTextBox(a2, a5);
  v16 = (ushort **)LoadFromMsgNARC(1, 26, 624, 0x62u);
  v6 = (ushort *)Function_2023790(11, 0x62u);
  v17 = 0;
  v15 = 0;
  v14 = 16;
  do
  {
    v7 = 0;
    v8 = 1;
    do
    {
      if ( ((int (__fastcall *)(int))dword_223B5A4[0])((v7 + v15) & 0xFF) != 254 )
      {
        Function_20237e8((int)v6, v9);
        v10 = ((int (__fastcall *)(uint))dword_223B5A4[0])((uchar)(v7 + v15));
        Function_200b1b8_CallMsgDecrypt(v16, v10, v6);
        Function_201d78c(v13, a6);
      }
      ++v7;
      v8 += 64;
    }
    while ( v7 < 4 );
    v15 += 4;
    v14 += 36;
    ++v17;
  }
  while ( v17 < 5 );
  Function_20237bc_FreeMsg((int)v6, v9);
  Function_200b190((ushort *)v16);
  return Function_201a954(v13, v11);
}

//----- (02242C04) --------------------------------------------------------
int __fastcall Function_2242c04(int a1, int a2, int a3, ushort a4, ushort a5)
{
  int v5;

  v5 = a2;
  Function_200c5bc(*(uint *)(a1 + 176), a3, 2, 0, a2, a4, a5);
  return Function_201a9a4(v5);
}

//----- (02242C2C) --------------------------------------------------------
int __fastcall Function_2242c2c(int a1, int a2)
{
  int v2;
  int v3;
  ushort v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint v10;
  int result;
  int v12;
  ushort v13;
  int v14;
  int v15;

  v2 = a1;
  v15 = 0;
  v14 = 0;
  v12 = a2;
  v13 = 4;
  do
  {
    v3 = 0;
    v4 = 18;
    do
    {
      v5 = ((int (__fastcall *)(int))dword_223B5A4[0])((v3 + v14) & 0xFF);
      if ( v5 != 254 && v5 != 9 )
      {
        v9 = Function_2243090((uchar)(v3 + v14), v6, v7, v8);
        v10 = (Function_20301e0(v9, *(uint *)(v2 + 560)) + 1) & 0xFF;
        if ( v10 > 0xA )
          v10 = 10;
        Function_2242c04(v2, v12, v10, v4, v13);
      }
      ++v3;
      v4 += 64;
    }
    while ( v3 < 4 );
    v14 += 4;
    v13 += 36;
    result = v15 + 1;
    v15 = result;
  }
  while ( result < 5 );
  return result;
}

//----- (02242CA4) --------------------------------------------------------
int __fastcall Function_2242ca4(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  *(uint *)(a1 + 188) = malloc(0x62u, 48);
  Call_FillMemWithValue(*(int **)(v1 + 188), 0, 0x30u);
  **(uint **)(v1 + 188) = *(uint *)(v1 + 556);
  *(uchar *)(*(uint *)(v1 + 188) + 17) = 1;
  *(uint *)(*(uint *)(v1 + 188) + 4) = *(uint *)(v1 + 180);
  *(uchar *)(*(uint *)(v1 + 188) + 18) = 1;
  *(uchar *)(*(uint *)(v1 + 188) + 19) = GetNrOfPkmnInParty(*(uint *)(v1 + 556));
  *(uchar *)(*(uint *)(v1 + 188) + 20) = 0;
  *(ushort *)(*(uint *)(v1 + 188) + 24) = 0;
  *(uint *)(*(uint *)(v1 + 188) + 28) = Function_207a274(*(uint *)(v1 + 184));
  *(uint *)(*(uint *)(v1 + 188) + 44) = Function_208c324(*(uint *)(v1 + 184));
  Function_208d720(*(uint *)(v1 + 188), (int)dword_2243798);
  v2 = LoadTrainerDataAdress(*(uint *)(v1 + 184));
  return Function_208e9c0(*(uint *)(v1 + 188), v2);
}

//----- (02242D5C) --------------------------------------------------------
int __fastcall Function_2242d5c(int result, uint *a2, int a3)
{
  *(uchar *)(result + 8) = 0;
  *a2 = a3;
  return result;
}

//----- (02242D64) --------------------------------------------------------
int __fastcall Function_2242d64(int a1)
{
  int v1;
  int v2;
  uint v3;
  uint v4;
  uint v5;
  int v6;
  uint v7;
  int v8;
  int v9;
  int v10;

  v1 = a1;
  v2 = 0;
  if ( dword_21BF6C4 & 0x20 )
  {
    if ( ((int (__fastcall *)(uint))dword_223B5A4[0])(*(uchar *)(v1 + 13)) != 254 )
      *(uchar *)(v1 + 12) = *(uchar *)(v1 + 13);
    v3 = *(uchar *)(v1 + 13);
    if ( (v3 >> 31) + __ROR4__((v3 << 30) - (v3 >> 31), 30) )
    {
      if ( ((int (*)(void))dword_223B5A4[0])() == 254 )
        *(uchar *)(v1 + 13) = 16;
      else
        --*(uchar *)(v1 + 13);
    }
    else
    {
      *(uchar *)(v1 + 13) = v3 + 3;
    }
    v2 = 1;
  }
  if ( dword_21BF6C4 & 0x10 )
  {
    if ( ((int (__fastcall *)(uint))dword_223B5A4[0])(*(uchar *)(v1 + 13)) != 254 )
      *(uchar *)(v1 + 12) = *(uchar *)(v1 + 13);
    v4 = *(uchar *)(v1 + 13);
    if ( (v4 >> 31) + __ROR4__((v4 << 30) - (v4 >> 31), 30) == 3 )
    {
      *(uchar *)(v1 + 13) = v4 - 3;
    }
    else if ( ((int (*)(void))dword_223B5A4[0])() == 254 )
    {
      *(uchar *)(v1 + 13) = 19;
    }
    else
    {
      ++*(uchar *)(v1 + 13);
    }
    v2 = 1;
  }
  if ( dword_21BF6C4 & 0x40 )
  {
    if ( ((int (__fastcall *)(uint))dword_223B5A4[0])(*(uchar *)(v1 + 13)) != 254 )
      *(uchar *)(v1 + 12) = *(uchar *)(v1 + 13);
    v5 = *(uchar *)(v1 + 13);
    if ( v5 >= 4 )
    {
      if ( ((int (*)(void))dword_223B5A4[0])() == 254 )
      {
        v6 = *(uchar *)(v1 + 12);
        if ( v6 == 16 )
        {
          *(uchar *)(v1 + 13) = 13;
        }
        else if ( v6 == 19 )
        {
          *(uchar *)(v1 + 13) = 14;
        }
        else if ( v6 != 13 && v6 != 1 )
        {
          if ( v6 == 14 || v6 == 2 )
            *(uchar *)(v1 + 13) = 14;
        }
        else
        {
          *(uchar *)(v1 + 13) = 13;
        }
      }
      else
      {
        *(uchar *)(v1 + 13) -= 4;
      }
    }
    else
    {
      *(uchar *)(v1 + 13) = v5 + 16;
    }
    v2 = 1;
  }
  if ( dword_21BF6C4 & 0x80 )
  {
    if ( ((int (__fastcall *)(uint))dword_223B5A4[0])(*(uchar *)(v1 + 13)) != 254 )
      *(uchar *)(v1 + 12) = *(uchar *)(v1 + 13);
    v7 = *(uchar *)(v1 + 13);
    if ( v7 < 0x10 )
    {
      if ( ((int (*)(void))dword_223B5A4[0])() == 254 )
      {
        v8 = *(uchar *)(v1 + 12);
        if ( v8 == 16 )
        {
          *(uchar *)(v1 + 13) = 1;
        }
        else if ( v8 == 19 )
        {
          *(uchar *)(v1 + 13) = 2;
        }
        else if ( v8 != 13 && v8 != 1 )
        {
          if ( v8 == 14 || v8 == 2 )
            *(uchar *)(v1 + 13) = 2;
        }
        else
        {
          *(uchar *)(v1 + 13) = 1;
        }
      }
      else
      {
        *(uchar *)(v1 + 13) += 4;
      }
    }
    else
    {
      *(uchar *)(v1 + 13) = v7 - 16;
    }
    v2 = 1;
  }
  if ( v2 == 1 )
  {
    Function_2005748(0x5DCu);
    v9 = Function_2242f24(v1);
    v10 = Function_2242f3c(v1);
    Function_2243670(*(uint *)(v1 + 540), v9, v10);
  }
  if ( ((int (__fastcall *)(uint))dword_223B5A4[0])(*(uchar *)(v1 + 13)) != 254 )
    return Function_22436b0(*(uint *)(v1 + 540), 1);
  Function_22436b0(*(uint *)(v1 + 540), 2);
  return Function_2243670(*(uint *)(v1 + 540), 128, 168);
}

//----- (02242F24) --------------------------------------------------------
uint __fastcall Function_2242f24(int a1)
{
  return (((((uint)*(uchar *)(a1 + 13) >> 31)
          + __ROR4__((*(uchar *)(a1 + 13) << 30) - ((uint)*(uchar *)(a1 + 13) >> 31), 30)) << 6)
        + 32) & 0xFFFF;
}

//----- (02242F3C) --------------------------------------------------------
uint __fastcall Function_2242f3c(int a1)
{
  return (36 * ((uint)*(uchar *)(a1 + 13) >> 2) + 16) & 0xFFFF;
}

//----- (02242F4C) --------------------------------------------------------
int __fastcall Function_2242f4c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = a2;
  if ( Function_22430b0(a1) == 1 )
  {
    v4 = 0;
    do
      Function_2242fac(v3, (uchar)v4++, 3);
    while ( v4 < 17 );
  }
  else
  {
    v5 = 0;
    do
    {
      if ( (uint)Function_20301e0((uchar)v5, *(uint *)(v2 + 560)) >= 0xA )
        Function_2242fac(v3, (uchar)v5, 3);
      ++v5;
    }
    while ( v5 < 17 );
    Function_2242fac(v3, 19, 3);
  }
  return Function_201c3c0(v3, 3);
}

//----- (02242FAC) --------------------------------------------------------
int __fastcall Function_2242fac(int a1, uint a2, int a3)
{
  int v3;
  uint v4;
  int v5;
  uchar v6;
  int v7;
  uchar v8;
  int v9;
  int result;
  int v11;
  uchar v12;
  int v13;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v6 = 5;
    }
    else if ( a3 == 2 )
    {
      v6 = 4;
    }
    else
    {
      v6 = 3;
    }
  }
  else
  {
    v6 = 0;
  }
  v7 = (v4 >> 31) + __ROR4__((v4 << 29) - (v4 >> 31), 29);
  if ( v7 >= 4 )
    v8 = 4;
  else
    v8 = 5;
  if ( v4 >= 4 )
  {
    if ( v4 >= 8 )
    {
      if ( v4 >= 0xC )
      {
        if ( v4 >= 0x10 )
          v9 = 18;
        else
          v9 = 14;
      }
      else
      {
        v9 = 9;
      }
    }
    else
    {
      v9 = 5;
    }
  }
  else
  {
    v9 = 0;
  }
  result = Function_2019e2c(a1, 3, 8 * ((v4 >> 31) + __ROR4__((v4 << 30) - (v4 >> 31), 30)) & 0xFF, v9, 8u, v8, v6);
  if ( !v5 )
  {
    v11 = 8 * ((v4 >> 31) + __ROR4__((v4 << 30) - (v4 >> 31), 30)) & 0xFF;
    if ( v7 < 4 )
      v12 = 2;
    else
      v12 = 3;
    if ( v4 >= 4 )
    {
      if ( v4 >= 8 )
      {
        if ( v4 >= 0xC )
        {
          if ( v4 >= 0x10 )
            v13 = 20;
          else
            v13 = 15;
        }
        else
        {
          v13 = 11;
        }
      }
      else
      {
        v13 = 6;
      }
    }
    else
    {
      v13 = 2;
    }
    if ( v4 >= 9 )
      result = Function_2019e2c(v3, 3, v11, v13, 1u, v12, 2u);
    else
      result = Function_2019e2c(v3, 3, v11, v13, 1u, v12, 1u);
  }
  return result;
}

//----- (02243090) --------------------------------------------------------
int __fastcall Function_2243090(int result, int a2, int a3, int a4)
{
  if ( (uint)result >= 0x11 )
    result = 17;
  return result;
}

//----- (02243098) --------------------------------------------------------
BOOL __fastcall Function_2243098(int a1)
{
  int v1;
  BOOL result;

  result = 0;
  if ( !*(uchar *)(a1 + 9) )
  {
    v1 = *(ushort *)(a1 + 28);
    if ( v1 == 50 || v1 == 170 )
      result = 1;
  }
  return result;
}

//----- (022430B0) --------------------------------------------------------
int __fastcall Function_22430b0(int a1)
{
  return *(uchar *)(a1 + 30);
}

//----- (022430B4) --------------------------------------------------------
BOOL __fastcall Function_22430b4(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  if ( !((int (__fastcall *)(uint))dword_223B5B0[0])(*(uchar *)(a1 + 9)) )
    return 0;
  switch ( v5 )
  {
    case 4:
      v3 = 39;
      Function_2243118(v4, 4);
      break;
    case 5:
      v3 = 40;
      Function_224313c(v4, 5, v6);
      break;
    case 6:
      v3 = 41;
      Function_22431d4(v4, 6, v6);
      break;
  }
  return Function_20359dc(v3, v4 + 572, 44) == 1;
}

//----- (02243118) --------------------------------------------------------
int __fastcall Function_2243118(int a1, short a2)
{
  int v2;
  short v3;
  int result;

  v2 = a1;
  v3 = a2;
  LoadTrainerDataAdress(*(uint *)(a1 + 184));
  result = 572;
  *(ushort *)(v2 + 572) = v3;
  return result;
}

//----- (02243130) --------------------------------------------------------
int Function_106_2243130()
{
  return Function_203608c();
}

//----- (0224313C) --------------------------------------------------------
uint __fastcall Function_224313c(int a1, short a2, short a3)
{
  int v3;
  char v4;
  int *v5;
  uint result;

  v3 = a1;
  *(ushort *)(a1 + 572) = a2;
  v4 = a3;
  *(ushort *)(a1 + 574) = a3;
  if ( !Function_203608c() && *(uchar *)(v3 + 24) == 255 )
    *(uchar *)(v3 + 24) = v4;
  *(ushort *)(v3 + 576) = *(uchar *)(v3 + 24);
  v5 = GetAdrOfPkmnInParty(*(uint **)(v3 + 556), 0);
  result = GetPkmnData(v5, 0xA1u, 0);
  *(ushort *)(v3 + 578) = result;
  return result;
}

//----- (02243180) --------------------------------------------------------
ushort *__fastcall Function_106_2243180(ushort *a1, int a2, ushort *a3, int a4)
{
  int v4;
  ushort *v5;
  ushort *v6;
  ushort *result;

  v4 = a4;
  v5 = a1;
  v6 = a3;
  ++*(uchar *)(a4 + 22);
  result = (ushort *)Function_203608c();
  if ( v5 != result )
  {
    *(uchar *)(v4 + 660) = v6[1];
    if ( Function_203608c() )
    {
      *(uchar *)(v4 + 24) = v6[2];
    }
    else if ( *(uchar *)(v4 + 24) == 255 )
    {
      *(uchar *)(v4 + 24) = *(uchar *)(v4 + 660) + 20;
    }
    else
    {
      *(uchar *)(v4 + 660) = 0;
    }
    result = *(ushort **)(v4 + 564);
    *result = v6[3];
  }
  return result;
}

//----- (022431D4) --------------------------------------------------------
int __fastcall Function_22431d4(int result, short a2, short a3)
{
  *(ushort *)(result + 572) = a2;
  *(ushort *)(result + 574) = a3;
  return result;
}

//----- (022431E0) --------------------------------------------------------
int __fastcall Function_106_22431e0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;
  short v8;

  v4 = a1;
  v5 = a3;
  v6 = a4;
  result = Function_203608c();
  if ( v4 != result )
  {
    v8 = *(ushort *)(v5 + 2);
    if ( *(ushort *)(v5 + 2) )
    {
      result = 661;
      *(uchar *)(v6 + 661) = v8;
    }
  }
  return result;
}

//----- (02243200) --------------------------------------------------------
char *__fastcall Function_2243200(int a1)
{
  int v1;
  char *result;

  v1 = a1;
  result = (char *)*(uchar *)(a1 + 15);
  if ( result == (char *)1 )
  {
    *(uchar *)(v1 + 15) = 0;
    Function_2001bc4(*(uint *)(v1 + 152), 0);
    result = Function_200dc9c(*(uint *)(v1 + 144), 0);
  }
  return result;
}

//----- (02243224) --------------------------------------------------------
int __fastcall Function_2243224(int a1)
{
  int v1;
  uint v2;
  uint v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint v8;
  uint v9;

  v1 = a1;
  Function_2243664(*(uint *)(a1 + 544), 0);
  v2 = Function_2027b50(*(ushort **)(v1 + 180));
  Function_2243758(v1 + 76, v2);
  v3 = ((int (__fastcall *)(uint))dword_223B5A4[0])(*(uchar *)(v1 + 13));
  Function_200b7ec(*(uint *)(v1 + 36), 0, v3);
  v7 = Function_2243090(*(uchar *)(v1 + 13), v4, v5, v6);
  v8 = (Function_20301e0(v7, *(uint *)(v1 + 560)) + 1) & 0xFF;
  if ( v8 > 0xA )
    v8 = 10;
  Function_2242aac(v1, 1u, v8);
  if ( Function_22430b0(v1) == 1 )
    v9 = 31;
  else
    v9 = 24;
  *(uchar *)(v1 + 10) = Function_2242978(v1, v9, 1u);
  Function_22436b0(*(uint *)(v1 + 540), 0);
  return Function_2242a54(v1);
}

//----- (022432AC) --------------------------------------------------------
int __fastcall Function_22432ac(int a1)
{
  int v1;

  v1 = a1;
  Function_22432d4(a1);
  Function_2242fac(*(uint *)(v1 + 72), *(uchar *)(v1 + 13), 0);
  Function_201c3c0(*(uint *)(v1 + 72), 3);
  return Function_22436b0(*(uint *)(v1 + 540), 1);
}

//----- (022432D4) --------------------------------------------------------
int __fastcall Function_22432d4(int a1)
{
  int v1;

  v1 = a1;
  Function_2243664(*(uint *)(a1 + 544), 1);
  Function_200e084(v1 + 76, 0);
  return Function_2242ac4(v1, v1 + 108, 0, 0, 1, 2, 0, 0);
}

//----- (02243310) --------------------------------------------------------
uint __fastcall Function_2243310(int a1)
{
  int v1;
  int v2;
  char *v3;
  int *v4;
  int v5;
  int v6;
  int v7;
  uint v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int *v14;

  v1 = a1;
  Function_22435c8();
  Function_20a7944();
  Function_200a784(0, 128, 0, 32, 0, 0x80u, 0, 0x20u, 0x62u);
  v3 = &byte_224384C;
  *(uint *)v1 = Function_20095c4(2, v1 + 4, 98, v2);
  v4 = 0;
  v5 = v1;
  do
  {
    *(uint *)(v5 + 300) = Function_2009714((uchar)*v3, v4, 0x62u);
    v4 = (int *)((char *)v4 + 1);
    ++v3;
    v5 += 4;
  }
  while ( (int)v4 < 4 );
  *(uint *)(v1 + 316) = Function_200985c(*(uint *)(v1 + 300), 151, 12, 1, 0, 1, 98);
  *(uint *)(v1 + 320) = Function_20098b8(*(uint *)(v1 + 304), 151, 38, 0, 0, 1, 1, 98);
  *(uint *)(v1 + 324) = Function_2009918(*(uint *)(v1 + 308), 151, 14, 1, 0, 2u, 98);
  *(uint *)(v1 + 328) = Function_2009918(*(uint *)(v1 + 312), 151, 13, 1, 0, 3u, 98);
  v14 = LoadFromNARC_8(19, 0x62u, v6, v7);
  v8 = Function_2079d80();
  *(uint *)(v1 + 332) = Function_2009a4c(*(uint *)(v1 + 300), (int)v14, v8, 0, 1, 1, 0x62u);
  v9 = Function_2079fd0();
  *(uint *)(v1 + 336) = Function_20098b8(*(uint *)(v1 + 304), 19, v9, 0, 1, 1, 3, 98);
  v10 = Function_2079fd8();
  *(uint *)(v1 + 340) = Function_2009bc4(*(uint *)(v1 + 308), (int)v14, v10, 0, 1, 2u, 0x62u);
  v11 = Function_2079fe4();
  *(uint *)(v1 + 344) = Function_2009bc4(*(uint *)(v1 + 312), (int)v14, v11, 0, 1, 3u, 0x62u);
  v12 = 0;
  do
  {
    Function_200a328(*(int **)(v1 + 316));
    Function_200a5c8(*(int **)(v1 + 320));
    ++v12;
    v1 += 16;
  }
  while ( v12 < 2 );
  Function_201ff74(0x10u, 1);
  Function_201ff0c(0x10u, 1);
  return Call_FS_CloseFile(v14);
}

//----- (022434BC) --------------------------------------------------------
int __fastcall Function_22434bc(int *a1, int a2, uint a3, int a4, char a5)
{
  int *v5;
  int v6;
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

  v5 = a1;
  v6 = a4;
  v7 = a3;
  Function_20093b4((int)&v22, a2, a2, a2, a2, -1, -1, 0, 1, a1[75], a1[76], a1[77], a1[78], 0, 0);
  v10 = *v5;
  v11 = &v22;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 4096;
  v16 = 4096;
  v17 = 4096;
  v18 = 0;
  v19 = v6;
  if ( a5 )
    v20 = 2;
  else
    v20 = 1;
  v21 = 98;
  if ( a5 == 1 )
    v13 += 786432;
  v8 = Function_2021aa0((uint **)&v10);
  Function_2021cc8(v8, 1);
  Function_2021ce4(v8, 4096);
  Function_2021d6c(v8, v7);
  return v8;
}

//----- (02243570) --------------------------------------------------------
int *__fastcall Function_2243570(int **a1)
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
  while ( v2 < 2 );
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

//----- (022435C8) --------------------------------------------------------
int Function_22435c8()
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = 3;
  v2 = 2048;
  v3 = 2048;
  v4 = 98;
  Function_201e88c(&v1, 16, 16);
  Function_201f834(4, 0x62u);
  Function_201e994();
  return Function_201f8e4();
}

//----- (022435FC) --------------------------------------------------------
int __fastcall Function_22435fc(int *a1, int a2, uint a3, int a4, ushort a5, int a6)
{
  int *v6;
  int v7;
  int v8;
  int v9;
  uchar *v10;
  int v11;
  uint v13;
  int v14;
  int v15;

  v6 = a1;
  v7 = a2;
  v13 = a3;
  v8 = a4;
  v9 = malloc(0x62u, 20);
  v10 = (uchar *)v9;
  v11 = 20;
  do
  {
    *v10++ = 0;
    --v11;
  }
  while ( v11 );
  *(uint *)(v9 + 12) = a6;
  *(uint *)(v9 + 16) = Function_22434bc(v6, v7, v13, 0, 0);
  v14 = v8 << 12;
  v15 = a5 << 12;
  Function_2021c50(*(uint **)(v9 + 16), &v14);
  return v9;
}

//----- (02243650) --------------------------------------------------------
int __fastcall Function_2243650(int a1)
{
  int v1;

  v1 = a1;
  Function_2021bd4(*(uint *)(a1 + 16));
  free(v1);
  return 0;
}

//----- (02243664) --------------------------------------------------------
uint __fastcall Function_2243664(int a1, int a2)
{
  return Function_2021cac(*(uint *)(a1 + 16), a2);
}

//----- (02243670) --------------------------------------------------------
int __fastcall Function_2243670(int a1, int a2, int a3)
{
  int v3;
  int v4;
  uchar *v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  int v11;
  int v12;
  int v13;

  v3 = a1;
  v4 = a2;
  v5 = *(uchar **)(a1 + 12);
  v6 = a3;
  if ( v5 )
    Function_2021dcc(*(uint *)(a1 + 16), *v5);
  v7 = *(uint *)(v3 + 16);
  Function_2021d28();
  v9 = v8[1];
  v11 = *v8;
  v12 = v9;
  v13 = v8[2];
  v11 = v4 << 12;
  v12 = v6 << 12;
  return Function_2021c50(*(uint **)(v3 + 16), &v11);
}

//----- (022436B0) --------------------------------------------------------
int __fastcall Function_22436b0(int a1, uint a2)
{
  int v2;
  uint v3;

  v2 = a1;
  v3 = a2;
  Function_2021ce4(*(uint *)(a1 + 16), 4096);
  return Function_2021dcc(*(uint *)(v2 + 16), v3);
}

//----- (022436CC) --------------------------------------------------------
int __fastcall Function_22436cc(int a1)
{
  int v1;
  char v2;

  v1 = a1;
  v2 = Function_2079fc4();
  return Function_2021f24(*(uint *)(v1 + 16), v2);
}

//----- (022436E0) --------------------------------------------------------
int __fastcall Function_22436e0(uint *a1, int a2)
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
    Function_201a8d4(v2, v3 + 16 * v4, (uchar *)&dword_2243860[2 * v4]);
    Function_201ada4_ClearTextBox(v3 + 16 * v4, 0);
    result = (v4 + 1) << 24;
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 < 4 );
  return result;
}

//----- (02243710) --------------------------------------------------------
int __fastcall Function_2243710(int a1)
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
  while ( v2 < 4 );
  return result;
}

//----- (0224372C) --------------------------------------------------------
char *__fastcall Function_224372c(uint *a1, int a2)
{
  int v2;

  v2 = a2;
  Function_200daa4(a1, 0, 1015, 11, 0, 98);
  return Function_200dc48(v2, 1, 1015, 0xBu);
}

//----- (02243758) --------------------------------------------------------
uint __fastcall Function_2243758(int a1, uchar a2)
{
  uchar v2;
  uint **v3;
  int v4;

  v2 = a2;
  v3 = (uint **)a1;
  v4 = Function_201c290(a1);
  Function_200dd0c(*v3, v4, 985, 10, v2, 98);
  Function_201ada4_ClearTextBox((int)v3, 15);
  return Function_200e060((int)v3, 0, 985, 0xAu);
}

