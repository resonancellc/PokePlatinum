//----- (022561D4) --------------------------------------------------------
int __fastcall Function_22561d4(int *a1, int a2)
{
  int *v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = a2;
  v4 = malloc(8u, 40);
  if ( !v4 || !Function_2256210() )
    return 0;
  *(uint *)(v4 + 16) = v3;
  AddTaskToTaskList1((int)Function_22562cc, v4, 1u);
  *v2 = v4;
  return 1;
}

//----- (02256210) --------------------------------------------------------
int __fastcall Function_2256210(int a1)
{
  int v1;
  int result;
  int v3;

  v1 = a1;
  if ( !Function_225697c(a1 + 20, a1 + 24) )
    goto LABEL_11;
  *(uchar *)v1 = 0;
  *(uchar *)(v1 + 1) = 0;
  *(uchar *)(v1 + 3) = 0;
  *(uchar *)(v1 + 2) = 0;
  *(uchar *)(v1 + 4) = 0;
  *(ushort *)(v1 + 6) = 17;
  *(uint *)(v1 + 8) = -1;
  Function_2256e9c(v1 + 28, 10);
  Function_2256e9c(v1 + 32, 10);
  Function_2256e9c(v1 + 36, 10);
  if ( !*(uint *)(v1 + 28) || !*(uint *)(v1 + 32) || !*(uint *)(v1 + 36) )
    return 0;
  v3 = ((int (__fastcall *)(int *, int, int (*)(), int, int))dword_2255ACC[0])(
         dword_2257658,
         17,
         Function_2256344,
         v1,
         8);
  *(uint *)(v1 + 12) = v3;
  if ( v3 )
LABEL_11:
    result = 1;
  else
    result = 0;
  return result;
}

//----- (02256298) --------------------------------------------------------
int __fastcall Function_2256298(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( a1[7] )
    return Function_2256ec0();
  if ( a1[8] )
    return Function_2256ec0();
  if ( a1[9] )
    return Function_2256ec0();
  if ( a1[3] )
    ((void (*)(void))dword_2255B34[0])();
  return Function_22569ac(v1[5]);
}

//----- (022562CC) --------------------------------------------------------
uint __fastcall Function_22562cc(int *a1, uchar *a2)
{
  uchar *v2;
  int *v3;
  uint result;

  v2 = a2;
  v3 = a1;
  if ( a2[3] )
  {
    Function_225632c(a2, 6);
    v2[3] = 0;
  }
  result = *v2;
  if ( result < 7 )
  {
    *((ushort *)v2 + 3) = 17;
    ((void (__fastcall *)(uint, uint))dword_2254518[0])(*((uint *)v2 + 4), *((uint *)v2 + 3));
    result = ((int (__fastcall *)(uchar *))*(&off_225763C + *v2))(v2);
    if ( result )
    {
      Function_2256298(v2);
      free((int)v2);
      Call_RemoveTaskFromTaskList(v3);
      result = ((int (__fastcall *)(uint))dword_2254260[0])(*((uint *)v2 + 4));
    }
  }
  return result;
}

//----- (02256324) --------------------------------------------------------
int __fastcall Function_2256324(int result)
{
  *(uchar *)(result + 3) = 1;
  return result;
}

//----- (0225632C) --------------------------------------------------------
char *__fastcall Function_225632c(char *result, char a2)
{
  if ( result[3] )
    a2 = 6;
  *result = a2;
  result[2] = *result;
  result[1] = 0;
  return result;
}

//----- (02256344) --------------------------------------------------------
int __fastcall Function_2256344(int result, int a2, int a3, int a4)
{
  short v4;
  int v5;
  int v6;

  v4 = result;
  v5 = a2;
  v6 = a4;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      *(ushort *)(a4 + 24) = result;
      result = Function_22569b8(*(uint *)(a4 + 20), 1);
    }
  }
  else
  {
    *(ushort *)(a4 + 24) = result;
    result = Function_22569b8(*(uint *)(a4 + 20), 2);
  }
  if ( v5 == 3 )
    *(ushort *)(v6 + 6) = v4;
  return result;
}

