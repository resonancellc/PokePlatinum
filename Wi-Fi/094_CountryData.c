//----- (0223B140) --------------------------------------------------------
int __fastcall Function_223b140(int result, int a2, int a3)
{
  dword_2246AC0[0] = 1;
  dword_2246AC0[1] = 0;
  dword_2246AC0[2] = result;
  dword_2246AC0[3] = a2;
  dword_2246AC0[4] = a3;
  return result;
}

//----- (0223B15C) --------------------------------------------------------
int Function_223b15c()
{
  int result;
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  result = dword_2246AC0[0];
  if ( dword_2246AC0[0] <= 0x18u )
    JUMPOUT(__CS__, *((short *)&off_223B174 + dword_2246AC0[0]) + 35893622);
  switch ( LOBYTE(dword_2246AC0[0]) )
  {
    case 2:
      result = ((int (*)(void))dword_221FD48[0])();
      if ( result == 1 )
      {
        dword_2246AC0[0] = 24;
        v1 = ((int (*)(void))dword_221FE14[0])();
        dword_2246AC0[1] = Function_223bc18(v1);
        result = ((int (*)(void))dword_221FDEC[0])();
      }
      else if ( result == 7 )
      {
        dword_2246AC0[0] = 24;
        switch ( LOBYTE(dword_2246B40[47]) )
        {
          case 1:
            dword_2246AC0[1] = 0;
            break;
          case 2:
            dword_2246AC0[1] = -5;
            break;
          case 3:
            dword_2246AC0[1] = -4;
            break;
          case 7:
            dword_2246AC0[1] = -1;
            break;
          case 8:
            dword_2246AC0[1] = -8;
            break;
          case 9:
            dword_2246AC0[1] = -9;
            break;
          case 0xA:
            dword_2246AC0[1] = -10;
            break;
          case 0xB:
            dword_2246AC0[1] = -11;
            break;
          case 0xC:
            dword_2246AC0[1] = -6;
            break;
          case 0xD:
            dword_2246AC0[1] = -7;
            break;
          case 0xE:
            dword_2246AC0[1] = -2;
            break;
          default:
            dword_2246AC0[1] = -13;
            break;
        }
        result = ((int (*)(void))dword_221FDEC[0])();
      }
      return result;
    case 3:
    case 5:
    case 7:
    case 9:
    case 0xB:
    case 0xD:
    case 0xF:
    case 0x11:
    case 0x13:
    case 0x15:
    case 0x17:
      dword_2246AC0[0] = 24;
      dword_2246AC0[1] = -12;
      return ((int (*)(void))dword_221FDEC[0])();
    case 4:
      result = ((int (__stdcall *)(int, int *))dword_221FD48[0])(dword_2246AC0[0], dword_2246AC0);
      if ( result == 1 )
      {
        dword_2246AC0[0] = 24;
        v2 = ((int (*)(void))dword_221FE14[0])();
        dword_2246AC0[1] = Function_223bc18(v2);
        result = ((int (*)(void))dword_221FDEC[0])();
      }
      else if ( result == 7 )
      {
        dword_2246AC0[0] = 24;
        if ( (int)LOBYTE(dword_2246B40[47]) <= 5 )
          JUMPOUT(__CS__, (char *)&loc_223B29A + *((short *)&off_223B298 + LOBYTE(dword_2246B40[47])));
        if ( LOBYTE(dword_2246B40[47]) == 14 )
          dword_2246AC0[1] = -2;
        else
          dword_2246AC0[1] = -13;
        result = ((int (*)(void))dword_221FDEC[0])();
      }
      return result;
    case 6:
      result = ((int (__stdcall *)(int, int *))dword_221FD48[0])(dword_2246AC0[0], dword_2246AC0);
      if ( result == 1 )
      {
        dword_2246AC0[0] = 24;
        v3 = ((int (*)(void))dword_221FE14[0])();
        dword_2246AC0[1] = Function_223bc18(v3);
        result = ((int (*)(void))dword_221FDEC[0])();
      }
      else if ( result == 7 )
      {
        dword_2246AC0[0] = 24;
        if ( ((int (*)(void))dword_221FE14[3])() == 292 )
        {
          dword_2246AC0[1] = 0;
        }
        else
        {
          v4 = *(uchar *)dword_2246B40[48];
          switch ( v4 )
          {
            case 3:
              dword_2246AC0[1] = -4;
              break;
            case 5:
              dword_2246AC0[1] = -3;
              break;
            case 14:
              dword_2246AC0[1] = -2;
              break;
            default:
              dword_2246AC0[1] = -13;
              break;
          }
        }
        result = ((int (*)(void))dword_221FDEC[0])();
      }
      return result;
    case 8:
      result = ((int (*)(void))dword_221FD48[0])();
      if ( result == 1 )
      {
        dword_2246AC0[0] = 24;
        v5 = ((int (*)(void))dword_221FE14[0])();
        dword_2246AC0[1] = Function_223bc18(v5);
        return ((int (*)(void))dword_221FDEC[0])();
      }
      if ( result != 7 )
        return result;
      dword_2246AC0[0] = 24;
      if ( ((int (*)(void))dword_221FE14[3])() == 292 )
      {
        dword_2246AC0[1] = 1;
        return ((int (*)(void))dword_221FDEC[0])();
      }
      v6 = *(uchar *)dword_2246B40[48];
      if ( v6 > 5 )
      {
        if ( v6 == 14 )
        {
          dword_2246AC0[1] = -2;
          return ((int (*)(void))dword_221FDEC[0])();
        }
      }
      else if ( v6 >= 3 )
      {
        switch ( v6 )
        {
          case 3:
            dword_2246AC0[1] = -4;
            return ((int (*)(void))dword_221FDEC[0])();
          case 4:
            dword_2246AC0[1] = 0;
            return ((int (*)(void))dword_221FDEC[0])();
          case 5:
            dword_2246AC0[1] = -3;
            return ((int (*)(void))dword_221FDEC[0])();
        }
      }
      dword_2246AC0[1] = -13;
      return ((int (*)(void))dword_221FDEC[0])();
    case 0xA:
      result = ((int (*)(void))dword_221FD48[0])();
      if ( result == 1 )
      {
        dword_2246AC0[0] = 24;
        v7 = ((int (*)(void))dword_221FE14[0])();
        dword_2246AC0[1] = Function_223bc18(v7);
        return ((int (*)(void))dword_221FDEC[0])();
      }
      if ( result != 7 )
        return result;
      dword_2246AC0[0] = 24;
      if ( (int)LOBYTE(dword_2246B40[47]) > 5 )
      {
        if ( LOBYTE(dword_2246B40[47]) == 14 )
        {
          dword_2246AC0[1] = -2;
          return ((int (*)(void))dword_221FDEC[0])();
        }
      }
      else if ( (int)LOBYTE(dword_2246B40[47]) >= 1 )
      {
        switch ( LOBYTE(dword_2246B40[47]) )
        {
          case 1u:
            dword_2246AC0[1] = 0;
            return ((int (*)(void))dword_221FDEC[0])();
          case 3u:
            dword_2246AC0[1] = -4;
            return ((int (*)(void))dword_221FDEC[0])();
          case 5u:
            dword_2246AC0[1] = -3;
            return ((int (*)(void))dword_221FDEC[0])();
        }
      }
      dword_2246AC0[1] = -13;
      return ((int (*)(void))dword_221FDEC[0])();
    case 0xC:
      result = ((int (*)(void))dword_221FD48[0])();
      if ( result == 1 )
      {
        dword_2246AC0[0] = 24;
        v8 = ((int (*)(void))dword_221FE14[0])();
        dword_2246AC0[1] = Function_223bc18(v8);
        result = ((int (*)(void))dword_221FDEC[0])();
      }
      else if ( result == 7 )
      {
        dword_2246AC0[0] = 24;
        if ( (int)LOBYTE(dword_2246B40[47]) <= 5 )
          JUMPOUT(__CS__, (char *)&loc_223B4B2 + *((short *)&off_223B4B0 + LOBYTE(dword_2246B40[47])));
        if ( LOBYTE(dword_2246B40[47]) == 14 )
          dword_2246AC0[1] = -2;
        else
          dword_2246AC0[1] = -13;
        result = ((int (*)(void))dword_221FDEC[0])();
      }
      return result;
    case 0xE:
      result = ((int (__stdcall *)(int, int *))dword_221FD48[0])(dword_2246AC0[0], dword_2246AC0);
      if ( result == 1 )
      {
        dword_2246AC0[0] = 24;
        v9 = ((int (*)(void))dword_221FE14[0])();
        dword_2246AC0[1] = Function_223bc18(v9);
        result = ((int (*)(void))dword_221FDEC[0])();
      }
      else if ( result == 7 )
      {
        dword_2246AC0[0] = 24;
        v10 = ((int (*)(void))dword_221FE14[3])();
        if ( v10 < 0x124 )
        {
          if ( v10 )
          {
            if ( *(uchar *)dword_2246B40[48] == 14 )
              dword_2246AC0[1] = -2;
            else
              dword_2246AC0[1] = -13;
          }
          else
          {
            dword_2246AC0[1] = 0;
          }
        }
        else
        {
          v11 = ((int (*)(void))dword_221FE14[3])();
          dword_2246AC0[1] = u32_div_f(v11, 292);
        }
        result = ((int (*)(void))dword_221FDEC[0])();
      }
      return result;
    case 0x10:
      result = ((int (*)(void))dword_221FD48[0])();
      if ( result == 1 )
      {
        dword_2246AC0[0] = 24;
        v12 = ((int (*)(void))dword_221FE14[0])();
        dword_2246AC0[1] = Function_223bc18(v12);
        result = ((int (*)(void))dword_221FDEC[0])();
      }
      else if ( result == 7 )
      {
        dword_2246AC0[0] = 24;
        if ( ((int (*)(void))dword_221FE14[3])() == 292 )
        {
          dword_2246AC0[1] = 0;
        }
        else
        {
          switch ( *(uchar *)dword_2246B40[48] )
          {
            case 2:
              dword_2246AC0[1] = -5;
              break;
            case 8:
              dword_2246AC0[1] = -8;
              break;
            case 9:
              dword_2246AC0[1] = -9;
              break;
            case 0xA:
              dword_2246AC0[1] = -10;
              break;
            case 0xB:
              dword_2246AC0[1] = -11;
              break;
            case 0xC:
              dword_2246AC0[1] = -6;
              break;
            case 0xD:
              dword_2246AC0[1] = -7;
              break;
            case 0xE:
              dword_2246AC0[1] = -2;
              break;
            default:
              dword_2246AC0[1] = -13;
              break;
          }
        }
        result = ((int (*)(void))dword_221FDEC[0])();
      }
      return result;
    case 0x12:
      result = ((int (__stdcall *)(int, int *))dword_221FD48[0])(dword_2246AC0[0], dword_2246AC0);
      if ( result == 1 )
      {
        dword_2246AC0[0] = 24;
        v13 = ((int (*)(void))dword_221FE14[0])();
        dword_2246AC0[1] = Function_223bc18(v13);
        result = ((int (*)(void))dword_221FDEC[0])();
      }
      else if ( result == 7 )
      {
        dword_2246AC0[0] = 24;
        switch ( LOBYTE(dword_2246B40[47]) )
        {
          case 1u:
            dword_2246AC0[1] = 0;
            break;
          case 2u:
            dword_2246AC0[1] = -5;
            break;
          case 0xEu:
            dword_2246AC0[1] = -2;
            break;
        }
        result = ((int (*)(void))dword_221FDEC[0])();
      }
      return result;
    case 0x14:
      result = ((int (*)(void))dword_221FD48[0])();
      if ( result == 1 )
      {
        dword_2246AC0[0] = 24;
        v14 = ((int (*)(void))dword_221FE14[0])();
        dword_2246AC0[1] = Function_223bc18(v14);
        return ((int (*)(void))dword_221FDEC[0])();
      }
      if ( result != 7 )
        return result;
      dword_2246AC0[0] = 24;
      if ( (int)LOBYTE(dword_2246B40[47]) > 7 )
      {
        if ( LOBYTE(dword_2246B40[47]) == 14 )
        {
          dword_2246AC0[1] = -2;
          return ((int (*)(void))dword_221FDEC[0])();
        }
      }
      else if ( (int)LOBYTE(dword_2246B40[47]) >= 1 )
      {
        switch ( LOBYTE(dword_2246B40[47]) )
        {
          case 1u:
            dword_2246AC0[1] = 0;
            return ((int (*)(void))dword_221FDEC[0])();
          case 6u:
            dword_2246AC0[1] = 1;
            return ((int (*)(void))dword_221FDEC[0])();
          case 7u:
            dword_2246AC0[1] = 2;
            return ((int (*)(void))dword_221FDEC[0])();
        }
      }
      dword_2246AC0[1] = -13;
      return ((int (*)(void))dword_221FDEC[0])();
    case 0x16:
      result = ((int (*)(void))dword_221FD48[0])();
      if ( result == 1 )
      {
        dword_2246AC0[0] = 24;
        v15 = ((int (*)(void))dword_221FE14[0])();
        dword_2246AC0[1] = Function_223bc18(v15);
        return ((int (*)(void))dword_221FDEC[0])();
      }
      if ( result != 7 )
        return result;
      dword_2246AC0[0] = 24;
      if ( ((int (*)(void))dword_221FE14[3])() == 8 )
      {
        dword_2246AC0[1] = 0;
        return ((int (*)(void))dword_221FDEC[0])();
      }
      if ( (int)LOBYTE(dword_2246B40[47]) > 7 )
      {
        if ( LOBYTE(dword_2246B40[47]) == 14 )
        {
          dword_2246AC0[1] = -2;
          return ((int (*)(void))dword_221FDEC[0])();
        }
      }
      else if ( (int)LOBYTE(dword_2246B40[47]) >= 1 )
      {
        switch ( LOBYTE(dword_2246B40[47]) )
        {
          case 1u:
            dword_2246AC0[1] = 0;
            return ((int (*)(void))dword_221FDEC[0])();
          case 6u:
            dword_2246AC0[1] = 1;
            return ((int (*)(void))dword_221FDEC[0])();
          case 7u:
            dword_2246AC0[1] = 2;
            return ((int (*)(void))dword_221FDEC[0])();
        }
      }
      dword_2246AC0[1] = -13;
      return ((int (*)(void))dword_221FDEC[0])();
    default:
      return result;
  }
}

//----- (0223B7AC) --------------------------------------------------------
int *Function_223b7ac()
{
  int *result;

  result = dword_2246AC0;
  dword_2246AC0[0] = 0;
  return result;
}

//----- (0223B7B8) --------------------------------------------------------
int Function_223b7b8()
{
  int result;

  if ( dword_2246AC0[0] == 1 )
    return 1;
  if ( dword_2246AC0[0] != 24 )
    return 0;
  result = 1;
  dword_2246AC0[0] = 1;
  return result;
}

//----- (0223B7D8) --------------------------------------------------------
int Function_223b7d8()
{
  return dword_2246AC0[1];
}

//----- (0223B7E4) --------------------------------------------------------
int *__fastcall Function_223b7e4(char *a1)
{
  uchar *v1;
  int *result;

  v1 = memcpy(&dword_2246AC0[5], a1, 292);
  ((void (__fastcall *)(uchar *))dword_221F800[289])(v1);
  if ( Function_223bbe0(
         "http://gamestats2.gs.nintendowifi.net/pokemondpds/worldexchange/post.asp",
         &dword_2246AC0[5],
         292,
         &dword_2246B40[47]) )
  {
    result = dword_2246AC0;
    dword_2246AC0[0] = 2;
  }
  else
  {
    dword_2246AC0[0] = 24;
    dword_2246AC0[1] = -13;
    result = (int *)((int (*)(void))dword_221FDEC[0])();
  }
  return result;
}

//----- (0223B834) --------------------------------------------------------
int *Function_223b834()
{
  int *result;

  dword_2246AC0[5] = dword_2246AC0[3];
  dword_2246AC0[6] = dword_2246AC0[4];
  ((void (__cdecl *)(int))dword_221F800[289])(dword_2246AC0[4]);
  if ( Function_223bbe0(
         "http://gamestats2.gs.nintendowifi.net/pokemondpds/worldexchange/post_finish.asp",
         &dword_2246AC0[5],
         8,
         &dword_2246B40[47]) )
  {
    result = dword_2246AC0;
    dword_2246AC0[0] = 4;
  }
  else
  {
    dword_2246AC0[0] = 24;
    dword_2246AC0[1] = -13;
    result = (int *)((int (*)(void))dword_221FDEC[0])();
  }
  return result;
}

//----- (0223B888) --------------------------------------------------------
int *__fastcall Function_223b888(int a1)
{
  int v1;
  int *result;

  v1 = a1;
  dword_2246B40[48] = a1;
  ((void (*)(void))dword_221F800[289])();
  if ( Function_223bbe0(
         "http://gamestats2.gs.nintendowifi.net/pokemondpds/worldexchange/get.asp",
         &dword_2246AC0[5],
         0,
         v1) )
  {
    result = dword_2246AC0;
    dword_2246AC0[0] = 6;
  }
  else
  {
    dword_2246AC0[0] = 24;
    dword_2246AC0[1] = -13;
    result = (int *)((int (__cdecl *)(int *))dword_221FDEC[0])(dword_2246AC0);
  }
  return result;
}

//----- (0223B8D8) --------------------------------------------------------
int *__fastcall Function_223b8d8(int a1)
{
  int v1;
  int *result;

  v1 = a1;
  dword_2246B40[48] = a1;
  ((void (*)(void))dword_221F800[289])();
  if ( Function_223bbe0(
         "http://gamestats2.gs.nintendowifi.net/pokemondpds/worldexchange/result.asp",
         &dword_2246AC0[5],
         0,
         v1) )
  {
    result = dword_2246AC0;
    dword_2246AC0[0] = 8;
  }
  else
  {
    dword_2246AC0[0] = 24;
    dword_2246AC0[1] = -13;
    result = (int *)((int (__cdecl *)(int *))dword_221FDEC[0])(dword_2246AC0);
  }
  return result;
}

//----- (0223B928) --------------------------------------------------------
int *__fastcall Function_223b928(int a1)
{
  int *result;

  ((void (__cdecl *)(int))dword_221F800[289])(a1);
  if ( Function_223bbe0(
         "http://gamestats2.gs.nintendowifi.net/pokemondpds/worldexchange/delete.asp",
         &dword_2246AC0[5],
         0,
         &dword_2246B40[47]) )
  {
    result = dword_2246AC0;
    dword_2246AC0[0] = 10;
  }
  else
  {
    dword_2246AC0[0] = 24;
    dword_2246AC0[1] = -13;
    result = (int *)((int (*)(void))dword_221FDEC[0])();
  }
  return result;
}

//----- (0223B96C) --------------------------------------------------------
int *__fastcall Function_223b96c(int a1)
{
  int *result;

  ((void (__cdecl *)(int))dword_221F800[289])(a1);
  if ( Function_223bbe0(
         "http://gamestats2.gs.nintendowifi.net/pokemondpds/worldexchange/return.asp",
         &dword_2246AC0[5],
         0,
         &dword_2246B40[47]) )
  {
    result = dword_2246AC0;
    dword_2246AC0[0] = 12;
  }
  else
  {
    dword_2246AC0[0] = 24;
    dword_2246AC0[1] = -13;
    result = (int *)((int (*)(void))dword_221FDEC[0])();
  }
  return result;
}

//----- (0223B9B0) --------------------------------------------------------
int *__fastcall Function_223b9b0(int a1, char a2, int a3)
{
  int v3;
  int v4;
  char v5;
  int *result;

  v3 = a1;
  v4 = a3;
  dword_2246B40[48] = a3;
  v5 = a2;
  ((void (*)(void))dword_221F800[289])();
  LOBYTE(dword_2246AC0[5]) = *(uchar *)v3;
  *(ushort *)((char *)&dword_2246AC0[5] + 1) = *(ushort *)(v3 + 1);
  HIBYTE(dword_2246AC0[5]) = *(uchar *)(v3 + 3);
  LOWORD(dword_2246AC0[6]) = *(ushort *)(v3 + 4);
  BYTE2(dword_2246AC0[6]) = v5;
  if ( Function_223bbe0(
         "http://gamestats2.gs.nintendowifi.net/pokemondpds/worldexchange/search.asp",
         &dword_2246AC0[5],
         7,
         v4) )
  {
    result = dword_2246AC0;
    dword_2246AC0[0] = 14;
  }
  else
  {
    dword_2246AC0[0] = 24;
    dword_2246AC0[1] = -13;
    result = (int *)((int (__cdecl *)(int *))dword_221FDEC[0])(dword_2246AC0);
  }
  return result;
}

//----- (0223BA24) --------------------------------------------------------
int *__fastcall Function_223ba24(char *a1, int a2)
{
  char *v2;
  int v3;
  int *v4;
  char *v5;
  int v6;
  char v7;
  int v8;
  int *result;

  v2 = a1;
  v3 = a2;
  dword_2246B40[48] = a2;
  ((void (__cdecl *)(int *))dword_221F800[289])(&dword_2246B40[32]);
  v4 = &dword_2246AC0[5];
  v5 = v2;
  v6 = 8;
  do
  {
    v7 = *v5++;
    *(uchar *)v4 = v7;
    v4 = (int *)((char *)v4 + 1);
    --v6;
  }
  while ( v6 );
  v8 = 292 * v2[6];
  if ( Function_223bbe0(
         "http://gamestats2.gs.nintendowifi.net/pokemondpds/worldexchange/search.asp",
         &dword_2246AC0[5],
         8,
         v3) )
  {
    result = dword_2246AC0;
    dword_2246AC0[0] = 14;
  }
  else
  {
    dword_2246AC0[0] = 24;
    dword_2246AC0[1] = -13;
    result = (int *)((int (*)(void))dword_221FDEC[0])();
  }
  return result;
}

//----- (0223BA88) --------------------------------------------------------
int *__fastcall Function_223ba88(int a1, char *a2, int a3)
{
  int v3;
  int v4;
  char *v5;
  int *result;

  v3 = a1;
  v4 = a3;
  v5 = a2;
  dword_2246B40[48] = a3;
  ((void (*)(void))dword_221F800[289])();
  memcpy(&dword_2246AC0[5], v5, 292);
  dword_2246B40[46] = v3;
  if ( Function_223bbe0(
         "http://gamestats2.gs.nintendowifi.net/pokemondpds/worldexchange/exchange.asp",
         &dword_2246AC0[5],
         296,
         v4) )
  {
    result = dword_2246AC0;
    dword_2246AC0[0] = 16;
  }
  else
  {
    dword_2246AC0[0] = 24;
    dword_2246AC0[1] = -13;
    result = (int *)((int (__cdecl *)(int *))dword_221FDEC[0])(dword_2246AC0);
  }
  return result;
}

