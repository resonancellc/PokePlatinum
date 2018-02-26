//----- (02249960) --------------------------------------------------------
int __fastcall Function_2249960(char a1, int a2)
{
  return (a2 >> a1) & 1;
}

//----- (0224996C) --------------------------------------------------------
int __fastcall Function_224996c(char a1, int *a2)
{
  int result;

  result = *a2 ^ (1 << a1);
  *a2 = result;
  return result;
}

//----- (0224997C) --------------------------------------------------------
int __fastcall Function_8_224997c(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;
  int v5;
  uint *v6;
  uint *v7;
  uint *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  char v13;

  v1 = a1;
  v10 = 239;
  v11 = 240;
  v12 = 241;
  v2 = GetSpritePositionX(*(uint *)(a1 + 60));
  v3 = GetSpritePositionY(*(uint *)(v1 + 60));
  Function_20550f4(v2, v3, 0, 0, 1, 1, &v13);
  result = Function_2055208(v1, (int)&v10, 3u, (int *)&v13, 0, &v9);
  if ( result )
  {
    v5 = GetOverWorldData_VariableAreaAdresses(v1);
    v6 = (uint *)Function_2027860(v5);
    v7 = Function_2027f6c(v6, 1);
    v8 = (uint *)malloc2(0xBu, 4);
    *v8 = 0;
    switch ( v9 )
    {
      case 239:
        Function_2050944(*(uint *)(v1 + 16), (int)Function_2249cd8, (int)v8);
        result = 2;
        *(uchar *)v7 = 2;
        break;
      case 240:
        Function_2050944(*(uint *)(v1 + 16), (int)Function_2249b74, (int)v8);
        result = 1;
        *(uchar *)v7 = 1;
        break;
      case 241:
        Function_2050944(*(uint *)(v1 + 16), (int)Function_2249a94, (int)v8);
        result = 0;
        *(uchar *)v7 = 0;
        break;
      default:
        result = ErrorHandler();
        break;
    }
  }
  return result;
}

//----- (02249A40) --------------------------------------------------------
int __fastcall Function_8_2249a40(int a1, int a2, int a3, int a4, uint *a5)
{
  int v5;
  int v6;
  int result;

  v5 = a4;
  v6 = Function_2054f94(a1, a2, a3, a4);
  if ( Function_205dbfc(v6) )
  {
    if ( v5 )
    {
      result = 1;
      *a5 = 1;
      return result;
    }
  }
  else if ( Function_205dc08(v6) )
  {
    if ( v5 != 0x20000 )
    {
      result = 1;
      *a5 = 1;
      return result;
    }
  }
  else if ( Function_205dc14(v6) && v5 != 0x40000 )
  {
    result = 1;
    *a5 = 1;
    return result;
  }
  result = 0;
  *a5 = 0;
  return result;
}

//----- (02249A94) --------------------------------------------------------
int __fastcall Function_2249a94(int a1, int a2, int a3, int a4)
{
  int v4;
  uint *v5;
  uint *v6;
  uint *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int result;
  int v13;
  char v14;
  int v15;
  int v16;

  v16 = a4;
  v4 = a1;
  v5 = (uint *)LoadOverWorldDataAdress(a1);
  v6 = (uint *)GetUnknownStruct01_c(v4);
  v7 = v6;
  switch ( (uchar)*v6 )
  {
    case 0u:
      Function_2249f14(0, v5[20]);
      ++*v7;
      goto LABEL_11;
    case 1u:
      v8 = ((int (__fastcall *)(int, uint))dword_21D3DA0[0])(1, v5[20]);
      v9 = ((int (__fastcall *)(int, uint))dword_21D3DA0[0])(2, v5[20]);
      v13 = ((int (__fastcall *)(int, uint))dword_21D3DA0[0])(3, v5[20]);
      if ( ((int (__fastcall *)(int))dword_21D3F70[0])(v8)
        && ((int (__fastcall *)(int))dword_21D3F70[0])(v9)
        && ((int (__fastcall *)(int))dword_21D3F70[0])(v13) )
      {
        v10 = ((int (__fastcall *)(uint, int))dword_21E18CC[0])(v5[41], 242);
        ((void (__fastcall *)(char *, int))dword_21E1894[0])(&v14, v10);
        v15 -= 4096;
        if ( v15 <= 0 )
        {
          v15 = 0;
          ++*v7;
        }
        ((void (__fastcall *)(int, char *))dword_21E18A4[0])(v10, &v14);
      }
      goto LABEL_11;
    case 2u:
      v11 = v5[40];
      ((void (*)(void))dword_21EF388[0])();
      Function_20057a4(1626, 0);
      ++*v7;
      goto LABEL_11;
    case 3u:
      free((int)v6);
      result = 1;
      break;
    default:
LABEL_11:
      result = 0;
      break;
  }
  return result;
}

//----- (02249B74) --------------------------------------------------------
int __fastcall Function_2249b74(int a1, int a2, int a3, int a4)
{
  int v4;
  uint *v5;
  uint *v6;
  uint *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  char v20;
  int v21;
  int v22;

  v22 = a4;
  v4 = a1;
  v5 = (uint *)LoadOverWorldDataAdress(a1);
  v6 = (uint *)GetUnknownStruct01_c(v4);
  v7 = v6;
  v8 = *v6;
  if ( *v6 <= 5u )
    JUMPOUT(__CS__, *((short *)&off_2249B9C + v8) + 35953566);
  switch ( (uchar)v8 )
  {
    case 0:
      Function_2249f14(1, v5[20]);
      ++*v7;
      return 0;
    case 1:
      v9 = ((int (__fastcall *)(int, uint))dword_21D3DA0[0])(1, v5[20]);
      v10 = ((int (__fastcall *)(int, uint))dword_21D3DA0[0])(2, v5[20]);
      v15 = ((int (__fastcall *)(int, uint))dword_21D3DA0[0])(3, v5[20]);
      if ( !((int (__fastcall *)(int))dword_21D3F70[0])(v9)
        || !((int (__fastcall *)(int))dword_21D3F70[0])(v10)
        || !((int (__fastcall *)(int))dword_21D3F70[0])(v15) )
      {
        return 0;
      }
      v11 = ((int (__fastcall *)(uint, int))dword_21E18CC[0])(v5[41], 242);
      ((void (__fastcall *)(char *, int))dword_21E1894[0])(&v20, v11);
      if ( v21 )
      {
        if ( v21 == 0x20000 )
        {
          free((int)v7);
          return 1;
        }
        if ( v21 == 0x40000 )
          *v7 = 3;
        else
          ErrorHandler();
      }
      else
      {
        *v7 = 2;
      }
      return 0;
    case 2:
      v13 = ((int (__fastcall *)(uint, int))dword_21E18CC[0])(v5[41], 242);
      ((void (__fastcall *)(int *, int))dword_21E1894[0])(&v18, v13);
      v19 += 4096;
      if ( v19 >= 0x20000 )
      {
        v19 = 0x20000;
        *v7 = 4;
      }
      ((void (__fastcall *)(int, int *))dword_21E18A4[0])(v13, &v18);
      return 0;
    case 3:
      v14 = ((int (__fastcall *)(uint, int))dword_21E18CC[0])(v5[41], 242);
      ((void (__fastcall *)(int *, int))dword_21E1894[0])(&v16, v14);
      v17 -= 4096;
      if ( v17 <= 0x20000 )
      {
        v17 = 0x20000;
        *v7 = 4;
      }
      ((void (__fastcall *)(int, int *))dword_21E18A4[0])(v14, &v16);
      return 0;
    case 4:
      ((void (__fastcall *)(uint, int, uint))dword_21EF388[0])(0, 0x20000, v5[40]);
      Function_20057a4(1626, 0);
      ++*v7;
      return 0;
    case 5:
      free((int)v6);
      return 1;
    default:
      return 0;
  }
}

//----- (02249CD8) --------------------------------------------------------
int __fastcall Function_2249cd8(int a1, int a2, int a3, int a4)
{
  int v4;
  uint *v5;
  uint *v6;
  uint *v7;
  int v8;
  int v9;
  int v10;
  int result;
  int v12;
  char v13;
  int v14;
  int v15;

  v15 = a4;
  v4 = a1;
  v5 = (uint *)LoadOverWorldDataAdress(a1);
  v6 = (uint *)GetUnknownStruct01_c(v4);
  v7 = v6;
  switch ( (uchar)*v6 )
  {
    case 0u:
      Function_2249f14(2, v5[20]);
      ++*v7;
      goto LABEL_11;
    case 1u:
      v8 = ((int (__fastcall *)(int, uint))dword_21D3DA0[0])(1, v5[20]);
      v9 = ((int (__fastcall *)(int, uint))dword_21D3DA0[0])(2, v5[20]);
      v12 = ((int (__fastcall *)(int, uint))dword_21D3DA0[0])(3, v5[20]);
      if ( ((int (__fastcall *)(int))dword_21D3F70[0])(v8)
        && ((int (__fastcall *)(int))dword_21D3F70[0])(v9)
        && ((int (__fastcall *)(int))dword_21D3F70[0])(v12) )
      {
        v10 = ((int (__fastcall *)(uint, int))dword_21E18CC[0])(v5[41], 242);
        ((void (__fastcall *)(char *, int))dword_21E1894[0])(&v13, v10);
        v14 += 4096;
        if ( v14 >= 0x40000 )
        {
          v14 = 0x40000;
          ++*v7;
        }
        ((void (__fastcall *)(int, char *))dword_21E18A4[0])(v10, &v13);
      }
      goto LABEL_11;
    case 2u:
      ((void (__fastcall *)(uint, int, uint))dword_21EF388[0])(0, 0x40000, v5[40]);
      Function_20057a4(1626, 0);
      ++*v7;
      goto LABEL_11;
    case 3u:
      free((int)v6);
      result = 1;
      break;
    default:
LABEL_11:
      result = 0;
      break;
  }
  return result;
}

//----- (02249DBC) --------------------------------------------------------
int __fastcall Function_2249dbc(int a1)
{
  uint *v1;
  int v2;
  uint *v3;
  uchar *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v15;
  char v16;
  int v17;
  int v18;
  int v19;
  int v20;

  v1 = (uint *)a1;
  v2 = GetOverWorldData_VariableAreaAdresses(a1);
  v3 = (uint *)Function_2027860(v2);
  v4 = Function_2027f6c(v3, 1);
  v18 = 0x100000;
  v19 = 0;
  v20 = 0x100000;
  ((void (__fastcall *)(uint, uint, int, int *, uint, uint))dword_21E19CC[0])(
    v1[41],
    v1[12],
    242,
    &v18,
    0,
    v1[20]);
  v5 = v1[40];
  ((void (__cdecl *)(uint, int, int))dword_21EF2CC[0])(0, 1, 2);
  v6 = (uchar)*v4;
  if ( *v4 )
  {
    if ( v6 == 1 )
    {
      v8 = 1;
      v7 = 0x20000;
      v9 = 0;
      v15 = 1;
    }
    else if ( v6 == 2 )
    {
      v9 = 1;
      v7 = 0x40000;
      v8 = 0;
      v15 = 1;
    }
    else
    {
      ErrorHandler();
      v7 = 0;
      v8 = 1;
      v9 = 1;
      v15 = 0;
    }
  }
  else
  {
    v7 = 0;
    v8 = 1;
    v9 = 1;
    v15 = 0;
  }
  v10 = ((int (__fastcall *)(uint, int))dword_21E18CC[0])(v1[41], 242);
  ((void (__fastcall *)(char *, int))dword_21E1894[0])(&v16, v10);
  v17 = v7;
  ((void (__fastcall *)(int, char *))dword_21E18A4[0])(v10, &v16);
  ((void (__fastcall *)(uint, int, uint))dword_21EF388[0])(0, v7, v1[40]);
  v11 = ((int (__fastcall *)(int, uint, uint))dword_21D3DA0[17])(239, 0, v1[20]);
  ((void (*)(void))dword_21D3F04[2])();
  ((void (__fastcall *)(int, int))dword_21D3F04[0])(v11, v8);
  ((void (__fastcall *)(int, int))dword_21D3F04[1])(v11, 1);
  ((void (__fastcall *)(int, int))dword_21D3E40)(v11, 1);
  ((void (__fastcall *)(int))dword_21D3E7C[8])(v11);
  v12 = ((int (__fastcall *)(int, uint, uint))dword_21D3DA0[17])(240, 0, v1[20]);
  ((void (*)(void))dword_21D3F04[2])();
  ((void (__fastcall *)(int, int))dword_21D3F04[0])(v12, v9);
  ((void (__fastcall *)(int, int))dword_21D3F04[1])(v12, 1);
  ((void (__fastcall *)(int, int))dword_21D3E40)(v12, 1);
  ((void (__fastcall *)(int))dword_21D3E7C[8])(v12);
  v13 = ((int (__fastcall *)(int, uint, uint))dword_21D3DA0[17])(241, 0, v1[20]);
  ((void (*)(void))dword_21D3F04[2])();
  ((void (__fastcall *)(int, int))dword_21D3F04[0])(v13, v15);
  ((void (__fastcall *)(int, int))dword_21D3F04[1])(v13, 1);
  ((void (__fastcall *)(int, int))dword_21D3E40)(v13, 1);
  return ((int (__fastcall *)(int))dword_21D3E7C[8])(v13);
}

