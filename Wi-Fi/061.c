//----- (0222AE60) --------------------------------------------------------
int __fastcall Function_222ae60(int a1, int a2, uchar *a3)
{
  uchar *v3;
  int v4;
  int result;

  v3 = a3;
  v4 = a1;
  Function_202a75c(a2, a3);
  result = Function_202486c(v4, v3, 0x5Cu);
  *((ushort *)v3 + 46) = result;
  return result;
}

//----- (0222AE80) --------------------------------------------------------
int __fastcall Function_222ae80(int a1, int a2)
{
  return Function_202a824(a1, a2);
}

//----- (0222AE88) --------------------------------------------------------
int __fastcall Function_222ae88(int a1, uint *a2, uint a3, ushort *a4, uint a5)
{
  uint v5;
  uint *v6;
  ushort *v7;
  ushort *v8;
  int v9;
  int v10;
  int result;
  int v12;
  ushort *v13;
  ushort *v14;

  v5 = a3;
  v6 = a2;
  v7 = a4;
  v12 = a1;
  MI_CpuFill8(a4, 0, 0x19Cu);
  v8 = (ushort *)Function_2023790(60, a5);
  Function_2079af4(v6, v5, v8);
  Function_2023df0((int)v8, v7, 0x14u);
  Function_20237bc_FreeMsg((int)v8, v9);
  v10 = 0;
  v14 = v7;
  v13 = v7;
  do
  {
    v14[20] = Function_2079c08(v6, v5, v10, 5u, 0);
    *((uint *)v13 + 25) = Function_2079c08(v6, v5, v10, 0, 0);
    *((uint *)v13 + 55) = Function_2079c08(v6, v5, v10, 7u, 0);
    if ( Function_2079c08(v6, v5, v10, 0xAEu, 0) == 494 )
      *((uint *)v7 + 85) |= 1 << v10;
    *((uchar *)v7 + v10 + 344) = Function_2079c08(v6, v5, v10, 0x70u, 0);
    ++v10;
    ++v14;
    v13 += 2;
  }
  while ( v10 < 30 );
  *((uchar *)v7 + 374) = Function_2079aa8((int)v6, v5);
  *((uchar *)v7 + 375) = 0;
  result = Function_202486c(v12, (uchar *)v7, 0x198u);
  v7[204] = result;
  return result;
}

//----- (0222AF88) --------------------------------------------------------
int __fastcall Function_222af88(int a1, uchar *a2, uchar a3)
{
  uchar *v3;
  int result;

  v3 = a2;
  a2[375] = a3;
  result = Function_202486c(a1, a2, 0x198u);
  *((ushort *)v3 + 204) = result;
  return result;
}

//----- (0222AFA4) --------------------------------------------------------
int __fastcall Function_222afa4(int a1, int a2, ushort *a3)
{
  uint v3;
  int v4;
  uint v5;

  v3 = (uint)a3;
  v4 = a2;
  MI_CpuFill8(a3, 0, 0x80u);
  return MI_CpuCopy8(v4, v3, 0x80u, v5);
}

//----- (0222AFC0) --------------------------------------------------------
int __fastcall Function_222afc0(int a1, uint a2)
{
  return MI_CpuCopy8(a1, a2, 0x80u, (uint)MI_CpuCopy8);
}

//----- (0222AFCC) --------------------------------------------------------
int __fastcall Function_222afcc(int a1, int a2, ushort *a3)
{
  ushort *v3;
  int v4;
  int result;

  v3 = a3;
  v4 = a2;
  MI_CpuFill8(a3, 0, 8u);
  *(uchar *)v3 = *(uchar *)(v4 + 25);
  *((uchar *)v3 + 1) = *(uchar *)(v4 + 26);
  *((uchar *)v3 + 2) = *(uchar *)(v4 + 21);
  *((uchar *)v3 + 3) = *(uchar *)(v4 + 22);
  v3[2] = *(ushort *)(v4 + 28);
  result = (uchar)(v3[3] & 0xFE) | *(uchar *)(v4 + 27) & 1;
  *((uchar *)v3 + 6) = result;
  return result;
}

//----- (0222B008) --------------------------------------------------------
int __fastcall Function_222b008(ushort *a1, uint *a2)
{
  uint *v2;
  ushort *v3;
  int *v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint v10;
  int result;

  v2 = a2;
  v3 = a1;
  MI_CpuFill8(a1, 0, 0x414u);
  *((uint *)v3 + 81) = v2[1];
  *(uint *)v3 = v2[2];
  v4 = v2 + 3;
  v5 = (int *)(v3 + 168);
  v6 = 5;
  do
  {
    v7 = *v4;
    v8 = v4[1];
    v4 += 2;
    *v5 = v7;
    v5[1] = v8;
    v5 += 2;
    --v6;
  }
  while ( v6 );
  *v5 = *v4;
  *((uint *)v3 + 2) = v2[15];
  *((uint *)v3 + 1) = v2[14];
  *((uint *)v3 + 83) = -1;
  *((uint *)v3 + 250) = 23004;
  *((uint *)v3 + 251) = 23004;
  v9 = ((int (*)(void))Function_222de8c)();
  *((uint *)v3 + 237) = malloc(v2[1], v9);
  v10 = Function_222de8c(-1);
  MI_CpuFill8(*((ushort **)v3 + 237), 0, v10);
  *((uint *)v3 + 253) = LoadFromMsgNARC(0, 26, 695, v2[1]);
  *((uint *)v3 + 254) = Function_200b358(v2[1]);
  *((uint *)v3 + 255) = Function_2023790(256, v2[1]);
  *((uint *)v3 + 99) = Function_222bbf0(v2[1]);
  *((uint *)v3 + 3) = *v2;
  *((uchar *)v3 + 16) = 12;
  *((uchar *)v3 + 17) = 2;
  if ( Function_222dcdc(v3 + 6) != 1 )
    ErrorHandler();
  result = 1;
  *((uint *)v3 + 241) = 1;
  *((uint *)v3 + 238) = 1;
  return result;
}

//----- (0222B0F0) --------------------------------------------------------
uint __fastcall Function_222b0f0(int a1)
{
  int v1;
  int v2;
  uint v3;

  v1 = a1;
  Function_222dcfc();
  *(uint *)(v1 + 964) = 0;
  Function_20237bc_FreeMsg(*(uint *)(v1 + 1020), 0);
  Function_200b3f0(*(uint **)(v1 + 1016), v2);
  Function_200b190(*(ushort **)(v1 + 1012));
  v3 = free(*(uint *)(v1 + 948));
  Function_222bc40(v3);
  return free(*(uint *)(v1 + 396));
}

//----- (0222B138) --------------------------------------------------------
int __fastcall Function_222b138(int a1)
{
  int v1;

  v1 = a1;
  Function_222dcfc();
  *(uint *)(v1 + 964) = 0;
  return 1;
}

//----- (0222B14C) --------------------------------------------------------
int __fastcall Function_222b14c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = ((int (*)(void))dword_21D76E8[0])();
  ((void (__fastcall *)(int))dword_21D7DB0[0])(v2);
  Function_203848c();
  *(uint *)(v1 + 968) = 0;
  return 1;
}

//----- (0222B168) --------------------------------------------------------
int __fastcall Function_222b168(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = ((int (__fastcall *)(int, uint))dword_21D1E30[67])(-*(uint *)(a1 + 992), *(uint *)(a1 + 996));
  Function_222bb60(v1, v2, -*(uint *)(v1 + 992));
  return 1;
}

//----- (0222B190) --------------------------------------------------------
int __fastcall Function_222b190(int a1)
{
  if ( !(dword_21BF6C4 & 1) && !(dword_21BF6C4 & 2) )
    return 0;
  Function_222bb54(a1, 0);
  return 1;
}

//----- (0222B1B4) --------------------------------------------------------
int __fastcall Function_222b1b4(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( !Function_222bbbc() )
    return 0;
  Function_222afa4(*(uint *)v3, v4, (ushort *)(v3 + 400));
  Function_222ae60(*(uint *)v3, v5, (uchar *)(v3 + 528));
  *(uchar *)(v3 + 1041) = 60;
  *(uint *)(v3 + 1000) = 20000;
  return 1;
}

//----- (0222B1FC) --------------------------------------------------------
int __fastcall Function_222b1fc(int a1, short a2)
{
  int v2;
  short v3;

  v2 = a1;
  v3 = a2;
  if ( !Function_222bbbc() )
    return 0;
  *(ushort *)(v2 + 940) = v3;
  *(uint *)(v2 + 1000) = 20001;
  return 1;
}

//----- (0222B224) --------------------------------------------------------
int __fastcall Function_222b224(int a1, uchar a2, int a3, uint *a4, uint a5)
{
  int v5;
  uchar v6;
  int v7;
  uint *v8;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  if ( !Function_222bbbc() )
    return 0;
  *(uchar *)(v5 + 940) = v6;
  *(uchar *)(v5 + 941) = a5;
  Function_222afa4(*(uint *)v5, v7, (ushort *)(v5 + 400));
  Function_222ae88(*(uint *)v5, v8, a5, (ushort *)(v5 + 528), *(uint *)(v5 + 324));
  Function_222af88(*(uint *)v5, (uchar *)(v5 + 528), v6);
  *(uchar *)(v5 + 1041) = 60;
  *(uint *)(v5 + 1000) = 21000;
  return 1;
}

//----- (0222B290) --------------------------------------------------------
int __fastcall Function_222b290(int a1, char a2)
{
  int v2;
  char v3;

  v2 = a1;
  v3 = a2;
  if ( !Function_222bbbc() )
    return 0;
  *(uchar *)(v2 + 940) = v3;
  *(uint *)(v2 + 1000) = 21001;
  return 1;
}

//----- (0222B2B8) --------------------------------------------------------
int __fastcall Function_222b2b8(int a1)
{
  int v1;

  v1 = a1;
  if ( !Function_222bbbc() )
    return 0;
  *(uint *)(v1 + 1000) = 22000;
  return 1;
}

//----- (0222B2D8) --------------------------------------------------------
int __fastcall Function_222b2d8(int a1, int a2, uint *a3)
{
  int v3;
  int v4;
  uint *v5;
  int v7;
  uint v8;
  int v9;
  int v10;
  int v11;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( !Function_222bbbc() )
    return 0;
  v7 = LoadPlayerDataAdress_26(*(uint *)v3);
  MI_CpuCopy8(v7, v3 + 408, 4u, v8);
  Function_222afcc(*(uint *)v3, v4, (ushort *)(v3 + 400));
  v9 = 0;
  v10 = v3;
  do
  {
    v11 = v5[1];
    ++v9;
    *(uint *)(v10 + 412) = *v5;
    *(uint *)(v10 + 416) = v11;
    v5 += 2;
    v10 += 8;
  }
  while ( v9 < 3 );
  *(uint *)(v3 + 1000) = 22001;
  return 1;
}

//----- (0222B338) --------------------------------------------------------
int __fastcall Function_222b338(int a1, int a2)
{
  int v2;
  int v3;
  int v5;
  uint v6;

  v2 = a1;
  v3 = a2;
  if ( !Function_222bbbc() )
    return 0;
  if ( Function_202f1d4() != 7504 )
    ErrorHandler();
  *(uint *)(v2 + 400) = Function_202f27c();
  ((void (__fastcall *)(uint))dword_2248408[135])(*(uint *)v2);
  v5 = Function_202fde8();
  MI_CpuCopy8(v3, v5, 0x80u, v6);
  *(uchar *)(v2 + 1041) = 60;
  *(uint *)(v2 + 1000) = 23000;
  return 1;
}

