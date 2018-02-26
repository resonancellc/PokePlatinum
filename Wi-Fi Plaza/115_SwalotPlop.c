//----- (02260440) --------------------------------------------------------
int __fastcall Function_115_2260440(int a1)
{
  int v1;
  int v2;
  int *v3;

  v1 = a1;
  v2 = LoadPtrToOverWorldDataIn18(a1);
  Function_2017fc8(3, 99, 393216);
  v3 = (int *)MallocSomeDataAndStorePtrInOverlayData1c(v1, 136, 0x63u);
  Call_FillMemWithValue(v3, 0, 0x88u);
  ((void (__fastcall *)(int *, uint, uint, uint))dword_225C700[0])(
    v3 + 2,
    *(uchar *)(v2 + 57),
    *(uint *)(v2 + 52),
    *(uchar *)(v2 + 56));
  Function_2260adc(v3, 99);
  return 1;
}

//----- (0226048C) --------------------------------------------------------
int __fastcall Function_115_226048c(int a1, uint *a2)
{
  int v2;
  uint *v3;
  uint *v4;
  int v5;
  int v6;
  int result;
  uchar *v8;
  uint v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  char v15;
  char v16;
  char v17;

  v2 = a1;
  v3 = a2;
  v4 = (uint *)LoadOverlayData1c(a1);
  v5 = LoadPtrToOverWorldDataIn18(v2);
  if ( ((int (__fastcall *)(uint *))dword_225CA54[0])(v4 + 2) == 1 )
  {
    v6 = v4[30];
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        if ( ((int (__fastcall *)(uint *))dword_225CA98[0])(v4 + 2) == 1 )
          ++v4[30];
      }
      else if ( v6 == 2 )
      {
        Function_2260b44(v4, v5);
        return 1;
      }
    }
    else
    {
      if ( Function_200f2ac() == 1 )
        Function_200f2c0();
      SetBrightnessOfBothScreens(0);
      ++v4[30];
    }
    result = 0;
  }
  else
  {
    switch ( (uchar)*v3 )
    {
      case 0u:
        *v4 = ((int (__fastcall *)(uint *, int))dword_225C814[0])(v4 + 2, 99);
        ++*v3;
        goto LABEL_80;
      case 1u:
        if ( ((int (__fastcall *)(uint))dword_225C8BC[0])(*v4) == 1 )
        {
          v4[28] = ((int (__fastcall *)(uint))dword_225C8CC[0])(*v4);
          ((void (__fastcall *)(uint))dword_225C838[0])(*v4);
          *v4 = 0;
          ++*v3;
        }
        goto LABEL_80;
      case 2u:
        if ( !(dword_21BF6C0 & 1) )
        {
          SetMainLoopFunctionCall((int)Function_2260a50, (int)v4);
          Function_20177a4();
          v4[14] = 0;
          v4[15] = 0;
          v4[16] = 0;
          *((uchar *)v4 + 132) = 0;
          v8 = v4 + 33;
          v8[1] = 0;
          v8[2] = 0;
          v8[3] = 0;
          Function_201dbec(32, 0x63u);
          Function_2265a24(v4);
          v4[32] = 1;
          v9 = Function_2032e64();
          v4[29] = v9;
          if ( v9 <= 1 )
            ErrorHandler();
          *((ushort *)v4 + 34) = Function_203608c();
          *((ushort *)v4 + 35) = ((int (__fastcall *)(uint *, uint))dword_225C76C[0])(
                                  v4 + 2,
                                  *((ushort *)v4 + 34));
          if ( !*((ushort *)v4 + 34) )
          {
            v4[12] = Function_2260bbc(99, 1200, v4[29], v4 + 18);
            v4[31] = 1;
          }
          v4[13] = Function_2260cec(99, 1200, v4[29], *((ushort *)v4 + 35), v4 + 18);
          Function_2039734();
          if ( *(uchar *)(v5 + 56) )
            ((void (__fastcall *)(int))dword_21D1E74[0])(99);
          v10 = v4[28];
          if ( v10 )
          {
            if ( v10 == 1 )
            {
              v15 = 0;
              v16 = 1;
            }
            else if ( v10 == 2 )
            {
              v15 = 1;
              v16 = 0;
            }
            else
            {
              ErrorHandler();
            }
          }
          else
          {
            v15 = 0;
            v16 = 0;
          }
          Function_22612bc(v4[13], &v15);
          Function_20364f0(1);
          ++*v3;
        }
        goto LABEL_80;
      case 3u:
        if ( Function_2036540(1) )
        {
          Function_200f174(0, 27, 27, 0xFFFF, 6, 1, 99);
          ++*v3;
        }
        goto LABEL_80;
      case 4u:
        Function_2260dac(v4[13], 0);
        if ( Function_200f2ac() )
        {
          if ( *((ushort *)v4 + 34) )
          {
            ++*v3;
          }
          else if ( Function_20359dc(22, 0, 0) )
          {
            ++*v3;
          }
        }
        goto LABEL_80;
      case 5u:
        Function_2260dac(v4[13], 0);
        if ( v4[14] )
          ++*v3;
        goto LABEL_80;
      case 6u:
        if ( !Function_2260dac(v4[13], 1) )
          ++*v3;
        goto LABEL_80;
      case 7u:
        if ( v4[15] )
        {
          v14 = Function_2261274(v4[13]);
          if ( Function_20359dc(25, (int)&v14, 4) )
            ++*v3;
        }
        else
        {
          if ( !*((ushort *)v4 + 34) )
          {
            v11 = Function_2260bec(v4[12]);
            if ( Function_2260c54(v4[12]) )
            {
              v13 = Function_2260c64(v4[12]);
              if ( Function_2260ba0(v4, 27, &v13, 4) == 1 )
                Function_2260c5c(v4[12]);
            }
            if ( !v11 )
              Function_2260ba0(v4, 23, 0, 0);
          }
          Function_22610d4(v4[13]);
          Function_2260a5c(v4);
          Function_2260a90(v4);
        }
        goto LABEL_80;
      case 8u:
        Function_2260f70(v4[13], 0);
        if ( *((ushort *)v4 + 34) )
        {
          ++*v3;
        }
        else if ( Function_2260ca4(v4[12]) == 1 )
        {
          Function_2260cbc(v4[12], &v17);
          if ( Function_20359dc(26, (int)&v17, 16) )
            ++*v3;
        }
        goto LABEL_80;
      case 9u:
        Function_2260f70(v4[13], 0);
        if ( v4[16] == 1 )
          ++*v3;
        goto LABEL_80;
      case 0xAu:
        if ( !Function_2260f70(v4[13], 1) )
          ++*v3;
        goto LABEL_80;
      case 0xBu:
        Function_200f174(0, 26, 26, 0xFFFF, 6, 1, 99);
        Function_2260f70(v4[13], 1);
        ++*v3;
        goto LABEL_80;
      case 0xCu:
        Function_2260f70(v4[13], 1);
        if ( Function_200f2ac() )
        {
          Function_20364f0(3);
          ++*v3;
        }
        goto LABEL_80;
      case 0xDu:
        if ( !Function_2036540(3) )
          return 0;
        if ( *(uchar *)(v5 + 56) )
          ((void (*)(void))dword_21D1F18[0])();
        if ( !*((ushort *)v4 + 34) )
        {
          Function_2260be4(v4[12]);
          v4[12] = 0;
        }
        Function_2260d78(v4[13]);
        v4[13] = 0;
        SetMainLoopFunctionCall(0, 0);
        Function_20177a4();
        Function_201dc3c();
        ++*v3;
        goto LABEL_80;
      case 0xEu:
        ((void (__fastcall *)(uint *, uint))dword_225C9A8[0])(v4 + 6, *((uchar *)v4 + 16));
        v4[1] = ((int (__fastcall *)(uint *, uint *, int))dword_225C8E0[0])(v4 + 2, v4 + 6, 99);
        ++*v3;
        goto LABEL_80;
      case 0xFu:
        if ( ((int (__fastcall *)(uint))dword_225C9A0)(v4[1]) != 1 )
          goto LABEL_80;
        v12 = ((int (__fastcall *)(uint))dword_225C9A4)(v4[1]);
        ((void (__fastcall *)(uint))dword_225C904[0])(v4[1]);
        v4[1] = 0;
        if ( v12 )
        {
          *v3 = 0;
LABEL_80:
          result = 0;
        }
        else
        {
          result = 1;
        }
        break;
      default:
        goto LABEL_80;
    }
  }
  return result;
}

//----- (022608E4) --------------------------------------------------------
int __fastcall Function_115_22608e4(int a1, uint *a2)
{
  int v2;
  uint *v3;
  int v4;
  int v5;
  int v7;

  v2 = a1;
  v3 = a2;
  v4 = LoadOverlayData1c(a1);
  LoadPtrToOverWorldDataIn18(v2);
  if ( *v3 )
  {
    if ( *v3 == 1 )
    {
      if ( Function_2036540(4) )
        return 1;
      v7 = Function_2035e18();
      if ( v7 < Function_2032e64() )
        return 1;
    }
  }
  else
  {
    v5 = ((int (__fastcall *)(int))dword_225CA54[0])(v4 + 8);
    Function_2260b30(v4);
    FreeSomeDataAndStore0InOverlayData1c(v2);
    Function_201807c(99);
    Function_20388f4(0, 1);
    if ( v5 == 1 )
      return 1;
    Function_20364f0(4);
    ++*v3;
  }
  return 0;
}

//----- (0226095C) --------------------------------------------------------
int __fastcall Function_226095c(int result)
{
  *(uint *)(result + 56) = 1;
  return result;
}

//----- (02260964) --------------------------------------------------------
int __fastcall Function_2260964(int result)
{
  *(uint *)(result + 60) = 1;
  return result;
}

//----- (0226096C) --------------------------------------------------------
int __fastcall Function_226096c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = ((int (__fastcall *)(int, int))dword_225C76C[0])(a1 + 8, a3);
  return Function_2260c6c(*(uint *)(v3 + 48), v4, v5);
}

//----- (02260988) --------------------------------------------------------
int __fastcall Function_2260988(int a1)
{
  return Function_22611e4(*(uint *)(a1 + 52));
}

//----- (02260994) --------------------------------------------------------
int __fastcall Function_2260994(int a1, int a2, int a3)
{
  int v3;
  int result;

  v3 = a1;
  ((void (__fastcall *)(int, int))dword_225C76C[0])(a1 + 8, a3);
  result = *(uint *)(v3 + 48);
  if ( result )
    result = Function_2260c7c();
  return result;
}

//----- (022609B4) --------------------------------------------------------
int __fastcall Function_22609b4(int a1, int *a2)
{
  int v2;
  int *v3;
  int v4;
  int result;

  v2 = a1;
  v3 = a2;
  Function_2261260(*(uint *)(a1 + 52));
  *(uint *)(v2 + 64) = 1;
  v4 = 0;
  do
  {
    result = *v3;
    ++v4;
    *(uint *)(v2 + 24) = *v3;
    ++v3;
    v2 += 4;
  }
  while ( v4 < 4 );
  return result;
}

//----- (022609D8) --------------------------------------------------------
int __fastcall Function_22609d8(int a1)
{
  return Function_2261278(*(uint *)(a1 + 52));
}

//----- (022609E4) --------------------------------------------------------
uint __fastcall Function_22609e4(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  uint result;
  uint v7;
  int v8;

  v3 = a1;
  v4 = a2;
  v5 = ((int (__fastcall *)(int, int))dword_225C76C[0])(a1 + 8, a3);
  Function_22612ac(*(uint *)(v3 + 52), v4, v5);
  ++*(uchar *)(v3 + 132 + v5);
  result = *(ushort *)(v3 + 68);
  if ( !*(ushort *)(v3 + 68) )
  {
    v7 = *(uint *)(v3 + 116);
    v8 = 1;
    result = 0;
    if ( v7 )
    {
      do
      {
        if ( *(uint *)(v3 + 124) > (uint)*(uchar *)(v3 + result + 132) )
          v8 = 0;
        ++result;
      }
      while ( result < v7 );
    }
    if ( v8 == 1 )
    {
      ++*(uint *)(v3 + 124);
      result = Function_20359dc(29, 0, 0);
    }
  }
  return result;
}

//----- (02260A48) --------------------------------------------------------
uint *__fastcall Function_2260a48(int a1)
{
  uint *result;

  result = (uint *)(a1 + 128);
  *result = 1;
  return result;
}

//----- (02260A50) --------------------------------------------------------
int __fastcall Function_2260a50(int a1)
{
  return Function_22611c8(*(uint *)(a1 + 52));
}

//----- (02260A5C) --------------------------------------------------------
int __fastcall Function_2260a5c(int a1)
{
  int v1;
  int result;
  char v3;

  v1 = a1;
  for ( result = Function_2261224(*(uint *)(a1 + 52), &v3);
        result == 1;
        result = Function_2261224(*(uint *)(v1 + 52), &v3) )
  {
    Function_2260ba0(v1, 24, &v3, 20);
  }
  return result;
}

//----- (02260A90) --------------------------------------------------------
int __fastcall Function_2260a90(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  int v8;

  v8 = a4;
  v4 = a1;
  result = Function_22611e0(*(uint *)(a1 + 52));
  if ( result )
  {
    result = s32_div_f(result, 30);
    if ( !v6 )
    {
      result = *(uint *)(v4 + 128);
      if ( result == 1 )
      {
        v7 = Function_2261274(*(uint *)(v4 + 52));
        if ( !Function_2260ba0(v4, 28, &v7, 4) )
          ErrorHandler();
        result = 0;
        *(uint *)(v4 + 128) = 0;
      }
    }
  }
  return result;
}

//----- (02260ADC) --------------------------------------------------------
int __fastcall Function_2260adc(int a1, int a2)
{
  int v2;
  int result;
  int v4;
  int v5;
  int v6;

  v2 = a1;
  *(uint *)(a1 + 76) = Function_2007068(189, 0, 0, a2, 0, &v6);
  *(uint *)(v2 + 72) = u32_div_f(v6, 24);
  result = *(uchar *)(v2 + 16);
  v4 = 0;
  if ( result > 0 )
  {
    v5 = v2;
    do
    {
      *(uint *)(v5 + 80) = ((int (__fastcall *)(int, int))dword_225C7CC[0])(v2 + 8, v4);
      *(uint *)(v5 + 96) = ((int (__fastcall *)(int, int))dword_225C7A4[0])(v2 + 8, v4);
      result = *(uchar *)(v2 + 16);
      ++v4;
      v5 += 4;
    }
    while ( v4 < result );
  }
  return result;
}

//----- (02260B30) --------------------------------------------------------
int __fastcall Function_2260b30(int a1)
{
  int v1;
  int result;

  v1 = a1;
  free(*(uint *)(a1 + 76));
  result = 0;
  *(uint *)(v1 + 76) = 0;
  *(uint *)(v1 + 72) = 0;
  return result;
}

//----- (02260B44) --------------------------------------------------------
int __fastcall Function_2260b44(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a1;
  v3 = a2;
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  if ( *(uint *)v2 )
  {
    ((void (*)(void))dword_225C838[0])();
    *(uint *)v2 = 0;
  }
  if ( *(uint *)(v2 + 52) )
  {
    if ( !*(ushort *)(v2 + 68) )
      Function_2260be4(*(uint *)(v2 + 48));
    Function_2260d78(*(uint *)(v2 + 52));
    Function_201dc3c();
  }
  if ( *(uchar *)(v3 + 56) )
    ((void (*)(void))dword_21D1F18[0])();
  result = *(uint *)(v2 + 4);
  if ( result )
  {
    ((void (*)(void))dword_225C904[0])();
    result = 0;
    *(uint *)(v2 + 4) = 0;
  }
  return result;
}

//----- (02260BA0) --------------------------------------------------------
int __fastcall Function_2260ba0(int a1, int a2, int a3, int a4)
{
  int result;

  if ( *(uint *)(a1 + 128) )
    result = Function_20359dc(a2, a3, a4);
  else
    result = 0;
  return result;
}

//----- (02260BBC) --------------------------------------------------------
int *__fastcall Function_2260bbc(uint a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int *v7;

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = (int *)malloc(a1, 56);
  Call_FillMemWithValue(v7, 0, 0x38u);
  *v7 = v4;
  v7[2] = v5;
  v7[12] = v6;
  v7[1] = 1;
  return v7;
}

//----- (02260BE4) --------------------------------------------------------
uint __fastcall Function_2260be4(int a1)
{
  return free(a1);
}

//----- (02260BEC) --------------------------------------------------------
int __fastcall Function_2260bec(int a1)
{
  uint v2;
  uint *v3;
  uint v4;
  uint v5;
  uint v6;
  uint *v7;

  if ( *(uint *)a1 > 0 && *(uint *)(a1 + 4) == 1 )
    --*(uint *)a1;
  if ( *(uint *)a1 <= 0 )
    return 0;
  v2 = *(uchar *)(a1 + 54);
  v3 = *(uint **)(a1 + 48);
  v4 = *v3;
  v5 = v2;
  v6 = *(uchar *)(a1 + 54);
  if ( v2 < *v3 )
  {
    v7 = (uint *)(v3[1] + 24 * v2);
    do
    {
      if ( *v7 >= (int)*(ushort *)(a1 + 52) )
        break;
      ++v5;
      v7 += 6;
      v6 = v5;
    }
    while ( v5 < v4 );
  }
  if ( v6 == v4 )
    --v5;
  if ( v5 != v2 )
  {
    *(uchar *)(a1 + 54) = v5;
    *(uchar *)(a1 + 55) = 1;
  }
  return 1;
}

//----- (02260C54) --------------------------------------------------------
int __fastcall Function_2260c54(int a1)
{
  return *(uchar *)(a1 + 55);
}

//----- (02260C5C) --------------------------------------------------------
uchar *__fastcall Function_2260c5c(int a1)
{
  uchar *result;

  result = (uchar *)(a1 + 55);
  *result = 0;
  return result;
}

//----- (02260C64) --------------------------------------------------------
int __fastcall Function_2260c64(int a1)
{
  return *(uchar *)(a1 + 54);
}

//----- (02260C6C) --------------------------------------------------------
int __fastcall Function_2260c6c(int result, int a2)
{
  if ( *(ushort *)(a2 + 2) )
    ++*(ushort *)(result + 52);
  return result;
}

//----- (02260C7C) --------------------------------------------------------
int __fastcall Function_2260c7c(int result, uint a2, int a3)
{
  if ( a2 > 0x1869F )
    a2 = 99999;
  if ( !(*(uint *)(result + 28) & (1 << a3)) )
  {
    *(uint *)(result + 4 * a3 + 12) = a2;
    *(uint *)(result + 28) |= 1 << a3;
  }
  return result;
}

//----- (02260CA4) --------------------------------------------------------
BOOL __fastcall Function_2260ca4(int a1)
{
  return (uint)Function_2260ccc() >= *(uint *)(a1 + 8);
}

//----- (02260CBC) --------------------------------------------------------
int __fastcall Function_2260cbc(uint *a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  int result;
  int v6;

  v2 = a2;
  v4 = a1[4];
  v3 = (int)(a1 + 5);
  *v2 = a1[3];
  v2[1] = v4;
  v2 += 2;
  result = a1[5];
  v6 = *(uint *)(v3 + 4);
  *v2 = result;
  v2[1] = v6;
  return result;
}

//----- (02260CCC) --------------------------------------------------------
int __fastcall Function_2260ccc(int a1)
{
  int v1;
  int v2;

  v1 = 0;
  v2 = 0;
  do
  {
    if ( (1 << v2) & *(uint *)(a1 + 28) )
      ++v1;
    ++v2;
  }
  while ( v2 < 4 );
  return v1;
}

//----- (02260CEC) --------------------------------------------------------
int *__fastcall Function_2260cec(uint a1, int a2, int a3, int a4, int a5)
{
  int v5;
  uint v6;
  int v7;
  int v8;
  int *v9;

  v5 = a2;
  v6 = a1;
  v7 = a3;
  v8 = a4;
  v9 = (int *)malloc(a1, 34792);
  Call_FillMemWithValue(v9, 0, 0x87E8u);
  v9[1] = 1;
  v9[2] = 0;
  v9[3] = v5;
  v9[4] = v7;
  v9[5] = v8;
  v9[8671] = a5;
  Function_2261b34(v9, v9 + 1651);
  Function_22633fc(v9, v6);
  Function_2262fb4(v9 + 8675, v9 + 1709, v6);
  Function_226327c(v9 + 8691);
  if ( Function_201e3f4((int)dword_22666C0, 8, 4u) != 1 )
    ErrorHandler();
  return v9;
}

