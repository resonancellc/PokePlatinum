//----- (0201378C) --------------------------------------------------------
uint Function_201378c()
{
  RTC_Init();
  dword_21BF5D4 = dword_21BF5D0;
  dword_21BF5D8[0] = 0;
  dword_21BF5D8[1] = LOBYTE(dword_21BF5D8[0]);
  dword_21BF5E0[0] = 0;
  dword_21BF5E0[1] = LOBYTE(dword_21BF5E0[0]);
  dword_21BF5E8 = 0;
  dword_21BF5EC = (uchar)dword_21BF5E8;
  dword_21BF5F0 = 0;
  dword_21BF5F4 = (uchar)dword_21BF5F0;
  dword_21BF5F8[0] = 0;
  dword_21BF5F8[1] = LOBYTE(dword_21BF5F8[0]);
  dword_21BF600[0] = 0;
  dword_21BF600[1] = LOBYTE(dword_21BF600[0]);
  dword_21BF608[0] = 0;
  dword_21BF608[1] = LOBYTE(dword_21BF608[0]);
  dword_21BF5C8 = 0;
  dword_21BF5CC = (uchar)dword_21BF5C8;
  dword_21BF5D0 = 0;
  return Function_2013824((int)&dword_21BF5C8);
}

//----- (020137C4) --------------------------------------------------------
int *Function_20137c4()
{
  int *result

  result = &dword_21BF5C8;
  if ( !dword_21BF5CC && ++dword_21BF5D0 + 1 > 10 )
  {
    dword_21BF5D0 = 0;
    result = (int *)Function_2013824((int)&dword_21BF5C8);
  }
  return result;
}

//----- (020137EC) --------------------------------------------------------
int __fastcall Function_20137ec(int a1, uint *a2)
{
  uint *v2
  int v3
  uint *v4
  uint *v5
  int v6
  int v7
  uint *v8
  int result

  v2 = a2;
  a2[3] = a1;
  if ( a1 )
    ErrorHandler();
  *v2 = 1;
  v3 = v2[12];
  v4 = v2 + 4;
  *v4 = v2[11];
  v4[1] = v3;
  v5 = v2 + 6;
  v6 = v2[14];
  *v5 = v2[13];
  v5[1] = v6;
  v7 = v2[16];
  v8 = v2 + 8;
  *v8 = v2[15];
  v8[1] = v7;
  v2[10] = v2[17];
  result = 0;
  v2[1] = 0;
  return result;
}

//----- (02013824) --------------------------------------------------------
uint __fastcall Function_2013824(int a1)
{
  int v1
  uint result

  v1 = a1;
  *(uint *)(a1 + 4) = 1;
  result = RTC_GetDateTimeAsync(a1 + 44, a1 + 60, (int (__fastcall *)(uint, uint))Function_20137ec, a1);
  *(uint *)(v1 + 12) = result;
  if ( result )
    result = ErrorHandler();
  return result;
}

//----- (0201384C) --------------------------------------------------------
int __fastcall Function_201384c(uint *a1, uint *a2)
{
  uint *v2
  uint *v3
  uint *v4
  int result

  v2 = a1;
  v3 = a2;
  if ( dword_21BF5C8 != 1 )
    ErrorHandler();
  *v2 = dword_21BF5D8[0];
  v2[1] = dword_21BF5D8[1];
  v4 = v2 + 2;
  *v4 = dword_21BF5E0[0];
  v4[1] = dword_21BF5E0[1];
  *v3 = dword_21BF5E8;
  v3[1] = dword_21BF5EC;
  result = dword_21BF5F0;
  v3[2] = dword_21BF5F0;
  return result;
}

//----- (02013880) --------------------------------------------------------
int __fastcall Function_2013880(uint *a1)
{
  uint *v1
  int result

  v1 = a1;
  if ( dword_21BF5C8 != 1 )
    ErrorHandler();
  *v1 = dword_21BF5E8;
  v1[1] = dword_21BF5EC;
  result = dword_21BF5F0;
  v1[2] = dword_21BF5F0;
  return result;
}

//----- (020138A4) --------------------------------------------------------
int __fastcall Function_20138a4(uint *a1)
{
  uint *v1
  uint *v2
  int result

  v1 = a1;
  if ( dword_21BF5C8 != 1 )
    ErrorHandler();
  *v1 = dword_21BF5D8[0];
  v1[1] = dword_21BF5D8[1];
  v2 = v1 + 2;
  result = dword_21BF5E0[0];
  *v2 = dword_21BF5E0[0];
  v2[1] = dword_21BF5E0[1];
  return result;
}