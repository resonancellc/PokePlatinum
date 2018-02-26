//----- (022561D4) --------------------------------------------------------
int __fastcall Function_22561d4(int *a1)
{
  int *v1;
  int v2;

  v1 = a1;
  v2 = malloc(8u, 84);
  if ( v2 )
  {
    if ( Function_225621c() && AddTaskToTaskList1((int)Function_2256260, v2, 1u) )
    {
      *v1 = v2;
      return 1;
    }
    free(v2);
  }
  return 0;
}

//----- (0225621C) --------------------------------------------------------
int __fastcall Function_225621c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( !Function_2256540(a1 + 72, a1 + 4) )
    return 0;
  *(uchar *)v2 = 0;
  *(uchar *)(v2 + 1) = 0;
  *(uchar *)(v2 + 2) = 0;
  *(uint *)(v2 + 80) = 0;
  *(uint *)(v2 + 76) = v3;
  return 1;
}

//----- (02256244) --------------------------------------------------------
uint __fastcall Function_2256244(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 80);
  if ( v2 )
    free(v2);
  Function_2256604(*(uint *)(v1 + 72));
  return free(v1);
}

//----- (02256260) --------------------------------------------------------
int __fastcall Function_2256260(int result, uchar *a2)
{
  int v2;
  uint v3;
  int *v4;

  v2 = (int)a2;
  v3 = *a2;
  v4 = (int *)result;
  if ( v3 < 3 )
  {
    result = ((int (__fastcall *)(int))*(&off_2256A1C + v3))(v2);
    if ( result )
    {
      Function_2256244(v2);
      Call_RemoveTaskFromTaskList(v4);
      result = ((int (__fastcall *)(uint))dword_2254260[0])(*(uint *)(v2 + 76));
    }
  }
  return result;
}

//----- (02256294) --------------------------------------------------------
int __fastcall Function_2256294(int result)
{
  *(uchar *)(result + 2) = 1;
  return result;
}

//----- (0225629C) --------------------------------------------------------
char *__fastcall Function_225629c(char *result, char a2)
{
  if ( result[2] )
    a2 = 2;
  *result = a2;
  result[1] = 0;
  return result;
}