//----- (02260D78) --------------------------------------------------------
uint __fastcall Function_2260d78(int a1)
{
  int v1;

  v1 = a1;
  if ( Function_201e530() != 1 )
    ErrorHandler();
  Function_22630dc(v1 + 34700, v1 + 6836);
  Function_2263560(v1);
  return free(v1);
}

//----- (02260DAC) --------------------------------------------------------
int __fastcall Function_2260dac(int a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  uint v6;

  v2 = (uint *)a1;
  v3 = a2;
  v4 = 1;
  if ( *(uint *)(a1 + 7992) >= 4u )
  {
    if ( *(uchar *)(a1 + 34693) )
      v5 = -120;
    else
      v5 = 120;
    Function_2261c48(a1 + 6604, (*(ushort *)(a1 + 6606) + v5) & 0xFFFF);
  }
  Function_2261ab8(v2 + 1709, v2 + 1651);
  Function_22640ec(v2 + 2013, v2 + 1651);
  Function_2264110(v2 + 2013, v2 + 1651);
  v6 = v2[1998];
  if ( v6 <= 8 )
    JUMPOUT(__CS__, *((short *)&off_2260E18 + v6) + 36048410);
  switch ( (uchar)v6 )
  {
    case 0:
      Function_2263130(v2 + 8675);
      ++v2[1998];
      break;
    case 1:
      if ( Function_2263150(v2 + 8675, v2) == 1 )
      {
        ++v2[1998];
        Function_20364f0(2);
      }
      break;
    case 2:
      if ( Function_2036540(2) )
      {
        ++v2[1998];
        v2[2000] = 65;
      }
      break;
    case 3:
      if ( --v2[2000] == 50 )
        Function_2005748(0x61Au);
      if ( v2[2000] == 20 )
        Function_2005748(0x63Eu);
      Function_2264214(v2 + 2013, 4096);
      if ( !v2[2000] )
      {
        Function_2261a74(v2 + 1998, v2 + 1709);
        v2[1998] = 4;
      }
      break;
    case 4:
      if ( v3 == 1 )
        v2[1998] = 5;
      break;
    case 5:
      Function_2261a10(v2 + 1998, v2 + 1709);
      Function_2005748(0x5DDu);
      v2[1998] = 6;
      break;
    case 6:
      if ( !Function_2261a3c(v2 + 1998, v2 + 1709) )
        v2[1998] = 7;
      break;
    case 7:
      if ( !Function_2261aa4(v2 + 1998, v2 + 1709) )
        v2[1998] = 8;
      break;
    case 8:
      Function_2261a54(v2 + 1998, v2 + 1709);
      Function_2261c18(v2 + 1651, 1);
      v4 = 0;
      break;
    default:
      break;
  }
  Function_22640a4(v2 + 2013, v2 + 1651, *v2);
  Function_226369c(v2, v2 + 1709);
  return v4;
}

//----- (02260F70) --------------------------------------------------------
int __fastcall Function_2260f70(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v2 = a2;
  v3 = a1;
  v4 = 1;
  switch ( (uchar)*(uint *)(a1 + 8020) )
  {
    case 0u:
      Function_22625a8();
      Function_2262d90(v3);
      Function_200aae0(24, -14, 0, 63, 2);
      Function_2261adc(v3 + 6836);
      ((void (__fastcall *)(uint))dword_225CB38[30])(*(uint *)(v3 + 8612));
      Function_2265a08(v3 + 34788);
      Function_2265788(v3 + 34348);
      ++*(uint *)(v3 + 8020);
      break;
    case 1u:
      v5 = 1;
      if ( !Function_2261aec(a1 + 6836) )
        v5 = 0;
      Function_2262304(v3);
      Function_2262540(v3);
      if ( Function_22625c8(v3) == 1 )
        v5 = 0;
      if ( !Function_2261b1c(v3 + 6836) )
        v5 = 0;
      if ( !Function_200ac1c(2) )
        v5 = 0;
      if ( v5 == 1 && v2 == 1 )
      {
        *(uint *)(v3 + 8024) = 0;
        ++*(uint *)(v3 + 8020);
      }
      break;
    case 2u:
      if ( ++*(uint *)(a1 + 8024) >= 0x40u )
        ++*(uint *)(a1 + 8020);
      break;
    case 3u:
      v4 = 0;
      break;
    default:
      break;
  }
  if ( *(uchar *)(v3 + 34693) )
    v6 = -120;
  else
    v6 = 120;
  Function_2261c48(v3 + 6604, (*(ushort *)(v3 + 6606) + v6) & 0xFFFF);
  Function_22640c0(v3 + 8052, v3 + 6604);
  Function_22640ec(v3 + 8052, v3 + 6604);
  Function_22640a4(v3 + 8052, v3 + 6604, *(uint *)v3);
  Function_226369c(v3, v3 + 6836);
  Function_2265820(v3 + 34348);
  return v4;
}

//----- (022610D4) --------------------------------------------------------
int __fastcall Function_22610d4(uint *a1)
{
  uint *v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = *a1;
  if ( *a1 < 2u && (uint)dword_2265B3C[v2] <= a1[2] )
  {
    *a1 = v2 + 1;
    if ( v2 == 0 )
      Function_22658e0(a1 + 8697);
  }
  Function_201e564((ushort *)v1 + 17270, 1u, 0);
  Function_2262974(v1);
  if ( !Function_2262e64(v1 + 8652) )
    Function_2262efc(v1, v1 + 8652);
  if ( Function_22632dc(v1 + 8691, v1[4]) == 1 )
  {
    if ( Function_22632d8(v1 + 8691) != 0xFFFF )
      Function_2264268(v1 + 2013);
    Function_22632c8(v1 + 8691);
  }
  Function_2262304(v1);
  Function_2261bbc(v1, v1 + 1651);
  Function_2263640(v1, v1 + 1709);
  Function_2262524(v1);
  Function_22658f8(v1 + 8697, v1 + 1813, v1 + 2013);
  if ( v1[1] == 1 )
    ++v1[2];
  v3 = v1[3];
  if ( v1[2] < v3 )
    return 0;
  v1[2] = v3;
  return 1;
}

//----- (022611C8) --------------------------------------------------------
int __fastcall Function_22611c8(int a1)
{
  Function_201c2b8(*(uint *)(a1 + 6836));
  Function_201dcac();
  return Function_200a858();
}

//----- (022611E0) --------------------------------------------------------
int __fastcall Function_22611e0(int a1)
{
  return *(uint *)(a1 + 8);
}

//----- (022611E4) --------------------------------------------------------
int __fastcall Function_22611e4(uint *a1, ushort *a2, int a3, int a4)
{
  ushort *v4;
  uint *v5;
  int result;
  char v7;
  int v8;

  v8 = a4;
  v4 = a2;
  v5 = a1;
  result = *a2;
  if ( v5[5] != result )
  {
    Function_226218c(a2, &v7);
    Function_22621dc(v5, &v7, 2);
    result = v4[1];
    if ( v4[1] )
      result = Function_226158c(v5 + 1934, *v4, *((char *)v4 + 18), *v5);
  }
  return result;
}

//----- (02261224) --------------------------------------------------------
int __fastcall Function_2261224(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    if ( *(uchar *)(v3 + 76) == 4 )
    {
      v4 = 68 * v2;
      Function_2262134(a1 + 80 + 68 * v2);
      Function_22622f8(v1 + 76 + v4);
      return 1;
    }
    ++v2;
    v3 += 68;
  }
  while ( v2 < 96 );
  return 0;
}

//----- (02261260) --------------------------------------------------------
int __fastcall Function_2261260(int a1, int *a2)
{
  int *v2;
  int *v3;
  int v4;
  int v5;
  int result;
  int v7;

  v2 = a2;
  v3 = (int *)(a1 + 34524);
  v4 = *a2;
  v5 = a2[1];
  v2 += 2;
  *v3 = v4;
  v3[1] = v5;
  v3 += 2;
  result = *v2;
  v7 = v2[1];
  *v3 = *v2;
  v3[1] = v7;
  return result;
}

//----- (02261274) --------------------------------------------------------
int __fastcall Function_2261274(int a1)
{
  return *(uint *)(a1 + 24);
}

//----- (02261278) --------------------------------------------------------
int __fastcall Function_2261278(int a1, short a2)
{
  *(ushort *)(a1 + 34690) = *(ushort *)(a1 + 34688);
  *(ushort *)(a1 + 34688) = a2;
  return Function_2262dc4(
           a1 + 34608,
           *(uint *)(a1 + 34684),
           a1 + 34692,
           *(ushort *)(a1 + 34690),
           *(ushort *)(a1 + 34688));
}

//----- (022612AC) --------------------------------------------------------
int __fastcall Function_22612ac(int a1)
{
  return Function_2263294(a1 + 34764);
}

//----- (022612BC) --------------------------------------------------------
int __fastcall Function_22612bc(int a1, uchar *a2)
{
  int v2;

  v2 = a1;
  *(uchar *)(a1 + 34692) = *a2;
  *(uchar *)(a1 + 34693) = a2[1];
  *(uchar *)(a1 + 34694) = a2[2];
  *(uchar *)(a1 + 34695) = a2[3];
  *(uint *)(a1 + 34696) = 1;
  Function_2262db0(a1 + 34608, *(uint *)(a1 + 34684), a1 + 34692);
  return Function_2262efc(v2, v2 + 34608);
}

//----- (02261304) --------------------------------------------------------
int __fastcall Function_2261304(uint *a1, int a2, int a3, int a4, int a5)
{
  uint *v5;
  int v6;
  long long v7;
  int v8;
  int v9;
  long long v10;
  int v11;
  int result;

  v5 = a1;
  v6 = a3;
  LODWORD(v7) = a4;
  v8 = a2;
  v9 = a4;
  HIDWORD(v7) = a4 >> 31;
  v10 = ll_mul(v7, a5 << 12);
  v11 = FX_Div(
          (((ll)(int)(v6 - v8 - (ull)((v10 + 2048) >> 12)) << 13) + 2048) >> 12,
          a5 * a5 << 12);
  *v5 = v8;
  v5[1] = v8;
  v5[2] = v9;
  v5[3] = v11;
  result = 0;
  v5[4] = 0;
  v5[5] = a5;
  return result;
}

//----- (02261364) --------------------------------------------------------
int __fastcall Function_2261364(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  long long v4;
  int v5;
  int v6;
  int result;

  v1 = a1;
  v2 = a1[4];
  v3 = (ll_mul((int)a1[2], v2 << 12) + 2048) >> 12;
  v4 = ll_mul((int)v1[3], v2 * v2 << 12);
  *v1 = v1[1] + v3 + FX_Div((v4 + 2048) >> 12, 0x2000);
  v5 = v1[5];
  v6 = v1[4] + 1;
  if ( v6 > v5 )
  {
    v1[4] = v5;
    result = 1;
  }
  else
  {
    v1[4] = v6;
    result = 0;
  }
  return result;
}

//----- (022613CC) --------------------------------------------------------
uint *__fastcall Function_22613cc(int a1, int a2, int a3, uint *a4, uint *a5)
{
  int v5;
  int v6;
  uint *result;

  v5 = a2 << 7;
  *a4 = *(int *)((char *)&dword_2265E84[8 * a1 + 2 * a3] + v5);
  v6 = *(int *)((char *)&dword_2265E84[8 * a1 + 1 + 2 * a3] + v5);
  result = a5;
  *a5 = v6;
  return result;
}

//----- (022613F8) --------------------------------------------------------
int __fastcall Function_22613f8(int a1, int a2, int a3, int a4, ushort a5, int a6)
{
  int v6;
  short v7;
  int v8;
  long long v9;
  int v10;
  int v11;
  short v13;
  short v14;
  int v15;
  int v16;
  int v17;
  int v18;
  char v19;
  int v20;
  int v21;
  int v22;

  v22 = a4;
  v6 = a1;
  v7 = a4;
  v13 = *(uint *)(a1 + 20);
  v14 = 0;
  v15 = (a2 - a4) / 2 << 16 >> 4;
  v16 = 0;
  v17 = (a3 - a5) / 2 << 16 >> 4;
  if ( VEC_Mag(&v15) > 123392 )
  {
    VEC_Normalize(&v15, &v15);
    v8 = (ll_mul(v15, 123392LL) + 2048) >> 12;
    LODWORD(v9) = v17;
    v15 = v8;
    HIDWORD(v9) = v17 >> 31;
    v17 = (ll_mul(v9, 123392LL) + 2048) >> 12;
  }
  v16 = 155648;
  v18 = VEC_Mag(&v15);
  v18 = (ll_mul(v18, 2458LL) + 2048) >> 12;
  VEC_Normalize(&v15, &v15);
  Function_22642f8(v7, (short)a5, &v19);
  v20 = 0;
  v10 = *(uint *)(v6 + 16);
  Function_2264354();
  v11 = *(uint *)(v6 + 16);
  Function_2264354();
  v21 = 0;
  return Function_22621dc(v6, &v13, a6);
}

//----- (022614F8) --------------------------------------------------------
int __fastcall Function_22614f8(uint *a1)
{
  int v1;
  int v2;

  v1 = a1[7];
  if ( v1 < 3 )
    v1 = (uchar)v1;
  else
    v1 = 2;
  v2 = dword_2265B2C[v1];
  if ( *a1 == 2 )
    v2 *= 3;
  return v2;
}

//----- (02261520) --------------------------------------------------------
int __fastcall Function_2261520(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int result;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  short v16;
  int v17;
  int v18;
  int v19;

  v5 = a2;
  v6 = a1;
  v11 = *(uint *)(a2 + 28);
  v12 = a2 + 344;
  v13 = 4096;
  v14 = 4096;
  v15 = 4096;
  v7 = 0;
  v16 = 0;
  v9 = a3;
  v10 = a4;
  v17 = 0;
  v18 = 1;
  v19 = a5;
  do
  {
    result = Function_22615b0(v6, &v11, v5, v9, v7++, v10, a5);
    v6 += 64;
  }
  while ( v7 < 4 );
  return result;
}

//----- (02261574) --------------------------------------------------------
int __fastcall Function_2261574(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = 0;
  do
  {
    result = Function_2261648(v1);
    ++v2;
    v1 += 64;
  }
  while ( v2 < 4 );
  return result;
}

//----- (0226158C) --------------------------------------------------------
int __fastcall Function_226158c(int a1, int a2)
{
  return Function_2261660(a1 + (a2 << 6));
}

//----- (02261598) --------------------------------------------------------
int __fastcall Function_2261598(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = 0;
  do
  {
    result = Function_2261744(v1);
    ++v2;
    v1 += 64;
  }
  while ( v2 < 4 );
  return result;
}

//----- (022615B0) --------------------------------------------------------
uint *__fastcall Function_22615b0(uint *a1, int a2, int a3, int a4, int a5, int a6)
{
  uint *v6;
  int v7;
  int v8;
  uint *v9;
  int v10;
  uint *v11;
  int v12;
  uint *result;
  uint *v14;
  int v15;
  int v16;
  int v17;

  v14 = a1;
  v6 = a1;
  v7 = a2;
  v15 = a4;
  v8 = 0;
  v9 = a1;
  do
  {
    Function_22613cc(v15, a6, a5, &v17, &v16);
    *(uint *)(v7 + 8) = v17 << 12;
    *(uint *)(v7 + 12) = v16 << 12;
    v10 = *(uint *)(v7 + 12);
    v11 = v6 + 6;
    *v11 = *(uint *)(v7 + 8);
    v11[1] = v10;
    v6[8] = *(uint *)(v7 + 16);
    v12 = Function_2021aa0((uint **)v7);
    *v9 = v12;
    Function_2021d6c(v12, 2u);
    Function_2021cac(*v9, 0);
    Function_2021cc8(*v9, 1);
    Function_2021ce4(*v9, 6144);
    v9[3] = 0;
    ++v8;
    v6 += 3;
    ++v9;
  }
  while ( v8 < 3 );
  if ( a6 == a5 )
  {
    result = v14;
    v14[15] = 1;
  }
  else
  {
    result = v14;
    v14[15] = 0;
  }
  return result;
}

//----- (02261648) --------------------------------------------------------
int __fastcall Function_2261648(int *a1)
{
  int *v1;
  int v2;
  int result;

  v1 = a1;
  v2 = 0;
  do
  {
    result = Function_2021bd4(*v1);
    ++v2;
    ++v1;
  }
  while ( v2 < 3 );
  return result;
}

//----- (02261660) --------------------------------------------------------
int __fastcall Function_2261660(int *a1, char a2, uint a3, int a4)
{
  uint v4;
  int *v5;
  int v6;
  int v7;
  char v8;
  int *v10;
  char v11;
  uint v12;
  uint v13;
  int v14;
  int v15;
  int v16;

  v4 = 0;
  v10 = a1;
  v5 = a1;
  v11 = a2;
  v12 = a3;
  v14 = a4;
  v15 = 0;
  v16 = -1;
  v6 = 0;
  do
  {
    if ( Function_2021d34(*v5) )
    {
      v7 = Function_2021f74(*v5);
      Function_2021f58(*v5, v7 + 1);
      if ( !v15 && v4 <= v7 + 1 )
      {
        v4 = v7 + 1;
        v16 = v6;
      }
    }
    else
    {
      v16 = v6;
      v15 = 1;
    }
    ++v6;
    ++v5;
  }
  while ( v6 < 3 );
  if ( v16 < 0 )
    ErrorHandler();
  if ( v12 >= 3 )
    v12 = 2;
  if ( v14 == 2 )
  {
    if ( v10[15] == 1 )
      v13 = v12 + 5;
    else
      v13 = v12 + 11;
    v8 = 7;
  }
  else
  {
    if ( v10[15] == 1 )
      v13 = v12 + 2;
    else
      v13 = v12 + 8;
    v8 = v11 + 3;
  }
  Function_2021d6c(v10[v16], v13);
  v10[v16 + 3] = 0;
  Function_2021cac(v10[v16], 1);
  Function_226177c(v10, v16);
  Function_2021f58(v10[v16], 0);
  return Function_2021e90(v10[v16], v8);
}

//----- (02261744) --------------------------------------------------------
int __fastcall Function_2261744(int *a1)
{
  int *v1;
  int v2;
  int *v3;
  int result;
  uint v5;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    result = Function_2021d34(*v3);
    if ( result == 1 )
    {
      v5 = v3[3] + 1;
      v3[3] = v5;
      if ( v5 <= 0x10 )
        result = Function_226177c(v1, v2);
      else
        result = Function_22617d8(v1, v2);
    }
    ++v2;
    ++v3;
  }
  while ( v2 < 3 );
  return result;
}

//----- (0226177C) --------------------------------------------------------
int __fastcall Function_226177c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  long long v5;
  int v6;
  int *v7;
  int v8;
  int v10;
  int v11;
  int v12;

  v2 = a2;
  v3 = a1;
  v4 = 4 * a2;
  v5 = ll_mul((int)(*(uint *)(a1 + 4 * a2 + 12) << 12), -65536LL);
  v6 = FX_Div((v5 + 2048) >> 12, 0x10000);
  v7 = (int *)(v3 + 12 * v2 + 24);
  v8 = v7[1];
  v10 = *v7;
  v11 = v8;
  v12 = v7[2];
  v11 = v8 + v6;
  return Function_2021c50(*(uint **)(v3 + v4), &v10);
}

//----- (022617D8) --------------------------------------------------------
uint __fastcall Function_22617d8(int a1, int a2)
{
  return Function_2021cac(*(uint *)(a1 + 4 * a2), 0);
}

