//----- (02001F5C) --------------------------------------------------------
uint __fastcall Function_2001f5c(int a1)
{
  int v1
  int v2
  int v3
  uint result
  uint v5
  uint v6
  uint v7
  int v8
  int v9
  int v10

  v1 = a1;
  v2 = Function_2002df8_GetLineHeight(*(uchar *)(a1 + 8), 6u);
  Function_201ada4_ClearTextBox(*(uint *)(v1 + 4), v2);
  v3 = *(uchar *)(v1 + 23);
  v10 = (*(uchar *)(v1 + 22) + 2 * *(uchar *)(v1 + 25)) & 0xFF;
  result = *(uchar *)(v1 + 9);
  v5 = 0;
  if ( *(uchar *)(v1 + 9) )
  {
    do
    {
      v6 = *(uchar *)(v1 + 10);
      v7 = 0;
      if ( *(uchar *)(v1 + 10) )
      {
        do
        {
          v8 = (*(uchar *)(v1 + 24) + (*(uchar *)(v1 + 26) + (*(uchar *)(v1 + 11) & 0xF)) * v7) & 0xFF;
          v9 = *(uint *)(*(uint *)v1 + 8 * (v7 + v6 * v5));
          Function_201d738_CallInitTextInterpreter(*(uint *)(v1 + 4), *(uchar *)(v1 + 8));
          v6 = *(uchar *)(v1 + 10);
          v7 = (v7 + 1) & 0xFF;
        }
        while ( v7 < v6 );
      }
      v3 = (v3 + v10) & 0xFF;
      v5 = (v5 + 1) & 0xFF;
      result = *(uchar *)(v1 + 9);
    }
    while ( v5 < result );
  }
  return result;
}

//----- (02001FE8) --------------------------------------------------------
uchar *__fastcall Function_2001fe8(uchar *result, int a2, int a3, int a4)
{
  uchar *v4
  char v5
  char v6
  int v7

  v7 = a4;
  v4 = result;
  if ( (uint)result[11] << 26 >> 30 != 1 )
  {
    Function_2002018(result, &v6, &v5, result[21]);
    result = (uchar *)Function_2014a58(*((int **)v4 + 3), *((uint *)v4 + 1));
  }
  return result;
}

//----- (02002018) --------------------------------------------------------
int __fastcall Function_2002018(uchar *a1, uchar *a2, uchar *a3, uint a4)
{
  uchar *v4
  uint v5
  uchar *v6
  int v7
  int result

  v4 = a1;
  v5 = a4;
  v6 = a3;
  *a2 = (v4[22] + 2 * v4[25]) * s32_div_f(a4, a1[10]);
  s32_div_f(v5, v4[10]);
  result = v4[24] + (v4[26] + (v4[11] & 0xF)) * v7;
  *v6 = result;
  return result;
}

//----- (02002054) --------------------------------------------------------
int __fastcall Function_2002054(uint *a1, uchar *a2, short a3, int a4, char a5, uint a6)
{
  short v6
  uint *v7
  uchar *v8
  uchar v9
  ushort **v10
  uint *v11
  uint *v13
  int v14
  char v15
  char v16
  char v17
  char v18
  int v19

  v19 = a4;
  v6 = a3;
  v7 = a1;
  v8 = a2;
  v9 = a4;
  v10 = (ushort **)LoadFromMsgNARC(1, 26, 361, a6);
  v11 = Function_2013a04(2u, a6);
  Function_2013a4c(v11, v10, 0x29u, 0);
  Function_2013a4c(v11, v10, 0x2Au, -2);
  Function_200b190((ushort *)v10);
  v13 = v11;
  v14 = Function_201a778(a6, 1);
  v15 = 0;
  v16 = 1;
  v17 = 2;
  v18 = 0;
  Function_201a8d4(v7, v14, v8);
  Function_200dc48(v14, 1, v6, v9);
  return Function_2001b7c(&v13, 8, 0, a5, a6, 2);
}

//----- (02002100) --------------------------------------------------------
int __fastcall Function_2002100(uint *a1, uchar *a2, short a3, int a4, uint a5)
{
  return Function_2002054(a1, a2, a3, a4, 0, a5);
}

//----- (02002114) --------------------------------------------------------
int __fastcall Function_2002114(int a1, uint a2)
{
  int v2
  uint v3
  int v4

  v2 = a1;
  v3 = a2;
  v4 = Function_2001be0(a1);
  if ( v4 != -1 )
    Function_2002154(v2, v3);
  return v4;
}

