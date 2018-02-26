//----- (0203A024) --------------------------------------------------------
uint __fastcall IsMapNrValid(uint result)
{
  if ( result >= 0x251 )
  {
    ErrorHandler();
    result = 3;
  }
  return result;
}

//----- (0203A038) --------------------------------------------------------
int __fastcall GetMapAreaData(uint a1)
{
  return LOBYTE(MapHeaders[6 * IsMapNrValid(a1)]);
}

//----- (0203A04C) --------------------------------------------------------
int __fastcall Function_203a04c(uint a1)
{
  return BYTE1(MapHeaders[6 * IsMapNrValid(a1)]);
}

//----- (0203A060) --------------------------------------------------------
int __fastcall GetMapMatrix(uint a1)
{
  int result

  result = HIWORD(MapHeaders[6 * IsMapNrValid(a1)]);
  if ( result == 22 && GameIDNr == 11 )
    result = 23;
  return result;
}

//----- (0203A088) --------------------------------------------------------
int __fastcall GetMapTexts(uint a1)
{
  return LOWORD(dword_20E6024[6 * IsMapNrValid(a1)]);
}

//----- (0203A09C) --------------------------------------------------------
int __fastcall GetMapScripts(uint a1)
{
  return LOWORD(dword_20E6020[6 * IsMapNrValid(a1)]);
}

//----- (0203A0B0) --------------------------------------------------------
int __fastcall GetMapLevelScripts(uint a1)
{
  return HIWORD(dword_20E6020[6 * IsMapNrValid(a1)]);
}

//----- (0203A0C4) --------------------------------------------------------
int __fastcall GetMapMusicDay(uint a1)
{
  return HIWORD(dword_20E6024[6 * IsMapNrValid(a1)]);
}

//----- (0203A0D8) --------------------------------------------------------
int __fastcall GetMapMusicNight(uint a1)
{
  return LOWORD(dword_20E6028[6 * IsMapNrValid(a1)]);
}

//----- (0203A0EC) --------------------------------------------------------
BOOL __fastcall HasMapWildPkmn(uint a1)
{
  return HIWORD(dword_20E6028[6 * IsMapNrValid(a1)]) != 0xFFFF;
}

//----- (0203A110) --------------------------------------------------------
int __fastcall GetMapWildPkmn(uint a1)
{
  return HIWORD(dword_20E6028[6 * IsMapNrValid(a1)]);
}

//----- (0203A124) --------------------------------------------------------
int __fastcall GetMapEvents(uint a1)
{
  return LOWORD(dword_20E602C[6 * IsMapNrValid(a1)]);
}

//----- (0203A138) --------------------------------------------------------
int __fastcall GetMapName(uint a1)
{
  return HIWORD(MapHeaders[6 * IsMapNrValid(a1) + 4]) & 0xFF;
}

//----- (0203A154) --------------------------------------------------------
int __fastcall GetMapNameFrame(uint a1)
{
  return (ushort)(HIWORD(MapHeaders[6 * IsMapNrValid(a1) + 4]) >> 16);
}

//----- (0203A174) --------------------------------------------------------
int __fastcall GetMapWeather(uint a1)
{
  return LOBYTE(dword_20E6030[6 * IsMapNrValid(a1)]);
}

//----- (0203A188) --------------------------------------------------------
int __fastcall GetMapCamera(uint a1)
{
  return BYTE1(dword_20E6030[6 * IsMapNrValid(a1)]);
}

//----- (0203A19C) --------------------------------------------------------
uint __fastcall Function_203a19c(uint a1)
{
  return (uint)HIWORD(MapHeaders[6 * IsMapNrValid(a1) + 5]) << 20 >> 27;
}

//----- (0203A1B8) --------------------------------------------------------
uint __fastcall Function_203a1b8(uint a1)
{
  return (uint)HIWORD(MapHeaders[6 * IsMapNrValid(a1) + 5]) << 17 >> 31;
}

//----- (0203A1D4) --------------------------------------------------------
uint __fastcall Function_203a1d4(uint a1)
{
  return (uint)HIWORD(MapHeaders[6 * IsMapNrValid(a1) + 5]) << 16 >> 31;
}

//----- (0203A1F0) --------------------------------------------------------
uint __fastcall Function_203a1f0(uint a1)
{
  return (uint)HIWORD(MapHeaders[6 * IsMapNrValid(a1) + 5]) << 19 >> 31;
}

//----- (0203A20C) --------------------------------------------------------
int __fastcall Function_203a20c(uint a1)
{
  return HIWORD(MapHeaders[6 * IsMapNrValid(a1) + 5]) & 0x7F;
}

//----- (0203A228) --------------------------------------------------------
BOOL __fastcall Function_203a228(uint a1)
{
  uint v1
  BOOL result

  v1 = a1;
  if ( Function_203a1d4(a1) )
    result = Function_203a20c(v1) != 1;
  else
    result = 0;
  return result;
}

//----- (0203A24C) --------------------------------------------------------
BOOL __fastcall IsMapMatrixEqualZero(uint a1)
{
  return GetMapMatrix(a1) == 0;
}

//----- (0203A260) --------------------------------------------------------
BOOL __fastcall Function_203a260(uint a1)
{
  return Function_203a20c(a1) == 5;
}

//----- (0203A274) --------------------------------------------------------
BOOL __fastcall Function_203a274(uint a1)
{
  return Function_203a20c(a1) == 3;
}

//----- (0203A288) --------------------------------------------------------
BOOL __fastcall Function_203a288(uint a1)
{
  uint v1

  v1 = a1;
  return Function_203a20c(a1) == 4 || Function_203a20c(v1) == 5;
}

//----- (0203A2A8) --------------------------------------------------------
BOOL __fastcall Function_203a2a8(uint a1)
{
  uint v1

  v1 = a1;
  return Function_203a20c(a1) == 1 || Function_203a20c(v1) == 2;
}

//----- (0203A2C8) --------------------------------------------------------
BOOL __fastcall Function_203a2c8(uint a1)
{
  return Function_203a260(a1) != 0;
}

//----- (0203A2DC) --------------------------------------------------------
BOOL __fastcall Function_203a2dc(int a1)
{
  return a1 == 466;
}

//----- (0203A2F0) --------------------------------------------------------
BOOL __fastcall Function_203a2f0(int a1)
{
  return a1 == 219;
}

//----- (0203A2FC) --------------------------------------------------------
BOOL __fastcall Function_203a2fc(int a1)
{
  return a1 == 287;
}

//----- (0203A310) --------------------------------------------------------
BOOL __fastcall Function_203a310(int a1)
{
  return a1 == 253;
}

//----- (0203A31C) --------------------------------------------------------
BOOL __fastcall Function_203a31c(int a1)
{
  return a1 == 220 || (uint)(a1 - 584) <= 1;
}

//----- (0203A334) --------------------------------------------------------
int __fastcall Function_203a334(int a1)
{
  short *v1
  uint v2

  v1 = &Unknown_20e5fa4;
  v2 = 0;
  do
  {
    if ( a1 == (ushort)*v1 )
      return 1;
    ++v2;
    ++v1;
  }
  while ( v2 < 0x12 );
  return 0;
}

//----- (0203A354) --------------------------------------------------------
int __fastcall Function_203a354(int a1)
{
  short *v1
  uint v2

  v1 = Unknown_20e5fc8;
  v2 = 0;
  do
  {
    if ( a1 == (ushort)*v1 )
      return (ushort)Unknown_20e5fc8[v2 + 1];
    v2 += 2;
    v1 += 2;
  }
  while ( v2 < 0x2A );
  return 0;
}

//----- (0203A378) --------------------------------------------------------
int __fastcall Malloc_OverWorldData_Overworlds(int a1, uint a2)
{
  int v2
  uint v3
  int result

  v2 = a1;
  v3 = a2;
  if ( *(uint *)(a1 + 20) )
    ErrorHandler();
  result = malloc(v3, 2760);
  *(uint *)(v2 + 20) = result;
  return result;
}

//----- (0203A398) --------------------------------------------------------
int __fastcall Free_OverWorldData_Overworlds(int a1)
{
  int v1

  v1 = a1;
  if ( !*(uint *)(a1 + 20) )
    ErrorHandler();
  return free(*(uint *)(v1 + 20));
}

//----- (0203A3B0) --------------------------------------------------------
int __fastcall LoadMap_EventsWildPkmnScript(int a1, uint a2)
{
  int v2
  uint v3

  v2 = a1;
  v3 = a2;
  if ( !*(uint *)(a1 + 20) )
    ErrorHandler();
  LoadMapEvents(*(uint *)(v2 + 20), v3);
  ParseZoneEventsOfMap(*(uint **)(v2 + 20));
  LoadMapWildPkmn((int *)(*(uint *)(v2 + 20) + 2336), v3);
  return LoadMapLevelScript(*(uint *)(v2 + 20), v3);
}

//----- (0203A3E8) --------------------------------------------------------
int __fastcall LoadMapEvents(int a1, uint a2)
{
  int v2
  int v3
  int v4
  int v5

  v2 = a1;
  v3 = GetMapEvents(a2);
  if ( (uint)LoadFromNARC_7(32, v3, v4, v5) >= 0x800 )
    ErrorHandler();
  return LoadFromNARC(v2 + 32, 32, v3);
}

//----- (0203A418) --------------------------------------------------------
uint __fastcall Function_203a418(int a1)
{
  int v1
  uint result
  int v3

  v1 = a1;
  result = *(uint *)(a1 + 20);
  v3 = *(uint *)(result + 4);
  if ( !result )
    result = ErrorHandler();
  if ( v3 )
    result = Function_2062068(*(uint *)(v1 + 56), **(uint **)(v1 + 28), v3, *(char **)(*(uint *)(v1 + 20) + 20));
  return result;
}

//----- (0203A440) --------------------------------------------------------
int __fastcall Function_203a440(int a1)
{
  return *(uint *)(*(uint *)(a1 + 20) + 16);
}

//----- (0203A448) --------------------------------------------------------
int __fastcall Function_203a448(int a1)
{
  return **(uint **)(a1 + 20);
}

//----- (0203A450) --------------------------------------------------------
uint __fastcall GetPtrToWarpData(int a1, uint a2)
{
  int v2
  uint result

  v2 = *(uint *)(a1 + 20);
  if ( a2 < *(uint *)(v2 + 8) )
    result = *(uint *)(v2 + 24) + 12 * a2;
  else
    result = 0;
  return result;
}

//----- (0203A468) --------------------------------------------------------
uint __fastcall Function_203a468(int a1, int a2, int a3)
{
  int v3
  uint v4
  int v5
  ushort *v6

  v3 = *(uint *)(a1 + 20);
  v4 = 0;
  if ( !*(uint *)(v3 + 8) )
    return -1;
  v5 = 0;
  v6 = *(ushort **)(v3 + 24);
  while ( a2 != *v6 || a3 != *(ushort *)(*(uint *)(v3 + 24) + v5 + 2) )
  {
    ++v4;
    v6 += 6;
    v5 += 12;
    if ( v4 >= *(uint *)(v3 + 8) )
      return -1;
  }
  return v4;
}

//----- (0203A4A4) --------------------------------------------------------
int __fastcall Function_203a4a4(int a1)
{
  return *(uint *)(*(uint *)(a1 + 20) + 12);
}

//----- (0203A4AC) --------------------------------------------------------
int __fastcall Function_203a4ac(int a1)
{
  return *(uint *)(*(uint *)(a1 + 20) + 28);
}

//----- (0203A4B4) --------------------------------------------------------
int __fastcall Function_203a4b4(int a1)
{
  return *(uint *)(*(uint *)(a1 + 20) + 4);
}

//----- (0203A4BC) --------------------------------------------------------
int __fastcall Function_203a4bc(int a1)
{
  return *(uint *)(*(uint *)(a1 + 20) + 20);
}

//----- (0203A4C4) --------------------------------------------------------
int __fastcall SetOverworldPosition(int a1, int a2, short a3, short a4)
{
  int v4
  uint v5
  short v6
  uint v7
  ushort *v8
  int v9
  int result

  v4 = *(uint *)(a1 + 20);
  v5 = *(uint *)(v4 + 4);
  v6 = a3;
  v7 = 0;
  if ( v5 )
  {
    v8 = *(ushort **)(v4 + 20);
    while ( a2 != *v8 )
    {
      ++v7;
      v8 += 16;
      if ( v7 >= v5 )
        goto LABEL_6;
    }
    v9 = *(uint *)(v4 + 20) + 32 * v7;
    *(ushort *)(v9 + 24) = v6;
    *(ushort *)(v9 + 26) = a4;
    result = 1;
  }
  else
  {
LABEL_6:
    ErrorHandler();
    result = 0;
  }
  return result;
}

//----- (0203A4FC) --------------------------------------------------------
int __fastcall Function_203a4fc(int a1, int a2, short a3)
{
  int v3
  uint v4
  uint v5
  ushort *v6
  int result

  v3 = *(uint *)(a1 + 20);
  v4 = 0;
  v5 = *(uint *)(v3 + 4);
  if ( v5 )
  {
    v6 = *(ushort **)(v3 + 20);
    while ( a2 != *v6 )
    {
      ++v4;
      v6 += 16;
      if ( v4 >= v5 )
        goto LABEL_6;
    }
    *(ushort *)(*(uint *)(v3 + 20) + 32 * v4 + 12) = a3;
    result = 1;
  }
  else
  {
LABEL_6:
    ErrorHandler();
    result = 0;
  }
  return result;
}

//----- (0203A52C) --------------------------------------------------------
int __fastcall Function_203a52c(int a1, int a2, short a3)
{
  int v3
  uint v4
  uint v5
  ushort *v6
  int result

  v3 = *(uint *)(a1 + 20);
  v4 = 0;
  v5 = *(uint *)(v3 + 4);
  if ( v5 )
  {
    v6 = *(ushort **)(v3 + 20);
    while ( a2 != *v6 )
    {
      ++v4;
      v6 += 16;
      if ( v4 >= v5 )
        goto LABEL_6;
    }
    *(ushort *)(*(uint *)(v3 + 20) + 32 * v4 + 4) = a3;
    result = 1;
  }
  else
  {
LABEL_6:
    ErrorHandler();
    result = 0;
  }
  return result;
}

//----- (0203A55C) --------------------------------------------------------
int __fastcall Function_203a55c(int a1, int a2, short a3, short a4)
{
  int v4

  v4 = *(uint *)(*(uint *)(a1 + 20) + 24);
  *(ushort *)(v4 + 12 * a2) = a3;
  *(ushort *)(v4 + 12 * a2 + 2) = a4;
  return 1;
}

