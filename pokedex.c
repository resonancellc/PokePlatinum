//----- (0202631C) --------------------------------------------------------
int GetSizeOfPokedexMemory()
{
  return 804;
}

//----- (02026324) --------------------------------------------------------
int *__fastcall AllocInitPokedexMemory(uint a1)
{
  int *v1

  v1 = (int *)malloc(a1, 804);
  ClearPokedexMemory(v1);
  return v1;
}

//----- (02026338) --------------------------------------------------------
int __fastcall CopyPokedexMemory(int a1, uint a2)
{
  return MI_CpuCopy8(a1, a2, 0x324u, (uint)MI_CpuCopy8);
}

//----- (02026344) --------------------------------------------------------
int __fastcall IsInvalidPkmnNr(uint a1)
{
  if ( a1 && a1 <= 0x1ED )
    return 0;
  ErrorHandler();
  return 1;
}

//----- (02026360) --------------------------------------------------------
int __fastcall Function_2026360(int a1, uint a2, int a3, int a4)
{
  int v4
  uint v5
  int v6
  int v7
  int v8
  int v9
  char v10
  int v11
  int result
  int v13

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v13 = a4;
  if ( !a3 )
  {
    if ( a2 >= 2 )
      ErrorHandler();
    v7 = (v13 - 1) & 7;
    v8 = v4 + 196;
    v9 = ((v13 - 1) & 0xFFFF) >> 3;
    *(uchar *)(v8 + v9) = *(uchar *)(v4 + 196 + v9) & ~(uchar)(1 << v7);
    *(uchar *)(v8 + v9) = ((uchar)v5 << v7) | *(uchar *)(v4 + 196 + v9);
  }
  if ( v5 >= 2 )
    ErrorHandler();
  v10 = (v13 - 1) & 7;
  v11 = v4 + 132 + (v6 << 6);
  result = ((v13 - 1) & 0xFFFF) >> 3;
  *(uchar *)(v11 + result) &= ~(uchar)(1 << v10);
  *(uchar *)(v11 + result) |= (uchar)v5 << v10;
  return result;
}

//----- (020263D8) --------------------------------------------------------
int __fastcall Function_20263d8(int a1, uint a2, int a3, int a4)
{
  uint v4
  int v5
  int v6
  int v7

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  if ( a2 > 2 )
    ErrorHandler();
  if ( v4 == 2 )
    v4 = 0;
  return Function_2026360(v5, v4, v6, v7);
}

//----- (02026400) --------------------------------------------------------
int __fastcall Function_2026400(int a1)
{
  int v1

  v1 = 0;
  do
  {
    if ( *(uchar *)(a1 + v1 + 268) == 255 )
      break;
    ++v1;
  }
  while ( v1 < 28 );
  return v1;
}

//----- (02026418) --------------------------------------------------------
int __fastcall Function_2026418(int a1, int a2)
{
  int v2

  v2 = 0;
  do
  {
    if ( a2 == *(uchar *)(a1 + v2 + 268) )
      return 1;
    ++v2;
  }
  while ( v2 < 28 );
  return 0;
}

//----- (0202643C) --------------------------------------------------------
int __fastcall Function_202643c(int a1, uchar a2)
{
  uchar v2
  int v3
  int result
  int v5

  v2 = a2;
  v3 = a1;
  result = Function_2026418(a1, a2);
  if ( !result )
  {
    result = Function_2026400(v3);
    if ( result < 28 )
    {
      v5 = v3 + result;
      result = 268;
      *(uchar *)(v5 + 268) = v2;
    }
  }
  return result;
}

//----- (02026464) --------------------------------------------------------
int __fastcall Function_2026464(uint *a1, uint a2)
{
  uchar *v2
  uint v3
  uint *v4
  int result
  int v6

  v3 = a2;
  v4 = a1;
  if ( a2 != 422 && a2 != 423 && a2 != 492 && a2 != 487 )
    ErrorHandler();
  if ( !WasPkmnSeen(v4, (ushort)v3) )
    return 0;
  if ( v3 > 0x1E7 )
  {
    if ( v3 == 492 )
      v2 = v4 + 200;
  }
  else if ( v3 >= 0x1E7 )
  {
    v2 = (char *)v4 + 801;
  }
  else if ( v3 <= 0x1A7 && v3 >= 0x1A6 )
  {
    if ( v3 == 422 )
    {
      v2 = v4 + 66;
    }
    else if ( v3 == 423 )
    {
      v2 = (char *)v4 + 265;
    }
  }
  v6 = 1;
  if ( !(*v2 & 1) )
    v6 = 0;
  if ( v6 == ((*v2 & 2) != 0) )
    result = 1;
  else
    result = 2;
  return result;
}