//----- (0223BAEC) --------------------------------------------------------
int *Function_223baec()
{
  int *result;

  dword_2246AC0[5] = dword_2246AC0[3];
  dword_2246AC0[6] = dword_2246AC0[4];
  ((void (__cdecl *)(int))dword_221F800[289])(dword_2246AC0[4]);
  if ( Function_223bbe0(
         "http://gamestats2.gs.nintendowifi.net/pokemondpds/worldexchange/exchange_finish.asp",
         &dword_2246AC0[5],
         8,
         &dword_2246B40[47]) )
  {
    result = dword_2246AC0;
    dword_2246AC0[0] = 18;
  }
  else
  {
    dword_2246AC0[0] = 24;
    dword_2246AC0[1] = -13;
    result = (int *)((int (*)(void))dword_221FDEC[0])();
  }
  return result;
}

//----- (0223BB40) --------------------------------------------------------
int *__fastcall Function_223bb40(int a1)
{
  int *result;

  ((void (__cdecl *)(int))dword_221F800[289])(a1);
  if ( Function_223bbe0(
         "http://gamestats2.gs.nintendowifi.net/pokemondpds/worldexchange/info.asp",
         &dword_2246AC0[5],
         0,
         &dword_2246B40[47]) )
  {
    result = dword_2246AC0;
    dword_2246AC0[0] = 20;
  }
  else
  {
    dword_2246AC0[0] = 24;
    dword_2246AC0[1] = -13;
    result = (int *)((int (*)(void))dword_221FDEC[0])();
  }
  return result;
}

//----- (0223BB84) --------------------------------------------------------
int *__fastcall Function_223bb84(char *a1, int a2, int a3, uint a4)
{
  char *v4;
  int v5;
  int *result;

  v4 = a1;
  v5 = a2;
  OS_GetMacAddress((uint)(a1 + 28), a2, a3, a4);
  memcpy(&dword_2246AC0[5], v4, 100);
  dword_2246B40[48] = v5;
  ((void (__cdecl *)(int *))dword_221F800[289])(&dword_2246B40[32]);
  if ( Function_223bbe0(
         "http://gamestats2.gs.nintendowifi.net/pokemondpds/common/setProfile.asp",
         &dword_2246AC0[5],
         100,
         dword_2246B40[48]) )
  {
    result = dword_2246AC0;
    dword_2246AC0[0] = 22;
  }
  else
  {
    dword_2246AC0[0] = 24;
    dword_2246AC0[1] = -13;
    result = (int *)((int (*)(void))dword_221FDEC[0])();
  }
  return result;
}

//----- (0223BBE0) --------------------------------------------------------
BOOL __fastcall Function_223bbe0(int a1, int a2, int a3, int a4, int a5)
{
  return ((int (__fastcall *)(int, int, int, int, int, int))dword_221F800[298])(a1, dword_2246AC0[2], a2, a3, a4, a5) == 0;
}

//----- (0223BC18) --------------------------------------------------------
int __fastcall Function_223bc18(char a1)
{
  int v1;

  switch ( a1 )
  {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 6:
    case 9:
    case 10:
    case 14:
    case 20:
    case 21:
    case 22:
    case 23:
    case 32:
      v1 = -13;
      break;
    case 2:
    case 8:
    case 25:
      v1 = -13;
      break;
    case 11:
      v1 = -15;
      break;
    case 12:
    case 13:
      v1 = -15;
      break;
    case 15:
    case 30:
      v1 = -2;
      break;
    case 16:
    case 17:
    case 18:
    case 19:
    case 26:
    case 27:
    case 28:
    case 29:
    case 31:
      v1 = -2;
      break;
    default:
      v1 = -13;
      break;
  }
  if ( v1 != -13 )
  {
    if ( ((int (*)(void))dword_2213898[0])() != 9 )
      v1 = -14;
    ((void (*)(void))dword_21D76E8[0])();
  }
  return v1;
}

//----- (0223BCB0) --------------------------------------------------------
int __fastcall Function_94_223bcb0(int a1, uint *a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v16 = a4;
  v4 = a2;
  v5 = a1;
  if ( *a2 )
  {
    if ( *a2 == 1 )
    {
      v8 = LoadOverlay4(1, (int)a2, a3);
      LoadOverlay60(v8, v9, v10);
      Function_2033478();
      *v4 = 0;
      return 1;
    }
  }
  else
  {
    SetMainLoopFunctionCall(0, 0);
    Function_20177a4();
    Function_201ff00();
    Function_201ff68();
    REG_DISPCNT &= 0xFFFFE0FF;
    REG_DISPCNT_SUB &= 0xFFFFE0FF;
    Function_2017fc8(3, 62, 458752);
    v6 = (int *)MallocSomeDataAndStorePtrInOverlayData1c(v5, 5256, 0x3Eu);
    Call_FillMemWithValue(v6, 0, 0x1488u);
    v6[1] = Function_2018340(0x3Eu);
    dword_2246B40[50] = (int)v6;
    v12 = 1;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    SetGraphicsModes(&v12);
    v6[740] = (int)Function_200b368(0xBu, 64, 0x3Eu);
    v6[741] = LoadFromMsgNARC(0, 26, 671, 0x3Eu);
    v6[743] = LoadFromMsgNARC(0, 26, 674, 0x3Eu);
    v6[744] = LoadFromMsgNARC(0, 26, 695, 0x3Eu);
    v6[742] = LoadFromMsgNARC(0, 26, 412, 0x3Eu);
    v6[745] = LoadFromMsgNARC(0, 26, 694, 0x3Eu);
    Function_2017dd4(4, 8);
    Function_223c03c(v6, v5);
    Function_223c4e0(v6);
    Function_2004550(0xBu, 0x497u);
    v7 = malloc(0x3Eu, 131104);
    v6[19] = v7;
    v6[20] = (int)NNS_FndCreateExpHeapEx((v7 + 31) & 0xFFFFFFE0, 0x20000, 0);
    *v4 = 1;
  }
  return 0;
}

//----- (0223BE2C) --------------------------------------------------------
int __fastcall Function_94_223be2c(int a1, uint *a2)
{
  uint *v2;
  uint *v3;
  char v4;
  int v5;
  int v6;
  int result;
  int v8;

  v2 = a2;
  v3 = (uint *)LoadOverlayData1c(a1);
  ((void (*)(void))dword_21D8018[0])();
  v4 = Function_223b15c();
  v5 = *v2;
  switch ( v4 )
  {
    case 0:
      if ( Function_20334a4() )
      {
        dword_2246B40[49] = v3[20];
        ((void (__fastcall *)(int (*)(), int (*)()))dword_21D776C[0])(Function_223c468, Function_223c490);
        *v2 = 1;
      }
      goto LABEL_14;
    case 1:
      *v2 = ((int (__fastcall *)(uint *))*(&off_224674C + 3 * v3[5]))(v3);
      if ( v3[66] )
        Function_223c508(v3);
      goto LABEL_14;
    case 2:
      if ( Function_200f2ac() )
        *v2 = 3;
      goto LABEL_14;
    case 3:
      *v2 = ((int (__fastcall *)(uint *))*(&off_2246750 + 3 * v3[5]))(v3);
      goto LABEL_14;
    case 4:
      if ( Function_200f2ac() )
      {
        if ( v3[66] )
        {
          Function_223c4e0(v3);
          v6 = GetGender(*(uint *)(*v3 + 28));
          ((void (__fastcall *)(uint *, int))loc_2243EF4)(v3, v6);
          ((void (__fastcall *)(uint *, uint, uint))loc_2244230)(v3, v3[71], 0);
          Function_223d068(v3);
          v3[66] = 0;
        }
        *v2 = ((int (__fastcall *)(uint *, int))*(&off_2246754 + 3 * v3[5]))(v3, *v2);
      }
      goto LABEL_14;
    case 5:
      result = 1;
      break;
    default:
LABEL_14:
      Function_223c578(v3);
      Function_223c598(v3);
      v8 = v3[762];
      if ( v8 )
        Function_20219f8(v8);
      result = 0;
      break;
  }
  return result;
}

//----- (0223BF54) --------------------------------------------------------
int __fastcall Function_94_223bf54(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  int v9;
  int v10;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  v3 = v2;
  v4 = free(*(uint *)(v2 + 76));
  v7 = UnloadOverlay60(v4, v5, v6);
  UnloadOverlay4((int)v7, v8, v9);
  Function_223c508(v3);
  Function_200b190(*(ushort **)(v3 + 2968));
  Function_200b190(*(ushort **)(v3 + 2976));
  Function_200b190(*(ushort **)(v3 + 2972));
  Function_200b190(*(ushort **)(v3 + 2964));
  Function_200b190(*(ushort **)(v3 + 2980));
  Function_200b3f0(*(uint **)(v3 + 2960), v10);
  Function_223c0a0(v3);
  Function_20334cc();
  free(*(uint *)(v3 + 4));
  free(*(uint *)v3);
  FreeSomeDataAndStore0InOverlayData1c(v1);
  SetMainLoopFunctionCall(0, 0);
  Function_201807c(62);
  return 1;
}

//----- (0223BFE4) --------------------------------------------------------
int __fastcall Function_223bfe4(int a1)
{
  int v1;
  void (*v2)(void);
  int result;

  v1 = a1;
  v2 = *(void (**)(void))(a1 + 4280);
  if ( v2 )
  {
    v2();
    *(uint *)(v1 + 4280) = 0;
  }
  Function_201dcac();
  Function_200a858();
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (0223C01C) --------------------------------------------------------
char *Function_223c01c()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_2245A1C;
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

//----- (0223C03C) --------------------------------------------------------
int __fastcall Function_223c03c(int *a1, int a2)
{
  int *v2;
  int result;

  v2 = a1;
  *a1 = LoadPtrToOverWorldDataIn18(a2);
  v2[5] = 0;
  Function_223c4c0(v2);
  *((ushort *)v2 + 136) = 0;
  *((ushort *)v2 + 1471) = 0;
  *((uchar *)v2 + 2944) = 3;
  *((uchar *)v2 + 2945) = 0;
  *((uchar *)v2 + 2946) = 0;
  *((ushort *)v2 + 1474) = 0;
  *((ushort *)v2 + 2120) = 0;
  *((ushort *)v2 + 138) = 18;
  *((ushort *)v2 + 2134) = 0;
  *((ushort *)v2 + 2135) = 0;
  *((ushort *)v2 + 2121) = 0;
  v2[1055] = 0;
  result = 4432;
  v2[1108] = 0;
  return result;
}

//----- (0223C0A0) --------------------------------------------------------
void Function_223c0a0()
{
  ;
}

//----- (0223C0A4) --------------------------------------------------------
int Function_223c0a4()
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = 20;
  v2 = 2048;
  v3 = 2048;
  v4 = 62;
  Function_201e86c(&v1);
  Function_201f834(20, 0x3Eu);
  Function_201e994();
  return Function_201f8e4();
}

//----- (0223C0D4) --------------------------------------------------------
uint __fastcall Function_223c0d4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  int v9;
  ushort *v10;
  int v11;
  int v13;
  int *v14;
  int v15;
  int v16;

  v16 = a4;
  v4 = a1;
  v14 = LoadFromNARC_8(104, 0x3Eu, a3, a4);
  Function_20a7944();
  Function_200a784(0, 126, 0, 32, 0, 0x7Eu, 0, 0x20u, 0x3Eu);
  *(uint *)(v4 + 3048) = Function_20095c4(78, v4 + 3052, 62, v5);
  Function_200964c(v4 + 3052, 0, 0x100000, v6);
  v7 = 0;
  v8 = v4;
  do
  {
    *(uint *)(v8 + 3348) = Function_2009714(3, v7, 0x3Eu);
    v7 = (int *)((char *)v7 + 1);
    v8 += 4;
  }
  while ( (int)v7 < 4 );
  *(uint *)(v4 + 3364) = Function_2009a4c(*(uint *)(v4 + 3348), (int)v14, 0x12u, 1, 0, 1, 0x3Eu);
  *(uint *)(v4 + 3368) = Function_2009b04(*(uint *)(v4 + 3352), (int)v14, 9u, 0, 0, 1, 3, 0x3Eu);
  *(uint *)(v4 + 3372) = Function_2009bc4(*(uint *)(v4 + 3356), (int)v14, 0x13u, 1, 0, 2u, 0x3Eu);
  *(uint *)(v4 + 3376) = Function_2009bc4(*(uint *)(v4 + 3360), (int)v14, 0x14u, 1, 0, 3u, 0x3Eu);
  *(uint *)(v4 + 3380) = Function_2009a4c(*(uint *)(v4 + 3348), (int)v14, 0x20u, 1, 1, 2, 0x3Eu);
  *(uint *)(v4 + 3384) = Function_2009b04(*(uint *)(v4 + 3352), (int)v14, 8u, 0, 1, 2, 9, 0x3Eu);
  *(uint *)(v4 + 3388) = Function_2009bc4(*(uint *)(v4 + 3356), (int)v14, 0x21u, 1, 1, 2u, 0x3Eu);
  *(uint *)(v4 + 3392) = Function_2009bc4(*(uint *)(v4 + 3360), (int)v14, 0x22u, 1, 1, 3u, 0x3Eu);
  Function_200a328(*(int **)(v4 + 3364));
  Function_200a328(*(int **)(v4 + 3380));
  Function_200a5c8(*(int **)(v4 + 3368));
  Function_200a5c8(*(int **)(v4 + 3384));
  v9 = Function_2079fd0();
  v13 = Function_2006f88(19, v9, &v15, 62);
  DC_FlushRange(*(uint *)(v15 + 12), 96);
  GX_LoadOBJPltt(*(uint *)(v15 + 12), 96, 0x60u);
  v10 = *(ushort **)(v15 + 12);
  v11 = 0;
  do
  {
    ++v11;
    *v10 = ((((int)(ushort)*v10 >> 10) & 0x1F) / 2 << 10) | 32
                                                                           * ((((int)(ushort)*v10 >> 5) & 0x1F)
                                                                            / 2) | (*v10 & 0x1F) / 2;
    ++v10;
  }
  while ( v11 < 48 );
  DC_FlushRange(*(uint *)(v15 + 12), 96);
  GX_LoadOBJPltt(*(uint *)(v15 + 12), 192, 0x60u);
  free(v13);
  return Call_FS_CloseFile(v14);
}

//----- (0223C300) --------------------------------------------------------
int __fastcall Function_223c300(int result, int a2, int a3, int a4)
{
  *(uint *)result = *(uint *)(a2 + 3048);
  *(uint *)(result + 4) = a3;
  *(uint *)(result + 16) = 0;
  *(uint *)(result + 20) = 4096;
  *(uint *)(result + 24) = 4096;
  *(uint *)(result + 28) = 4096;
  *(ushort *)(result + 32) = 0;
  *(uint *)(result + 36) = 1;
  *(uint *)(result + 40) = a4;
  *(uint *)(result + 44) = 62;
  return result;
}

//----- (0223C32C) --------------------------------------------------------
uint __fastcall Function_223c32c(int *a1)
{
  int *v1;

  v1 = a1;
  Function_20093b4((int)(a1 + 853), 0, 0, 0, 0, -1, -1, 0, 0, a1[837], a1[838], a1[839], a1[840], 0, 0);
  Function_20093b4((int)(v1 + 862), 1, 1, 1, 1, -1, -1, 0, 0, v1[837], v1[838], v1[839], v1[840], 0, 0);
  Function_201ff0c(0x10u, 1);
  return Function_201ff74(0x10u, 1);
}

//----- (0223C3C0) --------------------------------------------------------
int __fastcall Function_223c3c0(uint *a1, char a2, short a3, int a4)
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
  return Function_2002100(a1, (uchar *)&v5, 31, 11, 0x3Eu);
}

//----- (0223C3F4) --------------------------------------------------------
int __fastcall Function_223c3f4(int result, int a2, int a3)
{
  *(uint *)(result + 44) = a2;
  *(uint *)(result + 48) = a3;
  return result;
}

//----- (0223C3FC) --------------------------------------------------------
int __fastcall Function_223c3fc(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint v12;
  uint v13;
  int v14;

  v3 = a1;
  v4 = a3;
  if ( a2 <= 0 )
  {
    v7 = fflt(a2 << 12);
    v6 = fsub(v7, 1056964608);
  }
  else
  {
    v5 = fflt(a2 << 12);
    v6 = fadd(0x3F000000u, v5);
  }
  v12 = ffix(v6);
  if ( v4 <= 0 )
  {
    v10 = fflt(v4 << 12);
    v9 = fsub(v10, 1056964608);
  }
  else
  {
    v8 = fflt(v4 << 12);
    v9 = fadd(0x3F000000u, v8);
  }
  v13 = ffix(v9);
  v14 = 0;
  return Function_2021c50(v3, (int *)&v12);
}

//----- (0223C468) --------------------------------------------------------
int __fastcall Function_223c468(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;

  v3 = a2;
  v4 = a3;
  v5 = OS_DisableInterrupts();
  v6 = NNS_FndAllocFromExpHeapEx(dword_2246B40[49], v3, v4);
  OS_RestoreInterrupts(v5);
  return v6;
}

//----- (0223C490) --------------------------------------------------------
void __fastcall Function_223c490(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  if ( a2 )
  {
    v3 = OS_DisableInterrupts();
    Function_20a55d8(dword_2246B40[49], v2, v4, v5);
    OS_RestoreInterrupts(v3);
  }
}

//----- (0223C4B4) --------------------------------------------------------
int Function_223c4b4()
{
  return 3 - ((int (*)(void))dword_21D7EAC[0])();
}

//----- (0223C4C0) --------------------------------------------------------
int __fastcall Function_223c4c0(int result, int a2, int a3)
{
  *(uint *)(result + 24) = a2;
  *(uint *)(result + 36) = a3;
  return result;
}

//----- (0223C4C8) --------------------------------------------------------
uint *__fastcall Function_223c4c8(uint *result)
{
  result[8] = result[5];
  result[5] = result[6];
  return result;
}

//----- (0223C4D4) --------------------------------------------------------
int __fastcall Function_223c4d4(int a1)
{
  return Function_2027ac0(*(ushort **)(*(uint *)a1 + 36));
}

//----- (0223C4E0) --------------------------------------------------------
int __fastcall Function_223c4e0(int *a1)
{
  int *v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  Function_223c01c();
  Function_223c0a4();
  Function_223c0d4((int)v1, v2, v3, v4);
  Function_223c32c(v1);
  return SetMainLoopFunctionCall((int)Function_223bfe4, (int)v1);
}

//----- (0223C508) --------------------------------------------------------
int *__fastcall Function_223c508(int **a1)
{
  int **v1;
  int v2;
  int **v3;

  v1 = a1;
  ((void (*)(void))loc_22443B4)();
  Function_200a4e4(v1[841]);
  Function_200a4e4(v1[845]);
  Function_200a6dc(v1[842]);
  Function_200a6dc(v1[846]);
  v2 = 0;
  v3 = v1;
  do
  {
    Function_2009754(v3[837]);
    ++v2;
    ++v3;
  }
  while ( v2 < 4 );
  Function_2021964(v1[762]);
  v1[762] = 0;
  Function_200a878();
  Function_201e958();
  return Function_201f8b4();
}

//----- (0223C578) --------------------------------------------------------
int __fastcall Function_223c578(int result)
{
  if ( *(ushort *)(result + 58) )
    --*(ushort *)(result + 58);
  return result;
}

//----- (0223C584) --------------------------------------------------------
int __fastcall Function_223c584(int result)
{
  *(ushort *)(result + 4270) = 1;
  *(ushort *)(result + 4268) = 0;
  return result;
}

//----- (0223C598) --------------------------------------------------------
int __fastcall Function_223c598(ushort *a1)
{
  ushort *v1;
  int result;

  v1 = a1;
  result = 4270;
  if ( v1[2135] )
  {
    v1[2134] += Function_2079b54(*(uint **)(*(uint *)v1 + 12), (ushort)v1[2135] - 1);
    result = (ushort)++v1[2135];
    if ( result == 19 )
    {
      result = 4270;
      v1[2135] = 0;
    }
  }
  return result;
}

//----- (0223C5D8) --------------------------------------------------------
int __fastcall Function_223c5d8(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = Function_200e7fc((int *)(a1 + 3836), 1);
  *(uint *)(v1 + 4220) = result;
  return result;
}

//----- (0223C5F4) --------------------------------------------------------
int __fastcall Function_223c5f4(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = *(uint *)(a1 + 4220);
  if ( result )
  {
    Function_200eba0(result);
    result = 4220;
    *(uint *)(v1 + 4220) = 0;
  }
  return result;
}

//----- (0223C610) --------------------------------------------------------
int __fastcall Function_223c610(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  Function_223cb0c();
  Function_223c720(*(uint *)(v1 + 4));
  Function_223c888(v1);
  Function_223c9c0(v1);
  Function_223c950(v1);
  ((void (__fastcall *)(int))loc_2245930)(v1);
  Function_223cf3c(v1);
  Function_2004550(0x17u, 0x449u);
  if ( *(ushort *)(v1 + 52) )
  {
    if ( *(uint *)(v1 + 4272) == 1 )
      Function_200f174(0, 1, 1, 0, 6, 1, 62);
    else
      Function_200f174(3u, 1, 1, 0, 6, 1, 62);
    *(uint *)(v1 + 44) = 5;
  }
  else
  {
    Function_223c85c(v1);
    Function_200f174(0, 1, 1, 0, 6, 1, 62);
    *(uint *)(v1 + 44) = 0;
    *(ushort *)(v1 + 52) = 1;
    v2 = GetGender(*(uint *)(*(uint *)v1 + 28));
    ((void (__fastcall *)(int, int))loc_2243FA4)(v1, v2);
  }
  *(uint *)(v1 + 4272) = 0;
  return 2;
}

//----- (0223C6D4) --------------------------------------------------------
int __fastcall Function_223c6d4(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_223c4b4();
  Function_20397b0(v2);
  return ((int (__fastcall *)(int))*(&off_22467C4 + *(uint *)(v1 + 44)))(v1);
}

//----- (0223C6F4) --------------------------------------------------------
int __fastcall Function_223c6f4(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_2039794();
  Function_223c9b0(v1);
  Function_223cb34(v1);
  Function_223cac8(v1);
  Function_223c830(v1[1]);
  Function_223c4c8(v1);
  return 1;
}