//----- (0203A574) --------------------------------------------------------
int __fastcall Function_203a574(int a1, int a2, short a3)
{
  *(ushort *)(*(uint *)(*(uint *)(a1 + 20) + 24) + 12 * a2 + 4) = a3;
  return 1;
}

//----- (0203A584) --------------------------------------------------------
int __fastcall Function_203a584(int a1, int a2, short a3)
{
  *(ushort *)(*(uint *)(*(uint *)(a1 + 20) + 24) + 12 * a2 + 6) = a3;
  return 1;
}

//----- (0203A594) --------------------------------------------------------
int __fastcall Function_203a594(int a1, int a2, int a3, int a4)
{
  int v4
  int v5
  int v6

  v4 = a3;
  v5 = a4;
  v6 = Function_203a440(a1) + 20 * a2;
  *(uint *)(v6 + 4) = v4;
  *(uint *)(v6 + 8) = v5;
  return 1;
}

//----- (0203A5B0) --------------------------------------------------------
uint *__fastcall ParseZoneEventsOfMap(uint *result)
{
  int v1
  uint *v2
  int v3
  int v4
  int v5
  int v6
  int v7
  int v8
  int v9
  int v10
  int *v11
  int v12

  v1 = result[8];
  v2 = result + 9;
  *result = v1;
  if ( v1 )
    result[4] = v2;
  else
    result[4] = 0;
  v3 = 5 * *result;
  v4 = (int)&v2[v3];
  v5 = v2[v3];
  v6 = v4 + 4;
  result[1] = v5;
  if ( v5 )
    result[5] = v6;
  else
    result[5] = 0;
  v7 = 32 * result[1];
  v8 = v6 + v7;
  v9 = *(uint *)(v6 + v7);
  v10 = v8 + 4;
  result[2] = v9;
  if ( v9 )
    result[6] = v10;
  else
    result[6] = 0;
  v11 = (int *)(v10 + 12 * result[2]);
  v12 = *v11;
  result[3] = *v11;
  if ( v12 )
    result[7] = v11 + 1;
  else
    result[7] = 0;
  return result;
}

//----- (0203A614) --------------------------------------------------------
int __fastcall LoadMapWildPkmn(int *a1, uint a2)
{
  uint v2
  int *v3
  int result
  int v5

  v2 = a2;
  v3 = a1;
  Call_FillMemWithValue(a1, 0, 0x1A8u);
  result = HasMapWildPkmn(v2);
  if ( result )
  {
    v5 = GetMapWildPkmn(v2);
    result = LoadFromNARC((int)v3, 161, v5);
  }
  return result;
}

//----- (0203A640) --------------------------------------------------------
int __fastcall GetMapWildPkmnAdress(int a1)
{
  return *(uint *)(a1 + 20) + 2336;
}

//----- (0203A64C) --------------------------------------------------------
int __fastcall LoadMapLevelScript(int a1, uint a2)
{
  int v2
  int v3
  int v4
  int v5

  v2 = a1;
  v3 = GetMapLevelScripts(a2);
  MIi_CpuClearFast(0, (uint *)(v2 + 2080), 0x100u);
  if ( (uint)LoadFromNARC_7(10, v3, v4, v5) >= 0x100 )
    ErrorHandler();
  return LoadFromNARC(v2 + 2080, 10, v3);
}

//----- (0203A68C) --------------------------------------------------------
int __fastcall Function_203a68c(int a1)
{
  int v1

  v1 = a1;
  if ( !*(uint *)(a1 + 20) )
    ErrorHandler();
  return *(uint *)(v1 + 20) + 2080;
}

//----- (0203A6A4) --------------------------------------------------------
int __fastcall Function_203a6a4(int a1, int a2, int a3)
{
  int v3
  uint v4
  int v5
  int v6

  v3 = *(uint *)(a1 + 20);
  v4 = 0;
  if ( !*(uint *)(v3 + 4) )
    return 1;
  v5 = 0;
  v6 = *(uint *)(v3 + 20);
  while ( a2 != *(ushort *)(v6 + 24) || a3 != *(ushort *)(*(uint *)(v3 + 20) + v5 + 26) )
  {
    ++v4;
    v6 += 32;
    v5 += 32;
    if ( v4 >= *(uint *)(v3 + 4) )
      return 1;
  }
  return 0;
}

//----- (0203A6DC) --------------------------------------------------------
int GetSizeOfVariableAreaAdress_6()
{
  return 160;
}

//----- (0203A6E0) --------------------------------------------------------
int Function_203a6e0()
{
  return 5120;
}

//----- (0203A6E8) --------------------------------------------------------
int __fastcall Function_203a6e8(uint *a1)
{
  return MIi_CpuClear32(0, a1, 5120);
}

//----- (0203A6F8) --------------------------------------------------------
int __fastcall ClearVariableAreaAdress_6(int *a1)
{
  int *v1
  int result

  v1 = a1;
  Call_FillMemWithValue(a1, 0, 0xA0u);
  Function_20556c4((int)(v1 + 27));
  Function_205ec34((int)(v1 + 35));
  result = Function_203a7ec();
  *((ushort *)v1 + 52) = result;
  return result;
}

//----- (0203A720) --------------------------------------------------------
void AddVariableAreaAdress_6_MapData0()
{
  ;
}

//----- (0203A724) --------------------------------------------------------
int __fastcall AddVariableAreaAdress_6_MapData1(int a1)
{
  return a1 + 20;
}

//----- (0203A728) --------------------------------------------------------
int __fastcall AddVariableAreaAdress_6_MapData2(int a1)
{
  return a1 + 40;
}

//----- (0203A72C) --------------------------------------------------------
int __fastcall AddVariableAreaAdress_6_MapData4(int a1)
{
  return a1 + 80;
}

//----- (0203A730) --------------------------------------------------------
int __fastcall AddVariableAreaAdress_6_MapData3(int a1)
{
  return a1 + 60;
}

//----- (0203A734) --------------------------------------------------------
int __fastcall CopyToVariableAreaAdress_6_3c(uint *a1, int *a2)
{
  int *v2
  uint *v3
  int v4
  int v5
  int v6
  int v7
  int result

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  v5 = a2[1];
  v2 += 2;
  v3 += 15;
  *v3 = v4;
  v3[1] = v5;
  v3 += 2;
  v6 = *v2;
  v7 = v2[1];
  v2 += 2;
  *v3 = v6;
  v3[1] = v7;
  result = *v2;
  v3[2] = *v2;
  return result;
}

//----- (0203A748) --------------------------------------------------------
int __fastcall AddVariableAreaAdress_6_64(int a1)
{
  return a1 + 100;
}

//----- (0203A74C) --------------------------------------------------------
int __fastcall GetVariableAreaAdress_6_66(int a1)
{
  return *(ushort *)(a1 + 102);
}

//----- (0203A754) --------------------------------------------------------
short *__fastcall SetVariableAreaAdress_6_66(int a1, short a2)
{
  short *result

  result = (short *)(a1 + 102);
  *result = a2;
  return result;
}

//----- (0203A75C) --------------------------------------------------------
int __fastcall GetVariableAreaAdress_6_68(int a1)
{
  return *(ushort *)(a1 + 104);
}

//----- (0203A764) --------------------------------------------------------
short *__fastcall SetVariableAreaAdress_6_68(int a1, short a2)
{
  short *result

  result = (short *)(a1 + 104);
  *result = a2;
  return result;
}

//----- (0203A76C) --------------------------------------------------------
int __fastcall AddVariableAreaAdress_6_6c(int a1)
{
  return a1 + 108;
}

//----- (0203A770) --------------------------------------------------------
int __fastcall GetVariableAreaAdress_6_6a(int a1)
{
  return *(uchar *)(a1 + 106);
}

//----- (0203A778) --------------------------------------------------------
char *__fastcall SetVariableAreaAdress_6_6a(int a1, char a2)
{
  char *result

  result = (char *)(a1 + 106);
  *result = a2;
  return result;
}

//----- (0203A780) --------------------------------------------------------
int __fastcall AddVariableAreaAdress_6_8c(int a1)
{
  return a1 + 140;
}

//----- (0203A784) --------------------------------------------------------
int __fastcall AddVariableAreaAdress_6_98(int a1)
{
  return a1 + 152;
}

//----- (0203A788) --------------------------------------------------------
int __fastcall AddVariableAreaAdress_6_96(int a1)
{
  return a1 + 150;
}

//----- (0203A78C) --------------------------------------------------------
int __fastcall AddVariableAreaAdress_6_94(int a1)
{
  return a1 + 148;
}

//----- (0203A790) --------------------------------------------------------
int __fastcall LoadVariableAreaAdress_6(int a1)
{
  return LoadVariableAreaAdress(a1, 6);
}

//----- (0203A79C) --------------------------------------------------------
int __fastcall LoadVariableAreaAdress_b(int a1)
{
  return LoadVariableAreaAdress(a1, 11);
}

//----- (0203A7A8) --------------------------------------------------------
int *__fastcall Function_203a7a8(int a1)
{
  int v1
  int *v2

  v1 = a1;
  v2 = (int *)LoadVariableAreaAdress_b(*(uint *)(a1 + 12));
  return Function_2061ca8(v1, *(uint *)(v1 + 56), v2, 64);
}

//----- (0203A7C0) --------------------------------------------------------
int __fastcall Function_203a7c0(int a1)
{
  int v1
  int *v2

  v1 = a1;
  v2 = (int *)LoadVariableAreaAdress_b(*(uint *)(a1 + 12));
  return Function_2061d04(*(uint *)(v1 + 56), v2, 64);
}

//----- (0203A7D8) --------------------------------------------------------
int __fastcall Function_203a7d8(int a1)
{
  if ( a1 <= 0 || (uint)a1 > 0x14 )
  {
    ErrorHandler();
    a1 = 1;
  }
  return a1 - 1;
}

//----- (0203A7EC) --------------------------------------------------------
int Function_203a7ec()
{
  return 1;
}

//----- (0203A7F0) --------------------------------------------------------
int __fastcall Function_203a7f0(int a1, uint *a2)
{
  uint *v2
  int v3
  int result

  v2 = a2;
  v3 = Function_203a7d8(a1);
  *v2 = (ushort)Unknown_20e97ba[8 * v3];
  v2[1] = -1;
  v2[2] = (ushort)Unknown_20e97bc[8 * v3];
  v2[3] = (ushort)Unknown_20e97be[8 * v3];
  result = 1;
  v2[4] = 1;
  return result;
}

//----- (0203A824) --------------------------------------------------------
int __fastcall Function_203a824(int a1, uint *a2)
{
  uint *v2
  int v3
  int result

  v2 = a2;
  v3 = Function_203a7d8(a1);
  *v2 = (ushort)Unknown_20e97b4[8 * v3];
  v2[1] = -1;
  v2[2] = (ushort)Unknown_20e97b6[8 * v3];
  v2[3] = *(ushort *)&Unknown_20e97b8[16 * v3];
  result = 0;
  v2[4] = 0;
  return result;
}

//----- (0203A858) --------------------------------------------------------
uint __fastcall Function_203a858(int a1)
{
  short *v1
  uint v2

  v1 = Unknown_20e97b4;
  v2 = 0;
  do
  {
    if ( a1 == (ushort)*v1 && *((uchar *)v1 + 12) )
      return v2 + 1;
    ++v2;
    v1 += 8;
  }
  while ( v2 < 0x14 );
  return 0;
}

//----- (0203A87C) --------------------------------------------------------
uint __fastcall Function_203a87c(int a1)
{
  short *v1
  uint v2

  v1 = Unknown_20e97b4;
  v2 = 0;
  do
  {
    if ( a1 == (ushort)v1[3] && *((uchar *)v1 + 12) )
      return v2 + 1;
    ++v2;
    v1 += 8;
  }
  while ( v2 < 0x14 );
  return 0;
}

//----- (0203A8A0) --------------------------------------------------------
int __fastcall Function_203a8a0(int a1, int a2, int a3)
{
  int v3
  int v4
  ushort *v5
  int v6
  uint v7

  v3 = 0;
  v4 = a3 / 32;
  v5 = (ushort *)Unknown_20e97b4;
  v6 = a2 / 32;
  v7 = 0;
  do
  {
    if ( a1 == v5[3] )
    {
      v3 = v7 + 1;
      if ( v6 == (uint)v5[4] >> 5 && v4 == (uint)v5[5] >> 5 )
        return v7 + 1;
    }
    ++v7;
    v5 += 8;
  }
  while ( v7 < 0x14 );
  return v3;
}

//----- (0203A8E8) --------------------------------------------------------
int __fastcall Function_203a8e8(int result, int a2)
{
  short *v2
  uint v3
  int v4

  v2 = Unknown_20e97b4;
  v3 = 0;
  while ( a2 != (ushort)v2[3] || !*((uchar *)v2 + 13) )
  {
    ++v3;
    v2 += 8;
    if ( v3 >= 0x14 )
      return result;
  }
  v4 = LoadFlagAdress(*(uint *)(result + 12));
  return Function_206af3c(v4, 1, *((ushort *)&Unknown_20e97c2 + 8 * v3));
}

//----- (0203A920) --------------------------------------------------------
int __fastcall Function_203a920(int a1, int a2)
{
  int v2
  int v3
  int v4

  v2 = a1;
  v3 = Function_203a7d8(a2);
  v4 = LoadFlagAdress(*(uint *)(v2 + 12));
  return Function_206af3c(v4, 2, *((ushort *)&Unknown_20e97c2 + 8 * v3));
}

//----- (0203A944) --------------------------------------------------------
int __fastcall Function_203a944(int a1, uint a2)
{
  int v2
  int result
  int v4
  int v5
  int v6
  int v7
  int v8
  int v9
  BOOL v10

  v2 = a1;
  result = GetMapWeather(a2);
  v4 = result;
  if ( result >= 32 )
  {
    v5 = Function_2025cd8(*(uint *)(v2 + 12));
    v6 = Function_2013900((uint *)(v5 + 4)) - 1;
    if ( v6 < 0 || v6 >= 366 )
      ErrorHandler();
    if ( *(uint *)(v5 + 8) > 2u )
    {
      v7 = *(uint *)(v5 + 4);
      v10 = 1;
      if ( v7 & 3 || (u32_div_f(v7, 100), !v8) )
      {
        u32_div_f(v7, 400);
        if ( v9 )
          v10 = 0;
      }
      if ( !v10 )
        ++v6;
    }
    if ( Function_2055c40(v2) )
      v6 = 1;
    result = *((uchar *)&Unknown_20e98f4[-8] + 5 * v6 + v4);
  }
  return result;
}

