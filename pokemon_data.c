//----- (02073C2C) --------------------------------------------------------
int __fastcall ClearCompletePkmnDataStructure(int *a1)
{
  int *v1
  int v2
  int v3

  v1 = a1;
  MIi_CpuClearFast(0, a1, 0xECu);
  v2 = *((ushort *)v1 + 3);
  Call_DecryptPkmnData2((int)(v1 + 2), 0x80u);
  v3 = *v1;
  return Call_DecryptPkmnData2((int)(v1 + 34), 0x64u);
}

//----- (02073C54) --------------------------------------------------------
int __fastcall ClearPkmnDataStructure1(uint *a1)
{
  uint *v1
  int v2

  v1 = a1;
  MIi_CpuClearFast(0, a1, 0x88u);
  v2 = *((ushort *)v1 + 3);
  return Call_DecryptPkmnData2((int)(v1 + 2), 0x80u);
}

//----- (02073C70) --------------------------------------------------------
int GetPkmnDataSize()
{
  return 236;
}

//----- (02073C74) --------------------------------------------------------
int *__fastcall AllocPkmnData(uint a1)
{
  int *v1

  v1 = (int *)malloc(a1, 236);
  ClearCompletePkmnDataStructure(v1);
  return v1;
}

//----- (02073C88) --------------------------------------------------------
int __fastcall InitEncryptPkmnData(int *a1)
{
  int *v1
  short v2
  int v3
  int v4
  int v5

  v1 = a1;
  v2 = *((ushort *)a1 + 2);
  v3 = 0;
  if ( !(v2 & 1) )
  {
    v3 = 1;
    if ( v2 & 2 )
      ErrorHandler();
    *((ushort *)v1 + 2) = v1[1] & 0xFFFE | 1;
    *((ushort *)v1 + 2) |= 2u;
    v4 = *v1;
    Call_DecryptPkmnData3((int)(v1 + 34), 0x64u);
    v5 = *((ushort *)v1 + 3);
    Call_DecryptPkmnData3((int)(v1 + 2), 0x80u);
  }
  return v3;
}

//----- (02073CD4) --------------------------------------------------------
int __fastcall InitEncryptPkmnData_Part1And2(int *a1, int a2)
{
  int *v2
  short v3
  int v4
  int v5
  int v6

  v2 = a1;
  v3 = *((ushort *)a1 + 2);
  v4 = 0;
  if ( (v3 & 1) == 1 && a2 == 1 )
  {
    *((ushort *)a1 + 2) = v3 & 0xFFFE;
    v4 = 1;
    *((ushort *)a1 + 2) &= 0xFFFDu;
    v5 = *a1;
    Call_DecryptPkmnData2((int)(a1 + 34), 0x64u);
    *((ushort *)v2 + 3) = CalcPokemonChecksum((ushort *)v2 + 4, 0x80u);
    v6 = *((ushort *)v2 + 3);
    Call_DecryptPkmnData2((int)(v2 + 2), 0x80u);
  }
  return v4;
}

//----- (02073D20) --------------------------------------------------------
int __fastcall InitEncryptPkmnData_Part1(int a1)
{
  short v1
  int v2
  int v3

  v1 = *(ushort *)(a1 + 4);
  v2 = 0;
  if ( !(v1 & 2) )
  {
    *(ushort *)(a1 + 4) = v1 | 2;
    v3 = *(ushort *)(a1 + 6);
    v2 = 1;
    Call_DecryptPkmnData3(a1 + 8, 0x80u);
  }
  return v2;
}

//----- (02073D48) --------------------------------------------------------
int __fastcall InitEncryptPkmnData_Part1Again(ushort *a1, int a2)
{
  ushort *v2
  int v3
  int v4
  int v5

  v2 = a1;
  v3 = a1[2];
  v4 = 0;
  if ( (uint)(v3 << 30) >> 31 == 1 && a2 == 1 )
  {
    a1[2] = v3 & 0xFFFD;
    v4 = 1;
    a1[3] = CalcPokemonChecksum(a1 + 4, 0x80u);
    v5 = v2[3];
    Call_DecryptPkmnData2((int)(v2 + 4), 0x80u);
  }
  return v4;
}

//----- (02073D80) --------------------------------------------------------
int __fastcall InitPkmnData(int *a1, int a2, int a3, int a4, int a5, uint a6, int a7, int a8)
{
  int *v8
  int v9
  int v10
  int v11
  ushort *v12
  int v14
  ushort v15[12]
  int v16
  int *varg_r0
  int varg_r1
  int varg_r2
  int varg_r3

  varg_r0 = a1;
  varg_r1 = a2;
  varg_r2 = a3;
  varg_r3 = a4;
  v16 = a4;
  v8 = a1;
  v9 = a2;
  v10 = a4;
  ClearCompletePkmnDataStructure(a1);
  InitPkmnDataStructure(v8, v9, varg_r2, v10, a5, a6, a7, a8);
  Call_DecryptPkmnData2((int)(v8 + 34), 0x64u);
  v11 = *v8;
  Call_DecryptPkmnData2((int)(v8 + 34), 0x64u);
  SetPkmnData((int)v8, 161, (ushort *)&varg_r2);
  v12 = (ushort *)Function_202818c(0);
  SetPkmnData((int)v8, 170, v12);
  free((int)v12);
  v14 = 0;
  SetPkmnData((int)v8, 162, (ushort *)&v14);
  MIi_CpuClearFast(0, v15, 0x18u);
  SetPkmnData((int)v8, 171, v15);
  return Function_207418c(v8);
}

//----- (02073E18) --------------------------------------------------------
int InitPkmnDataStructure(uint *a1, int a2, int a3, int a4, int a5, uint a6, int a7, ...)
{
  ushort *v7
  int v8
  uint v9
  int v10
  uint v11
  uint v12
  int v13
  int v14
  int v15
  int v16
  int v17
  int v18
  int v19
  int v20
  int v21
  int v22
  int v23
  int v24
  int v25
  int v26
  int v27
  int v28
  int v29
  int v30
  int v31
  int v32
  int v33
  int v34
  int v36
  uint v37
  int v38
  uint *varg_r0
  int varg_r1
  int varg_r2
  int varg_r3
  va_list va

  va_start(va, a7);
  varg_r0 = a1;
  varg_r1 = a2;
  v7 = (ushort *)a1;
  ClearPkmnDataStructure1(a1);
  v36 = InitEncryptPkmnData_Part1((int)v7);
  if ( !a5 )
  {
    v9 = PRNG();
    a6 = (PRNG() << 16) | v9;
  }
  SetBoxPkmnData((int)v7, 0, (ushort *)&a6, v8);
  if ( a7 == 2 )
  {
    do
    {
      v11 = PRNG();
      v10 = v11 | (PRNG() << 16);
      *(int *)va = v10;
      v12 = v10 & 0xFFFF0000;
      v10 = (ushort)v10;
    }
    while ( ((v12 >> 16) ^ (ushort)v10 ^ ((a6 & 0xFFFF0000) >> 16) ^ (ushort)a6) < 8 );
  }
  else if ( a7 != 1 )
  {
    *(int *)va = 0;
  }
  SetBoxPkmnData((int)v7, 7u, (ushort *)va, v10);
  SetBoxPkmnData((int)v7, 0xCu, (ushort *)&CountryOfOriginValue, v13);
  SetBoxPkmnData((int)v7, 5u, (ushort *)&varg_r1, v14);
  SetBoxPkmnData((int)v7, 0xB3u, 0, v15);
  v38 = GetBaseExpPts(varg_r1, varg_r2);
  SetBoxPkmnData((int)v7, 8u, (ushort *)&v38, v16);
  v38 = GetPkmnBaseData1(varg_r1, 0x14u);
  SetBoxPkmnData((int)v7, 9u, (ushort *)&v38, v17);
  SetBoxPkmnData((int)v7, 0x9Cu, (ushort *)&varg_r2, v18);
  SetBoxPkmnData((int)v7, 0x7Au, (ushort *)&GameIDNr, v19);
  v38 = 4;
  SetBoxPkmnData((int)v7, 0x9Bu, (ushort *)&v38, v20);
  if ( varg_r3 >= 32 )
  {
    v38 = PRNG();
    v37 = v38 & 0x1F;
    SetBoxPkmnData((int)v7, 0x46u, (ushort *)&v37, v27);
    v37 = (v38 & 0x3E0u) >> 5;
    SetBoxPkmnData((int)v7, 0x47u, (ushort *)&v37, v28);
    v37 = (v38 & 0x7C00u) >> 10;
    SetBoxPkmnData((int)v7, 0x48u, (ushort *)&v37, v29);
    v38 = PRNG();
    v37 = v38 & 0x1F;
    SetBoxPkmnData((int)v7, 0x49u, (ushort *)&v37, v30);
    v37 = (v38 & 0x3E0u) >> 5;
    SetBoxPkmnData((int)v7, 0x4Au, (ushort *)&v37, v31);
    v37 = (v38 & 0x7C00u) >> 10;
    SetBoxPkmnData((int)v7, 0x4Bu, (ushort *)&v37, v32);
  }
  else
  {
    SetBoxPkmnData((int)v7, 0x46u, (ushort *)&varg_r3, v21);
    SetBoxPkmnData((int)v7, 0x47u, (ushort *)&varg_r3, v22);
    SetBoxPkmnData((int)v7, 0x48u, (ushort *)&varg_r3, v23);
    SetBoxPkmnData((int)v7, 0x49u, (ushort *)&varg_r3, v24);
    SetBoxPkmnData((int)v7, 0x4Au, (ushort *)&varg_r3, v25);
    SetBoxPkmnData((int)v7, 0x4Bu, (ushort *)&varg_r3, v26);
  }
  v38 = GetPkmnBaseData1(varg_r1, 0x18u);
  v37 = GetPkmnBaseData1(varg_r1, 0x19u);
  if ( v37 )
  {
    if ( a6 & 1 )
      SetBoxPkmnData((int)v7, 0xAu, (ushort *)&v37, v33);
    else
      SetBoxPkmnData((int)v7, 0xAu, (ushort *)&v38, v33);
  }
  else
  {
    SetBoxPkmnData((int)v7, 0xAu, (ushort *)&v38, v33);
  }
  v38 = DecidePkmnGender((int)v7);
  SetBoxPkmnData((int)v7, 0x6Fu, (ushort *)&v38, v34);
  InitPkmnMovesFromWotbl((int)v7);
  return InitEncryptPkmnData_Part1Again(v7, v36);
}

//----- (02074044) --------------------------------------------------------
int __fastcall Function_2074044(int *a1, int a2, int a3, int a4, int a5)
{
  int *v5
  int v6
  uint v7
  uint v8
  int v10
  int v11

  v10 = a3;
  v11 = a4;
  v5 = a1;
  v6 = a2;
  do
  {
    v7 = PRNG();
    v8 = v7 | (PRNG() << 16);
  }
  while ( a5 != PkmnData_DivBy25(v8) );
  return InitPkmnData(v5, v6, v10, v11, 1, v8, 0, 0);
}

//----- (02074088) --------------------------------------------------------
int __fastcall Function_2074088(int *a1, int a2, int a3, int a4, int a5, int a6, uchar a7)
{
  uint v7
  uint v8
  ushort v9
  int v10
  int *v12
  int v13
  int v14
  int v15

  v13 = a2;
  v14 = a3;
  v15 = a4;
  v12 = a1;
  if ( a7 && a7 < 0x1Du )
  {
    do
    {
      do
      {
        v7 = PRNG();
        v8 = v7 | (PRNG() << 16);
        u32_div_f(((v8 & 0x3000000) >> 18) | ((v8 & 0x30000) >> 12) | ((v8 & 0x300) >> 6) | v8 & 3, 28);
        v10 = v9;
      }
      while ( a6 != PkmnData_DivBy25(v8) );
    }
    while ( a5 != Function_2075dac(v13, v8) || v10 != a7 - 1 );
  }
  else
  {
    v8 = GetPkmnGender(a2, a5, a6);
  }
  return InitPkmnData(v12, v13, v14, v15, 1, v8, 0, 0);
}

//----- (02074128) --------------------------------------------------------
int __fastcall GetPkmnGender(int a1, int a2, int a3)
{
  int v3
  int v4
  uint v5

  v3 = a2;
  v4 = a3;
  v5 = (uchar)GetPkmnBaseData1(a1, 0x12u);
  if ( v5 && v5 != 254 && v5 != 255 && !v3 )
    v4 += 25 * (s32_div_f(v5, 25) + 1);
  return v4;
}

//----- (02074158) --------------------------------------------------------
int __fastcall Function_2074158(int *a1, int a2, int a3, int a4, uint a5)
{
  int *v5
  int varg_r3

  varg_r3 = a4;
  v5 = a1;
  InitPkmnData(a1, a2, a3, 0, 1, a5, 0, 0);
  SetPkmnData((int)v5, 175, (ushort *)&varg_r3);
  return Function_207418c(v5);
}

//----- (0207418C) --------------------------------------------------------
int __fastcall Function_207418c(int *a1)
{
  int *v1
  int v2
  int v3
  int v4
  int v5
  int v7

  v1 = a1;
  v2 = InitEncryptPkmnData(a1);
  v7 = Call_InitPkmnLevel((int)v1);
  SetPkmnData((int)v1, 161, (ushort *)&v7);
  CalcPkmnStats(v1, v3, v4, v5);
  return InitEncryptPkmnData_Part1And2(v1, v2);
}

//----- (020741B8) --------------------------------------------------------
int __fastcall CalcPkmnStats(int *a1, int a2, int a3, int a4)
{
  int *v4
  uint v5
  int v6
  int v7
  uchar *v8
  uint v9
  int v10
  int v11
  int v12
  int v13
  int v14
  int v16
  int v17
  int v18
  int v19
  int v20
  int v21
  uint v22
  uint v23
  uint v24
  uint v25
  uint v26
  uint v27
  uint v28
  int v29
  uint v30
  uint v31
  uint v32
  uint v33
  uint v34
  uint v35
  uint v36
  int v37

  v37 = a4;
  v4 = a1;
  v16 = InitEncryptPkmnData(a1);
  v5 = GetPkmnData(v4, 0xA1u, 0);
  v27 = GetPkmnData(v4, 0xA4u, 0);
  v36 = GetPkmnData(v4, 0xA3u, 0);
  v28 = GetPkmnData(v4, 0x46u, 0);
  v29 = GetPkmnData(v4, 0xDu, 0);
  v26 = GetPkmnData(v4, 0x47u, 0);
  v21 = GetPkmnData(v4, 0xEu, 0);
  v25 = GetPkmnData(v4, 0x48u, 0);
  v20 = GetPkmnData(v4, 0xFu, 0);
  v24 = GetPkmnData(v4, 0x49u, 0);
  v19 = GetPkmnData(v4, 0x10u, 0);
  v23 = GetPkmnData(v4, 0x4Au, 0);
  v18 = GetPkmnData(v4, 0x11u, 0);
  v22 = GetPkmnData(v4, 0x4Bu, 0);
  v17 = GetPkmnData(v4, 0x12u, 0);
  v6 = GetPkmnData(v4, 0x70u, 0);
  v7 = GetPkmnData(v4, 5u, 0);
  v8 = (uchar *)malloc(0, 44);
  LoadFromNARC_PlPersonal2(v7, v6, (int)v8);
  if ( v7 == 292 )
    v9 = 1;
  else
    v9 = v5 + s32_div_f((v29 / 4 + v28 + 2 * *v8) * v5, 100) + 10;
  v35 = v9;
  SetPkmnData((int)v4, 164, (ushort *)&v35);
  v34 = s32_div_f((v21 / 4 + v26 + 2 * v8[1]) * v5, 100) + 5;
  v10 = Function_2075bcc((int)v4);
  v34 = Function_2075c0c(v10, (ushort)v34, 1u);
  SetPkmnData((int)v4, 165, (ushort *)&v34);
  v33 = s32_div_f((v20 / 4 + v25 + 2 * v8[2]) * v5, 100) + 5;
  v11 = Function_2075bcc((int)v4);
  v33 = Function_2075c0c(v11, (ushort)v33, 2u);
  SetPkmnData((int)v4, 166, (ushort *)&v33);
  v32 = s32_div_f((v19 / 4 + v24 + 2 * v8[3]) * v5, 100) + 5;
  v12 = Function_2075bcc((int)v4);
  v32 = Function_2075c0c(v12, (ushort)v32, 3u);
  SetPkmnData((int)v4, 167, (ushort *)&v32);
  v31 = s32_div_f((v18 / 4 + v23 + 2 * v8[4]) * v5, 100) + 5;
  v13 = Function_2075bcc((int)v4);
  v31 = Function_2075c0c(v13, (ushort)v31, 4u);
  SetPkmnData((int)v4, 168, (ushort *)&v31);
  v30 = s32_div_f((v17 / 4 + v22 + 2 * v8[5]) * v5, 100) + 5;
  v14 = Function_2075bcc((int)v4);
  v30 = Function_2075c0c(v14, (ushort)v30, 5u);
  SetPkmnData((int)v4, 169, (ushort *)&v30);
  free((int)v8);
  if ( v36 || !v27 )
  {
    if ( v7 == 292 )
    {
      v36 = 1;
    }
    else if ( v36 )
    {
      v36 += v35 - v27;
    }
    else
    {
      v36 = v35;
    }
  }
  if ( v36 )
    SetPkmnData((int)v4, 163, (ushort *)&v36);
  return InitEncryptPkmnData_Part1And2(v4, v16);
}

//----- (02074470) --------------------------------------------------------
uint __fastcall GetPkmnData(int *a1, uint a2, ushort *a3)
{
  int *v3
  uint v4
  ushort *v5
  int v6
  int v7
  int v8
  int v9
  uint v10
  int v11
  int v12

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( !(a1[1] & 1) )
  {
    v6 = *a1;
    Call_DecryptPkmnData3((int)(a1 + 34), 0x64u);
    v7 = *((ushort *)v3 + 3);
    Call_DecryptPkmnData3((int)(v3 + 2), 0x80u);
    v8 = CalcPokemonChecksum((ushort *)v3 + 4, 0x80u);
    v9 = *((ushort *)v3 + 3);
    if ( v8 != v9 )
    {
      if ( v8 != v9 )
        ErrorHandler();
      *((ushort *)v3 + 2) |= 4u;
    }
  }
  v10 = ReadPkmnData(v3, v4, v5);
  if ( !(v3[1] & 1) )
  {
    v11 = *v3;
    Call_DecryptPkmnData2((int)(v3 + 34), 0x64u);
    v12 = *((ushort *)v3 + 3);
    Call_DecryptPkmnData2((int)(v3 + 2), 0x80u);
  }
  return v10;
}

//----- (020744E8) --------------------------------------------------------
uint __fastcall ReadPkmnData(int *a1, uint a2, ushort *a3)
{
  uint result

  switch ( (uchar)a2 + 96 )
  {
    case 0:
      result = a1[34];
      break;
    case 1:
      result = *((uchar *)a1 + 140);
      break;
    case 2:
      result = *((uchar *)a1 + 141);
      break;
    case 3:
      result = *((ushort *)a1 + 71);
      break;
    case 4:
      result = *((ushort *)a1 + 72);
      break;
    case 5:
      result = *((ushort *)a1 + 73);
      break;
    case 6:
      result = *((ushort *)a1 + 74);
      break;
    case 7:
      result = *((ushort *)a1 + 75);
      break;
    case 8:
      result = *((ushort *)a1 + 76);
      break;
    case 9:
      result = *((ushort *)a1 + 77);
      break;
    case 10:
      Function_20281a0((int)(a1 + 39), (uint)a3);
      result = 1;
      break;
    case 11:
      Function_202ca10((int)(a1 + 53), (uint)a3);
      result = 1;
      break;
    default:
      result = ReadBoxPkmnData(a1, (uchar)a2, a3);
      break;
  }
  return result;
}

//----- (02074570) --------------------------------------------------------
uint __fastcall GetBoxPkmnData(int a1, uint a2, ushort *a3)
{
  int v3
  uint v4
  ushort *v5
  int v6
  int v7
  int v8
  uint v9
  int v10

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( !(*(ushort *)(a1 + 4) & 2) )
  {
    v6 = *(ushort *)(a1 + 6);
    Call_DecryptPkmnData3(a1 + 8, 0x80u);
    v7 = CalcPokemonChecksum((ushort *)(v3 + 8), 0x80u);
    v8 = *(ushort *)(v3 + 6);
    if ( v7 != v8 )
    {
      if ( v7 != v8 )
        ErrorHandler();
      *(ushort *)(v3 + 4) |= 4u;
    }
  }
  v9 = ReadBoxPkmnData((int *)v3, v4, v5);
  if ( !(*(ushort *)(v3 + 4) & 2) )
  {
    v10 = *(ushort *)(v3 + 6);
    Call_DecryptPkmnData2(v3 + 8, 0x80u);
  }
  return v9;
}