//----- (02026514) --------------------------------------------------------
int __fastcall Function_2026514(uint *a1, uint a2, int a3)
{
  int v3
  uint v4
  uint *v5
  int v6
  uint v8
  int v9

  v4 = a2;
  v5 = a1;
  v6 = a3;
  if ( a2 != 422 && a2 != 423 && a2 != 492 && a2 != 487 )
    ErrorHandler();
  if ( !WasPkmnSeen(v5, (ushort)v4) )
    return 0;
  if ( v4 > 0x1E7 )
  {
    if ( v4 == 492 )
      v3 = (int)(v5 + 200);
  }
  else if ( v4 >= 0x1E7 )
  {
    v3 = (int)v5 + 801;
  }
  else if ( v4 <= 0x1A7 && v4 >= 0x1A6 )
  {
    if ( v4 == 422 )
    {
      v3 = (int)(v5 + 66);
    }
    else if ( v4 == 423 )
    {
      v3 = (int)v5 + 265;
    }
  }
  v8 = Function_2026464(v5, v4);
  v9 = 0;
  if ( !v8 )
    return 0;
  while ( (((1 << (v9 & 7)) & *(uchar *)(v3 + (((((v9 + 1) & 0xFFFF) - 1) & 0xFFFF) >> 3))) != 0) != v6 )
  {
    if ( ++v9 >= v8 )
      return 0;
  }
  return 1;
}

//----- (020265E8) --------------------------------------------------------
int __fastcall Function_20265e8(uint *a1, uint a2, uchar a3)
{
  uchar *v3
  uint v4
  uint *v5
  uchar v6
  int result
  int v8
  int v9
  int v10
  int v11
  int v12

  v4 = a2;
  v5 = a1;
  v6 = a3;
  if ( a2 != 422 && a2 != 423 && a2 != 492 && a2 != 487 )
    ErrorHandler();
  result = Function_2026514(v5, v4, v6);
  if ( !result )
  {
    if ( v4 > 0x1E7 )
    {
      if ( v4 == 492 )
        v3 = v5 + 200;
    }
    else if ( v4 >= 0x1E7 )
    {
      v3 = (char *)v5 + 801;
    }
    else if ( v4 <= 0x1A7 && v4 >= 0x1A6 )
    {
      if ( v4 == 422 )
      {
        v3 = v5 + 66;
      }
      else if ( v4 == 423 )
      {
        v3 = (char *)v5 + 265;
      }
    }
    result = Function_2026464(v5, v4);
    v8 = result;
    if ( result < 2 )
    {
      v9 = (result + 1) & 0xFFFF;
      if ( v6 >= 2u )
        ErrorHandler();
      v10 = (v9 - 1) & 7;
      v11 = ((v9 - 1) & 0xFFFF) >> 3;
      v3[v11] &= ~(uchar)(1 << v10);
      v12 = (uchar)v3[v11];
      result = (v6 << v10) | v12;
      v3[v11] = (v6 << v10) | v12;
      if ( !v8 )
      {
        if ( v6 >= 2u )
          ErrorHandler();
        result = 0;
        *v3 &= 0xFDu;
        *v3 |= 2 * v6;
      }
    }
  }
  return result;
}

//----- (020266F8) --------------------------------------------------------
int __fastcall Function_20266f8(uint *a1, int a2)
{
  uint *v2
  int v3
  int result
  int v5
  int v6

  v2 = a1;
  v3 = a2;
  if ( a2 != 412 && a2 != 413 )
    ErrorHandler();
  if ( !WasPkmnSeen(v2, (ushort)v3) )
    return 0;
  if ( v3 == 412 )
    v5 = 266;
  else
    v5 = 267;
  v6 = (int)v2 + v5;
  result = 0;
  do
  {
    if ( (((int)*(uchar *)(v6 + ((int)(ushort)result >> 2)) >> (2 * result & 7)) & 3) == 3 )
      break;
    ++result;
  }
  while ( result < 3 );
  return result;
}

//----- (02026754) --------------------------------------------------------
int __fastcall Function_2026754(uint *a1, int a2, int a3)
{
  uint *v3
  int v4
  int v5
  int v7
  int v8
  int v9

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( a2 != 412 && a2 != 413 )
    ErrorHandler();
  if ( !WasPkmnSeen(v3, (ushort)v4) )
    return 0;
  if ( v4 == 412 )
    v7 = 266;
  else
    v7 = 267;
  v8 = (int)v3 + v7;
  v9 = 0;
  do
  {
    if ( (((int)*(uchar *)(v8 + ((int)(ushort)v9 >> 2)) >> (2 * v9 & 7)) & 3) == v5 )
      return 1;
    ++v9;
  }
  while ( v9 < 3 );
  return 0;
}

//----- (020267B8) --------------------------------------------------------
int __fastcall Function_20267b8(uint *a1, int a2, uchar a3)
{
  uint *v3
  int v4
  uchar v5
  int result
  int v7
  int v8
  ushort v9
  int v10

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( a2 != 412 && a2 != 413 )
    ErrorHandler();
  result = Function_2026754(v3, v4, v5);
  if ( !result )
  {
    v7 = v4 == 412 ? 266 : 267;
    v8 = (int)v3 + v7;
    result = Function_20266f8(v3, v4);
    v9 = result;
    if ( result < 3 )
    {
      if ( v5 >= 4u )
        ErrorHandler();
      v10 = 2 * v9 & 7;
      result = (int)v9 >> 2;
      *(uchar *)(v8 + result) &= ~(uchar)(3 << v10);
      *(uchar *)(v8 + result) |= v5 << v10;
    }
  }
  return result;
}