//----- (0222B394) --------------------------------------------------------
int __fastcall Function_222b394(int a1, short a2, char a3, char a4, char a5)
{
  int v5;
  short v6;
  char v7;
  char v8;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  if ( !Function_222bbbc() )
    return 0;
  MI_CpuFill8((ushort *)(v5 + 400), 0, 0x10u);
  *(ushort *)(v5 + 400) = v6;
  *(uchar *)(v5 + 402) = v7;
  *(uchar *)(v5 + 403) = v8;
  *(uchar *)(v5 + 404) = a5;
  *(uint *)(v5 + 408) = 320;
  *(uint *)(v5 + 1008) = 0;
  *(uint *)(v5 + 1000) = 23001;
  return 1;
}

//----- (0222B3EC) --------------------------------------------------------
int __fastcall Function_222b3ec(int a1)
{
  int v1;

  v1 = a1;
  if ( !Function_222bbbc() )
    return 0;
  MI_CpuFill8((ushort *)(v1 + 400), 0, 0x10u);
  *(ushort *)(v1 + 400) = -1;
  *(uchar *)(v1 + 402) = -2;
  *(uchar *)(v1 + 403) = -1;
  *(uchar *)(v1 + 404) = -1;
  *(uint *)(v1 + 408) = 320;
  *(uint *)(v1 + 1008) = 0;
  *(uint *)(v1 + 1000) = 23001;
  return 1;
}

//----- (0222B44C) --------------------------------------------------------
int __fastcall Function_222b44c(int a1)
{
  int v1;

  v1 = a1;
  if ( !Function_222bbbc() )
    return 0;
  MI_CpuFill8((ushort *)(v1 + 400), 0, 0x10u);
  *(ushort *)(v1 + 400) = -1;
  *(uchar *)(v1 + 402) = -1;
  *(uchar *)(v1 + 403) = -1;
  *(uchar *)(v1 + 404) = -1;
  *(uint *)(v1 + 408) = 320;
  *(uint *)(v1 + 1008) = 0;
  *(uint *)(v1 + 1000) = 23001;
  return 1;
}

//----- (0222B4A8) --------------------------------------------------------
int __fastcall Function_222b4a8(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( !Function_222bbbc() )
    return 0;
  MI_CpuFill8((ushort *)(v1 + 400), 0, 4u);
  *(uint *)(v1 + 400) = 320;
  result = 1;
  *(uint *)(v1 + 1008) = 1;
  *(uint *)(v1 + 1000) = 23001;
  return result;
}

//----- (0222B4E4) --------------------------------------------------------
int __fastcall Function_222b4e4(int a1)
{
  int v1;

  v1 = a1;
  if ( !Function_222bbbc() )
    return 0;
  MI_CpuFill8((ushort *)(v1 + 400), 0, 4u);
  *(uint *)(v1 + 400) = 320;
  *(uint *)(v1 + 1008) = 2;
  *(uint *)(v1 + 1000) = 23001;
  return 1;
}

//----- (0222B524) --------------------------------------------------------
int __fastcall Function_222b524(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( !Function_222bbbc() )
    return 0;
  v3[235] = v4;
  v3[236] = v5;
  v3[250] = 23002;
  return 1;
}

//----- (0222B550) --------------------------------------------------------
int __fastcall Function_222b550(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( !Function_222bbbc() )
    return 0;
  v3[235] = v4;
  v3[236] = v5;
  v3[250] = 23003;
  return 1;
}

//----- (0222B57C) --------------------------------------------------------
int __fastcall Function_222b57c(int a1)
{
  int v1;
  int (__fastcall *v2)(int, int);
  void (__fastcall *v3)(uint, int);
  int v4;
  int v5;

  v1 = a1;
  if ( *(uint *)(a1 + 964) == 1 )
  {
    if ( *(uint *)(a1 + 1000) != 23004 )
    {
      if ( *(uchar *)(a1 + 1041) )
      {
        --*(uchar *)(a1 + 1041);
      }
      else
      {
        switch ( (uchar)Function_222dd08() )
        {
          case 1u:
          case 7u:
          case 8u:
          case 9u:
            if ( Function_222b6d8(v1) == 1 )
              *(uint *)(v1 + 1000) = 23004;
            break;
          default:
            break;
        }
      }
    }
    Function_222b860(v1);
    v2 = *(int (__fastcall **)(int, int))(v1 + 1036);
    if ( v2 && v2(v1, v1 + 1024) == 1 )
    {
      *(uint *)(v1 + 1036) = 0;
      v3 = *(void (__fastcall **)(uint, int))(v1 + 1024);
      if ( v3 )
      {
        v3(*(uint *)(v1 + 336), v1 + 380);
        *(uint *)(v1 + 1024) = 0;
      }
      MI_CpuFill8((ushort *)(v1 + 1024), 0, 0x10u);
      *(uint *)(v1 + 1004) = 23004;
    }
  }
  v4 = dword_222E480[*(uint *)(v1 + 956)];
  if ( v4 )
  {
    v5 = (*(int (__fastcall **)(int, int))(v4 + 4 * *(uint *)(v1 + 960)))(v1, v1 + 972);
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        MI_CpuFill8((ushort *)(v1 + 972), 0, 0xCu);
        ++*(uint *)(v1 + 960);
        MI_CpuFill8((ushort *)(v1 + 972), 0, 0xCu);
        if ( !*(uint *)(dword_222E480[*(uint *)(v1 + 956)] + 4 * *(uint *)(v1 + 960)) )
        {
          *(uint *)(v1 + 960) = 0;
          *(uint *)(v1 + 956) = 0;
        }
      }
      else if ( v5 == 2 )
      {
        MI_CpuFill8((ushort *)(v1 + 972), 0, 0xCu);
        *(uint *)(v1 + 960) = 0;
      }
    }
  }
  return 1;
}

//----- (0222B6D8) --------------------------------------------------------
int __fastcall Function_222b6d8(int a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;

  v1 = (uint *)a1;
  v2 = *(uint *)(a1 + 1000);
  v3 = 0;
  if ( v2 <= 22000 )
  {
    if ( v2 >= 22000 )
    {
      v3 = Function_222de98(*(uint *)(a1 + 948));
      goto LABEL_39;
    }
    if ( v2 > 21000 )
    {
      if ( v2 == 21001 )
      {
        v3 = Function_222de34(*(uchar *)(a1 + 940), *(uint *)(a1 + 948));
        goto LABEL_39;
      }
    }
    else
    {
      if ( v2 >= 21000 )
      {
        v3 = Function_222ddcc(*(uchar *)(a1 + 940), a1 + 400, *(uint *)(a1 + 948));
        goto LABEL_39;
      }
      if ( v2 <= 20001 && v2 >= 20000 )
      {
        if ( v2 == 20000 )
        {
          v3 = Function_222dd30(a1 + 400, *(uint *)(a1 + 948));
          goto LABEL_39;
        }
        if ( v2 == 20001 )
        {
          v3 = Function_222dd8c(*(ushort *)(a1 + 940), *(uint *)(a1 + 948));
          goto LABEL_39;
        }
      }
    }
    goto LABEL_38;
  }
  if ( v2 <= 23000 )
  {
    if ( v2 >= 23000 )
    {
      v3 = Function_222df08(*(uint *)(a1 + 400), *(uint *)(a1 + 948));
      goto LABEL_39;
    }
    if ( v2 == 22001 )
    {
      v3 = Function_222deb8(a1 + 400, *(uint *)(a1 + 948));
      goto LABEL_39;
    }
    goto LABEL_38;
  }
  if ( v2 > 23003 || v2 < 23001 )
  {
LABEL_38:
    ErrorHandler();
    goto LABEL_39;
  }
  if ( v2 != 23001 )
  {
    if ( v2 == 23002 )
    {
      v3 = Function_222e058(*(uint *)(a1 + 940), *(uint *)(a1 + 944), 320, *(uint *)(a1 + 948));
      goto LABEL_39;
    }
    if ( v2 == 23003 )
    {
      v3 = Function_222e08c(*(uint *)(a1 + 940), *(uint *)(a1 + 944), *(uint *)(a1 + 948));
      goto LABEL_39;
    }
    goto LABEL_38;
  }
  v4 = *(uint *)(a1 + 1008);
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      v3 = Function_222dfa8(v1 + 100, v1[237]);
    }
    else if ( v4 == 2 )
    {
      v3 = Function_222e000(v1 + 100, v1[237]);
    }
  }
  else
  {
    v3 = Function_222df60(v1 + 100, v1[237]);
  }
LABEL_39:
  if ( v3 == 1 )
    v1[251] = v1[250];
  return v3;
}

//----- (0222B860) --------------------------------------------------------
int __fastcall Function_222b860(uint *a1)
{
  uint *v1;
  int v3;

  v1 = a1;
  if ( a1[251] == 23004 )
    return 1;
  a1[82] = Function_222dd08();
  v3 = v1[83];
  if ( v1[82] != v3 )
  {
    switch ( (uchar)v3 )
    {
      case 7:
        v1[96] = 1;
        v1[97] = 0;
        v1[98] = 7;
        v1[95] = 1;
        v1[259] = Function_222b95c;
        break;
      case 8:
        v1[259] = Function_222b920;
        Function_222b960(v1);
        break;
      case 9:
        v1[96] = 0;
        v1[97] = 0;
        v1[98] = Function_222dd24();
        v1[95] = 1;
        v1[259] = Function_222b95c;
        break;
      default:
        break;
    }
    v1[83] = v1[82];
  }
  return 1;
}

//----- (0222B920) --------------------------------------------------------
int Function_222b920()
{
  return 1;
}

//----- (0222B924) --------------------------------------------------------
int Function_222b924()
{
  return 1;
}

//----- (0222B928) --------------------------------------------------------
BOOL __fastcall Function_222b928(uint *a1, int a2)
{
  int v2;
  uint *v3;
  int v4;

  v2 = a2;
  v3 = a1;
  v4 = Function_222de80(a1);
  return (uint)(((int (__fastcall *)(uint, uint, uint, int))dword_2248408[148])(
                          *v3,
                          *(uint *)(v4 + 4),
                          *(uint *)(v4 + 8),
                          v2 + 4)
                      - 2) <= 1;
}

//----- (0222B954) --------------------------------------------------------
int Function_222b954()
{
  return 1;
}

//----- (0222B958) --------------------------------------------------------
int Function_222b958()
{
  return 1;
}

//----- (0222B95C) --------------------------------------------------------
int Function_222b95c()
{
  return 1;
}

//----- (0222B960) --------------------------------------------------------
int __fastcall Function_222b960(uint *a1)
{
  uint *v1;
  int v2;
  ushort *v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = 1;
  v3 = (ushort *)Function_222de80(a1);
  Function_222de74();
  if ( v1[251] != *v3 )
    ErrorHandler();
  v1[256] = 0;
  v4 = *v3;
  if ( v4 > 21001 )
  {
    if ( v4 > 22001 )
    {
      if ( v4 > 23000 )
      {
        if ( v4 <= 23003 && v4 >= 23001 )
        {
          switch ( v4 )
          {
            case 23001:
              v2 = Function_222be00(v1, v3);
              v1[256] = v1[92];
              break;
            case 23002:
              v2 = Function_222beb8(v1, v3);
              v1[256] = v1[93];
              break;
            case 23003:
              v2 = Function_222bf24(v1, v3);
              v1[256] = v1[94];
              break;
          }
        }
      }
      else if ( v4 == 23000 )
      {
        v2 = Function_222bdc8(v1, v3);
        v1[256] = v1[91];
        if ( v2 )
          v1[259] = Function_222b928;
        else
          v1[259] = Function_222b924;
      }
    }
    else if ( v4 < 22001 )
    {
      if ( v4 == 22000 )
      {
        v2 = Function_222bd64(v1, v3);
        v1[256] = v1[89];
      }
    }
    else
    {
      v2 = Function_222bd88(v1, v3);
      v1[256] = v1[90];
    }
  }
  else if ( v4 < 21001 )
  {
    if ( v4 > 20001 )
    {
      if ( v4 == 21000 )
      {
        v2 = Function_222bcd0(v1, v3);
        v1[256] = v1[87];
        if ( !v2 )
          v1[259] = Function_222b958;
      }
    }
    else if ( v4 >= 20000 )
    {
      if ( v4 == 20000 )
      {
        v2 = Function_222bc4c(v1, v3);
        v1[256] = v1[85];
        if ( !v2 )
          v1[259] = Function_222b954;
      }
      else if ( v4 == 20001 )
      {
        v2 = Function_222bc70(v1, v3);
        v1[256] = v1[86];
      }
    }
  }
  else
  {
    v2 = Function_222bcf8(v1, v3);
    v1[256] = v1[88];
  }
  if ( v2 )
  {
    v5 = 0;
  }
  else
  {
    v1[96] = 2;
    v1[97] = *v3;
    v1[98] = v3[1];
    v5 = 1;
  }
  v1[95] = v5;
  return v2;
}

