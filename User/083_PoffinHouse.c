//----- (0223B5A0) --------------------------------------------------------
int __fastcall Function_223b5a0(int a1)
{
  Function_223cbfc(*(uint *)(a1 + 24));
  return Function_201dcac();
}

//----- (0223B5B0) --------------------------------------------------------
int __fastcall Function_223b5b0(int a1)
{
  int v1;
  int v2;
  int *v3;

  v1 = a1;
  v2 = LoadPtrToOverWorldDataIn18(a1);
  Function_2017fc8(3, 56, 0x20000);
  v3 = (int *)MallocSomeDataAndStorePtrInOverlayData1c(v1, 5636, 0x38u);
  Call_FillMemWithValue(v3, 0, 0x1604u);
  *(uint *)(v2 + 24) = v3;
  *v3 = 56;
  Function_201dbec(16, 0x38u);
  v3[1291] = (*(ushort *)(v2 + 6) & 0xFF) == 1;
  Function_223d150(v3, *(uint *)(*(uint *)(v2 + 16) + 16));
  if ( *(uchar *)(v2 + 38) )
    Function_203632c(1);
  v3[9] = Function_2027b50(*(ushort **)(*(uint *)(v2 + 16) + 24));
  v3[10] = Function_2027ac0(*(ushort **)(*(uint *)(v2 + 16) + 24));
  v3[174] = 1;
  SetMainLoopFunctionCall((int)Function_223b5a0, v2);
  Function_20177a4();
  Function_2004550(0xCu, 0x49Fu);
  return 1;
}

//----- (0223B65C) --------------------------------------------------------
BOOL __fastcall Function_223b65c(int a1, int *a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  void **v7;
  int v8;
  void *v9;
  int v10;
  int v11;
  void **v13;

  v2 = a1;
  v3 = a2;
  v4 = LoadPtrToOverWorldDataIn18(a1);
  v5 = LoadOverlayData1c(v2);
  v6 = v5;
  v13 = *(void ***)(v5 + 12);
  v7 = &off_224024C + 2 * (uint)v13;
  v8 = *v3;
  if ( *v3 )
  {
    if ( v8 == 1 )
    {
      Function_20364f0(*(uint *)(v6 + 8));
      *v3 = 2;
    }
    else if ( v8 == 2 && Function_2036540(*(uint *)(v6 + 8) & 0xFF) )
    {
      *v3 = 0;
      *(uint *)(v6 + 8) = 0;
    }
  }
  else if ( *v7 )
  {
    v9 = v7[1];
    *(uint *)(v6 + 12) = ((int (__fastcall *)(int, int, int))*v7)(v4, v6, v6 + 16);
    if ( *(uchar *)(v6 + 25) )
    {
      *(uint *)(v6 + 12) = *(uchar *)(v6 + 26);
      *(uchar *)(v6 + 25) = 0;
    }
    v7 = *(void ***)(v6 + 12);
    if ( v13 != v7 )
    {
      *(uint *)(v6 + 16) = 0;
      if ( *(ushort *)(v4 + 6) & 0xFF )
      {
        if ( v9 )
        {
          *(uint *)(v6 + 8) = v9;
          *v3 = 1;
        }
      }
    }
  }
  Function_223cba4(v6, v7);
  v10 = *(uint *)v6;
  v11 = *(uint *)(v6 + 32);
  Function_2038a1c();
  return *(uint *)(v6 + 4) != 0;
}

//----- (0223B710) --------------------------------------------------------
int __fastcall Function_223b710(int a1)
{
  int v1;
  int v2;
  ushort *v3;
  int v4;

  v1 = a1;
  v2 = LoadPtrToOverWorldDataIn18(a1);
  v3 = (ushort *)LoadOverlayData1c(v1);
  v4 = *(uint *)v3;
  if ( *(uchar *)(v2 + 38) && !Function_203608c() )
    ((void (*)(void))dword_21D2598[25])();
  Function_223d1ec(v3);
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  Function_201dc3c();
  MI_CpuFill8(v3, 0, 0x1604u);
  FreeSomeDataAndStore0InOverlayData1c(v1);
  *(uint *)(v2 + 24) = 0;
  Function_201807c(v4);
  return 1;
}

//----- (0223B774) --------------------------------------------------------
int __fastcall Function_223b774(int result, char a2)
{
  *(uchar *)(result + 24) = a2;
  *(uint *)(result + 20) = 1;
  return result;
}

//----- (0223B77C) --------------------------------------------------------
int __fastcall Function_223b77c(int result, char a2)
{
  *(uchar *)(result + 26) = a2;
  *(uchar *)(result + 25) = 1;
  return result;
}

//----- (0223B784) --------------------------------------------------------
int __fastcall Function_223b784(int result)
{
  *(uint *)(result + 4) = 1;
  return result;
}

//----- (0223B78C) --------------------------------------------------------
int __fastcall Function_223b78c(int a1, int *a2, uint *a3)
{
  uint *v3;
  int v4;
  int *v5;

  v3 = a3;
  v4 = *a3;
  v5 = a2;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      Function_200f174(0, 1, 1, 0xFFFF, 6, 1, *a2);
      ++*v3;
    }
    else if ( v4 == 2 && Function_200f2ac() )
    {
      return v5[3] + 1;
    }
  }
  else
  {
    Function_223c82c();
    if ( !Function_223d570(v5[1290]) )
      Function_223fdb0(v5 + 186);
    Function_223dea0(v5 + 339, v5[1289], v5 + 1375, v5 + 1292, v5[9], *v5);
    Function_223e340(v5 + 361);
    Function_223e6d4(v5 + 399, v5[1289], v5 + 1375, v5 + 1292, v5[9], *v5);
    Function_223e244(v5 + 352);
    Function_223e244(v5 + 355);
    Function_223e244(v5 + 358);
    Function_223e5a4(v5 + 391, v5 + 1292, v5[1289], v5[1290]);
    Function_223ed3c(v5 + 413);
    Function_223f29c(v5 + 674);
    Function_223f494(v5 + 706, v5[1289]);
    Function_223f820(v5 + 180);
    Function_223c958(v5);
    Function_2039734();
    Function_201ff0c(0x10u, 1);
    if ( v5[1289] > 1 )
      Function_223df84(v5 + 339);
    Function_223e484(v5 + 361, 3, 1);
    Function_223e484(v5 + 361, 4, 1);
    Function_223e484(v5 + 361, 5, 1);
    Function_223e484(v5 + 361, 6, 1);
    ++*v3;
  }
  return v5[3];
}

//----- (0223B920) --------------------------------------------------------
int __fastcall Function_223b920(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a2;
  if ( Function_223d570(*(uint *)(a2 + 5160)) || (v3 = *(uint *)(v2 + 5160), Function_223d508(22)) )
    result = *(uint *)(v2 + 12) + 1;
  else
    result = *(uint *)(v2 + 12);
  return result;
}

//----- (0223B950) --------------------------------------------------------
int __fastcall Function_223b950(int a1, int a2)
{
  if ( *(uint *)(a2 + 20) )
  {
    *(uint *)(a2 + 12) = *(uchar *)(a2 + 24);
    *(uint *)(a2 + 20) = 0;
  }
  return *(uint *)(a2 + 12);
}

//----- (0223B964) --------------------------------------------------------
int __fastcall Function_223b964(int a1, int a2, uint *a3)
{
  uint *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v3 = a3;
  v4 = a2;
  v5 = *a3;
  if ( *a3 )
  {
    if ( v5 == 1 )
    {
      v6 = 0;
      *(uint *)(v4 + 5168) = *(uint *)(a1 + 8);
      v7 = v4;
      do
      {
        ++v6;
        *(ushort *)(v7 + 5624) = 2;
        v7 += 2;
      }
      while ( v6 < 5 );
      *(ushort *)(v4 + 5634) = 2;
      ++*v3;
    }
    else if ( v5 == 2 )
    {
      Function_223d4b8();
      v8 = *(uint *)(v4 + 5160);
      if ( Function_223d508(25) == 1 )
        return *(uint *)(v4 + 12) + 1;
    }
    else
    {
      ErrorHandler();
    }
  }
  else
  {
    Function_223db18(v4 + 860, *(uint *)(v4 + 5156));
    ++*v3;
  }
  return *(uint *)(v4 + 12);
}

//----- (0223B9EC) --------------------------------------------------------
int __fastcall Function_223b9ec(int a1, uint *a2, uint *a3)
{
  uint *v3;
  int v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint v10;
  int result;

  v3 = a3;
  v4 = *a3;
  v5 = a2;
  if ( *a3 <= 5u )
    JUMPOUT(__CS__, *((short *)&off_223BA06 + v4) + 35895816);
  switch ( (uchar)v4 )
  {
    case 0:
      Function_223f790(a2 + 1287, *a2, a2[8]);
      ++*v3;
      goto LABEL_22;
    case 1:
      Function_223dc68(a2 + 215);
      ++*v3;
      goto LABEL_22;
    case 2:
      v6 = Function_223dd30(a2 + 215);
      if ( v6 == 1 )
      {
        ++*v3;
        Function_223df70(v5 + 339);
        v5[7] = 24;
      }
      else if ( v6 )
      {
        Function_223df30(v5 + 339, v5[*((uchar *)v5 + v6 + 5470) + 1319]);
      }
      goto LABEL_22;
    case 3:
      v7 = a2[7];
      if ( v7 <= 0 )
      {
        Function_223e2fc(a2 + 358);
        ++*v3;
      }
      else
      {
        a2[7] = v7 - 1;
      }
      goto LABEL_22;
    case 4:
      if ( Function_223e32c(a2 + 358) )
      {
        Function_223dfac(v5 + 339);
        Function_223e2e4(v5 + 352);
        ++*v3;
      }
      goto LABEL_22;
    case 5:
      v8 = Function_223e32c(a2 + 352);
      v9 = Function_2021e74(v5[354]);
      v10 = s32_div_f(v9 + 1, 3);
      if ( v5[214] != v10 )
      {
        if ( v9 >= 10 )
          Function_2005748(0x6BEu);
        else
          Function_2005748(0x6BDu);
        v5[214] = v10;
      }
      if ( !v8 )
        goto LABEL_22;
      Function_223e69c(v5 + 391, 1);
      Function_223e500(v5 + 361);
      result = v5[3] + 1;
      break;
    default:
LABEL_22:
      result = v5[3];
      break;
  }
  return result;
}

//----- (0223BB40) --------------------------------------------------------
int __fastcall Function_223bb40(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v2 = a1;
  v3 = a2;
  Function_223f83c(a2 + 720);
  Function_223f88c(v3 + 5172, v3 + 720);
  if ( !Function_223d570(*(uint *)(v3 + 5160)) )
  {
    if ( Function_223fdd8(v3 + 744, v3 + 5168, *(uint *)(v3 + 5156)) == 1 )
    {
      v4 = *(uint *)(v3 + 5160);
      Function_223d508(23);
      return *(uint *)(v3 + 12);
    }
    Function_223ffa0(v3 + 744);
    if ( *(uint *)(v3 + 5496) )
    {
      Function_223fec0(v3 + 744, v3 + 5168, *(uint *)(v3 + 5156));
    }
    else
    {
      Function_223fe50(v3 + 744, v3 + 5168, *(uint *)(v3 + 5156));
      *(uint *)(v3 + 5496) = 1;
    }
  }
  if ( *(uchar *)(v2 + 38) )
  {
    if ( !(++*(uint *)(v3 + 5620) & 1) )
    {
      *(uint *)(v3 + 5620) = 0;
      if ( Function_223d570(*(uint *)(v3 + 5160)) )
      {
        if ( *(ushort *)(v3 + 5634) )
        {
          Function_223d4c8();
          v12 = *(uint *)(v3 + 5160);
          Function_223d508(32);
          --*(ushort *)(v3 + 5634);
        }
      }
      else
      {
        v6 = 1;
        v7 = 1;
        v8 = v3 + 2;
        do
        {
          if ( Function_2035d78((ushort)v7) && !*(ushort *)(v8 + 5624) )
            v6 = 0;
          ++v7;
          v8 += 2;
        }
        while ( v7 < 8 );
        if ( v6 )
        {
          Function_223d4bc();
          v9 = *(uint *)(v3 + 5160);
          Function_223d508(26);
          *(uint *)(v3 + 5496) = 0;
          v10 = 1;
          v11 = v3 + 2;
          do
          {
            if ( Function_2035d78((ushort)v10) )
              --*(ushort *)(v11 + 5624);
            ++v10;
            v11 += 2;
          }
          while ( v10 < 8 );
        }
      }
    }
  }
  else
  {
    Function_223d4bc();
    v13 = *(uint *)(v3 + 5160);
    Function_223d508(26);
    *(uint *)(v3 + 5496) = 0;
  }
  Function_223c3e8(v3);
  Function_223eda4(v3 + 1652, v3 + 5168);
  Function_223f378(v3 + 2696);
  Function_223f52c(v3 + 2824);
  return *(uint *)(v3 + 12);
}

//----- (0223BCEC) --------------------------------------------------------
int __fastcall Function_223bcec(int a1, int *a2, int *a3)
{
  int v3;
  int *v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int i;
  int *v10;
  int v11;
  uchar *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int result;
  int v18;
  int v19;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_223eda4(a2 + 413, a2 + 1292);
  v6 = *v5;
  if ( (uint)*v5 <= 6 )
    JUMPOUT(__CS__, *((short *)&off_223BD16 + v6) + 35896600);
  switch ( (uchar)v6 )
  {
    case 0:
      Function_223e994(v4 + 399);
      Function_223f3d0(v4 + 674, 0);
      Function_223f3d0(v4 + 674, 1);
      Function_223f3d0(v4 + 674, 2);
      Function_223f3d0(v4 + 674, 3);
      Function_223e2e4(v4 + 355);
      Function_20057a4(1722, 0);
      Function_20057a4(1723, 0);
      Function_20057a4(1727, 0);
      Function_20057a4(1729, 0);
      Function_2005748(0x6C2u);
      Function_223e484(v4 + 361, 0, 0);
      Function_223e484(v4 + 361, 1, 0);
      Function_223e484(v4 + 361, 2, 0);
      ++*v5;
      goto LABEL_32;
    case 1:
      if ( Function_223e32c(v4 + 355) )
      {
        Function_200f174(3u, 0, 0, 0, 6, 1, *v4);
        ++*v5;
      }
      goto LABEL_32;
    case 2:
      if ( Function_200f2ac() )
      {
        if ( *(uchar *)(v3 + 38) )
          Function_203632c(0);
        ++*v5;
      }
      goto LABEL_32;
    case 3:
      v7 = LoadVariableAreaAdress_14(*(uint *)(*(uint *)(v3 + 16) + 12));
      v8 = v7;
      if ( v4[1291] )
      {
        Function_202cfec(v7, 18);
        Function_202cf28(v8, 53);
      }
      else
      {
        Function_202cfec(v7, 12);
        Function_202cf28(v8, 52);
      }
      if ( v4[1291] )
      {
        v18 = LoadVariableAreaAdress_1d(*(uint *)(*(uint *)(v3 + 16) + 12));
        for ( i = 0; i < v4[1289]; ++i )
        {
          v10 = (int *)Function_2032f1c(*((uchar *)v4 + i + 5472));
          v11 = Function_203909c(*(uint *)(*(uint *)(v3 + 16) + 12), v10, &v19);
          if ( !v11 || v11 == 1 )
            Function_202b1d0(v18, v19, 1);
        }
      }
      ++*v5;
      goto LABEL_32;
    case 4:
      if ( Function_223d570(v4[1290]) )
      {
        ++*v5;
      }
      else
      {
        v12 = Function_202a93c(*v4);
        Function_223ffd4(v4 + 186, v12, v4 + 1292, v4[1289], *v4);
        Function_202a910();
        v13 = v4[1290];
        v14 = Function_223d508(28);
        free((int)v12);
        if ( v14 == 1 )
          ++*v5;
      }
      goto LABEL_32;
    case 5:
      if ( Function_223d570(v4[1290]) )
      {
        ++*v5;
      }
      else
      {
        v15 = Function_22401ac(v4 + 186, v4 + 1292, v4[1289]);
        Function_223d4c0(v15);
        v16 = v4[1290];
        if ( Function_223d508(27) == 1 )
          ++*v5;
      }
      goto LABEL_32;
    case 6:
      result = v4[3] + 1;
      break;
    default:
      ErrorHandler();
LABEL_32:
      result = v4[3];
      break;
  }
  return result;
}

//----- (0223BF74) --------------------------------------------------------
int __fastcall Function_223bf74(int a1, int *a2, uint *a3)
{
  uint *v3;
  int v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v13;

  v3 = a3;
  v4 = a1;
  v5 = *a3;
  v6 = a2;
  if ( *a3 <= 0xBu )
    JUMPOUT(__CS__, *((short *)&off_223BF92 + v5) + 35897236);
  switch ( (uchar)v5 )
  {
    case 0:
      Function_223ec4c(a2 + 399, 0);
      Function_201ff0c(1u, 0);
      Function_201ff0c(2u, 0);
      Function_201ff0c(4u, 1);
      v6[174] = 0;
      Function_223f730(v6 + 1285, 128, 144, *((uchar *)v6 + 5268), *v6);
      Function_200f174(3u, 1, 0, 0, 6, 1, *v6);
      ++*v3;
      return v6[3];
    case 1:
      if ( Function_200f2ac() )
      {
        ++*v3;
        v6[7] = 30;
      }
      return v6[3];
    case 2:
      v7 = a2[7] - 1;
      a2[7] = v7;
      if ( v7 < 0 )
      {
        Function_223ec4c(a2 + 399, 1);
        Function_2005748(0x6C3u);
        ++*v3;
        v6[7] = 30;
      }
      return v6[3];
    case 3:
      v8 = a2[7] - 1;
      a2[7] = v8;
      if ( v8 < 0 )
      {
        Function_223ec4c(a2 + 399, 2);
        Function_223f784(v6 + 1285);
        Function_2005748(0x6C3u);
        ++*v3;
        v6[7] = 600;
      }
      return v6[3];
    case 4:
      v9 = a2[7] - 1;
      a2[7] = v9;
      if ( v9 < 0 || word_21BF6DC || dword_21BF6C4 & 3 )
        ++*a3;
      else
        Function_223f784(a2 + 1285);
      return v6[3];
    case 5:
      Function_223f770(a2 + 1285);
      Function_223ec70(v6 + 399);
      Function_223c8b0(v4, v6[1356], v6[1289]);
      Function_223ec8c(v6 + 399, 0);
      v6[7] = 150;
      ++*v3;
      return v6[3];
    case 6:
      --a2[7];
      if ( word_21BF6DC || a2[7] < 0 || dword_21BF6C4 & 3 )
        ++*a3;
      return v6[3];
    case 7:
      Function_223ec8c(a2 + 399, 1);
      Function_223f7b0(v6 + 1287);
      ++*v3;
      return v6[3];
    case 8:
      v10 = Function_223f7dc(a2 + 1287);
      if ( (uint)(v10 - 1) > 1 )
        return v6[3];
      if ( v10 == 1 )
      {
        if ( (uint)Function_202ac98(*(uint *)(*(uint *)(v4 + 16) + 8)) >= 0x64 )
        {
          Function_223ec8c(v6 + 399, 2);
          *v3 = 10;
          v6[7] = 150;
          return v6[3];
        }
        if ( !Function_207d69c(*(uint *)(*(uint *)(v4 + 16) + 20), 4u) )
        {
          Function_223ec8c(v6 + 399, 5);
          *v3 = 10;
          v6[7] = 150;
          return v6[3];
        }
        *v3 = 9;
      }
      else
      {
        *v3 = 11;
      }
      if ( v6[1289] > 1 )
      {
        Function_223ec8c(v6 + 399, 6);
        Function_223e9bc(v6 + 399);
      }
      return v6[3];
    case 9:
      a2[212] = 1;
      Function_223d4b0();
      v11 = v6[1290];
      if ( Function_223d508(30) != 1 )
        return v6[3];
      return v6[3] + 1;
    case 0xA:
      --a2[7];
      if ( word_21BF6DC || a2[7] < 0 || dword_21BF6C4 & 3 )
      {
        if ( a2[1289] > 1 )
        {
          Function_223ec8c(a2 + 399, 6);
          Function_223e9bc(v6 + 399);
        }
        *v3 = 11;
      }
      return v6[3];
    case 0xB:
      a2[212] = 0;
      Function_223d4b0();
      v13 = v6[1290];
      if ( Function_223d508(30) != 1 )
        return v6[3];
      return v6[3] + 1;
    default:
      ErrorHandler();
      return v6[3];
  }
}

