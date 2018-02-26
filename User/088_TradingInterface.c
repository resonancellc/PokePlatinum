//----- (0223B140) --------------------------------------------------------
int __fastcall Function_88_223b140(int a1)
{
  int v1;
  int v2;
  int v3;
  int *v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v1 = a1;
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  Function_201ff00();
  Function_201ff68();
  REG_DISPCNT &= 0xFFFFE0FF;
  REG_DISPCNT_SUB &= 0xFFFFE0FF;
  Function_2017fc8(3, 26, 460752);
  v4 = LoadFromNARC_8(54, 0x1Au, v2, v3);
  v5 = (int *)MallocSomeDataAndStorePtrInOverlayData1c(v1, 14004, 0x1Au);
  MIi_CpuClearFast(0, v5, 0x36B4u);
  v5[93] = Function_2018340(0x1Au);
  v5[94] = (int)Function_200b368(0xCu, 22, 0x1Au);
  v5[95] = (int)Function_200b358(0x1Au);
  v5[96] = (int)Function_200b358(0x1Au);
  v5[97] = LoadFromMsgNARC(0, 26, 354, 0x1Au);
  v5[16] = 0;
  Function_223c370(v5, v1);
  v6 = Function_2017dd4(4, 8);
  Function_223c15c(v6);
  Function_223c17c(v5[93]);
  Function_200f174(0, 1, 1, 0, 16, 1, 26);
  Function_223c504(v5, v4);
  v7 = SetMainLoopFunctionCall((int)Function_223c0e0, (int)v5);
  Function_223c63c(v7);
  Function_223c66c(v5, v4);
  Function_223cba0(v5);
  Function_223e9c4(v5[93], v5 + 270, *(uint *)(v5[2] + 24));
  v8 = *(uint *)v5[2];
  *v5 = v8;
  Function_2095e60(v8, (int)v5);
  Function_223ecbc(v5 + 362, 20, 1, v5[97], v5[94]);
  Function_2095cd4(*v5);
  Function_2019120(0, 1);
  Function_201ff0c(0x10u, 1);
  v9 = v5[93];
  Function_2038a1c();
  Function_2039734();
  if ( Function_2013948() )
  {
    Function_2004550(4u, 0x43Eu);
    Function_2004a84(0x43Eu);
  }
  else
  {
    Function_2004550(4u, 0x43Du);
    Function_2004a84(0x43Du);
  }
  Call_FS_CloseFile(v4);
  return 1;
}

//----- (0223B2F0) --------------------------------------------------------
int __fastcall Function_223b2f0(int a1, uint a2, int a3, int a4, int a5, int a6)
{
  uint v6;
  int v7;
  int v8;
  char v9;

  v6 = a2;
  v7 = a3;
  v8 = a4;
  GX_LoadOBJ(*(int **)(a1 + 20), 32 * (16 * a5 + 146), 0x200u);
  v9 = Function_2079edc(v6, v7, v8);
  return Function_2021ef0(a6, v9 + 10);
}

//----- (0223B320) --------------------------------------------------------
uint __fastcall Function_223b320(int a1)
{
  int v1;
  int v2;
  ushort *v3;
  int v4;
  ushort *v5;
  ushort *v6;
  ushort *v7;
  ushort *v8;
  int v9;
  int v10;
  int v11;

  v1 = a1;
  v2 = Function_203608c();
  v3 = (ushort *)Function_2032ee8(v2);
  v4 = Function_203608c();
  v5 = (ushort *)Function_2032ee8(v4 ^ 1);
  v6 = Function_2025f04(v3, 0x1Au);
  v7 = Function_2025f04(v5, 0x1Au);
  v8 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 388), 0x32u);
  Function_223ec78(v1 + 1080, v6, 10, 0, 1, 1);
  Function_223ec78(v1 + 1096, v7, 10, 0, 1, 1);
  Function_223ec78(v1 + 1176, v8, 5, 0, 1, 1);
  Function_20237bc_FreeMsg((int)v8, v9);
  Function_20237bc_FreeMsg((int)v7, v10);
  return Function_20237bc_FreeMsg((int)v6, v11);
}

//----- (0223B3C0) --------------------------------------------------------
uint __fastcall Function_223b3c0(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  uchar v6;
  uint v7;

  v4 = a1;
  v5 = LoadFromNARC_8(54, 0x1Au, a3, a4);
  Function_223c15c(v5);
  Function_223c17c(*(uint *)(v4 + 372));
  Function_223c504(v4, v5);
  Function_223b4f0(v4);
  Function_223b320(v4);
  v6 = Function_2027b50(*(ushort **)(*(uint *)(v4 + 8) + 24));
  Function_200dd0c(*(uint **)(v4 + 372), 0, 473, 10, v6, 26);
  Function_200daa4(*(uint **)(v4 + 372), 0, 503, 11, 0, 26);
  Function_223ecbc(v4 + 1416, 15, 1, *(uint *)(v4 + 388), *(uint *)(v4 + 376));
  Function_2019120(4u, 1);
  Function_2019120(5u, 1);
  Function_2019120(6u, 1);
  Function_201ff74(0x10u, 1);
  Function_2019120(0, 1);
  Function_2019120(1u, 1);
  Function_2019120(2u, 1);
  Function_2019120(3u, 1);
  v7 = Function_201ff0c(0x10u, 1);
  Function_223c63c(v7);
  Function_223c66c(v4, v5);
  Function_223cba0(v4);
  Function_223b7a0(*(uint *)(v4 + 8728), 0, v4);
  Function_223b7a0(*(uint *)(v4 + 8732), 6, v4);
  Function_2021cac(*(uint *)(v4 + 824), 1);
  Function_2021cac(*(uint *)(v4 + 828), 1);
  SetMainLoopFunctionCall((int)Function_223c0e0, v4);
  return Call_FS_CloseFile(v5);
}

//----- (0223B4F0) --------------------------------------------------------
int __fastcall Function_223b4f0(uint *a1)
{
  uint *v1;
  int v2;
  int v3;

  v1 = a1;
  Function_223b710(a1[94], a1[2182], 0);
  Function_223b710(v1[94], v1[2183], 6);
  Function_223b748(v1 + 298, v1[94], v1[97], v1[2182], 0);
  Function_223b748(v1 + 322, v1[94], v1[97], v1[2183], 6);
  v2 = GetNrOfPkmnInParty(v1[2182]);
  v3 = GetNrOfPkmnInParty(v1[2183]);
  return Function_223c4e0(v1[93], v2, v3);
}

//----- (0223B57C) --------------------------------------------------------
int __fastcall Function_88_223b57c(int a1, int *a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint v9;
  uint v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v2 = a2;
  v3 = LoadOverlayData1c(a1);
  v6 = *v2;
  v7 = v3;
  v8 = 0;
  if ( *v2 )
  {
    if ( v6 != 1 )
    {
      if ( v6 == 2 && Function_200f2ac() )
        v8 = 1;
      goto LABEL_23;
    }
    v9 = *(uint *)(v3 + 72);
    if ( v9 <= 7 )
      JUMPOUT(__CS__, *((short *)&off_223B5C4 + v9) + 35894726);
  }
  else if ( Function_200f2ac() )
  {
    *v2 = 1;
    Function_223b320(v7);
    goto LABEL_23;
  }
  switch ( (uchar)v9 )
  {
    case 0:
      *(uint *)(v7 + 72) = Function_223b914();
      break;
    case 1:
      *(uint *)(v7 + 72) = Function_223bed8();
      Function_223ce74(v7);
      break;
    case 2:
      Function_200f174(0, 0, 0, 0, 8, 1, 26);
      *v2 = 2;
      break;
    case 3:
      Function_200f174(0, 0, 0, 0, 8, 1, 26);
      *(uint *)(v7 + 72) = 4;
      break;
    case 4:
      if ( Function_200f2ac() )
      {
        Function_223bfd8(v7);
        Function_223bf7c(v7);
        Function_223c44c(*(uint *)(v7 + 372));
        *(uint *)(v7 + 68) = 1;
        *(uint *)(v7 + 72) = 5;
        v10 = s32_div_f(*(uint *)(v7 + 136), 6);
        Function_223d1ec(v7, v10);
      }
      break;
    case 5:
      if ( CallOverlayDataJumpTable(*(uint *)(v7 + 64), v9, v4, v5) )
      {
        Call_free2(*(uint *)(v7 + 64));
        Function_223b3c0(v7, v11, v12, v13);
        *(uint *)(v7 + 68) = 0;
        *(uint *)(v7 + 136) = *(uchar *)(v7 + 32) + 6 * *(uint *)(v7 + 60);
        Function_223be28(v7);
        Function_223cf68(*(uint *)(v7 + 136), *(uint *)(v7 + 824), 0);
        Function_2039734();
        *(uint *)(v7 + 72) = 6;
      }
      break;
    case 6:
      Function_200f174(0, 1, 1, 0, 8, 1, 26);
      *(uint *)(v7 + 72) = 7;
      break;
    case 7:
      if ( Function_200f2ac() )
        *(uint *)(v7 + 72) = 1;
      break;
    default:
      break;
  }
LABEL_23:
  if ( !*(uint *)(v7 + 68) )
  {
    Function_223e848(v7);
    Function_20219f8(*(uint *)(v7 + 404));
  }
  v14 = *(uint *)(v7 + 372);
  Function_2038a1c();
  return v8;
}

//----- (0223B710) --------------------------------------------------------
int __fastcall Function_223b710(int *a1, int a2, int a3)
{
  uint *v3;
  int *v4;
  int v5;
  int v6;
  int result;
  int v8;

  v3 = (uint *)a2;
  v4 = a1;
  v5 = a3;
  v6 = 0;
  result = GetNrOfPkmnInParty(a2);
  if ( result > 0 )
  {
    do
    {
      GetAdrOfPkmnInParty(v3, v6);
      Function_2076b10_Dummy();
      Function_200b5cc(v4, v6++ + v5, v8);
      result = GetNrOfPkmnInParty((int)v3);
    }
    while ( v6 < result );
  }
  return result;
}

//----- (0223B748) --------------------------------------------------------
int __fastcall Function_223b748(int a1, uint *a2, ushort **a3, int a4, int a5)
{
  int v5;
  int v6;
  int result;
  ushort *v8;
  int v9;
  uint *v10;
  ushort **v11;
  int v12;

  v5 = a1;
  v10 = a2;
  v11 = a3;
  v12 = a4;
  v6 = 0;
  result = GetNrOfPkmnInParty(a4);
  if ( result > 0 )
  {
    do
    {
      v8 = Function_200b29c(v10, v11, a5 + 1 + v6, 0x1Au);
      Function_223ec78(v5, v8, 8, 0, 1, 0);
      Function_20237bc_FreeMsg((int)v8, v9);
      v5 += 16;
      ++v6;
      result = GetNrOfPkmnInParty(v12);
    }
    while ( v6 < result );
  }
  return result;
}

//----- (0223B7A0) --------------------------------------------------------
int __fastcall Function_223b7a0(int a1, int a2, int a3)
{
  int v3;
  int result;
  int v5;
  uint *v6;
  int v7;
  int v8;
  uint *v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v10 = a1;
  v11 = a2;
  v13 = a3;
  v3 = 0;
  result = GetNrOfPkmnInParty(a1);
  if ( result > 0 )
  {
    do
    {
      v12 = v3 + v11;
      v5 = v13 + 16 * (v3 + v11);
      v6 = (uint *)(v13 + 4 * (v3 + v11));
      v7 = Function_2079d8c(*(ushort *)(v5 + 1680), *(uchar *)(v5 + 1685), *(uchar *)(v5 + 1686));
      v6[484] = Function_2006f50(19, v7, 0, (uint *)(v13 + 1984 + 4 * (v3 + v11)), 26);
      DC_FlushRange(*(uint *)(v6[496] + 20), 512);
      Function_223b2f0(
        v6[496],
        *(ushort *)(v5 + 1680),
        *(uchar *)(v5 + 1686),
        *(uchar *)(v5 + 1685),
        v3 + v11,
        v6[220]);
      Function_2021cac(v6[220], 1);
      if ( *(ushort *)(v5 + 1682) )
      {
        Function_2021cac(*(uint *)(v13 + 4 * v12 + 928), 1);
        Function_2021d6c(*(uint *)(v13 + 4 * v12 + 928), *(ushort *)(v5 + 1682) + 2);
      }
      else
      {
        Function_2021cac(v6[232], 0);
      }
      if ( *(uint *)(v5 + 1692) )
      {
        v8 = v13 + 4 * v12;
        Function_2021cac(*(uint *)(v8 + 976), 1);
        Function_2021d6c(*(uint *)(v8 + 976), 0x15u);
      }
      else
      {
        Function_2021cac(v6[244], 0);
      }
      ++v3;
      result = GetNrOfPkmnInParty(v10);
    }
    while ( v3 < result );
  }
  if ( v3 < 6 )
  {
    v9 = (uint *)(v13 + 4 * v11 + 4 * v3);
    do
    {
      Function_2021cac(v9[220], 0);
      Function_2021cac(v9[232], 0);
      result = Function_2021cac(v9[244], 0);
      ++v3;
      ++v9;
    }
    while ( v3 < 6 );
  }
  return result;
}

