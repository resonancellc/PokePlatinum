//----- (0221FC20) --------------------------------------------------------
int __fastcall Function_221fc20(int a1, int a2, int a3, uint a4)
{
  int v4;
  int v5;
  uint v6;
  int v7;
  uint v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int result;
  int v16;

  v4 = a1;
  v16 = a3;
  v5 = a2;
  v6 = a4;
  v7 = a2 + 852;
  v8 = 0;
  v9 = 0;
  do
    *(uchar *)(v7 + v8++) = 0;
  while ( v8 < 0x1C );
  do
  {
    if ( v6 & 1 )
      *(uchar *)(v5 + v9 + 856) = 100;
    else
      *(uchar *)(v5 + v9 + 856) = 0;
    ++v9;
    v6 = v6 << 23 >> 24;
  }
  while ( v9 < 4 );
  v10 = ((int (__fastcall *)(int, int, int, uint, int))dword_2253DD8[805])(v4, v5, v16, 0, -1) & 0xFF;
  v11 = 0;
  do
  {
    if ( Function_20787cc(v11) & v10 )
      *(uchar *)(v5 + v11 + 856) = 0;
    v12 = ((int (__fastcall *)(int))dword_223F350[91])(v4);
    v13 = v5 + v11++;
    *(uchar *)(v13 + 876) = 100 - ((v12 < 0) + __ROR4__((v12 << 28) - ((uint)v12 >> 31), 28));
  }
  while ( v11 < 4 );
  *(uchar *)(v5 + 972) = 0;
  if ( *(uint *)(v4 + 44) & 0x100 )
    v14 = 0x20000000;
  else
    v14 = *(uint *)(v4 + 52 * v16 + 184);
  *(uint *)(v5 + 864) = v14;
  result = 2;
  if ( *(uint *)(v4 + 44) & 2 )
  {
    result = *(uint *)(v5 + 864) | 0x80;
    *(uint *)(v5 + 864) = result;
  }
  return result;
}

//----- (0221FCF4) --------------------------------------------------------
int __fastcall Function_14_221fcf4(int a1, int a2)
{
  int v2;
  int v3;
  uchar *v4;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = *(uchar **)(a1 + 48);
  if ( !(v4[868] & 0x10) )
  {
    v4[975] = a2;
    v4[976] = ((int (*)(void))dword_2253DD8[3220])();
    Function_221fc20(v2, (int)v4, (uchar)v4[975], 0xFu);
  }
  if ( *(uint *)(v2 + 44) & 2 )
    result = Function_221fe38(v2, v4, v3);
  else
    result = Function_221fd44(v2, v4, v3);
  return result;
}

//----- (0221FD44) --------------------------------------------------------
int __fastcall Function_221fd44(int a1, int a2)
{
  int v2;
  int i;
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint v10;
  int v11;
  int v12;
  char v13[4];
  uchar v14;

  v12 = a1;
  v2 = a2;
  Function_2222c88();
  for ( i = *(uint *)(v2 + 864); i; i = *(uint *)(v2 + 864) )
  {
    if ( i & 1 )
    {
      if ( !(*(uchar *)(v2 + 868) & 0x10) )
        *(uchar *)(v2 + 852) = 0;
      AIHandler(v12, v2);
    }
    *(uint *)(v2 + 864) >>= 1;
    ++*(uchar *)(v2 + 869);
    *(uchar *)(v2 + 853) = 0;
  }
  if ( *(uchar *)(v2 + 868) & 2 )
  {
    result = 4;
  }
  else if ( *(uchar *)(v2 + 868) & 4 )
  {
    result = 5;
  }
  else
  {
    v5 = 1;
    v14 = *(uchar *)(v2 + 856);
    v13[0] = 0;
    v6 = 1;
    v7 = v2 + 192 * *(uchar *)(v2 + 975) + 2;
    do
    {
      if ( *(ushort *)(v7 + 11596) )
      {
        v8 = *(char *)(v2 + v6 + 856);
        if ( v14 == v8 )
        {
          *(&v14 + v5) = v8;
          v9 = v5;
          v5 = (v5 + 1) & 0xFF;
          v13[v9] = v6;
        }
        if ( v14 < v8 )
        {
          v14 = v8;
          v5 = 1;
          v13[0] = v6;
        }
      }
      ++v6;
      v7 += 2;
    }
    while ( v6 < 4 );
    v10 = ((int (__fastcall *)(int))dword_223F350[91])(v12);
    s32_div_f(v10, v5);
    result = (uchar)v13[v11];
  }
  *(uchar *)(v2 + *(uchar *)(v2 + 975) + 986) = *(uchar *)(v2 + 976);
  return result;
}

//----- (0221FE38) --------------------------------------------------------
int __fastcall Function_221fe38(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int i;
  int v8;
  int v9;
  int v10;
  int v11;
  uint v12;
  int v13;
  int v14;
  int v15;
  int v16;
  short *v17;
  int v18;
  uint v19;
  int v20;
  int v21;
  int v22;
  int v23;
  char *v25;
  char *v26;
  int v27;
  int v28;
  char v29[4];
  char v30[4];
  char v31[4];
  char v32[4];
  char v33;
  short v34;
  int v35;

  v35 = a4;
  v4 = a1;
  v28 = 0;
  v5 = a2;
  v26 = v31;
  v27 = a2;
  v25 = &v33;
  do
  {
    v6 = *(uchar *)(v5 + 975);
    if ( v28 != v6 && *(uint *)(v27 + 11660) )
    {
      Function_221fc20(v4, v5, v6, 0xFu);
      *(uchar *)(v5 + 976) = v28;
      if ( (v28 & 1) != (*(uchar *)(v5 + 975) & 1) )
        Function_2222c88(v4, v5);
      *(uchar *)(v5 + 869) = 0;
      *(uchar *)(v5 + 853) = 0;
      for ( i = *(uint *)(v5 + 864); i; *(uchar *)(v5 + 853) = 0 )
      {
        if ( i & 1 )
        {
          if ( !(*(uchar *)(v5 + 868) & 0x10) )
            *(uchar *)(v5 + 852) = 0;
          AIHandler(v4, v5);
        }
        i >>= 1;
        ++*(uchar *)(v5 + 869);
      }
      if ( *(uchar *)(v5 + 868) & 2 )
      {
        *v26 = 4;
      }
      else if ( *(uchar *)(v5 + 868) & 4 )
      {
        *v26 = 5;
      }
      else
      {
        v30[0] = *(uchar *)(v5 + 856);
        v29[0] = 0;
        v8 = 1;
        v9 = 1;
        v10 = v5 + 192 * *(uchar *)(v5 + 975) + 2;
        do
        {
          if ( *(ushort *)(v10 + 11596) )
          {
            v11 = *(char *)(v5 + v9 + 856);
            if ( (uchar)v30[0] == v11 )
            {
              v30[v8] = v11;
              v29[v8++] = v9;
            }
            if ( (uchar)v30[0] < v11 )
            {
              v30[0] = v11;
              v29[0] = v9;
              v8 = 1;
            }
          }
          ++v9;
          v10 += 2;
        }
        while ( v9 < 4 );
        v12 = ((int (__fastcall *)(int))dword_223F350[91])(v4);
        s32_div_f(v12, v8);
        *v26 = v29[v13];
        *(ushort *)v25 = (uchar)v30[0];
        if ( v28 == (*(uchar *)(v5 + 975) ^ 2) && *(short *)v25 < 100 )
          *(ushort *)v25 = -1;
      }
    }
    else
    {
      *v26 = -1;
      *(ushort *)v25 = -1;
    }
    v27 += 192;
    ++v26;
    v25 += 2;
    ++v28;
  }
  while ( v28 < 4 );
  v14 = *(short *)&v33;
  v15 = 1;
  v32[0] = 0;
  v16 = 1;
  v17 = &v34;
  do
  {
    v18 = *v17;
    if ( v14 == v18 )
      v32[v15++] = v16;
    if ( v14 < v18 )
    {
      v14 = v18;
      v32[0] = v16;
      v15 = 1;
    }
    ++v16;
    ++v17;
  }
  while ( v16 < 4 );
  v19 = ((int (__fastcall *)(int, int, short *))dword_223F350[91])(v4, v14, v17);
  s32_div_f(v19, v15);
  *(uchar *)(v5 + *(uchar *)(v5 + 975) + 986) = v32[v20];
  v21 = *(uchar *)(v5 + 975);
  v22 = v31[*(uchar *)(v5 + v21 + 986)];
  v23 = *(ushort *)(v5 + 192 * v21 + 2 * v22 + 11596);
  if ( *(ushort *)(v5 + 16 * v23 + 998) == 512 && !((int (__fastcall *)(int))dword_223E208[0])(v4) )
    *(uchar *)(v5 + *(uchar *)(v5 + 975) + 986) = *(uchar *)(v5 + 975);
  if ( v23 == 174
    && !((int (__fastcall *)(int, int, uint))dword_2253DD8[1758])(v5, 174, *(uchar *)(v5 + 975)) )
  {
    *(uchar *)(v5 + *(uchar *)(v5 + 975) + 986) = *(uchar *)(v5 + 975);
  }
  return (uchar)v22;
}

//----- (02220078) --------------------------------------------------------
int __fastcall AIHandler(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  int v6;
  short v7;

  v2 = a1;
  v3 = a2;
  for ( result = *(uchar *)(a2 + 852); result != 2; result = *(uchar *)(v3 + 852) )
  {
    if ( result )
    {
      if ( result == 1 )
      {
        if ( *(ushort *)(v3 + 854) )
        {
          ((void (__fastcall *)(int, int))*(&off_222EEAC
                                          + *(uint *)(*(uint *)(v3 + 8500) + 4 * *(uint *)(v3 + 8504))))(
            v2,
            v3);
        }
        else
        {
          *(uchar *)(v3 + *(uchar *)(v3 + 853) + 856) = 0;
          *(uchar *)(v3 + 868) |= 1u;
        }
        if ( *(uchar *)(v3 + 868) & 1 )
        {
          if ( (uchar)++*(uchar *)(v3 + 853) >= 4u || *(uchar *)(v3 + 868) & 8 )
            ++*(uchar *)(v3 + 852);
          else
            *(uchar *)(v3 + 852) = 0;
          *(uchar *)(v3 + 868) &= 0xFEu;
        }
      }
    }
    else
    {
      *(uint *)(v3 + 8504) = *(uint *)(*(uint *)(v3 + 8500) + 4 * *(uchar *)(v3 + 869));
      v5 = v3 + 192 * *(uchar *)(v3 + 975);
      v6 = *(uchar *)(v3 + 853);
      if ( *(uchar *)(v5 + v6 + 11628) )
        v7 = *(ushort *)(v5 + 2 * v6 + 11596);
      else
        v7 = 0;
      *(ushort *)(v3 + 854) = v7;
      ++*(uchar *)(v3 + 852);
    }
  }
  return result;
}

//----- (02220184) --------------------------------------------------------
int __fastcall AICmd_RandomJumpLt(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  uint v6;
  int result;

  v2 = a2;
  v3 = a1;
  AIHandler_AddToPointer(a2, 1);
  v4 = AIHandler_LoadWord(v2);
  v5 = AIHandler_LoadWord(v2);
  v6 = ((int (__fastcall *)(int))dword_223F350[91])(v3);
  result = (v6 >> 31) + __ROR4__((v6 << 24) - (v6 >> 31), 24);
  if ( result < v4 )
    result = AIHandler_AddToPointer(v2, v5);
  return result;
}

//----- (022201C4) --------------------------------------------------------
int __fastcall AICmd_RandomJumpGt(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  uint v6;
  int result;

  v2 = a2;
  v3 = a1;
  AIHandler_AddToPointer(a2, 1);
  v4 = AIHandler_LoadWord(v2);
  v5 = AIHandler_LoadWord(v2);
  v6 = ((int (__fastcall *)(int))dword_223F350[91])(v3);
  result = (v6 >> 31) + __ROR4__((v6 << 24) - (v6 >> 31), 24);
  if ( result > v4 )
    result = AIHandler_AddToPointer(v2, v5);
  return result;
}

//----- (02220204) --------------------------------------------------------
int __fastcall AICmd_RandomJumpEq(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  uint v6;
  int result;

  v2 = a2;
  v3 = a1;
  AIHandler_AddToPointer(a2, 1);
  v4 = AIHandler_LoadWord(v2);
  v5 = AIHandler_LoadWord(v2);
  v6 = ((int (__fastcall *)(int))dword_223F350[91])(v3);
  result = (v6 >> 31) + __ROR4__((v6 << 24) - (v6 >> 31), 24);
  if ( v4 == result )
    result = AIHandler_AddToPointer(v2, v5);
  return result;
}

//----- (02220244) --------------------------------------------------------
int __fastcall AICmd_RandomJumpNe(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  uint v6;
  int result;

  v2 = a2;
  v3 = a1;
  AIHandler_AddToPointer(a2, 1);
  v4 = AIHandler_LoadWord(v2);
  v5 = AIHandler_LoadWord(v2);
  v6 = ((int (__fastcall *)(int))dword_223F350[91])(v3);
  result = (v6 >> 31) + __ROR4__((v6 << 24) - (v6 >> 31), 24);
  if ( v4 != result )
    result = AIHandler_AddToPointer(v2, v5);
  return result;
}

//----- (02220284) --------------------------------------------------------
int __fastcall AICmd_AddScore(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  *(uchar *)(v2 + 856 + *(uchar *)(v2 + 853)) += AIHandler_LoadWord(v2);
  v3 = *(uchar *)(v2 + 853);
  result = *(char *)(v2 + 856 + v3);
  if ( result < 0 )
  {
    result = 0;
    *(uchar *)(v2 + 856 + v3) = 0;
  }
  return result;
}

//----- (022202B8) --------------------------------------------------------
uint __fastcall AICmd_HPLt(int a1, int a2)
{
  int v2;
  uchar v3;
  uint v4;
  int v5;
  int v6;
  uint result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  v5 = AIHandler_LoadWord(v2);
  v6 = AI_GetPkmnDataSlot(v2, v3);
  result = u32_div_f(100 * *(uint *)(v2 + 192 * v6 + 11660), *(uint *)(v2 + 192 * v6 + 11664));
  if ( result < v4 )
    result = AIHandler_AddToPointer(v2, v5);
  return result;
}

//----- (02220310) --------------------------------------------------------
uint __fastcall AICmd_HPGt(int a1, int a2)
{
  int v2;
  uchar v3;
  uint v4;
  int v5;
  int v6;
  uint result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  v5 = AIHandler_LoadWord(v2);
  v6 = AI_GetPkmnDataSlot(v2, v3);
  result = u32_div_f(100 * *(uint *)(v2 + 192 * v6 + 11660), *(uint *)(v2 + 192 * v6 + 11664));
  if ( result > v4 )
    result = AIHandler_AddToPointer(v2, v5);
  return result;
}

//----- (02220368) --------------------------------------------------------
int __fastcall AICmd_HPEq(int a1, int a2)
{
  int v2;
  uchar v3;
  int v4;
  int v5;
  int v6;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  v5 = AIHandler_LoadWord(v2);
  v6 = AI_GetPkmnDataSlot(v2, v3);
  result = u32_div_f(100 * *(uint *)(v2 + 192 * v6 + 11660), *(uint *)(v2 + 192 * v6 + 11664));
  if ( result == v4 )
    result = AIHandler_AddToPointer(v2, v5);
  return result;
}

//----- (022203C0) --------------------------------------------------------
int __fastcall AICmd_HPNe(int a1, int a2)
{
  int v2;
  uchar v3;
  int v4;
  int v5;
  int v6;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  v5 = AIHandler_LoadWord(v2);
  v6 = AI_GetPkmnDataSlot(v2, v3);
  result = u32_div_f(100 * *(uint *)(v2 + 192 * v6 + 11660), *(uint *)(v2 + 192 * v6 + 11664));
  if ( result != v4 )
    result = AIHandler_AddToPointer(v2, v5);
  return result;
}

//----- (02220418) --------------------------------------------------------
int __fastcall AICmd_StatusEffectTstNe(int a1, int a2)
{
  int v2;
  uchar v3;
  int v4;
  int v5;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  v5 = AIHandler_LoadWord(v2);
  result = *(uint *)(v2 + 192 * AI_GetPkmnDataSlot(v2, v3) + 11692);
  if ( result & v4 )
    result = AIHandler_AddToPointer(v2, v5);
  return result;
}

//----- (02220464) --------------------------------------------------------
int __fastcall AICmd_StatusEffectTstEq(int a1, int a2)
{
  int v2;
  uchar v3;
  int v4;
  int v5;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  v5 = AIHandler_LoadWord(v2);
  result = *(uint *)(v2 + 192 * AI_GetPkmnDataSlot(v2, v3) + 11692);
  if ( !(result & v4) )
    result = AIHandler_AddToPointer(v2, v5);
  return result;
}

//----- (022204B0) --------------------------------------------------------
int __fastcall AICmd_b(int a1, int a2)
{
  int v2;
  uchar v3;
  int v4;
  int v5;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  v5 = AIHandler_LoadWord(v2);
  result = *(uint *)(v2 + 192 * AI_GetPkmnDataSlot(v2, v3) + 11696);
  if ( result & v4 )
    result = AIHandler_AddToPointer(v2, v5);
  return result;
}

//----- (022204FC) --------------------------------------------------------
int __fastcall AICmd_c(int a1, int a2)
{
  int v2;
  uchar v3;
  int v4;
  int v5;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  v5 = AIHandler_LoadWord(v2);
  result = *(uint *)(v2 + 192 * AI_GetPkmnDataSlot(v2, v3) + 11696);
  if ( !(result & v4) )
    result = AIHandler_AddToPointer(v2, v5);
  return result;
}

