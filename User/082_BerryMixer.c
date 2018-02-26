//----- (0223B140) --------------------------------------------------------
int __fastcall Function_223b140(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;

  v4 = a1;
  v5 = *a1;
  if ( !v5 || !CallOverlayDataJumpTable(v5, a2, a3, a4) )
    return 0;
  Call_free2(*v4);
  *v4 = 0;
  return 1;
}

//----- (0223B164) --------------------------------------------------------
int __fastcall Function_223b164(int a1)
{
  int v1;
  uint *v2;
  int v3;

  v1 = a1;
  v2 = (uint *)LoadPtrToOverWorldDataIn18(a1);
  Function_2017fc8(3, 55, 0x20000);
  v3 = MallocSomeDataAndStorePtrInOverlayData1c(v1, 40, 0x37u);
  MI_CpuFill8((ushort *)v3, 0, 0x28u);
  *(uint *)v3 = 55;
  *(uint *)(v3 + 16) = v2;
  if ( v2[8] && v2[9] )
    ((void (*)(void))dword_21D1E30[17])();
  *(uchar *)(v3 + 38) = v2[8];
  *(uchar *)(v3 + 39) = v2[9];
  *(uint *)(v3 + 12) = Calloc24(*(uint *)v3);
  if ( v2[1] == 1 )
    *(ushort *)(v3 + 6) = *(ushort *)(v3 + 6) & 0xFF00 | 1;
  return 1;
}

//----- (0223B1D4) --------------------------------------------------------
int __fastcall Function_223b1d4(int a1, int *a2)
{
  int v2;
  int *v3;
  int v4;
  char v5;
  int v6;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = LoadOverlayData1c(a1);
  v5 = LoadPtrToOverWorldDataIn18(v2);
  v6 = *v3;
  switch ( v5 )
  {
    case 0:
      *v3 = Function_223b2e0(v4, v4 + 20);
      goto LABEL_7;
    case 1:
      *v3 = Function_223b330(v4, v4 + 20);
      goto LABEL_7;
    case 2:
      *v3 = Function_223b35c(v4, v4 + 20);
      goto LABEL_7;
    case 3:
      *v3 = Function_223b37c(v4, v4 + 20);
      goto LABEL_7;
    case 4:
      result = 1;
      break;
    default:
LABEL_7:
      if ( v6 != *v3 )
        *(uint *)(v4 + 20) = 0;
      result = 0;
      break;
  }
  return result;
}

//----- (0223B24C) --------------------------------------------------------
int __fastcall Function_223b24c(int a1, uint *a2)
{
  int v2;
  uint *v3;
  int v4;
  int v5;
  int v7;
  int v8;

  v2 = a1;
  v3 = a2;
  v4 = LoadOverlayData1c(a1);
  v5 = LoadPtrToOverWorldDataIn18(v2);
  if ( *v3 )
  {
    if ( *v3 == 1 )
    {
      if ( Function_2036540(4) )
        return 1;
      v7 = Function_2035e18();
      if ( v7 < Function_2032e64() )
        return 1;
    }
    else
    {
      ErrorHandler();
    }
  }
  else
  {
    v8 = *(uint *)v4;
    free(*(uint *)(v4 + 12));
    MI_CpuFill8((ushort *)v4, 0, 0x28u);
    FreeSomeDataAndStore0InOverlayData1c(v2);
    if ( *(uint *)(v5 + 32) && *(uint *)(v5 + 36) )
      ((void (*)(void))dword_21D1E30[58])();
    Function_201807c(v8);
    if ( !*(uint *)(v5 + 32) )
      return 1;
    Function_20388f4(0, 1);
    Function_20364f0(4);
    ++*v3;
  }
  return 0;
}

//----- (0223B2E0) --------------------------------------------------------
int __fastcall Function_223b2e0(int a1, uint *a2)
{
  int result;

  switch ( (uchar)*a2 )
  {
    case 0u:
      *a2 = Function_223b380();
      goto LABEL_8;
    case 1u:
      *a2 = Function_223b3dc();
      goto LABEL_8;
    case 2u:
      *a2 = Function_223b470();
      goto LABEL_8;
    case 3u:
      *a2 = Function_223b510();
      goto LABEL_8;
    case 4u:
      result = 1;
      break;
    case 5u:
      result = 4;
      break;
    default:
LABEL_8:
      result = 0;
      break;
  }
  return result;
}