//----- (020745D0) --------------------------------------------------------
uint __fastcall ReadBoxPkmnData(int *a1, uint a2, ushort *a3)
{
  uint v3
  ushort *v4
  int v5
  int v6
  int v7
  ushort *v8
  ushort v9
  ushort *v10
  int v11
  long long v12
  ushort *v13
  ushort v14
  uint v15
  uint v16
  int v17
  int v18
  int v19
  ushort v20
  int *v22
  uint v23
  ushort *v24

  v23 = a2;
  v3 = 0;
  v24 = a3;
  v22 = a1;
  v4 = (ushort *)GetPkmnDataBlockAdress((int)a1, *a1, 0);
  v5 = GetPkmnDataBlockAdress((int)v22, *v22, 1u);
  v6 = GetPkmnDataBlockAdress((int)v22, *v22, 2u);
  v7 = GetPkmnDataBlockAdress((int)v22, *v22, 3u);
  if ( v23 <= 0xB3 )
    JUMPOUT(__CS__, *((short *)&off_2074626 + v23) + 34031144);
  switch ( (uchar)v23 )
  {
    case 0:
      v3 = *v22;
      break;
    case 1:
      v3 = v22[1] & 1;
      break;
    case 2:
      v3 = (uint)*((ushort *)v22 + 2) << 30 >> 31;
      break;
    case 3:
      v3 = (uint)*((ushort *)v22 + 2) << 29 >> 31;
      break;
    case 4:
      v3 = *((ushort *)v22 + 3);
      break;
    case 5:
      if ( v22[1] & 4 )
        v3 = 494;
      else
        v3 = *v4;
      break;
    case 6:
      v3 = v4[1];
      break;
    case 7:
      v3 = *((uint *)v4 + 1);
      break;
    case 8:
      v3 = *((uint *)v4 + 2);
      break;
    case 9:
      v3 = *((uchar *)v4 + 12);
      break;
    case 0xA:
      v3 = *((uchar *)v4 + 13);
      break;
    case 0xB:
      v3 = *((uchar *)v4 + 14);
      break;
    case 0xC:
      v3 = *((uchar *)v4 + 15);
      break;
    case 0xD:
      v3 = *((uchar *)v4 + 16);
      break;
    case 0xE:
      v3 = *((uchar *)v4 + 17);
      break;
    case 0xF:
      v3 = *((uchar *)v4 + 18);
      break;
    case 0x10:
      v3 = *((uchar *)v4 + 19);
      break;
    case 0x11:
      v3 = *((uchar *)v4 + 20);
      break;
    case 0x12:
      v3 = *((uchar *)v4 + 21);
      break;
    case 0x13:
      v3 = *((uchar *)v4 + 22);
      break;
    case 0x14:
      v3 = *((uchar *)v4 + 23);
      break;
    case 0x15:
      v3 = *((uchar *)v4 + 24);
      break;
    case 0x16:
      v3 = *((uchar *)v4 + 25);
      break;
    case 0x17:
      v3 = *((uchar *)v4 + 26);
      break;
    case 0x18:
      v3 = *((uchar *)v4 + 27);
      break;
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1C:
    case 0x1D:
    case 0x1E:
    case 0x1F:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2A:
    case 0x2B:
    case 0x2C:
    case 0x2D:
    case 0x2E:
    case 0x2F:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
      if ( *((uint *)v4 + 7) & ll_shl(1, 0, v23 - 25) )
        v3 = 1;
      break;
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      v3 = *(ushort *)(v5 + 2 * (v23 - 54));
      break;
    case 0x3A:
    case 0x3B:
    case 0x3C:
    case 0x3D:
      v3 = *(uchar *)(v5 + v23 - 58 + 8);
      break;
    case 0x3E:
    case 0x3F:
    case 0x40:
    case 0x41:
      v3 = *(uchar *)(v5 + v23 - 62 + 12);
      break;
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
      v3 = CalcMovePP(*(ushort *)(v5 + 2 * (v23 - 66)), *(uchar *)(v5 + v23 - 66 + 12));
      break;
    case 0x46:
      v3 = *(uint *)(v5 + 16) & 0x1F;
      break;
    case 0x47:
      v3 = *(uint *)(v5 + 16) << 22 >> 27;
      break;
    case 0x48:
      v3 = *(uint *)(v5 + 16) << 17 >> 27;
      break;
    case 0x49:
      v3 = *(uint *)(v5 + 16) << 12 >> 27;
      break;
    case 0x4A:
      v3 = *(uint *)(v5 + 16) << 7 >> 27;
      break;
    case 0x4B:
      v3 = (uint)(4 * *(uint *)(v5 + 16)) >> 27;
      break;
    case 0x4C:
      v3 = (uint)*((ushort *)v22 + 2) << 29 >> 31;
      if ( !(v22[1] & 4) )
        v3 = (uint)(2 * *(uint *)(v5 + 16)) >> 31;
      break;
    case 0x4D:
      v3 = *(uint *)(v5 + 16) >> 31;
      break;
    case 0x4E:
    case 0x4F:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5A:
    case 0x5B:
    case 0x5C:
    case 0x5D:
    case 0x5E:
    case 0x5F:
    case 0x60:
    case 0x61:
    case 0x62:
    case 0x63:
    case 0x64:
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6A:
    case 0x6B:
    case 0x6C:
    case 0x6D:
      if ( *(uint *)(v5 + 20) & ll_shl(1, 0, v23 - 78) )
        v3 = 1;
      break;
    case 0x6E:
      v3 = *(uchar *)(v5 + 24) & 1;
      break;
    case 0x6F:
      v3 = Function_2075dac(*v4, *v22);
      *(uchar *)(v5 + 24) = *(uchar *)(v5 + 24) & 0xF9 | 2 * v3 & 7;
      *((ushort *)v22 + 3) = CalcPokemonChecksum((ushort *)v22 + 4, 0x80u);
      break;
    case 0x70:
      v3 = (uint)*(uchar *)(v5 + 24) << 24 >> 27;
      break;
    case 0x71:
      v3 = *(uchar *)(v5 + 25);
      break;
    case 0x72:
      v3 = *(ushort *)(v5 + 26);
      break;
    case 0x73:
    case 0x98:
      v15 = *(ushort *)(v7 + 22);
      if ( v15 != 3002 || (v3 = *(ushort *)(v5 + 28), !*(ushort *)(v5 + 28)) )
        v3 = v15;
      break;
    case 0x74:
    case 0x99:
      v16 = *(ushort *)(v7 + 24);
      if ( v16 != 3002 || (v3 = *(ushort *)(v5 + 30), !*(ushort *)(v5 + 30)) )
        v3 = v16;
      break;
    case 0x75:
      if ( v22[1] & 4 )
      {
        Function_200b274(0x1EFu, 0, v24);
      }
      else
      {
        v8 = v24;
        do
        {
          v9 = *(ushort *)v6;
          ++v3;
          v6 += 2;
          *v8 = v9;
          ++v8;
        }
        while ( v3 < 0xA );
        v24[v3] = -1;
      }
      break;
    case 0x77:
      goto LABEL_71;
    case 0x78:
      v3 = *(uint *)(v5 + 16) >> 31;
LABEL_71:
      if ( v22[1] & 4 )
      {
        v10 = Function_200b32c(0x1EFu, 0);
        Function_2023810(v24, (int)v10);
        Function_20237bc_FreeMsg((int)v10, v11);
      }
      else
      {
        Function_2023d28(v24, (ushort *)v6);
      }
      break;
    case 0x79:
      v3 = *(uchar *)(v6 + 22);
      break;
    case 0x7A:
      v3 = *(uchar *)(v6 + 23);
      break;
    case 0x7B:
    case 0x7C:
    case 0x7D:
    case 0x7E:
    case 0x7F:
    case 0x80:
    case 0x81:
    case 0x82:
    case 0x83:
    case 0x84:
    case 0x85:
    case 0x86:
    case 0x87:
    case 0x88:
    case 0x89:
    case 0x8A:
    case 0x8B:
    case 0x8C:
    case 0x8D:
    case 0x8E:
    case 0x8F:
      LODWORD(v12) = ll_shl(1, 0, v23 - 123);
      if ( *(ull *)(v6 + 24) & v12 )
        v3 = 1;
      break;
    case 0x90:
      v13 = v24;
      do
      {
        v14 = *(ushort *)v7;
        ++v3;
        v7 += 2;
        *v13 = v14;
        ++v13;
      }
      while ( v3 < 7 );
      v24[v3] = -1;
      break;
    case 0x91:
      Function_2023d28(v24, (ushort *)v7);
      break;
    case 0x92:
      v3 = *(uchar *)(v7 + 16);
      break;
    case 0x93:
      v3 = *(uchar *)(v7 + 17);
      break;
    case 0x94:
      v3 = *(uchar *)(v7 + 18);
      break;
    case 0x95:
      v3 = *(uchar *)(v7 + 19);
      break;
    case 0x96:
      v3 = *(uchar *)(v7 + 20);
      break;
    case 0x97:
      v3 = *(uchar *)(v7 + 21);
      break;
    case 0x9A:
      v3 = *(uchar *)(v7 + 26);
      break;
    case 0x9B:
      v3 = *(uchar *)(v7 + 27);
      break;
    case 0x9C:
      v3 = *(uchar *)(v7 + 28) & 0x7F;
      break;
    case 0x9D:
      v3 = (uint)*(uchar *)(v7 + 28) << 24 >> 31;
      break;
    case 0x9E:
      v3 = *(uchar *)(v7 + 29);
      break;
    case 0x9F:
      v3 = *(ushort *)(v7 + 30);
      break;
    case 0xA1:
      v3 = CalcPkmnLevel(*v4, *((uint *)v4 + 2));
      break;
    case 0xAC:
      if ( *v4 )
        v3 = 1;
      break;
    case 0xAD:
      v3 = (uint)*((ushort *)v22 + 2) << 29 >> 31;
      if ( !(v22[1] & 4) )
        v3 = (uint)(2 * *(uint *)(v5 + 16)) >> 31;
      break;
    case 0xAE:
      v3 = *v4;
      if ( *v4 && (*(uint *)(v5 + 16) & 0x40000000 || v22[1] & 4) )
        v3 = 494;
      break;
    case 0xAF:
      v17 = *(uint *)(v5 + 16);
      v3 = ((uint)(4 * v17) >> 27 << 25) | v17 & 0x1F | 32 * ((uint)(v17 << 22) >> 27) | ((uint)(v17 << 17) >> 27 << 10) | ((uint)(v17 << 12) >> 27 << 15) | ((uint)(v17 << 7) >> 27 << 20);
      break;
    case 0xB0:
      v18 = *v4;
      v3 = v18 != 29 && v18 != 32 || *(uint *)(v5 + 16) < 0;
      break;
    case 0xB1:
    case 0xB2:
      v19 = *v4;
      if ( v19 != 493 || *((uchar *)v4 + 13) != 121 )
      {
        v3 = GetPkmnBaseData2(*v4, (uint)*(uchar *)(v5 + 24) << 24 >> 27, v23 - 171);
      }
      else
      {
        v20 = GetItemData(v4[1], 1u, 0);
        v3 = Function_2077988(v20);
      }
      break;
    case 0xB3:
      Function_200b274(*v4, 0, v24);
      break;
    default:
      v3 = 0;
      break;
  }
  return v3;
}

//----- (02074B30) --------------------------------------------------------
int __fastcall SetPkmnData(int a1, int a2, ushort *a3)
{
  int v3
  int v4
  ushort *v5
  int v6
  int v7
  int v8
  int v9
  int v10
  int result
  int v12
  int v13

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( *(ushort *)(a1 + 4) & 1
    || (v6 = *(uint *)a1,
        Call_DecryptPkmnData3(a1 + 136, 0x64u),
        v7 = *(ushort *)(v3 + 6),
        Call_DecryptPkmnData3(v3 + 8, 0x80u),
        v8 = CalcPokemonChecksum((ushort *)(v3 + 8), 0x80u),
        v9 = *(ushort *)(v3 + 6),
        v8 == v9) )
  {
    WritePkmnData(v3, v4, v5);
    result = *(ushort *)(v3 + 4) & 1;
    if ( !result )
    {
      v12 = *(uint *)v3;
      Call_DecryptPkmnData2(v3 + 136, 0x64u);
      *(ushort *)(v3 + 6) = CalcPokemonChecksum((ushort *)(v3 + 8), 0x80u);
      v13 = *(ushort *)(v3 + 6);
      result = Call_DecryptPkmnData2(v3 + 8, 0x80u);
    }
  }
  else
  {
    if ( v8 != v9 )
      ErrorHandler();
    *(ushort *)(v3 + 4) |= 4u;
    v10 = *(ushort *)(v3 + 6);
    result = Call_DecryptPkmnData2(v3 + 8, 0x80u);
  }
  return result;
}

//----- (02074BC0) --------------------------------------------------------
void __fastcall WritePkmnData(int a1, int a2, ushort *a3)
{
  switch ( (uchar)a2 + 96 )
  {
    case 0:
      *(uint *)(a1 + 136) = *(uint *)a3;
      break;
    case 1:
      *(uchar *)(a1 + 140) = *(uchar *)a3;
      break;
    case 2:
      *(uchar *)(a1 + 141) = *(uchar *)a3;
      break;
    case 3:
      *(ushort *)(a1 + 142) = *a3;
      break;
    case 4:
      *(ushort *)(a1 + 144) = *a3;
      break;
    case 5:
      *(ushort *)(a1 + 146) = *a3;
      break;
    case 6:
      *(ushort *)(a1 + 148) = *a3;
      break;
    case 7:
      *(ushort *)(a1 + 150) = *a3;
      break;
    case 8:
      *(ushort *)(a1 + 152) = *a3;
      break;
    case 9:
      *(ushort *)(a1 + 154) = *a3;
      break;
    case 10:
      Function_20281a0((int)a3, a1 + 156);
      break;
    case 11:
      Function_202ca10((int)a3, a1 + 212);
      break;
    default:
      WriteBoxPkmnData((int *)a1, (uchar)a2, a3, a1);
      break;
  }
}

//----- (02074C60) --------------------------------------------------------
uint __fastcall SetBoxPkmnData(int a1, uint a2, ushort *a3, int a4)
{
  int v4
  uint v5
  ushort *v6
  int v7
  int v8
  int v9
  int v10
  uint result
  int v12

  v4 = a1;
  v5 = a2;
  v6 = a3;
  if ( *(ushort *)(a1 + 4) & 2
    || (v7 = *(ushort *)(a1 + 6),
        Call_DecryptPkmnData3(a1 + 8, 0x80u),
        v8 = CalcPokemonChecksum((ushort *)(v4 + 8), 0x80u),
        v9 = *(ushort *)(v4 + 6),
        v8 == v9) )
  {
    WriteBoxPkmnData((int *)v4, v5, v6, a4);
    result = (uint)*(ushort *)(v4 + 4) << 30 >> 31;
    if ( !(*(ushort *)(v4 + 4) & 2) )
    {
      *(ushort *)(v4 + 6) = CalcPokemonChecksum((ushort *)(v4 + 8), 0x80u);
      v12 = *(ushort *)(v4 + 6);
      result = Call_DecryptPkmnData2(v4 + 8, 0x80u);
    }
  }
  else
  {
    if ( v8 != v9 )
      ErrorHandler();
    *(ushort *)(v4 + 4) |= 4u;
    v10 = *(ushort *)(v4 + 6);
    result = Call_DecryptPkmnData2(v4 + 8, 0x80u);
  }
  return result;
}

//----- (02074CD8) --------------------------------------------------------
void __fastcall WriteBoxPkmnData(int *a1, uint a2, ushort *a3, int a4)
{
  ushort *v4
  ushort *v5
  int v6
  int v7
  int v8
  int v9
  uint v10
  int v11
  int v12
  int v13
  int v14
  int v15
  uint v16
  ushort v17
  uint v18
  uint v19
  uint v20
  uint v21
  uint v22
  ushort *v23
  int v24
  int v25
  int *v26
  uint v27
  int v28
  int v29
  short v30
  int v31
  int v32

  v32 = a4;
  v27 = a2;
  v4 = a3;
  v26 = a1;
  v5 = (ushort *)GetPkmnDataBlockAdress((int)a1, *a1, 0);
  v6 = GetPkmnDataBlockAdress((int)v26, *v26, 1u);
  v28 = GetPkmnDataBlockAdress((int)v26, *v26, 2u);
  v7 = GetPkmnDataBlockAdress((int)v26, *v26, 3u);
  if ( v27 <= 0xB3 )
    JUMPOUT(__CS__, *((short *)&off_2074D2C + v27) + 34032942);
  switch ( (uchar)v27 )
  {
    case 0:
      *v26 = *(uint *)v4;
      return;
    case 1:
      ErrorHandler();
      *((ushort *)v26 + 2) = *(ushort *)(v25 + 4) & 0xFFFE | *(uchar *)v4 & 1;
      return;
    case 2:
      ErrorHandler();
      *((ushort *)v26 + 2) = v26[1] & 0xFFFD | 2 * *(uchar *)v4 & 3;
      return;
    case 3:
      *((ushort *)v26 + 2) = v26[1] & 0xFFFB | 4 * *(uchar *)v4 & 7;
      return;
    case 4:
      *((ushort *)v26 + 3) = *v4;
      return;
    case 5:
      *v5 = *v4;
      return;
    case 6:
      v5[1] = *v4;
      return;
    case 7:
      *((uint *)v5 + 1) = *(uint *)v4;
      return;
    case 8:
      *((uint *)v5 + 2) = *(uint *)v4;
      return;
    case 9:
      *((uchar *)v5 + 12) = *(uchar *)v4;
      return;
    case 0xA:
      *((uchar *)v5 + 13) = *(uchar *)v4;
      return;
    case 0xB:
      *((uchar *)v5 + 14) = *(uchar *)v4;
      return;
    case 0xC:
      *((uchar *)v5 + 15) = *(uchar *)v4;
      return;
    case 0xD:
      *((uchar *)v5 + 16) = *(uchar *)v4;
      return;
    case 0xE:
      *((uchar *)v5 + 17) = *(uchar *)v4;
      return;
    case 0xF:
      *((uchar *)v5 + 18) = *(uchar *)v4;
      return;
    case 0x10:
      *((uchar *)v5 + 19) = *(uchar *)v4;
      return;
    case 0x11:
      *((uchar *)v5 + 20) = *(uchar *)v4;
      return;
    case 0x12:
      *((uchar *)v5 + 21) = *(uchar *)v4;
      return;
    case 0x13:
      *((uchar *)v5 + 22) = *(uchar *)v4;
      return;
    case 0x14:
      *((uchar *)v5 + 23) = *(uchar *)v4;
      return;
    case 0x15:
      *((uchar *)v5 + 24) = *(uchar *)v4;
      return;
    case 0x16:
      *((uchar *)v5 + 25) = *(uchar *)v4;
      return;
    case 0x17:
      *((uchar *)v5 + 26) = *(uchar *)v4;
      return;
    case 0x18:
      *((uchar *)v5 + 27) = *(uchar *)v4;
      return;
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1C:
    case 0x1D:
    case 0x1E:
    case 0x1F:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2A:
    case 0x2B:
    case 0x2C:
    case 0x2D:
    case 0x2E:
    case 0x2F:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
      v8 = 1 << (v27 - 25);
      if ( *(uchar *)v4 )
        *((uint *)v5 + 7) |= v8;
      else
        *((uint *)v5 + 7) &= ~v8;
      return;
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      *(ushort *)(v6 + 2 * (v27 - 54)) = *v4;
      return;
    case 0x3A:
    case 0x3B:
    case 0x3C:
    case 0x3D:
      *(uchar *)(v6 + v27 - 58 + 8) = *(uchar *)v4;
      return;
    case 0x3E:
    case 0x3F:
    case 0x40:
    case 0x41:
      *(uchar *)(v6 + v27 - 62 + 12) = *(uchar *)v4;
      return;
    case 0x46:
      *(uint *)(v6 + 16) = *(uchar *)v4 & 0x1F | *(uint *)(v6 + 16) & 0xFFFFFFE0;
      return;
    case 0x47:
      *(uint *)(v6 + 16) = 32 * *(uchar *)v4 & 0x3FF | *(uint *)(v6 + 16) & 0xFFFFFC1F;
      return;
    case 0x48:
      *(uint *)(v6 + 16) = (*(uchar *)v4 << 10) & 0x7FFF | *(uint *)(v6 + 16) & 0xFFFF83FF;
      return;
    case 0x49:
      *(uint *)(v6 + 16) = (*(uchar *)v4 << 15) & 0xFFFFF | *(uint *)(v6 + 16) & 0xFFF07FFF;
      return;
    case 0x4A:
      *(uint *)(v6 + 16) = (*(uchar *)v4 << 20) & 0x1FFFFFF | *(uint *)(v6 + 16) & 0xFE0FFFFF;
      return;
    case 0x4B:
      *(uint *)(v6 + 16) = ((uint)*(uchar *)v4 << 27 >> 2) | *(uint *)(v6 + 16) & 0xC1FFFFFF;
      return;
    case 0x4C:
      *(uint *)(v6 + 16) = ((uint)*(uchar *)v4 << 31 >> 1) | *(uint *)(v6 + 16) & 0xBFFFFFFF;
      return;
    case 0x4D:
      *(uint *)(v6 + 16) = (*(uchar *)v4 << 31) | *(uint *)(v6 + 16) & 0x7FFFFFFF;
      return;
    case 0x4E:
    case 0x4F:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5A:
    case 0x5B:
    case 0x5C:
    case 0x5D:
    case 0x5E:
    case 0x5F:
    case 0x60:
    case 0x61:
    case 0x62:
    case 0x63:
    case 0x64:
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6A:
    case 0x6B:
    case 0x6C:
    case 0x6D:
      v9 = 1 << (v27 - 78);
      if ( *(uchar *)v4 )
        *(uint *)(v6 + 20) |= v9;
      else
        *(uint *)(v6 + 20) &= ~v9;
      return;
    case 0x6E:
      *(uchar *)(v6 + 24) = *(uchar *)v4 & 1 | *(uchar *)(v6 + 24) & 0xFE;
      return;
    case 0x6F:
      *(uchar *)(v6 + 24) = 2 * Function_2075dac(*v5, *v26) & 7 | *(uchar *)(v6 + 24) & 0xF9;
      return;
    case 0x70:
      *(uchar *)(v6 + 24) = 8 * *(uchar *)v4 | *(uchar *)(v6 + 24) & 7;
      return;
    case 0x71:
      *(uchar *)(v6 + 25) = *(uchar *)v4;
      return;
    case 0x72:
      *(ushort *)(v6 + 26) = *v4;
      return;
    case 0x73:
    case 0x98:
      if ( *v4 && Function_201708c(*v4) != 1 )
      {
        *(ushort *)(v7 + 22) = 3002;
        *(ushort *)(v6 + 28) = *v4;
      }
      else
      {
        *(ushort *)(v7 + 22) = *v4;
        *(ushort *)(v6 + 28) = *v4;
      }
      return;
    case 0x74:
    case 0x99:
      if ( *v4 && Function_201708c(*v4) != 1 )
      {
        *(ushort *)(v7 + 24) = 3002;
        *(ushort *)(v6 + 30) = *v4;
      }
      else
      {
        *(ushort *)(v7 + 24) = *v4;
        *(ushort *)(v6 + 30) = *v4;
      }
      return;
    case 0x75:
      goto writePkmnDataNickname;
    case 0x76:
      Function_200b274(*v5, 0, &v31);
      *(uint *)(v6 + 16) = (Function_200220c((ushort *)&v31, v4) << 31) | *(uint *)(v6 + 16) & 0x7FFFFFFF;
writePkmnDataNickname:
      v10 = 0;
      do
      {
        ++v10;
        *(ushort *)v28 = *v4;
        ++v4;
        v28 += 2;
      }
      while ( v10 < 0xB );
      return;
    case 0x77:
      goto LABEL_56;
    case 0x78:
      Function_200b274(*v5, 0, &v30);
      Function_2023df0((int)v4, &v29, 0xBu);
      *(uint *)(v6 + 16) = (Function_200220c((ushort *)&v30, (ushort *)&v29) << 31) | *(uint *)(v6 + 16) & 0x7FFFFFFF;
LABEL_56:
      Function_2023df0((int)v4, (uchar *)v28, 0xBu);
      break;
    case 0x79:
      *(uchar *)(v28 + 22) = *(uchar *)v4;
      break;
    case 0x7A:
      *(uchar *)(v28 + 23) = *(uchar *)v4;
      break;
    case 0x7B:
    case 0x7C:
    case 0x7D:
    case 0x7E:
    case 0x7F:
    case 0x80:
    case 0x81:
    case 0x82:
    case 0x83:
    case 0x84:
    case 0x85:
    case 0x86:
    case 0x87:
    case 0x88:
    case 0x89:
    case 0x8A:
    case 0x8B:
    case 0x8C:
    case 0x8D:
    case 0x8E:
    case 0x8F:
      v11 = 1 << (v27 - 123);
      v12 = v11 >> 31;
      if ( *(uchar *)v4 )
      {
        v13 = *(uint *)(v28 + 28) | v12;
        *(uint *)(v28 + 24) |= v11;
        *(uint *)(v28 + 28) = v13;
      }
      else
      {
        v14 = ~v11;
        v15 = *(uint *)(v28 + 28) & ~v12;
        *(uint *)(v28 + 24) &= v14;
        *(uint *)(v28 + 28) = v15;
      }
      break;
    case 0x90:
      v16 = 0;
      do
      {
        v17 = *v4;
        ++v16;
        ++v4;
        *(ushort *)v7 = v17;
        v7 += 2;
      }
      while ( v16 < 8 );
      break;
    case 0x91:
      Function_2023df0((int)v4, (uchar *)v7, 8u);
      break;
    case 0x92:
      *(uchar *)(v7 + 16) = *(uchar *)v4;
      break;
    case 0x93:
      *(uchar *)(v7 + 17) = *(uchar *)v4;
      break;
    case 0x94:
      *(uchar *)(v7 + 18) = *(uchar *)v4;
      break;
    case 0x95:
      *(uchar *)(v7 + 19) = *(uchar *)v4;
      break;
    case 0x96:
      *(uchar *)(v7 + 20) = *(uchar *)v4;
      break;
    case 0x97:
      *(uchar *)(v7 + 21) = *(uchar *)v4;
      break;
    case 0x9A:
      *(uchar *)(v7 + 26) = *(uchar *)v4;
      break;
    case 0x9B:
      *(uchar *)(v7 + 27) = *(uchar *)v4;
      break;
    case 0x9C:
      *(uchar *)(v7 + 28) = *(uchar *)v4 & 0x7F | *(uchar *)(v7 + 28) & 0x80;
      break;
    case 0x9D:
      *(uchar *)(v7 + 28) = (*(uchar *)v4 << 7) | *(uchar *)(v7 + 28) & 0x7F;
      break;
    case 0x9E:
      *(uchar *)(v7 + 29) = *(uchar *)v4;
      break;
    case 0x9F:
      *(ushort *)(v7 + 30) = *v4;
      break;
    case 0xAF:
      v18 = *(uint *)(v6 + 16) & 0xFFFFFFE0 | *(uint *)v4 & 0x1F;
      *(uint *)(v6 + 16) = v18;
      v19 = v18 & 0xFFFFFC1F | 32 * (*(uint *)v4 >> 5) & 0x3FF;
      *(uint *)(v6 + 16) = v19;
      v20 = v19 & 0xFFFF83FF | (*(uint *)v4 >> 10 << 10) & 0x7FFF;
      *(uint *)(v6 + 16) = v20;
      v21 = v20 & 0xFFF07FFF | (*(uint *)v4 >> 15 << 15) & 0xFFFFF;
      *(uint *)(v6 + 16) = v21;
      v22 = v21 & 0xFE0FFFFF | (*(uint *)v4 >> 20 << 20) & 0x1FFFFFF;
      *(uint *)(v6 + 16) = v22;
      *(uint *)(v6 + 16) = (*(uint *)v4 >> 25 << 27 >> 2) | v22 & 0xC1FFFFFF;
      break;
    case 0xB3:
      v23 = Function_200b32c(*v5, 0);
      Function_2023df0((int)v23, (uchar *)v28, 0xBu);
      Function_20237bc_FreeMsg((int)v23, v24);
      break;
    default:
      return;
  }
}

