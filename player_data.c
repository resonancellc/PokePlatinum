//----- (02025E08) --------------------------------------------------------
int GetSizeOfPlayerData()
{
  return 44;
}

//----- (02025E0C) --------------------------------------------------------
int __fastcall InitPlayerData(uint *a1)
{
  uint *v1

  v1 = a1;
  MIi_CpuClearFast(0, a1, 0x2Cu);
  Function_2027a1c(v1);
  InitTrainerData(v1 + 1);
  Function_202b594((ushort *)v1 + 18);
  return Function_202cbe4((int)v1 + 38);
}

//----- (02025E38) --------------------------------------------------------
int __fastcall LoadTrainerDataAdress(int a1)
{
  return LoadVariableAreaAdress(a1, 1) + 4;
}

//----- (02025E44) --------------------------------------------------------
int __fastcall LoadPlayerDataAdress(int a1)
{
  return LoadVariableAreaAdress(a1, 1);
}

//----- (02025E50) --------------------------------------------------------
int __fastcall LoadPlayerDataAdress_24(int a1)
{
  return LoadVariableAreaAdress(a1, 1) + 36;
}

//----- (02025E5C) --------------------------------------------------------
int __fastcall LoadPlayerDataAdress_26(int a1)
{
  return LoadVariableAreaAdress(a1, 1) + 38;
}

//----- (02025E68) --------------------------------------------------------
int Function_2025e68()
{
  return 32;
}

//----- (02025E6C) --------------------------------------------------------
int *__fastcall AllocTrainerData(uint a1)
{
  int *v1

  v1 = (int *)malloc(a1, 32);
  InitTrainerData(v1);
  return v1;
}

//----- (02025E80) --------------------------------------------------------
int __fastcall CopyTrainerData(int a1, uint a2)
{
  return MI_CpuCopy8(a1, a2, 0x20u, (uint)MI_CpuCopy8);
}

//----- (02025E8C) --------------------------------------------------------
int __fastcall InitTrainerData(int *a1)
{
  int *v1

  v1 = a1;
  Call_FillMemWithValue(a1, 0, 0x20u);
  *((uchar *)v1 + 25) = 2;
  return Function_2025fd0((int)v1, 12);
}

//----- (02025EA8) --------------------------------------------------------
int __fastcall Function_2025ea8(ushort *a1)
{
  int v1

  v1 = 0;
  do
  {
    if ( *a1 )
      return 0;
    ++v1;
    ++a1;
  }
  while ( v1 < 8 );
  return 1;
}

//----- (02025EC0) --------------------------------------------------------
ushort *__fastcall Function_2025ec0(ushort *a1, ushort *a2)
{
  ushort *v2
  ushort *v3

  v2 = a2;
  v3 = a1;
  if ( Function_20021f0(a2) >= 8 )
    ErrorHandler();
  return Function_20021b0(v3, v2);
}

//----- (02025EE0) --------------------------------------------------------
uint __fastcall Function_2025ee0(uchar *a1, int a2)
{
  return Function_2023df0(a2, a1, 8u);
}

//----- (02025EF0) --------------------------------------------------------
void Function_2025ef0_Dummy()
{
  ;
}

//----- (02025EF4) --------------------------------------------------------
ushort *__fastcall Function_2025ef4(ushort *a1, ushort *a2)
{
  return Function_2023d28(a2, a1);
}

//----- (02025F04) --------------------------------------------------------
ushort *__fastcall Function_2025f04(ushort *a1, uint a2)
{
  ushort *v2
  ushort *v3

  v2 = a1;
  v3 = (ushort *)Function_2023790(8, a2);
  Function_2025ef4(v2, v3);
  return v3;
}

//----- (02025F1C) --------------------------------------------------------
int __fastcall SetTrainerID(int result, int a2)
{
  *(uint *)(result + 16) = a2;
  return result;
}

//----- (02025F20) --------------------------------------------------------
int __fastcall GetTrainerID(int a1)
{
  return *(uint *)(a1 + 16);
}

//----- (02025F24) --------------------------------------------------------
int __fastcall GetSecretTrainerID(int a1)
{
  return *(uint *)(a1 + 16) & 0xFFFF;
}