//----- (02026834) --------------------------------------------------------
int __fastcall Function_2026834(int result, int a2, char a3)
{
  *(uint *)(result + 60) = (a2 << (4 * a3 + 24)) | ~(15 << (4 * a3 + 24)) & *(uint *)(result + 60);
  return result;
}

//----- (02026850) --------------------------------------------------------
int __fastcall Function_2026850(int a1, uint a2, uint a3)
{
  uint v3
  int v4
  uint v5
  int result

  v3 = a3;
  v4 = a1;
  v5 = a2;
  if ( a3 >= 4 )
    ErrorHandler();
  if ( v5 > 0xF )
    ErrorHandler();
  if ( v3 >= 2 )
    result = Function_2026834(v4 + 68, v5, v3 - 2);
  else
    result = Function_2026834(v4 + 4, v5, v3);
  return result;
}

//----- (0202688C) --------------------------------------------------------
int __fastcall Function_202688c(int a1, uint a2)
{
  int result

  if ( a2 >= 2 )
    result = (*(uint *)(a1 + 128) >> (4 * (a2 - 2) + 24)) & 0xF;
  else
    result = (*(uint *)(a1 + 64) >> (4 * a2 + 24)) & 0xF;
  return result;
}

//----- (020268B8) --------------------------------------------------------
int __fastcall Function_20268b8(int a1)
{
  int v1
  int v2

  v1 = a1;
  v2 = 0;
  do
  {
    if ( Function_202688c(v1, (uchar)v2) == 15 )
      break;
    ++v2;
  }
  while ( v2 < 4 );
  return v2;
}

//----- (020268D8) --------------------------------------------------------
int __fastcall Function_20268d8(int a1, int a2)
{
  int v2
  int v3
  int v4

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    if ( v3 == Function_202688c(v2, (uchar)v4) )
      return 1;
    ++v4;
  }
  while ( v4 < 4 );
  return 0;
}

//----- (020268FC) --------------------------------------------------------
int __fastcall Function_20268fc(int a1, int a2, int *a3)
{
  int v3
  int v4
  uint v5
  int result
  uchar v7

  v3 = a1;
  v4 = a2;
  v5 = (uchar)GetPkmnData(a3, 0x70u, 0);
  result = 386;
  if ( v4 == 386 )
  {
    result = Function_20268d8(v3, v5);
    if ( !result )
    {
      v7 = Function_20268b8(v3);
      result = Function_2026850(v3, v5, v7);
    }
  }
  return result;
}

//----- (0202693C) --------------------------------------------------------
int __fastcall Function_202693c(int a1)
{
  int v1
  int v2
  int result

  v1 = a1;
  v2 = 0;
  do
    result = Function_2026850(v1, 0xFu, (uchar)v2++);
  while ( v2 < 4 );
  return result;
}

//----- (02026958) --------------------------------------------------------
int __fastcall Function_2026958(uint *a1, int a2)
{
  uint *v2
  ushort v3
  int result
  int v5

  v2 = a1;
  v3 = a2;
  if ( a2 != 479 )
    ErrorHandler();
  if ( !WasPkmnSeen(v2, v3) )
    return 0;
  result = 0;
  v5 = 0;
  do
  {
    if ( ((v2[199] >> 3 * v5) & 7) == 7 )
      break;
    ++v5;
    ++result;
  }
  while ( v5 < 6 );
  return result;
}

//----- (020269A4) --------------------------------------------------------
int __fastcall Function_20269a4(uint *a1, int a2, int a3)
{
  uint *v3
  int v4
  int v5
  uint v7
  int v8

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( a2 != 479 )
    ErrorHandler();
  if ( !WasPkmnSeen(v3, (ushort)v4) )
    return 0;
  v7 = Function_2026958(v3, v4);
  v8 = 0;
  if ( !v7 )
    return 0;
  while ( ((v3[199] >> 3 * v8) & 7) != v5 )
  {
    if ( ++v8 >= v7 )
      return 0;
  }
  return 1;
}

//----- (02026A00) --------------------------------------------------------
int __fastcall Function_2026a00(uint *a1, int a2, uint a3)
{
  uint *v3
  int v4
  uint v5
  int result
  char v7

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( a2 != 479 )
    ErrorHandler();
  result = Function_20269a4(v3, v4, (uchar)v5);
  if ( !result )
  {
    result = Function_2026958(v3, v4);
    v7 = result;
    if ( result < 6 )
    {
      if ( v5 >= 7 )
        ErrorHandler();
      v3[199] &= ~(7 << 3 * v7);
      result = v3[199] | (v5 << 3 * v7);
      v3[199] = result;
    }
  }
  return result;
}