//----- (0223C720) --------------------------------------------------------
uint __fastcall Function_223c720(uint *a1)
{
  uint *v1;
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

  v1 = a1;
  v38 = 1;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  SetGraphicsModes(&v38);
  v31 = 0;
  v32 = 0;
  v33 = 2048;
  v34 = 0;
  v35 = 2031617;
  v36 = 0;
  v37 = 0;
  Function_20183c4(v1, 0, &v31, 0);
  Function_2019ebc(v1, 0);
  v24 = 0;
  v25 = 0;
  v26 = 2048;
  v27 = 0;
  v28 = 35520513;
  v29 = 256;
  v30 = 0;
  Function_20183c4(v1, 1u, &v24, 0);
  v17 = 0;
  v18 = 0;
  v19 = 2048;
  v20 = 0;
  v21 = 35454977;
  v22 = 256;
  v23 = 0;
  Function_20183c4(v1, 2u, &v17, 0);
  v10 = 0;
  v11 = 0;
  v12 = 2048;
  v13 = 0;
  v14 = 69074945;
  v15 = 0;
  v16 = 0;
  Function_20183c4(v1, 4u, &v10, 0);
  Function_2019ebc(v1, 4u);
  v3 = 0;
  v4 = 0;
  v5 = 2048;
  v6 = 0;
  v7 = 1835265;
  v8 = 512;
  v9 = 0;
  Function_20183c4(v1, 5u, &v3, 0);
  Function_2019690(0, 32, 0, 0x3Eu);
  Function_2019690(4u, 32, 0, 0x3Eu);
  Function_201ff0c(0x10u, 1);
  return Function_201ff74(0x10u, 1);
}

//----- (0223C830) --------------------------------------------------------
int __fastcall Function_223c830(int a1)
{
  int v1;

  v1 = a1;
  Function_2019044(a1, 5);
  Function_2019044(v1, 4);
  Function_2019044(v1, 2);
  Function_2019044(v1, 1);
  return Function_2019044(v1, 0);
}

//----- (0223C85C) --------------------------------------------------------
uint __fastcall Function_223c85c(int a1)
{
  int v1;

  v1 = a1;
  Function_201ff0c(1u, 0);
  Function_201ff0c(2u, 0);
  Function_201ff0c(4u, 0);
  return Function_2021cac(*(uint *)(v1 + 3520), 0);
}

//----- (0223C888) --------------------------------------------------------
uint __fastcall Function_223c888(int a1, int a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int *v6;
  uchar v7;

  v4 = a1;
  v5 = *(uint **)(a1 + 4);
  v6 = LoadFromNARC_8(104, 0x3Eu, a3, a4);
  Function_2007130((int)v6, 4u, 0, 0, 96, 62);
  LoadFromNARC_PlFont2(0, 416, 62);
  v7 = Function_2027b50(*(ushort **)(*(uint *)v4 + 36));
  Function_200dd0c(v5, 0, 1, 10, v7, 62);
  Function_200daa4(v5, 0, 31, 11, 0, 62);
  Function_20070e8((int)v6, 0xEu, v5, 1u, 0, 3072, 1, 62);
  Function_200710c((int)v6, 0x1Eu, v5, 1u, 0, 1536, 1, 62);
  Function_200710c((int)v6, 0x1Du, v5, 2u, 0, 1536, 1, 62);
  Function_223d068(v4);
  return Call_FS_CloseFile(v6);
}

//----- (0223C950) --------------------------------------------------------
int __fastcall Function_223c950(int a1)
{
  int v1;
  char v3;
  int v4;
  int v5;

  v1 = a1;
  Function_223c300((int)&v3, v1, v1 + 3412, 1);
  v4 = (ushort)a2822[2 * *(ushort *)(v1 + 272)] << 12;
  v5 = (ushort)a2822[2 * *(ushort *)(v1 + 272) + 1] << 12;
  *(uint *)(v1 + 3520) = Function_2021aa0((uint **)&v3);
  Function_2021cc8(*(uint *)(v1 + 3520), 1);
  return Function_2021d6c(*(uint *)(v1 + 3520), 1u);
}

//----- (0223C9B0) --------------------------------------------------------
int __fastcall Function_223c9b0(int a1)
{
  return Function_2021bd4(*(uint *)(a1 + 3520));
}

//----- (0223C9C0) --------------------------------------------------------
int __fastcall Function_223c9c0(int a1)
{
  int v1;
  int v2;
  short v3;
  char v4;
  int v5;
  int v7;

  v1 = a1;
  Function_201a7e8(*(uint **)(a1 + 4), a1 + 3868, 0, 1, 1, 0x1Cu, 2u, 13, 40);
  Function_201ada4_ClearTextBox(v1 + 3868, 0);
  v2 = *(uint *)(v1 + 2996);
  Function_201d78c(v1 + 3868, 1);
  v7 = 0;
  v3 = 97;
  v4 = 6;
  v5 = v1 + 3900;
  do
  {
    Function_201a7e8(*(uint **)(v1 + 4), v5, 1, 9, v4, 0xFu, 2u, 13, v3);
    Function_201ada4_ClearTextBox(v5, 0);
    v3 += 30;
    v4 += 5;
    v5 += 16;
    ++v7;
  }
  while ( v7 < 3 );
  Function_201a7e8(*(uint **)(v1 + 4), v1 + 3836, 0, 2, 21, 0x1Bu, 2u, 13, 96);
  Function_201ada4_ClearTextBox(v1 + 3836, 15);
  Function_201a7e8(*(uint **)(v1 + 4), v1 + 4156, 0, 2, 19, 0x1Bu, 4u, 13, 150);
  return Function_201ada4_ClearTextBox(v1 + 4156, 15);
}

//----- (0223CAC8) --------------------------------------------------------
uint __fastcall Function_223cac8(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  Function_201a8fc(a1 + 4156);
  Function_201a8fc(v1 + 3836);
  v2 = 0;
  v3 = v1 + 3900;
  do
  {
    Function_201a8fc(v3);
    ++v2;
    v3 += 16;
  }
  while ( v2 < 3 );
  return Function_201a8fc(v1 + 3868);
}

//----- (0223CB0C) --------------------------------------------------------
ushort *__fastcall Function_223cb0c(int a1)
{
  int v1;
  ushort *result;

  v1 = a1;
  *(uint *)(a1 + 2992) = Function_2023790(180, 0x3Eu);
  result = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 2964), 0x27u);
  *(uint *)(v1 + 2996) = result;
  return result;
}

//----- (0223CB34) --------------------------------------------------------
uint __fastcall Function_223cb34(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  Function_20237bc_FreeMsg(*(uint *)(a1 + 2992), a2);
  return Function_20237bc_FreeMsg(*(uint *)(v2 + 2996), v3);
}

//----- (0223CB50) --------------------------------------------------------
int __fastcall Function_223cb50(int a1)
{
  int v1;

  v1 = a1;
  if ( *(ushort *)(a1 + 4240) )
  {
    Function_201ff0c(1u, 0);
    Function_201ff0c(2u, 0);
    Function_201ff0c(4u, 0);
    Function_223c4c0(v1, 7, 11);
    *(uint *)(v1 + 28) = 1;
    *(uint *)(v1 + 44) = 9;
  }
  return 3;
}

//----- (0223CB90) --------------------------------------------------------
int __fastcall Function_223cb90(int a1)
{
  Function_223c3f4(a1, 10, 2);
  return 3;
}

//----- (0223CBA0) --------------------------------------------------------
int __fastcall Function_223cba0(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_200f174(3u, 1, 1, 0, 6, 1, 62);
  result = 3;
  *(uint *)(v1 + 44) = 3;
  return result;
}

//----- (0223CBC4) --------------------------------------------------------
int __fastcall Function_223cbc4(int a1)
{
  int v1;

  v1 = a1;
  if ( Function_200f2ac() )
    *(uint *)(v1 + 44) = 5;
  return 3;
}

//----- (0223CBD8) --------------------------------------------------------
int __fastcall Function_223cbd8(int a1)
{
  int v1;

  v1 = a1;
  if ( Function_200f2ac() )
    *(uint *)(v1 + 44) = 5;
  return 3;
}

//----- (0223CBEC) --------------------------------------------------------
int __fastcall Function_223cbec(int a1)
{
  int v1;

  v1 = a1;
  Function_223cf80(a1);
  Function_223c3f4(v1, 10, 6);
  Function_2021cc8(*(uint *)(v1 + 3520), 1);
  Function_223c584(v1);
  return 3;
}

//----- (0223CC28) --------------------------------------------------------
int __fastcall Function_223cc28(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  if ( dword_21BF6C4 & 2 )
  {
    v2 = Function_223c4d4(a1);
    Function_223cfd8(v1, 7, v2, 0, 3855);
    Function_223c3f4(v1, 10, 12);
    Function_2021cc8(*(uint *)(v1 + 3520), 0);
  }
  else if ( dword_21BF6C4 & 1 )
  {
    v3 = *(ushort *)(a1 + 272);
    if ( *(ushort *)(a1 + 272) )
    {
      if ( v3 == 1 )
      {
        Function_223c4c0(a1, 4, 0);
        *(uint *)(v1 + 44) = 9;
        Function_2005748(0x5DCu);
      }
      else if ( v3 == 2 )
      {
        v4 = Function_223c4d4(a1);
        Function_223cfd8(v1, 7, v4, 0, 3855);
        Function_223c3f4(v1, 10, 12);
        Function_2021cc8(*(uint *)(v1 + 3520), 0);
        Function_2005748(0x5DCu);
      }
    }
    else if ( *(ushort *)(a1 + 54) )
    {
      if ( *(ushort *)(a1 + 58) )
      {
        Function_2021cc8(*(uint *)(a1 + 3520), 0);
        Function_223cf80(v1);
        Function_223c3f4(v1, 11, 5);
        Function_2005748(0x5F3u);
        *(uint *)(v1 + 4224) = 0;
      }
      else
      {
        Function_223c4c0(a1, 7, 11);
        *(uint *)(v1 + 28) = 2;
        *(uint *)(v1 + 44) = 9;
        *(ushort *)(v1 + 58) = 1800;
        Function_2005748(0x5DCu);
      }
    }
    else
    {
      Function_223c4c0(a1, 5, 5);
      *(uint *)(v1 + 44) = 9;
      Function_2005748(0x5DCu);
    }
  }
  else if ( dword_21BF6C4 & 0x40 )
  {
    if ( *(ushort *)(a1 + 272) )
    {
      --*(ushort *)(a1 + 272);
      Function_2005748(0x5DCu);
      Function_223c3fc(
        *(uint **)(v1 + 3520),
        (ushort)a2822[2 * *(ushort *)(v1 + 272)],
        (ushort)a2822[2 * *(ushort *)(v1 + 272) + 1]);
    }
  }
  else if ( dword_21BF6C4 & 0x80 && *(ushort *)(a1 + 272) < 2u )
  {
    ++*(ushort *)(a1 + 272);
    Function_2005748(0x5DCu);
    Function_223c3fc(
      *(uint **)(v1 + 3520),
      (ushort)a2822[2 * *(ushort *)(v1 + 272)],
      (ushort)a2822[2 * *(ushort *)(v1 + 272) + 1]);
  }
  return 3;
}

//----- (0223CDD8) --------------------------------------------------------
int __fastcall Function_223cdd8(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = GetGender(*(uint *)(*(uint *)a1 + 28));
  ((void (__fastcall *)(int, int))loc_22440B4)(v1, v2);
  *(uint *)(v1 + 44) = 8;
  *(ushort *)(v1 + 4240) = 0;
  return 3;
}

//----- (0223CE00) --------------------------------------------------------
int __fastcall Function_223ce00(int a1)
{
  if ( *(ushort *)(a1 + 4240) )
    *(uint *)(a1 + 44) = 9;
  return 3;
}

//----- (0223CE14) --------------------------------------------------------
int __fastcall Function_223ce14(int a1)
{
  int v1;

  v1 = a1;
  if ( *(uint *)(a1 + 24) )
    Function_200f174(3u, 0, 0, 0, 6, 1, 62);
  else
    Function_200f174(0, 0, 0, 0, 6, 1, 62);
  *(uint *)(v1 + 44) = 0;
  return 4;
}

//----- (0223CE5C) --------------------------------------------------------
int __fastcall Function_223ce5c(int a1, int a2, int a3, int a4)
{
  int v4;

  v4 = a1;
  *(uint *)(a1 + 4208) = Function_223c3c0(*(uint **)(a1 + 4), 13, 258, a4);
  *(uint *)(v4 + 44) = 13;
  return 3;
}

//----- (0223CE7C) --------------------------------------------------------
int __fastcall Function_223ce7c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_2002114(*(uint *)(a1 + 4208), 0x3Eu);
  if ( v2 != -1 )
  {
    if ( v2 == -2 )
    {
      Function_200e084(v1 + 4156, 1);
      Function_201acf4(v1 + 4156);
      Function_2021cc8(*(uint *)(v1 + 3520), 1);
      *(uint *)(v1 + 44) = 5;
    }
    else
    {
      Function_200e084(v1 + 4156, 1);
      Function_201acf4(v1 + 4156);
      Function_223c4c0(v1, 0, 0);
      *(uint *)(v1 + 44) = 7;
    }
  }
  return 3;
}

//----- (0223CEE8) --------------------------------------------------------
int __fastcall Function_223cee8(int a1)
{
  int v1;

  v1 = a1;
  if ( !Function_201d724(*(uint *)(a1 + 3044) & 0xFF) )
    *(uint *)(v1 + 44) = *(uint *)(v1 + 48);
  return 3;
}

//----- (0223CF08) --------------------------------------------------------
int __fastcall Function_223cf08(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( !Function_201d724(a1[761] & 0xFF) && ++v1[1056] > 45 )
  {
    v1[1056] = 0;
    v1[11] = v1[12];
  }
  return 3;
}

//----- (0223CF3C) --------------------------------------------------------
int __fastcall Function_223cf3c(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int v5;
  int result;

  v1 = a1;
  v2 = &dword_2245A60[3 * *(ushort *)(a1 + 54)];
  v3 = 0;
  v4 = a1 + 3900;
  do
  {
    Function_223d030(v4, *(uint *)(v1 + 2964), *v2, 3855);
    result = Function_201a954(v4, v5);
    ++v3;
    ++v2;
    v4 += 16;
  }
  while ( v3 < 3 );
  return result;
}

//----- (0223CF80) --------------------------------------------------------
int __fastcall Function_223cf80(int a1, uint a2)
{
  int v2;
  int v3;
  int result;

  v2 = a1;
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(a1 + 2964), a2, *(ushort **)(a1 + 2992));
  Function_201ada4_ClearTextBox(v2 + 3836, 15);
  Function_200e060(v2 + 3836, 0, 1, 0xAu);
  v3 = *(uint *)(v2 + 2992);
  result = Function_201d738_CallInitTextInterpreter(v2 + 3836, 1);
  *(uint *)(v2 + 3044) = result;
  return result;
}

//----- (0223CFD8) --------------------------------------------------------
int __fastcall Function_223cfd8(int a1, uint a2)
{
  int v2;
  int v3;
  int result;

  v2 = a1;
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(a1 + 2964), a2, *(ushort **)(a1 + 2992));
  Function_201ada4_ClearTextBox(v2 + 4156, 15);
  Function_200e060(v2 + 4156, 0, 1, 0xAu);
  v3 = *(uint *)(v2 + 2992);
  result = Function_201d738_CallInitTextInterpreter(v2 + 4156, 1);
  *(uint *)(v2 + 3044) = result;
  return result;
}

//----- (0223D030) --------------------------------------------------------
uint __fastcall Function_223d030(int a1, ushort **a2, uint a3, uchar a4)
{
  int v4;
  uchar v5;
  ushort *v6;
  int v7;

  v4 = a1;
  v5 = a4;
  v6 = Function_200b1ec_CallMsgDecrypt(a2, a3);
  Function_201ada4_ClearTextBox(v4, v5);
  Function_201d738_CallInitTextInterpreter(v4, 1);
  return Function_20237bc_FreeMsg((int)v6, v7);
}

//----- (0223D068) --------------------------------------------------------
int __fastcall Function_223d068(int a1)
{
  uint *v1;

  v1 = *(uint **)(a1 + 4);
  Call_LoadFromNARC_RLCN(104, 5, 4u, 0, 512, 62);
  LoadFromNARC_RGCN(104, 15, v1, 5u, 0, 43008, 1, 62);
  return LoadFromNARC_RCSN(104, 31, v1, 5u, 0, 1536, 1, 62);
}

//----- (0223D0C4) --------------------------------------------------------
int __fastcall Function_223d0c4(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  Function_223d53c();
  Function_223d1d4(*(uint *)(v1 + 4));
  Function_223d2e8(v1);
  Function_223d438(v1);
  Function_223d3dc(v1);
  Function_2076b10_Dummy();
  Function_223d910(*(uint *)(v1 + 2964), *(uint *)(v1 + 2968), *(uint *)(v1 + 2960), v1 + 3948, v2, v1 + 540);
  Function_223da78(*(uint *)(v1 + 2964), v1 + 4028, v1 + 572, v1 + 304, v1 + 4108);
  v3 = ((int (__fastcall *)(uint, uint, uint))loc_224296C)(*(char *)(v1 + 547), *(char *)(v1 + 548), 0);
  ((void (__fastcall *)(uint, uint, uint, int, uint, uint, int))loc_2242364)(
    *(uint *)(v1 + 2964),
    *(uint *)(v1 + 2968),
    *(uint *)(v1 + 2960),
    v1 + 4060,
    *(short *)(v1 + 544),
    *(char *)(v1 + 546),
    v3);
  Function_223db2c(v1 + 304);
  Function_200f174(3u, 1, 1, 0, 6, 1, 62);
  *(uint *)(v1 + 44) = 0;
  return 2;
}

//----- (0223D19C) --------------------------------------------------------
int __fastcall Function_223d19c(int a1)
{
  return ((int (*)(void))*(&off_2246808 + *(uint *)(a1 + 44)))();
}

//----- (0223D1B0) --------------------------------------------------------
int __fastcall Function_223d1b0(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_223d428();
  Function_223d57c(v1);
  Function_223d504(v1);
  Function_223d2bc(v1[1]);
  Function_223c4c8(v1);
  return 1;
}

//----- (0223D1D4) --------------------------------------------------------
uint __fastcall Function_223d1d4(uint *a1)
{
  uint *v1;
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

  v1 = a1;
  v31 = 0;
  v32 = 0;
  v33 = 2048;
  v34 = 0;
  v35 = 2031617;
  v36 = 0;
  v37 = 0;
  Function_20183c4(a1, 0, &v31, 0);
  Function_2019ebc(v1, 0);
  v24 = 0;
  v25 = 0;
  v26 = 2048;
  v27 = 0;
  v28 = 35520513;
  v29 = 256;
  v30 = 0;
  Function_20183c4(v1, 1u, &v24, 0);
  v17 = 0;
  v18 = 0;
  v19 = 2048;
  v20 = 0;
  v21 = 35454977;
  v22 = 256;
  v23 = 0;
  Function_20183c4(v1, 2u, &v17, 0);
  v10 = 0;
  v11 = 0;
  v12 = 2048;
  v13 = 0;
  v14 = 69074945;
  v15 = 0;
  v16 = 0;
  Function_20183c4(v1, 4u, &v10, 0);
  Function_2019ebc(v1, 4u);
  v3 = 0;
  v4 = 0;
  v5 = 2048;
  v6 = 0;
  v7 = 1835265;
  v8 = 512;
  v9 = 0;
  Function_20183c4(v1, 5u, &v3, 0);
  Function_2019690(0, 32, 0, 0x3Eu);
  return Function_2019690(4u, 32, 0, 0x3Eu);
}

//----- (0223D2BC) --------------------------------------------------------
int __fastcall Function_223d2bc(int a1)
{
  int v1;

  v1 = a1;
  Function_2019044(a1, 5);
  Function_2019044(v1, 4);
  Function_2019044(v1, 2);
  Function_2019044(v1, 1);
  return Function_2019044(v1, 0);
}

//----- (0223D2E8) --------------------------------------------------------
uint __fastcall Function_223d2e8(int a1, int a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int *v6;
  uchar v7;

  v4 = a1;
  v5 = *(uint **)(a1 + 4);
  v6 = LoadFromNARC_8(104, 0x3Eu, a3, a4);
  Function_2007130((int)v6, 7u, 0, 0, 96, 62);
  Function_2007130((int)v6, 5u, 4u, 0, 256, 62);
  LoadFromNARC_PlFont2(0, 416, 62);
  v7 = Function_2027b50(*(ushort **)(*(uint *)v4 + 36));
  Function_200dd0c(v5, 0, 1, 10, v7, 62);
  Function_200daa4(v5, 0, 31, 11, 0, 62);
  Function_20070e8((int)v6, 0x11u, v5, 1u, 0, 2560, 1, 62);
  Function_200710c((int)v6, 0x19u, v5, 1u, 0, 1536, 1, 62);
  Function_20070e8((int)v6, 0xFu, v5, 5u, 0, 43008, 1, 62);
  Function_200710c((int)v6, 0x1Fu, v5, 5u, 0, 1536, 1, 62);
  return Call_FS_CloseFile(v6);
}

//----- (0223D3DC) --------------------------------------------------------
int __fastcall Function_223d3dc(int a1)
{
  int v1;
  char v3;
  int v4;
  int v5;

  v1 = a1;
  Function_223c300((int)&v3, v1, v1 + 3412, 1);
  v4 = 851968;
  v5 = 237568;
  *(uint *)(v1 + 3792) = Function_2021aa0((uint **)&v3);
  Function_2021cc8(*(uint *)(v1 + 3792), 1);
  Function_2021d6c(*(uint *)(v1 + 3792), 0x25u);
  return Function_2039734();
}

//----- (0223D428) --------------------------------------------------------
int __fastcall Function_223d428(int a1)
{
  return Function_2021bd4(*(uint *)(a1 + 3792));
}

//----- (0223D438) --------------------------------------------------------
int __fastcall Function_223d438(int a1)
{
  int *v1;
  short v2;
  int v3;
  int v4;
  int result;
  int v6;

  v6 = a1;
  Function_201a7e8(*(uint **)(a1 + 4), a1 + 3836, 0, 2, 21, 0x1Bu, 2u, 13, 40);
  Function_201ada4_ClearTextBox(v6 + 3836, 0);
  Function_201a7e8(*(uint **)(v6 + 4), v6 + 3900, 0, 21, 15, 0xAu, 4u, 13, 94);
  v1 = &dword_2245B90;
  v2 = 134;
  v3 = 0;
  v4 = v6 + 3948;
  do
  {
    Function_201a7e8(*(uint **)(v6 + 4), v4, 0, *v1, v1[1], v1[2], v1[3], 13, v2);
    Function_201ada4_ClearTextBox(v4, 0);
    ++v3;
    result = v1[3] * v1[2];
    v2 += result;
    v1 += 4;
    v4 += 16;
  }
  while ( v3 < 12 );
  return result;
}