//----- (02025F2C) --------------------------------------------------------
int __fastcall SetGender(int result, char a2)
{
  *(uchar *)(result + 24) = a2;
  return result;
}

//----- (02025F30) --------------------------------------------------------
int __fastcall GetGender(int a1)
{
  return *(uchar *)(a1 + 24);
}

//----- (02025F34) --------------------------------------------------------
int __fastcall CheckBadge(int a1, char a2)
{
  int v2
  int result

  v2 = *(uchar *)(a1 + 26);
  result = 1;
  if ( !(v2 & (1 << a2)) )
    result = 0;
  return result;
}

//----- (02025F48) --------------------------------------------------------
int __fastcall EnableBadge(int result, char a2)
{
  *(uchar *)(result + 26) |= 1 << a2;
  return result;
}

//----- (02025F58) --------------------------------------------------------
int __fastcall CountBadges(int a1)
{
  uint v1
  int i

  v1 = *(uchar *)(a1 + 26);
  for ( i = 0; v1; v1 >>= 1 )
  {
    if ( v1 & 1 )
      ++i;
  }
  return i;
}

//----- (02025F74) --------------------------------------------------------
int __fastcall GetMoney(int a1)
{
  return *(uint *)(a1 + 20);
}

//----- (02025F78) --------------------------------------------------------
uint __fastcall SetMoney(int a1, uint a2)
{
  if ( a2 > 0xF423F )
    a2 = 999999;
  *(uint *)(a1 + 20) = a2;
  return a2;
}

//----- (02025F8C) --------------------------------------------------------
int __fastcall Function_2025f8c(int a1)
{
  return *(uchar *)(a1 + 27);
}

//----- (02025F90) --------------------------------------------------------
int __fastcall Function_2025f90(int result, char a2)
{
  *(uchar *)(result + 27) = a2;
  return result;
}

//----- (02025F94) --------------------------------------------------------
int __fastcall GiveMoney(int a1, uint a2)
{
  if ( a2 <= 0xF423F )
    *(uint *)(a1 + 20) += a2;
  else
    *(uint *)(a1 + 20) = 999999;
  if ( *(uint *)(a1 + 20) > 0xF423Fu )
    *(uint *)(a1 + 20) = 999999;
  return *(uint *)(a1 + 20);
}

//----- (02025FB8) --------------------------------------------------------
int __fastcall TakeMoney(int a1, uint a2)
{
  uint v2
  uint v3

  v2 = *(uint *)(a1 + 20);
  if ( v2 >= a2 )
    v3 = v2 - a2;
  else
    v3 = 0;
  *(uint *)(a1 + 20) = v3;
  return *(uint *)(a1 + 20);
}

//----- (02025FCC) --------------------------------------------------------
int __fastcall Function_2025fcc(int a1)
{
  return *(uchar *)(a1 + 28);
}

//----- (02025FD0) --------------------------------------------------------
int __fastcall Function_2025fd0(int result, char a2)
{
  *(uchar *)(result + 28) = a2;
  return result;
}

//----- (02025FD4) --------------------------------------------------------
int Function_2025fd4()
{
  return 0;
}

//----- (02025FD8) --------------------------------------------------------
int __fastcall Function_2025fd8(int a1)
{
  return *(uchar *)(a1 + 25);
}

//----- (02025FDC) --------------------------------------------------------
int __fastcall Function_2025fdc(int result, char a2)
{
  *(uchar *)(result + 25) = a2;
  return result;
}

//----- (02025FE0) --------------------------------------------------------
int __fastcall Function_2025fe0(int result)
{
  *(uchar *)(result + 29) = *(uchar *)(result + 29) & 0xFE | 1;
  return result;
}

//----- (02025FF0) --------------------------------------------------------
int __fastcall Function_2025ff0(int a1)
{
  return *(uchar *)(a1 + 29) & 1;
}

//----- (02025FF8) --------------------------------------------------------
int __fastcall Function_2025ff8(int result)
{
  *(uchar *)(result + 29) |= 2u;
  return result;
}

//----- (02026004) --------------------------------------------------------
uint __fastcall Function_2026004(int a1)
{
  return (uint)*(uchar *)(a1 + 29) << 30 >> 31;
}