//----- (0223B914) --------------------------------------------------------
int __fastcall Function_223b914(int a1)
{
  int v1;
  char v2;
  int v3;
  uint v4;
  int i;
  int *v6;
  int v7;
  int v8;
  int v9;
  uint v10;
  uint v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int *v18;
  int j;
  int *v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int *v25;
  int v26;
  int result;

  v1 = a1;
  Function_223e998();
  v4 = *(uint *)(v1 + 76);
  if ( v4 <= 0x13 )
    JUMPOUT(__CS__, (char *)&off_223B932 + *((short *)&off_223B932 + v4) + 2);
  switch ( v2 )
  {
    case 0:
      Function_20364f0(80);
      Function_2017de0(2);
      Function_223e894(v1);
      for ( i = 0; i < GetNrOfPkmnInParty(*(uint *)(*(uint *)(v1 + 8) + 8)); ++i )
      {
        v6 = GetAdrOfPkmnInParty(*(uint **)(*(uint *)(v1 + 8) + 8), i);
        if ( GetPkmnData(v6, 0xAEu, 0) == 492 )
        {
          if ( GetPkmnData(v6, 0x70u, 0) )
            Function_2077acc((int)v6, 0, v7, v8);
        }
      }
      ++*(uint *)(v1 + 76);
      goto LABEL_58;
    case 1:
      if ( Function_2036540(80) )
      {
        if ( *(uint *)(*(uint *)(v1 + 8) + 52) )
          v9 = 2;
        else
          v9 = 6;
        *(uint *)(v1 + 76) = v9;
        if ( !Function_203608c() )
        {
          v10 = PRNG();
          v11 = (ushort)s32_div_f(v10, 1093);
          if ( v11 >= 0x3C )
            ErrorHandler();
          v12 = Function_203608c();
          Function_223d044(v12, 31, v11 + 3);
        }
        Function_223d0c0(*(uint *)(v1 + 4));
        Function_223e984(v1);
      }
      goto LABEL_58;
    case 2:
      if ( *(uint *)(v1 + 8896) )
        *(uint *)(v1 + 76) = v4 + 1;
      goto LABEL_58;
    case 3:
      if ( !--*(uint *)(v1 + 8896) )
        *(uint *)(v1 + 76) = 4;
      goto LABEL_58;
    case 4:
      Function_2038ed4((uint *)(v1 + 13980));
      ++*(uint *)(v1 + 76);
      goto LABEL_58;
    case 5:
      if ( Function_2038edc(*(uint *)(v1 + 4), 2, (uint *)(v1 + 13980), v3) )
        ++*(uint *)(v1 + 76);
      goto LABEL_58;
    case 6:
      Function_203632c(1);
      Function_20364f0(81);
      ++*(uint *)(v1 + 76);
      goto LABEL_58;
    case 7:
      if ( Function_2036540(81) )
        ++*(uint *)(v1 + 76);
      goto LABEL_58;
    case 8:
      *(uint *)(v1 + 80) = 0;
      *(uint *)(v1 + 84) = 0;
      *(uint *)(v1 + 88) = 0;
      if ( Function_203608c() == 1 )
      {
        v13 = Function_203608c();
        Function_223d098(v13, *(uint *)(v1 + 8728), *(uint *)(v1 + 80));
        ++*(uint *)(v1 + 80);
      }
      ++*(uint *)(v1 + 76);
      goto LABEL_58;
    case 9:
      if ( *(uint *)(v1 + 84) )
        *(uint *)(v1 + 76) = 10;
      goto LABEL_58;
    case 10:
      *(uint *)(v1 + 76) = v4 + 1;
      Function_223b4f0((uint *)v1);
      goto LABEL_58;
    case 11:
      v14 = 0;
      v15 = v1;
      v16 = 0;
      do
      {
        ++v14;
        *(ushort *)(v15 + 1680) = 0;
        v15 += 16;
      }
      while ( v14 < 13 );
      if ( GetNrOfPkmnInParty(*(uint *)(v1 + 8728)) > 0 )
      {
        v17 = v1 + 1680;
        do
        {
          v18 = GetAdrOfPkmnInParty(*(uint **)(v1 + 8728), v16);
          Function_223bd18(v18, v17);
          v17 += 16;
          ++v16;
        }
        while ( v16 < GetNrOfPkmnInParty(*(uint *)(v1 + 8728)) );
      }
      for ( j = 0; j < GetNrOfPkmnInParty(*(uint *)(v1 + 8732)); ++j )
      {
        v20 = GetAdrOfPkmnInParty(*(uint **)(v1 + 8732), j);
        Function_223bd18(v20, v1 + 1680 + 16 * (j + 6));
      }
      *(ushort *)(v1 + 1872) = 1;
      ++*(uint *)(v1 + 76);
      goto LABEL_58;
    case 12:
      v21 = Function_203608c();
      v22 = Function_2032ee8(v21);
      Function_223d0d4(v22, *(uint *)(v1 + 8740), v1 + 8744);
      ++*(uint *)(v1 + 76);
      goto LABEL_58;
    case 13:
      if ( *(uint *)(v1 + 84) == 3 )
        *(uint *)(v1 + 76) = v4 + 1;
      goto LABEL_58;
    case 14:
      v23 = LoadVariableAreaAdress_16(*(uint *)(v1 + 4));
      Function_223d140(v23);
      ++*(uint *)(v1 + 76);
      goto LABEL_58;
    case 15:
      if ( *(uint *)(v1 + 84) == 4 )
      {
        *(uint *)(v1 + 76) = v4 + 1;
        Function_201ff0c(0x10u, 0);
        Function_223b7a0(*(uint *)(v1 + 8728), 0, v1);
        Function_223b7a0(*(uint *)(v1 + 8732), 6, v1);
        v24 = 0;
        do
        {
          Function_2021cac(*(uint *)(v1 + 824), 1);
          ++v24;
          v1 += 4;
        }
        while ( v24 < 2 );
      }
      goto LABEL_58;
    case 16:
      Function_200aae0(8, 0, -16, 30, 1);
      Function_2019120(1u, 1);
      Function_2019120(2u, 1);
      Function_2019120(3u, 1);
      Function_201ff0c(0x10u, 1);
      ++*(uint *)(v1 + 76);
      goto LABEL_58;
    case 17:
      if ( Function_200ac1c(1) )
      {
        v25 = GetAdrOfPkmnInParty(*(uint **)(v1 + 8728), 0);
        *(uint *)(v1 + 8464) = Function_223c800(0, v25, v1 + 2032, v1 + 8432);
        v26 = *(uint *)(v1 + 8728);
        Function_223c8d8(v1 + 1080);
        ++*(uint *)(v1 + 76);
      }
      goto LABEL_58;
    case 18:
      Function_200aae0(8, 0, -16, 23, 2);
      Function_2019120(4u, 1);
      Function_2019120(5u, 1);
      Function_2019120(6u, 1);
      Function_201ff74(0x10u, 1);
      ++*(uint *)(v1 + 76);
      Function_223e8b4(v1);
      goto LABEL_58;
    case 19:
      if ( !Function_200ac1c(2) )
        goto LABEL_58;
      Function_200e084(v1 + 1448, 0);
      Function_2019cb8(*(uint *)(v1 + 372), 0, 0, 0, 0, 0x20u, 0x18u, 0);
      Function_223ecbc(v1 + 1416, 15, 1, *(uint *)(v1 + 388), *(uint *)(v1 + 376));
      Function_2017df0(2);
      result = 1;
      break;
    default:
LABEL_58:
      result = 0;
      break;
  }
  return result;
}

//----- (0223BD18) --------------------------------------------------------
int __fastcall Function_223bd18(int *a1, ushort *a2)
{
  int *v2;
  ushort *v3;
  int v4;
  uint v5;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = InitEncryptPkmnData(a1);
  *((uchar *)v3 + 4) = GetPkmnData(v2, 0x9Bu, 0);
  *v3 = GetPkmnData(v2, 5u, 0);
  *((uchar *)v3 + 6) = GetPkmnData(v2, 0x70u, 0);
  *((uchar *)v3 + 5) = GetPkmnData(v2, 0x4Cu, 0);
  v3[4] = GetPkmnData(v2, 0x6Fu, 0);
  *((uint *)v3 + 3) = GetPkmnData(v2, 0xA2u, 0);
  v5 = GetPkmnData(v2, 6u, 0);
  InitEncryptPkmnData_Part1And2(v2, v4);
  result = *v3;
  if ( *v3 )
  {
    result = GetPkmnBaseData2(result, *((uchar *)v3 + 6), 0x1Cu);
    v3[5] = result;
  }
  if ( v5 )
  {
    result = Function_207d2d0((ushort)v5) + 1;
    v3[1] = result;
  }
  return result;
}

//----- (0223BDA4) --------------------------------------------------------
int __fastcall Function_223bda4(int a1, uint a2)
{
  uint v2;
  int v3;
  int v4;
  int *v5;
  uint v6;
  int v7;

  v2 = a2;
  v3 = a1;
  s32_div_f(a2, 6);
  v5 = GetAdrOfPkmnInParty(*(uint **)(v3 + 8732), v4);
  v6 = s32_div_f(v2, 6);
  *(uint *)(v3 + 8464) = Function_223c800(1, v5, v3 + 2032 + 3200 * v6, v3 + 8432 + 16 * v6);
  v7 = *(uint *)(v3 + 8732);
  Function_223c8d8(v3 + 1080);
  return Function_2021d6c(*(uint *)(v3 + 1036), *(uchar *)(v3 + 16 * v2 + 1684) + 5);
}

//----- (0223BE28) --------------------------------------------------------
int __fastcall Function_223be28(int result)
{
  uint *v1;
  int v2;
  int *v3;
  uint v4;
  uint v5;
  uint v6;

  v1 = (uint *)result;
  v2 = *(uint *)(result + 136);
  if ( v2 != 12 )
  {
    if ( v2 >= 6 )
    {
      Function_223bda4(result, v2);
      Function_223cb34(v1 + 270, 0, v1);
      result = Function_2021cac(v1[258], 0);
    }
    else
    {
      v3 = GetAdrOfPkmnInParty(*(uint **)(result + 8728), v2);
      v4 = s32_div_f(v1[34], 6);
      v1[2116] = Function_223c800(0, v3, &v1[800 * v4 + 508], &v1[4 * v4 + 2108]);
      v5 = v1[2182];
      v6 = v1[34];
      Function_223c8d8(v1 + 270);
      Function_223cb34(v1 + 270, 1, v1);
      result = Function_2021cac(v1[259], 0);
    }
  }
  return result;
}

//----- (0223BED8) --------------------------------------------------------
int __fastcall Function_223bed8(int a1)
{
  uint *v1;
  int (*v2)(void);
  int result;

  v1 = (uint *)a1;
  v2 = *(int (**)(void))(a1 + 8724);
  if ( v2 )
    *(uint *)(a1 + 320) = v2();
  switch ( (uchar)v1[80] )
  {
    case 2u:
      result = 2;
      break;
    case 3u:
      result = 3;
      break;
    default:
      if ( Function_223cff4(v1 + 83, v1 + 34, v1[206], v1 + 420, 0) )
        Function_223be28((int)v1);
      Function_223cff4(v1 + 84, v1 + 35, v1[207], v1 + 420, 1);
      Function_223cef0(v1 + 36);
      Function_223d058(v1, 23, v1[34]);
      result = 1;
      break;
  }
  return result;
}

//----- (0223BF7C) --------------------------------------------------------
int *__fastcall Function_223bf7c(int **a1)
{
  int **v1;
  int v2;
  int **v3;

  v1 = a1;
  Function_200a4e4(a1[180]);
  Function_200a4e4(v1[184]);
  Function_200a6dc(v1[181]);
  Function_200a6dc(v1[185]);
  v2 = 0;
  v3 = v1;
  do
  {
    Function_2009754(v3[176]);
    ++v2;
    ++v3;
  }
  while ( v2 < 4 );
  Function_2021964(v1[101]);
  Function_200a878();
  Function_201e958();
  return Function_201f8b4();
}

