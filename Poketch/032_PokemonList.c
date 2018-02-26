//----- (022561D4) --------------------------------------------------------
int __fastcall Function_22561d4(int *a1)
{
  int *v1;
  int v2;

  v1 = a1;
  v2 = malloc(8u, 124);
  if ( v2 )
  {
    if ( Function_225621c() && AddTaskToTaskList1((int)Function_2256278, v2, 1u) )
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

  v2 = a1;
  v3 = a2;
  if ( !Function_2256470(a1 + 116, a1 + 4) )
    return 0;
  *(uchar *)v2 = 0;
  *(uchar *)(v2 + 1) = 0;
  *(uchar *)(v2 + 2) = 0;
  v4 = ((int (__fastcall *)(int))dword_225423C[194])(v3);
  v5 = LoadPokePartyAdress(v4);
  Function_22563c8(v2 + 4, v5);
  *(ushort *)(v2 + 104) = 0;
  *(ushort *)(v2 + 106) = 0;
  *(uint *)(v2 + 108) = 0;
  *(uint *)(v2 + 112) = 0;
  *(uint *)(v2 + 120) = v3;
  return 1;
}

//----- (02256264) --------------------------------------------------------
uint __fastcall Function_2256264(int a1)
{
  int v1;

  v1 = a1;
  Function_2256508(*(uint *)(a1 + 116));
  return free(v1);
}

//----- (02256278) --------------------------------------------------------
int __fastcall Function_2256278(int result, uchar *a2)
{
  int v2;
  uint v3;
  int *v4;

  v2 = (int)a2;
  v3 = *a2;
  v4 = (int *)result;
  if ( v3 < 3 )
  {
    result = ((int (__fastcall *)(int))*(&off_2256CC0 + v3))(v2);
    if ( result )
    {
      Function_2256264(v2);
      Call_RemoveTaskFromTaskList(v4);
      result = ((int (__fastcall *)(uint))dword_225423C[9])(*(uint *)(v2 + 120));
    }
  }
  return result;
}

//----- (022562AC) --------------------------------------------------------
int __fastcall Function_22562ac(int result)
{
  *(uchar *)(result + 2) = 1;
  return result;
}

//----- (022562B4) --------------------------------------------------------
char *__fastcall Function_22562b4(char *result, char a2)
{
  if ( result[2] )
    a2 = 2;
  *result = a2;
  result[1] = 0;
  return result;
}

//----- (022562C8) --------------------------------------------------------
int __fastcall Function_22562c8(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_225655c(*(uint *)(v1 + 116), 0) )
    {
      ((void (__fastcall *)(uint))dword_225423C[4])(*(uint *)(v1 + 120));
      Function_22562b4((char *)v1, 1);
    }
  }
  else
  {
    Function_2256538(*(uint *)(v1 + 116), 0);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (02256308) --------------------------------------------------------
int __fastcall Function_2256308(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;

  v1 = a1;
  if ( *(uchar *)(a1 + 2) )
  {
    Function_22562b4((char *)a1, 2);
    result = 0;
  }
  else if ( Function_225655c(*(uint *)(a1 + 116), 2)
         && (*(ushort *)(v1 + 104) = ((int (__fastcall *)(int, int))dword_225423C[140])(v1 + 108, v1 + 112)) != 0 )
  {
    *(ushort *)(v1 + 106) = Function_2022798();
    if ( *(ushort *)(v1 + 106) )
    {
      if ( (uint)Function_2256b78(*(uint *)(v1 + 108), *(uint *)(v1 + 112), *(uint *)(v1 + 4)) >= *(uint *)(v1 + 4) )
      {
        v3 = ((int (__fastcall *)(uint))dword_225423C[194])(*(uint *)(v1 + 120));
        v4 = LoadPokePartyAdress(v3);
        Function_22563c8(v1 + 4, v4);
        Function_2256538(*(uint *)(v1 + 116), 2);
      }
    }
    result = 0;
  }
  else
  {
    result = 0;
    *(uint *)(v1 + 108) = 0;
    *(uint *)(v1 + 112) = 0;
    *(ushort *)(v1 + 106) = 0;
  }
  return result;
}

//----- (02256394) --------------------------------------------------------
int __fastcall Function_2256394(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_2256568(*(uint *)(v1 + 116)) )
      return 1;
  }
  else
  {
    Function_2256538(*(uint *)(v1 + 116), 1);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (022563C8) --------------------------------------------------------
int __fastcall Function_22563c8(int *a1, int a2)
{
  int result;
  int v3;
  int *v4;
  int *v5;
  int v6;
  int *v7;
  uint *v8;

  v7 = a1;
  v8 = (uint *)a2;
  result = GetNrOfPkmnInParty(a2);
  v3 = 0;
  *v7 = result;
  if ( result > 0 )
  {
    v4 = v7;
    do
    {
      v5 = GetAdrOfPkmnInParty(v8, v3);
      v6 = InitEncryptPkmnData(v5);
      v4[1] = Function_2079d40((int)v5);
      *((ushort *)v4 + 4) = GetPkmnData(v5, 5u, 0);
      *((ushort *)v4 + 5) = GetPkmnData(v5, 0xA3u, 0);
      *((ushort *)v4 + 6) = GetPkmnData(v5, 0xA4u, 0);
      *((ushort *)v4 + 7) = GetPkmnData(v5, 6u, 0);
      *((ushort *)v4 + 8) = GetPkmnData(v5, 0xA0u, 0) != 0;
      *((uchar *)v4 + 18) = GetPkmnData(v5, 0x4Cu, 0);
      *((uchar *)v4 + 19) = GetPkmnData(v5, 0x70u, 0);
      InitEncryptPkmnData_Part1And2(v5, v6);
      ++v3;
      result = *v7;
      v4 += 4;
    }
    while ( v3 < *v7 );
  }
  return result;
}

//----- (02256470) --------------------------------------------------------
int __fastcall Function_2256470(uint *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  uint *v6;
  uint *v8;
  uint *v9;

  v2 = a2;
  v8 = a1;
  v3 = malloc(8u, 908);
  v9 = (uint *)v3;
  if ( !v3 )
    return 0;
  ((void (__fastcall *)(int, int))dword_225423C[917])(v3 + 12, 8);
  *v9 = v2;
  v9[1] = ((int (*)(void))dword_225423C[270])();
  v4 = 0;
  v9[2] = ((int (*)(void))dword_225423C[266])();
  v9[14] = 0;
  v9[61] = 0;
  v5 = (int)(v9 + 15);
  v6 = v9;
  do
  {
    Function_201a7a0(v5);
    v6[39] = 0;
    ++v4;
    v6[45] = 0;
    v5 += 16;
    ++v6;
  }
  while ( v4 < 6 );
  ((void (__fastcall *)(uint *, int, int, int, int))dword_225423C[1479])(
    v9 + 51,
    12,
    5,
    6,
    8);
  ((void (__fastcall *)(uint *, int, int, int, int))dword_225423C[1479])(
    v9 + 56,
    12,
    107,
    108,
    8);
  *v8 = v9;
  return 1;
}

//----- (02256508) --------------------------------------------------------
uint __fastcall Function_2256508(uint result)
{
  int v1;
  int *v2;

  v1 = result;
  if ( result )
  {
    Function_2256bd4();
    ((void (__fastcall *)(int))dword_225423C[1501])(v1 + 204);
    ((void (__fastcall *)(int))dword_225423C[1501])(v1 + 224);
    v2 = *(int **)(v1 + 244);
    if ( v2 )
      Call_RemoveTaskFromTaskList(v2);
    result = free(v1);
  }
  return result;
}

//----- (02256538) --------------------------------------------------------
int __fastcall Function_2256538(int *a1)
{
  int v1;

  v1 = *a1;
  return ((int (__fastcall *)(int *))dword_225423C[976])(&dword_2256D0C[3]);
}

//----- (0225655C) --------------------------------------------------------
void Function_225655c()
{
  JUMPOUT(&dword_225423C[957]);
}

//----- (02256568) --------------------------------------------------------
void Function_2256568()
{
  JUMPOUT(&dword_225423C[966]);
}

//----- (02256574) --------------------------------------------------------
int __fastcall Function_2256574(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = ((int (*)(void))dword_225423C[1024])();
  return ((int (__fastcall *)(int, int))dword_225423C[1018])(v2 + 12, v1);
}

//----- (02256588) --------------------------------------------------------
int __fastcall Function_2256588(int a1, int a2)
{
  int v2;
  uint *v3;
  uint v4;

  v2 = a2;
  v3 = (uint *)((int (__fastcall *)(int))dword_225423C[1024])(a2);
  Function_20183c4((uint *)v3[1], 6u, dword_2256CFC, 0);
  v4 = (uint)LoadFromNARC_RGCN(12, 106, (uint *)v3[1], 6u, 0, 0, 1, 8) >> 5;
  Function_2019cb8(v3[1], 6, 5, 0, 0, 0x20u, 0x18u, 0);
  ((void (*)(void))dword_225423C[287])();
  v3[13] = v4;
  Function_2256648(v3, *v3, v4);
  Function_2019448((uint *)v3[1], 6u);
  ((void (__fastcall *)(int, int))dword_225423C[1075])(15, 1);
  ((void (__fastcall *)(int))dword_225423C[1097])(2);
  Function_2256898(v3, *v3);
  Function_225692c(v3, *v3);
  Function_2256a48(v3);
  REG_DISPCNT_SUB = REG_DISPCNT_SUB & 0xFFFFE0FF | ((((uint)(REG_DISPCNT_SUB << 19) >> 27) | 0x14) << 8);
  return Function_2256574(v2);
}

//----- (02256648) --------------------------------------------------------
int __fastcall Function_2256648(int a1, uint *a2, short a3)
{
  int v3;
  short v4;
  short *v5;
  uint *v6;
  int v7;
  int v8;
  int result;
  int v10;
  uint *v11;
  short v12;
  int v13;

  v10 = a1;
  v13 = 0;
  v11 = a2;
  v3 = *a2;
  v12 = a3;
  if ( v3 > 0 )
  {
    v4 = 0;
    v5 = &word_2256CE4;
    v6 = v11;
    v7 = a1 + 60;
    do
    {
      Function_201a7a0(v7);
      Function_201a7e8(*(uint **)(v10 + 4), v7, 6, *v5, v5[1], 8u, 1u, 0, v12 + v4);
      Function_201a9f4(v7);
      Function_22566e0(v7, v10);
      v8 = Function_225686c(*((ushort *)v6 + 5), *((ushort *)v6 + 6));
      Function_225682c(v7, v8);
      v7 += 16;
      ++v13;
      v4 += 8;
      v3 = *v11;
      v5 += 2;
      v6 += 4;
    }
    while ( v13 < *v11 );
  }
  result = v10;
  *(uint *)(v10 + 56) = v3;
  return result;
}

//----- (022566E0) --------------------------------------------------------
char *__fastcall Function_22566e0(uchar *a1, int a2)
{
  uchar *v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_2019cb8(*(uint *)(a2 + 4), 6, 1, (a1[5] - 1) & 0xFF, a1[6] - 1, 1u, 1u, 0);
  Function_2019cb8(*(uint *)(v3 + 4), 6, 2, v2[5], v2[6] - 1, v2[7], 1u, 0);
  Function_2019cb8(*(uint *)(v3 + 4), 6, 1025, (v2[5] + v2[7]) & 0xFF, v2[6] - 1, 1u, 1u, 0);
  Function_2019cb8(*(uint *)(v3 + 4), 6, 6, (v2[5] - 1) & 0xFF, v2[6], 1u, v2[8], 0);
  Function_2019cb8(*(uint *)(v3 + 4), 6, 1030, (v2[5] + v2[7]) & 0xFF, v2[6], 1u, v2[8], 0);
  Function_2019cb8(*(uint *)(v3 + 4), 6, 2049, (v2[5] - 1) & 0xFF, v2[6] + v2[8], 1u, 1u, 0);
  Function_2019cb8(*(uint *)(v3 + 4), 6, 2050, v2[5], v2[6] + v2[8], v2[7], 1u, 0);
  return Function_2019cb8(*(uint *)(v3 + 4), 6, 3073, (v2[5] + v2[7]) & 0xFF, v2[6] + v2[8], 1u, 1u, 0);
}

//----- (0225682C) --------------------------------------------------------
int *__fastcall Function_225682c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  Function_201ae78(a1, 4, 0, 0, 0x40u, 8u);
  if ( v2 )
    Function_201ae78(v3, 15, 0, 0, v2, 8u);
  return Function_201accc(v3);
}