//----- (02026A60) --------------------------------------------------------
int __fastcall Function_2026a60(int result, int a2, int *a3)
{
  int v3
  uint *v4
  uchar v5
  uchar v6
  uchar v7
  uchar v8
  uchar v9
  uchar v10
  uchar v11
  uint v12

  v3 = a2;
  v4 = (uint *)result;
  if ( a2 > 422 )
  {
    if ( a2 > 479 )
    {
      result = 487;
      if ( a2 > 487 )
      {
        if ( a2 == 492 )
        {
          v10 = GetPkmnData(a3, 0x70u, 0);
          result = Function_20265e8(v4, v3, v10);
        }
      }
      else if ( a2 == 487 )
      {
        v11 = GetPkmnData(a3, 0x70u, 0);
        result = Function_20265e8(v4, v3, v11);
      }
    }
    else if ( a2 >= 479 )
    {
      v12 = GetPkmnData(a3, 0x70u, 0);
      result = Function_2026a00(v4, v3, v12);
    }
    else
    {
      result = 423;
      if ( a2 == 423 )
      {
        v9 = GetPkmnData(a3, 0x70u, 0);
        result = Function_20265e8(v4, 0x1A7u, v9);
      }
    }
  }
  else if ( a2 < 422 )
  {
    if ( a2 > 386 )
    {
      result = 413;
      if ( a2 <= 413 )
      {
        result = 412;
        if ( a2 >= 412 )
        {
          result = 412;
          if ( a2 == 412 )
          {
            v6 = GetPkmnData(a3, 0x70u, 0);
            result = Function_20267b8(v4, 412, v6);
          }
          else if ( a2 == 413 )
          {
            v7 = GetPkmnData(a3, 0x70u, 0);
            result = Function_20267b8(v4, v3, v7);
          }
        }
      }
    }
    else if ( a2 >= 386 )
    {
      result = Function_20268fc(result, a2, a3);
    }
    else if ( a2 == 201 )
    {
      v5 = Function_2076af8((int)a3);
      result = Function_202643c((int)v4, v5);
    }
  }
  else
  {
    v8 = GetPkmnData(a3, 0x70u, 0);
    result = Function_20265e8(v4, v3, v8);
  }
  return result;
}

//----- (02026B88) --------------------------------------------------------
int __fastcall Function_2026b88(int a1, int a2, int a3)
{
  int v3
  int v4
  int result

  v3 = a1;
  v4 = a2;
  result = Function_20986cc(a3);
  if ( result != 6 )
  {
    result = *(uchar *)(v3 + 296 + v4) | (1 << result);
    *(uchar *)(v3 + 296 + v4) = result;
  }
  return result;
}

//----- (02026BAC) --------------------------------------------------------
int __fastcall Function_2026bac(int a1, int a2, int a3)
{
  int v3
  int v4
  int v5
  int result
  int v7
  int v8
  uchar v9

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( GetPkmnBaseData1(a2, 0x12u) == 255 )
  {
    if ( v5 )
      result = -1;
    else
      result = 2;
  }
  else
  {
    v7 = (v3 - 1) & 0xFFFF;
    LOBYTE(v8) = 1;
    if ( !((1 << ((v3 - 1) & 7)) & *(uchar *)(v4 + (v7 >> 3) + 132)) )
      LOBYTE(v8) = 0;
    v8 = (uchar)v8;
    if ( v5 == 1 )
    {
      v9 = 1;
      if ( !((1 << ((v3 - 1) & 7)) & *(uchar *)(v4 + (v7 >> 3) + 196)) )
        v9 = 0;
      result = v9;
      if ( v9 == v8 )
        result = -1;
    }
    else
    {
      result = v8;
    }
  }
  return result;
}

//----- (02026C24) --------------------------------------------------------
int __fastcall Function_2026c24(int a1, uint a2, int a3)
{
  int v3
  uint v4
  int v5
  int v6
  int result

  v4 = a2;
  v5 = a1;
  v6 = a3;
  if ( a2 != 422 && a2 != 423 && a2 != 492 && a2 != 487 )
    ErrorHandler();
  if ( v6 >= 2 )
    ErrorHandler();
  if ( v4 > 0x1E7 )
  {
    if ( v4 == 492 )
      v3 = v5 + 800;
  }
  else if ( v4 >= 0x1E7 )
  {
    v3 = v5 + 801;
  }
  else if ( v4 <= 0x1A7 && v4 >= 0x1A6 )
  {
    if ( v4 == 422 )
    {
      v3 = v5 + 264;
    }
    else if ( v4 == 423 )
    {
      v3 = v5 + 265;
    }
  }
  result = 1;
  if ( !(*(uchar *)(v3 + (((((v6 + 1) & 0xFFFF) - 1) & 0xFFFF) >> 3)) & (1 << (v6 & 7))) )
    result = 0;
  return result;
}

//----- (02026CCC) --------------------------------------------------------
int __fastcall Function_2026ccc(int a1, int a2, int a3)
{
  int v3
  int v4

  v3 = a1;
  v4 = a3;
  if ( a2 != 479 )
    ErrorHandler();
  if ( v4 >= 6 )
    ErrorHandler();
  return (*(uint *)(v3 + 796) >> 3 * v4) & 7;
}

//----- (02026CFC) --------------------------------------------------------
int __fastcall Function_2026cfc(int a1, int a2, int a3)
{
  int v3
  int v4
  int v5
  int v6

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( a2 != 412 && a2 != 413 )
    ErrorHandler();
  if ( v5 >= 3 )
    ErrorHandler();
  if ( v4 == 412 )
    v6 = 266;
  else
    v6 = 267;
  return ((int)*(uchar *)(v3 + v6 + ((int)(ushort)v5 >> 2)) >> (2 * v5 & 7)) & 3;
}

