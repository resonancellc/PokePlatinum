//----- (022561D4) --------------------------------------------------------
int __fastcall Function_22561d4(int *a1)
{
  int *v1;
  int v2;

  v1 = a1;
  v2 = malloc(8u, 144);
  if ( v2 )
  {
    if ( Function_2256310() && AddTaskToTaskList1((int)Function_2256408, v2, 1u) )
    {
      *v1 = v2;
      return 1;
    }
    free(v2);
  }
  return 0;
}

//----- (0225621C) --------------------------------------------------------
int __fastcall Function_225621c(int result)
{
  int v1;
  int v2;
  uchar *v3;

  v1 = 0;
  v2 = result;
  do
  {
    *(uint *)(v2 + 92) = 1;
    v3 = (uchar *)(result + v1++ + 76);
    v2 += 4;
    *v3 = 0;
  }
  while ( v1 < 3 );
  *(uint *)(result + 68) = 1;
  return result;
}

//----- (0225623C) --------------------------------------------------------
int __fastcall Function_225623c(int result, int a2, int a3)
{
  *(uint *)(result + 4 * a2 + 92) = a3;
  *(uchar *)(result + a2 + 76) = a3 == 0;
  *(uint *)(result + 68) = 1;
  return result;
}

//----- (02256258) --------------------------------------------------------
int __fastcall Function_2256258(int result, int a2, char a3)
{
  if ( *(uint *)(result + 4 * a2 + 92) )
  {
    *(uchar *)(result + a2 + 76) = a3;
    *(uint *)(result + 68) = 1;
  }
  return result;
}

//----- (02256270) --------------------------------------------------------
int *__fastcall Function_2256270(int a1, int *a2)
{
  int v2;
  int *v3;

  v2 = a1;
  v3 = a2;
  a2[4] = Function_225710c(*(uint *)(a1 + 8));
  return Function_2099d54(*(uint *)(v2 + 4), v3, 0x48u);
}

//----- (0225628C) --------------------------------------------------------
int __fastcall Function_225628c(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  if ( !Function_2099d7c(a1[1], a1 + 18, 0x48u) )
    return Function_22562d4(v1);
  result = v1[35];
  if ( result == 2 )
  {
    Function_2256a88(v1);
    result = Function_2256a78(v1);
    if ( result )
    {
      v1[35] = 4;
      v1[20] = 0;
      result = 2;
      v1[21] = 2;
    }
  }
  return result;
}

//----- (022562D4) --------------------------------------------------------
int __fastcall Function_22562d4(int a1)
{
  int v1;

  v1 = a1;
  *(uint *)(a1 + 140) = 1;
  *(uchar *)(a1 + 72) = 0;
  *(uchar *)(a1 + 73) = 0;
  *(uchar *)(a1 + 74) = 0;
  *(uchar *)(a1 + 75) = 0;
  *(uint *)(a1 + 80) = 1;
  *(uint *)(a1 + 84) = 0;
  *(uint *)(a1 + 88) = 0;
  Function_225621c(a1);
  return Function_225623c(v1, 1, 0);
}

//----- (02256310) --------------------------------------------------------
int __fastcall Function_2256310(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  a1[1] = a4;
  Function_225628c(a1);
  if ( !Function_2256bcc(v4 + 2, v4 + 18, v6) )
    return 0;
  *(uchar *)v4 = 0;
  *((uchar *)v4 + 1) = 0;
  *((uchar *)v4 + 3) = 0;
  v4[4] = ((int (__fastcall *)(int *, int, int (*)(), uint *, int))dword_225423C[1572])(
            dword_2257130,
            11,
            Function_22563d8,
            v4,
            8);
  v4[6] = 0;
  ((void (__fastcall *)(uint, int, int))dword_225423C[1672])(v4[4], 3, 4);
  ((void (__fastcall *)(uint, int, int))dword_225423C[1672])(v4[4], 5, 4);
  ((void (__fastcall *)(uint))dword_225423C[1672])(v4[4]);
  ((void (__fastcall *)(uint, int, int))dword_225423C[1672])(v4[4], 6, 4);
  ((void (__fastcall *)(uint, int, int))dword_225423C[1672])(v4[4], 7, 4);
  ((void (__fastcall *)(uint, int, int))dword_225423C[1672])(v4[4], 9, 4);
  ((void (__fastcall *)(uint, int, int))dword_225423C[1672])(v4[4], 8, 4);
  ((void (__fastcall *)(uint, int, int))dword_225423C[1672])(v4[4], 10, 4);
  v4[3] = v5;
  return 1;
}