//----- (02249F14) --------------------------------------------------------
int __fastcall Function_2249f14(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v5 = a2;
  if ( a1 == 2 )
  {
    v4 = 1;
    v2 = 2;
    v3 = 3;
  }
  else if ( a1 == 1 )
  {
    v4 = 2;
    v2 = 1;
    v3 = 3;
  }
  else if ( a1 )
  {
    ErrorHandler();
  }
  else
  {
    v4 = 3;
    v2 = 1;
    v3 = 2;
  }
  v6 = ((int (__fastcall *)(int, int))dword_21D3DA0[0])(v4, v5);
  ((void (*)(void))dword_21D3F04[0])();
  ((void (__fastcall *)(int))dword_21D3E7C[0])(v6);
  ((void (__fastcall *)(int, uint))dword_21D3E40)(v6, 0);
  ((void (__fastcall *)(int))dword_21D3E44[0])(v6);
  v7 = ((int (__fastcall *)(int, int))dword_21D3DA0[0])(v2, v5);
  ((void (*)(void))dword_21D3F04[0])();
  ((void (__fastcall *)(int))dword_21D3E7C[0])(v7);
  ((void (__fastcall *)(int, uint))dword_21D3E40)(v7, 0);
  ((void (__fastcall *)(int))dword_21D3E44[0])(v7);
  v8 = ((int (__fastcall *)(int, int))dword_21D3DA0[0])(v3, v5);
  ((void (*)(void))dword_21D3F04[0])();
  ((void (__fastcall *)(int))dword_21D3E7C[0])(v8);
  ((void (__fastcall *)(int, uint))dword_21D3E40)(v8, 0);
  ((void (__fastcall *)(int))dword_21D3E44[0])(v8);
  return Function_2005748(0x65Au);
}

//----- (02249FB8) --------------------------------------------------------
int __fastcall Function_8_2249fb8(int a1, int a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int v6;
  int v7;
  uint *v8;
  uint *v9;
  int v10;
  int result;
  char v12;
  int v13;
  int v14;

  v14 = a4;
  v4 = a1;
  v5 = (uint *)malloc2(0xBu, 4);
  v6 = (int)v5;
  *v5 = 0;
  v7 = GetOverWorldData_VariableAreaAdresses(v4);
  v8 = (uint *)Function_2027860(v7);
  v9 = Function_2027f6c(v8, 2);
  Function_205eaec(*(uint *)(v4 + 60), &v12);
  v10 = *(uint *)(v4 + 16);
  if ( v13 )
  {
    Function_2050944(v10, (int)Function_224a0e8, v6);
    result = 0;
    *(uchar *)v9 = 0;
  }
  else
  {
    Function_2050944(v10, (int)Function_224a018, v6);
    result = 1;
    *(uchar *)v9 = 1;
  }
  return result;
}

//----- (0224A018) --------------------------------------------------------
int __fastcall Function_224a018(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  uint *v6;
  uint *v7;
  int v8;
  int result;
  char v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a1;
  v5 = (int *)LoadOverWorldDataAdress(a1);
  v6 = (uint *)GetUnknownStruct01_c(v4);
  v7 = v6;
  switch ( (uchar)*v6 )
  {
    case 0u:
      Function_205ed2c(v5[15], 0);
      Function_2005748(0x611u);
      ++*v7;
      goto LABEL_8;
    case 1u:
      v8 = ((int (__fastcall *)(int, int))dword_21E18CC[0])(v5[41], 258);
      ((void (__fastcall *)(char *, int))dword_21E1894[0])(&v10, v8);
      v11 += 4096;
      if ( v11 >= 655360 )
      {
        v11 = 655360;
        Function_20057a4(1553, 0);
        ++*v7;
      }
      Function_205ed0c(v5[15], v11);
      ((void (__fastcall *)(int, char *))dword_21E18A4[0])(v8, &v10);
      goto LABEL_8;
    case 2u:
      ((void (__fastcall *)(uint, int, int))dword_21EF388[0])(0, 655360, v5[40]);
      Function_205ed48(v5[15], 1);
      Function_2005748(0x61Au);
      ++*v7;
      goto LABEL_8;
    case 3u:
      free((int)v6);
      result = 1;
      break;
    default:
LABEL_8:
      result = 0;
      break;
  }
  return result;
}

//----- (0224A0E8) --------------------------------------------------------
int __fastcall Function_224a0e8(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  uint *v6;
  uint *v7;
  int v8;
  int v9;
  int result;
  char v11;
  int v12;
  int v13;

  v13 = a4;
  v4 = a1;
  v5 = (int *)LoadOverWorldDataAdress(a1);
  v6 = (uint *)GetUnknownStruct01_c(v4);
  v7 = v6;
  switch ( (uchar)*v6 )
  {
    case 0u:
      Function_205ed2c(v5[15], 0);
      Function_2005748(0x611u);
      ++*v7;
      goto LABEL_8;
    case 1u:
      v8 = ((int (__fastcall *)(int, int))dword_21E18CC[0])(v5[41], 258);
      ((void (__fastcall *)(char *, int))dword_21E1894[0])(&v11, v8);
      v12 -= 4096;
      if ( v12 <= 0 )
      {
        v12 = 0;
        Function_20057a4(1553, 0);
        ++*v7;
      }
      Function_205ed0c(v5[15], v12);
      ((void (__fastcall *)(int, char *))dword_21E18A4[0])(v8, &v11);
      goto LABEL_8;
    case 2u:
      v9 = v5[40];
      ((void (*)(void))dword_21EF388[0])();
      Function_205ed48(v5[15], 1);
      Function_2005748(0x61Au);
      ++*v7;
      goto LABEL_8;
    case 3u:
      free((int)v6);
      result = 1;
      break;
    default:
LABEL_8:
      result = 0;
      break;
  }
  return result;
}

//----- (0224A1B4) --------------------------------------------------------
int __fastcall Function_224a1b4(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int result;
  int v8;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = 0;
  do
  {
    result = *(uchar *)(v3 + v6 + 16);
    if ( v5 == result )
    {
      v8 = ((int (__fastcall *)(uint, uint))dword_21E18C4[0])(
             *(uint *)(*(uint *)v3 + 164),
             *(uchar *)(v3 + v6 + 40));
      result = ((int (__fastcall *)(int, int))dword_21E18A4[4])(v8, v4);
    }
    ++v6;
  }
  while ( v6 < 24 );
  return result;
}

//----- (0224A1E4) --------------------------------------------------------
uint __fastcall Function_224a1e4(int a1, int a2, int a3, int a4)
{
  int v4;
  uint result;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v10 = a4;
  v4 = a1;
  Function_205eaec(*(uint *)(*(uint *)a1 + 60), &v7);
  result = 0;
  while ( 1 )
  {
    v6 = 3 * result;
    if ( (v8 / 0x10000 & 0xFF) == *(uchar *)(v4 + 3 * result + 65)
      && (v7 / 0x10000 & 0xFF) == *(uchar *)(v4 + v6 + 64)
      && (v9 / 0x10000 & 0xFF) == *(uchar *)(v4 + v6 + 66) )
    {
      break;
    }
    result = (result + 1) & 0xFF;
    if ( result >= 0x18 )
      return 24;
  }
  return result;
}

//----- (0224A254) --------------------------------------------------------
uint *__fastcall Function_224a254(int *a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  uint *v5;
  int *v6;
  uint *v7;
  int v8;
  int v9;
  char *v10;
  int v11;
  char *v12;
  int v13;
  uint *result;
  int v15;
  char *v16;
  int v17;
  char *v18;
  char *v19;
  int v20;

  v2 = a1;
  v3 = a2;
  v4 = GetOverWorldData_VariableAreaAdresses(*a1);
  v5 = (uint *)Function_2027860(v4);
  v6 = Function_2027f6c(v5, 3);
  v7 = (uint *)malloc2(0xBu, 4);
  *v7 = 0;
  v20 = (int)v7;
  *((uchar *)v2 + 232) = v3;
  v8 = v2[v3 + 34];
  v9 = Function_2249960(v3, *v6);
  Function_224996c(v3, v6);
  if ( v8 == 295 )
  {
    if ( v9 )
    {
      v2[60] = 5;
      v10 = byte_224CB6C;
      v11 = 16 * v3;
      v12 = &byte_224CB6C[16 * v3];
      v13 = ((uchar)byte_224CB6C[16 * v3] << 16) + 0x8000;
    }
    else
    {
      v10 = byte_224CB6F;
      v11 = 16 * v3;
      v2[60] = 4;
      v12 = &byte_224CB6F[16 * v3];
      v13 = ((uchar)byte_224CB6F[16 * v3] << 16) + 0x8000;
    }
    v2[59] = v13;
    *((uchar *)v2 + 3 * v3 + 64) = v10[v11];
    *((uchar *)v2 + 3 * v3 + 65) = v12[1];
    *((uchar *)v2 + 3 * v3 + 66) = v12[2];
    result = OverWorldData_InitUnknownStruct01(*v2, (int)Function_224a620, v20);
  }
  else if ( v8 == 294 )
  {
    if ( v9 )
    {
      v2[60] = 2;
      v15 = 16 * v3;
      v16 = byte_224CB6C;
      v2[59] = ((uchar)byte_224CB6E[16 * v3] << 16) + 0x8000;
    }
    else
    {
      v2[60] = 3;
      v15 = 16 * v3;
      v16 = byte_224CB6F;
      v2[59] = ((uchar)byte_224CB71[16 * v3] << 16) + 0x8000;
    }
    v17 = 3 * v3;
    *((uchar *)v2 + v17 + 64) = v16[v15];
    *((uchar *)v2 + v17 + 65) = v16[v15 + 1];
    *((uchar *)v2 + v17 + 66) = v16[v15 + 2];
    result = OverWorldData_InitUnknownStruct01(*v2, (int)Function_224a770, v20);
  }
  else
  {
    if ( v9 )
    {
      v2[60] = 1;
      v2[59] = (uchar)byte_224CB6D[16 * v3] << 16;
      v18 = &byte_224CB6C[16 * v3];
      *((uchar *)v2 + 3 * v3 + 64) = byte_224CB6C[16 * v3];
      *((uchar *)v2 + 3 * v3 + 65) = v18[1];
      *((uchar *)v2 + 3 * v3 + 66) = v18[2];
      *((uchar *)v2 + v3 + 16) = byte_224CB72[16 * v3];
    }
    else
    {
      v2[60] = 0;
      v2[59] = (uchar)byte_224CB70[16 * v3] << 16;
      v19 = &byte_224CB6F[16 * v3];
      *((uchar *)v2 + 3 * v3 + 64) = *v19;
      *((uchar *)v2 + 3 * v3 + 65) = v19[1];
      *((uchar *)v2 + 3 * v3 + 66) = v19[2];
    }
    result = OverWorldData_InitUnknownStruct01(*v2, (int)Function_224a4fc, v20);
  }
  return result;
}

//----- (0224A434) --------------------------------------------------------
int __fastcall Function_224a434(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  int result;
  int v7;

  v2 = a1;
  v3 = a2;
  v7 = ((int (__fastcall *)(uint, int))dword_21E18C4[0])(*(uint *)(*a1 + 164), a1[1] & 0xFF);
  v4 = ((int (__fastcall *)(uint, int))dword_21E18C4[0])(*(uint *)(*v2 + 164), v2[2] & 0xFF);
  v5 = ((int (__fastcall *)(uint, int))dword_21E18C4[0])(*(uint *)(*v2 + 164), v2[3] & 0xFF);
  if ( v3 < 0x10000 )
  {
    ((void (__fastcall *)(int, int))dword_21E18A4[4])(v7, 1);
    Function_224a1b4((int)v2, 1, 1);
  }
  else
  {
    ((void (__fastcall *)(int, uint))dword_21E18A4[4])(v7, 0);
    Function_224a1b4((int)v2, 0, 1);
  }
  if ( v3 < 720896 )
  {
    ((void (__fastcall *)(int, int))dword_21E18A4[4])(v4, 1);
    Function_224a1b4((int)v2, 1, 2);
  }
  else
  {
    ((void (__fastcall *)(int, uint))dword_21E18A4[4])(v4, 0);
    Function_224a1b4((int)v2, 0, 2);
  }
  if ( v3 < 1376256 )
  {
    ((void (__fastcall *)(int, int))dword_21E18A4[4])(v5, 1);
    result = Function_224a1b4((int)v2, 1, 3);
  }
  else
  {
    ((void (__fastcall *)(int, uint))dword_21E18A4[4])(v5, 0);
    result = Function_224a1b4((int)v2, 0, 3);
  }
  return result;
}