//----- (02256374) --------------------------------------------------------
int __fastcall Function_2256374(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_22569dc(*(uint *)(v1 + 20), 0) )
    {
      ((void (__fastcall *)(uint))dword_225424C[0])(*(uint *)(v1 + 16));
      Function_225632c((char *)v1, 1);
    }
  }
  else
  {
    Function_22569b8(*(uint *)(v1 + 20), 0);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (022563B4) --------------------------------------------------------
int __fastcall Function_22563b4(char *a1)
{
  char *v1;
  int v2;
  bool v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = a1;
  if ( a1[1] )
  {
    if ( a1[1] == 1 && Function_22569dc(*((uint *)a1 + 5), *((uint *)a1 + 2)) )
    {
      v7 = (uchar)v1[2];
      if ( v7 == (uchar)*v1 )
        v1[1] = 0;
      else
        Function_225632c(v1, v7);
    }
  }
  else
  {
    *((uint *)a1 + 2) = -1;
    switch ( (uchar)*((ushort *)a1 + 3) )
    {
      case 0xAu:
        a1[4] = 1;
        break;
      case 0xBu:
      case 0xCu:
      case 0xDu:
      case 0xEu:
        *((ushort *)a1 + 13) = *((ushort *)a1 + 3);
        a1[4] = 0;
        *((uint *)a1 + 2) = 8;
        a1[2] = 2;
        break;
      case 0xFu:
        v2 = *((uint *)a1 + 7);
        Function_2256914();
        Function_2256ec8(*((uint *)v1 + 7));
        break;
      case 0x10u:
        Function_2256868();
        *((uint *)v1 + 2) = 4;
        break;
      case 0x11u:
        break;
      default:
        v3 = a1[4] == 0;
        v4 = *((uint *)a1 + 7);
        if ( v3 )
        {
          if ( Function_225717c(v4) )
            *((uint *)v1 + 2) = 3;
        }
        else if ( Function_22571b8(v4) )
        {
          *((uint *)v1 + 2) = 3;
        }
        break;
    }
    v5 = *((uint *)v1 + 2);
    if ( v5 == -1 )
    {
      v6 = (uchar)v1[2];
      if ( v6 != (uchar)*v1 )
        Function_225632c(v1, v6);
    }
    else
    {
      Function_22569b8(*((uint *)v1 + 5), v5);
      ++v1[1];
    }
  }
  return 0;
}

//----- (0225648C) --------------------------------------------------------
int __fastcall Function_225648c(char *a1)
{
  char *v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  if ( a1[1] )
  {
    if ( a1[1] == 1 && Function_22569dc(*((uint *)a1 + 5), *((uint *)a1 + 2)) )
    {
      v5 = (uchar)v1[2];
      if ( v5 == (uchar)*v1 )
        v1[1] = 0;
      else
        Function_225632c(v1, v5);
    }
  }
  else
  {
    *((uint *)a1 + 2) = -1;
    switch ( (uchar)*((ushort *)a1 + 3) )
    {
      case 0xAu:
        Function_2256ec8(*((uint *)a1 + 8));
        *((uint *)v1 + 2) = 5;
        v1[4] = 1;
        v1[2] = 3;
        break;
      case 0xBu:
      case 0xCu:
      case 0xDu:
      case 0xEu:
        *((ushort *)a1 + 13) = *((ushort *)a1 + 3);
        *((uint *)a1 + 2) = 8;
        break;
      case 0xFu:
        Function_2256ed8(*((uint *)a1 + 8), *((uint *)a1 + 7));
        if ( Function_2256888(v1, *((ushort *)v1 + 13)) )
        {
          Function_2256914(v1, *((uint *)v1 + 9));
          *((uint *)v1 + 2) = 6;
          v1[2] = 4;
        }
        else
        {
          *((uint *)v1 + 2) = 9;
          v1[2] = 5;
        }
        break;
      case 0x10u:
        Function_2256868();
        *((uint *)v1 + 2) = 4;
        v1[2] = 1;
        break;
      case 0x11u:
        break;
      default:
        Function_2256ec8(*((uint *)a1 + 8));
        v2 = *((ushort *)v1 + 3);
        if ( Function_225717c(*((uint *)v1 + 8)) )
        {
          *((uint *)v1 + 2) = 5;
          v1[2] = 3;
        }
        break;
    }
    v3 = *((uint *)v1 + 2);
    if ( v3 == -1 )
    {
      v4 = (uchar)v1[2];
      if ( v4 != (uchar)*v1 )
        Function_225632c(v1, v4);
    }
    else
    {
      Function_22569b8(*((uint *)v1 + 5), v3);
      ++v1[1];
    }
  }
  return 0;
}

//----- (02256588) --------------------------------------------------------
int __fastcall Function_2256588(char *a1)
{
  char *v1;
  bool v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  if ( a1[1] )
  {
    if ( a1[1] == 1 && Function_22569dc(*((uint *)a1 + 5), *((uint *)a1 + 2)) )
    {
      v6 = (uchar)v1[2];
      if ( v6 == (uchar)*v1 )
        v1[1] = 0;
      else
        Function_225632c(v1, v6);
    }
  }
  else
  {
    *((uint *)a1 + 2) = -1;
    switch ( (uchar)*((ushort *)a1 + 3) )
    {
      case 0xAu:
        a1[4] = 1;
        break;
      case 0xBu:
      case 0xCu:
      case 0xDu:
      case 0xEu:
        if ( Function_2256888(a1, *((ushort *)a1 + 13)) )
        {
          *((ushort *)v1 + 13) = *((ushort *)v1 + 3);
          v1[4] = 0;
          Function_2256ed8(*((uint *)v1 + 7), *((uint *)v1 + 9));
          *((uint *)v1 + 2) = 7;
          v1[2] = 2;
        }
        else
        {
          *((uint *)v1 + 2) = 9;
          v1[2] = 5;
        }
        break;
      case 0xFu:
        if ( Function_2256888(a1, *((ushort *)a1 + 13)) )
        {
          Function_2256914(v1, *((uint *)v1 + 9));
          *((uint *)v1 + 2) = 6;
          v1[4] = 0;
          v1[2] = 4;
        }
        else
        {
          *((uint *)v1 + 2) = 9;
          v1[2] = 5;
        }
        break;
      case 0x10u:
        Function_2256868();
        *((uint *)v1 + 2) = 4;
        v1[2] = 1;
        break;
      case 0x11u:
        break;
      default:
        v2 = a1[4] == 0;
        v3 = *((uint *)a1 + 8);
        if ( v2 )
        {
          if ( Function_225717c(v3) )
            *((uint *)v1 + 2) = 5;
        }
        else if ( Function_22571b8(v3) )
        {
          *((uint *)v1 + 2) = 5;
        }
        break;
    }
    v4 = *((uint *)v1 + 2);
    if ( v4 == -1 )
    {
      v5 = (uchar)v1[2];
      if ( v5 != (uchar)*v1 )
        Function_225632c(v1, v5);
    }
    else
    {
      Function_22569b8(*((uint *)v1 + 5), v4);
      ++v1[1];
    }
  }
  return 0;
}

//----- (022566A0) --------------------------------------------------------
int __fastcall Function_22566a0(char *a1)
{
  char *v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  if ( a1[1] )
  {
    if ( a1[1] == 1 && Function_22569dc(*((uint *)a1 + 5), *((uint *)a1 + 2)) )
    {
      v5 = (uchar)v1[2];
      if ( v5 == (uchar)*v1 )
        v1[1] = 0;
      else
        Function_225632c(v1, v5);
    }
  }
  else
  {
    *((uint *)a1 + 2) = -1;
    switch ( (uchar)*((ushort *)a1 + 3) )
    {
      case 0xAu:
        Function_2256868();
        *((uint *)v1 + 2) = 3;
        v1[4] = 1;
        v1[2] = 1;
        break;
      case 0xBu:
      case 0xCu:
      case 0xDu:
      case 0xEu:
        *((ushort *)a1 + 13) = *((ushort *)a1 + 3);
        *((uint *)a1 + 2) = 8;
        a1[4] = 0;
        Function_2256ed8(*((uint *)a1 + 7), *((uint *)a1 + 9));
        v1[2] = 2;
        break;
      case 0xFu:
        Function_2256ed8(*((uint *)a1 + 7), *((uint *)a1 + 9));
        if ( Function_2256888(v1, *((ushort *)v1 + 13)) )
        {
          Function_2256914(v1, *((uint *)v1 + 9));
          *((uint *)v1 + 2) = 6;
          v1[4] = 0;
        }
        else
        {
          *((uint *)v1 + 2) = 9;
          v1[2] = 5;
        }
        break;
      case 0x10u:
        Function_2256868();
        *((uint *)v1 + 2) = 4;
        v1[2] = 1;
        break;
      case 0x11u:
        break;
      default:
        Function_2256ec8(*((uint *)a1 + 7));
        v2 = *((ushort *)v1 + 3);
        if ( Function_225717c(*((uint *)v1 + 7)) )
          *((uint *)v1 + 2) = 3;
        v1[2] = 1;
        break;
    }
    v3 = *((uint *)v1 + 2);
    if ( v3 == -1 )
    {
      v4 = (uchar)v1[2];
      if ( v4 != (uchar)*v1 )
        Function_225632c(v1, v4);
    }
    else
    {
      Function_22569b8(*((uint *)v1 + 5), v3);
      ++v1[1];
    }
  }
  return 0;
}

//----- (022567A8) --------------------------------------------------------
int __fastcall Function_22567a8(char *a1)
{
  char *v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  if ( a1[1] )
  {
    if ( a1[1] == 1 && Function_22569dc(*((uint *)a1 + 5), *((uint *)a1 + 2)) )
    {
      v5 = (uchar)v1[2];
      if ( v5 == (uchar)*v1 )
        v1[1] = 0;
      else
        Function_225632c(v1, v5);
    }
  }
  else
  {
    *((uint *)a1 + 2) = -1;
    switch ( (uchar)*((ushort *)a1 + 3) )
    {
      case 0xAu:
        Function_2256868();
        *((uint *)v1 + 2) = 3;
        v1[4] = 1;
        v1[2] = 1;
        break;
      case 0xBu:
      case 0xCu:
      case 0xDu:
      case 0xEu:
      case 0xFu:
      case 0x11u:
        break;
      case 0x10u:
        Function_2256868();
        *((uint *)v1 + 2) = 3;
        v1[2] = 1;
        break;
      default:
        Function_2256868();
        v2 = *((ushort *)v1 + 3);
        if ( Function_225717c(*((uint *)v1 + 7)) )
          *((uint *)v1 + 2) = 3;
        v1[2] = 1;
        break;
    }
    v3 = *((uint *)v1 + 2);
    if ( v3 == -1 )
    {
      v4 = (uchar)v1[2];
      if ( v4 != (uchar)*v1 )
        Function_225632c(v1, v4);
    }
    else
    {
      Function_22569b8(*((uint *)v1 + 5), v3);
      ++v1[1];
    }
  }
  return 0;
}

//----- (02256868) --------------------------------------------------------
int __fastcall Function_2256868(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_2256ec8(*(uint *)(a1 + 28));
  Function_2256ec8(*(uint *)(v1 + 32));
  Function_2256ec8(*(uint *)(v1 + 36));
  *(ushort *)(v1 + 26) = 17;
  result = 0;
  *(uchar *)(v1 + 4) = 0;
  return result;
}

//----- (02256888) --------------------------------------------------------
int __fastcall Function_2256888(uint *a1)
{
  uint *v1;

  v1 = a1;
  switch ( (uchar)a1 )
  {
    case 0:
      Function_2256f74(a1[7], a1[8], a1[9]);
      break;
    case 1:
      Function_2256ee8(a1[7], a1[8], a1[9]);
      break;
    case 2:
      Function_2257028(a1[7], a1[8], a1[9]);
      break;
    case 3:
      Function_2257058(a1[7], a1[8], a1[9]);
      break;
    default:
      return Function_2257240(v1[9], 10);
  }
  return Function_2257240(v1[9], 10);
}

//----- (022568E0) --------------------------------------------------------
int __fastcall Function_22568e0(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_22569e8(*(uint *)(v1 + 20)) )
      return 1;
  }
  else
  {
    Function_22569b8(*(uint *)(v1 + 20), 10);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (02256914) --------------------------------------------------------
int __fastcall Function_2256914(int a1, int a2)
{
  int v2;
  uint v3;
  uint v4;
  int result;
  int v6;
  uint *v7;
  int v8;
  int v9;
  int v10;

  v2 = a1;
  v4 = Function_2257468(a2);
  result = -v4;
  if ( (ll)__PAIR__(v3, v4) > 0 )
  {
    result = 493 - v4;
    if ( (ll)__PAIR__(v3, v4) <= 493 )
    {
      v6 = ((int (__fastcall *)(uint))dword_2254544[0])(*(uint *)(v2 + 16));
      v7 = (uint *)LoadPokedexDataAdress(v6);
      if ( Function_2027474(v7) )
      {
        result = v4 << 16;
        v4 = (ushort)v4;
      }
      else
      {
        result = Function_20775c4((ushort)v4, v8, v9, v10);
        v4 = result;
      }
      if ( v4 )
      {
        result = 493;
        if ( v4 <= 0x1ED )
        {
          result = WasPkmnSeen(v7, v4);
          if ( result )
            result = ((int (__fastcall *)(uint, uint))dword_2254444[0])(v4, 0);
        }
      }
    }
  }
  return result;
}

//----- (0225697C) --------------------------------------------------------
int __fastcall Function_225697c(uint *a1, int a2, int a3)
{
  int v3;
  uint *v4;
  int v5;
  uint *v6;
  uint *v7;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = (uint *)malloc(8u, 1164);
  v7 = v6;
  if ( !v6 )
    return 0;
  *v6 = v3;
  v6[1] = v5;
  ((void (__fastcall *)(uint *, int))dword_2255090[0])(v6 + 2, 8);
  *v4 = v7;
  return 1;
}

//----- (022569AC) --------------------------------------------------------
int __fastcall Function_22569ac(int result)
{
  if ( result )
    result = free(result);
  return result;
}

//----- (022569B8) --------------------------------------------------------
int __fastcall Function_22569b8(int *a1)
{
  int v1;

  v1 = *a1;
  return ((int (__fastcall *)(int *))dword_225517C[0])(&dword_22579C0);
}

//----- (022569DC) --------------------------------------------------------
void Function_22569dc()
{
  JUMPOUT(&byte_2255130);
}

//----- (022569E8) --------------------------------------------------------
void Function_22569e8()
{
  JUMPOUT(&dword_2255134[8]);
}

//----- (022569F4) --------------------------------------------------------
int __fastcall Function_22569f4(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = ((int (*)(void))dword_225517C[48])();
  return ((int (__fastcall *)(int, int))dword_225517C[42])(v2 + 8, v1);
}

//----- (02256A08) --------------------------------------------------------
int __fastcall Function_2256a08(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  ((void (__fastcall *)(int))dword_225517C[49])(a2);
  v3 = ((int (__fastcall *)(int))dword_225517C[48])(v2);
  Function_20183c4(*(uint **)(v3 + 4), 6u, dword_225769C, 0);
  LoadFromNARC_RGCN(12, 16, *(uint **)(v3 + 4), 6u, 0, 0, 1, 8);
  LoadFromNARC_RCSN(12, 17, *(uint **)(v3 + 4), 6u, 0, 0, 1, 8);
  Function_2256aa4(v3);
  ((void (*)(void))dword_2254544[93])();
  Function_2019448(*(uint **)(v3 + 4), 6u);
  REG_DISPCNT_SUB = REG_DISPCNT_SUB & 0xFFFFE0FF | ((((uint)(REG_DISPCNT_SUB << 19) >> 27) | 4) << 8);
  return Function_22569f4(v2);
}

//----- (02256AA4) --------------------------------------------------------
uint __fastcall Function_2256aa4(int a1)
{
  int v1;
  int v2;
  uchar *v3;
  uint v4;
  int v5;
  uint v6;
  ushort *v7;
  uint result;
  int v9;
  uint v10;

  v1 = a1;
  v2 = Function_2019fe4(*(uint *)(a1 + 4), 6);
  v3 = (uchar *)&byte_2257938;
  v10 = 0;
  do
  {
    v4 = v3[1];
    v5 = 0;
    if ( v4 < v4 + v3[3] )
    {
      v9 = 32 * v4;
      do
      {
        v6 = *v3;
        if ( v6 < v6 + v3[2] )
        {
          v7 = (ushort *)(v2 + 2 * v9 + 2 * v6);
          do
          {
            *(ushort *)(v1 + 2 * v5 + 76) = *v7;
            ++v6;
            ++v5;
            ++v7;
          }
          while ( v6 < *v3 + (uint)v3[2] );
        }
        v9 += 32;
        ++v4;
      }
      while ( v4 < v3[1] + (uint)v3[3] );
    }
    v3 += 4;
    result = v10 + 1;
    v1 += 64;
    v10 = result;
  }
  while ( result < 0x11 );
  return result;
}

//----- (02256B24) --------------------------------------------------------
int __fastcall Function_2256b24(int a1, int a2)
{
  int v2;
  ushort *v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = (ushort *)((int (__fastcall *)(int))dword_225517C[49])(a2);
  v4 = ((int (__fastcall *)(int))dword_225517C[48])(v2);
  v5 = *v3;
  ((void (__fastcall *)(int))dword_2254260[113])(1635);
  Function_20198c0(
    *(uint *)(v4 + 4),
    6,
    (int)*(&off_225797C + v5),
    (uchar)byte_2257938[4 * v5],
    byte_2257939[4 * v5],
    byte_225793A[4 * v5],
    byte_225793B[4 * v5]);
  Function_2019448(*(uint **)(v4 + 4), 6u);
  return Function_22569f4(v2);
}

//----- (02256B90) --------------------------------------------------------
int __fastcall Function_2256b90(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = *(ushort *)((int (__fastcall *)(int))dword_225517C[49])(a2);
  v4 = ((int (__fastcall *)(int))dword_225517C[48])(v2);
  Function_20198c0(
    *(uint *)(v4 + 4),
    6,
    v4 + 76 + (v3 << 6),
    (uchar)byte_2257938[4 * v3],
    byte_2257939[4 * v3],
    byte_225793A[4 * v3],
    byte_225793B[4 * v3]);
  Function_2019448(*(uint **)(v4 + 4), 6u);
  return Function_22569f4(v2);
}

//----- (02256BF0) --------------------------------------------------------
int __fastcall Function_2256bf0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225517C[49])(a2);
  v4 = ((int (__fastcall *)(int))dword_225517C[48])(v2);
  Function_225726c(*(uint *)(v3 + 4), v4 + 48);
  Function_2256e0c(*(uint *)(v4 + 4), v4 + 48);
  Function_2019448(*(uint **)(v4 + 4), 6u);
  return Function_22569f4(v2);
}