//----- (022563B8) --------------------------------------------------------
uint __fastcall Function_22563b8(int a1)
{
  int v1;

  v1 = a1;
  Function_2256270(a1, (int *)(a1 + 72));
  ((void (__fastcall *)(uint))dword_225423C[1598])(*(uint *)(v1 + 16));
  Function_2256c0c(*(uint *)(v1 + 8));
  return free(v1);
}

//----- (022563D8) --------------------------------------------------------
uint __fastcall Function_22563d8(uint result, int a2, int a3, int a4)
{
  int v4;

  v4 = result;
  *(uint *)(a4 + 20) = result;
  *(uint *)(a4 + 24) = a2;
  if ( result < 3 )
  {
    if ( a2 == 1 )
    {
      result = Function_2256258(a4, result, 1);
    }
    else
    {
      result = a2 - 2;
      if ( (uint)(a2 - 2) <= 1 )
        result = Function_2256258(a4, v4, 0);
    }
  }
  return result;
}

//----- (02256408) --------------------------------------------------------
uint __fastcall Function_2256408(int *a1, uchar *a2)
{
  uint *v2;
  int *v3;
  uint result;

  v2 = a2;
  v3 = a1;
  result = *a2;
  if ( result < 7 )
  {
    ((void (__fastcall *)(uint, uint))dword_225423C[183])(*((uint *)a2 + 3), *((uint *)a2 + 4));
    if ( v2[17] )
    {
      Function_2256d24(v2[2], 4);
      v2[17] = 0;
    }
    result = ((int (__fastcall *)(uint *))*(&off_2257114 + *(uchar *)v2))(v2);
    if ( result )
    {
      Function_22563b8((int)v2);
      Call_RemoveTaskFromTaskList(v3);
      result = ((int (__fastcall *)(uint))dword_225423C[9])(v2[3]);
    }
  }
  return result;
}

//----- (02256458) --------------------------------------------------------
int __fastcall Function_2256458(int result)
{
  *(uchar *)(result + 3) = 1;
  return result;
}

//----- (02256460) --------------------------------------------------------
uchar *__fastcall Function_2256460(uchar *result, int a2)
{
  int v2;

  v2 = *result;
  if ( result[3] )
    a2 = 6;
  *result = a2;
  if ( a2 && a2 != 6 )
    *((uint *)result + 35) = v2;
  switch ( (uchar)a2 )
  {
    case 1:
      *((uint *)result + 20) = 1;
      *((uint *)result + 21) = 0;
      break;
    case 2:
      *((uint *)result + 20) = 0;
      *((uint *)result + 21) = 1;
      break;
    case 3:
      *((uint *)result + 20) = 0;
      *((uint *)result + 21) = 1;
      break;
    case 4:
      *((uint *)result + 20) = 0;
      *((uint *)result + 21) = 2;
      break;
    case 5:
      *((uint *)result + 20) = 0;
      *((uint *)result + 21) = 3;
      break;
    case 6:
      *((uint *)result + 35) = v2;
      break;
    default:
      break;
  }
  result[1] = 0;
  return result;
}