//----- (0207536C) --------------------------------------------------------
int __fastcall ChangePkmnData0(int *a1, uint a2, int a3)
{
  int *v3
  uint v4
  int v5
  int v6
  int v7
  int v8
  int v9
  int v10
  int result
  int v12
  int v13

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( a1[1] & 1
    || (v6 = *a1,
        Call_DecryptPkmnData3((int)(a1 + 34), 0x64u),
        v7 = *((ushort *)v3 + 3),
        Call_DecryptPkmnData3((int)(v3 + 2), 0x80u),
        v8 = CalcPokemonChecksum((ushort *)v3 + 4, 0x80u),
        v9 = *((ushort *)v3 + 3),
        v8 == v9) )
  {
    ChangePkmnData(v3, v4, v5);
    result = v3[1] & 1;
    if ( !result )
    {
      v12 = *v3;
      Call_DecryptPkmnData2((int)(v3 + 34), 0x64u);
      *((ushort *)v3 + 3) = CalcPokemonChecksum((ushort *)v3 + 4, 0x80u);
      v13 = *((ushort *)v3 + 3);
      result = Call_DecryptPkmnData2((int)(v3 + 2), 0x80u);
    }
  }
  else
  {
    if ( v8 != v9 )
      ErrorHandler();
    v10 = *((ushort *)v3 + 3);
    result = Call_DecryptPkmnData2((int)(v3 + 2), 0x80u);
  }
  return result;
}

//----- (020753F4) --------------------------------------------------------
ushort *__fastcall ChangePkmnData(int *a1, uint a2, int a3)
{
  int v3
  ushort *result
  short v5

  switch ( (uchar)a2 + 96 )
  {
    case 0:
    case 1:
    case 2:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
      result = (ushort *)ErrorHandler();
      break;
    case 3:
      v3 = *((ushort *)a1 + 72);
      if ( *((ushort *)a1 + 71) + a3 <= v3 )
      {
        v5 = *((ushort *)a1 + 71);
        result = (ushort *)((char *)a1 + 142);
        *result = v5 + a3;
      }
      else
      {
        result = (ushort *)((char *)a1 + 142);
        *result = v3;
      }
      break;
    default:
      result = (ushort *)ChangeBoxPkmnData(a1, (ushort)a2, a3);
      break;
  }
  return result;
}

//----- (02075454) --------------------------------------------------------
int __fastcall ChangeBoxPkmnData(int *a1, uint a2, int a3)
{
  uint v3
  int v4
  int *v5
  ushort *v6
  int v7
  int result
  uint v9
  int v10
  int v11
  int v12
  int v13
  int v14
  int v15
  int v16
  int v17
  uint v18
  int v19
  uint v20
  int v21
  uint v22
  int v23
  uint v24
  int v25
  uint v26
  int v27
  uint v28

  v3 = a2;
  v4 = a3;
  v5 = a1;
  v6 = (ushort *)GetPkmnDataBlockAdress((int)a1, *a1, 0);
  v7 = GetPkmnDataBlockAdress((int)v5, *v5, 1u);
  GetPkmnDataBlockAdress((int)v5, *v5, 2u);
  result = GetPkmnDataBlockAdress((int)v5, *v5, 3u);
  if ( v3 <= 0xB3 )
    JUMPOUT(__CS__, (char *)&off_20754A2 + *((short *)&off_20754A2 + v3) + 2);
  switch ( (uchar)result )
  {
    case 8:
      result = GetBaseExpPts(*v6, 100);
      v9 = *((uint *)v6 + 2) + v4;
      if ( v9 <= result )
      {
        *((uint *)v6 + 2) = v9;
      }
      else
      {
        result = GetBaseExpPts(*v6, 100);
        *((uint *)v6 + 2) = result;
      }
      break;
    case 9:
      v10 = *((uchar *)v6 + 12);
      result = v10 + v4;
      if ( v10 + v4 > 255 )
        v10 = 255;
      v11 = v10 + v4;
      if ( v11 < 0 )
        LOBYTE(v11) = 0;
      *((uchar *)v6 + 12) = v11;
      break;
    case 0xD:
      result = *((uchar *)v6 + 16) + v4;
      *((uchar *)v6 + 16) = result;
      break;
    case 0xE:
      result = *((uchar *)v6 + 17) + v4;
      *((uchar *)v6 + 17) = result;
      break;
    case 0xF:
      result = *((uchar *)v6 + 18) + v4;
      *((uchar *)v6 + 18) = result;
      break;
    case 0x10:
      result = *((uchar *)v6 + 19) + v4;
      *((uchar *)v6 + 19) = result;
      break;
    case 0x11:
      result = *((uchar *)v6 + 20) + v4;
      *((uchar *)v6 + 20) = result;
      break;
    case 0x12:
      result = *((uchar *)v6 + 21) + v4;
      *((uchar *)v6 + 21) = result;
      break;
    case 0x13:
      result = *((uchar *)v6 + 22) + v4;
      if ( result <= 255 )
      {
        *((uchar *)v6 + 22) = result;
      }
      else
      {
        result = 255;
        *((uchar *)v6 + 22) = -1;
      }
      break;
    case 0x14:
      result = *((uchar *)v6 + 23) + v4;
      if ( result <= 255 )
      {
        *((uchar *)v6 + 23) = result;
      }
      else
      {
        result = 255;
        *((uchar *)v6 + 23) = -1;
      }
      break;
    case 0x15:
      result = *((uchar *)v6 + 24) + v4;
      if ( result <= 255 )
      {
        *((uchar *)v6 + 24) = result;
      }
      else
      {
        result = 255;
        *((uchar *)v6 + 24) = -1;
      }
      break;
    case 0x16:
      result = *((uchar *)v6 + 25) + v4;
      if ( result <= 255 )
      {
        *((uchar *)v6 + 25) = result;
      }
      else
      {
        result = 255;
        *((uchar *)v6 + 25) = -1;
      }
      break;
    case 0x17:
      result = *((uchar *)v6 + 26) + v4;
      if ( result <= 255 )
      {
        *((uchar *)v6 + 26) = result;
      }
      else
      {
        result = 255;
        *((uchar *)v6 + 26) = -1;
      }
      break;
    case 0x18:
      result = *((uchar *)v6 + 27) + v4;
      if ( result <= 255 )
      {
        *((uchar *)v6 + 27) = result;
      }
      else
      {
        result = 255;
        *((uchar *)v6 + 27) = -1;
      }
      break;
    case 0x3A:
    case 0x3B:
    case 0x3C:
    case 0x3D:
      v12 = v3 - 58;
      v13 = v7 + 8;
      result = CalcMovePP(*(ushort *)(v7 + 2 * v12), *(uchar *)(v7 + 12 + v12));
      v14 = v4 + *(uchar *)(v7 + 8 + v12);
      if ( v14 <= result )
      {
        *(uchar *)(v13 + v12) = v14;
      }
      else
      {
        result = CalcMovePP(*(ushort *)(v7 + 2 * v12), *(uchar *)(v7 + 12 + v12));
        *(uchar *)(v13 + v12) = result;
      }
      break;
    case 0x3E:
    case 0x3F:
    case 0x40:
    case 0x41:
      v15 = v7 + 12;
      v16 = v3 - 62;
      result = v4 + *(uchar *)(v15 + v16);
      if ( result <= 3 )
      {
        *(uchar *)(v15 + v16) = result;
      }
      else
      {
        result = 3;
        *(uchar *)(v15 + v16) = 3;
      }
      break;
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
      return result;
    case 0x46:
      v17 = *(uint *)(v7 + 16);
      v18 = (*(uint *)(v7 + 16) & 0x1F) + v4;
      if ( v18 <= 0x1F )
        result = v18 & 0x1F | v17 & 0xFFFFFFE0;
      else
        result = v17 & 0xFFFFFFE0 | 0x1F;
      *(uint *)(v7 + 16) = result;
      break;
    case 0x47:
      v19 = *(uint *)(v7 + 16);
      v20 = ((uint)(v19 << 22) >> 27) + v4;
      if ( v20 <= 0x1F )
        result = 32 * (((uint)(v19 << 22) >> 27) + v4) & 0x3FF | v19 & 0xFFFFFC1F;
      else
        result = v19 & 0xFFFFFC1F | 0x3E0;
      *(uint *)(v7 + 16) = result;
      break;
    case 0x48:
      v21 = *(uint *)(v7 + 16);
      v22 = ((uint)(v21 << 17) >> 27) + v4;
      if ( v22 <= 0x1F )
        result = ((((uint)(v21 << 17) >> 27) + v4) << 10) & 0x7FFF | *(uint *)(v7 + 16) & 0xFFFF83FF;
      else
        result = v21 & 0xFFFF83FF | 0x7C00;
      *(uint *)(v7 + 16) = result;
      break;
    case 0x49:
      v23 = *(uint *)(v7 + 16);
      v24 = ((uint)(v23 << 12) >> 27) + v4;
      if ( v24 <= 0x1F )
        result = ((((uint)(v23 << 12) >> 27) + v4) << 15) & 0xFFFFF | *(uint *)(v7 + 16) & 0xFFF07FFF;
      else
        result = v23 & 0xFFF07FFF | 0xF8000;
      *(uint *)(v7 + 16) = result;
      break;
    case 0x4A:
      v25 = *(uint *)(v7 + 16);
      v26 = ((uint)(v25 << 7) >> 27) + v4;
      if ( v26 <= 0x1F )
        result = ((((uint)(v25 << 7) >> 27) + v4) << 20) & 0x1FFFFFF | *(uint *)(v7 + 16) & 0xFE0FFFFF;
      else
        result = v25 & 0xFE0FFFFF | 0x1F00000;
      *(uint *)(v7 + 16) = result;
      break;
    case 0x4B:
      v27 = *(uint *)(v7 + 16);
      v28 = ((uint)(4 * v27) >> 27) + v4;
      if ( v28 <= 0x1F )
        result = (v28 << 27 >> 2) | *(uint *)(v7 + 16) & 0xC1FFFFFF;
      else
        result = v27 & 0xC1FFFFFF | 0x3E000000;
      *(uint *)(v7 + 16) = result;
      break;
    default:
      result = ErrorHandler();
      break;
  }
  return result;
}

//----- (02075874) --------------------------------------------------------
int __fastcall Function_2075874(int a1, int a2, uint a3)
{
  int v3
  int v4
  int v5

  v3 = a1;
  v4 = a2;
  v5 = malloc(a3, 44);
  LoadFromNARC_PlPersonal2(v3, v4, v5);
  return v5;
}

//----- (02075894) --------------------------------------------------------
int __fastcall Load_PlPersonal1(int a1, uint a2)
{
  int v2
  int v3

  v2 = a1;
  v3 = malloc(a2, 44);
  LoadFromNARC_PlPersonal1(v2, v3);
  return v3;
}

//----- (020758B0) --------------------------------------------------------
uint __fastcall LoadPkmnBaseData(int a1, uint a2)
{
  uint v2
  uchar *v3

  v3 = (uchar *)a1;
  if ( !a1 )
    LOBYTE(a1) = ErrorHandler();
  switch ( (uchar)a1 )
  {
    case 0:
      v2 = *v3;
      break;
    case 1:
      v2 = v3[1];
      break;
    case 2:
      v2 = v3[2];
      break;
    case 3:
      v2 = v3[3];
      break;
    case 4:
      v2 = v3[4];
      break;
    case 5:
      v2 = v3[5];
      break;
    case 6:
      v2 = v3[6];
      break;
    case 7:
      v2 = v3[7];
      break;
    case 8:
      v2 = v3[8];
      break;
    case 9:
      v2 = v3[9];
      break;
    case 0xA:
      v2 = *((ushort *)v3 + 5) & 3;
      break;
    case 0xB:
      v2 = (uint)*((ushort *)v3 + 5) << 28 >> 30;
      break;
    case 0xC:
      v2 = (uint)*((ushort *)v3 + 5) << 26 >> 30;
      break;
    case 0xD:
      v2 = (uint)*((ushort *)v3 + 5) << 24 >> 30;
      break;
    case 0xE:
      v2 = (uint)*((ushort *)v3 + 5) << 22 >> 30;
      break;
    case 0xF:
      v2 = (uint)*((ushort *)v3 + 5) << 20 >> 30;
      break;
    case 0x10:
      v2 = *((ushort *)v3 + 6);
      break;
    case 0x11:
      v2 = *((ushort *)v3 + 7);
      break;
    case 0x12:
      v2 = v3[16];
      break;
    case 0x13:
      v2 = v3[17];
      break;
    case 0x14:
      v2 = v3[18];
      break;
    case 0x15:
      v2 = v3[19];
      break;
    case 0x16:
      v2 = v3[20];
      break;
    case 0x17:
      v2 = v3[21];
      break;
    case 0x18:
      v2 = v3[22];
      break;
    case 0x19:
      v2 = v3[23];
      break;
    case 0x1A:
      v2 = v3[24];
      break;
    case 0x1B:
      v2 = v3[25] & 0x7F;
      break;
    case 0x1C:
      v2 = (uint)v3[25] << 24 >> 31;
      break;
    case 0x1D:
      v2 = *((uint *)v3 + 7);
      break;
    case 0x1E:
      v2 = *((uint *)v3 + 8);
      break;
    case 0x1F:
      v2 = *((uint *)v3 + 9);
      break;
    case 0x20:
      v2 = *((uint *)v3 + 10);
      break;
    default:
      return v2;
  }
  return v2;
}

//----- (020759B8) --------------------------------------------------------
int __fastcall free_PkmnData(int a1)
{
  int v1

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return free(v1);
}

//----- (020759CC) --------------------------------------------------------
uint __fastcall GetPkmnBaseData2(int a1, int a2, uint a3)
{
  uint v3
  int v4
  int v5
  uint v6

  v3 = a3;
  v4 = Function_2078740(a1, a2);
  v5 = Load_PlPersonal1(v4, 0);
  v6 = LoadPkmnBaseData(v5, v3);
  free_PkmnData(v5);
  return v6;
}

//----- (020759F0) --------------------------------------------------------
uint __fastcall GetPkmnBaseData1(int a1, uint a2)
{
  uint v2
  int v3
  uint v4

  v2 = a2;
  v3 = Load_PlPersonal1(a1, 0);
  v4 = LoadPkmnBaseData(v3, v2);
  free_PkmnData(v3);
  return v4;
}

//----- (02075A10) --------------------------------------------------------
int __fastcall Function_2075a10(int *a1)
{
  int *v1
  int v2
  int v3
  int v4
  int v5
  int v6
  uint v7

  v1 = a1;
  v2 = InitEncryptPkmnData(a1);
  v3 = (ushort)GetPkmnData(v1, 5u, 0);
  v4 = (uchar)GetPkmnData(v1, 0xA1u, 0);
  v5 = GetBaseExpPts(v3, v4);
  v6 = GetBaseExpPts(v3, v4 + 1);
  v7 = GetPkmnData(v1, 8u, 0);
  InitEncryptPkmnData_Part1And2(v1, v2);
  return (uchar)u32_div_f(100 * (v7 - v5), v6 - v5);
}

//----- (02075A70) --------------------------------------------------------
int __fastcall Function_2075a70(int a1)
{
  return Function_2075a78(a1);
}

//----- (02075A78) --------------------------------------------------------
int __fastcall Function_2075a78(int a1)
{
  int v1
  int v2
  int v3
  uint v4

  v1 = a1;
  v2 = (ushort)GetBoxPkmnData(a1, 5u, 0);
  v3 = (InitPkmnLevel(v1) + 1) & 0xFFFF;
  v4 = GetBoxPkmnData(v1, 8u, 0);
  return GetBaseExpPts(v2, v3) - v4;
}

//----- (02075AAC) --------------------------------------------------------
int __fastcall GetBaseExpPtsOfSpeciesAndLevel(int *a1)
{
  int *v1
  int v2
  int v3

  v1 = a1;
  v2 = GetPkmnData(a1, 5u, 0);
  v3 = GetPkmnData(v1, 0xA1u, 0);
  return GetBaseExpPts(v2, v3);
}

//----- (02075AD0) --------------------------------------------------------
int __fastcall GetBaseExpPts(int a1, int a2)
{
  int v2
  int v3

  v2 = a2;
  v3 = GetPkmnBaseData1(a1, 0x15u);
  return GetDataFromPlGrowTbl(v3, v2);
}

//----- (02075AE4) --------------------------------------------------------
int __fastcall LoadFromNarc_PlGrowTbl(int a1, int a2)
{
  int v2
  int v3

  v2 = a1;
  v3 = a2;
  if ( a1 >= 8 )
    ErrorHandler();
  return LoadFromNARC(v3, 3, v2);
}

//----- (02075B00) --------------------------------------------------------
int __fastcall GetDataFromPlGrowTbl(int a1, int a2)
{
  int v2
  int v3
  int v4
  int v5

  v2 = a1;
  v3 = a2;
  if ( a1 >= 8 )
    ErrorHandler();
  if ( v3 > 101 )
    ErrorHandler();
  v4 = malloc(0, 404);
  LoadFromNarc_PlGrowTbl(v2, v4);
  v5 = *(uint *)(v4 + 4 * v3);
  free(v4);
  return v5;
}

//----- (02075B38) --------------------------------------------------------
int __fastcall Call_InitPkmnLevel(int a1)
{
  return InitPkmnLevel(a1);
}

//----- (02075B40) --------------------------------------------------------
int __fastcall InitPkmnLevel(int a1)
{
  ushort *v1
  int v2
  ushort v3
  uint v4

  v1 = (ushort *)a1;
  v2 = InitEncryptPkmnData_Part1(a1);
  v3 = GetBoxPkmnData((int)v1, 5u, 0);
  v4 = GetBoxPkmnData((int)v1, 8u, 0);
  InitEncryptPkmnData_Part1Again(v1, v2);
  return CalcPkmnLevel(v3, v4);
}

//----- (02075B78) --------------------------------------------------------
int __fastcall CalcPkmnLevel(int a1, uint a2)
{
  uint v2
  int v3
  int v4
  int v5

  v2 = a2;
  v3 = a1;
  v4 = Load_PlPersonal1(a1, 0);
  v5 = Function_2075b9c(v4, v3, v2);
  free_PkmnData(v4);
  return v5;
}

//----- (02075B9C) --------------------------------------------------------
int __fastcall Function_2075b9c(int a1, int a2, uint a3)
{
  uint v3
  int v4
  int *v5
  int v6

  v3 = a3;
  v4 = LoadPkmnBaseData(a1, 0x15u);
  LoadFromNarc_PlGrowTbl(v4, (int)&dword_21C089C);
  v5 = &dword_21C08A0;
  v6 = 1;
  do
  {
    if ( *v5 > v3 )
      break;
    ++v6;
    ++v5;
  }
  while ( v6 < 101 );
  return v6 - 1;
}

//----- (02075BCC) --------------------------------------------------------
int __fastcall Function_2075bcc(int a1)
{
  return Function_2075bd4(a1);
}

//----- (02075BD4) --------------------------------------------------------
int __fastcall Function_2075bd4(int a1)
{
  ushort *v1
  int v2
  int v3

  v1 = (ushort *)a1;
  v2 = InitEncryptPkmnData_Part1(a1);
  v3 = GetBoxPkmnData((int)v1, 0, 0);
  InitEncryptPkmnData_Part1Again(v1, v2);
  return PkmnData_DivBy25(v3);
}

//----- (02075BFC) --------------------------------------------------------
int __fastcall PkmnData_DivBy25(int a1)
{
  uchar v1

  u32_div_f(a1, 25);
  return v1;
}

//----- (02075C0C) --------------------------------------------------------
uint __fastcall Function_2075c0c(int a1, uint a2, uint a3)
{
  int v4

  if ( a3 < 1 || a3 > 5 )
    return a2;
  v4 = *((char *)&Unknown_20f0618 + 5 * a1 + a3 - 1);
  if ( v4 == -1 )
    return s32_div_f(90 * a2 & 0xFFFF, 100) & 0xFFFF;
  if ( v4 == 1 )
    a2 = s32_div_f(110 * a2 & 0xFFFF, 100) & 0xFFFF;
  return a2;
}

//----- (02075C60) --------------------------------------------------------
int __fastcall Function_2075c60(int a1, int a2)
{
  return *((char *)&Unknown_20f0618 + 5 * a1 + a2 - 1);
}

//----- (02075C74) --------------------------------------------------------
uint __fastcall Function_2075c74(int *a1, int a2, int a3, int a4)
{
  int v4
  int *v5
  uint result
  uint v7
  ushort v8
  int v9
  int v10
  int v11
  int v12
  short v13
  int v14

  v14 = a4;
  v4 = a2;
  v5 = a1;
  v12 = a3;
  if ( a2 != 5 || (result = PRNG(), !(result & 1)) )
  {
    result = GetPkmnData(v5, 0xAEu, 0) << 16;
    v7 = result >> 16;
    if ( result >> 16 )
    {
      result = 494;
      if ( v7 != 494 )
      {
        v8 = GetPkmnData(v5, 6u, 0);
        v9 = 0;
        v10 = (uchar)GetItemData(v8, 1u, 0);
        v13 = GetPkmnData(v5, 9u, 0);
        if ( v13 >= 100 )
          v9 = 1;
        if ( v13 >= 200 )
          v9 = (v9 + 1) & 0xFF;
        v11 = *((char *)Unknown_20f05a0 + 3 * v4 + v9);
        if ( v11 > 0 && GetPkmnData(v5, 0x9Bu, 0) == 11 )
          v11 = (char)(v11 + 1);
        if ( v11 > 0 && v12 == GetPkmnData(v5, 0x98u, 0) )
          v11 = (char)(v11 + 1);
        if ( v11 > 0 && v10 == 53 )
          v11 = (char)s32_div_f(150 * v11, 100);
        v13 += v11;
        if ( v13 < 0 )
          v13 = 0;
        if ( v13 > 255 )
          v13 = 255;
        result = SetPkmnData((int)v5, 9, (ushort *)&v13);
      }
    }
  }
  return result;
}

//----- (02075D6C) --------------------------------------------------------
int __fastcall Call_DecidePkmnGender(int a1)
{
  return DecidePkmnGender(a1);
}