//----- (022617E8) --------------------------------------------------------
uint __fastcall Function_22617e8(uchar *a1, int a2, int a3, int a4, int a5, int a6, uint a7)
{
  int v7;
  uchar *v8;
  int v9;
  ushort *v10;
  int v11;
  int *v12;
  uint v13;
  int v14;
  int v15;
  int v16;
  uchar *v18;
  int v19;
  uint v20;
  ushort *v21;
  int v22;
  char v23;
  short v24;
  int v25;

  v25 = a4;
  v18 = a1;
  v7 = a3;
  v19 = a2;
  v8 = a1;
  v20 = a4;
  v9 = 28;
  do
  {
    *v8++ = 0;
    --v9;
  }
  while ( v9 );
  Function_201a7e8(*(uint **)v19, (int)(a1 + 12), 1, 2, 19, 0x1Cu, 4u, 5, 10);
  Function_201ae78((int)(v18 + 12), 15, 0, 0, 0xE0u, 0x20u);
  v10 = (ushort *)Function_2023790(128, a7);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v19 + 8), 0, v10);
  Function_201d78c((int)(v18 + 12), 0);
  Function_20237bc_FreeMsg((int)v10, v11);
  Function_20070e8(a6, 0x12u, *(uint **)v19, 2u, 0, 0, 0, a7);
  Function_200710c(a6, v20 + 18, *(uint **)v19, 2u, 0, 0, 0, a7);
  Function_2007130(a6, 0x13u, 0, 0, 128, a7);
  Function_201a7a0((int)&v23);
  Function_201a7e8(*(uint **)v19, (int)&v23, 2, 0, 0, 8u, 2u, 5, 256);
  v22 = 256;
  v21 = (ushort *)Function_2023790(128, a7);
  v13 = 0;
  if ( v20 )
  {
    v12 = &dword_2265C9C[32 * a5 + 2];
    v14 = (int)&v12[8 * v20];
    do
    {
      if ( v13 != a5 )
      {
        v15 = *(uint *)(v14 - 32);
        v16 = *(uint *)(v14 - 28);
        Function_2019e2c(*(uint *)v19, 2, (v15 - 1) & 0xFF, (v16 - 1) & 0xFF, 0xAu, 4u, v13);
        Function_201ada4_ClearTextBox((int)&v23, 15);
        *(uint *)(v7 + 24);
        Function_2025ef4(*(ushort **)(v7 + 8), v21);
        Function_201c2ac((int)&v23, v15);
        Function_201c2b0((int)&v23, v16);
        v24 = v22 & 0x7FFF | v24 & 0x8000;
        Function_2002d7c(0, (int)v21, 0);
        Function_201d78c((int)&v23, 0);
        v22 += 16;
      }
      ++v13;
      v14 += 8;
      v7 += 4;
    }
    while ( v13 < v20 );
  }
  Function_20237bc_FreeMsg((int)v21, (int)v12);
  Function_201a8fc((int)&v23);
  *((uint *)v18 + 1) = 0;
  Function_201ff0c(2u, 0);
  return Function_201ff0c(4u, 0);
}

//----- (02261A04) --------------------------------------------------------
uint __fastcall Function_2261a04(int a1)
{
  return Function_201a8fc(a1 + 12);
}

//----- (02261A10) --------------------------------------------------------
int __fastcall Function_2261a10(int a1, int a2)
{
  int v2;

  v2 = a2;
  Function_200dc48(a1 + 12, 0, 1, 4u);
  Function_201ff0c(2u, 1);
  Function_201ff0c(4u, 1);
  return ((int (__fastcall *)(uint))dword_225CB38[21])(*(uint *)(v2 + 1776));
}

//----- (02261A3C) --------------------------------------------------------
BOOL __fastcall Function_2261a3c(int a1, int a2)
{
  return ((int (__fastcall *)(uint))dword_225CB38[42])(*(uint *)(a2 + 1776)) != 1;
}

//----- (02261A54) --------------------------------------------------------
uint __fastcall Function_2261a54(int a1)
{
  int v1;

  v1 = a1;
  Function_200dc9c(a1 + 12, 1);
  Function_201ad10(v1 + 12);
  return Function_201ff0c(4u, 0);
}

//----- (02261A74) --------------------------------------------------------
int __fastcall Function_2261a74(int a1, int a2)
{
  int v2;

  v2 = a2;
  Function_2264190(a2 + 1216, 1);
  Function_2017240(v2 + 1644, 737280);
  return Function_226422c(v2 + 1216, 1);
}

//----- (02261AA4) --------------------------------------------------------
BOOL __fastcall Function_2261aa4(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 4) + 1;
  *(uint *)(a1 + 4) = v1;
  return v1 < 8;
}

//----- (02261AB8) --------------------------------------------------------
int __fastcall Function_2261ab8(int a1, int a2)
{
  return Function_22640c0(a1 + 1216, a2);
}

//----- (02261AC8) --------------------------------------------------------
int __fastcall Function_2261ac8(int result)
{
  *(uint *)(result + 1184) = 0;
  *(uint *)(result + 1188) = 0;
  return result;
}

//----- (02261AD8) --------------------------------------------------------
void Function_2261ad8()
{
  ;
}

//----- (02261ADC) --------------------------------------------------------
int __fastcall Function_2261adc(int a1)
{
  return Function_2264190(a1 + 1216, 5);
}

//----- (02261AEC) --------------------------------------------------------
BOOL __fastcall Function_2261aec(int a1)
{
  return ++*(uint *)(a1 + 1188) >= 0x3Cu && Function_2017204(a1 + 1724, 0x2000) == 1;
}

//----- (02261B1C) --------------------------------------------------------
BOOL __fastcall Function_2261b1c(int a1)
{
  return ((int (__fastcall *)(uint))dword_225CB38[42])(*(uint *)(a1 + 1776)) == 1;
}

//----- (02261B34) --------------------------------------------------------
int __fastcall Function_2261b34(int a1, int a2)
{
  int v2;
  uint *v3;
  uint *v4;
  int result;
  int v6;

  v2 = a2;
  *(ushort *)(a2 + 6) = 0;
  Function_2261c48(a2, 0x7FFF);
  Function_2261c1c(v2, 3640);
  *(uchar *)v2 = 0;
  *(uchar *)(v2 + 1) = 1;
  *(uint *)(v2 + 148) = 819200;
  *(uint *)(v2 + 152) = 123;
  *(uint *)(v2 + 8) = 327680;
  v6 = 0;
  v3 = (uint *)(v2 + 156);
  *v3 = 0;
  v3[1] = -368640;
  *(uint *)(v2 + 164) = v6;
  Function_2261f94(v2, 2500);
  v4 = (uint *)(v2 + 216);
  *v4 = 0;
  v4[1] = -368640;
  *(uint *)(v2 + 224) = v6;
  result = *(uint *)(v2 + 192);
  *(uint *)(v2 + 228) = result;
  return result;
}

//----- (02261BBC) --------------------------------------------------------
int __fastcall Function_2261bbc(uint *a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  *(uchar *)(a2 + 1) = *a1 != 1;
  v3 = ((int (__fastcall *)(int, uint, uint))*(&off_2265B50 + *a1))(a2, a1[2], a1[3]);
  Function_2261c1c(v2, v3);
  *(uint *)(v2 + 8) = Function_2261f3c(v2, *(ushort *)(v2 + 4));
  *(uint *)(v2 + 228) = Function_2261f68(v2, *(ushort *)(v2 + 4));
  return Function_2261c48(v2, (*(ushort *)(v2 + 2) + *(ushort *)(v2 + 6)) & 0xFFFF);
}

//----- (02261C18) --------------------------------------------------------
uchar *__fastcall Function_2261c18(uchar *result, char a2)
{
  *result = a2;
  return result;
}

//----- (02261C1C) --------------------------------------------------------
uint *__fastcall Function_2261c1c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  *(ushort *)(a1 + 4) = a2;
  MTX_Identity33_((uint *)(a1 + 12));
  return MTX_RotX33_(
           (uint *)(v2 + 12),
           SLOWORD(Unknown_20f983c[v3 >> 4]),
           *((short *)Unknown_20f983c + 2 * (v3 >> 4) + 1));
}

//----- (02261C48) --------------------------------------------------------
int __fastcall Function_2261c48(int a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  long long v5;
  long long v6;
  long long v7;
  int v9;
  int v10;
  int v11;

  v2 = (int *)a1;
  v3 = a2;
  *(ushort *)(a1 + 2) = a2;
  MTX_Identity33_((uint *)(a1 + 84));
  MTX_Identity33_(v2 + 12);
  MTX_RotY33_(v2 + 12, SLOWORD(Unknown_20f983c[v3 >> 4]), *((short *)Unknown_20f983c + 2 * (v3 >> 4) + 1));
  MTX_Concat33(v2 + 3, v2 + 12, v2 + 21, v4);
  MTX_MultVec33(&dword_2265B44, v2 + 21, v2 + 30);
  v9 = 0;
  v10 = 0;
  v11 = -v2[2];
  MTX_MultVec33(&v9, v2 + 21, v2 + 33);
  v9 = v2[46] + v2[39];
  v10 = v2[47];
  v11 = v2[41] + 327680;
  MTX_MultVec33(&v9, v2 + 12, &v9);
  VEC_Add(&v9, v2 + 33, v2 + 33);
  v5 = ll_mul(v2[32], v2[35]);
  v6 = ll_mul(v2[30], v2[33]);
  v7 = ll_mul(v2[31], v2[34]);
  v2[36] = (((uint)(v5 + 2048) >> 12) | ((__CFADD__((uint)v5, 2048) + HIDWORD(v5)) << 20))
         + (((uint)(v6 + 2048) >> 12) | ((__CFADD__((uint)v6, 2048) + HIDWORD(v6)) << 20))
         + (((uint)(v7 + 2048) >> 12) | ((__CFADD__((uint)v7, 2048) + HIDWORD(v7)) << 20));
  return MTX_MultVec33(v2 + 39, v2 + 12, v2 + 54);
}

//----- (02261D84) --------------------------------------------------------
int __fastcall Function_2261d84(int a1, uint *a2, int a3, uint *a4)
{
  int v4;
  uint *v5;
  uint *v6;
  int v7;
  int v9;
  int v10;
  int v11;
  long long v12;
  long long v13;
  long long v14;
  long long v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20[3];
  char v21;

  v4 = a1;
  v5 = a2;
  v6 = a4;
  v7 = 0;
  if ( !*(uchar *)a1 )
    return 0;
  Function_2265100(a2, a3, a1 + 120, *(uint *)(a1 + 144), &v21, &v16);
  VEC_Subtract((uint *)(v4 + 132), v5, v20);
  v9 = VEC_Mag(v20);
  if ( v16 >= 0 && v16 <= 4096 )
  {
    if ( v9 > *(uint *)(v4 + 8) )
      return 2;
    if ( *(uchar *)(v4 + 1) == 1 )
      v7 = 1;
    else
      v7 = 2;
  }
  if ( v16 > 0 )
  {
    v10 = *(uint *)(v4 + 148);
    if ( v9 < v10 )
    {
      v11 = (ll_mul(v10 - v9, *(int *)(v4 + 152)) + 2048) >> 12;
      VEC_Normalize(v20, &v17);
      v12 = ll_mul(v17, v11);
      v13 = (uint)v12;
      LODWORD(v12) = 2048;
      *v6 = (v13 + v12) >> 12;
      v14 = ll_mul(v18, v11);
      v15 = (uint)v14;
      LODWORD(v14) = 2048;
      v6[1] = (v15 + v14) >> 12;
      v6[2] = (ll_mul(v19, v11) + 2048) >> 12;
      if ( v9 - v11 > *(uint *)(v4 + 8) )
      {
        v7 = 3;
      }
      else if ( *(uchar *)(v4 + 1) == 1 )
      {
        v7 = 1;
      }
      else
      {
        v7 = 2;
      }
    }
  }
  return v7;
}

//----- (02261EA8) --------------------------------------------------------
int __fastcall Function_2261ea8(uchar *a1, int *a2, int a3, int a4)
{
  uint *v4;
  int *v5;
  int result;
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
  int v17[3];
  int v18;

  v18 = a4;
  v4 = a1;
  v5 = a2;
  if ( !*a1 )
    return 0;
  v7 = a2[1];
  v8 = v4[55];
  if ( v8 >= v7 )
    goto LABEL_10;
  if ( v8 + v4[57] <= v7 )
    goto LABEL_10;
  v14 = v4[54];
  v9 = v4[56];
  v15 = 0;
  v16 = v9;
  v11 = *a2;
  v13 = a2[2];
  v12 = 0;
  VEC_Subtract(&v14, &v11, v17);
  v10 = VEC_Mag(v17);
  if ( v10 >= (int)(v4[51] - s32_div_f(v4[52] * ((v5[1] - v4[55]) >> 12), v4[57] >> 12)) )
LABEL_10:
    result = 0;
  else
    result = 1;
  return result;
}

//----- (02261F3C) --------------------------------------------------------
uint __fastcall Function_2261f3c(int a1, int a2)
{
  int v2;
  uint v3;

  v2 = a1;
  v3 = s32_div_f(360 * a2, 0xFFFF);
  return s32_div_f(*(uint *)(v2 + 172) * (90 - v3), 90) + *(uint *)(v2 + 176);
}

//----- (02261F68) --------------------------------------------------------
uint __fastcall Function_2261f68(int a1, int a2)
{
  int v2;
  uint v3;

  v2 = a1;
  v3 = s32_div_f(360 * a2, 0xFFFF);
  return s32_div_f(*(uint *)(v2 + 196) * v3, 90) + *(uint *)(v2 + 192);
}

//----- (02261F94) --------------------------------------------------------
int __fastcall Function_2261f94(uint *a1, int a2)
{
  uint *v2;
  uint v3;
  int v4;
  int v5;
  long long v6;
  long long v7;
  long long v8;
  long long v9;
  long long v10;
  long long v11;
  long long v12;
  int result;

  v2 = a1;
  v3 = a2;
  a1[42] = a2;
  v4 = a2 >> 31;
  a1[43] = (ll_mul(a2, 122880LL) + 2048) >> 12;
  v2[44] = (ll_mul(__PAIR__(v4, v3), 204800LL) + 2048) >> 12;
  v5 = (ll_mul(__PAIR__(v4, v3), 327680LL) + 2048) >> 12;
  v2[45] = v5;
  v2[46] = 0;
  v6 = ll_mul(__PAIR__(v4, v3), 225280LL);
  v7 = (uint)v6;
  LODWORD(v6) = 2048;
  v2[47] = (v7 + v6) >> 12;
  LODWORD(v7) = 614400;
  v8 = ll_mul(__PAIR__(v4, v3), v7);
  v9 = (uint)v8;
  LODWORD(v8) = 2048;
  v2[48] = (v9 + v8) >> 12;
  LODWORD(v9) = 245760;
  v10 = ll_mul(__PAIR__(v4, v3), v9);
  v11 = (uint)v10;
  LODWORD(v10) = 2048;
  v2[49] = (v11 + v10) >> 12;
  v2[50] = v5;
  LODWORD(v11) = 491520;
  v2[51] = (ll_mul(__PAIR__(v4, v3), v11) + 2048) >> 12;
  v2[52] = v2[51] - v2[50];
  v12 = ll_mul(__PAIR__(v4, v3), 6144LL) + 2048;
  result = HIDWORD(v12) << 20;
  v2[53] = v12 >> 12;
  return result;
}

//----- (022620D8) --------------------------------------------------------
int __fastcall Function_22620d8(int result, short a2)
{
  *(ushort *)(result + 6) = a2;
  return result;
}

//----- (022620DC) --------------------------------------------------------
uint *__fastcall Function_22620dc(int a1, int a2)
{
  uint *result;

  result = (uint *)(a1 + 164);
  *result = a2;
  return result;
}

//----- (022620E4) --------------------------------------------------------
int Function_22620e4()
{
  return 3640;
}

//----- (022620EC) --------------------------------------------------------
int Function_22620ec()
{
  return 0x3FFF;
}

//----- (022620F4) --------------------------------------------------------
int __fastcall Function_22620f4(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  u32_div_f(a2 - 750, 50);
  v3 = s32_div_f(25486 * v2, 50);
  if ( v3 > 12743 )
  {
    s32_div_f(v3, 12743);
    v3 = 12743 - v4;
  }
  return (v3 + 3640) & 0xFFFF;
}

//----- (02262134) --------------------------------------------------------
int __fastcall Function_2262134(int a1, ushort *a2)
{
  uint *v2;
  ushort *v3;
  int result;

  v2 = (uint *)a1;
  v3 = a2;
  *a2 = *(ushort *)a1;
  a2[1] = *(ushort *)(a1 + 2);
  a2[2] = *(uint *)(a1 + 4);
  a2[3] = *(uint *)(a1 + 8);
  a2[4] = *(uint *)(a1 + 12);
  a2[8] = (ll_mul(*(int *)(a1 + 16), 655LL) + 2048) >> 12;
  v3[5] = v2[5] >> 12;
  v3[6] = v2[6] >> 12;
  v3[7] = v2[7] >> 12;
  *((uchar *)v3 + 18) = v2[8];
  result = v2[9];
  *((uchar *)v3 + 19) = result;
  return result;
}

//----- (0226218C) --------------------------------------------------------
int __fastcall Function_226218c(ushort *a1, int a2)
{
  ushort *v2;
  uint *v3;
  int result;

  v2 = a1;
  v3 = (uint *)a2;
  *(ushort *)a2 = *a1;
  *(ushort *)(a2 + 2) = a1[1];
  *(uint *)(a2 + 4) = (short)a1[2];
  *(uint *)(a2 + 8) = (short)a1[3];
  *(uint *)(a2 + 12) = (short)a1[4];
  *(uint *)(a2 + 16) = FX_Div((short)a1[8], 655);
  v3[5] = (short)v2[5] << 12;
  v3[6] = (short)v2[6] << 12;
  v3[7] = (short)v2[7] << 12;
  result = *((uchar *)v2 + 19);
  v3[9] = result;
  return result;
}

//----- (022621DC) --------------------------------------------------------
uint __fastcall Function_22621dc(int a1, int *a2, uint a3)
{
  int v3;
  int *v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  uint *v9;
  int v10;
  int v11;
  int v12;
  uint *v13;
  int v14;
  uint *v15;
  uint result;
  int v17;
  int v18;
  int v19;
  int v20;
  int *v21;
  uint *v22;
  int v23;
  int v24;
  int v25;
  uint *v26;
  int v27;
  uint *v28;
  uint v29;

  v3 = a1;
  v4 = a2;
  v29 = a3;
  v5 = 0;
  v6 = a1;
  do
  {
    if ( !*(uchar *)(v6 + 76) )
    {
      v7 = 68 * v5;
      v8 = v4;
      v9 = (uint *)(a1 + 68 * v5 + 80);
      v10 = 5;
      do
      {
        v11 = *v8;
        v12 = v8[1];
        v8 += 2;
        *v9 = v11;
        v9[1] = v12;
        v9 += 2;
        --v10;
      }
      while ( v10 );
      v13 = v4 + 5;
      *(uchar *)(v3 + v7 + 76) = v29;
      v14 = v13[1];
      v15 = (uint *)(v3 + v7 + 120);
      *v15 = *v13;
      v15[1] = v14;
      *(uint *)(v3 + v7 + 128) = v13[2];
      *(ushort *)(v3 + v7 + 78) = 0;
      *(uint *)(v3 + v7 + 136) = 0;
      return Function_2264620(v3 + 6836, v3 + 76 + v7, *(uint *)(v3 + 16), *(uint *)(v3 + 20));
    }
    ++v5;
    v6 += 68;
  }
  while ( v5 < 96 );
  result = v29;
  if ( v29 == 1 )
  {
    v17 = 0;
    v18 = v3;
    while ( 1 )
    {
      v19 = *(uchar *)(v18 + 76);
      if ( v19 == 2 || v19 == 5 )
        break;
      ++v17;
      v18 += 68;
      if ( v17 >= 96 )
        return ErrorHandler();
    }
    v20 = 68 * v17;
    Function_226464c(v3 + 6836, v3 + 76 + 68 * v17);
    Function_22622f8(v3 + 76 + v20);
    v21 = v4;
    v22 = (uint *)(v3 + v20 + 80);
    v23 = 5;
    do
    {
      v24 = *v21;
      v25 = v21[1];
      v21 += 2;
      *v22 = v24;
      v22[1] = v25;
      v22 += 2;
      --v23;
    }
    while ( v23 );
    v26 = v4 + 5;
    *(uchar *)(v3 + 76 + v20) = 1;
    v27 = v26[1];
    v28 = (uint *)(v3 + v20 + 120);
    *v28 = *v26;
    v28[1] = v27;
    *(uint *)(v3 + v20 + 128) = v26[2];
    *(ushort *)(v3 + v20 + 78) = 0;
    *(uint *)(v3 + v20 + 136) = 0;
    result = Function_2264620(v3 + 6836, v3 + 76 + v20, *(uint *)(v3 + 16), *(uint *)(v3 + 20));
  }
  return result;
}

//----- (022622EC) --------------------------------------------------------
int __fastcall Function_22622ec(int a1, int a2, short a3, int a4)
{
  int result;

  result = 1;
  *(uchar *)(a2 + 1) = 1;
  *(ushort *)(a2 + 6) = a3;
  *(uint *)(a2 + 36) = a4;
  return result;
}

//----- (022622F8) --------------------------------------------------------
int *__fastcall Function_22622f8(int *a1)
{
  return Call_FillMemWithValue(a1, 0, 0x44u);
}

//----- (02262304) --------------------------------------------------------
int __fastcall Function_2262304(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  v4 = a1 + 76;
  do
  {
    result = *(uchar *)(v3 + 76);
    if ( ((result + 255) & 0xFFu) > 1 )
    {
      if ( result == 5 )
      {
        result = Function_22627b4(v4, v1);
      }
      else if ( result == 3 )
      {
        result = Function_22628ec(v4, v1);
      }
    }
    else
    {
      result = Function_2262354(v1, v4);
    }
    ++v2;
    v3 += 68;
    v4 += 68;
  }
  while ( v2 < 96 );
  return result;
}