//----- (022564D8) --------------------------------------------------------
int __fastcall Function_22564d8(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_2256d48(*(uint *)(v1 + 8), 0) )
    {
      ((void (__fastcall *)(uint))dword_225423C[4])(*(uint *)(v1 + 12));
      Function_2256460((uchar *)v1, *(uint *)(v1 + 140));
    }
  }
  else
  {
    Function_2256d24(*(uint *)(v1 + 8), 0);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (02256518) --------------------------------------------------------
int __fastcall Function_2256518(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;
  long long v5;
  uchar *v6;

  v1 = a1;
  if ( *(uchar *)(a1 + 3) )
  {
    Function_2256460((uchar *)a1, 6);
    result = 0;
  }
  else if ( Function_2256d54(*(uint *)(a1 + 8)) )
  {
    v3 = *(uint *)(v1 + 24);
    if ( v3 != 1 || *(uint *)(v1 + 20) > 2u )
    {
      if ( v3 == 1 || v3 == 7 )
      {
        v6 = (uchar *)(v1 + 72);
        switch ( (uchar)*(uint *)(v1 + 20) )
        {
          case 3u:
            if ( (char)++*v6 > 9 )
              *v6 = 0;
            break;
          case 4u:
            if ( (char)++*(uchar *)(v1 + 73) > 9 )
              *(uchar *)(v1 + 73) = 0;
            break;
          case 5u:
            if ( (char)--*v6 < 0 )
              *v6 = 9;
            break;
          case 6u:
            if ( (char)--*(uchar *)(v1 + 73) < 0 )
              *(uchar *)(v1 + 73) = 9;
            break;
          case 7u:
            if ( (char)++*(uchar *)(v1 + 74) > 5 )
              *(uchar *)(v1 + 74) = 0;
            break;
          case 8u:
            if ( (char)++*(uchar *)(v1 + 75) > 9 )
              *(uchar *)(v1 + 75) = 0;
            break;
          case 9u:
            if ( (char)--*(uchar *)(v1 + 74) < 0 )
              *(uchar *)(v1 + 74) = 5;
            break;
          case 0xAu:
            if ( (char)--*(uchar *)(v1 + 75) < 0 )
              *(uchar *)(v1 + 75) = 9;
            break;
          default:
            break;
        }
        Function_2256d24(*(uint *)(v1 + 8), 5);
        *(uint *)(v1 + 24) = 0;
      }
      result = 0;
    }
    else
    {
      *(uint *)(v1 + 24) = 0;
      v4 = *(uint *)(v1 + 20);
      if ( v4 )
      {
        if ( v4 == 1 )
        {
          ((void (__fastcall *)(int))dword_225423C[122])(1646);
        }
        else if ( v4 == 2 )
        {
          Function_2256af0(v1);
          Function_2256d24(*(uint *)(v1 + 8), 5);
          ((void (__fastcall *)(int))dword_225423C[122])(1635);
        }
      }
      else
      {
        ((void (__fastcall *)(int))dword_225423C[122])(1635);
        LODWORD(v5) = Function_22569cc(v1);
        if ( v5 )
        {
          Function_225623c(v1, 0, 0);
          Function_225623c(v1, 1, 1);
          Function_2256d24(*(uint *)(v1 + 8), 3);
          Function_2256460((uchar *)v1, 2);
        }
      }
      result = 0;
    }
  }
  else
  {
    result = 0;
  }
  return result;
}

//----- (022566A0) --------------------------------------------------------
int __fastcall Function_22566a0(uchar *a1)
{
  int v1;
  int result;
  int v3;

  v1 = (int)a1;
  if ( a1[3] )
  {
    Function_2256460(a1, 6);
    result = 0;
  }
  else if ( Function_2256a88(a1) && (Function_2256d24(*(uint *)(v1 + 8), 5), Function_2256a78(v1)) )
  {
    Function_225623c(v1, 0, 0);
    Function_2256d24(*(uint *)(v1 + 8), 6);
    Function_2256460((uchar *)v1, 4);
    result = 0;
  }
  else
  {
    if ( *(uint *)(v1 + 24) == 1 )
    {
      *(uint *)(v1 + 24) = 0;
      v3 = *(uint *)(v1 + 20);
      if ( v3 )
      {
        if ( v3 == 1 )
        {
          ((void (__fastcall *)(int))dword_225423C[122])(1635);
          Function_225623c(v1, 1, 0);
          Function_225623c(v1, 0, 1);
          Function_2256a3c(v1);
          Function_2256d24(*(uint *)(v1 + 8), 4);
          Function_2256460((uchar *)v1, 3);
        }
        else if ( v3 == 2 )
        {
          ((void (__fastcall *)(int))dword_225423C[122])(1635);
          Function_225623c(v1, 0, 1);
          Function_225623c(v1, 1, 0);
          Function_2256af0(v1);
          Function_2256d24(*(uint *)(v1 + 8), 4);
          Function_2256d24(*(uint *)(v1 + 8), 5);
          Function_2256d24(*(uint *)(v1 + 8), 2);
          Function_2256460((uchar *)v1, 1);
        }
      }
      else
      {
        ((void (__fastcall *)(int))dword_225423C[122])(1646);
      }
    }
    result = 0;
  }
  return result;
}

//----- (0225678C) --------------------------------------------------------
int __fastcall Function_225678c(int a1)
{
  int v1;
  int result;
  int v3;

  v1 = a1;
  if ( *(uchar *)(a1 + 3) )
  {
    Function_2256460((uchar *)a1, 6);
    result = 0;
  }
  else
  {
    if ( *(uint *)(a1 + 24) == 1 )
    {
      *(uint *)(a1 + 24) = 0;
      v3 = *(uint *)(a1 + 20);
      if ( v3 )
      {
        if ( v3 == 1 )
        {
          ((void (__fastcall *)(int))dword_225423C[122])(1646);
        }
        else if ( v3 == 2 )
        {
          ((void (__fastcall *)(int))dword_225423C[122])(1635);
          Function_225623c(v1, 0, 1);
          Function_225623c(v1, 1, 0);
          Function_2256af0(v1);
          Function_2256d24(*(uint *)(v1 + 8), 4);
          Function_2256d24(*(uint *)(v1 + 8), 5);
          Function_2256d24(*(uint *)(v1 + 8), 2);
          Function_2256460((uchar *)v1, 1);
        }
      }
      else
      {
        ((void (__fastcall *)(int))dword_225423C[122])(1635);
        Function_225623c(v1, 1, 1);
        Function_225623c(v1, 0, 0);
        Function_2256a50(v1);
        Function_2256460((uchar *)v1, 2);
      }
    }
    result = 0;
  }
  return result;
}

//----- (02256838) --------------------------------------------------------
int __fastcall Function_2256838(int a1)
{
  int v1;
  int result;
  int v3;

  v1 = a1;
  if ( *(uchar *)(a1 + 3) )
  {
    Function_2256460((uchar *)a1, 6);
    result = 0;
  }
  else
  {
    if ( *(uint *)(a1 + 24) == 1 )
    {
      *(uint *)(a1 + 24) = 0;
      v3 = *(uint *)(a1 + 20);
      if ( v3 )
      {
        if ( v3 == 1 )
        {
          ((void (__fastcall *)(int))dword_225423C[122])(1635);
          Function_225623c(v1, 0, 1);
          Function_225623c(v1, 1, 0);
          Function_2256d24(*(uint *)(v1 + 8), 7);
          Function_2256460((uchar *)v1, 5);
          ++*(uchar *)(v1 + 1);
        }
        else if ( v3 == 2 )
        {
          ((void (__fastcall *)(int))dword_225423C[122])(1635);
          Function_225623c(v1, 0, 1);
          Function_225623c(v1, 1, 0);
          Function_2256d24(*(uint *)(v1 + 8), 7);
          Function_2256d24(*(uint *)(v1 + 8), 2);
          Function_2256460((uchar *)v1, 1);
        }
      }
      else
      {
        ((void (__fastcall *)(int))dword_225423C[122])(1646);
      }
    }
    result = 0;
  }
  return result;
}

//----- (022568E0) --------------------------------------------------------
int __fastcall Function_22568e0(int a1)
{
  int v1;
  int result;
  int v3;

  v1 = a1;
  if ( *(uchar *)(a1 + 3) )
  {
    Function_2256460((uchar *)a1, 6);
    result = 0;
  }
  else
  {
    if ( *(uint *)(a1 + 24) == 1 )
    {
      *(uint *)(a1 + 24) = 0;
      v3 = *(uint *)(a1 + 20);
      if ( v3 )
      {
        if ( v3 == 1 )
        {
          ((void (__fastcall *)(int))dword_225423C[122])(1646);
        }
        else if ( v3 == 2 )
        {
          ((void (__fastcall *)(int))dword_225423C[122])(1635);
          Function_225623c(v1, 0, 1);
          Function_225623c(v1, 1, 0);
          Function_2256af0(v1);
          Function_2256d24(*(uint *)(v1 + 8), 7);
          Function_2256d24(*(uint *)(v1 + 8), 4);
          Function_2256d24(*(uint *)(v1 + 8), 5);
          Function_2256d24(*(uint *)(v1 + 8), 2);
          Function_2256460((uchar *)v1, 1);
        }
      }
      else
      {
        ((void (__fastcall *)(int))dword_225423C[122])(1635);
        Function_225623c(v1, 0, 0);
        Function_225623c(v1, 1, 1);
        Function_2256d24(*(uint *)(v1 + 8), 6);
        Function_2256460((uchar *)v1, 4);
      }
    }
    result = 0;
  }
  return result;
}

//----- (02256998) --------------------------------------------------------
int __fastcall Function_2256998(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_2256d54(*(uint *)(v1 + 8)) )
      return 1;
  }
  else
  {
    Function_2256d24(*(uint *)(v1 + 8), 1);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (022569CC) --------------------------------------------------------
long long __fastcall Function_22569cc(int a1)
{
  int v1;
  char *v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = (char *)(a1 + 72);
  *(uint *)(a1 + 104) = Function_202293c();
  *(uint *)(v1 + 108) = v3;
  *(uint *)(v1 + 112) = 0;
  *(uint *)(v1 + 116) = 0;
  *(uint *)(v1 + 136) = 1;
  *(uint *)(v1 + 120) = 0;
  *(uint *)(v1 + 124) = 0;
  v4 = v2[3] + 10 * v2[2] + 60 * (v2[1] + 10 * *(char *)(v1 + 72));
  *(uint *)(v1 + 128) = v4;
  *(uint *)(v1 + 132) = v4 >> 31;
  Function_2256b10(v1, *(uint *)(v1 + 128), *(uint *)(v1 + 132));
  return *(ull *)(v1 + 128);
}

//----- (02256A3C) --------------------------------------------------------
int __fastcall Function_2256a3c(int a1)
{
  int v1;
  int result;
  int v3;

  v1 = a1;
  *(uint *)(a1 + 136) = 0;
  result = Function_202293c();
  *(uint *)(v1 + 112) = result;
  *(uint *)(v1 + 116) = v3;
  return result;
}

//----- (02256A50) --------------------------------------------------------
int __fastcall Function_2256a50(int a1)
{
  int v1;
  long long v2;
  int result;

  v1 = a1;
  LODWORD(v2) = Function_202293c();
  *(ull *)(v1 + 104) += v2 - *(ull *)(v1 + 112);
  result = 1;
  *(uint *)(v1 + 136) = 1;
  return result;
}

//----- (02256A78) --------------------------------------------------------
BOOL __fastcall Function_2256a78(int a1)
{
  return *(uint *)(a1 + 136) == 0;
}

//----- (02256A88) --------------------------------------------------------
int __fastcall Function_2256a88(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  uint v4;
  uint v5;
  uint v6;
  uint v7;
  uint v8;
  uint v9;
  int result;

  v1 = a1;
  if ( !a1[34] )
    return 0;
  Function_202293c();
  v2 = v1[26];
  v3 = v1[27];
  Function_202295c();
  v5 = v4;
  v7 = v6;
  v8 = v1[32];
  v9 = v1[33];
  if ( __PAIR__(v7, v4) < __PAIR__(v9, v8) )
  {
    if ( *((ull *)v1 + 15) == __PAIR__(v7, v4) )
    {
      result = 0;
    }
    else
    {
      Function_2256b10(v1, v8 - v4, (__PAIR__(v9, v8) - __PAIR__(v7, v4)) >> 32);
      v1[30] = v5;
      v1[31] = v7;
      result = 1;
    }
  }
  else
  {
    Function_2256af0(v1);
    result = 1;
  }
  return result;
}

//----- (02256AF0) --------------------------------------------------------
uchar *__fastcall Function_2256af0(int a1)
{
  uchar *result;

  *(uint *)(a1 + 136) = 0;
  *(uchar *)(a1 + 72) = 0;
  *(uchar *)(a1 + 73) = 0;
  *(uchar *)(a1 + 74) = 0;
  result = (uchar *)(a1 + 75);
  *result = 0;
  return result;
}

//----- (02256B10) --------------------------------------------------------
int __fastcall Function_2256b10(uchar *a1, int a2, int a3)
{
  uchar *v3;
  uint v4;
  uint v5;
  int v6;
  uint v7;
  uint v8;
  uint v9;
  int result;

  v3 = a1;
  REG_DIVCNT = 1;
  REG_DIV_NUMER_L = a2;
  REG_DIV_NUMER_H = a3;
  REG_DIV_DENOM_L = 60;
  REG_DIV_DENOM_H = 0;
  v4 = (uint)&REG_DIVCNT >> 11;
  while ( (ushort)REG_DIVCNT & (ushort)v4 )
    ;
  v5 = (uint)&REG_DIVCNT >> 11;
  while ( (ushort)REG_DIVCNT & (ushort)v5 )
    ;
  v6 = REG_DIVREM_RESULT_L;
  REG_DIVCNT = 0;
  REG_DIV_NUMER_L = REG_DIV_RESULT_L;
  REG_DIV_DENOM_L = 10;
  REG_DIV_DENOM_H = 0;
  v7 = (uint)&REG_DIVCNT >> 11;
  while ( (ushort)REG_DIVCNT & (ushort)v7 )
    ;
  v3[72] = REG_DIV_RESULT_L;
  v8 = (uint)&REG_DIVCNT >> 11;
  while ( (ushort)REG_DIVCNT & (ushort)v8 )
    ;
  v3[73] = REG_DIVREM_RESULT_L;
  REG_DIVCNT = 0;
  REG_DIV_NUMER_L = v6;
  REG_DIV_DENOM_L = 10;
  REG_DIV_DENOM_H = 0;
  v9 = (uint)&REG_DIVCNT >> 11;
  while ( (ushort)REG_DIVCNT & (ushort)v9 )
    ;
  v3[74] = REG_DIV_RESULT_L;
  while ( (ushort)REG_DIVCNT & (ushort)((uint)&REG_DIVCNT >> 11) )
    ;
  result = REG_DIVREM_RESULT_L;
  v3[75] = REG_DIVREM_RESULT_L;
  return result;
}

//----- (02256BCC) --------------------------------------------------------
int __fastcall Function_2256bcc(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  uint *v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = malloc(8u, 172);
  v5 = (uint *)v4;
  if ( !v4 )
    return 0;
  v6 = ((int (__fastcall *)(int, int))dword_225423C[917])(v4 + 8, 8);
  *v5 = v3;
  v5[1] = ((int (__fastcall *)(int))dword_225423C[270])(v6);
  v5[12] = ((int (*)(void))dword_225423C[266])();
  Function_2256c20(v5, v3);
  if ( !v5[1] )
    return 0;
  *v2 = v5;
  return 1;
}

//----- (02256C0C) --------------------------------------------------------
uint __fastcall Function_2256c0c(uint result)
{
  int v1;

  v1 = result;
  if ( result )
  {
    Function_2256cf4();
    result = free(v1);
  }
  return result;
}

//----- (02256C20) --------------------------------------------------------
int __fastcall Function_2256c20(int a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  int result;
  int v7;

  v2 = a1;
  v7 = a2;
  Function_2006ec0(12, 2, 1, 0, 0, 1, 8);
  Function_2006ec0(12, 94, 1, 2560, 0, 1, 8);
  ((void (__fastcall *)(int, int, int, int, int))dword_225423C[1479])(
    v2 + 120,
    12,
    92,
    93,
    8);
  ((void (__fastcall *)(int, int, int, int, int))dword_225423C[1479])(v2 + 140, 12, 3, 4, 8);
  v3 = dword_22571E4;
  v4 = 0;
  v5 = v2;
  do
  {
    if ( v4 < 13 || v4 > 16 )
    {
      *(uint *)(v5 + 52) = ((int (__fastcall *)(uint, int *, int))dword_225423C[1397])(
                               *(uint *)(v2 + 48),
                               v3,
                               v2 + 120);
      ((void (*)(void))dword_225423C[1473])();
    }
    else
    {
      *(uint *)(v5 + 52) = ((int (__fastcall *)(uint, int *, int))dword_225423C[1397])(
                               *(uint *)(v2 + 48),
                               v3,
                               v2 + 140);
    }
    ++v4;
    v3 += 4;
    v5 += 4;
  }
  while ( v4 < 17 );
  Function_2257054(v2, v7);
  Function_2257094(v2, v7);
  Function_22570c4(v2, *(uint *)(v7 + 8) == 0);
  result = 0;
  *(uint *)(v2 + 168) = 0;
  return result;
}

//----- (02256CF4) --------------------------------------------------------
int __fastcall Function_2256cf4(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    if ( *(uint *)(v3 + 52) )
      ((void (__fastcall *)(uint))dword_225423C[1437])(*(uint *)(v1 + 48));
    ++v2;
    v3 += 4;
  }
  while ( v2 < 17 );
  ((void (__fastcall *)(int))dword_225423C[1501])(v1 + 120);
  return ((int (__fastcall *)(int))dword_225423C[1501])(v1 + 140);
}