//----- (022562B0) --------------------------------------------------------
int __fastcall Function_22562b0(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_2256664(*(uint *)(v1 + 72), 0) )
    {
      ((void (__fastcall *)(uint))dword_225424C[0])(*(uint *)(v1 + 76));
      Function_225629c((char *)v1, 1);
    }
  }
  else
  {
    Function_2256640(*(uint *)(v1 + 72), 0);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (022562F0) --------------------------------------------------------
int __fastcall Function_22562f0(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;

  v1 = a1;
  if ( *(uchar *)(a1 + 2) )
  {
    Function_2256a0c(*(uint *)(a1 + 72));
    Function_225629c((char *)v1, 2);
    result = 0;
  }
  else
  {
    switch ( *(uchar *)(a1 + 1) )
    {
      case 0:
        if ( Function_22563e4(a1, &v4, &v3) )
        {
          Function_2256428(v1, v4, v3);
          ((void (__fastcall *)(int))dword_2254424[0])(1640);
          Function_2256640(*(uint *)(v1 + 72), 2);
          *(uchar *)(v1 + 1) = 1;
        }
        break;
      case 1:
        if ( Function_2256664(*(uint *)(a1 + 72), 2) )
        {
          *(uchar *)(v1 + 1) = 0;
        }
        else if ( ((int (__fastcall *)(uint))dword_225450C[10])(*(uint *)(v1 + 76)) == 1
               || ((int (__fastcall *)(uint))dword_225450C[0])(*(uint *)(v1 + 76)) )
        {
          Function_2256a0c(*(uint *)(v1 + 72));
          *(uchar *)(v1 + 1) = 2;
        }
        else if ( Function_22563e4(v1, &v4, &v3) )
        {
          Function_2256428(v1, v4, v3);
          Function_2256a0c(*(uint *)(v1 + 72));
          *(uchar *)(v1 + 1) = 3;
        }
        break;
      case 2:
        if ( Function_2256664(*(uint *)(a1 + 72), 2) )
          *(uchar *)(v1 + 1) = 0;
        break;
      case 3:
        if ( Function_2256664(*(uint *)(a1 + 72), 2) )
        {
          ((void (__fastcall *)(int))dword_2254424[0])(1640);
          Function_2256640(*(uint *)(v1 + 72), 2);
          *(uchar *)(v1 + 1) = 1;
        }
        break;
      default:
        break;
    }
    result = 0;
  }
  return result;
}

//----- (022563E4) --------------------------------------------------------
BOOL __fastcall Function_22563e4(int a1, uint *a2, uint *a3)
{
  uint *v3;
  uint *v4;

  v3 = a2;
  v4 = a3;
  return !((int (__fastcall *)(uint))dword_225450C[0])(*(uint *)(a1 + 76))
      && Function_20227c0(v3, v4)
      && (uint)(*v4 - 24) < 0x90
      && (uint)(*v3 - 24) < 0xB0;
}

//----- (02256428) --------------------------------------------------------
uint __fastcall Function_2256428(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint result;
  uint *v8;
  ushort *v9;
  int v10;
  uint v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v16 = a4;
  v4 = a1;
  v5 = a2;
  v12 = a3;
  v6 = ((int (__fastcall *)(uint))dword_225453C[0])(*(uint *)(a1 + 76));
  result = Function_203f478(v6, 8u);
  v13 = result;
  v8 = (uint *)(v4 + 4);
  v8[2] = 0;
  *(uint *)(v4 + 4) = v5;
  v8[1] = v12;
  v8[3] = 0;
  if ( result )
  {
    if ( *(uchar *)(result + 4) != 255 )
    {
      v9 = (ushort *)result;
      do
      {
        Function_22564f0(*v9, v9[1], &v15, &v14);
        v10 = FX_Sqrt(((v15 - v5) * (v15 - v5) + (v14 - v12) * (v14 - v12)) << 12);
        if ( v10 > dword_2256A28[*((uchar *)v9 + 4)] )
        {
          if ( v10 <= 196608 && !v8[2] )
            v8[2] = 1;
        }
        else
        {
          v11 = v8[3];
          if ( v11 < 8 )
          {
            *((ushort *)v8 + 3 * v11 + 8) = v15;
            *((ushort *)v8 + 3 * v8[3] + 9) = v14;
            *((ushort *)v8 + 3 * v8[3]++ + 10) = *((uchar *)v9 + 4);
            v8[2] = 2;
          }
        }
        v9 += 3;
      }
      while ( *((uchar *)v9 + 4) != 255 );
    }
    result = free(v13);
  }
  return result;
}

//----- (022564F0) --------------------------------------------------------
int __fastcall Function_22564f0(int a1, int a2, uint *a3, int *a4)
{
  int result;

  *a3 = 11 * (a1 - 7) + 112;
  result = 11 * (a2 - 7) + 101;
  *a4 = result;
  return result;
}

//----- (0225650C) --------------------------------------------------------
int __fastcall Function_225650c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_2256670(*(uint *)(v1 + 72)) )
      return 1;
  }
  else
  {
    Function_2256640(*(uint *)(v1 + 72), 1);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (02256540) --------------------------------------------------------
int __fastcall Function_2256540(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  uint *v5;
  int v6;
  int v7;
  uint *v8;

  v2 = a1;
  v3 = a2;
  v4 = malloc(8u, 144);
  v5 = (uint *)v4;
  if ( !v4 )
    return 0;
  v6 = ((int (__fastcall *)(int, int))dword_2255090[0])(v4 + 8, 8);
  *v5 = v3;
  v5[1] = ((int (__fastcall *)(int))dword_2254674[0])(v6);
  v5[27] = 0;
  v5[12] = ((int (*)(void))dword_2254664[0])();
  v7 = 0;
  v5[13] = 0;
  v8 = v5;
  do
  {
    ++v7;
    v8[14] = 0;
    ++v8;
  }
  while ( v7 < 8 );
  *v2 = v5;
  return 1;
}

//----- (02256588) --------------------------------------------------------
int __fastcall Function_2256588(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  if ( !((int (__fastcall *)(int, int, int, int, int))dword_2255914[17])(
          a1 + 88,
          12,
          40,
          41,
          8) )
    return 0;
  Function_2006ec0(12, 42, 1, 0, 0, 1, 8);
  *(uint *)(v1 + 52) = ((int (__fastcall *)(uint, int *, int))dword_225517C[421])(
                           *(uint *)(v1 + 48),
                           &dword_2256A28[6],
                           v1 + 88);
  ((void (*)(void))dword_2255914[0])();
  v2 = 0;
  v3 = v1;
  do
  {
    *(uint *)(v3 + 56) = ((int (__fastcall *)(uint, int *, int))dword_225517C[421])(
                             *(uint *)(v1 + 48),
                             &dword_2256A4C[1],
                             v1 + 88);
    ((void (*)(void))dword_2255914[0])();
    ++v2;
    v3 += 4;
  }
  while ( v2 < 8 );
  return 1;
}

//----- (02256604) --------------------------------------------------------
uint __fastcall Function_2256604(uint result)
{
  int v1;
  int v2;
  uint v3;

  v1 = result;
  if ( result )
  {
    v2 = 0;
    v3 = result;
    do
    {
      if ( *(uint *)(v3 + 56) )
        ((void (__fastcall *)(uint))dword_22558B0[0])(*(uint *)(v1 + 48));
      ++v2;
      v3 += 4;
    }
    while ( v2 < 8 );
    if ( *(uint *)(v1 + 52) )
      ((void (__fastcall *)(uint))dword_22558B0[0])(*(uint *)(v1 + 48));
    ((void (__fastcall *)(int))dword_22559B0[0])(v1 + 88);
    result = free(v1);
  }
  return result;
}

//----- (02256640) --------------------------------------------------------
int __fastcall Function_2256640(int *a1)
{
  int v1;

  v1 = *a1;
  return ((int (__fastcall *)(int *))dword_225517C[0])(&dword_2256A7C);
}

//----- (02256664) --------------------------------------------------------
void Function_2256664()
{
  JUMPOUT(&byte_2255130);
}

//----- (02256670) --------------------------------------------------------
void Function_2256670()
{
  JUMPOUT(&dword_2255134[8]);
}

//----- (0225667C) --------------------------------------------------------
int __fastcall Function_225667c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = ((int (*)(void))dword_225517C[48])();
  return ((int (__fastcall *)(int, int))dword_225517C[42])(v2 + 8, v1);
}