//----- (02075D74) --------------------------------------------------------
int __fastcall DecidePkmnGender(int a1)
{
  ushort *v1
  int v2
  int v3
  uchar v4

  v1 = (ushort *)a1;
  v2 = InitEncryptPkmnData_Part1(a1);
  v3 = (ushort)GetBoxPkmnData((int)v1, 5u, 0);
  v4 = GetBoxPkmnData((int)v1, 0, 0);
  InitEncryptPkmnData_Part1Again(v1, v2);
  return Function_2075dac(v3, v4);
}

//----- (02075DAC) --------------------------------------------------------
int __fastcall Function_2075dac(int a1, uchar a2)
{
  uchar v2
  int v3
  int v4
  int v5

  v2 = a2;
  v3 = a1;
  v4 = Load_PlPersonal1(a1, 0);
  v5 = Function_2075dd0(v4, v3, v2);
  free_PkmnData(v4);
  return v5;
}

//----- (02075DD0) --------------------------------------------------------
int __fastcall Function_2075dd0(int a1, int a2, uchar a3)
{
  uchar v3
  uint v4

  v3 = a3;
  v4 = LoadPkmnBaseData(a1, 0x12u) & 0xFF;
  switch ( v4 )
  {
    case 0u:
      return 0;
    case 0xFEu:
      return 1;
    case 0xFFu:
      return 2;
  }
  return v4 > v3;
}

//----- (02075E0C) --------------------------------------------------------
int __fastcall Call_CheckIfShinyPkmn_2(int a1)
{
  return CheckIfShinyPkmn_2(a1);
}

//----- (02075E14) --------------------------------------------------------
int __fastcall CheckIfShinyPkmn_2(int a1)
{
  int v1
  int v2
  int v3

  v1 = a1;
  v2 = GetBoxPkmnData(a1, 7u, 0);
  v3 = GetBoxPkmnData(v1, 0, 0);
  return CheckIfShinyPkmn(v2, v3);
}

//----- (02075E38) --------------------------------------------------------
int __fastcall CheckIfShinyPkmn(int a1, int a2)
{
  int result

  if ( ((ushort)a1 ^ ((a1 & 0xFFFF0000) >> 16) ^ ((a2 & 0xFFFF0000) >> 16) ^ (ushort)a2) >= 8 )
    result = isShinyPkmn(0);
  else
    result = isShinyPkmn(1);
  return result;
}

//----- (02075E5A) --------------------------------------------------------
int __fastcall isShinyPkmn(int result)
{
  return (uchar)result;
}

//----- (02075E64) --------------------------------------------------------
int __fastcall Function_2075e64(int a1)
{
  uint v1
  uint v2
  uint v3
  int v4

  v1 = ((ushort)a1 ^ ((a1 & 0xFFFF0000) >> 16)) >> 3;
  v2 = PRNG() & 7;
  v3 = PRNG() & 7;
  v4 = 0;
  do
  {
    if ( Function_20787cc(v4) & v1 )
    {
      if ( PRNG() & 1 )
        v2 = (Function_20787cc(v4 + 3) | v2) & 0xFFFF;
      else
        v3 = (Function_20787cc(v4 + 3) | v3) & 0xFFFF;
    }
    else if ( PRNG() & 1 )
    {
      v2 = (Function_20787cc(v4 + 3) | v2) & 0xFFFF;
      v3 = (Function_20787cc(v4 + 3) | v3) & 0xFFFF;
    }
    ++v4;
  }
  while ( v4 < 13 );
  return (v3 << 16) | v2;
}

//----- (02075EF4) --------------------------------------------------------
int __fastcall Function_2075ef4(int a1, int a2, uint a3)
{
  return Function_2075f0c(a1, a2, a3, 0);
}

//----- (02075F00) --------------------------------------------------------
int __fastcall Function_2075f00(int a1, int a2, uint a3)
{
  return Function_2075f0c(a1, a2, a3, 1);
}

//----- (02075F0C) --------------------------------------------------------
int __fastcall Function_2075f0c(int a1, int a2, uint a3, int a4)
{
  ushort *v4
  int v5
  int v6
  int v7
  uint v8
  int v10
  uint v11
  int v12
  int v13
  int v14

  v4 = (ushort *)a2;
  v10 = a1;
  v11 = a3;
  v12 = a4;
  v14 = InitEncryptPkmnData_Part1(a2);
  v5 = (ushort)GetBoxPkmnData((int)v4, 0xAEu, 0);
  v13 = DecidePkmnGender((int)v4);
  v6 = CheckIfShinyPkmn_2((int)v4);
  v7 = GetBoxPkmnData((int)v4, 0, 0);
  if ( v5 == 494 )
    v8 = GetBoxPkmnData((int)v4, 5u, 0) == 490;
  else
    v8 = GetBoxPkmnData((int)v4, 0x70u, 0) & 0xFF;
  if ( v12 == 1 )
    Function_2076300(v10, v5, v13, v11, v6, v8, v7);
  else
    Function_2075fb4(v10, v5, v13, v11, v6, v8, v7);
  return InitEncryptPkmnData_Part1Again(v4, v14);
}

//----- (02075FB4) --------------------------------------------------------
int __fastcall Function_2075fb4(int a1, int a2, int a3, uint a4, int a5, uint a6, int a7)
{
  int v7
  int v8
  uint v9
  uint v10
  int result
  int v12

  v12 = a3;
  v7 = a2;
  v8 = a1;
  *(ushort *)(a1 + 6) = 0;
  *(uchar *)(a1 + 8) = 0;
  *(uint *)(a1 + 12) = 0;
  v9 = a4;
  v10 = Function_20761e8(a2, a6);
  if ( v7 > 421 )
  {
    if ( v7 > 487 )
    {
      if ( v7 > 492 )
      {
        if ( v7 <= 495 && v7 >= 493 )
        {
          switch ( v7 )
          {
            case 493:
              *(ushort *)v8 = 117;
              *(ushort *)(v8 + 2) = (v9 >> 1) + 96 + 2 * v10;
              result = a5 + 190 + 2 * v10;
              *(ushort *)(v8 + 4) = result;
              return result;
            case 494:
              *(ushort *)v8 = 117;
              *(ushort *)(v8 + 2) = v10 + 132;
              result = v10 + 226;
              *(ushort *)(v8 + 4) = result;
              return result;
            case 495:
              *(ushort *)v8 = 117;
              *(ushort *)(v8 + 2) = 132;
              result = 226;
              *(ushort *)(v8 + 4) = 226;
              return result;
          }
        }
      }
      else if ( v7 == 492 )
      {
        *(ushort *)v8 = 117;
        *(ushort *)(v8 + 2) = (v9 >> 1) + 134 + 2 * v10;
        result = a5 + 228 + 2 * v10;
        *(ushort *)(v8 + 4) = result;
        return result;
      }
    }
    else
    {
      if ( v7 >= 487 )
      {
        *(ushort *)v8 = 117;
        *(ushort *)(v8 + 2) = (v9 >> 1) + 150 + 2 * v10;
        result = a5 + 244 + 2 * v10;
        *(ushort *)(v8 + 4) = result;
        return result;
      }
      if ( v7 > 423 )
      {
        if ( v7 == 479 )
        {
          *(ushort *)v8 = 117;
          *(ushort *)(v8 + 2) = (v9 >> 1) + 138 + 2 * v10;
          result = a5 + 232 + 2 * v10;
          *(ushort *)(v8 + 4) = result;
          return result;
        }
      }
      else if ( v7 >= 422 )
      {
        if ( v7 == 422 )
        {
          *(ushort *)v8 = 117;
          *(ushort *)(v8 + 2) = v9 + 84 + v10;
          result = a5 + 178 + 2 * v10;
          *(ushort *)(v8 + 4) = result;
          return result;
        }
        if ( v7 == 423 )
        {
          *(ushort *)v8 = 117;
          *(ushort *)(v8 + 2) = v9 + 88 + v10;
          result = a5 + 182 + 2 * v10;
          *(ushort *)(v8 + 4) = result;
          return result;
        }
      }
    }
  }
  else
  {
    if ( v7 >= 421 )
    {
      *(ushort *)v8 = 117;
      *(ushort *)(v8 + 2) = v9 + 92 + v10;
      result = v10 + 2 * a5 + 186;
      *(ushort *)(v8 + 4) = result;
      return result;
    }
    if ( v7 > 351 )
    {
      if ( v7 > 386 )
      {
        if ( v7 <= 413 && v7 >= 412 )
        {
          if ( v7 == 412 )
          {
            *(ushort *)v8 = 117;
            *(ushort *)(v8 + 2) = (v9 >> 1) + 72 + 2 * v10;
            result = a5 + 166 + 2 * v10;
            *(ushort *)(v8 + 4) = result;
            return result;
          }
          if ( v7 == 413 )
          {
            *(ushort *)v8 = 117;
            *(ushort *)(v8 + 2) = (v9 >> 1) + 78 + 2 * v10;
            result = a5 + 172 + 2 * v10;
            *(ushort *)(v8 + 4) = result;
            return result;
          }
        }
      }
      else if ( v7 == 386 )
      {
        *(ushort *)v8 = 117;
        result = (v9 >> 1) + 2 * v10;
        *(ushort *)(v8 + 2) = result;
        *(ushort *)(v8 + 4) = a5 + 154;
        return result;
      }
    }
    else
    {
      if ( v7 >= 351 )
      {
        *(ushort *)v8 = 117;
        *(ushort *)(v8 + 2) = v10 + 2 * v9 + 64;
        result = v10 + 4 * a5 + 158;
        *(ushort *)(v8 + 4) = result;
        return result;
      }
      if ( v7 == 201 )
      {
        *(ushort *)v8 = 117;
        result = (v9 >> 1) + 8 + 2 * v10;
        *(ushort *)(v8 + 2) = result;
        *(ushort *)(v8 + 4) = a5 + 156;
        return result;
      }
    }
  }
  *(ushort *)v8 = 4;
  *(ushort *)(v8 + 2) = v9 + 6 * v7 + (v12 != 1);
  *(ushort *)(v8 + 4) = a5 + 6 * v7 + 4;
  result = 327;
  if ( v7 == 327 && v9 == 2 )
  {
    *(ushort *)(v8 + 6) = 327;
    *(uchar *)(v8 + 8) = 0;
    result = a7;
    *(uint *)(v8 + 12) = a7;
  }
  return result;
}

//----- (020761E8) --------------------------------------------------------
uint __fastcall Function_20761e8(int a1, uint a2)
{
  if ( a1 > 421 )
  {
    if ( a1 > 487 )
    {
      if ( a1 > 492 )
      {
        if ( a1 <= 494 && a1 >= 493 )
        {
          if ( a1 == 493 )
          {
            if ( a2 > 0x11 )
              a2 = 0;
          }
          else if ( a1 == 494 && a2 > 1 )
          {
            a2 = 0;
          }
        }
      }
      else if ( a1 == 492 && a2 > 1 )
      {
        a2 = 0;
      }
    }
    else if ( a1 >= 487 )
    {
      if ( a2 > 1 )
        a2 = 0;
    }
    else if ( a1 > 423 )
    {
      if ( a1 == 479 && a2 > 5 )
        a2 = 0;
    }
    else if ( a1 >= 422 )
    {
      if ( a1 == 422 )
      {
        if ( a2 > 1 )
          a2 = 0;
      }
      else if ( a1 == 423 && a2 > 1 )
      {
        a2 = 0;
      }
    }
  }
  else if ( a1 >= 421 )
  {
    if ( a2 > 1 )
      a2 = 0;
  }
  else if ( a1 > 351 )
  {
    if ( a1 > 386 )
    {
      if ( a1 <= 413 && a1 >= 412 )
      {
        if ( a1 == 412 )
        {
          if ( a2 > 2 )
            a2 = 0;
        }
        else if ( a1 == 413 && a2 > 2 )
        {
          a2 = 0;
        }
      }
    }
    else if ( a1 == 386 && a2 > 3 )
    {
      a2 = 0;
    }
  }
  else if ( a1 >= 351 )
  {
    if ( a2 > 3 )
      a2 = 0;
  }
  else if ( a1 == 201 && a2 >= 0x1C )
  {
    a2 = 0;
  }
  return a2;
}

//----- (02076300) --------------------------------------------------------
int __fastcall Function_2076300(int a1, int a2, int a3, uint a4, int a5, uint a6, int a7)
{
  int v7
  int v8
  uint v9
  uint v10
  int result
  int v12

  v12 = a3;
  v7 = a2;
  v8 = a1;
  *(ushort *)(a1 + 6) = 0;
  *(uchar *)(a1 + 8) = 0;
  *(uint *)(a1 + 12) = 0;
  v9 = a4;
  v10 = Function_20761e8(a2, a6);
  if ( v7 <= 421 )
  {
    if ( v7 >= 421 )
    {
      *(ushort *)v8 = 166;
      *(ushort *)(v8 + 2) = v9 + 92 + v10;
      result = v10 + 2 * a5 + 166;
      *(ushort *)(v8 + 4) = result;
      return result;
    }
    if ( v7 > 351 )
    {
      if ( v7 > 386 )
      {
        if ( v7 <= 413 && v7 >= 412 )
        {
          if ( v7 == 412 )
          {
            *(ushort *)v8 = 166;
            *(ushort *)(v8 + 2) = (v9 >> 1) + 72 + 2 * v10;
            result = a5 + 146 + 2 * v10;
            *(ushort *)(v8 + 4) = result;
            return result;
          }
          if ( v7 == 413 )
          {
            *(ushort *)v8 = 166;
            *(ushort *)(v8 + 2) = (v9 >> 1) + 78 + 2 * v10;
            result = a5 + 152 + 2 * v10;
            *(ushort *)(v8 + 4) = result;
            return result;
          }
        }
      }
      else if ( v7 == 386 )
      {
        *(ushort *)v8 = 166;
        result = (v9 >> 1) + 2 * v10;
        *(ushort *)(v8 + 2) = result;
        *(ushort *)(v8 + 4) = a5 + 134;
        return result;
      }
    }
    else
    {
      if ( v7 >= 351 )
      {
        *(ushort *)v8 = 166;
        *(ushort *)(v8 + 2) = v10 + 2 * v9 + 64;
        result = v10 + 4 * a5 + 138;
        *(ushort *)(v8 + 4) = result;
        return result;
      }
      if ( v7 == 201 )
      {
        *(ushort *)v8 = 166;
        result = (v9 >> 1) + 8 + 2 * v10;
        *(ushort *)(v8 + 2) = result;
        *(ushort *)(v8 + 4) = a5 + 136;
        return result;
      }
    }
LABEL_54:
    *(ushort *)v8 = 165;
    *(ushort *)(v8 + 2) = v9 + 6 * v7 + (v12 != 1);
    *(ushort *)(v8 + 4) = a5 + 6 * v7 + 4;
    result = 327;
    if ( v7 == 327 && v9 == 2 )
    {
      *(ushort *)(v8 + 6) = 327;
      *(uchar *)(v8 + 8) = 0;
      result = a7;
      *(uint *)(v8 + 12) = a7;
    }
    return result;
  }
  if ( v7 > 487 )
  {
    if ( v7 > 492 )
    {
      if ( v7 <= 495 && v7 >= 493 )
      {
        switch ( v7 )
        {
          case 493:
            *(ushort *)v8 = 166;
            *(ushort *)(v8 + 2) = (v9 >> 1) + 96 + 2 * v10;
            result = a5 + 170 + 2 * v10;
            *(ushort *)(v8 + 4) = result;
            return result;
          case 494:
            *(ushort *)v8 = 166;
            *(ushort *)(v8 + 2) = v10 + 132;
            result = v10 + 206;
            *(ushort *)(v8 + 4) = result;
            return result;
          case 495:
            *(ushort *)v8 = 166;
            *(ushort *)(v8 + 2) = 132;
            result = 206;
            *(ushort *)(v8 + 4) = 206;
            return result;
        }
      }
    }
    else if ( v7 == 492 )
    {
      if ( v10 )
      {
        *(ushort *)v8 = 117;
        result = (v9 >> 1) + 134 + 2 * v10;
        *(ushort *)(v8 + 2) = result;
        *(ushort *)(v8 + 4) = a5 + 230;
      }
      else
      {
        *(ushort *)v8 = 165;
        *(ushort *)(v8 + 2) = v9 + 2952 + (v12 != 1);
        result = a5 + 2956;
        *(ushort *)(v8 + 4) = a5 + 2956;
      }
      return result;
    }
    goto LABEL_54;
  }
  if ( v7 < 487 )
  {
    if ( v7 > 423 )
    {
      if ( v7 == 479 )
      {
        if ( v10 )
        {
          *(ushort *)v8 = 117;
          *(ushort *)(v8 + 2) = (v9 >> 1) + 138 + 2 * v10;
          result = a5 + 232 + 2 * v10;
          *(ushort *)(v8 + 4) = result;
        }
        else
        {
          *(ushort *)v8 = 165;
          *(ushort *)(v8 + 2) = v9 + 2874 + (v12 != 1);
          result = a5 + 2878;
          *(ushort *)(v8 + 4) = a5 + 2878;
        }
        return result;
      }
    }
    else if ( v7 >= 422 )
    {
      if ( v7 == 422 )
      {
        *(ushort *)v8 = 166;
        *(ushort *)(v8 + 2) = v9 + 84 + v10;
        result = a5 + 158 + 2 * v10;
        *(ushort *)(v8 + 4) = result;
        return result;
      }
      if ( v7 == 423 )
      {
        *(ushort *)v8 = 166;
        *(ushort *)(v8 + 2) = v9 + 88 + v10;
        result = a5 + 162 + 2 * v10;
        *(ushort *)(v8 + 4) = result;
        return result;
      }
    }
    goto LABEL_54;
  }
  if ( v10 )
  {
    *(ushort *)v8 = 117;
    *(ushort *)(v8 + 2) = (v9 >> 1) + 150 + 2 * v10;
    result = a5 + 244 + 2 * v10;
  }
  else
  {
    *(ushort *)v8 = 165;
    *(ushort *)(v8 + 2) = v9 + 6 * v7 + (v12 != 1);
    result = a5 + 6 * v7 + 4;
  }
  *(ushort *)(v8 + 4) = result;
  return result;
}

//----- (020765AC) --------------------------------------------------------
int __fastcall Function_20765ac(int a1, uint a2)
{
  return Function_20765c4(a1, a2, 0);
}

//----- (020765B8) --------------------------------------------------------
int __fastcall Function_20765b8(int a1, uint a2)
{
  return Function_20765c4(a1, a2, 1);
}

//----- (020765C4) --------------------------------------------------------
int __fastcall Function_20765c4(int a1, uint a2, int a3)
{
  uint v3
  int v4
  int v5
  uint v6
  int result
  int v8
  int v9

  v3 = a2;
  v8 = a3;
  v4 = a1;
  v5 = (ushort)GetBoxPkmnData(a1, 0xAEu, 0);
  v9 = DecidePkmnGender(v4);
  GetBoxPkmnData(v4, 0, 0);
  if ( v5 == 494 )
    v6 = GetBoxPkmnData(v4, 5u, 0) == 490;
  else
    v6 = GetBoxPkmnData(v4, 0x70u, 0) & 0xFF;
  if ( v8 == 1 )
    result = Function_20767bc(v5, v9, v3, v6);
  else
    result = Function_2076648(v5, v9, v3, v6);
  return result;
}

//----- (02076648) --------------------------------------------------------
int __fastcall Function_2076648(int a1, int a2, uint a3, uint a4)
{
  int v4
  int v5
  uint v6
  uint v7
  int v8
  int v9
  uchar v11
  uint v12

  v12 = a4;
  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = Function_20761e8(a1, a4);
  if ( v5 > 421 )
  {
    if ( v5 > 487 )
    {
      if ( v5 > 492 )
      {
        if ( v5 <= 495 && v5 >= 493 )
        {
          switch ( v5 )
          {
            case 493:
              v8 = 121;
              v9 = (v6 >> 1) + 96 + 2 * v7;
              goto LABEL_48;
            case 494:
              v8 = 121;
              v9 = v7 + 132;
              goto LABEL_48;
            case 495:
              v8 = 121;
              v9 = 132;
              goto LABEL_48;
          }
        }
      }
      else if ( v5 == 492 )
      {
        v8 = 121;
        v9 = (v6 >> 1) + 136 + 2 * v7;
        goto LABEL_48;
      }
    }
    else
    {
      if ( v5 >= 487 )
      {
        v8 = 121;
        v9 = (v6 >> 1) + 152 + 2 * v7;
        goto LABEL_48;
      }
      if ( v5 > 423 )
      {
        if ( v5 == 479 )
        {
          v8 = 121;
          v9 = (v6 >> 1) + 140 + 2 * v7;
          goto LABEL_48;
        }
      }
      else if ( v5 >= 422 )
      {
        if ( v5 == 422 )
        {
          v8 = 121;
          v9 = v6 + 84 + v7;
          goto LABEL_48;
        }
        if ( v5 == 423 )
        {
          v8 = 121;
          v9 = v6 + 88 + v7;
          goto LABEL_48;
        }
      }
    }
    goto LABEL_47;
  }
  if ( v5 < 421 )
  {
    if ( v5 > 351 )
    {
      if ( v5 > 386 )
      {
        if ( v5 <= 413 && v5 >= 412 )
        {
          if ( v5 == 412 )
          {
            v8 = 121;
            v9 = (v6 >> 1) + 72 + 2 * v7;
            goto LABEL_48;
          }
          if ( v5 == 413 )
          {
            v8 = 121;
            v9 = (v6 >> 1) + 78 + 2 * v7;
            goto LABEL_48;
          }
        }
      }
      else if ( v5 == 386 )
      {
        v8 = 121;
        v9 = (v6 >> 1) + 2 * v7;
        goto LABEL_48;
      }
    }
    else
    {
      if ( v5 >= 351 )
      {
        v8 = 121;
        v9 = v7 + 2 * v6 + 64;
        goto LABEL_48;
      }
      if ( v5 == 201 )
      {
        v8 = 121;
        v9 = (v6 >> 1) + 8 + 2 * v7;
        goto LABEL_48;
      }
    }
LABEL_47:
    v8 = 5;
    v9 = v6 + 4 * v5 + (v4 != 1);
    goto LABEL_48;
  }
  v8 = 121;
  v9 = v6 + 92 + v7;
LABEL_48:
  LoadFromNARC((int)&v11, v8, v9);
  return v11;
}

