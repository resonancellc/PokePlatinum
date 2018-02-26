//----- (02079FEC) --------------------------------------------------------
int GetSizeOfPkmnParty()
{
  return 1424;
}

//----- (02079FF4) --------------------------------------------------------
int *__fastcall AllocPkmnParty(uint a1)
{
  int *v1

  v1 = (int *)malloc(a1, 1424);
  ZeroFillPkmnPartyStructure_6(v1);
  return v1;
}

//----- (0207A008) --------------------------------------------------------
int __fastcall ZeroFillPkmnPartyStructure_6(int *a1)
{
  return ZeroFillPkmnPartyStructure(a1, 6);
}

//----- (0207A014) --------------------------------------------------------
int __fastcall ZeroFillPkmnPartyStructure(int *a1, int a2)
{
  int v2
  int *v3
  int v4
  int *v5
  int result

  v2 = a2;
  v3 = a1;
  if ( a2 > 6 )
    ErrorHandler();
  Call_FillMemWithValue(v3, 0, 0x590u);
  v4 = 0;
  v3[1] = 0;
  *v3 = v2;
  v5 = v3 + 2;
  do
  {
    result = ClearCompletePkmnDataStructure(v5);
    ++v4;
    v5 += 59;
  }
  while ( v4 < 6 );
  return result;
}

//----- (0207A048) --------------------------------------------------------
int __fastcall CopyPkmnDataToParty(uint *a1, int *a2)
{
  uint *v2
  int *v3
  int v4
  int *v6
  int v7
  int v8
  int v9

  v2 = a1;
  v3 = a2;
  v4 = a1[1];
  if ( v4 >= *a1 )
    return 0;
  v6 = &a1[59 * v4 + 2];
  v7 = 29;
  do
  {
    v8 = *v3;
    v9 = v3[1];
    v3 += 2;
    *v6 = v8;
    v6[1] = v9;
    v6 += 2;
    --v7;
  }
  while ( v7 );
  *v6 = *v3;
  ++v2[1];
  return 1;
}

//----- (0207A080) --------------------------------------------------------
int __fastcall Function_207a080(int *a1, int a2)
{
  int *v2
  int v3
  int v4
  int *v5
  int *v6
  int v7
  int v8
  int v9

  v2 = a1;
  v3 = a2;
  if ( a2 < 0 )
    ErrorHandler();
  if ( v3 >= v2[1] )
    ErrorHandler();
  if ( v3 >= *v2 )
    ErrorHandler();
  if ( v2[1] <= 0 )
    ErrorHandler();
  if ( v3 < v2[1] - 1 )
  {
    v4 = (int)&v2[59 * v3];
    do
    {
      v5 = (int *)(v4 + 244);
      v6 = (int *)(v4 + 8);
      v7 = 29;
      do
      {
        v8 = *v5;
        v9 = v5[1];
        v5 += 2;
        *v6 = v8;
        v6[1] = v9;
        v6 += 2;
        --v7;
      }
      while ( v7 );
      ++v3;
      *v6 = *v5;
      v4 += 236;
    }
    while ( v3 < v2[1] - 1 );
  }
  ClearCompletePkmnDataStructure(&v2[59 * v3 + 2]);
  --v2[1];
  return 1;
}

//----- (0207A0F4) --------------------------------------------------------
int __fastcall GetMaxPkmnInParty(int a1)
{
  return *(uint *)a1;
}

//----- (0207A0F8) --------------------------------------------------------
int __fastcall GetNrOfPkmnInParty(int a1)
{
  return *(uint *)(a1 + 4);
}

//----- (0207A0FC) --------------------------------------------------------
int *__fastcall GetAdrOfPkmnInParty(uint *a1, int a2)
{
  int *v2
  int v3

  v2 = a1;
  v3 = a2;
  if ( a2 < 0 )
    ErrorHandler();
  if ( v3 >= v2[1] )
    ErrorHandler();
  if ( v3 >= *v2 )
    ErrorHandler();
  return &v2[59 * v3 + 2];
}