//----- (02220548) --------------------------------------------------------
int __fastcall AICmd_d(int a1, int a2)
{
  int v2;
  uchar v3;
  int v4;
  int v5;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  v5 = AIHandler_LoadWord(v2);
  result = *(uint *)(v2 + 192 * AI_GetPkmnDataSlot(v2, v3) + 11712);
  if ( result & v4 )
    result = AIHandler_AddToPointer(v2, v5);
  return result;
}

//----- (02220590) --------------------------------------------------------
int __fastcall AICmd_e(int a1, int a2)
{
  int v2;
  uchar v3;
  int v4;
  int v5;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  v5 = AIHandler_LoadWord(v2);
  result = *(uint *)(v2 + 192 * AI_GetPkmnDataSlot(v2, v3) + 11712);
  if ( !(result & v4) )
    result = AIHandler_AddToPointer(v2, v5);
  return result;
}

//----- (022205D8) --------------------------------------------------------
int __fastcall AICmd_f(int a1, int a2)
{
  int v2;
  int v3;
  uchar v4;
  int v5;
  int v6;
  int result;
  int v8;

  v2 = a2;
  v3 = a1;
  AIHandler_AddToPointer(a2, 1);
  v4 = AIHandler_LoadWord(v2);
  v5 = AIHandler_LoadWord(v2);
  v8 = AIHandler_LoadWord(v2);
  v6 = AI_GetPkmnDataSlot(v2, v4);
  result = *(uint *)(v2 + 4 * ((int (__fastcall *)(int, int))dword_223E208[0])(v3, v6) + 444);
  if ( result & v5 )
    result = AIHandler_AddToPointer(v2, v8);
  return result;
}

//----- (02220628) --------------------------------------------------------
int __fastcall AICmd_10(int a1, int a2)
{
  int v2;
  int v3;
  uchar v4;
  int v5;
  int v6;
  int result;
  int v8;

  v2 = a2;
  v3 = a1;
  AIHandler_AddToPointer(a2, 1);
  v4 = AIHandler_LoadWord(v2);
  v5 = AIHandler_LoadWord(v2);
  v8 = AIHandler_LoadWord(v2);
  v6 = AI_GetPkmnDataSlot(v2, v4);
  result = *(uint *)(v2 + 4 * ((int (__fastcall *)(int, int))dword_223E208[0])(v3, v6) + 444);
  if ( !(result & v5) )
    result = AIHandler_AddToPointer(v2, v8);
  return result;
}

//----- (02220678) --------------------------------------------------------
int __fastcall AICmd_11(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  result = *(uint *)(v2 + 860);
  if ( result < v3 )
    result = AIHandler_AddToPointer(v2, v4);
  return result;
}

//----- (022206A8) --------------------------------------------------------
int __fastcall AICmd_12(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  result = *(uint *)(v2 + 860);
  if ( result > v3 )
    result = AIHandler_AddToPointer(v2, v4);
  return result;
}

//----- (022206D8) --------------------------------------------------------
int __fastcall AICmd_13(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  result = *(uint *)(v2 + 860);
  if ( result == v3 )
    result = AIHandler_AddToPointer(v2, v4);
  return result;
}

//----- (02220708) --------------------------------------------------------
int __fastcall AICmd_14(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  result = *(uint *)(v2 + 860);
  if ( result != v3 )
    result = AIHandler_AddToPointer(v2, v4);
  return result;
}

//----- (02220738) --------------------------------------------------------
int __fastcall AICmd_15(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  result = *(uint *)(v2 + 860);
  if ( result & v3 )
    result = AIHandler_AddToPointer(v2, v4);
  return result;
}

//----- (02220768) --------------------------------------------------------
int __fastcall AICmd_16(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  result = *(uint *)(v2 + 860);
  if ( !(result & v3) )
    result = AIHandler_AddToPointer(v2, v4);
  return result;
}

//----- (02220798) --------------------------------------------------------
int __fastcall AICmd_MoveEq(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  result = *(ushort *)(v2 + 854);
  if ( result == v3 )
    result = AIHandler_AddToPointer(v2, v4);
  return result;
}

//----- (022207C8) --------------------------------------------------------
int __fastcall AICmd_MoveNe(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  result = *(ushort *)(v2 + 854);
  if ( result != v3 )
    result = AIHandler_AddToPointer(v2, v4);
  return result;
}

//----- (022207F8) --------------------------------------------------------
int __fastcall AICmd_19(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v5 = AIHandler_LoadWord(v2);
  result = Function_2222d10(v2, v3);
  if ( result != -1 )
  {
    while ( *(uint *)(v2 + 860) != result )
    {
      result = Function_2222d10(v2, ++v3);
      if ( result == -1 )
        return result;
    }
    result = AIHandler_AddToPointer(v2, v5);
  }
  return result;
}

//----- (0222084C) --------------------------------------------------------
int __fastcall AICmd_1a(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v5 = AIHandler_LoadWord(v2);
  result = Function_2222d10(v2, v3);
  if ( result == -1 )
    return AIHandler_AddToPointer(v2, v5);
  while ( *(uint *)(v2 + 860) != result )
  {
    result = Function_2222d10(v2, ++v3);
    if ( result == -1 )
      return AIHandler_AddToPointer(v2, v5);
  }
  return result;
}

//----- (0222089C) --------------------------------------------------------
int __fastcall AICmd_1b(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  int v6;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  result = 0;
  v5 = v2 + 192 * *(uchar *)(v2 + 975);
  v6 = 0;
  do
  {
    if ( *(ushort *)(v5 + 11596)
      && *(uchar *)(v2 + 16 * *(ushort *)(v2 + 192 * *(uchar *)(v2 + 975) + v6 + 11596) + 993) )
    {
      break;
    }
    ++result;
    v5 += 2;
    v6 += 2;
  }
  while ( result < 4 );
  if ( result < 4 )
    result = AIHandler_AddToPointer(v2, v3);
  return result;
}

//----- (02220900) --------------------------------------------------------
int __fastcall AICmd_1c(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  int v6;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  result = 0;
  v5 = v2 + 192 * *(uchar *)(v2 + 975);
  v6 = 0;
  do
  {
    if ( *(ushort *)(v5 + 11596)
      && *(uchar *)(v2 + 16 * *(ushort *)(v2 + 192 * *(uchar *)(v2 + 975) + v6 + 11596) + 993) )
    {
      break;
    }
    ++result;
    v5 += 2;
    v6 += 2;
  }
  while ( result < 4 );
  if ( result == 4 )
    result = AIHandler_AddToPointer(v2, v3);
  return result;
}

//----- (02220964) --------------------------------------------------------
int __fastcall AICmd_GetRoundNr(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  result = 860;
  *(uint *)(v2 + 860) = *(uint *)(v2 + 336);
  return result;
}

//----- (02220980) --------------------------------------------------------
uint __fastcall AICmd_GetType(int a1, int a2)
{
  int v2;
  int v3;
  uint v4;
  uint result;
  int v6;
  int v7;
  int v8;
  int v9;

  v2 = a2;
  v3 = a1;
  AIHandler_AddToPointer(a2, 1);
  v4 = AIHandler_LoadWord(v2);
  if ( v4 <= 8 )
    JUMPOUT(__CS__, *((short *)&off_22209A6 + v4) + 35785128);
  switch ( (uchar)v4 )
  {
    case 0:
      result = ((int (__fastcall *)(int, uint, int, uint))dword_2252060[0])(
                 v2,
                 *(uchar *)(v2 + 976),
                 27,
                 0);
      *(uint *)(v2 + 860) = result;
      break;
    case 1:
      result = ((int (__fastcall *)(int, uint, int, uint))dword_2252060[0])(
                 v2,
                 *(uchar *)(v2 + 975),
                 27,
                 0);
      *(uint *)(v2 + 860) = result;
      break;
    case 2:
      result = ((int (__fastcall *)(int, uint, int, uint))dword_2252060[0])(
                 v2,
                 *(uchar *)(v2 + 976),
                 28,
                 0);
      *(uint *)(v2 + 860) = result;
      break;
    case 3:
      result = ((int (__fastcall *)(int, uint, int, uint))dword_2252060[0])(
                 v2,
                 *(uchar *)(v2 + 975),
                 28,
                 0);
      *(uint *)(v2 + 860) = result;
      break;
    case 4:
      result = 860;
      *(uint *)(v2 + 860) = *(uchar *)(v2 + 16 * *(ushort *)(v2 + 854) + 994);
      break;
    case 5:
      v7 = ((int (__fastcall *)(int, uint))dword_223E258[0])(v3, *(uchar *)(v2 + 976));
      result = ((int (__fastcall *)(int, int, int, uint))dword_2252060[0])(v2, v7, 27, 0);
      *(uint *)(v2 + 860) = result;
      break;
    case 6:
      v6 = ((int (__fastcall *)(int, uint))dword_223E258[0])(v3, *(uchar *)(v2 + 975));
      result = ((int (__fastcall *)(int, int, int, uint))dword_2252060[0])(v2, v6, 27, 0);
      *(uint *)(v2 + 860) = result;
      break;
    case 7:
      v9 = ((int (__fastcall *)(int, uint))dword_223E258[0])(v3, *(uchar *)(v2 + 976));
      result = ((int (__fastcall *)(int, int, int, uint))dword_2252060[0])(v2, v9, 27, 0);
      *(uint *)(v2 + 860) = result;
      break;
    case 8:
      v8 = ((int (__fastcall *)(int, uint))dword_223E258[0])(v3, *(uchar *)(v2 + 975));
      result = ((int (__fastcall *)(int, int, int, uint))dword_2252060[0])(v2, v8, 28, 0);
      *(uint *)(v2 + 860) = result;
      break;
    default:
      result = ErrorHandler();
      break;
  }
  return result;
}

//----- (02220AB4) --------------------------------------------------------
int __fastcall AICmd_52(int a1, int a2)
{
  int v2;
  uchar v3;
  int v4;
  int v5;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  v5 = AI_GetPkmnDataSlot(v2, v3);
  if ( v4 != ((int (__fastcall *)(int, int, int, uint))dword_2252060[0])(v2, v5, 27, 0)
    && v4 != ((int (__fastcall *)(int, int, int, uint))dword_2252060[0])(v2, v5, 28, 0) )
  {
    result = 860;
    *(uint *)(v2 + 860) = 0;
  }
  else
  {
    result = 860;
    *(uint *)(v2 + 860) = 1;
  }
  return result;
}

//----- (02220B10) --------------------------------------------------------
int __fastcall AICmd_1f(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  result = 860;
  *(uint *)(v2 + 860) = *(uchar *)(v2 + 16 * *(ushort *)(v2 + 854) + 993);
  return result;
}

//----- (02220B34) --------------------------------------------------------
int __fastcall AICmd_20(int a1, int a2, int a3, int a4)
{
  int v4;
  short *v5;
  int v6;
  int v7;
  int v8;
  short *v9;
  int v10;
  int v11;
  char *v12;
  int v13;
  int v14;
  char *v15;
  int v16;
  int result;
  int v18;
  int v19;
  char v20;
  char v21[16];
  int v22;

  v22 = a4;
  v4 = a2;
  v18 = a1;
  AIHandler_AddToPointer(a2, 1);
  v19 = AIHandler_LoadWord(v4);
  v5 = word_222EE90;
  v6 = 16 * *(ushort *)(v4 + 854);
  v7 = *(ushort *)(v4 + v6 + 990);
  v8 = 0;
  do
  {
    if ( v7 == (ushort)*v5 )
      break;
    ++v5;
    ++v8;
  }
  while ( (ushort)*v5 != 0xFFFF );
  v9 = word_222EE78;
  v10 = 0;
  do
  {
    if ( v7 == (ushort)*v9 )
      break;
    ++v9;
    ++v10;
  }
  while ( (ushort)*v9 != 0xFFFF );
  if ( (ushort)word_222EE78[v10] == 0xFFFF
    && (*(uchar *)(v4 + v6 + 993) <= 1u || (ushort)word_222EE90[v8] != 0xFFFF) )
  {
    result = 860;
    *(uint *)(v4 + 860) = 0;
  }
  else
  {
    v11 = 0;
    v12 = &v20;
    do
      *v12++ = ((int (__fastcall *)(int, uint, int, uint))dword_2252060[0])(
                 v4,
                 *(uchar *)(v4 + 975),
                 v11++ + 10,
                 0);
    while ( v11 < 6 );
    v13 = *(uchar *)(v4 + 975);
    v14 = ((int (__fastcall *)(int, int))dword_2253DD8[1821])(v4, v13);
    Function_2222d7c(
      v18,
      v4,
      v13,
      v4 + 11596 + 192 * v13,
      v21,
      *(ushort *)(v4 + 192 * v13 + 11704),
      &v20,
      v14,
      *(uint *)(v4 + 192 * v13 + 11724) << 10 >> 29,
      v19);
    v15 = v21;
    v16 = 0;
    do
    {
      if ( *(uint *)v15 > *(uint *)&v21[4 * *(uchar *)(v4 + 853)] )
        break;
      ++v16;
      v15 += 4;
    }
    while ( v16 < 4 );
    if ( v16 == 4 )
    {
      result = 860;
      *(uint *)(v4 + 860) = 2;
    }
    else
    {
      result = 860;
      *(uint *)(v4 + 860) = 1;
    }
  }
  return result;
}

//----- (02220C70) --------------------------------------------------------
int __fastcall AICmd_21(int a1, int a2)
{
  int v2;
  uchar v3;
  int v4;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = *(ushort *)(v2 + 2 * AI_GetPkmnDataSlot(v2, v3) + 12412);
  result = 860;
  *(uint *)(v2 + 860) = v4;
  return result;
}

//----- (02220CA4) --------------------------------------------------------
int __fastcall AICmd_HasType(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  result = *(uint *)(v2 + 860);
  if ( v3 == result )
    result = AIHandler_AddToPointer(v2, v4);
  return result;
}

//----- (02220CD4) --------------------------------------------------------
int __fastcall AICmd_23(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  result = *(uint *)(v2 + 860);
  if ( v3 != result )
    result = AIHandler_AddToPointer(v2, v4);
  return result;
}

//----- (02220D04) --------------------------------------------------------
int __fastcall AICmd_24(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;

  v2 = a2;
  v3 = a1;
  AIHandler_AddToPointer(a2, 1);
  v4 = AIHandler_LoadWord(v2);
  v5 = AIHandler_LoadWord(v2);
  result = ((int (__fastcall *)(int, int, uint, uint))dword_2252CF4[117])(
             v3,
             v2,
             *(uchar *)(v2 + 975),
             *(uchar *)(v2 + 976));
  if ( v4 == result )
    result = AIHandler_AddToPointer(v2, v5);
  return result;
}

//----- (02220D48) --------------------------------------------------------
int __fastcall AICmd_25(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;

  v2 = a2;
  v3 = a1;
  AIHandler_AddToPointer(a2, 1);
  v4 = AIHandler_LoadWord(v2);
  v5 = AIHandler_LoadWord(v2);
  result = ((int (__fastcall *)(int, int, uint, uint))dword_2252CF4[117])(
             v3,
             v2,
             *(uchar *)(v2 + 975),
             *(uchar *)(v2 + 976));
  if ( v4 != result )
    result = AIHandler_AddToPointer(v2, v5);
  return result;
}

//----- (02220D8C) --------------------------------------------------------
int __fastcall AICmd_26(int a1, int a2)
{
  int v2;
  int v3;
  uchar v4;
  int v5;
  int result;
  int *v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  uint *v12;

  v2 = a2;
  v3 = a1;
  AIHandler_AddToPointer(a2, 1);
  v4 = AIHandler_LoadWord(v2);
  *(uint *)(v2 + 860) = 0;
  v9 = AI_GetPkmnDataSlot(v2, v4);
  v12 = (uint *)((int (__fastcall *)(int, int))dword_223DCC0[152])(v3, v9);
  if ( *(uint *)(v3 + 44) & 2 )
  {
    v11 = *(uchar *)(v2 + v9 + 8604);
    v10 = *(uchar *)(v2 + ((int (__fastcall *)(int, int))dword_223E258[0])(v3, v9) + 8604);
  }
  else
  {
    v10 = *(uchar *)(v2 + v9 + 8604);
    v11 = *(uchar *)(v2 + v9 + 8604);
  }
  v5 = 0;
  result = ((int (__fastcall *)(int, int))dword_223DCC0[168])(v3, v9);
  if ( result > 0 )
  {
    do
    {
      v7 = GetAdrOfPkmnInParty(v12, v5);
      v8 = v7;
      if ( v5 != v11
        && v5 != v10
        && GetPkmnData(v7, 0xA3u, 0)
        && GetPkmnData(v8, 0xAEu, 0)
        && GetPkmnData(v8, 0xAEu, 0) != 494 )
      {
        ++*(uint *)(v2 + 860);
      }
      ++v5;
      result = ((int (__fastcall *)(int, int))dword_223DCC0[168])(v3, v9);
    }
    while ( v5 < result );
  }
  return result;
}

//----- (02220E68) --------------------------------------------------------
int __fastcall AICmd_27(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  result = 860;
  *(uint *)(v2 + 860) = *(ushort *)(v2 + 854);
  return result;
}

//----- (02220E84) --------------------------------------------------------
int __fastcall AICmd_28(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  result = 860;
  *(uint *)(v2 + 860) = *(ushort *)(v2 + 16 * *(ushort *)(v2 + 854) + 990);
  return result;
}