//----- (02026D44) --------------------------------------------------------
int __fastcall IsObtainablePkmn(int a1)
{
  int v1
  short *v2
  int v3

  v1 = 0;
  v2 = &UnobtainablePkmn;
  v3 = 1;
  do
  {
    if ( a1 == (ushort)*v2 )
      v3 = 0;
    ++v1;
    ++v2;
  }
  while ( v1 < 11 );
  return v3;
}

//----- (02026D68) --------------------------------------------------------
int Function_2026d68()
{
  return 1;
}

//----- (02026D6C) --------------------------------------------------------
int __fastcall ClearPokedexMemory(int *a1)
{
  int *v1

  v1 = a1;
  Call_FillMemWithValue(a1, 0, 0x324u);
  *v1 = -1091581186;
  *((uchar *)v1 + 795) = 0;
  Call_FillMemWithValue(v1 + 67, 0xFFu, 0x1Cu);
  *((uchar *)v1 + 264) = -1;
  *((uchar *)v1 + 265) = -1;
  *((uchar *)v1 + 266) = -1;
  *((uchar *)v1 + 267) = -1;
  v1[199] = -1;
  *((uchar *)v1 + 800) = -1;
  *((uchar *)v1 + 801) = -1;
  return Function_202693c((int)v1);
}

//----- (02026DD0) --------------------------------------------------------
int __fastcall Function_2026dd0(uint *a1)
{
  uint *v1
  ushort v2
  int v3

  v1 = a1;
  if ( *a1 != -1091581186 )
    ErrorHandler();
  v2 = 0;
  v3 = 1;
  do
  {
    if ( HasPokemonBeenCaughtBefore(v1, (ushort)v3) == 1 )
      ++v2;
    ++v3;
  }
  while ( v3 <= 493 );
  return v2;
}

//----- (02026E0C) --------------------------------------------------------
int __fastcall GetNrOfPkmnSeen(uint *a1)
{
  uint *v1
  ushort v2
  int v3

  v1 = a1;
  if ( *a1 != -1091581186 )
    ErrorHandler();
  v2 = 0;
  v3 = 1;
  do
  {
    if ( WasPkmnSeen(v1, (ushort)v3) == 1 )
      ++v2;
    ++v3;
  }
  while ( v3 <= 493 );
  return v2;
}

//----- (02026E48) --------------------------------------------------------
int __fastcall Function_2026e48(uint *a1)
{
  uint *v1
  int result

  v1 = a1;
  if ( Function_2027474(a1) )
    result = GetNrOfPkmnSeen(v1);
  else
    result = Function_2026eac(v1);
  return result;
}

//----- (02026E64) --------------------------------------------------------
int __fastcall Function_2026e64(uint *a1)
{
  uint *v1
  ushort v2
  int v3
  int v4
  int v5
  int v6

  v1 = a1;
  if ( *a1 != -1091581186 )
    ErrorHandler();
  v2 = 0;
  v3 = 1;
  do
  {
    if ( HasPokemonBeenCaughtBefore(v1, (ushort)v3) == 1 && Function_20775a4((ushort)v3, v4, v5, v6) )
      ++v2;
    ++v3;
  }
  while ( v3 <= 493 );
  return v2;
}

//----- (02026EAC) --------------------------------------------------------
int __fastcall Function_2026eac(uint *a1)
{
  uint *v1
  ushort v2
  int v3
  int v4
  int v5
  int v6

  v1 = a1;
  if ( *a1 != -1091581186 )
    ErrorHandler();
  v2 = 0;
  v3 = 1;
  do
  {
    if ( WasPkmnSeen(v1, (ushort)v3) == 1 && Function_20775a4((ushort)v3, v4, v5, v6) )
      ++v2;
    ++v3;
  }
  while ( v3 <= 493 );
  return v2;
}

//----- (02026EF4) --------------------------------------------------------
BOOL __fastcall IsNatPokedexComplete(uint *a1)
{
  return (uint)Function_2026f20(a1) >= 0x1E2;
}

//----- (02026F0C) --------------------------------------------------------
BOOL __fastcall IsSinPokedexComplete(uint *a1)
{
  return (uint)Function_2026f58(a1) >= 0xD2;
}

//----- (02026F20) --------------------------------------------------------
int __fastcall Function_2026f20(uint *a1)
{
  uint *v1
  int v2
  int v3

  v1 = a1;
  v2 = 0;
  v3 = 1;
  do
  {
    if ( HasPokemonBeenCaughtBefore(v1, (ushort)v3) == 1 && IsObtainablePkmn((ushort)v3) == 1 )
      v2 = (v2 + 1) & 0xFFFF;
    ++v3;
  }
  while ( v3 <= 493 );
  return v2;
}

//----- (02026F58) --------------------------------------------------------
int __fastcall Function_2026f58(uint *a1)
{
  uint *v1
  int v2
  int v3
  int v4
  int v5
  int v6

  v1 = a1;
  v2 = 0;
  v3 = 1;
  do
  {
    if ( WasPkmnSeen(v1, (ushort)v3) == 1
      && Function_20775a4((ushort)v3, v4, v5, v6)
      && Function_2026d68() == 1 )
    {
      v2 = (v2 + 1) & 0xFFFF;
    }
    ++v3;
  }
  while ( v3 <= 493 );
  return v2;
}