//----- (02002134) --------------------------------------------------------
int __fastcall Function_2002134(int a1, uint a2, uint a3)
{
  int v3
  uint v4
  int v5

  v3 = a1;
  v4 = a3;
  v5 = Function_2001d44(a1, a2);
  if ( v5 != -1 )
    Function_2002154(v3, v4);
  return v5;
}

//----- (02002154) --------------------------------------------------------
uint __fastcall Function_2002154(int a1, uint a2)
{
  int v2
  uint v3

  v2 = a1;
  v3 = a2;
  Function_200dc9c(*(uint *)(a1 + 4), 0);
  Function_201a8fc(*(uint *)(v2 + 4));
  Function_2018238(v3, *(uint *)(v2 + 4));
  Function_2013a3c(*(int **)v2);
  return Function_2001bc4(v2, 0);
}

//----- (02002180) --------------------------------------------------------
int __fastcall Function_2002180(int a1, ushort a2, ushort a3)
{
  return Function_201addc(a1, (int)dword_20E4C48, 0, 0, 8, 16, a2, a3, 8u, 0x10u);
}

//----- (020021B0) --------------------------------------------------------
ushort *__fastcall Function_20021b0(ushort *result, ushort *a2)
{
  int i

  for ( i = *a2; i != 0xFFFF; ++result )
  {
    ++a2;
    *result = i;
    i = *a2;
  }
  *result = -1;
  return result;
}

//----- (020021D0) --------------------------------------------------------
ushort *__fastcall Function_20021d0(ushort *a1, short *a2, uint a3)
{
  uint v3
  ushort *v4
  short v5

  v3 = 0;
  if ( a3 )
  {
    v4 = a1;
    do
    {
      v5 = *a2;
      ++v3;
      ++a2;
      *v4 = v5;
      ++v4;
    }
    while ( v3 < a3 );
  }
  return &a1[a3];
}

//----- (020021F0) --------------------------------------------------------
int __fastcall Function_20021f0(ushort *a1)
{
  int i

  for ( i = 0; *a1 != 0xFFFF; ++i )
    ++a1;
  return i;
}

//----- (0200220C) --------------------------------------------------------
int __fastcall Function_200220c(ushort *a1, ushort *a2)
{
  int v2

  v2 = *a1;
  if ( v2 != *a2 )
    return 1;
  while ( v2 != 0xFFFF )
  {
    ++a1;
    ++a2;
    v2 = *a1;
    if ( v2 != *a2 )
      return 1;
  }
  return 0;
}

//----- (02002238) --------------------------------------------------------
int __fastcall Function_2002238(ushort *a1, ushort *a2, int a3)
{
  int v3
  int v4

  v3 = *a2;
  v4 = *a1;
  if ( v4 != v3 )
    return 1;
  while ( 1 )
  {
    if ( !a3 )
      return 0;
    if ( v4 == 0xFFFF && v3 == 0xFFFF )
      break;
    ++a1;
    ++a2;
    v3 = *a2;
    v4 = *a1;
    --a3;
    if ( v4 != v3 )
      return 1;
  }
  return 0;
}

//----- (02002278) --------------------------------------------------------
ushort *__fastcall Function_2002278(ushort *a1, short a2, uint a3)
{
  uint v3
  ushort *v4

  v3 = 0;
  if ( a3 )
  {
    v4 = a1;
    do
    {
      ++v3;
      *v4 = a2;
      ++v4;
    }
    while ( v3 < a3 );
  }
  return &a1[v3];
}

//----- (02002294) --------------------------------------------------------
ushort *__fastcall Function_2002294(ushort *a1, uint a2)
{
  return Function_2002278(a1, 0xFFFF, a2);
}

//----- (020022A4) --------------------------------------------------------
short *__fastcall Function_20022a4(short *a1, int a2, int a3, int a4)
{
  short *v4
  int v5
  int v6
  int i
  uint v8
  short v9
  short v10

  v4 = a1;
  v5 = a2;
  v6 = dword_20E4CA4[a4];
  for ( i = a3; v6; v6 = u32_div_f(v6, 10) )
  {
    v8 = (ushort)u32_div_f(v5, v6);
    v5 -= v6 * v8;
    if ( i == 2 )
    {
      if ( v8 < 0xA )
        v9 = *((ushort *)dword_20E4C88 + v8);
      else
        v9 = 226;
      *v4 = v9;
      ++v4;
    }
    else if ( v8 || v6 == 1 )
    {
      i = 2;
      if ( v8 < 0xA )
        v10 = *((ushort *)dword_20E4C88 + v8);
      else
        v10 = 226;
      *v4 = v10;
      ++v4;
    }
    else if ( i == 1 )
    {
      *v4 = 1;
      ++v4;
    }
  }
  *v4 = -1;
  return v4;
}