//----- (02220EA8) --------------------------------------------------------
int __fastcall AICmd_GetAbility(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int result;
  int v9;
  int v10;
  uint v11;
  uint v12;
  uint v13;
  int v14;

  v2 = a2;
  v14 = a1;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = v3;
  v5 = AI_GetPkmnDataSlot(v2, (uchar)v3);
  v6 = v5;
  v7 = 192 * v5;
  result = v2 + 192 * v5;
  if ( *(uint *)(result + 11712) & 0x200000 )
  {
    result = 860;
    *(uint *)(v2 + 860) = 0;
  }
  else if ( *(uchar *)(v2 + 975) == v6 || v4 == 3 )
  {
    result = 860;
    *(uint *)(v2 + 860) = *(uchar *)(v2 + v7 + 11623);
  }
  else
  {
    v9 = *(uchar *)(v2 + v6 + 912);
    if ( v9 )
    {
      *(uint *)(v2 + 860) = v9;
    }
    else
    {
      v10 = *(uchar *)(result + 11623);
      if ( v10 != 23 && v10 != 42 && v10 != 71 )
      {
        v11 = GetPkmnBaseData1(*(ushort *)(v2 + 11584 + v7), 0x18u);
        v12 = GetPkmnBaseData1(*(ushort *)(v2 + 11584 + v7), 0x19u);
        v13 = v12;
        if ( v11 && v12 )
        {
          if ( ((int (__fastcall *)(int))dword_223F350[91])(v14) & 1 )
          {
            result = 860;
            *(uint *)(v2 + 860) = v11;
          }
          else
          {
            result = 860;
            *(uint *)(v2 + 860) = v13;
          }
        }
        else if ( v11 )
        {
          result = 860;
          *(uint *)(v2 + 860) = v11;
        }
        else
        {
          result = 860;
          *(uint *)(v2 + 860) = v13;
        }
      }
      else
      {
        result = 860;
        *(uint *)(v2 + 860) = v10;
      }
    }
  }
  return result;
}

//----- (02220F88) --------------------------------------------------------
int __fastcall AICmd_53(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint v7;
  int v8;
  uint v9;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  v5 = AI_GetPkmnDataSlot(v2, (uchar)v3);
  v6 = v2 + 192 * v5;
  if ( *(uint *)(v6 + 11712) & 0x200000 )
  {
    v7 = 0;
  }
  else if ( v3 && v3 != 2 )
  {
    v7 = *(uchar *)(v6 + 11623);
  }
  else
  {
    v7 = *(uchar *)(v2 + v5 + 912);
    if ( *(uchar *)(v2 + v5 + 912) )
    {
      *(uint *)(v2 + 860) = v7;
    }
    else
    {
      v7 = *(uchar *)(v2 + 192 * v5 + 11623);
      if ( v7 != 23 && v7 != 42 && v7 != 71 )
      {
        v8 = 192 * v5;
        v7 = GetPkmnBaseData1(*(ushort *)(v2 + 11584 + 192 * v5), 0x18u);
        v9 = GetPkmnBaseData1(*(ushort *)(v2 + 11584 + v8), 0x19u);
        if ( v7 && v9 )
        {
          if ( v7 == v4 || v9 == v4 )
            v7 = 0;
        }
        else if ( !v7 )
        {
          v7 = v9;
        }
      }
    }
  }
  if ( v7 )
  {
    if ( v7 == v4 )
    {
      result = 860;
      *(uint *)(v2 + 860) = 1;
    }
    else
    {
      result = 860;
      *(uint *)(v2 + 860) = 0;
    }
  }
  else
  {
    result = 860;
    *(uint *)(v2 + 860) = 2;
  }
  return result;
}

//----- (02221060) --------------------------------------------------------
int __fastcall AICmd_2a(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint v9;
  int result;
  int v11;
  int v12;
  int v13;

  v13 = a4;
  v4 = a2;
  v5 = a1;
  AIHandler_AddToPointer(a2, 1);
  v11 = 0;
  *(uint *)(v4 + 860) = 0;
  v6 = 0;
  do
  {
    v12 = 0;
    v7 = *(ushort *)(v6 + v4 + 192 * *(uchar *)(v4 + 975) + 11596);
    v8 = Function_222327c(v5, v4);
    if ( v7 )
    {
      v9 = ((int (__fastcall *)(int, int, int, int, uint, uint, int, int *))dword_2253DD8[1140])(
             v5,
             v4,
             v7,
             v8,
             *(uchar *)(v4 + 975),
             *(uchar *)(v4 + 976),
             40,
             &v12);
      switch ( v9 )
      {
        case 0x78u:
          v9 = 80;
          break;
        case 0xF0u:
          v9 = 160;
          break;
        case 0x1Eu:
          v9 = 20;
          break;
        case 0xFu:
          v9 = 10;
          break;
      }
      if ( v12 & 0x140808 )
        v9 = 0;
      if ( *(uint *)(v4 + 860) < v9 )
        *(uint *)(v4 + 860) = v9;
    }
    v6 += 2;
    result = v11 + 1;
    v11 = result;
  }
  while ( result < 4 );
  return result;
}

//----- (02221114) --------------------------------------------------------
int __fastcall AICmd_2b(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int result;
  int v11;
  int v12;
  int v13;

  v13 = a4;
  v4 = a2;
  v5 = a1;
  AIHandler_AddToPointer(a2, 1);
  v6 = AIHandler_LoadWord(v4);
  v11 = AIHandler_LoadWord(v4);
  v12 = 0;
  v7 = *(uchar *)(v4 + 975);
  v8 = *(ushort *)(v4 + 854);
  v9 = Function_222327c(v5, v4);
  result = ((int (__fastcall *)(int, int, uint, int, int, uint, int, int *))dword_2253DD8[1140])(
             v5,
             v4,
             *(ushort *)(v4 + 854),
             v9,
             v7,
             *(uchar *)(v4 + 976),
             40,
             &v12);
  switch ( result )
  {
    case 120:
      result = 80;
      break;
    case 240:
      result = 160;
      break;
    case 30:
      result = 20;
      break;
    case 15:
      result = 10;
      break;
  }
  if ( v12 & 0x140808 )
    result = 0;
  if ( result == v6 )
    result = AIHandler_AddToPointer(v4, v11);
  return result;
}

//----- (022211AC) --------------------------------------------------------
int __fastcall AICmd_2c(int a1, int a2)
{
  int v2;
  uchar v3;
  int v4;
  int v5;
  int result;
  int *v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  uint *v14;

  v2 = a1;
  v9 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v9);
  v13 = AIHandler_LoadWord(v9);
  v12 = AIHandler_LoadWord(v9);
  v4 = AI_GetPkmnDataSlot(v9, v3);
  if ( *(uint *)(v2 + 44) & 2 )
  {
    v11 = *(uchar *)(v9 + v4 + 8604);
    v10 = *(uchar *)(v9 + ((int (__fastcall *)(int, int))dword_223E258[0])(v2, v4) + 8604);
  }
  else
  {
    v10 = *(uchar *)(v9 + v4 + 8604);
    v11 = *(uchar *)(v9 + v4 + 8604);
  }
  v14 = (uint *)((int (__fastcall *)(int, int))dword_223DCC0[152])(v2, v4);
  v5 = 0;
  result = ((int (__fastcall *)(int, int))dword_223DCC0[168])(v2, v4);
  if ( result > 0 )
  {
    while ( 1 )
    {
      v7 = GetAdrOfPkmnInParty(v14, v5);
      v8 = v7;
      if ( v5 != v11
        && v5 != v10
        && GetPkmnData(v7, 0xA3u, 0)
        && GetPkmnData(v8, 0xAEu, 0)
        && GetPkmnData(v8, 0xAEu, 0) != 494
        && GetPkmnData(v8, 0xA0u, 0) & v13 )
      {
        break;
      }
      ++v5;
      result = ((int (__fastcall *)(int, int))dword_223DCC0[168])(v2, v4);
      if ( v5 >= result )
        return result;
    }
    result = AIHandler_AddToPointer(v9, v12);
  }
  return result;
}

//----- (022212A0) --------------------------------------------------------
int __fastcall AICmd_2d(int a1, int a2)
{
  int v2;
  uchar v3;
  int v4;
  int v5;
  int result;
  int *v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  uint *v14;

  v2 = a1;
  v9 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v9);
  v13 = AIHandler_LoadWord(v9);
  v12 = AIHandler_LoadWord(v9);
  v4 = AI_GetPkmnDataSlot(v9, v3);
  if ( *(uint *)(v2 + 44) & 2 )
  {
    v11 = *(uchar *)(v9 + v4 + 8604);
    v10 = *(uchar *)(v9 + ((int (__fastcall *)(int, int))dword_223E258[0])(v2, v4) + 8604);
  }
  else
  {
    v10 = *(uchar *)(v9 + v4 + 8604);
    v11 = *(uchar *)(v9 + v4 + 8604);
  }
  v14 = (uint *)((int (__fastcall *)(int, int))dword_223DCC0[152])(v2, v4);
  v5 = 0;
  result = ((int (__fastcall *)(int, int))dword_223DCC0[168])(v2, v4);
  if ( result > 0 )
  {
    while ( 1 )
    {
      v7 = GetAdrOfPkmnInParty(v14, v5);
      v8 = v7;
      if ( v5 != v11
        && v5 != v10
        && GetPkmnData(v7, 0xA3u, 0)
        && GetPkmnData(v8, 0xAEu, 0)
        && GetPkmnData(v8, 0xAEu, 0) != 494
        && !(GetPkmnData(v8, 0xA0u, 0) & v13) )
      {
        break;
      }
      ++v5;
      result = ((int (__fastcall *)(int, int))dword_223DCC0[168])(v2, v4);
      if ( v5 >= result )
        return result;
    }
    result = AIHandler_AddToPointer(v9, v12);
  }
  return result;
}

//----- (02221394) --------------------------------------------------------
int __fastcall AICmd_2e(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  *(uint *)(v2 + 860) = 0;
  if ( *(uint *)(v2 + 384) & 3 )
    *(uint *)(v2 + 860) = 2;
  if ( *(uint *)(v2 + 384) & 0xC )
    *(uint *)(v2 + 860) = 3;
  if ( *(uint *)(v2 + 384) & 0x30 )
    *(uint *)(v2 + 860) = 1;
  if ( *(uint *)(v2 + 384) & 0xC0 )
    *(uint *)(v2 + 860) = 4;
  result = 0x8000;
  if ( *(uint *)(v2 + 384) & 0x8000 )
  {
    result = 860;
    *(uint *)(v2 + 860) = 5;
  }
  return result;
}

//----- (0222140C) --------------------------------------------------------
int __fastcall AICmd_2f(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  result = *(ushort *)(v2 + 16 * *(ushort *)(v2 + 854) + 990);
  if ( v3 == result )
    result = AIHandler_AddToPointer(v2, v4);
  return result;
}

//----- (02221444) --------------------------------------------------------
int __fastcall AICmd_30(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  result = *(ushort *)(v2 + 16 * *(ushort *)(v2 + 854) + 990);
  if ( v3 != result )
    result = AIHandler_AddToPointer(v2, v4);
  return result;
}

//----- (0222147C) --------------------------------------------------------
int __fastcall AICmd_StatLvlLt(int a1, int a2)
{
  int v2;
  uchar v3;
  int v4;
  int v5;
  int result;
  int v7;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  v5 = AIHandler_LoadWord(v2);
  v7 = AIHandler_LoadWord(v2);
  result = *(char *)(v2 + 192 * AI_GetPkmnDataSlot(v2, v3) + v4 + 11608);
  if ( result < v5 )
    result = AIHandler_AddToPointer(v2, v7);
  return result;
}

//----- (022214D0) --------------------------------------------------------
int __fastcall AICmd_StatLvlGt(int a1, int a2)
{
  int v2;
  uchar v3;
  int v4;
  int v5;
  int result;
  int v7;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  v5 = AIHandler_LoadWord(v2);
  v7 = AIHandler_LoadWord(v2);
  result = *(char *)(v2 + 192 * AI_GetPkmnDataSlot(v2, v3) + v4 + 11608);
  if ( result > v5 )
    result = AIHandler_AddToPointer(v2, v7);
  return result;
}

//----- (02221524) --------------------------------------------------------
int __fastcall AICmd_StatLvlEq(int a1, int a2)
{
  int v2;
  uchar v3;
  int v4;
  int v5;
  int result;
  int v7;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  v5 = AIHandler_LoadWord(v2);
  v7 = AIHandler_LoadWord(v2);
  result = *(char *)(v2 + 192 * AI_GetPkmnDataSlot(v2, v3) + v4 + 11608);
  if ( v5 == result )
    result = AIHandler_AddToPointer(v2, v7);
  return result;
}

//----- (02221578) --------------------------------------------------------
int __fastcall AICmd_StatLvlNe(int a1, int a2)
{
  int v2;
  uchar v3;
  int v4;
  int v5;
  int result;
  int v7;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  v5 = AIHandler_LoadWord(v2);
  v7 = AIHandler_LoadWord(v2);
  result = *(char *)(v2 + 192 * AI_GetPkmnDataSlot(v2, v3) + v4 + 11608);
  if ( v5 != result )
    result = AIHandler_AddToPointer(v2, v7);
  return result;
}

//----- (022215CC) --------------------------------------------------------
uint __fastcall AICmd_35(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  short *v6;
  uint result;
  int v8;
  int v9;
  short *v10;
  int v11;
  int v12;
  char *v13;
  int v14;
  int v15;
  int v16;
  uchar v17;
  int v18;
  char v19;
  int v20;

  v20 = a4;
  v4 = a2;
  v16 = a1;
  AIHandler_AddToPointer(a2, 1);
  v5 = AIHandler_LoadWord(v4);
  v18 = AIHandler_LoadWord(v4);
  if ( v5 == 1 )
    v17 = *(uchar *)(v4 + *(uchar *)(v4 + 853) + 876);
  else
    v17 = 100;
  v6 = word_222EE90;
  result = 0;
  v8 = 16 * *(ushort *)(v4 + 854);
  v9 = *(ushort *)(v4 + v8 + 990);
  do
  {
    if ( v9 == (ushort)*v6 )
      break;
    ++v6;
    ++result;
  }
  while ( (ushort)*v6 != 0xFFFF );
  v10 = word_222EE78;
  v11 = 0;
  do
  {
    if ( v9 == (ushort)*v10 )
      break;
    ++v10;
    ++v11;
  }
  while ( (ushort)*v10 != 0xFFFF );
  if ( (ushort)word_222EE78[v11] != 0xFFFF
    || *(uchar *)(v4 + v8 + 993) > 1u && (result = (ushort)word_222EE90[result], result == 0xFFFF) )
  {
    v12 = 0;
    v13 = &v19;
    do
      *v13++ = ((int (__fastcall *)(int, uint, int, uint))dword_2252060[0])(
                 v4,
                 *(uchar *)(v4 + 975),
                 v12++ + 10,
                 0);
    while ( v12 < 6 );
    v14 = *(uchar *)(v4 + 975);
    v15 = ((int (__fastcall *)(int, int))dword_2253DD8[1821])(v4, v14);
    result = Function_2222e84(
               v16,
               v4,
               *(ushort *)(v4 + 854),
               *(ushort *)(v4 + 192 * v14 + 11704),
               &v19,
               v14,
               v15,
               *(uint *)(v4 + 192 * v14 + 11724) << 10 >> 29,
               v17);
    if ( *(uint *)(v4 + 192 * *(uchar *)(v4 + 976) + 11660) <= result )
      result = AIHandler_AddToPointer(v4, v18);
  }
  return result;
}

//----- (022216F8) --------------------------------------------------------
uint __fastcall AICmd_36(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  short *v6;
  uint result;
  int v8;
  int v9;
  short *v10;
  int v11;
  int v12;
  char *v13;
  int v14;
  int v15;
  int v16;
  uchar v17;
  int v18;
  char v19;
  int v20;

  v20 = a4;
  v4 = a2;
  v16 = a1;
  AIHandler_AddToPointer(a2, 1);
  v5 = AIHandler_LoadWord(v4);
  v18 = AIHandler_LoadWord(v4);
  if ( v5 == 1 )
    v17 = *(uchar *)(v4 + *(uchar *)(v4 + 853) + 876);
  else
    v17 = 100;
  v6 = word_222EE90;
  result = 0;
  v8 = 16 * *(ushort *)(v4 + 854);
  v9 = *(ushort *)(v4 + v8 + 990);
  do
  {
    if ( v9 == (ushort)*v6 )
      break;
    ++v6;
    ++result;
  }
  while ( (ushort)*v6 != 0xFFFF );
  v10 = word_222EE78;
  v11 = 0;
  do
  {
    if ( v9 == (ushort)*v10 )
      break;
    ++v10;
    ++v11;
  }
  while ( (ushort)*v10 != 0xFFFF );
  if ( (ushort)word_222EE78[v11] != 0xFFFF
    || *(uchar *)(v4 + v8 + 993) > 1u && (result = (ushort)word_222EE90[result], result == 0xFFFF) )
  {
    v12 = 0;
    v13 = &v19;
    do
      *v13++ = ((int (__fastcall *)(int, uint, int, uint))dword_2252060[0])(
                 v4,
                 *(uchar *)(v4 + 975),
                 v12++ + 10,
                 0);
    while ( v12 < 6 );
    v14 = *(uchar *)(v4 + 975);
    v15 = ((int (__fastcall *)(int, int))dword_2253DD8[1821])(v4, v14);
    result = Function_2222e84(
               v16,
               v4,
               *(ushort *)(v4 + 854),
               *(ushort *)(v4 + 192 * v14 + 11704),
               &v19,
               v14,
               v15,
               *(uint *)(v4 + 192 * v14 + 11724) << 10 >> 29,
               v17);
    if ( *(uint *)(v4 + 192 * *(uchar *)(v4 + 976) + 11660) > result )
      result = AIHandler_AddToPointer(v4, v18);
  }
  return result;
}