//----- (0225686C) --------------------------------------------------------
int __fastcall Function_225686c(int a1, int a2)
{
  uint v3;

  if ( !a1 )
    return 0;
  if ( a1 == a2 )
    return 64;
  v3 = (uint)(32 * u32_div_f(a1 << 12, a2)) >> 12;
  if ( v3 )
  {
    if ( v3 == 32 )
      v3 = 31;
  }
  else
  {
    v3 = 1;
  }
  return 2 * v3;
}

//----- (02256898) --------------------------------------------------------
int __fastcall Function_2256898(int a1, uint *a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;
  uint *v7;
  short *v8;
  int v9;
  uint *v10;
  int v11;
  int v12;
  _BOOL2 v13;
  char v14;
  char v15;
  char v16;
  char v17;
  int v18;

  v18 = a4;
  v9 = a1;
  v10 = a2;
  Function_2006ec0(12, 109, 1, 0, 0, 1, 8);
  v4 = 0;
  v14 = 0;
  v15 = 2;
  v16 = 0;
  v17 = 0;
  result = *v10;
  if ( *v10 > 0 )
  {
    v6 = v9;
    v7 = v10;
    v8 = &word_2256CCC;
    do
    {
      if ( *((ushort *)v7 + 7) )
      {
        v13 = Function_207d2d0(*((ushort *)v7 + 7)) != 0;
        v11 = ((ushort)*v8 + 28) << 12;
        v12 = ((ushort)v8[1] + 21) << 12;
        *(uint *)(v6 + 180) = ((int (__fastcall *)(uint, int *, int))dword_225423C[1397])(
                                  *(uint *)(v9 + 8),
                                  &v11,
                                  v9 + 224);
      }
      ++v4;
      result = *v10;
      v7 += 4;
      v8 += 2;
      v6 += 4;
    }
    while ( v4 < *v10 );
  }
  return result;
}