//----- (02002328) --------------------------------------------------------
void __fastcall TextInterpreter(int a1)
{
  /*
   * Still have to fully analyze this.
   * Start:  2002328
   * End:    20027a4
   */
}

//----- (020027A8) --------------------------------------------------------
int __fastcall Function_20027a8(int result)
{
  word_2101D46 = result;
  return result;
}

//----- (020027B4) --------------------------------------------------------
int __fastcall Function_20027b4(int a1)
{
  int result

  result = a1 + 32;
  *(uchar *)(result + 1) &= 0x9Fu;
  *(uchar *)(result + 1) &= 0xE0u;
  return result;
}

//----- (020027E0) --------------------------------------------------------
uint __fastcall Function_20027e0(int a1)
{
  int v1
  int v2
  int v3
  uint result
  int v5
  int v6
  char v7
  int v8
  int v9
  int v10

  v1 = a1;
  v2 = a1 + 32;
  v3 = *(uchar *)(a1 + 33);
  if ( v3 & 0x1F )
  {
    result = v3 & 0xFFFFFFE0 | ((v3 & 0x1F) + 255) & 0x1F;
  }
  else
  {
    v5 = Function_201c290(*(uint *)(v1 + 4));
    v6 = Function_201c29c(*(uint *)(v1 + 4));
    v7 = Function_201c2a0(*(uint *)(v1 + 4));
    v8 = Function_201c294(*(uint *)(v1 + 4));
    v9 = v6 + v8;
    v10 = v6 + v8 + 1;
    Function_2019cb8(
      **(uint **)(v1 + 4),
      v5,
      4 * *((uchar *)&dword_20E4CD0 + ((uint)*(uchar *)(v2 + 1) << 25 >> 30)) - 8157,
      (uchar)v10,
      v7 + 2,
      1u,
      1u,
      0x10u);
    Function_2019cb8(
      **(uint **)(v1 + 4),
      v5,
      4 * *((uchar *)&dword_20E4CD0 + ((uint)*(uchar *)(v2 + 1) << 25 >> 30)) - 8156,
      (v9 + 2) & 0xFF,
      v7 + 2,
      1u,
      1u,
      0x10u);
    Function_2019cb8(
      **(uint **)(v1 + 4),
      v5,
      4 * *((uchar *)&dword_20E4CD0 + ((uint)*(uchar *)(v2 + 1) << 25 >> 30)) - 8155,
      (uchar)v10,
      v7 + 3,
      1u,
      1u,
      0x10u);
    Function_2019cb8(
      **(uint **)(v1 + 4),
      v5,
      4 * *((uchar *)&dword_20E4CD0 + ((uint)*(uchar *)(v2 + 1) << 25 >> 30)) - 8154,
      (v9 + 2) & 0xFF,
      v7 + 3,
      1u,
      1u,
      0x10u);
    Function_2019448(**(uint ***)(v1 + 4), v5);
    *(uchar *)(v2 + 1) = *(uchar *)(v2 + 1) & 0xE0 | 8;
    result = (uchar)(*(uchar *)(v2 + 1) & 0x9F) | 32
                                                          * (((uint)*(uchar *)(v2 + 1) << 25 >> 30) + 1) & 0x7F;
  }
  *(uchar *)(v2 + 1) = result;
  return result;
}

//----- (02002968) --------------------------------------------------------
int __fastcall Function_2002968(int a1)
{
  int v1
  int v2
  int v3
  uchar v4
  int v5

  v1 = a1;
  v2 = Function_201c290(*(uint *)(a1 + 4));
  v3 = Function_201c29c(*(uint *)(v1 + 4));
  v4 = Function_201c2a0(*(uint *)(v1 + 4)) + 2;
  v5 = v3 + Function_201c294(*(uint *)(v1 + 4));
  Function_2019cb8(**(uint **)(v1 + 4), v2, 57371, (v5 + 1) & 0xFF, v4, 1u, 2u, 0x10u);
  Function_2019cb8(**(uint **)(v1 + 4), v2, 57372, (v5 + 2) & 0xFF, v4, 1u, 2u, 0x10u);
  return Function_2019448(**(uint ***)(v1 + 4), v2);
}