//----- (0223C24C) --------------------------------------------------------
int __fastcall Function_223c24c(int a1, int a2, int a3)
{
  return Function_223cb5c(a2, a3);
}

//----- (0223C258) --------------------------------------------------------
int __fastcall Function_223c258(int a1, int a2, uint *a3)
{
  uint *v3;
  int v4;
  uint *v5;
  int *v6;
  int v7;
  int result;

  v3 = a3;
  v4 = a1;
  v5 = (uint *)a2;
  switch ( (uchar)*a3 )
  {
    case 0u:
      if ( *(uchar *)(a2 + 5493) == 1 )
      {
        Function_223ec8c(a2 + 1596, 3);
        *(uint *)(v4 + 32) = 1;
      }
      else
      {
        *(uint *)(a1 + 32) = 0;
        if ( *(uint *)(a2 + 5156) <= 1 )
        {
          *a3 = 2;
          goto LABEL_15;
        }
        Function_223ec8c(a2 + 1596, 4);
        if ( v5[1291] == 1 )
        {
          v6 = Function_202c1e0(*v5);
          Function_202b758(*(uint *)(*(uint *)(v4 + 16) + 28), (int)v6, 4u);
        }
      }
      v5[7] = 60;
      ++*v3;
      goto LABEL_15;
    case 1u:
      v7 = *(uint *)(a2 + 28) - 1;
      *(uint *)(a2 + 28) = v7;
      if ( v7 < 0 )
        ++*a3;
      goto LABEL_15;
    case 2u:
      Function_200f174(0, 0, 0, 0, 6, 1, *(uint *)a2);
      ++*v3;
      goto LABEL_15;
    case 3u:
      if ( Function_200f2ac() )
        ++*v3;
      goto LABEL_15;
    case 4u:
      Function_223cb8c(a2, a3);
      Function_223caa4(v5);
      result = v5[3] + 1;
      break;
    default:
LABEL_15:
      result = v5[3];
      break;
  }
  return result;
}

//----- (0223C344) --------------------------------------------------------
int __fastcall Function_223c344(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_223db30(a2 + 860);
  Function_223dec4(v3 + 1356);
  Function_223e260(v3 + 1408);
  Function_223e260(v3 + 1420);
  Function_223e260(v3 + 1432);
  Function_223e34c(v3 + 1444);
  Function_223e5c0(v3 + 1564);
  Function_223e6f8(v3 + 1596);
  Function_223ed4c(v3 + 1652);
  Function_223f2a8(v3 + 2696);
  Function_223f4ac(v3 + 2824);
  Function_223f7a4(v3 + 5148);
  Function_223c87c(v2, v3);
  Function_223b784(v3);
  return *(uint *)(v3 + 12);
}

//----- (0223C3E8) --------------------------------------------------------
int __fastcall Function_223c3e8(int a1)
{
  int v1;
  int v2;
  short v3;
  int v4;
  int result;

  v1 = a1;
  v2 = a1 + 5320;
  if ( *(uchar *)(a1 + 5332) )
    v3 = *(ushort *)(a1 + 5616) - *(ushort *)(a1 + 5330);
  else
    v3 = *(ushort *)(a1 + 5616) + *(ushort *)(a1 + 5330);
  *(ushort *)(a1 + 5616) = v3;
  Function_223e4a4(a1 + 1444, *(ushort *)(a1 + 5616));
  Function_223c90c(v1);
  v4 = Function_223fb68(*(ushort *)(v2 + 10), *(uchar *)(v2 + 13));
  Function_223e4c0(v1 + 1444, v4);
  Function_223e51c(v1 + 1444, *(uchar *)(v2 + 13));
  Function_223e658(v1 + 1564);
  Function_223c480(v1);
  Function_223c758(v1);
  Function_223c558(v1);
  Function_223c600(v1);
  Function_223c6d4(v1);
  Function_223c7fc(v1);
  result = 0;
  *(uchar *)(v2 + 19) = 0;
  *(uchar *)(v2 + 18) = 0;
  *(uchar *)(v2 + 15) = 0;
  *(uchar *)(v2 + 14) = 0;
  return result;
}

//----- (0223C480) --------------------------------------------------------
int __fastcall Function_223c480(int a1)
{
  int v1;
  int v2;
  int result;
  int v4;

  v1 = a1;
  v2 = a1 + 5320;
  Function_223e484(a1 + 1444, 5, *((uchar *)&dword_2240208[11] + 7 * *(uchar *)(a1 + 5333)));
  Function_223e484(v1 + 1444, 6, *((uchar *)&dword_2240208[11] + 7 * *(uchar *)(v2 + 13) + 1));
  Function_223e484(v1 + 1444, 7, *((uchar *)&dword_2240208[11] + 7 * *(uchar *)(v2 + 13) + 2));
  Function_223e484(v1 + 1444, 0, *((uchar *)&dword_2240208[11] + 7 * *(uchar *)(v2 + 13) + 3));
  Function_223e484(v1 + 1444, 1, *((uchar *)&dword_2240208[12] + 7 * *(uchar *)(v2 + 13)));
  Function_223e484(v1 + 1444, 2, *((uchar *)&dword_2240208[12] + 7 * *(uchar *)(v2 + 13) + 1));
  result = 35914298;
  v4 = *((uchar *)&dword_2240208[12] + 7 * *(uchar *)(v2 + 13) + 2);
  if ( v4 != 8 )
  {
    if ( *(uchar *)(v2 + 16) )
      result = Function_223e4e0(v1 + 1444);
    else
      result = Function_223e484(v1 + 1444, v4, 0);
  }
  return result;
}

//----- (0223C558) --------------------------------------------------------
int __fastcall Function_223c558(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( *(uchar *)(a1 + 5337) != *(uchar *)(a1 + 5332)
    && *(ushort *)(a1 + 5330)
    && !*(uint *)(a1 + 704) )
  {
    if ( *(uchar *)(a1 + 5337) )
    {
      result = *(uint *)(a1 + 708);
      if ( result != 2 )
      {
        Function_223f3a0(v1 + 2696, 3);
        *(uint *)(v1 + 708) = 2;
        Function_223f3d0(v1 + 2696, 1);
        result = Function_2005748(0x6C1u);
      }
    }
    else
    {
      result = *(uint *)(a1 + 708);
      if ( result != 1 )
      {
        Function_223f3a0(v1 + 2696, 1);
        *(uint *)(v1 + 708) = 1;
        Function_223f3d0(v1 + 2696, 3);
        result = Function_2005748(0x6C1u);
      }
    }
  }
  else
  {
    Function_223f3d0(a1 + 2696, 1);
    Function_223f3d0(v1 + 2696, 3);
    result = 708;
    *(uint *)(v1 + 708) = 0;
  }
  return result;
}

//----- (0223C600) --------------------------------------------------------
int __fastcall Function_223c600(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = a1 + 5320;
  if ( *(uint *)(a1 + 708) || *(uint *)(a1 + 704) )
  {
    Function_223e994(a1 + 1596);
    *(uint *)(v1 + 716) = 0;
    result = 712;
    *(uint *)(v1 + 712) = 0;
  }
  else
  {
    if ( *(uint *)(a1 + 716) )
    {
      if ( Function_223e984(a1 + 1596) )
        *(uint *)(v1 + 716) = 0;
    }
    else if ( *(uchar *)(a1 + 5339) )
    {
      Function_223e994(a1 + 1596);
      Function_223e908(v1 + 1596, *((uchar *)dword_2240208 + *(uchar *)(v2 + 13)));
      *(uint *)(v1 + 716) = 1;
      *(uint *)(v1 + 712) = 0;
    }
    if ( *(uint *)(v1 + 712) )
    {
      result = Function_223e984(v1 + 1596);
      if ( result )
      {
        result = 712;
        *(uint *)(v1 + 712) = 0;
      }
    }
    else
    {
      result = *(uchar *)(v2 + 18);
      if ( *(uchar *)(v2 + 18) )
      {
        Function_223e994(v1 + 1596);
        Function_223e908(v1 + 1596, *((uchar *)&dword_2240208[1] + *(uchar *)(v2 + 13)));
        *(uint *)(v1 + 712) = 1;
        result = 716;
        *(uint *)(v1 + 716) = 0;
      }
    }
  }
  return result;
}

//----- (0223C6D4) --------------------------------------------------------
int __fastcall Function_223c6d4(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  v2 = a1 + 5320;
  if ( *(uchar *)(a1 + 5339) )
  {
    Function_223eddc(a1 + 1652, *(uchar *)(a1 + 5333), 2);
    Function_2005748(dword_2240208[*(uchar *)(v2 + 13) + 2] & 0xFFFF);
  }
  v3 = *(uchar *)(v2 + 18);
  if ( v3 == 1 )
  {
    Function_223eddc(v1 + 1652, *(uchar *)(v2 + 13), 1);
    Function_2005748(dword_2240208[*(uchar *)(v2 + 13) + 5] & 0xFFFF);
  }
  else if ( v3 == 2 )
  {
    Function_223eddc(v1 + 1652, *(uchar *)(v2 + 13), 0);
  }
  result = Function_223fb50(*(ushort *)(v2 + 10), *(uchar *)(v2 + 13));
  if ( !result )
    result = Function_223efcc(v1 + 1652);
  return result;
}

//----- (0223C758) --------------------------------------------------------
int __fastcall Function_223c758(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( *(uchar *)(a1 + 5334) )
  {
    if ( *(uchar *)(a1 + 5337) )
    {
      Function_223f3a0(a1 + 2696, 2);
      Function_223f3d0(v1 + 2696, 0);
      Function_2005748(0x6C1u);
      *(uint *)(v1 + 704) = 2;
    }
    else
    {
      Function_223f3a0(a1 + 2696, 0);
      Function_223f3d0(v1 + 2696, 2);
      Function_2005748(0x6C1u);
      *(uint *)(v1 + 704) = 1;
    }
  }
  result = *(uint *)(v1 + 704);
  if ( result == 1 )
  {
    result = Function_223f3f0(v1 + 2696, 0);
    if ( result == 1 )
    {
      result = 704;
      *(uint *)(v1 + 704) = 0;
    }
  }
  else if ( result == 2 )
  {
    result = Function_223f3f0(v1 + 2696, 2);
    if ( result == 1 )
    {
      result = 704;
      *(uint *)(v1 + 704) = 0;
    }
  }
  return result;
}

//----- (0223C7FC) --------------------------------------------------------
uchar *__fastcall Function_223c7fc(uchar *result)
{
  if ( result[5335] == 1 )
  {
    Function_223f544(result + 2824, result[5172], result[5173]);
    result = (uchar *)Function_2005748(0x6BFu);
  }
  return result;
}

//----- (0223C82C) --------------------------------------------------------
int __fastcall Function_223c82c(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  uchar *v5;
  int result;

  v2 = a2;
  v3 = a1;
  a2[1356] = (uint)Function_202a93c(*a2);
  v4 = 0;
  *((uchar *)v2 + 5492) = Function_223d570(v2[1290]);
  do
  {
    *((uchar *)v2 + 5312) = -128;
    *((uchar *)v2 + 5313) = 96;
    ++v4;
    v2 += 7;
  }
  while ( v4 < 4 );
  v5 = (uchar *)(v3 + 38);
  result = (uchar)*v5;
  if ( *v5 )
    result = Function_2035938(2);
  return result;
}

//----- (0223C87C) --------------------------------------------------------
int __fastcall Function_223c87c(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a1;
  v3 = a2;
  if ( !*(uint *)(a2 + 5424) )
    ErrorHandler();
  free(*(uint *)(v3 + 5424));
  result = 0;
  *(uint *)(v3 + 5424) = 0;
  if ( *(uchar *)(v2 + 38) )
    result = Function_2035938(0);
  return result;
}

//----- (0223C8B0) --------------------------------------------------------
int __fastcall Function_223c8b0(int a1, uchar *a2, int a3)
{
  int v3;
  uchar *v4;
  int v5;
  int v6;
  char v7;
  int v9;
  int v10;

  v3 = a1;
  v10 = 1;
  v4 = a2;
  v5 = a3;
  v6 = 0;
  v9 = Function_202440c(*(uint *)(*(uint *)(a1 + 16) + 12));
  if ( v5 > 0 )
  {
    while ( Function_202ab74(*(uint *)(*(uint *)(v3 + 16) + 8), v4) != 0xFFFF )
    {
      if ( ++v6 >= v5 )
        goto LABEL_5;
    }
    v10 = 0;
  }
LABEL_5:
  if ( !*(uchar *)(v3 + 38) )
  {
    v7 = Function_202a974((int)v4, 0);
    Function_206cfcc(v9, v7);
  }
  return v10;
}

//----- (0223C90C) --------------------------------------------------------
int __fastcall Function_223c90c(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( !*(uchar *)(a1 + 5332) && *(uint *)(a1 + 852) > (int)*(ushort *)(a1 + 5328)
    || *(uchar *)(a1 + 5332) == 1 && *(uint *)(a1 + 852) < (int)*(ushort *)(a1 + 5328) )
  {
    Function_2005748(dword_2240208[*(uchar *)(a1 + 5333) + 8] & 0xFFFF);
  }
  result = 852;
  *(uint *)(v1 + 852) = *(ushort *)(v1 + 5328);
  return result;
}

//----- (0223C958) --------------------------------------------------------
uint __fastcall Function_223c958(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int *v5;

  v4 = a1;
  v5 = LoadFromNARC_8(122, *a1, a3, a4);
  Function_223ce9c(v4);
  Function_223cc30(v4 + 8, *v4);
  Function_223cd64(v4);
  Function_223ccf8(v4);
  Function_223cd28(v4);
  Function_223cdd0(v4, v5);
  Function_223dee0(v4 + 339, v4[8], *v4, v5);
  Function_223e720(v4 + 399, v4[8], *v4, v5);
  Function_223e368(v4 + 361, v4[175], *v4, v5);
  Function_223e28c(v4 + 352, v4 + 11, v4 + 90, *v4, 0, 0);
  Function_223e28c(v4 + 358, v4 + 11, v4 + 90, *v4, 0, 2);
  Function_223e28c(v4 + 355, v4 + 11, v4 + 90, *v4, 5, 0);
  Function_223e5dc(v4 + 391, v4 + 11, v4 + 90, *v4);
  Function_223ed6c(v4 + 413, v4 + 11, v4 + 90, *v4);
  Function_223f2c4(v4 + 674, v4 + 11, *v4, v5);
  Function_223f4cc(v4 + 706, v4 + 11, v4 + 90, *v4);
  Function_223cf2c(v4);
  Call_FS_CloseFile(v5);
  byte_21BF6E1 = 1;
  return Function_201ffe8();
}

//----- (0223CAA4) --------------------------------------------------------
uint __fastcall Function_223caa4(int a1)
{
  int v1;

  v1 = a1;
  Function_223e760(a1 + 1596);
  Function_223df10(v1 + 1356);
  Function_223e438(v1 + 1444);
  Function_223ce7c(v1);
  Function_223e2c8(v1 + 1408);
  Function_223e2c8(v1 + 1420);
  Function_223e2c8(v1 + 1432);
  Function_223e63c(v1 + 1564);
  Function_223ed78(v1 + 1652);
  Function_223f348(v1 + 2696);
  Function_223f510(v1 + 2824);
  Function_223cccc(v1 + 32);
  Function_223cd1c(v1);
  Function_223cdc0(v1);
  Function_223cd54(v1);
  Function_223cf20(v1);
  Function_223d068(v1);
  byte_21BF6E1 = 0;
  return Function_201ffe8();
}

//----- (0223CB5C) --------------------------------------------------------
int __fastcall Function_223cb5c(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_223db4c(a1 + 215, v1 + 1319, v1 + 11, v1 + 90, *a1);
  return v1[3] + 1;
}

//----- (0223CB8C) --------------------------------------------------------
int __fastcall Function_223cb8c(int a1)
{
  int v1;

  v1 = a1;
  Function_223dc1c(a1 + 860, a1 + 44);
  return *(uint *)(v1 + 12) + 1;
}

//----- (0223CBA4) --------------------------------------------------------
int __fastcall Function_223cba4(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint *v12;
  int result;
  int v14;
  int v15;

  v15 = a4;
  v4 = a1;
  Call_G3X_Reset();
  v5 = Function_20b275c(17, 0, 0);
  v8 = Function_20b2628((int)v5, v6, v7);
  Function_20a73c0(v8, v9, v10, v11);
  v12 = (uint *)v4[175];
  if ( v12 )
    Function_20150ec(v12);
  v14 = 1;
  Function_20b275c(18, (int)&v14, 1);
  Function_20241bc(0, 0);
  result = v4[174];
  if ( result )
  {
    result = v4[11];
    if ( result )
      result = Function_20219f8(result);
  }
  return result;
}

//----- (0223CBFC) --------------------------------------------------------
int __fastcall Function_223cbfc(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_200a858();
  result = *(uint *)(v1 + 32);
  if ( result )
    result = Function_201c2b8(result);
  return result;
}

//----- (0223CC10) --------------------------------------------------------
char *Function_223cc10()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_22402F0;
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

