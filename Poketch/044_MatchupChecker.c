//----- (022561D4) --------------------------------------------------------
int __fastcall Function_22561d4(int *a1)
{
  int *v1;
  int v2;

  v1 = a1;
  v2 = malloc(8u, 104);
  if ( v2 )
  {
    if ( Function_225621c() && AddTaskToTaskList1((int)Function_2256338, v2, 1u) )
    {
      *v1 = v2;
      return 1;
    }
    free(v2);
  }
  return 0;
}

//----- (0225621C) --------------------------------------------------------
int __fastcall Function_225621c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int *v7;
  char v8;
  int v10;
  int v11;
  int v12;
  char v13;
  uint *v14;

  v10 = a1;
  v11 = a2;
  v12 = a3;
  v3 = ((int (__fastcall *)(int))dword_2254544[0])(a2);
  v14 = (uint *)LoadPokePartyAdress(v3);
  v13 = 0;
  v4 = 0;
  *(uchar *)(v10 + 52) = GetNrOfPkmnInParty((int)v14);
  if ( (int)*(uchar *)(v10 + 52) > 0 )
  {
    v5 = v10;
    v6 = v10;
    do
    {
      v7 = GetAdrOfPkmnInParty(v14, v4);
      if ( !GetPkmnData(v7, 0x4Cu, 0) )
      {
        *(uint *)(v5 + 4) = Function_2079d40((int)v7);
        *(ushort *)(v6 + 28) = GetPkmnData(v7, 5u, 0);
        *(ushort *)(v6 + 40) = GetPkmnData(v7, 0x70u, 0);
        *(uint *)(v5 + 72) = v7;
        v5 += 4;
        v6 += 2;
        ++v13;
      }
      ++v4;
    }
    while ( v4 < *(uchar *)(v10 + 52) );
  }
  *(uchar *)(v10 + 52) = v13;
  v8 = 0;
  *(uchar *)(v10 + 54) = 0;
  if ( *(uchar *)(v10 + 52) > 1u )
    v8 = 1;
  *(uchar *)(v10 + 55) = v8;
  if ( !Function_22565bc(v10 + 56, v10 + 4, v12) )
    return 0;
  *(uchar *)v10 = 0;
  *(uchar *)(v10 + 1) = 0;
  *(uchar *)(v10 + 2) = 0;
  *(uint *)(v10 + 64) = ((int (__fastcall *)(int *, int, int (*)(), int, int))dword_2255ACC[0])(
                            dword_2256CB4,
                            3,
                            Function_225632c,
                            v10,
                            8);
  *(ushort *)(v10 + 70) = 0;
  *(uint *)(v10 + 60) = v11;
  return 1;
}

//----- (02256314) --------------------------------------------------------
uint __fastcall Function_2256314(int a1)
{
  int v1;

  v1 = a1;
  ((void (__fastcall *)(uint))dword_2255B34[0])(*(uint *)(a1 + 64));
  Function_22565f8(*(uint *)(v1 + 56));
  return free(v1);
}

//----- (0225632C) --------------------------------------------------------
short __fastcall Function_225632c(short result, short a2, int a3, int a4)
{
  *(ushort *)(a4 + 68) = result;
  *(ushort *)(a4 + 70) = a2;
  return result;
}

//----- (02256338) --------------------------------------------------------
uint __fastcall Function_2256338(int *a1, uchar *a2)
{
  uchar *v2;
  int *v3;
  uint result;

  v2 = a2;
  v3 = a1;
  result = *a2;
  if ( result < 3 )
  {
    ((void (__fastcall *)(uint, uint))dword_2254518[0])(*((uint *)a2 + 15), *((uint *)a2 + 16));
    result = ((int (__fastcall *)(uchar *))dword_2256CB4[*v2 + 3])(v2);
    if ( result )
    {
      Function_2256314((int)v2);
      Call_RemoveTaskFromTaskList(v3);
      result = ((int (__fastcall *)(uint))dword_2254260[0])(*((uint *)v2 + 15));
    }
  }
  return result;
}

