//----- (0221F800) --------------------------------------------------------
int __fastcall Function_221f800(uint *a1)
{
  uint *v1;
  uint *v2;
  int *v3;
  int result;
  int v5;
  int v6;

  v1 = a1;
  v2 = Function_200679c((int)Function_221f870, 3028, 0x64u, a1[9]);
  v3 = (int *)Function_201ced0((int)v2);
  Call_FillMemWithValue(v3, 0, 0xBD4u);
  *v3 = (int)v1;
  *((uchar *)v3 + 2943) = 0;
  v3[754] = Function_202fac0();
  result = v3[754];
  if ( result == 1 )
  {
    result = *v3;
    v5 = *(uint *)*v3;
    if ( v5 )
    {
      result = *(uint *)(v5 + 448);
      if ( result )
      {
        v6 = LoadVariableAreaAdressItemList(result);
        result = CheckItem(v6, 0x1D1u, 1u, v1[9]);
        v3[754] = result;
      }
    }
  }
  return result;
}

//----- (0221F870) --------------------------------------------------------
int *__fastcall Function_221f870(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int *result;

  v2 = a2;
  v3 = *(uchar *)(a2 + 2943);
  if ( *(uchar *)(a2 + 2943) )
  {
    if ( v3 == 1 )
    {
      do
      {
        v4 = (*(int (__fastcall **)(int))(*(uint *)(v2 + 4) + 4 * *(uchar *)(v2 + 2944)))(v2);
        if ( v4 )
          ++*(uchar *)(v2 + 2944);
      }
      while ( v4 == 2 );
      if ( *(uchar *)(*(uint *)v2 + 40) == 2 )
        Function_221f930(v2);
    }
    else if ( v3 == 2 )
    {
      result = (int *)Function_2220a50();
      if ( result == (int *)1 )
        return result;
    }
  }
  else
  {
    *(uchar *)(a2 + 2943) = Function_221fb28(a2);
  }
  if ( *(uchar *)(v2 + 2944) )
  {
    Function_2220c2c(v2);
    Function_200c7ec(*(int **)(v2 + 404));
  }
  result = (int *)*(uchar *)(*(uint *)v2 + 40);
  if ( *(uchar *)(*(uint *)v2 + 40) )
  {
    result = &GFX_FLUSH;
    GFX_FLUSH = 1;
  }
  return result;
}

//----- (0221F900) --------------------------------------------------------
int Function_221f900()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_2222C10;
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
  GX_SetBanks((int *)&v6);
  return MIi_CpuClear32(0, (uint *)0x6000000, 0x80000);
}

//----- (0221F930) --------------------------------------------------------
int __fastcall Function_221f930(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  result = Function_2222a08();
  if ( result )
  {
    result = *(uint *)(v1 + 3004);
    switch ( (uchar)result )
    {
      case 0:
      case 6:
      case 8:
        return result;
      case 1:
        Function_22229d4(v1);
        Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 2988), 0, *(ushort **)(v1 + 2996));
        v3 = *(uint *)(v1 + 2996);
        *(uint *)(v1 + 3000) = Function_201d738_CallInitTextInterpreter(v1 + 2952, 1);
        Function_201c3c0(*(uint *)(v1 + 12), 0);
        result = 3004;
        *(uint *)(v1 + 3004) = 2;
        break;
      case 2:
        result = *(uint *)(v1 + 3016);
        if ( result == 1 )
        {
          result = 1;
          if ( dword_21BF6C4 & 1 )
          {
            result = 3;
            *(uint *)(v1 + 3004) = 3;
          }
        }
        break;
      case 3:
        if ( *(uint *)(v1 + 3020) == 1 )
          Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 2988), 2u, *(ushort **)(v1 + 2996));
        else
          Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 2988), 1u, *(ushort **)(v1 + 2996));
        Function_201ae78(v1 + 2968, 15, 0, 0, 0xD8u, 0x20u);
        Function_200e060(v1 + 2968, 0, 1, 0xFu);
        v4 = *(uint *)(v1 + 2996);
        *(uint *)(v1 + 3000) = Function_201d738_CallInitTextInterpreter(v1 + 2968, 1);
        *(uint *)(v1 + 3008) = Function_2002054(
                                   *(uint **)(v1 + 12),
                                   (uchar *)dword_2222A68,
                                   31,
                                   14,
                                   1,
                                   *(uint *)(*(uint *)v1 + 36));
        Function_201c3c0(*(uint *)(v1 + 12), 0);
        result = 3004;
        *(uint *)(v1 + 3004) = 4;
        break;
      case 4:
        result = Function_2002114(*(uint *)(v1 + 3008), *(uint *)(*(uint *)v1 + 36));
        if ( result )
        {
          if ( result == -2 )
          {
            *(uint *)(v1 + 3004) = 1;
            result = 3008;
            *(uint *)(v1 + 3008) = 0;
          }
        }
        else
        {
          *(uint *)(v1 + 3004) = 5;
          result = 3008;
          *(uint *)(v1 + 3008) = 0;
        }
        break;
      case 5:
        Function_22229d4(v1);
        Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 2988), 5u, *(ushort **)(v1 + 2996));
        v5 = *(uint *)(v1 + 2996);
        *(uint *)(v1 + 3000) = Function_201d738_CallInitTextInterpreter(v1 + 2952, 1);
        Function_201c3c0(*(uint *)(v1 + 12), 0);
        result = 3004;
        *(uint *)(v1 + 3004) = 6;
        break;
      case 7:
        v6 = *(uint *)(v1 + 3008);
        if ( v6 )
        {
          Function_2002154(v6, *(uint *)(*(uint *)v1 + 36));
          *(uint *)(v1 + 3008) = 0;
        }
        Function_200e084(v1 + 2952, 0);
        Function_201c3c0(*(uint *)(v1 + 12), 0);
        result = 3004;
        *(uint *)(v1 + 3004) = 8;
        break;
    }
  }
  return result;
}

//----- (0221FB28) --------------------------------------------------------
int __fastcall Function_221fb28(uint *a1)
{
  uint *v1;
  ushort *v2;
  int v3;
  void **v4;

  v1 = a1;
  REG_BLDCNT = 0;
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  Function_201ff00();
  Function_201ff68();
  REG_DISPCNT &= 0xFFFFE0FF;
  REG_DISPCNT_SUB &= 0xFFFFE0FF;
  REG_BLDCNT = 0;
  REG_BLDCNT_SUB = 0;
  Function_221f900();
  v1[3] = Function_2018340(*(uint *)(*v1 + 36));
  v2 = MallocFill120(*(uint *)(*v1 + 36));
  v1[2] = v2;
  Function_2002f70((int)v2, 0, 512, *(uint *)(*v1 + 36));
  Function_201975c(4u, 0);
  *((uchar *)v1 + 2946) = 0;
  *((uchar *)v1 + 2945) = 8;
  *((uchar *)v1 + 2944) = 0;
  v3 = *(uchar *)(*v1 + 40);
  if ( *(uchar *)(*v1 + 40) )
  {
    if ( v3 == 1 )
    {
      v1[1] = &off_2222AA8;
    }
    else if ( v3 == 2 )
    {
      if ( *(uchar *)(*v1 + 42) == 3 )
        v4 = &off_2222C38;
      else
        v4 = &off_2222CA8;
      v1[1] = v4;
      Function_22227a4(*v1);
    }
  }
  else
  {
    v1[1] = &off_2222AD0;
  }
  return 1;
}

//----- (0221FBFC) --------------------------------------------------------
int __fastcall Function_221fbfc(uchar *a1)
{
  uchar *v1;
  int v2;

  v1 = a1;
  v2 = (uchar)a1[2946];
  if ( a1[2946] )
  {
    if ( v2 == 1 )
    {
      Function_2221e58();
      Function_2222050(v1);
    }
    else if ( v2 == 2 )
    {
      a1[2946] = 0;
      a1[2945] = 32;
      Function_2221ae4();
      Function_22223c0(v1);
      Function_2222720(v1);
      Function_2221c14(v1);
      Function_2039734();
      Function_208c120(0, *(uint *)(*(uint *)v1 + 36));
      SetMainLoopFunctionCall((int)Function_2220c64, (int)v1);
      return 1;
    }
  }
  else
  {
    Function_2221970();
    Function_2221a3c(v1);
  }
  ++v1[2946];
  return 0;
}

//----- (0221FC78) --------------------------------------------------------
int __fastcall Function_221fc78(uchar *a1)
{
  int v1;
  int v2;
  int v3;

  v1 = (int)a1;
  v2 = a1[2946];
  if ( a1[2946] )
  {
    if ( v2 == 1 )
    {
      Function_22214a0();
      Function_222101c(v1);
      Function_2039734();
      Function_22217cc(v1);
    }
    else if ( v2 == 2 )
    {
      Function_208c120(0, *(uint *)(*(uint *)a1 + 36));
      SetMainLoopFunctionCall((int)Function_2220c64, v1);
      *(uchar *)(v1 + 2946) = 0;
      *(uchar *)(v1 + 2940) = 8;
      *(uchar *)(v1 + 2941) = 4;
      *(uint *)(v1 + 2932) = 16;
      return 1;
    }
  }
  else
  {
    Function_2220c94();
    v3 = Function_2220e70(v1);
    Function_2221004(v3);
  }
  ++*(uchar *)(v1 + 2946);
  return 0;
}

//----- (0221FD00) --------------------------------------------------------
int __fastcall Function_221fd00(uchar *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int result;
  int v10;

  v10 = a4;
  v4 = (int)a1;
  v5 = a1[2946];
  if ( a1[2946] )
  {
    if ( v5 == 1 )
    {
      Function_22214a0();
      Function_2221588(v4);
      Function_2039734();
    }
    else if ( v5 == 2 )
    {
      Function_208c120(0, *(uint *)(*(uint *)a1 + 36));
      SetMainLoopFunctionCall((int)Function_2220c64, v4);
      *(uchar *)(v4 + 2946) = 0;
      *(uchar *)(v4 + 2940) = 4;
      *(uchar *)(v4 + 2941) = 2;
      *(uint *)(v4 + 2932) = 12;
      *(uint *)(v4 + 2988) = LoadFromMsgNARC(0, 26, 605, *(uint *)(*(uint *)v4 + 36));
      *(uint *)(v4 + 2992) = Function_200b358(*(uint *)(*(uint *)v4 + 36));
      *(uint *)(v4 + 2996) = Function_2023790(320, *(uint *)(*(uint *)v4 + 36));
      result = 1;
      *(uint *)(v4 + 3004) = 1;
      return result;
    }
  }
  else
  {
    Function_2220c94();
    Function_2220e70(v4);
    v6 = Function_2220f1c(v4);
    Function_2221004(v6);
    Function_202f330(*(uint *)(**(uint **)v4 + 448), *(uint *)(*(uint *)v4 + 36), (int)&v10, 0);
    v7 = 0;
    *(uint *)(v4 + 3020) = v10;
    *(uint *)(v4 + 3024) = 0;
    while ( 1 )
    {
      v8 = Function_2032ee8(v7);
      if ( v8 )
      {
        if ( !Function_2025fcc(v8) )
          break;
      }
      if ( ++v7 >= 8 )
        goto LABEL_13;
    }
    *(uint *)(v4 + 3024) = 1;
  }
LABEL_13:
  ++*(uchar *)(v4 + 2946);
  return 0;
}