//----- (0222BB48) --------------------------------------------------------
int __fastcall Function_222bb48(int a1, int *a2)
{
  int v2;

  v2 = a1 + 380;
  *a2 = v2;
  return *(uint *)v2;
}

//----- (0222BB54) --------------------------------------------------------
int __fastcall Function_222bb54(int a1)
{
  return (*(int (__fastcall **)(uint))(a1 + 4))(*(uint *)(a1 + 8));
}

//----- (0222BB60) --------------------------------------------------------
int __fastcall Function_222bb60(int a1, uint a2, int a3)
{
  int v3;
  uint v4;
  ushort *v5;
  int v6;
  int v7;

  v3 = a1;
  v4 = a2;
  if ( a2 == -1 )
    v4 = 11;
  Function_200b60c(*(uint *)(a1 + 1016), 0, a3, 5, 2, 1);
  v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v3 + 1012), v4);
  Function_200c388(*(uint **)(v3 + 1016), *(uint *)(v3 + 1020), (int)v5);
  Function_20237bc_FreeMsg((int)v5, v6);
  v7 = *(uint *)(v3 + 1020);
  return Function_222bb54(v3);
}

//----- (0222BBBC) --------------------------------------------------------
BOOL __fastcall Function_222bbbc(int a1)
{
  int v1;

  v1 = a1;
  return !Function_222bbe8() && *(uint *)(v1 + 1000) == 23004 && *(uint *)(v1 + 1004) == 23004;
}

//----- (0222BBE8) --------------------------------------------------------
int __fastcall Function_222bbe8(int a1)
{
  return *(uint *)(a1 + 956);
}

//----- (0222BBF0) --------------------------------------------------------
uint *__fastcall Function_222bbf0(uint a1)
{
  uint *v1;
  int v2;

  v1 = (uint *)malloc(a1, 0x2000);
  v2 = Function_20c33b4(0, v1, (int)(v1 + 2048), 1);
  OS_SetArenaLo(0, v2);
  dword_222E760[0] = Function_20c3470(0, (v2 + 31) & 0xFFFFFFE0, ((uint)v1 + 8223) & 0xFFFFFFE0);
  Function_20c3384(0, dword_222E760[0]);
  return v1;
}

//----- (0222BC40) --------------------------------------------------------
int Function_222bc40()
{
  return Function_20c345c(0);
}

//----- (0222BC4C) --------------------------------------------------------
int __fastcall Function_222bc4c(int a1, int a2)
{
  int result;

  result = 0;
  switch ( (uchar)*(ushort *)(a2 + 2) )
  {
    case 0u:
      result = 1;
      break;
    default:
      return result;
  }
  return result;
}

//----- (0222BC70) --------------------------------------------------------
int __fastcall Function_222bc70(int a1, int a2)
{
  int result;

  result = 0;
  switch ( (uchar)*(ushort *)(a2 + 2) )
  {
    case 0u:
      result = 1;
      break;
    default:
      return result;
  }
  return result;
}

//----- (0222BC90) --------------------------------------------------------
int __fastcall Function_222bc90(int a1, uint *a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  int v6;
  int result;
  int v8;
  int v9;
  uint *v10;
  uint *v11;

  v3 = a2;
  v4 = a3;
  v5 = Function_222de80(a1);
  v6 = v5 + 4;
  result = *(uint *)(v5 + 4);
  if ( result > v4 )
    result = v4;
  v8 = v6 + 4;
  v9 = 0;
  if ( result > 0 )
  {
    v10 = v3;
    do
    {
      ++v9;
      *v10 = v8 + 12;
      ++v10;
      v8 += 236;
    }
    while ( v9 < result );
  }
  if ( v9 < v4 )
  {
    v11 = &v3[v9];
    do
    {
      ++v9;
      *v11 = 0;
      ++v11;
    }
    while ( v9 < v4 );
  }
  return result;
}

//----- (0222BCD0) --------------------------------------------------------
int __fastcall Function_222bcd0(int a1, int a2)
{
  int result;

  result = 0;
  switch ( (uchar)*(ushort *)(a2 + 2) )
  {
    case 0u:
      result = 1;
      break;
    default:
      return result;
  }
  return result;
}

//----- (0222BCF8) --------------------------------------------------------
int __fastcall Function_222bcf8(int a1, int a2)
{
  int result;

  result = 0;
  switch ( (uchar)*(ushort *)(a2 + 2) )
  {
    case 0u:
      result = 1;
      break;
    default:
      return result;
  }
  return result;
}

//----- (0222BD18) --------------------------------------------------------
int __fastcall Function_222bd18(int a1, uint *a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint *v10;
  uint *v11;

  v3 = a2;
  v4 = a3;
  v5 = Function_222de80(a1);
  v6 = *(uint *)(v5 + 4);
  v7 = v5 + 4;
  if ( v6 > v4 )
  {
    v6 = v4;
    ErrorHandler();
  }
  v8 = v7 + 4;
  v9 = 0;
  if ( v6 > 0 )
  {
    v10 = v3;
    do
    {
      ++v9;
      *v10 = v8 + 16;
      ++v10;
      v8 += 556;
    }
    while ( v9 < v6 );
  }
  if ( v9 < v4 )
  {
    v11 = &v3[v9];
    do
    {
      ++v9;
      *v11 = 0;
      ++v11;
    }
    while ( v9 < v4 );
  }
  return v6;
}

//----- (0222BD64) --------------------------------------------------------
int __fastcall Function_222bd64(int a1, int a2)
{
  int result;

  result = 0;
  if ( !*(ushort *)(a2 + 2) )
    result = 1;
  return result;
}

//----- (0222BD78) --------------------------------------------------------
int __fastcall Function_222bd78(int a1, int *a2)
{
  int *v2;
  int result;

  v2 = a2;
  result = Function_222de80(a1) + 4;
  *v2 = result;
  return result;
}

//----- (0222BD88) --------------------------------------------------------
int __fastcall Function_222bd88(int a1, int a2)
{
  int result;

  result = 0;
  switch ( (uchar)*(ushort *)(a2 + 2) )
  {
    case 0u:
      result = 1;
      break;
    default:
      return result;
  }
  return result;
}

//----- (0222BDAC) --------------------------------------------------------
int __fastcall Function_222bdac(int a1, uint *a2, int *a3)
{
  uint *v3;
  int *v4;
  int v5;
  int result;

  v3 = a2;
  v4 = a3;
  v5 = Function_222de80(a1);
  *v3 = v5 + 4;
  result = v5 + 1372;
  *v4 = result;
  return result;
}

//----- (0222BDC8) --------------------------------------------------------
int __fastcall Function_222bdc8(int a1, int a2)
{
  int result;

  result = 0;
  switch ( (uchar)*(ushort *)(a2 + 2) )
  {
    case 0u:
      result = 1;
      break;
    default:
      return result;
  }
  return result;
}

//----- (0222BDF0) --------------------------------------------------------
long long __fastcall Function_222bdf0(int a1)
{
  return *(ull *)(Function_222de80(a1) + 4);
}

//----- (0222BE00) --------------------------------------------------------
int __fastcall Function_222be00(int a1, int a2)
{
  int result;

  result = 0;
  switch ( (uchar)*(ushort *)(a2 + 2) )
  {
    case 0u:
      result = 1;
      break;
    default:
      return result;
  }
  return result;
}

//----- (0222BE20) --------------------------------------------------------
int __fastcall Function_222be20(int *a1, int a2, int a3)
{
  int *v3;
  uint *v4;
  int v5;
  int v6;
  int v7;
  uint *v8;
  int *v10;
  int v11;
  int v12;
  int v13;

  v12 = a3;
  v10 = a1;
  v11 = a2;
  v3 = (int *)(Function_222de80(a1) + 4);
  v13 = *v3;
  if ( *v3 > v12 )
  {
    v13 = v12;
    ErrorHandler();
  }
  v4 = v3 + 1;
  v5 = 0;
  if ( v13 > 0 )
  {
    v6 = v11;
    do
    {
      *(uint *)v6 = v4 + 3;
      v7 = v4[2];
      if ( *(ull *)(v4 + 57) != *(ull *)(v4 + 1) )
      {
        v4[57] = v4[1];
        v4[58] = v7;
        *(ushort *)(*(uint *)v6 + 224) = Function_202486c(*v10, (uchar *)(*(uint *)v6 + 128), 0x58u);
      }
      ++v5;
      v4 += 60;
      v6 += 4;
    }
    while ( v5 < v13 );
  }
  if ( v5 < v12 )
  {
    v8 = (uint *)(v11 + 4 * v5);
    do
    {
      ++v5;
      *v8 = 0;
      ++v8;
    }
    while ( v5 < v12 );
  }
  return v13;
}

//----- (0222BEB8) --------------------------------------------------------
int __fastcall Function_222beb8(int a1, int a2)
{
  int result;

  result = 0;
  switch ( (uchar)*(ushort *)(a2 + 2) )
  {
    case 0u:
      result = 1;
      break;
    default:
      return result;
  }
  return result;
}

//----- (0222BED8) --------------------------------------------------------
int __fastcall Function_222bed8(int *a1, int a2)
{
  int *v2;
  int v3;
  uint *v4;
  int v5;

  v2 = a1;
  v3 = a2;
  v4 = (uint *)Function_222de80(a1);
  *(uint *)v3 = v4 + 4;
  v5 = v4[3];
  if ( *((ull *)v4 + 29) ^ *((ull *)v4 + 1) )
  {
    v4[58] = v4[2];
    v4[59] = v5;
    *(ushort *)(*(uint *)v3 + 224) = Function_202486c(*v2, (uchar *)(*(uint *)v3 + 128), 0x58u);
  }
  return v4[2];
}

//----- (0222BF24) --------------------------------------------------------
int __fastcall Function_222bf24(int a1, int a2)
{
  int result;

  result = 0;
  switch ( (uchar)*(ushort *)(a2 + 2) )
  {
    case 0u:
      result = 1;
      break;
    default:
      return result;
  }
  return result;
}