//----- (0223BFD8) --------------------------------------------------------
int __fastcall Function_223bfd8(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;
  int v6;

  v1 = a1;
  v2 = 0;
  if ( GetNrOfPkmnInParty(*(uint *)(a1 + 8728)) > 0 )
  {
    v3 = v1;
    do
    {
      free(*(uint *)(v3 + 1936));
      v3 += 4;
      ++v2;
    }
    while ( v2 < GetNrOfPkmnInParty(*(uint *)(v1 + 8728)) );
  }
  v4 = 0;
  result = GetNrOfPkmnInParty(*(uint *)(v1 + 8732));
  if ( result > 0 )
  {
    v6 = v1;
    do
    {
      free(*(uint *)(v6 + 1960));
      v6 += 4;
      ++v4;
      result = GetNrOfPkmnInParty(*(uint *)(v1 + 8732));
    }
    while ( v4 < result );
  }
  return result;
}

//----- (0223C03C) --------------------------------------------------------
int __fastcall Function_88_223c03c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  *(uint *)(LoadPtrToOverWorldDataIn18(v1) + 40) = *(uint *)(v2 + 92);
  Function_223bfd8(v2);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 400), v3);
  free(*(uint *)(v2 + 8732));
  Function_223bf7c((int **)v2);
  Function_223ec04(v2 + 1080);
  Function_223c44c(*(uint *)(v2 + 372));
  Function_2018238(0x1Au, *(uint *)(v2 + 372));
  Function_200b190(*(ushort **)(v2 + 388));
  Function_200b3f0(*(uint **)(v2 + 384), v4);
  Function_200b3f0(*(uint **)(v2 + 380), v5);
  Function_200b3f0(*(uint **)(v2 + 376), v6);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 396), v7);
  FreeSomeDataAndStore0InOverlayData1c(v1);
  SetMainLoopFunctionCall(0, 0);
  Function_201807c(26);
  return 1;
}

//----- (0223C0E0) --------------------------------------------------------
int __fastcall Function_223c0e0(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  Function_201c2b8(*(uint *)(a1 + 372));
  v2 = *(uint *)(v1 + 8464);
  if ( v2 )
  {
    v3 = v2 - 1;
    GXS_LoadOBJ((int *)(v1 + 2032 + 3200 * (v2 - 1)), 3200 * (v2 - 1), 0xC80u);
    Call_LoadFromNARC_RLCN(
      *(ushort *)(v1 + 16 * v3 + 8432),
      *(ushort *)(v1 + 16 * v3 + 8436),
      5u,
      32 * (v3 + 2),
      32,
      26);
    *(uint *)(v1 + 8464) = 0;
  }
  Function_201dcac();
  Function_200a858();
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (0223C15C) --------------------------------------------------------
char *Function_223c15c()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_223EF2C;
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

//----- (0223C17C) --------------------------------------------------------
uint __fastcall Function_223c17c(uint *a1)
{
  uint *v1;
  int v2;
  uint result;
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
  int v53;
  int v54;
  int v55;
  int v56;

  v1 = a1;
  v53 = 1;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  SetGraphicsModes(&v53);
  v46 = 0;
  v47 = 0;
  v48 = 2048;
  v49 = 0;
  v50 = 1966081;
  v51 = 0;
  v52 = 0;
  Function_20183c4(v1, 0, &v46, 0);
  Function_2019ebc(v1, 0);
  v39 = 0;
  v40 = 0;
  v41 = 2048;
  v42 = 0;
  v43 = 35586049;
  v44 = 256;
  v45 = 0;
  Function_20183c4(v1, 1u, &v39, 0);
  Function_2019ebc(v1, 1u);
  v32 = 0;
  v33 = 0;
  v34 = 2048;
  v35 = 0;
  v36 = 68943873;
  v37 = 512;
  v38 = 0;
  Function_20183c4(v1, 2u, &v32, 0);
  Function_2019ebc(v1, 2u);
  v25 = 0;
  v26 = 0;
  v27 = 2048;
  v28 = 0;
  v29 = 69009409;
  v30 = 768;
  v31 = 0;
  Function_20183c4(v1, 3u, &v25, 0);
  v18 = 0;
  v19 = 0;
  v20 = 2048;
  v21 = 0;
  v22 = 69140481;
  v23 = 0;
  v24 = 0;
  Function_20183c4(v1, 4u, &v18, 0);
  Function_2019ebc(v1, 4u);
  v11 = 0;
  v12 = 0;
  v13 = 2048;
  v14 = 0;
  v15 = 1966081;
  v16 = 256;
  v17 = 0;
  Function_20183c4(v1, 5u, &v11, 0);
  v4 = 0;
  v5 = 0;
  v6 = 2048;
  v7 = 0;
  v8 = 1769473;
  v9 = 256;
  v10 = 0;
  Function_20183c4(v1, 6u, &v4, 0);
  Function_2019690(0, 32, 0, 0x1Au);
  Function_2019690(1u, 32, 0, 0x1Au);
  Function_2019690(4u, 32, 0, 0x1Au);
  v2 = 0;
  do
  {
    Function_2019184((int)v1, (uchar)v2, 0, 0);
    Function_2019184((int)v1, (uchar)v2, 3u, 0);
    Function_2019184((int)v1, (v2 + 4) & 0xFF, 0, 0);
    Function_2019184((int)v1, (v2++ + 4) & 0xFF, 3u, 0);
  }
  while ( v2 < 4 );
  Function_2019120(0, 0);
  Function_2019120(1u, 0);
  Function_2019120(2u, 0);
  Function_2019120(3u, 0);
  Function_2019120(4u, 0);
  Function_2019120(5u, 0);
  Function_2019120(6u, 0);
  result = REG_DISPCNT & 0xFFFF1FFF;
  REG_DISPCNT &= 0xFFFF1FFF;
  return result;
}

//----- (0223C370) --------------------------------------------------------
int __fastcall Function_223c370(int a1, int a2)
{
  int v2;
  uint *v3;
  uint *v4;
  int v5;
  int v6;

  v2 = a1;
  v3 = (uint *)LoadPtrToOverWorldDataIn18(a2);
  v4 = v3;
  *(uint *)(v2 + 8) = v3;
  *(uint *)(v2 + 1640) = 4;
  *(uint *)(v2 + 68) = 0;
  *(uint *)(v2 + 1636) = 0;
  *(uint *)(v2 + 364) = 6;
  *(uint *)(v2 + 368) = 6;
  *(uint *)(v2 + 136) = 0;
  *(uint *)(v2 + 140) = 6;
  *(uint *)(v2 + 320) = 0;
  *(uint *)(v2 + 72) = 0;
  *(uint *)(v2 + 76) = 0;
  *(uint *)(v2 + 8724) = Function_223d150;
  *(uint *)(v2 + 96) = 0;
  *(uint *)(v2 + 100) = 0;
  *(uint *)(v2 + 92) = 0;
  *(uint *)(v2 + 8464) = 0;
  *(uint *)(v2 + 13984) = -1;
  *(uint *)(v2 + 13988) = -1;
  *(uint *)(v2 + 8896) = 0;
  *(uint *)(v2 + 13996) = 0;
  *(uint *)(v2 + 14000) = 0;
  *(uint *)(v2 + 8728) = v3[2];
  *(uint *)(v2 + 8740) = v3[3];
  *(uint *)(v2 + 4) = v3[4];
  v5 = GetSizeOfPkmnParty();
  *(uint *)(v2 + 8732) = malloc(0x1Au, v5);
  ZeroFillPkmnPartyStructure(*(int **)(v2 + 8732), 6);
  v6 = GetSizeOfPkmnParty();
  Call_FillMemWithValue(*(int **)(v2 + 8732), 0xFFu, v6);
  *(uint *)(v2 + 396) = Function_2025f04((ushort *)v4[1], 0x1Au);
  *(uint *)(v2 + 400) = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 388), 0x2Au);
  return Function_2038f8c(v4[5]);
}

//----- (0223C44C) --------------------------------------------------------
int __fastcall Function_223c44c(int a1)
{
  int v1;

  v1 = a1;
  Function_2019044(a1, 6);
  Function_2019044(v1, 5);
  Function_2019044(v1, 4);
  Function_2019044(v1, 3);
  Function_2019044(v1, 2);
  Function_2019044(v1, 1);
  return Function_2019044(v1, 0);
}

//----- (0223C488) --------------------------------------------------------
uint *__fastcall Function_223c488(int a1, uint a2, int a3, uchar a4, int a5, int a6, int a7, int a8)
{
  int v8;
  uchar v9;
  uint *result;
  int v11;
  int v12;

  v8 = a3;
  v9 = a4;
  result = Function_200723c(a1, a2, a7, a8, 1);
  v11 = (int)result;
  if ( result )
  {
    if ( Function_20a7248((int)result, &v12) )
    {
      if ( !a6 )
        a6 = *(uint *)(v12 + 8);
      if ( Function_2019fe4(v8, v9) )
        Function_2019574(v8, v9, (int *)(v12 + 12), a6);
    }
    result = (uint *)free(v11);
  }
  return result;
}

//----- (0223C4E0) --------------------------------------------------------
int __fastcall Function_223c4e0(int a1)
{
  uint *v1;
  int *v2;

  v1 = (uint *)a1;
  v2 = (int *)Function_2019fe4(a1, 2);
  return Function_2019460(v1, 2u, v2, 1536, 0);
}

//----- (0223C504) --------------------------------------------------------
int __fastcall Function_223c504(int a1, int a2)
{
  int v2;
  uint *v3;

  v2 = a2;
  v3 = *(uint **)(a1 + 372);
  Function_2007130(a2, 0, 4u, 0, 288, 26);
  Function_2007130(v2, 0, 0, 0, 288, 26);
  Function_201975c(0, 0);
  Function_201975c(4u, 0);
  LoadFromNARC_PlFont2(0, 416, 26);
  Function_20070e8(v2, 1u, v3, 2u, 0, 9216, 1, 26);
  Function_223c488(v2, 3u, (int)v3, 2u, 0, 1536, 1, 26);
  Function_200710c(v2, 4u, v3, 3u, 0, 1536, 1, 26);
  LoadFromNARC_PlFont2(0, 64, 26);
  LoadFromNARC_PlFont1(0, 96, 26);
  Function_20070e8(v2, 2u, v3, 5u, 0, 2048, 1, 26);
  Function_200710c(v2, 5u, v3, 5u, 0, 1536, 1, 26);
  Function_200710c(v2, 6u, v3, 6u, 0, 1536, 1, 26);
  LoadFromNARC_PlFont2(4u, 64, 26);
  LoadFromNARC_PlFont1(4u, 96, 26);
  return Function_2019ebc(v3, 4u);
}

//----- (0223C63C) --------------------------------------------------------
int Function_223c63c()
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = 20;
  v2 = 2048;
  v3 = 2048;
  v4 = 26;
  Function_201e86c(&v1);
  Function_201f834(20, 0x1Au);
  Function_201e994();
  return Function_201f8e4();
}

//----- (0223C66C) --------------------------------------------------------
int __fastcall Function_223c66c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int *v5;
  int v6;
  int v7;

  v2 = a1;
  v3 = a2;
  Function_20a7944();
  Function_200a784(0, 127, 0, 32, 0, 0x7Fu, 0, 0x20u, 0x1Au);
  *(uint *)(v2 + 404) = Function_20095c4(45, v2 + 408, 26, v4);
  v5 = 0;
  v6 = v2;
  do
  {
    *(uint *)(v6 + 704) = Function_2009714(2, v5, 0x1Au);
    v5 = (int *)((char *)v5 + 1);
    v6 += 4;
  }
  while ( (int)v5 < 4 );
  *(uint *)(v2 + 720) = Function_2009a4c(*(uint *)(v2 + 704), v3, 7u, 1, 0, 1, 0x1Au);
  *(uint *)(v2 + 724) = Function_2009b04(*(uint *)(v2 + 708), v3, 0, 0, 0, 1, 9, 0x1Au);
  *(uint *)(v2 + 728) = Function_2009bc4(*(uint *)(v2 + 712), v3, 8u, 1, 0, 2u, 0x1Au);
  *(uint *)(v2 + 732) = Function_2009bc4(*(uint *)(v2 + 716), v3, 9u, 1, 0, 3u, 0x1Au);
  *(uint *)(v2 + 736) = Function_2009a4c(*(uint *)(v2 + 704), v3, 0xAu, 1, 1, 2, 0x1Au);
  *(uint *)(v2 + 740) = Function_2009b04(*(uint *)(v2 + 708), v3, 0, 0, 1, 2, 10, 0x1Au);
  *(uint *)(v2 + 744) = Function_2009bc4(*(uint *)(v2 + 712), v3, 0xBu, 1, 1, 2u, 0x1Au);
  *(uint *)(v2 + 748) = Function_2009bc4(*(uint *)(v2 + 716), v3, 0xCu, 1, 1, 3u, 0x1Au);
  Function_200a328(*(int **)(v2 + 720));
  Function_200a328(*(int **)(v2 + 736));
  Function_200a5c8(*(int **)(v2 + 724));
  Function_200a5c8(*(int **)(v2 + 740));
  v7 = Function_2079fd0();
  return Call_LoadFromNARC_RLCN(19, v7, 1u, 320, 128, 26);
}