//----- (0221FE10) --------------------------------------------------------
int __fastcall Function_221fe10(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( !Function_200f2ac() )
    return 0;
  if ( *(uchar *)(v1 + 2945) == *(uchar *)(v1 + 2946) )
  {
    *(uchar *)(v1 + 2946) = 0;
    result = 1;
  }
  else
  {
    ++*(uchar *)(v1 + 2946);
    result = 0;
  }
  return result;
}

//----- (0221FE48) --------------------------------------------------------
int __fastcall Function_221fe48(int a1)
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
  int v11;

  v1 = a1;
  if ( Function_20192ec(*(uint *)(a1 + 12), 3) > 24 )
  {
    Function_201c63c(*(uint *)(v1 + 12), 3, 2u, *(uint *)(v1 + 2932));
    Function_201c63c(*(uint *)(v1 + 12), 2, 1u, *(uint *)(v1 + 2932));
    v3 = *(uint *)(v1 + 2932) * (uchar)++*(uchar *)(v1 + 2946);
    Function_2221188(v1);
    v4 = *(uint *)(v1 + 2932) * *(uchar *)(v1 + 2946);
    Function_2221188(v1);
    v5 = *(uint *)(v1 + 2932) * *(uchar *)(v1 + 2946);
    Function_2221188(v1);
    v6 = *(uint *)(v1 + 2932) * *(uchar *)(v1 + 2946);
    Function_2221188(v1);
    v7 = *(uint *)(v1 + 2932) * *(uchar *)(v1 + 2946);
    Function_2221440(v1);
    v8 = *(uint *)(v1 + 2932) * *(uchar *)(v1 + 2946);
    Function_2221440(v1);
    v9 = *(uint *)(v1 + 2932) * *(uchar *)(v1 + 2946);
    Function_2221440(v1);
    v10 = v1;
    v11 = *(uint *)(v1 + 2932) * *(uchar *)(v1 + 2946);
    Function_2221440(v10);
    result = 0;
  }
  else
  {
    *(uchar *)(v1 + 2946) = 0;
    *(ushort *)(v1 + 2936) = 0;
    *(ushort *)(v1 + 2938) = 0;
    Function_201c63c(*(uint *)(v1 + 12), 3, 0, 24);
    Function_201c63c(*(uint *)(v1 + 12), 2, 0, -24);
    Function_2221188(v1);
    Function_2221188(v1);
    Function_2221188(v1);
    Function_2221188(v1);
    Function_2221440(v1);
    Function_2221440(v1);
    Function_2221440(v1);
    Function_2221440(v1);
    result = 1;
  }
  return result;
}

//----- (02220014) --------------------------------------------------------
int __fastcall Function_2220014(int a1)
{
  int v1;
  int result;
  uint v3;
  int v4;
  uint v5;
  short v6;
  int v7;
  int v8;
  uint v9;
  short v10;
  int v11;

  v1 = a1;
  if ( Function_22218bc() || *(uchar *)(v1 + 2946) <= 0x18u )
  {
    if ( !*(uchar *)(v1 + 2946) )
    {
      if ( *(uchar *)(*(uint *)v1 + 40) == 1 )
        Function_2005748(0x715u);
      else
        Function_2005748(0x852u);
    }
    v3 = *(uchar *)(v1 + 2946);
    if ( v3 == 24 )
    {
      Function_201c63c(*(uint *)(v1 + 12), 3, 0, 24);
      Function_201c63c(*(uint *)(v1 + 12), 2, 0, -24);
      Function_201c63c(*(uint *)(v1 + 12), 3, 3u, 0);
      Function_201c63c(*(uint *)(v1 + 12), 2, 3u, 0);
      Function_2221188(v1);
      Function_2221188(v1);
      Function_2221188(v1);
      Function_2221188(v1);
      Function_2221440(v1);
      Function_2221440(v1);
      Function_2221440(v1);
      Function_2221440(v1);
    }
    else if ( v3 < 0x18 )
    {
      v4 = *(char *)(v1 + 2940);
      v5 = PRNG();
      s32_div_f(v5, v4);
      v7 = (short)(v6 - v4 / 2);
      v8 = *(char *)(v1 + 2941);
      v9 = PRNG();
      s32_div_f(v9, v8);
      v11 = (short)(v10 - v8 / 2);
      if ( v7 < 0 && *(short *)(v1 + 2936) < 0 || v7 > 0 && *(short *)(v1 + 2936) > 0 )
        v7 = -(short)v7;
      if ( v11 < 0 && *(short *)(v1 + 2938) < 0 || v11 > 0 && *(short *)(v1 + 2938) > 0 )
        v11 = -(short)v11;
      Function_201c63c(*(uint *)(v1 + 12), 3, 0, v7 + 24);
      Function_201c63c(*(uint *)(v1 + 12), 2, 0, v7 - 24);
      Function_201c63c(*(uint *)(v1 + 12), 3, 3u, v11);
      Function_201c63c(*(uint *)(v1 + 12), 2, 3u, v11);
      Function_2221188(v1);
      Function_2221188(v1);
      Function_2221188(v1);
      Function_2221188(v1);
      Function_2221440(v1);
      Function_2221440(v1);
      Function_2221440(v1);
      Function_2221440(v1);
      *(ushort *)(v1 + 2936) = v7;
      *(ushort *)(v1 + 2938) = v11;
    }
    ++*(uchar *)(v1 + 2946);
    result = 0;
  }
  else
  {
    *(uchar *)(v1 + 2946) = 0;
    result = 1;
  }
  return result;
}

//----- (02220228) --------------------------------------------------------
int __fastcall Function_2220228(uchar *a1)
{
  uchar *v1;
  int result;
  uchar v3;
  uchar v4;

  v1 = a1;
  if ( a1[2946] == 8 )
    Function_200f174(0, 0, 0, 0x7FFF, 6, 1, *(uint *)(*(uint *)a1 + 36));
  if ( (uchar)v1[2946] < 8u || Function_200f2ac() != 1 )
  {
    if ( !v1[2946] )
      Function_2005748(0x719u);
    Function_201c63c(*((uint *)v1 + 3), 3, 1u, 16);
    Function_201c63c(*((uint *)v1 + 3), 2, 2u, 16);
    v3 = __OFSUB__(0, 16 * (uchar)++v1[2946]);
    Function_2221188(v1);
    v3 = __OFSUB__(0, 16 * (uchar)v1[2946]);
    Function_2221188(v1);
    v4 = __CFSHR__((uchar)v1[2946] << 20, 16);
    Function_2221188(v1);
    v4 = __CFSHR__((uchar)v1[2946] << 20, 16);
    Function_2221188(v1);
    v3 = __OFSUB__(0, 16 * (uchar)v1[2946]);
    Function_2221440(v1);
    v3 = __OFSUB__(0, 16 * (uchar)v1[2946]);
    Function_2221440(v1);
    v4 = __CFSHR__((uchar)v1[2946] << 20, 16);
    Function_2221440(v1);
    v4 = __CFSHR__((uchar)v1[2946] << 20, 16);
    Function_2221440(v1);
    result = 0;
  }
  else
  {
    v1[2943] = 2;
    result = 1;
  }
  return result;
}

//----- (02220350) --------------------------------------------------------
int __fastcall Function_2220350(int a1)
{
  *(uchar *)(a1 + 2945) = 16;
  return 2;
}

//----- (02220360) --------------------------------------------------------
int __fastcall Function_2220360(int *a1)
{
  int *v1;
  bool v2;
  int v3;

  v1 = a1;
  v2 = Function_2220ad0() == 1;
  v3 = *v1;
  if ( v2 )
    *((uchar *)v1 + 2942) = *(uchar *)(v3 + 42) != 1;
  else
    *((uchar *)v1 + 2942) = *(uchar *)(v3 + 42) == 1;
  return 2;
}

//----- (022203A0) --------------------------------------------------------
int __fastcall Function_22203a0(int a1)
{
  int result;

  if ( *(uchar *)(a1 + 2942) )
    result = Function_22204c0();
  else
    result = Function_22203bc();
  return result;
}

//----- (022203BC) --------------------------------------------------------
int __fastcall Function_22203bc(int a1)
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
  int result;

  v1 = a1;
  Function_201c63c(
    *(uint *)(a1 + 12),
    2,
    2u,
    *((uchar *)dword_2222A7C + 2 * *(uchar *)(a1 + 2946)));
  Function_201c63c(
    *(uint *)(v1 + 12),
    3,
    2u,
    *((uchar *)dword_2222A7C + 2 * *(uchar *)(v1 + 2946)));
  v2 = *((uchar *)dword_2222A7C + 2 * *(uchar *)(v1 + 2946) + 1);
  Function_2221188(v1);
  v3 = *((uchar *)dword_2222A7C + 2 * *(uchar *)(v1 + 2946) + 1);
  Function_2221188(v1);
  v4 = *((uchar *)dword_2222A7C + 2 * *(uchar *)(v1 + 2946) + 1);
  Function_2221188(v1);
  v5 = *((uchar *)dword_2222A7C + 2 * *(uchar *)(v1 + 2946) + 1);
  Function_2221188(v1);
  v6 = *((uchar *)dword_2222A7C + 2 * *(uchar *)(v1 + 2946) + 1);
  Function_2221440(v1);
  v7 = *((uchar *)dword_2222A7C + 2 * *(uchar *)(v1 + 2946) + 1);
  Function_2221440(v1);
  v8 = *((uchar *)dword_2222A7C + 2 * *(uchar *)(v1 + 2946) + 1);
  Function_2221440(v1);
  v9 = *((uchar *)dword_2222A7C + 2 * *(uchar *)(v1 + 2946) + 1);
  Function_2221440(v1);
  if ( !*(uchar *)(v1 + 2946) )
    Function_2005748(0x853u);
  v10 = *(uchar *)(v1 + 2946);
  if ( v10 == 5 )
  {
    *(uchar *)(v1 + 2946) = 0;
    result = 1;
  }
  else
  {
    *(uchar *)(v1 + 2946) = v10 + 1;
    result = 0;
  }
  return result;
}