//----- (0223CC30) --------------------------------------------------------
uint __fastcall Function_223cc30(uint **a1, uint a2, int a3, int a4)
{
  uint **v4;
  int *v5;
  char *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  char *v11;
  int *v12;
  uint result;
  uint v14;
  char v15;
  char v16;
  char v17;
  char v18;
  int v19;
  int v20;
  int v21;
  int v22;
  char v23;
  int v24;

  v24 = a4;
  v14 = a2;
  v4 = a1;
  Function_223cc10();
  *v4 = (uint *)Function_2018340(v14);
  v19 = 1;
  v20 = 0;
  v21 = 0;
  v22 = 1;
  SetGraphicsModes(&v19);
  Function_201ff0c(1u, 1);
  Function_2019060(0, 2);
  v5 = dword_2240318;
  v6 = &v23;
  v7 = 14;
  do
  {
    v8 = *v5;
    v9 = v5[1];
    v5 += 2;
    *(uint *)v6 = v8;
    *((uint *)v6 + 1) = v9;
    v6 += 8;
    --v7;
  }
  while ( v7 );
  v10 = 0;
  v11 = &v15;
  v15 = 1;
  v12 = (int *)&v23;
  v16 = 2;
  v17 = 4;
  v18 = 5;
  do
  {
    Function_20183c4(*v4, (uchar)*v11, v12, 0);
    Function_2019ebc(*v4, (uchar)*v11);
    result = Function_2019690((uchar)*v11, 32, 0, v14);
    ++v10;
    v12 += 7;
    ++v11;
  }
  while ( v10 < 4 );
  return result;
}

//----- (0223CCCC) --------------------------------------------------------
uint __fastcall Function_223cccc(int *a1)
{
  int *v1;

  v1 = a1;
  Function_2019044(*a1, 5);
  Function_2019044(*v1, 4);
  Function_2019044(*v1, 2);
  Function_2019044(*v1, 1);
  return free(*v1);
}

//----- (0223CCF8) --------------------------------------------------------
uint __fastcall Function_223ccf8(uint *a1)
{
  Function_223d754(a1 + 11, 72, 16, *a1);
  Function_201ff0c(0x10u, 1);
  return Function_201ff74(0x10u, 1);
}

//----- (0223CD1C) --------------------------------------------------------
int __fastcall Function_223cd1c(int a1)
{
  return Function_223d784(a1 + 44);
}

//----- (0223CD28) --------------------------------------------------------
int *__fastcall Function_223cd28(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int *result;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v10 = a4;
  v4 = a1;
  v6 = 48;
  v7 = 32;
  v8 = 32;
  v9 = 0;
  v9 = *a1;
  result = Function_2015064((int)&v6);
  v4[175] = (int)result;
  return result;
}

//----- (0223CD54) --------------------------------------------------------
uint __fastcall Function_223cd54(int a1)
{
  return Function_20150a8(*(int **)(a1 + 700));
}

//----- (0223CD64) --------------------------------------------------------
int __fastcall Function_223cd64(uint *a1)
{
  uint *v1;
  int v3;
  int v4;
  int v5;
  uint v6;

  v1 = a1;
  Function_20a7944();
  Function_200a784(0, 128, 0, 32, 0, 0x80u, 0, 0x20u, *v1);
  v3 = 32;
  v4 = 0x20000;
  v5 = 0;
  v6 = 0;
  v6 = *v1;
  Function_201e88c(&v3, 2097168, 16);
  Function_201f834(32, *v1);
  Function_201e994();
  return Function_201f8e4();
}

//----- (0223CDC0) --------------------------------------------------------
int *Function_223cdc0()
{
  Function_200a878();
  Function_201e958();
  return Function_201f8b4();
}

//----- (0223CDD0) --------------------------------------------------------
int __fastcall Function_223cdd0(uint *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;
  uint *v6;
  int v7;
  int v8;
  int *v9;
  int v10;
  int v11;

  v6 = a1;
  v7 = a2;
  v9 = dword_2240388;
  v11 = 12;
  v8 = (int)(a1 + 90);
  v2 = 0;
  v3 = 13;
  v4 = 14;
  v10 = (int)(a1 + 11);
  do
  {
    if ( v2 <= 0 || *(uchar *)v9 != 8 )
      Function_223d7a8(v10, v8, v7, *(uchar *)v9, 2, v4, v3, v11, v2 + 2000, *v6);
    else
      Function_223d894(v10, v8, v7, v6[91], v4, v3, v11, v2 + 2000, *v6);
    ++v2;
    v9 = (int *)((char *)v9 + 1);
    v3 += 3;
    v11 += 3;
    v4 += 3;
    result = v8 + 56;
    v8 += 56;
  }
  while ( v2 < 6 );
  return result;
}

//----- (0223CE7C) --------------------------------------------------------
int __fastcall Function_223ce7c(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = 0;
  v2 = a1 + 360;
  v3 = a1 + 44;
  do
  {
    result = Function_223d95c(v3, v2);
    ++v1;
    v2 += 56;
  }
  while ( v1 < 6 );
  return result;
}

//----- (0223CE9C) --------------------------------------------------------
int *Function_223ce9c()
{
  Function_20b28cc();
  G3X_InitMtxStack();
  GFX_CONTROL &= 0xCFFDu;
  GFX_CONTROL = GFX_CONTROL & 0xCFFF | 0x10;
  GFX_CONTROL &= 0xCFFBu;
  GFX_CONTROL = (GFX_CONTROL & 0xCFFF | 8) & 0xCFDF;
  G3X_SetClearColor(17407, 0, 0x7FFF, 63, 0);
  GFX_FLUSH = 2;
  GFX_VIEWPORT = -1073807360;
  Function_20a5a94(2u, 1);
  return Function_20a5d88(0x8000, 1);
}

//----- (0223CF20) --------------------------------------------------------
int *Function_223cf20()
{
  Function_20a5b1c();
  return Function_20a5f50();
}

//----- (0223CF2C) --------------------------------------------------------
ushort *__fastcall Function_223cf2c(uint *a1)
{
  uint *v1;
  int v2;
  uint *v3;
  int v4;
  uint *v5;
  ushort *result;

  v1 = a1;
  a1[1375] = LoadFromMsgNARC(0, 26, 464, *a1);
  v1[1376] = (uint)Function_200b368(4u, 64, *v1);
  v1[1377] = Function_2023790(64, *v1);
  v1[1378] = (uint)Function_200b1ec_CallMsgDecrypt((ushort **)v1[1375], 0);
  v1[1379] = (uint)Function_200b1ec_CallMsgDecrypt((ushort **)v1[1375], 1u);
  v1[1380] = (uint)Function_200b1ec_CallMsgDecrypt((ushort **)v1[1375], 2u);
  v1[1381] = (uint)Function_200b1ec_CallMsgDecrypt((ushort **)v1[1375], 0x14u);
  v1[1382] = (uint)Function_200b1ec_CallMsgDecrypt((ushort **)v1[1375], 0x15u);
  v1[1383] = (uint)Function_200b1ec_CallMsgDecrypt((ushort **)v1[1375], 0x16u);
  v1[1384] = (uint)Function_200b1ec_CallMsgDecrypt((ushort **)v1[1375], 0x17u);
  v1[1385] = (uint)Function_200b1ec_CallMsgDecrypt((ushort **)v1[1375], 0x18u);
  v1[1386] = (uint)Function_200b1ec_CallMsgDecrypt((ushort **)v1[1375], 0x19u);
  v1[1387] = (uint)Function_200b1ec_CallMsgDecrypt((ushort **)v1[1375], 8u);
  v2 = 0;
  v1[1388] = (uint)Function_200b1ec_CallMsgDecrypt((ushort **)v1[1375], 9u);
  v3 = v1;
  do
  {
    v3[1389] = (uint)Function_200b1ec_CallMsgDecrypt((ushort **)v1[1375], v2++ + 3);
    ++v3;
  }
  while ( v2 < 5 );
  v4 = 0;
  v5 = v1;
  do
  {
    result = Function_200b1ec_CallMsgDecrypt((ushort **)v1[1375], v4 + 10);
    v5[1394] = (uint)result;
    ++v4;
    ++v5;
  }
  while ( v4 < 10 );
  return result;
}

//----- (0223D068) --------------------------------------------------------
ushort *__fastcall Function_223d068(int a1, int a2)
{
  int v2;
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
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;

  v2 = a1;
  Function_20237bc_FreeMsg(*(uint *)(a1 + 5552), a2);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 5548), v3);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 5532), v4);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 5528), v5);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 5524), v6);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 5520), v7);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 5516), v8);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 5512), v9);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 5536), v10);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 5540), v11);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 5544), v12);
  v14 = 0;
  v15 = v2;
  do
  {
    Function_20237bc_FreeMsg(*(uint *)(v15 + 5556), v13);
    ++v14;
    v15 += 4;
  }
  while ( v14 < 5 );
  v16 = 0;
  v17 = v2;
  do
  {
    Function_20237bc_FreeMsg(*(uint *)(v17 + 5576), v13);
    ++v16;
    v17 += 4;
  }
  while ( v16 < 10 );
  Function_20237bc_FreeMsg(*(uint *)(v2 + 5508), v13);
  Function_200b3f0(*(uint **)(v2 + 5504), v18);
  return Function_200b190(*(ushort **)(v2 + 5500));
}

//----- (0223D144) --------------------------------------------------------
void **Function_223d144()
{
  return &off_2240390;
}

//----- (0223D14C) --------------------------------------------------------
int Function_223d14c()
{
  return 11;
}

//----- (0223D150) --------------------------------------------------------
int __fastcall Function_223d150(uint *a1, int a2)
{
  uint *v2;
  int v3;
  void **v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint *v9;
  int result;

  v2 = a1;
  v3 = a2;
  if ( a1[1291] == 1 )
    a1[1289] = Function_2035e18();
  else
    a1[1289] = 1;
  v4 = Function_223d144();
  v5 = Function_223d14c();
  v6 = *v2;
  v2[1290] = Function_223d4cc(v4, v5, v2, v2[1291]);
  Call_FillMemWithValue(v2 + 1368, 4u, 4u);
  if ( v2[1291] == 1 )
  {
    v7 = 0;
    v8 = 0;
    v9 = v2;
    do
    {
      v9[1369] = Function_2032ee8(v8);
      result = v9[1369];
      if ( result )
      {
        result = 5472;
        *((uchar *)v2 + v7++ + 5472) = v8;
      }
      ++v8;
      ++v9;
    }
    while ( v8 < 4 );
  }
  else
  {
    *((uchar *)v2 + 5472) = 0;
    result = 5476;
    v2[1369] = v3;
  }
  return result;
}

//----- (0223D1EC) --------------------------------------------------------
int __fastcall Function_223d1ec(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_223d558(*(uint *)(a1 + 5160));
  result = 5160;
  *(uint *)(v1 + 5160) = 0;
  return result;
}

//----- (0223D204) --------------------------------------------------------
int __fastcall Function_223d204(int a1, int a2, int a3, int a4)
{
  return Function_223b774(a4, 3);
}

//----- (0223D210) --------------------------------------------------------
int __fastcall Function_223d210(int a1, int a2, int a3, int a4)
{
  return Function_223b77c(a4, 8);
}

//----- (0223D21C) --------------------------------------------------------
int __fastcall Function_223d21c(int a1, int a2, char *a3, int a4)
{
  int v4;
  int v5;
  short *v6;
  ushort *v7;
  short v8;

  v4 = a4;
  memcpy((uchar *)(a4 + 5276), a3, a2);
  v5 = 10;
  v6 = (short *)(v4 + 5292);
  v7 = (ushort *)(v4 + 5320);
  do
  {
    v8 = *v6;
    ++v6;
    *v7 = v8;
    ++v7;
    --v5;
  }
  while ( v5 );
  return Function_223b774(v4, 5);
}

//----- (0223D258) --------------------------------------------------------
int __fastcall Function_223d258(int a1, int a2, char *a3, int a4)
{
  int v4;
  int v5;
  int result;
  int v7;
  int v8;
  int v9;
  int v10;
  char *v11;

  v4 = a1;
  v5 = a4;
  v10 = a2;
  v11 = a3;
  result = Function_223d570(*(uint *)(a4 + 5160));
  if ( !result )
  {
    memcpy((uchar *)(v5 + 5444 + 4 * v4), v11, v10);
    *(uchar *)(v5 + v4 + 5460) = 1;
    *(uint *)(v5 + 4 * v4 + 5220) = *(uint *)(v5 + 5444 + 4 * v4);
    result = 0;
    v7 = 0;
    do
    {
      if ( *(uchar *)(v5 + v7 + 5460) == 1 )
        ++result;
      ++v7;
    }
    while ( v7 < 4 );
    if ( result >= *(uint *)(v5 + 5156) )
    {
      v8 = Function_223ff44(v5 + 744, v5 + 5236);
      Function_223d4b4(v8);
      v9 = *(uint *)(v5 + 5160);
      result = Function_223d508(24);
    }
  }
  return result;
}

//----- (0223D2E8) --------------------------------------------------------
int __fastcall Function_223d2e8(int a1, int a2, char *a3, int a4)
{
  char v4;
  int v5;
  int v6;
  int v7;
  int result;
  int v9;

  v5 = a4;
  v6 = 28 * a1;
  v9 = a4 + 5334;
  if ( *(uchar *)(a4 + 5334 + 28 * a1) != 1 || a3[22] || a1 )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    v4 = *(uchar *)(a4 + v6 + 5332);
  }
  memcpy((uchar *)(a4 + 5312 + v6), a3, a2);
  if ( v7 == 1 )
  {
    *(uchar *)(v9 + v6) = 1;
    *(uchar *)(v5 + v6 + 5332) = v4;
  }
  result = 5634;
  ++*(ushort *)(v5 + 5634);
  return result;
}

//----- (0223D354) --------------------------------------------------------
uchar *__fastcall Function_223d354(int a1, int a2, char *a3, uchar *a4)
{
  uchar *v4;
  int v5;
  int v6;
  int v7;
  uchar *result;
  uchar *v9;

  v9 = a4;
  v4 = a4;
  v5 = 28 * a1;
  v6 = (int)(a4 + 5334);
  if ( a4[28 * a1 + 5334] != 1 || a3[14] )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    v9 = (uchar *)(uchar)a4[v5 + 5332];
  }
  result = memcpy(&a4[v5 + 5320], a3, a2);
  if ( v7 == 1 )
  {
    *(uchar *)(v6 + v5) = 1;
    result = v9;
    v4[v5 + 5332] = (uchar)v9;
  }
  return result;
}

//----- (0223D3A8) --------------------------------------------------------
int __fastcall Function_223d3a8(int a1, int a2, char *a3, int a4)
{
  int v4;
  int v5;
  int result;

  v4 = a1;
  v5 = a4;
  memcpy((uchar *)(a4 + 5312 + 28 * a1), a3, a2);
  result = *(ushort *)(v5 + 5624 + 2 * v4) + 1;
  *(ushort *)(v5 + 5624 + 2 * v4) = result;
  return result;
}

//----- (0223D3D8) --------------------------------------------------------
int __fastcall Function_223d3d8(int a1, int a2, char *a3, int a4)
{
  int v4;

  v4 = a4;
  memcpy((uchar *)(a4 + 5256), a3, a2);
  return Function_223b774(v4, 10);
}

//----- (0223D3F8) --------------------------------------------------------
uchar *__fastcall Function_223d3f8(int a1, int a2, char *a3, int a4)
{
  return memcpy(*(uchar **)(a4 + 5424), a3, a2);
}

//----- (0223D410) --------------------------------------------------------
int __fastcall Function_223d410(int a1, int a2, char *a3, int a4)
{
  int v4;

  v4 = a4;
  memcpy((uchar *)(a4 + 5493), a3, a2);
  return Function_223b774(v4, 12);
}

//----- (0223D430) --------------------------------------------------------
int __fastcall Function_223d430(int a1, int a2, char *a3, int a4)
{
  int v4;
  int v5;
  int v6;
  char *v7;
  int result;
  int v9;
  int v10;
  int v11;
  char v12;

  v4 = a1;
  v5 = a4;
  v6 = a2;
  v7 = a3;
  result = Function_223d570(*(uint *)(a4 + 5160));
  if ( !result )
  {
    memcpy((uchar *)(v5 + 5464 + v4), v7, v6);
    *(uchar *)(v5 + v4 + 5468) = 1;
    v9 = 0;
    v12 = 1;
    v10 = 0;
    do
    {
      if ( *(uchar *)(v5 + v10 + 5468) == 1 )
      {
        ++v9;
        v12 &= *(uchar *)(v5 + v10 + 5464);
      }
      ++v10;
    }
    while ( v10 < 4 );
    result = *(uint *)(v5 + 5156);
    if ( v9 >= result )
    {
      Function_223d4b0();
      v11 = *(uint *)(v5 + 5160);
      result = Function_223d508(29);
    }
  }
  return result;
}

//----- (0223D4AC) --------------------------------------------------------
int Function_223d4ac()
{
  return 0;
}

//----- (0223D4B0) --------------------------------------------------------
int Function_223d4b0()
{
  return 1;
}

//----- (0223D4B4) --------------------------------------------------------
int Function_223d4b4()
{
  return 36;
}

//----- (0223D4B8) --------------------------------------------------------
int Function_223d4b8()
{
  return 4;
}

//----- (0223D4BC) --------------------------------------------------------
int Function_223d4bc()
{
  return 28;
}

//----- (0223D4C0) --------------------------------------------------------
int Function_223d4c0()
{
  return 20;
}

//----- (0223D4C4) --------------------------------------------------------
int Function_223d4c4()
{
  return 20;
}

//----- (0223D4C8) --------------------------------------------------------
int Function_223d4c8()
{
  return 8;
}

//----- (0223D4CC) --------------------------------------------------------
uint *__fastcall Function_223d4cc(int a1, int a2, int a3, int a4, uint a5)
{
  int v5;
  int v6;
  int v7;
  uint *v8;
  int v10;

  v5 = a1;
  v6 = a2;
  v10 = a3;
  v7 = a4;
  v8 = (uint *)malloc(a5, 8);
  *v8 = v7;
  v8[1] = 0;
  if ( v7 == 1 )
    Function_2032798(v5, v6, v10);
  else
    v8[1] = Function_223d584(v5, v6, v10, a5);
  return v8;
}

//----- (0223D508) --------------------------------------------------------
int __fastcall Function_223d508(int a1, int a2, int a3, uint *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  if ( *a4 != 1 )
    return Function_223d638(a4[1], a1, a2, a3);
  if ( Function_203895c() != 29 )
    return Function_20359dc(v4, v5, v6);
  v7 = 1;
  if ( Function_203626c(v4) )
    v7 = 0;
  if ( !((int (*)(void))dword_21D12D4[76])() )
    v7 = 0;
  if ( v7 )
    return Function_20359dc(v4, v5, v6);
  return 0;
}

//----- (0223D558) --------------------------------------------------------
uint __fastcall Function_223d558(uint *a1)
{
  int v1;

  v1 = (int)a1;
  if ( !*a1 )
    Function_223d620(a1[1]);
  return free(v1);
}

//----- (0223D570) --------------------------------------------------------
int __fastcall Function_223d570(uint *a1)
{
  int result;

  if ( *a1 == 1 )
    result = Function_203608c();
  else
    result = 0;
  return result;
}

//----- (0223D584) --------------------------------------------------------
int *__fastcall Function_223d584(int a1, int a2, int a3, uint a4)
{
  int v4;
  int v5;
  int v6;
  int *v7;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = (int *)malloc(a4, 432);
  Call_FillMemWithValue(v7, 0, 0x1B0u);
  v7[104] = v5;
  v7[105] = v4;
  v7[106] = v6;
  v7[107] = (int)AddTaskToTaskList3((int)Function_223d5cc, (int)v7, 0x1388u);
  return v7;
}