//----- (02262354) --------------------------------------------------------
int __fastcall Function_2262354(int result, uchar *a2, int a3, int a4)
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
  char v17;
  char v18;
  int v19;

  v19 = a4;
  v4 = (int)a2;
  v5 = *a2;
  v6 = result;
  if ( v5 == 1 || v5 == 2 )
  {
    v16 = *((uint *)a2 + 12);
    Function_2262620(a2, &v18);
    if ( *(uchar *)v4 == 1 )
      v7 = Function_2261d84(v6 + 6604, (uint *)(v4 + 44), (int)&v18, &v17);
    else
      v7 = 0;
    Function_226294c(v4, &v18);
    if ( v7 == 3 || v7 == 1 )
      Function_226294c(v4, &v17);
    ++*(ushort *)(v4 + 2);
    if ( v7 == 1 )
    {
      v10 = *(uint *)(v6 + 24) + Function_22614f8((uint *)v6);
      *(uint *)(v6 + 24) = v10;
      if ( v10 > 99999 )
        *(uint *)(v6 + 24) = 99999;
      v11 = *(uint *)(v6 + 28);
      if ( v11 )
      {
        if ( v11 == 1 )
        {
          Function_2005748(0x56Au);
          Function_2005748(0x56Cu);
        }
        else
        {
          Function_2005748(0x56Au);
          Function_2005748(0x56Du);
        }
      }
      else
      {
        Function_2005748(0x56Au);
        Function_2005748(0x56Bu);
      }
      Function_22628dc(v4, v6);
      v12 = *(uint *)(v6 + 28);
      v13 = *(uint *)v6;
      Function_226158c(v6 + 7736, *(uint *)(v6 + 20));
      v14 = *(uint *)(v6 + 28);
      if ( v14 < 99 )
        *(uint *)(v6 + 28) = v14 + 1;
      if ( *(uint *)(v6 + 28) == 3 )
        result = Function_2265700(v6 + 34348, v6 + 6836);
      else
        result = Function_22657a8(v6 + 34348, v6 + 6836);
    }
    else
    {
      v15 = 0;
      if ( Function_2261ea8((uchar *)(v6 + 6604), (int *)(v4 + 44), v8, v9) == 1 )
      {
        v15 = 1;
        if ( v5 == 1 )
          Function_2005748(0x722u);
        result = Function_22626bc(v4, v6, 1);
      }
      else if ( *(uint *)(v4 + 48) > -204800 )
      {
        result = Function_22628b8(v4);
        if ( result == 1 )
        {
          v15 = 1;
          VEC_Subtract((uint *)(v4 + 44), &v18, (uint *)(v4 + 44));
          result = Function_22626e0(v4, v6);
        }
      }
      else if ( Function_2262888(v4) )
      {
        result = 1024;
        if ( *(uint *)(v4 + 48) <= 1024 )
        {
          v15 = 1;
          result = Function_22622ec(v6, v4, 0, *(uint *)(v6 + 28));
        }
      }
      else
      {
        v15 = 1;
        if ( v16 > -204800 )
          result = Function_22626bc(v4, v6, 0);
        else
          result = Function_22622ec(v6, v4, 0, *(uint *)(v6 + 28));
      }
      if ( v15 == 1 && v5 == 1 )
      {
        *(uint *)(v6 + 28) = 0;
        result = Function_2265788(v6 + 34348);
      }
    }
  }
  return result;
}

//----- (02262524) --------------------------------------------------------
int __fastcall Function_2262524(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  v2 = 0;
  v3 = a1 + 76;
  do
  {
    result = Function_2262574(v3, v1);
    ++v2;
    v3 += 68;
  }
  while ( v2 < 96 );
  return result;
}

//----- (02262540) --------------------------------------------------------
int __fastcall Function_2262540(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  v4 = a1 + 76;
  do
  {
    if ( *(uchar *)(v3 + 77) == 1 )
      *(uchar *)(v3 + 76) = 2;
    result = Function_2262574(v4, v1);
    ++v2;
    v3 += 68;
    v4 += 68;
  }
  while ( v2 < 96 );
  return result;
}

//----- (02262574) --------------------------------------------------------
int __fastcall Function_2262574(int a1, int a2)
{
  int v2;
  int result;
  int v4;

  v2 = a1;
  result = *(uchar *)(a1 + 1);
  v4 = a2;
  if ( result )
  {
    if ( *(uchar *)v2 != 3 || *(ushort *)(v2 + 6) != 1 )
      Function_22622f8((int *)v2);
    else
      *(uchar *)v2 = 4;
    result = Function_226464c(v4 + 6836, v2);
  }
  return result;
}

//----- (022625A8) --------------------------------------------------------
int __fastcall Function_22625a8(int result)
{
  int v1;

  v1 = 0;
  do
  {
    if ( *(uchar *)(result + 76) == 1 )
      *(uchar *)(result + 76) = 2;
    ++v1;
    result += 68;
  }
  while ( v1 < 96 );
  return result;
}

//----- (022625C8) --------------------------------------------------------
int __fastcall Function_22625c8(int a1)
{
  int v1;
  int v2;

  v1 = 0;
  do
  {
    v2 = *(uchar *)(a1 + 76);
    if ( v2 == 1 || v2 == 2 || v2 == 5 || v2 == 3 )
      return 1;
    ++v1;
    a1 += 68;
  }
  while ( v1 < 96 );
  return 0;
}

//----- (022625F0) --------------------------------------------------------
int __fastcall Function_22625f0(int a1)
{
  int result;

  result = *(uint *)(a1 + 20) - (ull)((ll_mul(*(ushort *)(a1 + 2) << 12, 1648LL) + 2048) >> 12);
  if ( result < 0 )
    result = 0;
  return result;
}

//----- (02262620) --------------------------------------------------------
int __fastcall Function_2262620(int a1, uint *a2)
{
  int v2;
  uint *v3;
  int v4;
  int v5;
  long long v6;
  long long v7;
  long long v8;
  long long v9;
  long long v10;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = Function_22625f0(a1);
  v5 = v4;
  v6 = ll_mul(*(int *)(v2 + 8), v4);
  v7 = (uint)v6;
  LODWORD(v6) = 2048;
  *v3 = (v7 + v6) >> 12;
  v8 = ll_mul(*(int *)(v2 + 12), v5);
  v9 = (uint)v8;
  LODWORD(v8) = 2048;
  v3[1] = (v9 + v8) >> 12;
  v3[1] += (ll_mul(*(ushort *)(v2 + 2) << 12, -4916LL) + 2048) >> 12;
  v10 = ll_mul(*(int *)(v2 + 16), v5) + 2048;
  result = HIDWORD(v10) << 20;
  v3[2] = v10 >> 12;
  return result;
}

//----- (022626BC) --------------------------------------------------------
int __fastcall Function_22626bc(int a1, int a2)
{
  return Function_22626e0(a1, a2);
}

//----- (022626E0) --------------------------------------------------------
int __fastcall Function_22626e0(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  char v7;
  int v8;
  char v9;
  int v10;
  int v11;
  int v12;
  uint v13;
  uint v14;
  int result;
  char v16;
  int v17;

  v17 = a4;
  v5 = a1;
  v6 = a4;
  if ( a3 )
  {
    *(uint *)(a1 + 8) = -*(uint *)(a1 + 8);
    *(uint *)(a1 + 16) = -*(uint *)(a1 + 16);
    if ( a5 )
    {
      v7 = Function_201d35c();
      v8 = *(uint *)(v5 + 16);
      v9 = v7;
      if ( v8 >= 0 )
        v10 = *(uint *)(v5 + 16);
      else
        v10 = -v8;
      v11 = *(uint *)(v5 + 8);
      if ( v11 >= 0 )
        v12 = *(uint *)(v5 + 8);
      else
        v12 = -v11;
      if ( v12 > v10 )
      {
        v14 = ((uint)((v11 << 12) + 2048) >> 12) | ((__CFADD__(v11 << 12, 2048)
                                                           + (uint)((ull)v11 >> 20)) << 20);
        if ( (v9 & 1) == 1 )
          *(uint *)(v5 + 16) = -v14;
        else
          *(uint *)(v5 + 16) = v14;
      }
      else
      {
        v13 = ((uint)((v8 << 12) + 2048) >> 12) | ((__CFADD__(v8 << 12, 2048)
                                                          + (uint)((ull)v8 >> 20)) << 20);
        if ( (v9 & 1) == 1 )
          *(uint *)(v5 + 8) = -v13;
        else
          *(uint *)(v5 + 8) = v13;
      }
    }
  }
  *(uint *)(v5 + 20) = (ll_mul(*(int *)(v5 + 20), v6) + 2048) >> 12;
  *(ushort *)(v5 + 2) = 0;
  *(uchar *)v5 = 5;
  Function_2262620(v5, &v16);
  Function_226294c(v5, &v16);
  result = *(ushort *)(v5 + 2) + 1;
  *(ushort *)(v5 + 2) = result;
  return result;
}

//----- (022627B4) --------------------------------------------------------
int __fastcall Function_22627b4(int result, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  char v10;
  int v11;

  v11 = a4;
  v4 = result;
  v5 = a2;
  v6 = 0;
  if ( *(uchar *)result == 5 )
  {
    v7 = *(uint *)(result + 48);
    Function_2262620(result, &v10);
    Function_226294c(v4, &v10);
    ++*(ushort *)(v4 + 2);
    if ( Function_2261ea8((uchar *)(v5 + 6604), (int *)(v4 + 44), v8, v9) == 1 )
    {
      Function_22626bc(v4, v5);
    }
    else if ( *(uint *)(v4 + 48) > -204800 )
    {
      if ( Function_22628b8(v4) == 1 )
      {
        VEC_Subtract((uint *)(v4 + 44), &v10, (uint *)(v4 + 44));
        Function_22626e0(v4, v5, 1, 1024, 0);
      }
    }
    else
    {
      if ( Function_2262888(v4) )
      {
        if ( *(uint *)(v4 + 48) <= -409600 )
          v6 = 1;
      }
      else if ( v7 > -204800 )
      {
        Function_22626bc(v4, v5);
      }
      else
      {
        v6 = 1;
      }
      if ( *(uint *)(v4 + 20) <= 0x2000 )
        v6 = 1;
    }
    result = 4096;
    if ( *(uint *)(v4 + 20) <= 4096 )
      v6 = 1;
    if ( v6 == 1 )
      result = Function_22622ec(v5, v4, 0, *(uint *)(v5 + 28));
  }
  return result;
}

//----- (02262888) --------------------------------------------------------
BOOL __fastcall Function_2262888(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 64);
  return v1 >= 770048 && v1 <= 983040;
}

//----- (022628A4) --------------------------------------------------------
BOOL __fastcall Function_22628a4(int a1)
{
  return *(uint *)(a1 + 64) <= 491520;
}

//----- (022628B8) --------------------------------------------------------
int __fastcall Function_22628b8(int a1)
{
  if ( *(uint *)(a1 + 64) < 983040 )
  {
    if ( !*(uint *)(a1 + 60) )
      *(uint *)(a1 + 60) = 1;
  }
  else if ( *(uint *)(a1 + 60) == 1 )
  {
    return 1;
  }
  return 0;
}

//----- (022628DC) --------------------------------------------------------
int __fastcall Function_22628dc(int result, int a2)
{
  *(uchar *)result = 3;
  *(ushort *)(result + 56) = 8;
  *(ushort *)(result + 58) = *(uint *)(a2 + 28);
  return result;
}

//----- (022628EC) --------------------------------------------------------
int __fastcall Function_22628ec(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;
  char v6;
  char v7;

  v2 = a2;
  v3 = a1;
  Function_2262620(a1, &v7);
  v4 = Function_2261d84(v2 + 6604, (uint *)(v3 + 44), (int)&v7, &v6);
  Function_226294c(v3, &v7);
  if ( v4 == 3 || v4 == 1 )
    Function_226294c(v3, &v6);
  ++*(ushort *)(v3 + 2);
  result = (short)--*(ushort *)(v3 + 56);
  if ( result <= 0 )
    result = Function_22622ec(v2, v3, 1, *(ushort *)(v3 + 58));
  return result;
}

//----- (0226294C) --------------------------------------------------------
int __fastcall Function_226294c(uint *a1, uint *a2, int a3, int a4)
{
  uint *v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;

  v9 = a4;
  v4 = a1;
  VEC_Add(a1 + 11, a2, a1 + 11);
  v7 = 0;
  v6 = v4[11];
  v8 = v4[13];
  result = VEC_Mag(&v6);
  v4[16] = result;
  return result;
}

//----- (02262974) --------------------------------------------------------
int Function_2262974()
{
  int result;

  if ( word_21BF6DE )
    result = Function_2262b70();
  else
    result = Function_2262990();
  return result;
}

//----- (02262990) --------------------------------------------------------
int __fastcall Function_2262990(uint *a1)
{
  uint *v1;
  int v2;
  int result;
  int v4;
  int v5;
  int v6;
  int v7;
  long long v8;
  int v9;
  int v10;
  char v11;
  short v12;
  char v13;
  short v14;
  short v15;
  short v16;
  int v17;
  int v18;
  int v19;
  int v20;
  char v21;
  int v22;
  BOOL v23;

  v1 = a1;
  v2 = 0;
  if ( a1[8] )
  {
    if ( !Function_2262d3c(a1 + 8, &v13) )
      ErrorHandler();
    if ( !Function_2262d58(v1 + 8, &v11) )
      ErrorHandler();
    v4 = Function_2262d7c(v1 + 8);
    v5 = v4;
    if ( v4 >= 2 )
    {
      v15 = v1[5];
      v16 = 0;
      v17 = (int)(s32_div_f(*(short *)&v13 - *(short *)&v11, v4) << 16) >> 4;
      v19 = (int)(s32_div_f(v14 - v12, v5) << 16) >> 4;
      v18 = 0;
      v6 = VEC_Mag(&v17);
      if ( v6 >= 0x8000 )
      {
        if ( v6 > 123392 )
        {
          VEC_Normalize(&v17, &v17);
          v7 = (ll_mul(v17, 123392LL) + 2048) >> 12;
          LODWORD(v8) = v19;
          v17 = v7;
          HIDWORD(v8) = v19 >> 31;
          v19 = (ll_mul(v8, 123392LL) + 2048) >> 12;
        }
      }
      else if ( v6 )
      {
        VEC_Normalize(&v17, &v17);
        v17 = (((ll)v17 << 15) + 2048) >> 12;
        v19 = (((ll)v19 << 15) + 2048) >> 12;
      }
      else
      {
        v2 = 1;
      }
      if ( !v2 )
      {
        v18 = 155648;
        v20 = VEC_Mag(&v17);
        v20 = (ll_mul(v20, 2458LL) + 2048) >> 12;
        VEC_Normalize(&v17, &v17);
        Function_22642f8(*(short *)&v11, v12, &v21);
        v22 = 0;
        v9 = v1[4];
        Function_2264354();
        v10 = v1[4];
        Function_2264354();
        v23 = v1[7] >= 5;
        Function_22621dc((int)v1, (int *)&v15, 1u);
        Function_2005748(0x650u);
      }
    }
    else
    {
      v2 = 1;
    }
    if ( v2 == 1 )
      Function_2264d80(v1 + 8531, *(short *)&v11, v12);
    Function_2262d90(v1);
    result = 0;
    v1[18] = 0;
  }
  else
  {
    result = a1[18] + 1;
    v1[18] = result;
  }
  return result;
}

//----- (02262B70) --------------------------------------------------------
int __fastcall Function_2262b70(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  uint v6;
  short *v7;
  short *v8;
  int v9;
  short v10;
  short *v11;
  short v12;
  short v13;
  int v14;

  v14 = a4;
  v4 = a1;
  if ( !*(uint *)(a1 + 32) && Function_2262c60() == 1 )
  {
    *(uint *)(v4 + 32) = 1;
    Function_2264bac(v4 + 34116);
    Function_22653cc(v4 + 8616);
  }
  result = *(uint *)(v4 + 32);
  if ( result == 1 )
  {
    v6 = *(ushort *)(v4 + 34540);
    if ( v6 == 1 )
    {
      v12 = *(ushort *)(v4 + 34542);
      v7 = &v12 - 2;
      v13 = *(ushort *)(v4 + 34544);
      *v7 = v12;
      v7[1] = v13;
      result = Function_2262cbc(v4 + 32, *((uint *)&v12 - 1));
    }
    else
    {
      if ( v6 < 2 )
      {
        v11 = &v12 - 2;
        v12 = word_21BF6D8;
        v13 = word_21BF6DA;
        *(&v12 - 2) = word_21BF6D8;
      }
      else
      {
        v12 = *(ushort *)(v4 + 34542);
        v8 = &v12 - 2;
        v13 = *(ushort *)(v4 + 34544);
        *v8 = v12;
        v8[1] = v13;
        Function_2262cbc(v4 + 32, *((uint *)&v12 - 1));
        v9 = v4 + 8 * (*(ushort *)(v4 + 34540) - 1);
        v12 = *(ushort *)(v9 + 34542);
        v10 = *(ushort *)(v9 + 34544);
        v11 = &v12 - 2;
        v13 = v10;
        *(&v12 - 2) = v12;
      }
      v11[1] = v13;
      result = Function_2262cbc(v4 + 32, *((uint *)&v12 - 1));
    }
  }
  return result;
}

//----- (02262C60) --------------------------------------------------------
BOOL __fastcall Function_2262c60(int a1)
{
  BOOL result;

  if ( *(uint *)(a1 + 72) >= 2u )
    result = (int)FX_Sqrt(((128 - (ushort)word_21BF6D8) * (128 - (ushort)word_21BF6D8)
                                + (-96 - (ushort)word_21BF6DA) * (-96 - (ushort)word_21BF6DA)) << 12) >> 12 <= 286;
  else
    result = 0;
  return result;
}

//----- (02262CA4) --------------------------------------------------------
int __fastcall Function_2262ca4(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Call_FillMemWithValue((int *)(a1 + 4), 0, 0x20u);
  result = 0;
  *(ushort *)(v1 + 36) = 0;
  *(ushort *)(v1 + 38) = 0;
  return result;
}

//----- (02262CBC) --------------------------------------------------------
int Function_2262cbc()
{
  return Function_2262cbe();
}

//----- (02262CBE) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02262D0C) --------------------------------------------------------
int __fastcall Function_2262d0c(int a1, ushort *a2)
{
  int v2;
  int v4;

  v2 = *(ushort *)(a1 + 36);
  if ( *(ushort *)(a1 + 38) == v2 )
    return 0;
  v4 = a1 + 4 * v2;
  *a2 = *(ushort *)(v4 + 4);
  a2[1] = *(ushort *)(v4 + 6);
  *(ushort *)(a1 + 36) = (((uint)*(ushort *)(a1 + 36) + 1) >> 31)
                      + __ROR4__(
                          ((*(ushort *)(a1 + 36) + 1) << 29)
                        - (((uint)*(ushort *)(a1 + 36) + 1) >> 31),
                          29);
  return 1;
}

//----- (02262D3C) --------------------------------------------------------
int __fastcall Function_2262d3c(int a1, ushort *a2)
{
  int v2;
  int v4;

  v2 = *(ushort *)(a1 + 36);
  if ( *(ushort *)(a1 + 38) == v2 )
    return 0;
  v4 = a1 + 4 * v2;
  *a2 = *(ushort *)(v4 + 4);
  a2[1] = *(ushort *)(v4 + 6);
  return 1;
}

//----- (02262D58) --------------------------------------------------------
int __fastcall Function_2262d58(int a1, ushort *a2)
{
  int v2;
  int v4;
  int v5;

  v2 = *(ushort *)(a1 + 38);
  if ( v2 == *(ushort *)(a1 + 36) )
    return 0;
  v4 = v2 - 1;
  if ( v2 - 1 < 0 )
    v4 = v2 + 7;
  v5 = a1 + 4 * v4;
  *a2 = *(ushort *)(v5 + 4);
  a2[1] = *(ushort *)(v5 + 6);
  return 1;
}

//----- (02262D7C) --------------------------------------------------------
int __fastcall Function_2262d7c(int a1)
{
  uint v1;
  uint v2;
  int result;

  v1 = *(ushort *)(a1 + 38);
  v2 = *(ushort *)(a1 + 36);
  if ( v2 <= v1 )
    result = v1 - v2;
  else
    result = 8 - v2 + v1;
  return result;
}

//----- (02262D90) --------------------------------------------------------
int __fastcall Function_2262d90(int a1)
{
  int v1;

  v1 = a1;
  *(uint *)(a1 + 32) = 0;
  Function_2262ca4(a1 + 32);
  return Function_2264bf8(v1 + 34116);
}