//----- (02026F9C) --------------------------------------------------------
int __fastcall HasPokemonBeenCaughtBefore(uint *a1, uint a2)
{
  uint *v2
  uint v3
  int result
  int v5
  int v6

  v2 = a1;
  v3 = a2;
  if ( *a1 != -1091581186 )
    ErrorHandler();
  if ( IsInvalidPkmnNr(v3) )
    return 0;
  result = 1;
  v5 = 1 << ((v3 - 1) & 7);
  v6 = (int)v2 + ((int)((v3 - 1) & 0xFFFF) >> 3);
  if ( !(*(uchar *)(v6 + 4) & (uchar)v5) || !(*(uchar *)(v6 + 68) & (uchar)v5) )
    result = 0;
  return result;
}

//----- (02026FE8) --------------------------------------------------------
int __fastcall WasPkmnSeen(uint *a1, uint a2)
{
  uint *v2
  uint v3
  int result

  v2 = a1;
  v3 = a2;
  if ( *a1 != -1091581186 )
    ErrorHandler();
  if ( IsInvalidPkmnNr(v3) )
    return 0;
  result = 1;
  if ( !(*((uchar *)v2 + ((int)((v3 - 1) & 0xFFFF) >> 3) + 68) & (1 << ((v3 - 1) & 7))) )
    result = 0;
  return result;
}

//----- (0202702C) --------------------------------------------------------
int __fastcall Function_202702c(uint *a1, int a2)
{
  int v2
  uint *v3
  int v4

  v3 = a1;
  v4 = a2;
  if ( *a1 != -1091581186 )
    ErrorHandler();
  if ( !v4 )
    return v3[65];
  ErrorHandler();
  return v2;
}

//----- (02027058) --------------------------------------------------------
int __fastcall Function_2027058(uint *a1, uint a2, int a3)
{
  uint *v3
  uint v4
  int v5

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( *a1 != -1091581186 )
    ErrorHandler();
  if ( IsInvalidPkmnNr(v4) )
    return -1;
  if ( (1 << ((v4 - 1) & 7)) & *((uchar *)v3 + ((int)((v4 - 1) & 0xFFFF) >> 3) + 68) )
    return Function_2026bac((int)v3, v4, v5);
  return -1;
}

//----- (020270AC) --------------------------------------------------------
int __fastcall Function_20270ac(uint *a1, int a2)
{
  uint *v2
  int v3
  int result

  v2 = a1;
  v3 = a2;
  if ( *a1 != -1091581186 )
    ErrorHandler();
  if ( Function_2026400((int)v2) > v3 )
    result = *((uchar *)v2 + v3 + 268);
  else
    result = -1;
  return result;
}

//----- (020270DC) --------------------------------------------------------
int __fastcall Function_20270dc(uint *a1)
{
  uint *v1

  v1 = a1;
  if ( *a1 != -1091581186 )
    ErrorHandler();
  return Function_2026400((int)v1);
}

//----- (020270F8) --------------------------------------------------------
int __fastcall Function_20270f8(uint *a1, int a2)
{
  uint *v2
  int v3
  int result

  v2 = a1;
  v3 = a2;
  if ( *a1 != -1091581186 )
    ErrorHandler();
  if ( Function_2026464(v2, 0x1A6u) > v3 )
    result = Function_2026c24((int)v2, 0x1A6u, v3);
  else
    result = -1;
  return result;
}

//----- (02027130) --------------------------------------------------------
int __fastcall Function_2027130(uint *a1)
{
  uint *v1

  v1 = a1;
  if ( *a1 != -1091581186 )
    ErrorHandler();
  return Function_2026464(v1, 0x1A6u);
}

//----- (02027154) --------------------------------------------------------
int __fastcall Function_2027154(uint *a1, int a2)
{
  uint *v2
  int v3
  int result

  v2 = a1;
  v3 = a2;
  if ( *a1 != -1091581186 )
    ErrorHandler();
  if ( Function_2026464(v2, 0x1A7u) > v3 )
    result = Function_2026c24((int)v2, 0x1A7u, v3);
  else
    result = -1;
  return result;
}

//----- (0202718C) --------------------------------------------------------
int __fastcall Function_202718c(uint *a1)
{
  uint *v1

  v1 = a1;
  if ( *a1 != -1091581186 )
    ErrorHandler();
  return Function_2026464(v1, 0x1A7u);
}

//----- (020271B0) --------------------------------------------------------
int __fastcall Function_20271b0(uint *a1, int a2)
{
  uint *v2
  int v3
  int result

  v2 = a1;
  v3 = a2;
  if ( *a1 != -1091581186 )
    ErrorHandler();
  if ( Function_20266f8(v2, 412) > v3 )
    result = Function_2026cfc((int)v2, 412, v3);
  else
    result = -1;
  return result;
}

//----- (020271E8) --------------------------------------------------------
int __fastcall Function_20271e8(uint *a1)
{
  uint *v1

  v1 = a1;
  if ( *a1 != -1091581186 )
    ErrorHandler();
  return Function_20266f8(v1, 412);
}