//----- (02256D24) --------------------------------------------------------
int __fastcall Function_2256d24(int *a1)
{
  int v1;

  v1 = *a1;
  return ((int (__fastcall *)(int *))dword_225423C[976])(&dword_225716C[3]);
}

//----- (02256D48) --------------------------------------------------------
void Function_2256d48()
{
  JUMPOUT(&dword_225423C[957]);
}

//----- (02256D54) --------------------------------------------------------
void Function_2256d54()
{
  JUMPOUT(&dword_225423C[966]);
}

//----- (02256D60) --------------------------------------------------------
int __fastcall Function_2256d60(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = ((int (*)(void))dword_225423C[1024])();
  return ((int (__fastcall *)(int, int))dword_225423C[1018])(v2 + 8, v1);
}

//----- (02256D74) --------------------------------------------------------
int __fastcall Function_2256d74(int a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = (int *)((int (__fastcall *)(int))dword_225423C[1024])(a2);
  Function_20183c4((uint *)v3[1], 6u, &dword_2257130[11], 0);
  LoadFromNARC_RGCN(12, 91, (uint *)v3[1], 6u, 0, 0, 1, 8);
  LoadFromNARC_RCSN(12, 90, (uint *)v3[1], 6u, 0, 0, 1, 8);
  ((void (*)(void))dword_225423C[287])();
  Function_2019448((uint *)v3[1], 6u);
  REG_DISPCNT_SUB = REG_DISPCNT_SUB & 0xFFFFE0FF | ((((uint)(REG_DISPCNT_SUB << 19) >> 27) | 4) << 8);
  v4 = *(uint *)(*v3 + 12);
  switch ( v4 )
  {
    case 1:
      ((void (__fastcall *)(int, int))dword_225423C[1442])(v3[13], 3);
      ((void (__fastcall *)(int, int))dword_225423C[1442])(v3[14], 1);
      break;
    case 2:
      Function_2256d24(v3);
      break;
    case 3:
      v5 = v3[13];
      if ( *(uint *)(*v3 + 16) )
      {
        ((void (__fastcall *)(int, int))dword_225423C[1442])(v5, 2);
        ((void (__fastcall *)(int, int))dword_225423C[1442])(v3[14], 1);
      }
      else
      {
        ((void (__fastcall *)(int, int))dword_225423C[1442])(v5, 3);
        ((void (__fastcall *)(int, uint))dword_225423C[1442])(v3[14], 0);
      }
      break;
  }
  return Function_2256d60(v2);
}