//----- (02256C28) --------------------------------------------------------
int __fastcall Function_2256c28(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225517C[49])(a2);
  v4 = ((int (__fastcall *)(int))dword_225517C[48])(v2);
  Function_225726c(*(uint *)(v3 + 4), v4 + 48);
  Function_2256e0c(*(uint *)(v4 + 4), v4 + 48);
  Function_2256dcc(*(uint *)(v4 + 4));
  Function_2019448(*(uint **)(v4 + 4), 6u);
  return Function_22569f4(v2);
}

//----- (02256C68) --------------------------------------------------------
int __fastcall Function_2256c68(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225517C[49])(a2);
  v4 = ((int (__fastcall *)(int))dword_225517C[48])(v2);
  Function_225726c(*(uint *)(v3 + 8), v4 + 48);
  Function_2256e0c(*(uint *)(v4 + 4), v4 + 48);
  Function_2019448(*(uint **)(v4 + 4), 6u);
  return Function_22569f4(v2);
}

//----- (02256CA0) --------------------------------------------------------
int __fastcall Function_2256ca0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225517C[49])(a2);
  v4 = ((int (__fastcall *)(int))dword_225517C[48])(v2);
  Function_225726c(*(uint *)(v3 + 12), v4 + 48);
  Function_2256e0c(*(uint *)(v4 + 4), v4 + 48);
  Function_2256dcc(*(uint *)(v4 + 4));
  Function_2019448(*(uint **)(v4 + 4), 6u);
  return Function_22569f4(v2);
}