//----- (0224A4FC) --------------------------------------------------------
int __fastcall Function_224a4fc(int a1)
{
  int v1;
  uint *v2;
  uint *v3;
  uint *v4;
  int v5;
  int v6;
  int v7;
  int result;
  char v9;
  int v10;

  v1 = a1;
  v2 = (uint *)LoadOverWorldDataAdress(a1);
  v3 = (uint *)GetUnknownStruct01_c(v1);
  v4 = v3;
  v5 = *(uint *)(v2[1] + 36);
  switch ( (uchar)*v3 )
  {
    case 0u:
      Function_205ed2c(v2[15], 0);
      Function_2005748(0x611u);
      ++*v4;
      goto LABEL_13;
    case 1u:
      v6 = ((int (__fastcall *)(uint, uint))dword_21E18C4[0])(
             v2[41],
             *(uchar *)(v5 + *(uchar *)(v5 + 232) + 40));
      ((void (__fastcall *)(char *, int))dword_21E1894[0])(&v9, v6);
      v7 = *(uint *)(v5 + 240);
      if ( v7 )
      {
        if ( v7 == 1 )
        {
          v10 -= 0x8000;
          if ( v10 <= *(uint *)(v5 + 236) )
          {
            v10 = *(uint *)(v5 + 236);
            Function_20057a4(1553, 0);
            ++*v4;
          }
        }
        else
        {
          ErrorHandler();
        }
      }
      else
      {
        v10 += 0x8000;
        if ( v10 >= *(uint *)(v5 + 236) )
        {
          v10 = *(uint *)(v5 + 236);
          *(uchar *)(v5 + *(uchar *)(v5 + 232) + 16) = byte_224CB73[16 * *(uchar *)(v5 + 232)];
          Function_20057a4(1553, 0);
          ++*v4;
        }
      }
      Function_205ed0c(v2[15], v10);
      ((void (__fastcall *)(int, char *))dword_21E18A4[0])(v6, &v9);
      Function_224a434((uint *)v5, v10);
      goto LABEL_13;
    case 2u:
      Function_205ed48(v2[15], 1);
      Function_2005748(0x61Au);
      ++*v4;
      goto LABEL_13;
    case 3u:
      free((int)v3);
      result = 1;
      break;
    default:
LABEL_13:
      result = 0;
      break;
  }
  return result;
}

//----- (0224A620) --------------------------------------------------------
int __fastcall Function_224a620(int a1)
{
  int v1;
  uint *v2;
  int *v3;
  int v4;
  uint *v5;
  int v6;
  uint *v7;
  int v8;
  int result;
  int v10;
  int v11;
  int v12;

  v1 = a1;
  v2 = (uint *)LoadOverWorldDataAdress(a1);
  v3 = (int *)GetUnknownStruct01_c(v1);
  v4 = *(uint *)(v2[1] + 36);
  v5 = (uint *)Function_205eb3c(v2[15]);
  v6 = *v3;
  v7 = v5;
  if ( (uint)*v3 <= 4 )
    JUMPOUT(__CS__, *((short *)&off_224A654 + v6) + 35956310);
  switch ( (uchar)v6 )
  {
    case 0:
      if ( IsSpriteMovable(v5) == 1 )
      {
        Function_2065638(v7, 73);
        Function_2005748(0x611u);
        ++*v3;
      }
      goto LABEL_23;
    case 1:
      v10 = ((int (__fastcall *)(uint, uint))dword_21E18C4[0])(
              v2[41],
              *(uchar *)(v4 + *(uchar *)(v4 + 232) + 40));
      ((void (__fastcall *)(int *, int))dword_21E1894[0])(&v12, v10);
      Function_205eaec(v2[15], &v11);
      v12 = v11;
      v8 = *(uint *)(v4 + 240);
      if ( v8 == 4 )
      {
        if ( v11 < *(uint *)(v4 + 236) )
        {
          if ( IsSpriteMovable(v7) == 1 )
            Function_2065638(v7, 23);
        }
        else
        {
          v12 = *(uint *)(v4 + 236);
          Function_20057a4(1553, 0);
          ++*v3;
        }
      }
      else if ( v8 == 5 )
      {
        if ( v11 > *(uint *)(v4 + 236) )
        {
          if ( IsSpriteMovable(v7) == 1 )
            Function_2065638(v7, 22);
        }
        else
        {
          v12 = *(uint *)(v4 + 236);
          Function_20057a4(1553, 0);
          ++*v3;
        }
      }
      else
      {
        ErrorHandler();
      }
      ((void (__fastcall *)(int, int *))dword_21E18A4[0])(v10, &v12);
      goto LABEL_23;
    case 2:
      if ( IsSpriteMovable(v5) == 1 )
      {
        Function_2065638(v7, 74);
        ++*v3;
      }
      goto LABEL_20;
    case 3:
LABEL_20:
      if ( Function_2065684(v7) == 1 )
      {
        Function_20656ac(v7);
        Function_2005748(0x61Au);
        ++*v3;
      }
      goto LABEL_23;
    case 4:
      free((int)v3);
      result = 1;
      break;
    default:
LABEL_23:
      result = 0;
      break;
  }
  return result;
}

//----- (0224A770) --------------------------------------------------------
int __fastcall Function_224a770(int a1)
{
  int v1;
  uint *v2;
  uint *v3;
  int v4;
  uint *v5;
  uint *v6;
  int v7;
  uint *v8;
  int result;
  int v10;
  char v11;
  int v12;
  char v13;
  int v14;

  v1 = a1;
  v2 = (uint *)LoadOverWorldDataAdress(a1);
  v3 = (uint *)GetUnknownStruct01_c(v1);
  v4 = *(uint *)(v2[1] + 36);
  v5 = (uint *)Function_205eb3c(v2[15]);
  v6 = v5;
  switch ( (uchar)*v3 )
  {
    case 0u:
      if ( IsSpriteMovable(v5) == 1 )
      {
        Function_2065638(v6, 73);
        Function_2005748(0x611u);
        ++*v3;
      }
      goto LABEL_21;
    case 1u:
      v10 = ((int (__fastcall *)(uint, uint))dword_21E18C4[0])(
              v2[41],
              *(uchar *)(v4 + *(uchar *)(v4 + 232) + 40));
      ((void (__fastcall *)(char *, int))dword_21E1894[0])(&v13, v10);
      Function_205eaec(v2[15], &v11);
      v14 = v12;
      v7 = *(uint *)(v4 + 240);
      if ( v7 == 3 )
      {
        if ( v12 < *(uint *)(v4 + 236) )
        {
          if ( IsSpriteMovable(v6) == 1 )
            Function_2065638(v6, 21);
        }
        else
        {
          v14 = *(uint *)(v4 + 236);
          Function_20057a4(1553, 0);
          ++*v3;
        }
      }
      else if ( v7 == 2 )
      {
        if ( v12 > *(uint *)(v4 + 236) )
        {
          if ( IsSpriteMovable(v6) == 1 )
            Function_2065638(v6, 20);
        }
        else
        {
          v14 = *(uint *)(v4 + 236);
          Function_20057a4(1553, 0);
          ++*v3;
        }
      }
      else
      {
        ErrorHandler();
      }
      ((void (__fastcall *)(int, char *))dword_21E18A4[0])(v10, &v13);
      goto LABEL_21;
    case 2u:
      if ( IsSpriteMovable(v5) == 1 )
      {
        Function_2065638(v6, 74);
        ++*v3;
      }
      goto LABEL_21;
    case 3u:
      v8 = (uint *)Function_205eb3c(v2[15]);
      if ( Function_2065684(v8) == 1 )
      {
        Function_20656ac(v8);
        Function_2005748(0x61Au);
        ++*v3;
      }
      goto LABEL_21;
    case 4u:
      free((int)v3);
      result = 1;
      break;
    default:
LABEL_21:
      result = 0;
      break;
  }
  return result;
}

//----- (0224A8C8) --------------------------------------------------------
int __fastcall Function_224a8c8(int a1)
{
  uint *v1;
  int v2;
  uint *v3;
  int *v4;
  int v5;
  uchar *v6;
  char v7;
  char v8;
  int v9;
  char v10;
  int v11;
  int v12;
  char *v13;
  int v15;
  uint *v16;
  int *v17;
  uint *v18;
  char v19;
  char v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;

  v1 = (uint *)a1;
  v2 = GetOverWorldData_VariableAreaAdresses(a1);
  v3 = (uint *)Function_2027860(v2);
  v17 = Function_2027f6c(v3, 3);
  *(uint *)(v1[1] + 36) = malloc(4u, 244);
  v18 = *(uint **)(v1[1] + 36);
  *v18 = v1;
  v25 = 0x100000;
  v27 = 0x100000;
  v26 = 655360;
  v18[1] = ((int (__fastcall *)(uint, uint, int, int *, uint, uint))dword_21E19CC[0])(
             v1[41],
             v1[12],
             300,
             &v25,
             0,
             v1[20]);
  v26 = 1310720;
  v18[2] = ((int (__fastcall *)(uint, uint, int, int *, uint, uint))dword_21E19CC[0])(
             v1[41],
             v1[12],
             301,
             &v25,
             0,
             v1[20]);
  v26 = 1966080;
  v4 = &dword_224CB68;
  v18[3] = ((int (__fastcall *)(uint, uint, int, int *, uint, uint))dword_21E19CC[0])(
             v1[41],
             v1[12],
             302,
             &v25,
             0,
             v1[20]);
  v5 = 0;
  v6 = v18;
  v16 = v18;
  do
  {
    if ( Function_2249960(v5, *v17) )
    {
      v7 = *((uchar *)v4 + 7);
      v22 = *((uchar *)v4 + 7) << 16;
      v23 = *((uchar *)v4 + 8) << 16;
      v24 = *((uchar *)v4 + 9) << 16;
      v6[64] = v7;
      v6[65] = *((uchar *)v4 + 8);
      v6[66] = *((uchar *)v4 + 9);
      v8 = *((uchar *)v4 + 11);
    }
    else
    {
      v10 = *((uchar *)v4 + 4);
      v22 = *((uchar *)v4 + 4) << 16;
      v23 = *((uchar *)v4 + 5) << 16;
      v24 = *((uchar *)v4 + 6) << 16;
      v6[64] = v10;
      v6[65] = *((uchar *)v4 + 5);
      v6[66] = *((uchar *)v4 + 6);
      v8 = *((uchar *)v4 + 10);
    }
    v9 = (int)v18 + v5;
    *((uchar *)v18 + v5 + 16) = v8;
    v22 += 0x8000;
    v24 += 0x8000;
    ++v5;
    *(uchar *)(v9 + 40) = ((int (__fastcall *)(uint, uint, int, int *, uint, uint))dword_21E19CC[0])(
                            v1[41],
                            v1[12],
                            *v4,
                            &v22,
                            0,
                            v1[20]);
    v15 = v9 + 40;
    v16[34] = *v4;
    v4 += 4;
    v6 += 3;
    ++v16;
  }
  while ( v5 < 24 );
  Function_205eaec(v1[15], &v20);
  Function_224a434(v18, v21);
  Function_20206bc(409600, 6963200, v1[9]);
  ((void (__fastcall *)(uint, int, int, uint, int, int, int))dword_21D5258[361])(
    v1[18],
    -1,
    1,
    0,
    6,
    30368,
    v15);
  ((void (__fastcall *)(uint, int))dword_21D5258[375])(v1[18], -1);
  v11 = 0;
  v12 = 0;
  v13 = &v19;
  do
  {
    ++v11;
    *v13 = v12;
    v12 += 2;
    ++v13;
  }
  while ( v11 < 32 );
  return ((int (__fastcall *)(uint, char *, char *))dword_21D5258[385])(v1[18], &v19, v13);
}

//----- (0224AAA8) --------------------------------------------------------
int __fastcall Function_8_224aaa8(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int *v8;
  int v9;

  v1 = a1;
  v2 = GetOverWorldData_VariableAreaAdresses(a1);
  v3 = Function_2027860(v2);
  if ( Function_2027f80(v3) != 3 )
    return 0;
  v8 = *(int **)(*(uint *)(v1 + 4) + 36);
  if ( !v8 )
    return 0;
  v9 = Function_224a1e4((int)v8, v4, v5, v6);
  if ( v9 == 24 )
    return 0;
  Function_224a254(v8, v9);
  return 1;
}

//----- (0224AAE8) --------------------------------------------------------
int __fastcall Function_224aae8(int a1)
{
  int v1;
  int result;

  v1 = a1;
  free(*(uint *)(*(uint *)(a1 + 4) + 36));
  result = *(uint *)(v1 + 4);
  *(uint *)(result + 36) = 0;
  return result;
}