//----- (02256690) --------------------------------------------------------
int __fastcall Function_2256690(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225517C[48])(a2);
  Function_20183c4(*(uint **)(v3 + 4), 6u, &dword_2256A58[2], 0);
  LoadFromNARC_RGCN(12, 39, *(uint **)(v3 + 4), 6u, 0, 0, 1, 8);
  LoadFromNARC_RCSN(12, 38, *(uint **)(v3 + 4), 6u, 0, 0, 1, 8);
  ((void (*)(void))dword_2254674[17])();
  ((void (__fastcall *)(int))dword_2254674[45])(v3 + 112);
  *(ushort *)(v3 + 114) = *(ushort *)(v3 + 128);
  DC_FlushRange(v3 + 112, 32);
  GXS_LoadOBJPltt(v3 + 112, 416, 0x20u);
  *(ushort *)(v3 + 114) = *(ushort *)(v3 + 142);
  DC_FlushRange(v3 + 112, 32);
  GXS_LoadOBJPltt(v3 + 112, 448, 0x20u);
  Function_2019448(*(uint **)(v3 + 4), 6u);
  REG_DISPCNT_SUB = REG_DISPCNT_SUB & 0xFFFFE0FF | ((((uint)(REG_DISPCNT_SUB << 19) >> 27) | 4) << 8);
  Function_2256588(v3);
  return Function_225667c(v2);
}