//----- (020767BC) --------------------------------------------------------
int __fastcall Function_20767bc(int a1, int a2, uint a3, uint a4)
{
  int v4
  int v5
  uint v6
  uint v7
  int v8
  int v9
  uchar v11
  uint v12

  v12 = a4;
  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = Function_20761e8(a1, a4);
  if ( v5 <= 421 )
  {
    if ( v5 >= 421 )
    {
      v8 = 168;
      v9 = v6 + 92 + v7;
      goto LABEL_54;
    }
    if ( v5 > 351 )
    {
      if ( v5 > 386 )
      {
        if ( v5 <= 413 && v5 >= 412 )
        {
          if ( v5 == 412 )
          {
            v8 = 168;
            v9 = (v6 >> 1) + 72 + 2 * v7;
            goto LABEL_54;
          }
          if ( v5 == 413 )
          {
            v8 = 168;
            v9 = (v6 >> 1) + 78 + 2 * v7;
            goto LABEL_54;
          }
        }
      }
      else if ( v5 == 386 )
      {
        v8 = 168;
        v9 = (v6 >> 1) + 2 * v7;
        goto LABEL_54;
      }
    }
    else
    {
      if ( v5 >= 351 )
      {
        v8 = 168;
        v9 = v7 + 2 * v6 + 64;
        goto LABEL_54;
      }
      if ( v5 == 201 )
      {
        v8 = 168;
        v9 = (v6 >> 1) + 8 + 2 * v7;
        goto LABEL_54;
      }
    }
LABEL_53:
    v8 = 167;
    v9 = v6 + 4 * v5 + (v4 != 1);
    goto LABEL_54;
  }
  if ( v5 > 487 )
  {
    if ( v5 > 492 )
    {
      if ( v5 <= 495 && v5 >= 493 )
      {
        switch ( v5 )
        {
          case 493:
            v8 = 168;
            v9 = (v6 >> 1) + 96 + 2 * v7;
            goto LABEL_54;
          case 494:
            v8 = 168;
            v9 = v7 + 132;
            goto LABEL_54;
          case 495:
            v8 = 168;
            v9 = 132;
            goto LABEL_54;
        }
      }
      goto LABEL_53;
    }
    if ( v5 != 492 )
      goto LABEL_53;
    if ( v7 )
    {
      v8 = 121;
      v9 = (v6 >> 1) + 136 + 2 * v7;
    }
    else
    {
      v8 = 167;
      v9 = v6 + 1968 + (v4 != 1);
    }
  }
  else if ( v5 >= 487 )
  {
    if ( v7 )
    {
      v8 = 121;
      v9 = (v6 >> 1) + 152 + 2 * v7;
    }
    else
    {
      v8 = 167;
      v9 = v6 + 4 * v5 + (v4 != 1);
    }
  }
  else
  {
    if ( v5 <= 423 )
    {
      if ( v5 >= 422 )
      {
        if ( v5 == 422 )
        {
          v8 = 168;
          v9 = v6 + 84 + v7;
          goto LABEL_54;
        }
        if ( v5 == 423 )
        {
          v8 = 168;
          v9 = v6 + 88 + v7;
          goto LABEL_54;
        }
      }
      goto LABEL_53;
    }
    if ( v5 != 479 )
      goto LABEL_53;
    if ( v7 )
    {
      v8 = 121;
      v9 = (v6 >> 1) + 140 + 2 * v7;
    }
    else
    {
      v8 = 167;
      v9 = v6 + 1916 + (v4 != 1);
    }
  }
LABEL_54:
  LoadFromNARC((int)&v11, v8, v9);
  return v11;
}

//----- (0207697C) --------------------------------------------------------
int __fastcall Function_207697c(int result, short a2)
{
  short v2

  *(ushort *)result = 60;
  v2 = 2 * a2;
  *(ushort *)(result + 2) = v2;
  *(ushort *)(result + 4) = v2 + 1;
  *(ushort *)(result + 6) = 0;
  *(uchar *)(result + 8) = 0;
  *(uint *)(result + 12) = 0;
  return result;
}

//----- (02076994) --------------------------------------------------------
int *__fastcall Function_2076994(uint *a1, int a2, int a3, int a4, short a5, int a6, int a7, int a8, uint a9)
{
  uint *v9
  int v10
  int v11
  int v12
  int *v13
  int *v14
  char *v15
  int v16
  int v17
  int v18
  int *v19
  int v21
  int v22
  short v23
  int v24
  uint v25
  uint v26
  uint v27
  uint v28
  char v29
  int v30
  int v31
  int v32
  int v33
  int v34
  int v35

  v35 = a4;
  v9 = a1;
  v21 = a2;
  v22 = a3;
  v23 = a4;
  v10 = 1;
  Function_2076aac(a6, a7, &v24);
  if ( a6 == 102 )
    v10 = 2;
  v13 = LoadFromNARC_8(v24, a9, v11, v12);
  Function_200cc3c(v9, v21, (int)v13, v25, 0, 1, a8 + 20015);
  Function_200cdc4(v22, 2u, v9, v21, (int)v13, v26, 0, v10, 1, a8 + 20010);
  Function_200ce24(v9, v21, (int)v13, v27, 0, a8 + 20007);
  Function_200ce54(v9, v21, (int)v13, v28, 0, a8 + 20007);
  Call_FS_CloseFile(v13);
  v14 = Unknown_20f05e4;
  v15 = &v29;
  v16 = 6;
  do
  {
    v17 = *v14;
    v18 = v14[1];
    v14 += 2;
    *(uint *)v15 = v17;
    *((uint *)v15 + 1) = v18;
    v15 += 8;
    --v16;
  }
  while ( v16 );
  *(uint *)v15 = *v14;
  v31 = a8 + 20015;
  v32 = a8 + 20010;
  v33 = a8 + 20007;
  v34 = a8 + 20007;
  v30 = Unknown_20f0588[a8];
  v19 = Function_200ce6c(v9, v21, (short *)&v29);
  Function_2021f24(*v19, 0);
  Function_200d4c4(v19, v23, a5);
  Function_200d330(v19);
  Function_200d390((uint *)v19, 1);
  return v19;
}

//----- (02076AAC) --------------------------------------------------------
int __fastcall Function_2076aac(int a1, int a2, uint *a3)
{
  uint *v3
  int result
  int v5

  v3 = a3;
  if ( a2 == 2 )
  {
    *a3 = 60;
    a3[1] = 5 * a1;
    a3[2] = 5 * a1 + 1;
    a3[3] = 5 * a1 + 2;
    a3[4] = 5 * a1 + 3;
    result = 5 * a1 + 4;
    a3[5] = result;
  }
  else
  {
    *a3 = 6;
    v5 = Function_20788d0(a1);
    v3[1] = 5 * v5;
    v3[2] = 5 * v5 + 1;
    v3[3] = 5 * v5 + 2;
    v3[4] = 5 * v5 + 3;
    result = 5 * v5 + 4;
    v3[5] = result;
  }
  return result;
}

//----- (02076AF0) --------------------------------------------------------
int Get_PkmnData_Size()
{
  return 236;
}

//----- (02076AF4) --------------------------------------------------------
int Function_2076af4()
{
  return 136;
}

//----- (02076AF8) --------------------------------------------------------
int __fastcall Function_2076af8(int a1)
{
  return Function_2076b00(a1);
}

//----- (02076B00) --------------------------------------------------------
int __fastcall Function_2076b00(int a1)
{
  return (uchar)GetBoxPkmnData(a1, 0x70u, 0);
}

//----- (02076B10) --------------------------------------------------------
void Function_2076b10_Dummy()
{
  ;
}

//----- (02076B14) --------------------------------------------------------
int __fastcall Function_2076b14(int *a1, int a2, int a3, int a4)
{
  int *v4
  int v5
  int v6
  int v7
  uint v8
  uint v10
  ushort v11[2]
  uint v12
  int v13

  v13 = a4;
  v4 = a1;
  v5 = (ushort)GetPkmnData(a1, 5u, 0);
  LOBYTE(v11[0]) = GetPkmnData(v4, 0xA1u, 0) + 1;
  v12 = GetPkmnData(v4, 8u, 0);
  v6 = GetPkmnBaseData1(v5, 0x15u);
  v7 = v6;
  v8 = GetDataFromPlGrowTbl(v6, 100);
  if ( v12 > v8 )
  {
    v12 = v8;
    SetPkmnData((int)v4, 8, (ushort *)&v12);
  }
  if ( LOBYTE(v11[0]) > 0x64u )
    return 0;
  v10 = GetDataFromPlGrowTbl(v7, LOBYTE(v11[0]));
  if ( v12 < v10 )
    return 0;
  SetPkmnData((int)v4, 161, v11);
  return 1;
}

//----- (02076B94) --------------------------------------------------------
int __fastcall CheckIfPkmnEvolves(int a1, int *a2, uint a3, int a4, char *a5)
{
  int *v5
  int v6
  uint v7
  char *v8
  int v9
  char v11
  ushort *v12
  int v13
  uint v14
  uint v15
  uint v16
  uint v17
  uint v18
  uint v19
  uint v20
  ushort *v21
  int v22
  int v23
  ushort *v24
  int v25
  int v26
  int v27
  int v28
  int v29
  int v30
  int v31
  int v32
  uint v33
  int v34
  uint v35
  int v36
  uint v37
  char v38

  v5 = a2;
  v26 = a1;
  v6 = 0;
  v7 = a3;
  v27 = a4;
  v8 = a5;
  v36 = (ushort)GetPkmnData(a2, 5u, 0);
  v35 = (ushort)GetPkmnData(v5, 6u, 0);
  v37 = GetPkmnData(v5, 0, 0);
  v30 = (uchar)GetPkmnData(v5, 0x14u, 0);
  v9 = (uchar)GetItemData(v35, 1u, 0);
  if ( v36 != 64 && v9 == 64 && v7 != 3 )
    return 0;
  if ( !a5 )
    v8 = &v38;
  v32 = malloc(0, 42);
  v11 = LoadFromNARC_Evo(v36, v32);
  if ( v7 <= 3 )
    JUMPOUT(__CS__, (char *)&off_2076C3A + *((short *)&off_2076C3A + v7) + 2);
  switch ( v11 )
  {
    case 0:
      v31 = (uchar)GetPkmnData(v5, 0xA1u, 0);
      v33 = (ushort)GetPkmnData(v5, 9u, 0);
      v34 = 0;
      v12 = (ushort *)v32;
      s32_div_f((ushort)((v37 & 0xFFFF0000) >> 16) >> 8, 10);
      v28 = v13;
      do
      {
        v14 = *v12;
        if ( v14 <= 0x1A )
          JUMPOUT(__CS__, (char *)&off_2076C86 + *((short *)&off_2076C86 + v14) + 2);
        switch ( (uchar)v13 )
        {
          case 1:
            if ( v33 >= 0xDC )
            {
              v6 = v12[2];
              *(uint *)v8 = 1;
            }
            break;
          case 2:
            if ( !Function_2013948() && v33 >= 0xDC )
            {
              v6 = v12[2];
              *(uint *)v8 = 2;
            }
            break;
          case 3:
            if ( Function_2013948() == 1 && v33 >= 0xDC )
            {
              v6 = v12[2];
              *(uint *)v8 = 3;
            }
            break;
          case 4:
            v13 = v12[1];
            if ( v13 <= v31 )
            {
              v6 = v12[2];
              *(uint *)v8 = 4;
            }
            break;
          case 8:
            v13 = v12[1];
            if ( v13 <= v31 )
            {
              v15 = GetPkmnData(v5, 0xA5u, 0);
              v16 = GetPkmnData(v5, 0xA6u, 0);
              LOBYTE(v13) = v15;
              if ( v15 > v16 )
              {
                v6 = v12[2];
                *(uint *)v8 = 8;
              }
            }
            break;
          case 9:
            v13 = v12[1];
            if ( v13 <= v31 )
            {
              v17 = GetPkmnData(v5, 0xA5u, 0);
              v18 = GetPkmnData(v5, 0xA6u, 0);
              LOBYTE(v13) = v17;
              if ( v17 == v18 )
              {
                v6 = v12[2];
                *(uint *)v8 = 9;
              }
            }
            break;
          case 0xA:
            v13 = v12[1];
            if ( v13 <= v31 )
            {
              v19 = GetPkmnData(v5, 0xA5u, 0);
              v20 = GetPkmnData(v5, 0xA6u, 0);
              LOBYTE(v13) = v19;
              if ( v19 < v20 )
              {
                v6 = v12[2];
                *(uint *)v8 = 10;
              }
            }
            break;
          case 0xB:
            v13 = v12[1];
            if ( v13 <= v31 && v28 < 5 )
            {
              v6 = v12[2];
              *(uint *)v8 = 11;
            }
            break;
          case 0xC:
            v13 = v12[1];
            if ( v13 <= v31 && v28 >= 5 )
            {
              v6 = v12[2];
              *(uint *)v8 = 12;
            }
            break;
          case 0xD:
            v13 = v12[1];
            if ( v13 <= v31 )
            {
              v6 = v12[2];
              *(uint *)v8 = 13;
            }
            break;
          case 0xE:
            *(uint *)v8 = 14;
            break;
          case 0xF:
            v13 = v12[1];
            if ( v13 <= v30 )
            {
              v6 = v12[2];
              *(uint *)v8 = 15;
            }
            break;
          case 0x12:
            if ( !Function_2013948() )
            {
              v13 = v12[1];
              if ( v35 == v13 )
              {
                v6 = v12[2];
                *(uint *)v8 = 18;
              }
            }
            break;
          case 0x13:
            if ( Function_2013948() == 1 )
            {
              v13 = v12[1];
              if ( v35 == v13 )
              {
                v6 = v12[2];
                *(uint *)v8 = 19;
              }
            }
            break;
          case 0x14:
            if ( Function_207749c(v5, v12[1]) == 1 )
            {
              v6 = v12[2];
              *(uint *)v8 = 20;
            }
            break;
          case 0x15:
            if ( v26 && IsFirstPkmnInPartyWantedSpecies(v26, v12[1]) == 1 )
            {
              v6 = v12[2];
              *(uint *)v8 = 21;
            }
            break;
          case 0x16:
            if ( !GetPkmnData(v5, 0x6Fu, 0) )
            {
              v13 = v12[1];
              if ( v13 <= v31 )
              {
                v6 = v12[2];
                *(uint *)v8 = 22;
              }
            }
            break;
          case 0x17:
            if ( GetPkmnData(v5, 0x6Fu, 0) == 1 )
            {
              v13 = v12[1];
              if ( v13 <= v31 )
              {
                v6 = v12[2];
                *(uint *)v8 = 23;
              }
            }
            break;
          case 0x18:
            LOBYTE(v13) = v27;
            if ( v27 == v14 )
            {
              v6 = v12[2];
              *(uint *)v8 = 24;
            }
            break;
          case 0x19:
            LOBYTE(v13) = v27;
            if ( v27 == v14 )
            {
              v6 = v12[2];
              *(uint *)v8 = 25;
            }
            break;
          case 0x1A:
            LOBYTE(v13) = v27;
            if ( v27 == v14 )
            {
              v6 = v12[2];
              *(uint *)v8 = 26;
            }
            break;
          default:
            break;
        }
        if ( v6 )
          break;
        v12 += 3;
        ++v34;
      }
      while ( v34 < 7 );
      break;
    case 1:
      v21 = (ushort *)v32;
      v22 = 0;
      do
      {
        v23 = *v21;
        if ( v23 == 5 )
        {
          v6 = v21[2];
          *(uint *)v8 = 5;
        }
        else if ( v23 == 6 && v35 == v21[1] )
        {
          v6 = v21[2];
          *(uint *)v8 = 6;
        }
        if ( v6 )
          break;
        ++v22;
        v21 += 3;
      }
      while ( v22 < 7 );
      break;
    case 2:
    case 3:
      v24 = (ushort *)v32;
      v29 = 0;
      while ( 1 )
      {
        v25 = *v24;
        if ( v25 == 7 && v27 == v24[1] )
        {
          v6 = *(ushort *)(v32 + 6 * v29 + 4);
          *(uint *)v8 = 0;
          goto LABEL_94;
        }
        if ( v25 == 16 && !GetPkmnData(v5, 0x6Fu, 0) && v27 == v24[1] )
        {
          v6 = *(ushort *)(v32 + 6 * v29 + 4);
          *(uint *)v8 = 0;
          goto LABEL_94;
        }
        if ( *v24 == 17 && GetPkmnData(v5, 0x6Fu, 0) == 1 && v27 == v24[1] )
          break;
        v24 += 3;
        if ( ++v29 >= 7 )
          goto LABEL_94;
      }
      v6 = *(ushort *)(v32 + 6 * v29 + 4);
      *(uint *)v8 = 0;
      break;
    default:
      break;
  }
LABEL_94:
  free(v32);
  return v6;
}

//----- (02076F84) --------------------------------------------------------
int __fastcall Function_2076f84(uint a1, int a2, int a3, int a4)
{
  uint v4
  int v5
  int v6
  ushort v8
  int v9[18]
  int v10

  v10 = a4;
  v4 = a1;
  v8 = 0;
  if ( a1 >= 0x1EE )
    ErrorHandler();
  FS_InitFile(v9);
  FS_OpenFile(v9, "poketool/personal/pms.narc", v5, v6);
  FS_SeekFile(v9, 2 * v4, 0);
  FS_ReadFile(v9, (int)&v8, 2);
  FS_CloseFile(v9);
  return v8;
}

//----- (02076FD4) --------------------------------------------------------
int __fastcall Function_2076fd4(int result, int a2, int a3, int a4)
{
  if ( result > 185 )
  {
    if ( result > 226 )
    {
      a2 = 315;
      if ( result > 315 )
      {
        a2 = 358;
        if ( result == 358 )
          return result;
      }
      else if ( result == 315 )
      {
        return result;
      }
      return Function_2076f84(result, a2, a3, a4);
    }
    if ( result >= 226 || result == 202 )
      return result;
    return Function_2076f84(result, a2, a3, a4);
  }
  if ( result < 183 )
  {
    if ( result > 122 )
    {
      if ( result == 143 )
        return result;
      return Function_2076f84(result, a2, a3, a4);
    }
    if ( result >= 122 || result == 113 )
      return result;
    return Function_2076f84(result, a2, a3, a4);
  }
  if ( result != 183 && result != 185 )
    return Function_2076f84(result, a2, a3, a4);
  return result;
}

//----- (02077020) --------------------------------------------------------
int __fastcall InitPkmnMovesFromWotbl(int a1)
{
  ushort *v1
  int v2
  int v3
  int v4
  ushort *v5
  int v6
  short v7
  int v8
  int v9
  int v10
  ushort *v12
  int v13

  v1 = (ushort *)a1;
  v12 = (ushort *)malloc(0, 44);
  v13 = InitEncryptPkmnData_Part1((int)v1);
  v2 = (ushort)GetBoxPkmnData((int)v1, 5u, 0);
  v3 = GetBoxPkmnData((int)v1, 0x70u, 0);
  v4 = (uchar)InitPkmnLevel((int)v1);
  LoadFromNARC_Wotbl(v2, v3, (int)v12);
  if ( *v12 != 0xFFFF )
  {
    v5 = v12;
    v6 = v4 << 9;
    do
    {
      v7 = *v5;
      if ( (ushort)(*v5 & 0xFE00) > v6 )
        break;
      v8 = v7 & 0x1FF;
      if ( AddMoveToPkmnData((int)v1, v8) == 0xFFFF )
        ShiftPkmnMovesOneUp((int)v1, v8, v9, v10);
      ++v5;
    }
    while ( *v5 != 0xFFFF );
  }
  free((int)v12);
  return InitEncryptPkmnData_Part1Again(v1, v13);
}

//----- (020770C4) --------------------------------------------------------
int __fastcall Function_20770c4(int a1, int a2)
{
  int v2
  int v3

  v2 = a2;
  Function_2076b10_Dummy();
  return AddMoveToPkmnData(v3, v2);
}

//----- (020770D4) --------------------------------------------------------
int __fastcall AddMoveToPkmnData(int a1, int a2)
{
  int v2
  ushort *v3
  int v4
  int v5
  int v6
  int v8
  int v9

  v2 = a2;
  v3 = (ushort *)a1;
  v9 = 0xFFFF;
  v4 = 0;
  v8 = InitEncryptPkmnData_Part1(a1);
  while ( 1 )
  {
    v5 = (ushort)GetBoxPkmnData((int)v3, v4 + 54, 0);
    if ( !v5 )
    {
      SetPkmnDataMove((int)v3, v2, (uchar)v4, v6);
      v9 = v2;
      goto LABEL_7;
    }
    if ( v5 == v2 )
      break;
    if ( ++v4 >= 4 )
      goto LABEL_7;
  }
  v9 = 65534;
LABEL_7:
  InitEncryptPkmnData_Part1Again(v3, v8);
  return v9;
}

//----- (02077134) --------------------------------------------------------
int __fastcall Function_2077134(int a1, int a2)
{
  int v2
  int v3
  int v4
  int v5

  v2 = a2;
  Function_2076b10_Dummy();
  return ShiftPkmnMovesOneUp(v3, v2, v4, v5);
}

//----- (02077144) --------------------------------------------------------
int __fastcall ShiftPkmnMovesOneUp(int a1, int a2, int a3, int a4)
{
  ushort *v4
  int v5
  char *v6
  char *v7
  int v8
  int v9
  ushort *v10
  ushort *v11
  int v12
  int v13
  int v15
  char *v16
  ushort *v17
  int v18
  char v19
  char v20
  char v21
  char v22
  char v23
  short v24
  int v25

  v25 = a4;
  v4 = (ushort *)a1;
  v15 = a2;
  v18 = InitEncryptPkmnData_Part1(a1);
  v5 = 0;
  v16 = &v23;
  v6 = &v21;
  v7 = &v19;
  do
  {
    *(ushort *)v16 = GetBoxPkmnData((int)v4, v5 + 55, 0);
    *v6 = GetBoxPkmnData((int)v4, v5 + 59, 0);
    *v7 = GetBoxPkmnData((int)v4, v5++ + 63, 0);
    v16 += 2;
    ++v6;
    ++v7;
  }
  while ( v5 < 3 );
  v24 = v15;
  v22 = LoadMoveData(v15, 5u);
  v9 = 0;
  v20 = 0;
  v17 = (ushort *)&v23;
  v10 = (ushort *)&v21;
  v11 = (ushort *)&v19;
  do
  {
    SetBoxPkmnData((int)v4, v9 + 54, v17, v8);
    SetBoxPkmnData((int)v4, v9 + 58, v10, v12);
    SetBoxPkmnData((int)v4, v9++ + 62, v11, v13);
    ++v17;
    v10 = (ushort *)((char *)v10 + 1);
    v11 = (ushort *)((char *)v11 + 1);
  }
  while ( v9 < 4 );
  return InitEncryptPkmnData_Part1Again(v4, v18);
}

//----- (020771F8) --------------------------------------------------------
int __fastcall SetPkmnDataMoveWithZeroPPUps(int a1, int a2, int a3)
{
  int v3
  int v4
  int v5
  int v7
  uint v8

  v3 = a3;
  v4 = a1;
  v5 = a2;
  Call_SetPkmnDataMove(a1, a2, a3);
  v7 = 0;
  SetPkmnData(v4, v3 + 62, (ushort *)&v7);
  v8 = CalcMovePP(v5, 0);
  return SetPkmnData(v4, v3 + 58, (ushort *)&v8);
}

//----- (02077230) --------------------------------------------------------
uint __fastcall Call_SetPkmnDataMove(int a1, int a2, int a3)
{
  return SetPkmnDataMove(a1, a2, a3, (int)SetPkmnDataMove);
}

//----- (02077238) --------------------------------------------------------
uint __fastcall SetPkmnDataMove(int a1, int a2, int a3, int a4)
{
  int v4
  int v5
  uchar v6
  int v7
  int v9
  int varg_r0
  int varg_r1
  int varg_r2
  int varg_r3

  varg_r0 = a1;
  varg_r1 = a2;
  varg_r2 = a3;
  varg_r3 = a4;
  v9 = a4;
  v4 = a3;
  v5 = a1;
  SetBoxPkmnData(a1, a3 + 54, (ushort *)&varg_r1, a4);
  v6 = GetBoxPkmnData(v5, v4 + 62, 0);
  LOBYTE(v9) = CalcMovePP((ushort)varg_r1, v6);
  return SetBoxPkmnData(v5, v4 + 58, (ushort *)&v9, v7);
}

//----- (0207727C) --------------------------------------------------------
int __fastcall Function_207727c(int *a1, int *a2, ushort *a3)
{
  int *v3
  int *v4
  int v5
  int v6
  int v7
  int v8
  int v9
  int result
  int v11
  int v12
  int v13
  ushort *v14
  int v15

  v3 = a1;
  v4 = a2;
  v14 = a3;
  v15 = 0;
  v5 = malloc(0, 44);
  v6 = (ushort)GetPkmnData(v3, 5u, 0);
  v7 = GetPkmnData(v3, 0x70u, 0);
  v8 = (uchar)GetPkmnData(v3, 0xA1u, 0);
  LoadFromNARC_Wotbl(v6, v7, v5);
  v9 = *(ushort *)(v5 + 2 * *v4);
  if ( v9 == 0xFFFF )
  {
    free(v5);
    result = 0;
  }
  else
  {
    v11 = v9 & 0xFE00;
    v12 = v8 << 9;
    if ( v12 == v11 )
    {
LABEL_7:
      if ( v12 == v11 )
      {
        *v14 = v9 & 0x1FF;
        ++*v4;
        v15 = Function_20770c4((int)v3, (ushort)*v14);
      }
      free(v5);
      result = v15;
    }
    else
    {
      while ( 1 )
      {
        v13 = *v4 + 1;
        *v4 = v13;
        v9 = *(ushort *)(v5 + 2 * v13);
        if ( v9 == 0xFFFF )
          break;
        v11 = v9 & 0xFE00;
        if ( v12 == v11 )
          goto LABEL_7;
      }
      free(v5);
      result = 0;
    }
  }
  return result;
}