//----- (022204C0) --------------------------------------------------------
int __fastcall Function_22204c0(int a1)
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
  int result;

  v1 = a1;
  Function_201c63c(
    *(uint *)(a1 + 12),
    2,
    1u,
    *((uchar *)dword_2222A7C + 2 * *(uchar *)(a1 + 2946)));
  Function_201c63c(
    *(uint *)(v1 + 12),
    3,
    1u,
    *((uchar *)dword_2222A7C + 2 * *(uchar *)(v1 + 2946)));
  v2 = *((uchar *)dword_2222A7C + 2 * *(uchar *)(v1 + 2946) + 1);
  Function_2221188(v1);
  v3 = *((uchar *)dword_2222A7C + 2 * *(uchar *)(v1 + 2946) + 1);
  Function_2221188(v1);
  v4 = *((uchar *)dword_2222A7C + 2 * *(uchar *)(v1 + 2946) + 1);
  Function_2221188(v1);
  v5 = *((uchar *)dword_2222A7C + 2 * *(uchar *)(v1 + 2946) + 1);
  Function_2221188(v1);
  v6 = *((uchar *)dword_2222A7C + 2 * *(uchar *)(v1 + 2946) + 1);
  Function_2221440(v1);
  v7 = *((uchar *)dword_2222A7C + 2 * *(uchar *)(v1 + 2946) + 1);
  Function_2221440(v1);
  v8 = *((uchar *)dword_2222A7C + 2 * *(uchar *)(v1 + 2946) + 1);
  Function_2221440(v1);
  v9 = *((uchar *)dword_2222A7C + 2 * *(uchar *)(v1 + 2946) + 1);
  Function_2221440(v1);
  if ( !*(uchar *)(v1 + 2946) )
    Function_2005748(0x853u);
  v10 = *(uchar *)(v1 + 2946);
  if ( v10 == 5 )
  {
    *(uchar *)(v1 + 2946) = 0;
    result = 1;
  }
  else
  {
    *(uchar *)(v1 + 2946) = v10 + 1;
    result = 0;
  }
  return result;
}

//----- (022205F4) --------------------------------------------------------
int __fastcall Function_22205f4(int a1)
{
  *(uchar *)(a1 + 2945) = 16;
  return 2;
}

//----- (02220604) --------------------------------------------------------
int __fastcall Function_2220604(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  if ( !*(uchar *)(a1 + 2946) )
  {
    Function_201ff0c(2u, 1);
    REG_DISPCNT = REG_DISPCNT & 0xFFFF1FFF | 0x2000;
    WIN_IN = WIN_IN & 0xFFC0 | 0x3F;
    WIN_OUT = WIN_OUT & 0xFFC0 | 0x1D;
  }
  v2 = *(uchar *)(v1 + 2946);
  if ( v2 == 16 )
  {
    *(uchar *)(v1 + 2946) = 0;
    *(uchar *)(v1 + 2945) = 32;
    REG_DISPCNT &= 0xFFFF1FFF;
    result = 1;
  }
  else
  {
    WIN0_X1 = 255;
    WIN0_Y1 = (v2 + 72) & 0xFF | ((71 - (ushort)v2) << 8) & 0xFF00;
    ++*(uchar *)(v1 + 2946);
    result = 0;
  }
  return result;
}

//----- (02220698) --------------------------------------------------------
int __fastcall Function_2220698(int a1)
{
  int v1;

  v1 = a1;
  Function_2005748(0x71Au);
  Function_200d3f4(*(uint **)(v1 + 456), 1);
  Function_200d3f4(*(uint **)(v1 + 460), 1);
  Function_200d364(*(int **)(v1 + 456), 0);
  *(uchar *)(v1 + 2945) = 32;
  return 1;
}

//----- (022206D8) --------------------------------------------------------
int __fastcall Function_22206d8(int a1)
{
  int v1;

  v1 = a1;
  Function_2005748(0x71Au);
  Function_200d3f4(*(uint **)(v1 + 456), 1);
  *(uchar *)(v1 + 2945) = 64;
  return 1;
}

//----- (02220700) --------------------------------------------------------
int __fastcall Function_2220700(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = a1;
  if ( !Function_2222a08() )
  {
    result = 1;
    *(uchar *)(v1 + 2945) = 1;
    return result;
  }
  if ( !*(uint *)(v1 + 3024) && *(uint *)(v1 + 3008) )
    return 0;
  v3 = *(uint *)(v1 + 3004);
  if ( v3 == 5 )
    return 0;
  if ( v3 != 6 && v3 != 5 && v3 != 7 && v3 != 8 )
  {
    *(uint *)(v1 + 3004) = 7;
    *(uchar *)(v1 + 2946) = -1;
  }
  v4 = *(uchar *)(v1 + 2946);
  if ( *(uchar *)(v1 + 2946) )
  {
    if ( v4 == 1 )
    {
      v6 = Function_202f41c(
             *(uint *)(**(uint **)v1 + 448),
             *(uchar *)(*(uint *)v1 + 44),
             0,
             0,
             (ushort *)(v1 + 2948),
             (ushort *)(v1 + 2950));
      if ( v6 == 2 )
      {
        Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 2988), 6u, *(ushort **)(v1 + 2996));
        Function_2005748(0x61Bu);
      }
      else
      {
        if ( v6 != 3 )
          goto LABEL_25;
        Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 2988), 7u, *(ushort **)(v1 + 2996));
      }
      Function_2222a48(v1);
      Function_201ae78(v1 + 2952, 15, 0, 0, 0xD8u, 0x20u);
      v7 = *(uint *)(v1 + 2996);
      *(uint *)(v1 + 3000) = Function_201d738_CallInitTextInterpreter(v1 + 2952, 1);
      *(uchar *)(v1 + 2945) = 0;
      ++*(uchar *)(v1 + 2946);
      goto LABEL_25;
    }
    if ( v4 != 2 )
    {
      Function_200e084(v1 + 2952, 0);
      Function_201c3c0(*(uint *)(v1 + 12), 0);
      *(uchar *)(v1 + 2946) = 0;
      *(uchar *)(v1 + 2945) = 21;
      return 1;
    }
    if ( (uchar)++*(uchar *)(v1 + 2945) > 0x1Eu )
    {
      *(uchar *)(v1 + 2945) = 0;
      ++*(uchar *)(v1 + 2946);
    }
  }
  else
  {
    Function_22229d4(v1);
    Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 2988), 8u, *(ushort **)(v1 + 2996));
    v5 = *(uint *)(v1 + 2996);
    *(uint *)(v1 + 3000) = Function_201d738_CallInitTextInterpreter(v1 + 2952, 1);
    Function_2222a28(v1);
    ++*(uchar *)(v1 + 2946);
  }
LABEL_25:
  Function_201c3c0(*(uint *)(v1 + 12), 0);
  return 0;
}

//----- (022208B0) --------------------------------------------------------
int __fastcall Function_22208b0(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  if ( *(uchar *)(a1 + 2946) )
  {
    if ( *(uchar *)(a1 + 2946) == 1 )
    {
      if ( Function_2036540(62) )
      {
        *(uchar *)(v1 + 2946) = 0;
        return 1;
      }
    }
    else
    {
      ErrorHandler();
    }
  }
  else
  {
    Function_22229d4(a1);
    Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 2988), 9u, *(ushort **)(v1 + 2996));
    v2 = *(uint *)(v1 + 2996);
    *(uint *)(v1 + 3000) = Function_201d738_CallInitTextInterpreter(v1 + 2952, 1);
    Function_20364f0(62);
    if ( !*(uint *)(v1 + 3016) )
      Function_201ff0c(1u, 1);
    ++*(uchar *)(v1 + 2946);
  }
  Function_201c3c0(*(uint *)(v1 + 12), 0);
  return 0;
}

//----- (0222094C) --------------------------------------------------------
int __fastcall Function_222094c(int *a1)
{
  int *v1;
  bool v2;
  int v3;

  v1 = a1;
  v2 = Function_2220ad0() == 1;
  v3 = *v1;
  if ( v2 )
  {
    if ( *(uchar *)(v3 + 42) == 1 )
      Function_2003120(v1[2], 0, 64, 0, 0x30u, 0x20u);
    else
      Function_2003120(v1[2], 0, 64, 0, 0, 0x20u);
  }
  else if ( *(uchar *)(v3 + 42) == 1 )
  {
    Function_2003120(v1[2], 0, 64, 0, 0, 0x20u);
  }
  else
  {
    Function_2003120(v1[2], 0, 64, 0, 0x30u, 0x20u);
  }
  Function_200387c(v1[2], 1);
  Function_2005748(0x71Bu);
  *((uchar *)v1 + 2945) = 64;
  return 1;
}

//----- (022209E0) --------------------------------------------------------
int __fastcall Function_22209e0(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  if ( !*(uchar *)(a1 + 2946) )
    Function_2005748(0x719u);
  v2 = *(uchar *)(v1 + 2946);
  if ( v2 == 16 )
  {
    *(uchar *)(v1 + 2946) = 0;
    *(uchar *)(v1 + 2945) = 64;
    result = 1;
  }
  else
  {
    *(uchar *)(v1 + 2946) = v2 + 1;
    Function_2222340(v1, (short)(16 - *(uchar *)(v1 + 2946)));
    Function_2221c48(v1, *(uchar *)(v1 + 2946));
    result = 0;
  }
  return result;
}

//----- (02220A34) --------------------------------------------------------
int __fastcall Function_2220a34(int a1)
{
  int v1;

  v1 = a1;
  Function_208c120(1, *(uint *)(*(uint *)a1 + 36));
  *(uchar *)(v1 + 2943) = 2;
  return 1;
}

//----- (02220A50) --------------------------------------------------------
int __fastcall Function_2220a50(int a1, int *a2)
{
  int v2;
  int *v3;

  v2 = a1;
  v3 = a2;
  if ( !Function_200f2ac() )
    return 0;
  SetMainLoopFunctionCall(0, 0);
  Function_2222a48(v3);
  if ( *(uchar *)(*v3 + 40) )
  {
    Function_2220dcc(v3);
    Function_2220dfc(v3);
    Function_2220e30(v3);
    Function_22218f4(v3);
    Function_222146c(v3);
  }
  else
  {
    Function_2221a10(v3);
    Function_22223e8(v3);
  }
  Function_2220be8(v3);
  Function_201dc3c();
  Function_2002fa0(v3[2], 0);
  Call_free1(v3[2]);
  *(uchar *)(*v3 + 43) = 1;
  Function_20067d0(v2);
  return 1;
}