//----- (0225692C) --------------------------------------------------------
int *__fastcall Function_225692c(int a1, uint *a2, int a3, int a4)
{
  int *result;
  int v5;
  uint *v6;
  short *v7;
  int v8;
  int v9;
  int v10;
  uint *v11;
  int v12;
  int v13;
  int *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  short v19;
  char v20;
  char v21;
  char v22;
  char v23;

  v10 = a1;
  v11 = a2;
  result = LoadFromNARC_8(19, 8u, a3, a4);
  v14 = result;
  if ( result )
  {
    v19 = 0;
    v13 = 0;
    v20 = 0;
    v21 = 2;
    v22 = 1;
    v23 = 1;
    if ( *v11 > 0 )
    {
      v5 = v10;
      v12 = 8;
      v15 = v10 + 268;
      v6 = v11;
      v7 = &word_2256CCC;
      v8 = 256;
      do
      {
        Function_2006dc8((int)v14, v6[1], 0, 640, v15);
        NNS_G2dGetUnpackedPaletteData(v15, &v16);
        DC_FlushRange(*(uint *)(v16 + 20), 512);
        GXS_LoadOBJ(*(int **)(v16 + 20), v8, 0x200u);
        v17 = (ushort)*v7 << 12;
        v18 = (ushort)v7[1] << 12;
        *(uint *)(v5 + 156) = ((int (__fastcall *)(uint, int *, int))dword_225423C[1397])(
                                  *(uint *)(v10 + 8),
                                  &v17,
                                  v10 + 204);
        ((void (__fastcall *)(uint, int))dword_225423C[1473])(*(uint *)(v5 + 156), v12);
        ((void (__fastcall *)(uint, int))dword_225423C[1442])(*(uint *)(v5 + 156), 4);
        if ( *((ushort *)v6 + 5) && !*((ushort *)v6 + 8) )
        {
          v9 = Function_2079edc(
                 *((ushort *)v6 + 4),
                 *((uchar *)v6 + 19),
                 *((uchar *)v6 + 18));
          ((void (__fastcall *)(uint, int))dword_225423C[1471])(*(uint *)(v5 + 156), v9 + 2);
        }
        else
        {
          ((void (__fastcall *)(uint, int))dword_225423C[1471])(*(uint *)(v5 + 156), 1);
        }
        v8 += 512;
        v6 += 4;
        v12 += 16;
        v7 += 2;
        ++v13;
        v5 += 4;
      }
      while ( v13 < *v11 );
    }
    result = (int *)Call_FS_CloseFile(v14);
  }
  return result;
}