//----- (02077344) --------------------------------------------------------
uint __fastcall Function_2077344(int a1, int a2, int a3)
{
  return Function_207734c(a1, a2, a3);
}

//----- (0207734C) --------------------------------------------------------
uint __fastcall Function_207734c(int a1, int a2, int a3)
{
  int v3
  int v4
  int v5
  int v6
  int v7
  int v8
  int v9
  int v10
  int v11
  char v13
  char v14
  char v15
  char v16
  short v17
  short v18

  v3 = a2;
  v4 = a3;
  v5 = a1;
  v17 = GetBoxPkmnData(a1, a2 + 54, 0);
  v15 = GetBoxPkmnData(v5, v3 + 58, 0);
  v13 = GetBoxPkmnData(v5, v3 + 62, 0);
  v18 = GetBoxPkmnData(v5, v4 + 54, 0);
  v16 = GetBoxPkmnData(v5, v4 + 58, 0);
  v14 = GetBoxPkmnData(v5, v4 + 62, 0);
  SetBoxPkmnData(v5, v3 + 54, (ushort *)&v18, v6);
  SetBoxPkmnData(v5, v3 + 58, (ushort *)&v16, v7);
  SetBoxPkmnData(v5, v3 + 62, (ushort *)&v14, v8);
  SetBoxPkmnData(v5, v4 + 54, (ushort *)&v17, v9);
  SetBoxPkmnData(v5, v4 + 58, (ushort *)&v15, v10);
  return SetBoxPkmnData(v5, v4 + 62, (ushort *)&v13, v11);
}

//----- (02077408) --------------------------------------------------------
int __fastcall Function_2077408(int *a1, uint a2, int a3, int a4)
{
  uint v4
  int *i
  int v7

  v7 = a4;
  v4 = a2;
  for ( i = a1; v4 < 3; ++v4 )
  {
    HIWORD(v7) = GetPkmnData(i, v4 + 55, 0);
    BYTE1(v7) = GetPkmnData(i, v4 + 59, 0);
    LOBYTE(v7) = GetPkmnData(i, v4 + 63, 0);
    SetPkmnData((int)i, v4 + 54, (ushort *)&v7 + 1);
    SetPkmnData((int)i, v4 + 58, (ushort *)((char *)&v7 + 1));
    SetPkmnData((int)i, v4 + 62, (ushort *)&v7);
  }
  v7 = 0;
  SetPkmnData((int)i, 57, (ushort *)&v7 + 1);
  SetPkmnData((int)i, 61, (ushort *)((char *)&v7 + 1));
  return SetPkmnData((int)i, 65, (ushort *)&v7);
}

//----- (0207749C) --------------------------------------------------------
BOOL __fastcall Function_207749c(int *a1, int a2)
{
  int v2
  int *v3
  int v4

  v2 = 0;
  v3 = a1;
  v4 = a2;
  do
  {
    if ( v4 == GetPkmnData(v3, v2 + 54, 0) )
      break;
    ++v2;
  }
  while ( v2 < 4 );
  return v2 != 4;
}

//----- (020774C8) --------------------------------------------------------
int __fastcall Function_20774c8(int *a1, uint *a2)
{
  int *v2
  uint *v3
  uint *v4
  int v5
  int v6
  int v7
  short v8
  ushort *v9
  int v11
  char v12

  v2 = a1;
  v3 = a2;
  v11 = 0;
  v4 = a2;
  v5 = 17;
  do
  {
    v6 = *v2;
    v7 = v2[1];
    v2 += 2;
    *v4 = v6;
    v4[1] = v7;
    v4 += 2;
    --v5;
  }
  while ( v5 );
  v8 = *((ushort *)v3 + 2);
  if ( v8 & 2 )
    *((ushort *)v3 + 2) = v8 & 0xFFFE | 1;
  SetPkmnData((int)v3, 160, (ushort *)&v11);
  SetPkmnData((int)v3, 163, (ushort *)&v11);
  SetPkmnData((int)v3, 164, (ushort *)&v11);
  v9 = (ushort *)Function_202818c(0);
  SetPkmnData((int)v3, 170, v9);
  free((int)v9);
  SetPkmnData((int)v3, 162, (ushort *)&v11);
  MIi_CpuClearFast(0, &v12, 0x18u);
  SetPkmnData((int)v3, 171, (ushort *)&v12);
  return Function_207418c(v3);
}

//----- (02077550) --------------------------------------------------------
uint __fastcall Function_2077550(int a1)
{
  int v1
  uint v2
  int i
  int *v4
  uint v5
  uint *v7

  v7 = (uint *)a1;
  v1 = GetNrOfPkmnInParty(a1);
  v2 = 1;
  for ( i = 0; i < v1; ++i )
  {
    v4 = GetAdrOfPkmnInParty(v7, i);
    if ( GetPkmnData(v4, 5u, 0) )
    {
      if ( !GetPkmnData(v4, 0x4Cu, 0) )
      {
        v5 = (uchar)GetPkmnData(v4, 0xA1u, 0);
        if ( v5 > v2 )
          v2 = v5;
      }
    }
  }
  return v2;
}

//----- (020775A4) --------------------------------------------------------
int __fastcall Function_20775a4(int a1, int a2, int a3, int a4)
{
  char v5
  int v6

  v6 = a4;
  LoadFromNARC_3((int)&v5, 109, 0, 2 * a1, 2);
  return *(ushort *)&v5;
}

//----- (020775C4) --------------------------------------------------------
int __fastcall Function_20775c4(uint a1, int a2, int a3, int a4)
{
  ushort v5
  int v6

  v6 = a4;
  v5 = 0;
  if ( a1 <= 0xD2 )
    LoadFromNARC_3((int)&v5, 145, 0, 2 * a1, 2);
  return v5;
}

//----- (020775EC) --------------------------------------------------------
int __fastcall Function_20775ec(int *a1, int *a2)
{
  int *v2
  int *v3
  int v4
  int v5
  int v6
  int result

  v2 = a1;
  v3 = a2;
  v4 = 29;
  do
  {
    v5 = *v2;
    v6 = v2[1];
    v2 += 2;
    *v3 = v5;
    v3[1] = v6;
    v3 += 2;
    --v4;
  }
  while ( v4 );
  result = *v2;
  *v3 = *v2;
  return result;
}

//----- (02077604) --------------------------------------------------------
int __fastcall Function_2077604(int *a1, uint *a2)
{
  int *v2
  uint *v3
  int v4
  int result
  int v6

  v2 = a1;
  v3 = a2;
  v4 = 17;
  do
  {
    result = *v2;
    v6 = v2[1];
    v2 += 2;
    *v3 = result;
    v3[1] = v6;
    v3 += 2;
    --v4;
  }
  while ( v4 );
  return result;
}

//----- (02077618) --------------------------------------------------------
int __fastcall Function_2077618(int *a1, uint *a2)
{
  int *v2
  uint *v3
  int v4
  int result
  int v6

  v2 = a1;
  v3 = a2;
  v4 = 17;
  do
  {
    result = *v2;
    v6 = v2[1];
    v2 += 2;
    *v3 = result;
    v3[1] = v6;
    v3 += 2;
    --v4;
  }
  while ( v4 );
  return result;
}

//----- (0207762C) --------------------------------------------------------
int __fastcall Call_GetPkmnNatureData(int a1, int a2)
{
  return GetPkmnNatureData(a1, a2);
}

//----- (02077634) --------------------------------------------------------
int __fastcall GetPkmnNatureData(int a1, int a2)
{
  int v2
  int v3

  v2 = a2;
  v3 = GetBoxPkmnData(a1, 0, 0);
  return CalcPkmnNatureData(v3, v2);
}

//----- (02077648) --------------------------------------------------------
int __fastcall CalcPkmnNatureData(int a1, int a2)
{
  return *(char *)(a2 + 5 * PkmnData_DivBy25(a1) + 34539157);
}

//----- (02077660) --------------------------------------------------------
int __fastcall Function_2077660(int a1, int a2, ushort *a3)
{
  int v3
  int v4
  ushort *v5
  ushort *v6
  int v7
  ushort *v8
  short v9

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = (ushort *)malloc(0, 44);
  LoadFromNARC_Wotbl(v3, v4, (int)v6);
  v7 = 0;
  if ( *v6 != 0xFFFF )
  {
    v8 = v6;
    do
    {
      v9 = *v8;
      ++v8;
      ++v7;
      *v5 = v9 & 0x1FF;
      ++v5;
    }
    while ( *v8 != 0xFFFF );
  }
  free((int)v6);
  return v7;
}

//----- (020776B0) --------------------------------------------------------
uint __fastcall Function_20776b0(int a1, int a2, int a3, int a4)
{
  uint *v4
  int v5
  uint result
  uint v7
  int v8
  int v9
  int *v10
  uchar v11
  int v12

  v12 = a4;
  v4 = (uint *)a1;
  v5 = GetNrOfPkmnInParty(a1);
  result = PRNG();
  if ( result == 0x4000 || result == 0x8000 || result == 49152 )
  {
    do
    {
      do
      {
        v7 = PRNG();
        s32_div_f(v7, v5);
        v9 = v8;
        v10 = GetAdrOfPkmnInParty(v4, v8);
      }
      while ( !GetPkmnData(v10, 5u, 0) );
    }
    while ( GetPkmnData(v10, 0x4Cu, 0) );
    v11 = Function_20787cc(v9);
    result = Function_2077758(v4, v11);
    if ( !result )
    {
      do
        LOBYTE(v12) = PRNG();
      while ( !(v12 & 7) );
      if ( v12 & 0xF0 )
        LOBYTE(v12) = v12 & 7;
      LOBYTE(v12) = 16 * v12 | v12;
      LOBYTE(v12) = v12 & 0xF3;
      LOBYTE(v12) = v12 + 1;
      result = SetPkmnData((int)v10, 154, (ushort *)&v12);
    }
  }
  return result;
}

//----- (02077758) --------------------------------------------------------
int __fastcall Function_2077758(uint *a1, uint a2)
{
  int v2
  uint v3
  int v4
  int v5
  int *v6
  int *v7
  uint *v9

  v2 = 0;
  v3 = a2;
  v9 = a1;
  v4 = 1;
  v5 = 0;
  if ( a2 )
  {
    do
    {
      if ( v3 & 1 )
      {
        v6 = GetAdrOfPkmnInParty(v9, v2);
        if ( GetPkmnData(v6, 0x9Au, 0) )
          v5 = (v5 | v4) & 0xFF;
      }
      ++v2;
      v4 *= 2;
      v3 = v3 << 23 >> 24;
    }
    while ( v3 );
  }
  else
  {
    v7 = GetAdrOfPkmnInParty(a1, 0);
    if ( GetPkmnData(v7, 0x9Au, 0) )
      v5 = 1;
  }
  return v5;
}

//----- (020777B4) --------------------------------------------------------
int __fastcall Function_20777b4(int a1, int a2)
{
  int v2
  int result
  int v4
  int *v5
  uint *v6
  int i
  char v8

  v6 = (uint *)a1;
  v2 = a2;
  result = GetNrOfPkmnInParty(a1);
  v4 = 0;
  for ( i = result; v4 < i; ++v4 )
  {
    v5 = GetAdrOfPkmnInParty(v6, v4);
    if ( GetPkmnData(v5, 5u, 0) )
    {
      v8 = GetPkmnData(v5, 0x9Au, 0);
      if ( v8 & 0xF )
      {
        if ( (v8 & 0xF) >= v2 && v2 <= 4 )
          v8 -= v2;
        else
          v8 &= 0xF0u;
        if ( !v8 )
          v8 = 16;
        SetPkmnData((int)v5, 154, (ushort *)&v8);
      }
    }
    result = i;
  }
  return result;
}

//----- (0207782C) --------------------------------------------------------
int __fastcall Function_207782c(int a1, int a2, int a3, int a4)
{
  uint *v4
  int v5
  uint v6
  int result
  int v8
  int i
  int *v10
  int *v11
  char v12
  char v13
  int *v14
  int *v15
  int v16
  ushort v17[2]
  int v18

  v18 = a4;
  v4 = (uint *)a1;
  v5 = GetNrOfPkmnInParty(a1);
  v6 = PRNG();
  result = s32_div_f(v6, 3);
  if ( !v8 )
  {
    for ( i = 0; i < v5; ++i )
    {
      v10 = GetAdrOfPkmnInParty(v4, i);
      v11 = v10;
      result = GetPkmnData(v10, 5u, 0);
      if ( result )
      {
        v12 = GetPkmnData(v11, 0x9Au, 0);
        LOBYTE(v17[0]) = v12;
        v13 = v12;
        result = 15;
        if ( v13 & 0xF )
        {
          if ( i )
          {
            v14 = GetAdrOfPkmnInParty(v4, i - 1);
            if ( !(GetPkmnData(v14, 0x9Au, 0) & 0xF0) )
              SetPkmnData((int)v14, 154, v17);
          }
          result = v5 - 1;
          if ( i < v5 - 1 )
          {
            v15 = GetAdrOfPkmnInParty(v4, i + 1);
            v16 = (int)v15;
            result = GetPkmnData(v15, 0x9Au, 0);
            if ( !(result & 0xF0) )
            {
              result = SetPkmnData(v16, 154, v17);
              ++i;
            }
          }
        }
      }
    }
  }
  return result;
}

//----- (020778D8) --------------------------------------------------------
BOOL __fastcall Function_20778d8(int a1)
{
  return Function_20778e0(a1);
}

//----- (020778E0) --------------------------------------------------------
BOOL __fastcall Function_20778e0(int a1)
{
  return (GetBoxPkmnData(a1, 0x9Au, 0) & 0xF) != 0;
}

//----- (020778F8) --------------------------------------------------------
BOOL __fastcall Function_20778f8(int a1)
{
  return Function_2077900(a1);
}

//----- (02077900) --------------------------------------------------------
BOOL __fastcall Function_2077900(int a1)
{
  char v1
  BOOL result

  v1 = GetBoxPkmnData(a1, 0x9Au, 0);
  if ( v1 & 0xF )
    result = 0;
  else
    result = (uchar)(v1 & 0xF0) != 0;
  return result;
}

//----- (02077928) --------------------------------------------------------
uint __fastcall Function_2077928(int a1, int a2, int a3)
{
  return Function_2077930(a1, a2, a3, (int)Function_2077930);
}

//----- (02077930) --------------------------------------------------------
uint __fastcall Function_2077930(int a1, int a2, int a3, int a4)
{
  int v4
  uint v5
  uint v6
  uint result
  ushort v8
  int v9
  int v10
  int v11

  v11 = a4;
  v4 = a1;
  v5 = GetBoxPkmnData(a1, 5u, 0);
  v6 = GetBoxPkmnData(v4, 0xAu, 0);
  result = GetBoxPkmnData(v4, 6u, 0);
  if ( v5 == 493 && v6 == 121 )
  {
    v8 = GetItemData((ushort)result, 1u, 0);
    v10 = Function_2077988(v8);
    result = SetBoxPkmnData(v4, 0x70u, (ushort *)&v10, v9);
  }
  return result;
}