//----- (0223D504) --------------------------------------------------------
uint __fastcall Function_223d504(int a1)
{
  int v1;
  int v2;
  int v3;
  uint result;

  v1 = a1;
  Function_201a8fc(a1 + 3836);
  Function_201a8fc(v1 + 3900);
  v2 = 0;
  v3 = v1 + 3948;
  do
  {
    result = Function_201a8fc(v3);
    ++v2;
    v3 += 16;
  }
  while ( v2 < 12 );
  return result;
}

//----- (0223D53C) --------------------------------------------------------
int __fastcall Function_223d53c(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  *(uint *)(a1 + 2992) = Function_2023790(180, 0x3Eu);
  v2 = 0;
  *(uint *)(v1 + 2996) = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 2964), 0x27u);
  do
  {
    result = Function_2023790(20, 0x3Eu);
    *(uint *)(v1 + 3000) = result;
    ++v2;
    v1 += 4;
  }
  while ( v2 < 10 );
  return result;
}

//----- (0223D57C) --------------------------------------------------------
uint __fastcall Function_223d57c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = 0;
  v4 = a1;
  do
  {
    Function_20237bc_FreeMsg(*(uint *)(v4 + 3000), a2);
    ++v3;
    v4 += 4;
  }
  while ( v3 < 10 );
  Function_20237bc_FreeMsg(*(uint *)(v2 + 2992), a2);
  return Function_20237bc_FreeMsg(*(uint *)(v2 + 2996), v5);
}

//----- (0223D5B0) --------------------------------------------------------
int __fastcall Function_223d5b0(int a1)
{
  *(uint *)(a1 + 44) = 1;
  return 3;
}

//----- (0223D5B8) --------------------------------------------------------
int __fastcall Function_223d5b8(int a1)
{
  int v1;

  v1 = a1;
  if ( dword_21BF6C4 & 1 )
  {
    Function_223d88c(a1, 5);
    Function_223c3f4(v1, 3, 7);
    Function_2005748(0x5DCu);
  }
  else if ( dword_21BF6C4 & 2 )
  {
    *(uint *)(a1 + 44) = 2;
    Function_223c4c0(a1, 1, 0);
    Function_2005748(0x5DCu);
  }
  return 3;
}

//----- (0223D618) --------------------------------------------------------
int __fastcall Function_223d618(int a1)
{
  int v1;

  v1 = a1;
  Function_200f174(3u, 0, 0, 0, 6, 1, 62);
  *(uint *)(v1 + 44) = 0;
  return 4;
}

//----- (0223D640) --------------------------------------------------------
int __fastcall Function_223d640(int a1, int a2, int a3, int a4)
{
  int v4;

  v4 = a1;
  *(uint *)(a1 + 4208) = Function_223c3c0(*(uint **)(a1 + 4), 15, 346, a4);
  *(uint *)(v4 + 44) = 6;
  return 3;
}

//----- (0223D664) --------------------------------------------------------
int __fastcall Function_223d664(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_2002114(*(uint *)(a1 + 4208), 0x3Eu);
  if ( v2 != -1 )
  {
    if ( v2 == -2 )
    {
      *(uint *)(v1 + 44) = 0;
      Function_200e084(v1 + 3836, 0);
    }
    else
    {
      *(uint *)(v1 + 44) = 2;
      *(uint *)(v1 + 4272) = 1;
      Function_223c4c0(v1, 7, 8);
    }
    Function_223dbbc(v1);
  }
  return 3;
}

//----- (0223D6B8) --------------------------------------------------------
int __fastcall Function_223d6b8(int a1, int a2, int a3, int a4)
{
  int v4;
  int v6;
  int v7;
  char v8;
  char v9;
  char v10;
  char v11;
  int v12;

  v12 = a4;
  v4 = a1;
  v8 = 0;
  v9 = 1;
  v10 = 2;
  v11 = 0;
  *(uint *)(a1 + 4204) = Function_2013a04(2u, 0x3Eu);
  Function_2013a4c(*(uint **)(v4 + 4204), *(ushort ***)(v4 + 2964), 0x36u, 1);
  Function_2013a4c(*(uint **)(v4 + 4204), *(ushort ***)(v4 + 2964), 0x37u, 2);
  v6 = *(uint *)(v4 + 4204);
  v7 = v4 + 3900;
  Function_200dc48(v4 + 3900, 0, 31, 0xBu);
  *(uint *)(v4 + 4212) = Function_2001b7c(&v6, 9, 0, 0, 0x3Eu, 2);
  *(uint *)(v4 + 44) = 8;
  return 3;
}

//----- (0223D754) --------------------------------------------------------
int __fastcall Function_223d754(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_2001be0(*(uint *)(a1 + 4212));
  if ( v2 == 1 )
  {
    Function_2001bc4(*(uint *)(v1 + 4212), 0);
    Function_2013a3c(*(int **)(v1 + 4204));
    Function_200dc9c(v1 + 3900, 0);
    if ( ((int (__fastcall *)(int))loc_2241494)(v1 + 304) && GetNrOfPkmnInParty(*(uint *)(*(uint *)v1 + 8)) == 6 )
    {
      Function_223d88c(v1, 36);
      Function_223c3f4(v1, 3, 1);
      return 3;
    }
    Function_223d88c(v1, 6);
    Function_223c3f4(v1, 3, 5);
    Function_223dbbc(v1);
  }
  else if ( v2 == 2 || v2 == -2 )
  {
    Function_2001bc4(*(uint *)(v1 + 4212), 0);
    Function_2013a3c(*(int **)(v1 + 4204));
    Function_200dc9c(v1 + 3900, 0);
    *(uint *)(v1 + 44) = 2;
    Function_223c4c0(v1, 1, 0);
    Function_223dbbc(v1);
  }
  return 3;
}

//----- (0223D838) --------------------------------------------------------
int __fastcall Function_223d838(int a1)
{
  int v1;

  v1 = a1;
  if ( !Function_201d724(*(uint *)(a1 + 3044) & 0xFF) )
    *(uint *)(v1 + 44) = *(uint *)(v1 + 48);
  return 3;
}

//----- (0223D858) --------------------------------------------------------
int __fastcall Function_223d858(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( !Function_201d724(a1[761] & 0xFF) && ++v1[1056] > 45 )
  {
    v1[1056] = 0;
    v1[11] = v1[12];
  }
  return 3;
}

//----- (0223D88C) --------------------------------------------------------
uint __fastcall Function_223d88c(int a1, uint a2)
{
  int v2;
  uint v3;
  int v4;
  ushort *v5;
  int v6;

  v2 = a1;
  v3 = a2;
  Function_2076b10_Dummy();
  Function_200b538(*(uint *)(v2 + 2960), 0, v4);
  v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 2964), v3);
  Function_200c388(*(uint **)(v2 + 2960), *(uint *)(v2 + 2992), (int)v5);
  Function_201ada4_ClearTextBox(v2 + 3836, 15);
  Function_200e060(v2 + 3836, 0, 1, 0xAu);
  v6 = *(uint *)(v2 + 2992);
  *(uint *)(v2 + 3044) = Function_201d738_CallInitTextInterpreter(v2 + 3836, 1);
  return Function_20237bc_FreeMsg((int)v5, 3044);
}

//----- (0223D910) --------------------------------------------------------
uint __fastcall Function_223d910(ushort **a1, ushort **a2, uint *a3, int a4, int a5, short *a6)
{
  ushort **v6;
  ushort **v7;
  uint *v8;
  int v9;
  uint v10;
  int v11;
  ushort v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v23;
  ushort *v24;
  ushort *v25;
  ushort *v26;
  ushort *v27;
  ushort *v28;
  ushort *v29;

  v6 = a1;
  v7 = a2;
  v8 = a3;
  v9 = a4;
  v25 = (ushort *)Function_2023790(22, 0x3Eu);
  v24 = (ushort *)Function_2023790(18, 0x3Eu);
  GetBoxPkmnData(a5, 0x77u, v25);
  v10 = *a6;
  v23 = *((char *)a6 + 2);
  v11 = *((char *)a6 + 3);
  v12 = GetBoxPkmnData(a5, 6u, 0);
  v26 = Function_200b1ec_CallMsgDecrypt(v6, 0x46u);
  v28 = Function_200b1ec_CallMsgDecrypt(v6, dword_2245FD4[v23]);
  Function_200b60c((int)v8, 3u, v11, 3, 0, 1);
  v27 = Function_200b29c(v8, v6, 0x66u, 0x3Eu);
  v29 = Function_200b1ec_CallMsgDecrypt(v7, v10);
  Function_207cfa0(v24, v12, 0x3Eu);
  v13 = 0;
  v14 = v9;
  do
  {
    Function_201ada4_ClearTextBox(v14, 0);
    ++v13;
    v14 += 16;
  }
  while ( v13 < 5 );
  ((void (__fastcall *)(int, ushort *))loc_22458FC)(v9, v25);
  if ( v23 != 3 )
  {
    v15 = dword_22467FC[v23];
    ((void (__fastcall *)(int, ushort *, int))loc_22458FC)(v9, v28, 70);
  }
  ((void (__fastcall *)(int, ushort *))loc_22458FC)(v9 + 16, v29);
  ((void (__fastcall *)(int, ushort *))loc_22458FC)(v9 + 32, v27);
  ((void (__fastcall *)(int, ushort *))loc_22458FC)(v9 + 48, v26);
  ((void (__fastcall *)(int, ushort *))loc_22458FC)(v9 + 64, v24);
  Function_20237bc_FreeMsg((int)v26, v16);
  Function_20237bc_FreeMsg((int)v24, v17);
  Function_20237bc_FreeMsg((int)v27, v18);
  Function_20237bc_FreeMsg((int)v28, v19);
  Function_20237bc_FreeMsg((int)v25, v20);
  return Function_20237bc_FreeMsg((int)v29, v21);
}

//----- (0223DA78) --------------------------------------------------------
uint __fastcall Function_223da78(ushort **a1, int a2, ushort *a3, int *a4, int a5)
{
  ushort **v5;
  int v6;
  ushort *v7;
  int *v8;
  ushort *v9;
  ushort *v10;
  ushort *v11;
  ushort *v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  v9 = (ushort *)Function_2023790(16, 0x3Eu);
  v10 = (ushort *)Function_2023790(16, 0x3Eu);
  v11 = Function_200b1ec_CallMsgDecrypt(v5, 0x30u);
  Function_2023d28(v9, v7);
  v12 = Function_200b1ec_CallMsgDecrypt(v5, 0xACu);
  GetPkmnData(v8, 0x91u, v10);
  ((void (__fastcall *)(int, ushort *))loc_22458FC)(v6, v11);
  ((void (__fastcall *)(int, ushort *))loc_22458FC)(v6 + 16, v9);
  ((void (__fastcall *)(int, ushort *))loc_22458FC)(a5, v12);
  ((void (__fastcall *)(int, ushort *))loc_22458FC)(a5 + 16, v10);
  Function_20237bc_FreeMsg((int)v11, v13);
  Function_20237bc_FreeMsg((int)v9, v14);
  Function_20237bc_FreeMsg((int)v12, v15);
  return Function_20237bc_FreeMsg((int)v10, v16);
}

//----- (0223DB2C) --------------------------------------------------------
uint __fastcall Function_223db2c(int *a1)
{
  int *v1;
  int *v2;
  uint v3;
  int v4;
  char v6;
  ushort v7;
  ushort v8;

  v1 = a1;
  v2 = (int *)malloc(0x3Eu, 3200);
  Function_2075ef4((int)&v6, (int)v1, 2u);
  v3 = GetPkmnData(v1, 0, 0);
  v4 = GetPkmnData(v1, 5u, 0);
  Function_20136a4(*(ushort *)&v6, v7, 0x3Eu, 0, 0, 10, 10, (int)v2, v3, 0, 2, v4);
  DC_FlushRange((int)v2, 3200);
  GX_LoadOBJ(v2, 18944, 0xC80u);
  Call_LoadFromNARC_RLCN(*(ushort *)&v6, v8, 1u, 416, 32, 62);
  return free((int)v2);
}

//----- (0223DBBC) --------------------------------------------------------
int __fastcall Function_223dbbc(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = ((int (__fastcall *)(uint, uint, uint))loc_224296C)(*(char *)(a1 + 547), *(char *)(a1 + 548), 0);
  return ((int (__fastcall *)(uint, uint, uint, int, uint, uint, int))loc_2242364)(
           *(uint *)(v1 + 2964),
           *(uint *)(v1 + 2968),
           *(uint *)(v1 + 2960),
           v1 + 4060,
           *(short *)(v1 + 544),
           *(char *)(v1 + 546),
           v2);
}

//----- (0223DC04) --------------------------------------------------------
int __fastcall Function_223dc04(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  Function_223dfdc();
  Function_223dd1c(*(uint *)(v1 + 4));
  Function_223de04(v1);
  Function_223ded8(v1);
  Function_223de7c(v1);
  v2 = 292 * *(uint *)(v1 + 288);
  Function_2076b10_Dummy();
  Function_223d910(
    *(ushort ***)(v1 + 2964),
    *(ushort ***)(v1 + 2968),
    *(uint **)(v1 + 2960),
    v1 + 3948,
    v3,
    (short *)(v1 + 832 + v2));
  Function_223da78(
    *(ushort ***)(v1 + 2964),
    v1 + 4028,
    (ushort *)(v1 + 864 + 292 * *(uint *)(v1 + 288)),
    (int *)(v1 + 596 + 292 * *(uint *)(v1 + 288)),
    v1 + 4108);
  Function_223db2c((int *)(v1 + 596 + 292 * *(uint *)(v1 + 288)));
  Function_223e358(*(uint *)(v1 + 2964), v1 + 4060);
  Function_223e240(v1);
  Function_200f174(3u, 1, 1, 0, 6, 1, 62);
  *(uint *)(v1 + 44) = 0;
  return 2;
}

//----- (0223DCE4) --------------------------------------------------------
int __fastcall Function_223dce4(int a1)
{
  return ((int (*)(void))*(&off_224682C + *(uint *)(a1 + 44)))();
}

//----- (0223DCF8) --------------------------------------------------------
int __fastcall Function_223dcf8(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_223dec8();
  Function_223e074(v1);
  Function_223dfa4(v1);
  Function_223dde0(v1[1]);
  Function_223c4c8(v1);
  return 1;
}

//----- (0223DD1C) --------------------------------------------------------
uint __fastcall Function_223dd1c(uint *a1, int a2, int a3, int a4)
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

  v34 = a4;
  v4 = a1;
  v27 = 0;
  v28 = 0;
  v29 = 2048;
  v30 = 0;
  v31 = 2031617;
  v32 = 0;
  v33 = 0;
  Function_20183c4(a1, 0, &v27, 0);
  Function_2019ebc(v4, 0);
  v20 = 0;
  v21 = 0;
  v22 = 2048;
  v23 = 0;
  v24 = 35520513;
  v25 = 256;
  v26 = 0;
  Function_20183c4(v4, 1u, &v20, 0);
  v13 = 0;
  v14 = 0;
  v15 = 2048;
  v16 = 0;
  v17 = 69074945;
  v18 = 0;
  v19 = 0;
  Function_20183c4(v4, 4u, &v13, 0);
  Function_2019ebc(v4, 4u);
  v6 = 0;
  v7 = 0;
  v8 = 2048;
  v9 = 0;
  v10 = 1835265;
  v11 = 512;
  v12 = 0;
  Function_20183c4(v4, 5u, &v6, 0);
  Function_2019690(0, 32, 0, 0x3Eu);
  return Function_2019690(4u, 32, 0, 0x3Eu);
}

//----- (0223DDE0) --------------------------------------------------------
int __fastcall Function_223dde0(int a1)
{
  int v1;

  v1 = a1;
  Function_2019044(a1, 5);
  Function_2019044(v1, 4);
  Function_2019044(v1, 1);
  return Function_2019044(v1, 0);
}

//----- (0223DE04) --------------------------------------------------------
int __fastcall Function_223de04(int a1)
{
  int v1;
  uint *v2;
  uchar v3;

  v1 = a1;
  v2 = *(uint **)(a1 + 4);
  LoadFromNARC_PlFont2(0, 416, 62);
  v3 = Function_2027b50(*(ushort **)(*(uint *)v1 + 36));
  Function_200dd0c(v2, 0, 1, 10, v3, 62);
  Function_200daa4(v2, 0, 31, 11, 0, 62);
  LoadFromNARC_RGCN(104, 17, v2, 1u, 0, 2560, 1, 62);
  return Call_LoadFromNARC_RLCN(104, 7, 0, 0, 96, 62);
}

//----- (0223DE7C) --------------------------------------------------------
int __fastcall Function_223de7c(int a1)
{
  int v1;
  char v3;
  int v4;
  int v5;

  v1 = a1;
  Function_223c300((int)&v3, v1, v1 + 3412, 1);
  v4 = 851968;
  v5 = 237568;
  *(uint *)(v1 + 3792) = Function_2021aa0((uint **)&v3);
  Function_2021cc8(*(uint *)(v1 + 3792), 1);
  Function_2021d6c(*(uint *)(v1 + 3792), 0x25u);
  return Function_2039734();
}

//----- (0223DEC8) --------------------------------------------------------
int __fastcall Function_223dec8(int a1)
{
  return Function_2021bd4(*(uint *)(a1 + 3792));
}

//----- (0223DED8) --------------------------------------------------------
int __fastcall Function_223ded8(int a1)
{
  int *v1;
  short v2;
  uint v3;
  int v4;
  int result;
  int v6;

  v6 = a1;
  Function_201a7e8(*(uint **)(a1 + 4), a1 + 3836, 0, 2, 21, 0x1Bu, 2u, 13, 40);
  Function_201ada4_ClearTextBox(v6 + 3836, 0);
  Function_201a7e8(*(uint **)(v6 + 4), v6 + 3900, 0, 21, 15, 0xAu, 4u, 13, 94);
  v1 = &dword_2245CC0;
  v2 = 134;
  v3 = 0;
  v4 = v6 + 3948;
  do
  {
    Function_201a7e8(*(uint **)(v6 + 4), v4, 0, *v1, v1[1], v1[2], v1[3], 13, v2);
    Function_201ada4_ClearTextBox(v4, 0);
    ++v3;
    result = v1[3] * v1[2];
    v2 += result;
    v1 += 4;
    v4 += 16;
  }
  while ( v3 < 0xC );
  return result;
}

//----- (0223DFA4) --------------------------------------------------------
uint __fastcall Function_223dfa4(int a1)
{
  int v1;
  uint v2;
  int v3;
  uint result;

  v1 = a1;
  Function_201a8fc(a1 + 3836);
  Function_201a8fc(v1 + 3900);
  v2 = 0;
  v3 = v1 + 3948;
  do
  {
    result = Function_201a8fc(v3);
    ++v2;
    v3 += 16;
  }
  while ( v2 < 0xC );
  return result;
}

//----- (0223DFDC) --------------------------------------------------------
ushort *__fastcall Function_223dfdc(int a1)
{
  int v1;
  int v2;
  ushort *result;

  v1 = a1;
  v2 = a1 + 596 + 292 * *(uint *)(a1 + 288);
  *(uint *)(a1 + 2992) = Function_2023790(180, 0x3Eu);
  Function_200c41c(*(uint **)(v1 + 2960), 2960);
  if ( *(uchar *)(v2 + 286) )
    Function_200bdd0(*(uint *)(v1 + 2960), 8u, *(uchar *)(v2 + 286));
  if ( *(uchar *)(v2 + 287) )
    Function_200be08(*(uint *)(v1 + 2960), 9u, *(uchar *)(v2 + 286), *(uchar *)(v2 + 287));
  *(uint *)(v1 + 3000) = Function_200b29c(
                             *(uint **)(v1 + 2960),
                             *(ushort ***)(v1 + 2964),
                             0x4Fu,
                             0x3Eu);
  result = Function_200b29c(*(uint **)(v1 + 2960), *(ushort ***)(v1 + 2964), 0x50u, 0x3Eu);
  *(uint *)(v1 + 3004) = result;
  return result;
}

//----- (0223E074) --------------------------------------------------------
uint __fastcall Function_223e074(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  Function_20237bc_FreeMsg(*(uint *)(a1 + 3000), a2);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 3004), v3);
  return Function_20237bc_FreeMsg(*(uint *)(v2 + 2992), v4);
}

//----- (0223E09C) --------------------------------------------------------
int __fastcall Function_223e09c(int a1)
{
  *(uint *)(a1 + 44) = 1;
  return 3;
}

//----- (0223E0A4) --------------------------------------------------------
int __fastcall Function_223e0a4(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  if ( dword_21BF6C4 & 1 )
  {
    Function_223e300();
    Function_223c3f4(v1, 3, 4);
    Function_2005748(0x5DCu);
  }
  else if ( dword_21BF6C4 & 2 )
  {
    *(uint *)(a1 + 44) = 2;
    Function_223c4c0(a1, 4, 0);
    Function_2005748(0x5DCu);
  }
  else if ( dword_21BF6C4 & 0x10 )
  {
    if ( !*(ushort *)(a1 + 274) )
    {
      *(ushort *)(a1 + 274) = 1;
      *(uint *)(a1 + 44) = 6;
      Function_2005748(0x5DCu);
    }
  }
  else if ( dword_21BF6C4 & 0x20 )
  {
    if ( *(ushort *)(a1 + 274) )
    {
      *(ushort *)(a1 + 274) = 0;
      *(uint *)(a1 + 44) = 6;
      Function_2005748(0x5DCu);
    }
  }
  else
  {
    v2 = ((int (__fastcall *)(uint, int))loc_2244210)(*(uint *)(a1 + 284), dword_21BF6C4);
    if ( v2 != *(uint *)(v1 + 288) && v2 >= 0 )
    {
      Function_2021d6c(*(uint *)(v1 + 4 * (v2 + 1) + 3796), 4 * v2 + 16);
      *(uint *)(v1 + 44) = 2;
      Function_223c4c0(v1, 3, 0);
      *(uint *)(v1 + 288) = v2;
      Function_2005748(0x5DCu);
    }
  }
  return 3;
}

//----- (0223E188) --------------------------------------------------------
int __fastcall Function_223e188(int a1)
{
  int v1;

  v1 = a1;
  Function_200f174(3u, 0, 0, 0, 6, 1, 62);
  *(uint *)(v1 + 44) = 0;
  return 4;
}

//----- (0223E1B0) --------------------------------------------------------
int __fastcall Function_223e1b0(int a1, int a2, int a3, int a4)
{
  int v4;

  v4 = a1;
  *(uint *)(a1 + 4208) = Function_223c3c0(*(uint **)(a1 + 4), 15, 496, a4);
  *(uint *)(v4 + 44) = 5;
  return 3;
}