//----- (02256CE0) --------------------------------------------------------
int __fastcall Function_2256ce0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225517C[49])(a2);
  v4 = ((int (__fastcall *)(int))dword_225517C[48])(v2);
  Function_225726c(*(uint *)(v3 + 12), v4 + 48);
  Function_2256e0c(*(uint *)(v4 + 4), v4 + 48);
  Function_2256d90(*(uint *)(v4 + 4), v3);
  Function_2019448(*(uint **)(v4 + 4), 6u);
  return Function_22569f4(v2);
}

//----- (02256D20) --------------------------------------------------------
int __fastcall Function_2256d20(int a1, int a2)
{
  int v2;
  int v3;
  uint v4;
  int v5;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225517C[48])(a2);
  v4 = 0;
  v5 = v3;
  do
  {
    ++v4;
    *(ushort *)(v5 + 48) = 12;
    v5 += 2;
  }
  while ( v4 < 0xA );
  *(ushort *)(v3 + 2 * v4 + 48) = 13;
  Function_2256e0c(*(uint *)(v3 + 4), v3 + 48);
  Function_2256dcc(*(uint *)(v3 + 4));
  Function_2019448(*(uint **)(v3 + 4), 6u);
  return Function_22569f4(v2);
}

//----- (02256D64) --------------------------------------------------------
int __fastcall Function_2256d64(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225517C[48])(a2);
  v4 = ((int (__fastcall *)(int))dword_225517C[49])(v2);
  Function_2256d90(*(uint *)(v3 + 4), v4);
  Function_2019448(*(uint **)(v3 + 4), 6u);
  return Function_22569f4(v2);
}