//----- (02220AD0) --------------------------------------------------------
int Function_2220ad0()
{
  int v0;
  int result;

  v0 = Function_203608c();
  switch ( (uchar)Function_20362f4(v0) )
  {
    case 0u:
    case 2u:
      result = 1;
      break;
    case 1u:
    case 3u:
      result = 0;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

//----- (02220B00) --------------------------------------------------------
uint __fastcall Function_2220b00(int a1, int *a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
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
  v4 = a1;
  v5 = a2;
  v6 = a3;
  Function_201dbec(64, *(uint *)(*(uint *)a1 + 36));
  *(uint *)(v4 + 400) = Function_200c6e4(*(uint *)(*(uint *)v4 + 36));
  *(uint *)(v4 + 404) = Function_200c704(*(uint **)(v4 + 400));
  v13 = 0;
  v14 = 128;
  v15 = 0;
  v16 = 32;
  v17 = 0;
  v18 = 128;
  v19 = 0;
  v20 = 32;
  v9 = 0x10000;
  v10 = 0x4000;
  v11 = 16;
  v12 = 16;
  v8 = v6;
  Function_200c73c(*(uint **)(v4 + 400), &v13, &v8, 16);
  Function_200c7c0(*(int **)(v4 + 400), *(int ***)(v4 + 404), v6);
  Function_200cb30(*(uint **)(v4 + 400), *(uint *)(v4 + 404), v5);
  return Function_201ff0c(0x10u, 1);
}

//----- (02220BA0) --------------------------------------------------------
int *__fastcall Function_2220ba0(int a1, int *a2)
{
  short v3;
  short v4;
  short v5;
  short v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = a2[5];
  v8 = a2[6];
  v9 = 1;
  v10 = *a2;
  v11 = a2[1];
  v12 = a2[2];
  v13 = a2[3];
  v14 = a2[4];
  v15 = 0;
  return Function_200ce6c(*(uint **)(a1 + 400), *(uint *)(a1 + 404), &v3);
}

//----- (02220BE8) --------------------------------------------------------
uint __fastcall Function_2220be8(int a1)
{
  int v1;
  uint v2;
  int v3;

  v1 = a1;
  v2 = 0;
  if ( *(uint *)(a1 + 528) )
  {
    v3 = a1;
    do
    {
      Function_200d0f4(*(uint *)(v3 + 408));
      ++v2;
      v3 += 4;
    }
    while ( v2 < *(uint *)(v1 + 528) );
  }
  Function_200d0b0(*(uint *)(v1 + 400), *(int ***)(v1 + 404));
  return Function_200c8d4(*(uint *)(v1 + 400));
}

//----- (02220C2C) --------------------------------------------------------
uint __fastcall Function_2220c2c(int a1)
{
  int v1;
  uint result;
  uint v3;

  v1 = a1;
  result = *(uint *)(a1 + 528);
  v3 = 0;
  if ( result )
  {
    do
    {
      Function_2021e2c(**(uint **)(v1 + 4 * v3 + 408), 4096);
      v3 = (v3 + 1) & 0xFFFF;
      result = *(uint *)(v1 + 528);
    }
    while ( v3 < result );
  }
  return result;
}

//----- (02220C64) --------------------------------------------------------
int __fastcall Function_2220c64(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_201c2b8(*(uint *)(a1 + 12));
  Function_2003694(*(uint *)(v1 + 8));
  Function_201dcac();
  Function_200c800();
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (02220C94) --------------------------------------------------------
void __fastcall Function_2220c94(int a1, int a2, int a3, int a4)
{
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

  v39 = a4;
  v4 = a1;
  v5 = a2;
  *(uint *)(a1 + 2984) = a2;
  v6 = a3;
  v35 = 1;
  v36 = 0;
  v37 = 0;
  v38 = a2;
  SetGraphicsModes(&v35);
  v28 = 0;
  v29 = 0;
  v30 = 4096;
  v31 = 0;
  v32 = 69074947;
  v33 = 769;
  v34 = 0;
  Function_20183c4(*(uint **)(v4 + 12), 3u, &v28, 0);
  Function_2019ebc(*(uint **)(v4 + 12), 3u);
  Function_201c63c(*(uint *)(v4 + 12), 3, 0, 256);
  v21 = 0;
  v22 = 0;
  v23 = 4096;
  v24 = 0;
  v25 = 68943875;
  v26 = 513;
  v27 = 0;
  Function_20183c4(*(uint **)(v4 + 12), 2u, &v21, 0);
  Function_2019ebc(*(uint **)(v4 + 12), 2u);
  Function_201c63c(*(uint *)(v4 + 12), 2, 0, -256);
  v14 = 0;
  v15 = 0;
  v16 = 2048;
  v17 = 0;
  v18 = 68878337;
  v19 = 256;
  v20 = 0;
  Function_20183c4(*(uint **)(v4 + 12), 1u, &v14, 0);
  Function_2019ebc(*(uint **)(v4 + 12), 1u);
  Function_201ff0c(2u, 0);
  if ( v6 == 1 )
    Function_2019184(*(uint *)(v4 + 12), 1u, 3u, 24);
  if ( !v5 )
  {
    v7 = 0;
    v8 = 0;
    v9 = 2048;
    v10 = 0;
    v11 = 100663297;
    v12 = 0;
    v13 = 0;
    Function_20183c4(*(uint **)(v4 + 12), 0, &v7, 0);
    Function_2019ebc(*(uint **)(v4 + 12), 0);
    if ( *(uint *)(v4 + 3016) == 1 )
      Function_201ff0c(1u, 1);
    else
      Function_201ff0c(1u, 0);
  }
}

//----- (02220DCC) --------------------------------------------------------
uint __fastcall Function_2220dcc(int a1)
{
  int v1;
  uint result;

  v1 = a1;
  if ( *(uint *)(a1 + 2964) )
    Function_201a8fc(a1 + 2952);
  result = 2980;
  if ( *(uint *)(v1 + 2980) )
    result = Function_201a8fc(v1 + 2968);
  return result;
}

//----- (02220DFC) --------------------------------------------------------
ushort *__fastcall Function_2220dfc(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;
  ushort *result;

  v2 = a1;
  v3 = *(uint *)(a1 + 2996);
  if ( v3 )
    Function_20237bc_FreeMsg(v3, a2);
  v4 = *(uint **)(v2 + 2992);
  if ( v4 )
    Function_200b3f0(v4, a2);
  result = *(ushort **)(v2 + 2988);
  if ( result )
    result = Function_200b190(result);
  return result;
}

//----- (02220E30) --------------------------------------------------------
uint __fastcall Function_2220e30(int a1)
{
  int v1;

  v1 = a1;
  Function_201ff0c(0x1Fu, 0);
  Function_2019044(*(uint *)(v1 + 12), 3);
  Function_2019044(*(uint *)(v1 + 12), 2);
  Function_2019044(*(uint *)(v1 + 12), 1);
  if ( !*(uint *)(v1 + 2984) )
    Function_2019044(*(uint *)(v1 + 12), 0);
  return free(*(uint *)(v1 + 12));
}

//----- (02220E70) --------------------------------------------------------
uint __fastcall Function_2220e70(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;

  v4 = a1;
  v5 = LoadFromNARC_8(108, *(uint *)(*(uint *)a1 + 36), a3, a4);
  Function_20070e8((int)v5, 0, *(uint **)(v4 + 12), 1u, 0, 0, 0, *(uint *)(*(uint *)v4 + 36));
  Function_200710c((int)v5, 4u, *(uint **)(v4 + 12), 1u, 0, 0, 0, *(uint *)(*(uint *)v4 + 36));
  Function_200710c((int)v5, 2u, *(uint **)(v4 + 12), 2u, 0, 0, 0, *(uint *)(*(uint *)v4 + 36));
  Function_200710c((int)v5, 3u, *(uint **)(v4 + 12), 3u, 0, 0, 0, *(uint *)(*(uint *)v4 + 36));
  Function_2007130((int)v5, 1u, 0, 0, 0, *(uint *)(*(uint *)v4 + 36));
  GetPaletteAdresses(*(uint *)(v4 + 8), 0, 0, 160);
  Function_201975c(1u, 6342);
  return Call_FS_CloseFile(v5);
}

//----- (02220F1C) --------------------------------------------------------
int __fastcall Function_2220f1c(uint *a1)
{
  uint *v1;
  int v2;
  uchar v3;

  v1 = a1;
  if ( a1[746] || (v2 = *a1, !*v1) || !*(uint *)v2 || !*(uint *)(*(uint *)v2 + 304) )
    ErrorHandler();
  v3 = Function_2027b50(*(ushort **)(*(uint *)*v1 + 304));
  Function_200dd0c((uint *)v1[3], 0, 1, 15, v3, *(uint *)(*v1 + 36));
  GetPaletteAdresses(v1[2], 0, 240, 32);
  Function_200daa4((uint *)v1[3], 0, 31, 14, 0, *(uint *)(*v1 + 36));
  GetPaletteAdresses(v1[2], 0, 224, 32);
  LoadFromNARC_PlFont1(0, 416, *(uint *)(*v1 + 36));
  GetPaletteAdresses(v1[2], 0, 208, 32);
  Function_201a7e8((uint *)v1[3], (int)(v1 + 738), 0, 2, 19, 0x1Bu, 4u, 13, 40);
  return Function_201a7e8((uint *)v1[3], (int)(v1 + 742), 0, 2, 19, 0x1Bu, 4u, 13, 40);
}

//----- (02221004) --------------------------------------------------------
int *Function_2221004()
{
  return G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 2, 28, 8, 8);
}

//----- (0222101C) --------------------------------------------------------
int __fastcall Function_222101c(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  uint v6;
  int v7;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v15 = a4;
  v4 = a1;
  v9 = 2;
  v10 = 1;
  v11 = 2;
  v12 = 2;
  v13 = 0;
  v14 = 0;
  Function_2220b00(a1, &v9, 21, (int)&v15);
  Function_22210f4(v4);
  v5 = dword_2222DB4;
  v6 = 0;
  v7 = v4;
  do
  {
    *(uint *)(v7 + 408) = Function_2220ba0(v4, v5);
    ++v6;
    v5 += 7;
    v7 += 4;
  }
  while ( v6 < 0xC );
  Function_2221188(v4);
  Function_2221188(v4);
  Function_2221188(v4);
  Function_2221188(v4);
  Function_22212ac(v4);
  *(uint *)(v4 + 528) = 12;
  Function_22213b8(v4);
  Function_2221440(v4);
  Function_2221440(v4);
  Function_2221440(v4);
  return Function_2221440(v4);
}

//----- (022210F4) --------------------------------------------------------
uint __fastcall Function_22210f4(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;

  v4 = a1;
  v5 = LoadFromNARC_8(27, *(uint *)(*(uint *)a1 + 36), a3, a4);
  Function_200cc3c(*(uint **)(v4 + 400), *(uint *)(v4 + 404), (int)v5, 0xD0u, 1, 1, 47111);
  Function_200cc9c(*(int **)(v4 + 400), *(uint *)(v4 + 404), 108, 8, 0, 2, 1, 47111);
  Function_200ce24(*(uint **)(v4 + 400), *(uint *)(v4 + 404), (int)v5, 0xCFu, 1, 47111);
  Function_200ce54(*(uint **)(v4 + 400), *(uint *)(v4 + 404), (int)v5, 0xD1u, 1, 47111);
  return Call_FS_CloseFile(v5);
}

//----- (02221188) --------------------------------------------------------
int __fastcall Function_2221188(int a1, int a2, short a3, short a4)
{
  uint v4;
  int v5;
  short v6;
  int v7;
  int result;
  short v9;
  short v10;
  char v11;
  char v12;
  char v13;
  char v14;

  v9 = a3;
  v10 = a4;
  v11 = 0;
  v4 = 0;
  v12 = 3;
  v5 = a1 + a2;
  v13 = 6;
  v14 = 9;
  v6 = 0;
  v7 = a1 + 4 * (uchar)*(&v11 + a2);
  do
  {
    result = Function_200d4c4(
               *(int **)(v7 + 408),
               (short)(v9 + *(uchar *)(v5 + 2916) + v6),
               (short)(v10 + *(uchar *)(v5 + 2920)));
    ++v4;
    v6 += 19;
    v7 += 4;
  }
  while ( v4 < 3 );
  return result;
}

//----- (022211F0) --------------------------------------------------------
int __fastcall Function_22211f0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;
  int v8;
  int v9;
  int *v10;
  int v11;
  uint *v12;
  int v13;
  uint v14;

  v4 = a1;
  v12 = (uint *)a2;
  v13 = a3;
  v5 = a4;
  v14 = (uchar)GetNrOfPkmnInParty(a2);
  v6 = 0;
  result = v13;
  v8 = 0;
  if ( v13 > 0 )
  {
    v9 = v4 + 4 * v5;
    do
    {
      Function_200d364(*(int **)(v9 + 4 * v8 + 408), 0);
      if ( v14 > v8 )
      {
        v10 = GetAdrOfPkmnInParty(v12, v8);
        if ( GetPkmnData(v10, 5u, 0) )
        {
          if ( !GetPkmnData(v10, 0x4Cu, 0) )
          {
            v11 = (uchar)Function_208e9f0(v10);
            if ( v11 == 6 )
            {
              Function_200d364(*(int **)(v9 + 4 * v6 + 408), 3u);
            }
            else if ( v11 == 7 )
            {
              Function_200d364(*(int **)(v9 + 4 * v6 + 408), 1u);
            }
            else
            {
              Function_200d364(*(int **)(v9 + 4 * v6 + 408), 2u);
            }
            v6 = (v6 + 1) & 0xFF;
          }
        }
      }
      v8 = (v8 + 1) & 0xFF;
      result = v13;
    }
    while ( v8 < v13 );
  }
  return result;
}

//----- (022212AC) --------------------------------------------------------
int __fastcall Function_22212ac(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = *(uint *)(*(uint *)a1 + 4);
  if ( *(uchar *)(*(uint *)a1 + 41) )
  {
    Function_22211f0(a1, v2, 3, 0);
    Function_22211f0(v1, *(uint *)(*(uint *)v1 + 12), 3, 3);
    Function_22211f0(v1, *(uint *)(*(uint *)v1 + 8), 3, 6);
    result = Function_22211f0(v1, *(uint *)(*(uint *)v1 + 16), 3, 9);
  }
  else
  {
    Function_22211f0(a1, v2, 6, 0);
    result = Function_22211f0(v1, *(uint *)(*(uint *)v1 + 8), 6, 6);
  }
  return result;
}

//----- (0222130C) --------------------------------------------------------
uint __fastcall Function_222130c(int a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int v8;
  int v9;
  int v10;
  uchar *v11;
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
  v4 = (int *)a1;
  v5 = a1 + 16;
  v6 = a2;
  Function_201a870(*(uint **)(a1 + 12), a1 + 16, 8, 2, 0, 0);
  Function_201d78c(v5, 0);
  v8 = v4[721];
  v9 = v5;
  v10 = Function_200d9b0(v4[101]);
  v11 = Function_200d04c(v4[101], 47111);
  v13 = 32 * (992 - 16 * v6);
  v12 = 0;
  v14 = 0;
  v15 = 0;
  v17 = 0;
  v16 = 2;
  v18 = 1;
  v6 *= 4;
  v19 = *(uint *)(*v4 + 36);
  v4 += 722;
  *(int *)((char *)v4 + v6) = (int)Function_20127e8(&v8);
  Function_2012a60(*(uint **)((char *)v4 + v6), 0);
  return Function_201a8fc(v5);
}

//----- (022213B8) --------------------------------------------------------
uint __fastcall Function_22213b8(uint *a1)
{
  uint **v1;
  int v2;
  int v3;
  int v4;
  uchar *v5;
  int v6;
  uint result;
  int v8;

  v1 = (uint **)a1;
  a1[721] = Function_2012744(8, *(uint *)(*a1 + 36));
  Function_222130c((int)v1, 0, (*v1)[5], v2);
  Function_222130c((int)v1, 2, (*v1)[6], v3);
  v5 = *v1;
  if ( *((uchar *)*v1 + 41) == 1 )
  {
    Function_222130c((int)v1, 1, *((uint *)v5 + 7), v4);
    result = Function_222130c((int)v1, 3, (*v1)[8], v6);
  }
  else
  {
    Function_222130c((int)v1, 1, *((uint *)v5 + 5), v4);
    Function_222130c((int)v1, 3, (*v1)[6], v8);
    Function_20129d0(v1[723], 0);
    result = Function_20129d0(v1[725], 0);
  }
  return result;
}

//----- (02221440) --------------------------------------------------------
int __fastcall Function_2221440(int a1, int a2, int a3, int a4)
{
  return Function_20128c4(
           *(uint **)(a1 + 4 * a2 + 2888),
           a3 + *(uchar *)(a1 + a2 + 2924),
           a4 + *(uchar *)(a1 + a2 + 2928),
           *(uchar *)(a1 + a2 + 2928));
}

//----- (0222146C) --------------------------------------------------------
uint __fastcall Function_222146c(int a1)
{
  int v1;
  uint result;
  uint v3;
  int v4;

  v1 = a1;
  result = *(uchar *)(*(uint *)a1 + 40);
  if ( result )
  {
    v3 = 0;
    v4 = v1;
    do
    {
      Function_2012870(*(int **)(v4 + 2888));
      ++v3;
      v4 += 4;
    }
    while ( v3 < 4 );
    result = Function_20127bc(*(uint *)(v1 + 2884));
  }
  return result;
}

//----- (022214A0) --------------------------------------------------------
uchar *__fastcall Function_22214a0(uchar *result, char a2, char a3)
{
  if ( *(uchar *)(*(uint *)result + 41) == 1 )
  {
    result[2916] = 20;
    result[2920] = a2 - 110;
    result[2917] = 81;
    result[2921] = a2 - 94;
    result[2918] = -128;
    result[2922] = a3 + 44;
    result[2919] = -67;
    result[2923] = a3 + 60;
    result[2924] = 11;
    result[2928] = a2 + 120;
    result[2925] = 76;
    result[2929] = a2 - 120;
    result[2926] = 119;
    result[2930] = a3 + 18;
    result[2927] = -72;
    result[2931] = a3 + 34;
  }
  else
  {
    result[2916] = 24;
    result[2920] = a2 - 96;
    result[2917] = 81;
    result[2921] = a2 - 96;
    result[2918] = -120;
    result[2922] = a3 + 48;
    result[2919] = -63;
    result[2923] = a3 + 48;
    result[2924] = 15;
    result[2928] = a2 - 122;
    result[2926] = -128;
    result[2930] = a3 + 22;
  }
  return result;
}

//----- (02221588) --------------------------------------------------------
int __fastcall Function_2221588(int a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  uint v9;
  uint *v10;
  int result;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;

  v18 = a4;
  v4 = (uint *)a1;
  v12 = 2;
  v13 = 1;
  v14 = 2;
  v15 = 2;
  v16 = 0;
  v17 = 0;
  Function_2220b00(a1, &v12, 23, (int)&v18);
  Function_22210f4((int)v4, v5, v6, v7);
  Function_222166c(v4);
  v8 = dword_2222DB4;
  v9 = 0;
  v10 = v4;
  do
  {
    v10[102] = Function_2220ba0((int)v4, v8);
    ++v9;
    v8 += 7;
    ++v10;
  }
  while ( v9 < 0xE );
  Function_2221188((int)v4, 0, -256, 0);
  Function_2221188((int)v4, 1, -256, 0);
  Function_2221188((int)v4, 2, 256, 0);
  Function_2221188((int)v4, 3, 256, 0);
  Function_22212ac((int)v4);
  Function_22216e0(v4);
  Function_22213b8(v4);
  Function_2221440((int)v4, 0, -256, 0);
  Function_2221440((int)v4, 1, -256, 0);
  Function_2221440((int)v4, 2, 256, 0);
  Function_2221440((int)v4, 3, 256, 0);
  result = 528;
  v4[132] = 14;
  return result;
}

//----- (0222166C) --------------------------------------------------------
uint __fastcall Function_222166c(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;

  v4 = a1;
  v5 = LoadFromNARC_8(108, *(uint *)(*(uint *)a1 + 36), a3, a4);
  Function_200cc3c(*(uint **)(v4 + 400), *(uint *)(v4 + 404), (int)v5, 5u, 0, 1, 47112);
  Function_200ce24(*(uint **)(v4 + 400), *(uint *)(v4 + 404), (int)v5, 6u, 0, 47112);
  Function_200ce54(*(uint **)(v4 + 400), *(uint *)(v4 + 404), (int)v5, 7u, 0, 47112);
  return Call_FS_CloseFile(v5);
}

//----- (022216E0) --------------------------------------------------------
int __fastcall Function_22216e0(int *a1)
{
  int *v1;
  int result;
  bool v3;
  int v4;

  v1 = a1;
  Function_200d3f4((uint *)a1[114], 0);
  Function_200d3f4((uint *)v1[115], 0);
  if ( *(uchar *)(*v1 + 42) == 3 )
  {
    Function_200d4c4((int *)v1[114], 128, 72);
    result = Function_200d364((int *)v1[114], 2u);
  }
  else
  {
    v3 = Function_2220ad0() == 1;
    v4 = *v1;
    if ( v3 )
    {
      if ( *(uchar *)(v4 + 42) == 1 )
      {
        Function_200d4c4((int *)v1[114], 48, 72);
        Function_200d4c4((int *)v1[115], 208, 72);
      }
      else
      {
        Function_200d4c4((int *)v1[114], 208, 72);
        Function_200d4c4((int *)v1[115], 48, 72);
      }
    }
    else if ( *(uchar *)(v4 + 42) == 1 )
    {
      Function_200d4c4((int *)v1[114], 208, 72);
      Function_200d4c4((int *)v1[115], 48, 72);
    }
    else
    {
      Function_200d4c4((int *)v1[114], 48, 72);
      Function_200d4c4((int *)v1[115], 208, 72);
    }
    Function_200d364((int *)v1[114], 0);
    result = Function_200d364((int *)v1[115], 1u);
  }
  return result;
}

//----- (022217CC) --------------------------------------------------------
int __fastcall Function_22217cc(uint *a1)
{
  uint *v1;
  int v2;
  int v3;

  v1 = a1;
  a1[726] = Function_2024220(*(uint *)(*a1 + 36), 0, 4, 0, 2, 0);
  GFX_CONTROL = GFX_CONTROL & 0xCFFF | 8;
  Function_2014000();
  v1[728] = malloc(*(uint *)(*v1 + 36), 18432);
  v1[727] = Function_2014014(
              (int)Function_2221928,
              (int)Function_222194c,
              (int *)v1[728],
              0x4800u,
              1,
              *(uint *)(*v1 + 36));
  v2 = Function_2014784(v1[727]);
  Function_20206bc(4096, 3686400, v2);
  v3 = Call2_LoadFromNARC_2(61, 2, *(uint *)(*v1 + 36));
  Function_20144cc((uint *)v1[727], v3, 10, 1);
  Function_20146f4((int *)v1[727], 0, 0, 0);
  Function_20146f4((int *)v1[727], 1, 0, 0);
  Function_20146f4((int *)v1[727], 2, 0, 0);
  Function_20146f4((int *)v1[727], 3, 0, 0);
  return Function_20146f4((int *)v1[727], 4, 0, 0);
}

//----- (022218BC) --------------------------------------------------------
int __fastcall Function_22218bc(int a1)
{
  int v1;

  v1 = a1;
  if ( *(uchar *)(*(uint *)a1 + 40) != 1 )
    return 0;
  Call_G3X_Reset();
  if ( !Function_2014710(*(uint *)(v1 + 2908)) )
    return 0;
  Function_201469c();
  Function_20146c0();
  return 1;
}

//----- (022218F4) --------------------------------------------------------
uint __fastcall Function_22218f4(int a1)
{
  int v1;
  uint result;

  v1 = a1;
  result = *(uchar *)(*(uint *)a1 + 40);
  if ( result == 1 )
  {
    Function_201411c(*(uint ***)(v1 + 2908));
    free(*(uint *)(v1 + 2912));
    result = Function_20242c4(*(uint *)(v1 + 2904));
  }
  return result;
}

//----- (02221928) --------------------------------------------------------
int Function_2221928()
{
  int v0;

  v0 = Function_20a5a2c();
  Function_20145b4(v0);
  if ( !v0 )
    ErrorHandler();
  return 8 * v0 & 0x7FFFF;
}

//----- (0222194C) --------------------------------------------------------
int Function_222194c()
{
  int v0;

  v0 = Function_20a5a3c();
  Function_20145f4(v0);
  if ( !v0 )
    ErrorHandler();
  return 8 * v0 & 0x7FFFF;
}

//----- (02221970) --------------------------------------------------------
void __fastcall Function_2221970(int a1)
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

  v1 = a1;
  v23 = 1;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  SetGraphicsModes(&v23);
  v16 = 0;
  v17 = 0;
  v18 = 2048;
  v19 = 0;
  v20 = 2031617;
  v21 = 256;
  v22 = 0;
  Function_20183c4(*(uint **)(v1 + 12), 1u, &v16, 0);
  Function_2019ebc(*(uint **)(v1 + 12), 1u);
  v9 = 0;
  v10 = 0;
  v11 = 2048;
  v12 = 0;
  v13 = 69074945;
  v14 = 512;
  v15 = 0;
  Function_20183c4(*(uint **)(v1 + 12), 2u, &v9, 0);
  Function_2019ebc(*(uint **)(v1 + 12), 2u);
  v2 = 0;
  v3 = 0;
  v4 = 2048;
  v5 = 0;
  v6 = 69009409;
  v7 = 768;
  v8 = 0;
  Function_20183c4(*(uint **)(v1 + 12), 3u, &v2, 0);
}