//----- (0203A9C8) --------------------------------------------------------
BOOL __fastcall Function_203a9c8(int a1)
{
  return GetMapName(**(uint **)(a1 + 28)) != 0;
}

//----- (0203A9E0) --------------------------------------------------------
uint *__fastcall Function_203a9e0(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5

  v1 = a1;
  v2 = Function_203abb4();
  v3 = LoadFlagAdress(*(uint *)(v1 + 12));
  if ( Function_206ae5c(v3) == 1 )
  {
    *(uint *)(v2 + 448) = Function_203ac24();
  }
  else
  {
    v4 = LoadFlagAdress(*(uint *)(v1 + 12));
    if ( Function_206ae8c(v4) == 1 )
    {
      *(uint *)(v2 + 448) = Function_203ac28();
    }
    else if ( Function_206c0d0(v1) == 1 )
    {
      *(uint *)(v2 + 448) = Function_203ac2c();
    }
    else
    {
      *(uint *)(v2 + 448) = Function_203abd0(v1);
    }
  }
  *(uint *)(v2 + 452) = 0;
  if ( Function_205f588(*(uint *)(v1 + 60)) == 1 )
  {
    v5 = GetSpriteFaceDirection(*(uint *)(v1 + 60));
    Function_205f5e4(*(uint *)(v1 + 60), v5);
  }
  return OverWorldData_InitUnknownStruct01(v1, (int)StartMenu_Handler, v2);
}

//----- (0203AA78) --------------------------------------------------------
uint *__fastcall Function_203aa78(int a1)
{
  int v1
  int v2
  int v3

  v1 = a1;
  v2 = Function_203abb4();
  *(uint *)(v2 + 448) = Function_203ac34();
  *(uint *)(v2 + 452) = 1;
  if ( Function_205f588(*(uint *)(v1 + 60)) == 1 )
  {
    v3 = GetSpriteFaceDirection(*(uint *)(v1 + 60));
    Function_205f5e4(*(uint *)(v1 + 60), v3);
  }
  return OverWorldData_InitUnknownStruct01(v1, (int)StartMenu_Handler, v2);
}

//----- (0203AABC) --------------------------------------------------------
uint *__fastcall Function_203aabc(int a1)
{
  int v1
  int v2
  int v3

  v1 = a1;
  v2 = Function_203abb4();
  *(uint *)(v2 + 448) = Function_203ac3c();
  *(uint *)(v2 + 452) = 0;
  if ( Function_205f588(*(uint *)(v1 + 60)) == 1 )
  {
    v3 = GetSpriteFaceDirection(*(uint *)(v1 + 60));
    Function_205f5e4(*(uint *)(v1 + 60), v3);
  }
  return OverWorldData_InitUnknownStruct01(v1, (int)StartMenu_Handler, v2);
}

//----- (0203AB00) --------------------------------------------------------
int __fastcall Function_203ab00(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5

  v1 = a1;
  Function_2005748(0x5FDu);
  v2 = Function_203abb4();
  *(uint *)(v2 + 452) = 0;
  v3 = LoadFlagAdress(*(uint *)(v1 + 12));
  if ( Function_206ae5c(v3) == 1 )
  {
    *(uint *)(v2 + 448) = Function_203ac24();
  }
  else
  {
    v4 = LoadFlagAdress(*(uint *)(v1 + 12));
    if ( Function_206ae8c(v4) == 1 )
    {
      *(uint *)(v2 + 448) = Function_203ac28();
    }
    else if ( Function_206c0d0(v1) == 1 )
    {
      *(uint *)(v2 + 448) = Function_203ac2c();
    }
    else
    {
      v5 = *(uint *)(v1 + 112);
      if ( v5 == 3 )
      {
        *(uint *)(v2 + 448) = Function_203ac3c();
      }
      else if ( v5 == 2 )
      {
        *(uint *)(v2 + 448) = Function_203ac34();
        *(uint *)(v2 + 452) = 1;
      }
      else
      {
        *(uint *)(v2 + 448) = Function_203abd0(v1);
      }
    }
  }
  return Function_2050924(*(uint **)(v1 + 16), (int)StartMenu_Handler, v2);
}

//----- (0203ABB4) --------------------------------------------------------
int Function_203abb4()
{
  int result

  result = malloc(0xBu, 512);
  *(ushort *)(result + 42) = 0;
  *(ushort *)(result + 40) = 0;
  *(uint *)(result + 504) = 0;
  return result;
}

//----- (0203ABD0) --------------------------------------------------------
int __fastcall Function_203abd0(int a1)
{
  int v1
  int v2
  uint *v3
  int v4
  int v5

  v1 = a1;
  v2 = 0;
  v3 = (uint *)LoadPokedexDataAdress(*(uint *)(a1 + 12));
  if ( !CheckActPokedex(v3) )
    v2 = 1;
  v4 = LoadFlagAdress(*(uint *)(v1 + 12));
  if ( !Function_206b054(v4) )
    v2 |= 2u;
  v5 = LoadFlagAdress(*(uint *)(v1 + 12));
  if ( !CheckFlag_Flag960(v5) )
    v2 |= 4u;
  if ( Function_203a310(**(uint **)(v1 + 28)) == 1 )
    v2 |= 6u;
  return v2 | 0x180;
}

//----- (0203AC24) --------------------------------------------------------
int Function_203ac24()
{
  return 144;
}

//----- (0203AC28) --------------------------------------------------------
int Function_203ac28()
{
  return 148;
}

//----- (0203AC2C) --------------------------------------------------------
int Function_203ac2c()
{
  return 405;
}

//----- (0203AC34) --------------------------------------------------------
int Function_203ac34()
{
  return 272;
}

//----- (0203AC3C) --------------------------------------------------------
int Function_203ac3c()
{
  return 401;
}

//----- (0203AC44) --------------------------------------------------------
int __fastcall StartMenu_Handler(int a1)
{
  uint *v1
  int v2
  int v3
  int v4
  int v5
  int v6
  int v7
  int v8
  int v9
  int result
  int v11
  int v12
  int v13

  v1 = (uint *)a1;
  v2 = LoadOverWorldDataAdress(a1);
  v3 = GetUnknownStruct01_c((int)v1);
  v4 = v3;
  switch ( (uchar)*(ushort *)(v3 + 42) )
  {
    case 0u:
      Function_2062c48(*(uint *)(v2 + 56));
      Function_206842c(v2, v4 + 460, v5, v6);
      Function_2070728(v2, v4 + 488);
      Function_203adfc((int)v1, v7, v8, v9);
      Function_203b094((int)v1);
      *(ushort *)(v4 + 42) = 1;
      goto LABEL_25;
    case 1u:
      if ( StartMenu_GetCurrentSelection((int)v1) )
        goto LABEL_25;
      return 0;
    case 2u:
      Function_203b610((int)v1);
      goto LABEL_25;
    case 3u:
      Function_203b64c((int)v1);
      goto LABEL_25;
    case 4u:
      Function_203bf6c((int)v1);
      goto LABEL_25;
    case 5u:
      Function_203bfc0((int)v1);
      goto LABEL_25;
    case 6u:
      Function_203c7b8((int)v1);
      goto LABEL_25;
    case 7u:
      Function_203c8cc((int)v1);
      goto LABEL_25;
    case 8u:
      if ( Function_20509dc(v2) )
      {
        ((void (__fastcall *)(int))dword_21D1744[0])(1);
        *(ushort *)(v4 + 42) = 9;
      }
      goto LABEL_25;
    case 9u:
      if ( !Function_200f2ac() )
        goto LABEL_25;
      Function_203b2ec(v4, v2);
      free(v4);
      Sprite_ReleaseAll(*(uint *)(v2 + 56));
      return 1;
    case 0xAu:
      if ( Function_20509dc(v2) )
      {
        Function_2062c48(*(uint *)(v2 + 56));
        ((void (__fastcall *)(int))dword_21D1744[0])(1);
        *(ushort *)(v4 + 42) = 11;
      }
      goto LABEL_25;
    case 0xBu:
      if ( Function_200f2ac() )
      {
        Function_2050924(v1, *(uint *)(v4 + 456), *(uint *)(v4 + 504));
        free(v4);
      }
      goto LABEL_25;
    case 0xCu:
      if ( Function_20509dc(v2) )
      {
        Function_2062c48(*(uint *)(v2 + 56));
        Function_203adfc((int)v1, v11, v12, v13);
        Function_203b094((int)v1);
        ((void (__fastcall *)(int))dword_21D1744[0])(1);
        *(ushort *)(v4 + 42) = 14;
      }
      goto LABEL_25;
    case 0xDu:
      Function_203b2ec(v3, v2);
      Function_203b078(v4);
      Function_200dc9c(v4, 1);
      Function_201a8fc(v4);
      Function_203b200((int)v1);
      Function_201c3c0(*(uint *)(v2 + 8), 3);
      free(v4);
      Sprite_ReleaseAll(*(uint *)(v2 + 56));
      return 1;
    case 0xEu:
      if ( Function_200f2ac() )
        *(ushort *)(v4 + 42) = 1;
      goto LABEL_25;
    case 0xFu:
      free(v3);
      Sprite_ReleaseAll(*(uint *)(v2 + 56));
      result = 1;
      break;
    default:
LABEL_25:
      if ( *(uint *)(v4 + 32) )
      {
        Function_203b520(v4);
        Function_20219f8(*(uint *)(v4 + 56));
      }
      result = 0;
      break;
  }
  return result;
}

//----- (0203ADFC) --------------------------------------------------------
int __fastcall Function_203adfc(int a1, int a2, int a3, int a4)
{
  int v4
  int v5
  uint v6
  int v7
  uint *v8
  int v9
  ushort *v10
  int v11
  int v12
  int v13
  int v14
  int v15
  uchar v16
  uint v18
  ushort **v19
  int v20
  int v21
  int v22
  char v23
  char v24
  char v25
  char v26
  int v27

  v27 = a4;
  v4 = a1;
  v20 = LoadOverWorldDataAdress(a1);
  v5 = GetUnknownStruct01_c(v4);
  v18 = Function_203afcc(v5, (uchar *)(v5 + 48));
  Function_201a7e8(*(uint **)(v20 + 8), v5, 3, 20, 1, 0xBu, 3 * v18, 12, 325);
  Function_200daa4(*(uint **)(v20 + 8), 3u, 985, 11, 1, 11);
  Function_200dc48(v5, 1, 985, 0xBu);
  v19 = (ushort **)LoadFromMsgNARC(0, 26, 367, 0xBu);
  *(uint *)(v5 + 36) = Function_2013a04(v18, 0xBu);
  v6 = 0;
  *(ushort *)(v5 + 40) = 0;
  if ( v18 )
  {
    do
    {
      v7 = *(uchar *)(v5 + v6 + 48);
      if ( v7 == 3 )
      {
        v8 = Function_200b358(0xBu);
        v9 = Function_2023790(8, 0xBu);
        v10 = Function_200b1ec_CallMsgDecrypt(v19, Unknown_20ea05c[2 * *(uchar *)(v5 + v6 + 48)]);
        LoadTrainerDataAdress(*(uint *)(v20 + 12));
        Function_200b498((int)v8, 0);
        Function_200c388(v8, v9, (int)v10);
        Function_2013a6c(*(uint **)(v5 + 36), v9, *(uchar *)(v5 + v6 + 48), v11);
        Function_20237bc_FreeMsg((int)v10, v12);
        Function_20237bc_FreeMsg(v9, v13);
        Function_200b3f0(v8, v14);
      }
      else
      {
        Function_2013a4c(*(uint **)(v5 + 36), v19, Unknown_20ea05c[2 * v7], v7);
      }
      if ( *(uint *)(v20 + 144) == *(uchar *)(v5 + v6 + 48) )
        *(ushort *)(v5 + 40) = v6;
      ++v6;
    }
    while ( v6 < v18 );
  }
  *(uint *)(v20 + 144) = *(uchar *)(v5 + *(ushort *)(v5 + 40) + 48);
  Function_200b190((ushort *)v19);
  v21 = *(uint *)(v5 + 36);
  v22 = v5;
  v23 = 1;
  v24 = 1;
  v25 = v18;
  v26 = (v26 & 0xF0 | 8) & 0xCF | 0x10;
  if ( v18 < 4 )
    v26 &= 0x3Fu;
  else
    v26 = v26 & 0x3F | 0x40;
  *(uint *)(v5 + 32) = Function_2001af4(&v21, 28, 4, *(ushort *)(v5 + 40), 0xBu, 1026);
  Function_201a9a4(v5);
  v15 = LoadTrainerDataAdress(*(uint *)(v20 + 12));
  v16 = GetGender(v15);
  return Function_203b318(v5, v5 + 48, v18, v16);
}

//----- (0203AFCC) --------------------------------------------------------
int __fastcall Function_203afcc(int a1, uchar *a2)
{
  int v2

  v2 = 0;
  if ( !(*(uint *)(a1 + 448) & 0x100) )
  {
    *a2 = 8;
    v2 = 1;
  }
  if ( !(*(uint *)(a1 + 448) & 0x80) )
    a2[v2++] = 7;
  if ( !(*(uint *)(a1 + 448) & 1) )
    a2[v2++] = 0;
  if ( !(*(uint *)(a1 + 448) & 2) )
    a2[v2++] = 1;
  if ( !(*(uint *)(a1 + 448) & 4) )
    a2[v2++] = 2;
  if ( !(*(uint *)(a1 + 448) & 8) )
    a2[v2++] = 3;
  if ( !(*(uint *)(a1 + 448) & 0x10) )
    a2[v2++] = 4;
  if ( !(*(uint *)(a1 + 448) & 0x20) )
    a2[v2++] = 5;
  if ( !(*(uint *)(a1 + 448) & 0x40) )
    a2[v2++] = 6;
  return v2;
}

//----- (0203B078) --------------------------------------------------------
int __fastcall Function_203b078(int a1)
{
  int v1
  int result

  v1 = a1;
  Function_203b4e8(a1);
  Function_2001bc4(*(uint *)(v1 + 32), 0);
  Function_2013a3c(*(int **)(v1 + 36));
  result = 0;
  *(uint *)(v1 + 32) = 0;
  return result;
}