//----- (0223E1D0) --------------------------------------------------------
int __fastcall Function_223e1d0(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_2002114(*(uint *)(a1 + 4208), 0x3Eu);
  if ( v2 != -1 )
  {
    if ( v2 == -2 )
    {
      *(uint *)(v1 + 44) = 2;
      Function_223c4c0(v1, 4, 0);
    }
    else
    {
      *(uint *)(v1 + 44) = 2;
      Function_223c4c0(v1, 5, 6);
    }
    Function_223e358(*(uint *)(v1 + 2964), v1 + 4060);
    Function_223e240(v1);
  }
  return 3;
}

//----- (0223E240) --------------------------------------------------------
int __fastcall Function_223e240(int a1)
{
  uint *v1;
  int result;

  v1 = (uint *)a1;
  if ( *(ushort *)(a1 + 274) )
  {
    LoadFromNARC_RCSN(104, 28, *(uint **)(a1 + 4), 1u, 0, 1536, 1, 62);
    result = ((int (__fastcall *)(uint *, uint, uint))loc_223E420)(v1 + 1023, v1[750], v1[751]);
  }
  else
  {
    LoadFromNARC_RCSN(104, 27, *(uint **)(a1 + 4), 1u, 0, 1536, 1, 62);
    result = Function_223e3b0(v1 + 1023, v1[741], v1[742], &v1[73 * v1[72] + 209]);
  }
  return result;
}

//----- (0223E2D0) --------------------------------------------------------
int __fastcall Function_223e2d0(int a1)
{
  int v1;

  v1 = a1;
  Function_223e240(a1);
  *(uint *)(v1 + 44) = 1;
  return 3;
}

//----- (0223E2E0) --------------------------------------------------------
int __fastcall Function_223e2e0(int a1)
{
  int v1;

  v1 = a1;
  if ( !Function_201d724(*(uint *)(a1 + 3044) & 0xFF) )
    *(uint *)(v1 + 44) = *(uint *)(v1 + 48);
  return 3;
}

//----- (0223E300) --------------------------------------------------------
int __fastcall Function_223e300(int a1, uint a2)
{
  int v2;
  int v3;
  int result;

  v2 = a1;
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(a1 + 2964), a2, *(ushort **)(a1 + 2992));
  Function_201ada4_ClearTextBox(v2 + 3836, 15);
  Function_200e060(v2 + 3836, 0, 1, 0xAu);
  v3 = *(uint *)(v2 + 2992);
  result = Function_201d738_CallInitTextInterpreter(v2 + 3836, 1);
  *(uint *)(v2 + 3044) = result;
  return result;
}

//----- (0223E358) --------------------------------------------------------
uint __fastcall Function_223e358(ushort **a1, int a2)
{
  int v2;
  ushort **v3;
  ushort *v4;
  ushort *v5;
  int v6;
  int v7;

  v2 = a2;
  v3 = a1;
  v4 = Function_200b1ec_CallMsgDecrypt(a1, 0x4Au);
  v5 = Function_200b1ec_CallMsgDecrypt(v3, 0x4Eu);
  ((void (__fastcall *)(int, ushort *))loc_22458FC)(v2, v4);
  ((void (__fastcall *)(int, ushort *, uint, int, int, int))loc_22458FC)(
    v2 + 16,
    v5,
    0,
    2,
    1,
    983552);
  Function_20237bc_FreeMsg((int)v4, v6);
  return Function_20237bc_FreeMsg((int)v5, v7);
}

//----- (0223E3B0) --------------------------------------------------------
int __fastcall Function_223e3b0(int a1, int a2, int a3, char *a4)
{
  int v4;
  int v5;
  int v6;
  char *v7;
  int v8;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  Function_201ada4_ClearTextBox(a1, 0);
  ((void (__fastcall *)(int, int, uint))loc_2242154)(v5, v6, *(short *)v7);
  ((void (__fastcall *)(int, int, uint, uint, int, int, int))loc_2242200)(
    v5,
    v4,
    v7[2],
    0,
    3,
    70,
    983552);
  v8 = ((int (__fastcall *)(uint, uint, uint))loc_224296C)(v7[3], v7[4], 0);
  return ((int (__fastcall *)(int, int, int))loc_2242268)(v5, v4, v8);
}

//----- (0223E424) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223E46C) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223E560) --------------------------------------------------------
int __fastcall Function_223e560(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;

  v6 = ((int (*)(void))*(&off_2246860 + a2))();
  return a6(v6);
}

//----- (0223E574) --------------------------------------------------------
int __fastcall Function_223e574(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  uint *v6;

  ((void (*)(void))loc_223E7C0)();
  ((void (__fastcall *)(uint *))loc_223EA1C)(v6);
  ((void (__fastcall *)(uint *))loc_223E964)(v6);
  ((void (__fastcall *)(uint))loc_223E680)(v6[1]);
  Function_223c4c8(v6);
  return a6(1);
}

//----- (0223E598) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223E684) --------------------------------------------------------
int __fastcall Function_223e684(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;
  int v7;

  Function_2019044(a1, 5);
  Function_2019044(v6, 4);
  Function_2019044(v6, 2);
  Function_2019044(v6, 1);
  Function_2019044(v6, 0);
  v7 = Function_2019044(v6, 3);
  return a6(v7);
}

//----- (0223E6B8) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223E770) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223E7C4) --------------------------------------------------------
int __fastcall Function_223e7c4(int a1, int a2)
{
  return Function_2021bd4(*(uint *)(a1 + a2));
}

//----- (0223E7D4) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223E968) --------------------------------------------------------
int __fastcall Function_223e968(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int (__fastcall *a8)(uint))
{
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint v13;

  Function_201a8fc(v8 + 3836);
  Function_201a8fc(v8 + 3868);
  v9 = 0;
  v10 = v8 + 3948;
  do
  {
    Function_201a8fc(v10);
    ++v9;
    v10 += 16;
  }
  while ( v9 < 8 );
  v11 = 0;
  v12 = v8 + 4172;
  do
  {
    v13 = Function_201a8fc(v12);
    ++v11;
    v12 += 16;
  }
  while ( v11 < 2 );
  return a8(v13);
}

//----- (0223E9B8) --------------------------------------------------------
int __fastcall Function_223e9b8(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;
  int v7;

  *(uint *)(v6 + 2992) = Function_2023790(180, 0x3Eu);
  *(uint *)(v6 + 2996) = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v6 + 2964), 0x29u);
  *(uint *)(v6 + 4228) = malloc(0x3Eu, 48);
  MIi_CpuClearFast(0, *(uint **)(v6 + 4228), 0x30u);
  *(uint *)(*(uint *)(v6 + 4228) + 24) = ((int (__fastcall *)(int, uint, int))loc_2242520)(
                                               62,
                                               0,
                                               *(uint *)(v6 + 4228) + 28);
  *(uint *)(*(uint *)(v6 + 4228) + 20) = ((int (__fastcall *)(int))loc_2242544)(62);
  v7 = ((int (__fastcall *)(int))loc_2242AA8)(v6 + 4284);
  return a6(v7);
}

//----- (0223EA20) --------------------------------------------------------
int __fastcall Function_223ea20(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(uint))
{
  int *v6;
  int v7;
  int v8;
  uint v9;

  free(*(uint *)(v6[1057] + 20));
  free(*(uint *)(v6[1057] + 24));
  free(v6[1057]);
  Function_20237bc_FreeMsg(v6[748], v7);
  v9 = Function_20237bc_FreeMsg(v6[749], v8);
  return a6(v9);
}

//----- (0223EA5C) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223EA84) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223EBCC) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223EC74) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223ECD4) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223ED94) --------------------------------------------------------
int __fastcall Function_223ed94(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int (__fastcall *a8)(int))
{
  uint *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int result;

  if ( Function_223b7b8() )
  {
    v11 = Function_223b7d8();
    v14 = v11;
    v8[1313] = 0;
    v15 = v11 + 15;
    switch ( (uchar)v15 )
    {
      case 0:
      case 3:
        v8[11] = 22;
        break;
      case 1:
      case 0xD:
        v8[11] = 29;
        break;
      case 2:
        Function_2038a0c(v15, 0, v12, v13);
        return result;
      case 0xF:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
        v8[71] = v14;
        Function_20057a4(1535, 0);
        ((void (__fastcall *)(uint *, int, int))loc_2244230)(v8, v14, 1);
        v8[11] = 20;
        break;
      default:
        return a8(3);
    }
  }
  else if ( ++v8[1313] == 3600 )
  {
    Function_2038a0c(3600, 3600, v9, v10);
  }
  return a8(3);
}

//----- (0223EE40) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223EE9C) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223EEE0) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223EF1C) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223EF58) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223EF94) --------------------------------------------------------
int __fastcall Function_223ef94(int a1, uint *a2)
{
  int result;

  if ( a2[9] )
    result = a2[11] + 4;
  else
    result = a2[10];
  return result;
}

//----- (0223EFAC) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223F0A8) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223F0D0) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223F154) --------------------------------------------------------
int __fastcall Function_223f154(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;
  int v7;

  v6 = a1;
  v7 = *(uint *)(a1 + a4);
  *(uint *)(a1 + 4216) = ((int (*)(void))loc_22426A4)();
  *(ushort *)(v6 + 268) = -1;
  *(uint *)(v6 + 44) = 5;
  return a6(3);
}

//----- (0223F190) --------------------------------------------------------
int __fastcall Function_223f190(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;
  int v7;
  char v8;

  v7 = ((int (__fastcall *)(uint, int))loc_2242A68)(*(uint *)(v6 + 4216), v6 + 268);
  switch ( v8 )
  {
    case 0:
      return a6(3);
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      Function_2001384(
        *(uint *)(v6 + 4216),
        (ushort *)(*(uint *)(v6 + 4228) + 6),
        (ushort *)(*(uint *)(v6 + 4228) + 4));
      Function_2013a3c(*(int **)(v6 + 4204));
      Function_2005748(0x5DCu);
      *(uint *)(v6 + 44) = 6;
      break;
    default:
      if ( v7 == -2 )
      {
        Function_2001384(
          *(uint *)(v6 + 4216),
          (ushort *)(*(uint *)(v6 + 4228) + 6),
          (ushort *)(*(uint *)(v6 + 4228) + 4));
        Function_2013a3c(*(int **)(v6 + 4204));
        Function_200dc9c(v6 + 3900, 0);
        Function_200e084(v6 + 3836, 0);
        Function_201a8fc(v6 + 3900);
        Function_201a8fc(v6 + 3916);
        Function_2005748(0x5DCu);
        *(uint *)(v6 + 44) = 0;
      }
      break;
  }
  return a6(3);
}

//----- (0223F25C) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223F2B0) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223F41C) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223F474) --------------------------------------------------------
int __fastcall Function_223f474(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;

  v6 = a1;
  *(uint *)(a1 + 4216) = ((int (__fastcall *)(int, int, uint))loc_224283C)(
                             a1 + 4204,
                             a1 + 3900,
                             *(uint *)(a1 + a3));
  *(ushort *)(v6 + 268) = -1;
  *(uint *)(v6 + 44) = 10;
  return a6(3);
}

//----- (0223F4B0) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223F5A0) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223F5F8) --------------------------------------------------------
int __fastcall Function_223f5f8(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;

  v6 = a1;
  *(uint *)(a1 + 4216) = ((int (__fastcall *)(int, int, uint, int))loc_22428AC)(
                             a1 + 4204,
                             a1 + 3900,
                             *(uint *)(a1 + a3),
                             1);
  *(ushort *)(v6 + 268) = -1;
  *(uint *)(v6 + 44) = 13;
  return a6(3);
}

//----- (0223F638) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223F728) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223F780) --------------------------------------------------------
int __fastcall Function_223f780(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;

  v6 = a1;
  *(uint *)(a1 + 4216) = ((int (__fastcall *)(int, int, uint, uint))loc_22429B0)(
                             a1 + 4204,
                             a1 + 3900,
                             *(uint *)(a1 + a4),
                             *(uint *)(a1 + a4 - 16));
  *(ushort *)(v6 + 268) = -1;
  *(uint *)(v6 + 44) = 16;
  return a6(3);
}

//----- (0223F7C0) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223F8B4) --------------------------------------------------------
int __fastcall Function_223f8b4(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;

  *(uint *)(v6 + 4208) = Function_223c3c0(*(uint **)(v6 + 4), 15, 390, a4);
  *(uint *)(v6 + 44) = 26;
  return a6(3);
}

//----- (0223F8D8) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223F920) --------------------------------------------------------
int Function_223f920()
{
  return 3;
}

//----- (0223F928) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223F950) --------------------------------------------------------
int __fastcall Function_223f950(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  uint *v6;

  if ( !Function_201d724(v6[761] & 0xFF) )
    v6[11] = v6[12];
  return a6(3);
}

//----- (0223F970) --------------------------------------------------------
int __fastcall Function_223f970(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  uint *v6;

  if ( !Function_201d724(v6[761] & 0xFF) && ++v6[1056] > 45 )
  {
    v6[1056] = 0;
    v6[11] = v6[12];
  }
  return a6(3);
}

//----- (0223F9A4) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223F9FC) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223FB0C) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223FB48) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223FBBC) --------------------------------------------------------
int __fastcall Function_223fbbc(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;
  int v7;
  int v8;

  v7 = Function_223c4b4();
  Function_20397b0(v7);
  v8 = ((int (__fastcall *)(int))*(&off_22468DC + *(uint *)(v6 + 44)))(v6);
  return a6(v8);
}

//----- (0223FBDC) --------------------------------------------------------
int __fastcall Function_223fbdc(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  uint *v6;

  Function_2039794();
  ((void (__fastcall *)(uint *))loc_223FFC4)(v6);
  ((void (__fastcall *)(uint *))loc_2240264)(v6);
  ((void (__fastcall *)(uint *))loc_224018C)(v6);
  ((void (__fastcall *)(uint))loc_223FD1C)(v6[1]);
  Function_223c4c8(v6);
  return a6(1);
}

//----- (0223FC08) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223FD20) --------------------------------------------------------
int __fastcall Function_223fd20(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;
  int v7;

  Function_2019044(a1, 5);
  Function_2019044(v6, 4);
  Function_2019044(v6, 2);
  Function_2019044(v6, 1);
  v7 = Function_2019044(v6, 0);
  return a6(v7);
}

//----- (0223FD4C) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223FE24) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223FFC8) --------------------------------------------------------
int __fastcall Function_223ffc8(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int (__fastcall *a10)(int))
{
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v11 = 0;
  v12 = v10;
  do
  {
    Function_2021bd4(*(uint *)(v12 + 3828));
    ++v11;
    v12 += 4;
  }
  while ( v11 < 2 );
  Function_2021bd4(*(uint *)(v10 + 3520));
  v13 = 0;
  v14 = v10;
  do
  {
    Function_2021bd4(*(uint *)(v14 + 3528));
    Function_2021bd4(*(uint *)(v14 + 3648));
    ++v13;
    v14 += 4;
  }
  while ( v13 < 30 );
  v15 = 0;
  do
  {
    v16 = Function_2021bd4(*(uint *)(v10 + 3768));
    ++v15;
    v10 += 4;
  }
  while ( v15 < 6 );
  return a10(v16);
}

//----- (02240028) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02240190) --------------------------------------------------------
int __fastcall Function_2240190(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(uint))
{
  int v6;
  uint v7;

  Function_201a8fc(v6 + 4156);
  Function_201a8fc(v6 + 3916);
  Function_201a8fc(v6 + 3900);
  Function_201a8fc(v6 + 3836);
  Function_201a8fc(v6 + 3884);
  v7 = Function_201a8fc(v6 + 3868);
  return a6(v7);
}

//----- (022401E0) --------------------------------------------------------
int __fastcall Function_22401e0(int a1, int a2, int a3, int a4, int a5, int (*a6)(void))
{
  int v6;
  int v7;

  *(uint *)(v6 + 2984) = Function_2023790(18, 0x3Eu);
  *(uint *)(v6 + 2992) = Function_2023790(180, 0x3Eu);
  v7 = *(uint *)(v6 + 36);
  if ( v7 == 5 )
  {
    *(uint *)(v6 + 2996) = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v6 + 2964), 0x15u);
  }
  else if ( v7 == 6 )
  {
    *(uint *)(v6 + 2996) = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v6 + 2964), 0x11u);
  }
  *(uint *)(v6 + 2988) = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v6 + 2964), 0x67u);
  if ( *(ushort *)(v6 + 278) == 30 )
    *(ushort *)(v6 + 278) = 0;
  *(uint *)(v6 + 4264) = malloc(0x3Eu, 120);
  return a6();
}

//----- (02240268) --------------------------------------------------------
int __fastcall Function_2240268(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(uint))
{
  int *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint v11;

  free(v6[1066]);
  Function_20237bc_FreeMsg(v6[746], v7);
  Function_20237bc_FreeMsg(v6[748], v8);
  Function_20237bc_FreeMsg(v6[747], v9);
  v11 = Function_20237bc_FreeMsg(v6[749], v10);
  return a6(v11);
}

//----- (022402A8) --------------------------------------------------------
int __fastcall Function_22402a8(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;

  if ( Function_200f2ac() )
    *(uint *)(v6 + 44) = 1;
  return a6(3);
}

//----- (022402BC) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (022404F0) --------------------------------------------------------
int __fastcall Function_22404f0(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int (__fastcall *a8)(char *))
{
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint v13;
  char *v14;
  int result;
  char *v16;

  v9 = 0;
  v10 = 0;
  if ( dword_21BF6C4 & 0x40 )
  {
    v10 = 1;
  }
  else if ( dword_21BF6C4 & 0x80 )
  {
    v10 = 2;
  }
  else if ( dword_21BF6C4 & 0x20 )
  {
    v10 = 3;
  }
  else if ( dword_21BF6C4 & 0x10 )
  {
    v10 = 4;
  }
  if ( v10 )
  {
    v11 = *(ushort *)(v8 + 278);
    v12 = *((uchar *)&dword_2245F50[v11] + v10 - 1);
    if ( v12 != v11 )
    {
      if ( v12 != 99 && v12 != 101 )
      {
        v9 = 1;
        *(ushort *)(v8 + 278) = v12;
      }
      else
      {
        *(ushort *)(v8 + 276) = ((int (__fastcall *)(uint, int, int))loc_22405C8)(
                                 *(ushort *)(v8 + 276),
                                 19,
                                 v12 - 100);
        ((void (__fastcall *)(int, uint))loc_2240F9C)(v8, *(ushort *)(v8 + 276));
        Function_2005748(0x5DCu);
      }
    }
  }
  if ( v9 )
  {
    Function_2005748(0x5DCu);
    Function_223c3fc(
      *(uint **)(v8 + 3520),
      (ushort)word_2245ED0[2 * *(ushort *)(v8 + 278)],
      (ushort)word_2245ED2[2 * *(ushort *)(v8 + 278)]);
  }
  v13 = *(ushort *)(v8 + 278);
  if ( v13 != 31 && v13 > 5 )
  {
    v16 = Function_2021e80(*(uint *)(v8 + 3520), 1);
    result = a8(v16);
  }
  else
  {
    v14 = Function_2021e80(*(uint *)(v8 + 3520), 0);
    result = a8(v14);
  }
  return result;
}

//----- (022405CC) --------------------------------------------------------
int __fastcall Function_22405cc(int a1, int a2)
{
  return a2 - 1;
}

//----- (022405DC) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02240688) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02240830) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (022408E8) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02240A6C) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02240AC4) --------------------------------------------------------
int __fastcall Function_2240ac4(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;

  *(uint *)(v6 + 4208) = Function_223c3c0(*(uint **)(v6 + 4), 15, 429, a4);
  *(uint *)(v6 + 44) = 6;
  return a6(3);
}

//----- (02240AE8) --------------------------------------------------------
int __fastcall Function_2240ae8(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;
  int v7;

  v7 = Function_2002114(*(uint *)(v6 + 4208), 0x3Eu);
  if ( v7 != -1 )
  {
    if ( v7 == -2 )
    {
      *(uint *)(v6 + 44) = 0;
    }
    else
    {
      *(uint *)(v6 + 44) = 2;
      Function_223c4c0(v6, 0, 0);
    }
  }
  return a6(3);
}

//----- (02240B20) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02240B4C) --------------------------------------------------------
int __fastcall Function_2240b4c(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;

  *(uint *)(v6 + 4208) = Function_223c3c0(*(uint **)(v6 + 4), 13, 429, a4);
  *(uint *)(v6 + 44) = 13;
  return a6(3);
}

//----- (02240B70) --------------------------------------------------------
int __fastcall Function_2240b70(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;
  int v7;

  v7 = Function_2002114(*(uint *)(v6 + 4208), 0x3Eu);
  if ( v7 != -1 )
  {
    if ( v7 == -2 )
    {
      Function_200e084(v6 + 4156, 0);
      *(uint *)(v6 + 44) = 1;
    }
    else
    {
      ((void (__fastcall *)(int))loc_2240BAC)(v6);
    }
  }
  return a6(3);
}

//----- (02240BB0) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02240C58) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02240C84) --------------------------------------------------------
int __fastcall Function_2240c84(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;

  *(uint *)(v6 + 4208) = Function_223c3c0(*(uint **)(v6 + 4), 13, 429, a4);
  *(uint *)(v6 + 44) = 16;
  return a6(3);
}

//----- (02240CA8) --------------------------------------------------------
int __fastcall Function_2240ca8(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;
  int v7;

  v7 = Function_2002114(*(uint *)(v6 + 4208), 0x3Eu);
  if ( v7 != -1 )
  {
    if ( v7 == -2 )
    {
      Function_200e084(v6 + 4156, 0);
      *(uint *)(v6 + 44) = 1;
    }
    else
    {
      *(uint *)(v6 + 280) = ((int (__fastcall *)(uint, uint, uint, uint))loc_22411D8)(
                                *(uint *)(*(uint *)v6 + 8),
                                *(uint *)(*(uint *)v6 + 12),
                                *(ushort *)(v6 + 276),
                                *(ushort *)(v6 + 278));
      *(uint *)(v6 + 44) = 2;
      Function_223c4c0(v6, 6, 0);
    }
  }
  return a6(3);
}

//----- (02240D08) --------------------------------------------------------
int __fastcall Function_2240d08(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  uint *v6;

  if ( !Function_201d724(v6[761] & 0xFF) )
    v6[11] = v6[12];
  return a6(3);
}

//----- (02240D28) --------------------------------------------------------
int __fastcall Function_2240d28(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  uint *v6;

  if ( !Function_201d724(v6[761] & 0xFF) )
  {
    Function_200e084((int)(v6 + 1039), 0);
    v6[11] = v6[12];
  }
  return a6(3);
}