//----- (0222BF44) --------------------------------------------------------
int __fastcall Function_222bf44(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  Function_201ff00();
  Function_201ff68();
  REG_DISPCNT &= 0xFFFFE0FF;
  REG_DISPCNT_SUB &= 0xFFFFE0FF;
  REG_DISPCNT &= 0xFFFF1FFF;
  REG_DISPCNT_SUB &= 0xFFFF1FFF;
  REG_BLDCNT = 0;
  REG_BLDCNT_SUB = 0;
  Function_2017fc8(3, 117, 327680);
  v2 = MallocSomeDataAndStorePtrInOverlayData1c(v1, 976, 0x75u);
  MI_CpuFill8((ushort *)v2, 0, 0x3D0u);
  *(uint *)v2 = LoadPtrToOverWorldDataIn18(v1);
  *(uint *)(v2 + 4) = Function_2018340(0x75u);
  Function_201dbec(64, 0x75u);
  Function_2017dd4(4, 8);
  Function_222c224(*(uint *)(v2 + 4));
  Function_201e3d8();
  Function_201e450(4u);
  *(uint *)(v2 + 32) = Function_200b368(0xBu, 64, 0x75u);
  *(uint *)(v2 + 36) = LoadFromMsgNARC(0, 26, 671, 0x75u);
  *(uint *)(v2 + 40) = LoadFromMsgNARC(0, 26, 674, 0x75u);
  *(uint *)(v2 + 44) = LoadFromMsgNARC(0, 26, 695, 0x75u);
  *(uint *)(v2 + 52) = Function_2023790(180, 0x75u);
  *(uint *)(v2 + 60) = Function_2023790(256, 0x75u);
  *(uint *)(v2 + 56) = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 36), 0x1Fu);
  Function_222c3b0(v2);
  Function_222c664(v2);
  Function_200f174(0, 1, 1, 0, 6, 1, 117);
  Function_201ff0c(0x10u, 1);
  Function_201ff0c(1u, 1);
  Function_201ff0c(2u, 1);
  Function_201ff74(1u, 1);
  Function_201ff74(2u, 1);
  byte_21BF6E1 = 0;
  Function_201ffe8();
  Function_2002ac8(1);
  Function_2002ae4(0);
  Function_2002b20(0);
  SetMainLoopFunctionCall((int)Function_222c1fc, v2);
  if ( *(uint *)(*(uint *)v2 + 4) )
  {
    Function_2039734();
    Function_222c920(v2, 13, 8);
  }
  else if ( *(uint *)(**(uint **)v2 + 8) )
  {
    *(uint *)(v2 + 8) = 1;
  }
  else
  {
    *(uint *)(v2 + 8) = 0;
  }
  *(uint *)(*(uint *)v2 + 124) = 0;
  return 1;
}

//----- (0222C0F8) --------------------------------------------------------
int __fastcall Function_222c0f8(int a1, int *a2)
{
  int *v2;
  int v3;
  int v4;
  uint *v5;
  int v6;
  int v7;

  v2 = a2;
  v3 = LoadOverlayData1c(a1);
  v4 = *v2;
  v5 = (uint *)v3;
  if ( *v2 )
  {
    if ( v4 == 1 )
    {
      v6 = *(uint *)(v3 + 8);
      v7 = ((int (*)(void))*(&off_222E600 + v6))();
      if ( v6 != v5[2] )
      {
        v5[36] = 0;
        v5[38] = 0;
        v5[37] = 0;
      }
      if ( v7 == 1 )
        *v2 = 2;
    }
    else if ( v4 == 2 && Function_200f2ac() == 1 )
    {
      return 1;
    }
  }
  else if ( Function_200f2ac() == 1 )
  {
    *v2 = 1;
  }
  return 0;
}

//----- (0222C160) --------------------------------------------------------
int __fastcall Function_222c160(int a1)
{
  int v1;
  int v2;
  int v3;
  int *v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  v3 = v2;
  v4 = *(int **)(v2 + 164);
  if ( v4 )
  {
    Call_RemoveTaskFromTaskList(v4);
    *(uint *)(v3 + 164) = 0;
    *(uint *)(v3 + 168) = 0;
  }
  Function_200b190(*(ushort **)(v3 + 44));
  Function_200b190(*(ushort **)(v3 + 40));
  Function_200b190(*(ushort **)(v3 + 36));
  Function_200b3f0(*(uint **)(v3 + 32), v5);
  Function_20237bc_FreeMsg(*(uint *)(v3 + 56), v6);
  Function_20237bc_FreeMsg(*(uint *)(v3 + 60), v7);
  Function_20237bc_FreeMsg(*(uint *)(v3 + 52), v8);
  Function_222c70c(v3);
  free(*(uint *)(v3 + 4));
  Function_222c38c(*(uint *)(v3 + 4));
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  Function_201dc3c();
  Function_201e530();
  Function_2002ac8(0);
  Function_2002ae4(0);
  Function_2002b20(0);
  Function_2039794();
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(117);
  return 1;
}

//----- (0222C1FC) --------------------------------------------------------
int __fastcall Function_222c1fc(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_201dcac();
  Function_200a858();
  Function_201c2b8(*(uint *)(v1 + 4));
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (0222C224) --------------------------------------------------------
uint __fastcall Function_222c224(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int *v5;
  char *v6;
  int v7;
  int v8;
  int v9;
  int *v10;
  char *v11;
  int v12;
  int v13;
  int v14;
  int *v15;
  char *v16;
  int v17;
  int v18;
  int v19;
  char v21;
  char v22;
  char v23;
  char v24;
  int v25;
  int v26;
  int v27;
  int v28;
  char v29;
  int v30;

  v30 = a4;
  v4 = a1;
  Function_201ff00();
  Function_201ff68();
  v5 = dword_222E4B8;
  v6 = &v29;
  v7 = 5;
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
  GX_SetBanks((int *)&v29);
  MIi_CpuClear32(0, (uint *)0x6000000, 0x80000);
  MIi_CpuClear32(0, (uint *)0x6200000, 0x20000);
  MIi_CpuClear32(0, (uint *)0x6400000, 0x40000);
  MIi_CpuClear32(0, (uint *)0x6600000, 0x20000);
  v25 = 1;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  SetGraphicsModes(&v25);
  v10 = dword_222E4E0;
  v11 = &v23;
  v12 = 7;
  do
  {
    v13 = *v10;
    v14 = v10[1];
    v10 += 2;
    *(uint *)v11 = v13;
    *((uint *)v11 + 1) = v14;
    v11 += 8;
    --v12;
  }
  while ( v12 );
  Function_20183c4(v4, 0, (int *)&v23, 0);
  Function_2019ebc(v4, 0);
  Function_2019184((int)v4, 0, 0, 0);
  Function_2019184((int)v4, 0, 3u, 0);
  Function_20183c4(v4, 1u, (int *)&v24, 0);
  Function_2019ebc(v4, 1u);
  Function_2019184((int)v4, 1u, 0, 0);
  Function_2019184((int)v4, 1u, 3u, 0);
  v15 = dword_222E518;
  v16 = &v21;
  v17 = 7;
  do
  {
    v18 = *v15;
    v19 = v15[1];
    v15 += 2;
    *(uint *)v16 = v18;
    *((uint *)v16 + 1) = v19;
    v16 += 8;
    --v17;
  }
  while ( v17 );
  Function_20183c4(v4, 4u, (int *)&v21, 0);
  Function_2019ebc(v4, 4u);
  Function_2019184((int)v4, 4u, 0, 0);
  Function_2019184((int)v4, 4u, 3u, 0);
  Function_20183c4(v4, 5u, (int *)&v22, 0);
  Function_2019ebc(v4, 5u);
  Function_2019184((int)v4, 5u, 0, 0);
  Function_2019184((int)v4, 5u, 3u, 0);
  Function_2019690(0, 32, 0, 0x75u);
  return Function_2019690(4u, 32, 0, 0x75u);
}

//----- (0222C38C) --------------------------------------------------------
int __fastcall Function_222c38c(int a1)
{
  int v1;

  v1 = a1;
  Function_2019044(a1, 5);
  Function_2019044(v1, 4);
  Function_2019044(v1, 1);
  return Function_2019044(v1, 0);
}

//----- (0222C3B0) --------------------------------------------------------
uint __fastcall Function_222c3b0(int a1, int a2, int a3, int a4)
{
  uint *v4;
  ushort *v5;
  uchar v6;
  int v7;
  short v8;
  short v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int *v22;
  int v23;

  v15 = a1;
  v4 = *(uint **)(a1 + 4);
  v22 = LoadFromNARC_8(92, 0x75u, a3, a4);
  Function_2007130((int)v22, 3u, 0, 0, 0, 117);
  Function_2007130((int)v22, 3u, 4u, 0, 0, 117);
  LoadFromNARC_PlFont2(0, 416, 117);
  LoadFromNARC_PlFont2(4u, 416, 117);
  v5 = (ushort *)LoadPlayerDataAdress(*(uint *)(**(uint **)v15 + 4));
  v6 = Function_2027b50(v5);
  Function_200dd0c(v4, 0, 1, 10, v6, 117);
  Function_200daa4(v4, 0, 31, 11, 0, 117);
  Function_20070e8((int)v22, 2u, v4, 1u, 0, 0, 0, 117);
  Function_200710c((int)v22, 5u, v4, 1u, 0, 1536, 0, 117);
  Function_20070e8((int)v22, 0xAu, v4, 5u, 0, 0, 0, 117);
  Function_200710c((int)v22, 0xBu, v4, 5u, 0, 1536, 0, 117);
  Function_201975c(0, 0);
  Function_201975c(4u, 0);
  MI_CpuFill8((ushort *)(v15 + 164), 0, 0x32Cu);
  v7 = Function_20071ec((int)v22, 4u, &v23, 117);
  MIi_CpuCopy16(*(uint *)(v23 + 12), v15 + 172, 128, v8);
  MIi_CpuCopy16(*(uint *)(v23 + 12), v15 + 300, 128, v9);
  free(v7);
  v20 = 0;
  v21 = 0;
  v17 = v15 + 300;
  v16 = v15 + 172;
  do
  {
    v19 = 0;
    v18 = 0;
    while ( 1 )
    {
      if ( v20 >= 21 )
        ErrorHandler();
      v10 = 1;
      v11 = v15 + 32 * (v21 + 1) + 2;
      v12 = v17 + 2;
      v13 = v16 + 2;
      do
      {
        Function_200393c(v13, v12, 1u, (v19 >> 8) & 0xFF, *(ushort *)(v11 + 172));
        ++v10;
        v11 += 2;
        v12 += 2;
        v13 += 2;
      }
      while ( v10 < 16 );
      v17 += 32;
      ++v20;
      if ( v18 == 1 )
        break;
      v19 += 768;
      if ( v19 >= 4096 )
      {
        v19 = 4096;
        v18 = 1;
      }
    }
    v16 += 32;
    ++v21;
  }
  while ( v21 < 3 );
  DC_FlushRange(v15 + 300, 672);
  *(uint *)(v15 + 168) = 1;
  *(uint *)(v15 + 164) = AddTaskToTaskList2((int)Function_222c5d0, v15 + 164, 0x14u);
  return Call_FS_CloseFile(v22);
}

//----- (0222C5D0) --------------------------------------------------------
int __fastcall Function_222c5d0(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  result = *(uint *)(a2 + 4);
  if ( result )
  {
    result = 811;
    *(uchar *)(a2 + 811) ^= 1u;
    if ( !(*(uchar *)(a2 + 811) & 1) )
    {
      GX_LoadBGPltt(a2 + 136 + 32 * *(short *)(a2 + 808), 0, 0x20u);
      GXS_LoadBGPltt(v2 + 136 + 32 * *(short *)(v2 + 808), 0, 0x20u);
      result = 810;
      if ( *(uchar *)(v2 + 810) )
      {
        if ( (short)--*(ushort *)(v2 + 808) < 0 )
        {
          *(ushort *)(v2 + 808) = 1;
          *(uchar *)(v2 + 810) ^= 1u;
        }
      }
      else if ( (short)++*(ushort *)(v2 + 808) >= 21 )
      {
        *(ushort *)(v2 + 808) = 19;
        *(uchar *)(v2 + 810) ^= 1u;
      }
    }
  }
  return result;
}

//----- (0222C664) --------------------------------------------------------
int __fastcall Function_222c664(int a1)
{
  int v1;

  v1 = a1;
  Function_201a7e8(*(uint **)(a1 + 4), a1 + 100, 0, 4, 4, 0x17u, 0x10u, 13, 148);
  Function_201ada4_ClearTextBox(v1 + 100, 0);
  Function_201a7e8(*(uint **)(v1 + 4), v1 + 84, 0, 4, 1, 0x18u, 2u, 13, 516);
  Function_201ada4_ClearTextBox(v1 + 84, 0);
  Function_222c760(v1 + 84, *(uint *)(v1 + 56), 0);
  Function_201a7e8(*(uint **)(v1 + 4), v1 + 68, 0, 2, 19, 0x1Bu, 4u, 13, 40);
  return Function_201ada4_ClearTextBox(v1 + 68, 0);
}

//----- (0222C70C) --------------------------------------------------------
uint __fastcall Function_222c70c(int a1)
{
  int v1;

  v1 = a1;
  Function_201a8fc(a1 + 68);
  Function_201a8fc(v1 + 84);
  return Function_201a8fc(v1 + 100);
}

//----- (0222C728) --------------------------------------------------------
int __fastcall Function_222c728(int a1, int a2, int a3, int a4, int a5, int a6)
{
  if ( a4 == 1 )
    return (8 * *(uchar *)(a1 + 7) - Function_2002d7c(a6, a2, 0)) / 2;
  if ( a4 == 2 )
    a3 = 8 * *(uchar *)(a1 + 7) - Function_2002d7c(a6, a2, 0);
  return a3;
}

//----- (0222C760) --------------------------------------------------------
int __fastcall Function_222c760(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6;

  v6 = a1;
  Function_222c728(a1, a2, a3, a5, a6, 1);
  return Function_201d78c(v6, 1);
}

//----- (0222C794) --------------------------------------------------------
uint __fastcall Function_222c794(int a1, uint a2)
{
  int v2;
  uint v3;
  ushort *v4;
  int v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = (ushort *)Function_2023790(256, 0x75u);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v2 + 44), v3, v4);
  Function_200c388(*(uint **)(v2 + 32), *(uint *)(v2 + 60), (int)v4);
  Function_201ada4_ClearTextBox(v2 + 100, 15);
  Function_200dc48(v2 + 100, 1, 31, 0xBu);
  v5 = *(uint *)(v2 + 60);
  Function_201d738_CallInitTextInterpreter(v2 + 100, 1);
  *(uint *)(v2 + 64) = 255;
  return Function_20237bc_FreeMsg((int)v4, v6);
}