//----- (02256E58) --------------------------------------------------------
void __fastcall Function_2256e58(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  ((void (__fastcall *)(int))dword_225423C[1025])(v2);
  v4 = ((int (__fastcall *)(int))dword_225423C[1027])(v2);
  if ( v4 )
  {
    if ( v4 != 1 )
      return;
  }
  else
  {
    *(uint *)(v3 + 160) = 1;
    ((void (__fastcall *)(int))dword_225423C[1028])(v2);
  }
  Function_2256d48();
  if ( v5 )
  {
    Function_2019044(*(uint *)(v3 + 4), 6);
    Function_2256d60(v2);
  }
}

//----- (02256EA4) --------------------------------------------------------
int __fastcall Function_2256ea4(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  ((void (__fastcall *)(int))dword_225423C[1025])(v2);
  Function_22570c4(v3, 0);
  ((void (__fastcall *)(uint, int))dword_225423C[1442])(*(uint *)(v3 + 52), 2);
  ((void (__fastcall *)(uint, uint))dword_225423C[1442])(*(uint *)(v3 + 56), 0);
  return Function_2256d60(v2);
}

//----- (02256ED8) --------------------------------------------------------
int __fastcall Function_2256ed8(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  ((void (__fastcall *)(int))dword_225423C[1025])(v2);
  Function_22570c4(v3, 1);
  ((void (__fastcall *)(uint, int))dword_225423C[1442])(*(uint *)(v3 + 52), 3);
  ((void (__fastcall *)(uint, int))dword_225423C[1442])(*(uint *)(v3 + 56), 1);
  return Function_2256d60(v2);
}