//----- (02240D58) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02240DD0) --------------------------------------------------------
int __fastcall Function_2240dd0(int a1, uint a2, int a3, uint a4, int a5, int a6, int a7, int (__fastcall *a8)(int))
{
  uint *v8;
  int v9;
  int v10;

  v9 = Function_2006cb8_LoadFileInMemory(a1, a2, a4);
  v10 = v9;
  if ( !v9 || Function_20a7164(v9, v8) )
    return a8(v10);
  free(v10);
  return a8(0);
}

//----- (02240DF8) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02240E50) --------------------------------------------------------
int __fastcall Function_2240e50(int a1, int a2, int a3, int a4, int a5, int (*a6)(void))
{
  int v6;

  *(uchar *)(v6 + 3) = InitPkmnLevel(a1);
  return a6();
}

//----- (02240E5C) --------------------------------------------------------
int __fastcall Function_2240e5c(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int (__fastcall *a10)(uint))
{
  int *v10;
  int v11;
  uint v12;
  int v14;

  v10 = *(int **)(a1 + a2);
  v14 = a1;
  v11 = 0;
  do
  {
    if ( v10[2] )
    {
      DC_FlushRange((int)(v10 + 3), 512);
      GX_LoadOBJ(v10 + 3, *v10, 0x200u);
      Function_2021e90(v10[2], v10[1]);
    }
    ++v11;
    v10 += 131;
  }
  while ( v11 < 30 );
  v12 = free(*(uint *)(v14 + 4276));
  return a10(v12);
}

//----- (02240EAC) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02240FA0) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (022411D0) --------------------------------------------------------
int Function_22411d0()
{
  return 1;
}

//----- (022411DC) --------------------------------------------------------
int __fastcall Function_22411dc(uint *a1, uint *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int (*a10)(void))
{
  uint v10;
  uint *v11;
  uint *v12;
  int v13;
  int result;
  uint *v15;

  v11 = a1;
  v12 = a2;
  v13 = a4;
  if ( ((int (__fastcall *)(uint))loc_22411CC)(v10) )
  {
    if ( v13 <= GetNrOfPkmnInParty((int)v11) - 1 )
    {
      GetAdrOfPkmnInParty(v11, v13);
      Function_2076b10_Dummy();
      result = a10();
    }
    else
    {
      result = ((int (__fastcall *)(uint))a10)(0);
    }
  }
  else
  {
    v15 = Function_2079c9c(v12, v10, v13);
    result = ((int (__fastcall *)(uint *))a10)(v15);
  }
  return result;
}

//----- (0224121C) --------------------------------------------------------
int __fastcall Function_224121c(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;
  int result;

  if ( ((int (__fastcall *)(int))loc_22411CC)(a3) && GetNrOfPkmnInParty(v6) < 2 )
    result = a6(0);
  else
    result = a6(1);
  return result;
}

//----- (0224123C) --------------------------------------------------------
int __fastcall Function_224123c(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int (__fastcall *a10)(int))
{
  ushort *v10;
  int v11;
  const short *v12;
  int v13;
  int result;
  int v15;

  v11 = 0;
  v12 = L"ghi./01234";
  v15 = InitEncryptPkmnData_Part1(a1);
  v13 = 0;
  do
  {
    ++v13;
    v11 += GetBoxPkmnData((int)v10, *(ushort *)v12, 0);
    ++v12;
  }
  while ( v13 < 10 );
  InitEncryptPkmnData_Part1Again(v10, v15);
  if ( v11 )
    result = a10(1);
  else
    result = a10(0);
  return result;
}

//----- (02241278) --------------------------------------------------------
int __fastcall Function_2241278(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int (__fastcall *a10)(int))
{
  ushort *v10;
  int v11;
  uint v12;
  int v13;
  int result;

  v11 = InitEncryptPkmnData_Part1(a1);
  v12 = GetBoxPkmnData((int)v10, 5u, 0);
  v13 = GetBoxPkmnData((int)v10, 0x70u, 0);
  InitEncryptPkmnData_Part1Again(v10, v11);
  if ( v13 <= 0 || v12 != 479 && v12 != 487 && v12 != 492 )
    result = a10(0);
  else
    result = a10(1);
  return result;
}

//----- (022412F0) --------------------------------------------------------
int sub_22412F0()
{
  int v0;
  int v1;

  v0 = ((int (*)(void))loc_22411D8)();
  v1 = v0;
  if ( !v0 )
    return 0;
  if ( !GetBoxPkmnData(v0, 0xACu, 0) )
    return 0;
  if ( GetBoxPkmnData(v1, 0xADu, 0) )
    return 2;
  return 1;
}

//----- (02241324) --------------------------------------------------------
int sub_2241324()
{
  return Function_2241328();
}

//----- (02241328) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02241384) --------------------------------------------------------
int __fastcall Function_2241384(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int (__fastcall *a8)(int))
{
  int v8;
  int v9;
  char v11;

  v8 = a1;
  GetBoxPkmnData(a1, 5u, 0);
  v11 = GetBoxPkmnData(v8, 0x6Fu, 0) + 1;
  InitPkmnLevel(v8);
  v9 = sub_2241324();
  return a8(v9);
}

//----- (022413BC) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02241464) --------------------------------------------------------
int __fastcall Function_2241464(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int (*a10)(void))
{
  ushort *v10;
  int v11;
  int v12;

  v11 = a4;
  v12 = 0;
  do
  {
    if ( *v10 && !sub_2241324() )
      *(uint *)(v11 + 4) += 3;
    ++v12;
    v10 += 2;
    v11 += 524;
  }
  while ( v12 < 30 );
  return a10();
}

//----- (02241498) --------------------------------------------------------
int __fastcall Function_2241498(int *a1, uint a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  ushort v6;
  int result;

  v6 = GetPkmnData(a1, a2, 0);
  if ( Function_207d2d0(v6) )
    result = a6(1);
  else
    result = a6(0);
  return result;
}

//----- (022414B8) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02241548) --------------------------------------------------------
int __fastcall Function_2241548(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;
  int v7;
  int v8;

  v7 = Function_223c4b4();
  Function_20397b0(v7);
  v8 = ((int (__fastcall *)(int))*(&off_224695C + *(uint *)(v6 + 44)))(v6);
  return a6(v8);
}

//----- (02241568) --------------------------------------------------------
int __fastcall Function_2241568(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  uint *v6;

  Function_2039794();
  ((void (__fastcall *)(uint *))loc_224191C)(v6);
  ((void (__fastcall *)(uint *))loc_224187C)(v6);
  ((void (__fastcall *)(uint))loc_22416DC)(v6[1]);
  Function_223c4c8(v6);
  return a6(1);
}

//----- (0224158C) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (022415F8) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (022416E0) --------------------------------------------------------
int __fastcall Function_22416e0(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;
  int v7;

  Function_2019044(a1, 5);
  Function_2019044(v6, 4);
  Function_2019044(v6, 2);
  Function_2019044(v6, 1);
  v7 = Function_2019044(v6, 0);
  return a6(v7);
}

//----- (0224170C) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (022417A0) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02241880) --------------------------------------------------------
int __fastcall Function_2241880(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int (__fastcall *a8)(uint))
{
  int v8;
  int v9;
  int v10;
  uint v11;

  v9 = 0;
  v10 = v8 + 3948;
  do
  {
    Function_201a8fc(v10);
    ++v9;
    v10 += 16;
  }
  while ( v9 < 6 );
  Function_201a8fc(v8 + 3836);
  v11 = Function_201a8fc(v8 + 3868);
  return a8(v11);
}

//----- (022418B8) --------------------------------------------------------
int __fastcall Function_22418b8(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;
  int v7;

  *(uint *)(v6 + 2992) = Function_2023790(180, 0x3Eu);
  *(uint *)(v6 + 2996) = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v6 + 2964), 0x5Au);
  *(uint *)(v6 + 4228) = malloc(0x3Eu, 48);
  MIi_CpuClearFast(0, *(uint **)(v6 + 4228), 0x30u);
  *(uint *)(*(uint *)(v6 + 4228) + 24) = ((int (__fastcall *)(int, uint, int))loc_2242520)(
                                               62,
                                               0,
                                               *(uint *)(v6 + 4228) + 28);
  *(uint *)(*(uint *)(v6 + 4228) + 20) = ((int (__fastcall *)(int))loc_2242544)(62);
  v7 = ((int (__fastcall *)(int))loc_2242AA8)(v6 + 4284);
  return a6(v7);
}

//----- (02241920) --------------------------------------------------------
int __fastcall Function_2241920(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(uint))
{
  int *v6;
  int v7;
  int v8;
  uint v9;

  free(*(uint *)(v6[1057] + 20));
  free(*(uint *)(v6[1057] + 24));
  free(v6[1057]);
  Function_20237bc_FreeMsg(v6[748], v7);
  v9 = Function_20237bc_FreeMsg(v6[749], v8);
  return a6(v9);
}

//----- (0224195C) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02241990) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02241A1C) --------------------------------------------------------
int __fastcall Function_2241a1c(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;
  int v7;

  v6 = a1;
  v7 = *(uint *)(a1 + a4);
  *(uint *)(a1 + 4216) = ((int (*)(void))loc_22426A4)();
  *(ushort *)(v6 + 268) = -1;
  *(uint *)(v6 + 44) = 4;
  return a6(3);
}

//----- (02241A58) --------------------------------------------------------
int __fastcall Function_2241a58(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;
  int v7;
  char v8;

  v7 = ((int (__fastcall *)(uint, int))loc_2242A68)(*(uint *)(v6 + 4216), v6 + 268);
  switch ( v8 )
  {
    case 0:
      return a6(3);
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      Function_2001384(
        *(uint *)(v6 + 4216),
        (ushort *)(*(uint *)(v6 + 4228) + 6),
        (ushort *)(*(uint *)(v6 + 4228) + 4));
      Function_2013a3c(*(int **)(v6 + 4204));
      *(uint *)(v6 + 44) = 5;
      Function_2005748(0x5DCu);
      break;
    default:
      if ( v7 == -2 )
      {
        Function_2001384(
          *(uint *)(v6 + 4216),
          (ushort *)(*(uint *)(v6 + 4228) + 6),
          (ushort *)(*(uint *)(v6 + 4228) + 4));
        Function_2013a3c(*(int **)(v6 + 4204));
        Function_200dc9c(v6 + 3900, 0);
        Function_200e084(v6 + 3836, 0);
        Function_201a8fc(v6 + 3900);
        Function_201a8fc(v6 + 3916);
        Function_223c4c0(v6, 5, 5);
        *(uint *)(v6 + 44) = 2;
        Function_2005748(0x5DCu);
      }
      break;
  }
  return a6(3);
}