//----- (0222C7F8) --------------------------------------------------------
uint __fastcall Function_222c7f8(int a1, uint a2, int a3)
{
  int v3;
  uint v4;

  v3 = a1;
  v4 = a2;
  if ( a2 == -1 )
    v4 = 11;
  Function_200b60c(*(uint *)(a1 + 32), 0, a3, 5, 2, 1);
  Function_200e084(v3 + 68, 1);
  return Function_222c794(v3, v4);
}

//----- (0222C834) --------------------------------------------------------
BOOL __fastcall Function_222c834(int a1)
{
  return a1 != 255 && Function_201d724((uchar)a1);
}

//----- (0222C850) --------------------------------------------------------
int __fastcall Function_222c850(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = *(uint *)(a1 + 136);
  if ( !result )
  {
    result = Function_200e7fc((int *)(v1 + 68), 1);
    *(uint *)(v1 + 136) = result;
  }
  return result;
}

//----- (0222C86C) --------------------------------------------------------
int __fastcall Function_222c86c(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = *(uint *)(a1 + 136);
  if ( result )
  {
    Function_200eba0(result);
    result = 0;
    *(uint *)(v1 + 136) = 0;
  }
  return result;
}

//----- (0222C884) --------------------------------------------------------
int __fastcall Function_222c884(uint *a1, char a2, short a3, int a4)
{
  short v5;
  short v6;
  short v7;
  short v8;
  int v9;

  v9 = a4;
  v5 = 5888;
  v6 = 1805;
  v7 = 3332;
  LOBYTE(v6) = a2;
  v8 = a3;
  return Function_2002100(a1, (uchar *)&v5, 31, 11, 0x75u);
}

//----- (0222C8B8) --------------------------------------------------------
int __fastcall Function_222c8b8(int a1, ushort **a2, uint a3, int a4)
{
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;
  int result;

  v4 = a1;
  v5 = a4;
  v6 = Function_200b1ec_CallMsgDecrypt(a2, a3);
  Function_200c388(*(uint **)(v4 + 32), *(uint *)(v4 + 52), (int)v6);
  Function_20237bc_FreeMsg((int)v6, v7);
  Function_201ada4_ClearTextBox(v4 + 68, 15);
  Function_200e060(v4 + 68, 0, 1, 0xAu);
  v8 = *(uint *)(v4 + 52);
  *(uint *)(v4 + 64) = Function_201d738_CallInitTextInterpreter(v4 + 68, 1);
  result = v4 + 140;
  *(uint *)(v4 + 140) = 0;
  if ( v5 == 255 || !v5 )
  {
    result = 255;
    *(uint *)(v4 + 64) = 255;
  }
  return result;
}

//----- (0222C920) --------------------------------------------------------
int __fastcall Function_222c920(int result, int a2, int a3)
{
  *(uint *)(result + 8) = a2;
  *(uint *)(result + 12) = a3;
  return result;
}

//----- (0222C928) --------------------------------------------------------
int Function_222c928()
{
  int result;

  switch ( ((uchar (*)(void))dword_21D1E30[67])() )
  {
    case 1u:
    case 4u:
    case 5u:
    case 6u:
    case 7u:
    case 8u:
    case 9u:
    case 0xAu:
    case 0xBu:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

//----- (0222C960) --------------------------------------------------------
int __fastcall Function_222c960(int a1)
{
  int v1;
  int v2;
  int v4;

  v1 = a1;
  if ( Function_222c834(*(uint *)(a1 + 64)) == 1 )
    return 0;
  switch ( (uchar)*(uint *)(v1 + 144) )
  {
    case 0u:
      ++*(uint *)(v1 + 144);
      break;
    case 1u:
      Function_222c8b8(v1, *(ushort ***)(v1 + 44), 0x11u, 1);
      ++*(uint *)(v1 + 144);
      break;
    case 2u:
      *(uint *)(v1 + 132) = Function_222c884(*(uint **)(v1 + 4), 13, 564, v2);
      ++*(uint *)(v1 + 144);
      break;
    case 3u:
      v4 = Function_2002114(*(uint *)(v1 + 132), 0x75u);
      if ( v4 != -1 )
      {
        if ( v4 == -2 )
          *(uint *)(v1 + 8) = 8;
        else
          ++*(uint *)(v1 + 144);
      }
      break;
    case 4u:
      *(uint *)(v1 + 8) = 1;
      break;
    default:
      return 0;
  }
  return 0;
}

//----- (0222CA20) --------------------------------------------------------
int __fastcall Function_222ca20(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = *(uint *)(a1 + 144);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      if ( !Function_222c834(*(uint *)(v1 + 64)) )
        ++*(uint *)(v1 + 144);
    }
    else if ( v2 == 2 )
    {
      ((void (__fastcall *)(int, int, int, int))dword_21D78C8[0])(*(uint *)v1 + 20, 2, 1, 20);
      v3 = ((int (__fastcall *)(int))dword_21D792C[0])(2);
      ((void (__fastcall *)(int))dword_21D797C[0])(v3);
      *(uint *)(v1 + 8) = 2;
    }
  }
  else
  {
    Function_2038438(*(uint *)(**(uint **)v1 + 4));
    Function_2039734();
    Function_222c8b8(v1, *(ushort ***)(v1 + 40), 1u, 1);
    Function_222c850(v1);
    ++*(uint *)(v1 + 144);
  }
  return 0;
}

//----- (0222CAA8) --------------------------------------------------------
int __fastcall Function_222caa8(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  char v5;
  int v6;
  int v7;
  char v8;

  v1 = a1;
  v2 = ((int (*)(void))dword_21D7AE4[0])();
  if ( ((int (__fastcall *)(int))dword_21D7A8C[0])(v2) )
  {
    switch ( ((uchar (*)(void))dword_21D7BFC[0])() )
    {
      case 4u:
        ((void (__fastcall *)(char *))dword_21D7EB8[0])(&v8);
        v1[2] = 3;
        break;
      case 7u:
        v1[5] = ((int (__fastcall *)(int *, int *))dword_21D75F4[0])(&v7, &v6);
        v1[6] = v7;
        v1[7] = v6;
        v3 = ((int (*)(void))dword_21D76E8[0])();
        ((void (__fastcall *)(int))dword_21D7DB0[0])(v3);
        Function_222c86c((int)v1);
        v1[2] = 6;
        break;
      default:
        ((void (__fastcall *)(char *))dword_21D742C[106])(&v5);
        Function_222c86c((int)v1);
        v1[2] = 10;
        v1[4] = -2;
        break;
    }
  }
  return 0;
}

//----- (0222CB2C) --------------------------------------------------------
int __fastcall Function_222cb2c(int a1)
{
  int v1;

  v1 = a1;
  ((void (*)(void))dword_21D81DC[0])();
  *(uint *)(v1 + 8) = 4;
  return 0;
}

//----- (0222CB3C) --------------------------------------------------------
int __fastcall Function_222cb3c(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;
  int result;
  int v6;
  int v7;

  v1 = a1;
  switch ( ((uchar (*)(void))dword_21D82A0[0])() )
  {
    case 0u:
    case 4u:
    case 5u:
      Function_222c86c((int)v1);
      v1[5] = ((int (__fastcall *)(int *, int *))dword_21D75F4[0])(&v7, &v6);
      v1[6] = v7;
      v1[7] = v6;
      v2 = ((int (*)(void))dword_21D76E8[0])();
      ((void (__fastcall *)(int))dword_21D7DB0[0])(v2);
      v1[2] = 6;
      switch ( (uchar)v6 )
      {
        case 1:
        case 2:
          v1[2] = 6;
          break;
        case 3:
          ((void (*)(void))dword_21D8E8C[0])();
          v1[2] = 6;
          break;
        case 4:
          ((void (*)(void))dword_21E55B0[0])();
          v1[2] = 6;
          break;
        case 5:
        case 7:
          Function_2038a0c(6, v6, v3, v4);
          return result;
        case 6:
          v1[2] = 6;
          break;
        default:
          break;
      }
      if ( v7 < -20000 && v7 >= -29999 )
        v1[2] = 6;
      break;
    case 3u:
      v1[2] = 5;
      break;
    default:
      return 0;
  }
  return 0;
}

//----- (0222CBF0) --------------------------------------------------------
int __fastcall Function_222cbf0(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = a1;
  v2 = LoadVariableAreaAdress_1d(*(uint *)(*(uint *)*a1 + 4));
  v3 = LoadVariableAreaAdress_0(*(uint *)(*(uint *)*v1 + 4));
  Function_202ad28();
  if ( !Function_2025d74(v3) )
  {
    v7 = Function_2039058(v2, v4, v5, v6);
    Function_2025d78(v3, v7);
  }
  Function_2025d74(v3);
  v1[2] = 9;
  *(uint *)(*v1 + 124) = 1;
  return 0;
}

//----- (0222CC40) --------------------------------------------------------
int __fastcall Function_222cc40(int a1)
{
  int v1;
  uint v2;

  v1 = a1;
  v2 = ((int (__fastcall *)(int, uint))dword_21D1E30[67])(-*(uint *)(a1 + 24), *(uint *)(a1 + 28));
  Function_222c7f8(v1, v2, -*(uint *)(v1 + 24));
  *(uint *)(v1 + 8) = 7;
  return 0;
}

//----- (0222CC64) --------------------------------------------------------
int __fastcall Function_222cc64(uint *a1)
{
  uint *v1;
  int v2;
  int v3;

  v1 = a1;
  if ( dword_21BF6C4 & 1 || dword_21BF6C4 & 2 )
  {
    Function_200dc9c((int)(a1 + 25), 0);
    v1[36] = 0;
    v2 = v1[6];
    v3 = v1[7];
    if ( Function_222c928() == 1 )
      v1[2] = 0;
    else
      v1[2] = 8;
  }
  return 0;
}