//----- (02256774) --------------------------------------------------------
int __fastcall Function_2256774(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225517C[48])(a2);
  Function_2019044(*(uint *)(v3 + 4), 6);
  return Function_225667c(v2);
}

//----- (02256790) --------------------------------------------------------
int __fastcall Function_2256790(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint *v5;
  int v7;

  v2 = a2;
  v7 = a1;
  v3 = ((int (__fastcall *)(int))dword_225517C[48])(a2);
  v4 = ((int (__fastcall *)(int))dword_225517C[49])(v2);
  v5 = (uint *)((int (__fastcall *)(int))dword_225517C[50])(v2);
  if ( !((int (__fastcall *)(int))dword_225517C[51])(v2) )
  {
    *(uint *)(v3 + 108) = 1;
    *v5 = *(uint *)(v4 + 8);
  }
  return ((int (__fastcall *)(int, int))dword_2256A28[*v5 + 3])(v7, v2);
}

//----- (022567D4) --------------------------------------------------------
int __fastcall Function_22567d4(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;
  int result;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225517C[48])(a2);
  v4 = (uint *)((int (__fastcall *)(int))dword_225517C[49])(v2);
  result = ((int (__fastcall *)(int))dword_225517C[51])(v2);
  if ( result )
  {
    if ( result == 1 )
    {
      if ( *(uint *)(v3 + 108) )
      {
        result = ((int (__fastcall *)(uint))dword_22558B0[12])(*(uint *)(v3 + 52));
        if ( result )
        {
          Function_22569e8(v3);
          result = Function_225667c(v2);
        }
      }
      else
      {
        Function_22569e8(v3);
        result = Function_225667c(v2);
      }
    }
  }
  else
  {
    ((void (__fastcall *)(uint, uint, uint))dword_22558B0[20])(*(uint *)(v3 + 52), *v4 << 12, v4[1] << 12);
    ((void (__fastcall *)(uint, uint))dword_2255914[0])(*(uint *)(v3 + 52), 0);
    ((void (__fastcall *)(uint, uint))dword_22558B0[5])(*(uint *)(v3 + 52), 0);
    result = ((int (__fastcall *)(int))dword_225517C[52])(v2);
  }
  return result;
}

//----- (0225684C) --------------------------------------------------------
int __fastcall Function_225684c(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;
  int result;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225517C[48])(a2);
  v4 = (uint *)((int (__fastcall *)(int))dword_225517C[49])(v2);
  result = ((int (__fastcall *)(int))dword_225517C[51])(v2);
  if ( result )
  {
    if ( result == 1 )
    {
      if ( *(uint *)(v3 + 108) )
      {
        result = ((int (__fastcall *)(uint))dword_22558B0[12])(*(uint *)(v3 + 52));
        if ( result )
          result = ((int (__fastcall *)(uint, uint))dword_22558B0[5])(*(uint *)(v3 + 52), 0);
      }
      else
      {
        Function_22569e8(v3);
        result = Function_225667c(v2);
      }
    }
  }
  else
  {
    ((void (__fastcall *)(uint, uint, uint))dword_22558B0[20])(*(uint *)(v3 + 52), *v4 << 12, v4[1] << 12);
    ((void (__fastcall *)(uint, uint))dword_22558B0[5])(*(uint *)(v3 + 52), 0);
    ((void (__fastcall *)(uint, uint))dword_2255914[0])(*(uint *)(v3 + 52), 0);
    result = ((int (__fastcall *)(int))dword_225517C[52])(v2);
  }
  return result;
}