//----- (0203B094) --------------------------------------------------------
int __fastcall Function_203b094(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  int v6
  int result
  ushort **v8
  ushort *v9
  int v10
  int v11
  uint *v12
  int v13
  ushort *v14
  int v15
  int v16
  int v17
  int v18
  ushort *v19
  int v20
  ushort **v21

  v1 = a1;
  v2 = LoadOverWorldDataAdress(a1);
  v3 = GetUnknownStruct01_c(v1);
  v4 = LoadFlagAdress(*(uint *)(v2 + 12));
  if ( Function_206ae5c(v4) == 1 )
  {
    v5 = 0;
  }
  else
  {
    v6 = LoadFlagAdress(*(uint *)(v2 + 12));
    result = Function_206ae8c(v6);
    if ( result != 1 )
      return result;
    v5 = 1;
  }
  Function_201a7e8(*(uint **)(v2 + 8), v3 + 16, 3, 1, 1, 0xCu, 4u, 13, 567);
  Function_200daa4(*(uint **)(v2 + 8), 3u, 985, 11, 1, 11);
  Function_200dc48(v3 + 16, 1, 985, 0xBu);
  Function_201ada4_ClearTextBox(v3 + 16, 15);
  v8 = (ushort **)LoadFromMsgNARC(0, 26, 367, 0xBu);
  v21 = v8;
  if ( v5 )
    v9 = Function_200b1ec_CallMsgDecrypt(v8, 0xAu);
  else
    v9 = Function_200b1ec_CallMsgDecrypt(v8, 9u);
  v10 = (int)v9;
  Function_201d738_CallInitTextInterpreter(v3 + 16, 0);
  Function_20237bc_FreeMsg(v10, v11);
  v12 = Function_200b358(0xBu);
  v20 = Function_2023790(32, 0xBu);
  v19 = Function_200b1ec_CallMsgDecrypt(v21, 0xBu);
  if ( v5 )
  {
    v15 = Function_20563bc();
    Function_200b60c((int)v12, 0, v15, 2, 0, 1);
  }
  else
  {
    v13 = LoadVariableAreaAdress_6(*(uint *)(v2 + 12));
    v14 = (ushort *)AddVariableAreaAdress_6_98(v13);
    Function_200b60c((int)v12, 0, *v14, 2, 0, 1);
  }
  Function_200c388(v12, v20, (int)v19);
  Function_201d738_CallInitTextInterpreter(v3 + 16, 0);
  Function_20237bc_FreeMsg(v20, v16);
  Function_20237bc_FreeMsg((int)v19, v17);
  Function_200b3f0(v12, v18);
  Function_200b190((ushort *)v21);
  return Function_201a9a4(v3 + 16);
}

//----- (0203B200) --------------------------------------------------------
uint __fastcall Function_203b200(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  uint result

  v1 = a1;
  v2 = LoadOverWorldDataAdress(a1);
  v3 = GetUnknownStruct01_c(v1);
  v4 = LoadFlagAdress(*(uint *)(v2 + 12));
  if ( Function_206ae5c(v4) || (v5 = LoadFlagAdress(*(uint *)(v2 + 12)), (result = Function_206ae8c(v5)) != 0) )
  {
    Function_200dc9c(v3 + 16, 1);
    result = Function_201a8fc(v3 + 16);
  }
  return result;
}

//----- (0203B244) --------------------------------------------------------
int __fastcall StartMenu_GetCurrentSelection(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  int v6
  int v7
  int v8
  int (__fastcall *v9)(int)

  v1 = a1;
  v2 = LoadOverWorldDataAdress(a1);
  v3 = GetUnknownStruct01_c(v1);
  v4 = Function_2001dc4(*(uint *)(v3 + 32));
  *(uint *)(v3 + 44) = Function_2001c94(*(uint *)(v3 + 32), 0x5E0u);
  *(ushort *)(v3 + 40) = Function_2001dc4(*(uint *)(v3 + 32));
  v7 = *(ushort *)(v3 + 40);
  if ( v4 != v7 )
  {
    Function_203b558(**(uint ***)(v3 + 412), v7, v5, v6);
    Function_203b5b4(v3, v4, *(ushort *)(v3 + 40));
    *(uint *)(v2 + 144) = *(uchar *)(v3 + *(ushort *)(v3 + 40) + 48);
  }
  Function_203b5e8(**(uint **)(v3 + 4 * (*(ushort *)(v3 + 40) + 1) + 412));
  v8 = *(uint *)(v3 + 44);
  if ( v8 == -2 )
  {
    *(ushort *)(v3 + 42) = 13;
  }
  else if ( v8 != -1 )
  {
    v9 = (int (__fastcall *)(int))*(&StartMenu_FunctionList + 2 * v8);
    if ( v9 == (int (__fastcall *)(int))-2 )
    {
      *(ushort *)(v3 + 42) = 13;
    }
    else if ( v9 != (int (__fastcall *)(int))-1 )
    {
      return v9(v1);
    }
  }
  return 1;
}

//----- (0203B2EC) --------------------------------------------------------
int __fastcall Function_203b2ec(int a1, int a2)
{
  int v2
  int v3
  int result

  v2 = a1;
  v3 = a2;
  result = Function_2033e1c();
  if ( result )
  {
    result = *(uint *)(v2 + 452);
    if ( result )
    {
      Function_205c2b0(*(uint *)(v3 + 128));
      Function_2036ac4();
      result = Function_205bea8(0);
    }
  }
  return result;
}

//----- (0203B318) --------------------------------------------------------
int __fastcall Function_203b318(int a1, int a2, uint a3, int a4)
{
  int v4
  int v5
  int v6
  uint v7
  int v8
  int *v9
  short v10
  char *v11
  int v12
  int v13
  int v14
  char *v15
  char *v16
  int v17
  int v18
  int v19
  int v20
  int v22
  int v23
  uint v24
  int v25
  int *v26
  char v27
  int v28
  int v29
  int v30
  char v31
  short v32
  short v33
  int v34
  int v35
  int v36
  int v37
  int v38
  int v39
  int v40

  v40 = a4;
  v25 = a4;
  v24 = a3;
  v22 = a1;
  v23 = a2;
  v34 = 8;
  v35 = 1;
  v36 = 2;
  v37 = 2;
  v38 = 0;
  v39 = 0;
  ((void (__fastcall *)(int, int *, int, int))dword_21D3190[0])(a1 + 56, &v34, 8, 11);
  v26 = LoadFromNARC_8(66, 0xBu, v4, v5);
  ((void (__fastcall *)(int, int *, int, uint, int, int, int))dword_21D32E8[0])(
    v22 + 56,
    v26,
    5,
    0,
    2,
    1,
    13528);
  ((void (__fastcall *)(int, int *, int, uint, int))dword_21D3374[0])(v22 + 56, v26, 1, 0, 13528);
  ((void (__fastcall *)(int, int *))dword_21D339C[0])(v22 + 56, v26);
  ((void (__fastcall *)(int, int *, int, uint, int, int))dword_21D3414[0])(
    v22 + 56,
    v26,
    2,
    0,
    1,
    13528);
  *(uint *)(v22 + 412) = ((int (__fastcall *)(int, int *))dword_21D3584[0])(v22 + 56, Unknown_20ea0a4);
  Function_203b558(**(uint ***)(v22 + 412), *(ushort *)(v22 + 40), 412, v6);
  ((void (__fastcall *)(int, int *, int, uint, int))dword_21D3374[0])(v22 + 56, v26, 4, 0, 13529);
  ((void (__fastcall *)(int, int *, int, uint, int))dword_21D339C[0])(v22 + 56, v26, 3, 0, 13529);
  ((void (__fastcall *)(int, int *, int, uint, int, int))dword_21D3414[0])(
    v22 + 56,
    v26,
    6,
    0,
    1,
    13529);
  v7 = 0;
  if ( v24 )
  {
    v8 = v22;
    v9 = Unknown_20ea0d8;
    v10 = 0;
    v11 = &v27;
    v12 = 6;
    do
    {
      v13 = *v9;
      v14 = v9[1];
      v9 += 2;
      *(uint *)v11 = v13;
      *((uint *)v11 + 1) = v14;
      v11 += 8;
      --v12;
    }
    while ( v12 );
    *(uint *)v11 = *v9;
    do
    {
      v15 = &v27;
      v16 = &v31;
      v17 = 6;
      do
      {
        v18 = *(uint *)v15;
        v19 = *((uint *)v15 + 1);
        v15 += 8;
        *(uint *)v16 = v18;
        *((uint *)v16 + 1) = v19;
        v16 += 8;
        --v17;
      }
      while ( v17 );
      *(uint *)v16 = *(uint *)v15;
      v32 += v10;
      v20 = *(uchar *)(v23 + v7);
      if ( v20 != 2 || v25 != 1 )
        v33 = 3 * v20;
      else
        v33 = 27;
      *(uint *)(v8 + 416) = ((int (__fastcall *)(int, char *))dword_21D3584[0])(v22 + 56, &v31);
      v28 = 4096;
      v29 = 4096;
      v30 = 4096;
      Function_2021c80(**(uint ***)(v8 + 416), &v28, 1);
      ++v7;
      v10 += 24;
      v8 += 4;
    }
    while ( v7 < v24 );
  }
  Function_203b588(**(uint **)(v22 + 4 * (*(ushort *)(v22 + 40) + 1) + 412), 2, 1);
  *(uint *)(v22 + 444) = v24 + 1;
  Function_201ff0c(0x10u, 1);
  return Call_FS_CloseFile(v26);
}

//----- (0203B4E8) --------------------------------------------------------
int __fastcall Function_203b4e8(int a1)
{
  int v1
  uint v2

  v1 = a1;
  v2 = 0;
  if ( *(uint *)(a1 + 444) )
  {
    do
    {
      Function_200d0f4(*(uint *)(v1 + 4 * v2 + 412));
      v2 = (v2 + 1) & 0xFFFF;
    }
    while ( v2 < *(uint *)(v1 + 444) );
  }
  return ((int (__fastcall *)(int))dword_21D375C[0])(v1 + 56);
}

//----- (0203B520) --------------------------------------------------------
uint __fastcall Function_203b520(int a1)
{
  int v1
  uint result
  uint v3

  v1 = a1;
  result = *(uint *)(a1 + 444);
  v3 = 0;
  if ( result )
  {
    do
    {
      Function_2021e2c(**(uint **)(v1 + 4 * v3 + 412), 4096);
      v3 = (v3 + 1) & 0xFFFF;
      result = *(uint *)(v1 + 444);
    }
    while ( v3 < result );
  }
  return result;
}

//----- (0203B558) --------------------------------------------------------
int __fastcall Function_203b558(uint *a1, int a2, int a3, int a4)
{
  uint *v4
  int v5
  int *v6
  int v7
  int v9
  int v10
  int v11
  int v12

  v12 = a4;
  v4 = a1;
  v5 = a2;
  Function_2021d28();
  v7 = v6[1];
  v9 = *v6;
  v10 = v7;
  v11 = v6[2];
  v10 = (24 * v5 + 20) << 12;
  return Function_2021c50(v4, &v9);
}

//----- (0203B588) --------------------------------------------------------
int __fastcall Function_203b588(int a1, int a2, char a3)
{
  int v3
  int v4
  char v5
  int v6
  int v7

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_2021e24(a1);
  v7 = u32_div_f(v6, 3);
  Function_2021d6c(v3, v4 + 3 * v7);
  return Function_2021ec4(v3, v5);
}

//----- (0203B5B4) --------------------------------------------------------
int __fastcall Function_203b5b4(int a1, int a2, int a3)
{
  int v3
  int v4

  v3 = a1;
  v4 = a3;
  Function_203b588(**(uint **)(a1 + 4 * (a2 + 1) + 412), 0, 0);
  return Function_203b588(**(uint **)(v3 + 4 * (v4 + 1) + 412), 1, 1);
}

//----- (0203B5E8) --------------------------------------------------------
int __fastcall Function_203b5e8(int a1)
{
  int v1
  int v2
  int result
  int v4

  v1 = a1;
  v2 = Function_2021e24(a1);
  result = u32_div_f(v2, 3);
  if ( v4 == 1 )
  {
    result = Function_2021fd0(v1);
    if ( !result )
      result = Function_203b588(v1, 2, 1);
  }
  return result;
}

//----- (0203B610) --------------------------------------------------------
int __fastcall Function_203b610(int a1)
{
  int v1
  int result
  int v3

  v1 = a1;
  result = Function_200f2ac();
  if ( result )
  {
    LoadOverWorldDataAdress(v1);
    v3 = GetUnknownStruct01_c(v1);
    Function_203b078(v3);
    Function_201a8fc(v3);
    Function_203b200(v1);
    (*(void (__fastcall **)(int))(v3 + 456))(v1);
    result = 3;
    *(ushort *)(v3 + 42) = 3;
  }
  return result;
}

//----- (0203B64C) --------------------------------------------------------
int __fastcall Function_203b64c(int a1)
{
  int v1
  uint **v2
  int v3
  int result

  v1 = a1;
  v2 = (uint **)LoadOverWorldDataAdress(a1);
  v3 = GetUnknownStruct01_c(v1);
  result = Function_20509b4(v2);
  if ( !result )
    result = (*(int (__fastcall **)(int))(v3 + 456))(v1);
  return result;
}

//----- (0203B674) --------------------------------------------------------
int __fastcall Function_203b674(int result, int a2)
{
  *(uint *)(result + 456) = a2;
  *(ushort *)(result + 42) = 3;
  return result;
}

//----- (0203B680) --------------------------------------------------------
int __fastcall Function_203b680(int a1)
{
  int v1

  v1 = GetUnknownStruct01_c(a1);
  ((void (__fastcall *)(uint))dword_21D1744[0])(0);
  *(uint *)(v1 + 456) = Function_203b6a4;
  *(ushort *)(v1 + 42) = 2;
  return 1;
}