//----- (0224AAFC) --------------------------------------------------------
int __fastcall Function_8_224aafc(int a1, int a2, int a3, int a4, uint *a5)
{
  int v5;
  int v6;
  uint v7;
  int v8;
  int v9;

  v5 = a2;
  v6 = a3;
  v7 = (uchar)s32_div_f(a4 / 0x10000, 10);
  if ( v7 > 3 )
    ErrorHandler();
  v8 = (v7 << 10) + 35967029;
  v9 = v5 + 32 * v6;
  if ( v9 >= 1024 )
    ErrorHandler();
  *a5 = *(uchar *)(v8 + v9);
  return 1;
}

//----- (0224AB40) --------------------------------------------------------
int __fastcall Function_224ab40(int a1)
{
  switch ( a1 )
  {
    case 0:
      return 3;
    case 1:
      return 6;
    case 2:
      return 13;
  }
  ErrorHandler();
  return 0;
}

//----- (0224AB64) --------------------------------------------------------
uint __fastcall Function_224ab64(int a1, uint a2, uint *a3)
{
  int v3;
  uint v4;
  uint *v5;
  uint v6;
  int v7;
  short v8;
  uint result;

  v3 = a1;
  v4 = a2;
  v5 = 0;
  v6 = (uint)*(uchar *)(a1 + 7) << 28 >> 31;
  if ( v6 )
  {
    if ( v6 == 1 )
      v5 = a3;
    else
      ErrorHandler();
  }
  else
  {
    v5 = a3 + 1;
  }
  if ( (*(uchar *)(v3 + 7) & 3u) > 3 )
    ErrorHandler();
  v7 = (short)((*(uchar *)(v3 + 7) & 3) << 14);
  if ( v4 > 3 )
    ErrorHandler();
  v8 = (ushort)v4 << 14;
  if ( *(uchar *)(v3 + 7) & 4 )
  {
    if ( (uint)*(uchar *)(v3 + 7) << 29 >> 31 == 1 )
    {
      result = (v7 - (short)((ushort)v4 << 14)) << 16;
      v7 = (short)(v7 - v8);
    }
    else
    {
      result = ErrorHandler();
    }
  }
  else
  {
    result = (v7 + (short)((ushort)v4 << 14)) << 16;
    v7 = (short)(v7 + v8);
  }
  *v5 = v7;
  return result;
}

//----- (0224ABD4) --------------------------------------------------------
int __fastcall Function_224abd4(int a1)
{
  uint *v1;
  int v2;
  uint *v3;
  int result;
  int v5;
  int v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  uint *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;

  v1 = (uint *)a1;
  v2 = GetOverWorldData_VariableAreaAdresses(a1);
  v3 = (uint *)Function_2027860(v2);
  v11 = Function_2027f6c(v3, 5);
  *(uint *)(v1[1] + 36) = malloc(4u, 28);
  v12 = *(uint *)(v1[1] + 36);
  *(uchar *)(v12 + 17) = v11[1];
  *(uchar *)(v12 + 19) = *v11;
  result = Function_224ab40(v11[1] & 0xFF);
  v5 = 0;
  v10 = result;
  if ( result > 0 )
  {
    v6 = 0;
    do
    {
      v7 = &(**(&off_224C740 + v11[1]))[v6];
      v16 = *((uchar *)v7 + 4) << 16;
      v8 = *((uchar *)v7 + 5) << 16;
      v17 = *((uchar *)v7 + 5) << 16;
      v9 = *((uchar *)v7 + 6) << 16;
      v16 += 0x8000;
      v18 = v9 + 0x8000;
      if ( (uint)*((uchar *)v7 + 7) << 28 >> 31 == 1 )
        v17 = v8 + 0x8000;
      v13 = 0;
      v14 = 0;
      v15 = 0;
      Function_224ab64((int)v7, *v11 & 0xFF, &v13);
      v6 += 2;
      *(uchar *)(v12 + v5 + 4) = ((int (__fastcall *)(uint, uint, int, int *, int *, uint))dword_21E19CC[0])(
                                   v1[41],
                                   v1[12],
                                   *v7,
                                   &v16,
                                   &v13,
                                   v1[20]);
      result = v10;
      ++v5;
    }
    while ( v5 < v10 );
  }
  return result;
}

//----- (0224ACAC) --------------------------------------------------------
int __fastcall Function_224acac(int a1)
{
  int v1;
  int result;

  v1 = a1;
  free(*(uint *)(*(uint *)(a1 + 4) + 36));
  result = *(uint *)(v1 + 4);
  *(uint *)(result + 36) = 0;
  return result;
}

//----- (0224ACC0) --------------------------------------------------------
int __fastcall Function_8_224acc0(int a1, int a2, int a3, int a4, uint *a5)
{
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
  uchar *v15;
  int v16;
  int result;

  v5 = a2;
  v6 = a3;
  v7 = *(uint *)(*(uint *)(a1 + 4) + 36);
  v8 = *(uchar *)(v7 + 17);
  v9 = dword_224E740[5 * v8];
  v10 = 0;
  v11 = (int)*(&off_224E744 + 5 * v8 + *(uchar *)(v7 + 19));
  v12 = (int)*(&off_224C74C + v8);
  if ( v9 <= 0 )
    return 0;
  while ( 1 )
  {
    v13 = 4 * *(uchar *)(v11 + v10);
    v14 = *(uchar *)(v12 + v13);
    v15 = (uchar *)(v12 + v13);
    if ( v14 <= v5 && v5 < v14 + v15[2] )
    {
      v16 = v15[1];
      if ( v16 <= v6 && v6 < v16 + v15[3] )
        break;
    }
    if ( ++v10 >= v9 )
      return 0;
  }
  result = 1;
  *a5 = 1;
  return result;
}

//----- (0224AD34) --------------------------------------------------------
uint *__fastcall Function_8_224ad34(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint *v5;
  uint *v6;
  int v7;
  uint *v8;
  int v9;
  int v10;
  int v12;

  v2 = a1;
  v3 = a2;
  v4 = GetOverWorldData_VariableAreaAdresses(a1);
  v5 = (uint *)Function_2027860(v4);
  v6 = Function_2027f6c(v5, 5);
  v7 = *(uint *)(*(uint *)(v2 + 4) + 36);
  v8 = (uint *)malloc2(0xBu, 4);
  *v8 = 0;
  *(ushort *)(v7 + 20) = v3;
  *(ushort *)(v7 + 22) = 0;
  v12 = (int)v8;
  *(uchar *)(v7 + 18) = Function_224ab40(v6[1] & 0xFF);
  v9 = (char)*v6;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      *(ushort *)(v7 + 24) = 0x4000;
      v10 = (char)(v9 - 1);
      if ( (v10 & 0x80u) != 0 )
        v10 = 3;
    }
    else
    {
      if ( v3 != 2 )
        return (uint *)ErrorHandler();
      *(ushort *)(v7 + 24) = -32768;
      v10 = (char)((v9 + 2 < 0) + __ROR4__(((v9 + 2) << 30) - ((uint)(v9 + 2) >> 31), 30));
    }
  }
  else
  {
    *(ushort *)(v7 + 24) = 0x4000;
    v10 = (char)((v9 + 1 < 0) + __ROR4__(((v9 + 1) << 30) - ((uint)(v9 + 1) >> 31), 30));
  }
  *v6 = v10;
  *(uchar *)(v7 + 19) = v10;
  Function_2005748(0x63Fu);
  return Function_2050944(*(uint *)(v2 + 16), (int)Function_224ade8, v12);
}

//----- (0224ADE8) --------------------------------------------------------
int __fastcall Function_224ade8(int a1)
{
  int *v1;
  int v2;
  uint *v3;
  int v4;
  int v5;
  int v6;
  uint v7;
  int v8;
  int v9;
  int *v10;
  int v11;
  uint v12;
  int v14;
  uint *v15;
  int v16;

  v2 = a1;
  v16 = LoadOverWorldDataAdress(a1);
  v3 = (uint *)GetUnknownStruct01_c(v2);
  v15 = v3;
  v4 = *(uint *)(*(uint *)(v16 + 4) + 36);
  if ( *v3 )
  {
    if ( *v3 == 1 )
    {
      free((int)v3);
      return 1;
    }
  }
  else
  {
    v5 = *(ushort *)(v4 + 24);
    v14 = 1024;
    v6 = *(ushort *)(v4 + 22) + 1024;
    if ( v6 > v5 )
      v14 = (v6 - v5) & 0xFFFF;
    *(ushort *)(v4 + 22) += v14;
    if ( *(ushort *)(v4 + 20) == 1 )
      v14 = 0xFFFF * v14 & 0xFFFF;
    v7 = 0;
    if ( *(uchar *)(v4 + 18) )
    {
      do
      {
        v8 = ((int (__fastcall *)(uint, uint))dword_21E18C4[0])(
               *(uint *)(v16 + 164),
               *(uchar *)(v4 + v7 + 4));
        v9 = ((int (__fastcall *)(int))dword_21E15A8[186])(v8);
        v10 = &(**(&off_224C740 + *(uchar *)(v4 + 17)))[2 * v7];
        if ( (uint)*((uchar *)v10 + 7) << 29 >> 31 == 1 )
          v11 = 0xFFFF * v14 & 0xFFFF;
        else
          v11 = v14;
        v12 = (uint)*((uchar *)v10 + 7) << 28 >> 31;
        if ( v12 )
        {
          if ( v12 == 1 )
            v1 = (int *)v9;
          else
            ErrorHandler();
        }
        else
        {
          v1 = (int *)(v9 + 4);
        }
        *v1 = ((*v1 & 0xFFFF) + v11) & 0xFFFF;
        v7 = (v7 + 1) & 0xFF;
      }
      while ( v7 < *(uchar *)(v4 + 18) );
    }
    if ( *(ushort *)(v4 + 22) >= (uint)*(ushort *)(v4 + 24) )
      ++*v15;
  }
  return 0;
}

//----- (0224AEDC) --------------------------------------------------------
int __fastcall Function_224aedc(int a1, short a2)
{
  short v2;
  int v3;

  v2 = a2;
  v3 = LoadFlagAdress(*(uint *)(a1 + 12));
  return Function_206b46c(v3, v2);
}

//----- (0224AEF0) --------------------------------------------------------
int __fastcall Function_224aef0(int a1)
{
  int v1;

  v1 = LoadFlagAdress(*(uint *)(a1 + 12));
  return Function_206b47c(v1);
}

//----- (0224AF00) --------------------------------------------------------
uint __fastcall Function_224af00(uint *a1, int a2)
{
  uint *v2;
  int v3;
  uint result;
  uint v5;

  v2 = a1;
  v3 = a1[1] + a2;
  for ( a1[1] = v3; v3 >= 245760; v3 = a1[1] )
  {
    a1[1] -= 245760;
    *a1 += 4096;
  }
  if ( v3 < 0 )
  {
    do
    {
      a1[1] += 245760;
      *a1 += 4096;
    }
    while ( (a1[1] & 0x80000000) != 0 );
  }
  result = s32_div_f(*a1, 49152);
  *v2 = v5;
  return result;
}

//----- (0224AF58) --------------------------------------------------------
uint *__fastcall Function_224af58(uint *a1)
{
  uint *v1;
  uint *result;

  v1 = a1;
  result = (uint *)((int (__fastcall *)(uint))dword_21E15A8[186])(a1[5]);
  *result = *v1;
  result[1] = ((uint)(0x10000 - v1[1]) >> 31)
            + __ROR4__(((0x10000 - v1[1]) << 16) - ((uint)(0x10000 - v1[1]) >> 31), 16);
  result[2] = v1[2];
  return result;
}

//----- (0224AF84) --------------------------------------------------------
uint *__fastcall Function_224af84(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  uint *v4;
  int v5;
  int v6;

  v1 = a1;
  v2 = a1[1];
  v3 = v2 / 4096;
  v4 = a1 + 9;
  s32_div_f(v2 / 4096, 15);
  if ( v5 )
    v6 = 1093 * v3;
  else
    v6 = *((ushort *)dword_224C7B8 + s32_div_f(v2 / 4096, 5));
  v4[1] = v6;
  v4[1] = ((uint)(v4[1] - 0x4000) >> 31)
        + __ROR4__(((v4[1] - 0x4000) << 16) - ((uint)(v4[1] - 0x4000) >> 31), 16);
  Function_224af58(v4);
  v1[4] = *((ushort *)dword_224C7B8 + *v1 / 4096);
  if ( v1[2] == 1 )
    v1[4] += 91 * v3;
  v1[4] = ((uint)(v1[4] + 0x8000) >> 31)
        + __ROR4__(((v1[4] + 0x8000) << 16) - ((uint)(v1[4] + 0x8000) >> 31), 16);
  return Function_224af58(v1 + 3);
}