//----- (0223C800) --------------------------------------------------------
int __fastcall Function_223c800(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int *v6;
  ushort *v7;
  uint v8;
  int v9;

  v4 = a1;
  v5 = a3;
  v6 = (int *)a2;
  v7 = (ushort *)a4;
  Function_2075ef4(a4, a2, 2u);
  v8 = GetPkmnData(v6, 0, 0);
  v9 = GetPkmnData(v6, 5u, 0);
  Function_20136a4(*v7, v7[1], 0x1Au, 0, 0, 10, 10, v5, v8, 0, 2, v9);
  DC_FlushRange(v5, 3200);
  return v4 + 1;
}

//----- (0223C860) --------------------------------------------------------
uint __fastcall Function_223c860(int a1, uint *a2, int a3, int a4, int a5)
{
  int v5;
  uint *v6;
  int v7;
  int v8;
  ushort *v9;
  int *v10;
  int v11;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  v9 = (ushort *)Function_2023790(20, 0x1Au);
  v10 = GetAdrOfPkmnInParty(v6, v7);
  GetPkmnData(v10, 0x77u, v9);
  Function_201ada4_ClearTextBox(v5, 0);
  Function_223ec78(v5, v9, v8, 0, a5, 1);
  return Function_20237bc_FreeMsg((int)v9, v11);
}

//----- (0223C8AC) --------------------------------------------------------
int __fastcall Function_223c8ac(ushort *a1, uint *a2, int a3, int a4)
{
  int v4;
  int v5;
  int *v6;
  int result;

  v4 = *a1;
  v5 = a4;
  if ( v4 != 29 && v4 != 32 || (v6 = GetAdrOfPkmnInParty(a2, a3), GetPkmnData(v6, 0x4Du, 0)) )
    result = v5;
  else
    result = 2;
  return result;
}

//----- (0223C8D8) --------------------------------------------------------
uint __fastcall Function_223c8d8(int a1, int a2, uint *a3, int a4, int a5)
{
  int v5;
  int v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  ushort *v13;
  int v14;
  int *v15;
  ushort v16;
  int v17;
  int *v18;
  int v19;
  uint v20;
  ushort *v21;
  int v22;
  uint *v24;
  int v25;
  int v26;

  v5 = a1;
  v6 = a2;
  v24 = a3;
  v25 = a4;
  v7 = GetAdrOfPkmnInParty(a3, a4);
  v8 = Function_20765ac((int)v7, 2u);
  Function_2021cac(*(uint *)(a5 + 1024 + 4 * v6), 1);
  Function_223e87c(*(uint *)(a5 + 1024 + 4 * v6), dword_223EF54[3 * v6], v8 + dword_223EF58[3 * v6] + 192);
  if ( !v6 )
    Function_2021d0c(*(uint *)(a5 + 1024), *(ushort *)(a5 + 16 * v25 + 1690));
  v9 = 4 * (v6 + 2);
  Function_2021d6c(*(uint *)(a5 + 1024 + v9), *(uchar *)(a5 + 16 * v25 + 1684) + 5);
  Function_2021cac(*(uint *)(a5 + 1024 + v9), 1);
  Function_223c860(v5 + 16 * (v6 + 26), v24, v25, 9, 6);
  v26 = 16 * (v25 + 6 * v6);
  v10 = Function_223c8ac(
          (ushort *)(a5 + 1680 + 16 * (v25 + 6 * v6)),
          v24,
          v25,
          *(ushort *)(a5 + 16 * (v25 + 6 * v6) + 1688));
  if ( *(uchar *)(a5 + 1685 + v26) )
    v10 = 2;
  if ( v10 )
  {
    if ( v10 == 1 )
    {
      v12 = 4 * (v6 + 4);
      Function_2021cac(*(uint *)(a5 + 1024 + v12), 1);
      Function_2021d6c(*(uint *)(a5 + 1024 + v12), 0x16u);
    }
    else if ( v10 == 2 )
    {
      Function_2021cac(*(uint *)(a5 + 4 * (v6 + 4) + 1024), 0);
    }
  }
  else
  {
    v11 = 4 * (v6 + 4);
    Function_2021cac(*(uint *)(a5 + 1024 + v11), 1);
    Function_2021d6c(*(uint *)(a5 + 1024 + v11), 0x17u);
  }
  if ( *(uchar *)(a5 + 1685 + v26) )
  {
    Function_201acf4(v5 + 16 * (v6 + 28));
  }
  else
  {
    v13 = (ushort *)Function_2023790(10, 0x1Au);
    v14 = 16 * (v6 + 28);
    Function_201ada4_ClearTextBox(v5 + v14, 0);
    Function_200b1b8_CallMsgDecrypt(*(ushort ***)(a5 + 388), 0x29u, v13);
    Function_223ec78(v5 + v14, v13, 9, 255, 6, 0);
    v15 = GetAdrOfPkmnInParty(v24, v25);
    v16 = GetPkmnData(v15, 0xA1u, 0);
    Function_20238a0(v13, v16, 3, 0, 1);
    Function_223ec78(v5 + v14, v13, 9, 0, 30, 0);
    Function_20237bc_FreeMsg((int)v13, v17);
  }
  Function_223ec78(v5 + 16 * (v6 + 30), *(uint *)(a5 + 400), 7, 0, 3, 0);
  v18 = GetAdrOfPkmnInParty(v24, v25);
  v19 = 16 * (v6 + 32);
  v20 = (ushort)GetPkmnData(v18, 6u, 0);
  Function_201ada4_ClearTextBox(v5 + v19, 0);
  v21 = (ushort *)Function_2023790(20, 0x1Au);
  Function_207cfa0(v21, v20, 0x1Au);
  Function_223ec78(v5 + v19, v21, 9, 0, 3, 0);
  return Function_20237bc_FreeMsg((int)v21, v22);
}

//----- (0223CB34) --------------------------------------------------------
int __fastcall Function_223cb34(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  Function_2021cac(*(uint *)(a3 + 4 * a2 + 1024), 0);
  Function_2021cac(*(uint *)(v5 + 4 * (v3 + 2) + 1024), 0);
  Function_2021cac(*(uint *)(v5 + 4 * (v3 + 4) + 1024), 0);
  Function_201acf4(v4 + 16 * (v3 + 26));
  Function_201acf4(v4 + 16 * (v3 + 28));
  Function_201acf4(v4 + 16 * (v3 + 30));
  return Function_201acf4(v4 + 16 * (v3 + 32));
}

//----- (0223CBA0) --------------------------------------------------------
int __fastcall Function_223cba0(int *a1)
{
  int *v1;
  int v2;
  int *v3;
  int *v4;
  int *v5;
  int v6;
  int *v7;
  int *v8;
  int v9;
  int *v10;
  int *v11;
  int v12;
  int *v13;
  int *v14;
  int v15;
  int v16;
  int v17;
  int result;
  int v19;
  uint *v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  short v27;
  int v28;
  int v29;
  int v30;

  v1 = a1;
  Function_20093b4((int)(a1 + 188), 0, 0, 0, 0, -1, -1, 0, 2, a1[176], a1[177], a1[178], a1[179], 0, 0);
  Function_20093b4((int)(v1 + 197), 1, 1, 1, 1, -1, -1, 0, 0, v1[176], v1[177], v1[178], v1[179], 0, 0);
  v19 = v1[101];
  v20 = v1 + 188;
  v22 = 393216;
  v2 = 0;
  v21 = 0x20000;
  v23 = 0;
  v24 = 4096;
  v25 = 4096;
  v26 = 4096;
  v27 = 0;
  v29 = 1;
  v3 = &dword_223EF9C;
  v28 = 0;
  v30 = 26;
  v4 = v1;
  do
  {
    v21 = *v3 << 12;
    v22 = v3[1] << 12;
    v4[206] = Function_2021aa0((uint **)&v19);
    Function_2021cc8(v4[206], 1);
    Function_223cf68(v4[34], v4[206], v2);
    Function_2021f58(v4[206], 100);
    Function_2021cac(v4[206], 0);
    ++v2;
    v3 += 2;
    ++v4;
  }
  while ( v2 < 2 );
  v5 = &dword_223EF9C;
  v6 = 0;
  v7 = v1;
  do
  {
    v21 = (*v5 + 16) << 12;
    v22 = (v5[1] - 6) << 12;
    v7[220] = Function_2021aa0((uint **)&v19);
    Function_2021cc8(v7[220], 1);
    Function_2021d6c(v7[220], v6 + 5);
    Function_2021f58(v7[220], 5);
    Function_2021cac(v7[220], 0);
    ++v6;
    v5 += 2;
    ++v7;
  }
  while ( v6 < 12 );
  v8 = &dword_223EF9C;
  v9 = 0;
  v10 = v1;
  do
  {
    v21 = (*v8 + 36) << 12;
    v22 = (v8[1] + 16) << 12;
    v28 = 0;
    v10[232] = Function_2021aa0((uint **)&v19);
    Function_2021f58(v10[232], 3);
    Function_2021cac(v10[232], 0);
    ++v9;
    v8 += 2;
    ++v10;
  }
  while ( v9 < 12 );
  v11 = &dword_223EF9C;
  v12 = 0;
  v13 = v1;
  do
  {
    v21 = (*v11 + 45) << 12;
    v22 = (v11[1] + 16) << 12;
    v28 = 0;
    v13[244] = Function_2021aa0((uint **)&v19);
    Function_2021f58(v13[244], 3);
    Function_2021cac(v13[244], 0);
    ++v12;
    v11 += 2;
    ++v13;
  }
  while ( v12 < 12 );
  v21 = 393216;
  v22 = 270336;
  v1[262] = Function_2021aa0((uint **)&v19);
  Function_2021cc8(v1[262], 1);
  Function_2021d6c(v1[262], 0x14u);
  Function_2021cac(v1[262], 0);
  v14 = dword_223EF54;
  v15 = 0;
  v16 = (int)(v1 + 197);
  do
  {
    v17 = *v14;
    v20 = (uint *)v16;
    v21 = v17 << 12;
    v22 = (v14[1] << 12) + 786432;
    v29 = 2;
    v1[256] = Function_2021aa0((uint **)&v19);
    Function_2021cac(v1[256], 0);
    Function_2021cc8(v1[256], 0);
    result = Function_2021d6c(v1[256], v14[2]);
    ++v15;
    v14 += 3;
    ++v1;
  }
  while ( v15 < 6 );
  return result;
}

//----- (0223CE34) --------------------------------------------------------
int *__fastcall Function_223ce34(int *result)
{
  int v1;
  int v2;

  v1 = 0;
  v2 = 0;
  if ( dword_21BF6C8 & 0x40 )
  {
    v2 = 1;
    v1 = 1;
  }
  if ( dword_21BF6C8 & 0x80 )
  {
    v2 = 2;
    ++v1;
  }
  if ( dword_21BF6C8 & 0x20 )
  {
    v2 = 3;
    ++v1;
  }
  if ( dword_21BF6C8 & 0x10 )
  {
    v2 = 4;
    ++v1;
  }
  if ( v1 )
    *result = v2;
  return result;
}

//----- (0223CE74) --------------------------------------------------------
int __fastcall Function_223ce74(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;
  uint v5;
  int v6;
  int v7;

  v1 = a1;
  result = *(uint *)(a1 + 136);
  if ( result < 6 )
  {
    v3 = Function_2022664((uchar *)dword_223EE28);
    result = -1;
    if ( v3 != -1 )
    {
      v4 = v1 + 16 * *(uint *)(v1 + 136);
      result = *(uchar *)(v4 + 1685);
      if ( !*(uchar *)(v4 + 1685) )
      {
        v5 = *(ushort *)(v4 + 1680);
        if ( v5 == 441 )
        {
          v6 = LoadVariableAreaAdress_16(*(uint *)(v1 + 4));
          Function_20063e4(v6, 0, 0x64u, 0);
        }
        else
        {
          Function_2005844(v5, *(uchar *)(v4 + 1686));
        }
        v7 = v1 + 1024;
        Function_2021cc8(*(uint *)(v7 + 4 * v3), 1);
        result = Function_2021d6c(*(uint *)(v7 + 4 * v3), v3 + 4);
      }
    }
  }
  return result;
}