//----- (0223B330) --------------------------------------------------------
int __fastcall Function_223b330(uint *a1, int a2, int a3, int a4)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v9 = a4;
  v5 = 35894705;
  v6 = 35894877;
  v7 = 35895057;
  v8 = 83;
  a1[7] = (uint)AllocAndInitOverlayData(&v5, (int)a1, *a1);
  return 2;
}

//----- (0223B35C) --------------------------------------------------------
int __fastcall Function_223b35c(int a1, int a2, int a3, int a4)
{
  int v4;

  v4 = a1;
  if ( !Function_223b140((int *)(a1 + 28), a2, a3, a4) )
    return 2;
  if ( *(uint *)(v4 + 32) == 1 )
    return 0;
  return 3;
}

//----- (0223B37C) --------------------------------------------------------
int Function_223b37c()
{
  return 4;
}

//----- (0223B380) --------------------------------------------------------
int __fastcall Function_223b380(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int *v5;
  char v6;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a1;
  v8 = 35894689;
  v9 = 35895149;
  v10 = 35895553;
  v11 = 84;
  v5 = Function_207d824(*(uint *)(a1[4] + 20), (uchar *)&dword_223B550, *a1);
  if ( (*((ushort *)v4 + 3) & 0xFF) == 1 )
    v6 = 5;
  else
    v6 = 4;
  Function_207cb2c((int)v5, *(uint *)(v4[4] + 12), v6, v4[3]);
  v4[7] = AllocAndInitOverlayData(&v8, (int)v5, *v4);
  v4[6] = v5;
  return 1;
}

//----- (0223B3DC) --------------------------------------------------------
int __fastcall Function_223b3dc(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  int *v6;
  int v7;

  v4 = a1;
  if ( !Function_223b140((int *)(a1 + 28), a2, a3, a4) )
    return 1;
  v6 = Function_207cb08(*(uint *)v4 & 0xFF);
  v7 = Function_207cb20();
  memcpy(v6, *(char **)(v4 + 24), v7);
  free(*(uint *)(v4 + 24));
  *(uint *)(v4 + 24) = 0;
  *(uint *)(v4 + 8) = Function_207cb94((int)v6);
  free((int)v6);
  switch ( (uchar)Function_207cb9c((int)v6) )
  {
    case 0u:
    case 2u:
    case 3u:
    case 4u:
      goto LABEL_7;
    case 1u:
      result = 2;
      break;
    case 5u:
      result = 5;
      break;
    default:
      ErrorHandler();
      *(uint *)(v4 + 8) = 149;
LABEL_7:
      if ( !GiveItem(*(uint *)(*(uint *)(v4 + 16) + 20), *(uint *)(v4 + 8) & 0xFFFF, 1u, *(uint *)v4) )
        ErrorHandler();
      result = 4;
      break;
  }
  return result;
}

//----- (0223B470) --------------------------------------------------------
int __fastcall Function_223b470(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  uchar *v5;
  int v6;
  uint v7;
  uint v8;
  int v10;
  char v11;
  uchar v12[3];
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;

  v17 = a4;
  v4 = a1;
  v10 = *(uint *)(a1[4] + 20);
  v13 = 35918913;
  v14 = 35919181;
  v15 = 35919265;
  v16 = 85;
  v5 = Function_20972fc(*a1 & 0xFF);
  v4[6] = (uint)v5;
  Function_2097320((int)v5, v4[2] & 0xFFFF, 1);
  v6 = 0;
  v7 = 0;
  do
  {
    v8 = (uchar)Function_207d354(v7);
    if ( CheckItem(v10, v8, 1u, *v4) == 1 )
    {
      Function_2097320(v4[6], v8, 0);
      v6 = (v6 + 1) & 0xFF;
    }
    v7 = (v7 + 1) & 0xFF;
  }
  while ( v7 < 0x40 );
  Function_207d9b4(v4[3], 4, &v11, v12);
  Function_209733c((uchar *)v4[6], v12[0], v11, v6 + 2);
  v4[7] = (uint)AllocAndInitOverlayData(&v13, v4[6], *v4);
  return 3;
}

//----- (0223B510) --------------------------------------------------------
int __fastcall Function_223b510(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  char v6;
  char v7;
  int v8;

  v8 = a4;
  v4 = a1;
  if ( !Function_223b140((int *)(a1 + 28), a2, a3, a4) )
    return 3;
  Function_2097390(*(uint *)(v4 + 24), &v7, &v6);
  Function_207d9c8(*(uint *)(v4 + 12), 4, v6, v7);
  free(*(uint *)(v4 + 24));
  result = 0;
  *(uint *)(v4 + 24) = 0;
  return result;
}