//----- (0203B6A4) --------------------------------------------------------
int __fastcall Function_203b6a4(int a1)
{
  int v1
  int v2
  int v3
  int *v4
  int v5
  int v6
  int v7

  v1 = a1;
  v2 = LoadOverWorldDataAdress(a1);
  v3 = GetUnknownStruct01_c(v1);
  v4 = (int *)malloc(0xBu, 32);
  v5 = LoadPokedexDataAdress(*(uint *)(v2 + 12));
  v6 = LoadTrainerDataAdress(*(uint *)(v2 + 12));
  v7 = LoadFlagAdress(*(uint *)(v2 + 12));
  *v4 = v5;
  v4[1] = v6;
  v4[2] = Function_2055ba8(v2);
  v4[3] = Function_206b1f0(v7, 0);
  v4[4] = Function_206b1f0(v7, 1);
  v4[5] = Function_206b1f0(v7, 2);
  v4[6] = Function_206b1f0(v7, 3);
  v4[7] = *(uint *)(v2 + 180);
  Function_203e0ac(v2, (int)v4);
  *(uint *)(v3 + 504) = v4;
  *(uint *)(v3 + 456) = Function_203b738;
  return 0;
}

//----- (0203B738) --------------------------------------------------------
int __fastcall Function_203b738(int a1)
{
  int v1
  uint *v2
  int v3
  int v4
  int v5
  int v6

  v1 = a1;
  v2 = (uint *)LoadOverWorldDataAdress(a1);
  v3 = GetUnknownStruct01_c(v1);
  Function_20509d4(v2, v4, v5);
  v6 = *(uint *)(v3 + 504);
  if ( v6 )
    Function_2018238(0xBu, v6);
  *(ushort *)(v3 + 42) = 12;
  return 0;
}

//----- (0203B768) --------------------------------------------------------
int __fastcall Function_203b768(int a1)
{
  int v1

  v1 = GetUnknownStruct01_c(a1);
  ((void (__fastcall *)(uint))dword_21D1744[0])(0);
  *(uint *)(v1 + 456) = Function_203b78c;
  *(ushort *)(v1 + 42) = 2;
  return 1;
}

//----- (0203B78C) --------------------------------------------------------
int __fastcall Function_203b78c(int a1)
{
  int v1
  int v2
  int v3

  v1 = a1;
  v2 = LoadOverWorldDataAdress(a1);
  v3 = GetUnknownStruct01_c(v1);
  *(uint *)(v3 + 504) = Function_203d390(v2, v3 + 488, 0);
  *(uint *)(v3 + 456) = Function_203b7c0;
  return 0;
}

//----- (0203B7C0) --------------------------------------------------------
int __fastcall Function_203b7c0(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  int v6
  uint v7
  int v8
  int v9
  int v10
  int v11
  ushort *v12
  int v13
  int v14
  ushort *v15
  char v16
  short v17
  int v18
  uint *v19
  int *v20
  uint *v21
  int v22
  int v23
  int v24
  void (__fastcall *v25)(int *, int)
  int v26
  uint v27
  int v28
  int v30
  short v31
  short v32

  v1 = a1;
  v2 = LoadOverWorldDataAdress(a1);
  v3 = GetUnknownStruct01_c(v1);
  v4 = malloc(0xBu, 64);
  memcpy((uchar *)v4, *(char **)(v3 + 504), 64);
  free(*(uint *)(v3 + 504));
  v7 = *(uchar *)(v4 + 35);
  if ( v7 <= 0x17 )
    JUMPOUT(__CS__, (char *)&off_203B80C + *((short *)&off_203B80C + v7) + 2);
  switch ( (uchar)v5 )
  {
    case 1:
      v8 = malloc(0xBu, 48);
      *(uint *)v8 = LoadPokePartyAdress(*(uint *)(v2 + 12));
      *(uint *)(v8 + 4) = LoadPlayerDataAdress(*(uint *)(v2 + 12));
      *(uchar *)(v8 + 17) = 1;
      *(uchar *)(v8 + 20) = *(uchar *)(v4 + 34);
      *(uchar *)(v8 + 19) = GetNrOfPkmnInParty(*(uint *)v8);
      *(ushort *)(v8 + 24) = 0;
      *(uchar *)(v8 + 18) = 0;
      *(uint *)(v8 + 32) = LoadVariableAreaAdress_18(*(uint *)(v2 + 12));
      *(uint *)(v8 + 28) = Function_207a274(*(uint *)(v2 + 12));
      *(uint *)(v8 + 44) = Function_208c324(*(uint *)(v2 + 12));
      *(uint *)(v8 + 40) = 0;
      Function_208d720(v8, (int)Unknown_20ea02c);
      v9 = LoadTrainerDataAdress(*(uint *)(v2 + 12));
      Function_208e9c0(v8, v9);
      Function_203d334(v2, v8);
      *(uint *)(v3 + 504) = v8;
      Function_203b674(v3, (int)Function_203c1c8);
      break;
    case 3:
      v21 = (uint *)malloc(0xBu, 4);
      *v21 = *(uchar *)(v4 + 34);
      *(uint *)(v3 + 508) = v21;
      v22 = LoadVariableAreaAdressItemList(*(uint *)(v2 + 12));
      LoadTrainerDataAdress(*(uint *)(v2 + 12));
      *(uint *)(v3 + 504) = Function_207d824(v22, (uchar *)Unknown_20ea020, 0xBu);
      Function_207cb2c(*(uint *)(v3 + 504), *(uint *)(v2 + 12), 1, *(uint *)(v2 + 152));
      Function_203d1e4(v2, *(uint *)(v3 + 504));
      Function_203b674(v3, (int)Function_203bc5c);
      break;
    case 4:
      v10 = malloc(0xBu, 48);
      *(uint *)v10 = LoadPokePartyAdress(*(uint *)(v2 + 12));
      *(uint *)(v10 + 4) = LoadPlayerDataAdress(*(uint *)(v2 + 12));
      *(uchar *)(v10 + 17) = 1;
      *(uchar *)(v10 + 20) = *(uchar *)(v4 + 34);
      *(uchar *)(v10 + 19) = 1;
      *(ushort *)(v10 + 24) = *(ushort *)(v4 + 38);
      *(uchar *)(v10 + 18) = 2;
      *(uint *)(v10 + 28) = Function_207a274(*(uint *)(v2 + 12));
      *(uint *)(v10 + 44) = Function_208c324(*(uint *)(v2 + 12));
      *(uint *)(v10 + 40) = 0;
      Function_208d720(v10, (int)&Unknown_20ea01c);
      v11 = LoadTrainerDataAdress(*(uint *)(v2 + 12));
      Function_208e9c0(v10, v11);
      Function_203d334(v2, v10);
      v12 = (ushort *)malloc(0xBu, 4);
      *v12 = *(ushort *)(v4 + 36);
      v12[1] = 0;
      *(uint *)(v3 + 508) = v12;
      *(uint *)(v3 + 504) = v10;
      Function_203b674(v3, (int)Function_203c1c8);
      break;
    case 5:
      v13 = malloc(0xBu, 48);
      *(uint *)v13 = LoadPokePartyAdress(*(uint *)(v2 + 12));
      *(uint *)(v13 + 4) = LoadPlayerDataAdress(*(uint *)(v2 + 12));
      *(uchar *)(v13 + 17) = 1;
      *(uchar *)(v13 + 20) = *(uchar *)(v4 + 34);
      *(uchar *)(v13 + 19) = 1;
      *(ushort *)(v13 + 24) = *(ushort *)(v4 + 38);
      *(uchar *)(v13 + 18) = 2;
      *(uint *)(v13 + 28) = Function_207a274(*(uint *)(v2 + 12));
      *(uint *)(v13 + 44) = Function_208c324(*(uint *)(v2 + 12));
      *(uint *)(v13 + 40) = 0;
      Function_208d720(v13, (int)&Unknown_20ea01c);
      v14 = LoadTrainerDataAdress(*(uint *)(v2 + 12));
      Function_208e9c0(v13, v14);
      Function_203d334(v2, v13);
      v15 = (ushort *)malloc(0xBu, 4);
      *v15 = 0;
      v15[1] = *(uint *)(v4 + 52);
      *(uint *)(v3 + 508) = v15;
      *(uint *)(v3 + 504) = v13;
      Function_203b674(v3, (int)Function_203c1c8);
      break;
    case 6:
      v16 = Function_207d2f0(*(ushort *)(v4 + 36));
      *(uint *)(v3 + 504) = Function_203d920(v2, 2, *(uchar *)(v4 + 34), v16);
      v17 = *(ushort *)(v4 + 36);
      if ( *(uchar *)(v4 + 32) == 10 )
        v18 = Function_203c540(v17, 0, *(uchar *)(v4 + 34));
      else
        v18 = Function_203c540(v17, 1, *(uchar *)(v4 + 34));
      *(uint *)(v3 + 508) = v18;
      Function_203b674(v3, (int)Function_203c558);
      break;
    case 7:
      v19 = (uint *)LoadPokePartyAdress(*(uint *)(v2 + 12));
      v20 = GetAdrOfPkmnInParty(v19, *(uchar *)(v4 + 34));
      *(uint *)(v3 + 504) = Function_203d984(v2, v20, 0xBu);
      *(uint *)(v3 + 508) = Function_203c540(*(ushort *)(v4 + 36), 2, *(uchar *)(v4 + 34));
      Function_203b674(v3, (int)Function_203c558);
      break;
    case 8:
      v23 = malloc(0xBu, 12);
      *(ushort *)(v23 + 2) = *(ushort *)(v4 + 36);
      *(uchar *)(v23 + 1) = 3;
      *(uchar *)v23 = *(uchar *)(v4 + 34);
      *(ushort *)(v23 + 4) = *(ushort *)(v4 + 56);
      *(uint *)(v23 + 8) = *(uint *)(v4 + 60);
      *(uint *)(v3 + 504) = v23;
      *(ushort *)(v3 + 42) = 6;
      break;
    case 9:
      v24 = malloc(0xBu, 12);
      *(ushort *)(v24 + 2) = Function_203a354(**(uint **)(v2 + 28));
      *(uchar *)(v24 + 1) = 0;
      *(uchar *)v24 = *(uchar *)(v4 + 34);
      *(ushort *)(v24 + 4) = *(ushort *)(v4 + 56);
      *(uint *)(v24 + 8) = *(uint *)(v4 + 60);
      *(uint *)(v3 + 504) = v24;
      *(ushort *)(v3 + 42) = 6;
      break;
    case 0xA:
      *(uint *)(v3 + 504) = Function_203d20c((int *)v2, v3 + 460);
      Function_203b674(v3, (int)Function_203bc5c);
      break;
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
      v32 = v7 - 11;
      v31 = *(uchar *)(v4 + 34);
      v30 = v1;
      v25 = (void (__fastcall *)(int *, int))Function_207070c(0, (ushort)(v7 - 11));
      v25(&v30, v3 + 488);
      break;
    default:
      v26 = *(uchar *)(v4 + 32);
      if ( v26 != 5 && v26 != 6 && v26 != 7 && v26 != 16 && v26 != 8 )
      {
        if ( v26 == 9 )
        {
          *(uint *)(v3 + 504) = Function_203d20c((int *)v2, v3 + 460);
          Function_203b674(v3, (int)Function_203bc5c);
        }
        else
        {
          Function_20509d4((uint *)v2, v5, v6);
          *(ushort *)(v3 + 42) = 12;
        }
      }
      else
      {
        *(uint *)(v3 + 504) = Function_203d20c((int *)v2, v3 + 460);
        v27 = *(uchar *)(v4 + 34);
        v28 = *(uint *)(v3 + 504);
        if ( v27 < 6 )
          Function_207cb70(v28, v27);
        else
          Function_207cb70(v28, 0);
        Function_203b674(v3, (int)Function_203bc5c);
      }
      break;
  }
  free(v4);
  return 0;
}

//----- (0203BBF4) --------------------------------------------------------
int __fastcall Function_203bbf4(int a1)
{
  int v1

  v1 = GetUnknownStruct01_c(a1);
  ((void (__fastcall *)(uint))dword_21D1744[0])(0);
  *(uint *)(v1 + 456) = Function_203bc18;
  *(ushort *)(v1 + 42) = 2;
  return 1;
}

//----- (0203BC18) --------------------------------------------------------
int __fastcall Function_203bc18(int a1)
{
  int v1
  int *v2
  int v3

  v1 = a1;
  v2 = (int *)LoadOverWorldDataAdress(a1);
  v3 = GetUnknownStruct01_c(v1);
  *(uint *)(v3 + 504) = Function_203d20c(v2, v3 + 460);
  Function_207cb70(*(uint *)(v3 + 504), 0);
  *(uint *)(v3 + 456) = Function_203bc5c;
  ((void (__fastcall *)(int *))dword_21E2064[0])(v2);
  return 0;
}