//----- (0223CEF0) --------------------------------------------------------
uint __fastcall Function_223cef0(ushort *a1, int a2, int a3, int a4)
{
  int v5;

  v5 = a4;
  *a1 += 20;
  if ( (ushort)*a1 > 0x168u )
    *a1 = 0;
  LOWORD(v5) = 32 * ((int)(10 * Function_201d250((ushort)*a1)) / 4096 + 15) | 0x1D;
  return GX_LoadOBJPltt((int)&v5, 58, 2u);
}

//----- (0223CF30) --------------------------------------------------------
int __fastcall Function_223cf30(int a1, int a2, int a3)
{
  int v3;
  char *v4;
  int v5;
  uchar *v6;

  v3 = 0;
  v4 = (char *)&dword_223F004[6 * a1] + 6 * a2;
  v5 = 0;
  v6 = (uchar *)&dword_223F004[6 * a1] + 6 * a2;
  while ( !*(ushort *)(a3 + 16 * *v6) )
  {
    ++v5;
    ++v6;
    if ( v5 >= 6 )
      return v3;
  }
  return (uchar)v4[v5];
}

//----- (0223CF68) --------------------------------------------------------
int __fastcall Function_223cf68(int a1, uint *a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int v6;
  int result;
  int v8;
  int v9;
  int v10;

  v10 = a4;
  v4 = a1;
  v5 = a2;
  v6 = a3;
  if ( a1 >= 13 )
    ErrorHandler();
  v8 = dword_223EF9C[2 * v4] << 12;
  v9 = dword_223EFA0[2 * v4] << 12;
  if ( v4 == 12 )
  {
    Function_2021c50(v5, &v8);
    result = Function_2021d6c((int)v5, dword_223EE58[3 * v6]);
  }
  else
  {
    Function_2021c50(v5, &v8);
    if ( v4 >= 6 )
      result = Function_2021d6c((int)v5, dword_223EE54[3 * v6]);
    else
      result = Function_2021d6c((int)v5, dword_223EE50[3 * v6]);
  }
  return result;
}

//----- (0223CFF4) --------------------------------------------------------
int __fastcall Function_223cff4(uint *a1, int *a2, uint *a3, int a4, int a5)
{
  uint *v5;
  int v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  uint *v12;

  v5 = a1;
  v12 = a3;
  v6 = *a1;
  v7 = a2;
  v8 = 0;
  if ( a5 )
  {
    Function_223cf68(*a2, a3, a5, a4);
  }
  else
  {
    if ( v6 )
    {
      v9 = Function_223cf30(*a2, v6 - 1, a4);
      Function_223cf68(v9, v12, 0, v10);
      if ( *v7 != v9 )
      {
        Function_2005748(0x5DCu);
        *v7 = v9;
        v8 = 1;
      }
    }
    *v5 = 0;
  }
  return v8;
}

//----- (0223D044) --------------------------------------------------------
int __fastcall Function_223d044(int a1, int a2, char a3, int a4)
{
  int v5;

  v5 = a4;
  LOBYTE(v5) = a3;
  return Function_20359dc(a2, (int)&v5, 1);
}

//----- (0223D058) --------------------------------------------------------
int __fastcall Function_223d058(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;
  int v7;
  int v8;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( a3 != *(uint *)(a1 + 13984) || (result = *(uint *)(a1 + 13988), a2 != result) )
  {
    v7 = Function_203608c();
    Function_223d044(v7, v4, v5, v8);
    *(uint *)(v3 + 13984) = v5;
    result = 13988;
    *(uint *)(v3 + 13988) = v4;
  }
  return result;
}

//----- (0223D08C) --------------------------------------------------------
int __fastcall Function_223d08c(int a1, int a2)
{
  return a1 + 1424 * a2;
}

//----- (0223D098) --------------------------------------------------------
int __fastcall Function_223d098(ushort a1, int a2, int a3)
{
  int v3;
  int v4;
  int result;
  int v6;

  v3 = a2;
  v4 = a3;
  result = Function_2035d78(a1);
  if ( result )
  {
    v6 = Function_223d08c(v3, v4);
    result = Function_203597c(22, v6, 1424);
  }
  return result;
}

//----- (0223D0C0) --------------------------------------------------------
int __fastcall Function_223d0c0(int a1)
{
  int v1;

  v1 = LoadVariableAreaAdress_18(a1);
  return Function_20359dc(32, v1, 14);
}

//----- (0223D0D4) --------------------------------------------------------
int __fastcall Function_223d0d4(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;
  char v9;
  uchar *v10;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  Function_2025ef0_Dummy();
  Function_20021b0((ushort *)v3, v6);
  *(uint *)(v3 + 16) = GetTrainerID(v4);
  *(uchar *)(v3 + 20) = Function_2025fd8(v4);
  *(uchar *)(v3 + 21) = Function_2025fcc(v4);
  *(uchar *)(v3 + 22) = GetGender(v4);
  v7 = 0;
  v8 = v3;
  do
  {
    *(uint *)(v8 + 24) = *(uint *)(v5 + 16);
    *(uchar *)(v3 + v7 + 88) = *(uchar *)(v5 + 21);
    v8 += 4;
    *(uchar *)(v3 + v7 + 104) = *(uchar *)(v5 + 20);
    v9 = *(uchar *)(v5 + 22);
    v10 = (uchar *)(v3 + v7++ + 120);
    v5 += 136;
    *v10 = v9;
  }
  while ( v7 < 16 );
  return Function_203597c(28, v3, 136);
}

//----- (0223D140) --------------------------------------------------------
int __fastcall Function_223d140(int a1)
{
  return Function_203597c(29, a1, 1000);
}

//----- (0223D150) --------------------------------------------------------
int __fastcall Function_223d150(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  if ( dword_21BF6C4 & 2 )
  {
    Function_2005748(0x5DCu);
    *(uint *)(v1 + 136) = 12;
    Function_223be28(v1);
    Function_223cf68(*(uint *)(v1 + 136), *(uint **)(v1 + 824), 0, v2);
  }
  else
  {
    Function_223ce34((int *)(a1 + 332));
    if ( dword_21BF6C4 & 1 && !*(uint *)(v1 + 332) )
    {
      v3 = *(uint *)(v1 + 136);
      if ( v3 == 12 )
      {
        *(uint *)(v1 + 8724) = Function_223d2c4;
      }
      else if ( v3 >= 6 )
      {
        if ( v3 >= 6 && v3 < 12 )
          *(uint *)(v1 + 8724) = Function_223e4bc;
      }
      else
      {
        *(uint *)(v1 + 8724) = Function_223da3c;
      }
    }
  }
  return 0;
}

//----- (0223D1EC) --------------------------------------------------------
uint *__fastcall Function_223d1ec(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  char v7;
  uint *result;

  v2 = a1;
  v3 = a2;
  if ( a2 )
  {
    *(uint *)(a1 + 12) = *(uint *)(a1 + 8732);
    *(uchar *)(a1 + 31) = GetNrOfPkmnInParty(*(uint *)(a1 + 8732));
    *(uint *)(v2 + 52) = v2 + 11796 + 1004 * (Function_203608c() ^ 1);
    v6 = Function_203608c();
    v5 = Function_2032ee8(v6 ^ 1);
  }
  else
  {
    *(uint *)(a1 + 12) = *(uint *)(a1 + 8728);
    *(uchar *)(a1 + 31) = GetNrOfPkmnInParty(*(uint *)(*(uint *)(a1 + 8) + 8));
    *(uint *)(v2 + 52) = 0;
    v4 = Function_203608c();
    v5 = Function_2032ee8(v4);
  }
  Function_208e9c0(v2 + 12, v5);
  *(uchar *)(v2 + 29) = 1;
  s32_div_f(*(uint *)(v2 + 136), 6);
  *(uchar *)(v2 + 32) = v7;
  *(uchar *)(v2 + 30) = 1;
  *(ushort *)(v2 + 36) = 0;
  *(uint *)(v2 + 56) = Function_208c324(*(uint *)(*(uint *)(v2 + 8) + 16));
  *(uint *)(v2 + 40) = *(uint *)(*(uint *)(v2 + 8) + 48);
  *(uint *)(v2 + 16) = *(uint *)(*(uint *)(v2 + 8) + 24);
  *(uint *)(v2 + 44) = LoadVariableAreaAdress_18(*(uint *)(*(uint *)(v2 + 8) + 16));
  Function_208d720(v2 + 12, (int)dword_223F13C);
  result = AllocAndInitOverlayData((int *)&Unknown_20f410c, v2 + 12, 0x1Au);
  *(uint *)(v2 + 64) = result;
  *(uint *)(v2 + 60) = v3;
  return result;
}

//----- (0223D2C4) --------------------------------------------------------
int __fastcall Function_223d2c4(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_2019cb8(a1[93], 0, 0, 0, 0, 0x20u, 0x18u, 0);
  Function_223ecbc(v1 + 362, 25, 1, v1[97], v1[94]);
  v1[2181] = Function_223d318;
  return 0;
}

//----- (0223D318) --------------------------------------------------------
int __fastcall Function_223d318(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  v2 = Function_223ed2c(a1[93], a1 + 406, a1 + 409);
  if ( v2 )
  {
    if ( v2 == -2 )
    {
      Function_2019cb8(v1[93], 0, 0, 0, 0, 0x20u, 0x18u, 0);
      Function_223ecbc(v1 + 354, 15, 1, v1[97], v1[94]);
      v1[2181] = Function_223d150;
    }
  }
  else
  {
    Function_2019cb8(v1[93], 0, 0, 0, 0, 0x20u, 0x18u, 0);
    Function_223ecbc(v1 + 362, 28, 1, v1[97], v1[94]);
    Function_223d058((int)v1, 24, 1);
    v1[2181] = Function_223da00;
    v1[23] = 0;
  }
  return 0;
}

//----- (0223D3E0) --------------------------------------------------------
int __fastcall Function_223d3e0(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_2019cb8(a1[93], 0, 0, 0, 0, 0x20u, 0x18u, 0);
  Function_223ecbc(v1 + 362, v1[26], 1, v1[97], v1[94]);
  v1[2181] = Function_223d434;
  return 0;
}

//----- (0223D434) --------------------------------------------------------
int __fastcall Function_223d434(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( dword_21BF6C4 & 1 )
  {
    Function_2019cb8(a1[93], 0, 0, 0, 0, 0x20u, 0x18u, 0);
    Function_223ecbc(v1 + 354, 15, 1, v1[97], v1[94]);
    v1[2181] = Function_223d150;
    Function_223dff4(v1);
  }
  return 0;
}

//----- (0223D49C) --------------------------------------------------------
int __fastcall Function_223d49c(int a1, int a2)
{
  return Function_223ecbc(a1 + 1448, a2, 1, *(uint *)(a1 + 13944), *(uint *)(a1 + 13940));
}

//----- (0223D4C4) --------------------------------------------------------
int __fastcall Function_223d4c4(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_223ed2c(*(uint *)(a1 + 372), a1 + 1624, a1 + 1636);
  if ( v2 )
  {
    if ( v2 == -2 )
    {
      Function_223d49c(v1, 58);
      *(uint *)(v1 + 8724) = Function_223d740;
    }
  }
  else
  {
    *(uint *)(v1 + 8724) = Function_223d854;
  }
  return 0;
}

//----- (0223D514) --------------------------------------------------------
int __fastcall Function_223d514(int *a1)
{
  int *v1;
  int v2;
  int v3;
  int v4;
  uint v5;
  int v6;
  uint v7;

  v1 = a1;
  v2 = Function_223ed2c(a1[93], a1 + 406, a1 + 409);
  if ( v2 )
  {
    if ( v2 == -2 )
    {
      Function_2032ee8(v1[3483]);
      Function_200b498(v1[3485], 0);
      Function_223d49c((int)v1, 59);
      v1[2181] = (int)Function_223d4c4;
    }
  }
  else
  {
    v3 = LoadVariableAreaAdress_17(v1[1]);
    Function_2030788(v3, v1[3484], v4, v5);
    Function_202afd4(v1[3493], v1[3484], v6, v7);
    Function_2039298(v1[1], v1[3483], 31, 0x1Au, 0);
    v1[2181] = (int)Function_223d854;
  }
  return 0;
}