//----- (02221824) --------------------------------------------------------
int __fastcall AICmd_37(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  v5 = AIHandler_LoadWord(v2);
  result = AI_GetPkmnDataSlot(v2, (uchar)v3);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      v7 = 192 * result;
      result = 11596;
      v8 = 0;
      v9 = v2 + v7;
      do
      {
        if ( v4 == *(ushort *)(v9 + 11596) )
          break;
        ++v8;
        v9 += 2;
      }
      while ( v8 < 4 );
      if ( v8 < 4 )
        result = AIHandler_AddToPointer(v2, v5);
    }
    else if ( v3 == 3 )
    {
      result = v2 + 192 * result;
      if ( *(uint *)(result + 11660) )
      {
        v10 = 0;
        do
        {
          if ( v4 == *(ushort *)(result + 11596) )
            break;
          ++v10;
          result += 2;
        }
        while ( v10 < 4 );
        if ( v10 < 4 )
          result = AIHandler_AddToPointer(v2, v5);
      }
    }
  }
  else
  {
    v11 = v2 + 8 * result;
    v12 = 0;
    result = 880;
    do
    {
      if ( v4 == *(ushort *)(v11 + 880) )
        break;
      ++v12;
      v11 += 2;
    }
    while ( v12 < 4 );
    if ( v12 < 4 )
      result = AIHandler_AddToPointer(v2, v5);
  }
  return result;
}

//----- (022218E4) --------------------------------------------------------
int __fastcall AICmd_38(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  v5 = AIHandler_LoadWord(v2);
  result = AI_GetPkmnDataSlot(v2, (uchar)v3);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      v7 = 192 * result;
      result = 11596;
      v8 = 0;
      v9 = v2 + v7;
      do
      {
        if ( v4 == *(ushort *)(v9 + 11596) )
          break;
        ++v8;
        v9 += 2;
      }
      while ( v8 < 4 );
      if ( v8 == 4 )
        result = AIHandler_AddToPointer(v2, v5);
    }
    else if ( v3 == 3 )
    {
      result = v2 + 192 * result;
      if ( *(uint *)(result + 11660) )
      {
        v10 = 0;
        do
        {
          if ( v4 == *(ushort *)(result + 11596) )
            break;
          ++v10;
          result += 2;
        }
        while ( v10 < 4 );
        if ( v10 == 4 )
          result = AIHandler_AddToPointer(v2, v5);
      }
    }
  }
  else
  {
    v11 = v2 + 8 * result;
    v12 = 0;
    result = 880;
    do
    {
      if ( v4 == *(ushort *)(v11 + 880) )
        break;
      ++v12;
      v11 += 2;
    }
    while ( v12 < 4 );
    if ( v12 == 4 )
      result = AIHandler_AddToPointer(v2, v5);
  }
  return result;
}

//----- (022219A4) --------------------------------------------------------
int __fastcall AICmd_39(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;
  int v7;
  int v8;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  v5 = AIHandler_LoadWord(v2);
  result = AI_GetPkmnDataSlot(v2, (uchar)v3);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      result = v2 + 192 * result;
      v7 = 0;
      do
      {
        if ( *(ushort *)(result + 11596)
          && v4 == *(ushort *)(v2 + 16 * *(ushort *)(result + 11596) + 990) )
        {
          break;
        }
        ++v7;
        result += 2;
      }
      while ( v7 < 4 );
      if ( v7 < 4 )
        result = AIHandler_AddToPointer(v2, v5);
    }
  }
  else
  {
    v8 = 0;
    result = v2 + 8 * result;
    do
    {
      if ( *(ushort *)(result + 880) && v4 == *(ushort *)(v2 + 16 * *(ushort *)(result + 880) + 990) )
        break;
      ++v8;
      result += 2;
    }
    while ( v8 < 4 );
    if ( v8 < 4 )
      result = AIHandler_AddToPointer(v2, v5);
  }
  return result;
}

//----- (02221A48) --------------------------------------------------------
int __fastcall AICmd_3a(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;
  int v7;
  int v8;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  v5 = AIHandler_LoadWord(v2);
  result = AI_GetPkmnDataSlot(v2, (uchar)v3);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      result = v2 + 192 * result;
      v7 = 0;
      do
      {
        if ( *(ushort *)(result + 11596)
          && v4 == *(ushort *)(v2 + 16 * *(ushort *)(result + 11596) + 990) )
        {
          break;
        }
        ++v7;
        result += 2;
      }
      while ( v7 < 4 );
      if ( v7 == 4 )
        result = AIHandler_AddToPointer(v2, v5);
    }
  }
  else
  {
    v8 = 0;
    result = v2 + 8 * result;
    do
    {
      if ( *(ushort *)(result + 880) && v4 == *(ushort *)(v2 + 16 * *(ushort *)(result + 880) + 990) )
        break;
      ++v8;
      result += 2;
    }
    while ( v8 < 4 );
    if ( v8 == 4 )
      result = AIHandler_AddToPointer(v2, v5);
  }
  return result;
}

//----- (02221AEC) --------------------------------------------------------
int __fastcall AICmd_3b(int a1, int a2)
{
  int v2;
  uchar v3;
  int v4;
  int v5;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  v5 = AIHandler_LoadWord(v2);
  result = AI_GetPkmnDataSlot(v2, v3);
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      result = *(uint *)(v2 + 192 * result + 11720) << 26 >> 29;
      if ( result )
        result = AIHandler_AddToPointer(v2, v5);
    }
  }
  else
  {
    result = *(uint *)(v2 + 192 * result + 11720) & 7;
    if ( result )
      result = AIHandler_AddToPointer(v2, v5);
  }
  return result;
}

//----- (02221B5C) --------------------------------------------------------
int __fastcall AICmd_3c(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  result = AIHandler_LoadWord(v2);
  v5 = result;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      result = *(ushort *)(v2 + 854);
      if ( result == *(ushort *)(v2 + 192 * *(uchar *)(v2 + 975) + 11756) )
        result = AIHandler_AddToPointer(v2, v5);
    }
  }
  else
  {
    result = *(ushort *)(v2 + 854);
    if ( result == *(ushort *)(v2 + 192 * *(uchar *)(v2 + 975) + 11752) )
      result = AIHandler_AddToPointer(v2, v5);
  }
  return result;
}

//----- (02221BCC) --------------------------------------------------------
int __fastcall AICmd_3d(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = *(uchar *)(v2 + 868);
  result = v3 | 0xB;
  *(uchar *)(v2 + 868) = v3 | 0xB;
  return result;
}

//----- (02221BE8) --------------------------------------------------------
void AICmd_3e()
{
  ;
}

//----- (02221BEC) --------------------------------------------------------
void AICmd_3f()
{
  ;
}

//----- (02221BF0) --------------------------------------------------------
int __fastcall AICmd_40(int a1, int a2)
{
  int v2;
  uchar v3;
  int v4;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = *(ushort *)(v2 + 192 * AI_GetPkmnDataSlot(v2, v3) + 11704);
  result = 860;
  *(uint *)(v2 + 860) = v4;
  return result;
}

//----- (02221C24) --------------------------------------------------------
int __fastcall AICmd_41(int a1, int a2)
{
  int v2;
  uchar v3;
  int v4;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AI_GetPkmnDataSlot(v2, v3);
  if ( *(uchar *)(v2 + 975) == v4 )
    result = ((int (__fastcall *)(int, uint, int))dword_2259250[1963])(
               v2,
               *(ushort *)(v2 + 192 * v4 + 11704),
               1);
  else
    result = ((int (__fastcall *)(int, uint, int))dword_2259250[1963])(
               v2,
               *(ushort *)(v2 + 2 * v4 + 916),
               1);
  *(uint *)(v2 + 860) = result;
  return result;
}

//----- (02221C88) --------------------------------------------------------
int __fastcall AICmd_55(int a1, int a2)
{
  int v2;
  uchar v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  v5 = AIHandler_LoadWord(v2);
  v6 = AI_GetPkmnDataSlot(v2, v3);
  if ( (v6 & 1) == (*(uchar *)(v2 + 975) & 1) )
  {
    v7 = v2 + 192 * v6;
    v8 = 11704;
  }
  else
  {
    v7 = v2 + 2 * v6;
    v8 = 916;
  }
  result = *(ushort *)(v7 + v8);
  if ( result == v4 )
    result = AIHandler_AddToPointer(v2, v5);
  return result;
}

//----- (02221CF0) --------------------------------------------------------
int __fastcall AICmd_56(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  result = *(uint *)(v2 + 384);
  if ( result & v3 )
    result = AIHandler_AddToPointer(v2, v4);
  return result;
}

//----- (02221D20) --------------------------------------------------------
int __fastcall AICmd_57(int a1, int a2)
{
  int v2;
  int v3;
  uchar v4;
  int v5;
  int v6;
  int result;
  int v8;

  v2 = a2;
  v3 = a1;
  AIHandler_AddToPointer(a2, 1);
  v4 = AIHandler_LoadWord(v2);
  v5 = AIHandler_LoadWord(v2);
  v6 = AI_GetPkmnDataSlot(v2, v4);
  result = ((int (__fastcall *)(int, int))dword_223E208[0])(v3, v6);
  if ( v5 == 4 )
  {
    v8 = *(uint *)(v2 + 8 * result + 456) & 3;
    result = 860;
    *(uint *)(v2 + 860) = v8;
  }
  else if ( v5 == 1024 )
  {
    result = *(uint *)(v2 + 8 * result + 456) << 28 >> 30;
    *(uint *)(v2 + 860) = result;
  }
  return result;
}

//----- (02221D88) --------------------------------------------------------
int __fastcall AICmd_58(int a1, int a2)
{
  int v2;
  uchar v3;
  int v4;
  int v5;
  int v6;
  int result;
  int *v8;
  uint v9;
  int v10;
  int v11;
  int *v12;

  v2 = a1;
  v10 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v10);
  v11 = AIHandler_LoadWord(v10);
  v4 = AI_GetPkmnDataSlot(v10, v3);
  v5 = v4;
  v6 = 0;
  result = ((int (__fastcall *)(int, int))dword_223DCC0[168])(v2, v4);
  if ( result > 0 )
  {
    while ( 1 )
    {
      v8 = (int *)((int (__fastcall *)(int, int, int))dword_223DCC0[187])(v2, v5, v6);
      v12 = v8;
      if ( v6 != *(uchar *)(v10 + v5 + 8604) )
      {
        v9 = GetPkmnData(v8, 0xA3u, 0);
        if ( v9 != GetPkmnData(v12, 0xA4u, 0) )
          break;
      }
      ++v6;
      result = ((int (__fastcall *)(int, int))dword_223DCC0[168])(v2, v5);
      if ( v6 >= result )
        return result;
    }
    result = AIHandler_AddToPointer(v10, v11);
  }
  return result;
}

//----- (02221E18) --------------------------------------------------------
int __fastcall AICmd_59(int a1, int a2)
{
  uchar v2;
  int v3;
  int v4;
  int result;
  int *v6;
  int v7;
  uint v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v9 = a1;
  v10 = a2;
  AIHandler_AddToPointer(a2, 1);
  v2 = AIHandler_LoadWord(v10);
  v12 = AIHandler_LoadWord(v10);
  v3 = AI_GetPkmnDataSlot(v10, v2);
  v11 = v3;
  v4 = 0;
  result = ((int (__fastcall *)(int, int))dword_223DCC0[168])(v9, v3);
  if ( result > 0 )
  {
    do
    {
      v6 = (int *)((int (__fastcall *)(int, int, int))dword_223DCC0[187])(v9, v11, v4);
      if ( v4 != *(uchar *)(v10 + v11 + 8604) )
      {
        v7 = 0;
        while ( 1 )
        {
          v8 = GetPkmnData(v6, v7 + 58, 0);
          result = GetPkmnData(v6, v7 + 66, 0);
          if ( v8 != result )
            break;
          if ( ++v7 >= 4 )
            goto LABEL_7;
        }
        result = AIHandler_AddToPointer(v10, v12);
LABEL_7:
        if ( v7 != 4 )
          break;
      }
      ++v4;
      result = ((int (__fastcall *)(int, int))dword_223DCC0[168])(v9, v11);
    }
    while ( v4 < result );
  }
  return result;
}

//----- (02221EBC) --------------------------------------------------------
int __fastcall AICmd_5a(int a1, int a2)
{
  int v2;
  uchar v3;
  int v4;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AI_GetPkmnDataSlot(v2, v3);
  result = ((int (__fastcall *)(int, int))dword_2253DD8[4970])(v2, v4);
  *(uint *)(v2 + 860) = result;
  return result;
}

//----- (02221EEC) --------------------------------------------------------
int __fastcall AICmd_5b(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  result = *(uchar *)(v2 + 192 * *(uchar *)(v2 + 975) + *(uchar *)(v2 + 853) + 11628);
  *(uint *)(v2 + 860) = result;
  return result;
}

//----- (02221F1C) --------------------------------------------------------
int __fastcall AICmd_5c(int a1, int a2)
{
  int v2;
  int v3;
  uchar v4;
  int v5;
  int v6;
  int v7;
  int result;

  v2 = a2;
  v3 = a1;
  AIHandler_AddToPointer(a2, 1);
  v4 = AIHandler_LoadWord(v2);
  v5 = AIHandler_LoadWord(v2);
  v6 = AI_GetPkmnDataSlot(v2, v4);
  v7 = v6;
  result = ((int (__fastcall *)(int, int, int))dword_2253DD8[2260])(v3, v2, v6);
  if ( *(uint *)(v2 + 192 * v7 + 11724) << 19 >> 29 >= (uint)(result - 1) && result > 1 )
    result = AIHandler_AddToPointer(v2, v5);
  return result;
}

//----- (02221F78) --------------------------------------------------------
int __fastcall AICmd_5d(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  result = 860;
  *(uint *)(v2 + 860) = *(uchar *)(v2 + 16 * *(ushort *)(v2 + 854) + 992);
  return result;
}

//----- (02221F9C) --------------------------------------------------------
int __fastcall AICmd_5e(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  result = *(uchar *)(v2 + 16 * *(ushort *)(v2 + 2 * *(uchar *)(v2 + 976) + 12412) + 992);
  *(uint *)(v2 + 860) = result;
  return result;
}

//----- (02221FCC) --------------------------------------------------------
int __fastcall AICmd_5f(int a1, int a2)
{
  uchar v2;
  int v3;
  int v4;
  char *v5;
  char *v6;
  int v7;
  char *v8;
  int v9;
  int result;
  char *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  char v18;

  v12 = a1;
  v13 = a2;
  AIHandler_AddToPointer(a2, 1);
  v2 = AIHandler_LoadWord(v13);
  v15 = AI_GetPkmnDataSlot(v13, v2);
  v3 = ((int (__fastcall *)(int))dword_223DCC0[151])(v12);
  v4 = 0;
  v16 = v3;
  if ( v3 > 0 )
  {
    v5 = &v18;
    do
    {
      *(uint *)v5 = v4;
      v5 += 4;
      ++v4;
    }
    while ( v4 < v3 );
  }
  v14 = 0;
  if ( v3 - 1 > 0 )
  {
    v6 = &v18;
    do
    {
      v7 = v14 + 1;
      if ( v14 + 1 < v16 )
      {
        v8 = &v18 + 4 * v7;
        do
        {
          v9 = *(uint *)v8;
          v17 = *(uint *)v6;
          if ( ((int (__fastcall *)(int, int, int, int, int))dword_2252CF4[117])(
                 v12,
                 v13,
                 *(uint *)v6,
                 *(uint *)v8,
                 1) )
          {
            *(uint *)v6 = v9;
            *(uint *)v8 = v17;
          }
          ++v7;
          v8 += 4;
        }
        while ( v7 < v16 );
      }
      v6 += 4;
      ++v14;
    }
    while ( v14 < v16 - 1 );
  }
  result = 0;
  if ( v16 > 0 )
  {
    v11 = &v18;
    while ( v15 != *(uint *)v11 )
    {
      ++result;
      v11 += 4;
      if ( result >= v16 )
        return result;
    }
    *(uint *)(v13 + 860) = result;
  }
  return result;
}

//----- (02222090) --------------------------------------------------------
int __fastcall AICmd_60(int a1, int a2)
{
  int v2;
  uchar v3;
  int v4;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = *(uint *)(v2 + 336) - *(uint *)(v2 + 192 * AI_GetPkmnDataSlot(v2, v3) + 11732);
  result = 860;
  *(uint *)(v2 + 860) = v4;
  return result;
}