//----- (0203BC5C) --------------------------------------------------------
int __fastcall Function_203bc5c(int a1, int a2, int a3, int a4)
{
  int v4
  uint *v5
  int v6
  int v7
  uint v8
  int v9
  int v10
  ushort v11
  void (__fastcall *v12)(int *, int)
  int v13
  int v14
  int v15
  int v16
  char v17
  int v18
  char v19
  uint *v21
  int *v22
  int *v23
  int v24
  ushort v25
  char v26
  int v27

  v27 = a4;
  v4 = a1;
  v5 = (uint *)LoadOverWorldDataAdress(a1);
  v6 = GetUnknownStruct01_c(v4);
  v22 = Function_207cb08(0xBu);
  v7 = Function_207cb20();
  memcpy(v22, *(char **)(v6 + 504), v7);
  free(*(uint *)(v6 + 504));
  v8 = Function_207cb9c((int)v22);
  if ( v8 <= 5 )
    JUMPOUT(__CS__, *((short *)&off_203BCAC + v8) + 33799342);
  switch ( (uchar)v8 )
  {
    case 0:
      v25 = Function_207cb94((int)v22);
      v26 = Function_207cba4((int)v22);
      v24 = v4;
      v11 = GetItemData(v25, 6u, 0xBu);
      v12 = (void (__fastcall *)(int *, int))Function_20683f4(0, v11);
      v12(&v24, v6 + 460);
      break;
    case 1:
      v13 = Function_207cb94((int)v22);
      Function_203c2d8(v4, v13);
      break;
    case 2:
      v14 = malloc(0xBu, 64);
      Call_FillMemWithValue((int *)v14, 0, 0x40u);
      *(uint *)v14 = LoadPokePartyAdress(v5[3]);
      *(uint *)(v14 + 4) = LoadVariableAreaAdressItemList(v5[3]);
      *(uint *)(v14 + 8) = LoadVariableAreaAdress_f(v5[3]);
      *(uint *)(v14 + 12) = LoadPlayerDataAdress(v5[3]);
      *(uint *)(v14 + 24) = v6 + 488;
      *(uchar *)(v14 + 33) = 0;
      *(uchar *)(v14 + 32) = 9;
      *(ushort *)(v14 + 36) = Function_207cb94((int)v22);
      *(uint *)(v14 + 28) = v5;
      OverWorldData_AllocAndInitOverlayData((int)v5, (int *)&Unknown_20f1e88, v14);
      *(uint *)(v6 + 504) = v14;
      Function_203b674(v6, (int)Function_203b7c0);
      break;
    case 4:
      v21 = (uint *)LoadPokePartyAdress(v5[3]);
      v15 = **(uint **)(v6 + 508);
      v16 = Function_207cb94((int)v22);
      v23 = GetAdrOfPkmnInParty(v21, v15);
      free(*(uint *)(v6 + 508));
      if ( Function_207d2d0(v16) != 1 || GetPkmnData(v23, 6u, 0) )
      {
        v18 = malloc(0xBu, 64);
        Call_FillMemWithValue((int *)v18, 0, 0x40u);
        *(uint *)v18 = v21;
        *(uint *)(v18 + 4) = LoadVariableAreaAdressItemList(v5[3]);
        *(uint *)(v18 + 8) = LoadVariableAreaAdress_f(v5[3]);
        *(uint *)(v18 + 12) = LoadPlayerDataAdress(v5[3]);
        *(uint *)(v18 + 24) = v6 + 488;
        *(uchar *)(v18 + 33) = 0;
        *(ushort *)(v18 + 36) = Function_207cb94((int)v22);
        *(uchar *)(v18 + 34) = v15;
        *(uint *)(v18 + 28) = v5;
        if ( *(ushort *)(v18 + 36) )
          v19 = 10;
        else
          v19 = 0;
        *(uchar *)(v18 + 32) = v19;
        OverWorldData_AllocAndInitOverlayData((int)v5, (int *)&Unknown_20f1e88, v18);
        *(uint *)(v6 + 504) = v18;
        Function_203b674(v6, (int)Function_203b7c0);
      }
      else
      {
        v17 = Function_207d2f0(v16);
        *(uint *)(v6 + 504) = Function_203d920((int)v5, 2, (uchar)v15, v17);
        *(uint *)(v6 + 508) = Function_203c540(v16, 0, v15);
        Function_203b674(v6, (int)Function_203c558);
      }
      break;
    default:
      Function_20509d4(v5, v9, v10);
      *(ushort *)(v6 + 42) = 12;
      break;
  }
  free((int)v22);
  return 0;
}

//----- (0203BE8C) --------------------------------------------------------
int __fastcall Function_203be8c(int a1)
{
  int v1

  v1 = GetUnknownStruct01_c(a1);
  ((void (__fastcall *)(uint))dword_21D1744[0])(0);
  *(uint *)(v1 + 456) = Function_203beb0;
  *(ushort *)(v1 + 42) = 2;
  return 1;
}

//----- (0203BEB0) --------------------------------------------------------
int __fastcall Function_203beb0(int a1)
{
  int v1
  int v2
  int v3

  v1 = a1;
  v2 = LoadOverWorldDataAdress(a1);
  v3 = GetUnknownStruct01_c(v1);
  *(uint *)(v3 + 504) = Function_2071f04(0xBu);
  Function_2071d40(1, 1, 0, 255, v2, *(uint *)(v3 + 504));
  Function_203e09c(v2, *(uint *)(v3 + 504));
  *(uint *)(v3 + 456) = Function_203bf00;
  return 0;
}

//----- (0203BF00) --------------------------------------------------------
int __fastcall Function_203bf00(int a1)
{
  int v1
  uint *v2
  int v3
  int v4
  int v5

  v1 = a1;
  v2 = (uint *)LoadOverWorldDataAdress(a1);
  v3 = GetUnknownStruct01_c(v1);
  Function_20721d4((int)v2, *(uint *)(v3 + 504));
  Call_free12(*(uint *)(v3 + 504));
  Function_20509d4(v2, v4, v5);
  *(ushort *)(v3 + 42) = 12;
  return 0;
}

//----- (0203BF38) --------------------------------------------------------
int __fastcall Function_203bf38(int a1)
{
  int v1
  int v2

  v1 = a1;
  v2 = GetUnknownStruct01_c(a1);
  Function_203b078(v2);
  Function_200dc9c(v2, 1);
  Function_201c3c0(*(uint *)v2, *(uchar *)(v2 + 4));
  Function_201a8fc(v2);
  Function_203b200(v1);
  *(ushort *)(v2 + 42) = 4;
  return 1;
}

//----- (0203BF6C) --------------------------------------------------------
int __fastcall Function_203bf6c(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int result

  v1 = a1;
  v2 = GetUnknownStruct01_c(a1);
  v3 = LoadOverWorldDataAdress(v1);
  if ( Function_20247e0(*(uint *)(v3 + 12)) )
  {
    Function_203e8e0(v1, 0x7F2u, 0, 0);
  }
  else
  {
    *(uint *)(v2 + 504) = malloc(0x20u, 8);
    v4 = *(uint *)(v2 + 504);
    *(ushort *)(v4 + 4) = 0;
    Function_203e8e0(v1, 0x7D5u, 0, v4 + 4);
  }
  result = 5;
  *(ushort *)(v2 + 42) = 5;
  return result;
}

//----- (0203BFC0) --------------------------------------------------------
int __fastcall Function_203bfc0(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int result
  short v6

  v1 = a1;
  v2 = LoadOverWorldDataAdress(a1);
  v3 = GetUnknownStruct01_c(v1);
  v4 = *(uint *)(v3 + 504);
  if ( Function_20247e0(*(uint *)(v2 + 12)) )
  {
    result = 0;
    *(ushort *)(v3 + 42) = 0;
  }
  else
  {
    if ( *(ushort *)(v4 + 4) )
      v6 = 15;
    else
      v6 = 0;
    *(ushort *)(v3 + 42) = v6;
    result = free(v4);
  }
  return result;
}

//----- (0203C000) --------------------------------------------------------
int __fastcall Function_203c000(int a1)
{
  int v1

  v1 = GetUnknownStruct01_c(a1);
  ((void (__fastcall *)(uint))dword_21D1744[0])(0);
  *(uint *)(v1 + 456) = Function_203c024;
  *(ushort *)(v1 + 42) = 2;
  return 1;
}

//----- (0203C024) --------------------------------------------------------
int __fastcall Function_203c024(int a1)
{
  int v1
  int v2
  int v3

  v1 = a1;
  v2 = LoadOverWorldDataAdress(a1);
  v3 = GetUnknownStruct01_c(v1);
  *(uint *)(v3 + 504) = Function_203d8ec(v2);
  *(uint *)(v3 + 456) = Function_203c050;
  return 0;
}

//----- (0203C050) --------------------------------------------------------
int __fastcall Function_203c050(int a1)
{
  int v1
  uint *v2
  int v3
  int v4
  int v5

  v1 = a1;
  v2 = (uint *)LoadOverWorldDataAdress(a1);
  v3 = GetUnknownStruct01_c(v1);
  free(*(uint *)(v3 + 504));
  Function_20509d4(v2, v4, v5);
  *(ushort *)(v3 + 42) = 12;
  return 0;
}

//----- (0203C07C) --------------------------------------------------------
int __fastcall Function_203c07c(int a1)
{
  int v1

  v1 = GetUnknownStruct01_c(a1);
  ((void (__fastcall *)(uint))dword_21D1744[0])(0);
  *(uint *)(v1 + 456) = Function_203c0a0;
  *(ushort *)(v1 + 42) = 2;
  return 1;
}

//----- (0203C0A0) --------------------------------------------------------
int __fastcall Function_203c0a0(int a1, int a2, int a3, int a4)
{
  int v4
  int v5
  int v6
  char v8
  int v9

  v9 = a4;
  v4 = a1;
  v5 = LoadOverWorldDataAdress(a1);
  v6 = GetUnknownStruct01_c(v4);
  *(uint *)(v6 + 504) = Function_209747c(2, 0, *(uint *)(v5 + 12), 0xBu);
  Function_2014a9c(&v8, 4);
  Function_2097500(*(ushort **)(v6 + 504), &v8);
  Function_203d874(v5, *(uint *)(v6 + 504));
  *(uint *)(v6 + 456) = Function_203c0f8;
  return 0;
}

//----- (0203C0F8) --------------------------------------------------------
int __fastcall Function_203c0f8(int a1, int a2, int a3, int a4)
{
  int v4
  uint *v5
  int v6
  int v7
  int v8
  char v10
  int v11

  v11 = a4;
  v4 = a1;
  v5 = (uint *)LoadOverWorldDataAdress(a1);
  v6 = GetUnknownStruct01_c(v4);
  if ( Function_2097528(*(uint *)(v6 + 504)) )
  {
    *(ushort *)(v6 + 42) = 12;
  }
  else
  {
    Function_2097540(*(uint *)(v6 + 504), &v10);
    if ( Function_2033e1c() )
    {
      Function_205c12c((int)&v10);
      Function_205c010(v5[31], &v10);
    }
    *(ushort *)(v6 + 42) = 8;
  }
  Call_free15(*(uint *)(v6 + 504));
  Function_20509d4(v5, v7, v8);
  Function_205c2b0(v5[32]);
  return 0;
}

//----- (0203C164) --------------------------------------------------------
int __fastcall StartMenu_RETIRE(int a1)
{
  int v1
  int v2
  int v3
  int v4

  v1 = a1;
  v2 = LoadOverWorldDataAdress(a1);
  v3 = GetUnknownStruct01_c(v1);
  Function_203b078(v3);
  Function_200dc9c(v3, 1);
  Function_201c3c0(*(uint *)v3, *(uchar *)(v3 + 4));
  Function_201a8fc(v3);
  Function_203b200(v1);
  v4 = LoadFlagAdress(*(uint *)(v2 + 12));
  if ( Function_206ae5c(v4) == 1 )
    Function_203e918(v1, 0x2275u, 0);
  else
    Function_203e918(v1, 4u, 0);
  free(v3);
  return 0;
}

//----- (0203C1C8) --------------------------------------------------------
int __fastcall Function_203c1c8(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int *v5
  int v6
  int v7
  ushort *v9

  v1 = a1;
  v2 = LoadOverWorldDataAdress(a1);
  v3 = GetUnknownStruct01_c(v1);
  v4 = malloc(0xBu, 48);
  memcpy((uchar *)v4, *(char **)(v3 + 504), 48);
  free(*(uint *)(v3 + 504));
  if ( *(uchar *)(v4 + 18) == 2 )
  {
    v5 = (int *)malloc(0xBu, 64);
    v9 = *(ushort **)(v3 + 508);
    v6 = (int)v5;
    Call_FillMemWithValue(v5, 0, 0x40u);
    *(uint *)v6 = LoadPokePartyAdress(*(uint *)(v2 + 12));
    *(uint *)(v6 + 4) = LoadVariableAreaAdressItemList(*(uint *)(v2 + 12));
    *(uint *)(v6 + 8) = LoadVariableAreaAdress_f(*(uint *)(v2 + 12));
    *(uint *)(v6 + 12) = LoadPlayerDataAdress(*(uint *)(v2 + 12));
    *(uint *)(v6 + 24) = v3 + 488;
    v7 = 0;
    *(uchar *)(v6 + 33) = 0;
    *(uint *)(v6 + 28) = v2;
    if ( *v9 )
    {
      *(uchar *)(v6 + 32) = 7;
    }
    else
    {
      *(uchar *)(v6 + 32) = 8;
      v7 = (ushort)v9[1];
    }
    *(uint *)(v6 + 52) = v7;
    *(ushort *)(v6 + 36) = *v9;
    *(uchar *)(v6 + 34) = *(uchar *)(v4 + 20);
    *(ushort *)(v6 + 38) = *(ushort *)(v4 + 24);
    *(uchar *)(v6 + 40) = *(uchar *)(v4 + 22);
    OverWorldData_AllocAndInitOverlayData(v2, (int *)&Unknown_20f1e88, v6);
    free(*(uint *)(v3 + 508));
    *(uint *)(v3 + 504) = v6;
    Function_203b674(v3, (int)Function_203b7c0);
  }
  else
  {
    *(uint *)(v3 + 504) = Function_203d390(v2, v3 + 488, *(uchar *)(v4 + 20));
    Function_203b674(v3, (int)Function_203b7c0);
  }
  free(v4);
  return 0;
}

//----- (0203C2D8) --------------------------------------------------------
int __fastcall Function_203c2d8(int a1, int a2)
{
  int v2
  int v3
  int v4
  int v5
  uint v6
  int v7
  int v9
  int v10
  char v11
  uchar v12[3]

  v2 = a1;
  v3 = a2;
  v10 = LoadOverWorldDataAdress(a1);
  v4 = GetUnknownStruct01_c(v2);
  *(uint *)(v4 + 504) = Function_20972fc(0xBu);
  v9 = LoadVariableAreaAdressItemList(*(uint *)(v10 + 12));
  Function_2097320(*(uint *)(v4 + 504), v3, 1);
  v5 = 0;
  v6 = 0;
  do
  {
    v7 = Function_207d354(v6);
    if ( CheckItem(v9, v7, 1u, 0xBu) == 1 )
    {
      Function_2097320(*(uint *)(v4 + 504), v7, 0);
      v5 = (v5 + 1) & 0xFF;
    }
    v6 = (v6 + 1) & 0xFF;
  }
  while ( v6 < 0x40 );
  Function_207d9b4(*(uint *)(v10 + 152), 4, &v11, v12);
  Function_209733c(*(uchar **)(v4 + 504), v12[0], v11, v5 + 3);
  Function_203d2e4(v10, *(uint *)(v4 + 504));
  return Function_203b674(v4, (int)Function_203c390);
}

//----- (0203C390) --------------------------------------------------------
int __fastcall Function_203c390(int a1, int a2, int a3, int a4)
{
  int v4
  int *v5
  int v6
  int v8

  v8 = a4;
  v4 = a1;
  v5 = (int *)LoadOverWorldDataAdress(a1);
  v6 = GetUnknownStruct01_c(v4);
  Function_2097390(*(uint *)(v6 + 504), (uchar *)&v8 + 1, &v8);
  Function_207d9c8(v5[38], 4, v8, SBYTE1(v8));
  Function_2018238(0xBu, *(uint *)(v6 + 504));
  *(uint *)(v6 + 504) = Function_203d20c(v5, v6 + 460);
  Function_203b674(v6, (int)Function_203bc5c);
  return 0;
}