//----- (0224B020) --------------------------------------------------------
int __fastcall Function_224b020(int a1)
{
  uint *v1;
  int v2;
  uint *v3;
  int v4;
  int *v5;
  int v6;
  int v7;
  int result;
  int *v9;
  int *v10;
  uint *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;

  v1 = (uint *)a1;
  v2 = GetOverWorldData_VariableAreaAdresses(a1);
  v3 = (uint *)Function_2027860(v2);
  v11 = Function_2027f6c(v3, 8);
  v10 = (int *)malloc(4u, 64);
  Call_FillMemWithValue(v10, 0, 0x40u);
  *(uint *)(v1[1] + 36) = v10;
  v10[15] = (int)v1;
  v4 = 0;
  v9 = dword_224C7A0;
  v15 = 0;
  v16 = 0;
  v5 = &dword_224C700;
  v6 = (int)(v10 + 3);
  v17 = 0;
  do
  {
    *(uint *)(v6 + 12) = *v5;
    *(ushort *)(v6 + 16) = ((int (__fastcall *)(uint, uint, int, int *, int *, uint))dword_21E19CC[0])(
                            v1[41],
                            v1[12],
                            *v5,
                            v9,
                            &v15,
                            v1[20]);
    *(uint *)(v6 + 20) = ((int (__fastcall *)(uint, int))dword_21E18CC[0])(v1[41], *v5);
    ++v4;
    v6 += 24;
    ++v5;
    v9 += 3;
  }
  while ( v4 < 2 );
  v12 = 2;
  v13 = 2;
  v14 = 0;
  v7 = Function_224aef0((int)v1);
  *v11 = v7;
  *v10 = SLOWORD(dword_224C774[v7]) << 12;
  v10[1] = SHIWORD(dword_224C774[v7]) << 12;
  Function_224af84(v10);
  result = (int)v11;
  if ( *v11 < 3u )
    result = ((int (__fastcall *)(uint *, uint))dword_21F4098[0])(v1, *(&v12 + *v11));
  return result;
}

//----- (0224B0FC) --------------------------------------------------------
int __fastcall Function_224b0fc(int a1)
{
  int v1;
  int result;

  v1 = a1;
  free(*(uint *)(*(uint *)(a1 + 4) + 36));
  result = *(uint *)(v1 + 4);
  *(uint *)(result + 36) = 0;
  return result;
}

//----- (0224B110) --------------------------------------------------------
int __fastcall Function_8_224b110(int a1, int a2, int a3, int a4, uint *a5)
{
  int v5;
  int v6;
  int v7;
  uint *v8;
  int v9;
  int result;

  v5 = a2;
  v6 = a3;
  v7 = GetOverWorldData_VariableAreaAdresses(a1);
  v8 = (uint *)Function_2027860(v7);
  v9 = *Function_2027f6c(v8, 8);
  result = 0;
  *a5 = 0;
  if ( v6 >= 7 && v6 <= 19 && v5 >= 5 && v5 <= 17 )
  {
    result = *((uchar *)&dword_224CCE8[-1] + 169 * v9 + 13 * (v6 - 7) + v5 - 1);
    *a5 = result;
  }
  if ( !result && v6 >= 19 && v6 <= 19 && v5 >= 1 && v5 <= 21 )
  {
    result = *((uchar *)dword_224CA5C + 21 * v9 + 21 * (v6 - 19) + v5 - 1);
    *a5 = result;
  }
  return result;
}

//----- (0224B18C) --------------------------------------------------------
int __fastcall Function_224b18c(int a1, uint *a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  short v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uint *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  uint *v22;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = GetSpritePositionX(*(uint *)(a1 + 60));
  v9 = GetSpritePositionY(*(uint *)(v4 + 60));
  v10 = v9;
  v5[4] = v8;
  v5[5] = v9;
  v5[2] = v6;
  v5[3] = v7;
  if ( v5[2] - v5[4] >= 0 )
    v11 = 3;
  else
    v11 = 2;
  v5[6] = v11;
  v5[7] = v5[3] - v5[5] >= 0;
  v12 = v5[2];
  v13 = v5[4];
  v14 = v12 - v13;
  if ( v12 - v13 < 0 )
    v14 = v13 - v12;
  v15 = v5[3] - v5[5];
  if ( v15 < 0 )
    v15 = v5[5] - v5[3];
  if ( v14 < v15 )
    v5[1] = 1;
  v16 = InitSpriteStruct(*(uint *)(v4 + 56), v8, v10, 0, 0x2000, 0, **(uint **)(v4 + 28));
  v5[8] = v16;
  Function_20642f8(v16, v17, v18, v19);
  Function_2062d64((uint *)v5[8], 1);
  Function_2062d80((uint *)v5[8], 0);
  SetUnsetSpriteFlags800000((uint *)v5[8], 1);
  v20 = GetSpriteAdr70(v5[8]);
  v21 = *(uint *)(v4 + 40);
  v22 = (uint *)v20;
  ((void (*)(void))dword_21E931C[0])();
  return Function_2020690(v22, *(uint **)(v4 + 36));
}

//----- (0224B240) --------------------------------------------------------
uint *__fastcall Function_224b240(uint *result, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  result[4] = result[2];
  result[5] = result[3];
  result[2] = a2;
  result[3] = a3;
  if ( result[2] - result[4] >= 0 )
    v3 = 3;
  else
    v3 = 2;
  result[6] = v3;
  result[7] = result[3] - result[5] >= 0;
  v4 = result[2];
  v5 = result[4];
  v6 = v4 - v5;
  if ( v4 - v5 < 0 )
    v6 = v5 - v4;
  v7 = result[3] - result[5];
  if ( v7 < 0 )
    v7 = result[5] - result[3];
  if ( v6 < v7 )
    result[1] = 1;
  return result;
}

//----- (0224B28C) --------------------------------------------------------
int __fastcall Function_224b28c(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  a1[1] ^= 1u;
  a1[2] = a1[4];
  a1[3] = a1[5];
  a1[6] = GetOppositeFaceDirection(a1[6]);
  result = GetOppositeFaceDirection(v1[7]);
  v1[7] = result;
  return result;
}

//----- (0224B2B4) --------------------------------------------------------
uint *__fastcall Function_224b2b4(uint *result, int a2, int a3, int a4, int a5, int a6)
{
  result[1] = a2;
  result[2] = a3;
  result[3] = a4;
  result[6] = a5;
  result[7] = a6;
  return result;
}

//----- (0224B2C4) --------------------------------------------------------
int *__fastcall Function_224b2c4(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  uint *v6;

  v2 = a1;
  v3 = a2;
  v4 = Function_205eafc(*(uint *)(a1 + 60));
  v5 = *(uint *)(v2 + 40);
  v6 = (uint *)v4;
  ((void (*)(void))dword_21E931C[0])();
  Function_2020690(v6, *(uint **)(v2 + 36));
  return Function_2061af4(*(uint *)(v3 + 32));
}

//----- (0224B2E8) --------------------------------------------------------
int __fastcall Function_224b2e8(uint *a1)
{
  uint *v1;
  uint *v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  v2 = (uint *)a1[8];
  if ( IsSpriteMovable((uint *)a1[8]) == 1 )
  {
    v3 = 154;
    v4 = LoadSpritePositionX((int)v2);
    v5 = LoadSpritePositionY((int)v2);
    v6 = v1[2];
    if ( v4 == v6 && v5 == v1[3] )
      return 1;
    if ( v1[1] )
    {
      if ( v4 == v6 )
      {
        if ( v5 != v1[3] )
          v3 = Function_2065838(v1[7], 12);
      }
      else
      {
        v3 = Function_2065838(v1[6], 12);
      }
    }
    else if ( v5 == v1[3] )
    {
      if ( v4 != v6 )
        v3 = Function_2065838(v1[6], 12);
    }
    else
    {
      v3 = Function_2065838(v1[7], 12);
    }
    if ( v3 != 154 )
      Function_2065638(v2, v3);
  }
  return 0;
}

//----- (0224B370) --------------------------------------------------------
int __fastcall Function_224b370(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v9;

  v3 = a1;
  v9 = 1;
  v4 = a2;
  v5 = a3;
  v6 = a1[1];
  if ( *a1 != a2 || v6 != a3 )
  {
    Function_224af00(a1, 0x2000);
    v7 = v3[1];
    if ( *v3 == v4 )
    {
      if ( v6 <= v7 )
      {
        if ( v6 < v5 && v7 > v5 )
          v7 = v5;
      }
      else if ( v6 < v5 + 245760 && v7 + 245760 > v5 + 245760 )
      {
        v7 = v5;
      }
    }
    *v3 = *v3;
    v3[1] = v7;
  }
  if ( *v3 != v4 || v3[1] != v5 )
    v9 = 0;
  return v9;
}

//----- (0224B3D4) --------------------------------------------------------
int __fastcall Function_224b3d4(int a1)
{
  int v1;
  int v2;
  int v3;
  uint *v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  int v10;
  int v11;
  int v12;
  int v13;
  ushort *v14;
  ushort *v15;
  int v16;
  int v17;

  v1 = a1;
  v2 = LoadOverWorldDataAdress(a1);
  v3 = GetUnknownStruct01_c(v1);
  v4 = *(uint **)(v3 + 20);
  v5 = *(uint **)(v3 + 24);
  switch ( (uchar)*(uint *)v3 )
  {
    case 0u:
      Function_224b18c(v2, (uint *)(v3 + 28), 11, 13);
      ++*(uint *)v3;
      goto LABEL_3;
    case 1u:
LABEL_3:
      if ( Function_224b2e8((uint *)(v3 + 28)) == 1 )
        ++*(uint *)v3;
      return 0;
    case 2u:
      v6 = *(uint *)(v3 + 4) + 1;
      *(uint *)(v3 + 4) = v6;
      if ( v6 < 8 )
        return 0;
      *(uint *)(v3 + 4) = 0;
      Function_2005748(0x54Bu);
      ++*(uint *)v3;
      goto LABEL_7;
    case 3u:
LABEL_7:
      if ( *v4 == 4 && *v5 == *(uint *)(v3 + 8) && (int)v5[1] > *(uint *)(v3 + 12) )
        *v5 = 45056;
      v7 = Function_224b370(v5, *(uint *)(v3 + 8), *(uint *)(v3 + 12));
      if ( *v4 == 4 )
        *v5 = SLOWORD(dword_224C774[4]) << 12;
      if ( *v5 == *(uint *)(v3 + 8) )
      {
        if ( (int)v5[1] <= *(uint *)(v3 + 12) || *v4 == 4 )
          v5[2] = 0;
      }
      else
      {
        v5[2] = 1;
      }
      Function_224af84(v5);
      if ( v7 == 1 )
      {
        Function_20057a4(1355, 0);
        Function_2005748(0x5E3u);
        ++*(uint *)v3;
      }
      return 0;
    case 4u:
      v8 = *(uint *)(v3 + 4) + 1;
      *(uint *)(v3 + 4) = v8;
      if ( v8 >= 8 )
      {
        *(uint *)(v3 + 4) = 0;
        if ( (uint)(*v4 - 2) > 1 )
        {
          Function_224b28c((uint *)(v3 + 28));
          ++*(uint *)v3;
        }
        else
        {
          Function_224b2b4((uint *)(v3 + 28), 0, 11, 19, 2, 1);
          *(uint *)v3 = 7;
        }
      }
      return 0;
    case 5u:
      if ( Function_224b2e8((uint *)(v3 + 28)) == 1 )
        ++*(uint *)v3;
      return 0;
    case 6u:
      Function_224b2c4(v2, v3 + 28);
      free(v3);
      return 1;
    case 7u:
      if ( Function_224b2e8((uint *)(v3 + 28)) != 1 )
        return 0;
      v10 = 20;
      v11 = 3;
      if ( *v4 == 3 )
      {
        v10 = 2;
        v11 = 2;
      }
      Function_224b2b4((uint *)(v3 + 28), 1, v10, 19, v11, 1);
      ++*(uint *)v3;
      goto LABEL_32;
    case 8u:
LABEL_32:
      if ( Function_224b2e8((uint *)(v3 + 28)) == 1 )
        ++*(uint *)v3;
      return 0;
    case 9u:
      v12 = *(uint *)(v3 + 4) + 1;
      *(uint *)(v3 + 4) = v12;
      if ( v12 >= 4 )
      {
        *(uint *)(v3 + 4) = 0;
        if ( *v4 == 2 )
        {
          ((void (__fastcall *)(int, int))dword_21F416C[0])(v2, 1);
        }
        else if ( *v4 == 3 )
        {
          ((void (__fastcall *)(int))dword_21F416C[0])(v2);
        }
        Function_2005748(0x639u);
        ++*(uint *)v3;
      }
      return 0;
    case 0xAu:
      v13 = *(uint *)(v3 + 4) + 1;
      *(uint *)(v3 + 4) = v13;
      if ( v13 >= 60 )
      {
        *(uint *)(v3 + 4) = 0;
        ++*(uint *)v3;
        Function_20057a4(1593, 0);
        Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v3 + 72), 0xCu, *(ushort **)(v3 + 76));
        Function_205d8f4(*(uint **)(v2 + 8), *(uint *)(v3 + 68), 3);
        Function_200e084(*(uint *)(v3 + 68), 0);
        v14 = (ushort *)LoadPlayerDataAdress(*(uint *)(v2 + 12));
        Function_205d944(*(uint *)(v3 + 68), v14);
        v15 = (ushort *)LoadPlayerDataAdress(*(uint *)(v2 + 12));
        *(uint *)(v3 + 64) = Function_205d994(*(uint *)(v3 + 68), *(uint *)(v3 + 76), v15, 1);
      }
      return 0;
    case 0xBu:
      if ( Function_205da04(*(uint *)(v3 + 64) & 0xFF) != 1 )
        return 0;
      ++*(uint *)v3;
      goto LABEL_44;
    case 0xCu:
LABEL_44:
      if ( dword_21BF6C4 & 3 )
      {
        v16 = GetSpritePositionX(*(uint *)(v2 + 60));
        v17 = GetSpritePositionY(*(uint *)(v2 + 60));
        Function_224b240((uint *)(v3 + 28), v16, v17);
        Function_200e084(*(uint *)(v3 + 68), 0);
        Function_201a8fc(*(uint *)(v3 + 68));
        *(uint *)(v3 + 4) = 0;
        *(uint *)v3 = 5;
      }
      break;
    default:
      return 0;
  }
  return 0;
}

//----- (0224B67C) --------------------------------------------------------
int __fastcall Function_8_224b67c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint *v6;
  int *v7;
  int *v8;
  uint v9;
  int v11;
  int *v12;
  int v13;
  int *v14;
  int v15;
  int v16;
  int v17;

  v4 = a1;
  v15 = a2;
  v16 = a3;
  v17 = a4;
  v5 = GetOverWorldData_VariableAreaAdresses(a1);
  v6 = (uint *)Function_2027860(v5);
  v7 = Function_2027f6c(v6, 8);
  v8 = v7;
  v9 = *v7;
  if ( v9 >= 4 )
    return 0;
  *v8 = v9 + 1;
  Function_224aedc(v4, v9 + 1);
  v11 = *(uint *)(*(uint *)(v4 + 4) + 36);
  v12 = &dword_224C774[*v8];
  v13 = *v8;
  v14 = (int *)malloc(0xBu, 80);
  Call_FillMemWithValue(v14, 0, 0x50u);
  v14[17] = v15;
  v14[18] = v16;
  v14[19] = v17;
  v14[2] = SLOWORD(dword_224C774[v13]) << 12;
  v14[3] = *((short *)v12 + 1) << 12;
  v14[4] = v4;
  v14[5] = (int)v8;
  v14[6] = v11;
  Function_2050944(*(uint *)(v4 + 16), (int)Function_224b3d4, (int)v14);
  return 1;
}

//----- (0224B714) --------------------------------------------------------
BOOL __fastcall Function_224b714(int a1, int a2, int a3, uint a4)
{
  int v4;
  int v5;
  uint v6;
  int v7;
  uint *v8;
  int *v9;
  int v10;
  BOOL result;

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = GetOverWorldData_VariableAreaAdresses(a1);
  v8 = (uint *)Function_2027860(v7);
  v9 = &dword_224C7F0[2 * *Function_2027f6c(v8, 8)];
  result = 0;
  if ( *(short *)v9 == v4 && *((short *)v9 + 1) == v5 )
  {
    if ( (v10 = v9[1]) == 0 && (v6 == 2 || v6 == 3) || v10 == 1 && v6 <= 1 )
      result = 1;
  }
  return result;
}

//----- (0224B764) --------------------------------------------------------
int __fastcall Function_224b764(int a1)
{
  int v1;
  int v2;
  uint *v3;
  uint *v4;
  int *v5;
  int result;

  v1 = a1;
  v2 = GetOverWorldData_VariableAreaAdresses(a1);
  v3 = (uint *)Function_2027860(v2);
  v4 = Function_2027f6c(v3, 4);
  v5 = (int *)malloc(4u, 484);
  Call_FillMemWithValue(v5, 0, 0x1E4u);
  *(uint *)(*(uint *)(v1 + 4) + 36) = v5;
  *v5 = v1;
  ((void (__fastcall *)(uint, int))dword_21DEEC8[376])(*(uint *)(v1 + 64), 31);
  ((void (__fastcall *)(uint, int, int))dword_21F416C[91])(*(uint *)(v1 + 64), 11, 9);
  if ( *v4 == 1 )
    Function_224b958(v5);
  else
    Function_224b8d0(v5);
  result = 1;
  *v4 = 1;
  return result;
}

//----- (0224B7C0) --------------------------------------------------------
int __fastcall Function_224b7c0(int a1)
{
  int v1;
  int result;

  v1 = a1;
  free(*(uint *)(*(uint *)(a1 + 4) + 36));
  result = *(uint *)(v1 + 4);
  *(uint *)(result + 36) = 0;
  return result;
}

//----- (0224B7D4) --------------------------------------------------------
int Function_8_224b7d4()
{
  return 0;
}

//----- (0224B7D8) --------------------------------------------------------
uint *__fastcall Function_224b7d8(int a1, short a2, short a3, int a4)
{
  int v4;
  uint *v5;

  v4 = a4;
  v5 = InitSpriteStruct(*(uint *)(a1 + 56), a2, a3, 0, 0x2000, 0, **(uint **)(a1 + 28));
  SetSpriteID((int)v5, 253);
  Function_20629b4(v5, v4, 0);
  return v5;
}

//----- (0224B80C) --------------------------------------------------------
int __fastcall Function_224b80c(int *a1, int a2, int a3)
{
  int *v3;
  uint *v4;
  int v5;
  int result;

  v3 = a1;
  v4 = (uint *)a2;
  a1[2] = a2;
  v5 = a3;
  *a1 = LoadSpritePositionX(a2);
  v3[1] = LoadSpritePositionY((int)v4);
  if ( Function_20629d8(v4, 0) )
    result = ((int (__fastcall *)(int, int, int, uint))dword_21F416C[319])(v5, *v3, v3[1], 0);
  else
    result = ((int (__fastcall *)(int, int, int, uint))dword_21F416C[194])(v5, *v3, v3[1], 0);
  v3[3] = result;
  return result;
}

//----- (0224B854) --------------------------------------------------------
int __fastcall Function_224b854(int a1, int a2, int a3)
{
  int v3;
  int result;

  v3 = 0;
  result = a1 + 268;
  while ( *(uint *)(result + 8) != a2 || *(uint *)(result + 12) != a3 )
  {
    ++v3;
    result += 24;
    if ( v3 >= 9 )
      return 0;
  }
  return result;
}

//----- (0224B878) --------------------------------------------------------
uint *__fastcall Function_224b878(int a1, int a2, int a3)
{
  int v3;
  uint *result;

  v3 = 0;
  result = (uint *)(a1 + 4);
  while ( !*result || result[2] != a2 || result[3] != a3 )
  {
    ++v3;
    result += 6;
    if ( v3 >= 11 )
      return 0;
  }
  return result;
}

//----- (0224B8A0) --------------------------------------------------------
int __fastcall Function_224b8a0(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  if ( !*(uint *)(v1 + 20) )
    ErrorHandler();
  if ( !*(uint *)(v1 + 16) )
    ErrorHandler();
  Function_207136c(*(int **)(v1 + 20));
  Function_2061af4(*(uint *)(v1 + 16));
  result = 0;
  *(uint *)v1 = 0;
  return result;
}

//----- (0224B8D0) --------------------------------------------------------
int __fastcall Function_224b8d0(int *a1)
{
  int *v1;
  uint *v2;
  int v3;
  int *v4;
  uint *v5;
  int *v6;
  int v7;
  uint *v8;
  int result;
  int v10;

  v1 = a1 + 67;
  v2 = a1 + 1;
  v3 = *a1;
  Call_FillMemWithValue(a1 + 1, 0, 0x108u);
  Call_FillMemWithValue(v1, 0, 0xD8u);
  v4 = &dword_224C99C;
  v10 = 0;
  do
  {
    v5 = Function_224b7d8(v3, *v4, v4[1] - 2, 0);
    Function_224b80c(v2 + 2, (int)v5, v3);
    *v2 = 1;
    v4 += 2;
    v2 += 6;
    ++v10;
  }
  while ( v10 < 11 );
  v6 = &dword_224C90C;
  v7 = 0;
  do
  {
    v8 = Function_224b7d8(v3, *v6, v6[1] - 2, 1);
    Function_224b80c(v1 + 2, (int)v8, v3);
    result = 1;
    *v1 = 1;
    ++v7;
    v6 += 2;
    v1 += 6;
  }
  while ( v7 < 9 );
  return result;
}

//----- (0224B958) --------------------------------------------------------
int __fastcall Function_224b958(int *a1)
{
  int v1;
  int v2;
  uint *v3;
  uint *v4;
  int result;
  int v6;
  uint *v7;
  int v8;

  v1 = 0;
  v8 = 0;
  v2 = *a1;
  v3 = a1 + 1;
  v6 = *(uint *)(*a1 + 56);
  v4 = a1 + 67;
  for ( result = Function_20625b0(*(uint *)(*a1 + 56), &v7, &v8, 1);
        result == 1;
        result = Function_20625b0(v6, &v7, &v8, 1) )
  {
    if ( GetSpriteID((int)v7) == 253 )
    {
      if ( Function_20629d8(v7, 0) )
      {
        Function_224b80c(v4 + 2, (int)v7, v2);
        *v4 = 1;
        v4 += 6;
      }
      else
      {
        Function_224b80c(v3 + 2, (int)v7, v2);
        *v3 = 1;
        v3 += 6;
      }
      if ( ++v1 > 20 )
        ErrorHandler();
    }
  }
  return result;
}

//----- (0224B9D8) --------------------------------------------------------
int __fastcall Function_224b9d8(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( a1 < 0 )
    ErrorHandler();
  if ( v2 >= 32 )
    ErrorHandler();
  if ( v3 < 0 )
    ErrorHandler();
  if ( v3 >= 32 )
    ErrorHandler();
  return *((uchar *)&dword_224E33C[8 * v3] + v2);
}

//----- (0224BA0C) --------------------------------------------------------
int __fastcall Function_224ba0c(int a1, int a2, int a3, uint a4)
{
  int v4;
  int v5;
  uint v6;
  int v7;
  int v8;
  int v10;
  int v11;

  v4 = a2;
  v5 = a3;
  v10 = a1;
  v6 = a4;
  v7 = 0;
  switch ( (uchar)Function_224b9d8(a2, a3) )
  {
    case 2u:
      if ( v6 <= 1 )
        v7 = 1;
      break;
    case 3u:
      if ( v6 - 2 <= 1 )
        v7 = 1;
      break;
    case 4u:
      v7 = 4;
      break;
    case 5u:
      if ( v6 == 2 )
        v7 = 1;
      break;
    default:
      break;
  }
  v11 = GetWalkPositionXChange(v6);
  v8 = GetWalkPositionYChange(v6);
  if ( Function_224b9d8(v4 + v11, v5 + v8) == 1 )
    v7 |= 1u;
  if ( Function_224b878(v10, v4 + v11, v5 + v8) )
    v7 |= 2u;
  return v7;
}

//----- (0224BAA0) --------------------------------------------------------
int __fastcall Function_224baa0(int a1, int a2, int a3, uint a4, uint *a5)
{
  int v5;
  uint v6;
  int result;
  int v8;
  int v9;

  v8 = a1;
  v5 = a2;
  v9 = a3;
  v6 = a4;
  *a5 = 0;
  result = Function_224ba0c(a1, a2, a3, a4);
  if ( !result || result == 4 )
  {
    do
    {
      v5 += GetWalkPositionXChange(v6);
      v9 += GetWalkPositionYChange(v6);
      ++*a5;
      result = Function_224ba0c(v8, v5, v9, v6);
    }
    while ( !result );
  }
  return result;
}

//----- (0224BAF4) --------------------------------------------------------
int __fastcall Function_224baf4(int a1)
{
  int v1;
  int v2;
  uint *v3;
  uint *v4;
  uint *v5;
  int v6;

  v1 = a1;
  v2 = LoadOverWorldDataAdress(a1);
  v3 = (uint *)GetUnknownStruct01_c(v1);
  v4 = (uint *)Function_205eb3c(*(uint *)(v2 + 60));
  v5 = v4;
  if ( *v3 )
  {
    if ( *v3 == 1
      && Function_2065684(v4) == 1
      && ((int (__fastcall *)(uint))dword_21F416C[365])(*(uint *)(v3[13] + 20)) == 1 )
    {
      Function_20656ac(v5);
      free((int)v3);
      return 1;
    }
  }
  else if ( IsSpriteMovable(v4) == 1 )
  {
    v6 = Function_2065838(v3[2], 40);
    Function_2065638(v5, v6);
    ((void (__fastcall *)(uint, uint, uint))dword_21F416C[331])(*(uint *)(v3[13] + 20), v3[2], 0);
    Function_2005748(0x557u);
    ++*v3;
  }
  return 0;
}