//----- (0223D5B8) --------------------------------------------------------
int __fastcall Function_223d5b8(int a1)
{
  int v1;
  int v2;
  int *v4;
  ushort *v5;

  v1 = a1;
  v2 = Function_2001288(*(uint *)(a1 + 13952));
  if ( v2 == -2 )
  {
    Function_2005748(0x5DCu);
    Function_2032ee8(*(uint *)(v1 + 13932));
    Function_200b498(*(uint *)(v1 + 13940), 0);
    Function_223d49c(v1, 59);
    *(uint *)(v1 + 8724) = Function_223d4c4;
  }
  else
  {
    if ( v2 == -1 )
      return 0;
    Function_2005748(0x5DCu);
    *(uint *)(v1 + 13936) = v2;
    v4 = AllocTrainerData(0x1Au);
    v5 = (ushort *)Function_202aef0(*(uint *)(v1 + 13972), v2);
    Function_2025ec0(v4, v5);
    Function_200b498(*(uint *)(v1 + 13940), 0);
    free((int)v4);
    Function_223d49c(v1, 60);
    *(uint *)(v1 + 8724) = Function_223d514;
  }
  Function_200dc9c(v1 + 13956, 0);
  Function_201a8fc(v1 + 13956);
  Function_2001384(*(uint *)(v1 + 13952), 0, 0);
  Function_2013a3c(*(int **)(v1 + 13948));
  return 0;
}

//----- (0223D69C) --------------------------------------------------------
int __fastcall Function_223d69c(int a1)
{
  int v1;
  ushort *v2;
  int v3;
  ushort *v4;
  int v5;
  int v6;
  int v8;

  v1 = a1;
  v8 = Function_202af94(*(uint *)(a1 + 13972));
  *(uint *)(v1 + 13948) = Function_2013a04(v8 + 1, 0x1Au);
  v2 = (ushort *)Function_2023790(100, 0x1Au);
  v3 = 0;
  do
  {
    if ( Function_202af78(*(uint *)(v1 + 13972), v3) )
    {
      v4 = (ushort *)Function_202aef0(*(uint *)(v1 + 13972), v3);
      Function_2023d28(v2, v4);
      Function_2013a6c(*(uint **)(v1 + 13948), (int)v2, v3, v5);
    }
    ++v3;
  }
  while ( v3 < 32 );
  Function_2013a4c(*(uint **)(v1 + 13948), *(ushort ***)(v1 + 13944), 0xBu, -2);
  Function_20237bc_FreeMsg((int)v2, v6);
  *(uint *)(v1 + 13952) = Function_223ed94(*(uint *)(v1 + 13948), v8, v1 + 13956, *(uint *)(v1 + 372));
  *(uint *)(v1 + 8724) = Function_223d5b8;
  return 0;
}

//----- (0223D740) --------------------------------------------------------
int __fastcall Function_223d740(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  v2 = Function_223ed2c(a1[93], a1 + 406, a1 + 409);
  if ( v2 )
  {
    if ( v2 == -2 )
    {
      Function_2032ee8(v1[3483]);
      Function_200b498(v1[3485], 0);
      Function_223d49c((int)v1, 59);
      v1[2181] = Function_223d4c4;
    }
  }
  else
  {
    v1[2181] = Function_223d69c;
  }
  return 0;
}

//----- (0223D7AC) --------------------------------------------------------
int __fastcall Function_223d7ac(int *a1)
{
  int *v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = Function_223ed2c(a1[93], a1 + 406, a1 + 409);
  if ( v2 )
  {
    if ( v2 == -2 )
      v1[2181] = (int)Function_223d854;
  }
  else
  {
    v1[2181] = (int)Function_223d854;
    v3 = 0;
    while ( Function_202af78(v1[3493], v3) )
    {
      if ( ++v3 >= 32 )
        goto LABEL_8;
    }
    Function_2039298(v1[1], v1[3483], v3, 0x1Au, 0);
LABEL_8:
    if ( v3 == 32 )
    {
      Function_223d49c((int)v1, 58);
      v1[2181] = (int)Function_223d740;
      return 0;
    }
  }
  return 0;
}

//----- (0223D840) --------------------------------------------------------
int Function_223d840()
{
  int result;

  if ( Function_2036540(19) )
    result = 2;
  else
    result = 0;
  return result;
}

//----- (0223D854) --------------------------------------------------------
int __fastcall Function_223d854(int a1)
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
  *(uint *)(a1 + 13932) = -1;
  v2 = 0;
  if ( Function_2035e18() > 0 )
  {
    v3 = v1;
    while ( *(uint *)(v3 + 13804) != 2 )
    {
      v3 += 4;
      if ( ++v2 >= Function_2035e18() )
        goto LABEL_6;
    }
    *(uint *)(v1 + 13932) = v2;
    *(uint *)(v1 + 4 * v2 + 13804) = 0;
  }
LABEL_6:
  if ( *(uint *)(v1 + 13932) == -1 )
  {
    Function_200b190(*(ushort **)(v1 + 13944));
    Function_200b3f0(*(uint **)(v1 + 13940), v4);
    Function_20364f0(19);
    Function_223ecbc(v1 + 1448, 28, 1, *(uint *)(v1 + 388), *(uint *)(v1 + 376));
    *(uint *)(v1 + 8724) = Function_223d840;
    result = 0;
  }
  else
  {
    v6 = LoadVariableAreaAdressItemList(*(uint *)(v1 + 4));
    if ( CheckItem(v6, 0x1B5u, 1u, 0x1Au) == 1 )
    {
      Function_2032ee8(*(uint *)(v1 + 13932));
      Function_200b498(*(uint *)(v1 + 13940), 0);
      Function_223d49c(v1, 57);
      *(uint *)(v1 + 8724) = Function_223d7ac;
      result = 0;
    }
    else
    {
      v7 = LoadVariableAreaAdress_1d(*(uint *)(v1 + 4));
      v8 = 0;
      while ( Function_202af78(v7, v8) )
      {
        if ( ++v8 >= 32 )
          goto LABEL_14;
      }
      Function_2039298(*(uint *)(v1 + 4), *(uint *)(v1 + 13932), v8, 0x1Au, 0);
LABEL_14:
      *(uint *)(v1 + 8724) = Function_223d854;
      result = 0;
    }
  }
  return result;
}

//----- (0223D96C) --------------------------------------------------------
int __fastcall Function_223d96c(int *a1)
{
  int *v1;

  v1 = a1;
  if ( Function_20391dc(a1[1], a1 + 3451, 0x1Au) )
  {
    v1[3485] = (int)Function_200b358(0x1Au);
    v1[3486] = LoadFromMsgNARC(0, 26, 675, 0x1Au);
    v1[3493] = LoadVariableAreaAdress_1d(v1[1]);
    v1[2181] = (int)Function_223d854;
  }
  else
  {
    Function_20364f0(19);
    Function_223ecbc(v1 + 362, 28, 1, v1[97], v1[94]);
    v1[2181] = (int)Function_223d840;
  }
  return 0;
}

//----- (0223DA00) --------------------------------------------------------
int __fastcall Function_223da00(uint *a1)
{
  int v1;
  int v2;

  v1 = a1[24];
  if ( v1 )
  {
    v2 = a1[25];
    if ( v2 )
    {
      if ( v1 != 1 || v2 != 1 )
        a1[2181] = Function_223d3e0;
      else
        a1[2181] = Function_223d96c;
      a1[24] = 0;
      a1[25] = 0;
      a1[26] = 29;
    }
  }
  return 0;
}

//----- (0223DA3C) --------------------------------------------------------
int __fastcall Function_223da3c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v7;
  int v8;
  char v9;
  char v10;
  char v11;
  char v12;
  int v13;

  v13 = a4;
  v4 = a1;
  v9 = 0;
  v10 = 1;
  v11 = 3;
  v12 = 0;
  GetAdrOfPkmnInParty(*(uint **)(a1 + 8728), *(uint *)(a1 + 136));
  Function_2076b10_Dummy();
  Function_200b5cc(*(int **)(v4 + 380), 0, v5);
  Function_2019cb8(*(uint *)(v4 + 372), 0, 0, 0, 0, 0x20u, 0x18u, 0);
  Function_223ecbc(v4 + 1432, 16, 1, *(uint *)(v4 + 388), *(uint *)(v4 + 380));
  *(uint *)(v4 + 1628) = Function_2013a04(3u, 0x1Au);
  Function_2013a4c(*(uint **)(v4 + 1628), *(ushort ***)(v4 + 388), 0x11u, 0);
  Function_2013a4c(*(uint **)(v4 + 1628), *(ushort ***)(v4 + 388), 0x12u, 1);
  Function_2013a4c(*(uint **)(v4 + 1628), *(ushort ***)(v4 + 388), 0x13u, 2);
  v7 = *(uint *)(v4 + 1628);
  v8 = v4 + 1464;
  Function_223ed80();
  *(uint *)(v4 + 1632) = Function_2001b7c(&v7, 8, 0, 0, 0x1Au, 2);
  *(uint *)(v4 + 8724) = Function_223db48;
  return 0;
}

//----- (0223DB48) --------------------------------------------------------
int __fastcall Function_223db48(int a1)
{
  int v1;
  uint v2;

  v1 = a1;
  v2 = Function_2001be0(*(uint *)(a1 + 1632));
  if ( v2 > 2 )
  {
    if ( v2 != -2 )
      return 0;
LABEL_10:
    Function_2019cb8(*(uint *)(v1 + 372), 0, 0, 0, 0, 0x20u, 0x18u, 0);
    Function_223ecbc(v1 + 1416, 15, 1, *(uint *)(v1 + 388), *(uint *)(v1 + 376));
    Function_2001bc4(*(uint *)(v1 + 1632), 0);
    Function_2013a3c(*(int **)(v1 + 1628));
    *(uint *)(v1 + 8724) = Function_223d150;
    return 0;
  }
  if ( !v2 )
  {
    Function_2019cb8(*(uint *)(v1 + 372), 0, 0, 0, 0, 0x20u, 0x18u, 0);
    Function_223ecbc(v1 + 1416, 15, 1, *(uint *)(v1 + 388), *(uint *)(v1 + 376));
    Function_2001bc4(*(uint *)(v1 + 1632), 0);
    Function_2013a3c(*(int **)(v1 + 1628));
    *(uint *)(v1 + 8724) = Function_223d150;
    return 3;
  }
  if ( v2 != 1 )
  {
    if ( v2 != 2 )
      return 0;
    goto LABEL_10;
  }
  Function_2019cb8(*(uint *)(v1 + 372), 0, 0, 0, 0, 0x20u, 0x18u, 0);
  Function_223ecbc(v1 + 1448, 20, 1, *(uint *)(v1 + 388), *(uint *)(v1 + 376));
  Function_2001bc4(*(uint *)(v1 + 1632), 0);
  Function_2013a3c(*(int **)(v1 + 1628));
  *(uint *)(v1 + 8724) = Function_223dc84;
  return 0;
}

//----- (0223DC84) --------------------------------------------------------
int __fastcall Function_223dc84(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_2019cb8(a1[93], 0, 0, 0, 0, 0x20u, 0x18u, 0);
  Function_223ecbc(v1 + 362, 20, 1, v1[97], v1[94]);
  Function_223d058((int)v1, 24, 2);
  v1[2181] = Function_223dce0;
  return 0;
}

//----- (0223DCE0) --------------------------------------------------------
int __fastcall Function_223dce0(uint *a1)
{
  int v1;
  int v2;

  v1 = a1[24];
  if ( v1 )
  {
    v2 = a1[25];
    if ( v2 )
    {
      if ( v1 != 2 || v2 != 2 )
        a1[2181] = Function_223d3e0;
      else
        a1[2181] = Function_223dd1c;
      a1[26] = 24;
      a1[24] = 0;
      a1[25] = 0;
    }
  }
  return 0;
}

//----- (0223DD1C) --------------------------------------------------------
int __fastcall Function_223dd1c(uint *a1)
{
  uint *v1;
  int v2;
  uint *v3;
  uint *v4;
  int result;
  int v6;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  v4 = a1;
  v6 = (int)(a1 + 270);
  do
  {
    if ( v2 != v1[34] )
    {
      Function_2021cac(v3[220], 0);
      if ( *((ushort *)v4 + 841) )
        Function_2021cac(v3[232], 0);
      if ( v4[423] )
        Function_2021cac(v3[244], 0);
    }
    Function_201ad10(v6 + 16 * (v2 + 7));
    if ( v2 != v1[35] - 6 )
    {
      Function_2021cac(v3[226], 0);
      if ( *((ushort *)v4 + 889) )
        Function_2021cac(v3[238], 0);
      if ( v4[447] )
        Function_2021cac(v3[250], 0);
    }
    Function_201ad10(v6 + 16 * (v2++ + 13));
    ++v3;
    v4 += 4;
  }
  while ( v2 < 6 );
  Function_2021cac(v1[206], 0);
  Function_2021cac(v1[207], 0);
  Function_223de68(v1 + 2225, dword_223EF9C[2 * v1[34]] + 16, dword_223EFA0[2 * v1[34]] - 6);
  Function_223de68(v1 + 2231, dword_223EF9C[2 * v1[35]] + 16, dword_223EFA0[2 * v1[35]] - 6);
  result = 0;
  v1[2223] = 0;
  v1[2181] = Function_223df00;
  return result;
}