//----- (02256374) --------------------------------------------------------
int __fastcall Function_2256374(int result)
{
  *(uchar *)(result + 2) = 1;
  return result;
}

//----- (0225637C) --------------------------------------------------------
char *__fastcall Function_225637c(char *result, char a2)
{
  if ( result[2] )
    a2 = 2;
  *result = a2;
  result[1] = 0;
  return result;
}

//----- (02256390) --------------------------------------------------------
int __fastcall Function_2256390(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_2256768(*(uint *)(v1 + 56), 0) )
    {
      ((void (__fastcall *)(uint))dword_225424C[0])(*(uint *)(v1 + 60));
      Function_225637c((char *)v1, 1);
    }
  }
  else
  {
    Function_2256744(*(uint *)(v1 + 56), 0);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (022563D0) --------------------------------------------------------
int __fastcall Function_22563d0(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;

  v1 = a1;
  if ( *(uchar *)(a1 + 2) )
  {
    Function_225637c((char *)a1, 2);
    result = 0;
  }
  else
  {
    switch ( *(uchar *)(a1 + 1) )
    {
      case 0:
        if ( *(ushort *)(a1 + 70) == 1 )
        {
          v3 = *(ushort *)(a1 + 68);
          if ( *(ushort *)(a1 + 68) )
          {
            if ( v3 == 1 )
            {
              if ( Function_22564f0() )
              {
                Function_2256744(*(uint *)(v1 + 56), 4);
                *(uchar *)(v1 + 1) = 1;
              }
            }
            else if ( v3 == 2 )
            {
              if ( Function_225653c() )
              {
                Function_2256744(*(uint *)(v1 + 56), 5);
                *(uchar *)(v1 + 1) = 1;
              }
            }
          }
          else if ( *(uchar *)(a1 + 52) <= 1u )
          {
            ((void (__fastcall *)(int))dword_2254424[0])(1646);
          }
          else
          {
            Function_2256744(*(uint *)(a1 + 56), 2);
            *(uchar *)(v1 + 1) = 2;
          }
          *(ushort *)(v1 + 70) = 0;
        }
        break;
      case 1:
        if ( Function_2256774(*(uint *)(a1 + 56)) )
          *(uchar *)(v1 + 1) = 0;
        break;
      case 2:
        v4 = *(ushort *)(a1 + 70);
        if ( v4 == 2 )
        {
          Function_2256744(*(uint *)(v1 + 56), 3);
          *(uchar *)(v1 + 1) = 0;
        }
        else if ( v4 == 3 )
        {
          *(uint *)(v1 + 96) = *(uint *)(v1 + 4 * *(uchar *)(v1 + 54) + 72);
          *(uint *)(v1 + 100) = *(uint *)(v1 + 4 * *(uchar *)(v1 + 55) + 72);
          *(uchar *)(v1 + 53) = ((int (__fastcall *)(int))dword_21E7790[0])(v1 + 96);
          Function_2256744(*(uint *)(v1 + 56), 3);
          Function_2256744(*(uint *)(v1 + 56), 6);
          ++*(uchar *)(v1 + 1);
        }
        break;
      case 3:
        if ( Function_2256768(*(uint *)(a1 + 56), 6) )
          *(uchar *)(v1 + 1) = 0;
        break;
      default:
        break;
    }
    result = 0;
  }
  return result;
}

//----- (022564F0) --------------------------------------------------------
int __fastcall Function_22564f0(uchar *a1)
{
  if ( a1[52] <= 2u )
    return 0;
  do
  {
    if ( ++a1[54] >= (uint)a1[52] )
      a1[54] = 0;
  }
  while ( a1[54] == a1[55] );
  return 1;
}

//----- (0225653C) --------------------------------------------------------
int __fastcall Function_225653c(uchar *a1)
{
  if ( a1[52] <= 2u )
    return 0;
  do
  {
    if ( ++a1[55] >= (uint)a1[52] )
      a1[55] = 0;
  }
  while ( a1[55] == a1[54] );
  return 1;
}

//----- (02256588) --------------------------------------------------------
int __fastcall Function_2256588(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_2256774(*(uint *)(v1 + 56)) )
      return 1;
  }
  else
  {
    Function_2256744(*(uint *)(v1 + 56), 1);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (022565BC) --------------------------------------------------------
int __fastcall Function_22565bc(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  uint *v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = malloc(8u, 136);
  v5 = (uint *)v4;
  if ( !v4 )
    return 0;
  v6 = ((int (__fastcall *)(int, int))dword_2255090[0])(v4 + 8, 4);
  *v5 = v3;
  v5[1] = ((int (__fastcall *)(int))dword_2254674[0])(v6);
  v5[8] = ((int (*)(void))dword_2254664[0])();
  Function_225660c(v5, v3);
  *v2 = v5;
  return 1;
}

//----- (022565F8) --------------------------------------------------------
uint __fastcall Function_22565f8(uint result)
{
  int v1;

  v1 = result;
  if ( result )
  {
    Function_2256718();
    result = free(v1);
  }
  return result;
}

//----- (0225660C) --------------------------------------------------------
uint __fastcall Function_225660c(uint *a1, uchar *a2)
{
  uint *v2;
  int v3;
  int v4;
  int *v5;
  int v6;
  uint *v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uint result;
  uchar *v17;

  v2 = a1;
  v17 = a2;
  ((void (__fastcall *)(int))dword_2255360[0])(1);
  v3 = Function_2006ec0(12, 74, 1, 0, 0, 1, 8);
  v2[25] = u32_div_f(v3, 20);
  v4 = v17[48];
  ((void (*)(void))dword_22553A0[0])();
  ((void (__fastcall *)(uint *, int, int, int, int))dword_2255958[0])(
    v2 + 15,
    12,
    72,
    73,
    8);
  ((void (__fastcall *)(uint *, int, int, int, int))dword_2255958[0])(
    v2 + 20,
    12,
    5,
    6,
    8);
  v5 = dword_2256DBC;
  v6 = 0;
  v7 = v2;
  do
  {
    v7[9] = ((int (__fastcall *)(uint, int *, uint *))dword_2255810[0])(v2[8], v5, v2 + 15);
    ++v6;
    v5 += 4;
    ++v7;
  }
  while ( v6 < 4 );
  if ( v6 < 6 )
  {
    v8 = &dword_2256DBC[4 * v6];
    v9 = (int)&v2[v6];
    do
    {
      *(uint *)(v9 + 36) = ((int (__fastcall *)(uint, int *, uint *))dword_2255810[0])(v2[8], v8, v2 + 20);
      ++v6;
      v8 += 4;
      v9 += 4;
    }
    while ( v6 < 6 );
  }
  v10 = (int)&v17[2 * v17[50]];
  v11 = *(ushort *)(v10 + 36);
  v12 = *(ushort *)(v10 + 24);
  Function_2256954(v2, 4);
  v13 = (int)&v17[2 * v17[51]];
  v14 = *(ushort *)(v13 + 36);
  v15 = *(ushort *)(v13 + 24);
  Function_2256954(v2, 5);
  result = v17[48];
  if ( result <= 1 )
  {
    ((void (__fastcall *)(uint, int))dword_2255914[0])(v2[14], 1);
    ((void (__fastcall *)(uint, int))dword_2255914[0])(v2[12], 1);
    result = ((int (__fastcall *)(uint, int))dword_22558C4[0])(v2[9], 10);
  }
  return result;
}

//----- (02256718) --------------------------------------------------------
int __fastcall Function_2256718(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;

  v1 = a1;
  ((void (__fastcall *)(int))dword_22559B0[0])(a1 + 80);
  result = ((int (__fastcall *)(int))dword_22559B0[0])(v1 + 60);
  v3 = 0;
  v4 = v1;
  do
  {
    if ( *(uint *)(v4 + 36) )
      result = ((int (__fastcall *)(uint))dword_22558B0[0])(*(uint *)(v1 + 32));
    ++v3;
    v4 += 4;
  }
  while ( v3 < 6 );
  return result;
}

//----- (02256744) --------------------------------------------------------
int __fastcall Function_2256744(int *a1)
{
  int v1;

  v1 = *a1;
  return ((int (__fastcall *)(int *))dword_225517C[0])(&dword_2256D20[15]);
}

//----- (02256768) --------------------------------------------------------
void Function_2256768()
{
  JUMPOUT(&byte_2255130);
}

//----- (02256774) --------------------------------------------------------
void Function_2256774()
{
  JUMPOUT(&byte_2255154);
}

//----- (02256780) --------------------------------------------------------
int __fastcall Function_2256780(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = ((int (*)(void))dword_225517C[48])();
  return ((int (__fastcall *)(int, int))dword_225517C[42])(v2 + 8, v1);
}

//----- (02256794) --------------------------------------------------------
int __fastcall Function_2256794(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225517C[48])(a2);
  ((void (__fastcall *)(int))dword_225517C[49])(v2);
  Function_20183c4(*(uint **)(v3 + 4), 6u, &dword_2256CB4[12], 0);
  LoadFromNARC_RGCN(12, 71, *(uint **)(v3 + 4), 6u, 0, 0, 1, 8);
  LoadFromNARC_RCSN(12, 70, *(uint **)(v3 + 4), 6u, 0, 0, 1, 8);
  ((void (*)(void))dword_2254674[17])();
  Function_2019448(*(uint **)(v3 + 4), 6u);
  REG_DISPCNT_SUB = REG_DISPCNT_SUB & 0xFFFFE0FF | ((((uint)(REG_DISPCNT_SUB << 19) >> 27) | 4) << 8);
  return Function_2256780(v2);
}