//----- (0222CCAC) --------------------------------------------------------
int __fastcall Function_222ccac(int a1)
{
  int v1;

  v1 = a1;
  if ( *(uint *)(a1 + 8) != 9 )
    Function_203848c();
  Function_2039794();
  Function_222c86c(v1);
  Function_200f174(0, 0, 0, 0, 6, 1, 117);
  *(uint *)(v1 + 8) = 0;
  return 1;
}

//----- (0222CCE8) --------------------------------------------------------
int __fastcall Function_222cce8(int a1)
{
  int v1;
  uint v2;

  v1 = a1;
  v2 = 0;
  switch ( *(uchar *)(a1 + 16) + 15 )
  {
    case 0:
    case 3:
    case 10:
    case 12:
      v2 = 149;
      break;
    case 1:
    case 13:
      v2 = 150;
      break;
    case 14:
    case 17:
      v2 = 145;
      break;
    case 16:
      v2 = 144;
      break;
    default:
      break;
  }
  Function_222c8b8(a1, *(ushort ***)(a1 + 36), v2, 1);
  Function_222c920(v1, 12, 11);
  return 0;
}

//----- (0222CD58) --------------------------------------------------------
int __fastcall Function_222cd58(int a1)
{
  int v1;
  uint v2;

  v1 = a1;
  switch ( (uchar)*(uint *)(a1 + 144) )
  {
    case 0u:
      Function_222c8b8(a1, *(ushort ***)(a1 + 36), 0xB2u, 1);
      ++*(uint *)(v1 + 144);
      break;
    case 1u:
      if ( !Function_222c834(*(uint *)(a1 + 64)) )
      {
        v2 = Function_203848c();
        ((void (__fastcall *)(uint))dword_21D7DB0[0])(v2);
        ++*(uint *)(v1 + 144);
      }
      break;
    case 2u:
      Function_222c8b8(a1, *(ushort ***)(a1 + 36), 0xB3u, 1);
      ++*(uint *)(v1 + 144);
      break;
    case 3u:
      if ( !Function_222c834(*(uint *)(a1 + 64)) )
        ++*(uint *)(v1 + 144);
      break;
    default:
      if ( ++*(uint *)(a1 + 148) > 30 )
        *(uint *)(a1 + 8) = 8;
      break;
  }
  return 0;
}

//----- (0222CE14) --------------------------------------------------------
int __fastcall Function_222ce14(int a1)
{
  int v1;

  v1 = a1;
  if ( !Function_222c834(*(uint *)(a1 + 64)) )
    *(uint *)(v1 + 8) = *(uint *)(v1 + 12);
  return 0;
}

//----- (0222CE2C) --------------------------------------------------------
int __fastcall Function_222ce2c(int a1)
{
  int v1;

  v1 = a1;
  if ( Function_222c834(*(uint *)(a1 + 64)) == 1 )
    return 0;
  switch ( (uchar)*(uint *)(v1 + 144) )
  {
    case 0u:
      Function_222c8b8(v1, *(ushort ***)(v1 + 44), 0x1Au, 1);
      ++*(uint *)(v1 + 144);
      break;
    case 1u:
      ((void (*)(void))dword_21D7DB0[0])();
      Function_203848c();
      ++*(uint *)(v1 + 144);
      break;
    case 2u:
      Function_2039794();
      Function_222c8b8(v1, *(ushort ***)(v1 + 44), 0x1Bu, 1);
      ++*(uint *)(v1 + 144);
      break;
    case 3u:
      if ( ++*(uint *)(v1 + 148) > 30 )
        *(uint *)(v1 + 8) = *(uint *)(v1 + 12);
      break;
    default:
      return 0;
  }
  return 0;
}

//----- (0222CEDC) --------------------------------------------------------
int Function_222cedc()
{
  int *v0;
  int v1;
  uint *v2;
  uint *v3;
  int v4;

  Function_222cfd4();
  v0 = &dword_222E760[1];
  v1 = 9;
  do
  {
    *v0 = 0;
    v0[1] = 0;
    v0[2] = 0;
    v0[3] = 0;
    v2 = v0 + 4;
    *v2 = 0;
    v2[1] = 0;
    v2[2] = 0;
    v2[3] = 0;
    v0 = v2 + 4;
    --v1;
  }
  while ( v1 );
  *v0 = 0;
  v0[1] = 0;
  v0[2] = 0;
  v0[3] = 0;
  v3 = v0 + 4;
  *v3 = 0;
  v3[1] = 0;
  dword_222E86C[12] = 0;
  LOBYTE(dword_222E86C[14]) = 0;
  LOWORD(dword_222E8E8[47]) = 0;
  v4 = Function_222d508();
  return Function_222d53c(v4);
}

//----- (0222CF40) --------------------------------------------------------
int __fastcall Function_222cf40(int *a1, short a2, int *a3)
{
  int *v3;
  int *v4;
  short v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  if ( a3 )
  {
    v6 = &dword_222E760[1];
    v7 = 19;
    do
    {
      v8 = *v3;
      v9 = v3[1];
      v10 = v3[2];
      v11 = v3[3];
      v3 += 4;
      *v6 = v8;
      v6[1] = v9;
      v6[2] = v10;
      v6[3] = v11;
      v6 += 4;
      --v7;
    }
    while ( v7 );
    v12 = v3[1];
    *v6 = *v3;
    v6[1] = v12;
    dword_222E86C[12] = 0;
  }
  if ( !Function_222d510() )
    return 0;
  Function_222d4f0();
  Function_20d8b7c(&dword_222E86C[14], v4);
  LOWORD(dword_222E8E8[47]) = v5;
  dword_222E8E8[53] = 0;
  dword_222E8E8[58] = LOBYTE(dword_222E8E8[53]) - 1;
  Function_222cfd4();
  return 1;
}

//----- (0222CFD4) --------------------------------------------------------
int *Function_222cfd4()
{
  int *result;

  Function_222d770();
  if ( dword_222E8E8[53] )
  {
    Function_222d4ac();
    dword_222E8E8[53] = 0;
  }
  result = &dword_222E760[1];
  dword_222E8E8[48] = 15;
  dword_222E8E8[49] = 30;
  dword_222E8E8[50] = 30;
  dword_222E8E8[52] = 0;
  dword_222E8E8[54] = 0;
  dword_222E8E8[55] = 0;
  dword_222E8E8[56] = 0;
  dword_222E8E8[57] = 0;
  dword_222E86C[13] = 1;
  dword_222E8E8[51] = 0;
  return result;
}

//----- (0222D040) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x222D098 for case 0"

//----- (0222D070) --------------------------------------------------------
void Function_222d070()
{
  JUMPOUT(&loc_222D098);
}

//----- (0222D074) --------------------------------------------------------
void Function_222d074()
{
  JUMPOUT(&loc_222D098);
}

//----- (0222D078) --------------------------------------------------------
void Function_222d078()
{
  JUMPOUT(&loc_222D0A0);
}

//----- (0222D07C) --------------------------------------------------------
void Function_222d07c()
{
  JUMPOUT(&loc_222D0D4);
}

//----- (0222D080) --------------------------------------------------------
void Function_222d080()
{
  JUMPOUT(&loc_222D108);
}

//----- (0222D084) --------------------------------------------------------
void Function_222d084()
{
  JUMPOUT(&loc_222D13C);
}

//----- (0222D088) --------------------------------------------------------
void Function_222d088()
{
  JUMPOUT(&loc_222D184);
}

//----- (0222D08C) --------------------------------------------------------
void Function_222d08c()
{
  JUMPOUT(&loc_222D098);
}

//----- (0222D090) --------------------------------------------------------
void Function_222d090()
{
  JUMPOUT(&loc_222D098);
}

//----- (0222D094) --------------------------------------------------------
void Function_222d094()
{
  int v0;
  int v1;
  int v2;

  if ( !v1 )
  {
    if ( *(uint *)(v0 + 0x268) != 1 )
    {
      Function_222d4dc();
      Function_222db8c(1);
      JUMPOUT(&loc_222D05C);
    }
    dword_222E86C[13] = 7;
    dword_222E8E8[51] = 13;
  }
  Function_222d4dc();
  JUMPOUT(__CS__, v2);
}

//----- (0222D1FC) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x222D250 for case 0"

//----- (0222D228) --------------------------------------------------------
void Function_222d228()
{
  JUMPOUT(&loc_222D250);
}

//----- (0222D22C) --------------------------------------------------------
void Function_222d22c()
{
  JUMPOUT(&loc_222D274);
}

//----- (0222D230) --------------------------------------------------------
void Function_222d230()
{
  JUMPOUT(&loc_222D250);
}

//----- (0222D234) --------------------------------------------------------
void Function_222d234()
{
  JUMPOUT(&loc_222D250);
}

//----- (0222D238) --------------------------------------------------------
void Function_222d238()
{
  JUMPOUT(&loc_222D250);
}

//----- (0222D23C) --------------------------------------------------------
void Function_222d23c()
{
  JUMPOUT(&loc_222D250);
}

//----- (0222D240) --------------------------------------------------------
void Function_222d240()
{
  JUMPOUT(&loc_222D250);
}

//----- (0222D244) --------------------------------------------------------
void Function_222d244()
{
  JUMPOUT(&loc_222D270);
}

//----- (0222D248) --------------------------------------------------------
void Function_222d248()
{
  JUMPOUT(&loc_222D270);
}

//----- (0222D24C) --------------------------------------------------------
void Function_222d24c()
{
  int v0;
  int v1;
  char *v2;
  short v3;
  int *v4;
  int *v5;
  int v6;
  int *v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;

  v4 = Function_222cfd4();
  Function_222d4dc(v4);
  dword_222E8E8[54] = Function_222e2a8(v3);
  if ( dword_222E8E8[54] == -1 )
  {
    dword_222E86C[13] = 9;
    dword_222E8E8[51] = 2;
    JUMPOUT(__CS__, v18);
  }
  dword_222E8E8[55] = v1;
  if ( v0 == -1 )
  {
    v6 = Function_222e168(v3);
    v17 = v6;
    if ( v6 == -1 )
    {
      dword_222E86C[13] = 9;
      dword_222E8E8[51] = 2;
      JUMPOUT(__CS__, v18);
    }
    v5 = (int *)Function_222d498(v6);
  }
  else
  {
    v17 = v0 + 320;
    v5 = (int *)Function_222d498(v0 + 320);
  }
  v7 = &dword_222E760[1];
  dword_222E8E8[53] = (int)v5;
  if ( !v5 )
    JUMPOUT(__CS__, v18);
  dword_222E8E8[52] = v17;
  v8 = 19;
  *v5 = v17;
  *(ushort *)(dword_222E8E8[53] + 4) = v3;
  v9 = (int *)(dword_222E8E8[53] + 8);
  do
  {
    v10 = *v7;
    v11 = v7[1];
    v12 = v7[2];
    v13 = v7[3];
    v7 += 4;
    *v9 = v10;
    v9[1] = v11;
    v9[2] = v12;
    v9[3] = v13;
    v9 += 4;
    --v8;
  }
  while ( v8 );
  v14 = v7[1];
  *v9 = *v7;
  v9[1] = v14;
  *(ushort *)(dword_222E8E8[53] + 6) = 0;
  memcpy((uchar *)(dword_222E8E8[53] + 320), v2, v17 - 320);
  Function_222e0b8(dword_222E8E8[53] + 4, dword_222E8E8[52] - 4, dword_222E8E8[53] + 4);
  dword_222E86C[13] = 2;
  v15 = Function_222d4c8();
  v16 = Function_222d54c(v15);
  if ( !v16 )
  {
    dword_222E86C[13] = 9;
    dword_222E8E8[51] = 6;
    Function_222d4dc(&dword_222E760[1]);
    JUMPOUT(__CS__, v18);
  }
  Function_222d4dc(v16);
  JUMPOUT(__CS__, v18);
}