//----- (02077988) --------------------------------------------------------
int __fastcall Function_2077988(int a1)
{
  int result

  switch ( (uchar)a1 )
  {
    case 0x7E:
      result = 10;
      break;
    case 0x7F:
      result = 11;
      break;
    case 0x80:
      result = 13;
      break;
    case 0x81:
      result = 12;
      break;
    case 0x82:
      result = 15;
      break;
    case 0x83:
      result = 1;
      break;
    case 0x84:
      result = 3;
      break;
    case 0x85:
      result = 4;
      break;
    case 0x86:
      result = 2;
      break;
    case 0x87:
      result = 14;
      break;
    case 0x88:
      result = 6;
      break;
    case 0x89:
      result = 5;
      break;
    case 0x8A:
      result = 7;
      break;
    case 0x8B:
      result = 16;
      break;
    case 0x8C:
      result = 17;
      break;
    case 0x8D:
      result = 8;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

//----- (02077A00) --------------------------------------------------------
int __fastcall Function_2077a00(int a1, int a2, int a3, BOOL a4)
{
  int *v4
  int v5

  v4 = (int *)a1;
  v5 = Function_2077a1c(a1, a2, a3, a4);
  if ( v5 != -1 )
    Function_207418c(v4);
  return v5;
}

//----- (02077A1C) --------------------------------------------------------
int __fastcall Function_2077a1c(int a1, int a2, int a3, BOOL a4)
{
  int v4
  uint v5
  uint v6
  int v7
  BOOL v9

  v9 = a4;
  v4 = a1;
  v5 = GetBoxPkmnData(a1, 5u, 0);
  v6 = GetBoxPkmnData(v4, 6u, 0);
  if ( v5 != 487 )
    return -1;
  v9 = v6 == 112;
  SetBoxPkmnData(v4, 0x70u, (ushort *)&v9, v7);
  SetPkmnAbility(v4);
  return v9;
}

//----- (02077A64) --------------------------------------------------------
int __fastcall Function_2077a64(int *a1, int a2, int a3, int a4)
{
  int *v4
  int result
  int v6
  int v7
  int v8

  v8 = a4;
  v7 = 1;
  v4 = a1;
  result = GetPkmnData(a1, 5u, 0);
  if ( result == 487 )
  {
    SetBoxPkmnData((int)v4, 0x70u, (ushort *)&v7, v6);
    SetPkmnAbility((int)v4);
    result = Function_207418c(v4);
  }
  return result;
}

//----- (02077A9C) --------------------------------------------------------
int __fastcall Function_2077a9c(int a1, int a2)
{
  uint *v2
  int v3
  int result
  int v5
  int i
  int *v7
  int v8
  int v9
  int v10

  v2 = (uint *)a1;
  v3 = a2;
  result = GetNrOfPkmnInParty(a1);
  v5 = result;
  for ( i = 0; i < v5; ++i )
  {
    v7 = GetAdrOfPkmnInParty(v2, i);
    if ( v3 )
      result = Function_2077a64(v7, v8, v9, v10);
    else
      result = Function_2077a00((int)v7, v8, v9, v10);
  }
  return result;
}

//----- (02077ACC) --------------------------------------------------------
int __fastcall Function_2077acc(int a1, int a2, int a3, int a4)
{
  int *v4

  v4 = (int *)a1;
  Function_2077adc(a1, a2, a3, a4);
  return Function_207418c(v4);
}

//----- (02077ADC) --------------------------------------------------------
int __fastcall Function_2077adc(int a1, int a2, int a3, int a4)
{
  int v4
  int result
  int v6
  int varg_r1
  int varg_r2
  int varg_r3

  varg_r1 = a2;
  varg_r2 = a3;
  varg_r3 = a4;
  v4 = a1;
  result = GetBoxPkmnData(a1, 5u, 0);
  if ( result == 492 )
  {
    if ( varg_r1 > 1 )
      ErrorHandler();
    SetBoxPkmnData(v4, 0x70u, (ushort *)&varg_r1, v6);
    result = SetPkmnAbility(v4);
  }
  return result;
}

//----- (02077B14) --------------------------------------------------------
BOOL __fastcall Function_2077b14(int *a1, int a2, int a3, int a4)
{
  int *v4
  uint v5
  uint v6
  char v7
  uint v8
  uint v10
  uint v11
  int v12

  v12 = a4;
  v4 = a1;
  v5 = GetPkmnData(a1, 5u, 0);
  v6 = GetPkmnData(v4, 0x70u, 0);
  v7 = GetPkmnData(v4, 0xA0u, 0);
  v10 = GetPkmnData(v4, 0xA3u, 0);
  v8 = GetPkmnData(v4, 0x6Eu, 0);
  Function_2013880(&v11);
  return v5 == 492 && !v6 && v10 && v8 == 1 && !(v7 & 0x20) && v11 >= 4 && v11 < 0x14;
}

//----- (02077B8C) --------------------------------------------------------
int __fastcall Function_2077b8c(int a1)
{
  int result
  int v2
  int i
  int *v4
  uint v5
  int v6
  int v7
  uint *v8

  v8 = (uint *)a1;
  result = GetNrOfPkmnInParty(a1);
  v2 = result;
  for ( i = 0; i < v2; ++i )
  {
    v4 = GetAdrOfPkmnInParty(v8, i);
    v5 = GetPkmnData(v4, 5u, 0);
    result = GetPkmnData(v4, 0x70u, 0);
    if ( v5 == 492 && result == 1 )
      result = Function_2077acc((int)v4, 0, v6, v7);
  }
  return result;
}

//----- (02077BD8) --------------------------------------------------------
int __fastcall Function_2077bd8(int a1, int a2, int *a3)
{
  int v3
  int result

  v3 = *a3;
  if ( (uint)*a3 < 0x14 && (uint)v3 >= 4 )
  {
    if ( a3[1] + 60 * (v3 - 4) >= a2 )
    {
      result = 0;
    }
    else
    {
      Function_2077b8c(a1);
      result = 1;
    }
  }
  else
  {
    if ( v3 < 4 )
      v3 += 24;
    if ( a3[1] + 60 * (v3 - 20) >= a2 + 1 )
    {
      result = 0;
    }
    else
    {
      Function_2077b8c(a1);
      result = 1;
    }
  }
  return result;
}

//----- (02077C20) --------------------------------------------------------
int __fastcall Function_2077c20(int *a1, int a2, int a3, int a4)
{
  int *v4
  int v6
  int v7
  int v8
  short *v9
  uint v10
  int v11
  uchar v12
  int varg_r1
  int varg_r2
  int varg_r3

  varg_r1 = a2;
  varg_r2 = a3;
  varg_r3 = a4;
  v12 = a3;
  v4 = a1;
  if ( GetPkmnData(a1, 5u, 0) != 479 )
    return 0;
  GetPkmnData(v4, 0x70u, 0);
  v6 = 0;
  v7 = *(ushort *)&Unknown_20f057c[2 * varg_r1];
  do
  {
    v8 = GetPkmnData(v4, v6 + 54, 0);
    v9 = &Unknown_20f057e;
    v10 = 1;
    while ( !v8 || v8 != (ushort)*v9 )
    {
      ++v10;
      ++v9;
      if ( v10 >= 6 )
        goto LABEL_11;
    }
    if ( v7 )
    {
      SetPkmnDataMoveWithZeroPPUps((int)v4, (ushort)v7, (uchar)v6);
      v7 = 0;
    }
    else
    {
      Function_2077408(v4, v6--, v8, (int)v9);
    }
LABEL_11:
    ++v6;
  }
  while ( v6 < 4 );
  if ( v7 )
  {
    v11 = 0;
    while ( GetPkmnData(v4, v11 + 54, 0) )
    {
      if ( ++v11 >= 4 )
        goto LABEL_17;
    }
    SetPkmnDataMoveWithZeroPPUps((int)v4, (ushort)v7, (uchar)v11);
LABEL_17:
    if ( v11 == 4 )
      SetPkmnDataMoveWithZeroPPUps((int)v4, (ushort)v7, v12);
  }
  if ( !GetPkmnData(v4, 0x36u, 0) )
    SetPkmnDataMoveWithZeroPPUps((int)v4, 84, 0);
  SetPkmnData((int)v4, 112, (ushort *)&varg_r1);
  Call_SetPkmnAbility((int)v4);
  Function_207418c(v4);
  return 1;
}

//----- (02077D28) --------------------------------------------------------
int __fastcall LoadFromNARC_Wotbl(int a1, int a2, int a3)
{
  int v3
  int v4

  v3 = a3;
  v4 = Function_2078740(a1, a2);
  return LoadFromNARC(v3, 33, v4);
}

//----- (02077D3C) --------------------------------------------------------
int __fastcall Function_2077d3c(int a1, uint a2, uint a3, uchar a4, int a5, uint a6, int a7, int a8)
{
  int v8
  uint v9
  uint v10
  uchar v11
  int result

  v8 = a1;
  v9 = a3;
  v10 = a2;
  v11 = a4;
  if ( a3 != 441 )
    return Function_20059d0(a2, a3, a5, a6, a8, a4);
  if ( Function_20064c8(a2) )
  {
    if ( a7 )
      Function_20063d4(1);
    result = Function_20063e4(v8, 0, a6, a5);
  }
  else
  {
    Function_20063d4(1);
    result = Function_20059d0(v10, v9, a5, a6, a8, v11);
  }
  return result;
}

//----- (02077DB4) --------------------------------------------------------
int __fastcall Function_2077db4(int a1, uint a2, int a3, uchar a4, int a5, uint a6, int a7, int a8, uchar a9)
{
  int v9
  int v10
  uint v11
  uchar v12
  int result

  v9 = a1;
  v10 = a3;
  v11 = a2;
  v12 = a4;
  if ( a3 != 441 )
    return Function_2005f4c(a2, a3, a5, a6, a8, a9, a4);
  if ( Function_20064c8(a2) )
  {
    if ( a7 )
      Function_20063d4(1);
    result = Function_2006438(v9, 0, a6, a5, a9);
  }
  else
  {
    Function_20063d4(1);
    result = Function_2005f4c(v11, v10, a5, a6, a8, a9, v12);
  }
  return result;
}

//----- (02077E3C) --------------------------------------------------------
int __fastcall Function_2077e3c(int *a1)
{
  int *v1
  ushort v2
  uchar v3

  v1 = a1;
  v2 = GetPkmnData(a1, 5u, 0);
  v3 = GetPkmnData(v1, 0x70u, 0);
  return Function_2005844(v2, v3);
}

//----- (02077E64) --------------------------------------------------------
uint __fastcall InitMetDataOTIDHPStatus(int a1, int a2, int a3, int a4)
{
  int *v4
  int v5
  uint result
  uint v7
  int v8

  v8 = a4;
  v4 = (int *)a1;
  v5 = a3;
  result = SetPkmnDateMetOTIDOriginGamePokeballEncounterType(a1, a2);
  if ( v5 == 14 )
  {
    v7 = GetPkmnData(v4, 0xA4u, 0);
    SetPkmnData((int)v4, 163, (ushort *)&v7);
    v7 = 0;
    result = SetPkmnData((int)v4, 160, (ushort *)&v7);
  }
  return result;
}

//----- (02077EA4) --------------------------------------------------------
uint SetPkmnDateMetOTIDOriginGamePokeballEncounterType(int a1, int a2, ...)
{
  int v2
  int v3
  int v4
  int v5
  int varg_r2
  va_list varg_r2a
  int varg_r3
  void *v10
  va_list va1
  uint v12
  va_list va2

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(varg_r2a, a2);
  varg_r2 = va_arg(va1, uint);
  varg_r3 = va_arg(va1, uint);
  va_copy(va2, va1);
  v10 = va_arg(va2, void *);
  v12 = va_arg(va2, uint);
  v2 = a1;
  SetPkmnDataDateMetAndOTID(a1, a2, 0, varg_r3, v12);
  SetBoxPkmnData(v2, 0x7Au, (ushort *)&GameIDNr, v3);
  SetBoxPkmnData(v2, 0x9Bu, (ushort *)varg_r2a, v4);
  return SetBoxPkmnData(v2, 0x9Eu, (ushort *)va1, v5);
}

//----- (02077EE4) --------------------------------------------------------
uint __fastcall Function_2077ee4(int a1, int a2)
{
  return Function_2077ef8(a1, a2);
}

//----- (02077EF8) --------------------------------------------------------
uint __fastcall Function_2077ef8(int a1, int a2)
{
  return SetPkmnDateMetOTIDOriginGamePokeballEncounterType(a1, a2);
}

//----- (02077F0C) --------------------------------------------------------
uint __fastcall Function_2077f0c(int *a1, char a2, int a3, int a4)
{
  int *v4
  uint result
  int v6
  uint v7
  uint v8
  uint v9
  int v10
  int v11
  short v12
  short v13
  int v14

  v14 = a4;
  v4 = a1;
  result = 129;
  v6 = a3;
  if ( !(a2 & 0x81) )
  {
    v7 = PRNG();
    s32_div_f(v7, 100);
    v9 = v8;
    v10 = (ushort)GetPkmnData(v4, 5u, 0);
    v11 = (ushort)GetPkmnData(v4, 0x70u, 0);
    v13 = GetPkmnBaseData2(v10, v11, 0x10u);
    v12 = GetPkmnBaseData2(v10, v11, 0x11u);
    if ( v13 == v12 && v13 )
    {
      result = SetPkmnData((int)v4, 6, (ushort *)&v13);
    }
    else
    {
      result = LOWORD(Unknown_20f0574[v6]);
      if ( v9 >= result )
      {
        if ( v9 >= HIWORD(Unknown_20f0574[v6]) )
          result = SetPkmnData((int)v4, 6, (ushort *)&v12);
        else
          result = SetPkmnData((int)v4, 6, (ushort *)&v13);
      }
    }
  }
  return result;
}

//----- (02077FB4) --------------------------------------------------------
BOOL __fastcall Function_2077fb4(int a1, uint a2)
{
  return Function_2077fbc(a1, a2);
}

//----- (02077FBC) --------------------------------------------------------
BOOL __fastcall Function_2077fbc(int a1, uint a2)
{
  uint v2
  int v3
  int v4
  int v5

  v2 = a2;
  v3 = a1;
  v4 = (ushort)GetBoxPkmnData(a1, 0xAEu, 0);
  v5 = GetBoxPkmnData(v3, 0x70u, 0);
  return Function_2077fe4(v4, v5, v2);
}

//----- (02077FE4) --------------------------------------------------------
BOOL __fastcall Function_2077fe4(int a1, int a2, uint a3)
{
  int v4
  uint v5

  if ( a1 == 494 )
    return 0;
  if ( a3 >= 0x20 )
  {
    if ( a3 >= 0x40 )
    {
      if ( a3 >= 0x60 )
      {
        v4 = 1 << (a3 - 96);
        v5 = 32;
      }
      else
      {
        v4 = 1 << (a3 - 64);
        v5 = 31;
      }
    }
    else
    {
      v4 = 1 << (a3 - 32);
      v5 = 30;
    }
  }
  else
  {
    v4 = 1 << a3;
    v5 = 29;
  }
  return (GetPkmnBaseData2(a1, a2, v5) & v4) != 0;
}

//----- (0207803C) --------------------------------------------------------
int __fastcall Call_SetPkmnAbility(int a1)
{
  return SetPkmnAbility(a1);
}

//----- (02078044) --------------------------------------------------------
int __fastcall SetPkmnAbility(int a1)
{
  ushort *v1
  int v2
  int v3
  char v4
  int v5
  int v6
  uint v8
  uint v9

  v1 = (ushort *)a1;
  v2 = InitEncryptPkmnData_Part1(a1);
  v3 = GetBoxPkmnData((int)v1, 5u, 0);
  v4 = GetBoxPkmnData((int)v1, 0, 0);
  v5 = GetBoxPkmnData((int)v1, 0x70u, 0);
  v9 = GetPkmnBaseData2(v3, v5, 0x18u);
  v8 = GetPkmnBaseData2(v3, v5, 0x19u);
  if ( v8 )
  {
    if ( v4 & 1 )
      SetBoxPkmnData((int)v1, 0xAu, (ushort *)&v8, v6);
    else
      SetBoxPkmnData((int)v1, 0xAu, (ushort *)&v9, v6);
  }
  else
  {
    SetBoxPkmnData((int)v1, 0xAu, (ushort *)&v9, v6);
  }
  return InitEncryptPkmnData_Part1Again(v1, v2);
}

//----- (020780C4) --------------------------------------------------------
int __fastcall CopyPkmnData(int a1, int a2)
{
  int v2
  int v3
  int *v4
  int *v5
  int *v6
  uint *v7
  uint *v8
  uint *v9
  int v10
  int v11
  int v12
  int v13
  int v14
  uint *v15
  int v16
  int v17
  uint *v18
  int v19
  int v20
  int *v21
  int v22
  int v23
  int v24
  uint *v25
  int v26
  int v27
  uint *v28
  int v29
  int v30
  int *v31
  int v32
  int v33
  int v34
  uint *v35
  int v36
  int v37
  uint *v38
  int v39
  int v40
  int *v41
  int v42
  int v43
  short v44
  int v45
  int v46
  int *v48
  short *v49
  ushort *v50

  v2 = a1;
  v3 = a2;
  v48 = AllocPkmnData(0);
  Function_20775ec((int *)v2, v48);
  v4 = (int *)GetPkmnDataBlockAdress((int)v48, *(uint *)v2, 0);
  v5 = (int *)GetPkmnDataBlockAdress((int)v48, *(uint *)v2, 1u);
  v6 = (int *)GetPkmnDataBlockAdress((int)v48, *(uint *)v2, 2u);
  v49 = (short *)GetPkmnDataBlockAdress((int)v48, *(uint *)v2, 3u);
  v7 = (uint *)GetPkmnDataBlockAdress(v2, v3, 0);
  v8 = (uint *)GetPkmnDataBlockAdress(v2, v3, 1u);
  v9 = (uint *)GetPkmnDataBlockAdress(v2, v3, 2u);
  v50 = (ushort *)GetPkmnDataBlockAdress(v2, v3, 3u);
  v10 = *((ushort *)v48 + 3);
  Call_DecryptPkmnData3((int)(v48 + 2), 0x80u);
  v11 = *(uint *)v2;
  Call_DecryptPkmnData3(v2 + 136, 0x64u);
  v12 = *(ushort *)(v2 + 6);
  Call_DecryptPkmnData3(v2 + 8, 0x80u);
  *(uint *)v2 = v3;
  v13 = *v4;
  v14 = v4[1];
  v4 += 2;
  *v7 = v13;
  v7[1] = v14;
  v15 = v7 + 2;
  v16 = *v4;
  v17 = v4[1];
  v4 += 2;
  *v15 = v16;
  v15[1] = v17;
  v18 = v7 + 4;
  v19 = *v4;
  v20 = v4[1];
  v4 += 2;
  *v18 = v19;
  v18[1] = v20;
  v21 = v7 + 6;
  v22 = v4[1];
  *v21 = *v4;
  v21[1] = v22;
  v23 = *v5;
  v24 = v5[1];
  v5 += 2;
  *v8 = v23;
  v8[1] = v24;
  v25 = v8 + 2;
  v26 = *v5;
  v27 = v5[1];
  v5 += 2;
  *v25 = v26;
  v25[1] = v27;
  v28 = v8 + 4;
  v29 = *v5;
  v30 = v5[1];
  v5 += 2;
  *v28 = v29;
  v28[1] = v30;
  v31 = v8 + 6;
  v32 = v5[1];
  *v31 = *v5;
  v31[1] = v32;
  v33 = *v6;
  v34 = v6[1];
  v6 += 2;
  *v9 = v33;
  v9[1] = v34;
  v35 = v9 + 2;
  v36 = *v6;
  v37 = v6[1];
  v6 += 2;
  *v35 = v36;
  v35[1] = v37;
  v38 = v9 + 4;
  v39 = *v6;
  v40 = v6[1];
  v6 += 2;
  *v38 = v39;
  v38[1] = v40;
  v41 = v9 + 6;
  v42 = v6[1];
  *v41 = *v6;
  v41[1] = v42;
  v43 = 16;
  do
  {
    v44 = *v49;
    ++v49;
    *v50 = v44;
    ++v50;
    --v43;
  }
  while ( v43 );
  *(ushort *)(v2 + 6) = CalcPokemonChecksum((ushort *)(v2 + 8), 0x80u);
  v45 = *(ushort *)(v2 + 6);
  Call_DecryptPkmnData2(v2 + 8, 0x80u);
  v46 = *(uint *)v2;
  Call_DecryptPkmnData2(v2 + 136, 0x64u);
  return free((int)v48);
}

//----- (020781F8) --------------------------------------------------------
int __fastcall LoadFromNARC_PlPersonal1(int a1, int a2)
{
  return LoadFromNARC(a2, 2, a1);
}

//----- (02078208) --------------------------------------------------------
int __fastcall LoadFromNARC_PlPersonal2(int a1, int a2, int a3)
{
  int v3
  int v4

  v3 = a3;
  v4 = Function_2078740(a1, a2);
  return LoadFromNARC(v3, 2, v4);
}

//----- (0207821C) --------------------------------------------------------
int __fastcall LoadFromNARC_Evo(int a1, int a2)
{
  return LoadFromNARC(a2, 34, a1);
}

//----- (0207822C) --------------------------------------------------------
int __fastcall Call_DecryptPkmnData2(int result, uint a2)
{
  return DecryptPkmnData(result, a2);
}

//----- (02078234) --------------------------------------------------------
int __fastcall Call_DecryptPkmnData3(int result, uint a2)
{
  return Call_DecryptPkmnData(result, a2);
}

//----- (0207823C) --------------------------------------------------------
int __fastcall CalcPokemonChecksum(ushort *a1, uint a2)
{
  int v2
  uint v3
  uint v4
  int v5

  v2 = 0;
  v3 = 0;
  v4 = a2 >> 1;
  if ( a2 >> 1 )
  {
    do
    {
      v5 = *a1;
      ++v3;
      ++a1;
      v2 = (v2 + v5) & 0xFFFF;
    }
    while ( v3 < v4 );
  }
  return v2;
}

//----- (0207825C) --------------------------------------------------------
int __fastcall GetPkmnDataBlockAdress(int a1, int a2, uint a3)
{
  int v3
  int v4
  int v5
  int v6
  int v7
  int v8
  int v9
  int v10

  switch ( (a2 & 0x3E000u) >> 13 )
  {
    case 0u:
    case 0x18u:
      a1 += 8;
      if ( a3 <= 3 )
        JUMPOUT(__CS__, *((short *)&off_20782CA + a3) + 34046668);
      goto LABEL_3;
    case 1u:
    case 0x19u:
      v3 = a1 + 8;
      switch ( (uchar)a3 )
      {
        case 0:
          a2 = v3;
          break;
        case 1:
          a2 = v3 + 32;
          break;
        case 2:
          a2 = v3 + 96;
          break;
        case 3:
          a2 = v3 + 64;
          break;
        default:
          goto LABEL_35;
      }
      break;
    case 2u:
    case 0x1Au:
      v3 = a1 + 8;
      switch ( (uchar)a3 )
      {
        case 0:
          a2 = v3;
          break;
        case 1:
          a2 = v3 + 64;
          break;
        case 2:
          a2 = v3 + 32;
          break;
        case 3:
          a2 = v3 + 96;
          break;
        default:
          goto LABEL_35;
      }
      break;
    case 3u:
    case 0x1Bu:
      v3 = a1 + 8;
      switch ( (uchar)a3 )
      {
        case 0:
          a2 = v3;
          break;
        case 1:
          a2 = v3 + 96;
          break;
        case 2:
          a2 = v3 + 32;
          break;
        case 3:
          a2 = v3 + 64;
          break;
        default:
          goto LABEL_35;
      }
      break;
    case 4u:
    case 0x1Cu:
      v3 = a1 + 8;
      switch ( (uchar)a3 )
      {
        case 0:
          a2 = v3;
          break;
        case 1:
          a2 = v3 + 64;
          break;
        case 2:
          a2 = v3 + 96;
          break;
        case 3:
          a2 = v3 + 32;
          break;
        default:
          goto LABEL_35;
      }
      break;
    case 5u:
    case 0x1Du:
      v3 = a1 + 8;
      switch ( (uchar)a3 )
      {
        case 0:
          a2 = v3;
          break;
        case 1:
          a2 = v3 + 96;
          break;
        case 2:
          a2 = v3 + 64;
          break;
        case 3:
          a2 = v3 + 32;
          break;
        default:
          goto LABEL_35;
      }
      break;
    case 6u:
    case 0x1Eu:
      v3 = a1 + 8;
      if ( a3 <= 3 )
        JUMPOUT(__CS__, *((short *)&off_20783EC + a3) + 34046958);
LABEL_35:
      switch ( (uchar)a3 )
      {
        case 0:
          a2 = v3 + 32;
          break;
        case 1:
          a2 = v3;
          break;
        case 2:
          a2 = v3 + 64;
          break;
        case 3:
          a2 = v3 + 96;
          break;
        default:
          return a2;
      }
      break;
    case 7u:
    case 0x1Fu:
      v4 = a1 + 8;
      switch ( (uchar)a3 )
      {
        case 0:
          a2 = v4 + 32;
          break;
        case 1:
          a2 = v4;
          break;
        case 2:
          a2 = v4 + 96;
          break;
        case 3:
          a2 = v4 + 64;
          break;
        default:
          goto LABEL_67;
      }
      break;
    case 8u:
      v4 = a1 + 8;
      switch ( (uchar)a3 )
      {
        case 0:
          a2 = v4 + 64;
          break;
        case 1:
          a2 = v4;
          break;
        case 2:
          a2 = v4 + 32;
          break;
        case 3:
          a2 = v4 + 96;
          break;
        default:
          goto LABEL_67;
      }
      break;
    case 9u:
      v4 = a1 + 8;
      switch ( (uchar)a3 )
      {
        case 0:
          a2 = v4 + 96;
          break;
        case 1:
          a2 = v4;
          break;
        case 2:
          a2 = v4 + 32;
          break;
        case 3:
          a2 = v4 + 64;
          break;
        default:
          goto LABEL_67;
      }
      break;
    case 0xAu:
      v4 = a1 + 8;
      switch ( (uchar)a3 )
      {
        case 0:
          a2 = v4 + 64;
          break;
        case 1:
          a2 = v4;
          break;
        case 2:
          a2 = v4 + 96;
          break;
        case 3:
          a2 = v4 + 32;
          break;
        default:
          goto LABEL_67;
      }
      break;
    case 0xBu:
      v4 = a1 + 8;
      switch ( (uchar)a3 )
      {
        case 0:
          a2 = v4 + 96;
          break;
        case 1:
          a2 = v4;
          break;
        case 2:
          a2 = v4 + 64;
          break;
        case 3:
          a2 = v4 + 32;
          break;
        default:
          goto LABEL_67;
      }
      break;
    case 0xCu:
      v4 = a1 + 8;
      if ( a3 <= 3 )
        JUMPOUT(__CS__, *((short *)&off_207850E + a3) + 34047248);
LABEL_67:
      switch ( (uchar)a3 )
      {
        case 0:
          a2 = v4 + 32;
          break;
        case 1:
          a2 = v4 + 64;
          break;
        case 2:
          a2 = v4;
          break;
        case 3:
          a2 = v4 + 96;
          break;
        default:
          return a2;
      }
      break;
    case 0xDu:
      v5 = a1 + 8;
      switch ( (uchar)a3 )
      {
        case 0:
          a2 = v5 + 32;
          break;
        case 1:
          a2 = v5 + 96;
          break;
        case 2:
          a2 = v5;
          break;
        case 3:
          a2 = v5 + 64;
          break;
        default:
          goto LABEL_99;
      }
      break;
    case 0xEu:
      v5 = a1 + 8;
      switch ( (uchar)a3 )
      {
        case 0:
          a2 = v5 + 64;
          break;
        case 1:
          a2 = v5 + 32;
          break;
        case 2:
          a2 = v5;
          break;
        case 3:
          a2 = v5 + 96;
          break;
        default:
          goto LABEL_99;
      }
      break;
    case 0xFu:
      v5 = a1 + 8;
      switch ( (uchar)a3 )
      {
        case 0:
          a2 = v5 + 96;
          break;
        case 1:
          a2 = v5 + 32;
          break;
        case 2:
          a2 = v5;
          break;
        case 3:
          a2 = v5 + 64;
          break;
        default:
          goto LABEL_99;
      }
      break;
    case 0x10u:
      v5 = a1 + 8;
      switch ( (uchar)a3 )
      {
        case 0:
          a2 = v5 + 64;
          break;
        case 1:
          a2 = v5 + 96;
          break;
        case 2:
          a2 = v5;
          break;
        case 3:
          a2 = v5 + 32;
          break;
        default:
          goto LABEL_99;
      }
      break;
    case 0x11u:
      v5 = a1 + 8;
      switch ( (uchar)a3 )
      {
        case 0:
          a2 = v5 + 96;
          break;
        case 1:
          a2 = v5 + 64;
          break;
        case 2:
          a2 = v5;
          break;
        case 3:
          a2 = v5 + 32;
          break;
        default:
          goto LABEL_99;
      }
      break;
    case 0x12u:
      v5 = a1 + 8;
      if ( a3 <= 3 )
        JUMPOUT(__CS__, *((short *)&off_2078630 + a3) + 34047538);
LABEL_99:
      switch ( (uchar)a3 )
      {
        case 0:
          a2 = v5 + 32;
          break;
        case 1:
          a2 = v5 + 64;
          break;
        case 2:
          a2 = v5 + 96;
          break;
        case 3:
          a2 = v5;
          break;
        default:
          return a2;
      }
      break;
    case 0x13u:
      v6 = a1 + 8;
      switch ( (uchar)a3 )
      {
        case 0:
          a2 = v6 + 32;
          break;
        case 1:
          a2 = v6 + 96;
          break;
        case 2:
          a2 = v6 + 64;
          break;
        case 3:
          a2 = v6;
          break;
        default:
          return a2;
      }
      break;
    case 0x14u:
      v7 = a1 + 8;
      switch ( (uchar)a3 )
      {
        case 0:
          a2 = v7 + 64;
          break;
        case 1:
          a2 = v7 + 32;
          break;
        case 2:
          a2 = v7 + 96;
          break;
        case 3:
          a2 = v7;
          break;
        default:
          return a2;
      }
      break;
    case 0x15u:
      v8 = a1 + 8;
      switch ( (uchar)a3 )
      {
        case 0:
          a2 = v8 + 96;
          break;
        case 1:
          a2 = v8 + 32;
          break;
        case 2:
          a2 = v8 + 64;
          break;
        case 3:
          a2 = v8;
          break;
        default:
          return a2;
      }
      break;
    case 0x16u:
      v9 = a1 + 8;
      switch ( (uchar)a3 )
      {
        case 0:
          a2 = v9 + 64;
          break;
        case 1:
          a2 = v9 + 96;
          break;
        case 2:
          a2 = v9 + 32;
          break;
        case 3:
          a2 = v9;
          break;
        default:
          return a2;
      }
      break;
    case 0x17u:
      v10 = a1 + 8;
      switch ( (uchar)a3 )
      {
        case 0:
          a2 = v10 + 96;
          break;
        case 1:
          a2 = v10 + 64;
          break;
        case 2:
          a2 = v10 + 32;
          break;
        case 3:
          a2 = v10;
          break;
        default:
          return a2;
      }
      break;
    default:
LABEL_3:
      switch ( (uchar)a3 )
      {
        case 0:
          a2 = a1;
          break;
        case 1:
          a2 = a1 + 32;
          break;
        case 2:
          a2 = a1 + 64;
          break;
        case 3:
          a2 = a1 + 96;
          break;
        default:
          return a2;
      }
      break;
  }
  return a2;
}

//----- (02078740) --------------------------------------------------------
int __fastcall Function_2078740(int result, int a2)
{
  if ( result > 479 )
  {
    if ( result > 487 )
    {
      if ( result == 492 && a2 && a2 <= 1 )
        result = a2 + 501;
    }
    else if ( result == 487 && a2 && a2 <= 1 )
    {
      result = a2 + 500;
    }
  }
  else if ( result >= 479 )
  {
    if ( a2 && a2 <= 5 )
      result = a2 + 502;
  }
  else if ( result > 386 )
  {
    if ( result == 413 && a2 && a2 <= 2 )
      result = a2 + 498;
  }
  else if ( result == 386 && a2 && a2 <= 3 )
  {
    result = a2 + 495;
  }
  return result;
}

//----- (020787CC) --------------------------------------------------------
int __fastcall Function_20787cc(int a1)
{
  int v1
  int v2
  int i

  v1 = a1;
  v2 = 1;
  if ( a1 >= 32 )
    ErrorHandler();
  for ( i = 0; i < v1; v2 *= 2 )
    ++i;
  return v2;
}

//----- (020787EC) --------------------------------------------------------
int __fastcall Function_20787ec(int a1)
{
  int v1
  int v2

  v1 = 1;
  v2 = 0;
  do
  {
    if ( a1 & v1 )
      break;
    ++v2;
    v1 *= 2;
  }
  while ( v2 < 32 );
  return v2;
}

//----- (02078804) --------------------------------------------------------
int __fastcall Function_2078804(int a1)
{
  short *v1
  uint v2

  v1 = Unknown_20f05be;
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

//----- (02078824) --------------------------------------------------------
int __fastcall Function_2078824(uint a1)
{
  if ( a1 >= 0x12 )
    a1 = 0;
  return (ushort)Unknown_20f05be[a1];
}

//----- (02078838) --------------------------------------------------------
int __fastcall Function_2078838(int *a1)
{
  ushort v1

  v1 = GetPkmnData(a1, 5u, 0);
  return Function_2078804(v1);
}

//----- (0207884C) --------------------------------------------------------
int __fastcall CopyTrainerIDtoPkmnOTID(int a1, int a2, uint a3)
{
  ushort *v3
  int v4
  uint v5
  int v6
  uint v7
  ushort *v8
  ushort *v9
  int v10
  int v11
  int v12
  int v14
  uint v15

  v3 = (ushort *)a2;
  v4 = a1;
  v5 = a3;
  v6 = GetTrainerID(a2);
  v7 = GetBoxPkmnData(v4, 7u, 0);
  v14 = GetGender((int)v3);
  v15 = GetBoxPkmnData(v4, 0x9Du, 0);
  v8 = Function_2025f04(v3, v5);
  v9 = (ushort *)Function_2023790(8, v5);
  v10 = 0;
  GetBoxPkmnData(v4, 0x91u, v9);
  v11 = v6;
  if ( v6 == v7 )
  {
    v11 = v14;
    if ( v14 == v15 && !Function_2023be0((int)v8, (int)v9) )
      v10 = 1;
  }
  Function_20237bc_FreeMsg((int)v9, v11);
  Function_20237bc_FreeMsg((int)v8, v12);
  return v10;
}

//----- (020788D0) --------------------------------------------------------
int __fastcall Function_20788d0(int result)
{
  if ( result > 63 )
  {
    if ( result > 90 )
    {
      switch ( (uchar)result )
      {
        case 0x5B:
        case 0x5C:
        case 0x5D:
        case 0x5E:
          goto LABEL_13;
        case 0x67:
        case 0x68:
          result -= 95;
          return result;
        default:
          return Function_20793ac(result) == 1;
      }
    }
    else if ( result == 90 )
    {
LABEL_13:
      result -= 87;
      return result;
    }
    return Function_20793ac(result) == 1;
  }
  if ( result >= 63 )
    return 2;
  if ( result > 1 || result < 0 || result && result != 1 )
    return Function_20793ac(result) == 1;
  return result;
}

//----- (0207893C) --------------------------------------------------------
int __fastcall Function_207893c(int a1, int a2, int a3, int a4)
{
  int v4
  ushort v6[14]
  int v7

  v7 = a4;
  v4 = a1;
  LOBYTE(v6[0]) = 0;
  MIi_CpuClearFast(0, (ushort *)((char *)v6 + 1), 0x18u);
  SetPkmnData(v4, 162, v6);
  return SetPkmnData(v4, 171, (ushort *)((char *)v6 + 1));
}

//----- (0207896C) --------------------------------------------------------
int __fastcall Function_207896c(int a1, int a2, int a3, int a4)
{
  ushort *v4
  int v5
  int v6
  int v8
  ushort v9[2]
  int v10

  v10 = a4;
  v4 = (ushort *)a1;
  v5 = 0;
  v8 = InitEncryptPkmnData_Part1(a1);
  do
  {
    if ( GetBoxPkmnData((int)v4, v5 + 54, 0) )
    {
      LOBYTE(v9[0]) = GetBoxPkmnData((int)v4, v5 + 66, 0);
      SetBoxPkmnData((int)v4, v5 + 58, v9, v6);
    }
    ++v5;
  }
  while ( v5 < 4 );
  return InitEncryptPkmnData_Part1Again(v4, v8);
}

//----- (020789BC) --------------------------------------------------------
int __fastcall Function_20789bc(int a1, uint a2, int a3, char a4)
{
  uint v4
  int v5
  uint v6
  char v8

  v4 = a2;
  v5 = 1;
  if ( a4 & 1 )
    v5 = 0;
  Function_2006dc8(a1, 0, 89 * a3, 89, (int)&v8);
  return MI_CpuCopy8((int)(&v8 + 43 * v5 + 3), v4, 0x28u, v6);
}

//----- (020789F4) --------------------------------------------------------
int __fastcall Function_20789f4(int a1, int a2, int a3, int a4, int a5, char a6, uchar a7)
{
  int v7
  int v8
  BOOL v9
  short v11
  short v12
  char v13
  short v14
  char v15[108]

  v7 = a2;
  v8 = a3;
  v9 = a5 != 2;
  Function_2006dc8(a1, 0, 89 * a4, 89, (int)&v14);
  v11 = *((uchar *)&v14 + 43 * v9 + 1);
  v12 = (uchar)v15[43 * v9];
  v13 = a6;
  return Function_2015fcc(v7, v8, (ushort *)&v11, a7);
}

//----- (02078A4C) --------------------------------------------------------
int __fastcall Function_2078a4c(int a1, uchar *a2, int a3, char a4)
{
  uchar *v4
  int v5
  int result
  char v7[43]

  v4 = a2;
  v5 = 1;
  if ( a4 & 1 )
    v5 = 0;
  Function_2006dc8(a1, 0, 89 * a3, 89, (int)v7);
  result = (uchar)v7[43 * v5];
  *v4 = result;
  return result;
}

//----- (02078A80) --------------------------------------------------------
int __fastcall Function_2078a80(int a1, uchar *a2, int a3, int a4)
{
  uchar *v4
  int result
  char v6
  char v7
  int v8

  v8 = a4;
  v4 = a2;
  Function_2006dc8(a1, 0, 89 * a3, 89, (int)&v6);
  result = v7;
  *v4 = v7;
  return result;
}

//----- (02078AA4) --------------------------------------------------------
int __fastcall Function_2078aa4(int a1, uchar *a2, int a3, int a4)
{
  uchar *v4
  int result
  char v6
  char v7
  int v8

  v8 = a4;
  v4 = a2;
  Function_2006dc8(a1, 0, 89 * a3, 89, (int)&v6);
  result = v7;
  *v4 = v7;
  return result;
}

//----- (02078AC8) --------------------------------------------------------
int __fastcall Function_2078ac8(int a1, uchar *a2, int a3, int a4)
{
  uchar *v4
  int result
  char v6
  uchar v7
  int v8

  v8 = a4;
  v4 = a2;
  Function_2006dc8(a1, 0, 89 * a3, 89, (int)&v6);
  result = v7;
  *v4 = v7;
  return result;
}

//----- (02078AEC) --------------------------------------------------------
int __fastcall SetPokeballSeal(int a1, int a2, uint a3, int a4)
{
  int v4
  int v5
  int *v7
  int v8
  char v9

  v4 = a1;
  v5 = a2;
  if ( !a1 )
    return 0;
  v8 = 1;
  v7 = LoadFromNARC_8(152, a3, a3, a4);
  Function_2006dc8((int)v7, 0, 24 * (v4 - 1), 24, (int)&v9);
  SetPkmnData(v5, 162, (ushort *)&v8);
  SetPkmnData(v5, 171, (ushort *)&v9);
  Call_FS_CloseFile(v7);
  return 1;
}

//----- (02078B40) --------------------------------------------------------
int __fastcall Function_2078b40(int *a1, int a2)
{
  int v2
  int v3
  int v4
  int *v5
  int v6
  int v7
  short *v8
  int v9
  short *v10
  int v11
  int v12
  short v13
  int v14
  uchar *v15
  uint v16
  uint v17
  uint v18
  uint v19
  uint v20
  uint v21
  uint v22
  int v23
  int v24
  short v25
  int v26
  ushort *v27
  int v28
  int result
  int v30
  int v31
  int *v32
  int v33

  v32 = a1;
  v2 = a2;
  if ( !(a1[1] & 1) )
  {
    v3 = *a1;
    Call_DecryptPkmnData3((int)(a1 + 34), 0x64u);
    v4 = *((ushort *)v32 + 3);
    Call_DecryptPkmnData3((int)(v32 + 2), 0x80u);
  }
  Function_2076b10_Dummy();
  v6 = (int)v5;
  v7 = GetPkmnDataBlockAdress((int)v5, *v5, 0);
  v33 = GetPkmnDataBlockAdress(v6, *(uint *)v6, 1u);
  v8 = (short *)GetPkmnDataBlockAdress(v6, *(uint *)v6, 2u);
  v9 = GetPkmnDataBlockAdress(v6, *(uint *)v6, 3u);
  v10 = (short *)v33;
  *(uint *)v2 = *(uint *)v6;
  v11 = 0;
  *(ushort *)(v2 + 4) &= 0xFFFEu;
  *(ushort *)(v2 + 4) &= 0xFFFDu;
  *(ushort *)(v2 + 4) = *(ushort *)(v2 + 4) & 0xFFFB | 4 * ((uint)*(ushort *)(v6 + 4) << 29 >> 31) & 7;
  *(ushort *)(v2 + 6) = *(ushort *)v7;
  *(ushort *)(v2 + 8) = *(ushort *)(v7 + 2);
  *(uint *)(v2 + 12) = *(uint *)(v7 + 4);
  *(uint *)(v2 + 16) = *(uint *)(v7 + 8);
  *(uchar *)(v2 + 20) = *(uchar *)(v7 + 12);
  *(uchar *)(v2 + 21) = *(uchar *)(v7 + 13);
  *(uchar *)(v2 + 22) = *(uchar *)(v7 + 16);
  *(uchar *)(v2 + 23) = *(uchar *)(v7 + 17);
  *(uchar *)(v2 + 24) = *(uchar *)(v7 + 18);
  *(uchar *)(v2 + 25) = *(uchar *)(v7 + 19);
  *(uchar *)(v2 + 26) = *(uchar *)(v7 + 20);
  *(uchar *)(v2 + 27) = *(uchar *)(v7 + 21);
  *(uchar *)(v2 + 89) = *(uchar *)(v7 + 15);
  v12 = v2;
  do
  {
    v13 = *v10;
    ++v10;
    *(ushort *)(v12 + 28) = v13;
    v12 += 2;
    v14 = v33 + v11;
    *(uchar *)(v2 + v11 + 36) = *(uchar *)(v33 + v11 + 8);
    v15 = (uchar *)(v2 + v11++ + 40);
    *v15 = *(uchar *)(v14 + 12);
  }
  while ( v11 < 4 );
  v16 = *(uint *)(v33 + 16) & 0x1F | *(uint *)(v2 + 44) & 0xFFFFFFE0;
  *(uint *)(v2 + 44) = v16;
  v17 = 32 * (*(uint *)(v33 + 16) << 22 >> 27) & 0x3FF | v16 & 0xFFFFFC1F;
  *(uint *)(v2 + 44) = v17;
  v18 = (*(uint *)(v33 + 16) << 17 >> 27 << 10) & 0x7FFF | v17 & 0xFFFF83FF;
  *(uint *)(v2 + 44) = v18;
  v19 = (*(uint *)(v33 + 16) << 12 >> 27 << 15) & 0xFFFFF | v18 & 0xFFF07FFF;
  *(uint *)(v2 + 44) = v19;
  v20 = (*(uint *)(v33 + 16) << 7 >> 27 << 20) & 0x1FFFFFF | v19 & 0xFE0FFFFF;
  *(uint *)(v2 + 44) = v20;
  v21 = ((uint)(4 * *(uint *)(v33 + 16)) >> 27 << 27 >> 2) | v20 & 0xC1FFFFFF;
  *(uint *)(v2 + 44) = v21;
  v22 = ((uint)(2 * *(uint *)(v33 + 16)) >> 31 << 31 >> 1) | v21 & 0xBFFFFFFF;
  *(uint *)(v2 + 44) = v22;
  *(uint *)(v2 + 44) = v22 & 0x7FFFFFFF | (*(uint *)(v33 + 16) >> 31 << 31);
  *(uchar *)(v2 + 48) = *(uchar *)(v33 + 24) & 1 | *(uchar *)(v2 + 48) & 0xFE;
  *(uchar *)(v2 + 48) = 2 * ((uint)*(uchar *)(v33 + 24) << 29 >> 30) & 7 | *(uchar *)(v2 + 48) & 0xF9;
  *(uchar *)(v2 + 48) = *(uchar *)(v2 + 48) & 7 | 8 * ((uint)*(uchar *)(v33 + 24) << 24 >> 27);
  v23 = 0;
  v24 = v2;
  do
  {
    v25 = *v8;
    ++v23;
    ++v8;
    *(ushort *)(v24 + 50) = v25;
    v24 += 2;
  }
  while ( v23 < 11 );
  v26 = 0;
  v27 = (ushort *)v9;
  v28 = v2;
  do
  {
    ++v26;
    *(ushort *)(v28 + 72) = *v27;
    ++v27;
    v28 += 2;
  }
  while ( v26 < 8 );
  *(uchar *)(v2 + 88) = *(uchar *)(v9 + 27);
  *(uint *)(v2 + 92) = v32[34];
  *(uchar *)(v2 + 96) = *((uchar *)v32 + 140);
  *(uchar *)(v2 + 97) = *((uchar *)v32 + 141);
  *(ushort *)(v2 + 98) = *((ushort *)v32 + 71);
  *(ushort *)(v2 + 100) = *((ushort *)v32 + 72);
  *(ushort *)(v2 + 102) = *((ushort *)v32 + 73);
  *(ushort *)(v2 + 104) = *((ushort *)v32 + 74);
  *(ushort *)(v2 + 106) = *((ushort *)v32 + 75);
  *(ushort *)(v2 + 108) = *((ushort *)v32 + 76);
  *(ushort *)(v2 + 110) = *((ushort *)v32 + 77);
  result = v32[1] & 1;
  if ( !result )
  {
    v30 = *v32;
    Call_DecryptPkmnData2((int)(v32 + 34), 0x64u);
    v31 = *((ushort *)v32 + 3);
    result = Call_DecryptPkmnData2((int)(v32 + 2), 0x80u);
  }
  return result;
}

//----- (02078E0C) --------------------------------------------------------
int __fastcall Function_2078e0c(int a1, uint *a2)
{
  int v2
  int v3
  int v4
  int v5
  int v6
  ushort *v7
  int v8
  int v9
  ushort *v10
  int v11
  int v12
  char v13
  uint v14
  uint v15
  uint v16
  uint v17
  uint v18
  uint v19
  uint v20
  int v21
  int v22
  short v23
  int v24
  int v25
  ushort *v26
  short v27
  int v28
  int v29
  uint *v31

  v2 = a1;
  v31 = a2;
  MIi_CpuClearFast(0, a2, 0xECu);
  Function_2076b10_Dummy();
  v4 = v3;
  v5 = GetPkmnDataBlockAdress(v3, *(uint *)v2, 0);
  v6 = GetPkmnDataBlockAdress(v4, *(uint *)v2, 1u);
  v7 = (ushort *)GetPkmnDataBlockAdress(v4, *(uint *)v2, 2u);
  v8 = GetPkmnDataBlockAdress(v4, *(uint *)v2, 3u);
  v9 = v2;
  *(uint *)v4 = *(uint *)v2;
  v10 = (ushort *)v6;
  *(ushort *)(v4 + 4) &= 0xFFFEu;
  *(ushort *)(v4 + 4) &= 0xFFFDu;
  *(ushort *)(v4 + 4) = 4 * ((uint)*(ushort *)(v2 + 4) << 29 >> 31) & 7 | *(ushort *)(v4 + 4) & 0xFFFB;
  v11 = 0;
  *(ushort *)v5 = *(ushort *)(v2 + 6);
  *(ushort *)(v5 + 2) = *(ushort *)(v2 + 8);
  *(uint *)(v5 + 4) = *(uint *)(v2 + 12);
  *(uint *)(v5 + 8) = *(uint *)(v2 + 16);
  *(uchar *)(v5 + 12) = *(uchar *)(v2 + 20);
  *(uchar *)(v5 + 13) = *(uchar *)(v2 + 21);
  *(uchar *)(v5 + 16) = *(uchar *)(v2 + 22);
  *(uchar *)(v5 + 17) = *(uchar *)(v2 + 23);
  *(uchar *)(v5 + 18) = *(uchar *)(v2 + 24);
  *(uchar *)(v5 + 19) = *(uchar *)(v2 + 25);
  *(uchar *)(v5 + 20) = *(uchar *)(v2 + 26);
  *(uchar *)(v5 + 21) = *(uchar *)(v2 + 27);
  *(uchar *)(v5 + 15) = *(uchar *)(v2 + 89);
  do
  {
    *v10 = *(ushort *)(v9 + 28);
    v12 = v6 + v11;
    v9 += 2;
    *(uchar *)(v12 + 8) = *(uchar *)(v2 + v11 + 36);
    v13 = *(uchar *)(v2 + v11++ + 40);
    ++v10;
    *(uchar *)(v12 + 12) = v13;
  }
  while ( v11 < 4 );
  v14 = *(uint *)(v2 + 44) & 0x1F | *(uint *)(v6 + 16) & 0xFFFFFFE0;
  *(uint *)(v6 + 16) = v14;
  v15 = 32 * (*(uint *)(v2 + 44) << 22 >> 27) & 0x3FF | v14 & 0xFFFFFC1F;
  *(uint *)(v6 + 16) = v15;
  v16 = (*(uint *)(v2 + 44) << 17 >> 27 << 10) & 0x7FFF | v15 & 0xFFFF83FF;
  *(uint *)(v6 + 16) = v16;
  v17 = (*(uint *)(v2 + 44) << 12 >> 27 << 15) & 0xFFFFF | v16 & 0xFFF07FFF;
  *(uint *)(v6 + 16) = v17;
  v18 = (*(uint *)(v2 + 44) << 7 >> 27 << 20) & 0x1FFFFFF | v17 & 0xFE0FFFFF;
  *(uint *)(v6 + 16) = v18;
  v19 = ((uint)(4 * *(uint *)(v2 + 44)) >> 27 << 27 >> 2) | v18 & 0xC1FFFFFF;
  *(uint *)(v6 + 16) = v19;
  v20 = ((uint)(2 * *(uint *)(v2 + 44)) >> 31 << 31 >> 1) | v19 & 0xBFFFFFFF;
  *(uint *)(v6 + 16) = v20;
  *(uint *)(v6 + 16) = v20 & 0x7FFFFFFF | (*(uint *)(v2 + 44) >> 31 << 31);
  *(uchar *)(v6 + 24) = *(uchar *)(v2 + 48) & 1 | *(uchar *)(v6 + 24) & 0xFE;
  *(uchar *)(v6 + 24) = *(uchar *)(v6 + 24) & 0xF9 | 2 * ((uint)*(uchar *)(v2 + 48) << 29 >> 30) & 7;
  *(uchar *)(v6 + 24) = *(uchar *)(v6 + 24) & 7 | 8 * ((uint)*(uchar *)(v2 + 48) << 24 >> 27);
  v21 = 0;
  v22 = v2;
  do
  {
    v23 = *(ushort *)(v22 + 50);
    ++v21;
    v22 += 2;
    *v7 = v23;
    ++v7;
  }
  while ( v21 < 11 );
  v24 = 0;
  v25 = v2;
  v26 = (ushort *)v8;
  do
  {
    v27 = *(ushort *)(v25 + 72);
    ++v24;
    v25 += 2;
    *v26 = v27;
    ++v26;
  }
  while ( v24 < 8 );
  *(uchar *)(v8 + 27) = *(uchar *)(v2 + 88);
  v31[34] = *(uint *)(v2 + 92);
  *((uchar *)v31 + 140) = *(uchar *)(v2 + 96);
  *((uchar *)v31 + 141) = *(uchar *)(v2 + 97);
  *((ushort *)v31 + 71) = *(ushort *)(v2 + 98);
  *((ushort *)v31 + 72) = *(ushort *)(v2 + 100);
  *((ushort *)v31 + 73) = *(ushort *)(v2 + 102);
  *((ushort *)v31 + 74) = *(ushort *)(v2 + 104);
  *((ushort *)v31 + 75) = *(ushort *)(v2 + 106);
  *((ushort *)v31 + 76) = *(ushort *)(v2 + 108);
  *((ushort *)v31 + 77) = *(ushort *)(v2 + 110);
  v28 = *v31;
  Call_DecryptPkmnData2((int)(v31 + 34), 0x64u);
  *((ushort *)v31 + 3) = CalcPokemonChecksum((ushort *)v31 + 4, 0x80u);
  v29 = *((ushort *)v31 + 3);
  return Call_DecryptPkmnData2((int)(v31 + 2), 0x80u);
}

//----- (020790B0) --------------------------------------------------------
int __fastcall Function_20790b0(int a1)
{
  return LoadFromNARC_3(a1, 9, 0, 0, 7488);
}

//----- (020790C4) --------------------------------------------------------
int __fastcall LoadMoveData(int a1, uint a2)
{
  uint v2
  char v4

  v2 = a2;
  LoadFromNarc_PlWazaTbl(a1, (int)&v4);
  return ReadMoveData((int)&v4, v2);
}

//----- (020790DC) --------------------------------------------------------
uint __fastcall CalcMovePP(int a1, uint a2)
{
  uint v2
  uchar v3

  v2 = a2;
  if ( a2 > 3 )
    v2 = 3;
  v3 = LoadMoveData(a1, 5u);
  return (v3 + s32_div_f(20 * v3 * v2, 100)) & 0xFF;
}

//----- (02079104) --------------------------------------------------------
int __fastcall ReadMoveData(int result, uint a2)
{
  switch ( (uchar)a2 )
  {
    case 0:
      result = *(ushort *)result;
      break;
    case 1:
      result = *(uchar *)(result + 2);
      break;
    case 2:
      result = *(uchar *)(result + 3);
      break;
    case 3:
      result = *(uchar *)(result + 4);
      break;
    case 4:
      result = *(uchar *)(result + 5);
      break;
    case 5:
      result = *(uchar *)(result + 6);
      break;
    case 6:
      result = *(uchar *)(result + 7);
      break;
    case 7:
      result = *(ushort *)(result + 8);
      break;
    case 8:
      result = *(char *)(result + 10);
      break;
    case 9:
      result = *(uchar *)(result + 11);
      break;
    case 0xA:
      result = *(uchar *)(result + 12);
      break;
    case 0xB:
      result = *(uchar *)(result + 13);
      break;
    default:
      return result;
  }
  return result;
}