//----- (0203C3F4) --------------------------------------------------------
int __fastcall Function_203c3f4(int a1)
{
  int v1
  int *v2
  int v3

  v1 = a1;
  v2 = (int *)LoadOverWorldDataAdress(a1);
  v3 = GetUnknownStruct01_c(v1);
  Function_2018238(0xBu, *(uint *)(v3 + 504));
  *(uint *)(v3 + 504) = Function_203d20c(v2, v3 + 460);
  Function_203b674(v3, (int)Function_203bc5c);
  return 0;
}

//----- (0203C434) --------------------------------------------------------
int __fastcall Function_203c434(int a1)
{
  int v1
  uint *v2
  int v3
  int *v4
  int v5
  int v6
  uint *v7
  int *v8
  int v9
  uchar *v10
  int v11
  int v12

  v1 = a1;
  v2 = (uint *)LoadOverWorldDataAdress(a1);
  v3 = GetUnknownStruct01_c(v1);
  v4 = *(int **)(v3 + 508);
  v5 = *v4;
  Function_2018238(0xBu, (int)v4);
  v6 = *(uint *)(v3 + 504);
  if ( *(uint *)(v6 + 16) )
  {
    v7 = (uint *)LoadPokePartyAdress(v2[3]);
    v8 = GetAdrOfPkmnInParty(v7, v5);
    v9 = Function_207064c(
           0xBu,
           (int)v2,
           (int)v8,
           *(uint *)(v6 + 28),
           32 * *(ushort *)(v6 + 20) + 16,
           32 * *(ushort *)(v6 + 24) + 16);
    v10 = Function_202be00(1, *(uint *)(v6 + 28), 0xBu);
    Function_202b758(v2[39], (int)v10, 1u);
    Function_2018238(0xBu, *(uint *)(v3 + 504));
    Function_20509d4(v2, v11, v12);
    *(uint *)(v3 + 456) = Function_2070680;
    *(uint *)(v3 + 504) = v9;
    *(ushort *)(v3 + 42) = 10;
  }
  else
  {
    Function_2018238(0xBu, *(uint *)(v3 + 504));
    *(uint *)(v3 + 504) = Function_203d390((int)v2, v3 + 488, v5);
    Function_203b674(v3, (int)Function_203b7c0);
  }
  return 0;
}

//----- (0203C50C) --------------------------------------------------------
int __fastcall Function_203c50c(int a1)
{
  int v1
  int *v2
  int v3

  v1 = a1;
  v2 = (int *)LoadOverWorldDataAdress(a1);
  v3 = GetUnknownStruct01_c(v1);
  *(uint *)(v3 + 504) = Function_203d20c(v2, v3 + 460);
  Function_203b674(v3, (int)Function_203bc5c);
  return 0;
}

//----- (0203C540) --------------------------------------------------------
int __fastcall Function_203c540(short a1, char a2, char a3)
{
  short v3
  char v4
  char v5
  int result

  v3 = a1;
  v4 = a2;
  v5 = a3;
  result = malloc(0xBu, 4);
  *(ushort *)result = v3;
  *(uchar *)(result + 2) = v5;
  *(uchar *)(result + 3) = v4;
  return result;
}

//----- (0203C558) --------------------------------------------------------
int __fastcall Function_203c558(int a1)
{
  int v1
  int *v2
  int v3
  int v4

  v1 = a1;
  v2 = (int *)LoadOverWorldDataAdress(a1);
  v3 = GetUnknownStruct01_c(v1);
  v4 = *(uint *)(v3 + 508);
  switch ( *(uchar *)(v4 + 3) )
  {
    case 0:
      if ( Function_2097728(*(uint *)(v3 + 504)) == 1 )
      {
        Function_203c668((int)v2, v3, 12);
      }
      else
      {
        Function_2097770(*(uint *)(v3 + 504));
        *(uint *)(v3 + 504) = Function_203d390((int)v2, v3 + 488, *(uchar *)(v4 + 2));
        Function_203b674(v3, (int)Function_203b7c0);
      }
      break;
    case 1:
      if ( Function_2097728(*(uint *)(v3 + 504)) == 1 )
      {
        Function_203c668((int)v2, v3, 11);
      }
      else
      {
        Function_2097770(*(uint *)(v3 + 504));
        *(uint *)(v3 + 504) = Function_203d20c(v2, v3 + 460);
        Function_203b674(v3, (int)Function_203bc5c);
      }
      break;
    case 2:
      Function_2097770(*(uint *)(v3 + 504));
      *(uint *)(v3 + 504) = Function_203d390((int)v2, v3 + 488, *(uchar *)(v4 + 2));
      Function_203b674(v3, (int)Function_203b7c0);
      break;
    case 3:
      Function_2097770(*(uint *)(v3 + 504));
      *(uint *)(v3 + 504) = Function_203d20c(v2, v3 + 460);
      Function_203b674(v3, (int)Function_203bc5c);
      break;
    default:
      break;
  }
  free(*(uint *)(v3 + 508));
  return 0;
}

//----- (0203C668) --------------------------------------------------------
int __fastcall Function_203c668(int a1, int a2, char a3)
{
  int v3
  int v4
  char v5
  int v6
  int *v7
  int *v8

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = *(uint *)(a2 + 508);
  v7 = (int *)malloc(0xBu, 64);
  Call_FillMemWithValue(v7, 0, 0x40u);
  *v7 = LoadPokePartyAdress(*(uint *)(v3 + 12));
  v7[1] = LoadVariableAreaAdressItemList(*(uint *)(v3 + 12));
  v7[2] = LoadVariableAreaAdress_f(*(uint *)(v3 + 12));
  v7[3] = LoadPlayerDataAdress(*(uint *)(v3 + 12));
  v7[6] = v4 + 488;
  *((uchar *)v7 + 33) = 0;
  *((ushort *)v7 + 18) = *(ushort *)v6;
  *((uchar *)v7 + 34) = *(uchar *)(v6 + 2);
  *((uchar *)v7 + 32) = v5;
  v7[7] = v3;
  v8 = GetAdrOfPkmnInParty((uint *)*v7, *(uchar *)(v6 + 2));
  Function_2097750(*(uint *)(v4 + 504), (int)v8);
  Function_2097770(*(uint *)(v4 + 504));
  OverWorldData_AllocAndInitOverlayData(v3, (int *)&Unknown_20f1e88, (int)v7);
  *(uint *)(v4 + 504) = v7;
  return Function_203b674(v4, (int)Function_203b7c0);
}

//----- (0203C710) --------------------------------------------------------
int __fastcall Function_203c710(int a1)
{
  int v1
  int *v2
  int v3

  v1 = a1;
  v2 = (int *)LoadOverWorldDataAdress(a1);
  v3 = GetUnknownStruct01_c(v1);
  Call_free16(*(uint *)(v3 + 504));
  *(uint *)(v3 + 504) = Function_203d20c(v2, v3 + 460);
  Function_203b674(v3, (int)Function_203bc5c);
  return 0;
}

//----- (0203C750) --------------------------------------------------------
int __fastcall Function_203c750(int a1)
{
  int v1
  int *v2
  int v3

  v1 = a1;
  v2 = (int *)LoadOverWorldDataAdress(a1);
  v3 = GetUnknownStruct01_c(v1);
  *(uint *)(v3 + 504) = Function_203d20c(v2, v3 + 460);
  Function_203b674(v3, (int)Function_203bc5c);
  return 0;
}

//----- (0203C784) --------------------------------------------------------
int __fastcall Function_203c784(int a1)
{
  int v1
  int *v2
  int v3

  v1 = a1;
  v2 = (int *)LoadOverWorldDataAdress(a1);
  v3 = GetUnknownStruct01_c(v1);
  *(uint *)(v3 + 504) = Function_203d20c(v2, v3 + 460);
  Function_203b674(v3, (int)Function_203bc5c);
  return 0;
}

//----- (0203C7B8) --------------------------------------------------------
int __fastcall Function_203c7b8(int a1)
{
  int v1
  int v2
  int v3
  int v4
  uchar *v5
  int v6
  int v7
  int v8
  int v9
  int v10
  int v11
  int v12
  int v13
  int v14
  int v15
  int v16
  int v17
  int v18
  int v19
  int v20
  uint *v21
  int result
  uint *v23
  int *v24

  v1 = a1;
  v2 = LoadOverWorldDataAdress(a1);
  v3 = GetUnknownStruct01_c(v1);
  v4 = v3;
  v5 = *(uchar **)(v3 + 504);
  Function_200569c();
  Function_2017fc8(3, 73, 196608);
  v23 = (uint *)LoadPokePartyAdress(*(uint *)(v2 + 12));
  v24 = GetAdrOfPkmnInParty(v23, *v5);
  v6 = *(uint *)(v2 + 12);
  if ( v5[1] )
  {
    v13 = LoadPlayerDataAdress(v6);
    v14 = Function_208c324(*(uint *)(v2 + 12));
    v15 = LoadPokedexDataAdress(*(uint *)(v2 + 12));
    v16 = LoadVariableAreaAdressItemList(*(uint *)(v2 + 12));
    v17 = LoadVariableAreaAdress_14(*(uint *)(v2 + 12));
    v18 = LoadVariableAreaAdress_5(*(uint *)(v2 + 12));
    v19 = Function_207ae68(
            (int)v23,
            v24,
            *((ushort *)v5 + 2),
            v13,
            v14,
            v15,
            v16,
            v17,
            v18,
            *((uint *)v5 + 2),
            0,
            0x49u);
  }
  else
  {
    v7 = LoadPlayerDataAdress(v6);
    v8 = Function_208c324(*(uint *)(v2 + 12));
    v9 = LoadPokedexDataAdress(*(uint *)(v2 + 12));
    v10 = LoadVariableAreaAdressItemList(*(uint *)(v2 + 12));
    v11 = LoadVariableAreaAdress_14(*(uint *)(v2 + 12));
    v12 = LoadVariableAreaAdress_5(*(uint *)(v2 + 12));
    v19 = Function_207ae68((int)v23, v24, *((ushort *)v5 + 2), v7, v8, v9, v10, v11, v12, *((uint *)v5 + 2), 1, 0x49u);
  }
  v20 = v19;
  v21 = (uint *)malloc(0xBu, 4);
  *v21 = *v5;
  *(uint *)(v4 + 508) = v21;
  free(*(uint *)(v4 + 504));
  *(uint *)(v4 + 504) = v20;
  result = 7;
  *(ushort *)(v4 + 42) = 7;
  return result;
}

//----- (0203C8CC) --------------------------------------------------------
int __fastcall Function_203c8cc(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int result

  v1 = a1;
  v2 = LoadOverWorldDataAdress(a1);
  v3 = GetUnknownStruct01_c(v1);
  v4 = v3;
  result = Function_207b0d0(*(uint *)(v3 + 504));
  if ( result == 1 )
  {
    Function_207b0e0(*(uint *)(v4 + 504));
    Function_201807c(73);
    Function_20055d0(1141, 0);
    Function_2004234(0);
    Function_20556a0(v2, **(uint **)(v2 + 28));
    *(uint *)(v4 + 504) = Function_203d20c((int *)v2, v4 + 460);
    Function_207cb70(*(uint *)(v4 + 504), **(uint **)(v4 + 508));
    free(*(uint *)(v4 + 508));
    result = Function_203b674(v4, (int)Function_203bc5c);
  }
  return result;
}

//----- (0203C954) --------------------------------------------------------
int __fastcall Function_203c954(int a1, int *a2, int *a3)
{
  int v3
  int *v4
  int *v5
  int v6
  int v7

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = GetSpriteFaceDirection(*(uint *)(a1 + 60));
  *v4 = GetSpritePositionX(*(uint *)(v3 + 60));
  v7 = GetSpritePositionY(*(uint *)(v3 + 60));
  *v5 = v7;
  switch ( (uchar)v7 )
  {
    case 0:
      --*v5;
      break;
    case 1:
      ++*v5;
      break;
    case 2:
      --*v4;
      break;
    case 3:
      ++*v4;
      break;
    default:
      return v6;
  }
  return v6;
}

//----- (0203C9B0) --------------------------------------------------------
BOOL __fastcall Function_203c9b0(int a1, int a2)
{
  int v2
  int v3
  int v4

  v2 = a2;
  v3 = Function_205eb3c(a1);
  v4 = Function_20630dc(v3);
  return v4 == Function_20630dc(v2);
}

//----- (0203C9D4) --------------------------------------------------------
uint *__fastcall Function_203c9d4(int a1, uint *a2)
{
  uint *v2
  int v3
  int v4
  int v5
  uint *result
  int v7
  int v8

  v2 = a2;
  v3 = a1;
  Function_203c954(a1, &v8, &v7);
  v5 = Function_2054f94(v3, v8, v7, v4);
  if ( Function_205dae0(v5) == 1 )
  {
    switch ( 1 )
    {
      case 0:
        --v7;
        break;
      case 1:
        ++v7;
        break;
      case 2:
        --v8;
        break;
      case 3:
        ++v8;
        break;
      default:
        break;
    }
  }
  result = Function_206326c(*(uint *)(v3 + 56), v8, v7, 0);
  *v2 = result;
  return result;
}

//----- (0203CA40) --------------------------------------------------------
BOOL __fastcall Function_203ca40(int a1, int *a2)
{
  int *v2
  int v3

  v2 = a2;
  v3 = a1;
  Function_203c9d4(a1, a2);
  return *v2 && Function_2062d9c((uint *)*v2) == 1 && Function_203c9b0(*(uint *)(v3 + 60), *v2) == 1;
}

//----- (0203CA6C) --------------------------------------------------------
int __fastcall Function_203ca6c(int a1, ushort *a2, int a3, int a4)
{
  int v4
  int v5
  ushort *v6
  ushort *v7
  ushort *v9
  int v10
  int v11
  int v12
  int v13

  v13 = a4;
  v9 = a2;
  v10 = a3;
  v4 = a1;
  Function_203c954(a1, &v12, &v11);
  v5 = 0;
  if ( v10 > 0 )
  {
    v6 = v9;
    v7 = v9;
    do
    {
      if ( v12 == *((uint *)v6 + 1) && v11 == *((uint *)v6 + 2) )
      {
        if ( v6[1] == 2 )
        {
          if ( Function_203caec(v4, v7) == 1 )
            return v9[10 * v5];
        }
        else if ( Function_203cb18(v4, (int)v7) == 1 )
        {
          return v9[10 * v5];
        }
      }
      ++v5;
      v6 += 10;
      v7 += 10;
    }
    while ( v5 < v10 );
  }
  return 0xFFFF;
}