//----- (0223D5CC) --------------------------------------------------------
int __fastcall Function_223d5cc(int a1, int *a2)
{
  int *v2;
  int *v3;
  int result;
  int v5;

  v2 = a2;
  v5 = 0;
  v3 = a2;
  do
  {
    if ( *v3 == 1 )
    {
      (*(void (__fastcall **)(uint, int, int *, int))(v2[104] + 12 * v3[1]))(0, v3[12], v3 + 2, v2[106]);
      Call_FillMemWithValue(v3, 0, 0x34u);
    }
    v3 += 13;
    result = v5 + 1;
    v5 = result;
  }
  while ( result < 8 );
  return result;
}

//----- (0223D620) --------------------------------------------------------
uint __fastcall Function_223d620(int a1)
{
  int v1;

  v1 = a1;
  Call_RemoveTaskFromTaskList(*(int **)(a1 + 428));
  return free(v1);
}

//----- (0223D638) --------------------------------------------------------
int __fastcall Function_223d638(uint *a1, int a2, char *a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint *v9;
  int result;
  char *v11;

  v4 = a1;
  v5 = 0;
  v11 = a3;
  v6 = a2;
  v7 = a4;
  v8 = 0;
  v9 = v4;
  while ( *v9 )
  {
    ++v8;
    v9 += 13;
    if ( v8 >= 8 )
      goto LABEL_5;
  }
  v5 = (int)&v4[13 * v8];
LABEL_5:
  if ( !v5 )
    ErrorHandler();
  if ( (*(int (**)(void))(v4[104] + 12 * (v6 - 22) + 4))() != v7 )
    ErrorHandler();
  if ( v7 >= 38 )
    ErrorHandler();
  *(uint *)(v5 + 4) = v6 - 22;
  if ( v7 > 0 )
    memcpy((uchar *)(v5 + 8), v11, v7);
  *(uint *)(v5 + 48) = v7;
  result = 1;
  *(uint *)v5 = 1;
  return result;
}

//----- (0223D6A8) --------------------------------------------------------
uint __fastcall Function_223d6a8(int a1, int a2, int a3)
{
  return a1 - ((uint)Function_2002d7c(a3, a2, 0) >> 1);
}

//----- (0223D6BC) --------------------------------------------------------
int *__fastcall Function_223d6bc(int a1, uint a2, int a3, int a4)
{
  int v4;
  int v5;
  int *v6;
  int v8;
  int v9;
  int v10;
  int v11;

  v11 = a4;
  v4 = a1;
  v5 = Function_20071b4(a4, a2, 0, &v8, a3);
  v9 = v4;
  v10 = v8;
  v6 = Function_2015128(&v9);
  free(v5);
  return v6;
}

//----- (0223D6EC) --------------------------------------------------------
int *__fastcall Function_223d6ec(int a1, uint a2, int a3, int a4)
{
  int v4;
  int v5;
  int *v6;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a1;
  v5 = Function_20071ec(a4, a2, &v8, a3);
  v9 = v4;
  v10 = v8;
  v11 = 1;
  v6 = Function_20151a4(&v9);
  free(v5);
  return v6;
}

//----- (0223D720) --------------------------------------------------------
int __fastcall Function_223d720(int a1, int a2, int a3, short a4, short a5, int a6)
{
  int v6;
  int v8;
  int v9;
  int v10;
  short v11;
  short v12;
  short v13;
  int v14;
  int v15;
  short v16;

  v8 = a1;
  v9 = a2;
  v10 = a3;
  v11 = a4;
  v12 = a5;
  v13 = 0;
  v14 = 31;
  v15 = a6;
  v16 = 0;
  v6 = Function_2015214((int **)&v8);
  Function_2015240(v6, 0);
  return v6;
}

//----- (0223D754) --------------------------------------------------------
int **__fastcall Function_223d754(int **a1, int a2, int a3, int a4)
{
  int **v4;
  uint v5;
  int v6;
  int *v7;
  int **result;

  v4 = a1;
  v5 = a4;
  v6 = a3;
  *a1 = Function_20095c4(a2, (int)(a1 + 1), a4, a4);
  v7 = 0;
  do
  {
    result = Function_2009714(v6, v7, v5);
    v4[75] = (int *)result;
    v7 = (int *)((char *)v7 + 1);
    ++v4;
  }
  while ( (int)v7 < 4 );
  return result;
}

//----- (0223D784) --------------------------------------------------------
uint __fastcall Function_223d784(int **a1)
{
  int **v1;
  int v2;
  uint result;

  v1 = a1;
  Function_2021964(*a1);
  v2 = 0;
  *v1 = 0;
  do
  {
    result = Function_2009754(v1[75]);
    ++v2;
    ++v1;
  }
  while ( v2 < 4 );
  return result;
}

//----- (0223D7A8) --------------------------------------------------------
int __fastcall Function_223d7a8(int *a1, int **a2, int a3, uint a4, int a5, uint a6, uint a7, uint a8, int a9, uint a10)
{
  int *v10;
  int **v11;
  uint v12;
  int v13;

  v10 = a1;
  v11 = a2;
  v12 = a4;
  v13 = a3;
  *a2 = Function_2009aa8(a1[75], a3, a6, 0, a9, 1, a10, 1);
  v11[1] = Function_2009b64(v10[76], v13, v12, 0, a9, 1, a5, a10, 1);
  v11[4] = 0;
  v11[2] = Function_2009bc4(v10[77], v13, a7, 0, a9, 2u, a10);
  v11[3] = Function_2009bc4(v10[78], v13, a8, 0, a9, 3u, a10);
  if ( !Function_200a450(*v11) )
    ErrorHandler();
  Function_2009d4c(*v11);
  if ( !Function_200a640(v11[1]) )
    ErrorHandler();
  Function_2009d4c(v11[1]);
  return Function_20093b4((int)(v11 + 5), a9, a9, a9, a9, -1, -1, 0, 0, v10[75], v10[76], v10[77], v10[78], 0, 0);
}

//----- (0223D894) --------------------------------------------------------
int __fastcall Function_223d894(int *a1, int **a2, int a3, int *a4, uint a5, uint a6, uint a7, int a8, uint a9)
{
  int *v9;
  int **v10;
  int *v11;
  int v12;
  int v14;

  v9 = a1;
  v10 = a2;
  v11 = a4;
  v12 = a3;
  *a2 = Function_2009aa8(a1[75], a3, a5, 0, a8, 1, a9, 1);
  v10[1] = v11;
  v10[4] = (int *)1;
  v14 = Function_2009e08(v11);
  v10[2] = Function_2009bc4(v9[77], v12, a6, 0, a8, 2u, a9);
  v10[3] = Function_2009bc4(v9[78], v12, a7, 0, a8, 3u, a9);
  if ( !Function_200a450(*v10) )
    ErrorHandler();
  Function_2009d4c(*v10);
  return Function_20093b4((int)(v10 + 5), a8, v14, a8, a8, -1, -1, 0, 0, v9[75], v9[76], v9[77], v9[78], 0, 0);
}

//----- (0223D95C) --------------------------------------------------------
int __fastcall Function_223d95c(int a1, int **a2)
{
  int **v2;
  int v3;
  int v4;
  int **v5;
  int result;

  v2 = a2;
  v3 = a1;
  Function_200a4e4(*a2);
  if ( !v2[4] )
    Function_200a6dc(v2[1]);
  v4 = 0;
  v5 = v2;
  do
  {
    if ( v4 == 1 )
    {
      result = (int)v2[4];
      if ( !result )
        result = Function_2009d68(*(int **)(v3 + 300), (uint **)*v5);
    }
    else
    {
      result = Function_2009d68(*(int **)(v3 + 300), (uint **)*v5);
    }
    ++v4;
    ++v5;
    v3 += 4;
  }
  while ( v4 < 4 );
  return result;
}

//----- (0223D9A8) --------------------------------------------------------
int __fastcall Function_223d9a8(int *a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v9 = *a1;
  v10 = a2 + 20;
  v13 = a5;
  v11 = a3;
  v14 = a6;
  v15 = 1;
  v12 = a4;
  v16 = a7;
  v7 = Function_2021b90(&v9);
  if ( !v7 )
    ErrorHandler();
  return v7;
}

//----- (0223D9DC) --------------------------------------------------------
uint *__fastcall Function_223d9dc(uint *result, int a2, int a3, int a4)
{
  *result = a2;
  result[1] = a2;
  result[2] = a3 - a2;
  result[4] = a4;
  result[3] = 0;
  return result;
}

//----- (0223D9EC) --------------------------------------------------------
int __fastcall Function_223d9ec(uint *a1)
{
  uint *v1;
  long long v2;
  int v3;
  int v4;
  int result;

  v1 = a1;
  v2 = ll_mul((int)a1[2], (int)(a1[3] << 12));
  *v1 = FX_Div((v2 + 2048) >> 12, v1[4] << 12) + v1[1];
  v3 = v1[4];
  v4 = v1[3] + 1;
  if ( v4 > v3 )
  {
    v1[3] = v3;
    result = 1;
  }
  else
  {
    v1[3] = v4;
    result = 0;
  }
  return result;
}

//----- (0223DA34) --------------------------------------------------------
int __fastcall Function_223da34(uint *a1, int a2, int a3, int a4, int a5)
{
  uint *v5;
  int v6;
  long long v7;
  int v8;
  int v9;
  long long v10;
  int v11;
  int result;

  v5 = a1;
  v6 = a3;
  LODWORD(v7) = a4;
  v8 = a2;
  v9 = a4;
  HIDWORD(v7) = a4 >> 31;
  v10 = ll_mul(v7, a5 << 12);
  v11 = FX_Div(
          (((ll)(int)(v6 - v8 - (ull)((v10 + 2048) >> 12)) << 13) + 2048) >> 12,
          a5 * a5 << 12);
  *v5 = v8;
  v5[1] = v8;
  v5[2] = v9;
  v5[3] = v11;
  result = 0;
  v5[4] = 0;
  v5[5] = a5;
  return result;
}

//----- (0223DA94) --------------------------------------------------------
int __fastcall Function_223da94(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  long long v4;
  int v5;
  int v6;
  int result;

  v1 = a1;
  v2 = a1[4];
  v3 = (ll_mul((int)a1[2], v2 << 12) + 2048) >> 12;
  v4 = ll_mul((int)v1[3], v2 * v2 << 12);
  *v1 = v1[1] + v3 + FX_Div((v4 + 2048) >> 12, 0x2000);
  v5 = v1[5];
  v6 = v1[4] + 1;
  if ( v6 > v5 )
  {
    v1[4] = v5;
    result = 1;
  }
  else
  {
    v1[4] = v6;
    result = 0;
  }
  return result;
}

//----- (0223DAFC) --------------------------------------------------------
int __fastcall Function_223dafc(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int result;

  *a1 = a2;
  a1[1] = a3;
  v4 = a1 + 2;
  result = a4;
  *v4 = a4;
  return result;
}

//----- (0223DB18) --------------------------------------------------------
int __fastcall Function_223db18(int *a1, int a2)
{
  int v2;
  int *v3;
  int result;

  v2 = a2;
  v3 = a1;
  Call_FillMemWithValue(a1, 0, 0x1F0u);
  result = 264;
  v3[66] = v2;
  return result;
}

//----- (0223DB30) --------------------------------------------------------
int *__fastcall Function_223db30(int *a1)
{
  int *v1;

  v1 = a1;
  if ( *a1 )
    ErrorHandler();
  return Call_FillMemWithValue(v1, 0, 0x1F0u);
}

//----- (0223DB4C) --------------------------------------------------------
uint *__fastcall Function_223db4c(uint *a1, uint *a2, int a3, int a4, uint a5)
{
  int *v5;
  uint *v6;
  int **v7;
  int v8;
  int v9;
  uint *result;
  uint *v11;
  uint *v12;
  int v13;
  int *v14;
  int v15;
  int v16;

  v11 = a1;
  v12 = a2;
  v5 = (int *)a3;
  v13 = a4;
  v14 = LoadFromNARC_8(53, a5, a3, a4);
  v6 = v11;
  v15 = 0;
  v16 = 0;
  v7 = (int **)(v11 + 10);
  do
  {
    if ( *v12 )
    {
      Function_223d7a8(v5, v7, (int)v14, *v12 - 79, 1, *v12 - 143, 5u, 4u, v16 + 1000, a5);
      v8 = Function_223d9a8(v5, (int)v7, 0, 0, 0, 0, a5);
      v6[2] = v8;
      Function_2021cac(v8, 0);
      v9 = Function_223d9a8(v5, v13, 0, 0, 0, 0, a5);
      v6[6] = v9;
      Function_2021cac(v9, 0);
      Function_2021d6c(v6[6], 1u);
      v7 += 14;
      ++v6;
      ++v15;
    }
    if ( v11[66] == v15 )
      break;
    ++v12;
    ++v16;
  }
  while ( v16 < 4 );
  Call_FS_CloseFile(v14);
  result = v11;
  *v11 = 1;
  return result;
}

//----- (0223DC1C) --------------------------------------------------------
int __fastcall Function_223dc1c(uint *a1, int a2)
{
  uint *v2;
  int v3;
  uint *v4;
  int **v5;
  int result;
  int v7;

  v2 = a1;
  v7 = a2;
  if ( *a1 != 1 )
    ErrorHandler();
  v3 = 0;
  if ( v2[66] > 0 )
  {
    v4 = v2;
    v5 = (int **)(v2 + 10);
    do
    {
      Function_2021bd4(v4[2]);
      Function_2021bd4(v4[6]);
      Function_223d95c(v7, v5);
      ++v3;
      ++v4;
      v5 += 14;
    }
    while ( v3 < v2[66] );
  }
  result = 0;
  *v2 = 0;
  return result;
}

//----- (0223DC68) --------------------------------------------------------
uint *__fastcall Function_223dc68(uint *a1)
{
  int *v1;
  uint *v2;
  uint *v3;
  uint *v4;
  int v5;
  uint *result;
  uint *v7;
  uint *v8;
  int v9;
  char v10;

  v7 = a1;
  if ( a1[1] )
    ErrorHandler();
  v9 = 0;
  if ( v7[66] > 0 )
  {
    v8 = v7 + 67;
    v1 = &dword_2240460;
    v2 = v7 + 91;
    v3 = v7;
    v4 = v7;
    do
    {
      Function_223da34(
        v8,
        *((short *)v1 + 4) << 12,
        *((short *)v1 + 5) << 12,
        *v1,
        *((uchar *)v1 + 16));
      Function_223da34(
        v2,
        *((short *)v1 + 6) << 12,
        *((short *)v1 + 7) << 12,
        v1[1],
        *((uchar *)v1 + 16));
      Function_223dafc(&v10, v3[67], v3[91], 0);
      Function_2021c50((uint *)v4[2], (int *)&v10);
      v4[115] = 0;
      v5 = *((uchar *)v1 + 17);
      v1 += 5;
      v4[119] = v5;
      v8 += 6;
      v2 += 6;
      ++v9;
      v3 += 6;
      ++v4;
    }
    while ( v9 < v7[66] );
  }
  result = v7;
  v7[123] = 0;
  v7[1] = 1;
  return result;
}

//----- (0223DD30) --------------------------------------------------------
int __fastcall Function_223dd30(uint *a1)
{
  uint *v1;
  int v3;
  int v4;
  int v5;
  uint *v6;
  uint *v7;
  uint *v8;
  int v9;
  int v10;
  uint *v11;
  int v12;
  char v13;

  v1 = a1;
  if ( !a1[1] )
    return 1;
  v3 = a1[123];
  if ( v3 < (int)a1[66] )
  {
    --a1[v3 + 119];
    v4 = (int)&a1[a1[123]];
    if ( *(uint *)(v4 + 476) <= 0 )
    {
      *(uint *)(v4 + 460) = 1;
      Function_2021cac(a1[a1[123] + 2], 1);
      ++v1[123];
    }
  }
  v12 = 0;
  v5 = v1[66];
  if ( v5 > 0 )
  {
    v6 = v1;
    v11 = v1 + 67;
    v7 = v1 + 91;
    v8 = v1;
    do
    {
      switch ( (uchar)v6[115] )
      {
        case 0u:
        case 3u:
          break;
        case 1u:
          v9 = Function_223da94(v11);
          Function_223da94(v7);
          Function_223dafc(&v13, v8[67], v8[91], 0);
          Function_2021c50((uint *)v6[2], (int *)&v13);
          if ( v9 == 1 )
          {
            Function_2021c50((uint *)v6[6], (int *)&v13);
            Function_2021cac(v6[6], 1);
            Function_2021cc8(v6[6], 1);
            Function_2021cac(v6[2], 0);
            Function_2005748(0x6BCu);
            ++v6[115];
          }
          break;
        case 2u:
          if ( !Function_2021fd0(v6[6]) )
          {
            Function_2021cac(v6[6], 0);
            ++v6[115];
          }
          break;
        default:
          ErrorHandler();
          break;
      }
      ++v6;
      v11 += 6;
      v7 += 6;
      ++v12;
      v5 = v1[66];
      v8 += 6;
    }
    while ( v12 < v5 );
  }
  if ( v1[v5 + 114] != 3 )
    return v10;
  v1[1] = 0;
  return 1;
}

//----- (0223DEA0) --------------------------------------------------------
int __fastcall Function_223dea0(int *a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int v7;
  int *v8;
  int v9;
  int result;

  v6 = a2;
  v7 = a3;
  v8 = a1;
  v9 = a4;
  Call_FillMemWithValue(a1, 0, 0x34u);
  v8[6] = v7;
  v8[5] = v6;
  *v8 = a6;
  result = a5;
  v8[7] = v9;
  v8[4] = a5;
  return result;
}

//----- (0223DEC4) --------------------------------------------------------
int *__fastcall Function_223dec4(int *a1)
{
  int *v1;

  v1 = a1;
  if ( a1[12] )
    ErrorHandler();
  return Call_FillMemWithValue(v1, 0, 0x34u);
}

//----- (0223DEE0) --------------------------------------------------------
int __fastcall Function_223dee0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int result;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( *(uint *)(a1 + 48) )
    ErrorHandler();
  *(uint *)(v4 + 4) = v5;
  Function_223e09c(v4, v6);
  Function_223e15c(v4, v6, v7);
  result = 1;
  *(uint *)(v4 + 48) = 1;
  return result;
}

//----- (0223DF10) --------------------------------------------------------
int __fastcall Function_223df10(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( *(uint *)(a1 + 48) != 1 )
    ErrorHandler();
  Function_223e138(v1);
  Function_223e208(v1);
  result = 0;
  *(uint *)(v1 + 48) = 0;
  return result;
}