//----- (02256828) --------------------------------------------------------
void __fastcall Function_2256828(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225517C[48])(a2);
  v4 = ((int (__fastcall *)(int))dword_225517C[51])(v2);
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      Function_2256768();
      if ( v5 )
      {
        Function_2019044(*(uint *)(v3 + 4), 6);
        Function_2256780(v2);
      }
    }
  }
  else
  {
    *(uint *)(v3 + 104) = 1;
    ((void (__fastcall *)(int))dword_225517C[52])(v2);
  }
}

//----- (0225686C) --------------------------------------------------------
int __fastcall Function_225686c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225517C[48])(a2);
  ((void (__fastcall *)(int))dword_225517C[49])(v2);
  ((void (__fastcall *)(int))dword_2254424[0])(1641);
  ((void (__fastcall *)(uint, int))dword_22558C4[0])(*(uint *)(v3 + 36), 10);
  return Function_2256780(v2);
}

//----- (02256898) --------------------------------------------------------
int __fastcall Function_2256898(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225517C[48])(a2);
  ((void (__fastcall *)(int))dword_225517C[49])(v2);
  ((void (__fastcall *)(uint, int))dword_22558C4[0])(*(uint *)(v3 + 36), 9);
  return Function_2256780(v2);
}

//----- (022568BC) --------------------------------------------------------
int __fastcall Function_22568bc(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225517C[48])(a2);
  v4 = ((int (__fastcall *)(int))dword_225517C[49])(v2);
  v5 = 2 * *(uchar *)(v4 + 50);
  v6 = v4 + 36;
  v7 = v4 + 24;
  ((void (__fastcall *)(uint, uint))dword_2254424[8])(
    *(ushort *)(v4 + 24 + v5),
    *(ushort *)(v4 + 36 + v5));
  v8 = *(ushort *)(v6 + v5);
  v9 = *(ushort *)(v7 + v5);
  Function_2256954(v3, 4);
  Function_22569ac(v3);
  return Function_2256780(v2);
}