//----- (02256F0C) --------------------------------------------------------
int __fastcall Function_2256f0c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  v4 = ((int (__fastcall *)(int))dword_225423C[1025])(v2);
  Function_2257054(v3, v4);
  return Function_2256d60(v2);
}

//----- (02256F30) --------------------------------------------------------
int __fastcall Function_2256f30(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  v4 = ((int (__fastcall *)(int))dword_225423C[1025])(v2);
  Function_2257094(v3, v4);
  return Function_2256d60(v2);
}

//----- (02256F54) --------------------------------------------------------
uint __fastcall Function_2256f54(int a1, int a2)
{
  int v2;
  uint *v3;
  uint result;
  int v5;

  v2 = a2;
  v3 = (uint *)((int (__fastcall *)(int))dword_225423C[1024])(a2);
  ((void (__fastcall *)(int))dword_225423C[1025])(v2);
  result = ((int (__fastcall *)(int))dword_225423C[1027])(v2);
  if ( result )
  {
    if ( result != 1 )
      return result;
  }
  else
  {
    ((void (__fastcall *)(uint, int))dword_225423C[1442])(v3[13], 2);
    ((void (__fastcall *)(uint, uint))dword_225423C[1442])(v3[14], 0);
    v3[41] = 0;
    v3[40] = 0;
    ((void (__fastcall *)(int))dword_225423C[1028])(v2);
  }
  if ( v3[40] )
    return Function_2256d60(v2);
  result = ++v3[41];
  if ( result >= 8 )
  {
    v3[42] ^= 1u;
    v5 = v3[13];
    if ( v3[42] )
    {
      ((void (__fastcall *)(int, int))dword_225423C[1442])(v5, 2);
      ((void (__fastcall *)(uint, int))dword_225423C[1442])(v3[14], 1);
    }
    else
    {
      ((void (__fastcall *)(int, int))dword_225423C[1442])(v5, 3);
      ((void (__fastcall *)(uint, uint))dword_225423C[1442])(v3[14], 0);
    }
    ((void (__fastcall *)(int))dword_225423C[122])(1655);
    result = 0;
    v3[41] = 0;
  }
  return result;
}