//----- (0207A128) --------------------------------------------------------
int __fastcall Function_207a128(uint *a1, int a2, int *a3)
{
  int v3
  int *v4
  int *v5
  int *v6
  uint v7
  uint v8
  int v9
  int v10
  int v11
  int result

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( a2 < 0 )
    ErrorHandler();
  if ( v3 >= v4[1] )
    ErrorHandler();
  if ( v3 >= *v4 )
    ErrorHandler();
  v6 = &v4[59 * v3 + 2];
  v7 = GetPkmnData(v6, 0xACu, 0);
  v8 = v7 - GetPkmnData(v5, 0xACu, 0);
  v9 = 29;
  do
  {
    v10 = *v5;
    v11 = v5[1];
    v5 += 2;
    *v6 = v10;
    v6[1] = v11;
    v6 += 2;
    --v9;
  }
  while ( v9 );
  *v6 = *v5;
  result = v4[1] + v8;
  v4[1] = result;
  return result;
}

//----- (0207A184) --------------------------------------------------------
int __fastcall Function_207a184(uint *a1, int a2, int a3)
{
  int v3
  int *v4
  int v5
  int v6
  int *v7
  int *v8
  int *v9
  int v10
  int v11
  int v12
  int v13
  int *v14
  int *v15
  int v16
  int v17
  int v18
  int *v19
  int v20
  int v21
  int v22

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( a2 < 0 )
    ErrorHandler();
  if ( v3 >= v4[1] )
    ErrorHandler();
  if ( v3 >= *v4 )
    ErrorHandler();
  if ( v5 < 0 )
    ErrorHandler();
  if ( v5 >= v4[1] )
    ErrorHandler();
  if ( v5 >= *v4 )
    ErrorHandler();
  v6 = malloc(0, 236);
  v7 = &v4[59 * v3 + 2];
  v8 = &v4[59 * v3 + 2];
  v9 = (int *)v6;
  v10 = 29;
  do
  {
    v11 = *v8;
    v12 = v8[1];
    v8 += 2;
    *v9 = v11;
    v9[1] = v12;
    v9 += 2;
    --v10;
  }
  while ( v10 );
  v13 = (int)(v4 + 2);
  *v9 = *v8;
  v14 = (int *)(v13 + 236 * v5);
  v15 = (int *)(v13 + 236 * v5);
  v16 = 29;
  do
  {
    v17 = *v15;
    v18 = v15[1];
    v15 += 2;
    *v7 = v17;
    v7[1] = v18;
    v7 += 2;
    --v16;
  }
  while ( v16 );
  v19 = (int *)v6;
  *v7 = *v15;
  v20 = 29;
  do
  {
    v21 = *v19;
    v22 = v19[1];
    v19 += 2;
    *v14 = v21;
    v14[1] = v22;
    v14 += 2;
    --v20;
  }
  while ( v20 );
  *v14 = *v19;
  free(v6);
  return 0;
}

//----- (0207A21C) --------------------------------------------------------
int __fastcall CopyPkmnParty(int *a1, uint *a2)
{
  int *v2
  uint *v3
  int v4
  int result
  int v6

  v2 = a1;
  v3 = a2;
  v4 = 178;
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

//----- (0207A230) --------------------------------------------------------
BOOL __fastcall IsFirstPkmnInPartyWantedSpecies(int a1, int a2)
{
  int v2
  int v3
  int v4
  int *v5

  v2 = a1;
  v3 = a2;
  v4 = 0;
  if ( *(uint *)(a1 + 4) > 0 )
  {
    v5 = (int *)(a1 + 8);
    do
    {
      if ( v3 == GetPkmnData(v5, 5u, 0) )
        break;
      ++v4;
      v5 += 59;
    }
    while ( v4 < *(uint *)(v2 + 4) );
  }
  return v4 != *(uint *)(v2 + 4);
}

//----- (0207A268) --------------------------------------------------------
int __fastcall LoadPokePartyAdress(int a1)
{
  return LoadVariableAreaAdress(a1, 2);
}