//----- (02256D90) --------------------------------------------------------
int __fastcall Function_2256d90(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = Function_2019fe4(a1, 6);
  if ( *(ushort *)(v2 + 2) == 17 )
    result = Function_2256dcc(v3);
  else
    result = ((int (__fastcall *)(int))dword_225517C[55])(v4);
  return result;
}

//----- (02256DCC) --------------------------------------------------------
int __fastcall Function_2256dcc(int a1)
{
  int v1;

  v1 = Function_2019fe4(a1, 6);
  return ((int (__fastcall *)(int))dword_225517C[55])(v1);
}

//----- (02256DF0) --------------------------------------------------------
int __fastcall Function_2256df0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225517C[48])(a2);
  Function_2019044(*(uint *)(v3 + 4), 6);
  return Function_22569f4(v2);
}

//----- (02256E0C) --------------------------------------------------------
int __fastcall Function_2256e0c(int a1, ushort *a2)
{
  ushort *v2;
  int v3;
  int v4;
  ushort *v5;
  uint v6;
  int v7;
  int result;
  int v9;
  uint v10;
  int v11;

  v2 = a2;
  v3 = Function_2019fe4(a1, 6);
  v4 = 0;
  if ( *v2 != 13 )
  {
    v5 = v2;
    do
    {
      ++v5;
      ++v4;
    }
    while ( *v5 != 13 );
  }
  v6 = 0;
  v10 = 10 - v4;
  if ( v4 != 10 )
  {
    v7 = 5;
    do
    {
      ((void (__fastcall *)(int, int, int, int, int, int, uint))dword_225517C[55])(
        v3,
        v7,
        3,
        32,
        43,
        40,
        0);
      ++v6;
      v7 += 2;
    }
    while ( v6 < v10 );
  }
  result = 0;
  v11 = 0;
  if ( v6 < 0xA )
  {
    v9 = 2 * v6 + 5;
    do
    {
      ((void (__fastcall *)(int, int, int, int, int, int, uint))dword_225517C[55])(
        v3,
        v9,
        3,
        32,
        2 * (ushort)*v2 + 165,
        40,
        0);
      ++v6;
      result = v11 + 1;
      v9 += 2;
      ++v2;
      ++v11;
    }
    while ( v6 < 0xA );
  }
  return result;
}

//----- (02256E9C) --------------------------------------------------------
int __fastcall Function_2256e9c(int *a1, char a2)
{
  int *v2;
  char v3;
  int v4;

  v2 = a1;
  v3 = a2;
  v4 = malloc(8u, 12);
  *v2 = v4;
  if ( !v4 )
    return 0;
  *(uchar *)(v4 + 10) = v3;
  Function_2256ec8(*v2);
  return 1;
}

//----- (02256EC0) --------------------------------------------------------
uint __fastcall Function_2256ec0(int a1)
{
  return free(a1);
}

//----- (02256EC8) --------------------------------------------------------
int __fastcall Function_2256ec8(int result)
{
  *(uint *)result = 0;
  *(uint *)(result + 4) = 0;
  *(uchar *)(result + 9) = 0;
  *(uchar *)(result + 8) = 0;
  *(uchar *)(result + 11) = 0;
  return result;
}

//----- (02256ED8) --------------------------------------------------------
int __fastcall Function_2256ed8(uint *a1, int *a2)
{
  int *v2;
  uint *v3;
  int v4;
  int v5;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  v5 = a2[1];
  v2 += 2;
  *v3 = v4;
  v3[1] = v5;
  result = *v2;
  v3[2] = *v2;
  return result;
}