//----- (0222D3E8) --------------------------------------------------------
int Function_222d3e8()
{
  return dword_222E86C[13];
}

//----- (0222D3F8) --------------------------------------------------------
int Function_222d3f8()
{
  int v0;
  int result;

  Function_222d4c8();
  v0 = Function_222d3e8();
  if ( v0 == 8 )
  {
    Function_222d4dc(8);
    result = dword_222E8E8[55] + 4;
  }
  else
  {
    Function_222d4dc(v0);
    result = 0;
  }
  return result;
}

//----- (0222D430) --------------------------------------------------------
int Function_222d430()
{
  int v0;
  int result;

  Function_222d4c8();
  v0 = Function_222d3e8();
  if ( v0 == 8 )
  {
    Function_222d4dc(8);
    result = dword_222E8E8[54];
  }
  else
  {
    Function_222d4dc(v0);
    result = -1;
  }
  return result;
}

//----- (0222D464) --------------------------------------------------------
int Function_222d464()
{
  int v0;
  int result;

  Function_222d4c8();
  v0 = Function_222d3e8();
  if ( v0 == 9 )
  {
    Function_222d4dc(9);
    result = dword_222E8E8[51];
  }
  else
  {
    Function_222d4dc(v0);
    result = 0;
  }
  return result;
}

//----- (0222D498) --------------------------------------------------------
void Function_222d498()
{
  JUMPOUT(dword_21D7780);
}

//----- (0222D4AC) --------------------------------------------------------
int __fastcall Function_222d4ac(int result)
{
  if ( result )
    result = ((int (*)(void))dword_21D77C4[0])();
  return result;
}

//----- (0222D4C8) --------------------------------------------------------
uint Function_222d4c8()
{
  return OS_LockMutex(&dword_222E8E8[108]);
}

//----- (0222D4DC) --------------------------------------------------------
uint Function_222d4dc()
{
  return OS_UnlockMutex(&dword_222E8E8[108]);
}

//----- (0222D4F0) --------------------------------------------------------
int Function_222d4f0()
{
  OS_InitMutex(&dword_222E8E8[108]);
  return 1;
}

//----- (0222D508) --------------------------------------------------------
int Function_222d508()
{
  return 1;
}

//----- (0222D510) --------------------------------------------------------
int Function_222d510()
{
  if ( !Function_20c3808() )
    OS_InitTick();
  dword_222E8E8[59] = 16;
  return 1;
}

//----- (0222D53C) --------------------------------------------------------
void Function_222d53c()
{
  ;
}

//----- (0222D540) --------------------------------------------------------
int Function_222d540()
{
  return Function_222d040();
}

//----- (0222D54C) --------------------------------------------------------
int Function_222d54c()
{
  OS_CreateThread(&dword_222E8E8[60], (int)Function_222d540, 0, (int)&dword_222E8E8[626], 2048, dword_222E8E8[59]);
  OS_WakeupThreadDirect((int)&dword_222E8E8[60]);
  return 1;
}

//----- (0222D5A0) --------------------------------------------------------
BOOL __fastcall Function_222d5a0(uchar *a1)
{
  int v1;
  int v2;
  int v3;
  int v5;

  v1 = (char)*a1;
  v2 = 0;
  v3 = 0;
  if ( *a1 )
  {
    do
    {
      if ( v1 < 48 || v1 > 57 )
      {
        if ( v1 != 46 )
          return 0;
        if ( !v2 )
          return 0;
        ++v3;
        v2 = 0;
        if ( v3 >= 4 )
          return 0;
      }
      else if ( ++v2 >= 4 )
      {
        return 0;
      }
      v5 = (char)(a1++)[1];
      v1 = v5;
    }
    while ( v5 );
  }
  return v3 == 3 && v2;
}

//----- (0222D638) --------------------------------------------------------
int __fastcall Function_222d638(int *a1, uchar *a2)
{
  int *v2;
  uchar *v3;
  int v4;
  int v5;
  int *v6;

  v2 = a1;
  v3 = a2;
  if ( Function_222d5a0(a1) )
  {
    Function_20d8b7c(v3, v2);
  }
  else
  {
    v4 = ((int (__fastcall *)(int *))dword_21FB984[13042])(v2);
    if ( !v4 )
      return 0;
    v5 = ***(uint ***)(v4 + 12);
    v6 = (int *)((int (*)(void))dword_21FB984[13340])();
    Function_20d8b7c(v3, v6);
  }
  return 1;
}

//----- (0222D6A0) --------------------------------------------------------
int __fastcall Function_222d6a0(int a1, int a2, int a3, int a4)
{
  int result;
  int v5;
  char v6;
  int v7;

  v7 = a4;
  dword_222E8E8[58] = ((int (__fastcall *)(int, int, uint))dword_21FB984[12904])(2, 1, 0);
  if ( dword_222E8E8[58] == -1 )
  {
    dword_222E8E8[51] = 3;
    result = 0;
  }
  else
  {
    v5 = ((int (*)(void))dword_21FB984[13202])();
    if ( ((int (__fastcall *)(int, int, int))dword_21FB984[13202])(dword_222E8E8[58], 4, v5 | 4) >= 0 )
    {
      if ( Function_222d638(&dword_222E86C[14], &v6) )
      {
        dword_222E8E8[56] = ((int (__fastcall *)(char *))dword_21EA714[514])(&v6);
        result = 1;
      }
      else
      {
        dword_222E8E8[51] = 5;
        result = 0;
      }
    }
    else
    {
      dword_222E8E8[51] = 4;
      result = 0;
    }
  }
  return result;
}

//----- (0222D770) --------------------------------------------------------
int *Function_222d770()
{
  int *result;

  result = (int *)dword_222E8E8[58];
  if ( dword_222E8E8[58] != -1 )
  {
    ((void (*)(void))dword_21FB984[13036])();
    ((void (__fastcall *)(int))dword_21FB984[13039])(dword_222E8E8[58]);
    result = &dword_222E760[1];
    dword_222E8E8[58] = -1;
  }
  return result;
}

//----- (0222D7B0) --------------------------------------------------------
int Function_222d7b0()
{
  int v0;
  int v1;
  int v2;
  int v3;
  char v5;
  char v6;
  short v7;
  int v8;

  v5 = 8;
  v6 = 2;
  v7 = BYTE1(dword_222E8E8[47]) | (LOWORD(dword_222E8E8[47]) << 8) & 0xFF00;
  v8 = dword_222E8E8[56];
  OS_GetTick();
  ll_udiv();
  v1 = v0;
  while ( 1 )
  {
    v2 = ((int (__fastcall *)(int, char *))dword_21FB984[12926])(dword_222E8E8[58], &v5);
    if ( v2 >= 0 )
      break;
    if ( v2 != -26 )
    {
      if ( v2 != -30 )
      {
        dword_222E8E8[51] = 7;
        return 0;
      }
      return 1;
    }
    if ( dword_222E8E8[48] )
    {
      OS_GetTick();
      ll_udiv();
      if ( v3 - v1 >= dword_222E8E8[48] )
      {
        dword_222E8E8[51] = 10;
        return 0;
      }
    }
    Function_222d4c8();
    if ( dword_222E8E8[57] == 1 )
    {
      dword_222E8E8[51] = 13;
      Function_222d4dc();
      return 0;
    }
    Function_222d4dc();
    Function_222db8c(1);
  }
  return 1;
}

//----- (0222D8F8) --------------------------------------------------------
int Function_222d8f8()
{
  int v0;
  int v1;
  int v2;
  int v3;
  int v4;
  int v6;

  v0 = 0;
  OS_GetTick();
  ll_udiv();
  v2 = v1;
  while ( 1 )
  {
    v3 = dword_222E8E8[52] - v0;
    if ( dword_222E8E8[52] - v0 > dword_222E8E8[52] )
      v3 = dword_222E8E8[52];
    v4 = ((int (__fastcall *)(int, int, int, uint))dword_21FB984[12994])(
           dword_222E8E8[58],
           dword_222E8E8[53] + v0,
           v3,
           0);
    if ( v4 != -6 )
    {
      if ( v4 < 0 )
      {
        dword_222E8E8[51] = 11;
        return 0;
      }
      v0 += v4;
      if ( v0 == dword_222E8E8[52] )
        break;
    }
    if ( dword_222E8E8[49] )
    {
      OS_GetTick();
      ll_udiv();
      if ( v6 - v2 >= dword_222E8E8[49] )
      {
        dword_222E8E8[51] = 11;
        return 0;
      }
    }
    Function_222d4c8();
    if ( dword_222E8E8[57] == 1 )
    {
      dword_222E8E8[51] = 13;
      Function_222d4dc();
      return 0;
    }
    Function_222d4dc();
    Function_222db8c(1);
  }
  return 1;
}

//----- (0222DA0C) --------------------------------------------------------
int Function_222da0c()
{
  uint v0;
  int v1;
  int v2;
  int v3;
  int v5;
  int v6;

  v0 = 0;
  v6 = -1;
  OS_GetTick();
  ll_udiv();
  v2 = v1;
  while ( 1 )
  {
    v3 = ((int (__fastcall *)(int, uint, uint, uint))dword_21FB984[12949])(
           dword_222E8E8[58],
           dword_222E8E8[55] + v0,
           dword_222E8E8[54] - v0,
           0);
    if ( v3 != -6 )
    {
      if ( v3 <= 0 )
      {
        dword_222E8E8[51] = 9;
        return 0;
      }
      v0 += v3;
      if ( v0 >= 4 && v6 == -1 )
        v6 = *(uint *)dword_222E8E8[55];
      if ( v0 == v6 && v6 != -1 )
      {
        Function_222e110(dword_222E8E8[55] + 4, v0 - 4, dword_222E8E8[55] + 4);
        dword_222E8E8[54] = v6 - 4;
        return 1;
      }
    }
    if ( dword_222E8E8[50] )
    {
      OS_GetTick();
      ll_udiv();
      if ( v5 - v2 >= dword_222E8E8[50] )
      {
        dword_222E8E8[51] = 12;
        return 0;
      }
    }
    Function_222d4c8();
    if ( dword_222E8E8[57] == 1 )
      break;
    Function_222d4dc();
    Function_222db8c(1);
  }
  dword_222E8E8[51] = 13;
  Function_222d4dc();
  return 0;
}

//----- (0222DB8C) --------------------------------------------------------
uint __fastcall Function_222db8c(uint a1)
{
  return OS_Sleep(a1);
}

//----- (0222DB98) --------------------------------------------------------
int Function_222db98()
{
  int result;
  int v1;
  char *v2;
  char *v3;
  int v4;
  char v5;
  char v6;
  char v7;
  char v8;
  char v9;
  char v10;

  if ( dword_222E86C[12] == 1 )
    return 1;
  if ( ((int (__fastcall *)(int *, char *))dword_21D8018[75])(&dword_222E638, &v9) )
  {
    while ( 1 )
    {
      v1 = ((int (*)(void))dword_21D8018[104])();
      if ( v1 == 3 )
        break;
      if ( v1 == 4 )
      {
        ((void (__fastcall *)(char *, char *))dword_21D75F4[0])(&v7, &v8);
        dword_222E8E8[51] = 14;
        return 0;
      }
      if ( v1 == 5 )
      {
        dword_222E8E8[51] = 14;
        return 0;
      }
      Function_222d4c8();
      if ( dword_222E8E8[57] == 1 )
      {
        dword_222E8E8[51] = 13;
        Function_222d4dc();
        return 0;
      }
      Function_222d4dc();
      Function_222db8c(1u);
    }
    v2 = (char *)&dword_222E760[2] + 2;
    v3 = &v10;
    v4 = 150;
    do
    {
      v5 = *v3;
      v6 = v3[1];
      v3 += 2;
      *v2 = v5;
      v2[1] = v6;
      v2 += 2;
      --v4;
    }
    while ( v4 );
    result = 1;
    *v2 = *v3;
    dword_222E86C[12] = 1;
  }
  else
  {
    dword_222E8E8[51] = 14;
    result = 0;
  }
  return result;
}