//----- (02241B2C) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02241B80) --------------------------------------------------------
int __fastcall Function_2241b80(int a1, int a2)
{
  int result;

  if ( a2 == 254 )
  {
    *(uchar *)(a1 + 2) = 2;
    result = 1;
  }
  else if ( a2 == 255 )
  {
    *(uchar *)(a1 + 2) = 3;
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}

//----- (02241BAC) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02241D08) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02241D64) --------------------------------------------------------
int __fastcall Function_2241d64(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;

  v6 = a1;
  *(uint *)(a1 + 4216) = ((int (__fastcall *)(int, int, uint))loc_224283C)(
                             a1 + 4204,
                             a1 + 3900,
                             *(uint *)(a1 + a3));
  *(ushort *)(v6 + 268) = -1;
  *(uint *)(v6 + 44) = 9;
  return a6(3);
}

//----- (02241DA0) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02241E8C) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02241EE8) --------------------------------------------------------
int __fastcall Function_2241ee8(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;

  v6 = a1;
  *(uint *)(a1 + 4216) = ((int (__fastcall *)(int, int, uint, uint))loc_22428AC)(
                             a1 + 4204,
                             a1 + 3900,
                             *(uint *)(a1 + a3),
                             0);
  *(ushort *)(v6 + 268) = -1;
  *(uint *)(v6 + 44) = 12;
  return a6(3);
}

//----- (02241F28) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02242040) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02242068) --------------------------------------------------------
int __fastcall Function_2242068(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;

  *(uint *)(v6 + 4208) = Function_223c3c0(*(uint **)(v6 + 4), 15, 490, a4);
  *(uint *)(v6 + 44) = 15;
  return a6(3);
}

//----- (0224208C) --------------------------------------------------------
int __fastcall Function_224208c(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  uint *v6;
  int v7;

  v7 = Function_2002114(v6[1052], 0x3Eu);
  if ( v7 != -1 )
  {
    if ( v7 == -2 )
    {
      Function_223c4c0((int)v6, 5, 5);
      v6[11] = 2;
    }
    else
    {
      Function_223c4c0((int)v6, 7, 7);
      v6[11] = 2;
      v6[1068] = 1;
      ((void (__fastcall *)(uint *, uint *))loc_2242664)(v6 + 76, v6);
    }
  }
  return a6(3);
}

//----- (022420E4) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02242138) --------------------------------------------------------
int __fastcall Function_2242138(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  uint *v6;

  if ( !Function_201d724(v6[761] & 0xFF) )
    v6[11] = v6[12];
  return a6(3);
}

//----- (02242158) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0224218C) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (022421E8) --------------------------------------------------------
int Function_22421e8()
{
  return 329216;
}

//----- (02242204) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0224226C) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (022422B8) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (022422D4) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02242368) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (022423FC) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02242524) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02242548) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (022425A8) --------------------------------------------------------
int __fastcall Function_22425a8(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int (*a8)(void))
{
  int v8;
  int *v9;
  int v10;
  int v11;
  int v12;
  uint v13;
  int v14;
  short *v15;

  v9 = (int *)a2;
  if ( ((int (__fastcall *)(uint))loc_22411CC)(*(ushort *)(a2 + 276)) )
  {
    Function_2077acc(v9[70], 0, v10, v11);
    v12 = GetPkmnDataSize();
    MIi_CpuCopyFast((uint *)v9[70], (uint *)v8, v12, v13);
  }
  else
  {
    Function_2077adc(v9[70], 0, v10, v11);
    Function_20774c8((int *)v9[70], (uint *)v8);
  }
  v14 = *(uint *)(*v9 + 28);
  Function_2025ef0_Dummy();
  Function_20021d0((ushort *)(v8 + 268), v15, 8u);
  *(ushort *)(v8 + 284) = GetSecretTrainerID(*(uint *)(*v9 + 28));
  *(uchar *)(v8 + 286) = Function_202c8c0(*(uint *)(*v9 + 24));
  *(uchar *)(v8 + 287) = Function_202c8c4(*(uint *)(*v9 + 24));
  *(uchar *)(v8 + 288) = Function_2025f8c(*(uint *)(*v9 + 28));
  *(uchar *)(v8 + 246) = GetGender(*(uint *)(*v9 + 28));
  *(uchar *)(v8 + 290) = 12;
  *(uchar *)(v8 + 291) = 2;
  return a8();
}

//----- (02242668) --------------------------------------------------------
int __fastcall Function_2242668(int a1, ushort *a2, int a3, int a4, int a5, int a6, int a7, int (*a8)(void))
{
  ushort *v8;
  ushort *v9;

  v9 = a2;
  ((void (*)(void))loc_22425A4)();
  v8[118] = v9[1466];
  v8[119] = v9[1467];
  v8[120] = v9[1468];
  v8[121] = v9[1469];
  v8[122] = v9[1470];
  return a8();
}

//----- (022426A8) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02242718) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (022427C0) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02242840) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (022428B0) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02242934) --------------------------------------------------------
int __fastcall Function_2242934(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int (*a8)(void))
{
  int v8;
  int v9;
  int *v10;
  int v11;

  v9 = a2;
  if ( a3 )
  {
    v10 = &dword_22460A8;
    if ( (uint)a2 >= 0xB )
      ErrorHandler();
  }
  else
  {
    v10 = &dword_2246108;
    if ( a2 >= 12 )
      ErrorHandler();
  }
  v11 = (int)&v10[2 * v9];
  *(uchar *)(v8 + 3) = *(ushort *)(v11 + 4);
  *(uchar *)(v8 + 4) = *(ushort *)(v11 + 6);
  return a8();
}

//----- (02242970) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (022429B4) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02242A44) --------------------------------------------------------
int __fastcall Function_2242a44(int result)
{
  *(uint *)(result + 4432) = 0;
  return result;
}

//----- (02242A6C) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02242AAC) --------------------------------------------------------
ushort *__fastcall Function_2242aac(ushort *result, int a2, int a3, int a4)
{
  short v4;

  v4 = a3;
  do
  {
    *(ushort *)(a4 + 4) = v4;
    *(ushort *)(a4 + 22) = v4;
    ++a3;
    a4 += 2;
  }
  while ( a3 < 9 );
  *result = v4;
  result[1] = v4;
  return result;
}

//----- (02242AC4) --------------------------------------------------------
int __fastcall Function_2242ac4(int result, int a2, short a3, short a4)
{
  *(ushort *)(result + 4) = a3;
  *(ushort *)(result + 22) = a4;
  return result;
}

//----- (02242AD0) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02242B14) --------------------------------------------------------
int __fastcall Function_2242b14(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;
  int v7;
  int v8;

  v7 = Function_223c4b4();
  Function_20397b0(v7);
  v8 = ((int (__fastcall *)(int))*(&off_22469A0 + *(uint *)(v6 + 44)))(v6);
  return a6(v8);
}

//----- (02242B34) --------------------------------------------------------
int __fastcall Function_2242b34(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  uint *v6;

  ((void (*)(void))loc_2242D94)();
  ((void (__fastcall *)(uint *))loc_2242D70)(v6);
  ((void (__fastcall *)(uint))loc_2242C7C)(v6[1]);
  Function_223c4c8(v6);
  return a6(1);
}

//----- (02242B54) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02242C80) --------------------------------------------------------
int __fastcall Function_2242c80(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;
  int v7;

  Function_2019044(a1, 5);
  Function_2019044(v6, 4);
  Function_2019044(v6, 2);
  Function_2019044(v6, 1);
  v7 = Function_2019044(v6, 0);
  return a6(v7);
}

//----- (02242CAC) --------------------------------------------------------
int __fastcall Function_2242cac(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int (__fastcall *a8)(int))
{
  int v8;
  uint *v9;
  uchar v10;
  int v11;

  v8 = a1;
  v9 = *(uint **)(a1 + 4);
  Call_LoadFromNARC_RLCN(104, 0, 0, 0, 96, 62);
  LoadFromNARC_PlFont2(0, 416, 62);
  v10 = Function_2027b50(*(ushort **)(*(uint *)v8 + 36));
  Function_200dd0c(v9, 0, 1, 10, v10, 62);
  Function_200daa4(v9, 0, 31, 11, 0, 62);
  if ( !*(ushort *)(v8 + 4240) )
  {
    Function_2019120(4u, 0);
    Function_2019120(5u, 0);
    Function_201ff74(0x10u, 0);
  }
  v11 = *(uint *)(v8 + 32);
  if ( v11 == 9 )
    v11 = Function_223d068(v8);
  return a8(v11);
}

//----- (02242D38) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02242D74) --------------------------------------------------------
uint __fastcall Function_2242d74(int a1, int a2, int a3, uint (__fastcall *a4)(int a1))
{
  return a4(a1 + a2);
}

//----- (02242D84) --------------------------------------------------------
int __fastcall Function_2242d84(int a1, int a2, int a3, int a4, int a5, int (*a6)(void))
{
  int v6;

  *(uint *)(v6 + 2992) = Function_2023790(180, 0x3Eu);
  return a6();
}

//----- (02242D98) --------------------------------------------------------
uint __fastcall Function_2242d98(int a1, int a2)
{
  return Function_20237bc_FreeMsg(*(uint *)(a1 + a2), a2);
}

//----- (02242DA8) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02242E9C) --------------------------------------------------------
int __fastcall Function_2242e9c(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;

  Function_207893c(v6 + 304, a2, a3, a4);
  Function_223b7e4((char *)(v6 + 304));
  *(uint *)(v6 + 44) = 3;
  *(uint *)(v6 + 5252) = 0;
  ((void (__fastcall *)(int, int, int))loc_2243EC4)(v6, 4, 6);
  return a6(3);
}

//----- (02242ED0) --------------------------------------------------------
int __fastcall Function_2242ed0(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  uint *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int result;

  if ( Function_223b7b8() )
  {
    v9 = Function_223b7d8();
    v6[1313] = 0;
    switch ( (uchar)v9 + 15 )
    {
      case 0:
      case 1:
      case 13:
        v6[15] = v9;
        v6[11] = 38;
        break;
      case 2:
        Function_2038a0c(v9, v9 + 15, 0, v10);
        return result;
      case 3:
      case 11:
        v6[15] = v9;
        v6[11] = 39;
        break;
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
        v6[15] = v9;
        v6[11] = 39;
        break;
      case 14:
        v6[15] = v9;
        v6[11] = 38;
        break;
      case 15:
        ((void (__fastcall *)(uint *, int))loc_2243B04)(v6, 1);
        Function_202cf28(*(uint *)(*v6 + 40), 44);
        v6[11] = 30;
        break;
      default:
        return a6(3);
    }
  }
  else if ( ++v6[1313] == 3600 )
  {
    Function_2038a0c(3600, 3600, v7, v8);
  }
  return a6(3);
}

//----- (02242F78) --------------------------------------------------------
int __fastcall Function_2242f78(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;

  Function_223b834();
  *(uint *)(v6 + 44) = 5;
  *(uint *)(v6 + 5252) = 0;
  *(ushort *)(v6 + 54) = 1;
  return a6(3);
}

//----- (02242F98) --------------------------------------------------------
int __fastcall Function_2242f98(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  uint *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int result;

  if ( Function_223b7b8() )
  {
    v9 = Function_223b7d8();
    v6[1313] = 0;
    switch ( (uchar)v9 + 15 )
    {
      case 0:
      case 1:
      case 10:
      case 12:
      case 13:
      case 14:
        Function_2038ae0(4);
        break;
      case 2:
        Function_2038a0c(v9, v9 + 15, 0, v10);
        return result;
      case 3:
      case 11:
        v6[15] = v9;
        v6[11] = 39;
        break;
      case 15:
        v6[11] = 33;
        break;
      default:
        return a6(3);
    }
  }
  else if ( ++v6[1313] == 3600 )
  {
    Function_2038a0c(3600, 3600, v7, v8);
  }
  return a6(3);
}

//----- (0224301C) --------------------------------------------------------
int __fastcall Function_224301c(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;

  Function_223b888(v6 + 304);
  *(uint *)(v6 + 44) = 8;
  *(uint *)(v6 + 5252) = 0;
  ((void (__fastcall *)(int, int, int))loc_2243EC4)(v6, 9, 11);
  return a6(3);
}

//----- (02243048) --------------------------------------------------------
int __fastcall Function_2243048(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int (__fastcall *a8)(int))
{
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int result;

  if ( Function_223b7b8() )
  {
    v11 = Function_223b7d8();
    *(uint *)(v8 + 5252) = 0;
    switch ( (uchar)v11 + 15 )
    {
      case 0:
      case 1:
      case 13:
        *(uint *)(v8 + 60) = v11;
        *(uint *)(v8 + 44) = 38;
        break;
      case 2:
        Function_2038a0c(v11, v11 + 15, 0, v12);
        return result;
      case 3:
        *(uint *)(v8 + 60) = v11;
        *(uint *)(v8 + 44) = 39;
        break;
      case 11:
        *(uint *)(v8 + 44) = 38;
        break;
      case 12:
        *(uint *)(v8 + 44) = 38;
        break;
      case 15:
        v13 = *(char *)(v8 + 593);
        if ( *(uchar *)(v8 + 593) )
        {
          *(uint *)(v8 + 44) = 24;
        }
        else
        {
          v14 = Function_202daac(**(uint **)v8);
          ((void (__fastcall *)(int, int, int, int))loc_2243BC0)(v8, v8 + 304, v14, v13);
          *(uint *)(v8 + 44) = 30;
        }
        break;
      default:
        return a8(3);
    }
  }
  else if ( ++*(uint *)(v8 + 5252) == 3600 )
  {
    Function_2038a0c(3600, 3600, v9, v10);
  }
  return a8(3);
}

//----- (02243104) --------------------------------------------------------
int __fastcall Function_2243104(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;

  Function_223b96c(a1);
  *(uint *)(v6 + 44) = 10;
  *(uint *)(v6 + 5252) = 0;
  return a6(3);
}

//----- (02243120) --------------------------------------------------------
int __fastcall Function_2243120(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int result;

  if ( Function_223b7b8() )
  {
    v9 = Function_223b7d8() + 15;
    *(uint *)(v6 + 5252) = 0;
    switch ( (uchar)v9 )
    {
      case 0:
      case 1:
      case 3:
      case 0xD:
        Function_2038ae0(4);
        break;
      case 2:
        Function_2038a0c(v9, 5252, 0, v10);
        return result;
      case 0xA:
      case 0xB:
      case 0xC:
        Function_2038ae0(3);
        break;
      case 0xF:
        *(uint *)(v6 + 44) = 33;
        break;
      default:
        return a6(3);
    }
  }
  else if ( ++*(uint *)(v6 + 5252) == 3600 )
  {
    Function_2038a0c(3600, 3600, v7, v8);
  }
  return a6(3);
}

//----- (022431A4) --------------------------------------------------------
int __fastcall Function_22431a4(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;

  Function_207893c(v6 + 304, a2, a3, a4);
  Function_223ba88(*(uint *)(v6 + 292 * *(uint *)(v6 + 288) + 860), (char *)(v6 + 304), v6 + 2640);
  ((void (__fastcall *)(int, int, int))loc_2243EC4)(v6, 14, 16);
  *(uint *)(v6 + 44) = 13;
  *(uint *)(v6 + 5252) = 0;
  return a6(3);
}

//----- (022431F0) --------------------------------------------------------
int __fastcall Function_22431f0(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int result;

  if ( Function_223b7b8() )
  {
    v9 = Function_223b7d8();
    *(uint *)(v6 + 5252) = 0;
    switch ( (uchar)v9 + 15 )
    {
      case 0:
      case 1:
      case 13:
        *(uint *)(v6 + 60) = v9;
        *(uint *)(v6 + 44) = 38;
        break;
      case 2:
        Function_2038a0c(v9, 0, v9 + 15, v10);
        return result;
      case 3:
        *(uint *)(v6 + 60) = v9;
        *(uint *)(v6 + 44) = 39;
        break;
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
        *(uint *)(v6 + 60) = v9;
        *(uint *)(v6 + 44) = 39;
        break;
      case 10:
        *(uint *)(v6 + 60) = v9;
        *(uint *)(v6 + 44) = 17;
        break;
      case 15:
        *(uint *)(v6 + 44) = 30;
        ((void (__fastcall *)(int))loc_2243B04)(v6);
        ((void (__fastcall *)(int, int, uint))loc_2243CE0)(v6, v6 + 2640, *(ushort *)(v6 + 276));
        ((void (__fastcall *)(uint, int))loc_2243E28)(*(uint *)(*(uint *)v6 + 24), v6 + 2640);
        Function_202cfec(*(uint *)(*(uint *)v6 + 40), 25);
        ((void (__fastcall *)(uint, int))loc_2243E44)(*(uint *)(*(uint *)v6 + 44), v6 + 2640);
        Function_202cf28(*(uint *)(*(uint *)v6 + 40), 24);
        v11 = Function_202440c(*(uint *)(*(uint *)v6 + 32));
        Function_206d104(v11);
        break;
      default:
        return a6(3);
    }
  }
  else if ( ++*(uint *)(v6 + 5252) == 3600 )
  {
    Function_2038a0c(3600, 3600, v7, v8);
  }
  return a6(3);
}

//----- (022432D8) --------------------------------------------------------
int __fastcall Function_22432d8(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;

  Function_223baec();
  *(uint *)(v6 + 44) = 15;
  *(uint *)(v6 + 5252) = 0;
  return a6(3);
}

//----- (022432F4) --------------------------------------------------------
int __fastcall Function_22432f4(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int result;

  if ( Function_223b7b8() )
  {
    v9 = Function_223b7d8() + 15;
    *(uint *)(v6 + 5252) = 0;
    switch ( (uchar)v9 )
    {
      case 0:
      case 1:
      case 3:
      case 0xD:
        Function_2038ae0(4);
        break;
      case 2:
        Function_2038a0c(v9, 5252, 0, v10);
        return result;
      case 0xA:
        Function_2038ae0(3);
        break;
      case 0xF:
        *(uint *)(v6 + 44) = 33;
        break;
      default:
        return a6(3);
    }
  }
  else if ( ++*(uint *)(v6 + 5252) == 3600 )
  {
    Function_2038a0c(3600, 3600, v7, v8);
  }
  return a6(3);
}

//----- (02243378) --------------------------------------------------------
int __fastcall Function_2243378(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;

  Function_223b8d8(v6 + 304);
  *(uint *)(v6 + 44) = 25;
  *(uint *)(v6 + 5252) = 0;
  return a6(3);
}

//----- (02243398) --------------------------------------------------------
int __fastcall Function_2243398(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int (__fastcall *a8)(int))
{
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int *v14;
  int v15;
  int v16;
  int *v17;
  int v18;

  if ( Function_223b7b8() )
  {
    v11 = Function_223b7d8();
    *(uint *)(v8 + 5252) = 0;
    switch ( (uchar)v11 + 15 )
    {
      case 0:
      case 1:
      case 3:
      case 13:
        *(uint *)(v8 + 60) = v11;
        *(uint *)(v8 + 44) = 38;
        break;
      case 2:
        Function_2039834(3u, 1u, 0, v12);
        break;
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 14:
        return a8(3);
      case 11:
        *(ushort *)(v8 + 54) = 0;
        if ( Function_202da60(**(uint **)v8) )
        {
          v17 = AllocPkmnData(0x3Eu);
          Function_202da70(**(uint ***)v8, (uint *)v17);
          Function_2076b10_Dummy();
          Function_200b5cc(*(int **)(v8 + 2960), 0, v18);
          *(uint *)(v8 + 40) = 3;
          *(uint *)(v8 + 44) = 34;
          Function_202da68(**(uint **)v8, 0);
          free((int)v17);
        }
        break;
      case 12:
        *(ushort *)(v8 + 54) = 0;
        if ( Function_202da60(**(uint **)v8) )
        {
          v14 = AllocPkmnData(0x3Eu);
          Function_202da70(**(uint ***)v8, (uint *)v14);
          Function_2076b10_Dummy();
          Function_200b5cc(*(int **)(v8 + 2960), 0, v15);
          *(uint *)(v8 + 40) = 2;
          *(uint *)(v8 + 44) = 34;
          v16 = Function_202daac(**(uint **)v8);
          ((void (__fastcall *)(int, int *, int, uint))loc_2243BC0)(v8, v14, v16, 0);
          Function_202da68(**(uint **)v8, 0);
          free((int)v14);
        }
        else
        {
          ((void (__fastcall *)(int))loc_2243628)(v8);
        }
        break;
      case 15:
        *(uint *)(v8 + 44) = 26;
        break;
      case 16:
        *(ushort *)(v8 + 54) = 1;
        v13 = ((int (__fastcall *)(int, int))loc_2243E80)(v8, v8 + 304);
        if ( v13 )
        {
          if ( v13 == 1 )
          {
            Function_223c5f4(v8);
            ((void (__fastcall *)(int, uint, int, int))loc_2245820)(v8, *(uint *)(v8 + 2964), 29, 1);
            Function_223c3f4(v8, 37, 28);
          }
          else if ( v13 == 2 )
          {
            Function_223c5f4(v8);
            ((void (__fastcall *)(int, uint, int, int))loc_2245820)(v8, *(uint *)(v8 + 2964), 35, 1);
            Function_223c3f4(v8, 37, 28);
          }
        }
        else
        {
          *(uint *)(v8 + 44) = 18;
          *(uint *)(v8 + 4272) = 1;
        }
        break;
    }
  }
  else if ( ++*(uint *)(v8 + 5252) == 3600 )
  {
    Function_2038a0c(3600, 3600, v9, v10);
  }
  return a8(3);
}

//----- (02243554) --------------------------------------------------------
int __fastcall Function_2243554(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;

  v6 = a1;
  Function_223c4c0(a1, a2, 0);
  *(uint *)(v6 + 44) = 36;
  return a6(3);
}

//----- (02243568) --------------------------------------------------------
int __fastcall Function_2243568(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;

  Function_223b888(v6 + 304);
  *(uint *)(v6 + 44) = 27;
  *(uint *)(v6 + 5252) = 0;
  return a6(3);
}

//----- (02243588) --------------------------------------------------------
int __fastcall Function_2243588(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int result;

  if ( Function_223b7b8() )
  {
    v9 = Function_223b7d8();
    *(uint *)(v6 + 5252) = 0;
    switch ( (uchar)v9 + 15 )
    {
      case 0:
      case 1:
      case 3:
      case 13:
        *(uint *)(v6 + 60) = v9;
        *(uint *)(v6 + 44) = 38;
        return a6(3);
      case 2:
        Function_2038a0c(v9, 0, v9 + 15, v10);
        return result;
      case 12:
        *(ushort *)(v6 + 54) = 0;
        goto LABEL_9;
      case 15:
        if ( ((int (__fastcall *)(int))loc_2243ED4)(v6) )
        {
          *(uint *)(v6 + 44) = 22;
          *(ushort *)(v6 + 54) = 0;
          return a6(3);
        }
        *(ushort *)(v6 + 54) = 1;
LABEL_9:
        ((void (__fastcall *)(int))loc_2243628)(v6);
        break;
      default:
        goto LABEL_9;
    }
  }
  else if ( ++*(uint *)(v6 + 5252) == 3600 )
  {
    Function_2038a0c(3600, 3600, v7, v8);
  }
  return a6(3);
}

//----- (0224362C) --------------------------------------------------------
int __fastcall Function_224362c(int a1, int a2, int a3, int a4, int a5, int (*a6)(void))
{
  int v6;
  int v7;
  int result;

  v7 = *(uint *)(v6 + 28);
  if ( v7 == 1 )
  {
    Function_223c4c0(a1, 1, 0);
    *(uint *)(v6 + 44) = 36;
    result = a6();
  }
  else
  {
    if ( v7 == 2 )
    {
      Function_223c4c0(a1, 2, 3);
      *(uint *)(v6 + 44) = 36;
    }
    result = a6();
  }
  return result;
}

//----- (02243658) --------------------------------------------------------
int __fastcall Function_2243658(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;
  int v7;
  int v8;

  v7 = Function_202daac(**(uint **)v6);
  ((void (__fastcall *)(int, int, int, uint))loc_2243BC0)(v6, v6 + 304, v7, *(char *)(v6 + 593));
  ((void (__fastcall *)(uint, int))loc_2243E28)(*(uint *)(*(uint *)v6 + 24), v6 + 304);
  Function_202cfec(*(uint *)(*(uint *)v6 + 40), 25);
  ((void (__fastcall *)(uint, int))loc_2243E44)(*(uint *)(*(uint *)v6 + 44), v6 + 304);
  Function_202cf28(*(uint *)(*(uint *)v6 + 40), 24);
  v8 = Function_202440c(*(uint *)(*(uint *)v6 + 32));
  Function_206d104(v8);
  Function_202da68(**(uint **)v6, 0);
  *(uint *)(v6 + 44) = 30;
  ((void (__fastcall *)(int, int, int))loc_2243EC4)(v6, 19, 11);
  return a6(3);
}

//----- (022436D4) --------------------------------------------------------
int __fastcall Function_22436d4(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;

  Function_223b928(a1);
  *(uint *)(v6 + 44) = 20;
  *(uint *)(v6 + 5252) = 0;
  return a6(3);
}

//----- (022436F0) --------------------------------------------------------
int __fastcall Function_22436f0(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  uint *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int result;

  if ( Function_223b7b8() )
  {
    v9 = Function_223b7d8();
    v6[1313] = 0;
    switch ( (uchar)v9 + 15 )
    {
      case 0:
      case 1:
      case 13:
        goto LABEL_6;
      case 2:
        Function_2038a0c(v9, v9 + 15, 0, v10);
        return result;
      case 3:
      case 11:
        v6[15] = v9;
LABEL_6:
        Function_2038ae0(4);
        break;
      case 12:
        Function_2038ae0(3);
        break;
      case 15:
        v6[11] = 33;
        break;
      default:
        return a6(3);
    }
  }
  else if ( ++v6[1313] == 3600 )
  {
    Function_2038a0c(3600, 3600, v7, v8);
  }
  return a6(3);
}

//----- (02243778) --------------------------------------------------------
int Function_2243778()
{
  return Function_224377c();
}

//----- (0224377C) --------------------------------------------------------
int __fastcall Function_224377c(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;

  *(ushort *)(v6 + 54) = 1;
  Function_223c4c0(a1, 9, 7);
  *(uint *)(v6 + 44) = 36;
  return a6(3);
}

//----- (02243794) --------------------------------------------------------
int __fastcall Function_2243794(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;

  *(ushort *)(v6 + 54) = 0;
  Function_223c4c0(a1, 9, 8);
  *(uint *)(v6 + 44) = 36;
  return a6(3);
}

//----- (022437AC) --------------------------------------------------------
int __fastcall Function_22437ac(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;

  v6 = a1;
  Function_223c4c0(a1, a2, a2);
  *(uint *)(v6 + 44) = 36;
  return a6(3);
}

//----- (022437C0) --------------------------------------------------------
int __fastcall Function_22437c0(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;

  *(ushort *)(v6 + 54) = 0;
  Function_223c4c0(a1, 9, 10);
  *(uint *)(v6 + 44) = 30;
  return a6(3);
}

//----- (022437D8) --------------------------------------------------------
int __fastcall Function_22437d8(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;

  Function_223b96c(a1);
  *(uint *)(v6 + 44) = 23;
  *(uint *)(v6 + 5252) = 0;
  return a6(3);
}

//----- (022437F4) --------------------------------------------------------
int __fastcall Function_22437f4(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int result;

  if ( Function_223b7b8() )
  {
    v9 = Function_223b7d8() + 15;
    *(uint *)(v6 + 5252) = 0;
    switch ( (uchar)v9 )
    {
      case 0:
      case 1:
      case 3:
      case 0xD:
        Function_2038ae0(4);
        return a6(3);
      case 2:
        Function_2038a0c(v9, 5252, 0, v10);
        return result;
      case 0xA:
        goto LABEL_6;
      case 0xB:
        goto LABEL_5;
      case 0xC:
        ((void (__fastcall *)(int))loc_2243628)(v6);
LABEL_5:
        ((void (__fastcall *)(int))loc_2243628)(v6);
LABEL_6:
        Function_2038ae0(3);
        break;
      case 0xF:
        ((void (__fastcall *)(int))loc_2243628)(v6);
        break;
      default:
        return a6(3);
    }
  }
  else if ( ++*(uint *)(v6 + 5252) == 3600 )
  {
    Function_2038a0c(3600, 3600, v7, v8);
  }
  return a6(3);
}

//----- (02243884) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (022438C8) --------------------------------------------------------
int __fastcall Function_22438c8(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;
  int v7;

  v6 = *(uint *)(a1 + 2964);
  v7 = ((int (*)(void))loc_2245820)();
  return a6(v7);
}

//----- (02243920) --------------------------------------------------------
int __fastcall Function_2243920(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;

  ((void (*)(void))loc_22438C4)();
  Function_223c3f4(v6, 37, 36);
  Function_223c4c0(v6, 0, 0);
  Function_223c5f4(v6);
  return a6(3);
}

//----- (02243948) --------------------------------------------------------
int __fastcall Function_2243948(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;

  ((void (*)(void))loc_22438C4)();
  Function_223c3f4(v6, 37, 36);
  Function_223c4c0(v6, 1, 0);
  Function_223c5f4(v6);
  ((void (__fastcall *)(int))loc_22442E0)(v6);
  return a6(3);
}

//----- (02243974) --------------------------------------------------------
int __fastcall Function_2243974(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;

  Function_223c3f4(a1, 37, 30);
  ((void (__fastcall *)(int, int, int))loc_2243EC4)(v6, 33, 36);
  return a6(3);
}

//----- (02243990) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (022439CC) --------------------------------------------------------
int __fastcall Function_22439cc(int a1, int a2)
{
  if ( !--*(uint *)(a1 + a2) )
    *(uint *)(a1 + 44) = 32;
  return 3;
}

//----- (022439E4) --------------------------------------------------------
int __fastcall Function_22439e4(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;

  if ( Function_2024828(*(uint *)(*(uint *)v6 + 32), a2, a3, a4) == 1 )
    *(uint *)(v6 + 44) = *(ushort *)(v6 + 4232);
  return a6(3);
}

//----- (02243A04) --------------------------------------------------------
int __fastcall Function_2243a04(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;

  if ( Function_2024828(*(uint *)(*(uint *)v6 + 32), a2, a3, a4) == 2 )
  {
    *(uint *)(v6 + 44) = *(ushort *)(v6 + 4234);
    Function_223c5f4(v6);
  }
  return a6(3);
}

//----- (02243A28) --------------------------------------------------------
int __fastcall Function_2243a28(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  uint *v6;

  Function_2024804();
  Function_2024814(*(uint *)(*v6 + 32), 2);
  v6[11] = 35;
  return a6(3);
}

//----- (02243A44) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02243A90) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02243AE8) --------------------------------------------------------
int __fastcall Function_2243ae8(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  uint *v6;

  if ( !Function_201d724(v6[761] & 0xFF) )
    v6[11] = v6[12];
  return a6(3);
}

//----- (02243B08) --------------------------------------------------------
int __fastcall Function_2243b08(ushort *a1, int a2, int a3, int a4, int a5, int a6, int a7, int (__fastcall *a8)(void *))
{
  int v8;
  ushort *v9;
  int *v10;
  int *v11;
  int v12;
  void *v13;
  int *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  uint *v19;

  v9 = a1;
  if ( a1[138] == 18 )
  {
    v14 = GetAdrOfPkmnInParty(*(uint **)(*(uint *)a1 + 8), (ushort)a1[139]);
    Function_207893c((int)v14, v15, v16, v17);
    v18 = (ushort)v9[138];
    Function_202da7c(**(uint ***)v9, (uint *)v14);
    Function_207a080(*(int **)(*(uint *)v9 + 8), (ushort)v9[139]);
    v13 = (void *)IsFirstPkmnInPartyWantedSpecies(*(uint *)(*(uint *)v9 + 8), 441);
    if ( !v13 )
    {
      v19 = (uint *)LoadVariableAreaAdress_16(*(uint *)(*(uint *)v9 + 32));
      v13 = Function_202cca8(v19);
    }
  }
  else
  {
    v10 = AllocPkmnData(0x3Eu);
    v11 = (int *)Function_2079c9c(
                   *(uint **)(*(uint *)v9 + 12),
                   (ushort)v9[138],
                   (ushort)v9[139]);
    Function_20774c8(v11, v10);
    v12 = (ushort)v9[138];
    Function_202da7c(**(uint ***)v9, (uint *)v10);
    Function_2079968(*(uint **)(*(uint *)v9 + 12), (ushort)v9[138], (ushort)v9[139]);
    v13 = (void *)free((int)v10);
  }
  if ( v8 )
    v13 = Function_202da68(**(uint **)v9, 1);
  return a8(v13);
}

//----- (02243BC4) --------------------------------------------------------
int Function_2243bc4()
{
  return Function_2243bc6();
}

//----- (02243BC6) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02243CE4) --------------------------------------------------------
int Function_2243ce4()
{
  return Function_2243ce6();
}

//----- (02243CE6) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02243DE8) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02243E2C) --------------------------------------------------------
int __fastcall Function_2243e2c(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v6 = a2;
  v7 = a4 + 1;
  v8 = *(uchar *)(a2 + a4);
  v9 = *(uchar *)(v6 + a4 + 5);
  v10 = Function_2038fdc(a1, v8, *(uchar *)(v6 + v7));
  return a6(v10);
}

//----- (02243E48) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02243E84) --------------------------------------------------------
int __fastcall Function_2243e84(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  ushort *v6;

  if ( ((int (__fastcall *)(int))loc_2241494)(a2) && GetNrOfPkmnInParty(*(uint *)(*(uint *)v6 + 8)) == 6 )
    return a6(2);
  if ( v6[2134] != 540 || GetNrOfPkmnInParty(*(uint *)(*(uint *)v6 + 8)) != 6 )
    return a6(0);
  return a6(1);
}

//----- (02243EC8) --------------------------------------------------------
int __fastcall Function_2243ec8(int result, int a2, short a3, int a4)
{
  *(ushort *)(result + a4 + 2) = a3;
  return result;
}

//----- (02243ED8) --------------------------------------------------------
int __fastcall Function_2243ed8(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;
  int result;

  if ( Function_202da60(**(uint **)v6) || !*(ushort *)(v6 + 54) )
    result = a6(0);
  else
    result = a6(1);
  return result;
}

//----- (02243EF8) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02243FA8) --------------------------------------------------------
int __fastcall Function_2243fa8(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int (__fastcall *a8)(int))
{
  int v8;
  int v9;
  uint *v10;
  int v11;

  v9 = a2;
  ((void (*)(void))loc_2243EF4)();
  *(uint *)(v8 + 4236) = Function_200679c(35930121, 16, 5u, 0x3Eu);
  v10 = (uint *)Function_201ced0(*(uint *)(v8 + 4236));
  *v10 = 0;
  v10[1] = -40;
  v10[2] = v9;
  v10[3] = v8;
  ((void (*)(void))loc_2243FEC)();
  v11 = Function_2005748(0x62Fu);
  return a8(v11);
}

//----- (02243FF0) --------------------------------------------------------
int __fastcall Function_2243ff0(int a1, int a2, int a3, int a4)
{
  return Function_2021d6c(*(uint *)(a3 + 3796), a2 + 7 * *(uint *)(a4 + 8));
}

//----- (0224400C) --------------------------------------------------------
int __fastcall Function_224400c(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int (*a8)(void))
{
  uint *v8;
  int v9;
  int v10;
  int v11;
  int result;
  int v13;

  v9 = a1;
  v10 = v8[3];
  switch ( (uchar)*v8 )
  {
    case 0u:
      if ( v8[1] > 160 )
      {
        v8[1] = 160;
        *v8 = 1;
        ((void (__fastcall *)(uint *))loc_2243FEC)(v8);
      }
      v8[1] += 5;
      v11 = ((int (__fastcall *)(uint, int))loc_224419C)(*(uint *)(v10 + 3796), 128);
      result = ((int (__fastcall *)(int))a8)(v11);
      break;
    case 1u:
      if ( Function_2021fd0(*(uint *)(v10 + 3796)) )
        goto LABEL_11;
      ((void (__fastcall *)(uint *, int))loc_2243FEC)(v8, 2);
      *v8 = 2;
      result = a8();
      break;
    case 2u:
      if ( v8[1] < 130 )
      {
        v8[1] = 130;
        *v8 = 3;
        ((void (__fastcall *)(uint *))loc_2243FEC)(v8);
      }
      v8[1] -= 2;
      v13 = ((int (__fastcall *)(uint, int))loc_224419C)(*(uint *)(v10 + 3796), 128);
      result = ((int (__fastcall *)(int))a8)(v13);
      break;
    case 3u:
      Function_2005748(0x60Du);
      *(ushort *)(v8[3] + 4240) = 1;
      Function_20067d0(v9);
      goto LABEL_11;
    default:
LABEL_11:
      result = a8();
      break;
  }
  return result;
}

//----- (022440B8) --------------------------------------------------------
int __fastcall Function_22440b8(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int (__fastcall *a8)(int))
{
  int v8;
  int v9;
  uint *v10;
  int v11;

  v9 = a2;
  *(uint *)(v8 + 4236) = Function_200679c((int)&loc_22440F8 + 1, 16, 5u, 0x3Eu);
  v10 = (uint *)Function_201ced0(*(uint *)(v8 + 4236));
  *v10 = 0;
  v10[1] = 130;
  v10[2] = v9;
  v10[3] = v8;
  ((void (*)(void))loc_2243FEC)();
  v11 = Function_2005748(0x60Eu);
  return a8(v11);
}

//----- (022440FC) --------------------------------------------------------
int __fastcall Function_22440fc(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int (*a8)(void))
{
  uint *v8;
  int v9;
  int v10;
  int result;
  int v12;
  int v13;

  v9 = v8[3];
  switch ( (uchar)*v8 )
  {
    case 0u:
      if ( v8[1] > 160 )
      {
        v8[1] = 160;
        *v8 = 1;
        ((void (__fastcall *)(uint *, int))loc_2243FEC)(v8, 6);
      }
      v8[1] += 2;
      v10 = ((int (__fastcall *)(uint, int))loc_224419C)(*(uint *)(v9 + 3796), 128);
      result = ((int (__fastcall *)(int))a8)(v10);
      break;
    case 1u:
      if ( Function_2021fd0(*(uint *)(v9 + 3796)) )
        goto LABEL_11;
      ((void (__fastcall *)(uint *, uint))loc_2243FEC)(v8, 0);
      *v8 = 2;
      v12 = Function_2005748(0x630u);
      result = ((int (__fastcall *)(int))a8)(v12);
      break;
    case 2u:
      if ( v8[1] < -20 )
      {
        *v8 = 3;
        ((void (__fastcall *)(uint *))loc_2243FEC)(v8);
      }
      v8[1] -= 5;
      v13 = ((int (__fastcall *)(uint, int))loc_224419C)(*(uint *)(v9 + 3796), 128);
      result = ((int (__fastcall *)(int))a8)(v13);
      break;
    case 3u:
      *(ushort *)(v9 + 4240) = 1;
      Function_20067d0(a1);
      goto LABEL_11;
    default:
LABEL_11:
      result = a8();
      break;
  }
  return result;
}

//----- (022441A0) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02244214) --------------------------------------------------------
int __fastcall Function_2244214(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;
  int v7;

  v7 = Function_2022664((uchar *)&loc_224633A);
  if ( v7 == -1 || v7 >= v6 )
    v7 = -1;
  return a6(v7);
}

//----- (02244234) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (022442DC) --------------------------------------------------------
void Function_22442dc()
{
  ;
}

//----- (022442E4) --------------------------------------------------------
int __fastcall Function_22442e4(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int (__fastcall *a10)(int))
{
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v11 = a1;
  v12 = 0;
  do
  {
    v13 = Function_2021d34(*(uint *)(v11 + v10));
    if ( v13 )
    {
      v14 = Function_2021e24(*(uint *)(v11 + 3800));
      v13 = ((int (__fastcall *)(int))loc_22442D8)(v12) + 1;
      if ( v14 != v13 )
      {
        v15 = ((int (__fastcall *)(int))loc_22442D8)(v12);
        v13 = Function_2021d6c(*(uint *)(v11 + 3800), v15 + 1);
      }
    }
    ++v12;
    v11 += 4;
  }
  while ( v12 < 7 );
  return a10(v13);
}

//----- (0224432C) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02244378) --------------------------------------------------------
int __fastcall Function_2244378(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int (__fastcall *a10)(uint), int a11)
{
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uint v16;

  v12 = a2;
  v13 = a3;
  v14 = Function_205ca0c(a11, a4);
  v15 = *(uint *)(v12 + 12);
  GXS_LoadOBJ((int *)(*(uint *)(v11 + 20) + 1536 * v14), *((ushort *)dword_2246310 + v13), 0x200u);
  v16 = GXS_LoadOBJPltt(v15 + 32 * v14, 32 * (v13 + 2), 0x20u);
  return a10(v16);
}

//----- (022443B8) --------------------------------------------------------
int __fastcall Function_22443b8(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(uint))
{
  int v6;
  uint v7;

  v7 = 4240;
  if ( *(ushort *)(v6 + 4240) )
  {
    free(*(uint *)(v6 + 4252));
    v7 = free(*(uint *)(v6 + 4244));
  }
  return a6(v7);
}

//----- (022443E0) --------------------------------------------------------
int __fastcall Function_22443e0(uint *a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  uint *v6;

  v6 = a1;
  a1[47] = ((int (__fastcall *)(uint, uint, uint, uint))loc_22411D8)(
             *(uint *)(*a1 + 8),
             *(uint *)(*a1 + 12),
             LOWORD(a1[a4]),
             HIWORD(a1[a4]));
  *((uchar *)v6 + 205) = 2;
  *((uchar *)v6 + 207) = 1;
  *((uchar *)v6 + 208) = 0;
  *((uchar *)v6 + 206) = 1;
  *((ushort *)v6 + 106) = 0;
  v6[58] = Function_208c324(*(uint *)(*v6 + 32));
  v6[54] = *(uint *)(*v6 + 52);
  v6[48] = *(uint *)(*v6 + 36);
  v6[55] = LoadVariableAreaAdress_18(*(uint *)(*v6 + 32));
  Function_208d720((int)(v6 + 47), (int)dword_224635C);
  Function_208e9c0((int)(v6 + 47), *(uint *)(*v6 + 28));
  v6[46] = AllocAndInitOverlayData((int *)&Unknown_20f410c, (int)(v6 + 47), 0x3Eu);
  v6[66] = 1;
  return a6(2);
}

//----- (022444B8) --------------------------------------------------------
int __fastcall sub_22444B8(uint *a1)
{
  Function_223c4c8(a1);
  return 1;
}

//----- (022444C4) --------------------------------------------------------
int sub_22444C4()
{
  return Function_22444c8();
}

//----- (022444C8) --------------------------------------------------------
int __fastcall Function_22444c8(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;
  uint v7;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;

  *(uint *)(v6 + 4260) = AllocPkmnData(0x3Eu);
  v7 = *(uint *)(v6 + 36);
  if ( v7 <= 0xA )
    return ((int (*)(void))((char *)&off_22444E6 + *((short *)&off_22444E6 + v7) + 2))();
  switch ( (uchar)v7 )
  {
    case 7:
      Function_2076b10_Dummy();
      *(uint *)(v6 + 236) = v9;
      *(uint *)(v6 + 240) = *(uint *)(v6 + 236);
      *(uint *)(v6 + 292) = ((int (__fastcall *)(int))loc_224486C)(v6 + 304);
      *(uint *)(v6 + 244) = *(uint *)(v6 + 292);
      *(uint *)(v6 + 248) = 3;
      *(uint *)(v6 + 252) = 2;
      break;
    case 8:
      Function_2076b10_Dummy();
      *(uint *)(v6 + 240) = v10;
      *(uint *)(v6 + 236) = *(uint *)(v6 + 240);
      *(uint *)(v6 + 292) = ((int (__fastcall *)(int))loc_224486C)(v6 + 304);
      *(uint *)(v6 + 244) = *(uint *)(v6 + 292);
      *(uint *)(v6 + 248) = 3;
      *(uint *)(v6 + 252) = 4;
      break;
    case 9:
      Function_202da70(**(uint ***)v6, *(uint **)(v6 + 4260));
      v14 = *(uint *)(v6 + 4260);
      Function_2076b10_Dummy();
      *(uint *)(v6 + 236) = v15;
      v16 = *(uint *)(v6 + 288);
      Function_2076b10_Dummy();
      *(uint *)(v6 + 240) = v17;
      *(uint *)(v6 + 292) = ((int (__fastcall *)(int))loc_224486C)(v6 + 596 + 292 * *(uint *)(v6 + 288));
      *(uint *)(v6 + 244) = *(uint *)(v6 + 292);
      *(uint *)(v6 + 248) = 3;
      *(uint *)(v6 + 252) = 1;
      break;
    case 0xA:
      Function_2076b10_Dummy();
      *(uint *)(v6 + 240) = v11;
      Function_202da70(**(uint ***)v6, *(uint **)(v6 + 4260));
      v12 = *(uint *)(v6 + 4260);
      Function_2076b10_Dummy();
      *(uint *)(v6 + 236) = v13;
      *(uint *)(v6 + 292) = ((int (__fastcall *)(int))loc_224486C)(v6 + 304);
      *(uint *)(v6 + 244) = *(uint *)(v6 + 292);
      *(uint *)(v6 + 248) = 3;
      *(uint *)(v6 + 252) = 1;
      break;
    default:
      break;
  }
  *(uint *)(v6 + 256) = *(uint *)(*(uint *)v6 + 36);
  *(uint *)(v6 + 184) = AllocAndInitOverlayData(dword_2246368, v6 + 236, 0x3Eu);
  *(uint *)(v6 + 264) = 1;
  return a6(2);
}

//----- (02244678) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0224484C) --------------------------------------------------------
int __fastcall Function_224484c(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  uint *v6;

  free(v6[1065]);
  free(v6[73]);
  Function_223c4c8(v6);
  return a6(1);
}

//----- (02244870) --------------------------------------------------------
int __fastcall Function_2244870(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int (__fastcall *a8)(int *))
{
  int v8;
  int *v9;

  v9 = AllocTrainerData(0x3Eu);
  InitTrainerData(v9);
  Function_2025ec0(v9, (ushort *)(v8 + 268));
  Function_2025fd0((int)v9, *(uchar *)(v8 + 290));
  Function_2025fdc((int)v9, *(uchar *)(v8 + 291));
  return a8(v9);
}

//----- (022448AC) --------------------------------------------------------
int __fastcall Function_22448ac(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  char v6;

  if ( v6 )
    return a6(a1 + 596 + 292 * *(uint *)(a1 + 288));
  if ( a2 == 10 )
    return a6(a1 + 304);
  if ( a2 == 8 )
    return a6(a1 + 304);
  ErrorHandler();
  return a6(0);
}

//----- (022448E8) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02244950) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (022449FC) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02244A2C) --------------------------------------------------------
int __fastcall Function_2244a2c(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  uint *v6;
  int *v7;
  int result;

  v7 = (int *)v6[1109];
  if ( v7 )
  {
    Call_RemoveTaskFromTaskList(v7);
    v6[1109] = 0;
    v6[1110] = 0;
  }
  ((void (__fastcall *)(uint *))loc_2244F60)(v6);
  ((void (__fastcall *)(uint *))loc_2244EFC)(v6);
  ((void (__fastcall *)(uint))loc_2244B64)(v6[1]);
  v6[1110] = 0;
  Function_223c4c8(v6);
  if ( v6[5] )
    result = a6(1);
  else
    result = a6(5);
  return result;
}

//----- (02244A7C) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02244B68) --------------------------------------------------------
int __fastcall Function_2244b68(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;
  int v7;

  Function_2019044(a1, 5);
  Function_2019044(v6, 4);
  Function_2019044(v6, 1);
  v7 = Function_2019044(v6, 0);
  return a6(v7);
}

//----- (02244B8C) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02244DB4) --------------------------------------------------------
int __fastcall Function_2244db4(int a1, int a2, int a3, int a4, int a5, int (*a6)(void))
{
  int v6;

  if ( *(uint *)(v6 + 4) )
  {
    *(uchar *)(v6 + 811) ^= 1u;
    if ( !(*(uchar *)(v6 + 811) & 1) )
    {
      GX_LoadBGPltt(v6 + 136 + 32 * *(short *)(v6 + 808), 0, 0x20u);
      GXS_LoadBGPltt(v6 + 136 + 32 * *(short *)(v6 + 808), 0, 0x20u);
      if ( *(uchar *)(v6 + 810) )
      {
        if ( (short)--*(ushort *)(v6 + 808) < 0 )
        {
          *(ushort *)(v6 + 808) = 1;
          *(uchar *)(v6 + 810) ^= 1u;
        }
      }
      else if ( (short)++*(ushort *)(v6 + 808) >= 21 )
      {
        *(ushort *)(v6 + 808) = 19;
        *(uchar *)(v6 + 810) ^= 1u;
        return a6();
      }
    }
  }
  return a6();
}

//----- (02244E48) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02244F00) --------------------------------------------------------
int __fastcall Function_2244f00(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(uint))
{
  int v6;
  uint v7;

  Function_201a8fc(v6 + 3836);
  Function_201a8fc(v6 + 3868);
  v7 = Function_201a8fc(v6 + 3884);
  return a6(v7);
}

//----- (02244F2C) --------------------------------------------------------
int __fastcall Function_2244f2c(int a1, int a2, int a3, int a4, int a5, int (*a6)(void))
{
  int v6;

  *(uint *)(v6 + 2992) = Function_2023790(180, 0x3Eu);
  *(uint *)(v6 + 3040) = Function_2023790(256, 0x3Eu);
  *(uint *)(v6 + 2996) = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v6 + 2964), 0x1Fu);
  return a6();
}