//----- (02027208) --------------------------------------------------------
int __fastcall Function_2027208(uint *a1, int a2)
{
  uint *v2
  int v3
  int result

  v2 = a1;
  v3 = a2;
  if ( *a1 != -1091581186 )
    ErrorHandler();
  if ( Function_20266f8(v2, 413) > v3 )
    result = Function_2026cfc((int)v2, 413, v3);
  else
    result = -1;
  return result;
}

//----- (02027240) --------------------------------------------------------
int __fastcall Function_2027240(uint *a1)
{
  uint *v1

  v1 = a1;
  if ( *a1 != -1091581186 )
    ErrorHandler();
  return Function_20266f8(v1, 413);
}

//----- (02027264) --------------------------------------------------------
int __fastcall Function_2027264(uint *a1, uchar a2)
{
  uint *v2
  uchar v3

  v2 = a1;
  v3 = a2;
  if ( *a1 != -1091581186 )
    ErrorHandler();
  return Function_202688c((int)v2, v3);
}

//----- (02027288) --------------------------------------------------------
int __fastcall Function_2027288(uint *a1)
{
  uint *v1

  v1 = a1;
  if ( *a1 != -1091581186 )
    ErrorHandler();
  return Function_20268b8((int)v1);
}

//----- (020272A4) --------------------------------------------------------
int __fastcall Function_20272a4(uint *a1, int *a2)
{
  uint *v2
  uint v3
  int v4
  int result
  int v6
  uchar v7
  int v8
  int *v9
  uint v10

  v2 = a1;
  v9 = a2;
  v3 = (ushort)GetPkmnData(a2, 5u, 0);
  v10 = GetPkmnData(v9, 0, 0);
  v4 = Call_DecidePkmnGender((int)v9);
  if ( *v2 != -1091581186 )
    ErrorHandler();
  result = IsInvalidPkmnNr(v3);
  if ( !result )
  {
    v6 = (v3 - 1) & 0xFFFF;
    v7 = 1;
    v8 = 1 << ((v3 - 1) & 7);
    if ( *((uchar *)v2 + (v6 >> 3) + 68) & (uchar)v8 )
    {
      if ( !((uchar)v8 & *((uchar *)v2 + (v6 >> 3) + 132)) )
        v7 = 0;
      if ( v7 != v4 )
        Function_20263d8((int)v2, (uchar)v4, 1, v3);
    }
    else
    {
      if ( v3 == 327 )
        v2[65] = v10;
      Function_20263d8((int)v2, (uchar)v4, 0, v3);
    }
    Function_2026a60((int)v2, v3, v9);
    result = v6 >> 3;
    *((uchar *)v2 + (v6 >> 3) + 68) |= 1 << ((v3 - 1) & 7);
  }
  return result;
}

//----- (0202736C) --------------------------------------------------------
int __fastcall Function_202736c(uint *a1, int *a2)
{
  int *v2
  uint *v3
  uint v4
  int v5
  int result
  uchar v7
  int v8
  int v9
  int v10
  uint v11
  int v12

  v2 = a2;
  v3 = a1;
  v4 = (ushort)GetPkmnData(a2, 5u, 0);
  v12 = GetPkmnData(v2, 0xCu, 0);
  v11 = GetPkmnData(v2, 0, 0);
  v5 = Call_DecidePkmnGender((int)v2);
  if ( *v3 != -1091581186 )
    ErrorHandler();
  result = IsInvalidPkmnNr(v4);
  if ( !result )
  {
    v7 = 1;
    v8 = 1 << ((v4 - 1) & 7);
    v9 = (int)((v4 - 1) & 0xFFFF) >> 3;
    if ( *((uchar *)v3 + v9 + 68) & (uchar)v8 )
    {
      if ( !(*((uchar *)v3 + v9 + 132) & (uchar)v8) )
        v7 = 0;
      if ( v7 != v5 )
        Function_20263d8((int)v3, (uchar)v5, 1, v4);
    }
    else
    {
      if ( v4 == 327 )
        v3[65] = v11;
      Function_20263d8((int)v3, (uchar)v5, 0, v4);
    }
    Function_2026a60((int)v3, v4, v2);
    Function_2026b88((int)v3, v4, v12);
    result = (int)((v4 - 1) & 0xFFFF) >> 3;
    v10 = 1 << ((v4 - 1) & 7);
    *((uchar *)v3 + result + 4) |= v10;
    *((uchar *)v3 + result + 68) |= v10;
  }
  return result;
}

//----- (02027454) --------------------------------------------------------
int __fastcall Function_2027454(uint *a1)
{
  uint *v1
  int result

  v1 = a1;
  if ( *a1 != -1091581186 )
    ErrorHandler();
  result = 795;
  *((uchar *)v1 + 795) = 1;
  return result;
}

//----- (02027474) --------------------------------------------------------
int __fastcall Function_2027474(uint *a1)
{
  uint *v1

  v1 = a1;
  if ( *a1 != -1091581186 )
    ErrorHandler();
  return *((uchar *)v1 + 795);
}