//----- (020029FC) --------------------------------------------------------
int NewTextBoxAtButtonPress()
{
  if ( !(dword_21BF6C4 & 3) )
    return 0;
  Function_2005748(0x5DCu);
  byte_2101D44 = -126;
  return 1;
}

//----- (02002A44) --------------------------------------------------------
int __fastcall Function_2002a44_CallNewTextBoxAtButtonPress(int a1)
{
  int v1

  v1 = *(uchar *)(a1 + 34);
  if ( v1 == 100 )
    return 1;
  *(uchar *)(a1 + 34) = v1 + 1;
  return 0;
}

//----- (02002A80) --------------------------------------------------------
int __fastcall Function_2002a80_CallNewTextBoxAtButtonPress(int a1)
{
  Function_20027e0(a1);
  return NewTextBoxAtButtonPress();
}

//----- (02002AA4) --------------------------------------------------------
int Function_2002aa4_CallNewTextBoxAtButtonPress()
{
  return (uchar)NewTextBoxAtButtonPress();
}

//----- (02002AC8) --------------------------------------------------------
int __fastcall Function_2002ac8(char a1)
{
  int result

  result = a1 & 1 | 2;
  byte_2101D44 = result;
  return result;
}

//----- (02002AE4) --------------------------------------------------------
int __fastcall Function_2002ae4(int a1)
{
  int result

  result = 32 * (a1 >> 1) & 0x3F | 2;
  byte_2101D44 = result;
  return result;
}

//----- (02002B20) --------------------------------------------------------
int __fastcall Function_2002b20(uchar a1)
{
  int result

  result = 16 * a1 & 0x1F | 2;
  byte_2101D44 = result;
  return result;
}

//----- (02002B3C) --------------------------------------------------------
int Function_2002b3c()
{
  return 0;
}

//----- (02002B4C) --------------------------------------------------------
int Function_2002b4c()
{
  int result

  result = 64;
  byte_2101D44 = 2;
  return result;
}

//----- (02002B5C) --------------------------------------------------------
int Function_2002b5c()
{
  return 0;
}

//----- (02002B6C) --------------------------------------------------------
int Function_2002b6c()
{
  int result

  result = 128;
  byte_2101D44 = 2;
  return result;
}

//----- (02002B7C) --------------------------------------------------------
int Function_2002b7c()
{
  uint v0
  int v1
  uint *v2

  v0 = 0;
  dword_2101D48 = (int)sub_2101D4C;
  v1 = 0;
  do
  {
    ++v0;
    *(uint *)(v1 + 167772292) = 0;
    v2 = (uint *)(v1 + 167772308);
    v1 += 4;
    *v2 = 0;
  }
  while ( v0 < 4 );
  return Function_201d670((int)Unknown_20e4ce4);
}

//----- (02002BB8) --------------------------------------------------------
uint *__fastcall Function_2002bb8(int a1, uint a2)
{
  int v2
  uint *result

  v2 = 4 * a1;
  result = Function_20232e0(14, (ushort)word_20E4CD4[2 * a1], 1, (ushort)word_20E4CD6[2 * a1], a2);
  *(uint *)(v2 + 167772308) = result;
  return result;
}

//----- (02002BEC) --------------------------------------------------------
uint *__fastcall Function_2002bec(int a1)
{
  int v1
  int v2

  v1 = a1;
  if ( a1 >= 4 )
    ErrorHandler();
  v2 = 4 * v1;
  if ( !*(uint *)(v2 + 167772308) )
    ErrorHandler();
  return Function_2023330(*(uint **)(v2 + 167772308), 0);
}

//----- (02002C28) --------------------------------------------------------
uint *__fastcall Function_2002c28(int a1)
{
  int v1
  int v2

  v1 = a1;
  if ( a1 >= 4 )
    ErrorHandler();
  v2 = 4 * v1;
  if ( !*(uint *)(v2 + 167772308) )
    ErrorHandler();
  return Function_2023330(*(uint **)(v2 + 167772308), 1);
}