//----- (0223DE68) --------------------------------------------------------
uint *__fastcall Function_223de68(uint *result, int a2, int a3, int a4, int a5)
{
  *result = a2 << 12;
  result[1] = a3 << 12;
  result[3] = a4 << 12;
  result[4] = a5 << 12;
  return result;
}

//----- (0223DE7C) --------------------------------------------------------
int __fastcall Function_223de7c(uint *a1, uint *a2, uint *a3, int a4, int *a5, int a6)
{
  uint *v6;
  int v7;
  int v8;
  int v9;
  int result;
  uint *v11;
  uint *v12;
  uint v13;
  uint v14;
  uint v15;
  uint v16;
  uint v17;
  uint v18;
  int v19;

  v19 = a4;
  v6 = a1;
  v7 = *a5;
  v11 = a2;
  v8 = a4;
  v12 = a3;
  v17 = v7 + s32_div_f(a5[3] - *a5, 20) * a4;
  v9 = a5[1];
  v18 = v9 + s32_div_f(a5[4] - v9, 20) * v8;
  Function_2021c50(v6, (int *)&v17);
  if ( *(ushort *)(a6 + 2) )
  {
    v15 = v17 + 81920;
    v16 = v18 + 90112;
    Function_2021c50(v11, (int *)&v15);
  }
  result = *(uint *)(a6 + 12);
  if ( result )
  {
    v13 = v17 + 114688;
    v14 = v18 + 90112;
    result = Function_2021c50(v12, (int *)&v13);
  }
  return result;
}

//----- (0223DF00) --------------------------------------------------------
int __fastcall Function_223df00(uint *a1)
{
  int v1;

  v1 = (int)a1;
  Function_223de7c(
    (uint *)a1[a1[34] + 220],
    (uint *)a1[a1[34] + 232],
    (uint *)a1[a1[34] + 244],
    ++a1[2223],
    a1 + 2225,
    (int)&a1[4 * a1[34] + 420]);
  Function_223de7c(
    *(uint **)(v1 + 4 * *(uint *)(v1 + 140) + 880),
    *(uint **)(v1 + 4 * *(uint *)(v1 + 140) + 928),
    *(uint **)(v1 + 4 * *(uint *)(v1 + 140) + 976),
    *(uint *)(v1 + 8892),
    (int *)(v1 + 8924),
    v1 + 1680 + 16 * *(uint *)(v1 + 140));
  if ( *(uint *)(v1 + 8892) == 21 )
  {
    Function_223c860(v1 + 1384, *(uint **)(v1 + 8728), *(uint *)(v1 + 136), 8, 1);
    Function_223c860(v1 + 1400, *(uint **)(v1 + 8732), *(uint *)(v1 + 140) - 6, 8, 1);
    Function_223bda4(v1, *(uint *)(v1 + 140));
    *(uint *)(v1 + 8724) = Function_223e110;
    Function_2021cac(*(uint *)(v1 + 1048), 1);
  }
  return 0;
}

//----- (0223DFF4) --------------------------------------------------------
uint __fastcall Function_223dff4(uint *a1)
{
  uint *v1;
  int *v2;
  int v3;
  uint *v4;
  uint *v6;

  v6 = a1;
  Function_201ad10((int)(a1 + 346));
  Function_201ad10((int)(v6 + 350));
  v1 = v6;
  v2 = dword_223EF9C;
  v3 = 0;
  v4 = v6;
  do
  {
    if ( *((ushort *)v1 + 840) )
    {
      Function_223e87c(v4[220], *v2 + 16, v2[1] - 6);
      Function_2021cac(v4[220], 1);
      if ( *((ushort *)v1 + 841) )
      {
        Function_223e87c(v4[232], *v2 + 36, v2[1] + 16);
        Function_2021cac(v4[232], 1);
      }
      if ( v1[423] )
      {
        Function_223e87c(v4[244], *v2 + 44, v2[1] + 16);
        Function_2021cac(v4[244], 1);
      }
      Function_201a9a4((int)&v6[4 * (v3 + 7) + 270]);
    }
    ++v3;
    v1 += 4;
    v2 += 2;
    ++v4;
  }
  while ( v3 < 12 );
  Function_2021cac(v6[206], 1);
  Function_2021cac(v6[207], 1);
  Function_223cb34((int)(v6 + 270), 1, (int)v6);
  Function_2021cac(v6[259], 0);
  return Function_2021cac(v6[262], 0);
}

//----- (0223E110) --------------------------------------------------------
int __fastcall Function_223e110(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  Function_2019cb8(*(uint *)(a1 + 372), 0, 0, 0, 0, 0x20u, 0x18u, 0);
  GetAdrOfPkmnInParty(*(uint **)(v1 + 8728), *(uint *)(v1 + 136));
  Function_2076b10_Dummy();
  Function_200b5cc(*(int **)(v1 + 380), 0, v2);
  GetAdrOfPkmnInParty(*(uint **)(v1 + 8732), *(uint *)(v1 + 140) - 6);
  Function_2076b10_Dummy();
  Function_200b5cc(*(int **)(v1 + 380), 1u, v3);
  Function_223ecbc(v1 + 1448, 21, 1, *(uint *)(v1 + 388), *(uint *)(v1 + 380));
  *(uint *)(v1 + 8724) = Function_223e20c;
  return 0;
}

//----- (0223E1AC) --------------------------------------------------------
int __fastcall Function_223e1ac(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_223d058(a1, 24, 3);
  result = 1;
  *(uint *)(v1 + 92) = 1;
  return result;
}

//----- (0223E1C0) --------------------------------------------------------
int __fastcall Function_223e1c0(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  Function_2019cb8(*(uint *)(a1 + 372), 0, 0, 0, 0, 0x20u, 0x18u, 0);
  return Function_223ecbc(v4 + 1080 + 16 * v3, v5, 1, *(uint *)(v4 + 388), *(uint *)(v4 + 376));
}

//----- (0223E20C) --------------------------------------------------------
int __fastcall Function_223e20c(uint *a1)
{
  uint *v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = Function_223ed2c(a1[93], a1 + 406, a1 + 409);
  if ( v2 )
  {
    if ( v2 == -2 )
    {
      Function_2019cb8(v1[93], 0, 0, 0, 0, 0x20u, 0x18u, 0);
      Function_223ecbc(v1 + 362, 20, 1, v1[97], v1[94]);
      v1[2181] = Function_223e41c;
      Function_223d058((int)v1, 24, 4);
    }
  }
  else if ( Function_223e8d0(v1) )
  {
    v3 = Function_223e914(v1);
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        Function_223e1c0((int)v1, 23, 37);
        v1[2181] = Function_223e41c;
        Function_223d058((int)v1, 24, 4);
      }
      else if ( v3 == 2 )
      {
        Function_223e1c0((int)v1, 23, 38);
        v1[2181] = Function_223e41c;
        Function_223d058((int)v1, 24, 4);
      }
    }
    else if ( v1[4 * v1[34] + 423] )
    {
      v1[2181] = Function_223e330;
    }
    else
    {
      Function_223e1ac((int)v1);
      Function_223e1c0((int)v1, 23, 20);
      v1[2181] = Function_223e41c;
    }
  }
  else
  {
    v1[2181] = Function_223e41c;
    Function_223d058((int)v1, 24, 4);
  }
  return 0;
}

//----- (0223E330) --------------------------------------------------------
int __fastcall Function_223e330(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_2019cb8(a1[93], 0, 0, 0, 0, 0x20u, 0x18u, 0);
  Function_223ecbc(v1 + 362, 36, 1, v1[97], v1[95]);
  v1[2181] = Function_223e384;
  return 0;
}

//----- (0223E384) --------------------------------------------------------
int __fastcall Function_223e384(int *a1)
{
  int *v1;
  int v2;

  v1 = a1;
  v2 = Function_223ed2c(a1[93], a1 + 406, a1 + 409);
  if ( v2 )
  {
    if ( v2 == -2 )
    {
      Function_2019cb8(v1[93], 0, 0, 0, 0, 0x20u, 0x18u, 0);
      Function_223ecbc(v1 + 362, 20, 1, v1[97], v1[94]);
      v1[2181] = (int)Function_223e41c;
      Function_223d058((int)v1, 24, 4);
    }
  }
  else
  {
    Function_223e1ac((int)v1);
    Function_223e1c0((int)v1, 23, 20);
    v1[2181] = (int)Function_223e41c;
  }
  return 0;
}

//----- (0223E41C) --------------------------------------------------------
int __fastcall Function_223e41c(uint *a1)
{
  uint *v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = a1[24];
  if ( v2 )
  {
    v3 = a1[25];
    if ( v3 )
    {
      if ( v2 != 3 || v3 != 3 )
      {
        v1[2181] = Function_223d3e0;
      }
      else
      {
        ++v1[3494];
        v1[2181] = Function_223e478;
      }
      v1[24] = 0;
      v1[25] = 0;
      if ( Function_223e8d0(v1) )
        v1[26] = 24;
      else
        v1[26] = 34;
    }
  }
  return 0;
}

//----- (0223E478) --------------------------------------------------------
int __fastcall Function_223e478(uint *a1, int a2, int a3, int a4)
{
  uint *v4;

  v4 = a1;
  Function_20331e0(a1[1], 1, a3, a4);
  Function_223e694(v4[2182], v4[2183], v4[34], v4[35] - 6, v4[2]);
  v4[2181] = Function_223d3e0;
  return 2;
}

//----- (0223E4BC) --------------------------------------------------------
int __fastcall Function_223e4bc(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v7;
  int v8;
  char v9;
  char v10;
  char v11;
  char v12;
  int v13;

  v13 = a4;
  v4 = a1;
  v9 = 0;
  v10 = 1;
  v11 = 2;
  v12 = 0;
  GetAdrOfPkmnInParty(*(uint **)(a1 + 8732), *(uint *)(a1 + 136) - 6);
  Function_2076b10_Dummy();
  Function_200b5cc(*(int **)(v4 + 380), 0, v5);
  Function_2019cb8(*(uint *)(v4 + 372), 0, 0, 0, 0, 0x20u, 0x18u, 0);
  Function_223ecbc(v4 + 1432, 16, 1, *(uint *)(v4 + 388), *(uint *)(v4 + 380));
  *(uint *)(v4 + 1628) = Function_2013a04(2u, 0x1Au);
  Function_2013a4c(*(uint **)(v4 + 1628), *(ushort ***)(v4 + 388), 0x11u, 0);
  Function_2013a4c(*(uint **)(v4 + 1628), *(ushort ***)(v4 + 388), 0x13u, 1);
  v7 = *(uint *)(v4 + 1628);
  v8 = v4 + 1480;
  Function_223ed80();
  *(uint *)(v4 + 1632) = Function_2001b7c(&v7, 8, 0, 0, 0x1Au, 2);
  *(uint *)(v4 + 8724) = Function_223e5b8;
  return 0;
}

//----- (0223E5B8) --------------------------------------------------------
int __fastcall Function_223e5b8(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = Function_2001be0(*(uint *)(a1 + 1632));
  if ( v2 )
  {
    if ( v2 == 1 || v2 == -2 )
    {
      Function_2019cb8(*(uint *)(v1 + 372), 0, 0, 0, 0, 0x20u, 0x18u, 0);
      Function_223ecbc(v1 + 1416, 15, 1, *(uint *)(v1 + 388), *(uint *)(v1 + 376));
      Function_2001bc4(*(uint *)(v1 + 1632), 0);
      Function_2013a3c(*(int **)(v1 + 1628));
      *(uint *)(v1 + 8724) = Function_223d150;
    }
    result = 0;
  }
  else
  {
    Function_2019cb8(*(uint *)(v1 + 372), 0, 0, 0, 0, 0x20u, 0x18u, 0);
    Function_223ecbc(v1 + 1416, 15, 1, *(uint *)(v1 + 388), *(uint *)(v1 + 376));
    *(uint *)(v1 + 8724) = Function_223d150;
    Function_2001bc4(*(uint *)(v1 + 1632), 0);
    Function_2013a3c(*(int **)(v1 + 1628));
    result = 3;
  }
  return result;
}