//----- (02257010) --------------------------------------------------------
void __fastcall Function_2257010(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  ((void (__fastcall *)(int))dword_225423C[1025])(v2);
  v4 = ((int (__fastcall *)(int))dword_225423C[1027])(v2);
  if ( v4 )
  {
    if ( v4 != 1 )
      return;
  }
  else
  {
    *(uint *)(v3 + 160) = 1;
    ((void (__fastcall *)(int))dword_225423C[1028])(v2);
  }
  Function_2256d48();
  if ( v5 )
    Function_2256d60(v2);
}

//----- (02257054) --------------------------------------------------------
int __fastcall Function_2257054(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v2 = a2;
  v3 = a1;
  if ( *(uchar *)(a2 + 4) )
    v4 = 6;
  else
    v4 = 5;
  ((void (__fastcall *)(uint, int))dword_225423C[1442])(*(uint *)(a1 + 60), v4);
  if ( *(uchar *)(v2 + 5) )
    v5 = 8;
  else
    v5 = 7;
  ((void (__fastcall *)(uint, int))dword_225423C[1442])(*(uint *)(v3 + 64), v5);
  if ( *(uchar *)(v2 + 6) )
    v6 = 10;
  else
    v6 = 9;
  return ((int (__fastcall *)(uint, int))dword_225423C[1442])(*(uint *)(v3 + 68), v6);
}