//----- (0223DF30) --------------------------------------------------------
uint __fastcall Function_223df30(int a1, uint a2)
{
  int v2;

  v2 = a1;
  Function_200b70c(*(uint *)(*(uint *)(a1 + 24) + 4), 0, a2);
  Function_200c388(
    *(uint **)(*(uint *)(v2 + 24) + 4),
    *(uint *)(*(uint *)(v2 + 24) + 8),
    *(uint *)(*(uint *)(v2 + 24) + 16));
  Function_201ada4_ClearTextBox(*(uint *)(v2 + 8), 15);
  Function_223e21c(*(uint *)(v2 + 8), *(uint *)(*(uint *)(v2 + 24) + 8));
  return Function_200e060(*(uint *)(v2 + 8), 0, 1, 0);
}

//----- (0223DF70) --------------------------------------------------------
int __fastcall Function_223df70(int a1)
{
  int v1;

  v1 = a1;
  Function_201acf4(*(uint *)(a1 + 8));
  return Function_2019ebc(*(uint **)(v1 + 4), 4u);
}

//----- (0223DF84) --------------------------------------------------------
uint __fastcall Function_223df84(int a1)
{
  int v1;

  v1 = a1;
  Function_201ada4_ClearTextBox(*(uint *)(a1 + 8), 15);
  Function_223e21c(*(uint *)(v1 + 8), *(uint *)(*(uint *)(v1 + 24) + 12));
  return Function_200e060(*(uint *)(v1 + 8), 0, 1, 0);
}

//----- (0223DFAC) --------------------------------------------------------
int __fastcall Function_223dfac(int *a1)
{
  int *v1;
  int result;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  result = a1[5];
  if ( result != 1 )
  {
    v3 = 0;
    if ( result > 0 )
    {
      do
      {
        v4 = 12 * (((uint)v3 >> 31) + __ROR4__((v3 << 31) - ((uint)v3 >> 31), 31));
        Function_20198e8(
          v1[1],
          5,
          (v4 + 5) & 0xFF,
          (5 * (v3 / 2) + 13) & 0xFF,
          0xAu,
          4u,
          v1[11] + 12,
          10 * ((v3 < 0) + __ROR4__((v3 << 31) - ((uint)v3 >> 31), 31)),
          4 * (v3 / 2),
          0x14u,
          8u);
        Function_2019e2c(v1[1], 5, (v4 + 5) & 0xFF, (5 * (v3 / 2) + 13) & 0xFF, 0xAu, 4u, 2u);
        v5 = *(uint *)(v1[7] + 4 * *(uchar *)(v1[7] + v3 + 304) + 308);
        Function_200b498(*(uint *)(v1[6] + 4), 0);
        Function_200c388(*(uint **)(v1[6] + 4), *(uint *)(v1[6] + 8), *(uint *)(v1[6] + 20));
        Function_223d6a8(
          96 * (((uint)v3 >> 31) + __ROR4__((v3 << 31) - ((uint)v3 >> 31), 31)) + 32,
          *(uint *)(v1[6] + 8),
          1);
        Function_223e21c(v1[3], *(uint *)(v1[6] + 8));
        ++v3;
      }
      while ( v3 < v1[5] );
    }
    Function_201a9a4(v1[3]);
    result = Function_201c3c0(v1[1], 5);
  }
  return result;
}

//----- (0223E09C) --------------------------------------------------------
uint __fastcall Function_223e09c(int a1, uint a2)
{
  uint v2;
  int v3;

  v2 = a2;
  v3 = a1;
  *(uint *)(a1 + 8) = Function_201a778(a2, 1);
  *(uint *)(v3 + 12) = Function_201a778(v2, 1);
  Function_201a7e8(*(uint **)(v3 + 4), *(uint *)(v3 + 8), 4, 4, 19, 0x17u, 4u, 1, 31);
  Function_201a7e8(*(uint **)(v3 + 4), *(uint *)(v3 + 12), 4, 6, 13, 0x14u, 8u, 1, 31);
  Function_201ada4_ClearTextBox(*(uint *)(v3 + 8), 15);
  Function_201ada4_ClearTextBox(*(uint *)(v3 + 12), 0);
  Function_200dd0c(*(uint **)(v3 + 4), 4u, 1, 0, *(uint *)(v3 + 16), v2);
  LoadFromNARC_PlFont2(4u, 32, v2);
  return Function_200e060(*(uint *)(v3 + 8), 1, 1, 0);
}

//----- (0223E138) --------------------------------------------------------
uint __fastcall Function_223e138(int a1)
{
  int v1;

  v1 = a1;
  Function_201a8fc(*(uint *)(a1 + 8));
  Function_201a928(*(uint *)(v1 + 8), 1);
  Function_201a8fc(*(uint *)(v1 + 12));
  return Function_201a928(*(uint *)(v1 + 12), 1);
}

//----- (0223E15C) --------------------------------------------------------
int __fastcall Function_223e15c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  uint v6;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  Function_2007130(a3, 1u, 4u, 64, 64, a2);
  Function_20070e8(v3, 0, *(uint **)(v4 + 4), 5u, 0, 0, 0, v5);
  if ( *(uint *)(v4 + 20) == 1 )
    v6 = 2;
  else
    v6 = 3;
  *(uint *)(v4 + 32) = Function_20071d0(v3, v6, 0, (uint *)(v4 + 36), v5);
  Function_20198c0(
    *(uint *)(v4 + 4),
    5,
    *(uint *)(v4 + 36) + 12,
    0,
    0,
    (uint)**(ushort **)(v4 + 36) << 21 >> 24,
    (uint)*(ushort *)(*(uint *)(v4 + 36) + 2) << 21 >> 24);
  Function_2019e2c(
    *(uint *)(v4 + 4),
    5,
    0,
    0,
    (uint)**(ushort **)(v4 + 36) << 21 >> 24,
    (uint)*(ushort *)(*(uint *)(v4 + 36) + 2) << 21 >> 24,
    3u);
  *(uint *)(v4 + 40) = Function_20071d0(v3, 4u, 0, (uint *)(v4 + 44), v5);
  return Function_201c3c0(*(uint *)(v4 + 4), 5);
}

//----- (0223E208) --------------------------------------------------------
uint __fastcall Function_223e208(int a1)
{
  int v1;

  v1 = a1;
  free(*(uint *)(a1 + 32));
  return free(*(uint *)(v1 + 40));
}

//----- (0223E21C) --------------------------------------------------------
int __fastcall Function_223e21c(int a1)
{
  return Function_201d78c(a1, 1);
}

//----- (0223E244) --------------------------------------------------------
uchar *__fastcall Function_223e244(uchar *result)
{
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  result[5] = 0;
  result[6] = 0;
  result[7] = 0;
  result[8] = 0;
  result[9] = 0;
  result[10] = 0;
  result[11] = 0;
  return result;
}

//----- (0223E260) --------------------------------------------------------
int __fastcall Function_223e260(uint *a1)
{
  uchar *v1;
  int result;

  v1 = a1;
  if ( *a1 )
    ErrorHandler();
  result = 0;
  *v1 = 0;
  v1[1] = 0;
  v1[2] = 0;
  v1[3] = 0;
  v1[4] = 0;
  v1[5] = 0;
  v1[6] = 0;
  v1[7] = 0;
  v1[8] = 0;
  v1[9] = 0;
  v1[10] = 0;
  v1[11] = 0;
  return result;
}

//----- (0223E28C) --------------------------------------------------------
int __fastcall Function_223e28c(uint *a1, int *a2, int a3, int a4, int a5, uint a6)
{
  uint *v6;
  int v7;
  int result;

  v6 = a1;
  v7 = Function_223d9a8(a2, a3 + 56 * a5, 0x80000, 393216, 0, 0, a4);
  v6[2] = v7;
  Function_2021cac(v7, 0);
  Function_2021d6c(v6[2], a6);
  result = 1;
  *v6 = 1;
  return result;
}

//----- (0223E2C8) --------------------------------------------------------
int __fastcall Function_223e2c8(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  if ( *a1 != 1 )
    ErrorHandler();
  Function_2021bd4(v1[2]);
  result = 0;
  *v1 = 0;
  return result;
}

//----- (0223E2E4) --------------------------------------------------------
uint __fastcall Function_223e2e4(int a1)
{
  int v1;

  v1 = a1;
  Function_2021cac(*(uint *)(a1 + 8), 1);
  return Function_2021cc8(*(uint *)(v1 + 8), 1);
}

//----- (0223E2FC) --------------------------------------------------------
int __fastcall Function_223e2fc(int a1, int a2, int a3, int a4)
{
  int v4;
  int v6;
  int v7;
  int v8;

  v8 = a4;
  v4 = a1;
  Function_2021cac(*(uint *)(a1 + 8), 1);
  Function_2021cc8(*(uint *)(v4 + 8), 1);
  v6 = 688128;
  v7 = 245760;
  return Function_2021c50(*(uint **)(v4 + 8), &v6);
}

//----- (0223E32C) --------------------------------------------------------
BOOL __fastcall Function_223e32c(int a1)
{
  return Function_2021fd0(*(uint *)(a1 + 8)) == 0;
}

//----- (0223E340) --------------------------------------------------------
int *__fastcall Function_223e340(int *a1)
{
  return Call_FillMemWithValue(a1, 0, 0x78u);
}

//----- (0223E34C) --------------------------------------------------------
int *__fastcall Function_223e34c(int *a1)
{
  int *v1;

  v1 = a1;
  if ( a1[29] )
    ErrorHandler();
  return Call_FillMemWithValue(v1, 0, 0x78u);
}

//----- (0223E368) --------------------------------------------------------
int **__fastcall Function_223e368(int **a1, int a2, int a3, int a4)
{
  int v4;
  const char *v5;
  int **v6;
  int v7;
  int *v8;
  const char *v9;
  int **v10;
  int v11;
  char *v12;
  char *v13;
  int **v14;
  char *v15;
  int v16;
  int **result;
  int **v18;
  int v19;
  int v20;
  int v21;
  int *v22;

  v18 = a1;
  v4 = a3;
  v19 = a2;
  v20 = a4;
  if ( a1[29] )
    ErrorHandler();
  v5 = "\"&(*,.";
  v6 = v18;
  v7 = 0;
  do
  {
    v8 = Function_223d6bc(v19, *(uchar *)v5, v4, v20);
    ++v7;
    ++v5;
    *v6 = v8;
    ++v6;
  }
  while ( v7 < 6 );
  v9 = "#$%')+-/";
  v10 = v18;
  v11 = 0;
  do
  {
    v10[6] = Function_223d6ec(v19, *(uchar *)v9, v4, v20);
    ++v11;
    ++v9;
    ++v10;
  }
  while ( v11 < 8 );
  v21 = 0;
  v12 = &byte_2240430;
  v13 = "";
  v14 = v18;
  v15 = &byte_2240420;
  v22 = dword_2240428;
  do
  {
    v16 = Function_223d720(
            v19,
            (int)v18[(uchar)*v15],
            (int)v14[6],
            (uchar)*v13,
            (uchar)*v12,
            *(uchar *)v22);
    v14[14] = (int *)v16;
    Function_2015268(v16, 128 - (uchar)*v13, 96 - (uchar)*v12++);
    v22 = (int *)((char *)v22 + 1);
    ++v13;
    ++v14;
    ++v15;
    ++v21;
  }
  while ( v21 < 8 );
  result = v18;
  v18[29] = (int *)1;
  return result;
}

//----- (0223E438) --------------------------------------------------------
int __fastcall Function_223e438(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  uint **v5;
  int v6;
  int v7;
  int result;

  v1 = a1;
  if ( *(uint *)(a1 + 116) != 1 )
    ErrorHandler();
  v2 = 0;
  v3 = v1;
  do
  {
    Function_2015238(*(int **)(v3 + 56));
    ++v2;
    v3 += 4;
  }
  while ( v2 < 8 );
  v4 = 0;
  v5 = (uint **)v1;
  do
  {
    Function_2015164(*v5);
    ++v4;
    ++v5;
  }
  while ( v4 < 6 );
  v6 = 0;
  v7 = v1;
  do
  {
    Function_20151d4(*(uint **)(v7 + 24));
    ++v6;
    v7 += 4;
  }
  while ( v6 < 8 );
  result = 0;
  *(uint *)(v1 + 116) = 0;
  return result;
}

//----- (0223E484) --------------------------------------------------------
uint __fastcall Function_223e484(int a1, uint a2, int a3)
{
  uint v3;
  int v4;
  int v5;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( a2 >= 8 )
    ErrorHandler();
  return Function_2015240(*(uint *)(v4 + 4 * v3 + 56), v5);
}

//----- (0223E4A4) --------------------------------------------------------
int __fastcall Function_223e4a4(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a2;
  v3 = 5;
  v4 = a1 + 20;
  do
  {
    result = Function_20152bc(*(uint *)(v4 + 56), v2);
    ++v3;
    v4 += 4;
  }
  while ( v3 <= 7 );
  return result;
}

//----- (0223E4C0) --------------------------------------------------------
int __fastcall Function_223e4c0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a2;
  v3 = 5;
  v4 = a1 + 20;
  do
  {
    result = Function_2015270(*(uint *)(v4 + 56), v2, v2);
    ++v3;
    v4 += 4;
  }
  while ( v3 <= 7 );
  return result;
}

//----- (0223E4E0) --------------------------------------------------------
char *__fastcall Function_223e4e0(int a1, uint a2, char a3)
{
  uint v3;
  int v4;
  char v5;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( a2 >= 8 )
    ErrorHandler();
  return Function_2015294(*(uint *)(v4 + 4 * v3 + 56), v5);
}

//----- (0223E500) --------------------------------------------------------
uint *__fastcall Function_223e500(uint *a1)
{
  a1[27] = 1;
  a1[28] = 0;
  return Function_223d9dc(a1 + 22, 4096, 4014, 4);
}

//----- (0223E51C) --------------------------------------------------------
int __fastcall Function_223e51c(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  uint *v6;
  int result;

  v2 = a1;
  v3 = a1[27];
  if ( v3 )
  {
    if ( v3 != 1 )
      return ErrorHandler();
  }
  else
  {
    if ( v2[28] )
      Function_223d9dc(v2 + 22, dword_2240454[a2], dword_2240448[a2], *((uchar *)&dword_2240414 + a2));
    else
      Function_223d9dc(v2 + 22, dword_2240448[a2], dword_2240454[a2], *((uchar *)&dword_2240414 + a2));
    ++v2[27];
  }
  v4 = Function_223d9ec(v2 + 22);
  v5 = 0;
  v6 = v2;
  do
  {
    result = Function_2015270(v6[14], v2[22], v2[22]);
    ++v5;
    ++v6;
  }
  while ( v5 <= 2 );
  if ( v4 == 1 )
  {
    result = 0;
    v2[27] = 0;
  }
  return result;
}

//----- (0223E5A4) --------------------------------------------------------
int *__fastcall Function_223e5a4(int *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int *v6;
  int v7;
  int *result;

  v4 = a2;
  v5 = a3;
  v6 = a1;
  v7 = a4;
  result = Call_FillMemWithValue(a1, 0, 0x20u);
  v6[5] = v4;
  v6[6] = v5;
  v6[7] = v7;
  return result;
}

//----- (0223E5C0) --------------------------------------------------------
int *__fastcall Function_223e5c0(int *a1)
{
  int *v1;

  v1 = a1;
  if ( *a1 )
    ErrorHandler();
  return Call_FillMemWithValue(v1, 0, 0x20u);
}

//----- (0223E5DC) --------------------------------------------------------
void __fastcall __spoils<R1,R2,R3,R12> Function_223e5dc(int a1, int *a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint *v9;
  int *v10;
  int v11;
  int v12;
  int v13;

  v13 = a4;
  v11 = 0x80000;
  v4 = a1;
  v10 = a2;
  v5 = a4;
  v12 = 393216;
  v6 = 0;
  v7 = a3 + 56;
  do
  {
    v8 = Function_223d9a8(v10, v7, 128, 96, 0, 2, v5);
    *(uint *)(v4 + 4) = v8;
    Function_2021cac(v8, 0);
    Function_2021d6c(*(uint *)(v4 + 4), v6 + 4);
    Function_2021c50(*(uint **)(v4 + 4), &v11);
    ++v6;
    v4 += 4;
  }
  while ( v6 < 4 );
  *v9 = 1;
}

//----- (0223E63C) --------------------------------------------------------
int __fastcall Function_223e63c(uint *a1)
{
  uint *v1;
  int v2;
  uint *v3;
  int result;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    Function_2021bd4(v3[1]);
    ++v2;
    ++v3;
  }
  while ( v2 < 4 );
  result = 0;
  *v1 = 0;
  return result;
}

//----- (0223E658) --------------------------------------------------------
uint __fastcall Function_223e658(int a1)
{
  int v1;
  int v2;
  uint result;
  int v4;
  uint v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v1 = a1;
  v2 = *(uint *)(a1 + 20);
  result = *(uint *)(a1 + 24);
  v4 = v2 + 152;
  v5 = 0;
  if ( result )
  {
    v6 = v1;
    do
    {
      v7 = *(uchar *)(*(uint *)(v1 + 20) + v5 + 304);
      v8 = *(uchar *)(v4 + v7) << 12;
      v9 = *(uchar *)(v4 + v7 + 4) << 12;
      Function_2021c50(*(uint **)(v6 + 4), &v8);
      result = *(uint *)(v1 + 24);
      ++v5;
      v6 += 4;
    }
    while ( v5 < result );
  }
  return result;
}

//----- (0223E69C) --------------------------------------------------------
uint __fastcall Function_223e69c(int a1, int a2)
{
  int v2;
  uint result;
  uint v4;
  int v5;
  int v6;
  int v7;

  v2 = a1;
  result = *(uint *)(a1 + 24);
  v4 = 0;
  v7 = a2;
  if ( result )
  {
    v5 = v2;
    do
    {
      v6 = *(uchar *)(*(uint *)(v2 + 20) + v4 + 304);
      if ( v6 != Function_223d570(*(uint **)(v2 + 28)) )
        Function_2021cac(*(uint *)(v5 + 4), v7);
      result = *(uint *)(v2 + 24);
      ++v4;
      v5 += 4;
    }
    while ( v4 < result );
  }
  return result;
}

//----- (0223E6D4) --------------------------------------------------------
int __fastcall Function_223e6d4(int *a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int v7;
  int *v8;
  int v9;
  int result;

  v6 = a2;
  v7 = a3;
  v8 = a1;
  v9 = a4;
  Call_FillMemWithValue(a1, 0, 0x38u);
  v8[7] = v7;
  v8[8] = v6;
  *v8 = a6;
  result = a5;
  v8[9] = v9;
  v8[6] = a5;
  return result;
}

//----- (0223E6F8) --------------------------------------------------------
int *__fastcall Function_223e6f8(int *a1)
{
  int *v1;

  v1 = a1;
  if ( a1[10] )
    ErrorHandler();
  Function_223e994(v1);
  Function_223e9d0(v1);
  return Call_FillMemWithValue(v1, 0, 0x38u);
}

//----- (0223E720) --------------------------------------------------------
int __fastcall Function_223e720(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int result;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( *(uint *)(a1 + 40) )
    ErrorHandler();
  *(uint *)(v4 + 4) = v5;
  Function_223e77c(v4, v6);
  Function_223e844(v4, v6, v7);
  Function_201ff0c(2u, 0);
  Function_201ff0c(4u, 0);
  result = 1;
  *(uint *)(v4 + 40) = 1;
  return result;
}