//----- (02262DB0) --------------------------------------------------------
int __fastcall Function_2262db0(int a1, int a2, int a3)
{
  *(uint *)(a1 + 72) = 16;
  return Function_2262f50(a2, a3, 0);
}

//----- (02262DC4) --------------------------------------------------------
int __fastcall Function_2262dc4(uint *a1, int a2, int a3, int a4, ushort a5)
{
  int v5;
  int v6;
  uint *v7;
  uint *v8;
  uint *v9;
  uint *v10;
  uint *v11;
  uint *v12;
  int v13;
  int v14;
  int result;
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

  v5 = a3;
  v6 = a2;
  v7 = a1;
  Function_2262f50(a2, a3, a4);
  Function_2262f50(v6, v5, a5);
  v8 = v7 + 6;
  *v8 = v22;
  v8[1] = v23;
  v9 = v7 + 8;
  *v9 = v24;
  v9[1] = v25;
  v10 = v7 + 10;
  *v10 = v26;
  v10[1] = v27;
  *v7 = v22;
  v7[1] = v23;
  v11 = v7 + 2;
  *v11 = v24;
  v11[1] = v25;
  v12 = v7 + 4;
  *v12 = v26;
  v12[1] = v27;
  v7[12] = v16 - v22;
  v7[14] = v18 - v24;
  v7[16] = v20 - v26;
  v7[17] = v21 - v27;
  v13 = v17 + 0xFFFF - v23;
  if ( __OFSUB__(v17 - v23, v13) ^ 1 )
    v7[13] = v17 - v23;
  else
    v7[13] = v13;
  v14 = v19 + 0xFFFF - v25;
  if ( __OFSUB__(v19 - v25, v14) ^ 1 )
    v7[15] = v19 - v25;
  else
    v7[15] = v14;
  result = 0;
  v7[18] = 0;
  return result;
}

//----- (02262E64) --------------------------------------------------------
int __fastcall Function_2262e64(uint *a1)
{
  int v1;

  v1 = a1[18];
  if ( v1 >= 16 )
    return 1;
  a1[18] = v1 + 1;
  *a1 = a1[6] + (v1 + 1) * a1[12] / 16;
  a1[1] = a1[7] + a1[13] * a1[18] / 16;
  a1[2] = a1[8] + a1[14] * a1[18] / 16;
  a1[3] = a1[9] + a1[15] * a1[18] / 16;
  a1[4] = a1[10] + a1[16] * a1[18] / 16;
  a1[5] = a1[11] + a1[17] * a1[18] / 16;
  return 0;
}

//----- (02262EFC) --------------------------------------------------------
int Function_2262efc()
{
  return Function_2262f04();
}

//----- (02262F04) --------------------------------------------------------
int __fastcall Function_2262f04(int a1, uint *a2)
{
  uint *v2;
  int v3;

  v2 = a2;
  v3 = a1;
  Function_22620d8(a1 + 6604, a2[1]);
  Function_2265274(v3 + 6836, v2[2]);
  Function_226527c(v3 + 6836, v2[3] & 0xFFFF);
  Function_22620dc(v3 + 6604, v2[4]);
  return Function_2261f94((uint *)(v3 + 6604), v2[5]);
}

//----- (02262F50) --------------------------------------------------------
int __fastcall Function_2262f50(uint *a1, uchar *a2, uint a3, uint *a4)
{
  uint *v4;
  uint v5;
  uchar *v6;
  uint *v7;
  int *v8;
  int v9;
  int v10;
  uint *v11;
  int v12;
  int v13;
  int *v14;
  int v15;
  int v16;
  int result;

  v4 = a1;
  v5 = a3;
  v6 = a2;
  v7 = a4;
  if ( a3 >= *a1 )
    ErrorHandler();
  v8 = (int *)(v4[1] + 24 * v5);
  v9 = *v8;
  v10 = v8[1];
  v8 += 2;
  *v7 = v9;
  v7[1] = v10;
  v11 = v7 + 2;
  v12 = *v8;
  v13 = v8[1];
  v8 += 2;
  *v11 = v12;
  v11[1] = v13;
  v14 = v7 + 4;
  v15 = v8[1];
  *v14 = *v8;
  v14[1] = v15;
  v7[1] &= 0xFFFFu;
  v7[3] &= 0xFFFFu;
  if ( *v6 )
  {
    v16 = 5 - v5;
    if ( (int)(5 - v5) < 0 )
      v16 = 0;
    v7[5] = *(uint *)(v4[1] + 24 * v16 + 20);
  }
  result = (uchar)v6[1];
  if ( v6[1] )
  {
    result = -v7[1];
    v7[1] = result;
  }
  return result;
}

//----- (02262FB4) --------------------------------------------------------
uint __fastcall Function_2262fb4(int *a1, uint *a2, uint a3)
{
  uint *v3;
  uint v4;
  int *v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  int v11;
  int *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  uint v17;

  v3 = a2;
  v4 = a3;
  v5 = a1;
  Call_FillMemWithValue(a1, 0, 0x40u);
  v8 = LoadFromNARC_8(171, v4, v6, v7);
  *v5 = (int)Function_2009a4c(v3[82], (int)v8, 0x15u, 0, 120, 2, v4);
  v5[1] = (int)Function_2009b04(v3[83], (int)v8, 0x14u, 0, 120, 2, 2, v4);
  v5[2] = (int)Function_2009bc4(v3[84], (int)v8, 0x16u, 0, 120, 2u, v4);
  v5[3] = (int)Function_2009bc4(v3[85], (int)v8, 0x17u, 0, 120, 3u, v4);
  if ( !Function_200a450((int *)*v5) )
    ErrorHandler();
  if ( !Function_200a640((int *)v5[1]) )
    ErrorHandler();
  Function_2009d4c((int *)*v5);
  Function_2009d4c((int *)v5[1]);
  Function_20093b4((int)(v5 + 4), 120, 120, 120, 120, -1, -1, 0, 0, v3[82], v3[83], v3[84], v3[85], 0, 0);
  v11 = v3[7];
  v12 = v5 + 4;
  v13 = 0x80000;
  v14 = 2588672;
  v15 = 0;
  v16 = 2;
  v17 = v4;
  v9 = Function_2021b90(&v11);
  v5[13] = v9;
  Function_2021cac(v9, 0);
  return Call_FS_CloseFile(v8);
}

//----- (022630DC) --------------------------------------------------------
int *__fastcall Function_22630dc(int *a1, int **a2)
{
  int *v2;
  int **v3;

  v2 = a1;
  v3 = a2;
  Function_2021bd4(a1[13]);
  Function_200a4e4((int *)*v2);
  Function_200a6dc((int *)v2[1]);
  Function_2009d68(v3[82], (uint **)*v2);
  Function_2009d68(v3[83], (uint **)v2[1]);
  Function_2009d68(v3[84], (uint **)v2[2]);
  Function_2009d68(v3[85], (uint **)v2[3]);
  return Call_FillMemWithValue(v2, 0, 0x40u);
}

//----- (02263130) --------------------------------------------------------
uint __fastcall Function_2263130(int a1)
{
  *(uchar *)(a1 + 56) = 1;
  *(uchar *)(a1 + 58) = 0;
  *(uchar *)(a1 + 57) = 0;
  return Function_2021cac(*(uint *)(a1 + 52), 1);
}

//----- (02263150) --------------------------------------------------------
int __fastcall Function_2263150(int a1, int a2)
{
  int v2;
  int v3;
  uint v4;
  uint v5;
  int v6;
  int result;

  v2 = a1;
  v3 = a2;
  switch ( *(uchar *)(a1 + 58) )
  {
    case 0:
      Function_2021e50(*(uint *)(a1 + 52), 0);
      Function_2264bac(v3 + 34116);
      Function_2264bd8(v3 + 34116, 128, 177);
      *(uchar *)(v2 + 59) = 0;
      ++*(uchar *)(v2 + 58);
      goto LABEL_17;
    case 1:
      Function_2021e2c(*(uint *)(a1 + 52), 0x2000);
      v4 = Function_2021e74(*(uint *)(v2 + 52));
      v5 = v4;
      if ( v4 == 10 )
      {
        if ( !*(uchar *)(v2 + 59) )
        {
          Function_22613f8(v3, 128, 96, 128, 0x40u, 2);
          Function_2005748(0x650u);
          *(uchar *)(v2 + 59) = 1;
        }
      }
      else if ( v4 == 11 )
      {
        if ( (uchar)++*(uchar *)(v2 + 57) < 2u )
        {
          *(uchar *)(v2 + 58) = 2;
          *(uint *)(v2 + 60) = 16;
        }
        else
        {
          *(uchar *)(v2 + 58) = 3;
        }
        Function_2264bf8(v3 + 34116);
      }
      Function_2264bd8(v3 + 34116, 128, *((short *)dword_2265B7C + v5));
      goto LABEL_17;
    case 2:
      v6 = *(uint *)(a1 + 60) - 1;
      *(uint *)(v2 + 60) = v6;
      if ( v6 <= 0 )
        *(uchar *)(v2 + 58) = 0;
      goto LABEL_17;
    case 3:
      if ( Function_22625c8(a2) )
        goto LABEL_17;
      Function_2021cac(*(uint *)(v2 + 52), 0);
      result = 1;
      break;
    default:
LABEL_17:
      Function_2262304(v3);
      Function_2262524(v3);
      result = 0;
      break;
  }
  return result;
}

//----- (0226327C) --------------------------------------------------------
int __fastcall Function_226327c(int result)
{
  uchar *v1;
  int v2;

  v1 = (uchar *)result;
  v2 = 24;
  do
  {
    *v1++ = 0;
    --v2;
  }
  while ( v2 );
  *(uint *)(result + 20) = 0xFFFF;
  return result;
}

//----- (02263294) --------------------------------------------------------
int __fastcall Function_2263294(int result, uint a2, int a3)
{
  int v3;

  *(uint *)(result + 4 * a3) = a2;
  *(uint *)(result + 16) |= 1 << a3;
  if ( a2 )
  {
    v3 = *(uint *)(result + 20);
    if ( v3 == 0xFFFF )
    {
      *(uint *)(result + 20) = a3;
    }
    else if ( *(uint *)(result + 4 * v3) < a2 )
    {
      *(uint *)(result + 20) = a3;
    }
  }
  return result;
}

//----- (022632C8) --------------------------------------------------------
int __fastcall Function_22632c8(int result)
{
  *(uint *)(result + 16) = 0;
  *(uint *)(result + 20) = 0xFFFF;
  return result;
}

//----- (022632D8) --------------------------------------------------------
int __fastcall Function_22632d8(int a1)
{
  return *(uint *)(a1 + 20);
}

//----- (022632DC) --------------------------------------------------------
BOOL __fastcall Function_22632dc(int a1, uint a2)
{
  uint v2;
  int v3;

  v2 = 0;
  v3 = 0;
  do
  {
    if ( (1 << v3) & *(uint *)(a1 + 16) )
      ++v2;
    ++v3;
  }
  while ( v3 < 4 );
  return a2 <= v2;
}

//----- (02263308) --------------------------------------------------------
char *Function_2263308()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_2265C7C;
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

//----- (02263328) --------------------------------------------------------
int *Function_2263328()
{
  int *result;

  Function_201ff0c(1u, 1);
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 2;
  GFX_CONTROL &= 0xCFFDu;
  GFX_CONTROL = GFX_CONTROL & 0xCFFF | 0x10;
  GFX_CONTROL &= 0xCFFBu;
  GFX_CONTROL = GFX_CONTROL & 0xCFFF | 8;
  GFX_CONTROL = GFX_CONTROL & 0xCFFF | 0x20;
  G3X_SetFog(0, 0, 0, 0);
  G3X_SetClearColor(27482, 0, 0x7FFF, 63, 0);
  result = &GFX_VIEWPORT;
  GFX_VIEWPORT = -1073807360;
  return result;
}

//----- (022633B4) --------------------------------------------------------
int __fastcall Function_22633b4(int a1, int a2, int a3, uint a4)
{
  int v4;
  int v5;
  int v6;
  uint v7;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  *(uint *)(a1 + 24) = Function_2024220(a4, 0, 1, 0, 4, (void (*)(void))Function_2263328);
  return Function_2263c24(v4, v5, v6, v7);
}

//----- (022633EC) --------------------------------------------------------
uint __fastcall Function_22633ec(int a1)
{
  int v1;

  v1 = a1;
  Function_2263cc0();
  return Function_20242c4(*(uint *)(v1 + 24));
}

//----- (022633FC) --------------------------------------------------------
int __fastcall Function_22633fc(int a1, uint a2)
{
  int v2;
  uint v3;
  int v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  int result;

  v2 = a1;
  v3 = a2;
  Function_20182cc((uint *)(a1 + 34508), a2, 32);
  Function_2263308();
  Function_22633b4(v2 + 6836, *(uint *)(v2 + 16), *(uint *)(v2 + 20), v3);
  Function_226376c(v2 + 6836, v3);
  Function_2263990(v2 + 6836, v3);
  Function_2263bcc(v2 + 6836, v3);
  v6 = LoadFromNARC_8(158, v3, v4, v5);
  Function_2263a74(v2 + 6836, v6, v3);
  Function_2264e48(v2 + 7252, v2 + 6836, v6, *(uint *)(v2 + 16), *(uint *)(v2 + 20), v3, v2 + 34508);
  Function_2263df8(v2 + 8052, v6, v3, v2 + 34508);
  Function_22643ec(v2 + 6836, v6, v3);
  Function_2264b40(v2 + 6836, v2 + 34116, *(uint *)(v2 + 20), v3);
  Function_2264c0c(v2 + 6836, v2 + 34124, *(uint *)(v2 + 20), v3);
  Function_2263cd8(v2 + 6836, v6, *(uint *)(v2 + 20), v3);
  Function_22617e8(
    (uchar *)(v2 + 7992),
    v2 + 6836,
    *(uint *)(v2 + 34684),
    *(uint *)(v2 + 16),
    *(uint *)(v2 + 20),
    (int)v6,
    v3);
  v7 = *(uint *)(v2 + 16);
  v8 = *(uint *)(v2 + 20);
  Function_2261ac8(v2 + 6836);
  Function_2261520(v2 + 7736, v2 + 6836, *(uint *)(v2 + 16), *(uint *)(v2 + 20), v3);
  Function_22652a4(v2 + 8616, *(uint *)(v2 + 20) & 0xFF);
  Function_2265478(v2 + 34348, v2 + 6836, v6, v3);
  Call_FS_CloseFile(v6);
  result = ((int (__fastcall *)(uint, uint))dword_225CAD4[0])(*(uint *)(v2 + 6864), v3);
  *(uint *)(v2 + 8612) = result;
  return result;
}

//----- (02263560) --------------------------------------------------------
short *__fastcall Function_2263560(int a1)
{
  int v1;
  int v2;
  short *result;

  v1 = a1;
  Function_2265688(a1 + 34348, a1 + 6836);
  Function_2261574(v1 + 7736);
  v2 = *(uint *)(v1 + 16);
  Function_2261ad8();
  Function_2261a04(v1 + 7992);
  Function_2263df4(v1 + 6836);
  Function_2264c78(v1 + 6836, v1 + 34124);
  Function_2264ba0(v1 + 34116);
  Function_2264564(v1 + 6836);
  Function_2263ff4(v1 + 8052, v1 + 34508);
  Function_2264f68(v1 + 7252, v1 + 6836, v1 + 34508);
  Function_2263b78(v1 + 6836);
  ((void (__fastcall *)(uint))dword_225CB38[0])(*(uint *)(v1 + 8612));
  Function_2263954(v1 + 6836);
  Function_2263a3c(v1 + 6836);
  Function_2263c04(v1 + 6836);
  Function_22633ec(v1 + 6836);
  REG_BLDCNT = 0;
  result = &REG_BLDCNT_SUB;
  REG_BLDCNT_SUB = 0;
  return result;
}

//----- (02263640) --------------------------------------------------------
int __fastcall Function_2263640(uint *a1, int a2)
{
  uint *v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_2264044(a2 + 1216, a1 + 1651, *a1);
  Function_22640a4(v3 + 1216, v2 + 1651, *v2);
  Function_2264bc0(v3 + 27280);
  Function_226369c(v2, v3);
  Function_22652c0(v3 + 1780, v3);
  return Function_2265820(v3 + 27512);
}

//----- (0226369C) --------------------------------------------------------
int __fastcall Function_226369c(int a1, int a2)
{
  int v2;
  int v3;
  int v5;
  int v6;
  int v7;

  v2 = a1;
  v3 = a2;
  Function_2264c90(a2 + 27288);
  Function_2261598(v3 + 900);
  Call_G3X_Reset();
  Function_2263cd0(v3);
  Function_20af51c(0, 0, -4096, 0);
  Function_20af558(0, 0x7FFF);
  Function_20af56c(0x7FFF, 0x7FFF, 0);
  Function_20af590(0x7FFF, 0x7FFF, 0);
  Function_20b275c(17, 0, 0);
  Function_2264fa0(v3 + 416);
  v7 = 1;
  Function_20b275c(18, (int)&v7, 1);
  Function_20b275c(17, 0, 0);
  Function_2264134(v3 + 1216, v2 + 6604);
  v6 = 1;
  Function_20b275c(18, (int)&v6, 1);
  Function_20b275c(17, 0, 0);
  Function_2264684(v3, *(uint *)(v2 + 16));
  v5 = 1;
  Function_20b275c(18, (int)&v5, 1);
  Function_20241bc(0, 0);
  return Function_20219f8(*(uint *)(v3 + 28));
}

//----- (0226376C) --------------------------------------------------------
int __fastcall Function_226376c(int *a1, uint a2)
{
  uint v2;
  uint **v3;
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

  v2 = a2;
  v3 = (uint **)a1;
  *a1 = Function_2018340(a2);
  v47 = 1;
  v48 = 0;
  v49 = 0;
  v50 = 1;
  SetGraphicsModes(&v47);
  v40 = 0;
  v41 = 0;
  v42 = 2048;
  v43 = 0;
  v44 = 983041;
  v45 = 0;
  v46 = 0;
  Function_20183c4(*v3, 1u, &v40, 0);
  Function_2019690(1u, 32, 0, v2);
  Function_2019ebc(*v3, 1u);
  v33 = 0;
  v34 = 0;
  v35 = 2048;
  v36 = 0;
  v37 = 17694721;
  v38 = 256;
  v39 = 0;
  Function_20183c4(*v3, 2u, &v33, 0);
  Function_2019690(2u, 32, 0, v2);
  Function_2019ebc(*v3, 2u);
  v26 = 0;
  v27 = 0;
  v28 = 2048;
  v29 = 0;
  v30 = 1703937;
  v31 = 0;
  v32 = 0;
  Function_20183c4(*v3, 4u, &v26, 0);
  Function_2019690(4u, 32, 0, v2);
  Function_2019ebc(*v3, 4u);
  v19 = 0;
  v20 = 0;
  v21 = 2048;
  v22 = 0;
  v23 = 1769473;
  v24 = 256;
  v25 = 0;
  Function_20183c4(*v3, 5u, &v19, 0);
  Function_2019690(5u, 32, 0, v2);
  Function_2019ebc(*v3, 5u);
  v12 = 0;
  v13 = 0;
  v14 = 2048;
  v15 = 0;
  v16 = 1835009;
  v17 = 512;
  v18 = 0;
  Function_20183c4(*v3, 6u, &v12, 0);
  Function_2019690(6u, 32, 0, v2);
  Function_2019ebc(*v3, 6u);
  v5 = 0;
  v6 = 0;
  v7 = 2048;
  v8 = 0;
  v9 = 1900545;
  v10 = 768;
  v11 = 0;
  Function_20183c4(*v3, 7u, &v5, 0);
  Function_2019690(7u, 32, 0, v2);
  Function_2019ebc(*v3, 7u);
  Function_201ff0c(1u, 1);
  Function_201ff0c(2u, 0);
  Function_201ff0c(4u, 1);
  Function_201ff0c(8u, 0);
  Function_201ff0c(0x10u, 1);
  Function_201ff74(1u, 1);
  Function_201ff74(2u, 1);
  Function_201ff74(4u, 1);
  Function_201ff74(8u, 1);
  Function_201ff74(0x10u, 1);
  LoadFromNARC_PlFont2(0, 160, v2);
  return Function_200daa4(*v3, 1u, 1, 4, 0, v2);
}

//----- (02263954) --------------------------------------------------------
uint __fastcall Function_2263954(int *a1)
{
  int *v1;

  v1 = a1;
  Function_2019044(*a1, 1);
  Function_2019044(*v1, 2);
  Function_2019044(*v1, 4);
  Function_2019044(*v1, 5);
  Function_2019044(*v1, 6);
  Function_2019044(*v1, 7);
  return free(*v1);
}