//----- (02256EE8) --------------------------------------------------------
int __fastcall Function_2256ee8(int a1, int a2, int a3)
{
  int *v3;
  int v4;
  int v5;
  int result;
  int v7;
  long long v8;
  long long v9;
  char v10;
  char v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;

  v3 = (int *)a2;
  v4 = a3;
  if ( *(uchar *)(a1 + 9) || *(uchar *)(a2 + 9) != 1 )
  {
    if ( *(uchar *)(a1 + 9) != 1 || *(uchar *)(a2 + 9) )
    {
      Function_22575ec(a1, a2, &v9, &v8);
      *(ull *)v4 = v9 + v8;
      *(uchar *)(v4 + 8) = v10;
      *(uchar *)(v4 + 9) = v11;
      result = Function_22574fc(v4);
    }
    else
    {
      v7 = *(uint *)(a1 + 4);
      v12 = *(uint *)a1;
      v13 = v7;
      v14 = *(uint *)(a1 + 8);
      BYTE1(v14) = 0;
      result = Function_2256f74(v3, &v12, a3);
    }
  }
  else
  {
    v5 = *(uint *)(a2 + 4);
    v15 = *v3;
    v16 = v5;
    v17 = v3[2];
    BYTE1(v17) = 0;
    result = Function_2256f74(a1, &v15, a3);
  }
  return result;
}

//----- (02256F74) --------------------------------------------------------
int __fastcall Function_2256f74(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  int result;
  ull *v9;
  ull *v10;
  uchar v11;
  ull v12;
  char v13;
  ull v14;
  uchar v15;
  int v16;
  int v17;
  int v18;
  int v19;

  v19 = a4;
  v4 = a1;
  v5 = (int *)a2;
  v6 = a3;
  if ( (*(uchar *)(a1 + 9) || *(uchar *)(a2 + 9) != 1) && (*(uchar *)(a1 + 9) != 1 || *(uchar *)(a2 + 9)) )
  {
    if ( Function_22571f4(a1, a2) )
    {
      result = Function_2256ec8(v6);
    }
    else
    {
      Function_22575ec(v4, v5, &v14, &v12);
      v9 = &v14;
      v10 = &v12;
      if ( v15 ^ (v14 < v12) )
      {
        v9 = &v12;
        v10 = &v14;
        v11 = v13 ^ 1;
      }
      else
      {
        v11 = v15;
      }
      *(uchar *)(v6 + 9) = v11;
      *(ull *)v6 = *v9 - *v10;
      *(uchar *)(v6 + 8) = *((uchar *)v9 + 8);
      result = Function_22574fc(v6);
    }
  }
  else
  {
    v7 = *(uint *)(a2 + 4);
    v16 = *v5;
    v17 = v7;
    v18 = v5[2];
    BYTE1(v18) ^= 1u;
    result = Function_2256ee8(a1, (int)&v16, a3);
  }
  return result;
}

//----- (02257028) --------------------------------------------------------
int __fastcall Function_2257028(uint *a1, int a2, long long *a3)
{
  uint *v3;
  int v4;
  long long *v5;
  long long v6;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  LODWORD(v6) = *a1;
  HIDWORD(v6) = v3[1];
  *a3 = ll_mul(v6, *(ull *)v4);
  *((uchar *)v5 + 8) = *((uchar *)v3 + 8) + *(uchar *)(v4 + 8);
  *((uchar *)v5 + 9) = *(uchar *)(v4 + 9) ^ *((uchar *)v3 + 9);
  return Function_22574fc(v5);
}

//----- (02257058) --------------------------------------------------------
int __fastcall Function_2257058(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int result;
  uint v6;
  int v7;
  int v8;
  uint v9;
  int v10;
  int i;
  int v12;
  int v13;
  ull v14;
  uint v15;
  int v16;
  int v17;
  uchar v18;
  int v19;
  int v20;
  uchar v21;

  v3 = a3;
  v4 = *(uint *)(a2 + 4);
  if ( *(ull *)a2 )
  {
    Function_22575ec(a1, a2, &v19, &v16);
    REG_DIVCNT = 2;
    REG_DIV_NUMER_L = v19;
    REG_DIV_NUMER_H = v20;
    REG_DIV_DENOM_L = v16;
    REG_DIV_DENOM_H = v17;
    v6 = (uint)&REG_DIVCNT >> 11;
    while ( (ushort)REG_DIVCNT & (ushort)v6 )
      ;
    v7 = REG_DIV_RESULT_H;
    *(uint *)v3 = REG_DIV_RESULT_L;
    *(uint *)(v3 + 4) = v7;
    *(uchar *)(v3 + 8) = 0;
    v8 = Function_2257498(v3);
    v9 = (uint)&REG_DIVCNT >> 11;
    while ( (ushort)REG_DIVCNT & (ushort)v9 )
      ;
    v10 = REG_DIVREM_RESULT_H;
    for ( i = REG_DIVREM_RESULT_L; __PAIR__(REG_DIVREM_RESULT_H, REG_DIVREM_RESULT_L); i = REG_DIVREM_RESULT_L )
    {
      if ( v8 + 1 + (uint)*(uchar *)(v3 + 8) >= *(uchar *)(v3 + 10) )
        break;
      v12 = v16;
      v13 = v17;
      REG_DIVCNT = 2;
      v14 = ll_mul(__PAIR__(v10, i), 10LL);
      REG_DIV_NUMER_H = v14 >> 32;
      REG_DIV_NUMER_L = v14;
      REG_DIV_DENOM_L = v12;
      REG_DIV_DENOM_H = v13;
      *(ull *)v3 = ll_mul(*(ull *)v3, 10LL);
      v15 = (uint)&REG_DIVCNT >> 11;
      while ( (ushort)REG_DIVCNT & (ushort)v15 )
        ;
      *(ull *)v3 += __PAIR__(REG_DIV_RESULT_H, REG_DIV_RESULT_L);
      ++*(uchar *)(v3 + 8);
      while ( (ushort)REG_DIVCNT & ((uint)&REG_DIVCNT >> 11) )
        ;
      v10 = REG_DIVREM_RESULT_H;
    }
    result = v18 ^ v21;
    *(uchar *)(v3 + 9) = result;
  }
  else
  {
    result = 1;
    *(uchar *)(a3 + 11) = 1;
  }
  return result;
}