//----- (0223E760) --------------------------------------------------------
int __fastcall Function_223e760(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( *(uint *)(a1 + 40) != 1 )
    ErrorHandler();
  Function_223e824(v1);
  result = 0;
  *(uint *)(v1 + 40) = 0;
  return result;
}

//----- (0223E77C) --------------------------------------------------------
int __fastcall Function_223e77c(int a1, int a2)
{
  int v2;
  short *v3;
  int v4;
  int v5;
  int result;
  uint v7;

  v2 = a1;
  v7 = a2;
  Function_200dd0c(*(uint **)(a1 + 4), 2u, 1, 0, *(uint *)(a1 + 24), a2);
  LoadFromNARC_PlFont2(0, 64, v7);
  Function_200daa4(*(uint **)(v2 + 4), 2u, 31, 1, 0, v7);
  LoadFromNARC_PlFont1(0, 96, v7);
  v3 = &word_22405C0;
  v4 = 0;
  v5 = v2;
  do
  {
    *(uint *)(v5 + 8) = Function_201a778(v7, 1);
    Function_201a7e8(*(uint **)(v2 + 4), *(uint *)(v5 + 8), 2, *v3, v3[1], v3[2], v3[3], v3[4], v3[5]);
    result = Function_201ada4_ClearTextBox(*(uint *)(v5 + 8), 0);
    ++v4;
    v5 += 4;
    v3 += 6;
  }
  while ( v4 < 4 );
  return result;
}

//----- (0223E824) --------------------------------------------------------
uint __fastcall Function_223e824(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = a1;
  v2 = 0;
  do
  {
    Function_201a8fc(*(uint *)(v1 + 8));
    result = Function_201a928(*(uint *)(v1 + 8), 1);
    ++v2;
    v1 += 4;
  }
  while ( v2 < 4 );
  return result;
}

//----- (0223E844) --------------------------------------------------------
int __fastcall Function_223e844(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  ushort *v9;
  int v10;

  v10 = a4;
  v4 = a1;
  v5 = a3;
  v6 = a2;
  Function_2007130(a3, 6u, 0, 128, 32, a2);
  Function_20070e8(v5, 5u, *(uint **)(v4 + 4), 1u, 0, 0, 0, v6);
  v7 = Function_20071d0(v5, 7u, 0, &v9, v6);
  Function_20198c0(
    *(uint *)(v4 + 4),
    1,
    (int)(v9 + 6),
    0,
    0,
    (uint)*v9 << 21 >> 24,
    (uint)v9[1] << 21 >> 24);
  Function_2019e2c(*(uint *)(v4 + 4), 1, 0, 0, (uint)*v9 << 21 >> 24, (uint)v9[1] << 21 >> 24, 4u);
  free(v7);
  return Function_201c3c0(*(uint *)(v4 + 4), 1);
}

//----- (0223E8DC) --------------------------------------------------------
int __fastcall Function_223e8dc(int *a1, int a2)
{
  int v2;
  int *v3;
  int result;

  v2 = a2;
  v3 = a1;
  result = *(uint *)(a2 + 48) + 1;
  *(uint *)(a2 + 48) = result;
  if ( result >= 30 )
  {
    Function_201ff0c(2u, 0);
    Function_201ff0c(4u, 0);
    Call_RemoveTaskFromTaskList(v3);
    result = 0;
    *(uint *)(v2 + 44) = 0;
  }
  return result;
}

//----- (0223E908) --------------------------------------------------------
uint __fastcall Function_223e908(int *a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v2 = a1;
  v3 = a2;
  if ( a1[11] )
    ErrorHandler();
  v2[11] = (int)AddTaskToTaskList1((int)Function_223e8dc, (int)v2, 0x400u);
  v2[12] = 0;
  Function_201ada4_ClearTextBox(v2[2], 0);
  v4 = 4 * v3;
  Function_2002eec(1, *(uint *)(v2[7] + v4 + 56), 0, 0x80u);
  v5 = *(uint *)(v2[7] + v4 + 56);
  Function_201d78c(v2[2], 1);
  Function_201a954(v2[2], v6);
  Function_201ff0c(2u, 1);
  return Function_201ff0c(4u, 1);
}

//----- (0223E984) --------------------------------------------------------
BOOL __fastcall Function_223e984(int a1)
{
  return *(uint *)(a1 + 44) == 0;
}

//----- (0223E994) --------------------------------------------------------
int __fastcall Function_223e994(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = *(uint *)(a1 + 44);
  if ( result )
  {
    Function_201ff0c(2u, 0);
    Function_201ff0c(4u, 0);
    Call_RemoveTaskFromTaskList(*(int **)(v1 + 44));
    result = 0;
    *(uint *)(v1 + 44) = 0;
  }
  return result;
}

//----- (0223E9BC) --------------------------------------------------------
int __fastcall Function_223e9bc(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_223e9d0(a1);
  result = Function_200e7fc(*(int **)(v1 + 20), 1);
  *(uint *)(v1 + 52) = result;
  return result;
}

//----- (0223E9D0) --------------------------------------------------------
int __fastcall Function_223e9d0(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = *(uint *)(a1 + 52);
  if ( result )
  {
    Function_200eba0(result);
    result = 0;
    *(uint *)(v1 + 52) = 0;
  }
  return result;
}

//----- (0223E9E4) --------------------------------------------------------
int __fastcall Function_223e9e4(int a1)
{
  int *v1;
  int v2;
  int v3;

  v1 = (int *)a1;
  Function_2019ebc(*(uint **)(a1 + 4), 2u);
  Function_201ada4_ClearTextBox(v1[3], 15);
  Function_2002eec(0, *(uint *)(v1[7] + 52), 0, 0xE0u);
  v2 = *(uint *)(v1[7] + 52);
  Function_201d78c(v1[3], 0);
  Function_200dc48(v1[3], 0, 31, 1u);
  Function_201ada4_ClearTextBox(v1[4], 15);
  v3 = *(uint *)(v1[7] + 100);
  Function_201d78c(v1[4], 0);
  Function_200dc48(v1[4], 0, 31, 1u);
  Function_201a9a4(v1[3]);
  return Function_201a9a4(v1[4]);
}

//----- (0223EA6C) --------------------------------------------------------
int __fastcall Function_223ea6c(int *a1)
{
  int *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v1 = a1;
  v2 = *(uint *)(a1[7] + 76);
  Function_201d78c(a1[3], 0);
  Function_200b60c(*(uint *)(v1[7] + 4), 0, *(uchar *)(v1[9] + 102), 2, 2, 1);
  Function_200b60c(*(uint *)(v1[7] + 4), 1u, *(uchar *)(v1[9] + 103), 2, 2, 1);
  Function_200b60c(*(uint *)(v1[7] + 4), 2u, *(uchar *)(v1[9] + 104), 2, 2, 1);
  Function_200c388(*(uint **)(v1[7] + 4), *(uint *)(v1[7] + 8), *(uint *)(v1[7] + 80));
  v3 = *(uint *)(v1[7] + 8);
  Function_201d78c(v1[3], 0);
  v4 = *(uint *)(v1[7] + 84);
  Function_201d78c(v1[3], 0);
  Function_200b60c(*(uint *)(v1[7] + 4), 0, *(uint *)(v1[9] + 88), 4, 0, 1);
  if ( *(uint *)(v1[9] + 88) == 1 )
    v5 = 3;
  else
    v5 = 5;
  Function_200c388(*(uint **)(v1[7] + 4), *(uint *)(v1[7] + 8), *(uint *)(v1[7] + 4 * v5 + 76));
  v6 = *(uint *)(v1[7] + 8);
  Function_201d78c(v1[3], 0);
  v7 = *(uint *)(v1[7] + 92);
  Function_201d78c(v1[3], 0);
  Function_200b60c(*(uint *)(v1[7] + 4), 0, *(uint *)(v1[9] + 92), 4, 0, 1);
  if ( *(uint *)(v1[9] + 92) == 1 )
    v8 = 3;
  else
    v8 = 5;
  Function_200c388(*(uint **)(v1[7] + 4), *(uint *)(v1[7] + 8), *(uint *)(v1[7] + 4 * v8 + 76));
  v9 = *(uint *)(v1[7] + 8);
  Function_201d78c(v1[3], 0);
  return Function_201a9a4(v1[3]);
}

//----- (0223EBD8) --------------------------------------------------------
int __fastcall Function_223ebd8(int *a1)
{
  int *v1;
  int v2;

  v1 = a1;
  Function_200bf74(*(uint *)(a1[7] + 4), 3u, *(uchar *)(a1[9] + 100));
  Function_200b60c(*(uint *)(v1[7] + 4), 1u, *(uchar *)(v1[9] + 101), 2, 2, 1);
  Function_200b60c(*(uint *)(v1[7] + 4), 2u, v1[8], 2, 2, 1);
  Function_200c388(*(uint **)(v1[7] + 4), *(uint *)(v1[7] + 8), *(uint *)(v1[7] + 104));
  v2 = *(uint *)(v1[7] + 8);
  Function_201d78c(v1[4], 0);
  return Function_201a9a4(v1[4]);
}

//----- (0223EC4C) --------------------------------------------------------
int *__fastcall Function_223ec4c(int *result, int a2)
{
  switch ( a2 )
  {
    case 0:
      return (int *)Function_223e9e4((int)result);
    case 1:
      return (int *)Function_223ea6c(result);
    case 2:
      result = (int *)Function_223ebd8(result);
      break;
  }
  return result;
}

//----- (0223EC70) --------------------------------------------------------
int __fastcall Function_223ec70(int a1)
{
  int v1;

  v1 = a1;
  Function_2019ebc(*(uint **)(a1 + 4), 2u);
  Function_201acf4(*(uint *)(v1 + 12));
  return Function_201acf4(*(uint *)(v1 + 16));
}

//----- (0223EC8C) --------------------------------------------------------
int __fastcall Function_223ec8c(int a1)
{
  int *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v1 = (int *)a1;
  Function_223e9d0(a1);
  switch ( (uchar)Function_201ada4_ClearTextBox(v1[5], 15) )
  {
    case 0u:
      v2 = *(uint *)(v1[9] + 4 * *(uchar *)(v1[9] + 324) + 308);
      Function_200b498(*(uint *)(v1[7] + 4), 0);
      Function_200c388(*(uint **)(v1[7] + 4), *(uint *)(v1[7] + 8), *(uint *)(v1[7] + 24));
      v3 = *(uint *)(v1[7] + 8);
      break;
    case 1u:
      v4 = *(uint *)(v1[7] + 28);
      break;
    case 2u:
      v5 = *(uint *)(v1[7] + 40);
      break;
    case 3u:
      v6 = *(uint *)(v1[7] + 36);
      break;
    case 4u:
      v7 = *(uint *)(v1[7] + 32);
      break;
    case 5u:
      v8 = *(uint *)(v1[7] + 44);
      break;
    case 6u:
      v9 = *(uint *)(v1[7] + 12);
      break;
    default:
      break;
  }
  Function_201d78c(v1[5], 1);
  Function_200e060(v1[5], 0, 1, 0);
  return Function_201a9a4(v1[5]);
}

//----- (0223ED3C) --------------------------------------------------------
int *__fastcall Function_223ed3c(int *a1)
{
  return Call_FillMemWithValue(a1, 0, 0x414u);
}

//----- (0223ED4C) --------------------------------------------------------
int *__fastcall Function_223ed4c(int *a1)
{
  int *v1;

  v1 = a1;
  if ( *a1 )
    ErrorHandler();
  return Call_FillMemWithValue(v1, 0, 0x414u);
}

//----- (0223ED6C) --------------------------------------------------------
uint *__fastcall Function_223ed6c(uint *result, int a2, int a3, int a4)
{
  result[1] = a2;
  result[2] = a3;
  result[3] = a4;
  *result = 1;
  return result;
}

//----- (0223ED78) --------------------------------------------------------
int __fastcall Function_223ed78(uint *a1)
{
  uint *v1;
  int v2;
  uint *v3;
  int v4;
  int result;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  v4 = (int)(a1 + 4);
  do
  {
    if ( v3[34] )
      Function_223f054(v4);
    ++v2;
    v3 += 32;
    v4 += 128;
  }
  while ( v2 < 8 );
  result = 0;
  *v1 = 0;
  return result;
}

//----- (0223EDA4) --------------------------------------------------------
int __fastcall Function_223eda4(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  v5 = a1 + 16;
  do
  {
    result = *(uint *)(v2 + 136);
    if ( result )
    {
      Function_223f074(v5);
      result = *(uint *)(v2 + 32);
      if ( result )
        result = Function_223f0f4(v5, v3);
    }
    ++v4;
    v2 += 128;
    v5 += 128;
  }
  while ( v4 < 8 );
  return result;
}

//----- (0223EDDC) --------------------------------------------------------
int __fastcall Function_223eddc(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int result;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  long long v21;
  int v22;
  long long v23;
  int v24;
  int v25;
  int v26;
  int v27;
  long long v28;
  int v29;
  int v30;
  long long v31;
  int v32;
  int v33;
  long long v34;
  long long v35;
  long long v36;
  long long v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;

  v46 = a4;
  v4 = a1;
  v5 = a3 + 3 * a2;
  v6 = &dword_22404B0[7 * v5];
  v7 = *v6;
  v8 = v6[1];
  v6 += 2;
  v39 = v7;
  v40 = v8;
  v9 = *v6;
  v10 = v6[1];
  v6 += 2;
  v41 = v9;
  v42 = v10;
  v11 = *v6;
  v12 = v6[1];
  v6 += 2;
  v43 = v11;
  v44 = v12;
  result = *v6;
  v45 = *v6;
  if ( v5 < 8 )
  {
    v38 = Function_223eff4(v4);
    if ( !v38 )
    {
      v38 = Function_223f018(v4);
      if ( !v38 )
        ErrorHandler();
      Function_223f054(v38);
    }
    v14 = (ushort)Function_201d35c();
    v15 = Function_201d35c();
    u32_div_f(v15, BYTE1(v43));
    v17 = (uchar)v43 + v16;
    v18 = Function_201d35c();
    u32_div_f(v18, HIBYTE(v43));
    v20 = 2 * (v14 >> 4);
    v21 = (BYTE2(v43) + v19 + v17) << 12;
    v22 = SLOWORD(Unknown_20f983c[v14 >> 4]);
    v23 = v17 << 12;
    v24 = *((short *)Unknown_20f983c + v20 + 1);
    v25 = Function_201d35c();
    u32_div_f(v25, v40);
    v27 = v39 + v26;
    v28 = ll_mul(v22, v23);
    v29 = HIDWORD(v28);
    v30 = v28;
    v31 = ll_mul(v22, v21);
    v32 = HIDWORD(v31);
    v33 = v31;
    v34 = ll_mul(v22, v42);
    v35 = ll_mul(v24, v23);
    v36 = ll_mul(v24, v21);
    v37 = ll_mul(v24, v42);
    Function_223f1c0(
      v38,
      HIBYTE(v44),
      (((uint)(v30 + 2048) >> 12) | ((__CFADD__(v30, 2048) + v29) << 20)) + 0x80000,
      (((uint)(v33 + 2048) >> 12) | ((__CFADD__(v33, 2048) + v32) << 20)) + 0x80000,
      ((uint)(v34 + 2048) >> 12) | ((__CFADD__((uint)v34, 2048) + HIDWORD(v34)) << 20),
      (((uint)(v35 + 2048) >> 12) | ((__CFADD__((uint)v35, 2048) + HIDWORD(v35)) << 20)) + 393216,
      (((uint)(v36 + 2048) >> 12) | ((__CFADD__((uint)v36, 2048) + HIDWORD(v36)) << 20)) + 393216,
      (v37 + 2048) >> 12,
      410,
      v27,
      v41,
      (uchar)v45,
      (uchar)v44,
      v4[2] + 56 * BYTE1(v44),
      BYTE2(v44),
      v4[1],
      v4[3],
      BYTE1(v45),
      BYTE2(v45));
    *(uint *)(v38 + 124) = v4[260];
    result = v4[260] + 1;
    v4[260] = result;
  }
  return result;
}

//----- (0223EFCC) --------------------------------------------------------
int __fastcall Function_223efcc(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  v2 = 0;
  v3 = a1 + 16;
  do
  {
    result = *(uint *)(v1 + 136);
    if ( result )
      result = Function_223f268(v3);
    ++v2;
    v1 += 128;
    v3 += 128;
  }
  while ( v2 < 8 );
  return result;
}

//----- (0223EFF4) --------------------------------------------------------
int __fastcall Function_223eff4(int a1)
{
  int v1;
  int v2;

  v1 = 0;
  v2 = a1;
  do
  {
    if ( !*(uint *)(v2 + 136) )
      return a1 + 16 + (v1 << 7);
    ++v1;
    v2 += 128;
  }
  while ( v1 < 8 );
  return 0;
}

//----- (0223F018) --------------------------------------------------------
int __fastcall Function_223f018(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = 0;
  v2 = 0;
  v3 = a1 + 16;
  do
  {
    if ( *(uint *)(a1 + 136) )
    {
      if ( v1 )
      {
        if ( *(uint *)(v1 + 124) > *(uint *)(a1 + 140) )
          v1 = v3;
      }
      else
      {
        v1 = v3;
      }
    }
    ++v2;
    a1 += 128;
    v3 += 128;
  }
  while ( v2 < 8 );
  return v1;
}

//----- (0223F054) --------------------------------------------------------
int *__fastcall Function_223f054(int *a1)
{
  int *v1;

  v1 = a1;
  if ( !a1[30] )
    ErrorHandler();
  Function_2021bd4(v1[30]);
  return Call_FillMemWithValue(v1, 0, 0x80u);
}

//----- (0223F074) --------------------------------------------------------
int *__fastcall Function_223f074(int *a1)
{
  int *v1;
  int *result;

  v1 = a1;
  if ( !a1[1] )
  {
    a1[1] = Function_223da94(a1 + 12);
    Function_223da94(v1 + 18);
    Function_223da94(v1 + 24);
    v1[5] = v1[12];
    v1[6] = v1[18];
    Function_2021c50((uint *)v1[30], v1 + 5);
    if ( v1[3] )
    {
      v1[8] = v1[24];
      v1[9] = v1[24];
      v1[10] = v1[24];
      Function_2021c70((uint *)v1[30], v1 + 8);
    }
  }
  if ( !v1[2] && !Function_2021fd0(v1[30]) )
    v1[2] = 1;
  result = (int *)*v1;
  if ( !*v1 )
  {
    result = (int *)v1[1];
    if ( result == (int *)1 )
    {
      result = (int *)v1[2];
      if ( result == (int *)1 )
        result = Function_223f054(v1);
    }
  }
  return result;
}