//----- (02257094) --------------------------------------------------------
int __fastcall Function_2257094(uint *a1, char *a2)
{
  char *v2;
  uint *v3;

  v2 = a2;
  v3 = a1;
  ((void (__fastcall *)(uint, uint))dword_225423C[1442])(a1[26], *a2);
  ((void (__fastcall *)(uint, uint))dword_225423C[1442])(v3[27], v2[1]);
  ((void (__fastcall *)(uint, uint))dword_225423C[1442])(v3[28], v2[2]);
  return ((int (__fastcall *)(uint, uint))dword_225423C[1442])(v3[29], v2[3]);
}

//----- (022570C4) --------------------------------------------------------
int __fastcall Function_22570c4(uint *a1, int a2)
{
  uint *v2;
  int v3;

  v2 = a1;
  v3 = a2;
  ((void (__fastcall *)(uint))dword_225423C[1462])(a1[18]);
  ((void (__fastcall *)(uint, int))dword_225423C[1462])(v2[19], v3);
  ((void (__fastcall *)(uint, int))dword_225423C[1462])(v2[20], v3);
  ((void (__fastcall *)(uint, int))dword_225423C[1462])(v2[21], v3);
  ((void (__fastcall *)(uint, int))dword_225423C[1462])(v2[22], v3);
  ((void (__fastcall *)(uint, int))dword_225423C[1462])(v2[23], v3);
  ((void (__fastcall *)(uint, int))dword_225423C[1462])(v2[24], v3);
  return ((int (__fastcall *)(uint, int))dword_225423C[1462])(v2[25], v3);
}

//----- (0225710C) --------------------------------------------------------
int __fastcall Function_225710c(int a1)
{
  return *(uint *)(a1 + 168);
}