//----- (02256A48) --------------------------------------------------------
uint *__fastcall Function_2256a48(int a1)
{
  int v1;
  uint *result;

  v1 = a1;
  *(uchar *)(a1 + 256) = 0;
  *(uint *)(a1 + 248) = a1;
  *(uint *)(a1 + 252) = *(uint *)a1;
  result = AddTaskToTaskList1((int)Function_2256a78, a1 + 248, 1u);
  *(uint *)(v1 + 244) = result;
  return result;
}

//----- (02256A78) --------------------------------------------------------
uint __fastcall Function_2256a78(int a1, int *a2)
{
  int *v2;
  uint result;
  int v4;
  int v5;
  int v6;
  int v7;
  char v8;
  uint v9;

  v2 = a2;
  result = *((uchar *)a2 + 8);
  v4 = a2[1];
  v5 = *a2;
  if ( *((uchar *)a2 + 8) )
  {
    if ( result == 1 )
    {
      if ( *((uchar *)a2 + 11) != *((uchar *)a2 + 13)
        || *(ushort *)(v4 + 100)
        && *((uchar *)a2 + 10) == Function_2256b78(
                                              *(uint *)(v4 + 104),
                                              *(uint *)(v4 + 108),
                                              *(uint *)v4) )
      {
        if ( *((uchar *)v2 + 9) )
        {
          result = *((uchar *)v2 + 9) - 1;
          *((uchar *)v2 + 9) = result;
        }
        else
        {
          ((void (__fastcall *)(uint, int, int))dword_225423C[1457])(
            *(uint *)(v5 + 4 * *((uchar *)v2 + 10) + 156),
            (ushort)word_2256CCC[2 * *((uchar *)v2 + 10)] << 12,
            (v2[4] + (ushort)word_2256CCE[2 * *((uchar *)v2 + 10)]) << 12);
          v9 = *((uchar *)v2 + 11);
          if ( v9 < *((uchar *)v2 + 13) )
            *((uchar *)v2 + 11) = v9 + 1;
          v2[4] = -v2[4];
          result = *((uchar *)v2 + 12);
          *((uchar *)v2 + 9) = result;
        }
      }
      else
      {
        ((void (__fastcall *)(uint, int, int))dword_225423C[1457])(
          *(uint *)(v5 + 4 * *((uchar *)v2 + 10) + 156),
          (ushort)word_2256CCC[2 * *((uchar *)v2 + 10)] << 12,
          (ushort)word_2256CCE[2 * *((uchar *)v2 + 10)] << 12);
        result = 0;
        *((uchar *)v2 + 8) = 0;
      }
    }
  }
  else
  {
    result = *(ushort *)(v4 + 102);
    if ( *(ushort *)(v4 + 102) )
    {
      result = Function_2256b78(*(uint *)(v4 + 104), *(uint *)(v4 + 108), *(uint *)v4);
      if ( result < *(uint *)v4 )
      {
        v6 = 16 * result;
        v7 = v4 + 16 * result;
        if ( *(ushort *)(v7 + 10) )
        {
          if ( !*(uchar *)(v7 + 18) )
          {
            *((uchar *)v2 + 9) = 0;
            *((uchar *)v2 + 11) = 0;
            *((uchar *)v2 + 10) = result;
            v2[4] = 2;
            if ( *(ushort *)(v7 + 16) )
            {
              *((uchar *)v2 + 12) = 2;
              v8 = 4;
            }
            else
            {
              *((uchar *)v2 + 12) = 1;
              v8 = 8;
            }
            *((uchar *)v2 + 13) = v8;
            *((uchar *)v2 + 8) = 1;
            result = ((int (__fastcall *)(uint, uint))dword_225423C[130])(
                       *(ushort *)(v4 + v6 + 8),
                       *(uchar *)(v4 + v6 + 19));
          }
        }
      }
    }
  }
  return result;
}