//----- (0223F0F4) --------------------------------------------------------
int __fastcall Function_223f0f4(int a1, int a2)
{
  int v2;
  int result;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  long long v10;
  int v11;
  long long v12;
  long long v13;
  long long v14;
  int v15;
  int v16;

  v2 = a1;
  result = *(uint *)(a1 + 4);
  if ( result == 1 )
  {
    result = *(uint *)(v2 + 8);
    if ( result == 1 )
    {
      v4 = *(uint *)(v2 + 44);
      if ( *(uchar *)(a2 + 164) )
        v5 = v4 - *(ushort *)(a2 + 162);
      else
        v5 = v4 + *(ushort *)(a2 + 162);
      *(uint *)(v2 + 44) = v5;
      v6 = *(uint *)(v2 + 20) - 0x80000;
      v7 = *(uint *)(v2 + 24) - 393216;
      v8 = Function_201e3bc(v6 >> 12, v7 >> 12, 0, 0);
      v9 = FX_Atan2Idx(v7, v6);
      v10 = v8 << 12;
      v11 = ((v9 + *(uint *)(v2 + 44)) & 0xFFFF) >> 4;
      v12 = ll_mul(*((short *)Unknown_20f983c + v11 * 2 + 1), (int)v10);
      v13 = (uint)v12;
      LODWORD(v12) = 2048;
      v15 = (v13 + v12) >> 12;
      v14 = ll_mul(SLOWORD(Unknown_20f983c[v11]), v10);
      v15 += 0x80000;
      v16 = (ull)((v14 + 2048) >> 12) + 393216;
      result = Function_2021c50(*(uint **)(v2 + 120), &v15);
    }
  }
  return result;
}

//----- (0223F1C0) --------------------------------------------------------
char *__fastcall Function_223f1c0(uint *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, uint a15, int *a16, int a17, int a18, uchar a19)
{
  uint *v19;
  int v20;
  int v21;

  v19 = a1;
  *a1 = a2;
  v20 = a3;
  Function_223da34(a1 + 12, a3, a4, a5, a13);
  Function_223da34(v19 + 18, a6, a7, a8, a13);
  Function_223da34(v19 + 24, a9, a10, a11, a13);
  v19[5] = v20;
  v19[6] = a6;
  v19[8] = a9;
  v19[9] = a9;
  v19[10] = a9;
  v19[3] = a12;
  v19[4] = a18;
  v21 = Function_223d9a8(a16, a14, v20, a6, 0, a19, a17);
  v19[30] = v21;
  if ( !v21 )
    ErrorHandler();
  if ( v19[3] )
    Function_2021c80((uint *)v19[30], v19 + 8, 2);
  Function_2021d6c(v19[30], a15);
  Function_2021cc8(v19[30], 1);
  return Function_2021e80(v19[30], 2);
}

//----- (0223F268) --------------------------------------------------------
uint __fastcall Function_223f268(uint *a1)
{
  uint *v1;
  uint result;

  v1 = a1;
  result = *a1;
  if ( result == 1 )
  {
    Function_223da34(v1 + 24, v1[24], 205, 0, 8);
    *v1 = 0;
    v1[3] = 1;
    result = Function_2021cf8(v1[30], 2);
  }
  return result;
}

//----- (0223F29C) --------------------------------------------------------
int *__fastcall Function_223f29c(int *a1)
{
  return Call_FillMemWithValue(a1, 0, 0x80u);
}

//----- (0223F2A8) --------------------------------------------------------
int *__fastcall Function_223f2a8(int *a1)
{
  int *v1;

  v1 = a1;
  if ( a1[31] )
    ErrorHandler();
  return Call_FillMemWithValue(v1, 0, 0x80u);
}

//----- (0223F2C4) --------------------------------------------------------
int __fastcall Function_223f2c4(int a1, int *a2, uint a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int result;
  uint v10;

  v4 = a1;
  v5 = a2;
  v6 = a4;
  v10 = a3;
  if ( *(uint *)(a1 + 124) )
    ErrorHandler();
  *(uint *)v4 = v5;
  Function_223d7a8(v5, (int **)(v4 + 4), v6, 0x21u, 2, 0x20u, 0x1Fu, 0x1Eu, 7000, v10);
  v7 = 0;
  v8 = v4;
  do
  {
    *(uint *)(v8 + 60) = Function_223d9a8(v5, v4 + 4, 0x80000, 393216, 0, 0, v10);
    if ( v7 >= 2 )
      Function_2021d6c(*(uint *)(v8 + 60), 1u);
    Function_2021cac(*(uint *)(v8 + 60), 0);
    ++v7;
    v8 += 16;
  }
  while ( v7 < 4 );
  result = 1;
  *(uint *)(v4 + 124) = 1;
  return result;
}

//----- (0223F348) --------------------------------------------------------
int __fastcall Function_223f348(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  if ( *(uint *)(a1 + 124) != 1 )
    ErrorHandler();
  v2 = 0;
  v3 = v1;
  do
  {
    Function_2021bd4(*(uint *)(v3 + 60));
    ++v2;
    v3 += 16;
  }
  while ( v2 < 4 );
  Function_223d95c(*(uint *)v1, (int **)(v1 + 4));
  result = 0;
  *(uint *)(v1 + 124) = 0;
  return result;
}

//----- (0223F378) --------------------------------------------------------
int __fastcall Function_223f378(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = 0;
  v2 = a1 + 60;
  do
  {
    if ( v1 != 2 && v1 )
      result = Function_223f458(v2);
    else
      result = Function_223f420(v2);
    ++v1;
    v2 += 16;
  }
  while ( v1 < 4 );
  return result;
}

//----- (0223F3A0) --------------------------------------------------------
int __fastcall Function_223f3a0(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 4 )
    ErrorHandler();
  if ( v2 != 2 && v2 )
    result = Function_223f44c(v3 + 60 + 16 * v2);
  else
    result = Function_223f410(v3 + 60 + 16 * v2);
  return result;
}

//----- (0223F3D0) --------------------------------------------------------
uint __fastcall Function_223f3d0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 4 )
    ErrorHandler();
  v4 = v3 + 16 * v2;
  *(uint *)(v4 + 72) = 0;
  return Function_2021cac(*(uint *)(v4 + 60), 0);
}

//----- (0223F3F0) --------------------------------------------------------
BOOL __fastcall Function_223f3f0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 4 )
    ErrorHandler();
  return *(uint *)(v3 + 16 * v2 + 72) == 0;
}

//----- (0223F410) --------------------------------------------------------
uint *__fastcall Function_223f410(uint *result)
{
  result[1] = 0;
  result[2] = 3;
  result[3] = 1;
  return result;
}

//----- (0223F420) --------------------------------------------------------
int __fastcall Function_223f420(int result)
{
  uint *v1;

  v1 = (uint *)result;
  if ( *(uint *)(result + 12) )
  {
    Function_223f458(result);
    result = v1[1];
    if ( !result )
    {
      result = v1[2] - 1;
      v1[2] = result;
      if ( result <= 0 )
      {
        v1[3] = 0;
        result = Function_2021cac(*v1, 0);
      }
    }
  }
  return result;
}

//----- (0223F44C) --------------------------------------------------------
int __fastcall Function_223f44c(int result)
{
  *(uint *)(result + 4) = 0;
  *(uint *)(result + 12) = 1;
  return result;
}

//----- (0223F458) --------------------------------------------------------
int __fastcall Function_223f458(int a1)
{
  uint *v1;
  int result;
  uint v3;

  v1 = (uint *)a1;
  result = *(uint *)(a1 + 12);
  if ( result )
  {
    v3 = v1[1];
    if ( v3 )
    {
      if ( v3 == 8 )
      {
        Function_2021cac(*v1, 0);
      }
      else if ( v3 == 16 )
      {
        result = 0;
        v1[1] = 0;
        return result;
      }
    }
    else
    {
      Function_2021cac(*v1, 1);
    }
    result = v1[1] + 1;
    v1[1] = result;
  }
  return result;
}

//----- (0223F494) --------------------------------------------------------
int *__fastcall Function_223f494(int *a1, int a2)
{
  int v2;
  int *v3;
  int *result;

  v2 = a2;
  v3 = a1;
  result = Call_FillMemWithValue(a1, 0, 0x90Cu);
  v3[1] = v2;
  return result;
}

//----- (0223F4AC) --------------------------------------------------------
int *__fastcall Function_223f4ac(int *a1)
{
  int *v1;

  v1 = a1;
  if ( *a1 )
    ErrorHandler();
  return Call_FillMemWithValue(v1, 0, 0x90Cu);
}

//----- (0223F4CC) --------------------------------------------------------
void __fastcall __spoils<R1,R2,R3,R12> Function_223f4cc(int a1, int *a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint *v9;
  int *v10;

  v10 = a2;
  v4 = a4;
  v5 = 0;
  v6 = a1;
  v7 = a3 + 56;
  do
  {
    v8 = Function_223d9a8(v10, v7, 0, 0, 0, 5, v4);
    *(uint *)(v6 + 80) = v8;
    Function_2021cac(v8, 0);
    ++v5;
    v6 += 72;
  }
  while ( v5 < 32 );
  *v9 = 1;
}

//----- (0223F510) --------------------------------------------------------
int __fastcall Function_223f510(uint *a1)
{
  uint *v1;
  int v2;
  uint *v3;
  int result;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    Function_2021bd4(v3[20]);
    ++v2;
    v3 += 18;
  }
  while ( v2 < 32 );
  result = 0;
  *v1 = 0;
  return result;
}

//----- (0223F52C) --------------------------------------------------------
int __fastcall Function_223f52c(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = 0;
  v2 = a1 + 12;
  do
  {
    result = Function_223f670(v2);
    ++v1;
    v2 += 72;
  }
  while ( v1 < 32 );
  return result;
}

//----- (0223F544) --------------------------------------------------------
uint __fastcall Function_223f544(int a1, int a2, int a3)
{
  int v3;
  ll v4;
  int v5;
  int v6;
  uint result;
  int v8;
  int v9;
  int v10;

  v3 = a1;
  v9 = a2;
  v10 = a3;
  v4 = ((ll)*((short *)Unknown_20f983c + 2 * (FX_Atan2Idx(a2 - 128, a3 - 96) >> 4) + 1) << 16)
     + 2048;
  v5 = Function_223f650(v3);
  if ( v5 )
    Function_223f6cc(v5, *(uint *)(v3 + 8), v9 << 12, v10 << 12);
  v6 = Function_223f650(v3);
  if ( v6 )
    Function_223f6cc(v6, *(uint *)(v3 + 8), v9 << 12, v10 << 12);
  result = s32_div_f(*(uint *)(v3 + 8) + 1, *(uint *)(v3 + 4));
  *(uint *)(v3 + 8) = v8;
  return result;
}

//----- (0223F650) --------------------------------------------------------
int __fastcall Function_223f650(int a1)
{
  int v1;
  int v2;

  v1 = 0;
  v2 = a1;
  do
  {
    if ( !*(uint *)(v2 + 12) )
      return a1 + 12 + 72 * v1;
    ++v1;
    v2 += 72;
  }
  while ( v1 < 32 );
  return 0;
}

//----- (0223F670) --------------------------------------------------------
int __fastcall Function_223f670(int *a1)
{
  int *v1;
  int result;

  v1 = a1;
  result = *a1;
  if ( result )
  {
    if ( !v1[1] )
    {
      v1[1] = Function_223da94(v1 + 5);
      Function_223da94(v1 + 11);
      v1[2] = v1[5];
      v1[3] = v1[11];
      Function_2021c50((uint *)v1[17], v1 + 2);
    }
    result = v1[1];
    if ( result == 1 )
      result = Function_223f6b4(v1);
  }
  return result;
}

//----- (0223F6B4) --------------------------------------------------------
int __fastcall Function_223f6b4(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  result = *a1;
  if ( result )
  {
    Function_2021cac(v1[17], 0);
    result = 0;
    *v1 = 0;
  }
  return result;
}

//----- (0223F6CC) --------------------------------------------------------
int __fastcall Function_223f6cc(uint *a1, uint a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  uint *v8;
  int v9;
  int v10;
  uint v11;
  int v12;
  int v13;
  int result;

  v8 = a1;
  v9 = a3;
  v10 = a4;
  v11 = a2;
  Function_223da34(a1 + 5, a3, a5, a7, 16);
  Function_223da34(v8 + 11, v10, a6, a8, 16);
  v8[2] = v9;
  v8[3] = v10;
  Function_2021cac(v8[17], 1);
  Function_2021d6c(v8[17], v11);
  Function_2021de0(v8[17], v12, v13);
  Function_2021cc8(v8[17], 1);
  Function_2021e80(v8[17], 2);
  *v8 = 1;
  result = 0;
  v8[1] = 0;
  return result;
}

//----- (0223F730) --------------------------------------------------------
int __fastcall Function_223f730(int *a1, ushort a2, ushort a3, int a4, uint a5)
{
  int *v5;
  ushort v6;
  ushort v7;
  int v8;
  int result;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  *a1 = Function_2098ffc(a5, 1u, 1, 1, 2);
  result = Function_209916c(*v5, v8, v6, v7, 0, 0, 0, 0);
  v5[1] = result;
  return result;
}

//----- (0223F770) --------------------------------------------------------
uint __fastcall Function_223f770(int a1)
{
  int *v1;

  v1 = (int *)a1;
  Function_2099370(*(uint *)a1, *(ushort **)(a1 + 4));
  return Function_209903c(*v1);
}

//----- (0223F784) --------------------------------------------------------
int __fastcall Function_223f784(int *a1)
{
  return Function_2099160(*a1);
}

//----- (0223F790) --------------------------------------------------------
int *__fastcall Function_223f790(int **a1, uint a2, int *a3)
{
  int **v3;
  int *v4;
  int *result;

  v3 = a1;
  v4 = a3;
  result = Function_2015920(a2);
  *v3 = result;
  v3[1] = v4;
  return result;
}

//----- (0223F7A4) --------------------------------------------------------
uint __fastcall Function_223f7a4(int *a1)
{
  return Function_2015938(*a1);
}

//----- (0223F7B0) --------------------------------------------------------
int __fastcall Function_223f7b0(int *a1)
{
  int v2;
  int v3;
  int v4;
  int v5;
  char v6;
  char v7;

  v2 = a1[1];
  v3 = 2;
  v4 = 175;
  v5 = 5;
  v6 = 24;
  v7 = 8;
  return Function_2015958(*a1, (int)&v2);
}

//----- (0223F7DC) --------------------------------------------------------
int __fastcall Function_223f7dc(int *a1)
{
  int **v1;
  int v2;

  v1 = (int **)a1;
  v2 = Function_20159fc(*a1);
  if ( v2 )
    Function_2015a54(*v1);
  return v2;
}

//----- (0223F7F4) --------------------------------------------------------
int __fastcall Function_223f7f4(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return 160 * Function_201d4cc(a3 - a5, a4 - a6, a1 - a5, a2 - a6);
}

//----- (0223F820) --------------------------------------------------------
uint *__fastcall Function_223f820(uint *result)
{
  uchar *v1;
  int v2;

  v1 = result;
  v2 = 24;
  do
  {
    *v1++ = 0;
    --v2;
  }
  while ( v2 );
  *result = 128;
  result[1] = 96;
  result[2] = 128;
  result[3] = 96;
  return result;
}

//----- (0223F83C) --------------------------------------------------------
int __fastcall Function_223f83c(int *a1)
{
  int *v1;
  int result;

  v1 = a1;
  if ( word_21BF6DE )
  {
    *a1 = (ushort)word_21BF6D8;
    a1[1] = (ushort)word_21BF6DA;
    if ( !a1[5] )
    {
      a1[2] = *a1;
      a1[3] = a1[1];
    }
  }
  a1[4] = Function_223f7f4(*a1, a1[1], a1[2], a1[3], 128, 96);
  v1[2] = *v1;
  v1[3] = v1[1];
  result = (ushort)word_21BF6DE;
  v1[5] = (ushort)word_21BF6DE;
  return result;
}

//----- (0223F88C) --------------------------------------------------------
int __fastcall Function_223f88c(int result, uint *a2)
{
  int v2;

  *(uchar *)result = *a2;
  *(uchar *)(result + 1) = a2[1];
  v2 = a2[4];
  if ( v2 >= 0 )
  {
    *(ushort *)(result + 2) = v2;
    *(uchar *)(result + 4) = 0;
  }
  else
  {
    *(ushort *)(result + 2) = -(short)v2;
    *(uchar *)(result + 4) = 1;
  }
  return result;
}

//----- (0223F8AC) --------------------------------------------------------
int __fastcall Function_223f8ac(uint *a1, int a2, int a3)
{
  uint *v3;
  uint v4;
  int v5;
  ll v6;
  int result;

  v3 = a1;
  v4 = Function_201e3bc(a2, a3, 128, 96);
  v5 = v3[3];
  if ( v5 < 0 )
    v5 = -v5;
  v6 = (ll)Function_223fb68((ushort)v5, *v3) << 18;
  result = 0;
  if ( v4 < 0x10 )
    return 1;
  if ( v4 > ((int)((v6 + 2048) >> 12) >> 12) + 8 )
    result = 2;
  return result;
}

//----- (0223F900) --------------------------------------------------------
int __fastcall Function_223f900(uint *a1, int a2, uint a3, int a4)
{
  uint v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  uint v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  uint v18;
  int v19;
  uint v20;
  uint v21;

  v5 = a1;
  a1[4] = 1;
  v6 = a2;
  v18 = a3;
  v19 = a4;
  v20 = 0;
  v21 = 0;
  if ( a3 )
  {
    do
    {
      v7 = 28 * *(uchar *)(v6 + v21 + 304);
      v8 = Function_223f8ac(v5, *(uchar *)(v6 + v7 + 144), *(uchar *)(v6 + v7 + 145));
      if ( v8 )
      {
        if ( v8 == 1 )
        {
          v4 = (uint)*(ushort *)(v6 + v7 + 146) << 15 >> 16;
          v5[4] = 0;
        }
        else if ( v8 == 2 )
        {
          v4 = 0;
          v5[4] = 0;
        }
      }
      else
      {
        v4 = *(ushort *)(v6 + v7 + 146);
      }
      if ( *(uchar *)(v6 + v7 + 148) )
        v20 -= v4;
      else
        v20 += v4;
      ++v21;
    }
    while ( v21 < v18 );
  }
  v9 = s32_div_f(v20, v18);
  v10 = FX_Div(*((uchar *)&dword_2240590 + *v5) << 12, 835584);
  v11 = v5[3] + ((int)((ll_mul((int)(v9 << 12), v10) + 2048) >> 12) >> 12);
  v5[3] = v11;
  if ( v11 <= 0 )
  {
    if ( v11 < 0 )
    {
      v13 = v11 + (ushort)aHp[*v5];
      v5[3] = v13;
      if ( v13 > 0 )
        v5[3] = 0;
    }
  }
  else
  {
    v12 = v11 - (ushort)aHp[*v5];
    v5[3] = v12;
    if ( v12 < 0 )
      v5[3] = 0;
  }
  v14 = v5[3];
  if ( v14 <= 3640 )
  {
    if ( v14 < -3640 )
      v5[3] = -3640;
  }
  else
  {
    v5[3] = 3640;
  }
  v15 = v5[2];
  v16 = s32_div_f(v5[3], 160);
  v5[2] += Function_201d580(68, v16);
  if ( !v19 && v5[3] >= 0 || v19 == 1 && v5[3] < 0 )
  {
    if ( v19 )
    {
      if ( (ushort)v15 < (v5[2] & 0xFFFF) )
        ++v5[1];
    }
    else if ( (ushort)v15 > (v5[2] & 0xFFFF) )
    {
      ++v5[1];
    }
  }
  return v5[2] & 0xFFFF;
}