//----- (022220CC) --------------------------------------------------------
int __fastcall AICmd_61(int a1, int a2)
{
  int v2;
  char *v3;
  int v4;
  int v5;
  int result;
  int *v7;
  int v8;
  short *v9;
  int v10;
  char *v11;
  ushort v12;
  uint v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  char v20;
  short v21;
  char v22;

  v14 = a1;
  v15 = a2;
  AIHandler_AddToPointer(a2, 1);
  v19 = AIHandler_LoadWord(v15);
  v18 = AIHandler_LoadWord(v15);
  v2 = 0;
  v3 = &v20;
  v17 = *(uchar *)(v15 + 975);
  do
    *v3++ = ((int (__fastcall *)(int, int, int, uint))dword_2252060[0])(v15, v17, v2++ + 10, 0);
  while ( v2 < 6 );
  v4 = ((int (__fastcall *)(int, int))dword_2253DD8[1821])(v15, v17);
  v16 = Function_2222d7c(
          v14,
          v15,
          *(uchar *)(v15 + 975),
          v15 + 11596 + 192 * v17,
          &v22,
          *(ushort *)(v15 + 192 * v17 + 11704),
          &v20,
          v4,
          *(uint *)(v15 + 192 * v17 + 11724) << 10 >> 29,
          v19);
  v5 = 0;
  result = ((int (__fastcall *)(int, int))dword_223DCC0[168])(v14, v17);
  if ( result > 0 )
  {
    while ( 1 )
    {
      if ( v5 != *(uchar *)(v15 + v17 + 8604) )
      {
        v7 = (int *)((int (__fastcall *)(int, int, int))dword_223DCC0[187])(v14, v17, v5);
        if ( GetPkmnData(v7, 0xA3u, 0) )
        {
          if ( GetPkmnData(v7, 0xAEu, 0) )
          {
            if ( GetPkmnData(v7, 0xAEu, 0) != 494 )
            {
              v8 = 0;
              v9 = &v21;
              do
              {
                *v9 = GetPkmnData(v7, v8++ + 54, 0);
                ++v9;
              }
              while ( v8 < 4 );
              v10 = 0;
              v11 = &v20;
              do
                *v11++ = GetPkmnData(v7, v10++ + 70, 0);
              while ( v10 < 6 );
              v12 = GetPkmnData(v7, 6u, 0);
              v13 = GetPkmnData(v7, 0xAu, 0);
              if ( Function_2222d7c(v14, v15, *(uchar *)(v15 + 975), &v21, &v22, v12, &v20, v13, 0, v19) > v16 )
                break;
            }
          }
        }
      }
      ++v5;
      result = ((int (__fastcall *)(int, int))dword_223DCC0[168])(v14, v17);
      if ( v5 >= result )
        return result;
    }
    result = AIHandler_AddToPointer(v15, v18);
  }
  return result;
}

//----- (02222260) --------------------------------------------------------
int __fastcall AICmd_62(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a2;
  v3 = a1;
  AIHandler_AddToPointer(a2, 1);
  v4 = AIHandler_LoadWord(v2);
  result = Function_2223b34(v3, v2, *(uchar *)(v2 + 975), 1);
  if ( result == 1 )
    result = AIHandler_AddToPointer(v2, v4);
  return result;
}

//----- (02222298) --------------------------------------------------------
int __fastcall AICmd_63(int a1, int a2)
{
  int v2;
  int v3;
  char *v4;
  int v5;
  int v6;
  int v7;
  uchar v8;
  int v9;
  int result;
  int v11;
  int v12;
  int v13;
  int v14;
  uchar v15;
  char v16;
  char v17;

  v2 = a2;
  v11 = a1;
  AIHandler_AddToPointer(a2, 1);
  v15 = AIHandler_LoadWord(v2);
  v14 = AIHandler_LoadWord(v2);
  v13 = AIHandler_LoadWord(v2);
  v3 = 0;
  v4 = &v16;
  do
    *v4++ = ((int (__fastcall *)(int, uint, int, uint))dword_2252060[0])(
              v2,
              *(uchar *)(v2 + 975),
              v3++ + 10,
              0);
  while ( v3 < 6 );
  v5 = *(uchar *)(v2 + 975);
  v6 = ((int (__fastcall *)(int, int))dword_2253DD8[1821])(v2, v5);
  v12 = Function_2222d7c(
          v11,
          v2,
          v5,
          v2 + 11596 + 192 * v5,
          &v17,
          *(ushort *)(v2 + 192 * v5 + 11704),
          &v16,
          v6,
          *(uint *)(v2 + 192 * v5 + 11724) << 10 >> 29,
          v14);
  v7 = AI_GetPkmnDataSlot(v2, v15);
  if ( v14 == 1 )
    v8 = *(uchar *)(v2 + *(uchar *)(v2 + 853) + 876);
  else
    v8 = 100;
  v9 = ((int (__fastcall *)(int, int))dword_2253DD8[1821])(v2, v7);
  result = Function_2222e84(
             v11,
             v2,
             *(ushort *)(v2 + 2 * v7 + 12412),
             *(ushort *)(v2 + 192 * v7 + 11704),
             &v16,
             v7,
             v9,
             *(uint *)(v2 + 192 * v7 + 11724) << 10 >> 29,
             v8);
  if ( result > v12 )
    result = AIHandler_AddToPointer(v2, v13);
  return result;
}

//----- (022223B0) --------------------------------------------------------
int __fastcall AICmd_64(int a1, int a2)
{
  int v2;
  uchar v3;
  int v4;
  int v5;
  int result;
  int v7;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AI_GetPkmnDataSlot(v2, v3);
  v5 = 0;
  *(uint *)(v2 + 860) = 0;
  result = v2 + 192 * v4;
  do
  {
    v7 = *(char *)(result + 11608);
    if ( v7 > 6 )
      *(uint *)(v2 + 860) += v7 - 6;
    ++v5;
    ++result;
  }
  while ( v5 < 8 );
  return result;
}

//----- (02222400) --------------------------------------------------------
int __fastcall AICmd_65(int a1, int a2)
{
  int v2;
  uchar v3;
  int v4;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  result = *(char *)(v2 + 192 * AI_GetPkmnDataSlot(v2, v3) + v4 + 11608)
         - *(char *)(v2 + 192 * *(uchar *)(v2 + 975) + v4 + 11608);
  *(uint *)(v2 + 860) = result;
  return result;
}

//----- (02222450) --------------------------------------------------------
int __fastcall AICmd_66(int a1, int a2)
{
  int v2;
  uchar v3;
  int v4;
  int v5;
  int v6;
  int result;
  int v8;
  int v9;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  v5 = AIHandler_LoadWord(v2);
  v6 = AI_GetPkmnDataSlot(v2, v3);
  Function_222254c(v2, v6, &v9, &v8, v4);
  result = v8;
  if ( v9 < v8 )
    result = AIHandler_AddToPointer(v2, v5);
  return result;
}

//----- (022224A4) --------------------------------------------------------
int __fastcall AICmd_67(int a1, int a2)
{
  int v2;
  uchar v3;
  int v4;
  int v5;
  int v6;
  int result;
  int v8;
  int v9;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  v5 = AIHandler_LoadWord(v2);
  v6 = AI_GetPkmnDataSlot(v2, v3);
  Function_222254c(v2, v6, &v9, &v8, v4);
  result = v8;
  if ( v9 > v8 )
    result = AIHandler_AddToPointer(v2, v5);
  return result;
}

//----- (022224F8) --------------------------------------------------------
int __fastcall AICmd_68(int a1, int a2)
{
  int v2;
  uchar v3;
  int v4;
  int v5;
  int v6;
  int result;
  int v8;
  int v9;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  v5 = AIHandler_LoadWord(v2);
  v6 = AI_GetPkmnDataSlot(v2, v3);
  Function_222254c(v2, v6, &v9, &v8, v4);
  result = v8;
  if ( v9 == v8 )
    result = AIHandler_AddToPointer(v2, v5);
  return result;
}

//----- (0222254C) --------------------------------------------------------
uint __fastcall Function_222254c(int a1, int a2, uint *a3, uint *a4, char a5)
{
  uint result;

  switch ( a5 )
  {
    case 0:
      *a3 = *(uint *)(a1 + 192 * *(uchar *)(a1 + 975) + 11660);
      result = *(uint *)(a1 + 192 * a2 + 11660);
      *a4 = result;
      break;
    case 1:
      *a3 = *(ushort *)(a1 + 192 * *(uchar *)(a1 + 975) + 11586);
      result = *(ushort *)(a1 + 192 * a2 + 11586);
      *a4 = result;
      break;
    case 2:
      *a3 = *(ushort *)(a1 + 192 * *(uchar *)(a1 + 975) + 11588);
      result = *(ushort *)(a1 + 192 * a2 + 11588);
      *a4 = result;
      break;
    case 3:
      *a3 = *(ushort *)(a1 + 192 * *(uchar *)(a1 + 975) + 11590);
      result = *(ushort *)(a1 + 192 * a2 + 11590);
      *a4 = result;
      break;
    case 4:
      *a3 = *(ushort *)(a1 + 192 * *(uchar *)(a1 + 975) + 11592);
      result = *(ushort *)(a1 + 192 * a2 + 11592);
      *a4 = result;
      break;
    case 5:
      *a3 = *(ushort *)(a1 + 192 * *(uchar *)(a1 + 975) + 11594);
      result = *(ushort *)(a1 + 192 * a2 + 11594);
      *a4 = result;
      break;
    default:
      result = ErrorHandler();
      break;
  }
  return result;
}

//----- (02222648) --------------------------------------------------------
int __fastcall AICmd_69(int a1, int a2, int a3, int a4)
{
  int v4;
  short *v5;
  int v6;
  int v7;
  int v8;
  short *v9;
  int v10;
  int v11;
  int v12;
  char *v13;
  int v14;
  int v15;
  char *v16;
  int result;
  int v18;
  int v19;
  int v20;
  int v21;
  char v22;
  char v23[16];
  int v24;

  v24 = a4;
  v4 = a2;
  v18 = a1;
  AIHandler_AddToPointer(a2, 1);
  v20 = AIHandler_LoadWord(v4);
  v5 = word_222EE90;
  v6 = 16 * *(ushort *)(v4 + 854);
  v7 = *(ushort *)(v4 + v6 + 990);
  v8 = 0;
  do
  {
    if ( v7 == (ushort)*v5 )
      break;
    ++v5;
    ++v8;
  }
  while ( (ushort)*v5 != 0xFFFF );
  v9 = word_222EE78;
  v10 = 0;
  do
  {
    if ( v7 == (ushort)*v9 )
      break;
    ++v9;
    ++v10;
  }
  while ( (ushort)*v9 != 0xFFFF );
  if ( (ushort)word_222EE78[v10] == 0xFFFF
    && (*(uchar *)(v4 + v6 + 993) <= 1u || (ushort)word_222EE90[v8] != 0xFFFF) )
  {
    result = 860;
    *(uint *)(v4 + 860) = 0;
  }
  else
  {
    v11 = *(uchar *)(v4 + 975);
    v19 = 0;
    while ( 1 )
    {
      v12 = 0;
      v13 = &v22;
      do
        *v13++ = ((int (__fastcall *)(int, int, int, uint))dword_2252060[0])(v4, v11, v12++ + 10, 0);
      while ( v12 < 6 );
      v14 = ((int (__fastcall *)(int, int))dword_2253DD8[1821])(v4, v11);
      Function_2222d7c(
        v18,
        v4,
        v11,
        v4 + 11596 + 192 * v11,
        v23,
        *(ushort *)(v4 + 192 * v11 + 11704),
        &v22,
        v14,
        *(uint *)(v4 + 192 * v11 + 11724) << 10 >> 29,
        v20);
      v11 = ((int (__fastcall *)(int, uint))dword_223E258[0])(v18, *(uchar *)(v4 + 975));
      if ( !v19 )
        v21 = *(uint *)&v23[4 * *(uchar *)(v4 + 853)];
      v15 = 0;
      v16 = v23;
      do
      {
        if ( *(uint *)v16 > v21 )
          break;
        ++v15;
        v16 += 4;
      }
      while ( v15 < 4 );
      if ( v15 != 4 )
        break;
      *(uint *)(v4 + 860) = 2;
      result = v19 + 1;
      v19 = result;
      if ( result >= 2 )
        return result;
    }
    result = 860;
    *(uint *)(v4 + 860) = 1;
  }
  return result;
}

//----- (022227A4) --------------------------------------------------------
int __fastcall AICmd_6a(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  if ( v3 == 1 )
    ErrorHandler();
  if ( !v3 )
    ErrorHandler();
  v5 = AI_GetPkmnDataSlot(v2, (uchar)v3);
  result = Function_20787cc(v5);
  if ( (uchar)result & *(uchar *)(v2 + 12552) )
    result = AIHandler_AddToPointer(v2, v4);
  return result;
}

//----- (022227F4) --------------------------------------------------------
int __fastcall AICmd_6b(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  if ( v3 == 1 )
    ErrorHandler();
  if ( !v3 )
    ErrorHandler();
  v5 = AI_GetPkmnDataSlot(v2, (uchar)v3);
  result = Function_20787cc(v5);
  if ( !((uchar)result & *(uchar *)(v2 + 12552)) )
    result = AIHandler_AddToPointer(v2, v4);
  return result;
}

//----- (02222844) --------------------------------------------------------
int __fastcall AICmd_42(int a1, int a2)
{
  int v2;
  uchar v3;
  int v4;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = *(uchar *)(v2 + 192 * AI_GetPkmnDataSlot(v2, v3) + 11710) & 0xF;
  result = 860;
  *(uint *)(v2 + 860) = v4;
  return result;
}

//----- (0222287C) --------------------------------------------------------
int __fastcall AICmd_43(int a1, int a2)
{
  int v2;
  uchar v3;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  if ( *(uint *)(v2 + 192 * AI_GetPkmnDataSlot(v2, v3) + 11732) >= *(uint *)(v2 + 336) )
  {
    result = 860;
    *(uint *)(v2 + 860) = 1;
  }
  else
  {
    result = 860;
    *(uint *)(v2 + 860) = 0;
  }
  return result;
}

//----- (022228C8) --------------------------------------------------------
int __fastcall AICmd_44(int a1, int a2)
{
  int v2;
  uchar v3;
  int v4;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = *(uint *)(v2 + 192 * AI_GetPkmnDataSlot(v2, v3) + 11720) << 8 >> 29;
  result = 860;
  *(uint *)(v2 + 860) = v4;
  return result;
}

//----- (02222900) --------------------------------------------------------
int __fastcall AICmd_45(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a1;
  AIHandler_AddToPointer(a2, 1);
  result = 860;
  *(uint *)(v2 + 860) = *(uint *)(v3 + 44);
  return result;
}

//----- (02222918) --------------------------------------------------------
int __fastcall AICmd_46(int a1, int a2)
{
  int v2;
  uchar v3;
  int v4;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = *(ushort *)(v2 + 2 * AI_GetPkmnDataSlot(v2, v3) + 12580);
  result = 860;
  *(uint *)(v2 + 860) = v4;
  return result;
}

//----- (0222294C) --------------------------------------------------------
int __fastcall AICmd_47(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  result = *(uchar *)(v2 + 16 * *(uint *)(v2 + 860) + 994);
  *(uint *)(v2 + 860) = result;
  return result;
}

//----- (0222296C) --------------------------------------------------------
int __fastcall AICmd_48(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  result = *(uchar *)(v2 + 16 * *(uint *)(v2 + 860) + 993);
  *(uint *)(v2 + 860) = result;
  return result;
}

//----- (0222298C) --------------------------------------------------------
int __fastcall AICmd_49(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  result = *(ushort *)(v2 + 16 * *(uint *)(v2 + 860) + 990);
  *(uint *)(v2 + 860) = result;
  return result;
}

//----- (022229AC) --------------------------------------------------------
int __fastcall AICmd_4a(int a1, int a2)
{
  int v2;
  uchar v3;
  int v4;
  int v5;
  int result;
  int v7;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AI_GetPkmnDataSlot(v2, v3);
  v5 = *(ushort *)(v2 + 2 * v4 + 12380);
  if ( v5 == 182 || v5 == 197 || v5 == 203 )
  {
    v7 = *(uint *)(v2 + 192 * v4 + 11720) << 19 >> 30;
    result = 860;
    *(uint *)(v2 + 860) = v7;
  }
  else
  {
    result = 860;
    *(uint *)(v2 + 860) = 0;
  }
  return result;
}

//----- (02222A08) --------------------------------------------------------
int __fastcall AICmd_4b(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = a1;
  AIHandler_AddToPointer(a2, 1);
  v4 = AIHandler_LoadWord(v2);
  return Function_2222c28(v3, v2, v4);
}

//----- (02222A28) --------------------------------------------------------
int __fastcall AICmd_Jump(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  return AIHandler_AddToPointer(v2, v3);
}

//----- (02222A44) --------------------------------------------------------
int __fastcall AICmd_4d(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;

  v2 = a2;
  v3 = a1;
  AIHandler_AddToPointer(a2, 1);
  result = Function_2222c60(v3, v2);
  if ( result != 1 )
  {
    v5 = *(uchar *)(v2 + 868);
    result = v5 | 1;
    *(uchar *)(v2 + 868) = v5 | 1;
  }
  return result;
}

//----- (02222A6C) --------------------------------------------------------
uint __fastcall AICmd_4e(int a1, int a2)
{
  int v2;
  int v3;
  uint result;
  uint v5;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  result = AIHandler_LoadWord(v2);
  v5 = result;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      result = *(uchar *)(v2 + 192 * *(uchar *)(v2 + 975) + 11636);
      if ( result < *(uchar *)(v2 + 192 * *(uchar *)(v2 + 976) + 11636) )
        result = AIHandler_AddToPointer(v2, v5);
    }
    else if ( v3 == 2 )
    {
      result = *(uchar *)(v2 + 192 * *(uchar *)(v2 + 975) + 11636);
      if ( result == *(uchar *)(v2 + 192 * *(uchar *)(v2 + 976) + 11636) )
        result = AIHandler_AddToPointer(v2, v5);
    }
  }
  else
  {
    result = *(uchar *)(v2 + 192 * *(uchar *)(v2 + 975) + 11636);
    if ( result > *(uchar *)(v2 + 192 * *(uchar *)(v2 + 976) + 11636) )
      result = AIHandler_AddToPointer(v2, v5);
  }
  return result;
}

//----- (02222B10) --------------------------------------------------------
int __fastcall AICmd_4f(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  result = *(uint *)(v2 + 192 * *(uchar *)(v2 + 976) + 11720) << 21 >> 29;
  if ( result )
    result = AIHandler_AddToPointer(v2, v3);
  return result;
}

//----- (02222B48) --------------------------------------------------------
int __fastcall AICmd_50(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  result = *(uint *)(v2 + 192 * *(uchar *)(v2 + 976) + 11720) << 21 >> 29;
  if ( !result )
    result = AIHandler_AddToPointer(v2, v3);
  return result;
}