//----- (022568C0) --------------------------------------------------------
int __fastcall Function_22568c0(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;
  int result;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225517C[48])(a2);
  v4 = (uint *)((int (__fastcall *)(int))dword_225517C[49])(v2);
  result = ((int (__fastcall *)(int))dword_225517C[51])(v2);
  if ( result )
  {
    if ( result == 1 )
    {
      if ( *(uint *)(v3 + 108) )
      {
        result = ((int (__fastcall *)(uint))dword_22558B0[12])(*(uint *)(v3 + 52));
        if ( result )
        {
          Function_22569a0(v3, v4);
          result = ((int (__fastcall *)(int))dword_225517C[52])(v2);
        }
      }
      else
      {
        Function_22569e8(v3);
        result = Function_225667c(v2);
      }
    }
    else if ( result == 2 )
    {
      if ( *(uint *)(v3 + 108) )
      {
        result = Function_22569dc(v3);
        if ( result )
        {
          ((void (__fastcall *)(uint, uint))dword_22558B0[5])(*(uint *)(v3 + 52), 0);
          result = ((int (__fastcall *)(int, int))dword_225517C[54])(v2, 1);
        }
      }
      else
      {
        Function_22569e8(v3);
        result = Function_225667c(v2);
      }
    }
  }
  else
  {
    Function_2256974(v3, v4);
    ((void (__fastcall *)(uint, uint, uint))dword_22558B0[20])(*(uint *)(v3 + 52), *v4 << 12, v4[1] << 12);
    ((void (__fastcall *)(uint, uint))dword_22558B0[5])(*(uint *)(v3 + 52), 0);
    ((void (__fastcall *)(uint, uint))dword_2255914[0])(*(uint *)(v3 + 52), 0);
    result = ((int (__fastcall *)(int))dword_225517C[52])(v2);
  }
  return result;
}

//----- (02256974) --------------------------------------------------------
uint __fastcall Function_2256974(int a1, int a2)
{
  int v2;
  int v3;
  uint result;
  uint v5;
  int v6;

  v2 = a2;
  v3 = a1;
  result = *(uint *)(a2 + 12);
  v5 = 0;
  if ( result )
  {
    v6 = a2;
    do
    {
      ((void (__fastcall *)(uint, int, int))dword_22558B0[20])(
        *(uint *)(v3 + 56),
        *(ushort *)(v6 + 16) << 12,
        *(ushort *)(v6 + 18) << 12);
      result = *(uint *)(v2 + 12);
      ++v5;
      v6 += 6;
      v3 += 4;
    }
    while ( v5 < result );
  }
  return result;
}

//----- (022569A0) --------------------------------------------------------
uint __fastcall Function_22569a0(int a1, int a2)
{
  int v2;
  uint result;
  uint v4;
  int v5;
  uint v6;
  int v7;

  v2 = a1;
  result = *(uint *)(a2 + 12);
  v4 = 0;
  v7 = a2;
  if ( result )
  {
    v5 = a2;
    do
    {
      v6 = *(ushort *)(v5 + 20) + 1;
      if ( v6 >= 3 )
        v6 = 3;
      ((void (__fastcall *)(uint, uint))dword_2255914[0])(*(uint *)(v2 + 56), 0);
      ((void (__fastcall *)(uint, uint))dword_22558B0[5])(*(uint *)(v2 + 56), v6);
      ++v4;
      result = *(uint *)(v7 + 12);
      v5 += 6;
      v2 += 4;
    }
    while ( v4 < result );
  }
  return result;
}

//----- (022569DC) --------------------------------------------------------
void __fastcall Function_22569dc(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 56);
  JUMPOUT(&dword_22558B0[12]);
}

//----- (022569E8) --------------------------------------------------------
int __fastcall Function_22569e8(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  ((void (__fastcall *)(uint, int))dword_2255914[0])(*(uint *)(a1 + 52), 1);
  v2 = 0;
  do
  {
    result = ((int (__fastcall *)(uint, int))dword_2255914[0])(*(uint *)(v1 + 56), 1);
    ++v2;
    v1 += 4;
  }
  while ( v2 < 8 );
  return result;
}

//----- (02256A0C) --------------------------------------------------------
int __fastcall Function_2256a0c(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_22569e8(a1);
  result = 0;
  *(uint *)(v1 + 108) = 0;
  return result;
}