//----- (02256908) --------------------------------------------------------
int __fastcall Function_2256908(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225517C[48])(a2);
  v4 = ((int (__fastcall *)(int))dword_225517C[49])(v2);
  v5 = 2 * *(uchar *)(v4 + 51);
  v6 = v4 + 36;
  v7 = v4 + 24;
  ((void (__fastcall *)(uint, uint))dword_2254424[8])(
    *(ushort *)(v4 + 24 + v5),
    *(ushort *)(v4 + 36 + v5));
  v8 = *(ushort *)(v6 + v5);
  v9 = *(ushort *)(v7 + v5);
  Function_2256954(v3, 5);
  Function_22569ac(v3);
  return Function_2256780(v2);
}

//----- (02256954) --------------------------------------------------------
int __fastcall Function_2256954(int a1, int a2, int a3, int a4, ushort a5)
{
  int v5;
  int v6;
  uint v7;
  int v8;
  int v9;
  int v10;

  v5 = a1;
  v6 = a3;
  v7 = a4;
  v8 = *(uint *)(a1 + 4 * a2 + 36);
  if ( a2 == 5 )
  {
    v9 = 4;
  }
  else if ( GetPkmnBaseData2(a4, a5, 0x1Cu) )
  {
    v9 = 4;
  }
  else
  {
    v9 = 5;
  }
  ((void (__fastcall *)(int, int))dword_22558C4[0])(v8, v9);
  ((void (__fastcall *)(int, int))dword_2255940[0])(v8, *(uint *)(v5 + 100) + 16 * v6);
  v10 = Function_2079edc(v7, a5, 0);
  return ((int (__fastcall *)(int, int))dword_2255938[0])(v8, v10 + 1);
}