//----- (02222B80) --------------------------------------------------------
int __fastcall AICmd_51(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  result = *(uchar *)(v2 + 975) & 1;
  if ( result == (*(uchar *)(v2 + 976) & 1) )
    result = AIHandler_AddToPointer(v2, v3);
  return result;
}

//----- (02222BB4) --------------------------------------------------------
int __fastcall AICmd_54(int a1, int a2)
{
  int v2;
  uchar v3;
  int v4;
  int v5;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AIHandler_LoadWord(v2);
  v5 = v2 + 192 * AI_GetPkmnDataSlot(v2, v3);
  result = *(uint *)(v5 + 11720) >> 31;
  if ( *(uint *)(v5 + 11720) < 0 )
    result = AIHandler_AddToPointer(v2, v4);
  return result;
}

//----- (02222BF8) --------------------------------------------------------
int __fastcall AICmd_6c(int a1, int a2)
{
  int v2;
  uchar v3;
  int v4;
  int result;

  v2 = a2;
  AIHandler_AddToPointer(a2, 1);
  v3 = AIHandler_LoadWord(v2);
  v4 = AI_GetPkmnDataSlot(v2, v3);
  result = ((int (__fastcall *)(int, int))dword_2253DD8[1821])(v2, v4);
  *(uint *)(v2 + 860) = result;
  return result;
}

//----- (02222C28) --------------------------------------------------------
uint __fastcall Function_2222c28(int a1, int a2, int a3)
{
  int v3;
  int v4;
  uint result;

  v3 = a2;
  v4 = *(uchar *)(a2 + 972);
  *(uchar *)(a2 + 972) = v4 + 1;
  *(uint *)(a2 + 4 * v4 + 940) = *(uint *)(a2 + 8504);
  AIHandler_AddToPointer(a2, a3);
  result = *(uchar *)(v3 + 972);
  if ( result > 8 )
    result = ErrorHandler();
  return result;
}

//----- (02222C60) --------------------------------------------------------
int __fastcall Function_2222c60(int a1, int a2)
{
  if ( !*(uchar *)(a2 + 972) )
    return 0;
  *(uint *)(a2 + 8504) = *(uint *)(a2 + 4 * (uchar)--*(uchar *)(a2 + 972) + 940);
  return 1;
}

//----- (02222C88) --------------------------------------------------------
int __fastcall Function_2222c88(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v11 = a2;
  v2 = *(uchar *)(a2 + 976);
  v3 = v2;
  v4 = 2 * v2;
  v2 *= 8;
  result = 0;
  v6 = v11 + v2;
  v7 = v2;
  v8 = v11 + v2;
  v9 = 0;
  while ( *(ushort *)(v11 + v4 + 12412) != *(ushort *)(v8 + 880) )
  {
    if ( !*(ushort *)(v6 + v9 + 880) )
    {
      v10 = v11 + v7 + 2 * result;
      result = 880;
      *(ushort *)(v10 + 880) = *(ushort *)(v11 + 2 * v3 + 12412);
      return result;
    }
    ++result;
    v8 += 2;
    v9 += 2;
    if ( result >= 4 )
      return result;
  }
  return result;
}

//----- (02222CF0) --------------------------------------------------------
int __fastcall AIHandler_LoadWord(int a1)
{
  return *(uint *)(*(uint *)(a1 + 8500) + 4 * (*(uint *)(a1 + 8504))++);
}

//----- (02222D10) --------------------------------------------------------
int __fastcall Function_2222d10(int a1, int a2)
{
  return *(uint *)(*(uint *)(a1 + 8500) + 4 * (*(uint *)(a1 + 8504) + a2));
}

//----- (02222D24) --------------------------------------------------------
int __fastcall AIHandler_AddToPointer(int result, int a2)
{
  *(uint *)(result + 8504) += a2;
  return result;
}

//----- (02222D34) --------------------------------------------------------
int __fastcall AI_GetPkmnDataSlot(int a1, char a2)
{
  int result;

  switch ( a2 )
  {
    case 1:
      result = *(uchar *)(a1 + 975);
      break;
    case 2:
      result = (*(uchar *)(a1 + 976) ^ 2) & 0xFF;
      break;
    case 3:
      result = (*(uchar *)(a1 + 975) ^ 2) & 0xFF;
      break;
    default:
      result = *(uchar *)(a1 + 976);
      break;
  }
  return result;
}

//----- (02222D7C) --------------------------------------------------------
int __fastcall Function_2222d7c(int a1, int a2, int a3, ushort *a4, uint *a5, int a6, int a7, int a8, int a9, int a10)
{
  uint *v10;
  int v11;
  int v12;
  short *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  short *v18;
  int v19;
  int v20;
  int *v21;
  int v22;
  int v24;
  int v25;
  ushort *v26;
  int v27;
  int v28;
  int v29;

  v24 = a1;
  v10 = a5;
  v11 = a2;
  v25 = a3;
  v26 = a4;
  v28 = 0;
  v29 = 0;
  do
  {
    v12 = *v26;
    v13 = word_222EE90;
    v14 = 0;
    v15 = v12;
    v16 = v11 + 16 * v12;
    v17 = *(ushort *)(v16 + 990);
    v27 = v16;
    do
    {
      if ( (ushort)*v13 == v17 )
        break;
      ++v13;
      ++v14;
    }
    while ( (ushort)*v13 != 0xFFFF );
    v18 = word_222EE78;
    v19 = 0;
    do
    {
      if ( (ushort)*v18 == v17 )
        break;
      ++v18;
      ++v19;
    }
    while ( (ushort)*v18 != 0xFFFF );
    if ( (ushort)word_222EE78[v19] != 0xFFFF
      || v15 && (ushort)word_222EE90[v14] == 0xFFFF && *(uchar *)(v27 + 993) > 1u )
    {
      if ( a10 == 1 )
        v20 = *(uchar *)(v11 + v29 + 876);
      else
        v20 = 100;
      *v10 = Function_2222e84(v24, v11, v15, a6, a7, v25, a8, a9, v20);
    }
    else
    {
      *v10 = 0;
    }
    ++v10;
    ++v26;
    ++v29;
  }
  while ( v29 < 4 );
  v21 = a5;
  v22 = 0;
  do
  {
    if ( v28 < *v21 )
      v28 = *v21;
    ++v22;
    ++v21;
  }
  while ( v22 < 4 );
  return v28;
}

//----- (02222E84) --------------------------------------------------------
int __fastcall Function_2222e84(int a1, int a2, int a3, int a4, uchar *a5, int a6, int a7, int a8)
{
  int v8;
  int v9;
  int v10;
  ushort v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  uint v20;
  int v21;
  uint v22;
  int v23;
  uint v24;
  int v25;
  short *v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int result;
  int v32;
  int v33;
  uint v34;
  int v35;
  int v36;
  uchar v37;

  v8 = a2;
  v33 = a4;
  v32 = a1;
  v9 = *(uchar *)(a2 + 976);
  v10 = a3;
  v11 = 0;
  v35 = ((int (*)(void))dword_223E208[0])();
  v12 = 0;
  v34 = 0;
  v36 = 0;
  if ( v10 <= 216 )
  {
    if ( v10 >= 216 )
    {
      v11 = s32_div_f(10 * *(uchar *)(v8 + 192 * a6 + 11637), 25);
      goto LABEL_90;
    }
    if ( v10 > 82 )
    {
      if ( v10 > 101 )
      {
        if ( v10 == 149 )
        {
          v22 = ((int (__fastcall *)(int))dword_223F350[91])(v32);
          s32_div_f(v22, 11);
          v34 = s32_div_f((v23 + 5) * *(uchar *)(v8 + 192 * a6 + 11636), 10);
          goto LABEL_90;
        }
        goto LABEL_89;
      }
      if ( v10 == 101 )
        goto LABEL_17;
    }
    else
    {
      if ( v10 >= 82 )
      {
        v34 = 40;
        goto LABEL_90;
      }
      if ( v10 <= 49 )
      {
        if ( v10 == 49 )
        {
          v34 = 20;
          goto LABEL_90;
        }
        goto LABEL_89;
      }
      if ( v10 <= 69 && v10 >= 67 )
      {
        if ( v10 != 67 )
        {
          if ( v10 != 69 )
            goto LABEL_89;
LABEL_17:
          v34 = *(uchar *)(v8 + 192 * a6 + 11636);
          goto LABEL_90;
        }
        goto LABEL_35;
      }
    }
LABEL_89:
    v11 = 0;
    v12 = 0;
    goto LABEL_90;
  }
  if ( v10 > 360 )
  {
    if ( v10 > 447 )
    {
      if ( v10 != 449 )
        goto LABEL_89;
      if ( a7 != 103 && !a8 )
      {
        switch ( ((uchar (__fastcall *)(int, int, int))dword_2259250[1963])(v8, v33, 1) )
        {
          case 0x7Eu:
            v12 = 10;
            break;
          case 0x7Fu:
            v12 = 11;
            break;
          case 0x80u:
            v12 = 13;
            break;
          case 0x81u:
            v12 = 12;
            break;
          case 0x82u:
            v12 = 15;
            break;
          case 0x83u:
            v12 = 1;
            break;
          case 0x84u:
            v12 = 3;
            break;
          case 0x85u:
            v12 = 4;
            break;
          case 0x86u:
            v12 = 2;
            break;
          case 0x87u:
            v12 = 14;
            break;
          case 0x88u:
            v12 = 6;
            break;
          case 0x89u:
            v12 = 5;
            break;
          case 0x8Au:
            v12 = 7;
            break;
          case 0x8Bu:
            v12 = 16;
            break;
          case 0x8Cu:
            v12 = 17;
            break;
          case 0x8Du:
            v12 = 8;
            break;
          default:
            v12 = 0;
            break;
        }
      }
    }
    else
    {
      if ( v10 >= 447 )
      {
LABEL_35:
        v26 = word_222EE60;
        v27 = 0;
        do
        {
          if ( (int)(ushort)*v26 >= *(uint *)(v8 + 192 * *(uchar *)(v8 + 976) + 11616) )
            break;
          v26 += 2;
          ++v27;
        }
        while ( (ushort)*v26 != 0xFFFF );
        v28 = 2 * v27;
        if ( (ushort)word_222EE60[v28] == 0xFFFF )
          v11 = 120;
        else
          v11 = word_222EE62[v28];
        goto LABEL_90;
      }
      if ( v10 != 363 )
        goto LABEL_89;
      if ( a7 != 103 && !a8 )
      {
        v13 = ((int (__fastcall *)(int, int, int))dword_2259250[1963])(v8, v33, 11);
        v11 = v13;
        if ( v13 )
          v12 = ((int (__fastcall *)(int, int, int))dword_2259250[1963])(v8, v33, 12);
      }
    }
  }
  else if ( v10 < 360 )
  {
    if ( v10 <= 222 )
    {
      if ( v10 >= 218 )
      {
        if ( v10 == 218 )
        {
          v11 = s32_div_f(10 * (255 - *(uchar *)(v8 + 192 * a6 + 11637)), 25);
          goto LABEL_90;
        }
        if ( v10 == 222 )
        {
          v24 = ((int (__fastcall *)(int))dword_223F350[91])(v32);
          s32_div_f(v24, 100);
          if ( v25 >= 5 )
          {
            if ( v25 >= 15 )
            {
              if ( v25 >= 35 )
              {
                if ( v25 >= 65 )
                {
                  if ( v25 >= 85 )
                  {
                    if ( v25 >= 95 )
                      v11 = 150;
                    else
                      v11 = 110;
                  }
                  else
                  {
                    v11 = 90;
                  }
                }
                else
                {
                  v11 = 70;
                }
              }
              else
              {
                v11 = 50;
              }
            }
            else
            {
              v11 = 30;
            }
          }
          else
          {
            v11 = 10;
          }
          v12 = 0;
          goto LABEL_90;
        }
      }
      goto LABEL_89;
    }
    if ( v10 != 237 )
      goto LABEL_89;
    v14 = (uchar)a5[4];
    v15 = (uchar)a5[1];
    v16 = (uchar)a5[5];
    v17 = (uchar)a5[2];
    v18 = (uchar)a5[3];
    v19 = 32 * v16 & 0x3F | 4 * v17 & 7 | *a5 & 1 | 2 * v15 & 3 | 8 * v18 & 0xF | 16 * v14 & 0x1F;
    v11 = s32_div_f(
            40 * (8 * (v14 & 2) | v15 & 2 | ((*a5 & 2) >> 1) | 2 * (v17 & 2) | 4 * (v18 & 2) | 16 * (v16 & 2)),
            63)
        + 30;
    v20 = s32_div_f(15 * v19, 63);
    v12 = v20 + 1;
    if ( (int)(v20 + 1) >= 9 )
      v12 = v20 + 2;
  }
  else
  {
    v21 = u32_div_f(25 * *(uint *)(v8 + 4 * *(uchar *)(v8 + 976) + 8688), *(uint *)(v8 + 4 * a6 + 8688));
    v11 = v21 + 1;
    if ( v21 + 1 > 150 )
      v11 = 150;
    v12 = 0;
  }
LABEL_90:
  if ( v34 )
  {
    *(uint *)(v8 + 8508) |= 0x800u;
    v30 = ((int (__fastcall *)(int, int, int, int, int, uint, uint, int *))dword_2253DD8[1140])(
            v32,
            v8,
            v10,
            v12,
            a6,
            *(uchar *)(v8 + 976),
            v34,
            &v36);
  }
  else
  {
    v29 = ((int (__fastcall *)(int, int, int, uint, uint, uint, uint, uint, uint, int))dword_2259250[1036])(
            v32,
            v8,
            v10,
            *(uint *)(v8 + 4 * v35 + 444),
            *(uint *)(v8 + 384),
            v11,
            (uchar)v12,
            (uchar)a6,
            *(uchar *)(v8 + 976),
            1);
    v30 = ((int (__fastcall *)(int, int, int, int, int, uint, int, int *))dword_2253DD8[1140])(
            v32,
            v8,
            v10,
            v12,
            a6,
            *(uchar *)(v8 + 976),
            v29,
            &v36);
  }
  *(uint *)(v8 + 8508) &= 0xFFFFF7FF;
  if ( v36 & 0x140808 )
    result = 0;
  else
    result = ((int (__fastcall *)(int, int))dword_2253DD8[2440])(v37 * v30, 100);
  return result;
}

//----- (0222327C) --------------------------------------------------------
int __fastcall Function_222327c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  uint v8;
  int v9;

  v5 = a1;
  v6 = a2;
  if ( a4 > 311 )
  {
    if ( a4 > 363 )
    {
      if ( a4 != 449 )
        return 0;
      switch ( ((uchar (__fastcall *)(int, int))dword_2253DD8[4920])(a2, a3) )
      {
        case 0x7Eu:
          v4 = 10;
          break;
        case 0x7Fu:
          v4 = 11;
          break;
        case 0x80u:
          v4 = 13;
          break;
        case 0x81u:
          v4 = 12;
          break;
        case 0x82u:
          v4 = 15;
          break;
        case 0x83u:
          v4 = 1;
          break;
        case 0x84u:
          v4 = 3;
          break;
        case 0x85u:
          v4 = 4;
          break;
        case 0x86u:
          v4 = 2;
          break;
        case 0x87u:
          v4 = 14;
          break;
        case 0x88u:
          v4 = 6;
          break;
        case 0x89u:
          v4 = 5;
          break;
        case 0x8Au:
          v4 = 7;
          break;
        case 0x8Bu:
          v4 = 16;
          break;
        case 0x8Cu:
          v4 = 17;
          break;
        case 0x8Du:
          v4 = 8;
          break;
        default:
          v4 = 0;
          break;
      }
    }
    else
    {
      if ( a4 != 363 )
        return 0;
      v4 = ((int (__fastcall *)(int, int))dword_2253DD8[4949])(a2, a3);
    }
  }
  else if ( a4 >= 311 )
  {
    if ( !((int (*)(void))dword_2253DD8[1523])()
      && !((int (__fastcall *)(int, int, int, uint))dword_2253DD8[1523])(v5, v6, 8, 0) )
    {
      v9 = *(uint *)(v6 + 384);
      if ( v9 & 0x80FF )
      {
        if ( v9 & 3 )
          v4 = 11;
        if ( v9 & 0xC )
          v4 = 5;
        if ( v9 & 0x30 )
          v4 = 10;
        if ( v9 & 0xC0 )
          v4 = 15;
      }
    }
  }
  else
  {
    if ( a4 != 237 )
      return 0;
    v7 = *(uint *)(a2 + 11604 + 192 * a3);
    v8 = s32_div_f(
           15
         * (32 * ((uint)(4 * v7) >> 27) & 0x3F | v7 & 1 | 2 * ((uint)(v7 << 22) >> 27) & 3 | 4 * ((uint)(v7 << 17) >> 27) & 7 | 8 * ((uint)(v7 << 12) >> 27) & 0xF | 16 * ((uint)(v7 << 7) >> 27) & 0x1F),
           63);
    v4 = v8 + 1;
    if ( (int)(v8 + 1) >= 9 )
      v4 = v8 + 2;
  }
  return v4;
}

//----- (022233F4) --------------------------------------------------------
int __fastcall Function_22233f4(int a1, int a2)
{
  int v2;

  v2 = a1 + 192 * a2;
  if ( !(*(uint *)(v2 + 11712) & 0x20) || *(uint *)(v2 + 11720) << 17 >> 30 )
    return 0;
  *(uchar *)(a1 + a2 + 8612) = 6;
  return 1;
}