//----- (02263990) --------------------------------------------------------
int __fastcall Function_2263990(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  int result;
  int v11;
  int v12;
  int v13;
  int v14;

  v2 = a1;
  v3 = a2;
  Function_20a7944();
  Function_200a784(0, 126, 0, 31, 0, 0x7Eu, 0, 0x1Fu, v3);
  v11 = 16;
  v12 = 0x20000;
  v13 = 0x4000;
  v14 = v3;
  Function_201e88c(&v11, 2097168, 2097168);
  Function_201f834(16, v3);
  Function_201e994();
  Function_201f8e4();
  Function_200966c(1, 2097168, v4, v5);
  Function_2009704(1);
  *(uint *)(v2 + 28) = Function_20095c4(128, v2 + 32, v3, v6);
  Function_200964c(v2 + 32, 0, 0x200000, v7);
  v8 = 0;
  v9 = v2;
  do
  {
    *(uint *)(v9 + 328) = Function_2009714(16, v8, v3);
    v8 = (int *)((char *)v8 + 1);
    v9 += 4;
  }
  while ( (int)v8 < 4 );
  result = Function_2012744(8, v3);
  *(uint *)(v2 + 396) = result;
  return result;
}

//----- (02263A3C) --------------------------------------------------------
int *__fastcall Function_2263a3c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  Function_20127bc(*(uint *)(a1 + 396));
  Function_2021964(*(int **)(v1 + 28));
  v2 = 0;
  do
  {
    Function_2009754(*(int **)(v1 + 328));
    ++v2;
    v1 += 4;
  }
  while ( v2 < 4 );
  Function_201e958();
  Function_201f8b4();
  return Function_200a878();
}

//----- (02263A74) --------------------------------------------------------
int __fastcall Function_2263a74(int a1, int a2, uint a3)
{
  uint v3;
  int v4;
  int v5;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  *(uint *)(a1 + 380) = Function_2009a4c(*(uint *)(a1 + 328), a2, 2u, 0, 200, 1, a3);
  *(uint *)(v4 + 384) = Function_2009b04(*(uint *)(v4 + 332), v5, 3u, 0, 200, 1, 8, v3);
  *(uint *)(v4 + 388) = Function_2009bc4(*(uint *)(v4 + 336), v5, 1u, 0, 200, 2u, v3);
  *(uint *)(v4 + 392) = Function_2009bc4(*(uint *)(v4 + 340), v5, 0, 0, 200, 3u, v3);
  if ( !Function_200a450(*(int **)(v4 + 380)) )
    ErrorHandler();
  if ( !Function_200a640(*(int **)(v4 + 384)) )
    ErrorHandler();
  Function_2009d4c(*(int **)(v4 + 380));
  Function_2009d4c(*(int **)(v4 + 384));
  return Function_20093b4(
           v4 + 344,
           200,
           200,
           200,
           200,
           -1,
           -1,
           0,
           0,
           *(uint *)(v4 + 328),
           *(uint *)(v4 + 332),
           *(uint *)(v4 + 336),
           *(uint *)(v4 + 340),
           0,
           0);
}

//----- (02263B78) --------------------------------------------------------
int __fastcall Function_2263b78(int a1)
{
  int v1;

  v1 = a1;
  Function_200a4e4(*(int **)(a1 + 380));
  Function_200a6dc(*(int **)(v1 + 384));
  Function_2009d68(*(int **)(v1 + 328), *(uint ***)(v1 + 380));
  Function_2009d68(*(int **)(v1 + 332), *(uint ***)(v1 + 384));
  Function_2009d68(*(int **)(v1 + 336), *(uint ***)(v1 + 388));
  return Function_2009d68(*(int **)(v1 + 340), *(uint ***)(v1 + 392));
}

//----- (02263BCC) --------------------------------------------------------
int __fastcall Function_2263bcc(uint *a1, uint a2)
{
  uint v2;
  uint *v3;
  int result;

  v2 = a2;
  v3 = a1;
  a1[1] = Function_200b358(a2);
  v3[2] = LoadFromMsgNARC(0, 26, 407, v2);
  v3[3] = Function_2023790(128, v2);
  result = Function_2023790(128, v2);
  v3[4] = result;
  return result;
}

//----- (02263C04) --------------------------------------------------------
uint __fastcall Function_2263c04(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  Function_20237bc_FreeMsg(*(uint *)(a1 + 16), a2);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 12), v3);
  Function_200b190(*(ushort **)(v2 + 8));
  return Function_200b3f0(*(uint **)(v2 + 4), v4);
}

//----- (02263C24) --------------------------------------------------------
int *__fastcall Function_2263c24(int *a1, int a2, int a3, uint a4)
{
  int *v4;
  int v5;
  int v6;
  short v8;
  short v9;
  short v10;
  int v11;
  int v12;
  int v13;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  a1[100] = Function_20203ac(a4);
  v4[101] = 0;
  v4[102] = 0;
  v4[103] = 0;
  v8 = -3822;
  v9 = *((ushort *)&dword_2265C54[2 * v5] + v6);
  v10 = 0;
  Function_20206d0(v4 + 101, 1937408, &v8, 4004, 0, 1, v4[100]);
  v12 = 4096;
  v11 = 0;
  v13 = 0;
  Function_2020680(&v11, (uint *)v4[100]);
  Function_20203d4(v4[100]);
  return Function_20206bc(819200, 4096000, v4[100]);
}

//----- (02263CC0) --------------------------------------------------------
uint __fastcall Function_2263cc0(int a1)
{
  return Call_free5(*(uint *)(a1 + 400));
}

//----- (02263CD0) --------------------------------------------------------
int *Function_2263cd0()
{
  return Function_20203ec();
}

//----- (02263CD8) --------------------------------------------------------
int __fastcall Function_2263cd8(uint **a1, int a2, int a3, int a4)
{
  uint **v4;
  int v5;
  int v6;
  int v7;

  v4 = a1;
  v5 = a4;
  v6 = a2;
  v7 = a3;
  Function_20070e8(a2, 0xCu, *a1, 4u, 0, 0, 0, a4);
  Function_200710c(v6, 0xEu, *v4, 7u, 0, 0, 0, v5);
  Function_200710c(v6, 0xFu, *v4, 6u, 0, 0, 0, v5);
  Function_200710c(v6, 0x10u, *v4, 5u, 0, 0, 0, v5);
  Function_200710c(v6, 0x11u, *v4, 4u, 0, 0, 0, v5);
  Function_2007130(v6, 0xDu, 4u, 0, 384, v5);
  Function_2019e2c((int)*v4, 7, 0, 0, 0x20u, 0x20u, *((uchar *)&dword_2265AE4 + v7));
  Function_2019e2c((int)*v4, 6, 0, 0, 0x20u, 0x20u, 2 * v7 + 2);
  LOBYTE(v5) = 2 * v7 + 1;
  Function_2019e2c((int)*v4, 5, 0, 0, 0x20u, 0x20u, v5);
  Function_2019e2c((int)*v4, 4, 0, 0, 0x20u, 0x20u, v5);
  Function_2019448(*v4, 4u);
  Function_2019448(*v4, 5u);
  Function_2019448(*v4, 6u);
  return Function_2019448(*v4, 7u);
}

//----- (02263DF4) --------------------------------------------------------
void Function_2263df4()
{
  ;
}

//----- (02263DF8) --------------------------------------------------------
uint __fastcall Function_2263df8(int *a1, int a2, int a3, int (***a4)(void))
{
  short *v4;
  int v5;
  int *v6;
  int *v7;
  uint v8;
  uint v9;
  int v10;
  int v11;
  int v12;
  int *v13;
  int v14;
  int v15;
  uint result;
  uint v17;
  int v18;
  int v19;
  int (***v20)(void);
  int v21;
  const char *v22;
  int *v23;
  void **v24;
  int *v25;

  v19 = a3;
  v18 = a2;
  v17 = (uint)a1;
  v20 = a4;
  Call_FillMemWithValue(a1, 0, 0x230u);
  v4 = &word_2265AFC;
  v5 = 0;
  v6 = (int *)(v17 + 360);
  v7 = (int *)v17;
  do
  {
    Function_20170d8(v6, v18, (ushort)*v4, v19);
    Function_2017258(v7, (int)v6);
    Function_2017348((int)v7, 0);
    Function_2017350(v7, 0, -1187840, 0);
    Function_201736c(v7, 6144, 6144, 6144);
    ++v5;
    ++v4;
    v6 += 4;
    v7 += 30;
  }
  while ( v5 < 3 );
  v21 = 0;
  v25 = dword_2265B14;
  v24 = &off_2266644;
  v8 = v17;
  v23 = (int *)(v17 + 408);
  v22 = "polySurface2";
  do
  {
    Function_2017164(v23, v17 + 360 + 16 * *(uchar *)v24, v18, *(ushort *)v25, v19, v20);
    Function_2017240((int)v23, 0);
    v9 = 0;
    v10 = *(uint *)(v17 + 16 * *(uchar *)v24 + 368);
    if ( v10 )
      v11 = v10 + 64;
    else
      v11 = 0;
    while ( 1 )
    {
      if ( v11 == 0 )
        v12 = 0;
      else
        v12 = v11 && v9 < *(uchar *)(v11 + 1) ? v11
                                                        + *(ushort *)(v11 + 6)
                                                        + *(ushort *)(v11 + *(ushort *)(v11 + 6) + 2)
                                                        + 16 * v9 : 0;
      if ( !v12 )
        break;
      Function_20ae5cc(*(uint *)(v8 + 416), v9++);
    }
    v13 = (int *)v22;
    v14 = 0;
    do
    {
      if ( v11 )
        v15 = Function_20b3aa4(v11, v13);
      else
        v15 = -1;
      if ( v15 != -1 )
        Function_20ae590(*(uint *)(v8 + 416), v15);
      ++v14;
      v13 += 4;
    }
    while ( v14 < 15 );
    v8 += 20;
    v25 = (int *)((char *)v25 + 2);
    v24 = (void **)((char *)v24 + 1);
    v23 += 5;
    v22 += 240;
    ++v21;
  }
  while ( v21 < 6 );
  Function_2017164((int *)(v17 + 532), v17 + 360, v18, 0x20u, v19, v20);
  Function_201727c(v17, v17 + 532);
  *(ushort *)(v17 + 556) = 4;
  *(ushort *)(v17 + 558) = 0;
  Function_226422c(v17, 0);
  Function_201727c(v17 + 120, v17 + 488);
  Function_2017240(v17 + 488, 0);
  Function_2017348(v17 + 120, 1);
  result = v17;
  *(ushort *)(v17 + 528) = 4;
  return result;
}

//----- (02263FF4) --------------------------------------------------------
int *__fastcall Function_2263ff4(int *a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  int *v5;
  int v6;
  int *v7;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  v5 = a1 + 90;
  do
  {
    Function_2017110(v5);
    ++v4;
    v5 += 4;
  }
  while ( v4 < 3 );
  v6 = 0;
  v7 = v2 + 102;
  do
  {
    Function_20171a0(v7, v3);
    ++v6;
    v7 += 5;
  }
  while ( v6 < 6 );
  Function_20171a0(v2 + 133, v3);
  return Call_FillMemWithValue(v2, 0, 0x230u);
}

//----- (02264044) --------------------------------------------------------
int __fastcall Function_2264044(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_22640c0(a1, a2);
  Function_22640ec(v3, v4);
  result = Function_2264110(v3, v4);
  if ( !v5 )
  {
LABEL_4:
    Function_2264190(v3, 1);
    Function_226414c(v3, *(ushort *)(v4 + 4));
    return Function_226422c(v3, 1);
  }
  if ( v5 != 1 )
  {
    if ( v5 != 2 )
      return result;
    goto LABEL_4;
  }
  Function_2264190(v3, 3);
  Function_226422c(v3, 0);
  return Function_2264214(v3, 4096);
}

//----- (022640A4) --------------------------------------------------------
int __fastcall Function_22640a4(int a1)
{
  int v1;

  v1 = a1;
  Function_20171cc(a1 + 408, 4096);
  return Function_2264270(v1);
}

//----- (022640C0) --------------------------------------------------------
uint *__fastcall Function_22640c0(uint *a1, int *a2)
{
  uint *v2;
  int *v3;
  int v4;
  uint *result;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    result = Function_2017350(v2, v3[54], v3[55], v3[56]);
    ++v4;
    v2 += 30;
  }
  while ( v4 < 3 );
  return result;
}

//----- (022640EC) --------------------------------------------------------
short *__fastcall Function_22640ec(int a1, int a2)
{
  int v2;
  int v3;
  short v4;
  short *result;

  v2 = a1;
  v3 = 0;
  v4 = *(ushort *)(a2 + 2);
  do
  {
    result = Function_2017388(v2, v4, 1);
    ++v3;
    v2 += 120;
  }
  while ( v3 < 3 );
  return result;
}

//----- (02264110) --------------------------------------------------------
uint *__fastcall Function_2264110(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  uint *result;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    result = Function_201736c(v2, *(uint *)(v3 + 212), *(uint *)(v3 + 212), *(uint *)(v3 + 212));
    ++v4;
    v2 += 30;
  }
  while ( v4 < 3 );
  return result;
}

//----- (02264134) --------------------------------------------------------
int *__fastcall Function_2264134(int a1)
{
  int v1;
  int v2;
  int *result;

  v1 = a1;
  v2 = 0;
  do
  {
    result = Function_2017294(v1);
    ++v2;
    v1 += 120;
  }
  while ( v2 < 3 );
  return result;
}

//----- (0226414C) --------------------------------------------------------
int *__fastcall Function_226414c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  uint v6;

  v2 = a1;
  v3 = a2;
  v4 = Function_201d2a4(0xF222u);
  v5 = u32_div_f(90 * (v3 - 3640), v4);
  v6 = s32_div_f(737280 * v5, 90);
  return Function_2017240(v2 + 428, 737280 - v6);
}

//----- (02264190) --------------------------------------------------------
uint __fastcall Function_2264190(uint result, uint a2)
{
  uint v2;
  uint v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = result;
  if ( a2 >= 6 )
    result = ErrorHandler();
  v4 = *(ushort *)(v3 + 528);
  if ( v4 != v2 )
  {
    Function_2017288((int *)(v3 + 120 * *((uchar *)&off_2266644 + v4)), v3 + 408 + 20 * v4);
    v5 = 120 * *((uchar *)&off_2266644 + v2);
    Function_201727c(v3 + v5, v3 + 408 + 20 * v2);
    Function_2017240(v3 + 408 + 20 * v2, 0);
    Function_2017348(v3 + 120 * *((uchar *)&off_2266644 + *(ushort *)(v3 + 528)), 0);
    Function_2017348(v3 + v5, 1);
    result = 528;
    *(ushort *)(v3 + 528) = v2;
  }
  return result;
}

//----- (02264214) --------------------------------------------------------
int __fastcall Function_2264214(int a1, int a2)
{
  return Function_2017204(a1 + 408 + 20 * *(ushort *)(a1 + 528), a2);
}

//----- (0226422C) --------------------------------------------------------
uint __fastcall Function_226422c(uint result, int a2)
{
  short v2;
  uint v3;

  v2 = a2;
  v3 = result;
  if ( *(ushort *)(result + 530) != a2 )
  {
    if ( a2 == 1 )
      Function_201727c(result, result + 408);
    else
      Function_2017288((int *)result, result + 408);
    result = 530;
    *(ushort *)(v3 + 530) = v2;
  }
  return result;
}

//----- (0226425C) --------------------------------------------------------
int __fastcall Function_226425c(int result, short a2)
{
  *(ushort *)(result + 558) = a2;
  return result;
}

//----- (02264268) --------------------------------------------------------
int __fastcall Function_2264268(int result, short a2)
{
  *(ushort *)(result + 556) = a2;
  return result;
}

//----- (02264270) --------------------------------------------------------
int *__fastcall Function_2264270(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  if ( *(ushort *)(a1 + 558) == 1 )
  {
    if ( *(uint *)(a1 + 552) + 0x2000 >= 163840 )
      *(uint *)(a1 + 552) = 4096;
    else
      *(uint *)(a1 + 552) += 0x2000;
  }
  else
  {
    v2 = *(ushort *)(a1 + 556);
    if ( v2 == 4 )
      v3 = 0;
    else
      v3 = v2 + 1;
    v4 = *(uint *)(v1 + 552);
    v5 = *((uchar *)&dword_2265B00[2] + 2 * v3 + 2) << 12;
    if ( v4 >= v5 )
    {
      if ( v4 + 0x2000 >= *((uchar *)&dword_2265B00[2] + 2 * v3 + 3) << 12 )
        *(uint *)(v1 + 552) = v5;
      else
        *(uint *)(v1 + 552) = v4 + 0x2000;
    }
    else
    {
      *(uint *)(v1 + 552) = v5;
    }
  }
  return Function_2017240(v1 + 532, *(uint *)(v1 + 552));
}

//----- (022642F8) --------------------------------------------------------
int __fastcall Function_22642f8(int a1, int a2, uint *a3)
{
  int result;

  *a3 = 2400 * (255 - a1) - 307200;
  result = -921600 - 2400 * a2;
  a3[2] = result;
  return result;
}

//----- (02264324) --------------------------------------------------------
uint __fastcall Function_2264324(uint *a1, ushort *a2)
{
  uint *v2;
  ushort *v3;
  uint result;

  v2 = a1;
  v3 = a2;
  *a2 = 255 - s32_div_f(*a1 + 307200, 2400);
  result = s32_div_f(-921600 - v2[2], 2400);
  v3[1] = result;
  return result;
}

//----- (02264354) --------------------------------------------------------
int __fastcall Function_2264354(int *a1, uint *a2, int a3, int a4)
{
  int *v4;
  uint *v5;
  int v6;
  int v7;
  char v9;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  MTX_Identity33_(&v9);
  MTX_RotY33_(
    &v9,
    SLOWORD(Unknown_20f983c[(int)*((ushort *)&dword_2265C34[2 * v7] + v6) >> 4]),
    *((short *)Unknown_20f983c + 2 * ((int)*((ushort *)&dword_2265C34[2 * v7] + v6) >> 4) + 1));
  return MTX_MultVec33(v4, (int *)&v9, v5);
}

//----- (0226439C) --------------------------------------------------------
int __fastcall Function_226439c(int *a1, uint *a2, int a3, int a4)
{
  int *v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  char v11;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  MTX_Identity33_(&v11);
  MTX_RotY33_(
    &v11,
    SLOWORD(Unknown_20f983c[(int)*((ushort *)&dword_2265C34[2 * v7] + v6) >> 4]),
    *((short *)Unknown_20f983c + 2 * ((int)*((ushort *)&dword_2265C34[2 * v7] + v6) >> 4) + 1));
  MTX_Inverse33((int *)&v11, (int *)&v11, v8, v9);
  return MTX_MultVec33(v4, (int *)&v11, v5);
}

//----- (022643EC) --------------------------------------------------------
int __fastcall Function_22643ec(int a1, int a2, uint a3)
{
  int v3;
  const char *v4;
  uint v5;
  int *v6;
  int v7;
  int v8;
  int result;
  int v10;
  int v11;

  v3 = a1;
  v11 = 0;
  v4 = ")*+,-";
  v10 = a2;
  v5 = a3;
  v6 = (int *)(a1 + 1788);
  do
  {
    Function_20170d8(v6, v10, *(uchar *)v4++, v5);
    v6 += 4;
    ++v11;
  }
  while ( v11 < 5 );
  Function_20170d8((int *)(v3 + 1868), v10, 0x2Eu, v5);
  Function_20b2d8c(*(uint *)(v3 + 1876), 0, 2031616);
  *(uint *)(v3 + 1884) = Function_2009a4c(*(uint *)(v3 + 328), v10, 7u, 0, 100, 2, v5);
  *(uint *)(v3 + 1888) = Function_2009b04(*(uint *)(v3 + 332), v10, 4u, 0, 100, 2, 4, v5);
  *(uint *)(v3 + 1892) = Function_2009bc4(*(uint *)(v3 + 336), v10, 6u, 0, 100, 2u, v5);
  *(uint *)(v3 + 1896) = Function_2009bc4(*(uint *)(v3 + 340), v10, 5u, 0, 100, 3u, v5);
  if ( !Function_200a450(*(int **)(v3 + 1884)) )
    ErrorHandler();
  if ( !Function_200a640(*(int **)(v3 + 1888)) )
    ErrorHandler();
  Function_2009d4c(*(int **)(v3 + 1884));
  Function_2009d4c(*(int **)(v3 + 1888));
  Function_20093b4(
    v3 + 1900,
    100,
    100,
    100,
    100,
    -1,
    -1,
    0,
    0,
    *(uint *)(v3 + 328),
    *(uint *)(v3 + 332),
    *(uint *)(v3 + 336),
    *(uint *)(v3 + 340),
    0,
    0);
  v7 = 0;
  v8 = v3 + 1936;
  do
  {
    Function_22646bc(v3, v8, v5);
    result = 264;
    ++v7;
    v8 += 264;
  }
  while ( v7 < 96 );
  return result;
}