//----- (022569AC) --------------------------------------------------------
int __fastcall Function_22569ac(uint *a1)
{
  uint *v1;

  v1 = a1;
  ((void (__fastcall *)(uint, int, int))dword_22558C4[15])(a1[11], 196608, 360448);
  ((void (__fastcall *)(uint))dword_22558C4[15])(v1[12]);
  ((void (__fastcall *)(uint, int))dword_22558C4[0])(v1[11], 5);
  ((void (__fastcall *)(uint, int))dword_22558C4[0])(v1[12], 6);
  return ((int (__fastcall *)(uint, uint))dword_22558C4[0])(v1[10], 0);
}

//----- (022569E4) --------------------------------------------------------
int __fastcall Function_22569e4(int a1, int a2)
{
  int v2;
  uint *v3;
  int v4;
  int result;

  v2 = a2;
  v3 = (uint *)((int (__fastcall *)(int))dword_225517C[48])(a2);
  v4 = ((int (__fastcall *)(int))dword_225517C[49])(v2);
  if ( ((int (__fastcall *)(int))dword_225517C[51])(v2) && v3[26] )
    return Function_2256780(v2);
  result = ((int (__fastcall *)(int))dword_225517C[51])(v2);
  if ( result )
  {
    if ( result == 1 )
    {
      result = Function_2256ac8(v3, v4);
      if ( result )
        result = Function_2256780(v2);
    }
  }
  else
  {
    v3[26] = 0;
    Function_22569ac(v3);
    Function_2256a50(v3, v4);
    result = ((int (__fastcall *)(int))dword_225517C[52])(v2);
  }
  return result;
}

//----- (02256A50) --------------------------------------------------------
int __fastcall Function_2256a50(uint *a1, int a2)
{
  uint *v2;
  int v3;

  v2 = a1;
  v3 = a2;
  a1[28] = 0;
  a1[29] = 0;
  a1[30] = 0;
  a1[33] = 0;
  switch ( *(uchar *)(a2 + 49) )
  {
    case 0:
      a1[27] = &dword_2256DFC[8];
      ((void (__fastcall *)(uint, int))dword_22558C4[0])(a1[10], 3);
      break;
    case 1:
      a1[27] = dword_2256D00;
      ((void (__fastcall *)(uint, int))dword_22558C4[0])(a1[10], 2);
      break;
    case 2:
      a1[27] = &dword_2256CB4[6];
      ((void (__fastcall *)(uint, int))dword_22558C4[0])(a1[10], 1);
      break;
    case 3:
      a1[27] = &dword_2256D20[3];
      break;
    default:
      return Function_2256ac8(v2, v3);
  }
  return Function_2256ac8(v2, v3);
}