//----- (02027494) --------------------------------------------------------
int __fastcall Function_2027494(uint *a1)
{
  uint *v1

  v1 = a1;
  if ( *a1 != -1091581186 )
    ErrorHandler();
  return *((uchar *)v1 + 792);
}

//----- (020274B0) --------------------------------------------------------
int __fastcall Function_20274b0(uint *a1)
{
  uint *v1
  int result

  v1 = a1;
  if ( *a1 != -1091581186 )
    ErrorHandler();
  result = 792;
  *((uchar *)v1 + 792) = 1;
  return result;
}

//----- (020274D0) --------------------------------------------------------
int __fastcall Function_20274d0(uint *a1, int a2, uint a3)
{
  int v3
  uint *v4
  int v5

  v3 = a3;
  v4 = a1;
  v5 = a2;
  if ( a3 >= 8 )
    ErrorHandler();
  if ( *v4 != -1091581186 )
    ErrorHandler();
  return *((uchar *)v4 + v5 + 296) & (1 << Function_20986cc(v3));
}

//----- (02027508) --------------------------------------------------------
int __fastcall Function_2027508(int result)
{
  *(uchar *)(result + 793) = 1;
  return result;
}

//----- (02027514) --------------------------------------------------------
int __fastcall Function_2027514(int a1)
{
  return *(uchar *)(a1 + 793);
}

//----- (02027520) --------------------------------------------------------
int __fastcall CheckActPokedex(uint *a1)
{
  uint *v1

  v1 = a1;
  if ( *a1 != -1091581186 )
    ErrorHandler();
  return *((uchar *)v1 + 794);
}

//----- (02027540) --------------------------------------------------------
int __fastcall ActivatePokedex(uint *a1)
{
  uint *v1
  int result

  v1 = a1;
  if ( *a1 != -1091581186 )
    ErrorHandler();
  result = 794;
  *((uchar *)v1 + 794) = 1;
  return result;
}

//----- (02027560) --------------------------------------------------------
int __fastcall LoadPokedexDataAdress(int a1)
{
  return LoadVariableAreaAdress(a1, 7);
}

//----- (0202756C) --------------------------------------------------------
int __fastcall Function_202756c(uint *a1, int a2, uint a3)
{
  uint *v3
  int v4
  uint v5

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( *a1 != -1091581186 )
    ErrorHandler();
  if ( v4 > 422 )
  {
    if ( v4 > 479 )
    {
      if ( v4 > 487 )
      {
        if ( v4 == 492 && (int)v5 < Function_2026464(v3, 0x1ECu) )
          return Function_2026c24((int)v3, 0x1ECu, v5);
      }
      else if ( v4 == 487 && (int)v5 < Function_2026464(v3, 0x1E7u) )
      {
        return Function_2026c24((int)v3, 0x1E7u, v5);
      }
    }
    else if ( v4 >= 479 )
    {
      if ( (int)v5 < Function_2026958(v3, 479) )
        return Function_2026ccc((int)v3, 479, v5);
    }
    else if ( v4 == 423 && v5 < Function_202718c(v3) )
    {
      return Function_2027154(v3, v5);
    }
  }
  else if ( v4 >= 422 )
  {
    if ( v5 < Function_2027130(v3) )
      return Function_20270f8(v3, v5);
  }
  else if ( v4 > 386 )
  {
    if ( v4 <= 413 && v4 >= 412 )
    {
      if ( v4 == 412 )
      {
        if ( v5 < Function_20271e8(v3) )
          return Function_20271b0(v3, v5);
      }
      else if ( v4 == 413 && v5 < Function_2027240(v3) )
      {
        return Function_2027208(v3, v5);
      }
    }
  }
  else if ( v4 >= 386 )
  {
    if ( v5 < Function_2027288(v3) )
      return Function_2027264(v3, v5);
  }
  else if ( v4 == 201 && v5 < Function_20270dc(v3) )
  {
    return Function_20270ac(v3, v5);
  }
  return 0;
}

//----- (020276C8) --------------------------------------------------------
int __fastcall Function_20276c8(uint *a1, int a2)
{
  uint *v2
  int v3

  v2 = a1;
  v3 = a2;
  if ( *a1 != -1091581186 )
    ErrorHandler();
  if ( v3 > 422 )
  {
    if ( v3 > 479 )
    {
      if ( v3 > 487 )
      {
        if ( v3 == 492 )
          return Function_2026464(v2, 0x1ECu);
      }
      else if ( v3 == 487 )
      {
        return Function_2026464(v2, 0x1E7u);
      }
    }
    else
    {
      if ( v3 >= 479 )
        return Function_2026958(v2, 479);
      if ( v3 == 423 )
        return Function_202718c(v2);
    }
  }
  else
  {
    if ( v3 >= 422 )
      return Function_2027130(v2);
    if ( v3 > 386 )
    {
      if ( v3 <= 413 && v3 >= 412 )
      {
        if ( v3 == 412 )
          return Function_20271e8(v2);
        if ( v3 == 413 )
          return Function_2027240(v2);
      }
    }
    else
    {
      if ( v3 >= 386 )
        return Function_2027288(v2);
      if ( v3 == 201 )
        return Function_20270dc(v2);
    }
  }
  return 1;
}