//----- (02264564) --------------------------------------------------------
int *__fastcall Function_2264564(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int *v5;

  v1 = a1;
  v2 = 0;
  v3 = a1 + 1936;
  do
  {
    Function_2264728(v1, v3);
    ++v2;
    v3 += 264;
  }
  while ( v2 < 96 );
  Function_200a4e4(*(int **)(v1 + 1884));
  Function_200a6dc(*(int **)(v1 + 1888));
  Function_2009d68(*(int **)(v1 + 328), *(uint ***)(v1 + 1884));
  Function_2009d68(*(int **)(v1 + 332), *(uint ***)(v1 + 1888));
  Function_2009d68(*(int **)(v1 + 336), *(uint ***)(v1 + 1892));
  Function_2009d68(*(int **)(v1 + 340), *(uint ***)(v1 + 1896));
  v4 = 0;
  v5 = (int *)(v1 + 1788);
  do
  {
    Function_2017110(v5);
    ++v4;
    v5 += 4;
  }
  while ( v4 < 5 );
  Function_2017110((int *)(v1 + 1868));
  Call_FillMemWithValue((int *)(v1 + 1788), 0, 0x94u);
  return Call_FillMemWithValue((int *)(v1 + 1936), 0, 0x6300u);
}

//----- (02264620) --------------------------------------------------------
int __fastcall Function_2264620(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int result;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  v8 = Function_2264948();
  if ( *(ushort *)(v4 + 4) == v7 )
    result = Function_2264740(v5, v8, v4, v6);
  else
    result = Function_226477c(v5, v8, v4);
  return result;
}

//----- (0226464C) --------------------------------------------------------
uint __fastcall Function_226464c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = 0;
  v3 = a1;
  do
  {
    if ( *(uint *)(v3 + 2184) == a2 )
      return Function_2264924(a1 + 1936 + 264 * v2);
    ++v2;
    v3 += 264;
  }
  while ( v2 < 96 );
  return ErrorHandler();
}

//----- (02264684) --------------------------------------------------------
int __fastcall Function_2264684(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;
  int v7;

  v2 = a1;
  v7 = a2;
  v3 = 0;
  v4 = a1;
  v5 = a1 + 1936;
  do
  {
    if ( *(uint *)(v4 + 2184) )
      Function_22647a0(v5, v2, v7);
    result = 264;
    ++v3;
    v4 += 264;
    v5 += 264;
  }
  while ( v3 < 96 );
  return result;
}

//----- (022646BC) --------------------------------------------------------
int __fastcall Function_22646bc(int a1, int *a2, int a3)
{
  int v3;
  int *v4;
  int v5;
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

  v3 = a1;
  v4 = a2;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v7 = *(uint *)(a1 + 28);
  v18 = a3;
  v8 = a1 + 1900;
  v12 = 4096;
  v13 = 4096;
  v14 = 4096;
  v16 = 32;
  v17 = 2;
  v5 = Function_2021aa0((uint **)&v7);
  *v4 = v5;
  Function_2021cac(v5, 0);
  Function_2017258(v4 + 31, v3 + 1868);
  return Function_2017348((int)(v4 + 31), 0);
}

//----- (02264728) --------------------------------------------------------
int *__fastcall Function_2264728(int a1, int *a2)
{
  int *v2;

  v2 = a2;
  Function_2021bd4(*a2);
  return Call_FillMemWithValue(v2, 0, 0x108u);
}

//----- (02264740) --------------------------------------------------------
uint __fastcall Function_2264740(int a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;

  v4 = (uint *)a2;
  v5 = a3;
  *(uint *)(a2 + 248) = a3;
  *(uint *)(a2 + 244) = 1;
  *(ushort *)(a2 + 260) = 0;
  v6 = a4;
  Function_2021e90(*(uint *)a2, *(ushort *)(a3 + 4));
  Function_2264980(v4, v5, v6);
  return Function_2021cac(*v4, 1);
}

//----- (0226477C) --------------------------------------------------------
int __fastcall Function_226477c(int a1, int a2, int a3)
{
  int v3;
  int v4;

  v3 = a2;
  v4 = a1;
  *(uint *)(a2 + 248) = a3;
  *(ushort *)(a2 + 260) = 0;
  Function_2021cac(*(uint *)a2, 0);
  return Function_22649f0(v3, v4);
}

//----- (022647A0) --------------------------------------------------------
int __fastcall Function_22647a0(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int result;
  int v6;
  int v7;
  int v8;

  v3 = a1;
  v4 = a2;
  if ( a1[61] == 1 && !Function_2264980(a1, a1[62], a3) )
    Function_22649f0(v3, v4);
  result = v3[61];
  if ( !result )
  {
    v6 = *(uint *)(Function_2264a40(v3[62], v4 + 1788) + 8);
    if ( *(uchar *)v3[62] == 5 )
      Function_20b35a4(v6, 0x7FFF, v7, v8);
    else
      Function_20b35a4(v6, 19026, v7, v8);
    Function_2264a54(v3);
    Function_2017350(v3 + 1, *(uint *)(v3[62] + 44), *(uint *)(v3[62] + 48), *(uint *)(v3[62] + 52));
    Function_2017294((int)(v3 + 1));
    result = Function_201734c((int)(v3 + 31));
    if ( result == 1 )
    {
      Function_2264848(v3);
      Function_2017294((int)(v3 + 31));
      result = Function_2264908(v3);
    }
  }
  return result;
}

//----- (02264848) --------------------------------------------------------
int *__fastcall Function_2264848(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  if ( Function_22628a4(*(uint *)(a1 + 248)) == 1 )
  {
    v2 = -1228800;
  }
  else if ( Function_2262888(*(uint *)(v1 + 248)) )
  {
    v2 = -1228800;
  }
  else
  {
    v2 = -208896;
  }
  Function_2017350(
    (uint *)(v1 + 124),
    *(uint *)(*(uint *)(v1 + 248) + 44),
    v2,
    *(uint *)(*(uint *)(v1 + 248) + 52));
  v3 = *(uint *)(*(uint *)(v1 + 248) + 48) - v2;
  v4 = FX_Div((((ll)v3 << 12) + 2048) >> 12, 1228800);
  Function_201736c((uint *)(v1 + 124), v4 + 4096, v4 + 4096, v4 + 4096);
  v5 = FX_Div((((ll)v3 << 16) + 2048) >> 12, 1228800);
  return Function_20af5b4(0, 0, 0, 0, 24 - (v5 >> 12), 0);
}

//----- (02264908) --------------------------------------------------------
int *Function_2264908()
{
  return Function_20af5b4(0, 0, 0, 0, 31, 0);
}

//----- (02264924) --------------------------------------------------------
int __fastcall Function_2264924(uint *a1)
{
  uint *v1;

  v1 = a1;
  a1[62] = 0;
  a1[61] = 0;
  Function_2021cac(*a1, 0);
  return Function_2017348((int)(v1 + 31), 0);
}

//----- (02264948) --------------------------------------------------------
int __fastcall Function_2264948(int a1)
{
  int v1;
  int v2;

  v1 = 0;
  v2 = a1;
  do
  {
    if ( !*(uint *)(v2 + 2184) )
      return a1 + 1936 + 264 * v1;
    ++v1;
    v2 += 264;
  }
  while ( v1 < 96 );
  ErrorHandler();
  return 0;
}

//----- (02264980) --------------------------------------------------------
BOOL __fastcall Function_2264980(int a1, int a2, int a3)
{
  uint **v3;
  int *v4;
  int v5;
  short v7;
  short v8;
  int v9;
  int v10;
  int v11;

  v3 = (uint **)a1;
  v4 = (int *)(*(uint *)(a1 + 248) + 44);
  v5 = *(uint *)(*(uint *)(a1 + 248) + 48);
  v9 = *v4;
  v10 = v5;
  v11 = v4[2];
  Function_226439c(&v9, &v9, *(ushort *)(*(uint *)(a1 + 248) + 4), a3);
  Function_2264324(&v9, &v7);
  v9 = v7 << 12;
  v11 = 0;
  v10 = (v8 << 12) + 0x200000;
  Function_2021c50(*v3, &v9);
  return v7 >= 0 && v8 >= 0;
}

//----- (022649F0) --------------------------------------------------------
int __fastcall Function_22649f0(uint *a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  int result;

  v2 = (int *)a1;
  v3 = a2;
  Function_2021cac(*a1, 0);
  v2[61] = 0;
  v4 = Function_2264a40(v2[62], v3 + 1788);
  Function_2017258(v2 + 1, v4);
  Function_2017348((int)(v2 + 1), 1);
  result = *(uchar *)v2[62];
  if ( result == 1 )
    result = Function_2017348((int)(v2 + 31), 1);
  return result;
}

//----- (02264A40) --------------------------------------------------------
int __fastcall Function_2264a40(int a1, int a2)
{
  int v2;

  if ( *(uint *)(a1 + 40) == 1 )
    v2 = 4;
  else
    v2 = *(ushort *)(a1 + 4);
  return a2 + 16 * v2;
}

//----- (02264A54) --------------------------------------------------------
short *__fastcall Function_2264a54(int a1)
{
  int v1;
  int v2;
  int v3;
  long long v4;

  v1 = a1;
  if ( (short)--*(ushort *)(a1 + 260) < 0 )
  {
    v2 = Function_22625f0(*(uint *)(a1 + 248));
    v3 = FX_Atan2Idx(*(uint *)(*(uint *)(v1 + 248) + 16), *(uint *)(*(uint *)(v1 + 248) + 8)) >> 4;
    v4 = (s32_div_f(v2 << 9, 123392) << 12) & 0xFFFFFFF;
    *(ushort *)(v1 + 256) = ((int)((ll_mul(SLOWORD(Unknown_20f983c[v3]), (int)v4) + 2048) >> 12) >> 12)
                         + 512;
    *(ushort *)(v1 + 258) = ((int)((ll_mul(*((short *)Unknown_20f983c + v3 * 2 + 1), v4) + 2048) >> 12) >> 12)
                         + 512;
    *(ushort *)(v1 + 260) = 8;
  }
  *(ushort *)(v1 + 252) += *(ushort *)(v1 + 256);
  *(ushort *)(v1 + 254) += *(ushort *)(v1 + 258);
  Function_2017388(v1 + 4, *(ushort *)(v1 + 252), 0);
  return Function_2017388(v1 + 4, *(ushort *)(v1 + 254), 2);
}

//----- (02264B40) --------------------------------------------------------
int __fastcall Function_2264b40(int a1, uint *a2, char a3, int a4)
{
  char v4;
  uint *v5;
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
  uchar savedregs[24];

  *(uint *)savedregs = a4;
  v4 = a3;
  v5 = a2;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v8 = *(uint *)(a1 + 28);
  v19 = a4;
  v9 = a1 + 1900;
  v13 = 4096;
  v14 = 4096;
  v15 = 4096;
  v17 = 32;
  v18 = 2;
  v6 = Function_2021aa0((uint **)&v8);
  v5[1] = v6;
  Function_2021cac(v6, 0);
  Function_2021e90(v5[1], v4);
  result = 0;
  *v5 = 0;
  return result;
}

//----- (02264BA0) --------------------------------------------------------
int __fastcall Function_2264ba0(int a1)
{
  return Function_2021bd4(*(uint *)(a1 + 4));
}

//----- (02264BAC) --------------------------------------------------------
int __fastcall Function_2264bac(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  Function_2021cac(a1[1], 1);
  result = 1;
  *v1 = 1;
  return result;
}

//----- (02264BC0) --------------------------------------------------------
uint *__fastcall Function_2264bc0(uint *result)
{
  if ( *result )
    result = (uint *)Function_2264bd8(result, (ushort)word_21BF6D8, (ushort)word_21BF6DA);
  return result;
}

//----- (02264BD8) --------------------------------------------------------
int __fastcall Function_2264bd8(int a1, int a2, int a3)
{
  int v4;
  int v5;

  v4 = a2 << 12;
  v5 = (a3 << 12) + 0x200000;
  return Function_2021c50(*(uint **)(a1 + 4), &v4);
}

//----- (02264BF8) --------------------------------------------------------
int __fastcall Function_2264bf8(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  Function_2021cac(a1[1], 0);
  result = 0;
  *v1 = 0;
  return result;
}

//----- (02264C0C) --------------------------------------------------------
int __fastcall Function_2264c0c(int a1, uint *a2, char a3, int a4)
{
  int v4;
  uint *v5;
  char v6;
  int v7;
  int result;
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
  v4 = 0;
  v5 = a2;
  v6 = a3;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v9 = *(uint *)(a1 + 28);
  v20 = a4;
  v10 = a1 + 1900;
  v14 = 9;
  v15 = 9;
  v16 = 9;
  v18 = 32;
  v19 = 2;
  do
  {
    v7 = Function_2021aa0((uint **)&v9);
    v5[1] = v7;
    Function_2021cac(v7, 0);
    Function_2021cf8(v5[1], 1);
    result = Function_2021e90(v5[1], v6);
    *v5 = 0;
    ++v4;
    v5 += 7;
  }
  while ( v4 < 8 );
  return result;
}

//----- (02264C78) --------------------------------------------------------
int __fastcall Function_2264c78(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a2;
  v3 = 0;
  do
  {
    result = Function_2021bd4(*(uint *)(v2 + 4));
    ++v3;
    v2 += 28;
  }
  while ( v3 < 8 );
  return result;
}

//----- (02264C90) --------------------------------------------------------
uint __fastcall Function_2264c90(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  uint result;
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
  uchar savedregs[24];

  *(uint *)savedregs = a4;
  v4 = a1;
  v5 = 0;
  do
  {
    result = *v4;
    if ( *v4 == 1 )
    {
      v7 = v4[5];
      if ( v7 >= 16 )
      {
        if ( v7 >= 26 )
          Function_2264dd8(v7 - 26, 6, 3, 180, 160, &v14, &v13);
        else
          Function_2264dd8(v7 - 16, 10, 4, 182, 140, &v14, &v13);
      }
      else
      {
        Function_2264dd8(v7, 16, 8, 190, 125, &v14, &v13);
      }
      v8 = v4[5] + 1;
      v4[5] = v8;
      v15 = FX_Div((9 - 3 * v8 / 32) << 12, 40960);
      v16 = v15;
      Function_2021c70((uint *)v4[1], &v15);
      v9 = v4[2];
      if ( v4[6] )
        v10 = v9 + (v14 << 12);
      else
        v10 = v9 - (v14 << 12);
      v4[2] = v10;
      v4[3] += v13 << 12;
      Function_2021c50((uint *)v4[1], v4 + 2);
      v11 = v4[2];
      if ( v11 < -131072 || v11 > 1179648 || (v12 = v4[3], v12 < 1966080) || (result = 3014656, v12 > 3014656) )
      {
        *v4 = 0;
        result = Function_2021cac(v4[1], 0);
      }
    }
    ++v5;
    v4 += 7;
  }
  while ( v5 < 8 );
  return result;
}

//----- (02264D80) --------------------------------------------------------
uint *__fastcall Function_2264d80(uint *result, int a2, int a3)
{
  uint *v3;
  int v4;
  uint *v5;

  v3 = 0;
  v4 = 0;
  v5 = result;
  while ( *v5 )
  {
    ++v4;
    v5 += 7;
    if ( v4 >= 8 )
      goto LABEL_5;
  }
  v3 = &result[7 * v4];
LABEL_5:
  if ( v3 )
  {
    v3[6] = a2 < 128;
    v3[2] = a2 << 12;
    v3[3] = (a3 << 12) + 0x200000;
    Function_2021c50((uint *)v3[1], v3 + 2);
    *v3 = 1;
    Function_2021cac(v3[1], 1);
    result = 0;
    v3[5] = 0;
  }
  return result;
}

//----- (02264DD8) --------------------------------------------------------
int *__fastcall Function_2264dd8(int a1, int a2, int a3, int a4, int a5, int *a6, int *a7)
{
  int v7;
  int v8;
  int v9;
  uint v10;
  int v11;
  int v12;
  int v13;
  int *result;

  v7 = a3;
  v8 = ((ushort)a4 + (ushort)s32_div_f((a5 - a4) * a1, a2)) & 0xFFFF;
  v9 = Function_201d1d4(v8);
  v10 = v7 << 12;
  v11 = v7 << 12 >> 31;
  *a6 = (int)((ll_mul(v9, __PAIR__(v11, v10)) + 2048) >> 12) >> 12;
  v12 = Function_201d15c(v8);
  v13 = (ll_mul(v12, __PAIR__(v11, v10)) + 2048) >> 12;
  result = a7;
  *a7 = v13 >> 12;
  return result;
}

//----- (02264E48) --------------------------------------------------------
int *__fastcall Function_2264e48(int *a1, int a2, int a3, int a4, int a5, int a6, int (***a7)(void))
{
  int *v7;
  int *v8;
  int v9;
  uint v10;
  short v11;
  int *v12;
  const short *v13;
  short *v14;
  int *result;
  int *v16;
  int v17;
  int v18;
  int v19;
  int *v20;

  v16 = a1;
  v17 = a3;
  v7 = a1 + 90;
  v8 = a1;
  v19 = 2 * (a4 - 1);
  v20 = &dword_2265C5C[2 * (a4 - 1)];
  v9 = 0;
  do
  {
    if ( v9 )
    {
      if ( v9 == 1 )
        v10 = 37;
      else
        v10 = *(ushort *)(v19 + 36068098);
    }
    else
    {
      v10 = 36;
    }
    Function_20170d8(v7, v17, v10, a6);
    Function_2017258(v8, (int)v7);
    Function_2017350(v8, 0, -401408, 0);
    Function_201736c(v8, 6144, 6144, 6144);
    if ( v9 == 1 )
      Function_2017348((int)v8, 0);
    if ( (uint)v9 > 1 )
    {
      v11 = Function_201d278(0xB4u);
      Function_2017388((int)v8, v11, 1);
    }
    else
    {
      Function_2017388((int)v8, *((ushort *)v20 + a5), 1);
    }
    ++v9;
    v7 += 4;
    v8 += 30;
  }
  while ( v9 < 3 );
  v18 = 0;
  v12 = v16 + 102;
  v13 = L"&'(";
  v14 = L"";
  do
  {
    Function_2017164(v12, (int)&v16[4 * (ushort)*v14 + 90], v17, *(ushort *)v13, a6, a7);
    Function_201727c((uint)&v16[30 * (ushort)*v14], (int)v12);
    ++v13;
    ++v14;
    v12 += 5;
    ++v18;
  }
  while ( v18 < 3 );
  result = v16;
  v16[117] = 4096;
  return result;
}

//----- (02264F68) --------------------------------------------------------
int __fastcall Function_2264f68(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int *v6;
  int v7;
  int *v8;
  int result;

  v3 = a1;
  v4 = a3;
  v5 = 0;
  v6 = (int *)(a1 + 408);
  do
  {
    Function_20171a0(v6, v4);
    ++v5;
    v6 += 5;
  }
  while ( v5 < 3 );
  v7 = 0;
  v8 = (int *)(v3 + 360);
  do
  {
    result = Function_2017110(v8);
    ++v7;
    v8 += 4;
  }
  while ( v7 < 3 );
  return result;
}

//----- (02264FA0) --------------------------------------------------------
int *__fastcall Function_2264fa0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int *result;

  v1 = a1;
  Function_20171cc(a1 + 408, *(uint *)(a1 + 468));
  if ( *(uchar *)(v1 + 472) )
  {
    v2 = *(uchar *)(v1 + 473);
    if ( *(uchar *)(v1 + 473) )
    {
      if ( v2 == 1 )
      {
        v6 = *(uint *)(v1 + 480);
        if ( *(uint *)(v1 + 476) + v6 >= 208896 )
          v7 = 0;
        else
          v7 = *(uint *)(v1 + 476) + v6;
        *(uint *)(v1 + 476) = v7;
        if ( (short)--*(ushort *)(v1 + 474) <= 0 )
        {
          ++*(uchar *)(v1 + 473);
          *(uint *)(v1 + 476) = 208896;
        }
      }
      else if ( v2 == 2 )
      {
        if ( *(uint *)(v1 + 476) + 4096 >= 409600 )
          *(uint *)(v1 + 476) = 208896;
        else
          *(uint *)(v1 + 476) += 4096;
      }
      else
      {
        ErrorHandler();
      }
    }
    else
    {
      v3 = *(uint *)(v1 + 480);
      if ( *(uint *)(v1 + 476) + v3 >= 208896 )
        v4 = 0;
      else
        v4 = *(uint *)(v1 + 476) + v3;
      *(uint *)(v1 + 476) = v4;
      v5 = *(uint *)(v1 + 480);
      if ( v5 + 410 > 9421 )
      {
        *(uint *)(v1 + 480) = 9421;
        *(ushort *)(v1 + 474) = 24;
        ++*(uchar *)(v1 + 473);
      }
      else
      {
        *(uint *)(v1 + 480) = v5 + 410;
      }
    }
    Function_2017240(v1 + 428, *(uint *)(v1 + 476));
    Function_2017240(v1 + 448, *(uint *)(v1 + 476));
  }
  v8 = 0;
  do
  {
    result = Function_2017294(v1);
    ++v8;
    v1 += 120;
  }
  while ( v8 < 3 );
  return result;
}