//----- (0222DCC8) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0222DCDC) --------------------------------------------------------
int __fastcall Function_222dcdc(int *a1)
{
  return Function_222cf40((int *)"pkgdsprod.nintendo.co.jp", 12400, a1);
}

//----- (0222DCFC) --------------------------------------------------------
int Function_222dcfc()
{
  return Function_222cedc();
}

//----- (0222DD08) --------------------------------------------------------
int Function_222dd08()
{
  int v0;

  Function_222d4c8();
  v0 = Function_222d3e8();
  Function_222d4dc();
  return v0;
}

//----- (0222DD24) --------------------------------------------------------
int Function_222dd24()
{
  return Function_222d464();
}

//----- (0222DD30) --------------------------------------------------------
int __fastcall Function_222dd30(uint *a1, int a2)
{
  uint *v2;
  char *v3;
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  char v12;

  v2 = a1;
  v3 = &v12;
  v4 = a2;
  v5 = a1;
  v6 = 14;
  do
  {
    v7 = *v5;
    v8 = v5[1];
    v9 = v5[2];
    v10 = v5[3];
    v5 += 4;
    *(uint *)v3 = v7;
    *((uint *)v3 + 1) = v8;
    *((uint *)v3 + 2) = v9;
    *((uint *)v3 + 3) = v10;
    v3 += 16;
    --v6;
  }
  while ( v6 );
  Function_222e478(v2, "--");
  return Function_222d1fc(20000, &v12, v4, -1);
}

//----- (0222DD8C) --------------------------------------------------------
int __fastcall Function_222dd8c(int a1, int a2)
{
  short v3;
  short v4;
  int v5;
  int v6;

  v5 = a1;
  v3 = 0;
  v4 = 0;
  v6 = a1 >> 31;
  return Function_222d1fc(20001, &v3, a2, -1);
}

//----- (0222DDCC) --------------------------------------------------------
int __fastcall Function_222ddcc(int a1, uint *a2, int a3)
{
  uint *v3;
  char *v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v15;
  char v16;

  v3 = a2;
  v4 = &v16;
  v5 = a3;
  v6 = a2;
  v15 = a1;
  v7 = 33;
  do
  {
    v8 = *v6;
    v9 = v6[1];
    v10 = v6[2];
    v11 = v6[3];
    v6 += 4;
    *(uint *)v4 = v8;
    *((uint *)v4 + 1) = v9;
    *((uint *)v4 + 2) = v10;
    *((uint *)v4 + 3) = v11;
    v4 += 16;
    --v7;
  }
  while ( v7 );
  v12 = v6[1];
  v13 = v6[2];
  *(uint *)v4 = *v6;
  *((uint *)v4 + 1) = v12;
  *((uint *)v4 + 2) = v13;
  Function_222e478(v3, "--");
  return Function_222d1fc(21000, &v15, v5, -1);
}

//----- (0222DE34) --------------------------------------------------------
int __fastcall Function_222de34(int a1, int a2)
{
  short v3;
  short v4;
  int v5;
  int v6;

  v5 = a1;
  v3 = 0;
  v4 = 0;
  v6 = a1 >> 31;
  return Function_222d1fc(21001, &v3, a2, -1);
}

//----- (0222DE74) --------------------------------------------------------
int Function_222de74()
{
  return Function_222d430();
}

//----- (0222DE80) --------------------------------------------------------
int Function_222de80()
{
  return Function_222d3f8();
}

//----- (0222DE8C) --------------------------------------------------------
int __fastcall Function_222de8c(int a1)
{
  return Function_222e2a8(a1);
}

//----- (0222DE98) --------------------------------------------------------
int __fastcall Function_222de98(int a1)
{
  return Function_222d1fc(22000, 0, a1, -1);
}

//----- (0222DEB8) --------------------------------------------------------
int __fastcall Function_222deb8(int *a1, int a2)
{
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
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;

  v2 = a2;
  v3 = a1[1];
  v4 = a1[2];
  v5 = a1[3];
  v10 = *a1;
  v11 = v3;
  v12 = v4;
  v13 = v5;
  v6 = a1[5];
  v7 = a1[6];
  v8 = a1[7];
  v14 = a1[4];
  v15 = v6;
  v16 = v7;
  v17 = v8;
  v18 = a1[8];
  return Function_222d1fc(22001, &v10, v2, -1);
}

//----- (0222DF08) --------------------------------------------------------
int __fastcall Function_222df08(int *a1, int a2)
{
  char *v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  char v13;

  v2 = &v13;
  v3 = a1;
  v4 = a2;
  v5 = 468;
  do
  {
    v6 = *v3;
    v7 = v3[1];
    v8 = v3[2];
    v9 = v3[3];
    v3 += 4;
    *(uint *)v2 = v6;
    *((uint *)v2 + 1) = v7;
    *((uint *)v2 + 2) = v8;
    *((uint *)v2 + 3) = v9;
    v2 += 16;
    --v5;
  }
  while ( v5 );
  v10 = v3[1];
  v11 = v3[2];
  *(uint *)v2 = *v3;
  *((uint *)v2 + 1) = v10;
  *((uint *)v2 + 2) = v11;
  return Function_222d1fc(23000, &v13, v4, -1);
}

//----- (0222DF60) --------------------------------------------------------
int __fastcall Function_222df60(int *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  short v9;
  short v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v15 = a4;
  v9 = 0;
  v4 = a2;
  v5 = a1[1];
  v6 = a1[2];
  v7 = a1[3];
  v11 = *a1;
  v12 = v5;
  v13 = v6;
  v14 = v7;
  v9 = 0;
  v10 = 0;
  return Function_222d1fc(23001, &v9, v4, -1);
}

//----- (0222DFA8) --------------------------------------------------------
int __fastcall Function_222dfa8(int *a1, int a2)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v3 = 0;
  LOWORD(v3) = 1;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v6 = *a1;
  return Function_222d1fc(23001, &v3, a2, -1);
}

//----- (0222E000) --------------------------------------------------------
int __fastcall Function_222e000(int *a1, int a2)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v3 = 0;
  LOWORD(v3) = 2;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v6 = *a1;
  return Function_222d1fc(23001, &v3, a2, -1);
}

//----- (0222E058) --------------------------------------------------------
int __fastcall Function_222e058(int a1, int a2, int a3, int a4)
{
  int v5;
  int v6;
  int v7;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  return Function_222d1fc(23002, &v5, a4, -1);
}

//----- (0222E08C) --------------------------------------------------------
int __fastcall Function_222e08c(int a1, int a2, int a3, int a4)
{
  int v5;
  int v6;
  int v7;

  v7 = a4;
  v5 = a1;
  v6 = a2;
  return Function_222d1fc(23003, &v5, a3, -1);
}

//----- (0222E0B8) --------------------------------------------------------
uchar *__fastcall Function_222e0b8(uchar *result, int a2, uchar *a3)
{
  int i;
  char v4;
  char v5;

  for ( i = 0; i < a2; ++a3 )
  {
    if ( i )
      v4 = *((uchar *)dword_222E65C + (uchar)(*result + i + a2));
    else
      v4 = 0;
    v5 = result[i++];
    *a3 = v4 ^ v5;
  }
  return result;
}

//----- (0222E110) --------------------------------------------------------
uchar *__fastcall Function_222e110(uchar *result, int a2, int a3)
{
  int i;
  char v4;

  for ( i = 0; i < a2; ++i )
  {
    if ( i )
      v4 = *((uchar *)dword_222E65C + (uchar)(*result + i + a2));
    else
      v4 = 0;
    *(uchar *)(a3 + i) ^= v4;
  }
  return result;
}

//----- (0222E168) --------------------------------------------------------
int __fastcall Function_222e168(int a1)
{
  int v1;

  if ( a1 > 21001 )
  {
    if ( a1 > 22001 )
    {
      if ( a1 > 23000 )
      {
        if ( a1 <= 23003 && a1 >= 23001 )
        {
          switch ( a1 )
          {
            case 23001:
              v1 = 28;
              return v1 + 320;
            case 23002:
              v1 = 12;
              return v1 + 320;
            case 23003:
              v1 = 8;
              return v1 + 320;
          }
        }
      }
      else if ( a1 == 23000 )
      {
        v1 = 7500;
        return v1 + 320;
      }
    }
    else
    {
      if ( a1 >= 22001 )
      {
        v1 = 36;
        return v1 + 320;
      }
      if ( a1 == 22000 )
      {
        v1 = 0;
        return v1 + 320;
      }
    }
    return -1;
  }
  if ( a1 < 21001 )
  {
    if ( a1 > 20001 )
    {
      if ( a1 == 21000 )
      {
        v1 = 544;
        return v1 + 320;
      }
    }
    else if ( a1 < 20000 )
    {
      if ( !a1 )
      {
        v1 = 1024;
        return v1 + 320;
      }
    }
    else
    {
      if ( a1 == 20000 )
      {
        v1 = 224;
        return v1 + 320;
      }
      if ( a1 == 20001 )
      {
        v1 = 12;
        return v1 + 320;
      }
    }
    return -1;
  }
  v1 = 12;
  return v1 + 320;
}

//----- (0222E2A8) --------------------------------------------------------
int __fastcall Function_222e2a8(int a1, int a2, int a3, int a4)
{
  int i;
  int v5;
  int v6;
  int result;
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

  v21 = a4;
  v9 = 0;
  v10 = 20000;
  v11 = 20001;
  v12 = 21000;
  v13 = 21001;
  v14 = 22000;
  v15 = 22001;
  v16 = 23000;
  v17 = 23001;
  v18 = 23002;
  v19 = 23003;
  v20 = -1;
  if ( a1 > 21001 )
  {
    if ( a1 > 22001 )
    {
      if ( a1 > 23000 )
      {
        if ( a1 <= 23003 && a1 >= 23001 )
        {
          switch ( a1 )
          {
            case 23001:
              v8 = 7204;
              return v8 + 8;
            case 23002:
              v8 = 7512;
              return v8 + 8;
            case 23003:
              v8 = 0;
              return v8 + 8;
          }
        }
      }
      else if ( a1 == 23000 )
      {
        v8 = 8;
        return v8 + 8;
      }
    }
    else
    {
      if ( a1 >= 22001 )
      {
        v8 = 1584;
        return v8 + 8;
      }
      if ( a1 == 22000 )
      {
        v8 = 4;
        return v8 + 8;
      }
    }
    return -1;
  }
  if ( a1 >= 21001 )
  {
    v8 = 11124;
    return v8 + 8;
  }
  if ( a1 > 20000 )
  {
    if ( a1 > 20001 )
    {
      if ( a1 == 21000 )
      {
        v8 = 8;
        return v8 + 8;
      }
    }
    else if ( a1 == 20001 )
    {
      v8 = 2364;
      return v8 + 8;
    }
    return -1;
  }
  if ( a1 >= 20000 )
  {
    v8 = 8;
    return v8 + 8;
  }
  if ( a1 > 0 )
    return -1;
  v8 = -1;
  if ( a1 < -1 )
    return -1;
  if ( a1 != -1 )
  {
    if ( !a1 )
    {
      v8 = 1024;
      return v8 + 8;
    }
    return -1;
  }
  for ( i = 0; ; ++i )
  {
    v5 = *(&v9 + i);
    if ( v5 == -1 )
      break;
    v6 = Function_222e2a8(v5);
    if ( v6 > v8 )
      v8 = v6;
  }
  result = -1;
  if ( v8 != -1 )
    return v8 + 8;
  return result;
}

//----- (0222E478) --------------------------------------------------------
void Function_222e478()
{
  ;
}