//----- (02244F64) --------------------------------------------------------
int __fastcall Function_2244f64(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(uint))
{
  int *v6;
  int v7;
  int v8;
  uint v9;

  Function_20237bc_FreeMsg(v6[749], a2);
  Function_20237bc_FreeMsg(v6[760], v7);
  v9 = Function_20237bc_FreeMsg(v6[748], v8);
  return a6(v9);
}

//----- (02244F8C) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02244FC4) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0224502C) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0224505C) --------------------------------------------------------
int __fastcall Function_224505c(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  uint *v6;
  int v7;

  v7 = Function_2002114(v6[1052], 0x3Eu);
  if ( v7 != -1 )
  {
    if ( v7 == -2 )
    {
      if ( ((int (*)(void))dword_21D7A8C[0])() )
      {
        Function_223c4c0((int)v6, 7, 11);
        v6[7] = 1;
        v6[11] = 11;
      }
      else
      {
        v6[11] = 0;
      }
    }
    else
    {
      if ( ((int (*)(void))dword_21D7A8C[0])() )
        ((void (*)(void))dword_21D7DB0[0])();
      Function_203848c();
      Function_223c4c0((int)v6, 0, 0);
      v6[11] = 11;
    }
  }
  return a6(3);
}

//----- (022450C0) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (022450EC) --------------------------------------------------------
int __fastcall Function_22450ec(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;
  uint v7;

  v7 = Function_203848c();
  ((void (__fastcall *)(uint))dword_21D7DB0[0])(v7);
  Function_223c4c0(v6, 0, 0);
  *(uint *)(v6 + 44) = 19;
  return a6(3);
}

//----- (0224510C) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02245138) --------------------------------------------------------
int __fastcall Function_2245138(int a1, int a2, int a3, int a4, int a5, int (*a6)(void))
{
  int v6;
  int v7;

  ((void (__fastcall *)(int, int, int, int))dword_21D78C8[0])(a1 + 84, 2, 1, 20);
  v7 = ((int (__fastcall *)(int))dword_21D792C[0])(2);
  ((void (__fastcall *)(int))dword_21D797C[0])(v7);
  *(uint *)(v6 + 44) = 3;
  return a6();
}

//----- (02245158) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (022451DC) --------------------------------------------------------
int __fastcall Function_22451dc(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;

  ((void (*)(void))dword_21D81DC[0])();
  *(uint *)(v6 + 44) = 5;
  return a6(3);
}

//----- (022451EC) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0224529C) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (022452E4) --------------------------------------------------------
int __fastcall Function_22452e4(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;

  Function_223bb40(a1);
  *(uint *)(v6 + 44) = 8;
  *(uint *)(v6 + 5252) = 0;
  return a6(3);
}

//----- (02245300) --------------------------------------------------------
int __fastcall Function_2245300(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int (__fastcall *a8)(int))
{
  uint *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int result;

  if ( Function_223b7b8() )
  {
    v11 = Function_223b7d8();
    v8[1313] = 0;
    switch ( (uchar)v11 + 15 )
    {
      case 0:
      case 3:
        Function_223c5f4((int)v8);
        v8[15] = v11;
        v8[11] = 21;
        break;
      case 1:
      case 13:
        Function_223c5f4((int)v8);
        v8[15] = v11;
        v8[11] = 21;
        break;
      case 14:
      case 17:
        Function_223c5f4((int)v8);
        v8[15] = v11;
        v8[11] = 21;
        break;
      case 15:
        v8[11] = 9;
        break;
      case 16:
        Function_223c5f4((int)v8);
        v8[15] = v11;
        v8[11] = 21;
        break;
      default:
        v12 = Function_223c5f4((int)v8);
        Function_2038a0c(v12, v13, v14, v15);
        return result;
    }
  }
  else if ( ++v8[1313] == 3600 )
  {
    Function_2038a0c(3600, 3600, v9, v10);
  }
  return a8(3);
}

//----- (022453B8) --------------------------------------------------------
int __fastcall Function_22453b8(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;
  int v7;
  uint v8;

  Function_2030e78(*(uint *)(*(uint *)v6 + 32), v6 + 4324);
  Function_223bb84((char *)(v6 + 4324), v6 + 4424, v7, v8);
  *(uint *)(v6 + 44) = 10;
  *(uint *)(v6 + 5252) = 0;
  return a6(3);
}

//----- (022453EC) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x2245682 for case 3"

//----- (02245540) --------------------------------------------------------
int __fastcall Function_2245540(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  uint *v6;
  int v7;

  v7 = ((int (__fastcall *)(int, uint))dword_21D1E30[67])(-v6[17], v6[18]);
  ((void (__fastcall *)(uint *, int, int))loc_22459B0)(v6, v7, -v6[17]);
  v6[11] = 24;
  return a6(3);
}

//----- (02245564) --------------------------------------------------------
int __fastcall Function_2245564(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;

  if ( dword_21BF6C4 & 1 || dword_21BF6C4 & 2 )
  {
    Function_200dc9c(v6 + 3884, 0);
    *(uint *)(v6 + 44) = 0;
  }
  return a6(3);
}

//----- (02245594) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (022455D0) --------------------------------------------------------
int __fastcall Function_22455d0(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;
  int v7;

  v7 = Function_2002114(*(uint *)(v6 + 4208), 0x3Eu);
  if ( v7 != -1 )
  {
    if ( v7 == -2 )
    {
      *(uint *)(v6 + 44) = 0;
    }
    else
    {
      Function_223c4c0(v6, 0, 0);
      *(uint *)(v6 + 44) = 11;
    }
  }
  return a6(3);
}

//----- (02245608) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (022456CC) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0224579C) --------------------------------------------------------
int __fastcall Function_224579c(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  uint *v6;

  if ( !Function_201d724(v6[761] & 0xFF) )
    v6[11] = v6[12];
  return a6(3);
}

//----- (022457BC) --------------------------------------------------------
int __fastcall Function_22457bc(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  uint *v6;

  if ( !Function_201d724(v6[761] & 0xFF) )
  {
    if ( v6[1056] > 30 )
      v6[11] = v6[12];
    ++v6[1056];
  }
  return a6(3);
}

//----- (022457F0) --------------------------------------------------------
int __fastcall Function_22457f0(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int))
{
  int v6;
  int v7;

  if ( !Function_201d724(*(uint *)(v6 + 3044) & 0xFF) )
  {
    *(uint *)(v6 + 4208) = Function_223c3c0(*(uint **)(v6 + 4), 13, 564, v7);
    *(uint *)(v6 + 44) = *(uint *)(v6 + 48);
  }
  return a6(3);
}

//----- (02245824) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02245894) --------------------------------------------------------
int __fastcall Function_2245894(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int), int a7, int a8)
{
  int v8;

  if ( a4 == 1 )
  {
    a3 = (8 * *(uchar *)(v8 + 7) - Function_2002d7c(a8, a2, 0)) / 2;
  }
  else if ( a4 == 2 )
  {
    a3 = 8 * *(uchar *)(v8 + 7) - Function_2002d7c(a8, a2, 0);
  }
  return a6(a3);
}

//----- (022458CC) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02245900) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02245938) --------------------------------------------------------
int sub_2245938()
{
  return Function_224593c();
}

//----- (0224593C) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (022459B4) --------------------------------------------------------
#error "Failed to decompile function. "