//----- (0222342C) --------------------------------------------------------
int __fastcall Function_222342c(int a1, int a2, int a3)
{
  int v3;
  int v5;
  int v6;
  int v7;
  int v8;
  int *v9;
  int v10;
  uint v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uint v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;

  v18 = a1;
  v3 = a2;
  v19 = a3;
  if ( ((int (*)(void))dword_223DCC0[147])() & 2 )
    return 0;
  v5 = v19 ^ 1;
  if ( *(uchar *)(v3 + 192 * (v19 ^ 1) + 11623) != 25 )
    return 0;
  v22 = 0;
  v6 = v3 + 192 * v19;
  do
  {
    v7 = *(ushort *)(v6 + 11596);
    v8 = Function_222327c(v18, v3, v19, v7);
    if ( v7 )
    {
      v24 = 0;
      ((void (__fastcall *)(int, int, int, int, int, int, uint, int *))dword_2253DD8[1140])(
        v18,
        v3,
        v7,
        v8,
        v19,
        v5,
        0,
        &v24);
      if ( v24 & 2 )
        return 0;
    }
    v6 += 2;
    ++v22;
  }
  while ( v22 < 4 );
  v21 = 0;
  if ( ((int (__fastcall *)(int, int))dword_223DCC0[168])(v18, v19) <= 0 )
    return 0;
  while ( 1 )
  {
    v9 = (int *)((int (__fastcall *)(int, int, int))dword_223DCC0[187])(v18, v19, v21);
    if ( GetPkmnData(v9, 0xA3u, 0) )
    {
      if ( GetPkmnData(v9, 0xAEu, 0) && GetPkmnData(v9, 0xAEu, 0) != 494 && v21 != *(uchar *)(v3 + v19 + 8604) )
        break;
    }
LABEL_21:
    if ( ++v21 >= ((int (__fastcall *)(int, int))dword_223DCC0[168])(v18, v19) )
      return 0;
  }
  v10 = 0;
  while ( 1 )
  {
    v20 = (ushort)GetPkmnData(v9, v10 + 54, 0);
    v23 = ((int (__fastcall *)(int, int, int *, int))dword_2259250[2811])(v18, v3, v9, v20);
    if ( v20 )
    {
      v24 = 0;
      v11 = GetPkmnData(v9, 0xAu, 0);
      v12 = ((int (__fastcall *)(int, int))dword_2253DD8[1821])(v3, v5);
      v13 = ((int (__fastcall *)(int, int))dword_2253DD8[4920])(v3, v5);
      v14 = ((int (__fastcall *)(int, int, int, uint))dword_2252060[0])(v3, v5, 27, 0);
      v15 = ((int (__fastcall *)(int, int, int, uint))dword_2252060[0])(v3, v5, 28, 0);
      ((void (__fastcall *)(int, int, int, uint, int, int, int, int, int *))dword_2253DD8[1343])(
        v3,
        v20,
        v23,
        v11,
        v12,
        v13,
        v14,
        v15,
        &v24);
      if ( v24 & 2 )
      {
        v16 = ((int (__fastcall *)(int))dword_223F350[91])(v18);
        s32_div_f(v16, 3);
        if ( v17 < 2 )
          break;
      }
    }
    if ( ++v10 >= 4 )
      goto LABEL_21;
  }
  *(uchar *)(v3 + v19 + 8612) = v21;
  return 1;
}

//----- (022235F0) --------------------------------------------------------
int __fastcall Function_22235f0(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;
  uint v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint v12;
  int v13;
  uint v14;
  int v15;
  int v16;
  int v17;
  int v18;
  uint v19;
  int v20;
  uint v21;
  int v22;
  int v23;
  int v24;
  int v25;
  uint v26;
  uint v27;
  int v28;
  int v29;
  int v30;
  int v31;
  uint v32;
  int v33;
  int v34;
  int *v35;
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
  int *v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;

  v3 = a1;
  v4 = a2;
  v33 = a3;
  v5 = 2;
  if ( !(((int (*)(void))dword_223DCC0[147])() & 2) )
    v5 = 0;
  v50 = 0;
  v55 = 0;
  v44 = v4 + 192 * v33;
  v42 = v4 + 192 * v5;
  do
  {
    v43 = *(ushort *)(v44 + 11596);
    v52 = Function_222327c(v3, v4, v33, v43);
    if ( v43 && *(uchar *)(v4 + 16 * v43 + 993) )
    {
      ++v50;
      v56 = 0;
      if ( *(uint *)(v4 + 11660) )
        ((void (__fastcall *)(int, int, int, int, int, uint, uint, int *))dword_2253DD8[1140])(
          v3,
          v4,
          v43,
          v52,
          v33,
          0,
          0,
          &v56);
      if ( !(v56 & 8) )
        return 0;
      v56 = 0;
      if ( *(uint *)(v42 + 11660) )
        ((void (__fastcall *)(int, int, int, int, int, int, uint, int *))dword_2253DD8[1140])(
          v3,
          v4,
          v43,
          v52,
          v33,
          v5,
          0,
          &v56);
      if ( !(v56 & 8) )
        return 0;
    }
    v44 += 2;
    ++v55;
  }
  while ( v55 < 4 );
  if ( v50 < 2 )
    return 0;
  if ( ((int (__fastcall *)(int))dword_223DCC0[147])(v3) & 0x10 || ((int (__fastcall *)(int))dword_223DCC0[147])(v3) & 8 )
    v53 = (uchar)v33;
  else
    v53 = ((int (__fastcall *)(int, int))dword_223E258[0])(v3, v33) & 0xFF;
  v51 = ((int (__fastcall *)(int, int))dword_223DCC0[168])(v3, v33);
  v40 = 0;
  if ( v51 <= 0 )
  {
LABEL_47:
    v41 = 0;
    if ( v51 <= 0 )
    {
LABEL_73:
      result = 0;
    }
    else
    {
      v48 = v4 + (uchar)v33;
      v47 = v4 + v53;
      while ( 1 )
      {
        v35 = (int *)((int (__fastcall *)(int, int, int))dword_223DCC0[187])(v3, v33, v41);
        if ( GetPkmnData(v35, 0xA3u, 0) )
        {
          if ( GetPkmnData(v35, 0xAEu, 0)
            && GetPkmnData(v35, 0xAEu, 0) != 494
            && v41 != *(uchar *)(v48 + 8604)
            && v41 != *(uchar *)(v47 + 8604)
            && v41 != *(uchar *)(v48 + 8612)
            && v41 != *(uchar *)(v47 + 8612) )
          {
            break;
          }
        }
LABEL_72:
        if ( ++v41 >= v51 )
          goto LABEL_73;
      }
      v34 = 0;
      while ( 1 )
      {
        v39 = (ushort)GetPkmnData(v35, v34 + 54, 0);
        v37 = ((int (__fastcall *)(int, int, int *, int))dword_2259250[2811])(v3, v4, v35, v39);
        if ( v39 )
        {
          if ( *(uchar *)(v4 + 16 * v39 + 993) )
          {
            v56 = 0;
            if ( *(uint *)(v4 + 11660) )
            {
              v21 = GetPkmnData(v35, 0xAu, 0);
              v22 = ((int (__fastcall *)(int, uint))dword_2253DD8[1821])(v4, 0);
              v23 = ((int (__fastcall *)(int, uint))dword_2253DD8[4920])(v4, 0);
              v24 = ((int (__fastcall *)(int, uint, int, uint))dword_2252060[0])(v4, 0, 27, 0);
              v25 = ((int (__fastcall *)(int, uint, int, uint))dword_2252060[0])(v4, 0, 28, 0);
              ((void (__fastcall *)(int, int, int, uint, int, int, int, int, int *))dword_2253DD8[1343])(
                v4,
                v39,
                v37,
                v21,
                v22,
                v23,
                v24,
                v25,
                &v56);
            }
            if ( !v56 )
            {
              v26 = ((int (__fastcall *)(int))dword_223F350[91])(v3);
              if ( !((v26 >> 31) + __ROR4__((v26 << 31) - (v26 >> 31), 31)) )
              {
                *(uchar *)(v4 + v33 + 8612) = v41;
                return 1;
              }
            }
            v56 = 0;
            if ( *(uint *)(v42 + 11660) )
            {
              v27 = GetPkmnData(v35, 0xAu, 0);
              v28 = ((int (__fastcall *)(int, int))dword_2253DD8[1821])(v4, v5);
              v29 = ((int (__fastcall *)(int, int))dword_2253DD8[4920])(v4, v5);
              v30 = ((int (__fastcall *)(int, int, int, uint))dword_2252060[0])(v4, v5, 27, 0);
              v31 = ((int (__fastcall *)(int, int, int, uint))dword_2252060[0])(v4, v5, 28, 0);
              ((void (__fastcall *)(int, int, int, uint, int, int, int, int, int *))dword_2253DD8[1343])(
                v4,
                v39,
                v37,
                v27,
                v28,
                v29,
                v30,
                v31,
                &v56);
            }
            if ( !v56 )
            {
              v32 = ((int (__fastcall *)(int))dword_223F350[91])(v3);
              if ( !((v32 >> 31) + __ROR4__((v32 << 31) - (v32 >> 31), 31)) )
                break;
            }
          }
        }
        if ( ++v34 >= 4 )
          goto LABEL_72;
      }
      *(uchar *)(v4 + v33 + 8612) = v41;
      result = 1;
    }
  }
  else
  {
    v46 = v4 + (uchar)v33;
    v45 = v4 + v53;
    while ( 1 )
    {
      v49 = (int *)((int (__fastcall *)(int, int, int))dword_223DCC0[187])(v3, v33, v40);
      if ( GetPkmnData(v49, 0xA3u, 0) )
      {
        if ( GetPkmnData(v49, 0xAEu, 0)
          && GetPkmnData(v49, 0xAEu, 0) != 494
          && v40 != *(uchar *)(v46 + 8604)
          && v40 != *(uchar *)(v45 + 8604)
          && v40 != *(uchar *)(v46 + 8612)
          && v40 != *(uchar *)(v45 + 8612) )
        {
          break;
        }
      }
LABEL_46:
      if ( ++v40 >= v51 )
        goto LABEL_47;
    }
    v54 = 0;
    while ( 1 )
    {
      v38 = (ushort)GetPkmnData(v49, v54 + 54, 0);
      v36 = ((int (__fastcall *)(int, int, int *, int))dword_2259250[2811])(v3, v4, v49, v38);
      if ( v38 )
      {
        if ( *(uchar *)(v4 + 16 * v38 + 993) )
        {
          v56 = 0;
          if ( *(uint *)(v4 + 11660) )
          {
            v7 = GetPkmnData(v49, 0xAu, 0);
            v8 = ((int (__fastcall *)(int, uint))dword_2253DD8[1821])(v4, 0);
            v9 = ((int (__fastcall *)(int, uint))dword_2253DD8[4920])(v4, 0);
            v10 = ((int (__fastcall *)(int, uint, int, uint))dword_2252060[0])(v4, 0, 27, 0);
            v11 = ((int (__fastcall *)(int, uint, int, uint))dword_2252060[0])(v4, 0, 28, 0);
            ((void (__fastcall *)(int, int, int, uint, int, int, int, int, int *))dword_2253DD8[1343])(
              v4,
              v38,
              v36,
              v7,
              v8,
              v9,
              v10,
              v11,
              &v56);
          }
          if ( v56 & 2 )
          {
            v12 = ((int (__fastcall *)(int))dword_223F350[91])(v3);
            s32_div_f(v12, 3);
            if ( v13 < 2 )
            {
              *(uchar *)(v4 + v33 + 8612) = v40;
              return 1;
            }
          }
          v56 = 0;
          if ( *(uint *)(v42 + 11660) )
          {
            v14 = GetPkmnData(v49, 0xAu, 0);
            v15 = ((int (__fastcall *)(int, int))dword_2253DD8[1821])(v4, v5);
            v16 = ((int (__fastcall *)(int, int))dword_2253DD8[4920])(v4, v5);
            v17 = ((int (__fastcall *)(int, int, int, uint))dword_2252060[0])(v4, v5, 27, 0);
            v18 = ((int (__fastcall *)(int, int, int, uint))dword_2252060[0])(v4, v5, 28, 0);
            ((void (__fastcall *)(int, int, int, uint, int, int, int, int, int *))dword_2253DD8[1343])(
              v4,
              v38,
              v36,
              v14,
              v15,
              v16,
              v17,
              v18,
              &v56);
          }
          if ( v56 & 2 )
          {
            v19 = ((int (__fastcall *)(int))dword_223F350[91])(v3);
            s32_div_f(v19, 3);
            if ( v20 < 2 )
              break;
          }
        }
      }
      if ( ++v54 >= 4 )
        goto LABEL_46;
    }
    *(uchar *)(v4 + v33 + 8612) = v40;
    result = 1;
  }
  return result;
}