//----- (0224BB78) --------------------------------------------------------
BOOL __fastcall Function_224bb78(int a1)
{
  uint *v1;
  int v2;

  v1 = (uint *)GetUnknownStruct01_c(a1);
  do
    v2 = ((int (__fastcall *)(uint *))*(&off_224C818 + *v1))(v1);
  while ( v2 == 1 );
  return v2 == 2;
}

//----- (0224BBA0) --------------------------------------------------------
int __fastcall Function_224bba0(uint *a1)
{
  uint *v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = a1[13];
  v3 = v2 + 8;
  Function_224baa0(a1[15], *(uint *)(v2 + 8), *(uint *)(v2 + 12), a1[2], a1 + 7);
  Function_20715e4(*(uint **)(v3 + 12), v1 + 8);
  v1[11] = 68;
  *v1 = 1;
  return 0;
}

//----- (0224BBD0) --------------------------------------------------------
int __fastcall Function_224bbd0(int a1)
{
  int v1;
  uint *v2;
  int v4;
  int v5;

  v1 = a1;
  v2 = (uint *)Function_205eb3c(*(uint *)(**(uint **)(a1 + 60) + 60));
  if ( !IsSpriteMovable(v2) )
    return 0;
  v4 = Function_2065838(*(uint *)(v1 + 8), 28);
  Function_2065638(v2, v4);
  v5 = *(uint *)(v1 + 52);
  ((void (__fastcall *)(uint, uint, int))dword_21F416C[331])(*(uint *)(v5 + 20), *(uint *)(v1 + 8), 1);
  if ( Function_224c0c8(v1, v5 + 8, *(uint *)(v1 + 8)) == 1 )
  {
    *(uint *)(v1 + 24) = 1;
    Function_224bfcc(**(uint **)(v1 + 60), v1, v5 + 8, *(uint *)(v1 + 8));
    Function_224c0fc(v1, 0);
  }
  Function_2005748(0x557u);
  *(uint *)v1 = 2;
  return 1;
}

//----- (0224BC48) --------------------------------------------------------
int __fastcall Function_224bc48(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  uint v4;

  v1 = a1;
  Function_2064418(a1[2], a1 + 8, a1[11]);
  Function_20715d4(*(uint **)(v1[13] + 20), v1 + 8);
  v2 = v1[11] + 68;
  v1[11] = v2;
  v1[12] += v2;
  v3 = v1[1] + 1;
  v1[1] = v3;
  if ( v3 >= 30 )
  {
    v4 = s32_div_f(0xD000u, 16 * v1[7] / 2);
    ((void (__fastcall *)(uint, uint))dword_21F416C[362])(*(uint *)(v1[13] + 20), v4);
    *v1 = 3;
    Function_2005748(0x54Cu);
  }
  return 0;
}

//----- (0224BCA8) --------------------------------------------------------
int __fastcall Function_224bca8(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  char v9;
  int v10;
  int v11;
  uint *v12;

  v1 = a1;
  v2 = a1[13];
  Function_2064418(a1[2], a1 + 8, a1[11]);
  Function_20715d4(*(uint **)(v2 + 20), v1 + 8);
  v1[12] += v1[11];
  v3 = v1[1] + 1;
  v1[1] = v3;
  if ( v3 >= 36 )
  {
    if ( v3 == 36 && v1[11] <= 0x2000 )
      v1[11] = 0x2000;
  }
  else
  {
    v4 = v1[11];
    if ( v4 < 4096 )
      v1[11] = 2 * v4;
  }
  Function_224c170(v1, v1[11]);
  v5 = (v1[12] >> 4) / 4096;
  if ( v5 > v1[5] )
  {
    v1[5] = v5;
    *(uint *)(v2 + 8) += GetWalkPositionXChange(v1[2]);
    v6 = GetWalkPositionYChange(v1[2]);
    v7 = *(uint *)(v2 + 12);
    *(uint *)(v2 + 12) = v7 + v6;
    v8 = Function_224ba0c(v1[15], *(uint *)(v2 + 8), v7 + v6, v1[2]);
    v9 = v8;
    if ( v8 )
    {
      Function_2064450(*(uint *)(v2 + 8), *(uint *)(v2 + 12), v1 + 8);
      SaveSpritePositionX(*(uint *)(v2 + 16), *(uint *)(v2 + 8));
      SaveSpritePositionY(*(uint *)(v2 + 16), *(uint *)(v2 + 12));
      CopySpritePositionsFromOldToNew(*(uint *)(v2 + 16));
      ((void (__fastcall *)(uint, int))dword_21F416C[362])(*(uint *)(v2 + 20), 4096);
      Function_20057a4(1356, 0);
      Function_2005748(0x557u);
      Function_2005748(0x54Du);
      if ( v9 & 2 )
      {
        v10 = GetWalkPositionXChange(v1[2]);
        v11 = GetWalkPositionYChange(v1[2]);
        v12 = Function_224b878(v1[15], *(uint *)(v2 + 8) + v10, *(uint *)(v2 + 12) + v11);
        v1[14] = v12;
        if ( !v12 )
          ErrorHandler();
        v1[1] = 0;
        *v1 = 4;
      }
      else if ( v1[6] == 1 )
      {
        *v1 = 6;
      }
      else
      {
        *v1 = 8;
      }
    }
  }
  return 0;
}

//----- (0224BDD0) --------------------------------------------------------
int __fastcall Function_224bdd0(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  Function_224c170(a1, a1[11]);
  v2 = v1[1] + 1;
  v1[1] = v2;
  if ( v2 >= 4 )
  {
    v1[1] = 0;
    *v1 = 5;
    ((void (__fastcall *)(uint))dword_21F416C[206])(*(uint *)(v1[14] + 20));
    Function_2005748(0x62Au);
  }
  return 0;
}

//----- (0224BE04) --------------------------------------------------------
int __fastcall Function_224be04(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_224c170(a1, a1[11]);
  if ( ((int (__fastcall *)(uint))dword_21F416C[244])(*(uint *)(v1[14] + 20)) )
  {
    Function_224b8a0(v1[14]);
    v1[1] = 0;
    if ( v1[6] == 1 )
      *v1 = 6;
    else
      *v1 = 8;
  }
  return 0;
}

//----- (0224BE38) --------------------------------------------------------
int __fastcall Function_224be38(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_224c170(a1, a1[11]);
  if ( Function_224c0c4(v1) == 1 && ((int (__fastcall *)(uint))dword_21F416C[365])(*(uint *)(v1[13] + 20)) == 1 )
  {
    Function_224c0fc(v1, 1);
    *v1 = 7;
  }
  return 0;
}

//----- (0224BE68) --------------------------------------------------------
int __fastcall Function_224be68(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_224c11c();
  if ( Function_224c0c4(v1) == 1 )
  {
    Function_224c098(v1);
    *v1 = 9;
  }
  return 0;
}

//----- (0224BE8C) --------------------------------------------------------
int __fastcall Function_224be8c(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( ((int (__fastcall *)(uint))dword_21F416C[365])(*(uint *)(a1[13] + 20)) == 1 )
    *v1 = 9;
  return 0;
}

//----- (0224BEA4) --------------------------------------------------------
int __fastcall Function_224bea4(int a1)
{
  uint *v1;
  uint *v2;

  v1 = (uint *)a1;
  v2 = (uint *)Function_205eb3c(*(uint *)(**(uint **)(a1 + 60) + 60));
  if ( Function_2065684(v2) == 1 )
  {
    Function_20656ac(v2);
    *v1 = 10;
  }
  return 0;
}

//----- (0224BECC) --------------------------------------------------------
int __fastcall Function_224becc(int a1)
{
  free(a1);
  return 2;
}

//----- (0224BED8) --------------------------------------------------------
int *__fastcall Function_224bed8(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int *v6;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = (int *)malloc2(0xBu, 120);
  if ( !v6 )
    ErrorHandler();
  Call_FillMemWithValue(v6, 0, 0x78u);
  v6[2] = v5;
  v6[3] = *(uint *)(v4 + 8);
  v6[4] = *(uint *)(v4 + 12);
  v6[13] = v4;
  v6[15] = v3;
  return v6;
}

//----- (0224BF0C) --------------------------------------------------------
uint *__fastcall Function_224bf0c(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;

  v4 = a1;
  v5 = Function_224bed8(a2, a3, a4);
  return OverWorldData_InitUnknownStruct01(v4, (int)Function_224baf4, (int)v5);
}

//----- (0224BF2C) --------------------------------------------------------
uint *__fastcall Function_224bf2c(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;

  v4 = a1;
  v5 = Function_224bed8(a2, a3, a4);
  return OverWorldData_InitUnknownStruct01(v4, (int)Function_224bb78, (int)v5);
}

//----- (0224BF4C) --------------------------------------------------------
int __fastcall Function_8_224bf4c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v14 = a4;
  v4 = a1;
  v5 = GetOverWorldData_VariableAreaAdresses(a1);
  v6 = Function_2027860(v5);
  if ( Function_2027f80(v6) != 4 )
    return 0;
  v8 = GetSpriteFaceDirection(*(uint *)(v4 + 60));
  v9 = *(uint *)(*(uint *)(v4 + 4) + 36);
  CalcNewSpritePositionXY(*(uint *)(v4 + 60), v8, &v13, &v12);
  v10 = Function_224b854(v9, v13, v12);
  if ( !v10 )
    return 0;
  Function_224baa0(v9, v13, v12, v8, &v11);
  if ( v11 )
    Function_224bf2c(v4, v9, v10, v8);
  else
    Function_224bf0c(v4, v9, v10, v8);
  return 1;
}

//----- (0224BFCC) --------------------------------------------------------
int __fastcall Function_224bfcc(int a1, int a2, int *a3, uint a4)
{
  uint *v4;
  int v5;
  int v6;
  int *v7;
  uint v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  uint *v19;
  int v21;

  v4 = (uint *)(a2 + 64);
  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  Call_FillMemWithValue((int *)(a2 + 64), 0, 0x38u);
  v4[13] = v5;
  v9 = *v7;
  v10 = v7[1];
  v4[2] = *v7;
  v21 = v10;
  v4[3] = v10;
  v4[8] = v8;
  Function_224baa0(*(uint *)(v6 + 60), v9, v10, v8, v4 + 9);
  if ( !v4[9] )
    ErrorHandler();
  v4[6] = v9 + GetWalkPositionXChange(v8) * v4[9];
  v4[7] = v21 + v4[9] * GetWalkPositionYChange(v8);
  v11 = GetSpritePositionX(*(uint *)(v5 + 60));
  v12 = GetSpritePositionY(*(uint *)(v5 + 60));
  v4[4] = v11;
  v4[5] = v12;
  v13 = InitSpriteStruct(*(uint *)(v5 + 56), v11, v12, 0, 0x2000, 0, **(uint **)(v5 + 28));
  v4[12] = v13;
  Function_20642f8(v13, v14, v15, v16);
  Function_2062d64((uint *)v4[12], 1);
  Function_2062d80((uint *)v4[12], 0);
  SetUnsetSpriteFlags800000((uint *)v4[12], 1);
  v17 = GetSpriteAdr70(v4[12]);
  v18 = *(uint *)(v5 + 40);
  v19 = (uint *)v17;
  ((void (*)(void))dword_21E931C[0])();
  return Function_2020690(v19, *(uint **)(v5 + 36));
}

//----- (0224C098) --------------------------------------------------------
int *__fastcall Function_224c098(int a1)
{
  int v1;
  uint *v2;
  int v3;

  v1 = a1 + 64;
  v2 = (uint *)Function_205eafc(*(uint *)(*(uint *)(a1 + 116) + 60));
  v3 = *(uint *)(*(uint *)(v1 + 52) + 40);
  ((void (*)(void))dword_21E931C[0])();
  Function_2020690(v2, *(uint **)(*(uint *)(v1 + 52) + 36));
  return Function_2061af4(*(uint *)(v1 + 48));
}

//----- (0224C0C4) --------------------------------------------------------
int __fastcall Function_224c0c4(int a1)
{
  return *(uint *)(a1 + 108);
}

//----- (0224C0C8) --------------------------------------------------------
BOOL __fastcall Function_224c0c8(int a1, int *a2, uint a3)
{
  uint v3;
  int v5;

  v3 = a3;
  Function_224baa0(*(uint *)(a1 + 60), *a2, a2[1], a3, &v5);
  return v5 > dword_224C764[v3];
}

//----- (0224C0FC) --------------------------------------------------------
int __fastcall Function_224c0fc(int result, int a2)
{
  uint *v2;

  v2 = (uint *)(result + 64);
  v2[10] = 0;
  *(uint *)(result + 64) = 1;
  v2[11] = 0;
  if ( a2 == 1 )
  {
    result = GetOppositeFaceDirection(*(uint *)(result + 96));
    v2[8] = result;
  }
  return result;
}