//----- (0225717C) --------------------------------------------------------
int __fastcall Function_225717c(int a1, int a2)
{
  uint *v2;
  int v3;
  long long v5;

  v2 = (uint *)a1;
  v3 = a2;
  if ( Function_22574e8() >= (uint)*(uchar *)(a1 + 10) )
    return 0;
  if ( !*((uchar *)v2 + 8) )
  {
    v5 = ll_mul(*(ull *)v2, 10LL);
    *(ull *)v2 = v5;
    HIDWORD(v5) += __CFADD__(*v2, v3);
    *v2 += v3;
    v2[1] = HIDWORD(v5);
  }
  return 1;
}

//----- (022571B8) --------------------------------------------------------
int __fastcall Function_22571b8(int a1, int a2)
{
  uint *v2;
  int v3;
  long long v5;

  v2 = (uint *)a1;
  v3 = a2;
  if ( Function_22574e8() >= (uint)*(uchar *)(a1 + 10) )
    return 0;
  v5 = ll_mul(*(ull *)v2, 10LL);
  *(ull *)v2 = v5;
  HIDWORD(v5) += __CFADD__(*v2, v3);
  *v2 += v3;
  v2[1] = HIDWORD(v5);
  ++*((uchar *)v2 + 8);
  return 1;
}

//----- (022571F4) --------------------------------------------------------
int __fastcall Function_22571f4(int a1, int a2)
{
  long long v2;

  if ( *(ull *)a1 != *(ull *)a2 )
    return 0;
  if ( *(uchar *)(a1 + 8) != *(uchar *)(a2 + 8) )
    return 0;
  if ( *(uchar *)(a1 + 9) != *(uchar *)(a2 + 9) )
  {
    HIDWORD(v2) = *(uint *)a1;
    LODWORD(v2) = *(uint *)(a1 + 4);
    if ( v2 )
      return 0;
  }
  return 1;
}

//----- (02257240) --------------------------------------------------------
BOOL __fastcall Function_2257240(int a1, uint a2)
{
  int v2;
  uint v3;
  uint v5;

  v2 = a1;
  v3 = a2;
  if ( *(uchar *)(a1 + 11) )
    return 0;
  v5 = Function_2257498(a1);
  if ( *(uchar *)(v2 + 8) )
    v5 += *(uchar *)(v2 + 8) + 1;
  return v5 <= v3;
}

