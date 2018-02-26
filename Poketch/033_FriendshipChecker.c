//----- (022561D4) --------------------------------------------------------
int __fastcall Function_22561d4(int *a1)
{
  int *v1;
  int v2;

  v1 = a1;
  v2 = malloc(8u, 100);
  if ( v2 )
  {
    if ( Function_225621c() && AddTaskToTaskList1((int)Function_2256340, v2, 1u) )
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
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int *v9;
  uint v10;
  char v11;
  char v12;
  int v14;
  uint *v15;

  v2 = a1;
  v3 = a2;
  if ( !Function_2256474(a1 + 92, a1 + 4) )
    return 0;
  *(uchar *)v2 = 0;
  *(uchar *)(v2 + 1) = 0;
  *(uchar *)(v2 + 2) = 0;
  *(uint *)(v2 + 96) = v3;
  v4 = GetVariableAreaBaseAdress();
  v5 = LoadPokePartyAdress(v4);
  v15 = (uint *)v5;
  v14 = 0;
  v6 = GetNrOfPkmnInParty(v5);
  v7 = 0;
  *(uint *)(v2 + 4) = v6;
  if ( v6 > 0 )
  {
    v8 = v2;
    do
    {
      v9 = GetAdrOfPkmnInParty(v15, v7);
      if ( !GetPkmnData(v9, 0x4Cu, 0) )
      {
        *(ushort *)(v8 + 12) = GetPkmnData(v9, 5u, 0);
        *(ushort *)(v8 + 16) = GetPkmnData(v9, 0x70u, 0);
        *(uint *)(v8 + 8) = Function_2079d40((int)v9);
        v10 = GetPkmnData(v9, 9u, 0);
        v11 = Function_225630c(v10);
        switch ( v12 )
        {
          case 0:
          case 1:
          case 2:
            *(uchar *)(v8 + 18) = 1;
            *(uchar *)(v8 + 19) = 3 - v11;
            break;
          case 4:
          case 5:
          case 6:
            *(uchar *)(v8 + 18) = 0;
            *(uchar *)(v8 + 19) = v11 - 3;
            break;
          default:
            *(uchar *)(v8 + 18) = 2;
            *(uchar *)(v8 + 19) = 0;
            break;
        }
        v8 += 12;
        ++v14;
      }
      ++v7;
    }
    while ( v7 < *(uint *)(v2 + 4) );
  }
  *(uint *)(v2 + 4) = v14;
  *(ushort *)(v2 + 80) = 0;
  *(ushort *)(v2 + 82) = 0;
  *(uint *)(v2 + 84) = 0;
  *(uint *)(v2 + 88) = 0;
  return 1;
}

//----- (0225630C) --------------------------------------------------------
int __fastcall Function_225630c(uint a1)
{
  char *v1;
  uint v2;

  v1 = &byte_22577FC;
  v2 = 0;
  do
  {
    if ( a1 < (uchar)*v1 )
      return v2;
    ++v2;
    ++v1;
  }
  while ( v2 < 6 );
  return 6;
}

//----- (0225632C) --------------------------------------------------------
uint __fastcall Function_225632c(int a1)
{
  int v1;

  v1 = a1;
  Function_22564f0(*(uint *)(a1 + 92));
  return free(v1);
}

//----- (02256340) --------------------------------------------------------
int __fastcall Function_2256340(int result, uchar *a2)
{
  int v2;
  uint v3;
  int *v4;

  v2 = (int)a2;
  v3 = *a2;
  v4 = (int *)result;
  if ( v3 < 3 )
  {
    result = ((int (__fastcall *)(int))*(&off_2257804 + v3))(v2);
    if ( result )
    {
      Function_225632c(v2);
      Call_RemoveTaskFromTaskList(v4);
      result = ((int (__fastcall *)(uint))dword_225423C[9])(*(uint *)(v2 + 96));
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
    if ( v2 == 1 && Function_225656c(*(uint *)(v1 + 92), 0) )
    {
      ((void (__fastcall *)(uint))dword_225423C[4])(*(uint *)(v1 + 96));
      Function_225637c((char *)v1, 1);
    }
  }
  else
  {
    Function_2256548(*(uint *)(v1 + 92), 0);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (022563D0) --------------------------------------------------------
int __fastcall Function_22563d0(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( *(uchar *)(a1 + 2) )
  {
    Function_225637c((char *)a1, 2);
    return 0;
  }
  *(ushort *)(a1 + 80) = ((int (__fastcall *)(int, int))dword_225423C[140])(a1 + 84, a1 + 88);
  if ( *(ushort *)(v1 + 80) )
  {
    if ( (uint)(*(uint *)(v1 + 88) - 16) < 0x9F && (uint)(*(uint *)(v1 + 84) - 16) < 0xBF )
    {
      *(ushort *)(v1 + 82) = Function_2022798();
      return 0;
    }
    *(ushort *)(v1 + 80) = 0;
  }
  result = 0;
  *(uint *)(v1 + 84) = 0;
  *(uint *)(v1 + 88) = 0;
  *(ushort *)(v1 + 82) = 0;
  return result;
}

//----- (02256440) --------------------------------------------------------
int __fastcall Function_2256440(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_2256578(*(uint *)(v1 + 92)) )
      return 1;
  }
  else
  {
    Function_2256548(*(uint *)(v1 + 92), 1);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (02256474) --------------------------------------------------------
int __fastcall Function_2256474(uint *a1, int a2)
{
  int v2;
  uint *v3;
  int v4;
  uint *v5;
  int v6;
  int v7;
  uint *v8;

  v2 = a2;
  v3 = a1;
  v4 = malloc(8u, 652);
  v5 = (uint *)v4;
  if ( !v4 )
    return 0;
  v6 = ((int (__fastcall *)(int, int))dword_225423C[917])(v4 + 8, 8);
  *v5 = v2;
  v5[1] = ((int (__fastcall *)(int))dword_225423C[270])(v6);
  v5[12] = ((int (*)(void))dword_225423C[266])();
  v7 = 0;
  v5[44] = 0;
  v8 = v5;
  do
  {
    v8[77] = 0;
    v8[78] = 0;
    ++v7;
    v8 += 14;
  }
  while ( v7 < 6 );
  ((void (__fastcall *)(uint *, int, int, int, int))dword_225423C[1479])(
    v5 + 13,
    12,
    5,
    6,
    8);
  ((void (__fastcall *)(uint *, int, int, int, int))dword_225423C[1479])(
    v5 + 18,
    12,
    36,
    37,
    8);
  *v3 = v5;
  return 1;
}

//----- (022564F0) --------------------------------------------------------
uint __fastcall Function_22564f0(uint result)
{
  int v1;
  int v2;
  uint v3;
  int *v4;

  v1 = result;
  if ( result )
  {
    v2 = 0;
    v3 = result;
    do
    {
      if ( *(uint *)(v3 + 308) )
        ((void (__fastcall *)(uint))dword_225423C[1437])(*(uint *)(v1 + 48));
      if ( *(uint *)(v3 + 312) )
        ((void (__fastcall *)(uint))dword_225423C[1437])(*(uint *)(v1 + 48));
      ++v2;
      v3 += 56;
    }
    while ( v2 < 6 );
    ((void (__fastcall *)(int))dword_225423C[1501])(v1 + 52);
    ((void (__fastcall *)(int))dword_225423C[1501])(v1 + 72);
    v4 = *(int **)(v1 + 176);
    if ( v4 )
      Call_RemoveTaskFromTaskList(v4);
    result = free(v1);
  }
  return result;
}

//----- (02256548) --------------------------------------------------------
int __fastcall Function_2256548(int *a1)
{
  int v1;

  v1 = *a1;
  return ((int (__fastcall *)(int *))dword_225423C[976])(&dword_2257878);
}

//----- (0225656C) --------------------------------------------------------
void Function_225656c()
{
  JUMPOUT(&dword_225423C[957]);
}

//----- (02256578) --------------------------------------------------------
void Function_2256578()
{
  JUMPOUT(&dword_225423C[966]);
}

//----- (02256584) --------------------------------------------------------
int __fastcall Function_2256584(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = ((int (*)(void))dword_225423C[1024])();
  return ((int (__fastcall *)(int, int))dword_225423C[1018])(v2 + 8, v1);
}

//----- (02256598) --------------------------------------------------------
int __fastcall Function_2256598(int a1, int a2)
{
  int v2;
  uint *v3;

  v2 = a2;
  v3 = (uint *)((int (__fastcall *)(int))dword_225423C[1024])(a2);
  Function_20183c4((uint *)v3[1], 6u, dword_225785C, 0);
  LoadFromNARC_RGCN(12, 7, (uint *)v3[1], 6u, 0, 0, 1, 8);
  Function_2019cb8(v3[1], 6, 0, 0, 0, 0x20u, 0x18u, 0);
  ((void (*)(void))dword_225423C[287])();
  Function_2019448((uint *)v3[1], 6u);
  Function_2256634(v3, *v3);
  Function_225681c(v3, *v3);
  REG_DISPCNT_SUB = REG_DISPCNT_SUB & 0xFFFFE0FF | ((((uint)(REG_DISPCNT_SUB << 19) >> 27) | 0x14) << 8);
  return Function_2256584(v2);
}

//----- (02256634) --------------------------------------------------------
int *__fastcall Function_2256634(int a1, uint *a2, int a3, int a4)
{
  int v4;
  int v5;
  int *result;
  int v7;
  int v8;
  uint *v9;
  const short *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  uint *v15;
  int v16;
  int v17;
  int *v18;
  int v19;
  int v20;
  int v21;
  short v22;
  char v23;
  char v24;
  char v25;
  char v26;
  int v27;

  v27 = a4;
  v14 = a1;
  v15 = a2;
  ((void (__fastcall *)(int))dword_225423C[1097])(1);
  Function_2006ec0(12, 35, 1, 6144, 0, 1, 8);
  result = LoadFromNARC_8(19, 8u, v4, v5);
  v18 = result;
  if ( result )
  {
    v17 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 2;
    v26 = 1;
    if ( *v15 > 0 )
    {
      v7 = v14;
      v16 = 0;
      v8 = 0;
      v9 = v15;
      v10 = a000;
      do
      {
        v11 = Function_2006cb8_LoadFileInMemory((int)v18, v9[1], 8u);
        NNS_G2dGetUnpackedPaletteData(v11, &v19);
        DC_FlushRange(*(uint *)(v19 + 20), 1024);
        GXS_LoadOBJ(*(int **)(v19 + 20), v16, 0x400u);
        free(v11);
        v20 = *(ushort *)v10 << 12;
        v21 = *((ushort *)v10 + 1) << 12;
        v25 = 1;
        *(uint *)(v7 + 308) = ((int (__fastcall *)(uint, int *, int))dword_225423C[1397])(
                                  *(uint *)(v14 + 48),
                                  &v20,
                                  v14 + 52);
        ((void (__fastcall *)(uint, int))dword_225423C[1473])(*(uint *)(v7 + 308), v8);
        v12 = Function_2079edc(*((ushort *)v9 + 4), *((ushort *)v9 + 6), 0);
        ((void (__fastcall *)(uint, int))dword_225423C[1471])(*(uint *)(v7 + 308), v12 + 1);
        v25 = 0;
        *(uint *)(v7 + 312) = ((int (__fastcall *)(uint, int *, int))dword_225423C[1397])(
                                  *(uint *)(v14 + 48),
                                  &v20,
                                  v14 + 72);
        if ( *(uint *)(v7 + 312) )
        {
          ((void (*)(void))dword_225423C[1462])();
          ((void (__fastcall *)(uint, int))dword_225423C[1473])(*(uint *)(v7 + 312), 192);
          ((void (__fastcall *)(uint, uint))dword_225423C[1471])(*(uint *)(v7 + 312), 0);
        }
        else
        {
          ErrorHandler();
        }
        *(uchar *)(v7 + 356) = GetPkmnBaseData2(*((ushort *)v9 + 4), *((ushort *)v9 + 6), 0x1Cu);
        *(uchar *)(v7 + 357) = 0;
        *(uchar *)(v7 + 358) = 0;
        v13 = v21;
        *(uint *)(v7 + 328) = v20;
        *(uint *)(v7 + 332) = v13;
        *(uint *)(v7 + 336) = 0;
        *(uint *)(v7 + 340) = 0;
        *(uint *)(v7 + 344) = 0;
        *(uint *)(v7 + 348) = 0;
        v16 += 1024;
        v9 += 3;
        ++v17;
        v10 += 2;
        v7 += 56;
        v8 += 32;
      }
      while ( v17 < *v15 );
    }
    result = (int *)Call_FS_CloseFile(v18);
  }
  return result;
}

//----- (022567D4) --------------------------------------------------------
int __fastcall Function_22567d4(int *a1)
{
  int *v1;
  uint v2;
  char v3;
  int result;

  v1 = a1;
  v2 = ((Function_201d35c() & 0x3F) - 32) << 12;
  v3 = Function_201d35c();
  *v1 = v2;
  v1[1] = ((v3 & 0x3F) - 32) << 12;
  v1[2] = 0;
  VEC_Normalize(v1, v1);
  *v1 /= 16;
  result = v1[1] / 16;
  v1[1] = result;
  return result;
}

//----- (0225681C) --------------------------------------------------------
uint *__fastcall Function_225681c(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int *v4;
  int v5;
  int v6;
  uint *result;
  int v8;

  v2 = a2;
  v8 = a1;
  v3 = 0;
  if ( *a2 > 0 )
  {
    v4 = (int *)(a1 + 316);
    v5 = a1;
    do
    {
      Function_22567d4(v4);
      if ( *(uchar *)(v5 + 356) )
      {
        ((void (__fastcall *)(uint, int))dword_225423C[1442])(*(uint *)(v5 + 308), 6);
      }
      else
      {
        if ( *(uint *)(v5 + 316) <= 0 )
          v6 = 6;
        else
          v6 = 7;
        ((void (__fastcall *)(uint, int))dword_225423C[1442])(*(uint *)(v5 + 308), v6);
      }
      ++v3;
      v4 += 14;
      v5 += 56;
    }
    while ( v3 < *v2 );
  }
  Function_22568b4(v8);
  result = AddTaskToTaskList1((int)Function_2256904, v8, 1u);
  *(uint *)(v8 + 176) = result;
  return result;
}

//----- (02256898) --------------------------------------------------------
int __fastcall Function_2256898(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  Function_2019044(*(uint *)(v3 + 4), 6);
  return Function_2256584(v2);
}

//----- (022568B4) --------------------------------------------------------
int **__fastcall Function_22568b4(int **a1)
{
  int *v1;
  int *v2;
  int **v3;
  int *v4;
  int **result;

  v1 = 0;
  a1[57] = 0;
  v2 = (int *)**a1;
  if ( (int)v2 > 0 )
  {
    v3 = a1;
    do
    {
      *((uchar *)v3 + 352) = 0;
      *((uchar *)v3 + 355) = 0;
      v1 = (int *)((char *)v1 + 1);
      v2 = (int *)**a1;
      v3 += 14;
    }
    while ( (int)v1 < (int)v2 );
  }
  a1[59] = v2;
  v4 = a1[59];
  result = a1 + 60;
  *result = v4;
  return result;
}

//----- (022568F4) --------------------------------------------------------
uint *__fastcall Function_22568f4(int a1, int a2)
{
  uint *result;

  *(uint *)(a1 + 228) = a2;
  result = (uint *)(a1 + 232);
  *result = 0;
  return result;
}

//----- (02256904) --------------------------------------------------------
int __fastcall Function_2256904(int a1, uint *a2)
{
  uint *v2;
  uint *v3;
  int v4;
  int result;

  v2 = a2;
  v3 = (uint *)*a2;
  if ( *(ushort *)(*a2 + 76) )
  {
    a2[161] = v3[20];
    a2[162] = v3[21] - 8;
    a2[59] = Function_22569c0(a2);
    v2[62] = v2[59] < *v3;
    if ( v2[62] )
    {
      v4 = v2[59];
      if ( v4 != v2[60] )
        ((void (__fastcall *)(uint, uint))dword_225423C[130])(LOWORD(v3[3 * v4 + 2]), LOWORD(v3[3 * v4 + 3]));
    }
    v2[60] = v2[59];
  }
  else
  {
    a2[62] = 0;
    a2[60] = *v3;
  }
  ((void (__fastcall *)(uint *, uint *))*(&off_2257818 + v2[57]))(v2, v3);
  Function_2256b44(v2, v3);
  result = v2[57];
  if ( result != 4 )
    result = Function_22572a0(v2, v3);
  return result;
}

//----- (022569C0) --------------------------------------------------------
int __fastcall Function_22569c0(int **a1)
{
  int **v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = 0;
  v3 = **a1;
  if ( v3 <= 0 )
    return **a1;
  while ( ((int)a1[161] - ((int)v1[82] >> 12)) * ((int)a1[161] - ((int)v1[82] >> 12))
        + ((int)a1[162] - ((int)v1[83] >> 12)) * ((int)a1[162] - ((int)v1[83] >> 12)) >= 256 )
  {
    ++v2;
    v1 += 14;
    if ( v2 >= v3 )
      return **a1;
  }
  return v2;
}

//----- (02256A14) --------------------------------------------------------
int __fastcall Function_2256a14(int a1, int a2, int a3, uint *a4)
{
  int v4;
  int result;

  v4 = ((a1 << 12) - *a4) * (((a1 << 12) - *a4) >> 12) + ((a2 << 12) - a4[1]) * (((a2 << 12) - a4[1]) >> 12);
  result = 0;
  if ( a3 * a3 << 12 > v4 )
    result = 1;
  return result;
}

//----- (02256A44) --------------------------------------------------------
uint *__fastcall Function_2256a44(uint *result, int a2)
{
  if ( *(ushort *)(a2 + 78) )
  {
    result[63] = result[62];
    result = Function_22568f4((int)result, 1);
  }
  return result;
}

//----- (02256A64) --------------------------------------------------------
uint *__fastcall Function_2256a64(uint *result, int a2)
{
  if ( *(ushort *)(a2 + 76) )
  {
    if ( ++result[58] > 6u )
      result = Function_22568f4((int)result, 2);
  }
  else if ( result[63] )
  {
    result = Function_22568f4((int)result, 0);
  }
  else
  {
    result = Function_22568f4((int)result, 3);
  }
  return result;
}

//----- (02256AA8) --------------------------------------------------------
uint *__fastcall Function_2256aa8(uint *result, int a2)
{
  if ( !*(ushort *)(a2 + 76) )
    result = Function_22568f4((int)result, 0);
  return result;
}

//----- (02256ABC) --------------------------------------------------------
uint *__fastcall Function_2256abc(uint *result, int a2)
{
  if ( *(ushort *)(a2 + 78) )
  {
    if ( result[62] )
    {
      result[63] = 1;
      result = Function_22568f4((int)result, 1);
    }
    else
    {
      result = Function_22568f4((int)result, 4);
    }
  }
  else if ( ++result[58] > 6u )
  {
    result = Function_22568f4((int)result, 0);
  }
  return result;
}

//----- (02256B08) --------------------------------------------------------
uint *__fastcall Function_2256b08(int a1)
{
  int v1;
  uint *result;

  v1 = a1;
  if ( *(uint *)(a1 + 232) )
  {
    result = (uint *)Function_2256c40();
    if ( result )
      result = Function_22568f4(v1, 0);
  }
  else
  {
    Function_2256c08();
    result = (uint *)(*(uint *)(v1 + 232) + 1);
    *(uint *)(v1 + 232) = result;
  }
  return result;
}

//----- (02256B3C) --------------------------------------------------------
void Function_2256b3c()
{
  ;
}

//----- (02256B44) --------------------------------------------------------
void __fastcall Function_2256b44(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v2 = a2;
  v6 = a1;
  v3 = 0;
  if ( *a2 > 0 )
  {
    v4 = a1;
    do
    {
      if ( *(uchar *)(v4 + 355) )
      {
        v5 = (uchar)--*(uchar *)(v4 + 355);
        Function_2256b3c();
      }
      else
      {
        ((void (__fastcall *)(int, uint *, int))*(&off_225782C + *(uchar *)(v4 + 352)))(v6, v2, v3);
      }
      ++v3;
      v4 += 56;
    }
    while ( v3 < *v2 );
  }
  Function_2256b3c();
}

//----- (02256BAC) --------------------------------------------------------
int __fastcall Function_2256bac(int a1, int a2, char a3)
{
  int v3;
  int v4;
  int result;
  uint *v6;

  v3 = 56 * a2;
  v4 = a1;
  if ( *(uchar *)(a1 + 56 * a2 + 352) == 3 )
    return Function_2256cc4();
  *(uchar *)(a1 + 352 + v3) = a3;
  v6 = (uint *)(a1 + v3);
  v6[90] = 0;
  v6[85] = 0;
  v6[86] = 0;
  v6[87] = 0;
  result = *(uchar *)(v4 + 352 + v3);
  if ( result == 3 )
    result = Function_2256c54(v4, a2);
  return result;
}

//----- (02256C08) --------------------------------------------------------
int __fastcall Function_2256c08(int **a1)
{
  int v1;
  int v2;
  int v3;
  int **v4;
  int result;

  v1 = (int)a1;
  v2 = 0;
  v3 = **a1;
  if ( v3 > 0 )
  {
    v4 = a1;
    do
    {
      Function_2256bac(v1, v2++, 5);
      *((uchar *)v4 + 355) = 0;
      v4 += 14;
      v3 = **(uint **)v1;
    }
    while ( v2 < v3 );
  }
  result = 256;
  *(uint *)(v1 + 256) = v3;
  return result;
}

//----- (02256C40) --------------------------------------------------------
BOOL __fastcall Function_2256c40(int a1)
{
  return *(uint *)(a1 + 256) == 0;
}

//----- (02256C54) --------------------------------------------------------
int __fastcall Function_2256c54(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int result;
  int v5;

  v2 = a1;
  v3 = 12 * a2;
  result = *(uchar *)(*a1 + 12 * a2 + 14);
  if ( !result )
  {
    v5 = 14 * a2;
    ((void (__fastcall *)(uint, uint, uint))dword_225423C[1464])(v2[12], v2[14 * a2 + 78], 0);
    ((void (__fastcall *)(uint, int))dword_225423C[1442])(v2[v5 + 78], *(uchar *)(*v2 + v3 + 15) - 1);
    result = ((int (__fastcall *)(uint, uint))dword_225423C[1462])(v2[v5 + 78], 0);
  }
  return result;
}

//----- (02256C98) --------------------------------------------------------
int __fastcall Function_2256c98(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 312;
  v3 = 56 * a2;
  ((void (__fastcall *)(uint, uint, int))dword_225423C[1464])(
    *(uint *)(a1 + 48),
    *(uint *)(a1 + 312 + 56 * a2),
    2);
  ((void (__fastcall *)(uint, int))dword_225423C[1442])(*(uint *)(v2 + v3), 3);
  return ((int (__fastcall *)(uint, uint))dword_225423C[1462])(*(uint *)(v2 + v3), 0);
}

//----- (02256CC4) --------------------------------------------------------
void __fastcall Function_2256cc4(int a1, int a2)
{
  int v2;

  v2 = *(uint *)(a1 + 56 * a2 + 312);
  JUMPOUT(&dword_225423C[1462]);
}

//----- (02256CDC) --------------------------------------------------------
int __fastcall Function_2256cdc(int a1, int a2, int *a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int result;
  int v8;
  char v9;
  int v10;

  v10 = a4;
  v4 = a3;
  v5 = a1;
  v6 = a2;
  result = VEC_Mag(a3);
  if ( result > v5 )
  {
    v8 = u32_div_f(result * v6, 100);
    VEC_Normalize(v4, (int *)&v9);
    *v4 = 0;
    v4[1] = 0;
    v4[2] = 0;
    result = Function_20bd628(v8, (int *)&v9, v4, v4);
  }
  return result;
}

//----- (02256D20) --------------------------------------------------------
BOOL __fastcall Function_2256d20(uint *a1)
{
  return !*a1 && !a1[1];
}

//----- (02256D34) --------------------------------------------------------
int __fastcall Function_2256d34(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  int result;

  v3 = a1;
  v4 = a3;
  v5 = a2;
  Function_2256b3c();
  if ( !*(ushort *)(v5 + 76) )
    return Function_2256cdc(768, 96, &v3[14 * v4 + 79], (int)(v3 + 79));
  if ( v3[62] )
  {
    result = v3[59];
    if ( result == v4 )
    {
      result = Function_2256a14(v3[161], v3[162], 8, &v3[14 * v4 + 82]);
      if ( result )
      {
        if ( *(uchar *)(v5 + 12 * v4 + 14) == 1 )
          result = Function_2256bac((int)v3, v4, 4);
        else
          result = Function_2256bac((int)v3, v4, 3);
      }
    }
  }
  else
  {
    result = Function_2256a14(v3[161], v3[162], 48, &v3[14 * v4 + 82]);
    if ( result )
    {
      if ( *(uchar *)(v5 + 12 * v4 + 14) == 1 )
      {
        Function_2256bac((int)v3, v4, 2);
        result = Function_2256f34(v3, v5, v4);
      }
      else
      {
        Function_2256bac((int)v3, v4, 1);
        result = Function_2256e1c(v3, v5, v4);
      }
    }
  }
  return result;
}

//----- (02256E1C) --------------------------------------------------------
int __fastcall Function_2256e1c(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  int result;
  int v9;
  int v10;
  int v11;
  uint *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;

  v17 = a4;
  v4 = a1;
  v5 = a3;
  v6 = a2;
  Function_2256b3c();
  if ( !*(ushort *)(v6 + 76) )
    return Function_2256bac((int)v4, v5, 0);
  v7 = (int)(v4 + 82);
  v13 = 56 * v5;
  if ( !Function_2256a14(v4[161], v4[162], 64, &v4[14 * v5 + 82]) )
    return Function_2256bac((int)v4, v5, 0);
  if ( !v4[62] || (result = v4[59], result == v5) )
  {
    if ( Function_2256a14(v4[161], v4[162], 8, (uint *)(v7 + v13)) )
    {
      result = Function_2256bac((int)v4, v5, 3);
    }
    else
    {
      v9 = v4[162] << 12;
      v14 = v4[161] << 12;
      v15 = v9;
      v16 = 0;
      VEC_Subtract(&v14, (uint *)(v7 + v13), &v14);
      VEC_Normalize(&v14, &v14);
      v10 = v6 + 15;
      v14 = s32_div_f(*((uchar *)&dword_2257814 + *(uchar *)(v10 + 12 * v5)) * v14, 100);
      v11 = s32_div_f(*((uchar *)&dword_2257814 + *(uchar *)(v10 + 12 * v5)) * v15, 100);
      v14 /= 16;
      v15 = v11 / 16;
      v12 = &v4[14 * v5 + 79];
      *v12 = v14;
      v12[1] = v11 / 16;
      result = v16;
      v12[2] = v16;
    }
  }
  return result;
}

//----- (02256F34) --------------------------------------------------------
int __fastcall Function_2256f34(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint *v10;
  int result;
  int v12;
  int v13;
  int v14;
  int v15;

  v15 = a4;
  v4 = a1;
  v5 = a3;
  v6 = a2;
  Function_2256b3c();
  if ( !*(ushort *)(v6 + 76)
    || !Function_2256a14(*(uint *)(v4 + 644), *(uint *)(v4 + 648), 64, (uint *)(v4 + 328 + 56 * v5)) )
  {
    return Function_2256bac(v4, v5, 0);
  }
  v7 = *(uint *)(v4 + 644);
  v13 = *(uint *)(v4 + 648) << 12;
  v14 = 0;
  v12 = v7 << 12;
  VEC_Subtract((uint *)(v4 + 328 + 56 * v5), &v12, &v12);
  VEC_Normalize(&v12, &v12);
  v8 = v6 + 15;
  v12 = s32_div_f(*((uchar *)&dword_2257810 + *(uchar *)(v8 + 12 * v5)) * v12, 100);
  v9 = s32_div_f(*((uchar *)&dword_2257810 + *(uchar *)(v8 + 12 * v5)) * v13, 100);
  v12 /= 16;
  v13 = v9 / 16;
  v10 = (uint *)(v4 + 56 * v5 + 316);
  *v10 = v12;
  v10[1] = v9 / 16;
  result = v14;
  v10[2] = v14;
  return result;
}

//----- (02257010) --------------------------------------------------------
int __fastcall Function_2257010(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint *v9;
  int v10;
  int result;
  int v12;
  int v13;
  int v14;

  v3 = a1;
  v4 = a3;
  v5 = a2;
  Function_2256b3c();
  if ( !*(ushort *)(v5 + 76) )
    return Function_2256bac(v3, v4, 0);
  v6 = *(uint *)(v3 + 648) << 12;
  v12 = *(uint *)(v3 + 644) << 12;
  v14 = 0;
  v7 = 56 * v4;
  v8 = v3 + 328;
  v13 = v6;
  if ( !Function_2256a14(*(uint *)(v3 + 644), *(uint *)(v3 + 648), 8, (uint *)(v3 + 328 + 56 * v4)) )
  {
    if ( Function_2256a14(*(uint *)(v3 + 644), *(uint *)(v3 + 648), 64, (uint *)(v8 + v7)) )
      return Function_2256bac(v3, v4, 1);
    return Function_2256bac(v3, v4, 0);
  }
  VEC_Subtract(&v12, (uint *)(v8 + v7), &v12);
  if ( VEC_Mag(&v12) > 1536 )
  {
    VEC_Normalize(&v12, &v12);
    v12 = 0;
    v13 = 0;
  }
  v12 /= 16;
  v13 /= 16;
  v9 = (uint *)(v3 + v7 + 316);
  v10 = v13;
  *v9 = v12;
  v9[1] = v10;
  result = v14;
  *(uint *)(v3 + v7 + 324) = v14;
  return result;
}

//----- (022570E8) --------------------------------------------------------
int __fastcall Function_22570e8(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  uint *v7;
  int result;

  v3 = a1;
  v4 = a3;
  v5 = a2;
  Function_2256b3c();
  if ( *(ushort *)(v5 + 76) )
  {
    v6 = 56 * v4;
    if ( Function_2256a14(*(uint *)(v3 + 644), *(uint *)(v3 + 648), 8, (uint *)(v3 + 328 + 56 * v4)) )
    {
      v7 = (uint *)(v3 + v6);
      v7[79] = 0;
      result = 320;
      v7[80] = 0;
      v7[81] = 0;
      return result;
    }
    if ( Function_2256a14(*(uint *)(v3 + 644), *(uint *)(v3 + 648), 64, (uint *)(v3 + 328 + v6)) )
      return Function_2256bac(v3, v4, 2);
  }
  else if ( Function_2256d20((uint *)(v3 + 316 + 56 * v4)) )
  {
    Function_22567d4((int *)(v3 + 316 + 56 * v4));
  }
  return Function_2256bac(v3, v4, 0);
}

//----- (0225718C) --------------------------------------------------------
void __fastcall Function_225718c(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  uint v6;

  v3 = a1;
  v4 = a3;
  v5 = (int)&a1[14 * a3 + 77];
  Function_2256b3c();
  if ( *(uchar *)(v5 + 52) )
  {
    if ( *(uchar *)(v5 + 52) != 1 )
      return;
  }
  else
  {
    *(uint *)(v5 + 8) = 0;
    *(uint *)(v5 + 12) = 0;
    *(uint *)(v5 + 16) = 0;
    Function_2256c98((int)v3, v4);
    ((void (__fastcall *)(int))dword_225423C[122])(1641);
    ++*(uchar *)(v5 + 52);
  }
  *(uchar *)(v5 + 53) += 8;
  if ( *(uchar *)(v5 + 54) || *(uchar *)(v5 + 53) <= 0x8Cu )
  {
    if ( *(uchar *)(v5 + 53) > 0xB4u )
    {
      *(uchar *)(v5 + 53) = -76;
      *(uchar *)(v5 + 54) = 2;
    }
    v6 = Function_201d15c(*(uchar *)(v5 + 53));
    *(uint *)(v5 + 32) = 0;
    *(uint *)(v5 + 36) = -20 * v6;
    *(uint *)(v5 + 40) = 0;
    VEC_Add((uint *)(v5 + 20), (uint *)(v5 + 32), v3 + 41);
    ((void (__fastcall *)(uint, uint, uint))dword_225423C[1457])(*(uint *)v5, v3[41], v3[42]);
    ((void (__fastcall *)(uint, uint, int))dword_225423C[1457])(
      *(uint *)(v5 + 4),
      *(uint *)(v5 + 20),
      *(uint *)(v5 + 24) + 0x8000);
    if ( *(uchar *)(v5 + 54) == 2 )
    {
      Function_22567d4((int *)(v5 + 8));
      Function_2256bac((int)v3, v4, 0);
      --v3[64];
    }
  }
  else
  {
    Function_2256cc4((int)v3, v4);
  }
}

//----- (022572A0) --------------------------------------------------------
int __fastcall Function_22572a0(uint *a1, int *a2)
{
  int v2;
  uint *v3;
  uint *v4;
  int *v5;
  int v6;
  uint *v7;
  int v8;
  int v9;
  uint v10;
  int v11;
  uint v12;
  int v13;
  int v14;
  uint v15;
  int v16;
  uint v17;
  int v18;
  uint *v19;
  uint *v20;
  int v21;
  int v22;
  uint *v23;
  uint *v24;
  int *v25;
  int v26;
  int v27;
  uint *v28;
  int v29;
  long long v30;
  long long v31;
  long long v32;
  long long v33;
  int v34;
  uint *v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int result;
  uint *v43;
  uint *v44;
  uint *v45;
  int v46;
  uint *v47;
  int *v48;
  int v49;
  int v50;
  int v51;
  uint *v52;
  uint *v53;
  uint *v54;
  int v55;
  int v56;
  uint v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62[3];
  int v63;
  int v64;
  char v65;

  v47 = a1;
  v48 = a2;
  v60 = 0x10000;
  do
  {
    v57 = 0;
    v56 = 0;
    v2 = v60;
    v51 = *v48;
    if ( *v48 > 0 )
    {
      v3 = v47 + 82;
      v4 = v47 + 23;
      v5 = v47 + 79;
      do
      {
        Function_20bd628(v60, v5, v3, v4);
        v4 += 3;
        ++v56;
        v3 += 14;
        v5 += 14;
        v51 = *v48;
      }
      while ( v56 < *v48 );
    }
    v6 = 0;
    if ( v51 > 0 )
    {
      v52 = v47;
      v7 = v47;
      do
      {
        v8 = v52[23];
        if ( v8 < -40960 )
        {
          v9 = v7[79];
          if ( v9 )
          {
            v10 = s32_div_f(v8 + 40960, v9);
            if ( (int)(v2 - v10) < v2 )
            {
              v57 = 2;
              v59 = v6;
              v2 -= v10;
            }
          }
        }
        if ( v8 > 888832 )
        {
          v11 = v7[79];
          if ( v11 )
          {
            v12 = s32_div_f(v8 - 888832, v11);
            if ( (int)(v2 - v12) < v2 )
            {
              v57 = 3;
              v59 = v6;
              v2 -= v12;
            }
          }
        }
        v13 = v52[24];
        if ( v13 < -90112 )
        {
          v14 = v7[80];
          if ( v14 )
          {
            v15 = s32_div_f(v13 + 90112, v14);
            if ( (int)(v2 - v15) < v2 )
            {
              v57 = 4;
              v59 = v6;
              v2 -= v15;
            }
          }
        }
        if ( v13 > 749568 )
        {
          v16 = v7[80];
          if ( v16 )
          {
            v17 = s32_div_f(v13 - 749568, v16);
            if ( (int)(v2 - v17) < v2 )
            {
              v57 = 5;
              v59 = v6;
              v2 -= v17;
            }
          }
        }
        ++v6;
        v52 += 3;
        v7 += 14;
      }
      while ( v6 < v51 );
    }
    v55 = 0;
    if ( v51 > 0 )
    {
      v54 = v47 + 23;
      v53 = v47 + 79;
      do
      {
        v18 = 0;
        if ( v55 > 0 )
        {
          v19 = v47 + 23;
          v20 = v47 + 79;
          do
          {
            VEC_Subtract(v19, v54, &v65);
            v61 = VEC_Mag((int *)&v65);
            if ( v61 < 0x20000 )
            {
              VEC_Normalize((int *)&v65, &v63);
              VEC_Subtract(v20, v53, v62);
              v21 = VEC_DotProduct(v62, &v63);
              v22 = v2 - s32_div_f(0x20000 - v61, -v21);
              if ( v22 < v2 )
              {
                v57 = 1;
                v59 = v18;
                v58 = v55;
                v2 = v22;
              }
            }
            ++v18;
            v19 += 3;
            v20 += 14;
          }
          while ( v18 < v55 );
        }
        v54 += 3;
        v53 += 14;
        ++v55;
        v51 = *v48;
      }
      while ( v55 < *v48 );
    }
    if ( v2 <= 0 )
      break;
    v49 = 0;
    if ( v51 > 0 )
    {
      v23 = v47 + 82;
      v24 = v47 + 82;
      v25 = v47 + 79;
      do
      {
        Function_20bd628(v2, v25, v24, v23);
        v23 += 14;
        ++v49;
        v24 += 14;
        v25 += 14;
      }
      while ( v49 < *v48 );
    }
    if ( v57 <= 5 )
      JUMPOUT(__CS__, *((short *)&off_22574C2 + v57) + 36009156);
    switch ( (uchar)v57 )
    {
      case 1:
        v26 = 14 * v59;
        v50 = (int)&v47[14 * v59];
        if ( LOBYTE(v47[14 * v59 + 88]) == 3 )
        {
          v27 = 14 * v58;
          v28 = &v47[14 * v58 + 79];
          if ( (*v28 || v28[1]) && (v29 = (int)&v47[v27], !BYTE2(v47[v27 + 89])) )
          {
            *v28 = -*v28;
            v28[1] = -v28[1];
          }
          else
          {
            VEC_Subtract(&v47[v27 + 82], &v47[v26 + 82], &v65);
            VEC_Normalize((int *)&v65, &v63);
            v30 = ll_mul(v63, 410LL);
            v31 = (uint)v30;
            LODWORD(v30) = 2048;
            *v28 = (v31 + v30) >> 12;
            LODWORD(v31) = 410;
            v32 = ll_mul(v64, v31);
            v33 = (uint)v32;
            LODWORD(v32) = 2048;
            v28[1] = (v33 + v32) >> 12;
            v29 = (int)&v47[v27];
            BYTE2(v47[v27 + 89]) = 1;
          }
          *(uchar *)(v29 + 355) = 20;
        }
        else
        {
          v34 = 14 * v58;
          if ( LOBYTE(v47[14 * v58 + 88]) == 3 )
          {
            v35 = &v47[v26 + 79];
            if ( (*v35 || v35[1]) && !*(uchar *)(v50 + 358) )
            {
              *v35 = -*v35;
              v35[1] = -v35[1];
            }
            else
            {
              VEC_Subtract(&v47[v26 + 82], &v47[v34 + 82], &v65);
              VEC_Normalize((int *)&v65, &v63);
              *v35 = (ll_mul(v63, 410LL) + 2048) >> 12;
              v35[1] = (ll_mul(v64, 410LL) + 2048) >> 12;
              *(uchar *)(v50 + 358) = 1;
            }
            *(uchar *)(v50 + 355) = 20;
          }
          else
          {
            VEC_Subtract(&v47[v26 + 82], &v47[v34 + 82], &v65);
            VEC_Mag((int *)&v65);
            VEC_Normalize((int *)&v65, &v63);
            VEC_Subtract(&v47[v26 + 79], &v47[v34 + 79], v62);
            v36 = VEC_DotProduct(v62, &v63);
            Function_20bd628(-v36, &v63, &v47[v26 + 79], &v47[v26 + 79]);
            Function_20bd628(v36, &v63, &v47[v34 + 79], &v47[v34 + 79]);
            v37 = (int)&v47[v26];
            *(uchar *)(v37 + 355) = 20;
            v38 = (int)&v47[v34];
            *(uchar *)(v38 + 355) = 20;
            *(uchar *)(v37 + 358) = 0;
            *(uchar *)(v38 + 358) = 0;
          }
        }
        break;
      case 2:
      case 3:
        v39 = (int)&v47[14 * v59];
        *(uint *)(v39 + 316) = -*(uint *)(v39 + 316);
        *(uchar *)(v39 + 358) = 0;
        break;
      case 4:
      case 5:
        v40 = (int)&v47[14 * v59];
        *(uint *)(v40 + 320) = -*(uint *)(v40 + 320);
        *(uchar *)(v40 + 358) = 0;
        break;
      default:
        break;
    }
    v60 -= v2;
  }
  while ( v57 );
  v41 = 0;
  result = *v48;
  if ( *v48 > 0 )
  {
    v43 = v47;
    v44 = v47 + 85;
    v45 = v47 + 82;
    do
    {
      if ( *((uchar *)v43 + 352) < 3u )
      {
        if ( *((uchar *)v43 + 356) )
        {
          ((void (__fastcall *)(uint, int))dword_225423C[1442])(v43[77], 6);
        }
        else
        {
          if ( v43[79] <= 0 )
            v46 = 6;
          else
            v46 = 7;
          ((void (__fastcall *)(uint, int))dword_225423C[1442])(v43[77], v46);
        }
      }
      VEC_Add(v45, v44, v47 + 41);
      ((void (__fastcall *)(uint, uint, uint))dword_225423C[1457])(v43[77], v47[41], v47[42]);
      ((void (__fastcall *)(uint, uint, int))dword_225423C[1457])(v43[78], v43[82], v43[83] + 0x8000);
      ++v41;
      result = *v48;
      v43 += 14;
      v44 += 14;
      v45 += 14;
    }
    while ( v41 < *v48 );
  }
  return result;
}