//----- (02221A10) --------------------------------------------------------
uint __fastcall Function_2221a10(int a1)
{
  int v1;

  v1 = a1;
  Function_201ff0c(0x1Eu, 0);
  Function_2019044(*(uint *)(v1 + 12), 3);
  Function_2019044(*(uint *)(v1 + 12), 2);
  Function_2019044(*(uint *)(v1 + 12), 1);
  return free(*(uint *)(v1 + 12));
}

//----- (02221A3C) --------------------------------------------------------
uint __fastcall Function_2221a3c(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v8;
  int v9;

  v9 = a4;
  v4 = a1;
  v5 = LoadFromNARC_8(20, *(uint *)(*(uint *)a1 + 36), a3, a4);
  Function_20070e8((int)v5, 0xFu, *(uint **)(v4 + 12), 3u, 0, 0, 0, *(uint *)(*(uint *)v4 + 36));
  Function_200710c((int)v5, 0x11u, *(uint **)(v4 + 12), 3u, 0, 0, 0, *(uint *)(*(uint *)v4 + 36));
  v6 = Function_2006cb8_LoadFileInMemory((int)v5, 0x10u, *(uint *)(*(uint *)v4 + 36));
  Function_20a71b0(v6, &v8);
  Function_201972c(3u, *(uint *)(v8 + 12), *(uint *)(v8 + 8) & 0xFFFF, 0);
  memcpy((uchar *)(v4 + 1252), (char *)(*(uint *)(v8 + 12) + 96), 96);
  free(v6);
  Function_2081940(*(uint *)(*(uint *)v4 + 36), (uchar *)(v4 + 676), (uchar *)(v4 + 868), v4 + 1060);
  return Call_FS_CloseFile(v5);
}