//----- (0223E694) --------------------------------------------------------
uint __fastcall Function_223e694(uint *a1, uint *a2, int a3, int a4, int a5)
{
  int v5;
  int *v6;
  int *v7;
  int *v8;
  int *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  uint *v17;
  int *v18;
  int *v19;
  uint *v21;
  uint *v22;
  int v23;
  int v24;
  ushort v25[2];
  int v26;

  v26 = a4;
  v21 = a1;
  v22 = a2;
  v5 = a3;
  v23 = a4;
  v6 = AllocPkmnData(0x1Au);
  v7 = AllocPkmnData(0x1Au);
  v8 = GetAdrOfPkmnInParty(v21, v5);
  Function_20775ec(v8, v6);
  v9 = GetAdrOfPkmnInParty(v22, v23);
  Function_20775ec(v9, v7);
  if ( GetPkmnData(v7, 5u, 0) == 493
    && (GetPkmnData(v7, 0x6Eu, 0) || GetPkmnData(v7, 0x99u, 0) == 86 && !GetPkmnData(v7, 0x6Eu, 0)) )
  {
    v24 = LoadFlagAdress(*(uint *)(a5 + 16));
    if ( !Function_206b5f8(v24) )
      Function_206b608(v24, 1);
  }
  SetPkmnData((int)v7, 111, 0);
  if ( !GetPkmnData(v7, 0x4Cu, 0) )
  {
    LOBYTE(v25[0]) = 70;
    SetPkmnData((int)v7, 9, v25);
  }
  v10 = Function_203608c();
  v11 = Function_2032ee8(v10);
  Function_209304c((int)v7, v11, 5u, 0, 0xBu);
  Function_207893c((int)v7, v12, v13, v14);
  Function_20775ec(v6, *(int **)(a5 + 60));
  Function_20775ec(v7, *(int **)(a5 + 64));
  v15 = Function_203608c();
  v16 = Function_2032ee8(v15 ^ 1);
  CopyTrainerData(v16, *(uint *)(a5 + 56));
  *(uint *)(a5 + 44) = v5;
  if ( !IsFirstPkmnInPartyWantedSpecies((int)v21, 441) )
  {
    v17 = (uint *)LoadVariableAreaAdress_16(*(uint *)(a5 + 16));
    Function_202cca8(v17);
  }
  Function_202f180(*(uint *)(a5 + 16), v7);
  v18 = GetAdrOfPkmnInParty(v21, v5);
  Function_20775ec(v7, v18);
  v19 = GetAdrOfPkmnInParty(v22, v23);
  Function_20775ec(v6, v19);
  Function_223e7f0(*(uint *)(a5 + 28), v7);
  Function_202cf28(*(uint *)(a5 + 32), 19);
  free((int)v6);
  return free((int)v7);
}

//----- (0223E7F0) --------------------------------------------------------
uint __fastcall Function_223e7f0(int a1, int *a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  ushort *v6;
  ushort *v7;
  char v8;
  int *v9;
  char v11;

  v2 = a1;
  v3 = a2;
  v4 = Function_203608c();
  v5 = Function_2032ee8(v4 ^ 1);
  GetPkmnData(v3, 0x75u, (ushort *)&v11);
  Function_2025ef0_Dummy();
  v7 = v6;
  LOBYTE(v5) = GetGender(v5);
  v8 = Call_DecidePkmnGender((int)v3);
  v9 = Function_202c11c(v7, v5, (ushort *)&v11, v8, 0x1Au);
  return Function_202b758(v2, (int)v9, 4u);
}

//----- (0223E848) --------------------------------------------------------
void __fastcall Function_223e848(int a1)
{
  int v1;

  v1 = a1;
  *(uint *)(a1 + 8888) += 2;
  Function_2019184(*(uint *)(a1 + 372), 6u, 0, *(uint *)(a1 + 8888));
  Function_2019184(*(uint *)(v1 + 372), 3u, 0, *(uint *)(v1 + 8888));
}

//----- (0223E87C) --------------------------------------------------------
int __fastcall Function_223e87c(uint *a1, int a2, int a3)
{
  int v4;
  int v5;

  v4 = a2 << 12;
  v5 = a3 << 12;
  return Function_2021c50(a1, &v4);
}

//----- (0223E894) --------------------------------------------------------
int __fastcall Function_223e894(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = Function_200e7fc((int *)(a1 + 1448), 473);
  *(uint *)(v1 + 13992) = result;
  return result;
}

//----- (0223E8B4) --------------------------------------------------------
int __fastcall Function_223e8b4(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = *(uint *)(a1 + 13992);
  if ( result )
  {
    Function_200eba0(result);
    result = 13992;
    *(uint *)(v1 + 13992) = 0;
  }
  return result;
}

//----- (0223E8D0) --------------------------------------------------------
BOOL __fastcall Function_223e8d0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = 0;
  v3 = GetNrOfPkmnInParty(*(uint *)(a1 + 8728));
  v4 = 0;
  if ( v3 > 0 )
  {
    v5 = *(uint *)(v1 + 136);
    do
    {
      if ( v4 != v5 )
        v2 += *(uchar *)(v1 + 1685);
      ++v4;
      v1 += 16;
    }
    while ( v4 < v3 );
  }
  return v2 != v3 - 1;
}

//----- (0223E914) --------------------------------------------------------
int __fastcall Function_223e914(int a1)
{
  int v1;
  int v2;
  int v3;
  int *v4;
  int result;
  int v6;
  int v7;
  int *v8;

  v1 = a1;
  v2 = GetNrOfPkmnInParty(*(uint *)(a1 + 8728));
  v3 = 0;
  if ( v2 <= 0 )
  {
LABEL_5:
    v6 = GetNrOfPkmnInParty(*(uint *)(v1 + 8732));
    v7 = 0;
    if ( v6 <= 0 )
    {
LABEL_9:
      result = 0;
    }
    else
    {
      while ( 1 )
      {
        v8 = GetAdrOfPkmnInParty(*(uint **)(v1 + 8732), v7);
        if ( GetPkmnData(v8, 3u, 0) )
          break;
        if ( ++v7 >= v6 )
          goto LABEL_9;
      }
      result = 2;
    }
  }
  else
  {
    while ( 1 )
    {
      v4 = GetAdrOfPkmnInParty(*(uint **)(v1 + 8728), v3);
      if ( GetPkmnData(v4, 3u, 0) )
        break;
      if ( ++v3 >= v2 )
        goto LABEL_5;
    }
    result = 1;
  }
  return result;
}

//----- (0223E984) --------------------------------------------------------
int __fastcall Function_223e984(int result)
{
  *(uint *)(result + 13996) = 1;
  *(uint *)(result + 14000) = 0;
  return result;
}

//----- (0223E998) --------------------------------------------------------
int __fastcall Function_223e998(int result)
{
  int v1;

  if ( *(uint *)(result + 13996) )
  {
    v1 = ++*(uint *)(result + 14000);
    result = 1800;
    if ( v1 > 1800 )
      result = Function_2038ae0(4);
  }
  return result;
}

//----- (0223E9C4) --------------------------------------------------------
int __fastcall Function_223e9c4(uint *a1, int a2, ushort *a3)
{
  ushort *v3;
  int v4;
  uchar v5;
  short *v6;
  int v7;
  short v8;
  int v9;
  short *v10;
  int v11;
  int v12;
  int result;
  uint *v14;

  v3 = a3;
  v4 = a2;
  v14 = a1;
  Function_201a7e8(a1, a2, 1, 2, 1, 0xAu, 2u, 8, 1);
  Function_201ada4_ClearTextBox(v4, 0);
  Function_201a7e8(v14, v4 + 16, 1, 20, 1, 0xAu, 2u, 8, 21);
  Function_201ada4_ClearTextBox(v4 + 16, 0);
  Function_201a7e8(v14, v4 + 96, 1, 26, 21, 5u, 2u, 8, 41);
  Function_201ada4_ClearTextBox(v4 + 96, 0);
  v5 = Function_2027b50(v3);
  Function_200dd0c(v14, 0, 473, 10, v5, 26);
  Function_200daa4(v14, 0, 503, 11, 0, 26);
  Function_201a7e8(v14, v4 + 336, 0, 2, 21, 0x14u, 2u, 13, 1);
  Function_201ada4_ClearTextBox(v4 + 336, 0);
  Function_201a7e8(v14, v4 + 352, 0, 2, 19, 0xEu, 4u, 13, 40);
  Function_201ada4_ClearTextBox(v4 + 352, 0);
  Function_201a7e8(v14, v4 + 368, 0, 2, 19, 0x1Bu, 4u, 13, 56);
  Function_201ada4_ClearTextBox(v4 + 368, 0);
  Function_201a7e8(v14, v4 + 384, 0, 20, 17, 0xBu, 6u, 13, 164);
  Function_201ada4_ClearTextBox(v4 + 384, 0);
  Function_201a7e8(v14, v4 + 400, 0, 20, 19, 0xBu, 4u, 13, 230);
  Function_201ada4_ClearTextBox(v4 + 400, 0);
  v6 = &word_223F170;
  v7 = 0;
  v8 = 51;
  do
  {
    v9 = 16 * (v7 + 7);
    Function_201a7e8(v14, v4 + v9, 1, *v6, v6[1], 8u, 2u, 8, v8);
    Function_201ada4_ClearTextBox(v4 + v9, 0);
    ++v7;
    v8 += 16;
    v6 += 2;
  }
  while ( v7 < 14 );
  v10 = &word_223F1A8;
  v11 = 0;
  do
  {
    v12 = 16 * (v11 + 26);
    Function_201a7e8(v14, v4 + v12, 4, *v10, v10[1], v10[2], v10[3], 8, v10[4]);
    result = Function_201ada4_ClearTextBox(v4 + v12, 0);
    ++v11;
    v10 += 5;
  }
  while ( v11 < 8 );
  return result;
}

//----- (0223EC04) --------------------------------------------------------
uint __fastcall Function_223ec04(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = 0;
  do
    Function_201a8fc(v1 + 16 * (v2++ + 7));
  while ( v2 < 14 );
  v3 = 0;
  do
    Function_201a8fc(v1 + 16 * (v3++ + 26));
  while ( v3 < 8 );
  Function_201a8fc(v1);
  Function_201a8fc(v1 + 16);
  Function_201a8fc(v1 + 96);
  Function_201a8fc(v1 + 336);
  Function_201a8fc(v1 + 352);
  Function_201a8fc(v1 + 368);
  Function_201a8fc(v1 + 384);
  return Function_201a8fc(v1 + 400);
}

//----- (0223EC78) --------------------------------------------------------
int __fastcall Function_223ec78(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;

  v5 = a1;
  if ( a5 == 1 )
    v6 = 8 * *(uchar *)(a1 + 7) - Function_2002d7c(0, a2, 0);
  return Function_201d78c(v5, 0);
}

//----- (0223ECBC) --------------------------------------------------------
int __fastcall Function_223ecbc(int a1, uint a2, int a3, ushort **a4, uint *a5)
{
  int v5;
  int v6;
  ushort *v7;
  int v8;
  int v9;

  v5 = a1;
  v6 = a3;
  v7 = Function_200b29c(a5, a4, a2, 0x1Au);
  if ( v6 == 1 )
    Function_200e060(v5, 0, 473, 0xAu);
  else
    Function_200dc48(v5, 0, 503, 0xBu);
  Function_201ada4_ClearTextBox(v5, 15);
  v8 = Function_201d78c(v5, v6);
  Function_20237bc_FreeMsg((int)v7, v9);
  return v8;
}

//----- (0223ED2C) --------------------------------------------------------
int __fastcall Function_223ed2c(uint *a1, int *a2, uint *a3)
{
  uint *v3;
  int v4;

  v3 = a3;
  v4 = -1;
  if ( *a3 )
  {
    if ( *a3 == 1 )
    {
      v4 = Function_2002114(*a2, 0x1Au);
      if ( v4 != -1 )
        *v3 = 0;
    }
  }
  else
  {
    *a2 = Function_2002100(a1, (uchar *)dword_223F148, 503, 11, 0x1Au);
    ++*v3;
  }
  return v4;
}

//----- (0223ED80) --------------------------------------------------------
char *__fastcall Function_223ed80(int a1)
{
  return Function_200dc48(a1, 0, 503, 0xBu);
}

//----- (0223ED94) --------------------------------------------------------
int __fastcall Function_223ed94(int a1, short a2, int a3, uint *a4)
{
  int v4;
  int v5;
  short v6;
  int v8;
  int (*v9)();
  int v10;
  int v11;
  short v12;
  short v13;
  int v14;
  int v15;
  int v16;

  v4 = a1;
  v5 = a3;
  v6 = a2;
  Function_201a7e8(a4, a3, 0, 19, 1, 0xCu, 0xAu, 13, 333);
  Function_200dc48(v5, 0, 503, 0xBu);
  v10 = 0;
  v14 = 268437504;
  v15 = 8388655;
  v16 = 0;
  v12 = v6 + 1;
  v13 = 5;
  v9 = Function_223ee14;
  v8 = v4;
  v11 = v5;
  return Function_200112c(&v8, 0, 0, 0x1Au);
}

//----- (0223EE14) --------------------------------------------------------
int __fastcall Function_223ee14(int a1, int a2, int a3)
{
  int result;

  if ( !a3 )
    result = Function_2005748(0x5DCu);
  return result;
}