//----- (02223B34) --------------------------------------------------------
int __fastcall Function_2223b34(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int result;
  uint v11;
  int v12;
  int v13;
  int v14;
  uint v15;
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

  v25 = a4;
  v4 = a3;
  v5 = a2;
  v6 = a1;
  v17 = a4;
  v7 = ((int (*)(void))dword_223E1F8[0])();
  v22 = ((uchar (__fastcall *)(int, int))dword_223E1C4[0])(v6, (v7 ^ 1) & 0xFF);
  if ( Function_20787cc(v22) & *(uchar *)(v5 + 12552) )
  {
LABEL_10:
    if ( ((int (__fastcall *)(int))dword_223DCC0[147])(v6) & 2 )
    {
      v20 = ((uchar (__fastcall *)(int, int))dword_223E258[0])(v6, v22);
      if ( Function_20787cc(v20) & *(uchar *)(v5 + 12552) )
      {
LABEL_21:
        result = 0;
      }
      else
      {
        v19 = 0;
        v13 = v5 + 192 * v4;
        while ( 1 )
        {
          v18 = *(ushort *)(v13 + 11596);
          v14 = Function_222327c(v6, v5, v4, v18);
          if ( v18 )
          {
            v24 = 0;
            ((void (__fastcall *)(int, int, int, int, int, int, uint, int *))dword_2253DD8[1140])(
              v6,
              v5,
              v18,
              v14,
              v4,
              v20,
              0,
              &v24);
            if ( v24 & 2 )
            {
              if ( v17 )
                return 1;
              v15 = ((int (__fastcall *)(int))dword_223F350[91])(v6);
              s32_div_f(v15, 10);
              if ( v16 )
                break;
            }
          }
          v13 += 2;
          if ( ++v19 >= 4 )
            goto LABEL_21;
        }
        result = 1;
      }
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    v23 = 0;
    v8 = v5 + 192 * v4;
    while ( 1 )
    {
      v21 = *(ushort *)(v8 + 11596);
      v9 = Function_222327c(v6, v5, v4, v21);
      if ( v21 )
      {
        v24 = 0;
        ((void (__fastcall *)(int, int, int, int, int, int, uint, int *))dword_2253DD8[1140])(
          v6,
          v5,
          v21,
          v9,
          v4,
          v22,
          0,
          &v24);
        if ( v24 & 2 )
        {
          if ( v17 )
            return 1;
          v11 = ((int (__fastcall *)(int))dword_223F350[91])(v6);
          s32_div_f(v11, 10);
          if ( v12 )
            break;
        }
      }
      v8 += 2;
      if ( ++v23 >= 4 )
        goto LABEL_10;
    }
    result = 1;
  }
  return result;
}

//----- (02223C8C) --------------------------------------------------------
int __fastcall Function_2223c8c(int a1, int a2, int a3)
{
  int v3;
  uint v4;
  int v5;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;

  v3 = a1;
  v14 = a2;
  v15 = a3;
  if ( Function_2223b34(a1, a2, a3, 1) )
  {
    v4 = ((int (__fastcall *)(int))dword_223F350[91])(v3);
    s32_div_f(v4, 3);
    if ( v5 )
      return 0;
  }
  v7 = v14 + 2 * v15;
  if ( !*(ushort *)(v7 + 12388) )
    return 0;
  v8 = v14 + 16 * *(ushort *)(v7 + 12388);
  if ( !*(uchar *)(v8 + 993) )
    return 0;
  v9 = *(uchar *)(v8 + 994);
  switch ( v9 )
  {
    case 10:
      v18 = 18;
      break;
    case 11:
      v18 = 11;
      break;
    case 13:
      v18 = 10;
      break;
    default:
      return 0;
  }
  if ( v18 == ((int (__fastcall *)(int, int))dword_2253DD8[1821])(v14, v15) )
    return 0;
  if ( ((int (__fastcall *)(int))dword_223DCC0[147])(v3) & 0x10 || ((int (__fastcall *)(int))dword_223DCC0[147])(v3) & 8 )
    v10 = (uchar)v15;
  else
    v10 = ((int (__fastcall *)(int, int))dword_223E258[0])(v3, v15) & 0xFF;
  v11 = 0;
  v17 = ((int (__fastcall *)(int, int))dword_223DCC0[168])(v3, v15);
  if ( v17 <= 0 )
    return 0;
  v16 = v14 + (uchar)v15;
  v12 = v14 + v10;
  while ( 1 )
  {
    v13 = (int *)((int (__fastcall *)(int, int, int))dword_223DCC0[187])(v3, v15, v11);
    if ( GetPkmnData(v13, 0xA3u, 0) )
    {
      if ( GetPkmnData(v13, 0xAEu, 0)
        && GetPkmnData(v13, 0xAEu, 0) != 494
        && v11 != *(uchar *)(v16 + 8604)
        && v11 != *(uchar *)(v12 + 8604)
        && v11 != *(uchar *)(v16 + 8612)
        && v11 != *(uchar *)(v12 + 8612)
        && v18 == (uchar)GetPkmnData(v13, 0xAu, 0)
        && ((int (__fastcall *)(int))dword_223F350[91])(v3) & 1 )
      {
        break;
      }
    }
    if ( ++v11 >= v17 )
      return 0;
  }
  *(uchar *)(v14 + v15 + 8612) = v11;
  return 1;
}

//----- (02223E10) --------------------------------------------------------
int __fastcall Function_2223e10(int a1, int a2, int a3, int a4, uchar a5)
{
  int v5;
  int v6;
  int v7;
  int v9;
  int v10;
  int *v11;
  int v12;
  int v13;
  uint v14;
  ushort v15;
  int v16;
  uint v17;
  uint v18;
  int v19;
  uint v20;
  int v21;
  int v22;
  int v23;
  int v24;
  uint v25;
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

  v37 = a4;
  v5 = a2;
  v6 = 2 * a3;
  v29 = a4;
  v7 = a2 + 2 * a3;
  v28 = a3;
  v27 = a1;
  if ( !*(ushort *)(v7 + 12388) || *(ushort *)(v7 + 12396) == 255 )
    return 0;
  if ( !*(uchar *)(a2 + 16 * *(ushort *)(v7 + 12388) + 993) )
    return 0;
  if ( ((int (*)(void))dword_223DCC0[147])() & 0x10 || ((int (__fastcall *)(int))dword_223DCC0[147])(v27) & 8 )
    v9 = (uchar)v28;
  else
    v9 = ((int (__fastcall *)(int, int))dword_223E258[0])(v27, v28) & 0xFF;
  v33 = ((int (__fastcall *)(int, int))dword_223DCC0[168])(v27, v28);
  v34 = 0;
  if ( v33 <= 0 )
    return 0;
  v32 = v5 + (uchar)v28;
  v31 = v5 + v9;
  v10 = v5 + v6;
  while ( 1 )
  {
    v11 = (int *)((int (__fastcall *)(int, int, int))dword_223DCC0[187])(v27, v28, v34);
    if ( GetPkmnData(v11, 0xA3u, 0) )
    {
      if ( GetPkmnData(v11, 0xAEu, 0) )
      {
        if ( GetPkmnData(v11, 0xAEu, 0) != 494
          && v34 != *(uchar *)(v32 + 8604)
          && v34 != *(uchar *)(v31 + 8604)
          && v34 != *(uchar *)(v32 + 8612)
          && v34 != *(uchar *)(v31 + 8612) )
        {
          v36 = 0;
          v12 = Function_222327c(v27, v5, *(ushort *)(v10 + 12396), *(ushort *)(v10 + 12388));
          v13 = ((int (__fastcall *)(int, uint))dword_2253DD8[1821])(v5, *(ushort *)(v10 + 12396));
          v14 = GetPkmnData(v11, 0xAu, 0);
          v15 = GetPkmnData(v11, 6u, 0);
          v16 = ((int (__fastcall *)(int, uint, int))dword_2259250[1963])(v5, v15, 1);
          v17 = GetPkmnData(v11, 0xB1u, 0);
          v18 = GetPkmnData(v11, 0xB2u, 0);
          ((void (__fastcall *)(int, uint, int, int, uint, int, uint, uint, int *))dword_2253DD8[1343])(
            v5,
            *(ushort *)(v10 + 12388),
            v12,
            v13,
            v14,
            v16,
            v17,
            v18,
            &v36);
          if ( v29 & v36 )
            break;
        }
      }
    }
LABEL_27:
    if ( ++v34 >= v33 )
      return 0;
  }
  v19 = 0;
  while ( 1 )
  {
    v30 = (ushort)GetPkmnData(v11, v19 + 54, 0);
    v35 = ((int (__fastcall *)(int, int, int *, int))dword_2259250[2811])(v27, v5, v11, v30);
    if ( v30 )
    {
      v36 = 0;
      v20 = GetPkmnData(v11, 0xAu, 0);
      v21 = ((int (__fastcall *)(int, uint))dword_2253DD8[1821])(v5, *(ushort *)(v10 + 12396));
      v22 = ((int (__fastcall *)(int, uint))dword_2253DD8[4920])(v5, *(ushort *)(v10 + 12396));
      v23 = ((int (__fastcall *)(int, uint, int, uint))dword_2252060[0])(
              v5,
              *(ushort *)(v10 + 12396),
              27,
              0);
      v24 = ((int (__fastcall *)(int, uint, int, uint))dword_2252060[0])(
              v5,
              *(ushort *)(v10 + 12396),
              28,
              0);
      ((void (__fastcall *)(int, int, int, uint, int, int, int, int, int *))dword_2253DD8[1343])(
        v5,
        v30,
        v35,
        v20,
        v21,
        v22,
        v23,
        v24,
        &v36);
      if ( v36 & 2 )
      {
        v25 = ((int (__fastcall *)(int))dword_223F350[91])(v27);
        s32_div_f(v25, a5);
        if ( !v26 )
          break;
      }
    }
    if ( ++v19 >= 4 )
      goto LABEL_27;
  }
  *(uchar *)(v5 + v28 + 8612) = v34;
  return 1;
}

//----- (02224070) --------------------------------------------------------
int __fastcall Function_2224070(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;

  v3 = a1;
  v4 = a3;
  v5 = a2;
  if ( !(*(uint *)(a2 + 192 * a3 + 11692) & 7)
    || ((int (__fastcall *)(int, int))dword_2253DD8[1821])(a2, a3) != 30
    || *(uint *)(v5 + 192 * v4 + 11660) < *(uint *)(v5 + 192 * v4 + 11664) >> 1 )
  {
    return 0;
  }
  if ( *(ushort *)(v5 + 12388 + 2 * v4) || !(((int (__fastcall *)(int))dword_223F350[91])(v3) & 1) )
  {
    if ( *(uchar *)(v5 + 16 * *(ushort *)(v5 + 12388 + 2 * v4) + 993)
      || !(((int (__fastcall *)(int))dword_223F350[91])(v3) & 1) )
    {
      if ( Function_2223e10(v3, v5, v4, 8, 1u) )
      {
        result = 1;
      }
      else if ( Function_2223e10(v3, v5, v4, 4, 1u) )
      {
        result = 1;
      }
      else if ( ((int (__fastcall *)(int))dword_223F350[91])(v3) & 1 )
      {
        *(uchar *)(v5 + v4 + 8612) = 6;
        result = 1;
      }
      else
      {
        result = 0;
      }
    }
    else
    {
      *(uchar *)(v5 + v4 + 8612) = 6;
      result = 1;
    }
  }
  else
  {
    *(uchar *)(v5 + v4 + 8612) = 6;
    result = 1;
  }
  return result;
}

//----- (0222416C) --------------------------------------------------------
BOOL __fastcall Function_222416c(int a1, int a2, int a3)
{
  uint v3;
  int v4;
  int v5;
  int v6;

  v3 = 0;
  v4 = 0;
  v5 = a2 + 192 * a3;
  do
  {
    v6 = *(char *)(v5 + 11608);
    if ( v6 > 6 )
      v3 = (v3 + v6 - 6) & 0xFF;
    ++v4;
    ++v5;
  }
  while ( v4 < 8 );
  return v3 >= 4;
}

//----- (022241A4) --------------------------------------------------------
int __fastcall Function_22241a4(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v3 = a3;
  v4 = a2 + 192 * a3;
  v10 = a1;
  v11 = a2;
  if ( *(uint *)(v4 + 11696) & 0x400E000
    || *(uint *)(v4 + 11712) & 0x400
    || ((int (__cdecl *)(int))dword_2253DD8[1523])(a1)
    || ((int (__fastcall *)(int, int, int, int, int))dword_2253DD8[1523])(v10, v11, 2, v3, 71)
    || ((int (__fastcall *)(int, int, int, int, int))dword_2253DD8[1523])(v10, v11, 6, v3, 42)
    && (((int (__fastcall *)(int, int, int, uint))dword_2252060[0])(v11, v3, 27, 0) == 8
     || ((int (__fastcall *)(int, int, int, uint))dword_2252060[0])(v11, v3, 28, 0) == 8) )
  {
    return 0;
  }
  v14 = 0;
  if ( ((int (__fastcall *)(int))dword_223DCC0[147])(v10) & 0x10
    || ((int (__fastcall *)(int))dword_223DCC0[147])(v10) & 8 )
  {
    v6 = (uchar)v3;
  }
  else
  {
    v6 = ((int (__fastcall *)(int, int))dword_223E258[0])(v10, v3) & 0xFF;
  }
  v7 = 0;
  v13 = ((int (__fastcall *)(int, int))dword_223DCC0[168])(v10, v3);
  if ( v13 > 0 )
  {
    v12 = v11 + (uchar)v3;
    v8 = v11 + v6;
    do
    {
      v9 = (int *)((int (__fastcall *)(int, int, int))dword_223DCC0[187])(v10, v3, v7);
      if ( GetPkmnData(v9, 0xA3u, 0)
        && GetPkmnData(v9, 0xAEu, 0)
        && GetPkmnData(v9, 0xAEu, 0) != 494
        && v7 != *(uchar *)(v12 + 8604)
        && v7 != *(uchar *)(v8 + 8604)
        && v7 != *(uchar *)(v12 + 8612)
        && v7 != *(uchar *)(v8 + 8612) )
      {
        ++v14;
      }
      ++v7;
    }
    while ( v7 < v13 );
  }
  if ( !v14 )
    goto LABEL_46;
  if ( Function_22233f4(v11, v3) )
    return 1;
  if ( Function_222342c(v10, v11, v3) )
    return 1;
  if ( Function_22235f0(v10, v11, v3) )
    return 1;
  if ( Function_2223c8c(v10, v11, v3) )
    return 1;
  if ( Function_2224070(v10, v11, v3) )
    return 1;
  if ( Function_2223b34(v10, v11, v3, 0) )
    return 0;
  if ( Function_222416c(v10, v11, v3) )
    return 0;
  if ( Function_2223e10(v10, v11, v3, 8, 2u) )
    return 1;
  if ( Function_2223e10(v10, v11, v3, 4, 3u) )
    result = 1;
  else
LABEL_46:
    result = 0;
  return result;
}

//----- (022243BC) --------------------------------------------------------
int __fastcall Function_14_22243bc(int a1, int a2)
{
  int v2;
  int v3;
  char v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int *v9;
  int v11;
  int v12;
  int v13;
  int v14;

  v2 = a2;
  v11 = a1;
  v3 = *(uint *)(a1 + 48);
  v4 = ((int (*)(void))dword_223DCC0[147])();
  if ( !(v4 & 1) && ((int (__fastcall *)(int, int))dword_223E208[0])(v11, v2) )
    return 1;
  if ( !Function_22241a4(v11, v3, v2) )
  {
    if ( Function_22244b0(v11, v2) )
      return 2;
    return 1;
  }
  v14 = v3 + 8612;
  if ( *(uchar *)(v3 + 8612 + v2) == 6 )
  {
    v5 = ((int (__fastcall *)(int, int))dword_2259250[2574])(v11, v2);
    LOBYTE(v6) = v5;
    if ( v5 == 6 )
    {
      v13 = v4 & 0x10 || v4 & 8 ? (uchar)v2 : ((int (__fastcall *)(int, int))dword_223E258[0])(v11, v2) & 0xFFu;
      v6 = 0;
      v12 = ((int (__fastcall *)(int, int))dword_223DCC0[168])(v11, v2);
      if ( v12 > 0 )
      {
        v7 = v3 + (uchar)v2;
        v8 = v3 + v13;
        do
        {
          v9 = (int *)((int (__fastcall *)(int, int, int))dword_223DCC0[187])(v11, v2, v6);
          if ( GetPkmnData(v9, 0xA3u, 0)
            && v6 != *(uchar *)(v7 + 8604)
            && v6 != *(uchar *)(v8 + 8604)
            && v6 != *(uchar *)(v7 + 8612)
            && v6 != *(uchar *)(v8 + 8612) )
          {
            break;
          }
          ++v6;
        }
        while ( v6 < v12 );
      }
    }
    *(uchar *)(v14 + v2) = v6;
  }
  return 3;
}

//----- (022244B0) --------------------------------------------------------
int __fastcall Function_22244b0(int a1, int a2)
{
  int v2;
  int v3;
  uint *v5;
  int i;
  int *v7;
  uchar *v8;
  uint *v9;
  int v10;
  uint v11;
  uint v12;
  uint v13;
  uint v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;

  v2 = a1;
  v19 = 0;
  v3 = *(uint *)(a1 + 48);
  v18 = a2 >> 1;
  v21 = 0;
  *(uchar *)(v3 + (a2 >> 1) + 979) = 0;
  v16 = a2;
  if ( (*(uint *)(a1 + 44) & 0x4B) == 75 && ((int (*)(void))dword_223E1F8[0])() == 4 )
    return 0;
  if ( *(uint *)(v3 + 192 * v16 + 11712) & 0x4000000 )
    return 0;
  v5 = (uint *)((int (__fastcall *)(int, int))dword_223DCC0[152])(v2, v16);
  for ( i = 0; i < GetNrOfPkmnInParty((int)v5); ++i )
  {
    v7 = GetAdrOfPkmnInParty(v5, i);
    if ( GetPkmnData(v7, 0xA3u, 0) && GetPkmnData(v7, 0xAEu, 0) && GetPkmnData(v7, 0xAEu, 0) != 494 )
      v19 = (v19 + 1) & 0xFF;
  }
  v17 = 0;
  v20 = v3 + 8 * v18;
  v8 = (uchar *)(v3 + v18);
  v9 = (uint *)(v3 + 192 * v16);
  do
  {
    if ( !v17 || v19 <= v8[973] - v17 + 1 )
    {
      v10 = *(ushort *)(v20 + 924);
      if ( *(ushort *)(v20 + 924) )
      {
        if ( v10 == 23 )
        {
          v11 = v9[2915];
          if ( v11 < v9[2916] >> 2 && v11 )
          {
            v8[977] = 0;
            v21 = 1;
          }
        }
        else if ( ((int (__fastcall *)(int, uint, int))dword_2259250[1963])(
                    v3,
                    *(ushort *)(v20 + 924),
                    38) )
        {
          v12 = ((int (__fastcall *)(int, int, int))dword_2259250[1963])(v3, v10, 54) & 0xFF;
          if ( v12 )
          {
            v13 = v9[2915];
            if ( v13 )
            {
              v14 = v9[2916];
              if ( v13 < v14 >> 2 || v14 - v13 > v12 )
              {
                v8[977] = 1;
                v21 = 1;
              }
            }
          }
        }
        else if ( ((int (__fastcall *)(int, int, int))dword_2259250[1963])(v3, v10, 15) )
        {
          if ( v9[2923] & 7 )
          {
            v8[979] |= Function_20787cc(5);
            v8[977] = 2;
            v21 = 1;
          }
        }
        else if ( ((int (__fastcall *)(int, int, int))dword_2259250[1963])(v3, v10, 16) )
        {
          v15 = v9[2923];
          if ( v15 & 8 || v15 & 0x80 )
          {
            v8[979] |= Function_20787cc(4);
            v8[977] = 2;
            v21 = 1;
          }
        }
        else if ( ((int (__fastcall *)(int, int, int))dword_2259250[1963])(v3, v10, 17) )
        {
          if ( v9[2923] & 0x10 )
          {
            v8[979] |= Function_20787cc(3);
            v8[977] = 2;
            v21 = 1;
          }
        }
        else if ( ((int (__fastcall *)(int, int, int))dword_2259250[1963])(v3, v10, 18) )
        {
          if ( v9[2923] & 0x20 )
          {
            v8[979] |= Function_20787cc(2);
            v8[977] = 2;
            v21 = 1;
          }
        }
        else if ( ((int (__fastcall *)(int, int, int))dword_2259250[1963])(v3, v10, 19) )
        {
          if ( v9[2923] & 0x40 )
          {
            v8[979] |= Function_20787cc(1);
            v8[977] = 2;
            v21 = 1;
          }
        }
        else if ( ((int (__fastcall *)(int, int, int))dword_2259250[1963])(v3, v10, 20) )
        {
          if ( v9[2924] & 7 )
          {
            v8[979] |= Function_20787cc(0);
            v8[977] = 2;
            v21 = 1;
          }
        }
        else if ( v9[2933] - *(uint *)(v3 + 336) >= 0 )
        {
          if ( ((int (__fastcall *)(int, int, int))dword_2259250[1963])(v3, v10, 27) )
          {
            v8[979] = 1;
            v8[977] = 3;
            v21 = 1;
          }
          else if ( ((int (__fastcall *)(int, int, int))dword_2259250[1963])(v3, v10, 28) )
          {
            v8[979] = 2;
            v8[977] = 3;
            v21 = 1;
          }
          else if ( ((int (__fastcall *)(int, int, int))dword_2259250[1963])(v3, v10, 29) )
          {
            v8[979] = 4;
            v8[977] = 3;
            v21 = 1;
          }
          else if ( ((int (__fastcall *)(int, int, int))dword_2259250[1963])(v3, v10, 30) )
          {
            v8[979] = 5;
            v8[977] = 3;
            v21 = 1;
          }
          else if ( ((int (__fastcall *)(int, int, int))dword_2259250[1963])(v3, v10, 31) )
          {
            v8[979] = 3;
            v8[977] = 3;
            v21 = 1;
          }
          else if ( ((int (__fastcall *)(int, int, int))dword_2259250[1963])(v3, v10, 32) )
          {
            v8[979] = 6;
            v8[977] = 3;
            v21 = 1;
          }
          else if ( ((int (__fastcall *)(int, int, int))dword_2259250[1963])(v3, v10, 22)
                 && !(*(uint *)(v3 + 448) & 0x40) )
          {
            v8[977] = 4;
            v21 = 1;
          }
        }
        else
        {
          v8[977] = 5;
        }
        if ( v21 == 1 )
        {
          *(ushort *)(v3 + (v16 & 0xFFFFFFFE) + 982) = v10;
          *(ushort *)(v20 + 924) = 0;
        }
      }
    }
    v20 += 2;
    ++v17;
  }
  while ( v17 < 4 );
  return v21;
}