//----- (02221AE4) --------------------------------------------------------
int __fastcall Function_2221ae4(int *a1)
{
  int *v1;
  char *v2;
  uint v3;
  int *v4;
  int v5;

  v1 = a1;
  v2 = &byte_2222A70;
  v3 = 0;
  v4 = a1;
  do
  {
    if ( v3 && v3 != 3 )
    {
      if ( *((ushort *)v4 + 268) )
        v5 = (int)(v1 + 217);
      else
        v5 = (int)(v1 + 265);
    }
    else
    {
      v5 = (int)(v1 + 169);
    }
    Function_20198e8(v1[3], 2, (uchar)*v2, (uchar)v2[1], 0x10u, 6u, v5, 0, 0, 0x10u, 6u);
    if ( *((ushort *)v4 + 268) )
    {
      Function_2019e2c(v1[3], 2, (uchar)*v2, (uchar)v2[1], 0x10u, 6u, v3 + 3);
      if ( (v3 >= 3 || *(uchar *)(*v1 + 41) != 1) && (v3 < 3 || *(uchar *)(*v1 + 41)) )
        Function_201972c(2u, (int)(v1 + 313), 32, 32 * (v3 + 3) & 0xFFFF);
      else
        Function_201972c(2u, (int)(v1 + 321), 32, 32 * (v3 + 3) & 0xFFFF);
    }
    ++v3;
    v4 += 6;
    v2 += 2;
  }
  while ( v3 < 6 );
  return Function_201c3c0(v1[3], 2);
}

//----- (02221BC8) --------------------------------------------------------
int __fastcall Function_2221bc8(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  uint v6;
  int v7;
  int result;
  int v9;

  v3 = a1;
  v9 = a2;
  v4 = Function_2019fe4(*(uint *)(a1 + 12), a3);
  if ( *(uchar *)(*(uint *)v3 + 41) )
    v5 = 0;
  else
    v5 = 16;
  v6 = 0;
  do
  {
    v7 = 2 * (v5 + 32 * v6);
    memcpy((uchar *)(v9 + 32 * v6), (char *)(v4 + v7), 32);
    Call_FillMemWithValue((int *)(v4 + v7), 0, 0x20u);
    result = (v6 + 1) << 16;
    v6 = (v6 + 1) & 0xFFFF;
  }
  while ( v6 < 0x18 );
  return result;
}

//----- (02221C14) --------------------------------------------------------
int __fastcall Function_2221c14(int a1)
{
  int v1;

  v1 = a1;
  Function_2221bc8(a1, a1 + 1348, 1);
  Function_2221bc8(v1, v1 + 2116, 2);
  Function_201c3c0(*(uint *)(v1 + 12), 1);
  return Function_201c3c0(*(uint *)(v1 + 12), 2);
}

//----- (02221C48) --------------------------------------------------------
int __fastcall Function_2221c48(int *a1, int a2)
{
  int *v2;
  uchar v3;
  uchar v4;
  uchar v5;

  v2 = a1;
  v3 = a2;
  if ( *(uchar *)(*a1 + 41) )
  {
    v5 = 16 - a2;
    Function_20198e8(a1[3], 1, 0, 0, a2, 0x18u, (int)(a1 + 337), 16 - a2, 0, 0x10u, 0x18u);
    Function_20198e8(v2[3], 2, 0, 0, v3, 0x18u, (int)(v2 + 529), v5, 0, 0x10u, 0x18u);
  }
  else
  {
    v4 = 32 - a2;
    Function_20198e8(a1[3], 1, (32 - a2) & 0xFF, 0, a2, 0x18u, (int)(a1 + 337), 0, 0, 0x10u, 0x18u);
    Function_20198e8(v2[3], 2, v4, 0, v3, 0x18u, (int)(v2 + 529), 0, 0, 0x10u, 0x18u);
  }
  Function_201c3c0(v2[3], 1);
  return Function_201c3c0(v2[3], 2);
}

//----- (02221D14) --------------------------------------------------------
int __fastcall Function_2221d14(int a1, int a2, int a3)
{
  int v3;
  int v4;
  uint v5;
  int *v6;
  int v7;
  int v8;
  int result;
  uint *v10;
  int v11;
  uint v12;

  v3 = a1;
  v10 = (uint *)a2;
  v4 = a3;
  v12 = (ushort)GetNrOfPkmnInParty(a2);
  v5 = 0;
  v11 = v3 + 24 * v4;
  do
  {
    if ( v12 > v5 )
    {
      v6 = GetAdrOfPkmnInParty(v10, v5);
      v7 = v11 + 24 * v5;
      *(uint *)(v7 + 532) = Function_2079d80();
      *(ushort *)(v7 + 536) = GetPkmnData(v6, 5u, 0);
      if ( *(ushort *)(v7 + 536) )
      {
        v8 = v11 + 24 * v5;
        *(uchar *)(v8 + 547) = GetPkmnData(v6, 0x4Cu, 0);
        *(ushort *)(v8 + 538) = GetPkmnData(v6, 0xA3u, 0);
        *(ushort *)(v8 + 540) = GetPkmnData(v6, 0xA4u, 0);
        *(uchar *)(v8 + 544) = GetPkmnData(v6, 0xA1u, 0);
        *(ushort *)(v8 + 542) = GetPkmnData(v6, 6u, 0);
        *(uchar *)(v8 + 548) = GetPkmnData(v6, 0xA2u, 0);
        *(uchar *)(v8 + 549) = GetPkmnData(v6, 0x70u, 0);
        *(uchar *)(v7 + 546) = GetPkmnData(v6, 0xB0u, 0) != 1;
        *(uchar *)(v8 + 545) = Call_DecidePkmnGender((int)v6);
        *(uint *)(v8 + 552) = Function_208e9f0(v6) & 0xFF;
      }
    }
    else
    {
      *(uint *)(v11 + 24 * v5 + 532) = Function_2079d8c(0, 0, 0);
    }
    result = (v5 + 1) << 16;
    v5 = (v5 + 1) & 0xFFFF;
  }
  while ( v5 < 3 );
  return result;
}