//----- (0203CAEC) --------------------------------------------------------
BOOL __fastcall Function_203caec(int a1, ushort *a2)
{
  int v2
  int v4

  v2 = a1;
  if ( a2[1] != 2 )
    return 0;
  v4 = Function_203f2f4(*a2);
  return LoadFlagAdressAndCheckFlag(v2, v4) != 1;
}

//----- (0203CB18) --------------------------------------------------------
int __fastcall Function_203cb18(int a1, int a2)
{
  int v2
  int result
  int v4
  int v5
  int v6

  v2 = a2;
  if ( *(ushort *)(a2 + 16) == 4 )
    return 1;
  switch ( (uchar)GetSpriteFaceDirection(*(uint *)(a1 + 60)) )
  {
    case 0u:
      if ( *(ushort *)(v2 + 16) && *(ushort *)(v2 + 16) != 6 )
        goto LABEL_16;
      result = 1;
      break;
    case 1u:
      v4 = *(ushort *)(v2 + 16);
      if ( v4 != 3 && v4 != 6 )
        goto LABEL_16;
      result = 1;
      break;
    case 2u:
      v5 = *(ushort *)(v2 + 16);
      if ( v5 != 2 && v5 != 5 )
        goto LABEL_16;
      result = 1;
      break;
    case 3u:
      v6 = *(ushort *)(v2 + 16);
      if ( v6 != 1 && v6 != 5 )
        goto LABEL_16;
      result = 1;
      break;
    default:
LABEL_16:
      result = 0;
      break;
  }
  return result;
}

//----- (0203CB80) --------------------------------------------------------
int __fastcall Function_203cb80(int a1, int a2, int a3)
{
  int v3
  int v4
  int v5
  int v7
  int v8
  int v9
  int v10

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( GetSpriteFaceDirection(*(uint *)(a1 + 60)) )
    return 0xFFFF;
  Function_203c954(v3, &v10, &v9);
  v7 = 0;
  if ( v5 <= 0 )
    return 0xFFFF;
  v8 = v4;
  while ( v10 != *(uint *)(v8 + 4) || v9 != *(uint *)(v8 + 8) || *(ushort *)(v8 + 2) != 1 )
  {
    ++v7;
    v8 += 20;
    if ( v7 >= v5 )
      return 0xFFFF;
  }
  return *(ushort *)(v4 + 20 * v7);
}

//----- (0203CBE0) --------------------------------------------------------
int __fastcall Function_203cbe0(int a1, int *a2)
{
  int v2
  int *v3

  v2 = a1;
  v3 = a2;
  if ( GetSpriteFaceDirection(*(uint *)(a1 + 60)) )
    return 0;
  if ( Function_203ca40(v2, v3) != 1 || (uint)(GetSpriteGraphic(*v3) - 91) > 5 )
    return 0;
  return 1;
}

//----- (0203CC14) --------------------------------------------------------
int __fastcall Function_203cc14(int a1, ushort *a2, int a3)
{
  int v3
  int v4
  int v5
  ushort *v6
  int v7
  int v8
  int v10
  ushort *v11
  int v12

  v10 = a1;
  v11 = a2;
  v12 = a3;
  v3 = GetSpritePositionX(*(uint *)(a1 + 60));
  v4 = GetSpritePositionY(*(uint *)(v10 + 60));
  v5 = 0;
  if ( v12 <= 0 )
    return 0xFFFF;
  v6 = v11;
  while ( 1 )
  {
    v7 = v6[1];
    if ( v3 >= v7 && v3 < v7 + v6[3] )
    {
      v8 = v6[2];
      if ( v4 >= v8 && v4 < v8 + v6[4] && v6[6] == ScriptHandler_CheckSaveParameter(v10, v6[7]) )
        break;
    }
    ++v5;
    v6 += 8;
    if ( v5 >= v12 )
      return 0xFFFF;
  }
  return v11[8 * v5];
}

//----- (0203CC84) --------------------------------------------------------
int __fastcall AfterContinueGameDiaryEnd_Init(int a1)
{
  int v1
  int v2
  int v3

  v1 = a1;
  v2 = LoadPtrToOverWorldDataIn18(a1);
  v3 = InitOverWorldData(v1);
  RAM_21c07dc = v3;
  if ( *(uint *)(v2 + 4) )
    Function_2053808(v3);
  else
    Function_2053704(v3);
  *(uint *)(v2 + 4) = 0;
  return 1;
}

//----- (0203CCB4) --------------------------------------------------------
int __fastcall AfterContinueGameEnd_Init(int a1)
{
  RAM_21c07dc = InitOverWorldData(a1);
  Function_20535cc(RAM_21c07dc);
  return 1;
}

//----- (0203CCCC) --------------------------------------------------------
BOOL __fastcall AfterContinueGame_Loop(int a1)
{
  int **v1
  int v2
  int v3
  int v4

  v1 = (int **)LoadOverlayData1c(a1);
  return Function_203ceec(v1, v2, v3, v4) != 0;
}

//----- (0203CCE4) --------------------------------------------------------
int __fastcall AfterContinueGame_End(int a1)
{
  Function_203ce6c(a1);
  SetOverlayJumpTableDataToLoad(77, (int)dword_21D742C);
  return 1;
}

//----- (0203CD00) --------------------------------------------------------
uint *__fastcall Function_203cd00(uint *a1, int a2, int a3, int a4)
{
  uint *v4
  uint *result

  v4 = a1;
  if ( *(uint *)(*a1 + 4) )
    ErrorHandler();
  if ( *(uint *)*v4 )
    ErrorHandler();
  LoadOverlay(5, 2, a3, a4);
  v4[26] = 0;
  *(uint *)(*v4 + 8) = 0;
  result = AllocAndInitOverlayData(dword_21F89B0, (int)v4, 0xBu);
  *(uint *)*v4 = result;
  return result;
}

//----- (0203CD44) --------------------------------------------------------
int __fastcall Function_203cd44(int result)
{
  *(uint *)(result + 104) = 0;
  return result;
}

//----- (0203CD4C) --------------------------------------------------------
BOOL __fastcall Function_203cd4c(uint **a1)
{
  return **a1 != 0;
}

//----- (0203CD5C) --------------------------------------------------------
BOOL __fastcall Function_203cd5c(int a1)
{
  return **(uint **)a1 && *(uint *)(a1 + 104);
}

//----- (0203CD74) --------------------------------------------------------
BOOL __fastcall Function_203cd74(int a1)
{
  return *(uint *)(*(uint *)a1 + 4) != 0;
}

//----- (0203CD84) --------------------------------------------------------
uint *__fastcall OverWorldData_AllocAndInitOverlayData(int a1, int *a2, int a3)
{
  int v3
  int *v4
  int v5
  uint *result

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( *(uint *)(*(uint *)a1 + 4) )
    ErrorHandler();
  Function_203cd44(v3);
  result = AllocAndInitOverlayData(v4, v5, 0xBu);
  *(uint *)(*(uint *)v3 + 4) = result;
  return result;
}

//----- (0203CDB0) --------------------------------------------------------
int __fastcall InitOverWorldData(int a1)
{
  int v1
  int v2
  uint *v3
  int v4

  v1 = a1;
  Function_2017fc8(3, 11, 114688);
  Function_2017fc8(3, 32, 0x4000);
  Function_2017fc8(0, 91, 768);
  v2 = MallocSomeDataAndStorePtrInOverlayData1c(v1, 204, 0xBu);
  MI_CpuFill8((ushort *)v2, 0, 0xCCu);
  v3 = (uint *)malloc(0xBu, 16);
  *(uint *)v2 = v3;
  *v3 = 0;
  *(uint *)(*(uint *)v2 + 4) = 0;
  *(uint *)(*(uint *)v2 + 8) = 0;
  *(uint *)(*(uint *)v2 + 12) = 0;
  *(uint *)(v2 + 12) = *(uint *)(LoadPtrToOverWorldDataIn18(v1) + 8);
  *(uint *)(v2 + 16) = 0;
  LoadVariableAreaAdress_6(*(uint *)(v2 + 12));
  AddVariableAreaAdress_6_MapData0();
  *(uint *)(v2 + 28) = v4;
  *(uint *)(v2 + 44) = Call_Malloc11aa();
  Malloc_OverWorldData_Overworlds(v2, 0xBu);
  *(uint *)(v2 + 152) = Calloc24(0xBu);
  *(uint *)(v2 + 148) = Function_206940c(0xBu);
  Function_2069434(*(uint *)(v2 + 148));
  *(uint *)(v2 + 180) = Function_209acbc(0xBu);
  *(uint *)(v2 + 188) = Function_209c370(0xBu);
  return v2;
}

//----- (0203CE6C) --------------------------------------------------------
uint __fastcall Function_203ce6c(int a1)
{
  int v1
  int *v2

  v1 = a1;
  v2 = (int *)LoadOverlayData1c(a1);
  Call_free8(v2[11]);
  Free_OverWorldData_Overworlds((int)v2);
  free(v2[38]);
  Call_free10(v2[37]);
  Call_free18(v2[45]);
  Call_free19(v2[47]);
  free(*v2);
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(91);
  Function_201807c(11);
  return Function_201807c(32);
}

//----- (0203CECC) --------------------------------------------------------
int __fastcall Function_203cecc(int *a1, int a2, int a3, int a4)
{
  int *v4
  int result

  v4 = a1;
  result = *a1;
  if ( result )
  {
    result = CallOverlayDataJumpTable(result, a2, a3, a4);
    if ( result )
    {
      Call_free2(*v4);
      result = 0;
      *v4 = 0;
    }
  }
  return result;
}

//----- (0203CEEC) --------------------------------------------------------
BOOL __fastcall Function_203ceec(int **a1, int a2, int a3, int a4)
{
  int **v4
  int v5
  int v6
  int *v7
  int v8
  int v9
  int v10
  int v11
  int v12
  int *v13

  v4 = a1;
  Function_203cf5c(a1, a2, a3, a4);
  if ( Function_2050958((int)v4) == 1 && v4[1] )
    ((void (__fastcall *)(int **))dword_21EA714[0])(v4);
  v7 = *v4;
  v8 = **v4;
  if ( v8 )
  {
    Function_203cecc(v7, v8, v5, v6);
    if ( !**v4 )
      UnloadOverlay(5, v9, v10, v11);
  }
  else
  {
    v12 = v7[1];
    if ( v12 )
      Function_203cecc(v7 + 1, v12, v5, v6);
  }
  v13 = *v4;
  return (*v4)[3] && !v4[4] && !*v13 && !v13[1];
}

//----- (0203CF5C) --------------------------------------------------------
char *__fastcall Function_203cf5c(uint *a1, int a2, int a3, int a4)
{
  uint *v4
  int v5
  int v6
  char *result
  int v8
  int v9
  char v10
  ushort v11
  char v12
  int v13

  v13 = a4;
  v4 = a1;
  v5 = 0;
  if ( !*(uint *)(*a1 + 8) && a1[26] && !Function_20509a4((int)a1) )
    v5 = 1;
  if ( v5 )
  {
    Function_205f490(v4[15]);
    ((void (__fastcall *)(char *, uint *, uint, uint))dword_21D1CAC[0])(
      &v10,
      v4,
      (ushort)dword_21BF6C4,
      (ushort)dword_21BF6C0);
  }
  v6 = v4[28];
  result = (char *)326;
  if ( *(uint *)v4[7] == 326 )
    v6 = 0;
  switch ( 70 )
  {
    case 1:
      if ( v5 )
      {
        if ( Function_2058c40() )
          ((void (__fastcall *)(char *, uint *))dword_21D213C[0])(&v10, v4);
      }
      result = Function_205805c((int)v4, v5);
      break;
    case 2:
      if ( v5 )
      {
        result = (char *)((int (__fastcall *)(char *, uint *, int))dword_21D2298[0])(&v10, v4, v6);
        if ( result != (char *)1 )
          result = (char *)Function_205f180(v4[15], v4[10], -1, v11, v12, 0);
      }
      break;
    case 3:
      if ( v5 )
      {
        if ( Function_2058c40() )
        {
          if ( ((int (__fastcall *)(char *, uint *))dword_21D219C[0])(&v10, v4) == 1 )
            LOBYTE(v5) = 0;
        }
        else
        {
          LOBYTE(v5) = 0;
        }
      }
      result = Function_205805c((int)v4, v5);
      break;
    case 4:
      if ( v5 )
      {
        if ( ((int (__fastcall *)(char *, uint *, int))dword_21D2368[0])(&v10, v4, v6) == 1 )
        {
          ((void (__fastcall *)(uint))dword_21DDA78[0])(*(uint *)(v4[1] + 8));
          ((void (__fastcall *)(uint *, int))dword_21E1BCC[0])(v4, 4);
          ((void (__fastcall *)(uint))dword_21E0EEC[0])(v4[15]);
          result = (char *)((int (__fastcall *)(uint *, uint, int))dword_21EA714[0])(v4, 0, 1);
        }
        else
        {
          if ( dword_21BF6C4 & 1 )
            ((void (__fastcall *)(uint))dword_21DDA78[0])(*(uint *)(v4[1] + 8));
          v8 = 0;
          if ( Function_203d158() )
            v8 = ((int (*)(void))dword_2253DD4)();
          result = (char *)Function_205f180(v4[15], v4[10], -1, v11, v12, v8);
        }
      }
      break;
    default:
      if ( v5 )
      {
        if ( ((int (__fastcall *)(char *, uint *, int))dword_21D1DA4[0])(&v10, v4, v6) == 1 )
        {
          ((void (__fastcall *)(uint))dword_21DDA78[0])(*(uint *)(v4[1] + 8));
          ((void (__fastcall *)(uint *, int))dword_21E1BCC[0])(v4, 4);
          Function_205f56c(v4[15]);
          ((void (__fastcall *)(uint))dword_21E0EEC[0])(v4[15]);
          result = (char *)((int (__fastcall *)(uint *, uint, int))dword_21EA714[0])(v4, 0, 1);
        }
        else
        {
          if ( dword_21BF6C4 & 1 )
            ((void (__fastcall *)(uint))dword_21DDA78[0])(*(uint *)(v4[1] + 8));
          v9 = 0;
          if ( Function_203d158() )
            v9 = ((int (*)(void))dword_2253DD4)();
          result = (char *)Function_205f180(v4[15], v4[10], -1, v11, v12, v9);
        }
      }
      break;
  }
  return result;
}