//----- (0224C11C) --------------------------------------------------------
int __fastcall Function_224c11c(int a1, int a2)
{
  int v2;
  int result;
  int v4;
  int v5;
  int v6;

  v2 = a1;
  result = *(uint *)(a1 + 64);
  v4 = a2;
  v5 = v2 + 64;
  if ( result )
  {
    if ( result == 1 )
    {
      result = IsSpriteMovable(*(uint **)(v5 + 48));
      if ( result == 1 )
      {
        if ( *(uint *)(v5 + 40) < *(uint *)(v5 + 36) )
        {
          v6 = Function_2065838(*(uint *)(v5 + 32), v4);
          Function_2065638(*(uint **)(v5 + 48), v6);
          result = *(uint *)(v5 + 40) + 1;
          *(uint *)(v5 + 40) = result;
        }
        else
        {
          result = *(uint *)v5 + 1;
          *(uint *)v5 = result;
        }
      }
    }
    else if ( result == 2 )
    {
      *(uint *)(v5 + 44) = 1;
      result = 0;
      *(uint *)v5 = 0;
    }
  }
  return result;
}

//----- (0224C170) --------------------------------------------------------
int __fastcall Function_224c170(int result, int a2)
{
  int v2;
  int v3;

  if ( *(uint *)(result + 24) == 1 )
  {
    v2 = a2 / 4096;
    if ( a2 / 4096 )
    {
      v3 = 8;
      if ( v2 > 2 )
      {
        if ( v2 > 2 )
          v3 = 16;
      }
      else
      {
        v3 = 12;
      }
      result = Function_224c11c(result, v3);
    }
  }
  return result;
}

//----- (0224C198) --------------------------------------------------------
uint *__fastcall Function_224c198(int a1)
{
  int v1;
  int v2;
  uint *v3;
  ushort *v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  short v9;
  int v10;
  short v11;
  int v12;
  short v13;
  int v14;
  int v15;
  int i;
  ushort v17;
  uint *result;
  int v19;
  int v20;
  int *v21;

  v1 = a1;
  v2 = GetOverWorldData_VariableAreaAdresses(a1);
  v3 = (uint *)Function_2027860(v2);
  v4 = Function_2027f6c(v3, 2);
  v21 = (int *)malloc(4u, 504);
  Call_FillMemWithValue(v21, 0, 0x1F8u);
  *v21 = v1;
  *(uint *)(*(uint *)(v1 + 4) + 36) = v21;
  Function_224c3b4();
  ((void (__fastcall *)(uint, int))dword_21DEEC8[376])(*(uint *)(v1 + 64), 32);
  Function_2062ccc(*(uint **)(v1 + 56), 0);
  v5 = 210;
  v6 = Function_205eb3c(*(uint *)(v1 + 60));
  if ( Function_205eb98(*(uint *)(v1 + 60)) == 1 )
    v5 = 211;
  Function_2061ad4(v6, v5);
  ((void (__fastcall *)(int, int))dword_21F5634[284])(v1, 1);
  Function_224c444(v21);
  v20 = 0;
  v7 = &dword_224C8D4;
  do
  {
    if ( *v7 == **(uint **)(v1 + 28) )
      break;
    v7 += 7;
    ++v20;
  }
  while ( v20 < 2 );
  if ( !*v4 )
  {
    *v4 = 1;
    v4[1] = 8;
    if ( v20 != 2 )
    {
      v19 = (int)*(&off_224C6F8 + v20);
      v8 = Function_201d35c();
      u32_div_f(v8, v7[2]);
      v4[1] = v9 + v7[1];
      do
      {
        do
        {
          v10 = Function_201d35c();
          u32_div_f(v10, v7[5]);
          v4[2] = v11;
          v12 = Function_201d35c();
          u32_div_f(v12, v7[6]);
          v4[3] = v13;
        }
        while ( *(uchar *)(v7[5] * (short)v4[3] + v19 + (short)v4[2]) == 1 );
        v4[2] += v7[3];
        v4[3] += v7[4];
      }
      while ( Function_206326c(*(uint *)(v1 + 56), (short)v4[2], (short)v4[3], 0) );
      if ( (short)v4[1] >= v7[1] + v7[2] )
        ErrorHandler();
      if ( (short)v4[2] >= v7[3] + v7[5] )
        ErrorHandler();
      if ( (short)v4[3] >= v7[4] + v7[6] )
        ErrorHandler();
      if ( Function_2054f68(v1, (short)v4[2], (short)v4[3], v14) )
        ErrorHandler();
    }
  }
  if ( v4[1] != 8 )
  {
    v15 = off_224C708[v20];
    for ( i = *(uint *)v15; *(uint *)v15 != 8; i = *(uint *)v15 )
    {
      if ( i != (short)v4[1] )
      {
        v17 = Function_203a468(v1, *(short *)(v15 + 4), *(short *)(v15 + 6));
        Function_203a574(v1, v17, 88);
        Function_203a584(v1, v17, 1);
      }
      v15 += 8;
    }
    ((void (__fastcall *)(uint, uint, uint, uint))dword_21F416C[736])(
      *(uint *)(v1 + 64),
      (short)v4[2],
      (short)v4[3],
      (short)v4[1]);
  }
  result = AddTaskToTaskList1((int)Function_224c3b0, (int)v21, 0);
  v21[125] = (int)result;
  return result;
}

//----- (0224C388) --------------------------------------------------------
int __fastcall Function_224c388(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = *(uint *)(*(uint *)(a1 + 4) + 36);
  Call_RemoveTaskFromTaskList(*(int **)(v2 + 500));
  Function_224c4f8(v2);
  free(v2);
  result = *(uint *)(v1 + 4);
  *(uint *)(result + 36) = 0;
  return result;
}

//----- (0224C3B0) --------------------------------------------------------
void Function_224c3b0()
{
  ;
}

//----- (0224C3B4) --------------------------------------------------------
int __fastcall Function_224c3b4(int a1)
{
  int v1;
  int v2;
  uchar v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  v2 = a1 + 452;
  v3 = 109;
  v4 = *(uint *)(*(uint *)a1 + 72);
  *(uint *)v2 = v4;
  *(uint *)(v2 + 4) = 10;
  *(uchar *)(v2 + 8) = 1;
  *(uchar *)(v2 + 9) = 1;
  *(uchar *)(v2 + 10) = 1;
  *(uchar *)(v2 + 11) = 1;
  v5 = LoadTrainerDataAdress(*(uint *)(*(uint *)a1 + 12));
  if ( CheckBadge(v5, 4) == 1 )
  {
    v3 = 91;
  }
  else if ( **(uint **)(*(uint *)v1 + 28) == 90 )
  {
    v3 = 119;
  }
  Call_FillMemWithValue((int *)(v2 + 12), v3, 0x20u);
  v6 = *(uint *)(v2 + 4);
  ((void (__fastcall *)(int, int, int))dword_21D5258[361])(v4, -1, 1);
  ((void (__fastcall *)(int, int, int, uint))dword_21D5258[375])(
    v4,
    -1,
    (*(uchar *)(v2 + 8) | 32 * *(uchar *)(v2 + 9) | (*(uchar *)(v2 + 10) << 10)) & 0xFFFF,
    *(uchar *)(v2 + 11));
  return ((int (__fastcall *)(int, int))dword_21D5258[385])(v4, v2 + 12);
}

//----- (0224C444) --------------------------------------------------------
int __fastcall Function_224c444(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  uint *v6;
  int result;
  int v8;
  uint *v9;
  int v10;
  int v11;
  uint *v12;
  int v13;
  int v14;

  v14 = a4;
  v4 = a1;
  v5 = 0;
  v6 = a1 + 1;
  v10 = *(uint *)(*a1 + 56);
  v13 = 0;
  v11 = GetSpriteListc(v10);
  for ( result = Function_20625b0(v10, &v12, &v13, 1); result; result = Function_20625b0(v10, &v12, &v13, 1) )
  {
    v8 = GetSpriteID((int)v12);
    v6[2] = Function_20629d8(v12, 0);
    if ( v8 == 255 || GetSpriteTrainer((int)v12) == 1 && v6[2] )
    {
      *v6 = 1;
      v6[1] = LoadSpriteFaceDirection((int)v12);
      v6[5] = v12;
      v6[6] = v4;
      if ( v8 == 255 )
        v6[2] = 2;
      v6[4] = ((int (__fastcall *)(uint, uint *, uint, int))dword_21F416C[437])(
                *(uint *)(*v4 + 64),
                v12,
                v6[2],
                3);
      v9 = AddTaskToTaskList1((int)Function_224c518_Dummy, (int)v6, v11 + 2);
      v6[3] = v9;
      if ( !v9 )
        ErrorHandler();
      if ( ++v5 >= 16 )
        ErrorHandler();
      v6 += 7;
    }
  }
  return result;
}

//----- (0224C4F8) --------------------------------------------------------
int __fastcall Function_224c4f8(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = 0;
  v2 = a1 + 4;
  do
  {
    result = *(uint *)v2;
    if ( *(uint *)v2 )
    {
      result = Call_RemoveTaskFromTaskList(*(int **)(v2 + 12));
      *(uint *)v2 = 0;
    }
    ++v1;
    v2 += 28;
  }
  while ( v1 < 16 );
  return result;
}

//----- (0224C518) --------------------------------------------------------
void Function_224c518_Dummy()
{
  ;
}

//----- (0224C51C) --------------------------------------------------------
int __fastcall Function_8_224c51c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
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

  v19 = a4;
  v4 = a1;
  v5 = GetOverWorldData_VariableAreaAdresses(a1);
  v6 = Function_2027860(v5);
  if ( Function_2027f80(v6) != 2 )
    return 0;
  v18 = 0;
  v17 = 0;
  v8 = *(uint *)(v4 + 56);
  v15 = *(uint *)(v4 + 60);
  v9 = Function_205eb3c(*(uint *)(v4 + 60));
  v10 = v9;
  v11 = LoadSpriteFaceDirection(v9);
  v12 = GetOppositeFaceDirection(v11);
  if ( !Function_20625b0(v8, &v17, &v18, 1) )
    return 0;
  while ( 1 )
  {
    if ( v17 != v10 && Function_2067f88(v4, v17) == 1 )
    {
      v16 = Function_2067d58(v17, v15, v12, 2);
      if ( v16 != -1 )
        break;
    }
    if ( !Function_20625b0(v8, &v17, &v18, 1) )
      return 0;
  }
  v13 = GetSpriteScript(v17);
  Function_203e880(v4, 0xF58u, v17);
  v14 = NormalizeSpriteScriptNr((ushort)v13);
  Function_203e8b0(v4, v17, v16, v12, v13, v14, 0, 0);
  return 1;
}

//----- (0224C5DC) --------------------------------------------------------
int __fastcall Function_8_224c5dc(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v6;
  int v7;

  v2 = a2;
  v3 = GetOverWorldData_VariableAreaAdresses(a1);
  v4 = Function_2027860(v3);
  if ( Function_2027f80(v4) != 2 )
    return 0;
  v6 = LoadSpritePositionX(v2);
  Function_2062ff4(v2, v6);
  v7 = LoadSpritePositionY(v2);
  Function_2063004(v2, v7);
  SetSpriteMovementWidth(v2, 2);
  SetSpriteMovementLength(v2, 2);
  SetSpriteFollowHero(v2, 3);
  return 1;
}

//----- (0224C62C) --------------------------------------------------------
int __fastcall Function_8_224c62c(int a1, int a2, int a3, uint *a4)
{
  int v4;
  int v5;
  int result;
  int v7;
  uint *v8;
  uint *v9;
  int *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  uint *v15;

  v4 = a2;
  v5 = a3;
  v14 = a1;
  v15 = a4;
  if ( *a4 )
    return 0;
  v7 = GetOverWorldData_VariableAreaAdresses(a1);
  v8 = (uint *)Function_2027860(v7);
  if ( Function_2027f80((int)v8) != 2 )
    return 0;
  v9 = Function_2027f6c(v8, 2);
  if ( *((ushort *)v9 + 1) == 8 )
    return 0;
  v10 = &dword_224C8D4;
  v11 = 0;
  do
  {
    if ( *v10 == **(uint **)(v14 + 28) )
      break;
    ++v11;
    v10 += 7;
  }
  while ( v11 < 2 );
  if ( v11 == 2 )
    ErrorHandler();
  v12 = off_224C708[v11];
  v13 = *(uint *)v12;
  if ( *(uint *)v12 == 8 )
  {
LABEL_18:
    result = 1;
    *v15 = 1;
  }
  else
  {
    while ( *(short *)(v12 + 4) != v4
         || *(short *)(v12 + 6) != v5
         || v13 != *((short *)v9 + 1) )
    {
      v12 += 8;
      v13 = *(uint *)v12;
      if ( *(uint *)v12 == 8 )
        goto LABEL_18;
    }
    result = 0;
  }
  return result;
}