//----- (022650C8) --------------------------------------------------------
int __fastcall Function_22650c8(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_2017348(a1, 0);
  Function_2017348(v1 + 120, 1);
  *(uint *)(v1 + 476) = 0;
  *(uint *)(v1 + 480) = 4096;
  *(uchar *)(v1 + 472) = 1;
  result = 473;
  *(uchar *)(v1 + 473) = 0;
  return result;
}

//----- (022650F8) --------------------------------------------------------
int __fastcall Function_22650f8(int result, int a2)
{
  *(uint *)(result + 468) = a2;
  return result;
}

//----- (02265100) --------------------------------------------------------
uint *__fastcall Function_2265100(int *a1, int *a2, uint *a3, int a4, uint *a5, uint *a6)
{
  uint *v6;
  uint v7;
  int v8;
  long long v9;
  int v10;
  int *v11;
  int v12;
  long long v13;
  long long v14;
  int v15;
  int v16;
  long long v17;
  int v18;
  int v19;
  long long v20;
  int v21;
  int v22;
  long long v23;
  long long v24;
  long long v25;
  uint *result;

  v6 = a1;
  v7 = *a3;
  v8 = a3[2];
  v9 = (int)a3[1];
  v10 = (int)*a3 >> 31;
  v11 = a2;
  v12 = a4;
  v13 = ll_mul((int)*a3, *a1);
  v14 = ll_mul(v9, (int)v6[1]);
  v15 = HIDWORD(v14);
  v16 = v14;
  v17 = ll_mul(v8, (int)v6[2]);
  v18 = HIDWORD(v17);
  v19 = v17;
  v20 = ll_mul(v8, v11[2]);
  v21 = HIDWORD(v20);
  v22 = v20;
  v23 = ll_mul(__PAIR__(v10, v7), *v11);
  v24 = ll_mul(v9, v11[1]);
  v25 = FX_Div(
          v12
        - ((((uint)(v13 + 2048) >> 12) | ((__CFADD__((uint)v13, 2048) + HIDWORD(v13)) << 20))
         + (((uint)(v16 + 2048) >> 12) | ((__CFADD__(v16, 2048) + v15) << 20))
         + (((uint)(v19 + 2048) >> 12) | ((__CFADD__(v19, 2048) + v18) << 20))),
          (((uint)(v22 + 2048) >> 12) | ((__CFADD__(v22, 2048) + v21) << 20))
        + (((uint)(v23 + 2048) >> 12) | ((__CFADD__((uint)v23, 2048) + HIDWORD(v23)) << 20))
        + (ull)((v24 + 2048) >> 12));
  *a5 = *v6 + (ull)((ll_mul(*v11, v25) + 2048) >> 12);
  a5[1] = v6[1] + (ull)((ll_mul(v11[1], v25) + 2048) >> 12);
  *a5 = v6[2] + (ull)((ll_mul(v11[2], v25) + 2048) >> 12);
  result = a6;
  *a6 = v25;
  return result;
}

//----- (02265274) --------------------------------------------------------
int __fastcall Function_2265274(int result, int a2)
{
  *(uint *)(result + 408) = a2;
  return result;
}

//----- (0226527C) --------------------------------------------------------
int __fastcall Function_226527c(int a1, short a2, int a3, int a4)
{
  short v4;
  int v5;
  short v7;
  int v8;

  v8 = a4;
  v4 = a2;
  v5 = a1;
  Function_2020a94(&v7, *(ushort **)(a1 + 400));
  v7 = v4;
  return Function_20209d4(&v7, *(ushort **)(v5 + 400));
}

//----- (022652A4) --------------------------------------------------------
uchar *__fastcall Function_22652a4(uchar *result, char a2)
{
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  result[5] = 0;
  result[6] = 0;
  result[7] = 0;
  *((ushort *)result + 2) = 2;
  result[6] = a2;
  return result;
}

//----- (022652C0) --------------------------------------------------------
int *__fastcall Function_22652c0(ushort *a1, int a2)
{
  ushort *v2;
  int *result;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v2 = a1;
  result = (int *)*a1;
  v4 = a2;
  switch ( (uchar)result )
  {
    case 1:
      Function_22653f4(a2, (short)(v2[2] - 1), *((uchar *)v2 + 6));
      ++*v2;
      v2[1] = 0;
      goto LABEL_3;
    case 2:
LABEL_3:
      v5 = (short)v2[1];
      if ( v5 < 16 )
      {
        v2[1] = v5 + 1;
        v6 = (short)v2[2];
        v7 = v6 - 2;
        v8 = v6 - 1;
        if ( v6 < 0 )
          LOBYTE(v6) = v6 + 3;
        if ( v7 < 0 )
          LOBYTE(v7) = v7 + 3;
        if ( v8 < 0 )
          LOBYTE(v8) = v8 + 3;
        result = G2x_SetBlendAlpha_(
                   (int *)&REG_BLDCNT_SUB,
                   1 << v6,
                   (1 << v8) | (1 << v7) | 8,
                   16 - 16 * (short)v2[1] / 16,
                   16 * (short)v2[1] / 16);
      }
      else
      {
        *v2 = 3;
        v2[1] = 0;
        Function_22653f4(v4, (short)v2[2], *((uchar *)v2 + 6));
        result = G2x_SetBlendAlpha_((int *)&REG_BLDCNT_SUB, 1 << v2[2], 8, 0, 16);
      }
      break;
    case 3:
      v9 = (short)v2[1];
      if ( v9 < 8 )
      {
        v2[1] = v9 + 1;
        v10 = 16 * (short)v2[1] / 8;
        result = G2x_SetBlendAlpha_((int *)&REG_BLDCNT_SUB, 1 << v2[2], 8, v10, 16 - v10);
      }
      else
      {
        result = (int *)&REG_BLDCNT_SUB;
        *v2 = 0;
        REG_BLDCNT_SUB = 0;
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (022653CC) --------------------------------------------------------
uint __fastcall Function_22653cc(int a1)
{
  int v1;
  uint result;
  short v3;

  v1 = a1;
  result = (uchar)++*(uchar *)(a1 + 7);
  if ( result >= 0xA )
  {
    *(ushort *)v1 = 1;
    s32_div_f(*(short *)(v1 + 4) + 1, 3);
    *(ushort *)(v1 + 4) = v3;
    result = 0;
    *(uchar *)(v1 + 7) = 0;
  }
  return result;
}

//----- (022653F4) --------------------------------------------------------
int __fastcall Function_22653f4(int *a1, int a2, int a3)
{
  int *v3;
  int v4;
  uchar v5;
  int v6;
  int result;
  int v8;
  int v9;

  v3 = a1;
  v8 = a2;
  v9 = (2 * a3 + 1) & 0xFF;
  v4 = 0;
  v5 = 2 * a3 + 2;
  do
  {
    v6 = v8 - v4;
    if ( v8 - v4 < 0 )
      v6 += 3;
    Function_2019060((v6 + 4) & 0xFF, (2 - v4) & 0xFF);
    if ( v4 )
      Function_2019e2c(*v3, (v6 + 4) & 0xFF, 0, 0, 0x20u, 0x20u, v9);
    else
      Function_2019e2c(*v3, (v6 + 4) & 0xFF, 0, 0, 0x20u, 0x20u, v5);
    result = Function_2019448((uint *)*v3, (v6 + 4) & 0xFF);
    ++v4;
  }
  while ( v4 < 3 );
  return result;
}

//----- (02265478) --------------------------------------------------------
int __fastcall Function_2265478(int **a1, int a2, int a3, uint a4)
{
  int **v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int *v9;
  int v10;
  int *v11;
  int *v12;
  int result;
  int v14;
  int **v15;
  int v16;
  uchar *v17;
  int *v18;
  int *v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int **v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;

  v4 = a1;
  v5 = a4;
  v6 = a2;
  a1[39] = (int *)a4;
  v7 = a3;
  *a1 = Function_2009a4c(*(uint *)(a2 + 328), a3, 0xAu, 0, 140, 1, a4);
  v4[1] = Function_2009b04(*(uint *)(v6 + 332), v7, 0xBu, 0, 140, 1, 1, v5);
  v4[2] = Function_2009bc4(*(uint *)(v6 + 336), v7, 9u, 0, 140, 2u, v5);
  v4[3] = Function_2009bc4(*(uint *)(v6 + 340), v7, 8u, 0, 140, 3u, v5);
  if ( !Function_200a450(*v4) )
    ErrorHandler();
  if ( !Function_200a640(v4[1]) )
    ErrorHandler();
  Function_2009d4c(*v4);
  Function_2009d4c(v4[1]);
  Function_20093b4(
    (int)(v4 + 4),
    140,
    140,
    140,
    140,
    -1,
    -1,
    0,
    0,
    *(uint *)(v6 + 328),
    *(uint *)(v6 + 332),
    *(uint *)(v6 + 336),
    *(uint *)(v6 + 340),
    0,
    0);
  v26 = *(uint *)(v6 + 28);
  v27 = v4 + 4;
  v32 = v5;
  v28 = -262144;
  v29 = 196608;
  v30 = 1;
  v31 = 1;
  v8 = Function_2021b90(&v26);
  v4[13] = (int *)v8;
  Function_2021cac(v8, 0);
  v4[23] = (int *)Function_2023790(16, v5);
  Function_201a870(*(uint **)v6, (int)(v4 + 14), 3, 2, 0, 0);
  v9 = Function_2012b20((int)(v4 + 14), v5);
  v4[19] = v9;
  v10 = Function_2012b58((int)v9, 1);
  if ( Function_201ed94(v10, 1, 1, (int)(v4 + 20)) != 1 )
    ErrorHandler();
  v11 = Function_20098b8(*(uint *)(v6 + 332), 14, 6, 0, 150, 1, 1, v5);
  v4[24] = v11;
  if ( !Function_200a640(v11) )
    ErrorHandler();
  Function_2009d4c(v4[24]);
  v14 = *(uint *)(v6 + 396);
  v15 = v4 + 14;
  v16 = *(uint *)(v6 + 28);
  v17 = Function_200a72c(v4[24], 0);
  v18 = v4[13];
  v19 = v4[21];
  v20 = -7;
  v21 = -5;
  v22 = 0;
  v23 = 0;
  v24 = 1;
  v25 = v5;
  v12 = Function_2012b60(&v14, v4[19]);
  v4[18] = v12;
  Function_20129d0(v12, 0);
  Function_201a8fc((int)(v4 + 14));
  Function_2261304(v4 + 25, -262144, 0x20000, 147456, 8);
  Function_2261304(v4 + 31, 196608, 196608, 49152, 4);
  *((ushort *)v4 + 74) = 0;
  result = 4;
  *((ushort *)v4 + 75) = 4;
  return result;
}

//----- (02265688) --------------------------------------------------------
int __fastcall Function_2265688(int **a1, int **a2)
{
  int **v2;
  int **v3;
  int v4;

  v2 = a1;
  v3 = a2;
  Function_2012bd8(a1[18]);
  Function_200a6dc(v2[24]);
  Function_2009d68(v3[83], (uint **)v2[24]);
  Function_201ee28((int)(v2 + 20));
  Function_2012b48((int)v2[19]);
  Function_20237bc_FreeMsg((int)v2[23], v4);
  Function_2021bd4((int)v2[13]);
  Function_200a4e4(*v2);
  Function_200a6dc(v2[1]);
  Function_2009d68(v3[82], (uint **)*v2);
  Function_2009d68(v3[83], (uint **)v2[1]);
  Function_2009d68(v3[84], (uint **)v2[2]);
  return Function_2009d68(v3[85], (uint **)v2[3]);
}

//----- (02265700) --------------------------------------------------------
int __fastcall Function_2265700(int a1, uint **a2, int a3)
{
  int v3;
  uint **v4;
  int v5;
  int result;

  v3 = a1;
  v4 = a2;
  Function_20238a0(*(ushort **)(a1 + 92), a3, 2, 2, 1);
  Function_201a870(*v4, v3 + 56, 3, 2, 0, 0);
  v5 = *(uint *)(v3 + 92);
  Function_201d78c(v3 + 56, 0);
  Function_2012be0(*(int ***)(v3 + 72), *(uint *)(v3 + 76), v3 + 56, *(uint *)(v3 + 156));
  Function_201a8fc(v3 + 56);
  Function_20129d0(*(uint **)(v3 + 72), 1);
  Function_2021cac(*(uint *)(v3 + 52), 1);
  *(ushort *)(v3 + 152) = 1;
  result = 0;
  *(ushort *)(v3 + 154) = 0;
  return result;
}

//----- (02265788) --------------------------------------------------------
ushort *__fastcall Function_2265788(ushort *result)
{
  int v1;

  v1 = (ushort)result[76];
  if ( v1 != 3 )
  {
    if ( v1 == 2 )
      result[77] = 12;
    result += 76;
    *result = 3;
  }
  return result;
}

//----- (022657A8) --------------------------------------------------------
int __fastcall Function_22657a8(int a1, uint **a2, int a3)
{
  int v3;
  int result;
  uint **v5;
  int v6;

  v3 = a1;
  result = *(ushort *)(a1 + 152);
  v5 = a2;
  if ( result != 3 )
  {
    Function_20238a0(*(ushort **)(v3 + 92), a3, 2, 2, 1);
    Function_201a870(*v5, v3 + 56, 3, 2, 0, 0);
    v6 = *(uint *)(v3 + 92);
    Function_201d78c(v3 + 56, 0);
    Function_2012be0(*(int ***)(v3 + 72), *(uint *)(v3 + 76), v3 + 56, *(uint *)(v3 + 156));
    Function_201a8fc(v3 + 56);
    result = 0;
    *(ushort *)(v3 + 150) = 0;
  }
  return result;
}

//----- (02265820) --------------------------------------------------------
int __fastcall Function_2265820(short *a1, int a2, int a3, int a4)
{
  short *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v13;
  int v14;
  int v15;

  v15 = a4;
  v4 = a1;
  switch ( (uchar)a1[76] )
  {
    case 1u:
      v5 = a1[74];
      if ( v5 >= 8 )
        v4[76] = 2;
      else
        v4[74] = v5 + 1;
      break;
    case 3u:
      v6 = a1[77];
      if ( v6 <= 0 )
      {
        v7 = v4[74];
        if ( v7 <= 0 )
        {
          v4[76] = 0;
          Function_20129d0(*((uint **)v4 + 18), 0);
          Function_2021cac(*((uint *)v4 + 13), 0);
        }
        else
        {
          v4[74] = v7 - 1;
        }
      }
      else
      {
        v4[77] = v6 - 1;
      }
      break;
    default:
      break;
  }
  v8 = v4[75];
  if ( v8 < 4 )
  {
    v4[75] = v8 + 1;
    *((uint *)v4 + 35) = v4[75];
    Function_2261364((uint *)v4 + 31);
  }
  *((uint *)v4 + 29) = v4[74];
  Function_2261364((uint *)v4 + 25);
  v13 = *((uint *)v4 + 25);
  v14 = *((uint *)v4 + 31);
  Function_2021c50(*((uint **)v4 + 13), &v13);
  return Function_2012938(*((uint **)v4 + 18), v9, v10, v11);
}

//----- (022658E0) --------------------------------------------------------
int __fastcall Function_22658e0(int a1)
{
  *(ushort *)a1 = 0;
  *(uchar *)(a1 + 2) = 1;
  *(uchar *)(a1 + 3) = 0;
  return Function_2005748(0x56Eu);
}

//----- (022658F8) --------------------------------------------------------
int __fastcall Function_22658f8(ushort *a1, int a2, int a3)
{
  ushort *v3;
  int result;
  int v5;
  int v6;
  uint v7;
  uint v8;

  v3 = a1;
  result = *((uchar *)a1 + 2);
  v5 = a2;
  v6 = a3;
  if ( result )
  {
    result = *v3;
    switch ( (uchar)result )
    {
      case 0:
        v7 = s32_div_f(102400 * (char)++*((uchar *)v3 + 3), 58);
        Function_22650f8(v5, v7 + 4096);
        v8 = s32_div_f(150 * *((char *)v3 + 3), 58);
        Function_2004fa8(7, v8 + 256);
        if ( *((uchar *)v3 + 3) == 12 )
          Function_2005748(0x56Fu);
        result = *((char *)v3 + 3);
        if ( result >= 58 )
        {
          result = *v3 + 1;
          *v3 = result;
        }
        break;
      case 1:
        Function_200aae0(4, 16, 0, 63, 1);
        result = *v3 + 1;
        *v3 = result;
        break;
      case 2:
        result = Function_200ac1c(1);
        if ( result == 1 )
        {
          Function_22650c8(v5);
          Function_22650f8(v5, 0x2000);
          Function_226425c(v6, 1);
          result = *v3 + 1;
          *v3 = result;
        }
        break;
      case 3:
        Function_200aae0(14, 0, 16, 63, 1);
        result = *v3 + 1;
        *v3 = result;
        break;
      case 4:
        result = Function_200ac1c(1);
        if ( result == 1 )
        {
          result = *v3 + 1;
          *v3 = result;
        }
        break;
      case 5:
        result = 0;
        *((uchar *)v3 + 2) = 0;
        *v3 = 0;
        break;
      default:
        return result;
    }
  }
  return result;
}

//----- (02265A08) --------------------------------------------------------
uint *Function_2265a08()
{
  return Function_2004fa8(7, 256);
}

//----- (02265A18) --------------------------------------------------------
void **Function_2265a18()
{
  return &off_226664C;
}

//----- (02265A20) --------------------------------------------------------
int Function_2265a20()
{
  return 8;
}

//----- (02265A24) --------------------------------------------------------
int __fastcall Function_2265a24(int a1)
{
  int v1;
  void **v2;
  int v3;

  v1 = a1;
  v2 = Function_2265a18();
  v3 = Function_2265a20();
  return Function_2032798((int)v2, v3, v1);
}

//----- (02265A40) --------------------------------------------------------
int Function_2265a40()
{
  return 0;
}

//----- (02265A44) --------------------------------------------------------
int __fastcall Function_2265a44(int a1, int a2, int a3, int a4)
{
  return Function_226095c(a4);
}

//----- (02265A50) --------------------------------------------------------
int __fastcall Function_2265a50(int a1, int a2, int a3, int a4)
{
  return Function_2260964(a4);
}

//----- (02265A5C) --------------------------------------------------------
int __fastcall Function_2265a5c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;

  v4 = a3;
  v5 = a1;
  v6 = a4;
  Function_2260988(a4);
  result = Function_203608c();
  if ( !result )
    result = Function_226096c(v6, v4, v5);
  return result;
}

//----- (02265A84) --------------------------------------------------------
int __fastcall Function_2265a84(int a1, int a2, int *a3, int a4)
{
  return Function_2260994(a4, *a3, a1);
}

//----- (02265A94) --------------------------------------------------------
int __fastcall Function_2265a94(int a1, int a2, int *a3, int a4)
{
  return Function_22609b4(a4, a3);
}

//----- (02265AA4) --------------------------------------------------------
uint __fastcall Function_2265aa4(int a1, int a2, int *a3, int a4)
{
  return Function_22609e4(a4, *a3, a1);
}

//----- (02265AB4) --------------------------------------------------------
uint *__fastcall Function_2265ab4(int a1, int a2, int a3, int a4)
{
  return Function_2260a48(a4);
}

//----- (02265AC0) --------------------------------------------------------
int __fastcall Function_2265ac0(int result, int a2, int *a3, int a4)
{
  int v4;

  v4 = *a3;
  if ( !result )
    result = Function_22609d8(a4);
  return result;
}

//----- (02265AD0) --------------------------------------------------------
int Function_2265ad0()
{
  return 20;
}

//----- (02265AD4) --------------------------------------------------------
int Function_2265ad4()
{
  return 16;
}

//----- (02265AD8) --------------------------------------------------------
int Function_2265ad8()
{
  return 4;
}

//----- (02265ADC) --------------------------------------------------------
int Function_2265adc()
{
  return 4;
}