//----- (0225726C) --------------------------------------------------------
int __fastcall Function_225726c(int a1, ushort *a2)
{
  int result;
  ull v3;
  int v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  ushort *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uint v16;
  int v17;
  int v18;
  int v19;
  uint v20;
  int v21;
  ushort *v22;
  ushort *v23;
  int v24;
  int v25;
  int v26;

  v19 = a1;
  v22 = a2;
  if ( *(uchar *)(a1 + 11) )
    return 0;
  v3 = *(ull *)a1;
  if ( *(ull *)a1 )
  {
    v5 = 1;
    if ( v3 >= 0xA )
    {
      v6 = dword_2257A58;
      do
      {
        v6 += 2;
        ++v5;
        v7 = *(uint *)(v19 + 4);
      }
      while ( v3 >= *(ull *)v6 );
    }
    v20 = v5;
    v8 = *(uchar *)(v19 + 8) - v5;
    if ( v8 < 0 )
    {
      if ( *(uchar *)(v19 + 8) )
        v20 = v5 + 1;
    }
    else
    {
      v20 = *(uchar *)(v19 + 8) + 2;
    }
    v9 = *(uchar *)(v19 + 9);
    if ( v20 + v9 <= *(uchar *)(v19 + 10) )
    {
      if ( v9 == 1 )
      {
        *a2 = 11;
        v22 = a2 + 1;
      }
      v10 = v22;
      if ( v8 < 0 )
      {
        v24 = 0;
        if ( -v8 >= 0 && v8 != 0 )
        {
          do
          {
            REG_DIVCNT = 2;
            REG_DIV_NUMER_H = v3 >> 32;
            REG_DIV_NUMER_L = v3;
            v14 = 2 * (v5 - 1 - v24);
            v15 = dword_2257A50[v14 + 1];
            REG_DIV_DENOM_L = dword_2257A50[v14];
            REG_DIV_DENOM_H = v15;
            while ( (ushort)REG_DIVCNT & (ushort)((uint)&REG_DIVCNT >> 11) )
              ;
            *v10 = REG_DIV_RESULT_L;
            ++v10;
            while ( (ushort)REG_DIVCNT & ((uint)&REG_DIVCNT >> 11) )
              ;
            v3 = __PAIR__(REG_DIVREM_RESULT_H, REG_DIVREM_RESULT_L);
            ++v24;
          }
          while ( v24 < -v8 );
        }
        if ( *(uchar *)(v19 + 8) )
        {
          *v10 = 10;
          ++v10;
        }
      }
      else
      {
        *v22 = 0;
        v10 = v22 + 2;
        v22[1] = 10;
        v11 = v8;
        v12 = v8 - 1;
        if ( v11 )
        {
          do
          {
            v13 = v12;
            *v10 = 0;
            ++v10;
            --v12;
          }
          while ( v13 );
        }
      }
      v16 = v10 - v22;
      if ( v16 < v20 )
      {
        v25 = v20 - v16;
        v26 = 0;
        if ( (int)(v20 - v16) > 0 )
        {
          v21 = v20 - v16 - 1;
          do
          {
            REG_DIVCNT = 2;
            REG_DIV_NUMER_H = v3 >> 32;
            REG_DIV_NUMER_L = v3;
            v17 = 2 * (v21 - v26);
            v18 = dword_2257A50[v17 + 1];
            REG_DIV_DENOM_L = dword_2257A50[v17];
            REG_DIV_DENOM_H = v18;
            while ( (ushort)REG_DIVCNT & ((uint)&REG_DIVCNT >> 11) )
              ;
            *v10 = REG_DIV_RESULT_L;
            ++v10;
            while ( (ushort)REG_DIVCNT & ((uint)&REG_DIVCNT >> 11) )
              ;
            v3 = __PAIR__(REG_DIVREM_RESULT_H, REG_DIVREM_RESULT_L);
            ++v26;
          }
          while ( v26 < v25 );
        }
      }
      *v10 = 13;
      result = 1;
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    v4 = 0;
    *a2 = 0;
    v23 = a2 + 1;
    if ( *(uchar *)(v19 + 8) )
    {
      v23 = a2 + 2;
      a2[1] = 10;
      if ( (int)*(uchar *)(v19 + 8) > 0 )
      {
        do
        {
          ++v4;
          *v23 = 0;
          ++v23;
        }
        while ( v4 < *(uchar *)(v19 + 8) );
      }
    }
    *v23 = 13;
    result = 1;
  }
  return result;
}

//----- (02257468) --------------------------------------------------------
void __fastcall Function_2257468(int *a1)
{
  int *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  long long v8;

  v1 = a1;
  v2 = *((uchar *)a1 + 8);
  v3 = *a1;
  v4 = v1[1];
  v5 = 2 * v2;
  v6 = dword_2257A50[2 * v2];
  v7 = dword_2257A50[v5 + 1];
  ll_udiv();
  if ( *((uchar *)v1 + 9) == 1 )
    ll_mul(v8, -1LL);
}

//----- (02257498) --------------------------------------------------------
int __fastcall Function_2257498(uchar *a1)
{
  uchar *v1;
  ull v2;
  uint v3;
  uint v4;
  uint v5;
  uint v6;
  uint v7;
  int v8;
  uchar *v10;

  v10 = a1;
  v1 = a1;
  v2 = 10LL;
  v3 = *(uint *)v1;
  v4 = *((uint *)v1 + 1);
  v5 = 1;
  if ( *(ull *)v1 >= 0xAuLL )
  {
    v6 = v10[10];
    do
    {
      if ( ++v5 > v6 )
        break;
      v2 = ll_mul(v2, 10LL);
    }
    while ( __PAIR__(v4, v3) >= v2 );
  }
  v7 = v10[8];
  if ( v5 <= v7 )
    v8 = 1;
  else
    v8 = v5 - v7;
  return v8 + v10[9];
}

//----- (022574E8) --------------------------------------------------------
int __fastcall Function_22574e8(uchar *a1)
{
  uchar *v1;
  int result;

  v1 = a1;
  result = Function_2257498(a1);
  if ( v1[8] )
    result += v1[8] + 1;
  return result;
}

//----- (022574FC) --------------------------------------------------------
uint __fastcall Function_22574fc(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  uint result;
  uint v7;
  uint v8;
  uint v9;
  int v10;
  int v11;
  int v12;

  v1 = a1;
  if ( *(uchar *)(a1 + 8) )
  {
    v2 = *(uint *)a1;
    v3 = *(uint *)(a1 + 4);
    REG_DIVCNT = 1;
    REG_DIV_NUMER_L = v2;
    REG_DIV_NUMER_H = v3;
    REG_DIV_DENOM_L = 10;
    REG_DIV_DENOM_H = 0;
    do
    {
      while ( REG_DIVCNT & 0x8000 )
        ;
      if ( __PAIR__(REG_DIVREM_RESULT_H, REG_DIVREM_RESULT_L) )
        break;
      while ( REG_DIVCNT & 0x8000 )
        ;
      v4 = REG_DIV_RESULT_H;
      *(uint *)a1 = REG_DIV_RESULT_L;
      *(uint *)(a1 + 4) = v4;
      v5 = *(uint *)a1;
      REG_DIVCNT = 1;
      REG_DIV_NUMER_L = v5;
      REG_DIV_NUMER_H = v4;
      REG_DIV_DENOM_L = 10;
      REG_DIV_DENOM_H = 0;
      --*(uchar *)(a1 + 8);
    }
    while ( *(uchar *)(a1 + 8) );
  }
  result = Function_2257498((uchar *)a1);
  v7 = *(uchar *)(v1 + 8);
  if ( *(uchar *)(v1 + 8) )
  {
    v8 = result + v7 + 1;
    result = *(uchar *)(v1 + 10);
    if ( v8 > result )
    {
      v9 = v8 - result;
      if ( v9 <= v7 )
      {
        v10 = *(uint *)v1;
        v11 = *(uint *)(v1 + 4);
        REG_DIVCNT = 1;
        REG_DIV_NUMER_L = v10;
        REG_DIV_NUMER_H = v11;
        REG_DIV_DENOM_L = dword_2257A50[2 * v9];
        REG_DIV_DENOM_H = 0;
        while ( (ushort)REG_DIVCNT & (ushort)((uint)&REG_DIVCNT >> 11) )
          ;
        v12 = REG_DIV_RESULT_H;
        *(uint *)v1 = REG_DIV_RESULT_L;
        *(uint *)(v1 + 4) = v12;
        result = *(uchar *)(v1 + 8) - v9;
        *(uchar *)(v1 + 8) = result;
      }
    }
  }
  return result;
}

//----- (022575EC) --------------------------------------------------------
int __fastcall Function_22575ec(uint *a1, uint *a2, uint *a3, uint *a4)
{
  uint *v4;
  int v5;
  uint *v6;
  uint *v7;
  int v8;
  int result;

  v4 = a2;
  v5 = a1[1];
  v6 = a3;
  *a3 = *a1;
  a3[1] = v5;
  v7 = a4;
  a3[2] = a1[2];
  v8 = v4[1];
  *a4 = *v4;
  a4[1] = v8;
  a4[2] = v4[2];
  if ( *((uchar *)a3 + 8) < (uint)*((uchar *)a4 + 8) )
  {
    v6 = a4;
    v7 = a3;
  }
  *(ull *)v7 = ll_mul(
                    *(ull *)v7,
                    *(ull *)&dword_2257A50[2 * (*((uchar *)v6 + 8) - *((uchar *)v7 + 8))]);
  result = *((uchar *)v6 + 8);
  *((uchar *)v7 + 8) = result;
  return result;
}