//----- (02256B78) --------------------------------------------------------
uint __fastcall Function_2256b78(int a1, int a2, uint a3)
{
  uint v3;
  short *v4;

  v3 = 0;
  if ( !a3 )
    return a3;
  v4 = word_2256CCC;
  while ( a1 - ((uint)(ushort)*v4 - 16) >= (ushort)*v4
                                                           + 16
                                                           - ((uint)(ushort)*v4
                                                            - 16)
       || a2 - ((uint)(ushort)v4[1] - 8) >= (ushort)v4[1]
                                                            + 24
                                                            - ((uint)(ushort)v4[1]
                                                             - 8) )
  {
    ++v3;
    v4 += 2;
    if ( v3 >= a3 )
      return a3;
  }
  return v3;
}

//----- (02256BD4) --------------------------------------------------------
int __fastcall Function_2256bd4(int a1)
{
  int v1;
  int v2;
  int v3;
  uint v4;
  int v5;
  int result;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    if ( *(uint *)(v3 + 156) )
    {
      ((void (__fastcall *)(uint))dword_225423C[1437])(*(uint *)(v1 + 8));
      *(uint *)(v3 + 156) = 0;
    }
    if ( *(uint *)(v3 + 180) )
    {
      ((void (__fastcall *)(uint))dword_225423C[1437])(*(uint *)(v1 + 8));
      *(uint *)(v3 + 180) = 0;
    }
    ++v2;
    v3 += 4;
  }
  while ( v2 < 6 );
  v4 = 0;
  if ( *(uint *)(v1 + 56) )
  {
    v5 = v1 + 60;
    do
    {
      Function_201a8fc(v5);
      ++v4;
      v5 += 16;
    }
    while ( v4 < *(uint *)(v1 + 56) );
  }
  result = 0;
  *(uint *)(v1 + 56) = 0;
  return result;
}

//----- (02256C38) --------------------------------------------------------
int __fastcall Function_2256c38(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  Function_2019044(*(uint *)(v3 + 4), 6);
  return Function_2256574(v2);
}

//----- (02256C54) --------------------------------------------------------
int __fastcall Function_2256c54(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  v4 = (uint *)((int (__fastcall *)(int))dword_225423C[1025])(v2);
  Function_2256bd4(v3);
  Function_2019cb8(*(uint *)(v3 + 4), 6, 5, 0, 0, 0x20u, 0x18u, 0);
  Function_2256898(v3, v4, v5, v6);
  Function_225692c(v3, v4, v7, v8);
  Function_2256648(v3, v4, *(uint *)(v3 + 52));
  Function_2019448(*(uint **)(v3 + 4), 6u);
  ((void (__fastcall *)(int))dword_225423C[122])(1641);
  return Function_2256574(v2);
}