//----- (02256AC8) --------------------------------------------------------
int __fastcall Function_2256ac8(uint *a1)
{
  uint *v1;
  uint *v2;
  uint *v3;
  int v4;
  int *v5;
  int *v6;
  int v7;
  uint v8;
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

  v1 = a1;
  v2 = a1 + 33;
  v3 = a1 + 30;
  while ( 1 )
  {
    while ( 1 )
    {
      v4 = v1[28];
      if ( !v4 )
      {
        v5 = v1 + 31;
        v6 = v1 + 29;
        while ( 1 )
        {
          v7 = v1[29];
          ++*v6;
          v8 = *(uint *)(v1[27] + 4 * v7) + 7;
          if ( v8 <= 6 )
            break;
          switch ( (uchar)v8 )
          {
            case 0:
              v16 = v1[29];
              v17 = *v6 + 1;
              *v6 = v17;
              v18 = *(uint *)(v1[27] + 4 * v16);
              v19 = v1[29];
              *v6 = v17 + 1;
              ((void (__fastcall *)(uint, uint))dword_22558C4[0])(v1[v18 + 9], *(uint *)(v1[27] + 4 * v19));
              goto LABEL_19;
            case 1:
              ((void (__fastcall *)(uint, int))dword_22558C4[0])(v1[11], 6);
              ((void (__fastcall *)(uint, int))dword_22558C4[0])(v1[12], 5);
              goto LABEL_19;
            case 2:
              v15 = v1[29];
              ++*v6;
              ((void (__fastcall *)(uint))dword_2254424[0])(*(uint *)(v1[27] + 4 * v15));
              goto LABEL_19;
            case 3:
              v14 = v1[29];
              ++*v6;
              v1[33] = *(uint *)(v1[27] + 4 * v14);
              v1[28] = 2;
              goto LABEL_19;
            case 4:
              v12 = v1[29];
              ++*v6;
              v1[33] = *(uint *)(v1[27] + 4 * v12);
              v13 = v1[29];
              ++*v6;
              v1[31] = *(uint *)(v1[27] + 4 * v13);
              *v5 *= -4096;
              v1[32] = v1[30] + v1[31];
              *v5 = u32_div_f(*v5, v1[33]);
              v1[28] = 1;
              goto LABEL_19;
            case 5:
              v10 = v1[29];
              ++*v6;
              v1[33] = *(uint *)(v1[27] + 4 * v10);
              v11 = v1[29];
              ++*v6;
              v1[31] = *(uint *)(v1[27] + 4 * v11);
              *v5 <<= 12;
              v1[32] = v1[30] + v1[31];
              *v5 = u32_div_f(*v5, v1[33]);
              v1[28] = 1;
              goto LABEL_19;
            case 6:
              return 1;
            default:
LABEL_19:
              if ( v1[28] )
                return 0;
              break;
          }
        }
        JUMPOUT(__CS__, *((short *)&off_2256B1C + v8) + 36006686);
      }
      if ( v4 != 1 )
        break;
      if ( v1[33] )
      {
        --*v2;
        if ( v1[33] )
          *v3 += v1[31];
        else
          v1[30] = v1[32];
        ((void (__fastcall *)(uint, int, int))dword_22558C4[15])(v1[11], v1[30] + 196608, 360448);
        ((void (__fastcall *)(uint, int, int))dword_22558C4[15])(v1[12], 720896 - v1[30], 360448);
      }
      if ( v1[33] )
        return 0;
      v1[28] = 0;
    }
    if ( v4 != 2 )
      return 0;
    if ( v1[33] )
      break;
    v1[28] = 0;
  }
  --v1[33];
  return 0;
}