//----- (02002C60) --------------------------------------------------------
uint *__fastcall Function_2002c60(int a1)
{
  int v1
  int v2
  short *v3
  uint v4
  int v5
  uint *result

  v1 = a1;
  if ( a1 >= 4 )
    ErrorHandler();
  v2 = *(uint *)(4 * v1 + 0xA000084);
  if ( v2 )
  {
    v3 = word_20E4CD4;
    v4 = 0;
    v5 = 167772160;
    while ( v4 == v1 || *v3 != word_20E4CD4[2 * v1] || !*(uint *)(v5 + 148) )
    {
      ++v4;
      v3 += 2;
      v5 += 4;
      if ( v4 >= 4 )
        goto LABEL_10;
    }
    *(uint *)(4 * v4 + 0xA000084) = v2;
LABEL_10:
    if ( v4 == 4 )
    {
      free(*(uint *)(4 * v1 + 0xA000084));
      *(uint *)(4 * v1 + 0xA000084) = 0;
    }
  }
  result = *(uint **)(4 * v1 + 0xA000094);
  if ( result )
  {
    Function_2023318(result);
    result = (uint *)(4 * v1 + 167772308);
    *(uint *)(4 * v1 + 0xA000094) = 0;
  }
  return result;
}

//----- (02002CFC) --------------------------------------------------------
int __fastcall Function_2002cfc(int a1)
{
  Function_20234a0(*(uint *)(4 * a1 + 0xA000094));
  return 167772160;
}

//----- (02002D18) --------------------------------------------------------
void __fastcall Call_TextInterpreter(char a1, int a2)
{
  if ( !(*(uchar *)(a2 + 33) & 0x80) )
  {
    *(uchar *)(a2 + 32) = a1 & 0xF | *(uchar *)(a2 + 32) & 0xF0;
    *(uchar *)(a2 + 33) |= 0x80u;
  }
  TextInterpreter(a2);
}

//----- (02002D48) --------------------------------------------------------
int __fastcall Function_2002d48(int a1, ushort *a2, int a3)
{
  int v3
  ushort *v4
  int v5

  v3 = 4 * a1;
  v4 = a2;
  v5 = a3;
  if ( !*(uint *)(4 * a1 + 0xA000094) )
    ErrorHandler();
  return Function_2023620(*(uint *)(v3 + 167772308), v4, v5);
}

//----- (02002D7C) --------------------------------------------------------
int __fastcall Function_2002d7c(int a1, int a2, int a3)
{
  int v3
  int v4
  int v5
  ushort *v6

  v3 = 4 * a1;
  v4 = a2;
  v5 = a3;
  if ( !*(uint *)(4 * a1 + 0xA000094) )
    ErrorHandler();
  v6 = (ushort *)Function_2023e2c(v4, a2);
  return Function_2023620(*(uint *)(v3 + 167772308), v6, v5);
}

//----- (02002DB4) --------------------------------------------------------
int __fastcall Function_2002db4(int a1, int a2, ushort *a3)
{
  int v3
  int v4
  ushort *v5
  int v6
  ushort *v7

  v3 = 4 * a1;
  v4 = a2;
  v5 = a3;
  if ( !*(uint *)(4 * a1 + 0xA000094) )
    ErrorHandler();
  Function_20237e8((int)v5, a2);
  Function_2023f10(v5, v4);
  v7 = (ushort *)Function_2023e2c((int)v5, v6);
  return Function_202366c(*(uint *)(v3 + 167772308), v7);
}

//----- (02002DF8) --------------------------------------------------------
int __fastcall Function_2002df8_GetLineHeight(int a1, uint a2)
{
  int v2

  v2 = 0;
  switch ( (uchar)a2 )
  {
    case 0:
      v2 = (uchar)Unknown_20e4ce4[8 * a1];
      break;
    case 1:
      v2 = (uchar)byte_20E4CE5[8 * a1];
      break;
    case 2:
      v2 = (uchar)byte_20E4CE5[8 * a1 + 1];
      break;
    case 3:
      v2 = (uchar)byte_20E4CE5[8 * a1 + 2];
      break;
    case 4:
      v2 = *((uchar *)&off_20E4CE8 + 8 * a1);
      break;
    case 5:
      v2 = *((uchar *)&off_20E4CE8 + 8 * a1 + 1);
      break;
    case 6:
      v2 = *((uchar *)&off_20E4CE8 + 8 * a1 + 2);
      break;
    case 7:
      v2 = *((uchar *)&off_20E4CE8 + 8 * a1 + 3);
      break;
    default:
      return v2;
  }
  return v2;
}