//----- (0223FA84) --------------------------------------------------------
int __fastcall Function_223fa84(int a1)
{
  return *(uint *)(a1 + 8) & 0xFFFF;
}

//----- (0223FA8C) --------------------------------------------------------
int __fastcall Function_223fa8c(int a1)
{
  return *(uint *)(a1 + 4);
}

//----- (0223FA90) --------------------------------------------------------
int __fastcall Function_223fa90(int *a1, int a2)
{
  int v2;
  int *v3;
  int result;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 3 )
    ErrorHandler();
  *v3 = v2;
  result = 0;
  v3[1] = 0;
  return result;
}

//----- (0223FAA8) --------------------------------------------------------
int __fastcall Function_223faa8(int a1)
{
  return *(uint *)(a1 + 12);
}

//----- (0223FAAC) --------------------------------------------------------
uint __fastcall Function_223faac(int *a1, int a2, int a3)
{
  int *v3;
  int v4;
  int v5;
  uint v6;
  uint v7;
  uint result;
  int v9;

  v3 = a1;
  a1[6] = 0;
  v4 = a2;
  v5 = a3;
  a1[4] = 0;
  if ( Function_223fb30(a2, a3) )
  {
    v6 = v3[3] + 1;
    v3[3] = v6;
    if ( v6 >= 0x1E )
    {
      v7 = v3[1];
      if ( v7 < 0x270F )
        v3[1] = v7 + 1;
      v3[6] = 1;
      v3[3] = 0;
    }
    result = 0;
    v3[5] = 0;
  }
  else if ( Function_223fb50(v4, v5) )
  {
    result = v3[2] + 1;
    v3[2] = result;
    if ( result >= 0x5A )
    {
      v3[2] = 0;
      if ( v3[5] )
      {
        v3[4] = 1;
        v9 = *v3;
        result = 9999;
        if ( (uint)*v3 < 0x270F )
        {
          result = v9 + 1;
          *v3 = v9 + 1;
        }
      }
      else
      {
        v3[4] = 2;
        result = 1;
        v3[5] = 1;
      }
    }
  }
  else
  {
    result = 0;
    v3[5] = 0;
  }
  return result;
}

//----- (0223FB30) --------------------------------------------------------
BOOL __fastcall Function_223fb30(int a1, int a2)
{
  if ( a2 == 2 )
    return 0;
  if ( a1 < 0 )
    a1 = -a1;
  return a1 >= 3640;
}

//----- (0223FB50) --------------------------------------------------------
BOOL __fastcall Function_223fb50(int a1)
{
  if ( a1 < 0 )
    a1 = -a1;
  return a1 <= 910;
}

//----- (0223FB68) --------------------------------------------------------
int __fastcall Function_223fb68(int a1)
{
  int v1;

  v1 = a1 - 910;
  if ( v1 < 0 )
    v1 = 0;
  return FX_Div((((ll)(v1 << 12) << 10) + 2048) >> 12, 11182080) + 4096;
}

//----- (0223FBA4) --------------------------------------------------------
int __fastcall Function_223fba4(int result)
{
  uchar *v1;
  int v2;

  v1 = (uchar *)result;
  v2 = 16;
  do
  {
    *v1++ = 0;
    --v2;
  }
  while ( v2 );
  *(uint *)(result + 8) = 2;
  *(uint *)(result + 4) = -1;
  return result;
}

//----- (0223FBBC) --------------------------------------------------------
int __fastcall Function_223fbbc(BOOL *a1, int a2, int a3, int a4)
{
  int v4;
  BOOL *v5;
  int v6;
  int result;
  int v8;
  uint v9;
  BOOL v10;
  BOOL v11;
  int v12;
  int v13;
  int v14;

  v4 = a2;
  v5 = a1;
  a1[3] = 0;
  v6 = a4;
  result = Function_223fc3c();
  if ( result != 1 && v6 != 1 )
  {
    if ( v5[1] < 0 )
    {
      v8 = Function_201d35c();
      u32_div_f(v8, 5);
      v10 = v9 <= v5[2];
      v5[3] = 1;
      if ( v10 == *v5 )
      {
        v11 = v5[2];
        if ( *v5 == 1 )
        {
          v12 = v11 - 1;
          if ( v12 >= 0 )
            v5[2] = v12;
        }
        else
        {
          v13 = v11 + 1;
          if ( v13 < 5 )
            v5[2] = v13;
        }
      }
      else
      {
        *v5 = v10;
        v5[2] = 2;
      }
      u32_div_f(v8, 60);
      v5[1] = *((uchar *)dword_22405F0 + v4) + v14;
    }
    result = v5[1] - 1;
    v5[1] = result;
  }
  return result;
}

//----- (0223FC3C) --------------------------------------------------------
BOOL __fastcall Function_223fc3c(uint *a1, int a2)
{
  return a2 < 0 && !*a1 || a2 > 0 && *a1 == 1;
}

//----- (0223FC58) --------------------------------------------------------
int __fastcall Function_223fc58(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v8;
  int v9;
  int v10;
  int *v11;

  v2 = a1;
  v3 = 31;
  v11 = (int *)a2;
  v4 = 31;
  v5 = Function_223fa8c(a2);
  v6 = v2[2];
  if ( v6 >= 3 )
    return 1;
  if ( *v2 == 600 || v5 >= *((uchar *)dword_2240594 + v6) )
  {
    v5 = 0;
    ++v2[2];
    *v2 = 0;
    v8 = v2[2];
    if ( v8 >= 3 )
      return 1;
    Function_223fa90(v11, v8);
  }
  v9 = 600 - *v2;
  if ( v9 <= 60 )
    v3 = s32_div_f(31 * v9, 60);
  v10 = *((uchar *)dword_2240594 + v2[2]) - v5;
  if ( v10 <= 5 )
    v4 = s32_div_f(31 * v10, 5);
  if ( v3 >= v4 )
    v2[1] = v4;
  else
    v2[1] = v3;
  ++*v2;
  return 0;
}

//----- (0223FCE8) --------------------------------------------------------
uint *__fastcall Function_223fce8(uint *a1, int a2, int a3, int a4, int a5, int a6, uint *a7)
{
  int v7;
  int v8;
  int v9;
  uchar *v10;
  uint *result;
  int v12;
  int v13;
  int v14;
  uint *v15;

  v7 = a2;
  a1[3] = 0;
  v8 = a4;
  v15 = a1;
  v9 = a3;
  v10 = (uchar *)(a2 + 152);
  if ( Function_223fb50(a4) != 1 && Function_223fb30(v8, a5) != 1 && a6 )
  {
    if ( v9 > 1 )
    {
      result = a7;
      if ( a7 != (uint *)1 )
      {
        result = 0;
        if ( v9 <= 0 )
        {
LABEL_11:
          v12 = 1;
          if ( v9 <= 1 )
          {
LABEL_15:
            v13 = v15[1];
            if ( v13 >= 4 )
            {
              v15[3] = 1;
              result = v15;
              ++*v15;
              v15[2] = 1;
            }
            else
            {
              v14 = v13 + 1;
              result = v15;
              v15[1] = v14;
            }
          }
          else
          {
            while ( (uint)Function_201e3bc(
                                    *v10,
                                    v10[4],
                                    v10[*(uchar *)(v7 + v12 + 304)],
                                    v10[*(uchar *)(v7 + v12 + 304) + 4]) <= 0x20 )
            {
              if ( ++v12 >= v9 )
                goto LABEL_15;
            }
            result = v15;
            v15[1] = 0;
            v15[2] = 0;
          }
        }
        else
        {
          while ( *(ushort *)(v7 + 28 * *((uchar *)result + v7 + 304) + 146) > 0x258u )
          {
            result = (uint *)((char *)result + 1);
            if ( (int)result >= v9 )
              goto LABEL_11;
          }
        }
      }
    }
    else
    {
      result = v15;
      v15[1] = 0;
      v15[2] = 0;
    }
  }
  else
  {
    result = v15;
    v15[1] = 0;
    v15[2] = 0;
  }
  return result;
}

//----- (0223FDB0) --------------------------------------------------------
int __fastcall Function_223fdb0(int *a1)
{
  int *v1;

  v1 = a1;
  Call_FillMemWithValue(a1, 0, 0x68u);
  Function_223fba4((int)(v1 + 3));
  v1[20] = 31;
  return Function_223fbbc(v1 + 3, 0, 0, 0);
}

//----- (0223FDD8) --------------------------------------------------------
int __fastcall Function_223fdd8(int *a1, int a2, uint a3)
{
  int *v3;
  int v4;
  uint v5;
  int v7;
  uint *v8;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( Function_223fc58(a1 + 19, (int)(a1 + 7)) == 1 )
    return 1;
  Function_223f900(v3 + 7, v4, v5, v3[3]);
  v7 = Function_223faa8((int)(v3 + 7));
  Function_223faac(v3 + 12, v7, v3[21]);
  v8 = (uint *)Function_223fc3c(v3 + 3, v7);
  Function_223fce8(v3 + 22, v4, v5, v7, v3[21], v3[11], v8);
  Function_223fbbc(v3 + 3, v3[21], v7, v3[24]);
  return 0;
}

//----- (0223FE50) --------------------------------------------------------
int __fastcall Function_223fe50(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  char v6;
  int v7;
  char v8;
  int v9;
  int result;

  v2 = a1;
  v3 = a2 + 12;
  v4 = 0;
  do
  {
    v5 = v3 + v4;
    *(uchar *)(v3 + v4) = *(uchar *)(a2 + 144);
    v6 = *(uchar *)(a2 + 145);
    ++v4;
    a2 += 28;
    *(uchar *)(v5 + 4) = v6;
  }
  while ( v4 < 4 );
  v7 = Function_223faa8((int)(v2 + 7));
  if ( v7 < 0 )
  {
    *(ushort *)(v3 + 10) = -(short)v7;
    v8 = 1;
  }
  else
  {
    *(ushort *)(v3 + 10) = v7;
    v8 = 0;
  }
  *(uchar *)(v3 + 12) = v8;
  *(ushort *)(v3 + 8) = Function_223fa84((int)(v2 + 7));
  *(uchar *)(v3 + 18) = v2[16];
  *(uchar *)(v3 + 19) = v2[18];
  *(uchar *)(v3 + 17) = v2[3];
  *(uchar *)(v3 + 14) = v2[6];
  v9 = v2[21];
  if ( v9 >= 3 )
    LOBYTE(v9) = 2;
  *(uchar *)(v3 + 13) = v9;
  *(uchar *)(v3 + 16) = v2[20];
  result = v2[25];
  *(uchar *)(v3 + 15) = result;
  return result;
}

//----- (0223FEC0) --------------------------------------------------------
int __fastcall Function_223fec0(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  char v6;
  int v7;
  char v8;
  int v9;
  int v10;
  int result;

  v2 = a1;
  v3 = a2 + 12;
  v4 = 0;
  do
  {
    v5 = v3 + v4;
    *(uchar *)(v3 + v4) = *(uchar *)(a2 + 144);
    v6 = *(uchar *)(a2 + 145);
    ++v4;
    a2 += 28;
    *(uchar *)(v5 + 4) = v6;
  }
  while ( v4 < 4 );
  v7 = Function_223faa8((int)(v2 + 7));
  if ( v7 < 0 )
  {
    *(ushort *)(v3 + 10) = -(short)v7;
    v8 = 1;
  }
  else
  {
    *(ushort *)(v3 + 10) = v7;
    v8 = 0;
  }
  *(uchar *)(v3 + 12) = v8;
  *(ushort *)(v3 + 8) = Function_223fa84((int)(v2 + 7));
  v9 = v2[16];
  if ( v9 )
    *(uchar *)(v3 + 18) = v9;
  if ( !*(uchar *)(v3 + 19) )
    *(uchar *)(v3 + 19) = v2[18];
  if ( v2[6] == 1 )
  {
    *(uchar *)(v3 + 17) = v2[3];
    *(uchar *)(v3 + 14) = v2[6];
  }
  v10 = v2[21];
  if ( v10 >= 3 )
    LOBYTE(v10) = 2;
  *(uchar *)(v3 + 13) = v10;
  *(uchar *)(v3 + 16) = v2[20];
  result = *(uchar *)(v3 + 15);
  if ( !*(uchar *)(v3 + 15) )
  {
    result = v2[25];
    *(uchar *)(v3 + 15) = result;
  }
  return result;
}

//----- (0223FF44) --------------------------------------------------------
int __fastcall Function_223ff44(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  char v7;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    v5 = a2 + v4;
    *(uchar *)(a2 + v4++) = -128;
    *(uchar *)(v5 + 4) = 96;
  }
  while ( v4 < 4 );
  v6 = Function_223faa8((int)(a1 + 7));
  if ( v6 < 0 )
  {
    *(ushort *)(v3 + 10) = -(short)v6;
    v7 = 1;
  }
  else
  {
    *(ushort *)(v3 + 10) = v6;
    v7 = 0;
  }
  *(uchar *)(v3 + 12) = v7;
  *(ushort *)(v3 + 8) = Function_223fa84((int)(v2 + 7));
  *(uchar *)(v3 + 18) = v2[16];
  *(uchar *)(v3 + 19) = v2[18];
  *(uchar *)(v3 + 17) = v2[3];
  *(uchar *)(v3 + 14) = v2[6];
  *(uchar *)(v3 + 13) = v2[21];
  *(uchar *)(v3 + 16) = v2[20];
  result = v2[25];
  *(uchar *)(v3 + 15) = result;
  return result;
}

//----- (0223FFA0) --------------------------------------------------------
uint *__fastcall Function_223ffa0(uint *result)
{
  ++*result;
  return result;
}

//----- (0223FFA8) --------------------------------------------------------
int __fastcall Function_223ffa8(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a2;
  v3 = u32_div_f(a1, 6);
  result = u32_div_f(*(uchar *)(v2 + 35915159) * v3, 10);
  if ( result > 9999 )
    result = 9999;
  return result;
}

//----- (0223FFD4) --------------------------------------------------------
uint __fastcall Function_223ffd4(int *a1, uchar *a2, int a3, int a4, uint a5)
{
  uint v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint v10;
  int v11;
  int v12;
  int *v13;
  int v14;
  int v15;
  int *v16;
  char *v17;
  int v18;
  int v19;
  bool v20;
  int v21;
  char *v22;
  int v23;
  int v24;
  int v25;
  char *v26;
  uint v27;
  int v28;
  int v29;
  int v30;
  int v31;
  char *v32;
  char *v33;
  uint result;
  int *v35;
  uchar *v36;
  int v37;
  int v38;
  uint v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  uint v45;
  char v46;
  char v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;

  v53 = a4;
  v35 = a1;
  v36 = a2;
  v44 = a3 + 52;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v5 = a4;
  v37 = a3;
  v43 = 0;
  v41 = 0;
  v45 = 0;
  if ( a4 )
  {
    do
    {
      v6 = 4 * *(uchar *)(v37 + v45 + 304);
      v7 = Function_20973c8(*(uint *)(v44 + v6), a5);
      v8 = 0;
      v9 = v7;
      v10 = 0;
      if ( v5 )
      {
        v11 = *(uint *)(v44 + v6);
        do
        {
          if ( v11 == *(uint *)(v44 + 4 * *(uchar *)(v37 + v10 + 304)) )
            ++v8;
          ++v10;
        }
        while ( v10 < v5 );
      }
      if ( v8 > v41 )
        v41 = v8;
      v12 = 0;
      v13 = &v48;
      do
      {
        v14 = Function_20973d4(v9, v12++ + 5);
        *v13 += v14;
        ++v13;
      }
      while ( v12 < 5 );
      v43 += Function_20973d4(v9, 0xAu);
      free(v9);
      ++v45;
    }
    while ( v45 < v5 );
  }
  v40 = v41 >= 2 && v5 > 1;
  v15 = 0;
  v16 = &v48;
  v42 = u32_div_f(v43, v5) - v5;
  v38 = 0;
  v17 = &v47;
  do
  {
    s32_div_f(v38 + 1, 5);
    v19 = *(&v48 + v18);
    v20 = *v16 - v19 < 0;
    *(uint *)v17 = *v16 - v19;
    if ( v20 )
      ++v15;
    ++v16;
    v17 += 4;
    ++v38;
  }
  while ( v38 < 5 );
  v21 = 0;
  v22 = &v47;
  do
  {
    ++v21;
    *(uint *)v22 -= v15;
    v22 += 4;
  }
  while ( v21 < 5 );
  if ( v15 >= 4 )
    v40 = 1;
  v23 = u32_div_f(1800000, *v35);
  s32_div_f(v23, 10);
  if ( v24 >= 5 )
    v23 += 10;
  v25 = 0;
  v26 = &v47;
  v39 = s32_div_f(v23, 10);
  do
  {
    v27 = v39 * *(uint *)v26;
    s32_div_f(v39 * *(uint *)v26, 100);
    if ( v28 >= 50 )
      v27 += 100;
    v29 = s32_div_f(v27, 100) - (v35[12] + v35[13]);
    *(uint *)v26 = v29;
    if ( v29 < 0 )
      *(uint *)v26 = 0;
    ++v25;
    v26 += 4;
  }
  while ( v25 < 5 );
  if ( v5 > 1 )
  {
    v30 = Function_223ffa8(v35[22], v5);
    if ( v30 > 10 )
      v30 = 10;
    v42 -= v30;
  }
  if ( v42 < 15 )
    LOBYTE(v42) = 15;
  v31 = 0;
  v32 = &v47;
  v33 = &v46;
  do
  {
    ++v31;
    *v33 = *(uint *)v32;
    v32 += 4;
    ++v33;
  }
  while ( v31 < 5 );
  v35[1] = Function_202a9e4(v36, (int)&v46, (uchar)v42, v40);
  result = Function_202aabc(v36);
  v35[2] = result;
  return result;
}

//----- (022401AC) --------------------------------------------------------
uint __fastcall Function_22401ac(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  uint v5;
  uint v6;
  uint result;

  v3 = a1;
  *(uint *)(a2 + 32) = a1[13];
  v4 = a2 + 32;
  *(uint *)(a2 + 36) = a1[12];
  *(uint *)(v4 + 8) = Function_223ffa8(a1[22], a3);
  *(uchar *)(v4 + 12) = v3[1];
  *(uchar *)(v4 + 13) = v3[2];
  v5 = *v3;
  *(uchar *)(v4 + 14) = s32_div_f(v5, 1800);
  v6 = v5 - 1800 * *(uchar *)(v4 + 14);
  *(uchar *)(v4 + 15) = s32_div_f(v6, 30);
  result = s32_div_f(100 * (v6 - 30 * *(uchar *)(v4 + 15)), 30);
  *(uchar *)(v4 + 16) = result;
  return result;
}