//----- (02221E58) --------------------------------------------------------
int __fastcall Function_2221e58(int a1)
{
  int v1;

  v1 = a1;
  Call_FillMemWithValue((int *)(a1 + 532), 0, 0x90u);
  Function_2221d14(v1, *(uint *)(*(uint *)v1 + 4), 0);
  return Function_2221d14(v1, *(uint *)(*(uint *)v1 + 12), 3);
}

//----- (02221E84) --------------------------------------------------------
int __fastcall Function_2221e84(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;
  int v7;

  v2 = a1;
  v3 = 24 * a2;
  v4 = a1 + 24 * a2;
  v5 = *(ushort *)(a1 + 24 * a2 + 538);
  if ( !v5 )
    return 0;
  v7 = *(uint *)(v4 + 552);
  if ( v7 != 7 && v7 )
    return 5;
  switch ( (uchar)Function_208c104(v5, *(ushort *)(v2 + v3 + 540), 48) )
  {
    case 1u:
      result = 4;
      break;
    case 2u:
      result = 3;
      break;
    case 3u:
      result = 2;
      break;
    case 4u:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

//----- (02221EEC) --------------------------------------------------------
int __fastcall Function_2221eec(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uchar *v5;
  int v6;
  int v7;
  uint v8;
  int result;
  int v10;
  char v11;
  int v12;
  int v13;
  int v14;
  uint v15;

  v2 = a1;
  v15 = 0;
  v13 = a2;
  v3 = 5 * a2;
  v4 = a1 + 20 * a2;
  v14 = a1 + 20 * a2;
  v5 = (uchar *)dword_2222C6C + 10 * a2;
  do
  {
    *(uint *)(v4 + 408) = Function_2220ba0(v2, &dword_2222F3C[7 * v3]);
    Function_200d4c4(*(int **)(v4 + 408), *v5, v5[1]);
    ++v3;
    v4 += 4;
    v5 += 2;
    ++v15;
  }
  while ( v15 < 5 );
  v6 = 24 * v13;
  v7 = v2 + 24 * v13;
  if ( *(ushort *)(v7 + 536) )
  {
    v10 = 20 * v13;
    v11 = Function_2079edc(
            *(ushort *)(v7 + 536),
            *(uchar *)(v7 + 549),
            *(uchar *)(v7 + 547));
    Function_200d41c(*(int **)(v2 + 408 + 20 * v13), v11);
    v12 = Function_2221e84(v2, v13);
    Function_200d364(*(int **)(v2 + 408 + 20 * v13), v12);
    if ( *(ushort *)(v2 + v6 + 542) )
    {
      if ( Function_207d2d0(*(ushort *)(v2 + v6 + 542)) == 1 )
        Function_200d364(*(int **)(v2 + v10 + 412), 1u);
      else
        Function_200d364(*(int **)(v2 + v10 + 412), 0);
    }
    else
    {
      Function_200d3f4(*(uint **)(v2 + v10 + 412), 0);
    }
    if ( *(uchar *)(v2 + v6 + 548) )
      Function_200d364(*(int **)(v2 + v10 + 416), 2u);
    else
      Function_200d3f4(*(uint **)(v2 + v10 + 416), 0);
    if ( *(uint *)(v2 + v6 + 552) == 7 )
      result = Function_200d3f4(*(uint **)(v2 + v10 + 420), 0);
    else
      result = Function_200d364(*(int **)(v2 + v10 + 420), *(uint *)(v2 + 24 * v15 + 552));
  }
  else
  {
    v8 = 0;
    do
    {
      Function_200d3f4(*(uint **)(v14 + 408), 0);
      ++v8;
      result = v14 + 4;
      v14 += 4;
    }
    while ( v8 < 5 );
  }
  return result;
}

//----- (02222050) --------------------------------------------------------
int __fastcall Function_2222050(int a1, int a2, int a3, int a4)
{
  int v4;
  uint v5;
  int result;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v13 = a4;
  v4 = a1;
  v7 = 9;
  v8 = 4;
  v9 = 4;
  v10 = 4;
  v11 = 0;
  v12 = 0;
  Function_2220b00(a1, &v7, 31, (int)&v13);
  Function_22220b4(v4);
  Function_222216c(v4);
  Function_2222208(v4);
  Function_22222a4(v4);
  v5 = 0;
  do
    Function_2221eec(v4, v5++);
  while ( v5 < 6 );
  Function_2222340(v4, 16);
  result = 528;
  *(uint *)(v4 + 528) = 30;
  return result;
}

//----- (022220B4) --------------------------------------------------------
uint __fastcall Function_22220b4(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  uint v9;
  int v10;

  v4 = a1;
  v5 = LoadFromNARC_8(19, *(uint *)(*(uint *)a1 + 36), a3, a4);
  v6 = Function_2079fd0();
  Function_200cd0c(*(uint **)(v4 + 400), *(uint *)(v4 + 404), (int)v5, v6, 0, 3, 1, 47112);
  v7 = Function_2079fd8();
  Function_200ce24(*(uint **)(v4 + 400), *(uint *)(v4 + 404), (int)v5, v7, 0, 47113);
  v8 = Function_2079fe4();
  Function_200ce54(*(uint **)(v4 + 400), *(uint *)(v4 + 404), (int)v5, v8, 0, 47113);
  v9 = 0;
  v10 = v4;
  do
  {
    Function_200cc3c(
      *(uint **)(v4 + 400),
      *(uint *)(v4 + 404),
      (int)v5,
      *(uint *)(v10 + 532),
      0,
      1,
      v9++ + 47113);
    v10 += 24;
  }
  while ( v9 < 6 );
  return Call_FS_CloseFile(v5);
}

//----- (0222216C) --------------------------------------------------------
uint __fastcall Function_222216c(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;

  v4 = a1;
  v5 = LoadFromNARC_8(20, *(uint *)(*(uint *)a1 + 36), a3, a4);
  Function_200cc3c(*(uint **)(v4 + 400), *(uint *)(v4 + 404), (int)v5, 0x14u, 0, 1, 47119);
  Function_200cd0c(*(uint **)(v4 + 400), *(uint *)(v4 + 404), (int)v5, 0x15u, 0, 1, 1, 47113);
  Function_200ce24(*(uint **)(v4 + 400), *(uint *)(v4 + 404), (int)v5, 0x13u, 0, 47114);
  Function_200ce54(*(uint **)(v4 + 400), *(uint *)(v4 + 404), (int)v5, 0x12u, 0, 47114);
  return Call_FS_CloseFile(v5);
}

//----- (02222208) --------------------------------------------------------
uint __fastcall Function_2222208(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;

  v4 = a1;
  v5 = LoadFromNARC_8(39, *(uint *)(*(uint *)a1 + 36), a3, a4);
  Function_200cc3c(*(uint **)(v4 + 400), *(uint *)(v4 + 404), (int)v5, 0x40u, 0, 1, 47120);
  Function_200cd0c(*(uint **)(v4 + 400), *(uint *)(v4 + 404), (int)v5, 0x41u, 0, 1, 1, 47114);
  Function_200ce24(*(uint **)(v4 + 400), *(uint *)(v4 + 404), (int)v5, 0x3Fu, 0, 47115);
  Function_200ce54(*(uint **)(v4 + 400), *(uint *)(v4 + 404), (int)v5, 0x3Eu, 0, 47115);
  return Call_FS_CloseFile(v5);
}

//----- (022222A4) --------------------------------------------------------
uint __fastcall Function_22222a4(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;

  v4 = a1;
  v5 = LoadFromNARC_8(20, *(uint *)(*(uint *)a1 + 36), a3, a4);
  Function_200cc3c(*(uint **)(v4 + 400), *(uint *)(v4 + 404), (int)v5, 2u, 0, 1, 47121);
  Function_200cd0c(*(uint **)(v4 + 400), *(uint *)(v4 + 404), (int)v5, 8u, 0, 2, 1, 47115);
  Function_200ce24(*(uint **)(v4 + 400), *(uint *)(v4 + 404), (int)v5, 1u, 0, 47116);
  Function_200ce54(*(uint **)(v4 + 400), *(uint *)(v4 + 404), (int)v5, 0, 0, 47116);
  return Call_FS_CloseFile(v5);
}

//----- (02222340) --------------------------------------------------------
int __fastcall Function_2222340(int a1, int a2)
{
  int v2;
  int v3;
  uchar *v4;
  int v5;
  int v6;
  int result;
  int v8;
  char *v9;
  int v10;
  int v11;

  v8 = a1;
  if ( *(uchar *)(*(uint *)a1 + 41) )
  {
    v10 = 0;
    v2 = -524288 * a2;
  }
  else
  {
    v10 = 3;
    v2 = a2 << 19;
  }
  v3 = v2 >> 16;
  v11 = 0;
  v9 = (char *)dword_2222C6C + 10 * v10;
  do
  {
    v4 = (uchar *)v9;
    v5 = 0;
    v6 = v8 + 20 * (v10 + v11);
    do
    {
      Function_200d4c4(*(int **)(v6 + 408), (short)(v3 + *v4), v4[1]);
      ++v5;
      v4 += 2;
      v6 += 4;
    }
    while ( v5 < 5 );
    v9 += 10;
    result = v11 + 1;
    v11 = result;
  }
  while ( result < 3 );
  return result;
}

//----- (022223C0) --------------------------------------------------------
int __fastcall Function_22223c0(int a1)
{
  int v1;
  uchar *v2;
  uint v3;
  int v4;
  int result;

  v1 = a1;
  v2 = (uchar *)dword_2222CF4;
  v3 = 0;
  v4 = a1 + 16;
  do
  {
    result = Function_201a8d4(*(uint **)(v1 + 12), v4, v2);
    ++v3;
    v2 += 8;
    v4 += 16;
  }
  while ( v3 < 0x18 );
  return result;
}

//----- (022223E8) --------------------------------------------------------
uint __fastcall Function_22223e8(int a1)
{
  uint v1;
  int v2;
  uint result;

  v1 = 0;
  v2 = a1 + 16;
  do
  {
    result = Function_201a8fc(v2);
    ++v1;
    v2 += 16;
  }
  while ( v1 < 0x18 );
  return result;
}

//----- (02222400) --------------------------------------------------------
int __fastcall Function_2222400(uint *a1, ushort **a2, int a3, int *a4, ushort *a5, uint a6)
{
  uint *v6;
  int v7;
  int v8;
  ushort *v9;
  int v10;
  int v11;
  int v12;
  int result;
  ushort **v14;
  int *v15;
  uint v16;

  v6 = a1;
  v7 = (int)(a1 + 4);
  v16 = a6 << 6;
  v14 = a2;
  v15 = a4;
  v8 = *a1;
  if ( a6 >= 3 )
    GetAdrOfPkmnInParty(*(uint **)(v8 + 12), a6 - 3);
  else
    GetAdrOfPkmnInParty(*(uint **)(v8 + 4), a6);
  v9 = Function_200b1ec_CallMsgDecrypt(v14, a6 + 8);
  Function_2076b10_Dummy();
  Function_200b5cc(v15, 0, v10);
  Function_200c388((uint *)v15, (int)a5, (int)v9);
  Function_20237bc_FreeMsg((int)v9, v11);
  Function_201d78c(v7 + v16, 0);
  v12 = (int)&v6[6 * a6];
  result = 546;
  if ( !*(uchar *)(v12 + 546) )
  {
    result = *(uchar *)(v12 + 545);
    if ( *(uchar *)(v12 + 545) )
    {
      if ( result == 1 )
      {
        Function_200b1b8_CallMsgDecrypt(v14, 0x1Cu, a5);
        result = Function_201d78c(v7 + v16, 0);
      }
    }
    else
    {
      Function_200b1b8_CallMsgDecrypt(v14, 0x1Bu, a5);
      result = Function_201d78c(v7 + v16, 0);
    }
  }
  return result;
}

//----- (022224F0) --------------------------------------------------------
int __fastcall Function_22224f0(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return Function_200c648(a3, 1, *(uchar *)(a1 + 24 * a6 + 544), 3, 0, a1 + 16 + 16 * (4 * a6 + 1), 0, 2u);
}

//----- (02222528) --------------------------------------------------------
int __fastcall Function_2222528(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int v7;
  int v8;

  v6 = a1;
  v7 = a3;
  v8 = a1 + 16 + 16 * (4 * a6 + 2);
  Function_200c5bc(a3, *(ushort *)(a1 + 24 * a6 + 538), 3, 1, v8, 0, 2u);
  Function_200c578(v7, 0, v8, 0x18u, 2u);
  return Function_200c5bc(v7, *(ushort *)(v6 + 24 * a6 + 540), 3, 0, v8, 0x20u, 2u);
}

//----- (02222594) --------------------------------------------------------
int __fastcall Function_2222594(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  ushort v6;
  int v8;

  v2 = a1;
  v3 = a1 + 16 + 16 * (4 * a2 + 3);
  v4 = 24 * a2;
  v5 = a1 + 540;
  v8 = a1 + 538;
  switch ( (uchar)Function_208c104(
                              *(ushort *)(a1 + 538 + 24 * a2),
                              *(ushort *)(a1 + 540 + 24 * a2),
                              48) )
  {
    case 1u:
      Function_201972c(1u, v2 + 1334, 4, 2 * (16 * *(uchar *)(v3 + 9) + 9) & 0xFFFF);
      break;
    case 2u:
      Function_201972c(1u, v2 + 1302, 4, 2 * (16 * *(uchar *)(v3 + 9) + 9) & 0xFFFF);
      break;
    case 3u:
    case 4u:
      Function_201972c(1u, v2 + 1270, 4, 2 * (16 * *(uchar *)(v3 + 9) + 9) & 0xFFFF);
      break;
    default:
      break;
  }
  v6 = Function_208c0bc(*(ushort *)(v8 + v4), *(ushort *)(v5 + v4), 48);
  Function_201ae78(v3, 10, 0, 2, v6, 1u);
  Function_201ae78(v3, 9, 0, 3, v6, 2u);
  return Function_201ae78(v3, 10, 0, 5, v6, 1u);
}

//----- (02222684) --------------------------------------------------------
int __fastcall Function_2222684(uint *a1, ushort **a2, int a3, int *a4, ushort *a5, uint a6)
{
  uint *v6;
  ushort **v7;
  int v8;
  int v9;
  int *v10;

  v6 = a1;
  v7 = a2;
  v8 = (int)(a1 + 4);
  v9 = a3;
  v10 = a4;
  Function_201ada4_ClearTextBox((int)&a1[16 * a6 + 4], 0);
  Function_201ada4_ClearTextBox(v8 + (a6 << 6) + 16, 0);
  Function_201ada4_ClearTextBox(v8 + (a6 << 6) + 32, 0);
  Function_201ada4_ClearTextBox(v8 + (a6 << 6) + 48, 0);
  Function_2222400(v6, v7, v9, v10, a5, a6);
  Function_22224f0((int)v6, (int)v7, v9, (int)v10, (int)a5, a6);
  Function_2222528((int)v6, (int)v7, v9, (int)v10, (int)a5, a6);
  Function_2222594((int)v6, a6);
  Function_201a9a4(v8 + (a6 << 6));
  Function_201a9a4(v8 + (a6 << 6) + 16);
  Function_201a9a4(v8 + (a6 << 6) + 32);
  return Function_201a9a4(v8 + (a6 << 6) + 48);
}

//----- (02222720) --------------------------------------------------------
uint __fastcall Function_2222720(uint *a1)
{
  uint *v1;
  int v2;
  ushort *v3;
  uint v4;
  uint *v5;
  int v6;
  int *v8;
  int *v9;
  ushort **v10;

  v1 = a1;
  v10 = (ushort **)LoadFromMsgNARC(0, 26, 453, *(uint *)(*a1 + 36));
  v9 = Function_200c440(15, 14, 0, *(uint *)(*v1 + 36));
  v8 = (int *)Function_200b358(*(uint *)(*v1 + 36));
  v3 = (ushort *)Function_2023790(32, *(uint *)(*v1 + 36));
  v4 = 0;
  v5 = v1;
  do
  {
    if ( *((ushort *)v5 + 268) )
      Function_2222684(v1, v10, (int)v9, v8, v3, v4);
    ++v4;
    v5 += 6;
  }
  while ( v4 < 6 );
  Function_20237bc_FreeMsg((int)v3, v2);
  Function_200b190((ushort *)v10);
  Function_200c560(v9);
  return Function_200b3f0((uint *)v8, v6);
}

//----- (022227A4) --------------------------------------------------------
uint __fastcall Function_22227a4(int *a1)
{
  int v1;
  int v2;
  int *v3;
  uint result;
  int v5;
  char v6;
  ushort *v7;
  int v8;
  int *v9;
  int v10;
  char v11;
  ushort *v12;
  int v13;
  int v14;
  char v15;
  ushort *v16;
  int v17;
  int v18;
  char v19;
  ushort *v20;
  int v21;
  ushort *v22;
  ushort *v23;
  bool v24;
  int v25;
  char v26;
  char v27;

  v3 = a1;
  result = *a1;
  if ( result )
  {
    v1 = (uchar)Function_203608c();
    v2 = (*((uchar *)v3 + 42) - 1) & 0xFF;
    if ( Function_203a2dc(*(uint *)(*v3 + 348)) == 1 )
    {
      v5 = v1 ^ 1;
      v6 = Function_20793ac(*(uchar *)(*v3 + 52 * (v1 ^ 1) + 41));
      v7 = (ushort *)malloc(v3[9], 16);
      v8 = Function_20362f4(v5);
      Function_2023df0(v3[v8 + 5], v7, 8u);
      v9 = Function_202c174(v7, v6, v2, v3[9]);
      free((int)v7);
      return Function_202b758(*(uint *)(*v3 + 328), (int)v9, 4u);
    }
    result = Function_203895c();
    if ( result <= 4 )
      JUMPOUT(__CS__, *((short *)&off_2222836 + result) + 35792952);
  }
  switch ( (uchar)result )
  {
    case 1:
      v10 = v1 ^ 1;
      v11 = Function_20793ac(*(uchar *)(*v3 + 52 * (v1 ^ 1) + 41));
      v12 = (ushort *)malloc(v3[9], 16);
      v13 = Function_20362f4(v10);
      Function_2023df0(v3[v13 + 5], v12, 8u);
      v9 = Function_202bfcc(v12, v11, v2, v3[9]);
      free((int)v12);
      return Function_202b758(*(uint *)(*v3 + 328), (int)v9, 4u);
    case 2:
      v14 = v1 ^ 1;
      v15 = Function_20793ac(*(uchar *)(*v3 + 52 * (v1 ^ 1) + 41));
      v16 = (ushort *)malloc(v3[9], 16);
      v17 = Function_20362f4(v14);
      Function_2023df0(v3[v17 + 5], v16, 8u);
      v9 = Function_202c00c(v16, v15, v2, v3[9]);
      free((int)v16);
      return Function_202b758(*(uint *)(*v3 + 328), (int)v9, 4u);
    case 3:
      v18 = v1 ^ 1;
      v19 = Function_20793ac(*(uchar *)(*v3 + 52 * (v1 ^ 1) + 41));
      v20 = (ushort *)malloc(v3[9], 16);
      v21 = Function_20362f4(v18);
      Function_2023df0(v3[v21 + 5], v20, 8u);
      v9 = Function_202c0ac(v20, v19, v2, v3[9]);
      free((int)v20);
      return Function_202b758(*(uint *)(*v3 + 328), (int)v9, 4u);
    case 4:
      v22 = (ushort *)malloc(v3[9], 16);
      v23 = (ushort *)malloc(v3[9], 16);
      v24 = Function_2220ad0() == 1;
      v25 = *v3;
      if ( v24 )
      {
        v26 = Function_20793ac(*(uchar *)(v25 + 93));
        v27 = Function_20793ac(*(uchar *)(*v3 + 197));
        Function_2023df0(v3[6], v22, 8u);
        Function_2023df0(v3[8], v23, 8u);
      }
      else
      {
        v26 = Function_20793ac(*(uchar *)(v25 + 41));
        v27 = Function_20793ac(*(uchar *)(*v3 + 145));
        Function_2023df0(v3[5], v22, 8u);
        Function_2023df0(v3[7], v23, 8u);
      }
      v9 = Function_202c04c(v22, v23, v26, v27, v2, v3[9]);
      free((int)v22);
      free((int)v23);
      return Function_202b758(*(uint *)(*v3 + 328), (int)v9, 4u);
    default:
      return result;
  }
  return result;
}

//----- (022229D4) --------------------------------------------------------
uint __fastcall Function_22229d4(int a1)
{
  int v1;

  v1 = a1;
  Function_201ae78(a1 + 2952, 15, 0, 0, 0xD8u, 0x20u);
  return Function_200e060(v1 + 2952, 0, 1, 0xFu);
}

//----- (02222A08) --------------------------------------------------------
BOOL __fastcall Function_2222a08(int a1)
{
  return *(uint *)(**(uint **)a1 + 448) && Function_202f250();
}

//----- (02222A28) --------------------------------------------------------
int __fastcall Function_2222a28(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = 3012;
  if ( !*(uint *)(v1 + 3012) )
  {
    result = Function_200e7fc((int *)(v1 + 2952), 1);
    *(uint *)(v1 + 3012) = result;
  }
  return result;
}

//----- (02222A48) --------------------------------------------------------
int __fastcall Function_2222a48(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = *(uint *)(a1 + 3012);
  if ( result )
  {
    Function_200eba0(result);
    result = 3012;
    *(uint *)(v1 + 3012) = 0;
  }
  return result;
}

