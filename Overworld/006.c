//----- (0223E140) --------------------------------------------------------
uint *__fastcall Function_223e140(uint *result)
{
  uint *v1;

  v1 = result;
  switch ( (uchar)result[14] )
  {
    case 0u:
      Function_223e234();
      result = (uint *)(v1[14] + 1);
      v1[14] = result;
      break;
    case 1u:
      result[11] = Function_223e2bc(result[12], result[13]);
      result = (uint *)(v1[14] + 1);
      v1[14] = result;
      break;
    case 3u:
      Function_223e2e8();
      result = (uint *)(v1[14] + 1);
      v1[14] = result;
      break;
    case 4u:
      Function_223e248();
      result = (uint *)(v1[14] + 1);
      v1[14] = result;
      break;
    default:
      return result;
  }
  return result;
}

//----- (0223E198) --------------------------------------------------------
int __fastcall Function_223e198(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( *(uint *)(a1 + 56) != 2 )
    ErrorHandler();
  result = 3;
  *(uint *)(v1 + 56) = 3;
  return result;
}

//----- (0223E1AC) --------------------------------------------------------
int __fastcall Function_223e1ac(int a1)
{
  return *(uint *)(a1 + 56);
}

//----- (0223E1B0) --------------------------------------------------------
char *Function_223e1b0()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_2248EDC;
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

//----- (0223E1D0) --------------------------------------------------------
int __fastcall Function_223e1d0(uint *a1)
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

  v1 = a1;
  v10 = 1;
  v11 = 0;
  v12 = 0;
  v13 = 1;
  SetGraphicsModes(&v10);
  Function_201ff0c(1u, 1);
  v3 = 0;
  v4 = 0;
  v5 = 2048;
  v6 = 0;
  v7 = 524289;
  v8 = 1;
  v9 = 0;
  Function_20183c4(v1, 3u, &v3, 0);
  Function_2019690(3u, 32, 0, 4u);
  return Function_2019ebc(v1, 3u);
}

//----- (0223E234) --------------------------------------------------------
uint *__fastcall Function_223e234(int a1)
{
  return AddTaskToTaskList3((int)Function_223e25c, a1, 0x400u);
}

//----- (0223E248) --------------------------------------------------------
uint *__fastcall Function_223e248(int a1)
{
  return AddTaskToTaskList3((int)Function_223e280, a1, 0x400u);
}

//----- (0223E25C) --------------------------------------------------------
int __fastcall Function_223e25c(int *a1, int a2)
{
  int v2;
  int *v3;

  v2 = a2;
  v3 = a1;
  Function_223e1b0();
  Function_223e2a4(*(uint *)(*(uint *)v2 + 8));
  Function_223e1d0(*(uint **)(*(uint *)v2 + 8));
  return Call_RemoveTaskFromTaskList(v3);
}

//----- (0223E280) --------------------------------------------------------
int __fastcall Function_223e280(int *a1, int a2)
{
  int v2;
  int *v3;

  v2 = a2;
  v3 = a1;
  GX_SetBanks((int *)(a2 + 4));
  Function_223e2a4(*(uint *)(*(uint *)v2 + 8));
  Function_223e2ac(*(uint *)(*(uint *)v2 + 8));
  return Call_RemoveTaskFromTaskList(v3);
}

//----- (0223E2A4) --------------------------------------------------------
void Function_223e2a4()
{
  JUMPOUT(&dword_21D142C[4]);
}

//----- (0223E2AC) --------------------------------------------------------
uint Function_223e2ac()
{
  ((void (*)(void))dword_21D142C[2])();
  return Function_201ff0c(1u, 1);
}

//----- (0223E2BC) --------------------------------------------------------
int __fastcall Function_223e2bc(int a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  char *v7;
  int v8;
  int v9;
  int v10;
  char v12;
  int v13;
  int v14;
  int v15;

  v15 = a4;
  v4 = dword_2248F04;
  v5 = a1;
  v6 = a2;
  v7 = &v12;
  v8 = 5;
  do
  {
    v9 = *v4;
    v10 = v4[1];
    v4 += 2;
    *(uint *)v7 = v9;
    *((uint *)v7 + 1) = v10;
    v7 += 8;
    --v8;
  }
  while ( v8 );
  *(uint *)v7 = *v4;
  v13 = v5;
  v14 = v6;
  return ((int (__fastcall *)(char *))dword_21E2098[0])(&v12);
}

//----- (0223E2E8) --------------------------------------------------------
uint *__fastcall Function_223e2e8(int a1)
{
  return AddTaskToTaskList3((int)Function_223e2fc, a1, 0x400u);
}

//----- (0223E2FC) --------------------------------------------------------
int __fastcall Function_223e2fc(int *a1, int a2)
{
  int *v2;

  v2 = a1;
  ((void (__fastcall *)(int))dword_21E2098[20])(a2 + 44);
  return Call_RemoveTaskFromTaskList(v2);
}

//----- (0223E318) --------------------------------------------------------
uint *__fastcall Function_223e318(int a1, int a2, int a3)
{
  int v3;
  uint *v4;
  uint *result;

  v3 = a3;
  v4 = GetAdressOfSpriteID(*(uint *)(a1 + 56), a2);
  if ( v3 == 1 )
    result = SetSpriteFlags(v4, 0x100000);
  else
    result = UnsetSpriteFlags(v4, 0x100000);
  return result;
}

//----- (0223E33C) --------------------------------------------------------
int __fastcall Function_223e33c(int a1)
{
  int v1;
  int v2;
  uint *v3;
  int v4;

  v1 = a1;
  LoadOverWorldDataAdress(a1);
  v2 = GetUnknownStruct01_c(v1);
  v3 = (uint *)v2;
  v4 = *(uint *)(v2 + 12);
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      Function_223fe08(*v3);
      free((int)v3);
      return 1;
    }
  }
  else
  {
    Function_223fe9c(*v3);
    if ( Function_223ff6c(*v3) == 1 )
      ++v3[3];
  }
  return 0;
}

//----- (0223E384) --------------------------------------------------------
uint *__fastcall Function_6_223e384(int a1)
{
  int v1;
  int v2;
  uint *v3;
  uchar *v4;
  int v5;

  v1 = a1;
  v2 = LoadOverWorldDataAdress(a1);
  v3 = (uint *)malloc(4u, 16);
  v4 = v3;
  v5 = 16;
  do
  {
    *v4++ = 0;
    --v5;
  }
  while ( v5 );
  *v3 = Function_223fde4(4);
  Function_223fe1c(*v3, 0x2000, 0, 1, 16, *(uint *)(v2 + 36));
  return Function_2050944(v1, (int)Function_223e33c, (int)v3);
}

//----- (0223E3D8) --------------------------------------------------------
int __fastcall Function_223e3d8(uint *a1)
{
  uint *v1;
  int v2;
  int result;
  int v4;

  v1 = a1;
  v2 = Function_223fff8(*a1);
  result = Function_223fff4(*v1);
  if ( v1[2] != result )
  {
    v1[2] = result;
    v4 = FX_Div(v2, 0x8000);
    result = Function_223fffc(*v1, v2 - v4);
  }
  return result;
}

//----- (0223E408) --------------------------------------------------------
int __fastcall Function_223e408(int a1)
{
  int v1;
  uint *v2;
  int v3;
  int v4;
  int result;

  v1 = a1;
  LoadOverWorldDataAdress(a1);
  v2 = (uint *)GetUnknownStruct01_c(v1);
  switch ( (uchar)v2[3] )
  {
    case 0u:
      Function_200564c(0, 1);
      ++v2[3];
      goto LABEL_15;
    case 1u:
      if ( !Function_2005684() )
      {
        ++v2[3];
        v2[1] = 16;
      }
      goto LABEL_15;
    case 2u:
      v3 = v2[1] - 1;
      v2[1] = v3;
      if ( v3 <= 0 )
      {
        ++v2[3];
        Function_2005748(0x65Cu);
      }
      goto LABEL_15;
    case 3u:
      Function_223fe9c(*v2);
      Function_223e3d8(v2);
      if ( Function_223ff6c(*v2) == 1 )
      {
        Function_20057a4(1628, 0);
        ++v2[3];
        v2[1] = 16;
      }
      goto LABEL_15;
    case 4u:
      v4 = v2[1] - 1;
      v2[1] = v4;
      if ( v4 <= 0 )
        ++v2[3];
      goto LABEL_15;
    case 5u:
      Function_200560c(127, 16, 0);
      ++v2[3];
      goto LABEL_15;
    case 6u:
      if ( !Function_2005684() )
        ++v2[3];
      goto LABEL_15;
    case 7u:
      Function_223fe08(*v2);
      free((int)v2);
      result = 1;
      break;
    default:
LABEL_15:
      result = 0;
      break;
  }
  return result;
}

//----- (0223E4EC) --------------------------------------------------------
uint *__fastcall Function_6_223e4ec(int a1)
{
  int v1;
  int v2;
  uint *v3;
  uchar *v4;
  int v5;

  v1 = a1;
  v2 = LoadOverWorldDataAdress(a1);
  v3 = (uint *)malloc(4u, 16);
  v4 = v3;
  v5 = 16;
  do
  {
    *v4++ = 0;
    --v5;
  }
  while ( v5 );
  *v3 = Function_223fde4(4);
  Function_223fe1c(*v3, 0x4000, 0, 1, 24, *(uint *)(v2 + 36));
  v3[2] = Function_223fff4(*v3);
  return Function_2050944(v1, (int)Function_223e408, (int)v3);
}

//----- (0223E548) --------------------------------------------------------
int __fastcall Function_223e548(int a1, int a2, int *a3)
{
  int *v3;
  int v4;
  int result;

  v3 = a3;
  v4 = a2;
  Call_FillMemWithValue(a3, 0, 0x78u);
  v3[18] = Function_2240104(4, v4);
  result = 0;
  *v3 = 0;
  return result;
}

//----- (0223E568) --------------------------------------------------------
int __fastcall Function_223e568(int a1, int a2, int a3)
{
  return Function_22401b8(*(uint *)(a3 + 72));
}

//----- (0223E574) --------------------------------------------------------
int __fastcall Function_223e574(int a1, int a2, int *a3)
{
  int *v3;
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v3 = a3;
  result = *a3;
  v5 = a2;
  if ( (uint)*a3 <= 0xB )
    JUMPOUT(__CS__, (char *)&off_223E58E + *((short *)&off_223E58E + result) + 2);
  switch ( (uchar)a2 )
  {
    case 0:
      *a3 = result + 1;
      goto LABEL_5;
    case 1:
LABEL_5:
      ++*a3;
      goto LABEL_6;
    case 2:
LABEL_6:
      Function_22401d0(a3[18], 0);
      v3[1] = 0;
      v3[2] = 0;
      result = *v3 + 1;
      *v3 = result;
      return result;
    case 3:
      v6 = 0;
      if ( a3[1] == 12 )
      {
        v6 = 1;
      }
      else
      {
        v7 = a3[2] + 1;
        a3[2] = v7;
        if ( v7 >= 8 )
        {
          v6 = Function_2240364(
                 a3[18],
                 ((uint)a3[1] >> 31) + __ROR4__((a3[1] << 31) - ((uint)a3[1] >> 31), 31),
                 a3[1]);
          if ( v6 )
          {
            v3[2] = 0;
            ++v3[1];
          }
        }
      }
      result = Function_22405d0(v3[18]);
      if ( result )
      {
        if ( v6 )
        {
          v3[2] = 0;
          result = 4;
          *v3 = 4;
        }
      }
      return result;
    case 4:
      result = Function_2240364(a3[18], 0, 60);
      if ( result )
      {
        v3[2] = 0;
        result = 11;
        *v3 = 11;
      }
      return result;
    case 5:
      v8 = Function_223e71c(a3 + 27);
      result = v3[27];
      if ( result == 3 )
      {
        result = Function_2240060(v3[29]);
        if ( result == 13 )
        {
          result = Function_2240b9c(4, v5);
          v3[21] = result;
        }
      }
      if ( v8 == 1 )
      {
        result = *v3 + 1;
        *v3 = result;
      }
      return result;
    case 6:
      Function_223e198((int)(a3 + 3));
      result = *v3 + 1;
      *v3 = result;
      return result;
    case 7:
      Function_223e140(a3 + 3);
      result = Function_223e1ac((int)(v3 + 3));
      if ( result == 5 )
      {
        result = *v3 + 1;
        *v3 = result;
      }
      return result;
    case 8:
      Function_2240c44(a3[21], 0);
      v3[1] = 72;
      result = *v3 + 1;
      *v3 = result;
      return result;
    case 9:
      v9 = a3[1] - 1;
      a3[1] = v9;
      if ( v9 <= 0 )
      {
        Function_223e318(a2, 0, 1);
        ++*v3;
      }
      goto LABEL_28;
    case 0xA:
LABEL_28:
      result = Function_2240c7c(v3[21]);
      if ( result == 1 )
      {
        Function_223e318(v5, 0, 0);
        result = *v3 + 1;
        *v3 = result;
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (0223E6D4) --------------------------------------------------------
int __fastcall Function_223e6d4(int a1, int a2, int a3)
{
  int v3;
  int result;

  v3 = a3;
  Function_2240228(*(uint *)(a3 + 72));
  result = *(uint *)(v3 + 84);
  if ( result )
    result = Function_2240c94();
  return result;
}

//----- (0223E708) --------------------------------------------------------
BOOL Function_223e708()
{
  return *(uint *)((int (*)(void))dword_21D1BF0[15])() == 11;
}

//----- (0223E71C) --------------------------------------------------------
int __fastcall Function_223e71c(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int result;

  v1 = a1;
  switch ( (uchar)*a1 )
  {
    case 0u:
      v2 = a1[1] - 1;
      v1[1] = v2;
      if ( v2 < 0 )
        ++*v1;
      goto LABEL_11;
    case 1u:
      Function_2240000(a1[2], 13, 4, 8);
      ++*v1;
      v1[1] = 16;
      goto LABEL_11;
    case 2u:
      v3 = a1[1] - 1;
      v1[1] = v3;
      if ( v3 < 0 )
      {
        Function_2240000(v1[2], 13, 4, 8);
        ++*v1;
        v1[1] = 16;
      }
      goto LABEL_11;
    case 3u:
      v4 = a1[1] - 1;
      v1[1] = v4;
      if ( v4 < 0 )
      {
        Function_2240000(v1[2], 13, 4, 32);
        ++*v1;
        v1[1] = 40;
      }
      goto LABEL_11;
    case 4u:
      v5 = a1[1] - 1;
      v1[1] = v5;
      if ( v5 >= 0 )
        goto LABEL_11;
      result = 1;
      break;
    default:
LABEL_11:
      result = 0;
      break;
  }
  return result;
}

//----- (0223E7B4) --------------------------------------------------------
int __fastcall Function_223e7b4(int a1, int a2, uint *a3)
{
  uint *v3;
  uint *v4;

  v3 = a3;
  v4 = GetAdressOfSpriteID(*(uint *)(a2 + 56), 0);
  if ( !v4 )
    ErrorHandler();
  LoadSpritePositionX((int)v4);
  LoadSpritePositionY((int)v4);
  *v3 = Function_2240768(4);
  return Function_224077c();
}

//----- (0223E7F0) --------------------------------------------------------
int __fastcall Function_223e7f0(int a1, int a2, uint *a3)
{
  return Function_2240774(*a3);
}

//----- (0223E7FC) --------------------------------------------------------
int __fastcall Function_223e7fc(int a1, int a2, uint *a3)
{
  return Function_22407a8(*a3);
}

//----- (0223E808) --------------------------------------------------------
int __fastcall Function_223e808(int a1, int a2, uint *a3)
{
  return Function_22407b0(*a3);
}

//----- (0223E830) --------------------------------------------------------
int __fastcall Function_223e830(int a1, int a2, int a3)
{
  int v3;
  int v4;
  short v6;
  short v7;
  short v8;
  int v9;
  int v10;
  int v11;

  v3 = a2;
  v4 = a3;
  Function_2020910(5889, *(uint *)(a2 + 36));
  Function_2020a50(821845, *(uint *)(v3 + 36));
  v9 = 2261231;
  v10 = 828452;
  v11 = 2526288;
  Function_2020acc(&v9, *(uint **)(v3 + 36));
  v6 = 8866;
  v7 = -2048;
  v8 = 0;
  Function_20209d4(&v6, *(ushort **)(v3 + 36));
  Function_20206bc(0x2000, 8192000, *(uint *)(v3 + 36));
  *(uint *)(v4 + 4) = Function_22409f4(4);
  *(uint *)(v4 + 8) = Function_2240ac8(4);
  Function_2020aac(&v9, *(uint *)(v3 + 36));
  Function_2240a18(*(uint *)(v4 + 4), v9, v10, v11);
  return Function_2240aec(*(uint *)(v4 + 8), v9, v10, v11);
}

//----- (0223E8D0) --------------------------------------------------------
int __fastcall Function_223e8d0(int a1, int *a2, int a3)
{
  int *v3;
  int v4;
  short v6;
  short v7;
  short v8;
  int v9;
  int v10;
  int v11;

  v3 = a2;
  v4 = a3;
  Function_2020910(3969, a2[9]);
  Function_2020a50(1566002, v3[9]);
  v9 = 16358744;
  v10 = 808194;
  v11 = 42792265;
  Function_2020acc(&v9, (uint *)v3[9]);
  v6 = 1602;
  v7 = -4704;
  v8 = 0;
  Function_20209d4(&v6, (ushort *)v3[9]);
  Function_20206bc(360448, 8192000, v3[9]);
  ((void (__fastcall *)(int *))dword_21D5258[8])(v3 + 19);
  v3[19] = ((int (__fastcall *)(int, int))dword_21D5144[54])(v3[17], 3);
  *(uint *)(v4 + 4) = Function_22409f4(4);
  *(uint *)(v4 + 8) = Function_2240ac8(4);
  Function_2020aac(&v9, v3[9]);
  Function_2240a50(*(uint *)(v4 + 4), v9, v10, v11);
  return Function_2240b24(*(uint *)(v4 + 8), v9, v10, v11);
}

//----- (0223E984) --------------------------------------------------------
int __fastcall Function_223e984(int a1, int *a2, int a3)
{
  int *v3;
  int v4;
  short v6;
  short v7;
  short v8;
  int v9;
  int v10;
  int v11;

  v3 = a2;
  v4 = a3;
  Function_2020910(1217, a2[9]);
  Function_2020a50(2539201, v3[9]);
  v9 = 31415805;
  v10 = 473612;
  v11 = 45741218;
  Function_2020acc(&v9, (uint *)v3[9]);
  v6 = 1218;
  v7 = 2624;
  v8 = 0;
  Function_20209d4(&v6, (ushort *)v3[9]);
  Function_20206bc(720896, 6062080, v3[9]);
  ((void (__fastcall *)(int *))dword_21D5258[8])(v3 + 19);
  v3[19] = ((int (__fastcall *)(int, int))dword_21D5144[54])(v3[17], 3);
  *(uint *)(v4 + 4) = Function_22409f4(4);
  *(uint *)(v4 + 8) = Function_2240ac8(4);
  Function_2020aac(&v9, v3[9]);
  Function_2240a8c(*(uint *)(v4 + 4), v9, v10, v11);
  return Function_2240b60(*(uint *)(v4 + 8), v9, v10, v11);
}

//----- (0223EA38) --------------------------------------------------------
int __fastcall Function_223ea38(int a1, int a2, int a3)
{
  int v3;

  v3 = a3;
  Function_2240a00(*(uint *)(a3 + 4));
  return Function_2240ad4(*(uint *)(v3 + 8));
}

//----- (0223EA4C) --------------------------------------------------------
int __fastcall Function_223ea4c(int a1, int a2, int a3)
{
  int v3;

  v3 = a3;
  Function_2240a08(*(uint *)(a3 + 4));
  return Function_2240adc(*(uint *)(v3 + 8));
}

//----- (0223EA60) --------------------------------------------------------
int __fastcall Function_223ea60(int a1, int a2, int a3)
{
  int v3;

  v3 = a3;
  Function_2240a10(*(uint *)(a3 + 4));
  return Function_2240ae4(*(uint *)(v3 + 8));
}

//----- (0223EA98) --------------------------------------------------------
uint __fastcall Function_223ea98(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;

  v4 = a1;
  v5 = LoadFromNARC_8(172, 4u, a3, a4);
  v6 = 2 * *(uint *)(v4 + 16);
  Function_20170d8((int *)(v4 + 156), (int)v5, dword_2248E48[v6], 4);
  Function_2017258((int *)(v4 + 36), v4 + 156);
  Function_2017350((uint *)(v4 + 36), 0, 0, 0);
  Function_201736c((uint *)(v4 + 36), 4096, 4096, 4096);
  Function_2017348(v4 + 36, 1);
  Function_2017164((int *)(v4 + 172), v4 + 156, (int)v5, dword_2248E4C[v6], 4, (int (***)(void))(v4 + 192));
  Function_2017240(v4 + 172, 0);
  Function_201727c(v4 + 36, v4 + 172);
  return Call_FS_CloseFile(v5);
}

//----- (0223EB34) --------------------------------------------------------
int __fastcall Function_223eb34(int a1)
{
  int v1;

  v1 = a1;
  Function_2017110((int *)(a1 + 156));
  return Function_20171a0((int *)(v1 + 172), v1 + 192);
}

//----- (0223EB4C) --------------------------------------------------------
int __fastcall Function_223eb4c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int result;

  v3 = a2;
  v4 = a3;
  *(uint *)(a3 + 8) = Function_2240074(a2);
  *(ushort *)(v4 + 12) = 0;
  *(uint *)(v4 + 16) = 0;
  *(uint *)(v4 + 28) = 0;
  *(uint *)(v4 + 20) = 0;
  *(uint *)(v4 + 24) = 0;
  *(uint *)(v4 + 208) = 30;
  *(uint *)(v4 + 260) = v3;
  *(uint *)(v4 + 264) = GetAdressOfSpriteID(*(uint *)(*(uint *)(v4 + 260) + 56), 1);
  *(uint *)(v4 + 268) = GetAdressOfSpriteID(*(uint *)(*(uint *)(v4 + 260) + 56), 0);
  v5 = Function_205ef3c(*(uint *)(v4 + 260));
  *(uint *)(v4 + 272) = Function_205eb3c(v5);
  Function_20182cc((uint *)(v4 + 192), 4u, 32);
  Function_223ea98(v4, v6, v7, v8);
  GXx_SetMasterBrightness_(&REG_MASTER_BRIGHT, *(short *)(v4 + 12));
  result = 0;
  *(uint *)v4 = 0;
  return result;
}

//----- (0223EBD0) --------------------------------------------------------
int __fastcall Function_223ebd0(int a1, int a2, int a3)
{
  return Function_22400a8(*(uint *)(a3 + 8));
}

//----- (0223EBDC) --------------------------------------------------------
int __fastcall Function_223ebdc(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 24);
  if ( v1 > 5 )
  {
    if ( v1 == 99 )
      ++*(uint *)(a1 + 24);
  }
  else if ( v1 >= 0 )
  {
    JUMPOUT(__CS__, (char *)&loc_223EBFA + *((short *)&off_223EBF8 + v1));
  }
  *(uint *)(a1 + 24) = 0;
  return 1;
}

//----- (0223EE5C) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223F6CA) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0223F744) --------------------------------------------------------
int __fastcall Function_223f744(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 24);
  if ( v1 > 6 )
  {
    if ( v1 == 99 )
      ++*(uint *)(a1 + 24);
  }
  else if ( v1 >= 0 )
  {
    JUMPOUT(__CS__, (char *)&loc_223F762 + *((short *)&off_223F760 + v1));
  }
  *(uint *)(a1 + 24) = 0;
  return 1;
}

//----- (0223F9F4) --------------------------------------------------------
int __fastcall Function_223f9f4(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v10;
  int v11;
  int v12;
  int v13;

  v13 = a4;
  v4 = a1;
  v5 = a1[5];
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      a1[53] = 2064384;
      a1[54] = 1798144;
      a1[52] = 0;
      Function_2017358(a1 + 9, &v12, &v11, &v10);
      Function_223fd0c(v4 + 57, v12, v4[53], 6);
      Function_223fd0c(v4 + 61, v10, v4[54], 6);
      ++v4[5];
    }
    else
    {
      if ( v5 != 2 )
        return 1;
      Function_2017358(a1 + 9, &v12, &v11, &v10);
      v7 = Function_223fd18(v4 + 57, v4[52]);
      v8 = Function_223fd18(v4 + 61, v4[52]);
      ++v4[52];
      Function_2017350(v4 + 9, v4[57], v11, v4[61]);
      if ( v7 )
      {
        if ( v8 )
          ++v4[5];
      }
    }
  }
  else
  {
    v6 = a1[4];
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        a1 = (uint *)Function_223f744((int)a1);
      }
      else if ( v6 == 2 )
      {
        a1 = (uint *)Function_223ee5c();
      }
    }
    else
    {
      a1 = (uint *)Function_223ebdc((int)a1);
    }
    if ( a1 )
      ++v4[5];
  }
  return 0;
}

//----- (0223FAF8) --------------------------------------------------------
int *__fastcall Function_223faf8(int a1, int a2, int a3, int a4)
{
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
  int *result;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  char v27;
  int v28;

  v28 = a4;
  v4 = a3;
  v24 = 68;
  v25 = 38;
  v26 = 390;
  v5 = *(uint *)a3;
  if ( *(uint *)a3 )
  {
    if ( v5 != 1 )
    {
      if ( v5 != 2 )
      {
        if ( *(uint *)(a3 + 208) )
        {
          --*(uint *)(a3 + 208);
        }
        else
        {
          v18 = *(short *)(a3 + 12);
          if ( v18 <= 0 )
          {
            *(uint *)a3 = 6;
          }
          else
          {
            *(ushort *)(a3 + 12) = v18 - 1;
            GXx_SetMasterBrightness_(&REG_MASTER_BRIGHT, *(short *)(a3 + 12));
          }
        }
        goto LABEL_29;
      }
LABEL_19:
      v14 = *(short *)(v4 + 12);
      if ( v14 == 16 )
      {
        ++*(uint *)(v4 + 16);
        *(uint *)(v4 + 20) = 0;
        *(uint *)(v4 + 208) = 30;
        Function_223eb34(v4);
        if ( *(uint *)(v4 + 16) == 3 )
        {
          ++*(uint *)v4;
        }
        else
        {
          Function_223ea98(v4, v15, v16, v17);
          *(uint *)v4 = 0;
        }
      }
      else
      {
        *(ushort *)(v4 + 12) = v14 + 2;
        GXx_SetMasterBrightness_(&REG_MASTER_BRIGHT, *(short *)(v4 + 12));
      }
      goto LABEL_29;
    }
    if ( Function_223f9f4((uint *)a3, 38, (int)&v26, a2) )
    {
      Function_2005748(0x6D6u);
      *(uint *)(v4 + 32) = 0;
      ++*(uint *)v4;
      goto LABEL_19;
    }
    v12 = *(uint *)(v4 + 32) + 1;
    *(uint *)(v4 + 32) = v12;
    if ( *(&v24 + *(uint *)(v4 + 16)) < v12 )
    {
      v13 = *(short *)(v4 + 12);
      if ( v13 == 16 )
      {
        *(uint *)(v4 + 32) = 0;
      }
      else
      {
        *(ushort *)(v4 + 12) = v13 + 2;
        GXx_SetMasterBrightness_(&REG_MASTER_BRIGHT, *(short *)(v4 + 12));
      }
    }
  }
  else if ( *(uint *)(a3 + 208) )
  {
    --*(uint *)(a3 + 208);
  }
  else
  {
    v6 = *(short *)(a3 + 12);
    if ( v6 <= 0 )
    {
      Function_2020aac(&v27, *(uint *)(a2 + 36));
      v21 = 504;
      v22 = 504;
      v23 = 435;
      v7 = *(&v21 + *(uint *)(v4 + 16));
      if ( v7 <= 0 )
      {
        v10 = fflt(v7 << 12);
        v9 = fsub(v10, 1056964608);
      }
      else
      {
        v8 = fflt(v7 << 12);
        v9 = fadd(0x3F000000u, v8);
      }
      v11 = ffix(v9);
      Function_2017350((uint *)(v4 + 36), v11, 405504, 1310720);
      *(uint *)(v4 + 32) = 0;
      ++*(uint *)v4;
    }
    else
    {
      *(ushort *)(a3 + 12) = v6 - 1;
      GXx_SetMasterBrightness_(&REG_MASTER_BRIGHT, *(short *)(a3 + 12));
    }
  }
LABEL_29:
  result = *(int **)(v4 + 16);
  if ( result != (int *)3 )
  {
    MATRIX_IDENTITY = 0;
    Function_20171cc(v4 + 172, (uint)&MATRIX_IDENTITY >> 14);
    Function_20b275c(17, 0, 0);
    Function_2017294(v4 + 36);
    v20 = 1;
    result = Function_20b275c(18, (int)&v20, 1);
  }
  return result;
}

//----- (0223FCC0) --------------------------------------------------------
int __fastcall Function_223fcc0(int a1, int a2, int a3)
{
  return Function_22400c4(*(uint *)(a3 + 8));
}

//----- (0223FCE8) --------------------------------------------------------
uint *Function_223fce8()
{
  uint *result;

  result = (uint *)((int (*)(void))dword_21D1BF0[15])();
  *result = 3;
  return result;
}

//----- (0223FCF4) --------------------------------------------------------
int Function_223fcf4()
{
  return *(uint *)((int (*)(void))dword_21D1BF0[15])();
}

//----- (0223FD00) --------------------------------------------------------
uint *__fastcall Function_223fd00(uint *result, int a2, int a3, int a4)
{
  *result = a2;
  result[1] = a2;
  result[2] = a3 - a2;
  result[3] = a4;
  return result;
}

//----- (0223FD0C) --------------------------------------------------------
uint *__fastcall Function_223fd0c(uint *result, int a2, int a3, int a4)
{
  *result = a2;
  result[1] = a2;
  result[2] = a3 - a2;
  result[3] = a4;
  return result;
}

//----- (0223FD18) --------------------------------------------------------
int __fastcall Function_223fd18(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  long long v6;

  v2 = a1;
  v3 = a1[3];
  v4 = a2;
  if ( a2 < v3 )
  {
    v5 = 0;
  }
  else
  {
    v4 = a1[3];
    v5 = 1;
  }
  v6 = ll_mul((int)a1[2], v4 << 12);
  *v2 = FX_Div((v6 + 2048) >> 12, v3 << 12) + v2[1];
  return v5;
}

//----- (0223FD58) --------------------------------------------------------
uint *__fastcall Function_223fd58(int *a1, int a2, int a3, int a4)
{
  return Function_20170bc(a1, a2, a3, a4);
}

//----- (0223FD60) --------------------------------------------------------
uint *__fastcall Function_223fd60(int *a1, int a2, uint a3, int a4)
{
  return Function_20170d8(a1, a2, a3, a4);
}

//----- (0223FD68) --------------------------------------------------------
int __fastcall Function_223fd68(int *a1)
{
  return Function_2017110(a1);
}

//----- (0223FD70) --------------------------------------------------------
int __fastcall Function_223fd70(int *a1, int a2, int a3, uint a4, int a5, int (***a6)(void))
{
  return Function_2017164(a1, a2, a3, a4, a5, a6);
}

//----- (0223FD84) --------------------------------------------------------
int __fastcall Function_223fd84(int *a1, int a2)
{
  return Function_20171a0(a1, a2);
}

//----- (0223FD8C) --------------------------------------------------------
uint *__fastcall Function_223fd8c(int a1)
{
  return Function_20171cc(a1, 4096);
}

//----- (0223FD98) --------------------------------------------------------
int __fastcall Function_223fd98(int a1)
{
  return Function_2017204(a1, 4096);
}

//----- (0223FDA4) --------------------------------------------------------
int *__fastcall Function_223fda4(int a1, int a2)
{
  return Function_2017240(a1, a2);
}

//----- (0223FDAC) --------------------------------------------------------
int __fastcall Function_223fdac(int *a1, int a2)
{
  return Function_2017258(a1, a2);
}

//----- (0223FDB4) --------------------------------------------------------
uint __fastcall Function_223fdb4(uint a1, int a2)
{
  return Function_201727c(a1, a2);
}

//----- (0223FDBC) --------------------------------------------------------
int *__fastcall Function_223fdbc(int a1)
{
  return Function_2017294(a1);
}

//----- (0223FDC4) --------------------------------------------------------
int __fastcall Function_223fdc4(int result, int a2)
{
  return Function_2017348(result, a2);
}

//----- (0223FDCC) --------------------------------------------------------
uint *__fastcall Function_223fdcc(uint *a1, int a2, int a3, int a4)
{
  return Function_2017350(a1, a2, a3, a4);
}

//----- (0223FDD4) --------------------------------------------------------
uint *__fastcall Function_223fdd4(uint *a1, int a2, int a3, int a4)
{
  return Function_201736c(a1, a2, a3, a4);
}

//----- (0223FDDC) --------------------------------------------------------
short *__fastcall Function_223fddc(int a1, short a2, int a3)
{
  return Function_2017388(a1, a2, a3);
}

//----- (0223FDE4) --------------------------------------------------------
int *__fastcall Function_223fde4(uint a1)
{
  uint v1;
  int *v2;

  v1 = a1;
  v2 = (int *)malloc(a1, 76);
  Call_FillMemWithValue(v2, 0, 0x4Cu);
  *v2 = Function_20203ac(v1);
  v2[16] = 5;
  return v2;
}

//----- (0223FE08) --------------------------------------------------------
uint __fastcall Function_223fe08(int *a1)
{
  int v1;

  v1 = (int)a1;
  Call_free5(*a1);
  return free(v1);
}

//----- (0223FE1C) --------------------------------------------------------
int __fastcall Function_223fe1c(int *a1, int a2, int a3, int a4, int a5, int *a6)
{
  int *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint *v11;
  int v12;
  uint *v13;
  char v15;
  int v16;
  int v17;
  int v18;

  v18 = a4;
  v6 = a1;
  v7 = a2;
  v8 = a3;
  v9 = a4;
  Function_223ff7c();
  Function_20203c0(a6, (uint *)*v6);
  Function_2020aac(&v15, (int)a6);
  v10 = v16;
  v11 = v6 + 10;
  *v11 = *(uint *)&v15;
  v11[1] = v10;
  v6[12] = v17;
  v12 = v6[11];
  v13 = v6 + 13;
  *v13 = v6[10];
  v13[1] = v12;
  v6[15] = v6[12];
  Function_2020690(v6 + 10, (uint *)*v6);
  Function_20203d4(*v6);
  v6[1] = (int)a6;
  Function_223fd0c(v6 + 2, 0, v7, v9);
  Function_223fd0c(v6 + 6, 0, v8, v9);
  v6[18] = a5;
  return Function_2005748(0x6D5u);
}

//----- (0223FE9C) --------------------------------------------------------
int *__fastcall Function_223fe9c(int *result)
{
  int *v1;
  int v2;
  int v3;
  int v4;

  v1 = result;
  switch ( (uchar)result[16] )
  {
    case 0u:
      ++result[17];
      v2 = Function_223ffc8();
      result = (int *)Function_223ffe4(v1, v1[2], v1[6]);
      if ( v2 == 1 )
      {
        result = (int *)(v1[16] + 1);
        v1[16] = (int)result;
      }
      break;
    case 1u:
      --result[17];
      Function_223ffc8();
      Function_223ffe4(v1, v1[2], v1[6]);
      result = (int *)v1[17];
      if ( !result )
      {
        result = (int *)(v1[16] + 1);
        v1[16] = (int)result;
      }
      break;
    case 2u:
      ++result[17];
      v3 = Function_223ffc8();
      result = (int *)Function_223ffe4(v1, -v1[2], -v1[6]);
      if ( v3 == 1 )
      {
        result = (int *)(v1[16] + 1);
        v1[16] = (int)result;
      }
      break;
    case 3u:
      --result[17];
      Function_223ffc8();
      Function_223ffe4(v1, -v1[2], -v1[6]);
      result = (int *)v1[17];
      if ( !result )
      {
        v4 = v1[18] - 1;
        v1[18] = v4;
        if ( v4 )
        {
          result = 0;
          v1[16] = 0;
        }
        else
        {
          result = (int *)(v1[16] + 1);
          v1[16] = (int)result;
        }
      }
      break;
    case 4u:
      Function_20203d4(result[1]);
      result = (int *)(v1[16] + 1);
      v1[16] = (int)result;
      break;
    default:
      return result;
  }
  return result;
}

//----- (0223FF6C) --------------------------------------------------------
BOOL __fastcall Function_223ff6c(int a1)
{
  return *(uint *)(a1 + 64) == 5;
}

//----- (0223FF7C) --------------------------------------------------------
int __fastcall Function_223ff7c(int result)
{
  uchar *v1;
  int v2;
  uchar *v3;
  int v4;
  uchar *v5;

  v1 = (uchar *)(result + 8);
  v2 = 16;
  do
  {
    *v1++ = 0;
    --v2;
  }
  while ( v2 );
  v3 = (uchar *)(result + 24);
  v4 = 16;
  do
  {
    *v3++ = 0;
    --v4;
  }
  while ( v4 );
  v5 = (uchar *)(result + 40);
  *(uchar *)(result + 40) = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  v5[4] = 0;
  v5[5] = 0;
  v5[6] = 0;
  v5[7] = 0;
  v5[8] = 0;
  v5[9] = 0;
  v5[10] = 0;
  v5[11] = 0;
  *(uint *)(result + 64) = 0;
  *(uint *)(result + 68) = 0;
  *(uint *)(result + 72) = 0;
  return result;
}

//----- (0223FFC8) --------------------------------------------------------
int __fastcall Function_223ffc8(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_223fd18((uint *)(a1 + 8), *(uint *)(a1 + 68));
  Function_223fd18((uint *)(v1 + 24), *(uint *)(v1 + 68));
  return v2;
}

//----- (0223FFE4) --------------------------------------------------------
uint *__fastcall Function_223ffe4(uint *result, int a2, int a3)
{
  result[10] = result[13] + a2;
  result[11] = result[14] + a3;
  return result;
}

//----- (0223FFF4) --------------------------------------------------------
int __fastcall Function_223fff4(int a1)
{
  return *(uint *)(a1 + 72);
}

//----- (0223FFF8) --------------------------------------------------------
int __fastcall Function_223fff8(int a1)
{
  return *(uint *)(a1 + 16);
}

//----- (0223FFFC) --------------------------------------------------------
int __fastcall Function_223fffc(int result, int a2)
{
  *(uint *)(result + 16) = a2;
  return result;
}

//----- (02240000) --------------------------------------------------------
int __fastcall Function_2240000(int a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int v7;
  int *v8;

  v4 = (int *)a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( *(uint *)(a1 + 28) != 3 )
  {
    v8 = *(int **)(a1 + 32);
    if ( v8 )
    {
      Call_RemoveTaskFromTaskList(v8);
      v4[8] = 0;
    }
  }
  Function_223fd00(v4, 0, v5, v6);
  v4[4] = 0;
  v4[7] = 0;
  v4[6] = v7;
  v4[5] = v5;
  GXx_SetMasterBrightness_(&REG_MASTER_BRIGHT, *v4);
  v4[8] = (int)AddTaskToTaskList3((int)Function_2240064, (int)v4, 0x400u);
  return Function_2005748(0x6D4u);
}

//----- (02240060) --------------------------------------------------------
int __fastcall Function_2240060(int a1)
{
  return *(uint *)a1;
}

//----- (02240064) --------------------------------------------------------
ushort *__fastcall Function_2240064(int a1, int *a2)
{
  return GXx_SetMasterBrightness_(&REG_MASTER_BRIGHT, *a2);
}

//----- (02240074) --------------------------------------------------------
int *__fastcall Function_2240074(int a1)
{
  int v1;
  int *v2;

  v1 = a1;
  v2 = (int *)malloc(4u, 320);
  Call_FillMemWithValue(v2, 0, 0x140u);
  *v2 = v1;
  v2[75] = 5;
  Function_20182cc(v2 + 71, 4u, 32);
  return v2;
}

//----- (022400A8) --------------------------------------------------------
uint __fastcall Function_22400a8(int a1)
{
  int v1;

  v1 = a1;
  if ( *(uint *)(a1 + 300) != 5 )
    ErrorHandler();
  return free(v1);
}

//----- (022400C4) --------------------------------------------------------
int *__fastcall Function_22400c4(int a1, int a2, int a3, int a4)
{
  int v4;
  int *result;
  int v6;
  int v7;

  v7 = a4;
  v4 = a1;
  result = *(int **)(a1 + 300);
  if ( result )
  {
    --result;
    if ( (uint)result > 1 )
    {
      MATRIX_IDENTITY = 0;
      Function_20b275c(17, 0, 0);
      Function_223fdbc(v4 + 64);
      v6 = 1;
      result = Function_20b275c(18, (int)&v6, 1);
    }
  }
  return result;
}

//----- (02240104) --------------------------------------------------------
int *__fastcall Function_2240104(uint a1, int a2)
{
  int v2;
  uint v3;
  int *v4;
  uint *v5;

  v2 = a2;
  v3 = a1;
  v4 = (int *)malloc(a1, 288);
  Call_FillMemWithValue(v4, 0, 0x120u);
  v4[1] = v2;
  *v4 = 0;
  v4[71] = v3;
  Function_20182cc(v4 + 67, v3, 32);
  Function_2240260(v4 + 13, v4[71], v4 + 67);
  v5 = (uint *)Function_203d170(v4[1]);
  LoadFromNARC_RGCN(172, 74, v5, 2u, 0, 0, 0, v3);
  LoadFromNARC_RCSN(172, 76, v5, 2u, 0, 0, 0, v3);
  Call_LoadFromNARC_RLCN(172, 75, 0, 192, 32, v3);
  Function_2019060(2u, 1);
  v4[13] = 0;
  v4[14] = 31;
  G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 4, 1, v4[13], 31);
  return v4;
}

//----- (022401B8) --------------------------------------------------------
uint __fastcall Function_22401b8(int a1)
{
  int v1;

  v1 = a1;
  Function_2240340(a1 + 52, a1 + 268);
  return free(v1);
}

//----- (022401D0) --------------------------------------------------------
int __fastcall Function_22401d0(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  int v6;
  int v7;

  v2 = a1;
  v3 = a2;
  Function_2240240(a1 + 8, *(uint *)(a1 + 4), 1);
  CopySprite70Struct(*(uint **)(v2 + 8), &v5);
  Function_22402e4(v2 + 52, v5, v6, v7);
  Function_2240240(v2 + 8, *(uint *)(v2 + 4), v3);
  CopySprite70Struct(*(uint **)(v2 + 8), &v5);
  result = 1;
  *(uint *)v2 = 1;
  return result;
}

//----- (02240214) --------------------------------------------------------
BOOL __fastcall Function_2240214(int *a1)
{
  int v1;

  v1 = *a1;
  return !v1 || v1 == 5;
}

//----- (02240228) --------------------------------------------------------
int __fastcall Function_2240228(int *a1)
{
  int *v1;
  int result;

  v1 = a1;
  result = Function_2240214(a1);
  if ( result != 1 )
    result = Function_2240600(v1 + 13);
  return result;
}

//----- (02240240) --------------------------------------------------------
int __fastcall Function_2240240(uint *a1, int a2, int a3)
{
  uint *v3;
  uint *v4;
  int result;

  v3 = a1;
  v4 = GetAdressOfSpriteID(*(uint *)(a2 + 56), a3);
  *v3 = v4;
  if ( !v4 )
    ErrorHandler();
  result = 0;
  v3[9] = 0;
  v3[10] = 0;
  return result;
}

//----- (02240260) --------------------------------------------------------
uint __fastcall Function_2240260(int *a1, uint a2, int a3, int a4)
{
  int v4;
  int (***v5)(void);
  int v6;
  int *v7;
  int v8;
  int v9;
  int *v11;
  int *v12;

  v11 = a1;
  v4 = a2;
  v5 = (int (***)(void))a3;
  v12 = LoadFromNARC_8(172, a2, a3, a4);
  Function_223fd60(v11 + 32, (int)v12, 6u, v4);
  v6 = 0;
  v7 = v11 + 36;
  do
  {
    Function_223fd70(v7, (int)(v11 + 32), (int)v12, v6++ + 4, v4, v5);
    v7 += 5;
  }
  while ( v6 < 2 );
  Function_223fdac(v11 + 2, (int)(v11 + 32));
  v8 = 0;
  v9 = (int)(v11 + 36);
  do
  {
    Function_223fdb4((uint)(v11 + 2), v9);
    ++v8;
    v9 += 20;
  }
  while ( v8 < 2 );
  Function_223fdc4((int)(v11 + 2), 0);
  return Call_FS_CloseFile(v12);
}

//----- (022402E4) --------------------------------------------------------
int __fastcall Function_22402e4(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;

  v4 = a1;
  Function_223fdcc(a1 + 2, a2, a3, a4);
  Function_223fdd4(v4 + 2, 4096, 4096, 4096);
  v5 = 0;
  v6 = (int)(v4 + 36);
  do
  {
    Function_223fda4(v6, 0);
    ++v5;
    v6 += 20;
  }
  while ( v5 < 2 );
  v4[51] = 0;
  v4[46] = 0;
  v4[52] = 82;
  v4[53] = 0;
  return Function_223fdc4((int)(v4 + 2), 1);
}

//----- (02240340) --------------------------------------------------------
int __fastcall Function_2240340(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int *v5;
  int result;

  v2 = a1;
  v3 = a2;
  Function_223fd68((int *)(a1 + 128));
  v4 = 0;
  v5 = (int *)(v2 + 144);
  do
  {
    result = Function_223fd84(v5, v3);
    ++v4;
    v5 += 5;
  }
  while ( v4 < 2 );
  return result;
}

//----- (02240364) --------------------------------------------------------
int __fastcall Function_2240364(int a1, int a2, uint a3)
{
  int v3;
  uint v4;
  int v5;
  int *v6;
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
  int v26;
  int v27;

  v3 = a2;
  v4 = a3;
  v5 = 0;
  v26 = 0;
  v27 = 0;
  v6 = (int *)(a1 + 52);
  if ( dword_21BF6C4 & 0x40 )
    *v6 = ((uint)(*v6 + 1) >> 31) + __ROR4__(((*v6 + 1) << 27) - ((uint)(*v6 + 1) >> 31), 27);
  if ( dword_21BF6C4 & 0x80 )
  {
    if ( *v6 )
      --*v6;
    else
      *v6 = 31;
  }
  if ( dword_21BF6C4 & 0x10 )
    v6[1] = ((uint)(v6[1] + 1) >> 31) + __ROR4__(((v6[1] + 1) << 27) - ((uint)(v6[1] + 1) >> 31), 27);
  if ( dword_21BF6C4 & 0x20 )
  {
    v7 = v6[1];
    if ( v7 )
      v6[1] = v7 - 1;
    else
      v6[1] = 31;
  }
  if ( v4 <= 0xE )
    JUMPOUT(__CS__, *((short *)&off_22403F4 + v4) + 35914742);
  switch ( (uchar)v4 )
  {
    case 0:
      v8 = v6[1];
      if ( v8 <= 16 )
      {
        v27 = 1;
        v26 = 1;
      }
      else
      {
        v6[1] = v8 - 1;
      }
      break;
    case 1:
    case 2:
    case 3:
    case 4:
      v9 = *v6;
      if ( v3 )
      {
        if ( v9 >= 8 )
          v26 = 1;
        else
          *v6 = v9 + 1;
        v10 = v6[1];
        if ( v10 <= 8 )
          v27 = 1;
        else
          v6[1] = v10 - 1;
      }
      else
      {
        if ( v9 <= 2 )
          v26 = 1;
        else
          *v6 = v9 - 1;
        v11 = v6[1];
        if ( v11 >= 14 )
          v27 = 1;
        else
          v6[1] = v11 + 1;
      }
      break;
    case 5:
    case 6:
    case 7:
    case 8:
      v12 = *v6;
      if ( v3 )
      {
        if ( v12 >= 8 )
          v26 = 1;
        else
          *v6 = v12 + 1;
        v13 = v6[1];
        if ( v13 <= 8 )
          v27 = 1;
        else
          v6[1] = v13 - 1;
      }
      else
      {
        if ( v12 <= 3 )
          v26 = 1;
        else
          *v6 = v12 - 1;
        v14 = v6[1];
        if ( v14 >= 13 )
          v27 = 1;
        else
          v6[1] = v14 + 1;
      }
      break;
    case 9:
    case 0xA:
      v15 = *v6;
      if ( v3 )
      {
        if ( v15 >= 8 )
          v26 = 1;
        else
          *v6 = v15 + 1;
        v16 = v6[1];
        if ( v16 <= 8 )
          v27 = 1;
        else
          v6[1] = v16 - 1;
      }
      else
      {
        if ( v15 <= 4 )
          v26 = 1;
        else
          *v6 = v15 - 1;
        v17 = v6[1];
        if ( v17 >= 12 )
          v27 = 1;
        else
          v6[1] = v17 + 1;
      }
      break;
    case 0xB:
    case 0xC:
      v18 = *v6;
      if ( v3 )
      {
        if ( v18 >= 8 )
          v26 = 1;
        else
          *v6 = v18 + 1;
        v19 = v6[1];
        if ( v19 <= 8 )
          v27 = 1;
        else
          v6[1] = v19 - 1;
      }
      else
      {
        if ( v18 <= 5 )
          v26 = 1;
        else
          *v6 = v18 - 1;
        v20 = v6[1];
        if ( v20 >= 11 )
          v27 = 1;
        else
          v6[1] = v20 + 1;
      }
      break;
    case 0xD:
    case 0xE:
      v21 = *v6;
      if ( v3 )
      {
        if ( v21 >= 8 )
          v26 = 1;
        else
          *v6 = v21 + 1;
        v22 = v6[1];
        if ( v22 <= 8 )
          v27 = 1;
        else
          v6[1] = v22 - 1;
      }
      else
      {
        if ( v21 <= 6 )
          v26 = 1;
        else
          *v6 = v21 - 1;
        v23 = v6[1];
        if ( v23 >= 10 )
          v27 = 1;
        else
          v6[1] = v23 + 1;
      }
      break;
    default:
      if ( *v6 <= 0 )
        v26 = 1;
      else
        --*v6;
      v24 = v6[1];
      if ( v24 <= 0 )
        v27 = 1;
      else
        v6[1] = v24 - 1;
      break;
  }
  REG_BLDALPHA = *(ushort *)v6 | (*((ushort *)v6 + 2) << 8);
  if ( v26 && v27 )
    v5 = 1;
  return v5;
}

//----- (022405D0) --------------------------------------------------------
int __fastcall Function_22405d0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = a1 + 52;
  v2 = 0;
  v3 = a1 + 196;
  do
  {
    v4 = Function_223fd98(v3);
    ++v2;
    v5 = v4;
    v3 += 20;
  }
  while ( v2 < 2 );
  if ( v4 )
    Function_223fdc4(v1 + 8, 0);
  return v5;
}

//----- (02240600) --------------------------------------------------------
int *__fastcall Function_2240600(int a1)
{
  return Function_223fdbc(a1 + 8);
}

//----- (0224060C) --------------------------------------------------------
int *__fastcall Function_224060c(uint a1, int a2)
{
  int v2;
  int v3;
  int *v4;
  int v5;
  int v6;

  v2 = a2;
  v3 = a1;
  v4 = (int *)malloc(a1, 480);
  Call_FillMemWithValue(v4, 0, 0x1E0u);
  Function_223fd58(v4, 98, v2, v3);
  v5 = 0;
  v6 = (int)(v4 + 4);
  do
  {
    Function_22407b8(v6, v4);
    ++v5;
    v6 += 144;
  }
  while ( v5 < 3 );
  v4[112] = 0;
  return v4;
}

//----- (02240654) --------------------------------------------------------
uint __fastcall Function_2240654(int *a1)
{
  int *v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = 0;
  v3 = (int)(a1 + 4);
  do
  {
    Function_22407dc(v3);
    ++v2;
    v3 += 144;
  }
  while ( v2 < 3 );
  Function_223fd68(v1);
  return free((int)v1);
}

//----- (0224067C) --------------------------------------------------------
int __fastcall Function_224067c(int a1, int a2, int a3, int a4, int a5, short a6, short a7, short a8)
{
  int v8;
  int v9;
  int v10;
  int v11;
  int result;

  v8 = a1;
  v9 = a2;
  v10 = a3;
  v11 = a4;
  if ( *(uint *)(a1 + 448) )
    ErrorHandler();
  *(uint *)(v8 + 452) = 0;
  *(uint *)(v8 + 460) = v9;
  *(uint *)(v8 + 464) = v10;
  *(uint *)(v8 + 468) = v11;
  *(ushort *)(v8 + 472) = a6;
  *(ushort *)(v8 + 474) = a7;
  *(ushort *)(v8 + 476) = a8;
  result = 448;
  *(uint *)(v8 + 456) = a5;
  *(uint *)(v8 + 448) = 1;
  return result;
}

//----- (022406D8) --------------------------------------------------------
int __fastcall Function_22406d8(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;

  v1 = a1;
  if ( --*(uint *)(a1 + 452) < 0 )
  {
    *(uint *)(a1 + 452) = *(uint *)(a1 + 456);
    v2 = Function_22408a8();
    if ( !v2 )
      ErrorHandler();
    Function_22407e8(
      v2,
      0,
      0x10000,
      96,
      *(uint *)(v1 + 460),
      *(uint *)(v1 + 464),
      *(uint *)(v1 + 468),
      *(ushort *)(v1 + 472),
      *(ushort *)(v1 + 474),
      *(ushort *)(v1 + 476));
  }
  v3 = 0;
  v4 = v1 + 16;
  do
  {
    result = Function_224085c(v4);
    ++v3;
    v4 += 144;
  }
  while ( v3 < 3 );
  return result;
}

//----- (02240750) --------------------------------------------------------
int __fastcall Function_2240750(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = 0;
  v2 = a1 + 16;
  do
  {
    result = Function_224089c(v2);
    ++v1;
    v2 += 144;
  }
  while ( v1 < 3 );
  return result;
}

//----- (02240768) --------------------------------------------------------
int *__fastcall Function_2240768(uint a1)
{
  return Function_224060c(a1, 6);
}

//----- (02240774) --------------------------------------------------------
uint __fastcall Function_2240774(int *a1)
{
  return Function_2240654(a1);
}

//----- (0224077C) --------------------------------------------------------
int __fastcall Function_224077c(int a1, int a2, int a3, int a4)
{
  return Function_224067c(a1, (a2 << 16) + 0x8000, (a3 << 16) + 655360, (a4 << 16) + 0x10000, 64, 0, 0, 0);
}

//----- (022407A8) --------------------------------------------------------
int __fastcall Function_22407a8(int a1)
{
  return Function_22406d8(a1);
}

//----- (022407B0) --------------------------------------------------------
int __fastcall Function_22407b0(int a1)
{
  return Function_2240750(a1);
}

//----- (022407B8) --------------------------------------------------------
int __fastcall Function_22407b8(int *a1, int a2)
{
  int v2;
  int *v3;
  int result;

  v2 = a2;
  v3 = a1;
  Call_FillMemWithValue(a1, 0, 0x90u);
  Function_223fdac(v3 + 1, v2);
  Function_223fdc4((int)(v3 + 1), 0);
  result = 0;
  *v3 = 0;
  return result;
}

//----- (022407DC) --------------------------------------------------------
int *__fastcall Function_22407dc(int *a1)
{
  return Call_FillMemWithValue(a1, 0, 0x90u);
}

//----- (022407E8) --------------------------------------------------------
int __fastcall Function_22407e8(uint *a1, int a2, int a3, int a4, int a5, int a6, int a7, short a8, short a9, short a10)
{
  uint *v10;
  int v11;
  int v12;
  int v13;
  int result;

  v10 = a1;
  v11 = a2;
  v12 = a3;
  v13 = a4;
  if ( *a1 )
    ErrorHandler();
  Function_223fd0c(v10 + 31, v11, v12, v13);
  Function_223fdc4((int)(v10 + 1), 1);
  Function_223fdcc(v10 + 1, a5, a6, a7);
  Function_223fdd4(v10 + 1, v11, 4096, v11);
  Function_223fddc((int)(v10 + 1), a8, 0);
  Function_223fddc((int)(v10 + 1), a9, 1);
  Function_223fddc((int)(v10 + 1), a10, 2);
  *v10 = 1;
  result = 0;
  v10[35] = 0;
  return result;
}

//----- (0224085C) --------------------------------------------------------
uint *__fastcall Function_224085c(uint *a1)
{
  uint *v1;
  uint *result;
  int v3;

  v1 = a1;
  result = (uint *)*a1;
  if ( result )
  {
    v3 = Function_223fd18(v1 + 31, ++v1[35]);
    result = Function_223fdd4(v1 + 1, v1[31], 4096, v1[31]);
    if ( v3 == 1 )
    {
      result = 0;
      *v1 = 0;
    }
  }
  return result;
}

//----- (0224089C) --------------------------------------------------------
int *__fastcall Function_224089c(int a1)
{
  return Function_223fdbc(a1 + 4);
}

//----- (022408A8) --------------------------------------------------------
int __fastcall Function_22408a8(int a1)
{
  int v1;
  int v2;

  v1 = 0;
  v2 = a1;
  do
  {
    if ( !*(uint *)(v2 + 16) )
      return a1 + 16 + 144 * v1;
    ++v1;
    v2 += 144;
  }
  while ( v1 < 3 );
  return 0;
}

//----- (022408C8) --------------------------------------------------------
int *__fastcall Function_22408c8(uint a1, uint a2)
{
  uint v2;
  uint v3;
  int *v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  int v10;
  int *v12;

  v2 = a2;
  v3 = a1;
  v4 = (int *)malloc(a1, 212);
  Call_FillMemWithValue(v4, 0, 0xD4u);
  Function_20182cc(v4 + 49, v3, 32);
  v12 = LoadFromNARC_8(98, v3, v5, v6);
  Function_223fd60(v4 + 30, (int)v12, v2, v3);
  v7 = 0;
  v8 = v4 + 34;
  do
  {
    Function_223fd70(v8, (int)(v4 + 30), (int)v12, v7++ + 1, v3, (int (***)(void))v4 + 49);
    v8 += 5;
  }
  while ( v7 < 3 );
  Function_223fdac(v4, (int)(v4 + 30));
  v9 = 0;
  v10 = (int)(v4 + 34);
  do
  {
    Function_223fdb4((uint)v4, v10);
    ++v9;
    v10 += 20;
  }
  while ( v9 < 3 );
  Function_223fdc4((int)v4, 0);
  Call_FS_CloseFile(v12);
  return v4;
}

//----- (02240968) --------------------------------------------------------
uint __fastcall Function_2240968(int a1)
{
  int v1;
  int v2;
  int *v3;

  v1 = a1;
  Function_223fd68((int *)(a1 + 120));
  v2 = 0;
  v3 = (int *)(v1 + 136);
  do
  {
    Function_223fd84(v3, v1 + 196);
    ++v2;
    v3 += 5;
  }
  while ( v2 < 3 );
  return free(v1);
}

//----- (02240994) --------------------------------------------------------
int __fastcall Function_2240994(uint *a1, int a2, int a3, int a4, short a5, short a6, short a7)
{
  int v7;

  v7 = (int)a1;
  Function_223fdcc(a1, a2, a3, a4);
  Function_223fddc(v7, a5, 0);
  Function_223fddc(v7, a7, 2);
  Function_223fddc(v7, a6, 1);
  return Function_223fdc4(v7, 1);
}

//----- (022409D4) --------------------------------------------------------
uint *__fastcall Function_22409d4(int a1)
{
  int v1;
  int v2;
  uint *result;

  v1 = 0;
  v2 = a1 + 136;
  do
  {
    result = Function_223fd8c(v2);
    ++v1;
    v2 += 20;
  }
  while ( v1 < 3 );
  return result;
}

//----- (022409EC) --------------------------------------------------------
int *__fastcall Function_22409ec(int a1)
{
  return Function_223fdbc(a1);
}

//----- (022409F4) --------------------------------------------------------
int *__fastcall Function_22409f4(uint a1)
{
  return Function_22408c8(a1, 0);
}

//----- (02240A00) --------------------------------------------------------
uint __fastcall Function_2240a00(int a1)
{
  return Function_2240968(a1);
}

//----- (02240A08) --------------------------------------------------------
uint *__fastcall Function_2240a08(int a1)
{
  return Function_22409d4(a1);
}

//----- (02240A10) --------------------------------------------------------
int *__fastcall Function_2240a10(int a1)
{
  return Function_22409ec(a1);
}

//----- (02240A18) --------------------------------------------------------
int __fastcall Function_2240a18(uint *a1, int a2, int a3, int a4)
{
  return Function_2240994(a1, a2 + 170920, a3 - 225940, a4 - 747638, 62623, 32949, 32942);
}

//----- (02240A50) --------------------------------------------------------
int __fastcall Function_2240a50(uint *a1, int a2, int a3, int a4)
{
  return Function_2240994(a1, a2 + 1141327, a3 + 323947, a4 - 598296, 58801, 49507, 32760);
}

//----- (02240A8C) --------------------------------------------------------
int __fastcall Function_2240a8c(uint *a1, int a2, int a3, int a4)
{
  return Function_2240994(a1, a2 - 811008, a3 + 356351, a4 - 2162696, 59165, 21301, 31122);
}

//----- (02240AC8) --------------------------------------------------------
int *__fastcall Function_2240ac8(uint a1)
{
  return Function_224060c(a1, 6);
}

//----- (02240AD4) --------------------------------------------------------
uint __fastcall Function_2240ad4(int *a1)
{
  return Function_2240654(a1);
}

//----- (02240ADC) --------------------------------------------------------
int __fastcall Function_2240adc(int a1)
{
  return Function_22406d8(a1);
}

//----- (02240AE4) --------------------------------------------------------
int __fastcall Function_2240ae4(int a1)
{
  return Function_2240750(a1);
}

//----- (02240AEC) --------------------------------------------------------
int __fastcall Function_2240aec(int a1, int a2, int a3, int a4)
{
  return Function_224067c(a1, a2 + 69632, a3 - 454656, a4 - 831488, 64, 62623, 32949, 32942);
}

//----- (02240B24) --------------------------------------------------------
int __fastcall Function_2240b24(int a1, int a2, int a3, int a4)
{
  return Function_224067c(a1, a2 + 2433024, a3 + 274432, a4 - 229376, 64, 58801, 49507, 32760);
}

//----- (02240B60) --------------------------------------------------------
int __fastcall Function_2240b60(int a1, int a2, int a3, int a4)
{
  return Function_224067c(a1, a2 - 1359872, a3 - 53248, a4 - 1851392, 64, 59165, 21301, 31122);
}

//----- (02240B9C) --------------------------------------------------------
int *__fastcall Function_2240b9c(uint a1, int a2)
{
  int v2;
  uint v3;
  int *v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  int v10;
  int *v12;

  v2 = a2;
  v3 = a1;
  v4 = (int *)malloc(a1, 236);
  Call_FillMemWithValue(v4, 0, 0xECu);
  v12 = LoadFromNARC_8(98, v3, v5, v6);
  v4[54] = v2;
  Function_20182cc(v4 + 55, v3, 32);
  Function_223fd60(v4 + 30, (int)v12, 0xFu, v3);
  v7 = 0;
  v8 = v4 + 34;
  do
  {
    Function_223fd70(v8, (int)(v4 + 30), (int)v12, v7++ + 16, v3, (int (***)(void))v4 + 55);
    v8 += 5;
  }
  while ( v7 < 4 );
  Function_223fdac(v4, (int)(v4 + 30));
  v9 = 0;
  v10 = (int)(v4 + 34);
  do
  {
    Function_223fdb4((uint)v4, v10);
    ++v9;
    v10 += 20;
  }
  while ( v9 < 4 );
  Function_223fdc4((int)v4, 0);
  Call_FS_CloseFile(v12);
  return v4;
}

//----- (02240C44) --------------------------------------------------------
int __fastcall Function_2240c44(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  uint *v5;
  int v7;
  int v8;
  int v9;
  int v10;

  v10 = a4;
  v4 = a1;
  v5 = GetAdressOfSpriteID(*(uint *)(a1[54] + 56), a2);
  CopySprite70Struct(v5, &v7);
  Function_223fdcc(v4, v7, v8, v9);
  Function_223fdc4((int)v4, 1);
  return Function_2005748(0x6D8u);
}

//----- (02240C7C) --------------------------------------------------------
int __fastcall Function_2240c7c(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = 0;
  v2 = a1 + 136;
  do
  {
    result = Function_223fd98(v2);
    ++v1;
    v2 += 20;
  }
  while ( v1 < 4 );
  return result;
}

//----- (02240C94) --------------------------------------------------------
int *__fastcall Function_2240c94(int a1)
{
  return Function_223fdbc(a1);
}

//----- (02240C9C) --------------------------------------------------------
uint __fastcall Function_2240c9c(uint *a1, uint *a2, uint *a3)
{
  uint *v3;
  uint *v4;
  uint *v5;
  int v6;
  uint result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_2013960();
  if ( (uint)(v6 - 1) > 1 )
  {
    result = v6 - 3;
    if ( result <= 1 )
    {
      *v4 = v3[29];
      result = v3[30];
      *v5 = result;
    }
  }
  else
  {
    *v4 = v3[27];
    result = v3[28];
    *v5 = result;
  }
  return result;
}

//----- (02240CC8) --------------------------------------------------------
int __fastcall Function_2240cc8(int a1, int a2, uint *a3, int *a4)
{
  int v4;
  int v5;
  uint *v6;
  int *v7;
  int v8;
  int result;
  int v10;
  uint *v11;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = LoadVariableAreaAdress_19(*(uint *)(a1 + 12));
  v11 = (uint *)v8;
  result = Function_202d898(v8);
  if ( result )
  {
    v10 = Function_202d814(v11, 2);
    result = Function_2243218(v10);
    if ( **(uint **)(v4 + 28) == result )
    {
      *v6 = *(uint *)(v5 + 100);
      result = *(uint *)(v5 + 104);
      *v7 = result;
    }
  }
  return result;
}

//----- (02240D00) --------------------------------------------------------
uint __fastcall Function_2240d00(int a1, int a2, uint *a3, int a4)
{
  int v4;
  int v5;
  uint *v6;
  uint *v7;
  uint result;
  int v9;
  int v10;

  v10 = a4;
  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = (uint *)a4;
  result = Function_203a2fc(**(uint **)(a1 + 28));
  if ( result )
  {
    result = Function_202da10(*(uint *)(v4 + 12), (ushort *)&v10 + 1, &v10);
    if ( v5 )
    {
      v9 = LoadFromNARC_4(106, 8, 4u);
      if ( HIWORD(v10) != 0xFFFF )
        *v6 = *(uint *)(v9 + 4 * HIWORD(v10));
      if ( (ushort)v10 != 0xFFFF )
        *v7 = *(uint *)(v9 + 4 * (ushort)v10);
      result = free(v9);
    }
  }
  return result;
}

//----- (02240D5C) --------------------------------------------------------
int __fastcall Function_6_2240d5c_EncounterHandler(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;
  uint *v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  uchar v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  char *v20;
  short v21;
  int v22;
  uint *v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  char *v30;
  short v31;
  BOOL v32;
  BOOL v33;
  int v34;
  int v35;
  int v36;
  int *v37;
  uchar v38;
  uchar v39[3];
  int v40;
  uint *v41;
  int v42;
  int v43;
  char v44;
  int v45;
  int v46;
  int v47;
  int v48;
  char v49;
  char v50;
  char v51;
  char v52;
  char v53;
  char v54;
  char v55;
  char v56;

  v1 = a1;
  v2 = GetSpritePositionX(*(uint *)(a1 + 60));
  v34 = GetSpritePositionY(*(uint *)(v1 + 60));
  v36 = Function_2054f94(v1, v2, v34, v3);
  v38 = Function_2241874(v1, v36, v39);
  if ( !v38 )
    return 0;
  v5 = (uint *)LoadPokePartyAdress(*(uint *)(v1 + 12));
  v6 = GetMapWildPkmnAdress(v1);
  v37 = GetAdrOfPkmnInParty(v5, 0);
  Function_2242634(v1, v37, v6, &v42);
  v7 = LoadVariableAreaAdress_19(*(uint *)(v1 + 12));
  if ( !Function_202d9d8(v7) )
  {
    v8 = Function_2054a40((int)v5);
    v43 = 1;
    v44 = GetPkmnData(v8, 0xA1u, 0);
  }
  v9 = LoadVariableAreaAdress_6(*(uint *)(v1 + 12));
  v10 = GetVariableAreaAdress_6_66(v9);
  v38 = Function_224226c(0, v38, &v42, v10, v37);
  Function_2241abc(v1, &v38);
  Function_2241a90(v37, &v38);
  v33 = Function_22417c8_Encounter(v1, v38, v36) != 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  if ( Function_20696dc(v2, v34, v1, *(uint *)(v1 + 148), &v45, &v46, &v47) )
  {
    v33 = 1;
    v48 = 1;
  }
  else
  {
    v48 = 0;
  }
  if ( !v33 )
    return 0;
  v11 = LoadFlagAdress(*(uint *)(v1 + 12));
  v32 = Function_206a984(v11) != 0;
  if ( v32 || v48 || !Function_2242440(v1, &v40) )
  {
    if ( v32 )
    {
      v41 = (uint *)AllocMainGameData(0xBu, 74, v12, v13);
    }
    else
    {
      v17 = LoadFlagAdress(*(uint *)(v1 + 12));
      v35 = Function_206ae5c(v17);
      Function_2242328(v1, v35, &v41);
    }
    Function_2052314(v41, v1);
    if ( v39[0] )
    {
      if ( v39[0] != 1 )
      {
        ErrorHandler();
        Function_20520a4((int *)v41);
        return 0;
      }
      v29 = 0;
      v30 = &v49;
      do
      {
        ++v29;
        *(uint *)v30 = *(uint *)(v6 + 212);
        *((ushort *)v30 + 2) = *(char *)(v6 + 208);
        v31 = *(char *)(v6 + 209);
        v6 += 8;
        *((ushort *)v30 + 3) = v31;
        v30 += 8;
      }
      while ( v29 < 5 );
      v25 = Function_2241790(v1, v37, v41, &v49, &v42);
    }
    else
    {
      v18 = 0;
      v19 = v6;
      v20 = &v49;
      do
      {
        ++v18;
        *(uint *)v20 = *(uint *)(v19 + 8);
        *((ushort *)v20 + 2) = *(char *)(v19 + 4);
        v21 = *(char *)(v19 + 4);
        v19 += 8;
        *((ushort *)v20 + 3) = v21;
        v20 += 8;
      }
      while ( v18 < 12 );
      v22 = GetOverWorldData_VariableAreaAdresses(v1);
      v23 = (uint *)LoadPokedexDataAdress(v22);
      v24 = Function_2027474(v23);
      Function_2240c9c((uint *)v6, &v51, (uint *)&v52);
      Function_2240cc8(v1, v6, &v49, (int *)&v50);
      Function_2240d00(v1, v24, &v53, (int)&v54);
      Function_22477b8(v6, v24, &v55, &v56);
      if ( v32 )
      {
        v26 = LoadFlagAdress(*(uint *)(v1 + 12));
        v27 = Function_206b034(v26);
        v41[8] = v27;
        LoadNPCTrainerData(v41, *(uint *)(v1 + 12), 0xBu, v28);
        v25 = Function_224174c(v1, v37, v41, &v49, &v42);
      }
      else
      {
        Function_2242354(v1, v35, v24, &v49);
        v25 = Function_2241674(v1, v37, v41, v6, &v49, &v42, &v45);
      }
    }
    if ( v25 )
      Function_2050e10(v1, (int *)v41);
    else
      v33 = 0;
    if ( !Function_201833c() )
      ErrorHandler();
    if ( !Function_201833c() )
      ErrorHandler();
    if ( !v33 )
      Function_20520a4((int *)v41);
    *(ushort *)(v1 + 120) = 0;
    result = v33;
  }
  else
  {
    v14 = Function_202d93c(v40, 6u);
    if ( Function_2242388(v14, &v42) )
    {
      result = 0;
    }
    else
    {
      v41 = (uint *)AllocMainGameData(0xBu, 256, v15, v16);
      Function_2052314(v41, v1);
      Function_224239c(v42, v40, v41);
      Function_2069434(*(uint *)(v1 + 148));
      Function_2050e10(v1, (int *)v41);
      result = 1;
    }
  }
  return result;
}

//----- (0224106C) --------------------------------------------------------
BOOL __fastcall Function_6_224106c(int a1, int a2, uint **a3)
{
  int v3;
  int v4;
  uint *v6;
  int v7;
  int v8;
  int v9;
  uint v10;
  uint v11;
  int v12;
  int v13;
  short v14;
  short v15;
  int v16;
  uint v17;
  char *v18;
  int v19;
  uint v20;
  int v21;
  char *v22;
  int v23;
  int v24;
  uint **v25;
  int *v26;
  uchar v27;
  uchar v28[3];
  int v29;
  char v30;
  char v31;

  v23 = a1;
  v24 = a2;
  v25 = a3;
  v4 = Function_2242164() & 0xFF;
  if ( !v4 )
    return 0;
  v6 = (uint *)LoadPokePartyAdress(*(uint *)(v23 + 12));
  v26 = GetAdrOfPkmnInParty(v6, 0);
  Function_2242634(v23, v26, 0, &v30);
  v7 = LoadVariableAreaAdress_6(*(uint *)(v23 + 12));
  v8 = GetVariableAreaAdress_6_66(v7);
  v9 = Function_224226c(1, v4, &v30, v8, v26);
  v10 = PRNG();
  v11 = (ushort)s32_div_f(v10, 656);
  if ( v11 >= 0x64 )
    ErrorHandler();
  if ( (int)v11 >= v9 )
    return 0;
  v12 = LoadFlagAdress(*(uint *)(v23 + 12));
  v13 = Function_206ae5c(v12);
  Function_2242328(v23, v13, v25);
  Function_2052314(*v25, v23);
  Function_205285c((int)*v25);
  if ( Function_203a2f0(**(uint **)(v23 + 28)) && Function_2247660(v23) )
  {
    Function_2247794(v28, &v27);
    Function_22477a0(&v29);
    v14 = v28[0];
    v15 = v27;
    v16 = v29;
    v17 = 0;
    do
    {
      v18 = &v31 + 8 * v17;
      *(uint *)v18 = v16;
      *((ushort *)v18 + 2) = v14;
      v17 = (v17 + 1) & 0xFF;
      *((ushort *)v18 + 3) = v15;
    }
    while ( v17 < 5 );
  }
  else
  {
    v19 = GetMapWildPkmnAdress(v23);
    if ( v24 )
    {
      if ( v24 == 1 )
      {
        v3 = v19 + 340;
      }
      else if ( v24 == 2 )
      {
        v3 = v19 + 384;
      }
    }
    else
    {
      v3 = v19 + 296;
    }
    v20 = 0;
    do
    {
      v21 = v3 + 8 * v20;
      v22 = &v31 + 8 * v20;
      *(uint *)v22 = *(uint *)(v21 + 4);
      *((ushort *)v22 + 2) = *(char *)(v3 + 8 * v20);
      *((ushort *)v22 + 3) = *(char *)(v21 + 1);
      v20 = (v20 + 1) & 0xFF;
    }
    while ( v20 < 5 );
  }
  return Function_22417ac(v23, v26, *v25, &v31, &v30, v24) != 0;
}

//----- (022411C8) --------------------------------------------------------
int __fastcall Function_6_22411c8(int a1, uint *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  char *v16;
  short v17;
  int v18;
  uint *v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  char *v26;
  short v27;
  uint *v28;
  BOOL v29;
  int v30;
  int *v31;
  char v32;
  int v33;
  uint *v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  char v42;
  char v43;
  char v44;
  char v45;
  char v46;
  char v47;
  char v48;
  char v49;

  v2 = a1;
  v28 = a2;
  v3 = GetSpritePositionX(*(uint *)(a1 + 60));
  v4 = GetSpritePositionY(*(uint *)(v2 + 60));
  v6 = Function_2054f94(v2, v3, v4, v5);
  if ( !Function_2241874(v2, v6, &v32) )
    return 0;
  v8 = (uint *)LoadPokePartyAdress(*(uint *)(v2 + 12));
  v9 = GetMapWildPkmnAdress(v2);
  v31 = GetAdrOfPkmnInParty(v8, 0);
  Function_2242634(v2, v31, v9, &v35);
  v37 = 1;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v36 = 0;
  v41 = 0;
  v10 = LoadFlagAdress(*(uint *)(v2 + 12));
  v29 = Function_206a984(v10) != 0;
  if ( !v29 && Function_2242440(v2, &v33) )
  {
    v34 = (uint *)AllocMainGameData(0xBu, 256, v11, v12);
    Function_2052314(v34, v2);
    Function_224239c(v35, v33, v34);
    Function_2069434(*(uint *)(v2 + 148));
    Function_2050e78(v2, v28, (int *)v34);
    return 1;
  }
  if ( v29 )
  {
    v34 = (uint *)AllocMainGameData(0xBu, 74, v11, v12);
  }
  else
  {
    v13 = LoadFlagAdress(*(uint *)(v2 + 12));
    v30 = Function_206ae5c(v13);
    Function_2242328(v2, v30, &v34);
  }
  Function_2052314(v34, v2);
  if ( v32 )
  {
    if ( v32 != 1 )
    {
      ErrorHandler();
      return 0;
    }
    v25 = 0;
    v26 = &v42;
    do
    {
      ++v25;
      *(uint *)v26 = *(uint *)(v9 + 212);
      *((ushort *)v26 + 2) = *(char *)(v9 + 208);
      v27 = *(char *)(v9 + 209);
      v9 += 8;
      *((ushort *)v26 + 3) = v27;
      v26 += 8;
    }
    while ( v25 < 5 );
    v21 = Function_2241790(v2, v31, v34, &v42, &v35);
  }
  else
  {
    v14 = 0;
    v15 = v9;
    v16 = &v42;
    do
    {
      ++v14;
      *(uint *)v16 = *(uint *)(v15 + 8);
      *((ushort *)v16 + 2) = *(char *)(v15 + 4);
      v17 = *(char *)(v15 + 4);
      v15 += 8;
      *((ushort *)v16 + 3) = v17;
      v16 += 8;
    }
    while ( v14 < 12 );
    v18 = GetOverWorldData_VariableAreaAdresses(v2);
    v19 = (uint *)LoadPokedexDataAdress(v18);
    v20 = Function_2027474(v19);
    Function_2240c9c((uint *)v9, &v44, (uint *)&v45);
    Function_2240cc8(v2, v9, &v42, (int *)&v43);
    Function_2240d00(v2, v20, &v46, (int)&v47);
    Function_22477b8(v9, v20, &v48, &v49);
    if ( v29 )
    {
      v22 = LoadFlagAdress(*(uint *)(v2 + 12));
      v23 = Function_206b034(v22);
      v34[8] = v23;
      LoadNPCTrainerData(v34, *(uint *)(v2 + 12), 0xBu, v24);
      v21 = Function_224174c(v2, v31, v34, &v42, &v35);
    }
    else
    {
      Function_2242354(v2, v30, v20, &v42);
      v21 = Function_2241674(v2, v31, v34, v9, &v42, &v35, &v38);
    }
  }
  if ( v21 )
    Function_2050e78(v2, v28, (int *)v34);
  else
    ErrorHandler();
  *(ushort *)(v2 + 120) = 0;
  return 1;
}

//----- (022413E4) --------------------------------------------------------
int __fastcall Function_6_22413e4(int a1, uint **a2)
{
  int v2;
  uint **v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int result;
  uint *v9;
  int v10;
  int *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  uchar v17;
  int v18;
  int v19;
  uint *v20;
  int v21;
  uint *v22;
  int v23;
  char *v24;
  short v25;
  int v26;
  uint *v27;
  int v28;
  int v29;
  int v30;
  int v31;
  BOOL v32;
  BOOL v33;
  uint *v34;
  int v35;
  int *v36;
  uchar v37;
  uchar v38[3];
  int v39;
  int v40;
  int v41;
  char v42;
  int v43;
  int v44;
  int v45;
  int v46;
  char v47;
  char v48;
  char v49;
  char v50;
  char v51;
  char v52;
  char v53;
  char v54;

  v2 = a1;
  v3 = a2;
  *a2 = 0;
  v4 = GetSpritePositionX(*(uint *)(a1 + 60));
  v5 = GetSpritePositionY(*(uint *)(v2 + 60));
  v7 = Function_2054f94(v2, v4, v5, v6);
  v37 = Function_2241874(v2, v7, v38);
  if ( !v37 )
    return 0;
  v9 = (uint *)LoadPokePartyAdress(*(uint *)(v2 + 12));
  v34 = (uint *)GetMapWildPkmnAdress(v2);
  v36 = GetAdrOfPkmnInParty(v9, 0);
  Function_2242634(v2, v36, v34, &v40);
  v10 = LoadVariableAreaAdress_19(*(uint *)(v2 + 12));
  if ( !Function_202d9d8(v10) )
  {
    v11 = Function_2054a40((int)v9);
    v41 = 1;
    v42 = GetPkmnData(v11, 0xA1u, 0);
  }
  v12 = LoadVariableAreaAdress_6(*(uint *)(v2 + 12));
  v13 = GetVariableAreaAdress_6_66(v12);
  v37 = Function_224226c(0, v37, &v40, v13, v36);
  Function_2241abc(v2, &v37);
  Function_2241a90(v36, &v37);
  v33 = Function_22417c8_Encounter(v2, v37, v7) != 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v14 = LoadFlagAdress(*(uint *)(v2 + 12));
  v32 = Function_206a984(v14) != 0;
  if ( v32 || !Function_2242440(v2, &v39) )
  {
    if ( v32 )
    {
      *v3 = (uint *)AllocMainGameData(0xBu, 74, v15, v16);
    }
    else
    {
      v21 = LoadFlagAdress(*(uint *)(v2 + 12));
      v35 = Function_206ae5c(v21);
      Function_2242328(v2, v35, v3);
    }
    Function_2052314(*v3, v2);
    if ( v38[0] )
    {
      ErrorHandler();
      Function_20520a4((int *)*v3);
      result = 0;
    }
    else
    {
      v22 = v34;
      v23 = 0;
      v24 = &v47;
      do
      {
        ++v23;
        *(uint *)v24 = v22[2];
        *((ushort *)v24 + 2) = *((char *)v22 + 4);
        v25 = *((char *)v22 + 4);
        v22 += 2;
        *((ushort *)v24 + 3) = v25;
        v24 += 8;
      }
      while ( v23 < 12 );
      v26 = GetOverWorldData_VariableAreaAdresses(v2);
      v27 = (uint *)LoadPokedexDataAdress(v26);
      v28 = Function_2027474(v27);
      Function_2240c9c(v34, &v49, (uint *)&v50);
      Function_2240cc8(v2, (int)v34, &v47, (int *)&v48);
      Function_2240d00(v2, v28, &v51, (int)&v52);
      Function_22477b8(v34, v28, &v53, &v54);
      if ( v32 )
      {
        v30 = LoadFlagAdress(*(uint *)(v2 + 12));
        (*v3)[8] = Function_206b034(v30);
        LoadNPCTrainerData(*v3, *(uint *)(v2 + 12), 0xBu, v31);
        v29 = Function_224174c(v2, v36, *v3, &v47, &v40);
      }
      else
      {
        Function_2242354(v2, v35, v28, &v47);
        v29 = Function_2241674(v2, v36, *v3, v34, &v47, &v40, &v43);
      }
      if ( !v29 )
        v33 = 0;
      if ( !Function_201833c() )
        ErrorHandler();
      if ( !Function_201833c() )
        ErrorHandler();
      if ( v33 )
        *(ushort *)(v2 + 120) = 0;
      else
        Function_20520a4((int *)*v3);
      result = v33;
    }
  }
  else
  {
    v17 = Function_202d93c(v39, 6u);
    if ( Function_2242388(v17, &v40) )
    {
      result = 0;
    }
    else
    {
      v20 = (uint *)AllocMainGameData(0xBu, 256, v18, v19);
      *v3 = v20;
      Function_2052314(v20, v2);
      Function_224239c(v40, v39, *v3);
      Function_2069434(*(uint *)(v2 + 148));
      result = 1;
    }
  }
  return result;
}

//----- (02241674) --------------------------------------------------------
int __fastcall Function_2241674(int a1, int a2, int a3, uint *a4, uint *a5, int a6, uint *a7)
{
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v17;
  int v18;
  int v19;

  v7 = a1;
  v8 = a3;
  v17 = a2;
  if ( a7[3] )
  {
    if ( *a7 == 1 )
    {
      a5[8] = a4[31];
      a5[10] = a4[32];
      a5[20] = a4[33];
      a5[22] = a4[34];
    }
    Function_206978c(*(uint *)(a1 + 148), &v19, &v18);
    if ( a7[1] == 1 )
    {
      v9 = GetOverWorldData_VariableAreaAdresses(v7);
      v10 = LoadTrainerDataAdress(v9);
      v11 = GetTrainerID(v10);
      v12 = Function_2241f2c(v19, v18, 1, a7[2], v11, a6, v17, v8);
    }
    else
    {
      v12 = Function_2241f7c(v7, v17, a6, a5, 1, v8, v19, v18);
    }
    v13 = v12;
    if ( v12 )
    {
      v14 = GetSpritePositionX(*(uint *)(v7 + 60));
      v15 = GetSpritePositionY(*(uint *)(v7 + 60));
      Function_2069474(v7, v14, v15, *(uint *)(v7 + 148));
    }
  }
  else
  {
    v13 = Function_2241dc4(a2, 255, a6, a5, 0, 1, a3);
    if ( v13 )
      Function_2069434(*(uint *)(v7 + 148));
  }
  return v13;
}

//----- (0224174C) --------------------------------------------------------
int __fastcall Function_224174c(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int result;

  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( Function_2241dc4(a2, 255, a5, a4, 0, 1, a3) )
    result = Function_2241dc4(v5, 255, a5, v7, 0, 3, v6);
  else
    result = 0;
  return result;
}

//----- (02241790) --------------------------------------------------------
int __fastcall Function_2241790(int a1, int a2, int a3, int a4, int a5)
{
  return Function_2241dc4(a2, 255, a5, a4, 1, 1, a3);
}

//----- (022417AC) --------------------------------------------------------
int __fastcall Function_22417ac(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return Function_2241dc4(a2, a6, a5, a4, 2, 1, a3);
}

//----- (022417C8) --------------------------------------------------------
BOOL __fastcall Function_22417c8_Encounter(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  uint v6;
  uint v7;
  int v9;
  BOOL v10;
  int v11;
  uint v12;
  uint v13;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( !Function_22418b4() )
  {
    ++*(ushort *)(v4 + 120);
    v6 = PRNG();
    v7 = (ushort)s32_div_f(v6, 656);
    if ( v7 >= 0x64 )
      ErrorHandler();
    if ( v7 >= 5 )
      return 0;
  }
  v9 = 40;
  if ( Function_205dad4(v5) )
  {
    v9 = 70;
  }
  else if ( Function_205eb74(*(uint *)(v4 + 60)) == 1 )
  {
    v9 = 70;
  }
  v10 = Function_2055c40(v4);
  v11 = Function_2246b74(v9, v10) & 0xFF;
  if ( (uint)v11 > 0x64 )
    v11 = 100;
  v12 = PRNG();
  v13 = (ushort)s32_div_f(v12, 656);
  if ( v13 >= 0x64 )
    ErrorHandler();
  return (int)v13 < v11 && Function_22418dc(v4, v3);
}

//----- (02241874) --------------------------------------------------------
int __fastcall Function_2241874(int a1, int a2, uchar *a3)
{
  int v3;
  int v4;
  uchar *v5;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( !Function_205de6c(a2) )
    return 0;
  if ( Function_205db58(v3) )
  {
    *v5 = 1;
    result = (uchar)Function_2242158(v4);
  }
  else
  {
    *v5 = 0;
    result = (uchar)Function_224214c(v4);
  }
  return result;
}

//----- (022418B4) --------------------------------------------------------
BOOL __fastcall Function_22418b4(int a1, int a2)
{
  int v2;
  uint v3;

  v2 = a1;
  v3 = (uint)u32_div_f(a2, 10) >> 8;
  if ( v3 > 8 )
    v3 = 8;
  return *(ushort *)(v2 + 120) >= 8 - v3;
}

//----- (022418DC) --------------------------------------------------------
BOOL __fastcall Function_22418dc(int a1, uint a2)
{
  uint v2;
  uint v3;
  uint v4;

  v2 = a2;
  v3 = PRNG();
  v4 = (ushort)s32_div_f(v3, 656);
  if ( v4 >= 0x64 )
    ErrorHandler();
  return v4 < v2;
}

//----- (02241904) --------------------------------------------------------
int Function_2241904()
{
  uint v0;
  ushort v1;
  uchar v2;

  v0 = PRNG();
  v1 = s32_div_f(v0, 656);
  v2 = v1;
  if ( v1 >= 0x64u )
    ErrorHandler();
  if ( v2 < 0x14u )
    return 0;
  if ( v2 >= 0x14u && v2 < 0x28u )
    return 1;
  if ( v2 >= 0x28u && v2 < 0x32u )
    return 2;
  if ( v2 >= 0x32u && v2 < 0x3Cu )
    return 3;
  if ( v2 >= 0x3Cu && v2 < 0x46u )
    return 4;
  if ( v2 >= 0x46u && v2 < 0x50u )
    return 5;
  if ( v2 >= 0x50u && v2 < 0x55u )
    return 6;
  if ( v2 >= 0x55u && v2 < 0x5Au )
    return 7;
  if ( v2 >= 0x5Au && v2 < 0x5Eu )
    return 8;
  if ( v2 >= 0x5Eu && v2 < 0x62u )
    return 9;
  if ( v2 == 98 )
    return 10;
  return 11;
}

//----- (022419A0) --------------------------------------------------------
int Function_22419a0()
{
  uint v0;
  ushort v1;
  uchar v2;

  v0 = PRNG();
  v1 = s32_div_f(v0, 656);
  v2 = v1;
  if ( v1 >= 0x64u )
    ErrorHandler();
  if ( v2 < 0x3Cu )
    return 0;
  if ( v2 >= 0x3Cu && v2 < 0x5Au )
    return 1;
  if ( v2 >= 0x5Au && v2 < 0x5Fu )
    return 2;
  if ( v2 < 0x5Fu || v2 >= 0x63u )
    return 4;
  return 3;
}

//----- (022419EC) --------------------------------------------------------
int __fastcall Function_22419ec(int a1)
{
  int v1;
  int v2;
  uint v3;
  ushort v4;
  uchar v5;

  v1 = a1;
  v2 = 0;
  v3 = PRNG();
  v4 = s32_div_f(v3, 656);
  v5 = v4;
  if ( v4 >= 0x64u )
    ErrorHandler();
  if ( v1 )
  {
    if ( v1 == 1 )
    {
      if ( v5 >= 0x28u )
      {
        if ( v5 >= 0x50u )
        {
          if ( v5 >= 0x5Fu )
          {
            if ( v5 >= 0x63u )
              v2 = 4;
            else
              v2 = 3;
          }
          else
          {
            v2 = 2;
          }
        }
        else
        {
          v2 = 1;
        }
      }
      else
      {
        v2 = 0;
      }
    }
    else if ( v1 == 2 )
    {
      if ( v5 >= 0x28u )
      {
        if ( v5 >= 0x50u )
        {
          if ( v5 >= 0x5Fu )
          {
            if ( v5 >= 0x63u )
              v2 = 4;
            else
              v2 = 3;
          }
          else
          {
            v2 = 2;
          }
        }
        else
        {
          v2 = 1;
        }
      }
      else
      {
        v2 = 0;
      }
    }
    else
    {
      ErrorHandler();
    }
  }
  else if ( v5 >= 0x3Cu )
  {
    if ( v5 >= 0x5Au )
    {
      if ( v5 >= 0x5Fu )
      {
        if ( v5 >= 0x63u )
          v2 = 4;
        else
          v2 = 3;
      }
      else
      {
        v2 = 2;
      }
    }
    else
    {
      v2 = 1;
    }
  }
  else
  {
    v2 = 0;
  }
  return v2;
}

//----- (02241A90) --------------------------------------------------------
uint __fastcall Function_2241a90(int *a1, uchar *a2)
{
  uchar *v2;
  int v3;
  uint result;

  v2 = a2;
  v3 = (ushort)GetPkmnData(a1, 6u, 0);
  if ( v3 == 224 || (result = 320, v3 == 320) )
  {
    result = s32_div_f(2 * (uchar)*v2, 3);
    *v2 = result;
  }
  return result;
}

//----- (02241ABC) --------------------------------------------------------
int __fastcall Function_2241abc(int a1, uchar *a2)
{
  uchar *v2;
  int v3;
  int result;

  v2 = a2;
  v3 = LoadVariableAreaAdress_19(*(uint *)(a1 + 12));
  result = Function_202da04(v3);
  if ( result == 1 )
  {
    result = (int)(uchar)*v2 >> 1;
    *v2 = result;
  }
  else if ( result == 2 )
  {
    result = (uchar)*v2 + ((uint)(uchar)*v2 >> 1);
    *v2 = result;
  }
  return result;
}

//----- (02241AE4) --------------------------------------------------------
int __fastcall Function_2241ae4(int *a1, int a2)
{
  int *v2;
  uint v3;
  int v4;
  uchar v5;
  int result;
  uint v7;
  uint v8;

  v2 = a1;
  if ( *(uchar *)(a2 + 13) || *(uchar *)(a2 + 14) != 28 )
    goto LABEL_12;
  v3 = 2 * PRNG() >> 16;
  if ( v3 >= 2 )
    ErrorHandler();
  if ( v3 )
  {
LABEL_12:
    v7 = PRNG();
    v8 = (ushort)s32_div_f(v7, 2622);
    if ( v8 >= 0x19 )
      ErrorHandler();
    result = (uchar)v8;
  }
  else
  {
    v4 = GetPkmnData(v2, 0, 0);
    u32_div_f(v4, 25);
    result = v5;
  }
  return result;
}

//----- (02241B40) --------------------------------------------------------
int __fastcall Function_2241b40(int a1, int a2)
{
  int v2;
  uint v3;
  uint v4;
  int v5;
  uint v6;
  int v7;
  uint v8;
  uchar v9;
  int v10;
  int v11;
  uint v12;
  int result;

  v2 = a2;
  v3 = *(ushort *)(a1 + 6);
  v4 = *(ushort *)(a1 + 4);
  if ( v4 < v3 )
  {
    v5 = (uchar)v4;
    v6 = v3 << 24;
  }
  else
  {
    v5 = (uchar)v3;
    v6 = v4 << 24;
  }
  v7 = v6 >> 24;
  v8 = PRNG();
  s32_div_f(v8, (v7 - v5 + 1) & 0xFF);
  v10 = v9;
  if ( *(uchar *)(v2 + 13) )
    return (v5 + v9) & 0xFF;
  v11 = *(uchar *)(v2 + 14);
  if ( v11 != 55 && v11 != 72 && v11 != 46 )
    return (v5 + v9) & 0xFF;
  v12 = 2 * PRNG() >> 16;
  if ( v12 >= 2 )
    ErrorHandler();
  if ( v12 )
    result = v7;
  else
    result = (v5 + v10) & 0xFF;
  return result;
}

//----- (02241BAC) --------------------------------------------------------
uint __fastcall Function_2241bac(int a1, int a2, int a3, int a4, int a5, int *a6, int a7)
{
  int v7;
  int v8;
  int v9;
  uint v10;
  uint v11;
  uint v12;
  uint v13;
  uint v14;
  int v15;
  int v16;
  int v18;
  int v19;
  int v20;
  int *v21;
  int v22;
  uint v23;

  v18 = a1;
  v19 = a2;
  v20 = a3;
  v7 = a4;
  v21 = AllocPkmnData(0xBu);
  ClearCompletePkmnDataStructure(v21);
  v8 = 0;
  if ( !*(uchar *)(a5 + 13) )
  {
    v9 = *(uchar *)(a5 + 14);
    if ( v9 == 56 )
    {
      v10 = GetPkmnBaseData1(v18, 0x12u);
      if ( v10 && v10 != 254 && v10 != 255 )
      {
        v11 = PRNG();
        v12 = (ushort)s32_div_f(v11, 21846);
        if ( v12 >= 3 )
          ErrorHandler();
        if ( v12 )
        {
          v23 = GetPkmnData(a6, 0x6Fu, 0) & 0xFF;
          v8 = 1;
        }
      }
    }
    else if ( v9 == 28 )
    {
      v13 = 2 * PRNG() >> 16;
      if ( v13 >= 2 )
        ErrorHandler();
      if ( !v13 )
      {
        v22 = Function_2075bcc((int)a6);
        v8 = 1;
      }
    }
  }
  v14 = Function_2075e64(v7);
  if ( v8 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v15 = *(uchar *)(a5 + 14);
        if ( v15 == 56 )
          break;
        if ( v15 == 28 )
        {
          if ( PkmnData_DivBy25(v14) == v22 )
            goto LABEL_24;
          v14 = Function_2075e64(v7);
        }
      }
      v16 = Function_2075dac(v18, v14);
      if ( v16 == 2 )
        ErrorHandler();
      if ( v16 != v23 )
        break;
      v14 = Function_2075e64(v7);
    }
  }
LABEL_24:
  InitPkmnData(v21, v18, v19, 32, 1, v14, 1, *(uint *)a5);
  if ( !Function_2242514(v20, a5, v21, a7) )
    ErrorHandler();
  return free((int)v21);
}

//----- (02241CC0) --------------------------------------------------------
uint __fastcall Function_2241cc0(int a1, int a2, int a3, int a4, int *a5, int a6)
{
  int v6;
  int v7;
  int *v8;
  int v9;
  uint v10;
  uint v11;
  uint v12;
  int v13;
  int v14;
  uint result;
  int v16;
  int v17;
  int v18;

  v6 = a1;
  v17 = a2;
  v18 = a3;
  v7 = a4;
  v8 = AllocPkmnData(0xBu);
  ClearCompletePkmnDataStructure(v8);
  v9 = 1;
  v10 = GetPkmnBaseData1(v6, 0x12u);
  if ( !v10 || v10 == 254 || v10 == 255 )
    v9 = 0;
  if ( !v9 || *(uchar *)(v7 + 13) || *(uchar *)(v7 + 14) != 56 )
    goto LABEL_24;
  v11 = PRNG();
  v12 = (ushort)s32_div_f(v11, 21846);
  if ( v12 >= 3 )
    ErrorHandler();
  if ( v12 )
  {
    v13 = (uchar)GetPkmnData(a5, 0x6Fu, 0);
    if ( v13 == 1 )
    {
      v13 = 0;
    }
    else if ( v13 )
    {
      ErrorHandler();
    }
    else
    {
      v13 = 1;
    }
    v14 = Function_2241ae4(a5, v7);
    Function_2074088(v8, v6, v17, 32, v13, v14, 0);
    SetPkmnData((int)v8, 7, (ushort *)v7);
    if ( !Function_2242514(v18, v7, v8, a6) )
      ErrorHandler();
    result = free((int)v8);
  }
  else
  {
LABEL_24:
    v16 = Function_2241ae4(a5, v7);
    Function_2074044(v8, v6, v17, 32, v16);
    SetPkmnData((int)v8, 7, (ushort *)v7);
    if ( !Function_2242514(v18, v7, v8, a6) )
      ErrorHandler();
    result = free((int)v8);
  }
  return result;
}

//----- (02241DC4) --------------------------------------------------------
int __fastcall Function_2241dc4(int *a1, int a2, int a3, int a4, char a5, int a6, int a7)
{
  int v7;
  int *v8;
  int v9;
  int v10;
  int v12;
  uchar v13;

  v12 = a2;
  v7 = 0;
  v13 = 0;
  v8 = a1;
  v9 = a3;
  v10 = a4;
  if ( a5 )
  {
    if ( a5 == 1 )
    {
      Function_224222c(a1, a3, a4);
      if ( !Function_224222c(v8, v9, v10) )
        v13 = Function_22419a0();
      v7 = Function_2241b40(v10 + 8 * v13, v9);
    }
    else if ( a5 == 2 )
    {
      Function_224222c(a1, a3, a4);
      if ( !Function_224222c(v8, v9, v10) )
        v13 = Function_22419ec(v12);
      v7 = Function_2241b40(v10 + 8 * v13, v9);
    }
    else
    {
      ErrorHandler();
    }
  }
  else
  {
    if ( !Function_224222c(a1, a3, a4) && !Function_224222c(v8, v9, v10) )
      v13 = Function_2241904();
    v13 = Function_22425d4(v10, v9, v13);
    v7 = *(ushort *)(v10 + 8 * v13 + 4) & 0xFF;
  }
  if ( Function_22422d0(v9, v8, v7) )
    return 0;
  if ( Function_2242388(v7, v9) == 1 )
    return 0;
  Function_2241cc0(*(uint *)(v10 + 8 * v13) & 0xFFFF, v7, a6, v9, v8, a7);
  return 1;
}

//----- (02241F2C) --------------------------------------------------------
int __fastcall Function_2241f2c(int a1, uchar a2, int a3, int a4, int a5, int a6, int *a7, int a8)
{
  ushort v8;
  uchar v9;
  int v10;
  int v11;

  v8 = a1;
  v9 = a2;
  v10 = a3;
  v11 = a4;
  if ( !a1 )
    ErrorHandler();
  if ( v11 )
    Function_2241bac(v8, v9, v10, a5, a6, a7, a8);
  else
    Function_2241cc0(v8, v9, v10, a6, a7, a8);
  return 1;
}

//----- (02241F7C) --------------------------------------------------------
int __fastcall Function_2241f7c(int a1, int *a2, int a3, int a4, int a5, int a6, int a7, uchar a8)
{
  int v8;
  int *v9;
  int v10;
  int v11;
  short v12;
  int v13;
  int v14;
  int v16;
  uchar v17;

  v8 = a1;
  v9 = a2;
  v17 = 0;
  v10 = a4;
  v16 = a3;
  if ( !(Function_224222c(a2, a3, a4) & 0xFF) && !(Function_224222c(v9, v16, v10) & 0xFF) )
    v17 = Function_2241904();
  v11 = 8 * v17;
  v12 = *(ushort *)(v10 + v11 + 4);
  v13 = *(uint *)(v10 + v11);
  v14 = (uchar)v12;
  if ( a7 )
  {
    if ( v13 == a7 )
    {
      LOWORD(v13) = a7;
      v14 = a8;
      Function_2069b74(v8);
    }
    else
    {
      Function_2069434(*(uint *)(v8 + 148));
    }
  }
  else
  {
    Function_2069774(*(uint *)(v8 + 148), v13, (uchar)v12);
    Function_2069b74(v8);
  }
  Function_2241cc0((ushort)v13, v14, a5, v16, v9, a6);
  return 1;
}

//----- (02242034) --------------------------------------------------------
uint __fastcall Function_6_2242034(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;
  uint v5;
  uint v6;
  int v7;
  uint v8;
  ushort v10;
  int *v11;
  char v12;
  char v13;
  char v14;

  v2 = a1;
  v3 = a2;
  v10 = ((int (*)(void))dword_21EFC90[213])();
  v4 = (uint *)LoadPokePartyAdress(*(uint *)(v2 + 12));
  v11 = GetAdrOfPkmnInParty(v4, 0);
  Function_2242634(v2, v11, 0, &v12);
  v5 = PRNG();
  v6 = (ushort)s32_div_f(v5, 5958);
  if ( v6 >= 0xB )
    ErrorHandler();
  v7 = (v6 + 5) & 0xFF;
  if ( !v13 && (v14 == 55 || v14 == 72 || v14 == 46) )
  {
    v8 = 2 * PRNG() >> 16;
    if ( v8 >= 2 )
      ErrorHandler();
    if ( v8 )
      v7 = 15;
  }
  ((void (__fastcall *)(int))dword_21EFC90[236])(v2);
  *(uint *)(v3 + 396) |= 2u;
  return Function_2241cc0(v10, v7, 1, (int)&v12, v11, v3);
}

//----- (022420D4) --------------------------------------------------------
uint __fastcall Function_6_22420d4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  uint *v8;
  int *v9;
  char v11;
  int v12;

  v12 = a4;
  v4 = a1;
  v5 = a3;
  v6 = a2;
  v7 = a4;
  v8 = (uint *)LoadPokePartyAdress(*(uint *)(a1 + 12));
  v9 = GetAdrOfPkmnInParty(v8, 0);
  Function_2242634(v4, v9, 0, &v11);
  return Function_2241cc0(v6, v5, 1, (int)&v11, v9, v7);
}

//----- (02242110) --------------------------------------------------------
BOOL __fastcall Function_6_2242110(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = a1;
  v4 = 0;
  if ( Function_205de6c(a2) )
  {
    if ( Function_205db58(v2) )
      v4 = Function_2242158(v3);
    else
      v4 = Function_224214c(v3);
  }
  return v4 != 0;
}

//----- (0224214C) --------------------------------------------------------
int __fastcall Function_224214c(int a1)
{
  return *(uint *)GetMapWildPkmnAdress(a1);
}

//----- (02242158) --------------------------------------------------------
int __fastcall Function_2242158(int a1)
{
  return *(uint *)(GetMapWildPkmnAdress(a1) + 204);
}

//----- (02242164) --------------------------------------------------------
int __fastcall Function_2242164(int a1, int a2)
{
  int v2;
  uint *v3;

  v2 = a2;
  v3 = (uint *)GetMapWildPkmnAdress(a1);
  switch ( v2 )
  {
    case 0:
      return v3[73];
    case 1:
      return v3[84];
    case 2:
      return v3[95];
  }
  ErrorHandler();
  return 0;
}

//----- (0224219C) --------------------------------------------------------
int __fastcall Function_224219c(int a1, uint a2, int a3, uchar *a4)
{
  int v4;
  uint v5;
  int v6;
  int v7;
  uint v8;
  int v9;
  int v10;
  int v11;
  uint v13;
  int v14;
  uint v15;
  uchar *v16;
  char v17;

  v4 = a1;
  v5 = 0;
  v15 = a2;
  v6 = a3;
  v16 = a4;
  v7 = 0;
  do
  {
    *(&v17 + v5) = 0;
    v5 = (v5 + 1) & 0xFF;
  }
  while ( v5 < 0xC );
  v8 = 0;
  if ( a2 )
  {
    do
    {
      v9 = (uchar)GetPkmnBaseData1(*(uint *)(v4 + 8 * v8), 6u);
      v10 = (uchar)GetPkmnBaseData1(*(uint *)(v4 + 8 * v8), 7u);
      if ( v9 == v6 || v10 == v6 )
      {
        v11 = v7;
        v7 = (v7 + 1) & 0xFF;
        *(&v17 + v11) = v8;
      }
      v8 = (v8 + 1) & 0xFF;
    }
    while ( v8 < v15 );
  }
  if ( !v7 || v7 == v15 )
    return 0;
  v13 = PRNG();
  s32_div_f(v13, v7);
  *v16 = *(&v17 + v14);
  return 1;
}

//----- (0224222C) --------------------------------------------------------
int __fastcall Function_224222c(int a1, int a2, int a3, uint a4, uchar a5, uchar a6, uchar *a7)
{
  int v7;
  uint v8;
  uint v9;
  int result;

  v7 = a3;
  v8 = a4;
  if ( *(uchar *)(a2 + 13) || *(uchar *)(a2 + 14) != a6 )
    goto LABEL_10;
  v9 = 2 * PRNG() >> 16;
  if ( v9 >= 2 )
    ErrorHandler();
  if ( v9 )
LABEL_10:
    result = 0;
  else
    result = Function_224219c(v7, v8, a5, a7);
  return result;
}

//----- (0224226C) --------------------------------------------------------
int __fastcall Function_224226c(int a1, int a2, int a3, int a4)
{
  bool v4;
  int v5;

  if ( !*(uchar *)(a3 + 13) )
  {
    v4 = a1 == 0;
    v5 = *(uchar *)(a3 + 14);
    if ( v4 )
    {
      if ( v5 != 71 && v5 != 99 && v5 != 35 )
      {
        switch ( v5 )
        {
          case 8:
            if ( a4 == 10 )
              a2 /= 2;
            break;
          case 81:
            if ( (uint)(a4 - 5) <= 2 )
              a2 /= 2;
            break;
          case 73:
          case 95:
          case 1:
            a2 /= 2;
            break;
        }
      }
      else
      {
        a2 *= 2;
      }
    }
    if ( a2 > 100 )
      LOBYTE(a2) = 100;
  }
  return (uchar)a2;
}

//----- (022422D0) --------------------------------------------------------
int __fastcall Function_22422d0(int a1, int *a2, int a3)
{
  int v3;
  int result;
  int v5;
  uint v6;
  uint v7;

  v3 = a3;
  if ( *(uint *)(a1 + 8) )
    return 0;
  if ( *(uchar *)(a1 + 13) )
    goto LABEL_16;
  v5 = *(uchar *)(a1 + 14);
  if ( v5 != 51 && v5 != 22 )
    goto LABEL_16;
  v6 = (uchar)GetPkmnData(a2, 0xA1u, 0);
  if ( v6 <= 5 )
    return 0;
  if ( v3 > (int)(v6 - 5) )
    goto LABEL_16;
  v7 = 2 * PRNG() >> 16;
  if ( v7 >= 2 )
    ErrorHandler();
  if ( v7 )
LABEL_16:
    result = 0;
  else
    result = 1;
  return result;
}

//----- (02242328) --------------------------------------------------------
int __fastcall Function_2242328(int a1, int a2, int a3, int a4)
{
  int *v4;
  int result;
  int v6;
  ushort *v7;
  int v8;
  int v9;

  v4 = (int *)a3;
  if ( a2 )
  {
    v6 = LoadVariableAreaAdress_6(*(uint *)(a1 + 12));
    v7 = (ushort *)AddVariableAreaAdress_6_98(v6);
    result = Function_2051f24(0xBu, *v7, v8, v9);
  }
  else
  {
    result = AllocMainGameData(0xBu, 0, a3, a4);
  }
  *v4 = result;
  return result;
}

//----- (02242354) --------------------------------------------------------
int __fastcall Function_2242354(int result, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint *v7;
  int v8;

  v4 = result;
  v5 = a3;
  v6 = a4;
  if ( a2 )
  {
    v7 = (uint *)LoadVariableAreaAdress_19(*(uint *)(result + 12));
    v8 = Function_202d814(v7, 1);
    result = Function_2242f74(v8, v5, **(uint **)(v4 + 28), v6 + 48, v6 + 56);
  }
  return result;
}

//----- (02242388) --------------------------------------------------------
BOOL __fastcall Function_2242388(uint a1, int a2)
{
  return *(uint *)(a2 + 4) && *(uchar *)(a2 + 12) > a1;
}

//----- (0224239C) --------------------------------------------------------
uint __fastcall Function_224239c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int *v6;
  ushort v7;
  int v8;
  int v9;
  int v10;
  short v12;
  int v13;
  int v14;
  int varg_r0;
  int varg_r1;
  int varg_r2;
  int varg_r3;

  varg_r0 = a1;
  varg_r1 = a2;
  varg_r2 = a3;
  varg_r3 = a4;
  v14 = a4;
  v4 = a2;
  v5 = a3;
  v6 = AllocPkmnData(4u);
  v7 = Function_202d93c(v4, 4u);
  v8 = (uchar)Function_202d93c(v4, 6u);
  v9 = Function_202d93c(v4, 2u);
  v10 = Function_202d93c(v4, 3u);
  v13 = Function_202d93c(v4, 7u);
  v12 = Function_202d93c(v4, 5u);
  Function_2074158(v6, v7, v8, v9, v10);
  SetPkmnData((int)v6, 7, (ushort *)&varg_r0);
  SetPkmnData((int)v6, 160, (ushort *)&v13);
  SetPkmnData((int)v6, 163, (ushort *)&v12);
  if ( !CopyPkmnDataToParty(*(uint **)(v5 + 8), v6) )
    ErrorHandler();
  return free((int)v6);
}

//----- (02242440) --------------------------------------------------------
int __fastcall Function_2242440(int a1, uint *a2, int a3, int a4)
{
  uint v4;
  int v5;
  uint v6;
  int v7;
  int v8;
  uint v10;
  uint v11;
  uint v12;
  uint v13;
  int v14;
  uint *v15;
  int v16[6];
  int v17;

  v17 = a4;
  v14 = a1;
  v15 = a2;
  v4 = 0;
  v5 = LoadVariableAreaAdress_19(*(uint *)(a1 + 12));
  v6 = 0;
  do
  {
    v7 = Function_202d8c4(v5, v6);
    v8 = Function_206c3c8(v7);
    if ( Function_202d8f8(v5, v6) && v8 == **(uint **)(v14 + 28) )
    {
      v16[v4] = Function_202d924(v5, v6);
      v4 = (v4 + 1) & 0xFF;
    }
    v6 = (v6 + 1) & 0xFF;
  }
  while ( v6 < 6 );
  if ( !v4 )
    return 0;
  v10 = 2 * PRNG() >> 16;
  if ( v10 >= 2 )
    ErrorHandler();
  if ( !v10 )
    return 0;
  if ( v4 <= 1 )
  {
    *v15 = v16[0];
  }
  else
  {
    if ( !v4 )
      ErrorHandler();
    if ( v4 > 1 )
    {
      v12 = PRNG();
      v13 = s32_div_f(0xFFFFu, v4);
      v11 = (ushort)s32_div_f(v12, (v13 + 1) & 0xFFFF);
      if ( v11 >= v4 )
        ErrorHandler();
    }
    else
    {
      v11 = 0;
    }
    *v15 = v16[v11];
  }
  return 1;
}

//----- (02242514) --------------------------------------------------------
int __fastcall Function_2242514(int a1, uchar *a2, int *a3, uint *a4)
{
  uchar *v4;
  int *v5;
  int v6;
  int v7;
  uint v8;
  int v9;
  uint v10;
  int v11;
  int v13;
  uint *v14;
  char v15;

  v4 = a2;
  v13 = a1;
  v5 = a3;
  v14 = a4;
  v6 = !a2[13] && a2[14] == 14;
  Function_2077f0c(v5, *a4, v6, (int)a4);
  v7 = 0;
  v8 = GetPkmnData(v5, 5u, 0);
  switch ( v8 )
  {
    case 0x1A6u:
      v7 = 1;
      v15 = v4[15] != 0;
      break;
    case 0x1A7u:
      v7 = 1;
      v15 = v4[16] != 0;
      break;
    case 0xC9u:
      v7 = 1;
      v9 = dword_2248FF0[2 * (uchar)v4[17]] & 0xFF;
      v10 = PRNG();
      s32_div_f(v10, v9);
      v15 = *((uchar *)*(&off_2248FF4 + 2 * (uchar)v4[17]) + v11);
      break;
  }
  if ( v7 )
    SetPkmnData((int)v5, 112, (ushort *)&v15);
  return CopyPkmnDataToParty((uint *)v14[v13 + 1], v5);
}

//----- (022425D4) --------------------------------------------------------
uint __fastcall Function_22425d4(int a1, int a2, uint a3)
{
  int v3;
  uint v4;
  int v5;
  uint v6;
  uint v8;

  v3 = a1;
  v4 = a3;
  if ( *(uchar *)(a2 + 13) )
    return a3;
  v5 = *(uchar *)(a2 + 14);
  if ( v5 != 72 && v5 != 55 && v5 != 46 )
    return a3;
  v6 = 2 * PRNG() >> 16;
  if ( v6 >= 2 )
    ErrorHandler();
  if ( !v6 )
    return v4;
  v8 = 0;
  do
  {
    if ( *(uint *)(v3 + 8 * v8) == *(uint *)(v3 + 8 * v4)
      && *(ushort *)(v3 + 8 * v8 + 4) > (uint)*(ushort *)(v3 + 8 * v4 + 4) )
    {
      v4 = v8;
    }
    v8 = (v8 + 1) & 0xFF;
  }
  while ( v8 < 0xC );
  return v4;
}

//----- (02242634) --------------------------------------------------------
int __fastcall Function_2242634(int a1, int *a2, uint *a3, int a4)
{
  int *v4;
  int v5;
  uint *v6;
  int v7;
  char v8;
  int v9;
  int v10;
  int result;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  if ( GetPkmnData(a2, 0x4Cu, 0) )
  {
    *(uchar *)(v7 + 13) = 1;
    v8 = 123;
  }
  else
  {
    *(uchar *)(v7 + 13) = 0;
    v8 = GetPkmnData(v4, 0xAu, 0);
  }
  *(uchar *)(v7 + 14) = v8;
  *(uchar *)(v7 + 12) = 0;
  *(uint *)(v7 + 4) = 0;
  *(uint *)(v7 + 8) = 0;
  if ( v6 )
  {
    *(uchar *)(v7 + 15) = v6[35];
    *(uchar *)(v7 + 16) = v6[36];
    v9 = v6[40];
    if ( v9 )
    {
      if ( v9 > 8 )
        ErrorHandler();
      *(uchar *)(v7 + 17) = *((uchar *)v6 + 160) - 1;
    }
    else
    {
      *(uchar *)(v7 + 17) = 0;
    }
  }
  v10 = LoadTrainerDataAdress(*(uint *)(v5 + 12));
  result = GetTrainerID(v10);
  *(uint *)v7 = result;
  return result;
}

//----- (022426AC) --------------------------------------------------------
int __fastcall Function_6_22426ac(uint a1)
{
  return malloc2(a1, 368);
}

//----- (022426B8) --------------------------------------------------------
uint __fastcall Function_6_22426b8(int a1)
{
  return free(a1);
}

//----- (022426C0) --------------------------------------------------------
int __fastcall Function_6_22426c0(int ***a1, int a2)
{
  int ***v2;
  ushort v3;
  int v4;
  uint v5;
  uchar v6;
  int v7;
  int v8;
  int v9;
  char *v10;
  int *v11;
  int ***v12;
  int **v13;
  int v14;
  int *v16;

  v2 = a1;
  v3 = a2;
  a1[90] = 0;
  v4 = (uchar)GetPkmnBaseData1(a2, 0x12u);
  if ( v4 )
  {
    if ( v4 == 254 )
    {
      v6 = 1;
    }
    else if ( v4 == 255 )
    {
      v6 = 2;
    }
    else
    {
      v5 = PRNG();
      v6 = (v5 >> 31) + __ROR4__((v5 << 31) - (v5 >> 31), 31) == 0;
    }
  }
  else
  {
    v6 = 0;
  }
  Function_2075fb4((int)(v2 + 10), v3, v6, 2u, 0, 0, 0);
  v2[14] = (int **)Function_20095c4(1, (int)(v2 + 15), 4, v7);
  v10 = &byte_2249030;
  v16 = LoadFromNARC_8(97, 4u, v8, v9);
  v11 = 0;
  v12 = v2;
  do
  {
    v13 = Function_2009714((uchar)*v10, v11, 4u);
    v11 = (int *)((char *)v11 + 1);
    ++v10;
    *v12 = v13;
    ++v12;
  }
  while ( (int)v11 < 4 );
  v2[4] = (int **)Function_2009a4c((int)*v2, (int)v16, 5u, 0, 0, 1, 4u);
  v2[5] = (int **)Function_2009b04((int)v2[1], (int)v16, 3u, 0, 1, 1, 1, 4u);
  v2[6] = (int **)Function_2009bc4((int)v2[2], (int)v16, 6u, 0, 2, 2u, 4u);
  v2[7] = (int **)Function_2009bc4((int)v2[3], (int)v16, 0xCu, 0, 3, 3u, 4u);
  v2[8] = (int **)Function_201363c(*((ushort *)v2 + 20), *((ushort *)v2 + 21), 4u);
  v2[9] = (int **)Function_2013660(*((ushort *)v2 + 20), *((ushort *)v2 + 22), 4u, v14);
  Function_2242880(*v2, v2[1], v2[8], v2[9]);
  Call_FS_CloseFile(v16);
  return Function_22428f8(v2);
}

//----- (022427F4) --------------------------------------------------------
uint *__fastcall Function_6_22427f4(int a1)
{
  *(uint *)(a1 + 360) = 1;
  *(uint *)(a1 + 364) = 0;
  return AddTaskToTaskList1((int)Function_2242860, a1, 0);
}

//----- (02242814) --------------------------------------------------------
int __fastcall Function_6_2242814(int result)
{
  *(uint *)(result + 360) = 0;
  return result;
}

//----- (02242820) --------------------------------------------------------
int __fastcall Function_6_2242820(int a1)
{
  return *(uint *)(a1 + 364);
}

//----- (02242828) --------------------------------------------------------
uint __fastcall Function_6_2242828(int a1)
{
  int v1;
  uint v2;

  v1 = a1;
  Function_200a4e4(*(int **)(a1 + 16));
  Function_200a6dc(*(int **)(v1 + 20));
  v2 = 0;
  do
  {
    Function_2009754(*(int **)(v1 + 4 * v2));
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 < 4 );
  Function_2021964(*(int **)(v1 + 56));
  free(*(uint *)(v1 + 32));
  return free(*(uint *)(v1 + 36));
}

//----- (02242860) --------------------------------------------------------
int __fastcall Function_2242860(int *a1, int *a2)
{
  if ( a2[90] )
    return Function_20219f8(a2[14]);
  a2[91] = 1;
  return Call_RemoveTaskFromTaskList(a1);
}

//----- (02242880) --------------------------------------------------------
uint __fastcall Function_2242880(int a1, int a2, int *a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int *v7;
  int *v8;
  int v9;
  uchar *v10;
  int v11;
  int v12;

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = (int *)Function_2009dc8(a1, 0);
  v8 = (int *)Function_2009dc8(v4, 1);
  Function_200a3dc(v7);
  Function_200a640(v8);
  v9 = Function_200a534(v7);
  v10 = Function_200a72c(v8, v9);
  v11 = NNS_G2dGetImageLocation(v9, 1);
  v12 = NNS_G2dGetImagePaletteLocation((int)v10, 1);
  DC_FlushRange((int)v5, 3200);
  GX_LoadOBJ(v5, v11, 0xC80u);
  DC_FlushRange(v6, 32);
  return GX_LoadOBJPltt(v6, v12, 0x20u);
}

//----- (022428F8) --------------------------------------------------------
int __fastcall Function_22428f8(int *a1)
{
  int *v1;
  int v3;
  char *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  short v11;
  int v12;
  int v13;
  int v14;
  char v15;

  v1 = a1;
  Function_20093b4((int)&v15, 0, 1, 2, 3, -1, -1, 0, 0, *a1, a1[1], a1[2], a1[3], 0, 0);
  v3 = v1[14];
  v4 = &v15;
  v7 = 0;
  v8 = 4096;
  v9 = 4096;
  v10 = 4096;
  v11 = 0;
  v13 = 1;
  v14 = 4;
  v5 = 0x80000;
  v6 = 393216;
  v12 = 0;
  v1[89] = Function_2021aa0((uint **)&v3);
  Function_2021cc8(v1[89], 0);
  return Function_2021d6c(v1[89], 0);
}

//----- (02242984) --------------------------------------------------------
int __fastcall Function_6_2242984(int a1, int a2, int a3, int a4)
{
  int v4;
  uint *v5;
  uint v6;
  int v7;
  int v8;
  int v9;
  uint *v10;
  int v11;
  uint *v12;
  int v13;
  uint v14;
  uint v15;
  char v17[8];
  char v18;
  char v19;
  char v20;
  char v21;
  char v22;
  char v23;
  int v24;

  v24 = a4;
  v4 = a1;
  v5 = (uint *)GetMapWildPkmnAdress(a1);
  v6 = 0;
  do
  {
    v7 = v5[2 * v6 + 2];
    v8 = 4 * v6;
    v6 = (v6 + 1) & 0xFF;
    *(uint *)&v17[v8] = v7;
  }
  while ( v6 < 0xC );
  v9 = GetOverWorldData_VariableAreaAdresses(v4);
  v10 = (uint *)LoadPokedexDataAdress(v9);
  v11 = Function_2027474(v10);
  v12 = (uint *)LoadVariableAreaAdress_19(*(uint *)(v4 + 12));
  v13 = Function_202d814(v12, 1);
  Function_2242f74(v13, v11, **(uint **)(v4 + 28), &v20, &v21);
  Function_2240c9c(v5, &v18, (uint *)&v19);
  Function_22477b8(v5, v11, &v22, &v23);
  v14 = PRNG();
  v15 = (ushort)s32_div_f(v14, 5462);
  if ( v15 >= 0xC )
    ErrorHandler();
  return *(uint *)&v17[4 * v15];
}

//----- (02242A10) --------------------------------------------------------
int __fastcall Function_6_2242a10(uint a1, int a2)
{
  int v2;
  int v3;
  uint v4;
  uint v5;
  uint v6;
  int v7;
  int v8;
  int v10;

  v10 = a2;
  v2 = malloc2(a1, 52);
  *(uint *)(v2 + 44) = v10;
  v3 = LoadFromNARC_4(106, 11, 4u);
  v4 = 0;
  do
  {
    v5 = PRNG();
    v6 = (ushort)s32_div_f(v5, 1821);
    if ( v6 >= 0x24 )
      ErrorHandler();
    v7 = 4 * v6 & 0x3FF;
    v8 = 4 * v4;
    *(ushort *)(v2 + v8) = *(ushort *)(v3 + v7);
    *(ushort *)(v2 + v8 + 2) = *(ushort *)(v3 + v7 + 2);
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 < 5 );
  *(ushort *)(v2 + 20) = GetSpritePositionX(*(uint *)(v10 + 60));
  *(ushort *)(v2 + 22) = GetSpritePositionY(*(uint *)(v10 + 60));
  *(uint *)(v2 + 48) = **(uint **)(v10 + 28);
  free(v3);
  return v2;
}

//----- (02242A8C) --------------------------------------------------------
uint __fastcall Function_6_2242a8c(int a1)
{
  return free(a1);
}

//----- (02242A94) --------------------------------------------------------
int __fastcall Function_6_2242a94(int a1, ushort *a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  int result;

  v4 = a1;
  v5 = a2;
  if ( a1 )
  {
    if ( a1 == 5 )
      v6 = *((uint *)a2 + 12);
    else
      v6 = Function_2039e30(
             *(uchar **)(*((uint *)a2 + 11) + 44),
             (uint)a2[2 * a1] >> 5,
             (uint)a2[2 * a1 + 1] >> 5);
  }
  else
  {
    v6 = Function_2039f10(0xF0u, (uint)*a2 << 11 >> 16, (uint)a2[1] << 11 >> 16, a4);
  }
  v7 = HIWORD(v5[v4]);
  v8 = LOWORD(v5[v4]);
  v5[6] = v6;
  v5[7] = -1;
  v5[8] = v8;
  v5[9] = v7;
  result = 0;
  v5[10] = 0;
  return result;
}

//----- (02242AEC) --------------------------------------------------------
int __fastcall Function_6_2242aec(int a1)
{
  return a1 + 24;
}

//----- (02242AF0) --------------------------------------------------------
int __fastcall Function_2242af0(int a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  uint *v6;
  int v7;
  int v9;
  int v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = (uint *)a1;
  v5 = GetOverWorldData_VariableAreaAdresses(a1);
  v6 = (uint *)Function_2027860(v5);
  v9 = 4325376;
  v10 = 0x10000;
  v7 = *(ushort *)Function_2027f6c(v6, 6);
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      v11 = 5373952;
    }
    else if ( v7 == 2 )
    {
      v11 = 7077888;
    }
  }
  else
  {
    v11 = 2621440;
  }
  return ((int (__fastcall *)(uint, uint, int, int *, uint, uint, int, int, int, int))dword_21E19CC[0])(
           v4[41],
           v4[12],
           475,
           &v9,
           0,
           v4[20],
           v9,
           v10,
           v11,
           v12);
}

//----- (02242B58) --------------------------------------------------------
uint *__fastcall Function_6_2242b58(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  uint *v6;
  ushort *v7;
  int v8;
  uchar *v9;
  int v10;
  int v11;
  int (*v12)();
  int v14;

  v3 = a1;
  v4 = a2;
  v14 = a3;
  v5 = GetOverWorldData_VariableAreaAdresses(a1);
  v6 = (uint *)Function_2027860(v5);
  v7 = Function_2027f6c(v6, 6);
  v8 = malloc2(4u, 20);
  v9 = (uchar *)v8;
  v10 = 20;
  do
  {
    *v9++ = 0;
    --v10;
  }
  while ( v10 );
  *(uchar *)(v8 + 5) = 0;
  v11 = (ushort)*v7;
  if ( *v7 )
  {
    if ( v11 == 1 )
    {
      if ( v4 )
      {
        *(uchar *)(v8 + 4) = 1;
        *(uint *)(v8 + 12) = 7077888;
        *v7 = 2;
        *(uint *)(v8 + 16) = 100;
      }
      else
      {
        *(uchar *)(v8 + 4) = 0;
        *(uint *)(v8 + 12) = 2621440;
        *v7 = 0;
        *(uint *)(v8 + 16) = 46;
      }
    }
    else if ( v11 == 2 )
    {
      *(uchar *)(v8 + 4) = 0;
      if ( v4 )
      {
        *(uint *)(v8 + 12) = 5373952;
        *v7 = 1;
        *(uint *)(v8 + 16) = 88;
      }
      else
      {
        *(uint *)(v8 + 12) = 2621440;
        *v7 = 0;
        *(uint *)(v8 + 16) = 46;
      }
    }
    else
    {
      ErrorHandler();
    }
  }
  else
  {
    *(uchar *)(v8 + 4) = 1;
    if ( v4 == 1 )
    {
      *(uint *)(v8 + 12) = 5373952;
      *v7 = 1;
      *(uint *)(v8 + 16) = 74;
    }
    else
    {
      *(uint *)(v8 + 12) = 7077888;
      *v7 = 2;
      *(uint *)(v8 + 16) = 100;
    }
  }
  *(uint *)(v8 + 8) = v14;
  if ( v14 == 3 )
    v12 = Function_2242d94;
  else
    v12 = Function_2242e60;
  *(uint *)v8 = v12;
  return Function_2050944(*(uint *)(v3 + 16), (int)Function_2242c5c, v8);
}

//----- (02242C3C) --------------------------------------------------------
int __fastcall Function_6_2242c3c(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;
  int result;

  v2 = a2;
  v3 = GetOverWorldData_VariableAreaAdresses(a1);
  v4 = (uint *)Function_2027860(v3);
  if ( *(ushort *)Function_2027f6c(v4, 6) == v2 )
    result = 5;
  else
    result = 6;
  return result;
}

//----- (02242C5C) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02242D94) --------------------------------------------------------
BOOL __fastcall Function_2242d94(int a1, int a2, uint *a3, int a4)
{
  int v4;
  int v5;
  uint *v6;
  int v7;

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = *(uint *)(a4 + 8);
  if ( *(uchar *)(a2 + 4) )
  {
    *(uint *)(a4 + 8) = v7 + dword_2249074[*(uchar *)(a2 + 6)];
    if ( *(uchar *)(a2 + 6) < 6u
      && (*(uint *)(a4 + 8) - 0x8000) / 0x10000 >= *(uint *)(a2 + 16)
      && (uchar)++*(uchar *)(a2 + 7) >= (uint)*((uchar *)dword_2249034
                                                                + *(uchar *)(a2 + 6)) )
    {
      if ( !*(uchar *)(a2 + 6) )
        Function_2005748(0x6DAu);
      ++*(uchar *)(v4 + 6);
      *(uchar *)(v4 + 7) = 0;
    }
  }
  else
  {
    *(uint *)(a4 + 8) = v7 - dword_2249074[*(uchar *)(a2 + 6)];
    if ( *(uchar *)(a2 + 6) < 6u
      && (*(uint *)(a4 + 8) - 0x8000) / 0x10000 <= *(uint *)(a2 + 16)
      && (uchar)++*(uchar *)(a2 + 7) >= (uint)*((uchar *)dword_2249034
                                                                + *(uchar *)(a2 + 6)) )
    {
      if ( !*(uchar *)(a2 + 6) )
        Function_2005748(0x6DAu);
      ++*(uchar *)(v4 + 6);
      *(uchar *)(v4 + 7) = 0;
    }
  }
  return *(uint *)(v5 + 8) == *v6;
}

//----- (02242E60) --------------------------------------------------------
int __fastcall Function_2242e60(int a1, int a2, uint *a3, int a4)
{
  int v4;
  int v5;
  uint *v6;
  int v7;
  uint *v8;
  int v9;
  char v11;
  int v12;
  int v13;

  v13 = a4;
  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = (uint *)Function_205eb3c(*(uint *)(a1 + 60));
  Function_205eaec(*(uint *)(v4 + 60), &v11);
  v9 = v12 + 0x8000;
  *(uint *)(v7 + 8) = v12 + 0x8000;
  if ( v9 == *v6 )
    return 1;
  if ( *(uchar *)(v5 + 4) )
  {
    if ( IsSpriteMovable(v8) == 1 )
    {
      Function_2065638(v8, dword_224903C[*(uchar *)(v5 + 6)]);
      if ( *(uchar *)(v5 + 6) >= 6u || GetSpritePositionY(*(uint *)(v4 + 60)) >= *(uint *)(v5 + 16) )
      {
        if ( GetSpritePositionY(*(uint *)(v4 + 60)) >= *(uint *)(v5 + 16) && *(uchar *)(v5 + 6) )
        {
          if ( *(uchar *)(v5 + 6) == 6 )
            Function_2005748(0x6DAu);
          --*(uchar *)(v5 + 6);
        }
      }
      else
      {
        if ( !*(uchar *)(v5 + 6) )
          Function_2005748(0x6D9u);
        ++*(uchar *)(v5 + 6);
      }
    }
  }
  else if ( IsSpriteMovable(v8) == 1 )
  {
    Function_2065638(v8, dword_2249058[*(uchar *)(v5 + 6)]);
    if ( *(uchar *)(v5 + 6) >= 6u || GetSpritePositionY(*(uint *)(v4 + 60)) <= *(uint *)(v5 + 16) )
    {
      if ( GetSpritePositionY(*(uint *)(v4 + 60)) <= *(uint *)(v5 + 16) && *(uchar *)(v5 + 6) )
      {
        if ( *(uchar *)(v5 + 6) == 6 )
          Function_2005748(0x6DAu);
        --*(uchar *)(v5 + 6);
      }
    }
    else
    {
      if ( !*(uchar *)(v5 + 6) )
        Function_2005748(0x6D9u);
      ++*(uchar *)(v5 + 6);
    }
  }
  return 0;
}

//----- (02242F74) --------------------------------------------------------
uint __fastcall Function_2242f74(int a1, int a2, int a3, uint *a4, uint *a5)
{
  int v5;
  int v6;
  uint *v7;
  char v8;
  int v9;
  int v10;
  int v11;

  v5 = a1;
  v6 = a2;
  v7 = a4;
  v8 = Function_2242fc0(a3);
  if ( v6 )
    v9 = 9;
  else
    v9 = 10;
  v10 = LoadFromNARC_4(106, v9, 4u);
  v11 = 4 * ((v5 >> 5 * v8) & 0x1F) & 0x3FF;
  *v7 = *(uint *)(v10 + v11);
  *a5 = *(uint *)(v10 + v11);
  return free(v10);
}

//----- (02242FC0) --------------------------------------------------------
int __fastcall Function_2242fc0(char a1)
{
  int v1;

  v1 = 0;
  switch ( a1 + 8 )
  {
    case 0:
      return v1;
    case 1:
      v1 = 1;
      break;
    case 2:
      v1 = 2;
      break;
    case 3:
      v1 = 3;
      break;
    case 4:
      v1 = 4;
      break;
    case 5:
      v1 = 5;
      break;
    default:
      ErrorHandler();
      break;
  }
  return v1;
}

//----- (02243004) --------------------------------------------------------
int __fastcall Function_6_2243004(int a1, char a2)
{
  switch ( a2 )
  {
    case 0:
      dword_2249940[0] = ((int (*)(void))Function_223e6ec[0])();
      return 0;
    case 1:
      if ( !Function_223e708() )
        return 0;
      ((void (__fastcall *)(int))Function_223e700)(dword_2249940[0]);
      return 1;
    case 2:
      dword_2249940[0] = ((int (*)(void))Function_223e814[0])();
      return 0;
    case 3:
      ((void (__fastcall *)(int))Function_223e828)(dword_2249940[0]);
      return 0;
    case 4:
      dword_2249940[0] = ((int (*)(void))Function_223fccc[0])();
      return 0;
    case 5:
      Function_223fce8();
      return 0;
    case 6:
      if ( Function_223fcf4() != 6 )
        return 0;
      ((void (__fastcall *)(int))Function_223fce0)(dword_2249940[0]);
      return 1;
    case 7:
      dword_2249940[0] = ((int (__fastcall *)(int, uint))Function_223ea74[0])(a1, 0);
      break;
    case 8:
      dword_2249940[0] = ((int (__fastcall *)(int, int))Function_223ea74[0])(a1, 1);
      break;
    case 9:
      dword_2249940[0] = ((int (__fastcall *)(int, int))Function_223ea74[0])(a1, 2);
      break;
    default:
      ErrorHandler();
      break;
  }
  return 0;
}

//----- (022430C4) --------------------------------------------------------
int __fastcall Function_22430c4(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = LoadVariableAreaAdress_19(*(uint *)(a1 + 12));
  v2 = Function_202d830(v1);
  v3 = 0;
  v4 = *(ushort *)(v2 + 2);
  v5 = 0;
  do
  {
    if ( v4 )
      ++v3;
    ++v5;
  }
  while ( v5 < 3 );
  return v3;
}

//----- (022430E8) --------------------------------------------------------
int __fastcall Function_22430e8(int a1, uint a2)
{
  uint v2;
  int v3;
  int v4;
  int v5;
  ushort *v7[1];

  v2 = a2;
  v3 = a1;
  if ( a2 >= 3 )
    ErrorHandler();
  v4 = LoadVariableAreaAdress_19(*(uint *)(v3 + 12));
  v5 = Function_202d830(v4);
  Function_22431a0(v5, v7);
  return *v7[v2];
}

//----- (02243114) --------------------------------------------------------
int __fastcall Function_2243114(int a1, uint a2)
{
  uint v2;
  int v3;
  int v4;
  int v5;
  uint v7[1];

  v2 = a2;
  v3 = a1;
  if ( a2 >= 3 )
    ErrorHandler();
  v4 = LoadVariableAreaAdress_19(*(uint *)(v3 + 12));
  v5 = Function_202d830(v4);
  Function_22431a0(v5, v7);
  return *(ushort *)(v7[v2] + 2);
}

//----- (02243140) --------------------------------------------------------
int __fastcall Function_2243140(int a1)
{
  return Function_2069b90(a1);
}

//----- (02243148) --------------------------------------------------------
int __fastcall Function_2243148(int a1, int a2, int a3, int a4)
{
  char v5;
  int v6;
  int v7;

  v7 = a4;
  Function_206978c(*(uint *)(a1 + 148), &v6, &v5);
  return v6;
}

//----- (02243160) --------------------------------------------------------
int __fastcall Function_6_2243160(ushort *a1, int a2, int a3, int a4)
{
  ushort *v4;
  int v5;
  char *v6;
  char *v7;
  short *v8;
  short v9;
  int v10;
  char *v11;
  int result;
  char v13;
  char v14;
  int v15;

  v15 = a4;
  v4 = a1;
  Function_22431a0(a1, &v13);
  v5 = 0;
  v6 = &v13;
  v7 = &v14;
  do
  {
    v8 = *(short **)v6;
    ++v5;
    v9 = **(ushort **)v6;
    v6 += 4;
    *(ushort *)v7 = v9;
    *((ushort *)v7 + 1) = v8[1];
    v7 += 4;
  }
  while ( v5 < 3 );
  v10 = 0;
  v11 = &v14;
  do
  {
    ++v10;
    *v4 = *(ushort *)v11;
    result = *((ushort *)v11 + 1);
    v11 += 4;
    v4[1] = result;
    v4 += 2;
  }
  while ( v10 < 3 );
  return result;
}

//----- (022431A0) --------------------------------------------------------
ushort *__fastcall Function_22431a0(ushort *result, ushort **a2)
{
  uint v2;
  uint v3;
  uint v4;

  v2 = result[3];
  v3 = result[1];
  v4 = result[5];
  if ( v3 >= v2 )
  {
    if ( v3 >= v4 )
    {
      *a2 = result;
      if ( v2 >= v4 )
      {
        a2[1] = result + 2;
        result += 4;
      }
      else
      {
        a2[1] = result + 4;
        result += 2;
      }
      a2[2] = result;
    }
    else
    {
      *a2 = result + 4;
      a2[1] = result;
      result += 2;
      a2[2] = result;
    }
  }
  else if ( v2 >= v4 )
  {
    if ( v3 >= v4 )
    {
      *a2 = result + 2;
      a2[1] = result;
      result += 4;
    }
    else
    {
      *a2 = result + 2;
      a2[1] = result + 4;
    }
    a2[2] = result;
  }
  else
  {
    *a2 = result + 4;
    a2[1] = result + 2;
    a2[2] = result;
  }
  return result;
}

//----- (02243218) --------------------------------------------------------
int __fastcall Function_2243218(int a1)
{
  int v1;

  u32_div_f(a1, 22);
  return dword_2249090[v1];
}

//----- (0224322C) --------------------------------------------------------
int __fastcall Function_6_224322c(int a1, ushort *a2, ushort *a3)
{
  ushort *v3;
  ushort *v4;
  int v5;
  int v6;
  int result;
  char v8;
  int v9;

  v3 = a2;
  v4 = a3;
  u32_div_f(a1, 22);
  v6 = dword_2249090[v5];
  LoadMapWildPkmn((int *)&v8, dword_2249090[v5]);
  result = v9;
  *v4 = v9;
  *v3 = v6;
  return result;
}

//----- (02243258) --------------------------------------------------------
int __fastcall Function_2243258(int a1, int a2, int a3, int a4, int a5, int a6, short a7, short a8, short a9, short a10)
{
  uint *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  long long v20;

  v10 = (uint *)a1;
  v11 = a3;
  v12 = a4;
  *(uchar *)a1 = a3;
  *(uchar *)(a1 + 1) = a4;
  *(uchar *)(a1 + 2) = a5;
  *(uchar *)(a1 + 3) = a6;
  *(uchar *)(a1 + 4) = a7;
  *(uchar *)(a1 + 5) = a8;
  *(uchar *)(a1 + 6) = a9;
  *(uchar *)(a1 + 7) = a10;
  *(uint *)(a1 + 8) = Function_20095c4(a2, a1 + 12, 4, a4);
  Function_200964c((int)(v10 + 3), 0, 0x200000, v13);
  v10[77] = Function_2009714(v11, 0, 4u);
  v10[78] = Function_2009714(v12, (int *)1, 4u);
  v10[79] = Function_2009714(a5, (int *)2, 4u);
  v10[80] = Function_2009714(a6, (int *)3, 4u);
  v10[81] = Function_2245f44(4, 8 * v11);
  v10[82] = Function_2245f44(4, 8 * v12);
  v10[83] = Function_2245f44(4, 8 * a5);
  v10[84] = Function_2245f44(4, 8 * a6);
  v14 = 0;
  if ( v11 > 0 )
  {
    v15 = 0;
    do
    {
      ++v14;
      *(ushort *)(v10[81] + v15) = a7;
      v15 += 8;
    }
    while ( v14 < v11 );
  }
  v16 = 0;
  if ( v12 > 0 )
  {
    v17 = 0;
    do
    {
      ++v16;
      *(ushort *)(v10[82] + v17) = a8;
      v17 += 8;
    }
    while ( v16 < v12 );
  }
  v18 = 0;
  if ( a5 > 0 )
  {
    v19 = 0;
    do
    {
      ++v18;
      *(ushort *)(v10[83] + v19) = a9;
      v19 += 8;
    }
    while ( v18 < a5 );
  }
  v20 = (uint)a6;
  if ( a6 > 0 )
  {
    LODWORD(v20) = 0;
    do
    {
      ++HIDWORD(v20);
      *(ushort *)(v10[84] + v20) = a10;
      LODWORD(v20) = v20 + 8;
    }
    while ( SHIDWORD(v20) < a6 );
  }
  return v20;
}

//----- (0224339C) --------------------------------------------------------
int __fastcall Function_224339c(uchar *a1)
{
  uchar *v1;
  int v2;
  int v3;
  int **v4;
  int v5;
  int v6;
  int **v7;
  int v8;
  int v9;
  int **v10;
  int v11;
  int v12;
  int **v13;

  v1 = a1;
  v2 = 0;
  if ( (int)*a1 > 0 )
  {
    v3 = 0;
    do
    {
      v4 = (int **)(*((uint *)v1 + 81) + v3);
      if ( (char)v1[4] != *(short *)v4 )
        Function_200a4e4(v4[1]);
      ++v2;
      v3 += 8;
    }
    while ( v2 < *v1 );
  }
  v5 = 0;
  if ( (int)v1[1] > 0 )
  {
    v6 = 0;
    do
    {
      v7 = (int **)(*((uint *)v1 + 82) + v6);
      if ( (char)v1[5] != *(short *)v7 )
        Function_200a6dc(v7[1]);
      ++v5;
      v6 += 8;
    }
    while ( v5 < v1[1] );
  }
  v8 = 0;
  if ( (int)v1[2] > 0 )
  {
    v9 = 0;
    do
    {
      v10 = (int **)(*((uint *)v1 + 83) + v9);
      if ( (char)v1[6] != *(short *)v10 )
        Function_2009d4c(v10[1]);
      ++v8;
      v9 += 8;
    }
    while ( v8 < v1[2] );
  }
  v11 = 0;
  if ( (int)v1[3] > 0 )
  {
    v12 = 0;
    do
    {
      v13 = (int **)(*((uint *)v1 + 84) + v12);
      if ( (char)v1[7] != *(short *)v13 )
        Function_2009d4c(v13[1]);
      ++v11;
      v12 += 8;
    }
    while ( v11 < v1[3] );
  }
  Function_2009754(*((int **)v1 + 77));
  Function_2009754(*((int **)v1 + 78));
  Function_2009754(*((int **)v1 + 79));
  Function_2009754(*((int **)v1 + 80));
  free(*((uint *)v1 + 81));
  free(*((uint *)v1 + 82));
  free(*((uint *)v1 + 83));
  free(*((uint *)v1 + 84));
  Function_20219c0(*((uint **)v1 + 2));
  return Function_2021964(*((int **)v1 + 2));
}

//----- (022434B0) --------------------------------------------------------
int *__fastcall Function_22434b0(uchar *a1, int a2, uint a3, int a4)
{
  uchar *v4;
  int v5;
  int v6;
  int v7;
  short *v8;
  int v9;
  int *result;
  uint v11;

  v4 = a1;
  v5 = *a1;
  v11 = a3;
  v6 = a4;
  v7 = 0;
  if ( v5 <= 0 )
    return (int *)ErrorHandler();
  v8 = (short *)*((uint *)a1 + 81);
  while ( (char)a1[4] != *v8 )
  {
    ++v7;
    v8 += 4;
    if ( v7 >= v5 )
      return (int *)ErrorHandler();
  }
  v9 = 8 * v7;
  *(ushort *)(*((uint *)a1 + 81) + 8 * v7) = v6;
  *(ushort *)(*((uint *)a1 + 81) + 8 * v7 + 2) = 0;
  result = Function_2009a4c(*((uint *)a1 + 77), a2, v11, 0, v6, 1, 4u);
  *(uint *)(*((uint *)v4 + 81) + v9 + 4) = result;
  return result;
}

//----- (02243520) --------------------------------------------------------
int __fastcall Function_2243520(uchar *a1, int a2)
{
  int v2;
  int v3;
  short *v4;
  short *v5;

  v2 = *a1;
  v3 = 0;
  if ( v2 <= 0 )
    return ErrorHandler();
  v4 = (short *)*((uint *)a1 + 81);
  v5 = v4;
  while ( a2 != *v5 )
  {
    ++v3;
    v5 += 4;
    if ( v3 >= v2 )
      return ErrorHandler();
  }
  return Function_200a3dc(*(int **)&v4[4 * v3 + 2]);
}

//----- (02243554) --------------------------------------------------------
int __fastcall Function_2243554(uchar *a1, int a2)
{
  int v2;
  int v3;
  short *v4;
  short *v5;

  v2 = *a1;
  v3 = 0;
  if ( v2 <= 0 )
    return ErrorHandler();
  v4 = (short *)*((uint *)a1 + 81);
  v5 = v4;
  while ( a2 != *v5 )
  {
    ++v3;
    v5 += 4;
    if ( v3 >= v2 )
      return ErrorHandler();
  }
  return Function_2009d4c(*(int **)&v4[4 * v3 + 2]);
}

//----- (02243588) --------------------------------------------------------
int *__fastcall Function_2243588(uchar *a1, int a2, uint a3, int a4)
{
  uchar *v4;
  int v5;
  int v6;
  int v7;
  short *v8;
  int v9;
  int *result;
  uint v11;

  v4 = a1;
  v5 = *a1;
  v11 = a3;
  v6 = a4;
  v7 = 0;
  if ( v5 <= 0 )
    return (int *)ErrorHandler();
  v8 = (short *)*((uint *)a1 + 82);
  while ( (char)a1[5] != *v8 )
  {
    ++v7;
    v8 += 4;
    if ( v7 >= v5 )
      return (int *)ErrorHandler();
  }
  v9 = 8 * v7;
  *(ushort *)(*((uint *)a1 + 82) + 8 * v7) = v6;
  *(ushort *)(*((uint *)a1 + 82) + 8 * v7 + 2) = 0;
  result = Function_2009b04(*((uint *)a1 + 78), a2, v11, 0, v6, 1, 1, 4u);
  *(uint *)(*((uint *)v4 + 82) + v9 + 4) = result;
  return result;
}

//----- (022435F8) --------------------------------------------------------
int __fastcall Function_22435f8(int a1, int a2)
{
  int v2;
  int v3;
  short *v4;
  short *v5;

  v2 = *(uchar *)(a1 + 1);
  v3 = 0;
  if ( v2 <= 0 )
    return ErrorHandler();
  v4 = *(short **)(a1 + 328);
  v5 = v4;
  while ( a2 != *v5 )
  {
    ++v3;
    v5 += 4;
    if ( v3 >= v2 )
      return ErrorHandler();
  }
  return Function_200a640(*(int **)&v4[4 * v3 + 2]);
}

//----- (0224362C) --------------------------------------------------------
int __fastcall Function_224362c(int a1, int a2)
{
  int v2;
  int v3;
  short *v4;
  short *v5;

  v2 = *(uchar *)(a1 + 1);
  v3 = 0;
  if ( v2 <= 0 )
    return ErrorHandler();
  v4 = *(short **)(a1 + 328);
  v5 = v4;
  while ( a2 != *v5 )
  {
    ++v3;
    v5 += 4;
    if ( v3 >= v2 )
      return ErrorHandler();
  }
  return Function_2009d4c(*(int **)&v4[4 * v3 + 2]);
}

//----- (02243660) --------------------------------------------------------
int *__fastcall Function_2243660(uchar *a1, int a2, uint a3, int a4)
{
  uchar *v4;
  int v5;
  int v6;
  int v7;
  short *v8;
  int v9;
  int *result;
  uint v11;

  v4 = a1;
  v5 = *a1;
  v11 = a3;
  v6 = a4;
  v7 = 0;
  if ( v5 <= 0 )
    return (int *)ErrorHandler();
  v8 = (short *)*((uint *)a1 + 83);
  while ( (char)a1[6] != *v8 )
  {
    ++v7;
    v8 += 4;
    if ( v7 >= v5 )
      return (int *)ErrorHandler();
  }
  v9 = 8 * v7;
  *(ushort *)(*((uint *)a1 + 83) + 8 * v7) = v6;
  *(ushort *)(*((uint *)a1 + 83) + 8 * v7 + 2) = 0;
  result = Function_2009bc4(*((uint *)a1 + 79), a2, v11, 0, v6, 2u, 4u);
  *(uint *)(*((uint *)v4 + 83) + v9 + 4) = result;
  return result;
}

//----- (022436D0) --------------------------------------------------------
int *__fastcall Function_22436d0(uchar *a1, int a2, uint a3, int a4)
{
  uchar *v4;
  int v5;
  int v6;
  int v7;
  short *v8;
  int v9;
  int *result;
  uint v11;

  v4 = a1;
  v5 = *a1;
  v11 = a3;
  v6 = a4;
  v7 = 0;
  if ( v5 <= 0 )
    return (int *)ErrorHandler();
  v8 = (short *)*((uint *)a1 + 84);
  while ( (char)a1[7] != *v8 )
  {
    ++v7;
    v8 += 4;
    if ( v7 >= v5 )
      return (int *)ErrorHandler();
  }
  v9 = 8 * v7;
  *(ushort *)(*((uint *)a1 + 84) + 8 * v7) = v6;
  *(ushort *)(*((uint *)a1 + 84) + 8 * v7 + 2) = 0;
  result = Function_2009bc4(*((uint *)a1 + 80), a2, v11, 0, v6, 3u, 4u);
  *(uint *)(*((uint *)v4 + 84) + v9 + 4) = result;
  return result;
}

//----- (02243740) --------------------------------------------------------
int __fastcall Function_2243740(int a1, int *a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8;
  int *v9;
  int v10;
  int v11;
  int v13;
  char *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  char v21;

  v8 = a1;
  v9 = a2;
  if ( a6 == *(char *)(a1 + 7) )
    a6 = -1;
  Function_20093b4(
    (int)&v21,
    a3,
    a4,
    a5,
    a6,
    -1,
    -1,
    0,
    a7,
    *(uint *)(a1 + 308),
    *(uint *)(a1 + 312),
    *(uint *)(a1 + 316),
    *(uint *)(a1 + 320),
    0,
    0);
  v13 = *(uint *)(v8 + 8);
  v14 = &v21;
  v10 = v9[1];
  v15 = *v9;
  v16 = v10;
  v17 = v9[2];
  v18 = a8;
  v19 = 1;
  v20 = 4;
  v11 = Function_2021b90(&v13);
  if ( !v11 )
    ErrorHandler();
  return v11;
}

//----- (022437C8) --------------------------------------------------------
int __fastcall Function_22437c8(int a1, uint *a2)
{
  uint *v2;
  uint *v3;
  uint *v4;
  int v5;
  int result;

  v2 = a2;
  Function_2021d28();
  v5 = v3[1];
  v4 = v3 + 2;
  *v2 = *v3;
  v2[1] = v5;
  result = v3[2];
  v2[2] = *v4;
  return result;
}

//----- (022437DC) --------------------------------------------------------
uint *__fastcall Function_22437dc(int a1, int a2, int a3, int a4)
{
  uint *v4;
  short v5;
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

  v16 = a4;
  v10 = 0;
  v11 = 0;
  v13 = 0;
  v14 = 0;
  v12 = 0;
  v7 = 4096;
  v8 = 4096;
  v15 = 0;
  v9 = 0;
  v4 = (uint *)Function_2243740(a1, &v13, 0, 0, 0, 2, 0, 132);
  Function_2021cf8((uint)v4, 2);
  Function_2021c60(v4, &v10);
  Function_2021c70(v4, &v7);
  v5 = Function_201d2a4(0);
  Function_2021c94((int)v4, v5);
  return v4;
}

//----- (02243848) --------------------------------------------------------
int __fastcall Function_2243848(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v7;
  int v8;
  int v9;
  int v10;

  v10 = a4;
  v4 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  if ( a2 == 1 )
    v4 = 1;
  v5 = Function_2243740(a1, &v7, 2, v4, 2, 1, 0, 131);
  Function_2021cac(v5, 0);
  Function_2021d6c(v5, 6u);
  return v5;
}

//----- (02243888) --------------------------------------------------------
int *__fastcall Function_2243888(int a1, int a2, int a3, int a4)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v9 = 0;
  v10 = 0;
  v6 = a1;
  v8 = a3;
  v7 = a4;
  v11 = 0;
  v5 = a2;
  return Function_2071330(a2, dword_224925C, &v9, 0, (int)&v5, 0x82u);
}

//----- (022438BC) --------------------------------------------------------
int __fastcall Function_22438bc(int a1)
{
  return *(uchar *)(Function_2071598(a1) + 2);
}

//----- (022438C8) --------------------------------------------------------
int __fastcall Function_22438c8(int a1, uint *a2)
{
  uint *v2;
  uint *v3;
  uint *v4;
  int v5;
  uint *v6;
  int v7;

  v2 = a2;
  v3 = (uint *)Function_20715bc(a1);
  v4 = v2 + 22;
  v5 = v3[1];
  *v4 = *v3;
  v4[1] = v5;
  v6 = v2 + 24;
  v7 = v3[3];
  *v6 = v3[2];
  v6[1] = v7;
  v2[26] = Function_22437dc(v2[25], v7, (int)(v2 + 26), (int)(v3 + 4));
  return 1;
}

//----- (022438EC) --------------------------------------------------------
int *__fastcall Function_22438ec(int a1)
{
  int *v1;
  int v2;
  int v3;
  int *v4;

  v1 = (int *)a1;
  v2 = Function_2071598(a1);
  v3 = v2;
  v4 = *(int **)(v2 + 108);
  if ( v4 )
    Function_207136c(v4);
  if ( *(uint *)(v3 + 112) )
    ((void (*)(void))dword_21F0E90[27])();
  return Function_207136c(v1);
}

//----- (02243914) --------------------------------------------------------
int __fastcall Function_2243914(int a1, int a2)
{
  return Function_2021bd4(*(uint *)(a2 + 104));
}

//----- (02243920) --------------------------------------------------------
int __fastcall Function_2243920(int a1, uchar *a2)
{
  uchar *v2;
  int v3;
  int result;

  v2 = a2;
  v3 = (int)*(&off_2249110 + *a2);
  do
    result = (*(int (__fastcall **)(uchar *))(v3 + 4 * v2[1]))(v2);
  while ( result == 1 );
  return result;
}

//----- (02243940) --------------------------------------------------------
int __fastcall Function_2243940(int a1)
{
  *(uchar *)(a1 + 2) = 0;
  Function_2021cac(*(uint *)(a1 + 104), 0);
  return 0;
}

//----- (02243950) --------------------------------------------------------
int __fastcall Function_2243950(int a1)
{
  int v1;
  uint *v2;
  int v3;
  uint *v4;
  int v5;
  uint *v6;
  short v7;
  uint *v8;
  short v9;
  int v10;
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

  v21 = 0x80000;
  v22 = 454656;
  v23 = 0;
  v18 = 0x2000;
  v19 = 0x2000;
  v20 = 0;
  v1 = Function_2071598(a1);
  v2 = (uint *)v1;
  *(uchar *)v1 = 1;
  *(uchar *)(v1 + 2) = 0;
  *(uchar *)(v1 + 1) = 0;
  *(uint *)(v1 + 4) = 0;
  v3 = v22;
  v4 = (uint *)(v1 + 8);
  *v4 = v21;
  v4[1] = v3;
  v4[2] = v23;
  *(uint *)(v1 + 20) = 0;
  *(uint *)(v1 + 24) = 0;
  *(uint *)(v1 + 28) = 0;
  *(uint *)(v1 + 56) = 1433600;
  v5 = v19;
  v6 = (uint *)(v1 + 44);
  *v6 = v18;
  v6[1] = v5;
  *(uint *)(v1 + 52) = v20;
  *(uint *)(v1 + 80) = 1024;
  *(uint *)(v1 + 64) = 184320;
  *(uint *)(v1 + 72) = 786432;
  *(uint *)(v1 + 76) = 0x20000;
  v2[5] = Function_201d264(0x2Du) * (v2[18] / 4096);
  v2[6] = Function_201d250((uint)(16 * (v2[16] + (v2[16] >> 11 >> 20))) >> 16) * (v2[18] / 4096);
  v21 = v2[2] + v2[5];
  v22 = v2[3] + v2[6];
  Function_2021c50((uint *)v2[26], &v21);
  Function_2021c70((uint *)v2[26], &v18);
  v7 = Function_201d2a4((uint)(16 * (v2[14] + (v2[14] >> 11 >> 20))) >> 16);
  Function_2021c94(v2[26], v7);
  Function_2021f58(v2[26], 132);
  Function_2021cac(v2[26], 1);
  v2[27] = Function_2245b4c(v2[22], v2[24]);
  v2[28] = ((int (__fastcall *)(uint, int))dword_21F0E90[8])(v2[23], 4);
  ((void (*)(void))dword_21F0E90[32])();
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v12 = 0x2000;
  v13 = 0x2000;
  v14 = 0;
  v8 = (uint *)v2[24];
  Function_2021cf8((uint)v8, 2);
  Function_2021c60(v8, &v15);
  Function_2021c70(v8, &v12);
  v9 = Function_201d2a4(0);
  Function_2021c94((int)v8, v9);
  v10 = Function_2021d6c((int)v8, 2u);
  return Function_2243f2c(v10);
}

//----- (02243AB8) --------------------------------------------------------
int __fastcall Function_2243ab8(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  uint *v5;
  uint *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v13;
  int v14;
  int v15;

  v15 = a4;
  v4 = a1;
  v5 = (uint *)a1[26];
  v6 = (uint *)a1[24];
  v7 = a1[18] - a1[19];
  v4[18] = v7;
  if ( v7 < 0 )
    v4[18] = 0;
  v8 = v4[19];
  if ( v8 > 2048 )
    v4[19] = v8 - 7168;
  if ( v4[19] < 4096 )
    v4[19] = 4096;
  v4[5] = Function_201d264(0x2Du) * (v4[18] / 4096);
  v4[6] = Function_201d250((uint)(16 * (v4[16] + (v4[16] >> 11 >> 20))) >> 16) * (v4[18] / 4096);
  v9 = v4[16];
  if ( v9 / 4096 < 90 )
    v4[16] = v9 + 0x4000;
  v10 = v4[11] - v4[20];
  v4[11] = v10;
  if ( v10 < 4096 )
    v4[11] = 4096;
  v11 = v4[12] - v4[20];
  v4[12] = v11;
  if ( v11 < 4096 )
    v4[12] = 4096;
  Function_2021c70(v5, v4 + 11);
  Function_2021c70(v6, v4 + 11);
  v13 = v4[2] + v4[5];
  v14 = v4[3] + v4[6];
  Function_2021c50(v5, &v13);
  v14 -= 73728;
  Function_2021c50(v6, &v13);
  if ( v4[18] )
  {
    ++v4[1];
  }
  else
  {
    v4[1] = 0;
    ++*((uchar *)v4 + 1);
  }
  return 0;
}

//----- (02243BB8) --------------------------------------------------------
int __fastcall Function_2243bb8(int a1)
{
  int v1;

  v1 = a1;
  Function_2245bc8(*(uint *)(a1 + 108));
  ((void (__fastcall *)(uint, int, uint, int))dword_21F0E90[32])(*(uint *)(v1 + 112), 2, 0, 12);
  *(uint *)(v1 + 80) = 1024;
  *(uint *)(v1 + 64) = 0x80000;
  *(uint *)(v1 + 72) = 0;
  *(uint *)(v1 + 76) = 6144;
  ++*(uchar *)(v1 + 1);
  return 1;
}

//----- (02243BEC) --------------------------------------------------------
int __fastcall Function_2243bec(uint *a1)
{
  uint *v1;
  uint *v2;
  int v3;
  int v4;
  int v5;
  short v6;
  int v7;
  int v8;
  int v10;
  int v11;

  v1 = a1;
  v2 = (uint *)a1[26];
  a1[18] += a1[19];
  v3 = a1[19] + 4096;
  a1[19] = v3;
  if ( v3 > 0x10000 )
    a1[19] = 0x10000;
  a1[5] = Function_201d264((uint)(16 * (a1[16] + (a1[16] >> 11 >> 20))) >> 16) * (a1[18] / 4096);
  v1[6] = Function_201d250(0x80u) * (v1[18] / 4096);
  v4 = v1[16];
  if ( v4 < 655360 )
    v1[16] = v4 + 4096;
  v5 = v1[14] + 0x2000;
  v1[14] = v5;
  v6 = Function_201d2a4(16 * (v5 + ((uint)(v5 >> 11) >> 20)) >> 16);
  Function_2021c94((int)v2, v6);
  v7 = v1[11] + v1[20];
  v1[11] = v7;
  if ( v7 > 4096 )
    v1[11] = 4096;
  v8 = v1[12] + v1[20];
  v1[12] = v8;
  if ( v8 > 4096 )
    v1[12] = 4096;
  Function_2021c70(v2, v1 + 11);
  v10 = v1[2] + v1[5];
  v11 = v1[3] - v1[6];
  Function_2021c50(v2, &v10);
  if ( v11 / 4096 <= -16 )
    ++*((uchar *)v1 + 1);
  return 0;
}

//----- (02243CD8) --------------------------------------------------------
int __fastcall Function_2243cd8(int a1)
{
  int v1;

  v1 = a1;
  Function_2021cac(*(uint *)(a1 + 104), 0);
  Function_2021d6c(*(uint *)(v1 + 96), 1u);
  *(uint *)(v1 + 4) = 0;
  ++*(uchar *)(v1 + 1);
  return 1;
}

//----- (02243CFC) --------------------------------------------------------
int __fastcall Function_2243cfc(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v7;
  uint *v8;
  int v9;
  uint *v10;
  short v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;

  v18 = a4;
  v4 = a1;
  v5 = *(uint *)(a1 + 4) + 1;
  *(uint *)(v4 + 4) = v5;
  if ( v5 < 20 )
    return 0;
  v15 = 557056;
  v16 = 323584;
  v17 = 0;
  v12 = 4096;
  v13 = 4096;
  v14 = 0;
  *(uint *)(v4 + 4) = 0;
  v7 = v16;
  v8 = (uint *)(v4 + 8);
  *v8 = v15;
  v8[1] = v7;
  *(uint *)(v4 + 16) = v17;
  *(uint *)(v4 + 20) = 0;
  *(uint *)(v4 + 24) = 0;
  *(uint *)(v4 + 28) = 0;
  *(uint *)(v4 + 56) = 0;
  v9 = v13;
  v10 = (uint *)(v4 + 44);
  *v10 = v12;
  v10[1] = v9;
  *(uint *)(v4 + 52) = v14;
  *(uint *)(v4 + 80) = 512;
  *(uint *)(v4 + 64) = 1290240;
  *(uint *)(v4 + 72) = 0x80000;
  *(uint *)(v4 + 76) = 0x2000;
  Function_2021c50(*(uint **)(v4 + 104), &v15);
  Function_2021c70(*(uint **)(v4 + 104), &v12);
  v11 = Function_201d2a4((uint)(16 * (*(uint *)(v4 + 56) + (*(uint *)(v4 + 56) >> 11 >> 20))) >> 16);
  Function_2021c94(*(uint *)(v4 + 104), v11);
  Function_2021cac(*(uint *)(v4 + 104), 1);
  Function_2021d6c(*(uint *)(v4 + 96), 6u);
  Function_2021cc8(*(uint *)(v4 + 96), 1);
  ++*(uchar *)(v4 + 1);
  return 1;
}

//----- (02243DC0) --------------------------------------------------------
int __fastcall Function_2243dc0(uint *a1)
{
  uint *v1;
  uint *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  short v8;
  int v10;
  int v11;

  v1 = a1;
  v2 = (uint *)a1[26];
  a1[18] -= a1[19];
  v3 = a1[19];
  if ( v3 < 0x10000 )
    a1[19] = v3 + 0x2000;
  if ( a1[18] < 0 )
    a1[18] = 0;
  a1[5] = Function_201d264(0x13Bu) * (a1[18] / 4096);
  v1[6] = Function_201d250((uint)(16 * (v1[16] + (v1[16] >> 11 >> 20))) >> 16) * (v1[18] / 4096);
  v4 = v1[16];
  if ( v4 / 4096 < 180 )
    v1[16] = v4 - 0x4000;
  v5 = v1[11] - v1[20];
  v1[11] = v5;
  if ( v5 < 1024 )
    v1[11] = 1024;
  v6 = v1[12] - v1[20];
  v1[12] = v6;
  if ( v6 < 1024 )
    v1[12] = 1024;
  Function_2021c70(v2, v1 + 11);
  v7 = v1[14] + 24576;
  v1[14] = v7;
  if ( v7 / 4096 > 60 )
    v1[14] = 245760;
  v8 = Function_201d2a4((uint)(16 * (v1[14] + (v1[14] >> 11 >> 20))) >> 16);
  Function_2021c94((int)v2, v8);
  v10 = v1[2] + v1[5];
  v11 = v1[3] + v1[6];
  Function_2021c50(v2, &v10);
  if ( v1[18] <= 0 )
  {
    Function_2021cac((uint)v2, 0);
    ++*((uchar *)v1 + 1);
  }
  return 0;
}

//----- (02243ECC) --------------------------------------------------------
int __fastcall Function_2243ecc(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 4) + 1;
  *(uint *)(v1 + 4) = v2;
  if ( v2 == 8 )
  {
    Function_2021d6c(*(uint *)(v1 + 96), 1u);
    Function_2243f74(*(uint *)(v1 + 92), 0);
  }
  if ( *(uint *)(v1 + 4) == 10 )
    Function_2021cac(*(uint *)(v1 + 96), 0);
  if ( *(uint *)(v1 + 4) > 15 && ((int (__fastcall *)(uint))dword_21F0E90[24])(*(uint *)(v1 + 112)) == 1 )
  {
    *(uint *)(v1 + 4) = 0;
    ++*(uchar *)(v1 + 1);
    *(uchar *)(v1 + 2) = 2;
  }
  return 0;
}

//----- (02243F1C) --------------------------------------------------------
int Function_2243f1c()
{
  return 0;
}

//----- (02243F20) --------------------------------------------------------
int *__fastcall Function_2243f20(int a1, int a2, int a3)
{
  return LoadFromNARC_8(97, 4u, a3, (int)LoadFromNARC_8);
}

//----- (02243F2C) --------------------------------------------------------
int *Function_2243f2c()
{
  return Function_200f174(0, 1, 1, 0x7FFF, 6, 1, 4);
}

//----- (02243F50) --------------------------------------------------------
int *Function_2243f50()
{
  return Function_200f174(0, 0, 0, 0x7FFF, 6, 1, 4);
}

//----- (02243F74) --------------------------------------------------------
uint *__fastcall Function_2243f74(int a1, int a2)
{
  int v2;
  uint *v3;

  v2 = a2;
  v3 = (uint *)Function_205eb3c(*(uint *)(a1 + 60));
  return Function_2062d64(v3, v2);
}

//----- (02243F88) --------------------------------------------------------
uint *__fastcall Function_6_2243f88(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint *v7;
  uint *result;

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = (uint *)Function_2243fdc();
  v7[23] = v5;
  v7[3] = v6;
  v7[8] = v4;
  if ( v4 )
    result = AddTaskToTaskList1((int)Function_22443b8, (int)v7, 0x85u);
  else
    result = AddTaskToTaskList1((int)Function_2244004, (int)v7, 0x85u);
  return result;
}

//----- (02243FBC) --------------------------------------------------------
int __fastcall Function_6_2243fbc(int a1)
{
  return *(uint *)(Function_201ced0(a1) + 4);
}

//----- (02243FC8) --------------------------------------------------------
int __fastcall Function_6_2243fc8(int a1)
{
  int *v1;
  int v2;

  v1 = (int *)a1;
  v2 = Function_201ced0(a1);
  Function_2243ffc(v2);
  return Call_RemoveTaskFromTaskList(v1);
}

//----- (02243FDC) --------------------------------------------------------
int *__fastcall Function_2243fdc(int a1)
{
  int v1;
  int *v2;

  v1 = a1;
  v2 = (int *)malloc2(4u, 540);
  Call_FillMemWithValue(v2, 0, 0x21Cu);
  v2[24] = v1;
  return v2;
}

//----- (02243FFC) --------------------------------------------------------
uint __fastcall Function_2243ffc(int a1)
{
  return free(a1);
}

//----- (02244004) --------------------------------------------------------
int __fastcall Function_2244004(int a1, uint *a2)
{
  uint *v2;
  int result;
  int v4;

  v2 = a2;
  while ( ((int (__fastcall *)(uint *))*(&off_22492D8 + *v2))(v2) == 1 )
    ;
  result = v2[4];
  if ( result == 1 )
  {
    v4 = v2[120];
    if ( v4 )
      Function_20713d0(v4);
    result = Function_2244c10(v2);
  }
  return result;
}

//----- (02244038) --------------------------------------------------------
int __fastcall Function_2244038(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_224481c();
  Function_224464c(v1);
  ++*v1;
  return 0;
}

//----- (02244050) --------------------------------------------------------
int __fastcall Function_2244050(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a1;
  if ( !a1[130] )
    return 0;
  v9 = 0x80000;
  v10 = 393216;
  v11 = 0;
  v6 = 1212416;
  v7 = 393216;
  v8 = 0;
  a1[121] = Function_2244cfc(a1, &v9);
  v4[122] = Function_224529c(v4, &v6);
  Function_22452bc(v4, 1);
  Function_224469c(v4);
  result = 1;
  v4[4] = 1;
  ++*v4;
  return result;
}

//----- (022440C0) --------------------------------------------------------
int __fastcall Function_22440c0(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  Function_2245fdc();
  result = 0;
  v1[11] = 0;
  v1[21] = -262144;
  v1[17] = 1040384;
  v1[18] = 1044480;
  v1[19] = 389120;
  v1[20] = 397312;
  v1[11] = 1;
  ++*v1;
  return result;
}

//----- (022440F8) --------------------------------------------------------
int __fastcall Function_22440f8(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  a1[11] = 0;
  v2 = a1[17] + a1[21];
  v1[17] = v2;
  if ( v2 <= 0 )
  {
    v1[17] = 0;
    v1[21] = 0x2000;
    ++*v1;
  }
  Function_2244f80(v1, v1[17], v1[19], v1[18], v1[20]);
  v1[11] = 1;
  return 0;
}

//----- (02244138) --------------------------------------------------------
int __fastcall Function_2244138(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  a1[11] = 0;
  a1[19] -= a1[21];
  a1[20] += a1[21];
  v2 = a1[21] + 0x2000;
  a1[21] = v2;
  if ( v2 > 0x20000 )
    a1[21] = 0x20000;
  if ( a1[19] < 229376 )
    a1[19] = 229376;
  if ( a1[20] > 557056 )
    a1[20] = 557056;
  Function_2244f80(a1, a1[17], a1[19], a1[18], a1[20]);
  v1[11] = 1;
  if ( v1[19] == 229376 && v1[20] == 557056 )
  {
    Function_2244d34(v1[121]);
    ++*v1;
  }
  return 0;
}

//----- (022441BC) --------------------------------------------------------
int __fastcall Function_22441bc(uint *a1)
{
  int v1;

  v1 = a1[2] + 1;
  a1[2] = v1;
  if ( v1 >= 15 )
  {
    a1[2] = 0;
    a1[22] = -262144;
    ++*a1;
  }
  return 0;
}

//----- (022441DC) --------------------------------------------------------
int __fastcall Function_22441dc(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int *v6;
  int v7;
  int v9;
  int v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a1;
  v5 = *(uint *)(a1 + 488);
  Function_2021d28();
  v7 = v6[1];
  v9 = *v6;
  v10 = v7;
  v11 = v6[2];
  v9 += *(uint *)(v4 + 88);
  if ( v9 <= 655360 )
  {
    v9 = 786432;
    ++*(uint *)v4;
  }
  Function_2021c50(*(uint **)(v4 + 488), &v9);
  return 0;
}

//----- (02244228) --------------------------------------------------------
int __fastcall Function_2244228(int a1)
{
  int v1;
  int v2;
  int v3;
  int *v4;
  int v5;
  int v7;
  int v8;
  int v9;

  v1 = a1;
  v2 = *(uint *)(a1 + 88) / 2;
  *(uint *)(a1 + 88) = v2;
  if ( v2 > -8192 )
  {
    *(uint *)(a1 + 88) = -8192;
    ++*(uint *)a1;
    Function_2077e3c(*(int **)(a1 + 92));
  }
  v3 = *(uint *)(v1 + 488);
  Function_2021d28();
  v5 = v4[1];
  v7 = *v4;
  v8 = v5;
  v9 = v4[2];
  v7 += *(uint *)(v1 + 88);
  Function_2021c50(*(uint **)(v1 + 488), &v7);
  return 0;
}

//----- (02244284) --------------------------------------------------------
int __fastcall Function_2244284(uint *a1)
{
  int v1;

  v1 = a1[2] + 1;
  a1[2] = v1;
  if ( v1 >= 8 )
  {
    a1[2] = 0;
    a1[22] = -4096;
    ++*a1;
  }
  return 0;
}

//----- (022442A4) --------------------------------------------------------
int __fastcall Function_22442a4(int a1)
{
  int v1;
  int v2;
  int v3;
  int *v4;
  int v5;
  int v7;
  int v8;
  int v9;

  v1 = a1;
  v2 = 2 * *(uint *)(a1 + 88);
  *(uint *)(a1 + 88) = v2;
  if ( v2 < -262144 )
    *(uint *)(a1 + 88) = -262144;
  v3 = *(uint *)(a1 + 488);
  Function_2021d28();
  v5 = v4[1];
  v7 = *v4;
  v8 = v5;
  v9 = v4[2];
  v7 += *(uint *)(v1 + 88);
  Function_2021c50(*(uint **)(v1 + 488), &v7);
  if ( v7 <= -163840 )
  {
    *(uint *)(v1 + 84) = 4096;
    ++*(uint *)v1;
  }
  return 0;
}

//----- (02244308) --------------------------------------------------------
int __fastcall Function_2244308(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  a1[11] = 0;
  a1[19] += a1[21];
  a1[20] -= a1[21];
  v2 = a1[21] + 0x4000;
  a1[21] = v2;
  if ( v2 > 0x20000 )
    a1[21] = 0x20000;
  if ( a1[19] >= 360448 )
    a1[19] = 360448;
  if ( a1[20] <= 425984 )
    a1[20] = 425984;
  Function_2244f80(a1, a1[17], a1[19], a1[18], a1[20]);
  v1[11] = 1;
  if ( v1[19] == 360448 && v1[20] == 425984 )
  {
    Function_2246018(v1);
    ++*v1;
  }
  return 0;
}

//----- (02244388) --------------------------------------------------------
int __fastcall Function_2244388(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  Function_22448c8();
  result = 0;
  v1[4] = 0;
  ++*v1;
  return result;
}

//----- (0224439C) --------------------------------------------------------
int __fastcall Function_224439c(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_2244fb4();
  ++*v1;
  return 0;
}

//----- (022443B0) --------------------------------------------------------
int __fastcall Function_22443b0(int a1)
{
  *(uint *)(a1 + 4) = 1;
  return 0;
}

//----- (022443B8) --------------------------------------------------------
int __fastcall Function_22443b8(int a1, uint *a2)
{
  uint *v2;
  int result;
  int v4;

  v2 = a2;
  while ( ((int (__fastcall *)(uint *))*(&off_2249310 + *v2))(v2) == 1 )
    ;
  result = v2[4];
  if ( result == 1 )
  {
    v4 = v2[120];
    if ( v4 )
      Function_20713d0(v4);
    result = Function_2244c10(v2);
  }
  return result;
}

//----- (022443EC) --------------------------------------------------------
int __fastcall Function_22443ec(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a1;
  if ( !a1[130] )
    return 0;
  v9 = 0x80000;
  v10 = 393216;
  v11 = 0;
  v6 = 1212416;
  v7 = 393216;
  v8 = 0;
  a1[121] = Function_2244cfc(a1, &v9);
  v4[122] = Function_224529c(v4, &v6);
  Function_22452bc(v4, 1);
  Function_224469c(v4);
  result = 1;
  v4[4] = 1;
  ++*v4;
  return result;
}

//----- (0224445C) --------------------------------------------------------
int __fastcall Function_224445c(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_22451b8();
  ++*v1;
  return 0;
}

//----- (02244470) --------------------------------------------------------
int __fastcall Function_2244470(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_2244db4();
  Function_2244674(v1);
  ++*v1;
  return 0;
}

//----- (02244488) --------------------------------------------------------
int __fastcall Function_2244488(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( !a1[130] )
    return 0;
  Function_224469c(a1);
  ++*v1;
  return 1;
}

//----- (022444A8) --------------------------------------------------------
int __fastcall Function_22444a8(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_224543c();
  Function_224551c(v1);
  Function_2244f74(v1);
  Function_2245f64(v1, 1);
  ++*v1;
  return 0;
}

//----- (022444D0) --------------------------------------------------------
int __fastcall Function_22444d0(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( Function_2245470() == 2 )
  {
    Function_2021d6c(v1[121], 1u);
    ++*v1;
  }
  return 0;
}

//----- (022444F8) --------------------------------------------------------
int __fastcall Function_22444f8(uint *a1)
{
  int v1;

  v1 = a1[2] + 1;
  a1[2] = v1;
  if ( v1 >= 20 )
  {
    a1[2] = 0;
    ++*a1;
    Function_22456d4();
  }
  return 1;
}

//----- (02244518) --------------------------------------------------------
int __fastcall Function_2244518(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( Function_2245470() != 3 )
    return 0;
  Function_2005748(0x649u);
  v1[21] = 2048;
  v1[5] = 2;
  ++*v1;
  return 1;
}

//----- (02244548) --------------------------------------------------------
int __fastcall Function_2244548(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  a1[11] = 0;
  a1[19] += a1[21];
  a1[20] -= a1[21];
  v2 = a1[21] + 2048;
  a1[21] = v2;
  if ( v2 > 0x10000 )
    a1[21] = 0x10000;
  if ( a1[19] >= 389120 )
    a1[19] = 389120;
  if ( a1[20] <= 397312 )
    a1[20] = 397312;
  Function_2244f80(a1, a1[17], a1[19], a1[18], a1[20]);
  v1[11] = 1;
  if ( !v1[6] && Function_2245470(v1) == 4 )
  {
    v1[6] = 1;
    Function_2243f50();
  }
  if ( v1[19] == 389120 && v1[20] == 397312 )
  {
    Function_2244f20(*(uint *)(v1[24] + 8));
    v1[5] = 1;
    Function_2244f58(v1);
    ++*v1;
  }
  return 0;
}

//----- (022445EC) --------------------------------------------------------
int __fastcall Function_22445ec(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( !a1[6] && Function_2245470(a1) == 4 )
  {
    v1[6] = 1;
    Function_2243f50();
  }
  if ( Function_2245470(v1) != 2 )
    return 0;
  if ( !v1[6] )
  {
    v1[6] = 1;
    Function_2243f50();
  }
  Function_2245480(v1);
  ++*v1;
  return 0;
}

//----- (02244634) --------------------------------------------------------
int __fastcall Function_2244634(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( Function_200f2ac() )
    ++*v1;
  return 0;
}

//----- (0224464C) --------------------------------------------------------
uint *__fastcall Function_224464c(int a1)
{
  int v1;
  uint *result;

  v1 = a1;
  *(uint *)(a1 + 516) = 0;
  *(uint *)(a1 + 520) = 0;
  result = AddTaskToTaskList2((int)Function_22446b8, a1, 0x80u);
  *(uint *)(v1 + 532) = result;
  return result;
}

//----- (02244674) --------------------------------------------------------
uint *__fastcall Function_2244674(int a1)
{
  int v1;
  uint *result;

  v1 = a1;
  *(uint *)(a1 + 516) = 0;
  *(uint *)(a1 + 520) = 0;
  result = AddTaskToTaskList2((int)Function_22447b4, a1, 0x80u);
  *(uint *)(v1 + 532) = result;
  return result;
}

//----- (0224469C) --------------------------------------------------------
int *__fastcall Function_224469c(int a1)
{
  int v1;
  int *result;

  v1 = a1;
  result = *(int **)(a1 + 532);
  if ( result )
  {
    Call_RemoveTaskFromTaskList(result);
    result = (int *)532;
    *(uint *)(v1 + 532) = 0;
  }
  return result;
}

//----- (022446B8) --------------------------------------------------------
uint *__fastcall Function_22446b8(int a1, uint *a2)
{
  uint *v2;
  uint *result;
  int v4;
  uint *v5;
  int *v6;
  int v7;
  uint *v8;
  int *v9;

  v2 = a2;
  result = (uint *)a2[129];
  if ( !result )
  {
    v4 = 0;
    v5 = a2;
    do
    {
      v6 = (int *)v5[107];
      if ( v6 )
        Function_200a3dc(v6);
      ++v4;
      ++v5;
    }
    while ( v4 < 4 );
    v7 = 0;
    v8 = v2;
    do
    {
      v9 = (int *)v8[111];
      if ( v9 )
        Function_200a640(v9);
      ++v7;
      ++v8;
    }
    while ( v7 < 3 );
    if ( v2[131] )
      Function_2245118(v2);
    if ( v2[132] )
      Function_2245170(v2);
    ++v2[129];
    result = AddTaskToTaskList3((int)Function_2244734, (int)v2, 0x80u);
  }
  return result;
}

//----- (02244734) --------------------------------------------------------
int __fastcall Function_2244734(int *a1, uint *a2)
{
  uint *v2;
  int result;
  int v4;
  uint *v5;
  int *v6;
  int v7;
  uint *v8;
  int *v9;
  int v10;
  int v11;
  int *v12;

  v12 = a1;
  v2 = a2;
  result = a2[129];
  if ( result == 1 )
  {
    v4 = 0;
    v5 = a2;
    do
    {
      v6 = (int *)v5[107];
      if ( v6 )
        Function_2009d4c(v6);
      ++v4;
      ++v5;
    }
    while ( v4 < 4 );
    v7 = 0;
    v8 = v2;
    do
    {
      v9 = (int *)v8[111];
      if ( v9 )
        Function_2009d4c(v9);
      ++v7;
      ++v8;
    }
    while ( v7 < 3 );
    v10 = v2[131];
    if ( v10 )
    {
      free(v10);
      v2[131] = 0;
    }
    v11 = v2[132];
    if ( v11 )
    {
      free(v11);
      v2[132] = 0;
    }
    v2[130] = 1;
    result = Call_RemoveTaskFromTaskList(v12);
  }
  return result;
}

//----- (022447B4) --------------------------------------------------------
int *__fastcall Function_22447b4(int a1, int a2)
{
  int v2;
  int *result;

  v2 = a2;
  result = (int *)Function_2009dc8(*(uint *)(a2 + 412), 0);
  if ( !*(uint *)(v2 + 516) )
  {
    Function_200a3dc(result);
    AddTaskToTaskList3((int)Function_22447ec, v2, 0x80u);
    result = (int *)516;
    ++*(uint *)(v2 + 516);
  }
  return result;
}

//----- (022447EC) --------------------------------------------------------
int *__fastcall Function_22447ec(int *a1, int a2)
{
  int *v2;
  int v3;
  int *result;

  v2 = a1;
  v3 = a2;
  result = (int *)Function_2009dc8(*(uint *)(a2 + 412), 0);
  if ( *(uint *)(v3 + 516) == 1 )
  {
    Function_2009d4c(result);
    *(uint *)(v3 + 520) = 1;
    result = (int *)Call_RemoveTaskFromTaskList(v2);
  }
  return result;
}

//----- (0224481C) --------------------------------------------------------
uint __fastcall Function_224481c(int a1)
{
  int v1;
  int *v2;
  char v3;
  char v4;

  v1 = a1;
  v2 = (int *)Function_224491c(a1);
  Function_2244f80(v1, 0, 786432, 4096, 786432);
  Function_2244f2c(v1);
  *(ushort *)(v1 + 36) = Function_201a008(*(uint *)(*(uint *)(v1 + 96) + 8), 0, v3);
  *(ushort *)(v1 + 38) = Function_201a008(*(uint *)(*(uint *)(v1 + 96) + 8), 3u, v4);
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 1;
  REG_BG3CNT &= 0xFFFCu;
  Function_201ff0c(8u, 0);
  Function_2244e54(v2, 2, v1 + 108);
  Function_2244e7c(*(uint *)(*(uint *)(v1 + 96) + 8), v2, 0, v1 + 104);
  Function_2244eb4(*(uint *)(*(uint *)(v1 + 96) + 8), v2, 1, v1 + 100);
  Function_2244928(v1, v2);
  Call_FS_CloseFile(v2);
  *(uint *)(v1 + 480) = Function_20711ec(4u, 32);
  return Function_201ff0c(8u, 1);
}

//----- (022448C8) --------------------------------------------------------
uint __fastcall Function_22448c8(int a1)
{
  int v1;

  v1 = a1;
  Function_201ff0c(8u, 0);
  Function_207121c(*(uint *)(v1 + 480));
  Function_2244f20(*(uint *)(*(uint *)(v1 + 96) + 8));
  Function_2244b6c(v1);
  REG_BG0CNT = *(ushort *)(v1 + 36) | REG_BG0CNT & 0xFFFC;
  REG_BG3CNT = *(ushort *)(v1 + 38) | REG_BG3CNT & 0xFFFC;
  Function_205d8cc(0, 1);
  return Function_201ff0c(8u, 1);
}

//----- (0224491C) --------------------------------------------------------
int *__fastcall Function_224491c(int a1, int a2, int a3)
{
  return LoadFromNARC_8(97, 4u, a3, (int)LoadFromNARC_8);
}

//----- (02244928) --------------------------------------------------------
int __fastcall Function_2244928(uint *a1, int a2)
{
  int v2;
  uint *v3;
  int v4;
  int v5;
  int *v6;
  int v7;
  int *v8;
  int *v9;
  int result;

  v2 = a2;
  v3 = a1;
  Function_224508c();
  v3[28] = Function_20095c4(32, (int)(v3 + 29), 4, v4);
  Function_200964c((int)(v3 + 29), 0, 0x200000, v5);
  v3[103] = Function_2009714(4, 0, 4u);
  v3[104] = Function_2009714(3, (int *)1, 4u);
  v3[105] = Function_2009714(4, (int *)2, 4u);
  v3[106] = Function_2009714(2, (int *)3, 4u);
  v3[107] = Function_2009a4c(v3[103], v2, 0xAu, 0, 1, 1, 4u);
  if ( v3[3] )
    v6 = Function_2009a4c(v3[103], v2, 0x10u, 0, 2, 1, 4u);
  else
    v6 = Function_2009a4c(v3[103], v2, 0xDu, 0, 2, 1, 4u);
  v3[108] = v6;
  v3[109] = Function_22450f4(v3, v2);
  v3[111] = Function_2009b04(v3[104], v2, 3u, 0, 0, 1, 1, 4u);
  v7 = 1;
  if ( v3[3] )
  {
    v3[112] = Function_2009b04(v3[104], v2, 4u, 0, 1, 1, 1, 4u);
    v7 = 2;
  }
  v3[v7 + 111] = Function_224514c(v3, v2);
  v3[114] = Function_2009bc4(v3[105], v2, 0xBu, 0, 1, 2u, 4u);
  if ( v3[3] )
    v8 = Function_2009bc4(v3[105], v2, 0x11u, 0, 2, 2u, 4u);
  else
    v8 = Function_2009bc4(v3[105], v2, 0xEu, 0, 2, 2u, 4u);
  v3[115] = v8;
  v3[116] = Function_2009bc4(v3[105], v2, 6u, 0, 3, 2u, 4u);
  v3[118] = Function_2009bc4(v3[106], v2, 0xCu, 0, 0, 3u, 4u);
  if ( v3[3] )
    v9 = Function_2009bc4(v3[106], v2, 0x12u, 0, 1, 3u, 4u);
  else
    v9 = Function_2009bc4(v3[106], v2, 0xFu, 0, 1, 3u, 4u);
  v3[119] = v9;
  v3[131] = Function_224509c(v3[23], v3 + 125, 4);
  result = Function_22450e4(v3 + 125, 4);
  v3[132] = result;
  return result;
}

//----- (02244B6C) --------------------------------------------------------
int __fastcall Function_2244b6c(int **a1)
{
  int **v1;
  int v2;
  int **v3;
  int *v4;
  int v5;
  int **v6;
  int *v7;
  int v8;
  int **v9;
  int *v10;
  int v11;
  int **v12;
  int *v13;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    v4 = v3[107];
    if ( v4 )
      Function_200a4e4(v4);
    ++v2;
    ++v3;
  }
  while ( v2 < 4 );
  v5 = 0;
  v6 = v1;
  do
  {
    v7 = v6[111];
    if ( v7 )
      Function_200a6dc(v7);
    ++v5;
    ++v6;
  }
  while ( v5 < 3 );
  v8 = 0;
  v9 = v1;
  do
  {
    v10 = v9[114];
    if ( v10 )
      Function_2009d4c(v10);
    ++v8;
    ++v9;
  }
  while ( v8 < 4 );
  v11 = 0;
  v12 = v1;
  do
  {
    v13 = v12[118];
    if ( v13 )
      Function_2009d4c(v13);
    ++v11;
    ++v12;
  }
  while ( v11 < 2 );
  Function_2009754(v1[103]);
  Function_2009754(v1[104]);
  Function_2009754(v1[105]);
  Function_2009754(v1[106]);
  Function_20219c0(v1[28]);
  return Function_2021964(v1[28]);
}

//----- (02244C10) --------------------------------------------------------
int __fastcall Function_2244c10(int a1)
{
  int result;

  result = *(uint *)(a1 + 112);
  if ( result )
    result = Function_20219f8(result);
  return result;
}

//----- (02244C20) --------------------------------------------------------
int __fastcall Function_2244c20(int *a1, int *a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int *v8;
  int *v9;
  int v10;
  int v11;
  int v13;
  char *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  char v21;

  v8 = a1;
  v9 = a2;
  if ( a6 == 4 )
    Function_20093b4((int)&v21, a3, a4, a5, -1, -1, -1, 0, a7, a1[103], a1[104], a1[105], 0, 0, 0);
  else
    Function_20093b4((int)&v21, a3, a4, a5, a6, -1, -1, 0, a7, a1[103], a1[104], a1[105], a1[106], 0, 0);
  v13 = v8[28];
  v14 = &v21;
  v10 = v9[1];
  v15 = *v9;
  v16 = v10;
  v17 = v9[2];
  v18 = a8;
  v19 = 1;
  v20 = 4;
  v11 = Function_2021b90(&v13);
  if ( !v11 )
    ErrorHandler();
  return v11;
}

//----- (02244CD4) --------------------------------------------------------
int __fastcall Function_2244cd4(int *a1, int *a2, int a3, uint a4)
{
  uint v4;
  int v5;

  v4 = a4;
  v5 = Function_2244c20(a1, a2, 1, 0, 1, 0, 0, a3);
  Function_2021d6c(v5, v4);
  return v5;
}

//----- (02244CFC) --------------------------------------------------------
int __fastcall Function_2244cfc(int *a1, int *a2)
{
  int v2;
  int v3;

  v2 = 0;
  if ( a1[3] == 1 )
    v2 = 1;
  v3 = Function_2244c20(a1, a2, 2, v2, 2, 1, 0, 131);
  Function_2021cac(v3, 0);
  Function_2021d6c(v3, 6u);
  return v3;
}

//----- (02244D34) --------------------------------------------------------
uint __fastcall Function_2244d34(uint a1)
{
  uint v1;

  v1 = a1;
  Function_2021cc8(a1, 1);
  return Function_2021ce4(v1, 4096);
}

//----- (02244D4C) --------------------------------------------------------
uint *__fastcall Function_2244d4c(int *a1, int *a2, int a3, int a4)
{
  uint *v4;
  short v5;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v13 = a4;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v7 = 4096;
  v8 = 4096;
  v9 = 0;
  v4 = (uint *)Function_2244c20(a1, a2, 0, 0, 0, -1, 0, a3);
  Function_2021cf8((uint)v4, 2);
  Function_2021c60(v4, &v10);
  Function_2021c70(v4, &v7);
  v5 = Function_201d2a4(0);
  Function_2021c94((int)v4, v5);
  return v4;
}

//----- (02244DB4) --------------------------------------------------------
uint __fastcall Function_2244db4(int a1, int a2, int a3)
{
  int v3;
  int *v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v3 = a1;
  v4 = Function_224491c(a1, a2, a3);
  v5 = 0;
  v6 = v3;
  while ( *(uint *)(v6 + 428) )
  {
    ++v5;
    v6 += 4;
    if ( v5 >= 4 )
      goto LABEL_5;
  }
  *(uint *)(v3 + 4 * v5 + 428) = Function_2009a4c(*(uint *)(v3 + 412), (int)v4, 7u, 0, 0, 1, 4u);
LABEL_5:
  if ( v5 >= 4 )
    ErrorHandler();
  v7 = 0;
  v8 = v3;
  while ( *(uint *)(v8 + 456) )
  {
    ++v7;
    v8 += 4;
    if ( v7 >= 4 )
      goto LABEL_11;
  }
  *(uint *)(v3 + 4 * v7 + 456) = Function_2009bc4(*(uint *)(v3 + 420), (int)v4, 8u, 0, 0, 2u, 4u);
LABEL_11:
  if ( v7 >= 4 )
    ErrorHandler();
  return Call_FS_CloseFile(v4);
}

//----- (02244E54) --------------------------------------------------------
uint __fastcall Function_2244e54(int a1, uint a2, uint *a3)
{
  uint *v3;
  int v4;

  v3 = a3;
  v4 = Function_2006cb8_LoadFileInMemory(a1, a2, 4u);
  Function_20a71b0(v4, v3);
  Function_201972c(3u, *(uint *)(*v3 + 12), 32, 384);
  return free(v4);
}

//----- (02244E7C) --------------------------------------------------------
uint __fastcall Function_2244e7c(uint *a1, int a2, uint a3, uint *a4)
{
  uint *v4;
  uint *v5;
  int v6;

  v4 = a1;
  v5 = a4;
  v6 = Function_2006cb8_LoadFileInMemory(a2, a3, 4u);
  NNS_G2dGetUnpackedPaletteData(v6, v5);
  Function_201958c(v4, 3u, *(int **)(*v5 + 20), *(uint *)(*v5 + 16), 0);
  return free(v6);
}

//----- (02244EB4) --------------------------------------------------------
uint __fastcall Function_2244eb4(int a1, int a2, uint a3, uint *a4)
{
  uint v4;
  int v5;
  uint *v6;
  uint *v7;
  int v8;

  v4 = a3;
  v5 = a2;
  v6 = a4;
  v7 = (uint *)a1;
  Function_2019184(a1, 3u, 0, 0);
  Function_2019184((int)v7, 3u, 3u, 0);
  v8 = Function_2006cb8_LoadFileInMemory(v5, v4, 4u);
  Function_20a7248(v8, v6);
  Function_2019574((int)v7, 3, (int *)(*v6 + 12), *(uint *)(*v6 + 8));
  Function_2019e2c((int)v7, 3, 0, 0, 0x20u, 0x20u, 0xCu);
  Function_2019448(v7, 3u);
  return free(v8);
}

//----- (02244F20) --------------------------------------------------------
int __fastcall Function_2244f20(uint *a1)
{
  return Function_2019ebc(a1, 3u);
}

//----- (02244F2C) --------------------------------------------------------
int __fastcall Function_2244f2c(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_2244f8c();
  *(uint *)(v1 + 44) = 0;
  Function_2244f58(v1);
  Function_2244f60(v1);
  Function_2244f50(v1);
  result = 1;
  *(uint *)(v1 + 44) = 1;
  return result;
}

//----- (02244F50) --------------------------------------------------------
int __fastcall Function_2244f50(int result)
{
  *(uint *)(result + 48) = 1;
  return result;
}

//----- (02244F58) --------------------------------------------------------
int __fastcall Function_2244f58(int result)
{
  *(uint *)(result + 48) = 0;
  return result;
}

//----- (02244F60) --------------------------------------------------------
uint *__fastcall Function_2244f60(uint *result)
{
  result[13] = 24;
  result[14] = 0;
  result[15] = 23;
  result[16] = 1;
  return result;
}

//----- (02244F74) --------------------------------------------------------
int __fastcall Function_2244f74(int result)
{
  *(uint *)(result + 60) = 23;
  *(uint *)(result + 64) = 1;
  return result;
}

//----- (02244F80) --------------------------------------------------------
uint *__fastcall Function_2244f80(uint *result, int a2, int a3, int a4, int a5)
{
  result[17] = a2;
  result[18] = a4;
  result[19] = a3;
  result[20] = a5;
  return result;
}

//----- (02244F8C) --------------------------------------------------------
uint *__fastcall Function_2244f8c(int a1)
{
  int v1;
  uint *result;

  v1 = a1;
  if ( *(uint *)(a1 + 536) )
    ErrorHandler();
  result = AddTaskToTaskList2((int)Function_2244fe4, v1, 0x81u);
  *(uint *)(v1 + 536) = result;
  return result;
}

//----- (02244FB4) --------------------------------------------------------
uint __fastcall Function_2244fb4(int a1)
{
  int v1;
  uint result;

  v1 = a1;
  if ( !*(uint *)(a1 + 536) )
    ErrorHandler();
  Call_RemoveTaskFromTaskList(*(int **)(v1 + 536));
  result = REG_DISPCNT & 0xFFFF1FFF;
  REG_DISPCNT &= 0xFFFF1FFF;
  return result;
}

//----- (02244FE4) --------------------------------------------------------
void *__fastcall Function_2244fe4(int a1, uint *a2)
{
  void *result;
  int v3;
  int v4;
  int v5;
  int v6;

  result = (void *)a2[11];
  if ( result )
  {
    REG_DISPCNT = (a2[12] << 13) | REG_DISPCNT & 0xFFFF1FFF;
    v3 = (ushort)(WIN_IN & 0xFFC0) | a2[13];
    if ( a2[14] )
      LOWORD(v3) = v3 | 0x20;
    WIN_IN = v3;
    v4 = (ushort)(WIN_OUT & 0xFFC0) | a2[15];
    if ( a2[16] )
      LOWORD(v4) = v4 | 0x20;
    WIN_OUT = v4;
    v5 = a2[20] / 4096;
    v6 = a2[19] / 4096;
    WIN0_X1 = ((ushort)(a2[17] / 4096) << 8) & 0xFF00 | (uchar)(a2[18] / 4096);
    result = &WIN0_Y1;
    WIN0_Y1 = ((ushort)v6 << 8) & 0xFF00 | (uchar)v5;
  }
  return result;
}

//----- (0224508C) --------------------------------------------------------
int __fastcall Function_224508c(int a1, int a2)
{
  return Function_2075ef4(a2, *(uint *)(a1 + 92), 2u);
}

//----- (0224509C) --------------------------------------------------------
int __fastcall Function_224509c(int *a1, ushort *a2, uint a3)
{
  ushort *v3;
  int *v4;
  uint v5;
  int v6;
  uint v7;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = malloc(4u, 3200);
  if ( !v6 )
    ErrorHandler();
  v7 = GetPkmnData(v4, 0, 0);
  Function_2013750(*v3, v3[1], v5, v6, v7, 0, 2, v3[3]);
  return v6;
}

//----- (022450E4) --------------------------------------------------------
int __fastcall Function_22450e4(ushort *a1, uint a2)
{
  return Function_2013660(*a1, a1[2], a2, (int)Function_2013660);
}

//----- (022450F4) --------------------------------------------------------
int *__fastcall Function_22450f4(int a1, int a2)
{
  return Function_2009a4c(*(uint *)(a1 + 412), a2, 5u, 0, 3, 1, 4u);
}

//----- (02245118) --------------------------------------------------------
int *__fastcall Function_2245118(int a1, int *a2)
{
  int *v2;
  int *v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = (int *)Function_2009dc8(*(uint *)(a1 + 412), 3);
  v4 = Function_200a534(v3);
  v5 = NNS_G2dGetImageLocation(v4, 1);
  DC_FlushRange((int)v2, 3200);
  return GX_LoadOBJ(v2, v5, 0xC80u);
}

//----- (0224514C) --------------------------------------------------------
int *__fastcall Function_224514c(int a1, int a2)
{
  return Function_2009b04(*(uint *)(a1 + 416), a2, 3u, 0, 2, 1, 1, 4u);
}

//----- (02245170) --------------------------------------------------------
uint __fastcall Function_2245170(int a1, int a2)
{
  int v2;
  int v3;
  int *v4;
  int v5;
  int *v6;
  uchar *v7;
  int v8;

  v2 = a1;
  v3 = a2;
  v4 = (int *)Function_2009dc8(*(uint *)(a1 + 412), 3);
  v5 = Function_200a534(v4);
  v6 = (int *)Function_2009dc8(*(uint *)(v2 + 416), 2);
  v7 = Function_200a72c(v6, v5);
  v8 = NNS_G2dGetImagePaletteLocation((int)v7, 1);
  DC_FlushRange(v3, 32);
  return GX_LoadOBJPltt(v3, v8, 0x20u);
}

//----- (022451B8) --------------------------------------------------------
int __fastcall Function_22451b8(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int *v5;
  int v6;
  int v7;
  int *v8;
  int result;
  int v10;

  v1 = a1;
  v2 = (int *)Function_2009dc8(*(uint *)(a1 + 412), 3);
  Function_200a4e4(v2);
  Function_2009d68(*(int **)(v1 + 412), (uint **)v2);
  v3 = 0;
  v4 = v1;
  while ( *(int **)(v4 + 428) != v2 )
  {
    ++v3;
    v4 += 4;
    if ( v3 >= 4 )
      goto LABEL_5;
  }
  *(uint *)(v1 + 4 * v3 + 428) = 0;
LABEL_5:
  if ( v3 >= 4 )
    ErrorHandler();
  v5 = (int *)Function_2009dc8(*(uint *)(v1 + 416), 2);
  Function_200a6dc(v5);
  Function_2009d68(*(int **)(v1 + 416), (uint **)v5);
  v6 = 0;
  v7 = v1;
  while ( *(int **)(v7 + 444) != v5 )
  {
    ++v6;
    v7 += 4;
    if ( v6 >= 3 )
      goto LABEL_11;
  }
  *(uint *)(v1 + 4 * v6 + 444) = 0;
LABEL_11:
  if ( v6 >= 3 )
    ErrorHandler();
  v8 = (int *)Function_2009dc8(*(uint *)(v1 + 420), 3);
  Function_2009d4c(v8);
  Function_2009d68(*(int **)(v1 + 420), (uint **)v8);
  result = 0;
  v10 = v1;
  while ( *(int **)(v10 + 456) != v8 )
  {
    ++result;
    v10 += 4;
    if ( result >= 4 )
      goto LABEL_17;
  }
  *(uint *)(v1 + 4 * result + 456) = 0;
LABEL_17:
  if ( result >= 4 )
    result = ErrorHandler();
  return result;
}

//----- (0224529C) --------------------------------------------------------
int __fastcall Function_224529c(int *a1, int *a2)
{
  return Function_2244c20(a1, a2, 3, 2, 3, -1, 0, 129);
}

//----- (022452BC) --------------------------------------------------------
int __fastcall Function_22452bc(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int result;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;

  v17 = a4;
  v4 = a1;
  v5 = &dword_224936C;
  v6 = a2;
  *(uint *)(a1 + 20) = 2;
  v7 = 0;
  do
  {
    v14 = *v5;
    v15 = v5[1];
    v16 = 0;
    v11 = v5[2];
    v12 = 0;
    v13 = 0;
    v8 = v5[3];
    v9 = v5[4];
    Function_2245328(v4, &v14, &v11, v5[3], v5[4], v6);
    v14 += 0x100000;
    result = Function_2245328(v4, &v14, &v11, v8, v9, v6);
    ++v7;
    v5 += 5;
  }
  while ( v7 < 13 );
  return result;
}

//----- (02245328) --------------------------------------------------------
int *__fastcall Function_2245328(int a1, int *a2, int *a3, int a4, int a5, int a6)
{
  int *v6;
  int v7;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v15 = a4;
  v9 = a4;
  v11 = a1;
  v6 = a2;
  v10 = a6;
  v7 = a3[1];
  v12 = *a3;
  v13 = v7;
  v14 = a3[2];
  return Function_2071330(*(uint *)(a1 + 480), dword_2249220, v6, a5, (int)&v9, 0x84u);
}

//----- (02245364) --------------------------------------------------------
int __fastcall Function_2245364(int a1, uint *a2)
{
  uint *v2;
  uint *v3;
  uint *v4;
  uint *v5;
  int v6;
  uint *v7;
  int v8;
  uint *v9;
  int v10;
  int v11;
  char v13;

  v2 = a2;
  v3 = (uint *)a1;
  v4 = (uint *)Function_20715bc(a1);
  v5 = v2 + 3;
  v6 = v4[1];
  *v5 = *v4;
  v5[1] = v6;
  v7 = v2 + 5;
  v8 = v4[3];
  *v7 = v4[2];
  v7[1] = v8;
  v9 = v2 + 7;
  v10 = v4[5];
  *v9 = v4[4];
  v9[1] = v10;
  v2[1] = Function_20715b4((int)v3);
  Function_20715e4(v3, &v13);
  v11 = Function_2244cd4((int *)v2[5], (int *)&v13, v2[3], v2[1]);
  v2[2] = v11;
  Function_2021cac(v11, 0);
  return 1;
}

//----- (022453AC) --------------------------------------------------------
int __fastcall Function_22453ac(int a1, int a2)
{
  return Function_2021bd4(*(uint *)(a2 + 8));
}

//----- (022453B8) --------------------------------------------------------
uint __fastcall Function_22453b8(uint *a1, uint *a2, int a3, int a4)
{
  uint *v4;
  uint *v5;
  uint result;
  uint *v7;
  int v8;
  int v9;
  int v10;
  uint v11;
  int v12;
  int v13;

  v13 = a4;
  v4 = a2;
  v5 = a1;
  Function_20715e4(a1, &v11);
  v11 = ((v11 + v4[6]) >> 31) + __ROR4__(((v11 + v4[6]) << 11) - ((v11 + v4[6]) >> 31), 11);
  Function_20715d4(v5, (int *)&v11);
  Function_2021c50((uint *)v4[2], (int *)&v11);
  result = v4[4];
  if ( result == 1 )
  {
    v7 = (uint *)v4[5];
    result = v7[5];
    if ( result == 2 )
    {
      v8 = v7[19];
      v9 = v7[20];
      v10 = 0;
      if ( v12 - 0x2000 >= v8 && v12 - 0x2000 <= v9 && v12 + 0x2000 >= v8 && v12 + 0x2000 <= v9 )
        v10 = 1;
      result = Function_2021cac(v4[2], v10);
    }
    else if ( result == 1 )
    {
      result = Function_2021cac(v4[2], 0);
    }
  }
  return result;
}

//----- (02245438) --------------------------------------------------------
void Function_2245438()
{
  ;
}

//----- (0224543C) --------------------------------------------------------
int *__fastcall Function_224543c(int a1)
{
  int v1;
  int *result;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v3 = a1;
  result = Function_2071330(*(uint *)(a1 + 480), dword_2249248, &v4, 0, (int)&v3, 0x82u);
  *(uint *)(v1 + 492) = result;
  return result;
}

//----- (02245470) --------------------------------------------------------
int __fastcall Function_2245470(int a1)
{
  return *(uchar *)(Function_2071598(*(uint *)(a1 + 492)) + 2);
}

//----- (02245480) --------------------------------------------------------
int *__fastcall Function_2245480(int a1)
{
  int v1;
  int v2;
  int v3;
  int *v4;

  v1 = a1;
  v2 = Function_2071598(*(uint *)(a1 + 492));
  v3 = v2;
  v4 = *(int **)(v2 + 96);
  if ( v4 )
    Function_207136c(v4);
  if ( *(uint *)(v3 + 100) )
    ((void (*)(void))dword_21F0E90[27])();
  return Function_207136c(*(int **)(v1 + 492));
}

//----- (022454B0) --------------------------------------------------------
int __fastcall Function_22454b0(int a1, int a2)
{
  uint *v2;
  int v3;
  char v5;

  v2 = (uint *)a1;
  v3 = a2;
  *(uint *)(a2 + 92) = *(uint *)Function_20715bc(a1);
  Function_20715e4(v2, &v5);
  *(uint *)(v3 + 88) = Function_2244d4c(*(int **)(v3 + 92), (int *)&v5, 0, 0);
  return 1;
}

//----- (022454DC) --------------------------------------------------------
int __fastcall Function_22454dc(int a1, int a2)
{
  return Function_2021bd4(*(uint *)(a2 + 88));
}

//----- (022454E8) --------------------------------------------------------
int __fastcall Function_22454e8(int a1, uchar *a2)
{
  uchar *v2;
  int v3;
  int result;

  v2 = a2;
  v3 = (int)*(&off_2249198 + *a2);
  do
    result = (*(int (__fastcall **)(uchar *))(v3 + 4 * v2[1]))(v2);
  while ( result == 1 );
  return result;
}

//----- (02245508) --------------------------------------------------------
void Function_2245508()
{
  ;
}

//----- (0224550C) --------------------------------------------------------
int __fastcall Function_224550c(int a1)
{
  *(uchar *)(a1 + 2) = 0;
  Function_2021cac(*(uint *)(a1 + 88), 0);
  return 0;
}

//----- (0224551C) --------------------------------------------------------
uint __fastcall Function_224551c(int a1)
{
  int v1;
  int v2;
  int v3;
  uint *v4;
  int v5;
  uint *v6;
  short v7;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v12 = 557056;
  v13 = 360448;
  v14 = 0;
  v9 = 1024;
  v10 = 1024;
  v11 = 0;
  v1 = Function_2071598(*(uint *)(a1 + 492));
  v2 = v1;
  *(uchar *)v1 = 1;
  *(uchar *)(v1 + 1) = 0;
  *(uchar *)(v1 + 2) = 0;
  v3 = v13;
  v4 = (uint *)(v1 + 8);
  *v4 = v12;
  v4[1] = v3;
  v4[2] = v14;
  *(uint *)(v1 + 20) = 0;
  *(uint *)(v1 + 24) = 0;
  *(uint *)(v1 + 28) = 0;
  *(uint *)(v1 + 56) = 245760;
  v5 = v10;
  v6 = (uint *)(v1 + 44);
  *v6 = v9;
  v6[1] = v5;
  *(uint *)(v1 + 52) = v11;
  *(uint *)(v1 + 80) = 512;
  *(uint *)(v1 + 64) = 737280;
  *(uint *)(v1 + 72) = 0;
  *(uint *)(v1 + 76) = 0x2000;
  Function_2021c50(*(uint **)(v1 + 88), &v12);
  Function_2021c70(*(uint **)(v2 + 88), &v9);
  v7 = Function_201d2a4((uint)(16 * (*(uint *)(v2 + 56) + (*(uint *)(v2 + 56) >> 11 >> 20))) >> 16);
  Function_2021c94(*(uint *)(v2 + 88), v7);
  return Function_2021cac(*(uint *)(v2 + 88), 1);
}

//----- (022455C4) --------------------------------------------------------
int __fastcall Function_22455c4(uint *a1)
{
  uint *v1;
  uint *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  short v8;
  int v10;
  int v11;

  v1 = a1;
  v2 = (uint *)a1[22];
  a1[18] += a1[19];
  v3 = a1[19];
  if ( v3 < 0x10000 )
    a1[19] = v3 + 0x4000;
  a1[5] = Function_201d264(0x13Bu) * (a1[18] / 4096);
  v1[6] = Function_201d250((uint)(16 * (v1[16] + (v1[16] >> 11 >> 20))) >> 16) * (v1[18] / 4096);
  v4 = v1[16];
  if ( v4 / 4096 < 270 )
    v1[16] = v4 + 0x4000;
  v5 = v1[11] + v1[20];
  v1[11] = v5;
  if ( v5 > 4096 )
    v1[11] = 4096;
  v6 = v1[12] + v1[20];
  v1[12] = v6;
  if ( v6 > 4096 )
    v1[12] = 4096;
  Function_2021c70(v2, v1 + 11);
  v7 = v1[14] - 24576;
  v1[14] = v7;
  if ( v7 / 4096 < 0 )
    v1[14] = 0;
  v8 = Function_201d2a4((uint)(16 * (v1[14] + (v1[14] >> 11 >> 20))) >> 16);
  Function_2021c94((int)v2, v8);
  v10 = v1[2] + v1[5];
  v11 = v1[3] + v1[6];
  Function_2021c50(v2, &v10);
  if ( v11 < -262144 )
  {
    Function_2021cac((uint)v2, 0);
    *((uchar *)v1 + 2) = 2;
    ++*((uchar *)v1 + 1);
  }
  return 0;
}

//----- (022456D0) --------------------------------------------------------
int Function_22456d0()
{
  return 0;
}

//----- (022456D4) --------------------------------------------------------
int __fastcall Function_22456d4(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  uint *v6;
  int v7;
  uint *v8;
  int v9;
  uint *v10;
  short v11;
  uint *v12;
  short v13;
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

  v27 = a4;
  v4 = a1;
  v24 = 0x80000;
  v25 = 425984;
  v26 = 0;
  v21 = 5120;
  v22 = 5120;
  v23 = 0;
  v5 = Function_2071598(a1[123]);
  v6 = (uint *)v5;
  *(uchar *)v5 = 2;
  *(uchar *)(v5 + 1) = 0;
  *(uchar *)(v5 + 2) = 1;
  *(uint *)(v5 + 4) = 0;
  v7 = v25;
  v8 = (uint *)(v5 + 8);
  *v8 = v24;
  v8[1] = v7;
  *(uint *)(v5 + 16) = v26;
  *(uint *)(v5 + 20) = 0;
  *(uint *)(v5 + 24) = 0;
  *(uint *)(v5 + 28) = 0;
  *(uint *)(v5 + 56) = 1290240;
  v9 = v22;
  v10 = (uint *)(v5 + 44);
  *v10 = v21;
  v10[1] = v9;
  *(uint *)(v5 + 52) = v23;
  *(uint *)(v5 + 80) = 256;
  *(uint *)(v5 + 64) = 921600;
  *(uint *)(v5 + 72) = 786432;
  *(uint *)(v5 + 76) = 0x20000;
  v6[5] = Function_201d264(0x13Bu) * (v6[18] / 4096);
  v6[6] = Function_201d250((uint)(16 * (v6[16] + (v6[16] >> 11 >> 20))) >> 16) * (v6[18] / 4096);
  v24 = v6[2] + v6[5];
  v25 = v6[3] + v6[6];
  Function_2021c50((uint *)v6[22], &v24);
  Function_2021c70((uint *)v6[22], &v21);
  v11 = Function_201d2a4((uint)(16 * (v6[14] + (v6[14] >> 11 >> 20))) >> 16);
  Function_2021c94(v6[22], v11);
  Function_2021cac(v6[22], 1);
  v6[24] = Function_2245b4c(v4[120], v4[121]);
  v4[7] = 1;
  v6[25] = ((int (__fastcall *)(uint, int))dword_21F0E90[8])(v4[24], 4);
  ((void (*)(void))dword_21F0E90[32])();
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v15 = 4096;
  v16 = 4096;
  v17 = 0;
  v12 = *(uint **)(v6[23] + 484);
  Function_2021cf8((uint)v12, 2);
  Function_2021c60(v12, &v18);
  Function_2021c70(v12, &v15);
  v13 = Function_201d2a4(0);
  return Function_2021c94((int)v12, v13);
}

//----- (02245840) --------------------------------------------------------
int __fastcall Function_2245840(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  short v12;
  uint *v13;
  int *v14;
  int v15;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;

  v22 = a4;
  v4 = a1;
  v5 = (uint *)a1[22];
  v6 = a1[18] - a1[19];
  v4[18] = v6;
  if ( v6 < 0 )
    v4[18] = 0;
  v7 = v4[19];
  if ( v7 > 2048 )
    v4[19] = v7 - 6144;
  if ( v4[19] < 4096 )
    v4[19] = 4096;
  v4[5] = Function_201d264(0x13Bu) * (v4[18] / 4096);
  v4[6] = Function_201d250((uint)(16 * (v4[16] + (v4[16] >> 11 >> 20))) >> 16) * (v4[18] / 4096);
  v8 = v4[16];
  if ( v8 / 4096 < 270 )
    v4[16] = v8 + 0x4000;
  v9 = v4[11] + v4[20];
  v4[11] = v9;
  if ( v9 > 6144 )
    v4[11] = 6144;
  v10 = v4[12] + v4[20];
  v4[12] = v10;
  if ( v10 > 6144 )
    v4[12] = 6144;
  Function_2021c70(v5, v4 + 11);
  v11 = v4[14] + 0x8000;
  v4[14] = v11;
  if ( v11 / 4096 > 360 )
    v4[14] = 1474560;
  v12 = Function_201d2a4((uint)(16 * (v4[14] + (v4[14] >> 11 >> 20))) >> 16);
  Function_2021c94((int)v5, v12);
  v20 = v4[2] + v4[5];
  v21 = v4[3] + v4[6];
  Function_2021c50(v5, &v20);
  if ( v4[18] )
  {
    ++v4[1];
  }
  else
  {
    v4[1] = 0;
    ++*((uchar *)v4 + 1);
  }
  if ( v4[1] == 12 )
    Function_2245b80(v4[24]);
  v13 = *(uint **)(v4[23] + 484);
  v14 = (int *)Function_2021d2c((int)v13);
  v15 = v14[1];
  v17 = *v14;
  v18 = v15;
  v19 = v14[2];
  v17 += 128;
  if ( v17 > 5120 )
    v17 = 5120;
  v18 += 128;
  if ( v18 > 5120 )
    v18 = 5120;
  Function_2021c70(v13, &v17);
  return 0;
}

//----- (022459B0) --------------------------------------------------------
int __fastcall Function_22459b0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  Function_2021d6c(*(uint *)(*(uint *)(a1 + 92) + 484), 3u);
  Function_2021d28();
  v3 = *(uint *)(v2 + 4);
  v4 = *(uint *)(v1 + 88);
  Function_2021d28();
  *(uint *)(v1 + 84) = v3 - *(uint *)(v5 + 4);
  Function_2245b74(*(uint *)(v1 + 96));
  ((void (__fastcall *)(uint, int, uint, int))dword_21F0E90[32])(*(uint *)(v1 + 100), 2, 0, 12);
  *(uint *)(v1 + 80) = 256;
  *(uint *)(v1 + 64) = 0x80000;
  *(uint *)(v1 + 72) = 0;
  *(uint *)(v1 + 76) = 2048;
  *(uchar *)(v1 + 2) = 3;
  ++*(uchar *)(v1 + 1);
  return 1;
}

//----- (02245A0C) --------------------------------------------------------
int __fastcall Function_2245a0c(uint *a1)
{
  uint *v1;
  uint *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint *v7;
  int *v8;
  int v9;
  int v10;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;

  v1 = a1;
  v2 = (uint *)a1[22];
  a1[18] += a1[19];
  v3 = a1[19] + 4096;
  a1[19] = v3;
  if ( v3 > 0x10000 )
    a1[19] = 0x10000;
  a1[5] = Function_201d264((uint)(16 * (a1[16] + (a1[16] >> 11 >> 20))) >> 16) * (a1[18] / 4096);
  v1[6] = Function_201d250(0x80u) * (v1[18] / 4096);
  v4 = v1[16];
  if ( v4 < 552960 )
    v1[16] = v4 + 4096;
  v5 = v1[11] + v1[20];
  v1[11] = v5;
  if ( v5 > 0x2000 )
    v1[11] = 0x2000;
  v6 = v1[12] + v1[20];
  v1[12] = v6;
  if ( v6 > 0x2000 )
    v1[12] = 0x2000;
  Function_2021c70(v2, v1 + 11);
  v18 = v1[2] + v1[5];
  v19 = v1[3] + v1[6];
  Function_2021c50(v2, &v18);
  v7 = *(uint **)(v1[23] + 484);
  v8 = (int *)Function_2021d2c((int)v7);
  v15 = v18;
  v16 = v19;
  v17 = v20;
  v9 = v8[1];
  v12 = *v8;
  v13 = v9;
  v14 = v8[2];
  v10 = v1[21] - 4096;
  v1[21] = v10;
  v16 += v10;
  Function_2021c50(v7, &v15);
  v12 += 256;
  if ( v12 > 0x2000 )
    v12 = 0x2000;
  v13 += 256;
  if ( v13 > 0x2000 )
    v13 = 0x2000;
  Function_2021c70(v7, &v12);
  if ( v19 / 4096 >= 240 )
  {
    *((uchar *)v1 + 2) = 2;
    ++*((uchar *)v1 + 1);
  }
  return 0;
}

//----- (02245B48) --------------------------------------------------------
int Function_2245b48()
{
  return 0;
}

//----- (02245B4C) --------------------------------------------------------
int *__fastcall Function_2245b4c(int a1, int a2)
{
  char v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v5 = 0;
  v6 = 0;
  v4 = a2;
  v7 = 0;
  return Function_2071330(a1, dword_224920C, &v5, 0, (int)&v3, 0x81u);
}

//----- (02245B74) --------------------------------------------------------
uint *__fastcall Function_2245b74(int a1)
{
  uint *result;

  result = (uint *)Function_2071598(a1);
  *result = 0;
  return result;
}

//----- (02245B80) --------------------------------------------------------
int __fastcall Function_2245b80(int a1, int a2, int a3, int a4)
{
  uint *v4;
  uint *v5;
  uint *v6;
  int v7;
  int *v8;
  int v9;
  int v11;
  int v12;
  int v13;
  int v14;

  v14 = a4;
  v4 = (uint *)a1;
  v5 = (uint *)Function_2071598(a1);
  v6 = v5;
  *v5 = 1;
  v5[1] = 0;
  v5[3] = 0;
  v5[2] = 0;
  v5[4] = 0;
  v5[5] = 0;
  v5[6] = 0;
  v7 = v5[8];
  Function_2021d28();
  v9 = v8[1];
  v11 = *v8;
  v12 = v9;
  v13 = v8[2];
  Function_20715d4(v4, &v11);
  return Function_2021d6c(v6[8], 5u);
}

//----- (02245BC8) --------------------------------------------------------
int __fastcall Function_2245bc8(int a1)
{
  uint *v1;
  uint *v2;
  uint *v3;
  char v5;

  v1 = (uint *)a1;
  v2 = (uint *)Function_2071598(a1);
  v3 = v2;
  *v2 = 2;
  v2[1] = 0;
  v2[3] = 0;
  v2[2] = 0;
  v2[4] = 0;
  v2[5] = 0;
  v2[6] = 0;
  Function_22437c8(v2[8], &v5);
  Function_20715d4(v1, (int *)&v5);
  return Function_2021d6c(v3[8], 4u);
}

//----- (02245C04) --------------------------------------------------------
int __fastcall Function_2245c04(int a1, int a2)
{
  int v2;
  uint *v3;

  v2 = a2;
  v3 = (uint *)Function_20715bc(a1);
  *(uint *)(v2 + 28) = *v3;
  *(uint *)(v2 + 32) = v3[1];
  return 1;
}

//----- (02245C18) --------------------------------------------------------
uint *__fastcall Function_2245c18(uint *result, uint *a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;

  v7 = a4;
  v4 = a2;
  if ( !a2[1] )
  {
    a2[5] = dword_22492A8[a2[3]];
    Function_20715e4(result, &v5);
    v6 += v4[5];
    Function_2021c50((uint *)v4[8], &v5);
    result = (uint *)(v4[3] + 1);
    v4[3] = result;
    if ( (int)result >= 12 )
    {
      v4[3] = 0;
      v4[2] = 1;
      result = (uint *)(v4[1] + 1);
      v4[1] = result;
    }
  }
  return result;
}

//----- (02245C64) --------------------------------------------------------
uint *__fastcall Function_2245c64(uint *result, uint *a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;

  v7 = a4;
  v4 = a2;
  if ( !a2[1] )
  {
    a2[5] = dword_22491FC[a2[3]];
    Function_20715e4(result, &v5);
    v6 += v4[5];
    Function_2021c50((uint *)v4[8], &v5);
    result = (uint *)(v4[3] + 1);
    v4[3] = result;
    if ( (int)result >= 4 )
    {
      v4[3] = 0;
      v4[2] = 1;
      result = (uint *)(v4[1] + 1);
      v4[1] = result;
    }
  }
  return result;
}

//----- (02245CB0) --------------------------------------------------------
uint *__fastcall Function_2245cb0(uint *result, uint *a2, int a3, int a4)
{
  if ( *a2 == 1 )
    return Function_2245c18(result, a2, 1, a4);
  if ( *a2 == 2 )
    result = Function_2245c64(result, a2, 2, a4);
  return result;
}

//----- (02245CCC) --------------------------------------------------------
uint *__fastcall Function_6_2245ccc(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = a1;
  v4 = Function_2245f44(4, 380);
  *(uint *)(v4 + 12) = v2;
  *(uint *)(v4 + 20) = v3;
  return AddTaskToTaskList1((int)Function_2245d10, v4, 0x85u);
}

//----- (02245CF0) --------------------------------------------------------
int __fastcall Function_6_2245cf0(int a1)
{
  return *(uint *)(Function_201ced0(a1) + 4);
}

//----- (02245CFC) --------------------------------------------------------
int __fastcall Function_6_2245cfc(int a1)
{
  int *v1;
  int v2;

  v1 = (int *)a1;
  v2 = Function_201ced0(a1);
  free(v2);
  return Call_RemoveTaskFromTaskList(v1);
}

//----- (02245D10) --------------------------------------------------------
int __fastcall Function_2245d10(int a1, uint *a2)
{
  uint *v2;
  int result;
  int v4;

  v2 = a2;
  while ( ((int (__fastcall *)(uint *))*(&off_2249270 + *v2))(v2) == 1 )
    ;
  result = v2[4];
  if ( result )
  {
    v4 = v2[92];
    if ( v4 )
      Function_20713d0(v4);
    result = v2[8];
    if ( result )
      result = Function_20219f8(result);
  }
  return result;
}

//----- (02245D48) --------------------------------------------------------
int __fastcall Function_2245d48(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_2243f74(a1[5], 1);
  ++*v1;
  return 0;
}

//----- (02245D60) --------------------------------------------------------
int __fastcall Function_2245d60(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int *v5;

  v1 = a1;
  *(uint *)(a1 + 368) = Function_20711ec(4u, 32);
  v2 = Function_2243258(v1 + 24, 32, 2, 2, 2, 1, 4, 3, 4, 2);
  v5 = Function_2243f20(v2, v3, v4);
  Function_22434b0((uchar *)(v1 + 24), (int)v5, 7u, 0);
  Function_2243588((uchar *)(v1 + 24), (int)v5, 3u, 0);
  Function_2243660((uchar *)(v1 + 24), (int)v5, 8u, 0);
  Function_2243520((uchar *)(v1 + 24), 0);
  Function_22435f8(v1 + 24, 0);
  Function_2243554((uchar *)(v1 + 24), 0);
  Function_224362c(v1 + 24, 0);
  if ( *(uint *)(v1 + 12) )
  {
    Function_22434b0((uchar *)(v1 + 24), (int)v5, 0x10u, 2);
    Function_2243588((uchar *)(v1 + 24), (int)v5, 4u, 1);
    Function_2243660((uchar *)(v1 + 24), (int)v5, 0x11u, 2);
    Function_22436d0((uchar *)(v1 + 24), (int)v5, 0x12u, 1);
    Function_2243520((uchar *)(v1 + 24), 2);
    Function_22435f8(v1 + 24, 1);
    Function_2243554((uchar *)(v1 + 24), 2);
    Function_224362c(v1 + 24, 1);
  }
  else
  {
    Function_22434b0((uchar *)(v1 + 24), (int)v5, 0xDu, 2);
    Function_2243660((uchar *)(v1 + 24), (int)v5, 0xEu, 2);
    Function_22436d0((uchar *)(v1 + 24), (int)v5, 0xFu, 1);
    Function_2243520((uchar *)(v1 + 24), 2);
    Function_2243554((uchar *)(v1 + 24), 2);
  }
  Call_FS_CloseFile(v5);
  ++*(uint *)v1;
  return 0;
}

//----- (02245EA4) --------------------------------------------------------
int __fastcall Function_2245ea4(uint *a1, int a2, int a3, int a4)
{
  uint *v4;

  v4 = a1;
  a1[91] = Function_2243848((int)(a1 + 6), a1[3], a3, a4);
  Function_2021cac(v4[91], 1);
  v4[93] = Function_2243888(v4[5], v4[92], (int)(v4 + 6), v4[91]);
  Function_2243950(v4[93]);
  ++*v4;
  v4[4] = 1;
  return 0;
}

//----- (02245EEC) --------------------------------------------------------
int __fastcall Function_2245eec(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( Function_22438bc(a1[93]) == 2 )
  {
    Function_22438ec(v1[93]);
    ++*v1;
  }
  return 0;
}

//----- (02245F18) --------------------------------------------------------
int __fastcall Function_2245f18(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_207121c(*(uint *)(a1 + 368));
  Function_224339c((uchar *)(v1 + 24));
  result = 0;
  *(uint *)(v1 + 16) = 0;
  *(uint *)(v1 + 4) = 1;
  ++*(uint *)v1;
  return result;
}

//----- (02245F40) --------------------------------------------------------
int Function_2245f40()
{
  return 0;
}

//----- (02245F44) --------------------------------------------------------
int *__fastcall Function_2245f44(uint a1, int a2)
{
  uint v2;
  int *v3;

  v2 = a2;
  v3 = (int *)malloc2(a1, a2);
  if ( !v3 )
    ErrorHandler();
  Call_FillMemWithValue(v3, 0, v2);
  return v3;
}

//----- (02245F64) --------------------------------------------------------
uint *__fastcall Function_2245f64(int a1, int a2)
{
  int v2;
  uint *v3;

  v2 = a2;
  v3 = (uint *)Function_205eb3c(*(uint *)(*(uint *)(a1 + 96) + 60));
  UnsetSpriteFlag_Lock(v3);
  return Function_2062d64(v3, v2);
}

//----- (02245F80) --------------------------------------------------------
int __fastcall Function_2245f80(int a1, uint *a2)
{
  uint *v2;
  int *v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = (int *)Function_20715bc(a1);
  v4 = *v3;
  v5 = v3[1];
  *v2 = v4;
  v2[1] = v5;
  return 1;
}

//----- (02245F94) --------------------------------------------------------
uint __fastcall Function_2245f94(int a1, uint *a2)
{
  uint *v2;
  uint v3;
  uint *v4;
  int v5;
  int v6;

  v2 = a2;
  v3 = *a2;
  Function_2021d28();
  v4 = (uint *)v2[1];
  v6 = *(uint *)(v5 + 4);
  if ( v4[7] )
    return Function_2021cac(*v2, 1);
  if ( v6 - 0x8000 < v4[19] || v6 + 0x8000 > v4[20] )
    return Function_2021cac(*v2, 0);
  return Function_2021cac(*v2, 1);
}

//----- (02245FDC) --------------------------------------------------------
int *__fastcall Function_2245fdc(int a1, int a2, int a3, int a4)
{
  int v4;
  int *result;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v11 = a4;
  v8 = 0;
  v4 = a1;
  v9 = 0;
  v10 = 0;
  v6 = *(uint *)(a1 + 484);
  v7 = a1;
  result = Function_2071330(*(uint *)(a1 + 480), dword_2249234, &v8, 0, (int)&v6, 0x86u);
  *(uint *)(v4 + 496) = result;
  return result;
}

//----- (02246018) --------------------------------------------------------
int *__fastcall Function_2246018(int a1)
{
  int v1;
  int *result;

  v1 = a1;
  result = *(int **)(a1 + 496);
  if ( result )
  {
    Function_207136c(result);
    result = (int *)496;
    *(uint *)(v1 + 496) = 0;
  }
  return result;
}

//----- (02246034) --------------------------------------------------------
uint __fastcall Function_6_2246034(int a1, int a2)
{
  int v2;
  int *v3;
  uint v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint result;
  uint v11;
  uint v12;
  int v13;
  int v14;
  int v15;

  v2 = a1;
  v13 = a2;
  v3 = GetAdrOfPkmnInParty(*(uint **)(a2 + 8), 0);
  v14 = LoadVariableAreaAdress_19(*(uint *)(v2 + 12));
  v4 = GetPkmnData(v3, 5u, 0);
  v15 = Function_2246148(v14, v4);
  if ( v15 )
  {
    v5 = (ushort)GetPkmnData(v3, 0xA3u, 0);
    v6 = (uchar)GetPkmnData(v3, 0xA0u, 0);
    v7 = *(uint *)(v13 + 20);
    if ( v7 != 1 || v5 )
    {
      if ( v7 == 4 )
      {
        Function_202d914(&v15);
        v9 = LoadFlagAdress(*(uint *)(v2 + 12));
        Function_206b688(v9, (ushort)v4, 1);
      }
      else
      {
        Function_202d980(v15, 5u, v5);
        Function_202d980(v15, 7u, v6);
      }
    }
    else
    {
      Function_202d914(&v15);
      v8 = LoadFlagAdress(*(uint *)(v2 + 12));
      Function_206b688(v8, (ushort)v4, 2);
    }
    result = Function_2246110(v14, **(uint **)(v2 + 28));
  }
  else
  {
    v11 = PRNG();
    result = s32_div_f(v11, 656) << 16;
    v12 = result >> 16;
    if ( result >> 16 >= 0x64 )
      result = ErrorHandler();
    if ( v12 < 0x1E )
      result = Function_2246110(v14, **(uint **)(v2 + 28));
  }
  return result;
}

//----- (02246110) --------------------------------------------------------
int __fastcall Function_2246110(int a1, int a2)
{
  int v2;
  int v3;
  uint v4;
  int v5;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    if ( Function_202d8f8(v2, v4) )
    {
      v5 = Function_202d8c4(v2, v4);
      if ( v3 == Function_206c3c8(v5) )
        Function_206c33c(v2, v4);
    }
    result = (v4 + 1) << 24;
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 < 6 );
  return result;
}

//----- (02246148) --------------------------------------------------------
int __fastcall Function_2246148(int a1, int a2)
{
  int v2;
  int v3;
  uint v4;
  int v5;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    if ( Function_202d8f8(v2, v4) )
    {
      v5 = Function_202d924(v2, v4);
      if ( v3 == Function_202d93c(v5, 4u) )
        return v5;
    }
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 < 6 );
  return 0;
}

//----- (02246184) --------------------------------------------------------
uint **__fastcall Function_6_2246184(uint a1, uint a2, int a3, int a4)
{
  int v4;
  uint v5;
  uint **v6;
  uint **v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  ushort v13[128];
  int v14;

  v14 = a4;
  v4 = a2;
  v5 = a1;
  if ( a2 >= 4 )
    ErrorHandler();
  v6 = (uint **)malloc(v5, 20);
  v7 = v6;
  v8 = 20;
  do
  {
    *(uchar *)v7 = 0;
    v7 = (uint **)((char *)v7 + 1);
    --v8;
  }
  while ( v8 );
  *v6 = Function_2006fe8_LoadFromNARC_UncompressLZ8(115, v4, 0, v5, 0);
  v6[4] = (uint *)v5;
  v6[3] = (uint *)v4;
  v6[1] = (uint *)AllocPkmnData(v5);
  v9 = AllocTrainerData(v5);
  v6[2] = (uint *)v9;
  InitTrainerData(v9);
  v10 = Function_22462e4(v5, v4 + 4);
  Function_2023df0(v10, v13, 0x80u);
  Function_20237bc_FreeMsg(v10, v11);
  Function_2025ec0(v6[2], v13);
  SetGender((int)v6[2], (*v6)[16]);
  return v6;
}

//----- (02246204) --------------------------------------------------------
uint __fastcall Function_6_2246204(int *a1)
{
  int v1;

  v1 = (int)a1;
  free(*a1);
  free(*(uint *)(v1 + 4));
  free(*(uint *)(v1 + 8));
  return free(v1);
}

//----- (02246224) --------------------------------------------------------
int __fastcall Function_6_2246224(int a1)
{
  return **(uint **)a1;
}

//----- (0224622C) --------------------------------------------------------
int __fastcall Function_6_224622c(int a1)
{
  return *(uint *)(*(uint *)a1 + 76);
}

//----- (02246234) --------------------------------------------------------
uint __fastcall Function_6_2246234(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  uint *v6;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = (uint *)LoadPokePartyAdress(*(uint *)(a1 + 12));
  Function_207a128(v6, v5, *(int **)(v4 + 4));
  return Function_202f180(*(uint *)(v3 + 12), *(int **)(v4 + 4));
}

//----- (02246254) --------------------------------------------------------
int __fastcall Function_6_2246254(int a1, int a2, int a3, uint *a4, int *a5, int *a6)
{
  int v6;
  int v7;
  int v8;
  uint *v9;
  uint *v10;
  int *v11;
  int *v12;
  uint v13;
  int v14;
  int v15;
  uint v16;
  int result;

  v6 = a1;
  v7 = a3;
  v8 = a2;
  v9 = a4;
  v10 = (uint *)LoadPokePartyAdress(*(uint *)(a1 + 12));
  v11 = GetAdrOfPkmnInParty(v10, v7);
  v12 = v11;
  v13 = GetPkmnData(v11, 0xA1u, 0);
  Function_224630c(
    *(uint *)(v8 + 4),
    *(uint *)v8,
    v13,
    *(uint *)(v8 + 12),
    *(uint *)(v8 + 16),
    **(uint **)(v6 + 28));
  Function_20775ec(v12, a5);
  Function_20775ec(*(int **)(v8 + 4), a6);
  Function_2076b10_Dummy();
  *v9 = v14;
  Function_2076b10_Dummy();
  v9[1] = v15;
  v9[2] = *(uint *)(v8 + 8);
  v9[4] = 1;
  v9[5] = LoadPlayerDataAdress(*(uint *)(v6 + 12));
  v16 = Function_2055ba8(v6);
  if ( v16 > 1 )
  {
    if ( v16 == 2 )
    {
      result = 1;
      v9[3] = 1;
    }
    else
    {
      result = 2;
      v9[3] = 2;
    }
  }
  else
  {
    result = 0;
    v9[3] = 0;
  }
  return result;
}

//----- (022462E4) --------------------------------------------------------
ushort *__fastcall Function_22462e4(uint a1, uint a2)
{
  uint v2;
  ushort **v3;
  ushort *v4;

  v2 = a2;
  v3 = (ushort **)LoadFromMsgNARC(0, 26, 370, a1);
  v4 = Function_200b1ec_CallMsgDecrypt(v3, v2);
  Function_200b190((ushort *)v3);
  return v4;
}

//----- (0224630C) --------------------------------------------------------
uint __fastcall Function_224630c(int *a1, int a2, int a3, uint a4, uint a5, uint a6)
{
  uint v6;
  ushort *v7;
  int *v8;
  ushort *v9;
  int v10;
  ushort *v11;
  int v12;
  int v13;
  uint result;
  ushort v15[12];

  v6 = a4;
  v7 = (ushort *)a2;
  v8 = a1;
  InitPkmnData(a1, *(uint *)a2, a3, 32, 1, *(uint *)(a2 + 56), 1, *(uint *)(a2 + 32));
  v9 = Function_22462e4(a5, v6);
  SetPkmnData((int)v8, 119, v9);
  Function_20237bc_FreeMsg((int)v9, v10);
  LOBYTE(v15[0]) = 1;
  SetPkmnData((int)v8, 77, v15);
  SetPkmnData((int)v8, 70, v7 + 2);
  SetPkmnData((int)v8, 71, v7 + 4);
  SetPkmnData((int)v8, 72, v7 + 6);
  SetPkmnData((int)v8, 73, v7 + 8);
  SetPkmnData((int)v8, 74, v7 + 10);
  SetPkmnData((int)v8, 75, v7 + 12);
  SetPkmnData((int)v8, 19, v7 + 18);
  SetPkmnData((int)v8, 20, v7 + 20);
  SetPkmnData((int)v8, 21, v7 + 22);
  SetPkmnData((int)v8, 22, v7 + 24);
  SetPkmnData((int)v8, 23, v7 + 26);
  SetPkmnData((int)v8, 6, v7 + 30);
  v11 = Function_22462e4(a5, v6 + 4);
  SetPkmnData((int)v8, 145, v11);
  Function_20237bc_FreeMsg((int)v11, v12);
  SetPkmnData((int)v8, 157, v7 + 32);
  SetPkmnData((int)v8, 12, v7 + 36);
  v13 = GetMapName(a6);
  Function_209304c((int)v8, 0, 1u, v13, a5);
  Function_207418c(v8);
  result = Call_CheckIfShinyPkmn_2((int)v8);
  if ( result )
    result = ErrorHandler();
  return result;
}

//----- (02246444) --------------------------------------------------------
ushort *__fastcall Function_2246444(ushort *a1)
{
  return MI_CpuFill8(a1, 0, 0x18u);
}

//----- (02246450) --------------------------------------------------------
int __fastcall Function_2246450(int result, char a2)
{
  *(uchar *)(result + 3) = a2;
  return result;
}

//----- (02246454) --------------------------------------------------------
int __fastcall Function_2246454(int result, char a2)
{
  *(uchar *)(result + 2) = a2;
  return result;
}

//----- (02246458) --------------------------------------------------------
int __fastcall Function_2246458(int result, char a2)
{
  *(uchar *)(result + 1) = a2;
  return result;
}

//----- (0224645C) --------------------------------------------------------
ushort *__fastcall Function_224645c(int a1, short *a2)
{
  return Function_20021d0((ushort *)(a1 + 4), a2, 8u);
}

//----- (02246468) --------------------------------------------------------
int __fastcall Function_2246468(int a1, uchar *a2)
{
  uchar *v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a1;
  result = Function_202e55c(a2);
  *(uchar *)v3 = result;
  *(uint *)(v3 + 20) = v2;
  return result;
}

//----- (0224647C) --------------------------------------------------------
int __fastcall Function_224647c(int a1)
{
  int result;

  result = *(uint *)(a1 + 20);
  if ( result )
    result = Function_202e560(result);
  return result;
}

//----- (0224648C) --------------------------------------------------------
int __fastcall Function_224648c(int a1)
{
  return *(uchar *)(a1 + 3);
}

//----- (02246490) --------------------------------------------------------
int __fastcall Function_2246490(int a1)
{
  return *(uchar *)(a1 + 2);
}

//----- (02246494) --------------------------------------------------------
int __fastcall Function_2246494(int a1)
{
  return a1 + 4;
}

//----- (02246498) --------------------------------------------------------
int __fastcall Function_6_2246498(int a1)
{
  return Function_202e574(*(uint *)(a1 + 20));
}

//----- (022464A4) --------------------------------------------------------
int __fastcall Function_22464a4(uchar *a1)
{
  return *a1;
}

//----- (022464A8) --------------------------------------------------------
ushort *__fastcall Function_22464a8(int a1, int a2)
{
  int v2;
  ushort *v3;
  short *v4;
  char v5;
  char v6;
  uchar *v7;

  v2 = a2;
  v3 = (ushort *)malloc(4u, 24);
  Function_2246444(v3);
  v4 = (short *)Function_202e4c8(v2);
  Function_224645c((int)v3, v4);
  v5 = Function_202e4cc(v2);
  Function_2246454((int)v3, v5);
  v6 = Function_202e4d0(v2);
  Function_2246458((int)v3, v6);
  v7 = (uchar *)Function_202e4d4(v2);
  Function_2246468((int)v3, v7);
  return v3;
}

//----- (022464F8) --------------------------------------------------------
ushort *__fastcall Function_22464f8(int a1)
{
  int v1;
  ushort *v2;
  short *v3;
  char v4;
  uchar *v5;

  v1 = LoadTrainerDataAdress(*(uint *)(a1 + 12));
  v2 = (ushort *)malloc(4u, 24);
  Function_2246444(v2);
  Function_2025ef0_Dummy();
  Function_224645c((int)v2, v3);
  v4 = GetGender(v1);
  Function_2246450((int)v2, v4);
  Function_2246454((int)v2, 2);
  Function_2246458((int)v2, 12);
  Function_202e4d8();
  Function_2246468((int)v2, v5);
  return v2;
}

//----- (02246550) --------------------------------------------------------
int __fastcall Function_2246550(int a1, char a2)
{
  char v2;
  int v3;
  int v4;
  short *v5;
  char v6;

  v2 = a2;
  v3 = LoadTrainerDataAdress(*(uint *)(a1 + 12));
  v4 = malloc(4u, 24);
  Function_2246444((ushort *)v4);
  *(uchar *)v4 = v2;
  Function_2025ef0_Dummy();
  Function_224645c(v4, v5);
  v6 = GetGender(v3);
  Function_2246450(v4, v6);
  Function_2246454(v4, 2);
  Function_2246458(v4, 12);
  *(uint *)(v4 + 20) = 0;
  return v4;
}

//----- (022465A0) --------------------------------------------------------
ushort *__fastcall Function_22465a0(int a1, uint a2, int a3)
{
  int v3;
  uint v4;
  int v5;
  int v6;
  ushort *result;
  int v8;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_202440c(*(uint *)(a1 + 12));
  if ( v4 - 4 <= 1 )
    return (ushort *)Function_2246550(v3, v5);
  if ( Function_202e7c0(v5) )
  {
    Function_202e768(v6, v4, v5);
    result = Function_22464f8(v3);
  }
  else
  {
    v8 = Function_202e794(v6, v4, v5);
    result = Function_22464a8(v3, v8);
  }
  return result;
}

//----- (022465F4) --------------------------------------------------------
uint __fastcall Function_22465f4(int a1)
{
  return free(a1);
}

//----- (022465FC) --------------------------------------------------------
int __fastcall Function_6_22465fc(int a1)
{
  int v1;

  v1 = Function_202440c(*(uint *)(a1 + 12));
  return Function_202e374(v1, 1);
}

//----- (0224660C) --------------------------------------------------------
int __fastcall Function_6_224660c(int a1)
{
  int v1;
  int v3;

  v1 = Function_202440c(*(uint *)(a1 + 12));
  if ( Function_202e380(v1) == 1 )
    return 0;
  v3 = Function_202e3dc(v1);
  if ( !v3 )
    return 2;
  if ( v3 == 4 )
    return 1;
  return 3;
}

//----- (0224663C) --------------------------------------------------------
uint __fastcall Function_224663c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint v10;
  int v11;
  uint v12;
  char v14[8];
  int v15;

  v15 = a4;
  v4 = a1;
  v5 = Function_2055bd0(a1);
  s32_div_f(v5 + 6, 7);
  v7 = v6;
  v8 = Function_2055bdc(v4);
  v9 = Function_2055be8(v4);
  v10 = s32_div_f(v9, 15);
  s32_div_f(v8 + 19, 24);
  LoadFromNARC_3((int)v14, 126, 0, 7 * (v10 + 4 * v11), 7);
  v12 = (uchar)v14[v7];
  if ( !v14[v7] || v12 >= 0xA )
    ErrorHandler();
  return v12;
}

//----- (0224669C) --------------------------------------------------------
int __fastcall Function_224669c(int a1)
{
  uchar v2;

  LoadFromNARC_3((int)&v2, 126, 1, 12 * (a1 - 1), 1);
  if ( v2 >= 6u )
    ErrorHandler();
  return v2;
}

//----- (022466C8) --------------------------------------------------------
int __fastcall Function_22466c8(int a1, int a2)
{
  return LoadFromNARC_3(a2, 126, 1, 12 * (a1 - 1) + 1, 11);
}

//----- (022466E8) --------------------------------------------------------
int Function_22466e8()
{
  return 1;
}

//----- (022466EC) --------------------------------------------------------
ushort *__fastcall Function_22466ec(int a1, int a2, ushort *a3)
{
  int v3;
  ushort *result;
  int v5;
  int v6;
  char *v7;
  ushort *v8;
  char v9;

  v3 = a1;
  v8 = a3;
  Function_202440c(*(uint *)(a2 + 12));
  Function_22466c8(v3, (int)&v9);
  result = MI_CpuFill8(v8, 0, 0xBu);
  v5 = 0;
  v6 = 0;
  v7 = &v9;
  do
  {
    if ( !*v7 )
      break;
    result = (ushort *)Function_22466e8();
    if ( result == (ushort *)1 )
    {
      result = v8;
      *((uchar *)v8 + v6++) = *v7;
    }
    ++v5;
    ++v7;
  }
  while ( v5 < 11 );
  return result;
}

//----- (0224673C) --------------------------------------------------------
int __fastcall Function_224673c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uchar *v5;
  int v7;
  int v8;
  uchar v9;

  v2 = a2;
  MI_CpuFill8(&v9, 0, 0xBu);
  v3 = 0;
  v4 = 0;
  v5 = &v9;
  do
  {
    if ( *(uchar *)(v2 + v3) )
    {
      *v5++ = *(uchar *)(v2 + v3);
      ++v4;
    }
    ++v3;
  }
  while ( v3 < 11 );
  if ( !v4 )
    return 0;
  if ( v4 == 1 )
    return v9;
  v7 = Function_201d35c();
  u32_div_f(v7, v4);
  return *(&v9 + v8);
}

//----- (0224678C) --------------------------------------------------------
int __fastcall Function_224678c(int a1, uint a2, char a3, int a4, int a5, uchar *a6)
{
  char v6;

  v6 = a3;
  if ( a2 != 4 && a2 != 5 )
    return Function_202e614(a1, a2, a3, a4, a5, (int)a6);
  if ( a5 )
    return 0;
  if ( !a4 )
    return 0;
  if ( Function_202e3c4(a1, a3) )
    return 0;
  *a6 = v6;
  return 1;
}

//----- (022467DC) --------------------------------------------------------
int __fastcall Function_22467dc(uint a1, int a2, int a3, int a4, char *a5, int a6)
{
  char *v6;
  int i;
  int v8;
  char *v9;
  uint v11;
  int v12;
  int v13;
  int v14;
  ushort v15[8];
  int v16;

  v16 = a4;
  v11 = a1;
  v6 = a5;
  v12 = a3;
  v13 = a4;
  v14 = Function_202440c(*(uint *)(a2 + 12));
  for ( i = 0; *v6; ++v6 )
  {
    MI_CpuFill8(v15, 0, 0x10u);
    if ( Function_224678c(v14, v11, *v6, v12, v13, v15) )
    {
      v8 = 0;
      v9 = (char *)v15;
      while ( *v9 && v8 < 16 )
      {
        *(uchar *)(a6 + i++) = *v9++;
        ++v8;
      }
    }
  }
  return i;
}

//----- (02246844) --------------------------------------------------------
uint __fastcall Function_2246844(uint result, uint a2, uchar *a3)
{
  int v3;
  uint v4;
  uchar *v5;
  int i;
  ushort *v7;

  v3 = result;
  v4 = a2;
  v5 = a3;
  for ( i = 0; *v5 && i < 16; ++i )
  {
    v7 = Function_22465a0(v3, v4, (uchar)*v5);
    if ( !Function_206cd2c(v4, v3, (int)v7) )
      *v5 = 0;
    result = Function_22465f4((int)v7);
    ++v5;
  }
  return result;
}

//----- (02246884) --------------------------------------------------------
int __fastcall Function_2246884(int a1, uchar *a2)
{
  uchar *v2;
  int result;
  int v4;
  int i;

  v2 = a2;
  result = Function_202440c(*(uint *)(a1 + 12));
  v4 = (uchar)*v2;
  for ( i = result; *v2; v4 = (uchar)*v2 )
  {
    result = Function_202e3c4(i, v4);
    if ( result )
      *v2 = 0;
    ++v2;
  }
  return result;
}

//----- (022468B0) --------------------------------------------------------
int __fastcall Function_6_22468b0(int a1, int a2, int a3, int a4)
{
  uint v4;
  int v5;
  int v6;
  int v7;
  int v8;
  ushort v10[8];
  char v11;
  int v12;

  v12 = a4;
  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = Function_224663c(a1, a2, a3, a4);
  v8 = Function_224669c(v7);
  MI_CpuFill8(&v11, 0, 0xBu);
  MI_CpuFill8(v10, 0, 0x10u);
  Function_22466ec(v7, v4, &v11);
  if ( !Function_22467dc(v8, v4, v5, v6, &v11, (int)v10) )
    return 0;
  Function_2246844(v4, v8, v10);
  Function_2246884(v4, v10);
  return Function_224673c(v4, (int)v10);
}

//----- (02246920) --------------------------------------------------------
int __fastcall Function_6_2246920(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  int v8;

  v4 = a1;
  result = Function_6_22468b0(a1, 0, 0, a4);
  if ( !result )
  {
    result = Function_6_22468b0(v4, 1, 0, v6);
    if ( !result )
    {
      result = Function_6_22468b0(v4, 0, 1, v7);
      if ( !result )
        result = Function_6_22468b0(v4, 1, 1, v8);
    }
  }
  return result;
}

//----- (02246958) --------------------------------------------------------
char *__fastcall Function_2246958(int a1, int a2, int a3, int a4)
{
  uint v4;

  v4 = Function_224663c(a1, a2, a3, a4);
  if ( v4 > 9 )
    ErrorHandler();
  return (char *)dword_2249470 + 7 * (v4 - 1);
}

//----- (02246978) --------------------------------------------------------
int __fastcall Function_6_2246978(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  char *v6;
  uchar *v7;
  int v8;
  int result;

  v1 = a1;
  v2 = Function_202440c(*(uint *)(a1 + 12));
  v6 = Function_2246958(v1, v3, v4, v5);
  v7 = (uchar *)v6;
  switch ( (uchar)v6 )
  {
    case 0:
      goto LABEL_3;
    case 1:
      if ( Function_202e3dc(v2) )
        result = v7[4];
      else
        result = v7[3];
      break;
    case 2:
      result = (uchar)v6[5];
      break;
    case 3:
      result = (uchar)v6[6];
      break;
    default:
      ErrorHandler();
LABEL_3:
      v8 = Function_2013960();
      if ( v8 )
      {
        if ( v8 == 1 )
          result = v7[1];
        else
          result = v7[2];
      }
      else
      {
        result = *v7;
      }
      break;
  }
  return result;
}

//----- (022469E0) --------------------------------------------------------
int __fastcall Function_6_22469e0(int a1, int a2, int a3, int a4, ushort *a5)
{
  int v5;
  int v6;
  int v7;
  ushort *v8;
  int v9;
  int v10;
  int v11;
  ushort *v12;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = (ushort *)a4;
  v9 = Function_224663c(a1, a2, a3, a4);
  v10 = Function_224669c(v9);
  v11 = Function_202440c(*(uint *)(v5 + 12));
  Function_202e384(v11, v7);
  v12 = Function_22465a0(v5, v10, v7);
  Function_224647c((int)v12);
  *a5 = Function_206cd00(v10, v5, v6, (int)v12, v8);
  Function_22465f4((int)v12);
  return 1;
}

//----- (02246A30) --------------------------------------------------------
int Function_2246a30()
{
  return 1;
}

//----- (02246A34) --------------------------------------------------------
int Function_2246a34()
{
  return 0;
}

//----- (02246A38) --------------------------------------------------------
int __fastcall Function_2246a38(int a1)
{
  int v1;

  v1 = LoadFlagAdress(*(uint *)(a1 + 12));
  return Function_206af3c(v1, 2, 7u);
}

//----- (02246A4C) --------------------------------------------------------
int __fastcall Function_2246a4c(int a1)
{
  int v1;

  v1 = LoadFlagAdress(*(uint *)(a1 + 12));
  return Function_206af3c(v1, 2, 2u);
}

//----- (02246A60) --------------------------------------------------------
int __fastcall Function_2246a60(int a1)
{
  int v1;

  v1 = LoadFlagAdress(*(uint *)(a1 + 12));
  return Function_206af3c(v1, 2, 9u);
}

//----- (02246A74) --------------------------------------------------------
int __fastcall Function_2246a74(int a1)
{
  int v1;

  v1 = LoadFlagAdress(*(uint *)(a1 + 12));
  return Function_206af3c(v1, 2, 0xAu);
}

//----- (02246A88) --------------------------------------------------------
int __fastcall Function_2246a88(int a1)
{
  int v1;

  v1 = LoadFlagAdress(*(uint *)(a1 + 12));
  return Function_206af3c(v1, 2, 0xBu);
}

//----- (02246A9C) --------------------------------------------------------
int __fastcall Function_2246a9c(int a1)
{
  int v1;

  v1 = LoadFlagAdress(*(uint *)(a1 + 12));
  return Function_206af3c(v1, 2, 0x11u);
}

//----- (02246AB0) --------------------------------------------------------
BOOL __fastcall Function_2246ab0(int a1)
{
  int v1;

  v1 = LoadTrainerDataAdress(*(uint *)(a1 + 12));
  return CountBadges(v1) >= 5;
}

//----- (02246AC8) --------------------------------------------------------
BOOL __fastcall Function_2246ac8(int a1)
{
  uint *v1;

  v1 = (uint *)LoadPokedexDataAdress(*(uint *)(a1 + 12));
  return IsSinPokedexComplete(v1);
}

//----- (02246AD8) --------------------------------------------------------
int __fastcall Function_2246ad8(int a1)
{
  uint *v1;

  v1 = (uint *)LoadPokedexDataAdress(*(uint *)(a1 + 12));
  return CheckActPokedex(v1);
}

//----- (02246AE8) --------------------------------------------------------
int __fastcall Function_2246ae8(int a1)
{
  int v1;

  v1 = LoadFlagAdress(*(uint *)(a1 + 12));
  return Function_206a954(v1);
}

//----- (02246AF8) --------------------------------------------------------
int __fastcall Function_2246af8(int a1, int a2)
{
  int *v2;
  int v3;
  uint v4;
  char *v5;
  int v6;
  uint v7;
  char *v8;
  int result;
  int v10;
  uint v11[1];

  v2 = &dword_22494B0;
  v10 = a1;
  v3 = a2;
  v4 = 0;
  v5 = (char *)v11;
  do
  {
    v6 = ((int (__fastcall *)(int))*v2)(v10);
    ++v4;
    ++v2;
    *(uint *)v5 = v6;
    v5 += 4;
  }
  while ( v4 < 0xC );
  v7 = 0;
  v8 = &byte_2249878;
  result = 0;
  do
  {
    if ( v11[(uchar)*v8] )
      *(uchar *)(v3 + result++) = v7;
    ++v7;
    ++v8;
  }
  while ( v7 < 0x23 );
  return result;
}

//----- (02246B40) --------------------------------------------------------
int __fastcall Function_6_2246b40(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v7;
  int v8;
  char v9[36];
  int v10;

  v10 = a4;
  v4 = a1;
  MI_CpuFill8(v9, 0, 0x24u);
  v5 = Function_2246af8(v4, (int)v9);
  if ( !v5 )
    return 0;
  v7 = Function_201d35c();
  u32_div_f(v7, v5);
  return (uchar)v9[v8];
}

//----- (02246B74) --------------------------------------------------------
int __fastcall Function_2246b74(int result, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  char v9;
  uint v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = result;
  if ( !a2 )
  {
    if ( result )
    {
      Function_20138a4(&v9);
      if ( !v10 )
        ErrorHandler();
      if ( v10 > 0xC )
        ErrorHandler();
      v5 = 2 * (v10 - 1);
      v6 = dword_224954C[v5];
      v7 = &dword_224954C[v5];
      v8 = 0;
      if ( v6 <= 0 )
      {
LABEL_13:
        result = v4;
      }
      else
      {
        while ( v11 != (((int)*(ushort *)(v7[1] + 2 * v8) >> 8) & 0xFF) )
        {
          v8 = (v8 + 1) & 0xFF;
          if ( v8 >= v6 )
            goto LABEL_13;
        }
        result = v4 + *(int *)((char *)&dword_2249538 + (4 * *(ushort *)(v7[1] + 2 * v8) & 0x3FF));
        if ( result < 0 )
          result = 1;
      }
    }
    else
    {
      result = 0;
    }
  }
  return result;
}

//----- (02246BF4) --------------------------------------------------------
int __fastcall Function_2246bf4(int a1, int a2)
{
  int v2;
  int v3;
  uchar *v4;

  v2 = a2;
  v3 = LoadVariableAreaAdress_19(a1);
  v4 = (uchar *)Function_202d9cc(v3);
  if ( !*v4 )
    return 0;
  if ( --*v4 )
    return 0;
  Function_203e880(v2, 0x7F0u, 0);
  return 1;
}

//----- (02246C24) --------------------------------------------------------
uint *__fastcall Function_6_2246c24(int a1, char a2)
{
  char v2;
  int v3;
  uchar *v4;
  uint *v5;
  int v6;
  int v7;
  uint v9;
  int v10;
  char v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v2 = a2;
  v3 = a1;
  if ( !Function_20552b4(a1, 123, &v10, (int)&v9) )
    return (uint *)ErrorHandler();
  v4 = (uchar *)malloc2(4u, 24);
  v5 = v4;
  v4[12] = v2;
  v4[13] = 0;
  v4[14] = 0;
  v4[15] = 0;
  v6 = Function_2039e10(*(uchar **)(v3 + 44));
  Function_20553a4(v9, v6, &v14);
  ((void (__fastcall *)(char *, int))dword_21E1894[0])(&v11, v10);
  v7 = v12;
  *v5 = *(uint *)&v11;
  v5[1] = v7;
  v5[2] = v13;
  *v5 += v14;
  v5[2] += v15;
  return Function_2050944(*(uint *)(v3 + 16), (int)Function_2246c9c, (int)v5);
}

//----- (02246C9C) --------------------------------------------------------
int __fastcall Function_2246c9c(int a1)
{
  int v1;
  uint *v2;
  int v3;
  uchar *v4;
  uint v5;
  int *v6;
  int *v7;
  int v8;
  uint *v9;
  int v10;
  int v11;
  uint *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  uint v19;
  uint v20;
  int result;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;

  v1 = a1;
  v2 = (uint *)LoadOverWorldDataAdress(a1);
  v3 = GetUnknownStruct01_c(v1);
  v4 = (uchar *)v3;
  v5 = *(uchar *)(v3 + 15);
  if ( v5 <= 5 )
    JUMPOUT(__CS__, *((short *)&off_2246CC4 + v5) + 35941574);
  switch ( (uchar)v5 )
  {
    case 0:
      v6 = (int *)((int (__fastcall *)(int, uint))dword_21EF9E8[0])(517, v2[12]);
      v7 = (int *)((int (__fastcall *)(int, uint))dword_21EF9E8[0])(124, v2[12]);
      v8 = Function_20b3c0c_GetAdrOfDataPart(*v6);
      if ( v8
        && (v8 == -8 || !*(uchar *)(v8 + 9) ? (v9 = 0) : (v9 = (uint *)(v8 + 8 + *(ushort *)(v8 + 14) + 4)),
            v9) )
      {
        v10 = v8 + *v9;
      }
      else
      {
        v10 = 0;
      }
      v11 = Function_20b3c0c_GetAdrOfDataPart(*v7);
      if ( v11
        && (v11 == -8 || !*(uchar *)(v11 + 9) ? (v12 = 0) : (v12 = (uint *)(v11
                                                                            + 8
                                                                            + *(ushort *)(v11 + 14)
                                                                            + 4)),
            v12) )
      {
        v13 = v11 + *v12;
      }
      else
      {
        v13 = 0;
      }
      v14 = ((int (__fastcall *)(uint))dword_21EFAA0[0])(v2[12]);
      ((void (__fastcall *)(uint, uint, int, int, uint, int, int, int, int, uint))dword_21D41C8[0])(
        v2[20],
        v2[21],
        16,
        517,
        0,
        v10,
        v14,
        1,
        1,
        0);
      if ( !Function_20552b4((int)v2, 124, &v22, 0) )
        ErrorHandler();
      v15 = ((int (__fastcall *)(int))dword_21E18BC[0])(v22);
      v16 = ((int (__fastcall *)(uint))dword_21EFAA0[0])(v2[12]);
      ((void (__fastcall *)(uint, uint, int, int, int, int, int, int, int, uint))dword_21D41C8[0])(
        v2[20],
        v2[21],
        32,
        124,
        v15,
        v13,
        v16,
        1,
        1,
        0);
      ++v4[15];
      goto LABEL_37;
    case 1:
      v23 = 0;
      v24 = 0;
      v25 = 0;
      v26 = *(uint *)v3 + dword_224989C[3 * *(uchar *)(v3 + 13)];
      v27 = *(uint *)(v3 + 4) + dword_22498A0[3 * *(uchar *)(v3 + 13)];
      v28 = *(uint *)(v3 + 8) + dword_22498A4[3 * *(uchar *)(v3 + 13)];
      Function_2005748(0x5FEu);
      v4[v4[13] + 16] = ((int (__fastcall *)(uint, uint, int, int *, int *, uint))dword_21E19CC[0])(
                          v2[41],
                          v2[12],
                          517,
                          &v26,
                          &v23,
                          v2[20]);
      v17 = ((int (__fastcall *)(uint, uint))dword_21E18CC[5])(v2[41], v4[v4[13] + 16]);
      v18 = ((int (__fastcall *)(int))dword_21E18BC[0])(v17);
      ((void (__fastcall *)(uint, int, uint, int))dword_21D41C8[22])(v2[21], 16, v4[13], v18);
      ++v4[15];
      goto LABEL_37;
    case 2:
      v19 = *(uchar *)(v3 + 14);
      if ( v19 >= 0xF )
      {
        v4[14] = 0;
        if ( ++v4[13] >= (uint)v4[12] )
          ++v4[15];
        else
          v4[15] = 1;
      }
      else
      {
        v4[14] = v19 + 1;
      }
      goto LABEL_37;
    case 3:
      ((void (__fastcall *)(uint, int, uint))dword_21D4250[0])(v2[21], 16, 0);
      ((void (__fastcall *)(uint, int, uint))dword_21D4250[0])(v2[21], 32, 0);
      Function_2006150(0x48Eu);
      ++v4[15];
      goto LABEL_37;
    case 4:
      if ( ((int (__fastcall *)(uint, int))dword_21D42F0[0])(v2[21], 16)
        && ((int (__fastcall *)(uint, int))dword_21D42F0[0])(v2[21], 32)
        && !Function_20061e4() )
      {
        ((void (__fastcall *)(uint, uint, int))dword_21D42B0[0])(v2[20], v2[21], 32);
        ((void (__fastcall *)(uint, uint, int))dword_21D42B0[0])(v2[20], v2[21], 16);
        v20 = 0;
        if ( v4[12] )
        {
          do
          {
            ((void (__fastcall *)(uint, uint))dword_21E1674[0])(v4[v20 + 16], v2[41]);
            v20 = (v20 + 1) & 0xFF;
          }
          while ( v20 < v4[12] );
        }
        ++v4[15];
      }
      goto LABEL_37;
    case 5:
      free(v3);
      result = 1;
      break;
    default:
LABEL_37:
      result = 0;
      break;
  }
  return result;
}

//----- (02246F00) --------------------------------------------------------
uint *__fastcall Function_6_2246f00(int a1, char a2, char a3)
{
  char v3;
  char v4;
  int v5;
  uchar *v6;

  v3 = a2;
  v4 = a3;
  v5 = a1;
  if ( !Function_20552b4(a1, 498, 0, 0) )
    return (uint *)ErrorHandler();
  v6 = (uchar *)malloc2(4u, 4);
  *v6 = v4;
  v6[1] = v3;
  v6[2] = 0;
  return Function_2050944(*(uint *)(v5 + 16), (int)Function_2246f40, (int)v6);
}

//----- (02246F40) --------------------------------------------------------
int __fastcall Function_2246f40(int a1)
{
  int v1;
  uint *v2;
  int v3;
  uchar *v4;
  uint v5;
  int *v6;
  int v7;
  uint *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int result;
  int v15;

  v1 = a1;
  v2 = (uint *)LoadOverWorldDataAdress(a1);
  v3 = GetUnknownStruct01_c(v1);
  v4 = (uchar *)v3;
  v5 = *(uchar *)(v3 + 2);
  if ( v5 <= 4 )
    JUMPOUT(__CS__, *((short *)&off_2246F68 + v5) + 35942250);
  switch ( (uchar)v5 )
  {
    case 0:
      v6 = (int *)((int (__fastcall *)(int, uint))dword_21EF9E8[0])(498, v2[12]);
      v7 = Function_20b3c0c_GetAdrOfDataPart(*v6);
      if ( v7
        && (v7 == -8 || !*(uchar *)(v7 + 9) ? (v8 = 0) : (v8 = (uint *)(v7 + 8 + *(ushort *)(v7 + 14) + 4)),
            v8) )
      {
        v9 = v7 + *v8;
      }
      else
      {
        v9 = 0;
      }
      if ( !Function_20552b4((int)v2, 498, &v15, 0) )
        ErrorHandler();
      v10 = ((int (__fastcall *)(int))dword_21E18BC[0])(v15);
      v11 = ((int (__fastcall *)(uint))dword_21EFAA0[0])(v2[12]);
      ((void (__fastcall *)(uint, uint, int, int, int, int, int, int, uint, uint))dword_21D41C8[0])(
        v2[20],
        v2[21],
        1,
        498,
        v10,
        v9,
        v11,
        2,
        *v4,
        0);
      ++v4[2];
      goto LABEL_26;
    case 1:
      v12 = *(uchar *)(v3 + 1);
      v13 = 1;
      if ( v4[1] && v12 != 1 )
        v13 = 0;
      if ( !v13 )
        ErrorHandler();
      ((void (__fastcall *)(uint, int, uint))dword_21D4250[0])(v2[21], 1, v4[1]);
      Function_2005748(0x612u);
      ++v4[2];
      goto LABEL_26;
    case 2:
      if ( ((int (__fastcall *)(uint, int))dword_21D42F0[0])(v2[21], 1) )
      {
        Function_20057a4(1554, 0);
        Function_2005748(0x5F1u);
        ((void (__fastcall *)(uint, uint, int))dword_21D42B0[0])(v2[20], v2[21], 1);
        ++v4[2];
      }
      goto LABEL_26;
    case 3:
      if ( !Function_20057d4(0x5F1u) )
        ++v4[2];
      goto LABEL_26;
    case 4:
      free(v3);
      result = 1;
      break;
    default:
LABEL_26:
      result = 0;
      break;
  }
  return result;
}

//----- (02247078) --------------------------------------------------------
uint __fastcall Function_6_2247078(int a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v16 = a4;
  v4 = (uint *)a1;
  v5 = a2;
  v12 = 119;
  v13 = 112;
  v14 = 115;
  v15 = 248;
  if ( !Function_2055324(a1, (int)&v12, 4u, (int)&v11, &v10) )
    return ErrorHandler();
  v6 = ((int (__fastcall *)(uint))dword_21EFAA0[0])(v4[12]);
  v7 = ((int (__fastcall *)(int))dword_21E18BC[0])(v11);
  v8 = ((int (__fastcall *)(int))dword_21E18BC[1])(v11);
  return ((int (__fastcall *)(uint, uint, int, int, int, int, int, int, int, uint))dword_21D41C8[0])(
           v4[20],
           v4[21],
           v5,
           v10,
           v7,
           v8,
           v6,
           2,
           1,
           0);
}

//----- (02247100) --------------------------------------------------------
uint *__fastcall Function_6_2247100(int a1, int a2)
{
  int v2;
  uint *v3;
  uint *v4;

  v2 = a1;
  v3 = (uint *)Function_2247590(a2, 36);
  v4 = v3;
  v3[2] = 0;
  v3[7] = v2;
  v3[6] = Function_205eb3c(*(uint *)(v2 + 60));
  return v4;
}

//----- (02247120) --------------------------------------------------------
int __fastcall Function_2247120(int a1)
{
  int v1;
  int v2;
  uint *v3;
  int v4;

  v1 = a1;
  v2 = LoadOverWorldDataAdress(a1);
  v3 = (uint *)GetUnknownStruct01_c(v1);
  do
  {
    v4 = ((int (__fastcall *)(int, int, uint *))*(&off_22495CC + *v3))(v1, v2, v3);
    if ( v4 == 2 )
      free((int)v3);
  }
  while ( v4 == 1 );
  return 0;
}

//----- (0224715C) --------------------------------------------------------
int __fastcall Function_224715c(int a1, int a2, uint *a3)
{
  uint *v3;
  int v4;

  v3 = a3;
  a3[5] = ((int (__fastcall *)(int, int))dword_21F0E90[8])(a2, 4);
  ((void (*)(void))dword_21F0E90[32])();
  v3[3] = Malloc_MovementScript(v3[6], (int)dword_2249608);
  ++*v3;
  v4 = v3[2];
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      Function_2005748(0x603u);
    }
    else if ( v4 == 2 )
    {
      Function_2005748(0x64Eu);
    }
  }
  else
  {
    Function_2005748(0x603u);
  }
  return 0;
}

//----- (022471C0) --------------------------------------------------------
int __fastcall Function_22471c0(int a1, int a2, uint *a3)
{
  uint *v3;
  int v5;

  v3 = a3;
  if ( !Function_206574c(a3[3]) )
    return 0;
  Function_2065758(v3[3]);
  v3[3] = Malloc_MovementScript(v3[6], (int)dword_22495DC);
  v5 = v3[1] + 1;
  v3[1] = v5;
  if ( v5 < 8 )
    return 0;
  if ( v3[2] == 2 )
    Function_200f174(0, 0, 0, 0, 6, 1, 4);
  else
    Function_200f174(0, 0, 0, 0x7FFF, 6, 1, 4);
  ++*v3;
  return 0;
}

//----- (02247244) --------------------------------------------------------
int __fastcall Function_2247244(int a1, int a2, uint *a3)
{
  uint *v3;

  v3 = a3;
  if ( Function_206574c(a3[3]) == 1 )
  {
    Function_2065758(v3[3]);
    v3[3] = Malloc_MovementScript(v3[6], (int)dword_22495DC);
  }
  if ( !Function_200f2ac() )
    return 0;
  Function_2065758(v3[3]);
  ((void (__fastcall *)(uint))dword_21F0E90[27])(v3[5]);
  ++*v3;
  return 1;
}

//----- (02247288) --------------------------------------------------------
int __fastcall Function_2247288(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  int v6;
  int *v7;
  char v9;

  v3 = a1;
  v4 = a3;
  v5 = LoadVariableAreaAdress_6(*(uint *)(a2 + 12));
  if ( *(uint *)(v4 + 8) == 2 )
  {
    v6 = GetVariableAreaAdress_6_68(v5);
    Function_203a7f0(v6, &v9);
    Function_2053cd4(v3, (int *)&v9, *(uint *)(v4 + 8));
  }
  else
  {
    v7 = (int *)AddVariableAreaAdress_6_MapData4(v5);
    Function_2053cd4(v3, v7, *(uint *)(v4 + 8));
  }
  return 2;
}

//----- (022472C8) --------------------------------------------------------
uint *__fastcall Function_6_22472c8(int a1, int a2, int a3)
{
  int v3;
  int v4;
  uint *v5;
  uint *v6;

  v3 = a1;
  v4 = a3;
  v5 = (uint *)Function_2247590(a2, 36);
  v6 = v5;
  v5[2] = v4;
  v5[7] = v3;
  v5[6] = Function_205eb3c(*(uint *)(v3 + 60));
  return v6;
}

//----- (022472E8) --------------------------------------------------------
int __fastcall Function_22472e8(int a1)
{
  int v1;
  int v2;
  uint *v3;
  int v4;

  v1 = a1;
  v2 = LoadOverWorldDataAdress(a1);
  v3 = (uint *)GetUnknownStruct01_c(v1);
  do
  {
    v4 = ((int (__fastcall *)(int, int, uint *))*(&off_22495BC + *v3))(v1, v2, v3);
    if ( v4 == 2 )
    {
      Function_224732c(v2, v3);
      free((int)v3);
      return 1;
    }
  }
  while ( v4 == 1 );
  return 0;
}

//----- (0224732C) --------------------------------------------------------
uint __fastcall Function_224732c(int a1, int a2)
{
  int v2;
  uint result;
  uchar *v4;

  v2 = a1;
  result = *(uint *)(a2 + 8);
  if ( result == 2 )
  {
    v4 = Function_202be00(9, **(uint **)(v2 + 28), 4u);
    result = Function_202b758(*(uint *)(v2 + 156), (int)v4, 1u);
  }
  return result;
}

//----- (02247354) --------------------------------------------------------
int __fastcall Function_2247354(int a1, int a2, uint *a3)
{
  uint *v3;
  int v4;

  v3 = a3;
  v4 = a2;
  if ( a3[2] == 2 )
    Function_200f174(0, 1, 1, 0, 6, 1, 4);
  else
    Function_200f174(0, 1, 1, 0x7FFF, 6, 1, 4);
  v3[5] = ((int (__fastcall *)(int, int))dword_21F0E90[8])(v4, 4);
  ((void (*)(void))dword_21F0E90[32])();
  v3[3] = Malloc_MovementScript(v3[6], (int)dword_22495DC);
  ++*v3;
  return 0;
}

//----- (022473C8) --------------------------------------------------------
int __fastcall Function_22473c8(int a1, int a2, uint *a3)
{
  uint *v3;

  v3 = a3;
  if ( Function_206574c(a3[3]) == 1 )
  {
    Function_2065758(v3[3]);
    v3[3] = Malloc_MovementScript(v3[6], (int)dword_22495DC);
  }
  if ( !Function_200f2ac() )
    return 0;
  ((void (__fastcall *)(uint, int, uint, int))dword_21F0E90[32])(v3[5], 2, 0, 60);
  ++*v3;
  return 1;
}

//----- (0224740C) --------------------------------------------------------
int __fastcall Function_224740c(int a1, int a2, uint *a3)
{
  uint *v3;
  int v5;
  bool v6;
  uchar v7;
  int v8;

  v3 = a3;
  if ( !Function_206574c(a3[3]) )
    return 0;
  Function_2065758(v3[3]);
  v5 = v3[1] + 1;
  v3[1] = v5;
  v7 = __OFSUB__(v5, 4);
  v6 = v5 - 4 < 0;
  v8 = v3[6];
  if ( v6 ^ v7 )
  {
    v3[3] = Malloc_MovementScript(v8, (int)dword_22495DC);
  }
  else
  {
    v3[3] = Malloc_MovementScript(v8, (int)dword_224966C);
    ++*v3;
  }
  return 0;
}

//----- (02247458) --------------------------------------------------------
int __fastcall Function_2247458(int a1, int a2, int a3)
{
  int v3;

  v3 = a3;
  if ( !Function_206574c(*(uint *)(a3 + 12)) )
    return 0;
  if ( !((int (__fastcall *)(uint))dword_21F0E90[24])(*(uint *)(v3 + 20)) )
    return 0;
  ((void (__fastcall *)(uint))dword_21F0E90[27])(*(uint *)(v3 + 20));
  Function_2065758(*(uint *)(v3 + 12));
  return 2;
}

//----- (02247488) --------------------------------------------------------
uint *__fastcall Function_6_2247488(int a1, int a2, int a3)
{
  int v3;
  int v4;
  uint *v5;
  uint *v6;

  v3 = a1;
  v4 = a2;
  v5 = (uint *)Function_2247590(a3, 36);
  v6 = v5;
  v5[2] = 1;
  v5[7] = v3;
  v5[6] = Function_205eb3c(*(uint *)(v3 + 60));
  v6[8] = v4;
  return v6;
}

//----- (022474AC) --------------------------------------------------------
int __fastcall Function_22474ac(int a1)
{
  int v1;
  int v2;
  uint *v3;
  int v4;

  v1 = a1;
  v2 = LoadOverWorldDataAdress(a1);
  v3 = (uint *)GetUnknownStruct01_c(v1);
  do
  {
    v4 = ((int (__fastcall *)(int, int, uint *))*(&off_22495F0 + *v3))(v1, v2, v3);
    if ( v4 == 2 )
      free((int)v3);
  }
  while ( v4 == 1 );
  return 0;
}

//----- (022474E8) --------------------------------------------------------
int __fastcall Function_22474e8(int a1, int a2, uint *a3)
{
  int v3;
  uint *v4;
  int v5;

  v3 = a2;
  v4 = a3;
  v5 = Function_205eb98(*(uint *)(a2 + 60));
  v4[4] = Function_6_2243f88(v3, 0, v4[8], v5);
  ++*v4;
  return 0;
}

//----- (0224750C) --------------------------------------------------------
int __fastcall Function_224750c(int a1, int a2, uint *a3)
{
  uint *v3;

  v3 = a3;
  if ( !Function_6_2243fbc(a3[4]) )
    return 0;
  Function_6_2243fc8(v3[4]);
  ++*v3;
  return 1;
}

//----- (02247530) --------------------------------------------------------
uint *__fastcall Function_6_2247530(int a1, int a2, int a3)
{
  int v3;
  int v4;
  uint *v5;
  uint *v6;

  v3 = a1;
  v4 = a2;
  v5 = (uint *)Function_2247590(a3, 36);
  v6 = v5;
  v5[2] = 2;
  v5[7] = v3;
  v5[6] = Function_205eb3c(*(uint *)(v3 + 60));
  v6[8] = v4;
  return v6;
}

//----- (02247554) --------------------------------------------------------
int __fastcall Function_2247554(int a1)
{
  int v1;
  int v2;
  uint *v3;
  int v4;

  v1 = a1;
  v2 = LoadOverWorldDataAdress(a1);
  v3 = (uint *)GetUnknownStruct01_c(v1);
  do
  {
    v4 = ((int (__fastcall *)(int, int, uint *))*(&off_22495F0 + *v3))(v1, v2, v3);
    if ( v4 == 2 )
      free((int)v3);
  }
  while ( v4 == 1 );
  return 0;
}

//----- (02247590) --------------------------------------------------------
int *__fastcall Function_2247590(uint a1, int a2)
{
  uint v2;
  int *v3;

  v2 = a2;
  v3 = (int *)malloc2(a1, a2);
  if ( !v3 )
    ErrorHandler();
  Call_FillMemWithValue(v3, 0, v2);
  return v3;
}

//----- (022475B0) --------------------------------------------------------
uint __fastcall Function_6_22475b0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint v7;
  int v8;
  int v10;
  ushort v11[2];
  ushort v12[2];
  int v13;

  v13 = a4;
  v10 = a1;
  v4 = LoadFromNARC_4(106, 8, 4u);
  Function_202da10(v10, v12, v11);
  if ( v12[0] == 0xFFFF )
    v5 = 0;
  else
    v5 = *(uint *)(v4 + 4 * v12[0]);
  if ( v11[0] == 0xFFFF )
    v6 = 0;
  else
    v6 = *(uint *)(v4 + 4 * v11[0]);
  do
  {
    v7 = 16 * PRNG() >> 16;
    if ( v7 >= 0x10 )
      ErrorHandler();
    v8 = *(uint *)(v4 + 4 * v7);
  }
  while ( v5 == v8 || v6 == v8 );
  Function_202da24(v10, v7);
  return free(v4);
}

//----- (02247624) --------------------------------------------------------
int __fastcall Function_6_2247624(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  char v7;
  ushort v8;
  int v9;

  v9 = a4;
  Function_202da10(a1, &v8, &v7);
  if ( v8 == 0xFFFF )
    ErrorHandler();
  v4 = LoadFromNARC_4(106, 8, 4u);
  v5 = *(uint *)(v4 + 4 * v8);
  free(v4);
  return v5;
}

//----- (02247660) --------------------------------------------------------
int __fastcall Function_2247660(int a1)
{
  int v1;
  uint v2;
  int v4;
  uint v5;
  int *v6;
  uint v7;
  int v8;
  int i;
  int v10;
  int v11;
  uint v12;
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
  char v23[16];
  char v24[16];
  uint v25;
  uint v26;
  int v27;
  int v28;

  v1 = a1;
  v2 = 2 * PRNG() >> 16;
  if ( v2 >= 2 )
    ErrorHandler();
  if ( !v2 )
    return 0;
  v4 = LoadVariableAreaAdress_11(*(uint *)(v1 + 12));
  v5 = Function_202b428(v4);
  CalcNewSpritePositionXYWithFaceDirection(*(uint *)(v1 + 60), &v22, &v21);
  v16 = Function_2039e10(*(uchar **)(v1 + 44));
  v17 = 0;
  v25 = v5 >> 24;
  v26 = (v5 >> 16) & 0xFF;
  v27 = (ushort)v5 >> 8;
  v28 = (uchar)v5;
  v6 = (int *)LoadFromNARC_4(106, 1, 4u);
  v19 = (int)v6;
  v7 = 0;
  v8 = *v6;
  for ( i = 0; i < v8; i = (i + 1) & 0xFF )
    v7 += *(uint *)(v19 + 4 * i + 4);
  v18 = v19 + 2 * (2 * v8 + 2);
  v20 = (int)v7 / 4;
  if ( (int)v7 / 4 >= 256 )
    ErrorHandler();
  v10 = 0;
  v11 = ((v7 >> 31) + __ROR4__((v7 << 30) - (v7 >> 31), 30)) & 0xFF;
  v12 = 0;
  do
  {
    v13 = 4 * v12;
    s32_div_f(*(&v25 + v12), v20);
    *(uint *)&v24[v13] = v10 + v14 + v20 * v12;
    *(uint *)&v23[v13] = *(ushort *)(v18 + 2 * *(uint *)&v24[v13]);
    if ( v11 )
    {
      v10 = (v10 + 1) & 0xFF;
      v11 = (v11 - 1) & 0xFF;
    }
    v12 = (v12 + 1) & 0xFF;
  }
  while ( v12 < 4 );
  v15 = 0;
  while ( v22 + 32 * v16 * v21 != *(uint *)&v23[4 * v15] )
  {
    v15 = (v15 + 1) & 0xFF;
    if ( v15 >= 4 )
      goto LABEL_17;
  }
  v17 = 1;
LABEL_17:
  free(v19);
  return v17;
}

//----- (02247794) --------------------------------------------------------
int __fastcall Function_2247794(uchar *a1, uchar *a2)
{
  int result;

  *a1 = 20;
  result = 10;
  *a2 = 10;
  return result;
}

//----- (022477A0) --------------------------------------------------------
uint __fastcall Function_22477a0(uint *a1)
{
  uint *v1;
  uint *v2;

  v1 = a1;
  v2 = (uint *)LoadFromNARC_4(106, 0, 4u);
  *v1 = *v2;
  return free((int)v2);
}

//----- (022477B8) --------------------------------------------------------
uint *__fastcall Function_22477b8(uint *result, int a2, uint *a3, uint *a4)
{
  if ( a2 )
  {
    switch ( byte_21BF6E2 )
    {
      case 1:
        *a3 = result[43];
        result = (uint *)result[44];
        *a4 = result;
        break;
      case 2:
        *a3 = result[41];
        result = (uint *)result[42];
        *a4 = result;
        break;
      case 3:
        *a3 = result[45];
        result = (uint *)result[46];
        *a4 = result;
        break;
      case 4:
        *a3 = result[47];
        result = (uint *)result[48];
        *a4 = result;
        break;
      case 5:
        *a3 = result[49];
        result = (uint *)result[50];
        *a4 = result;
        break;
      default:
        return result;
    }
  }
  return result;
}

//----- (02247830) --------------------------------------------------------
int __fastcall Function_2247830(int a1, int a2, int a3)
{
  int v3;
  int result;
  int v5;
  int v6;
  int v7;
  char i;
  int v9;

  v3 = a1;
  result = (a3 - 1) & 0xFF;
  if ( a3 )
  {
    v5 = v3 + a2;
    v6 = a2 - 1;
    do
    {
      v7 = v6;
      for ( i = *(uchar *)(v5 - 1) & 1; v7 > 0; --v7 )
      {
        *(uchar *)(v3 + v7) = (int)*(uchar *)(v3 + v7) >> 1;
        *(uchar *)(v3 + v7) |= *(uchar *)(v3 + v7 - 1) << 7;
      }
      *(uchar *)(v3 + v7) = (int)*(uchar *)(v3 + v7) >> 1;
      *(uchar *)(v3 + v7) |= i << 7;
      v9 = result;
      result = (result - 1) & 0xFF;
    }
    while ( v9 );
  }
  return result;
}

//----- (02247890) --------------------------------------------------------
int __fastcall Function_2247890(int a1, int a2, int a3, int a4, ushort a5, ushort a6)
{
  uint *v6;
  int v7;
  int v8;
  int v9;
  short v10;
  int v11;
  short *v12;
  uchar *v13;
  int v14;
  int result;
  int v16;
  int v17;
  int v18;
  int v19;
  uchar *v20;
  int v21;
  uchar v22;
  uchar v23;
  uchar v24;
  uchar v25;
  short v26;
  short v27;
  short v28;
  short v29;
  int v30;

  v30 = a4;
  v6 = (uint *)a1;
  v7 = a3;
  v21 = a2;
  v8 = a4;
  v9 = Function_2015004(a1);
  v26 = Function_2015030(v6, v7);
  v27 = Function_2015030(v6, v8);
  v28 = Function_2015030(v6, a5);
  v10 = Function_2015030(v6, a6);
  v11 = 0;
  v29 = v10;
  v12 = &v26;
  v13 = &v22;
  do
  {
    v14 = *v12;
    if ( v14 < 0 )
      return -1;
    if ( v11 <= 0 )
    {
      if ( v26 > 255 )
        return -1;
      v22 = v26;
    }
    else
    {
      v16 = *(v12 - 1);
      if ( v14 < v16 )
      {
        v18 = v9 - (v16 - v14);
        if ( v18 > 255 )
          return -1;
        *v13 = v18;
      }
      else
      {
        v17 = v14 - v16;
        if ( v17 > 255 )
          return -1;
        *v13 = v17;
      }
    }
    ++v11;
    ++v12;
    ++v13;
  }
  while ( v11 < 4 );
  Function_2247830((int)&v22, 4, 5);
  v19 = 0;
  v20 = &v22;
  do
  {
    ++v19;
    *v20++ ^= v25 & 0xF0 | (uchar)((int)v25 >> 4);
  }
  while ( v19 < 3 );
  Function_2247830((int)&v22, 3, v25 & 0xF);
  if ( (v22 & 0xF) >= 8 )
    return -1;
  v23 ^= v22;
  v24 ^= v22;
  if ( v21 != ((v23 << 8) | v24) || (v22 & 0xF0) >> 4 != 6 || v25 != ((v22 + v23) * v24 & 0xFF) )
    result = -1;
  else
    result = v22 & 0xF;
  return result;
}

//----- (022479D0) --------------------------------------------------------
int __fastcall Function_6_22479d0(int a1, int a2, int a3, ushort a4, ushort a5, uint a6)
{
  int v6;
  int v7;
  int v8;
  ushort v9;
  uint *v10;
  int v11;
  int v12;

  v6 = a1;
  v7 = a2;
  v8 = a3;
  v9 = a4;
  v10 = Function_2014fb0(a6);
  v11 = GetSecretTrainerID(v6);
  v12 = Function_2247890((int)v10, v11, v7, v8, v9, a5);
  Function_2014ff0((int)v10);
  return v12;
}

//----- (02247A0C) --------------------------------------------------------
uint *__fastcall Function_6_2247a0c(int a1)
{
  int v1;
  ushort *v2;

  v1 = a1;
  v2 = (ushort *)malloc2(0xBu, 8);
  MI_CpuFill8(v2, 0, 8u);
  return Function_2050944(v1, (int)Function_2247a34, (int)v2);
}

//----- (02247A34) --------------------------------------------------------
int __fastcall Function_2247a34(int a1)
{
  int v1;
  int v2;
  uint *v3;
  uint *v4;
  int v5;

  v1 = a1;
  v2 = LoadOverWorldDataAdress(a1);
  v3 = (uint *)GetUnknownStruct01_c(v1);
  v4 = v3;
  v5 = v3[1];
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      if ( dword_21BF6C4 & 3 )
      {
        Function_2247cc8(*v3);
        ++v4[1];
      }
    }
    else if ( v5 == 2 )
    {
      free((int)v3);
      return 1;
    }
  }
  else
  {
    *v3 = Function_2247a90(v2);
    ++v4[1];
  }
  return 0;
}

//----- (02247A90) --------------------------------------------------------
int __fastcall Function_2247a90(int a1)
{
  int v1;
  uint *v2;
  int v3;
  int v4;
  ushort *v5;
  int v6;
  ushort *v7;
  int v8;
  int *v9;
  ushort *v10;
  int v11;
  int v12;
  int *v13;
  ushort *v14;
  int v15;
  int v16;
  int *v17;
  int v18;
  int v19;
  ushort *v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v26;
  int *v27;
  int v28;
  int v29;
  int v30;

  v1 = a1;
  v2 = (uint *)Function_203d170(a1);
  v28 = GetOverWorldData_VariableAreaAdresses(v1);
  v3 = malloc(0xBu, 24);
  MI_CpuFill8((ushort *)v3, 0, 0x18u);
  *(uint *)(v3 + 16) = LoadFromMsgNARC(0, 26, 208, 0xBu);
  *(uint *)(v3 + 20) = Function_200b358(0xBu);
  Function_201a7e8(v2, v3, 3, 1, 3, 0x1Eu, 0x11u, 12, 11);
  Function_200daa4(v2, 3u, 1, 11, 0, 11);
  Function_200dc48(v3, 1, 1, 0xBu);
  Function_201ada4_ClearTextBox(v3, 15);
  v4 = Function_2023790(100, 0xBu);
  v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v3 + 16), 0);
  LoadTrainerDataAdress(v28);
  Function_200b498(*(uint *)(v3 + 20), 0);
  Function_200c388(*(uint **)(v3 + 20), v4, (int)v5);
  Function_2247cf4(v4, 0, 1, 120);
  Function_201d738_CallInitTextInterpreter(v3, 0);
  Function_20237bc_FreeMsg((int)v5, v6);
  v7 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v3 + 16), 1u);
  Function_2247cf4(v7, 0, 1, 120);
  Function_201d738_CallInitTextInterpreter(v3, 0);
  Function_20237bc_FreeMsg((int)v7, v8);
  v9 = &dword_22496F4;
  v30 = 0;
  do
  {
    v10 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v3 + 16), *v9);
    Function_2247cf4(v10, 0, 0, *((short *)v9 + 2));
    v11 = *((short *)v9 + 3);
    Function_201d738_CallInitTextInterpreter(v3, 0);
    Function_20237bc_FreeMsg((int)v10, v12);
    v9 += 2;
    ++v30;
  }
  while ( v30 < 5 );
  v13 = &dword_22496D4;
  v26 = 0;
  do
  {
    v14 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v3 + 16), *v13);
    Function_2247cf4(v14, 0, 2, *((short *)v13 + 2));
    v15 = *((short *)v13 + 3);
    Function_201d738_CallInitTextInterpreter(v3, 0);
    Function_20237bc_FreeMsg((int)v14, v16);
    v13 += 2;
    ++v26;
  }
  while ( v26 < 4 );
  v29 = 0;
  v27 = dword_224971C;
  do
  {
    v17 = v27;
    v18 = 0;
    do
    {
      v19 = Function_202f160(v28, v29, v18);
      v20 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v3 + 16), *v17);
      Function_200b60c(*(uint *)(v3 + 20), 0, v19, 4, 1, 1);
      Function_200c388(*(uint **)(v3 + 20), v4, (int)v20);
      Function_2247cf4(v4, 0, 2, *((short *)v17 + 2));
      v21 = *((short *)v17 + 3);
      Function_201d738_CallInitTextInterpreter(v3, 0);
      Function_20237bc_FreeMsg((int)v20, v22);
      ++v18;
      v17 += 2;
    }
    while ( v18 < 4 );
    v27 += 8;
    ++v29;
  }
  while ( v29 < 5 );
  Function_20237bc_FreeMsg(v4, v23);
  Function_201a954(v3, v24);
  return v3;
}

//----- (02247CC8) --------------------------------------------------------
uint __fastcall Function_2247cc8(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  Function_200dc9c(a1, 1);
  Function_201acf4(v1);
  Function_201a8fc(v1);
  Function_200b190(*(ushort **)(v1 + 16));
  Function_200b3f0(*(uint **)(v1 + 20), v2);
  return free(v1);
}

//----- (02247CF4) --------------------------------------------------------
int __fastcall Function_2247cf4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v7;

  v4 = a3;
  v5 = a4;
  if ( !a3 )
    return a4;
  v7 = Function_2002d7c(a2, a1, 0);
  if ( v4 == 1 )
    return v5 - v7 / 2;
  if ( v4 == 2 )
    return v5 - v7;
  ErrorHandler();
  return v5;
}

//----- (02247D30) --------------------------------------------------------
uint *__fastcall Function_6_2247d30(int a1, char a2)
{
  char v2;
  int v3;
  uchar *v4;
  uint *v5;
  int v6;
  int v7;
  uint v9;
  int v10;
  char v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v2 = a2;
  v3 = a1;
  if ( !Function_20552b4(a1, 507, &v10, (int)&v9) )
    return (uint *)ErrorHandler();
  v4 = (uchar *)malloc2(4u, 24);
  v5 = v4;
  v4[12] = v2;
  v4[13] = 0;
  v4[14] = 0;
  v4[15] = 0;
  v6 = Function_2039e10(*(uchar **)(v3 + 44));
  Function_20553a4(v9, v6, &v14);
  ((void (__fastcall *)(char *, int))dword_21E1894[0])(&v11, v10);
  v7 = v12;
  *v5 = *(uint *)&v11;
  v5[1] = v7;
  v5[2] = v13;
  *v5 += v14;
  v5[2] += v15;
  return Function_2050944(*(uint *)(v3 + 16), (int)Function_2247dac, (int)v5);
}

//----- (02247DAC) --------------------------------------------------------
int __fastcall Function_2247dac(int a1)
{
  int v1;
  uint *v2;
  int v3;
  uchar *v4;
  uint v5;
  int *v6;
  int v7;
  uint *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint v13;
  uint v14;
  int result;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;

  v1 = a1;
  v2 = (uint *)LoadOverWorldDataAdress(a1);
  v3 = GetUnknownStruct01_c(v1);
  v4 = (uchar *)v3;
  v5 = *(uchar *)(v3 + 15);
  if ( v5 <= 5 )
    JUMPOUT(__CS__, *((short *)&off_2247DD4 + v5) + 35945942);
  switch ( (uchar)v5 )
  {
    case 0:
      v6 = (int *)((int (__fastcall *)(int, uint))dword_21EF9E8[0])(517, v2[12]);
      v7 = Function_20b3c0c_GetAdrOfDataPart(*v6);
      if ( v7
        && (v7 == -8 || !*(uchar *)(v7 + 9) ? (v8 = 0) : (v8 = (uint *)(v7 + 8 + *(ushort *)(v7 + 14) + 4)),
            v8) )
      {
        v9 = v7 + *v8;
      }
      else
      {
        v9 = 0;
      }
      v10 = ((int (__fastcall *)(uint))dword_21EFAA0[0])(v2[12]);
      ((void (__fastcall *)(uint, uint, int, int, uint, int, int, int, int, uint))dword_21D41C8[0])(
        v2[20],
        v2[21],
        16,
        517,
        0,
        v9,
        v10,
        1,
        1,
        0);
      ++v4[15];
      goto LABEL_25;
    case 1:
      v16 = 0;
      v17 = 0;
      v18 = 0;
      v19 = *(uint *)v3 + dword_22498E4[3 * *(uchar *)(v3 + 13)];
      v20 = *(uint *)(v3 + 4) + dword_22498E8[3 * *(uchar *)(v3 + 13)];
      v21 = *(uint *)(v3 + 8) + dword_22498EC[3 * *(uchar *)(v3 + 13)];
      *(uchar *)(v3 + *(uchar *)(v3 + 13) + 16) = ((int (__fastcall *)(uint, uint, int, int *, int *, uint))dword_21E19CC[0])(
                                                              v2[41],
                                                              v2[12],
                                                              517,
                                                              &v19,
                                                              &v16,
                                                              v2[20]);
      v11 = ((int (__fastcall *)(uint, uint))dword_21E18CC[5])(v2[41], v4[v4[13] + 16]);
      v12 = ((int (__fastcall *)(int))dword_21E18BC[0])(v11);
      ((void (__fastcall *)(uint, int, uint, int))dword_21D41C8[22])(v2[21], 16, v4[13], v12);
      ++v4[15];
      goto LABEL_25;
    case 2:
      v13 = *(uchar *)(v3 + 14);
      if ( v13 >= 0xF )
      {
        v4[14] = 0;
        if ( ++v4[13] >= (uint)v4[12] )
          ++v4[15];
        else
          v4[15] = 1;
      }
      else
      {
        v4[14] = v13 + 1;
      }
      goto LABEL_25;
    case 3:
      ((void (__fastcall *)(uint, int, uint))dword_21D4250[0])(v2[21], 16, 0);
      ++v4[15];
      goto LABEL_25;
    case 4:
      if ( ((int (__fastcall *)(uint, int))dword_21D42F0[0])(v2[21], 16) )
      {
        ((void (__fastcall *)(uint, uint, int))dword_21D42B0[0])(v2[20], v2[21], 16);
        v14 = 0;
        if ( v4[12] )
        {
          do
          {
            ((void (__fastcall *)(uint, uint))dword_21E1674[0])(v4[v14 + 16], v2[41]);
            v14 = (v14 + 1) & 0xFF;
          }
          while ( v14 < v4[12] );
        }
        ++v4[15];
      }
      goto LABEL_25;
    case 5:
      free(v3);
      result = 1;
      break;
    default:
LABEL_25:
      result = 0;
      break;
  }
  return result;
}

//----- (02247F5C) --------------------------------------------------------
int __fastcall Function_6_2247f5c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v5;

  v1 = a1;
  v2 = LoadFlagAdress(*(uint *)(a1 + 12));
  if ( Function_206adec(v2) )
  {
    v5 = ((int (__fastcall *)(int, uint, uint))dword_21D3BF0[125])(496, 0, *(uint *)(v1 + 80));
    ((void (__fastcall *)(int, int))dword_21D3BF0[148])(v5, 1);
    v3 = ((int (__fastcall *)(int, int, uint))dword_21D3BF0[125])(496, 1, *(uint *)(v1 + 80));
    ((void (*)(void))dword_21D3BF0[171])();
  }
  else
  {
    v3 = ((int (__fastcall *)(int, int, uint))dword_21D3BF0[125])(496, 1, *(uint *)(v1 + 80));
    ((void (*)(void))dword_21D3BF0[198])();
  }
  return ((int (__fastcall *)(int, int))dword_21D3BF0[148])(v3, 1);
}

//----- (02247FBC) --------------------------------------------------------
uint *__fastcall Function_6_2247fbc(int a1)
{
  return Function_2050944(*(uint *)(a1 + 16), (int)Function_2247fd0, 0);
}

//----- (02247FD0) --------------------------------------------------------
int __fastcall Function_2247fd0(int a1)
{
  int v1;
  int v2;
  uint *v3;
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v1 = a1;
  v2 = LoadOverWorldDataAdress(a1);
  v3 = (uint *)Function_2050a68(v1);
  v4 = v3;
  v5 = *v3;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      v7 = ((int (__fastcall *)(int, int, uint))dword_21D3BF0[125])(496, 1, *(uint *)(v2 + 80));
      ((void (__fastcall *)(int, uint))dword_21D3BF0[148])(v7, 0);
      ++*v4;
    }
    else if ( v5 == 2 )
    {
      v8 = ((int (__fastcall *)(int, int, uint))dword_21D3BF0[125])(496, 1, *(uint *)(v2 + 80));
      if ( ((int (__fastcall *)(int))dword_21D3BF0[224])(v8) )
        return 1;
    }
  }
  else
  {
    v6 = ((int (__fastcall *)(int, uint, uint))dword_21D3BF0[125])(496, 0, *(uint *)(v2 + 80));
    if ( ((int (*)(void))dword_21D3BF0[151])() )
    {
      ((void (__fastcall *)(int, int))dword_21D3BF0[148])(v6, 1);
      ++*v4;
    }
  }
  return 0;
}

//----- (02248050) --------------------------------------------------------
uint *__fastcall Function_2248050(int a1, int a2, uint *a3)
{
  uint *v3;
  uint *v4;
  int v5;
  int v6;
  char v8;
  int v9;

  v3 = a3;
  v4 = GetAdressOfSpriteID(a1, a2);
  CopySprite70Struct(v4, &v8);
  v5 = LoadSpritePositionX((int)v4);
  v6 = LoadSpritePositionY((int)v4);
  switch ( (uchar)LoadSpriteFaceDirection((int)v4) )
  {
    case 0u:
      --v6;
      break;
    case 1u:
      ++v6;
      break;
    case 2u:
      --v5;
      break;
    case 3u:
      ++v5;
      break;
    default:
      ErrorHandler();
      break;
  }
  return Function_2017350(v3, (v5 << 16) + 0x8000, v9, (v6 << 16) + 0x8000);
}

//----- (022480BC) --------------------------------------------------------
uint *__fastcall Function_22480bc(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  char v7;
  int v8;

  v2 = a2;
  v3 = a1;
  Function_205eaec(a1, &v7);
  v4 = GetSpritePositionX(v3);
  v5 = GetSpritePositionY(v3);
  switch ( (uchar)GetSpriteFaceDirection(v3) )
  {
    case 0u:
      --v5;
      break;
    case 1u:
      ++v5;
      break;
    case 2u:
      --v4;
      break;
    case 3u:
      ++v4;
      break;
    default:
      ErrorHandler();
      break;
  }
  return Function_2017350(v2, (v4 << 16) + 0x8000, v8, (v5 << 16) + 0x8000);
}

//----- (02248124) --------------------------------------------------------
uint *__fastcall Function_2248124(int a1, uint *a2, int a3, int a4)
{
  uint *v4;
  int v6;
  int v7;
  int v8;
  int v9;

  v9 = a4;
  v4 = a2;
  Function_205eaec(a1, &v6);
  return Function_2017350(v4, v6, v7, v8);
}

//----- (02248140) --------------------------------------------------------
uint __fastcall Function_2248140(int *a1, int a2, uint a3, int a4, int a5, int (***a6)(void))
{
  uint v6;
  int *v7;
  uint result;
  uint v9;
  int *v10;
  int v11;
  int v12;

  v11 = a2;
  v6 = a3;
  v7 = a1;
  v12 = a4;
  Call_FillMemWithValue(a1, 0, 0xDCu);
  Function_20170d8(v7 + 30, v11, v6, 4);
  Function_2017258(v7, (int)(v7 + 30));
  v7[54] = a5;
  result = v7[54];
  v9 = 0;
  if ( result )
  {
    v10 = v7 + 34;
    do
    {
      Function_2017164(v10, (int)(v7 + 30), v11, v12 + v9, 4, a6);
      Function_201727c((uint)v7, (int)v10);
      result = v7[54];
      ++v9;
      v10 += 5;
    }
    while ( v9 < result );
  }
  return result;
}

//----- (022481BC) --------------------------------------------------------
uint __fastcall Function_22481bc(int a1, int a2)
{
  int v2;
  int v3;
  uint result;
  uint v5;
  int *v6;

  v2 = a1;
  v3 = a2;
  Function_2017110((int *)(a1 + 120));
  result = *(uint *)(v2 + 216);
  v5 = 0;
  if ( result )
  {
    v6 = (int *)(v2 + 136);
    do
    {
      Function_20171a0(v6, v3);
      result = *(uint *)(v2 + 216);
      ++v5;
      v6 += 5;
    }
    while ( v5 < result );
  }
  return result;
}

//----- (022481F0) --------------------------------------------------------
int __fastcall Function_22481f0(int a1)
{
  int v1;
  int v2;
  uint v3;
  int v4;

  v1 = a1;
  v2 = 1;
  v3 = 0;
  if ( *(uint *)(a1 + 216) )
  {
    v4 = a1 + 136;
    do
    {
      v2 &= Function_2017204(v4, 4096);
      ++v3;
      v4 += 20;
    }
    while ( v3 < *(uint *)(v1 + 216) );
  }
  return v2;
}

//----- (02248224) --------------------------------------------------------
uint __fastcall Function_2248224(int a1)
{
  int v1;
  uint result;
  uint v3;
  int v4;

  v1 = a1;
  result = *(uint *)(a1 + 216);
  v3 = 0;
  if ( result )
  {
    v4 = v1 + 136;
    do
    {
      Function_20171cc(v4, 4096);
      result = *(uint *)(v1 + 216);
      ++v3;
      v4 += 20;
    }
    while ( v3 < result );
  }
  return result;
}

//----- (02248254) --------------------------------------------------------
int *__fastcall Function_2248254(int a1)
{
  return Function_2017294(a1);
}

//----- (0224825C) --------------------------------------------------------
int __fastcall Function_224825c(int a1, int a2, int *a3)
{
  int *v3;
  int v4;
  int v5;
  int v6;
  int *v7;
  int result;

  v3 = a3;
  v4 = a2;
  Call_FillMemWithValue(a3, 0, 0xF0u);
  Function_20182cc(v3 + 55, 4u, 32);
  v7 = LoadFromNARC_8(141, 4u, v5, v6);
  Function_2248140(v3, (int)v7, 3u, 0, 3, (int (***)(void))v3 + 55);
  Call_FS_CloseFile(v7);
  Function_22480bc(*(uint *)(v4 + 60), v3);
  Function_2005748(0x64Bu);
  result = 0;
  v3[59] = 0;
  return result;
}

//----- (022482BC) --------------------------------------------------------
uint __fastcall Function_22482bc(int a1, int a2, int a3)
{
  return Function_22481bc(a3, a3 + 220);
}

//----- (022482CC) --------------------------------------------------------
int __fastcall Function_22482cc(int a1, int a2, int a3)
{
  int v3;
  int result;

  v3 = a3;
  result = *(uint *)(a3 + 236);
  if ( !result )
  {
    result = Function_22481f0(a3);
    if ( result == 1 )
    {
      Function_2017348(v3, 0);
      result = *(uint *)(v3 + 236) + 1;
      *(uint *)(v3 + 236) = result;
    }
  }
  return result;
}

//----- (02248300) --------------------------------------------------------
int *__fastcall Function_2248300(int a1, int a2, int a3)
{
  return Function_2248254(a3);
}

//----- (02248328) --------------------------------------------------------
BOOL Function_2248328()
{
  return *(uint *)(((int (*)(void))dword_21D1BF0[15])() + 236) == 1;
}

//----- (02248340) --------------------------------------------------------
int __fastcall Function_2248340(int a1, int a2, int *a3)
{
  int *v3;
  int v4;
  int v5;
  int v6;
  int *v7;
  int result;

  v3 = a3;
  v4 = a2;
  Call_FillMemWithValue(a3, 0, 0xF0u);
  Function_20182cc(v3 + 55, 4u, 32);
  v7 = LoadFromNARC_8(141, 4u, v5, v6);
  Function_2248140(v3, (int)v7, 8u, 4, 4, (int (***)(void))v3 + 55);
  Call_FS_CloseFile(v7);
  Function_22480bc(*(uint *)(v4 + 60), v3);
  Function_2005748(0x64Au);
  result = 0;
  v3[59] = 0;
  return result;
}

//----- (022483A0) --------------------------------------------------------
int __fastcall Function_22483a0(int a1, int a2, int *a3)
{
  int *v3;
  int v4;
  int v5;
  int v6;
  int *v7;
  int result;

  v3 = a3;
  v4 = a2;
  Call_FillMemWithValue(a3, 0, 0xF0u);
  Function_20182cc(v3 + 55, 4u, 32);
  v7 = LoadFromNARC_8(141, 4u, v5, v6);
  Function_2248140(v3, (int)v7, 8u, 4, 4, (int (***)(void))v3 + 55);
  Function_2248050(*(uint *)(v4 + 56), 0, v3);
  Function_2005748(0x64Au);
  Call_FS_CloseFile(v7);
  result = 0;
  v3[59] = 0;
  return result;
}

//----- (02248400) --------------------------------------------------------
uint __fastcall Function_2248400(int a1, int a2, int a3)
{
  return Function_22481bc(a3, a3 + 220);
}

//----- (02248410) --------------------------------------------------------
int __fastcall Function_2248410(int a1, int a2, int a3)
{
  int v3;
  int result;

  v3 = a3;
  result = *(uint *)(a3 + 236);
  if ( !result )
  {
    result = Function_22481f0(a3);
    if ( result == 1 )
    {
      Function_2017348(v3, 0);
      result = *(uint *)(v3 + 236) + 1;
      *(uint *)(v3 + 236) = result;
    }
  }
  return result;
}

//----- (02248444) --------------------------------------------------------
int *__fastcall Function_2248444(int a1, int a2, int a3)
{
  return Function_2248254(a3);
}

//----- (02248480) --------------------------------------------------------
BOOL Function_2248480()
{
  return *(uint *)(((int (*)(void))dword_21D1BF0[15])() + 236) == 1;
}

//----- (02248498) --------------------------------------------------------
int __fastcall Function_2248498(int a1, int a2, int *a3)
{
  int *v3;
  int v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  int v9;
  int result;

  v3 = a3;
  v4 = a2;
  Call_FillMemWithValue(a3, 0, 0x1CCu);
  Function_20182cc(v3 + 110, 4u, 32);
  v7 = LoadFromNARC_8(141, 4u, v5, v6);
  Function_2248140(v3, (int)v7, 0xEu, 12, 2, (int (***)(void))v3 + 110);
  Function_2248124(*(uint *)(v4 + 60), v3, v8, v9);
  Call_FS_CloseFile(v7);
  Function_2005748(0x64Du);
  result = 456;
  v3[114] = 0;
  return result;
}

//----- (02248500) --------------------------------------------------------
uint __fastcall Function_2248500(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  uint result;

  v3 = a3;
  v4 = 0;
  v5 = a3 + 440;
  do
  {
    result = Function_22481bc(v3, v5);
    ++v4;
    v3 += 220;
  }
  while ( v4 < 2 );
  return result;
}

//----- (02248520) --------------------------------------------------------
uint *__fastcall Function_2248520(int a1, int a2, int a3, int a4)
{
  int v4;
  uint *result;
  int v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v4 = a3;
  result = *(uint **)(a3 + 456);
  v6 = a2;
  if ( result )
  {
    if ( result != (uint *)1 )
    {
      if ( result == (uint *)2 )
      {
        Function_2248224(a3 + 220);
        result = Function_2248124(*(uint *)(v6 + 60), (uint *)(v4 + 220), v15, v16);
      }
      return result;
    }
  }
  else
  {
    v7 = LoadFromNARC_8(141, 4u, a3, a4);
    Function_2248140((int *)(v4 + 220), (int)v7, 0xBu, 9, 2, (int (***)(void))(v4 + 440));
    Call_FS_CloseFile(v7);
    Function_2248124(*(uint *)(v6 + 60), (uint *)(v4 + 220), v8, v9);
    Function_2017348(v4 + 220, 0);
    ++*(uint *)(v4 + 456);
  }
  v10 = Function_22481f0(v4);
  result = Function_2248124(*(uint *)(v6 + 60), (uint *)v4, v11, v12);
  if ( v10 == 1 )
  {
    Function_2017348(v4 + 220, 1);
    Function_2017348(v4, 0);
    Function_2248124(*(uint *)(v6 + 60), (uint *)(v4 + 220), v13, v14);
    result = (uint *)456;
    ++*(uint *)(v4 + 456);
  }
  return result;
}

//----- (022485DC) --------------------------------------------------------
int *__fastcall Function_22485dc(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int *result;

  v3 = a3;
  v4 = 0;
  do
  {
    result = Function_2248254(v3);
    ++v4;
    v3 += 220;
  }
  while ( v4 < 2 );
  return result;
}

//----- (02248610) --------------------------------------------------------
int __fastcall Function_2248610(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v11;
  int v12;
  int v13;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( a1[50] )
    ErrorHandler();
  Function_205eaec(v5, &v11);
  Function_2017350(v4, v11, v12 + v6, v13 + v7);
  v8 = 0;
  v4[50] = 1;
  v9 = (int)(v4 + 30);
  do
  {
    Function_2017240(v9, 0);
    ++v8;
    v9 += 20;
  }
  while ( v8 < 4 );
  Function_2017348((int)v4, 1);
  return Function_2005748(0x627u);
}

//----- (02248678) --------------------------------------------------------
int __fastcall Function_2248678(int a1)
{
  int result;
  int v2;
  int v3;
  int v4;
  int v5;

  v5 = a1;
  result = *(uint *)(a1 + 200);
  if ( result )
  {
    v2 = 1;
    v3 = 0;
    v4 = v5 + 120;
    do
    {
      result = Function_2017204(v4, 4096);
      ++v3;
      v2 &= result;
      v4 += 20;
    }
    while ( v3 < 4 );
    if ( v2 == 1 )
    {
      *(uint *)(v5 + 200) = 0;
      result = Function_2017348(v5, 0);
    }
  }
  return result;
}

//----- (022486B4) --------------------------------------------------------
int __fastcall Function_22486b4(int *a1, int a2, int (***a3)(void), int *a4)
{
  int *v4;
  int *v5;
  int v6;
  int *v7;
  int v9;
  int (***v10)(void);

  v9 = a2;
  v10 = a3;
  v4 = a1;
  v5 = a4;
  Call_FillMemWithValue(a1, 0, 0xCCu);
  Function_2017258(v4, v9);
  v6 = 0;
  v7 = v4 + 30;
  do
  {
    Function_2017190(v7, v9, *v5, v10);
    Function_201727c((uint)v4, (int)v7);
    ++v6;
    ++v5;
    v7 += 5;
  }
  while ( v6 < 4 );
  return Function_2017348((int)v4, 0);
}

//----- (02248700) --------------------------------------------------------
int *__fastcall Function_2248700(int *a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  int *v5;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  v5 = a1 + 30;
  do
  {
    Function_20171a0(v5, v3);
    ++v4;
    v5 += 5;
  }
  while ( v4 < 4 );
  return Call_FillMemWithValue(v2, 0, 0xCCu);
}

//----- (02248728) --------------------------------------------------------
int __fastcall Function_2248728(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  uint *v5;
  int v6;
  int result;
  int v8;
  int v9;
  int v10;
  int v11;

  v11 = a4;
  v4 = a1;
  Function_205eaec(*(uint *)(a1[824] + 60), &v8);
  if ( v8 != v4[828] || v9 >= v4[829] || v10 <= v4[830] )
  {
    v4[826] = 0x20000;
    v4[827] = 0x10000;
  }
  else
  {
    v4[826] = 0;
    v4[827] = 0x20000;
  }
  v5 = v4 + 828;
  v6 = v9;
  *v5 = v8;
  v5[1] = v6;
  result = v10;
  v4[830] = v10;
  return result;
}

//----- (02248798) --------------------------------------------------------
int __fastcall Function_2248798(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  uint *v6;

  v4 = a1;
  Function_2248728(a1, a2, a3, a4);
  v5 = 0;
  v6 = v4;
  do
  {
    if ( !v6[54] )
      return Function_2248610(&v4[51 * v5 + 4], *(uint *)(v4[824] + 60), v4[826], v4[827]);
    ++v5;
    v6 += 51;
  }
  while ( v5 < 16 );
  return ErrorHandler();
}

//----- (022487E0) --------------------------------------------------------
int __fastcall Function_22487e0(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = 0;
  v2 = a1 + 16;
  do
  {
    result = Function_2248678(v2);
    ++v1;
    v2 += 204;
  }
  while ( v1 < 16 );
  return result;
}

//----- (022487F8) --------------------------------------------------------
uint __fastcall Function_22487f8(int a1, int a2, int *a3)
{
  int *v3;
  int v4;
  int v5;
  int *v6;
  int v7;
  int *v8;
  int v9;
  int *v10;
  int v12;

  v3 = a3;
  v12 = a2;
  Call_FillMemWithValue(a3, 0, 0xD10u);
  Function_20182cc(v3 + 831, 4u, 32);
  v6 = LoadFromNARC_8(141, 4u, v4, v5);
  Function_20170d8(v3, (int)v6, 8u, 4);
  v7 = 0;
  v8 = v3;
  do
  {
    v8[820] = (int)Function_200723c((int)v6, v7++ + 4, 0, 4, 0);
    ++v8;
  }
  while ( v7 < 4 );
  v9 = 0;
  v10 = v3 + 4;
  do
  {
    Function_22486b4(v10, (int)v3, (int (***)(void))v3 + 831, v3 + 820);
    ++v9;
    v10 += 51;
  }
  while ( v9 < 16 );
  v3[824] = v12;
  Function_205eaec(*(uint *)(v3[824] + 60), v3 + 828);
  v3[835] = 0;
  return Call_FS_CloseFile(v6);
}

//----- (0224889C) --------------------------------------------------------
uint __fastcall Function_224889c(int a1, int a2, int *a3)
{
  int *v3;
  int v4;
  int *v5;
  int v6;
  uint result;

  v3 = a3;
  v4 = 0;
  v5 = a3 + 4;
  do
  {
    Function_2248700(v5, (int)(v3 + 831));
    ++v4;
    v5 += 51;
  }
  while ( v4 < 16 );
  Function_2017110(v3);
  v6 = 0;
  do
  {
    result = free(v3[820]);
    ++v6;
    ++v3;
  }
  while ( v6 < 4 );
  return result;
}

//----- (022488D8) --------------------------------------------------------
int __fastcall Function_22488d8(int a1, int a2, uint *a3, int a4)
{
  uint *v4;
  int result;
  int v6;

  v4 = a3;
  result = a3[835];
  if ( !result )
  {
    v6 = a3[825] - 1;
    v4[825] = v6;
    if ( v4[825] < 0 )
    {
      v4[825] = 4;
      Function_2248798(v4, 3300, v6, a4);
    }
    result = Function_22487e0((int)v4);
  }
  return result;
}

//----- (02248914) --------------------------------------------------------
int *__fastcall Function_2248914(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int *result;

  v3 = 0;
  v4 = a3 + 16;
  do
  {
    result = Function_2017294(v4);
    ++v3;
    v4 += 204;
  }
  while ( v3 < 16 );
  return result;
}

//----- (02248948) --------------------------------------------------------
int __fastcall Function_2248948(int *a1, uint *a2)
{
  int v2;
  int *v3;
  int result;

  v2 = (int)a2;
  v3 = a1;
  result = a2[2];
  if ( result )
  {
    if ( result == 1 )
    {
      ((void (__fastcall *)(uint))*(&off_2249834 + a2[3]))(*a2);
      **(ushort **)(v2 + 4) = 1;
      free(v2);
      result = Call_RemoveTaskFromTaskList(v3);
    }
  }
  else
  {
    result = ((int (__fastcall *)(uint))*(&off_224984C + a2[3]))(*a2);
    if ( result == 1 )
    {
      result = *(uint *)(v2 + 8) + 1;
      *(uint *)(v2 + 8) = result;
    }
  }
  return result;
}

//----- (0224899C) --------------------------------------------------------
uint *__fastcall Function_6_224899c(int a1, ushort *a2, int a3, uint a4)
{
  int v4;
  ushort *v5;
  int v6;
  uint *v7;
  uchar *v8;
  int v9;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = (uint *)malloc(a4, 16);
  v8 = v7;
  v9 = 16;
  do
  {
    *v8++ = 0;
    --v9;
  }
  while ( v9 );
  *v7 = ((int (__fastcall *)(int))*(&off_2249840 + v6))(v4);
  v7[1] = v5;
  v7[3] = v6;
  *v5 = 0;
  return AddTaskToTaskList1((int)Function_2248948, (int)v7, 0);
}

//----- (022489E4) --------------------------------------------------------
int __fastcall Function_22489e4(int a1, uint a2, int a3, uint a4)
{
  uchar *v4;
  int result;
  uint v6;
  int v7;
  int v8;
  char *v9;
  char v10;
  char v11[16];
  uint v12;

  v12 = a4;
  v4 = (uchar *)a4;
  MI_CpuCopy8(a3, a4 + 388 + (a1 << 8), a2, a4);
  ++v4[1412];
  result = 295;
  v6 = (uchar)v4[295];
  if ( (uchar)v4[1412] >= v6 )
  {
    v7 = 0;
    if ( (int)v6 > 0 )
    {
      v8 = (int)(v4 + 388);
      v9 = v11;
      do
      {
        *(uint *)v9 = v8;
        v9 += 4;
        ++v7;
        v8 += 256;
      }
      while ( v7 < (uchar)v4[295] );
    }
    v4[284] = Function_2248a94(v11);
    v4[285] = v10;
    result = 290;
    v4[290] = *(uchar *)(*(uint *)&v11[4 * (uchar)v4[284]] + 2);
  }
  return result;
}

//----- (02248A64) --------------------------------------------------------
BOOL __fastcall Function_6_2248a64(uchar *a1, int a2, int a3, int a4)
{
  int v5;

  v5 = a4;
  LOBYTE(v5) = a1[293];
  BYTE1(v5) = a1[291];
  BYTE2(v5) = a1[290];
  return Function_20359dc(26, (int)&v5, 4) == 1;
}

//----- (02248A94) --------------------------------------------------------
int __fastcall Function_2248a94(uchar **a1, int a2, uchar *a3)
{
  int v3;
  int v4;
  uchar **v5;

  v3 = 0;
  v4 = 0;
  if ( a2 > 0 )
  {
    v5 = a1;
    do
    {
      if ( *a1[v3] < (uint)**v5 )
        v3 = v4;
      ++v4;
      ++v5;
    }
    while ( v4 < a2 );
  }
  *a3 = *a1[v3];
  return v3;
}

//----- (02248AC8) --------------------------------------------------------
int __fastcall Function_2248ac8(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint v7;
  int result;

  v4 = a3;
  v5 = a4;
  v6 = GetPkmnDataSize();
  MI_CpuCopy8(v4, *(uint *)(v5 + 4 * *(uchar *)(v4 + v6)), v6, v7);
  result = 1412;
  ++*(uchar *)(v5 + 1412);
  return result;
}

//----- (02248AF0) --------------------------------------------------------
BOOL __fastcall BeSeq_AddToPointer(int a1, char a2, int a3)
{
  char v3;
  int v4;
  int v5;
  int v6;
  uint v7;
  BOOL v8;

  v3 = a2;
  v4 = a3;
  v5 = GetPkmnDataSize();
  v6 = malloc(0x14u, v5 + 1);
  MI_CpuCopy8(v4, v6, v5, v7);
  *(uchar *)(v6 + v5) = v3;
  v8 = Function_20359dc(27, v6, v5 + 1) == 1;
  free(v6);
  return v8;
}

//----- (02248B30) --------------------------------------------------------
uint *__fastcall Function_2248b30(int a1, int a2, int a3, uint *a4)
{
  int v4;
  uint *v5;
  uint v6;
  int v7;
  int v8;
  uint *result;
  int v10;
  uint *v11;

  v10 = a3;
  v11 = a4;
  v4 = 0;
  v5 = a4;
  v7 = GetPkmnDataSize();
  v8 = 0;
  do
  {
    MI_CpuCopy8(v10 + v8, *v5, v7, v6);
    ++v4;
    ++v5;
    v8 += v7;
  }
  while ( v4 < 4 );
  result = v11;
  ++*((uchar *)v11 + 1412);
  return result;
}

//----- (02248B70) --------------------------------------------------------
BOOL __fastcall Function_2248b70(int a1, int *a2)
{
  int v2;
  int *v3;
  uint v4;
  int v5;
  int v6;
  int v7;
  int v9;

  v2 = a1;
  v3 = a2;
  v5 = GetPkmnDataSize();
  v6 = 0;
  v9 = v2 + 1413;
  v7 = 0;
  do
  {
    MI_CpuCopy8(*v3, v9 + v7, v5, v4);
    ++v6;
    v7 += v5;
    ++v3;
  }
  while ( v6 < 4 );
  return Function_203597c(28, v9, 4 * v5) == 1;
}

//----- (02248BC0) --------------------------------------------------------
int __fastcall Function_2248bc0(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;

  v4 = a4;
  MI_CpuCopy8(a3, a4 + 16 + 48 * *(uchar *)(a3 + 48), 0x30u, 48 * *(uchar *)(a3 + 48));
  result = 1412;
  ++*(uchar *)(v4 + 1412);
  return result;
}

//----- (02248BE8) --------------------------------------------------------
BOOL __fastcall Function_6_2248be8(int a1, char a2, int a3)
{
  char v3;
  int v4;
  int v5;
  uint v6;
  BOOL v7;

  v3 = a2;
  v4 = a3;
  v5 = malloc(0x14u, 49);
  MI_CpuCopy8(v4, v5, 0x30u, v6);
  *(uchar *)(v5 + 48) = v3;
  v7 = Function_20359dc(29, v5, 49) == 1;
  free(v5);
  return v7;
}

//----- (02248C28) --------------------------------------------------------
uint __fastcall Function_2248c28(int a1, int a2, int a3, uint a4)
{
  int v4;
  int v5;
  uint v6;
  uint result;
  uint v8;

  v4 = a3;
  v8 = a4;
  v5 = 0;
  v6 = a4 + 208;
  do
  {
    MI_CpuCopy8(v4 + 8 * v5++, v6, 8u, a4);
    v6 += 8;
  }
  while ( v5 < 3 );
  *(uchar *)(v8 + 286) = *(uchar *)(v4 + 24);
  result = v8;
  ++*(uchar *)(v8 + 1412);
  return result;
}

//----- (02248C68) --------------------------------------------------------
BOOL __fastcall Function_6_2248c68(int a1, int a2, int a3)
{
  int v3;
  uint v4;
  int v5;
  int v6;
  BOOL v7;
  int v9;

  v9 = a1;
  v3 = a3;
  v5 = malloc(0x14u, 25);
  v6 = 0;
  do
  {
    MI_CpuCopy8(v3, v5 + 8 * v6++, 8u, v4);
    v3 += 8;
  }
  while ( v6 < 3 );
  *(uchar *)(v5 + 24) = *(uchar *)(v9 + 286);
  v7 = Function_20359dc(30, v5, 25) == 1;
  free(v5);
  return v7;
}

//----- (02248CBC) --------------------------------------------------------
int __fastcall Function_2248cbc(int a1, int a2, ushort *a3, int a4)
{
  ushort *v4;
  int v5;
  int v6;
  int v7;
  int result;

  v4 = a3;
  v5 = a4;
  v6 = a4 + 232;
  v7 = 4 * *(uchar *)a3;
  Function_20237e8(*(uint *)(a4 + 232 + v7), a2);
  Function_2023d28(*(ushort **)(v6 + v7), v4 + 2);
  result = 1412;
  ++*(uchar *)(v5 + 1412);
  return result;
}

//----- (02248CE8) --------------------------------------------------------
BOOL __fastcall Function_6_2248ce8(int a1, char a2, int a3, int a4)
{
  char v4;
  uchar *v5;
  uint v6;
  BOOL v7;
  char v9;
  int v10;

  v10 = a4;
  v4 = a2;
  Function_2023df0(a3, &v9, 8u);
  v5 = (uchar *)malloc(0x14u, 20);
  MI_CpuCopy8((int)&v9, (uint)(v5 + 4), 0x10u, v6);
  *v5 = v4;
  v5[1] = 16;
  v5[2] = 0;
  v5[3] = 0;
  v7 = Function_20359dc(31, (int)v5, 20) == 1;
  free((int)v5);
  return v7;
}

//----- (02248D38) --------------------------------------------------------
int __fastcall Function_2248d38(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;

  v4 = a3;
  v5 = a4;
  v6 = Function_202cc64();
  MI_CpuCopy8(v4, *(uint *)(v5 + 4 * *(uchar *)(v4 + v6) + 348), v6, v5 + 4 * *(uchar *)(v4 + v6));
  result = 1412;
  ++*(uchar *)(v5 + 1412);
  return result;
}

//----- (02248D64) --------------------------------------------------------
BOOL __fastcall Function_2248d64(int a1, char a2, int a3)
{
  int v3;
  char v4;
  int v5;
  uint v6;
  int v7;
  int v8;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v7 = Function_202cc64();
  v8 = v3 + 1413;
  if ( v5 )
    MI_CpuCopy8(v5, v8, v7, v6);
  *(uchar *)(v8 + v7) = v4;
  return Function_203597c(36, v8, v7 + 1) == 1;
}

//----- (02248DA0) --------------------------------------------------------
int __fastcall Function_2248da0(int a1, int a2, int a3, int a4)
{
  int v4;
  uchar *v5;
  int result;

  v4 = *(uchar *)(a3 + 6);
  v5 = (uchar *)(a4 + v4);
  v5[264] = *(uchar *)a3;
  v5[268] = *(uchar *)(a3 + 1);
  v5[272] = *(uchar *)(a3 + 2);
  *(ushort *)(a4 + 2 * v4 + 276) = *(ushort *)(a3 + 4);
  result = 1412;
  ++*(uchar *)(a4 + 1412);
  return result;
}

//----- (02248DD8) --------------------------------------------------------
BOOL __fastcall Function_6_2248dd8(int a1, char a2, int a3)
{
  char v3;
  int v4;
  int v5;
  uint v6;
  BOOL v7;

  v3 = a2;
  v4 = a3;
  v5 = malloc(0x14u, 7);
  MI_CpuCopy8(v4, v5, 6u, v6);
  *(uchar *)(v5 + 6) = v3;
  v7 = Function_20359dc(37, v5, 7) == 1;
  free(v5);
  return v7;
}

